// addr:      7100123c50
// offset:    0x123c50
// name:      FUN_7100123c50
// mangled:   
// size:      96

7100123c50  str x19,[sp, #-0x20]!
7100123c54  stp x29,x30,[sp, #0x10]
7100123c58  add x29,sp,#0x10
7100123c5c  ldr x8,[x0]
7100123c60  ldr x8,[x8, #0x30]
7100123c64  mov x19,x0
7100123c68  blr x8
7100123c6c  adrp x8,0x71052a5000
7100123c70  adrp x9,0x71052a5000
7100123c74  adrp x10,0x71042f6000
7100123c78  add x10,x10,#0xfff
7100123c7c  ldr x8,[x8, #0x758]
7100123c80  ldr x9,[x9, #0xae8]
7100123c84  adrp x11,0x71043df000
7100123c88  add x11,x11,#0x3fb
7100123c8c  tst w0,#0x1
7100123c90  csel x10,x11,x10,ne
7100123c94  str x10,[x19, #0x40]
7100123c98  mov x0,xzr
7100123c9c  csel x8,x9,x8,ne
7100123ca0  stp x8,xzr,[x19, #0x30]
7100123ca4  ldp x29,x30,[sp, #0x10]
7100123ca8  ldr x19,[sp], #0x20
7100123cac  ret
