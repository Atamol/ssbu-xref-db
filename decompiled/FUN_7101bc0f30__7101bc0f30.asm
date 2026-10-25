// addr:      7101bc0f30
// offset:    0x1bc0f30
// name:      FUN_7101bc0f30
// mangled:   
// size:      8136

7101bc0f30  stp x28,x27,[sp, #-0x60]!
7101bc0f34  stp x26,x25,[sp, #0x10]
7101bc0f38  stp x24,x23,[sp, #0x20]
7101bc0f3c  stp x22,x21,[sp, #0x30]
7101bc0f40  stp x20,x19,[sp, #0x40]
7101bc0f44  stp x29,x30,[sp, #0x50]
7101bc0f48  add x29,sp,#0x50
7101bc0f4c  sub sp,sp,#0x1, LSL #12
7101bc0f50  sub sp,sp,#0x140
7101bc0f54  ldr x19,[x0, #0x80]
7101bc0f58  ldr x8,[x19, #0x7b0]
7101bc0f5c  ldr w8,[x8, #0x25c]
7101bc0f60  cmp w8,#0x1
7101bc0f64  b.ne 0x7101bc1074
7101bc0f68  adrp x8,0x71052b8000
7101bc0f6c  ldr x8,[x8, #0xf00]
7101bc0f70  ldr x8,[x8]
7101bc0f74  ldr w8,[x8, #0x4]
7101bc0f78  cmp w8,#0xc
7101bc0f7c  b.ne 0x7101bc0fec
7101bc0f80  mov x1,#0x46f2
7101bc0f84  movk x1,#0xd635, LSL #16
7101bc0f88  movk x1,#0xe, LSL #32
7101bc0f8c  add x0,sp,#0x8
7101bc0f90  bl 0x71024076d0
7101bc0f94  adrp x8,0x7104f73000
7101bc0f98  add x8,x8,#0xd50
7101bc0f9c  str x8,[sp, #0x10]
7101bc0fa0  ldr x8,[sp, #0x18]
7101bc0fa4  cbz x8,0x7101bc0fe0
7101bc0fa8  adrp x9,0x7106dd5000
7101bc0fac  ldrb w9,[x9, #0x3a8]
7101bc0fb0  cmp w9,#0x1
7101bc0fb4  b.ne 0x7101bc0fe0
7101bc0fb8  adrp x10,0x7106dd5000
7101bc0fbc  ldr w9,[sp, #0x20]
7101bc0fc0  ldr w10,[x10, #0x3ac]
7101bc0fc4  cmp w9,w10
7101bc0fc8  b.ne 0x7101bc0fe0
7101bc0fcc  ldr wzr,[x8, #0x38]!
7101bc0fd0  ldaxr w9,[x8]
7101bc0fd4  sub w9,w9,#0x1
7101bc0fd8  stlxr w10,w9,[x8]
7101bc0fdc  cbnz w10,0x7101bc0fd0
7101bc0fe0  str xzr,[sp, #0x18]
7101bc0fe4  strb wzr,[sp, #0x28]
7101bc0fe8  b 0x7101bc1074
7101bc0fec  ldr w8,[x19, #0xb68]
7101bc0ff0  cmp w8,#0x3
7101bc0ff4  b.hi 0x7101bc1074
7101bc0ff8  adrp x9,0x71044f8000
7101bc0ffc  add x9,x9,#0xa74
7101bc1000  ldrsw x8,[x9, x8, LSL #0x2]
7101bc1004  add x8,x8,x9
7101bc1008  br x8
7101bc100c  mov w8,#0x2
7101bc1010  str w8,[x19, #0xb68]
7101bc1014  add x0,x19,#0x388
7101bc1018  adrp x1,0x710436c000
7101bc101c  add x1,x1,#0x150
7101bc1020  b 0x7101bc1064
7101bc1024  mov w8,#0x1
7101bc1028  str w8,[x19, #0xb68]
7101bc102c  add x0,x19,#0x388
7101bc1030  adrp x1,0x710426f000
7101bc1034  add x1,x1,#0xe63
7101bc1038  b 0x7101bc1064
7101bc103c  add x0,x19,#0x388
7101bc1040  adrp x1,0x71042d6000
7101bc1044  add x1,x1,#0x117
7101bc1048  str wzr,[x19, #0xb68]
7101bc104c  b 0x7101bc1064
7101bc1050  orr w8,wzr,#0x3
7101bc1054  str w8,[x19, #0xb68]
7101bc1058  add x0,x19,#0x388
7101bc105c  adrp x1,0x7104454000
7101bc1060  add x1,x1,#0x887
7101bc1064  bl 0x710377a120
7101bc1068  fmov s0,0x3f800000
7101bc106c  add x0,x19,#0x2b8
7101bc1070  bl 0x710377aee0
7101bc1074  ldr w8,[x19, #0xb70]
7101bc1078  sub w9,w8,#0x2
7101bc107c  cmp w9,#0x4
7101bc1080  b.cs 0x7101bc10cc
7101bc1084  ldr x0,[x19, #0x7c0]
7101bc1088  ldr x8,[x0]
7101bc108c  ldr x8,[x8, #0x68]
7101bc1090  blr x8
7101bc1094  tbz w0,#0x0,0x7101bc2ec0
7101bc1098  ldr w8,[x19, #0xb70]
7101bc109c  sub w8,w8,#0x2
7101bc10a0  cmp w8,#0x3
7101bc10a4  b.hi 0x7101bc1304
7101bc10a8  adrp x9,0x71044f8000
7101bc10ac  add x9,x9,#0xa84
7101bc10b0  ldrsw x8,[x9, x8, LSL #0x2]
7101bc10b4  add x8,x8,x9
7101bc10b8  br x8
7101bc10bc  ldr w8,[x19, #0xad0]
7101bc10c0  cbnz w8,0x7101bc1304
7101bc10c4  add x20,x19,#0xa58
7101bc10c8  b 0x7101bc11a4
7101bc10cc  cmp w8,#0x1
7101bc10d0  b.eq 0x7101bc1124
7101bc10d4  cbnz w8,0x7101bc2ec0
7101bc10d8  ldr x0,[x19, #0x7b8]
7101bc10dc  ldr x8,[x0]
7101bc10e0  ldr x8,[x8, #0x78]
7101bc10e4  add x21,x19,#0x7b8
7101bc10e8  add x20,x19,#0x7a8
7101bc10ec  blr x8
7101bc10f0  tbz w0,#0x0,0x7101bc173c
7101bc10f4  ldr x0,[x20]
7101bc10f8  ldr x8,[x0]
7101bc10fc  ldr x8,[x8, #0x78]
7101bc1100  blr x8
7101bc1104  tbz w0,#0x0,0x7101bc173c
7101bc1108  ldr x0,[x21]
7101bc110c  ldr x8,[x0]
7101bc1110  ldr x8,[x8, #0x80]
7101bc1114  blr x8
7101bc1118  tbz w0,#0x0,0x7101bc1728
7101bc111c  ldr x0,[x20]
7101bc1120  b 0x7101bc172c
7101bc1124  ldr x0,[x19, #0x7b8]
7101bc1128  ldr x8,[x0]
7101bc112c  ldr x8,[x8, #0x78]
7101bc1130  add x20,x19,#0x7a8
7101bc1134  blr x8
7101bc1138  tbz w0,#0x0,0x7101bc15c4
7101bc113c  ldr x0,[x20]
7101bc1140  ldr x8,[x0]
7101bc1144  ldr x8,[x8, #0x78]
7101bc1148  blr x8
7101bc114c  tbz w0,#0x0,0x7101bc15c4
7101bc1150  ldr x0,[x19, #0x7b8]
7101bc1154  ldr x8,[x0]
7101bc1158  ldr x8,[x8, #0x80]
7101bc115c  blr x8
7101bc1160  tbz w0,#0x0,0x7101bc15b0
7101bc1164  ldr x0,[x20]
7101bc1168  b 0x7101bc15b4
7101bc116c  ldr w8,[x19, #0xad0]
7101bc1170  cmp w8,#0x2
7101bc1174  b.ne 0x7101bc1304
7101bc1178  add x20,x19,#0xa88
7101bc117c  b 0x7101bc11a4
7101bc1180  ldr w8,[x19, #0xad0]
7101bc1184  cmp w8,#0x3
7101bc1188  b.ne 0x7101bc1304
7101bc118c  add x20,x19,#0xaa0
7101bc1190  b 0x7101bc11a4
7101bc1194  ldr w8,[x19, #0xad0]
7101bc1198  cmp w8,#0x1
7101bc119c  b.ne 0x7101bc1304
7101bc11a0  add x20,x19,#0xa70
7101bc11a4  ldp x8,x9,[x20]
7101bc11a8  cmp x9,x8
7101bc11ac  b.eq 0x7101bc1304
7101bc11b0  mov x24,xzr
7101bc11b4  mov w25,#0x8
7101bc11b8  adrp x26,0x7105332000
7101bc11bc  mov w27,#0x8
7101bc11c0  sub x9,x9,x8
7101bc11c4  asr x9,x9,#0x3
7101bc11c8  cmp x9,x24
7101bc11cc  b.ls 0x7101bc2ee4
7101bc11d0  ldr x1,[x8, x24, LSL #0x3]
7101bc11d4  ldr w2,[x19, #0xad0]
7101bc11d8  mov x0,x19
7101bc11dc  bl 0x7101bbd2b0
7101bc11e0  ldr x8,[x19, #0xac0]
7101bc11e4  ldr x23,[x19, #0xab8]
7101bc11e8  sub x8,x8,x23
7101bc11ec  asr x8,x8,#0x4
7101bc11f0  cmp x8,x24
7101bc11f4  b.ls 0x7101bc12e8
7101bc11f8  mov w21,w0
7101bc11fc  mov w0,#0x10
7101bc1200  mov w1,#0x8
7101bc1204  bl 0x710392e290
7101bc1208  mov x22,x0
7101bc120c  cbnz x0,0x7101bc1250
7101bc1210  ldr x0,[x26, #0xf00]
7101bc1214  cbz x0,0x7101bc124c
7101bc1218  str wzr,[sp, #0xd8]
7101bc121c  str x25,[sp, #0x138]
7101bc1220  ldr x8,[x0]
7101bc1224  ldr x8,[x8, #0x30]
7101bc1228  add x1,sp,#0xd8
7101bc122c  add x2,sp,#0x138
7101bc1230  blr x8
7101bc1234  tbz w0,#0x0,0x7101bc124c
7101bc1238  mov w0,#0x10
7101bc123c  mov w1,#0x8
7101bc1240  bl 0x710392e290
7101bc1244  mov x22,x0
7101bc1248  cbnz x0,0x7101bc1250
7101bc124c  mov x22,xzr
7101bc1250  str xzr,[x22]
7101bc1254  ldr x8,[x23, x27, LSL #0x0]
7101bc1258  ldr x8,[x8, #0x8]
7101bc125c  cbz x8,0x7101bc12bc
7101bc1260  ldr x0,[x8, #0x60]
7101bc1264  cbz x0,0x7101bc12bc
7101bc1268  ldr x8,[x8, #0x18]
7101bc126c  add x1,x8,#0xb0
7101bc1270  bl 0x7103796f20
7101bc1274  str x0,[x22]
7101bc1278  cbz x0,0x7101bc12e0
7101bc127c  ldr x8,[x0]
7101bc1280  ldr x8,[x8, #0x208]
7101bc1284  and w1,w21,#0x1
7101bc1288  mov x23,x0
7101bc128c  blr x8
7101bc1290  ldr x8,[x23]
7101bc1294  ldr x8,[x8, #0x200]
7101bc1298  mov x0,x23
7101bc129c  blr x8
7101bc12a0  tbz w0,#0x0,0x7101bc12c4
7101bc12a4  ldr x8,[x23]
7101bc12a8  ldr x8,[x8, #0x210]
7101bc12ac  mov x0,x23
7101bc12b0  blr x8
7101bc12b4  eor w8,w0,#0x1
7101bc12b8  b 0x7101bc12c8
7101bc12bc  str xzr,[x22]
7101bc12c0  b 0x7101bc12e0
7101bc12c4  mov w8,#0x1
7101bc12c8  ldr x9,[x23]
7101bc12cc  ldr x9,[x9, #0x388]
7101bc12d0  and w1,w8,#0x1
7101bc12d4  mov x0,x23
7101bc12d8  mov w2,wzr
7101bc12dc  blr x9
7101bc12e0  mov x0,x22
7101bc12e4  bl 0x710392eb40
7101bc12e8  ldp x8,x9,[x20]
7101bc12ec  sub x10,x9,x8
7101bc12f0  add x24,x24,#0x1
7101bc12f4  add x27,x27,#0x10
7101bc12f8  asr x10,x10,#0x3
7101bc12fc  cmp x10,x24
7101bc1300  b.hi 0x7101bc11c0
7101bc1304  ldr x20,[x19, #0xb30]
7101bc1308  cbz x20,0x7101bc1470
7101bc130c  ldr x8,[x19, #0x7c0]
7101bc1310  ldrsw x8,[x8, #0x2b4]
7101bc1314  cmn w8,#0x1
7101bc1318  b.eq 0x7101bc1470
7101bc131c  ldr w9,[x19, #0xb74]
7101bc1320  cmp w9,#0x1
7101bc1324  b.eq 0x7101bc1348
7101bc1328  cmp w9,#0x2
7101bc132c  b.eq 0x7101bc1340
7101bc1330  cmp w9,#0x3
7101bc1334  b.ne 0x7101bc1350
7101bc1338  add x9,x19,#0xaa0
7101bc133c  b 0x7101bc1354
7101bc1340  add x9,x19,#0xa88
7101bc1344  b 0x7101bc1354
7101bc1348  add x9,x19,#0xa70
7101bc134c  b 0x7101bc1354
7101bc1350  add x9,x19,#0xa58
7101bc1354  ldp x10,x9,[x9]
7101bc1358  sub x9,x9,x10
7101bc135c  asr x9,x9,#0x3
7101bc1360  cmp x9,x8
7101bc1364  b.ls 0x7101bc1470
7101bc1368  ldr x22,[x10, x8, LSL #0x3]
7101bc136c  and x8,x22,#-0x100000000000000
7101bc1370  orr x9,xzr,#0x1e00000000000000
7101bc1374  cmp x8,x9
7101bc1378  b.ne 0x7101bc1470
7101bc137c  and x8,x22,#0xffffffffff
7101bc1380  cbz x8,0x7101bc1470
7101bc1384  ldr w23,[x19, #0xb70]
7101bc1388  cmp w23,#0x2
7101bc138c  b.ne 0x7101bc1448
7101bc1390  adrp x8,0x710532f000
7101bc1394  ldr x8,[x8, #0x730]
7101bc1398  ldr x8,[x8, #0x8]
7101bc139c  ldr x8,[x8, #0x268]
7101bc13a0  ldr x21,[x8, #0x8]
7101bc13a4  mov x1,#0x64e2
7101bc13a8  movk x1,#0xbd35, LSL #16
7101bc13ac  movk x1,#0x10, LSL #32
7101bc13b0  mov x0,x21
7101bc13b4  bl 0x710327fb30
7101bc13b8  and x8,x0,#-0x100000000000000
7101bc13bc  orr x24,xzr,#0x1e00000000000000
7101bc13c0  cmp x8,x24
7101bc13c4  b.ne 0x7101bc13dc
7101bc13c8  and x8,x0,#0xffffffffff
7101bc13cc  cbz x8,0x7101bc13dc
7101bc13d0  eor x8,x0,x22
7101bc13d4  tst x8,#0xffffffffff
7101bc13d8  b.eq 0x7101bc1470
7101bc13dc  mov x1,#0xf289
7101bc13e0  movk x1,#0x346e, LSL #16
7101bc13e4  movk x1,#0xe, LSL #32
7101bc13e8  mov x0,x21
7101bc13ec  bl 0x710327fb30
7101bc13f0  and x8,x0,#-0x100000000000000
7101bc13f4  cmp x8,x24
7101bc13f8  b.ne 0x7101bc1410
7101bc13fc  and x8,x0,#0xffffffffff
7101bc1400  cbz x8,0x7101bc1410
7101bc1404  eor x8,x0,x22
7101bc1408  tst x8,#0xffffffffff
7101bc140c  b.eq 0x7101bc1470
7101bc1410  mov x1,#0xc799
7101bc1414  movk x1,#0x4c25, LSL #16
7101bc1418  movk x1,#0x12, LSL #32
7101bc141c  mov x0,x21
7101bc1420  bl 0x710327fb30
7101bc1424  and x8,x0,#-0x100000000000000
7101bc1428  orr x9,xzr,#0x1e00000000000000
7101bc142c  cmp x8,x9
7101bc1430  b.ne 0x7101bc1448
7101bc1434  and x8,x0,#0xffffffffff
7101bc1438  cbz x8,0x7101bc1448
7101bc143c  eor x8,x0,x22
7101bc1440  tst x8,#0xffffffffff
7101bc1444  b.eq 0x7101bc1470
7101bc1448  cmp w23,#0x5
7101bc144c  cset w8,eq
7101bc1450  str x22,[sp, #0x138]
7101bc1454  add x1,sp,#0x138
7101bc1458  add x2,sp,#0xd8
7101bc145c  strb w8,[sp, #0xd8]
7101bc1460  ldr x8,[x20]
7101bc1464  ldr x8,[x8, #0x30]
7101bc1468  mov x0,x20
7101bc146c  blr x8
7101bc1470  ldr x12,[x19, #0x7c0]
7101bc1474  ldrsw x9,[x19, #0xbd4]
7101bc1478  cmn w9,#0x1
7101bc147c  ldr w20,[x12, #0x2a4]
7101bc1480  b.eq 0x7101bc14c8
7101bc1484  ldr w8,[x12, #0x28c]
7101bc1488  sdiv w10,w9,w8
7101bc148c  msub w8,w10,w8,w9
7101bc1490  cmn w20,#0x1
7101bc1494  b.eq 0x7101bc14d4
7101bc1498  ldr w10,[x12, #0x28c]
7101bc149c  sdiv w11,w20,w10
7101bc14a0  msub w11,w11,w10,w20
7101bc14a4  cmn w9,#0x1
7101bc14a8  b.eq 0x7101bc14e0
7101bc14ac  ldr w10,[x12, #0x28c]
7101bc14b0  sdiv w10,w9,w10
7101bc14b4  cmn w20,#0x1
7101bc14b8  b.eq 0x7101bc14ec
7101bc14bc  ldr w12,[x12, #0x28c]
7101bc14c0  sdiv w12,w20,w12
7101bc14c4  b 0x7101bc14f0
7101bc14c8  mov w8,#0xffffffff
7101bc14cc  cmn w20,#0x1
7101bc14d0  b.ne 0x7101bc1498
7101bc14d4  mov w11,#0xffffffff
7101bc14d8  cmn w9,#0x1
7101bc14dc  b.ne 0x7101bc14ac
7101bc14e0  mov w10,#0xffffffff
7101bc14e4  cmn w20,#0x1
7101bc14e8  b.ne 0x7101bc14bc
7101bc14ec  mov w12,#0xffffffff
7101bc14f0  sxtw x24,w20
7101bc14f4  cmp w10,w12
7101bc14f8  b.ne 0x7101bc1520
7101bc14fc  ldr w9,[x19, #0xb74]
7101bc1500  cmp w9,#0x1
7101bc1504  b.eq 0x7101bc1558
7101bc1508  cmp w9,#0x2
7101bc150c  b.eq 0x7101bc1550
7101bc1510  cmp w9,#0x3
7101bc1514  b.ne 0x7101bc1560
7101bc1518  add x10,x19,#0xaa0
7101bc151c  b 0x7101bc1564
7101bc1520  cmp w8,w11
7101bc1524  b.ne 0x7101bc1bc4
7101bc1528  ldr w8,[x19, #0xb74]
7101bc152c  cbnz w12,0x7101bc1b4c
7101bc1530  cmp w8,#0x1
7101bc1534  b.eq 0x7101bc1b28
7101bc1538  cmp w8,#0x2
7101bc153c  b.eq 0x7101bc1b20
7101bc1540  cmp w8,#0x3
7101bc1544  b.ne 0x7101bc1b30
7101bc1548  add x11,x19,#0xaa0
7101bc154c  b 0x7101bc1b34
7101bc1550  add x10,x19,#0xa88
7101bc1554  b 0x7101bc1564
7101bc1558  add x10,x19,#0xa70
7101bc155c  b 0x7101bc1564
7101bc1560  add x10,x19,#0xa58
7101bc1564  ldp x13,x10,[x10]
7101bc1568  sub x10,x10,x13
7101bc156c  add x12,x24,#0x8
7101bc1570  asr x10,x10,#0x3
7101bc1574  cmp x10,x12
7101bc1578  b.hi 0x7101bc1bc4
7101bc157c  cmp w8,w11
7101bc1580  b.eq 0x7101bc1bc4
7101bc1584  cmp w11,#0x7
7101bc1588  b.eq 0x7101bc1bc4
7101bc158c  cmp w9,#0x1
7101bc1590  b.eq 0x7101bc1af0
7101bc1594  cmp w9,#0x2
7101bc1598  b.eq 0x7101bc1ae4
7101bc159c  cmp w9,#0x3
7101bc15a0  b.ne 0x7101bc1afc
7101bc15a4  add x9,x19,#0xaa0
7101bc15a8  cbnz w8,0x7101bc1b04
7101bc15ac  b 0x7101bc1bc4
7101bc15b0  ldr x0,[x19, #0x7b8]
7101bc15b4  ldr x8,[x0]
7101bc15b8  ldr x8,[x8, #0x70]
7101bc15bc  mov w1,wzr
7101bc15c0  blr x8
7101bc15c4  ldr x0,[x19, #0x7b8]
7101bc15c8  ldr x8,[x0]
7101bc15cc  ldr x8,[x8, #0x78]
7101bc15d0  blr x8
7101bc15d4  tbz w0,#0x0,0x7101bc1620
7101bc15d8  ldr x0,[x19, #0x7b8]
7101bc15dc  ldr s0,[x0, #0x234]
7101bc15e0  fcmp s0,#0.0
7101bc15e4  b.le 0x7101bc16ac
7101bc15e8  ldr x8,[x0]
7101bc15ec  ldr x8,[x8, #0x70]
7101bc15f0  mov w1,wzr
7101bc15f4  blr x8
7101bc15f8  ldr x0,[x19, #0x7b8]
7101bc15fc  bl 0x710376b960
7101bc1600  ldr x0,[x19, #0x7a8]
7101bc1604  strb wzr,[x19, #0xb6d]
7101bc1608  ldr x8,[x0]
7101bc160c  ldr x8,[x8, #0x70]
7101bc1610  mov w1,#0x1
7101bc1614  blr x8
7101bc1618  orr w1,wzr,#0xc
7101bc161c  b 0x7101bc190c
7101bc1620  ldr x0,[x20]
7101bc1624  ldr x8,[x0]
7101bc1628  ldr x8,[x8, #0x78]
7101bc162c  blr x8
7101bc1630  tbz w0,#0x0,0x7101bc2ec0
7101bc1634  ldr x0,[x20]
7101bc1638  ldr w20,[x0, #0x254]
7101bc163c  cmn w20,#0x1
7101bc1640  b.eq 0x7101bc2ec0
7101bc1644  cmp w20,#0xd
7101bc1648  b.ne 0x7101bc1954
7101bc164c  mov w21,#0x1
7101bc1650  strb w21,[x19, #0xb6e]
7101bc1654  bl 0x710376b960
7101bc1658  ldrb w8,[x19, #0x10]
7101bc165c  cbz w8,0x7101bc1678
7101bc1660  add x0,x19,#0x3e8
7101bc1664  bl 0x710377b140
7101bc1668  add x0,x19,#0x528
7101bc166c  bl 0x710377b140
7101bc1670  add x0,x19,#0x668
7101bc1674  bl 0x710377b140
7101bc1678  ldr x0,[x19, #0x7a8]
7101bc167c  ldr x8,[x0]
7101bc1680  ldr x8,[x8, #0x70]
7101bc1684  mov w1,wzr
7101bc1688  blr x8
7101bc168c  ldr x8,[x19, #0x18]
7101bc1690  ldr x8,[x8]
7101bc1694  ldr x8,[x8]
7101bc1698  ldr x8,[x8, #0x600]
7101bc169c  strb w21,[x8, #0x410]
7101bc16a0  strb w21,[x8, #0x428]
7101bc16a4  mov w8,#0xd
7101bc16a8  b 0x7101bc195c
7101bc16ac  b.pl 0x7101bc16e8
7101bc16b0  ldr x8,[x0]
7101bc16b4  ldr x8,[x8, #0x70]
7101bc16b8  mov w1,wzr
7101bc16bc  blr x8
7101bc16c0  ldr x0,[x19, #0x7b8]
7101bc16c4  bl 0x710376b960
7101bc16c8  ldr x0,[x19, #0x7a8]
7101bc16cc  strb wzr,[x19, #0xb6d]
7101bc16d0  ldr x8,[x0]
7101bc16d4  ldr x8,[x8, #0x70]
7101bc16d8  mov w1,#0x1
7101bc16dc  blr x8
7101bc16e0  orr w1,wzr,#0x7
7101bc16e4  b 0x7101bc190c
7101bc16e8  ldrb w8,[x19, #0xbc8]
7101bc16ec  cbnz w8,0x7101bc16fc
7101bc16f0  ldr w8,[x19, #0xbb4]
7101bc16f4  cmp w8,#0xd
7101bc16f8  b.eq 0x7101bc18fc
7101bc16fc  fmov s0,0x3f800000
7101bc1700  add x0,x19,#0x1a8
7101bc1704  strb wzr,[x19, #0xbc8]
7101bc1708  bl 0x710377aee0
7101bc170c  add x0,x19,#0x348
7101bc1710  adrp x1,0x710435b000
7101bc1714  add x1,x1,#0x54b
7101bc1718  bl 0x710377a120
7101bc171c  mov w8,#0xd
7101bc1720  str w8,[x19, #0xbb4]
7101bc1724  b 0x7101bc18fc
7101bc1728  ldr x0,[x21]
7101bc172c  ldr x8,[x0]
7101bc1730  ldr x8,[x8, #0x70]
7101bc1734  mov w1,wzr
7101bc1738  blr x8
7101bc173c  ldr x0,[x21]
7101bc1740  ldr x8,[x0]
7101bc1744  ldr x8,[x8, #0x78]
7101bc1748  blr x8
7101bc174c  tbz w0,#0x0,0x7101bc17a0
7101bc1750  ldr x0,[x21]
7101bc1754  ldr s0,[x0, #0x234]
7101bc1758  fcmp s0,#0.0
7101bc175c  b.le 0x7101bc1880
7101bc1760  ldr x8,[x0]
7101bc1764  ldr x8,[x8, #0x70]
7101bc1768  mov w1,wzr
7101bc176c  blr x8
7101bc1770  ldr x0,[x19, #0x7b8]
7101bc1774  bl 0x710376b960
7101bc1778  ldr x0,[x19, #0x7a8]
7101bc177c  strb wzr,[x19, #0xb6d]
7101bc1780  ldr x8,[x0]
7101bc1784  ldr x8,[x8, #0x70]
7101bc1788  mov w1,#0x1
7101bc178c  blr x8
7101bc1790  ldrb w8,[x19, #0xbdc]
7101bc1794  cbz w8,0x7101bc1908
7101bc1798  mov w1,#0x5
7101bc179c  b 0x7101bc190c
7101bc17a0  ldr x0,[x20]
7101bc17a4  ldr x8,[x0]
7101bc17a8  ldr x8,[x8, #0x78]
7101bc17ac  blr x8
7101bc17b0  tbz w0,#0x0,0x7101bc2ec0
7101bc17b4  ldr x8,[x20]
7101bc17b8  ldr w22,[x8, #0x254]
7101bc17bc  cmn w22,#0x1
7101bc17c0  b.eq 0x7101bc2ec0
7101bc17c4  cmp w22,#0xd
7101bc17c8  b.ne 0x7101bc191c
7101bc17cc  mov x0,x21
7101bc17d0  mov w1,wzr
7101bc17d4  mov w2,wzr
7101bc17d8  bl 0x7103771a80
7101bc17dc  ldr x0,[x21]
7101bc17e0  ldr x8,[x0]
7101bc17e4  ldr x8,[x8, #0x70]
7101bc17e8  mov w1,#0x1
7101bc17ec  blr x8
7101bc17f0  adrp x8,0x710532f000
7101bc17f4  ldr x8,[x8, #0x8d0]
7101bc17f8  ldr x0,[x8, #0x8]
7101bc17fc  ldrb w8,[x0, #0x191]
7101bc1800  cbnz w8,0x7101bc1a34
7101bc1804  mov x20,#0x5170
7101bc1808  movk x20,#0xc0b6, LSL #16
7101bc180c  movk x20,#0x10, LSL #32
7101bc1810  mov w2,#0x4
7101bc1814  mov x1,x20
7101bc1818  bl 0x7103313f20
7101bc181c  tbz w0,#0x0,0x7101bc1a34
7101bc1820  add x0,sp,#0x138
7101bc1824  mov x1,x20
7101bc1828  bl 0x71024076d0
7101bc182c  ldr x8,[sp, #0x148]
7101bc1830  adrp x9,0x7104f73000
7101bc1834  add x9,x9,#0xd50
7101bc1838  str x9,[sp, #0x140]
7101bc183c  cbz x8,0x7101bc1a60
7101bc1840  adrp x8,0x7106dd5000
7101bc1844  ldrb w8,[x8, #0x3a8]
7101bc1848  cmp w8,#0x1
7101bc184c  b.ne 0x7101bc1a60
7101bc1850  adrp x9,0x7106dd5000
7101bc1854  ldr w8,[sp, #0x150]
7101bc1858  ldr w9,[x9, #0x3ac]
7101bc185c  cmp w8,w9
7101bc1860  b.ne 0x7101bc1a60
7101bc1864  ldr x8,[sp, #0x148]
7101bc1868  ldr wzr,[x8, #0x38]!
7101bc186c  ldaxr w9,[x8]
7101bc1870  sub w9,w9,#0x1
7101bc1874  stlxr w10,w9,[x8]
7101bc1878  cbnz w10,0x7101bc186c
7101bc187c  b 0x7101bc1a60
7101bc1880  b.pl 0x7101bc18c0
7101bc1884  ldr x8,[x0]
7101bc1888  ldr x8,[x8, #0x70]
7101bc188c  mov w1,wzr
7101bc1890  blr x8
7101bc1894  ldr x0,[x19, #0x7b8]
7101bc1898  bl 0x710376b960
7101bc189c  ldr x0,[x19, #0x7a8]
7101bc18a0  strb wzr,[x19, #0xb6d]
7101bc18a4  ldr x8,[x0]
7101bc18a8  ldr x8,[x8, #0x70]
7101bc18ac  mov w1,#0x1
7101bc18b0  blr x8
7101bc18b4  mov x0,x20
7101bc18b8  mov w1,wzr
7101bc18bc  b 0x7101bc1910
7101bc18c0  ldrb w8,[x19, #0xbc8]
7101bc18c4  cbnz w8,0x7101bc18d4
7101bc18c8  ldr w8,[x19, #0xbb0]
7101bc18cc  cmp w8,#0xd
7101bc18d0  b.eq 0x7101bc18fc
7101bc18d4  fmov s0,0x3f800000
7101bc18d8  add x0,x19,#0x1a8
7101bc18dc  strb wzr,[x19, #0xbc8]
7101bc18e0  bl 0x710377aee0
7101bc18e4  add x0,x19,#0x348
7101bc18e8  adrp x1,0x710435b000
7101bc18ec  add x1,x1,#0x54b
7101bc18f0  bl 0x710377a120
7101bc18f4  mov w8,#0xd
7101bc18f8  str w8,[x19, #0xbb0]
7101bc18fc  mov w8,#0x1
7101bc1900  strb w8,[x19, #0xb6d]
7101bc1904  b 0x7101bc2ec0
7101bc1908  orr w1,wzr,#0x6
7101bc190c  mov x0,x20
7101bc1910  mov w2,wzr
7101bc1914  bl 0x7103771a80
7101bc1918  b 0x7101bc2ec0
7101bc191c  add x0,x19,#0x7d0
7101bc1920  strb wzr,[x19, #0xb6d]
7101bc1924  str w22,[x19, #0x7f4]
7101bc1928  bl 0x7101bb0c00
7101bc192c  cmp w22,#0x6
7101bc1930  str w22,[x19, #0xbcc]
7101bc1934  b.eq 0x7101bc1f04
7101bc1938  cmp w22,#0x5
7101bc193c  b.ne 0x7101bc1f08
7101bc1940  mov w8,#0x1
7101bc1944  strb w8,[x19, #0xbdc]
7101bc1948  ldrb w8,[x19, #0xbc8]
7101bc194c  cbnz w8,0x7101bc1f54
7101bc1950  b 0x7101bc1f10
7101bc1954  mov w8,w20
7101bc1958  strb wzr,[x19, #0xb6d]
7101bc195c  add x0,x19,#0x7d0
7101bc1960  str w8,[x19, #0x7f4]
7101bc1964  bl 0x7101bb0c00
7101bc1968  cmp w20,#0xd
7101bc196c  orr w8,wzr,#0x7
7101bc1970  csel w24,w8,w20,eq
7101bc1974  ldrb w8,[x19, #0xbc8]
7101bc1978  str w24,[x19, #0xbd0]
7101bc197c  cbnz w8,0x7101bc19cc
7101bc1980  ldr w8,[x19, #0xbb4]
7101bc1984  cmp w8,w24
7101bc1988  b.ne 0x7101bc19cc
7101bc198c  cmp w24,#0xa
7101bc1990  b.eq 0x7101bc217c
7101bc1994  cmp w24,#0x7
7101bc1998  b.ne 0x7101bc2ec0
7101bc199c  ldr w8,[x19, #0xb54]
7101bc19a0  ldr w9,[x19, #0xbb8]
7101bc19a4  cmp w9,w8
7101bc19a8  b.eq 0x7101bc2ec0
7101bc19ac  fmov s0,0x3f800000
7101bc19b0  add x0,x19,#0x1a8
7101bc19b4  add x21,x19,#0xbb8
7101bc19b8  str w8,[x19, #0xbb8]
7101bc19bc  strb wzr,[x19, #0xbc8]
7101bc19c0  bl 0x710377aee0
7101bc19c4  add x20,x19,#0x348
7101bc19c8  b 0x7101bc1a04
7101bc19cc  fmov s0,0x3f800000
7101bc19d0  add x0,x19,#0x1a8
7101bc19d4  strb wzr,[x19, #0xbc8]
7101bc19d8  bl 0x710377aee0
7101bc19dc  sub w8,w24,#0x7
7101bc19e0  cmp w8,#0x6
7101bc19e4  b.hi 0x7101bc1fc4
7101bc19e8  adrp x9,0x71044f8000
7101bc19ec  add x9,x9,#0xb00
7101bc19f0  add x20,x19,#0x348
7101bc19f4  ldrsw x8,[x9, x8, LSL #0x2]
7101bc19f8  add x8,x8,x9
7101bc19fc  br x8
7101bc1a00  add x21,x19,#0xbb8
7101bc1a04  ldr w8,[x21]
7101bc1a08  sub w8,w8,#0x1
7101bc1a0c  cmp w8,#0x5
7101bc1a10  b.hi 0x7101bc2b44
7101bc1a14  adrp x9,0x71044f8000
7101bc1a18  add x9,x9,#0xb1c
7101bc1a1c  ldrsw x8,[x9, x8, LSL #0x2]
7101bc1a20  add x8,x8,x9
7101bc1a24  br x8
7101bc1a28  adrp x1,0x7104401000
7101bc1a2c  add x1,x1,#0x2c5
7101bc1a30  b 0x7101bc2b3c
7101bc1a34  mov x8,#0x650000000000
7101bc1a38  movk x8,#0x87, LSL #48
7101bc1a3c  strb wzr,[sp, #0x158]
7101bc1a40  stp xzr,x8,[sp, #0x148]
7101bc1a44  mov x8,#-0x1
7101bc1a48  stp x8,xzr,[sp, #0x160]
7101bc1a4c  adrp x8,0x7104f73000
7101bc1a50  add x8,x8,#0xd50
7101bc1a54  str wzr,[sp, #0x138]
7101bc1a58  str xzr,[sp, #0x170]
7101bc1a5c  str x8,[sp, #0x140]
7101bc1a60  str xzr,[sp, #0x148]
7101bc1a64  strb wzr,[sp, #0x158]
7101bc1a68  ldr x0,[x19, #0x7a8]
7101bc1a6c  mov w20,#0x1
7101bc1a70  strb w20,[x19, #0xb6d]
7101bc1a74  bl 0x710376b960
7101bc1a78  ldrb w8,[x19, #0x10]
7101bc1a7c  cbz w8,0x7101bc1a98
7101bc1a80  add x0,x19,#0x3e8
7101bc1a84  bl 0x710377b140
7101bc1a88  add x0,x19,#0x528
7101bc1a8c  bl 0x710377b140
7101bc1a90  add x0,x19,#0x668
7101bc1a94  bl 0x710377b140
7101bc1a98  ldr x0,[x19, #0x7a8]
7101bc1a9c  ldr x8,[x0]
7101bc1aa0  ldr x8,[x8, #0x70]
7101bc1aa4  mov w1,wzr
7101bc1aa8  blr x8
7101bc1aac  ldr x8,[x19, #0x18]
7101bc1ab0  ldr x8,[x8]
7101bc1ab4  ldr x8,[x8]
7101bc1ab8  ldr x8,[x8, #0x600]
7101bc1abc  strb w20,[x8, #0x410]
7101bc1ac0  strb w20,[x8, #0x428]
7101bc1ac4  add x0,x19,#0x7d0
7101bc1ac8  mov w8,#0xd
7101bc1acc  str w8,[x19, #0x7f4]
7101bc1ad0  bl 0x7101bb0c00
7101bc1ad4  str wzr,[x19, #0xbcc]
7101bc1ad8  ldrb w8,[x19, #0xbc8]
7101bc1adc  cbnz w8,0x7101bc1f54
7101bc1ae0  b 0x7101bc1f10
7101bc1ae4  add x9,x19,#0xa88
7101bc1ae8  cbnz w8,0x7101bc1b04
7101bc1aec  b 0x7101bc1bc4
7101bc1af0  add x9,x19,#0xa70
7101bc1af4  cbnz w8,0x7101bc1b04
7101bc1af8  b 0x7101bc1bc4
7101bc1afc  add x9,x19,#0xa58
7101bc1b00  cbz w8,0x7101bc1bc4
7101bc1b04  ldp x10,x9,[x9]
7101bc1b08  sub x9,x9,x10
7101bc1b0c  add x8,x24,#0x1
7101bc1b10  asr x9,x9,#0x3
7101bc1b14  cmp x9,x8
7101bc1b18  b.ls 0x7101bc1ba8
7101bc1b1c  b 0x7101bc1bc4
7101bc1b20  add x11,x19,#0xa88
7101bc1b24  b 0x7101bc1b34
7101bc1b28  add x11,x19,#0xa70
7101bc1b2c  b 0x7101bc1b34
7101bc1b30  add x11,x19,#0xa58
7101bc1b34  ldp x12,x11,[x11]
7101bc1b38  sub x11,x11,x12
7101bc1b3c  add x9,x9,#0x8
7101bc1b40  asr x11,x11,#0x3
7101bc1b44  cmp x11,x9
7101bc1b48  b.hi 0x7101bc1ba8
7101bc1b4c  cmp w8,#0x1
7101bc1b50  b.eq 0x7101bc1b7c
7101bc1b54  cmp w8,#0x2
7101bc1b58  b.eq 0x7101bc1b70
7101bc1b5c  cmp w8,#0x3
7101bc1b60  b.ne 0x7101bc1b88
7101bc1b64  add x8,x19,#0xaa0
7101bc1b68  cbnz w10,0x7101bc1b90
7101bc1b6c  b 0x7101bc1bc4
7101bc1b70  add x8,x19,#0xa88
7101bc1b74  cbnz w10,0x7101bc1b90
7101bc1b78  b 0x7101bc1bc4
7101bc1b7c  add x8,x19,#0xa70
7101bc1b80  cbnz w10,0x7101bc1b90
7101bc1b84  b 0x7101bc1bc4
7101bc1b88  add x8,x19,#0xa58
7101bc1b8c  cbz w10,0x7101bc1bc4
7101bc1b90  ldp x10,x8,[x8]
7101bc1b94  sub x8,x8,x10
7101bc1b98  add x9,x24,#0x8
7101bc1b9c  asr x8,x8,#0x3
7101bc1ba0  cmp x8,x9
7101bc1ba4  b.hi 0x7101bc1bc4
7101bc1ba8  ldr x8,[x19, #0x18]
7101bc1bac  ldr x8,[x8]
7101bc1bb0  ldr x8,[x8]
7101bc1bb4  ldr x8,[x8, #0x600]
7101bc1bb8  mov w9,#0x1
7101bc1bbc  strb w9,[x8, #0x410]
7101bc1bc0  strb w9,[x8, #0x428]
7101bc1bc4  ldr x8,[x19, #0x7c0]
7101bc1bc8  str w20,[x19, #0xbd4]
7101bc1bcc  ldr w8,[x8, #0x260]
7101bc1bd0  ldr x0,[x19, #0x7b8]
7101bc1bd4  str w8,[x19, #0xbd8]
7101bc1bd8  ldr x8,[x0]
7101bc1bdc  ldr x8,[x8, #0x78]
7101bc1be0  add x22,x19,#0x7c0
7101bc1be4  blr x8
7101bc1be8  mov w21,w0
7101bc1bec  ldr x0,[x19, #0x7c0]
7101bc1bf0  ldr w8,[x0, #0x2b8]
7101bc1bf4  cmp w8,#0x2
7101bc1bf8  b.eq 0x7101bc1ccc
7101bc1bfc  add x23,x19,#0x7b8
7101bc1c00  cmp w8,#0x1
7101bc1c04  b.ne 0x7101bc1ce4
7101bc1c08  ldr x8,[x0]
7101bc1c0c  ldr x8,[x8, #0x70]
7101bc1c10  mov w1,wzr
7101bc1c14  blr x8
7101bc1c18  ldr x0,[x23]
7101bc1c1c  ldr x8,[x0]
7101bc1c20  ldr x8,[x8, #0x70]
7101bc1c24  mov w1,#0x1
7101bc1c28  blr x8
7101bc1c2c  mov x0,x23
7101bc1c30  mov w1,wzr
7101bc1c34  mov w2,wzr
7101bc1c38  bl 0x7103771a80
7101bc1c3c  adrp x8,0x710532f000
7101bc1c40  ldr x8,[x8, #0x8d0]
7101bc1c44  ldr x0,[x8, #0x8]
7101bc1c48  ldrb w8,[x0, #0x191]
7101bc1c4c  cbnz w8,0x7101bc1d5c
7101bc1c50  mov x20,#0x5170
7101bc1c54  movk x20,#0xc0b6, LSL #16
7101bc1c58  movk x20,#0x10, LSL #32
7101bc1c5c  mov w2,#0x4
7101bc1c60  mov x1,x20
7101bc1c64  bl 0x7103313f20
7101bc1c68  tbz w0,#0x0,0x7101bc1d5c
7101bc1c6c  add x0,sp,#0x138
7101bc1c70  mov x1,x20
7101bc1c74  bl 0x71024076d0
7101bc1c78  ldr x8,[sp, #0x148]
7101bc1c7c  adrp x9,0x7104f73000
7101bc1c80  add x9,x9,#0xd50
7101bc1c84  str x9,[sp, #0x140]
7101bc1c88  cbz x8,0x7101bc1d88
7101bc1c8c  adrp x8,0x7106dd5000
7101bc1c90  ldrb w8,[x8, #0x3a8]
7101bc1c94  cmp w8,#0x1
7101bc1c98  b.ne 0x7101bc1d88
7101bc1c9c  adrp x9,0x7106dd5000
7101bc1ca0  ldr w8,[sp, #0x150]
7101bc1ca4  ldr w9,[x9, #0x3ac]
7101bc1ca8  cmp w8,w9
7101bc1cac  b.ne 0x7101bc1d88
7101bc1cb0  ldr x8,[sp, #0x148]
7101bc1cb4  ldr wzr,[x8, #0x38]!
7101bc1cb8  ldaxr w9,[x8]
7101bc1cbc  sub w9,w9,#0x1
7101bc1cc0  stlxr w10,w9,[x8]
7101bc1cc4  cbnz w10,0x7101bc1cb8
7101bc1cc8  b 0x7101bc1d88
7101bc1ccc  cmn w20,#0x1
7101bc1cd0  b.eq 0x7101bc1dfc
7101bc1cd4  ldr w8,[x0, #0x28c]
7101bc1cd8  sdiv w9,w20,w8
7101bc1cdc  msub w20,w9,w8,w20
7101bc1ce0  b 0x7101bc1e00
7101bc1ce4  ldr x8,[x0]
7101bc1ce8  ldr x8,[x8, #0x80]
7101bc1cec  blr x8
7101bc1cf0  mov w8,w0
7101bc1cf4  ldr x0,[x23]
7101bc1cf8  tbz w8,#0x0,0x7101bc1dd4
7101bc1cfc  ldr x8,[x0]
7101bc1d00  ldr x8,[x8, #0x70]
7101bc1d04  mov w1,wzr
7101bc1d08  blr x8
7101bc1d0c  ldr w8,[x19, #0xba8]
7101bc1d10  cmp w8,#0x4
7101bc1d14  b.cs 0x7101bc2eec
7101bc1d18  orr w9,wzr,#0xc
7101bc1d1c  madd x8,x8,x9,x19
7101bc1d20  ldr w9,[x8, #0xb78]
7101bc1d24  str w9,[x8, #0xb7c]
7101bc1d28  mov w9,#0x1
7101bc1d2c  strb w9,[x8, #0xb80]
7101bc1d30  ldr w8,[x19, #0xb70]
7101bc1d34  sub w8,w8,#0x2
7101bc1d38  cmp w8,#0x3
7101bc1d3c  b.hi 0x7101bc2308
7101bc1d40  adrp x9,0x71044f8000
7101bc1d44  add x9,x9,#0xab4
7101bc1d48  ldrsw x8,[x9, x8, LSL #0x2]
7101bc1d4c  add x8,x8,x9
7101bc1d50  br x8
7101bc1d54  add x8,x19,#0xa58
7101bc1d58  b 0x7101bc1ed0
7101bc1d5c  mov x8,#0x650000000000
7101bc1d60  movk x8,#0x87, LSL #48
7101bc1d64  strb wzr,[sp, #0x158]
7101bc1d68  stp xzr,x8,[sp, #0x148]
7101bc1d6c  mov x8,#-0x1
7101bc1d70  stp x8,xzr,[sp, #0x160]
7101bc1d74  adrp x8,0x7104f73000
7101bc1d78  add x8,x8,#0xd50
7101bc1d7c  str wzr,[sp, #0x138]
7101bc1d80  str xzr,[sp, #0x170]
7101bc1d84  str x8,[sp, #0x140]
7101bc1d88  str xzr,[sp, #0x148]
7101bc1d8c  strb wzr,[sp, #0x158]
7101bc1d90  ldr w8,[x19, #0xba8]
7101bc1d94  cmp w8,#0x4
7101bc1d98  b.cs 0x7101bc2eec
7101bc1d9c  orr w9,wzr,#0xc
7101bc1da0  madd x8,x8,x9,x19
7101bc1da4  ldr w9,[x8, #0xb78]
7101bc1da8  fmov s0,0x3f800000
7101bc1dac  add x0,x19,#0x1a8
7101bc1db0  str w9,[x8, #0xb7c]
7101bc1db4  mov w9,#0x1
7101bc1db8  strb w9,[x8, #0xb80]
7101bc1dbc  bl 0x710377aee0
7101bc1dc0  mov w8,#0x1
7101bc1dc4  strb w8,[x19, #0xbac]
7101bc1dc8  ldrb w8,[x19, #0xbbc]
7101bc1dcc  cbnz w8,0x7101bc2ec0
7101bc1dd0  b 0x7101bc234c
7101bc1dd4  ldr x8,[x0]
7101bc1dd8  ldr x8,[x8, #0x80]
7101bc1ddc  blr x8
7101bc1de0  tbz w0,#0x0,0x7101bc1e2c
7101bc1de4  ldr x0,[x19, #0x7c0]
7101bc1de8  ldr x8,[x0]
7101bc1dec  ldr x8,[x8, #0x70]
7101bc1df0  mov w1,wzr
7101bc1df4  blr x8
7101bc1df8  b 0x7101bc1d90
7101bc1dfc  mov w20,#0xffffffff
7101bc1e00  mov w2,#0x1
7101bc1e04  mov w3,#0x1
7101bc1e08  mov x0,x22
7101bc1e0c  mov w1,w20
7101bc1e10  bl 0x7103783c10
7101bc1e14  ldr x0,[x19, #0x7c0]
7101bc1e18  ldr x8,[x0]
7101bc1e1c  ldr x8,[x8, #0x70]
7101bc1e20  mov w1,#0x1
7101bc1e24  blr x8
7101bc1e28  b 0x7101bc2314
7101bc1e2c  ldr x0,[x23]
7101bc1e30  ldr x8,[x0]
7101bc1e34  ldr x8,[x8, #0x78]
7101bc1e38  blr x8
7101bc1e3c  mov w8,w0
7101bc1e40  ldr x0,[x23]
7101bc1e44  tbz w8,#0x0,0x7101bc1e74
7101bc1e48  ldr s0,[x0, #0x234]
7101bc1e4c  fcmp s0,#0.0
7101bc1e50  b.pl 0x7101bc1e74
7101bc1e54  ldr w8,[x19, #0xbd4]
7101bc1e58  ldr x0,[x19, #0x7c0]
7101bc1e5c  cmn w8,#0x1
7101bc1e60  b.eq 0x7101bc2028
7101bc1e64  ldr w9,[x0, #0x28c]
7101bc1e68  sdiv w10,w8,w9
7101bc1e6c  msub w20,w10,w9,w8
7101bc1e70  b 0x7101bc202c
7101bc1e74  ldr x8,[x0]
7101bc1e78  ldr x8,[x8, #0x78]
7101bc1e7c  blr x8
7101bc1e80  tbz w0,#0x0,0x7101bc2314
7101bc1e84  ldr x8,[x23]
7101bc1e88  ldr s0,[x8, #0x234]
7101bc1e8c  fcmp s0,#0.0
7101bc1e90  b.le 0x7101bc2314
7101bc1e94  ldr w9,[x19, #0xb74]
7101bc1e98  ldr w8,[x19, #0xbd4]
7101bc1e9c  cmp w9,#0x1
7101bc1ea0  b.eq 0x7101bc21d0
7101bc1ea4  cmp w9,#0x2
7101bc1ea8  b.eq 0x7101bc21d8
7101bc1eac  cmp w9,#0x3
7101bc1eb0  b.ne 0x7101bc21e0
7101bc1eb4  add x10,x19,#0xaa0
7101bc1eb8  b 0x7101bc21e4
7101bc1ebc  add x8,x19,#0xa88
7101bc1ec0  b 0x7101bc1ed0
7101bc1ec4  add x8,x19,#0xaa0
7101bc1ec8  b 0x7101bc1ed0
7101bc1ecc  add x8,x19,#0xa70
7101bc1ed0  ldp x9,x8,[x8]
7101bc1ed4  sub x8,x8,x9
7101bc1ed8  asr x8,x8,#0x3
7101bc1edc  cmp x8,x24
7101bc1ee0  b.ls 0x7101bc2308
7101bc1ee4  ldr x8,[x9, x24, LSL #0x3]
7101bc1ee8  and x9,x8,#-0x100000000000000
7101bc1eec  orr x10,xzr,#0x1e00000000000000
7101bc1ef0  cmp x9,x10
7101bc1ef4  b.ne 0x7101bc2314
7101bc1ef8  and x8,x8,#0xffffffffff
7101bc1efc  cbnz x8,0x7101bc2308
7101bc1f00  b 0x7101bc2314
7101bc1f04  strb wzr,[x19, #0xbdc]
7101bc1f08  ldrb w8,[x19, #0xbc8]
7101bc1f0c  cbnz w8,0x7101bc1f54
7101bc1f10  ldr w8,[x19, #0xbb0]
7101bc1f14  cmp w8,w22
7101bc1f18  b.ne 0x7101bc1f54
7101bc1f1c  cmp w22,#0x4
7101bc1f20  b.ne 0x7101bc2ec0
7101bc1f24  ldr w9,[x19, #0xbc0]
7101bc1f28  ldr w8,[x19, #0xb4c]
7101bc1f2c  cmp w9,w8
7101bc1f30  b.eq 0x7101bc2ec0
7101bc1f34  fmov s0,0x3f800000
7101bc1f38  add x0,x19,#0x1a8
7101bc1f3c  add x20,x19,#0xbc0
7101bc1f40  str w8,[x19, #0xbc0]
7101bc1f44  strb wzr,[x19, #0xbc8]
7101bc1f48  bl 0x710377aee0
7101bc1f4c  add x0,x19,#0x348
7101bc1f50  b 0x7101bc2144
7101bc1f54  fmov s0,0x3f800000
7101bc1f58  add x0,x19,#0x1a8
7101bc1f5c  strb wzr,[x19, #0xbc8]
7101bc1f60  bl 0x710377aee0
7101bc1f64  cmp w22,#0xd
7101bc1f68  b.hi 0x7101bc20ac
7101bc1f6c  mov w8,w22
7101bc1f70  adrp x9,0x71044f8000
7101bc1f74  add x9,x9,#0xb34
7101bc1f78  ldrsw x8,[x9, x8, LSL #0x2]
7101bc1f7c  add x8,x8,x9
7101bc1f80  add x0,x19,#0x348
7101bc1f84  br x8
7101bc1f88  adrp x1,0x7104443000
7101bc1f8c  add x1,x1,#0x4b2
7101bc1f90  b 0x7101bc2134
7101bc1f94  ldrb w10,[x19, #0xb60]
7101bc1f98  adrp x8,0x71042e6000
7101bc1f9c  add x8,x8,#0xf1b
7101bc1fa0  adrp x9,0x710435b000
7101bc1fa4  add x9,x9,#0x529
7101bc1fa8  b 0x7101bc2004
7101bc1fac  ldrb w10,[x19, #0xb58]
7101bc1fb0  adrp x8,0x71043df000
7101bc1fb4  add x8,x8,#0xf22
7101bc1fb8  adrp x9,0x71042e6000
7101bc1fbc  add x9,x9,#0xf39
7101bc1fc0  b 0x7101bc2004
7101bc1fc4  ldr x8,[x19, #0x350]
7101bc1fc8  ldr x0,[x8, #0x10]
7101bc1fcc  cbz x0,0x7101bc2b44
7101bc1fd0  add x1,sp,#0x138
7101bc1fd4  mov w2,wzr
7101bc1fd8  mov w3,wzr
7101bc1fdc  str wzr,[sp, #0x138]
7101bc1fe0  bl 0x71037a2270
7101bc1fe4  b 0x7101bc2b44
7101bc1fe8  add x21,x19,#0xbc4
7101bc1fec  b 0x7101bc21a8
7101bc1ff0  ldrb w10,[x19, #0xb6c]
7101bc1ff4  adrp x8,0x71043cf000
7101bc1ff8  add x8,x8,#0x283
7101bc1ffc  adrp x9,0x710424f000
7101bc2000  add x9,x9,#0x2ee
7101bc2004  cmp w10,#0x0
7101bc2008  csel x1,x9,x8,eq
7101bc200c  b 0x7101bc2b3c
7101bc2010  adrp x1,0x710433a000
7101bc2014  add x1,x1,#0x8
7101bc2018  b 0x7101bc2b3c
7101bc201c  adrp x1,0x710435b000
7101bc2020  add x1,x1,#0x54b
7101bc2024  b 0x7101bc2b3c
7101bc2028  mov w20,#0xffffffff
7101bc202c  ldr x8,[x0]
7101bc2030  ldr x8,[x8, #0x70]
7101bc2034  mov w1,#0x1
7101bc2038  mov w23,#0x1
7101bc203c  blr x8
7101bc2040  mov w2,#0x1
7101bc2044  mov w3,#0x1
7101bc2048  mov x0,x22
7101bc204c  mov w1,w20
7101bc2050  bl 0x7103783c10
7101bc2054  ldr x0,[x19, #0x7b8]
7101bc2058  ldr x8,[x0]
7101bc205c  ldr x8,[x8, #0x70]
7101bc2060  mov w1,wzr
7101bc2064  blr x8
7101bc2068  ldr w8,[x19, #0xba8]
7101bc206c  cmp w8,#0x4
7101bc2070  b.cs 0x7101bc2eec
7101bc2074  orr w9,wzr,#0xc
7101bc2078  madd x8,x8,x9,x19
7101bc207c  ldr w9,[x8, #0xb78]
7101bc2080  str w9,[x8, #0xb7c]
7101bc2084  strb w23,[x8, #0xb80]
7101bc2088  ldr w8,[x19, #0xb70]
7101bc208c  sub w8,w8,#0x2
7101bc2090  cmp w8,#0x3
7101bc2094  b.hi 0x7101bc2308
7101bc2098  adrp x9,0x71044f8000
7101bc209c  add x9,x9,#0xaa4
7101bc20a0  ldrsw x8,[x9, x8, LSL #0x2]
7101bc20a4  add x8,x8,x9
7101bc20a8  br x8
7101bc20ac  ldr x8,[x19, #0x350]
7101bc20b0  ldr x0,[x8, #0x10]
7101bc20b4  cbz x0,0x7101bc2174
7101bc20b8  add x1,sp,#0xd8
7101bc20bc  mov w2,wzr
7101bc20c0  mov w3,wzr
7101bc20c4  str wzr,[sp, #0xd8]
7101bc20c8  bl 0x71037a2270
7101bc20cc  b 0x7101bc2174
7101bc20d0  adrp x1,0x7104432000
7101bc20d4  add x1,x1,#0xea7
7101bc20d8  b 0x7101bc2134
7101bc20dc  adrp x1,0x71043f0000
7101bc20e0  add x1,x1,#0x7c3
7101bc20e4  b 0x7101bc2134
7101bc20e8  adrp x1,0x7104443000
7101bc20ec  add x1,x1,#0x4d0
7101bc20f0  b 0x7101bc2134
7101bc20f4  adrp x1,0x710435b000
7101bc20f8  add x1,x1,#0x54b
7101bc20fc  b 0x7101bc2134
7101bc2100  ldrb w10,[x19, #0xb48]
7101bc2104  adrp x8,0x71042c4000
7101bc2108  add x8,x8,#0xc0b
7101bc210c  adrp x9,0x710439d000
7101bc2110  add x9,x9,#0x2c9
7101bc2114  b 0x7101bc212c
7101bc2118  ldrb w10,[x19, #0xb49]
7101bc211c  adrp x8,0x7104443000
7101bc2120  add x8,x8,#0x495
7101bc2124  adrp x9,0x7104422000
7101bc2128  add x9,x9,#0x1e5
7101bc212c  cmp w10,#0x0
7101bc2130  csel x1,x9,x8,eq
7101bc2134  bl 0x710377a120
7101bc2138  str w22,[x19, #0xbb0]
7101bc213c  b 0x7101bc2ec0
7101bc2140  add x20,x19,#0xbc0
7101bc2144  ldr w8,[x20]
7101bc2148  sub w8,w8,#0x1
7101bc214c  cmp w8,#0x7
7101bc2150  b.hi 0x7101bc2174
7101bc2154  adrp x9,0x71044f8000
7101bc2158  add x9,x9,#0xb6c
7101bc215c  ldrsw x8,[x9, x8, LSL #0x2]
7101bc2160  add x8,x8,x9
7101bc2164  br x8
7101bc2168  adrp x1,0x7104401000
7101bc216c  add x1,x1,#0x2e3
7101bc2170  b 0x7101bc2134
7101bc2174  str w22,[x19, #0xbb0]
7101bc2178  b 0x7101bc2ec0
7101bc217c  ldr w9,[x19, #0xbc4]
7101bc2180  ldr w8,[x19, #0xb5c]
7101bc2184  cmp w9,w8
7101bc2188  b.eq 0x7101bc2ec0
7101bc218c  fmov s0,0x3f800000
7101bc2190  add x0,x19,#0x1a8
7101bc2194  add x21,x19,#0xbc4
7101bc2198  str w8,[x19, #0xbc4]
7101bc219c  strb wzr,[x19, #0xbc8]
7101bc21a0  bl 0x710377aee0
7101bc21a4  add x20,x19,#0x348
7101bc21a8  ldr w8,[x21]
7101bc21ac  cmp w8,#0x3
7101bc21b0  b.eq 0x7101bc282c
7101bc21b4  cmp w8,#0x2
7101bc21b8  b.eq 0x7101bc2820
7101bc21bc  cmp w8,#0x1
7101bc21c0  b.ne 0x7101bc2b44
7101bc21c4  adrp x1,0x7104291000
7101bc21c8  add x1,x1,#0xa51
7101bc21cc  b 0x7101bc2b3c
7101bc21d0  add x10,x19,#0xa70
7101bc21d4  b 0x7101bc21e4
7101bc21d8  add x10,x19,#0xa88
7101bc21dc  b 0x7101bc21e4
7101bc21e0  add x10,x19,#0xa58
7101bc21e4  ldp x11,x10,[x10]
7101bc21e8  sub x10,x10,x11
7101bc21ec  mov w9,wzr
7101bc21f0  mov w20,wzr
7101bc21f4  mov w12,#0xffffffff
7101bc21f8  asr x10,x10,#0x3
7101bc21fc  mov w11,#0x1
7101bc2200  cmn w8,#0x1
7101bc2204  b.eq 0x7101bc221c
7101bc2208  ldr x13,[x22]
7101bc220c  ldr w13,[x13, #0x28c]
7101bc2210  sdiv w14,w8,w13
7101bc2214  msub w13,w14,w13,w8
7101bc2218  b 0x7101bc2220
7101bc221c  mov w13,w12
7101bc2220  add w14,w13,w9
7101bc2224  sxtw x13,w14
7101bc2228  cmp x10,x13
7101bc222c  csel w20,w14,w20,hi
7101bc2230  cmp w11,#0xa
7101bc2234  b.hi 0x7101bc2248
7101bc2238  add w11,w11,#0x1
7101bc223c  add w9,w9,#0x8
7101bc2240  cmp x10,x13
7101bc2244  b.hi 0x7101bc2200
7101bc2248  ldr x0,[x19, #0x7c0]
7101bc224c  ldr x8,[x0]
7101bc2250  ldr x8,[x8, #0x70]
7101bc2254  mov w1,#0x1
7101bc2258  mov w23,#0x1
7101bc225c  blr x8
7101bc2260  mov w2,#0x1
7101bc2264  mov w3,#0x1
7101bc2268  mov x0,x22
7101bc226c  mov w1,w20
7101bc2270  bl 0x7103783c10
7101bc2274  ldr x0,[x19, #0x7b8]
7101bc2278  ldr x8,[x0]
7101bc227c  ldr x8,[x8, #0x70]
7101bc2280  mov w1,wzr
7101bc2284  blr x8
7101bc2288  ldr w8,[x19, #0xba8]
7101bc228c  cmp w8,#0x4
7101bc2290  b.cs 0x7101bc2eec
7101bc2294  orr w9,wzr,#0xc
7101bc2298  madd x8,x8,x9,x19
7101bc229c  ldr w9,[x8, #0xb78]
7101bc22a0  str w9,[x8, #0xb7c]
7101bc22a4  strb w23,[x8, #0xb80]
7101bc22a8  ldr w8,[x19, #0xb70]
7101bc22ac  sub w8,w8,#0x2
7101bc22b0  cmp w8,#0x3
7101bc22b4  b.hi 0x7101bc2308
7101bc22b8  adrp x9,0x71044f8000
7101bc22bc  add x9,x9,#0xa94
7101bc22c0  ldrsw x8,[x9, x8, LSL #0x2]
7101bc22c4  add x8,x8,x9
7101bc22c8  br x8
7101bc22cc  add x8,x19,#0xa58
7101bc22d0  b 0x7101bc22e8
7101bc22d4  add x8,x19,#0xa70
7101bc22d8  b 0x7101bc22e8
7101bc22dc  add x8,x19,#0xa88
7101bc22e0  b 0x7101bc22e8
7101bc22e4  add x8,x19,#0xaa0
7101bc22e8  ldp x10,x8,[x8]
7101bc22ec  sub x8,x8,x10
7101bc22f0  sxtw x9,w20
7101bc22f4  asr x8,x8,#0x3
7101bc22f8  cmp x8,x9
7101bc22fc  b.ls 0x7101bc2308
7101bc2300  ldr x8,[x10, x9, LSL #0x3]
7101bc2304  b 0x7101bc1ee8
7101bc2308  fmov s0,0x3f800000
7101bc230c  add x0,x19,#0x198
7101bc2310  bl 0x710377aee0
7101bc2314  and w8,w21,#0x1
7101bc2318  strb w8,[x19, #0xbac]
7101bc231c  tbnz w21,#0x0,0x7101bc2344
7101bc2320  ldr w8,[x19, #0xba8]
7101bc2324  cmp w8,#0x4
7101bc2328  b.cs 0x7101bc2eec
7101bc232c  orr w9,wzr,#0xc
7101bc2330  madd x8,x8,x9,x19
7101bc2334  str w20,[x8, #0xb78]
7101bc2338  mov w8,#0x1
7101bc233c  strb wzr,[x19, #0xbac]
7101bc2340  cbnz w8,0x7101bc23c8
7101bc2344  ldrb w8,[x19, #0xbbc]
7101bc2348  cbnz w8,0x7101bc2ec0
7101bc234c  add x0,x19,#0x348
7101bc2350  adrp x1,0x710435b000
7101bc2354  add x1,x1,#0x54b
7101bc2358  bl 0x710377a120
7101bc235c  mov w8,#0x1
7101bc2360  strb w8,[x19, #0xbbc]
7101bc2364  ldr x8,[x19, #0x360]
7101bc2368  ldr x0,[x8, #0x10]
7101bc236c  cbz x0,0x7101bc2384
7101bc2370  add x1,sp,#0xd8
7101bc2374  mov w2,wzr
7101bc2378  mov w3,wzr
7101bc237c  str wzr,[sp, #0xd8]
7101bc2380  bl 0x71037a2270
7101bc2384  ldr x8,[x19, #0x370]
7101bc2388  ldr x0,[x8, #0x10]
7101bc238c  cbz x0,0x7101bc23a4
7101bc2390  add x1,sp,#0xd8
7101bc2394  mov w2,wzr
7101bc2398  mov w3,wzr
7101bc239c  str wzr,[sp, #0xd8]
7101bc23a0  bl 0x71037a2270
7101bc23a4  ldr x8,[x19, #0x380]
7101bc23a8  ldr x0,[x8, #0x10]
7101bc23ac  cbz x0,0x7101bc2ec0
7101bc23b0  add x1,sp,#0xd8
7101bc23b4  str wzr,[sp, #0xd8]
7101bc23b8  mov w2,wzr
7101bc23bc  mov w3,wzr
7101bc23c0  bl 0x71037a2270
7101bc23c4  b 0x7101bc2ec0
7101bc23c8  ldr w8,[x19, #0xba8]
7101bc23cc  cmp w8,#0x4
7101bc23d0  b.cs 0x7101bc2eec
7101bc23d4  orr w9,wzr,#0xc
7101bc23d8  madd x9,x8,x9,x19
7101bc23dc  ldrsw x25,[x9, #0xb78]
7101bc23e0  ldr w9,[x9, #0xb7c]
7101bc23e4  cmp w25,w9
7101bc23e8  b.ne 0x7101bc23fc
7101bc23ec  orr w9,wzr,#0xc
7101bc23f0  madd x8,x8,x9,x19
7101bc23f4  ldrb w8,[x8, #0xb80]
7101bc23f8  cbz w8,0x7101bc2ec0
7101bc23fc  cmn w25,#0x1
7101bc2400  b.eq 0x7101bc2434
7101bc2404  adrp x26,0x710532f000
7101bc2408  ldr x8,[x26, #0x730]
7101bc240c  ldr x27,[x8, #0x8]
7101bc2410  ldr w8,[x19, #0xb74]
7101bc2414  cmp w8,#0x1
7101bc2418  b.eq 0x7101bc2494
7101bc241c  cmp w8,#0x2
7101bc2420  b.eq 0x7101bc248c
7101bc2424  cmp w8,#0x3
7101bc2428  b.ne 0x7101bc249c
7101bc242c  add x8,x19,#0xaa0
7101bc2430  b 0x7101bc24a0
7101bc2434  ldr x8,[x19, #0x360]
7101bc2438  ldr x0,[x8, #0x10]
7101bc243c  cbz x0,0x7101bc2454
7101bc2440  add x1,sp,#0x138
7101bc2444  mov w2,wzr
7101bc2448  mov w3,wzr
7101bc244c  str wzr,[sp, #0x138]
7101bc2450  bl 0x71037a2270
7101bc2454  ldr x8,[x19, #0x370]
7101bc2458  ldr x0,[x8, #0x10]
7101bc245c  cbz x0,0x7101bc2474
7101bc2460  add x1,sp,#0x138
7101bc2464  mov w2,wzr
7101bc2468  mov w3,wzr
7101bc246c  str wzr,[sp, #0x138]
7101bc2470  bl 0x71037a2270
7101bc2474  ldr x8,[x19, #0x380]
7101bc2478  ldr x0,[x8, #0x10]
7101bc247c  cbz x0,0x7101bc2ec0
7101bc2480  str wzr,[sp, #0x138]
7101bc2484  add x1,sp,#0x138
7101bc2488  b 0x7101bc23b8
7101bc248c  add x8,x19,#0xa88
7101bc2490  b 0x7101bc24a0
7101bc2494  add x8,x19,#0xa70
7101bc2498  b 0x7101bc24a0
7101bc249c  add x8,x19,#0xa58
7101bc24a0  stp xzr,xzr,[sp, #0x128]
7101bc24a4  str xzr,[sp, #0x120]
7101bc24a8  ldp x22,x8,[x8]
7101bc24ac  subs x21,x8,x22
7101bc24b0  b.eq 0x7101bc2554
7101bc24b4  asr x23,x21,#0x3
7101bc24b8  lsr x8,x23,#0x3d
7101bc24bc  cbnz x8,0x7101bc2ef0
7101bc24c0  mov w0,#0x10
7101bc24c4  mov x1,x21
7101bc24c8  bl 0x710392e290
7101bc24cc  mov x20,x0
7101bc24d0  cbnz x0,0x7101bc2518
7101bc24d4  adrp x8,0x7105332000
7101bc24d8  ldr x0,[x8, #0xf00]
7101bc24dc  cbz x0,0x7101bc2514
7101bc24e0  str wzr,[sp, #0xd8]
7101bc24e4  str x21,[sp, #0x138]
7101bc24e8  ldr x8,[x0]
7101bc24ec  ldr x8,[x8, #0x30]
7101bc24f0  add x1,sp,#0xd8
7101bc24f4  add x2,sp,#0x138
7101bc24f8  blr x8
7101bc24fc  tbz w0,#0x0,0x7101bc2514
7101bc2500  mov w0,#0x10
7101bc2504  mov x1,x21
7101bc2508  bl 0x710392e290
7101bc250c  mov x20,x0
7101bc2510  cbnz x0,0x7101bc2518
7101bc2514  mov x20,xzr
7101bc2518  add x8,sp,#0x120
7101bc251c  add x24,x8,#0x8
7101bc2520  add x8,x20,x23, LSL #0x3
7101bc2524  cmp x21,#0x1
7101bc2528  stp x20,x20,[sp, #0x120]
7101bc252c  str x8,[sp, #0x130]
7101bc2530  b.lt 0x7101bc256c
7101bc2534  mov x0,x20
7101bc2538  mov x1,x22
7101bc253c  mov x2,x21
7101bc2540  bl 0x71039c00e0
7101bc2544  add x8,x20,x21
7101bc2548  mov x28,x20
7101bc254c  str x8,[sp, #0x128]
7101bc2550  b 0x7101bc2574
7101bc2554  add x9,sp,#0x120
7101bc2558  mov x20,xzr
7101bc255c  mov x28,xzr
7101bc2560  mov x8,xzr
7101bc2564  add x24,x9,#0x8
7101bc2568  b 0x7101bc2574
7101bc256c  mov x28,x20
7101bc2570  mov x8,x20
7101bc2574  sub x8,x8,x28
7101bc2578  asr x8,x8,#0x3
7101bc257c  cmp x8,x25
7101bc2580  b.ls 0x7101bc2eac
7101bc2584  ldr x8,[x28, x25, LSL #0x3]
7101bc2588  and x9,x8,#-0x100000000000000
7101bc258c  orr x10,xzr,#0x1e00000000000000
7101bc2590  cmp x9,x10
7101bc2594  b.ne 0x7101bc26c0
7101bc2598  and x8,x8,#0xffffffffff
7101bc259c  cbz x8,0x7101bc26c0
7101bc25a0  fmov s0,0x3f800000
7101bc25a4  add x0,x19,#0x198
7101bc25a8  str x24,[sp]
7101bc25ac  add x21,x19,#0x358
7101bc25b0  add x22,x19,#0x368
7101bc25b4  add x24,x19,#0x378
7101bc25b8  bl 0x710377aee0
7101bc25bc  ldr x8,[x26, #0x730]
7101bc25c0  ldr x8,[x8, #0x8]
7101bc25c4  lsl x20,x25,#0x3
7101bc25c8  ldr x2,[x28, x20, LSL #0x0]
7101bc25cc  add x0,sp,#0x138
7101bc25d0  add x23,sp,#0x138
7101bc25d4  ldr x1,[x8, #0x268]
7101bc25d8  bl 0x710327fc30
7101bc25dc  add x23,x23,#0x8
7101bc25e0  adrp x0,0x710436a000
7101bc25e4  add x0,x0,#0xc69
7101bc25e8  add x8,sp,#0xd8
7101bc25ec  mov x1,x23
7101bc25f0  bl 0x71003a4ca0
7101bc25f4  ldr x1,[x28, x20, LSL #0x0]
7101bc25f8  add x0,sp,#0x90
7101bc25fc  bl 0x71033980b0
7101bc2600  ldr x8,[x26, #0x730]
7101bc2604  ldr x8,[x8, #0x8]
7101bc2608  add x0,sp,#0x138
7101bc260c  ldr x2,[x28, x20, LSL #0x0]
7101bc2610  ldr x1,[x8, #0x268]
7101bc2614  bl 0x710327fc30
7101bc2618  adrp x0,0x71042f6000
7101bc261c  add x0,x0,#0x51d
7101bc2620  add x8,sp,#0x48
7101bc2624  mov x1,x23
7101bc2628  bl 0x71003a4ca0
7101bc262c  ldr x1,[x28, x20, LSL #0x0]
7101bc2630  ldr x0,[x27, #0x268]
7101bc2634  bl 0x7103280000
7101bc2638  ldr w8,[x19, #0xba8]
7101bc263c  cmp w8,#0x3
7101bc2640  mov w23,w0
7101bc2644  cset w26,eq
7101bc2648  cmp w8,#0x2
7101bc264c  b.eq 0x7101bc2754
7101bc2650  cmp w8,#0x1
7101bc2654  b.ne 0x7101bc27b4
7101bc2658  ldr x8,[x27, #0x268]
7101bc265c  ldr x0,[x8, #0x8]
7101bc2660  mov x1,#0x64e2
7101bc2664  movk x1,#0xbd35, LSL #16
7101bc2668  movk x1,#0x10, LSL #32
7101bc266c  bl 0x710327fb30
7101bc2670  ldr x9,[x28, x25, LSL #0x3]
7101bc2674  and x11,x9,#-0x100000000000000
7101bc2678  orr x10,xzr,#0x1e00000000000000
7101bc267c  and x8,x0,#0xffffffffff
7101bc2680  cmp x11,x10
7101bc2684  b.ne 0x7101bc2838
7101bc2688  and x11,x9,#0xffffffffff
7101bc268c  cbz x11,0x7101bc2838
7101bc2690  and x10,x0,#-0x100000000000000
7101bc2694  orr x11,xzr,#0x1e00000000000000
7101bc2698  cmp x10,x11
7101bc269c  mov x20,x21
7101bc26a0  b.ne 0x7101bc2bb8
7101bc26a4  cbz x8,0x7101bc2bb8
7101bc26a8  eor x8,x0,x9
7101bc26ac  mov x0,x24
7101bc26b0  ldr x24,[sp]
7101bc26b4  tst x8,#0xffffffffff
7101bc26b8  b.ne 0x7101bc2bc0
7101bc26bc  b 0x7101bc2854
7101bc26c0  fmov s0,0x3f800000
7101bc26c4  add x0,x19,#0x1a8
7101bc26c8  bl 0x710377aee0
7101bc26cc  ldr w8,[x19, #0xba8]
7101bc26d0  add x0,x19,#0x348
7101bc26d4  cbz w8,0x7101bc26e4
7101bc26d8  adrp x1,0x71042b4000
7101bc26dc  add x1,x1,#0x191
7101bc26e0  b 0x7101bc26ec
7101bc26e4  adrp x1,0x71043be000
7101bc26e8  add x1,x1,#0x498
7101bc26ec  bl 0x710377a120
7101bc26f0  ldr x8,[x19, #0x360]
7101bc26f4  ldr x0,[x8, #0x10]
7101bc26f8  cbz x0,0x7101bc2710
7101bc26fc  add x1,sp,#0x138
7101bc2700  mov w2,wzr
7101bc2704  mov w3,wzr
7101bc2708  str wzr,[sp, #0x138]
7101bc270c  bl 0x71037a2270
7101bc2710  ldr x8,[x19, #0x370]
7101bc2714  ldr x0,[x8, #0x10]
7101bc2718  cbz x0,0x7101bc2730
7101bc271c  add x1,sp,#0x138
7101bc2720  mov w2,wzr
7101bc2724  mov w3,wzr
7101bc2728  str wzr,[sp, #0x138]
7101bc272c  bl 0x71037a2270
7101bc2730  ldr x8,[x19, #0x380]
7101bc2734  ldr x0,[x8, #0x10]
7101bc2738  cbz x0,0x7101bc2e80
7101bc273c  add x1,sp,#0x138
7101bc2740  mov w2,wzr
7101bc2744  mov w3,wzr
7101bc2748  str wzr,[sp, #0x138]
7101bc274c  bl 0x71037a2270
7101bc2750  b 0x7101bc2e80
7101bc2754  ldr x8,[x27, #0x268]
7101bc2758  ldr x0,[x8, #0x8]
7101bc275c  mov x1,#0xf289
7101bc2760  movk x1,#0x346e, LSL #16
7101bc2764  movk x1,#0xe, LSL #32
7101bc2768  bl 0x710327fb30
7101bc276c  ldr x9,[x28, x25, LSL #0x3]
7101bc2770  and x11,x9,#-0x100000000000000
7101bc2774  orr x10,xzr,#0x1e00000000000000
7101bc2778  and x8,x0,#0xffffffffff
7101bc277c  cmp x11,x10
7101bc2780  b.ne 0x7101bc2998
7101bc2784  and x11,x9,#0xffffffffff
7101bc2788  cbz x11,0x7101bc2998
7101bc278c  and x10,x0,#-0x100000000000000
7101bc2790  orr x11,xzr,#0x1e00000000000000
7101bc2794  cmp x10,x11
7101bc2798  mov x20,x21
7101bc279c  b.ne 0x7101bc2bb8
7101bc27a0  cbz x8,0x7101bc2bb8
7101bc27a4  eor x8,x0,x9
7101bc27a8  tst x8,#0xffffffffff
7101bc27ac  b.ne 0x7101bc2bb8
7101bc27b0  b 0x7101bc29ac
7101bc27b4  cmp w8,#0x3
7101bc27b8  b.ne 0x7101bc2ae4
7101bc27bc  ldr x8,[x27, #0x268]
7101bc27c0  ldr x0,[x8, #0x8]
7101bc27c4  mov x1,#0xc799
7101bc27c8  movk x1,#0x4c25, LSL #16
7101bc27cc  movk x1,#0x12, LSL #32
7101bc27d0  bl 0x710327fb30
7101bc27d4  ldr x9,[x28, x25, LSL #0x3]
7101bc27d8  and x11,x9,#-0x100000000000000
7101bc27dc  orr x10,xzr,#0x1e00000000000000
7101bc27e0  and x8,x0,#0xffffffffff
7101bc27e4  cmp x11,x10
7101bc27e8  b.ne 0x7101bc2ba0
7101bc27ec  and x11,x9,#0xffffffffff
7101bc27f0  cbz x11,0x7101bc2ba0
7101bc27f4  and x10,x0,#-0x100000000000000
7101bc27f8  orr x11,xzr,#0x1e00000000000000
7101bc27fc  mov w26,#0x1
7101bc2800  cmp x10,x11
7101bc2804  b.ne 0x7101bc2ae8
7101bc2808  mov x20,x21
7101bc280c  cbz x8,0x7101bc2bb8
7101bc2810  eor x8,x0,x9
7101bc2814  tst x8,#0xffffffffff
7101bc2818  b.ne 0x7101bc2bb4
7101bc281c  b 0x7101bc2c88
7101bc2820  adrp x1,0x710437c000
7101bc2824  add x1,x1,#0x2f4
7101bc2828  b 0x7101bc2b3c
7101bc282c  adrp x1,0x710434a000
7101bc2830  add x1,x1,#0x1b0
7101bc2834  b 0x7101bc2b3c
7101bc2838  and x9,x0,#-0x100000000000000
7101bc283c  mov x0,x24
7101bc2840  ldr x24,[sp]
7101bc2844  cmp x9,x10
7101bc2848  mov x20,x21
7101bc284c  b.ne 0x7101bc2854
7101bc2850  cbnz x8,0x7101bc2bc0
7101bc2854  add x9,sp,#0xd8
7101bc2858  mov x10,#0x656d
7101bc285c  movk x10,#0x5f6c, LSL #16
7101bc2860  add x11,x9,#0x9
7101bc2864  mov x9,#0x696e
7101bc2868  movk x9,#0x676e, LSL #16
7101bc286c  movk x10,#0x7274, LSL #32
7101bc2870  movk x10,#0x6961, LSL #48
7101bc2874  strb wzr,[sp, #0xf0]
7101bc2878  movk x9,#0x615f, LSL #32
7101bc287c  movk x9,#0x796e, LSL #48
7101bc2880  mov w8,#0x9dc5
7101bc2884  movk w8,#0x811c, LSL #16
7101bc2888  stp x10,x9,[sp, #0xe0]
7101bc288c  mov w9,#0x10
7101bc2890  str w9,[sp, #0xdc]
7101bc2894  mov w12,#0x6d
7101bc2898  mov w9,#0x89
7101bc289c  mov w13,w8
7101bc28a0  mul w13,w13,w9
7101bc28a4  and w12,w12,#0xff
7101bc28a8  eor w13,w13,w12
7101bc28ac  ldrb w12,[x11], #0x1
7101bc28b0  cbnz w12,0x7101bc28a0
7101bc28b4  str w13,[sp, #0xd8]
7101bc28b8  mov x11,#0x616e
7101bc28bc  movk x11,#0x5f6d, LSL #16
7101bc28c0  mov x13,#0x705f
7101bc28c4  movk x13,#0x6b6f, LSL #16
7101bc28c8  movk x11,#0x7469, LSL #32
7101bc28cc  movk x11,#0x6d65, LSL #48
7101bc28d0  add x12,sp,#0x90
7101bc28d4  movk x13,#0x6265, LSL #32
7101bc28d8  movk x13,#0x6c61, LSL #48
7101bc28dc  stp x11,x13,[sp, #0x98]
7101bc28e0  add x11,x12,#0x9
7101bc28e4  mov w12,#0x6c
7101bc28e8  strh w12,[sp, #0xa8]
7101bc28ec  mov w14,#0x11
7101bc28f0  mov w12,#0x6e
7101bc28f4  str w14,[sp, #0x94]
7101bc28f8  mov w13,w8
7101bc28fc  mul w13,w13,w9
7101bc2900  and w12,w12,#0xff
7101bc2904  eor w13,w13,w12
7101bc2908  ldrb w12,[x11], #0x1
7101bc290c  cbnz w12,0x7101bc28fc
7101bc2910  mov x11,#0x696e
7101bc2914  movk x11,#0x676e, LSL #16
7101bc2918  movk x11,#0x685f, LSL #32
7101bc291c  movk x11,#0x6c65, LSL #48
7101bc2920  str x11,[sp, #0x58]
7101bc2924  mov w11,#0x5f70
7101bc2928  strh w11,[sp, #0x60]
7101bc292c  mov x11,#0x6f70
7101bc2930  movk x11,#0x656b, LSL #16
7101bc2934  movk x11,#0x6f6d, LSL #32
7101bc2938  movk x11,#0x5f6e, LSL #48
7101bc293c  stur x11,[sp, #0x62]
7101bc2940  mov w11,#0x6172
7101bc2944  movk w11,#0x646e, LSL #16
7101bc2948  stur w11,[sp, #0x6a]
7101bc294c  mov w11,#0x6d6f
7101bc2950  str x10,[sp, #0x50]
7101bc2954  add x10,sp,#0x48
7101bc2958  add x10,x10,#0x9
7101bc295c  strb wzr,[sp, #0x70]
7101bc2960  strh w11,[sp, #0x6e]
7101bc2964  mov w11,#0x20
7101bc2968  str w11,[sp, #0x4c]
7101bc296c  mov w11,#0x6d
7101bc2970  str w13,[sp, #0x90]
7101bc2974  mul w8,w8,w9
7101bc2978  and w11,w11,#0xff
7101bc297c  eor w8,w8,w11
7101bc2980  ldrb w11,[x10], #0x1
7101bc2984  cbnz w11,0x7101bc2974
7101bc2988  mov w26,wzr
7101bc298c  str w8,[sp, #0x48]
7101bc2990  orr w23,wzr,#0xf
7101bc2994  b 0x7101bc2bc0
7101bc2998  and x9,x0,#-0x100000000000000
7101bc299c  cmp x9,x10
7101bc29a0  mov x20,x21
7101bc29a4  b.ne 0x7101bc29ac
7101bc29a8  cbnz x8,0x7101bc2bb8
7101bc29ac  add x9,sp,#0xd8
7101bc29b0  mov x11,#0x656d
7101bc29b4  movk x11,#0x5f6c, LSL #16
7101bc29b8  add x12,x9,#0x9
7101bc29bc  mov x9,#0x696e
7101bc29c0  movk x9,#0x676e, LSL #16
7101bc29c4  movk x11,#0x7274, LSL #32
7101bc29c8  movk x11,#0x6961, LSL #48
7101bc29cc  strb wzr,[sp, #0xf0]
7101bc29d0  movk x9,#0x615f, LSL #32
7101bc29d4  movk x9,#0x796e, LSL #48
7101bc29d8  mov w8,#0x9dc5
7101bc29dc  movk w8,#0x811c, LSL #16
7101bc29e0  stp x11,x9,[sp, #0xe0]
7101bc29e4  mov w9,#0x10
7101bc29e8  str w9,[sp, #0xdc]
7101bc29ec  mov w10,#0x6d
7101bc29f0  mov w9,#0x89
7101bc29f4  mov w14,w10
7101bc29f8  mov w13,w8
7101bc29fc  mov x0,x24
7101bc2a00  mul w13,w13,w9
7101bc2a04  and w14,w14,#0xff
7101bc2a08  eor w13,w13,w14
7101bc2a0c  ldrb w14,[x12], #0x1
7101bc2a10  cbnz w14,0x7101bc2a00
7101bc2a14  ldr x24,[sp]
7101bc2a18  mov x12,#0x616e
7101bc2a1c  movk x12,#0x5f6d, LSL #16
7101bc2a20  mov x14,#0x615f
7101bc2a24  movk x14,#0x7373, LSL #16
7101bc2a28  str w13,[sp, #0xd8]
7101bc2a2c  movk x12,#0x7469, LSL #32
7101bc2a30  movk x12,#0x6d65, LSL #48
7101bc2a34  add x13,sp,#0x90
7101bc2a38  movk x14,#0x7369, LSL #32
7101bc2a3c  movk x14,#0x74, LSL #48
7101bc2a40  orr w15,wzr,#0xf
7101bc2a44  stp x12,x14,[sp, #0x98]
7101bc2a48  add x12,x13,#0x9
7101bc2a4c  mov w13,#0x6e
7101bc2a50  mov w14,w8
7101bc2a54  str w15,[sp, #0x94]
7101bc2a58  mul w14,w14,w9
7101bc2a5c  and w13,w13,#0xff
7101bc2a60  eor w14,w14,w13
7101bc2a64  ldrb w13,[x12], #0x1
7101bc2a68  cbnz w13,0x7101bc2a58
7101bc2a6c  mov x12,#0x696e
7101bc2a70  movk x12,#0x676e, LSL #16
7101bc2a74  movk x12,#0x685f, LSL #32
7101bc2a78  movk x12,#0x6c65, LSL #48
7101bc2a7c  str x12,[sp, #0x58]
7101bc2a80  mov w12,#0x5f70
7101bc2a84  strh w12,[sp, #0x60]
7101bc2a88  mov x12,#0x7361
7101bc2a8c  movk x12,#0x6973, LSL #16
7101bc2a90  movk x12,#0x7473, LSL #32
7101bc2a94  movk x12,#0x725f, LSL #48
7101bc2a98  str x11,[sp, #0x50]
7101bc2a9c  add x11,sp,#0x48
7101bc2aa0  add x11,x11,#0x9
7101bc2aa4  strh w10,[sp, #0x6e]
7101bc2aa8  stur x12,[sp, #0x62]
7101bc2aac  mov w12,#0x6e61
7101bc2ab0  movk w12,#0x6f64, LSL #16
7101bc2ab4  stur w12,[sp, #0x6a]
7101bc2ab8  orr w12,wzr,#0x1f
7101bc2abc  str w14,[sp, #0x90]
7101bc2ac0  str w12,[sp, #0x4c]
7101bc2ac4  mul w8,w8,w9
7101bc2ac8  and w10,w10,#0xff
7101bc2acc  eor w8,w8,w10
7101bc2ad0  ldrb w10,[x11], #0x1
7101bc2ad4  cbnz w10,0x7101bc2ac4
7101bc2ad8  str w8,[sp, #0x48]
7101bc2adc  orr w23,wzr,#0xe
7101bc2ae0  b 0x7101bc2bc0
7101bc2ae4  mov w26,wzr
7101bc2ae8  mov x20,x21
7101bc2aec  b 0x7101bc2bb8
7101bc2af0  adrp x1,0x71043ad000
7101bc2af4  add x1,x1,#0x622
7101bc2af8  b 0x7101bc2b3c
7101bc2afc  adrp x1,0x71042d6000
7101bc2b00  add x1,x1,#0x132
7101bc2b04  b 0x7101bc2b3c
7101bc2b08  adrp x1,0x71042f8000
7101bc2b0c  add x1,x1,#0x127
7101bc2b10  b 0x7101bc2b3c
7101bc2b14  ldr w8,[x19, #0x30]
7101bc2b18  sub w9,w8,#0x3
7101bc2b1c  cmp w9,#0x3
7101bc2b20  b.hi 0x7101bc2dd8
7101bc2b24  adrp x10,0x7104468000
7101bc2b28  add x10,x10,#0x1a0
7101bc2b2c  ldr w21,[x10, w9, SXTW #0x2]
7101bc2b30  b 0x7101bc2ddc
7101bc2b34  adrp x1,0x710437c000
7101bc2b38  add x1,x1,#0x2d7
7101bc2b3c  mov x0,x20
7101bc2b40  bl 0x710377a120
7101bc2b44  str w24,[x19, #0xbb4]
7101bc2b48  b 0x7101bc2ec0
7101bc2b4c  adrp x1,0x710424f000
7101bc2b50  add x1,x1,#0x321
7101bc2b54  b 0x7101bc2134
7101bc2b58  adrp x1,0x71043cf000
7101bc2b5c  add x1,x1,#0x2ad
7101bc2b60  b 0x7101bc2134
7101bc2b64  adrp x1,0x710426f000
7101bc2b68  add x1,x1,#0xe83
7101bc2b6c  b 0x7101bc2134
7101bc2b70  adrp x1,0x71042b4000
7101bc2b74  add x1,x1,#0x1a8
7101bc2b78  b 0x7101bc2134
7101bc2b7c  adrp x1,0x710425f000
7101bc2b80  add x1,x1,#0x1fe
7101bc2b84  b 0x7101bc2134
7101bc2b88  adrp x1,0x710424f000
7101bc2b8c  add x1,x1,#0x344
7101bc2b90  b 0x7101bc2134
7101bc2b94  adrp x1,0x710437c000
7101bc2b98  add x1,x1,#0x30d
7101bc2b9c  b 0x7101bc2134
7101bc2ba0  and x9,x0,#-0x100000000000000
7101bc2ba4  cmp x9,x10
7101bc2ba8  mov x20,x21
7101bc2bac  b.ne 0x7101bc2c88
7101bc2bb0  cbz x8,0x7101bc2c88
7101bc2bb4  mov w26,#0x1
7101bc2bb8  mov x0,x24
7101bc2bbc  ldr x24,[sp]
7101bc2bc0  add x8,sp,#0xd8
7101bc2bc4  add x1,x8,#0x8
7101bc2bc8  bl 0x710377a120
7101bc2bcc  add x8,sp,#0x90
7101bc2bd0  add x1,x8,#0x8
7101bc2bd4  mov x0,x22
7101bc2bd8  bl 0x710377a120
7101bc2bdc  add x8,sp,#0x48
7101bc2be0  add x1,x8,#0x8
7101bc2be4  mov x0,x20
7101bc2be8  bl 0x710377a120
7101bc2bec  sub w8,w23,#0x1
7101bc2bf0  cmp w8,#0xe
7101bc2bf4  b.hi 0x7101bc2e80
7101bc2bf8  adrp x9,0x71044f8000
7101bc2bfc  add x9,x9,#0xac4
7101bc2c00  ldrsw x8,[x9, x8, LSL #0x2]
7101bc2c04  add x8,x8,x9
7101bc2c08  br x8
7101bc2c0c  add x0,x19,#0x1b8
7101bc2c10  b 0x7101bc2e78
7101bc2c14  add x0,x19,#0x268
7101bc2c18  b 0x7101bc2e78
7101bc2c1c  cbz w26,0x7101bc2e74
7101bc2c20  add x0,x19,#0x2a8
7101bc2c24  b 0x7101bc2e78
7101bc2c28  add x0,x19,#0x1c8
7101bc2c2c  b 0x7101bc2e78
7101bc2c30  add x0,x19,#0x1d8
7101bc2c34  b 0x7101bc2e78
7101bc2c38  add x0,x19,#0x1e8
7101bc2c3c  b 0x7101bc2e78
7101bc2c40  add x0,x19,#0x1f8
7101bc2c44  b 0x7101bc2e78
7101bc2c48  add x0,x19,#0x208
7101bc2c4c  b 0x7101bc2e78
7101bc2c50  add x0,x19,#0x228
7101bc2c54  b 0x7101bc2e78
7101bc2c58  add x0,x19,#0x248
7101bc2c5c  b 0x7101bc2e78
7101bc2c60  add x0,x19,#0x278
7101bc2c64  b 0x7101bc2e78
7101bc2c68  add x0,x19,#0x298
7101bc2c6c  b 0x7101bc2e78
7101bc2c70  add x0,x19,#0x218
7101bc2c74  b 0x7101bc2e78
7101bc2c78  add x0,x19,#0x238
7101bc2c7c  b 0x7101bc2e78
7101bc2c80  add x0,x19,#0x258
7101bc2c84  b 0x7101bc2e78
7101bc2c88  add x9,sp,#0xd8
7101bc2c8c  mov x10,#0x656d
7101bc2c90  movk x10,#0x5f6c, LSL #16
7101bc2c94  add x11,x9,#0x9
7101bc2c98  mov x9,#0x696e
7101bc2c9c  movk x9,#0x676e, LSL #16
7101bc2ca0  movk x10,#0x7274, LSL #32
7101bc2ca4  movk x10,#0x6961, LSL #48
7101bc2ca8  strb wzr,[sp, #0xf0]
7101bc2cac  movk x9,#0x615f, LSL #32
7101bc2cb0  movk x9,#0x796e, LSL #48
7101bc2cb4  mov w8,#0x9dc5
7101bc2cb8  movk w8,#0x811c, LSL #16
7101bc2cbc  stp x10,x9,[sp, #0xe0]
7101bc2cc0  mov w9,#0x10
7101bc2cc4  str w9,[sp, #0xdc]
7101bc2cc8  mov w12,#0x6d
7101bc2ccc  mov w9,#0x89
7101bc2cd0  mov w13,w8
7101bc2cd4  mov x0,x24
7101bc2cd8  mul w13,w13,w9
7101bc2cdc  and w12,w12,#0xff
7101bc2ce0  eor w13,w13,w12
7101bc2ce4  ldrb w12,[x11], #0x1
7101bc2ce8  cbnz w12,0x7101bc2cd8
7101bc2cec  str w13,[sp, #0xd8]
7101bc2cf0  mov x11,#0x616e
7101bc2cf4  movk x11,#0x5f6d, LSL #16
7101bc2cf8  mov x13,#0x6d5f
7101bc2cfc  movk x13,#0x7361, LSL #16
7101bc2d00  ldr x24,[sp]
7101bc2d04  movk x11,#0x7469, LSL #32
7101bc2d08  movk x11,#0x6d65, LSL #48
7101bc2d0c  add x12,sp,#0x90
7101bc2d10  movk x13,#0x6574, LSL #32
7101bc2d14  movk x13,#0x6272, LSL #48
7101bc2d18  mov w14,#0x13
7101bc2d1c  stp x11,x13,[sp, #0x98]
7101bc2d20  add x11,x12,#0x9
7101bc2d24  mov w12,#0x6c61
7101bc2d28  movk w12,#0x6c, LSL #16
7101bc2d2c  str w12,[sp, #0xa8]
7101bc2d30  mov w12,#0x6e
7101bc2d34  mov w13,w8
7101bc2d38  str w14,[sp, #0x94]
7101bc2d3c  mul w13,w13,w9
7101bc2d40  and w12,w12,#0xff
7101bc2d44  eor w13,w13,w12
7101bc2d48  ldrb w12,[x11], #0x1
7101bc2d4c  cbnz w12,0x7101bc2d3c
7101bc2d50  mov x11,#0x696e
7101bc2d54  movk x11,#0x676e, LSL #16
7101bc2d58  movk x11,#0x685f, LSL #32
7101bc2d5c  movk x11,#0x6c65, LSL #48
7101bc2d60  str x11,[sp, #0x58]
7101bc2d64  mov w11,#0x5f70
7101bc2d68  strh w11,[sp, #0x60]
7101bc2d6c  mov x11,#0x6f70
7101bc2d70  movk x11,#0x656b, LSL #16
7101bc2d74  movk x11,#0x6f6d, LSL #32
7101bc2d78  movk x11,#0x5f6e, LSL #48
7101bc2d7c  stur x11,[sp, #0x62]
7101bc2d80  mov w11,#0x6172
7101bc2d84  movk w11,#0x646e, LSL #16
7101bc2d88  stur w11,[sp, #0x6a]
7101bc2d8c  mov w11,#0x6d6f
7101bc2d90  str x10,[sp, #0x50]
7101bc2d94  add x10,sp,#0x48
7101bc2d98  add x10,x10,#0x9
7101bc2d9c  strb wzr,[sp, #0x70]
7101bc2da0  strh w11,[sp, #0x6e]
7101bc2da4  mov w11,#0x20
7101bc2da8  str w11,[sp, #0x4c]
7101bc2dac  mov w11,#0x6d
7101bc2db0  str w13,[sp, #0x90]
7101bc2db4  mul w8,w8,w9
7101bc2db8  and w11,w11,#0xff
7101bc2dbc  eor w8,w8,w11
7101bc2dc0  ldrb w11,[x10], #0x1
7101bc2dc4  cbnz w11,0x7101bc2db4
7101bc2dc8  orr w23,wzr,#0xf
7101bc2dcc  mov w26,#0x1
7101bc2dd0  str w8,[sp, #0x48]
7101bc2dd4  b 0x7101bc2bc0
7101bc2dd8  orr w21,wzr,#0xc
7101bc2ddc  ldr x9,[x19, #0x350]
7101bc2de0  ldr x22,[x9, #0x10]
7101bc2de4  cbz x22,0x7101bc2e58
7101bc2de8  ldr x1,[x22, #0xe0]
7101bc2dec  str w8,[x22, #0x25c]
7101bc2df0  cbz x1,0x7101bc2e58
7101bc2df4  ldrb w8,[x1]
7101bc2df8  cmp w8,#0x23
7101bc2dfc  b.eq 0x7101bc2e58
7101bc2e00  cmp w8,#0x40
7101bc2e04  b.eq 0x7101bc2e58
7101bc2e08  adrp x8,0x710593b000
7101bc2e0c  ldr x8,[x8, #0xc60]
7101bc2e10  ldr x0,[x8]
7101bc2e14  bl 0x71037a4450
7101bc2e18  ldr w8,[x22, #0x25c]
7101bc2e1c  mov x23,x0
7101bc2e20  add x0,sp,#0x138
7101bc2e24  mov w2,#0x1000
7101bc2e28  mov w1,wzr
7101bc2e2c  str w8,[sp, #0xd8]
7101bc2e30  bl 0x71039c02a0
7101bc2e34  add x0,sp,#0x138
7101bc2e38  add x2,sp,#0xd8
7101bc2e3c  mov x1,x23
7101bc2e40  bl 0x71037ae170
7101bc2e44  mov w2,w0
7101bc2e48  add x1,sp,#0x138
7101bc2e4c  mov x0,x22
7101bc2e50  mov w3,wzr
7101bc2e54  bl 0x71037a2270
7101bc2e58  adrp x1,0x71043df000
7101bc2e5c  add x1,x1,#0xf51
7101bc2e60  mov w2,#0x1
7101bc2e64  mov x0,x20
7101bc2e68  mov w3,w21
7101bc2e6c  bl 0x710377a280
7101bc2e70  b 0x7101bc2b44
7101bc2e74  add x0,x19,#0x288
7101bc2e78  fmov s0,0x3f800000
7101bc2e7c  bl 0x710377aee0
7101bc2e80  ldr w8,[x19, #0xba8]
7101bc2e84  cmp w8,#0x4
7101bc2e88  strb wzr,[x19, #0xbbc]
7101bc2e8c  b.cs 0x7101bc2eec
7101bc2e90  orr w9,wzr,#0xc
7101bc2e94  madd x8,x8,x9,x19
7101bc2e98  ldr w9,[x8, #0xb78]
7101bc2e9c  str w9,[x8, #0xb7c]
7101bc2ea0  strb wzr,[x8, #0xb80]
7101bc2ea4  ldr x20,[sp, #0x120]
7101bc2ea8  mov x28,x20
7101bc2eac  cbz x28,0x7101bc2ec0
7101bc2eb0  str x28,[x24]
7101bc2eb4  cbz x20,0x7101bc2ec0
7101bc2eb8  mov x0,x20
7101bc2ebc  bl 0x710392eb40
7101bc2ec0  add sp,sp,#0x1, LSL #12
7101bc2ec4  add sp,sp,#0x140
7101bc2ec8  ldp x29,x30,[sp, #0x50]
7101bc2ecc  ldp x20,x19,[sp, #0x40]
7101bc2ed0  ldp x22,x21,[sp, #0x30]
7101bc2ed4  ldp x24,x23,[sp, #0x20]
7101bc2ed8  ldp x26,x25,[sp, #0x10]
7101bc2edc  ldp x28,x27,[sp], #0x60
7101bc2ee0  ret
7101bc2ee4  mov x0,x20
7101bc2ee8  bl 0x71039c1330
7101bc2eec  bl 0x71039c2650
7101bc2ef0  add x0,sp,#0x120
7101bc2ef4  bl 0x71039c0c00
