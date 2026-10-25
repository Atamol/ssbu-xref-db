// addr:      7102f37ab0
// offset:    0x2f37ab0
// name:      FUN_7102f37ab0
// mangled:   
// size:      372

7102f37ab0  stp x24,x23,[sp, #-0x40]!
7102f37ab4  stp x22,x21,[sp, #0x10]
7102f37ab8  stp x20,x19,[sp, #0x20]
7102f37abc  stp x29,x30,[sp, #0x30]
7102f37ac0  add x29,sp,#0x30
7102f37ac4  ldr w8,[x0, #0x80]
7102f37ac8  mov x19,x0
7102f37acc  cmp w8,#0x6
7102f37ad0  b.eq 0x7102f37aec
7102f37ad4  cmp w8,#0x4
7102f37ad8  b.ne 0x7102f37c10
7102f37adc  ldr w8,[x19, #0x84]
7102f37ae0  cbnz w8,0x7102f37aec
7102f37ae4  ldr w8,[x19, #0x88]
7102f37ae8  cbz w8,0x7102f37c10
7102f37aec  mov w9,#0x42700000
7102f37af0  str w9,[x19, #0x90]
7102f37af4  ldr x9,[x19, #0x18]
7102f37af8  mov w8,#0x1
7102f37afc  str w8,[x19, #0x80]
7102f37b00  cbz x9,0x7102f37b24
7102f37b04  add x0,x9,#0x108
7102f37b08  strb w8,[x9, #0x110]
7102f37b0c  bl 0x71025e9d50
7102f37b10  ldr x8,[x19, #0x18]
7102f37b14  cbz x8,0x7102f37b24
7102f37b18  ldrb w9,[x8, #0x118]
7102f37b1c  and w9,w9,#0xfe
7102f37b20  strb w9,[x8, #0x118]
7102f37b24  ldr x20,[x19, #0x10]
7102f37b28  ldrb w8,[x20, #0x10]
7102f37b2c  cbz w8,0x7102f37ba4
7102f37b30  ldr x8,[x20, #0x20]
7102f37b34  cbz x8,0x7102f37b48
7102f37b38  add x0,x8,#0x108
7102f37b3c  mov w9,#0x1
7102f37b40  strb w9,[x8, #0x110]
7102f37b44  bl 0x71025e9d50
7102f37b48  ldr x8,[x20, #0x8]
7102f37b4c  cbz x8,0x7102f37b90
7102f37b50  ldp x21,x22,[x8]
7102f37b54  cmp x21,x22
7102f37b58  b.eq 0x7102f37b90
7102f37b5c  mov w23,#0x1
7102f37b60  mov x24,#-0x1
7102f37b64  ldr x8,[x21]
7102f37b68  ldr x9,[x8, #0x8]
7102f37b6c  strb w23,[x8, #0x128]
7102f37b70  cbz x9,0x7102f37b84
7102f37b74  str x24,[x9, #0xd8]
7102f37b78  ldr x0,[x8, #0x8]
7102f37b7c  mov w1,wzr
7102f37b80  bl 0x7100532bc0
7102f37b84  add x21,x21,#0x8
7102f37b88  cmp x22,x21
7102f37b8c  b.ne 0x7102f37b64
7102f37b90  ldr x0,[x20, #0x28]
7102f37b94  ldr x8,[x0]
7102f37b98  ldr x8,[x8, #0xa8]
7102f37b9c  mov w1,#0x1
7102f37ba0  blr x8
7102f37ba4  ldr x8,[x19, #0xe0]
7102f37ba8  ldr x8,[x8, #0x300]
7102f37bac  ldr x9,[x8, #0x18]
7102f37bb0  ldp x8,x9,[x9]
7102f37bb4  cmp x8,x9
7102f37bb8  b.eq 0x7102f37c10
7102f37bbc  mov x10,#0xdf99
7102f37bc0  movk x10,#0xb569, LSL #16
7102f37bc4  movk x10,#0x7, LSL #32
7102f37bc8  ldr x11,[x8], #0x8
7102f37bcc  ldr x12,[x11, #0xa0]
7102f37bd0  and x12,x12,#0xffffffffff
7102f37bd4  cmp x12,x10
7102f37bd8  b.eq 0x7102f37be8
7102f37bdc  cmp x9,x8
7102f37be0  b.ne 0x7102f37bc8
7102f37be4  b 0x7102f37c10
7102f37be8  ldr x8,[x11, #0x130]
7102f37bec  cbz x8,0x7102f37c10
7102f37bf0  ldp x0,x1,[x8]
7102f37bf4  adrp x2,0x71043bc000
7102f37bf8  add x2,x2,#0xb6c
7102f37bfc  ldp x29,x30,[sp, #0x30]
7102f37c00  ldp x20,x19,[sp, #0x20]
7102f37c04  ldp x22,x21,[sp, #0x10]
7102f37c08  ldp x24,x23,[sp], #0x40
7102f37c0c  b 0x71025f55b0
7102f37c10  ldp x29,x30,[sp, #0x30]
7102f37c14  ldp x20,x19,[sp, #0x20]
7102f37c18  ldp x22,x21,[sp, #0x10]
7102f37c1c  ldp x24,x23,[sp], #0x40
7102f37c20  ret
