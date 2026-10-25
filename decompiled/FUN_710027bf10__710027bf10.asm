// addr:      710027bf10
// offset:    0x27bf10
// name:      FUN_710027bf10
// mangled:   
// size:      304

710027bf10  sub sp,sp,#0x50
710027bf14  str x21,[sp, #0x20]
710027bf18  stp x20,x19,[sp, #0x30]
710027bf1c  stp x29,x30,[sp, #0x40]
710027bf20  add x29,sp,#0x40
710027bf24  adrp x8,0x71052a4000
710027bf28  ldr x8,[x8, #0xda8]
710027bf2c  adrp x21,0x71052a4000
710027bf30  ldrb w8,[x8]
710027bf34  ldr x21,[x21, #0xdb0]
710027bf38  mov x19,x0
710027bf3c  add x20,x21,#0x28
710027bf40  cbz w8,0x710027bf7c
710027bf44  adrp x8,0x71052a4000
710027bf48  ldr x8,[x8, #0xdb8]
710027bf4c  ldr x0,[x8]
710027bf50  bl 0x7101717960
710027bf54  ldr w8,[x0]
710027bf58  cbz w8,0x710027bf7c
710027bf5c  ldr x10,[x21, #0xa0]
710027bf60  ldp x9,x10,[x10]
710027bf64  sub x10,x10,x9
710027bf68  asr x10,x10,#0x3
710027bf6c  cmp x10,x8
710027bf70  b.ls 0x710027c028
710027bf74  ldr x8,[x9, x8, LSL #0x3]
710027bf78  add x20,x8,#0x20
710027bf7c  ldr x8,[x20]
710027bf80  ldr x8,[x8, #0x10]
710027bf84  ldr x0,[x8, #0x18]
710027bf88  ldr w1,[x19, #0xa0]
710027bf8c  bl 0x71001cd7d0
710027bf90  cbz x0,0x710027bfc0
710027bf94  adrp x8,0x71052a5000
710027bf98  ldr x8,[x8, #0x110]
710027bf9c  ldr w9,[x19, #0x388]
710027bfa0  cmp w9,#0x0
710027bfa4  csel x8,x8,xzr,ge
710027bfa8  cbz x8,0x710027bfdc
710027bfac  ldr w8,[x19, #0x10c]
710027bfb0  cmp w8,#0x2
710027bfb4  b.ne 0x710027bff8
710027bfb8  orr w8,wzr,#0x10001
710027bfbc  b 0x710027bfc8
710027bfc0  mov w8,#0x4
710027bfc4  movk w8,#0x8001, LSL #16
710027bfc8  add x0,sp,#0x8
710027bfcc  sub x1,x29,#0x14
710027bfd0  stur w8,[x29, #-0x14]
710027bfd4  bl 0x71001b4200
710027bfd8  b 0x710027c008
710027bfdc  add x1,x19,#0x388
710027bfe0  mov x0,x19
710027bfe4  ldr x21,[sp, #0x20]
710027bfe8  ldp x29,x30,[sp, #0x40]
710027bfec  ldp x20,x19,[sp, #0x30]
710027bff0  add sp,sp,#0x50
710027bff4  b 0x710027b760
710027bff8  ldp x8,x9,[x19, #0x150]
710027bffc  ldr x10,[x19, #0x160]
710027c000  stp x9,x10,[sp, #0x10]
710027c004  str x8,[sp, #0x8]
710027c008  add x1,sp,#0x8
710027c00c  mov x0,x19
710027c010  bl 0x710027b760
710027c014  ldp x29,x30,[sp, #0x40]
710027c018  ldr x21,[sp, #0x20]
710027c01c  ldp x20,x19,[sp, #0x30]
710027c020  add sp,sp,#0x50
710027c024  ret
710027c028  adrp x0,0x71042c4000
710027c02c  add x0,x0,#0x35f
710027c030  mov w1,#0x47
710027c034  orr w2,wzr,#0xe0000003
710027c038  mov w3,wzr
710027c03c  bl 0x71001b1300
