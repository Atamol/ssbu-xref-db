// addr:      710017b0f0
// offset:    0x17b0f0
// name:      FUN_710017b0f0
// mangled:   
// size:      136

710017b0f0  sub sp,sp,#0x40
710017b0f4  stp x20,x19,[sp, #0x20]
710017b0f8  stp x29,x30,[sp, #0x30]
710017b0fc  add x29,sp,#0x30
710017b100  str x1,[x0, #0x98]
710017b104  mov x20,x8
710017b108  ldr x8,[x1]
710017b10c  ldr x8,[x8, #0x168]
710017b110  mov x19,x0
710017b114  mov x0,x1
710017b118  mov x1,x2
710017b11c  blr x8
710017b120  adrp x8,0x71052a6000
710017b124  ldr x8,[x8, #0x338]
710017b128  adrp x9,0x71042a2000
710017b12c  add x9,x9,#0x3da
710017b130  stp xzr,x9,[x19, #0x38]
710017b134  str x8,[x19, #0x30]
710017b138  add x8,sp,#0x8
710017b13c  orr x19,x8,#0x4
710017b140  mov x0,x19
710017b144  str wzr,[sp, #0x8]
710017b148  bl 0x71039c0a80
710017b14c  add x1,sp,#0x18
710017b150  mov x0,x19
710017b154  str wzr,[sp, #0x18]
710017b158  bl 0x71039c0a90
710017b15c  add x1,sp,#0x8
710017b160  mov x0,x20
710017b164  bl 0x71000bce50
710017b168  ldp x29,x30,[sp, #0x30]
710017b16c  ldp x20,x19,[sp, #0x20]
710017b170  add sp,sp,#0x40
710017b174  ret
