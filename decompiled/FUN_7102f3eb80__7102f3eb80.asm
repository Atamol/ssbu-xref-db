// addr:      7102f3eb80
// offset:    0x2f3eb80
// name:      FUN_7102f3eb80
// mangled:   
// size:      876

7102f3eb80  sub sp,sp,#0x40
7102f3eb84  str x21,[sp, #0x10]
7102f3eb88  stp x20,x19,[sp, #0x20]
7102f3eb8c  stp x29,x30,[sp, #0x30]
7102f3eb90  add x29,sp,#0x30
7102f3eb94  ldr w8,[x0, #0x1c]
7102f3eb98  mov x19,x0
7102f3eb9c  cmp w8,#0x4
7102f3eba0  b.hi 0x7102f3ed0c
7102f3eba4  adrp x9,0x7104521000
7102f3eba8  add x9,x9,#0x93c
7102f3ebac  ldrsw x8,[x9, x8, LSL #0x2]
7102f3ebb0  add x8,x8,x9
7102f3ebb4  br x8
7102f3ebb8  mov w8,#0x2
7102f3ebbc  str w8,[x19, #0x1c]
7102f3ebc0  b 0x7102f3ed0c
7102f3ebc4  ldr x0,[x19, #0x8]
7102f3ebc8  adrp x1,0x71043ee000
7102f3ebcc  add x1,x1,#0xe10
7102f3ebd0  bl 0x7102610070
7102f3ebd4  ldr x0,[x19, #0x8]
7102f3ebd8  fmov s0,wzr
7102f3ebdc  mov w1,#0x1
7102f3ebe0  bl 0x710260fdd0
7102f3ebe4  ldr x8,[x19, #0x8]
7102f3ebe8  cbz x8,0x7102f3ec48
7102f3ebec  ldrb w9,[x8, #0xe0]
7102f3ebf0  cbz w9,0x7102f3ec00
7102f3ebf4  ldr x9,[x8, #0xc8]
7102f3ebf8  cbz x9,0x7102f3ec00
7102f3ebfc  strh wzr,[x9, #0x32]
7102f3ec00  ldr x8,[x8, #0xd8]
7102f3ec04  cbz x8,0x7102f3ec0c
7102f3ec08  strb wzr,[x8, #0x22]
7102f3ec0c  ldr x8,[x19, #0x8]
7102f3ec10  cbz x8,0x7102f3ec48
7102f3ec14  ldrb w9,[x8, #0xe0]
7102f3ec18  cbz w9,0x7102f3ec28
7102f3ec1c  ldr x9,[x8, #0xc8]
7102f3ec20  cbz x9,0x7102f3ec28
7102f3ec24  strh wzr,[x9, #0x30]
7102f3ec28  ldr x9,[x8, #0xd8]
7102f3ec2c  cbz x9,0x7102f3ec34
7102f3ec30  strb wzr,[x9, #0x21]
7102f3ec34  ldrb w9,[x8, #0xe0]
7102f3ec38  cbz w9,0x7102f3ec48
7102f3ec3c  ldr x8,[x8, #0xb0]
7102f3ec40  mov w9,#0x1
7102f3ec44  strb w9,[x8, #0x10]
7102f3ec48  ldr x8,[x19]
7102f3ec4c  ldr x8,[x8, #0x28]
7102f3ec50  mov x0,x19
7102f3ec54  blr x8
7102f3ec58  orr w8,wzr,#0x3
7102f3ec5c  str w8,[x19, #0x1c]
7102f3ec60  b 0x7102f3ed0c
7102f3ec64  ldrb w8,[x19, #0x48]
7102f3ec68  cbnz w8,0x7102f3ec8c
7102f3ec6c  ldr x8,[x19, #0x50]
7102f3ec70  ldr x8,[x8, #0x308]
7102f3ec74  ldr s0,[x8, #0x124]
7102f3ec78  ldr s1,[x19, #0x34]
7102f3ec7c  fcmp s0,s1
7102f3ec80  b.le 0x7102f3ec8c
7102f3ec84  mov w8,#0x1
7102f3ec88  strb w8,[x19, #0x48]
7102f3ec8c  ldr x0,[x19, #0x8]
7102f3ec90  bl 0x710260ffb0
7102f3ec94  tbz w0,#0x0,0x7102f3ed0c
7102f3ec98  ldr x8,[x19, #0x8]
7102f3ec9c  cbz x8,0x7102f3ecd8
7102f3eca0  ldrb w9,[x8, #0xe0]
7102f3eca4  cbz w9,0x7102f3ecb8
7102f3eca8  ldr x9,[x8, #0xc8]
7102f3ecac  cbz x9,0x7102f3ecb8
7102f3ecb0  mov w10,#0x101
7102f3ecb4  strh w10,[x9, #0x30]
7102f3ecb8  ldr x9,[x8, #0xd8]
7102f3ecbc  cbz x9,0x7102f3ecc8
7102f3ecc0  mov w10,#0x1
7102f3ecc4  strb w10,[x9, #0x21]
7102f3ecc8  ldrb w9,[x8, #0xe0]
7102f3eccc  cbz w9,0x7102f3ecd8
7102f3ecd0  ldr x8,[x8, #0xb0]
7102f3ecd4  strb wzr,[x8, #0x10]
7102f3ecd8  mov w8,#0x4
7102f3ecdc  str w8,[x19, #0x1c]
7102f3ece0  mov w8,#0x1
7102f3ece4  strb w8,[x19, #0x48]
7102f3ece8  b 0x7102f3ed0c
7102f3ecec  ldr x8,[x19, #0x8]
7102f3ecf0  cbz x8,0x7102f3ed00
7102f3ecf4  add x0,x8,#0x108
7102f3ecf8  strb wzr,[x8, #0x110]
7102f3ecfc  bl 0x71025e9d50
7102f3ed00  orr w8,wzr,#0x3
7102f3ed04  str x8,[x19, #0x18]
7102f3ed08  strb wzr,[x19, #0x48]
7102f3ed0c  adrp x8,0x710446a000
7102f3ed10  ldr q7,[x8, #0x350]
7102f3ed14  ldr x21,[x19, #0x8]
7102f3ed18  cbz x21,0x7102f3edcc
7102f3ed1c  ldr x8,[x21, #0xd8]
7102f3ed20  cbz x8,0x7102f3ed60
7102f3ed24  ldr x8,[x8, #0x8]
7102f3ed28  adrp x1,0x710428f000
7102f3ed2c  add x1,x1,#0xca2
7102f3ed30  str q7,[sp]
7102f3ed34  ldr x0,[x8, #0x8]
7102f3ed38  ldr x8,[x0]
7102f3ed3c  ldr x8,[x8, #0x18]
7102f3ed40  blr x8
7102f3ed44  ldr q7,[sp]
7102f3ed48  ldr x21,[x19, #0x8]
7102f3ed4c  cbz x21,0x7102f3edcc
7102f3ed50  mov w20,w0
7102f3ed54  ldr x8,[x21, #0xd8]
7102f3ed58  cbnz x8,0x7102f3ed6c
7102f3ed5c  b 0x7102f3edb4
7102f3ed60  mov w20,#0xffffffff
7102f3ed64  ldr x8,[x21, #0xd8]
7102f3ed68  cbz x8,0x7102f3edb4
7102f3ed6c  ldr x8,[x8, #0x8]
7102f3ed70  ldr x0,[x8, #0x8]
7102f3ed74  ldr x8,[x0]
7102f3ed78  ldr x8,[x8, #0x10]
7102f3ed7c  blr x8
7102f3ed80  cmp w0,w20
7102f3ed84  b.ls 0x7102f3edb4
7102f3ed88  ldr x8,[x21, #0xd8]
7102f3ed8c  ldr x8,[x8, #0x8]
7102f3ed90  ldr x0,[x8, #0x48]
7102f3ed94  ldr x8,[x0]
7102f3ed98  ldr x8,[x8, #0x38]
7102f3ed9c  mov w1,wzr
7102f3eda0  blr x8
7102f3eda4  mov w8,w20
7102f3eda8  add x8,x1,x8, LSL #0x6
7102f3edac  add x8,x8,#0x30
7102f3edb0  b 0x7102f3edc8
7102f3edb4  ldr x0,[x21, #0x90]
7102f3edb8  ldr x8,[x0]
7102f3edbc  ldr x8,[x8, #0x158]
7102f3edc0  blr x8
7102f3edc4  add x8,x0,#0x30
7102f3edc8  ldr q7,[x8]
7102f3edcc  fmov s0,wzr
7102f3edd0  ext v1.16B,v7.16B,v7.16B,0x8
7102f3edd4  ldr x9,[x19, #0x10]
7102f3edd8  mov v1.S[0x1],v0.S[0x0]
7102f3eddc  mov v0.16B,v7.16B
7102f3ede0  mov v0.D[0x1],v1.D[0x0]
7102f3ede4  str q0,[x19, #0x30]
7102f3ede8  cbz x9,0x7102f3eed8
7102f3edec  ldp x8,x9,[x9]
7102f3edf0  cmp x8,x9
7102f3edf4  b.eq 0x7102f3eed8
7102f3edf8  movi d1,#0x0
7102f3edfc  mov v0.16B,v7.16B
7102f3ee00  adrp x11,0x7104472000
7102f3ee04  mov v0.D[0x1],v1.D[0x0]
7102f3ee08  ldr s2,[x11, #0x970]
7102f3ee0c  dup s1,v7.S[0x1]
7102f3ee10  fmov s3,0xbf800000
7102f3ee14  fmov s4,0x3f800000
7102f3ee18  mov w10,#0x1
7102f3ee1c  ldr x11,[x8]
7102f3ee20  ldr x13,[x11, #0x8]
7102f3ee24  ldrb w14,[x13, #0xe7]
7102f3ee28  ldrb w13,[x13, #0xe8]
7102f3ee2c  ldrb w12,[x11, #0x128]
7102f3ee30  cmp w12,#0x0
7102f3ee34  orr w13,w13,w14
7102f3ee38  and w12,w13,#0xff
7102f3ee3c  ccmp w12,#0x0,#0x0,ne
7102f3ee40  b.eq 0x7102f3ee4c
7102f3ee44  strb w10,[x11, #0x129]
7102f3ee48  b 0x7102f3ee70
7102f3ee4c  ldr q5,[x11, #0x10]
7102f3ee50  fabd s6,s5,s7
7102f3ee54  fcmp s6,s2
7102f3ee58  b.gt 0x7102f3ee6c
7102f3ee5c  dup s5,v5.S[0x1]
7102f3ee60  fabd s5,s5,s1
7102f3ee64  fcmp s5,s2
7102f3ee68  b.le 0x7102f3ee74
7102f3ee6c  strb w10,[x11, #0x12a]
7102f3ee70  str q0,[x11, #0x10]
7102f3ee74  ldr s5,[x11, #0x30]
7102f3ee78  fabs s5,s5
7102f3ee7c  fcmp s5,s2
7102f3ee80  b.mi 0x7102f3ee8c
7102f3ee84  str wzr,[x11, #0x30]
7102f3ee88  strb w10,[x11, #0x129]
7102f3ee8c  ldr q5,[x11, #0x50]
7102f3ee90  fadd s6,s5,s3
7102f3ee94  fabs s6,s6
7102f3ee98  fcmp s6,s2
7102f3ee9c  b.mi 0x7102f3eeac
7102f3eea0  mov v5.S[0x0],v4.S[0x0]
7102f3eea4  strb w10,[x11, #0x129]
7102f3eea8  str q5,[x11, #0x50]
7102f3eeac  dup s6,v5.S[0x1]
7102f3eeb0  fadd s6,s6,s3
7102f3eeb4  fabs s6,s6
7102f3eeb8  fcmp s6,s2
7102f3eebc  b.mi 0x7102f3eecc
7102f3eec0  mov v5.S[0x1],v4.S[0x0]
7102f3eec4  strb w10,[x11, #0x129]
7102f3eec8  str q5,[x11, #0x50]
7102f3eecc  add x8,x8,#0x8
7102f3eed0  cmp x9,x8
7102f3eed4  b.ne 0x7102f3ee1c
7102f3eed8  ldp x29,x30,[sp, #0x30]
7102f3eedc  ldr x21,[sp, #0x10]
7102f3eee0  ldp x20,x19,[sp, #0x20]
7102f3eee4  add sp,sp,#0x40
7102f3eee8  ret
