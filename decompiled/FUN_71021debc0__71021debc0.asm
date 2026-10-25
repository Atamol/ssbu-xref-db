// addr:      71021debc0
// offset:    0x21debc0
// name:      FUN_71021debc0
// mangled:   
// size:      144

71021debc0  stp x20,x19,[sp, #-0x20]!
71021debc4  stp x29,x30,[sp, #0x10]
71021debc8  add x29,sp,#0x10
71021debcc  and w2,w2,#0x1
71021debd0  mov x19,x1
71021debd4  mov x20,x0
71021debd8  bl 0x7101ff91a0
71021debdc  ldr x8,[x19, #0x10]
71021debe0  adrp x9,0x71021de000
71021debe4  add x9,x9,#0xb10
71021debe8  str x9,[x8]
71021debec  mov w9,#0x2
71021debf0  str w9,[x8, #0x8]
71021debf4  ldr x8,[x19, #0x10]
71021debf8  add x9,x8,#0x10
71021debfc  sub x1,x8,#0x10
71021dec00  adrp x2,0x710430c000
71021dec04  add x2,x2,#0x66a
71021dec08  mov x0,x19
71021dec0c  str x9,[x19, #0x10]
71021dec10  bl 0x71038f5390
71021dec14  ldrsw x8,[x20, #0x2c]
71021dec18  ldr x9,[x19, #0x10]
71021dec1c  mov w10,#0x13
71021dec20  str x8,[x9]
71021dec24  str w10,[x9, #0x8]
71021dec28  ldr x8,[x19, #0x10]
71021dec2c  add x9,x8,#0x10
71021dec30  str x9,[x19, #0x10]
71021dec34  sub x1,x8,#0x10
71021dec38  ldp x29,x30,[sp, #0x10]
71021dec3c  adrp x2,0x71043c7000
71021dec40  add x2,x2,#0xc26
71021dec44  mov x0,x19
71021dec48  ldp x20,x19,[sp], #0x20
71021dec4c  b 0x71038f5390
