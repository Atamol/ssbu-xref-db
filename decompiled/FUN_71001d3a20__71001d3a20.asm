// addr:      71001d3a20
// offset:    0x1d3a20
// name:      FUN_71001d3a20
// mangled:   
// size:      820

71001d3a20  str x25,[sp, #-0x50]!
71001d3a24  stp x24,x23,[sp, #0x10]
71001d3a28  stp x22,x21,[sp, #0x20]
71001d3a2c  stp x20,x19,[sp, #0x30]
71001d3a30  stp x29,x30,[sp, #0x40]
71001d3a34  add x29,sp,#0x40
71001d3a38  adrp x25,0x71052a4000
71001d3a3c  ldr x25,[x25, #0xda8]
71001d3a40  adrp x24,0x71052a4000
71001d3a44  ldrb w8,[x25]
71001d3a48  ldr x24,[x24, #0xdb0]
71001d3a4c  mov x19,x0
71001d3a50  add x20,x24,#0x28
71001d3a54  cbz w8,0x71001d3a90
71001d3a58  adrp x8,0x71052a4000
71001d3a5c  ldr x8,[x8, #0xdb8]
71001d3a60  ldr x0,[x8]
71001d3a64  bl 0x7101717960
71001d3a68  ldr w8,[x0]
71001d3a6c  cbz w8,0x71001d3a90
71001d3a70  ldr x10,[x24, #0xa0]
71001d3a74  ldp x9,x10,[x10]
71001d3a78  sub x10,x10,x9
71001d3a7c  asr x10,x10,#0x3
71001d3a80  cmp x10,x8
71001d3a84  b.ls 0x71001d3aa8
71001d3a88  ldr x8,[x9, x8, LSL #0x3]
71001d3a8c  add x20,x8,#0x20
71001d3a90  ldr x8,[x20]
71001d3a94  cbz x8,0x71001d3ac0
71001d3a98  ldr x8,[x8, #0x10]
71001d3a9c  cbz x8,0x71001d3ac0
71001d3aa0  ldr x20,[x8, #0x10]
71001d3aa4  b 0x71001d3ac4
71001d3aa8  adrp x0,0x71042c4000
71001d3aac  add x0,x0,#0x35f
71001d3ab0  mov w1,#0x47
71001d3ab4  orr w2,wzr,#0xe0000003
71001d3ab8  mov w3,wzr
71001d3abc  bl 0x71001b1300
71001d3ac0  mov x20,xzr
71001d3ac4  ldr x8,[x20, #0x78]!
71001d3ac8  ldr x8,[x8, #0x10]
71001d3acc  mov x0,x20
71001d3ad0  blr x8
71001d3ad4  ldr x0,[x19, #0xa8]
71001d3ad8  bl 0x71001ccd00
71001d3adc  tbz w0,#0x0,0x71001d3b74
71001d3ae0  ldr x8,[x19, #0xa8]
71001d3ae4  ldr w8,[x8, #0x18]
71001d3ae8  str w8,[x19, #0xa0]
71001d3aec  ldrb w8,[x25]
71001d3af0  add x21,x24,#0x28
71001d3af4  cbz w8,0x71001d3b30
71001d3af8  adrp x8,0x71052a4000
71001d3afc  ldr x8,[x8, #0xdb8]
71001d3b00  ldr x0,[x8]
71001d3b04  bl 0x7101717960
71001d3b08  ldr w8,[x0]
71001d3b0c  cbz w8,0x71001d3b30
71001d3b10  ldr x10,[x24, #0xa0]
71001d3b14  ldp x9,x10,[x10]
71001d3b18  sub x10,x10,x9
71001d3b1c  asr x10,x10,#0x3
71001d3b20  cmp x10,x8
71001d3b24  b.ls 0x71001d3b7c
71001d3b28  ldr x8,[x9, x8, LSL #0x3]
71001d3b2c  add x21,x8,#0x20
71001d3b30  ldr x8,[x21]
71001d3b34  cbz x8,0x71001d3b94
71001d3b38  ldr x8,[x8, #0x10]
71001d3b3c  cbz x8,0x71001d3b94
71001d3b40  ldr x21,[x8, #0x10]
71001d3b44  adrp x8,0x71052a6000
71001d3b48  ldr x8,[x8, #0xb88]
71001d3b4c  ldrb w8,[x8]
71001d3b50  cbnz w8,0x71001d3ba8
71001d3b54  mov x0,x21
71001d3b58  mov x1,x19
71001d3b5c  mov w2,wzr
71001d3b60  bl 0x71001d8820
71001d3b64  ldrb w8,[x25]
71001d3b68  add x21,x24,#0x28
71001d3b6c  cbnz w8,0x71001d3c0c
71001d3b70  b 0x71001d3c44
71001d3b74  mov w19,wzr
71001d3b78  b 0x71001d3d10
71001d3b7c  adrp x0,0x71042c4000
71001d3b80  add x0,x0,#0x35f
71001d3b84  mov w1,#0x47
71001d3b88  orr w2,wzr,#0xe0000003
71001d3b8c  mov w3,wzr
71001d3b90  bl 0x71001b1300
71001d3b94  mov x21,xzr
71001d3b98  adrp x8,0x71052a6000
71001d3b9c  ldr x8,[x8, #0xb88]
71001d3ba0  ldrb w8,[x8]
71001d3ba4  cbz w8,0x71001d3b54
71001d3ba8  mov x22,x21
71001d3bac  ldr x8,[x22, #0xc0]!
71001d3bb0  ldr x8,[x8, #0x10]
71001d3bb4  mov x0,x22
71001d3bb8  blr x8
71001d3bbc  mov x23,x21
71001d3bc0  ldr x8,[x23, #0x30]!
71001d3bc4  ldr x8,[x8, #0x10]
71001d3bc8  mov x0,x23
71001d3bcc  blr x8
71001d3bd0  mov x0,x21
71001d3bd4  mov x1,x19
71001d3bd8  mov w2,wzr
71001d3bdc  bl 0x71001d8820
71001d3be0  ldr x8,[x23]
71001d3be4  ldr x8,[x8, #0x20]
71001d3be8  mov x0,x23
71001d3bec  blr x8
71001d3bf0  ldr x8,[x22]
71001d3bf4  ldr x8,[x8, #0x20]
71001d3bf8  mov x0,x22
71001d3bfc  blr x8
71001d3c00  ldrb w8,[x25]
71001d3c04  add x21,x24,#0x28
71001d3c08  cbz w8,0x71001d3c44
71001d3c0c  adrp x8,0x71052a4000
71001d3c10  ldr x8,[x8, #0xdb8]
71001d3c14  ldr x0,[x8]
71001d3c18  bl 0x7101717960
71001d3c1c  ldr w8,[x0]
71001d3c20  cbz w8,0x71001d3c44
71001d3c24  ldr x10,[x24, #0xa0]
71001d3c28  ldp x9,x10,[x10]
71001d3c2c  sub x10,x10,x9
71001d3c30  asr x10,x10,#0x3
71001d3c34  cmp x10,x8
71001d3c38  b.ls 0x71001d3d3c
71001d3c3c  ldr x8,[x9, x8, LSL #0x3]
71001d3c40  add x21,x8,#0x20
71001d3c44  ldr x8,[x21]
71001d3c48  ldr x8,[x8, #0x10]
71001d3c4c  ldr x21,[x8, #0x18]
71001d3c50  ldr x8,[x19, #0xb0]
71001d3c54  ldr w22,[x19, #0xa0]
71001d3c58  ldr w23,[x8, #0x18]
71001d3c5c  mov w0,#0x28
71001d3c60  bl 0x71001b1820
71001d3c64  stp w22,w23,[x0, #0x1c]
71001d3c68  mov x9,x21
71001d3c6c  mov x1,x0
71001d3c70  ldr x8,[x9, #0x68]!
71001d3c74  cbnz x8,0x71001d3c84
71001d3c78  mov x8,x9
71001d3c7c  b 0x71001d3cb0
71001d3c80  mov x8,x9
71001d3c84  ldr w9,[x8, #0x1c]
71001d3c88  cmp w9,w22
71001d3c8c  b.ls 0x71001d3c9c
71001d3c90  ldr x9,[x8]
71001d3c94  cbnz x9,0x71001d3c80
71001d3c98  b 0x71001d3cac
71001d3c9c  ldr x9,[x8, #0x8]
71001d3ca0  cbnz x9,0x71001d3c80
71001d3ca4  add x9,x8,#0x8
71001d3ca8  b 0x71001d3cb0
71001d3cac  mov x9,x8
71001d3cb0  stp xzr,xzr,[x1]
71001d3cb4  str x8,[x1, #0x10]
71001d3cb8  str x1,[x9]
71001d3cbc  ldr x8,[x21, #0x60]
71001d3cc0  ldr x8,[x8]
71001d3cc4  cbz x8,0x71001d3cd0
71001d3cc8  str x8,[x21, #0x60]
71001d3ccc  ldr x1,[x9]
71001d3cd0  ldr x0,[x21, #0x68]
71001d3cd4  bl 0x71003e59f0
71001d3cd8  ldr x8,[x21, #0x70]
71001d3cdc  add x8,x8,#0x1
71001d3ce0  str x8,[x21, #0x70]
71001d3ce4  add x8,sp,#0x8
71001d3ce8  bl 0x71001b12a0
71001d3cec  adrp x8,0x71052a6000
71001d3cf0  ldr x8,[x8, #0xc40]
71001d3cf4  ldr x9,[sp, #0x8]
71001d3cf8  str x9,[x19, #0x68]
71001d3cfc  adrp x9,0x7104411000
71001d3d00  add x9,x9,#0x4cc
71001d3d04  stp x8,xzr,[x19, #0x80]
71001d3d08  str x9,[x19, #0x90]
71001d3d0c  mov w19,#0x1
71001d3d10  ldr x8,[x20]
71001d3d14  ldr x8,[x8, #0x20]
71001d3d18  mov x0,x20
71001d3d1c  blr x8
71001d3d20  mov w0,w19
71001d3d24  ldp x29,x30,[sp, #0x40]
71001d3d28  ldp x20,x19,[sp, #0x30]
71001d3d2c  ldp x22,x21,[sp, #0x20]
71001d3d30  ldp x24,x23,[sp, #0x10]
71001d3d34  ldr x25,[sp], #0x50
71001d3d38  ret
71001d3d3c  adrp x0,0x71042c4000
71001d3d40  add x0,x0,#0x35f
71001d3d44  mov w1,#0x47
71001d3d48  orr w2,wzr,#0xe0000003
71001d3d4c  mov w3,wzr
71001d3d50  bl 0x71001b1300
