// addr:      7101c1b840
// offset:    0x1c1b840
// name:      FUN_7101c1b840
// mangled:   
// size:      1860

7101c1b840  sub sp,sp,#0xd0
7101c1b844  str x25,[sp, #0x80]
7101c1b848  stp x24,x23,[sp, #0x90]
7101c1b84c  stp x22,x21,[sp, #0xa0]
7101c1b850  stp x20,x19,[sp, #0xb0]
7101c1b854  stp x29,x30,[sp, #0xc0]
7101c1b858  add x29,sp,#0xc0
7101c1b85c  ldr w8,[x0, #0x154]
7101c1b860  mov x19,x0
7101c1b864  cbz w8,0x7101c1b8a8
7101c1b868  ldr w1,[x19, #0x208]
7101c1b86c  ldr x0,[x19, #0x198]
7101c1b870  bl 0x71037814c0
7101c1b874  tbz w0,#0x0,0x7101c1bf5c
7101c1b878  ldr x8,[x19, #0x170]
7101c1b87c  ldr x8,[x8]
7101c1b880  ldr x1,[x19, #0x1b0]
7101c1b884  add x0,sp,#0x18
7101c1b888  mov w2,wzr
7101c1b88c  add x21,x8,#0x8
7101c1b890  bl 0x7103771d60
7101c1b894  ldr x20,[sp, #0x20]
7101c1b898  ldr x8,[x20]
7101c1b89c  cbz x8,0x7101c1ba9c
7101c1b8a0  ldr x1,[x8, #0x88]
7101c1b8a4  b 0x7101c1baa4
7101c1b8a8  stp xzr,xzr,[sp, #0x68]
7101c1b8ac  mov w22,#0x9dc5
7101c1b8b0  movk w22,#0x811c, LSL #16
7101c1b8b4  str xzr,[sp, #0x60]
7101c1b8b8  ldrb w8,[x19, #0x20d]
7101c1b8bc  cbz w8,0x7101c1b934
7101c1b8c0  mov x9,#0x656d
7101c1b8c4  movk x9,#0x5f6c, LSL #16
7101c1b8c8  mov x10,#0x735f
7101c1b8cc  movk x10,#0x6c65, LSL #16
7101c1b8d0  mov x8,#0x1600000000
7101c1b8d4  strb wzr,[sp, #0x36]
7101c1b8d8  movk x9,#0x7572, LSL #32
7101c1b8dc  movk x9,#0x656c, LSL #48
7101c1b8e0  movk x10,#0x6365, LSL #32
7101c1b8e4  movk x10,#0x5f74, LSL #48
7101c1b8e8  stp x8,x9,[sp, #0x18]
7101c1b8ec  str x10,[sp, #0x28]
7101c1b8f0  mov w8,#0x7567
7101c1b8f4  mov w10,#0x6469
7101c1b8f8  movk w10,#0x3065, LSL #16
7101c1b8fc  strh w8,[sp, #0x30]
7101c1b900  mov w9,#0x6d
7101c1b904  mov w8,#0x9
7101c1b908  stur w10,[sp, #0x32]
7101c1b90c  mov w10,#0x89
7101c1b910  add x11,sp,#0x18
7101c1b914  mov w12,w22
7101c1b918  mul w12,w12,w10
7101c1b91c  and w9,w9,#0xff
7101c1b920  eor w12,w12,w9
7101c1b924  ldrb w9,[x11, x8, LSL ]
7101c1b928  add x8,x8,#0x1
7101c1b92c  cbnz w9,0x7101c1b918
7101c1b930  b 0x7101c1b9ac
7101c1b934  ldrb w8,[x19, #0x20c]
7101c1b938  cbz w8,0x7101c1b9bc
7101c1b93c  mov x9,#0x656d
7101c1b940  movk x9,#0x5f6c, LSL #16
7101c1b944  mov x10,#0x735f
7101c1b948  movk x10,#0x6c65, LSL #16
7101c1b94c  mov x8,#0x1600000000
7101c1b950  strb wzr,[sp, #0x36]
7101c1b954  movk x9,#0x7572, LSL #32
7101c1b958  movk x9,#0x656c, LSL #48
7101c1b95c  movk x10,#0x6365, LSL #32
7101c1b960  movk x10,#0x5f74, LSL #48
7101c1b964  stp x8,x9,[sp, #0x18]
7101c1b968  str x10,[sp, #0x28]
7101c1b96c  mov w8,#0x7567
7101c1b970  mov w10,#0x6469
7101c1b974  movk w10,#0x3165, LSL #16
7101c1b978  strh w8,[sp, #0x30]
7101c1b97c  mov w9,#0x6d
7101c1b980  mov w8,#0x9
7101c1b984  stur w10,[sp, #0x32]
7101c1b988  mov w10,#0x89
7101c1b98c  add x11,sp,#0x18
7101c1b990  mov w12,w22
7101c1b994  mul w12,w12,w10
7101c1b998  and w9,w9,#0xff
7101c1b99c  eor w12,w12,w9
7101c1b9a0  ldrb w9,[x11, x8, LSL ]
7101c1b9a4  add x8,x8,#0x1
7101c1b9a8  cbnz w9,0x7101c1b994
7101c1b9ac  add x0,sp,#0x60
7101c1b9b0  add x1,sp,#0x18
7101c1b9b4  str w12,[sp, #0x18]
7101c1b9b8  bl 0x71019c1c50
7101c1b9bc  mov x9,#0x656d
7101c1b9c0  movk x9,#0x5f6c, LSL #16
7101c1b9c4  mov x10,#0x735f
7101c1b9c8  movk x10,#0x6c65, LSL #16
7101c1b9cc  mov x8,#0x1600000000
7101c1b9d0  strb wzr,[sp, #0x36]
7101c1b9d4  movk x9,#0x7572, LSL #32
7101c1b9d8  movk x9,#0x656c, LSL #48
7101c1b9dc  movk x10,#0x6365, LSL #32
7101c1b9e0  movk x10,#0x5f74, LSL #48
7101c1b9e4  stp x8,x9,[sp, #0x18]
7101c1b9e8  str x10,[sp, #0x28]
7101c1b9ec  mov w8,#0x7567
7101c1b9f0  mov w10,#0x6469
7101c1b9f4  movk w10,#0x3265, LSL #16
7101c1b9f8  strh w8,[sp, #0x30]
7101c1b9fc  mov w9,#0x6d
7101c1ba00  mov w8,#0x9
7101c1ba04  stur w10,[sp, #0x32]
7101c1ba08  mov w23,#0x89
7101c1ba0c  add x10,sp,#0x18
7101c1ba10  mov w11,w22
7101c1ba14  mul w11,w11,w23
7101c1ba18  and w9,w9,#0xff
7101c1ba1c  eor w11,w11,w9
7101c1ba20  ldrb w9,[x10, x8, LSL ]
7101c1ba24  add x8,x8,#0x1
7101c1ba28  cbnz w9,0x7101c1ba14
7101c1ba2c  ldp x8,x9,[sp, #0x68]
7101c1ba30  cmp x8,x9
7101c1ba34  str w11,[sp, #0x18]
7101c1ba38  b.cs 0x7101c1ba88
7101c1ba3c  add x10,sp,#0x18
7101c1ba40  mov x9,xzr
7101c1ba44  str wzr,[x8]
7101c1ba48  add x10,x10,#0x8
7101c1ba4c  b 0x7101c1ba58
7101c1ba50  add x9,x9,#0x2
7101c1ba54  strb w11,[x12, #0x9]
7101c1ba58  add x11,x10,x9
7101c1ba5c  ldrb w13,[x11]
7101c1ba60  cbz w13,0x7101c1bbbc
7101c1ba64  add w14,w9,#0x1
7101c1ba68  add x12,x8,x9
7101c1ba6c  cmp w14,#0x3f
7101c1ba70  strb w13,[x12, #0x8]
7101c1ba74  b.cs 0x7101c1bbb8
7101c1ba78  ldrb w11,[x11, #0x1]
7101c1ba7c  cbnz w11,0x7101c1ba50
7101c1ba80  add x9,x9,#0x1
7101c1ba84  b 0x7101c1bbbc
7101c1ba88  add x0,sp,#0x60
7101c1ba8c  add x1,sp,#0x18
7101c1ba90  bl 0x71019c1c50
7101c1ba94  ldr x20,[sp, #0x68]
7101c1ba98  b 0x7101c1bc00
7101c1ba9c  adrp x1,0x7104867000
7101c1baa0  add x1,x1,#0xc2e
7101c1baa4  add x8,sp,#0x60
7101c1baa8  mov x0,x21
7101c1baac  bl 0x7103776640
7101c1bab0  ldr x21,[sp, #0x68]
7101c1bab4  fmov s0,0x3f800000
7101c1bab8  adrp x1,0x710425f000
7101c1babc  add x1,x1,#0x331
7101c1bac0  mov x0,x21
7101c1bac4  bl 0x7103778300
7101c1bac8  ldr x23,[x19, #0x200]
7101c1bacc  orr w8,wzr,#0xfffffffe
7101c1bad0  str w8,[x23, #0xf0]
7101c1bad4  ldr x8,[x23, #0xe8]
7101c1bad8  cbz x8,0x7101c1bae4
7101c1badc  ldr x8,[x8, #0x8]
7101c1bae0  strb wzr,[x8, #0x4aa]
7101c1bae4  mov x22,x23
7101c1bae8  ldr x8,[x22, #0xe0]!
7101c1baec  cbz x8,0x7101c1bb54
7101c1baf0  ldr w9,[x23, #0xb8]
7101c1baf4  sub w9,w9,#0x1
7101c1baf8  cmp w9,#0x2
7101c1bafc  b.cc 0x7101c1bb54
7101c1bb00  ldp x24,x25,[x8, #0x180]
7101c1bb04  cmp x24,x25
7101c1bb08  b.eq 0x7101c1bb2c
7101c1bb0c  ldr x0,[x24]
7101c1bb10  cbz x0,0x7101c1bb20
7101c1bb14  ldr x8,[x0]
7101c1bb18  ldr x8,[x8, #0x180]
7101c1bb1c  blr x8
7101c1bb20  add x24,x24,#0x8
7101c1bb24  cmp x25,x24
7101c1bb28  b.ne 0x7101c1bb0c
7101c1bb2c  mov x0,x22
7101c1bb30  mov w1,wzr
7101c1bb34  mov w2,wzr
7101c1bb38  bl 0x7103771a80
7101c1bb3c  ldrsw x8,[x23, #0xb4]
7101c1bb40  cmp w8,#0x13
7101c1bb44  b.cs 0x7101c1bf78
7101c1bb48  add x8,x23,x8, LSL #0x2
7101c1bb4c  mov w9,#0x1
7101c1bb50  str w9,[x8, #0x68]
7101c1bb54  adrp x8,0x710523d000
7101c1bb58  add x8,x8,#0x988
7101c1bb5c  stp x8,xzr,[sp, #0x60]
7101c1bb60  cbz x21,0x7101c1bb84
7101c1bb64  ldr x0,[x21, #0x18]
7101c1bb68  adrp x8,0x710523d000
7101c1bb6c  add x8,x8,#0x9a8
7101c1bb70  stp x8,xzr,[x21, #0x10]
7101c1bb74  cbz x0,0x7101c1bb7c
7101c1bb78  bl 0x710392eb40
7101c1bb7c  mov x0,x21
7101c1bb80  bl 0x710392eb40
7101c1bb84  adrp x8,0x710523d000
7101c1bb88  add x8,x8,#0x9c8
7101c1bb8c  stp x8,xzr,[sp, #0x18]
7101c1bb90  cbz x20,0x7101c1bb9c
7101c1bb94  mov x0,x20
7101c1bb98  bl 0x710392eb40
7101c1bb9c  ldrsw x8,[x19, #0x14c]
7101c1bba0  cmp w8,#0x13
7101c1bba4  b.cs 0x7101c1bf78
7101c1bba8  add x8,x19,x8, LSL #0x2
7101c1bbac  mov w9,#0x4
7101c1bbb0  str w9,[x8, #0x100]
7101c1bbb4  b 0x7101c1bf5c
7101c1bbb8  add w9,w9,#0x1
7101c1bbbc  add x10,x8,#0x8
7101c1bbc0  strb wzr,[x10, w9, UXTW ]
7101c1bbc4  str w9,[x8, #0x4]
7101c1bbc8  ldrb w9,[x8, #0x8]
7101c1bbcc  mov w11,w22
7101c1bbd0  cbz w9,0x7101c1bbf0
7101c1bbd4  add x10,x8,#0x9
7101c1bbd8  mov w11,w22
7101c1bbdc  mul w11,w11,w23
7101c1bbe0  and w9,w9,#0xff
7101c1bbe4  eor w11,w11,w9
7101c1bbe8  ldrb w9,[x10], #0x1
7101c1bbec  cbnz w9,0x7101c1bbdc
7101c1bbf0  str w11,[x8]
7101c1bbf4  ldr x8,[sp, #0x68]
7101c1bbf8  add x20,x8,#0x48
7101c1bbfc  str x20,[sp, #0x68]
7101c1bc00  ldr x24,[sp, #0x60]
7101c1bc04  cmp x24,x20
7101c1bc08  b.eq 0x7101c1be04
7101c1bc0c  subs x21,x20,x24
7101c1bc10  strb wzr,[sp, #0x20]
7101c1bc14  stp xzr,xzr,[sp, #0x10]
7101c1bc18  stp xzr,xzr,[sp]
7101c1bc1c  b.eq 0x7101c1bd54
7101c1bc20  mov x9,#0x8e39
7101c1bc24  movk x9,#0x38e3, LSL #16
7101c1bc28  asr x8,x21,#0x3
7101c1bc2c  movk x9,#0xe38e, LSL #32
7101c1bc30  movk x9,#0x8e38, LSL #48
7101c1bc34  mul x25,x8,x9
7101c1bc38  mov x8,#0xe38f
7101c1bc3c  movk x8,#0x8e38, LSL #16
7101c1bc40  movk x8,#0x38e3, LSL #32
7101c1bc44  movk x8,#0x38e, LSL #48
7101c1bc48  cmp x25,x8
7101c1bc4c  b.cs 0x7101c1bf7c
7101c1bc50  mov w0,#0x10
7101c1bc54  mov x1,x21
7101c1bc58  bl 0x710392e290
7101c1bc5c  cbnz x0,0x7101c1bca0
7101c1bc60  adrp x8,0x7105332000
7101c1bc64  ldr x0,[x8, #0xf00]
7101c1bc68  cbz x0,0x7101c1bc9c
7101c1bc6c  stur wzr,[x29, #-0x44]
7101c1bc70  stur x21,[x29, #-0x38]
7101c1bc74  ldr x8,[x0]
7101c1bc78  ldr x8,[x8, #0x30]
7101c1bc7c  sub x1,x29,#0x44
7101c1bc80  sub x2,x29,#0x38
7101c1bc84  blr x8
7101c1bc88  tbz w0,#0x0,0x7101c1bc9c
7101c1bc8c  mov w0,#0x10
7101c1bc90  mov x1,x21
7101c1bc94  bl 0x710392e290
7101c1bc98  cbnz x0,0x7101c1bca0
7101c1bc9c  mov x0,xzr
7101c1bca0  mov w8,#0x48
7101c1bca4  madd x8,x25,x8,x0
7101c1bca8  str x8,[sp, #0x10]
7101c1bcac  stp x0,x0,[sp]
7101c1bcb0  mov x9,x0
7101c1bcb4  mov x8,xzr
7101c1bcb8  str wzr,[x9], #0x8
7101c1bcbc  add x10,x24,x8
7101c1bcc0  ldrb w11,[x10, #0x8]
7101c1bcc4  cbz w11,0x7101c1bd04
7101c1bcc8  strb w11,[x9, x8, LSL ]
7101c1bccc  ldrb w12,[x10, #0x9]
7101c1bcd0  cbz w12,0x7101c1bcf8
7101c1bcd4  add x11,x9,x8
7101c1bcd8  strb w12,[x11, #0x1]
7101c1bcdc  ldrb w10,[x10, #0xa]
7101c1bce0  cbz w10,0x7101c1bd00
7101c1bce4  add x8,x8,#0x3
7101c1bce8  cmp w8,#0x3f
7101c1bcec  strb w10,[x11, #0x2]
7101c1bcf0  b.cc 0x7101c1bcbc
7101c1bcf4  b 0x7101c1bd04
7101c1bcf8  add x8,x8,#0x1
7101c1bcfc  b 0x7101c1bd04
7101c1bd00  add x8,x8,#0x2
7101c1bd04  add x9,x0,#0x8
7101c1bd08  strb wzr,[x9, w8, UXTW ]
7101c1bd0c  str w8,[x0, #0x4]
7101c1bd10  ldrb w8,[x0, #0x8]
7101c1bd14  mov w10,w22
7101c1bd18  cbz w8,0x7101c1bd38
7101c1bd1c  add x9,x0,#0x9
7101c1bd20  mov w10,w22
7101c1bd24  mul w10,w10,w23
7101c1bd28  and w8,w8,#0xff
7101c1bd2c  eor w10,w10,w8
7101c1bd30  ldrb w8,[x9], #0x1
7101c1bd34  cbnz w8,0x7101c1bd24
7101c1bd38  str w10,[x0]
7101c1bd3c  ldr x8,[sp, #0x8]
7101c1bd40  add x24,x24,#0x48
7101c1bd44  cmp x24,x20
7101c1bd48  add x0,x8,#0x48
7101c1bd4c  str x0,[sp, #0x8]
7101c1bd50  b.ne 0x7101c1bcb0
7101c1bd54  ldr x0,[x19, #0x200]
7101c1bd58  add x1,x19,#0x170
7101c1bd5c  add x2,sp,#0x18
7101c1bd60  mov x3,sp
7101c1bd64  mov w4,#0x1
7101c1bd68  mov w5,wzr
7101c1bd6c  mov w6,wzr
7101c1bd70  bl 0x71032d6470
7101c1bd74  ldr x0,[sp]
7101c1bd78  cbz x0,0x7101c1bd84
7101c1bd7c  str x0,[sp, #0x8]
7101c1bd80  bl 0x710392eb40
7101c1bd84  ldp x21,x22,[sp, #0x60]
7101c1bd88  cmp x21,x22
7101c1bd8c  b.eq 0x7101c1bf0c
7101c1bd90  ldr w8,[x21]
7101c1bd94  mov w23,#0x20b8
7101c1bd98  movk w23,#0xe9a8, LSL #16
7101c1bd9c  cmp w8,w23
7101c1bda0  b.ne 0x7101c1bdb8
7101c1bda4  add x0,x21,#0x8
7101c1bda8  adrp x1,0x710436c000
7101c1bdac  add x1,x1,#0x32c
7101c1bdb0  bl 0x71039c0060
7101c1bdb4  cbz w0,0x7101c1be1c
7101c1bdb8  add x24,x21,#0x48
7101c1bdbc  mov w25,#0xffffffff
7101c1bdc0  adrp x20,0x710436c000
7101c1bdc4  add x20,x20,#0x32c
7101c1bdc8  cmp x22,x24
7101c1bdcc  b.eq 0x7101c1bf0c
7101c1bdd0  ldr w8,[x24]
7101c1bdd4  cmp w8,w23
7101c1bdd8  mov w0,w25
7101c1bddc  b.ne 0x7101c1bdec
7101c1bde0  add x0,x24,#0x8
7101c1bde4  mov x1,x20
7101c1bde8  bl 0x71039c0060
7101c1bdec  add x24,x24,#0x48
7101c1bdf0  cbnz w0,0x7101c1bdc8
7101c1bdf4  sub x8,x24,#0x48
7101c1bdf8  cmp x8,x22
7101c1bdfc  b.ne 0x7101c1be28
7101c1be00  b 0x7101c1bf0c
7101c1be04  ldr w8,[x19, #0x14c]
7101c1be08  subs w8,w8,#0x1
7101c1be0c  b.lt 0x7101c1bf4c
7101c1be10  str w8,[x19, #0x14c]
7101c1be14  cbnz x20,0x7101c1bf50
7101c1be18  b 0x7101c1bf5c
7101c1be1c  mov x8,x21
7101c1be20  cmp x8,x22
7101c1be24  b.eq 0x7101c1bf0c
7101c1be28  sub x8,x8,x21
7101c1be2c  lsr x8,x8,#0x3
7101c1be30  mov w10,#0x8e39
7101c1be34  movk w10,#0x38e3, LSL #16
7101c1be38  ldrb w9,[x19, #0x20e]
7101c1be3c  mul w2,w8,w10
7101c1be40  ldr x8,[x19, #0x200]
7101c1be44  cbz w9,0x7101c1be88
7101c1be48  tbnz w2,#0x1f,0x7101c1bf0c
7101c1be4c  ldr w9,[x8, #0xc8]
7101c1be50  cmp w9,w2
7101c1be54  b.le 0x7101c1bf0c
7101c1be58  ldr x1,[x8, #0xe0]
7101c1be5c  cbz x1,0x7101c1bf0c
7101c1be60  add x0,sp,#0x18
7101c1be64  bl 0x7103771d60
7101c1be68  adrp x8,0x710532f000
7101c1be6c  ldr x8,[x8, #0x8d0]
7101c1be70  ldr x9,[x8, #0x8]
7101c1be74  ldp x8,x9,[x9, #0x40]
7101c1be78  cmp x9,x8
7101c1be7c  b.eq 0x7101c1bed0
7101c1be80  ldr x8,[x8]
7101c1be84  b 0x7101c1bed4
7101c1be88  tbnz w2,#0x1f,0x7101c1bf0c
7101c1be8c  ldr w9,[x8, #0xc8]
7101c1be90  cmp w9,w2
7101c1be94  b.le 0x7101c1bf0c
7101c1be98  ldr x1,[x8, #0xe0]
7101c1be9c  cbz x1,0x7101c1bf0c
7101c1bea0  add x0,sp,#0x18
7101c1bea4  bl 0x7103771d60
7101c1bea8  adrp x8,0x710532f000
7101c1beac  ldr x8,[x8, #0x8d0]
7101c1beb0  ldr x9,[x8, #0x8]
7101c1beb4  ldp x8,x9,[x9, #0x40]
7101c1beb8  sub x9,x9,x8
7101c1bebc  asr x9,x9,#0x3
7101c1bec0  cmp x9,#0x5
7101c1bec4  b.cc 0x7101c1bed0
7101c1bec8  ldr x8,[x8, #0x20]
7101c1becc  b 0x7101c1bed4
7101c1bed0  mov x8,xzr
7101c1bed4  ldr x20,[sp, #0x20]
7101c1bed8  stur x8,[x29, #-0x38]
7101c1bedc  ldr x0,[x20]
7101c1bee0  cbz x0,0x7101c1bef4
7101c1bee4  ldr x8,[x0]
7101c1bee8  ldr x8,[x8, #0x2b0]
7101c1beec  sub x1,x29,#0x38
7101c1bef0  blr x8
7101c1bef4  adrp x8,0x710523d000
7101c1bef8  add x8,x8,#0x9c8
7101c1befc  stp x8,xzr,[sp, #0x18]
7101c1bf00  cbz x20,0x7101c1bf0c
7101c1bf04  mov x0,x20
7101c1bf08  bl 0x710392eb40
7101c1bf0c  ldr w1,[x19, #0x208]
7101c1bf10  add x0,x19,#0x198
7101c1bf14  mov w3,#0x1
7101c1bf18  mov w2,wzr
7101c1bf1c  bl 0x7103783c10
7101c1bf20  ldr x0,[x19, #0x198]
7101c1bf24  ldr x8,[x0]
7101c1bf28  ldr x8,[x8, #0x70]
7101c1bf2c  mov w1,wzr
7101c1bf30  blr x8
7101c1bf34  ldr x0,[x19, #0x1a8]
7101c1bf38  ldr x8,[x0]
7101c1bf3c  ldr x8,[x8, #0x70]
7101c1bf40  mov w1,wzr
7101c1bf44  blr x8
7101c1bf48  ldr x20,[sp, #0x60]
7101c1bf4c  cbz x20,0x7101c1bf5c
7101c1bf50  mov x0,x20
7101c1bf54  str x20,[sp, #0x68]
7101c1bf58  bl 0x710392eb40
7101c1bf5c  ldp x29,x30,[sp, #0xc0]
7101c1bf60  ldr x25,[sp, #0x80]
7101c1bf64  ldp x20,x19,[sp, #0xb0]
7101c1bf68  ldp x22,x21,[sp, #0xa0]
7101c1bf6c  ldp x24,x23,[sp, #0x90]
7101c1bf70  add sp,sp,#0xd0
7101c1bf74  ret
7101c1bf78  bl 0x71039c2650
7101c1bf7c  mov x0,sp
7101c1bf80  bl 0x71039c0c00
