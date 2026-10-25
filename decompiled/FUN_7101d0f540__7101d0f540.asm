// addr:      7101d0f540
// offset:    0x1d0f540
// name:      FUN_7101d0f540
// mangled:   
// size:      200

7101d0f540  stp x29,x30,[sp, #-0x10]!
7101d0f544  mov x29,sp
7101d0f548  sub w8,w2,#0x1
7101d0f54c  mov w10,w3
7101d0f550  cmp w8,#0x3
7101d0f554  b.hi 0x7101d0f588
7101d0f558  adrp x9,0x71044fa000
7101d0f55c  add x9,x9,#0x1fc
7101d0f560  ldrsw x8,[x9, x8, LSL #0x2]
7101d0f564  add x8,x8,x9
7101d0f568  br x8
7101d0f56c  adrp x9,0x7104422000
7101d0f570  add x9,x9,#0x5c0
7101d0f574  mov x8,x0
7101d0f578  mov x0,x9
7101d0f57c  mov w1,w10
7101d0f580  ldp x29,x30,[sp], #0x10
7101d0f584  b 0x71003a4ca0
7101d0f588  cmp w10,#0x4
7101d0f58c  b.cs 0x7101d0f604
7101d0f590  ldr w2,[x1, #0x18]
7101d0f594  add x8,x1,w10, SXTW  #0x2
7101d0f598  adrp x9,0x710424f000
7101d0f59c  add x9,x9,#0x756
7101d0f5a0  b 0x7101d0f5ec
7101d0f5a4  ldr w2,[x1, #0x1c]
7101d0f5a8  adrp x9,0x7104280000
7101d0f5ac  add x9,x9,#0xbda
7101d0f5b0  b 0x7101d0f5c0
7101d0f5b4  ldr w2,[x1, #0x24]
7101d0f5b8  adrp x9,0x7104270000
7101d0f5bc  add x9,x9,#0x11c
7101d0f5c0  mov x8,x0
7101d0f5c4  mov x0,x9
7101d0f5c8  mov w1,w10
7101d0f5cc  ldp x29,x30,[sp], #0x10
7101d0f5d0  b 0x71003a4ca0
7101d0f5d4  cmp w10,#0x4
7101d0f5d8  b.cs 0x7101d0f604
7101d0f5dc  ldr w2,[x1, #0x18]
7101d0f5e0  add x8,x1,w10, SXTW  #0x2
7101d0f5e4  adrp x9,0x71042b4000
7101d0f5e8  add x9,x9,#0x5a2
7101d0f5ec  ldr w3,[x8, #0x28]
7101d0f5f0  mov x8,x0
7101d0f5f4  mov x0,x9
7101d0f5f8  mov w1,w10
7101d0f5fc  ldp x29,x30,[sp], #0x10
7101d0f600  b 0x71003a4ca0
7101d0f604  bl 0x71039c2650
