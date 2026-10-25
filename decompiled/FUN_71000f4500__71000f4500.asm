// addr:      71000f4500
// offset:    0xf4500
// name:      FUN_71000f4500
// mangled:   
// size:      32

71000f4500  adrp x8,0x71052a5000
71000f4504  ldr x8,[x8, #0x1b0]
71000f4508  adrp x9,0x7104339000
71000f450c  add x9,x9,#0x3ce
71000f4510  str x9,[x0, #0x40]
71000f4514  stp x8,xzr,[x0, #0x30]
71000f4518  mov w0,#0x5
71000f451c  ret
