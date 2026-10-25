// addr:      7101ccd6f0
// offset:    0x1ccd6f0
// name:      FUN_7101ccd6f0
// mangled:   
// size:      760

7101ccd6f0  sub sp,sp,#0x40
7101ccd6f4  stp x22,x21,[sp, #0x10]
7101ccd6f8  stp x20,x19,[sp, #0x20]
7101ccd6fc  stp x29,x30,[sp, #0x30]
7101ccd700  add x29,sp,#0x30
7101ccd704  ldr w8,[x0, #0xdc]
7101ccd708  mov x19,x0
7101ccd70c  cbz w8,0x7101ccd718
7101ccd710  add x21,x19,#0xf8
7101ccd714  b 0x7101ccd974
7101ccd718  ldr x8,[x19, #0xf0]
7101ccd71c  ldr x8,[x8]
7101ccd720  add x20,x8,#0x8
7101ccd724  adrp x1,0x710424f000
7101ccd728  add x1,x1,#0x6d5
7101ccd72c  mov x8,sp
7101ccd730  mov x0,x20
7101ccd734  mov w2,wzr
7101ccd738  bl 0x7103776910
7101ccd73c  ldr x0,[sp, #0x8]
7101ccd740  bl 0x7103779650
7101ccd744  ldr x0,[sp, #0x8]
7101ccd748  adrp x22,0x710523d000
7101ccd74c  add x22,x22,#0x9a8
7101ccd750  stp x22,xzr,[sp]
7101ccd754  cbz x0,0x7101ccd75c
7101ccd758  bl 0x710392eb40
7101ccd75c  adrp x1,0x710424f000
7101ccd760  add x1,x1,#0x6d5
7101ccd764  mov x8,sp
7101ccd768  mov w2,#0x1
7101ccd76c  mov x0,x20
7101ccd770  bl 0x7103776910
7101ccd774  ldr x0,[sp, #0x8]
7101ccd778  bl 0x7103779650
7101ccd77c  ldr x0,[sp, #0x8]
7101ccd780  stp x22,xzr,[sp]
7101ccd784  cbz x0,0x7101ccd78c
7101ccd788  bl 0x710392eb40
7101ccd78c  adrp x1,0x710424f000
7101ccd790  add x1,x1,#0x6d5
7101ccd794  mov x8,sp
7101ccd798  mov w2,#0x2
7101ccd79c  mov x0,x20
7101ccd7a0  bl 0x7103776910
7101ccd7a4  ldr x0,[sp, #0x8]
7101ccd7a8  bl 0x7103779650
7101ccd7ac  ldr x0,[sp, #0x8]
7101ccd7b0  stp x22,xzr,[sp]
7101ccd7b4  cbz x0,0x7101ccd7bc
7101ccd7b8  bl 0x710392eb40
7101ccd7bc  adrp x1,0x710424f000
7101ccd7c0  add x1,x1,#0x6d5
7101ccd7c4  mov x8,sp
7101ccd7c8  orr w2,wzr,#0x3
7101ccd7cc  mov x0,x20
7101ccd7d0  bl 0x7103776910
7101ccd7d4  ldr x0,[sp, #0x8]
7101ccd7d8  bl 0x7103779650
7101ccd7dc  ldr x0,[sp, #0x8]
7101ccd7e0  stp x22,xzr,[sp]
7101ccd7e4  cbz x0,0x7101ccd7ec
7101ccd7e8  bl 0x710392eb40
7101ccd7ec  adrp x1,0x710424f000
7101ccd7f0  add x1,x1,#0x6d5
7101ccd7f4  mov x8,sp
7101ccd7f8  mov w2,#0x4
7101ccd7fc  mov x0,x20
7101ccd800  bl 0x7103776910
7101ccd804  ldr x21,[sp, #0x8]
7101ccd808  mov x0,x21
7101ccd80c  bl 0x7103779650
7101ccd810  stp x22,xzr,[sp]
7101ccd814  cbz x21,0x7101ccd820
7101ccd818  mov x0,x21
7101ccd81c  bl 0x710392eb40
7101ccd820  adrp x1,0x710424f000
7101ccd824  add x1,x1,#0x6d5
7101ccd828  mov w2,#0x5
7101ccd82c  mov x8,sp
7101ccd830  mov x0,x20
7101ccd834  bl 0x7103776910
7101ccd838  ldr x21,[sp, #0x8]
7101ccd83c  mov x0,x21
7101ccd840  bl 0x7103779650
7101ccd844  stp x22,xzr,[sp]
7101ccd848  cbz x21,0x7101ccd854
7101ccd84c  mov x0,x21
7101ccd850  bl 0x710392eb40
7101ccd854  adrp x1,0x710424f000
7101ccd858  add x1,x1,#0x6d5
7101ccd85c  mov x8,sp
7101ccd860  orr w2,wzr,#0x6
7101ccd864  mov x0,x20
7101ccd868  bl 0x7103776910
7101ccd86c  ldr x21,[sp, #0x8]
7101ccd870  mov x0,x21
7101ccd874  bl 0x7103779650
7101ccd878  stp x22,xzr,[sp]
7101ccd87c  cbz x21,0x7101ccd888
7101ccd880  mov x0,x21
7101ccd884  bl 0x710392eb40
7101ccd888  adrp x1,0x710424f000
7101ccd88c  add x1,x1,#0x6d5
7101ccd890  mov x8,sp
7101ccd894  orr w2,wzr,#0x7
7101ccd898  mov x0,x20
7101ccd89c  bl 0x7103776910
7101ccd8a0  ldr x0,[sp, #0x8]
7101ccd8a4  bl 0x7103779650
7101ccd8a8  ldr x0,[sp, #0x8]
7101ccd8ac  stp x22,xzr,[sp]
7101ccd8b0  cbz x0,0x7101ccd8b8
7101ccd8b4  bl 0x710392eb40
7101ccd8b8  adrp x1,0x71042e7000
7101ccd8bc  add x1,x1,#0x3e2
7101ccd8c0  mov x8,sp
7101ccd8c4  mov x0,x20
7101ccd8c8  bl 0x7103776910
7101ccd8cc  ldr x21,[sp, #0x8]
7101ccd8d0  mov x0,x21
7101ccd8d4  bl 0x7103779650
7101ccd8d8  stp x22,xzr,[sp]
7101ccd8dc  cbz x21,0x7101ccd8e8
7101ccd8e0  mov x0,x21
7101ccd8e4  bl 0x710392eb40
7101ccd8e8  adrp x1,0x710433a000
7101ccd8ec  add x1,x1,#0x2c1
7101ccd8f0  mov x8,sp
7101ccd8f4  mov x0,x20
7101ccd8f8  bl 0x7103776910
7101ccd8fc  ldr x21,[sp, #0x8]
7101ccd900  mov x0,x21
7101ccd904  bl 0x7103779650
7101ccd908  stp x22,xzr,[sp]
7101ccd90c  cbz x21,0x7101ccd918
7101ccd910  mov x0,x21
7101ccd914  bl 0x710392eb40
7101ccd918  adrp x1,0x7104270000
7101ccd91c  add x1,x1,#0x100
7101ccd920  mov x8,sp
7101ccd924  mov x0,x20
7101ccd928  bl 0x7103776910
7101ccd92c  ldr x20,[sp, #0x8]
7101ccd930  mov x0,x20
7101ccd934  bl 0x7103779650
7101ccd938  stp x22,xzr,[sp]
7101ccd93c  cbz x20,0x7101ccd948
7101ccd940  mov x0,x20
7101ccd944  bl 0x710392eb40
7101ccd948  ldr x8,[x19, #0xf0]
7101ccd94c  ldr x0,[x8]
7101ccd950  bl 0x7103775fa0
7101ccd954  mov x21,x19
7101ccd958  ldr x8,[x21, #0xf8]!
7101ccd95c  ldr x8,[x8]
7101ccd960  ldr x0,[x8, #0x10]
7101ccd964  fmov s0,0x3f800000
7101ccd968  adrp x1,0x7104318000
7101ccd96c  add x1,x1,#0xfe5
7101ccd970  bl 0x7103778300
7101ccd974  ldr x8,[x21]
7101ccd978  ldr x20,[x8]
7101ccd97c  ldr x8,[x20, #0x10]
7101ccd980  ldr x0,[x8, #0x8]
7101ccd984  cbz x0,0x7101ccd9b0
7101ccd988  adrp x1,0x7104318000
7101ccd98c  add x1,x1,#0xfe5
7101ccd990  bl 0x71037964b0
7101ccd994  cbz x0,0x7101ccd9b0
7101ccd998  ldr x8,[x0]
7101ccd99c  ldr x8,[x8, #0x138]
7101ccd9a0  blr x8
7101ccd9a4  tbz w0,#0x0,0x7101ccd9d0
7101ccd9a8  ldr x8,[x21]
7101ccd9ac  ldr x20,[x8]
7101ccd9b0  mov x0,x20
7101ccd9b4  bl 0x7103775fa0
7101ccd9b8  ldrsw x8,[x19, #0xd4]
7101ccd9bc  cmp w8,#0x13
7101ccd9c0  b.cs 0x7101ccd9e4
7101ccd9c4  add x8,x19,x8, LSL #0x2
7101ccd9c8  mov w9,#0x1
7101ccd9cc  str w9,[x8, #0x88]
7101ccd9d0  ldp x29,x30,[sp, #0x30]
7101ccd9d4  ldp x20,x19,[sp, #0x20]
7101ccd9d8  ldp x22,x21,[sp, #0x10]
7101ccd9dc  add sp,sp,#0x40
7101ccd9e0  ret
7101ccd9e4  bl 0x71039c2650
