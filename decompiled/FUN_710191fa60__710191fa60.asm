// addr:      710191fa60
// offset:    0x191fa60
// name:      FUN_710191fa60
// mangled:   
// size:      540

710191fa60  sub sp,sp,#0x50
710191fa64  str x21,[sp, #0x20]
710191fa68  stp x20,x19,[sp, #0x30]
710191fa6c  stp x29,x30,[sp, #0x40]
710191fa70  add x29,sp,#0x40
710191fa74  ldr x9,[x0, #0x180]
710191fa78  ldr w8,[x0, #0x16c]
710191fa7c  ldr x20,[x9, #0x80]
710191fa80  cbz w8,0x710191fb08
710191fa84  ldr w8,[x20, #0x180]
710191fa88  cmp w8,#0xf
710191fa8c  b.ne 0x710191fc64
710191fa90  ldr w8,[x20, #0x228]
710191fa94  mov x19,x0
710191fa98  cmp w8,#0x1
710191fa9c  b.eq 0x710191fc4c
710191faa0  cmp w8,#0x2
710191faa4  b.ne 0x710191fc64
710191faa8  ldr x8,[x19, #0x1a0]
710191faac  ldr x8,[x8]
710191fab0  ldr x0,[x8, #0x8]
710191fab4  ldrb w1,[x19, #0x1a8]
710191fab8  bl 0x710251ad80
710191fabc  ldr x8,[x19, #0x180]
710191fac0  ldr x0,[x8, #0x80]
710191fac4  bl 0x7101e4ca50
710191fac8  ldrsw x8,[x19, #0x164]
710191facc  cmp w8,#0x13
710191fad0  b.cs 0x710191fc78
710191fad4  add x8,x19,x8, LSL #0x2
710191fad8  mov w9,#0x4
710191fadc  str w9,[x8, #0x118]
710191fae0  ldr w8,[x19, #0x164]
710191fae4  cmp w8,#0x11
710191fae8  b.gt 0x710191fc64
710191faec  add w8,w8,#0x1
710191faf0  cmp w8,#0x13
710191faf4  str w8,[x19, #0x164]
710191faf8  b.cs 0x710191fc78
710191fafc  add x8,x19,w8, SXTW  #0x2
710191fb00  orr w9,wzr,#0xe
710191fb04  b 0x710191fc60
710191fb08  ldr x19,[x20, #0x1a8]
710191fb0c  ldr x0,[x19]
710191fb10  ldr x8,[x0]
710191fb14  ldr x8,[x8, #0x60]
710191fb18  mov w1,wzr
710191fb1c  blr x8
710191fb20  ldr x0,[x19]
710191fb24  ldr x8,[x0]
710191fb28  ldr x8,[x8, #0x70]
710191fb2c  mov w1,wzr
710191fb30  blr x8
710191fb34  ldr x8,[x20, #0x220]
710191fb38  mov w9,#0x1
710191fb3c  str wzr,[x20, #0x228]
710191fb40  strb w9,[x8, #0x40]
710191fb44  add x0,x20,#0x198
710191fb48  adrp x1,0x71043e0000
710191fb4c  add x1,x1,#0x83a
710191fb50  add x8,sp,#0x8
710191fb54  add x19,sp,#0x8
710191fb58  bl 0x71037780e0
710191fb5c  mov w0,#0x10
710191fb60  mov w1,#0x10
710191fb64  bl 0x710392e290
710191fb68  cbnz x0,0x710191fbb0
710191fb6c  adrp x8,0x7105332000
710191fb70  ldr x0,[x8, #0xf00]
710191fb74  cbz x0,0x710191fbac
710191fb78  mov w8,#0x10
710191fb7c  stur wzr,[x29, #-0x14]
710191fb80  sub x1,x29,#0x14
710191fb84  str x8,[sp, #0x18]
710191fb88  ldr x8,[x0]
710191fb8c  ldr x8,[x8, #0x30]
710191fb90  add x2,sp,#0x18
710191fb94  blr x8
710191fb98  tbz w0,#0x0,0x710191fbac
710191fb9c  mov w0,#0x10
710191fba0  mov w1,#0x10
710191fba4  bl 0x710392e290
710191fba8  cbnz x0,0x710191fbb0
710191fbac  mov x0,xzr
710191fbb0  adrp x21,0x710523d000
710191fbb4  add x21,x21,#0x9e8
710191fbb8  cmp x19,x0
710191fbbc  stp x21,xzr,[x0]
710191fbc0  b.eq 0x710191fbd0
710191fbc4  ldr x8,[sp, #0x10]
710191fbc8  str xzr,[sp, #0x10]
710191fbcc  str x8,[x0, #0x8]
710191fbd0  ldr x8,[x20, #0x210]
710191fbd4  str x0,[x20, #0x210]
710191fbd8  cbz x8,0x710191fbec
710191fbdc  ldr x9,[x8]
710191fbe0  ldr x9,[x9, #0x8]
710191fbe4  mov x0,x8
710191fbe8  blr x9
710191fbec  ldr x0,[sp, #0x10]
710191fbf0  stp x21,xzr,[sp, #0x8]
710191fbf4  cbz x0,0x710191fbfc
710191fbf8  bl 0x710392eb40
710191fbfc  ldr x0,[x20, #0x210]
710191fc00  fmov s0,0x3f800000
710191fc04  bl 0x710377aee0
710191fc08  add x8,x20,#0x184
710191fc0c  orr x9,xzr,#-0x100000000
710191fc10  str wzr,[x20, #0x178]
710191fc14  stp xzr,xzr,[x20, #0x10]
710191fc18  stp xzr,xzr,[x20, #0x168]
710191fc1c  stp xzr,xzr,[x20, #0x158]
710191fc20  stp xzr,xzr,[x20, #0x148]
710191fc24  stp xzr,xzr,[x20, #0x138]
710191fc28  str x9,[x8]
710191fc2c  mov x8,#0xc
710191fc30  movk x8,#0xe, LSL #32
710191fc34  orr x9,xzr,#-0xffffffff
710191fc38  str x8,[x20, #0x130]
710191fc3c  add x8,x20,#0x17c
710191fc40  strb wzr,[x20, #0x18c]
710191fc44  str x9,[x8]
710191fc48  b 0x710191fc64
710191fc4c  ldrsw x8,[x19, #0x164]
710191fc50  cmp w8,#0x13
710191fc54  b.cs 0x710191fc78
710191fc58  add x8,x19,x8, LSL #0x2
710191fc5c  mov w9,#0x4
710191fc60  str w9,[x8, #0x118]
710191fc64  ldp x29,x30,[sp, #0x40]
710191fc68  ldr x21,[sp, #0x20]
710191fc6c  ldp x20,x19,[sp, #0x30]
710191fc70  add sp,sp,#0x50
710191fc74  ret
710191fc78  bl 0x71039c2650
