// addr:      7102b63970
// offset:    0x2b63970
// name:      FUN_7102b63970
// mangled:   
// size:      776

7102b63970  sub sp,sp,#0x130
7102b63974  str x28,[sp, #0xe0]
7102b63978  stp x24,x23,[sp, #0xf0]
7102b6397c  stp x22,x21,[sp, #0x100]
7102b63980  stp x20,x19,[sp, #0x110]
7102b63984  stp x29,x30,[sp, #0x120]
7102b63988  add x29,sp,#0x120
7102b6398c  adrp x8,0x7105117000
7102b63990  add x8,x8,#0x418
7102b63994  mov w21,w4
7102b63998  ldr x9,[x8, w5, UXTW #0x3]
7102b6399c  mov w19,w3
7102b639a0  mov w4,w2
7102b639a4  mov x20,x0
7102b639a8  strb wzr,[sp, #0x10]
7102b639ac  mov w8,w5
7102b639b0  mov w10,#0xffffffff
7102b639b4  str xzr,[sp, #0x8]
7102b639b8  add x11,sp,#0x8
7102b639bc  ldrb w12,[x9]
7102b639c0  cbz w12,0x7102b639e8
7102b639c4  ldrsw x13,[sp, #0xc]
7102b639c8  add w10,w10,#0x1
7102b639cc  add x9,x9,#0x1
7102b639d0  add w14,w13,#0x1
7102b639d4  add x13,x11,x13
7102b639d8  cmp w10,#0x3e
7102b639dc  str w14,[sp, #0xc]
7102b639e0  strb w12,[x13, #0x8]
7102b639e4  b.cc 0x7102b639bc
7102b639e8  ldrsw x10,[sp, #0xc]
7102b639ec  add x9,sp,#0x8
7102b639f0  add x11,x9,#0x8
7102b639f4  strb wzr,[x11, x10, LSL ]
7102b639f8  ldrb w23,[sp, #0x10]
7102b639fc  mov w22,#0x9dc5
7102b63a00  movk w22,#0x811c, LSL #16
7102b63a04  mov w10,w22
7102b63a08  cbz w23,0x7102b63a30
7102b63a0c  add x9,x9,#0x9
7102b63a10  mov w11,#0x89
7102b63a14  mov w12,w23
7102b63a18  mov w10,w22
7102b63a1c  mul w10,w10,w11
7102b63a20  and w12,w12,#0xff
7102b63a24  eor w10,w10,w12
7102b63a28  ldrb w12,[x9], #0x1
7102b63a2c  cbnz w12,0x7102b63a1c
7102b63a30  str w10,[sp, #0x8]
7102b63a34  mov w9,w6
7102b63a38  adrp x10,0x7105117000
7102b63a3c  add x10,x10,#0x438
7102b63a40  add x9,x10,x9, LSL #0x5
7102b63a44  ldr x9,[x9, w7, UXTW #0x3]
7102b63a48  cbz x9,0x7102b63ad0
7102b63a4c  ldr w10,[sp, #0xc]
7102b63a50  cmp w10,#0x3e
7102b63a54  b.gt 0x7102b63a90
7102b63a58  sub w10,w10,#0x1
7102b63a5c  add x11,sp,#0x8
7102b63a60  ldrb w12,[x9]
7102b63a64  cbz w12,0x7102b63a8c
7102b63a68  ldrsw x13,[sp, #0xc]
7102b63a6c  add w10,w10,#0x1
7102b63a70  add x9,x9,#0x1
7102b63a74  add w14,w13,#0x1
7102b63a78  add x13,x11,x13
7102b63a7c  cmp w10,#0x3e
7102b63a80  str w14,[sp, #0xc]
7102b63a84  strb w12,[x13, #0x8]
7102b63a88  b.lt 0x7102b63a60
7102b63a8c  ldr w10,[sp, #0xc]
7102b63a90  add x9,sp,#0x8
7102b63a94  add x11,x9,#0x8
7102b63a98  strb wzr,[x11, w10, SXTW ]
7102b63a9c  ldrb w23,[sp, #0x10]
7102b63aa0  mov w10,w22
7102b63aa4  cbz w23,0x7102b63acc
7102b63aa8  add x9,x9,#0x9
7102b63aac  mov w11,#0x89
7102b63ab0  mov w12,w23
7102b63ab4  mov w10,w22
7102b63ab8  mul w10,w10,w11
7102b63abc  and w12,w12,#0xff
7102b63ac0  eor w10,w10,w12
7102b63ac4  ldrb w12,[x9], #0x1
7102b63ac8  cbnz w12,0x7102b63ab8
7102b63acc  str w10,[sp, #0x8]
7102b63ad0  cmp w5,#0x3
7102b63ad4  b.ls 0x7102b63ae0
7102b63ad8  mov w8,wzr
7102b63adc  b 0x7102b63aec
7102b63ae0  adrp x9,0x710446a000
7102b63ae4  add x9,x9,#0xb30
7102b63ae8  ldr w8,[x9, x8, LSL #0x2]
7102b63aec  adrp x9,0x7104306000
7102b63af0  add x9,x9,#0x7c6
7102b63af4  adrp x10,0x71043bc000
7102b63af8  add x10,x10,#0x7d1
7102b63afc  cmp w1,#0x1
7102b63b00  csel x10,x10,x9,eq
7102b63b04  cmp w1,#0x0
7102b63b08  adrp x11,0x710439b000
7102b63b0c  add x11,x11,#0x3be
7102b63b10  csel x3,x9,x10,eq
7102b63b14  adrp x9,0x710426e000
7102b63b18  add x9,x9,#0x64
7102b63b1c  cmp w8,#0x1
7102b63b20  adrp x10,0x71042b2000
7102b63b24  add x10,x10,#0xc92
7102b63b28  csel x9,x9,x11,eq
7102b63b2c  cmp w8,#0x2
7102b63b30  csel x5,x10,x9,eq
7102b63b34  adrp x2,0x7104463000
7102b63b38  add x2,x2,#0xd4c
7102b63b3c  sub x0,x29,#0x88
7102b63b40  bl 0x710176bcc0
7102b63b44  adrp x2,0x71042c2000
7102b63b48  add x2,x2,#0xf22
7102b63b4c  add x0,sp,#0x50
7102b63b50  mov w3,w21
7102b63b54  add x24,sp,#0x50
7102b63b58  bl 0x710176bcc0
7102b63b5c  ldr w8,[sp, #0x54]
7102b63b60  cmp w8,#0x3e
7102b63b64  b.gt 0x7102b63b84
7102b63b68  sxtw x9,w8
7102b63b6c  add w8,w8,#0x1
7102b63b70  str w8,[sp, #0x54]
7102b63b74  add x8,x24,x9
7102b63b78  mov w9,#0x5f
7102b63b7c  strb w9,[x8, #0x8]
7102b63b80  ldr w8,[sp, #0x54]
7102b63b84  add x3,x24,#0x8
7102b63b88  strb wzr,[x3, w8, SXTW ]
7102b63b8c  ldrb w8,[sp, #0x58]
7102b63b90  mov w10,w22
7102b63b94  cbz w8,0x7102b63bbc
7102b63b98  add x9,sp,#0x50
7102b63b9c  add x9,x9,#0x9
7102b63ba0  mov w11,#0x89
7102b63ba4  mov w10,w22
7102b63ba8  mul w10,w10,w11
7102b63bac  and w8,w8,#0xff
7102b63bb0  eor w10,w10,w8
7102b63bb4  ldrb w8,[x9], #0x1
7102b63bb8  cbnz w8,0x7102b63ba8
7102b63bbc  ldr w8,[sp, #0x54]
7102b63bc0  cmp w8,#0x3e
7102b63bc4  str w10,[sp, #0x50]
7102b63bc8  b.gt 0x7102b63c14
7102b63bcc  cbz w23,0x7102b63c14
7102b63bd0  add x9,sp,#0x8
7102b63bd4  add x9,x9,#0x9
7102b63bd8  add x10,sp,#0x50
7102b63bdc  mov w11,w8
7102b63be0  b 0x7102b63bf0
7102b63be4  ldr w8,[sp, #0x54]
7102b63be8  add w11,w11,#0x1
7102b63bec  add x9,x9,#0x1
7102b63bf0  add w12,w8,#0x1
7102b63bf4  add x8,x10,w8, SXTW 
7102b63bf8  cmp w11,#0x3d
7102b63bfc  str w12,[sp, #0x54]
7102b63c00  strb w23,[x8, #0x8]
7102b63c04  b.gt 0x7102b63c10
7102b63c08  ldrb w23,[x9]
7102b63c0c  cbnz w23,0x7102b63be4
7102b63c10  ldr w8,[sp, #0x54]
7102b63c14  add x10,sp,#0x50
7102b63c18  add x9,x10,#0x8
7102b63c1c  strb wzr,[x9, w8, SXTW ]
7102b63c20  ldrb w9,[sp, #0x58]
7102b63c24  cbz w9,0x7102b63c44
7102b63c28  add x8,x10,#0x9
7102b63c2c  mov w10,#0x89
7102b63c30  mul w11,w22,w10
7102b63c34  and w9,w9,#0xff
7102b63c38  eor w22,w11,w9
7102b63c3c  ldrb w9,[x8], #0x1
7102b63c40  cbnz w9,0x7102b63c30
7102b63c44  sub x8,x29,#0x88
7102b63c48  add x2,x8,#0x8
7102b63c4c  mov x0,x20
7102b63c50  mov w1,w19
7102b63c54  str w22,[sp, #0x50]
7102b63c58  bl 0x7102b63800
7102b63c5c  ldp x29,x30,[sp, #0x120]
7102b63c60  ldr x28,[sp, #0xe0]
7102b63c64  ldp x20,x19,[sp, #0x110]
7102b63c68  ldp x22,x21,[sp, #0x100]
7102b63c6c  ldp x24,x23,[sp, #0xf0]
7102b63c70  add sp,sp,#0x130
7102b63c74  ret
