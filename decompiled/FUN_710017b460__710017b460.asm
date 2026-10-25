// addr:      710017b460
// offset:    0x17b460
// name:      FUN_710017b460
// mangled:   
// size:      112

710017b460  sub sp,sp,#0x40
710017b464  stp x20,x19,[sp, #0x20]
710017b468  stp x29,x30,[sp, #0x30]
710017b46c  add x29,sp,#0x30
710017b470  mov x19,x8
710017b474  adrp x8,0x71052a6000
710017b478  ldr x8,[x8, #0x348]
710017b47c  str x1,[x0, #0x98]
710017b480  str x8,[x0, #0x30]
710017b484  add x8,sp,#0x8
710017b488  adrp x9,0x7104307000
710017b48c  add x9,x9,#0x985
710017b490  orr x20,x8,#0x4
710017b494  stp xzr,x9,[x0, #0x38]
710017b498  str wzr,[sp, #0x8]
710017b49c  mov x0,x20
710017b4a0  bl 0x71039c0a80
710017b4a4  add x1,sp,#0x18
710017b4a8  mov x0,x20
710017b4ac  str wzr,[sp, #0x18]
710017b4b0  bl 0x71039c0a90
710017b4b4  add x1,sp,#0x8
710017b4b8  mov x0,x19
710017b4bc  bl 0x71000bce50
710017b4c0  ldp x29,x30,[sp, #0x30]
710017b4c4  ldp x20,x19,[sp, #0x20]
710017b4c8  add sp,sp,#0x40
710017b4cc  ret
