// addr:      71001850a0
// offset:    0x1850a0
// name:      FUN_71001850a0
// mangled:   
// size:      52

71001850a0  ldr w9,[x0, #0x188]
71001850a4  cbz w9,0x71001850cc
71001850a8  adrp x9,0x71052a6000
71001850ac  ldr x9,[x9, #0x4d8]
71001850b0  mov x8,x0
71001850b4  mov x0,xzr
71001850b8  stp x9,xzr,[x8, #0x30]
71001850bc  adrp x9,0x710437b000
71001850c0  add x9,x9,#0xc32
71001850c4  str x9,[x8, #0x40]
71001850c8  ret
71001850cc  mov w0,#0x5
71001850d0  ret
