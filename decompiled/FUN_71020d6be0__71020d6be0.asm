// addr:      71020d6be0
// offset:    0x20d6be0
// name:      FUN_71020d6be0
// mangled:   
// size:      144

71020d6be0  stp x20,x19,[sp, #-0x20]!
71020d6be4  stp x29,x30,[sp, #0x10]
71020d6be8  add x29,sp,#0x10
71020d6bec  and w2,w2,#0x1
71020d6bf0  mov x19,x1
71020d6bf4  mov x20,x0
71020d6bf8  bl 0x71020d4810
71020d6bfc  ldr x8,[x19, #0x10]
71020d6c00  adrp x9,0x71020d6000
71020d6c04  add x9,x9,#0xb40
71020d6c08  str x9,[x8]
71020d6c0c  mov w9,#0x2
71020d6c10  str w9,[x8, #0x8]
71020d6c14  ldr x8,[x19, #0x10]
71020d6c18  add x9,x8,#0x10
71020d6c1c  sub x1,x8,#0x10
71020d6c20  adrp x2,0x710430c000
71020d6c24  add x2,x2,#0x66a
71020d6c28  mov x0,x19
71020d6c2c  str x9,[x19, #0x10]
71020d6c30  bl 0x71038f5390
71020d6c34  ldrsw x8,[x20, #0x18]
71020d6c38  ldr x9,[x19, #0x10]
71020d6c3c  mov w10,#0x13
71020d6c40  str x8,[x9]
71020d6c44  str w10,[x9, #0x8]
71020d6c48  ldr x8,[x19, #0x10]
71020d6c4c  add x9,x8,#0x10
71020d6c50  str x9,[x19, #0x10]
71020d6c54  sub x1,x8,#0x10
71020d6c58  ldp x29,x30,[sp, #0x10]
71020d6c5c  adrp x2,0x710434b000
71020d6c60  add x2,x2,#0x477
71020d6c64  mov x0,x19
71020d6c68  ldp x20,x19,[sp], #0x20
71020d6c6c  b 0x71038f5390
