// addr:      710193fb60
// offset:    0x193fb60
// name:      FUN_710193fb60
// mangled:   
// size:      896

710193fb60  sub sp,sp,#0xd0
710193fb64  stp x22,x21,[sp, #0xa0]
710193fb68  stp x20,x19,[sp, #0xb0]
710193fb6c  stp x29,x30,[sp, #0xc0]
710193fb70  add x29,sp,#0xc0
710193fb74  ldr x8,[x0, #0x1c0]
710193fb78  ldr x21,[x8, #0x80]
710193fb7c  mov x19,x0
710193fb80  ldr x0,[x21, #0x208]
710193fb84  mov x20,x1
710193fb88  bl 0x7101e9c1f0
710193fb8c  add x0,x21,#0x350
710193fb90  bl 0x7101e956e0
710193fb94  ldr x8,[x21, #0x308]
710193fb98  ldr x21,[x8, #0x10]
710193fb9c  ldr x0,[x21, #0x88]
710193fba0  cbz x0,0x710193fc10
710193fba4  mov w1,wzr
710193fba8  bl 0x710373b540
710193fbac  ldr x0,[x21, #0x88]
710193fbb0  str xzr,[x21, #0x88]
710193fbb4  cbz x0,0x710193fc10
710193fbb8  adrp x8,0x7104f73000
710193fbbc  add x8,x8,#0xd50
710193fbc0  str x8,[x0, #0x8]
710193fbc4  ldr x8,[x0, #0x10]
710193fbc8  cbz x8,0x710193fc04
710193fbcc  adrp x9,0x7106dd5000
710193fbd0  ldrb w9,[x9, #0x3a8]
710193fbd4  cmp w9,#0x1
710193fbd8  b.ne 0x710193fc04
710193fbdc  adrp x10,0x7106dd5000
710193fbe0  ldr w9,[x0, #0x18]
710193fbe4  ldr w10,[x10, #0x3ac]
710193fbe8  cmp w9,w10
710193fbec  b.ne 0x710193fc04
710193fbf0  ldr wzr,[x8, #0x38]!
710193fbf4  ldaxr w9,[x8]
710193fbf8  sub w9,w9,#0x1
710193fbfc  stlxr w10,w9,[x8]
710193fc00  cbnz w10,0x710193fbf4
710193fc04  str xzr,[x0, #0x10]
710193fc08  strb wzr,[x0, #0x20]
710193fc0c  bl 0x710392eb40
710193fc10  ldr x8,[x19, #0x1c8]
710193fc14  ldr x8,[x8, #0x80]
710193fc18  ldr x0,[x8, #0x28]
710193fc1c  mov w1,#0x1
710193fc20  bl 0x71037790a0
710193fc24  ldr x8,[x19, #0x1d0]
710193fc28  ldr x22,[x8, #0x80]
710193fc2c  adrp x8,0x7105329000
710193fc30  ldr x8,[x8, #0xf98]
710193fc34  ldr x8,[x8]
710193fc38  ldr x0,[x8, #0x20]
710193fc3c  mov w1,#0x4
710193fc40  bl 0x710259c9b0
710193fc44  ldr w8,[x22, #0x2c4]
710193fc48  cmn w8,#0x1
710193fc4c  b.eq 0x710193fcf0
710193fc50  add x0,x22,#0x298
710193fc54  mov w1,wzr
710193fc58  bl 0x710373b540
710193fc5c  add x21,x22,#0x2a0
710193fc60  mov x0,x21
710193fc64  str wzr,[x22, #0x298]
710193fc68  bl 0x71039602c0
710193fc6c  adrp x8,0x7104f73000
710193fc70  add x8,x8,#0xd50
710193fc74  str x8,[x22, #0x2a0]
710193fc78  ldr x8,[x22, #0x2a8]
710193fc7c  cbz x8,0x710193fcb8
710193fc80  adrp x9,0x7106dd5000
710193fc84  ldrb w9,[x9, #0x3a8]
710193fc88  cmp w9,#0x1
710193fc8c  b.ne 0x710193fcb8
710193fc90  adrp x10,0x7106dd5000
710193fc94  ldr w9,[x22, #0x2b0]
710193fc98  ldr w10,[x10, #0x3ac]
710193fc9c  cmp w9,w10
710193fca0  b.ne 0x710193fcb8
710193fca4  ldr wzr,[x8, #0x38]!
710193fca8  ldaxr w9,[x8]
710193fcac  sub w9,w9,#0x1
710193fcb0  stlxr w10,w9,[x8]
710193fcb4  cbnz w10,0x710193fca8
710193fcb8  mov x8,#0x650000000000
710193fcbc  movk x8,#0x87, LSL #48
710193fcc0  stp xzr,xzr,[x21, #0x10]
710193fcc4  stp xzr,xzr,[x21]
710193fcc8  str x8,[x22, #0x2b0]
710193fccc  adrp x8,0x7104f73000
710193fcd0  add x8,x8,#0xd30
710193fcd4  str x8,[x22, #0x2a0]
710193fcd8  mov x8,#-0x1
710193fcdc  str xzr,[x22, #0x2a8]
710193fce0  strb wzr,[x22, #0x2b8]
710193fce4  str x8,[x22, #0x2c0]
710193fce8  str xzr,[x22, #0x2c8]
710193fcec  str wzr,[x22, #0x2d4]
710193fcf0  ldr x8,[x19, #0x1d8]
710193fcf4  ldr x0,[x8, #0x80]
710193fcf8  bl 0x7101df1550
710193fcfc  ldrb w8,[x19, #0x1f9]
710193fd00  cbz w8,0x710193fe5c
710193fd04  ldrb w8,[x19, #0x1f8]
710193fd08  cbnz w8,0x710193fe5c
710193fd0c  adrp x8,0x71050a6000
710193fd10  add x8,x8,#0x490
710193fd14  str x8,[sp]
710193fd18  mov w8,#0x1
710193fd1c  strb w8,[sp, #0x8]
710193fd20  ldr x8,[x20, #0x8]
710193fd24  mov x10,xzr
710193fd28  adrp x9,0x7104316000
710193fd2c  add x9,x9,#0xc62
710193fd30  add x11,sp,#0x10
710193fd34  str xzr,[sp, #0x10]
710193fd38  b 0x710193fd44
710193fd3c  add x10,x10,#0x2
710193fd40  strb w13,[x12, #0x9]
710193fd44  add x13,x9,x10
710193fd48  ldrb w14,[x13]
710193fd4c  cbz w14,0x710193fd64
710193fd50  ldrb w13,[x13, #0x1]
710193fd54  add x12,x11,x10
710193fd58  strb w14,[x12, #0x8]
710193fd5c  cbnz w13,0x710193fd3c
710193fd60  add x10,x10,#0x1
710193fd64  add x11,sp,#0x10
710193fd68  add x12,x11,#0x8
710193fd6c  mov w9,#0x9dc5
710193fd70  movk w9,#0x811c, LSL #16
710193fd74  strb wzr,[x12, w10, UXTW ]
710193fd78  str w10,[sp, #0x14]
710193fd7c  ldrb w10,[sp, #0x18]
710193fd80  mov w12,w9
710193fd84  cbz w10,0x710193fda8
710193fd88  add x11,x11,#0x9
710193fd8c  mov w13,#0x89
710193fd90  mov w12,w9
710193fd94  mul w12,w12,w13
710193fd98  and w10,w10,#0xff
710193fd9c  eor w12,w12,w10
710193fda0  ldrb w10,[x11], #0x1
710193fda4  cbnz w10,0x710193fd94
710193fda8  str w12,[sp, #0x10]
710193fdac  ldr x11,[x8, #0x38]
710193fdb0  cbz x11,0x710193fe00
710193fdb4  mov x10,xzr
710193fdb8  add x11,x11,#0x10
710193fdbc  add x12,sp,#0x58
710193fdc0  str wzr,[sp, #0x58]
710193fdc4  b 0x710193fdd0
710193fdc8  add x10,x10,#0x2
710193fdcc  strb w13,[x14, #0x9]
710193fdd0  add x13,x11,x10
710193fdd4  ldrb w15,[x13]
710193fdd8  cbz w15,0x710193fe10
710193fddc  add w16,w10,#0x1
710193fde0  add x14,x12,x10
710193fde4  cmp w16,#0x3f
710193fde8  strb w15,[x14, #0x8]
710193fdec  b.cs 0x710193fe0c
710193fdf0  ldrb w13,[x13, #0x1]
710193fdf4  cbnz w13,0x710193fdc8
710193fdf8  add x10,x10,#0x1
710193fdfc  b 0x710193fe10
710193fe00  strb wzr,[sp, #0x60]
710193fe04  str xzr,[sp, #0x58]
710193fe08  b 0x710193fe48
710193fe0c  add w10,w10,#0x1
710193fe10  add x12,sp,#0x58
710193fe14  add x11,x12,#0x8
710193fe18  strb wzr,[x11, w10, UXTW ]
710193fe1c  ldrb w11,[sp, #0x60]
710193fe20  str w10,[sp, #0x5c]
710193fe24  cbz w11,0x710193fe44
710193fe28  add x10,x12,#0x9
710193fe2c  mov w12,#0x89
710193fe30  mul w9,w9,w12
710193fe34  and w11,w11,#0xff
710193fe38  eor w9,w9,w11
710193fe3c  ldrb w11,[x10], #0x1
710193fe40  cbnz w11,0x710193fe30
710193fe44  str w9,[sp, #0x58]
710193fe48  ldr x0,[x8, #0x20]
710193fe4c  add x1,sp,#0x10
710193fe50  add x2,sp,#0x58
710193fe54  mov x3,sp
710193fe58  bl 0x7103726240
710193fe5c  ldr x0,[x20, #0x8]
710193fe60  mov w1,wzr
710193fe64  bl 0x7103726af0
710193fe68  add x9,x19,#0x19c
710193fe6c  stp xzr,xzr,[x19, #0x8]
710193fe70  str xzr,[x9]
710193fe74  add x9,x19,#0x194
710193fe78  add x8,x19,#0x15c
710193fe7c  str xzr,[x9]
710193fe80  add x9,x19,#0x18c
710193fe84  str xzr,[x9]
710193fe88  add x9,x19,#0x184
710193fe8c  str xzr,[x9]
710193fe90  add x9,x19,#0x17c
710193fe94  str xzr,[x9]
710193fe98  add x9,x19,#0x174
710193fe9c  str xzr,[x9]
710193fea0  add x9,x19,#0x16c
710193fea4  str xzr,[x9]
710193fea8  add x9,x19,#0x164
710193feac  str xzr,[x8]
710193feb0  mov w8,#0xffffffff
710193feb4  str wzr,[x19, #0x1a4]
710193feb8  str xzr,[x9]
710193febc  str x8,[x19, #0x1a8]
710193fec0  str w8,[x19, #0x1b0]
710193fec4  strb wzr,[x19, #0x1b4]
710193fec8  str wzr,[x19, #0x158]
710193fecc  ldp x29,x30,[sp, #0xc0]
710193fed0  ldp x20,x19,[sp, #0xb0]
710193fed4  ldp x22,x21,[sp, #0xa0]
710193fed8  add sp,sp,#0xd0
710193fedc  ret
