// addr:      71013e6a40
// offset:    0x13e6a40
// name:      FUN_71013e6a40
// mangled:   
// size:      568

71013e6a40  sub sp,sp,#0x30
71013e6a44  stp x20,x19,[sp, #0x10]
71013e6a48  stp x29,x30,[sp, #0x20]
71013e6a4c  add x29,sp,#0x20
71013e6a50  ldrb w8,[x0, #0x22a]
71013e6a54  cbz w8,0x71013e6ab0
71013e6a58  ldr x8,[x0, #0x10]
71013e6a5c  strb wzr,[x0, #0x22a]
71013e6a60  ldr x8,[x8, #0x50]
71013e6a64  mov w9,#0x1
71013e6a68  strb w9,[x8, #0x183]
71013e6a6c  add x8,x0,#0x204
71013e6a70  orr x9,xzr,#-0x100000000
71013e6a74  stp xzr,xzr,[x0, #0x20]
71013e6a78  str wzr,[x0, #0x1f8]
71013e6a7c  stp xzr,xzr,[x0, #0x1e8]
71013e6a80  stp xzr,xzr,[x0, #0x1d8]
71013e6a84  stp xzr,xzr,[x0, #0x1c8]
71013e6a88  stp xzr,xzr,[x0, #0x1b8]
71013e6a8c  str x9,[x8]
71013e6a90  mov x8,#0x15
71013e6a94  movk x8,#0x13, LSL #32
71013e6a98  orr x9,xzr,#-0xffffffff
71013e6a9c  strb wzr,[x0, #0x20c]
71013e6aa0  str x8,[x0, #0x1b0]
71013e6aa4  add x8,x0,#0x1fc
71013e6aa8  str x9,[x8]
71013e6aac  b 0x71013e6b28
71013e6ab0  ldr x8,[x0, #0x10]
71013e6ab4  ldr x8,[x8, #0x50]
71013e6ab8  ldrb w9,[x8, #0x182]
71013e6abc  cbz w9,0x71013e6b38
71013e6ac0  add x9,x0,#0x1f4
71013e6ac4  stp xzr,xzr,[x0, #0x20]
71013e6ac8  str xzr,[x9]
71013e6acc  add x9,x0,#0x1ec
71013e6ad0  add x8,x0,#0x1b4
71013e6ad4  str xzr,[x9]
71013e6ad8  add x9,x0,#0x1e4
71013e6adc  str xzr,[x9]
71013e6ae0  add x9,x0,#0x1dc
71013e6ae4  str xzr,[x9]
71013e6ae8  add x9,x0,#0x1d4
71013e6aec  str xzr,[x9]
71013e6af0  add x9,x0,#0x1cc
71013e6af4  str xzr,[x9]
71013e6af8  add x9,x0,#0x1c4
71013e6afc  str xzr,[x9]
71013e6b00  add x9,x0,#0x1bc
71013e6b04  str xzr,[x8]
71013e6b08  mov w8,#0xffffffff
71013e6b0c  str xzr,[x9]
71013e6b10  str x8,[x0, #0x200]
71013e6b14  str w8,[x0, #0x208]
71013e6b18  mov w8,#0x15
71013e6b1c  str wzr,[x0, #0x1fc]
71013e6b20  strb wzr,[x0, #0x20c]
71013e6b24  str w8,[x0, #0x1b0]
71013e6b28  ldp x29,x30,[sp, #0x20]
71013e6b2c  ldp x20,x19,[sp, #0x10]
71013e6b30  add sp,sp,#0x30
71013e6b34  ret
71013e6b38  ldrb w8,[x8, #0x181]
71013e6b3c  cbz w8,0x71013e6b28
71013e6b40  mov w8,#0x2
71013e6b44  str w8,[x0, #0x234]
71013e6b48  ldr w8,[x0, #0x1fc]
71013e6b4c  subs w8,w8,#0x1
71013e6b50  b.lt 0x71013e6b58
71013e6b54  str w8,[x0, #0x1fc]
71013e6b58  adrp x8,0x710532f000
71013e6b5c  ldr x20,[x8, #0x7f0]
71013e6b60  cbz x20,0x71013e6b28
71013e6b64  ldr x8,[x20, #0x8]
71013e6b68  ldr x8,[x8, #0x8]
71013e6b6c  ldr x19,[x8, #0x80]
71013e6b70  ldrb w8,[x19, #0x1f5]
71013e6b74  cbnz w8,0x71013e6c24
71013e6b78  ldp x8,x9,[x19, #0x100]
71013e6b7c  subs x10,x9,x8
71013e6b80  asr x10,x10,#0x3
71013e6b84  mov w11,#0x155
71013e6b88  mul x10,x10,x11
71013e6b8c  sub x10,x10,#0x1
71013e6b90  csel x11,xzr,x10,eq
71013e6b94  ldp x10,x12,[x19, #0x118]
71013e6b98  add x10,x12,x10
71013e6b9c  cmp x11,x10
71013e6ba0  b.ne 0x71013e6bb8
71013e6ba4  add x0,x19,#0xf8
71013e6ba8  bl 0x7101afbf30
71013e6bac  ldp x10,x11,[x19, #0x118]
71013e6bb0  add x10,x10,x11
71013e6bb4  ldp x8,x9,[x19, #0x100]
71013e6bb8  cmp x9,x8
71013e6bbc  b.eq 0x71013e6bf8
71013e6bc0  mov x9,#0x6019
71013e6bc4  movk x9,#0x180, LSL #16
71013e6bc8  movk x9,#0x1806, LSL #32
71013e6bcc  movk x9,#0x8060, LSL #48
71013e6bd0  umulh x9,x10,x9
71013e6bd4  sub x11,x10,x9
71013e6bd8  add x9,x9,x11, LSR #0x1
71013e6bdc  mov x11,#-0x155
71013e6be0  lsr x9,x9,#0x8
71013e6be4  ldr x8,[x8, x9, LSL #0x3]
71013e6be8  madd x9,x9,x11,x10
71013e6bec  orr w10,wzr,#0xc
71013e6bf0  madd x8,x9,x10,x8
71013e6bf4  b 0x71013e6bfc
71013e6bf8  mov x8,xzr
71013e6bfc  mov x9,#0x7
71013e6c00  movk x9,#0x1, LSL #32
71013e6c04  str x9,[x8]
71013e6c08  str wzr,[x8, #0x8]
71013e6c0c  ldr x8,[x19, #0x120]
71013e6c10  add x8,x8,#0x1
71013e6c14  str x8,[x19, #0x120]
71013e6c18  ldr x8,[x20, #0x8]
71013e6c1c  ldr x8,[x8, #0x8]
71013e6c20  ldr x19,[x8, #0x80]
71013e6c24  ldr x8,[x19, #0x130]
71013e6c28  ldr x8,[x8]
71013e6c2c  add x0,x8,#0x8
71013e6c30  adrp x1,0x71043ad000
71013e6c34  add x1,x1,#0xfe3
71013e6c38  mov x8,sp
71013e6c3c  bl 0x7103776910
71013e6c40  ldr x0,[sp, #0x8]
71013e6c44  ldr x8,[x0]
71013e6c48  cbz x8,0x71013e6c58
71013e6c4c  ldrb w9,[x8, #0x58]
71013e6c50  orr w9,w9,#0x1
71013e6c54  strb w9,[x8, #0x58]
71013e6c58  adrp x8,0x710523d000
71013e6c5c  add x8,x8,#0x9a8
71013e6c60  stp x8,xzr,[sp]
71013e6c64  cbz x0,0x71013e6c6c
71013e6c68  bl 0x710392eb40
71013e6c6c  mov w8,#0x1
71013e6c70  strb w8,[x19, #0x200]
71013e6c74  b 0x71013e6b28
