// addr:      71020e1ca0
// offset:    0x20e1ca0
// name:      FUN_71020e1ca0
// mangled:   
// size:      696

71020e1ca0  stp x22,x21,[sp, #-0x30]!
71020e1ca4  stp x20,x19,[sp, #0x10]
71020e1ca8  stp x29,x30,[sp, #0x20]
71020e1cac  add x29,sp,#0x20
71020e1cb0  mov w21,w2
71020e1cb4  and w2,w2,#0x1
71020e1cb8  mov x19,x1
71020e1cbc  mov x20,x0
71020e1cc0  bl 0x71020d4810
71020e1cc4  ldr x8,[x19, #0x10]
71020e1cc8  adrp x9,0x71020e1000
71020e1ccc  add x9,x9,#0xf60
71020e1cd0  str x9,[x8]
71020e1cd4  mov w9,#0x2
71020e1cd8  str w9,[x8, #0x8]
71020e1cdc  ldr x8,[x19, #0x10]
71020e1ce0  add x9,x8,#0x10
71020e1ce4  sub x1,x8,#0x10
71020e1ce8  adrp x2,0x710430c000
71020e1cec  add x2,x2,#0x66a
71020e1cf0  mov x0,x19
71020e1cf4  str x9,[x19, #0x10]
71020e1cf8  bl 0x71038f5390
71020e1cfc  tbz w21,#0x0,0x71020e1d54
71020e1d00  ldr x8,[x19, #0x18]
71020e1d04  ldr x8,[x8, #0x18]
71020e1d08  cmp x8,#0x1
71020e1d0c  b.lt 0x71020e1d18
71020e1d10  mov x0,x19
71020e1d14  bl 0x71038fec40
71020e1d18  mov x0,x19
71020e1d1c  bl 0x710391e050
71020e1d20  ldr x8,[x19, #0x10]
71020e1d24  mov w9,#0x45
71020e1d28  str w9,[x8, #0x8]
71020e1d2c  str x0,[x8]
71020e1d30  ldr x8,[x19, #0x10]
71020e1d34  mov x1,x0
71020e1d38  orr w3,wzr,#0x3
71020e1d3c  mov x0,x19
71020e1d40  mov w2,wzr
71020e1d44  add x8,x8,#0x10
71020e1d48  str x8,[x19, #0x10]
71020e1d4c  bl 0x710391d4c0
71020e1d50  b 0x71020e1d6c
71020e1d54  ldr x8,[x19, #0x10]
71020e1d58  sub x1,x8,#0x10
71020e1d5c  adrp x2,0x7104250000
71020e1d60  add x2,x2,#0x73f
71020e1d64  mov x0,x19
71020e1d68  bl 0x71038f4d40
71020e1d6c  ldr s0,[x20, #0x20]
71020e1d70  ldr x8,[x19, #0x10]
71020e1d74  orr w22,wzr,#0x3
71020e1d78  str w22,[x8, #0x8]
71020e1d7c  str s0,[x8]
71020e1d80  ldr x8,[x19, #0x10]
71020e1d84  add x9,x8,#0x10
71020e1d88  sub x1,x8,#0x10
71020e1d8c  adrp x2,0x71043d7000
71020e1d90  add x2,x2,#0xeae
71020e1d94  mov x0,x19
71020e1d98  str x9,[x19, #0x10]
71020e1d9c  bl 0x71038f5390
71020e1da0  ldr s0,[x20, #0x24]
71020e1da4  ldr x8,[x19, #0x10]
71020e1da8  str w22,[x8, #0x8]
71020e1dac  str s0,[x8]
71020e1db0  ldr x8,[x19, #0x10]
71020e1db4  add x9,x8,#0x10
71020e1db8  sub x1,x8,#0x10
71020e1dbc  adrp x2,0x71042ab000
71020e1dc0  add x2,x2,#0xc20
71020e1dc4  mov x0,x19
71020e1dc8  str x9,[x19, #0x10]
71020e1dcc  bl 0x71038f5390
71020e1dd0  ldr x8,[x19, #0x10]
71020e1dd4  tbz w21,#0x0,0x71020e1e40
71020e1dd8  sub x1,x8,#0x20
71020e1ddc  adrp x2,0x7104250000
71020e1de0  add x2,x2,#0x73f
71020e1de4  mov x0,x19
71020e1de8  bl 0x71038f5390
71020e1dec  ldr x8,[x19, #0x18]
71020e1df0  ldr x8,[x8, #0x18]
71020e1df4  cmp x8,#0x1
71020e1df8  b.lt 0x71020e1e04
71020e1dfc  mov x0,x19
71020e1e00  bl 0x71038fec40
71020e1e04  mov x0,x19
71020e1e08  bl 0x710391e050
71020e1e0c  ldr x8,[x19, #0x10]
71020e1e10  mov w9,#0x45
71020e1e14  str w9,[x8, #0x8]
71020e1e18  str x0,[x8]
71020e1e1c  ldr x8,[x19, #0x10]
71020e1e20  mov x1,x0
71020e1e24  orr w3,wzr,#0x3
71020e1e28  mov x0,x19
71020e1e2c  mov w2,wzr
71020e1e30  add x8,x8,#0x10
71020e1e34  str x8,[x19, #0x10]
71020e1e38  bl 0x710391d4c0
71020e1e3c  b 0x71020e1e5c
71020e1e40  sub x9,x8,#0x10
71020e1e44  sub x1,x8,#0x20
71020e1e48  adrp x2,0x71042a4000
71020e1e4c  add x2,x2,#0x265
71020e1e50  mov x0,x19
71020e1e54  str x9,[x19, #0x10]
71020e1e58  bl 0x71038f4d40
71020e1e5c  ldr s0,[x20, #0x30]
71020e1e60  ldr x8,[x19, #0x10]
71020e1e64  orr w22,wzr,#0x3
71020e1e68  str w22,[x8, #0x8]
71020e1e6c  str s0,[x8]
71020e1e70  ldr x8,[x19, #0x10]
71020e1e74  add x9,x8,#0x10
71020e1e78  sub x1,x8,#0x10
71020e1e7c  adrp x2,0x71043d7000
71020e1e80  add x2,x2,#0xeae
71020e1e84  mov x0,x19
71020e1e88  str x9,[x19, #0x10]
71020e1e8c  bl 0x71038f5390
71020e1e90  ldr s0,[x20, #0x34]
71020e1e94  ldr x8,[x19, #0x10]
71020e1e98  str w22,[x8, #0x8]
71020e1e9c  str s0,[x8]
71020e1ea0  ldr x8,[x19, #0x10]
71020e1ea4  add x9,x8,#0x10
71020e1ea8  sub x1,x8,#0x10
71020e1eac  adrp x2,0x71042ab000
71020e1eb0  add x2,x2,#0xc20
71020e1eb4  mov x0,x19
71020e1eb8  str x9,[x19, #0x10]
71020e1ebc  bl 0x71038f5390
71020e1ec0  ldr x8,[x19, #0x10]
71020e1ec4  tbz w21,#0x0,0x71020e1ee4
71020e1ec8  sub x1,x8,#0x20
71020e1ecc  adrp x2,0x71042a4000
71020e1ed0  add x2,x2,#0x265
71020e1ed4  mov x0,x19
71020e1ed8  bl 0x71038f5390
71020e1edc  ldr x8,[x19, #0x10]
71020e1ee0  b 0x71020e1eec
71020e1ee4  sub x8,x8,#0x10
71020e1ee8  str x8,[x19, #0x10]
71020e1eec  ldr w9,[x20, #0x40]
71020e1ef0  orr w21,wzr,#0x3
71020e1ef4  str w21,[x8, #0x8]
71020e1ef8  adrp x2,0x710439e000
71020e1efc  add x2,x2,#0x589
71020e1f00  str w9,[x8]
71020e1f04  ldr x8,[x19, #0x10]
71020e1f08  add x9,x8,#0x10
71020e1f0c  sub x1,x8,#0x10
71020e1f10  mov x0,x19
71020e1f14  str x9,[x19, #0x10]
71020e1f18  bl 0x71038f5390
71020e1f1c  ldr w8,[x20, #0x44]
71020e1f20  ldr x9,[x19, #0x10]
71020e1f24  str w8,[x9]
71020e1f28  str w21,[x9, #0x8]
71020e1f2c  ldr x8,[x19, #0x10]
71020e1f30  add x9,x8,#0x10
71020e1f34  str x9,[x19, #0x10]
71020e1f38  mov x0,x19
71020e1f3c  sub x1,x8,#0x10
71020e1f40  ldp x29,x30,[sp, #0x20]
71020e1f44  adrp x2,0x710434b000
71020e1f48  add x2,x2,#0x480
71020e1f4c  ldp x20,x19,[sp, #0x10]
71020e1f50  ldp x22,x21,[sp], #0x30
71020e1f54  b 0x71038f5390
