// addr:      710011fc30
// offset:    0x11fc30
// name:      FUN_710011fc30
// mangled:   
// size:      276

710011fc30  sub sp,sp,#0x60
710011fc34  str x21,[sp, #0x30]
710011fc38  stp x20,x19,[sp, #0x40]
710011fc3c  stp x29,x30,[sp, #0x50]
710011fc40  add x29,sp,#0x50
710011fc44  ldr x20,[x0, #0x58]
710011fc48  mov x19,x0
710011fc4c  cbz x20,0x710011fcb0
710011fc50  ldrb w8,[x20, #0x28]
710011fc54  cbz w8,0x710011fcb0
710011fc58  mov w8,#0x6c05
710011fc5c  str w8,[sp, #0x10]
710011fc60  add x8,sp,#0x10
710011fc64  orr x21,x8,#0x4
710011fc68  mov x0,x21
710011fc6c  bl 0x71039c0a80
710011fc70  sub x1,x29,#0x18
710011fc74  mov x0,x21
710011fc78  stur wzr,[x29, #-0x18]
710011fc7c  bl 0x71039c0a90
710011fc80  add x0,sp,#0x20
710011fc84  add x1,sp,#0x10
710011fc88  bl 0x71000bce50
710011fc8c  add x1,sp,#0x20
710011fc90  mov x0,x20
710011fc94  bl 0x71000b41f0
710011fc98  ldr x8,[x19]
710011fc9c  str xzr,[x19, #0x58]
710011fca0  ldr x8,[x8, #0x30]
710011fca4  mov x0,x19
710011fca8  blr x8
710011fcac  b 0x710011fd00
710011fcb0  ldr x0,[x19, #0x90]
710011fcb4  ldr x8,[x0]
710011fcb8  ldr x9,[x8, #0x28]
710011fcbc  add x1,x19,#0x60
710011fcc0  add x8,sp,#0x10
710011fcc4  blr x9
710011fcc8  ldr w8,[sp, #0x10]
710011fccc  cbz w8,0x710011fd0c
710011fcd0  ldr x20,[x19, #0x58]
710011fcd4  cbz x20,0x710011fd00
710011fcd8  mov x0,sp
710011fcdc  add x1,sp,#0x10
710011fce0  bl 0x71000bce50
710011fce4  mov x1,sp
710011fce8  mov x0,x20
710011fcec  bl 0x71000b41f0
710011fcf0  mov x8,xzr
710011fcf4  str xzr,[x19, #0x58]
710011fcf8  mov w9,#0x1
710011fcfc  b 0x710011fd2c
710011fd00  mov x8,xzr
710011fd04  mov w9,#0x1
710011fd08  b 0x710011fd2c
710011fd0c  adrp x8,0x71052a5000
710011fd10  ldr x8,[x8, #0xa28]
710011fd14  adrp x9,0x71043ac000
710011fd18  add x9,x9,#0xacd
710011fd1c  str x9,[x19, #0x40]
710011fd20  mov w9,#0x4
710011fd24  stp x8,xzr,[x19, #0x30]
710011fd28  mov w8,#0x1f40000
710011fd2c  ldp x29,x30,[sp, #0x50]
710011fd30  ldr x21,[sp, #0x30]
710011fd34  ldp x20,x19,[sp, #0x40]
710011fd38  orr x0,x8,x9
710011fd3c  add sp,sp,#0x60
710011fd40  ret
