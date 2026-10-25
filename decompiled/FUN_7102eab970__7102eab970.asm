// addr:      7102eab970
// offset:    0x2eab970
// name:      FUN_7102eab970
// mangled:   
// size:      6380

7102eab970  sub sp,sp,#0x120
7102eab974  str d10,[sp, #0xb0]
7102eab978  stp d9,d8,[sp, #0xc0]
7102eab97c  stp x28,x25,[sp, #0xd0]
7102eab980  stp x24,x23,[sp, #0xe0]
7102eab984  stp x22,x21,[sp, #0xf0]
7102eab988  stp x20,x19,[sp, #0x100]
7102eab98c  stp x29,x30,[sp, #0x110]
7102eab990  add x29,sp,#0x110
7102eab994  ldr w8,[x0, #0x150]
7102eab998  mov x19,x0
7102eab99c  cmp w8,#0x1
7102eab9a0  str d0,[sp, #0x10]
7102eab9a4  b.eq 0x7102eab9e0
7102eab9a8  cmp w8,#0x3
7102eab9ac  b.eq 0x7102eabb60
7102eab9b0  cmp w8,#0x2
7102eab9b4  b.ne 0x7102eac2cc
7102eab9b8  ldr x20,[x19, #0x18]
7102eab9bc  ldr x21,[x20, #0x30]
7102eab9c0  cbz x21,0x7102eabbc0
7102eab9c4  ldrb w8,[x21, #0x10]
7102eab9c8  cmp w8,#0x0
7102eab9cc  cset w8,ne
7102eab9d0  ldrb w9,[x20, #0x40]
7102eab9d4  tbnz w8,#0x0,0x7102eabbcc
7102eab9d8  cbz w9,0x7102eabc1c
7102eab9dc  b 0x7102eabbcc
7102eab9e0  ldr w8,[x19, #0x158]
7102eab9e4  cbz w8,0x7102eabc44
7102eab9e8  ldr x8,[x19, #0x110]
7102eab9ec  adrp x9,0x7104465000
7102eab9f0  str wzr,[x19, #0x158]
7102eab9f4  ldr q0,[x9, #0xba0]
7102eab9f8  mov x20,x19
7102eab9fc  ldr w8,[x8, #0x50]
7102eaba00  str w8,[x19, #0x174]
7102eaba04  str q0,[x20, #0x30]!
7102eaba08  fmov s0,w8
7102eaba0c  adrp x8,0x7104472000
7102eaba10  ldr s1,[x8, #0xc18]
7102eaba14  adrp x8,0x7104472000
7102eaba18  fdiv s1,s1,s0
7102eaba1c  ldr q2,[x19, #0x180]
7102eaba20  mov v2.S[0x0],v1.S[0x0]
7102eaba24  ldr s1,[x8, #0x28c]
7102eaba28  fdiv s0,s1,s0
7102eaba2c  ldr x0,[x19]
7102eaba30  mov v2.S[0x1],v0.S[0x0]
7102eaba34  str q2,[x19, #0x180]
7102eaba38  ldr x8,[x0]
7102eaba3c  ldr x8,[x8, #0x98]
7102eaba40  blr x8
7102eaba44  ldr x0,[x19, #0x18]
7102eaba48  bl 0x710313ef20
7102eaba4c  ldr x8,[x19]
7102eaba50  ldr x8,[x8, #0x70]
7102eaba54  cbz x8,0x7102eaba90
7102eaba58  ldrb w9,[x8, #0xe0]
7102eaba5c  cbz w9,0x7102eaba70
7102eaba60  ldr x9,[x8, #0xc8]
7102eaba64  cbz x9,0x7102eaba70
7102eaba68  mov w10,#0x101
7102eaba6c  strh w10,[x9, #0x30]
7102eaba70  ldr x9,[x8, #0xd8]
7102eaba74  cbz x9,0x7102eaba80
7102eaba78  mov w10,#0x1
7102eaba7c  strb w10,[x9, #0x21]
7102eaba80  ldrb w9,[x8, #0xe0]
7102eaba84  cbz w9,0x7102eaba90
7102eaba88  ldr x8,[x8, #0xb0]
7102eaba8c  strb wzr,[x8, #0x10]
7102eaba90  adrp x8,0x7104467000
7102eaba94  ldr q0,[x8, #0x10]
7102eaba98  mov x22,x19
7102eaba9c  str q0,[x22, #0xb0]!
7102eabaa0  adrp x8,0x7104472000
7102eabaa4  ldr s1,[x8, #0xc1c]
7102eabaa8  adrp x8,0x7104471000
7102eabaac  ldr s0,[x22, #0xc4]
7102eabab0  fdiv s1,s1,s0
7102eabab4  mov x23,x22
7102eabab8  ldr q2,[x23, #0xe0]!
7102eababc  mov v2.S[0x0],v1.S[0x0]
7102eabac0  ldr s1,[x8, #0xcc4]
7102eabac4  fdiv s0,s1,s0
7102eabac8  mov v2.S[0x1],v0.S[0x0]
7102eabacc  str q2,[x23]
7102eabad0  ldur x0,[x22, #-0x30]
7102eabad4  ldr x8,[x0]
7102eabad8  ldr x8,[x8, #0x98]
7102eabadc  add x21,x19,#0x174
7102eabae0  add x24,x19,#0x180
7102eabae4  blr x8
7102eabae8  ldur x0,[x22, #-0x18]
7102eabaec  bl 0x710313ef20
7102eabaf0  ldur x8,[x22, #-0x30]
7102eabaf4  ldr x8,[x8, #0x70]
7102eabaf8  cbz x8,0x7102eabb34
7102eabafc  ldrb w9,[x8, #0xe0]
7102eabb00  cbz w9,0x7102eabb14
7102eabb04  ldr x9,[x8, #0xc8]
7102eabb08  cbz x9,0x7102eabb14
7102eabb0c  mov w10,#0x101
7102eabb10  strh w10,[x9, #0x30]
7102eabb14  ldr x9,[x8, #0xd8]
7102eabb18  cbz x9,0x7102eabb24
7102eabb1c  mov w10,#0x1
7102eabb20  strb w10,[x9, #0x21]
7102eabb24  ldrb w9,[x8, #0xe0]
7102eabb28  cbz w9,0x7102eabb34
7102eabb2c  ldr x8,[x8, #0xb0]
7102eabb30  strb wzr,[x8, #0x10]
7102eabb34  ldr x8,[x19, #0x108]
7102eabb38  ldr x8,[x8, #0x338]
7102eabb3c  ldr x8,[x8]
7102eabb40  ldr x0,[x8, #0x8]
7102eabb44  cbz x0,0x7102eabc58
7102eabb48  ldr x8,[x0]
7102eabb4c  ldr x8,[x8, #0x58]
7102eabb50  mov w2,#0xffffffff
7102eabb54  orr w1,wzr,#0x6
7102eabb58  blr x8
7102eabb5c  b 0x7102eabc58
7102eabb60  ldr w8,[x19, #0x158]
7102eabb64  cbz w8,0x7102eabe1c
7102eabb68  adrp x9,0x7104465000
7102eabb6c  ldr q6,[x19, #0x30]
7102eabb70  ldr q0,[x9, #0xba0]
7102eabb74  fsub v0.4S,v0.4S,v6.4S
7102eabb78  ldr x8,[x19, #0x110]
7102eabb7c  fmul v1.4S,v0.4S,v0.4S
7102eabb80  ext v2.16B,v1.16B,v1.16B,0x8
7102eabb84  fadd v1.2S,v2.2S,v1.2S
7102eabb88  faddp v1.2S,v1.2S,v1.2S
7102eabb8c  str wzr,[x19, #0x158]
7102eabb90  mov v1.D[0x1],v1.D[0x0]
7102eabb94  str wzr,[x19, #0x20]
7102eabb98  fsqrt v2.4S,v1.4S
7102eabb9c  fcmp s2,#0.0
7102eabba0  ldp s5,s3,[x8, #0x54]
7102eabba4  b.le 0x7102eabe84
7102eabba8  adrp x9,0x71052a8000
7102eabbac  ldr x9,[x9, #0xa88]
7102eabbb0  ldr q1,[x9]
7102eabbb4  dup v4.4S,v2.S[0x0]
7102eabbb8  fdiv v4.4S,v0.4S,v4.4S
7102eabbbc  b 0x7102eabe94
7102eabbc0  mov w8,wzr
7102eabbc4  ldrb w9,[x20, #0x40]
7102eabbc8  tbz w8,#0x0,0x7102eab9d8
7102eabbcc  cbz w9,0x7102eabc18
7102eabbd0  cbz x21,0x7102eabc08
7102eabbd4  ldrb w8,[x21, #0x10]
7102eabbd8  cbz w8,0x7102eabc08
7102eabbdc  ldrb w8,[x21, #0x50]
7102eabbe0  strb wzr,[x21, #0x10]
7102eabbe4  cbz w8,0x7102eabc08
7102eabbe8  ldr x8,[x21]
7102eabbec  ldr w0,[x8, #0x8]
7102eabbf0  bl 0x71003ac560
7102eabbf4  ldr x8,[x0]
7102eabbf8  ldr x8,[x8, #0x48]
7102eabbfc  mov w1,wzr
7102eabc00  blr x8
7102eabc04  strb wzr,[x21, #0x50]
7102eabc08  ldr x8,[x20]
7102eabc0c  ldr x8,[x8, #0x30]
7102eabc10  mov x0,x20
7102eabc14  blr x8
7102eabc18  strb wzr,[x20, #0x40]
7102eabc1c  ldr x20,[x19, #0x98]
7102eabc20  ldr x21,[x20, #0x30]
7102eabc24  cbz x21,0x7102eabe24
7102eabc28  ldrb w8,[x21, #0x10]
7102eabc2c  cmp w8,#0x0
7102eabc30  cset w8,ne
7102eabc34  ldrb w9,[x20, #0x40]
7102eabc38  tbnz w8,#0x0,0x7102eabe30
7102eabc3c  cbz w9,0x7102eac2cc
7102eabc40  b 0x7102eabe30
7102eabc44  add x24,x19,#0x180
7102eabc48  add x20,x19,#0x30
7102eabc4c  add x23,x19,#0x190
7102eabc50  add x22,x19,#0xb0
7102eabc54  add x21,x19,#0x174
7102eabc58  ldr q3,[sp, #0x10]
7102eabc5c  movi v0.2D,#0x0
7102eabc60  ldr q1,[x24]
7102eabc64  mov v0.S[0x0],v3.S[0x0]
7102eabc68  ldr q2,[x20]
7102eabc6c  mov v0.S[0x1],v3.S[0x0]
7102eabc70  mov v0.S[0x2],v3.S[0x0]
7102eabc74  fmul v1.4S,v0.4S,v1.4S
7102eabc78  fadd v1.4S,v2.4S,v1.4S
7102eabc7c  str q1,[x20]
7102eabc80  ldr q1,[x23]
7102eabc84  fmul v0.4S,v0.4S,v1.4S
7102eabc88  ldr q1,[x22]
7102eabc8c  fadd v0.4S,v1.4S,v0.4S
7102eabc90  str q0,[x22]
7102eabc94  ldr s0,[x21]
7102eabc98  fsub s0,s0,s3
7102eabc9c  fcmp s0,#0.0
7102eabca0  str s0,[x21]
7102eabca4  b.hi 0x7102eac2cc
7102eabca8  adrp x8,0x7104466000
7102eabcac  ldr q0,[x8, #0x4f0]
7102eabcb0  adrp x9,0x710446a000
7102eabcb4  str q0,[x19, #0x30]
7102eabcb8  ldr q0,[x9, #0xca0]
7102eabcbc  mov w8,#0x1
7102eabcc0  str w8,[x19, #0x20]
7102eabcc4  str w8,[x19, #0xa0]
7102eabcc8  ldr x8,[x19, #0x118]
7102eabccc  str q0,[x19, #0xb0]
7102eabcd0  ldr x8,[x8, #0x68]
7102eabcd4  ldp x21,x23,[x8, #0x18]
7102eabcd8  cmp x21,x23
7102eabcdc  b.eq 0x7102eabd60
7102eabce0  mov w22,#0x6287
7102eabce4  movk w22,#0x751d, LSL #16
7102eabce8  mov x24,x21
7102eabcec  adrp x20,0x710428f000
7102eabcf0  add x20,x20,#0xbe2
7102eabcf4  ldr x25,[x24]
7102eabcf8  ldr w8,[x25, #0x18]
7102eabcfc  cmp w8,w22
7102eabd00  b.ne 0x7102eabd14
7102eabd04  add x0,x25,#0x20
7102eabd08  mov x1,x20
7102eabd0c  bl 0x71039c0060
7102eabd10  cbz w0,0x7102ead1fc
7102eabd14  add x24,x24,#0x8
7102eabd18  cmp x23,x24
7102eabd1c  b.ne 0x7102eabcf4
7102eabd20  cmp x21,x23
7102eabd24  b.eq 0x7102eabd60
7102eabd28  adrp x20,0x7104306000
7102eabd2c  add x20,x20,#0x9a6
7102eabd30  ldr x24,[x21]
7102eabd34  ldr w8,[x24, #0x18]
7102eabd38  add w9,w22,#0x12
7102eabd3c  cmp w8,w9
7102eabd40  b.ne 0x7102eabd54
7102eabd44  add x0,x24,#0x20
7102eabd48  mov x1,x20
7102eabd4c  bl 0x71039c0060
7102eabd50  cbz w0,0x7102ead244
7102eabd54  add x21,x21,#0x8
7102eabd58  cmp x23,x21
7102eabd5c  b.ne 0x7102eabd30
7102eabd60  ldr x8,[x19, #0x240]
7102eabd64  ldp x0,x1,[x8]
7102eabd68  adrp x2,0x71043bc000
7102eabd6c  add x2,x2,#0xb6c
7102eabd70  bl 0x71025f5420
7102eabd74  ldr x8,[x19, #0x240]
7102eabd78  ldp x0,x1,[x8]
7102eabd7c  adrp x2,0x710436a000
7102eabd80  add x2,x2,#0x9e7
7102eabd84  bl 0x71025f5420
7102eabd88  ldrb w8,[x19, #0x248]
7102eabd8c  cbz w8,0x7102eabdb8
7102eabd90  ldr x8,[x19, #0x240]
7102eabd94  ldp x0,x1,[x8]
7102eabd98  adrp x2,0x71042a1000
7102eabd9c  add x2,x2,#0x676
7102eabda0  bl 0x71025f5420
7102eabda4  ldr x8,[x19, #0x240]
7102eabda8  ldp x0,x1,[x8]
7102eabdac  adrp x2,0x7104441000
7102eabdb0  add x2,x2,#0xec7
7102eabdb4  bl 0x71025f5420
7102eabdb8  adrp x9,0x710532a000
7102eabdbc  ldr x9,[x9, #0x9d8]
7102eabdc0  ldr x9,[x9]
7102eabdc4  ldr x9,[x9, #0x1c0]
7102eabdc8  ldr x8,[x19, #0x108]
7102eabdcc  ldr x8,[x8, #0x308]
7102eabdd0  ldr x8,[x8, #0x8]
7102eabdd4  ldr x9,[x9, #0xb0]
7102eabdd8  ldr x9,[x9]
7102eabddc  ldr x9,[x9, #0x20]
7102eabde0  cmp x9,x8
7102eabde4  b.ne 0x7102eabe14
7102eabde8  adrp x8,0x71052b8000
7102eabdec  ldr x8,[x8, #0xf00]
7102eabdf0  ldr x8,[x8]
7102eabdf4  add x0,x8,#0x2b0
7102eabdf8  adrp x8,0x71052a8000
7102eabdfc  ldr x8,[x8, #0xa88]
7102eabe00  ldr q0,[x8]
7102eabe04  mov w1,#0x5
7102eabe08  add x2,sp,#0x70
7102eabe0c  str q0,[sp, #0x70]
7102eabe10  bl 0x71005162f0
7102eabe14  mov w8,#0x2
7102eabe18  b 0x7102eac2c8
7102eabe1c  add x20,x19,#0x1a0
7102eabe20  b 0x7102eac0c8
7102eabe24  mov w8,wzr
7102eabe28  ldrb w9,[x20, #0x40]
7102eabe2c  tbz w8,#0x0,0x7102eabc3c
7102eabe30  cbz w9,0x7102eabe7c
7102eabe34  cbz x21,0x7102eabe6c
7102eabe38  ldrb w8,[x21, #0x10]
7102eabe3c  cbz w8,0x7102eabe6c
7102eabe40  ldrb w8,[x21, #0x50]
7102eabe44  strb wzr,[x21, #0x10]
7102eabe48  cbz w8,0x7102eabe6c
7102eabe4c  ldr x8,[x21]
7102eabe50  ldr w0,[x8, #0x8]
7102eabe54  bl 0x71003ac560
7102eabe58  ldr x8,[x0]
7102eabe5c  ldr x8,[x8, #0x48]
7102eabe60  mov w1,wzr
7102eabe64  blr x8
7102eabe68  strb wzr,[x21, #0x50]
7102eabe6c  ldr x8,[x20]
7102eabe70  ldr x8,[x8, #0x30]
7102eabe74  mov x0,x20
7102eabe78  blr x8
7102eabe7c  strb wzr,[x20, #0x40]
7102eabe80  b 0x7102eac2cc
7102eabe84  adrp x9,0x71052a8000
7102eabe88  ldr x9,[x9, #0xa88]
7102eabe8c  ldr q1,[x9]
7102eabe90  mov v4.16B,v1.16B
7102eabe94  movi d0,#0x0
7102eabe98  mov v7.16B,v0.16B
7102eabe9c  adrp x9,0x7104467000
7102eabea0  mov v7.S[0x0],v4.S[0x2]
7102eabea4  str s2,[x19, #0x1a0]
7102eabea8  mov v4.D[0x1],v7.D[0x0]
7102eabeac  mov v7.16B,v0.16B
7102eabeb0  mov v7.S[0x0],v6.S[0x2]
7102eabeb4  str wzr,[x19, #0xa0]
7102eabeb8  mov v6.D[0x1],v7.D[0x0]
7102eabebc  mov v7.16B,v0.16B
7102eabec0  mov v7.S[0x0],v1.S[0x2]
7102eabec4  mov v1.D[0x1],v7.D[0x0]
7102eabec8  stp q6,q1,[x19, #0x1b0]
7102eabecc  mov v6.16B,v0.16B
7102eabed0  mov v6.S[0x0],v5.S[0x0]
7102eabed4  dup v5.2S,v5.S[0x0]
7102eabed8  mov v5.D[0x1],v6.D[0x0]
7102eabedc  mov v6.16B,v0.16B
7102eabee0  fmul v5.4S,v5.4S,v4.4S
7102eabee4  mov v6.S[0x0],v5.S[0x2]
7102eabee8  mov v5.D[0x1],v6.D[0x0]
7102eabeec  mov v6.16B,v0.16B
7102eabef0  mov v6.S[0x0],v3.S[0x0]
7102eabef4  dup v3.2S,v3.S[0x0]
7102eabef8  mov v3.D[0x1],v6.D[0x0]
7102eabefc  ldr q6,[x9, #0x10]
7102eabf00  fmul v3.4S,v3.4S,v4.4S
7102eabf04  mov v4.16B,v0.16B
7102eabf08  mov v4.S[0x0],v3.S[0x2]
7102eabf0c  mov v3.D[0x1],v4.D[0x0]
7102eabf10  stp q5,q3,[x19, #0x1d0]
7102eabf14  ldr q5,[x19, #0xb0]
7102eabf18  fsub v7.4S,v6.4S,v5.4S
7102eabf1c  ldp s6,s4,[x8, #0x54]
7102eabf20  fmul v2.4S,v7.4S,v7.4S
7102eabf24  ext v3.16B,v2.16B,v2.16B,0x8
7102eabf28  fadd v2.2S,v3.2S,v2.2S
7102eabf2c  faddp v2.2S,v2.2S,v2.2S
7102eabf30  mov v3.16B,v1.16B
7102eabf34  mov v2.D[0x1],v2.D[0x0]
7102eabf38  fsqrt v2.4S,v2.4S
7102eabf3c  fcmp s2,#0.0
7102eabf40  b.le 0x7102eabf5c
7102eabf44  dup v3.4S,v2.S[0x0]
7102eabf48  fdiv v3.4S,v7.4S,v3.4S
7102eabf4c  fmov s7,wzr
7102eabf50  ext v16.16B,v3.16B,v3.16B,0x8
7102eabf54  mov v16.S[0x1],v7.S[0x0]
7102eabf58  mov v3.D[0x1],v16.D[0x0]
7102eabf5c  mov v7.16B,v0.16B
7102eabf60  mov v7.S[0x0],v5.S[0x2]
7102eabf64  mov v5.D[0x1],v7.D[0x0]
7102eabf68  ldr x8,[x19, #0x118]
7102eabf6c  stp q5,q1,[x19, #0x200]
7102eabf70  mov v1.16B,v0.16B
7102eabf74  mov v1.S[0x0],v6.S[0x0]
7102eabf78  dup v5.2S,v6.S[0x0]
7102eabf7c  mov v5.D[0x1],v1.D[0x0]
7102eabf80  str s2,[x19, #0x1f0]
7102eabf84  fmul v1.4S,v5.4S,v3.4S
7102eabf88  mov v5.16B,v0.16B
7102eabf8c  mov v5.S[0x0],v1.S[0x2]
7102eabf90  mov v1.D[0x1],v5.D[0x0]
7102eabf94  mov v5.16B,v0.16B
7102eabf98  mov v5.S[0x0],v4.S[0x0]
7102eabf9c  dup v4.2S,v4.S[0x0]
7102eabfa0  mov v4.D[0x1],v5.D[0x0]
7102eabfa4  fmul v3.4S,v4.4S,v3.4S
7102eabfa8  mov v0.S[0x0],v3.S[0x2]
7102eabfac  mov v3.D[0x1],v0.D[0x0]
7102eabfb0  stp q1,q3,[x19, #0x220]
7102eabfb4  ldr x8,[x8, #0x68]
7102eabfb8  ldp x21,x23,[x8, #0x18]
7102eabfbc  cmp x21,x23
7102eabfc0  b.eq 0x7102eac044
7102eabfc4  mov w22,#0x6287
7102eabfc8  movk w22,#0x751d, LSL #16
7102eabfcc  mov x24,x21
7102eabfd0  adrp x20,0x710428f000
7102eabfd4  add x20,x20,#0xbe2
7102eabfd8  ldr x25,[x24]
7102eabfdc  ldr w8,[x25, #0x18]
7102eabfe0  cmp w8,w22
7102eabfe4  b.ne 0x7102eabff8
7102eabfe8  add x0,x25,#0x20
7102eabfec  mov x1,x20
7102eabff0  bl 0x71039c0060
7102eabff4  cbz w0,0x7102eacb24
7102eabff8  add x24,x24,#0x8
7102eabffc  cmp x23,x24
7102eac000  b.ne 0x7102eabfd8
7102eac004  cmp x21,x23
7102eac008  b.eq 0x7102eac044
7102eac00c  adrp x20,0x7104306000
7102eac010  add x20,x20,#0x9a6
7102eac014  ldr x24,[x21]
7102eac018  ldr w8,[x24, #0x18]
7102eac01c  add w9,w22,#0x12
7102eac020  cmp w8,w9
7102eac024  b.ne 0x7102eac038
7102eac028  add x0,x24,#0x20
7102eac02c  mov x1,x20
7102eac030  bl 0x71039c0060
7102eac034  cbz w0,0x7102ead228
7102eac038  add x21,x21,#0x8
7102eac03c  cmp x23,x21
7102eac040  b.ne 0x7102eac014
7102eac044  ldr x8,[x19, #0x240]
7102eac048  ldp x0,x1,[x8]
7102eac04c  adrp x2,0x71043bc000
7102eac050  add x2,x2,#0xb6c
7102eac054  add x20,x19,#0x1a0
7102eac058  bl 0x71025f55b0
7102eac05c  ldr x8,[x19, #0x240]
7102eac060  ldp x0,x1,[x8]
7102eac064  adrp x2,0x710436a000
7102eac068  add x2,x2,#0x9e7
7102eac06c  bl 0x71025f55b0
7102eac070  ldrb w8,[x19, #0x248]
7102eac074  cbz w8,0x7102eac0a0
7102eac078  ldr x8,[x19, #0x240]
7102eac07c  ldp x0,x1,[x8]
7102eac080  adrp x2,0x71042a1000
7102eac084  add x2,x2,#0x676
7102eac088  bl 0x71025f55b0
7102eac08c  ldr x8,[x19, #0x240]
7102eac090  ldp x0,x1,[x8]
7102eac094  adrp x2,0x7104441000
7102eac098  add x2,x2,#0xec7
7102eac09c  bl 0x71025f55b0
7102eac0a0  ldr x8,[x19, #0x108]
7102eac0a4  ldr x8,[x8, #0x338]
7102eac0a8  ldr x8,[x8]
7102eac0ac  ldr x0,[x8, #0x8]
7102eac0b0  cbz x0,0x7102eac0c8
7102eac0b4  ldr x8,[x0]
7102eac0b8  ldr x8,[x8, #0x58]
7102eac0bc  mov w2,#0xffffffff
7102eac0c0  orr w1,wzr,#0x7
7102eac0c4  blr x8
7102eac0c8  ldr q0,[sp, #0x10]
7102eac0cc  movi v1.2D,#0x0
7102eac0d0  mov v1.S[0x0],v0.S[0x0]
7102eac0d4  mov v1.S[0x1],v0.S[0x0]
7102eac0d8  mov v1.S[0x2],v0.S[0x0]
7102eac0dc  ldr s0,[x20]
7102eac0e0  fcmp s0,#0.0
7102eac0e4  b.le 0x7102eac184
7102eac0e8  ldp q3,q2,[x19, #0x1c0]
7102eac0ec  fmul v2.4S,v1.4S,v2.4S
7102eac0f0  fadd v2.4S,v3.4S,v2.4S
7102eac0f4  fmul v3.4S,v2.4S,v2.4S
7102eac0f8  ext v4.16B,v3.16B,v3.16B,0x8
7102eac0fc  fadd v3.2S,v4.2S,v3.2S
7102eac100  faddp v4.2S,v3.2S,v3.2S
7102eac104  ldr q3,[x19, #0x1e0]
7102eac108  fmul v5.4S,v3.4S,v3.4S
7102eac10c  ext v6.16B,v5.16B,v5.16B,0x8
7102eac110  fadd v5.2S,v6.2S,v5.2S
7102eac114  faddp v5.2S,v5.2S,v5.2S
7102eac118  fcmp s4,s5
7102eac11c  b.le 0x7102eac134
7102eac120  fmov s2,wzr
7102eac124  ext v4.16B,v3.16B,v3.16B,0x8
7102eac128  mov v4.S[0x1],v2.S[0x0]
7102eac12c  mov v3.D[0x1],v4.D[0x0]
7102eac130  mov v2.16B,v3.16B
7102eac134  movi d3,#0x0
7102eac138  mov v4.16B,v3.16B
7102eac13c  mov v5.16B,v2.16B
7102eac140  mov v4.S[0x0],v2.S[0x2]
7102eac144  fmul v2.4S,v1.4S,v2.4S
7102eac148  mov v3.S[0x0],v2.S[0x2]
7102eac14c  mov v5.D[0x1],v4.D[0x0]
7102eac150  mov v2.D[0x1],v3.D[0x0]
7102eac154  ldr q3,[x19, #0x1b0]
7102eac158  fadd v3.4S,v3.4S,v2.4S
7102eac15c  fmul v2.4S,v2.4S,v2.4S
7102eac160  ext v4.16B,v2.16B,v2.16B,0x8
7102eac164  stp q3,q5,[x19, #0x1b0]
7102eac168  fadd v2.2S,v4.2S,v2.2S
7102eac16c  faddp v2.2S,v2.2S,v2.2S
7102eac170  mov v2.D[0x1],v2.D[0x0]
7102eac174  fsqrt v2.4S,v2.4S
7102eac178  fsub s0,s0,s2
7102eac17c  str s0,[x19, #0x1a0]
7102eac180  b 0x7102eac188
7102eac184  ldr q3,[x19, #0x1b0]
7102eac188  fmov s2,wzr
7102eac18c  ext v4.16B,v3.16B,v3.16B,0x8
7102eac190  mov v4.S[0x1],v2.S[0x0]
7102eac194  mov v3.D[0x1],v4.D[0x0]
7102eac198  str q3,[x19, #0x30]
7102eac19c  ldr s3,[x19, #0x1f0]
7102eac1a0  fcmp s3,#0.0
7102eac1a4  b.le 0x7102eac240
7102eac1a8  ldp q5,q4,[x19, #0x210]
7102eac1ac  fmul v4.4S,v1.4S,v4.4S
7102eac1b0  fadd v4.4S,v5.4S,v4.4S
7102eac1b4  fmul v5.4S,v4.4S,v4.4S
7102eac1b8  ext v6.16B,v5.16B,v5.16B,0x8
7102eac1bc  fadd v5.2S,v6.2S,v5.2S
7102eac1c0  faddp v6.2S,v5.2S,v5.2S
7102eac1c4  ldr q5,[x19, #0x230]
7102eac1c8  fmul v7.4S,v5.4S,v5.4S
7102eac1cc  ext v16.16B,v7.16B,v7.16B,0x8
7102eac1d0  fadd v7.2S,v16.2S,v7.2S
7102eac1d4  faddp v7.2S,v7.2S,v7.2S
7102eac1d8  fcmp s6,s7
7102eac1dc  b.le 0x7102eac1f0
7102eac1e0  ext v4.16B,v5.16B,v5.16B,0x8
7102eac1e4  mov v4.S[0x1],v2.S[0x0]
7102eac1e8  mov v5.D[0x1],v4.D[0x0]
7102eac1ec  mov v4.16B,v5.16B
7102eac1f0  movi d5,#0x0
7102eac1f4  mov v6.16B,v5.16B
7102eac1f8  mov v7.16B,v4.16B
7102eac1fc  mov v6.S[0x0],v4.S[0x2]
7102eac200  fmul v4.4S,v1.4S,v4.4S
7102eac204  ldr q1,[x19, #0x200]
7102eac208  mov v5.S[0x0],v4.S[0x2]
7102eac20c  mov v7.D[0x1],v6.D[0x0]
7102eac210  mov v4.D[0x1],v5.D[0x0]
7102eac214  fadd v1.4S,v1.4S,v4.4S
7102eac218  fmul v4.4S,v4.4S,v4.4S
7102eac21c  ext v5.16B,v4.16B,v4.16B,0x8
7102eac220  stp q1,q7,[x19, #0x200]
7102eac224  fadd v4.2S,v5.2S,v4.2S
7102eac228  faddp v4.2S,v4.2S,v4.2S
7102eac22c  mov v4.D[0x1],v4.D[0x0]
7102eac230  fsqrt v4.4S,v4.4S
7102eac234  fsub s3,s3,s4
7102eac238  str s3,[x19, #0x1f0]
7102eac23c  b 0x7102eac244
7102eac240  ldr q1,[x19, #0x200]
7102eac244  ext v4.16B,v1.16B,v1.16B,0x8
7102eac248  mov v4.S[0x1],v2.S[0x0]
7102eac24c  mov v1.D[0x1],v4.D[0x0]
7102eac250  fcmp s0,#0.0
7102eac254  str q1,[x19, #0xb0]
7102eac258  b.hi 0x7102eac2cc
7102eac25c  fcmp s3,#0.0
7102eac260  b.hi 0x7102eac2cc
7102eac264  ldr x8,[x19]
7102eac268  ldr x8,[x8, #0x68]
7102eac26c  mov w2,#0x1
7102eac270  ldp x0,x1,[x8]
7102eac274  bl 0x71025f4d80
7102eac278  adrp x8,0x7104465000
7102eac27c  ldr q0,[x8, #0xba0]
7102eac280  ldr x0,[x19]
7102eac284  str q0,[x19, #0x30]
7102eac288  ldr x8,[x0]
7102eac28c  ldr x8,[x8, #0x90]
7102eac290  blr x8
7102eac294  ldr x8,[x19, #0x80]
7102eac298  ldr x8,[x8, #0x68]
7102eac29c  mov w2,#0x1
7102eac2a0  ldp x0,x1,[x8]
7102eac2a4  bl 0x71025f4d80
7102eac2a8  adrp x8,0x7104467000
7102eac2ac  ldr q0,[x8, #0x10]
7102eac2b0  ldr x0,[x19, #0x80]
7102eac2b4  str q0,[x19, #0xb0]
7102eac2b8  ldr x8,[x0]
7102eac2bc  ldr x8,[x8, #0x90]
7102eac2c0  blr x8
7102eac2c4  mov w8,#0x4
7102eac2c8  str w8,[x19, #0x150]
7102eac2cc  ldr w8,[x19, #0x154]
7102eac2d0  sub w8,w8,#0x1
7102eac2d4  cmp w8,#0x4
7102eac2d8  b.hi 0x7102ead1b8
7102eac2dc  adrp x9,0x710451f000
7102eac2e0  add x9,x9,#0x644
7102eac2e4  ldrsw x8,[x9, x8, LSL #0x2]
7102eac2e8  add x8,x8,x9
7102eac2ec  br x8
7102eac2f0  ldrb w8,[x19, #0x15c]
7102eac2f4  cbz w8,0x7102eaca48
7102eac2f8  strb wzr,[x19, #0x15c]
7102eac2fc  adrp x9,0x710532a000
7102eac300  ldr x9,[x9, #0x9d8]
7102eac304  ldr x9,[x9]
7102eac308  ldr x9,[x9, #0x1c0]
7102eac30c  ldr x8,[x19, #0x108]
7102eac310  ldr x8,[x8, #0x308]
7102eac314  ldr x8,[x8, #0x8]
7102eac318  ldr x9,[x9, #0xb0]
7102eac31c  ldr x9,[x9]
7102eac320  ldr x9,[x9, #0x20]
7102eac324  cmp x9,x8
7102eac328  b.ne 0x7102eac358
7102eac32c  adrp x8,0x71052b8000
7102eac330  ldr x8,[x8, #0xf00]
7102eac334  ldr x8,[x8]
7102eac338  add x0,x8,#0x2b0
7102eac33c  adrp x8,0x71052a8000
7102eac340  ldr x8,[x8, #0xa88]
7102eac344  ldr q0,[x8]
7102eac348  orr w1,wzr,#0x3
7102eac34c  add x2,sp,#0x70
7102eac350  str q0,[sp, #0x70]
7102eac354  bl 0x71005162f0
7102eac358  ldr x8,[x19, #0x110]
7102eac35c  ldr w9,[x8, #0x298]
7102eac360  add x8,x19,#0x178
7102eac364  fmov s0,w9
7102eac368  str w9,[x19, #0x178]
7102eac36c  b 0x7102eaca50
7102eac370  ldrb w8,[x19, #0x15c]
7102eac374  cbz w8,0x7102eaca78
7102eac378  adrp x8,0x71052a8000
7102eac37c  ldr x8,[x8, #0xa88]
7102eac380  strb wzr,[x19, #0x15c]
7102eac384  ldr q0,[x8]
7102eac388  fmov s2,wzr
7102eac38c  ext v1.16B,v0.16B,v0.16B,0x8
7102eac390  mov v1.S[0x1],v2.S[0x0]
7102eac394  ldr x8,[x19, #0x110]
7102eac398  mov v0.D[0x1],v1.D[0x0]
7102eac39c  ldrsw x9,[x19, #0x100]
7102eac3a0  str q0,[x19, #0x140]
7102eac3a4  ldr x10,[x8, #0x168]
7102eac3a8  add x9,x9,x9, LSL #0x1
7102eac3ac  lsl x9,x9,#0x2
7102eac3b0  ldr s3,[x8, #0x1c8]
7102eac3b4  ldr s0,[x10,x9]
7102eac3b8  fdiv s0,s0,s3
7102eac3bc  ldr q1,[x19, #0x160]
7102eac3c0  mov v1.S[0x0],v0.S[0x0]
7102eac3c4  str q1,[x19, #0x160]
7102eac3c8  ldr x10,[x8, #0x168]
7102eac3cc  add x10,x10,x9
7102eac3d0  ldr s0,[x10, #0x4]
7102eac3d4  fdiv s0,s0,s3
7102eac3d8  mov v1.S[0x1],v0.S[0x0]
7102eac3dc  str q1,[x19, #0x160]
7102eac3e0  ldr x8,[x8, #0x168]
7102eac3e4  add x8,x8,x9
7102eac3e8  adrp x9,0x710532e000
7102eac3ec  ldr s0,[x8, #0x8]
7102eac3f0  str s3,[x19, #0x178]
7102eac3f4  adrp x8,0x710532e000
7102eac3f8  fdiv s0,s0,s3
7102eac3fc  str s0,[x19, #0x170]
7102eac400  ldrb w9,[x9, #0x748]
7102eac404  cmp w9,#0x1
7102eac408  str wzr,[x8, #0x744]
7102eac40c  b.ne 0x7102eacad8
7102eac410  ldr q1,[sp, #0x10]
7102eac414  fsub s0,s3,s1
7102eac418  str s0,[x19, #0x178]
7102eac41c  fmov s0,wzr
7102eac420  fadd s2,s1,s0
7102eac424  str s2,[x8, #0x744]
7102eac428  b 0x7102eacaa4
7102eac42c  ldrb w8,[x19, #0x15c]
7102eac430  cbz w8,0x7102eacab0
7102eac434  ldp x8,x9,[x19, #0x108]
7102eac438  strb wzr,[x19, #0x15c]
7102eac43c  ldr x8,[x8, #0x340]
7102eac440  ldr s0,[x9, #0x1cc]
7102eac444  ldr s1,[x9, #0x1d0]
7102eac448  ldp w9,w10,[x8]
7102eac44c  fsub s1,s1,s0
7102eac450  str w10,[x8]
7102eac454  ldp w10,w11,[x8, #0x8]
7102eac458  eor w9,w9,w9, LSL #0xb
7102eac45c  eor w9,w9,w9, LSR #0x8
7102eac460  eor w9,w9,w11
7102eac464  eor w9,w9,w11, LSR #0x13
7102eac468  ucvtf s2,w9
7102eac46c  stp w10,w11,[x8, #0x4]
7102eac470  str w9,[x8, #0xc]
7102eac474  adrp x8,0x7104473000
7102eac478  fmul s1,s1,s2
7102eac47c  ldr s2,[x8, #0x710]
7102eac480  add x8,x19,#0x178
7102eac484  fmul s4,s1,s2
7102eac488  fadd s0,s0,s4
7102eac48c  str s0,[x19, #0x178]
7102eac490  b 0x7102eacab8
7102eac494  ldr x9,[x19, #0x110]
7102eac498  ldr s0,[x9, #0x1d8]
7102eac49c  ldrsw x8,[x19, #0x100]
7102eac4a0  add x8,x8,x8, LSL #0x1
7102eac4a4  lsl x11,x8,#0x2
7102eac4a8  str s0,[x19, #0x178]
7102eac4ac  ldr x10,[x9, #0x168]
7102eac4b0  ldr s1,[x10,x11]
7102eac4b4  fdiv s1,s1,s0
7102eac4b8  ldr q2,[x19, #0x160]
7102eac4bc  mov v2.S[0x0],v1.S[0x0]
7102eac4c0  str q2,[x19, #0x160]
7102eac4c4  ldr x8,[x9, #0x168]
7102eac4c8  add x8,x8,x11
7102eac4cc  ldr s1,[x8, #0x4]
7102eac4d0  ldr x8,[x19, #0x108]
7102eac4d4  fdiv s1,s1,s0
7102eac4d8  mov v2.S[0x1],v1.S[0x0]
7102eac4dc  str q2,[x19, #0x160]
7102eac4e0  ldr x9,[x9, #0x168]
7102eac4e4  add x9,x9,x11
7102eac4e8  ldr s1,[x9, #0x8]
7102eac4ec  fdiv s0,s1,s0
7102eac4f0  str s0,[x19, #0x170]
7102eac4f4  ldr x9,[x8, #0x338]
7102eac4f8  ldr x9,[x9]
7102eac4fc  ldr x0,[x9, #0x8]
7102eac500  cbz x0,0x7102eac51c
7102eac504  ldr x8,[x0]
7102eac508  ldr x8,[x8, #0x58]
7102eac50c  mov w1,#0x19
7102eac510  mov w2,#0xffffffff
7102eac514  blr x8
7102eac518  ldr x8,[x19, #0x108]
7102eac51c  adrp x9,0x710532a000
7102eac520  ldr x9,[x9, #0x9d8]
7102eac524  ldr x9,[x9]
7102eac528  ldr x9,[x9, #0x1c0]
7102eac52c  ldr x9,[x9, #0xb0]
7102eac530  ldr x8,[x8, #0x308]
7102eac534  ldr x8,[x8, #0x8]
7102eac538  ldr x9,[x9]
7102eac53c  ldr x9,[x9, #0x20]
7102eac540  cmp x9,x8
7102eac544  b.ne 0x7102eac574
7102eac548  adrp x8,0x71052b8000
7102eac54c  ldr x8,[x8, #0xf00]
7102eac550  ldr x8,[x8]
7102eac554  add x0,x8,#0x2b0
7102eac558  adrp x8,0x71052a8000
7102eac55c  ldr x8,[x8, #0xa88]
7102eac560  ldr q0,[x8]
7102eac564  orr w1,wzr,#0x3
7102eac568  add x2,sp,#0x70
7102eac56c  str q0,[sp, #0x70]
7102eac570  bl 0x71005162f0
7102eac574  mov w8,#0x5
7102eac578  str w8,[x19, #0x154]
7102eac57c  ldr q0,[x19, #0x160]
7102eac580  ldr q5,[sp, #0x10]
7102eac584  fmul s3,s5,v0.S[0x1]
7102eac588  ldr q2,[x19, #0x120]
7102eac58c  fmul s0,s5,v0.S[0x0]
7102eac590  ldr x8,[x19, #0x108]
7102eac594  dup s4,v2.S[0x1]
7102eac598  fsub s3,s4,s3
7102eac59c  fsub s0,s2,s0
7102eac5a0  mov v2.S[0x0],v0.S[0x0]
7102eac5a4  ldr s1,[x19, #0x178]
7102eac5a8  fsub s1,s1,s5
7102eac5ac  str s1,[x19, #0x178]
7102eac5b0  mov v2.S[0x1],v3.S[0x0]
7102eac5b4  adrp x9,0x7104472000
7102eac5b8  str q2,[x19, #0x120]
7102eac5bc  ldr x8,[x8, #0x340]
7102eac5c0  adrp x10,0x7104473000
7102eac5c4  ldr s4,[x9, #0x398]
7102eac5c8  ldr s0,[x10, #0x710]
7102eac5cc  ldp w9,w10,[x8]
7102eac5d0  str w10,[x8]
7102eac5d4  ldp w10,w11,[x8, #0x8]
7102eac5d8  eor w9,w9,w9, LSL #0xb
7102eac5dc  eor w9,w9,w9, LSR #0x8
7102eac5e0  eor w9,w9,w11
7102eac5e4  eor w9,w9,w11, LSR #0x13
7102eac5e8  ucvtf s2,w9
7102eac5ec  stp w10,w11,[x8, #0x4]
7102eac5f0  str w9,[x8, #0xc]
7102eac5f4  ldr q1,[x19, #0x140]
7102eac5f8  dup s3,v1.S[0x2]
7102eac5fc  adrp x8,0x7104472000
7102eac600  fmul s2,s2,s4
7102eac604  ldr s4,[x19, #0x170]
7102eac608  fmul s7,s4,s5
7102eac60c  ldr s4,[x8, #0xb44]
7102eac610  fmul s0,s2,s0
7102eac614  ldr q2,[x19, #0x120]
7102eac618  fsub s3,s3,s7
7102eac61c  fadd s0,s0,s4
7102eac620  mov v1.S[0x2],v3.S[0x0]
7102eac624  fmov s3,wzr
7102eac628  mov v2.S[0x2],v0.S[0x0]
7102eac62c  ldr s0,[x19, #0x178]
7102eac630  fcmp s0,#0.0
7102eac634  mov v1.S[0x3],v3.S[0x0]
7102eac638  mov v2.S[0x3],v3.S[0x0]
7102eac63c  str q1,[x19, #0x140]
7102eac640  str q2,[x19, #0x120]
7102eac644  b.ls 0x7102eac650
7102eac648  str q2,[sp]
7102eac64c  b 0x7102eac70c
7102eac650  adrp x8,0x71052a8000
7102eac654  ldr x8,[x8, #0xa88]
7102eac658  ldr q0,[x8]
7102eac65c  orr w8,wzr,#0x6
7102eac660  str w8,[x19, #0x154]
7102eac664  ldr x8,[x19, #0x108]
7102eac668  ext v2.16B,v0.16B,v0.16B,0x8
7102eac66c  mov v2.S[0x1],v3.S[0x0]
7102eac670  mov v3.16B,v0.16B
7102eac674  mov v3.D[0x1],v2.D[0x0]
7102eac678  movi v2.2D,#0x0
7102eac67c  ext v1.16B,v2.16B,v1.16B,0x8
7102eac680  ext v1.16B,v1.16B,v1.16B,0x8
7102eac684  str q3,[x19, #0x120]
7102eac688  str q1,[x19, #0x140]
7102eac68c  adrp x9,0x710532a000
7102eac690  ldr x9,[x9, #0x9d8]
7102eac694  ldr x9,[x9]
7102eac698  ldr x9,[x9, #0x1c0]
7102eac69c  ldr x9,[x9, #0xb0]
7102eac6a0  ldr x8,[x8, #0x308]
7102eac6a4  ldr x8,[x8, #0x8]
7102eac6a8  ldr x9,[x9]
7102eac6ac  ldr x9,[x9, #0x20]
7102eac6b0  cmp x9,x8
7102eac6b4  b.ne 0x7102eac6d8
7102eac6b8  adrp x8,0x71052b8000
7102eac6bc  ldr x8,[x8, #0xf00]
7102eac6c0  ldr x8,[x8]
7102eac6c4  str q0,[sp, #0x70]
7102eac6c8  add x0,x8,#0x2b0
7102eac6cc  orr w1,wzr,#0x3
7102eac6d0  add x2,sp,#0x70
7102eac6d4  bl 0x71005162f0
7102eac6d8  adrp x8,0x71052b9000
7102eac6dc  ldr x8,[x8, #0x4f8]
7102eac6e0  ldr x0,[x8]
7102eac6e4  mov x1,#0x509b
7102eac6e8  movk x1,#0x7fff, LSL #16
7102eac6ec  movk x1,#0x13, LSL #32
7102eac6f0  mov w4,#0x50000000
7102eac6f4  mov w2,wzr
7102eac6f8  mov w3,wzr
7102eac6fc  bl 0x710067de90
7102eac700  ldr q1,[x19, #0x140]
7102eac704  ldr q0,[x19, #0x120]
7102eac708  str q0,[sp]
7102eac70c  adrp x8,0x7104472000
7102eac710  ldr s8,[x8, #0x6e0]
7102eac714  adrp x8,0x71052a8000
7102eac718  ldr x8,[x8, #0xaf8]
7102eac71c  fmul s2,s8,v1.S[0x0]
7102eac720  movi v0.2D,#0x0
7102eac724  mov v0.S[0x0],v2.S[0x0]
7102eac728  fmul s2,s8,v1.S[0x1]
7102eac72c  fmul s1,s8,v1.S[0x2]
7102eac730  mov v0.S[0x1],v2.S[0x0]
7102eac734  mov v0.S[0x2],v1.S[0x0]
7102eac738  ldr q1,[x8]
7102eac73c  mov w0,wzr
7102eac740  str q1,[sp, #0x20]
7102eac744  bl 0x71003d7950
7102eac748  adrp x8,0x7104468000
7102eac74c  ldr q1,[x8, #0x1b0]
7102eac750  adrp x8,0x7104465000
7102eac754  ldr d2,[x8, #0x310]
7102eac758  adrp x8,0x7104465000
7102eac75c  and v3.16B,v0.16B,v1.16B
7102eac760  tbl v4.8B,{v3.16B},v2.8B
7102eac764  ldr d2,[x8, #0x1e8]
7102eac768  adrp x8,0x7104465000
7102eac76c  ldr d5,[x8, #0x2f8]
7102eac770  ext v1.8B,v3.8B,v3.8B,0x4
7102eac774  tbl v2.8B,{v3.16B},v2.8B
7102eac778  mov v1.D[0x1],v4.D[0x0]
7102eac77c  tbl v5.8B,{v3.16B},v5.8B
7102eac780  mov v2.D[0x1],v5.D[0x0]
7102eac784  adrp x8,0x7104466000
7102eac788  fmul v1.4S,v1.4S,v1.4S
7102eac78c  fadd v1.4S,v1.4S,v1.4S
7102eac790  fmul v2.4S,v2.4S,v2.4S
7102eac794  fadd v2.4S,v2.4S,v2.4S
7102eac798  fadd v1.4S,v2.4S,v1.4S
7102eac79c  ldr q2,[x8, #0x2b0]
7102eac7a0  adrp x8,0x7104465000
7102eac7a4  ldr d6,[x8, #0x5f8]
7102eac7a8  tbl v6.8B,{v3.16B},v6.8B
7102eac7ac  fsub v1.4S,v2.4S,v1.4S
7102eac7b0  adrp x8,0x7104465000
7102eac7b4  mov v6.D[0x1],v4.D[0x0]
7102eac7b8  fmul v4.4S,v6.4S,v3.4S
7102eac7bc  ldr d6,[x8, #0x2a0]
7102eac7c0  fadd v4.4S,v4.4S,v4.4S
7102eac7c4  tbl v3.8B,{v3.16B},v6.8B
7102eac7c8  mov v3.D[0x1],v5.D[0x0]
7102eac7cc  adrp x8,0x7104465000
7102eac7d0  fmul v0.4S,v3.4S,v0.S[0x3]
7102eac7d4  fadd v0.4S,v0.4S,v0.4S
7102eac7d8  fadd v5.4S,v4.4S,v0.4S
7102eac7dc  fsub v6.4S,v4.4S,v0.4S
7102eac7e0  ldr d0,[x8, #0x3e8]
7102eac7e4  adrp x8,0x7104465000
7102eac7e8  tbl v2.8B,{v5.16B,v6.16B},v0.8B
7102eac7ec  ldr d0,[x8, #0x378]
7102eac7f0  adrp x8,0x7104465000
7102eac7f4  tbl v0.8B,{v5.16B,v6.16B},v0.8B
7102eac7f8  mov v2.D[0x1],v0.D[0x0]
7102eac7fc  ldr d0,[x8, #0x628]
7102eac800  adrp x8,0x7104465000
7102eac804  tbl v4.8B,{v5.16B,v6.16B},v0.8B
7102eac808  ldr d0,[x8, #0x1f0]
7102eac80c  adrp x8,0x7104465000
7102eac810  tbl v0.8B,{v5.16B,v6.16B},v0.8B
7102eac814  mov v4.D[0x1],v0.D[0x0]
7102eac818  ldr d0,[x8, #0x250]
7102eac81c  adrp x8,0x7104465000
7102eac820  ldr d5,[x8, #0x498]
7102eac824  adrp x8,0x7104465000
7102eac828  mov v3.16B,v1.16B
7102eac82c  tbl v0.8B,{v3.16B,v4.16B},v0.8B
7102eac830  tbl v5.8B,{v3.16B,v4.16B},v5.8B
7102eac834  mov v0.D[0x1],v5.D[0x0]
7102eac838  ldr d5,[x8, #0x1c0]
7102eac83c  adrp x8,0x7104465000
7102eac840  ldr d6,[x8, #0x180]
7102eac844  adrp x8,0x7104465000
7102eac848  tbl v5.8B,{v3.16B,v4.16B},v5.8B
7102eac84c  tbl v3.8B,{v3.16B,v4.16B},v6.8B
7102eac850  mov v5.D[0x1],v3.D[0x0]
7102eac854  ldr d3,[x8, #0x298]
7102eac858  adrp x8,0x7104465000
7102eac85c  ldr d4,[x8, #0x188]
7102eac860  tbl v3.8B,{v1.16B,v2.16B},v3.8B
7102eac864  tbl v1.8B,{v1.16B,v2.16B},v4.8B
7102eac868  ldr q2,[sp, #0x20]
7102eac86c  mov v3.D[0x1],v1.D[0x0]
7102eac870  ldr q4,[sp]
7102eac874  fmul v0.4S,v0.4S,v2.S[0x0]
7102eac878  fmul v1.4S,v5.4S,v2.S[0x1]
7102eac87c  stp q0,q1,[sp, #0x30]
7102eac880  fmul v2.4S,v3.4S,v2.S[0x2]
7102eac884  fmov s3,0x3f800000
7102eac888  mov v4.S[0x3],v3.S[0x0]
7102eac88c  stp q2,q4,[sp, #0x50]
7102eac890  ldr x8,[x19, #0x118]
7102eac894  ldr x20,[x8, #0x70]
7102eac898  cbz x20,0x7102eac920
7102eac89c  ldr x0,[x20, #0x90]
7102eac8a0  ldr x8,[x0]
7102eac8a4  ldr x8,[x8, #0x148]
7102eac8a8  add x1,sp,#0x30
7102eac8ac  blr x8
7102eac8b0  ldr x20,[x20, #0xd8]
7102eac8b4  cbz x20,0x7102eac920
7102eac8b8  ldr x8,[sp, #0x48]
7102eac8bc  str x8,[sp, #0x88]
7102eac8c0  ldr x8,[sp, #0x40]
7102eac8c4  str x8,[sp, #0x80]
7102eac8c8  ldr x8,[sp, #0x38]
7102eac8cc  str x8,[sp, #0x78]
7102eac8d0  ldr x8,[sp, #0x30]
7102eac8d4  str x8,[sp, #0x70]
7102eac8d8  ldr x8,[sp, #0x68]
7102eac8dc  str x8,[sp, #0xa8]
7102eac8e0  ldr x8,[sp, #0x60]
7102eac8e4  str x8,[sp, #0xa0]
7102eac8e8  ldr x8,[sp, #0x58]
7102eac8ec  str x8,[sp, #0x98]
7102eac8f0  ldr x8,[sp, #0x50]
7102eac8f4  str x8,[sp, #0x90]
7102eac8f8  ldr x8,[x20, #0x8]
7102eac8fc  ldrb w9,[x8, #0xa8]
7102eac900  cbz w9,0x7102eac918
7102eac904  ldr x0,[x8, #0x48]
7102eac908  ldr x8,[x0]
7102eac90c  ldr x8,[x8, #0x20]
7102eac910  add x1,sp,#0x70
7102eac914  blr x8
7102eac918  mov w8,#0x1
7102eac91c  strb w8,[x20, #0x20]
7102eac920  ldr x8,[x19, #0x240]
7102eac924  ldp x20,x21,[x8]
7102eac928  cmp x20,x21
7102eac92c  b.eq 0x7102ead1b8
7102eac930  ldr q1,[x19, #0x120]
7102eac934  ldr s0,[x19, #0x148]
7102eac938  fmul s8,s0,s8
7102eac93c  dup s10,v1.S[0x1]
7102eac940  adrp x8,0x7104742000
7102eac944  add x8,x8,#0xd24
7102eac948  ldr w22,[x8, #0x10]
7102eac94c  ldp x23,x24,[x8]
7102eac950  str q1,[sp, #0x20]
7102eac954  ldr x25,[x20], #0x8
7102eac958  ldr q0,[x25, #0x30]
7102eac95c  stp x23,x24,[x25, #0x40]
7102eac960  fneg s1,s0
7102eac964  dup s0,v0.S[0x1]
7102eac968  fneg s0,s0
7102eac96c  str s0,[x25, #0x54]
7102eac970  mov v0.16B,v8.16B
7102eac974  str w22,[x25, #0x50]
7102eac978  str s1,[x25, #0x48]
7102eac97c  bl 0x71039c07d0
7102eac980  mov v9.16B,v0.16B
7102eac984  mov v0.16B,v8.16B
7102eac988  bl 0x71039c07e0
7102eac98c  ldp s5,s6,[x25, #0x48]
7102eac990  fmov s1,wzr
7102eac994  ldp s3,s4,[x25, #0x50]
7102eac998  mov v19.16B,v1.16B
7102eac99c  ldp s1,s2,[x25, #0x40]
7102eac9a0  fmul s16,s4,s0
7102eac9a4  fmul s4,s9,s4
7102eac9a8  fmul s7,s9,s5
7102eac9ac  fmul s5,s0,s5
7102eac9b0  fsub s7,s7,s16
7102eac9b4  fadd s4,s5,s4
7102eac9b8  fmul s5,s9,s1
7102eac9bc  fmul s16,s6,s0
7102eac9c0  fmul s17,s9,s2
7102eac9c4  fmul s18,s3,s0
7102eac9c8  fmul s1,s0,s1
7102eac9cc  fmul s6,s9,s6
7102eac9d0  fmul s0,s0,s2
7102eac9d4  fmul s21,s9,s3
7102eac9d8  fadd s0,s0,s21
7102eac9dc  fadd s3,s4,s19
7102eac9e0  fsub s4,s5,s16
7102eac9e4  fsub s5,s17,s18
7102eac9e8  fadd s1,s1,s6
7102eac9ec  fadd s2,s7,s19
7102eac9f0  fmul s6,s1,s19
7102eac9f4  fmul s7,s0,s19
7102eac9f8  fmul s16,s4,s19
7102eac9fc  fmul s17,s5,s19
7102eaca00  fadd s5,s5,s7
7102eaca04  fadd s4,s4,s6
7102eaca08  fadd s1,s16,s1
7102eaca0c  fadd s0,s17,s0
7102eaca10  fmul s7,s2,s19
7102eaca14  fmul s18,s3,s19
7102eaca18  fadd s2,s2,s18
7102eaca1c  stp s4,s5,[x25, #0x40]
7102eaca20  stp s1,s0,[x25, #0x4c]
7102eaca24  fadd s3,s7,s3
7102eaca28  ldr q1,[sp, #0x20]
7102eaca2c  fadd s1,s1,s2
7102eaca30  fadd s2,s10,s3
7102eaca34  cmp x21,x20
7102eaca38  str s1,[x25, #0x48]
7102eaca3c  str s2,[x25, #0x54]
7102eaca40  b.ne 0x7102eac954
7102eaca44  b 0x7102ead1b8
7102eaca48  ldr s0,[x19, #0x178]
7102eaca4c  add x8,x19,#0x178
7102eaca50  ldr q1,[sp, #0x10]
7102eaca54  fsub s0,s0,s1
7102eaca58  fcmp s0,#0.0
7102eaca5c  str s0,[x8]
7102eaca60  b.hi 0x7102ead1b8
7102eaca64  mov w8,#0x1
7102eaca68  strb w8,[x19, #0x15c]
7102eaca6c  mov w8,#0x2
7102eaca70  str w8,[x19, #0x154]
7102eaca74  b 0x7102ead1b8
7102eaca78  adrp x9,0x710532e000
7102eaca7c  ldr s0,[x19, #0x178]
7102eaca80  ldr q2,[sp, #0x10]
7102eaca84  ldr s1,[x9, #0x744]
7102eaca88  adrp x8,0x710532e000
7102eaca8c  fsub s0,s0,s2
7102eaca90  fadd s2,s1,s2
7102eaca94  ldrb w8,[x8, #0x748]
7102eaca98  str s0,[x19, #0x178]
7102eaca9c  str s2,[x9, #0x744]
7102eacaa0  tbz w8,#0x0,0x7102eacb54
7102eacaa4  adrp x8,0x7105146000
7102eacaa8  ldr s1,[x8, #0x8f0]
7102eacaac  b 0x7102eacb70
7102eacab0  ldr s0,[x19, #0x178]
7102eacab4  add x8,x19,#0x178
7102eacab8  ldr q1,[sp, #0x10]
7102eacabc  fsub s0,s0,s1
7102eacac0  fcmp s0,#0.0
7102eacac4  str s0,[x8]
7102eacac8  b.hi 0x7102ead1b8
7102eacacc  mov w8,#0x4
7102eacad0  str w8,[x19, #0x154]
7102eacad4  b 0x7102ead1b8
7102eacad8  eor w9,w9,#0x1
7102eacadc  ucvtf s0,w9
7102eacae0  adrp x9,0x7105146000
7102eacae4  ldr s1,[x9, #0x8f0]
7102eacae8  fmul s0,s1,s0
7102eacaec  fcmp s0,#0.0
7102eacaf0  b.pl 0x7102eacafc
7102eacaf4  mov v2.16B,v0.16B
7102eacaf8  str s0,[x8, #0x744]
7102eacafc  ldr q4,[sp, #0x10]
7102eacb00  fsub s3,s3,s4
7102eacb04  fadd s2,s2,s4
7102eacb08  str s3,[x19, #0x178]
7102eacb0c  str s2,[x8, #0x744]
7102eacb10  fcmp s0,s2
7102eacb14  b.pl 0x7102eacb70
7102eacb18  adrp x8,0x710532e000
7102eacb1c  str s0,[x8, #0x744]
7102eacb20  b 0x7102eacb74
7102eacb24  cbz x25,0x7102eac004
7102eacb28  ldr x8,[x25, #0x8]
7102eacb2c  ldr x8,[x8, #0x108]
7102eacb30  cbz x8,0x7102eac004
7102eacb34  mov w9,#0x1
7102eacb38  strb w9,[x8, #0x44]
7102eacb3c  ldr x8,[x19, #0x118]
7102eacb40  ldr x8,[x8, #0x68]
7102eacb44  ldp x21,x23,[x8, #0x18]
7102eacb48  cmp x21,x23
7102eacb4c  b.ne 0x7102eac00c
7102eacb50  b 0x7102eac044
7102eacb54  eor w8,w8,#0x1
7102eacb58  ucvtf s0,w8
7102eacb5c  adrp x9,0x7105146000
7102eacb60  ldr s1,[x9, #0x8f0]
7102eacb64  fmul s0,s1,s0
7102eacb68  fcmp s0,s2
7102eacb6c  b.mi 0x7102eacb18
7102eacb70  mov v0.16B,v2.16B
7102eacb74  ldrsw x9,[x19, #0x100]
7102eacb78  ldr x8,[x19, #0x110]
7102eacb7c  orr w10,wzr,#0xc
7102eacb80  mul x9,x9,x10
7102eacb84  ldr x8,[x8, #0x168]
7102eacb88  ldr s9,[x8,x9]
7102eacb8c  bl 0x71039c0810
7102eacb90  adrp x20,0x7105146000
7102eacb94  ldr s1,[x20, #0x8f0]
7102eacb98  fdiv s0,s0,s1
7102eacb9c  fmov s8,0x3f000000
7102eacba0  fcmp s0,s8
7102eacba4  b.pl 0x7102eacbe8
7102eacba8  fadd s0,s0,s0
7102eacbac  fmov s1,0xbf000000
7102eacbb0  fadd s1,s0,s1
7102eacbb4  fadd s1,s1,s1
7102eacbb8  fmov s2,0x3f800000
7102eacbbc  fcmp s0,s8
7102eacbc0  fadd s0,s0,s0
7102eacbc4  fsub s1,s2,s1
7102eacbc8  adrp x8,0x7104472000
7102eacbcc  fcsel s0,s1,s0,pl
7102eacbd0  ldr s1,[x8, #0x98c]
7102eacbd4  fmul s0,s0,s1
7102eacbd8  bl 0x71039c07e0
7102eacbdc  fmul s1,s0,s8
7102eacbe0  fadd s0,s1,s8
7102eacbe4  b 0x7102eacc28
7102eacbe8  fmov s1,0xbf000000
7102eacbec  fadd s0,s0,s1
7102eacbf0  fadd s0,s0,s0
7102eacbf4  fadd s1,s0,s1
7102eacbf8  fadd s1,s1,s1
7102eacbfc  fmov s10,0x3f800000
7102eacc00  fcmp s0,s8
7102eacc04  fadd s0,s0,s0
7102eacc08  fsub s1,s10,s1
7102eacc0c  adrp x8,0x7104472000
7102eacc10  fcsel s0,s1,s0,pl
7102eacc14  ldr s1,[x8, #0x98c]
7102eacc18  fmul s0,s0,s1
7102eacc1c  bl 0x71039c07e0
7102eacc20  fsub s0,s10,s0
7102eacc24  fmul s0,s0,s8
7102eacc28  adrp x21,0x710532e000
7102eacc2c  ldr s1,[x21, #0x740]
7102eacc30  fmov s2,0x3f800000
7102eacc34  fsub s2,s2,s1
7102eacc38  fmul s0,s0,s2
7102eacc3c  fadd s0,s1,s0
7102eacc40  fmul s0,s9,s0
7102eacc44  ldr q1,[x19, #0x120]
7102eacc48  ldr x8,[x19, #0x110]
7102eacc4c  mov v1.S[0x0],v0.S[0x0]
7102eacc50  ldrsw x9,[x19, #0x100]
7102eacc54  str q1,[x19, #0x120]
7102eacc58  ldr x8,[x8, #0x168]
7102eacc5c  orr w10,wzr,#0xc
7102eacc60  madd x8,x9,x10,x8
7102eacc64  adrp x22,0x710532e000
7102eacc68  ldr s0,[x22, #0x744]
7102eacc6c  ldr s1,[x20, #0x8f0]
7102eacc70  ldr s9,[x8, #0x4]
7102eacc74  bl 0x71039c0810
7102eacc78  ldr s1,[x20, #0x8f0]
7102eacc7c  fdiv s0,s0,s1
7102eacc80  fcmp s0,s8
7102eacc84  b.pl 0x7102eacccc
7102eacc88  fadd s0,s0,s0
7102eacc8c  fmov s1,0xbf000000
7102eacc90  fadd s1,s0,s1
7102eacc94  fadd s1,s1,s1
7102eacc98  fmov s2,0x3f800000
7102eacc9c  fcmp s0,s8
7102eacca0  fadd s0,s0,s0
7102eacca4  fsub s1,s2,s1
7102eacca8  adrp x8,0x7104472000
7102eaccac  fcsel s0,s1,s0,pl
7102eaccb0  ldr s1,[x8, #0x98c]
7102eaccb4  fmul s0,s0,s1
7102eaccb8  bl 0x71039c07e0
7102eaccbc  fmul s1,s0,s8
7102eaccc0  fadd s0,s1,s8
7102eaccc4  fmov s2,0x3f800000
7102eaccc8  b 0x7102eacd10
7102eacccc  fmov s1,0xbf000000
7102eaccd0  fadd s0,s0,s1
7102eaccd4  fadd s0,s0,s0
7102eaccd8  fadd s1,s0,s1
7102eaccdc  fadd s1,s1,s1
7102eacce0  fmov s2,0x3f800000
7102eacce4  fcmp s0,s8
7102eacce8  fadd s0,s0,s0
7102eaccec  fsub s1,s2,s1
7102eaccf0  adrp x8,0x7104472000
7102eaccf4  fcsel s0,s1,s0,pl
7102eaccf8  ldr s1,[x8, #0x98c]
7102eaccfc  fmul s0,s0,s1
7102eacd00  bl 0x71039c07e0
7102eacd04  fmov s2,0x3f800000
7102eacd08  fsub s0,s2,s0
7102eacd0c  fmul s0,s0,s8
7102eacd10  ldr s1,[x21, #0x740]
7102eacd14  fsub s2,s2,s1
7102eacd18  fmul s0,s0,s2
7102eacd1c  fadd s0,s1,s0
7102eacd20  fmul s0,s9,s0
7102eacd24  ldr q1,[x19, #0x120]
7102eacd28  mov v1.S[0x1],v0.S[0x0]
7102eacd2c  ldr x8,[x19, #0x110]
7102eacd30  str q1,[x19, #0x120]
7102eacd34  ldrsw x9,[x19, #0x100]
7102eacd38  ldr x8,[x8, #0x168]
7102eacd3c  orr w10,wzr,#0xc
7102eacd40  madd x8,x9,x10,x8
7102eacd44  ldr s0,[x22, #0x744]
7102eacd48  ldr s1,[x20, #0x8f0]
7102eacd4c  ldr s9,[x8, #0x8]
7102eacd50  bl 0x71039c0810
7102eacd54  ldr s1,[x20, #0x8f0]
7102eacd58  fdiv s0,s0,s1
7102eacd5c  fcmp s0,s8
7102eacd60  b.pl 0x7102eacda8
7102eacd64  fadd s0,s0,s0
7102eacd68  fmov s1,0xbf000000
7102eacd6c  fadd s1,s0,s1
7102eacd70  fadd s1,s1,s1
7102eacd74  fmov s2,0x3f800000
7102eacd78  fcmp s0,s8
7102eacd7c  fadd s0,s0,s0
7102eacd80  fsub s1,s2,s1
7102eacd84  adrp x8,0x7104472000
7102eacd88  fcsel s0,s1,s0,pl
7102eacd8c  ldr s1,[x8, #0x98c]
7102eacd90  fmul s0,s0,s1
7102eacd94  bl 0x71039c07e0
7102eacd98  fmul s1,s0,s8
7102eacd9c  fadd s0,s1,s8
7102eacda0  fmov s3,0x3f800000
7102eacda4  b 0x7102eacdec
7102eacda8  fmov s1,0xbf000000
7102eacdac  fadd s0,s0,s1
7102eacdb0  fadd s0,s0,s0
7102eacdb4  fadd s1,s0,s1
7102eacdb8  fadd s1,s1,s1
7102eacdbc  fmov s2,0x3f800000
7102eacdc0  fcmp s0,s8
7102eacdc4  fadd s0,s0,s0
7102eacdc8  fsub s1,s2,s1
7102eacdcc  adrp x8,0x7104472000
7102eacdd0  fcsel s0,s1,s0,pl
7102eacdd4  ldr s1,[x8, #0x98c]
7102eacdd8  fmul s0,s0,s1
7102eacddc  bl 0x71039c07e0
7102eacde0  fmov s3,0x3f800000
7102eacde4  fsub s0,s3,s0
7102eacde8  fmul s0,s0,s8
7102eacdec  ldr s2,[x21, #0x740]
7102eacdf0  fsub s3,s3,s2
7102eacdf4  fmul s0,s0,s3
7102eacdf8  fadd s0,s2,s0
7102eacdfc  ldr q1,[x19, #0x140]
7102eace00  fmov s2,wzr
7102eace04  fmul s0,s9,s0
7102eace08  mov v1.S[0x2],v0.S[0x0]
7102eace0c  ldr s0,[x19, #0x178]
7102eace10  fcmp s0,#0.0
7102eace14  mov v1.S[0x3],v2.S[0x0]
7102eace18  str q1,[x19, #0x140]
7102eace1c  b.ls 0x7102eace2c
7102eace20  ldr q0,[x19, #0x120]
7102eace24  str q0,[sp]
7102eace28  b 0x7102eace80
7102eace2c  ldr x8,[x19, #0x110]
7102eace30  ldrsw x9,[x19, #0x100]
7102eace34  add x9,x9,x9, LSL #0x1
7102eace38  ldr x10,[x8, #0x168]
7102eace3c  movi v0.2D,#0x0
7102eace40  lsl x9,x9,#0x2
7102eace44  add x10,x10,x9
7102eace48  ld1 {v0.S}[0],[x10], #0x4
7102eace4c  ld1 {v0.S}[1],[x10]
7102eace50  str q0,[x19, #0x120]
7102eace54  ldr x8,[x8, #0x168]
7102eace58  add x8,x8,x9
7102eace5c  add x8,x8,#0x8
7102eace60  str q0,[sp]
7102eace64  ld1 {v1.S}[2],[x8]
7102eace68  mov w8,#0x1
7102eace6c  strb w8,[x19, #0x15c]
7102eace70  orr w8,wzr,#0x3
7102eace74  str w8,[x19, #0x154]
7102eace78  mov v1.S[0x3],v2.S[0x0]
7102eace7c  str q1,[x19, #0x140]
7102eace80  adrp x8,0x7104472000
7102eace84  ldr s8,[x8, #0x6e0]
7102eace88  adrp x8,0x71052a8000
7102eace8c  ldr x8,[x8, #0xaf8]
7102eace90  fmul s2,s8,v1.S[0x0]
7102eace94  movi v0.2D,#0x0
7102eace98  mov v0.S[0x0],v2.S[0x0]
7102eace9c  fmul s2,s8,v1.S[0x1]
7102eacea0  fmul s1,s8,v1.S[0x2]
7102eacea4  mov v0.S[0x1],v2.S[0x0]
7102eacea8  mov v0.S[0x2],v1.S[0x0]
7102eaceac  ldr q1,[x8]
7102eaceb0  mov w0,wzr
7102eaceb4  str q1,[sp, #0x20]
7102eaceb8  bl 0x71003d7950
7102eacebc  adrp x8,0x7104468000
7102eacec0  ldr q1,[x8, #0x1b0]
7102eacec4  adrp x8,0x7104465000
7102eacec8  ldr d2,[x8, #0x310]
7102eacecc  adrp x8,0x7104465000
7102eaced0  and v3.16B,v0.16B,v1.16B
7102eaced4  tbl v4.8B,{v3.16B},v2.8B
7102eaced8  ldr d2,[x8, #0x1e8]
7102eacedc  adrp x8,0x7104465000
7102eacee0  ldr d5,[x8, #0x2f8]
7102eacee4  ext v1.8B,v3.8B,v3.8B,0x4
7102eacee8  tbl v2.8B,{v3.16B},v2.8B
7102eaceec  mov v1.D[0x1],v4.D[0x0]
7102eacef0  tbl v5.8B,{v3.16B},v5.8B
7102eacef4  mov v2.D[0x1],v5.D[0x0]
7102eacef8  adrp x8,0x7104466000
7102eacefc  fmul v1.4S,v1.4S,v1.4S
7102eacf00  fadd v1.4S,v1.4S,v1.4S
7102eacf04  fmul v2.4S,v2.4S,v2.4S
7102eacf08  fadd v2.4S,v2.4S,v2.4S
7102eacf0c  fadd v1.4S,v2.4S,v1.4S
7102eacf10  ldr q2,[x8, #0x2b0]
7102eacf14  adrp x8,0x7104465000
7102eacf18  ldr d6,[x8, #0x5f8]
7102eacf1c  tbl v6.8B,{v3.16B},v6.8B
7102eacf20  fsub v1.4S,v2.4S,v1.4S
7102eacf24  adrp x8,0x7104465000
7102eacf28  mov v6.D[0x1],v4.D[0x0]
7102eacf2c  fmul v4.4S,v6.4S,v3.4S
7102eacf30  ldr d6,[x8, #0x2a0]
7102eacf34  fadd v4.4S,v4.4S,v4.4S
7102eacf38  tbl v3.8B,{v3.16B},v6.8B
7102eacf3c  mov v3.D[0x1],v5.D[0x0]
7102eacf40  adrp x8,0x7104465000
7102eacf44  fmul v0.4S,v3.4S,v0.S[0x3]
7102eacf48  fadd v0.4S,v0.4S,v0.4S
7102eacf4c  fadd v5.4S,v4.4S,v0.4S
7102eacf50  fsub v6.4S,v4.4S,v0.4S
7102eacf54  ldr d0,[x8, #0x3e8]
7102eacf58  adrp x8,0x7104465000
7102eacf5c  tbl v2.8B,{v5.16B,v6.16B},v0.8B
7102eacf60  ldr d0,[x8, #0x378]
7102eacf64  adrp x8,0x7104465000
7102eacf68  tbl v0.8B,{v5.16B,v6.16B},v0.8B
7102eacf6c  mov v2.D[0x1],v0.D[0x0]
7102eacf70  ldr d0,[x8, #0x628]
7102eacf74  adrp x8,0x7104465000
7102eacf78  tbl v4.8B,{v5.16B,v6.16B},v0.8B
7102eacf7c  ldr d0,[x8, #0x1f0]
7102eacf80  adrp x8,0x7104465000
7102eacf84  tbl v0.8B,{v5.16B,v6.16B},v0.8B
7102eacf88  mov v4.D[0x1],v0.D[0x0]
7102eacf8c  ldr d0,[x8, #0x250]
7102eacf90  adrp x8,0x7104465000
7102eacf94  ldr d5,[x8, #0x498]
7102eacf98  adrp x8,0x7104465000
7102eacf9c  mov v3.16B,v1.16B
7102eacfa0  tbl v0.8B,{v3.16B,v4.16B},v0.8B
7102eacfa4  tbl v5.8B,{v3.16B,v4.16B},v5.8B
7102eacfa8  mov v0.D[0x1],v5.D[0x0]
7102eacfac  ldr d5,[x8, #0x1c0]
7102eacfb0  adrp x8,0x7104465000
7102eacfb4  ldr d6,[x8, #0x180]
7102eacfb8  adrp x8,0x7104465000
7102eacfbc  tbl v5.8B,{v3.16B,v4.16B},v5.8B
7102eacfc0  tbl v3.8B,{v3.16B,v4.16B},v6.8B
7102eacfc4  mov v5.D[0x1],v3.D[0x0]
7102eacfc8  ldr d3,[x8, #0x298]
7102eacfcc  adrp x8,0x7104465000
7102eacfd0  ldr d4,[x8, #0x188]
7102eacfd4  tbl v3.8B,{v1.16B,v2.16B},v3.8B
7102eacfd8  tbl v1.8B,{v1.16B,v2.16B},v4.8B
7102eacfdc  ldr q2,[sp, #0x20]
7102eacfe0  mov v3.D[0x1],v1.D[0x0]
7102eacfe4  ldr q4,[sp]
7102eacfe8  fmul v0.4S,v0.4S,v2.S[0x0]
7102eacfec  fmul v1.4S,v5.4S,v2.S[0x1]
7102eacff0  stp q0,q1,[sp, #0x30]
7102eacff4  fmul v2.4S,v3.4S,v2.S[0x2]
7102eacff8  fmov s3,0x3f800000
7102eacffc  mov v4.S[0x3],v3.S[0x0]
7102ead000  stp q2,q4,[sp, #0x50]
7102ead004  ldr x8,[x19, #0x118]
7102ead008  ldr x20,[x8, #0x70]
7102ead00c  cbz x20,0x7102ead094
7102ead010  ldr x0,[x20, #0x90]
7102ead014  ldr x8,[x0]
7102ead018  ldr x8,[x8, #0x148]
7102ead01c  add x1,sp,#0x30
7102ead020  blr x8
7102ead024  ldr x20,[x20, #0xd8]
7102ead028  cbz x20,0x7102ead094
7102ead02c  ldr x8,[sp, #0x48]
7102ead030  str x8,[sp, #0x88]
7102ead034  ldr x8,[sp, #0x40]
7102ead038  str x8,[sp, #0x80]
7102ead03c  ldr x8,[sp, #0x38]
7102ead040  str x8,[sp, #0x78]
7102ead044  ldr x8,[sp, #0x30]
7102ead048  str x8,[sp, #0x70]
7102ead04c  ldr x8,[sp, #0x68]
7102ead050  str x8,[sp, #0xa8]
7102ead054  ldr x8,[sp, #0x60]
7102ead058  str x8,[sp, #0xa0]
7102ead05c  ldr x8,[sp, #0x58]
7102ead060  str x8,[sp, #0x98]
7102ead064  ldr x8,[sp, #0x50]
7102ead068  str x8,[sp, #0x90]
7102ead06c  ldr x8,[x20, #0x8]
7102ead070  ldrb w9,[x8, #0xa8]
7102ead074  cbz w9,0x7102ead08c
7102ead078  ldr x0,[x8, #0x48]
7102ead07c  ldr x8,[x0]
7102ead080  ldr x8,[x8, #0x20]
7102ead084  add x1,sp,#0x70
7102ead088  blr x8
7102ead08c  mov w8,#0x1
7102ead090  strb w8,[x20, #0x20]
7102ead094  ldr x8,[x19, #0x240]
7102ead098  ldp x20,x21,[x8]
7102ead09c  cmp x20,x21
7102ead0a0  b.eq 0x7102ead1b8
7102ead0a4  ldr q1,[x19, #0x120]
7102ead0a8  ldr s0,[x19, #0x148]
7102ead0ac  fmul s8,s0,s8
7102ead0b0  dup s10,v1.S[0x1]
7102ead0b4  adrp x8,0x7104742000
7102ead0b8  add x8,x8,#0xd24
7102ead0bc  ldr w22,[x8, #0x10]
7102ead0c0  ldp x23,x24,[x8]
7102ead0c4  str q1,[sp, #0x20]
7102ead0c8  ldr x25,[x20], #0x8
7102ead0cc  ldr q0,[x25, #0x30]
7102ead0d0  stp x23,x24,[x25, #0x40]
7102ead0d4  fneg s1,s0
7102ead0d8  dup s0,v0.S[0x1]
7102ead0dc  fneg s0,s0
7102ead0e0  str s0,[x25, #0x54]
7102ead0e4  mov v0.16B,v8.16B
7102ead0e8  str w22,[x25, #0x50]
7102ead0ec  str s1,[x25, #0x48]
7102ead0f0  bl 0x71039c07d0
7102ead0f4  mov v9.16B,v0.16B
7102ead0f8  mov v0.16B,v8.16B
7102ead0fc  bl 0x71039c07e0
7102ead100  ldp s5,s6,[x25, #0x48]
7102ead104  fmov s1,wzr
7102ead108  ldp s3,s4,[x25, #0x50]
7102ead10c  mov v19.16B,v1.16B
7102ead110  ldp s1,s2,[x25, #0x40]
7102ead114  fmul s16,s4,s0
7102ead118  fmul s4,s9,s4
7102ead11c  fmul s7,s9,s5
7102ead120  fmul s5,s0,s5
7102ead124  fsub s7,s7,s16
7102ead128  fadd s4,s5,s4
7102ead12c  fmul s5,s9,s1
7102ead130  fmul s16,s6,s0
7102ead134  fmul s17,s9,s2
7102ead138  fmul s18,s3,s0
7102ead13c  fmul s1,s0,s1
7102ead140  fmul s6,s9,s6
7102ead144  fmul s0,s0,s2
7102ead148  fmul s21,s9,s3
7102ead14c  fadd s0,s0,s21
7102ead150  fadd s3,s4,s19
7102ead154  fsub s4,s5,s16
7102ead158  fsub s5,s17,s18
7102ead15c  fadd s1,s1,s6
7102ead160  fadd s2,s7,s19
7102ead164  fmul s6,s1,s19
7102ead168  fmul s7,s0,s19
7102ead16c  fmul s16,s4,s19
7102ead170  fmul s17,s5,s19
7102ead174  fadd s5,s5,s7
7102ead178  fadd s4,s4,s6
7102ead17c  fadd s1,s16,s1
7102ead180  fadd s0,s17,s0
7102ead184  fmul s7,s2,s19
7102ead188  fmul s18,s3,s19
7102ead18c  fadd s2,s2,s18
7102ead190  stp s4,s5,[x25, #0x40]
7102ead194  stp s1,s0,[x25, #0x4c]
7102ead198  fadd s3,s7,s3
7102ead19c  ldr q1,[sp, #0x20]
7102ead1a0  fadd s1,s1,s2
7102ead1a4  fadd s2,s10,s3
7102ead1a8  cmp x21,x20
7102ead1ac  str s1,[x25, #0x48]
7102ead1b0  str s2,[x25, #0x54]
7102ead1b4  b.ne 0x7102ead0c8
7102ead1b8  ldr q0,[sp, #0x10]
7102ead1bc  mov x0,x19
7102ead1c0  mov x1,x19
7102ead1c4  bl 0x7102ead260
7102ead1c8  ldr q0,[sp, #0x10]
7102ead1cc  add x1,x19,#0x80
7102ead1d0  mov x0,x19
7102ead1d4  bl 0x7102ead260
7102ead1d8  ldp d9,d8,[sp, #0xc0]
7102ead1dc  ldr d10,[sp, #0xb0]
7102ead1e0  ldp x29,x30,[sp, #0x110]
7102ead1e4  ldp x20,x19,[sp, #0x100]
7102ead1e8  ldp x22,x21,[sp, #0xf0]
7102ead1ec  ldp x24,x23,[sp, #0xe0]
7102ead1f0  ldp x28,x25,[sp, #0xd0]
7102ead1f4  add sp,sp,#0x120
7102ead1f8  ret
7102ead1fc  cbz x25,0x7102eabd20
7102ead200  ldr x8,[x25, #0x8]
7102ead204  ldr x8,[x8, #0x108]
7102ead208  cbz x8,0x7102eabd20
7102ead20c  strb wzr,[x8, #0x44]
7102ead210  ldr x8,[x19, #0x118]
7102ead214  ldr x8,[x8, #0x68]
7102ead218  ldp x21,x23,[x8, #0x18]
7102ead21c  cmp x21,x23
7102ead220  b.ne 0x7102eabd28
7102ead224  b 0x7102eabd60
7102ead228  cbz x24,0x7102eac044
7102ead22c  ldr x8,[x24, #0x8]
7102ead230  ldr x8,[x8, #0x108]
7102ead234  cbz x8,0x7102eac044
7102ead238  mov w9,#0x1
7102ead23c  strb w9,[x8, #0x44]
7102ead240  b 0x7102eac044
7102ead244  cbz x24,0x7102eabd60
7102ead248  ldr x8,[x24, #0x8]
7102ead24c  ldr x8,[x8, #0x108]
7102ead250  cbz x8,0x7102eabd60
7102ead254  strb wzr,[x8, #0x44]
7102ead258  b 0x7102eabd60
