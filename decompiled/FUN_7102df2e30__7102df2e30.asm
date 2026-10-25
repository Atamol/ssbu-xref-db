// addr:      7102df2e30
// offset:    0x2df2e30
// name:      FUN_7102df2e30
// mangled:   
// size:      1936

7102df2e30  sub sp,sp,#0x70
7102df2e34  stp x26,x25,[sp, #0x20]
7102df2e38  stp x24,x23,[sp, #0x30]
7102df2e3c  stp x22,x21,[sp, #0x40]
7102df2e40  stp x20,x19,[sp, #0x50]
7102df2e44  stp x29,x30,[sp, #0x60]
7102df2e48  add x29,sp,#0x60
7102df2e4c  mov w8,#0x6400
7102df2e50  strh w8,[x0, #0x28]
7102df2e54  mov w8,#0x1
7102df2e58  mov w9,#0xffffffff
7102df2e5c  mov x22,#-0x1
7102df2e60  strb wzr,[x0, #0x20]
7102df2e64  stp x2,x3,[x0]
7102df2e68  adrp x10,0x710446a000
7102df2e6c  stp x1,xzr,[x0, #0x10]
7102df2e70  ldr q2,[x10, #0x350]
7102df2e74  mov x19,x0
7102df2e78  str wzr,[x0, #0x24]
7102df2e7c  str xzr,[x0, #0x48]
7102df2e80  str wzr,[x0, #0x2c]
7102df2e84  strh w8,[x0, #0x30]
7102df2e88  str w9,[x0, #0x50]
7102df2e8c  stur x22,[x0, #0x54]
7102df2e90  strb wzr,[x0, #0x80]
7102df2e94  str wzr,[x0, #0x84]
7102df2e98  stp xzr,xzr,[x0, #0x38]
7102df2e9c  stp xzr,xzr,[x0, #0x70]
7102df2ea0  stp xzr,xzr,[x0, #0x60]
7102df2ea4  ldr x9,[x1, #0x310]
7102df2ea8  ldp x8,x9,[x9, #0xd0]
7102df2eac  cmp x8,x9
7102df2eb0  b.eq 0x7102df304c
7102df2eb4  mov x10,#0x4795
7102df2eb8  movk x10,#0x55d7, LSL #16
7102df2ebc  movk x10,#0x6, LSL #32
7102df2ec0  ldr w11,[x8, #0x8]
7102df2ec4  cmp w11,#0x1
7102df2ec8  b.hi 0x7102df2edc
7102df2ecc  ldr x23,[x8]
7102df2ed0  ldr x11,[x23, #0x68]
7102df2ed4  cmp x11,x10
7102df2ed8  b.eq 0x7102df2eec
7102df2edc  add x8,x8,#0x10
7102df2ee0  cmp x9,x8
7102df2ee4  b.ne 0x7102df2ec0
7102df2ee8  b 0x7102df304c
7102df2eec  str q2,[sp]
7102df2ef0  cbz x23,0x7102df2f00
7102df2ef4  ldr x8,[x23, #0xd8]
7102df2ef8  cbnz x8,0x7102df2f34
7102df2efc  b 0x7102df2f04
7102df2f00  cbz x23,0x7102df359c
7102df2f04  ldr x8,[x23, #0xd8]
7102df2f08  cbnz x8,0x7102df2f34
7102df2f0c  add x0,x23,#0x90
7102df2f10  mov x1,xzr
7102df2f14  bl 0x71026533a0
7102df2f18  mov x8,x0
7102df2f1c  ldr x0,[x23, #0xd8]
7102df2f20  str x8,[x23, #0xd8]
7102df2f24  cbz x0,0x7102df2f34
7102df2f28  ldr x8,[x0]
7102df2f2c  ldr x8,[x8, #0x8]
7102df2f30  blr x8
7102df2f34  ldr x20,[x23, #0xd8]
7102df2f38  ldr x8,[x20]
7102df2f3c  ldr x8,[x8, #0x10]
7102df2f40  mov x0,x20
7102df2f44  blr x8
7102df2f48  ldr x8,[x20, #0x8]
7102df2f4c  ldrb w9,[x8, #0xa8]
7102df2f50  cbz w9,0x7102df2fa0
7102df2f54  ldr x0,[x8, #0x48]
7102df2f58  ldr x8,[x0]
7102df2f5c  ldr x8,[x8, #0x10]
7102df2f60  mov w1,wzr
7102df2f64  blr x8
7102df2f68  ldr x8,[x20, #0x8]
7102df2f6c  ldrb w9,[x8, #0xa8]
7102df2f70  cbz w9,0x7102df2fa0
7102df2f74  ldr x21,[x8, #0x48]
7102df2f78  ldr x8,[x21]
7102df2f7c  ldr x8,[x8, #0x10]
7102df2f80  mov w1,#0x1
7102df2f84  mov x0,x21
7102df2f88  blr x8
7102df2f8c  ldr x8,[x21]
7102df2f90  ldr x8,[x8, #0x10]
7102df2f94  mov w1,#0x2
7102df2f98  mov x0,x21
7102df2f9c  blr x8
7102df2fa0  strb wzr,[x20, #0x20]
7102df2fa4  ldr q2,[sp]
7102df2fa8  ldr x8,[x23, #0xd8]
7102df2fac  cbz x8,0x7102df2fdc
7102df2fb0  ldr x8,[x8, #0x8]
7102df2fb4  ldr x0,[x8, #0x8]
7102df2fb8  ldr x8,[x0]
7102df2fbc  ldr x8,[x8, #0x18]
7102df2fc0  adrp x1,0x71043de000
7102df2fc4  add x1,x1,#0x38a
7102df2fc8  blr x8
7102df2fcc  mov w20,w0
7102df2fd0  ldr x8,[x23, #0xd8]
7102df2fd4  cbnz x8,0x7102df2fec
7102df2fd8  b 0x7102df3034
7102df2fdc  cbz x23,0x7102df304c
7102df2fe0  mov w20,#0xffffffff
7102df2fe4  ldr x8,[x23, #0xd8]
7102df2fe8  cbz x8,0x7102df3034
7102df2fec  ldr x8,[x8, #0x8]
7102df2ff0  ldr x0,[x8, #0x8]
7102df2ff4  ldr x8,[x0]
7102df2ff8  ldr x8,[x8, #0x10]
7102df2ffc  blr x8
7102df3000  cmp w0,w20
7102df3004  b.ls 0x7102df3034
7102df3008  ldr x8,[x23, #0xd8]
7102df300c  ldr x8,[x8, #0x8]
7102df3010  ldr x0,[x8, #0x48]
7102df3014  ldr x8,[x0]
7102df3018  ldr x8,[x8, #0x38]
7102df301c  mov w1,wzr
7102df3020  blr x8
7102df3024  mov w8,w20
7102df3028  add x8,x1,x8, LSL #0x6
7102df302c  add x8,x8,#0x30
7102df3030  b 0x7102df3048
7102df3034  ldr x0,[x23, #0x90]
7102df3038  ldr x8,[x0]
7102df303c  ldr x8,[x8, #0x158]
7102df3040  blr x8
7102df3044  add x8,x0,#0x30
7102df3048  ldr q2,[x8]
7102df304c  fmov s1,wzr
7102df3050  ext v0.16B,v2.16B,v2.16B,0x8
7102df3054  ldr x8,[x19, #0x10]
7102df3058  mov v0.S[0x1],v1.S[0x0]
7102df305c  mov x23,#0x6bf7
7102df3060  movk x23,#0x5a94, LSL #16
7102df3064  movk x23,#0xe, LSL #32
7102df3068  mov v2.D[0x1],v0.D[0x0]
7102df306c  str q2,[x19, #0x60]
7102df3070  ldr x9,[x8, #0x310]
7102df3074  ldp x8,x9,[x9, #0xd0]
7102df3078  cmp x8,x9
7102df307c  b.eq 0x7102df30a8
7102df3080  ldr w10,[x8, #0x8]
7102df3084  cmp w10,#0x1
7102df3088  b.hi 0x7102df309c
7102df308c  ldr x24,[x8]
7102df3090  ldr x10,[x24, #0x68]
7102df3094  cmp x10,x23
7102df3098  b.eq 0x7102df3328
7102df309c  add x8,x8,#0x10
7102df30a0  cmp x9,x8
7102df30a4  b.ne 0x7102df3080
7102df30a8  str x22,[x19, #0x50]
7102df30ac  mov w0,#0xffffffff
7102df30b0  mov w8,#0x1
7102df30b4  strb w8,[x19, #0x80]
7102df30b8  ldr x8,[x19, #0x10]
7102df30bc  str w0,[x19, #0x58]
7102df30c0  ldr x8,[x8, #0x310]
7102df30c4  ldp x9,x10,[x8, #0xd0]
7102df30c8  cmp x9,x10
7102df30cc  b.eq 0x7102df30f8
7102df30d0  ldr w8,[x9, #0x8]
7102df30d4  cmp w8,#0x1
7102df30d8  b.hi 0x7102df30ec
7102df30dc  ldr x8,[x9]
7102df30e0  ldr x11,[x8, #0x68]
7102df30e4  cmp x11,x23
7102df30e8  b.eq 0x7102df3368
7102df30ec  add x9,x9,#0x10
7102df30f0  cmp x10,x9
7102df30f4  b.ne 0x7102df30d0
7102df30f8  str xzr,[x19, #0x18]
7102df30fc  ldr x8,[x19, #0x10]
7102df3100  ldr x8,[x8, #0x300]
7102df3104  ldr x8,[x8, #0x18]
7102df3108  ldr x8,[x8]
7102df310c  mov x9,#0x82c8
7102df3110  movk x9,#0xb3ec, LSL #16
7102df3114  movk x9,#0xa, LSL #32
7102df3118  b 0x7102df3120
7102df311c  add x8,x8,#0x8
7102df3120  ldr x10,[x8]
7102df3124  ldr x11,[x10, #0xa0]
7102df3128  and x11,x11,#0xffffffffff
7102df312c  cmp x11,x9
7102df3130  b.ne 0x7102df311c
7102df3134  ldr x8,[x10, #0x110]
7102df3138  str x8,[x19, #0x40]
7102df313c  mov x9,x8
7102df3140  ldr x20,[x9], #0x8
7102df3144  ldr x21,[x9]
7102df3148  cmp x20,x21
7102df314c  b.eq 0x7102df31a0
7102df3150  mov w23,#0x1
7102df3154  ldr x8,[x20]
7102df3158  ldr x9,[x8, #0x8]
7102df315c  strb w23,[x8, #0x128]
7102df3160  cbz x9,0x7102df3174
7102df3164  str x22,[x9, #0xd8]
7102df3168  ldr x0,[x8, #0x8]
7102df316c  mov w1,wzr
7102df3170  bl 0x7100532bc0
7102df3174  add x20,x20,#0x8
7102df3178  cmp x21,x20
7102df317c  b.ne 0x7102df3154
7102df3180  ldr x8,[x19, #0x40]
7102df3184  ldr x10,[x8]
7102df3188  mov x9,x8
7102df318c  ldr x11,[x9, #0x8]!
7102df3190  cmp x10,x11
7102df3194  b.eq 0x7102df31a0
7102df3198  ldr x10,[x10]
7102df319c  b 0x7102df31a4
7102df31a0  mov x10,xzr
7102df31a4  str x10,[x19, #0x48]
7102df31a8  ldr x8,[x8]
7102df31ac  ldr x9,[x9]
7102df31b0  cmp x8,x9
7102df31b4  b.eq 0x7102df32c0
7102df31b8  ldr q0,[x19, #0x60]
7102df31bc  movi d2,#0x0
7102df31c0  adrp x10,0x7104472000
7102df31c4  ldr s3,[x10, #0x6e0]
7102df31c8  fmov s4,wzr
7102df31cc  adrp x11,0x7104472000
7102df31d0  ldr s5,[x11, #0x970]
7102df31d4  fmov s6,0xbf800000
7102df31d8  mov w10,#0x1
7102df31dc  mov v1.16B,v0.16B
7102df31e0  mov v1.D[0x1],v2.D[0x0]
7102df31e4  ldr s2,[x19, #0x78]
7102df31e8  fmul s2,s2,s3
7102df31ec  fabd s4,s4,s2
7102df31f0  dup s3,v0.S[0x1]
7102df31f4  fmov s7,0x3f800000
7102df31f8  ldr x11,[x8]
7102df31fc  ldr x13,[x11, #0x8]
7102df3200  ldrb w14,[x13, #0xe7]
7102df3204  ldrb w13,[x13, #0xe8]
7102df3208  ldrb w12,[x11, #0x128]
7102df320c  cmp w12,#0x0
7102df3210  orr w13,w13,w14
7102df3214  and w12,w13,#0xff
7102df3218  ccmp w12,#0x0,#0x0,ne
7102df321c  b.eq 0x7102df3228
7102df3220  strb w10,[x11, #0x129]
7102df3224  b 0x7102df324c
7102df3228  ldr q16,[x11, #0x10]
7102df322c  fabd s17,s16,s0
7102df3230  fcmp s17,s5
7102df3234  b.gt 0x7102df3248
7102df3238  dup s16,v16.S[0x1]
7102df323c  fabd s16,s16,s3
7102df3240  fcmp s16,s5
7102df3244  b.le 0x7102df3250
7102df3248  strb w10,[x11, #0x12a]
7102df324c  str q1,[x11, #0x10]
7102df3250  fcmp s4,s5
7102df3254  b.pl 0x7102df3268
7102df3258  ldr s16,[x11, #0x30]
7102df325c  fabd s16,s16,s2
7102df3260  fcmp s16,s5
7102df3264  b.mi 0x7102df3270
7102df3268  str s2,[x11, #0x30]
7102df326c  strb w10,[x11, #0x129]
7102df3270  ldr q16,[x11, #0x50]
7102df3274  fadd s17,s16,s6
7102df3278  fabs s17,s17
7102df327c  fcmp s17,s5
7102df3280  b.mi 0x7102df3290
7102df3284  mov v16.S[0x0],v7.S[0x0]
7102df3288  strb w10,[x11, #0x129]
7102df328c  str q16,[x11, #0x50]
7102df3290  dup s17,v16.S[0x1]
7102df3294  fadd s17,s17,s6
7102df3298  fabs s17,s17
7102df329c  fcmp s17,s5
7102df32a0  b.mi 0x7102df32b0
7102df32a4  mov v16.S[0x1],v7.S[0x0]
7102df32a8  strb w10,[x11, #0x129]
7102df32ac  str q16,[x11, #0x50]
7102df32b0  add x8,x8,#0x8
7102df32b4  cmp x9,x8
7102df32b8  b.ne 0x7102df31f8
7102df32bc  ldr x10,[x19, #0x48]
7102df32c0  ldr x8,[x10, #0x8]
7102df32c4  mov w9,#0x66f3
7102df32c8  movk w9,#0x3edf, LSL #16
7102df32cc  str w9,[x8, #0xc4]
7102df32d0  ldr x8,[x19, #0x18]
7102df32d4  cbz x8,0x7102df330c
7102df32d8  ldrb w9,[x8, #0xe0]
7102df32dc  cbz w9,0x7102df330c
7102df32e0  adrp x9,0x7104468000
7102df32e4  ldr q0,[x9, #0xba0]
7102df32e8  adrp x1,0x710437a000
7102df32ec  add x1,x1,#0xa07
7102df32f0  orr w2,wzr,#0x3
7102df32f4  add x3,sp,#0x10
7102df32f8  str q0,[sp, #0x10]
7102df32fc  ldr x0,[x8, #0x90]
7102df3300  ldr x8,[x0]
7102df3304  ldr x8,[x8, #0x268]
7102df3308  blr x8
7102df330c  ldp x29,x30,[sp, #0x60]
7102df3310  ldp x20,x19,[sp, #0x50]
7102df3314  ldp x22,x21,[sp, #0x40]
7102df3318  ldp x24,x23,[sp, #0x30]
7102df331c  ldp x26,x25,[sp, #0x20]
7102df3320  add sp,sp,#0x70
7102df3324  ret
7102df3328  cbz x24,0x7102df3494
7102df332c  ldr x8,[x24, #0xd8]
7102df3330  cbnz x8,0x7102df335c
7102df3334  add x0,x24,#0x90
7102df3338  mov x1,xzr
7102df333c  bl 0x71026533a0
7102df3340  mov x8,x0
7102df3344  ldr x0,[x24, #0xd8]
7102df3348  str x8,[x24, #0xd8]
7102df334c  cbz x0,0x7102df335c
7102df3350  ldr x8,[x0]
7102df3354  ldr x8,[x8, #0x8]
7102df3358  blr x8
7102df335c  cmp x24,#0x0
7102df3360  cset w25,eq
7102df3364  b 0x7102df34a0
7102df3368  str x8,[x19, #0x18]
7102df336c  cbz x8,0x7102df33c4
7102df3370  add x0,x8,#0x108
7102df3374  mov w9,#0x1
7102df3378  strb w9,[x8, #0x110]
7102df337c  bl 0x71025e9d50
7102df3380  ldr x8,[x19, #0x18]
7102df3384  cbz x8,0x7102df30fc
7102df3388  ldrb w9,[x8, #0xe0]
7102df338c  cbz w9,0x7102df33a0
7102df3390  ldr x9,[x8, #0xc8]
7102df3394  cbz x9,0x7102df33a0
7102df3398  mov w10,#0x101
7102df339c  strh w10,[x9, #0x30]
7102df33a0  ldr x9,[x8, #0xd8]
7102df33a4  cbz x9,0x7102df33b0
7102df33a8  mov w10,#0x1
7102df33ac  strb w10,[x9, #0x21]
7102df33b0  ldrb w9,[x8, #0xe0]
7102df33b4  cbz w9,0x7102df33c0
7102df33b8  ldr x8,[x8, #0xb0]
7102df33bc  strb wzr,[x8, #0x10]
7102df33c0  ldr x8,[x19, #0x18]
7102df33c4  cbz x8,0x7102df30fc
7102df33c8  ldrb w9,[x8, #0xe0]
7102df33cc  cbz w9,0x7102df33dc
7102df33d0  ldr x9,[x8, #0xc8]
7102df33d4  cbz x9,0x7102df33dc
7102df33d8  strh wzr,[x9, #0x32]
7102df33dc  ldr x8,[x8, #0xd8]
7102df33e0  cbz x8,0x7102df33e8
7102df33e4  strb wzr,[x8, #0x22]
7102df33e8  ldr x21,[x19, #0x18]
7102df33ec  cbz x21,0x7102df30fc
7102df33f0  ldrb w8,[x21, #0xe0]
7102df33f4  cbz w8,0x7102df35a8
7102df33f8  ldr x23,[x21, #0xc8]
7102df33fc  cbz x23,0x7102df35a8
7102df3400  ldp x25,x26,[x23, #0x18]
7102df3404  mov w24,#0x41200000
7102df3408  str w24,[x23, #0x3c]
7102df340c  cmp x25,x26
7102df3410  b.eq 0x7102df35a4
7102df3414  mov w20,#0xa
7102df3418  ldr x0,[x25], #0x8
7102df341c  ldr x8,[x0]
7102df3420  ldr x8,[x8, #0x20]
7102df3424  mov w1,w20
7102df3428  mov w2,wzr
7102df342c  blr x8
7102df3430  cmp x26,x25
7102df3434  b.ne 0x7102df3418
7102df3438  ldp x25,x26,[x23, #0x18]
7102df343c  cmp x25,x26
7102df3440  str w24,[x23, #0x40]
7102df3444  b.eq 0x7102df35a8
7102df3448  mov w20,#0xa
7102df344c  ldr x0,[x25], #0x8
7102df3450  ldr x8,[x0]
7102df3454  ldr x8,[x8, #0x20]
7102df3458  mov w2,#0x1
7102df345c  mov w1,w20
7102df3460  blr x8
7102df3464  cmp x26,x25
7102df3468  b.ne 0x7102df344c
7102df346c  ldp x20,x23,[x23, #0x18]
7102df3470  cmp x20,x23
7102df3474  b.eq 0x7102df35a8
7102df3478  ldr x0,[x20], #0x8
7102df347c  ldr x8,[x0]
7102df3480  ldr x8,[x8, #0x38]
7102df3484  blr x8
7102df3488  cmp x23,x20
7102df348c  b.ne 0x7102df3478
7102df3490  b 0x7102df35a8
7102df3494  cmp x24,#0x0
7102df3498  cset w25,eq
7102df349c  cbz x24,0x7102df30a8
7102df34a0  ldr x20,[x24, #0xd8]
7102df34a4  ldr x8,[x20]
7102df34a8  ldr x8,[x8, #0x10]
7102df34ac  mov x0,x20
7102df34b0  blr x8
7102df34b4  ldr x8,[x20, #0x8]
7102df34b8  ldrb w9,[x8, #0xa8]
7102df34bc  cbz w9,0x7102df350c
7102df34c0  ldr x0,[x8, #0x48]
7102df34c4  ldr x8,[x0]
7102df34c8  ldr x8,[x8, #0x10]
7102df34cc  mov w1,wzr
7102df34d0  blr x8
7102df34d4  ldr x8,[x20, #0x8]
7102df34d8  ldrb w9,[x8, #0xa8]
7102df34dc  cbz w9,0x7102df350c
7102df34e0  ldr x21,[x8, #0x48]
7102df34e4  ldr x8,[x21]
7102df34e8  ldr x8,[x8, #0x10]
7102df34ec  mov w1,#0x1
7102df34f0  mov x0,x21
7102df34f4  blr x8
7102df34f8  ldr x8,[x21]
7102df34fc  ldr x8,[x8, #0x10]
7102df3500  mov w1,#0x2
7102df3504  mov x0,x21
7102df3508  blr x8
7102df350c  strb wzr,[x20, #0x20]
7102df3510  tbnz w25,#0x0,0x7102df30a8
7102df3514  ldr x8,[x24, #0xd8]
7102df3518  cbz x8,0x7102df353c
7102df351c  ldr x8,[x8, #0x8]
7102df3520  ldr x0,[x8, #0x8]
7102df3524  ldr x8,[x0]
7102df3528  ldr x8,[x8, #0x18]
7102df352c  adrp x1,0x71042c3000
7102df3530  add x1,x1,#0x108
7102df3534  blr x8
7102df3538  b 0x7102df3540
7102df353c  mov w0,#0xffffffff
7102df3540  str w0,[x19, #0x50]
7102df3544  ldr x8,[x24, #0xd8]
7102df3548  cbz x8,0x7102df356c
7102df354c  ldr x8,[x8, #0x8]
7102df3550  ldr x0,[x8, #0x8]
7102df3554  ldr x8,[x0]
7102df3558  ldr x8,[x8, #0x18]
7102df355c  adrp x1,0x7104328000
7102df3560  add x1,x1,#0x30a
7102df3564  blr x8
7102df3568  b 0x7102df3570
7102df356c  mov w0,#0xffffffff
7102df3570  str w0,[x19, #0x54]
7102df3574  ldr x8,[x24, #0xd8]
7102df3578  cbz x8,0x7102df30ac
7102df357c  ldr x8,[x8, #0x8]
7102df3580  ldr x0,[x8, #0x8]
7102df3584  ldr x8,[x0]
7102df3588  ldr x8,[x8, #0x18]
7102df358c  adrp x1,0x71043ee000
7102df3590  add x1,x1,#0xd4e
7102df3594  blr x8
7102df3598  b 0x7102df30b0
7102df359c  ldr q2,[sp]
7102df35a0  b 0x7102df304c
7102df35a4  str w24,[x23, #0x40]
7102df35a8  ldr x0,[x21, #0xd8]
7102df35ac  cbz x0,0x7102df30fc
7102df35b0  mov w1,#0xa
7102df35b4  mov w2,#0x1
7102df35b8  bl 0x71025ee580
7102df35bc  b 0x7102df30fc
