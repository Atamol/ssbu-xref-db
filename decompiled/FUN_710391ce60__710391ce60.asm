// addr:      710391ce60
// offset:    0x391ce60
// name:      FUN_710391ce60
// mangled:   
// size:      180

710391ce60  stp x29,x30,[sp, #-0x10]!
710391ce64  mov x29,sp
710391ce68  ldr w8,[x0, #0x2c]
710391ce6c  cmp w8,w1
710391ce70  b.le 0x710391cecc
710391ce74  add x8,x0,w1, SXTW  #0x4
710391ce78  ldr x2,[x8, #0x38]
710391ce7c  cmn x2,#0x1
710391ce80  b.eq 0x710391cef4
710391ce84  sxtw x9,w1
710391ce88  add x9,x0,x9, LSL #0x4
710391ce8c  ldr x8,[x0, #0x18]
710391ce90  ldr x1,[x9, #0x30]
710391ce94  cmn x2,#0x2
710391ce98  b.ne 0x710391cee8
710391ce9c  ldr x9,[x0]
710391cea0  add x10,x1,#0x1
710391cea4  sub x9,x10,x9
710391cea8  ldr x10,[x8, #0x10]
710391ceac  str x9,[x10]
710391ceb0  mov w9,#0x13
710391ceb4  str w9,[x10, #0x8]
710391ceb8  ldr x9,[x8, #0x10]
710391cebc  add x9,x9,#0x10
710391cec0  str x9,[x8, #0x10]
710391cec4  ldp x29,x30,[sp], #0x10
710391cec8  ret
710391cecc  ldr x0,[x0, #0x18]
710391ced0  cbnz w1,0x710391cf04
710391ced4  sub x8,x3,x2
710391ced8  mov x1,x2
710391cedc  mov x2,x8
710391cee0  ldp x29,x30,[sp], #0x10
710391cee4  b 0x71038f4a00
710391cee8  mov x0,x8
710391ceec  ldp x29,x30,[sp], #0x10
710391cef0  b 0x71038f4a00
710391cef4  ldr x0,[x0, #0x18]
710391cef8  adrp x1,0x7104328000
710391cefc  add x1,x1,#0xbd0
710391cf00  bl 0x71038f6c50
710391cf04  add w2,w1,#0x1
710391cf08  adrp x1,0x71043ac000
710391cf0c  add x1,x1,#0x4e6
710391cf10  bl 0x71038f6c50
