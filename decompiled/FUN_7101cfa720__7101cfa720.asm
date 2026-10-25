// addr:      7101cfa720
// offset:    0x1cfa720
// name:      FUN_7101cfa720
// mangled:   
// size:      1840

7101cfa720  sub sp,sp,#0xa0
7101cfa724  stp x26,x25,[sp, #0x50]
7101cfa728  stp x24,x23,[sp, #0x60]
7101cfa72c  stp x22,x21,[sp, #0x70]
7101cfa730  stp x20,x19,[sp, #0x80]
7101cfa734  stp x29,x30,[sp, #0x90]
7101cfa738  add x29,sp,#0x90
7101cfa73c  ldr w8,[x0, #0xbc]
7101cfa740  mov x19,x0
7101cfa744  cbnz w8,0x7101cfacf4
7101cfa748  ldr x8,[x19, #0xd8]
7101cfa74c  ldr x8,[x8, #0x80]
7101cfa750  ldr x8,[x8]
7101cfa754  ldr x0,[x8, #0x10]
7101cfa758  adrp x1,0x71042e7000
7101cfa75c  add x1,x1,#0x481
7101cfa760  bl 0x7103778760
7101cfa764  ldr x20,[x19, #0xc8]
7101cfa768  ldr x8,[x20, #0x80]
7101cfa76c  ldr x0,[x8]
7101cfa770  bl 0x7103775fa0
7101cfa774  mov w21,#0x1
7101cfa778  strb w21,[x20, #0x70]
7101cfa77c  ldr x20,[x19, #0xd0]
7101cfa780  ldr x8,[x20, #0x90]
7101cfa784  ldr x0,[x8]
7101cfa788  bl 0x7103775fa0
7101cfa78c  ldr x8,[x20, #0x98]
7101cfa790  ldr x0,[x8]
7101cfa794  bl 0x7103775fa0
7101cfa798  ldr x8,[x20, #0xa0]
7101cfa79c  ldr x0,[x8]
7101cfa7a0  bl 0x7103775fa0
7101cfa7a4  strb w21,[x20, #0x70]
7101cfa7a8  ldr x8,[x19, #0xd8]
7101cfa7ac  ldr x8,[x8, #0x80]
7101cfa7b0  ldr x0,[x8]
7101cfa7b4  bl 0x7103775fa0
7101cfa7b8  adrp x25,0x7105329000
7101cfa7bc  ldr x8,[x25, #0x740]
7101cfa7c0  ldr x8,[x8, #0x8]
7101cfa7c4  ldr w20,[x19, #0xf0]
7101cfa7c8  cmp w20,#0x2
7101cfa7cc  ldr w21,[x8, #0x4d8]
7101cfa7d0  b.cc 0x7101cfa8f8
7101cfa7d4  ldp x23,x22,[x19, #0xe0]
7101cfa7d8  ldr x8,[x23, #0x158]
7101cfa7dc  ldr x8,[x8]
7101cfa7e0  add x0,x8,#0x8
7101cfa7e4  adrp x1,0x71043f0000
7101cfa7e8  add x1,x1,#0xd4d
7101cfa7ec  add x8,sp,#0x40
7101cfa7f0  bl 0x7103776910
7101cfa7f4  ldr x24,[sp, #0x48]
7101cfa7f8  ldr x0,[x24, #0x8]
7101cfa7fc  cbz x0,0x7101cfa820
7101cfa800  adrp x8,0x710593b000
7101cfa804  ldr x8,[x8, #0xc38]
7101cfa808  cbz x8,0x7101cfa820
7101cfa80c  ldr x8,[x8, #0x8]
7101cfa810  ldr x1,[x8, #0x78]
7101cfa814  cbz x1,0x7101cfa820
7101cfa818  mov w2,wzr
7101cfa81c  bl 0x710379e9c0
7101cfa820  adrp x26,0x710523d000
7101cfa824  add x26,x26,#0x9a8
7101cfa828  stp x26,xzr,[sp, #0x40]
7101cfa82c  cbz x24,0x7101cfa838
7101cfa830  mov x0,x24
7101cfa834  bl 0x710392eb40
7101cfa838  ldr x8,[x23, #0x150]
7101cfa83c  ldr x8,[x8]
7101cfa840  add x0,x8,#0x8
7101cfa844  adrp x1,0x71043f0000
7101cfa848  add x1,x1,#0xd4d
7101cfa84c  add x8,sp,#0x40
7101cfa850  bl 0x7103776910
7101cfa854  ldr x24,[sp, #0x48]
7101cfa858  ldr x0,[x24, #0x8]
7101cfa85c  cbz x0,0x7101cfa884
7101cfa860  adrp x8,0x7105339000
7101cfa864  ldr x8,[x8, #0x6a0]
7101cfa868  mov w9,#0x1920
7101cfa86c  ldrb w9,[x8, x9, LSL ]
7101cfa870  cbz w9,0x7101cfaab8
7101cfa874  mov w9,#0x1a98
7101cfa878  add x1,x8,x9
7101cfa87c  mov w2,wzr
7101cfa880  bl 0x710379e9c0
7101cfa884  stp x26,xzr,[sp, #0x40]
7101cfa888  cbz x24,0x7101cfa894
7101cfa88c  mov x0,x24
7101cfa890  bl 0x710392eb40
7101cfa894  ldr x8,[x25, #0x740]
7101cfa898  adrp x9,0x7105339000
7101cfa89c  ldr x9,[x9, #0x168]
7101cfa8a0  ldr x0,[x8, #0x8]
7101cfa8a4  cbz x9,0x7101cfa8d4
7101cfa8a8  mov w10,#0x72b4
7101cfa8ac  add x10,x9,x10
7101cfa8b0  ldr s0,[x0, #0x18c]
7101cfa8b4  ldr s1,[x10]
7101cfa8b8  fcmp s1,s0
7101cfa8bc  b.eq 0x7101cfa8d4
7101cfa8c0  mov w11,#0x72b9
7101cfa8c4  mov w12,#0x1
7101cfa8c8  strb w12,[x9, x11, LSL ]
7101cfa8cc  str s0,[x10]
7101cfa8d0  ldr x0,[x8, #0x8]
7101cfa8d4  ldr w8,[x0, #0x4d8]
7101cfa8d8  cmp w8,#0x1
7101cfa8dc  b.eq 0x7101cfaa64
7101cfa8e0  cmp w8,#0x2
7101cfa8e4  b.ne 0x7101cfaa84
7101cfa8e8  ldrb w8,[x0, #0x568]
7101cfa8ec  cbz w8,0x7101cfab30
7101cfa8f0  ldr w8,[x0, #0x738]
7101cfa8f4  b 0x7101cfab30
7101cfa8f8  cmp w21,#0x2
7101cfa8fc  b.ne 0x7101cfa9f0
7101cfa900  ldp x21,x22,[x19, #0xe0]
7101cfa904  add x23,x8,#0x728
7101cfa908  ldr x8,[x21, #0x158]
7101cfa90c  ldr x8,[x8]
7101cfa910  add x0,x8,#0x8
7101cfa914  adrp x1,0x71043f0000
7101cfa918  add x1,x1,#0xd4d
7101cfa91c  add x8,sp,#0x40
7101cfa920  bl 0x7103776910
7101cfa924  add x0,sp,#0x40
7101cfa928  mov x1,x23
7101cfa92c  bl 0x7103779480
7101cfa930  ldr x0,[sp, #0x48]
7101cfa934  adrp x24,0x710523d000
7101cfa938  add x24,x24,#0x9a8
7101cfa93c  stp x24,xzr,[sp, #0x40]
7101cfa940  cbz x0,0x7101cfa948
7101cfa944  bl 0x710392eb40
7101cfa948  ldr x8,[x21, #0x150]
7101cfa94c  ldr x8,[x8]
7101cfa950  add x0,x8,#0x8
7101cfa954  adrp x1,0x71043f0000
7101cfa958  add x1,x1,#0xd4d
7101cfa95c  add x8,sp,#0x40
7101cfa960  bl 0x7103776910
7101cfa964  ldr x23,[sp, #0x48]
7101cfa968  ldr x0,[x23, #0x8]
7101cfa96c  cbz x0,0x7101cfa994
7101cfa970  adrp x8,0x7105339000
7101cfa974  ldr x8,[x8, #0x6a0]
7101cfa978  mov w9,#0x1920
7101cfa97c  ldrb w9,[x8, x9, LSL ]
7101cfa980  cbz w9,0x7101cfad54
7101cfa984  mov w9,#0x1a98
7101cfa988  add x1,x8,x9
7101cfa98c  mov w2,wzr
7101cfa990  bl 0x710379e9c0
7101cfa994  stp x24,xzr,[sp, #0x40]
7101cfa998  cbz x23,0x7101cfa9a4
7101cfa99c  mov x0,x23
7101cfa9a0  bl 0x710392eb40
7101cfa9a4  adrp x8,0x7105339000
7101cfa9a8  ldr x8,[x8, #0x168]
7101cfa9ac  cbz x8,0x7101cfa9e0
7101cfa9b0  ldr x9,[x25, #0x740]
7101cfa9b4  ldr x9,[x9, #0x8]
7101cfa9b8  ldr s0,[x9, #0x188]
7101cfa9bc  mov w9,#0x72b4
7101cfa9c0  add x9,x8,x9
7101cfa9c4  ldr s1,[x9]
7101cfa9c8  fcmp s1,s0
7101cfa9cc  b.eq 0x7101cfa9e0
7101cfa9d0  mov w10,#0x72b9
7101cfa9d4  mov w11,#0x1
7101cfa9d8  strb w11,[x8, x10, LSL ]
7101cfa9dc  str s0,[x9]
7101cfa9e0  mov w2,#0x2
7101cfa9e4  mov x0,x21
7101cfa9e8  mov w1,w20
7101cfa9ec  b 0x7101cfacc4
7101cfa9f0  ldp x23,x22,[x19, #0xe0]
7101cfa9f4  ldr x8,[x23, #0x158]
7101cfa9f8  ldr x8,[x8]
7101cfa9fc  ldr x0,[x8, #0x10]
7101cfaa00  cbz w21,0x7101cfaad0
7101cfaa04  fmov s0,0x3f800000
7101cfaa08  adrp x1,0x7104420000
7101cfaa0c  add x1,x1,#0xbbc
7101cfaa10  bl 0x7103778300
7101cfaa14  ldr x8,[x23, #0x150]
7101cfaa18  ldr x8,[x8]
7101cfaa1c  add x0,x8,#0x8
7101cfaa20  adrp x1,0x71043f0000
7101cfaa24  add x1,x1,#0xd4d
7101cfaa28  add x8,sp,#0x40
7101cfaa2c  bl 0x7103776910
7101cfaa30  ldr x24,[sp, #0x48]
7101cfaa34  ldr x0,[x24, #0x8]
7101cfaa38  cbz x0,0x7101cfad78
7101cfaa3c  adrp x8,0x7105339000
7101cfaa40  ldr x8,[x8, #0x6a0]
7101cfaa44  mov w9,#0x1920
7101cfaa48  ldrb w9,[x8, x9, LSL ]
7101cfaa4c  cbz w9,0x7101cfad6c
7101cfaa50  mov w9,#0x1a98
7101cfaa54  add x1,x8,x9
7101cfaa58  mov w2,wzr
7101cfaa5c  bl 0x710379e9c0
7101cfaa60  b 0x7101cfad78
7101cfaa64  ldp x9,x10,[x0, #0x1b8]
7101cfaa68  add x8,x0,#0x1b8
7101cfaa6c  cmp x10,x9
7101cfaa70  b.eq 0x7101cfae44
7101cfaa74  ldr w9,[x9]
7101cfaa78  str w9,[sp, #0x8]
7101cfaa7c  ldp x9,x10,[x0, #0x1b8]
7101cfaa80  b 0x7101cfaaa0
7101cfaa84  ldp x9,x10,[x0, #0x1a0]
7101cfaa88  add x8,x0,#0x1a0
7101cfaa8c  cmp x10,x9
7101cfaa90  b.eq 0x7101cfae44
7101cfaa94  ldr w9,[x9]
7101cfaa98  str w9,[sp, #0x8]
7101cfaa9c  ldp x9,x10,[x0, #0x1a0]
7101cfaaa0  sub x10,x10,x9
7101cfaaa4  asr x10,x10,#0x2
7101cfaaa8  cmp x10,#0x1
7101cfaaac  b.ls 0x7101cfae44
7101cfaab0  add x8,x9,#0x4
7101cfaab4  b 0x7101cfab40
7101cfaab8  mov w1,#0x1
7101cfaabc  mov x0,x24
7101cfaac0  bl 0x71037790a0
7101cfaac4  stp x26,xzr,[sp, #0x40]
7101cfaac8  cbnz x24,0x7101cfa88c
7101cfaacc  b 0x7101cfa894
7101cfaad0  fmov s0,0x3f800000
7101cfaad4  adrp x1,0x71043ad000
7101cfaad8  add x1,x1,#0x98d
7101cfaadc  bl 0x7103778300
7101cfaae0  ldr x8,[x23, #0x150]
7101cfaae4  ldr x8,[x8]
7101cfaae8  add x0,x8,#0x8
7101cfaaec  adrp x1,0x71043f0000
7101cfaaf0  add x1,x1,#0xd4d
7101cfaaf4  add x8,sp,#0x40
7101cfaaf8  bl 0x7103776910
7101cfaafc  ldr x21,[sp, #0x48]
7101cfab00  ldr x0,[x21, #0x8]
7101cfab04  cbz x0,0x7101cfaddc
7101cfab08  adrp x8,0x7105339000
7101cfab0c  ldr x8,[x8, #0x6a0]
7101cfab10  mov w9,#0x1920
7101cfab14  ldrb w9,[x8, x9, LSL ]
7101cfab18  cbz w9,0x7101cfadd0
7101cfab1c  mov w9,#0x1a98
7101cfab20  add x1,x8,x9
7101cfab24  mov w2,wzr
7101cfab28  bl 0x710379e9c0
7101cfab2c  b 0x7101cfaddc
7101cfab30  str w8,[sp, #0x8]
7101cfab34  ldrb w8,[x0, #0x568]
7101cfab38  cbz w8,0x7101cfad50
7101cfab3c  add x8,x0,#0x73c
7101cfab40  ldr w8,[x8]
7101cfab44  str w8,[sp]
7101cfab48  ldr x8,[x0, #0x80]!
7101cfab4c  ldr x9,[x0, #0x8]
7101cfab50  cmp x9,x8
7101cfab54  b.eq 0x7101cfae4c
7101cfab58  ldr x9,[x23, #0x148]
7101cfab5c  ldr w8,[x8, #0x814]
7101cfab60  adrp x1,0x71042e7000
7101cfab64  add x1,x1,#0x40f
7101cfab68  ldr x9,[x9]
7101cfab6c  add x0,x9,#0x8
7101cfab70  cmp w8,#0x2
7101cfab74  b.cc 0x7101cfac54
7101cfab78  add x8,sp,#0x40
7101cfab7c  bl 0x7103776910
7101cfab80  add x0,sp,#0x40
7101cfab84  mov w1,#0x1
7101cfab88  add x2,sp,#0x8
7101cfab8c  bl 0x7103779d90
7101cfab90  ldr x0,[sp, #0x48]
7101cfab94  stp x26,xzr,[sp, #0x40]
7101cfab98  cbz x0,0x7101cfaba0
7101cfab9c  bl 0x710392eb40
7101cfaba0  ldr x8,[x23, #0x148]
7101cfaba4  ldr x8,[x8]
7101cfaba8  add x0,x8,#0x8
7101cfabac  adrp x1,0x710433a000
7101cfabb0  add x1,x1,#0x32b
7101cfabb4  add x8,sp,#0x30
7101cfabb8  bl 0x7103776910
7101cfabbc  add x0,sp,#0x30
7101cfabc0  mov w1,#0x1
7101cfabc4  add x2,sp,#0x8
7101cfabc8  bl 0x7103779d90
7101cfabcc  ldr x0,[sp, #0x38]
7101cfabd0  stp x26,xzr,[sp, #0x30]
7101cfabd4  cbz x0,0x7101cfabdc
7101cfabd8  bl 0x710392eb40
7101cfabdc  ldr x8,[x23, #0x148]
7101cfabe0  ldr x8,[x8]
7101cfabe4  add x0,x8,#0x8
7101cfabe8  adrp x1,0x71043be000
7101cfabec  add x1,x1,#0x809
7101cfabf0  add x8,sp,#0x20
7101cfabf4  bl 0x7103776910
7101cfabf8  add x0,sp,#0x20
7101cfabfc  mov w1,#0x1
7101cfac00  mov x2,sp
7101cfac04  bl 0x7103779d90
7101cfac08  ldr x0,[sp, #0x28]
7101cfac0c  stp x26,xzr,[sp, #0x20]
7101cfac10  cbz x0,0x7101cfac18
7101cfac14  bl 0x710392eb40
7101cfac18  ldr x8,[x23, #0x148]
7101cfac1c  ldr x8,[x8]
7101cfac20  add x0,x8,#0x8
7101cfac24  adrp x1,0x7104433000
7101cfac28  add x1,x1,#0x319
7101cfac2c  add x8,sp,#0x10
7101cfac30  bl 0x7103776910
7101cfac34  add x0,sp,#0x10
7101cfac38  mov w1,#0x1
7101cfac3c  mov x2,sp
7101cfac40  bl 0x7103779d90
7101cfac44  ldr x0,[sp, #0x18]
7101cfac48  stp x26,xzr,[sp, #0x10]
7101cfac4c  cbnz x0,0x7101cfacb4
7101cfac50  b 0x7101cfacb8
7101cfac54  add x8,sp,#0x40
7101cfac58  bl 0x7103776910
7101cfac5c  add x0,sp,#0x40
7101cfac60  mov w1,#0x1
7101cfac64  add x2,sp,#0x8
7101cfac68  bl 0x7103779d90
7101cfac6c  ldr x0,[sp, #0x48]
7101cfac70  stp x26,xzr,[sp, #0x40]
7101cfac74  cbz x0,0x7101cfac7c
7101cfac78  bl 0x710392eb40
7101cfac7c  ldr x8,[x23, #0x148]
7101cfac80  ldr x8,[x8]
7101cfac84  add x0,x8,#0x8
7101cfac88  adrp x1,0x710433a000
7101cfac8c  add x1,x1,#0x32b
7101cfac90  add x8,sp,#0x30
7101cfac94  bl 0x7103776910
7101cfac98  add x0,sp,#0x30
7101cfac9c  mov w1,#0x1
7101cfaca0  mov x2,sp
7101cfaca4  bl 0x7103779d90
7101cfaca8  ldr x0,[sp, #0x38]
7101cfacac  stp x26,xzr,[sp, #0x30]
7101cfacb0  cbz x0,0x7101cfacb8
7101cfacb4  bl 0x710392eb40
7101cfacb8  mov x0,x23
7101cfacbc  mov w1,w20
7101cfacc0  mov w2,w21
7101cfacc4  mov x3,x22
7101cfacc8  bl 0x7101cf8af0
7101cfaccc  ldr w8,[x19, #0xf0]
7101cfacd0  cbnz w8,0x7101cfacf4
7101cfacd4  adrp x8,0x710532f000
7101cfacd8  ldr x0,[x8, #0x8d0]
7101cfacdc  mov x1,#0x8dca
7101cface0  movk x1,#0xcdf, LSL #16
7101cface4  movk x1,#0xff19, LSL #32
7101cface8  movk x1,#0xd9ff, LSL #48
7101cfacec  mov w2,#0x1
7101cfacf0  bl 0x71033145d0
7101cfacf4  ldr x8,[x19, #0xe0]
7101cfacf8  ldr w8,[x8, #0x138]
7101cfacfc  cmp w8,#0x3
7101cfad00  b.ne 0x7101cfad34
7101cfad04  ldr w8,[x19, #0xf0]
7101cfad08  cmp w8,#0x3
7101cfad0c  b.hi 0x7101cfad1c
7101cfad10  adrp x8,0x7105325000
7101cfad14  mov w9,#0x1
7101cfad18  strb w9,[x8, #0xd10]
7101cfad1c  ldrsw x8,[x19, #0xb4]
7101cfad20  cmp w8,#0x13
7101cfad24  b.cs 0x7101cfae40
7101cfad28  add x8,x19,x8, LSL #0x2
7101cfad2c  orr w9,wzr,#0x3
7101cfad30  str w9,[x8, #0x68]
7101cfad34  ldp x29,x30,[sp, #0x90]
7101cfad38  ldp x20,x19,[sp, #0x80]
7101cfad3c  ldp x22,x21,[sp, #0x70]
7101cfad40  ldp x24,x23,[sp, #0x60]
7101cfad44  ldp x26,x25,[sp, #0x50]
7101cfad48  add sp,sp,#0xa0
7101cfad4c  ret
7101cfad50  b 0x7101cfab44
7101cfad54  mov w1,#0x1
7101cfad58  mov x0,x23
7101cfad5c  bl 0x71037790a0
7101cfad60  stp x24,xzr,[sp, #0x40]
7101cfad64  cbnz x23,0x7101cfa99c
7101cfad68  b 0x7101cfa9a4
7101cfad6c  mov w1,#0x1
7101cfad70  mov x0,x24
7101cfad74  bl 0x71037790a0
7101cfad78  adrp x8,0x710523d000
7101cfad7c  add x8,x8,#0x9a8
7101cfad80  stp x8,xzr,[sp, #0x40]
7101cfad84  cbz x24,0x7101cfad90
7101cfad88  mov x0,x24
7101cfad8c  bl 0x710392eb40
7101cfad90  adrp x8,0x7105339000
7101cfad94  ldr x8,[x8, #0x168]
7101cfad98  cbz x8,0x7101cfacb8
7101cfad9c  ldr x9,[x25, #0x740]
7101cfada0  ldr x9,[x9, #0x8]
7101cfada4  ldr s0,[x9, #0x184]
7101cfada8  mov w9,#0x72b4
7101cfadac  add x9,x8,x9
7101cfadb0  ldr s1,[x9]
7101cfadb4  fcmp s1,s0
7101cfadb8  b.eq 0x7101cfacb8
7101cfadbc  mov w10,#0x72b9
7101cfadc0  mov w11,#0x1
7101cfadc4  strb w11,[x8, x10, LSL ]
7101cfadc8  str s0,[x9]
7101cfadcc  b 0x7101cfacb8
7101cfadd0  mov w1,#0x1
7101cfadd4  mov x0,x21
7101cfadd8  bl 0x71037790a0
7101cfaddc  adrp x8,0x710523d000
7101cfade0  add x8,x8,#0x9a8
7101cfade4  stp x8,xzr,[sp, #0x40]
7101cfade8  cbz x21,0x7101cfadf4
7101cfadec  mov x0,x21
7101cfadf0  bl 0x710392eb40
7101cfadf4  adrp x8,0x7105339000
7101cfadf8  ldr x8,[x8, #0x168]
7101cfadfc  cbz x8,0x7101cfae30
7101cfae00  ldr x9,[x25, #0x740]
7101cfae04  ldr x9,[x9, #0x8]
7101cfae08  ldr s0,[x9, #0x180]
7101cfae0c  mov w9,#0x72b4
7101cfae10  add x9,x8,x9
7101cfae14  ldr s1,[x9]
7101cfae18  fcmp s1,s0
7101cfae1c  b.eq 0x7101cfae30
7101cfae20  mov w10,#0x72b9
7101cfae24  mov w11,#0x1
7101cfae28  strb w11,[x8, x10, LSL ]
7101cfae2c  str s0,[x9]
7101cfae30  mov x0,x23
7101cfae34  mov w1,w20
7101cfae38  mov w2,wzr
7101cfae3c  b 0x7101cfacc4
7101cfae40  bl 0x71039c2650
7101cfae44  mov x0,x8
7101cfae48  bl 0x71039c1330
7101cfae4c  bl 0x71039c1330
