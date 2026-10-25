// addr:      710025b9e0
// offset:    0x25b9e0
// name:      FUN_710025b9e0
// mangled:   
// size:      252

710025b9e0  str x21,[sp, #-0x30]!
710025b9e4  stp x20,x19,[sp, #0x10]
710025b9e8  stp x29,x30,[sp, #0x20]
710025b9ec  add x29,sp,#0x20
710025b9f0  mov w20,w1
710025b9f4  and w21,w1,#0xffff
710025b9f8  mov w1,#0x1
710025b9fc  mov x19,x0
710025ba00  bl 0x710022a520
710025ba04  adrp x8,0x71052a7000
710025ba08  ldr x8,[x8, #0xd88]
710025ba0c  add x8,x8,#0x10
710025ba10  str x8,[x19]
710025ba14  cbz w21,0x710025bab4
710025ba18  mov x0,x19
710025ba1c  mov w1,w20
710025ba20  bl 0x710022b380
710025ba24  adrp x8,0x71052a4000
710025ba28  ldr x8,[x8, #0xda8]
710025ba2c  adrp x21,0x71052a4000
710025ba30  ldrb w8,[x8]
710025ba34  ldr x21,[x21, #0xdb0]
710025ba38  add x20,x21,#0x70
710025ba3c  cbz w8,0x710025ba78
710025ba40  adrp x8,0x71052a4000
710025ba44  ldr x8,[x8, #0xdb8]
710025ba48  ldr x0,[x8]
710025ba4c  bl 0x7101717960
710025ba50  ldr w8,[x0]
710025ba54  cbz w8,0x710025ba78
710025ba58  ldr x10,[x21, #0xa0]
710025ba5c  ldp x9,x10,[x10]
710025ba60  sub x10,x10,x9
710025ba64  asr x10,x10,#0x3
710025ba68  cmp x10,x8
710025ba6c  b.ls 0x710025bac4
710025ba70  ldr x8,[x9, x8, LSL #0x3]
710025ba74  add x20,x8,#0x68
710025ba78  ldr x8,[x20]
710025ba7c  ldr x8,[x8, #0x10]
710025ba80  ldr x20,[x8, #0x10]
710025ba84  ldr x8,[x19]
710025ba88  ldr x8,[x8, #0xb0]
710025ba8c  ldrh w21,[x19, #0x48]
710025ba90  mov x0,x19
710025ba94  blr x8
710025ba98  mov x2,x0
710025ba9c  mov x0,x20
710025baa0  mov w1,w21
710025baa4  ldp x29,x30,[sp, #0x20]
710025baa8  ldp x20,x19,[sp, #0x10]
710025baac  ldr x21,[sp], #0x30
710025bab0  b 0x7100242360
710025bab4  ldp x29,x30,[sp, #0x20]
710025bab8  ldp x20,x19,[sp, #0x10]
710025babc  ldr x21,[sp], #0x30
710025bac0  ret
710025bac4  adrp x0,0x71042c4000
710025bac8  add x0,x0,#0x35f
710025bacc  mov w1,#0x47
710025bad0  orr w2,wzr,#0xe0000003
710025bad4  mov w3,wzr
710025bad8  bl 0x71001b1300
