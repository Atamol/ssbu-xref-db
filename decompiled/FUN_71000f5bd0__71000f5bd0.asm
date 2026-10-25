// addr:      71000f5bd0
// offset:    0xf5bd0
// name:      FUN_71000f5bd0
// mangled:   
// size:      616

71000f5bd0  sub sp,sp,#0x70
71000f5bd4  str x27,[sp, #0x10]
71000f5bd8  stp x26,x25,[sp, #0x20]
71000f5bdc  stp x24,x23,[sp, #0x30]
71000f5be0  stp x22,x21,[sp, #0x40]
71000f5be4  stp x20,x19,[sp, #0x50]
71000f5be8  stp x29,x30,[sp, #0x60]
71000f5bec  add x29,sp,#0x60
71000f5bf0  mov x19,x8
71000f5bf4  adrp x8,0x71052a5000
71000f5bf8  ldr x8,[x8, #0x80]
71000f5bfc  ldr x26,[x8]
71000f5c00  ldrb w8,[x26, #0x162]
71000f5c04  add x8,x26,x8, LSL #0x2
71000f5c08  ldr w8,[x8, #0x180]
71000f5c0c  cbz w8,0x71000f5de0
71000f5c10  strb wzr,[x0, #0x264]
71000f5c14  ldr x21,[x26, #0x8]
71000f5c18  mov x20,x0
71000f5c1c  cbz x21,0x71000f5c84
71000f5c20  mov x0,x21
71000f5c24  bl 0x71000ee2c0
71000f5c28  cbz w0,0x71000f5c7c
71000f5c2c  mov w22,wzr
71000f5c30  mov x0,x21
71000f5c34  mov w1,w22
71000f5c38  bl 0x71000ee290
71000f5c3c  cbz w0,0x71000f5c68
71000f5c40  mov x0,x21
71000f5c44  mov w1,w22
71000f5c48  bl 0x71000ee290
71000f5c4c  ldrb w8,[x26, #0x162]
71000f5c50  cmp w8,#0x0
71000f5c54  cset w8,eq
71000f5c58  add x8,x26,w8, UXTW  #0x2
71000f5c5c  ldr w8,[x8, #0x180]
71000f5c60  cmp w0,w8
71000f5c64  b.ne 0x71000f5c84
71000f5c68  mov x0,x21
71000f5c6c  add w22,w22,#0x1
71000f5c70  bl 0x71000ee2c0
71000f5c74  cmp w22,w0
71000f5c78  b.cc 0x71000f5c30
71000f5c7c  mov w8,#0x1
71000f5c80  strb w8,[x20, #0x264]
71000f5c84  ldr w8,[x20, #0xb8]
71000f5c88  add x21,x20,#0xa8
71000f5c8c  cbz w8,0x71000f5cd0
71000f5c90  ldr x8,[x20, #0xb0]
71000f5c94  cmp x8,x21
71000f5c98  b.eq 0x71000f5cc8
71000f5c9c  add x22,x20,#0xc0
71000f5ca0  ldr x23,[x8, #0x8]
71000f5ca4  stp xzr,xzr,[x8]
71000f5ca8  ldrsw x9,[x20, #0xd4]
71000f5cac  add x2,x9,x8
71000f5cb0  mov x0,x22
71000f5cb4  mov x1,x22
71000f5cb8  bl 0x71000b70c0
71000f5cbc  cmp x23,x21
71000f5cc0  mov x8,x23
71000f5cc4  b.ne 0x71000f5ca0
71000f5cc8  mov x0,x21
71000f5ccc  bl 0x71000b7080
71000f5cd0  adrp x8,0x71052a4000
71000f5cd4  ldr x8,[x8, #0xdf0]
71000f5cd8  ldr x0,[x8]
71000f5cdc  bl 0x7100193a50
71000f5ce0  ldr x27,[x0, #0x8]
71000f5ce4  cmp x27,x0
71000f5ce8  b.eq 0x71000f5d80
71000f5cec  ldr x23,[x26, #0xb8]
71000f5cf0  mov x22,x0
71000f5cf4  add x24,x20,#0xc0
71000f5cf8  ldr x1,[x27, #0x10]
71000f5cfc  mov x0,x23
71000f5d00  bl 0x7100150680
71000f5d04  tbz w0,#0x0,0x71000f5d74
71000f5d08  ldr x1,[x27, #0x10]
71000f5d0c  add x2,sp,#0x1c
71000f5d10  mov x0,x23
71000f5d14  bl 0x7100150d50
71000f5d18  tbz w0,#0x0,0x71000f5d74
71000f5d1c  ldrb w9,[x26, #0x162]
71000f5d20  add x9,x26,x9, LSL #0x2
71000f5d24  ldr w8,[sp, #0x1c]
71000f5d28  ldr w9,[x9, #0x180]
71000f5d2c  cmp w8,w9
71000f5d30  b.ne 0x71000f5d74
71000f5d34  ldr w8,[x20, #0xd0]
71000f5d38  cbz w8,0x71000f5d74
71000f5d3c  mov x0,x24
71000f5d40  bl 0x71000b71c0
71000f5d44  cbz x0,0x71000f5d54
71000f5d48  ldrsw x8,[x20, #0xd4]
71000f5d4c  sub x25,x0,x8
71000f5d50  b 0x71000f5d58
71000f5d54  mov x25,xzr
71000f5d58  mov x0,x21
71000f5d5c  mov x1,x21
71000f5d60  mov x2,x25
71000f5d64  str xzr,[x25, #0x10]
71000f5d68  bl 0x71000b7090
71000f5d6c  ldr x8,[x27, #0x10]
71000f5d70  str x8,[x25, #0x10]
71000f5d74  ldr x27,[x27, #0x8]
71000f5d78  cmp x27,x22
71000f5d7c  b.ne 0x71000f5cf8
71000f5d80  adrp x8,0x71052a4000
71000f5d84  ldr x8,[x8, #0xbd8]
71000f5d88  mov x9,#-0x1
71000f5d8c  add x8,x8,#0x30c
71000f5d90  str x9,[x8]
71000f5d94  ldrb w8,[x26, #0x162]
71000f5d98  add x8,x26,x8, LSL #0x2
71000f5d9c  mov w9,#0x5
71000f5da0  ldr w8,[x8, #0x180]
71000f5da4  str wzr,[x20, #0x98]
71000f5da8  str w9,[x20, #0x230]
71000f5dac  strb wzr,[x20, #0x234]
71000f5db0  adrp x9,0x71052a5000
71000f5db4  ldr x9,[x9, #0x230]
71000f5db8  adrp x10,0x7104400000
71000f5dbc  add x10,x10,#0x58f
71000f5dc0  strb wzr,[x20, #0x240]
71000f5dc4  strb wzr,[x20, #0x250]
71000f5dc8  strh wzr,[x20, #0x260]
71000f5dcc  stp x9,xzr,[x20, #0x30]
71000f5dd0  str x10,[x20, #0x40]
71000f5dd4  str w8,[x20, #0xf0]
71000f5dd8  str wzr,[sp]
71000f5ddc  b 0x71000f5dec
71000f5de0  mov w8,#0xc08
71000f5de4  movk w8,#0x1, LSL #16
71000f5de8  str w8,[sp]
71000f5dec  mov x8,sp
71000f5df0  orr x20,x8,#0x4
71000f5df4  mov x0,x20
71000f5df8  bl 0x71039c0a80
71000f5dfc  add x1,sp,#0x18
71000f5e00  mov x0,x20
71000f5e04  str wzr,[sp, #0x18]
71000f5e08  bl 0x71039c0a90
71000f5e0c  mov x1,sp
71000f5e10  mov x0,x19
71000f5e14  bl 0x71000bce50
71000f5e18  ldp x29,x30,[sp, #0x60]
71000f5e1c  ldr x27,[sp, #0x10]
71000f5e20  ldp x20,x19,[sp, #0x50]
71000f5e24  ldp x22,x21,[sp, #0x40]
71000f5e28  ldp x24,x23,[sp, #0x30]
71000f5e2c  ldp x26,x25,[sp, #0x20]
71000f5e30  add sp,sp,#0x70
71000f5e34  ret
