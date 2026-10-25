// addr:      7102d097a0
// offset:    0x2d097a0
// name:      FUN_7102d097a0
// mangled:   
// size:      1568

7102d097a0  str d8,[sp, #-0x70]!
7102d097a4  stp x28,x27,[sp, #0x10]
7102d097a8  stp x26,x25,[sp, #0x20]
7102d097ac  stp x24,x23,[sp, #0x30]
7102d097b0  stp x22,x21,[sp, #0x40]
7102d097b4  stp x20,x19,[sp, #0x50]
7102d097b8  stp x29,x30,[sp, #0x60]
7102d097bc  add x29,sp,#0x60
7102d097c0  ldr q0,[x0, #0xbc0]
7102d097c4  fmov s1,wzr
7102d097c8  ldr x8,[x0, #0xb68]
7102d097cc  mov v0.S[0x0],v1.S[0x0]
7102d097d0  mov x19,x0
7102d097d4  str q0,[x0, #0xbc0]
7102d097d8  ldr w9,[x8, #0x18]
7102d097dc  cmp w9,#0x3e5
7102d097e0  b.gt 0x7102d097ec
7102d097e4  add w9,w9,#0x1
7102d097e8  str w9,[x8, #0x18]
7102d097ec  ldr x9,[x19, #0xa50]
7102d097f0  ldr x8,[x19, #0xa48]
7102d097f4  cmp x9,x8
7102d097f8  b.eq 0x7102d09830
7102d097fc  mov x20,xzr
7102d09800  ldr x0,[x8, x20, LSL #0x3]
7102d09804  ldr x8,[x0]
7102d09808  ldr x8,[x8, #0x18]
7102d0980c  mov w1,#0x1
7102d09810  blr x8
7102d09814  ldr x9,[x19, #0xa50]
7102d09818  ldr x8,[x19, #0xa48]
7102d0981c  sub x9,x9,x8
7102d09820  add x20,x20,#0x1
7102d09824  asr x9,x9,#0x3
7102d09828  cmp x9,x20
7102d0982c  b.hi 0x7102d09800
7102d09830  ldr x9,[x19, #0xb40]
7102d09834  ldr x8,[x19, #0xb38]
7102d09838  cmp x9,x8
7102d0983c  b.eq 0x7102d09874
7102d09840  mov x20,xzr
7102d09844  ldr x0,[x8, x20, LSL #0x3]
7102d09848  ldr x8,[x0]
7102d0984c  ldr x8,[x8, #0x18]
7102d09850  mov w1,#0x1
7102d09854  blr x8
7102d09858  ldr x9,[x19, #0xb40]
7102d0985c  ldr x8,[x19, #0xb38]
7102d09860  sub x9,x9,x8
7102d09864  add x20,x20,#0x1
7102d09868  asr x9,x9,#0x3
7102d0986c  cmp x9,x20
7102d09870  b.hi 0x7102d09844
7102d09874  ldr x9,[x19, #0xb58]
7102d09878  ldr x8,[x19, #0xb50]
7102d0987c  cmp x9,x8
7102d09880  b.eq 0x7102d098b8
7102d09884  mov x20,xzr
7102d09888  ldr x0,[x8, x20, LSL #0x3]
7102d0988c  ldr x8,[x0]
7102d09890  ldr x8,[x8, #0x18]
7102d09894  mov w1,#0x1
7102d09898  blr x8
7102d0989c  ldr x9,[x19, #0xb58]
7102d098a0  ldr x8,[x19, #0xb50]
7102d098a4  sub x9,x9,x8
7102d098a8  add x20,x20,#0x1
7102d098ac  asr x9,x9,#0x3
7102d098b0  cmp x9,x20
7102d098b4  b.hi 0x7102d09888
7102d098b8  ldr x20,[x19, #0xb68]
7102d098bc  ldp x8,x9,[x20]
7102d098c0  cmp x9,x8
7102d098c4  b.eq 0x7102d09914
7102d098c8  mov x21,xzr
7102d098cc  ldr x9,[x8, x21, LSL #0x3]
7102d098d0  cbz x9,0x7102d098e4
7102d098d4  add x0,x9,#0x108
7102d098d8  strb wzr,[x9, #0x110]
7102d098dc  bl 0x71025e9d50
7102d098e0  ldr x8,[x20]
7102d098e4  ldr x9,[x8, x21, LSL #0x3]
7102d098e8  cbz x9,0x7102d098fc
7102d098ec  ldrb w8,[x9, #0x118]
7102d098f0  orr w8,w8,#0x1
7102d098f4  strb w8,[x9, #0x118]
7102d098f8  ldr x8,[x20]
7102d098fc  ldr x9,[x20, #0x8]
7102d09900  sub x9,x9,x8
7102d09904  add x21,x21,#0x1
7102d09908  asr x9,x9,#0x3
7102d0990c  cmp x9,x21
7102d09910  b.hi 0x7102d098cc
7102d09914  ldr x0,[x19, #0xb80]
7102d09918  ldr x8,[x0]
7102d0991c  ldr x8,[x8, #0x18]
7102d09920  mov w1,#0x1
7102d09924  blr x8
7102d09928  ldr x0,[x19, #0xb88]
7102d0992c  ldr x8,[x0]
7102d09930  ldr x8,[x8, #0x18]
7102d09934  mov w1,#0x1
7102d09938  blr x8
7102d0993c  ldr x20,[x19, #0xb90]
7102d09940  ldrb w8,[x20, #0x40]
7102d09944  cbz w8,0x7102d09994
7102d09948  ldr x21,[x20, #0x30]
7102d0994c  cbz x21,0x7102d09984
7102d09950  ldrb w8,[x21, #0x10]
7102d09954  cbz w8,0x7102d09984
7102d09958  ldrb w8,[x21, #0x50]
7102d0995c  strb wzr,[x21, #0x10]
7102d09960  cbz w8,0x7102d09984
7102d09964  ldr x8,[x21]
7102d09968  ldr w0,[x8, #0x8]
7102d0996c  bl 0x71003ac560
7102d09970  ldr x8,[x0]
7102d09974  ldr x8,[x8, #0x48]
7102d09978  mov w1,wzr
7102d0997c  blr x8
7102d09980  strb wzr,[x21, #0x50]
7102d09984  ldr x8,[x20]
7102d09988  ldr x8,[x8, #0x30]
7102d0998c  mov x0,x20
7102d09990  blr x8
7102d09994  strb wzr,[x20, #0x40]
7102d09998  ldr x20,[x19, #0xb90]
7102d0999c  ldr x8,[x20, #0xb8]
7102d099a0  cbz x8,0x7102d099b0
7102d099a4  add x0,x8,#0x108
7102d099a8  strb wzr,[x8, #0x110]
7102d099ac  bl 0x71025e9d50
7102d099b0  mov x0,x20
7102d099b4  bl 0x7103140b20
7102d099b8  ldr x8,[x19, #0xa68]
7102d099bc  ldr x9,[x19, #0xa60]
7102d099c0  sub x8,x8,x9
7102d099c4  lsr x8,x8,#0x3
7102d099c8  subs w9,w8,#0x1
7102d099cc  mul w9,w9,w8
7102d099d0  cmp w9,#0x0
7102d099d4  cinc w12,w9,lt
7102d099d8  ldr x9,[x19, #0x340]
7102d099dc  strh wzr,[x19, #0xb78]
7102d099e0  ldp w10,w11,[x9]
7102d099e4  eor w10,w10,w10, LSL #0xb
7102d099e8  ldp w14,w15,[x9, #0x8]
7102d099ec  stp w11,w14,[x9]
7102d099f0  eor w10,w10,w10, LSR #0x8
7102d099f4  eor w10,w10,w15
7102d099f8  eor w13,w10,w15, LSR #0x13
7102d099fc  subs w10,w8,#0x1
7102d09a00  stp w15,w13,[x9, #0x8]
7102d09a04  b.lt 0x7102d09a40
7102d09a08  asr w12,w12,#0x1
7102d09a0c  udiv w14,w13,w12
7102d09a10  mov w11,wzr
7102d09a14  mov w9,wzr
7102d09a18  msub w12,w14,w12,w13
7102d09a1c  mov w13,w12
7102d09a20  add w11,w11,w10
7102d09a24  cmp w12,w11
7102d09a28  b.lt 0x7102d09a4c
7102d09a2c  add w9,w9,#0x1
7102d09a30  sub w13,w13,w10
7102d09a34  sub w10,w10,#0x1
7102d09a38  cmp w9,w8
7102d09a3c  b.lt 0x7102d09a20
7102d09a40  mov x20,xzr
7102d09a44  mov w9,wzr
7102d09a48  b 0x7102d09a58
7102d09a4c  add w8,w9,w13
7102d09a50  add w8,w8,#0x1
7102d09a54  sxtw x20,w8
7102d09a58  ldr x8,[x19, #0xa60]
7102d09a5c  ldr x0,[x8, w9, UXTW #0x3]
7102d09a60  ldr x8,[x0]
7102d09a64  ldr x8,[x8, #0x20]
7102d09a68  mov w1,#0x1
7102d09a6c  mov w2,#0x1
7102d09a70  mov w21,#0x1
7102d09a74  blr x8
7102d09a78  ldr x8,[x19, #0xa60]
7102d09a7c  ldr x0,[x8, x20, LSL #0x3]
7102d09a80  ldr x8,[x0]
7102d09a84  ldr x8,[x8, #0x20]
7102d09a88  mov w1,#0x1
7102d09a8c  mov w2,#0x1
7102d09a90  blr x8
7102d09a94  ldrb w8,[x19, #0x18]
7102d09a98  cbz w8,0x7102d09aa8
7102d09a9c  ldr x8,[x19, #0xa90]
7102d09aa0  ldr x8,[x8]
7102d09aa4  strb w21,[x8, #0x64]
7102d09aa8  ldr x9,[x19, #0xac8]
7102d09aac  ldr x8,[x19, #0xac0]
7102d09ab0  cmp x9,x8
7102d09ab4  b.eq 0x7102d09b00
7102d09ab8  fmov s8,wzr
7102d09abc  mov x20,xzr
7102d09ac0  lsl x21,x20,#0x3
7102d09ac4  ldr x0,[x8, x21, LSL #0x0]
7102d09ac8  bl 0x710313ef20
7102d09acc  ldr x8,[x19, #0xac0]
7102d09ad0  ldr x0,[x8, x21, LSL #0x0]
7102d09ad4  ldr x8,[x0]
7102d09ad8  ldr x8,[x8, #0x10]
7102d09adc  mov v0.16B,v8.16B
7102d09ae0  blr x8
7102d09ae4  ldr x9,[x19, #0xac8]
7102d09ae8  ldr x8,[x19, #0xac0]
7102d09aec  sub x9,x9,x8
7102d09af0  add x20,x20,#0x1
7102d09af4  asr x9,x9,#0x3
7102d09af8  cmp x9,x20
7102d09afc  b.hi 0x7102d09ac0
7102d09b00  ldr x9,[x19, #0xae0]
7102d09b04  ldr x8,[x19, #0xad8]
7102d09b08  cmp x9,x8
7102d09b0c  b.eq 0x7102d09b8c
7102d09b10  mov x21,xzr
7102d09b14  ldr x20,[x8, x21, LSL #0x3]
7102d09b18  ldrb w8,[x20, #0x40]
7102d09b1c  cbz w8,0x7102d09b6c
7102d09b20  ldr x22,[x20, #0x30]
7102d09b24  cbz x22,0x7102d09b5c
7102d09b28  ldrb w8,[x22, #0x10]
7102d09b2c  cbz w8,0x7102d09b5c
7102d09b30  ldrb w8,[x22, #0x50]
7102d09b34  strb wzr,[x22, #0x10]
7102d09b38  cbz w8,0x7102d09b5c
7102d09b3c  ldr x8,[x22]
7102d09b40  ldr w0,[x8, #0x8]
7102d09b44  bl 0x71003ac560
7102d09b48  ldr x8,[x0]
7102d09b4c  ldr x8,[x8, #0x48]
7102d09b50  mov w1,wzr
7102d09b54  blr x8
7102d09b58  strb wzr,[x22, #0x50]
7102d09b5c  ldr x8,[x20]
7102d09b60  ldr x8,[x8, #0x30]
7102d09b64  mov x0,x20
7102d09b68  blr x8
7102d09b6c  strb wzr,[x20, #0x40]
7102d09b70  ldr x9,[x19, #0xae0]
7102d09b74  ldr x8,[x19, #0xad8]
7102d09b78  sub x9,x9,x8
7102d09b7c  add x21,x21,#0x1
7102d09b80  asr x9,x9,#0x3
7102d09b84  cmp x9,x21
7102d09b88  b.hi 0x7102d09b14
7102d09b8c  ldr x9,[x19, #0xaf8]
7102d09b90  ldr x8,[x19, #0xaf0]
7102d09b94  cmp x9,x8
7102d09b98  b.eq 0x7102d09c18
7102d09b9c  mov x21,xzr
7102d09ba0  ldr x20,[x8, x21, LSL #0x3]
7102d09ba4  ldrb w8,[x20, #0x40]
7102d09ba8  cbz w8,0x7102d09bf8
7102d09bac  ldr x22,[x20, #0x30]
7102d09bb0  cbz x22,0x7102d09be8
7102d09bb4  ldrb w8,[x22, #0x10]
7102d09bb8  cbz w8,0x7102d09be8
7102d09bbc  ldrb w8,[x22, #0x50]
7102d09bc0  strb wzr,[x22, #0x10]
7102d09bc4  cbz w8,0x7102d09be8
7102d09bc8  ldr x8,[x22]
7102d09bcc  ldr w0,[x8, #0x8]
7102d09bd0  bl 0x71003ac560
7102d09bd4  ldr x8,[x0]
7102d09bd8  ldr x8,[x8, #0x48]
7102d09bdc  mov w1,wzr
7102d09be0  blr x8
7102d09be4  strb wzr,[x22, #0x50]
7102d09be8  ldr x8,[x20]
7102d09bec  ldr x8,[x8, #0x30]
7102d09bf0  mov x0,x20
7102d09bf4  blr x8
7102d09bf8  strb wzr,[x20, #0x40]
7102d09bfc  ldr x9,[x19, #0xaf8]
7102d09c00  ldr x8,[x19, #0xaf0]
7102d09c04  sub x9,x9,x8
7102d09c08  add x21,x21,#0x1
7102d09c0c  asr x9,x9,#0x3
7102d09c10  cmp x9,x21
7102d09c14  b.hi 0x7102d09ba0
7102d09c18  ldr x9,[x19, #0xb10]
7102d09c1c  ldr x8,[x19, #0xb08]
7102d09c20  cmp x9,x8
7102d09c24  b.eq 0x7102d09ca4
7102d09c28  mov x21,xzr
7102d09c2c  ldr x20,[x8, x21, LSL #0x3]
7102d09c30  ldrb w8,[x20, #0x40]
7102d09c34  cbz w8,0x7102d09c84
7102d09c38  ldr x22,[x20, #0x30]
7102d09c3c  cbz x22,0x7102d09c74
7102d09c40  ldrb w8,[x22, #0x10]
7102d09c44  cbz w8,0x7102d09c74
7102d09c48  ldrb w8,[x22, #0x50]
7102d09c4c  strb wzr,[x22, #0x10]
7102d09c50  cbz w8,0x7102d09c74
7102d09c54  ldr x8,[x22]
7102d09c58  ldr w0,[x8, #0x8]
7102d09c5c  bl 0x71003ac560
7102d09c60  ldr x8,[x0]
7102d09c64  ldr x8,[x8, #0x48]
7102d09c68  mov w1,wzr
7102d09c6c  blr x8
7102d09c70  strb wzr,[x22, #0x50]
7102d09c74  ldr x8,[x20]
7102d09c78  ldr x8,[x8, #0x30]
7102d09c7c  mov x0,x20
7102d09c80  blr x8
7102d09c84  strb wzr,[x20, #0x40]
7102d09c88  ldr x9,[x19, #0xb10]
7102d09c8c  ldr x8,[x19, #0xb08]
7102d09c90  sub x9,x9,x8
7102d09c94  add x21,x21,#0x1
7102d09c98  asr x9,x9,#0x3
7102d09c9c  cmp x9,x21
7102d09ca0  b.hi 0x7102d09c2c
7102d09ca4  mov x0,x19
7102d09ca8  mov w1,wzr
7102d09cac  mov w2,wzr
7102d09cb0  bl 0x7102d09dc0
7102d09cb4  ldr x8,[x19, #0x300]
7102d09cb8  ldr x8,[x8, #0x18]
7102d09cbc  ldp x27,x28,[x8]
7102d09cc0  cmp x27,x28
7102d09cc4  b.eq 0x7102d09d94
7102d09cc8  mov x23,#0xdf99
7102d09ccc  movk x23,#0xb569, LSL #16
7102d09cd0  adrp x20,0x71043bc000
7102d09cd4  add x20,x20,#0xb6c
7102d09cd8  adrp x21,0x710436a000
7102d09cdc  add x21,x21,#0x9e7
7102d09ce0  adrp x22,0x7105314000
7102d09ce4  add x22,x22,#0x4d8
7102d09ce8  movk x23,#0x7, LSL #32
7102d09cec  adrp x24,0x71052c5000
7102d09cf0  adrp x26,0x71042a1000
7102d09cf4  add x26,x26,#0x676
7102d09cf8  b 0x7102d09d3c
7102d09cfc  mov x0,x22
7102d09d00  bl 0x71039c06b0
7102d09d04  cbz w0,0x7102d09d74
7102d09d08  bl 0x7101764000
7102d09d0c  adrp x0,0x7101763000
7102d09d10  add x0,x0,#0xc40
7102d09d14  adrp x1,0x71052c5000
7102d09d18  add x1,x1,#0x180
7102d09d1c  adrp x2,0x7104f17000
7102d09d20  add x2,x2,#0x0
7102d09d24  bl 0x71000001c0
7102d09d28  mov x0,x22
7102d09d2c  bl 0x71039c06c0
7102d09d30  ldrb w8,[x24, #0x1ba]
7102d09d34  cbnz w8,0x7102d09d88
7102d09d38  b 0x7102d09d7c
7102d09d3c  ldr x8,[x27]
7102d09d40  ldr x9,[x8, #0xa0]
7102d09d44  and x9,x9,#0xffffffffff
7102d09d48  cmp x9,x23
7102d09d4c  b.ne 0x7102d09d88
7102d09d50  ldr x25,[x8, #0x130]
7102d09d54  ldp x0,x1,[x25]
7102d09d58  mov x2,x20
7102d09d5c  bl 0x71025f55b0
7102d09d60  ldp x0,x1,[x25]
7102d09d64  mov x2,x21
7102d09d68  bl 0x71025f55b0
7102d09d6c  ldarb w8,[x22]
7102d09d70  tbz w8,#0x0,0x7102d09cfc
7102d09d74  ldrb w8,[x24, #0x1ba]
7102d09d78  cbnz w8,0x7102d09d88
7102d09d7c  ldp x0,x1,[x25]
7102d09d80  mov x2,x26
7102d09d84  bl 0x71025f55b0
7102d09d88  add x27,x27,#0x8
7102d09d8c  cmp x28,x27
7102d09d90  b.ne 0x7102d09d3c
7102d09d94  mov w8,#0x1
7102d09d98  strh w8,[x19, #0xbf0]
7102d09d9c  str w8,[x19, #0xb98]
7102d09da0  ldp x29,x30,[sp, #0x60]
7102d09da4  ldp x20,x19,[sp, #0x50]
7102d09da8  ldp x22,x21,[sp, #0x40]
7102d09dac  ldp x24,x23,[sp, #0x30]
7102d09db0  ldp x26,x25,[sp, #0x20]
7102d09db4  ldp x28,x27,[sp, #0x10]
7102d09db8  ldr d8,[sp], #0x70
7102d09dbc  ret
