// addr:      7101c9ed20
// offset:    0x1c9ed20
// name:      FUN_7101c9ed20
// mangled:   
// size:      488

7101c9ed20  sub sp,sp,#0x40
7101c9ed24  stp x20,x19,[sp, #0x20]
7101c9ed28  stp x29,x30,[sp, #0x30]
7101c9ed2c  add x29,sp,#0x30
7101c9ed30  mov x19,x1
7101c9ed34  add x0,x0,#0x118
7101c9ed38  adrp x1,0x7104338000
7101c9ed3c  add x1,x1,#0xd31
7101c9ed40  add x8,sp,#0x8
7101c9ed44  mov x20,x2
7101c9ed48  bl 0x7103776910
7101c9ed4c  ldrb w8,[x20]
7101c9ed50  cmp w8,#0x7
7101c9ed54  b.hi 0x7101c9ee20
7101c9ed58  adrp x9,0x71044f9000
7101c9ed5c  add x9,x9,#0xaac
7101c9ed60  ldrsw x8,[x9, x8, LSL #0x2]
7101c9ed64  add x8,x8,x9
7101c9ed68  br x8
7101c9ed6c  ldrb w8,[x19, #0x1]
7101c9ed70  cmp w8,#0x1
7101c9ed74  b.eq 0x7101c9ee7c
7101c9ed78  cmp w8,#0x2
7101c9ed7c  b.eq 0x7101c9ee88
7101c9ed80  cmp w8,#0x3
7101c9ed84  b.ne 0x7101c9ee20
7101c9ed88  adrp x1,0x710432a000
7101c9ed8c  add x1,x1,#0xd4
7101c9ed90  b 0x7101c9eed8
7101c9ed94  ldrb w8,[x19, #0x2]
7101c9ed98  cmp w8,#0x1
7101c9ed9c  b.eq 0x7101c9ee94
7101c9eda0  cmp w8,#0x2
7101c9eda4  b.eq 0x7101c9eea0
7101c9eda8  cmp w8,#0x3
7101c9edac  b.ne 0x7101c9ee20
7101c9edb0  adrp x1,0x71043f0000
7101c9edb4  add x1,x1,#0xa54
7101c9edb8  b 0x7101c9eed8
7101c9edbc  adrp x1,0x710425f000
7101c9edc0  add x1,x1,#0x50f
7101c9edc4  b 0x7101c9eed8
7101c9edc8  adrp x1,0x710433a000
7101c9edcc  add x1,x1,#0x25b
7101c9edd0  b 0x7101c9eed8
7101c9edd4  ldrb w8,[x19, #0x2]
7101c9edd8  and w8,w8,#0xfe
7101c9eddc  cmp w8,#0x2
7101c9ede0  b.ne 0x7101c9ee64
7101c9ede4  adrp x1,0x7104280000
7101c9ede8  add x1,x1,#0xb0d
7101c9edec  b 0x7101c9eed8
7101c9edf0  ldrb w8,[x19, #0x6]
7101c9edf4  sub w8,w8,#0x1
7101c9edf8  cmp w8,#0x4
7101c9edfc  b.hi 0x7101c9ee20
7101c9ee00  adrp x9,0x71044f9000
7101c9ee04  add x9,x9,#0xacc
7101c9ee08  ldrsw x8,[x9, x8, LSL #0x2]
7101c9ee0c  add x8,x8,x9
7101c9ee10  br x8
7101c9ee14  adrp x1,0x710439d000
7101c9ee18  add x1,x1,#0x526
7101c9ee1c  b 0x7101c9eed8
7101c9ee20  ldr x8,[sp, #0x10]
7101c9ee24  ldr x0,[x8, #0x10]
7101c9ee28  cbz x0,0x7101c9eee0
7101c9ee2c  sub x1,x29,#0x14
7101c9ee30  mov w2,wzr
7101c9ee34  mov w3,wzr
7101c9ee38  stur wzr,[x29, #-0x14]
7101c9ee3c  bl 0x71037a2270
7101c9ee40  b 0x7101c9eee0
7101c9ee44  adrp x1,0x710434a000
7101c9ee48  add x1,x1,#0x445
7101c9ee4c  b 0x7101c9eed8
7101c9ee50  ldrb w8,[x19, #0x9]
7101c9ee54  tbnz w8,#0x0,0x7101c9ee70
7101c9ee58  adrp x1,0x71043be000
7101c9ee5c  add x1,x1,#0x727
7101c9ee60  b 0x7101c9eed8
7101c9ee64  adrp x1,0x71043be000
7101c9ee68  add x1,x1,#0x706
7101c9ee6c  b 0x7101c9eed8
7101c9ee70  adrp x1,0x710424f000
7101c9ee74  add x1,x1,#0x60b
7101c9ee78  b 0x7101c9eed8
7101c9ee7c  adrp x1,0x7104308000
7101c9ee80  add x1,x1,#0x61b
7101c9ee84  b 0x7101c9eed8
7101c9ee88  adrp x1,0x710432a000
7101c9ee8c  add x1,x1,#0xb1
7101c9ee90  b 0x7101c9eed8
7101c9ee94  adrp x1,0x71042c4000
7101c9ee98  add x1,x1,#0xea8
7101c9ee9c  b 0x7101c9eed8
7101c9eea0  adrp x1,0x7104454000
7101c9eea4  add x1,x1,#0xb0a
7101c9eea8  b 0x7101c9eed8
7101c9eeac  adrp x1,0x7104422000
7101c9eeb0  add x1,x1,#0x4a8
7101c9eeb4  b 0x7101c9eed8
7101c9eeb8  adrp x1,0x7104308000
7101c9eebc  add x1,x1,#0x639
7101c9eec0  b 0x7101c9eed8
7101c9eec4  adrp x1,0x7104270000
7101c9eec8  add x1,x1,#0x64
7101c9eecc  b 0x7101c9eed8
7101c9eed0  adrp x1,0x710437c000
7101c9eed4  add x1,x1,#0x665
7101c9eed8  add x0,sp,#0x8
7101c9eedc  bl 0x710377a120
7101c9eee0  ldr x0,[sp, #0x10]
7101c9eee4  adrp x8,0x710523d000
7101c9eee8  add x8,x8,#0x9a8
7101c9eeec  stp x8,xzr,[sp, #0x8]
7101c9eef0  cbz x0,0x7101c9eef8
7101c9eef4  bl 0x710392eb40
7101c9eef8  ldp x29,x30,[sp, #0x30]
7101c9eefc  ldp x20,x19,[sp, #0x20]
7101c9ef00  add sp,sp,#0x40
7101c9ef04  ret
