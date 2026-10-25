// addr:      7102b406f0
// offset:    0x2b406f0
// name:      FUN_7102b406f0
// mangled:   
// size:      1248

7102b406f0  sub sp,sp,#0x1e0
7102b406f4  stp x28,x23,[sp, #0x1a0]
7102b406f8  stp x22,x21,[sp, #0x1b0]
7102b406fc  stp x20,x19,[sp, #0x1c0]
7102b40700  stp x29,x30,[sp, #0x1d0]
7102b40704  add x29,sp,#0x1d0
7102b40708  mov x19,x0
7102b4070c  bl 0x71025d9250
7102b40710  ldr x8,[x19, #0x330]
7102b40714  ldr x8,[x8]
7102b40718  ldp x20,x21,[x8, #0x38]
7102b4071c  cmp x20,x21
7102b40720  b.eq 0x7102b40760
7102b40724  movi v0.2D,#0x0
7102b40728  add x8,x19,#0x740
7102b4072c  mov w22,#0x1
7102b40730  ld1 {v0.S}[1],[x8]
7102b40734  str q0,[sp]
7102b40738  ldr x0,[x20]
7102b4073c  ldr q0,[sp]
7102b40740  ldrb w8,[x0, #0x80]
7102b40744  str q0,[x0, #0x90]
7102b40748  cbnz w8,0x7102b40750
7102b4074c  strb w22,[x0, #0x80]
7102b40750  bl 0x71026178e0
7102b40754  add x20,x20,#0x8
7102b40758  cmp x21,x20
7102b4075c  b.ne 0x7102b40738
7102b40760  ldr x8,[x19, #0x300]
7102b40764  ldr x8,[x8, #0x18]
7102b40768  ldr x8,[x8]
7102b4076c  mov x9,#0xdf99
7102b40770  movk x9,#0xb569, LSL #16
7102b40774  add x20,x19,#0x738
7102b40778  movk x9,#0x7, LSL #32
7102b4077c  b 0x7102b40784
7102b40780  add x8,x8,#0x8
7102b40784  ldr x10,[x8]
7102b40788  ldr x11,[x10, #0xa0]
7102b4078c  and x11,x11,#0xffffffffff
7102b40790  cmp x11,x9
7102b40794  b.ne 0x7102b40780
7102b40798  adrp x8,0x7105314000
7102b4079c  add x8,x8,#0x4d8
7102b407a0  ldr x21,[x10, #0x130]
7102b407a4  ldarb w8,[x8]
7102b407a8  tbz w8,#0x0,0x7102b40b90
7102b407ac  adrp x8,0x71052c5000
7102b407b0  ldrb w8,[x8, #0x1ba]
7102b407b4  adrp x2,0x71043bc000
7102b407b8  add x2,x2,#0xb6c
7102b407bc  ldp x0,x1,[x21]
7102b407c0  cbz w8,0x7102b407cc
7102b407c4  bl 0x71025f5420
7102b407c8  b 0x7102b407d0
7102b407cc  bl 0x71025f55b0
7102b407d0  add x8,sp,#0x10
7102b407d4  add x8,x8,#0x155
7102b407d8  strb wzr,[sp, #0x180]
7102b407dc  stp xzr,xzr,[sp, #0x170]
7102b407e0  movi v2.2D,#0x0
7102b407e4  str xzr,[x8]
7102b407e8  adrp x8,0x7105115000
7102b407ec  add x8,x8,#0xf48
7102b407f0  ldr x9,[x8, #0x10]
7102b407f4  str x9,[sp, #0x20]
7102b407f8  strb wzr,[sp, #0x16c]
7102b407fc  ldp x9,x8,[x8]
7102b40800  mov v1.16B,v2.16B
7102b40804  stp xzr,xzr,[sp, #0x158]
7102b40808  mov w1,#0x310
7102b4080c  stp xzr,xzr,[sp, #0x148]
7102b40810  mov w0,#0x10
7102b40814  stp xzr,xzr,[sp, #0x138]
7102b40818  stp xzr,xzr,[sp, #0x128]
7102b4081c  stp xzr,xzr,[sp, #0x118]
7102b40820  stp xzr,xzr,[sp, #0x108]
7102b40824  stp x9,x8,[sp, #0x10]
7102b40828  adrp x8,0x7105115000
7102b4082c  add x8,x8,#0xf60
7102b40830  ldp x9,x10,[x8, #0x10]
7102b40834  stp x9,x10,[sp, #0x38]
7102b40838  ldp x9,x8,[x8]
7102b4083c  stp xzr,xzr,[sp, #0xf8]
7102b40840  stp xzr,xzr,[sp, #0xe8]
7102b40844  stp xzr,xzr,[sp, #0xd8]
7102b40848  stp xzr,xzr,[sp, #0xc8]
7102b4084c  stp xzr,xzr,[sp, #0xb8]
7102b40850  stp x9,x8,[sp, #0x28]
7102b40854  adrp x8,0x7105115000
7102b40858  add x8,x8,#0xf80
7102b4085c  ldp x9,x10,[x8]
7102b40860  ldp x11,x12,[x8, #0x10]
7102b40864  stp x11,x12,[sp, #0x68]
7102b40868  stp x9,x10,[sp, #0x58]
7102b4086c  ldp x9,x10,[x8, #0x20]
7102b40870  ldp x11,x8,[x8, #0x30]
7102b40874  stp x11,x8,[sp, #0x88]
7102b40878  adrp x8,0x71042e5000
7102b4087c  add x8,x8,#0x319
7102b40880  stp x9,x10,[sp, #0x78]
7102b40884  adrp x9,0x71042c2000
7102b40888  add x9,x9,#0xec5
7102b4088c  orr w10,wzr,#0x3
7102b40890  stp x8,x9,[sp, #0x48]
7102b40894  orr w8,wzr,#0x6
7102b40898  mov w9,#0xffffffff
7102b4089c  str w8,[sp, #0x98]
7102b408a0  orr w8,wzr,#0x7
7102b408a4  str w8,[sp, #0x9c]
7102b408a8  mov w8,#0x4
7102b408ac  str w8,[sp, #0xa0]
7102b408b0  mov w8,#0x5
7102b408b4  str w8,[sp, #0xa4]
7102b408b8  mov w8,#0x8
7102b408bc  stp w8,w9,[sp, #0xa8]
7102b408c0  stp w8,w9,[sp, #0xb0]
7102b408c4  ldr x8,[x19, #0x7a0]
7102b408c8  mov x9,x8
7102b408cc  ldr s0,[x8, #0x8]
7102b408d0  fcmp s0,#0.0
7102b408d4  ld1 {v1.S}[0],[x9], #0x4
7102b408d8  csinc w12,w10,wzr,ls
7102b408dc  ld1 {v1.S}[1],[x9]
7102b408e0  mov w9,#0x2
7102b408e4  csel w11,wzr,w9,hi
7102b408e8  stp w11,w12,[sp, #0xb8]
7102b408ec  mov v1.S[0x2],v0.S[0x0]
7102b408f0  mov v0.16B,v2.16B
7102b408f4  str q1,[sp, #0xe0]
7102b408f8  ldr w11,[x8, #0xc]
7102b408fc  str w11,[sp, #0x130]
7102b40900  ldr w11,[x8, #0x10]
7102b40904  str w11,[sp, #0x144]
7102b40908  ldr w11,[x8, #0x14]
7102b4090c  str w11,[sp, #0x158]
7102b40910  add x11,x8,#0x18
7102b40914  ld1 {v0.S}[0],[x11]
7102b40918  add x11,x8,#0x1c
7102b4091c  ld1 {v0.S}[1],[x11]
7102b40920  ldr s1,[x8, #0x20]
7102b40924  mov v0.S[0x2],v1.S[0x0]
7102b40928  fcmp s1,#0.0
7102b4092c  csel w11,wzr,w9,hi
7102b40930  csinc w12,w10,wzr,ls
7102b40934  str q0,[sp, #0xf0]
7102b40938  stp w11,w12,[sp, #0xc0]
7102b4093c  ldr w11,[x8, #0x24]
7102b40940  str w11,[sp, #0x134]
7102b40944  ldr w11,[x8, #0x28]
7102b40948  str w11,[sp, #0x148]
7102b4094c  ldr w11,[x8, #0x2c]
7102b40950  mov v0.16B,v2.16B
7102b40954  str w11,[sp, #0x15c]
7102b40958  add x11,x8,#0x30
7102b4095c  ld1 {v0.S}[0],[x11]
7102b40960  add x11,x8,#0x34
7102b40964  ld1 {v0.S}[1],[x11]
7102b40968  ldr s1,[x8, #0x38]
7102b4096c  mov v0.S[0x2],v1.S[0x0]
7102b40970  fcmp s1,#0.0
7102b40974  csel w11,wzr,w9,hi
7102b40978  csinc w12,w10,wzr,ls
7102b4097c  stp w11,w12,[sp, #0xc8]
7102b40980  str q0,[sp, #0x100]
7102b40984  ldr w11,[x8, #0x3c]
7102b40988  str w11,[sp, #0x138]
7102b4098c  ldr w11,[x8, #0x40]
7102b40990  str w11,[sp, #0x14c]
7102b40994  ldr w11,[x8, #0x44]
7102b40998  mov v0.16B,v2.16B
7102b4099c  str w11,[sp, #0x160]
7102b409a0  add x11,x8,#0x48
7102b409a4  ldr s1,[x8, #0x50]
7102b409a8  ld1 {v0.S}[0],[x11]
7102b409ac  add x11,x8,#0x4c
7102b409b0  fcmp s1,#0.0
7102b409b4  ld1 {v0.S}[1],[x11]
7102b409b8  csel w11,wzr,w9,hi
7102b409bc  mov v0.S[0x2],v1.S[0x0]
7102b409c0  csinc w12,w10,wzr,ls
7102b409c4  stp w11,w12,[sp, #0xd0]
7102b409c8  str q0,[sp, #0x110]
7102b409cc  ldr w11,[x8, #0x54]
7102b409d0  str w11,[sp, #0x13c]
7102b409d4  ldr w11,[x8, #0x58]
7102b409d8  str w11,[sp, #0x150]
7102b409dc  ldr w11,[x8, #0x5c]
7102b409e0  mov v0.16B,v2.16B
7102b409e4  str w11,[sp, #0x164]
7102b409e8  add x11,x8,#0x60
7102b409ec  ldr s1,[x8, #0x68]
7102b409f0  ld1 {v0.S}[0],[x11]
7102b409f4  add x11,x8,#0x64
7102b409f8  fcmp s1,#0.0
7102b409fc  ld1 {v0.S}[1],[x11]
7102b40a00  mov v0.S[0x2],v1.S[0x0]
7102b40a04  csel w9,wzr,w9,hi
7102b40a08  csinc w10,w10,wzr,ls
7102b40a0c  stp w9,w10,[sp, #0xd8]
7102b40a10  str q0,[sp, #0x120]
7102b40a14  ldr w9,[x8, #0x6c]
7102b40a18  str w9,[sp, #0x140]
7102b40a1c  ldr w9,[x8, #0x70]
7102b40a20  str w9,[sp, #0x154]
7102b40a24  ldr w8,[x8, #0x74]
7102b40a28  str w8,[sp, #0x168]
7102b40a2c  add x8,x19,#0x790
7102b40a30  ld1 {v2.S}[0],[x8]
7102b40a34  add x8,x19,#0x794
7102b40a38  ld1 {v2.S}[1],[x8]
7102b40a3c  add x8,x19,#0x798
7102b40a40  ld1 {v2.S}[2],[x8]
7102b40a44  str q2,[sp, #0x170]
7102b40a48  bl 0x710392e290
7102b40a4c  mov x21,x0
7102b40a50  cbnz x0,0x7102b40a9c
7102b40a54  adrp x8,0x7105332000
7102b40a58  ldr x0,[x8, #0xf00]
7102b40a5c  cbz x0,0x7102b40a98
7102b40a60  mov w8,#0x310
7102b40a64  stur wzr,[x29, #-0x34]
7102b40a68  sub x1,x29,#0x34
7102b40a6c  stur x8,[x29, #-0x40]
7102b40a70  ldr x8,[x0]
7102b40a74  ldr x8,[x8, #0x30]
7102b40a78  sub x2,x29,#0x40
7102b40a7c  blr x8
7102b40a80  tbz w0,#0x0,0x7102b40a98
7102b40a84  mov w1,#0x310
7102b40a88  mov w0,#0x10
7102b40a8c  bl 0x710392e290
7102b40a90  mov x21,x0
7102b40a94  cbnz x0,0x7102b40a9c
7102b40a98  mov x21,xzr
7102b40a9c  ldr x4,[x19, #0x338]
7102b40aa0  add x3,sp,#0x10
7102b40aa4  mov x0,x21
7102b40aa8  mov x1,x19
7102b40aac  mov x2,x20
7102b40ab0  bl 0x7102b40c50
7102b40ab4  ldr x0,[x19, #0x7d0]
7102b40ab8  str x21,[x19, #0x7d0]
7102b40abc  cbz x0,0x7102b40acc
7102b40ac0  ldr x8,[x0]
7102b40ac4  ldr x8,[x8, #0x8]
7102b40ac8  blr x8
7102b40acc  ldr x8,[x19, #0x308]
7102b40ad0  ldp w21,w22,[x8, #0xf8]
7102b40ad4  ldr w23,[x8, #0x100]
7102b40ad8  mov w1,#0x24
7102b40adc  mov w0,#0x10
7102b40ae0  bl 0x710392e290
7102b40ae4  mov x20,x0
7102b40ae8  cbnz x0,0x7102b40b34
7102b40aec  adrp x8,0x7105332000
7102b40af0  ldr x0,[x8, #0xf00]
7102b40af4  cbz x0,0x7102b40b30
7102b40af8  mov w8,#0x24
7102b40afc  stur wzr,[x29, #-0x40]
7102b40b00  sub x1,x29,#0x40
7102b40b04  str x8,[sp, #0x10]
7102b40b08  ldr x8,[x0]
7102b40b0c  ldr x8,[x8, #0x30]
7102b40b10  add x2,sp,#0x10
7102b40b14  blr x8
7102b40b18  tbz w0,#0x0,0x7102b40b30
7102b40b1c  mov w1,#0x24
7102b40b20  mov w0,#0x10
7102b40b24  bl 0x710392e290
7102b40b28  mov x20,x0
7102b40b2c  cbnz x0,0x7102b40b34
7102b40b30  mov x20,xzr
7102b40b34  mov w8,#0xc1d00000
7102b40b38  add x1,sp,#0x10
7102b40b3c  mov x0,x20
7102b40b40  stur xzr,[x20, #0x1c]
7102b40b44  stur xzr,[x20, #0x14]
7102b40b48  stur xzr,[x20, #0xc]
7102b40b4c  stur xzr,[x20, #0x4]
7102b40b50  stp w21,w22,[sp, #0x10]
7102b40b54  stp w23,w8,[sp, #0x18]
7102b40b58  bl 0x710318b620
7102b40b5c  ldr x21,[x19, #0x7d8]
7102b40b60  str x20,[x19, #0x7d8]
7102b40b64  cbz x21,0x7102b40b78
7102b40b68  mov x0,x21
7102b40b6c  bl 0x710318b9b0
7102b40b70  mov x0,x21
7102b40b74  bl 0x710392eb40
7102b40b78  ldp x29,x30,[sp, #0x1d0]
7102b40b7c  ldp x20,x19,[sp, #0x1c0]
7102b40b80  ldp x22,x21,[sp, #0x1b0]
7102b40b84  ldp x28,x23,[sp, #0x1a0]
7102b40b88  add sp,sp,#0x1e0
7102b40b8c  ret
7102b40b90  adrp x0,0x7105314000
7102b40b94  add x0,x0,#0x4d8
7102b40b98  bl 0x71039c06b0
7102b40b9c  cbz w0,0x7102b407ac
7102b40ba0  bl 0x7101764000
7102b40ba4  adrp x0,0x7101763000
7102b40ba8  add x0,x0,#0xc40
7102b40bac  adrp x1,0x71052c5000
7102b40bb0  add x1,x1,#0x180
7102b40bb4  adrp x2,0x7104f17000
7102b40bb8  add x2,x2,#0x0
7102b40bbc  bl 0x71000001c0
7102b40bc0  adrp x0,0x7105314000
7102b40bc4  add x0,x0,#0x4d8
7102b40bc8  bl 0x71039c06c0
7102b40bcc  b 0x7102b407ac
