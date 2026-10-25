// addr:      7101df2d40
// offset:    0x1df2d40
// name:      FUN_7101df2d40
// mangled:   
// size:      2192

7101df2d40  sub sp,sp,#0xf0
7101df2d44  str d8,[sp, #0x80]
7101df2d48  stp x28,x27,[sp, #0x90]
7101df2d4c  stp x26,x25,[sp, #0xa0]
7101df2d50  stp x24,x23,[sp, #0xb0]
7101df2d54  stp x22,x21,[sp, #0xc0]
7101df2d58  stp x20,x19,[sp, #0xd0]
7101df2d5c  stp x29,x30,[sp, #0xe0]
7101df2d60  add x29,sp,#0xe0
7101df2d64  mov x21,x0
7101df2d68  ldr x0,[x0, #0x240]
7101df2d6c  fmov s0,0x3f800000
7101df2d70  adrp x8,0x7104441000
7101df2d74  add x8,x8,#0x885
7101df2d78  adrp x9,0x710425d000
7101df2d7c  add x9,x9,#0x1ad
7101df2d80  tst w1,#0xff
7101df2d84  mov w20,w1
7101df2d88  csel x1,x9,x8,eq
7101df2d8c  bl 0x7103778300
7101df2d90  and w8,w20,#0xff
7101df2d94  cmp w8,#0x2
7101df2d98  b.eq 0x7101df2e34
7101df2d9c  cmp w8,#0x1
7101df2da0  b.eq 0x7101df2ec8
7101df2da4  cbnz w8,0x7101df2f80
7101df2da8  mov w1,#0x12
7101df2dac  mov w0,#0x10
7101df2db0  bl 0x710392e290
7101df2db4  mov x19,x0
7101df2db8  cbnz x0,0x7101df2e04
7101df2dbc  adrp x8,0x7105332000
7101df2dc0  ldr x0,[x8, #0xf00]
7101df2dc4  cbz x0,0x7101df2e00
7101df2dc8  mov w8,#0x12
7101df2dcc  str wzr,[sp, #0x28]
7101df2dd0  add x1,sp,#0x28
7101df2dd4  str x8,[sp, #0x38]
7101df2dd8  ldr x8,[x0]
7101df2ddc  ldr x8,[x8, #0x30]
7101df2de0  add x2,sp,#0x38
7101df2de4  blr x8
7101df2de8  tbz w0,#0x0,0x7101df2e00
7101df2dec  mov w1,#0x12
7101df2df0  mov w0,#0x10
7101df2df4  bl 0x710392e290
7101df2df8  mov x19,x0
7101df2dfc  cbnz x0,0x7101df2e04
7101df2e00  mov x19,xzr
7101df2e04  mov x8,#0x1
7101df2e08  movk x8,#0x101, LSL #16
7101df2e0c  mov x9,#0x401
7101df2e10  movk x9,#0x501, LSL #16
7101df2e14  movk x8,#0x201, LSL #32
7101df2e18  movk x8,#0x301, LSL #48
7101df2e1c  movk x9,#0x601, LSL #32
7101df2e20  movk x9,#0x701, LSL #48
7101df2e24  add x22,x19,#0x12
7101df2e28  stp x8,x9,[x19]
7101df2e2c  add x8,x19,#0x10
7101df2e30  b 0x7101df2f74
7101df2e34  mov w0,#0x10
7101df2e38  mov w1,#0x20
7101df2e3c  bl 0x710392e290
7101df2e40  mov x19,x0
7101df2e44  cbnz x0,0x7101df2e90
7101df2e48  adrp x8,0x7105332000
7101df2e4c  ldr x0,[x8, #0xf00]
7101df2e50  cbz x0,0x7101df2e8c
7101df2e54  mov w8,#0x20
7101df2e58  str wzr,[sp, #0x28]
7101df2e5c  add x1,sp,#0x28
7101df2e60  str x8,[sp, #0x38]
7101df2e64  ldr x8,[x0]
7101df2e68  ldr x8,[x8, #0x30]
7101df2e6c  add x2,sp,#0x38
7101df2e70  blr x8
7101df2e74  tbz w0,#0x0,0x7101df2e8c
7101df2e78  mov w0,#0x10
7101df2e7c  mov w1,#0x20
7101df2e80  bl 0x710392e290
7101df2e84  mov x19,x0
7101df2e88  cbnz x0,0x7101df2e90
7101df2e8c  mov x19,xzr
7101df2e90  mov x8,#0x1601
7101df2e94  movk x8,#0xb01, LSL #16
7101df2e98  mov x9,#0xe01
7101df2e9c  movk x9,#0xf01, LSL #16
7101df2ea0  mov x10,#0x1201
7101df2ea4  movk x10,#0x1301, LSL #16
7101df2ea8  add x22,x19,#0x20
7101df2eac  movk x8,#0xc01, LSL #32
7101df2eb0  movk x8,#0xd01, LSL #48
7101df2eb4  movk x9,#0x1001, LSL #32
7101df2eb8  movk x9,#0x1101, LSL #48
7101df2ebc  movk x10,#0x1401, LSL #32
7101df2ec0  movk x10,#0x1501, LSL #48
7101df2ec4  b 0x7101df2f54
7101df2ec8  mov w0,#0x10
7101df2ecc  mov w1,#0x20
7101df2ed0  bl 0x710392e290
7101df2ed4  mov x19,x0
7101df2ed8  cbnz x0,0x7101df2f24
7101df2edc  adrp x8,0x7105332000
7101df2ee0  ldr x0,[x8, #0xf00]
7101df2ee4  cbz x0,0x7101df2f20
7101df2ee8  mov w8,#0x20
7101df2eec  str wzr,[sp, #0x28]
7101df2ef0  add x1,sp,#0x28
7101df2ef4  str x8,[sp, #0x38]
7101df2ef8  ldr x8,[x0]
7101df2efc  ldr x8,[x8, #0x30]
7101df2f00  add x2,sp,#0x38
7101df2f04  blr x8
7101df2f08  tbz w0,#0x0,0x7101df2f20
7101df2f0c  mov w0,#0x10
7101df2f10  mov w1,#0x20
7101df2f14  bl 0x710392e290
7101df2f18  mov x19,x0
7101df2f1c  cbnz x0,0x7101df2f24
7101df2f20  mov x19,xzr
7101df2f24  mov x8,#0xb01
7101df2f28  movk x8,#0xc01, LSL #16
7101df2f2c  mov x9,#0xf01
7101df2f30  movk x9,#0x1001, LSL #16
7101df2f34  mov x10,#0x1301
7101df2f38  movk x10,#0x1401, LSL #16
7101df2f3c  add x22,x19,#0x20
7101df2f40  movk x8,#0xd01, LSL #32
7101df2f44  movk x8,#0xe01, LSL #48
7101df2f48  movk x9,#0x1101, LSL #32
7101df2f4c  movk x9,#0x1201, LSL #48
7101df2f50  movk x10,#0x1501, LSL #32
7101df2f54  stp x8,x9,[x19]
7101df2f58  mov w8,#0x801
7101df2f5c  movk w8,#0x901, LSL #16
7101df2f60  str w8,[x19, #0x18]
7101df2f64  mov w9,#0xa01
7101df2f68  add x8,x19,#0x1e
7101df2f6c  str x10,[x19, #0x10]
7101df2f70  strh w9,[x19, #0x1c]
7101df2f74  mov w9,#0x1701
7101df2f78  strh w9,[x8]
7101df2f7c  b 0x7101df2f88
7101df2f80  mov x19,xzr
7101df2f84  mov x22,xzr
7101df2f88  ldrb w8,[x21, #0x248]
7101df2f8c  add x23,x21,#0x100
7101df2f90  add x24,x21,#0x190
7101df2f94  cmp w8,#0x0
7101df2f98  csel x8,x23,x24,eq
7101df2f9c  ldr x0,[x8, #0x10]
7101df2fa0  ldr x8,[x0]
7101df2fa4  ldr x8,[x8, #0x60]
7101df2fa8  mov w1,wzr
7101df2fac  blr x8
7101df2fb0  tst w20,#0xff
7101df2fb4  strb w20,[x21, #0x248]
7101df2fb8  csel x20,x23,x24,eq
7101df2fbc  ldrb w8,[x20, #0x9]
7101df2fc0  cbz w8,0x7101df3008
7101df2fc4  add x8,x20,#0x18
7101df2fc8  str x8,[sp]
7101df2fcc  add x8,x20,#0x30
7101df2fd0  str x8,[sp, #0x8]
7101df2fd4  sub x8,x22,x19
7101df2fd8  fmov s8,0x3f800000
7101df2fdc  str x8,[sp, #0x10]
7101df2fe0  asr x24,x8,#0x1
7101df2fe4  add x8,sp,#0x38
7101df2fe8  mov x27,xzr
7101df2fec  adrp x22,0x710523d000
7101df2ff0  add x22,x22,#0x9a8
7101df2ff4  add x8,x8,#0x8
7101df2ff8  adrp x25,0x71044fb000
7101df2ffc  add x25,x25,#0x7e8
7101df3000  stur x8,[x29, #-0x58]
7101df3004  b 0x7101df3148
7101df3008  sub x8,x22,x19
7101df300c  b 0x7101df3558
7101df3010  mov x9,#0xeb20
7101df3014  movk x9,#0xa182, LSL #16
7101df3018  movk x9,#0x14, LSL #32
7101df301c  cmp x8,x9
7101df3020  b.le 0x7101df30b4
7101df3024  mov x9,#0xeb21
7101df3028  movk x9,#0xa182, LSL #16
7101df302c  movk x9,#0x14, LSL #32
7101df3030  cmp x8,x9
7101df3034  b.eq 0x7101df3100
7101df3038  mov x9,#0x8456
7101df303c  movk x9,#0x19df, LSL #16
7101df3040  movk x9,#0x15, LSL #32
7101df3044  cmp x8,x9
7101df3048  b.eq 0x7101df310c
7101df304c  mov x9,#0xa328
7101df3050  movk x9,#0x4cb6, LSL #16
7101df3054  movk x9,#0x16, LSL #32
7101df3058  cmp x8,x9
7101df305c  adrp x1,0x71043ab000
7101df3060  add x1,x1,#0x82e
7101df3064  b.eq 0x7101df3350
7101df3068  b 0x7101df313c
7101df306c  mov x9,#0x169a
7101df3070  movk x9,#0x72c0, LSL #16
7101df3074  movk x9,#0x18, LSL #32
7101df3078  cmp x8,x9
7101df307c  b.eq 0x7101df3118
7101df3080  mov x9,#0xf9cd
7101df3084  movk x9,#0x7837, LSL #16
7101df3088  movk x9,#0x1d, LSL #32
7101df308c  cmp x8,x9
7101df3090  b.eq 0x7101df3124
7101df3094  mov x9,#0xe952
7101df3098  movk x9,#0xf8a9, LSL #16
7101df309c  movk x9,#0x1e, LSL #32
7101df30a0  cmp x8,x9
7101df30a4  b.ne 0x7101df313c
7101df30a8  adrp x1,0x71042b1000
7101df30ac  add x1,x1,#0xea8
7101df30b0  b 0x7101df3350
7101df30b4  mov x9,#0x909b
7101df30b8  movk x9,#0x2797, LSL #16
7101df30bc  movk x9,#0x13, LSL #32
7101df30c0  cmp x8,x9
7101df30c4  b.eq 0x7101df3130
7101df30c8  mov x9,#0xf986
7101df30cc  movk x9,#0x6e70, LSL #16
7101df30d0  movk x9,#0x13, LSL #32
7101df30d4  cmp x8,x9
7101df30d8  b.ne 0x7101df313c
7101df30dc  adrp x1,0x710437a000
7101df30e0  add x1,x1,#0x4fa
7101df30e4  b 0x7101df3350
7101df30e8  adrp x1,0x71042c2000
7101df30ec  add x1,x1,#0xb27
7101df30f0  b 0x7101df3350
7101df30f4  adrp x1,0x7104463000
7101df30f8  add x1,x1,#0x901
7101df30fc  b 0x7101df3350
7101df3100  adrp x1,0x710427e000
7101df3104  add x1,x1,#0x8a7
7101df3108  b 0x7101df3350
7101df310c  adrp x1,0x710439b000
7101df3110  add x1,x1,#0xcb
7101df3114  b 0x7101df3350
7101df3118  adrp x1,0x710439b000
7101df311c  add x1,x1,#0xa4
7101df3120  b 0x7101df3350
7101df3124  adrp x1,0x7104359000
7101df3128  add x1,x1,#0x1c3
7101df312c  b 0x7101df3350
7101df3130  adrp x1,0x71042a0000
7101df3134  add x1,x1,#0xdcf
7101df3138  b 0x7101df3350
7101df313c  adrp x1,0x7104867000
7101df3140  add x1,x1,#0xc2e
7101df3144  b 0x7101df3350
7101df3148  ldp x8,x9,[x20, #0x18]
7101df314c  sub x9,x9,x8
7101df3150  asr x9,x9,#0x1
7101df3154  cmp x9,x27
7101df3158  b.ls 0x7101df35c8
7101df315c  add x21,x8,x27, LSL #0x1
7101df3160  cmp x24,x27
7101df3164  b.ls 0x7101df3174
7101df3168  ldrh w26,[x19, x27, LSL #0x1]
7101df316c  strh w26,[x21]
7101df3170  b 0x7101df317c
7101df3174  mov w26,wzr
7101df3178  strb wzr,[x21]
7101df317c  ldr x9,[x20, #0x10]
7101df3180  ldr x8,[x9, #0x1b8]
7101df3184  cbz x8,0x7101df3278
7101df3188  add x9,x9,#0x1b8
7101df318c  mov x10,x9
7101df3190  mov x11,x8
7101df3194  ldr w12,[x11, #0x20]
7101df3198  cmp w12,w27
7101df319c  cset w12,lt
7101df31a0  csel x10,x10,x11,lt
7101df31a4  ldr x11,[x11, w12, UXTW #0x3]
7101df31a8  cbnz x11,0x7101df3194
7101df31ac  cmp x10,x9
7101df31b0  b.eq 0x7101df3208
7101df31b4  ldr w11,[x10, #0x20]
7101df31b8  cmp w11,w27
7101df31bc  b.gt 0x7101df3208
7101df31c0  ldr x23,[x10, #0x28]
7101df31c4  cbz x23,0x7101df3208
7101df31c8  ldr x8,[x23]
7101df31cc  ldr x8,[x8, #0x208]
7101df31d0  tst w26,#0xff
7101df31d4  cset w1,ne
7101df31d8  mov x0,x23
7101df31dc  cset w28,eq
7101df31e0  blr x8
7101df31e4  ldr x8,[x23]
7101df31e8  ldr x8,[x8, #0x388]
7101df31ec  mov x0,x23
7101df31f0  mov w1,w28
7101df31f4  mov w2,wzr
7101df31f8  blr x8
7101df31fc  ldr x8,[x20, #0x10]
7101df3200  add x9,x8,#0x1b8
7101df3204  ldr x8,[x8, #0x1b8]
7101df3208  cbz x8,0x7101df3278
7101df320c  mov x10,x9
7101df3210  ldr w11,[x8, #0x20]
7101df3214  cmp w11,w27
7101df3218  cset w11,lt
7101df321c  csel x10,x10,x8,lt
7101df3220  ldr x8,[x8, w11, UXTW #0x3]
7101df3224  cbnz x8,0x7101df3210
7101df3228  cmp x10,x9
7101df322c  b.eq 0x7101df3278
7101df3230  ldr w8,[x10, #0x20]
7101df3234  cmp w8,w27
7101df3238  b.gt 0x7101df3278
7101df323c  ldr x23,[x10, #0x28]
7101df3240  cbz x23,0x7101df3278
7101df3244  ldr x8,[x23]
7101df3248  ldr x8,[x8, #0x1f8]
7101df324c  tst w26,#0xff
7101df3250  cset w1,ne
7101df3254  mov x0,x23
7101df3258  cset w28,eq
7101df325c  blr x8
7101df3260  ldr x8,[x23]
7101df3264  ldr x8,[x8, #0x388]
7101df3268  mov x0,x23
7101df326c  mov w1,w28
7101df3270  mov w2,wzr
7101df3274  blr x8
7101df3278  ldp x8,x9,[x20, #0x30]
7101df327c  sub x9,x9,x8
7101df3280  asr x9,x9,#0x4
7101df3284  cmp x9,x27
7101df3288  b.ls 0x7101df35c0
7101df328c  add x8,x8,x27, LSL #0x4
7101df3290  ldr x8,[x8, #0x8]
7101df3294  ldr x8,[x8, #0x8]
7101df3298  cbz x8,0x7101df32bc
7101df329c  ldr x8,[x8, #0x18]
7101df32a0  cbz x8,0x7101df32bc
7101df32a4  ldrb w10,[x8, #0x58]
7101df32a8  tst w26,#0xff
7101df32ac  cset w9,ne
7101df32b0  and w10,w10,#0xfe
7101df32b4  orr w9,w10,w9
7101df32b8  strb w9,[x8, #0x58]
7101df32bc  tst w26,#0xff
7101df32c0  b.eq 0x7101df3544
7101df32c4  ldp x8,x9,[x20, #0x30]
7101df32c8  sub x9,x9,x8
7101df32cc  asr x9,x9,#0x4
7101df32d0  cmp x9,x27
7101df32d4  b.ls 0x7101df35c0
7101df32d8  ldrb w26,[x21, #0x1]
7101df32dc  add x23,x8,x27, LSL #0x4
7101df32e0  adrp x8,0x7104433000
7101df32e4  add x8,x8,#0x5f7
7101df32e8  ldr x0,[x23, #0x8]
7101df32ec  adrp x9,0x7104422000
7101df32f0  add x9,x9,#0x890
7101df32f4  sub w21,w26,#0xb
7101df32f8  and w28,w21,#0xff
7101df32fc  mov v0.16B,v8.16B
7101df3300  cmp w28,#0xb
7101df3304  csel x1,x9,x8,cc
7101df3308  bl 0x7103778300
7101df330c  add x8,sp,#0x28
7101df3310  mov x0,x23
7101df3314  adrp x1,0x71042e7000
7101df3318  add x1,x1,#0x718
7101df331c  bl 0x7103776910
7101df3320  cmp w26,#0x17
7101df3324  b.hi 0x7101df3440
7101df3328  ldrsw x8,[x25, x26, LSL #0x2]
7101df332c  add x8,x8,x25
7101df3330  br x8
7101df3334  add w8,w26,#0x1
7101df3338  and w1,w8,#0xff
7101df333c  add x8,sp,#0x38
7101df3340  adrp x0,0x7104359000
7101df3344  add x0,x0,#0x19f
7101df3348  bl 0x71003a4ca0
7101df334c  ldur x1,[x29, #-0x58]
7101df3350  add x0,sp,#0x28
7101df3354  bl 0x710377a120
7101df3358  b 0x7101df33a4
7101df335c  and w8,w26,#0xfc
7101df3360  cmp w8,#0x4
7101df3364  b.ne 0x7101df33a4
7101df3368  sub w8,w26,#0x4
7101df336c  and w3,w8,#0xff
7101df3370  add x0,sp,#0x28
7101df3374  mov w2,#0x1
7101df3378  adrp x1,0x71042b1000
7101df337c  add x1,x1,#0xe87
7101df3380  bl 0x710377a280
7101df3384  b 0x7101df33a4
7101df3388  sub w8,w26,#0x7
7101df338c  and w3,w8,#0xff
7101df3390  add x0,sp,#0x28
7101df3394  mov w2,#0x1
7101df3398  adrp x1,0x71043cd000
7101df339c  add x1,x1,#0x2c0
7101df33a0  bl 0x710377a280
7101df33a4  add x8,sp,#0x38
7101df33a8  mov x0,x23
7101df33ac  adrp x1,0x71042f8000
7101df33b0  add x1,x1,#0x7d2
7101df33b4  and w26,w21,#0xff
7101df33b8  bl 0x7103776910
7101df33bc  add x8,sp,#0x18
7101df33c0  mov x0,x23
7101df33c4  adrp x1,0x7104422000
7101df33c8  add x1,x1,#0x89a
7101df33cc  bl 0x7103776910
7101df33d0  cmp w26,#0xa
7101df33d4  b.hi 0x7101df34f4
7101df33d8  and x8,x21,#0xff
7101df33dc  adrp x9,0x7104549000
7101df33e0  add x9,x9,#0x48
7101df33e4  ldr x1,[x9, x8, LSL #0x3]
7101df33e8  ldr x0,[x20]
7101df33ec  bl 0x710323f760
7101df33f0  ldr x23,[sp, #0x40]
7101df33f4  mov x21,x0
7101df33f8  mov x1,x21
7101df33fc  mov x0,x23
7101df3400  bl 0x7103778b80
7101df3404  ldr x28,[sp, #0x20]
7101df3408  mov x0,x28
7101df340c  mov x1,x21
7101df3410  bl 0x7103778b80
7101df3414  stp x22,xzr,[sp, #0x18]
7101df3418  cbnz x28,0x7101df351c
7101df341c  b 0x7101df3524
7101df3420  add x0,sp,#0x28
7101df3424  adrp x1,0x71042a0000
7101df3428  add x1,x1,#0xdb0
7101df342c  b 0x7101df3354
7101df3430  add x0,sp,#0x28
7101df3434  adrp x1,0x71043bc000
7101df3438  add x1,x1,#0x3e2
7101df343c  b 0x7101df3354
7101df3440  cmp w28,#0xa
7101df3444  b.hi 0x7101df34cc
7101df3448  and x8,x21,#0xff
7101df344c  adrp x9,0x7104549000
7101df3450  add x9,x9,#0x48
7101df3454  ldr x8,[x9, x8, LSL #0x3]
7101df3458  mov x9,#0xee0c
7101df345c  movk x9,#0xa40a, LSL #16
7101df3460  movk x9,#0x16, LSL #32
7101df3464  and x8,x8,#0xffffffffff
7101df3468  cmp x8,x9
7101df346c  b.le 0x7101df3010
7101df3470  mov x9,#0x1699
7101df3474  movk x9,#0x72c0, LSL #16
7101df3478  movk x9,#0x18, LSL #32
7101df347c  cmp x8,x9
7101df3480  b.gt 0x7101df306c
7101df3484  mov x9,#0xee0d
7101df3488  movk x9,#0xa40a, LSL #16
7101df348c  movk x9,#0x16, LSL #32
7101df3490  cmp x8,x9
7101df3494  b.eq 0x7101df30e8
7101df3498  mov x9,#0x5e8e
7101df349c  movk x9,#0x1394, LSL #16
7101df34a0  movk x9,#0x17, LSL #32
7101df34a4  cmp x8,x9
7101df34a8  b.eq 0x7101df30f4
7101df34ac  mov x9,#0xded9
7101df34b0  movk x9,#0x2bf1, LSL #16
7101df34b4  movk x9,#0x17, LSL #32
7101df34b8  cmp x8,x9
7101df34bc  b.ne 0x7101df313c
7101df34c0  adrp x1,0x710436a000
7101df34c4  add x1,x1,#0x231
7101df34c8  b 0x7101df3350
7101df34cc  add x8,sp,#0x38
7101df34d0  mov x0,x23
7101df34d4  adrp x1,0x71042f8000
7101df34d8  add x1,x1,#0x7d2
7101df34dc  bl 0x7103776910
7101df34e0  add x8,sp,#0x18
7101df34e4  mov x0,x23
7101df34e8  adrp x1,0x7104422000
7101df34ec  add x1,x1,#0x89a
7101df34f0  bl 0x7103776910
7101df34f4  ldr x23,[sp, #0x40]
7101df34f8  mov w1,#0x1
7101df34fc  mov x0,x23
7101df3500  bl 0x71037790a0
7101df3504  ldr x28,[sp, #0x20]
7101df3508  mov w1,#0x1
7101df350c  mov x0,x28
7101df3510  bl 0x71037790a0
7101df3514  stp x22,xzr,[sp, #0x18]
7101df3518  cbz x28,0x7101df3524
7101df351c  mov x0,x28
7101df3520  bl 0x710392eb40
7101df3524  stp x22,xzr,[sp, #0x38]
7101df3528  cbz x23,0x7101df3534
7101df352c  mov x0,x23
7101df3530  bl 0x710392eb40
7101df3534  ldr x0,[sp, #0x30]
7101df3538  stp x22,xzr,[sp, #0x28]
7101df353c  cbz x0,0x7101df3544
7101df3540  bl 0x710392eb40
7101df3544  ldrb w8,[x20, #0x9]
7101df3548  add x27,x27,#0x1
7101df354c  cmp x27,x8
7101df3550  b.cc 0x7101df3148
7101df3554  ldr x8,[sp, #0x10]
7101df3558  ubfx x8,x8,#0x1,#0x1f
7101df355c  sub w8,w8,#0x1
7101df3560  strb w8,[x20, #0x49]
7101df3564  ldr x8,[x20, #0x58]
7101df3568  and x8,x8,#-0x1000000
7101df356c  mov x0,x20
7101df3570  strb wzr,[x20, #0x4a]
7101df3574  str x8,[x20, #0x58]
7101df3578  bl 0x7101df2450
7101df357c  ldr x0,[x20, #0x10]
7101df3580  ldr x8,[x0]
7101df3584  ldr x8,[x8, #0x60]
7101df3588  mov w1,#0x1
7101df358c  blr x8
7101df3590  cbz x19,0x7101df359c
7101df3594  mov x0,x19
7101df3598  bl 0x710392eb40
7101df359c  ldr d8,[sp, #0x80]
7101df35a0  ldp x29,x30,[sp, #0xe0]
7101df35a4  ldp x20,x19,[sp, #0xd0]
7101df35a8  ldp x22,x21,[sp, #0xc0]
7101df35ac  ldp x24,x23,[sp, #0xb0]
7101df35b0  ldp x26,x25,[sp, #0xa0]
7101df35b4  ldp x28,x27,[sp, #0x90]
7101df35b8  add sp,sp,#0xf0
7101df35bc  ret
7101df35c0  ldr x0,[sp, #0x8]
7101df35c4  bl 0x71039c1330
7101df35c8  ldr x0,[sp]
7101df35cc  bl 0x71039c1330
