// addr:      7101b8cad0
// offset:    0x1b8cad0
// name:      FUN_7101b8cad0
// mangled:   
// size:      532

7101b8cad0  sub sp,sp,#0x30
7101b8cad4  str x19,[sp, #0x10]
7101b8cad8  stp x29,x30,[sp, #0x20]
7101b8cadc  add x29,sp,#0x20
7101b8cae0  ldr x19,[x0, #0x80]
7101b8cae4  mov x0,x19
7101b8cae8  bl 0x7101b8c4e0
7101b8caec  ldr x9,[x19]
7101b8caf0  cbz x9,0x7101b8cb18
7101b8caf4  ldp x8,x11,[x19, #0x8]
7101b8caf8  and x10,x11,#0x1
7101b8cafc  orr x12,x10,x8
7101b8cb00  cbz x12,0x7101b8cb18
7101b8cb04  add x0,x9,x11, ASR #0x1
7101b8cb08  cbz x10,0x7101b8cb14
7101b8cb0c  ldr x9,[x0]
7101b8cb10  ldr x8,[x9, x8, LSL #0x0]
7101b8cb14  blr x8
7101b8cb18  ldr w8,[x19, #0xbc]
7101b8cb1c  add w8,w8,#0x1
7101b8cb20  str w8,[x19, #0xbc]
7101b8cb24  ldr x8,[x19, #0xd0]
7101b8cb28  ldr x8,[x8]
7101b8cb2c  add x0,x8,#0x8
7101b8cb30  adrp x1,0x710426f000
7101b8cb34  add x1,x1,#0xd7a
7101b8cb38  mov x8,sp
7101b8cb3c  bl 0x7103776910
7101b8cb40  ldr x0,[sp, #0x8]
7101b8cb44  ldr x8,[x0]
7101b8cb48  cbz x8,0x7101b8cb50
7101b8cb4c  ldrb w8,[x8, #0x59]
7101b8cb50  strb w8,[x19, #0x17b]
7101b8cb54  ldr x8,[x0]
7101b8cb58  cbz x8,0x7101b8cbbc
7101b8cb5c  movi v2.2D,#0x0
7101b8cb60  ldr s4,[x8, #0x30]
7101b8cb64  add x9,x8,#0x34
7101b8cb68  ldp s0,s1,[x8, #0x50]
7101b8cb6c  add x10,x8,#0x38
7101b8cb70  ldp s5,s7,[x8, #0x48]
7101b8cb74  mov v3.16B,v2.16B
7101b8cb78  fmul s1,s1,s7
7101b8cb7c  fmul s0,s0,s5
7101b8cb80  fabs s0,s0
7101b8cb84  mov v3.S[0x0],v4.S[0x0]
7101b8cb88  fmov s5,0x3f000000
7101b8cb8c  fmul s6,s0,s5
7101b8cb90  ld1 {v3.S}[1],[x9]
7101b8cb94  ldrb w9,[x8, #0x5b]
7101b8cb98  ld1 {v3.S}[2],[x10]
7101b8cb9c  fabs s1,s1
7101b8cba0  and w10,w9,#0x3
7101b8cba4  cmp w10,#0x2
7101b8cba8  b.eq 0x7101b8cbd8
7101b8cbac  cmp w10,#0x1
7101b8cbb0  b.ne 0x7101b8cbe0
7101b8cbb4  fadd s4,s4,s6
7101b8cbb8  b 0x7101b8cbdc
7101b8cbbc  adrp x8,0x71052a8000
7101b8cbc0  ldr x8,[x8, #0xa88]
7101b8cbc4  ldr q5,[x8]
7101b8cbc8  fmov s0,wzr
7101b8cbcc  mov v1.16B,v0.16B
7101b8cbd0  dup s4,v5.S[0x1]
7101b8cbd4  b 0x7101b8cc58
7101b8cbd8  fsub s4,s4,s6
7101b8cbdc  mov v3.S[0x0],v4.S[0x0]
7101b8cbe0  fmul s4,s1,s5
7101b8cbe4  ubfx w9,w9,#0x2,#0x2
7101b8cbe8  cmp w9,#0x2
7101b8cbec  b.eq 0x7101b8cc04
7101b8cbf0  cmp w9,#0x1
7101b8cbf4  b.ne 0x7101b8cc10
7101b8cbf8  dup s5,v3.S[0x1]
7101b8cbfc  fsub s4,s5,s4
7101b8cc00  b 0x7101b8cc0c
7101b8cc04  dup s5,v3.S[0x1]
7101b8cc08  fadd s4,s4,s5
7101b8cc0c  mov v3.S[0x1],v4.S[0x0]
7101b8cc10  ldr x8,[x8, #0x18]
7101b8cc14  cbz x8,0x7101b8cc50
7101b8cc18  ldp s4,s6,[x8, #0x30]
7101b8cc1c  fadd s5,s3,s4
7101b8cc20  dup s4,v3.S[0x1]
7101b8cc24  fadd s4,s4,s6
7101b8cc28  dup s7,v3.S[0x2]
7101b8cc2c  mov v3.16B,v2.16B
7101b8cc30  mov v3.S[0x0],v5.S[0x0]
7101b8cc34  ldr s6,[x8, #0x38]
7101b8cc38  mov v3.S[0x1],v4.S[0x0]
7101b8cc3c  fadd s6,s7,s6
7101b8cc40  mov v3.S[0x2],v6.S[0x0]
7101b8cc44  ldr x8,[x8, #0x18]
7101b8cc48  cbnz x8,0x7101b8cc18
7101b8cc4c  b 0x7101b8cc58
7101b8cc50  dup s4,v3.S[0x1]
7101b8cc54  mov v5.16B,v3.16B
7101b8cc58  movi v2.2D,#0x0
7101b8cc5c  mov v3.16B,v2.16B
7101b8cc60  adrp x8,0x7104472000
7101b8cc64  mov v3.S[0x0],v0.S[0x0]
7101b8cc68  movi v0.4S,#0x3f, LSL #24
7101b8cc6c  mov v3.S[0x1],v1.S[0x0]
7101b8cc70  ldr s1,[x19, #0x174]
7101b8cc74  fmul v0.4S,v3.4S,v0.4S
7101b8cc78  fmov s3,0x3f000000
7101b8cc7c  fmul s1,s1,s3
7101b8cc80  ldr s3,[x8, #0x8b8]
7101b8cc84  adrp x8,0x7104472000
7101b8cc88  fadd s3,s5,s3
7101b8cc8c  ldr s5,[x8, #0x4c4]
7101b8cc90  ldr w8,[x19, #0x1c0]
7101b8cc94  subs w8,w8,#0x1
7101b8cc98  fsub s3,s3,s0
7101b8cc9c  fsub s4,s5,s4
7101b8cca0  dup s0,v0.S[0x1]
7101b8cca4  fsub s0,s4,s0
7101b8cca8  mov v2.S[0x0],v3.S[0x0]
7101b8ccac  fadd s0,s0,s1
7101b8ccb0  mov v2.S[0x1],v0.S[0x0]
7101b8ccb4  str q2,[x19, #0x160]
7101b8ccb8  b.lt 0x7101b8ccc0
7101b8ccbc  str w8,[x19, #0x1c0]
7101b8ccc0  adrp x8,0x710523d000
7101b8ccc4  add x8,x8,#0x9a8
7101b8ccc8  stp x8,xzr,[sp]
7101b8cccc  cbz x0,0x7101b8ccd4
7101b8ccd0  bl 0x710392eb40
7101b8ccd4  ldp x29,x30,[sp, #0x20]
7101b8ccd8  ldr x19,[sp, #0x10]
7101b8ccdc  add sp,sp,#0x30
7101b8cce0  ret
