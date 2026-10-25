// addr:      7101ac1590
// offset:    0x1ac1590
// name:      FUN_7101ac1590
// mangled:   
// size:      4616

7101ac1590  stp x28,x27,[sp, #-0x60]!
7101ac1594  stp x26,x25,[sp, #0x10]
7101ac1598  stp x24,x23,[sp, #0x20]
7101ac159c  stp x22,x21,[sp, #0x30]
7101ac15a0  stp x20,x19,[sp, #0x40]
7101ac15a4  stp x29,x30,[sp, #0x50]
7101ac15a8  add x29,sp,#0x50
7101ac15ac  sub sp,sp,#0x2e0
7101ac15b0  mov x19,x0
7101ac15b4  ldr x0,[x0, #0x268]
7101ac15b8  ldr x8,[x0]
7101ac15bc  ldr x8,[x8, #0x68]
7101ac15c0  mov x28,x1
7101ac15c4  blr x8
7101ac15c8  tbnz w0,#0x0,0x7101ac1658
7101ac15cc  ldr x0,[x19, #0x260]
7101ac15d0  ldr x8,[x0]
7101ac15d4  ldr x8,[x8, #0x70]
7101ac15d8  mov w1,#0x1
7101ac15dc  blr x8
7101ac15e0  ldr x0,[x19, #0x260]
7101ac15e4  ldr x8,[x0]
7101ac15e8  ldr x8,[x8, #0x60]
7101ac15ec  mov w1,#0x1
7101ac15f0  blr x8
7101ac15f4  ldr x0,[x19, #0x268]
7101ac15f8  ldr x8,[x0]
7101ac15fc  ldr x8,[x8, #0x60]
7101ac1600  mov w1,#0x1
7101ac1604  blr x8
7101ac1608  ldr x0,[x19, #0x270]
7101ac160c  ldr x8,[x0]
7101ac1610  ldr x8,[x8, #0x60]
7101ac1614  mov w1,#0x1
7101ac1618  blr x8
7101ac161c  ldr x0,[x19, #0x278]
7101ac1620  ldr x8,[x0]
7101ac1624  ldr x8,[x8, #0x60]
7101ac1628  mov w1,#0x1
7101ac162c  blr x8
7101ac1630  ldr x0,[x19, #0x280]
7101ac1634  ldr x8,[x0]
7101ac1638  ldr x8,[x8, #0x60]
7101ac163c  mov w1,#0x1
7101ac1640  blr x8
7101ac1644  ldr x0,[x19, #0x288]
7101ac1648  ldr x8,[x0]
7101ac164c  ldr x8,[x8, #0x60]
7101ac1650  mov w1,#0x1
7101ac1654  blr x8
7101ac1658  ldr w8,[x19, #0x20c]
7101ac165c  add x21,x19,#0x260
7101ac1660  cbz w8,0x7101ac1868
7101ac1664  ldr x0,[x21]
7101ac1668  ldr x8,[x0]
7101ac166c  ldr x8,[x8, #0x80]
7101ac1670  blr x8
7101ac1674  tbz w0,#0x0,0x7101ac16a8
7101ac1678  adrp x8,0x710532f000
7101ac167c  ldr x8,[x8, #0x8d0]
7101ac1680  ldr x0,[x8, #0x8]
7101ac1684  ldp x8,x9,[x0, #0x40]
7101ac1688  sub x9,x9,x8
7101ac168c  asr x9,x9,#0x3
7101ac1690  cmp x9,#0x2
7101ac1694  b.cc 0x7101ac16ec
7101ac1698  ldr x22,[x8, #0x8]
7101ac169c  ldrb w8,[x0, #0x191]
7101ac16a0  cbnz w8,0x7101ac1768
7101ac16a4  b 0x7101ac16f8
7101ac16a8  ldr x0,[x19, #0x268]
7101ac16ac  ldr x8,[x0]
7101ac16b0  ldr x8,[x8, #0x80]
7101ac16b4  blr x8
7101ac16b8  tbz w0,#0x0,0x7101ac1868
7101ac16bc  adrp x8,0x710532f000
7101ac16c0  ldr x8,[x8, #0x8d0]
7101ac16c4  ldr x0,[x8, #0x8]
7101ac16c8  ldp x8,x9,[x0, #0x40]
7101ac16cc  sub x9,x9,x8
7101ac16d0  asr x9,x9,#0x3
7101ac16d4  cmp x9,#0x2
7101ac16d8  b.cc 0x7101ac17a4
7101ac16dc  ldr x22,[x8, #0x8]
7101ac16e0  ldrb w8,[x0, #0x191]
7101ac16e4  cbnz w8,0x7101ac1820
7101ac16e8  b 0x7101ac17b0
7101ac16ec  mov x22,xzr
7101ac16f0  ldrb w8,[x0, #0x191]
7101ac16f4  cbnz w8,0x7101ac1768
7101ac16f8  mov w2,#0x4
7101ac16fc  mov x1,x22
7101ac1700  bl 0x7103313f20
7101ac1704  tbz w0,#0x0,0x7101ac1768
7101ac1708  add x0,sp,#0x50
7101ac170c  mov x1,x22
7101ac1710  bl 0x71024076d0
7101ac1714  ldr x8,[sp, #0x60]
7101ac1718  adrp x9,0x7104f73000
7101ac171c  add x9,x9,#0xd50
7101ac1720  str x9,[sp, #0x58]
7101ac1724  cbz x8,0x7101ac1794
7101ac1728  adrp x8,0x7106dd5000
7101ac172c  ldrb w8,[x8, #0x3a8]
7101ac1730  cmp w8,#0x1
7101ac1734  b.ne 0x7101ac1794
7101ac1738  adrp x9,0x7106dd5000
7101ac173c  ldr w8,[sp, #0x68]
7101ac1740  ldr w9,[x9, #0x3ac]
7101ac1744  cmp w8,w9
7101ac1748  b.ne 0x7101ac1794
7101ac174c  ldr x8,[sp, #0x60]
7101ac1750  ldr wzr,[x8, #0x38]!
7101ac1754  ldaxr w9,[x8]
7101ac1758  sub w9,w9,#0x1
7101ac175c  stlxr w10,w9,[x8]
7101ac1760  cbnz w10,0x7101ac1754
7101ac1764  b 0x7101ac1794
7101ac1768  mov x8,#0x650000000000
7101ac176c  movk x8,#0x87, LSL #48
7101ac1770  strb wzr,[sp, #0x70]
7101ac1774  stp xzr,x8,[sp, #0x60]
7101ac1778  mov x8,#-0x1
7101ac177c  stp x8,xzr,[sp, #0x78]
7101ac1780  adrp x8,0x7104f73000
7101ac1784  add x8,x8,#0xd50
7101ac1788  str wzr,[sp, #0x50]
7101ac178c  str xzr,[sp, #0x88]
7101ac1790  str x8,[sp, #0x58]
7101ac1794  str xzr,[sp, #0x60]
7101ac1798  strb wzr,[sp, #0x70]
7101ac179c  ldr x0,[x19, #0x268]
7101ac17a0  b 0x7101ac1858
7101ac17a4  mov x22,xzr
7101ac17a8  ldrb w8,[x0, #0x191]
7101ac17ac  cbnz w8,0x7101ac1820
7101ac17b0  mov w2,#0x4
7101ac17b4  mov x1,x22
7101ac17b8  bl 0x7103313f20
7101ac17bc  tbz w0,#0x0,0x7101ac1820
7101ac17c0  add x0,sp,#0x50
7101ac17c4  mov x1,x22
7101ac17c8  bl 0x71024076d0
7101ac17cc  ldr x8,[sp, #0x60]
7101ac17d0  adrp x9,0x7104f73000
7101ac17d4  add x9,x9,#0xd50
7101ac17d8  str x9,[sp, #0x58]
7101ac17dc  cbz x8,0x7101ac184c
7101ac17e0  adrp x8,0x7106dd5000
7101ac17e4  ldrb w8,[x8, #0x3a8]
7101ac17e8  cmp w8,#0x1
7101ac17ec  b.ne 0x7101ac184c
7101ac17f0  adrp x9,0x7106dd5000
7101ac17f4  ldr w8,[sp, #0x68]
7101ac17f8  ldr w9,[x9, #0x3ac]
7101ac17fc  cmp w8,w9
7101ac1800  b.ne 0x7101ac184c
7101ac1804  ldr x8,[sp, #0x60]
7101ac1808  ldr wzr,[x8, #0x38]!
7101ac180c  ldaxr w9,[x8]
7101ac1810  sub w9,w9,#0x1
7101ac1814  stlxr w10,w9,[x8]
7101ac1818  cbnz w10,0x7101ac180c
7101ac181c  b 0x7101ac184c
7101ac1820  mov x8,#0x650000000000
7101ac1824  movk x8,#0x87, LSL #48
7101ac1828  strb wzr,[sp, #0x70]
7101ac182c  stp xzr,x8,[sp, #0x60]
7101ac1830  mov x8,#-0x1
7101ac1834  stp x8,xzr,[sp, #0x78]
7101ac1838  adrp x8,0x7104f73000
7101ac183c  add x8,x8,#0xd50
7101ac1840  str wzr,[sp, #0x50]
7101ac1844  str xzr,[sp, #0x88]
7101ac1848  str x8,[sp, #0x58]
7101ac184c  str xzr,[sp, #0x60]
7101ac1850  strb wzr,[sp, #0x70]
7101ac1854  ldr x0,[x21]
7101ac1858  ldr x8,[x0]
7101ac185c  ldr x8,[x8, #0x70]
7101ac1860  mov w1,wzr
7101ac1864  blr x8
7101ac1868  ldr x0,[x19, #0x260]
7101ac186c  ldr w8,[x0, #0x254]
7101ac1870  ldr w9,[x19, #0x334]
7101ac1874  cmp w8,w9
7101ac1878  b.eq 0x7101ac1898
7101ac187c  ldr x8,[x0]
7101ac1880  ldr x8,[x8, #0x78]
7101ac1884  blr x8
7101ac1888  tbz w0,#0x0,0x7101ac1898
7101ac188c  ldr x8,[x19, #0x260]
7101ac1890  ldr w8,[x8, #0x254]
7101ac1894  str w8,[x19, #0x334]
7101ac1898  ldr x0,[x19, #0x270]
7101ac189c  ldr x8,[x0]
7101ac18a0  ldr x8,[x8, #0x78]
7101ac18a4  blr x8
7101ac18a8  tbz w0,#0x0,0x7101ac18d8
7101ac18ac  ldr x8,[x19, #0x270]
7101ac18b0  ldr w8,[x8, #0x254]
7101ac18b4  ldrb w9,[x19, #0x32f]
7101ac18b8  cmp w8,#0x0
7101ac18bc  cset w8,eq
7101ac18c0  cmp w8,w9
7101ac18c4  b.eq 0x7101ac18d8
7101ac18c8  mov x0,x21
7101ac18cc  mov w1,wzr
7101ac18d0  mov w2,wzr
7101ac18d4  bl 0x7103771be0
7101ac18d8  ldr x0,[x19, #0x278]
7101ac18dc  ldr x8,[x0]
7101ac18e0  ldr x8,[x8, #0x78]
7101ac18e4  blr x8
7101ac18e8  tbz w0,#0x0,0x7101ac1918
7101ac18ec  ldr x8,[x19, #0x278]
7101ac18f0  ldr w8,[x8, #0x254]
7101ac18f4  ldrb w9,[x19, #0x330]
7101ac18f8  cmp w8,#0x0
7101ac18fc  cset w8,eq
7101ac1900  cmp w8,w9
7101ac1904  b.eq 0x7101ac1918
7101ac1908  mov w1,#0x1
7101ac190c  mov x0,x21
7101ac1910  mov w2,wzr
7101ac1914  bl 0x7103771be0
7101ac1918  ldr x0,[x19, #0x280]
7101ac191c  ldr x8,[x0]
7101ac1920  ldr x8,[x8, #0x78]
7101ac1924  blr x8
7101ac1928  tbz w0,#0x0,0x7101ac1958
7101ac192c  ldr x8,[x19, #0x280]
7101ac1930  ldr w8,[x8, #0x254]
7101ac1934  ldrb w9,[x19, #0x331]
7101ac1938  cmp w8,#0x0
7101ac193c  cset w8,eq
7101ac1940  cmp w8,w9
7101ac1944  b.eq 0x7101ac1958
7101ac1948  mov w1,#0x2
7101ac194c  mov x0,x21
7101ac1950  mov w2,wzr
7101ac1954  bl 0x7103771be0
7101ac1958  ldr x0,[x19, #0x288]
7101ac195c  ldr x8,[x0]
7101ac1960  ldr x8,[x8, #0x78]
7101ac1964  blr x8
7101ac1968  tbz w0,#0x0,0x7101ac1998
7101ac196c  ldr x8,[x19, #0x288]
7101ac1970  ldr w8,[x8, #0x254]
7101ac1974  ldrb w9,[x19, #0x332]
7101ac1978  cmp w8,#0x0
7101ac197c  cset w8,eq
7101ac1980  cmp w8,w9
7101ac1984  b.eq 0x7101ac1998
7101ac1988  orr w1,wzr,#0x3
7101ac198c  mov x0,x21
7101ac1990  mov w2,wzr
7101ac1994  bl 0x7103771be0
7101ac1998  ldr x8,[x19, #0x228]
7101ac199c  ldr x8,[x8]
7101ac19a0  ldr x8,[x8]
7101ac19a4  ldr x8,[x8]
7101ac19a8  ldr x8,[x8, #0x600]
7101ac19ac  ldrb w9,[x8, #0x4aa]
7101ac19b0  add x22,x19,#0x268
7101ac19b4  cbz w9,0x7101ac19c0
7101ac19b8  ldrb w8,[x8, #0x1bc]
7101ac19bc  tbnz w8,#0x1,0x7101ac1ab8
7101ac19c0  ldr x8,[x28, #0x8]
7101ac19c4  ldrb w9,[x8, #0x4aa]
7101ac19c8  cbz w9,0x7101ac19d4
7101ac19cc  ldrb w8,[x8, #0x1ac]
7101ac19d0  tbnz w8,#0x1,0x7101ac19ec
7101ac19d4  ldr x8,[x22]
7101ac19d8  ldrb w8,[x8, #0x280]
7101ac19dc  cbnz w8,0x7101ac19ec
7101ac19e0  ldr x8,[x21]
7101ac19e4  ldrb w9,[x8, #0x280]
7101ac19e8  cbz w9,0x7101ac1f5c
7101ac19ec  ldr x8,[x19, #0x300]
7101ac19f0  ldp x9,x8,[x8]
7101ac19f4  sub x8,x8,x9
7101ac19f8  mov w9,#0xeeef
7101ac19fc  movk w9,#0xeeee, LSL #16
7101ac1a00  lsr x8,x8,#0x6
7101ac1a04  add x23,x19,#0x230
7101ac1a08  mov x0,x23
7101ac1a0c  mul w20,w8,w9
7101ac1a10  adrp x1,0x710424f000
7101ac1a14  add x1,x1,#0x6ab
7101ac1a18  add x8,sp,#0x50
7101ac1a1c  bl 0x7103776910
7101ac1a20  ldr x0,[sp, #0x58]
7101ac1a24  ldr x8,[x0]
7101ac1a28  cbz x8,0x7101ac1a44
7101ac1a2c  ldrb w10,[x8, #0x58]
7101ac1a30  cmp w20,#0x1
7101ac1a34  cset w9,gt
7101ac1a38  and w10,w10,#0xfe
7101ac1a3c  orr w9,w10,w9
7101ac1a40  strb w9,[x8, #0x58]
7101ac1a44  adrp x24,0x710523d000
7101ac1a48  add x24,x24,#0x9a8
7101ac1a4c  stp x24,xzr,[sp, #0x50]
7101ac1a50  cbz x0,0x7101ac1a58
7101ac1a54  bl 0x710392eb40
7101ac1a58  adrp x1,0x7104412000
7101ac1a5c  add x1,x1,#0xb00
7101ac1a60  add x8,sp,#0x50
7101ac1a64  mov x0,x23
7101ac1a68  bl 0x7103776910
7101ac1a6c  ldr x0,[sp, #0x58]
7101ac1a70  ldr x8,[x0]
7101ac1a74  cbz x8,0x7101ac1a90
7101ac1a78  ldrb w10,[x8, #0x58]
7101ac1a7c  cmp w20,#0x1
7101ac1a80  cset w9,gt
7101ac1a84  and w10,w10,#0xfe
7101ac1a88  orr w9,w10,w9
7101ac1a8c  strb w9,[x8, #0x58]
7101ac1a90  stp x24,xzr,[sp, #0x50]
7101ac1a94  cbz x0,0x7101ac1a9c
7101ac1a98  bl 0x710392eb40
7101ac1a9c  ldrsw x8,[x19, #0x204]
7101ac1aa0  cmp w8,#0x13
7101ac1aa4  b.cs 0x7101ac2794
7101ac1aa8  add x8,x19,x8, LSL #0x2
7101ac1aac  mov w9,#0x12
7101ac1ab0  str w9,[x8, #0x1b8]
7101ac1ab4  b 0x7101ac1adc
7101ac1ab8  ldr x0,[x21]
7101ac1abc  ldr x8,[x0]
7101ac1ac0  ldr x8,[x8, #0x70]
7101ac1ac4  mov w1,wzr
7101ac1ac8  blr x8
7101ac1acc  mov w1,#0x4
7101ac1ad0  mov x0,x22
7101ac1ad4  mov w2,wzr
7101ac1ad8  bl 0x7103771be0
7101ac1adc  ldr x8,[x22]
7101ac1ae0  ldr w8,[x8, #0x25c]
7101ac1ae4  cmp w8,#0x4
7101ac1ae8  b.ne 0x7101ac1ee8
7101ac1aec  add x20,sp,#0x50
7101ac1af0  mov w8,#0xffffffff
7101ac1af4  str xzr,[sp, #0x58]
7101ac1af8  add x0,x20,#0x70
7101ac1afc  str x21,[sp, #0x8]
7101ac1b00  str w8,[sp, #0x50]
7101ac1b04  stur xzr,[sp, #0xae]
7101ac1b08  str xzr,[sp, #0xb8]
7101ac1b0c  stp xzr,xzr,[sp, #0xa0]
7101ac1b10  stp xzr,xzr,[sp, #0x90]
7101ac1b14  stp xzr,xzr,[sp, #0x80]
7101ac1b18  stp xzr,xzr,[sp, #0x70]
7101ac1b1c  stp xzr,xzr,[sp, #0x60]
7101ac1b20  stp xzr,xzr,[sp, #0x170]
7101ac1b24  stp xzr,xzr,[sp, #0x160]
7101ac1b28  stp xzr,xzr,[sp, #0x150]
7101ac1b2c  stp xzr,xzr,[sp, #0x140]
7101ac1b30  stp xzr,xzr,[sp, #0x130]
7101ac1b34  stp xzr,xzr,[sp, #0x120]
7101ac1b38  stp xzr,xzr,[sp, #0x110]
7101ac1b3c  stp xzr,xzr,[sp, #0x100]
7101ac1b40  stp xzr,xzr,[sp, #0xf0]
7101ac1b44  stp xzr,xzr,[sp, #0xe0]
7101ac1b48  stp xzr,xzr,[sp, #0xd0]
7101ac1b4c  stp xzr,xzr,[sp, #0xc0]
7101ac1b50  bl 0x71004f5770
7101ac1b54  add x8,x20,#0x156
7101ac1b58  str wzr,[sp, #0x1b0]
7101ac1b5c  str xzr,[x8]
7101ac1b60  stp xzr,xzr,[sp, #0x198]
7101ac1b64  orr w10,wzr,#0x3c0
7101ac1b68  str xzr,[sp, #0x180]
7101ac1b6c  str xzr,[sp, #0x250]
7101ac1b70  str xzr,[sp, #0x248]
7101ac1b74  str xzr,[sp, #0x240]
7101ac1b78  str xzr,[sp, #0x238]
7101ac1b7c  str xzr,[sp, #0x230]
7101ac1b80  str xzr,[sp, #0x228]
7101ac1b84  str xzr,[sp, #0x220]
7101ac1b88  str xzr,[sp, #0x218]
7101ac1b8c  str xzr,[sp, #0x210]
7101ac1b90  str xzr,[sp, #0x208]
7101ac1b94  stp xzr,xzr,[sp, #0x188]
7101ac1b98  stp xzr,xzr,[sp, #0x1f8]
7101ac1b9c  stp xzr,xzr,[sp, #0x1e8]
7101ac1ba0  stp xzr,xzr,[sp, #0x1d8]
7101ac1ba4  stp xzr,xzr,[sp, #0x1c8]
7101ac1ba8  stp xzr,xzr,[sp, #0x1b8]
7101ac1bac  ldrb w8,[x19, #0x32f]
7101ac1bb0  eor w8,w8,#0x1
7101ac1bb4  strb w8,[sp, #0x18c]
7101ac1bb8  ldrb w8,[x19, #0x330]
7101ac1bbc  eor w8,w8,#0x1
7101ac1bc0  strb w8,[sp, #0x18d]
7101ac1bc4  ldrb w8,[x19, #0x331]
7101ac1bc8  eor w8,w8,#0x1
7101ac1bcc  strb w8,[sp, #0x18e]
7101ac1bd0  ldrb w8,[x19, #0x332]
7101ac1bd4  eor w9,w8,#0x1
7101ac1bd8  cmp w8,#0x0
7101ac1bdc  mov w8,#0x4b40
7101ac1be0  movk w8,#0x4c, LSL #16
7101ac1be4  strb w9,[sp, #0x18f]
7101ac1be8  mov w9,#0x70e0
7101ac1bec  movk w9,#0x72, LSL #16
7101ac1bf0  csel w24,w9,w8,ne
7101ac1bf4  ldr x8,[x19, #0x300]
7101ac1bf8  ldrsw x9,[x19, #0x2f8]
7101ac1bfc  ldr x8,[x8]
7101ac1c00  madd x8,x9,x10,x8
7101ac1c04  ldr w27,[x8, #0x68]
7101ac1c08  ldrb w8,[x19, #0x345]
7101ac1c0c  cbnz w8,0x7101ac1c30
7101ac1c10  adrp x8,0x710533a000
7101ac1c14  ldr x8,[x8, #0x80]
7101ac1c18  ldr x8,[x8]
7101ac1c1c  ldr x0,[x8, #0x8]
7101ac1c20  orr w1,wzr,#0x1e
7101ac1c24  bl 0x71036eb020
7101ac1c28  mov w8,#0x1
7101ac1c2c  strb w8,[x19, #0x345]
7101ac1c30  lsr w23,w24,#0x3
7101ac1c34  orr w8,wzr,#0x78
7101ac1c38  sub x0,x29,#0xd8
7101ac1c3c  mov x21,x22
7101ac1c40  mul w20,w23,w8
7101ac1c44  bl 0x71039c62d0
7101ac1c48  sub x0,x29,#0xd8
7101ac1c4c  bl 0x71039c62e0
7101ac1c50  add w8,w0,#0x7
7101ac1c54  cmp w0,#0x0
7101ac1c58  csel w8,w8,w0,lt
7101ac1c5c  asr w8,w8,#0x3
7101ac1c60  orr w9,wzr,#0x3c
7101ac1c64  madd w0,w8,w9,w20
7101ac1c68  bl 0x71039c62f0
7101ac1c6c  cbz w0,0x7101ac1c80
7101ac1c70  and x0,x0,#0xffffffff
7101ac1c74  bl 0x71039c26b0
7101ac1c78  mov w25,wzr
7101ac1c7c  b 0x7101ac1c84
7101ac1c80  mov w25,#0x1
7101ac1c84  add w8,w27,#0x57
7101ac1c88  sub x0,x29,#0xd8
7101ac1c8c  add w20,w27,#0x1b
7101ac1c90  mul w26,w8,w23
7101ac1c94  bl 0x71039c62d0
7101ac1c98  sub x0,x29,#0xd8
7101ac1c9c  bl 0x71039c62e0
7101ac1ca0  add w8,w0,#0x7
7101ac1ca4  cmp w0,#0x0
7101ac1ca8  csel w8,w8,w0,lt
7101ac1cac  asr w8,w8,#0x3
7101ac1cb0  madd w0,w8,w20,w26
7101ac1cb4  bl 0x71039c62f0
7101ac1cb8  cbz w0,0x7101ac1da4
7101ac1cbc  cbz w25,0x7101ac1e10
7101ac1cc0  str x28,[sp]
7101ac1cc4  orr w28,wzr,#0x3c
7101ac1cc8  mov w26,w20
7101ac1ccc  strb wzr,[x19, #0x32e]
7101ac1cd0  subs w8,w26,w28
7101ac1cd4  b.lt 0x7101ac1e24
7101ac1cd8  cmp w8,#0x0
7101ac1cdc  cinc w8,w8,lt
7101ac1ce0  add w27,w28,w8, ASR #0x1
7101ac1ce4  add w8,w27,#0x3c
7101ac1ce8  sub x0,x29,#0xd8
7101ac1cec  mul w22,w8,w23
7101ac1cf0  bl 0x71039c62d0
7101ac1cf4  sub x0,x29,#0xd8
7101ac1cf8  bl 0x71039c62e0
7101ac1cfc  add w8,w0,#0x7
7101ac1d00  cmp w0,#0x0
7101ac1d04  csel w8,w8,w0,lt
7101ac1d08  asr w8,w8,#0x3
7101ac1d0c  madd w0,w8,w27,w22
7101ac1d10  bl 0x71039c62f0
7101ac1d14  cbz w0,0x7101ac1d54
7101ac1d18  add w8,w27,#0x37
7101ac1d1c  sub x0,x29,#0xd8
7101ac1d20  sub w26,w27,#0x5
7101ac1d24  mul w22,w8,w23
7101ac1d28  bl 0x71039c62d0
7101ac1d2c  sub x0,x29,#0xd8
7101ac1d30  bl 0x71039c62e0
7101ac1d34  add w8,w0,#0x7
7101ac1d38  cmp w0,#0x0
7101ac1d3c  csel w8,w8,w0,lt
7101ac1d40  asr w8,w8,#0x3
7101ac1d44  madd w0,w8,w26,w22
7101ac1d48  bl 0x71039c62f0
7101ac1d4c  cbnz w0,0x7101ac1d8c
7101ac1d50  b 0x7101ac1e28
7101ac1d54  add w8,w27,#0x41
7101ac1d58  sub x0,x29,#0xd8
7101ac1d5c  add w28,w27,#0x5
7101ac1d60  mul w22,w8,w23
7101ac1d64  bl 0x71039c62d0
7101ac1d68  sub x0,x29,#0xd8
7101ac1d6c  bl 0x71039c62e0
7101ac1d70  add w8,w0,#0x7
7101ac1d74  cmp w0,#0x0
7101ac1d78  csel w8,w8,w0,lt
7101ac1d7c  asr w8,w8,#0x3
7101ac1d80  madd w0,w8,w28,w22
7101ac1d84  bl 0x71039c62f0
7101ac1d88  cbnz w0,0x7101ac2534
7101ac1d8c  cmp w28,w20
7101ac1d90  b.ge 0x7101ac1e24
7101ac1d94  cmp w26,#0x3c
7101ac1d98  b.gt 0x7101ac1cd0
7101ac1d9c  orr w26,wzr,#0x3c
7101ac1da0  b 0x7101ac1e28
7101ac1da4  sub x0,x29,#0xd8
7101ac1da8  bl 0x71039c62d0
7101ac1dac  sub x0,x29,#0xd8
7101ac1db0  bl 0x71039c62e0
7101ac1db4  mov w23,w0
7101ac1db8  sub x0,x29,#0xd8
7101ac1dbc  bl 0x71039c62d0
7101ac1dc0  sub x0,x29,#0xd8
7101ac1dc4  bl 0x71039c62e0
7101ac1dc8  add w8,w0,#0x7
7101ac1dcc  cmp w0,#0x0
7101ac1dd0  csel w8,w8,w0,lt
7101ac1dd4  asr w8,w8,#0x3
7101ac1dd8  madd w8,w8,w20,w26
7101ac1ddc  mov w9,#0x1
7101ac1de0  movk w9,#0x7840, LSL #16
7101ac1de4  cmp w8,w9
7101ac1de8  b.cc 0x7101ac1e18
7101ac1dec  add w8,w23,w24
7101ac1df0  orr w9,wzr,#0x3c
7101ac1df4  mul w8,w8,w9
7101ac1df8  mov x9,#0x78000000
7101ac1dfc  movk x9,#0xe1, LSL #32
7101ac1e00  mov w10,#0x1
7101ac1e04  strb w10,[x19, #0x32e]
7101ac1e08  udiv x8,x9,x8
7101ac1e0c  b 0x7101ac1e60
7101ac1e10  strb w25,[x19, #0x342]
7101ac1e14  b 0x7101ac2514
7101ac1e18  mov w8,wzr
7101ac1e1c  strb wzr,[x19, #0x32e]
7101ac1e20  b 0x7101ac1e60
7101ac1e24  mov w26,w20
7101ac1e28  sub x0,x29,#0xd8
7101ac1e2c  bl 0x71039c62d0
7101ac1e30  sub x0,x29,#0xd8
7101ac1e34  bl 0x71039c62e0
7101ac1e38  add w8,w0,w24
7101ac1e3c  orr w9,wzr,#0x3c
7101ac1e40  mul w8,w8,w9
7101ac1e44  mov x9,#0x78000000
7101ac1e48  movk x9,#0xe1, LSL #32
7101ac1e4c  udiv x8,x9,x8
7101ac1e50  ldr x28,[sp]
7101ac1e54  cmp w26,w8
7101ac1e58  csel w8,w26,w8,lt
7101ac1e5c  sub w8,w8,#0x1e
7101ac1e60  str w8,[x19, #0x348]
7101ac1e64  strb w25,[x19, #0x342]
7101ac1e68  cbz w25,0x7101ac2514
7101ac1e6c  ldr x8,[x19, #0x228]
7101ac1e70  ldr x8,[x8]
7101ac1e74  ldr x8,[x8]
7101ac1e78  ldr x8,[x8]
7101ac1e7c  ldr x20,[x8, #0x600]
7101ac1e80  add x0,x20,#0x198
7101ac1e84  mov w2,#0x264
7101ac1e88  mov w1,wzr
7101ac1e8c  bl 0x71039c02a0
7101ac1e90  add x8,x20,#0x40c
7101ac1e94  str xzr,[x8]
7101ac1e98  add x8,x20,#0x424
7101ac1e9c  str xzr,[x8]
7101ac1ea0  str wzr,[x20, #0x480]
7101ac1ea4  adrp x8,0x71052a8000
7101ac1ea8  ldr x8,[x8, #0xa80]
7101ac1eac  ldr q0,[x8]
7101ac1eb0  str xzr,[x20, #0x4a0]
7101ac1eb4  str q0,[x20, #0x460]
7101ac1eb8  str q0,[x20, #0x430]
7101ac1ebc  str q0,[x20, #0x440]
7101ac1ec0  str q0,[x20, #0x450]
7101ac1ec4  str xzr,[x20, #0x498]
7101ac1ec8  ldrsw x8,[x19, #0x204]
7101ac1ecc  cmp w8,#0x13
7101ac1ed0  b.cs 0x7101ac2794
7101ac1ed4  mov x22,x21
7101ac1ed8  ldr x21,[sp, #0x8]
7101ac1edc  add x8,x19,x8, LSL #0x2
7101ac1ee0  mov w9,#0x5
7101ac1ee4  str w9,[x8, #0x1b8]
7101ac1ee8  ldr x0,[x21]
7101ac1eec  ldr x8,[x0]
7101ac1ef0  ldr x8,[x8, #0x78]
7101ac1ef4  blr x8
7101ac1ef8  tbz w0,#0x0,0x7101ac2460
7101ac1efc  ldr x0,[x21]
7101ac1f00  ldr x8,[x0]
7101ac1f04  ldr x8,[x8, #0x80]
7101ac1f08  blr x8
7101ac1f0c  tbnz w0,#0x0,0x7101ac20dc
7101ac1f10  ldr x8,[x28, #0x8]
7101ac1f14  ldrb w9,[x8, #0x4aa]
7101ac1f18  cbz w9,0x7101ac20dc
7101ac1f1c  ldrb w8,[x8, #0x198]
7101ac1f20  tbz w8,#0x1,0x7101ac20dc
7101ac1f24  ldrb w8,[x19, #0x341]
7101ac1f28  cbz w8,0x7101ac20dc
7101ac1f2c  adrp x8,0x710532f000
7101ac1f30  ldr x8,[x8, #0x8d0]
7101ac1f34  ldr x0,[x8, #0x8]
7101ac1f38  ldp x8,x9,[x0, #0x40]
7101ac1f3c  sub x9,x9,x8
7101ac1f40  asr x9,x9,#0x3
7101ac1f44  cmp x9,#0x2
7101ac1f48  b.cc 0x7101ac2004
7101ac1f4c  ldr x23,[x8, #0x8]
7101ac1f50  ldrb w8,[x0, #0x191]
7101ac1f54  cbnz w8,0x7101ac2080
7101ac1f58  b 0x7101ac2010
7101ac1f5c  ldr w9,[x8, #0x25c]
7101ac1f60  cmp w9,#0x3
7101ac1f64  b.hi 0x7101ac1adc
7101ac1f68  adrp x10,0x71044f8000
7101ac1f6c  add x10,x10,#0x190
7101ac1f70  ldrsw x9,[x10, x9, LSL #0x2]
7101ac1f74  add x9,x9,x10
7101ac1f78  br x9
7101ac1f7c  ldr w1,[x8, #0x254]
7101ac1f80  ldrb w8,[x19, #0x32f]
7101ac1f84  cmp w8,#0x0
7101ac1f88  cset w2,eq
7101ac1f8c  mov x0,x19
7101ac1f90  bl 0x7101ac4180
7101ac1f94  mov w0,#0x10
7101ac1f98  mov w1,#0x8
7101ac1f9c  bl 0x710392e290
7101ac1fa0  mov x23,x0
7101ac1fa4  cbnz x0,0x7101ac1ff0
7101ac1fa8  adrp x8,0x7105332000
7101ac1fac  ldr x0,[x8, #0xf00]
7101ac1fb0  cbz x0,0x7101ac1fec
7101ac1fb4  mov w8,#0x8
7101ac1fb8  stur wzr,[x29, #-0xd8]
7101ac1fbc  sub x1,x29,#0xd8
7101ac1fc0  str x8,[sp, #0x50]
7101ac1fc4  ldr x8,[x0]
7101ac1fc8  ldr x8,[x8, #0x30]
7101ac1fcc  add x2,sp,#0x50
7101ac1fd0  blr x8
7101ac1fd4  tbz w0,#0x0,0x7101ac1fec
7101ac1fd8  mov w0,#0x10
7101ac1fdc  mov w1,#0x8
7101ac1fe0  bl 0x710392e290
7101ac1fe4  mov x23,x0
7101ac1fe8  cbnz x0,0x7101ac1ff0
7101ac1fec  mov x23,xzr
7101ac1ff0  str xzr,[x23]
7101ac1ff4  ldr x8,[x19, #0x298]
7101ac1ff8  ldr x8,[x8, #0x8]
7101ac1ffc  cbnz x8,0x7101ac26d0
7101ac2000  b 0x7101ac2784
7101ac2004  mov x23,xzr
7101ac2008  ldrb w8,[x0, #0x191]
7101ac200c  cbnz w8,0x7101ac2080
7101ac2010  mov w2,#0x4
7101ac2014  mov x1,x23
7101ac2018  bl 0x7103313f20
7101ac201c  tbz w0,#0x0,0x7101ac2080
7101ac2020  add x0,sp,#0x10
7101ac2024  mov x1,x23
7101ac2028  bl 0x71024076d0
7101ac202c  ldr x8,[sp, #0x20]
7101ac2030  adrp x9,0x7104f73000
7101ac2034  add x9,x9,#0xd50
7101ac2038  str x9,[sp, #0x18]
7101ac203c  cbz x8,0x7101ac20ac
7101ac2040  adrp x8,0x7106dd5000
7101ac2044  ldrb w8,[x8, #0x3a8]
7101ac2048  cmp w8,#0x1
7101ac204c  b.ne 0x7101ac20ac
7101ac2050  adrp x9,0x7106dd5000
7101ac2054  ldr w8,[sp, #0x28]
7101ac2058  ldr w9,[x9, #0x3ac]
7101ac205c  cmp w8,w9
7101ac2060  b.ne 0x7101ac20ac
7101ac2064  ldr x8,[sp, #0x20]
7101ac2068  ldr wzr,[x8, #0x38]!
7101ac206c  ldaxr w9,[x8]
7101ac2070  sub w9,w9,#0x1
7101ac2074  stlxr w10,w9,[x8]
7101ac2078  cbnz w10,0x7101ac206c
7101ac207c  b 0x7101ac20ac
7101ac2080  mov x8,#0x650000000000
7101ac2084  movk x8,#0x87, LSL #48
7101ac2088  strb wzr,[sp, #0x30]
7101ac208c  stp xzr,x8,[sp, #0x20]
7101ac2090  mov x8,#-0x1
7101ac2094  stp x8,xzr,[sp, #0x38]
7101ac2098  adrp x8,0x7104f73000
7101ac209c  add x8,x8,#0xd50
7101ac20a0  str wzr,[sp, #0x10]
7101ac20a4  str xzr,[sp, #0x48]
7101ac20a8  str x8,[sp, #0x18]
7101ac20ac  str xzr,[sp, #0x20]
7101ac20b0  strb wzr,[sp, #0x30]
7101ac20b4  ldr x0,[x21]
7101ac20b8  ldr x8,[x0]
7101ac20bc  ldr x8,[x8, #0x70]
7101ac20c0  mov w1,wzr
7101ac20c4  blr x8
7101ac20c8  ldr x0,[x22]
7101ac20cc  ldr x8,[x0]
7101ac20d0  ldr x8,[x8, #0x70]
7101ac20d4  mov w1,#0x1
7101ac20d8  blr x8
7101ac20dc  ldr x8,[x21]
7101ac20e0  ldr w8,[x8, #0x254]
7101ac20e4  cmp w8,#0x3
7101ac20e8  b.hi 0x7101ac2410
7101ac20ec  adrp x9,0x71044f8000
7101ac20f0  add x9,x9,#0x1a0
7101ac20f4  ldrsw x8,[x9, x8, LSL #0x2]
7101ac20f8  add x8,x8,x9
7101ac20fc  br x8
7101ac2100  ldrb w8,[x19, #0x32f]
7101ac2104  add x0,x19,#0x2d0
7101ac2108  cbz w8,0x7101ac2160
7101ac210c  adrp x1,0x71043ce000
7101ac2110  add x1,x1,#0xec7
7101ac2114  b 0x7101ac2168
7101ac2118  ldrb w8,[x19, #0x331]
7101ac211c  add x0,x19,#0x2d0
7101ac2120  cbz w8,0x7101ac2294
7101ac2124  adrp x1,0x710435b000
7101ac2128  add x1,x1,#0x103
7101ac212c  b 0x7101ac229c
7101ac2130  ldrb w8,[x19, #0x332]
7101ac2134  add x0,x19,#0x2d0
7101ac2138  cbz w8,0x7101ac2310
7101ac213c  adrp x1,0x7104329000
7101ac2140  add x1,x1,#0xad3
7101ac2144  b 0x7101ac2318
7101ac2148  ldrb w8,[x19, #0x330]
7101ac214c  add x0,x19,#0x2d0
7101ac2150  cbz w8,0x7101ac238c
7101ac2154  adrp x1,0x71043df000
7101ac2158  add x1,x1,#0xb43
7101ac215c  b 0x7101ac2394
7101ac2160  adrp x1,0x7104318000
7101ac2164  add x1,x1,#0x9d5
7101ac2168  bl 0x710377a120
7101ac216c  mov w0,#0x10
7101ac2170  mov w1,#0x8
7101ac2174  bl 0x710392e290
7101ac2178  mov x23,x0
7101ac217c  cbnz x0,0x7101ac21c8
7101ac2180  adrp x8,0x7105332000
7101ac2184  ldr x0,[x8, #0xf00]
7101ac2188  cbz x0,0x7101ac21c4
7101ac218c  mov w8,#0x8
7101ac2190  stur wzr,[x29, #-0xd8]
7101ac2194  sub x1,x29,#0xd8
7101ac2198  str x8,[sp, #0x50]
7101ac219c  ldr x8,[x0]
7101ac21a0  ldr x8,[x8, #0x30]
7101ac21a4  add x2,sp,#0x50
7101ac21a8  blr x8
7101ac21ac  tbz w0,#0x0,0x7101ac21c4
7101ac21b0  mov w0,#0x10
7101ac21b4  mov w1,#0x8
7101ac21b8  bl 0x710392e290
7101ac21bc  mov x23,x0
7101ac21c0  cbnz x0,0x7101ac21c8
7101ac21c4  mov x23,xzr
7101ac21c8  str xzr,[x23]
7101ac21cc  ldr x8,[x19, #0x298]
7101ac21d0  ldr x8,[x8, #0x8]
7101ac21d4  cbz x8,0x7101ac2404
7101ac21d8  ldr x0,[x8, #0x60]
7101ac21dc  cbz x0,0x7101ac2404
7101ac21e0  ldr x8,[x8, #0x18]
7101ac21e4  add x1,x8,#0xb0
7101ac21e8  bl 0x7103796f20
7101ac21ec  str x0,[x23]
7101ac21f0  cbz x0,0x7101ac2408
7101ac21f4  ldr x8,[x0]
7101ac21f8  ldr x8,[x8, #0x218]
7101ac21fc  mov w1,#0x1
7101ac2200  mov x24,x0
7101ac2204  blr x8
7101ac2208  ldr x8,[x24]
7101ac220c  ldr x8,[x8, #0x408]
7101ac2210  mov x0,x24
7101ac2214  blr x8
7101ac2218  ldr x8,[x24]
7101ac221c  ldr x8,[x8, #0x3e8]
7101ac2220  mov x0,x24
7101ac2224  mov w1,wzr
7101ac2228  blr x8
7101ac222c  ldr x8,[x24]
7101ac2230  ldr x8,[x8, #0x140]
7101ac2234  mov x0,x24
7101ac2238  blr x8
7101ac223c  cmp w0,#0x6
7101ac2240  b.eq 0x7101ac226c
7101ac2244  ldr x8,[x24]
7101ac2248  ldr x8,[x8, #0x140]
7101ac224c  mov x0,x24
7101ac2250  blr x8
7101ac2254  cmp w0,#0x1
7101ac2258  b.eq 0x7101ac226c
7101ac225c  ldr x8,[x24]
7101ac2260  ldr x8,[x8, #0x3f8]
7101ac2264  mov x0,x24
7101ac2268  blr x8
7101ac226c  ldr x8,[x24]
7101ac2270  ldr x8,[x8, #0x158]
7101ac2274  mov x0,x24
7101ac2278  blr x8
7101ac227c  tbnz w0,#0x0,0x7101ac2408
7101ac2280  ldr x8,[x24]
7101ac2284  ldr x8,[x8, #0x360]
7101ac2288  mov x0,x24
7101ac228c  blr x8
7101ac2290  b 0x7101ac2408
7101ac2294  adrp x1,0x71043f0000
7101ac2298  add x1,x1,#0x50f
7101ac229c  bl 0x710377a120
7101ac22a0  mov w0,#0x10
7101ac22a4  mov w1,#0x8
7101ac22a8  bl 0x710392e290
7101ac22ac  mov x23,x0
7101ac22b0  cbnz x0,0x7101ac22fc
7101ac22b4  adrp x8,0x7105332000
7101ac22b8  ldr x0,[x8, #0xf00]
7101ac22bc  cbz x0,0x7101ac22f8
7101ac22c0  mov w8,#0x8
7101ac22c4  stur wzr,[x29, #-0xd8]
7101ac22c8  sub x1,x29,#0xd8
7101ac22cc  str x8,[sp, #0x50]
7101ac22d0  ldr x8,[x0]
7101ac22d4  ldr x8,[x8, #0x30]
7101ac22d8  add x2,sp,#0x50
7101ac22dc  blr x8
7101ac22e0  tbz w0,#0x0,0x7101ac22f8
7101ac22e4  mov w0,#0x10
7101ac22e8  mov w1,#0x8
7101ac22ec  bl 0x710392e290
7101ac22f0  mov x23,x0
7101ac22f4  cbnz x0,0x7101ac22fc
7101ac22f8  mov x23,xzr
7101ac22fc  str xzr,[x23]
7101ac2300  ldr x8,[x19, #0x2b8]
7101ac2304  ldr x8,[x8, #0x8]
7101ac2308  cbnz x8,0x7101ac21d8
7101ac230c  b 0x7101ac2404
7101ac2310  adrp x1,0x71042c4000
7101ac2314  add x1,x1,#0x8be
7101ac2318  bl 0x710377a120
7101ac231c  mov w0,#0x10
7101ac2320  mov w1,#0x8
7101ac2324  bl 0x710392e290
7101ac2328  mov x23,x0
7101ac232c  cbnz x0,0x7101ac2378
7101ac2330  adrp x8,0x7105332000
7101ac2334  ldr x0,[x8, #0xf00]
7101ac2338  cbz x0,0x7101ac2374
7101ac233c  mov w8,#0x8
7101ac2340  stur wzr,[x29, #-0xd8]
7101ac2344  sub x1,x29,#0xd8
7101ac2348  str x8,[sp, #0x50]
7101ac234c  ldr x8,[x0]
7101ac2350  ldr x8,[x8, #0x30]
7101ac2354  add x2,sp,#0x50
7101ac2358  blr x8
7101ac235c  tbz w0,#0x0,0x7101ac2374
7101ac2360  mov w0,#0x10
7101ac2364  mov w1,#0x8
7101ac2368  bl 0x710392e290
7101ac236c  mov x23,x0
7101ac2370  cbnz x0,0x7101ac2378
7101ac2374  mov x23,xzr
7101ac2378  str xzr,[x23]
7101ac237c  ldr x8,[x19, #0x2c8]
7101ac2380  ldr x8,[x8, #0x8]
7101ac2384  cbnz x8,0x7101ac21d8
7101ac2388  b 0x7101ac2404
7101ac238c  adrp x1,0x710425e000
7101ac2390  add x1,x1,#0xe0b
7101ac2394  bl 0x710377a120
7101ac2398  mov w0,#0x10
7101ac239c  mov w1,#0x8
7101ac23a0  bl 0x710392e290
7101ac23a4  mov x23,x0
7101ac23a8  cbnz x0,0x7101ac23f4
7101ac23ac  adrp x8,0x7105332000
7101ac23b0  ldr x0,[x8, #0xf00]
7101ac23b4  cbz x0,0x7101ac23f0
7101ac23b8  mov w8,#0x8
7101ac23bc  stur wzr,[x29, #-0xd8]
7101ac23c0  sub x1,x29,#0xd8
7101ac23c4  str x8,[sp, #0x50]
7101ac23c8  ldr x8,[x0]
7101ac23cc  ldr x8,[x8, #0x30]
7101ac23d0  add x2,sp,#0x50
7101ac23d4  blr x8
7101ac23d8  tbz w0,#0x0,0x7101ac23f0
7101ac23dc  mov w0,#0x10
7101ac23e0  mov w1,#0x8
7101ac23e4  bl 0x710392e290
7101ac23e8  mov x23,x0
7101ac23ec  cbnz x0,0x7101ac23f4
7101ac23f0  mov x23,xzr
7101ac23f4  str xzr,[x23]
7101ac23f8  ldr x8,[x19, #0x2a8]
7101ac23fc  ldr x8,[x8, #0x8]
7101ac2400  cbnz x8,0x7101ac21d8
7101ac2404  str xzr,[x23]
7101ac2408  mov x0,x23
7101ac240c  bl 0x710392eb40
7101ac2410  ldr x8,[x19, #0x260]
7101ac2414  ldr w9,[x8, #0x254]
7101ac2418  cmp w9,#0x0
7101ac241c  cset w9,eq
7101ac2420  strb w9,[x19, #0x341]
7101ac2424  ldr x9,[x28, #0x8]
7101ac2428  ldrb w10,[x9, #0x4aa]
7101ac242c  cbz w10,0x7101ac2460
7101ac2430  ldrb w10,[x9, #0x1a0]
7101ac2434  tbnz w10,#0x1,0x7101ac2450
7101ac2438  ldrb w9,[x9, #0x1a4]
7101ac243c  tbz w9,#0x1,0x7101ac2460
7101ac2440  ldr w1,[x8, #0x254]
7101ac2444  mov x0,x19
7101ac2448  mov w2,wzr
7101ac244c  b 0x7101ac245c
7101ac2450  ldr w1,[x8, #0x254]
7101ac2454  mov w2,#0x1
7101ac2458  mov x0,x19
7101ac245c  bl 0x7101ac4180
7101ac2460  ldr x0,[x22]
7101ac2464  ldr x8,[x0]
7101ac2468  ldr x8,[x8, #0x78]
7101ac246c  blr x8
7101ac2470  tbz w0,#0x0,0x7101ac2514
7101ac2474  ldr x0,[x22]
7101ac2478  ldr x8,[x0]
7101ac247c  ldr x8,[x8, #0x80]
7101ac2480  blr x8
7101ac2484  tbz w0,#0x0,0x7101ac24c8
7101ac2488  ldr x0,[x19, #0x260]
7101ac248c  ldr x8,[x0]
7101ac2490  ldr x8,[x8, #0x70]
7101ac2494  mov w1,wzr
7101ac2498  blr x8
7101ac249c  mov w8,#0x4
7101ac24a0  str w8,[x19, #0x334]
7101ac24a4  ldr x8,[x19, #0x2d8]
7101ac24a8  ldr x0,[x8, #0x10]
7101ac24ac  cbz x0,0x7101ac2514
7101ac24b0  add x1,sp,#0x50
7101ac24b4  mov w2,wzr
7101ac24b8  mov w3,wzr
7101ac24bc  str wzr,[sp, #0x50]
7101ac24c0  bl 0x71037a2270
7101ac24c4  b 0x7101ac2514
7101ac24c8  ldr x8,[x28, #0x8]
7101ac24cc  ldrb w9,[x8, #0x4aa]
7101ac24d0  cbz w9,0x7101ac2514
7101ac24d4  ldrb w8,[x8, #0x19c]
7101ac24d8  tbz w8,#0x1,0x7101ac2514
7101ac24dc  ldr x0,[x21]
7101ac24e0  ldr x8,[x0]
7101ac24e4  ldr x8,[x8, #0x70]
7101ac24e8  mov w1,#0x1
7101ac24ec  blr x8
7101ac24f0  ldr x0,[x22]
7101ac24f4  ldr x8,[x0]
7101ac24f8  ldr x8,[x8, #0x70]
7101ac24fc  mov w1,wzr
7101ac2500  blr x8
7101ac2504  mov x0,x21
7101ac2508  mov w1,wzr
7101ac250c  mov w2,wzr
7101ac2510  bl 0x7103771a80
7101ac2514  add sp,sp,#0x2e0
7101ac2518  ldp x29,x30,[sp, #0x50]
7101ac251c  ldp x20,x19,[sp, #0x40]
7101ac2520  ldp x22,x21,[sp, #0x30]
7101ac2524  ldp x24,x23,[sp, #0x20]
7101ac2528  ldp x26,x25,[sp, #0x10]
7101ac252c  ldp x28,x27,[sp], #0x60
7101ac2530  ret
7101ac2534  mov w26,w27
7101ac2538  b 0x7101ac1e28
7101ac253c  ldr w1,[x8, #0x254]
7101ac2540  ldrb w8,[x19, #0x330]
7101ac2544  cmp w8,#0x0
7101ac2548  cset w2,eq
7101ac254c  mov x0,x19
7101ac2550  bl 0x7101ac4180
7101ac2554  mov w0,#0x10
7101ac2558  mov w1,#0x8
7101ac255c  bl 0x710392e290
7101ac2560  mov x23,x0
7101ac2564  cbnz x0,0x7101ac25b0
7101ac2568  adrp x8,0x7105332000
7101ac256c  ldr x0,[x8, #0xf00]
7101ac2570  cbz x0,0x7101ac25ac
7101ac2574  mov w8,#0x8
7101ac2578  stur wzr,[x29, #-0xd8]
7101ac257c  sub x1,x29,#0xd8
7101ac2580  str x8,[sp, #0x50]
7101ac2584  ldr x8,[x0]
7101ac2588  ldr x8,[x8, #0x30]
7101ac258c  add x2,sp,#0x50
7101ac2590  blr x8
7101ac2594  tbz w0,#0x0,0x7101ac25ac
7101ac2598  mov w0,#0x10
7101ac259c  mov w1,#0x8
7101ac25a0  bl 0x710392e290
7101ac25a4  mov x23,x0
7101ac25a8  cbnz x0,0x7101ac25b0
7101ac25ac  mov x23,xzr
7101ac25b0  str xzr,[x23]
7101ac25b4  ldr x8,[x19, #0x2a8]
7101ac25b8  ldr x8,[x8, #0x8]
7101ac25bc  cbnz x8,0x7101ac26d0
7101ac25c0  b 0x7101ac2784
7101ac25c4  ldr w1,[x8, #0x254]
7101ac25c8  ldrb w8,[x19, #0x331]
7101ac25cc  cmp w8,#0x0
7101ac25d0  cset w2,eq
7101ac25d4  mov x0,x19
7101ac25d8  bl 0x7101ac4180
7101ac25dc  mov w0,#0x10
7101ac25e0  mov w1,#0x8
7101ac25e4  bl 0x710392e290
7101ac25e8  mov x23,x0
7101ac25ec  cbnz x0,0x7101ac2638
7101ac25f0  adrp x8,0x7105332000
7101ac25f4  ldr x0,[x8, #0xf00]
7101ac25f8  cbz x0,0x7101ac2634
7101ac25fc  mov w8,#0x8
7101ac2600  stur wzr,[x29, #-0xd8]
7101ac2604  sub x1,x29,#0xd8
7101ac2608  str x8,[sp, #0x50]
7101ac260c  ldr x8,[x0]
7101ac2610  ldr x8,[x8, #0x30]
7101ac2614  add x2,sp,#0x50
7101ac2618  blr x8
7101ac261c  tbz w0,#0x0,0x7101ac2634
7101ac2620  mov w0,#0x10
7101ac2624  mov w1,#0x8
7101ac2628  bl 0x710392e290
7101ac262c  mov x23,x0
7101ac2630  cbnz x0,0x7101ac2638
7101ac2634  mov x23,xzr
7101ac2638  str xzr,[x23]
7101ac263c  ldr x8,[x19, #0x2b8]
7101ac2640  ldr x8,[x8, #0x8]
7101ac2644  cbnz x8,0x7101ac26d0
7101ac2648  b 0x7101ac2784
7101ac264c  ldr w1,[x8, #0x254]
7101ac2650  ldrb w8,[x19, #0x332]
7101ac2654  cmp w8,#0x0
7101ac2658  cset w2,eq
7101ac265c  mov x0,x19
7101ac2660  bl 0x7101ac4180
7101ac2664  mov w0,#0x10
7101ac2668  mov w1,#0x8
7101ac266c  bl 0x710392e290
7101ac2670  mov x23,x0
7101ac2674  cbnz x0,0x7101ac26c0
7101ac2678  adrp x8,0x7105332000
7101ac267c  ldr x0,[x8, #0xf00]
7101ac2680  cbz x0,0x7101ac26bc
7101ac2684  mov w8,#0x8
7101ac2688  stur wzr,[x29, #-0xd8]
7101ac268c  sub x1,x29,#0xd8
7101ac2690  str x8,[sp, #0x50]
7101ac2694  ldr x8,[x0]
7101ac2698  ldr x8,[x8, #0x30]
7101ac269c  add x2,sp,#0x50
7101ac26a0  blr x8
7101ac26a4  tbz w0,#0x0,0x7101ac26bc
7101ac26a8  mov w0,#0x10
7101ac26ac  mov w1,#0x8
7101ac26b0  bl 0x710392e290
7101ac26b4  mov x23,x0
7101ac26b8  cbnz x0,0x7101ac26c0
7101ac26bc  mov x23,xzr
7101ac26c0  str xzr,[x23]
7101ac26c4  ldr x8,[x19, #0x2c8]
7101ac26c8  ldr x8,[x8, #0x8]
7101ac26cc  cbz x8,0x7101ac2784
7101ac26d0  ldr x0,[x8, #0x60]
7101ac26d4  cbz x0,0x7101ac2784
7101ac26d8  ldr x8,[x8, #0x18]
7101ac26dc  add x1,x8,#0xb0
7101ac26e0  bl 0x7103796f20
7101ac26e4  str x0,[x23]
7101ac26e8  cbz x0,0x7101ac2788
7101ac26ec  ldr x8,[x0]
7101ac26f0  ldr x8,[x8, #0x238]
7101ac26f4  mov w1,wzr
7101ac26f8  mov x24,x0
7101ac26fc  blr x8
7101ac2700  ldr x8,[x24]
7101ac2704  ldr x8,[x8, #0x228]
7101ac2708  mov x0,x24
7101ac270c  mov w1,wzr
7101ac2710  blr x8
7101ac2714  ldr x8,[x24]
7101ac2718  ldr x8,[x8, #0x200]
7101ac271c  mov x0,x24
7101ac2720  blr x8
7101ac2724  tbz w0,#0x0,0x7101ac2788
7101ac2728  ldr x8,[x24]
7101ac272c  ldr x8,[x8, #0x210]
7101ac2730  mov x0,x24
7101ac2734  blr x8
7101ac2738  tbz w0,#0x0,0x7101ac2788
7101ac273c  ldr x8,[x24]
7101ac2740  ldr x8,[x8, #0x238]
7101ac2744  mov w1,#0x1
7101ac2748  mov x0,x24
7101ac274c  blr x8
7101ac2750  ldr x8,[x24]
7101ac2754  ldr x8,[x8, #0x3c8]
7101ac2758  mov x0,x24
7101ac275c  blr x8
7101ac2760  ldr x8,[x24]
7101ac2764  ldr x8,[x8, #0x10]
7101ac2768  mov x0,x24
7101ac276c  blr x8
7101ac2770  ldr x8,[x24]
7101ac2774  ldr x8,[x8, #0x18]
7101ac2778  mov x0,x24
7101ac277c  blr x8
7101ac2780  b 0x7101ac2788
7101ac2784  str xzr,[x23]
7101ac2788  mov x0,x23
7101ac278c  bl 0x710392eb40
7101ac2790  b 0x7101ac1adc
7101ac2794  bl 0x71039c2650
