// addr:      71001a3920
// offset:    0x1a3920
// name:      FUN_71001a3920
// mangled:   
// size:      52

71001a3920  stur xzr,[x0, #0x64]
71001a3924  adrp x8,0x71052a6000
71001a3928  ldr x8,[x8, #0x770]
71001a392c  mov w9,#0xfd
71001a3930  movk w9,#0x3, LSL #16
71001a3934  str w9,[x0, #0xb8]
71001a3938  adrp x9,0x71042b3000
71001a393c  add x9,x9,#0x79a
71001a3940  stur xzr,[x0, #0x6c]
71001a3944  stp x8,xzr,[x0, #0x30]
71001a3948  str x9,[x0, #0x40]
71001a394c  orr w0,wzr,#0x3
71001a3950  ret
