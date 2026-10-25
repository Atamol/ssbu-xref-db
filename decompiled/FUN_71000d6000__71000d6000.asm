// addr:      71000d6000
// offset:    0xd6000
// name:      FUN_71000d6000
// mangled:   
// size:      32

71000d6000  adrp x8,0x71052a5000
71000d6004  ldr x8,[x8, #0x28]
71000d6008  adrp x9,0x7104421000
71000d600c  add x9,x9,#0x52c
71000d6010  str x9,[x0, #0x40]
71000d6014  stp x8,xzr,[x0, #0x30]
71000d6018  mov x0,xzr
71000d601c  ret
