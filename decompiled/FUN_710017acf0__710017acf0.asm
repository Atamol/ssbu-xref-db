// addr:      710017acf0
// offset:    0x17acf0
// name:      FUN_710017acf0
// mangled:   
// size:      68

710017acf0  str x19,[sp, #-0x20]!
710017acf4  stp x29,x30,[sp, #0x10]
710017acf8  add x29,sp,#0x10
710017acfc  mov x19,x0
710017ad00  ldr x0,[x0, #0xa0]
710017ad04  ldr x8,[x0]
710017ad08  ldr x8,[x8, #0x170]
710017ad0c  blr x8
710017ad10  adrp x8,0x71052a5000
710017ad14  ldr x8,[x8, #0x4f0]
710017ad18  stp x8,xzr,[x19, #0x30]
710017ad1c  adrp x8,0x7104318000
710017ad20  add x8,x8,#0x267
710017ad24  str x8,[x19, #0x40]
710017ad28  ldp x29,x30,[sp, #0x10]
710017ad2c  ldr x19,[sp], #0x20
710017ad30  ret
