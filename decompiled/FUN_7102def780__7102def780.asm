// addr:      7102def780
// offset:    0x2def780
// name:      FUN_7102def780
// mangled:   
// size:      2784

7102def780  sub sp,sp,#0xc0
7102def784  stp d15,d14,[sp, #0x20]
7102def788  stp d13,d12,[sp, #0x30]
7102def78c  stp d11,d10,[sp, #0x40]
7102def790  stp d9,d8,[sp, #0x50]
7102def794  stp x28,x27,[sp, #0x60]
7102def798  stp x26,x25,[sp, #0x70]
7102def79c  stp x24,x23,[sp, #0x80]
7102def7a0  stp x22,x21,[sp, #0x90]
7102def7a4  stp x20,x19,[sp, #0xa0]
7102def7a8  stp x29,x30,[sp, #0xb0]
7102def7ac  add x29,sp,#0xb0
7102def7b0  mov v8.16B,v0.16B
7102def7b4  mov x19,x0
7102def7b8  bl 0x71025de7b0
7102def7bc  ldrb w8,[x19, #0x9b0]
7102def7c0  cbnz w8,0x7102def860
7102def7c4  adrp x9,0x71052a8000
7102def7c8  ldr x8,[x19, #0x338]
7102def7cc  ldr x9,[x9, #0xa88]
7102def7d0  ldr q0,[x9]
7102def7d4  str q0,[sp]
7102def7d8  ldr x21,[x8]
7102def7dc  ldr x0,[x21, #0x8]
7102def7e0  cbz x0,0x7102def858
7102def7e4  add x1,sp,#0x18
7102def7e8  mov w2,#0x1
7102def7ec  str xzr,[sp, #0x18]
7102def7f0  bl 0x7102405040
7102def7f4  cmn w0,#0x1
7102def7f8  b.eq 0x7102def858
7102def7fc  mov w20,w0
7102def800  cmp w0,#0x18
7102def804  b.hi 0x7102def840
7102def808  ldr x8,[x21, #0x8]
7102def80c  mov w9,#0x50
7102def810  smaddl x8,w20,w9,x8
7102def814  ldr x0,[x8, #0x68]
7102def818  ldr x8,[x0]
7102def81c  cbz x8,0x7102def840
7102def820  ldr w9,[x0, #0x8]
7102def824  cmn w9,#0x1
7102def828  b.eq 0x7102def840
7102def82c  ldr w8,[x8, #0x20]
7102def830  cmp w9,w8
7102def834  b.ne 0x7102def840
7102def838  mov x1,sp
7102def83c  bl 0x7103736cf0
7102def840  ldr x0,[x21, #0x8]
7102def844  ldr x8,[x0]
7102def848  ldr x8,[x8, #0x58]
7102def84c  mov w1,wzr
7102def850  mov w2,w20
7102def854  blr x8
7102def858  mov w8,#0x1
7102def85c  strb w8,[x19, #0x9b0]
7102def860  movi v6.2D,#0x0
7102def864  ldr x8,[x19, #0x308]
7102def868  mov v0.16B,v6.16B
7102def86c  add x9,x8,#0x11c
7102def870  add x8,x8,#0x124
7102def874  ld1 {v0.S}[0],[x9]
7102def878  ldr x9,[x19, #0x310]
7102def87c  ld1 {v0.S}[1],[x8]
7102def880  str q0,[x19, #0xc80]
7102def884  ldp x8,x9,[x9, #0xd0]
7102def888  cmp x8,x9
7102def88c  b.eq 0x7102def8c4
7102def890  mov x10,#0x6bf7
7102def894  movk x10,#0x5a94, LSL #16
7102def898  movk x10,#0xe, LSL #32
7102def89c  ldr w11,[x8, #0x8]
7102def8a0  cmp w11,#0x1
7102def8a4  b.hi 0x7102def8b8
7102def8a8  ldr x21,[x8]
7102def8ac  ldr x11,[x21, #0x68]
7102def8b0  cmp x11,x10
7102def8b4  b.eq 0x7102def924
7102def8b8  add x8,x8,#0x10
7102def8bc  cmp x9,x8
7102def8c0  b.ne 0x7102def89c
7102def8c4  adrp x8,0x710446a000
7102def8c8  ldr q0,[x8, #0x350]
7102def8cc  str q6,[x19, #0xc40]
7102def8d0  fmov s5,wzr
7102def8d4  ext v1.16B,v0.16B,v0.16B,0x8
7102def8d8  ldrb w8,[x19, #0x18]
7102def8dc  mov v1.S[0x1],v5.S[0x0]
7102def8e0  mov v0.D[0x1],v1.D[0x0]
7102def8e4  str q0,[x19, #0xc50]
7102def8e8  cbz w8,0x7102defd1c
7102def8ec  ldr s0,[x19, #0x9b8]
7102def8f0  fsub s0,s0,s8
7102def8f4  fmax s0,s0,s5
7102def8f8  ldrb w8,[x19, #0x9b2]
7102def8fc  cmp w8,#0x1
7102def900  str s0,[x19, #0x9b8]
7102def904  b.eq 0x7102defbac
7102def908  cbnz w8,0x7102defd1c
7102def90c  ldrb w8,[x19, #0x9bc]
7102def910  cbz w8,0x7102def95c
7102def914  mov w9,#0x41f00000
7102def918  str w9,[x19, #0x9b8]
7102def91c  fmov s0,0x41f00000
7102def920  b 0x7102defb9c
7102def924  cbz x21,0x7102def8c4
7102def928  ldr x8,[x21, #0xd8]
7102def92c  cbz x8,0x7102defa00
7102def930  ldr x8,[x8, #0x8]
7102def934  ldr x0,[x8, #0x8]
7102def938  ldr x8,[x0]
7102def93c  ldr x8,[x8, #0x18]
7102def940  adrp x1,0x71042c3000
7102def944  add x1,x1,#0x108
7102def948  blr x8
7102def94c  mov w20,w0
7102def950  ldr x8,[x21, #0xd8]
7102def954  cbnz x8,0x7102defa0c
7102def958  b 0x7102defa54
7102def95c  ldr x9,[x19, #0x828]
7102def960  ldr x8,[x19, #0x820]
7102def964  subs x9,x9,x8
7102def968  b.eq 0x7102df0258
7102def96c  asr x10,x9,#0x2
7102def970  cmp x10,#0x1
7102def974  b.ls 0x7102df0258
7102def978  cmp x9,#0x8
7102def97c  b.eq 0x7102df0258
7102def980  cmp x10,#0x4
7102def984  b.cc 0x7102df0258
7102def988  ldr x13,[x19, #0x340]
7102def98c  ldp w14,w10,[x13]
7102def990  ldp w12,w9,[x8]
7102def994  ldp w11,w8,[x8, #0x8]
7102def998  str w10,[x13]
7102def99c  ldp w10,w15,[x13, #0x8]
7102def9a0  stp w10,w15,[x13, #0x4]
7102def9a4  add w10,w12,w9
7102def9a8  add w9,w10,w11
7102def9ac  eor w11,w14,w14, LSL #0xb
7102def9b0  add w8,w9,w8
7102def9b4  eor w11,w11,w11, LSR #0x8
7102def9b8  eor w11,w11,w15
7102def9bc  eor w11,w11,w15, LSR #0x13
7102def9c0  str w11,[x13, #0xc]
7102def9c4  udiv w13,w11,w8
7102def9c8  msub w11,w13,w8,w11
7102def9cc  orr w13,wzr,#0x3
7102def9d0  strb w13,[x19, #0x9bc]
7102def9d4  add w11,w11,#0x1
7102def9d8  cmp w11,w12
7102def9dc  b.ls 0x7102defb28
7102def9e0  cmp w11,w10
7102def9e4  b.ls 0x7102defb30
7102def9e8  cmp w11,w9
7102def9ec  b.ls 0x7102defb38
7102def9f0  cmp w11,w8
7102def9f4  b.hi 0x7102defb40
7102def9f8  mov w8,#0x4
7102def9fc  b 0x7102defb3c
7102defa00  mov w20,#0xffffffff
7102defa04  ldr x8,[x21, #0xd8]
7102defa08  cbz x8,0x7102defa54
7102defa0c  ldr x8,[x8, #0x8]
7102defa10  ldr x0,[x8, #0x8]
7102defa14  ldr x8,[x0]
7102defa18  ldr x8,[x8, #0x10]
7102defa1c  blr x8
7102defa20  cmp w0,w20
7102defa24  b.ls 0x7102defa54
7102defa28  ldr x8,[x21, #0xd8]
7102defa2c  ldr x8,[x8, #0x8]
7102defa30  ldr x0,[x8, #0x48]
7102defa34  ldr x8,[x0]
7102defa38  ldr x8,[x8, #0x38]
7102defa3c  mov w1,wzr
7102defa40  blr x8
7102defa44  mov w8,w20
7102defa48  add x8,x1,x8, LSL #0x6
7102defa4c  add x8,x8,#0x30
7102defa50  b 0x7102defa68
7102defa54  ldr x0,[x21, #0x90]
7102defa58  ldr x8,[x0]
7102defa5c  ldr x8,[x8, #0x158]
7102defa60  blr x8
7102defa64  add x8,x0,#0x30
7102defa68  ldr q0,[x8]
7102defa6c  fmov s1,wzr
7102defa70  ext v2.16B,v0.16B,v0.16B,0x8
7102defa74  mov v2.S[0x1],v1.S[0x0]
7102defa78  mov v0.D[0x1],v2.D[0x0]
7102defa7c  str q0,[x19, #0xc40]
7102defa80  ldr x8,[x21, #0xd8]
7102defa84  cbz x8,0x7102defab4
7102defa88  ldr x8,[x8, #0x8]
7102defa8c  ldr x0,[x8, #0x8]
7102defa90  ldr x8,[x0]
7102defa94  ldr x8,[x8, #0x18]
7102defa98  adrp x1,0x7104328000
7102defa9c  add x1,x1,#0x30a
7102defaa0  blr x8
7102defaa4  mov w20,w0
7102defaa8  ldr x8,[x21, #0xd8]
7102defaac  cbnz x8,0x7102defac0
7102defab0  b 0x7102defb08
7102defab4  mov w20,#0xffffffff
7102defab8  ldr x8,[x21, #0xd8]
7102defabc  cbz x8,0x7102defb08
7102defac0  ldr x8,[x8, #0x8]
7102defac4  ldr x0,[x8, #0x8]
7102defac8  ldr x8,[x0]
7102defacc  ldr x8,[x8, #0x10]
7102defad0  blr x8
7102defad4  cmp w0,w20
7102defad8  b.ls 0x7102defb08
7102defadc  ldr x8,[x21, #0xd8]
7102defae0  ldr x8,[x8, #0x8]
7102defae4  ldr x0,[x8, #0x48]
7102defae8  ldr x8,[x0]
7102defaec  ldr x8,[x8, #0x38]
7102defaf0  mov w1,wzr
7102defaf4  blr x8
7102defaf8  mov w8,w20
7102defafc  add x8,x1,x8, LSL #0x6
7102defb00  add x8,x8,#0x30
7102defb04  b 0x7102defb1c
7102defb08  ldr x0,[x21, #0x90]
7102defb0c  ldr x8,[x0]
7102defb10  ldr x8,[x8, #0x158]
7102defb14  blr x8
7102defb18  add x8,x0,#0x30
7102defb1c  ldr q0,[x8]
7102defb20  movi v6.2D,#0x0
7102defb24  b 0x7102def8d0
7102defb28  mov w8,#0x1
7102defb2c  b 0x7102defb3c
7102defb30  mov w8,#0x2
7102defb34  b 0x7102defb3c
7102defb38  orr w8,wzr,#0x3
7102defb3c  strb w8,[x19, #0x9bc]
7102defb40  ldr w9,[x19, #0x818]
7102defb44  ldr x8,[x19, #0x340]
7102defb48  mov w11,#0x1
7102defb4c  ldr w10,[x19, #0x81c]
7102defb50  fmov s1,0x41f00000
7102defb54  sub w11,w11,w9
7102defb58  add w10,w11,w10
7102defb5c  ldp w11,w12,[x8]
7102defb60  str w12,[x8]
7102defb64  ldp w12,w13,[x8, #0x8]
7102defb68  eor w11,w11,w11, LSL #0xb
7102defb6c  eor w11,w11,w11, LSR #0x8
7102defb70  eor w11,w11,w13
7102defb74  eor w11,w11,w13, LSR #0x13
7102defb78  stp w12,w13,[x8, #0x4]
7102defb7c  str w11,[x8, #0xc]
7102defb80  udiv w8,w11,w10
7102defb84  msub w8,w8,w10,w11
7102defb88  add w8,w8,w9
7102defb8c  ucvtf s0,w8
7102defb90  ldrb w8,[x19, #0x9bc]
7102defb94  fmul s0,s0,s1
7102defb98  str s0,[x19, #0x9b8]
7102defb9c  sub w8,w8,#0x1
7102defba0  strb w8,[x19, #0x9bc]
7102defba4  mov w8,#0x1
7102defba8  strb w8,[x19, #0x9b2]
7102defbac  fcmp s0,#0.0
7102defbb0  b.ne 0x7102defd1c
7102defbb4  ldr s2,[x19, #0x794]
7102defbb8  ldrb w8,[x19, #0xee4]
7102defbbc  cmp w8,#0x3
7102defbc0  b.ne 0x7102defbd0
7102defbc4  mov x8,xzr
7102defbc8  add x20,x19,#0xee4
7102defbcc  b 0x7102defc78
7102defbd0  ldrb w8,[x19, #0xf24]
7102defbd4  cmp w8,#0x3
7102defbd8  b.ne 0x7102defbe8
7102defbdc  add x20,x19,#0xf24
7102defbe0  mov w8,#0x1
7102defbe4  b 0x7102defc78
7102defbe8  ldrb w8,[x19, #0xf64]
7102defbec  cmp w8,#0x3
7102defbf0  b.ne 0x7102defc00
7102defbf4  add x20,x19,#0xf64
7102defbf8  mov w8,#0x2
7102defbfc  b 0x7102defc78
7102defc00  ldrb w8,[x19, #0xfa4]
7102defc04  cmp w8,#0x3
7102defc08  b.ne 0x7102defc18
7102defc0c  add x20,x19,#0xfa4
7102defc10  orr w8,wzr,#0x3
7102defc14  b 0x7102defc78
7102defc18  ldrb w8,[x19, #0xfe4]
7102defc1c  cmp w8,#0x3
7102defc20  b.ne 0x7102defc30
7102defc24  add x20,x19,#0xfe4
7102defc28  mov w8,#0x4
7102defc2c  b 0x7102defc78
7102defc30  mov w8,#0x1024
7102defc34  add x20,x19,x8
7102defc38  ldrb w8,[x20]
7102defc3c  cmp w8,#0x3
7102defc40  b.ne 0x7102defc4c
7102defc44  mov w8,#0x5
7102defc48  b 0x7102defc78
7102defc4c  ldrb w8,[x20, #0x40]!
7102defc50  cmp w8,#0x3
7102defc54  b.ne 0x7102defc60
7102defc58  orr w8,wzr,#0x6
7102defc5c  b 0x7102defc78
7102defc60  mov w8,#0x10a4
7102defc64  add x20,x19,x8
7102defc68  ldrb w8,[x20]
7102defc6c  cmp w8,#0x3
7102defc70  b.ne 0x7102defd18
7102defc74  orr w8,wzr,#0x7
7102defc78  ldr q0,[x19, #0xc50]
7102defc7c  ldr q1,[x19, #0xc40]
7102defc80  add x21,x19,x8, LSL #0x6
7102defc84  str q6,[x21, #0xec0]
7102defc88  fsub v1.4S,v1.4S,v0.4S
7102defc8c  fmul v3.4S,v1.4S,v1.4S
7102defc90  ext v4.16B,v3.16B,v3.16B,0x8
7102defc94  fadd v3.2S,v4.2S,v3.2S
7102defc98  faddp v3.2S,v3.2S,v3.2S
7102defc9c  mov v3.D[0x1],v3.D[0x0]
7102defca0  frsqrte v4.4S,v3.4S
7102defca4  fmul v5.4S,v4.4S,v3.4S
7102defca8  frsqrts v5.4S,v4.4S,v5.4S
7102defcac  fmul v4.4S,v4.4S,v5.4S
7102defcb0  fmul v5.4S,v3.4S,v4.4S
7102defcb4  fcmeq v3.4S,v3.4S,#0.0
7102defcb8  mvn v3.16B,v3.16B
7102defcbc  frsqrts v5.4S,v4.4S,v5.4S
7102defcc0  fmul v4.4S,v4.4S,v5.4S
7102defcc4  fmul v1.4S,v1.4S,v4.4S
7102defcc8  movi d4,#0x0
7102defccc  mov v0.D[0x1],v4.D[0x0]
7102defcd0  and v1.16B,v1.16B,v3.16B
7102defcd4  fmul s3,s2,v1.S[0x0]
7102defcd8  mov v6.S[0x0],v3.S[0x0]
7102defcdc  fmul s2,s2,v1.S[0x1]
7102defce0  mov v6.S[0x1],v2.S[0x0]
7102defce4  str q0,[x21, #0xeb0]
7102defce8  dup s0,v1.S[0x1]
7102defcec  str q6,[x21, #0xed0]
7102defcf0  bl 0x71039c2660
7102defcf4  adrp x8,0x7104472000
7102defcf8  ldr s1,[x8, #0xfbc]
7102defcfc  adrp x8,0x7104471000
7102defd00  fmul s0,s0,s1
7102defd04  ldr s1,[x8, #0xd10]
7102defd08  fdiv s0,s0,s1
7102defd0c  fmov s5,wzr
7102defd10  str s0,[x21, #0xee0]
7102defd14  strb wzr,[x20]
7102defd18  strb wzr,[x19, #0x9b2]
7102defd1c  ldrb w8,[x19, #0x9b1]
7102defd20  cmp w8,#0x2
7102defd24  b.eq 0x7102defd44
7102defd28  cmp w8,#0x1
7102defd2c  b.eq 0x7102defd3c
7102defd30  cbnz w8,0x7102df006c
7102defd34  mov w8,#0x1
7102defd38  strb w8,[x19, #0x9b1]
7102defd3c  mov w8,#0x2
7102defd40  strb w8,[x19, #0x9b1]
7102defd44  adrp x8,0x7104471000
7102defd48  adrp x9,0x7104472000
7102defd4c  ldr s11,[x9, #0x5b8]
7102defd50  ldr s10,[x8, #0xcb4]
7102defd54  adrp x8,0x7104472000
7102defd58  ldr s12,[x8, #0x948]
7102defd5c  fmov s9,0x3f800000
7102defd60  fmov s13,0x3e000000
7102defd64  fmov s14,0x3e800000
7102defd68  fmov s15,0x3ec00000
7102defd6c  mov x22,xzr
7102defd70  mov w23,#0x2
7102defd74  orr w28,wzr,#0xc
7102defd78  mov w26,#0x42100000
7102defd7c  mov w27,#0x42900000
7102defd80  add x25,x19,x22
7102defd84  ldrb w8,[x25, #0xee4]
7102defd88  cmp w8,#0x1
7102defd8c  b.ne 0x7102deff74
7102defd90  ldr s1,[x19, #0xc70]
7102defd94  ldr s2,[x19, #0xc60]
7102defd98  fsub s1,s1,s2
7102defd9c  fmul s4,s1,s10
7102defda0  ldr s0,[x25, #0xeb0]
7102defda4  fsub s0,s0,s2
7102defda8  fmul s3,s4,s11
7102defdac  fadd s4,s3,s3
7102defdb0  fadd s1,s1,s4
7102defdb4  fadd s0,s0,s3
7102defdb8  fdiv s0,s0,s1
7102defdbc  fmin s1,s0,s9
7102defdc0  fmul s1,s1,s12
7102defdc4  fcmp s0,#0.0
7102defdc8  fcsel s0,s5,s1,mi
7102defdcc  fcvtzs w8,s0
7102defdd0  sub w9,w8,#0x2
7102defdd4  sxtw x8,w9
7102defdd8  cmp w9,#0xdf
7102defddc  b.hi 0x7102defde8
7102defde0  madd x9,x8,x28,x19
7102defde4  str w26,[x9, #0x10b4]
7102defde8  add x9,x8,#0x1
7102defdec  cmp w9,#0xdf
7102defdf0  b.hi 0x7102defdfc
7102defdf4  madd x9,x9,x28,x19
7102defdf8  str w27,[x9, #0x10b4]
7102defdfc  add x9,x8,#0x2
7102defe00  cmp w9,#0xdf
7102defe04  b.hi 0x7102defe14
7102defe08  madd x9,x9,x28,x19
7102defe0c  mov w10,#0x42d7ffff
7102defe10  str w10,[x9, #0x10b4]
7102defe14  add x9,x8,#0x3
7102defe18  cmp w9,#0xdf
7102defe1c  b.hi 0x7102defe28
7102defe20  madd x9,x9,x28,x19
7102defe24  str w27,[x9, #0x10b4]
7102defe28  add x8,x8,#0x4
7102defe2c  cmp w8,#0xdf
7102defe30  b.hi 0x7102defe3c
7102defe34  madd x8,x8,x28,x19
7102defe38  str w26,[x8, #0x10b4]
7102defe3c  ldr q0,[x25, #0xeb0]
7102defe40  mov v1.16B,v0.16B
7102defe44  movi d2,#0x0
7102defe48  mov v1.D[0x1],v2.D[0x0]
7102defe4c  str q1,[sp]
7102defe50  ldr s1,[x19, #0xc60]
7102defe54  ldr s2,[x19, #0xc70]
7102defe58  fsub s0,s0,s1
7102defe5c  fsub s1,s2,s1
7102defe60  fdiv s0,s0,s1
7102defe64  fmax s0,s0,s5
7102defe68  fmin s0,s0,s9
7102defe6c  fcmp s0,s13
7102defe70  b.pl 0x7102defe7c
7102defe74  orr w20,wzr,#0x3
7102defe78  b 0x7102defee8
7102defe7c  fcmp s0,s14
7102defe80  b.pl 0x7102defe8c
7102defe84  mov w20,#0x4
7102defe88  b 0x7102defee8
7102defe8c  fcmp s0,s15
7102defe90  mov w20,#0x5
7102defe94  b.mi 0x7102defee8
7102defe98  fmov s1,0x3f000000
7102defe9c  fcmp s0,s1
7102defea0  b.pl 0x7102defeac
7102defea4  orr w20,wzr,#0x6
7102defea8  b 0x7102defee8
7102defeac  fmov s1,0x3f200000
7102defeb0  fcmp s0,s1
7102defeb4  b.pl 0x7102defec0
7102defeb8  orr w20,wzr,#0x7
7102defebc  b 0x7102defee8
7102defec0  fmov s1,0x3f400000
7102defec4  fcmp s0,s1
7102defec8  b.pl 0x7102defed4
7102defecc  mov w20,#0x8
7102defed0  b 0x7102defee8
7102defed4  fmov s1,0x3f600000
7102defed8  fcmp s0,s1
7102defedc  mov w8,#0xa
7102defee0  mov w9,#0x9
7102defee4  csel w20,w9,w8,mi
7102defee8  ldr x8,[x19, #0x338]
7102defeec  ldr x24,[x8]
7102defef0  ldr x0,[x24, #0x8]
7102defef4  cbz x0,0x7102deff70
7102defef8  add x1,sp,#0x18
7102defefc  mov w2,#0x1
7102deff00  str xzr,[sp, #0x18]
7102deff04  bl 0x7102405040
7102deff08  cmn w0,#0x1
7102deff0c  b.eq 0x7102deff6c
7102deff10  mov w21,w0
7102deff14  cmp w0,#0x18
7102deff18  b.hi 0x7102deff54
7102deff1c  ldr x8,[x24, #0x8]
7102deff20  mov w9,#0x50
7102deff24  smaddl x8,w21,w9,x8
7102deff28  ldr x0,[x8, #0x68]
7102deff2c  ldr x8,[x0]
7102deff30  cbz x8,0x7102deff54
7102deff34  ldr w9,[x0, #0x8]
7102deff38  cmn w9,#0x1
7102deff3c  b.eq 0x7102deff54
7102deff40  ldr w8,[x8, #0x20]
7102deff44  cmp w9,w8
7102deff48  b.ne 0x7102deff54
7102deff4c  mov x1,sp
7102deff50  bl 0x7103736cf0
7102deff54  ldr x0,[x24, #0x8]
7102deff58  ldr x8,[x0]
7102deff5c  ldr x8,[x8, #0x58]
7102deff60  mov w1,w20
7102deff64  mov w2,w21
7102deff68  blr x8
7102deff6c  fmov s5,wzr
7102deff70  strb w23,[x25, #0xee4]
7102deff74  add x22,x22,#0x40
7102deff78  cmp x22,#0x200
7102deff7c  b.ne 0x7102defd80
7102deff80  adrp x10,0x7104473000
7102deff84  ldr s0,[x10, #0xa6c]
7102deff88  adrp x10,0x7104472000
7102deff8c  adrp x11,0x7104473000
7102deff90  ldr s2,[x11, #0x4b0]
7102deff94  ldr s1,[x10, #0xe10]
7102deff98  mov x9,xzr
7102deff9c  orr w8,wzr,#0xc
7102deffa0  mov w10,#0x10b0
7102deffa4  cbnz w9,0x7102deffec
7102deffa8  b 0x7102df0020
7102deffac  add x14,x19,x10
7102deffb0  madd x12,x12,x8,x14
7102deffb4  ldr s5,[x12, #0x4]
7102deffb8  fadd s4,s4,s5
7102deffbc  ldr s5,[x11]
7102deffc0  fdiv s4,s4,s0
7102deffc4  fadd s4,s5,s4
7102deffc8  fdiv s5,s4,s1
7102deffcc  fadd s4,s4,s5
7102deffd0  fsub s3,s4,s3
7102deffd4  madd x9,x9,x8,x14
7102deffd8  str s3,[x11]
7102deffdc  fmin s3,s4,s2
7102deffe0  str s3,[x9, #0x8]
7102deffe4  mov x9,x13
7102deffe8  cbz w9,0x7102df0020
7102deffec  cmp w9,#0xe0
7102defff0  b.eq 0x7102df004c
7102defff4  madd x11,x9,x8,x19
7102defff8  sub w12,w9,#0x1
7102defffc  cmp x9,#0xdf
7102df0000  add x11,x11,x10
7102df0004  b.eq 0x7102df003c
7102df0008  madd x14,x9,x8,x19
7102df000c  ldr s3,[x14, #0x10b4]
7102df0010  ldr s4,[x14, #0x10c0]
7102df0014  fadd s4,s3,s4
7102df0018  add x13,x9,#0x1
7102df001c  b 0x7102deffac
7102df0020  madd x13,x9,x8,x19
7102df0024  ldr s3,[x13, #0x10b4]
7102df0028  add x12,x9,#0x1
7102df002c  add x11,x13,x10
7102df0030  mov x13,x12
7102df0034  fadd s4,s3,s3
7102df0038  b 0x7102deffac
7102df003c  ldr s3,[x19, #0x1b28]
7102df0040  fadd s4,s3,s3
7102df0044  orr w13,wzr,#0xe0
7102df0048  b 0x7102deffac
7102df004c  mov x8,#-0xa80
7102df0050  add x9,x19,x8
7102df0054  adds x8,x8,#0x18
7102df0058  ldr w10,[x9, #0x1b38]
7102df005c  str w10,[x9, #0x1b34]
7102df0060  ldr w10,[x9, #0x1b44]
7102df0064  str w10,[x9, #0x1b40]
7102df0068  b.ne 0x7102df0050
7102df006c  ldr x0,[x19, #0x970]
7102df0070  mov v0.16B,v8.16B
7102df0074  bl 0x7102df41a0
7102df0078  ldr x0,[x19, #0x850]
7102df007c  mov v0.16B,v8.16B
7102df0080  bl 0x7102df5070
7102df0084  ldr x0,[x19, #0x858]
7102df0088  mov v0.16B,v8.16B
7102df008c  bl 0x7102df35c0
7102df0090  ldr x0,[x19, #0x860]
7102df0094  mov v0.16B,v8.16B
7102df0098  bl 0x7102df1e70
7102df009c  ldr x0,[x19, #0x868]
7102df00a0  mov v0.16B,v8.16B
7102df00a4  bl 0x7102df1e70
7102df00a8  ldr x0,[x19, #0x870]
7102df00ac  mov v0.16B,v8.16B
7102df00b0  bl 0x7102df1e70
7102df00b4  ldr x0,[x19, #0x878]
7102df00b8  mov v0.16B,v8.16B
7102df00bc  bl 0x7102df1e70
7102df00c0  ldr x0,[x19, #0x880]
7102df00c4  mov v0.16B,v8.16B
7102df00c8  bl 0x7102df1e70
7102df00cc  ldr x0,[x19, #0x888]
7102df00d0  mov v0.16B,v8.16B
7102df00d4  bl 0x7102df1e70
7102df00d8  ldr x0,[x19, #0x890]
7102df00dc  mov v0.16B,v8.16B
7102df00e0  bl 0x7102df1e70
7102df00e4  ldr x0,[x19, #0x898]
7102df00e8  mov v0.16B,v8.16B
7102df00ec  bl 0x7102df1e70
7102df00f0  ldr x0,[x19, #0x8a0]
7102df00f4  mov v0.16B,v8.16B
7102df00f8  bl 0x7102df1e70
7102df00fc  ldr x0,[x19, #0x8a8]
7102df0100  mov v0.16B,v8.16B
7102df0104  bl 0x7102df1e70
7102df0108  ldr x0,[x19, #0x930]
7102df010c  mov v0.16B,v8.16B
7102df0110  bl 0x7102df5ed0
7102df0114  ldr x0,[x19, #0x938]
7102df0118  mov v0.16B,v8.16B
7102df011c  bl 0x7102df5ed0
7102df0120  ldr x0,[x19, #0x940]
7102df0124  mov v0.16B,v8.16B
7102df0128  bl 0x7102df5ed0
7102df012c  ldr x0,[x19, #0x948]
7102df0130  mov v0.16B,v8.16B
7102df0134  bl 0x7102df5ed0
7102df0138  ldr x0,[x19, #0x950]
7102df013c  mov v0.16B,v8.16B
7102df0140  bl 0x7102df5ed0
7102df0144  ldr x0,[x19, #0x958]
7102df0148  mov v0.16B,v8.16B
7102df014c  bl 0x7102df5ed0
7102df0150  ldr x0,[x19, #0x960]
7102df0154  mov v0.16B,v8.16B
7102df0158  bl 0x7102df5ed0
7102df015c  ldr x0,[x19, #0x968]
7102df0160  mov v0.16B,v8.16B
7102df0164  bl 0x7102df5ed0
7102df0168  ldr x0,[x19, #0x8b0]
7102df016c  mov v0.16B,v8.16B
7102df0170  bl 0x7102df58a0
7102df0174  ldr x0,[x19, #0x8b8]
7102df0178  mov v0.16B,v8.16B
7102df017c  bl 0x7102df58a0
7102df0180  ldr x0,[x19, #0x8c0]
7102df0184  mov v0.16B,v8.16B
7102df0188  bl 0x7102df58a0
7102df018c  ldr x0,[x19, #0x8c8]
7102df0190  mov v0.16B,v8.16B
7102df0194  bl 0x7102df58a0
7102df0198  ldr x0,[x19, #0x8d0]
7102df019c  mov v0.16B,v8.16B
7102df01a0  bl 0x7102df58a0
7102df01a4  ldr x0,[x19, #0x8d8]
7102df01a8  mov v0.16B,v8.16B
7102df01ac  bl 0x7102df58a0
7102df01b0  ldr x0,[x19, #0x8e0]
7102df01b4  mov v0.16B,v8.16B
7102df01b8  bl 0x7102df58a0
7102df01bc  ldr x0,[x19, #0x8e8]
7102df01c0  mov v0.16B,v8.16B
7102df01c4  bl 0x7102df58a0
7102df01c8  ldr x0,[x19, #0x8f0]
7102df01cc  mov v0.16B,v8.16B
7102df01d0  bl 0x7102df58a0
7102df01d4  ldr x0,[x19, #0x8f8]
7102df01d8  mov v0.16B,v8.16B
7102df01dc  bl 0x7102df58a0
7102df01e0  ldr x0,[x19, #0x900]
7102df01e4  mov v0.16B,v8.16B
7102df01e8  bl 0x7102df58a0
7102df01ec  ldr x0,[x19, #0x908]
7102df01f0  mov v0.16B,v8.16B
7102df01f4  bl 0x7102df58a0
7102df01f8  ldr x0,[x19, #0x910]
7102df01fc  mov v0.16B,v8.16B
7102df0200  bl 0x7102df58a0
7102df0204  ldr x0,[x19, #0x918]
7102df0208  mov v0.16B,v8.16B
7102df020c  bl 0x7102df58a0
7102df0210  ldr x0,[x19, #0x920]
7102df0214  mov v0.16B,v8.16B
7102df0218  bl 0x7102df58a0
7102df021c  ldr x0,[x19, #0x928]
7102df0220  mov v0.16B,v8.16B
7102df0224  bl 0x7102df58a0
7102df0228  ldp d9,d8,[sp, #0x50]
7102df022c  ldp d11,d10,[sp, #0x40]
7102df0230  ldp d13,d12,[sp, #0x30]
7102df0234  ldp d15,d14,[sp, #0x20]
7102df0238  ldp x29,x30,[sp, #0xb0]
7102df023c  ldp x20,x19,[sp, #0xa0]
7102df0240  ldp x22,x21,[sp, #0x90]
7102df0244  ldp x24,x23,[sp, #0x80]
7102df0248  ldp x26,x25,[sp, #0x70]
7102df024c  ldp x28,x27,[sp, #0x60]
7102df0250  add sp,sp,#0xc0
7102df0254  ret
7102df0258  add x0,x19,#0x820
7102df025c  bl 0x71039c1330
