// addr:      71001e2b10
// offset:    0x1e2b10
// name:      FUN_71001e2b10
// mangled:   
// size:      440

71001e2b10  sub sp,sp,#0x50
71001e2b14  stp x22,x21,[sp, #0x20]
71001e2b18  stp x20,x19,[sp, #0x30]
71001e2b1c  stp x29,x30,[sp, #0x40]
71001e2b20  add x29,sp,#0x40
71001e2b24  adrp x21,0x71052a4000
71001e2b28  ldr x21,[x21, #0xda8]
71001e2b2c  adrp x20,0x71052a4000
71001e2b30  ldrb w8,[x21]
71001e2b34  ldr x20,[x20, #0xdb0]
71001e2b38  mov x19,x0
71001e2b3c  add x22,x20,#0x18
71001e2b40  cbz w8,0x71001e2b7c
71001e2b44  adrp x8,0x71052a4000
71001e2b48  ldr x8,[x8, #0xdb8]
71001e2b4c  ldr x0,[x8]
71001e2b50  bl 0x7101717960
71001e2b54  ldr w8,[x0]
71001e2b58  cbz w8,0x71001e2b7c
71001e2b5c  ldr x10,[x20, #0xa0]
71001e2b60  ldp x9,x10,[x10]
71001e2b64  sub x10,x10,x9
71001e2b68  asr x10,x10,#0x3
71001e2b6c  cmp x10,x8
71001e2b70  b.ls 0x71001e2be0
71001e2b74  ldr x8,[x9, x8, LSL #0x3]
71001e2b78  add x22,x8,#0x10
71001e2b7c  ldr x8,[x22]
71001e2b80  cbz x8,0x71001e2bf8
71001e2b84  ldr x8,[x8, #0x10]
71001e2b88  cbz x8,0x71001e2bf8
71001e2b8c  ldrb w8,[x21]
71001e2b90  add x21,x20,#0x18
71001e2b94  cbz w8,0x71001e2bd0
71001e2b98  adrp x8,0x71052a4000
71001e2b9c  ldr x8,[x8, #0xdb8]
71001e2ba0  ldr x0,[x8]
71001e2ba4  bl 0x7101717960
71001e2ba8  ldr w8,[x0]
71001e2bac  cbz w8,0x71001e2bd0
71001e2bb0  ldr x10,[x20, #0xa0]
71001e2bb4  ldp x9,x10,[x10]
71001e2bb8  sub x10,x10,x9
71001e2bbc  asr x10,x10,#0x3
71001e2bc0  cmp x10,x8
71001e2bc4  b.ls 0x71001e2c0c
71001e2bc8  ldr x8,[x9, x8, LSL #0x3]
71001e2bcc  add x21,x8,#0x10
71001e2bd0  ldr x8,[x21]
71001e2bd4  cbz x8,0x71001e2c24
71001e2bd8  ldr x20,[x8, #0x10]
71001e2bdc  b 0x71001e2c28
71001e2be0  adrp x0,0x71042c4000
71001e2be4  add x0,x0,#0x35f
71001e2be8  mov w1,#0x47
71001e2bec  orr w2,wzr,#0xe0000003
71001e2bf0  mov w3,wzr
71001e2bf4  bl 0x71001b1300
71001e2bf8  adrp x8,0x71052a6000
71001e2bfc  adrp x9,0x71052a6000
71001e2c00  ldr x8,[x8, #0xc28]
71001e2c04  ldr x9,[x9, #0xee0]
71001e2c08  b 0x71001e2c94
71001e2c0c  adrp x0,0x71042c4000
71001e2c10  add x0,x0,#0x35f
71001e2c14  mov w1,#0x47
71001e2c18  orr w2,wzr,#0xe0000003
71001e2c1c  mov w3,wzr
71001e2c20  bl 0x71001b1300
71001e2c24  mov x20,xzr
71001e2c28  ldr x8,[x20, #0x88]!
71001e2c2c  ldr x8,[x8, #0x10]
71001e2c30  mov x0,x20
71001e2c34  add x21,x19,#0x260
71001e2c38  sub x22,x20,#0x8
71001e2c3c  blr x8
71001e2c40  adrp x8,0x71052a6000
71001e2c44  ldr x8,[x8, #0xe78]
71001e2c48  ldr x0,[x8]
71001e2c4c  ldr x8,[x0]
71001e2c50  ldr x8,[x8, #0x28]
71001e2c54  mov x1,x22
71001e2c58  mov x2,x21
71001e2c5c  blr x8
71001e2c60  ldr x8,[x20]
71001e2c64  ldr x8,[x8, #0x20]
71001e2c68  mov x0,x20
71001e2c6c  blr x8
71001e2c70  ldr x8,[x19, #0x270]
71001e2c74  cbz x8,0x71001e2c80
71001e2c78  ldr x8,[x19, #0x108]
71001e2c7c  cbnz x8,0x71001e2c84
71001e2c80  str wzr,[x19, #0xf0]
71001e2c84  adrp x8,0x71052a6000
71001e2c88  adrp x9,0x71052a6000
71001e2c8c  ldr x8,[x8, #0xc28]
71001e2c90  ldr x9,[x9, #0xef0]
71001e2c94  add x8,x8,#0x10
71001e2c98  stp x8,x9,[sp]
71001e2c9c  adrp x8,0x7104411000
71001e2ca0  add x8,x8,#0x4cc
71001e2ca4  mov x1,sp
71001e2ca8  mov x0,x19
71001e2cac  stp xzr,x8,[sp, #0x10]
71001e2cb0  bl 0x71001d3d60
71001e2cb4  ldp x29,x30,[sp, #0x40]
71001e2cb8  ldp x20,x19,[sp, #0x30]
71001e2cbc  ldp x22,x21,[sp, #0x20]
71001e2cc0  add sp,sp,#0x50
71001e2cc4  ret
