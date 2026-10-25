// addr:      71026b60b0
// offset:    0x26b60b0
// name:      FUN_71026b60b0
// mangled:   
// size:      100

71026b60b0  str x19,[sp, #-0x20]!
71026b60b4  stp x29,x30,[sp, #0x10]
71026b60b8  add x29,sp,#0x10
71026b60bc  adrp x8,0x71050cd000
71026b60c0  add x8,x8,#0xfc0
71026b60c4  str x8,[x0]
71026b60c8  ldrb w8,[x0, #0x5c]
71026b60cc  mov x19,x0
71026b60d0  cbz w8,0x71026b6104
71026b60d4  ldr x8,[x19, #0x50]
71026b60d8  cbz x8,0x71026b6104
71026b60dc  ldr w2,[x19, #0x58]
71026b60e0  cmn w2,#0x1
71026b60e4  b.eq 0x71026b6104
71026b60e8  ldr x8,[x8]
71026b60ec  ldr x0,[x8, #0x8]
71026b60f0  cbz x0,0x71026b6104
71026b60f4  ldr x8,[x0]
71026b60f8  ldr x8,[x8, #0x58]
71026b60fc  mov w1,#0x8
71026b6100  blr x8
71026b6104  ldp x29,x30,[sp, #0x10]
71026b6108  mov x0,x19
71026b610c  ldr x19,[sp], #0x20
71026b6110  b 0x710392eb40
