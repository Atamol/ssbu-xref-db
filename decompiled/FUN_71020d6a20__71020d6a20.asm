// addr:      71020d6a20
// offset:    0x20d6a20
// name:      FUN_71020d6a20
// mangled:   
// size:      276

71020d6a20  sub sp,sp,#0x50
71020d6a24  str x21,[sp, #0x20]
71020d6a28  stp x20,x19,[sp, #0x30]
71020d6a2c  stp x29,x30,[sp, #0x40]
71020d6a30  add x29,sp,#0x40
71020d6a34  ldr x8,[x0, #0x18]
71020d6a38  ldr x8,[x8, #0x18]
71020d6a3c  mov x19,x0
71020d6a40  cmp x8,#0x1
71020d6a44  b.lt 0x71020d6a50
71020d6a48  mov x0,x19
71020d6a4c  bl 0x71038fec40
71020d6a50  mov x0,x19
71020d6a54  bl 0x710391e050
71020d6a58  ldr x8,[x19, #0x10]
71020d6a5c  mov w9,#0x45
71020d6a60  str w9,[x8, #0x8]
71020d6a64  str x0,[x8]
71020d6a68  ldr x8,[x19, #0x10]
71020d6a6c  mov x1,x0
71020d6a70  mov w3,#0x2
71020d6a74  mov x0,x19
71020d6a78  mov w2,wzr
71020d6a7c  mov w20,#0x2
71020d6a80  add x8,x8,#0x10
71020d6a84  str x8,[x19, #0x10]
71020d6a88  bl 0x710391d4c0
71020d6a8c  mov x8,#0x5000000000000000
71020d6a90  stp x8,x8,[sp, #0x8]
71020d6a94  adrp x8,0x71050b4000
71020d6a98  add x8,x8,#0x828
71020d6a9c  mov w21,#0x50000000
71020d6aa0  mov x0,sp
71020d6aa4  mov w2,#0x1
71020d6aa8  mov x1,x19
71020d6aac  str x8,[sp]
71020d6ab0  str w21,[sp, #0x18]
71020d6ab4  bl 0x71020d4810
71020d6ab8  ldr x8,[x19, #0x10]
71020d6abc  adrp x9,0x71020d6000
71020d6ac0  add x9,x9,#0xb40
71020d6ac4  str x9,[x8]
71020d6ac8  str w20,[x8, #0x8]
71020d6acc  ldr x8,[x19, #0x10]
71020d6ad0  add x9,x8,#0x10
71020d6ad4  sub x1,x8,#0x10
71020d6ad8  adrp x2,0x710430c000
71020d6adc  add x2,x2,#0x66a
71020d6ae0  mov x0,x19
71020d6ae4  str x9,[x19, #0x10]
71020d6ae8  bl 0x71038f5390
71020d6aec  ldr x8,[x19, #0x10]
71020d6af0  mov w9,#0x13
71020d6af4  str w9,[x8, #0x8]
71020d6af8  str x21,[x8]
71020d6afc  ldr x8,[x19, #0x10]
71020d6b00  add x9,x8,#0x10
71020d6b04  sub x1,x8,#0x10
71020d6b08  adrp x2,0x710434b000
71020d6b0c  add x2,x2,#0x477
71020d6b10  mov x0,x19
71020d6b14  str x9,[x19, #0x10]
71020d6b18  bl 0x71038f5390
71020d6b1c  ldp x29,x30,[sp, #0x40]
71020d6b20  ldr x21,[sp, #0x20]
71020d6b24  ldp x20,x19,[sp, #0x30]
71020d6b28  mov w0,#0x1
71020d6b2c  add sp,sp,#0x50
71020d6b30  ret
