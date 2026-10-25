// addr:      71001b41d0
// offset:    0x1b41d0
// name:      FUN_71001b41d0
// mangled:   
// size:      36

71001b41d0  mov w8,#0x1
71001b41d4  movk w8,#0x8001, LSL #16
71001b41d8  str w8,[x0]
71001b41dc  adrp x8,0x710426f000
71001b41e0  add x8,x8,#0x50f
71001b41e4  str x8,[x0, #0x8]
71001b41e8  mov w8,#0x5f
71001b41ec  str w8,[x0, #0x10]
71001b41f0  ret
