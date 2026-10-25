// addr:      710000fa20
// offset:    0xfa20
// name:      FUN_710000fa20
// mangled:   
// size:      272

710000fa20  sub sp,sp,#0xd0
710000fa24  str x21,[sp, #0xa0]
710000fa28  stp x20,x19,[sp, #0xb0]
710000fa2c  stp x29,x30,[sp, #0xc0]
710000fa30  add x29,sp,#0xc0
710000fa34  ldr w8,[x0, #0x470]
710000fa38  cbz w8,0x710000fa6c
710000fa3c  mov x21,x0
710000fa40  ldr x0,[x0, #0x478]
710000fa44  mov x19,x1
710000fa48  sub x1,x29,#0x58
710000fa4c  bl 0x7100014040
710000fa50  cbz w0,0x710000fa74
710000fa54  mov w20,w0
710000fa58  adrp x1,0x7104328000
710000fa5c  add x1,x1,#0xd47
710000fa60  mov x0,x21
710000fa64  bl 0x7100016040
710000fa68  b 0x710000fb18
710000fa6c  mov w20,wzr
710000fa70  b 0x710000fb18
710000fa74  ldr w8,[x21, #0x470]
710000fa78  sub w8,w8,#0x1
710000fa7c  cmp w8,#0x2
710000fa80  b.hi 0x710000fb14
710000fa84  adrp x9,0x71052a3000
710000fa88  ldr x9,[x9, #0x1f8]
710000fa8c  ldur w11,[x29, #-0x40]
710000fa90  adrp x10,0x7104f17000
710000fa94  add x10,x10,#0x1e0
710000fa98  adrp x2,0x710439b000
710000fa9c  add x2,x2,#0xf9c
710000faa0  ldr x3,[x10, w8, SXTW #0x3]
710000faa4  orr w8,wzr,#0x6
710000faa8  sub w10,w11,#0x1
710000faac  cmp w11,#0x0
710000fab0  csel w8,w8,w10,eq
710000fab4  ldr x4,[x9, w8, SXTW #0x3]
710000fab8  adrp x8,0x71052a3000
710000fabc  ldr x8,[x8, #0x200]
710000fac0  ldur w10,[x29, #-0x58]
710000fac4  ldp w5,w9,[x29, #-0x4c]
710000fac8  sxtw x9,w9
710000facc  ldr x6,[x8, x9, LSL #0x3]
710000fad0  ldur w8,[x29, #-0x44]
710000fad4  add w7,w8,#0x76c
710000fad8  ldp w9,w8,[x29, #-0x54]
710000fadc  mov w1,#0x50
710000fae0  add x0,sp,#0x18
710000fae4  str w10,[sp, #0x10]
710000fae8  str w9,[sp, #0x8]
710000faec  str w8,[sp]
710000faf0  bl 0x7100007ef0
710000faf4  add x0,sp,#0x18
710000faf8  bl 0x71039c0070
710000fafc  mov x2,x0
710000fb00  add x1,sp,#0x18
710000fb04  mov x0,x19
710000fb08  bl 0x710000f600
710000fb0c  mov w20,w0
710000fb10  b 0x710000fb18
710000fb14  mov w20,#0x2b
710000fb18  mov w0,w20
710000fb1c  ldp x29,x30,[sp, #0xc0]
710000fb20  ldp x20,x19,[sp, #0xb0]
710000fb24  ldr x21,[sp, #0xa0]
710000fb28  add sp,sp,#0xd0
710000fb2c  ret
