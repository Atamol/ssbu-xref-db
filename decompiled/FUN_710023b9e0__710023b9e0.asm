// addr:      710023b9e0
// offset:    0x23b9e0
// name:      FUN_710023b9e0
// mangled:   
// size:      388

710023b9e0  stp x22,x21,[sp, #-0x30]!
710023b9e4  stp x20,x19,[sp, #0x10]
710023b9e8  stp x29,x30,[sp, #0x20]
710023b9ec  add x29,sp,#0x20
710023b9f0  adrp x8,0x71052a4000
710023b9f4  ldr x8,[x8, #0xda8]
710023b9f8  adrp x22,0x71052a4000
710023b9fc  ldrb w8,[x8]
710023ba00  ldr x22,[x22, #0xdb0]
710023ba04  mov w21,w1
710023ba08  mov x19,x0
710023ba0c  add x20,x22,#0x28
710023ba10  cbz w8,0x710023ba4c
710023ba14  adrp x8,0x71052a4000
710023ba18  ldr x8,[x8, #0xdb8]
710023ba1c  ldr x0,[x8]
710023ba20  bl 0x7101717960
710023ba24  ldr w8,[x0]
710023ba28  cbz w8,0x710023ba4c
710023ba2c  ldr x10,[x22, #0xa0]
710023ba30  ldp x9,x10,[x10]
710023ba34  sub x10,x10,x9
710023ba38  asr x10,x10,#0x3
710023ba3c  cmp x10,x8
710023ba40  b.ls 0x710023ba64
710023ba44  ldr x8,[x9, x8, LSL #0x3]
710023ba48  add x20,x8,#0x20
710023ba4c  ldr x8,[x20]
710023ba50  cbz x8,0x710023ba7c
710023ba54  ldr x8,[x8, #0x10]
710023ba58  cbz x8,0x710023ba7c
710023ba5c  ldr x20,[x8, #0x10]
710023ba60  b 0x710023ba80
710023ba64  adrp x0,0x71042c4000
710023ba68  add x0,x0,#0x35f
710023ba6c  mov w1,#0x47
710023ba70  orr w2,wzr,#0xe0000003
710023ba74  mov w3,wzr
710023ba78  bl 0x71001b1300
710023ba7c  mov x20,xzr
710023ba80  ldr x8,[x20, #0x78]!
710023ba84  ldr x8,[x8, #0x10]
710023ba88  mov x0,x20
710023ba8c  blr x8
710023ba90  mov x8,x19
710023ba94  ldr x0,[x8, #0x90]!
710023ba98  cbz x0,0x710023bb40
710023ba9c  mov x22,x8
710023baa0  mov x9,x0
710023baa4  ldrh w10,[x9, #0x20]
710023baa8  cmp w10,w21, UXTH 
710023baac  cset w10,cc
710023bab0  csel x22,x22,x9,cc
710023bab4  ldr x9,[x9, w10, UXTW #0x3]
710023bab8  cbnz x9,0x710023baa4
710023babc  cmp x22,x8
710023bac0  b.eq 0x710023bb40
710023bac4  ldrh w8,[x22, #0x20]
710023bac8  cmp w8,w21, UXTH 
710023bacc  b.hi 0x710023bb40
710023bad0  ldr x9,[x22, #0x8]
710023bad4  cbz x9,0x710023bae8
710023bad8  mov x8,x9
710023badc  ldr x9,[x9]
710023bae0  cbnz x9,0x710023bad8
710023bae4  b 0x710023bb14
710023bae8  mov x9,x22
710023baec  ldr x8,[x9, #0x10]!
710023baf0  ldr x10,[x8]
710023baf4  cmp x10,x22
710023baf8  b.eq 0x710023bb14
710023bafc  ldr x10,[x9]
710023bb00  mov x9,x10
710023bb04  ldr x8,[x9, #0x10]!
710023bb08  ldr x11,[x8]
710023bb0c  cmp x11,x10
710023bb10  b.ne 0x710023bafc
710023bb14  ldr x9,[x19, #0x88]
710023bb18  cmp x9,x22
710023bb1c  b.ne 0x710023bb24
710023bb20  str x8,[x19, #0x88]
710023bb24  ldr x8,[x19, #0x98]
710023bb28  sub x8,x8,#0x1
710023bb2c  mov x1,x22
710023bb30  str x8,[x19, #0x98]
710023bb34  bl 0x7101412010
710023bb38  mov x0,x22
710023bb3c  bl 0x71001b1870
710023bb40  ldr x8,[x20]
710023bb44  ldr x8,[x8, #0x20]
710023bb48  mov x0,x20
710023bb4c  blr x8
710023bb50  ldp x29,x30,[sp, #0x20]
710023bb54  mov w0,#0x1
710023bb58  ldp x20,x19,[sp, #0x10]
710023bb5c  ldp x22,x21,[sp], #0x30
710023bb60  ret
