// addr:      71000d5310
// offset:    0xd5310
// name:      FUN_71000d5310
// mangled:   
// size:      32

71000d5310  adrp x8,0x71052a4000
71000d5314  ldr x8,[x8, #0xfc0]
71000d5318  adrp x9,0x71042b3000
71000d531c  add x9,x9,#0x3f6
71000d5320  str x9,[x0, #0x40]
71000d5324  stp x8,xzr,[x0, #0x30]
71000d5328  mov x0,xzr
71000d532c  ret
