// addr:      7100124fd0
// offset:    0x124fd0
// name:      FUN_7100124fd0
// mangled:   
// size:      92

7100124fd0  stp x20,x19,[sp, #-0x20]!
7100124fd4  stp x29,x30,[sp, #0x10]
7100124fd8  add x29,sp,#0x10
7100124fdc  adrp x8,0x71052a4000
7100124fe0  ldr x8,[x8, #0xc70]
7100124fe4  ldr x20,[x8]
7100124fe8  mov x19,x0
7100124fec  bl 0x71000bb680
7100124ff0  ldr x8,[x20, #0x30]
7100124ff4  ldr x9,[x0]
7100124ff8  mov w11,#0x7d0
7100124ffc  madd x8,x9,x11,x8
7100125000  adrp x10,0x71052a5000
7100125004  ldr x10,[x10, #0xb28]
7100125008  stp x10,xzr,[x19, #0x30]
710012500c  str x8,[x19, #0x1b0]
7100125010  adrp x8,0x71043ef000
7100125014  add x8,x8,#0xcdd
7100125018  str x8,[x19, #0x40]
710012501c  ldp x29,x30,[sp, #0x10]
7100125020  mov w0,#0x1
7100125024  ldp x20,x19,[sp], #0x20
7100125028  ret
