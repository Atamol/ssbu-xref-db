// addr:      7101aa08b0
// offset:    0x1aa08b0
// name:      FUN_7101aa08b0
// mangled:   
// size:      1044

7101aa08b0  sub sp,sp,#0x60
7101aa08b4  str x23,[sp, #0x20]
7101aa08b8  stp x22,x21,[sp, #0x30]
7101aa08bc  stp x20,x19,[sp, #0x40]
7101aa08c0  stp x29,x30,[sp, #0x50]
7101aa08c4  add x29,sp,#0x50
7101aa08c8  ldr w8,[x0, #0x17c]
7101aa08cc  cbnz w8,0x7101aa0ca8
7101aa08d0  ldr x8,[x0, #0x198]
7101aa08d4  ldr x8,[x8]
7101aa08d8  mov x19,x0
7101aa08dc  add x0,x8,#0x8
7101aa08e0  adrp x1,0x7104280000
7101aa08e4  add x1,x1,#0x50f
7101aa08e8  add x8,sp,#0x10
7101aa08ec  bl 0x7103776910
7101aa08f0  adrp x8,0x7105314000
7101aa08f4  ldr x8,[x8, #0x510]
7101aa08f8  ldr x8,[x8]
7101aa08fc  ldr x8,[x8, #0x68]
7101aa0900  ldr x20,[x8]
7101aa0904  mov x0,sp
7101aa0908  bl 0x71039c2680
7101aa090c  cbz w0,0x7101aa0918
7101aa0910  mov w3,#0xffffffff
7101aa0914  b 0x7101aa09a0
7101aa0918  ldr x13,[x20, #0x8]
7101aa091c  ldr x11,[sp]
7101aa0920  mov x9,#-0xda
7101aa0924  ldrsw x12,[x20]
7101aa0928  mov w14,#0xdd8
7101aa092c  movk w14,#0x1, LSL #16
7101aa0930  mov x8,xzr
7101aa0934  mov w3,wzr
7101aa0938  movk x9,#0x9c5f, LSL #16
7101aa093c  mov w10,#0xed55
7101aa0940  movk w10,#0xed75, LSL #16
7101aa0944  add x13,x13,x14
7101aa0948  mov w14,#0xca00
7101aa094c  movk w14,#0x3b9a, LSL #16
7101aa0950  ldr x15,[x13, x8, LSL #0x0]
7101aa0954  add x8,x8,#0x8
7101aa0958  sub x15,x11,x15
7101aa095c  mul x15,x15,x14
7101aa0960  and x16,x15,#0xfffffe00
7101aa0964  asr x17,x15,#0x20
7101aa0968  mul x18,x17,x10
7101aa096c  mul x0,x16,x10
7101aa0970  mul x16,x16,x9
7101aa0974  madd x17,x17,x9,x15
7101aa0978  add x18,x18,x0, LSR #0x20
7101aa097c  add x16,x16,w18, UXTW 
7101aa0980  add x17,x17,x18, ASR #0x20
7101aa0984  add x16,x17,x16, ASR #0x20
7101aa0988  asr x16,x16,#0x29
7101aa098c  add x15,x16,x15, LSR #0x3f
7101aa0990  cmp x15,x12
7101aa0994  cinc w3,w3,lt
7101aa0998  cmp x8,#0xf0
7101aa099c  b.ne 0x7101aa0950
7101aa09a0  adrp x1,0x71042d5000
7101aa09a4  add x1,x1,#0xd17
7101aa09a8  add x0,sp,#0x10
7101aa09ac  mov w2,#0x1
7101aa09b0  bl 0x710377a280
7101aa09b4  ldr x0,[sp, #0x18]
7101aa09b8  adrp x22,0x710523d000
7101aa09bc  add x22,x22,#0x9a8
7101aa09c0  stp x22,xzr,[sp, #0x10]
7101aa09c4  cbz x0,0x7101aa09cc
7101aa09c8  bl 0x710392eb40
7101aa09cc  ldr x8,[x19, #0x198]
7101aa09d0  strh wzr,[x19, #0x20a]
7101aa09d4  ldr x8,[x8]
7101aa09d8  add x0,x8,#0x8
7101aa09dc  adrp x1,0x7104422000
7101aa09e0  add x1,x1,#0x52d
7101aa09e4  add x8,sp,#0x10
7101aa09e8  bl 0x7103776640
7101aa09ec  adrp x1,0x71043cf000
7101aa09f0  add x1,x1,#0xca4
7101aa09f4  mov x8,sp
7101aa09f8  add x0,sp,#0x10
7101aa09fc  bl 0x7103776910
7101aa0a00  ldr x20,[sp, #0x18]
7101aa0a04  adrp x23,0x710523d000
7101aa0a08  add x23,x23,#0x988
7101aa0a0c  stp x23,xzr,[sp, #0x10]
7101aa0a10  cbz x20,0x7101aa0a2c
7101aa0a14  ldr x0,[x20, #0x18]
7101aa0a18  stp x22,xzr,[x20, #0x10]
7101aa0a1c  cbz x0,0x7101aa0a24
7101aa0a20  bl 0x710392eb40
7101aa0a24  mov x0,x20
7101aa0a28  bl 0x710392eb40
7101aa0a2c  ldr x20,[sp, #0x8]
7101aa0a30  ldr x0,[x20, #0x10]
7101aa0a34  cbz x0,0x7101aa0a4c
7101aa0a38  add x1,sp,#0x10
7101aa0a3c  mov w2,wzr
7101aa0a40  mov w3,wzr
7101aa0a44  str wzr,[sp, #0x10]
7101aa0a48  bl 0x71037a2270
7101aa0a4c  ldr x8,[x19, #0x198]
7101aa0a50  ldr x8,[x8]
7101aa0a54  add x0,x8,#0x8
7101aa0a58  adrp x1,0x7104422000
7101aa0a5c  add x1,x1,#0x52d
7101aa0a60  add x8,sp,#0x10
7101aa0a64  bl 0x7103776640
7101aa0a68  ldr x21,[sp, #0x18]
7101aa0a6c  fmov s0,0x3f800000
7101aa0a70  adrp x1,0x7104281000
7101aa0a74  add x1,x1,#0x6d
7101aa0a78  mov x0,x21
7101aa0a7c  bl 0x7103778300
7101aa0a80  stp x23,xzr,[sp, #0x10]
7101aa0a84  cbz x21,0x7101aa0aa0
7101aa0a88  ldr x0,[x21, #0x18]
7101aa0a8c  stp x22,xzr,[x21, #0x10]
7101aa0a90  cbz x0,0x7101aa0a98
7101aa0a94  bl 0x710392eb40
7101aa0a98  mov x0,x21
7101aa0a9c  bl 0x710392eb40
7101aa0aa0  ldr x8,[x19, #0x198]
7101aa0aa4  ldr x8,[x8]
7101aa0aa8  add x0,x8,#0x8
7101aa0aac  adrp x1,0x710439d000
7101aa0ab0  add x1,x1,#0x562
7101aa0ab4  add x8,sp,#0x10
7101aa0ab8  bl 0x7103776640
7101aa0abc  ldr x21,[sp, #0x18]
7101aa0ac0  fmov s0,0x3f800000
7101aa0ac4  adrp x1,0x7104433000
7101aa0ac8  add x1,x1,#0x286
7101aa0acc  mov x0,x21
7101aa0ad0  bl 0x7103778300
7101aa0ad4  stp x23,xzr,[sp, #0x10]
7101aa0ad8  cbz x21,0x7101aa0af4
7101aa0adc  ldr x0,[x21, #0x18]
7101aa0ae0  stp x22,xzr,[x21, #0x10]
7101aa0ae4  cbz x0,0x7101aa0aec
7101aa0ae8  bl 0x710392eb40
7101aa0aec  mov x0,x21
7101aa0af0  bl 0x710392eb40
7101aa0af4  ldr x8,[x19, #0x198]
7101aa0af8  ldr x8,[x8]
7101aa0afc  add x0,x8,#0x8
7101aa0b00  adrp x1,0x71042f8000
7101aa0b04  add x1,x1,#0x3c4
7101aa0b08  add x8,sp,#0x10
7101aa0b0c  bl 0x7103776910
7101aa0b10  mov w3,#0x190
7101aa0b14  add x0,sp,#0x10
7101aa0b18  mov w1,#0x2
7101aa0b1c  mov w2,wzr
7101aa0b20  bl 0x710377a310
7101aa0b24  ldr x0,[sp, #0x18]
7101aa0b28  stp x22,xzr,[sp, #0x10]
7101aa0b2c  cbz x0,0x7101aa0b34
7101aa0b30  bl 0x710392eb40
7101aa0b34  ldr x8,[x19, #0x198]
7101aa0b38  ldr x8,[x8]
7101aa0b3c  add x0,x8,#0x8
7101aa0b40  adrp x1,0x7104280000
7101aa0b44  add x1,x1,#0x50f
7101aa0b48  add x8,sp,#0x10
7101aa0b4c  bl 0x7103776910
7101aa0b50  add x0,sp,#0x10
7101aa0b54  mov w1,#0x1
7101aa0b58  mov w2,wzr
7101aa0b5c  bl 0x710377a310
7101aa0b60  ldr x0,[sp, #0x18]
7101aa0b64  stp x22,xzr,[sp, #0x10]
7101aa0b68  cbz x0,0x7101aa0b70
7101aa0b6c  bl 0x710392eb40
7101aa0b70  add x0,x19,#0x1b0
7101aa0b74  mov w2,#0x1
7101aa0b78  mov w1,wzr
7101aa0b7c  bl 0x7103771a80
7101aa0b80  ldr x0,[x19, #0x1a8]
7101aa0b84  ldr x9,[x0, #0x1b8]
7101aa0b88  cbz x9,0x7101aa0c70
7101aa0b8c  add x8,x0,#0x1b8
7101aa0b90  mov x10,x8
7101aa0b94  mov x11,x9
7101aa0b98  ldr w12,[x11, #0x20]
7101aa0b9c  cmp w12,#0x1
7101aa0ba0  cset w12,lt
7101aa0ba4  csel x10,x10,x11,lt
7101aa0ba8  ldr x11,[x11, w12, UXTW #0x3]
7101aa0bac  cbnz x11,0x7101aa0b98
7101aa0bb0  cmp x10,x8
7101aa0bb4  b.eq 0x7101aa0c04
7101aa0bb8  ldr w11,[x10, #0x20]
7101aa0bbc  cmp w11,#0x1
7101aa0bc0  b.gt 0x7101aa0c04
7101aa0bc4  ldr x21,[x10, #0x28]
7101aa0bc8  cbz x21,0x7101aa0c04
7101aa0bcc  ldr x8,[x21]
7101aa0bd0  ldr x8,[x8, #0x1f8]
7101aa0bd4  mov x0,x21
7101aa0bd8  mov w1,wzr
7101aa0bdc  blr x8
7101aa0be0  ldr x8,[x21]
7101aa0be4  ldr x8,[x8, #0x388]
7101aa0be8  mov w1,#0x1
7101aa0bec  mov x0,x21
7101aa0bf0  mov w2,wzr
7101aa0bf4  blr x8
7101aa0bf8  ldr x0,[x19, #0x1a8]
7101aa0bfc  ldr x9,[x0, #0x1b8]
7101aa0c00  add x8,x0,#0x1b8
7101aa0c04  cbz x9,0x7101aa0c70
7101aa0c08  mov x10,x8
7101aa0c0c  ldr w11,[x9, #0x20]
7101aa0c10  cmp w11,#0x2
7101aa0c14  cset w11,lt
7101aa0c18  csel x10,x10,x9,lt
7101aa0c1c  ldr x9,[x9, w11, UXTW #0x3]
7101aa0c20  cbnz x9,0x7101aa0c0c
7101aa0c24  cmp x10,x8
7101aa0c28  b.eq 0x7101aa0c70
7101aa0c2c  ldr w8,[x10, #0x20]
7101aa0c30  cmp w8,#0x2
7101aa0c34  b.gt 0x7101aa0c70
7101aa0c38  ldr x21,[x10, #0x28]
7101aa0c3c  cbz x21,0x7101aa0c70
7101aa0c40  ldr x8,[x21]
7101aa0c44  ldr x8,[x8, #0x1f8]
7101aa0c48  mov x0,x21
7101aa0c4c  mov w1,wzr
7101aa0c50  blr x8
7101aa0c54  ldr x8,[x21]
7101aa0c58  ldr x8,[x8, #0x388]
7101aa0c5c  mov w1,#0x1
7101aa0c60  mov x0,x21
7101aa0c64  mov w2,wzr
7101aa0c68  blr x8
7101aa0c6c  ldr x0,[x19, #0x1a8]
7101aa0c70  ldr x8,[x0]
7101aa0c74  ldr x8,[x8, #0x60]
7101aa0c78  mov w1,wzr
7101aa0c7c  blr x8
7101aa0c80  ldrsw x8,[x19, #0x174]
7101aa0c84  cmp w8,#0x13
7101aa0c88  b.cs 0x7101aa0cc0
7101aa0c8c  add x8,x19,x8, LSL #0x2
7101aa0c90  mov w9,#0x2
7101aa0c94  str w9,[x8, #0x128]
7101aa0c98  stp x22,xzr,[sp]
7101aa0c9c  cbz x20,0x7101aa0ca8
7101aa0ca0  mov x0,x20
7101aa0ca4  bl 0x710392eb40
7101aa0ca8  ldp x29,x30,[sp, #0x50]
7101aa0cac  ldr x23,[sp, #0x20]
7101aa0cb0  ldp x20,x19,[sp, #0x40]
7101aa0cb4  ldp x22,x21,[sp, #0x30]
7101aa0cb8  add sp,sp,#0x60
7101aa0cbc  ret
7101aa0cc0  bl 0x71039c2650
