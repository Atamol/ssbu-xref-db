// addr:      7101ddcd20
// offset:    0x1ddcd20
// name:      FUN_7101ddcd20
// mangled:   
// size:      376

7101ddcd20  sub sp,sp,#0xc0
7101ddcd24  str x21,[sp, #0x90]
7101ddcd28  stp x20,x19,[sp, #0xa0]
7101ddcd2c  stp x29,x30,[sp, #0xb0]
7101ddcd30  add x29,sp,#0xb0
7101ddcd34  ldrsw x8,[x0, #0xb8]
7101ddcd38  mov x19,x0
7101ddcd3c  tbnz w8,#0x1f,0x7101ddce3c
7101ddcd40  mov x0,x19
7101ddcd44  ldr x9,[x0, #0x50]!
7101ddcd48  ldr x10,[x0, #0x8]
7101ddcd4c  sub x10,x10,x9
7101ddcd50  lsr x11,x10,#0x2
7101ddcd54  cmp w8,w11
7101ddcd58  b.ge 0x7101ddce3c
7101ddcd5c  cbz w11,0x7101ddce3c
7101ddcd60  asr x10,x10,#0x2
7101ddcd64  cmp x10,x8
7101ddcd68  b.ls 0x7101ddce94
7101ddcd6c  adrp x10,0x710532f000
7101ddcd70  ldr x10,[x10, #0x730]
7101ddcd74  ldr x10,[x10, #0x8]
7101ddcd78  lsl x8,x8,#0x2
7101ddcd7c  ldrh w1,[x9, x8, LSL #0x0]
7101ddcd80  ldr x20,[x10, #0x1d8]
7101ddcd84  mov x0,x20
7101ddcd88  bl 0x71032a9470
7101ddcd8c  mov x2,x0
7101ddcd90  add x0,sp,#0x48
7101ddcd94  mov x1,x20
7101ddcd98  add x21,sp,#0x48
7101ddcd9c  bl 0x71032a9540
7101ddcda0  add x1,x21,#0x8
7101ddcda4  adrp x0,0x7104464000
7101ddcda8  add x0,x0,#0x1d4
7101ddcdac  mov x8,sp
7101ddcdb0  bl 0x71003a4ca0
7101ddcdb4  add x19,x19,#0x18
7101ddcdb8  adrp x1,0x7104338000
7101ddcdbc  add x1,x1,#0xd31
7101ddcdc0  add x8,sp,#0x48
7101ddcdc4  mov x0,x19
7101ddcdc8  bl 0x7103776910
7101ddcdcc  ldr x0,[sp, #0x50]
7101ddcdd0  ldr x8,[x0]
7101ddcdd4  cbz x8,0x7101ddcde4
7101ddcdd8  ldrb w9,[x8, #0x58]
7101ddcddc  orr w9,w9,#0x1
7101ddcde0  strb w9,[x8, #0x58]
7101ddcde4  adrp x20,0x710523d000
7101ddcde8  add x20,x20,#0x9a8
7101ddcdec  stp x20,xzr,[sp, #0x48]
7101ddcdf0  cbz x0,0x7101ddcdf8
7101ddcdf4  bl 0x710392eb40
7101ddcdf8  adrp x1,0x7104338000
7101ddcdfc  add x1,x1,#0xd31
7101ddce00  add x8,sp,#0x48
7101ddce04  mov x0,x19
7101ddce08  bl 0x7103776910
7101ddce0c  mov x8,sp
7101ddce10  add x3,x8,#0x8
7101ddce14  adrp x1,0x71042b4000
7101ddce18  add x1,x1,#0x8f5
7101ddce1c  add x0,sp,#0x48
7101ddce20  mov w2,#0x1
7101ddce24  bl 0x710377a280
7101ddce28  ldr x0,[sp, #0x50]
7101ddce2c  str x20,[sp, #0x48]
7101ddce30  str xzr,[sp, #0x50]
7101ddce34  cbnz x0,0x7101ddce7c
7101ddce38  b 0x7101ddce80
7101ddce3c  add x0,x19,#0x18
7101ddce40  adrp x1,0x7104338000
7101ddce44  add x1,x1,#0xd31
7101ddce48  add x8,sp,#0x48
7101ddce4c  bl 0x7103776910
7101ddce50  ldr x0,[sp, #0x50]
7101ddce54  ldr x8,[x0]
7101ddce58  cbz x8,0x7101ddce68
7101ddce5c  ldrb w9,[x8, #0x58]
7101ddce60  and w9,w9,#0xfe
7101ddce64  strb w9,[x8, #0x58]
7101ddce68  adrp x8,0x710523d000
7101ddce6c  add x8,x8,#0x9a8
7101ddce70  str x8,[sp, #0x48]
7101ddce74  str xzr,[sp, #0x50]
7101ddce78  cbz x0,0x7101ddce80
7101ddce7c  bl 0x710392eb40
7101ddce80  ldp x29,x30,[sp, #0xb0]
7101ddce84  ldr x21,[sp, #0x90]
7101ddce88  ldp x20,x19,[sp, #0xa0]
7101ddce8c  add sp,sp,#0xc0
7101ddce90  ret
7101ddce94  bl 0x71039c1330
