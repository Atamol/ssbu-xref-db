// addr:      71020eaea0
// offset:    0x20eaea0
// name:      FUN_71020eaea0
// mangled:   
// size:      416

71020eaea0  stp x22,x21,[sp, #-0x30]!
71020eaea4  stp x20,x19,[sp, #0x10]
71020eaea8  stp x29,x30,[sp, #0x20]
71020eaeac  add x29,sp,#0x20
71020eaeb0  mov w20,w2
71020eaeb4  and w2,w2,#0x1
71020eaeb8  mov x19,x1
71020eaebc  mov x21,x0
71020eaec0  bl 0x71020d4810
71020eaec4  ldr x8,[x19, #0x10]
71020eaec8  adrp x9,0x71020ea000
71020eaecc  add x9,x9,#0xe00
71020eaed0  str x9,[x8]
71020eaed4  mov w9,#0x2
71020eaed8  str w9,[x8, #0x8]
71020eaedc  ldr x8,[x19, #0x10]
71020eaee0  add x9,x8,#0x10
71020eaee4  sub x1,x8,#0x10
71020eaee8  adrp x2,0x710430c000
71020eaeec  add x2,x2,#0x66a
71020eaef0  mov x0,x19
71020eaef4  str x9,[x19, #0x10]
71020eaef8  bl 0x71038f5390
71020eaefc  tbz w20,#0x0,0x71020eaf54
71020eaf00  ldr x8,[x19, #0x18]
71020eaf04  ldr x8,[x8, #0x18]
71020eaf08  cmp x8,#0x1
71020eaf0c  b.lt 0x71020eaf18
71020eaf10  mov x0,x19
71020eaf14  bl 0x71038fec40
71020eaf18  mov x0,x19
71020eaf1c  bl 0x710391e050
71020eaf20  ldr x8,[x19, #0x10]
71020eaf24  mov w9,#0x45
71020eaf28  str w9,[x8, #0x8]
71020eaf2c  str x0,[x8]
71020eaf30  ldr x8,[x19, #0x10]
71020eaf34  mov x1,x0
71020eaf38  mov w3,#0x4
71020eaf3c  mov x0,x19
71020eaf40  mov w2,wzr
71020eaf44  add x8,x8,#0x10
71020eaf48  str x8,[x19, #0x10]
71020eaf4c  bl 0x710391d4c0
71020eaf50  b 0x71020eaf6c
71020eaf54  ldr x8,[x19, #0x10]
71020eaf58  sub x1,x8,#0x10
71020eaf5c  adrp x2,0x710444c000
71020eaf60  add x2,x2,#0x45b
71020eaf64  mov x0,x19
71020eaf68  bl 0x71038f4d40
71020eaf6c  ldr s0,[x21, #0x20]
71020eaf70  ldr x8,[x19, #0x10]
71020eaf74  orr w22,wzr,#0x3
71020eaf78  str w22,[x8, #0x8]
71020eaf7c  str s0,[x8]
71020eaf80  ldr x8,[x19, #0x10]
71020eaf84  add x9,x8,#0x10
71020eaf88  sub x1,x8,#0x10
71020eaf8c  adrp x2,0x71043d7000
71020eaf90  add x2,x2,#0xeae
71020eaf94  mov x0,x19
71020eaf98  str x9,[x19, #0x10]
71020eaf9c  bl 0x71038f5390
71020eafa0  ldr s0,[x21, #0x24]
71020eafa4  ldr x8,[x19, #0x10]
71020eafa8  str w22,[x8, #0x8]
71020eafac  str s0,[x8]
71020eafb0  ldr x8,[x19, #0x10]
71020eafb4  add x9,x8,#0x10
71020eafb8  sub x1,x8,#0x10
71020eafbc  adrp x2,0x71042ab000
71020eafc0  add x2,x2,#0xc20
71020eafc4  mov x0,x19
71020eafc8  str x9,[x19, #0x10]
71020eafcc  bl 0x71038f5390
71020eafd0  ldr s0,[x21, #0x28]
71020eafd4  ldr x8,[x19, #0x10]
71020eafd8  str w22,[x8, #0x8]
71020eafdc  str s0,[x8]
71020eafe0  ldr x8,[x19, #0x10]
71020eafe4  add x9,x8,#0x10
71020eafe8  sub x1,x8,#0x10
71020eafec  adrp x2,0x710443b000
71020eaff0  add x2,x2,#0x9a0
71020eaff4  mov x0,x19
71020eaff8  str x9,[x19, #0x10]
71020eaffc  bl 0x71038f5390
71020eb000  ldr x8,[x19, #0x10]
71020eb004  tbz w20,#0x0,0x71020eb028
71020eb008  mov x0,x19
71020eb00c  ldp x29,x30,[sp, #0x20]
71020eb010  ldp x20,x19,[sp, #0x10]
71020eb014  sub x1,x8,#0x20
71020eb018  adrp x2,0x710444c000
71020eb01c  add x2,x2,#0x45b
71020eb020  ldp x22,x21,[sp], #0x30
71020eb024  b 0x71038f5390
71020eb028  sub x8,x8,#0x10
71020eb02c  str x8,[x19, #0x10]
71020eb030  ldp x29,x30,[sp, #0x20]
71020eb034  ldp x20,x19,[sp, #0x10]
71020eb038  ldp x22,x21,[sp], #0x30
71020eb03c  ret
