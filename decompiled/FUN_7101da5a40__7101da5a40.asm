// addr:      7101da5a40
// offset:    0x1da5a40
// name:      FUN_7101da5a40
// mangled:   
// size:      764

7101da5a40  sub sp,sp,#0x50
7101da5a44  str x21,[sp, #0x20]
7101da5a48  stp x20,x19,[sp, #0x30]
7101da5a4c  stp x29,x30,[sp, #0x40]
7101da5a50  add x29,sp,#0x40
7101da5a54  ldrsh w8,[x0, #0x98]
7101da5a58  mov x19,x0
7101da5a5c  add x20,x0,#0x50
7101da5a60  adrp x1,0x710438d000
7101da5a64  add x1,x1,#0x7
7101da5a68  cmn w8,#0x1
7101da5a6c  b.eq 0x7101da5a8c
7101da5a70  add x8,sp,#0x10
7101da5a74  mov x0,x20
7101da5a78  bl 0x7103776640
7101da5a7c  ldr x21,[sp, #0x18]
7101da5a80  adrp x1,0x71043cf000
7101da5a84  add x1,x1,#0x964
7101da5a88  b 0x7101da5aa4
7101da5a8c  add x8,sp,#0x10
7101da5a90  mov x0,x20
7101da5a94  bl 0x7103776640
7101da5a98  ldr x21,[sp, #0x18]
7101da5a9c  adrp x1,0x7104433000
7101da5aa0  add x1,x1,#0x612
7101da5aa4  fmov s0,0x3f800000
7101da5aa8  mov x0,x21
7101da5aac  bl 0x7103778300
7101da5ab0  adrp x8,0x710523d000
7101da5ab4  add x8,x8,#0x988
7101da5ab8  stp x8,xzr,[sp, #0x10]
7101da5abc  cbz x21,0x7101da5ae0
7101da5ac0  ldr x0,[x21, #0x18]
7101da5ac4  adrp x8,0x710523d000
7101da5ac8  add x8,x8,#0x9a8
7101da5acc  stp x8,xzr,[x21, #0x10]
7101da5ad0  cbz x0,0x7101da5ad8
7101da5ad4  bl 0x710392eb40
7101da5ad8  mov x0,x21
7101da5adc  bl 0x710392eb40
7101da5ae0  adrp x1,0x7104433000
7101da5ae4  add x1,x1,#0x603
7101da5ae8  add x8,sp,#0x10
7101da5aec  mov x0,x20
7101da5af0  bl 0x7103776640
7101da5af4  ldr w8,[x19, #0xb0]
7101da5af8  adrp x1,0x7104292000
7101da5afc  add x1,x1,#0x1bb
7101da5b00  cmp w8,#0x1
7101da5b04  b.lt 0x7101da5b24
7101da5b08  mov x8,sp
7101da5b0c  add x0,sp,#0x10
7101da5b10  bl 0x7103776640
7101da5b14  ldr x21,[sp, #0x8]
7101da5b18  adrp x1,0x71043cf000
7101da5b1c  add x1,x1,#0x964
7101da5b20  b 0x7101da5b3c
7101da5b24  mov x8,sp
7101da5b28  add x0,sp,#0x10
7101da5b2c  bl 0x7103776640
7101da5b30  ldr x21,[sp, #0x8]
7101da5b34  adrp x1,0x7104433000
7101da5b38  add x1,x1,#0x612
7101da5b3c  fmov s0,0x3f800000
7101da5b40  mov x0,x21
7101da5b44  bl 0x7103778300
7101da5b48  adrp x8,0x710523d000
7101da5b4c  add x8,x8,#0x988
7101da5b50  stp x8,xzr,[sp]
7101da5b54  cbz x21,0x7101da5b78
7101da5b58  ldr x0,[x21, #0x18]
7101da5b5c  adrp x8,0x710523d000
7101da5b60  add x8,x8,#0x9a8
7101da5b64  stp x8,xzr,[x21, #0x10]
7101da5b68  cbz x0,0x7101da5b70
7101da5b6c  bl 0x710392eb40
7101da5b70  mov x0,x21
7101da5b74  bl 0x710392eb40
7101da5b78  ldr w8,[x19, #0xb0]
7101da5b7c  adrp x1,0x710432a000
7101da5b80  add x1,x1,#0x5d7
7101da5b84  cmp w8,#0x2
7101da5b88  b.lt 0x7101da5ba8
7101da5b8c  mov x8,sp
7101da5b90  add x0,sp,#0x10
7101da5b94  bl 0x7103776640
7101da5b98  ldr x21,[sp, #0x8]
7101da5b9c  adrp x1,0x71043cf000
7101da5ba0  add x1,x1,#0x964
7101da5ba4  b 0x7101da5bc0
7101da5ba8  mov x8,sp
7101da5bac  add x0,sp,#0x10
7101da5bb0  bl 0x7103776640
7101da5bb4  ldr x21,[sp, #0x8]
7101da5bb8  adrp x1,0x7104433000
7101da5bbc  add x1,x1,#0x612
7101da5bc0  fmov s0,0x3f800000
7101da5bc4  mov x0,x21
7101da5bc8  bl 0x7103778300
7101da5bcc  adrp x8,0x710523d000
7101da5bd0  add x8,x8,#0x988
7101da5bd4  stp x8,xzr,[sp]
7101da5bd8  cbz x21,0x7101da5bfc
7101da5bdc  ldr x0,[x21, #0x18]
7101da5be0  adrp x8,0x710523d000
7101da5be4  add x8,x8,#0x9a8
7101da5be8  stp x8,xzr,[x21, #0x10]
7101da5bec  cbz x0,0x7101da5bf4
7101da5bf0  bl 0x710392eb40
7101da5bf4  mov x0,x21
7101da5bf8  bl 0x710392eb40
7101da5bfc  ldr w8,[x19, #0xb0]
7101da5c00  adrp x1,0x7104270000
7101da5c04  add x1,x1,#0x503
7101da5c08  cmp w8,#0x3
7101da5c0c  b.lt 0x7101da5c2c
7101da5c10  mov x8,sp
7101da5c14  add x0,sp,#0x10
7101da5c18  bl 0x7103776640
7101da5c1c  ldr x21,[sp, #0x8]
7101da5c20  adrp x1,0x71043cf000
7101da5c24  add x1,x1,#0x964
7101da5c28  b 0x7101da5c44
7101da5c2c  mov x8,sp
7101da5c30  add x0,sp,#0x10
7101da5c34  bl 0x7103776640
7101da5c38  ldr x21,[sp, #0x8]
7101da5c3c  adrp x1,0x7104433000
7101da5c40  add x1,x1,#0x612
7101da5c44  fmov s0,0x3f800000
7101da5c48  mov x0,x21
7101da5c4c  bl 0x7103778300
7101da5c50  adrp x8,0x710523d000
7101da5c54  add x8,x8,#0x988
7101da5c58  stp x8,xzr,[sp]
7101da5c5c  cbz x21,0x7101da5c80
7101da5c60  ldr x0,[x21, #0x18]
7101da5c64  adrp x8,0x710523d000
7101da5c68  add x8,x8,#0x9a8
7101da5c6c  stp x8,xzr,[x21, #0x10]
7101da5c70  cbz x0,0x7101da5c78
7101da5c74  bl 0x710392eb40
7101da5c78  mov x0,x21
7101da5c7c  bl 0x710392eb40
7101da5c80  ldrb w8,[x19, #0xdd]
7101da5c84  cbz w8,0x7101da5cf4
7101da5c88  ldrb w8,[x19, #0xde]
7101da5c8c  cbnz w8,0x7101da5cf4
7101da5c90  adrp x1,0x710433a000
7101da5c94  add x1,x1,#0x587
7101da5c98  mov x8,sp
7101da5c9c  mov x0,x20
7101da5ca0  bl 0x7103776640
7101da5ca4  ldr x20,[sp, #0x8]
7101da5ca8  fmov s0,0x3f800000
7101da5cac  adrp x1,0x71042d6000
7101da5cb0  add x1,x1,#0x6be
7101da5cb4  mov x0,x20
7101da5cb8  bl 0x7103778300
7101da5cbc  mov w8,#0x1
7101da5cc0  adrp x9,0x710523d000
7101da5cc4  add x9,x9,#0x988
7101da5cc8  strb w8,[x19, #0xde]
7101da5ccc  stp x9,xzr,[sp]
7101da5cd0  cbz x20,0x7101da5cf4
7101da5cd4  ldr x0,[x20, #0x18]
7101da5cd8  adrp x8,0x710523d000
7101da5cdc  add x8,x8,#0x9a8
7101da5ce0  stp x8,xzr,[x20, #0x10]
7101da5ce4  cbz x0,0x7101da5cec
7101da5ce8  bl 0x710392eb40
7101da5cec  mov x0,x20
7101da5cf0  bl 0x710392eb40
7101da5cf4  ldr x19,[sp, #0x18]
7101da5cf8  adrp x8,0x710523d000
7101da5cfc  add x8,x8,#0x988
7101da5d00  stp x8,xzr,[sp, #0x10]
7101da5d04  cbz x19,0x7101da5d28
7101da5d08  ldr x0,[x19, #0x18]
7101da5d0c  adrp x8,0x710523d000
7101da5d10  add x8,x8,#0x9a8
7101da5d14  stp x8,xzr,[x19, #0x10]
7101da5d18  cbz x0,0x7101da5d20
7101da5d1c  bl 0x710392eb40
7101da5d20  mov x0,x19
7101da5d24  bl 0x710392eb40
7101da5d28  ldp x29,x30,[sp, #0x40]
7101da5d2c  ldr x21,[sp, #0x20]
7101da5d30  ldp x20,x19,[sp, #0x30]
7101da5d34  add sp,sp,#0x50
7101da5d38  ret
