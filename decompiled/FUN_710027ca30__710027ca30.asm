// addr:      710027ca30
// offset:    0x27ca30
// name:      FUN_710027ca30
// mangled:   
// size:      308

710027ca30  sub sp,sp,#0x80
710027ca34  stp x22,x21,[sp, #0x50]
710027ca38  stp x20,x19,[sp, #0x60]
710027ca3c  stp x29,x30,[sp, #0x70]
710027ca40  add x29,sp,#0x70
710027ca44  adrp x8,0x71052a4000
710027ca48  ldr x8,[x8, #0xda8]
710027ca4c  adrp x22,0x71052a4000
710027ca50  ldrb w8,[x8]
710027ca54  ldr x22,[x22, #0xdb0]
710027ca58  mov x20,x1
710027ca5c  mov x19,x0
710027ca60  add x21,x22,#0x28
710027ca64  cbz w8,0x710027caa0
710027ca68  adrp x8,0x71052a4000
710027ca6c  ldr x8,[x8, #0xdb8]
710027ca70  ldr x0,[x8]
710027ca74  bl 0x7101717960
710027ca78  ldr w8,[x0]
710027ca7c  cbz w8,0x710027caa0
710027ca80  ldr x10,[x22, #0xa0]
710027ca84  ldp x9,x10,[x10]
710027ca88  sub x10,x10,x9
710027ca8c  asr x10,x10,#0x3
710027ca90  cmp x10,x8
710027ca94  b.ls 0x710027cb4c
710027ca98  ldr x8,[x9, x8, LSL #0x3]
710027ca9c  add x21,x8,#0x20
710027caa0  ldr x8,[x21]
710027caa4  ldr x8,[x8, #0x10]
710027caa8  ldr x0,[x8, #0x18]
710027caac  ldr w1,[x19, #0xa0]
710027cab0  bl 0x71001cd7d0
710027cab4  cbz x0,0x710027caf4
710027cab8  adrp x8,0x71052a5000
710027cabc  ldr x8,[x8, #0x110]
710027cac0  ldr w9,[x20]
710027cac4  cmp w9,#0x0
710027cac8  csel x8,x8,xzr,ge
710027cacc  cbz x8,0x710027cb00
710027cad0  ldp x8,x9,[x20]
710027cad4  ldr x10,[x20, #0x10]
710027cad8  str x8,[sp, #0x20]
710027cadc  mov x8,x10
710027cae0  mov w1,#0x2
710027cae4  stp x9,x10,[sp, #0x28]
710027cae8  stp x9,x8,[sp, #0x40]
710027caec  ldr x8,[sp, #0x20]
710027caf0  b 0x710027cb20
710027caf4  add x0,x19,#0xc0
710027caf8  bl 0x71001d0a10
710027cafc  b 0x710027cb30
710027cb00  ldp x8,x9,[x20]
710027cb04  ldr x10,[x20, #0x10]
710027cb08  str x8,[sp, #0x8]
710027cb0c  mov x8,x10
710027cb10  orr w1,wzr,#0x3
710027cb14  stp x9,x10,[sp, #0x10]
710027cb18  stp x9,x8,[sp, #0x40]
710027cb1c  ldr x8,[sp, #0x8]
710027cb20  str x8,[sp, #0x38]
710027cb24  add x2,sp,#0x38
710027cb28  mov w3,#0x1
710027cb2c  bl 0x71001d0f00
710027cb30  mov x0,x19
710027cb34  bl 0x71001cd870
710027cb38  ldp x29,x30,[sp, #0x70]
710027cb3c  ldp x20,x19,[sp, #0x60]
710027cb40  ldp x22,x21,[sp, #0x50]
710027cb44  add sp,sp,#0x80
710027cb48  ret
710027cb4c  adrp x0,0x71042c4000
710027cb50  add x0,x0,#0x35f
710027cb54  mov w1,#0x47
710027cb58  orr w2,wzr,#0xe0000003
710027cb5c  mov w3,wzr
710027cb60  bl 0x71001b1300
