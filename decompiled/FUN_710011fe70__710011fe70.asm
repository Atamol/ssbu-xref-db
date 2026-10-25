// addr:      710011fe70
// offset:    0x11fe70
// name:      FUN_710011fe70
// mangled:   
// size:      160

710011fe70  sub sp,sp,#0x50
710011fe74  stp x20,x19,[sp, #0x30]
710011fe78  stp x29,x30,[sp, #0x40]
710011fe7c  add x29,sp,#0x40
710011fe80  mov x9,x1
710011fe84  str x1,[x0, #0x90]
710011fe88  mov x19,x8
710011fe8c  ldr x8,[x9]
710011fe90  ldr x10,[x8, #0xb0]
710011fe94  mov x20,x0
710011fe98  add x1,x0,#0x60
710011fe9c  add x8,sp,#0x18
710011fea0  mov x0,x9
710011fea4  blr x10
710011fea8  ldr w8,[sp, #0x18]
710011feac  cbz w8,0x710011feb8
710011feb0  add x1,sp,#0x18
710011feb4  b 0x710011fef8
710011feb8  adrp x8,0x71052a5000
710011febc  ldr x8,[x8, #0xa30]
710011fec0  adrp x9,0x7104453000
710011fec4  add x9,x9,#0xd8f
710011fec8  stp xzr,x9,[x20, #0x38]
710011fecc  str x8,[x20, #0x30]
710011fed0  add x8,sp,#0x8
710011fed4  orr x20,x8,#0x4
710011fed8  mov x0,x20
710011fedc  str wzr,[sp, #0x8]
710011fee0  bl 0x71039c0a80
710011fee4  sub x1,x29,#0x18
710011fee8  mov x0,x20
710011feec  stur wzr,[x29, #-0x18]
710011fef0  bl 0x71039c0a90
710011fef4  add x1,sp,#0x8
710011fef8  mov x0,x19
710011fefc  bl 0x71000bce50
710011ff00  ldp x29,x30,[sp, #0x40]
710011ff04  ldp x20,x19,[sp, #0x30]
710011ff08  add sp,sp,#0x50
710011ff0c  ret
