// addr:      7101c919f0
// offset:    0x1c919f0
// name:      FUN_7101c919f0
// mangled:   
// size:      704

7101c919f0  sub sp,sp,#0xa0
7101c919f4  stp x29,x30,[sp, #0x90]
7101c919f8  add x29,sp,#0x90
7101c919fc  and w8,w1,#0xff
7101c91a00  cmp w8,#0x2
7101c91a04  b.cs 0x7101c91cac
7101c91a08  adrp x10,0x7104545000
7101c91a0c  add x10,x10,#0x280
7101c91a10  sxtb x8,w1
7101c91a14  ldrb w8,[x10, x8, LSL ]
7101c91a18  adrp x11,0x71043e0000
7101c91a1c  add x11,x11,#0x1cf
7101c91a20  adrp x12,0x7104433000
7101c91a24  add x12,x12,#0x12d
7101c91a28  cmp w8,#0x2
7101c91a2c  mov x9,xzr
7101c91a30  add x13,sp,#0x48
7101c91a34  str xzr,[sp, #0x48]
7101c91a38  csel x8,x12,x11,eq
7101c91a3c  b 0x7101c91a48
7101c91a40  add x9,x9,#0x2
7101c91a44  strb w14,[x15, #0x9]
7101c91a48  add x14,x8,x9
7101c91a4c  ldrb w16,[x14]
7101c91a50  cbz w16,0x7101c91a7c
7101c91a54  add w17,w9,#0x1
7101c91a58  add x15,x13,x9
7101c91a5c  cmp w17,#0x3f
7101c91a60  strb w16,[x15, #0x8]
7101c91a64  b.cs 0x7101c91a78
7101c91a68  ldrb w14,[x14, #0x1]
7101c91a6c  cbnz w14,0x7101c91a40
7101c91a70  add x9,x9,#0x1
7101c91a74  b 0x7101c91a7c
7101c91a78  add w9,w9,#0x1
7101c91a7c  add x13,sp,#0x48
7101c91a80  add x14,x13,#0x8
7101c91a84  mov w8,#0x9dc5
7101c91a88  movk w8,#0x811c, LSL #16
7101c91a8c  strb wzr,[x14, w9, UXTW ]
7101c91a90  str w9,[sp, #0x4c]
7101c91a94  ldrb w9,[sp, #0x50]
7101c91a98  mov w14,w8
7101c91a9c  cbz w9,0x7101c91ac4
7101c91aa0  add x13,x13,#0x9
7101c91aa4  mov w15,#0x89
7101c91aa8  mov w16,w9
7101c91aac  mov w14,w8
7101c91ab0  mul w14,w14,w15
7101c91ab4  and w16,w16,#0xff
7101c91ab8  eor w14,w14,w16
7101c91abc  ldrb w16,[x13], #0x1
7101c91ac0  cbnz w16,0x7101c91ab0
7101c91ac4  and w13,w2,#0xff
7101c91ac8  cmp w13,#0x2
7101c91acc  str w14,[sp, #0x48]
7101c91ad0  b.cs 0x7101c91cac
7101c91ad4  sxtb x14,w2
7101c91ad8  ldrb w10,[x10, x14, LSL ]
7101c91adc  cmp w10,#0x2
7101c91ae0  mov x13,xzr
7101c91ae4  str xzr,[sp]
7101c91ae8  csel x10,x12,x11,eq
7101c91aec  mov x11,sp
7101c91af0  b 0x7101c91afc
7101c91af4  add x13,x13,#0x2
7101c91af8  strb w12,[x14, #0x9]
7101c91afc  add x12,x10,x13
7101c91b00  ldrb w15,[x12]
7101c91b04  cbz w15,0x7101c91b30
7101c91b08  add w16,w13,#0x1
7101c91b0c  add x14,x11,x13
7101c91b10  cmp w16,#0x3f
7101c91b14  strb w15,[x14, #0x8]
7101c91b18  b.cs 0x7101c91b2c
7101c91b1c  ldrb w12,[x12, #0x1]
7101c91b20  cbnz w12,0x7101c91af4
7101c91b24  add x13,x13,#0x1
7101c91b28  b 0x7101c91b30
7101c91b2c  add w13,w13,#0x1
7101c91b30  mov x11,sp
7101c91b34  add x10,x11,#0x8
7101c91b38  mov w12,w8
7101c91b3c  strb wzr,[x10, w13, UXTW ]
7101c91b40  ldrb w10,[sp, #0x8]
7101c91b44  str w13,[sp, #0x4]
7101c91b48  cbz w10,0x7101c91b70
7101c91b4c  add x11,x11,#0x9
7101c91b50  mov w13,#0x89
7101c91b54  mov w14,w10
7101c91b58  mov w12,w8
7101c91b5c  mul w12,w12,w13
7101c91b60  and w14,w14,#0xff
7101c91b64  eor w12,w12,w14
7101c91b68  ldrb w14,[x11], #0x1
7101c91b6c  cbnz w14,0x7101c91b5c
7101c91b70  str w12,[sp]
7101c91b74  mov x12,x0
7101c91b78  add x13,sp,#0x48
7101c91b7c  mov x11,xzr
7101c91b80  add x13,x13,#0x9
7101c91b84  str wzr,[x12], #0x9
7101c91b88  tst w9,#0xff
7101c91b8c  b.ne 0x7101c91bac
7101c91b90  b 0x7101c91bd4
7101c91b94  add x14,x13,x11
7101c91b98  strb w9,[x12, x11, LSL ]
7101c91b9c  ldrb w9,[x14, #0x1]
7101c91ba0  add x11,x11,#0x2
7101c91ba4  tst w9,#0xff
7101c91ba8  b.eq 0x7101c91bd4
7101c91bac  add w14,w11,#0x1
7101c91bb0  add x15,x12,x11
7101c91bb4  cmp w14,#0x3f
7101c91bb8  sturb w9,[x15, #-0x1]
7101c91bbc  b.cs 0x7101c91bd0
7101c91bc0  ldrb w9,[x13, x11, LSL ]
7101c91bc4  cbnz w9,0x7101c91b94
7101c91bc8  add x11,x11,#0x1
7101c91bcc  b 0x7101c91bd4
7101c91bd0  add w11,w11,#0x1
7101c91bd4  add x9,x0,#0x8
7101c91bd8  strb wzr,[x9, w11, UXTW ]
7101c91bdc  ldrb w9,[x0, #0x8]
7101c91be0  mov w12,w8
7101c91be4  str w11,[x0, #0x4]
7101c91be8  cbz w9,0x7101c91c0c
7101c91bec  add x11,x0,#0x9
7101c91bf0  mov w13,#0x89
7101c91bf4  mov w12,w8
7101c91bf8  mul w12,w12,w13
7101c91bfc  and w9,w9,#0xff
7101c91c00  eor w12,w12,w9
7101c91c04  ldrb w9,[x11], #0x1
7101c91c08  cbnz w9,0x7101c91bf8
7101c91c0c  mov x11,sp
7101c91c10  mov x9,xzr
7101c91c14  str w12,[x0]
7101c91c18  add x11,x11,#0x9
7101c91c1c  str wzr,[x0, #0x48]
7101c91c20  tst w10,#0xff
7101c91c24  b.ne 0x7101c91c44
7101c91c28  b 0x7101c91c6c
7101c91c2c  add x13,x11,x9
7101c91c30  strb w10,[x12, #0x51]
7101c91c34  ldrb w10,[x13, #0x1]
7101c91c38  add x9,x9,#0x2
7101c91c3c  tst w10,#0xff
7101c91c40  b.eq 0x7101c91c6c
7101c91c44  add w13,w9,#0x1
7101c91c48  add x12,x0,x9
7101c91c4c  cmp w13,#0x3f
7101c91c50  strb w10,[x12, #0x50]
7101c91c54  b.cs 0x7101c91c68
7101c91c58  ldrb w10,[x11, x9, LSL ]
7101c91c5c  cbnz w10,0x7101c91c2c
7101c91c60  add x9,x9,#0x1
7101c91c64  b 0x7101c91c6c
7101c91c68  add w9,w9,#0x1
7101c91c6c  add x10,x0,#0x50
7101c91c70  strb wzr,[x10, w9, UXTW ]
7101c91c74  ldrb w10,[x0, #0x50]
7101c91c78  str w9,[x0, #0x4c]
7101c91c7c  cbz w10,0x7101c91c9c
7101c91c80  add x9,x0,#0x51
7101c91c84  mov w11,#0x89
7101c91c88  mul w8,w8,w11
7101c91c8c  and w10,w10,#0xff
7101c91c90  eor w8,w8,w10
7101c91c94  ldrb w10,[x9], #0x1
7101c91c98  cbnz w10,0x7101c91c88
7101c91c9c  ldp x29,x30,[sp, #0x90]
7101c91ca0  str w8,[x0, #0x48]
7101c91ca4  add sp,sp,#0xa0
7101c91ca8  ret
7101c91cac  bl 0x71039c2650
