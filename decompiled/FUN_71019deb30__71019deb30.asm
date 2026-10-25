// addr:      71019deb30
// offset:    0x19deb30
// name:      FUN_71019deb30
// mangled:   
// size:      256

71019deb30  stp x22,x21,[sp, #-0x30]!
71019deb34  stp x20,x19,[sp, #0x10]
71019deb38  stp x29,x30,[sp, #0x20]
71019deb3c  add x29,sp,#0x20
71019deb40  adrp x8,0x710532f000
71019deb44  ldr x8,[x8, #0x840]
71019deb48  ldr x8,[x8, #0x8]
71019deb4c  ldr x22,[x8, #0xb8]
71019deb50  ldp x8,x9,[x0, #0xe0]
71019deb54  ldr x8,[x8]
71019deb58  ldr w20,[x9, #0x254]
71019deb5c  ldr w9,[x0, #0xf0]
71019deb60  ldr x21,[x8]
71019deb64  mov x19,x0
71019deb68  cmp w20,w9
71019deb6c  b.eq 0x71019deb88
71019deb70  add x0,x8,#0x8
71019deb74  adrp x1,0x7104400000
71019deb78  add x1,x1,#0xd3e
71019deb7c  mov w2,w20
71019deb80  bl 0x7103778430
71019deb84  str w20,[x19, #0xf0]
71019deb88  ldr x8,[x21, #0x600]
71019deb8c  ldrb w9,[x8, #0x4aa]
71019deb90  cbz w9,0x71019debd0
71019deb94  ldrb w8,[x8, #0x1ac]
71019deb98  tbz w8,#0x1,0x71019debd0
71019deb9c  ldr x20,[x22, #0x80]
71019deba0  ldrb w8,[x20, #0xc9]
71019deba4  mov w9,#0x2260
71019deba8  add x0,x20,x9
71019debac  cbz w8,0x71019debb8
71019debb0  mov w1,wzr
71019debb4  b 0x71019debbc
71019debb8  mov w1,#0x4
71019debbc  mov w2,wzr
71019debc0  bl 0x7103771be0
71019debc4  ldr x8,[x20, #0x2260]
71019debc8  ldr w8,[x8, #0x25c]
71019debcc  str w8,[x20, #0x2270]
71019debd0  ldr x8,[x19, #0xe8]
71019debd4  ldr w8,[x8, #0x25c]
71019debd8  cmn w8,#0x1
71019debdc  str w8,[x19, #0xf4]
71019debe0  b.eq 0x71019dec04
71019debe4  ldr x8,[x21, #0x600]
71019debe8  strb wzr,[x8, #0x4aa]
71019debec  ldr w8,[x19, #0xcc]
71019debf0  cmp w8,#0x13
71019debf4  b.cs 0x71019dec2c
71019debf8  add x8,x19,w8, SXTW  #0x2
71019debfc  str wzr,[x8, #0x80]
71019dec00  b 0x71019dec10
71019dec04  ldr x8,[x22, #0x80]
71019dec08  ldr w8,[x8, #0x2270]
71019dec0c  cbz w8,0x71019dec20
71019dec10  ldp x29,x30,[sp, #0x20]
71019dec14  ldp x20,x19,[sp, #0x10]
71019dec18  ldp x22,x21,[sp], #0x30
71019dec1c  ret
71019dec20  mov w8,#0x1
71019dec24  strb w8,[x19, #0xf8]
71019dec28  b 0x71019debe4
71019dec2c  bl 0x71039c2650
