// addr:      71001e0c80
// offset:    0x1e0c80
// name:      FUN_71001e0c80
// mangled:   
// size:      904

71001e0c80  sub sp,sp,#0x70
71001e0c84  stp x24,x23,[sp, #0x30]
71001e0c88  stp x22,x21,[sp, #0x40]
71001e0c8c  stp x20,x19,[sp, #0x50]
71001e0c90  stp x29,x30,[sp, #0x60]
71001e0c94  add x29,sp,#0x60
71001e0c98  adrp x22,0x71052a4000
71001e0c9c  ldr x22,[x22, #0xda8]
71001e0ca0  adrp x21,0x71052a4000
71001e0ca4  ldrb w8,[x22]
71001e0ca8  ldr x21,[x21, #0xdb0]
71001e0cac  mov x20,x0
71001e0cb0  add x19,x21,#0x28
71001e0cb4  cbz w8,0x71001e0cf0
71001e0cb8  adrp x8,0x71052a4000
71001e0cbc  ldr x8,[x8, #0xdb8]
71001e0cc0  ldr x0,[x8]
71001e0cc4  bl 0x7101717960
71001e0cc8  ldr w8,[x0]
71001e0ccc  cbz w8,0x71001e0cf0
71001e0cd0  ldr x10,[x21, #0xa0]
71001e0cd4  ldp x9,x10,[x10]
71001e0cd8  sub x10,x10,x9
71001e0cdc  asr x10,x10,#0x3
71001e0ce0  cmp x10,x8
71001e0ce4  b.ls 0x71001e0d08
71001e0ce8  ldr x8,[x9, x8, LSL #0x3]
71001e0cec  add x19,x8,#0x20
71001e0cf0  ldr x8,[x19]
71001e0cf4  cbz x8,0x71001e0d20
71001e0cf8  ldr x8,[x8, #0x10]
71001e0cfc  cbz x8,0x71001e0d20
71001e0d00  ldr x19,[x8, #0x10]
71001e0d04  b 0x71001e0d24
71001e0d08  adrp x0,0x71042c4000
71001e0d0c  add x0,x0,#0x35f
71001e0d10  mov w1,#0x47
71001e0d14  orr w2,wzr,#0xe0000003
71001e0d18  mov w3,wzr
71001e0d1c  bl 0x71001b1300
71001e0d20  mov x19,xzr
71001e0d24  ldr x8,[x19, #0x78]!
71001e0d28  ldr x8,[x8, #0x10]
71001e0d2c  mov x0,x19
71001e0d30  blr x8
71001e0d34  ldr x23,[x20, #0x8]
71001e0d38  ldr x1,[x23, #0x28]!
71001e0d3c  sub x0,x23,#0x8
71001e0d40  bl 0x710021b310
71001e0d44  stp xzr,xzr,[x23]
71001e0d48  mov x9,#-0x1
71001e0d4c  stur x23,[x23, #-0x8]
71001e0d50  ldr x8,[x20, #0x8]
71001e0d54  add x20,x21,#0x18
71001e0d58  str x9,[x8, #0x48]
71001e0d5c  ldrb w8,[x22]
71001e0d60  cbz w8,0x71001e0d9c
71001e0d64  adrp x8,0x71052a4000
71001e0d68  ldr x8,[x8, #0xdb8]
71001e0d6c  ldr x0,[x8]
71001e0d70  bl 0x7101717960
71001e0d74  ldr w8,[x0]
71001e0d78  cbz w8,0x71001e0d9c
71001e0d7c  ldr x10,[x21, #0xa0]
71001e0d80  ldp x9,x10,[x10]
71001e0d84  sub x10,x10,x9
71001e0d88  asr x10,x10,#0x3
71001e0d8c  cmp x10,x8
71001e0d90  b.ls 0x71001e0e48
71001e0d94  ldr x8,[x9, x8, LSL #0x3]
71001e0d98  add x20,x8,#0x10
71001e0d9c  ldr x8,[x20]
71001e0da0  cbz x8,0x71001e0fc8
71001e0da4  ldr x8,[x8, #0x10]
71001e0da8  cbz x8,0x71001e0fc8
71001e0dac  ldrb w8,[x22]
71001e0db0  add x20,x21,#0x18
71001e0db4  cbz w8,0x71001e0df0
71001e0db8  adrp x8,0x71052a4000
71001e0dbc  ldr x8,[x8, #0xdb8]
71001e0dc0  ldr x0,[x8]
71001e0dc4  bl 0x7101717960
71001e0dc8  ldr w8,[x0]
71001e0dcc  cbz w8,0x71001e0df0
71001e0dd0  ldr x10,[x21, #0xa0]
71001e0dd4  ldp x9,x10,[x10]
71001e0dd8  sub x10,x10,x9
71001e0ddc  asr x10,x10,#0x3
71001e0de0  cmp x10,x8
71001e0de4  b.ls 0x71001e0ff0
71001e0de8  ldr x8,[x9, x8, LSL #0x3]
71001e0dec  add x20,x8,#0x10
71001e0df0  ldr x8,[x20]
71001e0df4  ldr x8,[x8, #0x10]
71001e0df8  ldr x8,[x8, #0x198]
71001e0dfc  cbz x8,0x71001e0f20
71001e0e00  ldrb w8,[x22]
71001e0e04  add x20,x21,#0x18
71001e0e08  cbz w8,0x71001e0e64
71001e0e0c  adrp x8,0x71052a4000
71001e0e10  ldr x8,[x8, #0xdb8]
71001e0e14  ldr x0,[x8]
71001e0e18  bl 0x7101717960
71001e0e1c  ldr w8,[x0]
71001e0e20  cbz w8,0x71001e0e64
71001e0e24  ldr x10,[x21, #0xa0]
71001e0e28  ldp x9,x10,[x10]
71001e0e2c  sub x10,x10,x9
71001e0e30  asr x10,x10,#0x3
71001e0e34  cmp x10,x8
71001e0e38  b.ls 0x71001e0ff0
71001e0e3c  ldr x8,[x9, x8, LSL #0x3]
71001e0e40  add x8,x8,#0x10
71001e0e44  b 0x71001e0e68
71001e0e48  adrp x0,0x71042c4000
71001e0e4c  add x0,x0,#0x35f
71001e0e50  mov w1,#0x47
71001e0e54  orr w2,wzr,#0xe0000003
71001e0e58  mov w3,wzr
71001e0e5c  bl 0x71001b1300
71001e0e60  b 0x71001e0fc8
71001e0e64  mov x8,x20
71001e0e68  ldr x8,[x8]
71001e0e6c  ldr x8,[x8, #0x10]
71001e0e70  adrp x9,0x71052a4000
71001e0e74  ldr x9,[x9, #0xd80]
71001e0e78  ldr x23,[x8, #0x198]
71001e0e7c  add x8,sp,#0x8
71001e0e80  add x8,x8,#0x8
71001e0e84  add x24,x9,#0x10
71001e0e88  str x24,[sp, #0x8]
71001e0e8c  strb wzr,[sp, #0x10]
71001e0e90  str x8,[sp, #0x20]
71001e0e94  mov w8,#0x10
71001e0e98  adrp x1,0x7104411000
71001e0e9c  add x1,x1,#0x4cc
71001e0ea0  mov x2,#-0x1
71001e0ea4  add x0,sp,#0x8
71001e0ea8  str x8,[sp, #0x28]
71001e0eac  bl 0x71001b47e0
71001e0eb0  add x0,x23,#0x168
71001e0eb4  add x1,sp,#0x8
71001e0eb8  bl 0x71001b2f70
71001e0ebc  add x0,sp,#0x8
71001e0ec0  str x24,[sp, #0x8]
71001e0ec4  bl 0x71001b4910
71001e0ec8  ldrb w8,[x22]
71001e0ecc  cbz w8,0x71001e0f10
71001e0ed0  adrp x8,0x71052a4000
71001e0ed4  ldr x8,[x8, #0xdb8]
71001e0ed8  ldr x0,[x8]
71001e0edc  bl 0x7101717960
71001e0ee0  ldr w8,[x0]
71001e0ee4  cbz w8,0x71001e0f0c
71001e0ee8  ldr x10,[x21, #0xa0]
71001e0eec  ldp x9,x10,[x10]
71001e0ef0  sub x10,x10,x9
71001e0ef4  asr x10,x10,#0x3
71001e0ef8  cmp x10,x8
71001e0efc  b.ls 0x71001e0ff0
71001e0f00  ldr x8,[x9, x8, LSL #0x3]
71001e0f04  add x20,x8,#0x10
71001e0f08  b 0x71001e0f10
71001e0f0c  add x20,x21,#0x18
71001e0f10  ldr x8,[x20]
71001e0f14  ldr x8,[x8, #0x10]
71001e0f18  ldr x8,[x8, #0x198]
71001e0f1c  strh wzr,[x8, #0x190]
71001e0f20  ldrb w8,[x22]
71001e0f24  cbz w8,0x71001e0fb0
71001e0f28  adrp x20,0x71052a4000
71001e0f2c  ldr x20,[x20, #0xdb8]
71001e0f30  ldr x0,[x20]
71001e0f34  bl 0x7101717960
71001e0f38  ldr w8,[x0]
71001e0f3c  cbz w8,0x71001e0f70
71001e0f40  ldr x9,[x21, #0xa0]
71001e0f44  ldp x10,x9,[x9]
71001e0f48  sub x9,x9,x10
71001e0f4c  asr x9,x9,#0x3
71001e0f50  cmp x9,x8
71001e0f54  b.hi 0x71001e0f70
71001e0f58  adrp x0,0x71042c4000
71001e0f5c  add x0,x0,#0x35f
71001e0f60  mov w1,#0x47
71001e0f64  orr w2,wzr,#0xe0000003
71001e0f68  mov w3,wzr
71001e0f6c  bl 0x71001b1300
71001e0f70  ldrb w8,[x22]
71001e0f74  add x22,x21,#0x18
71001e0f78  cbz w8,0x71001e0fb4
71001e0f7c  ldr x0,[x20]
71001e0f80  bl 0x7101717960
71001e0f84  ldr w8,[x0]
71001e0f88  cbz w8,0x71001e0fb4
71001e0f8c  ldr x10,[x21, #0xa0]
71001e0f90  ldp x9,x10,[x10]
71001e0f94  sub x10,x10,x9
71001e0f98  asr x10,x10,#0x3
71001e0f9c  cmp x10,x8
71001e0fa0  b.ls 0x71001e0ff0
71001e0fa4  ldr x8,[x9, x8, LSL #0x3]
71001e0fa8  add x22,x8,#0x10
71001e0fac  b 0x71001e0fb4
71001e0fb0  add x22,x21,#0x18
71001e0fb4  ldr x8,[x22]
71001e0fb8  ldr x8,[x8, #0x10]
71001e0fbc  ldr x8,[x8, #0x1a8]
71001e0fc0  ldr x8,[x8, #0x20]
71001e0fc4  str xzr,[x8, #0x10]
71001e0fc8  ldr x8,[x19]
71001e0fcc  ldr x8,[x8, #0x20]
71001e0fd0  mov x0,x19
71001e0fd4  blr x8
71001e0fd8  ldp x29,x30,[sp, #0x60]
71001e0fdc  ldp x20,x19,[sp, #0x50]
71001e0fe0  ldp x22,x21,[sp, #0x40]
71001e0fe4  ldp x24,x23,[sp, #0x30]
71001e0fe8  add sp,sp,#0x70
71001e0fec  ret
71001e0ff0  adrp x0,0x71042c4000
71001e0ff4  add x0,x0,#0x35f
71001e0ff8  mov w1,#0x47
71001e0ffc  orr w2,wzr,#0xe0000003
71001e1000  mov w3,wzr
71001e1004  bl 0x71001b1300
