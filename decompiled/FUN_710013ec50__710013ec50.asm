// addr:      710013ec50
// offset:    0x13ec50
// name:      FUN_710013ec50
// mangled:   
// size:      340

710013ec50  sub sp,sp,#0x60
710013ec54  stp x20,x19,[sp, #0x40]
710013ec58  stp x29,x30,[sp, #0x50]
710013ec5c  add x29,sp,#0x50
710013ec60  ldr x8,[x0]
710013ec64  ldr x8,[x8, #0x48]
710013ec68  mov x19,x0
710013ec6c  blr x8
710013ec70  tbz w0,#0x0,0x710013eccc
710013ec74  mov w8,#0x6c05
710013ec78  str w8,[sp, #0x18]
710013ec7c  add x8,sp,#0x18
710013ec80  orr x20,x8,#0x4
710013ec84  mov x0,x20
710013ec88  bl 0x71039c0a80
710013ec8c  sub x1,x29,#0x18
710013ec90  mov x0,x20
710013ec94  stur wzr,[x29, #-0x18]
710013ec98  bl 0x71039c0a90
710013ec9c  add x0,sp,#0x28
710013eca0  add x1,sp,#0x18
710013eca4  bl 0x71000bce50
710013eca8  ldr x8,[x19]
710013ecac  ldr x8,[x8, #0x78]
710013ecb0  add x1,sp,#0x28
710013ecb4  mov x0,x19
710013ecb8  blr x8
710013ecbc  mov x0,xzr
710013ecc0  mov x8,xzr
710013ecc4  mov x9,xzr
710013ecc8  b 0x710013ed84
710013eccc  adrp x20,0x71052a4000
710013ecd0  ldr x20,[x20, #0xdf0]
710013ecd4  ldr x0,[x20]
710013ecd8  add x1,x19,#0x90
710013ecdc  add x8,sp,#0x18
710013ece0  bl 0x71001928e0
710013ece4  ldr w8,[sp, #0x18]
710013ece8  cbz w8,0x710013ed48
710013ecec  adrp x20,0x71052a5000
710013ecf0  ldr x20,[x20, #0x80]
710013ecf4  ldr x0,[x20]
710013ecf8  bl 0x7100146fd0
710013ecfc  adrp x8,0x71052a4000
710013ed00  ldr x8,[x8, #0xbd0]
710013ed04  strb w0,[x8, #0x12f]
710013ed08  ldr x8,[x20]
710013ed0c  ldr x0,[x8, #0x8]
710013ed10  ldr x8,[x0]
710013ed14  ldr x8,[x8, #0x28]
710013ed18  blr x8
710013ed1c  add x0,sp,#0x8
710013ed20  add x1,sp,#0x18
710013ed24  bl 0x71000bce50
710013ed28  ldr x8,[x19]
710013ed2c  ldr x8,[x8, #0x78]
710013ed30  add x1,sp,#0x8
710013ed34  mov x0,x19
710013ed38  blr x8
710013ed3c  and x9,x0,#0xffffff00
710013ed40  and x8,x0,#0xffff0000
710013ed44  b 0x710013ed84
710013ed48  mov w8,#0x4
710013ed4c  str w8,[x19, #0x110]
710013ed50  ldr x0,[x20]
710013ed54  mov w1,#0x1
710013ed58  bl 0x7100193380
710013ed5c  str xzr,[x19, #0x38]
710013ed60  adrp x10,0x71052a5000
710013ed64  ldr x10,[x10, #0xdd8]
710013ed68  mov x8,xzr
710013ed6c  mov x9,xzr
710013ed70  adrp x11,0x7104421000
710013ed74  add x11,x11,#0x5f3
710013ed78  mov w0,#0x5
710013ed7c  str x11,[x19, #0x40]
710013ed80  str x10,[x19, #0x30]
710013ed84  ldp x29,x30,[sp, #0x50]
710013ed88  and x10,x0,#0xff
710013ed8c  ldp x20,x19,[sp, #0x40]
710013ed90  and x9,x9,#0xff00
710013ed94  orr x8,x8,x10
710013ed98  orr x0,x8,x9
710013ed9c  add sp,sp,#0x60
710013eda0  ret
