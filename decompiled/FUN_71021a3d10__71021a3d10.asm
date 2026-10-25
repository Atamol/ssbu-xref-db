// addr:      71021a3d10
// offset:    0x21a3d10
// name:      FUN_71021a3d10
// mangled:   
// size:      144

71021a3d10  stp x20,x19,[sp, #-0x20]!
71021a3d14  stp x29,x30,[sp, #0x10]
71021a3d18  add x29,sp,#0x10
71021a3d1c  and w2,w2,#0x1
71021a3d20  mov x19,x1
71021a3d24  mov x20,x0
71021a3d28  bl 0x7101ff91a0
71021a3d2c  ldr x8,[x19, #0x10]
71021a3d30  adrp x9,0x71021a3000
71021a3d34  add x9,x9,#0xc60
71021a3d38  str x9,[x8]
71021a3d3c  mov w9,#0x2
71021a3d40  str w9,[x8, #0x8]
71021a3d44  ldr x8,[x19, #0x10]
71021a3d48  add x9,x8,#0x10
71021a3d4c  sub x1,x8,#0x10
71021a3d50  adrp x2,0x710430c000
71021a3d54  add x2,x2,#0x66a
71021a3d58  mov x0,x19
71021a3d5c  str x9,[x19, #0x10]
71021a3d60  bl 0x71038f5390
71021a3d64  ldrb w8,[x20, #0x29]
71021a3d68  ldr x9,[x19, #0x10]
71021a3d6c  mov w10,#0x1
71021a3d70  str w8,[x9]
71021a3d74  str w10,[x9, #0x8]
71021a3d78  ldr x8,[x19, #0x10]
71021a3d7c  add x9,x8,#0x10
71021a3d80  str x9,[x19, #0x10]
71021a3d84  sub x1,x8,#0x10
71021a3d88  ldp x29,x30,[sp, #0x10]
71021a3d8c  adrp x2,0x71043b6000
71021a3d90  add x2,x2,#0x852
71021a3d94  mov x0,x19
71021a3d98  ldp x20,x19,[sp], #0x20
71021a3d9c  b 0x71038f5390
