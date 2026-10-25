// addr:      710020ba20
// offset:    0x20ba20
// name:      FUN_710020ba20
// mangled:   
// size:      348

710020ba20  str x23,[sp, #-0x40]!
710020ba24  stp x22,x21,[sp, #0x10]
710020ba28  stp x20,x19,[sp, #0x20]
710020ba2c  stp x29,x30,[sp, #0x30]
710020ba30  add x29,sp,#0x30
710020ba34  adrp x8,0x71052a4000
710020ba38  ldr x8,[x8, #0xda8]
710020ba3c  adrp x23,0x71052a4000
710020ba40  ldrb w8,[x8]
710020ba44  ldr x23,[x23, #0xdb0]
710020ba48  mov x22,x2
710020ba4c  mov x20,x1
710020ba50  mov x19,x0
710020ba54  add x21,x23,#0x28
710020ba58  cbz w8,0x710020ba94
710020ba5c  adrp x8,0x71052a4000
710020ba60  ldr x8,[x8, #0xdb8]
710020ba64  ldr x0,[x8]
710020ba68  bl 0x7101717960
710020ba6c  ldr w8,[x0]
710020ba70  cbz w8,0x710020ba94
710020ba74  ldr x10,[x23, #0xa0]
710020ba78  ldp x9,x10,[x10]
710020ba7c  sub x10,x10,x9
710020ba80  asr x10,x10,#0x3
710020ba84  cmp x10,x8
710020ba88  b.ls 0x710020baac
710020ba8c  ldr x8,[x9, x8, LSL #0x3]
710020ba90  add x21,x8,#0x20
710020ba94  ldr x8,[x21]
710020ba98  cbz x8,0x710020bac4
710020ba9c  ldr x8,[x8, #0x10]
710020baa0  cbz x8,0x710020bac4
710020baa4  ldr x21,[x8, #0x10]
710020baa8  b 0x710020bac8
710020baac  adrp x0,0x71042c4000
710020bab0  add x0,x0,#0x35f
710020bab4  mov w1,#0x47
710020bab8  orr w2,wzr,#0xe0000003
710020babc  mov w3,wzr
710020bac0  bl 0x71001b1300
710020bac4  mov x21,xzr
710020bac8  ldr x8,[x21, #0x78]!
710020bacc  ldr x8,[x8, #0x10]
710020bad0  mov x0,x21
710020bad4  blr x8
710020bad8  orr w0,wzr,#0x30
710020badc  bl 0x71001b1820
710020bae0  stp x20,x22,[x0, #0x20]
710020bae4  ldr x8,[x19, #0x110]
710020bae8  mov x1,x0
710020baec  cbnz x8,0x710020bafc
710020baf0  add x8,x19,#0x110
710020baf4  b 0x710020bb24
710020baf8  mov x8,x9
710020bafc  ldr x9,[x8, #0x20]
710020bb00  cmp x9,x20
710020bb04  b.ls 0x710020bb14
710020bb08  ldr x9,[x8]
710020bb0c  cbnz x9,0x710020baf8
710020bb10  b 0x710020bb24
710020bb14  ldr x9,[x8, #0x8]
710020bb18  cbnz x9,0x710020baf8
710020bb1c  add x9,x8,#0x8
710020bb20  b 0x710020bb28
710020bb24  mov x9,x8
710020bb28  stp xzr,xzr,[x1]
710020bb2c  str x8,[x1, #0x10]
710020bb30  str x1,[x9]
710020bb34  ldr x8,[x19, #0x108]
710020bb38  ldr x8,[x8]
710020bb3c  cbz x8,0x710020bb48
710020bb40  str x8,[x19, #0x108]
710020bb44  ldr x1,[x9]
710020bb48  ldr x0,[x19, #0x110]
710020bb4c  bl 0x71003e59f0
710020bb50  ldr x8,[x19, #0x118]
710020bb54  add x8,x8,#0x1
710020bb58  str x8,[x19, #0x118]
710020bb5c  ldr x8,[x21]
710020bb60  ldr x1,[x8, #0x20]
710020bb64  mov x0,x21
710020bb68  ldp x29,x30,[sp, #0x30]
710020bb6c  ldp x20,x19,[sp, #0x20]
710020bb70  ldp x22,x21,[sp, #0x10]
710020bb74  ldr x23,[sp], #0x40
710020bb78  br x1
