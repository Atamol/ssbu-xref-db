// addr:      71002a6ba0
// offset:    0x2a6ba0
// name:      FUN_71002a6ba0
// mangled:   
// size:      600

71002a6ba0  sub sp,sp,#0x80
71002a6ba4  stp x24,x23,[sp, #0x40]
71002a6ba8  stp x22,x21,[sp, #0x50]
71002a6bac  stp x20,x19,[sp, #0x60]
71002a6bb0  stp x29,x30,[sp, #0x70]
71002a6bb4  add x29,sp,#0x70
71002a6bb8  adrp x8,0x71052a4000
71002a6bbc  ldr x8,[x8, #0xda8]
71002a6bc0  adrp x21,0x71052a4000
71002a6bc4  ldrb w8,[x8]
71002a6bc8  ldr x21,[x21, #0xdb0]
71002a6bcc  mov x19,x0
71002a6bd0  add x20,x21,#0x28
71002a6bd4  cbz w8,0x71002a6c10
71002a6bd8  adrp x8,0x71052a4000
71002a6bdc  ldr x8,[x8, #0xdb8]
71002a6be0  ldr x0,[x8]
71002a6be4  bl 0x7101717960
71002a6be8  ldr w8,[x0]
71002a6bec  cbz w8,0x71002a6c10
71002a6bf0  ldr x10,[x21, #0xa0]
71002a6bf4  ldp x9,x10,[x10]
71002a6bf8  sub x10,x10,x9
71002a6bfc  asr x10,x10,#0x3
71002a6c00  cmp x10,x8
71002a6c04  b.ls 0x71002a6dd8
71002a6c08  ldr x8,[x9, x8, LSL #0x3]
71002a6c0c  add x20,x8,#0x20
71002a6c10  ldr x8,[x20]
71002a6c14  ldr x8,[x8, #0x10]
71002a6c18  ldr x0,[x8, #0x18]
71002a6c1c  ldr w1,[x19, #0xa0]
71002a6c20  bl 0x71001cd7d0
71002a6c24  cbz x0,0x71002a6c68
71002a6c28  ldr w8,[x19, #0xd4]
71002a6c2c  cmp w8,#0x2
71002a6c30  b.ne 0x71002a6c84
71002a6c34  ldp x22,x8,[x19, #0xb0]
71002a6c38  add x20,x19,#0xa8
71002a6c3c  cmp x22,x8
71002a6c40  b.cs 0x71002a6cb8
71002a6c44  strb wzr,[x22]
71002a6c48  ldr x8,[x19, #0xb0]
71002a6c4c  add x8,x8,#0x1
71002a6c50  str x8,[x19, #0xb0]
71002a6c54  ldr w9,[x19, #0x150]
71002a6c58  sub w8,w9,#0x1
71002a6c5c  cmp w8,#0x12a
71002a6c60  b.ls 0x71002a6d68
71002a6c64  b 0x71002a6da8
71002a6c68  mov w8,#0x4
71002a6c6c  movk w8,#0x8001, LSL #16
71002a6c70  add x0,sp,#0x28
71002a6c74  add x1,sp,#0x10
71002a6c78  str w8,[sp, #0x10]
71002a6c7c  bl 0x71001b4200
71002a6c80  b 0x71002a6c94
71002a6c84  ldp x8,x9,[x19, #0x118]
71002a6c88  ldr x10,[x19, #0x128]
71002a6c8c  stp x9,x10,[sp, #0x30]
71002a6c90  str x8,[sp, #0x28]
71002a6c94  add x1,sp,#0x28
71002a6c98  mov x0,x19
71002a6c9c  bl 0x71002a63c0
71002a6ca0  ldp x29,x30,[sp, #0x70]
71002a6ca4  ldp x20,x19,[sp, #0x60]
71002a6ca8  ldp x22,x21,[sp, #0x50]
71002a6cac  ldp x24,x23,[sp, #0x40]
71002a6cb0  add sp,sp,#0x80
71002a6cb4  ret
71002a6cb8  ldr x23,[x20]
71002a6cbc  sub x24,x22,x23
71002a6cc0  adds x9,x24,#0x1
71002a6cc4  b.mi 0x71002a6df0
71002a6cc8  sub x8,x8,x23
71002a6ccc  orr x10,xzr,#0x3ffffffffffffffe
71002a6cd0  cmp x8,x10
71002a6cd4  b.hi 0x71002a6cf0
71002a6cd8  lsl x8,x8,#0x1
71002a6cdc  cmp x8,x9
71002a6ce0  csel x21,x9,x8,cc
71002a6ce4  cbnz x21,0x71002a6cf4
71002a6ce8  mov x8,xzr
71002a6cec  b 0x71002a6d00
71002a6cf0  orr x21,xzr,#0x7fffffffffffffff
71002a6cf4  mov x0,x21
71002a6cf8  bl 0x71001b1820
71002a6cfc  mov x8,x0
71002a6d00  add x12,x8,x24
71002a6d04  mov x10,x12
71002a6d08  add x9,x8,x21
71002a6d0c  strb wzr,[x10], #0x1
71002a6d10  ldp x0,x11,[x19, #0xa8]
71002a6d14  cmp x11,x0
71002a6d18  b.eq 0x71002a6d48
71002a6d1c  sub x13,x22,#0x1
71002a6d20  sub x13,x13,x23
71002a6d24  sub x12,x24,x11
71002a6d28  add x13,x8,x13
71002a6d2c  ldrb w14,[x11, #-0x1]!
71002a6d30  cmp x0,x11
71002a6d34  strb w14,[x13], #-0x1
71002a6d38  b.ne 0x71002a6d2c
71002a6d3c  add x11,x0,x12
71002a6d40  ldr x0,[x20]
71002a6d44  add x12,x8,x11
71002a6d48  stp x12,x10,[x19, #0xa8]
71002a6d4c  str x9,[x19, #0xb8]
71002a6d50  cbz x0,0x71002a6d58
71002a6d54  bl 0x71001b1870
71002a6d58  ldr w9,[x19, #0x150]
71002a6d5c  sub w8,w9,#0x1
71002a6d60  cmp w8,#0x12a
71002a6d64  b.hi 0x71002a6da8
71002a6d68  add x8,sp,#0x28
71002a6d6c  mov x1,x20
71002a6d70  bl 0x71002a6e00
71002a6d74  adrp x8,0x71052a5000
71002a6d78  ldr x8,[x8, #0x110]
71002a6d7c  ldr w9,[sp, #0x28]
71002a6d80  cmp w9,#0x0
71002a6d84  csel x8,x8,xzr,ge
71002a6d88  cbz x8,0x71002a6c94
71002a6d8c  orr w8,wzr,#0x10001
71002a6d90  add x0,sp,#0x10
71002a6d94  add x1,sp,#0xc
71002a6d98  str w8,[sp, #0xc]
71002a6d9c  bl 0x71001b4200
71002a6da0  add x1,sp,#0x10
71002a6da4  b 0x71002a6c98
71002a6da8  mov w8,#0x18
71002a6dac  movk w8,#0x8005, LSL #16
71002a6db0  cmp w9,#0x194
71002a6db4  b.eq 0x71002a6c70
71002a6db8  cmp w9,#0x1f4
71002a6dbc  b.eq 0x71002a6dc8
71002a6dc0  cmp w9,#0x199
71002a6dc4  b.ne 0x71002a6dd0
71002a6dc8  add w8,w8,#0x1
71002a6dcc  b 0x71002a6c70
71002a6dd0  add w8,w8,#0x2
71002a6dd4  b 0x71002a6c70
71002a6dd8  adrp x0,0x71042c4000
71002a6ddc  add x0,x0,#0x35f
71002a6de0  mov w1,#0x47
71002a6de4  orr w2,wzr,#0xe0000003
71002a6de8  mov w3,wzr
71002a6dec  bl 0x71001b1300
71002a6df0  mov x0,x20
71002a6df4  bl 0x71039c0c00
