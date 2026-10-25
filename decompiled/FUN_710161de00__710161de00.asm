// addr:      710161de00
// offset:    0x161de00
// name:      FUN_710161de00
// mangled:   
// size:      264

710161de00  sub sp,sp,#0x40
710161de04  stp x22,x21,[sp, #0x10]
710161de08  stp x20,x19,[sp, #0x20]
710161de0c  stp x29,x30,[sp, #0x30]
710161de10  add x29,sp,#0x30
710161de14  ldr x8,[x0]
710161de18  ldr x8,[x8, #0x78]
710161de1c  mov x19,x2
710161de20  mov w20,w1
710161de24  mov x22,x0
710161de28  blr x8
710161de2c  tbnz w0,#0x0,0x710161def4
710161de30  str xzr,[sp, #0x8]
710161de34  ldr x8,[x22]
710161de38  ldr x8,[x8, #0x50]
710161de3c  mov x21,#0x5360
710161de40  movk x21,#0xc17f, LSL #16
710161de44  mov x0,x22
710161de48  movk x21,#0x17, LSL #32
710161de4c  blr x8
710161de50  tbz w0,#0x0,0x710161de80
710161de54  ldr x0,[x22, #0x1d8]
710161de58  adrp x3,0x71043ac000
710161de5c  add x3,x3,#0xdd1
710161de60  add x2,sp,#0x8
710161de64  mov x1,x21
710161de68  mov w4,w20
710161de6c  mov x5,x19
710161de70  bl 0x710372e100
710161de74  ldr x19,[sp, #0x8]
710161de78  cbnz x19,0x710161dea8
710161de7c  b 0x710161def4
710161de80  ldr x0,[x22, #0x10]
710161de84  adrp x3,0x71043ac000
710161de88  add x3,x3,#0xdd1
710161de8c  add x2,sp,#0x8
710161de90  mov x1,x21
710161de94  mov w4,w20
710161de98  mov x5,x19
710161de9c  bl 0x71037278a0
710161dea0  ldr x19,[sp, #0x8]
710161dea4  cbz x19,0x710161def4
710161dea8  ldr x21,[x19, #0x10]
710161deac  mov x20,xzr
710161deb0  b 0x710161deb8
710161deb4  add x20,x20,#0x1
710161deb8  ldrb w8,[x21, x20, LSL ]
710161debc  cmp w8,#0x73
710161dec0  b.eq 0x710161decc
710161dec4  cbnz w8,0x710161deb4
710161dec8  b 0x710161dee4
710161decc  ldr x22,[x19, #0x8]
710161ded0  ldr x0,[x22, x20, LSL #0x3]
710161ded4  cbz x0,0x710161dedc
710161ded8  bl 0x710392eb40
710161dedc  str xzr,[x22, x20, LSL #0x3]
710161dee0  b 0x710161deb4
710161dee4  ldr x0,[sp, #0x8]
710161dee8  cbz x0,0x710161def0
710161deec  bl 0x710392eb40
710161def0  str xzr,[sp, #0x8]
710161def4  ldp x29,x30,[sp, #0x30]
710161def8  ldp x20,x19,[sp, #0x20]
710161defc  ldp x22,x21,[sp, #0x10]
710161df00  add sp,sp,#0x40
710161df04  ret
