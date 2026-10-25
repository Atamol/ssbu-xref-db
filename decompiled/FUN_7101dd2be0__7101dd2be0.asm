// addr:      7101dd2be0
// offset:    0x1dd2be0
// name:      FUN_7101dd2be0
// mangled:   
// size:      2028

7101dd2be0  stp x28,x27,[sp, #-0x60]!
7101dd2be4  stp x26,x25,[sp, #0x10]
7101dd2be8  stp x24,x23,[sp, #0x20]
7101dd2bec  stp x22,x21,[sp, #0x30]
7101dd2bf0  stp x20,x19,[sp, #0x40]
7101dd2bf4  stp x29,x30,[sp, #0x50]
7101dd2bf8  add x29,sp,#0x50
7101dd2bfc  sub sp,sp,#0x1b0
7101dd2c00  ldr x28,[x0, #0x8]
7101dd2c04  mov w8,#0x1
7101dd2c08  str w8,[sp, #0x40]
7101dd2c0c  strh w8,[sp, #0x44]
7101dd2c10  strb w8,[sp, #0x46]
7101dd2c14  mov x8,#0x41f0000000000000
7101dd2c18  mov w9,#0x101
7101dd2c1c  str x8,[sp, #0x48]
7101dd2c20  add x8,sp,#0x30
7101dd2c24  strh w9,[sp, #0x38]
7101dd2c28  adrp x9,0x71050b0000
7101dd2c2c  add x9,x9,#0xa50
7101dd2c30  mov x19,x1
7101dd2c34  stur x9,[x29, #-0xa0]
7101dd2c38  adrp x9,0x7101dd4000
7101dd2c3c  add x9,x9,#0x170
7101dd2c40  add x1,x8,#0x30
7101dd2c44  sub x20,x29,#0xa0
7101dd2c48  sub x0,x29,#0xa0
7101dd2c4c  stur wzr,[sp, #0x3a]
7101dd2c50  strh wzr,[sp, #0x3e]
7101dd2c54  str wzr,[sp, #0x50]
7101dd2c58  str xzr,[sp, #0x80]
7101dd2c5c  str xzr,[sp, #0xb0]
7101dd2c60  str xzr,[sp, #0xe0]
7101dd2c64  str xzr,[sp, #0x110]
7101dd2c68  str xzr,[sp, #0x140]
7101dd2c6c  str wzr,[sp, #0x150]
7101dd2c70  str xzr,[sp, #0x30]
7101dd2c74  stp x9,xzr,[x29, #-0x98]
7101dd2c78  stp x28,x20,[x29, #-0x88]
7101dd2c7c  bl 0x7101a7ed70
7101dd2c80  ldur x0,[x29, #-0x80]
7101dd2c84  cmp x20,x0
7101dd2c88  b.eq 0x7101dd2c9c
7101dd2c8c  cbz x0,0x7101dd2ca8
7101dd2c90  ldr x8,[x0]
7101dd2c94  ldr x8,[x8, #0x28]
7101dd2c98  b 0x7101dd2ca4
7101dd2c9c  ldr x8,[x0]
7101dd2ca0  ldr x8,[x8, #0x20]
7101dd2ca4  blr x8
7101dd2ca8  add x8,sp,#0x30
7101dd2cac  add x1,x8,#0xc0
7101dd2cb0  adrp x8,0x7105186000
7101dd2cb4  add x8,x8,#0xd0
7101dd2cb8  sub x20,x29,#0xa0
7101dd2cbc  stur x20,[x29, #-0x80]
7101dd2cc0  sub x0,x29,#0xa0
7101dd2cc4  stur x8,[x29, #-0xa0]
7101dd2cc8  bl 0x7101989a30
7101dd2ccc  ldur x0,[x29, #-0x80]
7101dd2cd0  cmp x20,x0
7101dd2cd4  b.eq 0x7101dd2ce8
7101dd2cd8  cbz x0,0x7101dd2cf4
7101dd2cdc  ldr x8,[x0]
7101dd2ce0  ldr x8,[x8, #0x28]
7101dd2ce4  b 0x7101dd2cf0
7101dd2ce8  ldr x8,[x0]
7101dd2cec  ldr x8,[x8, #0x20]
7101dd2cf0  blr x8
7101dd2cf4  add x20,x28,#0x8
7101dd2cf8  adrp x2,0x71042e7000
7101dd2cfc  add x2,x2,#0xb54
7101dd2d00  add x3,sp,#0x30
7101dd2d04  mov x0,x20
7101dd2d08  mov x1,x19
7101dd2d0c  bl 0x7103770b30
7101dd2d10  ldr x21,[x28, #0x8]
7101dd2d14  ldp x8,x9,[x21, #0x180]
7101dd2d18  sub x9,x9,x8
7101dd2d1c  lsr x10,x9,#0x3
7101dd2d20  cmp w10,#0x1
7101dd2d24  b.lt 0x7101dd2d68
7101dd2d28  ldr x2,[x8]
7101dd2d2c  mov x0,x21
7101dd2d30  mov w1,wzr
7101dd2d34  ubfx x23,x9,#0x3,#0x20
7101dd2d38  bl 0x710376e070
7101dd2d3c  cmp x23,#0x1
7101dd2d40  b.eq 0x7101dd2d68
7101dd2d44  mov w22,#0x1
7101dd2d48  ldr x8,[x21, #0x180]
7101dd2d4c  ldr x2,[x8, x22, LSL #0x3]
7101dd2d50  mov x0,x21
7101dd2d54  mov w1,w22
7101dd2d58  bl 0x710376e070
7101dd2d5c  add x22,x22,#0x1
7101dd2d60  cmp x23,x22
7101dd2d64  b.ne 0x7101dd2d48
7101dd2d68  adrp x22,0x710532f000
7101dd2d6c  ldr x8,[x22, #0x730]
7101dd2d70  ldr x26,[x8, #0x8]
7101dd2d74  ldr x8,[x26, #0x318]
7101dd2d78  ldr x9,[x8, #0x8]
7101dd2d7c  ldr x8,[x9, #0x20]
7101dd2d80  ldrb w10,[x8]
7101dd2d84  add x21,x26,#0x310
7101dd2d88  cmp w10,#0xc
7101dd2d8c  b.ne 0x7101dd2e10
7101dd2d90  ldur w10,[x8, #0x1]
7101dd2d94  subs w10,w10,#0x1
7101dd2d98  b.lt 0x7101dd2e10
7101dd2d9c  ldr x12,[x9, #0x48]
7101dd2da0  ldr x9,[x9, #0x18]
7101dd2da4  mov w11,wzr
7101dd2da8  ldursw x14,[x8, #0x5]
7101dd2dac  and x12,x12,#0xffffffffff
7101dd2db0  ldp x13,x9,[x9, #0x20]
7101dd2db4  add x14,x9,x14
7101dd2db8  adrp x9,0x7104742000
7101dd2dbc  add x9,x9,#0xdbb
7101dd2dc0  add w15,w10,w11
7101dd2dc4  cmp w15,#0x0
7101dd2dc8  cinc w15,w15,lt
7101dd2dcc  asr w15,w15,#0x1
7101dd2dd0  add x16,x14,w15, SXTW  #0x3
7101dd2dd4  ldr w17,[x16]
7101dd2dd8  ldr x17,[x13, x17, LSL #0x3]
7101dd2ddc  cmp x17,x12
7101dd2de0  b.eq 0x7101dd2e00
7101dd2de4  sub w16,w15,#0x1
7101dd2de8  cmp x17,x12
7101dd2dec  csel w10,w16,w10,hi
7101dd2df0  csinc w11,w11,w15,hi
7101dd2df4  cmp w11,w10
7101dd2df8  b.le 0x7101dd2dc0
7101dd2dfc  b 0x7101dd2e18
7101dd2e00  ldrsw x9,[x16, #0x4]
7101dd2e04  tbnz w9,#0x1f,0x7101dd2e10
7101dd2e08  add x9,x8,x9
7101dd2e0c  b 0x7101dd2e18
7101dd2e10  adrp x9,0x7104742000
7101dd2e14  add x9,x9,#0xdbb
7101dd2e18  ldrb w8,[x9]
7101dd2e1c  sub w8,w8,#0xb
7101dd2e20  cmp w8,#0x2
7101dd2e24  b.cs 0x7101dd3070
7101dd2e28  mov x27,x28
7101dd2e2c  ldrb w25,[x9, #0x1]
7101dd2e30  ldr x1,[x27, #0x90]!
7101dd2e34  str x1,[x27, #0x8]
7101dd2e38  cbz w25,0x7101dd3078
7101dd2e3c  mov w23,wzr
7101dd2e40  b 0x7101dd3028
7101dd2e44  ldr x8,[x22, #0x730]
7101dd2e48  ldr x8,[x8, #0x8]
7101dd2e4c  add x0,x8,#0x310
7101dd2e50  mov x1,x24
7101dd2e54  bl 0x710327de70
7101dd2e58  tst w0,#0xff
7101dd2e5c  b.eq 0x7101dd3058
7101dd2e60  sub w9,w0,#0x1
7101dd2e64  and w8,w9,#0xff
7101dd2e68  cmp w8,#0xf
7101dd2e6c  b.hi 0x7101dd3058
7101dd2e70  adrp x8,0x7105314000
7101dd2e74  ldr x8,[x8, #0x510]
7101dd2e78  ldr x8,[x8]
7101dd2e7c  ldr x8,[x8, #0xd8]
7101dd2e80  ldr x8,[x8]
7101dd2e84  and w10,w0,#0xff
7101dd2e88  cmp w10,#0xe
7101dd2e8c  b.cs 0x7101dd2eb0
7101dd2e90  and w10,w9,#0xff
7101dd2e94  cmp w10,#0xd
7101dd2e98  b.cs 0x7101dd33c8
7101dd2e9c  ldr x8,[x8]
7101dd2ea0  and x9,x9,#0xff
7101dd2ea4  ldrb w8,[x8, x9, LSL ]
7101dd2ea8  cbnz w8,0x7101dd2edc
7101dd2eac  b 0x7101dd3058
7101dd2eb0  sub w9,w0,#0xe
7101dd2eb4  mvn w10,w9
7101dd2eb8  tst w10,#0xff
7101dd2ebc  b.eq 0x7101dd3058
7101dd2ec0  and w10,w9,#0xff
7101dd2ec4  cmp w10,#0x3
7101dd2ec8  b.cs 0x7101dd33c8
7101dd2ecc  ldr x8,[x8]
7101dd2ed0  add x8,x8,w9, UXTB  #0x1
7101dd2ed4  ldrh w8,[x8, #0xe]
7101dd2ed8  cbz w8,0x7101dd3058
7101dd2edc  ldp x9,x8,[x28, #0x98]
7101dd2ee0  cmp x9,x8
7101dd2ee4  b.eq 0x7101dd2efc
7101dd2ee8  str x24,[x9]
7101dd2eec  ldr x8,[x28, #0x98]
7101dd2ef0  add x8,x8,#0x8
7101dd2ef4  str x8,[x28, #0x98]
7101dd2ef8  b 0x7101dd3058
7101dd2efc  ldr x12,[x27]
7101dd2f00  sub x2,x9,x12
7101dd2f04  asr x13,x2,#0x3
7101dd2f08  add x9,x13,#0x1
7101dd2f0c  lsr x10,x9,#0x3d
7101dd2f10  cbnz x10,0x7101dd33c0
7101dd2f14  sub x8,x8,x12
7101dd2f18  asr x10,x8,#0x3
7101dd2f1c  orr x11,xzr,#0xffffffffffffffe
7101dd2f20  cmp x10,x11
7101dd2f24  str x27,[sp, #0x28]
7101dd2f28  b.hi 0x7101dd2f50
7101dd2f2c  asr x8,x8,#0x2
7101dd2f30  cmp x8,x9
7101dd2f34  csel x9,x9,x8,cc
7101dd2f38  cbz x9,0x7101dd301c
7101dd2f3c  lsr x8,x9,#0x3d
7101dd2f40  stp x13,x2,[sp, #0x18]
7101dd2f44  str x12,[sp, #0x8]
7101dd2f48  cbz x8,0x7101dd2f5c
7101dd2f4c  b 0x7101dd33c8
7101dd2f50  stp x13,x2,[sp, #0x18]
7101dd2f54  orr x9,xzr,#0x1fffffffffffffff
7101dd2f58  str x12,[sp, #0x8]
7101dd2f5c  lsl x8,x9,#0x3
7101dd2f60  cmp x8,#0x0
7101dd2f64  csinc x22,x8,xzr,ne
7101dd2f68  mov w0,#0x10
7101dd2f6c  mov x1,x22
7101dd2f70  str x9,[sp, #0x10]
7101dd2f74  bl 0x710392e290
7101dd2f78  mov x27,x0
7101dd2f7c  cbnz x0,0x7101dd2fc4
7101dd2f80  adrp x8,0x7105332000
7101dd2f84  ldr x0,[x8, #0xf00]
7101dd2f88  cbz x0,0x7101dd2fc0
7101dd2f8c  stur wzr,[x29, #-0x68]
7101dd2f90  stur x22,[x29, #-0xa0]
7101dd2f94  ldr x8,[x0]
7101dd2f98  ldr x8,[x8, #0x30]
7101dd2f9c  sub x1,x29,#0x68
7101dd2fa0  sub x2,x29,#0xa0
7101dd2fa4  blr x8
7101dd2fa8  tbz w0,#0x0,0x7101dd2fc0
7101dd2fac  mov w0,#0x10
7101dd2fb0  mov x1,x22
7101dd2fb4  bl 0x710392e290
7101dd2fb8  mov x27,x0
7101dd2fbc  cbnz x0,0x7101dd2fc4
7101dd2fc0  mov x27,xzr
7101dd2fc4  ldp x12,x8,[sp, #0x8]
7101dd2fc8  ldp x13,x2,[sp, #0x18]
7101dd2fcc  add x22,x27,x13, LSL #0x3
7101dd2fd0  add x8,x27,x8, LSL #0x3
7101dd2fd4  cmp x2,#0x1
7101dd2fd8  str x24,[x22], #0x8
7101dd2fdc  b.lt 0x7101dd2ffc
7101dd2fe0  mov x0,x27
7101dd2fe4  mov x1,x12
7101dd2fe8  mov x24,x12
7101dd2fec  str x8,[sp, #0x20]
7101dd2ff0  bl 0x71039c00e0
7101dd2ff4  ldr x8,[sp, #0x20]
7101dd2ff8  mov x12,x24
7101dd2ffc  stp x27,x22,[x28, #0x90]
7101dd3000  ldr x27,[sp, #0x28]
7101dd3004  adrp x22,0x710532f000
7101dd3008  str x8,[x28, #0xa0]
7101dd300c  cbz x12,0x7101dd3058
7101dd3010  mov x0,x12
7101dd3014  bl 0x710392eb40
7101dd3018  b 0x7101dd3058
7101dd301c  mov x8,xzr
7101dd3020  mov x27,xzr
7101dd3024  b 0x7101dd2fcc
7101dd3028  ldr x0,[x26, #0x318]
7101dd302c  mov w1,w23
7101dd3030  bl 0x710327d830
7101dd3034  mov x24,x0
7101dd3038  mov x0,x21
7101dd303c  mov x1,x24
7101dd3040  bl 0x710327de70
7101dd3044  and w8,w0,#0xff
7101dd3048  cmp w8,#0x0
7101dd304c  ccmp w8,#0x6,#0x4,ne
7101dd3050  ccmp w8,#0x10,#0x2,ne
7101dd3054  b.ls 0x7101dd2e44
7101dd3058  add w8,w23,#0x1
7101dd305c  and w23,w8,#0xff
7101dd3060  cmp w25,w23
7101dd3064  b.hi 0x7101dd3028
7101dd3068  ldp x0,x1,[x28, #0x90]
7101dd306c  b 0x7101dd307c
7101dd3070  ldr x1,[x28, #0x90]
7101dd3074  str x1,[x28, #0x98]
7101dd3078  mov x0,x1
7101dd307c  sub x2,x29,#0xa0
7101dd3080  stur x21,[x29, #-0xa0]
7101dd3084  bl 0x7101dd43a0
7101dd3088  mov x21,xzr
7101dd308c  adrp x26,0x71050b0000
7101dd3090  add x26,x26,#0xa98
7101dd3094  adrp x22,0x7104280000
7101dd3098  add x22,x22,#0xfa9
7101dd309c  adrp x23,0x7104308000
7101dd30a0  add x23,x23,#0xa37
7101dd30a4  adrp x27,0x710523d000
7101dd30a8  add x27,x27,#0x9c8
7101dd30ac  ldr x1,[x20]
7101dd30b0  ldr x9,[x1, #0x1b8]
7101dd30b4  cbz x9,0x7101dd319c
7101dd30b8  add x8,x1,#0x1b8
7101dd30bc  mov x10,x8
7101dd30c0  mov x11,x9
7101dd30c4  ldr w12,[x11, #0x20]
7101dd30c8  cmp w12,w21
7101dd30cc  cset w12,lt
7101dd30d0  csel x10,x10,x11,lt
7101dd30d4  ldr x11,[x11, w12, UXTW #0x3]
7101dd30d8  cbnz x11,0x7101dd30c4
7101dd30dc  cmp x10,x8
7101dd30e0  b.eq 0x7101dd3130
7101dd30e4  ldr w11,[x10, #0x20]
7101dd30e8  cmp w11,w21
7101dd30ec  b.gt 0x7101dd3130
7101dd30f0  ldr x24,[x10, #0x28]
7101dd30f4  cbz x24,0x7101dd3130
7101dd30f8  ldr x8,[x24]
7101dd30fc  ldr x8,[x8, #0x208]
7101dd3100  mov w1,#0x1
7101dd3104  mov x0,x24
7101dd3108  blr x8
7101dd310c  ldr x8,[x24]
7101dd3110  ldr x8,[x8, #0x388]
7101dd3114  mov x0,x24
7101dd3118  mov w1,wzr
7101dd311c  mov w2,wzr
7101dd3120  blr x8
7101dd3124  ldr x1,[x20]
7101dd3128  ldr x9,[x1, #0x1b8]
7101dd312c  add x8,x1,#0x1b8
7101dd3130  cbz x9,0x7101dd319c
7101dd3134  mov x10,x8
7101dd3138  ldr w11,[x9, #0x20]
7101dd313c  cmp w11,w21
7101dd3140  cset w11,lt
7101dd3144  csel x10,x10,x9,lt
7101dd3148  ldr x9,[x9, w11, UXTW #0x3]
7101dd314c  cbnz x9,0x7101dd3138
7101dd3150  cmp x10,x8
7101dd3154  b.eq 0x7101dd319c
7101dd3158  ldr w8,[x10, #0x20]
7101dd315c  cmp w8,w21
7101dd3160  b.gt 0x7101dd319c
7101dd3164  ldr x24,[x10, #0x28]
7101dd3168  cbz x24,0x7101dd319c
7101dd316c  ldr x8,[x24]
7101dd3170  ldr x8,[x8, #0x1f8]
7101dd3174  mov w1,#0x1
7101dd3178  mov x0,x24
7101dd317c  blr x8
7101dd3180  ldr x8,[x24]
7101dd3184  ldr x8,[x8, #0x388]
7101dd3188  mov x0,x24
7101dd318c  mov w1,wzr
7101dd3190  mov w2,wzr
7101dd3194  blr x8
7101dd3198  ldr x1,[x20]
7101dd319c  sub x0,x29,#0xa0
7101dd31a0  mov w2,w21
7101dd31a4  bl 0x7103771d60
7101dd31a8  ldur x8,[x29, #-0x98]
7101dd31ac  ldr x0,[x8]
7101dd31b0  cbz x0,0x7101dd31c4
7101dd31b4  ldr x8,[x0]
7101dd31b8  ldr x8,[x8, #0x280]
7101dd31bc  mov w1,wzr
7101dd31c0  blr x8
7101dd31c4  mov w0,#0x10
7101dd31c8  orr w1,wzr,#0x30
7101dd31cc  bl 0x710392e290
7101dd31d0  mov x24,x0
7101dd31d4  cbnz x0,0x7101dd3220
7101dd31d8  adrp x8,0x7105332000
7101dd31dc  ldr x0,[x8, #0xf00]
7101dd31e0  cbz x0,0x7101dd321c
7101dd31e4  orr w8,wzr,#0x30
7101dd31e8  stur wzr,[x29, #-0x5c]
7101dd31ec  sub x1,x29,#0x5c
7101dd31f0  stur x8,[x29, #-0x68]
7101dd31f4  ldr x8,[x0]
7101dd31f8  ldr x8,[x8, #0x30]
7101dd31fc  sub x2,x29,#0x68
7101dd3200  blr x8
7101dd3204  tbz w0,#0x0,0x7101dd321c
7101dd3208  mov w0,#0x10
7101dd320c  orr w1,wzr,#0x30
7101dd3210  bl 0x710392e290
7101dd3214  mov x24,x0
7101dd3218  cbnz x0,0x7101dd3220
7101dd321c  mov x24,xzr
7101dd3220  add x25,x24,#0x8
7101dd3224  mov x8,x25
7101dd3228  mov x0,x19
7101dd322c  mov x1,x22
7101dd3230  mov w2,w21
7101dd3234  str x26,[x24]
7101dd3238  bl 0x7103776640
7101dd323c  add x8,x24,#0x18
7101dd3240  mov x0,x25
7101dd3244  mov x1,x23
7101dd3248  bl 0x7103776910
7101dd324c  add x8,x28,x21, LSL #0x3
7101dd3250  strb w21,[x24, #0x28]
7101dd3254  ldr x0,[x8, #0x10]
7101dd3258  str x24,[x8, #0x10]
7101dd325c  cbz x0,0x7101dd326c
7101dd3260  ldr x8,[x0]
7101dd3264  ldr x8,[x8, #0x8]
7101dd3268  blr x8
7101dd326c  ldur x0,[x29, #-0x98]
7101dd3270  stp x27,xzr,[x29, #-0xa0]
7101dd3274  cbz x0,0x7101dd327c
7101dd3278  bl 0x710392eb40
7101dd327c  add x21,x21,#0x1
7101dd3280  cmp x21,#0x10
7101dd3284  b.ne 0x7101dd30ac
7101dd3288  ldr x0,[x20]
7101dd328c  ldr x8,[x0]
7101dd3290  ldr x8,[x8, #0x60]
7101dd3294  mov w1,wzr
7101dd3298  blr x8
7101dd329c  ldr x0,[x20]
7101dd32a0  ldr x8,[x0]
7101dd32a4  ldr x8,[x8, #0x70]
7101dd32a8  mov w1,wzr
7101dd32ac  blr x8
7101dd32b0  ldr x0,[sp, #0x140]
7101dd32b4  add x8,sp,#0x30
7101dd32b8  add x8,x8,#0xf0
7101dd32bc  cmp x8,x0
7101dd32c0  b.eq 0x7101dd32d4
7101dd32c4  cbz x0,0x7101dd32e0
7101dd32c8  ldr x8,[x0]
7101dd32cc  ldr x8,[x8, #0x28]
7101dd32d0  b 0x7101dd32dc
7101dd32d4  ldr x8,[x0]
7101dd32d8  ldr x8,[x8, #0x20]
7101dd32dc  blr x8
7101dd32e0  ldr x0,[sp, #0x110]
7101dd32e4  add x8,sp,#0x30
7101dd32e8  add x8,x8,#0xc0
7101dd32ec  cmp x8,x0
7101dd32f0  b.eq 0x7101dd3304
7101dd32f4  cbz x0,0x7101dd3310
7101dd32f8  ldr x8,[x0]
7101dd32fc  ldr x8,[x8, #0x28]
7101dd3300  b 0x7101dd330c
7101dd3304  ldr x8,[x0]
7101dd3308  ldr x8,[x8, #0x20]
7101dd330c  blr x8
7101dd3310  ldr x0,[sp, #0xe0]
7101dd3314  add x8,sp,#0x30
7101dd3318  add x8,x8,#0x90
7101dd331c  cmp x8,x0
7101dd3320  b.eq 0x7101dd3334
7101dd3324  cbz x0,0x7101dd3340
7101dd3328  ldr x8,[x0]
7101dd332c  ldr x8,[x8, #0x28]
7101dd3330  b 0x7101dd333c
7101dd3334  ldr x8,[x0]
7101dd3338  ldr x8,[x8, #0x20]
7101dd333c  blr x8
7101dd3340  ldr x0,[sp, #0xb0]
7101dd3344  add x8,sp,#0x30
7101dd3348  add x8,x8,#0x60
7101dd334c  cmp x8,x0
7101dd3350  b.eq 0x7101dd3364
7101dd3354  cbz x0,0x7101dd3370
7101dd3358  ldr x8,[x0]
7101dd335c  ldr x8,[x8, #0x28]
7101dd3360  b 0x7101dd336c
7101dd3364  ldr x8,[x0]
7101dd3368  ldr x8,[x8, #0x20]
7101dd336c  blr x8
7101dd3370  ldr x0,[sp, #0x80]
7101dd3374  add x8,sp,#0x30
7101dd3378  add x8,x8,#0x30
7101dd337c  cmp x8,x0
7101dd3380  b.eq 0x7101dd3394
7101dd3384  cbz x0,0x7101dd33a0
7101dd3388  ldr x8,[x0]
7101dd338c  ldr x8,[x8, #0x28]
7101dd3390  b 0x7101dd339c
7101dd3394  ldr x8,[x0]
7101dd3398  ldr x8,[x8, #0x20]
7101dd339c  blr x8
7101dd33a0  add sp,sp,#0x1b0
7101dd33a4  ldp x29,x30,[sp, #0x50]
7101dd33a8  ldp x20,x19,[sp, #0x40]
7101dd33ac  ldp x22,x21,[sp, #0x30]
7101dd33b0  ldp x24,x23,[sp, #0x20]
7101dd33b4  ldp x26,x25,[sp, #0x10]
7101dd33b8  ldp x28,x27,[sp], #0x60
7101dd33bc  ret
7101dd33c0  mov x0,x27
7101dd33c4  bl 0x71039c0c00
7101dd33c8  bl 0x71039c2650
