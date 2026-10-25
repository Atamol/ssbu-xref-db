// addr:      7101ce2ec0
// offset:    0x1ce2ec0
// name:      FUN_7101ce2ec0
// mangled:   
// size:      8832

7101ce2ec0  str d8,[sp, #-0x70]!
7101ce2ec4  stp x28,x27,[sp, #0x10]
7101ce2ec8  stp x26,x25,[sp, #0x20]
7101ce2ecc  stp x24,x23,[sp, #0x30]
7101ce2ed0  stp x22,x21,[sp, #0x40]
7101ce2ed4  stp x20,x19,[sp, #0x50]
7101ce2ed8  stp x29,x30,[sp, #0x60]
7101ce2edc  add x29,sp,#0x60
7101ce2ee0  sub sp,sp,#0xdc0
7101ce2ee4  mov x20,x1
7101ce2ee8  ldr x1,[x2, #0x8]
7101ce2eec  mov x24,x4
7101ce2ef0  mov x28,x3
7101ce2ef4  mov x22,x2
7101ce2ef8  mov x21,x0
7101ce2efc  cbz x1,0x7101ce2f1c
7101ce2f00  adrp x8,0x710532f000
7101ce2f04  ldr x8,[x8, #0x8f8]
7101ce2f08  ldr x0,[x8, #0x8]
7101ce2f0c  ldr w2,[x22]
7101ce2f10  bl 0x710334c7d0
7101ce2f14  mov w23,w0
7101ce2f18  b 0x7101ce2f20
7101ce2f1c  orr w23,wzr,#0xffff
7101ce2f20  ldr x8,[x20, #0x8]
7101ce2f24  ldr x9,[x8, #0x8]!
7101ce2f28  mvn w19,w23
7101ce2f2c  add x27,sp,#0x240
7101ce2f30  tst w19,#0xffff
7101ce2f34  b.eq 0x7101ce3330
7101ce2f38  cbz x9,0x7101ce3330
7101ce2f3c  and w9,w23,#0xffff
7101ce2f40  cmp w9,#0x4
7101ce2f44  strb wzr,[sp, #0x248]
7101ce2f48  str xzr,[sp, #0x240]
7101ce2f4c  b.hi 0x7101ce332c
7101ce2f50  and x8,x23,#0xffff
7101ce2f54  adrp x9,0x71044fa000
7101ce2f58  add x9,x9,#0xa0
7101ce2f5c  ldrsw x8,[x9, x8, LSL #0x2]
7101ce2f60  add x8,x8,x9
7101ce2f64  br x8
7101ce2f68  mov x10,#0x6e6d
7101ce2f6c  movk x10,#0x5f75, LSL #16
7101ce2f70  movk x10,#0x6873, LSL #32
7101ce2f74  movk x10,#0x7261, LSL #48
7101ce2f78  str x10,[sp, #0x248]
7101ce2f7c  mov w10,#0x6d5f
7101ce2f80  mov x11,#0x5f65
7101ce2f84  movk x11,#0x6564, LSL #16
7101ce2f88  strh w10,[sp, #0x258]
7101ce2f8c  mov x10,#0x6969
7101ce2f90  movk x10,#0x745f, LSL #16
7101ce2f94  movk x11,#0x6174, LSL #32
7101ce2f98  movk x11,#0x6c69, LSL #48
7101ce2f9c  str x11,[sp, #0x250]
7101ce2fa0  movk x10,#0x7469, LSL #32
7101ce2fa4  movk x10,#0x656c, LSL #48
7101ce2fa8  stur x10,[x27, #0x1a]
7101ce2fac  strb wzr,[sp, #0x262]
7101ce2fb0  add x9,sp,#0x240
7101ce2fb4  mov w10,#0x1a
7101ce2fb8  str w10,[sp, #0x244]
7101ce2fbc  mov w8,#0x9dc5
7101ce2fc0  movk w8,#0x811c, LSL #16
7101ce2fc4  add x25,x9,#0x8
7101ce2fc8  add x9,x9,#0x9
7101ce2fcc  mov w11,#0x6d
7101ce2fd0  mov w10,#0x89
7101ce2fd4  mul w8,w8,w10
7101ce2fd8  and w11,w11,#0xff
7101ce2fdc  eor w8,w8,w11
7101ce2fe0  ldrb w11,[x9], #0x1
7101ce2fe4  cbnz w11,0x7101ce2fd4
7101ce2fe8  b 0x7101ce3220
7101ce2fec  mov x10,#0x6e6d
7101ce2ff0  movk x10,#0x5f75, LSL #16
7101ce2ff4  movk x10,#0x6873, LSL #32
7101ce2ff8  movk x10,#0x7261, LSL #48
7101ce2ffc  str x10,[sp, #0x248]
7101ce3000  mov x10,#0x5f65
7101ce3004  movk x10,#0x6564, LSL #16
7101ce3008  movk x10,#0x6174, LSL #32
7101ce300c  movk x10,#0x6c69, LSL #48
7101ce3010  str x10,[sp, #0x250]
7101ce3014  mov w10,#0x6d5f
7101ce3018  strh w10,[sp, #0x258]
7101ce301c  mov x10,#0x766f
7101ce3020  movk x10,#0x6569, LSL #16
7101ce3024  movk x10,#0x745f, LSL #32
7101ce3028  movk x10,#0x7469, LSL #48
7101ce302c  stur x10,[x27, #0x1a]
7101ce3030  mov w10,#0x656c
7101ce3034  add x9,sp,#0x240
7101ce3038  add x25,x9,#0x8
7101ce303c  add x9,x9,#0x9
7101ce3040  strb wzr,[sp, #0x264]
7101ce3044  strh w10,[sp, #0x262]
7101ce3048  orr w10,wzr,#0x1c
7101ce304c  mov w8,#0x9dc5
7101ce3050  movk w8,#0x811c, LSL #16
7101ce3054  str w10,[sp, #0x244]
7101ce3058  mov w11,#0x6d
7101ce305c  mov w10,#0x89
7101ce3060  mul w8,w8,w10
7101ce3064  and w11,w11,#0xff
7101ce3068  eor w8,w8,w11
7101ce306c  ldrb w11,[x9], #0x1
7101ce3070  cbnz w11,0x7101ce3060
7101ce3074  b 0x7101ce3220
7101ce3078  mov x10,#0x6e6d
7101ce307c  movk x10,#0x5f75, LSL #16
7101ce3080  movk x10,#0x6873, LSL #32
7101ce3084  movk x10,#0x7261, LSL #48
7101ce3088  str x10,[sp, #0x248]
7101ce308c  mov w10,#0x725f
7101ce3090  mov x11,#0x5f65
7101ce3094  movk x11,#0x6564, LSL #16
7101ce3098  strh w10,[sp, #0x258]
7101ce309c  mov x10,#0x7065
7101ce30a0  movk x10,#0x616c, LSL #16
7101ce30a4  movk x11,#0x6174, LSL #32
7101ce30a8  movk x11,#0x6c69, LSL #48
7101ce30ac  str x11,[sp, #0x250]
7101ce30b0  movk x10,#0x5f79, LSL #32
7101ce30b4  movk x10,#0x6974, LSL #48
7101ce30b8  stur x10,[x27, #0x1a]
7101ce30bc  mov w10,#0x6c74
7101ce30c0  movk w10,#0x65, LSL #16
7101ce30c4  stur w10,[x27, #0x22]
7101ce30c8  add x9,sp,#0x240
7101ce30cc  mov w10,#0x1d
7101ce30d0  str w10,[sp, #0x244]
7101ce30d4  mov w8,#0x9dc5
7101ce30d8  movk w8,#0x811c, LSL #16
7101ce30dc  add x25,x9,#0x8
7101ce30e0  add x9,x9,#0x9
7101ce30e4  mov w11,#0x6d
7101ce30e8  mov w10,#0x89
7101ce30ec  mul w8,w8,w10
7101ce30f0  and w11,w11,#0xff
7101ce30f4  eor w8,w8,w11
7101ce30f8  ldrb w11,[x9], #0x1
7101ce30fc  cbnz w11,0x7101ce30ec
7101ce3100  b 0x7101ce3220
7101ce3104  mov x10,#0x6e6d
7101ce3108  movk x10,#0x5f75, LSL #16
7101ce310c  movk x10,#0x6873, LSL #32
7101ce3110  movk x10,#0x7261, LSL #48
7101ce3114  str x10,[sp, #0x248]
7101ce3118  mov w10,#0x735f
7101ce311c  mov x11,#0x5f65
7101ce3120  movk x11,#0x6564, LSL #16
7101ce3124  strh w10,[sp, #0x258]
7101ce3128  mov x10,#0x6570
7101ce312c  movk x10,#0x7463, LSL #16
7101ce3130  movk x11,#0x6174, LSL #32
7101ce3134  movk x11,#0x6c69, LSL #48
7101ce3138  str x11,[sp, #0x250]
7101ce313c  movk x10,#0x7461, LSL #32
7101ce3140  movk x10,#0x5f65, LSL #48
7101ce3144  stur x10,[x27, #0x1a]
7101ce3148  mov w10,#0x6974
7101ce314c  movk w10,#0x6c74, LSL #16
7101ce3150  stur w10,[x27, #0x22]
7101ce3154  mov w10,#0x65
7101ce3158  add x9,sp,#0x240
7101ce315c  strh w10,[sp, #0x266]
7101ce3160  orr w10,wzr,#0x1f
7101ce3164  mov w8,#0x9dc5
7101ce3168  movk w8,#0x811c, LSL #16
7101ce316c  str w10,[sp, #0x244]
7101ce3170  add x25,x9,#0x8
7101ce3174  add x9,x9,#0x9
7101ce3178  mov w11,#0x6d
7101ce317c  mov w10,#0x89
7101ce3180  mul w8,w8,w10
7101ce3184  and w11,w11,#0xff
7101ce3188  eor w8,w8,w11
7101ce318c  ldrb w11,[x9], #0x1
7101ce3190  cbnz w11,0x7101ce3180
7101ce3194  b 0x7101ce3220
7101ce3198  mov x10,#0x6e6d
7101ce319c  movk x10,#0x5f75, LSL #16
7101ce31a0  movk x10,#0x6873, LSL #32
7101ce31a4  movk x10,#0x7261, LSL #48
7101ce31a8  str x10,[sp, #0x248]
7101ce31ac  mov x10,#0x5f65
7101ce31b0  movk x10,#0x6564, LSL #16
7101ce31b4  movk x10,#0x6174, LSL #32
7101ce31b8  movk x10,#0x6c69, LSL #48
7101ce31bc  str x10,[sp, #0x250]
7101ce31c0  mov w10,#0x735f
7101ce31c4  strh w10,[sp, #0x258]
7101ce31c8  mov x10,#0x6174
7101ce31cc  movk x10,#0x6567, LSL #16
7101ce31d0  movk x10,#0x745f, LSL #32
7101ce31d4  movk x10,#0x7469, LSL #48
7101ce31d8  stur x10,[x27, #0x1a]
7101ce31dc  mov w10,#0x656c
7101ce31e0  add x9,sp,#0x240
7101ce31e4  add x25,x9,#0x8
7101ce31e8  add x9,x9,#0x9
7101ce31ec  strb wzr,[sp, #0x264]
7101ce31f0  strh w10,[sp, #0x262]
7101ce31f4  orr w10,wzr,#0x1c
7101ce31f8  mov w8,#0x9dc5
7101ce31fc  movk w8,#0x811c, LSL #16
7101ce3200  str w10,[sp, #0x244]
7101ce3204  mov w11,#0x6d
7101ce3208  mov w10,#0x89
7101ce320c  mul w8,w8,w10
7101ce3210  and w11,w11,#0xff
7101ce3214  eor w8,w8,w11
7101ce3218  ldrb w11,[x9], #0x1
7101ce321c  cbnz w11,0x7101ce320c
7101ce3220  str w8,[sp, #0x240]
7101ce3224  adrp x1,0x71042e7000
7101ce3228  add x1,x1,#0x3d3
7101ce322c  sub x8,x29,#0xc0
7101ce3230  mov x0,x20
7101ce3234  bl 0x7103776910
7101ce3238  sub x0,x29,#0xc0
7101ce323c  mov x1,x25
7101ce3240  bl 0x710377a120
7101ce3244  and w8,w23,#0xffff
7101ce3248  cmp w8,#0x3
7101ce324c  b.hi 0x7101ce3264
7101ce3250  adrp x8,0x710446a000
7101ce3254  add x8,x8,#0x5c0
7101ce3258  sxth x9,w23
7101ce325c  ldr w25,[x8, x9, LSL #0x2]
7101ce3260  b 0x7101ce3268
7101ce3264  mov w25,wzr
7101ce3268  add x8,sp,#0x20
7101ce326c  adrp x1,0x710432a000
7101ce3270  add x1,x1,#0x1d6
7101ce3274  add x0,sp,#0x20
7101ce3278  mov w2,w25
7101ce327c  strb wzr,[sp, #0x28]
7101ce3280  str xzr,[sp, #0x20]
7101ce3284  add x26,x8,#0x8
7101ce3288  bl 0x710062dc20
7101ce328c  fmov s8,0x3f800000
7101ce3290  ldr x0,[x20, #0x8]
7101ce3294  mov x1,x26
7101ce3298  mov v0.16B,v8.16B
7101ce329c  bl 0x7103778300
7101ce32a0  adrp x1,0x710436c000
7101ce32a4  add x1,x1,#0x539
7101ce32a8  sub x8,x29,#0x78
7101ce32ac  mov x0,x20
7101ce32b0  bl 0x7103776640
7101ce32b4  adrp x1,0x7104443000
7101ce32b8  add x1,x1,#0x92b
7101ce32bc  add x0,sp,#0x20
7101ce32c0  mov w2,w25
7101ce32c4  bl 0x710062dc20
7101ce32c8  ldur x25,[x29, #-0x70]
7101ce32cc  mov v0.16B,v8.16B
7101ce32d0  mov x1,x26
7101ce32d4  mov x0,x25
7101ce32d8  bl 0x7103778300
7101ce32dc  adrp x8,0x710523d000
7101ce32e0  add x8,x8,#0x988
7101ce32e4  stp x8,xzr,[x29, #-0x78]
7101ce32e8  cbz x25,0x7101ce330c
7101ce32ec  ldr x0,[x25, #0x18]
7101ce32f0  adrp x8,0x710523d000
7101ce32f4  add x8,x8,#0x9a8
7101ce32f8  stp x8,xzr,[x25, #0x10]
7101ce32fc  cbz x0,0x7101ce3304
7101ce3300  bl 0x710392eb40
7101ce3304  mov x0,x25
7101ce3308  bl 0x710392eb40
7101ce330c  ldur x0,[x29, #-0xb8]
7101ce3310  adrp x8,0x710523d000
7101ce3314  add x8,x8,#0x9a8
7101ce3318  stp x8,xzr,[x29, #-0xc0]
7101ce331c  cbz x0,0x7101ce3324
7101ce3320  bl 0x710392eb40
7101ce3324  ldr x8,[x20, #0x8]
7101ce3328  add x8,x8,#0x8
7101ce332c  ldr x9,[x8]
7101ce3330  tst w19,#0xffff
7101ce3334  b.eq 0x7101ce35a4
7101ce3338  cbz x9,0x7101ce35a4
7101ce333c  and w19,w23,#0xffff
7101ce3340  mov w2,wzr
7101ce3344  strb wzr,[sp, #0x248]
7101ce3348  cmp w19,#0x3
7101ce334c  str xzr,[sp, #0x240]
7101ce3350  b.hi 0x7101ce3364
7101ce3354  adrp x8,0x710446a000
7101ce3358  add x8,x8,#0x5c0
7101ce335c  sxth x9,w23
7101ce3360  ldr w2,[x8, x9, LSL #0x2]
7101ce3364  adrp x1,0x710432a000
7101ce3368  add x1,x1,#0x1d6
7101ce336c  add x0,sp,#0x240
7101ce3370  add x25,sp,#0x240
7101ce3374  bl 0x710062dc20
7101ce3378  adrp x1,0x7104401000
7101ce337c  add x1,x1,#0xdad
7101ce3380  sub x8,x29,#0xc0
7101ce3384  mov x0,x20
7101ce3388  bl 0x7103776640
7101ce338c  fmov s8,0x3f800000
7101ce3390  add x27,x25,#0x8
7101ce3394  ldur x25,[x29, #-0xb8]
7101ce3398  mov x0,x25
7101ce339c  mov v0.16B,v8.16B
7101ce33a0  mov x1,x27
7101ce33a4  bl 0x7103778300
7101ce33a8  adrp x1,0x7104308000
7101ce33ac  add x1,x1,#0xc5c
7101ce33b0  sub x8,x29,#0x78
7101ce33b4  mov x0,x20
7101ce33b8  bl 0x7103776640
7101ce33bc  ldur x26,[x29, #-0x70]
7101ce33c0  mov v0.16B,v8.16B
7101ce33c4  mov x1,x27
7101ce33c8  mov x0,x26
7101ce33cc  bl 0x7103778300
7101ce33d0  cmp w19,#0x1
7101ce33d4  b.hi 0x7101ce3548
7101ce33d8  ldr x1,[x21, #0x2c8]
7101ce33dc  cbz x1,0x7101ce3400
7101ce33e0  add x0,sp,#0x20
7101ce33e4  orr w2,wzr,#0x3
7101ce33e8  bl 0x7103771d60
7101ce33ec  ldr x0,[sp, #0x28]
7101ce33f0  ldr x8,[x0]
7101ce33f4  cbz x8,0x7101ce340c
7101ce33f8  ldr x27,[x8, #0x88]
7101ce33fc  b 0x7101ce3414
7101ce3400  add x0,sp,#0x20
7101ce3404  bl 0x7103776290
7101ce3408  b 0x7101ce3438
7101ce340c  adrp x27,0x7104867000
7101ce3410  add x27,x27,#0xc2e
7101ce3414  adrp x8,0x710523d000
7101ce3418  add x8,x8,#0x9c8
7101ce341c  stp x8,xzr,[sp, #0x20]
7101ce3420  cbz x0,0x7101ce3428
7101ce3424  bl 0x710392eb40
7101ce3428  add x8,sp,#0x20
7101ce342c  mov x0,x20
7101ce3430  mov x1,x27
7101ce3434  bl 0x7103776640
7101ce3438  ldr x27,[sp, #0x28]
7101ce343c  tst w23,#0xffff
7101ce3440  b.eq 0x7101ce3450
7101ce3444  adrp x1,0x710439d000
7101ce3448  add x1,x1,#0x5d0
7101ce344c  b 0x7101ce3458
7101ce3450  adrp x1,0x71043e0000
7101ce3454  add x1,x1,#0x2dd
7101ce3458  fmov s0,0x3f800000
7101ce345c  mov x0,x27
7101ce3460  bl 0x7103778300
7101ce3464  adrp x19,0x710523d000
7101ce3468  add x19,x19,#0x988
7101ce346c  stp x19,xzr,[sp, #0x20]
7101ce3470  cbz x27,0x7101ce3494
7101ce3474  ldr x0,[x27, #0x18]
7101ce3478  adrp x8,0x710523d000
7101ce347c  add x8,x8,#0x9a8
7101ce3480  stp x8,xzr,[x27, #0x10]
7101ce3484  cbz x0,0x7101ce348c
7101ce3488  bl 0x710392eb40
7101ce348c  mov x0,x27
7101ce3490  bl 0x710392eb40
7101ce3494  ldr x1,[x21, #0x2c8]
7101ce3498  cbz x1,0x7101ce34bc
7101ce349c  add x0,sp,#0x20
7101ce34a0  mov w2,#0x4
7101ce34a4  bl 0x7103771d60
7101ce34a8  ldr x0,[sp, #0x28]
7101ce34ac  ldr x8,[x0]
7101ce34b0  cbz x8,0x7101ce34c8
7101ce34b4  ldr x27,[x8, #0x88]
7101ce34b8  b 0x7101ce34d0
7101ce34bc  add x0,sp,#0x20
7101ce34c0  bl 0x7103776290
7101ce34c4  b 0x7101ce34f4
7101ce34c8  adrp x27,0x7104867000
7101ce34cc  add x27,x27,#0xc2e
7101ce34d0  adrp x8,0x710523d000
7101ce34d4  add x8,x8,#0x9c8
7101ce34d8  stp x8,xzr,[sp, #0x20]
7101ce34dc  cbz x0,0x7101ce34e4
7101ce34e0  bl 0x710392eb40
7101ce34e4  add x8,sp,#0x20
7101ce34e8  mov x0,x20
7101ce34ec  mov x1,x27
7101ce34f0  bl 0x7103776640
7101ce34f4  ldr x27,[sp, #0x28]
7101ce34f8  tst w23,#0xffff
7101ce34fc  b.eq 0x7101ce350c
7101ce3500  adrp x1,0x710439d000
7101ce3504  add x1,x1,#0x5d0
7101ce3508  b 0x7101ce3514
7101ce350c  adrp x1,0x71043e0000
7101ce3510  add x1,x1,#0x2dd
7101ce3514  fmov s0,0x3f800000
7101ce3518  mov x0,x27
7101ce351c  bl 0x7103778300
7101ce3520  stp x19,xzr,[sp, #0x20]
7101ce3524  cbz x27,0x7101ce3548
7101ce3528  ldr x0,[x27, #0x18]
7101ce352c  adrp x8,0x710523d000
7101ce3530  add x8,x8,#0x9a8
7101ce3534  stp x8,xzr,[x27, #0x10]
7101ce3538  cbz x0,0x7101ce3540
7101ce353c  bl 0x710392eb40
7101ce3540  mov x0,x27
7101ce3544  bl 0x710392eb40
7101ce3548  adrp x19,0x710523d000
7101ce354c  add x19,x19,#0x988
7101ce3550  add x27,sp,#0x240
7101ce3554  stp x19,xzr,[x29, #-0x78]
7101ce3558  cbz x26,0x7101ce357c
7101ce355c  ldr x0,[x26, #0x18]
7101ce3560  adrp x8,0x710523d000
7101ce3564  add x8,x8,#0x9a8
7101ce3568  stp x8,xzr,[x26, #0x10]
7101ce356c  cbz x0,0x7101ce3574
7101ce3570  bl 0x710392eb40
7101ce3574  mov x0,x26
7101ce3578  bl 0x710392eb40
7101ce357c  stp x19,xzr,[x29, #-0xc0]
7101ce3580  cbz x25,0x7101ce35a4
7101ce3584  ldr x0,[x25, #0x18]
7101ce3588  adrp x8,0x710523d000
7101ce358c  add x8,x8,#0x9a8
7101ce3590  stp x8,xzr,[x25, #0x10]
7101ce3594  cbz x0,0x7101ce359c
7101ce3598  bl 0x710392eb40
7101ce359c  mov x0,x25
7101ce35a0  bl 0x710392eb40
7101ce35a4  adrp x1,0x71042c4000
7101ce35a8  add x1,x1,#0xf39
7101ce35ac  add x8,sp,#0x240
7101ce35b0  mov x0,x20
7101ce35b4  bl 0x7103776910
7101ce35b8  ldrb w8,[x21, #0x305]
7101ce35bc  cbz w8,0x7101ce35c8
7101ce35c0  mov w8,wzr
7101ce35c4  b 0x7101ce35d4
7101ce35c8  ldrb w8,[x21, #0x304]
7101ce35cc  cmp w8,#0x0
7101ce35d0  cset w8,eq
7101ce35d4  ldr x0,[sp, #0x248]
7101ce35d8  ldr x9,[x0]
7101ce35dc  cbz x9,0x7101ce35f0
7101ce35e0  ldrb w10,[x9, #0x58]
7101ce35e4  and w10,w10,#0xfe
7101ce35e8  orr w8,w10,w8
7101ce35ec  strb w8,[x9, #0x58]
7101ce35f0  adrp x19,0x710523d000
7101ce35f4  add x19,x19,#0x9a8
7101ce35f8  str x19,[sp, #0x240]
7101ce35fc  str xzr,[sp, #0x248]
7101ce3600  cbz x0,0x7101ce3608
7101ce3604  bl 0x710392eb40
7101ce3608  add x0,sp,#0xcf0
7101ce360c  mov x1,x20
7101ce3610  bl 0x7103776390
7101ce3614  add x1,sp,#0xcf0
7101ce3618  mov x0,x21
7101ce361c  mov x2,x22
7101ce3620  mov x3,x24
7101ce3624  bl 0x7101ce1050
7101ce3628  ldr x24,[sp, #0xcf8]
7101ce362c  adrp x26,0x710523d000
7101ce3630  add x26,x26,#0x988
7101ce3634  str x26,[sp, #0xcf0]
7101ce3638  str xzr,[sp, #0xcf8]
7101ce363c  cbz x24,0x7101ce3658
7101ce3640  ldr x0,[x24, #0x18]
7101ce3644  stp x19,xzr,[x24, #0x10]
7101ce3648  cbz x0,0x7101ce3650
7101ce364c  bl 0x710392eb40
7101ce3650  mov x0,x24
7101ce3654  bl 0x710392eb40
7101ce3658  add x0,sp,#0x240
7101ce365c  add x24,sp,#0x240
7101ce3660  bl 0x7103776290
7101ce3664  add x8,x21,#0x338
7101ce3668  cmp x8,x24
7101ce366c  b.eq 0x7101ce369c
7101ce3670  ldr x8,[sp, #0x248]
7101ce3674  str xzr,[sp, #0x248]
7101ce3678  ldr x24,[x21, #0x340]
7101ce367c  str x8,[x21, #0x340]
7101ce3680  cbz x24,0x7101ce369c
7101ce3684  ldr x0,[x24, #0x18]
7101ce3688  stp x19,xzr,[x24, #0x10]
7101ce368c  cbz x0,0x7101ce3694
7101ce3690  bl 0x710392eb40
7101ce3694  mov x0,x24
7101ce3698  bl 0x710392eb40
7101ce369c  ldr x24,[sp, #0x248]
7101ce36a0  str x26,[sp, #0x240]
7101ce36a4  str xzr,[sp, #0x248]
7101ce36a8  cbz x24,0x7101ce36c4
7101ce36ac  ldr x0,[x24, #0x18]
7101ce36b0  stp x19,xzr,[x24, #0x10]
7101ce36b4  cbz x0,0x7101ce36bc
7101ce36b8  bl 0x710392eb40
7101ce36bc  mov x0,x24
7101ce36c0  bl 0x710392eb40
7101ce36c4  add x0,sp,#0x240
7101ce36c8  add x25,sp,#0x240
7101ce36cc  bl 0x7103776290
7101ce36d0  add x24,x21,#0x350
7101ce36d4  cmp x24,x25
7101ce36d8  b.eq 0x7101ce3708
7101ce36dc  ldr x8,[sp, #0x248]
7101ce36e0  str xzr,[sp, #0x248]
7101ce36e4  ldr x25,[x21, #0x358]
7101ce36e8  str x8,[x21, #0x358]
7101ce36ec  cbz x25,0x7101ce3708
7101ce36f0  ldr x0,[x25, #0x18]
7101ce36f4  stp x19,xzr,[x25, #0x10]
7101ce36f8  cbz x0,0x7101ce3700
7101ce36fc  bl 0x710392eb40
7101ce3700  mov x0,x25
7101ce3704  bl 0x710392eb40
7101ce3708  ldr x25,[sp, #0x248]
7101ce370c  str x26,[sp, #0x240]
7101ce3710  str xzr,[sp, #0x248]
7101ce3714  cbz x25,0x7101ce3730
7101ce3718  ldr x0,[x25, #0x18]
7101ce371c  stp x19,xzr,[x25, #0x10]
7101ce3720  cbz x0,0x7101ce3728
7101ce3724  bl 0x710392eb40
7101ce3728  mov x0,x25
7101ce372c  bl 0x710392eb40
7101ce3730  and w8,w23,#0xffff
7101ce3734  cmp w8,#0x4
7101ce3738  b.hi 0x7101ce4d48
7101ce373c  and x8,x23,#0xffff
7101ce3740  adrp x9,0x71044fa000
7101ce3744  add x9,x9,#0xb4
7101ce3748  ldrsw x8,[x9, x8, LSL #0x2]
7101ce374c  add x8,x8,x9
7101ce3750  br x8
7101ce3754  mov x8,#0xff0000000000
7101ce3758  movk x8,#0x13ff, LSL #48
7101ce375c  stur xzr,[sp, #0x8d]
7101ce3760  stp xzr,xzr,[sp, #0x20]
7101ce3764  add x2,sp,#0x20
7101ce3768  str x8,[sp, #0x1c8]
7101ce376c  mov x8,#0xff0000000000
7101ce3770  mov x1,x22
7101ce3774  movk x8,#0x5aff, LSL #48
7101ce3778  str x8,[sp, #0x1d0]
7101ce377c  mov x8,#0xff0000000000
7101ce3780  stp xzr,xzr,[sp, #0x80]
7101ce3784  movk x8,#0xc1ff, LSL #48
7101ce3788  add x23,sp,#0x20
7101ce378c  strh wzr,[sp, #0x38]
7101ce3790  strh wzr,[sp, #0x30]
7101ce3794  str x8,[sp, #0x238]
7101ce3798  adrp x8,0x710532f000
7101ce379c  ldr x8,[x8, #0x8f8]
7101ce37a0  str wzr,[sp, #0x34]
7101ce37a4  str xzr,[sp, #0x78]
7101ce37a8  str xzr,[sp, #0x1a8]
7101ce37ac  strh wzr,[sp, #0x1b0]
7101ce37b0  strh wzr,[sp, #0x1dc]
7101ce37b4  str wzr,[sp, #0x1d8]
7101ce37b8  ldr x0,[x8, #0x8]
7101ce37bc  bl 0x710334f120
7101ce37c0  cmp w0,#0x3
7101ce37c4  b.ne 0x7101ce4d48
7101ce37c8  adrp x1,0x710436c000
7101ce37cc  add x1,x1,#0x539
7101ce37d0  sub x8,x29,#0x78
7101ce37d4  mov x0,x20
7101ce37d8  bl 0x7103776640
7101ce37dc  adrp x1,0x7104401000
7101ce37e0  add x1,x1,#0xdad
7101ce37e4  sub x8,x29,#0xc0
7101ce37e8  mov x0,x20
7101ce37ec  bl 0x7103776640
7101ce37f0  adrp x1,0x710425f000
7101ce37f4  add x1,x1,#0xd0b
7101ce37f8  add x8,sp,#0x240
7101ce37fc  sub x0,x29,#0xc0
7101ce3800  bl 0x7103776910
7101ce3804  add x3,x23,#0xa6
7101ce3808  adrp x1,0x7104401000
7101ce380c  add x1,x1,#0x790
7101ce3810  add x0,sp,#0x240
7101ce3814  mov w2,#0x1
7101ce3818  bl 0x710377a280
7101ce381c  ldr x0,[sp, #0x248]
7101ce3820  str x19,[sp, #0x240]
7101ce3824  str xzr,[sp, #0x248]
7101ce3828  cbz x0,0x7101ce3830
7101ce382c  bl 0x710392eb40
7101ce3830  ldrb w2,[x28, #0x2]
7101ce3834  ldrb w3,[x28, #0x3]
7101ce3838  mov x0,x21
7101ce383c  mov x1,x20
7101ce3840  bl 0x7101cdfdf0
7101ce3844  ldr x1,[x21, #0x2c8]
7101ce3848  cbz x1,0x7101ce3e00
7101ce384c  add x0,sp,#0x240
7101ce3850  orr w2,wzr,#0x3
7101ce3854  bl 0x7103771d60
7101ce3858  ldr x0,[sp, #0x248]
7101ce385c  ldr x8,[x0]
7101ce3860  cbz x8,0x7101ce3ee0
7101ce3864  ldr x22,[x8, #0x88]
7101ce3868  b 0x7101ce3ee8
7101ce386c  add x23,sp,#0x240
7101ce3870  add x0,x23,#0xe8
7101ce3874  str wzr,[sp, #0x254]
7101ce3878  strh wzr,[sp, #0x258]
7101ce387c  strh wzr,[sp, #0x250]
7101ce3880  str xzr,[sp, #0x248]
7101ce3884  str xzr,[sp, #0x240]
7101ce3888  stur xzr,[x27, #0x6d]
7101ce388c  str xzr,[sp, #0x2a8]
7101ce3890  str xzr,[sp, #0x2a0]
7101ce3894  str xzr,[sp, #0x298]
7101ce3898  stur xzr,[x27, #0xd6]
7101ce389c  str xzr,[sp, #0x310]
7101ce38a0  str xzr,[sp, #0x308]
7101ce38a4  str xzr,[sp, #0x300]
7101ce38a8  str xzr,[sp, #0x2f8]
7101ce38ac  str xzr,[sp, #0x2f0]
7101ce38b0  str xzr,[sp, #0x2e8]
7101ce38b4  str xzr,[sp, #0x2e0]
7101ce38b8  str xzr,[sp, #0x2d8]
7101ce38bc  str xzr,[sp, #0x2d0]
7101ce38c0  str xzr,[sp, #0x2c8]
7101ce38c4  str xzr,[sp, #0x2c0]
7101ce38c8  str xzr,[sp, #0x3e0]
7101ce38cc  str xzr,[sp, #0x3d8]
7101ce38d0  str xzr,[sp, #0x3d0]
7101ce38d4  str xzr,[sp, #0x3c8]
7101ce38d8  str xzr,[sp, #0x3c0]
7101ce38dc  str xzr,[sp, #0x3b8]
7101ce38e0  str xzr,[sp, #0x3b0]
7101ce38e4  str xzr,[sp, #0x3a8]
7101ce38e8  str xzr,[sp, #0x3a0]
7101ce38ec  str xzr,[sp, #0x398]
7101ce38f0  str xzr,[sp, #0x390]
7101ce38f4  str xzr,[sp, #0x388]
7101ce38f8  str xzr,[sp, #0x380]
7101ce38fc  str xzr,[sp, #0x378]
7101ce3900  str xzr,[sp, #0x370]
7101ce3904  str xzr,[sp, #0x368]
7101ce3908  str xzr,[sp, #0x360]
7101ce390c  str xzr,[sp, #0x358]
7101ce3910  str xzr,[sp, #0x350]
7101ce3914  str xzr,[sp, #0x348]
7101ce3918  str xzr,[sp, #0x340]
7101ce391c  str xzr,[sp, #0x338]
7101ce3920  str xzr,[sp, #0x330]
7101ce3924  str xzr,[sp, #0x328]
7101ce3928  str xzr,[sp, #0x320]
7101ce392c  bl 0x71004f5770
7101ce3930  add x8,x23,#0x1ce
7101ce3934  str wzr,[sp, #0x418]
7101ce3938  str xzr,[x8]
7101ce393c  adrp x8,0x710532f000
7101ce3940  ldr x8,[x8, #0x8f8]
7101ce3944  str xzr,[sp, #0x408]
7101ce3948  str xzr,[sp, #0x400]
7101ce394c  add x2,sp,#0x240
7101ce3950  mov x1,x22
7101ce3954  str xzr,[sp, #0x3f8]
7101ce3958  str xzr,[sp, #0x3f0]
7101ce395c  str xzr,[sp, #0x3e8]
7101ce3960  str xzr,[sp, #0x4b8]
7101ce3964  str xzr,[sp, #0x4b0]
7101ce3968  str xzr,[sp, #0x4a8]
7101ce396c  str xzr,[sp, #0x4a0]
7101ce3970  str xzr,[sp, #0x498]
7101ce3974  str xzr,[sp, #0x490]
7101ce3978  str xzr,[sp, #0x488]
7101ce397c  str xzr,[sp, #0x480]
7101ce3980  str xzr,[sp, #0x478]
7101ce3984  str xzr,[sp, #0x470]
7101ce3988  str xzr,[sp, #0x468]
7101ce398c  str xzr,[sp, #0x460]
7101ce3990  str xzr,[sp, #0x458]
7101ce3994  str xzr,[sp, #0x450]
7101ce3998  str xzr,[sp, #0x448]
7101ce399c  str xzr,[sp, #0x440]
7101ce39a0  str xzr,[sp, #0x438]
7101ce39a4  str xzr,[sp, #0x430]
7101ce39a8  str xzr,[sp, #0x428]
7101ce39ac  str xzr,[sp, #0x420]
7101ce39b0  strb wzr,[sp, #0x4f0]
7101ce39b4  str xzr,[sp, #0x4e8]
7101ce39b8  ldr x0,[x8, #0x8]
7101ce39bc  bl 0x710334e6a0
7101ce39c0  cmp w0,#0x3
7101ce39c4  b.ne 0x7101ce4d48
7101ce39c8  ldr x8,[x20, #0x8]
7101ce39cc  ldr x8,[x8, #0x8]
7101ce39d0  cbz x8,0x7101ce4d34
7101ce39d4  adrp x1,0x7104401000
7101ce39d8  add x1,x1,#0xdad
7101ce39dc  add x8,sp,#0x20
7101ce39e0  mov x0,x20
7101ce39e4  bl 0x7103776640
7101ce39e8  adrp x1,0x710425f000
7101ce39ec  add x1,x1,#0xd0b
7101ce39f0  sub x8,x29,#0xc0
7101ce39f4  add x0,sp,#0x20
7101ce39f8  bl 0x7103776910
7101ce39fc  add x8,sp,#0x240
7101ce3a00  add x3,x8,#0x284
7101ce3a04  adrp x1,0x7104401000
7101ce3a08  add x1,x1,#0x790
7101ce3a0c  sub x0,x29,#0xc0
7101ce3a10  mov w2,#0x1
7101ce3a14  bl 0x710377a280
7101ce3a18  ldur x0,[x29, #-0xb8]
7101ce3a1c  stp x19,xzr,[x29, #-0xc0]
7101ce3a20  cbz x0,0x7101ce3a28
7101ce3a24  bl 0x710392eb40
7101ce3a28  adrp x1,0x71043ae000
7101ce3a2c  add x1,x1,#0x1be
7101ce3a30  sub x8,x29,#0xc0
7101ce3a34  mov x0,x20
7101ce3a38  bl 0x7103776910
7101ce3a3c  ldrsw x8,[sp, #0x320]
7101ce3a40  mov x9,#-0x7777
7101ce3a44  movk x9,#0x8888, LSL #16
7101ce3a48  mul x9,x8,x9
7101ce3a4c  lsr x9,x9,#0x20
7101ce3a50  add w9,w9,w8
7101ce3a54  asr w10,w9,#0x5
7101ce3a58  add w9,w10,w9, LSR #0x1f
7101ce3a5c  mov w10,#0xffffffc4
7101ce3a60  madd w8,w9,w10,w8
7101ce3a64  cmp w9,#0x3e7
7101ce3a68  mov w10,#0x3e7
7101ce3a6c  csel w9,w9,w10,lt
7101ce3a70  cmp w8,#0x3e7
7101ce3a74  mov w11,#0x3e8
7101ce3a78  csel w8,w8,w10,lt
7101ce3a7c  madd w2,w9,w11,w8
7101ce3a80  sub x0,x29,#0xc0
7101ce3a84  mov w1,#0x1
7101ce3a88  bl 0x710377a310
7101ce3a8c  ldur x0,[x29, #-0xb8]
7101ce3a90  stp x19,xzr,[x29, #-0xc0]
7101ce3a94  cbz x0,0x7101ce3a9c
7101ce3a98  bl 0x710392eb40
7101ce3a9c  adrp x1,0x710436c000
7101ce3aa0  add x1,x1,#0x539
7101ce3aa4  sub x8,x29,#0x78
7101ce3aa8  mov x0,x20
7101ce3aac  bl 0x7103776640
7101ce3ab0  adrp x1,0x7104319000
7101ce3ab4  add x1,x1,#0x53
7101ce3ab8  sub x8,x29,#0xd0
7101ce3abc  sub x0,x29,#0x78
7101ce3ac0  bl 0x7103776910
7101ce3ac4  ldr w8,[sp, #0x2c8]
7101ce3ac8  and w8,w8,#0xf000
7101ce3acc  cmp w8,#0x2, LSL #12
7101ce3ad0  b.ls 0x7101ce3dc0
7101ce3ad4  ldrb w8,[sp, #0x3fb]
7101ce3ad8  cbz w8,0x7101ce3dc0
7101ce3adc  adrp x1,0x710438c000
7101ce3ae0  add x1,x1,#0xc3f
7101ce3ae4  b 0x7101ce3dc8
7101ce3ae8  add x23,sp,#0x240
7101ce3aec  add x0,x23,#0xf8
7101ce3af0  str wzr,[sp, #0x254]
7101ce3af4  strh wzr,[sp, #0x258]
7101ce3af8  strh wzr,[sp, #0x250]
7101ce3afc  str xzr,[sp, #0x248]
7101ce3b00  str xzr,[sp, #0x240]
7101ce3b04  stur xzr,[x27, #0x6d]
7101ce3b08  str xzr,[sp, #0x2a8]
7101ce3b0c  str xzr,[sp, #0x2a0]
7101ce3b10  str xzr,[sp, #0x298]
7101ce3b14  str xzr,[sp, #0x2c0]
7101ce3b18  bl 0x710143c4d0
7101ce3b1c  adrp x9,0x710532f000
7101ce3b20  ldr x9,[x9, #0x8f8]
7101ce3b24  mov x8,#0xff0000000000
7101ce3b28  movk x8,#0xc1ff, LSL #48
7101ce3b2c  str x8,[sp, #0x5d0]
7101ce3b30  str x8,[sp, #0x5e0]
7101ce3b34  str x8,[sp, #0x5f0]
7101ce3b38  str x8,[sp, #0x600]
7101ce3b3c  add x2,sp,#0x240
7101ce3b40  str x8,[sp, #0x610]
7101ce3b44  mov x1,x22
7101ce3b48  str x8,[sp, #0x620]
7101ce3b4c  str x8,[sp, #0x630]
7101ce3b50  str x8,[sp, #0x640]
7101ce3b54  str x8,[sp, #0x650]
7101ce3b58  str x8,[sp, #0x660]
7101ce3b5c  ldr x0,[x9, #0x8]
7101ce3b60  bl 0x710334e9e0
7101ce3b64  cmp w0,#0x3
7101ce3b68  b.ne 0x7101ce4d48
7101ce3b6c  add x2,x23,#0x80
7101ce3b70  mov x0,x21
7101ce3b74  mov x1,x20
7101ce3b78  mov w3,wzr
7101ce3b7c  bl 0x7101ce5ab0
7101ce3b80  adrp x1,0x7104401000
7101ce3b84  add x1,x1,#0xdad
7101ce3b88  add x8,sp,#0x20
7101ce3b8c  mov x0,x20
7101ce3b90  bl 0x7103776640
7101ce3b94  adrp x1,0x710425f000
7101ce3b98  add x1,x1,#0xd0b
7101ce3b9c  sub x8,x29,#0xc0
7101ce3ba0  add x0,sp,#0x20
7101ce3ba4  bl 0x7103776910
7101ce3ba8  add x3,x23,#0x434
7101ce3bac  adrp x1,0x7104401000
7101ce3bb0  add x1,x1,#0x790
7101ce3bb4  sub x0,x29,#0xc0
7101ce3bb8  mov w2,#0x1
7101ce3bbc  bl 0x710377a280
7101ce3bc0  ldur x0,[x29, #-0xb8]
7101ce3bc4  stp x19,xzr,[x29, #-0xc0]
7101ce3bc8  cbnz x0,0x7101ce3ecc
7101ce3bcc  b 0x7101ce3ed0
7101ce3bd0  add x23,sp,#0x240
7101ce3bd4  add x0,x23,#0xf8
7101ce3bd8  str wzr,[sp, #0x254]
7101ce3bdc  strh wzr,[sp, #0x258]
7101ce3be0  strh wzr,[sp, #0x250]
7101ce3be4  str xzr,[sp, #0x248]
7101ce3be8  str xzr,[sp, #0x240]
7101ce3bec  stur xzr,[x27, #0x6d]
7101ce3bf0  str xzr,[sp, #0x2a8]
7101ce3bf4  str xzr,[sp, #0x2a0]
7101ce3bf8  str xzr,[sp, #0x298]
7101ce3bfc  str xzr,[sp, #0x2c0]
7101ce3c00  bl 0x710143c4d0
7101ce3c04  adrp x8,0x710532f000
7101ce3c08  ldr x8,[x8, #0x8f8]
7101ce3c0c  ldr x0,[x8, #0x8]
7101ce3c10  add x2,sp,#0x240
7101ce3c14  mov x1,x22
7101ce3c18  bl 0x710334ec20
7101ce3c1c  cmp w0,#0x3
7101ce3c20  b.ne 0x7101ce4d48
7101ce3c24  add x2,x23,#0x80
7101ce3c28  mov w3,#0x1
7101ce3c2c  mov x0,x21
7101ce3c30  mov x1,x20
7101ce3c34  bl 0x7101ce5ab0
7101ce3c38  adrp x1,0x710436c000
7101ce3c3c  add x1,x1,#0x539
7101ce3c40  add x8,sp,#0x20
7101ce3c44  mov x0,x20
7101ce3c48  bl 0x7103776640
7101ce3c4c  adrp x1,0x7104291000
7101ce3c50  add x1,x1,#0xd9c
7101ce3c54  sub x8,x29,#0xc0
7101ce3c58  add x0,sp,#0x20
7101ce3c5c  bl 0x7103776910
7101ce3c60  ldr w3,[sp, #0x5d4]
7101ce3c64  adrp x1,0x710425f000
7101ce3c68  add x1,x1,#0x59b
7101ce3c6c  sub x0,x29,#0xc0
7101ce3c70  mov w2,#0x1
7101ce3c74  bl 0x710377a280
7101ce3c78  ldur x0,[x29, #-0xb8]
7101ce3c7c  stp x19,xzr,[x29, #-0xc0]
7101ce3c80  cbz x0,0x7101ce3c88
7101ce3c84  bl 0x710392eb40
7101ce3c88  ldrb w24,[sp, #0x5d0]
7101ce3c8c  cmp x24,#0x8
7101ce3c90  b.cs 0x7101ce50ec
7101ce3c94  add x8,sp,#0x240
7101ce3c98  add x8,x8,x24
7101ce3c9c  ldrb w1,[x8, #0x388]
7101ce3ca0  cmp w1,#0xff
7101ce3ca4  b.eq 0x7101ce3e18
7101ce3ca8  adrp x8,0x710532f000
7101ce3cac  ldr x8,[x8, #0x730]
7101ce3cb0  ldr x8,[x8, #0x8]
7101ce3cb4  add x0,x8,#0x160
7101ce3cb8  bl 0x7103264590
7101ce3cbc  mov x22,x0
7101ce3cc0  b 0x7101ce3e20
7101ce3cc4  mov x8,#0xff0000000000
7101ce3cc8  movk x8,#0xd9ff, LSL #48
7101ce3ccc  str wzr,[sp, #0x254]
7101ce3cd0  strh wzr,[sp, #0x258]
7101ce3cd4  strh wzr,[sp, #0x250]
7101ce3cd8  add x2,sp,#0x240
7101ce3cdc  str xzr,[sp, #0x248]
7101ce3ce0  mov x1,x22
7101ce3ce4  add x23,sp,#0x240
7101ce3ce8  str xzr,[sp, #0x240]
7101ce3cec  stur xzr,[x27, #0x6d]
7101ce3cf0  str x8,[sp, #0x3f8]
7101ce3cf4  adrp x8,0x710532f000
7101ce3cf8  ldr x8,[x8, #0x8f8]
7101ce3cfc  str xzr,[sp, #0x2a8]
7101ce3d00  str xzr,[sp, #0x2a0]
7101ce3d04  str xzr,[sp, #0x298]
7101ce3d08  str xzr,[sp, #0x3c0]
7101ce3d0c  strh wzr,[sp, #0x3c8]
7101ce3d10  ldr x0,[x8, #0x8]
7101ce3d14  bl 0x710334f710
7101ce3d18  cmp w0,#0x3
7101ce3d1c  b.ne 0x7101ce4d48
7101ce3d20  adrp x1,0x710436c000
7101ce3d24  add x1,x1,#0x539
7101ce3d28  sub x8,x29,#0x78
7101ce3d2c  mov x0,x20
7101ce3d30  bl 0x7103776640
7101ce3d34  adrp x1,0x7104401000
7101ce3d38  add x1,x1,#0xdad
7101ce3d3c  sub x8,x29,#0xc0
7101ce3d40  mov x0,x20
7101ce3d44  bl 0x7103776640
7101ce3d48  adrp x1,0x710425f000
7101ce3d4c  add x1,x1,#0xd0b
7101ce3d50  add x8,sp,#0x20
7101ce3d54  sub x0,x29,#0xc0
7101ce3d58  bl 0x7103776910
7101ce3d5c  add x3,x23,#0x9e
7101ce3d60  adrp x1,0x7104401000
7101ce3d64  add x1,x1,#0x790
7101ce3d68  add x0,sp,#0x20
7101ce3d6c  mov w2,#0x1
7101ce3d70  bl 0x710377a280
7101ce3d74  ldr x0,[sp, #0x28]
7101ce3d78  stp x19,xzr,[sp, #0x20]
7101ce3d7c  cbz x0,0x7101ce3d84
7101ce3d80  bl 0x710392eb40
7101ce3d84  ldrb w2,[x28, #0x2]
7101ce3d88  ldrb w3,[x28, #0x3]
7101ce3d8c  mov x0,x21
7101ce3d90  mov x1,x20
7101ce3d94  bl 0x7101cdfdf0
7101ce3d98  ldr x1,[x21, #0x2c8]
7101ce3d9c  cbz x1,0x7101ce3e0c
7101ce3da0  add x0,sp,#0x20
7101ce3da4  orr w2,wzr,#0x3
7101ce3da8  bl 0x7103771d60
7101ce3dac  ldr x0,[sp, #0x28]
7101ce3db0  ldr x8,[x0]
7101ce3db4  cbz x8,0x7101ce4074
7101ce3db8  ldr x22,[x8, #0x88]
7101ce3dbc  b 0x7101ce407c
7101ce3dc0  adrp x1,0x71043f0000
7101ce3dc4  add x1,x1,#0xb4e
7101ce3dc8  sub x0,x29,#0xd0
7101ce3dcc  bl 0x710377a120
7101ce3dd0  ldur x0,[x29, #-0xc8]
7101ce3dd4  stp x19,xzr,[x29, #-0xd0]
7101ce3dd8  cbz x0,0x7101ce3de0
7101ce3ddc  bl 0x710392eb40
7101ce3de0  ldur x22,[x29, #-0x70]
7101ce3de4  stp x26,xzr,[x29, #-0x78]
7101ce3de8  cbz x22,0x7101ce3ed0
7101ce3dec  ldr x0,[x22, #0x18]
7101ce3df0  stp x19,xzr,[x22, #0x10]
7101ce3df4  cbz x0,0x7101ce3ec8
7101ce3df8  bl 0x710392eb40
7101ce3dfc  b 0x7101ce3ec8
7101ce3e00  add x0,sp,#0x240
7101ce3e04  bl 0x7103776290
7101ce3e08  b 0x7101ce3f10
7101ce3e0c  add x0,sp,#0x20
7101ce3e10  bl 0x7103776290
7101ce3e14  b 0x7101ce40a0
7101ce3e18  mov x22,#0xff0000000000
7101ce3e1c  movk x22,#0xc1ff, LSL #48
7101ce3e20  adrp x8,0x710532f000
7101ce3e24  ldr x8,[x8, #0x730]
7101ce3e28  ldr x25,[x8, #0x8]
7101ce3e2c  ldr x23,[x25, #0x168]
7101ce3e30  mov x0,x23
7101ce3e34  mov x1,x22
7101ce3e38  bl 0x71032632a0
7101ce3e3c  tbz w0,#0x0,0x7101ce3e50
7101ce3e40  mov x1,#0xb807
7101ce3e44  movk x1,#0xb1cc, LSL #16
7101ce3e48  movk x1,#0x11, LSL #32
7101ce3e4c  b 0x7101ce3e6c
7101ce3e50  add x0,x25,#0x160
7101ce3e54  mov x1,x22
7101ce3e58  bl 0x71032648e0
7101ce3e5c  tbz w0,#0x0,0x7101ce3e78
7101ce3e60  mov x1,#0xf67e
7101ce3e64  movk x1,#0x3829, LSL #16
7101ce3e68  movk x1,#0x14, LSL #32
7101ce3e6c  mov x0,x23
7101ce3e70  bl 0x71032631a0
7101ce3e74  mov x22,x0
7101ce3e78  mov w8,#0x50
7101ce3e7c  add x9,sp,#0x240
7101ce3e80  madd x8,x24,x8,x9
7101ce3e84  ldrb w2,[x8, #0x10a]
7101ce3e88  ldr x0,[x21, #0x238]
7101ce3e8c  mov w3,#0x2
7101ce3e90  mov x1,x22
7101ce3e94  bl 0x710323f330
7101ce3e98  mov x23,x0
7101ce3e9c  adrp x1,0x71042e7000
7101ce3ea0  add x1,x1,#0x39e
7101ce3ea4  sub x8,x29,#0xc0
7101ce3ea8  add x0,sp,#0x20
7101ce3eac  bl 0x7103776910
7101ce3eb0  ldur x22,[x29, #-0xb8]
7101ce3eb4  mov x0,x22
7101ce3eb8  mov x1,x23
7101ce3ebc  bl 0x7103778b80
7101ce3ec0  stp x19,xzr,[x29, #-0xc0]
7101ce3ec4  cbz x22,0x7101ce3ed0
7101ce3ec8  mov x0,x22
7101ce3ecc  bl 0x710392eb40
7101ce3ed0  ldr x22,[sp, #0x28]
7101ce3ed4  stp x26,xzr,[sp, #0x20]
7101ce3ed8  cbnz x22,0x7101ce4d1c
7101ce3edc  b 0x7101ce4d34
7101ce3ee0  adrp x22,0x7104867000
7101ce3ee4  add x22,x22,#0xc2e
7101ce3ee8  adrp x8,0x710523d000
7101ce3eec  add x8,x8,#0x9c8
7101ce3ef0  str x8,[sp, #0x240]
7101ce3ef4  str xzr,[sp, #0x248]
7101ce3ef8  cbz x0,0x7101ce3f00
7101ce3efc  bl 0x710392eb40
7101ce3f00  add x8,sp,#0x240
7101ce3f04  mov x0,x20
7101ce3f08  mov x1,x22
7101ce3f0c  bl 0x7103776640
7101ce3f10  ldr x22,[sp, #0x248]
7101ce3f14  fmov s0,0x3f800000
7101ce3f18  adrp x1,0x7104319000
7101ce3f1c  add x1,x1,#0x6af
7101ce3f20  mov x0,x22
7101ce3f24  bl 0x7103778300
7101ce3f28  str x26,[sp, #0x240]
7101ce3f2c  str xzr,[sp, #0x248]
7101ce3f30  cbz x22,0x7101ce3f4c
7101ce3f34  ldr x0,[x22, #0x18]
7101ce3f38  stp x19,xzr,[x22, #0x10]
7101ce3f3c  cbz x0,0x7101ce3f44
7101ce3f40  bl 0x710392eb40
7101ce3f44  mov x0,x22
7101ce3f48  bl 0x710392eb40
7101ce3f4c  ldur x22,[x29, #-0xb8]
7101ce3f50  stp x26,xzr,[x29, #-0xc0]
7101ce3f54  cbz x22,0x7101ce3f70
7101ce3f58  ldr x0,[x22, #0x18]
7101ce3f5c  stp x19,xzr,[x22, #0x10]
7101ce3f60  cbz x0,0x7101ce3f68
7101ce3f64  bl 0x710392eb40
7101ce3f68  mov x0,x22
7101ce3f6c  bl 0x710392eb40
7101ce3f70  adrp x8,0x710532f000
7101ce3f74  ldrb w2,[sp, #0x1d8]
7101ce3f78  adrp x1,0x7104280000
7101ce3f7c  add x1,x1,#0xb70
7101ce3f80  ldr x26,[x8, #0x730]
7101ce3f84  mov x0,x20
7101ce3f88  mov x23,#-0x3f00000000000000
7101ce3f8c  bl 0x7103778430
7101ce3f90  ldr x8,[x26, #0x8]
7101ce3f94  ldr x22,[x8, #0x168]
7101ce3f98  mov x1,#0x1d87
7101ce3f9c  movk x1,#0x57ab, LSL #16
7101ce3fa0  movk x1,#0x12, LSL #32
7101ce3fa4  mov x0,x22
7101ce3fa8  bl 0x71032631a0
7101ce3fac  ldr x24,[sp, #0x238]
7101ce3fb0  and x9,x24,#-0x100000000000000
7101ce3fb4  and x8,x0,#0xffffffffff
7101ce3fb8  cmp x9,x23
7101ce3fbc  b.ne 0x7101ce401c
7101ce3fc0  and x9,x24,#0xffffffffff
7101ce3fc4  cbz x9,0x7101ce401c
7101ce3fc8  and x9,x0,#-0x100000000000000
7101ce3fcc  cmp x9,x23
7101ce3fd0  b.ne 0x7101ce3fe4
7101ce3fd4  cbz x8,0x7101ce3fe4
7101ce3fd8  eor x8,x0,x24
7101ce3fdc  tst x8,#0xffffffffff
7101ce3fe0  b.eq 0x7101ce4064
7101ce3fe4  mov x1,#0x1f77
7101ce3fe8  movk x1,#0xd706, LSL #16
7101ce3fec  movk x1,#0x15, LSL #32
7101ce3ff0  mov x0,x22
7101ce3ff4  bl 0x71032631a0
7101ce3ff8  and x8,x0,#-0x100000000000000
7101ce3ffc  cmp x8,x23
7101ce4000  b.ne 0x7101ce4054
7101ce4004  and x8,x0,#0xffffffffff
7101ce4008  cbz x8,0x7101ce4054
7101ce400c  eor x8,x0,x24
7101ce4010  tst x8,#0xffffffffff
7101ce4014  b.ne 0x7101ce4054
7101ce4018  b 0x7101ce4300
7101ce401c  and x9,x0,#-0x100000000000000
7101ce4020  cmp x9,x23
7101ce4024  b.ne 0x7101ce4064
7101ce4028  cbz x8,0x7101ce4064
7101ce402c  mov x1,#0x1f77
7101ce4030  movk x1,#0xd706, LSL #16
7101ce4034  movk x1,#0x15, LSL #32
7101ce4038  mov x0,x22
7101ce403c  bl 0x71032631a0
7101ce4040  and x8,x0,#-0x100000000000000
7101ce4044  cmp x8,x23
7101ce4048  b.ne 0x7101ce4300
7101ce404c  and x8,x0,#0xffffffffff
7101ce4050  cbz x8,0x7101ce4300
7101ce4054  ldr x0,[x20, #0x8]
7101ce4058  adrp x1,0x71043f0000
7101ce405c  add x1,x1,#0xaf2
7101ce4060  b 0x7101ce430c
7101ce4064  ldr x0,[x20, #0x8]
7101ce4068  adrp x1,0x71043ad000
7101ce406c  add x1,x1,#0x8d7
7101ce4070  b 0x7101ce430c
7101ce4074  adrp x22,0x7104867000
7101ce4078  add x22,x22,#0xc2e
7101ce407c  adrp x8,0x710523d000
7101ce4080  add x8,x8,#0x9c8
7101ce4084  stp x8,xzr,[sp, #0x20]
7101ce4088  cbz x0,0x7101ce4090
7101ce408c  bl 0x710392eb40
7101ce4090  add x8,sp,#0x20
7101ce4094  mov x0,x20
7101ce4098  mov x1,x22
7101ce409c  bl 0x7103776640
7101ce40a0  ldr x22,[sp, #0x28]
7101ce40a4  fmov s0,0x3f800000
7101ce40a8  adrp x1,0x7104319000
7101ce40ac  add x1,x1,#0x6af
7101ce40b0  mov x0,x22
7101ce40b4  bl 0x7103778300
7101ce40b8  stp x26,xzr,[sp, #0x20]
7101ce40bc  cbz x22,0x7101ce40d8
7101ce40c0  ldr x0,[x22, #0x18]
7101ce40c4  stp x19,xzr,[x22, #0x10]
7101ce40c8  cbz x0,0x7101ce40d0
7101ce40cc  bl 0x710392eb40
7101ce40d0  mov x0,x22
7101ce40d4  bl 0x710392eb40
7101ce40d8  ldur x22,[x29, #-0xb8]
7101ce40dc  stp x26,xzr,[x29, #-0xc0]
7101ce40e0  cbz x22,0x7101ce40fc
7101ce40e4  ldr x0,[x22, #0x18]
7101ce40e8  stp x19,xzr,[x22, #0x10]
7101ce40ec  cbz x0,0x7101ce40f4
7101ce40f0  bl 0x710392eb40
7101ce40f4  mov x0,x22
7101ce40f8  bl 0x710392eb40
7101ce40fc  ldrb w8,[sp, #0x40e]
7101ce4100  ldur x22,[x29, #-0x70]
7101ce4104  cbz w8,0x7101ce4114
7101ce4108  adrp x1,0x71043be000
7101ce410c  add x1,x1,#0x7bb
7101ce4110  b 0x7101ce411c
7101ce4114  adrp x1,0x7104401000
7101ce4118  add x1,x1,#0x74f
7101ce411c  fmov s0,0x3f800000
7101ce4120  mov x0,x22
7101ce4124  bl 0x7103778300
7101ce4128  ldr w8,[sp, #0x3ec]
7101ce412c  cbz w8,0x7101ce4144
7101ce4130  cmp w8,#0x2
7101ce4134  b.ne 0x7101ce4150
7101ce4138  adrp x1,0x710438c000
7101ce413c  add x1,x1,#0xbeb
7101ce4140  b 0x7101ce4158
7101ce4144  adrp x1,0x7104433000
7101ce4148  add x1,x1,#0x2eb
7101ce414c  b 0x7101ce4158
7101ce4150  adrp x1,0x710434a000
7101ce4154  add x1,x1,#0x4e0
7101ce4158  fmov s0,0x3f800000
7101ce415c  mov x0,x22
7101ce4160  bl 0x7103778300
7101ce4164  adrp x1,0x71042b4000
7101ce4168  add x1,x1,#0x53f
7101ce416c  add x8,sp,#0x20
7101ce4170  sub x0,x29,#0x78
7101ce4174  add x22,sp,#0x20
7101ce4178  bl 0x7103776910
7101ce417c  adrp x1,0x71042e7000
7101ce4180  add x1,x1,#0x36f
7101ce4184  add x0,sp,#0x20
7101ce4188  bl 0x710377a120
7101ce418c  ldr x0,[sp, #0x28]
7101ce4190  stp x19,xzr,[sp, #0x20]
7101ce4194  cbz x0,0x7101ce419c
7101ce4198  bl 0x710392eb40
7101ce419c  adrp x8,0x710532f000
7101ce41a0  ldr x8,[x8, #0x730]
7101ce41a4  ldr x8,[x8, #0x8]
7101ce41a8  ldr x2,[sp, #0x3f8]
7101ce41ac  ldr x1,[x8, #0x278]
7101ce41b0  add x0,sp,#0x20
7101ce41b4  bl 0x71032570e0
7101ce41b8  add x1,x22,#0x8
7101ce41bc  adrp x0,0x710428f000
7101ce41c0  add x0,x0,#0xf21
7101ce41c4  sub x8,x29,#0xc0
7101ce41c8  bl 0x71003a4ca0
7101ce41cc  adrp x1,0x71043cf000
7101ce41d0  add x1,x1,#0x609
7101ce41d4  add x8,sp,#0x20
7101ce41d8  sub x0,x29,#0x78
7101ce41dc  bl 0x7103776640
7101ce41e0  cmp x24,x22
7101ce41e4  b.eq 0x7101ce4214
7101ce41e8  ldr x8,[sp, #0x28]
7101ce41ec  str xzr,[sp, #0x28]
7101ce41f0  ldr x22,[x21, #0x358]
7101ce41f4  str x8,[x21, #0x358]
7101ce41f8  cbz x22,0x7101ce4214
7101ce41fc  ldr x0,[x22, #0x18]
7101ce4200  stp x19,xzr,[x22, #0x10]
7101ce4204  cbz x0,0x7101ce420c
7101ce4208  bl 0x710392eb40
7101ce420c  mov x0,x22
7101ce4210  bl 0x710392eb40
7101ce4214  ldr x22,[sp, #0x28]
7101ce4218  stp x26,xzr,[sp, #0x20]
7101ce421c  cbz x22,0x7101ce4238
7101ce4220  ldr x0,[x22, #0x18]
7101ce4224  stp x19,xzr,[x22, #0x10]
7101ce4228  cbz x0,0x7101ce4230
7101ce422c  bl 0x710392eb40
7101ce4230  mov x0,x22
7101ce4234  bl 0x710392eb40
7101ce4238  adrp x1,0x710437a000
7101ce423c  add x1,x1,#0xe67
7101ce4240  add x8,sp,#0x20
7101ce4244  mov x0,x24
7101ce4248  bl 0x7103776910
7101ce424c  sub x8,x29,#0xc0
7101ce4250  add x22,x8,#0x8
7101ce4254  add x0,sp,#0x20
7101ce4258  mov x1,x22
7101ce425c  bl 0x710377a120
7101ce4260  ldr x0,[sp, #0x28]
7101ce4264  stp x19,xzr,[sp, #0x20]
7101ce4268  cbz x0,0x7101ce4270
7101ce426c  bl 0x710392eb40
7101ce4270  adrp x1,0x71042c3000
7101ce4274  add x1,x1,#0x645
7101ce4278  add x8,sp,#0x20
7101ce427c  mov x0,x24
7101ce4280  bl 0x7103776910
7101ce4284  add x0,sp,#0x20
7101ce4288  mov x1,x22
7101ce428c  bl 0x710377a120
7101ce4290  ldr x0,[sp, #0x28]
7101ce4294  stp x19,xzr,[sp, #0x20]
7101ce4298  cbz x0,0x7101ce42a0
7101ce429c  bl 0x710392eb40
7101ce42a0  ldr x8,[x21, #0x358]
7101ce42a4  ldr x0,[x8, #0x8]
7101ce42a8  bl 0x7103778950
7101ce42ac  ldr x8,[x21, #0x358]
7101ce42b0  ldr x8,[x8, #0x8]
7101ce42b4  cbz x8,0x7101ce4cb4
7101ce42b8  ldr x22,[x8, #0x78]
7101ce42bc  adrp x8,0x710593b000
7101ce42c0  add x8,x8,#0xa40
7101ce42c4  ldarb w8,[x8]
7101ce42c8  tbz w8,#0x0,0x7101ce5064
7101ce42cc  cbz x22,0x7101ce4cb4
7101ce42d0  ldr x8,[x22]
7101ce42d4  ldr x8,[x8]
7101ce42d8  mov x0,x22
7101ce42dc  blr x8
7101ce42e0  cbz x0,0x7101ce4cb4
7101ce42e4  adrp x8,0x710593b000
7101ce42e8  add x8,x8,#0xa58
7101ce42ec  cmp x0,x8
7101ce42f0  b.eq 0x7101ce4c14
7101ce42f4  ldr x0,[x0]
7101ce42f8  cbnz x0,0x7101ce42ec
7101ce42fc  b 0x7101ce4cb4
7101ce4300  ldr x0,[x20, #0x8]
7101ce4304  adrp x1,0x7104412000
7101ce4308  add x1,x1,#0xb2c
7101ce430c  fmov s0,0x3f800000
7101ce4310  bl 0x7103778300
7101ce4314  adrp x1,0x71042f8000
7101ce4318  add x1,x1,#0x436
7101ce431c  sub x8,x29,#0xd0
7101ce4320  sub x0,x29,#0x78
7101ce4324  bl 0x7103776640
7101ce4328  ldur x0,[x29, #-0xc8]
7101ce432c  fmov s0,0x3f800000
7101ce4330  adrp x1,0x71042a3000
7101ce4334  add x1,x1,#0x1f4
7101ce4338  stur x0,[x29, #-0x58]
7101ce433c  bl 0x7103778300
7101ce4340  adrp x1,0x71043cf000
7101ce4344  add x1,x1,#0xca4
7101ce4348  sub x8,x29,#0xc0
7101ce434c  sub x0,x29,#0xd0
7101ce4350  bl 0x7103776910
7101ce4354  ldr x8,[x26, #0x8]
7101ce4358  ldr x2,[sp, #0x1d0]
7101ce435c  add x0,sp,#0x240
7101ce4360  ldr x1,[x8, #0x238]
7101ce4364  add x22,sp,#0x240
7101ce4368  bl 0x71032888e0
7101ce436c  add x22,x22,#0x8
7101ce4370  sub x0,x29,#0xc0
7101ce4374  mov x1,x22
7101ce4378  bl 0x710377a120
7101ce437c  ldur x0,[x29, #-0xb8]
7101ce4380  stp x19,xzr,[x29, #-0xc0]
7101ce4384  cbz x0,0x7101ce438c
7101ce4388  bl 0x710392eb40
7101ce438c  adrp x1,0x71042d6000
7101ce4390  add x1,x1,#0x3ea
7101ce4394  sub x8,x29,#0xe0
7101ce4398  sub x0,x29,#0x78
7101ce439c  str x28,[sp, #0x8]
7101ce43a0  bl 0x7103776640
7101ce43a4  ldur x0,[x29, #-0xd8]
7101ce43a8  fmov s0,0x3f800000
7101ce43ac  adrp x1,0x71042a3000
7101ce43b0  add x1,x1,#0x1f4
7101ce43b4  str x0,[sp, #0x18]
7101ce43b8  bl 0x7103778300
7101ce43bc  adrp x1,0x71043cf000
7101ce43c0  add x1,x1,#0xca4
7101ce43c4  sub x8,x29,#0xc0
7101ce43c8  sub x0,x29,#0xe0
7101ce43cc  sub x24,x29,#0xc0
7101ce43d0  bl 0x7103776910
7101ce43d4  ldr x8,[x26, #0x8]
7101ce43d8  ldr x2,[sp, #0x1c8]
7101ce43dc  add x0,sp,#0x240
7101ce43e0  ldr x1,[x8, #0x248]
7101ce43e4  str x26,[sp]
7101ce43e8  bl 0x7103284890
7101ce43ec  sub x0,x29,#0xc0
7101ce43f0  mov x1,x22
7101ce43f4  bl 0x710377a120
7101ce43f8  ldur x0,[x29, #-0xb8]
7101ce43fc  stp x19,xzr,[x29, #-0xc0]
7101ce4400  cbz x0,0x7101ce4408
7101ce4404  bl 0x710392eb40
7101ce4408  adrp x1,0x71043f0000
7101ce440c  add x1,x1,#0xb03
7101ce4410  sub x8,x29,#0xf0
7101ce4414  sub x0,x29,#0x78
7101ce4418  bl 0x7103776640
7101ce441c  ldur x0,[x29, #-0xe8]
7101ce4420  fmov s0,0x3f800000
7101ce4424  adrp x1,0x71042b4000
7101ce4428  add x1,x1,#0x550
7101ce442c  str x0,[sp, #0x10]
7101ce4430  bl 0x7103778300
7101ce4434  ldrb w2,[sp, #0x1d8]
7101ce4438  adrp x1,0x7104270000
7101ce443c  add x1,x1,#0xc2
7101ce4440  sub x0,x29,#0xf0
7101ce4444  bl 0x7103778430
7101ce4448  ldrb w23,[sp, #0x1da]
7101ce444c  ldrb w28,[sp, #0x1db]
7101ce4450  adrp x1,0x71042e7000
7101ce4454  add x1,x1,#0x38c
7101ce4458  ldrb w27,[sp, #0x1dc]
7101ce445c  sub x8,x29,#0x100
7101ce4460  ldrb w25,[sp, #0x1dd]
7101ce4464  sub x0,x29,#0x78
7101ce4468  bl 0x7103776640
7101ce446c  adrp x1,0x7104308000
7101ce4470  add x1,x1,#0x95d
7101ce4474  add x8,sp,#0xd10
7101ce4478  sub x0,x29,#0x100
7101ce447c  mov w2,wzr
7101ce4480  add x26,x24,#0x8
7101ce4484  bl 0x7103776910
7101ce4488  ldr x22,[sp, #0xd18]
7101ce448c  ldr x24,[x22, #0x10]
7101ce4490  cbz x24,0x7101ce44e4
7101ce4494  add w3,w23,#0x1
7101ce4498  add x0,sp,#0x240
7101ce449c  mov w1,#0x20
7101ce44a0  mov w2,wzr
7101ce44a4  mov w4,wzr
7101ce44a8  str xzr,[sp, #0x278]
7101ce44ac  mov w5,wzr
7101ce44b0  str xzr,[sp, #0x270]
7101ce44b4  str xzr,[sp, #0x268]
7101ce44b8  str xzr,[sp, #0x260]
7101ce44bc  str xzr,[sp, #0x258]
7101ce44c0  str xzr,[sp, #0x250]
7101ce44c4  str xzr,[sp, #0x248]
7101ce44c8  str xzr,[sp, #0x240]
7101ce44cc  bl 0x71037ad940
7101ce44d0  mov w2,w0
7101ce44d4  add x1,sp,#0x240
7101ce44d8  mov x0,x24
7101ce44dc  mov w3,wzr
7101ce44e0  bl 0x71037a2270
7101ce44e4  adrp x1,0x7104308000
7101ce44e8  add x1,x1,#0x95d
7101ce44ec  add x8,sp,#0xd00
7101ce44f0  sub x0,x29,#0x100
7101ce44f4  mov w2,#0x1
7101ce44f8  bl 0x7103776910
7101ce44fc  adrp x8,0x710532f000
7101ce4500  ldr x8,[x8, #0x730]
7101ce4504  ldr x8,[x8, #0x8]
7101ce4508  ldr x2,[sp, #0x238]
7101ce450c  add x0,sp,#0x240
7101ce4510  add x24,sp,#0x240
7101ce4514  ldr x1,[x8, #0x168]
7101ce4518  bl 0x7103262310
7101ce451c  add x3,x24,#0x8
7101ce4520  adrp x0,0x71043cd000
7101ce4524  add x0,x0,#0xbbb
7101ce4528  adrp x1,0x7104348000
7101ce452c  add x1,x1,#0xed7
7101ce4530  sub x8,x29,#0xc0
7101ce4534  mov w2,w23
7101ce4538  bl 0x71003a4ca0
7101ce453c  add x0,sp,#0xd00
7101ce4540  mov x1,x26
7101ce4544  bl 0x710377a120
7101ce4548  ldr x0,[sp, #0xd08]
7101ce454c  str x19,[sp, #0xd00]
7101ce4550  str xzr,[sp, #0xd08]
7101ce4554  cbz x0,0x7101ce455c
7101ce4558  bl 0x710392eb40
7101ce455c  str x19,[sp, #0xd10]
7101ce4560  str xzr,[sp, #0xd18]
7101ce4564  cbz x22,0x7101ce4570
7101ce4568  mov x0,x22
7101ce456c  bl 0x710392eb40
7101ce4570  adrp x1,0x7104308000
7101ce4574  add x1,x1,#0x95d
7101ce4578  add x8,sp,#0xd10
7101ce457c  sub x0,x29,#0x100
7101ce4580  mov w2,#0x2
7101ce4584  bl 0x7103776910
7101ce4588  ldr x22,[sp, #0xd18]
7101ce458c  ldr x23,[x22, #0x10]
7101ce4590  cbz x23,0x7101ce45e4
7101ce4594  add w3,w28,#0x1
7101ce4598  add x0,sp,#0x240
7101ce459c  mov w1,#0x20
7101ce45a0  mov w2,wzr
7101ce45a4  mov w4,wzr
7101ce45a8  str xzr,[sp, #0x278]
7101ce45ac  mov w5,wzr
7101ce45b0  str xzr,[sp, #0x270]
7101ce45b4  str xzr,[sp, #0x268]
7101ce45b8  str xzr,[sp, #0x260]
7101ce45bc  str xzr,[sp, #0x258]
7101ce45c0  str xzr,[sp, #0x250]
7101ce45c4  str xzr,[sp, #0x248]
7101ce45c8  str xzr,[sp, #0x240]
7101ce45cc  bl 0x71037ad940
7101ce45d0  mov w2,w0
7101ce45d4  add x1,sp,#0x240
7101ce45d8  mov x0,x23
7101ce45dc  mov w3,wzr
7101ce45e0  bl 0x71037a2270
7101ce45e4  adrp x1,0x7104308000
7101ce45e8  add x1,x1,#0x95d
7101ce45ec  add x8,sp,#0xd00
7101ce45f0  sub x0,x29,#0x100
7101ce45f4  orr w2,wzr,#0x3
7101ce45f8  bl 0x7103776910
7101ce45fc  adrp x8,0x710532f000
7101ce4600  ldr x8,[x8, #0x730]
7101ce4604  ldr x8,[x8, #0x8]
7101ce4608  ldr x2,[sp, #0x238]
7101ce460c  add x0,sp,#0x240
7101ce4610  add x23,sp,#0x240
7101ce4614  ldr x1,[x8, #0x168]
7101ce4618  bl 0x7103262310
7101ce461c  add x3,x23,#0x8
7101ce4620  adrp x0,0x71043cd000
7101ce4624  add x0,x0,#0xbbb
7101ce4628  adrp x1,0x71043ef000
7101ce462c  add x1,x1,#0x195
7101ce4630  sub x8,x29,#0xc0
7101ce4634  mov w2,w28
7101ce4638  bl 0x71003a4ca0
7101ce463c  add x0,sp,#0xd00
7101ce4640  mov x1,x26
7101ce4644  bl 0x710377a120
7101ce4648  ldr x0,[sp, #0xd08]
7101ce464c  str x19,[sp, #0xd00]
7101ce4650  str xzr,[sp, #0xd08]
7101ce4654  cbz x0,0x7101ce465c
7101ce4658  bl 0x710392eb40
7101ce465c  ldr x24,[sp, #0x8]
7101ce4660  str x19,[sp, #0xd10]
7101ce4664  str xzr,[sp, #0xd18]
7101ce4668  cbz x22,0x7101ce4674
7101ce466c  mov x0,x22
7101ce4670  bl 0x710392eb40
7101ce4674  adrp x1,0x7104308000
7101ce4678  add x1,x1,#0x95d
7101ce467c  add x8,sp,#0xd10
7101ce4680  sub x0,x29,#0x100
7101ce4684  mov w2,#0x4
7101ce4688  bl 0x7103776910
7101ce468c  ldr x22,[sp, #0xd18]
7101ce4690  ldr x23,[x22, #0x10]
7101ce4694  cbz x23,0x7101ce46e8
7101ce4698  add w3,w27,#0x1
7101ce469c  add x0,sp,#0x240
7101ce46a0  mov w1,#0x20
7101ce46a4  mov w2,wzr
7101ce46a8  mov w4,wzr
7101ce46ac  str xzr,[sp, #0x278]
7101ce46b0  mov w5,wzr
7101ce46b4  str xzr,[sp, #0x270]
7101ce46b8  str xzr,[sp, #0x268]
7101ce46bc  str xzr,[sp, #0x260]
7101ce46c0  str xzr,[sp, #0x258]
7101ce46c4  str xzr,[sp, #0x250]
7101ce46c8  str xzr,[sp, #0x248]
7101ce46cc  str xzr,[sp, #0x240]
7101ce46d0  bl 0x71037ad940
7101ce46d4  mov w2,w0
7101ce46d8  add x1,sp,#0x240
7101ce46dc  mov x0,x23
7101ce46e0  mov w3,wzr
7101ce46e4  bl 0x71037a2270
7101ce46e8  adrp x1,0x7104308000
7101ce46ec  add x1,x1,#0x95d
7101ce46f0  mov w2,#0x5
7101ce46f4  add x8,sp,#0xd00
7101ce46f8  sub x0,x29,#0x100
7101ce46fc  bl 0x7103776910
7101ce4700  adrp x8,0x710532f000
7101ce4704  ldr x8,[x8, #0x730]
7101ce4708  ldr x8,[x8, #0x8]
7101ce470c  ldr x2,[sp, #0x238]
7101ce4710  add x0,sp,#0x240
7101ce4714  add x23,sp,#0x240
7101ce4718  ldr x1,[x8, #0x168]
7101ce471c  bl 0x7103262310
7101ce4720  add x3,x23,#0x8
7101ce4724  adrp x0,0x71043cd000
7101ce4728  add x0,x0,#0xbbb
7101ce472c  adrp x1,0x71043bd000
7101ce4730  add x1,x1,#0x298
7101ce4734  sub x8,x29,#0xc0
7101ce4738  mov w2,w27
7101ce473c  bl 0x71003a4ca0
7101ce4740  add x0,sp,#0xd00
7101ce4744  mov x1,x26
7101ce4748  bl 0x710377a120
7101ce474c  ldr x0,[sp, #0xd08]
7101ce4750  str x19,[sp, #0xd00]
7101ce4754  str xzr,[sp, #0xd08]
7101ce4758  cbz x0,0x7101ce4760
7101ce475c  bl 0x710392eb40
7101ce4760  add x23,sp,#0x20
7101ce4764  str x19,[sp, #0xd10]
7101ce4768  str xzr,[sp, #0xd18]
7101ce476c  cbz x22,0x7101ce4778
7101ce4770  mov x0,x22
7101ce4774  bl 0x710392eb40
7101ce4778  adrp x1,0x7104308000
7101ce477c  add x1,x1,#0x95d
7101ce4780  add x8,sp,#0xd10
7101ce4784  sub x0,x29,#0x100
7101ce4788  orr w2,wzr,#0x6
7101ce478c  bl 0x7103776910
7101ce4790  ldr x27,[sp, #0xd18]
7101ce4794  ldr x22,[x27, #0x10]
7101ce4798  cbz x22,0x7101ce47ec
7101ce479c  add w3,w25,#0x1
7101ce47a0  add x0,sp,#0x240
7101ce47a4  mov w1,#0x20
7101ce47a8  mov w2,wzr
7101ce47ac  mov w4,wzr
7101ce47b0  str xzr,[sp, #0x278]
7101ce47b4  mov w5,wzr
7101ce47b8  str xzr,[sp, #0x270]
7101ce47bc  str xzr,[sp, #0x268]
7101ce47c0  str xzr,[sp, #0x260]
7101ce47c4  str xzr,[sp, #0x258]
7101ce47c8  str xzr,[sp, #0x250]
7101ce47cc  str xzr,[sp, #0x248]
7101ce47d0  str xzr,[sp, #0x240]
7101ce47d4  bl 0x71037ad940
7101ce47d8  mov w2,w0
7101ce47dc  add x1,sp,#0x240
7101ce47e0  mov x0,x22
7101ce47e4  mov w3,wzr
7101ce47e8  bl 0x71037a2270
7101ce47ec  adrp x1,0x7104308000
7101ce47f0  add x1,x1,#0x95d
7101ce47f4  add x8,sp,#0xd00
7101ce47f8  sub x0,x29,#0x100
7101ce47fc  orr w2,wzr,#0x7
7101ce4800  bl 0x7103776910
7101ce4804  adrp x8,0x710532f000
7101ce4808  ldr x8,[x8, #0x730]
7101ce480c  ldr x8,[x8, #0x8]
7101ce4810  ldr x2,[sp, #0x238]
7101ce4814  add x0,sp,#0x240
7101ce4818  add x22,sp,#0x240
7101ce481c  ldr x1,[x8, #0x168]
7101ce4820  bl 0x7103262310
7101ce4824  add x3,x22,#0x8
7101ce4828  adrp x0,0x71043cd000
7101ce482c  add x0,x0,#0xbbb
7101ce4830  adrp x1,0x71043de000
7101ce4834  add x1,x1,#0xdf4
7101ce4838  sub x8,x29,#0xc0
7101ce483c  mov w2,w25
7101ce4840  bl 0x71003a4ca0
7101ce4844  add x0,sp,#0xd00
7101ce4848  mov x1,x26
7101ce484c  bl 0x710377a120
7101ce4850  ldr x0,[sp, #0xd08]
7101ce4854  str x19,[sp, #0xd00]
7101ce4858  str xzr,[sp, #0xd08]
7101ce485c  cbz x0,0x7101ce4864
7101ce4860  bl 0x710392eb40
7101ce4864  add x26,x23,#0x18
7101ce4868  str x19,[sp, #0xd10]
7101ce486c  str xzr,[sp, #0xd18]
7101ce4870  cbz x27,0x7101ce487c
7101ce4874  mov x0,x27
7101ce4878  bl 0x710392eb40
7101ce487c  adrp x1,0x7104412000
7101ce4880  add x1,x1,#0xb3d
7101ce4884  sub x8,x29,#0xc0
7101ce4888  sub x0,x29,#0x78
7101ce488c  mov w23,#0x9dc5
7101ce4890  movk w23,#0x811c, LSL #16
7101ce4894  bl 0x7103776640
7101ce4898  ldrb w8,[sp, #0x1d9]
7101ce489c  ldur x25,[x29, #-0xb8]
7101ce48a0  cmp w8,#0x25
7101ce48a4  b.ne 0x7101ce4900
7101ce48a8  fmov s0,0x3f800000
7101ce48ac  adrp x1,0x7104422000
7101ce48b0  add x1,x1,#0x585
7101ce48b4  mov x0,x25
7101ce48b8  bl 0x7103778300
7101ce48bc  adrp x1,0x71043cf000
7101ce48c0  add x1,x1,#0xca4
7101ce48c4  add x8,sp,#0x240
7101ce48c8  sub x0,x29,#0xc0
7101ce48cc  bl 0x7103776910
7101ce48d0  adrp x1,0x71043f0000
7101ce48d4  add x1,x1,#0xb15
7101ce48d8  add x0,sp,#0x240
7101ce48dc  bl 0x710377a120
7101ce48e0  ldr x0,[sp, #0x248]
7101ce48e4  str x19,[sp, #0x240]
7101ce48e8  str xzr,[sp, #0x248]
7101ce48ec  cbz x0,0x7101ce48f4
7101ce48f0  bl 0x710392eb40
7101ce48f4  adrp x27,0x710523d000
7101ce48f8  add x27,x27,#0x988
7101ce48fc  b 0x7101ce4b64
7101ce4900  fmov s0,0x3f800000
7101ce4904  adrp x1,0x710437c000
7101ce4908  add x1,x1,#0x766
7101ce490c  mov x0,x25
7101ce4910  bl 0x7103778300
7101ce4914  ldr x8,[sp]
7101ce4918  ldr x8,[x8, #0x8]
7101ce491c  ldrb w22,[sp, #0x1d9]
7101ce4920  mov w1,w22
7101ce4924  ldr x0,[x8, #0x258]
7101ce4928  bl 0x710328cb60
7101ce492c  mov w8,#0xaaab
7101ce4930  movk w8,#0xaaaa, LSL #16
7101ce4934  umull x8,w22,w8
7101ce4938  lsr x8,x8,#0x21
7101ce493c  add w8,w8,w8, LSL #0x1
7101ce4940  sub w8,w22,w8
7101ce4944  mov w27,w0
7101ce4948  cmp w8,#0x2
7101ce494c  b.eq 0x7101ce49d0
7101ce4950  cbnz w8,0x7101ce4a50
7101ce4954  mov x9,#0x6e6d
7101ce4958  movk x9,#0x5f75, LSL #16
7101ce495c  movk x9,#0x6d6d, LSL #32
7101ce4960  movk x9,#0x6969, LSL #48
7101ce4964  str x9,[sp, #0x248]
7101ce4968  mov x9,#0x5f66
7101ce496c  movk x9,#0x6573, LSL #16
7101ce4970  movk x9,#0x7574, LSL #32
7101ce4974  movk x9,#0x5f70, LSL #48
7101ce4978  mov x11,#0x6369
7101ce497c  movk x11,#0x5f65, LSL #16
7101ce4980  str x9,[sp, #0x250]
7101ce4984  mov x8,#0x1900000000
7101ce4988  str x8,[sp, #0x240]
7101ce498c  add x10,sp,#0x240
7101ce4990  mov w9,#0x6f76
7101ce4994  strh w9,[sp, #0x258]
7101ce4998  movk x11,#0x6f6c, LSL #32
7101ce499c  movk x11,#0x77, LSL #48
7101ce49a0  add x12,sp,#0x240
7101ce49a4  stur x11,[x12, #0x1a]
7101ce49a8  add x8,x10,#0x9
7101ce49ac  mov w10,#0x6d
7101ce49b0  mov w9,#0x89
7101ce49b4  mov w11,w23
7101ce49b8  mul w11,w11,w9
7101ce49bc  and w10,w10,#0xff
7101ce49c0  eor w11,w11,w10
7101ce49c4  ldrb w10,[x8], #0x1
7101ce49c8  cbnz w10,0x7101ce49b8
7101ce49cc  b 0x7101ce4ad4
7101ce49d0  mov x9,#0x6e6d
7101ce49d4  movk x9,#0x5f75, LSL #16
7101ce49d8  movk x9,#0x6d6d, LSL #32
7101ce49dc  movk x9,#0x6969, LSL #48
7101ce49e0  str x9,[sp, #0x248]
7101ce49e4  mov x9,#0x5f66
7101ce49e8  movk x9,#0x6573, LSL #16
7101ce49ec  movk x9,#0x7574, LSL #32
7101ce49f0  movk x9,#0x5f70, LSL #48
7101ce49f4  str x9,[sp, #0x250]
7101ce49f8  mov w9,#0x6f76
7101ce49fc  mov x8,#0x1a00000000
7101ce4a00  add x10,sp,#0x240
7101ce4a04  str x8,[sp, #0x240]
7101ce4a08  strh w9,[sp, #0x258]
7101ce4a0c  mov x9,#0x6369
7101ce4a10  movk x9,#0x5f65, LSL #16
7101ce4a14  add x8,x10,#0x9
7101ce4a18  movk x9,#0x6968, LSL #32
7101ce4a1c  movk x9,#0x6867, LSL #48
7101ce4a20  add x10,sp,#0x240
7101ce4a24  stur x9,[x10, #0x1a]
7101ce4a28  strb wzr,[sp, #0x262]
7101ce4a2c  mov w10,#0x6d
7101ce4a30  mov w9,#0x89
7101ce4a34  mov w11,w23
7101ce4a38  mul w11,w11,w9
7101ce4a3c  and w10,w10,#0xff
7101ce4a40  eor w11,w11,w10
7101ce4a44  ldrb w10,[x8], #0x1
7101ce4a48  cbnz w10,0x7101ce4a38
7101ce4a4c  b 0x7101ce4ad4
7101ce4a50  mov x9,#0x6e6d
7101ce4a54  movk x9,#0x5f75, LSL #16
7101ce4a58  movk x9,#0x6d6d, LSL #32
7101ce4a5c  movk x9,#0x6969, LSL #48
7101ce4a60  str x9,[sp, #0x248]
7101ce4a64  mov x9,#0x5f66
7101ce4a68  movk x9,#0x6573, LSL #16
7101ce4a6c  movk x9,#0x7574, LSL #32
7101ce4a70  movk x9,#0x5f70, LSL #48
7101ce4a74  str x9,[sp, #0x250]
7101ce4a78  mov w9,#0x6f76
7101ce4a7c  strh w9,[sp, #0x258]
7101ce4a80  mov x9,#0x6369
7101ce4a84  movk x9,#0x5f65, LSL #16
7101ce4a88  orr x8,xzr,#0x1c00000000
7101ce4a8c  add x10,sp,#0x240
7101ce4a90  str x8,[sp, #0x240]
7101ce4a94  add x8,sp,#0x240
7101ce4a98  movk x9,#0x6f6e, LSL #32
7101ce4a9c  movk x9,#0x6d72, LSL #48
7101ce4aa0  stur x9,[x10, #0x1a]
7101ce4aa4  mov w9,#0x6c61
7101ce4aa8  strh w9,[sp, #0x262]
7101ce4aac  add x8,x8,#0x9
7101ce4ab0  mov w10,#0x6d
7101ce4ab4  strb wzr,[sp, #0x264]
7101ce4ab8  mov w9,#0x89
7101ce4abc  mov w11,w23
7101ce4ac0  mul w11,w11,w9
7101ce4ac4  and w10,w10,#0xff
7101ce4ac8  eor w11,w11,w10
7101ce4acc  ldrb w10,[x8], #0x1
7101ce4ad0  cbnz w10,0x7101ce4ac0
7101ce4ad4  adrp x1,0x71043cf000
7101ce4ad8  add x1,x1,#0xca4
7101ce4adc  add x8,sp,#0xd10
7101ce4ae0  sub x0,x29,#0xc0
7101ce4ae4  str w11,[sp, #0x240]
7101ce4ae8  bl 0x7103776910
7101ce4aec  adrp x1,0x710438c000
7101ce4af0  add x1,x1,#0xbf2
7101ce4af4  add x0,sp,#0xd10
7101ce4af8  mov w2,#0x1
7101ce4afc  mov w3,w27
7101ce4b00  bl 0x710377a280
7101ce4b04  ldr x0,[sp, #0xd18]
7101ce4b08  str x19,[sp, #0xd10]
7101ce4b0c  str xzr,[sp, #0xd18]
7101ce4b10  cbz x0,0x7101ce4b18
7101ce4b14  bl 0x710392eb40
7101ce4b18  adrp x1,0x7104281000
7101ce4b1c  add x1,x1,#0x234
7101ce4b20  add x8,sp,#0xd10
7101ce4b24  sub x0,x29,#0xc0
7101ce4b28  bl 0x7103776910
7101ce4b2c  add x8,sp,#0x240
7101ce4b30  add x3,x8,#0x8
7101ce4b34  adrp x1,0x71043f0000
7101ce4b38  add x1,x1,#0xb35
7101ce4b3c  add x0,sp,#0xd10
7101ce4b40  mov w2,#0x1
7101ce4b44  bl 0x710377a280
7101ce4b48  ldr x0,[sp, #0xd18]
7101ce4b4c  adrp x27,0x710523d000
7101ce4b50  add x27,x27,#0x988
7101ce4b54  str x19,[sp, #0xd10]
7101ce4b58  str xzr,[sp, #0xd18]
7101ce4b5c  cbz x0,0x7101ce4b64
7101ce4b60  bl 0x710392eb40
7101ce4b64  ldrh w8,[sp, #0x30]
7101ce4b68  ldp x10,x9,[sp, #0x20]
7101ce4b6c  add x22,sp,#0x240
7101ce4b70  add x0,x22,#0x14
7101ce4b74  mov x1,x26
7101ce4b78  strh w8,[sp, #0x250]
7101ce4b7c  str x9,[sp, #0x248]
7101ce4b80  str x10,[sp, #0x240]
7101ce4b84  bl 0x71016bc6e0
7101ce4b88  ldp x9,x8,[sp, #0x80]
7101ce4b8c  str x8,[sp, #0x2a8]
7101ce4b90  ldr x8,[sp, #0x78]
7101ce4b94  str x8,[sp, #0x298]
7101ce4b98  ldrb w8,[sp, #0x94]
7101ce4b9c  str x9,[sp, #0x2a0]
7101ce4ba0  cbz w8,0x7101ce4d78
7101ce4ba4  strb w8,[sp, #0x2b4]
7101ce4ba8  ldrb w8,[sp, #0x95]
7101ce4bac  cbz w8,0x7101ce4c04
7101ce4bb0  strb w8,[sp, #0x2b5]
7101ce4bb4  ldrb w8,[sp, #0x96]
7101ce4bb8  cbz w8,0x7101ce4c0c
7101ce4bbc  strb w8,[sp, #0x2b6]
7101ce4bc0  ldrb w8,[sp, #0x97]
7101ce4bc4  cbz w8,0x7101ce4c88
7101ce4bc8  strb w8,[sp, #0x2b7]
7101ce4bcc  ldrb w8,[sp, #0x98]
7101ce4bd0  cbz w8,0x7101ce4c90
7101ce4bd4  strb w8,[sp, #0x2b8]
7101ce4bd8  ldrb w8,[sp, #0x99]
7101ce4bdc  cbz w8,0x7101ce4c98
7101ce4be0  strb w8,[sp, #0x2b9]
7101ce4be4  ldrb w8,[sp, #0x9a]
7101ce4be8  cbz w8,0x7101ce4d6c
7101ce4bec  strb w8,[sp, #0x2ba]
7101ce4bf0  ldrb w8,[sp, #0x9b]
7101ce4bf4  cbz w8,0x7101ce4d74
7101ce4bf8  strb w8,[sp, #0x2bb]
7101ce4bfc  mov w8,#0x8
7101ce4c00  b 0x7101ce4d78
7101ce4c04  mov w8,#0x1
7101ce4c08  b 0x7101ce4d78
7101ce4c0c  mov w8,#0x2
7101ce4c10  b 0x7101ce4d78
7101ce4c14  ldr w9,[x22, #0x54]
7101ce4c18  ldr x8,[x22, #0x18]
7101ce4c1c  str w9,[x22, #0x58]
7101ce4c20  cbz x8,0x7101ce4c34
7101ce4c24  str w9,[x8, #0x30]
7101ce4c28  ldrb w9,[x8, #0x58]
7101ce4c2c  orr w9,w9,#0x10
7101ce4c30  strb w9,[x8, #0x58]
7101ce4c34  ldr x8,[x22, #0x20]
7101ce4c38  cbz x8,0x7101ce4c50
7101ce4c3c  ldr w9,[x22, #0x58]
7101ce4c40  str w9,[x8, #0x30]
7101ce4c44  ldrb w9,[x8, #0x58]
7101ce4c48  orr w9,w9,#0x10
7101ce4c4c  strb w9,[x8, #0x58]
7101ce4c50  ldr x0,[x22, #0x28]
7101ce4c54  cbz x0,0x7101ce4c68
7101ce4c58  ldr x8,[x0]
7101ce4c5c  ldr x8,[x8, #0x180]
7101ce4c60  fmov s0,wzr
7101ce4c64  blr x8
7101ce4c68  ldr x0,[x22, #0x30]
7101ce4c6c  cbz x0,0x7101ce4cb0
7101ce4c70  ldrb w8,[x22, #0x63]
7101ce4c74  cbz w8,0x7101ce4ca0
7101ce4c78  ldr x8,[x0]
7101ce4c7c  ldr x8,[x8, #0x190]
7101ce4c80  blr x8
7101ce4c84  b 0x7101ce4cb0
7101ce4c88  orr w8,wzr,#0x3
7101ce4c8c  b 0x7101ce4d78
7101ce4c90  mov w8,#0x4
7101ce4c94  b 0x7101ce4d78
7101ce4c98  mov w8,#0x5
7101ce4c9c  b 0x7101ce4d78
7101ce4ca0  ldr x8,[x0]
7101ce4ca4  ldr x8,[x8, #0x180]
7101ce4ca8  fmov s0,wzr
7101ce4cac  blr x8
7101ce4cb0  strh wzr,[x22, #0x64]
7101ce4cb4  ldr x8,[x21, #0x358]
7101ce4cb8  ldr x8,[x8, #0x8]
7101ce4cbc  cbz x8,0x7101ce4d10
7101ce4cc0  ldr x22,[x8, #0x78]
7101ce4cc4  adrp x8,0x710593b000
7101ce4cc8  add x8,x8,#0xa40
7101ce4ccc  ldarb w8,[x8]
7101ce4cd0  tbz w8,#0x0,0x7101ce50a8
7101ce4cd4  cbz x22,0x7101ce4d10
7101ce4cd8  ldr x8,[x22]
7101ce4cdc  ldr x8,[x8]
7101ce4ce0  mov x0,x22
7101ce4ce4  blr x8
7101ce4ce8  cbz x0,0x7101ce4d10
7101ce4cec  adrp x8,0x710593b000
7101ce4cf0  add x8,x8,#0xa58
7101ce4cf4  cmp x0,x8
7101ce4cf8  b.eq 0x7101ce4d08
7101ce4cfc  ldr x0,[x0]
7101ce4d00  cbnz x0,0x7101ce4cf4
7101ce4d04  b 0x7101ce4d10
7101ce4d08  mov w8,#0x1
7101ce4d0c  strb w8,[x22, #0x60]
7101ce4d10  ldur x22,[x29, #-0x70]
7101ce4d14  stp x26,xzr,[x29, #-0x78]
7101ce4d18  cbz x22,0x7101ce4d34
7101ce4d1c  ldr x0,[x22, #0x18]
7101ce4d20  stp x19,xzr,[x22, #0x10]
7101ce4d24  cbz x0,0x7101ce4d2c
7101ce4d28  bl 0x710392eb40
7101ce4d2c  mov x0,x22
7101ce4d30  bl 0x710392eb40
7101ce4d34  add x2,sp,#0x240
7101ce4d38  mov x0,x21
7101ce4d3c  mov x1,x20
7101ce4d40  mov x3,x28
7101ce4d44  bl 0x7101ce5290
7101ce4d48  add sp,sp,#0xdc0
7101ce4d4c  ldp x29,x30,[sp, #0x60]
7101ce4d50  ldp x20,x19,[sp, #0x50]
7101ce4d54  ldp x22,x21,[sp, #0x40]
7101ce4d58  ldp x24,x23,[sp, #0x30]
7101ce4d5c  ldp x26,x25,[sp, #0x20]
7101ce4d60  ldp x28,x27,[sp, #0x10]
7101ce4d64  ldr d8,[sp], #0x70
7101ce4d68  ret
7101ce4d6c  orr w8,wzr,#0x6
7101ce4d70  b 0x7101ce4d78
7101ce4d74  orr w8,wzr,#0x7
7101ce4d78  add x9,x22,#0x70
7101ce4d7c  add x9,x9,x8
7101ce4d80  strb wzr,[x9, #0x4]
7101ce4d84  str w8,[sp, #0x2b0]
7101ce4d88  add x8,sp,#0x20
7101ce4d8c  add x0,x22,#0x80
7101ce4d90  add x1,x8,#0x80
7101ce4d94  mov w2,#0x108
7101ce4d98  bl 0x71039c00e0
7101ce4d9c  ldrh w9,[sp, #0x1b0]
7101ce4da0  str wzr,[sp, #0x3c8]
7101ce4da4  cbz w9,0x7101ce4e28
7101ce4da8  strh w9,[sp, #0x3d0]
7101ce4dac  ldrh w9,[sp, #0x1b2]
7101ce4db0  add x8,sp,#0x240
7101ce4db4  add x8,x8,#0x190
7101ce4db8  cbz w9,0x7101ce4e34
7101ce4dbc  strh w9,[sp, #0x3d2]
7101ce4dc0  ldrh w9,[sp, #0x1b4]
7101ce4dc4  cbz w9,0x7101ce4e3c
7101ce4dc8  strh w9,[sp, #0x3d4]
7101ce4dcc  ldrh w9,[sp, #0x1b6]
7101ce4dd0  cbz w9,0x7101ce4e44
7101ce4dd4  strh w9,[sp, #0x3d6]
7101ce4dd8  ldrh w9,[sp, #0x1b8]
7101ce4ddc  cbz w9,0x7101ce4e4c
7101ce4de0  strh w9,[sp, #0x3d8]
7101ce4de4  ldrh w9,[sp, #0x1ba]
7101ce4de8  cbz w9,0x7101ce4e54
7101ce4dec  strh w9,[sp, #0x3da]
7101ce4df0  ldrh w9,[sp, #0x1bc]
7101ce4df4  cbz w9,0x7101ce4e5c
7101ce4df8  strh w9,[sp, #0x3dc]
7101ce4dfc  ldrh w9,[sp, #0x1be]
7101ce4e00  cbz w9,0x7101ce4e64
7101ce4e04  strh w9,[sp, #0x3de]
7101ce4e08  ldrh w9,[sp, #0x1c0]
7101ce4e0c  cbz w9,0x7101ce4e6c
7101ce4e10  strh w9,[sp, #0x3e0]
7101ce4e14  ldrh w9,[sp, #0x1c2]
7101ce4e18  cbz w9,0x7101ce4e74
7101ce4e1c  strh w9,[sp, #0x3e2]
7101ce4e20  mov w9,#0xa
7101ce4e24  b 0x7101ce4e78
7101ce4e28  add x8,sp,#0x240
7101ce4e2c  add x8,x8,#0x190
7101ce4e30  b 0x7101ce4e78
7101ce4e34  mov w9,#0x1
7101ce4e38  b 0x7101ce4e78
7101ce4e3c  mov w9,#0x2
7101ce4e40  b 0x7101ce4e78
7101ce4e44  orr w9,wzr,#0x3
7101ce4e48  b 0x7101ce4e78
7101ce4e4c  mov w9,#0x4
7101ce4e50  b 0x7101ce4e78
7101ce4e54  mov w9,#0x5
7101ce4e58  b 0x7101ce4e78
7101ce4e5c  orr w9,wzr,#0x6
7101ce4e60  b 0x7101ce4e78
7101ce4e64  orr w9,wzr,#0x7
7101ce4e68  b 0x7101ce4e78
7101ce4e6c  mov w9,#0x8
7101ce4e70  b 0x7101ce4e78
7101ce4e74  mov w9,#0x9
7101ce4e78  add x10,sp,#0x240
7101ce4e7c  add x10,x10,w9, UXTW  #0x1
7101ce4e80  strh wzr,[x10, #0x190]
7101ce4e84  str w9,[sp, #0x3cc]
7101ce4e88  ldrh w9,[sp, #0x3d0]
7101ce4e8c  cbz w9,0x7101ce4eac
7101ce4e90  add x8,x8,#0x2
7101ce4e94  mov w10,#0x89
7101ce4e98  mul w11,w23,w10
7101ce4e9c  and w9,w9,#0xffff
7101ce4ea0  eor w23,w11,w9
7101ce4ea4  ldrh w9,[x8], #0x2
7101ce4ea8  cbnz w9,0x7101ce4e98
7101ce4eac  ldr x8,[sp, #0x1d0]
7101ce4eb0  str x8,[sp, #0x3f0]
7101ce4eb4  ldr x8,[sp, #0x1c8]
7101ce4eb8  ldr x9,[sp, #0x1f0]
7101ce4ebc  str x9,[sp, #0x410]
7101ce4ec0  ldur x26,[x29, #-0x70]
7101ce4ec4  adrp x10,0x71042d6000
7101ce4ec8  add x10,x10,#0x3fc
7101ce4ecc  mov x0,x26
7101ce4ed0  str x8,[sp, #0x3e8]
7101ce4ed4  ldp x9,x8,[sp, #0x1e0]
7101ce4ed8  str x8,[sp, #0x408]
7101ce4edc  ldr x8,[sp, #0x1d8]
7101ce4ee0  str x8,[sp, #0x3f8]
7101ce4ee4  ldr x8,[sp, #0x210]
7101ce4ee8  str x8,[sp, #0x430]
7101ce4eec  ldr x8,[sp, #0x208]
7101ce4ef0  str x8,[sp, #0x428]
7101ce4ef4  ldr x8,[sp, #0x200]
7101ce4ef8  str x8,[sp, #0x420]
7101ce4efc  ldr x8,[sp, #0x1f8]
7101ce4f00  str x8,[sp, #0x418]
7101ce4f04  ldr x8,[sp, #0x230]
7101ce4f08  str x8,[sp, #0x450]
7101ce4f0c  ldr x8,[sp, #0x228]
7101ce4f10  str x8,[sp, #0x448]
7101ce4f14  ldr x8,[sp, #0x220]
7101ce4f18  str x8,[sp, #0x440]
7101ce4f1c  ldr x8,[sp, #0x218]
7101ce4f20  str x8,[sp, #0x438]
7101ce4f24  ldr x8,[sp, #0x238]
7101ce4f28  str x8,[sp, #0x458]
7101ce4f2c  ldrh w8,[sp, #0x2dc]
7101ce4f30  fmov s8,0x3f800000
7101ce4f34  str x9,[sp, #0x400]
7101ce4f38  mov w9,#0x1
7101ce4f3c  mov v0.16B,v8.16B
7101ce4f40  strb w9,[sp, #0x2cc]
7101ce4f44  adrp x9,0x71043e0000
7101ce4f48  add x9,x9,#0x2d1
7101ce4f4c  cmp w8,#0x0
7101ce4f50  adrp x8,0x71043cf000
7101ce4f54  add x8,x8,#0xc7d
7101ce4f58  csel x1,x9,x10,ne
7101ce4f5c  adrp x9,0x7104270000
7101ce4f60  add x9,x9,#0xcd
7101ce4f64  str w23,[sp, #0x3c8]
7101ce4f68  csel x23,x9,x8,ne
7101ce4f6c  bl 0x7103778300
7101ce4f70  ldur x22,[x29, #-0xf8]
7101ce4f74  mov v0.16B,v8.16B
7101ce4f78  mov x1,x23
7101ce4f7c  mov x0,x22
7101ce4f80  bl 0x7103778300
7101ce4f84  ldr x23,[sp, #0x18]
7101ce4f88  stp x27,xzr,[x29, #-0xc0]
7101ce4f8c  cbz x25,0x7101ce4fa8
7101ce4f90  ldr x0,[x25, #0x18]
7101ce4f94  stp x19,xzr,[x25, #0x10]
7101ce4f98  cbz x0,0x7101ce4fa0
7101ce4f9c  bl 0x710392eb40
7101ce4fa0  mov x0,x25
7101ce4fa4  bl 0x710392eb40
7101ce4fa8  ldr x25,[sp, #0x10]
7101ce4fac  stp x27,xzr,[x29, #-0x100]
7101ce4fb0  cbz x22,0x7101ce4fcc
7101ce4fb4  ldr x0,[x22, #0x18]
7101ce4fb8  stp x19,xzr,[x22, #0x10]
7101ce4fbc  cbz x0,0x7101ce4fc4
7101ce4fc0  bl 0x710392eb40
7101ce4fc4  mov x0,x22
7101ce4fc8  bl 0x710392eb40
7101ce4fcc  ldur x22,[x29, #-0x58]
7101ce4fd0  stp x27,xzr,[x29, #-0xf0]
7101ce4fd4  cbz x25,0x7101ce4ff0
7101ce4fd8  ldr x0,[x25, #0x18]
7101ce4fdc  stp x19,xzr,[x25, #0x10]
7101ce4fe0  cbz x0,0x7101ce4fe8
7101ce4fe4  bl 0x710392eb40
7101ce4fe8  mov x0,x25
7101ce4fec  bl 0x710392eb40
7101ce4ff0  stp x27,xzr,[x29, #-0xe0]
7101ce4ff4  cbz x23,0x7101ce5010
7101ce4ff8  ldr x0,[x23, #0x18]
7101ce4ffc  stp x19,xzr,[x23, #0x10]
7101ce5000  cbz x0,0x7101ce5008
7101ce5004  bl 0x710392eb40
7101ce5008  mov x0,x23
7101ce500c  bl 0x710392eb40
7101ce5010  stp x27,xzr,[x29, #-0xd0]
7101ce5014  cbz x22,0x7101ce5030
7101ce5018  ldr x0,[x22, #0x18]
7101ce501c  stp x19,xzr,[x22, #0x10]
7101ce5020  cbz x0,0x7101ce5028
7101ce5024  bl 0x710392eb40
7101ce5028  mov x0,x22
7101ce502c  bl 0x710392eb40
7101ce5030  stp x27,xzr,[x29, #-0x78]
7101ce5034  cbz x26,0x7101ce5050
7101ce5038  ldr x0,[x26, #0x18]
7101ce503c  stp x19,xzr,[x26, #0x10]
7101ce5040  cbz x0,0x7101ce5048
7101ce5044  bl 0x710392eb40
7101ce5048  mov x0,x26
7101ce504c  bl 0x710392eb40
7101ce5050  add x2,sp,#0x20
7101ce5054  mov x0,x21
7101ce5058  mov x1,x20
7101ce505c  mov x3,x24
7101ce5060  b 0x7101ce4d44
7101ce5064  adrp x0,0x710593b000
7101ce5068  add x0,x0,#0xa40
7101ce506c  bl 0x71039c06b0
7101ce5070  cbz w0,0x7101ce42cc
7101ce5074  adrp x8,0x710593b000
7101ce5078  add x8,x8,#0xa48
7101ce507c  ldarb w8,[x8]
7101ce5080  tbz w8,#0x0,0x7101ce50f0
7101ce5084  adrp x8,0x710593b000
7101ce5088  adrp x9,0x710593b000
7101ce508c  add x9,x9,#0xa50
7101ce5090  adrp x0,0x710593b000
7101ce5094  add x0,x0,#0xa40
7101ce5098  str x9,[x8, #0xa58]
7101ce509c  bl 0x71039c06c0
7101ce50a0  cbnz x22,0x7101ce42d0
7101ce50a4  b 0x7101ce4cb4
7101ce50a8  adrp x0,0x710593b000
7101ce50ac  add x0,x0,#0xa40
7101ce50b0  bl 0x71039c06b0
7101ce50b4  cbz w0,0x7101ce4cd4
7101ce50b8  adrp x8,0x710593b000
7101ce50bc  add x8,x8,#0xa48
7101ce50c0  ldarb w8,[x8]
7101ce50c4  tbz w8,#0x0,0x7101ce5118
7101ce50c8  adrp x8,0x710593b000
7101ce50cc  adrp x9,0x710593b000
7101ce50d0  add x9,x9,#0xa50
7101ce50d4  adrp x0,0x710593b000
7101ce50d8  add x0,x0,#0xa40
7101ce50dc  str x9,[x8, #0xa58]
7101ce50e0  bl 0x71039c06c0
7101ce50e4  cbnz x22,0x7101ce4cd8
7101ce50e8  b 0x7101ce4d10
7101ce50ec  bl 0x71039c2650
7101ce50f0  adrp x0,0x710593b000
7101ce50f4  add x0,x0,#0xa48
7101ce50f8  bl 0x71039c06b0
7101ce50fc  cbz w0,0x7101ce5084
7101ce5100  adrp x8,0x710593b000
7101ce5104  adrp x0,0x710593b000
7101ce5108  add x0,x0,#0xa48
7101ce510c  str xzr,[x8, #0xa50]
7101ce5110  bl 0x71039c06c0
7101ce5114  b 0x7101ce5084
7101ce5118  adrp x0,0x710593b000
7101ce511c  add x0,x0,#0xa48
7101ce5120  bl 0x71039c06b0
7101ce5124  cbz w0,0x7101ce50c8
7101ce5128  adrp x8,0x710593b000
7101ce512c  adrp x0,0x710593b000
7101ce5130  add x0,x0,#0xa48
7101ce5134  str xzr,[x8, #0xa50]
7101ce5138  bl 0x71039c06c0
7101ce513c  b 0x7101ce50c8
