// addr:      71001b4200
// offset:    0x1b4200
// name:      FUN_71001b4200
// mangled:   
// size:      32

71001b4200  ldr w8,[x1]
71001b4204  adrp x9,0x710426f000
71001b4208  add x9,x9,#0x50f
71001b420c  str x9,[x0, #0x8]
71001b4210  str w8,[x0]
71001b4214  mov w8,#0x66
71001b4218  str w8,[x0, #0x10]
71001b421c  ret
