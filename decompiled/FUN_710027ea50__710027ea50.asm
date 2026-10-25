// addr:      710027ea50
// offset:    0x27ea50
// name:      FUN_710027ea50
// mangled:   
// size:      308

710027ea50  sub sp,sp,#0x80
710027ea54  stp x22,x21,[sp, #0x50]
710027ea58  stp x20,x19,[sp, #0x60]
710027ea5c  stp x29,x30,[sp, #0x70]
710027ea60  add x29,sp,#0x70
710027ea64  adrp x8,0x71052a4000
710027ea68  ldr x8,[x8, #0xda8]
710027ea6c  adrp x22,0x71052a4000
710027ea70  ldrb w8,[x8]
710027ea74  ldr x22,[x22, #0xdb0]
710027ea78  mov x20,x1
710027ea7c  mov x19,x0
710027ea80  add x21,x22,#0x28
710027ea84  cbz w8,0x710027eac0
710027ea88  adrp x8,0x71052a4000
710027ea8c  ldr x8,[x8, #0xdb8]
710027ea90  ldr x0,[x8]
710027ea94  bl 0x7101717960
710027ea98  ldr w8,[x0]
710027ea9c  cbz w8,0x710027eac0
710027eaa0  ldr x10,[x22, #0xa0]
710027eaa4  ldp x9,x10,[x10]
710027eaa8  sub x10,x10,x9
710027eaac  asr x10,x10,#0x3
710027eab0  cmp x10,x8
710027eab4  b.ls 0x710027eb6c
710027eab8  ldr x8,[x9, x8, LSL #0x3]
710027eabc  add x21,x8,#0x20
710027eac0  ldr x8,[x21]
710027eac4  ldr x8,[x8, #0x10]
710027eac8  ldr x0,[x8, #0x18]
710027eacc  ldr w1,[x19, #0xa0]
710027ead0  bl 0x71001cd7d0
710027ead4  cbz x0,0x710027eb14
710027ead8  adrp x8,0x71052a5000
710027eadc  ldr x8,[x8, #0x110]
710027eae0  ldr w9,[x20]
710027eae4  cmp w9,#0x0
710027eae8  csel x8,x8,xzr,ge
710027eaec  cbz x8,0x710027eb20
710027eaf0  ldp x8,x9,[x20]
710027eaf4  ldr x10,[x20, #0x10]
710027eaf8  str x8,[sp, #0x20]
710027eafc  mov x8,x10
710027eb00  mov w1,#0x2
710027eb04  stp x9,x10,[sp, #0x28]
710027eb08  stp x9,x8,[sp, #0x40]
710027eb0c  ldr x8,[sp, #0x20]
710027eb10  b 0x710027eb40
710027eb14  add x0,x19,#0xc0
710027eb18  bl 0x71001d0a10
710027eb1c  b 0x710027eb50
710027eb20  ldp x8,x9,[x20]
710027eb24  ldr x10,[x20, #0x10]
710027eb28  str x8,[sp, #0x8]
710027eb2c  mov x8,x10
710027eb30  orr w1,wzr,#0x3
710027eb34  stp x9,x10,[sp, #0x10]
710027eb38  stp x9,x8,[sp, #0x40]
710027eb3c  ldr x8,[sp, #0x8]
710027eb40  str x8,[sp, #0x38]
710027eb44  add x2,sp,#0x38
710027eb48  mov w3,#0x1
710027eb4c  bl 0x71001d0f00
710027eb50  mov x0,x19
710027eb54  bl 0x71001cd870
710027eb58  ldp x29,x30,[sp, #0x70]
710027eb5c  ldp x20,x19,[sp, #0x60]
710027eb60  ldp x22,x21,[sp, #0x50]
710027eb64  add sp,sp,#0x80
710027eb68  ret
710027eb6c  adrp x0,0x71042c4000
710027eb70  add x0,x0,#0x35f
710027eb74  mov w1,#0x47
710027eb78  orr w2,wzr,#0xe0000003
710027eb7c  mov w3,wzr
710027eb80  bl 0x71001b1300
