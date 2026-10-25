// Builds the ssbu-xref-db database from searches/memory-search_*.csv (xrefs, per function info,
// reports, caller chains, decompiled files and the cross-cutting tables). It never writes to the program
//
// Ported from dump_xrefs.py (removed, see git history). Its row order, formatting and parsing quirks
// are kept on purpose, bug fixes aside, so a rebuild diffs cleanly against the pre-port DB
//
// Args are key=value pairs, all optional:
//   root=<dir>             input and output root, default <script dir>/.. when it has searches/, else DEFAULT_ROOT
//   deps=<dir>             base of the relative dependency paths, default root
//   only=<a,b,c>           categories to process, default all
//   tables=<a,b|all|none>  keys of TABLE_FILES to write, default all (meta.csv and INDEX.md are always written)
//   decomp=<true|false>    run the decompiler, default true
//   clean=<true|false>     delete the generated files this run rewrites before writing, default true
//   game_version=<str>     recorded in tables/meta.csv and INDEX.md, default 13.0.5
//@author Atamol
//@category SSBU

import java.io.BufferedWriter;
import java.io.Closeable;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.io.StringWriter;
import java.io.Writer;
import java.math.BigDecimal;
import java.math.BigInteger;
import java.math.RoundingMode;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.security.MessageDigest;
import java.time.OffsetDateTime;
import java.time.format.DateTimeFormatter;
import java.util.*;
import java.util.concurrent.ConcurrentHashMap;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.zip.CRC32;

import generic.jar.ResourceFile;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.app.util.demangler.DemangledObject;
import ghidra.app.util.demangler.gnu.GnuDemangler;
import ghidra.framework.Application;
import ghidra.program.model.address.*;
import ghidra.program.model.block.*;
import ghidra.program.model.data.*;
import ghidra.program.model.data.Enum;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.Union;
import ghidra.program.model.lang.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Program;
import ghidra.program.model.mem.*;
import ghidra.program.model.pcode.*;
import ghidra.program.model.symbol.*;
import ghidra.util.task.TaskMonitor;

public class DumpXrefs extends GhidraScript {

    static final int MAX_DEPTH = 6;
    static final boolean INCLUDE_DECOMP = true;
    static final int DECOMP_TIMEOUT = 60;
    static final boolean INCLUDE_CHAINS = true;
    static final int CHAIN_DEPTH = 5;
    static final int CHAIN_FANOUT = 4;
    static final boolean INCLUDE_CFG = true;
    static final boolean INCLUDE_STRUCT_ACCESS = true;
    static final boolean INCLUDE_CLONES = true;
    static final boolean INCLUDE_VTABLES = true;
    static final boolean INCLUDE_FINGERPRINT = true;
    static final boolean INCLUDE_CONSTANTS = true;
    static final boolean INCLUDE_TYPEINFO = true;
    static final boolean INCLUDE_CALLGRAPH = true;
    static final boolean INCLUDE_SYMBOL_CATALOG = true;
    static final boolean INCLUDE_FUNCTION_CATALOG = true;
    static final boolean INCLUDE_CALL_SITES = true;
    static final boolean INCLUDE_STRING_CATALOG = true;
    static final boolean INCLUDE_CONSTANTS_INDEX = true;
    static final boolean INCLUDE_NAMESPACE_TREE = true;
    static final boolean INCLUDE_INDEX_MD = true;
    static final boolean INCLUDE_META = true;
    static final boolean INCLUDE_RUST_EXTERNS = true;
    static final boolean INCLUDE_STRUCTS_CATALOG = true;
    static final boolean INCLUDE_ENUMS_CATALOG = true;
    static final boolean INCLUDE_STRING_XREFS = true;
    static final boolean INCLUDE_SEGMENTS = true;
    static final boolean INCLUDE_IMPORTS = true;
    static final boolean INCLUDE_DISASM = true;
    static final boolean INCLUDE_COMMENTS = true;
    static final boolean INCLUDE_GLOBALS_ACCESS = true;
    static final boolean INCLUDE_NAME_HINTS = true;
    static final boolean INCLUDE_BRUTE_REFS = true;
    static final boolean INCLUDE_STRING_TABLES = true;
    static final int STRING_TABLE_MIN_ENTRIES = 4;
    static final boolean INCLUDE_HASH40 = true;
    static final boolean INCLUDE_HASH40_FULL_SCAN = true;
    // Limits the Hash40 Loads cell only, tables/hash40_loads.csv keeps every load
    static final int HASH40_LOADS_PER_FUNC = 32;
    // relative to deps
    static final String HASH40_LABELS_CSV = "../SSBU-Dump-Scripts/ParamLabels.csv";
    // relative to root
    static final List<String> HASH40_EXTRA_LABEL_FILES = List.of("searches/known_hash40.txt");
    // null means the image base
    static final Long NRO_BASE_OVERRIDE = null;
    // relative to root, translates 13.0.4 image offsets of ssbu-decomp to 13.0.5
    static final String VERSION_MAP_CSV = "tables/version_map_13.0.4_13.0.5.csv";
    // Priority order, earlier sources come first in External Names
    static final List<ExtNameSource> EXTERNAL_NAME_SOURCES = List.of(
        new ExtNameSource("tables/curated_names.csv", false, "offset", "name", null,
            0L, false, true, "curated"),
        new ExtNameSource("../ssbu-decomp/data/functions.csv", true, "Address", "Name", "Size",
            0x7100000000L, true, false, "ssbu-decomp:functions"));
    // Only hid the 0x100 header shift of the old raw import, off since names are remapped
    static final boolean INCLUDE_EXTERNAL_FUZZY = false;
    static final long EXTERNAL_FUZZY_TOLERANCE = 0x1000;
    // relative to deps
    static final List<String> CONSUMER_SOURCES = List.of("../../system/ssbu-socket-sniffer/src");

    static final int MAX_JOIN = 64;
    static final int REPORT_TOP_N = 50;
    static final int SNIPPET_LINES = 40;
    static final int STRINGS_PER_FUNC = 32;
    static final int CALLS_PER_FUNC = 16;
    static final int STRUCT_ACCESS_PER_FUNC = 32;
    static final int VTABLE_MAX_SLOTS = 256;
    static final int FINGERPRINT_BYTES = 32;
    static final int CONSTANTS_PER_FUNC = 32;
    static final int CALLGRAPH_TOP_N = 30;
    static final int RUST_EXTERNS_TOP_N = 50;
    static final int CONSTANTS_INDEX_MIN_USERS = 1;
    static final int COMMENTS_PER_FUNC = 32;
    static final int COMMENT_MAX_CHARS = 200;
    static final long PROGRESS_INTERVAL_MS = 15000;
    static final String DEFAULT_ROOT = "C:/Users/rjvse/.git/_ssbu/library/ssbu-xref-db";
    // Split so a copy run under a renamed class still credits this script in the outputs
    static final String SCRIPT_FILE = "Dump" + "Xrefs.java";

    static final Map<String, String> TABLE_FILES = tableFiles();
    // These can't be picked with tables= since they describe the run that produced the outputs on disk
    static final String META_FILE = "meta.csv";
    static final String INDEX_FILE = "INDEX.md";
    static final List<String> DECOMP_PATH_TABLES = List.of("vtables", "clones");

    private static Map<String, String> tableFiles() {
        Map<String, String> m = new LinkedHashMap<>();
        m.put("vtables", "vtables.csv");
        m.put("typeinfo", "typeinfo.csv");
        m.put("clones", "clones.csv");
        m.put("symbols", "symbols.csv");
        m.put("functions", "functions.csv");
        m.put("call_sites", "call_sites.csv");
        m.put("strings", "strings.csv");
        m.put("constants", "constants.csv");
        m.put("namespaces", "namespaces.csv");
        m.put("structs", "structs.csv");
        m.put("enums", "enums.csv");
        m.put("string_xrefs", "string_xrefs.csv");
        m.put("hash40_loads", "hash40_loads.csv");
        m.put("hash40_data_refs", "hash40_data_refs.csv");
        m.put("segments", "segments.csv");
        m.put("imports", "imports.csv");
        return Collections.unmodifiableMap(m);
    }

    // writer gate of each table, shared with the clean step so it never deletes a table nothing writes back
    static boolean tableIncluded(Ctx c, String key) {
        switch (key) {
            case "vtables":
                return INCLUDE_VTABLES;
            case "typeinfo":
                return INCLUDE_TYPEINFO;
            case "clones":
                return INCLUDE_CLONES;
            case "symbols":
                return INCLUDE_SYMBOL_CATALOG;
            case "functions":
                return INCLUDE_FUNCTION_CATALOG;
            case "call_sites":
                return INCLUDE_CALL_SITES;
            case "strings":
                return INCLUDE_STRING_CATALOG;
            case "constants":
                return INCLUDE_CONSTANTS_INDEX;
            case "namespaces":
                return INCLUDE_NAMESPACE_TREE;
            case "structs":
                return INCLUDE_STRUCTS_CATALOG;
            case "enums":
                return INCLUDE_ENUMS_CATALOG;
            case "string_xrefs":
                return INCLUDE_STRING_XREFS;
            case "hash40_loads", "hash40_data_refs":
                return INCLUDE_HASH40 && !c.hash40Labels.isEmpty();
            case "segments":
                return INCLUDE_SEGMENTS;
            case "imports":
                return INCLUDE_IMPORTS;
            default:
                return true;
        }
    }

    record ExtNameSource(String path, boolean depsRelative, String addrCol, String nameCol,
            String sizeCol, long addrOffset, boolean versionMapped, boolean optional, String label) {
    }

    // kind is "exact" or a signed distance like "+0x100" for fuzzy hits
    record ExtName(String label, String name, String kind) {
    }

    record ExtSize(long addr, long size, String name, String label) {
    }

    record VersionSeg(long oldStart, long oldEnd, long delta) {
    }

    record Hash40Load(String loadAddr, long value, String label) {
    }

    record MovImm(long imm, String reg, int opc) {
    }

    record StringTable(String base, int length) {
    }

    record InputFile(String label, File path) {
    }

    record DumpStats(int locations, int walked, int funcs) {
    }

    @FunctionalInterface
    interface Step<T> {
        T run() throws Exception;
    }

    @FunctionalInterface
    interface TableStep {
        int run(File out) throws Exception;
    }

    // Unchecked so it passes through module code. Never catch it in a module
    static final class Cancelled extends RuntimeException {
        Cancelled() {
            super("cancelled");
        }
    }

    @Override
    public void run() throws Exception {
        if (currentProgram == null) {
            throw new RuntimeException("no program loaded");
        }
        long t0 = System.currentTimeMillis();
        Opts o = Opts.parse(this, getScriptArgs());
        Ctx c = new Ctx(this, currentProgram, monitor, o);
        c.runStart = now();
        c.allInputs = listInputs(c.searchesDir);
        if (c.allInputs.isEmpty()) {
            println("no memory-search_*.csv files found in " + c.searchesDir);
            return;
        }
        c.inputs = selectInputs(c);
        if (c.inputs.isEmpty()) {
            println("no input matches only=" + String.join(",", c.only));
            return;
        }
        c.inputCount = c.inputs.size();
        printBanner(c);
        try {
            runPasses(c);
        }
        catch (Cancelled e) {
            println("cancelled");
        }
        finally {
            teardownDecompiler(c);
        }
        println(String.format("done in %.1f s, errors: %d", (System.currentTimeMillis() - t0) / 1000.0,
            c.errors));
    }

    private void runPasses(Ctx c) throws Exception {
        step(c, "version map", () -> Loaders.loadVersionMap(c));
        step(c, "external names", () -> Loaders.loadExternalNames(c));
        if (INCLUDE_HASH40) {
            step(c, "hash40 labels", () -> Loaders.loadHash40Labels(c));
            step(c, "hash40 extra labels", () -> Loaders.loadHash40ExtraLabels(c));
            step(c, "hash40 search labels", () -> Loaders.addSearchHashesToLabels(c));
        }
        step(c, "consumer refs", () -> Loaders.collectConsumerRefs(c));
        for (Map.Entry<String, Integer> e : c.consumerLabelCounts()) {
            println("consumer ref: " + e.getKey() + " -> " + e.getValue() + " symbols");
        }

        if (INCLUDE_BRUTE_REFS) {
            List<String> allLocs = collectAllLocations(c);
            Set<Long> targets = locationTargetOffsets(c, allLocs);
            println("brute scan   = scanning " + allLocs.size() + " locations (" + targets.size() +
                " target addresses) across data blocks...");
            Integer n = step(c, "brute pointer index", () -> PrePasses.buildBrutePointerIndex(c, targets));
            println("brute hits   = " + n + " pointer slots (" + c.brutePtrIndex.size() + " unique targets)");
            if (INCLUDE_STRING_TABLES) {
                step(c, "string tables", () -> PrePasses.detectStringTables(c));
            }
        }

        setupDecompiler(c);
        // Clean after the decompiler setup so a decompiler that failed to start does not cost the existing .c files
        if (c.clean) {
            step(c, "clean", () -> {
                cleanOutputs(c);
                return null;
            });
        }
        Map<String, FuncInfo> globalFuncs = jyDict();
        for (InputFile in : c.inputs) {
            c.checkCancelled();
            DumpStats st = step(c, "category " + in.label(), () -> Category.dumpOne(c, in, globalFuncs));
            if (st != null) {
                c.locationCount += st.locations();
            }
        }
        step(c, "global outputs", () -> {
            Category.writeGlobal(c, globalFuncs);
            return null;
        });
        println("global functions: " + globalFuncs.size());
        List<FuncInfo> sortedAll = sortByHitsDesc(globalFuncs.values());
        if (INCLUDE_RUST_EXTERNS) {
            step(c, "rust externs all", () -> Category.emitRustExterns(c, "all", sortedAll));
        }
        step(c, "coverage", () -> {
            Category.writeCoverage(c, globalFuncs);
            return null;
        });
        println("coverage report written");

        // Must stay first since scanVtables adds functions to funcInfoCache, which clones, constants and hash40_loads read
        table(c, "vtables", "vtables emitted: %d slots", f -> TablesA.scanVtables(c, f));
        table(c, "typeinfo", "typeinfo entries: %d", f -> TablesA.scanTypeinfo(c, f));
        table(c, "clones", "clone group rows: %d", f -> TablesA.writeClones(c, f));
        table(c, "symbols", "symbol catalog: %d", f -> TablesA.writeSymbolCatalog(c, f));
        table(c, "functions", "function catalog: %d", f -> TablesA.writeFunctionCatalog(c, f));
        table(c, "call_sites", "call sites: %d", f -> TablesA.writeCallSites(c, f));
        table(c, "strings", "string catalog: %d", f -> TablesA.writeStringsCatalog(c, f));
        table(c, "constants", "constants index rows: %d", f -> TablesA.writeConstantsIndex(c, f));
        table(c, "namespaces", "namespace rows: %d", f -> TablesA.writeNamespaceTree(c, f));
        table(c, "structs", "struct rows: %d", f -> TablesB.writeStructsCatalog(c, f));
        table(c, "enums", "enum rows: %d", f -> TablesB.writeEnumsCatalog(c, f));
        table(c, "string_xrefs", "string xref rows: %d", f -> TablesB.writeStringXrefs(c, f));
        table(c, "hash40_loads", "hash40 loads: %d", f -> TablesB.writeHash40LoadsTable(c, f));
        table(c, "hash40_data_refs", "hash40 data refs: %d", f -> TablesB.writeHash40DataRefsTable(c, f));
        table(c, "segments", "segments: %d", f -> TablesB.writeSegments(c, f));
        table(c, "imports", "imports: %d", f -> TablesB.writeImports(c, f));

        c.runEnd = now();
        // meta.csv first so INDEX.md lists it
        if (INCLUDE_META) {
            step(c, "meta", () -> {
                TablesB.writeMeta(c, new File(c.tablesDir, META_FILE));
                return null;
            });
        }
        if (INCLUDE_INDEX_MD) {
            step(c, "index", () -> {
                TablesB.writeIndexMd(c, new File(c.root, INDEX_FILE), globalFuncs.size());
                return null;
            });
        }
        println("decomp cache : " + c.decompCache.size() + " functions");
    }

    // Logs and swallows a failing pass so one broken module does not lose a long run
    private <T> T step(Ctx c, String name, Step<T> s) {
        c.checkCancelled();
        try {
            return s.run();
        }
        catch (Cancelled e) {
            throw e;
        }
        catch (Exception e) {
            c.error(name, e);
            return null;
        }
    }

    private void table(Ctx c, String key, String fmt, TableStep s) {
        if (!c.tableOn(key) || !tableIncluded(c, key)) {
            return;
        }
        File out = c.tableFile(key);
        Integer n = step(c, key, () -> s.run(out));
        if (n != null) {
            println(String.format(fmt, n));
        }
    }

    private void setupDecompiler(Ctx c) {
        try {
            c.bbm = new BasicBlockModel(c.program);
        }
        catch (Exception e) {
            c.error("basic block model", e);
        }
        if (!INCLUDE_DECOMP || !c.decompEnabled) {
            return;
        }
        try {
            DecompInterface d = new DecompInterface();
            d.setOptions(new DecompileOptions());
            if (!d.openProgram(c.program)) {
                println("decompiler: openProgram failed: " + d.getLastMessage());
                d.dispose();
                return;
            }
            c.decomp = d;
        }
        catch (Exception e) {
            c.error("decompiler setup", e);
        }
    }

    private static void teardownDecompiler(Ctx c) {
        if (c.decomp != null) {
            try {
                c.decomp.dispose();
            }
            catch (Exception e) {
            }
            c.decomp = null;
        }
    }

    private void printBanner(Ctx c) {
        println("project root = " + c.root);
        println("deps root    = " + c.deps);
        println("program      = " + safe(() -> c.program.getDomainFile().getPathname()));
        println("image base   = " + c.imageBase);
        println("rel base     = 0x" + Long.toHexString(c.relBase));
        println("game version = " + c.gameVersion);
        println("max depth    = " + MAX_DEPTH);
        println("decompile    = " + (INCLUDE_DECOMP && c.decompEnabled));
        println("chains       = " + INCLUDE_CHAINS + " (depth=" + CHAIN_DEPTH + ", fanout=" + CHAIN_FANOUT + ")");
        println("brute refs   = " + INCLUDE_BRUTE_REFS + ", string tables = " + INCLUDE_STRING_TABLES);
        println("hash40       = " + INCLUDE_HASH40 + " (full scan=" + INCLUDE_HASH40_FULL_SCAN + ")");
        println("ext name dbs = " + EXTERNAL_NAME_SOURCES.size() + " (fuzzy=" + INCLUDE_EXTERNAL_FUZZY + ")");
        println("consumers    = " + CONSUMER_SOURCES.size());
        println("tables       = " + (c.tables.isEmpty() ? "none" : String.join(",", c.tables)));
        println("clean        = " + c.clean);
        println("inputs       = " + c.inputs.size() + " of " + c.allInputs.size() + " files" +
            (c.only != null ? " (only=" + String.join(",", c.only) + ")" : ""));
        if (c.only != null) {
            println("note         = the *_all outputs, coverage.md, INDEX.md, clones, constants and hash40_loads " +
                "cover only these categories");
        }
    }

    private static final Pattern INPUT_NAME = Pattern.compile("^memory-search_(.+)\\.csv$");

    static List<InputFile> listInputs(File searchesDir) {
        List<InputFile> out = new ArrayList<>();
        String[] names = searchesDir.list();
        if (names == null) {
            return out;
        }
        Arrays.sort(names);
        for (String name : names) {
            if (name.equals("memory-search_all.csv")) {
                continue;
            }
            Matcher m = INPUT_NAME.matcher(name);
            if (m.matches()) {
                out.add(new InputFile(m.group(1), new File(searchesDir, name)));
            }
        }
        return out;
    }

    private List<InputFile> selectInputs(Ctx c) {
        if (c.only == null) {
            return new ArrayList<>(c.allInputs);
        }
        Set<String> known = new HashSet<>();
        List<InputFile> out = new ArrayList<>();
        for (InputFile in : c.allInputs) {
            known.add(in.label());
            if (c.only.contains(in.label())) {
                out.add(in);
            }
        }
        for (String l : c.only) {
            if (!known.contains(l)) {
                c.warn("only: no input for label " + l);
            }
        }
        return out;
    }

    static List<String> collectAllLocations(Ctx c) {
        List<String> out = new ArrayList<>();
        for (InputFile in : c.allInputs) {
            List<List<String>> rows;
            try {
                rows = readCsv(in.path());
            }
            catch (Exception e) {
                c.warn("cannot read " + in.path() + ": " + e);
                continue;
            }
            for (int i = 1; i < rows.size(); i++) {
                List<String> row = rows.get(i);
                if (!row.isEmpty()) {
                    out.add(row.get(0));
                }
            }
        }
        return out;
    }

    static Set<Long> locationTargetOffsets(Ctx c, List<String> locs) {
        Set<Long> out = new HashSet<>();
        for (String s : locs) {
            Address a = c.parseLocation(s);
            if (a == null) {
                continue;
            }
            for (Address t : c.locationTargets(a)) {
                out.add(t.getOffset());
            }
        }
        return out;
    }

    // Deletes only what this run writes back, so outputs of categories outside only= and of passes turned off stay
    private static void cleanOutputs(Ctx c) {
        int n = 0;
        if (c.only == null) {
            n += deleteMatching(c, c.xrefsDir, Pattern.compile("xrefs_.*\\.csv"));
            n += deleteMatching(c, c.funcsDir, Pattern.compile("funcs_.*\\.csv"));
            n += deleteMatching(c, c.reportsDir, Pattern.compile("report_.*\\.md|coverage\\.md" +
                (INCLUDE_CALLGRAPH ? "|callgraph_.*\\.mmd" : "")));
            if (INCLUDE_CHAINS) {
                n += deleteMatching(c, c.chainsDir, Pattern.compile("chains_.*\\.csv"));
            }
            if (INCLUDE_RUST_EXTERNS) {
                n += deleteMatching(c, c.rustExternsDir, Pattern.compile(".*\\.rs"));
            }
        }
        else {
            for (InputFile in : c.inputs) {
                String l = in.label();
                n += deleteFile(c, new File(c.xrefsDir, "xrefs_" + l + ".csv"));
                n += deleteFile(c, new File(c.funcsDir, "funcs_" + l + ".csv"));
                n += deleteFile(c, new File(c.reportsDir, "report_" + l + ".md"));
                if (INCLUDE_CALLGRAPH) {
                    n += deleteFile(c, new File(c.reportsDir, "callgraph_" + l + ".mmd"));
                }
                if (INCLUDE_CHAINS) {
                    n += deleteFile(c, new File(c.chainsDir, "chains_" + l + ".csv"));
                }
                if (INCLUDE_RUST_EXTERNS) {
                    n += deleteFile(c, new File(c.rustExternsDir, l + ".rs"));
                }
            }
            n += deleteFile(c, new File(c.funcsDir, "funcs_all.csv"));
            n += deleteFile(c, new File(c.reportsDir, "report_all.md"));
            n += deleteFile(c, new File(c.reportsDir, "coverage.md"));
            if (INCLUDE_RUST_EXTERNS) {
                n += deleteFile(c, new File(c.rustExternsDir, "all.rs"));
            }
        }

        // Per category rows and kept tables point into decompiled/, so wipe it only when all of them are rewritten
        List<String> exts = new ArrayList<>();
        if (c.decomp != null) {
            exts.add("c");
        }
        if (INCLUDE_CFG) {
            exts.add("mmd");
        }
        if (INCLUDE_DISASM) {
            exts.add("asm");
        }
        boolean wipe = c.only == null &&
            DECOMP_PATH_TABLES.stream().allMatch(k -> c.tables.contains(k) && tableIncluded(c, k));
        if (wipe && !exts.isEmpty()) {
            n += deleteMatching(c, c.decompiledDir, Pattern.compile(".*\\.(" + String.join("|", exts) + ")"));
        }
        c.overwriteDecomp = !wipe;

        for (String key : c.tables) {
            if (tableIncluded(c, key)) {
                n += deleteFile(c, c.tableFile(key));
            }
        }
        if (INCLUDE_META) {
            n += deleteFile(c, new File(c.tablesDir, META_FILE));
        }
        c.println("clean        = removed " + n + " generated files" +
            (wipe ? "" : ", decompiled/ kept and refreshed per function"));
    }

    private static int deleteMatching(Ctx c, File dir, Pattern p) {
        File[] files = dir.listFiles();
        if (files == null) {
            return 0;
        }
        int n = 0;
        for (File f : files) {
            if (p.matcher(f.getName()).matches()) {
                n += deleteFile(c, f);
            }
        }
        return n;
    }

    private static int deleteFile(Ctx c, File f) {
        if (!f.isFile()) {
            return 0;
        }
        if (f.delete()) {
            return 1;
        }
        c.warn("clean: cannot delete " + f);
        return 0;
    }

    static final class Opts {
        File root;
        File deps;
        Set<String> only;
        Set<String> tables = new LinkedHashSet<>(TABLE_FILES.keySet());
        boolean decomp = true;
        boolean clean = true;
        String gameVersion = "13.0.5";
        String raw = "";

        private static final Pattern KEY =
            Pattern.compile("(?:^|\\s)(root|deps|only|tables|decomp|clean|game_version)=");
        private static final Pattern STRAY_KEY = Pattern.compile("\\s[A-Za-z_]+=");

        // The bridge splits args on whitespace, so rejoin and cut at known keys to keep paths with spaces
        static Opts parse(GhidraScript s, String[] args) {
            Opts o = new Opts();
            o.raw = args == null ? "" : String.join(" ", args).trim();
            Map<String, String> kv = new LinkedHashMap<>();
            Matcher m = KEY.matcher(o.raw);
            List<int[]> spans = new ArrayList<>();
            List<String> keys = new ArrayList<>();
            while (m.find()) {
                spans.add(new int[] { m.start(), m.end() });
                keys.add(m.group(1));
            }
            if (spans.isEmpty() && !o.raw.isEmpty()) {
                throw new IllegalArgumentException("unrecognized args: " + o.raw);
            }
            if (!spans.isEmpty() && !o.raw.substring(0, spans.get(0)[0]).isBlank()) {
                throw new IllegalArgumentException("unrecognized args: " + o.raw.substring(0, spans.get(0)[0]));
            }
            for (int i = 0; i < spans.size(); i++) {
                int end = i + 1 < spans.size() ? spans.get(i + 1)[0] : o.raw.length();
                String v = o.raw.substring(spans.get(i)[1], end).trim();
                if (STRAY_KEY.matcher(v).find()) {
                    throw new IllegalArgumentException("unknown key in " + keys.get(i) + "=" + v);
                }
                if (v.length() >= 2 && (v.startsWith("\"") && v.endsWith("\"") ||
                    v.startsWith("'") && v.endsWith("'"))) {
                    v = v.substring(1, v.length() - 1);
                }
                kv.put(keys.get(i), v);
            }

            File defRoot = null;
            try {
                ResourceFile src = s.getSourceFile();
                ResourceFile parent = src == null ? null : src.getParentFile();
                ResourceFile gp = parent == null ? null : parent.getParentFile();
                if (gp != null && new File(gp.getAbsolutePath(), "searches").isDirectory()) {
                    defRoot = new File(gp.getAbsolutePath());
                }
            }
            catch (Exception e) {
                defRoot = null;
            }
            if (defRoot == null) {
                defRoot = new File(DEFAULT_ROOT);
            }
            o.root = norm(kv.containsKey("root") ? new File(kv.get("root")) : defRoot);
            o.deps = norm(kv.containsKey("deps") ? new File(kv.get("deps")) : o.root);
            if (!o.root.isDirectory()) {
                throw new IllegalArgumentException("root is not a directory: " + o.root);
            }
            if (kv.containsKey("only")) {
                Set<String> only = new LinkedHashSet<>();
                for (String p : kv.get("only").split(",")) {
                    if (!p.isBlank()) {
                        only.add(p.trim());
                    }
                }
                o.only = only.isEmpty() ? null : only;
            }
            if (kv.containsKey("tables")) {
                String v = kv.get("tables").trim().toLowerCase(Locale.ROOT);
                o.tables = new LinkedHashSet<>();
                if (v.equals("all")) {
                    o.tables.addAll(TABLE_FILES.keySet());
                }
                else if (!v.equals("none") && !v.isEmpty()) {
                    for (String p : v.split(",")) {
                        String k = p.trim();
                        if (k.isEmpty()) {
                            continue;
                        }
                        if (!TABLE_FILES.containsKey(k)) {
                            throw new IllegalArgumentException(
                                "unknown table key " + k + ", known: " + String.join(",", TABLE_FILES.keySet()));
                        }
                        o.tables.add(k);
                    }
                }
            }
            if (kv.containsKey("decomp")) {
                o.decomp = parseBool("decomp", kv.get("decomp"));
            }
            if (kv.containsKey("clean")) {
                o.clean = parseBool("clean", kv.get("clean"));
            }
            if (kv.containsKey("game_version") && !kv.get("game_version").isBlank()) {
                o.gameVersion = kv.get("game_version").trim();
            }
            return o;
        }

        private static boolean parseBool(String key, String v) {
            switch (v.trim().toLowerCase(Locale.ROOT)) {
                case "true", "1", "yes", "on":
                    return true;
                case "false", "0", "no", "off":
                    return false;
                default:
                    throw new IllegalArgumentException(key + " expects true or false, got " + v);
            }
        }

        private static File norm(File f) {
            return f.getAbsoluteFile().toPath().normalize().toFile();
        }
    }

    static final class Ctx {
        final GhidraScript script;
        final Program program;
        final TaskMonitor monitor;
        final Listing listing;
        final Memory memory;
        final ReferenceManager refMgr;
        final SymbolTable symTab;
        final FunctionManager funcMgr;
        final AddressFactory addrFactory;
        final DataTypeManager dtm;
        final ExternalManager extMgr;
        final Address imageBase;
        final long imageBaseOff;
        // base of every *Offset column
        final long relBase;
        final GnuDemangler demangler = new GnuDemangler();
        // null when decomp=false or the decompiler could not start
        DecompInterface decomp;
        BasicBlockModel bbm;

        final File root;
        final File deps;
        final Path rootPath;
        final File searchesDir;
        final File xrefsDir;
        final File funcsDir;
        final File reportsDir;
        final File chainsDir;
        final File tablesDir;
        final File rustExternsDir;
        final File decompiledDir;
        // null means every category
        final Set<String> only;
        final Set<String> tables;
        final boolean decompEnabled;
        final boolean clean;
        final String gameVersion;
        final String rawArgs;
        // Set by the clean step when it keeps decompiled/, so reached functions replace their own files
        boolean overwriteDecomp;

        List<InputFile> allInputs = new ArrayList<>();
        List<InputFile> inputs = new ArrayList<>();

        // Iteration order feeds clones, constants and hash40_loads
        final Map<String, FuncInfo> funcInfoCache = jyDict();
        final Map<String, String> decompCache = new HashMap<>();
        final Map<String, List<String>> stringsCache = new HashMap<>();
        final Map<String, List<Function>> callersCache = new HashMap<>();
        final Map<String, List<Function>> calleesCache = new HashMap<>();
        final Map<String, List<String>> structCache = new HashMap<>();
        final Map<String, String> cloneHashCache = new HashMap<>();
        final Map<String, String> fingerprintCache = new HashMap<>();
        final Map<String, List<String>> constantsCache = new HashMap<>();
        final Map<String, String> demangleCache = new HashMap<>();
        // mangled token to consumer labels, jyDict of jySet
        Map<String, Set<String>> consumerRefs = jyDict();
        // target offset to slot address strings in scan order
        final Map<Long, List<String>> brutePtrIndex = new HashMap<>();
        // slot address string to table base and entry count
        final Map<String, StringTable> stringTableBases = new HashMap<>();
        final Map<Long, String> hash40Labels = new HashMap<>();
        // 13.0.5 image offset to names in source priority order
        final Map<Long, List<ExtName>> externalNames = new HashMap<>();
        // sorted by (addr, size, name, label), addresses are 13.0.5 image offsets
        final List<ExtSize> externalSizeIndex = new ArrayList<>();
        long[] externalSizeAddrs = new long[0];
        // sorted by oldStart
        final List<VersionSeg> versionMap = new ArrayList<>();

        String runStart = "";
        String runEnd = "";
        int inputCount;
        long locationCount;
        int errors;

        Ctx(GhidraScript script, Program program, TaskMonitor monitor, Opts o) {
            this.script = script;
            this.program = program;
            this.monitor = monitor;
            this.listing = program.getListing();
            this.memory = program.getMemory();
            this.refMgr = program.getReferenceManager();
            this.symTab = program.getSymbolTable();
            this.funcMgr = program.getFunctionManager();
            this.addrFactory = program.getAddressFactory();
            this.dtm = program.getDataTypeManager();
            this.extMgr = program.getExternalManager();
            this.imageBase = program.getImageBase();
            this.imageBaseOff = imageBase.getOffset();
            this.relBase = NRO_BASE_OVERRIDE != null ? NRO_BASE_OVERRIDE : imageBaseOff;
            this.root = o.root;
            this.deps = o.deps;
            this.rootPath = root.toPath();
            this.searchesDir = ensureDir(new File(root, "searches"));
            this.xrefsDir = ensureDir(new File(root, "xrefs"));
            this.funcsDir = ensureDir(new File(root, "funcs"));
            this.reportsDir = ensureDir(new File(root, "reports"));
            this.chainsDir = ensureDir(new File(root, "chains"));
            this.tablesDir = ensureDir(new File(root, "tables"));
            this.rustExternsDir = ensureDir(new File(root, "rust-externs"));
            this.decompiledDir = ensureDir(new File(root, "decompiled"));
            this.only = o.only;
            this.tables = o.tables;
            this.decompEnabled = o.decomp;
            this.clean = o.clean;
            this.gameVersion = o.gameVersion;
            this.rawArgs = o.raw;
        }

        private static File ensureDir(File d) {
            if (!d.isDirectory() && !d.mkdirs()) {
                throw new IllegalStateException("cannot create " + d);
            }
            return d;
        }

        void println(String s) {
            script.println(s);
        }

        void warn(String s) {
            script.println("WARNING: " + s);
        }

        void error(String where, Throwable t) {
            errors++;
            StringWriter sw = new StringWriter();
            t.printStackTrace(new PrintWriter(sw));
            script.printerr("ERROR in " + where + ": " + t);
            script.println(sw.toString());
        }

        void checkCancelled() {
            if (monitor.isCancelled()) {
                throw new Cancelled();
            }
        }

        Progress progress(String what, long total) {
            return new Progress(this, what, total);
        }

        File rootFile(String rel) {
            return new File(root, rel).toPath().normalize().toFile();
        }

        File depsFile(String rel) {
            return new File(deps, rel).toPath().normalize().toFile();
        }

        boolean tableOn(String key) {
            return tables.contains(key);
        }

        File tableFile(String key) {
            String name = TABLE_FILES.get(key);
            if (name == null) {
                throw new IllegalArgumentException("unknown table key " + key);
            }
            return new File(tablesDir, name);
        }

        String relToRoot(String absPath) {
            if (absPath == null || absPath.isEmpty()) {
                return "";
            }
            try {
                Path p = Paths.get(absPath).toAbsolutePath().normalize();
                return rootPath.relativize(p).toString().replace('\\', '/');
            }
            catch (Exception e) {
                return absPath.replace('\\', '/');
            }
        }

        String str(Address a) {
            return a == null ? "" : a.toString();
        }

        String relOffset(Address a) {
            if (a == null) {
                return "";
            }
            // EXTERNAL:xxxxxxxx and other non memory spaces have no image offset
            if (!a.getAddressSpace().equals(imageBase.getAddressSpace())) {
                return "";
            }
            long v = a.getOffset() - relBase;
            // Nothing below the image base belongs to the module, e.g. the IMPORTED Reset label at 0
            return v < 0 ? "" : "0x" + Long.toHexString(v);
        }

        Address toAddr(String s) {
            String t = s == null ? "" : s.strip();
            if (t.isEmpty()) {
                return null;
            }
            try {
                return addrFactory.getAddress(t);
            }
            catch (Exception e) {
                return null;
            }
        }

        // Values below the image base are image offsets from hand edited files
        Address parseLocation(String raw) {
            Address a = toAddr(raw);
            if (a == null) {
                return null;
            }
            try {
                if (a.getAddressSpace().equals(imageBase.getAddressSpace()) && a.getOffset() >= 0 &&
                    a.getOffset() < imageBaseOff) {
                    return imageBase.add(a.getOffset());
                }
                return a;
            }
            catch (Exception e) {
                return null;
            }
        }

        // Locations usually sit inside a string while references target its start, so walk both
        List<Address> locationTargets(Address a) {
            List<Address> out = new ArrayList<>(2);
            if (a == null) {
                return out;
            }
            out.add(a);
            try {
                Data d = listing.getDataContaining(a);
                if (d != null && d.isDefined() && !d.getAddress().equals(a)) {
                    out.add(d.getAddress());
                }
            }
            catch (Exception e) {
            }
            return out;
        }

        CodeUnit codeUnitAt(Address a) {
            if (a == null) {
                return null;
            }
            try {
                CodeUnit cu = listing.getCodeUnitAt(a);
                return cu != null ? cu : listing.getCodeUnitContaining(a);
            }
            catch (Exception e) {
                return null;
            }
        }

        Function funcAt(Address a) {
            if (a == null) {
                return null;
            }
            try {
                return funcMgr.getFunctionContaining(a);
            }
            catch (Exception e) {
                return null;
            }
        }

        String findMangledAt(Address a) {
            if (a == null) {
                return "";
            }
            try {
                for (Symbol s : symTab.getSymbols(a)) {
                    String n = s.getName();
                    if (isMangled(n)) {
                        return n;
                    }
                }
            }
            catch (Exception e) {
            }
            // Import thunks carry the demangled short name, the mangled one only lives on the external location
            try {
                Function f = funcMgr.getFunctionAt(a);
                if (f != null && f.isThunk()) {
                    Function t = f.getThunkedFunction(true);
                    ExternalLocation loc = t != null ? t.getExternalLocation() : null;
                    String n = loc != null ? nz(loc.getOriginalImportedName()) : "";
                    if (isMangled(n)) {
                        return n;
                    }
                }
            }
            catch (Exception e) {
            }
            return "";
        }

        String demangle(String name) {
            if (name == null || name.isEmpty()) {
                return "";
            }
            String cached = demangleCache.get(name);
            if (cached != null) {
                return cached;
            }
            String out = "";
            try {
                DemangledObject d = demangler.demangle(name);
                if (d != null) {
                    String sig = d.getSignature(false);
                    if (sig != null) {
                        out = sig;
                    }
                }
            }
            catch (Exception e) {
                out = "";
            }
            demangleCache.put(name, out);
            return out;
        }

        List<Function> callersOf(Function f, int limit) {
            return firstN(callList(f, true), limit);
        }

        List<Function> calleesOf(Function f, int limit) {
            return firstN(callList(f, false), limit);
        }

        private List<Function> callList(Function f, boolean callers) {
            String key = f.getEntryPoint().toString();
            Map<String, List<Function>> cache = callers ? callersCache : calleesCache;
            List<Function> all = cache.get(key);
            if (all == null) {
                all = new ArrayList<>();
                try {
                    Set<Function> set = callers ? f.getCallingFunctions(monitor) : f.getCalledFunctions(monitor);
                    for (Function g : set) {
                        all.add(g);
                    }
                }
                catch (Exception e) {
                }
                // The API returns a HashSet of identity hashed FunctionDB objects, so its order changes between runs
                try {
                    all.sort(Comparator.comparing(Function::getEntryPoint));
                }
                catch (Exception e) {
                }
                cache.put(key, all);
            }
            return all;
        }

        private static List<Function> firstN(List<Function> all, int limit) {
            return new ArrayList<>(all.size() <= limit ? all : all.subList(0, limit));
        }

        List<Map.Entry<String, Integer>> consumerLabelCounts() {
            Map<String, Integer> perLabel = jyDict();
            for (Set<String> labels : consumerRefs.values()) {
                for (String l : labels) {
                    perLabel.merge(l, 1, Integer::sum);
                }
            }
            return byCountDesc(perLabel);
        }

        List<String[]> provenance() {
            List<String[]> out = new ArrayList<>();
            out.add(new String[] { "program", safe(() -> program.getName()) });
            out.add(new String[] { "domain_file", safe(() -> program.getDomainFile().getPathname()) });
            out.add(new String[] { "executable_path", safe(() -> program.getExecutablePath()) });
            out.add(new String[] { "executable_md5", safe(() -> program.getExecutableMD5()) });
            out.add(new String[] { "image_base", imageBase.toString() });
            out.add(new String[] { "ghidra_version", safe(() -> Application.getApplicationVersion()) });
            out.add(new String[] { "java_version", safe(() -> System.getProperty("java.version")) });
            out.add(new String[] { "game_version", gameVersion });
            out.add(new String[] { "run_start", runStart });
            out.add(new String[] { "run_end", runEnd });
            out.add(new String[] { "input_count", String.valueOf(inputCount) });
            out.add(new String[] { "location_count", String.valueOf(locationCount) });
            out.add(new String[] { "args", rawArgs });
            out.add(new String[] { "errors", String.valueOf(errors) });
            return out;
        }
    }

    static final class FuncInfo {
        // null on the empty info
        Address addr;
        String addrStr = "";
        String offset = "";
        String name = "";
        String mangled = "";
        String demangled = "";
        String namespace = "";
        String signature = "";
        long size;
        int basicBlocks;
        int incoming;
        List<String> strings = new ArrayList<>();
        List<String> callers = new ArrayList<>();
        List<String> callees = new ArrayList<>();
        List<String> structs = new ArrayList<>();
        // absolute paths, "" when there is no file
        String decompPath = "";
        String decompCode = "";
        String cfgPath = "";
        String cloneHash = "";
        String fingerprint = "";
        List<String> constants = new ArrayList<>();
        List<String> referencedBy = new ArrayList<>();
        List<String> comments = new ArrayList<>();
        List<String> globals = new ArrayList<>();
        String asmPath = "";
        List<ExtName> externalNames = new ArrayList<>();
        List<Hash40Load> hash40Loads = new ArrayList<>();

        // bucket fields, only meaningful on copies made by bucket()
        int hits;
        List<String> matchValues = new ArrayList<>();
        List<String> locations = new ArrayList<>();
        // null on per category buckets, a jySet on global ones
        Set<String> categories;

        FuncInfo() {
        }

        // Shallow copy, lists stay shared with the cached info
        private FuncInfo(FuncInfo s) {
            addr = s.addr;
            addrStr = s.addrStr;
            offset = s.offset;
            name = s.name;
            mangled = s.mangled;
            demangled = s.demangled;
            namespace = s.namespace;
            signature = s.signature;
            size = s.size;
            basicBlocks = s.basicBlocks;
            incoming = s.incoming;
            strings = s.strings;
            callers = s.callers;
            callees = s.callees;
            structs = s.structs;
            decompPath = s.decompPath;
            decompCode = s.decompCode;
            cfgPath = s.cfgPath;
            cloneHash = s.cloneHash;
            fingerprint = s.fingerprint;
            constants = s.constants;
            referencedBy = s.referencedBy;
            comments = s.comments;
            globals = s.globals;
            asmPath = s.asmPath;
            externalNames = s.externalNames;
            hash40Loads = s.hash40Loads;
        }

        FuncInfo bucket(boolean global) {
            FuncInfo b = new FuncInfo(this);
            b.hits = 0;
            b.matchValues = new ArrayList<>();
            b.locations = new ArrayList<>();
            b.categories = global ? jySet() : null;
            return b;
        }
    }

    // Python 2 csv.writer defaults as in the pre-port DB: CRLF rows, minimal quoting and "" for a lone empty field
    static final class CsvOut implements Closeable {
        private final Writer w;

        CsvOut(File f) throws IOException {
            w = new BufferedWriter(new OutputStreamWriter(new FileOutputStream(f), StandardCharsets.UTF_8), 1 << 16);
        }

        CsvOut row(Object... fields) throws IOException {
            return row(Arrays.asList(fields));
        }

        CsvOut row(List<?> fields) throws IOException {
            if (fields.size() == 1 && field(fields.get(0)).isEmpty()) {
                w.write("\"\"\r\n");
                return this;
            }
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < fields.size(); i++) {
                if (i > 0) {
                    sb.append(',');
                }
                String s = field(fields.get(i));
                if (needsQuote(s)) {
                    sb.append('"').append(s.replace("\"", "\"\"")).append('"');
                }
                else {
                    sb.append(s);
                }
            }
            sb.append("\r\n");
            w.write(sb.toString());
            return this;
        }

        // A field ends at the first NUL, as it did in the pre-port DB
        static String field(Object o) {
            if (o == null) {
                return "";
            }
            String s = String.valueOf(o);
            int z = s.indexOf('\0');
            return z >= 0 ? s.substring(0, z) : s;
        }

        private static boolean needsQuote(String s) {
            for (int i = 0; i < s.length(); i++) {
                char ch = s.charAt(i);
                if (ch == ',' || ch == '"' || ch == '\r' || ch == '\n') {
                    return true;
                }
            }
            return false;
        }

        @Override
        public void close() throws IOException {
            w.close();
        }
    }

    static final class Progress {
        private final Ctx c;
        private final String what;
        private final long total;
        private final long t0 = System.currentTimeMillis();
        private long n;
        private long last = t0;

        Progress(Ctx c, String what, long total) {
            this.c = c;
            this.what = what;
            this.total = total;
            c.monitor.setMessage(what);
        }

        void step() {
            n++;
            c.checkCancelled();
            long now = System.currentTimeMillis();
            if (now - last >= PROGRESS_INTERVAL_MS) {
                last = now;
                c.println(String.format("%s: %d%s (%.0f s)", what, n, total > 0 ? "/" + total : "",
                    (now - t0) / 1000.0));
            }
        }
    }

    // MOVZ/MOVK accumulation for hash40 loads
    static final class Hash40Tracker {
        private static final class Pending {
            long value;
            final Address start;

            Pending(long value, Address start) {
                this.value = value;
                this.start = start;
            }
        }

        private final Ctx c;
        private final Map<String, Pending> pending = new HashMap<>();
        private final Set<String> seen = new HashSet<>();

        Hash40Tracker(Ctx c) {
            this.c = c;
        }

        void reset() {
            pending.clear();
            seen.clear();
        }

        // The label check runs after every MOVK, as the pre-port scan did
        Hash40Load feed(Instruction ins) {
            MovImm m = decodeMovImm(ins);
            if (m == null) {
                return null;
            }
            if (m.opc() == 2) {
                pending.put(m.reg(), new Pending(m.imm(), ins.getAddress()));
                return null;
            }
            Pending p = pending.get(m.reg());
            if (p == null) {
                return null;
            }
            p.value |= m.imm();
            String label = c.hash40Labels.get(p.value);
            if (label == null) {
                return null;
            }
            String start = p.start.toString();
            if (!seen.add(start + "|" + p.value)) {
                return null;
            }
            return new Hash40Load(start, p.value, label);
        }
    }

    static MovImm decodeMovImm(Instruction ins) {
        try {
            byte[] bs = ins.getBytes();
            if (bs == null || bs.length != 4) {
                return null;
            }
            long word = ((bs[3] & 0xffL) << 24) | ((bs[2] & 0xffL) << 16) | ((bs[1] & 0xffL) << 8) | (bs[0] & 0xffL);
            if (((word >>> 23) & 0x3f) != 0x25) {
                return null;
            }
            int opc = (int) ((word >>> 29) & 3);
            if (opc != 2 && opc != 3) {
                return null;
            }
            long sf = (word >>> 31) & 1;
            int rd = (int) (word & 0x1f);
            long imm16 = (word >>> 5) & 0xffff;
            int hw = (int) ((word >>> 21) & 3);
            return new MovImm(imm16 << (hw * 16), (sf != 0 ? "x" : "w") + rd, opc);
        }
        catch (Exception e) {
            return null;
        }
    }

    // Ghidra 12 alignment padding also has a String value ("align(4)")
    static boolean isStringData(Data d) {
        if (d == null || !d.hasStringValue()) {
            return false;
        }
        try {
            return !(d.getBaseDataType() instanceof AlignmentDataType);
        }
        catch (Exception e) {
            return true;
        }
    }

    // Jython 2.7 backed dict and set with this exact map, so iteration order and stable sort ties match the pre-port DB
    static <V> Map<String, V> jyDict() {
        return new ConcurrentHashMap<>(16, 0.75f, 2);
    }

    static <T> Set<T> jySet() {
        return Collections.newSetFromMap(new ConcurrentHashMap<>(16, 0.75f, 2));
    }

    static List<FuncInfo> sortByHitsDesc(Collection<FuncInfo> funcs) {
        List<FuncInfo> out = new ArrayList<>(funcs);
        out.sort((a, b) -> Integer.compare(b.hits, a.hits));
        return out;
    }

    static <K> List<Map.Entry<K, Integer>> byCountDesc(Map<K, Integer> m) {
        List<Map.Entry<K, Integer>> out = new ArrayList<>();
        for (Map.Entry<K, Integer> e : m.entrySet()) {
            out.add(new AbstractMap.SimpleImmutableEntry<>(e.getKey(), e.getValue()));
        }
        out.sort((a, b) -> Integer.compare(b.getValue(), a.getValue()));
        return out;
    }

    static String nz(String s) {
        return s == null ? "" : s;
    }

    static boolean isMangled(String n) {
        return n != null && (n.startsWith("_Z") || n.startsWith("__Z"));
    }

    static String stripChar(String s, char ch) {
        int a = 0;
        int b = s.length();
        while (a < b && s.charAt(a) == ch) {
            a++;
        }
        while (b > a && s.charAt(b - 1) == ch) {
            b--;
        }
        return s.substring(a, b);
    }

    private static final Pattern SAFE_BAD = Pattern.compile("[^A-Za-z0-9._-]+");
    private static final Pattern UNDERSCORES = Pattern.compile("_+");

    static String safeFilename(String s) {
        String r = SAFE_BAD.matcher(nz(s)).replaceAll("_");
        r = stripChar(UNDERSCORES.matcher(r).replaceAll("_"), '_');
        if (r.isEmpty()) {
            r = "anon";
        }
        return r.length() > 140 ? r.substring(0, 140) : r;
    }

    static String joinUnique(Iterable<String> items) {
        return joinUnique(items, MAX_JOIN);
    }

    // Appends "..." as soon as limit unique items are kept, even when nothing was cut
    static String joinUnique(Iterable<String> items, int limit) {
        List<String> kept = new ArrayList<>();
        Set<String> seen = new HashSet<>();
        if (items != null) {
            for (String x : items) {
                if (x == null || !seen.add(x)) {
                    continue;
                }
                kept.add(x);
                if (kept.size() >= limit) {
                    kept.add("...");
                    break;
                }
            }
        }
        return String.join(";", kept);
    }

    static List<String> splitLines(String text) {
        List<String> out = new ArrayList<>();
        int n = text.length();
        int start = 0;
        int i = 0;
        while (i < n) {
            char ch = text.charAt(i);
            if (ch == '\r' || ch == '\n' || ch == '\u2028') {
                out.add(text.substring(start, i));
                i += (ch == '\r' && i + 1 < n && text.charAt(i + 1) == '\n') ? 2 : 1;
                start = i;
            }
            else {
                i++;
            }
        }
        if (start < n) {
            out.add(text.substring(start));
        }
        return out;
    }

    static String truncateLines(String text, int n) {
        List<String> lines = splitLines(text);
        if (lines.size() <= n) {
            return text;
        }
        return String.join("\n", lines.subList(0, n)) + "\n// ... (" + (lines.size() - n) + " more lines)";
    }

    private static final Pattern RUST_BAD = Pattern.compile("[^A-Za-z0-9_]+");

    static String rustSafeIdent(String name, String fallback) {
        String n = stripChar(RUST_BAD.matcher(nz(name)).replaceAll("_"), '_');
        if (n.isEmpty()) {
            n = fallback;
        }
        if (!n.isEmpty() && n.charAt(0) >= '0' && n.charAt(0) <= '9') {
            n = "_" + n;
        }
        return n.length() > 80 ? n.substring(0, 80) : n;
    }

    static long computeHash40(String s) {
        if (s == null || s.isEmpty()) {
            return 0;
        }
        byte[] b = s.toLowerCase(Locale.ROOT).getBytes(StandardCharsets.UTF_8);
        CRC32 crc = new CRC32();
        crc.update(b);
        return ((long) b.length << 32) | (crc.getValue() & 0xffffffffL);
    }

    static String hexU(long v) {
        return "0x" + Long.toHexString(v);
    }

    // Rounds like the pre-port {:.1f} (exact binary value, half to even), String.format would round half up
    static String fmt1(double v) {
        return new BigDecimal(v).setScale(1, RoundingMode.HALF_EVEN).toPlainString();
    }

    static String sha1Hex(String s) {
        try {
            byte[] d = MessageDigest.getInstance("SHA-1").digest(s.getBytes(StandardCharsets.UTF_8));
            StringBuilder sb = new StringBuilder(d.length * 2);
            for (byte x : d) {
                sb.append(String.format("%02x", x & 0xff));
            }
            return sb.toString();
        }
        catch (Exception e) {
            throw new IllegalStateException(e);
        }
    }

    static Long parsePyHex(String s) {
        if (s == null) {
            return null;
        }
        String t = s.strip();
        boolean neg = false;
        if (t.startsWith("+") || t.startsWith("-")) {
            neg = t.charAt(0) == '-';
            t = t.substring(1);
        }
        if (t.startsWith("0x") || t.startsWith("0X")) {
            t = t.substring(2);
        }
        if (t.isEmpty()) {
            return null;
        }
        for (int i = 0; i < t.length(); i++) {
            if (Character.digit(t.charAt(i), 16) < 0 || t.charAt(i) > 'f') {
                return null;
            }
        }
        BigInteger v = new BigInteger(t, 16);
        if (v.bitLength() > 64) {
            return null;
        }
        return neg ? v.negate().longValue() : v.longValue();
    }

    static Long parsePyInt(String s) {
        if (s == null) {
            return null;
        }
        String t = s.strip();
        if (!t.matches("[+-]?[0-9]+")) {
            return null;
        }
        try {
            return Long.parseLong(t.startsWith("+") ? t.substring(1) : t);
        }
        catch (NumberFormatException e) {
            return null;
        }
    }

    private static final DateTimeFormatter ISO_SECONDS = DateTimeFormatter.ofPattern("yyyy-MM-dd'T'HH:mm:ssXXX");

    // OffsetDateTime.toString() drops ":00" seconds, so format explicitly
    static String now() {
        return OffsetDateTime.now().format(ISO_SECONDS);
    }

    static String safe(Step<String> s) {
        try {
            return nz(s.run());
        }
        catch (Exception e) {
            return "";
        }
    }

    static void writeText(File f, String s) throws IOException {
        Files.write(f.toPath(), s.getBytes(StandardCharsets.UTF_8));
    }

    // Reads CSV like Python 2 csv.reader with the default dialect fed line by line, as the pre-port script did.
    // A blank line gives an empty row and a stray CR outside quotes ends the record
    static List<List<String>> readCsv(File f) throws IOException {
        String text = new String(Files.readAllBytes(f.toPath()), StandardCharsets.UTF_8);
        if (text.startsWith("\uFEFF")) {
            text = text.substring(1);
        }
        CsvParser p = new CsvParser();
        int n = text.length();
        int i = 0;
        while (i < n) {
            int j = text.indexOf('\n', i);
            int end = j < 0 ? n : j + 1;
            for (int k = i; k < end; k++) {
                char ch = text.charAt(k);
                if (ch != '\0') {
                    p.feed(ch);
                }
            }
            p.endLine();
            i = end;
        }
        p.finish();
        return p.rows;
    }

    private static final class CsvParser {
        private static final int START_RECORD = 0;
        private static final int START_FIELD = 1;
        private static final int IN_FIELD = 2;
        private static final int IN_QUOTED_FIELD = 3;
        private static final int QUOTE_IN_QUOTED_FIELD = 4;
        private static final int EAT_CRNL = 5;

        final List<List<String>> rows = new ArrayList<>();
        private List<String> fields = new ArrayList<>();
        private final StringBuilder field = new StringBuilder();
        private int state = START_RECORD;

        private void saveField() {
            fields.add(field.toString());
            field.setLength(0);
        }

        private void emit() {
            rows.add(fields);
            fields = new ArrayList<>();
            field.setLength(0);
            state = START_RECORD;
        }

        void feed(char ch) {
            switch (state) {
                case START_RECORD:
                    if (ch == '\n' || ch == '\r') {
                        state = EAT_CRNL;
                        return;
                    }
                    state = START_FIELD;
                    startField(ch);
                    return;
                case START_FIELD:
                    startField(ch);
                    return;
                case IN_FIELD:
                    if (ch == '\n' || ch == '\r') {
                        saveField();
                        state = EAT_CRNL;
                    }
                    else if (ch == ',') {
                        saveField();
                        state = START_FIELD;
                    }
                    else {
                        field.append(ch);
                    }
                    return;
                case IN_QUOTED_FIELD:
                    if (ch == '"') {
                        state = QUOTE_IN_QUOTED_FIELD;
                    }
                    else {
                        field.append(ch);
                    }
                    return;
                case QUOTE_IN_QUOTED_FIELD:
                    if (ch == '"') {
                        field.append('"');
                        state = IN_QUOTED_FIELD;
                    }
                    else if (ch == ',') {
                        saveField();
                        state = START_FIELD;
                    }
                    else if (ch == '\n' || ch == '\r') {
                        saveField();
                        state = EAT_CRNL;
                    }
                    else {
                        field.append(ch);
                        state = IN_FIELD;
                    }
                    return;
                case EAT_CRNL:
                    if (ch == '\n' || ch == '\r') {
                        return;
                    }
                    emit();
                    feed(ch);
                    return;
                default:
                    throw new IllegalStateException("csv state " + state);
            }
        }

        private void startField(char ch) {
            if (ch == '\n' || ch == '\r') {
                saveField();
                state = EAT_CRNL;
            }
            else if (ch == '"') {
                state = IN_QUOTED_FIELD;
            }
            else if (ch == ',') {
                saveField();
            }
            else {
                field.append(ch);
                state = IN_FIELD;
            }
        }

        void endLine() {
            switch (state) {
                case START_RECORD:
                case EAT_CRNL:
                    emit();
                    return;
                case START_FIELD:
                case IN_FIELD:
                case QUOTE_IN_QUOTED_FIELD:
                    saveField();
                    emit();
                    return;
                default:
                    // A quoted field continues on the next line
            }
        }

        void finish() {
            if (state == IN_QUOTED_FIELD || field.length() > 0) {
                saveField();
                emit();
            }
        }
    }

    static final class Loaders {

        private static final Pattern HASH40_KEY = Pattern.compile("^[A-Za-z][A-Za-z0-9_]{2,79}$");
        private static final Pattern MANGLED_TOKEN = Pattern.compile("_Z[A-Za-z0-9_]+");

        private record FuzzyCand(long absDiff, long diff, String label, String name) {
        }

        static int loadVersionMap(Ctx c) throws Exception {
            c.versionMap.clear();
            File path = c.rootFile(VERSION_MAP_CSV);
            if (!path.isFile()) {
                c.println("version map: missing " + path);
                return 0;
            }
            List<List<String>> rows;
            try {
                rows = readCsv(path);
            }
            catch (Exception e) {
                c.println("version map: error reading " + path + ": " + e);
                return 0;
            }
            if (rows.isEmpty()) {
                c.println("version map: 0 segments from " + path);
                return 0;
            }
            List<String> header = rows.get(0);
            Integer si = resolveCol(header, "old_start");
            Integer ei = resolveCol(header, "old_end");
            Integer di = resolveCol(header, "delta");
            if (si == null || ei == null || di == null) {
                c.println("version map: column missing in " + path);
                return 0;
            }
            int need = Math.max(si, Math.max(ei, di));
            List<VersionSeg> segs = new ArrayList<>();
            int bad = 0;
            for (int i = 1; i < rows.size(); i++) {
                List<String> row = rows.get(i);
                if (row.isEmpty()) {
                    continue;
                }
                if (row.size() <= need) {
                    bad++;
                    continue;
                }
                Long s = parsePyHex(row.get(si));
                Long e = parsePyHex(row.get(ei));
                Long d = parsePyHex(row.get(di));
                if (s == null || e == null || d == null || s < 0 || e <= s) {
                    bad++;
                    continue;
                }
                segs.add(new VersionSeg(s, e, d));
            }
            segs.sort(Comparator.comparingLong(VersionSeg::oldStart));
            int overlaps = 0;
            for (int i = 1; i < segs.size(); i++) {
                if (segs.get(i).oldStart() < segs.get(i - 1).oldEnd()) {
                    overlaps++;
                }
            }
            if (overlaps > 0) {
                // The lookup takes the last segment starting at or below the offset, so overlaps make it ambiguous
                c.warn("version map: " + overlaps + " overlapping segments in " + path);
            }
            c.versionMap.addAll(segs);
            c.println("version map: " + segs.size() + " segments from " + path +
                (bad > 0 ? ", " + bad + " unusable rows skipped" : ""));
            return segs.size();
        }

        // 13.0.4 image offset to 13.0.5, -1 when no segment covers it
        private static long mapOldOffset(Ctx c, long off) {
            List<VersionSeg> segs = c.versionMap;
            int lo = 0;
            int hi = segs.size() - 1;
            int idx = -1;
            while (lo <= hi) {
                int mid = (lo + hi) >>> 1;
                if (segs.get(mid).oldStart() <= off) {
                    idx = mid;
                    lo = mid + 1;
                }
                else {
                    hi = mid - 1;
                }
            }
            if (idx < 0) {
                return -1;
            }
            VersionSeg s = segs.get(idx);
            if (off >= s.oldEnd()) {
                return -1;
            }
            long m = off + s.delta();
            return m < 0 ? -1 : m;
        }

        private static boolean inExternalBlock(Ctx c, long off) {
            try {
                MemoryBlock b = c.memory.getBlock(c.imageBase.add(off));
                return b != null && b.isExternalBlock();
            }
            catch (Exception e) {
                return false;
            }
        }

        static int loadExternalNames(Ctx c) throws Exception {
            c.externalNames.clear();
            c.externalSizeIndex.clear();
            int total = 0;
            for (ExtNameSource src : EXTERNAL_NAME_SOURCES) {
                c.checkCancelled();
                File path = src.depsRelative() ? c.depsFile(src.path()) : c.rootFile(src.path());
                if (!path.isFile()) {
                    if (!src.optional()) {
                        c.println("external names: missing " + path);
                    }
                    continue;
                }
                List<List<String>> rows;
                try {
                    rows = readCsv(path);
                }
                catch (Exception e) {
                    c.println("external names: error reading " + path + ": " + e);
                    continue;
                }
                if (rows.isEmpty()) {
                    continue;
                }
                List<String> header = rows.get(0);
                Integer ai = resolveCol(header, src.addrCol());
                Integer ni = resolveCol(header, src.nameCol());
                Integer si = src.sizeCol() != null && !src.sizeCol().isEmpty() ? resolveCol(header, src.sizeCol())
                        : null;
                if (ai == null || ni == null) {
                    c.println("external names: column missing in " + path);
                    continue;
                }
                int need = Math.max(ai, ni);
                if (si != null) {
                    need = Math.max(need, si);
                }
                String label = src.label();
                int cnt = 0;
                int dropped = 0;
                int external = 0;
                for (int i = 1; i < rows.size(); i++) {
                    if ((i & 0xfff) == 0) {
                        c.checkCancelled();
                    }
                    List<String> row = rows.get(i);
                    if (row.size() <= need) {
                        continue;
                    }
                    String rawAddr = pyStrip(row.get(ai));
                    String nm = pyStrip(row.get(ni));
                    if (rawAddr.isEmpty() || nm.isEmpty()) {
                        continue;
                    }
                    Long parsed = parsePyHex(rawAddr);
                    if (parsed == null) {
                        continue;
                    }
                    long a = parsed - src.addrOffset();
                    if (a < 0) {
                        continue;
                    }
                    // Hand edited curated rows may carry absolute addresses copied from Ghidra
                    if (src.addrOffset() == 0 && !src.versionMapped() && c.imageBaseOff > 0 && a >= c.imageBaseOff) {
                        a -= c.imageBaseOff;
                    }
                    if (src.versionMapped()) {
                        long m = mapOldOffset(c, a);
                        if (m < 0) {
                            dropped++;
                            continue;
                        }
                        // Each tool lays out its own import area, so an old address there names nothing in 13.0.5
                        if (inExternalBlock(c, m)) {
                            external++;
                            continue;
                        }
                        a = m;
                    }
                    List<ExtName> names = c.externalNames.get(a);
                    if (names == null) {
                        names = new ArrayList<>(1);
                        c.externalNames.put(a, names);
                    }
                    names.add(new ExtName(label, nm, "exact"));
                    if (si != null) {
                        Long sz = parsePyInt(pyStrip(row.get(si)));
                        if (sz != null) {
                            c.externalSizeIndex.add(new ExtSize(a, sz, nm, label));
                        }
                    }
                    cnt++;
                }
                c.println("external names: " + cnt + " entries from " + label + (src.versionMapped()
                    ? ", " + dropped + " dropped by version map, " + external + " in the EXTERNAL block" : ""));
                total += cnt;
            }
            c.externalSizeIndex.sort((x, y) -> {
                int r = Long.compare(x.addr(), y.addr());
                if (r == 0) {
                    r = Long.compare(x.size(), y.size());
                }
                if (r == 0) {
                    r = x.name().compareTo(y.name());
                }
                return r != 0 ? r : x.label().compareTo(y.label());
            });
            long[] addrs = new long[c.externalSizeIndex.size()];
            for (int i = 0; i < addrs.length; i++) {
                addrs[i] = c.externalSizeIndex.get(i).addr();
            }
            c.externalSizeAddrs = addrs;
            c.println("external names: " + addrs.length + " entries indexed for fuzzy match");
            return total;
        }

        static List<ExtName> externalNamesFor(Ctx c, Address entry, long size) {
            try {
                if (entry == null) {
                    return new ArrayList<>();
                }
                return lookup(c, entry.getOffset() - c.imageBaseOff, size, INCLUDE_EXTERNAL_FUZZY);
            }
            catch (Exception e) {
                return new ArrayList<>();
            }
        }

        private static List<ExtName> lookup(Ctx c, long key, long size, boolean fuzzy) {
            List<ExtName> out = new ArrayList<>();
            List<ExtName> raw = c.externalNames.get(key);
            if (raw != null) {
                for (ExtName e : raw) {
                    if (!isPlaceholder(e.name())) {
                        out.add(new ExtName(e.label(), e.name(), "exact"));
                    }
                }
            }
            if (!out.isEmpty() || !fuzzy) {
                return out;
            }
            long[] addrs = c.externalSizeAddrs;
            List<ExtSize> index = c.externalSizeIndex;
            int n = Math.min(addrs.length, index.size());
            if (n == 0) {
                return out;
            }
            int lo = bisectLeft(addrs, n, key - EXTERNAL_FUZZY_TOLERANCE);
            int hi = bisectRight(addrs, n, key + EXTERNAL_FUZZY_TOLERANCE);
            List<FuzzyCand> cands = new ArrayList<>();
            for (int i = lo; i < hi; i++) {
                ExtSize s = index.get(i);
                if (s.size() != size || isPlaceholder(s.name())) {
                    continue;
                }
                long diff = s.addr() - key;
                cands.add(new FuzzyCand(Math.abs(diff), diff, s.label(), s.name()));
            }
            cands.sort((x, y) -> {
                int r = Long.compare(x.absDiff(), y.absDiff());
                if (r == 0) {
                    r = Long.compare(x.diff(), y.diff());
                }
                if (r == 0) {
                    r = x.label().compareTo(y.label());
                }
                return r != 0 ? r : x.name().compareTo(y.name());
            });
            for (int i = 0; i < cands.size() && i < 3; i++) {
                FuzzyCand f = cands.get(i);
                String kind = (f.diff() >= 0 ? "+" : "-") + "0x" + Long.toHexString(f.absDiff());
                out.add(new ExtName(f.label(), f.name(), kind));
            }
            return out;
        }

        private static boolean isPlaceholder(String name) {
            return name.startsWith("FUN_") && name.length() <= 14;
        }

        private static int bisectLeft(long[] a, int n, long x) {
            int lo = 0;
            int hi = n;
            while (lo < hi) {
                int mid = (lo + hi) >>> 1;
                if (a[mid] < x) {
                    lo = mid + 1;
                }
                else {
                    hi = mid;
                }
            }
            return lo;
        }

        private static int bisectRight(long[] a, int n, long x) {
            int lo = 0;
            int hi = n;
            while (lo < hi) {
                int mid = (lo + hi) >>> 1;
                if (x < a[mid]) {
                    hi = mid;
                }
                else {
                    lo = mid + 1;
                }
            }
            return lo;
        }

        static int loadHash40Labels(Ctx c) throws Exception {
            if (!INCLUDE_HASH40) {
                return 0;
            }
            File path = c.depsFile(HASH40_LABELS_CSV);
            if (!path.isFile()) {
                c.println("hash40: missing " + path);
                return 0;
            }
            List<List<String>> rows;
            try {
                rows = readCsv(path);
            }
            catch (Exception e) {
                c.println("hash40: error reading " + path + ": " + e);
                return 0;
            }
            int cnt = 0;
            for (int i = 0; i < rows.size(); i++) {
                if ((i & 0xfff) == 0) {
                    c.checkCancelled();
                }
                List<String> row = rows.get(i);
                if (row.size() < 2) {
                    continue;
                }
                String raw = pyStrip(row.get(0));
                String label = pyStrip(row.get(1));
                if (raw.isEmpty() || label.isEmpty()) {
                    continue;
                }
                Long h = parsePyHex(raw);
                if (h == null) {
                    continue;
                }
                cnt++;
                // A negative key must never match a load, but its long can still equal one (read as unsigned or wrapped)
                if (raw.startsWith("-") && h != 0) {
                    continue;
                }
                c.hash40Labels.put(h, label);
            }
            c.println("hash40: " + cnt + " labels loaded from ParamLabels");
            return cnt;
        }

        static int loadHash40ExtraLabels(Ctx c) throws Exception {
            if (!INCLUDE_HASH40) {
                return 0;
            }
            int cnt = 0;
            for (String rel : HASH40_EXTRA_LABEL_FILES) {
                c.checkCancelled();
                File path = c.rootFile(rel);
                if (!path.isFile()) {
                    continue;
                }
                byte[] data;
                try {
                    data = Files.readAllBytes(path.toPath());
                }
                catch (Exception e) {
                    continue;
                }
                // Split by LF first and decode each line on its own, as the pre-port loader did
                int start = 0;
                while (start < data.length) {
                    int end = start;
                    while (end < data.length && data[end] != '\n') {
                        end++;
                    }
                    if (end < data.length) {
                        end++;
                    }
                    String s = pyUniStrip(new String(data, start, end - start, StandardCharsets.UTF_8));
                    start = end;
                    if (s.isEmpty() || s.startsWith("#")) {
                        continue;
                    }
                    long h = computeHash40(s);
                    if (h != 0 && !c.hash40Labels.containsKey(h)) {
                        c.hash40Labels.put(h, s);
                        cnt++;
                    }
                }
            }
            if (cnt > 0) {
                c.println("hash40: " + cnt + " extra labels from text files");
            }
            return cnt;
        }

        // Every input, not only the only= subset, so restricted runs label loads like a full run
        static int addSearchHashesToLabels(Ctx c) throws Exception {
            if (!INCLUDE_HASH40) {
                return 0;
            }
            int cnt = 0;
            for (InputFile in : c.allInputs) {
                c.checkCancelled();
                List<List<String>> rows;
                try {
                    rows = readCsv(in.path());
                }
                catch (Exception e) {
                    continue;
                }
                if (rows.isEmpty()) {
                    continue;
                }
                List<String> header = rows.get(0);
                int mv = -1;
                for (int i = 0; i < header.size(); i++) {
                    if (asciiLower(pyStrip(header.get(i))).equals("match value")) {
                        mv = i;
                        break;
                    }
                }
                if (mv < 0) {
                    continue;
                }
                for (int i = 1; i < rows.size(); i++) {
                    List<String> row = rows.get(i);
                    if (row.size() <= mv) {
                        continue;
                    }
                    String s = pyStrip(row.get(mv));
                    if (s.isEmpty() || !HASH40_KEY.matcher(s).matches()) {
                        continue;
                    }
                    long h = computeHash40(s);
                    if (h != 0 && !c.hash40Labels.containsKey(h)) {
                        c.hash40Labels.put(h, s);
                        cnt++;
                    }
                }
            }
            c.println("hash40: " + cnt + " additional labels from search CSVs");
            return cnt;
        }

        static int collectConsumerRefs(Ctx c) throws Exception {
            Map<String, Set<String>> out = jyDict();
            for (String rel : CONSUMER_SOURCES) {
                c.checkCancelled();
                File full = c.depsFile(rel);
                if (!full.exists()) {
                    c.warn("consumers: missing " + full);
                    continue;
                }
                String label = consumerLabel(full);
                List<File> files = new ArrayList<>();
                if (full.isFile()) {
                    files.add(full);
                }
                else {
                    walkFiles(c, full, files);
                }
                for (File f : files) {
                    c.checkCancelled();
                    String text;
                    try {
                        text = new String(Files.readAllBytes(f.toPath()), StandardCharsets.UTF_8);
                    }
                    catch (Exception e) {
                        continue;
                    }
                    Matcher m = MANGLED_TOKEN.matcher(text);
                    while (m.find()) {
                        String tok = m.group();
                        Set<String> labels = out.get(tok);
                        if (labels == null) {
                            labels = jySet();
                            out.put(tok, labels);
                        }
                        labels.add(label);
                    }
                }
            }
            c.consumerRefs = out;
            return out.size();
        }

        // A src, source or sources leaf says nothing, so the project directory names the consumer
        private static String consumerLabel(File full) {
            String leaf = full.getName();
            String low = leaf.toLowerCase(Locale.ROOT);
            if (low.equals("src") || low.equals("source") || low.equals("sources")) {
                File parent = full.getParentFile();
                String p = parent == null ? "" : parent.getName();
                if (!p.isEmpty()) {
                    return p;
                }
            }
            return leaf.isEmpty() ? full.getPath() : leaf;
        }

        // os.walk order as in the pre-port script, files of a directory before its subdirectories
        private static void walkFiles(Ctx c, File dir, List<File> out) {
            c.checkCancelled();
            String[] names = dir.list();
            if (names == null) {
                return;
            }
            List<File> dirs = new ArrayList<>();
            for (String n : names) {
                File f = new File(dir, n);
                if (f.isDirectory()) {
                    dirs.add(f);
                }
                else {
                    out.add(f);
                }
            }
            for (File d : dirs) {
                if (Files.isSymbolicLink(d.toPath())) {
                    continue;
                }
                walkFiles(c, d, out);
            }
        }

        private static Integer resolveCol(List<String> header, String spec) {
            String want = asciiLower(pyStrip(spec));
            for (int i = 0; i < header.size(); i++) {
                if (asciiLower(pyStrip(header.get(i))).equals(want)) {
                    return i;
                }
            }
            return null;
        }

        // Strips ASCII whitespace only, matching the byte strings the pre-port CSV reader returned
        private static String pyStrip(String s) {
            int a = 0;
            int b = s.length();
            while (a < b && isByteSpace(s.charAt(a))) {
                a++;
            }
            while (b > a && isByteSpace(s.charAt(b - 1))) {
                b--;
            }
            return s.substring(a, b);
        }

        private static boolean isByteSpace(char ch) {
            return ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r' || ch == 0x0b || ch == 0x0c;
        }

        // Unicode strip that also drops a few characters Java's strip() keeps
        private static String pyUniStrip(String s) {
            int a = 0;
            int b = s.length();
            while (a < b && isUniSpace(s.charAt(a))) {
                a++;
            }
            while (b > a && isUniSpace(s.charAt(b - 1))) {
                b--;
            }
            return s.substring(a, b);
        }

        private static boolean isUniSpace(char ch) {
            return Character.isWhitespace(ch) || ch == '\u0085' || ch == '\u00a0' || ch == '\u180e' ||
                ch == '\u2007' || ch == '\u202f';
        }

        private static String asciiLower(String s) {
            StringBuilder sb = null;
            for (int i = 0; i < s.length(); i++) {
                char ch = s.charAt(i);
                if (ch >= 'A' && ch <= 'Z') {
                    if (sb == null) {
                        sb = new StringBuilder(s);
                    }
                    sb.setCharAt(i, (char) (ch + 32));
                }
            }
            return sb == null ? s : sb.toString();
        }
    }

    static final class PrePasses {

        // multiple of 4 so every chunk starts 4 aligned
        private static final int SCAN_CHUNK = 1 << 20;
        // Stays 8 whatever the program's pointer size, for parity with the pre-port DB
        private static final int PTR_SIZE = 8;

        // Chunked reads match getInt/getLong per position since both go through Memory.getBytes
        static int buildBrutePointerIndex(Ctx c, Set<Long> targets) throws Exception {
            if (!INCLUDE_BRUTE_REFS || targets == null || targets.isEmpty()) {
                return 0;
            }
            // A negative offset never equals an unsigned word, so it can't be a target
            long[] sorted = targets.stream().filter(v -> v != null && v >= 0).mapToLong(Long::longValue).sorted()
                .toArray();
            if (sorted.length == 0) {
                return 0;
            }
            boolean big = c.memory.isBigEndian();
            MemoryBlock[] blocks = c.memory.getBlocks();
            long chunks = 0;
            for (MemoryBlock b : blocks) {
                if (b.isInitialized()) {
                    chunks += (b.getSize() + SCAN_CHUNK - 1) / SCAN_CHUNK;
                }
            }
            Progress p = c.progress("brute scan", chunks);
            byte[] buf = new byte[SCAN_CHUNK + 8];
            int[] slowChunks = new int[1];
            int hits = 0;
            for (MemoryBlock block : blocks) {
                c.checkCancelled();
                if (!block.isInitialized()) {
                    continue;
                }
                Address end = block.getEnd();
                Address cur = block.getStart();
                long misalign = Math.floorMod(cur.getOffset(), 4L);
                if (misalign != 0) {
                    try {
                        cur = cur.add(4 - misalign);
                    }
                    catch (Exception e) {
                        continue;
                    }
                }
                if (cur.compareTo(end) > 0) {
                    continue;
                }
                long span;
                try {
                    span = end.subtract(cur) + 1;
                }
                catch (Exception e) {
                    continue;
                }
                for (long pos = 0; pos < span; pos += SCAN_CHUNK) {
                    p.step();
                    Address chunk;
                    try {
                        chunk = cur.add(pos);
                    }
                    catch (Exception e) {
                        break;
                    }
                    int want = (int) Math.min(SCAN_CHUNK, span - pos);
                    hits += scanChunk(c, chunk, want, buf, big, sorted, slowChunks);
                }
            }
            if (slowChunks[0] > 0) {
                c.warn("brute scan: " + slowChunks[0] + " chunks read word by word after a failed bulk read");
            }
            return hits;
        }

        // Reads past the block end may continue into an adjacent initialized block, as getInt/getLong do
        private static int scanChunk(Ctx c, Address chunk, int want, byte[] buf, boolean big, long[] targets,
                int[] slowChunks) {
            int n;
            try {
                n = c.memory.getBytes(chunk, buf, 0, want + 7);
            }
            catch (Exception e) {
                n = -1;
            }
            if (n < want) {
                slowChunks[0]++;
                return scanChunkSlow(c, chunk, want, targets);
            }
            int hits = 0;
            long base = chunk.getOffset();
            for (int i = 0; i < want; i += 4) {
                boolean ok32 = i + 4 <= n;
                long v32 = ok32 ? word(buf, i, 4, big) : 0;
                if (ok32 && contains(targets, v32)) {
                    hits += record(c, v32, chunk, i);
                }
                if (((base + i) & 7) == 0 && i + 8 <= n) {
                    long v64 = word(buf, i, 8, big);
                    if ((!ok32 || v64 != v32) && contains(targets, v64)) {
                        hits += record(c, v64, chunk, i);
                    }
                }
            }
            return hits;
        }

        private static int scanChunkSlow(Ctx c, Address chunk, int want, long[] targets) {
            int hits = 0;
            for (int i = 0; i < want; i += 4) {
                Address a;
                try {
                    a = chunk.add(i);
                }
                catch (Exception e) {
                    break;
                }
                boolean ok32 = false;
                long v32 = 0;
                try {
                    v32 = c.memory.getInt(a) & 0xffffffffL;
                    ok32 = true;
                }
                catch (Exception e) {
                    ok32 = false;
                }
                if (ok32 && contains(targets, v32)) {
                    hits += record(c, v32, chunk, i);
                }
                if (Math.floorMod(a.getOffset(), 8L) == 0) {
                    try {
                        long v64 = c.memory.getLong(a);
                        if ((!ok32 || v64 != v32) && contains(targets, v64)) {
                            hits += record(c, v64, chunk, i);
                        }
                    }
                    catch (Exception e) {
                    }
                }
            }
            return hits;
        }

        private static long word(byte[] b, int i, int size, boolean big) {
            long v = 0;
            if (big) {
                for (int k = 0; k < size; k++) {
                    v = (v << 8) | (b[i + k] & 0xffL);
                }
            }
            else {
                for (int k = size - 1; k >= 0; k--) {
                    v = (v << 8) | (b[i + k] & 0xffL);
                }
            }
            return v;
        }

        // Targets are non negative, so a word with the top bit set fails the range check
        private static boolean contains(long[] sorted, long v) {
            if (v < sorted[0] || v > sorted[sorted.length - 1]) {
                return false;
            }
            return Arrays.binarySearch(sorted, v) >= 0;
        }

        private static int record(Ctx c, long value, Address chunk, int i) {
            try {
                String slot = chunk.add(i).toString();
                c.brutePtrIndex.computeIfAbsent(value, k -> new ArrayList<>()).add(slot);
                return 1;
            }
            catch (Exception e) {
                return 0;
            }
        }

        static int detectStringTables(Ctx c) throws Exception {
            if (!INCLUDE_STRING_TABLES || c.brutePtrIndex.isEmpty()) {
                return 0;
            }
            Set<String> seenBases = new HashSet<>();
            Set<String> visitedSlots = new HashSet<>();
            int detected = 0;
            Set<String> candidates = candidateSlots(c);
            Progress p = c.progress("string tables", candidates.size());
            for (String slotStr : candidates) {
                p.step();
                if (visitedSlots.contains(slotStr)) {
                    continue;
                }
                Address slot;
                try {
                    slot = c.addrFactory.getAddress(slotStr);
                }
                catch (Exception e) {
                    slot = null;
                }
                if (slot == null) {
                    continue;
                }
                // The slot's own value is never checked, kept for parity with the pre-port DB
                Address start = slot;
                while (true) {
                    c.checkCancelled();
                    Address prev;
                    try {
                        prev = start.subtract(PTR_SIZE);
                    }
                    catch (Exception e) {
                        break;
                    }
                    if (!pointsToString(c, pointerAt(c, prev))) {
                        break;
                    }
                    start = prev;
                }
                Address end = slot;
                while (true) {
                    c.checkCancelled();
                    Address next;
                    try {
                        next = end.add(PTR_SIZE);
                    }
                    catch (Exception e) {
                        break;
                    }
                    if (!pointsToString(c, pointerAt(c, next))) {
                        break;
                    }
                    end = next;
                }
                long length = (end.getOffset() - start.getOffset()) / PTR_SIZE + 1;
                if (length < STRING_TABLE_MIN_ENTRIES) {
                    continue;
                }
                String baseStr = start.toString();
                StringTable tb = new StringTable(baseStr, (int) length);
                Address cur = start;
                for (long k = 0; k < length; k++) {
                    String s = cur.toString();
                    c.stringTableBases.put(s, tb);
                    visitedSlots.add(s);
                    try {
                        cur = cur.add(PTR_SIZE);
                    }
                    catch (Exception e) {
                        break;
                    }
                }
                if (seenBases.add(baseStr)) {
                    detected++;
                }
            }
            c.println("string tables: " + detected + " detected covering " + c.stringTableBases.size() +
                " pointer slots");
            return detected;
        }

        // Same hash as BigInteger.hashCode(), which Jython used for a long key, so set order matches the pre-port DB
        private static final class PyLongKey {
            final long v;

            PyLongKey(long v) {
                this.v = v;
            }

            @Override
            public int hashCode() {
                return (int) (31L * (v >>> 32) + (v & 0xffffffffL));
            }

            @Override
            public boolean equals(Object o) {
                return o instanceof PyLongKey k && k.v == v;
            }
        }

        private record FirstHit(Address slot, boolean wide, List<String> slots, long key) {
        }

        // Overlapping runs (a slot that does not point to a string between two that do) make the result
        // depend on the visit order, so rebuild the pre-port set order: dict keys in first hit order with
        // the Jython long hash, then a jySet filled from the value lists
        private static Set<String> candidateSlots(Ctx c) {
            List<FirstHit> hits = new ArrayList<>();
            for (Map.Entry<Long, List<String>> e : c.brutePtrIndex.entrySet()) {
                List<String> slots = e.getValue();
                if (slots == null || slots.isEmpty()) {
                    continue;
                }
                Address a;
                try {
                    a = c.addrFactory.getAddress(slots.get(0));
                }
                catch (Exception ex) {
                    a = null;
                }
                // At one position the 32 bit hit is appended first and only it can be below 2^32
                boolean wide = Long.compareUnsigned(e.getKey(), 0x100000000L) >= 0;
                hits.add(new FirstHit(a, wide, slots, e.getKey()));
            }
            hits.sort((x, y) -> {
                if (x.slot() == null || y.slot() == null) {
                    return x.slot() == null ? (y.slot() == null ? 0 : 1) : -1;
                }
                int r = x.slot().compareTo(y.slot());
                return r != 0 ? r : Boolean.compare(x.wide(), y.wide());
            });
            Map<PyLongKey, List<String>> dict = new ConcurrentHashMap<>(16, 0.75f, 2);
            for (FirstHit h : hits) {
                dict.put(new PyLongKey(h.key()), h.slots());
            }
            Set<String> out = jySet();
            for (List<String> slots : dict.values()) {
                out.addAll(slots);
            }
            return out;
        }

        private static Address pointerAt(Ctx c, Address slot) {
            try {
                long v = c.memory.getLong(slot);
                return c.addrFactory.getAddress(Long.toHexString(v));
            }
            catch (Exception e) {
                return null;
            }
        }

        private static boolean pointsToString(Ctx c, Address a) {
            if (a == null) {
                return false;
            }
            try {
                Data d = c.listing.getDataAt(a);
                if (d == null) {
                    d = c.listing.getDataContaining(a);
                }
                return isStringData(d);
            }
            catch (Exception e) {
                return false;
            }
        }
    }

    // Building a FuncInfo also writes its .c, .mmd and .asm files under decompiled/
    static final class FuncInfos {

        private static final CommentType[] COMMENT_TYPES = {
            CommentType.PLATE, CommentType.PRE, CommentType.POST, CommentType.EOL, CommentType.REPEATABLE };
        private static final String[] COMMENT_LABELS = { "plate", "pre", "post", "eol", "repeat" };

        // ASCII \b \d \s (Java's default), the same classes the pre-port script hashed with
        private static final Pattern[] NORM_PATTERNS = {
            Pattern.compile("\\b[ui]Var\\d+\\b"),
            Pattern.compile("\\bpcVar\\d+\\b"),
            Pattern.compile("\\bpVar\\d+\\b"),
            Pattern.compile("\\blVar\\d+\\b"),
            Pattern.compile("\\bcVar\\d+\\b"),
            Pattern.compile("\\bsVar\\d+\\b"),
            Pattern.compile("\\bbVar\\d+\\b"),
            Pattern.compile("\\bauVar\\d+\\b"),
            Pattern.compile("\\blocal_[0-9a-fA-F]+\\b"),
            Pattern.compile("\\bparam_\\d+\\b"),
            Pattern.compile("\\bin_[A-Za-z0-9_]+\\b"),
            Pattern.compile("0x[0-9a-fA-F]+"),
            Pattern.compile("\\b\\d+\\b"),
            Pattern.compile("\\s+") };
        private static final String[] NORM_REPL = { "V", "V", "V", "V", "V", "V", "V", "V", "L", "P", "R", "0x", "N", " " };

        private static final char[] HEX = "0123456789abcdef".toCharArray();

        private static final class Decomp {
            String code = "";
            List<String> structs = new ArrayList<>();
            List<String> constants = new ArrayList<>();
        }

        static FuncInfo funcInfo(Ctx c, Function f) {
            if (f == null) {
                return null;
            }
            Address entry;
            String key;
            try {
                entry = f.getEntryPoint();
                key = entry.toString();
            }
            catch (Exception e) {
                c.error("funcInfo", e);
                return emptyInfo();
            }
            FuncInfo cached = c.funcInfoCache.get(key);
            if (cached != null) {
                return cached;
            }
            FuncInfo fi = new FuncInfo();
            fi.addr = entry;
            fi.addrStr = key;
            fi.offset = c.relOffset(entry);
            try {
                fill(c, f, entry, key, fi);
            }
            catch (Cancelled e) {
                throw e;
            }
            catch (Exception e) {
                // Every step has its own fallback, this only keeps a surprise from losing the function
                c.error("funcInfo " + key, e);
            }
            c.funcInfoCache.put(key, fi);
            return fi;
        }

        static FuncInfo emptyInfo() {
            return new FuncInfo();
        }

        static String suggestedName(Ctx c, FuncInfo b) {
            if (!INCLUDE_NAME_HINTS || b == null) {
                return "";
            }
            String nm = nz(b.name);
            if (!nm.isEmpty()) {
                String[] parts = nm.split("::", -1);
                if (!parts[parts.length - 1].startsWith("FUN_")) {
                    return "";
                }
            }
            List<ExtName> ext = b.externalNames == null ? List.of() : b.externalNames;
            for (ExtName e : ext) {
                if ("exact".equals(e.kind())) {
                    return nz(e.name());
                }
            }
            if (!ext.isEmpty()) {
                return nz(ext.get(0).name());
            }
            if (b.matchValues != null && !b.matchValues.isEmpty()) {
                Map<String, Integer> counts = jyDict();
                for (String v : b.matchValues) {
                    counts.merge(nz(v), 1, Integer::sum);
                }
                return rustSafeIdent(byCountDesc(counts).get(0).getKey(), "hook");
            }
            if (b.strings != null && !b.strings.isEmpty()) {
                return rustSafeIdent(b.strings.get(0), "hook");
            }
            return "";
        }

        static List<Hash40Load> hash40LoadsInFunc(Ctx c, Function f) {
            List<Hash40Load> found = new ArrayList<>();
            if (!INCLUDE_HASH40 || c.hash40Labels.isEmpty() || f == null) {
                return found;
            }
            try {
                Hash40Tracker t = new Hash40Tracker(c);
                InstructionIterator it = c.listing.getInstructions(f.getBody(), true);
                while (it.hasNext()) {
                    Hash40Load h = t.feed(it.next());
                    if (h != null) {
                        found.add(h);
                    }
                }
            }
            catch (Exception e) {
            }
            return found;
        }

        // Evaluation order follows the pre-port script, files are written along the way
        private static void fill(Ctx c, Function f, Address entry, String key, FuncInfo fi) {
            AddressSetView body = bodyOf(f);
            fi.name = safe(() -> f.getName(true));
            String symMangled = c.findMangledAt(entry);
            String mangled = symMangled;
            if (mangled.isEmpty() && isMangled(fi.name)) {
                mangled = fi.name;
            }
            fi.mangled = mangled;
            fi.demangled = mangled.isEmpty() ? "" : c.demangle(mangled);
            fi.namespace = safe(() -> {
                Namespace p = f.getParentNamespace();
                return p != null ? p.getName(true) : "";
            });
            fi.signature = safe(() -> String.valueOf(f.getSignature()));
            fi.size = body.getNumAddresses();
            List<CodeBlock> blocks = blocksOf(c, body);
            fi.basicBlocks = blocks == null ? 0 : blocks.size();
            try {
                fi.incoming = c.refMgr.getReferenceCountTo(entry);
            }
            catch (Exception e) {
                fi.incoming = 0;
            }

            String fileBase = safeFilename(safe(() -> f.getName(false))) + "__" + fileTag(key);
            Decomp d = decompile(c, f, key);
            fi.decompCode = INCLUDE_DECOMP ? d.code : "";
            if (!fi.decompCode.isEmpty()) {
                String code = fi.decompCode;
                fi.decompPath = writeOnce(c, fileBase + ".c", () ->
                    "// addr:      " + key + "\n" +
                    "// offset:    " + fi.offset + "\n" +
                    "// name:      " + fi.name + "\n" +
                    "// mangled:   " + symMangled + "\n" +
                    "// signature: " + fi.signature + "\n\n" +
                    code);
            }
            String cfg = INCLUDE_CFG ? cfgMermaid(c, blocks) : "";
            if (!cfg.isEmpty()) {
                fi.cfgPath = writeOnce(c, fileBase + ".mmd", () -> cfg);
            }
            fi.structs = d.structs;
            fi.cloneHash = INCLUDE_CLONES ? cloneHash(c, key, fi.decompCode, f) : "";
            fi.callers = names(c.callersOf(f, CALLS_PER_FUNC));
            fi.callees = names(c.calleesOf(f, CALLS_PER_FUNC));
            fi.fingerprint = fingerprint(c, key, entry, fi.size);
            fi.constants = d.constants;
            fi.referencedBy = referencedBy(c, mangled);
            fi.comments = comments(c, body);
            fi.globals = globals(c, body);
            if (INCLUDE_DISASM) {
                fi.asmPath = writeOnce(c, fileBase + ".asm", () -> disasm(c, body, key, fi, symMangled));
            }
            try {
                List<ExtName> ext = Loaders.externalNamesFor(c, entry, fi.size);
                fi.externalNames = ext != null ? ext : new ArrayList<>();
            }
            catch (Exception e) {
                fi.externalNames = new ArrayList<>();
            }
            fi.hash40Loads = hash40LoadsInFunc(c, f);
            fi.strings = strings(c, key, body);
        }

        private static AddressSetView bodyOf(Function f) {
            try {
                AddressSetView b = f.getBody();
                if (b != null) {
                    return b;
                }
            }
            catch (Exception e) {
            }
            return new AddressSet();
        }

        // A ':' from a non default space would name an NTFS stream on Windows
        private static String fileTag(String addrStr) {
            return addrStr.replace(':', '_');
        }

        private static String writeOnce(Ctx c, String fname, Step<String> content) {
            File out = new File(c.decompiledDir, fname);
            try {
                if (out.exists() && !c.overwriteDecomp) {
                    return out.getPath();
                }
            }
            catch (Exception e) {
                c.error("write " + out, e);
                return "";
            }
            boolean started = false;
            try {
                String text = content.run();
                started = true;
                writeText(out, text);
                return out.getPath();
            }
            catch (Cancelled e) {
                throw e;
            }
            catch (Exception e) {
                c.error("write " + out, e);
                if (started) {
                    // A half written file would pass the exists check of the next run
                    try {
                        Files.deleteIfExists(out.toPath());
                    }
                    catch (Exception e2) {
                        c.warn("cannot remove partial " + out);
                    }
                }
                return "";
            }
        }

        private static List<CodeBlock> blocksOf(Ctx c, AddressSetView body) {
            if (c.bbm == null) {
                return null;
            }
            try {
                List<CodeBlock> out = new ArrayList<>();
                CodeBlockIterator it = c.bbm.getCodeBlocksContaining(body, c.monitor);
                while (it.hasNext()) {
                    out.add(it.next());
                }
                return out;
            }
            catch (Exception e) {
                return null;
            }
        }

        private static String cfgMermaid(Ctx c, List<CodeBlock> blocks) {
            if (blocks == null || blocks.isEmpty()) {
                return "";
            }
            try {
                Map<String, Integer> idx = new HashMap<>();
                for (int i = 0; i < blocks.size(); i++) {
                    idx.put(String.valueOf(blocks.get(i).getFirstStartAddress()), i);
                }
                StringBuilder sb = new StringBuilder("flowchart TD");
                for (int i = 0; i < blocks.size(); i++) {
                    String label = i + " " + blocks.get(i).getFirstStartAddress();
                    sb.append("\n    B").append(i).append("[\"").append(label.replace("\"", "\\\"")).append("\"]");
                }
                for (int i = 0; i < blocks.size(); i++) {
                    CodeBlockReferenceIterator dit = blocks.get(i).getDestinations(c.monitor);
                    while (dit.hasNext()) {
                        Integer j = idx.get(String.valueOf(dit.next().getDestinationAddress()));
                        if (j != null) {
                            sb.append("\n    B").append(i).append(" --> B").append(j);
                        }
                    }
                }
                return sb.append("\n").toString();
            }
            catch (Exception e) {
                return "";
            }
        }

        // Decompiles once and pulls everything later steps need, the results object is not kept
        private static Decomp decompile(Ctx c, Function f, String key) {
            Decomp d = new Decomp();
            if (!INCLUDE_DECOMP && !INCLUDE_STRUCT_ACCESS && !INCLUDE_CONSTANTS) {
                return d;
            }
            String cached = c.decompCache.get(key);
            DecompileResults res = null;
            if (cached != null) {
                d.code = cached;
            }
            else {
                if (INCLUDE_DECOMP && c.decomp != null) {
                    try {
                        DecompileResults r = c.decomp.decompileFunction(f, DECOMP_TIMEOUT, c.monitor);
                        if (r != null && r.decompileCompleted()) {
                            res = r;
                            DecompiledFunction df = r.getDecompiledFunction();
                            if (df != null) {
                                d.code = nz(df.getC());
                            }
                        }
                    }
                    catch (Exception e) {
                        d.code = "";
                    }
                }
                c.decompCache.put(key, d.code);
            }
            if (INCLUDE_STRUCT_ACCESS) {
                List<String> s = c.structCache.get(key);
                if (s == null) {
                    s = structAccesses(res);
                    c.structCache.put(key, s);
                }
                d.structs = s;
            }
            if (INCLUDE_CONSTANTS) {
                List<String> k = c.constantsCache.get(key);
                if (k == null) {
                    k = constants(res);
                    c.constantsCache.put(key, k);
                }
                d.constants = k;
            }
            return d;
        }

        private static List<String> structAccesses(DecompileResults res) {
            List<String> out = new ArrayList<>();
            if (res == null) {
                return out;
            }
            try {
                ClangTokenGroup markup = res.getCCodeMarkup();
                if (markup == null) {
                    return out;
                }
                List<String> fields = new ArrayList<>();
                // An explicit stack gives the pre-order of a recursive walk without deep recursion
                Deque<ClangNode> stack = new ArrayDeque<>();
                stack.push(markup);
                while (!stack.isEmpty()) {
                    ClangNode n = stack.pop();
                    if (n instanceof ClangFieldToken ft) {
                        try {
                            DataType dt = ft.getDataType();
                            String text = ft.getText();
                            String tname = dt != null ? pyStr(dt.getName()) : "";
                            fields.add(tname + "::" + pyStr(text));
                        }
                        catch (Exception e) {
                        }
                    }
                    if (n instanceof ClangTokenGroup g) {
                        for (int i = g.numChildren() - 1; i >= 0; i--) {
                            ClangNode ch = g.Child(i);
                            if (ch != null) {
                                stack.push(ch);
                            }
                        }
                    }
                }
                Set<String> seen = new HashSet<>();
                for (String tag : fields) {
                    if (!seen.add(tag)) {
                        continue;
                    }
                    out.add(tag);
                    if (out.size() >= STRUCT_ACCESS_PER_FUNC) {
                        break;
                    }
                }
            }
            catch (Exception e) {
            }
            return out;
        }

        private static List<String> constants(DecompileResults res) {
            int cap = CONSTANTS_PER_FUNC * 4;
            Set<Long> vals = new HashSet<>();
            if (res != null) {
                try {
                    HighFunction high = res.getHighFunction();
                    if (high != null) {
                        Iterator<PcodeOpAST> it = high.getPcodeOps();
                        while (it.hasNext()) {
                            PcodeOp op = it.next();
                            for (Varnode v : op.getInputs()) {
                                if (v == null || !v.isConstant()) {
                                    continue;
                                }
                                long val = v.getOffset();
                                // -Long.MIN_VALUE overflows and stays negative, so that value is dropped too
                                long absv = val >= 0 ? val : -val;
                                if (0xffL < absv && absv < 0x7fffffffL) {
                                    vals.add(val);
                                    if (vals.size() >= cap) {
                                        break;
                                    }
                                }
                            }
                            if (vals.size() >= cap) {
                                break;
                            }
                        }
                    }
                }
                catch (Exception e) {
                }
            }
            List<Long> sorted = new ArrayList<>(vals);
            Collections.sort(sorted);
            List<String> out = new ArrayList<>();
            for (int i = 0; i < sorted.size() && i < CONSTANTS_PER_FUNC; i++) {
                out.add(hexU(sorted.get(i) & 0xffffffffL));
            }
            return out;
        }

        private static String cloneHash(Ctx c, String key, String code, Function f) {
            String cached = c.cloneHashCache.get(key);
            if (cached != null) {
                return cached;
            }
            if (code == null || code.isEmpty()) {
                c.cloneHashCache.put(key, "");
                return "";
            }
            String h = sha1Hex(cloneText(code, safe(() -> f.getName(true)), safe(() -> f.getName(false))))
                .substring(0, 16);
            c.cloneHashCache.put(key, h);
            return h;
        }

        static String cloneText(String code, String... ownNames) {
            String body = code;
            // The decompiler text starts with CRLF, so this drops only that line break
            int nl = body.indexOf('\n');
            if (nl > 0) {
                body = body.substring(nl + 1);
            }
            // The signature line carries the function's own name, which alone would keep every hash unique
            for (String own : ownNames) {
                if (!own.isEmpty()) {
                    Pattern p = Pattern.compile("(?<![\\w:~])" + Pattern.quote(own) + "(?!\\w)");
                    body = p.matcher(body).replaceAll("F");
                }
            }
            for (int i = 0; i < NORM_PATTERNS.length; i++) {
                body = NORM_PATTERNS[i].matcher(body).replaceAll(NORM_REPL[i]);
            }
            return body;
        }

        private static List<String> names(List<Function> funcs) {
            List<String> out = new ArrayList<>();
            for (Function g : funcs) {
                out.add(safe(() -> g.getName(true)));
            }
            return out;
        }

        // Stops at the first unreadable byte, so EXTERNAL thunks and uninitialized blocks give ""
        private static String fingerprint(Ctx c, String key, Address entry, long size) {
            if (!INCLUDE_FINGERPRINT) {
                return "";
            }
            String cached = c.fingerprintCache.get(key);
            if (cached != null) {
                return cached;
            }
            long n = Math.min(FINGERPRINT_BYTES, size);
            StringBuilder sb = new StringBuilder();
            for (long i = 0; i < n; i++) {
                try {
                    int b = c.memory.getByte(entry.add(i)) & 0xff;
                    sb.append(HEX[b >>> 4]).append(HEX[b & 0xf]);
                }
                catch (Exception e) {
                    break;
                }
            }
            String fp = sb.toString();
            c.fingerprintCache.put(key, fp);
            return fp;
        }

        private static List<String> referencedBy(Ctx c, String mangled) {
            List<String> out = new ArrayList<>();
            if (mangled == null || mangled.isEmpty() || c.consumerRefs == null) {
                return out;
            }
            Set<String> labels = c.consumerRefs.get(mangled);
            if (labels != null) {
                out.addAll(labels);
                Collections.sort(out);
            }
            return out;
        }

        // Comments sit at code unit starts, so one lookup per unit replaces five per byte
        private static List<String> comments(Ctx c, AddressSetView body) {
            List<String> out = new ArrayList<>();
            if (!INCLUDE_COMMENTS) {
                return out;
            }
            try {
                CodeUnitIterator it = c.listing.getCodeUnits(body, true);
                outer:
                while (it.hasNext()) {
                    CodeUnit cu = it.next();
                    for (int t = 0; t < COMMENT_TYPES.length; t++) {
                        String s;
                        try {
                            s = cu.getComment(COMMENT_TYPES[t]);
                        }
                        catch (Exception e) {
                            s = null;
                        }
                        if (s != null && !s.isEmpty()) {
                            String snip = cutCodePoints(s.replace("\n", " ").replace("\r", " "), COMMENT_MAX_CHARS);
                            out.add("[" + COMMENT_LABELS[t] + "@" + cu.getMinAddress() + "] " + snip);
                        }
                        if (out.size() >= COMMENTS_PER_FUNC) {
                            break outer;
                        }
                    }
                }
            }
            catch (Exception e) {
            }
            return out;
        }

        private static String cutCodePoints(String s, int n) {
            if (s.length() <= n) {
                return s;
            }
            if (s.codePointCount(0, s.length()) <= n) {
                return s;
            }
            return s.substring(0, s.offsetByCodePoints(0, n));
        }

        private static List<String> globals(Ctx c, AddressSetView body) {
            List<String> out = new ArrayList<>();
            if (!INCLUDE_GLOBALS_ACCESS) {
                return out;
            }
            Set<String> seen = new HashSet<>();
            try {
                AddressIterator it = c.refMgr.getReferenceSourceIterator(body, true);
                outer:
                while (it.hasNext()) {
                    Address a = it.next();
                    for (Reference ref : c.refMgr.getReferencesFrom(a)) {
                        RefType t = ref.getReferenceType();
                        if (!t.isData()) {
                            continue;
                        }
                        Address to = ref.getToAddress();
                        if (to == null) {
                            continue;
                        }
                        Data data = c.listing.getDataAt(to);
                        if (data == null) {
                            data = c.listing.getDataContaining(to);
                        }
                        if (data == null) {
                            continue;
                        }
                        Symbol sym = c.symTab.getPrimarySymbol(to);
                        String label = sym != null ? pyStr(sym.getName()) : "?";
                        String kind = "rw";
                        if (t.isRead() && !t.isWrite()) {
                            kind = "r";
                        }
                        else if (t.isWrite() && !t.isRead()) {
                            kind = "w";
                        }
                        String tag = label + "@" + to + "(" + kind + ")";
                        if (!seen.add(tag)) {
                            continue;
                        }
                        out.add(tag);
                        if (out.size() >= CALLS_PER_FUNC) {
                            break outer;
                        }
                    }
                }
            }
            catch (Exception e) {
            }
            return out;
        }

        private static String disasm(Ctx c, AddressSetView body, String key, FuncInfo fi, String symMangled) {
            StringBuilder sb = new StringBuilder();
            sb.append("// addr:      ").append(key).append("\n");
            sb.append("// offset:    ").append(fi.offset).append("\n");
            sb.append("// name:      ").append(fi.name).append("\n");
            sb.append("// mangled:   ").append(symMangled).append("\n");
            sb.append("// size:      ").append(body.getNumAddresses()).append("\n\n");
            InstructionIterator it = c.listing.getInstructions(body, true);
            while (it.hasNext()) {
                Instruction ins = it.next();
                sb.append(ins.getAddress()).append("  ").append(ins).append("\n");
            }
            return sb.toString();
        }

        private static List<String> strings(Ctx c, String key, AddressSetView body) {
            List<String> cached = c.stringsCache.get(key);
            if (cached != null) {
                return cached;
            }
            List<String> found = new ArrayList<>();
            Set<String> seen = new HashSet<>();
            try {
                AddressIterator it = c.refMgr.getReferenceSourceIterator(body, true);
                outer:
                while (it.hasNext()) {
                    Address a = it.next();
                    for (Reference ref : c.refMgr.getReferencesFrom(a)) {
                        Address to = ref.getToAddress();
                        if (to == null) {
                            continue;
                        }
                        Data data = c.listing.getDataAt(to);
                        if (!isStringData(data)) {
                            continue;
                        }
                        Object v = data.getValue();
                        if (v == null) {
                            continue;
                        }
                        String s = String.valueOf(v);
                        if (!seen.add(s)) {
                            continue;
                        }
                        found.add(s);
                        if (found.size() >= STRINGS_PER_FUNC) {
                            break outer;
                        }
                    }
                }
            }
            catch (Exception e) {
            }
            c.stringsCache.put(key, found);
            return found;
        }

        // null prints as "None", as in the pre-port DB
        private static String pyStr(Object o) {
            return o == null ? "None" : o.toString();
        }
    }

    static final class Category {

        static final List<String> XREFS_HEADER = List.of(
            "Location", "Match Value", "Depth", "Terminal",
            "Ref Type", "Operand Index",
            "From Address", "From Offset", "From Code Unit",
            "Function Address", "Function Offset", "Function Name", "Function Symbol",
            "Function Demangled", "Function Namespace", "Function Signature",
            "Function Size", "Function Basic Blocks", "Function Incoming Refs",
            "Function Decompile Path", "Function CFG Path", "Function Clone Hash",
            "Function Fingerprint", "Function Referenced By",
            "Path");

        static final List<String> FUNCS_HEADER = List.of(
            "Function Address", "Function Offset", "Function Name", "Function Symbol",
            "Function Demangled", "Function Namespace", "Function Signature",
            "Function Size", "Function Basic Blocks", "Function Incoming Refs",
            "Function Decompile Path", "Function CFG Path", "Function Disasm Path",
            "Function Clone Hash", "Function Fingerprint", "Function Referenced By",
            "External Names", "Suggested Name",
            "Hit Count", "Match Values", "Strings In Body",
            "Struct Accesses", "Constants", "Globals Accessed", "Comments",
            "Hash40 Loads",
            "Callers", "Callees");

        static final List<String> CHAINS_HEADER = List.of(
            "Seed Address", "Seed Name", "Depth Max", "Length",
            "Root Address", "Root Name", "Root Symbol", "Path");

        private static final String BRUTE_REF_TYPE = "BRUTE_PTR";
        private static final String BRUTE_OP_INDEX = "-1";

        @FunctionalInterface
        private interface Sink {
            void hit(String refType, String opIndex, Address from, String cuText, boolean terminal,
                    List<String> path) throws IOException;
        }

        private record Edge(String src, String dst) {
        }

        private record ChainStep(Function node, List<Function> path) {
        }

        static DumpStats dumpOne(Ctx c, InputFile in, Map<String, FuncInfo> globalFuncs) throws Exception {
            String label = in.label();
            List<List<String>> rows = readCsv(in.path());
            Map<String, FuncInfo> perFunc = jyDict();
            int totalLocs = 0;
            int totalWalked = 0;

            try (CsvOut xw = new CsvOut(new File(c.xrefsDir, "xrefs_" + label + ".csv"))) {
                xw.row(XREFS_HEADER);
                Progress p = c.progress("[" + label + "] rows", Math.max(0, rows.size() - 1));
                for (int i = 1; i < rows.size(); i++) {
                    p.step();
                    List<String> row = rows.get(i);
                    if (row.isEmpty()) {
                        continue;
                    }
                    totalLocs++;
                    String loc = row.get(0);
                    String mv = row.size() > 2 ? row.get(2) : "";
                    Address addr = c.parseLocation(loc);
                    if (addr == null) {
                        continue;
                    }
                    Set<String> visited = new HashSet<>();
                    Sink sink = (refType, opIndex, from, cuText, terminal, path) -> {
                        Function func = terminal ? c.funcAt(from) : null;
                        FuncInfo fi = func != null ? FuncInfos.funcInfo(c, func) : null;
                        boolean bucketed = fi != null;
                        if (fi == null) {
                            fi = FuncInfos.emptyInfo();
                        }
                        xw.row(xrefRow(c, loc, mv, refType, opIndex, from, cuText, terminal, fi, path));
                        if (bucketed) {
                            addHit(perFunc, fi, false, loc, mv, label);
                            addHit(globalFuncs, fi, true, loc, mv, label);
                        }
                    };
                    // Shared visited set, so a from address reached through both targets is reported once
                    for (Address target : c.locationTargets(addr)) {
                        walk(c, target, MAX_DEPTH, visited, List.of(), sink);
                    }
                    totalWalked += visited.size();
                }
            }

            List<FuncInfo> sorted = sortByHitsDesc(perFunc.values());
            try (CsvOut fw = new CsvOut(new File(c.funcsDir, "funcs_" + label + ".csv"))) {
                fw.row(FUNCS_HEADER);
                for (FuncInfo b : sorted) {
                    c.checkCancelled();
                    fw.row(funcRow(c, b));
                }
            }
            writeReport(c, new File(c.reportsDir, "report_" + label + ".md"), label, sorted,
                "(funcs=" + perFunc.size() + ", hits=" + totalWalked + ")");
            if (INCLUDE_CHAINS) {
                writeChains(c, label, sorted);
            }
            if (INCLUDE_CALLGRAPH) {
                emitCallgraph(c, label, sorted);
            }
            if (INCLUDE_RUST_EXTERNS) {
                emitRustExterns(c, label, sorted);
            }
            c.println("[" + label + "] locations=" + totalLocs + " walked=" + totalWalked + " unique_funcs=" +
                perFunc.size());
            return new DumpStats(totalLocs, totalWalked, perFunc.size());
        }

        static void writeGlobal(Ctx c, Map<String, FuncInfo> globalFuncs) throws Exception {
            List<FuncInfo> sorted = sortByHitsDesc(globalFuncs.values());
            try (CsvOut w = new CsvOut(new File(c.funcsDir, "funcs_all.csv"))) {
                List<String> header = new ArrayList<>();
                header.add("Categories");
                header.addAll(FUNCS_HEADER);
                w.row(header);
                for (FuncInfo b : sorted) {
                    c.checkCancelled();
                    List<Object> row = new ArrayList<>();
                    row.add(String.join(";", sortedCategories(b)));
                    row.addAll(funcRow(c, b));
                    w.row(row);
                }
            }
            writeReport(c, new File(c.reportsDir, "report_all.md"), "all categories", sorted,
                "(unique funcs=" + globalFuncs.size() + ")");
        }

        static int emitRustExterns(Ctx c, String label, List<FuncInfo> sortedFuncs) throws Exception {
            if (!INCLUDE_RUST_EXTERNS) {
                return 0;
            }
            List<FuncInfo> candidates = new ArrayList<>();
            for (FuncInfo b : sortedFuncs) {
                if (candidates.size() >= RUST_EXTERNS_TOP_N) {
                    break;
                }
                if (!nz(b.mangled).isEmpty()) {
                    candidates.add(b);
                }
            }
            if (candidates.isEmpty()) {
                return 0;
            }
            StringBuilder sb = new StringBuilder();
            sb.append("// auto-generated by ssbu-xref-db ").append(SCRIPT_FILE).append('\n');
            sb.append("// category: ").append(label).append('\n');
            sb.append("// candidates: ").append(candidates.size()).append(" (top by hit count)\n");
            sb.append("// fill in argument types from the signature comment, then move into your project\n\n");
            sb.append("extern \"C\" {\n");
            Set<String> used = new HashSet<>();
            for (FuncInfo b : candidates) {
                String name = nz(b.name);
                String baseName = name.isEmpty() ? "hook" : lastPart(name, "::");
                String identBase = rustSafeIdent(baseName, "hook");
                String ident = identBase;
                int n = 2;
                while (used.contains(ident)) {
                    ident = identBase + "_" + n;
                    n++;
                }
                used.add(ident);
                List<String> block = new ArrayList<>();
                List<String> refs = lst(b.referencedBy);
                if (!refs.isEmpty()) {
                    block.add("    // already referenced by: " + String.join(";", refs));
                }
                block.add("    /// " + firstNonEmpty(b.demangled, b.name, "(unnamed)"));
                block.add("    /// addr=0x" + nz(b.addrStr) + ", offset=" + nz(b.offset) + ", hits=" + b.hits +
                    ", in=" + b.incoming + ", size=" + b.size);
                if (!lst(b.matchValues).isEmpty()) {
                    block.add("    /// matches: " + joinUnique(b.matchValues, 8));
                }
                if (!nz(b.signature).isEmpty()) {
                    block.add("    /// signature: " + b.signature);
                }
                block.add("    #[link_name = \"" + b.mangled + "\"]");
                block.add("    fn " + ident + "(/* TODO: fill from signature */) /* -> ? */;");
                block.add("");
                sb.append(String.join("\n", block)).append('\n');
            }
            sb.append("}\n");
            writeText(new File(c.rustExternsDir, label + ".rs"), sb.toString());
            return candidates.size();
        }

        static void writeCoverage(Ctx c, Map<String, FuncInfo> globalFuncs) throws Exception {
            Collection<FuncInfo> all = globalFuncs.values();
            int total = globalFuncs.size();
            int withMangled = 0;
            int noDecomp = 0;
            int small = 0;
            int large = 0;
            int noCallers = 0;
            int noCallees = 0;
            for (FuncInfo b : all) {
                if (!nz(b.mangled).isEmpty()) {
                    withMangled++;
                }
                if (nz(b.decompPath).isEmpty()) {
                    noDecomp++;
                }
                if (b.size < 32) {
                    small++;
                }
                if (b.size >= 1024) {
                    large++;
                }
                if (lst(b.callers).isEmpty()) {
                    noCallers++;
                }
                if (lst(b.callees).isEmpty()) {
                    noCallees++;
                }
            }
            int withoutMangled = total - withMangled;

            Map<String, Integer> categoryCounts = jyDict();
            for (FuncInfo b : all) {
                if (b.categories == null) {
                    continue;
                }
                for (String cat : b.categories) {
                    categoryCounts.merge(cat, 1, Integer::sum);
                }
            }
            Map<String, Integer> nsCounts = jyDict();
            for (FuncInfo b : all) {
                String ns = firstNonEmpty(b.namespace, "(global)");
                int cut = ns.indexOf("::");
                nsCounts.merge(cut >= 0 ? ns.substring(0, cut) : ns, 1, Integer::sum);
            }

            List<String> lines = new ArrayList<>();
            lines.add("# Coverage report");
            lines.add("");
            lines.add("Functions reached by current search set: **" + total + "**");
            lines.add("");
            lines.add("## Symbol availability");
            lines.add("- with mangled symbol: **" + withMangled + "** (" + pct(withMangled, total) + "%)");
            lines.add("- only FUN_xxxx-style: **" + withoutMangled + "** (" + pct(withoutMangled, total) + "%)");
            lines.add("");
            lines.add("## Function size buckets");
            lines.add("- tiny (<32 bytes): **" + small + "**");
            lines.add("- large (>=1024 bytes): **" + large + "**");
            lines.add("");
            lines.add("## Connectivity");
            lines.add("- no known callers: **" + noCallers + "** (entry-points or dead?)");
            lines.add("- no known callees: **" + noCallees + "** (leaf functions)");
            lines.add("- decompile failed: **" + noDecomp + "**");
            lines.add("");
            lines.add("## Top namespaces in reached set");
            List<Map.Entry<String, Integer>> nsSorted = byCountDesc(nsCounts);
            for (Map.Entry<String, Integer> e : nsSorted.subList(0, Math.min(20, nsSorted.size()))) {
                lines.add("- `" + e.getKey() + "`: " + e.getValue());
            }
            lines.add("");
            lines.add("## Per-category counts");
            for (Map.Entry<String, Integer> e : byCountDesc(categoryCounts)) {
                lines.add("- `" + e.getKey() + "`: " + e.getValue());
            }
            lines.add("");

            Map<String, Integer> consumerCounts = jyDict();
            for (FuncInfo b : all) {
                for (String l : lst(b.referencedBy)) {
                    consumerCounts.merge(l, 1, Integer::sum);
                }
            }
            if (!consumerCounts.isEmpty()) {
                lines.add("## Consumer projects already referencing these symbols");
                for (Map.Entry<String, Integer> e : byCountDesc(consumerCounts)) {
                    lines.add("- `" + e.getKey() + "`: " + e.getValue());
                }
                int unreferenced = 0;
                for (FuncInfo b : all) {
                    if (!nz(b.mangled).isEmpty() && lst(b.referencedBy).isEmpty()) {
                        unreferenced++;
                    }
                }
                lines.add("- unused candidates with mangled symbol: **" + unreferenced + "**");
                lines.add("");
            }
            writeText(new File(c.reportsDir, "coverage.md"), String.join("\n", lines) + "\n");
        }

        private static void walk(Ctx c, Address target, int depth, Set<String> visited, List<String> path,
                Sink sink) throws IOException {
            if (depth <= 0) {
                return;
            }
            c.checkCancelled();
            Set<String> seenFrom = new HashSet<>();
            for (Reference ref : refsTo(c, target)) {
                Address from = ref.getFromAddress();
                String key = from.toString();
                seenFrom.add(key);
                if (!visited.add(key)) {
                    continue;
                }
                CodeUnit cu = c.codeUnitAt(from);
                boolean terminal = cu == null || cu instanceof Instruction;
                List<String> newPath = extend(path, key);
                sink.hit(refTypeText(ref), opIndexText(ref), from, cuText(cu), terminal, newPath);
                if (!terminal && depth > 1) {
                    walk(c, from, depth - 1, visited, newPath, sink);
                }
            }
            if (!INCLUDE_BRUTE_REFS) {
                return;
            }
            List<String> slots = c.brutePtrIndex.get(target.getOffset());
            if (slots == null) {
                return;
            }
            for (String fromStr : slots) {
                if (seenFrom.contains(fromStr) || visited.contains(fromStr)) {
                    continue;
                }
                visited.add(fromStr);
                Address from = c.toAddr(fromStr);
                if (from == null) {
                    continue;
                }
                CodeUnit cu = c.codeUnitAt(from);
                // Unlike the reference loop above, a slot without a code unit is raw data, so not terminal
                boolean terminal = cu != null && cu instanceof Instruction;
                List<String> newPath = extend(path, fromStr);
                sink.hit(BRUTE_REF_TYPE, BRUTE_OP_INDEX, from, cuText(cu), terminal, newPath);
                if (!terminal && depth > 1) {
                    walk(c, from, depth - 1, visited, newPath, sink);
                }
                if (!INCLUDE_STRING_TABLES) {
                    continue;
                }
                StringTable tb = c.stringTableBases.get(fromStr);
                if (tb == null) {
                    continue;
                }
                String base = tb.base();
                if (base == null || base.equals(fromStr) || visited.contains(base)) {
                    continue;
                }
                visited.add(base);
                Address baseAddr = c.toAddr(base);
                if (baseAddr == null) {
                    continue;
                }
                CodeUnit cuB = c.codeUnitAt(baseAddr);
                boolean terminalB = cuB != null && cuB instanceof Instruction;
                List<String> newPathB = extend(path, fromStr, base);
                sink.hit(BRUTE_REF_TYPE, BRUTE_OP_INDEX, baseAddr, cuText(cuB), terminalB, newPathB);
                if (!terminalB && depth > 1) {
                    walk(c, baseAddr, depth - 1, visited, newPathB, sink);
                }
            }
        }

        // Collected up front, the sink decompiles while the walk is still on this address
        private static List<Reference> refsTo(Ctx c, Address target) {
            List<Reference> out = new ArrayList<>();
            try {
                ReferenceIterator it = c.refMgr.getReferencesTo(target);
                while (it.hasNext()) {
                    out.add(it.next());
                }
            }
            catch (Exception e) {
                c.warn("references to " + target + ": " + e);
            }
            return out;
        }

        private static String refTypeText(Reference ref) {
            try {
                return String.valueOf(ref.getReferenceType());
            }
            catch (Exception e) {
                return "";
            }
        }

        private static String opIndexText(Reference ref) {
            try {
                return String.valueOf(ref.getOperandIndex());
            }
            catch (Exception e) {
                return "";
            }
        }

        private static String cuText(CodeUnit cu) {
            if (cu == null) {
                return "";
            }
            try {
                return nz(cu.toString());
            }
            catch (Exception e) {
                return "";
            }
        }

        private static List<String> extend(List<String> path, String... more) {
            List<String> out = new ArrayList<>(path.size() + more.length);
            out.addAll(path);
            Collections.addAll(out, more);
            return out;
        }

        private static void addHit(Map<String, FuncInfo> buckets, FuncInfo fi, boolean global, String loc, String mv,
                String label) {
            String key = nz(fi.addrStr);
            FuncInfo b = buckets.get(key);
            if (b == null) {
                b = fi.bucket(global);
                buckets.put(key, b);
            }
            b.hits++;
            b.matchValues.add(mv);
            b.locations.add(loc);
            if (global) {
                b.categories.add(label);
            }
        }

        private static List<Object> xrefRow(Ctx c, String loc, String mv, String refType, String opIndex,
                Address from, String cuText, boolean terminal, FuncInfo fi, List<String> path) {
            List<String> fullPath = new ArrayList<>(path.size() + 1);
            fullPath.add(loc);
            fullPath.addAll(path);
            return Arrays.<Object>asList(
                loc, mv, path.size(), terminal ? "1" : "0",
                refType, opIndex,
                c.str(from), c.relOffset(from), cuText,
                fi.addrStr, fi.offset, fi.name, fi.mangled,
                fi.demangled, fi.namespace, fi.signature,
                fi.size, fi.basicBlocks, fi.incoming,
                c.relToRoot(fi.decompPath), c.relToRoot(fi.cfgPath), fi.cloneHash,
                fi.fingerprint, String.join(";", lst(fi.referencedBy)),
                String.join(" -> ", fullPath));
        }

        private static List<Object> funcRow(Ctx c, FuncInfo b) {
            List<String> ext = new ArrayList<>();
            for (ExtName t : lstOf(b.externalNames)) {
                ext.add(t.name() + "@" + t.label() + ("exact".equals(t.kind()) ? "" : "(" + t.kind() + ")"));
            }
            List<String> h40 = new ArrayList<>();
            for (Hash40Load h : lstOf(b.hash40Loads)) {
                h40.add(hexU(h.value()) + ":" + h.label());
            }
            return Arrays.<Object>asList(
                b.addrStr, b.offset, b.name, b.mangled,
                b.demangled, b.namespace, b.signature,
                b.size, b.basicBlocks, b.incoming,
                c.relToRoot(b.decompPath),
                c.relToRoot(b.cfgPath),
                c.relToRoot(b.asmPath),
                b.cloneHash,
                b.fingerprint,
                String.join(";", lst(b.referencedBy)),
                joinUnique(ext, 8),
                INCLUDE_NAME_HINTS ? nz(FuncInfos.suggestedName(c, b)) : "",
                b.hits,
                joinUnique(b.matchValues),
                joinUnique(b.strings, STRINGS_PER_FUNC),
                joinUnique(b.structs, STRUCT_ACCESS_PER_FUNC),
                joinUnique(b.constants, CONSTANTS_PER_FUNC),
                joinUnique(b.globals, CALLS_PER_FUNC),
                joinUnique(b.comments, COMMENTS_PER_FUNC),
                joinUnique(h40, HASH40_LOADS_PER_FUNC),
                joinUnique(b.callers, CALLS_PER_FUNC),
                joinUnique(b.callees, CALLS_PER_FUNC));
        }

        // Reports sit in reports/, so a root relative link has to go up one level first
        private static String fromReports(String rel) {
            return rel.isEmpty() || Paths.get(rel).isAbsolute() ? rel : "../" + rel;
        }

        private static void writeReport(Ctx c, File out, String label, List<FuncInfo> sorted, String headerExtra)
                throws IOException {
            StringBuilder sb = new StringBuilder();
            String title = "# " + label;
            if (headerExtra != null && !headerExtra.isEmpty()) {
                title += " " + headerExtra;
            }
            sb.append(title).append("\n\n");
            sb.append("Top ").append(REPORT_TOP_N).append(" functions by hit count\n\n");
            int n = Math.min(REPORT_TOP_N, sorted.size());
            for (int i = 0; i < n; i++) {
                c.checkCancelled();
                FuncInfo b = sorted.get(i);
                List<String> block = new ArrayList<>();
                block.add("## " + (i + 1) + ". `" + firstNonEmpty(b.demangled, b.name, "(unnamed)") + "`  (hits=" +
                    b.hits + ")");
                block.add("- **Symbol:** `" + firstNonEmpty(b.mangled, "(no mangled symbol)") + "`");
                block.add("- **Address:** `" + nz(b.addrStr) + "`  (offset `" + nz(b.offset) + "`)");
                block.add("- **Namespace:** `" + firstNonEmpty(b.namespace, "(global)") + "`");
                block.add("- **Signature:** `" + firstNonEmpty(b.signature, "(unknown)") + "`");
                block.add("- **Size / BBs / Incoming:** " + b.size + " bytes / " + b.basicBlocks + " bb / " +
                    b.incoming + " incoming refs");
                if (b.categories != null && !b.categories.isEmpty()) {
                    block.add("- **Categories:** " + String.join(";", sortedCategories(b)));
                }
                block.add("- **Match values:** " + joinUnique(b.matchValues));
                if (!lst(b.strings).isEmpty()) {
                    block.add("- **Strings touched:** " + joinUnique(b.strings, STRINGS_PER_FUNC));
                }
                if (!lst(b.structs).isEmpty()) {
                    block.add("- **Struct accesses:** " + joinUnique(b.structs, STRUCT_ACCESS_PER_FUNC));
                }
                if (!lst(b.callers).isEmpty()) {
                    block.add("- **Callers:** " + joinUnique(b.callers, CALLS_PER_FUNC));
                }
                if (!lst(b.callees).isEmpty()) {
                    block.add("- **Callees:** " + joinUnique(b.callees, CALLS_PER_FUNC));
                }
                String decompRel = fromReports(c.relToRoot(b.decompPath));
                String cfgRel = fromReports(c.relToRoot(b.cfgPath));
                if (!decompRel.isEmpty() || !cfgRel.isEmpty()) {
                    List<String> links = new ArrayList<>();
                    if (!decompRel.isEmpty()) {
                        links.add("[decomp](" + decompRel + ")");
                    }
                    if (!cfgRel.isEmpty()) {
                        links.add("[cfg](" + cfgRel + ")");
                    }
                    block.add("- **Files:** " + String.join("  ", links));
                }
                if (!nz(b.cloneHash).isEmpty()) {
                    block.add("- **Clone hash:** `" + b.cloneHash + "`");
                }
                block.add("");
                if (!nz(b.decompCode).isEmpty()) {
                    block.add("```c");
                    block.add(truncateLines(b.decompCode, SNIPPET_LINES));
                    block.add("```");
                }
                block.add("");
                sb.append(String.join("\n", block)).append('\n');
            }
            writeText(out, sb.toString());
        }

        // Caller side BFS only, walking callees would repeat the decompiler output
        private static void writeChains(Ctx c, String label, List<FuncInfo> sorted) throws IOException {
            try (CsvOut w = new CsvOut(new File(c.chainsDir, "chains_" + label + ".csv"))) {
                w.row(CHAINS_HEADER);
                for (FuncInfo b : sorted) {
                    c.checkCancelled();
                    Function seed = functionAt(c, b.addrStr);
                    if (seed == null) {
                        continue;
                    }
                    Set<String> visited = new HashSet<>();
                    visited.add(seed.getEntryPoint().toString());
                    ArrayDeque<ChainStep> bfs = new ArrayDeque<>();
                    bfs.add(new ChainStep(seed, List.of(seed)));
                    while (!bfs.isEmpty()) {
                        c.checkCancelled();
                        ChainStep st = bfs.poll();
                        List<Function> path = st.path();
                        List<Function> nexts = path.size() - 1 >= CHAIN_DEPTH ? List.of() :
                            c.callersOf(st.node(), CHAIN_FANOUT);
                        if (nexts.isEmpty() && path.size() > 1) {
                            Function root = path.get(path.size() - 1);
                            Address rEntry = root.getEntryPoint();
                            List<String> names = new ArrayList<>(path.size());
                            for (Function f : path) {
                                names.add(f.getName(true));
                            }
                            w.row(b.addrStr, b.name, CHAIN_DEPTH, path.size() - 1,
                                rEntry.toString(), root.getName(true), c.findMangledAt(rEntry),
                                String.join(" -> ", names));
                        }
                        for (Function nxt : nexts) {
                            if (!visited.add(nxt.getEntryPoint().toString())) {
                                continue;
                            }
                            List<Function> np = new ArrayList<>(path.size() + 1);
                            np.addAll(path);
                            np.add(nxt);
                            bfs.add(new ChainStep(nxt, np));
                        }
                    }
                }
            }
        }

        private static int emitCallgraph(Ctx c, String label, List<FuncInfo> sorted) throws IOException {
            if (!INCLUDE_CALLGRAPH) {
                return 0;
            }
            List<FuncInfo> top = sorted.subList(0, Math.min(CALLGRAPH_TOP_N, sorted.size()));
            if (top.isEmpty()) {
                return 0;
            }
            Set<String> addrs = new HashSet<>();
            for (FuncInfo b : top) {
                addrs.add(b.addrStr);
            }
            Set<Edge> edges = new HashSet<>();
            for (FuncInfo b : top) {
                c.checkCancelled();
                Function seed = functionAt(c, b.addrStr);
                if (seed == null) {
                    continue;
                }
                for (Function f : c.callersOf(seed, CALLS_PER_FUNC)) {
                    String ck = f.getEntryPoint().toString();
                    if (addrs.contains(ck)) {
                        edges.add(new Edge(ck, b.addrStr));
                    }
                }
                for (Function f : c.calleesOf(seed, CALLS_PER_FUNC)) {
                    String ck = f.getEntryPoint().toString();
                    if (addrs.contains(ck)) {
                        edges.add(new Edge(b.addrStr, ck));
                    }
                }
            }
            // Sorted so reruns diff cleanly, the pre-port script used set order here
            List<Edge> sortedEdges = new ArrayList<>(edges);
            sortedEdges.sort(Comparator.comparing(Edge::src).thenComparing(Edge::dst));
            List<String> lines = new ArrayList<>();
            lines.add("flowchart LR");
            for (FuncInfo b : top) {
                String lbl = firstNonEmpty(b.demangled, b.name, b.addrStr);
                int paren = lbl.indexOf('(');
                if (paren >= 0) {
                    lbl = lbl.substring(0, paren);
                }
                lbl = codePointPrefix(lbl, 60).replace('"', '\'');
                lines.add("    N" + nz(b.addrStr).replace(":", "_") + "[\"" + lbl + "\"]");
            }
            for (Edge e : sortedEdges) {
                lines.add("    N" + e.src().replace(":", "_") + " --> N" + e.dst().replace(":", "_"));
            }
            writeText(new File(c.reportsDir, "callgraph_" + label + ".mmd"), String.join("\n", lines) + "\n");
            return edges.size();
        }

        private static Function functionAt(Ctx c, String addrStr) {
            Address a = c.toAddr(addrStr);
            if (a == null) {
                return null;
            }
            try {
                return c.funcMgr.getFunctionAt(a);
            }
            catch (Exception e) {
                return null;
            }
        }

        private static List<String> sortedCategories(FuncInfo b) {
            List<String> cats = b.categories == null ? new ArrayList<>() : new ArrayList<>(b.categories);
            Collections.sort(cats);
            return cats;
        }

        private static String firstNonEmpty(String... xs) {
            for (String x : xs) {
                if (x != null && !x.isEmpty()) {
                    return x;
                }
            }
            return "";
        }

        private static String lastPart(String s, String sep) {
            String[] parts = s.split(Pattern.quote(sep), -1);
            return parts[parts.length - 1];
        }

        private static String codePointPrefix(String s, int n) {
            if (s.codePointCount(0, s.length()) <= n) {
                return s;
            }
            return s.substring(0, s.offsetByCodePoints(0, n));
        }

        private static String pct(int n, int total) {
            return total == 0 ? fmt1(0) : fmt1(100.0 * n / total);
        }

        private static List<String> lst(List<String> l) {
            return l == null ? List.of() : l;
        }

        private static <T> List<T> lstOf(List<T> l) {
            return l == null ? List.of() : l;
        }
    }

    static final class TablesA {

        private static final String VTABLE_FOR = "vtable for ";
        private static final String[][] TYPEINFO_PLAIN = {
            { "typeinfo for ", "typeinfo" },
            { "typeinfo name for ", "typeinfo_name" },
            { "VTT for ", "vtt" },
        };
        private static final String[][] TYPEINFO_MANGLED = {
            { "_ZTI", "typeinfo" },
            { "__ZTI", "typeinfo" },
            { "_ZTS", "typeinfo_name" },
            { "__ZTS", "typeinfo_name" },
            { "_ZTT", "vtt" },
            { "__ZTT", "vtt" },
        };

        private static String vtableClass(Ctx c, Symbol sym) {
            String name = sym.getName();
            if (name == null || name.isEmpty()) {
                return null;
            }
            if (name.startsWith(VTABLE_FOR)) {
                return name.substring(VTABLE_FOR.length());
            }
            if (name.startsWith("_ZTV") || name.startsWith("__ZTV")) {
                String d = c.demangle(name);
                if (d.startsWith(VTABLE_FOR)) {
                    return d.substring(VTABLE_FOR.length());
                }
                String cls = beforeSuffix(d, "::vtable");
                return cls != null ? cls : name;
            }
            if (name.equals("vtable")) {
                Namespace ns = sym.getParentNamespace();
                if (isClassNamespace(ns)) {
                    return ns.getName(true);
                }
            }
            return null;
        }

        // Ghidra 12 demangles _ZTV and _ZTI to X::vtable and X::typeinfo, not to "vtable for X"
        private static String beforeSuffix(String d, String suffix) {
            if (d != null && d.length() > suffix.length() && d.endsWith(suffix)) {
                return d.substring(0, d.length() - suffix.length());
            }
            return null;
        }

        private static boolean isClassNamespace(Namespace ns) {
            if (ns == null) {
                return false;
            }
            if (ns instanceof GhidraClass) {
                return true;
            }
            try {
                Symbol s = ns.getSymbol();
                return s != null && s.getSymbolType() == SymbolType.CLASS;
            }
            catch (Exception e) {
                return false;
            }
        }

        static int scanVtables(Ctx c, File out) throws Exception {
            if (!INCLUDE_VTABLES) {
                return 0;
            }
            int ptrSize = c.program.getDefaultPointerSize();
            int count = 0;
            try (CsvOut w = new CsvOut(out)) {
                w.row("Vtable Address", "Class", "Slot", "Function Address",
                    "Function Symbol", "Function Demangled", "Function Decompile Path");
                // getNumSymbols also counts symbols the address ordered iterator skips, so no total
                Progress p = c.progress("vtables", 0);
                // The demangler's "vtable" label shares its address with the _ZTV symbol
                Set<Address> seenBases = new HashSet<>();
                for (Symbol sym : c.symTab.getSymbolIterator()) {
                    p.step();
                    String cls = vtableClass(c, sym);
                    if (cls == null) {
                        continue;
                    }
                    Address base = sym.getAddress();
                    if (!seenBases.add(base)) {
                        continue;
                    }
                    Address cur = base;
                    for (int slot = 0; slot < VTABLE_MAX_SLOTS; slot++) {
                        c.checkCancelled();
                        Object target = null;
                        boolean pointer;
                        try {
                            Data data = c.listing.getDataAt(cur);
                            pointer = data != null && data.isPointer();
                            if (pointer) {
                                target = data.getValue();
                            }
                        }
                        catch (Exception e) {
                            break;
                        }
                        // offset_to_top and the RTTI slot are zero here and stay undefined bytes
                        if (!pointer && slot >= 2) {
                            break;
                        }
                        if (pointer && target == null) {
                            break;
                        }
                        Function func = null;
                        if (target instanceof Address a) {
                            try {
                                func = c.funcMgr.getFunctionAt(a);
                            }
                            catch (Exception e) {
                                func = null;
                            }
                        }
                        if (func != null) {
                            FuncInfo fi = FuncInfos.funcInfo(c, func);
                            if (fi == null) {
                                fi = new FuncInfo();
                            }
                            w.row(c.str(base), cls, slot, String.valueOf(target),
                                fi.mangled, fi.demangled, c.relToRoot(fi.decompPath));
                            count++;
                        }
                        else if (slot >= 2) {
                            break;
                        }
                        try {
                            cur = cur.add(ptrSize);
                        }
                        catch (Exception e) {
                            break;
                        }
                    }
                }
            }
            return count;
        }

        // {kind, class} of a typeinfo symbol, or null
        private static String[] typeinfoKindClass(Ctx c, String name) {
            if (name == null || name.isEmpty()) {
                return null;
            }
            for (String[] pk : TYPEINFO_PLAIN) {
                if (name.startsWith(pk[0])) {
                    return new String[] { pk[1], name.substring(pk[0].length()) };
                }
            }
            for (String[] pk : TYPEINFO_MANGLED) {
                if (!name.startsWith(pk[0])) {
                    continue;
                }
                String d = c.demangle(name);
                String cls = null;
                for (String[] plain : TYPEINFO_PLAIN) {
                    if (!d.isEmpty() && d.startsWith(plain[0])) {
                        cls = d.substring(plain[0].length());
                        break;
                    }
                }
                if (cls == null) {
                    cls = beforeSuffix(d, pk[1].equals("vtt") ? "::VTT" : "::typeinfo");
                }
                return new String[] { pk[1], cls != null ? cls : name };
            }
            return null;
        }

        // class to the first vtable address in symbol iterator order, lookups only
        private static Map<String, String> buildVtableClassIndex(Ctx c) {
            Map<String, String> idx = new HashMap<>();
            Progress p = c.progress("typeinfo vtable index", 0);
            for (Symbol sym : c.symTab.getSymbolIterator()) {
                p.step();
                String cls = vtableClass(c, sym);
                if (cls != null) {
                    idx.putIfAbsent(cls, c.str(sym.getAddress()));
                }
            }
            return idx;
        }

        static int scanTypeinfo(Ctx c, File out) throws Exception {
            if (!INCLUDE_TYPEINFO) {
                return 0;
            }
            Map<String, String> vtableIdx = buildVtableClassIndex(c);
            int cnt = 0;
            try (CsvOut w = new CsvOut(out)) {
                w.row("Address", "Kind", "Class", "Mangled", "Vtable Address", "Notes");
                Progress p = c.progress("typeinfo", 0);
                for (Symbol sym : c.symTab.getSymbolIterator()) {
                    p.step();
                    String[] kc = typeinfoKindClass(c, sym.getName());
                    if (kc == null) {
                        continue;
                    }
                    Address addr = sym.getAddress();
                    w.row(c.str(addr), kc[0], kc[1], c.findMangledAt(addr),
                        vtableIdx.getOrDefault(kc[1], ""), "");
                    cnt++;
                }
            }
            return cnt;
        }

        static int writeClones(Ctx c, File out) throws Exception {
            if (!INCLUDE_CLONES) {
                return 0;
            }
            Map<String, List<FuncInfo>> groups = jyDict();
            for (FuncInfo info : c.funcInfoCache.values()) {
                String h = nz(info.cloneHash);
                if (h.isEmpty()) {
                    continue;
                }
                // Plain get and put on first sight, so the map order cannot drift from the pre-port DB
                List<FuncInfo> g = groups.get(h);
                if (g == null) {
                    g = new ArrayList<>();
                    groups.put(h, g);
                }
                g.add(info);
            }
            int cnt = 0;
            try (CsvOut w = new CsvOut(out)) {
                w.row("Clone Hash", "Group Size", "Function Address", "Function Name",
                    "Function Symbol", "Function Demangled", "Function Size",
                    "Function Decompile Path");
                for (Map.Entry<String, List<FuncInfo>> e : groups.entrySet()) {
                    List<FuncInfo> infos = e.getValue();
                    if (infos.size() < 2) {
                        continue;
                    }
                    for (FuncInfo info : infos) {
                        w.row(e.getKey(), infos.size(), info.addrStr, info.name, info.mangled,
                            info.demangled, info.size, c.relToRoot(info.decompPath));
                        cnt++;
                    }
                }
            }
            return cnt;
        }

        static int writeSymbolCatalog(Ctx c, File out) throws Exception {
            if (!INCLUDE_SYMBOL_CATALOG) {
                return 0;
            }
            int cnt = 0;
            try (CsvOut w = new CsvOut(out)) {
                w.row("Address", "Offset", "Name", "Mangled", "Demangled",
                    "Namespace", "Source Type", "Is Function");
                Progress p = c.progress("symbols", 0);
                for (Symbol sym : c.symTab.getSymbolIterator()) {
                    p.step();
                    String n = sym.getName();
                    if (n == null || n.isEmpty()) {
                        continue;
                    }
                    Address addr = sym.getAddress();
                    if (addr == null) {
                        continue;
                    }
                    String mangled = isMangled(n) ? n : "";
                    String demangled = mangled.isEmpty() ? "" : c.demangle(mangled);
                    Namespace ns = sym.getParentNamespace();
                    String nsName = ns != null ? ns.getName(true) : "";
                    String isFn = c.funcMgr.getFunctionAt(addr) != null ? "1" : "";
                    w.row(c.str(addr), c.relOffset(addr), n, mangled, demangled,
                        nsName, String.valueOf(sym.getSource()), isFn);
                    cnt++;
                }
            }
            return cnt;
        }

        // Body ranges let runtime tools tell an address in a gap without a function from the function before it
        static int writeFunctionCatalog(Ctx c, File out) throws Exception {
            if (!INCLUDE_FUNCTION_CATALOG) {
                return 0;
            }
            int cnt = 0;
            try (CsvOut w = new CsvOut(out)) {
                w.row("Address", "Offset", "Size", "Ranges", "Name", "Namespace", "Source", "Thunk", "Noreturn");
                Progress p = c.progress("functions", c.funcMgr.getFunctionCount());
                FunctionIterator it = c.funcMgr.getFunctions(true);
                while (it.hasNext()) {
                    p.step();
                    Function f = it.next();
                    Address entry = f.getEntryPoint();
                    AddressSetView body = f.getBody();
                    StringBuilder ranges = new StringBuilder();
                    for (AddressRange r : body) {
                        if (ranges.length() > 0) {
                            ranges.append(';');
                        }
                        ranges.append(c.relOffset(r.getMinAddress())).append('-').append(c.relOffset(r.getMaxAddress()));
                    }
                    String ns = safe(() -> {
                        Namespace parent = f.getParentNamespace();
                        return parent != null ? parent.getName(true) : "";
                    });
                    w.row(c.str(entry), c.relOffset(entry), body.getNumAddresses(), ranges.toString(),
                        safe(() -> f.getName(true)), ns, safe(() -> String.valueOf(f.getSymbol().getSource())),
                        f.isThunk() ? "1" : "", f.hasNoReturn() ? "1" : "");
                    cnt++;
                }
            }
            return cnt;
        }

        private record CallSiteRow(Address site, Address target, String thunked) {
        }

        // Call sites stay out of functions.csv since some functions have tens of thousands, past csv field size limits
        static int writeCallSites(Ctx c, File out) throws Exception {
            if (!INCLUDE_CALL_SITES) {
                return 0;
            }
            List<CallSiteRow> rows = new ArrayList<>();
            Progress p = c.progress("call sites", c.funcMgr.getFunctionCount());
            FunctionIterator it = c.funcMgr.getFunctions(true);
            while (it.hasNext()) {
                p.step();
                Function f = it.next();
                Address entry = f.getEntryPoint();
                // A call into a thunk shows up at run time as a call of the thunked function
                String thunked = f.isThunk() ? safe(() -> c.relOffset(f.getThunkedFunction(true).getEntryPoint())) : "";
                ReferenceIterator refs = c.refMgr.getReferencesTo(entry);
                while (refs.hasNext()) {
                    Reference r = refs.next();
                    if (r.getReferenceType().isCall() && r.getFromAddress().isMemoryAddress()) {
                        rows.add(new CallSiteRow(r.getFromAddress(), entry, thunked));
                    }
                }
            }
            rows.sort(Comparator.comparing(CallSiteRow::site).thenComparing(CallSiteRow::target));
            int cnt = 0;
            try (CsvOut w = new CsvOut(out)) {
                w.row("Site", "Target", "Thunked");
                CallSiteRow prev = null;
                for (CallSiteRow r : rows) {
                    if (prev != null && prev.site().equals(r.site()) && prev.target().equals(r.target())) {
                        continue;
                    }
                    w.row(c.relOffset(r.site()), c.relOffset(r.target()), r.thunked());
                    prev = r;
                    cnt++;
                }
            }
            return cnt;
        }

        static int writeStringsCatalog(Ctx c, File out) throws Exception {
            if (!INCLUDE_STRING_CATALOG) {
                return 0;
            }
            int cnt = 0;
            try (CsvOut w = new CsvOut(out)) {
                w.row("Address", "Offset", "Length", "Xref Count", "Value");
                Progress p = c.progress("strings", c.listing.getNumDefinedData());
                DataIterator di = c.listing.getDefinedData(true);
                while (di.hasNext()) {
                    p.step();
                    Data d = di.next();
                    Object[] row;
                    try {
                        if (!isStringData(d)) {
                            continue;
                        }
                        Object v = d.getValue();
                        if (v == null) {
                            continue;
                        }
                        String s = String.valueOf(v);
                        Address addr = d.getAddress();
                        int xc = c.refMgr.getReferenceCountTo(addr);
                        row = new Object[] { c.str(addr), c.relOffset(addr),
                            s.codePointCount(0, s.length()), xc, s };
                    }
                    catch (Exception e) {
                        continue;
                    }
                    // The row is written outside the try so a write error is not mistaken for a bad string
                    w.row(row);
                    cnt++;
                }
            }
            return cnt;
        }

        static int writeConstantsIndex(Ctx c, File out) throws Exception {
            if (!INCLUDE_CONSTANTS_INDEX) {
                return 0;
            }
            Map<String, List<FuncInfo>> inverted = jyDict();
            for (FuncInfo info : c.funcInfoCache.values()) {
                if (info.constants == null) {
                    continue;
                }
                for (String k : info.constants) {
                    List<FuncInfo> users = inverted.get(k);
                    if (users == null) {
                        users = new ArrayList<>();
                        inverted.put(k, users);
                    }
                    users.add(info);
                }
            }
            List<Map.Entry<String, List<FuncInfo>>> sorted = new ArrayList<>(inverted.entrySet());
            sorted.sort((a, b) -> Integer.compare(b.getValue().size(), a.getValue().size()));
            int cnt = 0;
            try (CsvOut w = new CsvOut(out)) {
                w.row("Constant", "Decimal", "User Count",
                    "Function Address", "Function Name", "Function Symbol",
                    "Function Demangled", "Function Hits");
                for (Map.Entry<String, List<FuncInfo>> e : sorted) {
                    List<FuncInfo> infos = e.getValue();
                    if (infos.size() < CONSTANTS_INDEX_MIN_USERS) {
                        continue;
                    }
                    Object dec = constantDecimal(e.getKey());
                    for (FuncInfo info : infos) {
                        // Cache entries never carry hits, so the column is always empty
                        w.row(e.getKey(), dec, infos.size(), info.addrStr, info.name, info.mangled,
                            info.demangled, "");
                        cnt++;
                    }
                }
            }
            return cnt;
        }

        private static Object constantDecimal(String hex) {
            Long v = parsePyHex(hex);
            if (v == null) {
                return "";
            }
            if (v < 0 && !hex.strip().startsWith("-")) {
                return Long.toUnsignedString(v);
            }
            return v;
        }

        private static final class NsBucket {
            final String top;
            int total;
            int withSymbol;
            long sizeSum;

            NsBucket(String top) {
                this.top = top;
            }
        }

        static int writeNamespaceTree(Ctx c, File out) throws Exception {
            if (!INCLUDE_NAMESPACE_TREE) {
                return 0;
            }
            Map<String, NsBucket> buckets = jyDict();
            Progress p = c.progress("namespaces", c.funcMgr.getFunctionCount());
            for (Function func : c.funcMgr.getFunctions(true)) {
                p.step();
                Namespace ns = func.getParentNamespace();
                String nsName = ns != null ? nz(ns.getName(true)) : "(global)";
                String top;
                if (nsName.isEmpty()) {
                    top = "(global)";
                }
                else {
                    int i = nsName.indexOf("::");
                    top = i >= 0 ? nsName.substring(0, i) : nsName;
                }
                NsBucket b = buckets.get(nsName);
                if (b == null) {
                    b = new NsBucket(top);
                    buckets.put(nsName, b);
                }
                b.total++;
                b.sizeSum += func.getBody().getNumAddresses();
                if (!c.findMangledAt(func.getEntryPoint()).isEmpty()) {
                    b.withSymbol++;
                }
            }
            List<Map.Entry<String, NsBucket>> sorted = new ArrayList<>(buckets.entrySet());
            sorted.sort((a, b) -> Integer.compare(b.getValue().total, a.getValue().total));
            int cnt = 0;
            try (CsvOut w = new CsvOut(out)) {
                w.row("Namespace", "Top Namespace", "Function Count",
                    "With Mangled Symbol", "Total Bytes");
                for (Map.Entry<String, NsBucket> e : sorted) {
                    NsBucket b = e.getValue();
                    w.row(e.getKey(), b.top, b.total, b.withSymbol, b.sizeSum);
                    cnt++;
                }
            }
            return cnt;
        }
    }

    static final class TablesB {

        // multiple of 8 so every chunk starts 8 aligned
        private static final int CHUNK = 1 << 20;

        private TablesB() {
        }

        private record LoadRow(long value, String label, String source, String fnAddr, String fnName,
                String fnSym, String fnDemangled, String loadAddr) {
        }

        private record DataRefRow(String dataAddr, long value, String label, String handlerAddr,
                String handlerName, String handlerSym) {
        }

        private record ImportRow(String lib, Address ext, String name, String mangled, String demangled,
                String addr) {
        }

        private static final Comparator<LoadRow> LOAD_ORDER = (a, b) -> {
            int r = a.label().compareTo(b.label());
            return r != 0 ? r : Long.compareUnsigned(a.value(), b.value());
        };

        private static final Comparator<DataRefRow> DATA_REF_ORDER = (a, b) -> {
            int r = a.label().compareTo(b.label());
            return r != 0 ? r : Long.compareUnsigned(a.value(), b.value());
        };

        static int writeStructsCatalog(Ctx c, File out) throws Exception {
            if (!INCLUDE_STRUCTS_CATALOG) {
                return 0;
            }
            int cnt = 0;
            try (CsvOut w = new CsvOut(out)) {
                w.row("Type Name", "Type Path", "Kind", "Type Size",
                    "Field Index", "Field Offset", "Field Name", "Field Type", "Field Size",
                    "Field Comment");
                Iterator<DataType> it = c.dtm.getAllDataTypes();
                Progress p = c.progress("structs", 0);
                while (it.hasNext()) {
                    p.step();
                    DataType dt = it.next();
                    String kind;
                    if (dt instanceof Structure) {
                        kind = "struct";
                    }
                    else if (dt instanceof Union) {
                        kind = "union";
                    }
                    else {
                        continue;
                    }
                    for (List<Object> r : compositeRows(dt, kind)) {
                        w.row(r);
                        cnt++;
                    }
                }
            }
            return cnt;
        }

        // Builds the rows of one type before writing, so a type that throws midway is skipped as a whole
        private static List<List<Object>> compositeRows(DataType dt, String kind) {
            List<List<Object>> rows = new ArrayList<>();
            try {
                DataTypeComponent[] comps;
                try {
                    comps = ((Composite) dt).getComponents();
                }
                catch (Exception e) {
                    return rows;
                }
                String name = dt.getName();
                String path = dt.getPathName();
                int len = dt.getLength();
                if (comps == null || comps.length == 0) {
                    rows.add(Arrays.asList(name, path, kind, len, "", "", "", "", "", ""));
                    return rows;
                }
                for (int i = 0; i < comps.length; i++) {
                    DataTypeComponent comp = comps[i];
                    String fieldType;
                    try {
                        fieldType = String.valueOf(comp.getDataType());
                    }
                    catch (Exception e) {
                        fieldType = "";
                    }
                    rows.add(Arrays.asList(name, path, kind, len, i, comp.getOffset(),
                        nz(comp.getFieldName()), fieldType, comp.getLength(), nz(comp.getComment())));
                }
                return rows;
            }
            catch (Exception e) {
                return new ArrayList<>();
            }
        }

        static int writeEnumsCatalog(Ctx c, File out) throws Exception {
            if (!INCLUDE_ENUMS_CATALOG) {
                return 0;
            }
            int cnt = 0;
            try (CsvOut w = new CsvOut(out)) {
                w.row("Type Name", "Type Path", "Type Size",
                    "Member Name", "Value Hex", "Value Decimal", "Comment");
                Iterator<DataType> it = c.dtm.getAllDataTypes();
                Progress p = c.progress("enums", 0);
                while (it.hasNext()) {
                    p.step();
                    DataType dt = it.next();
                    if (!(dt instanceof Enum en)) {
                        continue;
                    }
                    for (List<Object> r : enumRows(en)) {
                        w.row(r);
                        cnt++;
                    }
                }
            }
            return cnt;
        }

        private static List<List<Object>> enumRows(Enum en) {
            List<List<Object>> rows = new ArrayList<>();
            String[] names;
            try {
                names = en.getNames();
            }
            catch (Exception e) {
                return rows;
            }
            try {
                String name = en.getName();
                String path = en.getPathName();
                int len = en.getLength();
                for (String nm : names) {
                    long v;
                    try {
                        v = en.getValue(nm);
                    }
                    catch (Exception e) {
                        continue;
                    }
                    String comment;
                    try {
                        comment = nz(en.getComment(nm));
                    }
                    catch (Exception e) {
                        comment = "";
                    }
                    rows.add(Arrays.asList(name, path, len, nm, hexU(v), v, comment));
                }
                return rows;
            }
            catch (Exception e) {
                return new ArrayList<>();
            }
        }

        static int writeStringXrefs(Ctx c, File out) throws Exception {
            if (!INCLUDE_STRING_XREFS) {
                return 0;
            }
            int cnt = 0;
            try (CsvOut w = new CsvOut(out)) {
                w.row("String Address", "String Length", "String Value",
                    "Xref From", "Xref Type",
                    "Function Address", "Function Name", "Function Symbol");
                DataIterator di = c.listing.getDefinedData(true);
                Progress p = c.progress("string xrefs", 0);
                while (di.hasNext()) {
                    p.step();
                    Data d = di.next();
                    List<List<Object>> rows = stringXrefRows(c, d);
                    for (List<Object> r : rows) {
                        w.row(r);
                        cnt++;
                    }
                }
            }
            return cnt;
        }

        // A failing string keeps the rows collected before the failure
        private static List<List<Object>> stringXrefRows(Ctx c, Data d) {
            List<List<Object>> rows = new ArrayList<>();
            try {
                if (!isStringData(d)) {
                    return rows;
                }
                Object v = d.getValue();
                if (v == null) {
                    return rows;
                }
                String s = String.valueOf(v);
                int len = s.codePointCount(0, s.length());
                Address addr = d.getAddress();
                ReferenceIterator it = c.refMgr.getReferencesTo(addr);
                while (it.hasNext()) {
                    Reference ref = it.next();
                    Address from = ref.getFromAddress();
                    Function fn = c.funcMgr.getFunctionContaining(from);
                    String fnAddr = "";
                    String fnName = "";
                    String fnSym = "";
                    if (fn != null) {
                        fnAddr = fn.getEntryPoint().toString();
                        fnName = fn.getName(true);
                        fnSym = c.findMangledAt(fn.getEntryPoint());
                    }
                    rows.add(Arrays.asList(addr.toString(), len, s, from.toString(),
                        String.valueOf(ref.getReferenceType()), fnAddr, fnName, fnSym));
                }
            }
            catch (Exception e) {
            }
            return rows;
        }

        static int writeHash40LoadsTable(Ctx c, File out) throws Exception {
            if (!INCLUDE_HASH40 || c.hash40Labels.isEmpty()) {
                return 0;
            }
            List<LoadRow> rows = new ArrayList<>();
            Set<String> seenFuncs = new HashSet<>();
            for (FuncInfo info : c.funcInfoCache.values()) {
                seenFuncs.add(info.addrStr);
                if (info.hash40Loads == null) {
                    continue;
                }
                for (Hash40Load l : info.hash40Loads) {
                    rows.add(new LoadRow(l.value(), l.label(), "xref", info.addrStr, info.name,
                        info.mangled, info.demangled, l.loadAddr()));
                }
            }
            if (INCLUDE_HASH40_FULL_SCAN) {
                fullScan(c, seenFuncs, rows);
            }
            rows.sort(LOAD_ORDER);
            int cnt = 0;
            try (CsvOut w = new CsvOut(out)) {
                w.row("Hash40 Hex", "Label", "Source", "Function Address",
                    "Function Name", "Function Symbol", "Function Demangled",
                    "Load Address");
                for (LoadRow r : rows) {
                    w.row(hexU(r.value()), r.label(), r.source(), r.fnAddr(), r.fnName(),
                        r.fnSym(), r.fnDemangled(), r.loadAddr());
                    cnt++;
                }
            }
            return cnt;
        }

        // Scans bodies in getFunctions order, then the executable code no body claims, one unit per gap
        private static void fullScan(Ctx c, Set<String> seenFuncs, List<LoadRow> rows) {
            AddressSet rest = new AddressSet();
            for (MemoryBlock b : c.memory.getBlocks()) {
                try {
                    if (b.isInitialized() && b.isExecute()) {
                        rest.add(b.getStart(), b.getEnd());
                    }
                }
                catch (Exception e) {
                }
            }
            Hash40Tracker t = new Hash40Tracker(c);
            int scanned = 0;
            int added = 0;
            int outside = 0;
            Progress p = c.progress("hash40 full scan", c.funcMgr.getFunctionCount());
            FunctionIterator fit = c.funcMgr.getFunctions(true);
            while (fit.hasNext()) {
                p.step();
                Function f = fit.next();
                Address entry;
                AddressSetView body;
                try {
                    entry = f.getEntryPoint();
                    body = f.getBody();
                    rest.delete(body);
                }
                catch (Exception e) {
                    continue;
                }
                String entryStr = entry.toString();
                if (seenFuncs.contains(entryStr)) {
                    continue;
                }
                scanned++;
                List<Hash40Load> loads = scanUnit(c, t, body);
                if (loads.isEmpty()) {
                    continue;
                }
                String mangled = c.findMangledAt(entry);
                String demangled = mangled.isEmpty() ? "" : c.demangle(mangled);
                String name = safe(() -> f.getName(true));
                for (Hash40Load l : loads) {
                    rows.add(new LoadRow(l.value(), l.label(), "scan", entryStr, name, mangled, demangled,
                        l.loadAddr()));
                    added++;
                }
            }
            AddressRangeIterator ri = rest.getAddressRanges(true);
            while (ri.hasNext()) {
                c.checkCancelled();
                AddressRange r = ri.next();
                for (Hash40Load l : scanUnit(c, t, new AddressSet(r))) {
                    rows.add(new LoadRow(l.value(), l.label(), "scan", "", "", "", "", l.loadAddr()));
                    added++;
                    outside++;
                }
            }
            c.println("hash40 full scan: scanned " + scanned + " extra funcs, added " + added + " loads (" +
                outside + " outside functions)");
        }

        private static List<Hash40Load> scanUnit(Ctx c, Hash40Tracker t, AddressSetView set) {
            t.reset();
            List<Hash40Load> found = new ArrayList<>();
            InstructionIterator it;
            try {
                it = c.listing.getInstructions(set, true);
            }
            catch (Exception e) {
                return found;
            }
            int n = 0;
            while (true) {
                if ((++n & 0xffff) == 0) {
                    c.checkCancelled();
                }
                Instruction ins;
                Hash40Load l;
                try {
                    if (!it.hasNext()) {
                        break;
                    }
                    ins = it.next();
                    l = t.feed(ins);
                }
                catch (Exception e) {
                    break;
                }
                if (l != null) {
                    found.add(l);
                }
            }
            return found;
        }

        static int writeHash40DataRefsTable(Ctx c, File out) throws Exception {
            if (!INCLUDE_HASH40 || c.hash40Labels.isEmpty()) {
                return 0;
            }
            List<DataRefRow> rows = scanHash40DataWords(c);
            rows.sort(DATA_REF_ORDER);
            int cnt = 0;
            try (CsvOut w = new CsvOut(out)) {
                w.row("Hash40 Hex", "Label", "Data Address",
                    "Adjacent Handler Address", "Adjacent Handler Name",
                    "Adjacent Handler Symbol");
                for (DataRefRow r : rows) {
                    w.row(hexU(r.value()), r.label(), r.dataAddr(),
                        r.handlerAddr(), r.handlerName(), r.handlerSym());
                    cnt++;
                }
            }
            return cnt;
        }

        // Reads past the block end go through getLong, which crosses into an adjacent block as the pre-port scan did
        private static List<DataRefRow> scanHash40DataWords(Ctx c) {
            List<DataRefRow> found = new ArrayList<>();
            long lo = -1L;
            long hi = 0L;
            for (Long k : c.hash40Labels.keySet()) {
                if (Long.compareUnsigned(k, lo) < 0) {
                    lo = k;
                }
                if (Long.compareUnsigned(k, hi) > 0) {
                    hi = k;
                }
            }
            boolean be = c.memory.isBigEndian();
            List<MemoryBlock> blocks = new ArrayList<>();
            long chunks = 0;
            for (MemoryBlock b : c.memory.getBlocks()) {
                try {
                    if (b.isInitialized()) {
                        blocks.add(b);
                        chunks += b.getSize() / CHUNK + 1;
                    }
                }
                catch (Exception e) {
                }
            }
            Progress p = c.progress("hash40 data words", chunks);
            byte[] buf = new byte[CHUNK + 8];
            for (MemoryBlock b : blocks) {
                AddressSpace sp;
                long s;
                long e;
                try {
                    sp = b.getStart().getAddressSpace();
                    s = b.getStart().getOffset();
                    e = b.getEnd().getOffset();
                }
                catch (Exception ex) {
                    continue;
                }
                if (s < 0 || e < s) {
                    continue;
                }
                long first = (s + 7) & ~7L;
                for (long chunk = first; chunk >= first && chunk <= e; chunk += CHUNK) {
                    p.step();
                    int len = (int) Math.min(CHUNK + 8L, e - chunk + 1);
                    int got;
                    try {
                        got = c.memory.getBytes(sp.getAddress(chunk), buf, 0, len);
                    }
                    catch (Exception ex) {
                        got = 0;
                    }
                    long stop = Math.min(e, chunk + CHUNK - 1);
                    for (long a = chunk; a <= stop; a += 8) {
                        int i = (int) (a - chunk);
                        long v;
                        if (i + 8 <= got) {
                            v = word64(buf, i, be);
                        }
                        else {
                            Long r = readLong(c, sp, a);
                            if (r == null) {
                                continue;
                            }
                            v = r;
                        }
                        if (Long.compareUnsigned(v, lo) < 0 || Long.compareUnsigned(v, hi) > 0) {
                            continue;
                        }
                        String label = c.hash40Labels.get(v);
                        if (label == null) {
                            continue;
                        }
                        Long ptr = i + 16 <= got ? Long.valueOf(word64(buf, i + 8, be)) : readLong(c, sp, a + 8);
                        found.add(dataRefRow(c, sp, a, v, label, ptr));
                    }
                }
            }
            return found;
        }

        private static DataRefRow dataRefRow(Ctx c, AddressSpace sp, long at, long v, String label, Long ptr) {
            String dataAddr;
            try {
                dataAddr = sp.getAddress(at).toString();
            }
            catch (Exception e) {
                dataAddr = "";
            }
            String hAddr = "";
            String hName = "";
            String hSym = "";
            try {
                if (ptr != null && ptr != 0L) {
                    Address cand = c.addrFactory.getAddress(Long.toHexString(ptr));
                    if (cand != null) {
                        Function f = c.funcMgr.getFunctionAt(cand);
                        if (f != null) {
                            String name = f.getName(true);
                            hAddr = cand.toString();
                            hName = name;
                            hSym = c.findMangledAt(cand);
                        }
                    }
                }
            }
            catch (Exception e) {
                hAddr = "";
                hName = "";
                hSym = "";
            }
            return new DataRefRow(dataAddr, v, label, hAddr, hName, hSym);
        }

        private static Long readLong(Ctx c, AddressSpace sp, long off) {
            try {
                return c.memory.getLong(sp.getAddress(off));
            }
            catch (Exception e) {
                return null;
            }
        }

        private static long word64(byte[] b, int i, boolean be) {
            long v = 0;
            if (be) {
                for (int k = 0; k < 8; k++) {
                    v = (v << 8) | (b[i + k] & 0xffL);
                }
            }
            else {
                for (int k = 7; k >= 0; k--) {
                    v = (v << 8) | (b[i + k] & 0xffL);
                }
            }
            return v;
        }

        static int writeSegments(Ctx c, File out) throws Exception {
            if (!INCLUDE_SEGMENTS) {
                return 0;
            }
            int cnt = 0;
            try (CsvOut w = new CsvOut(out)) {
                w.row("Block Name", "Start", "End", "Size",
                    "Read", "Write", "Execute", "Initialized", "Source");
                for (MemoryBlock b : c.memory.getBlocks()) {
                    w.row(b.getName(), b.getStart().toString(), b.getEnd().toString(), b.getSize(),
                        flag(b.isRead()), flag(b.isWrite()), flag(b.isExecute()), flag(b.isInitialized()),
                        nz(b.getSourceName()));
                    cnt++;
                }
            }
            return cnt;
        }

        private static String flag(boolean b) {
            return b ? "1" : "";
        }

        static int writeImports(Ctx c, File out) throws Exception {
            if (!INCLUDE_IMPORTS) {
                return 0;
            }
            // ExternalManager.getExternalLocations(lib) only lists direct children, C++ imports sit in nested namespaces
            List<ImportRow> rows = new ArrayList<>();
            SymbolIterator it = c.symTab.getExternalSymbols();
            while (it.hasNext()) {
                c.checkCancelled();
                Symbol sym = it.next();
                ExternalLocation loc;
                try {
                    loc = c.extMgr.getExternalLocation(sym);
                }
                catch (Exception e) {
                    loc = null;
                }
                if (loc == null) {
                    continue;
                }
                String n = importedName(loc);
                String mangled = isMangled(n) ? n : "";
                String demangled = mangled.isEmpty() ? "" : c.demangle(mangled);
                Address addr = null;
                try {
                    addr = loc.getAddress();
                }
                catch (Exception e) {
                    addr = null;
                }
                rows.add(new ImportRow(safe(loc::getLibraryName), sym.getAddress(), n, mangled, demangled,
                    addr != null ? addr.toString() : ""));
            }
            // SymbolTable.getExternalSymbols has no defined order
            rows.sort(Comparator.comparing(ImportRow::lib).thenComparing(ImportRow::ext));
            int cnt = 0;
            try (CsvOut w = new CsvOut(out)) {
                w.row("Library", "Imported Name", "Mangled", "Demangled",
                    "Address In Module");
                for (ImportRow r : rows) {
                    w.row(r.lib(), r.name(), r.mangled(), r.demangled(), r.addr());
                    cnt++;
                }
            }
            return cnt;
        }

        private static String importedName(ExternalLocation loc) {
            String n = safe(loc::getOriginalImportedName);
            if (n.isEmpty()) {
                n = safe(loc::getLabel);
            }
            return n;
        }

        static void writeMeta(Ctx c, File out) throws Exception {
            try (CsvOut w = new CsvOut(out)) {
                w.row("key", "value");
                for (String[] kv : c.provenance()) {
                    w.row(kv[0], kv[1]);
                }
            }
        }

        static void writeIndexMd(Ctx c, File out, int totalFuncs) throws Exception {
            List<String> lines = new ArrayList<>();
            lines.add("# ssbu-xref-db INDEX");
            lines.add("");
            lines.add("Auto-generated by `" + SCRIPT_FILE + "`");
            lines.add("");
            lines.add("Provenance:");
            for (String[] kv : c.provenance()) {
                // one list item per key even if a value carries a line break
                String v = nz(kv[1]).replace('\r', ' ').replace('\n', ' ');
                lines.add(("- " + kv[0] + ": " + v).stripTrailing());
            }
            lines.add("");
            lines.add("Functions reached: **" + totalFuncs + "**");
            if (!c.consumerRefs.isEmpty()) {
                lines.add("");
                lines.add("Consumer cross-references:");
                for (Map.Entry<String, Integer> e : c.consumerLabelCounts()) {
                    lines.add("- `" + e.getKey() + "`: " + e.getValue() + " symbols");
                }
            }
            lines.add("");
            lines.add("## Reports");
            lines.add("- [report_all.md](reports/report_all.md): top functions across every category");
            lines.add("- [coverage.md](reports/coverage.md): symbol availability, connectivity, consumer references");
            for (String f : listFiles(c.reportsDir, "reports/")) {
                if (f.endsWith(".mmd")) {
                    lines.add("- [" + f + "](" + f + ")");
                }
            }
            lines.add("");
            lines.add("## Per-category outputs");
            lines.add("Pattern: `xrefs/xrefs_<name>.csv` `funcs/funcs_<name>.csv` `reports/report_<name>.md` " +
                "`chains/chains_<name>.csv` `rust-externs/<name>.rs`");
            lines.add("");
            lines.add("## Cross-cutting tables");
            for (String f : listFiles(c.tablesDir, "tables/")) {
                lines.add("- [" + f + "](" + f + ")");
            }
            lines.add("");
            lines.add("## Decompilation");
            lines.add("- `decompiled/*.c` (" + countSuffix(c.decompiledDir, ".c") + " files): pseudo-C per function");
            lines.add("- `decompiled/*.mmd` (" + countSuffix(c.decompiledDir, ".mmd") +
                " files): Mermaid CFG per function");
            lines.add("- `decompiled/*.asm` (" + countSuffix(c.decompiledDir, ".asm") +
                " files): disassembly per function");
            lines.add("");
            lines.add("## Source data");
            lines.add("- `searches/memory-search_all.md`: search source");
            lines.add("- `searches/memory-search_all.csv`: combined CSV with category column");
            lines.add("- `searches/split.py`: md -> CSV regenerator");
            lines.add("");
            writeText(out, String.join("\n", lines) + "\n");
        }

        private static List<String> listFiles(File d, String prefix) {
            List<String> out = new ArrayList<>();
            String[] names = d.isDirectory() ? d.list() : null;
            if (names == null) {
                return out;
            }
            for (String n : names) {
                if (!n.startsWith(".")) {
                    out.add(prefix + n);
                }
            }
            Collections.sort(out);
            return out;
        }

        private static int countSuffix(File d, String suffix) {
            String[] names = d.isDirectory() ? d.list() : null;
            if (names == null) {
                return 0;
            }
            int n = 0;
            for (String s : names) {
                if (s.endsWith(suffix)) {
                    n++;
                }
            }
            return n;
        }
    }
}
