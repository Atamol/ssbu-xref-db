// addr:      7101eb3a40
// offset:    0x1eb3a40
// name:      FUN_7101eb3a40
// mangled:   
// size:      896

7101eb3a40  sub sp,sp,#0xb0
7101eb3a44  str d8,[sp, #0x80]
7101eb3a48  str x21,[sp, #0x88]
7101eb3a4c  stp x20,x19,[sp, #0x90]
7101eb3a50  stp x29,x30,[sp, #0xa0]
7101eb3a54  add x29,sp,#0xa0
7101eb3a58  ldr x8,[x0, #0x8]
7101eb3a5c  ldr x21,[x8]
7101eb3a60  ldr x8,[x0, #0x318]
7101eb3a64  ldrb w9,[x8, #0x161]
7101eb3a68  ldr w8,[x0, #0x270]
7101eb3a6c  mov x19,x0
7101eb3a70  ldr x0,[x21, #0x10]
7101eb3a74  cmp w8,#0x1
7101eb3a78  cbz w9,0x7101eb3af8
7101eb3a7c  b.ne 0x7101eb3b60
7101eb3a80  ldr x20,[x0, #0x8]
7101eb3a84  cbz x20,0x7101eb3adc
7101eb3a88  adrp x1,0x710435b000
7101eb3a8c  add x1,x1,#0xefc
7101eb3a90  mov x0,x20
7101eb3a94  bl 0x71037964b0
7101eb3a98  cbz x0,0x7101eb3ab8
7101eb3a9c  ldr x8,[x0]
7101eb3aa0  ldr x8,[x8, #0x138]
7101eb3aa4  blr x8
7101eb3aa8  tbz w0,#0x0,0x7101eb3da8
7101eb3aac  ldr x8,[x21, #0x10]
7101eb3ab0  ldr x20,[x8, #0x8]
7101eb3ab4  cbz x20,0x7101eb3adc
7101eb3ab8  adrp x1,0x710425f000
7101eb3abc  add x1,x1,#0xc28
7101eb3ac0  mov x0,x20
7101eb3ac4  bl 0x71037964b0
7101eb3ac8  cbz x0,0x7101eb3adc
7101eb3acc  ldr x8,[x0]
7101eb3ad0  ldr x8,[x8, #0x138]
7101eb3ad4  blr x8
7101eb3ad8  tbz w0,#0x0,0x7101eb3da8
7101eb3adc  ldr x8,[x19, #0x358]
7101eb3ae0  ldrb w9,[x8, #0x1ec]
7101eb3ae4  cbz w9,0x7101eb3b58
7101eb3ae8  ldr x8,[x8, #0x1e0]
7101eb3aec  ldr x0,[x8, #0x8]
7101eb3af0  cbnz x0,0x7101eb3b48
7101eb3af4  b 0x7101eb3b58
7101eb3af8  b.ne 0x7101eb3be4
7101eb3afc  ldr x20,[x0, #0x8]
7101eb3b00  cbz x20,0x7101eb3b58
7101eb3b04  adrp x1,0x710435b000
7101eb3b08  add x1,x1,#0xefc
7101eb3b0c  mov x0,x20
7101eb3b10  bl 0x71037964b0
7101eb3b14  cbz x0,0x7101eb3b34
7101eb3b18  ldr x8,[x0]
7101eb3b1c  ldr x8,[x8, #0x138]
7101eb3b20  blr x8
7101eb3b24  tbz w0,#0x0,0x7101eb3da8
7101eb3b28  ldr x8,[x21, #0x10]
7101eb3b2c  ldr x20,[x8, #0x8]
7101eb3b30  cbz x20,0x7101eb3b58
7101eb3b34  adrp x1,0x71043cf000
7101eb3b38  add x1,x1,#0xc04
7101eb3b3c  mov x0,x20
7101eb3b40  bl 0x71037964b0
7101eb3b44  cbz x0,0x7101eb3b58
7101eb3b48  ldr x8,[x0]
7101eb3b4c  ldr x8,[x8, #0x138]
7101eb3b50  blr x8
7101eb3b54  tbz w0,#0x0,0x7101eb3da8
7101eb3b58  stp xzr,xzr,[x19, #0x10]
7101eb3b5c  b 0x7101eb3da8
7101eb3b60  fmov s8,0x3f800000
7101eb3b64  mov v0.16B,v8.16B
7101eb3b68  adrp x1,0x710435b000
7101eb3b6c  add x1,x1,#0xefc
7101eb3b70  bl 0x7103778300
7101eb3b74  ldr x0,[x21, #0x10]
7101eb3b78  mov v0.16B,v8.16B
7101eb3b7c  adrp x1,0x710425f000
7101eb3b80  add x1,x1,#0xc28
7101eb3b84  bl 0x7103778300
7101eb3b88  ldr x8,[x19, #0x358]
7101eb3b8c  ldrb w9,[x8, #0x1ec]
7101eb3b90  cbz w9,0x7101eb3ba0
7101eb3b94  fmov s0,0x3f800000
7101eb3b98  add x0,x8,#0x1d8
7101eb3b9c  bl 0x710377aee0
7101eb3ba0  ldr x0,[x19, #0x318]
7101eb3ba4  mov w1,#0x1
7101eb3ba8  mov w20,#0x1
7101eb3bac  bl 0x7101ec5050
7101eb3bb0  str w20,[x19, #0x270]
7101eb3bb4  adrp x8,0x710532f000
7101eb3bb8  ldr x8,[x8, #0x8d0]
7101eb3bbc  ldr x0,[x8, #0x8]
7101eb3bc0  ldp x8,x9,[x0, #0x40]
7101eb3bc4  sub x9,x9,x8
7101eb3bc8  asr x9,x9,#0x3
7101eb3bcc  cmp x9,#0x6
7101eb3bd0  b.cc 0x7101eb3c44
7101eb3bd4  ldr x19,[x8, #0x28]
7101eb3bd8  ldrb w8,[x0, #0x191]
7101eb3bdc  cbnz w8,0x7101eb3cc0
7101eb3be0  b 0x7101eb3c50
7101eb3be4  fmov s8,0x3f800000
7101eb3be8  mov v0.16B,v8.16B
7101eb3bec  adrp x1,0x710435b000
7101eb3bf0  add x1,x1,#0xefc
7101eb3bf4  bl 0x7103778300
7101eb3bf8  ldr x0,[x21, #0x10]
7101eb3bfc  mov v0.16B,v8.16B
7101eb3c00  adrp x1,0x71043cf000
7101eb3c04  add x1,x1,#0xc04
7101eb3c08  bl 0x7103778300
7101eb3c0c  mov w8,#0x1
7101eb3c10  str w8,[x19, #0x270]
7101eb3c14  adrp x8,0x710532f000
7101eb3c18  ldr x8,[x8, #0x8d0]
7101eb3c1c  ldr x0,[x8, #0x8]
7101eb3c20  ldp x8,x9,[x0, #0x40]
7101eb3c24  sub x9,x9,x8
7101eb3c28  asr x9,x9,#0x3
7101eb3c2c  cmp x9,#0x6
7101eb3c30  b.cc 0x7101eb3cf8
7101eb3c34  ldr x19,[x8, #0x28]
7101eb3c38  ldrb w8,[x0, #0x191]
7101eb3c3c  cbnz w8,0x7101eb3d74
7101eb3c40  b 0x7101eb3d04
7101eb3c44  mov x19,xzr
7101eb3c48  ldrb w8,[x0, #0x191]
7101eb3c4c  cbnz w8,0x7101eb3cc0
7101eb3c50  mov w2,#0x4
7101eb3c54  mov x1,x19
7101eb3c58  bl 0x7103313f20
7101eb3c5c  tbz w0,#0x0,0x7101eb3cc0
7101eb3c60  add x0,sp,#0x40
7101eb3c64  mov x1,x19
7101eb3c68  bl 0x71024076d0
7101eb3c6c  ldr x8,[sp, #0x50]
7101eb3c70  adrp x9,0x7104f73000
7101eb3c74  add x9,x9,#0xd50
7101eb3c78  str x9,[sp, #0x48]
7101eb3c7c  cbz x8,0x7101eb3cec
7101eb3c80  adrp x8,0x7106dd5000
7101eb3c84  ldrb w8,[x8, #0x3a8]
7101eb3c88  cmp w8,#0x1
7101eb3c8c  b.ne 0x7101eb3cec
7101eb3c90  adrp x9,0x7106dd5000
7101eb3c94  ldr w8,[sp, #0x58]
7101eb3c98  ldr w9,[x9, #0x3ac]
7101eb3c9c  cmp w8,w9
7101eb3ca0  b.ne 0x7101eb3cec
7101eb3ca4  ldr x8,[sp, #0x50]
7101eb3ca8  ldr wzr,[x8, #0x38]!
7101eb3cac  ldaxr w9,[x8]
7101eb3cb0  sub w9,w9,#0x1
7101eb3cb4  stlxr w10,w9,[x8]
7101eb3cb8  cbnz w10,0x7101eb3cac
7101eb3cbc  b 0x7101eb3cec
7101eb3cc0  mov x8,#0x650000000000
7101eb3cc4  movk x8,#0x87, LSL #48
7101eb3cc8  strb wzr,[sp, #0x60]
7101eb3ccc  stp xzr,x8,[sp, #0x50]
7101eb3cd0  mov x8,#-0x1
7101eb3cd4  stp x8,xzr,[sp, #0x68]
7101eb3cd8  adrp x8,0x7104f73000
7101eb3cdc  add x8,x8,#0xd50
7101eb3ce0  str wzr,[sp, #0x40]
7101eb3ce4  str xzr,[sp, #0x78]
7101eb3ce8  str x8,[sp, #0x48]
7101eb3cec  str xzr,[sp, #0x50]
7101eb3cf0  strb wzr,[sp, #0x60]
7101eb3cf4  b 0x7101eb3da8
7101eb3cf8  mov x19,xzr
7101eb3cfc  ldrb w8,[x0, #0x191]
7101eb3d00  cbnz w8,0x7101eb3d74
7101eb3d04  mov w2,#0x4
7101eb3d08  mov x1,x19
7101eb3d0c  bl 0x7103313f20
7101eb3d10  tbz w0,#0x0,0x7101eb3d74
7101eb3d14  mov x0,sp
7101eb3d18  mov x1,x19
7101eb3d1c  bl 0x71024076d0
7101eb3d20  ldr x8,[sp, #0x10]
7101eb3d24  adrp x9,0x7104f73000
7101eb3d28  add x9,x9,#0xd50
7101eb3d2c  str x9,[sp, #0x8]
7101eb3d30  cbz x8,0x7101eb3da0
7101eb3d34  adrp x8,0x7106dd5000
7101eb3d38  ldrb w8,[x8, #0x3a8]
7101eb3d3c  cmp w8,#0x1
7101eb3d40  b.ne 0x7101eb3da0
7101eb3d44  adrp x9,0x7106dd5000
7101eb3d48  ldr w8,[sp, #0x18]
7101eb3d4c  ldr w9,[x9, #0x3ac]
7101eb3d50  cmp w8,w9
7101eb3d54  b.ne 0x7101eb3da0
7101eb3d58  ldr x8,[sp, #0x10]
7101eb3d5c  ldr wzr,[x8, #0x38]!
7101eb3d60  ldaxr w9,[x8]
7101eb3d64  sub w9,w9,#0x1
7101eb3d68  stlxr w10,w9,[x8]
7101eb3d6c  cbnz w10,0x7101eb3d60
7101eb3d70  b 0x7101eb3da0
7101eb3d74  mov x8,#0x650000000000
7101eb3d78  movk x8,#0x87, LSL #48
7101eb3d7c  strb wzr,[sp, #0x20]
7101eb3d80  stp xzr,x8,[sp, #0x10]
7101eb3d84  mov x8,#-0x1
7101eb3d88  stp x8,xzr,[sp, #0x28]
7101eb3d8c  adrp x8,0x7104f73000
7101eb3d90  add x8,x8,#0xd50
7101eb3d94  str wzr,[sp]
7101eb3d98  str xzr,[sp, #0x38]
7101eb3d9c  str x8,[sp, #0x8]
7101eb3da0  str xzr,[sp, #0x10]
7101eb3da4  strb wzr,[sp, #0x20]
7101eb3da8  ldr d8,[sp, #0x80]
7101eb3dac  ldp x29,x30,[sp, #0xa0]
7101eb3db0  ldp x20,x19,[sp, #0x90]
7101eb3db4  ldr x21,[sp, #0x88]
7101eb3db8  add sp,sp,#0xb0
7101eb3dbc  ret
