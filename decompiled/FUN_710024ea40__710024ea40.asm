// addr:      710024ea40
// offset:    0x24ea40
// name:      FUN_710024ea40
// mangled:   
// size:      472

710024ea40  sub sp,sp,#0xd0
710024ea44  str x23,[sp, #0x90]
710024ea48  stp x22,x21,[sp, #0xa0]
710024ea4c  stp x20,x19,[sp, #0xb0]
710024ea50  stp x29,x30,[sp, #0xc0]
710024ea54  add x29,sp,#0xc0
710024ea58  mov x20,x0
710024ea5c  add x0,sp,#0x20
710024ea60  mov x21,x2
710024ea64  mov x19,x1
710024ea68  bl 0x71001e6720
710024ea6c  adrp x8,0x71052a4000
710024ea70  ldr x8,[x8, #0xda8]
710024ea74  adrp x23,0x71052a4000
710024ea78  ldrb w8,[x8]
710024ea7c  ldr x23,[x23, #0xdb0]
710024ea80  add x22,x23,#0x28
710024ea84  cbz w8,0x710024eac0
710024ea88  adrp x8,0x71052a4000
710024ea8c  ldr x8,[x8, #0xdb8]
710024ea90  ldr x0,[x8]
710024ea94  bl 0x7101717960
710024ea98  ldr w8,[x0]
710024ea9c  cbz w8,0x710024eac0
710024eaa0  ldr x10,[x23, #0xa0]
710024eaa4  ldp x9,x10,[x10]
710024eaa8  sub x10,x10,x9
710024eaac  asr x10,x10,#0x3
710024eab0  cmp x10,x8
710024eab4  b.ls 0x710024ead8
710024eab8  ldr x8,[x9, x8, LSL #0x3]
710024eabc  add x22,x8,#0x20
710024eac0  ldr x8,[x22]
710024eac4  cbz x8,0x710024eaf0
710024eac8  ldr x8,[x8, #0x10]
710024eacc  cbz x8,0x710024eaf0
710024ead0  ldr x22,[x8, #0x10]
710024ead4  b 0x710024eaf4
710024ead8  adrp x0,0x71042c4000
710024eadc  add x0,x0,#0x35f
710024eae0  mov w1,#0x47
710024eae4  orr w2,wzr,#0xe0000003
710024eae8  mov w3,wzr
710024eaec  bl 0x71001b1300
710024eaf0  mov x22,xzr
710024eaf4  ldr x8,[x22, #0x78]!
710024eaf8  ldr x8,[x8, #0x10]
710024eafc  mov x0,x22
710024eb00  blr x8
710024eb04  ldrh w1,[x20, #0x48]
710024eb08  add x0,sp,#0x20
710024eb0c  mov w2,#0x1
710024eb10  bl 0x710022b480
710024eb14  add x0,sp,#0x20
710024eb18  mov x1,x19
710024eb1c  bl 0x710022b390
710024eb20  tbz w0,#0x0,0x710024eb78
710024eb24  add x0,sp,#0x20
710024eb28  mov w1,#0x2
710024eb2c  bl 0x710022b400
710024eb30  add x0,sp,#0x20
710024eb34  mov w2,#0x4
710024eb38  mov x1,x21
710024eb3c  bl 0x71001d0460
710024eb40  ldrb w8,[sp, #0x28]
710024eb44  cbz w8,0x710024eb80
710024eb48  mov w8,#0xa
710024eb4c  movk w8,#0x8001, LSL #16
710024eb50  add x0,sp,#0x8
710024eb54  sub x1,x29,#0x24
710024eb58  stur w8,[x29, #-0x24]
710024eb5c  bl 0x71001b4200
710024eb60  add x1,sp,#0x8
710024eb64  mov x0,x19
710024eb68  bl 0x71001d0c90
710024eb6c  mov w23,wzr
710024eb70  mov w21,#0x1
710024eb74  b 0x710024ebcc
710024eb78  mov w21,wzr
710024eb7c  b 0x710024ebc8
710024eb80  adrp x8,0x71052a7000
710024eb84  adrp x9,0x71052a7000
710024eb88  ldr x8,[x8, #0xb78]
710024eb8c  ldr x9,[x9, #0xba0]
710024eb90  str x9,[x8, #0x8]
710024eb94  ldrb w8,[x20, #0x70]
710024eb98  cbz w8,0x710024ebb4
710024eb9c  mov w1,#0x10
710024eba0  mov x0,x20
710024eba4  bl 0x710022b500
710024eba8  tbz w0,#0x0,0x710024ebb4
710024ebac  mov w23,#0x1
710024ebb0  b 0x710024ebcc
710024ebb4  add x2,sp,#0x20
710024ebb8  mov x0,x20
710024ebbc  mov x1,x19
710024ebc0  bl 0x710022a7f0
710024ebc4  mov w21,w0
710024ebc8  mov w23,wzr
710024ebcc  ldr x8,[x22]
710024ebd0  ldr x8,[x8, #0x20]
710024ebd4  mov x0,x22
710024ebd8  blr x8
710024ebdc  cbz w23,0x710024ebf4
710024ebe0  add x2,sp,#0x20
710024ebe4  mov x0,x20
710024ebe8  mov x1,x19
710024ebec  bl 0x710022a7f0
710024ebf0  mov w21,w0
710024ebf4  add x0,sp,#0x20
710024ebf8  bl 0x71001e6910
710024ebfc  and w0,w21,#0x1
710024ec00  ldp x29,x30,[sp, #0xc0]
710024ec04  ldp x20,x19,[sp, #0xb0]
710024ec08  ldr x23,[sp, #0x90]
710024ec0c  ldp x22,x21,[sp, #0xa0]
710024ec10  add sp,sp,#0xd0
710024ec14  ret
