// addr:      710025eaf0
// offset:    0x25eaf0
// name:      FUN_710025eaf0
// mangled:   
// size:      252

710025eaf0  str x21,[sp, #-0x30]!
710025eaf4  stp x20,x19,[sp, #0x10]
710025eaf8  stp x29,x30,[sp, #0x20]
710025eafc  add x29,sp,#0x20
710025eb00  mov w20,w1
710025eb04  and w21,w1,#0xffff
710025eb08  mov w1,#0x1
710025eb0c  mov x19,x0
710025eb10  bl 0x710022a520
710025eb14  adrp x8,0x71052a7000
710025eb18  ldr x8,[x8, #0xdf8]
710025eb1c  add x8,x8,#0x10
710025eb20  str x8,[x19]
710025eb24  cbz w21,0x710025ebc4
710025eb28  mov x0,x19
710025eb2c  mov w1,w20
710025eb30  bl 0x710022b380
710025eb34  adrp x8,0x71052a4000
710025eb38  ldr x8,[x8, #0xda8]
710025eb3c  adrp x21,0x71052a4000
710025eb40  ldrb w8,[x8]
710025eb44  ldr x21,[x21, #0xdb0]
710025eb48  add x20,x21,#0x70
710025eb4c  cbz w8,0x710025eb88
710025eb50  adrp x8,0x71052a4000
710025eb54  ldr x8,[x8, #0xdb8]
710025eb58  ldr x0,[x8]
710025eb5c  bl 0x7101717960
710025eb60  ldr w8,[x0]
710025eb64  cbz w8,0x710025eb88
710025eb68  ldr x10,[x21, #0xa0]
710025eb6c  ldp x9,x10,[x10]
710025eb70  sub x10,x10,x9
710025eb74  asr x10,x10,#0x3
710025eb78  cmp x10,x8
710025eb7c  b.ls 0x710025ebd4
710025eb80  ldr x8,[x9, x8, LSL #0x3]
710025eb84  add x20,x8,#0x68
710025eb88  ldr x8,[x20]
710025eb8c  ldr x8,[x8, #0x10]
710025eb90  ldr x20,[x8, #0x10]
710025eb94  ldr x8,[x19]
710025eb98  ldr x8,[x8, #0xb0]
710025eb9c  ldrh w21,[x19, #0x48]
710025eba0  mov x0,x19
710025eba4  blr x8
710025eba8  mov x2,x0
710025ebac  mov x0,x20
710025ebb0  mov w1,w21
710025ebb4  ldp x29,x30,[sp, #0x20]
710025ebb8  ldp x20,x19,[sp, #0x10]
710025ebbc  ldr x21,[sp], #0x30
710025ebc0  b 0x7100242360
710025ebc4  ldp x29,x30,[sp, #0x20]
710025ebc8  ldp x20,x19,[sp, #0x10]
710025ebcc  ldr x21,[sp], #0x30
710025ebd0  ret
710025ebd4  adrp x0,0x71042c4000
710025ebd8  add x0,x0,#0x35f
710025ebdc  mov w1,#0x47
710025ebe0  orr w2,wzr,#0xe0000003
710025ebe4  mov w3,wzr
710025ebe8  bl 0x71001b1300
