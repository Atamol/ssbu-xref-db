// addr:      71001d0a10
// offset:    0x1d0a10
// name:      FUN_71001d0a10
// mangled:   
// size:      568

71001d0a10  sub sp,sp,#0x70
71001d0a14  str x25,[sp, #0x20]
71001d0a18  stp x24,x23,[sp, #0x30]
71001d0a1c  stp x22,x21,[sp, #0x40]
71001d0a20  stp x20,x19,[sp, #0x50]
71001d0a24  stp x29,x30,[sp, #0x60]
71001d0a28  add x29,sp,#0x60
71001d0a2c  adrp x22,0x71052a4000
71001d0a30  ldr x22,[x22, #0xda8]
71001d0a34  adrp x23,0x71052a4000
71001d0a38  ldrb w8,[x22]
71001d0a3c  ldr x23,[x23, #0xdb0]
71001d0a40  mov x20,x0
71001d0a44  add x19,x23,#0x28
71001d0a48  cbz w8,0x71001d0a84
71001d0a4c  adrp x8,0x71052a4000
71001d0a50  ldr x8,[x8, #0xdb8]
71001d0a54  ldr x0,[x8]
71001d0a58  bl 0x7101717960
71001d0a5c  ldr w8,[x0]
71001d0a60  cbz w8,0x71001d0a84
71001d0a64  ldr x10,[x23, #0xa0]
71001d0a68  ldp x9,x10,[x10]
71001d0a6c  sub x10,x10,x9
71001d0a70  asr x10,x10,#0x3
71001d0a74  cmp x10,x8
71001d0a78  b.ls 0x71001d0a9c
71001d0a7c  ldr x8,[x9, x8, LSL #0x3]
71001d0a80  add x19,x8,#0x20
71001d0a84  ldr x8,[x19]
71001d0a88  cbz x8,0x71001d0ab4
71001d0a8c  ldr x8,[x8, #0x10]
71001d0a90  cbz x8,0x71001d0ab4
71001d0a94  ldr x19,[x8, #0x10]
71001d0a98  b 0x71001d0ab8
71001d0a9c  adrp x0,0x71042c4000
71001d0aa0  add x0,x0,#0x35f
71001d0aa4  mov w1,#0x47
71001d0aa8  orr w2,wzr,#0xe0000003
71001d0aac  mov w3,wzr
71001d0ab0  bl 0x71001b1300
71001d0ab4  mov x19,xzr
71001d0ab8  ldr x8,[x19, #0x78]!
71001d0abc  ldr x8,[x8, #0x10]
71001d0ac0  mov x0,x19
71001d0ac4  blr x8
71001d0ac8  ldrb w8,[x22]
71001d0acc  add x21,x23,#0x28
71001d0ad0  str xzr,[sp, #0x18]
71001d0ad4  stp xzr,xzr,[sp, #0x8]
71001d0ad8  cbz w8,0x71001d0b14
71001d0adc  adrp x8,0x71052a4000
71001d0ae0  ldr x8,[x8, #0xdb8]
71001d0ae4  ldr x0,[x8]
71001d0ae8  bl 0x7101717960
71001d0aec  ldr w8,[x0]
71001d0af0  cbz w8,0x71001d0b14
71001d0af4  ldr x10,[x23, #0xa0]
71001d0af8  ldp x9,x10,[x10]
71001d0afc  sub x10,x10,x9
71001d0b00  asr x10,x10,#0x3
71001d0b04  cmp x10,x8
71001d0b08  b.ls 0x71001d0c30
71001d0b0c  ldr x8,[x9, x8, LSL #0x3]
71001d0b10  add x21,x8,#0x20
71001d0b14  ldr x8,[x21]
71001d0b18  ldr x8,[x8, #0x10]
71001d0b1c  ldr x0,[x8, #0x18]
71001d0b20  ldr w1,[x20, #0x18]
71001d0b24  add x2,sp,#0x8
71001d0b28  bl 0x71001d19f0
71001d0b2c  mov x0,x20
71001d0b30  bl 0x71001d1c80
71001d0b34  ldp x21,x8,[sp, #0x8]
71001d0b38  mov w20,w0
71001d0b3c  cmp x21,x8
71001d0b40  b.eq 0x71001d0bf0
71001d0b44  adrp x24,0x71052a4000
71001d0b48  ldr x24,[x24, #0xdb8]
71001d0b4c  ldrb w8,[x22]
71001d0b50  add x25,x23,#0x28
71001d0b54  cbz w8,0x71001d0b88
71001d0b58  ldr x0,[x24]
71001d0b5c  bl 0x7101717960
71001d0b60  ldr w8,[x0]
71001d0b64  cbz w8,0x71001d0b88
71001d0b68  ldr x10,[x23, #0xa0]
71001d0b6c  ldp x9,x10,[x10]
71001d0b70  sub x10,x10,x9
71001d0b74  asr x10,x10,#0x3
71001d0b78  cmp x10,x8
71001d0b7c  b.ls 0x71001d0c30
71001d0b80  ldr x8,[x9, x8, LSL #0x3]
71001d0b84  add x25,x8,#0x20
71001d0b88  ldr x8,[x25]
71001d0b8c  ldr x8,[x8, #0x10]
71001d0b90  ldr x9,[x8, #0x18]
71001d0b94  ldr w8,[x21]
71001d0b98  ldr x11,[x9, #0x50]!
71001d0b9c  cbz x11,0x71001d0bdc
71001d0ba0  mov x10,x9
71001d0ba4  ldr w12,[x11, #0x20]
71001d0ba8  cmp w12,w8
71001d0bac  cset w12,cc
71001d0bb0  csel x10,x10,x11,cc
71001d0bb4  ldr x11,[x11, w12, UXTW #0x3]
71001d0bb8  cbnz x11,0x71001d0ba4
71001d0bbc  cmp x10,x9
71001d0bc0  b.eq 0x71001d0bdc
71001d0bc4  ldr w9,[x10, #0x20]
71001d0bc8  cmp w9,w8
71001d0bcc  b.hi 0x71001d0bdc
71001d0bd0  ldr x0,[x10, #0x28]
71001d0bd4  cbz x0,0x71001d0bdc
71001d0bd8  bl 0x71001d0a10
71001d0bdc  ldr x8,[sp, #0x10]
71001d0be0  add x21,x21,#0x4
71001d0be4  cmp x21,x8
71001d0be8  b.ne 0x71001d0b4c
71001d0bec  ldr x21,[sp, #0x8]
71001d0bf0  cbz x21,0x71001d0c00
71001d0bf4  mov x0,x21
71001d0bf8  str x21,[sp, #0x10]
71001d0bfc  bl 0x71001b1870
71001d0c00  ldr x8,[x19]
71001d0c04  ldr x8,[x8, #0x20]
71001d0c08  mov x0,x19
71001d0c0c  blr x8
71001d0c10  and w0,w20,#0x1
71001d0c14  ldp x29,x30,[sp, #0x60]
71001d0c18  ldp x20,x19,[sp, #0x50]
71001d0c1c  ldr x25,[sp, #0x20]
71001d0c20  ldp x22,x21,[sp, #0x40]
71001d0c24  ldp x24,x23,[sp, #0x30]
71001d0c28  add sp,sp,#0x70
71001d0c2c  ret
71001d0c30  adrp x0,0x71042c4000
71001d0c34  add x0,x0,#0x35f
71001d0c38  mov w1,#0x47
71001d0c3c  orr w2,wzr,#0xe0000003
71001d0c40  mov w3,wzr
71001d0c44  bl 0x71001b1300
