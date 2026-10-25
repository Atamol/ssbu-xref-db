// addr:      7100256a60
// offset:    0x256a60
// name:      FUN_7100256a60
// mangled:   
// size:      52

7100256a60  mov x0,x8
7100256a64  adrp x8,0x71052a4000
7100256a68  ldr x8,[x8, #0xd80]
7100256a6c  mov x9,x0
7100256a70  add x8,x8,#0x10
7100256a74  adrp x1,0x71043df000
7100256a78  add x1,x1,#0x5e3
7100256a7c  mov x2,#-0x1
7100256a80  str x8,[x0]
7100256a84  strb wzr,[x9, #0x8]!
7100256a88  mov w8,#0x10
7100256a8c  stp x9,x8,[x0, #0x18]
7100256a90  b 0x71001b47e0
