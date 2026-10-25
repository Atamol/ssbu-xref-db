// addr:      710010cb80
// offset:    0x10cb80
// name:      FUN_710010cb80
// mangled:   
// size:      160

710010cb80  sub sp,sp,#0x40
710010cb84  stp x20,x19,[sp, #0x20]
710010cb88  stp x29,x30,[sp, #0x30]
710010cb8c  add x29,sp,#0x30
710010cb90  mov x19,x8
710010cb94  adrp x8,0x71052a5000
710010cb98  ldr x8,[x8, #0x80]
710010cb9c  ldr x8,[x8]
710010cba0  ldrb w9,[x8, #0x162]
710010cba4  add x8,x8,x9, LSL #0x3
710010cba8  ldr x8,[x8, #0x168]
710010cbac  str x8,[x0, #0x90]
710010cbb0  cbz x8,0x710010cbd8
710010cbb4  adrp x8,0x71052a5000
710010cbb8  ldr x8,[x8, #0x6a8]
710010cbbc  adrp x9,0x710424e000
710010cbc0  add x9,x9,#0x82a
710010cbc4  str w1,[x0, #0x98]
710010cbc8  str x8,[x0, #0x30]
710010cbcc  stp xzr,x9,[x0, #0x38]
710010cbd0  str wzr,[sp, #0x8]
710010cbd4  b 0x710010cbe4
710010cbd8  mov w8,#0xc08
710010cbdc  movk w8,#0x1, LSL #16
710010cbe0  str w8,[sp, #0x8]
710010cbe4  add x8,sp,#0x8
710010cbe8  orr x20,x8,#0x4
710010cbec  mov x0,x20
710010cbf0  bl 0x71039c0a80
710010cbf4  add x1,sp,#0x18
710010cbf8  mov x0,x20
710010cbfc  str wzr,[sp, #0x18]
710010cc00  bl 0x71039c0a90
710010cc04  add x1,sp,#0x8
710010cc08  mov x0,x19
710010cc0c  bl 0x71000bce50
710010cc10  ldp x29,x30,[sp, #0x30]
710010cc14  ldp x20,x19,[sp, #0x20]
710010cc18  add sp,sp,#0x40
710010cc1c  ret
