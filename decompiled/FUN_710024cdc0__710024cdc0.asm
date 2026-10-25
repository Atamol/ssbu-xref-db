// addr:      710024cdc0
// offset:    0x24cdc0
// name:      FUN_710024cdc0
// mangled:   
// size:      76

710024cdc0  str x19,[sp, #-0x20]!
710024cdc4  stp x29,x30,[sp, #0x10]
710024cdc8  add x29,sp,#0x10
710024cdcc  ldr x0,[x1, #0x18]
710024cdd0  mov x19,x1
710024cdd4  adrp x1,0x7104349000
710024cdd8  add x1,x1,#0x84f
710024cddc  bl 0x71001b4e00
710024cde0  tbz w0,#0x0,0x710024cdf4
710024cde4  ldp x29,x30,[sp, #0x10]
710024cde8  mov w0,#0x1
710024cdec  ldr x19,[sp], #0x20
710024cdf0  ret
710024cdf4  ldr x0,[x19, #0x18]
710024cdf8  ldp x29,x30,[sp, #0x10]
710024cdfc  adrp x1,0x710425e000
710024ce00  add x1,x1,#0x876
710024ce04  ldr x19,[sp], #0x20
710024ce08  b 0x71001b4e00
