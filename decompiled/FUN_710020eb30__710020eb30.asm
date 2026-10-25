// addr:      710020eb30
// offset:    0x20eb30
// name:      FUN_710020eb30
// mangled:   
// size:      332

710020eb30  stp x22,x21,[sp, #-0x30]!
710020eb34  stp x20,x19,[sp, #0x10]
710020eb38  stp x29,x30,[sp, #0x20]
710020eb3c  add x29,sp,#0x20
710020eb40  adrp x8,0x71052a4000
710020eb44  ldr x8,[x8, #0xda8]
710020eb48  adrp x22,0x71052a4000
710020eb4c  ldrb w8,[x8]
710020eb50  ldr x22,[x22, #0xdb0]
710020eb54  mov x19,x1
710020eb58  mov x21,x0
710020eb5c  add x20,x22,#0x28
710020eb60  cbz w8,0x710020eb9c
710020eb64  adrp x8,0x71052a4000
710020eb68  ldr x8,[x8, #0xdb8]
710020eb6c  ldr x0,[x8]
710020eb70  bl 0x7101717960
710020eb74  ldr w8,[x0]
710020eb78  cbz w8,0x710020eb9c
710020eb7c  ldr x10,[x22, #0xa0]
710020eb80  ldp x9,x10,[x10]
710020eb84  sub x10,x10,x9
710020eb88  asr x10,x10,#0x3
710020eb8c  cmp x10,x8
710020eb90  b.ls 0x710020ebb4
710020eb94  ldr x8,[x9, x8, LSL #0x3]
710020eb98  add x20,x8,#0x20
710020eb9c  ldr x8,[x20]
710020eba0  cbz x8,0x710020ebcc
710020eba4  ldr x8,[x8, #0x10]
710020eba8  cbz x8,0x710020ebcc
710020ebac  ldr x20,[x8, #0x10]
710020ebb0  b 0x710020ebd0
710020ebb4  adrp x0,0x71042c4000
710020ebb8  add x0,x0,#0x35f
710020ebbc  mov w1,#0x47
710020ebc0  orr w2,wzr,#0xe0000003
710020ebc4  mov w3,wzr
710020ebc8  bl 0x71001b1300
710020ebcc  mov x20,xzr
710020ebd0  ldr x8,[x20, #0x78]!
710020ebd4  ldr x8,[x8, #0x10]
710020ebd8  mov x0,x20
710020ebdc  blr x8
710020ebe0  ldr x9,[x21, #0x20]
710020ebe4  add x8,x21,#0x28
710020ebe8  b 0x710020ebf0
710020ebec  mov x9,x11
710020ebf0  cmp x9,x8
710020ebf4  b.eq 0x710020ec60
710020ebf8  ldr x10,[x9, #0x28]
710020ebfc  ldr x10,[x10, #0x1f0]
710020ec00  ldr x12,[x10, #0x18]
710020ec04  cbz x12,0x710020ec18
710020ec08  ldr x11,[x19]
710020ec0c  cmp x12,x11
710020ec10  b.ls 0x710020ec18
710020ec14  str x11,[x10, #0x18]
710020ec18  ldr x10,[x9, #0x8]
710020ec1c  cbz x10,0x710020ec30
710020ec20  mov x9,x10
710020ec24  ldr x10,[x10]
710020ec28  cbnz x10,0x710020ec20
710020ec2c  b 0x710020ebf0
710020ec30  mov x10,x9
710020ec34  ldr x11,[x10, #0x10]!
710020ec38  ldr x12,[x11]
710020ec3c  cmp x12,x9
710020ec40  b.eq 0x710020ebec
710020ec44  ldr x11,[x10]
710020ec48  mov x10,x11
710020ec4c  ldr x9,[x10, #0x10]!
710020ec50  ldr x12,[x9]
710020ec54  cmp x12,x11
710020ec58  b.ne 0x710020ec44
710020ec5c  b 0x710020ebf0
710020ec60  ldr x8,[x20]
710020ec64  ldr x1,[x8, #0x20]
710020ec68  mov x0,x20
710020ec6c  ldp x29,x30,[sp, #0x20]
710020ec70  ldp x20,x19,[sp, #0x10]
710020ec74  ldp x22,x21,[sp], #0x30
710020ec78  br x1
