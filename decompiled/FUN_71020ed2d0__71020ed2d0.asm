// addr:      71020ed2d0
// offset:    0x20ed2d0
// name:      FUN_71020ed2d0
// mangled:   
// size:      144

71020ed2d0  stp x20,x19,[sp, #-0x20]!
71020ed2d4  stp x29,x30,[sp, #0x10]
71020ed2d8  add x29,sp,#0x10
71020ed2dc  and w2,w2,#0x1
71020ed2e0  mov x19,x1
71020ed2e4  mov x20,x0
71020ed2e8  bl 0x71020d4810
71020ed2ec  ldr x8,[x19, #0x10]
71020ed2f0  adrp x9,0x71020ed000
71020ed2f4  add x9,x9,#0x230
71020ed2f8  str x9,[x8]
71020ed2fc  mov w9,#0x2
71020ed300  str w9,[x8, #0x8]
71020ed304  ldr x8,[x19, #0x10]
71020ed308  add x9,x8,#0x10
71020ed30c  sub x1,x8,#0x10
71020ed310  adrp x2,0x710430c000
71020ed314  add x2,x2,#0x66a
71020ed318  mov x0,x19
71020ed31c  str x9,[x19, #0x10]
71020ed320  bl 0x71038f5390
71020ed324  ldrb w8,[x20, #0x18]
71020ed328  ldr x9,[x19, #0x10]
71020ed32c  mov w10,#0x1
71020ed330  str w8,[x9]
71020ed334  str w10,[x9, #0x8]
71020ed338  ldr x8,[x19, #0x10]
71020ed33c  add x9,x8,#0x10
71020ed340  str x9,[x19, #0x10]
71020ed344  sub x1,x8,#0x10
71020ed348  ldp x29,x30,[sp, #0x10]
71020ed34c  adrp x2,0x71042b5000
71020ed350  add x2,x2,#0x505
71020ed354  mov x0,x19
71020ed358  ldp x20,x19,[sp], #0x20
71020ed35c  b 0x71038f5390
