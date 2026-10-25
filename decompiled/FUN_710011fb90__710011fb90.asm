// addr:      710011fb90
// offset:    0x11fb90
// name:      FUN_710011fb90
// mangled:   
// size:      156

710011fb90  sub sp,sp,#0x40
710011fb94  stp x20,x19,[sp, #0x20]
710011fb98  stp x29,x30,[sp, #0x30]
710011fb9c  add x29,sp,#0x30
710011fba0  mov x9,x2
710011fba4  mov x20,x0
710011fba8  str x1,[x0, #0x90]
710011fbac  mov w2,#0x1
710011fbb0  mov x0,x1
710011fbb4  mov x1,x9
710011fbb8  mov x19,x8
710011fbbc  bl 0x710011baa0
710011fbc0  tbz w0,#0x0,0x710011fbe4
710011fbc4  adrp x8,0x71052a5000
710011fbc8  ldr x8,[x8, #0xa20]
710011fbcc  adrp x9,0x7104411000
710011fbd0  add x9,x9,#0xc33
710011fbd4  stp xzr,x9,[x20, #0x38]
710011fbd8  str x8,[x20, #0x30]
710011fbdc  str wzr,[sp, #0x8]
710011fbe0  b 0x710011fbf0
710011fbe4  mov w8,#0xc07
710011fbe8  movk w8,#0x1, LSL #16
710011fbec  str w8,[sp, #0x8]
710011fbf0  add x8,sp,#0x8
710011fbf4  orr x20,x8,#0x4
710011fbf8  mov x0,x20
710011fbfc  bl 0x71039c0a80
710011fc00  add x1,sp,#0x18
710011fc04  mov x0,x20
710011fc08  str wzr,[sp, #0x18]
710011fc0c  bl 0x71039c0a90
710011fc10  add x1,sp,#0x8
710011fc14  mov x0,x19
710011fc18  bl 0x71000bce50
710011fc1c  ldp x29,x30,[sp, #0x30]
710011fc20  ldp x20,x19,[sp, #0x20]
710011fc24  add sp,sp,#0x40
710011fc28  ret
