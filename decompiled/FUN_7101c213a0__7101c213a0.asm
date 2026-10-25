// addr:      7101c213a0
// offset:    0x1c213a0
// name:      FUN_7101c213a0
// mangled:   
// size:      3028

7101c213a0  cmp w2,#0x6
7101c213a4  b.hi 0x7101c21f70
7101c213a8  stp x28,x25,[sp, #-0x50]!
7101c213ac  stp x24,x23,[sp, #0x10]
7101c213b0  stp x22,x21,[sp, #0x20]
7101c213b4  stp x20,x19,[sp, #0x30]
7101c213b8  stp x29,x30,[sp, #0x40]
7101c213bc  add x29,sp,#0x40
7101c213c0  sub sp,sp,#0x5e0
7101c213c4  add x9,sp,#0x108
7101c213c8  orr w10,wzr,#0x3c
7101c213cc  mov x11,#0x503
7101c213d0  mov x8,#-0x1
7101c213d4  stur xzr,[x9, #0x54]
7101c213d8  strh wzr,[sp, #0x164]
7101c213dc  strb wzr,[sp, #0x564]
7101c213e0  stur xzr,[x9, #0xd]
7101c213e4  movk x11,#0x2, LSL #32
7101c213e8  strh w10,[sp, #0x5ac]
7101c213ec  add x10,x9,#0x4a6
7101c213f0  mov w20,w3
7101c213f4  stp x8,xzr,[sp, #0x108]
7101c213f8  mov w21,w2
7101c213fc  mov w22,w1
7101c21400  mov x19,x0
7101c21404  str x8,[sp, #0x568]
7101c21408  str xzr,[sp, #0x570]
7101c2140c  strh wzr,[sp, #0x578]
7101c21410  strh wzr,[sp, #0x5a8]
7101c21414  strb wzr,[sp, #0x5aa]
7101c21418  str x11,[x10]
7101c2141c  mov x11,#0xa
7101c21420  movk x11,#0x100, LSL #16
7101c21424  add x10,x9,#0x4ae
7101c21428  movk x11,#0x1, LSL #32
7101c2142c  movk x11,#0x103, LSL #48
7101c21430  str x11,[x10]
7101c21434  mov w10,#0x100
7101c21438  add x11,x9,#0x4cc
7101c2143c  strh w10,[sp, #0x5be]
7101c21440  mov w10,#0x2
7101c21444  strb w10,[sp, #0x5c0]
7101c21448  add x10,x9,#0x4bc
7101c2144c  add x9,x9,#0x4c4
7101c21450  str x8,[x11]
7101c21454  str x8,[x9]
7101c21458  mov w9,#0xffffffff
7101c2145c  str x8,[x10]
7101c21460  adrp x8,0x710532f000
7101c21464  ldr x8,[x8, #0x730]
7101c21468  str w9,[sp, #0x5dc]
7101c2146c  cbz x8,0x7101c214cc
7101c21470  ldr x25,[x8, #0x8]
7101c21474  ldr x24,[x25, #0x178]
7101c21478  ldr x0,[x24, #0x8]
7101c2147c  mov x1,#0x4f97
7101c21480  movk x1,#0x5678, LSL #16
7101c21484  movk x1,#0xd, LSL #32
7101c21488  bl 0x71032b23e0
7101c2148c  mov x23,x0
7101c21490  mov x0,x24
7101c21494  mov x1,x23
7101c21498  bl 0x71032b1e40
7101c2149c  tbnz w0,#0x1f,0x7101c214cc
7101c214a0  ldr x0,[x25, #0x178]
7101c214a4  mov x1,x23
7101c214a8  bl 0x71032b1e40
7101c214ac  lsr w9,w0,#0x5
7101c214b0  add x10,sp,#0x108
7101c214b4  add x9,x10,w9, UXTW  #0x2
7101c214b8  ldr w10,[x9, #0x4c8]
7101c214bc  mov w8,#0x1
7101c214c0  lsl w8,w8,w0
7101c214c4  bic w8,w10,w8
7101c214c8  str w8,[x9, #0x4c8]
7101c214cc  add x2,sp,#0x108
7101c214d0  mov x0,x19
7101c214d4  mov w1,w22
7101c214d8  bl 0x7101c1d0b0
7101c214dc  tbz w0,#0x0,0x7101c21f58
7101c214e0  add x8,sp,#0xc0
7101c214e4  adrp x1,0x710436c000
7101c214e8  add x1,x1,#0x6f5
7101c214ec  add x0,sp,#0xc0
7101c214f0  mov w2,w21
7101c214f4  strb wzr,[sp, #0xc8]
7101c214f8  str xzr,[sp, #0xc0]
7101c214fc  add x22,x8,#0x8
7101c21500  bl 0x710062dc20
7101c21504  ldr x8,[x19, #0x170]
7101c21508  ldr x8,[x8]
7101c2150c  add x0,x8,#0x8
7101c21510  add x8,sp,#0xb0
7101c21514  mov x1,x22
7101c21518  bl 0x7103776640
7101c2151c  ldr x19,[sp, #0xb8]
7101c21520  ldr x8,[x19, #0x8]
7101c21524  cbz x8,0x7101c21548
7101c21528  ldr x8,[x8, #0x18]
7101c2152c  cbz x8,0x7101c21548
7101c21530  ldrb w10,[x8, #0x58]
7101c21534  cmp w20,#0x0
7101c21538  cset w9,ne
7101c2153c  and w10,w10,#0xfe
7101c21540  orr w9,w10,w9
7101c21544  strb w9,[x8, #0x58]
7101c21548  ldrb w8,[sp, #0x5a9]
7101c2154c  cmp w8,#0x2
7101c21550  b.eq 0x7101c2156c
7101c21554  cmp w8,#0x1
7101c21558  b.eq 0x7101c21578
7101c2155c  cbnz w8,0x7101c2158c
7101c21560  adrp x1,0x7104433000
7101c21564  add x1,x1,#0x14
7101c21568  b 0x7101c21580
7101c2156c  adrp x1,0x71043cf000
7101c21570  add x1,x1,#0x3e5
7101c21574  b 0x7101c21580
7101c21578  adrp x1,0x7104291000
7101c2157c  add x1,x1,#0xc1b
7101c21580  fmov s0,0x3f800000
7101c21584  mov x0,x19
7101c21588  bl 0x7103778300
7101c2158c  adrp x1,0x71042a2000
7101c21590  add x1,x1,#0xff8
7101c21594  add x8,sp,#0xa0
7101c21598  add x0,sp,#0xb0
7101c2159c  mov w21,#0x9dc5
7101c215a0  movk w21,#0x811c, LSL #16
7101c215a4  bl 0x7103776910
7101c215a8  sub w8,w20,#0x1
7101c215ac  cmp w8,#0x5
7101c215b0  strb wzr,[sp, #0x60]
7101c215b4  str xzr,[sp, #0x58]
7101c215b8  b.hi 0x7101c2168c
7101c215bc  adrp x9,0x71044f9000
7101c215c0  add x9,x9,#0x1a0
7101c215c4  ldrsw x8,[x9, x8, LSL #0x2]
7101c215c8  add x8,x8,x9
7101c215cc  br x8
7101c215d0  mov x9,#0x656d
7101c215d4  movk x9,#0x5f6c, LSL #16
7101c215d8  mov x8,#0x1200000000
7101c215dc  movk x9,#0x7572, LSL #32
7101c215e0  movk x9,#0x656c, LSL #48
7101c215e4  strb wzr,[sp, #0x2a]
7101c215e8  stp x8,x9,[sp, #0x10]
7101c215ec  mov x8,#0x745f
7101c215f0  movk x8,#0x6d69, LSL #16
7101c215f4  movk x8,#0x6c65, LSL #32
7101c215f8  movk x8,#0x6d69, LSL #48
7101c215fc  add x10,sp,#0x10
7101c21600  str x8,[sp, #0x20]
7101c21604  mov w8,#0x7469
7101c21608  add x9,x10,#0x9
7101c2160c  strh w8,[sp, #0x28]
7101c21610  mov w10,#0x6d
7101c21614  mov w8,#0x89
7101c21618  mov w11,w21
7101c2161c  mul w11,w11,w8
7101c21620  and w10,w10,#0xff
7101c21624  eor w11,w11,w10
7101c21628  ldrb w10,[x9], #0x1
7101c2162c  cbnz w10,0x7101c2161c
7101c21630  str w11,[sp, #0x10]
7101c21634  add x10,sp,#0x58
7101c21638  add x11,sp,#0x10
7101c2163c  mov x9,xzr
7101c21640  add x10,x10,#0x9
7101c21644  add x11,x11,#0x9
7101c21648  mov w12,#0x6d
7101c2164c  tst w12,#0xff
7101c21650  b.eq 0x7101c21a54
7101c21654  add w13,w9,#0x1
7101c21658  add x14,x10,x9
7101c2165c  cmp w13,#0x3f
7101c21660  sturb w12,[x14, #-0x1]
7101c21664  b.cs 0x7101c21a20
7101c21668  ldrb w12,[x11, x9, LSL ]
7101c2166c  cbz w12,0x7101c21a50
7101c21670  add x13,x11,x9
7101c21674  strb w12,[x10, x9, LSL ]
7101c21678  ldrb w12,[x13, #0x1]
7101c2167c  add x9,x9,#0x2
7101c21680  tst w12,#0xff
7101c21684  b.ne 0x7101c21654
7101c21688  b 0x7101c21a54
7101c2168c  add x8,sp,#0x58
7101c21690  add x1,x8,#0x8
7101c21694  b 0x7101c21bd0
7101c21698  mov x9,#0x656d
7101c2169c  movk x9,#0x5f6c, LSL #16
7101c216a0  orr x8,xzr,#0xe00000000
7101c216a4  movk x9,#0x7572, LSL #32
7101c216a8  movk x9,#0x656c, LSL #48
7101c216ac  strb wzr,[sp, #0x26]
7101c216b0  stp x8,x9,[sp, #0x10]
7101c216b4  mov w8,#0x735f
7101c216b8  movk w8,#0x6f74, LSL #16
7101c216bc  add x10,sp,#0x10
7101c216c0  str w8,[sp, #0x20]
7101c216c4  mov w8,#0x6b63
7101c216c8  add x9,x10,#0x9
7101c216cc  strh w8,[sp, #0x24]
7101c216d0  mov w10,#0x6d
7101c216d4  mov w8,#0x89
7101c216d8  mov w11,w21
7101c216dc  mul w11,w11,w8
7101c216e0  and w10,w10,#0xff
7101c216e4  eor w11,w11,w10
7101c216e8  ldrb w10,[x9], #0x1
7101c216ec  cbnz w10,0x7101c216dc
7101c216f0  str w11,[sp, #0x10]
7101c216f4  add x10,sp,#0x58
7101c216f8  add x11,sp,#0x10
7101c216fc  mov x9,xzr
7101c21700  add x10,x10,#0x9
7101c21704  add x11,x11,#0x9
7101c21708  mov w12,#0x6d
7101c2170c  tst w12,#0xff
7101c21710  b.eq 0x7101c21a94
7101c21714  add w13,w9,#0x1
7101c21718  add x14,x10,x9
7101c2171c  cmp w13,#0x3f
7101c21720  sturb w12,[x14, #-0x1]
7101c21724  b.cs 0x7101c21a28
7101c21728  ldrb w12,[x11, x9, LSL ]
7101c2172c  cbz w12,0x7101c21a90
7101c21730  add x13,x11,x9
7101c21734  strb w12,[x10, x9, LSL ]
7101c21738  ldrb w12,[x13, #0x1]
7101c2173c  add x9,x9,#0x2
7101c21740  tst w12,#0xff
7101c21744  b.ne 0x7101c21714
7101c21748  b 0x7101c21a94
7101c2174c  mov x9,#0x656d
7101c21750  movk x9,#0x5f6c, LSL #16
7101c21754  orr x8,xzr,#0x1000000000
7101c21758  movk x9,#0x7572, LSL #32
7101c2175c  movk x9,#0x656c, LSL #48
7101c21760  strb wzr,[sp, #0x28]
7101c21764  stp x8,x9,[sp, #0x10]
7101c21768  mov x8,#0x735f
7101c2176c  movk x8,#0x6174, LSL #16
7101c21770  add x10,sp,#0x10
7101c21774  movk x8,#0x696d, LSL #32
7101c21778  movk x8,#0x616e, LSL #48
7101c2177c  add x9,x10,#0x9
7101c21780  str x8,[sp, #0x20]
7101c21784  mov w10,#0x6d
7101c21788  mov w8,#0x89
7101c2178c  mov w11,w21
7101c21790  mul w11,w11,w8
7101c21794  and w10,w10,#0xff
7101c21798  eor w11,w11,w10
7101c2179c  ldrb w10,[x9], #0x1
7101c217a0  cbnz w10,0x7101c21790
7101c217a4  str w11,[sp, #0x10]
7101c217a8  add x10,sp,#0x58
7101c217ac  add x11,sp,#0x10
7101c217b0  mov x9,xzr
7101c217b4  add x10,x10,#0x9
7101c217b8  add x11,x11,#0x9
7101c217bc  mov w12,#0x6d
7101c217c0  tst w12,#0xff
7101c217c4  b.eq 0x7101c21ad4
7101c217c8  add w13,w9,#0x1
7101c217cc  add x14,x10,x9
7101c217d0  cmp w13,#0x3f
7101c217d4  sturb w12,[x14, #-0x1]
7101c217d8  b.cs 0x7101c21a30
7101c217dc  ldrb w12,[x11, x9, LSL ]
7101c217e0  cbz w12,0x7101c21ad0
7101c217e4  add x13,x11,x9
7101c217e8  strb w12,[x10, x9, LSL ]
7101c217ec  ldrb w12,[x13, #0x1]
7101c217f0  add x9,x9,#0x2
7101c217f4  tst w12,#0xff
7101c217f8  b.ne 0x7101c217c8
7101c217fc  b 0x7101c21ad4
7101c21800  mov x9,#0x656d
7101c21804  movk x9,#0x5f6c, LSL #16
7101c21808  mov x8,#0xd00000000
7101c2180c  movk x9,#0x7572, LSL #32
7101c21810  movk x9,#0x656c, LSL #48
7101c21814  add x10,sp,#0x10
7101c21818  stp x8,x9,[sp, #0x10]
7101c2181c  mov w8,#0x635f
7101c21820  movk w8,#0x6e6f, LSL #16
7101c21824  str w8,[sp, #0x20]
7101c21828  mov w8,#0x64
7101c2182c  add x9,x10,#0x9
7101c21830  mov w10,#0x6d
7101c21834  strh w8,[sp, #0x24]
7101c21838  mov w8,#0x89
7101c2183c  mov w11,w21
7101c21840  mul w11,w11,w8
7101c21844  and w10,w10,#0xff
7101c21848  eor w11,w11,w10
7101c2184c  ldrb w10,[x9], #0x1
7101c21850  cbnz w10,0x7101c21840
7101c21854  str w11,[sp, #0x10]
7101c21858  add x10,sp,#0x58
7101c2185c  add x11,sp,#0x10
7101c21860  mov x9,xzr
7101c21864  add x10,x10,#0x9
7101c21868  add x11,x11,#0x9
7101c2186c  mov w12,#0x6d
7101c21870  tst w12,#0xff
7101c21874  b.eq 0x7101c21b14
7101c21878  add w13,w9,#0x1
7101c2187c  add x14,x10,x9
7101c21880  cmp w13,#0x3f
7101c21884  sturb w12,[x14, #-0x1]
7101c21888  b.cs 0x7101c21a38
7101c2188c  ldrb w12,[x11, x9, LSL ]
7101c21890  cbz w12,0x7101c21b10
7101c21894  add x13,x11,x9
7101c21898  strb w12,[x10, x9, LSL ]
7101c2189c  ldrb w12,[x13, #0x1]
7101c218a0  add x9,x9,#0x2
7101c218a4  tst w12,#0xff
7101c218a8  b.ne 0x7101c21878
7101c218ac  b 0x7101c21b14
7101c218b0  mov x9,#0x656d
7101c218b4  movk x9,#0x5f6c, LSL #16
7101c218b8  orr x8,xzr,#0xf00000000
7101c218bc  movk x9,#0x7572, LSL #32
7101c218c0  movk x9,#0x656c, LSL #48
7101c218c4  add x10,sp,#0x10
7101c218c8  stp x8,x9,[sp, #0x10]
7101c218cc  mov x8,#0x735f
7101c218d0  movk x8,#0x6970, LSL #16
7101c218d4  movk x8,#0x6972, LSL #32
7101c218d8  movk x8,#0x74, LSL #48
7101c218dc  add x9,x10,#0x9
7101c218e0  str x8,[sp, #0x20]
7101c218e4  mov w10,#0x6d
7101c218e8  mov w8,#0x89
7101c218ec  mov w11,w21
7101c218f0  mul w11,w11,w8
7101c218f4  and w10,w10,#0xff
7101c218f8  eor w11,w11,w10
7101c218fc  ldrb w10,[x9], #0x1
7101c21900  cbnz w10,0x7101c218f0
7101c21904  str w11,[sp, #0x10]
7101c21908  add x10,sp,#0x58
7101c2190c  add x11,sp,#0x10
7101c21910  mov x9,xzr
7101c21914  add x10,x10,#0x9
7101c21918  add x11,x11,#0x9
7101c2191c  mov w12,#0x6d
7101c21920  tst w12,#0xff
7101c21924  b.eq 0x7101c21b54
7101c21928  add w13,w9,#0x1
7101c2192c  add x14,x10,x9
7101c21930  cmp w13,#0x3f
7101c21934  sturb w12,[x14, #-0x1]
7101c21938  b.cs 0x7101c21a40
7101c2193c  ldrb w12,[x11, x9, LSL ]
7101c21940  cbz w12,0x7101c21b50
7101c21944  add x13,x11,x9
7101c21948  strb w12,[x10, x9, LSL ]
7101c2194c  ldrb w12,[x13, #0x1]
7101c21950  add x9,x9,#0x2
7101c21954  tst w12,#0xff
7101c21958  b.ne 0x7101c21928
7101c2195c  b 0x7101c21b54
7101c21960  mov x9,#0x656d
7101c21964  movk x9,#0x5f6c, LSL #16
7101c21968  mov x8,#0x1400000000
7101c2196c  movk x9,#0x7572, LSL #32
7101c21970  movk x9,#0x656c, LSL #48
7101c21974  strb wzr,[sp, #0x2c]
7101c21978  stp x8,x9,[sp, #0x10]
7101c2197c  mov x8,#0x745f
7101c21980  movk x8,#0x6165, LSL #16
7101c21984  movk x8,#0x5f6d, LSL #32
7101c21988  movk x8,#0x6f66, LSL #48
7101c2198c  add x10,sp,#0x10
7101c21990  str x8,[sp, #0x20]
7101c21994  mov w8,#0x6d72
7101c21998  movk w8,#0x7461, LSL #16
7101c2199c  add x9,x10,#0x9
7101c219a0  str w8,[sp, #0x28]
7101c219a4  mov w10,#0x6d
7101c219a8  mov w8,#0x89
7101c219ac  mov w11,w21
7101c219b0  mul w11,w11,w8
7101c219b4  and w10,w10,#0xff
7101c219b8  eor w11,w11,w10
7101c219bc  ldrb w10,[x9], #0x1
7101c219c0  cbnz w10,0x7101c219b0
7101c219c4  str w11,[sp, #0x10]
7101c219c8  add x10,sp,#0x58
7101c219cc  add x11,sp,#0x10
7101c219d0  mov x9,xzr
7101c219d4  add x10,x10,#0x9
7101c219d8  add x11,x11,#0x9
7101c219dc  mov w12,#0x6d
7101c219e0  tst w12,#0xff
7101c219e4  b.eq 0x7101c21b94
7101c219e8  add w13,w9,#0x1
7101c219ec  add x14,x10,x9
7101c219f0  cmp w13,#0x3f
7101c219f4  sturb w12,[x14, #-0x1]
7101c219f8  b.cs 0x7101c21a48
7101c219fc  ldrb w12,[x11, x9, LSL ]
7101c21a00  cbz w12,0x7101c21b90
7101c21a04  add x13,x11,x9
7101c21a08  strb w12,[x10, x9, LSL ]
7101c21a0c  ldrb w12,[x13, #0x1]
7101c21a10  add x9,x9,#0x2
7101c21a14  tst w12,#0xff
7101c21a18  b.ne 0x7101c219e8
7101c21a1c  b 0x7101c21b94
7101c21a20  add w9,w9,#0x1
7101c21a24  b 0x7101c21a54
7101c21a28  add w9,w9,#0x1
7101c21a2c  b 0x7101c21a94
7101c21a30  add w9,w9,#0x1
7101c21a34  b 0x7101c21ad4
7101c21a38  add w9,w9,#0x1
7101c21a3c  b 0x7101c21b14
7101c21a40  add w9,w9,#0x1
7101c21a44  b 0x7101c21b54
7101c21a48  add w9,w9,#0x1
7101c21a4c  b 0x7101c21b94
7101c21a50  add x9,x9,#0x1
7101c21a54  add x11,sp,#0x58
7101c21a58  add x1,x11,#0x8
7101c21a5c  mov w10,w21
7101c21a60  strb wzr,[x1, w9, UXTW ]
7101c21a64  str w9,[sp, #0x5c]
7101c21a68  ldrb w9,[sp, #0x60]
7101c21a6c  cbz w9,0x7101c21bcc
7101c21a70  add x11,x11,#0x9
7101c21a74  mov w10,w21
7101c21a78  mul w10,w10,w8
7101c21a7c  and w9,w9,#0xff
7101c21a80  eor w10,w10,w9
7101c21a84  ldrb w9,[x11], #0x1
7101c21a88  cbnz w9,0x7101c21a78
7101c21a8c  b 0x7101c21bcc
7101c21a90  add x9,x9,#0x1
7101c21a94  add x11,sp,#0x58
7101c21a98  add x1,x11,#0x8
7101c21a9c  mov w10,w21
7101c21aa0  strb wzr,[x1, w9, UXTW ]
7101c21aa4  str w9,[sp, #0x5c]
7101c21aa8  ldrb w9,[sp, #0x60]
7101c21aac  cbz w9,0x7101c21bcc
7101c21ab0  add x11,x11,#0x9
7101c21ab4  mov w10,w21
7101c21ab8  mul w10,w10,w8
7101c21abc  and w9,w9,#0xff
7101c21ac0  eor w10,w10,w9
7101c21ac4  ldrb w9,[x11], #0x1
7101c21ac8  cbnz w9,0x7101c21ab8
7101c21acc  b 0x7101c21bcc
7101c21ad0  add x9,x9,#0x1
7101c21ad4  add x11,sp,#0x58
7101c21ad8  add x1,x11,#0x8
7101c21adc  mov w10,w21
7101c21ae0  strb wzr,[x1, w9, UXTW ]
7101c21ae4  str w9,[sp, #0x5c]
7101c21ae8  ldrb w9,[sp, #0x60]
7101c21aec  cbz w9,0x7101c21bcc
7101c21af0  add x11,x11,#0x9
7101c21af4  mov w10,w21
7101c21af8  mul w10,w10,w8
7101c21afc  and w9,w9,#0xff
7101c21b00  eor w10,w10,w9
7101c21b04  ldrb w9,[x11], #0x1
7101c21b08  cbnz w9,0x7101c21af8
7101c21b0c  b 0x7101c21bcc
7101c21b10  add x9,x9,#0x1
7101c21b14  add x11,sp,#0x58
7101c21b18  add x1,x11,#0x8
7101c21b1c  mov w10,w21
7101c21b20  strb wzr,[x1, w9, UXTW ]
7101c21b24  str w9,[sp, #0x5c]
7101c21b28  ldrb w9,[sp, #0x60]
7101c21b2c  cbz w9,0x7101c21bcc
7101c21b30  add x11,x11,#0x9
7101c21b34  mov w10,w21
7101c21b38  mul w10,w10,w8
7101c21b3c  and w9,w9,#0xff
7101c21b40  eor w10,w10,w9
7101c21b44  ldrb w9,[x11], #0x1
7101c21b48  cbnz w9,0x7101c21b38
7101c21b4c  b 0x7101c21bcc
7101c21b50  add x9,x9,#0x1
7101c21b54  add x11,sp,#0x58
7101c21b58  add x1,x11,#0x8
7101c21b5c  mov w10,w21
7101c21b60  strb wzr,[x1, w9, UXTW ]
7101c21b64  str w9,[sp, #0x5c]
7101c21b68  ldrb w9,[sp, #0x60]
7101c21b6c  cbz w9,0x7101c21bcc
7101c21b70  add x11,x11,#0x9
7101c21b74  mov w10,w21
7101c21b78  mul w10,w10,w8
7101c21b7c  and w9,w9,#0xff
7101c21b80  eor w10,w10,w9
7101c21b84  ldrb w9,[x11], #0x1
7101c21b88  cbnz w9,0x7101c21b78
7101c21b8c  b 0x7101c21bcc
7101c21b90  add x9,x9,#0x1
7101c21b94  add x11,sp,#0x58
7101c21b98  add x1,x11,#0x8
7101c21b9c  mov w10,w21
7101c21ba0  strb wzr,[x1, w9, UXTW ]
7101c21ba4  str w9,[sp, #0x5c]
7101c21ba8  ldrb w9,[sp, #0x60]
7101c21bac  cbz w9,0x7101c21bcc
7101c21bb0  add x11,x11,#0x9
7101c21bb4  mov w10,w21
7101c21bb8  mul w10,w10,w8
7101c21bbc  and w9,w9,#0xff
7101c21bc0  eor w10,w10,w9
7101c21bc4  ldrb w9,[x11], #0x1
7101c21bc8  cbnz w9,0x7101c21bb8
7101c21bcc  str w10,[sp, #0x58]
7101c21bd0  add x0,sp,#0xa0
7101c21bd4  bl 0x710377a120
7101c21bd8  adrp x1,0x7104454000
7101c21bdc  add x1,x1,#0xa00
7101c21be0  mov x8,sp
7101c21be4  add x0,sp,#0xb0
7101c21be8  bl 0x7103776910
7101c21bec  cmp w20,#0x6
7101c21bf0  b.hi 0x7101c21f08
7101c21bf4  mov w8,w20
7101c21bf8  adrp x9,0x71044f9000
7101c21bfc  add x9,x9,#0x1b8
7101c21c00  ldrsw x8,[x9, x8, LSL #0x2]
7101c21c04  add x8,x8,x9
7101c21c08  br x8
7101c21c0c  ldr x8,[sp, #0x8]
7101c21c10  ldr x0,[x8, #0x10]
7101c21c14  cbz x0,0x7101c21f08
7101c21c18  adrp x1,0x7104867000
7101c21c1c  add x1,x1,#0xc2e
7101c21c20  bl 0x71037a28a0
7101c21c24  b 0x7101c21f08
7101c21c28  ldrh w1,[sp, #0x5ac]
7101c21c2c  mov x0,sp
7101c21c30  bl 0x7101c09200
7101c21c34  b 0x7101c21f08
7101c21c38  ldr x8,[sp, #0x8]
7101c21c3c  ldr x20,[x8, #0x10]
7101c21c40  cbz x20,0x7101c21f08
7101c21c44  ldrb w3,[sp, #0x5ae]
7101c21c48  b 0x7101c21d88
7101c21c4c  ldrb w8,[sp, #0x5af]
7101c21c50  cmp w8,#0xb
7101c21c54  b.hi 0x7101c21d78
7101c21c58  adrp x9,0x7104ada000
7101c21c5c  add x9,x9,#0x8a0
7101c21c60  sxtb x8,w8
7101c21c64  ldr w3,[x9, x8, LSL #0x2]
7101c21c68  b 0x7101c21d7c
7101c21c6c  ldrb w8,[sp, #0x5b0]
7101c21c70  sub w9,w8,#0x1
7101c21c74  cmp w9,#0x4
7101c21c78  mov w9,#0x1
7101c21c7c  csinc w8,w9,w8,cs
7101c21c80  and w2,w8,#0xff
7101c21c84  adrp x1,0x710435b000
7101c21c88  add x1,x1,#0x6da
7101c21c8c  mov x0,sp
7101c21c90  bl 0x710377a120
7101c21c94  b 0x7101c21f08
7101c21c98  ldrb w9,[sp, #0x5b1]
7101c21c9c  add x8,sp,#0x10
7101c21ca0  mov x10,#0x6d63
7101c21ca4  movk x10,#0x5f6e, LSL #16
7101c21ca8  add x1,x8,#0x8
7101c21cac  movk x10,#0x6977, LSL #32
7101c21cb0  movk x10,#0x6874, LSL #48
7101c21cb4  stp xzr,x10,[sp, #0x10]
7101c21cb8  cbz w9,0x7101c21dcc
7101c21cbc  mov w9,#0x8
7101c21cc0  str w9,[sp, #0x14]
7101c21cc4  add x8,x8,#0x9
7101c21cc8  mov w10,#0x63
7101c21ccc  mov w9,#0x89
7101c21cd0  strb wzr,[sp, #0x20]
7101c21cd4  mul w11,w21,w9
7101c21cd8  and w10,w10,#0xff
7101c21cdc  eor w21,w11,w10
7101c21ce0  ldrb w10,[x8], #0x1
7101c21ce4  cbnz w10,0x7101c21cd4
7101c21ce8  b 0x7101c21efc
7101c21cec  ldrb w8,[sp, #0x5aa]
7101c21cf0  cmp w8,#0x2
7101c21cf4  b.eq 0x7101c21e04
7101c21cf8  cmp w8,#0x1
7101c21cfc  b.eq 0x7101c21e78
7101c21d00  cbnz w8,0x7101c21eec
7101c21d04  mov x10,#0x656d
7101c21d08  movk x10,#0x5f6c, LSL #16
7101c21d0c  mov x8,#0x1700000000
7101c21d10  add x9,sp,#0x10
7101c21d14  movk x10,#0x7572, LSL #32
7101c21d18  movk x10,#0x656c, LSL #48
7101c21d1c  stp x8,x10,[sp, #0x10]
7101c21d20  add x1,x9,#0x8
7101c21d24  add x8,x9,#0x9
7101c21d28  mov x9,#0x745f
7101c21d2c  movk x9,#0x6165, LSL #16
7101c21d30  movk x9,#0x5f6d, LSL #32
7101c21d34  movk x9,#0x6f66, LSL #48
7101c21d38  str x9,[sp, #0x20]
7101c21d3c  mov w9,#0x6d72
7101c21d40  strh w9,[sp, #0x28]
7101c21d44  mov w9,#0x7461
7101c21d48  movk w9,#0x305f, LSL #16
7101c21d4c  stur w9,[sp, #0x2a]
7101c21d50  orr w9,wzr,#0x30
7101c21d54  mov w10,#0x6d
7101c21d58  strh w9,[sp, #0x2e]
7101c21d5c  mov w9,#0x89
7101c21d60  mul w11,w21,w9
7101c21d64  and w10,w10,#0xff
7101c21d68  eor w21,w11,w10
7101c21d6c  ldrb w10,[x8], #0x1
7101c21d70  cbnz w10,0x7101c21d60
7101c21d74  b 0x7101c21efc
7101c21d78  mov w3,#0x96
7101c21d7c  ldr x8,[sp, #0x8]
7101c21d80  ldr x20,[x8, #0x10]
7101c21d84  cbz x20,0x7101c21f08
7101c21d88  str xzr,[sp, #0x48]
7101c21d8c  add x0,sp,#0x10
7101c21d90  mov w1,#0x20
7101c21d94  mov w2,wzr
7101c21d98  mov w4,wzr
7101c21d9c  mov w5,wzr
7101c21da0  str xzr,[sp, #0x10]
7101c21da4  stp xzr,xzr,[sp, #0x38]
7101c21da8  stp xzr,xzr,[sp, #0x28]
7101c21dac  stp xzr,xzr,[sp, #0x18]
7101c21db0  bl 0x71037ad940
7101c21db4  mov w2,w0
7101c21db8  add x1,sp,#0x10
7101c21dbc  mov x0,x20
7101c21dc0  mov w3,wzr
7101c21dc4  bl 0x71037a2270
7101c21dc8  b 0x7101c21f08
7101c21dcc  mov w9,#0x756f
7101c21dd0  movk w9,#0x74, LSL #16
7101c21dd4  mov w10,#0xb
7101c21dd8  str w9,[sp, #0x20]
7101c21ddc  str w10,[sp, #0x14]
7101c21de0  add x8,x8,#0x9
7101c21de4  mov w10,#0x63
7101c21de8  mov w9,#0x89
7101c21dec  mul w11,w21,w9
7101c21df0  and w10,w10,#0xff
7101c21df4  eor w21,w11,w10
7101c21df8  ldrb w10,[x8], #0x1
7101c21dfc  cbnz w10,0x7101c21dec
7101c21e00  b 0x7101c21efc
7101c21e04  mov x10,#0x656d
7101c21e08  movk x10,#0x5f6c, LSL #16
7101c21e0c  mov x8,#0x1700000000
7101c21e10  add x9,sp,#0x10
7101c21e14  movk x10,#0x7572, LSL #32
7101c21e18  movk x10,#0x656c, LSL #48
7101c21e1c  stp x8,x10,[sp, #0x10]
7101c21e20  add x1,x9,#0x8
7101c21e24  add x8,x9,#0x9
7101c21e28  mov x9,#0x745f
7101c21e2c  movk x9,#0x6165, LSL #16
7101c21e30  movk x9,#0x5f6d, LSL #32
7101c21e34  movk x9,#0x6f66, LSL #48
7101c21e38  str x9,[sp, #0x20]
7101c21e3c  mov w9,#0x6d72
7101c21e40  strh w9,[sp, #0x28]
7101c21e44  mov w9,#0x7461
7101c21e48  movk w9,#0x305f, LSL #16
7101c21e4c  stur w9,[sp, #0x2a]
7101c21e50  mov w9,#0x32
7101c21e54  mov w10,#0x6d
7101c21e58  strh w9,[sp, #0x2e]
7101c21e5c  mov w9,#0x89
7101c21e60  mul w11,w21,w9
7101c21e64  and w10,w10,#0xff
7101c21e68  eor w21,w11,w10
7101c21e6c  ldrb w10,[x8], #0x1
7101c21e70  cbnz w10,0x7101c21e60
7101c21e74  b 0x7101c21efc
7101c21e78  mov x10,#0x656d
7101c21e7c  movk x10,#0x5f6c, LSL #16
7101c21e80  mov x8,#0x1700000000
7101c21e84  add x9,sp,#0x10
7101c21e88  movk x10,#0x7572, LSL #32
7101c21e8c  movk x10,#0x656c, LSL #48
7101c21e90  stp x8,x10,[sp, #0x10]
7101c21e94  add x1,x9,#0x8
7101c21e98  add x8,x9,#0x9
7101c21e9c  mov x9,#0x745f
7101c21ea0  movk x9,#0x6165, LSL #16
7101c21ea4  movk x9,#0x5f6d, LSL #32
7101c21ea8  movk x9,#0x6f66, LSL #48
7101c21eac  str x9,[sp, #0x20]
7101c21eb0  mov w9,#0x6d72
7101c21eb4  strh w9,[sp, #0x28]
7101c21eb8  mov w9,#0x7461
7101c21ebc  movk w9,#0x305f, LSL #16
7101c21ec0  stur w9,[sp, #0x2a]
7101c21ec4  mov w9,#0x31
7101c21ec8  mov w10,#0x6d
7101c21ecc  strh w9,[sp, #0x2e]
7101c21ed0  mov w9,#0x89
7101c21ed4  mul w11,w21,w9
7101c21ed8  and w10,w10,#0xff
7101c21edc  eor w21,w11,w10
7101c21ee0  ldrb w10,[x8], #0x1
7101c21ee4  cbnz w10,0x7101c21ed4
7101c21ee8  b 0x7101c21efc
7101c21eec  add x8,sp,#0x10
7101c21ef0  add x1,x8,#0x8
7101c21ef4  strb wzr,[sp, #0x18]
7101c21ef8  str wzr,[sp, #0x14]
7101c21efc  mov x0,sp
7101c21f00  str w21,[sp, #0x10]
7101c21f04  bl 0x710377a120
7101c21f08  ldr x0,[sp, #0x8]
7101c21f0c  adrp x20,0x710523d000
7101c21f10  add x20,x20,#0x9a8
7101c21f14  stp x20,xzr,[sp]
7101c21f18  cbz x0,0x7101c21f20
7101c21f1c  bl 0x710392eb40
7101c21f20  ldr x0,[sp, #0xa8]
7101c21f24  stp x20,xzr,[sp, #0xa0]
7101c21f28  cbz x0,0x7101c21f30
7101c21f2c  bl 0x710392eb40
7101c21f30  adrp x8,0x710523d000
7101c21f34  add x8,x8,#0x988
7101c21f38  stp x8,xzr,[sp, #0xb0]
7101c21f3c  cbz x19,0x7101c21f58
7101c21f40  ldr x0,[x19, #0x18]
7101c21f44  stp x20,xzr,[x19, #0x10]
7101c21f48  cbz x0,0x7101c21f50
7101c21f4c  bl 0x710392eb40
7101c21f50  mov x0,x19
7101c21f54  bl 0x710392eb40
7101c21f58  add sp,sp,#0x5e0
7101c21f5c  ldp x29,x30,[sp, #0x40]
7101c21f60  ldp x20,x19,[sp, #0x30]
7101c21f64  ldp x22,x21,[sp, #0x20]
7101c21f68  ldp x24,x23,[sp, #0x10]
7101c21f6c  ldp x28,x25,[sp], #0x50
7101c21f70  ret
