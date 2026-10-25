// addr:      7102df1190
// offset:    0x2df1190
// name:      FUN_7102df1190
// mangled:   
// size:      2812

7102df1190  sub sp,sp,#0x70
7102df1194  str x25,[sp, #0x20]
7102df1198  stp x24,x23,[sp, #0x30]
7102df119c  stp x22,x21,[sp, #0x40]
7102df11a0  stp x20,x19,[sp, #0x50]
7102df11a4  stp x29,x30,[sp, #0x60]
7102df11a8  add x29,sp,#0x60
7102df11ac  mov w8,#0x42f00000
7102df11b0  str w8,[x0, #0x28]
7102df11b4  mov w8,#0x64
7102df11b8  stp x2,x3,[x0]
7102df11bc  mov w23,#0x1
7102df11c0  strb w8,[x0, #0x40]
7102df11c4  mov x8,#0x40a0000000000000
7102df11c8  mov x19,x0
7102df11cc  stp x1,xzr,[x0, #0x10]
7102df11d0  str w4,[x0, #0x20]
7102df11d4  str xzr,[x0, #0x58]
7102df11d8  strb wzr,[x0, #0x24]
7102df11dc  stur xzr,[x0, #0x44]
7102df11e0  stur x8,[x0, #0x4c]
7102df11e4  strh w23,[x0, #0x54]
7102df11e8  stur xzr,[x0, #0x84]
7102df11ec  stp xzr,xzr,[x0, #0x70]
7102df11f0  stp xzr,xzr,[x0, #0x30]
7102df11f4  ldr x9,[x1, #0x310]
7102df11f8  ldp x8,x9,[x9, #0xd0]
7102df11fc  cmp x8,x9
7102df1200  b.eq 0x7102df1244
7102df1204  mov x10,#0x4795
7102df1208  movk x10,#0x55d7, LSL #16
7102df120c  movk x10,#0x6, LSL #32
7102df1210  ldr w11,[x8, #0x8]
7102df1214  cmp w11,#0x1
7102df1218  b.hi 0x7102df122c
7102df121c  ldr x22,[x8]
7102df1220  ldr x11,[x22, #0x68]
7102df1224  cmp x11,x10
7102df1228  b.eq 0x7102df124c
7102df122c  add x8,x8,#0x10
7102df1230  cmp x9,x8
7102df1234  b.ne 0x7102df1210
7102df1238  mov x22,xzr
7102df123c  mov w23,#0x1
7102df1240  b 0x7102df1308
7102df1244  mov x22,xzr
7102df1248  b 0x7102df1308
7102df124c  cbz x22,0x7102df125c
7102df1250  ldr x8,[x22, #0xd8]
7102df1254  cbnz x8,0x7102df1290
7102df1258  b 0x7102df1260
7102df125c  cbz x22,0x7102df123c
7102df1260  ldr x8,[x22, #0xd8]
7102df1264  cbnz x8,0x7102df1290
7102df1268  add x0,x22,#0x90
7102df126c  mov x1,xzr
7102df1270  bl 0x71026533a0
7102df1274  mov x8,x0
7102df1278  ldr x0,[x22, #0xd8]
7102df127c  str x8,[x22, #0xd8]
7102df1280  cbz x0,0x7102df1290
7102df1284  ldr x8,[x0]
7102df1288  ldr x8,[x8, #0x8]
7102df128c  blr x8
7102df1290  ldr x20,[x22, #0xd8]
7102df1294  ldr x8,[x20]
7102df1298  ldr x8,[x8, #0x10]
7102df129c  cmp x22,#0x0
7102df12a0  mov x0,x20
7102df12a4  cset w23,eq
7102df12a8  blr x8
7102df12ac  ldr x8,[x20, #0x8]
7102df12b0  ldrb w9,[x8, #0xa8]
7102df12b4  cbz w9,0x7102df1304
7102df12b8  ldr x0,[x8, #0x48]
7102df12bc  ldr x8,[x0]
7102df12c0  ldr x8,[x8, #0x10]
7102df12c4  mov w1,wzr
7102df12c8  blr x8
7102df12cc  ldr x8,[x20, #0x8]
7102df12d0  ldrb w9,[x8, #0xa8]
7102df12d4  cbz w9,0x7102df1304
7102df12d8  ldr x21,[x8, #0x48]
7102df12dc  ldr x8,[x21]
7102df12e0  ldr x8,[x8, #0x10]
7102df12e4  mov w1,#0x1
7102df12e8  mov x0,x21
7102df12ec  blr x8
7102df12f0  ldr x8,[x21]
7102df12f4  ldr x8,[x8, #0x10]
7102df12f8  mov w1,#0x2
7102df12fc  mov x0,x21
7102df1300  blr x8
7102df1304  strb wzr,[x20, #0x20]
7102df1308  ldr w8,[x19, #0x20]
7102df130c  cmp w8,#0xa
7102df1310  b.cs 0x7102df1c88
7102df1314  adrp x9,0x710446a000
7102df1318  ldr q1,[x9, #0x350]
7102df131c  tbnz w23,#0x0,0x7102df13f4
7102df1320  ldr x10,[x22, #0xd8]
7102df1324  cbz x10,0x7102df1388
7102df1328  adrp x11,0x710513e000
7102df132c  add x11,x11,#0xa28
7102df1330  mov w9,wzr
7102df1334  ldr x1,[x11, x8, LSL #0x3]
7102df1338  ldr x8,[x10, #0x8]
7102df133c  ldrb w10,[x1, w9, UXTW ]
7102df1340  add w9,w9,#0x1
7102df1344  cbnz w10,0x7102df133c
7102df1348  ldrb w9,[x1]
7102df134c  str q1,[sp]
7102df1350  cbz w9,0x7102df1360
7102df1354  add x9,x1,#0x1
7102df1358  ldrb w10,[x9], #0x1
7102df135c  cbnz w10,0x7102df1358
7102df1360  ldr x0,[x8, #0x8]
7102df1364  ldr x8,[x0]
7102df1368  ldr x8,[x8, #0x18]
7102df136c  blr x8
7102df1370  ldr q1,[sp]
7102df1374  tbnz w23,#0x0,0x7102df13f4
7102df1378  mov w20,w0
7102df137c  ldr x8,[x22, #0xd8]
7102df1380  cbnz x8,0x7102df1394
7102df1384  b 0x7102df13dc
7102df1388  mov w20,#0xffffffff
7102df138c  ldr x8,[x22, #0xd8]
7102df1390  cbz x8,0x7102df13dc
7102df1394  ldr x8,[x8, #0x8]
7102df1398  ldr x0,[x8, #0x8]
7102df139c  ldr x8,[x0]
7102df13a0  ldr x8,[x8, #0x10]
7102df13a4  blr x8
7102df13a8  cmp w0,w20
7102df13ac  b.ls 0x7102df13dc
7102df13b0  ldr x8,[x22, #0xd8]
7102df13b4  ldr x8,[x8, #0x8]
7102df13b8  ldr x0,[x8, #0x48]
7102df13bc  ldr x8,[x0]
7102df13c0  ldr x8,[x8, #0x38]
7102df13c4  mov w1,wzr
7102df13c8  blr x8
7102df13cc  mov w8,w20
7102df13d0  add x8,x1,x8, LSL #0x6
7102df13d4  add x8,x8,#0x30
7102df13d8  b 0x7102df13f0
7102df13dc  ldr x0,[x22, #0x90]
7102df13e0  ldr x8,[x0]
7102df13e4  ldr x8,[x8, #0x158]
7102df13e8  blr x8
7102df13ec  add x8,x0,#0x30
7102df13f0  ldr q1,[x8]
7102df13f4  fmov s5,wzr
7102df13f8  ext v0.16B,v1.16B,v1.16B,0x8
7102df13fc  ldr w8,[x19, #0x20]
7102df1400  mov v0.S[0x1],v5.S[0x0]
7102df1404  cmp w8,#0xa
7102df1408  mov v1.D[0x1],v0.D[0x0]
7102df140c  str q1,[x19, #0x70]
7102df1410  b.cs 0x7102df1c88
7102df1414  adrp x22,0x710513e000
7102df1418  add x22,x22,#0xa78
7102df141c  ldr x12,[x22, x8, LSL #0x3]
7102df1420  cbz x12,0x7102df14bc
7102df1424  ldrb w11,[x12]
7102df1428  cbz w11,0x7102df14bc
7102df142c  ldr x8,[x19, #0x10]
7102df1430  ldr x9,[x8, #0x310]
7102df1434  ldp x8,x9,[x9, #0xd0]
7102df1438  cmp x8,x9
7102df143c  b.eq 0x7102df14bc
7102df1440  mov x10,xzr
7102df1444  add x13,x12,#0x1
7102df1448  mov w12,#0xffffffff
7102df144c  orr x14,xzr,#0x100000000
7102df1450  adrp x15,0x7104754000
7102df1454  add x15,x15,#0x84
7102df1458  and w11,w11,#0xff
7102df145c  sub w16,w11,#0x41
7102df1460  add w17,w11,#0x20
7102df1464  cmp w16,#0x1a
7102df1468  csel w11,w17,w11,cc
7102df146c  eor w11,w11,w12
7102df1470  and w11,w11,#0xff
7102df1474  ldr w11,[x15, w11, UXTW #0x2]
7102df1478  eor w12,w11,w12, LSR #0x8
7102df147c  ldrb w11,[x13], #0x1
7102df1480  add x10,x10,x14
7102df1484  cbnz w11,0x7102df1458
7102df1488  mvn w11,w12
7102df148c  and x10,x10,#0xff00000000
7102df1490  orr x10,x10,x11
7102df1494  ldr w11,[x8, #0x8]
7102df1498  cmp w11,#0x1
7102df149c  b.hi 0x7102df14b0
7102df14a0  ldr x23,[x8]
7102df14a4  ldr x11,[x23, #0x68]
7102df14a8  cmp x10,x11
7102df14ac  b.eq 0x7102df1a8c
7102df14b0  add x8,x8,#0x10
7102df14b4  cmp x9,x8
7102df14b8  b.ne 0x7102df1494
7102df14bc  mov x23,xzr
7102df14c0  mov w24,#0x1
7102df14c4  ldr w8,[x19, #0x20]
7102df14c8  cmp w8,#0xa
7102df14cc  b.cs 0x7102df1c88
7102df14d0  tbnz w24,#0x0,0x7102df1644
7102df14d4  ldr x10,[x23, #0xd8]
7102df14d8  cbz x10,0x7102df1644
7102df14dc  adrp x11,0x710513e000
7102df14e0  add x11,x11,#0xb18
7102df14e4  mov w9,wzr
7102df14e8  ldr x1,[x11, x8, LSL #0x3]
7102df14ec  ldr x8,[x10, #0x8]
7102df14f0  ldrb w10,[x1, w9, UXTW ]
7102df14f4  add w9,w9,#0x1
7102df14f8  cbnz w10,0x7102df14f0
7102df14fc  ldrb w9,[x1]
7102df1500  cbz w9,0x7102df1510
7102df1504  add x9,x1,#0x1
7102df1508  ldrb w10,[x9], #0x1
7102df150c  cbnz w10,0x7102df1508
7102df1510  ldr x0,[x8, #0x8]
7102df1514  ldr x8,[x0]
7102df1518  ldr x8,[x8, #0x18]
7102df151c  blr x8
7102df1520  ldr w8,[x19, #0x20]
7102df1524  fmov s5,wzr
7102df1528  str w0,[x19, #0x38]
7102df152c  cmp w8,#0xa
7102df1530  b.cs 0x7102df1c88
7102df1534  tbnz w24,#0x0,0x7102df1650
7102df1538  ldr x10,[x23, #0xd8]
7102df153c  cbz x10,0x7102df1650
7102df1540  adrp x11,0x710513e000
7102df1544  add x11,x11,#0xb68
7102df1548  mov w9,wzr
7102df154c  ldr x1,[x11, w8, UXTW #0x3]
7102df1550  ldr x8,[x10, #0x8]
7102df1554  ldrb w10,[x1, w9, UXTW ]
7102df1558  add w9,w9,#0x1
7102df155c  cbnz w10,0x7102df1554
7102df1560  ldrb w9,[x1]
7102df1564  cbz w9,0x7102df1574
7102df1568  add x9,x1,#0x1
7102df156c  ldrb w10,[x9], #0x1
7102df1570  cbnz w10,0x7102df156c
7102df1574  ldr x0,[x8, #0x8]
7102df1578  ldr x8,[x0]
7102df157c  ldr x8,[x8, #0x18]
7102df1580  blr x8
7102df1584  ldr w8,[x19, #0x20]
7102df1588  fmov s5,wzr
7102df158c  mov w9,#0x1
7102df1590  str w0,[x19, #0x3c]
7102df1594  strb w9,[x19, #0x80]
7102df1598  cmp w8,#0xa
7102df159c  b.cs 0x7102df1c88
7102df15a0  ldr x12,[x22, w8, UXTW #0x3]
7102df15a4  cbz x12,0x7102df1668
7102df15a8  ldrb w11,[x12]
7102df15ac  cbz w11,0x7102df1668
7102df15b0  ldr x8,[x19, #0x10]
7102df15b4  ldr x9,[x8, #0x310]
7102df15b8  ldp x8,x9,[x9, #0xd0]
7102df15bc  cmp x8,x9
7102df15c0  b.eq 0x7102df1668
7102df15c4  mov x10,xzr
7102df15c8  add x13,x12,#0x1
7102df15cc  mov w12,#0xffffffff
7102df15d0  orr x14,xzr,#0x100000000
7102df15d4  adrp x15,0x7104754000
7102df15d8  add x15,x15,#0x84
7102df15dc  and w11,w11,#0xff
7102df15e0  sub w16,w11,#0x41
7102df15e4  add w17,w11,#0x20
7102df15e8  cmp w16,#0x1a
7102df15ec  csel w11,w17,w11,cc
7102df15f0  eor w11,w11,w12
7102df15f4  and w11,w11,#0xff
7102df15f8  ldr w11,[x15, w11, UXTW #0x2]
7102df15fc  eor w12,w11,w12, LSR #0x8
7102df1600  ldrb w11,[x13], #0x1
7102df1604  add x10,x10,x14
7102df1608  cbnz w11,0x7102df15dc
7102df160c  mvn w11,w12
7102df1610  and x10,x10,#0xff00000000
7102df1614  orr x11,x10,x11
7102df1618  ldr w10,[x8, #0x8]
7102df161c  cmp w10,#0x1
7102df1620  b.hi 0x7102df1634
7102df1624  ldr x10,[x8]
7102df1628  ldr x12,[x10, #0x68]
7102df162c  cmp x11,x12
7102df1630  b.eq 0x7102df1acc
7102df1634  add x8,x8,#0x10
7102df1638  cmp x9,x8
7102df163c  b.ne 0x7102df1618
7102df1640  b 0x7102df1668
7102df1644  mov w9,#0xffffffff
7102df1648  str w9,[x19, #0x38]
7102df164c  tbz w24,#0x0,0x7102df1538
7102df1650  mov w9,#0xffffffff
7102df1654  str w9,[x19, #0x3c]
7102df1658  mov w9,#0x1
7102df165c  strb w9,[x19, #0x80]
7102df1660  ldr x12,[x22, w8, UXTW #0x3]
7102df1664  cbnz x12,0x7102df15a8
7102df1668  str xzr,[x19, #0x18]
7102df166c  ldr s0,[x19, #0x4c]
7102df1670  fmov s1,0xc1200000
7102df1674  fdiv s0,s0,s1
7102df1678  fmov s6,0x3f800000
7102df167c  adrp x8,0x7104472000
7102df1680  ldr s1,[x8, #0x98c]
7102df1684  adrp x8,0x7104473000
7102df1688  fadd s0,s0,s6
7102df168c  fmul s0,s0,s1
7102df1690  ldr s1,[x8, #0x2c4]
7102df1694  fmul s3,s0,s1
7102df1698  mov w9,#0x1000000
7102df169c  fcvtzs w8,s3
7102df16a0  add w8,w8,#0x400, LSL #12
7102df16a4  and w8,w8,#0xffffff
7102df16a8  sub w9,w9,w8
7102df16ac  cmp w8,#0x800, LSL #12
7102df16b0  csel w8,w9,w8,hi
7102df16b4  sub w8,w8,#0x400, LSL #12
7102df16b8  scvtf s0,w8
7102df16bc  adrp x8,0x7104473000
7102df16c0  ldr s1,[x8, #0x610]
7102df16c4  adrp x8,0x7104473000
7102df16c8  ldr s3,[x8, #0x82c]
7102df16cc  adrp x8,0x7104472000
7102df16d0  ldr s4,[x8, #0x8b0]
7102df16d4  adrp x8,0x7104473000
7102df16d8  fmul s0,s0,s1
7102df16dc  fmul s1,s0,s0
7102df16e0  fmul s3,s1,s3
7102df16e4  fadd s3,s3,s4
7102df16e8  ldr s4,[x8, #0x830]
7102df16ec  adrp x8,0x7104473000
7102df16f0  fmul s3,s1,s3
7102df16f4  fadd s3,s3,s4
7102df16f8  fmul s4,s1,s3
7102df16fc  ldr s3,[x8, #0xa64]
7102df1700  fmul s2,s0,s1
7102df1704  fadd s1,s4,s3
7102df1708  fmul s1,s2,s1
7102df170c  fadd s0,s0,s1
7102df1710  fmin s1,s0,s6
7102df1714  fcmp s0,#0.0
7102df1718  ldr x8,[x19, #0x18]
7102df171c  fcsel s0,s5,s1,mi
7102df1720  cbz x8,0x7102df1790
7102df1724  ldrb w9,[x8, #0xe0]
7102df1728  cbz w9,0x7102df1790
7102df172c  adrp x9,0x7104471000
7102df1730  ldr s1,[x9, #0xe0c]
7102df1734  adrp x9,0x7104472000
7102df1738  ldr s2,[x9, #0xc34]
7102df173c  adrp x9,0x7104473000
7102df1740  ldr s3,[x9, #0x2b4]
7102df1744  fmul s1,s0,s1
7102df1748  fmul s0,s0,s3
7102df174c  fmov v3.4S,#0x3f800000
7102df1750  fadd s1,s1,s2
7102df1754  fadd s0,s0,s2
7102df1758  fdiv s1,s1,s2
7102df175c  fdiv s0,s0,s2
7102df1760  mov v3.S[0x0],v1.S[0x0]
7102df1764  mov v3.S[0x1],v1.S[0x0]
7102df1768  adrp x1,0x710437a000
7102df176c  add x1,x1,#0xa07
7102df1770  mov v3.S[0x2],v0.S[0x0]
7102df1774  str q3,[sp, #0x10]
7102df1778  ldr x0,[x8, #0x90]
7102df177c  ldr x8,[x0]
7102df1780  ldr x8,[x8, #0x268]
7102df1784  orr w2,wzr,#0x3
7102df1788  add x3,sp,#0x10
7102df178c  blr x8
7102df1790  ldr w8,[x19, #0x20]
7102df1794  cmp w8,#0xa
7102df1798  b.cs 0x7102df1c88
7102df179c  ldr x10,[x19, #0x10]
7102df17a0  adrp x9,0x710513e000
7102df17a4  add x9,x9,#0xac8
7102df17a8  ldr x8,[x9, x8, LSL #0x3]
7102df17ac  ldr x9,[x10, #0x300]
7102df17b0  ldr x9,[x9, #0x18]
7102df17b4  ldr x9,[x9]
7102df17b8  mov w11,#0xffffffff
7102df17bc  ldrb w10,[x8], #0x1
7102df17c0  adrp x12,0x7104754000
7102df17c4  add x12,x12,#0x84
7102df17c8  orr x13,xzr,#0x100000000
7102df17cc  ldr x14,[x9]
7102df17d0  cbnz w10,0x7102df17e4
7102df17d4  b 0x7102df1830
7102df17d8  add x9,x9,#0x8
7102df17dc  ldr x14,[x9]
7102df17e0  cbz w10,0x7102df1830
7102df17e4  mov x15,xzr
7102df17e8  mov x16,x8
7102df17ec  mov w18,w10
7102df17f0  mov w17,w11
7102df17f4  and w18,w18,#0xff
7102df17f8  sub w0,w18,#0x41
7102df17fc  add w1,w18,#0x20
7102df1800  cmp w0,#0x1a
7102df1804  csel w18,w1,w18,cc
7102df1808  eor w18,w18,w17
7102df180c  and w18,w18,#0xff
7102df1810  ldr w18,[x12, w18, UXTW #0x2]
7102df1814  eor w17,w18,w17, LSR #0x8
7102df1818  ldrb w18,[x16], #0x1
7102df181c  add x15,x15,x13
7102df1820  cbnz w18,0x7102df17f4
7102df1824  mvn w16,w17
7102df1828  and x15,x15,#0xff00000000
7102df182c  b 0x7102df1838
7102df1830  mov x16,xzr
7102df1834  mov x15,xzr
7102df1838  orr x15,x15,x16
7102df183c  ldr x16,[x14, #0xa0]
7102df1840  and x16,x16,#0xffffffffff
7102df1844  cmp x16,x15
7102df1848  b.ne 0x7102df17d8
7102df184c  ldr x8,[x14, #0x110]
7102df1850  str x8,[x19, #0x60]
7102df1854  mov x9,x8
7102df1858  ldr x20,[x9], #0x8
7102df185c  ldr x21,[x9]
7102df1860  cmp x20,x21
7102df1864  b.eq 0x7102df18bc
7102df1868  mov w22,#0x1
7102df186c  mov x23,#-0x1
7102df1870  ldr x8,[x20]
7102df1874  ldr x9,[x8, #0x8]
7102df1878  strb w22,[x8, #0x128]
7102df187c  cbz x9,0x7102df1890
7102df1880  str x23,[x9, #0xd8]
7102df1884  ldr x0,[x8, #0x8]
7102df1888  mov w1,wzr
7102df188c  bl 0x7100532bc0
7102df1890  add x20,x20,#0x8
7102df1894  cmp x21,x20
7102df1898  b.ne 0x7102df1870
7102df189c  ldr x8,[x19, #0x60]
7102df18a0  ldr x10,[x8]
7102df18a4  mov x9,x8
7102df18a8  ldr x11,[x9, #0x8]!
7102df18ac  cmp x10,x11
7102df18b0  b.eq 0x7102df18bc
7102df18b4  ldr x20,[x10]
7102df18b8  b 0x7102df18c0
7102df18bc  mov x20,xzr
7102df18c0  str x20,[x19, #0x68]
7102df18c4  ldr x8,[x8]
7102df18c8  ldr x9,[x9]
7102df18cc  cmp x8,x9
7102df18d0  b.eq 0x7102df19c0
7102df18d4  ldr q0,[x19, #0x70]
7102df18d8  movi d2,#0x0
7102df18dc  adrp x11,0x7104472000
7102df18e0  ldr s3,[x11, #0x970]
7102df18e4  mov w10,#0x1
7102df18e8  mov v1.16B,v0.16B
7102df18ec  mov v1.D[0x1],v2.D[0x0]
7102df18f0  fmov s4,0xbf800000
7102df18f4  dup s2,v0.S[0x1]
7102df18f8  ldr x11,[x8]
7102df18fc  ldr x13,[x11, #0x8]
7102df1900  ldrb w14,[x13, #0xe7]
7102df1904  ldrb w13,[x13, #0xe8]
7102df1908  ldrb w12,[x11, #0x128]
7102df190c  cmp w12,#0x0
7102df1910  orr w13,w13,w14
7102df1914  and w12,w13,#0xff
7102df1918  ccmp w12,#0x0,#0x0,ne
7102df191c  b.eq 0x7102df1928
7102df1920  strb w10,[x11, #0x129]
7102df1924  b 0x7102df194c
7102df1928  ldr q5,[x11, #0x10]
7102df192c  fabd s6,s5,s0
7102df1930  fcmp s6,s3
7102df1934  b.gt 0x7102df1948
7102df1938  dup s5,v5.S[0x1]
7102df193c  fabd s5,s5,s2
7102df1940  fcmp s5,s3
7102df1944  b.le 0x7102df1950
7102df1948  strb w10,[x11, #0x12a]
7102df194c  str q1,[x11, #0x10]
7102df1950  ldr s5,[x11, #0x30]
7102df1954  fabs s5,s5
7102df1958  fcmp s5,s3
7102df195c  b.mi 0x7102df1968
7102df1960  str wzr,[x11, #0x30]
7102df1964  strb w10,[x11, #0x129]
7102df1968  ldr q5,[x11, #0x50]
7102df196c  fadd s6,s5,s4
7102df1970  fabs s6,s6
7102df1974  fcmp s6,s3
7102df1978  b.mi 0x7102df198c
7102df197c  fmov s6,0x3f800000
7102df1980  mov v5.S[0x0],v6.S[0x0]
7102df1984  str q5,[x11, #0x50]
7102df1988  strb w10,[x11, #0x129]
7102df198c  dup s6,v5.S[0x1]
7102df1990  fadd s6,s6,s4
7102df1994  fabs s6,s6
7102df1998  fcmp s6,s3
7102df199c  b.mi 0x7102df19b0
7102df19a0  fmov s6,0x3f800000
7102df19a4  mov v5.S[0x1],v6.S[0x0]
7102df19a8  str q5,[x11, #0x50]
7102df19ac  strb w10,[x11, #0x129]
7102df19b0  add x8,x8,#0x8
7102df19b4  cmp x9,x8
7102df19b8  b.ne 0x7102df18f8
7102df19bc  ldr x20,[x19, #0x68]
7102df19c0  ldr x8,[x20, #0x60]
7102df19c4  cbz x8,0x7102df19f8
7102df19c8  ldrh w9,[x8, #0x8]
7102df19cc  sub w9,w9,#0x1
7102df19d0  sxth w10,w9
7102df19d4  cmp w10,#0x0
7102df19d8  strh w9,[x8, #0x8]
7102df19dc  b.gt 0x7102df19f4
7102df19e0  ldr x0,[x20, #0x60]
7102df19e4  cbz x0,0x7102df19f4
7102df19e8  ldr x8,[x0]
7102df19ec  ldr x8,[x8, #0x8]
7102df19f0  blr x8
7102df19f4  str xzr,[x20, #0x60]
7102df19f8  mov w0,#0x10
7102df19fc  mov w1,#0x20
7102df1a00  bl 0x710392e290
7102df1a04  cbnz x0,0x7102df1a4c
7102df1a08  adrp x8,0x7105332000
7102df1a0c  ldr x0,[x8, #0xf00]
7102df1a10  cbz x0,0x7102df1a48
7102df1a14  mov w8,#0x20
7102df1a18  str wzr,[sp, #0x2c]
7102df1a1c  add x1,sp,#0x2c
7102df1a20  str x8,[sp, #0x10]
7102df1a24  ldr x8,[x0]
7102df1a28  ldr x8,[x8, #0x30]
7102df1a2c  add x2,sp,#0x10
7102df1a30  blr x8
7102df1a34  tbz w0,#0x0,0x7102df1a48
7102df1a38  mov w0,#0x10
7102df1a3c  mov w1,#0x20
7102df1a40  bl 0x710392e290
7102df1a44  cbnz x0,0x7102df1a4c
7102df1a48  mov x0,xzr
7102df1a4c  orr w8,wzr,#0x10001
7102df1a50  str w8,[x0, #0x8]
7102df1a54  adrp x8,0x710507f000
7102df1a58  add x8,x8,#0x650
7102df1a5c  str x8,[x0]
7102df1a60  adrp x8,0x7102df1000
7102df1a64  add x8,x8,#0xc90
7102df1a68  stp x19,x8,[x0, #0x10]
7102df1a6c  str x0,[x20, #0x60]
7102df1a70  ldp x29,x30,[sp, #0x60]
7102df1a74  ldp x20,x19,[sp, #0x50]
7102df1a78  ldr x25,[sp, #0x20]
7102df1a7c  ldp x22,x21,[sp, #0x40]
7102df1a80  ldp x24,x23,[sp, #0x30]
7102df1a84  add sp,sp,#0x70
7102df1a88  ret
7102df1a8c  cbz x23,0x7102df1be0
7102df1a90  ldr x8,[x23, #0xd8]
7102df1a94  cbnz x8,0x7102df1ac0
7102df1a98  add x0,x23,#0x90
7102df1a9c  mov x1,xzr
7102df1aa0  bl 0x71026533a0
7102df1aa4  mov x8,x0
7102df1aa8  ldr x0,[x23, #0xd8]
7102df1aac  str x8,[x23, #0xd8]
7102df1ab0  cbz x0,0x7102df1ac0
7102df1ab4  ldr x8,[x0]
7102df1ab8  ldr x8,[x8, #0x8]
7102df1abc  blr x8
7102df1ac0  cmp x23,#0x0
7102df1ac4  cset w24,eq
7102df1ac8  b 0x7102df1bec
7102df1acc  str x10,[x19, #0x18]
7102df1ad0  cbz x10,0x7102df1b10
7102df1ad4  ldrb w8,[x10, #0xe0]
7102df1ad8  cbz w8,0x7102df1aec
7102df1adc  ldr x8,[x10, #0xc8]
7102df1ae0  cbz x8,0x7102df1aec
7102df1ae4  mov w9,#0x101
7102df1ae8  strh w9,[x8, #0x30]
7102df1aec  ldr x8,[x10, #0xd8]
7102df1af0  cbz x8,0x7102df1afc
7102df1af4  mov w9,#0x1
7102df1af8  strb w9,[x8, #0x21]
7102df1afc  ldrb w8,[x10, #0xe0]
7102df1b00  cbz w8,0x7102df1b0c
7102df1b04  ldr x8,[x10, #0xb0]
7102df1b08  strb wzr,[x8, #0x10]
7102df1b0c  ldr x10,[x19, #0x18]
7102df1b10  cbz x10,0x7102df1b34
7102df1b14  ldrb w8,[x10, #0xe0]
7102df1b18  cbz w8,0x7102df1b28
7102df1b1c  ldr x8,[x10, #0xc8]
7102df1b20  cbz x8,0x7102df1b28
7102df1b24  strh wzr,[x8, #0x32]
7102df1b28  ldr x8,[x10, #0xd8]
7102df1b2c  cbz x8,0x7102df1b34
7102df1b30  strb wzr,[x8, #0x22]
7102df1b34  ldr x21,[x19, #0x18]
7102df1b38  cbz x21,0x7102df166c
7102df1b3c  ldrb w8,[x21, #0xe0]
7102df1b40  cbz w8,0x7102df1c68
7102df1b44  ldr x22,[x21, #0xc8]
7102df1b48  cbz x22,0x7102df1c68
7102df1b4c  ldp x24,x25,[x22, #0x18]
7102df1b50  mov w23,#0x41200000
7102df1b54  str w23,[x22, #0x3c]
7102df1b58  cmp x24,x25
7102df1b5c  b.eq 0x7102df1c64
7102df1b60  mov w20,#0xa
7102df1b64  ldr x0,[x24], #0x8
7102df1b68  ldr x8,[x0]
7102df1b6c  ldr x8,[x8, #0x20]
7102df1b70  mov w1,w20
7102df1b74  mov w2,wzr
7102df1b78  blr x8
7102df1b7c  cmp x25,x24
7102df1b80  b.ne 0x7102df1b64
7102df1b84  ldp x24,x25,[x22, #0x18]
7102df1b88  cmp x24,x25
7102df1b8c  str w23,[x22, #0x40]
7102df1b90  b.eq 0x7102df1c68
7102df1b94  mov w20,#0xa
7102df1b98  ldr x0,[x24], #0x8
7102df1b9c  ldr x8,[x0]
7102df1ba0  ldr x8,[x8, #0x20]
7102df1ba4  mov w2,#0x1
7102df1ba8  mov w1,w20
7102df1bac  blr x8
7102df1bb0  cmp x25,x24
7102df1bb4  b.ne 0x7102df1b98
7102df1bb8  ldp x20,x22,[x22, #0x18]
7102df1bbc  cmp x20,x22
7102df1bc0  b.eq 0x7102df1c68
7102df1bc4  ldr x0,[x20], #0x8
7102df1bc8  ldr x8,[x0]
7102df1bcc  ldr x8,[x8, #0x38]
7102df1bd0  blr x8
7102df1bd4  cmp x22,x20
7102df1bd8  b.ne 0x7102df1bc4
7102df1bdc  b 0x7102df1c68
7102df1be0  cmp x23,#0x0
7102df1be4  cset w24,eq
7102df1be8  cbz x23,0x7102df14c4
7102df1bec  ldr x20,[x23, #0xd8]
7102df1bf0  ldr x8,[x20]
7102df1bf4  ldr x8,[x8, #0x10]
7102df1bf8  mov x0,x20
7102df1bfc  blr x8
7102df1c00  ldr x8,[x20, #0x8]
7102df1c04  ldrb w9,[x8, #0xa8]
7102df1c08  cbz w9,0x7102df1c58
7102df1c0c  ldr x0,[x8, #0x48]
7102df1c10  ldr x8,[x0]
7102df1c14  ldr x8,[x8, #0x10]
7102df1c18  mov w1,wzr
7102df1c1c  blr x8
7102df1c20  ldr x8,[x20, #0x8]
7102df1c24  ldrb w9,[x8, #0xa8]
7102df1c28  cbz w9,0x7102df1c58
7102df1c2c  ldr x21,[x8, #0x48]
7102df1c30  ldr x8,[x21]
7102df1c34  ldr x8,[x8, #0x10]
7102df1c38  mov w1,#0x1
7102df1c3c  mov x0,x21
7102df1c40  blr x8
7102df1c44  ldr x8,[x21]
7102df1c48  ldr x8,[x8, #0x10]
7102df1c4c  mov w1,#0x2
7102df1c50  mov x0,x21
7102df1c54  blr x8
7102df1c58  fmov s5,wzr
7102df1c5c  strb wzr,[x20, #0x20]
7102df1c60  b 0x7102df14c4
7102df1c64  str w23,[x22, #0x40]
7102df1c68  ldr x0,[x21, #0xd8]
7102df1c6c  fmov s5,wzr
7102df1c70  cbz x0,0x7102df166c
7102df1c74  mov w1,#0xa
7102df1c78  mov w2,#0x1
7102df1c7c  bl 0x71025ee580
7102df1c80  fmov s5,wzr
7102df1c84  b 0x7102df166c
7102df1c88  bl 0x71039c2650
