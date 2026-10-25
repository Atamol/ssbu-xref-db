// addr:      710029ce10
// offset:    0x29ce10
// name:      FUN_710029ce10
// mangled:   
// size:      328

710029ce10  sub sp,sp,#0x70
710029ce14  stp x26,x25,[sp, #0x20]
710029ce18  stp x24,x23,[sp, #0x30]
710029ce1c  stp x22,x21,[sp, #0x40]
710029ce20  stp x20,x19,[sp, #0x50]
710029ce24  stp x29,x30,[sp, #0x60]
710029ce28  add x29,sp,#0x60
710029ce2c  adrp x8,0x71052a4000
710029ce30  ldr x8,[x8, #0xda8]
710029ce34  adrp x26,0x71052a4000
710029ce38  ldrb w8,[x8]
710029ce3c  ldr x26,[x26, #0xdb0]
710029ce40  mov w21,w5
710029ce44  mov x20,x4
710029ce48  mov x22,x3
710029ce4c  mov x23,x2
710029ce50  mov w24,w1
710029ce54  mov x19,x0
710029ce58  add x25,x26,#0x28
710029ce5c  cbz w8,0x710029ce98
710029ce60  adrp x8,0x71052a4000
710029ce64  ldr x8,[x8, #0xdb8]
710029ce68  ldr x0,[x8]
710029ce6c  bl 0x7101717960
710029ce70  ldr w8,[x0]
710029ce74  cbz w8,0x710029ce98
710029ce78  ldr x10,[x26, #0xa0]
710029ce7c  ldp x9,x10,[x10]
710029ce80  sub x10,x10,x9
710029ce84  asr x10,x10,#0x3
710029ce88  cmp x10,x8
710029ce8c  b.ls 0x710029ceb0
710029ce90  ldr x8,[x9, x8, LSL #0x3]
710029ce94  add x25,x8,#0x20
710029ce98  ldr x8,[x25]
710029ce9c  cbz x8,0x710029cec8
710029cea0  ldr x8,[x8, #0x10]
710029cea4  cbz x8,0x710029cec8
710029cea8  ldr x25,[x8, #0x10]
710029ceac  b 0x710029cecc
710029ceb0  adrp x0,0x71042c4000
710029ceb4  add x0,x0,#0x35f
710029ceb8  mov w1,#0x47
710029cebc  orr w2,wzr,#0xe0000003
710029cec0  mov w3,wzr
710029cec4  bl 0x71001b1300
710029cec8  mov x25,xzr
710029cecc  ldr x8,[x25, #0x78]!
710029ced0  ldr x8,[x8, #0x10]
710029ced4  mov x0,x25
710029ced8  blr x8
710029cedc  add x0,x19,#0x158
710029cee0  mov x1,x23
710029cee4  str w24,[x19, #0xa0]
710029cee8  bl 0x71001b2f70
710029ceec  ldr x8,[x22, #0x8]
710029cef0  adrp x9,0x71052a6000
710029cef4  ldr x9,[x9, #0xc28]
710029cef8  str w21,[x19, #0xa4]
710029cefc  stp x8,x20,[x19, #0x190]
710029cf00  adrp x8,0x71052a8000
710029cf04  ldr x8,[x8, #0x728]
710029cf08  add x9,x9,#0x10
710029cf0c  stp x9,x8,[sp]
710029cf10  adrp x8,0x7104411000
710029cf14  add x8,x8,#0x4cc
710029cf18  mov x1,sp
710029cf1c  mov x0,x19
710029cf20  stp xzr,x8,[sp, #0x10]
710029cf24  bl 0x71001d3d60
710029cf28  ldr x8,[x25]
710029cf2c  ldr x8,[x8, #0x20]
710029cf30  mov x0,x25
710029cf34  blr x8
710029cf38  ldp x29,x30,[sp, #0x60]
710029cf3c  mov w0,#0x1
710029cf40  ldp x20,x19,[sp, #0x50]
710029cf44  ldp x22,x21,[sp, #0x40]
710029cf48  ldp x24,x23,[sp, #0x30]
710029cf4c  ldp x26,x25,[sp, #0x20]
710029cf50  add sp,sp,#0x70
710029cf54  ret
