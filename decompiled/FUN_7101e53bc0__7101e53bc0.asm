// addr:      7101e53bc0
// offset:    0x1e53bc0
// name:      FUN_7101e53bc0
// mangled:   
// size:      100

7101e53bc0  str x19,[sp, #-0x20]!
7101e53bc4  stp x29,x30,[sp, #0x10]
7101e53bc8  add x29,sp,#0x10
7101e53bcc  mov x19,x0
7101e53bd0  ldr x0,[x0, #0x20]
7101e53bd4  fmov s0,0xbf800000
7101e53bd8  adrp x1,0x71042a3000
7101e53bdc  add x1,x1,#0x65e
7101e53be0  bl 0x7103778300
7101e53be4  mov x0,x19
7101e53be8  bl 0x7101e54b40
7101e53bec  mov x0,x19
7101e53bf0  bl 0x7101e54cc0
7101e53bf4  mov x0,x19
7101e53bf8  bl 0x7101e55c60
7101e53bfc  ldrsw x8,[x19, #0x16c]
7101e53c00  cmp w8,#0x13
7101e53c04  b.cs 0x7101e53c20
7101e53c08  add x8,x19,x8, LSL #0x2
7101e53c0c  orr w9,wzr,#0x3
7101e53c10  str w9,[x8, #0x120]
7101e53c14  ldp x29,x30,[sp, #0x10]
7101e53c18  ldr x19,[sp], #0x20
7101e53c1c  ret
7101e53c20  bl 0x71039c2650
