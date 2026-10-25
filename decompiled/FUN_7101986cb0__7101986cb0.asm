// addr:      7101986cb0
// offset:    0x1986cb0
// name:      FUN_7101986cb0
// mangled:   
// size:      76

7101986cb0  str x19,[sp, #-0x20]!
7101986cb4  stp x29,x30,[sp, #0x10]
7101986cb8  add x29,sp,#0x10
7101986cbc  mov x19,x0
7101986cc0  ldr x0,[x0, #0x18]
7101986cc4  fmov s0,0x3f800000
7101986cc8  adrp x1,0x710438c000
7101986ccc  add x1,x1,#0x1a5
7101986cd0  bl 0x7103778300
7101986cd4  ldrsw x8,[x19, #0x43c]
7101986cd8  cmp w8,#0x13
7101986cdc  b.cs 0x7101986cf8
7101986ce0  add x8,x19,x8, LSL #0x2
7101986ce4  orr w9,wzr,#0x6
7101986ce8  str w9,[x8, #0x3f0]
7101986cec  ldp x29,x30,[sp, #0x10]
7101986cf0  ldr x19,[sp], #0x20
7101986cf4  ret
7101986cf8  bl 0x71039c2650
