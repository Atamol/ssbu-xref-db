// addr:      71001b42a0
// offset:    0x1b42a0
// name:      FUN_71001b42a0
// mangled:   
// size:      52

71001b42a0  ldrb w11,[x1]
71001b42a4  orr w8,wzr,#0x10001
71001b42a8  mov w10,#0x1
71001b42ac  movk w10,#0x8001, LSL #16
71001b42b0  adrp x9,0x710426f000
71001b42b4  add x9,x9,#0x50f
71001b42b8  str x9,[x0, #0x8]
71001b42bc  cmp w11,#0x0
71001b42c0  csel w8,w10,w8,eq
71001b42c4  str w8,[x0]
71001b42c8  mov w8,#0x91
71001b42cc  str w8,[x0, #0x10]
71001b42d0  ret
