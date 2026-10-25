// addr:      710016fbb0
// offset:    0x16fbb0
// name:      FUN_710016fbb0
// mangled:   
// size:      268

710016fbb0  sub sp,sp,#0x60
710016fbb4  stp x22,x21,[sp, #0x30]
710016fbb8  stp x20,x19,[sp, #0x40]
710016fbbc  stp x29,x30,[sp, #0x50]
710016fbc0  add x29,sp,#0x50
710016fbc4  mov x19,x8
710016fbc8  ldp x8,x9,[x2]
710016fbcc  str x8,[x0, #0x290]
710016fbd0  add x8,sp,#0x18
710016fbd4  orr x22,x8,#0x4
710016fbd8  mov x20,x0
710016fbdc  str x9,[x0, #0x298]
710016fbe0  str wzr,[sp, #0x18]
710016fbe4  mov x0,x22
710016fbe8  mov x21,x1
710016fbec  bl 0x71039c0a80
710016fbf0  add x1,sp,#0x8
710016fbf4  mov x0,x22
710016fbf8  str wzr,[sp, #0x8]
710016fbfc  bl 0x71039c0a90
710016fc00  add x8,sp,#0x8
710016fc04  mov x0,x20
710016fc08  bl 0x710016eb70
710016fc0c  add x0,sp,#0x18
710016fc10  add x1,sp,#0x8
710016fc14  bl 0x71000bcf30
710016fc18  ldr w8,[sp, #0x18]
710016fc1c  cbz w8,0x710016fc28
710016fc20  add x1,sp,#0x18
710016fc24  b 0x710016fca0
710016fc28  add x8,sp,#0x8
710016fc2c  orr w2,wzr,#0x7
710016fc30  mov x0,x20
710016fc34  mov x1,x21
710016fc38  add x22,sp,#0x8
710016fc3c  bl 0x7100172d30
710016fc40  add x0,sp,#0x18
710016fc44  add x1,sp,#0x8
710016fc48  bl 0x71000bcf30
710016fc4c  ldr w8,[sp, #0x18]
710016fc50  cbz w8,0x710016fc64
710016fc54  mov w8,#0xc08
710016fc58  movk w8,#0x1, LSL #16
710016fc5c  str w8,[sp, #0x8]
710016fc60  b 0x710016fc80
710016fc64  adrp x8,0x71052a6000
710016fc68  ldr x8,[x8, #0x150]
710016fc6c  adrp x9,0x710425e000
710016fc70  add x9,x9,#0x758
710016fc74  str x9,[x20, #0x40]
710016fc78  stp x8,xzr,[x20, #0x30]
710016fc7c  str wzr,[sp, #0x8]
710016fc80  orr x20,x22,#0x4
710016fc84  mov x0,x20
710016fc88  bl 0x71039c0a80
710016fc8c  add x1,sp,#0x28
710016fc90  mov x0,x20
710016fc94  str wzr,[sp, #0x28]
710016fc98  bl 0x71039c0a90
710016fc9c  add x1,sp,#0x8
710016fca0  mov x0,x19
710016fca4  bl 0x71000bce50
710016fca8  ldp x29,x30,[sp, #0x50]
710016fcac  ldp x20,x19,[sp, #0x40]
710016fcb0  ldp x22,x21,[sp, #0x30]
710016fcb4  add sp,sp,#0x60
710016fcb8  ret
