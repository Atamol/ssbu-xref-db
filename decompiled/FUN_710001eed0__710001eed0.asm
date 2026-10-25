// addr:      710001eed0
// offset:    0x1eed0
// name:      FUN_710001eed0
// mangled:   
// size:      100

710001eed0  mov x8,x0
710001eed4  ldr x0,[x0]
710001eed8  ldrb w9,[x0, #0x6c8]
710001eedc  cbz w9,0x710001eef0
710001eee0  ldrb w9,[x8, #0x817]
710001eee4  cbz w9,0x710001eef4
710001eee8  add x9,x8,#0x128
710001eeec  b 0x710001ef18
710001eef0  ret
710001eef4  ldrb w9,[x8, #0x816]
710001eef8  cbz w9,0x710001ef04
710001eefc  add x9,x8,#0x168
710001ef00  b 0x710001ef18
710001ef04  ldrb w9,[x8, #0x813]
710001ef08  add x10,x8,#0xe0
710001ef0c  add x11,x8,#0x108
710001ef10  cmp w9,#0x0
710001ef14  csel x9,x10,x11,eq
710001ef18  ldr x2,[x9]
710001ef1c  ldr x4,[x8, #0x190]
710001ef20  add x3,x8,#0x90
710001ef24  ldr x5,[x8, #0x68]
710001ef28  adrp x1,0x7104290000
710001ef2c  add x1,x1,#0x82a
710001ef30  b 0x7100015de0
