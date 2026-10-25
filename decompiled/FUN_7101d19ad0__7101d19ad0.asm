// addr:      7101d19ad0
// offset:    0x1d19ad0
// name:      FUN_7101d19ad0
// mangled:   
// size:      128

7101d19ad0  str x19,[sp, #-0x20]!
7101d19ad4  stp x29,x30,[sp, #0x10]
7101d19ad8  add x29,sp,#0x10
7101d19adc  ldr w8,[x0, #0xcc]
7101d19ae0  mov x19,x0
7101d19ae4  cbnz w8,0x7101d19b00
7101d19ae8  ldr x8,[x19, #0xd8]
7101d19aec  ldr x0,[x8, #0x8]
7101d19af0  fmov s0,0x3f800000
7101d19af4  adrp x1,0x71042d6000
7101d19af8  add x1,x1,#0x4cd
7101d19afc  bl 0x7103778300
7101d19b00  ldr w8,[x19, #0xf8]
7101d19b04  cmp w8,#0x9
7101d19b08  b.gt 0x7101d19b40
7101d19b0c  ldr x8,[x19, #0xd8]
7101d19b10  ldr x0,[x8, #0x8]
7101d19b14  fmov s0,0x3f800000
7101d19b18  adrp x1,0x710439d000
7101d19b1c  add x1,x1,#0x677
7101d19b20  bl 0x7103778300
7101d19b24  ldrsw x8,[x19, #0xc4]
7101d19b28  cmp w8,#0x13
7101d19b2c  b.cs 0x7101d19b4c
7101d19b30  add x8,x19,x8, LSL #0x2
7101d19b34  ldr w9,[x8, #0x78]
7101d19b38  add w9,w9,#0x1
7101d19b3c  str w9,[x8, #0x78]
7101d19b40  ldp x29,x30,[sp, #0x10]
7101d19b44  ldr x19,[sp], #0x20
7101d19b48  ret
7101d19b4c  bl 0x71039c2650
