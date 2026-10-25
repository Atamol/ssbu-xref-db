// addr:      7102ff13c0
// offset:    0x2ff13c0
// name:      FUN_7102ff13c0
// mangled:   
// size:      464

7102ff13c0  sub sp,sp,#0x50
7102ff13c4  stp x24,x23,[sp, #0x10]
7102ff13c8  stp x22,x21,[sp, #0x20]
7102ff13cc  stp x20,x19,[sp, #0x30]
7102ff13d0  stp x29,x30,[sp, #0x40]
7102ff13d4  add x29,sp,#0x40
7102ff13d8  mov x20,x1
7102ff13dc  mov x19,x0
7102ff13e0  str x2,[x0]
7102ff13e4  mov x24,x0
7102ff13e8  str xzr,[x0, #0x10]
7102ff13ec  mov w0,#0x10
7102ff13f0  orr w1,wzr,#0x30
7102ff13f4  mov x21,x2
7102ff13f8  str xzr,[x24, #0x8]!
7102ff13fc  bl 0x710392e290
7102ff1400  mov x23,x0
7102ff1404  cbnz x0,0x7102ff1450
7102ff1408  adrp x8,0x7105332000
7102ff140c  ldr x0,[x8, #0xf00]
7102ff1410  cbz x0,0x7102ff144c
7102ff1414  orr w8,wzr,#0x30
7102ff1418  str wzr,[sp, #0xc]
7102ff141c  add x1,sp,#0xc
7102ff1420  str x8,[sp]
7102ff1424  ldr x8,[x0]
7102ff1428  ldr x8,[x8, #0x30]
7102ff142c  mov x2,sp
7102ff1430  blr x8
7102ff1434  tbz w0,#0x0,0x7102ff144c
7102ff1438  mov w0,#0x10
7102ff143c  orr w1,wzr,#0x30
7102ff1440  bl 0x710392e290
7102ff1444  mov x23,x0
7102ff1448  cbnz x0,0x7102ff1450
7102ff144c  mov x23,xzr
7102ff1450  ldr w3,[x21, #0x1e0]
7102ff1454  adrp x2,0x710425d000
7102ff1458  add x2,x2,#0x917
7102ff145c  mov x0,x23
7102ff1460  mov x1,x20
7102ff1464  bl 0x7102ff1590
7102ff1468  ldr x22,[x24]
7102ff146c  str x23,[x24]
7102ff1470  cbz x22,0x7102ff14ac
7102ff1474  ldr x0,[x22]
7102ff1478  ldr x8,[x22, #0x18]
7102ff147c  str x0,[x22, #0x8]
7102ff1480  str x8,[x22, #0x20]
7102ff1484  cbz x8,0x7102ff1498
7102ff1488  mov x0,x8
7102ff148c  str x8,[x22, #0x20]
7102ff1490  bl 0x710392eb40
7102ff1494  ldr x0,[x22]
7102ff1498  cbz x0,0x7102ff14a4
7102ff149c  str x0,[x22, #0x8]
7102ff14a0  bl 0x710392eb40
7102ff14a4  mov x0,x22
7102ff14a8  bl 0x710392eb40
7102ff14ac  mov w0,#0x10
7102ff14b0  orr w1,wzr,#0x30
7102ff14b4  bl 0x710392e290
7102ff14b8  mov x22,x0
7102ff14bc  cbnz x0,0x7102ff1508
7102ff14c0  adrp x8,0x7105332000
7102ff14c4  ldr x0,[x8, #0xf00]
7102ff14c8  cbz x0,0x7102ff1504
7102ff14cc  orr w8,wzr,#0x30
7102ff14d0  str wzr,[sp, #0xc]
7102ff14d4  add x1,sp,#0xc
7102ff14d8  str x8,[sp]
7102ff14dc  ldr x8,[x0]
7102ff14e0  ldr x8,[x8, #0x30]
7102ff14e4  mov x2,sp
7102ff14e8  blr x8
7102ff14ec  tbz w0,#0x0,0x7102ff1504
7102ff14f0  mov w0,#0x10
7102ff14f4  orr w1,wzr,#0x30
7102ff14f8  bl 0x710392e290
7102ff14fc  mov x22,x0
7102ff1500  cbnz x0,0x7102ff1508
7102ff1504  mov x22,xzr
7102ff1508  ldr w3,[x21, #0x1d8]
7102ff150c  adrp x2,0x71043bc000
7102ff1510  add x2,x2,#0xb31
7102ff1514  mov x0,x22
7102ff1518  mov x1,x20
7102ff151c  bl 0x7102ff1590
7102ff1520  ldr x20,[x19, #0x10]
7102ff1524  str x22,[x19, #0x10]
7102ff1528  cbz x20,0x7102ff1578
7102ff152c  ldr x0,[x20]
7102ff1530  ldr x8,[x20, #0x18]
7102ff1534  str x0,[x20, #0x8]
7102ff1538  str x8,[x20, #0x20]
7102ff153c  cbz x8,0x7102ff1550
7102ff1540  mov x0,x8
7102ff1544  str x8,[x20, #0x20]
7102ff1548  bl 0x710392eb40
7102ff154c  ldr x0,[x20]
7102ff1550  cbz x0,0x7102ff155c
7102ff1554  str x0,[x20, #0x8]
7102ff1558  bl 0x710392eb40
7102ff155c  mov x0,x20
7102ff1560  ldp x29,x30,[sp, #0x40]
7102ff1564  ldp x20,x19,[sp, #0x30]
7102ff1568  ldp x22,x21,[sp, #0x20]
7102ff156c  ldp x24,x23,[sp, #0x10]
7102ff1570  add sp,sp,#0x50
7102ff1574  b 0x710392eb40
7102ff1578  ldp x29,x30,[sp, #0x40]
7102ff157c  ldp x20,x19,[sp, #0x30]
7102ff1580  ldp x22,x21,[sp, #0x20]
7102ff1584  ldp x24,x23,[sp, #0x10]
7102ff1588  add sp,sp,#0x50
7102ff158c  ret
