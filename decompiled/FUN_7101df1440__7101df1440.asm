// addr:      7101df1440
// offset:    0x1df1440
// name:      FUN_7101df1440
// mangled:   
// size:      260

7101df1440  sub sp,sp,#0x40
7101df1444  stp x22,x21,[sp, #0x10]
7101df1448  stp x20,x19,[sp, #0x20]
7101df144c  stp x29,x30,[sp, #0x30]
7101df1450  add x29,sp,#0x30
7101df1454  mov x19,x0
7101df1458  ldr x8,[x1, #0x18]
7101df145c  ldr x0,[x0, #0x18]
7101df1460  mov x21,x3
7101df1464  mov x22,x2
7101df1468  mov x20,x1
7101df146c  cbz x8,0x7101df1490
7101df1470  fmov s0,0x3f800000
7101df1474  adrp x1,0x710434a000
7101df1478  add x1,x1,#0x889
7101df147c  bl 0x7103778300
7101df1480  ldr x1,[x20, #0x18]
7101df1484  mov x0,x19
7101df1488  bl 0x7101df0960
7101df148c  b 0x7101df14a0
7101df1490  fmov s0,0x3f800000
7101df1494  adrp x1,0x710433a000
7101df1498  add x1,x1,#0x647
7101df149c  bl 0x7103778300
7101df14a0  ldr w8,[x20]
7101df14a4  cmp w8,#0xd
7101df14a8  b.hi 0x7101df14e4
7101df14ac  mov w9,#0x1
7101df14b0  lsl w8,w9,w8
7101df14b4  mov w9,#0x273d
7101df14b8  tst w8,w9
7101df14bc  b.eq 0x7101df14e4
7101df14c0  ldr x8,[x19, #0x8]
7101df14c4  ldr x8,[x8]
7101df14c8  ldr x8,[x8]
7101df14cc  ldr x9,[x8, #0x600]
7101df14d0  mov w10,#0x80
7101df14d4  str w10,[x9, #0xdc]
7101df14d8  ldr x8,[x8, #0x600]
7101df14dc  mov w9,#0x10
7101df14e0  str w9,[x8, #0xe0]
7101df14e4  ldr w8,[x20]
7101df14e8  ldrb w9,[x20, #0x10]
7101df14ec  bfm x8,x9,#0x20,#0x7
7101df14f0  ldrb w10,[x20, #0x11]
7101df14f4  ldrb w11,[x20, #0x13]
7101df14f8  ldr x12,[x20, #0x8]
7101df14fc  bfm x8,x10,#0x18,#0x7
7101df1500  bfm x8,x11,#0x10,#0x7
7101df1504  mov x1,sp
7101df1508  stp x8,x12,[sp]
7101df150c  ldr x0,[x19, #0x20]
7101df1510  mov x2,x22
7101df1514  mov x3,x21
7101df1518  bl 0x7101dfac40
7101df151c  ldr w1,[x20]
7101df1520  mov x0,x19
7101df1524  bl 0x7101df0840
7101df1528  ldr w8,[x20]
7101df152c  str w8,[x19, #0x144]
7101df1530  ldp x29,x30,[sp, #0x30]
7101df1534  ldp x20,x19,[sp, #0x20]
7101df1538  ldp x22,x21,[sp, #0x10]
7101df153c  add sp,sp,#0x40
7101df1540  ret
