// addr:      71020eef40
// offset:    0x20eef40
// name:      FUN_71020eef40
// mangled:   
// size:      228

71020eef40  sub sp,sp,#0x40
71020eef44  str x19,[sp, #0x20]
71020eef48  stp x29,x30,[sp, #0x30]
71020eef4c  add x29,sp,#0x30
71020eef50  ldr x8,[x0, #0x18]
71020eef54  ldr x8,[x8, #0x18]
71020eef58  mov x19,x0
71020eef5c  cmp x8,#0x1
71020eef60  b.lt 0x71020eef6c
71020eef64  mov x0,x19
71020eef68  bl 0x71038fec40
71020eef6c  mov x0,x19
71020eef70  bl 0x710391e050
71020eef74  ldr x8,[x19, #0x10]
71020eef78  mov w9,#0x45
71020eef7c  str w9,[x8, #0x8]
71020eef80  str x0,[x8]
71020eef84  ldr x8,[x19, #0x10]
71020eef88  mov x1,x0
71020eef8c  mov w3,#0x1
71020eef90  mov x0,x19
71020eef94  mov w2,wzr
71020eef98  add x8,x8,#0x10
71020eef9c  str x8,[x19, #0x10]
71020eefa0  bl 0x710391d4c0
71020eefa4  mov x8,#0x1
71020eefa8  movk x8,#0x5000, LSL #48
71020eefac  str x8,[sp, #0x10]
71020eefb0  mov x8,#0x46
71020eefb4  movk x8,#0x5000, LSL #48
71020eefb8  str x8,[sp, #0x18]
71020eefbc  adrp x8,0x71050b4000
71020eefc0  add x8,x8,#0xd78
71020eefc4  add x0,sp,#0x8
71020eefc8  mov w2,#0x1
71020eefcc  mov x1,x19
71020eefd0  str x8,[sp, #0x8]
71020eefd4  bl 0x71020d4810
71020eefd8  ldr x8,[x19, #0x10]
71020eefdc  adrp x9,0x71020ef000
71020eefe0  add x9,x9,#0x30
71020eefe4  str x9,[x8]
71020eefe8  mov w9,#0x2
71020eefec  str w9,[x8, #0x8]
71020eeff0  ldr x8,[x19, #0x10]
71020eeff4  add x9,x8,#0x10
71020eeff8  sub x1,x8,#0x10
71020eeffc  adrp x2,0x710430c000
71020ef000  add x2,x2,#0x66a
71020ef004  mov x0,x19
71020ef008  str x9,[x19, #0x10]
71020ef00c  bl 0x71038f5390
71020ef010  ldp x29,x30,[sp, #0x30]
71020ef014  ldr x19,[sp, #0x20]
71020ef018  mov w0,#0x1
71020ef01c  add sp,sp,#0x40
71020ef020  ret
