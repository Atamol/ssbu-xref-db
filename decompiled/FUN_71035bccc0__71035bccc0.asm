// addr:      71035bccc0
// offset:    0x35bccc0
// name:      FUN_71035bccc0
// mangled:   
// size:      2512

71035bccc0  str d14,[sp, #-0xa0]!
71035bccc4  stp d13,d12,[sp, #0x10]
71035bccc8  stp d11,d10,[sp, #0x20]
71035bcccc  stp d9,d8,[sp, #0x30]
71035bccd0  stp x28,x27,[sp, #0x40]
71035bccd4  stp x26,x25,[sp, #0x50]
71035bccd8  stp x24,x23,[sp, #0x60]
71035bccdc  stp x22,x21,[sp, #0x70]
71035bcce0  stp x20,x19,[sp, #0x80]
71035bcce4  stp x29,x30,[sp, #0x90]
71035bcce8  add x29,sp,#0x90
71035bccec  sub sp,sp,#0x210
71035bccf0  adrp x21,0x7105337000
71035bccf4  mov x19,x0
71035bccf8  ldr x8,[x21, #0xce8]
71035bccfc  str q0,[sp, #0xd0]
71035bcd00  ldr x0,[x8, #0x598]
71035bcd04  cbz x0,0x71035bd65c
71035bcd08  adrp x8,0x7105336000
71035bcd0c  ldr x20,[x8, #0xe10]
71035bcd10  mov w8,#0x2
71035bcd14  ldr b0,[x19, #0x90]
71035bcd18  fmov s2,w8
71035bcd1c  adrp x8,0x710446a000
71035bcd20  cmeq v0.16B,v0.16B,v2.16B
71035bcd24  dup v2.16B,v0.B[0x0]
71035bcd28  ldr q0,[x8, #0x7f0]
71035bcd2c  add x8,x0,#0x10
71035bcd30  bsl v2.16B,v0.16B,v1.16B
71035bcd34  mov w24,w1
71035bcd38  sub x23,x29,#0xb8
71035bcd3c  str q2,[sp, #0xc0]
71035bcd40  ldxr x9,[x8]
71035bcd44  add x9,x9,#0x1
71035bcd48  stxr w10,x9,[x8]
71035bcd4c  cbnz w10,0x71035bcd40
71035bcd50  ldr x22,[x0, #0x8]
71035bcd54  bl 0x71039c2670
71035bcd58  cmn x22,#0x1
71035bcd5c  b.eq 0x71035bd65c
71035bcd60  ldr x8,[x21, #0xce8]
71035bcd64  ldr x22,[x8, #0x598]
71035bcd68  cbz x22,0x71035bd65c
71035bcd6c  ldr x21,[x8, #0x590]
71035bcd70  add x8,x22,#0x10
71035bcd74  ldxr x9,[x8]
71035bcd78  add x9,x9,#0x1
71035bcd7c  stxr w10,x9,[x8]
71035bcd80  cbnz w10,0x71035bcd74
71035bcd84  mov x0,x22
71035bcd88  bl 0x71039c2760
71035bcd8c  mov x26,x0
71035bcd90  mov x0,x22
71035bcd94  bl 0x71039c2670
71035bcd98  cbz x26,0x71035bd628
71035bcd9c  cbz x21,0x71035bd628
71035bcda0  ldrb w8,[x19, #0x90]
71035bcda4  fmov s0,0x41000000
71035bcda8  fmov s1,0x3f800000
71035bcdac  cmp w8,#0x2
71035bcdb0  ldrb w8,[x19, #0x8]
71035bcdb4  fcsel s12,s1,s0,eq
71035bcdb8  cbz w8,0x71035bd628
71035bcdbc  ldr x0,[x19, #0x18]
71035bcdc0  cbz x0,0x71035bce1c
71035bcdc4  bl 0x71039c2760
71035bcdc8  mov x28,x0
71035bcdcc  cbz x0,0x71035bce28
71035bcdd0  ldr x25,[x19, #0x10]
71035bcdd4  add x8,x28,#0x8
71035bcdd8  ldxr x9,[x8]
71035bcddc  add x9,x9,#0x1
71035bcde0  stxr w10,x9,[x8]
71035bcde4  cbnz w10,0x71035bcdd8
71035bcde8  ldaxr x9,[x8]
71035bcdec  sub x10,x9,#0x1
71035bcdf0  stlxr w11,x10,[x8]
71035bcdf4  cbnz w11,0x71035bcde8
71035bcdf8  cbnz x9,0x71035bce14
71035bcdfc  ldr x8,[x28]
71035bce00  ldr x8,[x8, #0x10]
71035bce04  mov x0,x28
71035bce08  blr x8
71035bce0c  mov x0,x28
71035bce10  bl 0x71039c2670
71035bce14  mov w27,wzr
71035bce18  b 0x71035bce30
71035bce1c  mov x25,xzr
71035bce20  mov x28,xzr
71035bce24  b 0x71035bce2c
71035bce28  mov x25,xzr
71035bce2c  mov w27,#0x1
71035bce30  ldr x8,[x25]
71035bce34  ldr x8,[x8, #0xb0]
71035bce38  mov x0,x25
71035bce3c  blr x8
71035bce40  tbz w0,#0x0,0x71035bd5f4
71035bce44  ldr x8,[x25]
71035bce48  ldr x8,[x8, #0x18]
71035bce4c  mov x0,x25
71035bce50  blr x8
71035bce54  stur x25,[x29, #-0x88]
71035bce58  str w27,[sp, #0x4]
71035bce5c  tbz w0,#0x0,0x71035bced4
71035bce60  ldr x8,[x25, #0x480]
71035bce64  cbz x8,0x71035bced4
71035bce68  ldr w9,[x8, #0x18]
71035bce6c  ldr x8,[x8]
71035bce70  orr w10,wzr,#0x70
71035bce74  madd x8,x9,x10,x8
71035bce78  ldp x22,x25,[x8]
71035bce7c  cbz x25,0x71035bcec0
71035bce80  add x8,x25,#0x8
71035bce84  ldxr x9,[x8]
71035bce88  add x9,x9,#0x1
71035bce8c  stxr w10,x9,[x8]
71035bce90  cbnz w10,0x71035bce84
71035bce94  ldaxr x9,[x8]
71035bce98  sub x10,x9,#0x1
71035bce9c  stlxr w11,x10,[x8]
71035bcea0  cbnz w11,0x71035bce94
71035bcea4  cbnz x9,0x71035bcec0
71035bcea8  ldr x8,[x25]
71035bceac  ldr x8,[x8, #0x10]
71035bceb0  mov x0,x25
71035bceb4  blr x8
71035bceb8  mov x0,x25
71035bcebc  bl 0x71039c2670
71035bcec0  cbz x22,0x71035bcecc
71035bcec4  ldr x8,[x22, #0x40]
71035bcec8  ldr x22,[x8, #0x68]
71035bcecc  ldur x25,[x29, #-0x88]
71035bced0  b 0x71035bced8
71035bced4  mov x22,xzr
71035bced8  ldr w8,[x22, #0x18]
71035bcedc  eor w1,w8,w8, ASR #0x1f
71035bcee0  add x2,x22,#0x20
71035bcee4  sub x0,x29,#0xd8
71035bcee8  bl 0x7103662550
71035bceec  ldr w8,[x22, #0x40]
71035bcef0  eor w1,w8,w8, ASR #0x1f
71035bcef4  add x2,x22,#0x48
71035bcef8  sub x0,x29,#0xf8
71035bcefc  bl 0x710388e720
71035bcf00  ldr x8,[x25]
71035bcf04  ldr x8,[x8, #0x158]
71035bcf08  ldur x27,[x29, #-0xd0]
71035bcf0c  mov x0,x25
71035bcf10  blr x8
71035bcf14  ldr q0,[x0]
71035bcf18  adrp x8,0x710426e000
71035bcf1c  add x8,x8,#0x67b
71035bcf20  str q0,[sp, #0x50]
71035bcf24  ldr q0,[x0, #0x10]
71035bcf28  orr w9,wzr,#0x1c
71035bcf2c  sub x1,x29,#0xb8
71035bcf30  str q0,[sp, #0x40]
71035bcf34  ldr q0,[x0, #0x20]
71035bcf38  str q0,[sp, #0x30]
71035bcf3c  ldr q0,[x0, #0x30]
71035bcf40  sturb w9,[x29, #-0xb8]
71035bcf44  ldur x9,[x8, #0x6]
71035bcf48  ldr x8,[x8]
71035bcf4c  mov x0,x21
71035bcf50  stur xzr,[x29, #-0xa8]
71035bcf54  stur x9,[x23, #0x7]
71035bcf58  stur x8,[x23, #0x1]
71035bcf5c  sturb wzr,[x29, #-0xa9]
71035bcf60  str q0,[sp, #0x20]
71035bcf64  bl 0x71035be5e0
71035bcf68  ldurb w8,[x29, #-0xb8]
71035bcf6c  tbz w8,#0x0,0x71035bcf90
71035bcf70  adrp x8,0x71052a8000
71035bcf74  ldur x25,[x29, #-0xa8]
71035bcf78  ldr x8,[x8, #0xa70]
71035bcf7c  cbz x8,0x71035bcf88
71035bcf80  mov x0,x25
71035bcf84  bl 0x71039c19b0
71035bcf88  mov x0,x25
71035bcf8c  bl 0x710392eb40
71035bcf90  cmp w24,#0x8
71035bcf94  b.cs 0x71035bd68c
71035bcf98  ldp q0,q2,[sp, #0xc0]
71035bcf9c  dup s14,v2.S[0x1]
71035bcfa0  mov w8,w24
71035bcfa4  dup s13,v0.S[0x1]
71035bcfa8  add x8,x20,x8, LSL #0x5
71035bcfac  ldr x9,[x8, #0x300]
71035bcfb0  fmov s1,0xbf800000
71035bcfb4  fmov s0,0x40800000
71035bcfb8  cbz x9,0x71035bcfd4
71035bcfbc  ldr x9,[x9]
71035bcfc0  ldr x10,[x8, #0x308]
71035bcfc4  cmp x9,x10
71035bcfc8  b.ne 0x71035bcfd4
71035bcfcc  ldr x24,[x8, #0x2f8]
71035bcfd0  b 0x71035bcfd8
71035bcfd4  mov x24,xzr
71035bcfd8  ldr x8,[x24]
71035bcfdc  ldr x9,[x8, #0x18]
71035bcfe0  sub x8,x29,#0xb8
71035bcfe4  mov x0,x24
71035bcfe8  str x28,[sp, #0x8]
71035bcfec  fsub s8,s2,s13
71035bcff0  fadd s9,s14,s1
71035bcff4  fadd s10,s2,s13
71035bcff8  fadd s11,s14,s0
71035bcffc  blr x9
71035bd000  ldur x25,[x29, #-0xb0]
71035bd004  bl 0x71002c48f0
71035bd008  bl 0x71002c48f0
71035bd00c  ldr x8,[x25]
71035bd010  ldr x1,[x0, #0x58]
71035bd014  mov x0,x25
71035bd018  mov x2,xzr
71035bd01c  mov x3,xzr
71035bd020  ldr x8,[x8, #0x10]
71035bd024  blr x8
71035bd028  cbz x0,0x71035bd094
71035bd02c  ldp q5,q6,[sp, #0xc0]
71035bd030  stp s8,s9,[x0]
71035bd034  str wzr,[x0, #0xc]
71035bd038  stp s10,s11,[x0, #0x10]
71035bd03c  dup s0,v6.S[0x2]
71035bd040  fsub s3,s0,s5
71035bd044  dup s1,v6.S[0x3]
71035bd048  fadd s2,s5,s12
71035bd04c  fadd s4,s0,s5
71035bd050  str s3,[x0, #0x8]
71035bd054  fadd s3,s13,s12
71035bd058  str s4,[x0, #0x18]
71035bd05c  str wzr,[x0, #0x1c]
71035bd060  stp s6,s14,[x0, #0x20]
71035bd064  stp s0,s1,[x0, #0x28]
71035bd068  stp s2,s3,[x0, #0x30]
71035bd06c  stp s5,s13,[x0, #0x38]
71035bd070  str wzr,[x0, #0x44]
71035bd074  ldur x25,[x29, #-0xb0]
71035bd078  bl 0x71002c48f0
71035bd07c  bl 0x71002c48f0
71035bd080  ldr x8,[x25]
71035bd084  ldr x1,[x0, #0x58]
71035bd088  mov x0,x25
71035bd08c  ldr x8,[x8, #0x18]
71035bd090  blr x8
71035bd094  ldr x8,[x24]
71035bd098  ldr x9,[x8, #0x20]
71035bd09c  add x8,sp,#0x168
71035bd0a0  mov x0,x24
71035bd0a4  str x26,[sp, #0x10]
71035bd0a8  blr x9
71035bd0ac  ldr x8,[sp, #0x178]
71035bd0b0  adrp x9,0x7105230000
71035bd0b4  add x9,x9,#0xac0
71035bd0b8  stp xzr,xzr,[sp, #0x198]
71035bd0bc  stp x9,xzr,[sp, #0x188]
71035bd0c0  cbz x8,0x71035bd0f8
71035bd0c4  ldr x8,[x8]
71035bd0c8  ldr x9,[sp, #0x180]
71035bd0cc  cmp x8,x9
71035bd0d0  b.ne 0x71035bd0f8
71035bd0d4  ldr x8,[sp, #0x170]
71035bd0d8  str x8,[sp, #0x190]
71035bd0dc  cbz x8,0x71035bd0f0
71035bd0e0  ldr x8,[x8, #0x8]
71035bd0e4  str x8,[sp, #0x198]
71035bd0e8  ldr x8,[x8]
71035bd0ec  b 0x71035bd0f4
71035bd0f0  str xzr,[sp, #0x198]
71035bd0f4  str x8,[sp, #0x1a0]
71035bd0f8  mov x8,#0x5
71035bd0fc  movk x8,#0x1, LSL #32
71035bd100  add x1,sp,#0x188
71035bd104  add x2,sp,#0x108
71035bd108  mov x0,x21
71035bd10c  str x8,[sp, #0x108]
71035bd110  add x20,sp,#0x108
71035bd114  bl 0x71035bf800
71035bd118  ldr x26,[x19, #0x30]
71035bd11c  cbz x26,0x71035bd5ec
71035bd120  ldp q3,q2,[sp, #0x40]
71035bd124  movi v0.2D,#0x0
71035bd128  fmul v1.4S,v2.4S,v0.4S
71035bd12c  mov v5.16B,v2.16B
71035bd130  fmla v5.4S,v0.4S,v3.4S
71035bd134  ldur x24,[x29, #-0xf0]
71035bd138  fadd v4.4S,v3.4S,v1.4S
71035bd13c  fmla v1.4S,v0.4S,v3.4S
71035bd140  ldp q3,q2,[sp, #0x20]
71035bd144  fmla v5.4S,v0.4S,v2.4S
71035bd148  fmla v4.4S,v0.4S,v2.4S
71035bd14c  fmla v5.4S,v0.4S,v3.4S
71035bd150  fmla v4.4S,v0.4S,v3.4S
71035bd154  add x8,x20,#0x8
71035bd158  orr x22,x20,#0x1
71035bd15c  str q5,[sp, #0xc0]
71035bd160  fadd v5.4S,v2.4S,v1.4S
71035bd164  fmla v1.4S,v0.4S,v2.4S
71035bd168  str q4,[sp, #0xd0]
71035bd16c  fmla v5.4S,v0.4S,v3.4S
71035bd170  fadd v0.4S,v3.4S,v1.4S
71035bd174  adrp x28,0x7105230000
71035bd178  add x28,x28,#0x2c0
71035bd17c  str x8,[sp, #0x18]
71035bd180  stp q0,q5,[sp, #0xa0]
71035bd184  ldp x25,x23,[x26, #0x10]
71035bd188  ldr x20,[x23, #0x8]
71035bd18c  add x1,x20,#0x30
71035bd190  mov x0,x24
71035bd194  bl 0x710389b550
71035bd198  ldp q17,q18,[sp, #0xc0]
71035bd19c  ldp q20,q19,[sp, #0xa0]
71035bd1a0  cbz x0,0x71035bd210
71035bd1a4  ldp q17,q18,[sp, #0xc0]
71035bd1a8  ldp q20,q19,[sp, #0xa0]
71035bd1ac  ldrsw x8,[x0, #0x30]
71035bd1b0  cmn w8,#0x1
71035bd1b4  b.eq 0x71035bd210
71035bd1b8  ldr x9,[x24, #0x18]
71035bd1bc  add x8,x9,x8, LSL #0x6
71035bd1c0  ldp q5,q4,[sp, #0x40]
71035bd1c4  ldp q0,q1,[x8]
71035bd1c8  ldp q2,q3,[x8, #0x20]
71035bd1cc  fmul v18.4S,v4.4S,v1.S[0x0]
71035bd1d0  fmla v18.4S,v5.4S,v1.S[0x1]
71035bd1d4  fmul v17.4S,v4.4S,v0.S[0x0]
71035bd1d8  fmla v17.4S,v5.4S,v0.S[0x1]
71035bd1dc  fmul v19.4S,v4.4S,v2.S[0x0]
71035bd1e0  fmla v19.4S,v5.4S,v2.S[0x1]
71035bd1e4  fmul v20.4S,v4.4S,v3.S[0x0]
71035bd1e8  fmla v20.4S,v5.4S,v3.S[0x1]
71035bd1ec  ldp q7,q6,[sp, #0x20]
71035bd1f0  fmla v18.4S,v6.4S,v1.S[0x2]
71035bd1f4  fmla v17.4S,v6.4S,v0.S[0x2]
71035bd1f8  fmla v19.4S,v6.4S,v2.S[0x2]
71035bd1fc  fmla v20.4S,v6.4S,v3.S[0x2]
71035bd200  fmla v18.4S,v7.4S,v1.S[0x3]
71035bd204  fmla v20.4S,v7.4S,v3.S[0x3]
71035bd208  fmla v17.4S,v7.4S,v0.S[0x3]
71035bd20c  fmla v19.4S,v7.4S,v2.S[0x3]
71035bd210  ldrb w8,[x23, #0xe8]
71035bd214  stp q18,q17,[sp, #0x80]
71035bd218  stp q20,q19,[sp, #0x60]
71035bd21c  cbz w8,0x71035bd248
71035bd220  ldur x0,[x29, #-0x88]
71035bd224  mov x1,x25
71035bd228  bl 0x71035e2c90
71035bd22c  tbz w0,#0x0,0x71035bd5e4
71035bd230  ldur x0,[x29, #-0x88]
71035bd234  mov w2,#0x1
71035bd238  mov x1,x25
71035bd23c  bl 0x71035e2960
71035bd240  ldp q18,q17,[sp, #0x80]
71035bd244  ldp q20,q19,[sp, #0x60]
71035bd248  movi d16,#0x0
71035bd24c  ldr s0,[x20, #0xac]
71035bd250  add x8,x20,#0xb0
71035bd254  add x9,x20,#0xb4
71035bd258  dup v5.4S,v17.S[0x1]
71035bd25c  dup v7.4S,v18.S[0x2]
71035bd260  ld1 {v0.S}[1],[x8]
71035bd264  mov v1.16B,v16.16B
71035bd268  ld1 {v1.S}[0],[x9]
71035bd26c  mov v2.16B,v16.16B
71035bd270  mov v0.D[0x1],v1.D[0x0]
71035bd274  ldr s1,[x20, #0xa0]
71035bd278  add x8,x20,#0xa4
71035bd27c  add x9,x20,#0xa8
71035bd280  dup v3.4S,v18.S[0x0]
71035bd284  ld1 {v1.S}[1],[x8]
71035bd288  dup v4.4S,v19.S[0x0]
71035bd28c  ld1 {v2.S}[0],[x9]
71035bd290  mov v1.D[0x1],v2.D[0x0]
71035bd294  movi v2.4S,#0x3f, LSL #24
71035bd298  fsub v1.4S,v0.4S,v1.4S
71035bd29c  fmul v1.4S,v1.4S,v2.4S
71035bd2a0  fsub v0.4S,v0.4S,v1.4S
71035bd2a4  fmul v6.4S,v18.4S,v0.4S
71035bd2a8  dup v6.4S,v6.S[0x1]
71035bd2ac  fmul v5.4S,v5.4S,v0.S[0x0]
71035bd2b0  fmul v7.4S,v7.4S,v0.S[0x1]
71035bd2b4  fmul v2.4S,v17.4S,v0.4S
71035bd2b8  fmul v3.4S,v3.4S,v0.S[0x1]
71035bd2bc  fmul v4.4S,v4.4S,v0.S[0x2]
71035bd2c0  fadd v5.4S,v5.4S,v6.4S
71035bd2c4  dup v6.4S,v19.S[0x1]
71035bd2c8  fmul v6.4S,v6.4S,v0.S[0x2]
71035bd2cc  fadd v5.4S,v6.4S,v5.4S
71035bd2d0  dup v6.4S,v20.S[0x1]
71035bd2d4  fadd v5.4S,v6.4S,v5.4S
71035bd2d8  dup v6.4S,v17.S[0x2]
71035bd2dc  fmul v6.4S,v6.4S,v0.S[0x0]
71035bd2e0  fmul v0.4S,v19.4S,v0.4S
71035bd2e4  dup v0.4S,v0.S[0x2]
71035bd2e8  fadd v6.4S,v6.4S,v7.4S
71035bd2ec  fadd v0.4S,v0.4S,v6.4S
71035bd2f0  dup v6.4S,v20.S[0x2]
71035bd2f4  fadd v0.4S,v6.4S,v0.4S
71035bd2f8  mov v6.16B,v16.16B
71035bd2fc  mov v6.S[0x0],v0.S[0x2]
71035bd300  dup v0.4S,v2.S[0x0]
71035bd304  dup v2.4S,v20.S[0x0]
71035bd308  fadd v0.4S,v0.4S,v3.4S
71035bd30c  fmov s3,wzr
71035bd310  mov v1.S[0x3],v3.S[0x0]
71035bd314  fabs v3.4S,v18.4S
71035bd318  fadd v0.4S,v4.4S,v0.4S
71035bd31c  fabs v4.4S,v19.4S
71035bd320  fadd v0.4S,v2.4S,v0.4S
71035bd324  fabs v2.4S,v17.4S
71035bd328  fmul v2.4S,v2.4S,v1.S[0x0]
71035bd32c  mov v0.S[0x1],v5.S[0x1]
71035bd330  fmla v2.4S,v3.4S,v1.S[0x1]
71035bd334  fmla v2.4S,v4.4S,v1.S[0x2]
71035bd338  mov v1.16B,v16.16B
71035bd33c  mov v0.D[0x1],v6.D[0x0]
71035bd340  mov v1.S[0x0],v2.S[0x2]
71035bd344  mov v2.D[0x1],v1.D[0x0]
71035bd348  fsub v1.4S,v0.4S,v2.4S
71035bd34c  fadd v0.4S,v2.4S,v0.4S
71035bd350  dup s3,v1.S[0x1]
71035bd354  fcmp s3,s11
71035bd358  dup s2,v0.S[0x1]
71035bd35c  fccmp s9,s2,#0x0,le
71035bd360  fccmp s8,s0,#0x0,le
71035bd364  fccmp s1,s10,#0x0,le
71035bd368  b.gt 0x71035bd5e4
71035bd36c  ldr w8,[x23, #0x20]
71035bd370  ldr x9,[x27, #0x360]
71035bd374  cmp x9,x8
71035bd378  b.ls 0x71035bd68c
71035bd37c  ldr x9,[x27, #0x358]
71035bd380  mov w25,#0x28
71035bd384  madd x2,x8,x25,x9
71035bd388  ldr w8,[x2], #0x8
71035bd38c  eor w1,w8,w8, ASR #0x1f
71035bd390  sub x0,x29,#0xb8
71035bd394  bl 0x710359c770
71035bd398  ldur x0,[x29, #-0xb0]
71035bd39c  ldr x8,[x0]
71035bd3a0  ldr x9,[x8, #0x28]
71035bd3a4  add x8,sp,#0x188
71035bd3a8  mov w1,wzr
71035bd3ac  blr x9
71035bd3b0  ldp x8,x9,[sp, #0x190]
71035bd3b4  add x1,sp,#0x148
71035bd3b8  stp x8,x9,[sp, #0x150]
71035bd3bc  ldr x8,[sp, #0x1a0]
71035bd3c0  mov x0,x21
71035bd3c4  mov w2,wzr
71035bd3c8  str x28,[sp, #0x148]
71035bd3cc  str x8,[sp, #0x160]
71035bd3d0  bl 0x71035bf0e0
71035bd3d4  ldr w8,[x27, #0x5f0]
71035bd3d8  eor w1,w8,w8, ASR #0x1f
71035bd3dc  add x2,x27,#0x5f8
71035bd3e0  sub x0,x29,#0xb8
71035bd3e4  bl 0x71035fd030
71035bd3e8  ldur x0,[x29, #-0xb0]
71035bd3ec  ldr x8,[x0]
71035bd3f0  ldr x9,[x8, #0x28]
71035bd3f4  add x8,sp,#0x168
71035bd3f8  mov w1,wzr
71035bd3fc  blr x9
71035bd400  ldp x8,x9,[sp, #0x170]
71035bd404  add x1,sp,#0x128
71035bd408  stp x8,x9,[sp, #0x130]
71035bd40c  ldr x8,[sp, #0x180]
71035bd410  mov w2,#0x1
71035bd414  mov x0,x21
71035bd418  str x28,[sp, #0x128]
71035bd41c  str x8,[sp, #0x140]
71035bd420  bl 0x71035bf0e0
71035bd424  ldr w8,[x23, #0x60]
71035bd428  ldr x9,[x27, #0x360]
71035bd42c  cmp x9,x8
71035bd430  b.ls 0x71035bd68c
71035bd434  ldr x9,[x27, #0x358]
71035bd438  madd x2,x8,x25,x9
71035bd43c  sub x0,x29,#0xb8
71035bd440  ldr w8,[x2], #0x8
71035bd444  eor w1,w8,w8, ASR #0x1f
71035bd448  bl 0x710359c770
71035bd44c  ldur x0,[x29, #-0xb0]
71035bd450  ldr x8,[x0]
71035bd454  ldr w1,[x19, #0x48]
71035bd458  ldr x9,[x8, #0x30]
71035bd45c  sub x8,x29,#0xb8
71035bd460  blr x9
71035bd464  sub x1,x29,#0xb8
71035bd468  mov x0,x21
71035bd46c  bl 0x71035bf300
71035bd470  ldr x0,[x23, #0xc8]
71035bd474  ldr x8,[x0]
71035bd478  ldr x9,[x8, #0x18]
71035bd47c  add x8,sp,#0x108
71035bd480  blr x9
71035bd484  ldr x25,[sp, #0x110]
71035bd488  bl 0x71002c48f0
71035bd48c  bl 0x71002c48f0
71035bd490  ldr x8,[x25]
71035bd494  ldr x1,[x0, #0x58]
71035bd498  mov x0,x25
71035bd49c  mov x2,xzr
71035bd4a0  mov x3,xzr
71035bd4a4  ldr x8,[x8, #0x10]
71035bd4a8  blr x8
71035bd4ac  cbz x0,0x71035bd50c
71035bd4b0  ldr q0,[sp, #0x90]
71035bd4b4  str d0,[x0]
71035bd4b8  ext v0.16B,v0.16B,v0.16B,0x8
71035bd4bc  str d0,[x0, #0x8]
71035bd4c0  ldr q0,[sp, #0x80]
71035bd4c4  str d0,[x0, #0x10]
71035bd4c8  ext v0.16B,v0.16B,v0.16B,0x8
71035bd4cc  str d0,[x0, #0x18]
71035bd4d0  ldp q1,q0,[sp, #0x60]
71035bd4d4  str d0,[x0, #0x20]
71035bd4d8  ext v0.16B,v0.16B,v0.16B,0x8
71035bd4dc  str d1,[x0, #0x30]
71035bd4e0  str d0,[x0, #0x28]
71035bd4e4  ext v0.16B,v1.16B,v1.16B,0x8
71035bd4e8  str d0,[x0, #0x38]
71035bd4ec  ldr x25,[sp, #0x110]
71035bd4f0  bl 0x71002c48f0
71035bd4f4  bl 0x71002c48f0
71035bd4f8  ldr x8,[x25]
71035bd4fc  ldr x1,[x0, #0x58]
71035bd500  mov x0,x25
71035bd504  ldr x8,[x8, #0x18]
71035bd508  blr x8
71035bd50c  ldr x0,[x23, #0xc8]
71035bd510  ldr x8,[x0]
71035bd514  ldr x9,[x8, #0x20]
71035bd518  add x8,sp,#0xe8
71035bd51c  blr x9
71035bd520  ldr x8,[sp, #0x18]
71035bd524  stp xzr,xzr,[x8, #0x8]
71035bd528  str xzr,[x8]
71035bd52c  ldr x8,[sp, #0xf8]
71035bd530  adrp x9,0x7105230000
71035bd534  add x9,x9,#0xac0
71035bd538  str x9,[sp, #0x108]
71035bd53c  cbz x8,0x71035bd574
71035bd540  ldr x8,[x8]
71035bd544  ldr x9,[sp, #0x100]
71035bd548  cmp x8,x9
71035bd54c  b.ne 0x71035bd574
71035bd550  ldr x8,[sp, #0xf0]
71035bd554  str x8,[sp, #0x110]
71035bd558  cbz x8,0x71035bd56c
71035bd55c  ldr x8,[x8, #0x8]
71035bd560  str x8,[sp, #0x118]
71035bd564  ldr x8,[x8]
71035bd568  b 0x71035bd570
71035bd56c  str xzr,[sp, #0x118]
71035bd570  str x8,[sp, #0x120]
71035bd574  mov w8,#0x5
71035bd578  add x1,sp,#0x108
71035bd57c  add x2,sp,#0xe0
71035bd580  mov x0,x21
71035bd584  str x8,[sp, #0xe0]
71035bd588  bl 0x71035bf800
71035bd58c  ldr w8,[x20, #0x50]
71035bd590  mov w11,#0xaaab
71035bd594  movk w11,#0xaaaa, LSL #16
71035bd598  mov w9,#0x24
71035bd59c  mul x8,x8,x11
71035bd5a0  add x1,sp,#0x108
71035bd5a4  stp xzr,xzr,[sp, #0x108]
71035bd5a8  strb w9,[sp, #0x108]
71035bd5ac  adrp x9,0x7104338000
71035bd5b0  add x9,x9,#0xbc8
71035bd5b4  mov x10,x9
71035bd5b8  ldr x9,[x9]
71035bd5bc  ldr x10,[x10, #0x8]
71035bd5c0  str xzr,[sp, #0x118]
71035bd5c4  stp x9,x10,[x22]
71035bd5c8  lsr x8,x8,#0x29
71035bd5cc  add w2,w8,#0x1
71035bd5d0  mov w8,#0x5343
71035bd5d4  mov x0,x21
71035bd5d8  strh w8,[x22, #0x10]
71035bd5dc  strb wzr,[sp, #0x11b]
71035bd5e0  bl 0x71035bfa20
71035bd5e4  ldr x26,[x26]
71035bd5e8  cbnz x26,0x71035bd184
71035bd5ec  ldp x28,x26,[sp, #0x8]
71035bd5f0  ldr w27,[sp, #0x4]
71035bd5f4  tbnz w27,#0x0,0x71035bd628
71035bd5f8  add x8,x28,#0x8
71035bd5fc  ldaxr x9,[x8]
71035bd600  sub x10,x9,#0x1
71035bd604  stlxr w11,x10,[x8]
71035bd608  cbnz w11,0x71035bd5fc
71035bd60c  cbnz x9,0x71035bd628
71035bd610  ldr x8,[x28]
71035bd614  ldr x8,[x8, #0x10]
71035bd618  mov x0,x28
71035bd61c  blr x8
71035bd620  mov x0,x28
71035bd624  bl 0x71039c2670
71035bd628  cbz x26,0x71035bd65c
71035bd62c  add x8,x26,#0x8
71035bd630  ldaxr x9,[x8]
71035bd634  sub x10,x9,#0x1
71035bd638  stlxr w11,x10,[x8]
71035bd63c  cbnz w11,0x71035bd630
71035bd640  cbnz x9,0x71035bd65c
71035bd644  ldr x8,[x26]
71035bd648  ldr x8,[x8, #0x10]
71035bd64c  mov x0,x26
71035bd650  blr x8
71035bd654  mov x0,x26
71035bd658  bl 0x71039c2670
71035bd65c  add sp,sp,#0x210
71035bd660  ldp d9,d8,[sp, #0x30]
71035bd664  ldp d11,d10,[sp, #0x20]
71035bd668  ldp d13,d12,[sp, #0x10]
71035bd66c  ldp x29,x30,[sp, #0x90]
71035bd670  ldp x20,x19,[sp, #0x80]
71035bd674  ldp x22,x21,[sp, #0x70]
71035bd678  ldp x24,x23,[sp, #0x60]
71035bd67c  ldp x26,x25,[sp, #0x50]
71035bd680  ldp x28,x27,[sp, #0x40]
71035bd684  ldr d14,[sp], #0xa0
71035bd688  ret
71035bd68c  bl 0x71039c2650
