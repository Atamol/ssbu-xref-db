// addr:      7102df58a0
// offset:    0x2df58a0
// name:      FUN_7102df58a0
// mangled:   
// size:      1028

7102df58a0  sub sp,sp,#0xb0
7102df58a4  str d8,[sp, #0x80]
7102df58a8  stp x20,x19,[sp, #0x90]
7102df58ac  stp x29,x30,[sp, #0xa0]
7102df58b0  add x29,sp,#0xa0
7102df58b4  ldrb w8,[x0, #0x58]
7102df58b8  cbz w8,0x7102df5c90
7102df58bc  ldrb w8,[x0, #0x20]
7102df58c0  mov x19,x0
7102df58c4  cmp w8,#0x8
7102df58c8  b.eq 0x7102df5a64
7102df58cc  cmp w8,#0x1
7102df58d0  b.eq 0x7102df598c
7102df58d4  cbnz w8,0x7102df5bb0
7102df58d8  mov w8,#0x1
7102df58dc  strb w8,[x19, #0x50]
7102df58e0  ldr x8,[x19, #0x18]
7102df58e4  cbz x8,0x7102df5920
7102df58e8  ldrb w9,[x8, #0xe0]
7102df58ec  cbz w9,0x7102df5900
7102df58f0  ldr x9,[x8, #0xc8]
7102df58f4  cbz x9,0x7102df5900
7102df58f8  mov w10,#0x101
7102df58fc  strh w10,[x9, #0x30]
7102df5900  ldr x9,[x8, #0xd8]
7102df5904  cbz x9,0x7102df5910
7102df5908  mov w10,#0x1
7102df590c  strb w10,[x9, #0x21]
7102df5910  ldrb w9,[x8, #0xe0]
7102df5914  cbz w9,0x7102df5920
7102df5918  ldr x8,[x8, #0xb0]
7102df591c  strb wzr,[x8, #0x10]
7102df5920  ldr x0,[x19, #0x18]
7102df5924  fmov s0,wzr
7102df5928  mov w1,#0x1
7102df592c  mov w20,#0x1
7102df5930  bl 0x710260fdd0
7102df5934  ldr x8,[x19, #0x18]
7102df5938  cbz x8,0x7102df5988
7102df593c  add x0,x8,#0x108
7102df5940  strb wzr,[x8, #0x110]
7102df5944  bl 0x71025e9d50
7102df5948  ldr x8,[x19, #0x18]
7102df594c  cbz x8,0x7102df5988
7102df5950  ldrb w9,[x8, #0xe0]
7102df5954  cbz w9,0x7102df5968
7102df5958  ldr x9,[x8, #0xc8]
7102df595c  cbz x9,0x7102df5968
7102df5960  mov w10,#0x101
7102df5964  strh w10,[x9, #0x30]
7102df5968  ldr x9,[x8, #0xd8]
7102df596c  cbz x9,0x7102df5978
7102df5970  mov w10,#0x1
7102df5974  strb w10,[x9, #0x21]
7102df5978  ldrb w9,[x8, #0xe0]
7102df597c  cbz w9,0x7102df5988
7102df5980  ldr x8,[x8, #0xb0]
7102df5984  strb wzr,[x8, #0x10]
7102df5988  strb w20,[x19, #0x20]
7102df598c  ldr x8,[x19, #0x28]
7102df5990  ldrb w8,[x8, #0x10]
7102df5994  cbnz w8,0x7102df5bb0
7102df5998  ldr x0,[x19, #0x18]
7102df599c  adrp x1,0x7104328000
7102df59a0  add x1,x1,#0x320
7102df59a4  strb wzr,[x19, #0x50]
7102df59a8  bl 0x7102610070
7102df59ac  fmov s8,wzr
7102df59b0  ldr x0,[x19, #0x18]
7102df59b4  mov w1,#0x1
7102df59b8  mov v0.16B,v8.16B
7102df59bc  bl 0x710260fdd0
7102df59c0  ldr x8,[x19, #0x18]
7102df59c4  cbz x8,0x7102df5ba4
7102df59c8  ldrb w9,[x8, #0xe0]
7102df59cc  cbz w9,0x7102df59dc
7102df59d0  ldr x9,[x8, #0xc8]
7102df59d4  cbz x9,0x7102df59dc
7102df59d8  strh wzr,[x9, #0x30]
7102df59dc  ldr x9,[x8, #0xd8]
7102df59e0  cbz x9,0x7102df59e8
7102df59e4  strb wzr,[x9, #0x21]
7102df59e8  ldrb w9,[x8, #0xe0]
7102df59ec  cbz w9,0x7102df59fc
7102df59f0  ldr x8,[x8, #0xb0]
7102df59f4  mov w9,#0x1
7102df59f8  strb w9,[x8, #0x10]
7102df59fc  ldr x8,[x19, #0x18]
7102df5a00  cbz x8,0x7102df5ba4
7102df5a04  ldrb w9,[x8, #0xe0]
7102df5a08  cbz w9,0x7102df5a18
7102df5a0c  ldr x9,[x8, #0xc8]
7102df5a10  cbz x9,0x7102df5a18
7102df5a14  strh wzr,[x9, #0x32]
7102df5a18  ldr x8,[x8, #0xd8]
7102df5a1c  cbz x8,0x7102df5a24
7102df5a20  strb wzr,[x8, #0x22]
7102df5a24  ldr x8,[x19, #0x18]
7102df5a28  cbz x8,0x7102df5ba4
7102df5a2c  ldr x8,[x8, #0xd8]
7102df5a30  cbz x8,0x7102df5ba4
7102df5a34  ldr x8,[x8, #0x8]
7102df5a38  ldr x0,[x8, #0x10]
7102df5a3c  ldr w8,[x8, #0xac]
7102df5a40  cmp w8,#0x1
7102df5a44  b.eq 0x7102df5b70
7102df5a48  cbnz w8,0x7102df5ba4
7102df5a4c  ldr x8,[x0]
7102df5a50  ldr x8,[x8, #0x38]
7102df5a54  mov w1,wzr
7102df5a58  blr x8
7102df5a5c  cbnz x0,0x7102df5b84
7102df5a60  b 0x7102df5b94
7102df5a64  ldr x8,[x19, #0x18]
7102df5a68  fmov s8,wzr
7102df5a6c  cbz x8,0x7102df5ae4
7102df5a70  ldrb w9,[x8, #0x110]
7102df5a74  cbz w9,0x7102df5a90
7102df5a78  ldr x8,[x19, #0x18]
7102df5a7c  cbz x8,0x7102df5ae4
7102df5a80  ldr x8,[x8, #0xd8]
7102df5a84  cbz x8,0x7102df5ae4
7102df5a88  ldr s8,[x8, #0x10]
7102df5a8c  b 0x7102df5ae4
7102df5a90  add x0,x8,#0x108
7102df5a94  mov w9,#0x1
7102df5a98  strb w9,[x8, #0x110]
7102df5a9c  bl 0x71025e9d50
7102df5aa0  ldr x8,[x19, #0x18]
7102df5aa4  cbz x8,0x7102df5ae4
7102df5aa8  ldrb w9,[x8, #0xe0]
7102df5aac  cbz w9,0x7102df5abc
7102df5ab0  ldr x9,[x8, #0xc8]
7102df5ab4  cbz x9,0x7102df5abc
7102df5ab8  strh wzr,[x9, #0x30]
7102df5abc  ldr x9,[x8, #0xd8]
7102df5ac0  cbz x9,0x7102df5ac8
7102df5ac4  strb wzr,[x9, #0x21]
7102df5ac8  ldrb w9,[x8, #0xe0]
7102df5acc  cbz w9,0x7102df5a78
7102df5ad0  ldr x8,[x8, #0xb0]
7102df5ad4  mov w9,#0x1
7102df5ad8  strb w9,[x8, #0x10]
7102df5adc  ldr x8,[x19, #0x18]
7102df5ae0  cbnz x8,0x7102df5a80
7102df5ae4  ldr s0,[x19, #0x54]
7102df5ae8  fcmp s8,s0
7102df5aec  b.lt 0x7102df5bb0
7102df5af0  ldr x8,[x19, #0x28]
7102df5af4  stp xzr,xzr,[x8]
7102df5af8  ldr x8,[x19, #0x28]
7102df5afc  orr w9,wzr,#0x3
7102df5b00  strb w9,[x8, #0x10]
7102df5b04  ldr x8,[x19, #0x28]
7102df5b08  strb wzr,[x8, #0x11]
7102df5b0c  ldr x8,[x19, #0x18]
7102df5b10  cbz x8,0x7102df5b60
7102df5b14  add x0,x8,#0x108
7102df5b18  strb wzr,[x8, #0x110]
7102df5b1c  bl 0x71025e9d50
7102df5b20  ldr x8,[x19, #0x18]
7102df5b24  cbz x8,0x7102df5b60
7102df5b28  ldrb w9,[x8, #0xe0]
7102df5b2c  cbz w9,0x7102df5b40
7102df5b30  ldr x9,[x8, #0xc8]
7102df5b34  cbz x9,0x7102df5b40
7102df5b38  mov w10,#0x101
7102df5b3c  strh w10,[x9, #0x30]
7102df5b40  ldr x9,[x8, #0xd8]
7102df5b44  cbz x9,0x7102df5b50
7102df5b48  mov w10,#0x1
7102df5b4c  strb w10,[x9, #0x21]
7102df5b50  ldrb w9,[x8, #0xe0]
7102df5b54  cbz w9,0x7102df5b60
7102df5b58  ldr x8,[x8, #0xb0]
7102df5b5c  strb wzr,[x8, #0x10]
7102df5b60  strb wzr,[x19, #0x20]
7102df5b64  ldr x20,[x19, #0x18]
7102df5b68  cbnz x20,0x7102df5bb8
7102df5b6c  b 0x7102df5c90
7102df5b70  ldr x8,[x0]
7102df5b74  ldr x8,[x8, #0x38]
7102df5b78  mov w1,#0x1
7102df5b7c  blr x8
7102df5b80  cbz x0,0x7102df5b94
7102df5b84  ldr x8,[x0]
7102df5b88  ldr x8,[x8, #0x40]
7102df5b8c  mov w1,wzr
7102df5b90  blr x8
7102df5b94  ldr x8,[x0]
7102df5b98  ldr x8,[x8, #0x88]
7102df5b9c  blr x8
7102df5ba0  mov v8.16B,v0.16B
7102df5ba4  mov w8,#0x8
7102df5ba8  str s8,[x19, #0x54]
7102df5bac  strb w8,[x19, #0x20]
7102df5bb0  ldr x20,[x19, #0x18]
7102df5bb4  cbz x20,0x7102df5c90
7102df5bb8  ldrb w8,[x20, #0x110]
7102df5bbc  cbz w8,0x7102df5c90
7102df5bc0  ldr x8,[x19, #0x28]
7102df5bc4  ldr b0,[x8, #0x12]
7102df5bc8  adrp x9,0x7104472000
7102df5bcc  ucvtf s0,s0
7102df5bd0  ldr s1,[x9, #0x590]
7102df5bd4  fmul s0,s0,s1
7102df5bd8  ldr q1,[x8]
7102df5bdc  adrp x8,0x7104468000
7102df5be0  mov v1.D[0x1],v0.D[0x0]
7102df5be4  fmov s0,0x3f800000
7102df5be8  mov v1.S[0x3],v0.S[0x0]
7102df5bec  ldr q0,[x8, #0xca0]
7102df5bf0  adrp x8,0x710446a000
7102df5bf4  mov x1,sp
7102df5bf8  str q0,[sp]
7102df5bfc  ldr q0,[x8, #0x360]
7102df5c00  adrp x8,0x7104465000
7102df5c04  str q0,[sp, #0x10]
7102df5c08  ldr q0,[x8, #0x6b0]
7102df5c0c  stp q0,q1,[sp, #0x20]
7102df5c10  ldr x0,[x20, #0x90]
7102df5c14  ldr x8,[x0]
7102df5c18  ldr x8,[x8, #0x148]
7102df5c1c  blr x8
7102df5c20  ldr x19,[x20, #0xd8]
7102df5c24  cbz x19,0x7102df5c90
7102df5c28  ldr x8,[sp, #0x18]
7102df5c2c  str x8,[sp, #0x58]
7102df5c30  ldr x8,[sp, #0x10]
7102df5c34  str x8,[sp, #0x50]
7102df5c38  ldr x8,[sp, #0x8]
7102df5c3c  str x8,[sp, #0x48]
7102df5c40  ldr x8,[sp]
7102df5c44  str x8,[sp, #0x40]
7102df5c48  ldr x8,[sp, #0x38]
7102df5c4c  str x8,[sp, #0x78]
7102df5c50  ldr x8,[sp, #0x30]
7102df5c54  str x8,[sp, #0x70]
7102df5c58  ldr x8,[sp, #0x28]
7102df5c5c  str x8,[sp, #0x68]
7102df5c60  ldr x8,[sp, #0x20]
7102df5c64  str x8,[sp, #0x60]
7102df5c68  ldr x8,[x19, #0x8]
7102df5c6c  ldrb w9,[x8, #0xa8]
7102df5c70  cbz w9,0x7102df5c88
7102df5c74  ldr x0,[x8, #0x48]
7102df5c78  ldr x8,[x0]
7102df5c7c  ldr x8,[x8, #0x20]
7102df5c80  add x1,sp,#0x40
7102df5c84  blr x8
7102df5c88  mov w8,#0x1
7102df5c8c  strb w8,[x19, #0x20]
7102df5c90  ldr d8,[sp, #0x80]
7102df5c94  ldp x29,x30,[sp, #0xa0]
7102df5c98  ldp x20,x19,[sp, #0x90]
7102df5c9c  add sp,sp,#0xb0
7102df5ca0  ret
