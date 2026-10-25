// addr:      7101e95dd0
// offset:    0x1e95dd0
// name:      FUN_7101e95dd0
// mangled:   
// size:      356

7101e95dd0  sub sp,sp,#0xd0
7101e95dd4  str x23,[sp, #0x90]
7101e95dd8  stp x22,x21,[sp, #0xa0]
7101e95ddc  stp x20,x19,[sp, #0xb0]
7101e95de0  stp x29,x30,[sp, #0xc0]
7101e95de4  add x29,sp,#0xc0
7101e95de8  mvn w8,w1
7101e95dec  tst w8,#0xffff
7101e95df0  adrp x8,0x7105329000
7101e95df4  ldr x8,[x8, #0xfa0]
7101e95df8  ldr x8,[x8]
7101e95dfc  ldr w9,[x8, #0x770]
7101e95e00  str w9,[x0, #0x14]
7101e95e04  ldr w8,[x8, #0x774]
7101e95e08  mov x20,x2
7101e95e0c  mov x19,x0
7101e95e10  and x21,x1,#0xffff
7101e95e14  str w8,[x0, #0x18]
7101e95e18  b.eq 0x7101e95edc
7101e95e1c  adrp x8,0x710532f000
7101e95e20  ldr x8,[x8, #0x730]
7101e95e24  ldr x23,[x8, #0x8]
7101e95e28  ldr x22,[x23, #0x208]
7101e95e2c  mov x0,x22
7101e95e30  bl 0x71032a7070
7101e95e34  and w1,w0,#0xff
7101e95e38  mov x0,x22
7101e95e3c  bl 0x71032a3bd0
7101e95e40  and x9,x0,#-0x100000000000000
7101e95e44  mov x10,#0x5200000000000000
7101e95e48  and x8,x0,#0xffffffffff
7101e95e4c  cmp x9,x10
7101e95e50  ccmp x8,#0x0,#0x4,eq
7101e95e54  b.ne 0x7101e95eb0
7101e95e58  orr w8,wzr,#0xffff
7101e95e5c  cmp x8,x21
7101e95e60  b.eq 0x7101e95ec8
7101e95e64  ldr x22,[x23, #0x1d8]
7101e95e68  mov x0,x22
7101e95e6c  mov x1,x21
7101e95e70  bl 0x71032a9470
7101e95e74  mov x2,x0
7101e95e78  add x0,sp,#0x48
7101e95e7c  mov x1,x22
7101e95e80  add x23,sp,#0x48
7101e95e84  bl 0x71032a9540
7101e95e88  add x1,x23,#0x8
7101e95e8c  adrp x0,0x7104464000
7101e95e90  add x0,x0,#0x1d4
7101e95e94  mov x8,sp
7101e95e98  mov x22,sp
7101e95e9c  bl 0x71003a4ca0
7101e95ea0  ldr x8,[x19]
7101e95ea4  add x1,x22,#0x8
7101e95ea8  add x0,x8,#0x20
7101e95eac  b 0x7101e95ed8
7101e95eb0  mov x1,x0
7101e95eb4  ldr x0,[x23, #0x208]
7101e95eb8  bl 0x71032a5750
7101e95ebc  and x8,x0,#0xffff
7101e95ec0  cmp x8,x21
7101e95ec4  b.ne 0x7101e95e64
7101e95ec8  ldr x8,[x19]
7101e95ecc  add x0,x8,#0x20
7101e95ed0  adrp x1,0x71042b4000
7101e95ed4  add x1,x1,#0xa7c
7101e95ed8  bl 0x710377a120
7101e95edc  adrp x8,0x710532f000
7101e95ee0  ldr x8,[x8, #0x730]
7101e95ee4  ldr x8,[x8, #0x8]
7101e95ee8  ldr x0,[x8, #0x1d8]
7101e95eec  mov x1,x21
7101e95ef0  bl 0x71032a9470
7101e95ef4  mov x1,x0
7101e95ef8  mov w2,#0x1a
7101e95efc  mov x0,x20
7101e95f00  bl 0x710323faf0
7101e95f04  ldr x8,[x19]
7101e95f08  mov x1,x0
7101e95f0c  ldr x0,[x8, #0x38]
7101e95f10  bl 0x7103778b80
7101e95f14  mov w8,#0x1
7101e95f18  strb w8,[x19, #0x8]
7101e95f1c  ldr x23,[sp, #0x90]
7101e95f20  ldp x29,x30,[sp, #0xc0]
7101e95f24  ldp x20,x19,[sp, #0xb0]
7101e95f28  ldp x22,x21,[sp, #0xa0]
7101e95f2c  add sp,sp,#0xd0
7101e95f30  ret
