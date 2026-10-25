// addr:      710022bf40
// offset:    0x22bf40
// name:      FUN_710022bf40
// mangled:   
// size:      216

710022bf40  stp x20,x19,[sp, #-0x20]!
710022bf44  stp x29,x30,[sp, #0x10]
710022bf48  add x29,sp,#0x10
710022bf4c  adrp x8,0x71052a4000
710022bf50  ldr x8,[x8, #0xda8]
710022bf54  adrp x20,0x71052a4000
710022bf58  ldrb w8,[x8]
710022bf5c  ldr x20,[x20, #0xdb0]
710022bf60  add x19,x20,#0x28
710022bf64  cbz w8,0x710022bfa0
710022bf68  adrp x8,0x71052a4000
710022bf6c  ldr x8,[x8, #0xdb8]
710022bf70  ldr x0,[x8]
710022bf74  bl 0x7101717960
710022bf78  ldr w8,[x0]
710022bf7c  cbz w8,0x710022bfa0
710022bf80  ldr x10,[x20, #0xa0]
710022bf84  ldp x9,x10,[x10]
710022bf88  sub x10,x10,x9
710022bf8c  asr x10,x10,#0x3
710022bf90  cmp x10,x8
710022bf94  b.ls 0x710022bfb8
710022bf98  ldr x8,[x9, x8, LSL #0x3]
710022bf9c  add x19,x8,#0x20
710022bfa0  ldr x8,[x19]
710022bfa4  cbz x8,0x710022bfd0
710022bfa8  ldr x8,[x8, #0x10]
710022bfac  cbz x8,0x710022bfd0
710022bfb0  ldr x19,[x8, #0x10]
710022bfb4  b 0x710022bfd4
710022bfb8  adrp x0,0x71042c4000
710022bfbc  add x0,x0,#0x35f
710022bfc0  mov w1,#0x47
710022bfc4  orr w2,wzr,#0xe0000003
710022bfc8  mov w3,wzr
710022bfcc  bl 0x71001b1300
710022bfd0  mov x19,xzr
710022bfd4  ldr x8,[x19, #0x78]!
710022bfd8  ldr x8,[x8, #0x10]
710022bfdc  mov x0,x19
710022bfe0  blr x8
710022bfe4  adrp x8,0x71052a7000
710022bfe8  ldr x8,[x8, #0x580]
710022bfec  ldr x0,[x8]
710022bff0  cbz x0,0x710022c000
710022bff4  ldr x8,[x0]
710022bff8  ldr x8,[x8, #0x18]
710022bffc  blr x8
710022c000  ldr x8,[x19]
710022c004  ldr x1,[x8, #0x20]
710022c008  mov x0,x19
710022c00c  ldp x29,x30,[sp, #0x10]
710022c010  ldp x20,x19,[sp], #0x20
710022c014  br x1
