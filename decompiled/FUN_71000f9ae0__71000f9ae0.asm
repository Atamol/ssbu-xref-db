// addr:      71000f9ae0
// offset:    0xf9ae0
// name:      FUN_71000f9ae0
// mangled:   
// size:      932

71000f9ae0  sub sp,sp,#0x50
71000f9ae4  str x23,[sp, #0x10]
71000f9ae8  stp x22,x21,[sp, #0x20]
71000f9aec  stp x20,x19,[sp, #0x30]
71000f9af0  stp x29,x30,[sp, #0x40]
71000f9af4  add x29,sp,#0x40
71000f9af8  adrp x22,0x71052a5000
71000f9afc  ldr x22,[x22, #0x80]
71000f9b00  mov x19,x0
71000f9b04  ldr x0,[x22]
71000f9b08  bl 0x7100146ba0
71000f9b0c  sub w8,w0,#0x5
71000f9b10  cmp w8,#0x3
71000f9b14  b.hi 0x71000f9b3c
71000f9b18  adrp x9,0x7104496000
71000f9b1c  add x9,x9,#0x2b8
71000f9b20  ldrsw x8,[x9, x8, LSL #0x2]
71000f9b24  add x8,x8,x9
71000f9b28  br x8
71000f9b2c  mov w8,#0x1
71000f9b30  orr w9,wzr,#0x3
71000f9b34  mov w10,#0xc406
71000f9b38  b 0x71000f9bf0
71000f9b3c  adrp x8,0x71052a4000
71000f9b40  ldr x8,[x8, #0xdf0]
71000f9b44  ldr x0,[x8]
71000f9b48  mov x8,sp
71000f9b4c  bl 0x7100192e90
71000f9b50  ldr w8,[sp]
71000f9b54  cbnz w8,0x71000f9b68
71000f9b58  ldr x0,[x22]
71000f9b5c  bl 0x7100146ba0
71000f9b60  cmp w0,#0x4
71000f9b64  b.ne 0x71000f9c70
71000f9b68  mov w8,#0x6c59
71000f9b6c  str w8,[sp]
71000f9b70  mov x8,sp
71000f9b74  orr x20,x8,#0x4
71000f9b78  mov x0,x20
71000f9b7c  bl 0x71039c0a80
71000f9b80  add x1,sp,#0x18
71000f9b84  mov x0,x20
71000f9b88  str wzr,[sp, #0x18]
71000f9b8c  bl 0x71039c0a90
71000f9b90  add x0,x19,#0x220
71000f9b94  mov x1,sp
71000f9b98  bl 0x71000bcf30
71000f9b9c  adrp x8,0x71052a5000
71000f9ba0  ldr x8,[x8, #0x238]
71000f9ba4  mov w9,#0x4
71000f9ba8  strb w9,[x19, #0x130]
71000f9bac  adrp x9,0x7104290000
71000f9bb0  add x9,x9,#0xd05
71000f9bb4  stp x8,xzr,[x19, #0x30]
71000f9bb8  mov w0,#0x5
71000f9bbc  str x9,[x19, #0x40]
71000f9bc0  b 0x71000f9c58
71000f9bc4  mov w8,#0x1
71000f9bc8  orr w9,wzr,#0x3
71000f9bcc  mov w10,#0xa471
71000f9bd0  b 0x71000f9bf0
71000f9bd4  mov w8,#0x1
71000f9bd8  orr w9,wzr,#0x3
71000f9bdc  mov w10,#0xc420
71000f9be0  b 0x71000f9bf0
71000f9be4  mov w8,#0x1
71000f9be8  orr w9,wzr,#0x3
71000f9bec  mov w10,#0xc421
71000f9bf0  strb w8,[x19, #0xfa]
71000f9bf4  mov x8,sp
71000f9bf8  orr x20,x8,#0x4
71000f9bfc  mov x0,x20
71000f9c00  strb w9,[x19, #0x130]
71000f9c04  str w10,[sp]
71000f9c08  bl 0x71039c0a80
71000f9c0c  add x1,sp,#0x18
71000f9c10  mov x0,x20
71000f9c14  str wzr,[sp, #0x18]
71000f9c18  bl 0x71039c0a90
71000f9c1c  add x0,x19,#0x220
71000f9c20  mov x1,sp
71000f9c24  bl 0x71000bcf30
71000f9c28  ldr x8,[x22]
71000f9c2c  ldr x0,[x8, #0x8]
71000f9c30  ldr x8,[x0]
71000f9c34  ldr x8,[x8, #0x28]
71000f9c38  blr x8
71000f9c3c  adrp x8,0x71052a5000
71000f9c40  ldr x8,[x8, #0x240]
71000f9c44  mov x0,xzr
71000f9c48  stp x8,xzr,[x19, #0x30]
71000f9c4c  adrp x8,0x71043ac000
71000f9c50  add x8,x8,#0x982
71000f9c54  str x8,[x19, #0x40]
71000f9c58  ldp x29,x30,[sp, #0x40]
71000f9c5c  ldr x23,[sp, #0x10]
71000f9c60  ldp x20,x19,[sp, #0x30]
71000f9c64  ldp x22,x21,[sp, #0x20]
71000f9c68  add sp,sp,#0x50
71000f9c6c  ret
71000f9c70  ldrb w8,[x19, #0xfb]
71000f9c74  cbz w8,0x71000f9c94
71000f9c78  add x1,x19,#0x100
71000f9c7c  add x0,x19,#0x220
71000f9c80  bl 0x71000bcf30
71000f9c84  adrp x8,0x71052a5000
71000f9c88  ldr x8,[x8, #0x238]
71000f9c8c  orr w9,wzr,#0x6
71000f9c90  b 0x71000f9ba8
71000f9c94  ldr x20,[x22]
71000f9c98  ldr x21,[x20, #0xb8]
71000f9c9c  mov x0,x20
71000f9ca0  bl 0x7100146f60
71000f9ca4  mov x1,x0
71000f9ca8  add x2,sp,#0x1c
71000f9cac  mov x0,x21
71000f9cb0  bl 0x7100150d50
71000f9cb4  tbnz w0,#0x0,0x71000f9cbc
71000f9cb8  str wzr,[sp, #0x1c]
71000f9cbc  adrp x21,0x71052a4000
71000f9cc0  ldr x21,[x21, #0xc70]
71000f9cc4  ldr x8,[x21]
71000f9cc8  ldr x8,[x8, #0x30]
71000f9ccc  ldr x9,[x19, #0x1d0]
71000f9cd0  sub x23,x8,x9
71000f9cd4  bl 0x71000bb680
71000f9cd8  ldr x8,[x0]
71000f9cdc  mov w9,#0x3a98
71000f9ce0  mul x8,x8,x9
71000f9ce4  cmp x23,x8
71000f9ce8  b.ge 0x71000f9d50
71000f9cec  ldrb w8,[x19, #0x234]
71000f9cf0  cbz w8,0x71000f9e50
71000f9cf4  strb wzr,[x19, #0x234]
71000f9cf8  ldr x1,[x19, #0x238]
71000f9cfc  ldr x8,[x20, #0xf0]
71000f9d00  cmp x1,x8
71000f9d04  b.ne 0x71000f9e0c
71000f9d08  mov x0,x19
71000f9d0c  bl 0x71000f9670
71000f9d10  mov w8,#0x5
71000f9d14  str w8,[x19, #0x230]
71000f9d18  ldr x20,[x21]
71000f9d1c  bl 0x71000bb680
71000f9d20  mov x8,x0
71000f9d24  mov x0,xzr
71000f9d28  ldr x8,[x8]
71000f9d2c  ldr x10,[x20, #0x30]
71000f9d30  mov w9,#0x4e20
71000f9d34  madd x9,x8,x9,x10
71000f9d38  adrp x8,0x710437b000
71000f9d3c  add x8,x8,#0x999
71000f9d40  str x9,[x19, #0x1f8]
71000f9d44  adrp x9,0x71052a5000
71000f9d48  ldr x9,[x9, #0x280]
71000f9d4c  b 0x71000f9e74
71000f9d50  ldrb w8,[x20, #0x162]
71000f9d54  add x9,x20,x8, LSL #0x2
71000f9d58  ldr w9,[x9, #0x180]
71000f9d5c  ldr w10,[sp, #0x1c]
71000f9d60  cmp w9,w10
71000f9d64  b.ne 0x71000f9dd8
71000f9d68  orr w8,wzr,#0xe
71000f9d6c  strb w8,[x19, #0x130]
71000f9d70  mov x8,sp
71000f9d74  orr x20,x8,#0x4
71000f9d78  mov w9,#0x6c59
71000f9d7c  str w9,[sp]
71000f9d80  mov x0,x20
71000f9d84  bl 0x71039c0a80
71000f9d88  add x1,sp,#0x18
71000f9d8c  mov x0,x20
71000f9d90  str wzr,[sp, #0x18]
71000f9d94  bl 0x71039c0a90
71000f9d98  add x0,x19,#0x220
71000f9d9c  mov x1,sp
71000f9da0  bl 0x71000bcf30
71000f9da4  ldr x8,[x22]
71000f9da8  ldrb w9,[x8, #0x162]
71000f9dac  cmp w9,#0x0
71000f9db0  cset w9,eq
71000f9db4  add x8,x8,w9, UXTW  #0x3
71000f9db8  ldr x0,[x8, #0x168]
71000f9dbc  bl 0x71000d8f90
71000f9dc0  adrp x9,0x71052a5000
71000f9dc4  ldr x9,[x9, #0x238]
71000f9dc8  mov w0,#0x5
71000f9dcc  adrp x8,0x7104290000
71000f9dd0  add x8,x8,#0xd05
71000f9dd4  b 0x71000f9e74
71000f9dd8  add x8,x20,x8, LSL #0x3
71000f9ddc  ldr x0,[x8, #0x168]
71000f9de0  ldr x8,[x0]
71000f9de4  ldr x8,[x8, #0xf0]
71000f9de8  blr x8
71000f9dec  mov x8,x0
71000f9df0  orr w9,wzr,#0x6
71000f9df4  str x8,[x19, #0xa0]
71000f9df8  str w9,[x19, #0x98]
71000f9dfc  adrp x9,0x71052a5000
71000f9e00  ldr x9,[x9, #0x258]
71000f9e04  mov x0,xzr
71000f9e08  b 0x71000f9e6c
71000f9e0c  ldr x8,[x22]
71000f9e10  ldr x0,[x8, #0xb8]
71000f9e14  add x2,sp,#0x1c
71000f9e18  bl 0x7100150d50
71000f9e1c  tbz w0,#0x0,0x71000f9e50
71000f9e20  ldrb w8,[x20, #0x162]
71000f9e24  add x10,x20,x8, LSL #0x2
71000f9e28  ldr w9,[sp, #0x1c]
71000f9e2c  ldr w10,[x10, #0x180]
71000f9e30  cmp w9,w10
71000f9e34  b.eq 0x71000f9e50
71000f9e38  add x8,x20,x8, LSL #0x3
71000f9e3c  ldr x0,[x8, #0x168]
71000f9e40  ldr x8,[x0]
71000f9e44  ldr x8,[x8, #0xe0]
71000f9e48  blr x8
71000f9e4c  tbnz w0,#0x0,0x71000f9d08
71000f9e50  ldr x8,[x19, #0xa0]
71000f9e54  cbz x8,0x71000f9e7c
71000f9e58  adrp x9,0x71052a5000
71000f9e5c  ldr x9,[x9, #0x258]
71000f9e60  orr w8,wzr,#0x6
71000f9e64  mov x0,xzr
71000f9e68  str w8,[x19, #0x98]
71000f9e6c  adrp x8,0x7104307000
71000f9e70  add x8,x8,#0x7a0
71000f9e74  stp x9,xzr,[x19, #0x30]
71000f9e78  b 0x71000f9c54
71000f9e7c  mov w0,#0x5
71000f9e80  b 0x71000f9c58
