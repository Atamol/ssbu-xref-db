// addr:      710216ff00
// offset:    0x216ff00
// name:      FUN_710216ff00
// mangled:   
// size:      328

710216ff00  sub sp,sp,#0x60
710216ff04  stp x20,x19,[sp, #0x40]
710216ff08  stp x29,x30,[sp, #0x50]
710216ff0c  add x29,sp,#0x50
710216ff10  ldr x8,[x0, #0x18]
710216ff14  ldr x8,[x8, #0x18]
710216ff18  mov x19,x0
710216ff1c  cmp x8,#0x1
710216ff20  b.lt 0x710216ff2c
710216ff24  mov x0,x19
710216ff28  bl 0x71038fec40
710216ff2c  mov x0,x19
710216ff30  bl 0x710391e050
710216ff34  ldr x8,[x19, #0x10]
710216ff38  mov w9,#0x45
710216ff3c  str w9,[x8, #0x8]
710216ff40  str x0,[x8]
710216ff44  ldr x8,[x19, #0x10]
710216ff48  mov x1,x0
710216ff4c  orr w3,wzr,#0x3
710216ff50  mov x0,x19
710216ff54  mov w2,wzr
710216ff58  add x8,x8,#0x10
710216ff5c  str x8,[x19, #0x10]
710216ff60  bl 0x710391d4c0
710216ff64  mov w8,#0xa
710216ff68  str w8,[sp, #0x10]
710216ff6c  mov x8,#-0x10000
710216ff70  stp xzr,xzr,[sp, #0x18]
710216ff74  movk x8,#0x5000, LSL #16
710216ff78  str x8,[sp, #0x28]
710216ff7c  adrp x8,0x71050b5000
710216ff80  add x8,x8,#0x98
710216ff84  add x0,sp,#0x8
710216ff88  mov w2,#0x1
710216ff8c  mov x1,x19
710216ff90  strb wzr,[sp, #0x30]
710216ff94  str x8,[sp, #0x8]
710216ff98  stur xzr,[sp, #0x34]
710216ff9c  bl 0x7101ff91a0
710216ffa0  ldr x8,[x19, #0x10]
710216ffa4  adrp x9,0x7102170000
710216ffa8  add x9,x9,#0x50
710216ffac  str x9,[x8]
710216ffb0  mov w9,#0x2
710216ffb4  str w9,[x8, #0x8]
710216ffb8  ldr x8,[x19, #0x10]
710216ffbc  add x9,x8,#0x10
710216ffc0  sub x1,x8,#0x10
710216ffc4  adrp x2,0x710430c000
710216ffc8  add x2,x2,#0x66a
710216ffcc  mov x0,x19
710216ffd0  str x9,[x19, #0x10]
710216ffd4  bl 0x71038f5390
710216ffd8  ldr x8,[x19, #0x10]
710216ffdc  mov w20,#0x13
710216ffe0  str w20,[x8, #0x8]
710216ffe4  str xzr,[x8]
710216ffe8  ldr x8,[x19, #0x10]
710216ffec  add x9,x8,#0x10
710216fff0  sub x1,x8,#0x10
710216fff4  adrp x2,0x71042a9000
710216fff8  add x2,x2,#0x1ce
710216fffc  mov x0,x19
7102170000  str x9,[x19, #0x10]
7102170004  bl 0x71038f5390
7102170008  ldr x8,[x19, #0x10]
710217000c  str xzr,[x8]
7102170010  str w20,[x8, #0x8]
7102170014  ldr x8,[x19, #0x10]
7102170018  add x9,x8,#0x10
710217001c  sub x1,x8,#0x10
7102170020  adrp x2,0x710445a000
7102170024  add x2,x2,#0x6f0
7102170028  mov x0,x19
710217002c  str x9,[x19, #0x10]
7102170030  bl 0x71038f5390
7102170034  ldp x29,x30,[sp, #0x50]
7102170038  mov w0,#0x1
710217003c  ldp x20,x19,[sp, #0x40]
7102170040  add sp,sp,#0x60
7102170044  ret
