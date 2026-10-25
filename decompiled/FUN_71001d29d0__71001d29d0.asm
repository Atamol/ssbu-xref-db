// addr:      71001d29d0
// offset:    0x1d29d0
// name:      FUN_71001d29d0
// mangled:   
// size:      764

71001d29d0  sub sp,sp,#0xb0
71001d29d4  str x27,[sp, #0x50]
71001d29d8  stp x26,x25,[sp, #0x60]
71001d29dc  stp x24,x23,[sp, #0x70]
71001d29e0  stp x22,x21,[sp, #0x80]
71001d29e4  stp x20,x19,[sp, #0x90]
71001d29e8  stp x29,x30,[sp, #0xa0]
71001d29ec  add x29,sp,#0xa0
71001d29f0  adrp x8,0x71052a6000
71001d29f4  ldr x8,[x8, #0x868]
71001d29f8  ldrb w8,[x8]
71001d29fc  mov x19,x0
71001d2a00  cbz w8,0x71001d2a14
71001d2a04  sub x8,x29,#0x48
71001d2a08  mov w0,wzr
71001d2a0c  bl 0x71001b68a0
71001d2a10  b 0x71001d2a1c
71001d2a14  sub x8,x29,#0x48
71001d2a18  bl 0x71001b6a50
71001d2a1c  adrp x8,0x71052a6000
71001d2a20  ldr x8,[x8, #0x870]
71001d2a24  ldur x9,[x29, #-0x48]
71001d2a28  str x9,[x8]
71001d2a2c  mov x20,x19
71001d2a30  ldr x8,[x20, #0x88]!
71001d2a34  ldur x21,[x20, #-0x40]
71001d2a38  sub x25,x20,#0x38
71001d2a3c  cmp x25,x21
71001d2a40  str x8,[x20, #0x8]
71001d2a44  b.eq 0x71001d2c94
71001d2a48  adrp x22,0x71052a4000
71001d2a4c  adrp x23,0x71052a4000
71001d2a50  adrp x24,0x71052a4000
71001d2a54  ldr x22,[x22, #0xda8]
71001d2a58  ldr x23,[x23, #0xdb0]
71001d2a5c  ldr x24,[x24, #0xdb8]
71001d2a60  mov w26,#0xb
71001d2a64  movk w26,#0x8001, LSL #16
71001d2a68  ldr x8,[x21, #0x28]
71001d2a6c  ldr w9,[x8, #0x14]
71001d2a70  cmp w9,#0x1
71001d2a74  b.ne 0x71001d2a8c
71001d2a78  ldr x8,[x8, #0x88]
71001d2a7c  ldur x9,[x29, #-0x48]
71001d2a80  cmp x8,#0x0
71001d2a84  ccmp x9,x8,#0x0,ne
71001d2a88  b.hi 0x71001d2ad4
71001d2a8c  ldr x8,[x21, #0x8]
71001d2a90  cbz x8,0x71001d2aa4
71001d2a94  mov x27,x8
71001d2a98  ldr x8,[x8]
71001d2a9c  cbnz x8,0x71001d2a94
71001d2aa0  b 0x71001d2bd0
71001d2aa4  mov x8,x21
71001d2aa8  ldr x27,[x8, #0x10]!
71001d2aac  ldr x9,[x27]
71001d2ab0  cmp x9,x21
71001d2ab4  b.eq 0x71001d2bd0
71001d2ab8  ldr x9,[x8]
71001d2abc  mov x8,x9
71001d2ac0  ldr x27,[x8, #0x10]!
71001d2ac4  ldr x10,[x27]
71001d2ac8  cmp x10,x9
71001d2acc  b.ne 0x71001d2ab8
71001d2ad0  b 0x71001d2bd0
71001d2ad4  ldrb w8,[x22]
71001d2ad8  add x27,x23,#0x28
71001d2adc  str xzr,[sp, #0x30]
71001d2ae0  stp xzr,xzr,[sp, #0x20]
71001d2ae4  cbz w8,0x71001d2b18
71001d2ae8  ldr x0,[x24]
71001d2aec  bl 0x7101717960
71001d2af0  ldr w8,[x0]
71001d2af4  cbz w8,0x71001d2b18
71001d2af8  ldr x10,[x23, #0xa0]
71001d2afc  ldp x9,x10,[x10]
71001d2b00  sub x10,x10,x9
71001d2b04  asr x10,x10,#0x3
71001d2b08  cmp x10,x8
71001d2b0c  b.ls 0x71001d2cb4
71001d2b10  ldr x8,[x9, x8, LSL #0x3]
71001d2b14  add x27,x8,#0x20
71001d2b18  ldr x8,[x27]
71001d2b1c  ldr x8,[x8, #0x10]
71001d2b20  ldr x0,[x8, #0x18]
71001d2b24  ldr x8,[x21, #0x28]
71001d2b28  ldr w1,[x8, #0x18]
71001d2b2c  add x2,sp,#0x20
71001d2b30  bl 0x71001d19f0
71001d2b34  ldr x1,[x19, #0x90]
71001d2b38  ldp x2,x3,[sp, #0x20]
71001d2b3c  mov x0,x20
71001d2b40  bl 0x71001d2cd0
71001d2b44  ldr x8,[x21, #0x8]
71001d2b48  cbz x8,0x71001d2b5c
71001d2b4c  mov x27,x8
71001d2b50  ldr x8,[x8]
71001d2b54  cbnz x8,0x71001d2b4c
71001d2b58  b 0x71001d2b88
71001d2b5c  mov x8,x21
71001d2b60  ldr x27,[x8, #0x10]!
71001d2b64  ldr x9,[x27]
71001d2b68  cmp x9,x21
71001d2b6c  b.eq 0x71001d2b88
71001d2b70  ldr x9,[x8]
71001d2b74  mov x8,x9
71001d2b78  ldr x27,[x8, #0x10]!
71001d2b7c  ldr x10,[x27]
71001d2b80  cmp x10,x9
71001d2b84  b.ne 0x71001d2b70
71001d2b88  ldr x21,[x21, #0x28]
71001d2b8c  add x0,sp,#0x8
71001d2b90  add x1,sp,#0x4
71001d2b94  str w26,[sp, #0x4]
71001d2b98  bl 0x71001b4200
71001d2b9c  ldp x9,x8,[sp, #0x10]
71001d2ba0  orr w1,wzr,#0x3
71001d2ba4  stp x9,x8,[sp, #0x40]
71001d2ba8  ldr x8,[sp, #0x8]
71001d2bac  add x2,sp,#0x38
71001d2bb0  mov w3,#0x1
71001d2bb4  mov x0,x21
71001d2bb8  str x8,[sp, #0x38]
71001d2bbc  bl 0x71001d0f00
71001d2bc0  ldr x0,[sp, #0x20]
71001d2bc4  cbz x0,0x71001d2bd0
71001d2bc8  str x0,[sp, #0x28]
71001d2bcc  bl 0x71001b1870
71001d2bd0  cmp x25,x27
71001d2bd4  mov x21,x27
71001d2bd8  b.ne 0x71001d2a68
71001d2bdc  ldr x20,[x19, #0x88]
71001d2be0  ldr x8,[x19, #0x90]
71001d2be4  cmp x20,x8
71001d2be8  b.ne 0x71001d2c00
71001d2bec  b 0x71001d2c94
71001d2bf0  add x20,x20,#0x4
71001d2bf4  ldr x8,[x19, #0x90]
71001d2bf8  cmp x20,x8
71001d2bfc  b.eq 0x71001d2c94
71001d2c00  ldrb w8,[x22]
71001d2c04  add x21,x23,#0x28
71001d2c08  cbz w8,0x71001d2c3c
71001d2c0c  ldr x0,[x24]
71001d2c10  bl 0x7101717960
71001d2c14  ldr w8,[x0]
71001d2c18  cbz w8,0x71001d2c3c
71001d2c1c  ldr x10,[x23, #0xa0]
71001d2c20  ldp x9,x10,[x10]
71001d2c24  sub x10,x10,x9
71001d2c28  asr x10,x10,#0x3
71001d2c2c  cmp x10,x8
71001d2c30  b.ls 0x71001d2cb4
71001d2c34  ldr x8,[x9, x8, LSL #0x3]
71001d2c38  add x21,x8,#0x20
71001d2c3c  ldr x8,[x21]
71001d2c40  ldr x8,[x8, #0x10]
71001d2c44  ldr x9,[x8, #0x18]
71001d2c48  ldr w8,[x20]
71001d2c4c  ldr x11,[x9, #0x50]!
71001d2c50  cbz x11,0x71001d2bf0
71001d2c54  mov x10,x9
71001d2c58  ldr w12,[x11, #0x20]
71001d2c5c  cmp w12,w8
71001d2c60  cset w12,cc
71001d2c64  csel x10,x10,x11,cc
71001d2c68  ldr x11,[x11, w12, UXTW #0x3]
71001d2c6c  cbnz x11,0x71001d2c58
71001d2c70  cmp x10,x9
71001d2c74  b.eq 0x71001d2bf0
71001d2c78  ldr w9,[x10, #0x20]
71001d2c7c  cmp w9,w8
71001d2c80  b.hi 0x71001d2bf0
71001d2c84  ldr x0,[x10, #0x28]
71001d2c88  cbz x0,0x71001d2bf0
71001d2c8c  bl 0x71001d0a10
71001d2c90  b 0x71001d2bf0
71001d2c94  ldp x29,x30,[sp, #0xa0]
71001d2c98  ldr x27,[sp, #0x50]
71001d2c9c  ldp x20,x19,[sp, #0x90]
71001d2ca0  ldp x22,x21,[sp, #0x80]
71001d2ca4  ldp x24,x23,[sp, #0x70]
71001d2ca8  ldp x26,x25,[sp, #0x60]
71001d2cac  add sp,sp,#0xb0
71001d2cb0  ret
71001d2cb4  adrp x0,0x71042c4000
71001d2cb8  add x0,x0,#0x35f
71001d2cbc  mov w1,#0x47
71001d2cc0  orr w2,wzr,#0xe0000003
71001d2cc4  mov w3,wzr
71001d2cc8  bl 0x71001b1300
