// addr:      71000f7a50
// offset:    0xf7a50
// name:      FUN_71000f7a50
// mangled:   
// size:      916

71000f7a50  sub sp,sp,#0x40
71000f7a54  str x21,[sp, #0x10]
71000f7a58  stp x20,x19,[sp, #0x20]
71000f7a5c  stp x29,x30,[sp, #0x30]
71000f7a60  add x29,sp,#0x30
71000f7a64  adrp x21,0x71052a5000
71000f7a68  ldr x21,[x21, #0x80]
71000f7a6c  mov x19,x0
71000f7a70  ldr x0,[x21]
71000f7a74  bl 0x7100146ba0
71000f7a78  sub w8,w0,#0x5
71000f7a7c  cmp w8,#0x3
71000f7a80  b.hi 0x71000f7aa8
71000f7a84  adrp x9,0x7104496000
71000f7a88  add x9,x9,#0x228
71000f7a8c  ldrsw x8,[x9, x8, LSL #0x2]
71000f7a90  add x8,x8,x9
71000f7a94  br x8
71000f7a98  mov w8,#0x1
71000f7a9c  orr w9,wzr,#0x3
71000f7aa0  mov w10,#0xc406
71000f7aa4  b 0x71000f7b5c
71000f7aa8  adrp x8,0x71052a4000
71000f7aac  ldr x8,[x8, #0xdf0]
71000f7ab0  ldr x0,[x8]
71000f7ab4  mov x8,sp
71000f7ab8  bl 0x7100192e90
71000f7abc  ldr w8,[sp]
71000f7ac0  cbnz w8,0x71000f7ad4
71000f7ac4  ldr x0,[x21]
71000f7ac8  bl 0x7100146ba0
71000f7acc  cmp w0,#0x4
71000f7ad0  b.ne 0x71000f7bd8
71000f7ad4  mov w8,#0x6c59
71000f7ad8  str w8,[sp]
71000f7adc  mov x8,sp
71000f7ae0  orr x20,x8,#0x4
71000f7ae4  mov x0,x20
71000f7ae8  bl 0x71039c0a80
71000f7aec  add x1,sp,#0x18
71000f7af0  mov x0,x20
71000f7af4  str wzr,[sp, #0x18]
71000f7af8  bl 0x71039c0a90
71000f7afc  add x0,x19,#0x220
71000f7b00  mov x1,sp
71000f7b04  bl 0x71000bcf30
71000f7b08  adrp x8,0x71052a5000
71000f7b0c  ldr x8,[x8, #0x238]
71000f7b10  mov w9,#0x4
71000f7b14  strb w9,[x19, #0x130]
71000f7b18  adrp x9,0x7104290000
71000f7b1c  add x9,x9,#0xd05
71000f7b20  stp x8,xzr,[x19, #0x30]
71000f7b24  mov w0,#0x5
71000f7b28  str x9,[x19, #0x40]
71000f7b2c  b 0x71000f7bc4
71000f7b30  mov w8,#0x1
71000f7b34  orr w9,wzr,#0x3
71000f7b38  mov w10,#0xa471
71000f7b3c  b 0x71000f7b5c
71000f7b40  mov w8,#0x1
71000f7b44  orr w9,wzr,#0x3
71000f7b48  mov w10,#0xc420
71000f7b4c  b 0x71000f7b5c
71000f7b50  mov w8,#0x1
71000f7b54  orr w9,wzr,#0x3
71000f7b58  mov w10,#0xc421
71000f7b5c  strb w8,[x19, #0xfa]
71000f7b60  mov x8,sp
71000f7b64  orr x20,x8,#0x4
71000f7b68  mov x0,x20
71000f7b6c  strb w9,[x19, #0x130]
71000f7b70  str w10,[sp]
71000f7b74  bl 0x71039c0a80
71000f7b78  add x1,sp,#0x18
71000f7b7c  mov x0,x20
71000f7b80  str wzr,[sp, #0x18]
71000f7b84  bl 0x71039c0a90
71000f7b88  add x0,x19,#0x220
71000f7b8c  mov x1,sp
71000f7b90  bl 0x71000bcf30
71000f7b94  ldr x8,[x21]
71000f7b98  ldr x0,[x8, #0x8]
71000f7b9c  ldr x8,[x0]
71000f7ba0  ldr x8,[x8, #0x28]
71000f7ba4  blr x8
71000f7ba8  adrp x8,0x71052a5000
71000f7bac  ldr x8,[x8, #0x240]
71000f7bb0  mov x0,xzr
71000f7bb4  stp x8,xzr,[x19, #0x30]
71000f7bb8  adrp x8,0x71043ac000
71000f7bbc  add x8,x8,#0x982
71000f7bc0  str x8,[x19, #0x40]
71000f7bc4  ldp x29,x30,[sp, #0x30]
71000f7bc8  ldr x21,[sp, #0x10]
71000f7bcc  ldp x20,x19,[sp, #0x20]
71000f7bd0  add sp,sp,#0x40
71000f7bd4  ret
71000f7bd8  ldrb w8,[x19, #0xfb]
71000f7bdc  cbz w8,0x71000f7bfc
71000f7be0  add x1,x19,#0x100
71000f7be4  add x0,x19,#0x220
71000f7be8  bl 0x71000bcf30
71000f7bec  adrp x8,0x71052a5000
71000f7bf0  ldr x8,[x8, #0x238]
71000f7bf4  orr w9,wzr,#0x6
71000f7bf8  b 0x71000f7b14
71000f7bfc  ldr x20,[x21]
71000f7c00  mov x0,x20
71000f7c04  bl 0x7100148e50
71000f7c08  cmp w0,#0x2
71000f7c0c  b.ne 0x71000f7c60
71000f7c10  ldr w8,[x19, #0x90]
71000f7c14  cmp w8,#0x9
71000f7c18  b.ne 0x71000f7cdc
71000f7c1c  adrp x8,0x71052a4000
71000f7c20  ldr x8,[x8, #0xc70]
71000f7c24  ldr x20,[x8]
71000f7c28  bl 0x71000bb680
71000f7c2c  mov x8,x0
71000f7c30  adrp x10,0x71052a5000
71000f7c34  ldr x9,[x20, #0x30]
71000f7c38  ldr x10,[x10, #0x290]
71000f7c3c  ldr x8,[x8]
71000f7c40  mov w11,#0x4e20
71000f7c44  madd x8,x8,x11,x9
71000f7c48  mov x0,xzr
71000f7c4c  str x8,[x19, #0x1f8]
71000f7c50  stp x10,xzr,[x19, #0x30]
71000f7c54  adrp x8,0x71043ac000
71000f7c58  add x8,x8,#0x9aa
71000f7c5c  b 0x71000f7bc0
71000f7c60  ldrb w8,[x20, #0x162]
71000f7c64  cmp w8,#0x0
71000f7c68  cset w8,eq
71000f7c6c  add x9,x20,w8, UXTW  #0x3
71000f7c70  add x8,x20,w8, UXTW  #0x2
71000f7c74  ldr x0,[x9, #0x168]
71000f7c78  ldr w2,[x8, #0x180]
71000f7c7c  ldr x8,[x0]
71000f7c80  ldr x9,[x8, #0x90]
71000f7c84  add x1,x19,#0x60
71000f7c88  mov x8,sp
71000f7c8c  blr x9
71000f7c90  ldr w8,[sp]
71000f7c94  cbz w8,0x71000f7d24
71000f7c98  mov w8,#0x2
71000f7c9c  add x0,x19,#0x220
71000f7ca0  mov x1,sp
71000f7ca4  strb w8,[x19, #0x130]
71000f7ca8  bl 0x71000bcf30
71000f7cac  ldr x8,[x21]
71000f7cb0  ldrb w9,[x8, #0x162]
71000f7cb4  cmp w9,#0x0
71000f7cb8  cset w9,eq
71000f7cbc  add x8,x8,w9, UXTW  #0x3
71000f7cc0  ldr x0,[x8, #0x168]
71000f7cc4  bl 0x71000d8f90
71000f7cc8  adrp x9,0x71052a5000
71000f7ccc  ldr x9,[x9, #0x238]
71000f7cd0  adrp x8,0x7104290000
71000f7cd4  add x8,x8,#0xd05
71000f7cd8  b 0x71000f7d34
71000f7cdc  ldr x0,[x21]
71000f7ce0  bl 0x7100146ed0
71000f7ce4  tbz w0,#0x0,0x71000f7d40
71000f7ce8  ldr x8,[x21]
71000f7cec  ldr x0,[x8, #0xb8]
71000f7cf0  add x1,x19,#0x268
71000f7cf4  bl 0x7100151000
71000f7cf8  tst w0,#0xff
71000f7cfc  strb w0,[x19, #0x2e8]
71000f7d00  b.eq 0x71000f7dc8
71000f7d04  and x10,x0,#0xff
71000f7d08  sub x9,x10,#0x1
71000f7d0c  and x8,x0,#0x3
71000f7d10  cmp x9,#0x3
71000f7d14  b.cs 0x71000f7d8c
71000f7d18  mov x9,xzr
71000f7d1c  cbnz x8,0x71000f7db0
71000f7d20  b 0x71000f7dc8
71000f7d24  adrp x9,0x71052a5000
71000f7d28  ldr x9,[x9, #0x298]
71000f7d2c  adrp x8,0x710427f000
71000f7d30  add x8,x8,#0xc75
71000f7d34  stp x9,xzr,[x19, #0x30]
71000f7d38  mov w0,#0x5
71000f7d3c  b 0x71000f7bc0
71000f7d40  mov w8,#0x5
71000f7d44  str w8,[x19, #0x230]
71000f7d48  adrp x8,0x71052a4000
71000f7d4c  ldr x8,[x8, #0xc70]
71000f7d50  ldr x20,[x8]
71000f7d54  bl 0x71000bb680
71000f7d58  mov x8,x0
71000f7d5c  adrp x10,0x71052a5000
71000f7d60  ldr x9,[x20, #0x30]
71000f7d64  ldr x10,[x10, #0x280]
71000f7d68  ldr x8,[x8]
71000f7d6c  mov w11,#0x4e20
71000f7d70  madd x8,x8,x11,x9
71000f7d74  mov x0,xzr
71000f7d78  str x8,[x19, #0x1f8]
71000f7d7c  adrp x8,0x710437b000
71000f7d80  add x8,x8,#0x999
71000f7d84  stp x10,xzr,[x19, #0x30]
71000f7d88  b 0x71000f7bc0
71000f7d8c  mov x9,xzr
71000f7d90  sub x10,x10,x8
71000f7d94  add x11,x19,x9
71000f7d98  add x9,x9,#0x4
71000f7d9c  add x11,x11,#0x2e9
71000f7da0  cmp x10,x9
71000f7da4  str wzr,[x11]
71000f7da8  b.ne 0x71000f7d94
71000f7dac  cbz x8,0x71000f7dc8
71000f7db0  add x9,x19,x9
71000f7db4  add x9,x9,#0x2e9
71000f7db8  neg x8,x8
71000f7dbc  adds x8,x8,#0x1
71000f7dc0  strb wzr,[x9], #0x1
71000f7dc4  b.ne 0x71000f7dbc
71000f7dc8  adrp x8,0x71052a5000
71000f7dcc  ldr x8,[x8, #0x2a0]
71000f7dd0  mov x0,xzr
71000f7dd4  stp x8,xzr,[x19, #0x30]
71000f7dd8  adrp x8,0x71043df000
71000f7ddc  add x8,x8,#0x20b
71000f7de0  b 0x71000f7bc0
