// addr:      71001e5a20
// offset:    0x1e5a20
// name:      FUN_71001e5a20
// mangled:   
// size:      832

71001e5a20  sub sp,sp,#0xa0
71001e5a24  stp x28,x27,[sp, #0x40]
71001e5a28  stp x26,x25,[sp, #0x50]
71001e5a2c  stp x24,x23,[sp, #0x60]
71001e5a30  stp x22,x21,[sp, #0x70]
71001e5a34  stp x20,x19,[sp, #0x80]
71001e5a38  stp x29,x30,[sp, #0x90]
71001e5a3c  add x29,sp,#0x90
71001e5a40  adrp x8,0x71052a4000
71001e5a44  ldr x8,[x8, #0xda8]
71001e5a48  adrp x20,0x71052a4000
71001e5a4c  ldrb w8,[x8]
71001e5a50  ldr x20,[x20, #0xdb0]
71001e5a54  mov x24,x2
71001e5a58  mov x21,x1
71001e5a5c  mov x22,x0
71001e5a60  add x19,x20,#0x28
71001e5a64  cbz w8,0x71001e5aa0
71001e5a68  adrp x8,0x71052a4000
71001e5a6c  ldr x8,[x8, #0xdb8]
71001e5a70  ldr x0,[x8]
71001e5a74  bl 0x7101717960
71001e5a78  ldr w8,[x0]
71001e5a7c  cbz w8,0x71001e5aa0
71001e5a80  ldr x10,[x20, #0xa0]
71001e5a84  ldp x9,x10,[x10]
71001e5a88  sub x10,x10,x9
71001e5a8c  asr x10,x10,#0x3
71001e5a90  cmp x10,x8
71001e5a94  b.ls 0x71001e5ab8
71001e5a98  ldr x8,[x9, x8, LSL #0x3]
71001e5a9c  add x19,x8,#0x20
71001e5aa0  ldr x8,[x19]
71001e5aa4  cbz x8,0x71001e5ad0
71001e5aa8  ldr x8,[x8, #0x10]
71001e5aac  cbz x8,0x71001e5ad0
71001e5ab0  ldr x25,[x8, #0x10]
71001e5ab4  b 0x71001e5ad4
71001e5ab8  adrp x0,0x71042c4000
71001e5abc  add x0,x0,#0x35f
71001e5ac0  mov w1,#0x47
71001e5ac4  orr w2,wzr,#0xe0000003
71001e5ac8  mov w3,wzr
71001e5acc  bl 0x71001b1300
71001e5ad0  mov x25,xzr
71001e5ad4  ldr x8,[x25, #0x78]!
71001e5ad8  ldr x8,[x8, #0x10]
71001e5adc  mov x0,x25
71001e5ae0  blr x8
71001e5ae4  add x8,sp,#0x20
71001e5ae8  add x20,x8,#0x8
71001e5aec  adrp x8,0x71052a6000
71001e5af0  stp x20,x20,[sp, #0x28]
71001e5af4  ldr x8,[x8, #0xf68]
71001e5af8  str xzr,[sp, #0x38]
71001e5afc  add x8,x8,#0x10
71001e5b00  str x8,[sp, #0x20]
71001e5b04  ldr x23,[x22, #0x80]
71001e5b08  add x19,x22,#0x78
71001e5b0c  cmp x19,x23
71001e5b10  b.eq 0x71001e5c5c
71001e5b14  stp x25,x24,[sp, #0x8]
71001e5b18  adrp x8,0x71052a6000
71001e5b1c  adrp x9,0x71052a6000
71001e5b20  ldr x8,[x8, #0xf70]
71001e5b24  ldr x9,[x9, #0xe70]
71001e5b28  adrp x22,0x710449c000
71001e5b2c  add x22,x22,#0xe33
71001e5b30  add x8,x8,#0x10
71001e5b34  add x24,x9,#0x10
71001e5b38  str x8,[sp, #0x18]
71001e5b3c  add x25,x23,#0x18
71001e5b40  mov x0,x25
71001e5b44  mov x1,x22
71001e5b48  mov x2,xzr
71001e5b4c  bl 0x71001f2ba0
71001e5b50  mov x26,x0
71001e5b54  mov x0,x21
71001e5b58  mov x1,x22
71001e5b5c  mov x2,xzr
71001e5b60  bl 0x71001f2ba0
71001e5b64  cmp w26,w0
71001e5b68  b.ne 0x71001e5c34
71001e5b6c  ldr w8,[x23, #0x90]
71001e5b70  cmn w8,#0x1
71001e5b74  b.eq 0x71001e5c34
71001e5b78  mov w0,#0xb0
71001e5b7c  bl 0x71001b1820
71001e5b80  ldr x8,[sp, #0x18]
71001e5b84  str x8,[x0, #0x10]
71001e5b88  mov x27,x0
71001e5b8c  mov x8,x0
71001e5b90  str xzr,[x0]
71001e5b94  mov x26,x0
71001e5b98  str x24,[x27, #0x18]!
71001e5b9c  str xzr,[x8, #0x38]!
71001e5ba0  str x8,[x0, #0x30]
71001e5ba4  mov x8,x0
71001e5ba8  str xzr,[x8, #0x50]!
71001e5bac  stp xzr,x8,[x0, #0x40]
71001e5bb0  mov x8,x0
71001e5bb4  str xzr,[x8, #0x68]!
71001e5bb8  stp xzr,x8,[x0, #0x58]
71001e5bbc  mov w8,#0x1
71001e5bc0  stp xzr,xzr,[x0, #0x70]
71001e5bc4  strh w8,[x0, #0x80]
71001e5bc8  strb wzr,[x0, #0x82]
71001e5bcc  mov w0,#0x90
71001e5bd0  bl 0x71001af850
71001e5bd4  mov x28,x0
71001e5bd8  cbz x0,0x71001e5be4
71001e5bdc  mov x0,x28
71001e5be0  bl 0x71001beb40
71001e5be4  mov x0,x27
71001e5be8  mov x1,x25
71001e5bec  str x28,[x26, #0x20]
71001e5bf0  bl 0x71001f1f40
71001e5bf4  ldr x8,[x23, #0x88]
71001e5bf8  str x8,[x26, #0x88]
71001e5bfc  ldr x10,[x23, #0xa0]
71001e5c00  ldp x8,x9,[x23, #0x90]
71001e5c04  ldr w11,[x23, #0xa8]
71001e5c08  str w11,[x26, #0xa8]
71001e5c0c  stp x9,x10,[x26, #0x98]
71001e5c10  str x8,[x26, #0x90]
71001e5c14  str x20,[x26, #0x8]
71001e5c18  ldr x8,[sp, #0x28]
71001e5c1c  str x8,[x26]
71001e5c20  str x26,[x8, #0x8]
71001e5c24  ldr x8,[sp, #0x38]
71001e5c28  add x8,x8,#0x1
71001e5c2c  str x26,[sp, #0x28]
71001e5c30  str x8,[sp, #0x38]
71001e5c34  ldr x23,[x23, #0x8]
71001e5c38  cmp x19,x23
71001e5c3c  b.ne 0x71001e5b3c
71001e5c40  ldr x19,[sp, #0x30]
71001e5c44  ldp x25,x24,[sp, #0x8]
71001e5c48  add x8,sp,#0x20
71001e5c4c  add x23,x8,#0x8
71001e5c50  cmp x23,x19
71001e5c54  b.ne 0x71001e5c70
71001e5c58  b 0x71001e5c9c
71001e5c5c  mov x19,x20
71001e5c60  add x8,sp,#0x20
71001e5c64  add x23,x8,#0x8
71001e5c68  cmp x23,x19
71001e5c6c  b.eq 0x71001e5c9c
71001e5c70  adrp x21,0x710449c000
71001e5c74  add x21,x21,#0xe5b
71001e5c78  add x22,x19,#0x18
71001e5c7c  mov x0,x22
71001e5c80  mov x1,x21
71001e5c84  mov x2,xzr
71001e5c88  bl 0x71001f2ba0
71001e5c8c  tbz w0,#0x1,0x71001e5cc0
71001e5c90  ldr x19,[x19, #0x8]
71001e5c94  cmp x23,x19
71001e5c98  b.ne 0x71001e5c78
71001e5c9c  ldr x8,[sp, #0x38]
71001e5ca0  cbz x8,0x71001e5d28
71001e5ca4  ldr x8,[sp, #0x30]
71001e5ca8  add x1,x8,#0x18
71001e5cac  mov x0,x24
71001e5cb0  bl 0x71001f1f40
71001e5cb4  ldr x8,[sp, #0x38]
71001e5cb8  cbnz x8,0x71001e5cd4
71001e5cbc  b 0x71001e5d20
71001e5cc0  mov x0,x24
71001e5cc4  mov x1,x22
71001e5cc8  bl 0x71001f1f40
71001e5ccc  ldr x8,[sp, #0x38]
71001e5cd0  cbz x8,0x71001e5d20
71001e5cd4  ldp x8,x19,[sp, #0x28]
71001e5cd8  ldr x9,[x8, #0x8]
71001e5cdc  ldr x10,[x19]
71001e5ce0  str x9,[x10, #0x8]
71001e5ce4  ldr x8,[x8, #0x8]
71001e5ce8  cmp x19,x20
71001e5cec  str x10,[x8]
71001e5cf0  str xzr,[sp, #0x38]
71001e5cf4  b.eq 0x71001e5d20
71001e5cf8  mov x0,x19
71001e5cfc  ldr x21,[x19, #0x8]
71001e5d00  ldr x8,[x0, #0x10]!
71001e5d04  ldr x8,[x8]
71001e5d08  blr x8
71001e5d0c  mov x0,x19
71001e5d10  bl 0x71001b1870
71001e5d14  cmp x21,x20
71001e5d18  mov x19,x21
71001e5d1c  b.ne 0x71001e5cf8
71001e5d20  mov w19,#0x1
71001e5d24  b 0x71001e5d2c
71001e5d28  mov w19,wzr
71001e5d2c  ldr x8,[x25]
71001e5d30  ldr x8,[x8, #0x20]
71001e5d34  mov x0,x25
71001e5d38  blr x8
71001e5d3c  mov w0,w19
71001e5d40  ldp x29,x30,[sp, #0x90]
71001e5d44  ldp x20,x19,[sp, #0x80]
71001e5d48  ldp x22,x21,[sp, #0x70]
71001e5d4c  ldp x24,x23,[sp, #0x60]
71001e5d50  ldp x26,x25,[sp, #0x50]
71001e5d54  ldp x28,x27,[sp, #0x40]
71001e5d58  add sp,sp,#0xa0
71001e5d5c  ret
