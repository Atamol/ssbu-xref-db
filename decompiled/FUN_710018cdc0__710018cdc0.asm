// addr:      710018cdc0
// offset:    0x18cdc0
// name:      FUN_710018cdc0
// mangled:   
// size:      368

710018cdc0  sub sp,sp,#0x60
710018cdc4  stp x26,x25,[sp, #0x10]
710018cdc8  stp x24,x23,[sp, #0x20]
710018cdcc  stp x22,x21,[sp, #0x30]
710018cdd0  stp x20,x19,[sp, #0x40]
710018cdd4  stp x29,x30,[sp, #0x50]
710018cdd8  add x29,sp,#0x50
710018cddc  adrp x22,0x71052a4000
710018cde0  ldr x22,[x22, #0xdc8]
710018cde4  mov x19,x0
710018cde8  ldr x0,[x22]
710018cdec  bl 0x7100161fa0
710018cdf0  ldr x23,[x0, #0x98]
710018cdf4  cbz x23,0x710018cf10
710018cdf8  ldr x0,[x22]
710018cdfc  bl 0x7100161fa0
710018ce00  ldr x24,[x0, #0x20]
710018ce04  ldr x0,[x22]
710018ce08  bl 0x7100161fa0
710018ce0c  add x8,x0,#0x18
710018ce10  cmp x24,x8
710018ce14  b.eq 0x710018cec8
710018ce18  adrp x25,0x71052a4000
710018ce1c  ldr x25,[x25, #0xdf0]
710018ce20  orr x26,xzr,#0x80000000000
710018ce24  ldr x8,[x24, #0x10]
710018ce28  cmp x8,x23
710018ce2c  b.eq 0x710018ceb0
710018ce30  ldr x0,[x25]
710018ce34  ldrb w1,[x8, #0x38]
710018ce38  bl 0x7100190a90
710018ce3c  tbz w0,#0x0,0x710018ce50
710018ce40  ldr x8,[x24, #0x10]
710018ce44  ldr x0,[x25]
710018ce48  ldrb w1,[x8, #0x38]
710018ce4c  bl 0x7100190af0
710018ce50  ldr x20,[x24, #0x10]
710018ce54  ldr x0,[x20, #0xa0]
710018ce58  bl 0x7100187520
710018ce5c  ldr x0,[x20, #0xb0]
710018ce60  bl 0x71001a0e00
710018ce64  ldr x21,[x20, #0xa8]
710018ce68  cbz x21,0x710018ce84
710018ce6c  mov x8,sp
710018ce70  mov x0,x21
710018ce74  mov x1,x20
710018ce78  bl 0x7100187fe0
710018ce7c  ldr w8,[sp]
710018ce80  cbz w8,0x710018cea4
710018ce84  ldr x0,[x24, #0x10]
710018ce88  str x26,[sp]
710018ce8c  str wzr,[sp, #0x8]
710018ce90  ldr x8,[x0]
710018ce94  ldr x8,[x8, #0x18]
710018ce98  mov x1,sp
710018ce9c  blr x8
710018cea0  b 0x710018ceb0
710018cea4  mov x0,x21
710018cea8  mov w1,wzr
710018ceac  bl 0x71000b4820
710018ceb0  ldr x0,[x22]
710018ceb4  ldr x24,[x24, #0x8]
710018ceb8  bl 0x7100161fa0
710018cebc  add x8,x0,#0x18
710018cec0  cmp x24,x8
710018cec4  b.ne 0x710018ce24
710018cec8  adrp x8,0x71052a4000
710018cecc  ldr x8,[x8, #0xc70]
710018ced0  ldr x20,[x8]
710018ced4  bl 0x71000bb680
710018ced8  mov x8,x0
710018cedc  adrp x10,0x71052a6000
710018cee0  ldr x9,[x20, #0x30]
710018cee4  ldr x10,[x10, #0x5e8]
710018cee8  ldr x8,[x8]
710018ceec  mov w11,#0x1388
710018cef0  madd x8,x8,x11,x9
710018cef4  mov x0,xzr
710018cef8  str x8,[x19, #0xb8]
710018cefc  adrp x8,0x7104291000
710018cf00  add x8,x8,#0x67
710018cf04  str x8,[x19, #0x40]
710018cf08  stp x10,xzr,[x19, #0x30]
710018cf0c  b 0x710018cf14
710018cf10  mov w0,#0x1
710018cf14  ldp x29,x30,[sp, #0x50]
710018cf18  ldp x20,x19,[sp, #0x40]
710018cf1c  ldp x22,x21,[sp, #0x30]
710018cf20  ldp x24,x23,[sp, #0x20]
710018cf24  ldp x26,x25,[sp, #0x10]
710018cf28  add sp,sp,#0x60
710018cf2c  ret
