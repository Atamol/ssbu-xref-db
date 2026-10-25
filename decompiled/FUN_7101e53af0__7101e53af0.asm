// addr:      7101e53af0
// offset:    0x1e53af0
// name:      FUN_7101e53af0
// mangled:   
// size:      100

7101e53af0  str x19,[sp, #-0x20]!
7101e53af4  stp x29,x30,[sp, #0x10]
7101e53af8  add x29,sp,#0x10
7101e53afc  mov x19,x0
7101e53b00  ldr x0,[x0, #0x20]
7101e53b04  fmov s0,0xbf800000
7101e53b08  adrp x1,0x7104412000
7101e53b0c  add x1,x1,#0xf1d
7101e53b10  bl 0x7103778300
7101e53b14  mov x0,x19
7101e53b18  bl 0x7101e54b40
7101e53b1c  mov x0,x19
7101e53b20  bl 0x7101e54cc0
7101e53b24  mov x0,x19
7101e53b28  bl 0x7101e55c60
7101e53b2c  ldrsw x8,[x19, #0x16c]
7101e53b30  cmp w8,#0x13
7101e53b34  b.cs 0x7101e53b50
7101e53b38  add x8,x19,x8, LSL #0x2
7101e53b3c  orr w9,wzr,#0x3
7101e53b40  str w9,[x8, #0x120]
7101e53b44  ldp x29,x30,[sp, #0x10]
7101e53b48  ldr x19,[sp], #0x20
7101e53b4c  ret
7101e53b50  bl 0x71039c2650
