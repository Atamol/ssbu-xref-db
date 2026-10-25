// addr:      7100122730
// offset:    0x122730
// name:      FUN_7100122730
// mangled:   
// size:      32

7100122730  adrp x8,0x71052a4000
7100122734  ldr x8,[x8, #0xfc8]
7100122738  adrp x9,0x71043ce000
710012273c  add x9,x9,#0x72b
7100122740  str x9,[x0, #0x40]
7100122744  stp x8,xzr,[x0, #0x30]
7100122748  mov x0,xzr
710012274c  ret
