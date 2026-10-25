// addr:      71001d7b90
// offset:    0x1d7b90
// name:      FUN_71001d7b90
// mangled:   
// size:      576

71001d7b90  sub sp,sp,#0xc0
71001d7b94  stp x26,x25,[sp, #0x70]
71001d7b98  stp x24,x23,[sp, #0x80]
71001d7b9c  stp x22,x21,[sp, #0x90]
71001d7ba0  stp x20,x19,[sp, #0xa0]
71001d7ba4  stp x29,x30,[sp, #0xb0]
71001d7ba8  add x29,sp,#0xb0
71001d7bac  tbz w0,#0x0,0x71001d7bc8
71001d7bb0  mov x19,x4
71001d7bb4  mov x20,x3
71001d7bb8  mov x21,x2
71001d7bbc  mov w22,w1
71001d7bc0  bl 0x71001d7a70
71001d7bc4  tbz w0,#0x0,0x71001d7bd0
71001d7bc8  mov w0,wzr
71001d7bcc  b 0x71001d7d9c
71001d7bd0  adrp x8,0x71052a4000
71001d7bd4  ldr x8,[x8, #0xda8]
71001d7bd8  adrp x24,0x71052a4000
71001d7bdc  ldrb w8,[x8]
71001d7be0  ldr x24,[x24, #0xdb0]
71001d7be4  add x23,x24,#0x28
71001d7be8  cbz w8,0x71001d7c24
71001d7bec  adrp x8,0x71052a4000
71001d7bf0  ldr x8,[x8, #0xdb8]
71001d7bf4  ldr x0,[x8]
71001d7bf8  bl 0x7101717960
71001d7bfc  ldr w8,[x0]
71001d7c00  cbz w8,0x71001d7c24
71001d7c04  ldr x10,[x24, #0xa0]
71001d7c08  ldp x9,x10,[x10]
71001d7c0c  sub x10,x10,x9
71001d7c10  asr x10,x10,#0x3
71001d7c14  cmp x10,x8
71001d7c18  b.ls 0x71001d7db8
71001d7c1c  ldr x8,[x9, x8, LSL #0x3]
71001d7c20  add x23,x8,#0x20
71001d7c24  ldr x8,[x23]
71001d7c28  ldr x8,[x8, #0x10]
71001d7c2c  ldr x8,[x8, #0x10]
71001d7c30  ldr x0,[x8, #0x1b8]
71001d7c34  ldr x8,[x0]
71001d7c38  ldr x8,[x8, #0x18]
71001d7c3c  blr x8
71001d7c40  tbz w0,#0x0,0x71001d7c8c
71001d7c44  mov w8,#0xc
71001d7c48  movk w8,#0xe000, LSL #16
71001d7c4c  add w2,w8,#0xe
71001d7c50  adrp x0,0x7104307000
71001d7c54  add x0,x0,#0xa2c
71001d7c58  mov w1,#0x91
71001d7c5c  mov w3,wzr
71001d7c60  bl 0x71001b1300
71001d7c64  mov w8,#0xb
71001d7c68  movk w8,#0x8001, LSL #16
71001d7c6c  add x0,sp,#0x20
71001d7c70  add x1,sp,#0x58
71001d7c74  str w8,[sp, #0x58]
71001d7c78  bl 0x71001b4200
71001d7c7c  add x1,sp,#0x20
71001d7c80  mov x0,x19
71001d7c84  bl 0x71001b4300
71001d7c88  b 0x71001d7d98
71001d7c8c  mov w25,#0xb
71001d7c90  movk w25,#0x8001, LSL #16
71001d7c94  add x0,sp,#0x58
71001d7c98  add x1,sp,#0x20
71001d7c9c  str w25,[sp, #0x20]
71001d7ca0  bl 0x71001b4200
71001d7ca4  mov w1,#0xa
71001d7ca8  add x0,sp,#0x20
71001d7cac  mov w2,w22
71001d7cb0  bl 0x71001b46a0
71001d7cb4  add x0,sp,#0x20
71001d7cb8  bl 0x71001b2e80
71001d7cbc  adrp x26,0x71052a5000
71001d7cc0  ldr x26,[x26, #0x110]
71001d7cc4  ldr w8,[sp, #0x58]
71001d7cc8  cmp w8,#0x0
71001d7ccc  csel x9,x26,xzr,ge
71001d7cd0  cbnz x9,0x71001d7d44
71001d7cd4  adrp x22,0x7104307000
71001d7cd8  add x22,x22,#0xa2c
71001d7cdc  mov w23,#0x9e
71001d7ce0  adrp x24,0x710425e000
71001d7ce4  add x24,x24,#0x85e
71001d7ce8  mov x0,x20
71001d7cec  mov w1,wzr
71001d7cf0  blr x21
71001d7cf4  and w8,w0,#0x1
71001d7cf8  add x0,sp,#0x58
71001d7cfc  add x1,sp,#0x8
71001d7d00  strb w8,[sp, #0x8]
71001d7d04  bl 0x71001b42a0
71001d7d08  add x0,sp,#0x20
71001d7d0c  mov x1,x22
71001d7d10  mov w2,w23
71001d7d14  mov x3,x24
71001d7d18  bl 0x71001b2e90
71001d7d1c  tbz w0,#0x0,0x71001d7d40
71001d7d20  add x0,sp,#0x20
71001d7d24  bl 0x71001b4760
71001d7d28  bl 0x71001d2110
71001d7d2c  ldr w8,[sp, #0x58]
71001d7d30  cmp w8,#0x0
71001d7d34  csel x9,x26,xzr,ge
71001d7d38  cbz x9,0x71001d7ce8
71001d7d3c  b 0x71001d7d44
71001d7d40  ldr w8,[sp, #0x58]
71001d7d44  cmp w8,#0x0
71001d7d48  csel x8,x26,xzr,ge
71001d7d4c  cbz x8,0x71001d7d58
71001d7d50  add x1,sp,#0x58
71001d7d54  b 0x71001d7d88
71001d7d58  adrp x0,0x7104307000
71001d7d5c  add x0,x0,#0xa2c
71001d7d60  mov w1,#0xa7
71001d7d64  mov w2,#0xc
71001d7d68  movk w2,#0xe000, LSL #16
71001d7d6c  mov w3,wzr
71001d7d70  bl 0x71001b1300
71001d7d74  add x0,sp,#0x8
71001d7d78  add x1,sp,#0x4
71001d7d7c  str w25,[sp, #0x4]
71001d7d80  bl 0x71001b4200
71001d7d84  add x1,sp,#0x8
71001d7d88  mov x0,x19
71001d7d8c  bl 0x71001b4300
71001d7d90  add x0,sp,#0x20
71001d7d94  bl 0x71001b4730
71001d7d98  mov w0,#0x1
71001d7d9c  ldp x29,x30,[sp, #0xb0]
71001d7da0  ldp x20,x19,[sp, #0xa0]
71001d7da4  ldp x22,x21,[sp, #0x90]
71001d7da8  ldp x24,x23,[sp, #0x80]
71001d7dac  ldp x26,x25,[sp, #0x70]
71001d7db0  add sp,sp,#0xc0
71001d7db4  ret
71001d7db8  adrp x0,0x71042c4000
71001d7dbc  add x0,x0,#0x35f
71001d7dc0  mov w1,#0x47
71001d7dc4  orr w2,wzr,#0xe0000003
71001d7dc8  mov w3,wzr
71001d7dcc  bl 0x71001b1300
