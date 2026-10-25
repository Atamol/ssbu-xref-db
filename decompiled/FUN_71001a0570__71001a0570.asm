// addr:      71001a0570
// offset:    0x1a0570
// name:      FUN_71001a0570
// mangled:   
// size:      32

71001a0570  adrp x8,0x71052a6000
71001a0574  ldr x8,[x8, #0x720]
71001a0578  adrp x9,0x710435a000
71001a057c  add x9,x9,#0x978
71001a0580  str x9,[x0, #0x40]
71001a0584  stp x8,xzr,[x0, #0x30]
71001a0588  mov x0,xzr
71001a058c  ret
