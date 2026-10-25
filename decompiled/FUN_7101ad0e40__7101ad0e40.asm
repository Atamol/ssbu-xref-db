// addr:      7101ad0e40
// offset:    0x1ad0e40
// name:      FUN_7101ad0e40
// mangled:   
// size:      2884

7101ad0e40  sub sp,sp,#0x1e0
7101ad0e44  stp x28,x27,[sp, #0x180]
7101ad0e48  stp x26,x25,[sp, #0x190]
7101ad0e4c  stp x24,x23,[sp, #0x1a0]
7101ad0e50  stp x22,x21,[sp, #0x1b0]
7101ad0e54  stp x20,x19,[sp, #0x1c0]
7101ad0e58  stp x29,x30,[sp, #0x1d0]
7101ad0e5c  add x29,sp,#0x1d0
7101ad0e60  adrp x8,0x71050a9000
7101ad0e64  add x8,x8,#0xa90
7101ad0e68  mov x23,x1
7101ad0e6c  stp x8,xzr,[x0]
7101ad0e70  orr x8,xzr,#0x1ffffffff
7101ad0e74  stp xzr,x8,[x0, #0x60]
7101ad0e78  mov w8,#0x1
7101ad0e7c  mov x19,x0
7101ad0e80  stp xzr,xzr,[x0, #0x10]
7101ad0e84  mov w21,w2
7101ad0e88  strb wzr,[x0, #0x58]
7101ad0e8c  str x1,[x0, #0x78]
7101ad0e90  mov w1,#0x168
7101ad0e94  strb w8,[x0, #0x70]
7101ad0e98  stp xzr,xzr,[x0, #0x48]
7101ad0e9c  mov w0,#0x10
7101ad0ea0  bl 0x710392e290
7101ad0ea4  mov x20,x0
7101ad0ea8  cbnz x0,0x7101ad0ef4
7101ad0eac  adrp x8,0x7105332000
7101ad0eb0  ldr x0,[x8, #0xf00]
7101ad0eb4  cbz x0,0x7101ad0ef0
7101ad0eb8  mov w8,#0x168
7101ad0ebc  stur wzr,[x29, #-0x90]
7101ad0ec0  sub x1,x29,#0x90
7101ad0ec4  str x8,[sp]
7101ad0ec8  ldr x8,[x0]
7101ad0ecc  ldr x8,[x8, #0x30]
7101ad0ed0  mov x2,sp
7101ad0ed4  blr x8
7101ad0ed8  tbz w0,#0x0,0x7101ad0ef0
7101ad0edc  mov w1,#0x168
7101ad0ee0  mov w0,#0x10
7101ad0ee4  bl 0x710392e290
7101ad0ee8  mov x20,x0
7101ad0eec  cbnz x0,0x7101ad0ef4
7101ad0ef0  mov x20,xzr
7101ad0ef4  mov w8,#0xffffffff
7101ad0ef8  adrp x27,0x710523d000
7101ad0efc  add x27,x27,#0x9a8
7101ad0f00  mov x22,x20
7101ad0f04  stp xzr,xzr,[x20, #0x10]
7101ad0f08  stp x20,xzr,[x20]
7101ad0f0c  mov w0,#0x10
7101ad0f10  stp xzr,x8,[x20, #0xb0]
7101ad0f14  mov w1,#0x20
7101ad0f18  str w8,[x20, #0xc0]
7101ad0f1c  strb wzr,[x20, #0xc4]
7101ad0f20  stp xzr,xzr,[x20, #0xa0]
7101ad0f24  stp xzr,xzr,[x20, #0x90]
7101ad0f28  stp xzr,xzr,[x20, #0x80]
7101ad0f2c  stp xzr,xzr,[x20, #0x70]
7101ad0f30  stp xzr,xzr,[x20, #0x60]
7101ad0f34  stp xzr,xzr,[x20, #0x50]
7101ad0f38  stp xzr,xzr,[x20, #0x40]
7101ad0f3c  stp xzr,xzr,[x20, #0x30]
7101ad0f40  stp xzr,xzr,[x20, #0x20]
7101ad0f44  str x27,[x22, #0xd0]!
7101ad0f48  stur x23,[x22, #-0x8]
7101ad0f4c  str xzr,[x22, #0x8]
7101ad0f50  stp xzr,xzr,[x22, #0x60]
7101ad0f54  stp xzr,xzr,[x22, #0x50]
7101ad0f58  stp xzr,xzr,[x22, #0x40]
7101ad0f5c  stp xzr,xzr,[x22, #0x30]
7101ad0f60  stp xzr,xzr,[x22, #0x20]
7101ad0f64  stp xzr,xzr,[x22, #0x10]
7101ad0f68  bl 0x710392e290
7101ad0f6c  cbnz x0,0x7101ad0fb4
7101ad0f70  adrp x8,0x7105332000
7101ad0f74  ldr x0,[x8, #0xf00]
7101ad0f78  cbz x0,0x7101ad0fb0
7101ad0f7c  mov w8,#0x20
7101ad0f80  stur wzr,[x29, #-0x90]
7101ad0f84  sub x1,x29,#0x90
7101ad0f88  str x8,[sp]
7101ad0f8c  ldr x8,[x0]
7101ad0f90  ldr x8,[x8, #0x30]
7101ad0f94  mov x2,sp
7101ad0f98  blr x8
7101ad0f9c  tbz w0,#0x0,0x7101ad0fb0
7101ad0fa0  mov w0,#0x10
7101ad0fa4  mov w1,#0x20
7101ad0fa8  bl 0x710392e290
7101ad0fac  cbnz x0,0x7101ad0fb4
7101ad0fb0  mov x0,xzr
7101ad0fb4  mov x26,x20
7101ad0fb8  stp xzr,xzr,[x0, #0x10]
7101ad0fbc  stp xzr,xzr,[x0]
7101ad0fc0  mov w1,#0x20
7101ad0fc4  str x27,[x26, #0xe0]!
7101ad0fc8  stur x0,[x26, #-0x8]
7101ad0fcc  mov w0,#0x10
7101ad0fd0  bl 0x710392e290
7101ad0fd4  cbnz x0,0x7101ad101c
7101ad0fd8  adrp x8,0x7105332000
7101ad0fdc  ldr x0,[x8, #0xf00]
7101ad0fe0  cbz x0,0x7101ad1018
7101ad0fe4  mov w8,#0x20
7101ad0fe8  stur wzr,[x29, #-0x90]
7101ad0fec  sub x1,x29,#0x90
7101ad0ff0  str x8,[sp]
7101ad0ff4  ldr x8,[x0]
7101ad0ff8  ldr x8,[x8, #0x30]
7101ad0ffc  mov x2,sp
7101ad1000  blr x8
7101ad1004  tbz w0,#0x0,0x7101ad1018
7101ad1008  mov w0,#0x10
7101ad100c  mov w1,#0x20
7101ad1010  bl 0x710392e290
7101ad1014  cbnz x0,0x7101ad101c
7101ad1018  mov x0,xzr
7101ad101c  mov x28,x20
7101ad1020  stp xzr,xzr,[x0, #0x10]
7101ad1024  stp xzr,xzr,[x0]
7101ad1028  mov w1,#0x20
7101ad102c  str x27,[x28, #0xf0]!
7101ad1030  stur x0,[x28, #-0x8]
7101ad1034  mov w0,#0x10
7101ad1038  bl 0x710392e290
7101ad103c  cbnz x0,0x7101ad1084
7101ad1040  adrp x8,0x7105332000
7101ad1044  ldr x0,[x8, #0xf00]
7101ad1048  cbz x0,0x7101ad1080
7101ad104c  mov w8,#0x20
7101ad1050  stur wzr,[x29, #-0x90]
7101ad1054  sub x1,x29,#0x90
7101ad1058  str x8,[sp]
7101ad105c  ldr x8,[x0]
7101ad1060  ldr x8,[x8, #0x30]
7101ad1064  mov x2,sp
7101ad1068  blr x8
7101ad106c  tbz w0,#0x0,0x7101ad1080
7101ad1070  mov w0,#0x10
7101ad1074  mov w1,#0x20
7101ad1078  bl 0x710392e290
7101ad107c  cbnz x0,0x7101ad1084
7101ad1080  mov x0,xzr
7101ad1084  stp xzr,xzr,[x0, #0x10]
7101ad1088  mov w1,#0x20
7101ad108c  stp xzr,xzr,[x0]
7101ad1090  stp x0,x27,[x20, #0xf8]
7101ad1094  mov w0,#0x10
7101ad1098  bl 0x710392e290
7101ad109c  cbnz x0,0x7101ad10e4
7101ad10a0  adrp x8,0x7105332000
7101ad10a4  ldr x0,[x8, #0xf00]
7101ad10a8  cbz x0,0x7101ad10e0
7101ad10ac  mov w8,#0x20
7101ad10b0  stur wzr,[x29, #-0x90]
7101ad10b4  sub x1,x29,#0x90
7101ad10b8  str x8,[sp]
7101ad10bc  ldr x8,[x0]
7101ad10c0  ldr x8,[x8, #0x30]
7101ad10c4  mov x2,sp
7101ad10c8  blr x8
7101ad10cc  tbz w0,#0x0,0x7101ad10e0
7101ad10d0  mov w0,#0x10
7101ad10d4  mov w1,#0x20
7101ad10d8  bl 0x710392e290
7101ad10dc  cbnz x0,0x7101ad10e4
7101ad10e0  mov x0,xzr
7101ad10e4  stp xzr,xzr,[x0, #0x10]
7101ad10e8  mov w1,#0x20
7101ad10ec  stp xzr,xzr,[x0]
7101ad10f0  stp x0,x27,[x20, #0x108]
7101ad10f4  mov w0,#0x10
7101ad10f8  bl 0x710392e290
7101ad10fc  cbnz x0,0x7101ad1144
7101ad1100  adrp x8,0x7105332000
7101ad1104  ldr x0,[x8, #0xf00]
7101ad1108  cbz x0,0x7101ad1140
7101ad110c  mov w8,#0x20
7101ad1110  stur wzr,[x29, #-0x90]
7101ad1114  sub x1,x29,#0x90
7101ad1118  str x8,[sp]
7101ad111c  ldr x8,[x0]
7101ad1120  ldr x8,[x8, #0x30]
7101ad1124  mov x2,sp
7101ad1128  blr x8
7101ad112c  tbz w0,#0x0,0x7101ad1140
7101ad1130  mov w0,#0x10
7101ad1134  mov w1,#0x20
7101ad1138  bl 0x710392e290
7101ad113c  cbnz x0,0x7101ad1144
7101ad1140  mov x0,xzr
7101ad1144  stp xzr,xzr,[x0, #0x10]
7101ad1148  mov w1,#0x20
7101ad114c  stp xzr,xzr,[x0]
7101ad1150  stp x0,x27,[x20, #0x118]
7101ad1154  mov w0,#0x10
7101ad1158  bl 0x710392e290
7101ad115c  cbnz x0,0x7101ad11a4
7101ad1160  adrp x8,0x7105332000
7101ad1164  ldr x0,[x8, #0xf00]
7101ad1168  cbz x0,0x7101ad11a0
7101ad116c  mov w8,#0x20
7101ad1170  stur wzr,[x29, #-0x90]
7101ad1174  sub x1,x29,#0x90
7101ad1178  str x8,[sp]
7101ad117c  ldr x8,[x0]
7101ad1180  ldr x8,[x8, #0x30]
7101ad1184  mov x2,sp
7101ad1188  blr x8
7101ad118c  tbz w0,#0x0,0x7101ad11a0
7101ad1190  mov w0,#0x10
7101ad1194  mov w1,#0x20
7101ad1198  bl 0x710392e290
7101ad119c  cbnz x0,0x7101ad11a4
7101ad11a0  mov x0,xzr
7101ad11a4  stp xzr,xzr,[x0, #0x10]
7101ad11a8  mov w1,#0x20
7101ad11ac  stp xzr,xzr,[x0]
7101ad11b0  stp x0,x27,[x20, #0x128]
7101ad11b4  mov w0,#0x10
7101ad11b8  bl 0x710392e290
7101ad11bc  cbnz x0,0x7101ad1204
7101ad11c0  adrp x8,0x7105332000
7101ad11c4  ldr x0,[x8, #0xf00]
7101ad11c8  cbz x0,0x7101ad1200
7101ad11cc  mov w8,#0x20
7101ad11d0  stur wzr,[x29, #-0x90]
7101ad11d4  sub x1,x29,#0x90
7101ad11d8  str x8,[sp]
7101ad11dc  ldr x8,[x0]
7101ad11e0  ldr x8,[x8, #0x30]
7101ad11e4  mov x2,sp
7101ad11e8  blr x8
7101ad11ec  tbz w0,#0x0,0x7101ad1200
7101ad11f0  mov w0,#0x10
7101ad11f4  mov w1,#0x20
7101ad11f8  bl 0x710392e290
7101ad11fc  cbnz x0,0x7101ad1204
7101ad1200  mov x0,xzr
7101ad1204  add x23,x20,#0x140
7101ad1208  stp xzr,xzr,[x0, #0x10]
7101ad120c  stp xzr,xzr,[x0]
7101ad1210  str x0,[x20, #0x138]
7101ad1214  mov x0,x23
7101ad1218  bl 0x7103776290
7101ad121c  mov w0,#0x10
7101ad1220  mov w1,#0x8
7101ad1224  add x24,x20,#0x150
7101ad1228  bl 0x710392e290
7101ad122c  mov x25,x0
7101ad1230  cbnz x0,0x7101ad127c
7101ad1234  adrp x8,0x7105332000
7101ad1238  ldr x0,[x8, #0xf00]
7101ad123c  cbz x0,0x7101ad1278
7101ad1240  mov w8,#0x8
7101ad1244  stur wzr,[x29, #-0x90]
7101ad1248  sub x1,x29,#0x90
7101ad124c  str x8,[sp]
7101ad1250  ldr x8,[x0]
7101ad1254  ldr x8,[x8, #0x30]
7101ad1258  mov x2,sp
7101ad125c  blr x8
7101ad1260  tbz w0,#0x0,0x7101ad1278
7101ad1264  mov w0,#0x10
7101ad1268  mov w1,#0x8
7101ad126c  bl 0x710392e290
7101ad1270  mov x25,x0
7101ad1274  cbnz x0,0x7101ad127c
7101ad1278  mov x25,xzr
7101ad127c  mov x0,x25
7101ad1280  bl 0x7103773200
7101ad1284  adrp x9,0x7101ad0000
7101ad1288  add x9,x9,#0x950
7101ad128c  adrp x8,0x7101ad0000
7101ad1290  add x8,x8,#0x8b0
7101ad1294  stp x9,xzr,[x20, #0x58]
7101ad1298  ldr x9,[x20, #0xc8]
7101ad129c  stp x8,xzr,[x20, #0x28]
7101ad12a0  adrp x8,0x7101ad0000
7101ad12a4  add x8,x8,#0x8c0
7101ad12a8  str wzr,[x20, #0x160]
7101ad12ac  stp x8,xzr,[x20, #0x48]
7101ad12b0  adrp x8,0x7101ad0000
7101ad12b4  add x8,x8,#0xa10
7101ad12b8  adrp x2,0x7104544000
7101ad12bc  add x2,x2,#0x5e8
7101ad12c0  stp x25,xzr,[x20, #0x150]
7101ad12c4  mov w3,#0x1
7101ad12c8  mov x0,x24
7101ad12cc  stp x8,xzr,[x20, #0x38]
7101ad12d0  ldr x1,[x9]
7101ad12d4  bl 0x71032cbf30
7101ad12d8  ldr x8,[x20, #0x150]
7101ad12dc  ldr x8,[x8]
7101ad12e0  ldr x9,[x8]
7101ad12e4  ldr x8,[x9, #0x600]
7101ad12e8  orr w10,wzr,#0x6
7101ad12ec  str w10,[x8, #0x494]
7101ad12f0  ldr x8,[x9, #0x608]
7101ad12f4  ldr x9,[x9, #0x610]
7101ad12f8  cmp x8,x9
7101ad12fc  b.eq 0x7101ad136c
7101ad1300  sub x10,x9,#0x10
7101ad1304  sub x10,x10,x8
7101ad1308  ubfx x11,x10,#0x4,#0x1c
7101ad130c  add w11,w11,#0x1
7101ad1310  ands x11,x11,#0x3
7101ad1314  b.eq 0x7101ad1334
7101ad1318  neg x11,x11
7101ad131c  orr w12,wzr,#0x6
7101ad1320  ldr x13,[x8, #0x8]
7101ad1324  add x8,x8,#0x10
7101ad1328  adds x11,x11,#0x1
7101ad132c  str w12,[x13, #0x494]
7101ad1330  b.ne 0x7101ad1320
7101ad1334  cmp x10,#0x30
7101ad1338  b.cc 0x7101ad136c
7101ad133c  orr w10,wzr,#0x6
7101ad1340  ldr x11,[x8, #0x8]
7101ad1344  str w10,[x11, #0x494]
7101ad1348  ldr x11,[x8, #0x18]
7101ad134c  str w10,[x11, #0x494]
7101ad1350  ldr x11,[x8, #0x28]
7101ad1354  str w10,[x11, #0x494]
7101ad1358  ldr x11,[x8, #0x38]
7101ad135c  add x8,x8,#0x40
7101ad1360  cmp x9,x8
7101ad1364  str w10,[x11, #0x494]
7101ad1368  b.ne 0x7101ad1340
7101ad136c  ldr x8,[x24]
7101ad1370  ldr x8,[x8]
7101ad1374  ldr x0,[x8]
7101ad1378  mov w1,wzr
7101ad137c  bl 0x71037760f0
7101ad1380  ldr x8,[x24]
7101ad1384  ldr x8,[x8]
7101ad1388  add x1,x8,#0x8
7101ad138c  sub x0,x29,#0xa0
7101ad1390  bl 0x7103776390
7101ad1394  adrp x1,0x710436c000
7101ad1398  add x1,x1,#0x851
7101ad139c  mov x8,sp
7101ad13a0  sub x0,x29,#0xa0
7101ad13a4  mov x24,sp
7101ad13a8  bl 0x7103776640
7101ad13ac  cmp x24,x23
7101ad13b0  b.eq 0x7101ad13e0
7101ad13b4  ldr x8,[sp, #0x8]
7101ad13b8  str xzr,[sp, #0x8]
7101ad13bc  ldr x23,[x20, #0x148]
7101ad13c0  str x8,[x20, #0x148]
7101ad13c4  cbz x23,0x7101ad13e0
7101ad13c8  ldr x0,[x23, #0x18]
7101ad13cc  stp x27,xzr,[x23, #0x10]
7101ad13d0  cbz x0,0x7101ad13d8
7101ad13d4  bl 0x710392eb40
7101ad13d8  mov x0,x23
7101ad13dc  bl 0x710392eb40
7101ad13e0  ldr x23,[sp, #0x8]
7101ad13e4  adrp x8,0x710523d000
7101ad13e8  add x8,x8,#0x988
7101ad13ec  add x24,x20,#0x120
7101ad13f0  mov x25,x8
7101ad13f4  stp x8,xzr,[sp]
7101ad13f8  cbz x23,0x7101ad1414
7101ad13fc  ldr x0,[x23, #0x18]
7101ad1400  stp x27,xzr,[x23, #0x10]
7101ad1404  cbz x0,0x7101ad140c
7101ad1408  bl 0x710392eb40
7101ad140c  mov x0,x23
7101ad1410  bl 0x710392eb40
7101ad1414  adrp x1,0x71042f7000
7101ad1418  add x1,x1,#0xe0e
7101ad141c  mov x8,sp
7101ad1420  sub x0,x29,#0xa0
7101ad1424  mov x23,sp
7101ad1428  bl 0x7103776910
7101ad142c  cmp x23,x24
7101ad1430  b.eq 0x7101ad144c
7101ad1434  ldr x8,[sp, #0x8]
7101ad1438  str xzr,[sp, #0x8]
7101ad143c  ldr x0,[x20, #0x128]
7101ad1440  str x8,[x20, #0x128]
7101ad1444  cbz x0,0x7101ad144c
7101ad1448  bl 0x710392eb40
7101ad144c  ldr x0,[sp, #0x8]
7101ad1450  add x23,x20,#0x130
7101ad1454  stp x27,xzr,[sp]
7101ad1458  cbz x0,0x7101ad1460
7101ad145c  bl 0x710392eb40
7101ad1460  adrp x1,0x7104443000
7101ad1464  add x1,x1,#0x93d
7101ad1468  mov x8,sp
7101ad146c  sub x0,x29,#0xa0
7101ad1470  mov x24,sp
7101ad1474  bl 0x7103776910
7101ad1478  cmp x24,x23
7101ad147c  b.eq 0x7101ad1498
7101ad1480  ldr x8,[sp, #0x8]
7101ad1484  str xzr,[sp, #0x8]
7101ad1488  ldr x0,[x20, #0x138]
7101ad148c  str x8,[x20, #0x138]
7101ad1490  cbz x0,0x7101ad1498
7101ad1494  bl 0x710392eb40
7101ad1498  ldr x0,[sp, #0x8]
7101ad149c  stp x27,xzr,[sp]
7101ad14a0  cbz x0,0x7101ad14a8
7101ad14a4  bl 0x710392eb40
7101ad14a8  adrp x1,0x71043cf000
7101ad14ac  add x1,x1,#0xca4
7101ad14b0  mov x8,sp
7101ad14b4  sub x0,x29,#0xa0
7101ad14b8  mov x23,sp
7101ad14bc  bl 0x7103776910
7101ad14c0  cmp x23,x22
7101ad14c4  b.eq 0x7101ad14e0
7101ad14c8  ldr x8,[sp, #0x8]
7101ad14cc  str xzr,[sp, #0x8]
7101ad14d0  ldr x0,[x20, #0xd8]
7101ad14d4  str x8,[x20, #0xd8]
7101ad14d8  cbz x0,0x7101ad14e0
7101ad14dc  bl 0x710392eb40
7101ad14e0  ldr x0,[sp, #0x8]
7101ad14e4  stp x27,xzr,[sp]
7101ad14e8  cbz x0,0x7101ad14f0
7101ad14ec  bl 0x710392eb40
7101ad14f0  adrp x1,0x7104308000
7101ad14f4  add x1,x1,#0xc5c
7101ad14f8  mov x8,sp
7101ad14fc  sub x0,x29,#0xa0
7101ad1500  mov x23,sp
7101ad1504  bl 0x7103776910
7101ad1508  cmp x23,x26
7101ad150c  b.eq 0x7101ad1528
7101ad1510  ldr x8,[sp, #0x8]
7101ad1514  str xzr,[sp, #0x8]
7101ad1518  ldr x0,[x20, #0xe8]
7101ad151c  str x8,[x20, #0xe8]
7101ad1520  cbz x0,0x7101ad1528
7101ad1524  bl 0x710392eb40
7101ad1528  ldr x0,[sp, #0x8]
7101ad152c  stp x27,xzr,[sp]
7101ad1530  cbz x0,0x7101ad1538
7101ad1534  bl 0x710392eb40
7101ad1538  adrp x1,0x7104401000
7101ad153c  add x1,x1,#0xdad
7101ad1540  mov x8,sp
7101ad1544  sub x0,x29,#0xa0
7101ad1548  mov x23,sp
7101ad154c  bl 0x7103776910
7101ad1550  cmp x23,x28
7101ad1554  b.eq 0x7101ad1570
7101ad1558  ldr x8,[sp, #0x8]
7101ad155c  str xzr,[sp, #0x8]
7101ad1560  ldr x0,[x20, #0xf8]
7101ad1564  str x8,[x20, #0xf8]
7101ad1568  cbz x0,0x7101ad1570
7101ad156c  bl 0x710392eb40
7101ad1570  ldr x0,[sp, #0x8]
7101ad1574  add x23,x20,#0x100
7101ad1578  mov x28,x25
7101ad157c  stp x27,xzr,[sp]
7101ad1580  cbz x0,0x7101ad1588
7101ad1584  bl 0x710392eb40
7101ad1588  adrp x1,0x7104308000
7101ad158c  add x1,x1,#0xc5c
7101ad1590  sub x8,x29,#0x90
7101ad1594  sub x0,x29,#0xa0
7101ad1598  bl 0x7103776640
7101ad159c  adrp x1,0x71043cf000
7101ad15a0  add x1,x1,#0xca4
7101ad15a4  mov x8,sp
7101ad15a8  sub x0,x29,#0x90
7101ad15ac  mov x24,sp
7101ad15b0  bl 0x7103776910
7101ad15b4  cmp x24,x23
7101ad15b8  b.eq 0x7101ad15d4
7101ad15bc  ldr x8,[sp, #0x8]
7101ad15c0  str xzr,[sp, #0x8]
7101ad15c4  ldr x0,[x20, #0x108]
7101ad15c8  str x8,[x20, #0x108]
7101ad15cc  cbz x0,0x7101ad15d4
7101ad15d0  bl 0x710392eb40
7101ad15d4  ldr x0,[sp, #0x8]
7101ad15d8  stp x27,xzr,[sp]
7101ad15dc  cbz x0,0x7101ad15e4
7101ad15e0  bl 0x710392eb40
7101ad15e4  ldur x24,[x29, #-0x88]
7101ad15e8  add x25,x20,#0x110
7101ad15ec  stp x28,xzr,[x29, #-0x90]
7101ad15f0  cbz x24,0x7101ad160c
7101ad15f4  ldr x0,[x24, #0x18]
7101ad15f8  stp x27,xzr,[x24, #0x10]
7101ad15fc  cbz x0,0x7101ad1604
7101ad1600  bl 0x710392eb40
7101ad1604  mov x0,x24
7101ad1608  bl 0x710392eb40
7101ad160c  adrp x1,0x7104401000
7101ad1610  add x1,x1,#0xdad
7101ad1614  sub x8,x29,#0x90
7101ad1618  sub x0,x29,#0xa0
7101ad161c  bl 0x7103776640
7101ad1620  adrp x1,0x71043cf000
7101ad1624  add x1,x1,#0xca4
7101ad1628  mov x8,sp
7101ad162c  sub x0,x29,#0x90
7101ad1630  mov x24,sp
7101ad1634  bl 0x7103776910
7101ad1638  cmp x24,x25
7101ad163c  b.eq 0x7101ad1658
7101ad1640  ldr x8,[sp, #0x8]
7101ad1644  str xzr,[sp, #0x8]
7101ad1648  ldr x0,[x20, #0x118]
7101ad164c  str x8,[x20, #0x118]
7101ad1650  cbz x0,0x7101ad1658
7101ad1654  bl 0x710392eb40
7101ad1658  ldr x0,[sp, #0x8]
7101ad165c  stp x27,xzr,[sp]
7101ad1660  cbz x0,0x7101ad1668
7101ad1664  bl 0x710392eb40
7101ad1668  ldur x26,[x29, #-0x88]
7101ad166c  add x24,x20,#0x158
7101ad1670  stp x28,xzr,[x29, #-0x90]
7101ad1674  cbz x26,0x7101ad1690
7101ad1678  ldr x0,[x26, #0x18]
7101ad167c  stp x27,xzr,[x26, #0x10]
7101ad1680  cbz x0,0x7101ad1688
7101ad1684  bl 0x710392eb40
7101ad1688  mov x0,x26
7101ad168c  bl 0x710392eb40
7101ad1690  adrp x8,0x7104421000
7101ad1694  add x8,x8,#0xdeb
7101ad1698  adrp x9,0x7104339000
7101ad169c  add x9,x9,#0xc8d
7101ad16a0  cmp w21,#0x0
7101ad16a4  csel x1,x9,x8,eq
7101ad16a8  mov x0,x22
7101ad16ac  bl 0x710377a120
7101ad16b0  adrp x1,0x710434a000
7101ad16b4  add x1,x1,#0x87d
7101ad16b8  mov x0,x23
7101ad16bc  bl 0x710377a120
7101ad16c0  adrp x1,0x710424f000
7101ad16c4  add x1,x1,#0xa6f
7101ad16c8  mov x0,x25
7101ad16cc  bl 0x710377a120
7101ad16d0  mov w8,#0x101
7101ad16d4  strh w8,[sp, #0x8]
7101ad16d8  mov w8,#0x1
7101ad16dc  str w8,[sp, #0x10]
7101ad16e0  strh w8,[sp, #0x14]
7101ad16e4  strb w8,[sp, #0x16]
7101ad16e8  mov x8,#0x41f0000000000000
7101ad16ec  mov x0,sp
7101ad16f0  strh wzr,[sp, #0xe]
7101ad16f4  str x8,[sp, #0x18]
7101ad16f8  mov x8,sp
7101ad16fc  add x21,x8,#0x60
7101ad1700  str xzr,[sp]
7101ad1704  stur wzr,[sp, #0xa]
7101ad1708  str wzr,[sp, #0x20]
7101ad170c  str xzr,[sp, #0x50]
7101ad1710  str xzr,[sp, #0x80]
7101ad1714  str xzr,[sp, #0xb0]
7101ad1718  str xzr,[sp, #0xe0]
7101ad171c  str xzr,[sp, #0x110]
7101ad1720  str wzr,[sp, #0x120]
7101ad1724  bl 0x710337df20
7101ad1728  adrp x8,0x71050a9000
7101ad172c  add x8,x8,#0xa48
7101ad1730  sub x22,x29,#0x90
7101ad1734  sub x0,x29,#0x90
7101ad1738  mov x1,x21
7101ad173c  stur x22,[x29, #-0x70]
7101ad1740  stp x8,x20,[x29, #-0x90]
7101ad1744  bl 0x7101989a30
7101ad1748  ldur x0,[x29, #-0x70]
7101ad174c  cmp x22,x0
7101ad1750  b.eq 0x7101ad1764
7101ad1754  cbz x0,0x7101ad1770
7101ad1758  ldr x8,[x0]
7101ad175c  ldr x8,[x8, #0x28]
7101ad1760  b 0x7101ad176c
7101ad1764  ldr x8,[x0]
7101ad1768  ldr x8,[x8, #0x20]
7101ad176c  blr x8
7101ad1770  ldr x8,[x20, #0x150]
7101ad1774  ldr x8,[x8]
7101ad1778  ldr x0,[x8, #0x10]
7101ad177c  adrp x1,0x710428f000
7101ad1780  add x1,x1,#0xf7d
7101ad1784  bl 0x7103778760
7101ad1788  ldr x8,[x20, #0x150]
7101ad178c  ldr x8,[x8]
7101ad1790  ldr x8,[x8]
7101ad1794  ldr x8,[x8, #0x600]
7101ad1798  orr w9,wzr,#0x6
7101ad179c  str w9,[x8, #0x494]
7101ad17a0  ldr x8,[x20, #0x150]
7101ad17a4  ldr x8,[x8]
7101ad17a8  add x1,x8,#0x8
7101ad17ac  adrp x2,0x71043e0000
7101ad17b0  add x2,x2,#0xa21
7101ad17b4  mov x3,sp
7101ad17b8  mov x0,x24
7101ad17bc  mov x21,sp
7101ad17c0  bl 0x7103770b30
7101ad17c4  ldr x8,[x20, #0xe8]
7101ad17c8  ldr x8,[x8]
7101ad17cc  adrp x22,0x7104867000
7101ad17d0  add x22,x22,#0xc2e
7101ad17d4  cmp x8,#0x0
7101ad17d8  add x9,x8,#0xb0
7101ad17dc  csel x2,x22,x9,eq
7101ad17e0  mov x0,x24
7101ad17e4  mov w1,wzr
7101ad17e8  bl 0x71037717d0
7101ad17ec  ldr x8,[x20, #0xf8]
7101ad17f0  ldr x8,[x8]
7101ad17f4  add x9,x8,#0xb0
7101ad17f8  cmp x8,#0x0
7101ad17fc  csel x2,x22,x9,eq
7101ad1800  mov w1,#0x1
7101ad1804  mov x0,x24
7101ad1808  bl 0x71037717d0
7101ad180c  ldr x0,[x20, #0x158]
7101ad1810  ldr x8,[x0]
7101ad1814  ldr x8,[x8, #0x70]
7101ad1818  mov w1,#0x1
7101ad181c  blr x8
7101ad1820  ldr x8,[x20, #0x150]
7101ad1824  ldr x0,[x8]
7101ad1828  mov w2,#0x6fff
7101ad182c  movk w2,#0x1, LSL #16
7101ad1830  mov w1,#0x1
7101ad1834  bl 0x7103775dc0
7101ad1838  ldrsw x8,[x20, #0xb4]
7101ad183c  cmp w8,#0x13
7101ad1840  b.cs 0x7101ad1980
7101ad1844  add x8,x20,x8, LSL #0x2
7101ad1848  str wzr,[x8, #0x68]
7101ad184c  ldr x0,[sp, #0x110]
7101ad1850  add x8,x21,#0xf0
7101ad1854  cmp x8,x0
7101ad1858  b.eq 0x7101ad186c
7101ad185c  cbz x0,0x7101ad1878
7101ad1860  ldr x8,[x0]
7101ad1864  ldr x8,[x8, #0x28]
7101ad1868  b 0x7101ad1874
7101ad186c  ldr x8,[x0]
7101ad1870  ldr x8,[x8, #0x20]
7101ad1874  blr x8
7101ad1878  ldr x0,[sp, #0xe0]
7101ad187c  mov x8,sp
7101ad1880  add x8,x8,#0xc0
7101ad1884  cmp x8,x0
7101ad1888  b.eq 0x7101ad189c
7101ad188c  cbz x0,0x7101ad18a8
7101ad1890  ldr x8,[x0]
7101ad1894  ldr x8,[x8, #0x28]
7101ad1898  b 0x7101ad18a4
7101ad189c  ldr x8,[x0]
7101ad18a0  ldr x8,[x8, #0x20]
7101ad18a4  blr x8
7101ad18a8  ldr x0,[sp, #0xb0]
7101ad18ac  mov x8,sp
7101ad18b0  add x8,x8,#0x90
7101ad18b4  cmp x8,x0
7101ad18b8  b.eq 0x7101ad18cc
7101ad18bc  cbz x0,0x7101ad18d8
7101ad18c0  ldr x8,[x0]
7101ad18c4  ldr x8,[x8, #0x28]
7101ad18c8  b 0x7101ad18d4
7101ad18cc  ldr x8,[x0]
7101ad18d0  ldr x8,[x8, #0x20]
7101ad18d4  blr x8
7101ad18d8  ldr x0,[sp, #0x80]
7101ad18dc  mov x8,sp
7101ad18e0  add x8,x8,#0x60
7101ad18e4  cmp x8,x0
7101ad18e8  b.eq 0x7101ad18fc
7101ad18ec  cbz x0,0x7101ad1908
7101ad18f0  ldr x8,[x0]
7101ad18f4  ldr x8,[x8, #0x28]
7101ad18f8  b 0x7101ad1904
7101ad18fc  ldr x8,[x0]
7101ad1900  ldr x8,[x8, #0x20]
7101ad1904  blr x8
7101ad1908  ldr x0,[sp, #0x50]
7101ad190c  mov x8,sp
7101ad1910  add x8,x8,#0x30
7101ad1914  cmp x8,x0
7101ad1918  b.eq 0x7101ad192c
7101ad191c  cbz x0,0x7101ad1938
7101ad1920  ldr x8,[x0]
7101ad1924  ldr x8,[x8, #0x28]
7101ad1928  b 0x7101ad1934
7101ad192c  ldr x8,[x0]
7101ad1930  ldr x8,[x8, #0x20]
7101ad1934  blr x8
7101ad1938  ldur x21,[x29, #-0x98]
7101ad193c  stp x28,xzr,[x29, #-0xa0]
7101ad1940  cbz x21,0x7101ad195c
7101ad1944  ldr x0,[x21, #0x18]
7101ad1948  stp x27,xzr,[x21, #0x10]
7101ad194c  cbz x0,0x7101ad1954
7101ad1950  bl 0x710392eb40
7101ad1954  mov x0,x21
7101ad1958  bl 0x710392eb40
7101ad195c  str x20,[x19, #0x80]
7101ad1960  ldp x29,x30,[sp, #0x1d0]
7101ad1964  ldp x20,x19,[sp, #0x1c0]
7101ad1968  ldp x22,x21,[sp, #0x1b0]
7101ad196c  ldp x24,x23,[sp, #0x1a0]
7101ad1970  ldp x26,x25,[sp, #0x190]
7101ad1974  ldp x28,x27,[sp, #0x180]
7101ad1978  add sp,sp,#0x1e0
7101ad197c  ret
7101ad1980  bl 0x71039c2650
