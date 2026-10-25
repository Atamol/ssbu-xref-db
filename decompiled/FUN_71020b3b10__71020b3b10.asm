// addr:      71020b3b10
// offset:    0x20b3b10
// name:      FUN_71020b3b10
// mangled:   
// size:      248

71020b3b10  stp x20,x19,[sp, #-0x20]!
71020b3b14  stp x29,x30,[sp, #0x10]
71020b3b18  add x29,sp,#0x10
71020b3b1c  mov w2,wzr
71020b3b20  mov x19,x1
71020b3b24  mov x20,x0
71020b3b28  bl 0x7101ff91a0
71020b3b2c  ldr x8,[x19, #0x10]
71020b3b30  adrp x9,0x71020b3000
71020b3b34  add x9,x9,#0xa60
71020b3b38  str x9,[x8]
71020b3b3c  mov w9,#0x2
71020b3b40  str w9,[x8, #0x8]
71020b3b44  ldr x8,[x19, #0x10]
71020b3b48  add x9,x8,#0x10
71020b3b4c  sub x1,x8,#0x10
71020b3b50  adrp x2,0x710430c000
71020b3b54  add x2,x2,#0x66a
71020b3b58  mov x0,x19
71020b3b5c  str x9,[x19, #0x10]
71020b3b60  bl 0x71038f5390
71020b3b64  ldr w8,[x20, #0x2c]
71020b3b68  ldr x9,[x19, #0x10]
71020b3b6c  str w8,[x9]
71020b3b70  orr w8,wzr,#0x3
71020b3b74  str w8,[x9, #0x8]
71020b3b78  ldr x8,[x19, #0x10]
71020b3b7c  add x9,x8,#0x10
71020b3b80  sub x1,x8,#0x10
71020b3b84  adrp x2,0x71043f1000
71020b3b88  add x2,x2,#0x970
71020b3b8c  mov x0,x19
71020b3b90  str x9,[x19, #0x10]
71020b3b94  bl 0x71038f5390
71020b3b98  ldrsw x8,[x20, #0x30]
71020b3b9c  ldr x9,[x19, #0x10]
71020b3ba0  str x8,[x9]
71020b3ba4  mov w8,#0x13
71020b3ba8  str w8,[x9, #0x8]
71020b3bac  ldr x8,[x19, #0x10]
71020b3bb0  add x9,x8,#0x10
71020b3bb4  sub x1,x8,#0x10
71020b3bb8  adrp x2,0x71042a4000
71020b3bbc  add x2,x2,#0x18b
71020b3bc0  mov x0,x19
71020b3bc4  str x9,[x19, #0x10]
71020b3bc8  bl 0x71038f5390
71020b3bcc  ldrb w8,[x20, #0x34]
71020b3bd0  ldr x9,[x19, #0x10]
71020b3bd4  mov w10,#0x1
71020b3bd8  str w8,[x9]
71020b3bdc  str w10,[x9, #0x8]
71020b3be0  ldr x8,[x19, #0x10]
71020b3be4  add x9,x8,#0x10
71020b3be8  str x9,[x19, #0x10]
71020b3bec  sub x1,x8,#0x10
71020b3bf0  ldp x29,x30,[sp, #0x10]
71020b3bf4  adrp x2,0x71043bf000
71020b3bf8  add x2,x2,#0x700
71020b3bfc  mov x0,x19
71020b3c00  ldp x20,x19,[sp], #0x20
71020b3c04  b 0x71038f5390
