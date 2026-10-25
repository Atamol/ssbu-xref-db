// addr:      7101ef8ec0
// offset:    0x1ef8ec0
// name:      FUN_7101ef8ec0
// mangled:   
// size:      120

7101ef8ec0  str x19,[sp, #-0x20]!
7101ef8ec4  stp x29,x30,[sp, #0x10]
7101ef8ec8  add x29,sp,#0x10
7101ef8ecc  mov x19,x0
7101ef8ed0  ldr w8,[x0, #0x204]
7101ef8ed4  ldr x0,[x0, #0x228]
7101ef8ed8  cbz w8,0x7101ef8f20
7101ef8edc  ldr x0,[x0, #0x8]
7101ef8ee0  cbz x0,0x7101ef8f04
7101ef8ee4  adrp x1,0x7104270000
7101ef8ee8  add x1,x1,#0x7fe
7101ef8eec  bl 0x71037964b0
7101ef8ef0  cbz x0,0x7101ef8f04
7101ef8ef4  ldr x8,[x0]
7101ef8ef8  ldr x8,[x8, #0x138]
7101ef8efc  blr x8
7101ef8f00  tbz w0,#0x0,0x7101ef8f14
7101ef8f04  ldr w8,[x19, #0x1fc]
7101ef8f08  subs w8,w8,#0x1
7101ef8f0c  b.lt 0x7101ef8f14
7101ef8f10  str w8,[x19, #0x1fc]
7101ef8f14  ldp x29,x30,[sp, #0x10]
7101ef8f18  ldr x19,[sp], #0x20
7101ef8f1c  ret
7101ef8f20  ldp x29,x30,[sp, #0x10]
7101ef8f24  adrp x1,0x7104270000
7101ef8f28  add x1,x1,#0x7fe
7101ef8f2c  fmov s0,0x3f800000
7101ef8f30  ldr x19,[sp], #0x20
7101ef8f34  b 0x7103778300
