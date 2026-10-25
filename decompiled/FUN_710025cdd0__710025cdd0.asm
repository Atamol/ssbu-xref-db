// addr:      710025cdd0
// offset:    0x25cdd0
// name:      FUN_710025cdd0
// mangled:   
// size:      76

710025cdd0  stp x20,x19,[sp, #-0x20]!
710025cdd4  stp x29,x30,[sp, #0x10]
710025cdd8  add x29,sp,#0x10
710025cddc  mov w20,#0x6e
710025cde0  mov w1,w20
710025cde4  mov x19,x0
710025cde8  bl 0x7100234fb0
710025cdec  adrp x8,0x71052a7000
710025cdf0  ldr x8,[x8, #0xdb0]
710025cdf4  add x8,x8,#0x10
710025cdf8  str x8,[x19], #0x20
710025cdfc  mov x0,x19
710025ce00  mov w1,w20
710025ce04  bl 0x710025eaf0
710025ce08  ldp x29,x30,[sp, #0x10]
710025ce0c  adrp x0,0x7104f16000
710025ce10  add x0,x0,#0xec3
710025ce14  ldp x20,x19,[sp], #0x20
710025ce18  b 0x71039c0530
