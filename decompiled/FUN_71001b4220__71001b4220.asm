// addr:      71001b4220
// offset:    0x1b4220
// name:      FUN_71001b4220
// mangled:   
// size:      52

71001b4220  ldrb w10,[x1]
71001b4224  orr w8,wzr,#0x10001
71001b4228  mov w9,#0x1
71001b422c  movk w9,#0x8001, LSL #16
71001b4230  adrp x11,0x710426f000
71001b4234  add x11,x11,#0x50f
71001b4238  str x11,[x0, #0x8]
71001b423c  cmp w10,#0x0
71001b4240  csel w8,w9,w8,eq
71001b4244  str w8,[x0]
71001b4248  mov w8,#0x74
71001b424c  str w8,[x0, #0x10]
71001b4250  ret
