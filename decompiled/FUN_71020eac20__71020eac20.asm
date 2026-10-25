// addr:      71020eac20
// offset:    0x20eac20
// name:      FUN_71020eac20
// mangled:   
// size:      472

71020eac20  sub sp,sp,#0x60
71020eac24  str x21,[sp, #0x30]
71020eac28  stp x20,x19,[sp, #0x40]
71020eac2c  stp x29,x30,[sp, #0x50]
71020eac30  add x29,sp,#0x50
71020eac34  ldr x8,[x0, #0x18]
71020eac38  ldr x8,[x8, #0x18]
71020eac3c  mov x19,x0
71020eac40  cmp x8,#0x1
71020eac44  b.lt 0x71020eac50
71020eac48  mov x0,x19
71020eac4c  bl 0x71038fec40
71020eac50  mov x0,x19
71020eac54  bl 0x710391e050
71020eac58  ldr x8,[x19, #0x10]
71020eac5c  mov w20,#0x45
71020eac60  str w20,[x8, #0x8]
71020eac64  str x0,[x8]
71020eac68  ldr x8,[x19, #0x10]
71020eac6c  mov x1,x0
71020eac70  mov w3,#0x2
71020eac74  mov x0,x19
71020eac78  mov w2,wzr
71020eac7c  mov w21,#0x2
71020eac80  add x8,x8,#0x10
71020eac84  str x8,[x19, #0x10]
71020eac88  bl 0x710391d4c0
71020eac8c  mov x8,#0x5000000000000000
71020eac90  str x8,[sp, #0x8]
71020eac94  mov x8,#0x3f
71020eac98  stp xzr,xzr,[sp, #0x20]
71020eac9c  movk x8,#0x5000, LSL #48
71020eaca0  adrp x9,0x71050b4000
71020eaca4  add x9,x9,#0xbe8
71020eaca8  mov x0,sp
71020eacac  mov w2,#0x1
71020eacb0  mov x1,x19
71020eacb4  str x8,[sp, #0x10]
71020eacb8  str x9,[sp]
71020eacbc  bl 0x71020d4810
71020eacc0  ldr x8,[x19, #0x10]
71020eacc4  adrp x9,0x71020ea000
71020eacc8  add x9,x9,#0xe00
71020eaccc  str x9,[x8]
71020eacd0  str w21,[x8, #0x8]
71020eacd4  ldr x8,[x19, #0x10]
71020eacd8  add x9,x8,#0x10
71020eacdc  sub x1,x8,#0x10
71020eace0  adrp x2,0x710430c000
71020eace4  add x2,x2,#0x66a
71020eace8  mov x0,x19
71020eacec  str x9,[x19, #0x10]
71020eacf0  bl 0x71038f5390
71020eacf4  ldr x8,[x19, #0x18]
71020eacf8  ldr x8,[x8, #0x18]
71020eacfc  cmp x8,#0x1
71020ead00  b.lt 0x71020ead0c
71020ead04  mov x0,x19
71020ead08  bl 0x71038fec40
71020ead0c  mov x0,x19
71020ead10  bl 0x710391e050
71020ead14  ldr x8,[x19, #0x10]
71020ead18  str x0,[x8]
71020ead1c  str w20,[x8, #0x8]
71020ead20  ldr x8,[x19, #0x10]
71020ead24  mov x1,x0
71020ead28  mov w3,#0x4
71020ead2c  mov x0,x19
71020ead30  mov w2,wzr
71020ead34  add x8,x8,#0x10
71020ead38  str x8,[x19, #0x10]
71020ead3c  bl 0x710391d4c0
71020ead40  ldr x8,[x19, #0x10]
71020ead44  orr w20,wzr,#0x3
71020ead48  str w20,[x8, #0x8]
71020ead4c  str wzr,[x8]
71020ead50  ldr x8,[x19, #0x10]
71020ead54  add x9,x8,#0x10
71020ead58  sub x1,x8,#0x10
71020ead5c  adrp x2,0x71043d7000
71020ead60  add x2,x2,#0xeae
71020ead64  mov x0,x19
71020ead68  str x9,[x19, #0x10]
71020ead6c  bl 0x71038f5390
71020ead70  ldr x8,[x19, #0x10]
71020ead74  str wzr,[x8]
71020ead78  str w20,[x8, #0x8]
71020ead7c  ldr x8,[x19, #0x10]
71020ead80  add x9,x8,#0x10
71020ead84  sub x1,x8,#0x10
71020ead88  adrp x2,0x71042ab000
71020ead8c  add x2,x2,#0xc20
71020ead90  mov x0,x19
71020ead94  str x9,[x19, #0x10]
71020ead98  bl 0x71038f5390
71020ead9c  ldr x8,[x19, #0x10]
71020eada0  str wzr,[x8]
71020eada4  str w20,[x8, #0x8]
71020eada8  ldr x8,[x19, #0x10]
71020eadac  add x9,x8,#0x10
71020eadb0  sub x1,x8,#0x10
71020eadb4  adrp x2,0x710443b000
71020eadb8  add x2,x2,#0x9a0
71020eadbc  mov x0,x19
71020eadc0  str x9,[x19, #0x10]
71020eadc4  bl 0x71038f5390
71020eadc8  ldr x8,[x19, #0x10]
71020eadcc  sub x1,x8,#0x20
71020eadd0  adrp x2,0x710444c000
71020eadd4  add x2,x2,#0x45b
71020eadd8  mov x0,x19
71020eaddc  bl 0x71038f5390
71020eade0  ldp x29,x30,[sp, #0x50]
71020eade4  ldr x21,[sp, #0x30]
71020eade8  ldp x20,x19,[sp, #0x40]
71020eadec  mov w0,#0x1
71020eadf0  add sp,sp,#0x60
71020eadf4  ret
