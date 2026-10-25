// addr:      710017a450
// offset:    0x17a450
// name:      FUN_710017a450
// mangled:   
// size:      68

710017a450  str x19,[sp, #-0x20]!
710017a454  stp x29,x30,[sp, #0x10]
710017a458  add x29,sp,#0x10
710017a45c  mov x19,x0
710017a460  ldr x0,[x0, #0x138]
710017a464  ldr x8,[x0]
710017a468  ldr x8,[x8, #0x170]
710017a46c  blr x8
710017a470  adrp x8,0x71052a5000
710017a474  ldr x8,[x8, #0x208]
710017a478  stp x8,xzr,[x19, #0x30]
710017a47c  adrp x8,0x7104329000
710017a480  add x8,x8,#0x25e
710017a484  str x8,[x19, #0x40]
710017a488  ldp x29,x30,[sp, #0x10]
710017a48c  ldr x19,[sp], #0x20
710017a490  ret
