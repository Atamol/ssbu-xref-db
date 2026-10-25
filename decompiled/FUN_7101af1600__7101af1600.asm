// addr:      7101af1600
// offset:    0x1af1600
// name:      FUN_7101af1600
// mangled:   
// size:      892

7101af1600  sub sp,sp,#0xd0
7101af1604  stp x22,x21,[sp, #0xa0]
7101af1608  stp x20,x19,[sp, #0xb0]
7101af160c  stp x29,x30,[sp, #0xc0]
7101af1610  add x29,sp,#0xc0
7101af1614  ldr w8,[x0, #0xbc]
7101af1618  mov x19,x0
7101af161c  cbz w8,0x7101af164c
7101af1620  ldrsw x8,[x19, #0xb4]
7101af1624  cmp w8,#0x13
7101af1628  b.cs 0x7101af1978
7101af162c  add x8,x19,x8, LSL #0x2
7101af1630  mov w9,#0x2
7101af1634  str w9,[x8, #0x68]
7101af1638  ldp x29,x30,[sp, #0xc0]
7101af163c  ldp x20,x19,[sp, #0xb0]
7101af1640  ldp x22,x21,[sp, #0xa0]
7101af1644  add sp,sp,#0xd0
7101af1648  ret
7101af164c  ldr x8,[x19, #0xd8]
7101af1650  cbz x8,0x7101af16a8
7101af1654  ldr x8,[x1, #0x8]
7101af1658  mov w9,#0x1
7101af165c  strb w9,[x8, #0x4aa]
7101af1660  ldr x0,[x19, #0xd8]
7101af1664  ldr x8,[x0]
7101af1668  ldr x8,[x8, #0x60]
7101af166c  mov w1,#0x1
7101af1670  blr x8
7101af1674  ldr x0,[x19, #0xd8]
7101af1678  ldr x8,[x0]
7101af167c  ldr x8,[x8, #0x70]
7101af1680  mov w1,#0x1
7101af1684  blr x8
7101af1688  ldrb w8,[x19, #0xe8]
7101af168c  ldr x0,[x19, #0xd0]
7101af1690  adrp x1,0x7104292000
7101af1694  add x1,x1,#0x32d
7101af1698  cbz w8,0x7101af16c0
7101af169c  fmov s0,0x3f800000
7101af16a0  bl 0x7103778300
7101af16a4  b 0x7101af16c4
7101af16a8  ldrsw x8,[x19, #0xb4]
7101af16ac  cmp w8,#0x13
7101af16b0  b.cs 0x7101af1978
7101af16b4  add x8,x19,x8, LSL #0x2
7101af16b8  str wzr,[x8, #0x68]
7101af16bc  b 0x7101af1638
7101af16c0  bl 0x7103778760
7101af16c4  ldr x1,[x19, #0xd8]
7101af16c8  mov x0,sp
7101af16cc  mov w2,#0x1
7101af16d0  mov w20,#0x1
7101af16d4  bl 0x7103771d60
7101af16d8  ldr x21,[sp, #0x8]
7101af16dc  ldr x0,[x21]
7101af16e0  cbz x0,0x7101af16f4
7101af16e4  ldr x8,[x0]
7101af16e8  ldr x8,[x8, #0x210]
7101af16ec  blr x8
7101af16f0  mov w20,w0
7101af16f4  adrp x8,0x710523d000
7101af16f8  add x8,x8,#0x9c8
7101af16fc  stp x8,xzr,[sp]
7101af1700  cbz x21,0x7101af170c
7101af1704  mov x0,x21
7101af1708  bl 0x710392eb40
7101af170c  ldr x0,[x19, #0xd0]
7101af1710  adrp x1,0x71043f0000
7101af1714  add x1,x1,#0x5b1
7101af1718  tbz w20,#0x0,0x7101af1728
7101af171c  fmov s0,0x3f800000
7101af1720  bl 0x7103778300
7101af1724  b 0x7101af172c
7101af1728  bl 0x7103778760
7101af172c  adrp x8,0x710532f000
7101af1730  ldr x20,[x8, #0x8d0]
7101af1734  ldr x0,[x20, #0x8]
7101af1738  ldrb w8,[x0, #0x191]
7101af173c  cbnz w8,0x7101af17bc
7101af1740  mov x19,#0x538e
7101af1744  movk x19,#0xf0a0, LSL #16
7101af1748  movk x19,#0x13, LSL #32
7101af174c  mov w2,#0x4
7101af1750  mov x1,x19
7101af1754  bl 0x7103313f20
7101af1758  tbz w0,#0x0,0x7101af17bc
7101af175c  add x0,sp,#0x58
7101af1760  mov x1,x19
7101af1764  bl 0x71024076d0
7101af1768  ldr x8,[sp, #0x68]
7101af176c  adrp x9,0x7104f73000
7101af1770  add x9,x9,#0xd50
7101af1774  str x9,[sp, #0x60]
7101af1778  cbz x8,0x7101af17e8
7101af177c  adrp x8,0x7106dd5000
7101af1780  ldrb w8,[x8, #0x3a8]
7101af1784  cmp w8,#0x1
7101af1788  b.ne 0x7101af17e8
7101af178c  adrp x9,0x7106dd5000
7101af1790  ldr w8,[sp, #0x70]
7101af1794  ldr w9,[x9, #0x3ac]
7101af1798  cmp w8,w9
7101af179c  b.ne 0x7101af17e8
7101af17a0  ldr x8,[sp, #0x68]
7101af17a4  ldr wzr,[x8, #0x38]!
7101af17a8  ldaxr w9,[x8]
7101af17ac  sub w9,w9,#0x1
7101af17b0  stlxr w10,w9,[x8]
7101af17b4  cbnz w10,0x7101af17a8
7101af17b8  b 0x7101af17e8
7101af17bc  mov x8,#0x650000000000
7101af17c0  movk x8,#0x87, LSL #48
7101af17c4  strb wzr,[sp, #0x78]
7101af17c8  stp xzr,x8,[sp, #0x68]
7101af17cc  mov x8,#-0x1
7101af17d0  stp x8,xzr,[sp, #0x80]
7101af17d4  adrp x8,0x7104f73000
7101af17d8  add x8,x8,#0xd50
7101af17dc  str wzr,[sp, #0x58]
7101af17e0  str xzr,[sp, #0x90]
7101af17e4  str x8,[sp, #0x60]
7101af17e8  str xzr,[sp, #0x68]
7101af17ec  strb wzr,[sp, #0x78]
7101af17f0  ldr x21,[x20, #0x8]
7101af17f4  ldr w8,[x21, #0x150]
7101af17f8  cmp w8,#0x1
7101af17fc  b.ne 0x7101af187c
7101af1800  adrp x8,0x710532a000
7101af1804  ldr x8,[x8, #0x860]
7101af1808  cbz x8,0x7101af187c
7101af180c  ldr x1,[x8]
7101af1810  mov x2,#0x9401
7101af1814  movk x2,#0xcec, LSL #16
7101af1818  movk x2,#0x17, LSL #32
7101af181c  add x0,sp,#0x18
7101af1820  bl 0x71024d1440
7101af1824  adrp x8,0x7104f73000
7101af1828  add x8,x8,#0xd50
7101af182c  str x8,[sp, #0x20]
7101af1830  ldr x8,[sp, #0x28]
7101af1834  cbz x8,0x7101af1870
7101af1838  adrp x9,0x7106dd5000
7101af183c  ldrb w9,[x9, #0x3a8]
7101af1840  cmp w9,#0x1
7101af1844  b.ne 0x7101af1870
7101af1848  adrp x10,0x7106dd5000
7101af184c  ldr w9,[sp, #0x30]
7101af1850  ldr w10,[x10, #0x3ac]
7101af1854  cmp w9,w10
7101af1858  b.ne 0x7101af1870
7101af185c  ldr wzr,[x8, #0x38]!
7101af1860  ldaxr w9,[x8]
7101af1864  sub w9,w9,#0x1
7101af1868  stlxr w10,w9,[x8]
7101af186c  cbnz w10,0x7101af1860
7101af1870  str xzr,[sp, #0x28]
7101af1874  strb wzr,[sp, #0x38]
7101af1878  b 0x7101af1638
7101af187c  adrp x8,0x7105329000
7101af1880  ldr x19,[x8, #0xf38]
7101af1884  mov x0,x19
7101af1888  bl 0x71039c1a40
7101af188c  ldr x8,[x19, #0x28]
7101af1890  ldrb w9,[x8, #0x58]
7101af1894  add x8,x8,#0x68
7101af1898  adrp x10,0x7104465000
7101af189c  add x10,x10,#0x568
7101af18a0  cmp w9,#0x0
7101af18a4  csel x8,x10,x8,eq
7101af18a8  ldr x22,[x8]
7101af18ac  mov x0,x19
7101af18b0  bl 0x71039c1a50
7101af18b4  ldr x8,[x21, #0x18]
7101af18b8  cmp x8,x22
7101af18bc  ccmp x8,#0x0,#0x4,eq
7101af18c0  b.ne 0x7101af18dc
7101af18c4  mov x0,#0xa536
7101af18c8  movk x0,#0x9510, LSL #16
7101af18cc  movk x0,#0xff14, LSL #32
7101af18d0  movk x0,#0xd9ff, LSL #48
7101af18d4  bl 0x7103314bc0
7101af18d8  b 0x7101af1638
7101af18dc  ldr x8,[x20, #0x8]
7101af18e0  ldr x19,[x8]
7101af18e4  mov w0,#0x10
7101af18e8  mov w1,#0x10
7101af18ec  bl 0x710392e290
7101af18f0  cbnz x0,0x7101af1938
7101af18f4  adrp x8,0x7105332000
7101af18f8  ldr x0,[x8, #0xf00]
7101af18fc  cbz x0,0x7101af1934
7101af1900  mov w8,#0x10
7101af1904  stur wzr,[x29, #-0x24]
7101af1908  sub x1,x29,#0x24
7101af190c  str x8,[sp]
7101af1910  ldr x8,[x0]
7101af1914  ldr x8,[x8, #0x30]
7101af1918  mov x2,sp
7101af191c  blr x8
7101af1920  tbz w0,#0x0,0x7101af1934
7101af1924  mov w0,#0x10
7101af1928  mov w1,#0x10
7101af192c  bl 0x710392e290
7101af1930  cbnz x0,0x7101af1938
7101af1934  mov x0,xzr
7101af1938  mov x9,#0xa536
7101af193c  movk x9,#0x9510, LSL #16
7101af1940  add x8,x0,#0x10
7101af1944  movk x9,#0xff14, LSL #32
7101af1948  movk x9,#0xd9ff, LSL #48
7101af194c  str x8,[sp, #0x10]
7101af1950  stp x9,x19,[x0]
7101af1954  mov x1,sp
7101af1958  stp x0,x8,[sp]
7101af195c  ldr x0,[x20, #0x8]
7101af1960  bl 0x7103314aa0
7101af1964  ldr x0,[sp]
7101af1968  cbz x0,0x7101af1638
7101af196c  str x0,[sp, #0x8]
7101af1970  bl 0x710392eb40
7101af1974  b 0x7101af1638
7101af1978  bl 0x71039c2650
