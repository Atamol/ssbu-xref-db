// addr:      710359f860
// offset:    0x359f860
// name:      FUN_710359f860
// mangled:   
// size:      1612

710359f860  stp x28,x27,[sp, #-0x60]!
710359f864  stp x26,x25,[sp, #0x10]
710359f868  stp x24,x23,[sp, #0x20]
710359f86c  stp x22,x21,[sp, #0x30]
710359f870  stp x20,x19,[sp, #0x40]
710359f874  stp x29,x30,[sp, #0x50]
710359f878  add x29,sp,#0x50
710359f87c  sub sp,sp,#0x330
710359f880  adrp x8,0x7105242000
710359f884  add x8,x8,#0x128
710359f888  str x8,[sp, #0xc8]
710359f88c  add x8,sp,#0xc0
710359f890  mov w10,#0x1
710359f894  mov w11,#0x100
710359f898  stur xzr,[x8, #0x64]
710359f89c  stur xzr,[x8, #0x5c]
710359f8a0  stur xzr,[x8, #0x54]
710359f8a4  stur xzr,[x8, #0x4c]
710359f8a8  mov x19,x5
710359f8ac  mov w21,w0
710359f8b0  stur xzr,[x8, #0x44]
710359f8b4  mov w9,wzr
710359f8b8  stur xzr,[x8, #0x3c]
710359f8bc  stur xzr,[x8, #0x34]
710359f8c0  stur xzr,[x8, #0x2c]
710359f8c4  stur x10,[x8, #0x6c]
710359f8c8  strh w11,[sp, #0x134]
710359f8cc  add x11,x8,#0x98
710359f8d0  strb w10,[sp, #0x136]
710359f8d4  str w10,[sp, #0xe8]
710359f8d8  adrp x10,0x71043ef000
710359f8dc  add x10,x10,#0x23c
710359f8e0  str w3,[sp, #0xc]
710359f8e4  str wzr,[sp, #0x138]
710359f8e8  strb wzr,[sp, #0x2d8]
710359f8ec  stp w1,w2,[sp, #0xd8]
710359f8f0  strb wzr,[sp, #0x319]
710359f8f4  stp x11,xzr,[sp, #0x140]
710359f8f8  mov w11,#0x10
710359f8fc  str x11,[sp, #0x150]
710359f900  mov w11,#0x2
710359f904  str w11,[sp, #0xc0]
710359f908  mov w11,#0x400
710359f90c  str w11,[sp, #0xd0]
710359f910  mov x11,#0x100000001
710359f914  str x11,[sp, #0xe0]
710359f918  adrp x11,0x71043ef000
710359f91c  add x11,x11,#0x26a
710359f920  ldrb w12,[x10]
710359f924  add w13,w9,#0x1
710359f928  and x9,x9,#0xff
710359f92c  strb w13,[sp, #0x319]
710359f930  add x13,x8,#0x218
710359f934  strb w12,[x13, x9, LSL ]
710359f938  ldrb w9,[sp, #0x319]
710359f93c  ldrb w12,[x10, #0x1]
710359f940  add x10,x10,#0x2
710359f944  cmp x10,x11
710359f948  add w14,w9,#0x1
710359f94c  strb w14,[sp, #0x319]
710359f950  strb w12,[x13, x9, LSL ]
710359f954  ldrb w9,[sp, #0x319]
710359f958  b.ne 0x710359f920
710359f95c  add x8,sp,#0xc0
710359f960  add x8,x8,x9
710359f964  mov w2,#0xf20
710359f968  sub x0,x29,#0x60
710359f96c  mov w1,#0x10
710359f970  strb wzr,[x8, #0x218]
710359f974  bl 0x710392e1f0
710359f978  cmp w0,#0xc
710359f97c  b.ne 0x710359f9b8
710359f980  adrp x8,0x710593d000
710359f984  ldr x0,[x8, #0x2b0]
710359f988  cbz x0,0x710359f9b8
710359f98c  mov w8,#0xf20
710359f990  str x8,[sp, #0x68]
710359f994  ldr x8,[x0]
710359f998  ldr x8,[x8, #0x30]
710359f99c  add x1,sp,#0x68
710359f9a0  blr x8
710359f9a4  tbz w0,#0x0,0x710359f9b8
710359f9a8  mov w2,#0xf20
710359f9ac  sub x0,x29,#0x60
710359f9b0  mov w1,#0x10
710359f9b4  bl 0x710392e1f0
710359f9b8  adrp x24,0x71052a8000
710359f9bc  ldr x24,[x24, #0xa78]
710359f9c0  cbz x24,0x710359f9d4
710359f9c4  ldur x2,[x29, #-0x60]
710359f9c8  mov w0,#0xf20
710359f9cc  mov w1,#0x10
710359f9d0  bl 0x71039c19e0
710359f9d4  ldur x22,[x29, #-0x60]
710359f9d8  mov x0,x22
710359f9dc  bl 0x71037c3a70
710359f9e0  adrp x25,0x7105243000
710359f9e4  add x25,x25,#0x1f8
710359f9e8  str wzr,[x22, #0x10]
710359f9ec  strb wzr,[x22, #0x14]
710359f9f0  str xzr,[x22, #0xf18]
710359f9f4  str x25,[x22]
710359f9f8  cbz x22,0x710359fa08
710359f9fc  ldr x28,[x22, #0x8]
710359fa00  ldr x20,[x28]
710359fa04  b 0x710359fa10
710359fa08  mov x28,xzr
710359fa0c  mov x20,xzr
710359fa10  add x8,sp,#0xb8
710359fa14  add x1,sp,#0xc0
710359fa18  mov x0,x22
710359fa1c  add x26,sp,#0xc0
710359fa20  bl 0x71037dbe00
710359fa24  orr w8,wzr,#0xffff
710359fa28  str w8,[sp, #0x68]
710359fa2c  str xzr,[sp, #0x70]
710359fa30  stp xzr,xzr,[sp, #0xa8]
710359fa34  add x1,sp,#0x68
710359fa38  mov x0,x22
710359fa3c  stp xzr,xzr,[sp, #0x98]
710359fa40  stp xzr,xzr,[sp, #0x88]
710359fa44  stp xzr,xzr,[sp, #0x78]
710359fa48  ldr x8,[x22]
710359fa4c  ldr x8,[x8, #0x98]
710359fa50  blr x8
710359fa54  ldrb w8,[sp, #0xa0]
710359fa58  tbz w8,#0x0,0x710359fa7c
710359fa5c  adrp x8,0x71052a8000
710359fa60  ldr x23,[sp, #0xb0]
710359fa64  ldr x8,[x8, #0xa70]
710359fa68  cbz x8,0x710359fa74
710359fa6c  mov x0,x23
710359fa70  bl 0x71039c19b0
710359fa74  mov x0,x23
710359fa78  bl 0x710392eb40
710359fa7c  mov w10,wzr
710359fa80  adrp x8,0x710437a000
710359fa84  add x8,x8,#0xf77
710359fa88  adrp x9,0x710437a000
710359fa8c  add x9,x9,#0xfa4
710359fa90  strb wzr,[sp, #0x319]
710359fa94  b 0x710359fab0
710359fa98  ldrb w11,[x8], #0x1
710359fa9c  add w12,w10,#0x1
710359faa0  add x10,x26,x10
710359faa4  strb w12,[sp, #0x319]
710359faa8  strb w11,[x10, #0x218]
710359faac  ldrb w10,[sp, #0x319]
710359fab0  add w12,w10,#0x1
710359fab4  add x10,x26,w10, UXTB 
710359fab8  ldrb w11,[x8], #0x1
710359fabc  strb w12,[sp, #0x319]
710359fac0  strb w11,[x10, #0x218]
710359fac4  ldrb w10,[sp, #0x319]
710359fac8  cmp x8,x9
710359facc  b.ne 0x710359fa98
710359fad0  add x8,sp,#0xc0
710359fad4  add x8,x8,x10
710359fad8  mov w2,#0xf20
710359fadc  sub x0,x29,#0x60
710359fae0  mov w1,#0x10
710359fae4  strb wzr,[x8, #0x218]
710359fae8  bl 0x710392e1f0
710359faec  cmp w0,#0xc
710359faf0  b.ne 0x710359fb2c
710359faf4  adrp x8,0x710593d000
710359faf8  ldr x0,[x8, #0x2b0]
710359fafc  cbz x0,0x710359fb2c
710359fb00  mov w8,#0xf20
710359fb04  str x8,[sp, #0x68]
710359fb08  ldr x8,[x0]
710359fb0c  ldr x8,[x8, #0x30]
710359fb10  add x1,sp,#0x68
710359fb14  blr x8
710359fb18  tbz w0,#0x0,0x710359fb2c
710359fb1c  mov w2,#0xf20
710359fb20  sub x0,x29,#0x60
710359fb24  mov w1,#0x10
710359fb28  bl 0x710392e1f0
710359fb2c  cbz x24,0x710359fb40
710359fb30  ldur x2,[x29, #-0x60]
710359fb34  mov w0,#0xf20
710359fb38  mov w1,#0x10
710359fb3c  bl 0x71039c19e0
710359fb40  ldur x23,[x29, #-0x60]
710359fb44  mov x0,x23
710359fb48  bl 0x71037c3a70
710359fb4c  str wzr,[x23, #0x10]
710359fb50  strb wzr,[x23, #0x14]
710359fb54  str xzr,[x23, #0xf18]
710359fb58  str x25,[x23]
710359fb5c  cbz x23,0x710359fb70
710359fb60  ldr x27,[x23, #0x8]
710359fb64  ldr x8,[x27]
710359fb68  str x8,[sp, #0x10]
710359fb6c  b 0x710359fb78
710359fb70  mov x27,xzr
710359fb74  str xzr,[sp, #0x10]
710359fb78  add x8,sp,#0x60
710359fb7c  add x1,sp,#0xc0
710359fb80  mov x0,x23
710359fb84  bl 0x71037dbe00
710359fb88  orr w8,wzr,#0xffff
710359fb8c  str w8,[sp, #0x68]
710359fb90  str xzr,[sp, #0x70]
710359fb94  stp xzr,xzr,[sp, #0xa8]
710359fb98  add x1,sp,#0x68
710359fb9c  mov x0,x23
710359fba0  stp xzr,xzr,[sp, #0x98]
710359fba4  stp xzr,xzr,[sp, #0x88]
710359fba8  stp xzr,xzr,[sp, #0x78]
710359fbac  ldr x8,[x23]
710359fbb0  ldr x8,[x8, #0x98]
710359fbb4  blr x8
710359fbb8  ldrb w8,[sp, #0xa0]
710359fbbc  tbz w8,#0x0,0x710359fbe0
710359fbc0  adrp x8,0x71052a8000
710359fbc4  ldr x24,[sp, #0xb0]
710359fbc8  ldr x8,[x8, #0xa70]
710359fbcc  cbz x8,0x710359fbd8
710359fbd0  mov x0,x24
710359fbd4  bl 0x71039c19b0
710359fbd8  mov x0,x24
710359fbdc  bl 0x710392eb40
710359fbe0  adrp x25,0x7105338000
710359fbe4  ldr x0,[x25, #0xf68]
710359fbe8  adrp x26,0x7105231000
710359fbec  add x26,x26,#0x8d0
710359fbf0  stp xzr,xzr,[sp, #0x50]
710359fbf4  stp x26,xzr,[sp, #0x40]
710359fbf8  cbz x28,0x710359fc34
710359fbfc  ldr x8,[x28]
710359fc00  cmp x8,x20
710359fc04  b.ne 0x710359fc34
710359fc08  str x22,[sp, #0x48]
710359fc0c  cbz x22,0x710359fc1c
710359fc10  ldr x8,[x22, #0x8]
710359fc14  ldr x9,[x8]
710359fc18  b 0x710359fc24
710359fc1c  mov x8,xzr
710359fc20  mov x9,xzr
710359fc24  mov x22,xzr
710359fc28  mov x28,xzr
710359fc2c  mov x20,xzr
710359fc30  stp x8,x9,[sp, #0x50]
710359fc34  adrp x2,0x71043ef000
710359fc38  add x2,x2,#0x23c
710359fc3c  add x1,sp,#0x40
710359fc40  bl 0x710363dde0
710359fc44  ldr x8,[sp, #0x50]
710359fc48  mov w24,w0
710359fc4c  str x26,[sp, #0x40]
710359fc50  cbz x8,0x710359fc78
710359fc54  ldr x8,[x8]
710359fc58  ldr x9,[sp, #0x58]
710359fc5c  cmp x8,x9
710359fc60  b.ne 0x710359fc78
710359fc64  ldr x0,[sp, #0x48]
710359fc68  cbz x0,0x710359fc78
710359fc6c  ldr x8,[x0]
710359fc70  ldr x8,[x8, #0x8]
710359fc74  blr x8
710359fc78  ldr x0,[x25, #0xf68]
710359fc7c  stp xzr,xzr,[sp, #0x30]
710359fc80  stp x26,xzr,[sp, #0x20]
710359fc84  cbz x27,0x710359fcb4
710359fc88  ldr x8,[x27]
710359fc8c  ldr x9,[sp, #0x10]
710359fc90  cmp x8,x9
710359fc94  b.ne 0x710359fcb4
710359fc98  ldr x8,[x23, #0x8]
710359fc9c  stp x23,x8,[sp, #0x28]
710359fca0  ldr x8,[x8]
710359fca4  mov x27,xzr
710359fca8  mov x23,xzr
710359fcac  str xzr,[sp, #0x10]
710359fcb0  str x8,[sp, #0x38]
710359fcb4  adrp x2,0x710437a000
710359fcb8  add x2,x2,#0xf77
710359fcbc  add x1,sp,#0x20
710359fcc0  str x28,[sp, #0x18]
710359fcc4  bl 0x710363dde0
710359fcc8  ldr x8,[sp, #0x30]
710359fccc  mov w25,w0
710359fcd0  str x26,[sp, #0x20]
710359fcd4  cbz x8,0x710359fcfc
710359fcd8  ldr x8,[x8]
710359fcdc  ldr x9,[sp, #0x38]
710359fce0  cmp x8,x9
710359fce4  b.ne 0x710359fcfc
710359fce8  ldr x0,[sp, #0x28]
710359fcec  cbz x0,0x710359fcfc
710359fcf0  ldr x8,[x0]
710359fcf4  ldr x8,[x8, #0x8]
710359fcf8  blr x8
710359fcfc  adrp x8,0x710593b000
710359fd00  ldr x8,[x8, #0x6a0]
710359fd04  ldr x26,[x8]
710359fd08  mov x0,x26
710359fd0c  mov x28,x20
710359fd10  bl 0x71039c19c0
710359fd14  ldr x10,[x26, #0x24d8]
710359fd18  ldr x9,[x26, #0x24d0]
710359fd1c  sub x10,x10,x9
710359fd20  mov x11,#0x4ec5
710359fd24  movk x11,#0xc4ec, LSL #16
710359fd28  movk x11,#0xec4e, LSL #32
710359fd2c  movk x11,#0x4ec4, LSL #48
710359fd30  asr x10,x10,#0x3
710359fd34  mul x10,x10,x11
710359fd38  and x8,x21,#0xffff
710359fd3c  cmp x10,x8
710359fd40  b.ls 0x710359fea0
710359fd44  mov w10,#0x68
710359fd48  madd x8,x8,x10,x9
710359fd4c  ldp x20,x21,[x8, #0x58]
710359fd50  cbz x21,0x710359fd68
710359fd54  add x8,x21,#0x8
710359fd58  ldxr x9,[x8]
710359fd5c  add x9,x9,#0x1
710359fd60  stxr w10,x9,[x8]
710359fd64  cbnz w10,0x710359fd58
710359fd68  mov x0,x26
710359fd6c  bl 0x71039c19d0
710359fd70  ldr x1,[x20]
710359fd74  ldr w2,[sp, #0xc]
710359fd78  add x0,sp,#0x68
710359fd7c  mov w3,w24
710359fd80  mov w4,w25
710359fd84  add x20,sp,#0x68
710359fd88  bl 0x710357c970
710359fd8c  add x20,x20,#0x8
710359fd90  cbz x19,0x710359fdb0
710359fd94  ldr x8,[sp, #0x70]
710359fd98  str xzr,[sp, #0x70]
710359fd9c  ldr x9,[x19, #0x8]
710359fda0  sub x0,x29,#0x60
710359fda4  stur x9,[x29, #-0x60]
710359fda8  str x8,[x19, #0x8]
710359fdac  bl 0x71039c6d70
710359fdb0  adrp x8,0x7105230000
710359fdb4  add x8,x8,#0xae0
710359fdb8  mov x0,x20
710359fdbc  mov w19,w24
710359fdc0  str x8,[sp, #0x68]
710359fdc4  bl 0x71039c6d70
710359fdc8  cbz x21,0x710359fdfc
710359fdcc  add x8,x21,#0x8
710359fdd0  ldaxr x9,[x8]
710359fdd4  sub x10,x9,#0x1
710359fdd8  stlxr w11,x10,[x8]
710359fddc  cbnz w11,0x710359fdd0
710359fde0  cbnz x9,0x710359fdfc
710359fde4  ldr x8,[x21]
710359fde8  ldr x8,[x8, #0x10]
710359fdec  mov x0,x21
710359fdf0  blr x8
710359fdf4  mov x0,x21
710359fdf8  bl 0x71039c2670
710359fdfc  cbz x27,0x710359fe24
710359fe00  cbz x23,0x710359fe24
710359fe04  ldr x8,[x27]
710359fe08  ldr x9,[sp, #0x10]
710359fe0c  cmp x8,x9
710359fe10  b.ne 0x710359fe24
710359fe14  ldr x8,[x23]
710359fe18  ldr x8,[x8, #0x8]
710359fe1c  mov x0,x23
710359fe20  blr x8
710359fe24  ldr x8,[sp, #0x18]
710359fe28  bfm x19,x25,#0x20,#0x1f
710359fe2c  cbz x8,0x710359fe54
710359fe30  cbz x22,0x710359fe54
710359fe34  ldr x8,[sp, #0x18]
710359fe38  ldr x8,[x8]
710359fe3c  cmp x8,x28
710359fe40  b.ne 0x710359fe54
710359fe44  ldr x8,[x22]
710359fe48  ldr x8,[x8, #0x8]
710359fe4c  mov x0,x22
710359fe50  blr x8
710359fe54  ldr x8,[sp, #0x150]
710359fe58  cbz x8,0x710359fe7c
710359fe5c  ldr x0,[sp, #0x140]
710359fe60  add x8,sp,#0xc0
710359fe64  add x8,x8,#0x80
710359fe68  add x8,x8,#0x18
710359fe6c  cmp x0,x8
710359fe70  b.eq 0x710359fe7c
710359fe74  cbz x0,0x710359fe7c
710359fe78  bl 0x710392eb40
710359fe7c  mov x0,x19
710359fe80  add sp,sp,#0x330
710359fe84  ldp x29,x30,[sp, #0x50]
710359fe88  ldp x20,x19,[sp, #0x40]
710359fe8c  ldp x22,x21,[sp, #0x30]
710359fe90  ldp x24,x23,[sp, #0x20]
710359fe94  ldp x26,x25,[sp, #0x10]
710359fe98  ldp x28,x27,[sp], #0x60
710359fe9c  ret
710359fea0  mov w8,#0x24d0
710359fea4  add x0,x26,x8
710359fea8  bl 0x71039c1330
