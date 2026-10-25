// addr:      710016ea60
// offset:    0x16ea60
// name:      FUN_710016ea60
// mangled:   
// size:      268

710016ea60  sub sp,sp,#0x60
710016ea64  stp x22,x21,[sp, #0x30]
710016ea68  stp x20,x19,[sp, #0x40]
710016ea6c  stp x29,x30,[sp, #0x50]
710016ea70  add x29,sp,#0x50
710016ea74  mov x19,x8
710016ea78  ldp x8,x9,[x2]
710016ea7c  str x8,[x0, #0x290]
710016ea80  add x8,sp,#0x18
710016ea84  orr x22,x8,#0x4
710016ea88  mov x20,x0
710016ea8c  str x9,[x0, #0x298]
710016ea90  str wzr,[sp, #0x18]
710016ea94  mov x0,x22
710016ea98  mov x21,x1
710016ea9c  bl 0x71039c0a80
710016eaa0  add x1,sp,#0x8
710016eaa4  mov x0,x22
710016eaa8  str wzr,[sp, #0x8]
710016eaac  bl 0x71039c0a90
710016eab0  add x8,sp,#0x8
710016eab4  mov x0,x20
710016eab8  bl 0x710016eb70
710016eabc  add x0,sp,#0x18
710016eac0  add x1,sp,#0x8
710016eac4  bl 0x71000bcf30
710016eac8  ldr w8,[sp, #0x18]
710016eacc  cbz w8,0x710016ead8
710016ead0  add x1,sp,#0x18
710016ead4  b 0x710016eb50
710016ead8  add x8,sp,#0x8
710016eadc  orr w2,wzr,#0x7
710016eae0  mov x0,x20
710016eae4  mov x1,x21
710016eae8  add x22,sp,#0x8
710016eaec  bl 0x7100172d30
710016eaf0  add x0,sp,#0x18
710016eaf4  add x1,sp,#0x8
710016eaf8  bl 0x71000bcf30
710016eafc  ldr w8,[sp, #0x18]
710016eb00  cbz w8,0x710016eb14
710016eb04  mov w8,#0xc08
710016eb08  movk w8,#0x1, LSL #16
710016eb0c  str w8,[sp, #0x8]
710016eb10  b 0x710016eb30
710016eb14  adrp x8,0x71052a6000
710016eb18  ldr x8,[x8, #0x130]
710016eb1c  adrp x9,0x710424e000
710016eb20  add x9,x9,#0x95c
710016eb24  str x9,[x20, #0x40]
710016eb28  stp x8,xzr,[x20, #0x30]
710016eb2c  str wzr,[sp, #0x8]
710016eb30  orr x20,x22,#0x4
710016eb34  mov x0,x20
710016eb38  bl 0x71039c0a80
710016eb3c  add x1,sp,#0x28
710016eb40  mov x0,x20
710016eb44  str wzr,[sp, #0x28]
710016eb48  bl 0x71039c0a90
710016eb4c  add x1,sp,#0x8
710016eb50  mov x0,x19
710016eb54  bl 0x71000bce50
710016eb58  ldp x29,x30,[sp, #0x50]
710016eb5c  ldp x20,x19,[sp, #0x40]
710016eb60  ldp x22,x21,[sp, #0x30]
710016eb64  add sp,sp,#0x60
710016eb68  ret
