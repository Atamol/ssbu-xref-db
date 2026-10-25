// addr:      71000f44e0
// offset:    0xf44e0
// name:      FUN_71000f44e0
// mangled:   
// size:      32

71000f44e0  adrp x8,0x71052a5000
71000f44e4  ldr x8,[x8, #0x190]
71000f44e8  adrp x9,0x71043bd000
71000f44ec  add x9,x9,#0x6e8
71000f44f0  str x9,[x0, #0x40]
71000f44f4  stp x8,xzr,[x0, #0x30]
71000f44f8  mov x0,xzr
71000f44fc  ret
