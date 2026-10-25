// addr:      71020b8c00
// offset:    0x20b8c00
// name:      FUN_71020b8c00
// mangled:   
// size:      144

71020b8c00  stp x20,x19,[sp, #-0x20]!
71020b8c04  stp x29,x30,[sp, #0x10]
71020b8c08  add x29,sp,#0x10
71020b8c0c  and w2,w2,#0x1
71020b8c10  mov x19,x1
71020b8c14  mov x20,x0
71020b8c18  bl 0x71020b6200
71020b8c1c  ldr x8,[x19, #0x10]
71020b8c20  adrp x9,0x71020b8000
71020b8c24  add x9,x9,#0xb10
71020b8c28  str x9,[x8]
71020b8c2c  mov w9,#0x2
71020b8c30  str w9,[x8, #0x8]
71020b8c34  ldr x8,[x19, #0x10]
71020b8c38  add x9,x8,#0x10
71020b8c3c  sub x1,x8,#0x10
71020b8c40  adrp x2,0x710430c000
71020b8c44  add x2,x2,#0x66a
71020b8c48  mov x0,x19
71020b8c4c  str x9,[x19, #0x10]
71020b8c50  bl 0x71038f5390
71020b8c54  ldr w8,[x20, #0x74]
71020b8c58  ldr x9,[x19, #0x10]
71020b8c5c  orr w10,wzr,#0x3
71020b8c60  str w8,[x9]
71020b8c64  str w10,[x9, #0x8]
71020b8c68  ldr x8,[x19, #0x10]
71020b8c6c  add x9,x8,#0x10
71020b8c70  str x9,[x19, #0x10]
71020b8c74  sub x1,x8,#0x10
71020b8c78  ldp x29,x30,[sp, #0x10]
71020b8c7c  adrp x2,0x710433b000
71020b8c80  add x2,x2,#0x3a0
71020b8c84  mov x0,x19
71020b8c88  ldp x20,x19,[sp], #0x20
71020b8c8c  b 0x71038f5390
