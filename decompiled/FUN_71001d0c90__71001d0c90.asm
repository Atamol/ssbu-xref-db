// addr:      71001d0c90
// offset:    0x1d0c90
// name:      FUN_71001d0c90
// mangled:   
// size:      620

71001d0c90  sub sp,sp,#0x60
71001d0c94  stp x24,x23,[sp, #0x20]
71001d0c98  stp x22,x21,[sp, #0x30]
71001d0c9c  stp x20,x19,[sp, #0x40]
71001d0ca0  stp x29,x30,[sp, #0x50]
71001d0ca4  add x29,sp,#0x50
71001d0ca8  adrp x24,0x71052a4000
71001d0cac  ldr x24,[x24, #0xda8]
71001d0cb0  adrp x23,0x71052a4000
71001d0cb4  ldrb w8,[x24]
71001d0cb8  ldr x23,[x23, #0xdb0]
71001d0cbc  mov x21,x1
71001d0cc0  mov x22,x0
71001d0cc4  add x19,x23,#0x28
71001d0cc8  cbz w8,0x71001d0d04
71001d0ccc  adrp x8,0x71052a4000
71001d0cd0  ldr x8,[x8, #0xdb8]
71001d0cd4  ldr x0,[x8]
71001d0cd8  bl 0x7101717960
71001d0cdc  ldr w8,[x0]
71001d0ce0  cbz w8,0x71001d0d04
71001d0ce4  ldr x10,[x23, #0xa0]
71001d0ce8  ldp x9,x10,[x10]
71001d0cec  sub x10,x10,x9
71001d0cf0  asr x10,x10,#0x3
71001d0cf4  cmp x10,x8
71001d0cf8  b.ls 0x71001d0d1c
71001d0cfc  ldr x8,[x9, x8, LSL #0x3]
71001d0d00  add x19,x8,#0x20
71001d0d04  ldr x8,[x19]
71001d0d08  cbz x8,0x71001d0d34
71001d0d0c  ldr x8,[x8, #0x10]
71001d0d10  cbz x8,0x71001d0d34
71001d0d14  ldr x19,[x8, #0x10]
71001d0d18  b 0x71001d0d38
71001d0d1c  adrp x0,0x71042c4000
71001d0d20  add x0,x0,#0x35f
71001d0d24  mov w1,#0x47
71001d0d28  orr w2,wzr,#0xe0000003
71001d0d2c  mov w3,wzr
71001d0d30  bl 0x71001b1300
71001d0d34  mov x19,xzr
71001d0d38  ldr x8,[x19, #0x78]!
71001d0d3c  ldr x8,[x8, #0x10]
71001d0d40  mov x0,x19
71001d0d44  blr x8
71001d0d48  mov w0,#0x80
71001d0d4c  bl 0x71001af850
71001d0d50  mov x20,x0
71001d0d54  cbz x0,0x71001d0dd8
71001d0d58  ldp x9,x10,[x21]
71001d0d5c  ldr x11,[x21, #0x10]
71001d0d60  ldr w8,[x22, #0x18]
71001d0d64  stp x10,x11,[sp, #0x10]
71001d0d68  adrp x10,0x71052a6000
71001d0d6c  ldr x10,[x10, #0x970]
71001d0d70  str x9,[sp, #0x8]
71001d0d74  add x9,x10,#0x10
71001d0d78  mov w10,#0x1
71001d0d7c  str x9,[x20]
71001d0d80  add x9,x20,#0x8
71001d0d84  stlr w10,[x9]
71001d0d88  mov w9,#0x100
71001d0d8c  strb wzr,[x20, #0xc]
71001d0d90  stp xzr,xzr,[x20, #0x10]
71001d0d94  str wzr,[x20, #0x30]
71001d0d98  str wzr,[x20, #0x38]
71001d0d9c  str xzr,[x20, #0x40]
71001d0da0  stp xzr,xzr,[x20, #0x50]
71001d0da4  str wzr,[x20, #0x48]
71001d0da8  str xzr,[x20, #0x28]
71001d0dac  strb wzr,[x20, #0x20]
71001d0db0  strh w9,[x20, #0x60]
71001d0db4  adrp x9,0x71052a6000
71001d0db8  ldr x9,[x9, #0xbd8]
71001d0dbc  add x9,x9,#0x10
71001d0dc0  str x9,[x20]
71001d0dc4  str w8,[x20, #0x64]
71001d0dc8  ldr x10,[sp, #0x18]
71001d0dcc  ldp x8,x9,[sp, #0x8]
71001d0dd0  str x8,[x20, #0x68]
71001d0dd4  stp x9,x10,[x20, #0x70]
71001d0dd8  ldrb w8,[x24]
71001d0ddc  add x21,x23,#0x28
71001d0de0  cbz w8,0x71001d0e1c
71001d0de4  adrp x8,0x71052a4000
71001d0de8  ldr x8,[x8, #0xdb8]
71001d0dec  ldr x0,[x8]
71001d0df0  bl 0x7101717960
71001d0df4  ldr w8,[x0]
71001d0df8  cbz w8,0x71001d0e1c
71001d0dfc  ldr x10,[x23, #0xa0]
71001d0e00  ldp x9,x10,[x10]
71001d0e04  sub x10,x10,x9
71001d0e08  asr x10,x10,#0x3
71001d0e0c  cmp x10,x8
71001d0e10  b.ls 0x71001d0e54
71001d0e14  ldr x8,[x9, x8, LSL #0x3]
71001d0e18  add x21,x8,#0x20
71001d0e1c  ldr x8,[x21]
71001d0e20  cbz x8,0x71001d0e6c
71001d0e24  ldr x8,[x8, #0x10]
71001d0e28  cbz x8,0x71001d0e6c
71001d0e2c  ldr x21,[x8, #0x10]
71001d0e30  adrp x8,0x71052a6000
71001d0e34  ldr x8,[x8, #0xb88]
71001d0e38  ldrb w8,[x8]
71001d0e3c  cbnz w8,0x71001d0e80
71001d0e40  mov x0,x21
71001d0e44  mov x1,x20
71001d0e48  mov w2,wzr
71001d0e4c  bl 0x71001d8820
71001d0e50  b 0x71001d0ed8
71001d0e54  adrp x0,0x71042c4000
71001d0e58  add x0,x0,#0x35f
71001d0e5c  mov w1,#0x47
71001d0e60  orr w2,wzr,#0xe0000003
71001d0e64  mov w3,wzr
71001d0e68  bl 0x71001b1300
71001d0e6c  mov x21,xzr
71001d0e70  adrp x8,0x71052a6000
71001d0e74  ldr x8,[x8, #0xb88]
71001d0e78  ldrb w8,[x8]
71001d0e7c  cbz w8,0x71001d0e40
71001d0e80  mov x22,x21
71001d0e84  ldr x8,[x22, #0xc0]!
71001d0e88  ldr x8,[x8, #0x10]
71001d0e8c  mov x0,x22
71001d0e90  blr x8
71001d0e94  mov x23,x21
71001d0e98  ldr x8,[x23, #0x30]!
71001d0e9c  ldr x8,[x8, #0x10]
71001d0ea0  mov x0,x23
71001d0ea4  blr x8
71001d0ea8  mov x0,x21
71001d0eac  mov x1,x20
71001d0eb0  mov w2,wzr
71001d0eb4  bl 0x71001d8820
71001d0eb8  ldr x8,[x23]
71001d0ebc  ldr x8,[x8, #0x20]
71001d0ec0  mov x0,x23
71001d0ec4  blr x8
71001d0ec8  ldr x8,[x22]
71001d0ecc  ldr x8,[x8, #0x20]
71001d0ed0  mov x0,x22
71001d0ed4  blr x8
71001d0ed8  ldr x8,[x19]
71001d0edc  ldr x1,[x8, #0x20]
71001d0ee0  mov x0,x19
71001d0ee4  ldp x29,x30,[sp, #0x50]
71001d0ee8  ldp x20,x19,[sp, #0x40]
71001d0eec  ldp x22,x21,[sp, #0x30]
71001d0ef0  ldp x24,x23,[sp, #0x20]
71001d0ef4  add sp,sp,#0x60
71001d0ef8  br x1
