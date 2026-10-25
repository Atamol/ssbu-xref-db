// addr:      710024ca30
// offset:    0x24ca30
// name:      FUN_710024ca30
// mangled:   
// size:      296

710024ca30  str x23,[sp, #-0x40]!
710024ca34  stp x22,x21,[sp, #0x10]
710024ca38  stp x20,x19,[sp, #0x20]
710024ca3c  stp x29,x30,[sp, #0x30]
710024ca40  add x29,sp,#0x30
710024ca44  mov w0,#0xc8
710024ca48  bl 0x71001af850
710024ca4c  mov x19,x0
710024ca50  cbz x0,0x710024cb40
710024ca54  adrp x8,0x71052a4000
710024ca58  ldr x8,[x8, #0xd80]
710024ca5c  mov x0,x19
710024ca60  add x21,x8,#0x10
710024ca64  mov x8,x19
710024ca68  strb wzr,[x19, #0x8]
710024ca6c  str x21,[x0, #0x38]!
710024ca70  strb wzr,[x8, #0x40]!
710024ca74  adrp x9,0x71052a7000
710024ca78  ldr x9,[x9, #0xac8]
710024ca7c  mov w22,#0x10
710024ca80  stp x8,x22,[x19, #0x50]
710024ca84  mov w8,#0x200
710024ca88  stp xzr,xzr,[x19, #0x10]
710024ca8c  str wzr,[x19, #0x20]
710024ca90  stur x8,[x19, #0x2c]
710024ca94  add x9,x9,#0x10
710024ca98  mov w23,#0x1
710024ca9c  adrp x1,0x7104411000
710024caa0  add x1,x1,#0x4cc
710024caa4  str wzr,[x19, #0xc]
710024caa8  str x9,[x19]
710024caac  stur x23,[x19, #0x24]
710024cab0  bl 0x71001b3cb0
710024cab4  adrp x8,0x71052a7000
710024cab8  adrp x9,0x71052a6000
710024cabc  mov x20,x19
710024cac0  ldr x8,[x8, #0xad0]
710024cac4  ldr x9,[x9, #0x970]
710024cac8  add x10,x19,#0x70
710024cacc  add x8,x8,#0x10
710024cad0  add x9,x9,#0x10
710024cad4  strb wzr,[x19, #0x60]
710024cad8  str x8,[x19]
710024cadc  adrp x8,0x71052a6000
710024cae0  str x9,[x20, #0x68]!
710024cae4  stlr w23,[x10]
710024cae8  ldr x8,[x8, #0xb80]
710024caec  strb wzr,[x19, #0x74]
710024caf0  add x8,x8,#0x10
710024caf4  str x8,[x20]
710024caf8  bl 0x71001cf750
710024cafc  mov x1,x0
710024cb00  mov x0,x20
710024cb04  mov w2,wzr
710024cb08  bl 0x71001cf760
710024cb0c  adrp x8,0x71052a7000
710024cb10  ldr x8,[x8, #0xad8]
710024cb14  mov x0,x19
710024cb18  mov x9,x19
710024cb1c  adrp x1,0x710438b000
710024cb20  add x1,x1,#0xf47
710024cb24  add x8,x8,#0x10
710024cb28  str x8,[x19]
710024cb2c  mov x2,#-0x1
710024cb30  str x21,[x0, #0xa0]!
710024cb34  strb wzr,[x9, #0xa8]!
710024cb38  stp x9,x22,[x19, #0xb8]
710024cb3c  bl 0x71001b47e0
710024cb40  mov x0,x19
710024cb44  ldp x29,x30,[sp, #0x30]
710024cb48  ldp x20,x19,[sp, #0x20]
710024cb4c  ldp x22,x21,[sp, #0x10]
710024cb50  ldr x23,[sp], #0x40
710024cb54  ret
