// addr:      710029c9b0
// offset:    0x29c9b0
// name:      FUN_710029c9b0
// mangled:   
// size:      328

710029c9b0  sub sp,sp,#0x70
710029c9b4  stp x26,x25,[sp, #0x20]
710029c9b8  stp x24,x23,[sp, #0x30]
710029c9bc  stp x22,x21,[sp, #0x40]
710029c9c0  stp x20,x19,[sp, #0x50]
710029c9c4  stp x29,x30,[sp, #0x60]
710029c9c8  add x29,sp,#0x60
710029c9cc  adrp x8,0x71052a4000
710029c9d0  ldr x8,[x8, #0xda8]
710029c9d4  adrp x26,0x71052a4000
710029c9d8  ldrb w8,[x8]
710029c9dc  ldr x26,[x26, #0xdb0]
710029c9e0  mov w21,w5
710029c9e4  mov x20,x4
710029c9e8  mov x22,x3
710029c9ec  mov x23,x2
710029c9f0  mov w24,w1
710029c9f4  mov x19,x0
710029c9f8  add x25,x26,#0x28
710029c9fc  cbz w8,0x710029ca38
710029ca00  adrp x8,0x71052a4000
710029ca04  ldr x8,[x8, #0xdb8]
710029ca08  ldr x0,[x8]
710029ca0c  bl 0x7101717960
710029ca10  ldr w8,[x0]
710029ca14  cbz w8,0x710029ca38
710029ca18  ldr x10,[x26, #0xa0]
710029ca1c  ldp x9,x10,[x10]
710029ca20  sub x10,x10,x9
710029ca24  asr x10,x10,#0x3
710029ca28  cmp x10,x8
710029ca2c  b.ls 0x710029ca50
710029ca30  ldr x8,[x9, x8, LSL #0x3]
710029ca34  add x25,x8,#0x20
710029ca38  ldr x8,[x25]
710029ca3c  cbz x8,0x710029ca68
710029ca40  ldr x8,[x8, #0x10]
710029ca44  cbz x8,0x710029ca68
710029ca48  ldr x25,[x8, #0x10]
710029ca4c  b 0x710029ca6c
710029ca50  adrp x0,0x71042c4000
710029ca54  add x0,x0,#0x35f
710029ca58  mov w1,#0x47
710029ca5c  orr w2,wzr,#0xe0000003
710029ca60  mov w3,wzr
710029ca64  bl 0x71001b1300
710029ca68  mov x25,xzr
710029ca6c  ldr x8,[x25, #0x78]!
710029ca70  ldr x8,[x8, #0x10]
710029ca74  mov x0,x25
710029ca78  blr x8
710029ca7c  add x0,x19,#0x158
710029ca80  mov x1,x23
710029ca84  str w24,[x19, #0xa0]
710029ca88  bl 0x71001b2f70
710029ca8c  ldr x8,[x22, #0x8]
710029ca90  adrp x9,0x71052a6000
710029ca94  ldr x9,[x9, #0xc28]
710029ca98  str w21,[x19, #0xa4]
710029ca9c  stp x8,x20,[x19, #0x190]
710029caa0  adrp x8,0x71052a8000
710029caa4  ldr x8,[x8, #0x710]
710029caa8  add x9,x9,#0x10
710029caac  stp x9,x8,[sp]
710029cab0  adrp x8,0x7104411000
710029cab4  add x8,x8,#0x4cc
710029cab8  mov x1,sp
710029cabc  mov x0,x19
710029cac0  stp xzr,x8,[sp, #0x10]
710029cac4  bl 0x71001d3d60
710029cac8  ldr x8,[x25]
710029cacc  ldr x8,[x8, #0x20]
710029cad0  mov x0,x25
710029cad4  blr x8
710029cad8  ldp x29,x30,[sp, #0x60]
710029cadc  mov w0,#0x1
710029cae0  ldp x20,x19,[sp, #0x50]
710029cae4  ldp x22,x21,[sp, #0x40]
710029cae8  ldp x24,x23,[sp, #0x30]
710029caec  ldp x26,x25,[sp, #0x20]
710029caf0  add sp,sp,#0x70
710029caf4  ret
