// addr:      7100109980
// offset:    0x109980
// name:      FUN_7100109980
// mangled:   
// size:      32

7100109980  adrp x8,0x71052a5000
7100109984  ldr x8,[x8, #0x5a0]
7100109988  adrp x9,0x71043ac000
710010998c  add x9,x9,#0xa3e
7100109990  str x9,[x0, #0x40]
7100109994  stp x8,xzr,[x0, #0x30]
7100109998  mov w0,#0x5
710010999c  ret
