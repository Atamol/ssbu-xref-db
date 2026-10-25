// addr:      71026aeef0
// offset:    0x26aeef0
// name:      FUN_71026aeef0
// mangled:   
// size:      76

71026aeef0  stp x20,x19,[sp, #-0x20]!
71026aeef4  stp x29,x30,[sp, #0x10]
71026aeef8  add x29,sp,#0x10
71026aeefc  ldr x20,[x0, #0x8]
71026aef00  mov x19,x0
71026aef04  adrp x8,0x71050cd000
71026aef08  add x8,x8,#0xa00
71026aef0c  stp x8,xzr,[x0]
71026aef10  cbz x20,0x71026aef2c
71026aef14  ldr x0,[x20, #0x18]
71026aef18  cbz x0,0x71026aef24
71026aef1c  str x0,[x20, #0x20]
71026aef20  bl 0x710392eb40
71026aef24  mov x0,x20
71026aef28  bl 0x710392eb40
71026aef2c  ldp x29,x30,[sp, #0x10]
71026aef30  mov x0,x19
71026aef34  ldp x20,x19,[sp], #0x20
71026aef38  b 0x710392eb40
