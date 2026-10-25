// addr:      7101d0e4a0
// offset:    0x1d0e4a0
// name:      FUN_7101d0e4a0
// mangled:   
// size:      236

7101d0e4a0  str d8,[sp, #-0x40]!
7101d0e4a4  str x23,[sp, #0x8]
7101d0e4a8  stp x22,x21,[sp, #0x10]
7101d0e4ac  stp x20,x19,[sp, #0x20]
7101d0e4b0  stp x29,x30,[sp, #0x30]
7101d0e4b4  add x29,sp,#0x30
7101d0e4b8  ldr x8,[x0, #0xf8]
7101d0e4bc  fmov s8,0x3f800000
7101d0e4c0  mov x19,x0
7101d0e4c4  ldr x0,[x8, #0x10]
7101d0e4c8  mov v0.16B,v8.16B
7101d0e4cc  adrp x20,0x7104308000
7101d0e4d0  add x20,x20,#0x701
7101d0e4d4  mov x1,x20
7101d0e4d8  bl 0x7103778300
7101d0e4dc  ldr x8,[x19, #0x100]
7101d0e4e0  ldr x0,[x8, #0x10]
7101d0e4e4  mov v0.16B,v8.16B
7101d0e4e8  mov x1,x20
7101d0e4ec  bl 0x7103778300
7101d0e4f0  ldr w8,[x19, #0x108]
7101d0e4f4  cmp w8,#0x1
7101d0e4f8  b.lt 0x7101d0e570
7101d0e4fc  mov x20,xzr
7101d0e500  adrp x21,0x71043cf000
7101d0e504  add x21,x21,#0x669
7101d0e508  adrp x22,0x7104291000
7101d0e50c  add x22,x22,#0xe70
7101d0e510  adrp x23,0x710424f000
7101d0e514  add x23,x23,#0x76a
7101d0e518  ldr x8,[x19, #0x100]
7101d0e51c  add x0,x8,#0x8
7101d0e520  mov x1,x21
7101d0e524  mov w2,w20
7101d0e528  bl 0x7103778430
7101d0e52c  cmp x20,#0x4
7101d0e530  b.cs 0x7101d0e588
7101d0e534  ldr x8,[x19, #0x100]
7101d0e538  add x9,x8,x20
7101d0e53c  strb wzr,[x9, #0x4c]
7101d0e540  ldrb w9,[x9, #0x48]
7101d0e544  add x0,x8,#0x8
7101d0e548  cbz w9,0x7101d0e554
7101d0e54c  mov x1,x23
7101d0e550  b 0x7101d0e558
7101d0e554  mov x1,x22
7101d0e558  mov w2,w20
7101d0e55c  bl 0x7103778430
7101d0e560  ldrsw x8,[x19, #0x108]
7101d0e564  add x20,x20,#0x1
7101d0e568  cmp x20,x8
7101d0e56c  b.lt 0x7101d0e518
7101d0e570  ldp x29,x30,[sp, #0x30]
7101d0e574  ldr x23,[sp, #0x8]
7101d0e578  ldp x20,x19,[sp, #0x20]
7101d0e57c  ldp x22,x21,[sp, #0x10]
7101d0e580  ldr d8,[sp], #0x40
7101d0e584  ret
7101d0e588  bl 0x71039c2650
