// addr:      71001d1e40
// offset:    0x1d1e40
// name:      FUN_71001d1e40
// mangled:   
// size:      276

71001d1e40  sub sp,sp,#0x70
71001d1e44  stp x22,x21,[sp, #0x40]
71001d1e48  stp x20,x19,[sp, #0x50]
71001d1e4c  stp x29,x30,[sp, #0x60]
71001d1e50  add x29,sp,#0x60
71001d1e54  ldr w8,[x0, #0x14]
71001d1e58  cmp w8,#0x1
71001d1e5c  b.ne 0x71001d1ea0
71001d1e60  sturb wzr,[x29, #-0x24]
71001d1e64  adrp x3,0x71052a6000
71001d1e68  ldr x3,[x3, #0xbe0]
71001d1e6c  mov x19,x0
71001d1e70  cmp w1,#0x0
71001d1e74  cset w0,ne
71001d1e78  sub x5,x29,#0x24
71001d1e7c  mov w2,wzr
71001d1e80  mov x4,x19
71001d1e84  mov w20,w1
71001d1e88  bl 0x71001d1f60
71001d1e8c  tbz w0,#0x0,0x71001d1ebc
71001d1e90  ldurb w8,[x29, #-0x24]
71001d1e94  cmp w8,#0x0
71001d1e98  cset w19,ne
71001d1e9c  b 0x71001d1f3c
71001d1ea0  orr w9,w8,#0x1
71001d1ea4  cmp w9,#0x3
71001d1ea8  cset w9,eq
71001d1eac  cmp w8,#0x4
71001d1eb0  cset w8,eq
71001d1eb4  orr w19,w8,w9
71001d1eb8  b 0x71001d1f3c
71001d1ebc  mov w1,#0xa
71001d1ec0  mov x0,sp
71001d1ec4  mov w2,w20
71001d1ec8  bl 0x71001b46a0
71001d1ecc  mov x0,sp
71001d1ed0  bl 0x71001b2e80
71001d1ed4  adrp x20,0x7104291000
71001d1ed8  add x20,x20,#0xf9
71001d1edc  mov w21,#0x1d5
71001d1ee0  adrp x22,0x71043bd000
71001d1ee4  add x22,x22,#0xaaf
71001d1ee8  ldr w8,[x19, #0x14]
71001d1eec  cmp w8,#0x1
71001d1ef0  b.ne 0x71001d1f1c
71001d1ef4  mov x0,sp
71001d1ef8  bl 0x71001b4760
71001d1efc  bl 0x71001d2110
71001d1f00  mov x0,sp
71001d1f04  mov x1,x20
71001d1f08  mov w2,w21
71001d1f0c  mov x3,x22
71001d1f10  bl 0x71001b2e90
71001d1f14  tbnz w0,#0x0,0x71001d1ee8
71001d1f18  ldr w8,[x19, #0x14]
71001d1f1c  orr w9,w8,#0x1
71001d1f20  cmp w9,#0x3
71001d1f24  cset w9,eq
71001d1f28  cmp w8,#0x4
71001d1f2c  cset w8,eq
71001d1f30  mov x0,sp
71001d1f34  orr w19,w8,w9
71001d1f38  bl 0x71001b4730
71001d1f3c  mov w0,w19
71001d1f40  ldp x29,x30,[sp, #0x60]
71001d1f44  ldp x20,x19,[sp, #0x50]
71001d1f48  ldp x22,x21,[sp, #0x40]
71001d1f4c  add sp,sp,#0x70
71001d1f50  ret
