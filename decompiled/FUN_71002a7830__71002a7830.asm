// addr:      71002a7830
// offset:    0x2a7830
// name:      FUN_71002a7830
// mangled:   
// size:      1704

71002a7830  sub sp,sp,#0xe0
71002a7834  stp x26,x25,[sp, #0x90]
71002a7838  stp x24,x23,[sp, #0xa0]
71002a783c  stp x22,x21,[sp, #0xb0]
71002a7840  stp x20,x19,[sp, #0xc0]
71002a7844  stp x29,x30,[sp, #0xd0]
71002a7848  add x29,sp,#0xd0
71002a784c  mov w8,#0x100
71002a7850  stp xzr,x8,[sp, #0x68]
71002a7854  add x8,sp,#0x48
71002a7858  str x8,[sp, #0x8]
71002a785c  sub x8,x29,#0x58
71002a7860  stp xzr,xzr,[sp, #0x48]
71002a7864  mov x20,x0
71002a7868  add x0,sp,#0x8
71002a786c  mov x19,x1
71002a7870  strb wzr,[sp, #0x44]
71002a7874  stp x8,xzr,[sp, #0x10]
71002a7878  mov w8,#0x200
71002a787c  stp xzr,x8,[sp, #0x30]
71002a7880  mov w8,#0x144
71002a7884  str w8,[sp, #0x40]
71002a7888  stp xzr,xzr,[sp, #0x58]
71002a788c  stp xzr,xzr,[sp, #0x20]
71002a7890  bl 0x71001b3160
71002a7894  ldp x8,x21,[sp, #0x20]
71002a7898  cmp x21,x8
71002a789c  b.eq 0x71002a7e9c
71002a78a0  ldur x8,[x21, #-0x10]
71002a78a4  cbz x8,0x71002a78d0
71002a78a8  ldurb w9,[x21, #-0x8]
71002a78ac  ldr x0,[sp, #0x8]
71002a78b0  cbz w9,0x71002a78bc
71002a78b4  mov w1,#0x2c
71002a78b8  b 0x71002a78cc
71002a78bc  tst x8,#0x1
71002a78c0  mov w8,#0x3a
71002a78c4  mov w9,#0x2c
71002a78c8  csel w1,w9,w8,eq
71002a78cc  bl 0x71002ad5d0
71002a78d0  ldur x8,[x21, #-0x10]
71002a78d4  add x8,x8,#0x1
71002a78d8  stur x8,[x21, #-0x10]
71002a78dc  ldr x0,[sp, #0x8]
71002a78e0  orr w1,wzr,#0x38
71002a78e4  bl 0x71002ad6c0
71002a78e8  ldr x10,[sp, #0x8]
71002a78ec  ldr x11,[x10, #0x18]
71002a78f0  mov w22,#0x22
71002a78f4  adrp x24,0x71052a8000
71002a78f8  ldr x24,[x24, #0x860]
71002a78fc  mov w23,#0x5c
71002a7900  orr w9,wzr,#0x30
71002a7904  add x12,x11,#0x1
71002a7908  str x12,[x10, #0x18]
71002a790c  strb w22,[x11]
71002a7910  adrp x25,0x71052a8000
71002a7914  ldr x25,[x25, #0x868]
71002a7918  adrp x8,0x71042d5000
71002a791c  add x8,x8,#0x806
71002a7920  mov x10,x8
71002a7924  ldrb w11,[x10]
71002a7928  ldrb w12,[x24, x11, LSL ]
71002a792c  cbnz w12,0x71002a7958
71002a7930  ldr x12,[sp, #0x8]
71002a7934  ldr x13,[x12, #0x18]
71002a7938  add x10,x10,#0x1
71002a793c  add x14,x13,#0x1
71002a7940  str x14,[x12, #0x18]
71002a7944  strb w11,[x13]
71002a7948  sub x11,x10,x8
71002a794c  cmp x11,#0x9
71002a7950  b.cc 0x71002a7924
71002a7954  b 0x71002a79f8
71002a7958  ldr x13,[sp, #0x8]
71002a795c  ldr x14,[x13, #0x18]
71002a7960  add x15,x14,#0x1
71002a7964  str x15,[x13, #0x18]
71002a7968  strb w23,[x14]
71002a796c  ldr x13,[sp, #0x8]
71002a7970  ldr x14,[x13, #0x18]
71002a7974  add x10,x10,#0x1
71002a7978  cmp w12,#0x75
71002a797c  add x15,x14,#0x1
71002a7980  str x15,[x13, #0x18]
71002a7984  strb w12,[x14]
71002a7988  b.ne 0x71002a7948
71002a798c  ldr x12,[sp, #0x8]
71002a7990  ldr x13,[x12, #0x18]
71002a7994  add x14,x13,#0x1
71002a7998  str x14,[x12, #0x18]
71002a799c  strb w9,[x13]
71002a79a0  ldr x12,[sp, #0x8]
71002a79a4  ldr x13,[x12, #0x18]
71002a79a8  add x14,x13,#0x1
71002a79ac  str x14,[x12, #0x18]
71002a79b0  strb w9,[x13]
71002a79b4  ldr x12,[sp, #0x8]
71002a79b8  lsr x13,x11,#0x4
71002a79bc  ldrb w13,[x25, x13, LSL ]
71002a79c0  and x11,x11,#0xf
71002a79c4  ldr x14,[x12, #0x18]
71002a79c8  add x15,x14,#0x1
71002a79cc  str x15,[x12, #0x18]
71002a79d0  strb w13,[x14]
71002a79d4  ldr x12,[sp, #0x8]
71002a79d8  ldr x13,[x12, #0x18]
71002a79dc  ldrb w11,[x25, x11, LSL ]
71002a79e0  add x14,x13,#0x1
71002a79e4  str x14,[x12, #0x18]
71002a79e8  strb w11,[x13]
71002a79ec  sub x11,x10,x8
71002a79f0  cmp x11,#0x9
71002a79f4  b.cc 0x71002a7924
71002a79f8  ldr x8,[sp, #0x8]
71002a79fc  ldr x9,[x8, #0x18]
71002a7a00  add x10,x9,#0x1
71002a7a04  mov w0,#0xffffffff
71002a7a08  str x10,[x8, #0x18]
71002a7a0c  strb w22,[x9]
71002a7a10  bl 0x71001b34a0
71002a7a14  ldp x8,x26,[sp, #0x20]
71002a7a18  add w21,w0,#0x1
71002a7a1c  cmp x26,x8
71002a7a20  b.eq 0x71002a7ea8
71002a7a24  ldur x8,[x26, #-0x10]
71002a7a28  cbz x8,0x71002a7a54
71002a7a2c  ldurb w9,[x26, #-0x8]
71002a7a30  ldr x0,[sp, #0x8]
71002a7a34  cbz w9,0x71002a7a40
71002a7a38  mov w1,#0x2c
71002a7a3c  b 0x71002a7a50
71002a7a40  tst x8,#0x1
71002a7a44  mov w8,#0x3a
71002a7a48  mov w9,#0x2c
71002a7a4c  csel w1,w9,w8,eq
71002a7a50  bl 0x71002ad5d0
71002a7a54  ldur x8,[x26, #-0x10]
71002a7a58  add x8,x8,#0x1
71002a7a5c  stur x8,[x26, #-0x10]
71002a7a60  sub x1,x29,#0x54
71002a7a64  mov w0,w21
71002a7a68  sub x26,x29,#0x54
71002a7a6c  bl 0x71001b9fe0
71002a7a70  mov x21,x0
71002a7a74  ldr x0,[sp, #0x8]
71002a7a78  sub x1,x21,x26
71002a7a7c  bl 0x71002ad6c0
71002a7a80  cmp x26,x21
71002a7a84  b.eq 0x71002a7aac
71002a7a88  sub x8,x29,#0x54
71002a7a8c  ldr x9,[sp, #0x8]
71002a7a90  ldrb w10,[x8], #0x1
71002a7a94  ldr x11,[x9, #0x18]
71002a7a98  add x12,x11,#0x1
71002a7a9c  cmp x21,x8
71002a7aa0  str x12,[x9, #0x18]
71002a7aa4  strb w10,[x11]
71002a7aa8  b.ne 0x71002a7a8c
71002a7aac  ldp x8,x21,[sp, #0x20]
71002a7ab0  cmp x21,x8
71002a7ab4  b.eq 0x71002a7eb4
71002a7ab8  ldur x8,[x21, #-0x10]
71002a7abc  cbz x8,0x71002a7ae8
71002a7ac0  ldurb w9,[x21, #-0x8]
71002a7ac4  ldr x0,[sp, #0x8]
71002a7ac8  cbz w9,0x71002a7ad4
71002a7acc  mov w1,#0x2c
71002a7ad0  b 0x71002a7ae4
71002a7ad4  tst x8,#0x1
71002a7ad8  mov w8,#0x3a
71002a7adc  mov w9,#0x2c
71002a7ae0  csel w1,w9,w8,eq
71002a7ae4  bl 0x71002ad5d0
71002a7ae8  ldur x8,[x21, #-0x10]
71002a7aec  add x8,x8,#0x1
71002a7af0  stur x8,[x21, #-0x10]
71002a7af4  ldr x0,[sp, #0x8]
71002a7af8  orr w1,wzr,#0x38
71002a7afc  bl 0x71002ad6c0
71002a7b00  ldr x9,[sp, #0x8]
71002a7b04  ldr x10,[x9, #0x18]
71002a7b08  adrp x8,0x7104349000
71002a7b0c  add x8,x8,#0x85b
71002a7b10  add x11,x10,#0x1
71002a7b14  str x11,[x9, #0x18]
71002a7b18  strb w22,[x10]
71002a7b1c  orr w9,wzr,#0x30
71002a7b20  mov x10,x8
71002a7b24  ldrb w11,[x10]
71002a7b28  ldrb w12,[x24, x11, LSL ]
71002a7b2c  cbnz w12,0x71002a7b58
71002a7b30  ldr x12,[sp, #0x8]
71002a7b34  ldr x13,[x12, #0x18]
71002a7b38  add x10,x10,#0x1
71002a7b3c  add x14,x13,#0x1
71002a7b40  str x14,[x12, #0x18]
71002a7b44  strb w11,[x13]
71002a7b48  sub x11,x10,x8
71002a7b4c  cmp x11,#0x9
71002a7b50  b.cc 0x71002a7b24
71002a7b54  b 0x71002a7bf8
71002a7b58  ldr x13,[sp, #0x8]
71002a7b5c  ldr x14,[x13, #0x18]
71002a7b60  add x15,x14,#0x1
71002a7b64  str x15,[x13, #0x18]
71002a7b68  strb w23,[x14]
71002a7b6c  ldr x13,[sp, #0x8]
71002a7b70  ldr x14,[x13, #0x18]
71002a7b74  add x10,x10,#0x1
71002a7b78  cmp w12,#0x75
71002a7b7c  add x15,x14,#0x1
71002a7b80  str x15,[x13, #0x18]
71002a7b84  strb w12,[x14]
71002a7b88  b.ne 0x71002a7b48
71002a7b8c  ldr x12,[sp, #0x8]
71002a7b90  ldr x13,[x12, #0x18]
71002a7b94  add x14,x13,#0x1
71002a7b98  str x14,[x12, #0x18]
71002a7b9c  strb w9,[x13]
71002a7ba0  ldr x12,[sp, #0x8]
71002a7ba4  ldr x13,[x12, #0x18]
71002a7ba8  add x14,x13,#0x1
71002a7bac  str x14,[x12, #0x18]
71002a7bb0  strb w9,[x13]
71002a7bb4  ldr x12,[sp, #0x8]
71002a7bb8  lsr x13,x11,#0x4
71002a7bbc  ldrb w13,[x25, x13, LSL ]
71002a7bc0  and x11,x11,#0xf
71002a7bc4  ldr x14,[x12, #0x18]
71002a7bc8  add x15,x14,#0x1
71002a7bcc  str x15,[x12, #0x18]
71002a7bd0  strb w13,[x14]
71002a7bd4  ldr x12,[sp, #0x8]
71002a7bd8  ldr x13,[x12, #0x18]
71002a7bdc  ldrb w11,[x25, x11, LSL ]
71002a7be0  add x14,x13,#0x1
71002a7be4  str x14,[x12, #0x18]
71002a7be8  strb w11,[x13]
71002a7bec  sub x11,x10,x8
71002a7bf0  cmp x11,#0x9
71002a7bf4  b.cc 0x71002a7b24
71002a7bf8  ldr x8,[sp, #0x8]
71002a7bfc  ldr x9,[x8, #0x18]
71002a7c00  add x10,x9,#0x1
71002a7c04  add x0,sp,#0x8
71002a7c08  str x10,[x8, #0x18]
71002a7c0c  strb w22,[x9]
71002a7c10  bl 0x71001b3160
71002a7c14  ldp x8,x21,[sp, #0x20]
71002a7c18  cmp x21,x8
71002a7c1c  b.eq 0x71002a7ec0
71002a7c20  ldur x8,[x21, #-0x10]
71002a7c24  cbz x8,0x71002a7c50
71002a7c28  ldurb w9,[x21, #-0x8]
71002a7c2c  ldr x0,[sp, #0x8]
71002a7c30  cbz w9,0x71002a7c3c
71002a7c34  mov w1,#0x2c
71002a7c38  b 0x71002a7c4c
71002a7c3c  tst x8,#0x1
71002a7c40  mov w8,#0x3a
71002a7c44  mov w9,#0x2c
71002a7c48  csel w1,w9,w8,eq
71002a7c4c  bl 0x71002ad5d0
71002a7c50  ldur x8,[x21, #-0x10]
71002a7c54  add x8,x8,#0x1
71002a7c58  stur x8,[x21, #-0x10]
71002a7c5c  ldr x0,[sp, #0x8]
71002a7c60  mov w1,#0x26
71002a7c64  bl 0x71002ad6c0
71002a7c68  ldr x9,[sp, #0x8]
71002a7c6c  ldr x10,[x9, #0x18]
71002a7c70  adrp x8,0x7104318000
71002a7c74  add x8,x8,#0x4b7
71002a7c78  add x11,x10,#0x1
71002a7c7c  str x11,[x9, #0x18]
71002a7c80  strb w22,[x10]
71002a7c84  orr w9,wzr,#0x30
71002a7c88  mov x10,x8
71002a7c8c  ldrb w11,[x10]
71002a7c90  ldrb w12,[x24, x11, LSL ]
71002a7c94  cbnz w12,0x71002a7cc0
71002a7c98  ldr x12,[sp, #0x8]
71002a7c9c  ldr x13,[x12, #0x18]
71002a7ca0  add x10,x10,#0x1
71002a7ca4  add x14,x13,#0x1
71002a7ca8  str x14,[x12, #0x18]
71002a7cac  strb w11,[x13]
71002a7cb0  sub x11,x10,x8
71002a7cb4  cmp x11,#0x6
71002a7cb8  b.cc 0x71002a7c8c
71002a7cbc  b 0x71002a7d60
71002a7cc0  ldr x13,[sp, #0x8]
71002a7cc4  ldr x14,[x13, #0x18]
71002a7cc8  add x15,x14,#0x1
71002a7ccc  str x15,[x13, #0x18]
71002a7cd0  strb w23,[x14]
71002a7cd4  ldr x13,[sp, #0x8]
71002a7cd8  ldr x14,[x13, #0x18]
71002a7cdc  add x10,x10,#0x1
71002a7ce0  cmp w12,#0x75
71002a7ce4  add x15,x14,#0x1
71002a7ce8  str x15,[x13, #0x18]
71002a7cec  strb w12,[x14]
71002a7cf0  b.ne 0x71002a7cb0
71002a7cf4  ldr x12,[sp, #0x8]
71002a7cf8  ldr x13,[x12, #0x18]
71002a7cfc  add x14,x13,#0x1
71002a7d00  str x14,[x12, #0x18]
71002a7d04  strb w9,[x13]
71002a7d08  ldr x12,[sp, #0x8]
71002a7d0c  ldr x13,[x12, #0x18]
71002a7d10  add x14,x13,#0x1
71002a7d14  str x14,[x12, #0x18]
71002a7d18  strb w9,[x13]
71002a7d1c  ldr x12,[sp, #0x8]
71002a7d20  lsr x13,x11,#0x4
71002a7d24  ldrb w13,[x25, x13, LSL ]
71002a7d28  and x11,x11,#0xf
71002a7d2c  ldr x14,[x12, #0x18]
71002a7d30  add x15,x14,#0x1
71002a7d34  str x15,[x12, #0x18]
71002a7d38  strb w13,[x14]
71002a7d3c  ldr x12,[sp, #0x8]
71002a7d40  ldr x13,[x12, #0x18]
71002a7d44  ldrb w11,[x25, x11, LSL ]
71002a7d48  add x14,x13,#0x1
71002a7d4c  str x14,[x12, #0x18]
71002a7d50  strb w11,[x13]
71002a7d54  sub x11,x10,x8
71002a7d58  cmp x11,#0x6
71002a7d5c  b.cc 0x71002a7c8c
71002a7d60  ldr x8,[sp, #0x8]
71002a7d64  ldr x9,[x8, #0x18]
71002a7d68  add x10,x9,#0x1
71002a7d6c  str x10,[x8, #0x18]
71002a7d70  strb w22,[x9]
71002a7d74  ldr x20,[x20, #0x8]
71002a7d78  ldp x8,x21,[sp, #0x20]
71002a7d7c  cmp x21,x8
71002a7d80  b.eq 0x71002a7ecc
71002a7d84  ldur x8,[x21, #-0x10]
71002a7d88  cbz x8,0x71002a7db4
71002a7d8c  ldurb w9,[x21, #-0x8]
71002a7d90  ldr x0,[sp, #0x8]
71002a7d94  cbz w9,0x71002a7da0
71002a7d98  mov w1,#0x2c
71002a7d9c  b 0x71002a7db0
71002a7da0  tst x8,#0x1
71002a7da4  mov w8,#0x3a
71002a7da8  mov w9,#0x2c
71002a7dac  csel w1,w9,w8,eq
71002a7db0  bl 0x71002ad5d0
71002a7db4  ldur x8,[x21, #-0x10]
71002a7db8  add x8,x8,#0x1
71002a7dbc  stur x8,[x21, #-0x10]
71002a7dc0  sub x1,x29,#0x54
71002a7dc4  mov x0,x20
71002a7dc8  sub x21,x29,#0x54
71002a7dcc  bl 0x71001b9950
71002a7dd0  mov x20,x0
71002a7dd4  ldr x0,[sp, #0x8]
71002a7dd8  sub x1,x20,x21
71002a7ddc  bl 0x71002ad6c0
71002a7de0  cmp x21,x20
71002a7de4  b.eq 0x71002a7e0c
71002a7de8  sub x8,x29,#0x54
71002a7dec  ldr x9,[sp, #0x8]
71002a7df0  ldrb w10,[x8], #0x1
71002a7df4  ldr x11,[x9, #0x18]
71002a7df8  add x12,x11,#0x1
71002a7dfc  cmp x20,x8
71002a7e00  str x12,[x9, #0x18]
71002a7e04  strb w10,[x11]
71002a7e08  b.ne 0x71002a7dec
71002a7e0c  ldr x8,[sp, #0x28]
71002a7e10  ldr x0,[sp, #0x8]
71002a7e14  mov w20,#0x7d
71002a7e18  mov w1,w20
71002a7e1c  sub x8,x8,#0x10
71002a7e20  str x8,[sp, #0x28]
71002a7e24  bl 0x71002ad5d0
71002a7e28  ldr x8,[sp, #0x28]
71002a7e2c  ldr x0,[sp, #0x8]
71002a7e30  sub x8,x8,#0x10
71002a7e34  mov w1,w20
71002a7e38  str x8,[sp, #0x28]
71002a7e3c  bl 0x71002ad5d0
71002a7e40  add x0,sp,#0x48
71002a7e44  bl 0x71002ac3d0
71002a7e48  mov x1,x0
71002a7e4c  mov x0,x19
71002a7e50  bl 0x71001b3cb0
71002a7e54  ldr x0,[sp, #0x20]
71002a7e58  bl 0x71001b1870
71002a7e5c  ldr x0,[sp, #0x18]
71002a7e60  cbz x0,0x71002a7e68
71002a7e64  bl 0x71001b1870
71002a7e68  ldr x0,[sp, #0x58]
71002a7e6c  bl 0x71001b1870
71002a7e70  ldr x0,[sp, #0x50]
71002a7e74  cbz x0,0x71002a7e7c
71002a7e78  bl 0x71001b1870
71002a7e7c  ldp x29,x30,[sp, #0xd0]
71002a7e80  mov w0,#0x1
71002a7e84  ldp x20,x19,[sp, #0xc0]
71002a7e88  ldp x22,x21,[sp, #0xb0]
71002a7e8c  ldp x24,x23,[sp, #0xa0]
71002a7e90  ldp x26,x25,[sp, #0x90]
71002a7e94  add sp,sp,#0xe0
71002a7e98  ret
71002a7e9c  mov w8,#0x1
71002a7ea0  strb w8,[sp, #0x44]
71002a7ea4  b 0x71002a78dc
71002a7ea8  mov w8,#0x1
71002a7eac  strb w8,[sp, #0x44]
71002a7eb0  b 0x71002a7a60
71002a7eb4  mov w8,#0x1
71002a7eb8  strb w8,[sp, #0x44]
71002a7ebc  b 0x71002a7af4
71002a7ec0  mov w8,#0x1
71002a7ec4  strb w8,[sp, #0x44]
71002a7ec8  b 0x71002a7c5c
71002a7ecc  mov w8,#0x1
71002a7ed0  strb w8,[sp, #0x44]
71002a7ed4  b 0x71002a7dc0
