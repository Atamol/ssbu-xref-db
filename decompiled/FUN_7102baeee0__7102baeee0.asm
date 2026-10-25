// addr:      7102baeee0
// offset:    0x2baeee0
// name:      FUN_7102baeee0
// mangled:   
// size:      384

7102baeee0  str x19,[sp, #-0x20]!
7102baeee4  stp x29,x30,[sp, #0x10]
7102baeee8  add x29,sp,#0x10
7102baeeec  ldrb w8,[x0, #0x390]
7102baeef0  cbnz w8,0x7102baf054
7102baeef4  ldr s1,[x0, #0x36c]
7102baeef8  ldr s0,[x0, #0x368]
7102baeefc  fcmp s1,s0
7102baef00  mov x19,x0
7102baef04  b.hi 0x7102baf054
7102baef08  ldr s1,[x19, #0x370]
7102baef0c  fcmp s0,s1
7102baef10  b.hi 0x7102baf054
7102baef14  ldr x0,[x19, #0x330]
7102baef18  str wzr,[x19, #0x364]
7102baef1c  cbz x0,0x7102baef5c
7102baef20  ldr x8,[x0, #0xd8]
7102baef24  cbz x8,0x7102baef3c
7102baef28  adrp x1,0x7104338000
7102baef2c  add x1,x1,#0x460
7102baef30  bl 0x7102610070
7102baef34  ldr x0,[x19, #0x330]
7102baef38  cbz x0,0x7102baef5c
7102baef3c  ldr x8,[x0, #0xc8]
7102baef40  cbz x8,0x7102baef5c
7102baef44  add x0,x0,#0x60
7102baef48  adrp x1,0x7104338000
7102baef4c  add x1,x1,#0x460
7102baef50  mov w2,wzr
7102baef54  bl 0x71025ee080
7102baef58  ldr x0,[x19, #0x330]
7102baef5c  fmov s0,wzr
7102baef60  mov w1,#0x1
7102baef64  bl 0x710260fdd0
7102baef68  ldr x8,[x19, #0x330]
7102baef6c  cbz x8,0x7102baefa8
7102baef70  ldrb w9,[x8, #0xe0]
7102baef74  cbz w9,0x7102baef84
7102baef78  ldr x9,[x8, #0xc8]
7102baef7c  cbz x9,0x7102baef84
7102baef80  strh wzr,[x9, #0x30]
7102baef84  ldr x9,[x8, #0xd8]
7102baef88  cbz x9,0x7102baef90
7102baef8c  strb wzr,[x9, #0x21]
7102baef90  ldrb w9,[x8, #0xe0]
7102baef94  cbz w9,0x7102baefa4
7102baef98  ldr x8,[x8, #0xb0]
7102baef9c  mov w9,#0x1
7102baefa0  strb w9,[x8, #0x10]
7102baefa4  ldr x8,[x19, #0x330]
7102baefa8  ldr w9,[x19, #0x364]
7102baefac  cmp w9,#0x1
7102baefb0  b.ne 0x7102baefec
7102baefb4  cbz x8,0x7102baf010
7102baefb8  ldrb w9,[x8, #0xe0]
7102baefbc  cbz w9,0x7102baefd0
7102baefc0  ldr x9,[x8, #0xc8]
7102baefc4  cbz x9,0x7102baefd0
7102baefc8  mov w10,#0x101
7102baefcc  strh w10,[x9, #0x32]
7102baefd0  ldr x8,[x8, #0xd8]
7102baefd4  cbz x8,0x7102baf010
7102baefd8  mov w9,#0x1
7102baefdc  strb w9,[x8, #0x22]
7102baefe0  ldr x8,[x19, #0x330]
7102baefe4  cbnz x8,0x7102baf018
7102baefe8  b 0x7102baf03c
7102baefec  cbz x8,0x7102baf010
7102baeff0  ldrb w9,[x8, #0xe0]
7102baeff4  cbz w9,0x7102baf004
7102baeff8  ldr x9,[x8, #0xc8]
7102baeffc  cbz x9,0x7102baf004
7102baf000  strh wzr,[x9, #0x32]
7102baf004  ldr x8,[x8, #0xd8]
7102baf008  cbz x8,0x7102baf010
7102baf00c  strb wzr,[x8, #0x22]
7102baf010  ldr x8,[x19, #0x330]
7102baf014  cbz x8,0x7102baf03c
7102baf018  add x0,x8,#0x108
7102baf01c  mov w9,#0x1
7102baf020  strb w9,[x8, #0x110]
7102baf024  bl 0x71025e9d50
7102baf028  ldr x8,[x19, #0x330]
7102baf02c  cbz x8,0x7102baf03c
7102baf030  ldrb w9,[x8, #0x118]
7102baf034  and w9,w9,#0xfe
7102baf038  strb w9,[x8, #0x118]
7102baf03c  mov w8,#0x1
7102baf040  adrp x9,0x7102baf000
7102baf044  add x9,x9,#0x60
7102baf048  strb w8,[x19, #0x390]
7102baf04c  str x9,[x19, #0x340]
7102baf050  str xzr,[x19, #0x348]
7102baf054  ldp x29,x30,[sp, #0x10]
7102baf058  ldr x19,[sp], #0x20
7102baf05c  ret
