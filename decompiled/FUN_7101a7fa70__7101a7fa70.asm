// addr:      7101a7fa70
// offset:    0x1a7fa70
// name:      FUN_7101a7fa70
// mangled:   
// size:      6524

7101a7fa70  stp d9,d8,[sp, #-0x70]!
7101a7fa74  stp x28,x27,[sp, #0x10]
7101a7fa78  stp x26,x25,[sp, #0x20]
7101a7fa7c  stp x24,x23,[sp, #0x30]
7101a7fa80  stp x22,x21,[sp, #0x40]
7101a7fa84  stp x20,x19,[sp, #0x50]
7101a7fa88  stp x29,x30,[sp, #0x60]
7101a7fa8c  add x29,sp,#0x60
7101a7fa90  sub sp,sp,#0x3f0
7101a7fa94  mov w21,w1
7101a7fa98  adrp x1,0x7104432000
7101a7fa9c  add x1,x1,#0xb01
7101a7faa0  sub x8,x29,#0x78
7101a7faa4  mov x0,x2
7101a7faa8  mov x20,x3
7101a7faac  mov x19,x2
7101a7fab0  bl 0x7103776910
7101a7fab4  adrp x1,0x71042f6000
7101a7fab8  add x1,x1,#0x4eb
7101a7fabc  sub x8,x29,#0x88
7101a7fac0  mov x0,x19
7101a7fac4  bl 0x7103776910
7101a7fac8  adrp x1,0x71042c3000
7101a7facc  add x1,x1,#0x645
7101a7fad0  sub x8,x29,#0x98
7101a7fad4  mov x0,x19
7101a7fad8  bl 0x7103776910
7101a7fadc  adrp x1,0x7104411000
7101a7fae0  add x1,x1,#0x1db
7101a7fae4  add x8,sp,#0x328
7101a7fae8  mov x0,x19
7101a7faec  bl 0x7103776640
7101a7faf0  adrp x1,0x710437a000
7101a7faf4  add x1,x1,#0xe67
7101a7faf8  sub x8,x29,#0xa8
7101a7fafc  add x0,sp,#0x328
7101a7fb00  bl 0x7103776910
7101a7fb04  ldr x22,[sp, #0x330]
7101a7fb08  adrp x23,0x710523d000
7101a7fb0c  add x23,x23,#0x988
7101a7fb10  str x23,[sp, #0x328]
7101a7fb14  str xzr,[sp, #0x330]
7101a7fb18  cbz x22,0x7101a7fb3c
7101a7fb1c  ldr x0,[x22, #0x18]
7101a7fb20  adrp x8,0x710523d000
7101a7fb24  add x8,x8,#0x9a8
7101a7fb28  stp x8,xzr,[x22, #0x10]
7101a7fb2c  cbz x0,0x7101a7fb34
7101a7fb30  bl 0x710392eb40
7101a7fb34  mov x0,x22
7101a7fb38  bl 0x710392eb40
7101a7fb3c  adrp x1,0x7104411000
7101a7fb40  add x1,x1,#0x1db
7101a7fb44  add x8,sp,#0x328
7101a7fb48  mov x0,x19
7101a7fb4c  add x24,sp,#0x298
7101a7fb50  add x25,sp,#0x328
7101a7fb54  bl 0x7103776640
7101a7fb58  adrp x1,0x71042c3000
7101a7fb5c  add x1,x1,#0x645
7101a7fb60  sub x8,x29,#0xb8
7101a7fb64  add x0,sp,#0x328
7101a7fb68  bl 0x7103776910
7101a7fb6c  ldr x22,[sp, #0x330]
7101a7fb70  str x23,[sp, #0x328]
7101a7fb74  str xzr,[sp, #0x330]
7101a7fb78  cbz x22,0x7101a7fb9c
7101a7fb7c  ldr x0,[x22, #0x18]
7101a7fb80  adrp x8,0x710523d000
7101a7fb84  add x8,x8,#0x9a8
7101a7fb88  stp x8,xzr,[x22, #0x10]
7101a7fb8c  cbz x0,0x7101a7fb94
7101a7fb90  bl 0x710392eb40
7101a7fb94  mov x0,x22
7101a7fb98  bl 0x710392eb40
7101a7fb9c  mov w8,#0xffffffff
7101a7fba0  str w8,[sp, #0x330]
7101a7fba4  mov w8,#0x2
7101a7fba8  cmp w21,#0x70
7101a7fbac  str xzr,[sp, #0x328]
7101a7fbb0  strb wzr,[sp, #0x33c]
7101a7fbb4  stur xzr,[x24, #0x9c]
7101a7fbb8  str xzr,[sp, #0x380]
7101a7fbbc  str w8,[sp, #0x388]
7101a7fbc0  str xzr,[sp, #0x390]
7101a7fbc4  b.gt 0x7101a81298
7101a7fbc8  adrp x10,0x7105328000
7101a7fbcc  ldr x10,[x10, #0x748]
7101a7fbd0  ldr x10,[x10, #0x8]
7101a7fbd4  ldr x10,[x10, #0x4d8]
7101a7fbd8  orr w11,wzr,#0x70
7101a7fbdc  smaddl x11,w21,w11,x10
7101a7fbe0  ldr x12,[x11]
7101a7fbe4  ldr w13,[x11, #0x8]
7101a7fbe8  str x12,[sp, #0x328]
7101a7fbec  add x12,sp,#0x328
7101a7fbf0  add x8,x25,#0x58
7101a7fbf4  mov w22,#0x9dc5
7101a7fbf8  movk w22,#0x811c, LSL #16
7101a7fbfc  sxtw x9,w21
7101a7fc00  str w13,[sp, #0x330]
7101a7fc04  cmp x11,x12
7101a7fc08  b.eq 0x7101a7fc9c
7101a7fc0c  orr w13,wzr,#0x70
7101a7fc10  madd x13,x9,x13,x10
7101a7fc14  mov x11,xzr
7101a7fc18  add x13,x13,#0x14
7101a7fc1c  b 0x7101a7fc28
7101a7fc20  add x11,x11,#0x2
7101a7fc24  strb w14,[x15, #0x15]
7101a7fc28  add x14,x13,x11
7101a7fc2c  ldrb w16,[x14]
7101a7fc30  cbz w16,0x7101a7fc5c
7101a7fc34  add w17,w11,#0x1
7101a7fc38  add x15,x12,x11
7101a7fc3c  cmp w17,#0x3f
7101a7fc40  strb w16,[x15, #0x14]
7101a7fc44  b.cs 0x7101a7fc58
7101a7fc48  ldrb w14,[x14, #0x1]
7101a7fc4c  cbnz w14,0x7101a7fc20
7101a7fc50  add x11,x11,#0x1
7101a7fc54  b 0x7101a7fc5c
7101a7fc58  add w11,w11,#0x1
7101a7fc5c  add x12,sp,#0x328
7101a7fc60  add x13,x12,#0x14
7101a7fc64  strb wzr,[x13, w11, UXTW ]
7101a7fc68  str w11,[sp, #0x338]
7101a7fc6c  ldrb w11,[sp, #0x33c]
7101a7fc70  mov w13,w22
7101a7fc74  cbz w11,0x7101a7fc98
7101a7fc78  add x12,x12,#0x15
7101a7fc7c  mov w14,#0x89
7101a7fc80  mov w13,w22
7101a7fc84  mul w13,w13,w14
7101a7fc88  and w11,w11,#0xff
7101a7fc8c  eor w13,w13,w11
7101a7fc90  ldrb w11,[x12], #0x1
7101a7fc94  cbnz w11,0x7101a7fc84
7101a7fc98  str w13,[sp, #0x334]
7101a7fc9c  orr w11,wzr,#0x70
7101a7fca0  mul x9,x9,x11
7101a7fca4  add x9,x10,x9
7101a7fca8  ldp x10,x11,[x9, #0x58]
7101a7fcac  ldr x9,[x9, #0x68]
7101a7fcb0  stp x11,x9,[x8, #0x8]
7101a7fcb4  str x10,[x8]
7101a7fcb8  ldr w8,[sp, #0x388]
7101a7fcbc  cbz w8,0x7101a7fd84
7101a7fcc0  ldr x9,[x20, #0x8]
7101a7fcc4  ldr x9,[x9]
7101a7fcc8  cbz x9,0x7101a7fcdc
7101a7fccc  ldrb w8,[x9, #0x58]
7101a7fcd0  orr w8,w8,#0x1
7101a7fcd4  strb w8,[x9, #0x58]
7101a7fcd8  ldr w8,[sp, #0x388]
7101a7fcdc  cmp w8,#0x2
7101a7fce0  b.cs 0x7101a7fe40
7101a7fce4  cmp w8,#0x1
7101a7fce8  b.ne 0x7101a7fe58
7101a7fcec  ldr w8,[sp, #0x328]
7101a7fcf0  cmp w8,#0x7
7101a7fcf4  b.hi 0x7101a7fe58
7101a7fcf8  adrp x9,0x71044f7000
7101a7fcfc  add x9,x9,#0xa10
7101a7fd00  ldrsw x8,[x9, x8, LSL #0x2]
7101a7fd04  add x8,x8,x9
7101a7fd08  br x8
7101a7fd0c  mov x9,#0x6e6d
7101a7fd10  movk x9,#0x5f75, LSL #16
7101a7fd14  movk x9,#0x6572, LSL #32
7101a7fd18  movk x9,#0x6f63, LSL #48
7101a7fd1c  str x9,[sp, #0x2a0]
7101a7fd20  mov x9,#0x6472
7101a7fd24  movk x9,#0x635f, LSL #16
7101a7fd28  movk x9,#0x756f, LSL #32
7101a7fd2c  movk x9,#0x746e, LSL #48
7101a7fd30  str x9,[sp, #0x2a8]
7101a7fd34  mov w9,#0x635f
7101a7fd38  mov x8,#0x1700000000
7101a7fd3c  add x10,sp,#0x298
7101a7fd40  str x8,[sp, #0x298]
7101a7fd44  strh w9,[sp, #0x2b0]
7101a7fd48  mov w9,#0x6d6f
7101a7fd4c  movk w9,#0x6f6d, LSL #16
7101a7fd50  stur w9,[x24, #0x1a]
7101a7fd54  mov w11,#0x6e
7101a7fd58  add x8,x10,#0x9
7101a7fd5c  strh w11,[sp, #0x2b6]
7101a7fd60  mov w10,#0x6d
7101a7fd64  mov w9,#0x89
7101a7fd68  mov w11,w22
7101a7fd6c  mul w11,w11,w9
7101a7fd70  and w10,w10,#0xff
7101a7fd74  eor w11,w11,w10
7101a7fd78  ldrb w10,[x8], #0x1
7101a7fd7c  cbnz w10,0x7101a7fd6c
7101a7fd80  b 0x7101a801a4
7101a7fd84  ldur x8,[x29, #-0x70]
7101a7fd88  ldr x0,[x8, #0x10]
7101a7fd8c  cbz x0,0x7101a7fda4
7101a7fd90  add x1,sp,#0x2e0
7101a7fd94  mov w2,wzr
7101a7fd98  mov w3,wzr
7101a7fd9c  str wzr,[sp, #0x2e0]
7101a7fda0  bl 0x71037a2270
7101a7fda4  ldur x8,[x29, #-0x80]
7101a7fda8  ldr x0,[x8, #0x10]
7101a7fdac  cbz x0,0x7101a7fdc4
7101a7fdb0  add x1,sp,#0x2e0
7101a7fdb4  mov w2,wzr
7101a7fdb8  mov w3,wzr
7101a7fdbc  str wzr,[sp, #0x2e0]
7101a7fdc0  bl 0x71037a2270
7101a7fdc4  ldur x8,[x29, #-0x90]
7101a7fdc8  ldr x0,[x8, #0x10]
7101a7fdcc  cbz x0,0x7101a7fde4
7101a7fdd0  add x1,sp,#0x2e0
7101a7fdd4  mov w2,wzr
7101a7fdd8  mov w3,wzr
7101a7fddc  str wzr,[sp, #0x2e0]
7101a7fde0  bl 0x71037a2270
7101a7fde4  ldur x8,[x29, #-0xa0]
7101a7fde8  ldr x0,[x8, #0x10]
7101a7fdec  cbz x0,0x7101a7fe04
7101a7fdf0  add x1,sp,#0x2e0
7101a7fdf4  mov w2,wzr
7101a7fdf8  mov w3,wzr
7101a7fdfc  str wzr,[sp, #0x2e0]
7101a7fe00  bl 0x71037a2270
7101a7fe04  ldur x8,[x29, #-0xb0]
7101a7fe08  ldr x0,[x8, #0x10]
7101a7fe0c  cbz x0,0x7101a7fe24
7101a7fe10  add x1,sp,#0x2e0
7101a7fe14  mov w2,wzr
7101a7fe18  mov w3,wzr
7101a7fe1c  str wzr,[sp, #0x2e0]
7101a7fe20  bl 0x71037a2270
7101a7fe24  ldr x8,[x20, #0x8]
7101a7fe28  ldr x8,[x8]
7101a7fe2c  cbz x8,0x7101a81298
7101a7fe30  ldrb w9,[x8, #0x58]
7101a7fe34  and w9,w9,#0xfe
7101a7fe38  strb w9,[x8, #0x58]
7101a7fe3c  b 0x7101a81298
7101a7fe40  ldr w3,[sp, #0x330]
7101a7fe44  adrp x2,0x71042a0000
7101a7fe48  add x2,x2,#0xcfe
7101a7fe4c  add x0,sp,#0x298
7101a7fe50  bl 0x710176bcc0
7101a7fe54  b 0x7101a801a8
7101a7fe58  strb wzr,[sp, #0x2a0]
7101a7fe5c  str xzr,[sp, #0x298]
7101a7fe60  b 0x7101a801a8
7101a7fe64  mov x9,#0x6e6d
7101a7fe68  movk x9,#0x5f75, LSL #16
7101a7fe6c  movk x9,#0x6572, LSL #32
7101a7fe70  movk x9,#0x6f63, LSL #48
7101a7fe74  str x9,[sp, #0x2a0]
7101a7fe78  mov x9,#0x6472
7101a7fe7c  movk x9,#0x635f, LSL #16
7101a7fe80  movk x9,#0x756f, LSL #32
7101a7fe84  movk x9,#0x746e, LSL #48
7101a7fe88  str x9,[sp, #0x2a8]
7101a7fe8c  mov w9,#0x635f
7101a7fe90  strh w9,[sp, #0x2b0]
7101a7fe94  mov x9,#0x6c6f
7101a7fe98  movk x9,#0x656c, LSL #16
7101a7fe9c  mov x8,#0x1b00000000
7101a7fea0  add x10,sp,#0x298
7101a7fea4  str x8,[sp, #0x298]
7101a7fea8  mov w11,#0x6e
7101a7feac  movk x9,#0x7463, LSL #32
7101a7feb0  movk x9,#0x6f69, LSL #48
7101a7feb4  stur x9,[x24, #0x1a]
7101a7feb8  add x8,x10,#0x9
7101a7febc  strh w11,[sp, #0x2ba]
7101a7fec0  mov w10,#0x6d
7101a7fec4  mov w9,#0x89
7101a7fec8  mov w11,w22
7101a7fecc  mul w11,w11,w9
7101a7fed0  and w10,w10,#0xff
7101a7fed4  eor w11,w11,w10
7101a7fed8  ldrb w10,[x8], #0x1
7101a7fedc  cbnz w10,0x7101a7fecc
7101a7fee0  b 0x7101a801a4
7101a7fee4  mov x9,#0x6e6d
7101a7fee8  movk x9,#0x5f75, LSL #16
7101a7feec  movk x9,#0x6572, LSL #32
7101a7fef0  movk x9,#0x6f63, LSL #48
7101a7fef4  str x9,[sp, #0x2a0]
7101a7fef8  mov x9,#0x6472
7101a7fefc  movk x9,#0x635f, LSL #16
7101a7ff00  movk x9,#0x756f, LSL #32
7101a7ff04  movk x9,#0x746e, LSL #48
7101a7ff08  str x9,[sp, #0x2a8]
7101a7ff0c  mov w9,#0x735f
7101a7ff10  orr x8,xzr,#0x1800000000
7101a7ff14  str x8,[sp, #0x298]
7101a7ff18  add x8,sp,#0x298
7101a7ff1c  strh w9,[sp, #0x2b0]
7101a7ff20  mov w9,#0x6970
7101a7ff24  movk w9,#0x6972, LSL #16
7101a7ff28  stur w9,[x24, #0x1a]
7101a7ff2c  mov w9,#0x7374
7101a7ff30  add x8,x8,#0x9
7101a7ff34  strb wzr,[sp, #0x2b8]
7101a7ff38  strh w9,[sp, #0x2b6]
7101a7ff3c  mov w10,#0x6d
7101a7ff40  mov w9,#0x89
7101a7ff44  mov w11,w22
7101a7ff48  mul w11,w11,w9
7101a7ff4c  and w10,w10,#0xff
7101a7ff50  eor w11,w11,w10
7101a7ff54  ldrb w10,[x8], #0x1
7101a7ff58  cbnz w10,0x7101a7ff48
7101a7ff5c  b 0x7101a801a4
7101a7ff60  mov x9,#0x6e6d
7101a7ff64  movk x9,#0x5f75, LSL #16
7101a7ff68  movk x9,#0x6572, LSL #32
7101a7ff6c  movk x9,#0x6f63, LSL #48
7101a7ff70  str x9,[sp, #0x2a0]
7101a7ff74  mov x9,#0x6472
7101a7ff78  movk x9,#0x635f, LSL #16
7101a7ff7c  movk x9,#0x756f, LSL #32
7101a7ff80  movk x9,#0x746e, LSL #48
7101a7ff84  str x9,[sp, #0x2a8]
7101a7ff88  mov w9,#0x6f5f
7101a7ff8c  mov x8,#0x1600000000
7101a7ff90  add x10,sp,#0x298
7101a7ff94  str x8,[sp, #0x298]
7101a7ff98  strh w9,[sp, #0x2b0]
7101a7ff9c  mov w9,#0x6874
7101a7ffa0  movk w9,#0x7265, LSL #16
7101a7ffa4  stur w9,[x24, #0x1a]
7101a7ffa8  add x8,x10,#0x9
7101a7ffac  mov w10,#0x6d
7101a7ffb0  strb wzr,[sp, #0x2b6]
7101a7ffb4  mov w9,#0x89
7101a7ffb8  mov w11,w22
7101a7ffbc  mul w11,w11,w9
7101a7ffc0  and w10,w10,#0xff
7101a7ffc4  eor w11,w11,w10
7101a7ffc8  ldrb w10,[x8], #0x1
7101a7ffcc  cbnz w10,0x7101a7ffbc
7101a7ffd0  b 0x7101a801a4
7101a7ffd4  mov x9,#0x6e6d
7101a7ffd8  movk x9,#0x5f75, LSL #16
7101a7ffdc  movk x9,#0x6572, LSL #32
7101a7ffe0  movk x9,#0x6f63, LSL #48
7101a7ffe4  str x9,[sp, #0x2a0]
7101a7ffe8  mov x9,#0x6472
7101a7ffec  movk x9,#0x635f, LSL #16
7101a7fff0  movk x9,#0x756f, LSL #32
7101a7fff4  movk x9,#0x746e, LSL #48
7101a7fff8  mov x8,#0x1400000000
7101a7fffc  str x8,[sp, #0x298]
7101a80000  strb wzr,[sp, #0x2b4]
7101a80004  add x10,sp,#0x298
7101a80008  str x9,[sp, #0x2a8]
7101a8000c  mov w9,#0x655f
7101a80010  movk w9,#0x6374, LSL #16
7101a80014  add x8,x10,#0x9
7101a80018  str w9,[sp, #0x2b0]
7101a8001c  mov w10,#0x6d
7101a80020  mov w9,#0x89
7101a80024  mov w11,w22
7101a80028  mul w11,w11,w9
7101a8002c  and w10,w10,#0xff
7101a80030  eor w11,w11,w10
7101a80034  ldrb w10,[x8], #0x1
7101a80038  cbnz w10,0x7101a80028
7101a8003c  b 0x7101a801a4
7101a80040  mov x9,#0x6e6d
7101a80044  movk x9,#0x5f75, LSL #16
7101a80048  movk x9,#0x6572, LSL #32
7101a8004c  movk x9,#0x6f63, LSL #48
7101a80050  str x9,[sp, #0x2a0]
7101a80054  mov x9,#0x6472
7101a80058  movk x9,#0x635f, LSL #16
7101a8005c  movk x9,#0x756f, LSL #32
7101a80060  movk x9,#0x746e, LSL #48
7101a80064  str x9,[sp, #0x2a8]
7101a80068  mov w9,#0x6d5f
7101a8006c  mov x8,#0x1600000000
7101a80070  add x10,sp,#0x298
7101a80074  str x8,[sp, #0x298]
7101a80078  strh w9,[sp, #0x2b0]
7101a8007c  mov w9,#0x6c65
7101a80080  movk w9,#0x6565, LSL #16
7101a80084  stur w9,[x24, #0x1a]
7101a80088  add x8,x10,#0x9
7101a8008c  mov w10,#0x6d
7101a80090  strb wzr,[sp, #0x2b6]
7101a80094  mov w9,#0x89
7101a80098  mov w11,w22
7101a8009c  mul w11,w11,w9
7101a800a0  and w10,w10,#0xff
7101a800a4  eor w11,w11,w10
7101a800a8  ldrb w10,[x8], #0x1
7101a800ac  cbnz w10,0x7101a8009c
7101a800b0  b 0x7101a801a4
7101a800b4  mov x9,#0x6e6d
7101a800b8  movk x9,#0x5f75, LSL #16
7101a800bc  movk x9,#0x6572, LSL #32
7101a800c0  movk x9,#0x6f63, LSL #48
7101a800c4  str x9,[sp, #0x2a0]
7101a800c8  mov x9,#0x6472
7101a800cc  movk x9,#0x635f, LSL #16
7101a800d0  movk x9,#0x756f, LSL #32
7101a800d4  movk x9,#0x746e, LSL #48
7101a800d8  str x9,[sp, #0x2a8]
7101a800dc  mov w9,#0x6f5f
7101a800e0  mov x8,#0x1700000000
7101a800e4  add x10,sp,#0x298
7101a800e8  str x8,[sp, #0x298]
7101a800ec  strh w9,[sp, #0x2b0]
7101a800f0  mov w9,#0x6c6e
7101a800f4  movk w9,#0x6e69, LSL #16
7101a800f8  stur w9,[x24, #0x1a]
7101a800fc  mov w11,#0x65
7101a80100  add x8,x10,#0x9
7101a80104  strh w11,[sp, #0x2b6]
7101a80108  mov w10,#0x6d
7101a8010c  mov w9,#0x89
7101a80110  mov w11,w22
7101a80114  mul w11,w11,w9
7101a80118  and w10,w10,#0xff
7101a8011c  eor w11,w11,w10
7101a80120  ldrb w10,[x8], #0x1
7101a80124  cbnz w10,0x7101a80114
7101a80128  b 0x7101a801a4
7101a8012c  mov x9,#0x6e6d
7101a80130  movk x9,#0x5f75, LSL #16
7101a80134  movk x9,#0x6572, LSL #32
7101a80138  movk x9,#0x6f63, LSL #48
7101a8013c  str x9,[sp, #0x2a0]
7101a80140  mov x9,#0x6472
7101a80144  movk x9,#0x635f, LSL #16
7101a80148  movk x9,#0x756f, LSL #32
7101a8014c  movk x9,#0x746e, LSL #48
7101a80150  str x9,[sp, #0x2a8]
7101a80154  mov w9,#0x665f
7101a80158  orr x8,xzr,#0x1800000000
7101a8015c  str x8,[sp, #0x298]
7101a80160  add x8,sp,#0x298
7101a80164  strh w9,[sp, #0x2b0]
7101a80168  mov w9,#0x6769
7101a8016c  movk w9,#0x7468, LSL #16
7101a80170  stur w9,[x24, #0x1a]
7101a80174  mov w9,#0x7265
7101a80178  add x8,x8,#0x9
7101a8017c  strb wzr,[sp, #0x2b8]
7101a80180  strh w9,[sp, #0x2b6]
7101a80184  mov w10,#0x6d
7101a80188  mov w9,#0x89
7101a8018c  mov w11,w22
7101a80190  mul w11,w11,w9
7101a80194  and w10,w10,#0xff
7101a80198  eor w11,w11,w10
7101a8019c  ldrb w10,[x8], #0x1
7101a801a0  cbnz w10,0x7101a80190
7101a801a4  str w11,[sp, #0x298]
7101a801a8  add x9,sp,#0x298
7101a801ac  mov x8,xzr
7101a801b0  add x10,sp,#0x2e0
7101a801b4  add x9,x9,#0x8
7101a801b8  str xzr,[sp, #0x2e0]
7101a801bc  b 0x7101a801c8
7101a801c0  add x8,x8,#0x2
7101a801c4  strb w11,[x12, #0x9]
7101a801c8  add x11,x9,x8
7101a801cc  ldrb w13,[x11]
7101a801d0  cbz w13,0x7101a801fc
7101a801d4  add w14,w8,#0x1
7101a801d8  add x12,x10,x8
7101a801dc  cmp w14,#0x3f
7101a801e0  strb w13,[x12, #0x8]
7101a801e4  b.cs 0x7101a801f8
7101a801e8  ldrb w11,[x11, #0x1]
7101a801ec  cbnz w11,0x7101a801c0
7101a801f0  add x8,x8,#0x1
7101a801f4  b 0x7101a801fc
7101a801f8  add w8,w8,#0x1
7101a801fc  add x9,sp,#0x2e0
7101a80200  add x20,x9,#0x8
7101a80204  mov w10,w22
7101a80208  strb wzr,[x20, w8, UXTW ]
7101a8020c  str w8,[sp, #0x2e4]
7101a80210  ldrb w8,[sp, #0x2e8]
7101a80214  cbz w8,0x7101a80238
7101a80218  add x9,x9,#0x9
7101a8021c  mov w11,#0x89
7101a80220  mov w10,w22
7101a80224  mul w10,w10,w11
7101a80228  and w8,w8,#0xff
7101a8022c  eor w10,w10,w8
7101a80230  ldrb w8,[x9], #0x1
7101a80234  cbnz w8,0x7101a80224
7101a80238  str w10,[sp, #0x2e0]
7101a8023c  ldr x24,[x19, #0x8]
7101a80240  ldr w8,[sp, #0x388]
7101a80244  cmp w8,#0x1
7101a80248  ldr x0,[x24, #0x8]
7101a8024c  b.ne 0x7101a8028c
7101a80250  cbz x0,0x7101a80460
7101a80254  adrp x1,0x71043f1000
7101a80258  add x1,x1,#0x5a8
7101a8025c  bl 0x71037964b0
7101a80260  cbz x0,0x7101a80460
7101a80264  ldr x8,[x0]
7101a80268  ldr x8,[x8, #0x140]
7101a8026c  mov w1,#0x1
7101a80270  mov x21,x0
7101a80274  blr x8
7101a80278  ldr x8,[x24, #0x8]
7101a8027c  cbz x8,0x7101a80450
7101a80280  ldr x25,[x8, #0x80]
7101a80284  add x24,x8,#0x88
7101a80288  b 0x7101a80370
7101a8028c  cbz x0,0x7101a80420
7101a80290  adrp x1,0x7104339000
7101a80294  add x1,x1,#0xc4d
7101a80298  bl 0x71037964b0
7101a8029c  cbz x0,0x7101a80420
7101a802a0  ldr x8,[x0]
7101a802a4  ldr x8,[x8, #0x140]
7101a802a8  mov w1,#0x1
7101a802ac  mov x21,x0
7101a802b0  blr x8
7101a802b4  ldr x8,[x24, #0x8]
7101a802b8  cbz x8,0x7101a80410
7101a802bc  ldr x25,[x8, #0x80]
7101a802c0  add x24,x8,#0x88
7101a802c4  b 0x7101a802cc
7101a802c8  mov x25,x9
7101a802cc  cmp x25,x24
7101a802d0  b.eq 0x7101a80410
7101a802d4  ldr x0,[x25, #0x68]
7101a802d8  ldr x8,[x0]
7101a802dc  ldr x8,[x8, #0x148]
7101a802e0  blr x8
7101a802e4  tbz w0,#0x0,0x7101a80324
7101a802e8  ldr x8,[x21]
7101a802ec  ldr x1,[x25, #0x68]
7101a802f0  mov x0,x21
7101a802f4  ldr x8,[x8, #0x120]
7101a802f8  blr x8
7101a802fc  tbz w0,#0x0,0x7101a80324
7101a80300  ldr x0,[x25, #0x68]
7101a80304  ldr x8,[x0]
7101a80308  ldr x8,[x8, #0x178]
7101a8030c  blr x8
7101a80310  ldr x0,[x25, #0x68]
7101a80314  ldr x8,[x0]
7101a80318  ldr x8,[x8, #0x140]
7101a8031c  mov w1,wzr
7101a80320  blr x8
7101a80324  ldr x8,[x25, #0x8]
7101a80328  cbz x8,0x7101a8033c
7101a8032c  mov x25,x8
7101a80330  ldr x8,[x8]
7101a80334  cbnz x8,0x7101a8032c
7101a80338  b 0x7101a802cc
7101a8033c  mov x8,x25
7101a80340  ldr x9,[x8, #0x10]!
7101a80344  ldr x10,[x9]
7101a80348  cmp x10,x25
7101a8034c  b.eq 0x7101a802c8
7101a80350  ldr x9,[x8]
7101a80354  mov x8,x9
7101a80358  ldr x25,[x8, #0x10]!
7101a8035c  ldr x10,[x25]
7101a80360  cmp x10,x9
7101a80364  b.ne 0x7101a80350
7101a80368  b 0x7101a802cc
7101a8036c  mov x25,x9
7101a80370  cmp x25,x24
7101a80374  b.eq 0x7101a80450
7101a80378  ldr x0,[x25, #0x68]
7101a8037c  ldr x8,[x0]
7101a80380  ldr x8,[x8, #0x148]
7101a80384  blr x8
7101a80388  tbz w0,#0x0,0x7101a803c8
7101a8038c  ldr x8,[x21]
7101a80390  ldr x1,[x25, #0x68]
7101a80394  mov x0,x21
7101a80398  ldr x8,[x8, #0x120]
7101a8039c  blr x8
7101a803a0  tbz w0,#0x0,0x7101a803c8
7101a803a4  ldr x0,[x25, #0x68]
7101a803a8  ldr x8,[x0]
7101a803ac  ldr x8,[x8, #0x178]
7101a803b0  blr x8
7101a803b4  ldr x0,[x25, #0x68]
7101a803b8  ldr x8,[x0]
7101a803bc  ldr x8,[x8, #0x140]
7101a803c0  mov w1,wzr
7101a803c4  blr x8
7101a803c8  ldr x8,[x25, #0x8]
7101a803cc  cbz x8,0x7101a803e0
7101a803d0  mov x25,x8
7101a803d4  ldr x8,[x8]
7101a803d8  cbnz x8,0x7101a803d0
7101a803dc  b 0x7101a80370
7101a803e0  mov x8,x25
7101a803e4  ldr x9,[x8, #0x10]!
7101a803e8  ldr x10,[x9]
7101a803ec  cmp x10,x25
7101a803f0  b.eq 0x7101a8036c
7101a803f4  ldr x9,[x8]
7101a803f8  mov x8,x9
7101a803fc  ldr x25,[x8, #0x10]!
7101a80400  ldr x10,[x25]
7101a80404  cmp x10,x9
7101a80408  b.ne 0x7101a803f4
7101a8040c  b 0x7101a80370
7101a80410  ldr x8,[x21]
7101a80414  ldr x8,[x8, #0x178]
7101a80418  mov x0,x21
7101a8041c  blr x8
7101a80420  sub x0,x29,#0x78
7101a80424  mov x1,x20
7101a80428  bl 0x710377a120
7101a8042c  ldur x8,[x29, #-0x80]
7101a80430  ldr x0,[x8, #0x10]
7101a80434  cbz x0,0x7101a8048c
7101a80438  add x1,sp,#0x298
7101a8043c  mov w2,wzr
7101a80440  mov w3,wzr
7101a80444  str wzr,[sp, #0x298]
7101a80448  bl 0x71037a2270
7101a8044c  b 0x7101a8048c
7101a80450  ldr x8,[x21]
7101a80454  ldr x8,[x8, #0x178]
7101a80458  mov x0,x21
7101a8045c  blr x8
7101a80460  ldur x8,[x29, #-0x70]
7101a80464  ldr x0,[x8, #0x10]
7101a80468  cbz x0,0x7101a80480
7101a8046c  add x1,sp,#0x298
7101a80470  mov w2,wzr
7101a80474  mov w3,wzr
7101a80478  str wzr,[sp, #0x298]
7101a8047c  bl 0x71037a2270
7101a80480  sub x0,x29,#0x88
7101a80484  mov x1,x20
7101a80488  bl 0x710377a120
7101a8048c  ldr w8,[sp, #0x388]
7101a80490  cmp w8,#0x8
7101a80494  b.hi 0x7101a80fcc
7101a80498  adrp x9,0x71044f7000
7101a8049c  add x9,x9,#0xa30
7101a804a0  ldrsw x8,[x9, x8, LSL #0x2]
7101a804a4  add x8,x8,x9
7101a804a8  br x8
7101a804ac  ldur x8,[x29, #-0x90]
7101a804b0  ldr x0,[x8, #0x10]
7101a804b4  cbz x0,0x7101a804cc
7101a804b8  add x1,sp,#0x298
7101a804bc  mov w2,wzr
7101a804c0  mov w3,wzr
7101a804c4  str wzr,[sp, #0x298]
7101a804c8  bl 0x71037a2270
7101a804cc  ldur x8,[x29, #-0xa0]
7101a804d0  ldr x0,[x8, #0x10]
7101a804d4  cbz x0,0x7101a804ec
7101a804d8  add x1,sp,#0x298
7101a804dc  mov w2,wzr
7101a804e0  mov w3,wzr
7101a804e4  str wzr,[sp, #0x298]
7101a804e8  bl 0x71037a2270
7101a804ec  ldur x8,[x29, #-0xb0]
7101a804f0  ldr x0,[x8, #0x10]
7101a804f4  cbz x0,0x7101a80fcc
7101a804f8  add x1,sp,#0x298
7101a804fc  mov w2,wzr
7101a80500  mov w3,wzr
7101a80504  str wzr,[sp, #0x298]
7101a80508  bl 0x71037a2270
7101a8050c  b 0x7101a80fcc
7101a80510  ldr w8,[sp, #0x380]
7101a80514  mov w21,#0xc9ff
7101a80518  movk w21,#0x3b9a, LSL #16
7101a8051c  cmp w8,w21
7101a80520  csel w9,w8,w21,cc
7101a80524  cmp w8,#0x0
7101a80528  csel w8,wzr,w9,lt
7101a8052c  mov w22,#0x4dd3
7101a80530  movk w22,#0x1062, LSL #16
7101a80534  umull x9,w8,w22
7101a80538  lsr x3,x9,#0x26
7101a8053c  mov w24,#0xfffffc18
7101a80540  madd w4,w3,w24,w8
7101a80544  adrp x20,0x71043df000
7101a80548  add x20,x20,#0xad0
7101a8054c  sub x0,x29,#0x98
7101a80550  mov w2,#0x2
7101a80554  mov x1,x20
7101a80558  bl 0x710377a280
7101a8055c  ldr w8,[sp, #0x380]
7101a80560  cmp w8,w21
7101a80564  csel w9,w8,w21,cc
7101a80568  cmp w8,#0x0
7101a8056c  csel w8,wzr,w9,lt
7101a80570  umull x9,w8,w22
7101a80574  lsr x3,x9,#0x26
7101a80578  madd w4,w3,w24,w8
7101a8057c  sub x0,x29,#0xa8
7101a80580  mov w2,#0x2
7101a80584  mov x1,x20
7101a80588  bl 0x710377a280
7101a8058c  ldr w8,[sp, #0x380]
7101a80590  cmp w8,w21
7101a80594  csel w9,w8,w21,cc
7101a80598  cmp w8,#0x0
7101a8059c  csel w8,wzr,w9,lt
7101a805a0  umull x9,w8,w22
7101a805a4  lsr x3,x9,#0x26
7101a805a8  madd w4,w3,w24,w8
7101a805ac  sub x0,x29,#0xb8
7101a805b0  mov w2,#0x2
7101a805b4  mov x1,x20
7101a805b8  bl 0x710377a280
7101a805bc  b 0x7101a80fcc
7101a805c0  ldr w8,[sp, #0x380]
7101a805c4  mov w21,#0xc9ff
7101a805c8  movk w21,#0x3b9a, LSL #16
7101a805cc  cmp w8,w21
7101a805d0  csel w9,w8,w21,cc
7101a805d4  cmp w8,#0x0
7101a805d8  adrp x20,0x7104432000
7101a805dc  add x20,x20,#0xb10
7101a805e0  mov x1,x20
7101a805e4  csel w3,wzr,w9,lt
7101a805e8  sub x0,x29,#0x98
7101a805ec  mov w2,#0x1
7101a805f0  bl 0x710377a280
7101a805f4  ldr w8,[sp, #0x380]
7101a805f8  cmp w8,w21
7101a805fc  csel w9,w8,w21,cc
7101a80600  cmp w8,#0x0
7101a80604  csel w3,wzr,w9,lt
7101a80608  sub x0,x29,#0xa8
7101a8060c  mov w2,#0x1
7101a80610  mov x1,x20
7101a80614  bl 0x710377a280
7101a80618  ldr w8,[sp, #0x380]
7101a8061c  cmp w8,w21
7101a80620  csel w9,w8,w21,cc
7101a80624  cmp w8,#0x0
7101a80628  csel w3,wzr,w9,lt
7101a8062c  sub x0,x29,#0xb8
7101a80630  mov w2,#0x1
7101a80634  mov x1,x20
7101a80638  bl 0x710377a280
7101a8063c  b 0x7101a80fcc
7101a80640  ldr w8,[sp, #0x380]
7101a80644  add x10,sp,#0x328
7101a80648  mov x9,xzr
7101a8064c  add x10,x10,#0x14
7101a80650  add x11,sp,#0x250
7101a80654  str wzr,[sp, #0x250]
7101a80658  b 0x7101a80664
7101a8065c  add x9,x9,#0x2
7101a80660  strb w12,[x13, #0x9]
7101a80664  add x12,x10,x9
7101a80668  ldrb w14,[x12]
7101a8066c  cbz w14,0x7101a80a1c
7101a80670  add w15,w9,#0x1
7101a80674  add x13,x11,x9
7101a80678  cmp w15,#0x3f
7101a8067c  strb w14,[x13, #0x8]
7101a80680  b.cs 0x7101a80a18
7101a80684  ldrb w12,[x12, #0x1]
7101a80688  cbnz w12,0x7101a8065c
7101a8068c  add x9,x9,#0x1
7101a80690  b 0x7101a80a1c
7101a80694  ldr w8,[sp, #0x380]
7101a80698  mov w24,#0x4bbf
7101a8069c  movk w24,#0x3, LSL #16
7101a806a0  add w22,w24,#0x1
7101a806a4  udiv w9,w8,w22
7101a806a8  lsr w10,w8,#0x6
7101a806ac  cmp w10,#0xd2e
7101a806b0  mov w21,#0xb440
7101a806b4  movk w21,#0xfffc, LSL #16
7101a806b8  mov w25,#0xb3c5
7101a806bc  movk w25,#0x91a2, LSL #16
7101a806c0  mov w26,#0xfffff1f0
7101a806c4  mov w23,#0x8889
7101a806c8  movk w23,#0x8888, LSL #16
7101a806cc  mov w27,#0xffffffc4
7101a806d0  mov w28,#0x3b
7101a806d4  mov w20,#0x63
7101a806d8  adrp x1,0x7104349000
7101a806dc  add x1,x1,#0xd79
7101a806e0  sub x0,x29,#0x98
7101a806e4  orr w2,wzr,#0x3
7101a806e8  csel w9,w9,wzr,hi
7101a806ec  madd w8,w9,w21,w8
7101a806f0  umull x10,w8,w25
7101a806f4  cmp w8,#0xe10
7101a806f8  lsr x10,x10,#0x2b
7101a806fc  csel w10,wzr,w10,cc
7101a80700  madd w8,w10,w26,w8
7101a80704  umull x11,w8,w23
7101a80708  cmp w8,#0x3c
7101a8070c  lsr x11,x11,#0x25
7101a80710  csel w11,wzr,w11,cc
7101a80714  cmp w9,#0x0
7101a80718  madd w8,w11,w27,w8
7101a8071c  ucvtf s0,w8
7101a80720  adrp x8,0x7104473000
7101a80724  ldr s8,[x8, #0x91c]
7101a80728  adrp x8,0x7104472000
7101a8072c  ldr s9,[x8, #0xe0c]
7101a80730  fmul s0,s0,s8
7101a80734  fdiv s0,s0,s9
7101a80738  fcvtzs w8,s0
7101a8073c  csel w3,w10,w28,eq
7101a80740  csel w4,w11,w28,eq
7101a80744  csel w5,w8,w20,eq
7101a80748  bl 0x710377a280
7101a8074c  ldr w8,[sp, #0x380]
7101a80750  udiv w9,w8,w22
7101a80754  cmp w8,w24
7101a80758  csel w9,w9,wzr,hi
7101a8075c  madd w8,w9,w21,w8
7101a80760  umull x10,w8,w25
7101a80764  cmp w8,#0xe10
7101a80768  lsr x10,x10,#0x2b
7101a8076c  csel w10,wzr,w10,cc
7101a80770  madd w8,w10,w26,w8
7101a80774  umull x11,w8,w23
7101a80778  cmp w8,#0x3c
7101a8077c  lsr x11,x11,#0x25
7101a80780  csel w11,wzr,w11,cc
7101a80784  cmp w9,#0x0
7101a80788  madd w8,w11,w27,w8
7101a8078c  ucvtf s0,w8
7101a80790  fmul s1,s0,s8
7101a80794  fdiv s0,s1,s9
7101a80798  csel w3,w10,w28,eq
7101a8079c  fcvtzs w8,s0
7101a807a0  csel w4,w11,w28,eq
7101a807a4  csel w5,w8,w20,eq
7101a807a8  adrp x1,0x7104349000
7101a807ac  add x1,x1,#0xd79
7101a807b0  sub x0,x29,#0xa8
7101a807b4  orr w2,wzr,#0x3
7101a807b8  bl 0x710377a280
7101a807bc  ldr w8,[sp, #0x380]
7101a807c0  udiv w9,w8,w22
7101a807c4  cmp w8,w24
7101a807c8  csel w9,w9,wzr,hi
7101a807cc  madd w8,w9,w21,w8
7101a807d0  umull x10,w8,w25
7101a807d4  cmp w8,#0xe10
7101a807d8  lsr x10,x10,#0x2b
7101a807dc  csel w10,wzr,w10,cc
7101a807e0  madd w8,w10,w26,w8
7101a807e4  umull x11,w8,w23
7101a807e8  cmp w8,#0x3c
7101a807ec  lsr x11,x11,#0x25
7101a807f0  csel w11,wzr,w11,cc
7101a807f4  cmp w9,#0x0
7101a807f8  madd w8,w11,w27,w8
7101a807fc  ucvtf s0,w8
7101a80800  fmul s0,s0,s8
7101a80804  fdiv s0,s0,s9
7101a80808  csel w3,w10,w28,eq
7101a8080c  fcvtzs w8,s0
7101a80810  csel w4,w11,w28,eq
7101a80814  csel w5,w8,w20,eq
7101a80818  adrp x1,0x7104349000
7101a8081c  add x1,x1,#0xd79
7101a80820  sub x0,x29,#0xb8
7101a80824  orr w2,wzr,#0x3
7101a80828  adrp x23,0x710523d000
7101a8082c  add x23,x23,#0x988
7101a80830  bl 0x710377a280
7101a80834  b 0x7101a80fcc
7101a80838  ldr w8,[sp, #0x380]
7101a8083c  add x10,sp,#0x328
7101a80840  mov x9,xzr
7101a80844  add x10,x10,#0x14
7101a80848  add x11,sp,#0x178
7101a8084c  str wzr,[sp, #0x178]
7101a80850  b 0x7101a8085c
7101a80854  add x9,x9,#0x2
7101a80858  strb w12,[x13, #0x9]
7101a8085c  add x12,x10,x9
7101a80860  ldrb w14,[x12]
7101a80864  cbz w14,0x7101a80be8
7101a80868  add w15,w9,#0x1
7101a8086c  add x13,x11,x9
7101a80870  cmp w15,#0x3f
7101a80874  strb w14,[x13, #0x8]
7101a80878  b.cs 0x7101a80be4
7101a8087c  ldrb w12,[x12, #0x1]
7101a80880  cbnz w12,0x7101a80854
7101a80884  add x9,x9,#0x1
7101a80888  b 0x7101a80be8
7101a8088c  ldr w8,[sp, #0x380]
7101a80890  mov w20,#0x29ff
7101a80894  movk w20,#0x1575, LSL #16
7101a80898  tbnz w8,#0x1f,0x7101a80908
7101a8089c  cmp w8,w20
7101a808a0  csel w8,w8,w20,cc
7101a808a4  mov w9,#0x8889
7101a808a8  movk w9,#0x8888, LSL #16
7101a808ac  umull x8,w8,w9
7101a808b0  lsr x8,x8,#0x25
7101a808b4  b 0x7101a8090c
7101a808b8  add x9,sp,#0x328
7101a808bc  mov x8,xzr
7101a808c0  add x10,sp,#0xa0
7101a808c4  add x9,x9,#0x14
7101a808c8  str wzr,[sp, #0xa0]
7101a808cc  b 0x7101a808d8
7101a808d0  add x8,x8,#0x2
7101a808d4  strb w11,[x12, #0x9]
7101a808d8  add x11,x9,x8
7101a808dc  ldrb w13,[x11]
7101a808e0  cbz w13,0x7101a80e54
7101a808e4  add w14,w8,#0x1
7101a808e8  add x12,x10,x8
7101a808ec  cmp w14,#0x3f
7101a808f0  strb w13,[x12, #0x8]
7101a808f4  b.cs 0x7101a80e50
7101a808f8  ldrb w11,[x11, #0x1]
7101a808fc  cbnz w11,0x7101a808d0
7101a80900  add x8,x8,#0x1
7101a80904  b 0x7101a80e54
7101a80908  mov w8,wzr
7101a8090c  mov w22,#0x8889
7101a80910  movk w22,#0x8888, LSL #16
7101a80914  umull x9,w8,w22
7101a80918  lsr x9,x9,#0x25
7101a8091c  mov w24,#0xffffffc4
7101a80920  madd w8,w9,w24,w8
7101a80924  mov w21,#0x4240
7101a80928  movk w21,#0xf, LSL #16
7101a8092c  mul x9,x9,x21
7101a80930  mov w10,#0x3e7
7101a80934  adrp x1,0x7104412000
7101a80938  add x1,x1,#0x3ab
7101a8093c  sub x0,x29,#0x98
7101a80940  mov w2,#0x1
7101a80944  sxtw x8,w8
7101a80948  cmp x8,#0x3e7
7101a8094c  csel x8,x8,x10,lt
7101a80950  mov w10,#0x3e8
7101a80954  madd x3,x8,x10,x9
7101a80958  bl 0x710377a280
7101a8095c  ldr w8,[sp, #0x380]
7101a80960  tbnz w8,#0x1f,0x7101a80978
7101a80964  cmp w8,w20
7101a80968  csel w8,w8,w20,cc
7101a8096c  umull x8,w8,w22
7101a80970  lsr x8,x8,#0x25
7101a80974  b 0x7101a8097c
7101a80978  mov w8,wzr
7101a8097c  umull x9,w8,w22
7101a80980  lsr x9,x9,#0x25
7101a80984  madd w8,w9,w24,w8
7101a80988  mul x9,x9,x21
7101a8098c  sxtw x8,w8
7101a80990  cmp x8,#0x3e7
7101a80994  mov w10,#0x3e7
7101a80998  csel x8,x8,x10,lt
7101a8099c  mov w10,#0x3e8
7101a809a0  madd x3,x8,x10,x9
7101a809a4  adrp x1,0x7104412000
7101a809a8  add x1,x1,#0x3ab
7101a809ac  sub x0,x29,#0xa8
7101a809b0  mov w2,#0x1
7101a809b4  bl 0x710377a280
7101a809b8  ldr w8,[sp, #0x380]
7101a809bc  tbnz w8,#0x1f,0x7101a809d4
7101a809c0  cmp w8,w20
7101a809c4  csel w8,w8,w20,cc
7101a809c8  umull x8,w8,w22
7101a809cc  lsr x8,x8,#0x25
7101a809d0  b 0x7101a809d8
7101a809d4  mov w8,wzr
7101a809d8  umull x9,w8,w22
7101a809dc  lsr x9,x9,#0x25
7101a809e0  madd w8,w9,w24,w8
7101a809e4  mul x9,x9,x21
7101a809e8  sxtw x8,w8
7101a809ec  cmp x8,#0x3e7
7101a809f0  mov w10,#0x3e7
7101a809f4  csel x8,x8,x10,lt
7101a809f8  mov w10,#0x3e8
7101a809fc  madd x3,x8,x10,x9
7101a80a00  adrp x1,0x7104412000
7101a80a04  add x1,x1,#0x3ab
7101a80a08  sub x0,x29,#0xb8
7101a80a0c  mov w2,#0x1
7101a80a10  bl 0x710377a280
7101a80a14  b 0x7101a80fcc
7101a80a18  add w9,w9,#0x1
7101a80a1c  add x10,sp,#0x250
7101a80a20  add x1,x10,#0x8
7101a80a24  mov w11,w22
7101a80a28  strb wzr,[x1, w9, UXTW ]
7101a80a2c  str w9,[sp, #0x254]
7101a80a30  ldrb w9,[sp, #0x258]
7101a80a34  cbz w9,0x7101a80a58
7101a80a38  add x10,x10,#0x9
7101a80a3c  mov w12,#0x89
7101a80a40  mov w11,w22
7101a80a44  mul w11,w11,w12
7101a80a48  and w9,w9,#0xff
7101a80a4c  eor w11,w11,w9
7101a80a50  ldrb w9,[x10], #0x1
7101a80a54  cbnz w9,0x7101a80a44
7101a80a58  mov w20,#0xc9ff
7101a80a5c  movk w20,#0x3b9a, LSL #16
7101a80a60  cmp w8,w20
7101a80a64  csel w9,w8,w20,cc
7101a80a68  cmp w8,#0x0
7101a80a6c  csel w3,wzr,w9,lt
7101a80a70  sub x0,x29,#0x98
7101a80a74  mov w2,#0x1
7101a80a78  str w11,[sp, #0x250]
7101a80a7c  bl 0x710377a280
7101a80a80  ldr w8,[sp, #0x380]
7101a80a84  add x10,sp,#0x328
7101a80a88  mov x9,xzr
7101a80a8c  add x10,x10,#0x14
7101a80a90  add x11,sp,#0x208
7101a80a94  str wzr,[sp, #0x208]
7101a80a98  b 0x7101a80aa4
7101a80a9c  add x9,x9,#0x2
7101a80aa0  strb w12,[x13, #0x9]
7101a80aa4  add x12,x10,x9
7101a80aa8  ldrb w14,[x12]
7101a80aac  cbz w14,0x7101a80ad8
7101a80ab0  add w15,w9,#0x1
7101a80ab4  add x13,x11,x9
7101a80ab8  cmp w15,#0x3f
7101a80abc  strb w14,[x13, #0x8]
7101a80ac0  b.cs 0x7101a80ad4
7101a80ac4  ldrb w12,[x12, #0x1]
7101a80ac8  cbnz w12,0x7101a80a9c
7101a80acc  add x9,x9,#0x1
7101a80ad0  b 0x7101a80ad8
7101a80ad4  add w9,w9,#0x1
7101a80ad8  add x10,sp,#0x208
7101a80adc  add x1,x10,#0x8
7101a80ae0  mov w11,w22
7101a80ae4  strb wzr,[x1, w9, UXTW ]
7101a80ae8  str w9,[sp, #0x20c]
7101a80aec  ldrb w9,[sp, #0x210]
7101a80af0  cbz w9,0x7101a80b14
7101a80af4  add x10,x10,#0x9
7101a80af8  mov w12,#0x89
7101a80afc  mov w11,w22
7101a80b00  mul w11,w11,w12
7101a80b04  and w9,w9,#0xff
7101a80b08  eor w11,w11,w9
7101a80b0c  ldrb w9,[x10], #0x1
7101a80b10  cbnz w9,0x7101a80b00
7101a80b14  cmp w8,w20
7101a80b18  csel w9,w8,w20,cc
7101a80b1c  cmp w8,#0x0
7101a80b20  csel w3,wzr,w9,lt
7101a80b24  sub x0,x29,#0xa8
7101a80b28  mov w2,#0x1
7101a80b2c  str w11,[sp, #0x208]
7101a80b30  bl 0x710377a280
7101a80b34  ldr w8,[sp, #0x380]
7101a80b38  add x10,sp,#0x328
7101a80b3c  mov x9,xzr
7101a80b40  add x10,x10,#0x14
7101a80b44  add x11,sp,#0x1c0
7101a80b48  str wzr,[sp, #0x1c0]
7101a80b4c  b 0x7101a80b58
7101a80b50  add x9,x9,#0x2
7101a80b54  strb w12,[x13, #0x9]
7101a80b58  add x12,x10,x9
7101a80b5c  ldrb w14,[x12]
7101a80b60  cbz w14,0x7101a80b8c
7101a80b64  add w15,w9,#0x1
7101a80b68  add x13,x11,x9
7101a80b6c  cmp w15,#0x3f
7101a80b70  strb w14,[x13, #0x8]
7101a80b74  b.cs 0x7101a80b88
7101a80b78  ldrb w12,[x12, #0x1]
7101a80b7c  cbnz w12,0x7101a80b50
7101a80b80  add x9,x9,#0x1
7101a80b84  b 0x7101a80b8c
7101a80b88  add w9,w9,#0x1
7101a80b8c  add x11,sp,#0x1c0
7101a80b90  add x1,x11,#0x8
7101a80b94  strb wzr,[x1, w9, UXTW ]
7101a80b98  ldrb w10,[sp, #0x1c8]
7101a80b9c  str w9,[sp, #0x1c4]
7101a80ba0  cbz w10,0x7101a80bc0
7101a80ba4  add x9,x11,#0x9
7101a80ba8  mov w11,#0x89
7101a80bac  mul w12,w22,w11
7101a80bb0  and w10,w10,#0xff
7101a80bb4  eor w22,w12,w10
7101a80bb8  ldrb w10,[x9], #0x1
7101a80bbc  cbnz w10,0x7101a80bac
7101a80bc0  cmp w8,w20
7101a80bc4  csel w9,w8,w20,cc
7101a80bc8  cmp w8,#0x0
7101a80bcc  csel w3,wzr,w9,lt
7101a80bd0  sub x0,x29,#0xb8
7101a80bd4  mov w2,#0x1
7101a80bd8  str w22,[sp, #0x1c0]
7101a80bdc  bl 0x710377a280
7101a80be0  b 0x7101a80fcc
7101a80be4  add w9,w9,#0x1
7101a80be8  add x10,sp,#0x178
7101a80bec  add x1,x10,#0x8
7101a80bf0  mov w11,w22
7101a80bf4  strb wzr,[x1, w9, UXTW ]
7101a80bf8  str w9,[sp, #0x17c]
7101a80bfc  ldrb w9,[sp, #0x180]
7101a80c00  cbz w9,0x7101a80c24
7101a80c04  add x10,x10,#0x9
7101a80c08  mov w12,#0x89
7101a80c0c  mov w11,w22
7101a80c10  mul w11,w11,w12
7101a80c14  and w9,w9,#0xff
7101a80c18  eor w11,w11,w9
7101a80c1c  ldrb w9,[x10], #0x1
7101a80c20  cbnz w9,0x7101a80c10
7101a80c24  str w11,[sp, #0x178]
7101a80c28  cbz w8,0x7101a80c78
7101a80c2c  mov w9,#0x6667
7101a80c30  movk w9,#0x6666, LSL #16
7101a80c34  smull x9,w8,w9
7101a80c38  lsr x10,x9,#0x3f
7101a80c3c  asr x9,x9,#0x22
7101a80c40  add w9,w9,w10
7101a80c44  mov w10,#0xfffffff6
7101a80c48  madd w4,w9,w10,w8
7101a80c4c  cmp w9,#0x63
7101a80c50  mov w10,#0x63
7101a80c54  csel w9,w9,w10,cc
7101a80c58  cmn w8,#0x9
7101a80c5c  csel w3,wzr,w9,lt
7101a80c60  adrp x1,0x71042e6000
7101a80c64  add x1,x1,#0xb7c
7101a80c68  sub x0,x29,#0x98
7101a80c6c  mov w2,#0x2
7101a80c70  bl 0x710377a280
7101a80c74  b 0x7101a80c80
7101a80c78  sub x0,x29,#0x98
7101a80c7c  bl 0x710377a120
7101a80c80  ldr w8,[sp, #0x380]
7101a80c84  add x10,sp,#0x328
7101a80c88  mov x9,xzr
7101a80c8c  add x10,x10,#0x14
7101a80c90  add x11,sp,#0x130
7101a80c94  str wzr,[sp, #0x130]
7101a80c98  b 0x7101a80ca4
7101a80c9c  add x9,x9,#0x2
7101a80ca0  strb w12,[x13, #0x9]
7101a80ca4  add x12,x10,x9
7101a80ca8  ldrb w14,[x12]
7101a80cac  cbz w14,0x7101a80cd8
7101a80cb0  add w15,w9,#0x1
7101a80cb4  add x13,x11,x9
7101a80cb8  cmp w15,#0x3f
7101a80cbc  strb w14,[x13, #0x8]
7101a80cc0  b.cs 0x7101a80cd4
7101a80cc4  ldrb w12,[x12, #0x1]
7101a80cc8  cbnz w12,0x7101a80c9c
7101a80ccc  add x9,x9,#0x1
7101a80cd0  b 0x7101a80cd8
7101a80cd4  add w9,w9,#0x1
7101a80cd8  add x10,sp,#0x130
7101a80cdc  add x1,x10,#0x8
7101a80ce0  mov w11,w22
7101a80ce4  strb wzr,[x1, w9, UXTW ]
7101a80ce8  str w9,[sp, #0x134]
7101a80cec  ldrb w9,[sp, #0x138]
7101a80cf0  cbz w9,0x7101a80d14
7101a80cf4  add x10,x10,#0x9
7101a80cf8  mov w12,#0x89
7101a80cfc  mov w11,w22
7101a80d00  mul w11,w11,w12
7101a80d04  and w9,w9,#0xff
7101a80d08  eor w11,w11,w9
7101a80d0c  ldrb w9,[x10], #0x1
7101a80d10  cbnz w9,0x7101a80d00
7101a80d14  str w11,[sp, #0x130]
7101a80d18  cbz w8,0x7101a80d68
7101a80d1c  mov w9,#0x6667
7101a80d20  movk w9,#0x6666, LSL #16
7101a80d24  smull x9,w8,w9
7101a80d28  lsr x10,x9,#0x3f
7101a80d2c  asr x9,x9,#0x22
7101a80d30  add w9,w9,w10
7101a80d34  mov w10,#0xfffffff6
7101a80d38  madd w4,w9,w10,w8
7101a80d3c  cmp w9,#0x63
7101a80d40  mov w10,#0x63
7101a80d44  csel w9,w9,w10,cc
7101a80d48  cmn w8,#0x9
7101a80d4c  csel w3,wzr,w9,lt
7101a80d50  adrp x1,0x71042e6000
7101a80d54  add x1,x1,#0xb7c
7101a80d58  sub x0,x29,#0xa8
7101a80d5c  mov w2,#0x2
7101a80d60  bl 0x710377a280
7101a80d64  b 0x7101a80d70
7101a80d68  sub x0,x29,#0xa8
7101a80d6c  bl 0x710377a120
7101a80d70  ldr w8,[sp, #0x380]
7101a80d74  add x10,sp,#0x328
7101a80d78  mov x9,xzr
7101a80d7c  add x10,x10,#0x14
7101a80d80  add x11,sp,#0xe8
7101a80d84  str wzr,[sp, #0xe8]
7101a80d88  b 0x7101a80d94
7101a80d8c  add x9,x9,#0x2
7101a80d90  strb w12,[x13, #0x9]
7101a80d94  add x12,x10,x9
7101a80d98  ldrb w14,[x12]
7101a80d9c  cbz w14,0x7101a80dc8
7101a80da0  add w15,w9,#0x1
7101a80da4  add x13,x11,x9
7101a80da8  cmp w15,#0x3f
7101a80dac  strb w14,[x13, #0x8]
7101a80db0  b.cs 0x7101a80dc4
7101a80db4  ldrb w12,[x12, #0x1]
7101a80db8  cbnz w12,0x7101a80d8c
7101a80dbc  add x9,x9,#0x1
7101a80dc0  b 0x7101a80dc8
7101a80dc4  add w9,w9,#0x1
7101a80dc8  add x11,sp,#0xe8
7101a80dcc  add x1,x11,#0x8
7101a80dd0  strb wzr,[x1, w9, UXTW ]
7101a80dd4  ldrb w10,[sp, #0xf0]
7101a80dd8  str w9,[sp, #0xec]
7101a80ddc  cbz w10,0x7101a80dfc
7101a80de0  add x9,x11,#0x9
7101a80de4  mov w11,#0x89
7101a80de8  mul w12,w22,w11
7101a80dec  and w10,w10,#0xff
7101a80df0  eor w22,w12,w10
7101a80df4  ldrb w10,[x9], #0x1
7101a80df8  cbnz w10,0x7101a80de8
7101a80dfc  str w22,[sp, #0xe8]
7101a80e00  cbz w8,0x7101a80fc4
7101a80e04  mov w9,#0x6667
7101a80e08  movk w9,#0x6666, LSL #16
7101a80e0c  smull x9,w8,w9
7101a80e10  lsr x10,x9,#0x3f
7101a80e14  asr x9,x9,#0x22
7101a80e18  add w9,w9,w10
7101a80e1c  mov w10,#0xfffffff6
7101a80e20  madd w4,w9,w10,w8
7101a80e24  cmp w9,#0x63
7101a80e28  mov w10,#0x63
7101a80e2c  csel w9,w9,w10,cc
7101a80e30  cmn w8,#0x9
7101a80e34  csel w3,wzr,w9,lt
7101a80e38  adrp x1,0x71042e6000
7101a80e3c  add x1,x1,#0xb7c
7101a80e40  sub x0,x29,#0xb8
7101a80e44  mov w2,#0x2
7101a80e48  bl 0x710377a280
7101a80e4c  b 0x7101a80fcc
7101a80e50  add w8,w8,#0x1
7101a80e54  add x9,sp,#0xa0
7101a80e58  add x1,x9,#0x8
7101a80e5c  mov w10,w22
7101a80e60  strb wzr,[x1, w8, UXTW ]
7101a80e64  str w8,[sp, #0xa4]
7101a80e68  ldrb w8,[sp, #0xa8]
7101a80e6c  cbz w8,0x7101a80e90
7101a80e70  add x9,x9,#0x9
7101a80e74  mov w11,#0x89
7101a80e78  mov w10,w22
7101a80e7c  mul w10,w10,w11
7101a80e80  and w8,w8,#0xff
7101a80e84  eor w10,w10,w8
7101a80e88  ldrb w8,[x9], #0x1
7101a80e8c  cbnz w8,0x7101a80e7c
7101a80e90  sub x0,x29,#0x98
7101a80e94  str w10,[sp, #0xa0]
7101a80e98  bl 0x710377a120
7101a80e9c  add x9,sp,#0x328
7101a80ea0  mov x8,xzr
7101a80ea4  add x10,sp,#0x58
7101a80ea8  add x9,x9,#0x14
7101a80eac  str wzr,[sp, #0x58]
7101a80eb0  b 0x7101a80ebc
7101a80eb4  add x8,x8,#0x2
7101a80eb8  strb w11,[x12, #0x9]
7101a80ebc  add x11,x9,x8
7101a80ec0  ldrb w13,[x11]
7101a80ec4  cbz w13,0x7101a80ef0
7101a80ec8  add w14,w8,#0x1
7101a80ecc  add x12,x10,x8
7101a80ed0  cmp w14,#0x3f
7101a80ed4  strb w13,[x12, #0x8]
7101a80ed8  b.cs 0x7101a80eec
7101a80edc  ldrb w11,[x11, #0x1]
7101a80ee0  cbnz w11,0x7101a80eb4
7101a80ee4  add x8,x8,#0x1
7101a80ee8  b 0x7101a80ef0
7101a80eec  add w8,w8,#0x1
7101a80ef0  add x9,sp,#0x58
7101a80ef4  add x1,x9,#0x8
7101a80ef8  mov w10,w22
7101a80efc  strb wzr,[x1, w8, UXTW ]
7101a80f00  str w8,[sp, #0x5c]
7101a80f04  ldrb w8,[sp, #0x60]
7101a80f08  cbz w8,0x7101a80f2c
7101a80f0c  add x9,x9,#0x9
7101a80f10  mov w11,#0x89
7101a80f14  mov w10,w22
7101a80f18  mul w10,w10,w11
7101a80f1c  and w8,w8,#0xff
7101a80f20  eor w10,w10,w8
7101a80f24  ldrb w8,[x9], #0x1
7101a80f28  cbnz w8,0x7101a80f18
7101a80f2c  sub x0,x29,#0xa8
7101a80f30  str w10,[sp, #0x58]
7101a80f34  bl 0x710377a120
7101a80f38  add x9,sp,#0x328
7101a80f3c  mov x8,xzr
7101a80f40  add x10,sp,#0x10
7101a80f44  add x9,x9,#0x14
7101a80f48  str wzr,[sp, #0x10]
7101a80f4c  b 0x7101a80f58
7101a80f50  add x8,x8,#0x2
7101a80f54  strb w11,[x12, #0x9]
7101a80f58  add x11,x9,x8
7101a80f5c  ldrb w13,[x11]
7101a80f60  cbz w13,0x7101a80f8c
7101a80f64  add w14,w8,#0x1
7101a80f68  add x12,x10,x8
7101a80f6c  cmp w14,#0x3f
7101a80f70  strb w13,[x12, #0x8]
7101a80f74  b.cs 0x7101a80f88
7101a80f78  ldrb w11,[x11, #0x1]
7101a80f7c  cbnz w11,0x7101a80f50
7101a80f80  add x8,x8,#0x1
7101a80f84  b 0x7101a80f8c
7101a80f88  add w8,w8,#0x1
7101a80f8c  add x10,sp,#0x10
7101a80f90  add x1,x10,#0x8
7101a80f94  strb wzr,[x1, w8, UXTW ]
7101a80f98  ldrb w9,[sp, #0x18]
7101a80f9c  str w8,[sp, #0x14]
7101a80fa0  cbz w9,0x7101a80fc0
7101a80fa4  add x8,x10,#0x9
7101a80fa8  mov w10,#0x89
7101a80fac  mul w11,w22,w10
7101a80fb0  and w9,w9,#0xff
7101a80fb4  eor w22,w11,w9
7101a80fb8  ldrb w9,[x8], #0x1
7101a80fbc  cbnz w9,0x7101a80fac
7101a80fc0  str w22,[sp, #0x10]
7101a80fc4  sub x0,x29,#0xb8
7101a80fc8  bl 0x710377a120
7101a80fcc  ldr w1,[sp, #0x328]
7101a80fd0  adrp x0,0x7104291000
7101a80fd4  add x0,x0,#0x65b
7101a80fd8  add x8,sp,#0x298
7101a80fdc  add x20,sp,#0x298
7101a80fe0  bl 0x71003a4ca0
7101a80fe4  ldr x21,[x19, #0x8]
7101a80fe8  ldr x0,[x21, #0x8]
7101a80fec  cbz x0,0x7101a810d8
7101a80ff0  add x1,x20,#0x8
7101a80ff4  bl 0x71037964b0
7101a80ff8  cbz x0,0x7101a810d8
7101a80ffc  ldr x8,[x0]
7101a81000  ldr x8,[x8, #0x140]
7101a81004  mov w1,#0x1
7101a81008  mov x20,x0
7101a8100c  blr x8
7101a81010  ldr x8,[x21, #0x8]
7101a81014  cbz x8,0x7101a810c8
7101a81018  ldr x22,[x8, #0x80]
7101a8101c  add x21,x8,#0x88
7101a81020  b 0x7101a81028
7101a81024  mov x22,x9
7101a81028  cmp x22,x21
7101a8102c  b.eq 0x7101a810c8
7101a81030  ldr x0,[x22, #0x68]
7101a81034  ldr x8,[x0]
7101a81038  ldr x8,[x8, #0x148]
7101a8103c  blr x8
7101a81040  tbz w0,#0x0,0x7101a81080
7101a81044  ldr x8,[x20]
7101a81048  ldr x1,[x22, #0x68]
7101a8104c  mov x0,x20
7101a81050  ldr x8,[x8, #0x120]
7101a81054  blr x8
7101a81058  tbz w0,#0x0,0x7101a81080
7101a8105c  ldr x0,[x22, #0x68]
7101a81060  ldr x8,[x0]
7101a81064  ldr x8,[x8, #0x178]
7101a81068  blr x8
7101a8106c  ldr x0,[x22, #0x68]
7101a81070  ldr x8,[x0]
7101a81074  ldr x8,[x8, #0x140]
7101a81078  mov w1,wzr
7101a8107c  blr x8
7101a81080  ldr x8,[x22, #0x8]
7101a81084  cbz x8,0x7101a81098
7101a81088  mov x22,x8
7101a8108c  ldr x8,[x8]
7101a81090  cbnz x8,0x7101a81088
7101a81094  b 0x7101a81028
7101a81098  mov x8,x22
7101a8109c  ldr x9,[x8, #0x10]!
7101a810a0  ldr x10,[x9]
7101a810a4  cmp x10,x22
7101a810a8  b.eq 0x7101a81024
7101a810ac  ldr x9,[x8]
7101a810b0  mov x8,x9
7101a810b4  ldr x22,[x8, #0x10]!
7101a810b8  ldr x10,[x22]
7101a810bc  cmp x10,x9
7101a810c0  b.ne 0x7101a810ac
7101a810c4  b 0x7101a81028
7101a810c8  ldr x8,[x20]
7101a810cc  ldr x8,[x8, #0x178]
7101a810d0  mov x0,x20
7101a810d4  blr x8
7101a810d8  ldr w8,[sp, #0x388]
7101a810dc  ldr x0,[x19, #0x8]
7101a810e0  cmp w8,#0x8
7101a810e4  b.ne 0x7101a81160
7101a810e8  fmov s0,0x3f800000
7101a810ec  adrp x1,0x710424e000
7101a810f0  add x1,x1,#0xf2b
7101a810f4  bl 0x7103778300
7101a810f8  adrp x1,0x7104411000
7101a810fc  add x1,x1,#0x1db
7101a81100  mov x8,sp
7101a81104  mov x0,x19
7101a81108  bl 0x7103776640
7101a8110c  ldr x19,[sp, #0x8]
7101a81110  ldr x8,[x19, #0x8]
7101a81114  cbz x8,0x7101a81270
7101a81118  ldr x19,[x8, #0x78]
7101a8111c  adrp x8,0x710593b000
7101a81120  add x8,x8,#0xa40
7101a81124  ldarb w8,[x8]
7101a81128  tbz w8,#0x0,0x7101a81314
7101a8112c  cbz x19,0x7101a8126c
7101a81130  ldr x8,[x19]
7101a81134  ldr x8,[x8]
7101a81138  mov x0,x19
7101a8113c  blr x8
7101a81140  cbz x0,0x7101a8126c
7101a81144  adrp x8,0x710593b000
7101a81148  add x8,x8,#0xa58
7101a8114c  cmp x0,x8
7101a81150  b.eq 0x7101a811d8
7101a81154  ldr x0,[x0]
7101a81158  cbnz x0,0x7101a8114c
7101a8115c  b 0x7101a8126c
7101a81160  fmov s0,0x3f800000
7101a81164  adrp x1,0x71043ce000
7101a81168  add x1,x1,#0xe92
7101a8116c  bl 0x7103778300
7101a81170  adrp x1,0x7104411000
7101a81174  add x1,x1,#0x1db
7101a81178  mov x8,sp
7101a8117c  mov x0,x19
7101a81180  bl 0x7103776640
7101a81184  ldr x19,[sp, #0x8]
7101a81188  ldr x8,[x19, #0x8]
7101a8118c  cbz x8,0x7101a81270
7101a81190  ldr x19,[x8, #0x78]
7101a81194  adrp x8,0x710593b000
7101a81198  add x8,x8,#0xa40
7101a8119c  ldarb w8,[x8]
7101a811a0  tbz w8,#0x0,0x7101a81358
7101a811a4  cbz x19,0x7101a8126c
7101a811a8  ldr x8,[x19]
7101a811ac  ldr x8,[x8]
7101a811b0  mov x0,x19
7101a811b4  blr x8
7101a811b8  cbz x0,0x7101a8126c
7101a811bc  adrp x8,0x710593b000
7101a811c0  add x8,x8,#0xa58
7101a811c4  cmp x0,x8
7101a811c8  b.eq 0x7101a811e4
7101a811cc  ldr x0,[x0]
7101a811d0  cbnz x0,0x7101a811c4
7101a811d4  b 0x7101a8126c
7101a811d8  mov w8,#0x1
7101a811dc  strb w8,[x19, #0x60]
7101a811e0  b 0x7101a8126c
7101a811e4  ldr w9,[x19, #0x54]
7101a811e8  ldr x8,[x19, #0x18]
7101a811ec  str w9,[x19, #0x58]
7101a811f0  cbz x8,0x7101a81204
7101a811f4  str w9,[x8, #0x30]
7101a811f8  ldrb w9,[x8, #0x58]
7101a811fc  orr w9,w9,#0x10
7101a81200  strb w9,[x8, #0x58]
7101a81204  ldr x8,[x19, #0x20]
7101a81208  cbz x8,0x7101a81220
7101a8120c  ldr w9,[x19, #0x58]
7101a81210  str w9,[x8, #0x30]
7101a81214  ldrb w9,[x8, #0x58]
7101a81218  orr w9,w9,#0x10
7101a8121c  strb w9,[x8, #0x58]
7101a81220  ldr x0,[x19, #0x28]
7101a81224  cbz x0,0x7101a81238
7101a81228  ldr x8,[x0]
7101a8122c  ldr x8,[x8, #0x180]
7101a81230  fmov s0,wzr
7101a81234  blr x8
7101a81238  ldr x0,[x19, #0x30]
7101a8123c  cbz x0,0x7101a81268
7101a81240  ldrb w8,[x19, #0x63]
7101a81244  cbz w8,0x7101a81258
7101a81248  ldr x8,[x0]
7101a8124c  ldr x8,[x8, #0x190]
7101a81250  blr x8
7101a81254  b 0x7101a81268
7101a81258  ldr x8,[x0]
7101a8125c  ldr x8,[x8, #0x180]
7101a81260  fmov s0,wzr
7101a81264  blr x8
7101a81268  strh wzr,[x19, #0x64]
7101a8126c  ldr x19,[sp, #0x8]
7101a81270  stp x23,xzr,[sp]
7101a81274  cbz x19,0x7101a81298
7101a81278  ldr x0,[x19, #0x18]
7101a8127c  adrp x8,0x710523d000
7101a81280  add x8,x8,#0x9a8
7101a81284  stp x8,xzr,[x19, #0x10]
7101a81288  cbz x0,0x7101a81290
7101a8128c  bl 0x710392eb40
7101a81290  mov x0,x19
7101a81294  bl 0x710392eb40
7101a81298  ldur x0,[x29, #-0xb0]
7101a8129c  adrp x19,0x710523d000
7101a812a0  add x19,x19,#0x9a8
7101a812a4  stp x19,xzr,[x29, #-0xb8]
7101a812a8  cbz x0,0x7101a812b0
7101a812ac  bl 0x710392eb40
7101a812b0  ldur x0,[x29, #-0xa0]
7101a812b4  stp x19,xzr,[x29, #-0xa8]
7101a812b8  cbz x0,0x7101a812c0
7101a812bc  bl 0x710392eb40
7101a812c0  ldur x0,[x29, #-0x90]
7101a812c4  stp x19,xzr,[x29, #-0x98]
7101a812c8  cbz x0,0x7101a812d0
7101a812cc  bl 0x710392eb40
7101a812d0  ldur x0,[x29, #-0x80]
7101a812d4  stp x19,xzr,[x29, #-0x88]
7101a812d8  cbz x0,0x7101a812e0
7101a812dc  bl 0x710392eb40
7101a812e0  ldur x0,[x29, #-0x70]
7101a812e4  stp x19,xzr,[x29, #-0x78]
7101a812e8  cbz x0,0x7101a812f0
7101a812ec  bl 0x710392eb40
7101a812f0  add sp,sp,#0x3f0
7101a812f4  ldp x29,x30,[sp, #0x60]
7101a812f8  ldp x20,x19,[sp, #0x50]
7101a812fc  ldp x22,x21,[sp, #0x40]
7101a81300  ldp x24,x23,[sp, #0x30]
7101a81304  ldp x26,x25,[sp, #0x20]
7101a81308  ldp x28,x27,[sp, #0x10]
7101a8130c  ldp d9,d8,[sp], #0x70
7101a81310  ret
7101a81314  adrp x0,0x710593b000
7101a81318  add x0,x0,#0xa40
7101a8131c  bl 0x71039c06b0
7101a81320  cbz w0,0x7101a8112c
7101a81324  adrp x8,0x710593b000
7101a81328  add x8,x8,#0xa48
7101a8132c  ldarb w8,[x8]
7101a81330  tbz w8,#0x0,0x7101a8139c
7101a81334  adrp x8,0x710593b000
7101a81338  adrp x9,0x710593b000
7101a8133c  add x9,x9,#0xa50
7101a81340  adrp x0,0x710593b000
7101a81344  add x0,x0,#0xa40
7101a81348  str x9,[x8, #0xa58]
7101a8134c  bl 0x71039c06c0
7101a81350  cbnz x19,0x7101a81130
7101a81354  b 0x7101a8126c
7101a81358  adrp x0,0x710593b000
7101a8135c  add x0,x0,#0xa40
7101a81360  bl 0x71039c06b0
7101a81364  cbz w0,0x7101a811a4
7101a81368  adrp x8,0x710593b000
7101a8136c  add x8,x8,#0xa48
7101a81370  ldarb w8,[x8]
7101a81374  tbz w8,#0x0,0x7101a813c4
7101a81378  adrp x8,0x710593b000
7101a8137c  adrp x9,0x710593b000
7101a81380  add x9,x9,#0xa50
7101a81384  adrp x0,0x710593b000
7101a81388  add x0,x0,#0xa40
7101a8138c  str x9,[x8, #0xa58]
7101a81390  bl 0x71039c06c0
7101a81394  cbnz x19,0x7101a811a8
7101a81398  b 0x7101a8126c
7101a8139c  adrp x0,0x710593b000
7101a813a0  add x0,x0,#0xa48
7101a813a4  bl 0x71039c06b0
7101a813a8  cbz w0,0x7101a81334
7101a813ac  adrp x8,0x710593b000
7101a813b0  adrp x0,0x710593b000
7101a813b4  add x0,x0,#0xa48
7101a813b8  str xzr,[x8, #0xa50]
7101a813bc  bl 0x71039c06c0
7101a813c0  b 0x7101a81334
7101a813c4  adrp x0,0x710593b000
7101a813c8  add x0,x0,#0xa48
7101a813cc  bl 0x71039c06b0
7101a813d0  cbz w0,0x7101a81378
7101a813d4  adrp x8,0x710593b000
7101a813d8  adrp x0,0x710593b000
7101a813dc  add x0,x0,#0xa48
7101a813e0  str xzr,[x8, #0xa50]
7101a813e4  bl 0x71039c06c0
7101a813e8  b 0x7101a81378
