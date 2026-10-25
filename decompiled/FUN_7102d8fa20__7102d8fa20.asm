// addr:      7102d8fa20
// offset:    0x2d8fa20
// name:      FUN_7102d8fa20
// mangled:   
// size:      344

7102d8fa20  str x19,[sp, #-0x20]!
7102d8fa24  stp x29,x30,[sp, #0x10]
7102d8fa28  add x29,sp,#0x10
7102d8fa2c  ldr x8,[x0, #0x8]
7102d8fa30  str wzr,[x0, #0x6c]
7102d8fa34  ldr x8,[x8, #0x300]
7102d8fa38  ldr x9,[x8, #0x18]
7102d8fa3c  ldp x8,x9,[x9]
7102d8fa40  mov x19,x0
7102d8fa44  cmp x8,x9
7102d8fa48  b.eq 0x7102d8faf0
7102d8fa4c  mov x10,#0xdf99
7102d8fa50  movk x10,#0xb569, LSL #16
7102d8fa54  movk x10,#0x7, LSL #32
7102d8fa58  mov x11,x8
7102d8fa5c  ldr x12,[x11], #0x8
7102d8fa60  ldr x13,[x12, #0xa0]
7102d8fa64  and x13,x13,#0xffffffffff
7102d8fa68  cmp x13,x10
7102d8fa6c  b.eq 0x7102d8fa7c
7102d8fa70  cmp x9,x11
7102d8fa74  b.ne 0x7102d8fa5c
7102d8fa78  b 0x7102d8faa4
7102d8fa7c  ldr x10,[x12, #0x130]
7102d8fa80  cbz x10,0x7102d8faa4
7102d8fa84  ldp x0,x1,[x10]
7102d8fa88  adrp x2,0x71042a1000
7102d8fa8c  add x2,x2,#0x67e
7102d8fa90  bl 0x71025f5420
7102d8fa94  ldr x8,[x19, #0x8]
7102d8fa98  ldr x8,[x8, #0x300]
7102d8fa9c  ldr x9,[x8, #0x18]
7102d8faa0  ldp x8,x9,[x9]
7102d8faa4  cmp x8,x9
7102d8faa8  b.eq 0x7102d8faf0
7102d8faac  mov x10,#0x85e5
7102d8fab0  movk x10,#0x3411, LSL #16
7102d8fab4  movk x10,#0x7, LSL #32
7102d8fab8  ldr x11,[x8], #0x8
7102d8fabc  ldr x12,[x11, #0xa0]
7102d8fac0  and x12,x12,#0xffffffffff
7102d8fac4  cmp x12,x10
7102d8fac8  b.eq 0x7102d8fad8
7102d8facc  cmp x9,x8
7102d8fad0  b.ne 0x7102d8fab8
7102d8fad4  b 0x7102d8faf0
7102d8fad8  ldr x8,[x11, #0x130]
7102d8fadc  cbz x8,0x7102d8faf0
7102d8fae0  ldp x0,x1,[x8]
7102d8fae4  adrp x2,0x71042b2000
7102d8fae8  add x2,x2,#0x4de
7102d8faec  bl 0x71025f55b0
7102d8faf0  ldrb w8,[x19, #0x70]
7102d8faf4  cbz w8,0x7102d8fb28
7102d8faf8  ldr x8,[x19, #0x8]
7102d8fafc  ldr x8,[x8, #0x338]
7102d8fb00  ldr x8,[x8]
7102d8fb04  ldr x0,[x8, #0x8]
7102d8fb08  cbz x0,0x7102d8fb20
7102d8fb0c  ldr x8,[x0]
7102d8fb10  ldr x8,[x8, #0x58]
7102d8fb14  mov w1,#0x1b
7102d8fb18  mov w2,#0xffffffff
7102d8fb1c  blr x8
7102d8fb20  mov w8,wzr
7102d8fb24  b 0x7102d8fb2c
7102d8fb28  mov w8,#0x1
7102d8fb2c  ldr x0,[x19, #0x40]
7102d8fb30  strb w8,[x19, #0x70]
7102d8fb34  ldr x8,[x0]
7102d8fb38  ldr x8,[x8, #0x40]
7102d8fb3c  blr x8
7102d8fb40  ldr x0,[x19, #0x48]
7102d8fb44  ldr x8,[x0]
7102d8fb48  ldr x8,[x8, #0x40]
7102d8fb4c  blr x8
7102d8fb50  ldr x0,[x19, #0x50]
7102d8fb54  ldr x8,[x0]
7102d8fb58  ldr x8,[x8, #0x40]
7102d8fb5c  blr x8
7102d8fb60  ldr x0,[x19, #0x38]
7102d8fb64  ldr x8,[x0]
7102d8fb68  ldr x1,[x8, #0x40]
7102d8fb6c  ldp x29,x30,[sp, #0x10]
7102d8fb70  ldr x19,[sp], #0x20
7102d8fb74  br x1
