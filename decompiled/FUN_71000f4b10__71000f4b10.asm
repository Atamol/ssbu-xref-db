// addr:      71000f4b10
// offset:    0xf4b10
// name:      FUN_71000f4b10
// mangled:   
// size:      484

71000f4b10  sub sp,sp,#0xb0
71000f4b14  stp x20,x19,[sp, #0x90]
71000f4b18  stp x29,x30,[sp, #0xa0]
71000f4b1c  add x29,sp,#0xa0
71000f4b20  adrp x8,0x71052a5000
71000f4b24  ldr x8,[x8, #0x80]
71000f4b28  mov x19,x0
71000f4b2c  ldr x0,[x8]
71000f4b30  bl 0x7100146ba0
71000f4b34  sub w8,w0,#0x5
71000f4b38  cmp w8,#0x3
71000f4b3c  b.hi 0x71000f4b5c
71000f4b40  adrp x9,0x7104496000
71000f4b44  add x9,x9,#0x164
71000f4b48  ldrsw x8,[x9, x8, LSL #0x2]
71000f4b4c  add x8,x8,x9
71000f4b50  br x8
71000f4b54  mov w8,#0xc406
71000f4b58  b 0x71000f4bf0
71000f4b5c  mov w8,#0x8
71000f4b60  str w8,[x19, #0x110]
71000f4b64  ldr x8,[x19]
71000f4b68  ldr x8,[x8, #0x48]
71000f4b6c  mov x0,x19
71000f4b70  blr x8
71000f4b74  tbz w0,#0x0,0x71000f4c4c
71000f4b78  mov w8,#0x6c05
71000f4b7c  str w8,[sp, #0x8]
71000f4b80  add x8,sp,#0x8
71000f4b84  orr x20,x8,#0x4
71000f4b88  mov x0,x20
71000f4b8c  bl 0x71039c0a80
71000f4b90  sub x1,x29,#0x18
71000f4b94  mov x0,x20
71000f4b98  stur wzr,[x29, #-0x18]
71000f4b9c  bl 0x71039c0a90
71000f4ba0  add x0,x19,#0x120
71000f4ba4  add x1,sp,#0x8
71000f4ba8  bl 0x71000bcf30
71000f4bac  adrp x8,0x71052a5000
71000f4bb0  ldr x8,[x8, #0x1b0]
71000f4bb4  mov x0,xzr
71000f4bb8  stp x8,xzr,[x19, #0x30]
71000f4bbc  adrp x8,0x7104339000
71000f4bc0  add x8,x8,#0x3ce
71000f4bc4  strb wzr,[x19, #0x16c]
71000f4bc8  str x8,[x19, #0x40]
71000f4bcc  ldp x29,x30,[sp, #0xa0]
71000f4bd0  ldp x20,x19,[sp, #0x90]
71000f4bd4  add sp,sp,#0xb0
71000f4bd8  ret
71000f4bdc  mov w8,#0xa471
71000f4be0  b 0x71000f4bf0
71000f4be4  mov w8,#0xc420
71000f4be8  b 0x71000f4bf0
71000f4bec  mov w8,#0xc421
71000f4bf0  str w8,[sp, #0x8]
71000f4bf4  add x8,sp,#0x8
71000f4bf8  orr x20,x8,#0x4
71000f4bfc  mov x0,x20
71000f4c00  bl 0x71039c0a80
71000f4c04  sub x1,x29,#0x18
71000f4c08  mov x0,x20
71000f4c0c  stur wzr,[x29, #-0x18]
71000f4c10  bl 0x71039c0a90
71000f4c14  add x0,x19,#0x120
71000f4c18  add x1,sp,#0x8
71000f4c1c  bl 0x71000bcf30
71000f4c20  adrp x8,0x71052a5000
71000f4c24  ldr x8,[x8, #0x198]
71000f4c28  mov x0,xzr
71000f4c2c  stp x8,xzr,[x19, #0x30]
71000f4c30  adrp x8,0x71043ef000
71000f4c34  add x8,x8,#0xa4b
71000f4c38  str x8,[x19, #0x40]
71000f4c3c  ldp x29,x30,[sp, #0xa0]
71000f4c40  ldp x20,x19,[sp, #0x90]
71000f4c44  add sp,sp,#0xb0
71000f4c48  ret
71000f4c4c  adrp x8,0x71052a4000
71000f4c50  ldr x8,[x8, #0xc70]
71000f4c54  ldr x8,[x8]
71000f4c58  ldr x9,[x19, #0x148]
71000f4c5c  ldr x8,[x8, #0x30]
71000f4c60  cmp x9,x8
71000f4c64  b.cs 0x71000f4cb4
71000f4c68  add x0,sp,#0x8
71000f4c6c  bl 0x710015fd60
71000f4c70  add x0,x19,#0x90
71000f4c74  add x1,sp,#0x8
71000f4c78  bl 0x710015fea0
71000f4c7c  adrp x8,0x71052a5000
71000f4c80  ldr x8,[x8, #0x1e0]
71000f4c84  add x0,sp,#0x8
71000f4c88  stp x8,xzr,[x19, #0x30]
71000f4c8c  adrp x8,0x710437b000
71000f4c90  add x8,x8,#0x96e
71000f4c94  strb wzr,[x19, #0x16c]
71000f4c98  str x8,[x19, #0x40]
71000f4c9c  bl 0x710015ff20
71000f4ca0  mov x0,xzr
71000f4ca4  ldp x29,x30,[sp, #0xa0]
71000f4ca8  ldp x20,x19,[sp, #0x90]
71000f4cac  add sp,sp,#0xb0
71000f4cb0  ret
71000f4cb4  ldr x9,[x19, #0x140]
71000f4cb8  cmp x9,x8
71000f4cbc  b.cc 0x71000f4bac
71000f4cc0  ldr x20,[x19, #0x138]
71000f4cc4  cbz x20,0x71000f4ce0
71000f4cc8  adrp x8,0x71052a4000
71000f4ccc  ldr x8,[x8, #0xd88]
71000f4cd0  ldr x0,[x8]
71000f4cd4  bl 0x71000c36b0
71000f4cd8  cmp x20,x0
71000f4cdc  b.eq 0x71000f4bac
71000f4ce0  mov w0,#0x5
71000f4ce4  ldp x29,x30,[sp, #0xa0]
71000f4ce8  ldp x20,x19,[sp, #0x90]
71000f4cec  add sp,sp,#0xb0
71000f4cf0  ret
