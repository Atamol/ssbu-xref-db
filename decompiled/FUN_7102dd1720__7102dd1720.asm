// addr:      7102dd1720
// offset:    0x2dd1720
// name:      FUN_7102dd1720
// mangled:   
// size:      10080

7102dd1720  sub sp,sp,#0x1d0
7102dd1724  stp d15,d14,[sp, #0x130]
7102dd1728  stp d13,d12,[sp, #0x140]
7102dd172c  stp d11,d10,[sp, #0x150]
7102dd1730  stp d9,d8,[sp, #0x160]
7102dd1734  stp x28,x27,[sp, #0x170]
7102dd1738  stp x26,x25,[sp, #0x180]
7102dd173c  stp x24,x23,[sp, #0x190]
7102dd1740  stp x22,x21,[sp, #0x1a0]
7102dd1744  stp x20,x19,[sp, #0x1b0]
7102dd1748  stp x29,x30,[sp, #0x1c0]
7102dd174c  add x29,sp,#0x1c0
7102dd1750  ldr w8,[x0, #0x98c]
7102dd1754  mov v8.16B,v0.16B
7102dd1758  mov x24,x0
7102dd175c  cmn w8,#0x1
7102dd1760  b.eq 0x7102dd19f8
7102dd1764  ldrb w9,[x24, #0x973]
7102dd1768  cbz w9,0x7102dd1774
7102dd176c  ldr x9,[x24, #0x740]
7102dd1770  str w8,[x9, #0x2d0]
7102dd1774  adrp x8,0x7104472000
7102dd1778  ldr s0,[x8, #0x970]
7102dd177c  fcmp s8,s0
7102dd1780  b.hi 0x7102dd18d0
7102dd1784  ldrb w8,[x24, #0x990]
7102dd1788  cbz w8,0x7102dd18d0
7102dd178c  ldr x0,[x24, #0x968]
7102dd1790  ldr x8,[x0]
7102dd1794  ldr x8,[x8, #0x30]
7102dd1798  blr x8
7102dd179c  ldrb w8,[x24, #0x973]
7102dd17a0  cbz w8,0x7102dd18c8
7102dd17a4  ldr x21,[x24, #0x740]
7102dd17a8  ldr x20,[x21, #0x370]
7102dd17ac  ldr x19,[x20, #0x30]
7102dd17b0  cbz x19,0x7102dd17d4
7102dd17b4  ldrb w8,[x19, #0x10]
7102dd17b8  cmp w8,#0x0
7102dd17bc  cset w8,ne
7102dd17c0  ldrb w9,[x20, #0x40]
7102dd17c4  tbnz w8,#0x0,0x7102dd17e0
7102dd17c8  cbnz w9,0x7102dd17e0
7102dd17cc  mov w8,wzr
7102dd17d0  b 0x7102dd1834
7102dd17d4  mov w8,wzr
7102dd17d8  ldrb w9,[x20, #0x40]
7102dd17dc  tbz w8,#0x0,0x7102dd17c8
7102dd17e0  cbz w9,0x7102dd182c
7102dd17e4  cbz x19,0x7102dd181c
7102dd17e8  ldrb w8,[x19, #0x10]
7102dd17ec  cbz w8,0x7102dd181c
7102dd17f0  ldrb w8,[x19, #0x50]
7102dd17f4  strb wzr,[x19, #0x10]
7102dd17f8  cbz w8,0x7102dd181c
7102dd17fc  ldr x8,[x19]
7102dd1800  ldr w0,[x8, #0x8]
7102dd1804  bl 0x71003ac560
7102dd1808  ldr x8,[x0]
7102dd180c  ldr x8,[x8, #0x48]
7102dd1810  mov w1,wzr
7102dd1814  blr x8
7102dd1818  strb wzr,[x19, #0x50]
7102dd181c  ldr x8,[x20]
7102dd1820  ldr x8,[x8, #0x30]
7102dd1824  mov x0,x20
7102dd1828  blr x8
7102dd182c  mov w8,#0x1
7102dd1830  strb wzr,[x20, #0x40]
7102dd1834  ldr x20,[x21, #0x378]
7102dd1838  strb w8,[x21, #0x2ce]
7102dd183c  ldr x19,[x20, #0x30]
7102dd1840  cbz x19,0x7102dd1864
7102dd1844  ldrb w8,[x19, #0x10]
7102dd1848  cmp w8,#0x0
7102dd184c  cset w8,ne
7102dd1850  ldrb w9,[x20, #0x40]
7102dd1854  tbnz w8,#0x0,0x7102dd1870
7102dd1858  cbnz w9,0x7102dd1870
7102dd185c  mov w8,wzr
7102dd1860  b 0x7102dd18c4
7102dd1864  mov w8,wzr
7102dd1868  ldrb w9,[x20, #0x40]
7102dd186c  tbz w8,#0x0,0x7102dd1858
7102dd1870  cbz w9,0x7102dd18bc
7102dd1874  cbz x19,0x7102dd18ac
7102dd1878  ldrb w8,[x19, #0x10]
7102dd187c  cbz w8,0x7102dd18ac
7102dd1880  ldrb w8,[x19, #0x50]
7102dd1884  strb wzr,[x19, #0x10]
7102dd1888  cbz w8,0x7102dd18ac
7102dd188c  ldr x8,[x19]
7102dd1890  ldr w0,[x8, #0x8]
7102dd1894  bl 0x71003ac560
7102dd1898  ldr x8,[x0]
7102dd189c  ldr x8,[x8, #0x48]
7102dd18a0  mov w1,wzr
7102dd18a4  blr x8
7102dd18a8  strb wzr,[x19, #0x50]
7102dd18ac  ldr x8,[x20]
7102dd18b0  ldr x8,[x8, #0x30]
7102dd18b4  mov x0,x20
7102dd18b8  blr x8
7102dd18bc  mov w8,#0x1
7102dd18c0  strb wzr,[x20, #0x40]
7102dd18c4  strb w8,[x21, #0x2cf]
7102dd18c8  mov w8,#0x100
7102dd18cc  strh w8,[x24, #0x990]
7102dd18d0  ldrsw x8,[x24, #0x98c]
7102dd18d4  cmn w8,#0x1
7102dd18d8  b.eq 0x7102dd19f8
7102dd18dc  cmp w8,#0x8
7102dd18e0  b.cs 0x7102dd3e7c
7102dd18e4  adrp x19,0x71052b9000
7102dd18e8  ldr x9,[x19, #0x4f8]
7102dd18ec  ldr x9,[x9]
7102dd18f0  add x8,x9,x8, LSL #0x3
7102dd18f4  ldr x8,[x8, #0x20]
7102dd18f8  cbz x8,0x7102dd19f8
7102dd18fc  mov w9,#0x5920
7102dd1900  ldrb w9,[x8, x9, LSL ]
7102dd1904  cmp w9,#0x6
7102dd1908  b.ne 0x7102dd19f8
7102dd190c  mov w9,#0x5918
7102dd1910  ldrb w9,[x8, x9, LSL ]
7102dd1914  ldr x10,[x8, #0x4150]
7102dd1918  cmp x10,x9
7102dd191c  b.ls 0x7102dd1950
7102dd1920  add x20,x8,x9, LSL #0x3
7102dd1924  ldr x0,[x20, #0x4160]
7102dd1928  cbz x0,0x7102dd1950
7102dd192c  ldr x8,[x0]
7102dd1930  ldr x8,[x8, #0x518]
7102dd1934  blr x8
7102dd1938  tbz w0,#0x0,0x7102dd1950
7102dd193c  mov w8,#0x4160
7102dd1940  add x8,x20,x8
7102dd1944  ldr x1,[x8]
7102dd1948  sub x0,x29,#0xb0
7102dd194c  b 0x7102dd1958
7102dd1950  sub x0,x29,#0xb0
7102dd1954  mov x1,xzr
7102dd1958  bl 0x71003a9ab0
7102dd195c  ldur x8,[x29, #-0xa8]
7102dd1960  ldrb w9,[x8, #0x3a]
7102dd1964  cmp w9,#0x4
7102dd1968  b.cc 0x7102dd19f8
7102dd196c  ldr x8,[x8, #0x20]
7102dd1970  ldr x0,[x8, #0x40]
7102dd1974  ldr x8,[x0]
7102dd1978  ldr x8,[x8, #0x110]
7102dd197c  blr x8
7102dd1980  cmp w0,#0xb5
7102dd1984  b.eq 0x7102dd199c
7102dd1988  ldr x8,[x19, #0x4f8]
7102dd198c  ldr x8,[x8]
7102dd1990  ldrsb w8,[x8, #0xbc]
7102dd1994  cmp w8,#0x0
7102dd1998  b.gt 0x7102dd19f8
7102dd199c  ldrb w9,[x24, #0x973]
7102dd19a0  mov w8,#0xffffffff
7102dd19a4  str w8,[x24, #0x98c]
7102dd19a8  cbz w9,0x7102dd19b4
7102dd19ac  ldr x9,[x24, #0x740]
7102dd19b0  str w8,[x9, #0x2d0]
7102dd19b4  ldrb w8,[x24, #0x991]
7102dd19b8  cbz w8,0x7102dd19f8
7102dd19bc  ldrb w8,[x24, #0x973]
7102dd19c0  cbz w8,0x7102dd19e8
7102dd19c4  ldr x19,[x24, #0x740]
7102dd19c8  ldrb w8,[x19, #0x2ce]
7102dd19cc  cbz w8,0x7102dd19d8
7102dd19d0  ldr x0,[x19, #0x370]
7102dd19d4  bl 0x710313ef20
7102dd19d8  ldrb w8,[x19, #0x2cf]
7102dd19dc  cbz w8,0x7102dd19e8
7102dd19e0  ldr x0,[x19, #0x378]
7102dd19e4  bl 0x710313ef20
7102dd19e8  ldr x0,[x24, #0x968]
7102dd19ec  ldr x8,[x0]
7102dd19f0  ldr x8,[x8, #0x28]
7102dd19f4  blr x8
7102dd19f8  mov v0.16B,v8.16B
7102dd19fc  mov x0,x24
7102dd1a00  bl 0x71025dd540
7102dd1a04  ldrb w8,[x24, #0x976]
7102dd1a08  cbz w8,0x7102dd1f5c
7102dd1a0c  ldr w8,[x24, #0x978]
7102dd1a10  cmp w8,#0x2
7102dd1a14  b.eq 0x7102dd1b40
7102dd1a18  cmp w8,#0x1
7102dd1a1c  b.eq 0x7102dd1a94
7102dd1a20  cbnz w8,0x7102dd1f5c
7102dd1a24  ldr x8,[x24, #0x340]
7102dd1a28  ldp w9,w10,[x8]
7102dd1a2c  str w10,[x8]
7102dd1a30  ldp w10,w11,[x8, #0x8]
7102dd1a34  eor w9,w9,w9, LSL #0xb
7102dd1a38  eor w9,w9,w9, LSR #0x8
7102dd1a3c  eor w9,w9,w11
7102dd1a40  eor w9,w9,w11, LSR #0x13
7102dd1a44  ucvtf s0,w9
7102dd1a48  stp w10,w11,[x8, #0x4]
7102dd1a4c  str w9,[x8, #0xc]
7102dd1a50  adrp x8,0x7104473000
7102dd1a54  ldr s1,[x8, #0x91c]
7102dd1a58  adrp x8,0x7104473000
7102dd1a5c  fmul s0,s0,s1
7102dd1a60  ldr s1,[x8, #0x710]
7102dd1a64  fmul s3,s0,s1
7102dd1a68  fmov s1,wzr
7102dd1a6c  fadd s1,s3,s1
7102dd1a70  ldr s0,[x24, #0x988]
7102dd1a74  fcmp s1,s0
7102dd1a78  b.ls 0x7102dd1bb4
7102dd1a7c  ldr s1,[x24, #0x948]
7102dd1a80  fadd s0,s0,s1
7102dd1a84  mov w8,#0x2
7102dd1a88  str w8,[x24, #0x978]
7102dd1a8c  str xzr,[x24, #0x980]
7102dd1a90  b 0x7102dd1bc0
7102dd1a94  ldr w8,[x24, #0x97c]
7102dd1a98  cmp w8,#0x3
7102dd1a9c  b.eq 0x7102dd1c5c
7102dd1aa0  cmp w8,#0x1
7102dd1aa4  b.eq 0x7102dd1bd0
7102dd1aa8  cbnz w8,0x7102dd1f5c
7102dd1aac  ldr x8,[x24, #0x340]
7102dd1ab0  ldp w9,w10,[x8]
7102dd1ab4  ldr s0,[x24, #0x93c]
7102dd1ab8  ldr s1,[x24, #0x940]
7102dd1abc  fsub s1,s1,s0
7102dd1ac0  str w10,[x8]
7102dd1ac4  ldp w10,w11,[x8, #0x8]
7102dd1ac8  eor w9,w9,w9, LSL #0xb
7102dd1acc  eor w9,w9,w9, LSR #0x8
7102dd1ad0  eor w9,w9,w11
7102dd1ad4  eor w9,w9,w11, LSR #0x13
7102dd1ad8  ucvtf s2,w9
7102dd1adc  stp w10,w11,[x8, #0x4]
7102dd1ae0  str w9,[x8, #0xc]
7102dd1ae4  adrp x8,0x7104473000
7102dd1ae8  fmul s1,s1,s2
7102dd1aec  ldr s2,[x8, #0x710]
7102dd1af0  mov w8,#0x1
7102dd1af4  str w8,[x24, #0x97c]
7102dd1af8  fmul s4,s1,s2
7102dd1afc  fadd s0,s0,s4
7102dd1b00  str s0,[x24, #0x9c8]
7102dd1b04  ldrb w8,[x24, #0x970]
7102dd1b08  cbz w8,0x7102dd1f64
7102dd1b0c  ldr x0,[x24, #0x750]
7102dd1b10  cbz x0,0x7102dd1b1c
7102dd1b14  mov v0.16B,v8.16B
7102dd1b18  bl 0x7102dd7b20
7102dd1b1c  ldr x0,[x24, #0x758]
7102dd1b20  cbz x0,0x7102dd1b2c
7102dd1b24  mov v0.16B,v8.16B
7102dd1b28  bl 0x7102dd7b20
7102dd1b2c  ldr x0,[x24, #0x760]
7102dd1b30  cbz x0,0x7102dd1f64
7102dd1b34  mov v0.16B,v8.16B
7102dd1b38  bl 0x7102dd7b20
7102dd1b3c  b 0x7102dd1f64
7102dd1b40  ldr w8,[x24, #0x980]
7102dd1b44  cmp w8,#0x3
7102dd1b48  b.hi 0x7102dd1e6c
7102dd1b4c  adrp x9,0x710451c000
7102dd1b50  add x9,x9,#0x0
7102dd1b54  ldrsw x8,[x9, x8, LSL #0x2]
7102dd1b58  add x8,x8,x9
7102dd1b5c  br x8
7102dd1b60  ldr x8,[x24, #0x340]
7102dd1b64  ldp w9,w10,[x8]
7102dd1b68  ldr s0,[x24, #0x934]
7102dd1b6c  ldr s1,[x24, #0x938]
7102dd1b70  fsub s1,s1,s0
7102dd1b74  str w10,[x8]
7102dd1b78  ldp w10,w11,[x8, #0x8]
7102dd1b7c  eor w9,w9,w9, LSL #0xb
7102dd1b80  eor w9,w9,w9, LSR #0x8
7102dd1b84  eor w9,w9,w11
7102dd1b88  eor w9,w9,w11, LSR #0x13
7102dd1b8c  ucvtf s2,w9
7102dd1b90  stp w10,w11,[x8, #0x4]
7102dd1b94  str w9,[x8, #0xc]
7102dd1b98  adrp x8,0x7104473000
7102dd1b9c  fmul s1,s1,s2
7102dd1ba0  ldr s2,[x8, #0x710]
7102dd1ba4  fmul s4,s1,s2
7102dd1ba8  fadd s0,s0,s4
7102dd1bac  str s0,[x24, #0x9a4]
7102dd1bb0  b 0x7102dd1e64
7102dd1bb4  ldr s0,[x24, #0x944]
7102dd1bb8  mov w8,#0x1
7102dd1bbc  str x8,[x24, #0x978]
7102dd1bc0  str s0,[x24, #0x988]
7102dd1bc4  ldrb w8,[x24, #0x970]
7102dd1bc8  cbnz w8,0x7102dd1b0c
7102dd1bcc  b 0x7102dd1f64
7102dd1bd0  ldr s0,[x24, #0x9c8]
7102dd1bd4  fcmp s0,#0.0
7102dd1bd8  b.hi 0x7102dd1f5c
7102dd1bdc  ldr x19,[x24, #0x740]
7102dd1be0  cbz x19,0x7102dd1c40
7102dd1be4  ldr x8,[x19, #0x10]
7102dd1be8  cbz x8,0x7102dd1c34
7102dd1bec  add x0,x8,#0x108
7102dd1bf0  mov w20,#0x1
7102dd1bf4  strb w20,[x8, #0x110]
7102dd1bf8  bl 0x71025e9d50
7102dd1bfc  ldr x8,[x19, #0x10]
7102dd1c00  cbz x8,0x7102dd1c10
7102dd1c04  ldrb w9,[x8, #0x118]
7102dd1c08  and w9,w9,#0xfe
7102dd1c0c  strb w9,[x8, #0x118]
7102dd1c10  ldr x8,[x19, #0x20]
7102dd1c14  ldr x9,[x8, #0x8]
7102dd1c18  strb w20,[x8, #0x128]
7102dd1c1c  cbz x9,0x7102dd1c34
7102dd1c20  mov x10,#-0x1
7102dd1c24  str x10,[x9, #0xd8]
7102dd1c28  ldr x0,[x8, #0x8]
7102dd1c2c  mov w1,wzr
7102dd1c30  bl 0x7100532bc0
7102dd1c34  mov w8,#0x1
7102dd1c38  strb w8,[x19, #0x2cd]
7102dd1c3c  str wzr,[x19, #0x364]
7102dd1c40  mov w8,#0x1
7102dd1c44  str w8,[x24, #0x9c4]
7102dd1c48  orr w8,wzr,#0x3
7102dd1c4c  str w8,[x24, #0x97c]
7102dd1c50  ldrb w8,[x24, #0x970]
7102dd1c54  cbnz w8,0x7102dd1b0c
7102dd1c58  b 0x7102dd1f64
7102dd1c5c  ldr w8,[x24, #0x9c4]
7102dd1c60  cbnz w8,0x7102dd1f5c
7102dd1c64  ldr x21,[x24, #0x740]
7102dd1c68  mov w8,#0x5
7102dd1c6c  str w8,[x24, #0x9c4]
7102dd1c70  orr x8,xzr,#0x400000000
7102dd1c74  str x8,[x24, #0x978]
7102dd1c78  cbz x21,0x7102dd1f5c
7102dd1c7c  ldr x8,[x21, #0x10]
7102dd1c80  cbz x8,0x7102dd1da8
7102dd1c84  add x0,x8,#0x108
7102dd1c88  strb wzr,[x8, #0x110]
7102dd1c8c  bl 0x71025e9d50
7102dd1c90  ldr x8,[x21, #0x10]
7102dd1c94  cbz x8,0x7102dd1ca4
7102dd1c98  ldrb w9,[x8, #0x118]
7102dd1c9c  orr w9,w9,#0x1
7102dd1ca0  strb w9,[x8, #0x118]
7102dd1ca4  ldr x8,[x21, #0x20]
7102dd1ca8  ldrb w9,[x8, #0x12b]
7102dd1cac  strb w9,[x8, #0x130]
7102dd1cb0  add x9,x8,#0x12b
7102dd1cb4  strb wzr,[x8, #0x128]
7102dd1cb8  str wzr,[x9]
7102dd1cbc  ldp x10,x11,[x8, #0x88]
7102dd1cc0  ldr x9,[x8, #0x100]
7102dd1cc4  stp x10,x11,[x8, #0x100]
7102dd1cc8  ldr x10,[x8, #0x110]
7102dd1ccc  ldp x11,x12,[x8, #0x98]
7102dd1cd0  str x9,[x8, #0x88]
7102dd1cd4  stp x9,x10,[x8, #0x90]
7102dd1cd8  ldr x9,[x8, #0xd0]
7102dd1cdc  str x9,[x8, #0xd8]
7102dd1ce0  ldr x9,[x8, #0xe8]
7102dd1ce4  ldr x10,[x8, #0xb8]
7102dd1ce8  str x10,[x8, #0xc0]
7102dd1cec  str x9,[x8, #0xf0]
7102dd1cf0  ldr x9,[x8, #0x8]
7102dd1cf4  str x11,[x8, #0x110]
7102dd1cf8  strb wzr,[x8, #0x12f]
7102dd1cfc  str x12,[x8, #0xa8]
7102dd1d00  cbz x9,0x7102dd1da8
7102dd1d04  str xzr,[x9, #0xd8]
7102dd1d08  ldr x20,[x8, #0x8]
7102dd1d0c  ldrb w8,[x20, #0xe0]
7102dd1d10  cbz w8,0x7102dd1da8
7102dd1d14  mov x19,x20
7102dd1d18  ldr x22,[x19, #0x80]!
7102dd1d1c  cmp x19,x22
7102dd1d20  strh wzr,[x19, #0x60]
7102dd1d24  sturh wzr,[x19, #0x67]
7102dd1d28  b.eq 0x7102dd1d78
7102dd1d2c  orr w23,wzr,#0x18
7102dd1d30  ldr w1,[x22, #0xfc]
7102dd1d34  strb wzr,[x22, #0x100]
7102dd1d38  cbz w1,0x7102dd1d60
7102dd1d3c  ldr x8,[x22, #0xf0]
7102dd1d40  ldr x9,[x8]
7102dd1d44  madd x9,x1,x23,x9
7102dd1d48  strb wzr,[x9, #0x10]
7102dd1d4c  ldr x0,[x8, #0x18]
7102dd1d50  ldr x8,[x0]
7102dd1d54  ldr x8,[x8, #0x18]
7102dd1d58  mov w2,wzr
7102dd1d5c  blr x8
7102dd1d60  str wzr,[x22, #0x80]
7102dd1d64  stp xzr,xzr,[x22, #0x70]
7102dd1d68  stp xzr,xzr,[x22, #0x60]
7102dd1d6c  ldr x22,[x22]
7102dd1d70  cmp x19,x22
7102dd1d74  b.ne 0x7102dd1d30
7102dd1d78  mov x8,x20
7102dd1d7c  ldr x9,[x8, #0x68]!
7102dd1d80  cmp x8,x9
7102dd1d84  b.eq 0x7102dd1d98
7102dd1d88  strb wzr,[x9, #0x50]
7102dd1d8c  ldr x9,[x9]
7102dd1d90  cmp x8,x9
7102dd1d94  b.ne 0x7102dd1d88
7102dd1d98  adrp x8,0x71052b9000
7102dd1d9c  ldr x0,[x8, #0x298]
7102dd1da0  mov x1,x20
7102dd1da4  bl 0x7100525010
7102dd1da8  ldr x20,[x21, #0x370]
7102dd1dac  strb wzr,[x21, #0x2cd]
7102dd1db0  ldr x19,[x20, #0x30]
7102dd1db4  cbz x19,0x7102dd3800
7102dd1db8  ldrb w8,[x19, #0x10]
7102dd1dbc  cmp w8,#0x0
7102dd1dc0  cset w8,ne
7102dd1dc4  ldrb w9,[x20, #0x40]
7102dd1dc8  tbz w8,#0x0,0x7102dd380c
7102dd1dcc  b 0x7102dd3810
7102dd1dd0  ldr s0,[x24, #0x9a4]
7102dd1dd4  fcmp s0,#0.0
7102dd1dd8  b.hi 0x7102dd1e6c
7102dd1ddc  mov w8,#0x1
7102dd1de0  str w8,[x24, #0x9a0]
7102dd1de4  mov w8,#0x2
7102dd1de8  b 0x7102dd1e68
7102dd1dec  ldr w8,[x24, #0x9a0]
7102dd1df0  cbnz w8,0x7102dd1e6c
7102dd1df4  orr w8,wzr,#0x6
7102dd1df8  str w8,[x24, #0x9a0]
7102dd1dfc  orr w8,wzr,#0x3
7102dd1e00  str w8,[x24, #0x980]
7102dd1e04  ldr x8,[x24, #0x340]
7102dd1e08  ldr s0,[x24, #0x934]
7102dd1e0c  ldp w9,w10,[x8]
7102dd1e10  ldr s1,[x24, #0x938]
7102dd1e14  str w10,[x8]
7102dd1e18  ldp w10,w11,[x8, #0x8]
7102dd1e1c  eor w9,w9,w9, LSL #0xb
7102dd1e20  eor w9,w9,w9, LSR #0x8
7102dd1e24  eor w9,w9,w11
7102dd1e28  eor w9,w9,w11, LSR #0x13
7102dd1e2c  ucvtf s2,w9
7102dd1e30  fsub s1,s1,s0
7102dd1e34  stp w10,w11,[x8, #0x4]
7102dd1e38  str w9,[x8, #0xc]
7102dd1e3c  adrp x8,0x7104473000
7102dd1e40  fmul s1,s1,s2
7102dd1e44  ldr s2,[x8, #0x710]
7102dd1e48  fmul s4,s1,s2
7102dd1e4c  fadd s0,s0,s4
7102dd1e50  str s0,[x24, #0x9a4]
7102dd1e54  b 0x7102dd1e6c
7102dd1e58  ldr s0,[x24, #0x9a4]
7102dd1e5c  fcmp s0,#0.0
7102dd1e60  b.hi 0x7102dd1e6c
7102dd1e64  mov w8,#0x1
7102dd1e68  str w8,[x24, #0x980]
7102dd1e6c  ldr w8,[x24, #0x984]
7102dd1e70  cmp w8,#0x3
7102dd1e74  b.hi 0x7102dd1f38
7102dd1e78  adrp x9,0x710451c000
7102dd1e7c  add x9,x9,#0x10
7102dd1e80  ldrsw x8,[x9, x8, LSL #0x2]
7102dd1e84  add x8,x8,x9
7102dd1e88  br x8
7102dd1e8c  ldr x8,[x24, #0x340]
7102dd1e90  ldp w9,w10,[x8]
7102dd1e94  ldr s0,[x24, #0x92c]
7102dd1e98  ldr s1,[x24, #0x930]
7102dd1e9c  fsub s1,s1,s0
7102dd1ea0  str w10,[x8]
7102dd1ea4  ldp w10,w11,[x8, #0x8]
7102dd1ea8  eor w9,w9,w9, LSL #0xb
7102dd1eac  eor w9,w9,w9, LSR #0x8
7102dd1eb0  eor w9,w9,w11
7102dd1eb4  eor w9,w9,w11, LSR #0x13
7102dd1eb8  ucvtf s2,w9
7102dd1ebc  stp w10,w11,[x8, #0x4]
7102dd1ec0  str w9,[x8, #0xc]
7102dd1ec4  adrp x8,0x7104473000
7102dd1ec8  fmul s1,s1,s2
7102dd1ecc  ldr s2,[x8, #0x710]
7102dd1ed0  fmul s4,s1,s2
7102dd1ed4  fadd s0,s0,s4
7102dd1ed8  str s0,[x24, #0x9d4]
7102dd1edc  b 0x7102dd1f30
7102dd1ee0  ldr s0,[x24, #0x9d4]
7102dd1ee4  fcmp s0,#0.0
7102dd1ee8  b.hi 0x7102dd1f38
7102dd1eec  mov w8,#0x1
7102dd1ef0  str w8,[x24, #0x9d0]
7102dd1ef4  mov w8,#0x2
7102dd1ef8  b 0x7102dd1f34
7102dd1efc  ldr x8,[x24, #0x770]
7102dd1f00  ldr x9,[x24, #0x778]
7102dd1f04  cmp x8,x9
7102dd1f08  b.eq 0x7102dd1f38
7102dd1f0c  ldr x10,[x8], #0x8
7102dd1f10  ldr w10,[x10, #0x68]
7102dd1f14  cbz w10,0x7102dd3590
7102dd1f18  cmp x9,x8
7102dd1f1c  b.ne 0x7102dd1f0c
7102dd1f20  b 0x7102dd1f38
7102dd1f24  ldr s0,[x24, #0x9d4]
7102dd1f28  fcmp s0,#0.0
7102dd1f2c  b.hi 0x7102dd1f38
7102dd1f30  mov w8,#0x1
7102dd1f34  str w8,[x24, #0x984]
7102dd1f38  ldr w8,[x24, #0x980]
7102dd1f3c  cmp w8,#0x3
7102dd1f40  b.ne 0x7102dd1f5c
7102dd1f44  ldr w8,[x24, #0x984]
7102dd1f48  cmp w8,#0x3
7102dd1f4c  b.ne 0x7102dd1f5c
7102dd1f50  mov x8,#0x400000004
7102dd1f54  str wzr,[x24, #0x978]
7102dd1f58  str x8,[x24, #0x980]
7102dd1f5c  ldrb w8,[x24, #0x970]
7102dd1f60  cbnz w8,0x7102dd1b0c
7102dd1f64  ldrb w9,[x24, #0x972]
7102dd1f68  ldrb w8,[x24, #0x971]
7102dd1f6c  orr w9,w9,w8
7102dd1f70  tst w9,#0xff
7102dd1f74  b.eq 0x7102dd2620
7102dd1f78  cbz w8,0x7102dd1fd4
7102dd1f7c  ldr w9,[x24, #0x9b4]
7102dd1f80  cmp w9,#0x4
7102dd1f84  b.eq 0x7102dd2314
7102dd1f88  ldr x8,[x24, #0x7a8]
7102dd1f8c  cmp w9,#0x3
7102dd1f90  b.ne 0x7102dd2078
7102dd1f94  str wzr,[x8, #0x10]
7102dd1f98  mov w8,#0x4
7102dd1f9c  str w8,[x24, #0x9b4]
7102dd1fa0  ldr x8,[x24, #0x768]
7102dd1fa4  ldr w10,[x8, #0x28]
7102dd1fa8  cmp w10,#0x5
7102dd1fac  b.hi 0x7102dd1fc8
7102dd1fb0  mov w9,#0x1
7102dd1fb4  lsl w10,w9,w10
7102dd1fb8  mov w11,#0x31
7102dd1fbc  tst w10,w11
7102dd1fc0  b.eq 0x7102dd1fc8
7102dd1fc4  str w9,[x8, #0x28]
7102dd1fc8  mov w8,#0x1
7102dd1fcc  strb w8,[x24, #0x9c1]
7102dd1fd0  b 0x7102dd2314
7102dd1fd4  ldr s0,[x24, #0x9b8]
7102dd1fd8  ldr s1,[x24, #0x9bc]
7102dd1fdc  fsub s1,s1,s8
7102dd1fe0  fsub s2,s0,s8
7102dd1fe4  fmov s9,wzr
7102dd1fe8  fmax s3,s2,s9
7102dd1fec  fmax s0,s1,s9
7102dd1ff0  ldr w8,[x24, #0x9b4]
7102dd1ff4  cmp w8,#0x5
7102dd1ff8  str s3,[x24, #0x9b8]
7102dd1ffc  str s0,[x24, #0x9bc]
7102dd2000  b.hi 0x7102dd2314
7102dd2004  adrp x9,0x710451c000
7102dd2008  add x9,x9,#0x20
7102dd200c  ldrsw x8,[x9, x8, LSL #0x2]
7102dd2010  add x8,x8,x9
7102dd2014  br x8
7102dd2018  fcmp s2,#0.0
7102dd201c  b.hi 0x7102dd36bc
7102dd2020  ldr x8,[x24, #0x7a8]
7102dd2024  mov w9,#0x2
7102dd2028  str w9,[x8, #0x10]
7102dd202c  ldrb w9,[x24, #0x9c0]
7102dd2030  ldr x8,[x24, #0x340]
7102dd2034  cbz w9,0x7102dd3664
7102dd2038  ldp w9,w10,[x8]
7102dd203c  ldr s0,[x24, #0x894]
7102dd2040  ldr s1,[x24, #0x898]
7102dd2044  str w10,[x8]
7102dd2048  eor w9,w9,w9, LSL #0xb
7102dd204c  ldp w10,w11,[x8, #0x8]
7102dd2050  fsub s1,s1,s0
7102dd2054  eor w9,w9,w9, LSR #0x8
7102dd2058  eor w9,w9,w11
7102dd205c  eor w9,w9,w11, LSR #0x13
7102dd2060  ucvtf s2,w9
7102dd2064  stp w10,w11,[x8, #0x4]
7102dd2068  str w9,[x8, #0xc]
7102dd206c  adrp x8,0x7104473000
7102dd2070  strb wzr,[x24, #0x9c0]
7102dd2074  b 0x7102dd369c
7102dd2078  orr w9,wzr,#0x3
7102dd207c  str w9,[x8, #0x10]
7102dd2080  ldr x8,[x24, #0x748]
7102dd2084  ldr w9,[x8, #0xc]
7102dd2088  sub w10,w9,#0x1
7102dd208c  cmp w10,#0x3
7102dd2090  b.cs 0x7102dd20a0
7102dd2094  mov w9,#0x1
7102dd2098  strb w9,[x8, #0x8]
7102dd209c  b 0x7102dd20ac
7102dd20a0  cbnz w9,0x7102dd20ac
7102dd20a4  mov w9,#0x4
7102dd20a8  str w9,[x8, #0xc]
7102dd20ac  ldr x8,[x24, #0x318]
7102dd20b0  ldr s0,[x24, #0x9b8]
7102dd20b4  adrp x1,0x7104348000
7102dd20b8  add x1,x1,#0x815
7102dd20bc  ldr x0,[x8, #0x10]
7102dd20c0  bl 0x71025f74f0
7102dd20c4  ldr x0,[x24, #0x318]
7102dd20c8  adrp x1,0x7104306000
7102dd20cc  add x1,x1,#0x946
7102dd20d0  mov w2,#0x1
7102dd20d4  bl 0x7102633a10
7102dd20d8  ldr x0,[x24, #0x318]
7102dd20dc  adrp x1,0x7104441000
7102dd20e0  add x1,x1,#0xcaf
7102dd20e4  mov w2,#0x1
7102dd20e8  bl 0x7102633b90
7102dd20ec  b 0x7102dd22e8
7102dd20f0  ldr x8,[x24, #0x748]
7102dd20f4  adrp x9,0x7104472000
7102dd20f8  ldr s1,[x9, #0x970]
7102dd20fc  ldr s0,[x8, #0x4]
7102dd2100  fcmp s0,s1
7102dd2104  b.ls 0x7102dd2120
7102dd2108  ldr s1,[x8]
7102dd210c  adrp x8,0x7104473000
7102dd2110  ldr s2,[x8, #0xd0]
7102dd2114  fmul s0,s0,s2
7102dd2118  fcmp s1,s0
7102dd211c  b.lt 0x7102dd2314
7102dd2120  ldr x8,[x24, #0x7a8]
7102dd2124  orr w9,wzr,#0x3
7102dd2128  str w9,[x8, #0x10]
7102dd212c  ldr x8,[x24, #0x748]
7102dd2130  ldr w9,[x8, #0xc]
7102dd2134  sub w10,w9,#0x1
7102dd2138  cmp w10,#0x3
7102dd213c  b.cs 0x7102dd2288
7102dd2140  mov w9,#0x1
7102dd2144  strb w9,[x8, #0x8]
7102dd2148  b 0x7102dd2294
7102dd214c  fcmp s2,#0.0
7102dd2150  b.hi 0x7102dd215c
7102dd2154  mov w8,#0x5
7102dd2158  str w8,[x24, #0x9b4]
7102dd215c  fcmp s1,#0.0
7102dd2160  b.hi 0x7102dd2314
7102dd2164  ldrb w8,[x24, #0x9c1]
7102dd2168  cbnz w8,0x7102dd2314
7102dd216c  b 0x7102dd1fa0
7102dd2170  fcmp s2,#0.0
7102dd2174  b.hi 0x7102dd2314
7102dd2178  ldr x8,[x24, #0x340]
7102dd217c  ldp w9,w10,[x8]
7102dd2180  str w10,[x8]
7102dd2184  ldp w10,w11,[x8, #0x8]
7102dd2188  eor w9,w9,w9, LSL #0xb
7102dd218c  eor w9,w9,w9, LSR #0x8
7102dd2190  eor w9,w9,w11
7102dd2194  eor w9,w9,w11, LSR #0x13
7102dd2198  ucvtf s1,w9
7102dd219c  stp w10,w11,[x8, #0x4]
7102dd21a0  str w9,[x8, #0xc]
7102dd21a4  adrp x8,0x7104473000
7102dd21a8  ldr s0,[x8, #0x710]
7102dd21ac  fmul s1,s1,s0
7102dd21b0  ldr s2,[x24, #0x8a4]
7102dd21b4  fcmp s1,s2
7102dd21b8  b.pl 0x7102dd35f4
7102dd21bc  mov w8,#0x2
7102dd21c0  b 0x7102dd2310
7102dd21c4  fcmp s2,#0.0
7102dd21c8  b.hi 0x7102dd2314
7102dd21cc  ldr x8,[x24, #0x7a8]
7102dd21d0  str wzr,[x8, #0x10]
7102dd21d4  ldr x8,[x24, #0x340]
7102dd21d8  ldp w9,w10,[x8]
7102dd21dc  ldr s0,[x24, #0x8b4]
7102dd21e0  ldr s1,[x24, #0x8b8]
7102dd21e4  fsub s1,s1,s0
7102dd21e8  str w10,[x8]
7102dd21ec  ldp w10,w11,[x8, #0x8]
7102dd21f0  eor w9,w9,w9, LSL #0xb
7102dd21f4  eor w9,w9,w9, LSR #0x8
7102dd21f8  eor w9,w9,w11
7102dd21fc  eor w9,w9,w11, LSR #0x13
7102dd2200  ucvtf s2,w9
7102dd2204  stp w10,w11,[x8, #0x4]
7102dd2208  str w9,[x8, #0xc]
7102dd220c  adrp x8,0x7104473000
7102dd2210  fmul s1,s1,s2
7102dd2214  ldr s2,[x8, #0x710]
7102dd2218  mov w8,#0x4
7102dd221c  str w8,[x24, #0x9b4]
7102dd2220  fmul s4,s1,s2
7102dd2224  fadd s0,s0,s4
7102dd2228  str s0,[x24, #0x9b8]
7102dd222c  b 0x7102dd2314
7102dd2230  ldr x8,[x24, #0x748]
7102dd2234  adrp x9,0x7104472000
7102dd2238  ldr s1,[x9, #0x970]
7102dd223c  ldr s0,[x8, #0x4]
7102dd2240  fcmp s0,s1
7102dd2244  b.ls 0x7102dd2260
7102dd2248  ldr s1,[x8]
7102dd224c  adrp x8,0x7104473000
7102dd2250  ldr s2,[x8, #0xd0]
7102dd2254  fmul s0,s0,s2
7102dd2258  fcmp s1,s0
7102dd225c  b.lt 0x7102dd2314
7102dd2260  ldr x8,[x24, #0x7a8]
7102dd2264  mov w9,#0x1
7102dd2268  str w9,[x8, #0x10]
7102dd226c  ldr x8,[x24, #0x748]
7102dd2270  ldr w10,[x8, #0xc]
7102dd2274  sub w11,w10,#0x4
7102dd2278  cmp w11,#0x3
7102dd227c  b.cs 0x7102dd34fc
7102dd2280  strb w9,[x8, #0x8]
7102dd2284  b 0x7102dd3508
7102dd2288  cbnz w9,0x7102dd2294
7102dd228c  mov w9,#0x4
7102dd2290  str w9,[x8, #0xc]
7102dd2294  ldr w8,[x24, #0x8bc]
7102dd2298  ldr x9,[x24, #0x318]
7102dd229c  str w8,[x24, #0x9b8]
7102dd22a0  fmov s0,w8
7102dd22a4  ldr x0,[x9, #0x10]
7102dd22a8  adrp x1,0x7104348000
7102dd22ac  add x1,x1,#0x815
7102dd22b0  bl 0x71025f74f0
7102dd22b4  ldr x0,[x24, #0x318]
7102dd22b8  adrp x1,0x7104306000
7102dd22bc  add x1,x1,#0x946
7102dd22c0  mov w2,#0x1
7102dd22c4  bl 0x7102633a10
7102dd22c8  ldr x0,[x24, #0x318]
7102dd22cc  adrp x1,0x7104441000
7102dd22d0  add x1,x1,#0xcaf
7102dd22d4  mov w2,#0x1
7102dd22d8  bl 0x7102633b90
7102dd22dc  ldr w8,[x24, #0x8a8]
7102dd22e0  str w8,[x24, #0x9bc]
7102dd22e4  strb wzr,[x24, #0x9c1]
7102dd22e8  ldr x8,[x24, #0x338]
7102dd22ec  ldr x8,[x8]
7102dd22f0  ldr x0,[x8, #0x8]
7102dd22f4  cbz x0,0x7102dd230c
7102dd22f8  ldr x8,[x0]
7102dd22fc  ldr x8,[x8, #0x58]
7102dd2300  mov w1,#0x11
7102dd2304  mov w2,#0xffffffff
7102dd2308  blr x8
7102dd230c  orr w8,wzr,#0x3
7102dd2310  str w8,[x24, #0x9b4]
7102dd2314  ldr x8,[x24, #0x748]
7102dd2318  ldr s0,[x8, #0x10]
7102dd231c  fsub s0,s0,s8
7102dd2320  fmov s1,wzr
7102dd2324  ldr w9,[x8, #0xc]
7102dd2328  sub w9,w9,#0x1
7102dd232c  cmp w9,#0x5
7102dd2330  fmax s1,s0,s1
7102dd2334  str s1,[x8, #0x10]
7102dd2338  b.hi 0x7102dd2404
7102dd233c  adrp x10,0x710451c000
7102dd2340  add x10,x10,#0x38
7102dd2344  ldrsw x9,[x10, x9, LSL #0x2]
7102dd2348  add x9,x9,x10
7102dd234c  br x9
7102dd2350  mov x9,#0x2
7102dd2354  b 0x7102dd23ac
7102dd2358  fcmp s0,#0.0
7102dd235c  b.hi 0x7102dd2404
7102dd2360  ldrb w9,[x8, #0x8]
7102dd2364  cbz w9,0x7102dd23e0
7102dd2368  str wzr,[x8, #0x4]
7102dd236c  b 0x7102dd23d4
7102dd2370  ldrb w9,[x8, #0x8]
7102dd2374  cbz w9,0x7102dd2404
7102dd2378  ldp s0,s1,[x8]
7102dd237c  fcmp s0,s1
7102dd2380  b.hi 0x7102dd2404
7102dd2384  mov w9,#0x4
7102dd2388  b 0x7102dd23d8
7102dd238c  fcmp s0,#0.0
7102dd2390  b.hi 0x7102dd2404
7102dd2394  ldrb w9,[x8, #0x8]
7102dd2398  cbz w9,0x7102dd23f0
7102dd239c  str wzr,[x8, #0x4]
7102dd23a0  mov w9,#0x4
7102dd23a4  b 0x7102dd23d8
7102dd23a8  mov x9,#0x5
7102dd23ac  movk x9,#0x4407, LSL #48
7102dd23b0  str xzr,[x8]
7102dd23b4  strb wzr,[x8, #0x8]
7102dd23b8  stur x9,[x8, #0xc]
7102dd23bc  b 0x7102dd2404
7102dd23c0  ldrb w9,[x8, #0x8]
7102dd23c4  cbz w9,0x7102dd2404
7102dd23c8  ldp s0,s1,[x8]
7102dd23cc  fcmp s0,s1
7102dd23d0  b.hi 0x7102dd2404
7102dd23d4  mov w9,#0x1
7102dd23d8  str w9,[x8, #0xc]
7102dd23dc  b 0x7102dd2404
7102dd23e0  mov x9,#0x4407000000000000
7102dd23e4  str x9,[x8]
7102dd23e8  mov x9,#0x6
7102dd23ec  b 0x7102dd23fc
7102dd23f0  mov x9,#0x4407000000000000
7102dd23f4  str x9,[x8]
7102dd23f8  mov x9,#0x3
7102dd23fc  movk x9,#0x4407, LSL #48
7102dd2400  stur x9,[x8, #0xc]
7102dd2404  ldr s0,[x8]
7102dd2408  adrp x9,0x7104472000
7102dd240c  ldr s1,[x9, #0x4c4]
7102dd2410  fadd s0,s0,s8
7102dd2414  fmin s0,s0,s1
7102dd2418  str s0,[x8]
7102dd241c  ldr x0,[x24, #0x768]
7102dd2420  mov v0.16B,v8.16B
7102dd2424  bl 0x7102dda740
7102dd2428  ldr x20,[x24, #0x7a8]
7102dd242c  ldr w8,[x20, #0x14]
7102dd2430  cmp w8,#0x4
7102dd2434  b.hi 0x7102dd2620
7102dd2438  adrp x9,0x710451c000
7102dd243c  add x9,x9,#0x50
7102dd2440  ldrsw x8,[x9, x8, LSL #0x2]
7102dd2444  add x8,x8,x9
7102dd2448  br x8
7102dd244c  mov w8,#0x1
7102dd2450  str w8,[x20, #0x14]
7102dd2454  strb wzr,[x20, #0x18]
7102dd2458  ldrb w8,[x24, #0x973]
7102dd245c  cbnz w8,0x7102dd2628
7102dd2460  b 0x7102dd27fc
7102dd2464  ldr w8,[x20, #0x10]
7102dd2468  cbz w8,0x7102dd2620
7102dd246c  cmp w8,#0x3
7102dd2470  b.eq 0x7102dd2620
7102dd2474  mov w8,#0x2
7102dd2478  b 0x7102dd2514
7102dd247c  mov w8,#0x1
7102dd2480  str w8,[x20, #0x14]
7102dd2484  ldr x8,[x20, #0x30]
7102dd2488  cbz x8,0x7102dd2620
7102dd248c  ldrb w9,[x8, #0x35]
7102dd2490  cbz w9,0x7102dd2620
7102dd2494  ldr w19,[x8, #0x3c]
7102dd2498  adrp x8,0x7105334000
7102dd249c  ldr x8,[x8, #0x920]
7102dd24a0  ldr x21,[x8]
7102dd24a4  mov w8,#0x9498
7102dd24a8  movk w8,#0x1, LSL #16
7102dd24ac  add x20,x21,x8
7102dd24b0  mov x0,x20
7102dd24b4  bl 0x71039c19c0
7102dd24b8  cmp w19,#0x1
7102dd24bc  b.lt 0x7102dd24ec
7102dd24c0  lsr x8,x19,#0x18
7102dd24c4  orr w9,wzr,#0x300
7102dd24c8  madd x0,x8,x9,x21
7102dd24cc  cbz x0,0x7102dd24ec
7102dd24d0  ldr w8,[x0, #0x4]
7102dd24d4  cmp w8,w19
7102dd24d8  b.ne 0x7102dd24ec
7102dd24dc  mov w1,wzr
7102dd24e0  mov w2,wzr
7102dd24e4  mov w3,wzr
7102dd24e8  bl 0x71035707d0
7102dd24ec  mov x0,x20
7102dd24f0  bl 0x71039c19d0
7102dd24f4  ldrb w8,[x24, #0x973]
7102dd24f8  cbnz w8,0x7102dd2628
7102dd24fc  b 0x7102dd27fc
7102dd2500  ldr w8,[x20, #0x10]
7102dd2504  sub w8,w8,#0x1
7102dd2508  cmp w8,#0x2
7102dd250c  b.cc 0x7102dd2620
7102dd2510  orr w8,wzr,#0x3
7102dd2514  str w8,[x20, #0x14]
7102dd2518  ldrb w8,[x24, #0x973]
7102dd251c  cbnz w8,0x7102dd2628
7102dd2520  b 0x7102dd27fc
7102dd2524  mov w8,#0x1
7102dd2528  strb w8,[x20, #0x18]
7102dd252c  mov w8,#0x4
7102dd2530  str w8,[x20, #0x14]
7102dd2534  ldr x8,[x20, #0x8]
7102dd2538  ldr x8,[x8, #0x320]
7102dd253c  mov x2,#0x575
7102dd2540  movk x2,#0xab7d, LSL #16
7102dd2544  mov x3,#0xe985
7102dd2548  movk x3,#0xe7b7, LSL #16
7102dd254c  movk x2,#0x10, LSL #32
7102dd2550  movk x3,#0x8, LSL #32
7102dd2554  add x1,x8,#0x48
7102dd2558  sub x0,x29,#0xb0
7102dd255c  sub x19,x29,#0xb0
7102dd2560  bl 0x71025efaa0
7102dd2564  add x9,x20,#0x20
7102dd2568  cmp x9,x19
7102dd256c  b.eq 0x7102dd25f8
7102dd2570  ldr x10,[x20, #0x30]
7102dd2574  ldur x8,[x29, #-0xa0]
7102dd2578  cmp x10,x8
7102dd257c  b.eq 0x7102dd25fc
7102dd2580  cbz x8,0x7102dd25d4
7102dd2584  cbz x10,0x7102dd25ac
7102dd2588  ldr x11,[x9]
7102dd258c  ldr x12,[x20, #0x28]
7102dd2590  str x11,[x12]
7102dd2594  str x12,[x11, #0x8]
7102dd2598  ldr x11,[x10, #0x10]
7102dd259c  sub x11,x11,#0x1
7102dd25a0  str x11,[x10, #0x10]
7102dd25a4  stp xzr,xzr,[x9, #0x8]
7102dd25a8  str xzr,[x9]
7102dd25ac  ldr x11,[x8, #0x20]
7102dd25b0  add x10,x8,#0x18
7102dd25b4  stp x10,x11,[x20, #0x20]
7102dd25b8  str x9,[x8, #0x20]
7102dd25bc  str x9,[x11]
7102dd25c0  ldr x9,[x8, #0x10]
7102dd25c4  add x9,x9,#0x1
7102dd25c8  str x9,[x8, #0x10]
7102dd25cc  str x8,[x20, #0x30]
7102dd25d0  b 0x7102dd25f8
7102dd25d4  cbz x10,0x7102dd25f8
7102dd25d8  ldp x8,x11,[x20, #0x20]
7102dd25dc  str x8,[x11]
7102dd25e0  str x11,[x8, #0x8]
7102dd25e4  ldr x8,[x10, #0x10]
7102dd25e8  sub x8,x8,#0x1
7102dd25ec  str x8,[x10, #0x10]
7102dd25f0  stp xzr,xzr,[x9, #0x8]
7102dd25f4  str xzr,[x9]
7102dd25f8  ldur x8,[x29, #-0xa0]
7102dd25fc  cbz x8,0x7102dd2620
7102dd2600  ldp x9,x10,[x29, #-0xb0]
7102dd2604  str x9,[x10]
7102dd2608  str x10,[x9, #0x8]
7102dd260c  ldr x9,[x8, #0x10]
7102dd2610  sub x9,x9,#0x1
7102dd2614  str x9,[x8, #0x10]
7102dd2618  stp xzr,xzr,[x29, #-0xa8]
7102dd261c  stur xzr,[x29, #-0xb0]
7102dd2620  ldrb w8,[x24, #0x973]
7102dd2624  cbz w8,0x7102dd27fc
7102dd2628  ldr s0,[x24, #0x9c8]
7102dd262c  fsub s0,s0,s8
7102dd2630  fmov s1,wzr
7102dd2634  fmax s1,s0,s1
7102dd2638  ldr w8,[x24, #0x9c4]
7102dd263c  cmp w8,#0x5
7102dd2640  str s1,[x24, #0x9c8]
7102dd2644  b.hi 0x7102dd27e8
7102dd2648  adrp x9,0x710451c000
7102dd264c  add x9,x9,#0x64
7102dd2650  ldrsw x8,[x9, x8, LSL #0x2]
7102dd2654  add x8,x8,x9
7102dd2658  br x8
7102dd265c  ldrb w9,[x24, #0x9cc]
7102dd2660  ldr x8,[x24, #0x340]
7102dd2664  cbz w9,0x7102dd2794
7102dd2668  ldp w9,w10,[x8]
7102dd266c  ldr s0,[x24, #0x840]
7102dd2670  ldr s1,[x24, #0x844]
7102dd2674  str w10,[x8]
7102dd2678  eor w9,w9,w9, LSL #0xb
7102dd267c  ldp w10,w11,[x8, #0x8]
7102dd2680  fsub s1,s1,s0
7102dd2684  eor w9,w9,w9, LSR #0x8
7102dd2688  eor w9,w9,w11
7102dd268c  eor w9,w9,w11, LSR #0x13
7102dd2690  ucvtf s2,w9
7102dd2694  stp w10,w11,[x8, #0x4]
7102dd2698  str w9,[x8, #0xc]
7102dd269c  adrp x8,0x7104473000
7102dd26a0  strb wzr,[x24, #0x9cc]
7102dd26a4  b 0x7102dd27cc
7102dd26a8  fcmp s0,#0.0
7102dd26ac  b.hi 0x7102dd26cc
7102dd26b0  ldr x0,[x24, #0x740]
7102dd26b4  ldr x8,[x0]
7102dd26b8  ldr x8,[x8, #0x28]
7102dd26bc  blr x8
7102dd26c0  tbz w0,#0x0,0x7102dd26cc
7102dd26c4  mov w8,#0x4
7102dd26c8  str w8,[x24, #0x9c4]
7102dd26cc  ldr x0,[x24, #0x740]
7102dd26d0  ldr x8,[x0]
7102dd26d4  ldr x8,[x8, #0x50]
7102dd26d8  blr x8
7102dd26dc  tbnz w0,#0x0,0x7102dd278c
7102dd26e0  b 0x7102dd27e8
7102dd26e4  fcmp s0,#0.0
7102dd26e8  b.hi 0x7102dd27e8
7102dd26ec  ldr x0,[x24, #0x740]
7102dd26f0  ldr x8,[x0]
7102dd26f4  ldr x8,[x8, #0x20]
7102dd26f8  blr x8
7102dd26fc  tbz w0,#0x0,0x7102dd27e8
7102dd2700  ldr x8,[x24, #0x340]
7102dd2704  ldp w9,w10,[x8]
7102dd2708  ldr s0,[x24, #0x850]
7102dd270c  ldr s1,[x24, #0x854]
7102dd2710  fsub s1,s1,s0
7102dd2714  str w10,[x8]
7102dd2718  ldp w10,w11,[x8, #0x8]
7102dd271c  eor w9,w9,w9, LSL #0xb
7102dd2720  eor w9,w9,w9, LSR #0x8
7102dd2724  eor w9,w9,w11
7102dd2728  eor w9,w9,w11, LSR #0x13
7102dd272c  ucvtf s2,w9
7102dd2730  stp w10,w11,[x8, #0x4]
7102dd2734  str w9,[x8, #0xc]
7102dd2738  adrp x8,0x7104473000
7102dd273c  fmul s1,s1,s2
7102dd2740  ldr s2,[x8, #0x710]
7102dd2744  mov w8,#0x2
7102dd2748  str w8,[x24, #0x9c4]
7102dd274c  fmul s4,s1,s2
7102dd2750  fadd s0,s0,s4
7102dd2754  str s0,[x24, #0x9c8]
7102dd2758  b 0x7102dd27e8
7102dd275c  ldr x0,[x24, #0x740]
7102dd2760  ldr x8,[x0]
7102dd2764  ldr x8,[x8, #0x40]
7102dd2768  blr x8
7102dd276c  tbz w0,#0x0,0x7102dd27e8
7102dd2770  orr w8,wzr,#0x3
7102dd2774  b 0x7102dd27e4
7102dd2778  ldr x0,[x24, #0x740]
7102dd277c  ldr x8,[x0]
7102dd2780  ldr x8,[x8, #0x48]
7102dd2784  blr x8
7102dd2788  tbz w0,#0x0,0x7102dd27e8
7102dd278c  str wzr,[x24, #0x9c4]
7102dd2790  b 0x7102dd27e8
7102dd2794  ldp w9,w10,[x8]
7102dd2798  ldr s0,[x24, #0x848]
7102dd279c  ldr s1,[x24, #0x84c]
7102dd27a0  str w10,[x8]
7102dd27a4  eor w9,w9,w9, LSL #0xb
7102dd27a8  ldp w10,w11,[x8, #0x8]
7102dd27ac  fsub s1,s1,s0
7102dd27b0  eor w9,w9,w9, LSR #0x8
7102dd27b4  eor w9,w9,w11
7102dd27b8  eor w9,w9,w11, LSR #0x13
7102dd27bc  ucvtf s2,w9
7102dd27c0  stp w10,w11,[x8, #0x4]
7102dd27c4  str w9,[x8, #0xc]
7102dd27c8  adrp x8,0x7104473000
7102dd27cc  fmul s1,s1,s2
7102dd27d0  ldr s2,[x8, #0x710]
7102dd27d4  fmul s4,s1,s2
7102dd27d8  fadd s0,s0,s4
7102dd27dc  str s0,[x24, #0x9c8]
7102dd27e0  mov w8,#0x1
7102dd27e4  str w8,[x24, #0x9c4]
7102dd27e8  ldr x0,[x24, #0x740]
7102dd27ec  ldr x8,[x0]
7102dd27f0  ldr x8,[x8, #0x10]
7102dd27f4  mov v0.16B,v8.16B
7102dd27f8  blr x8
7102dd27fc  ldrb w8,[x24, #0x7f4]
7102dd2800  cbz w8,0x7102dd2934
7102dd2804  adrp x9,0x7104465000
7102dd2808  ldr d0,[x9, #0x510]
7102dd280c  adrp x9,0x7104466000
7102dd2810  ldr q3,[x9, #0xff0]
7102dd2814  adrp x9,0x7104473000
7102dd2818  ldr s9,[x9, #0xbcc]
7102dd281c  adrp x9,0x7104472000
7102dd2820  ldr s10,[x9, #0xf8c]
7102dd2824  adrp x9,0x7104472000
7102dd2828  ldr s11,[x9, #0x940]
7102dd282c  adrp x9,0x7104472000
7102dd2830  faddp v5.2S,v0.2S,v0.2S
7102dd2834  frsqrte v1.2S,v5.2S
7102dd2838  fmul v2.2S,v5.2S,v1.2S
7102dd283c  frsqrts v2.2S,v2.2S,v1.2S
7102dd2840  fmul v1.2S,v1.2S,v2.2S
7102dd2844  fmul v2.2S,v5.2S,v1.2S
7102dd2848  frsqrts v2.2S,v2.2S,v1.2S
7102dd284c  fsqrt s15,s5
7102dd2850  fcmeq v0.2S,v5.2S,#0.0
7102dd2854  mvn v0.8B,v0.8B
7102dd2858  fmul v1.2S,v1.2S,v2.2S
7102dd285c  fmul v1.2S,v5.2S,v1.2S
7102dd2860  ldr s12,[x9, #0x468]
7102dd2864  adrp x9,0x710446b000
7102dd2868  ldr q4,[x9, #0x40]
7102dd286c  and v6.8B,v1.8B,v0.8B
7102dd2870  fmov s13,0x3f800000
7102dd2874  fmov s14,wzr
7102dd2878  movi v7.2D,#0x0
7102dd287c  mov x20,xzr
7102dd2880  mov x21,xzr
7102dd2884  stp q4,q3,[sp, #0xa0]
7102dd2888  stp q6,q5,[sp, #0x80]
7102dd288c  ldr x9,[x24, #0x9d8]
7102dd2890  add x19,x9,x20
7102dd2894  ldr w9,[x19, #0xc]
7102dd2898  cmp w9,#0x3
7102dd289c  b.ne 0x7102dd2924
7102dd28a0  ldr s0,[x19, #0x34]
7102dd28a4  fmin s1,s0,s13
7102dd28a8  fcmp s0,#0.0
7102dd28ac  fcsel s0,s14,s1,mi
7102dd28b0  fcmp s5,#0.0
7102dd28b4  fmul s16,s0,v6.S[0x0]
7102dd28b8  mov v0.16B,v3.16B
7102dd28bc  b.eq 0x7102dd2900
7102dd28c0  fcmp s15,s15
7102dd28c4  mov v0.16B,v15.16B
7102dd28c8  b.vc 0x7102dd28e8
7102dd28cc  mov v0.16B,v5.16B
7102dd28d0  str q16,[sp, #0xc0]
7102dd28d4  bl 0x71039c0840
7102dd28d8  ldp q3,q16,[sp, #0xb0]
7102dd28dc  ldp q6,q5,[sp, #0x80]
7102dd28e0  movi v7.2D,#0x0
7102dd28e4  ldr q4,[sp, #0xa0]
7102dd28e8  fdiv s1,s13,s0
7102dd28ec  mov v0.16B,v7.16B
7102dd28f0  fmul s2,s1,s9
7102dd28f4  fmul s1,s1,s10
7102dd28f8  mov v0.S[0x0],v2.S[0x0]
7102dd28fc  mov v0.S[0x1],v1.S[0x0]
7102dd2900  fmul v0.4S,v0.4S,v16.S[0x0]
7102dd2904  fadd s1,s0,s11
7102dd2908  dup s0,v0.S[0x1]
7102dd290c  mov v2.16B,v4.16B
7102dd2910  mov v2.S[0x0],v1.S[0x0]
7102dd2914  fadd s0,s0,s12
7102dd2918  mov v2.S[0x1],v0.S[0x0]
7102dd291c  str q2,[x19, #0x20]
7102dd2920  ldrb w8,[x24, #0x7f4]
7102dd2924  add x21,x21,#0x1
7102dd2928  add x20,x20,#0x90
7102dd292c  cmp x21,w8, UXTB 
7102dd2930  b.cc 0x7102dd288c
7102dd2934  ldrb w8,[x24, #0x974]
7102dd2938  cbz w8,0x7102dd31a8
7102dd293c  ldr x19,[x24, #0x788]
7102dd2940  ldr x20,[x24, #0x790]
7102dd2944  cmp x19,x20
7102dd2948  b.eq 0x7102dd2960
7102dd294c  ldr x0,[x19], #0x8
7102dd2950  mov v0.16B,v8.16B
7102dd2954  bl 0x7102ddb6f0
7102dd2958  cmp x20,x19
7102dd295c  b.ne 0x7102dd294c
7102dd2960  ldr w8,[x24, #0x9d0]
7102dd2964  cmp w8,#0x2
7102dd2968  str x24,[sp, #0xc0]
7102dd296c  b.eq 0x7102dd2f0c
7102dd2970  cmp w8,#0x1
7102dd2974  b.eq 0x7102dd29e8
7102dd2978  mov x13,x24
7102dd297c  cbnz w8,0x7102dd2edc
7102dd2980  ldr w8,[x13, #0x9a0]
7102dd2984  cmp w8,#0x2
7102dd2988  b.ne 0x7102dd2edc
7102dd298c  ldr x8,[x13, #0x340]
7102dd2990  ldp w9,w10,[x8]
7102dd2994  ldr s0,[x13, #0x7b8]
7102dd2998  ldr s1,[x13, #0x7bc]
7102dd299c  fsub s1,s1,s0
7102dd29a0  str w10,[x8]
7102dd29a4  ldp w10,w11,[x8, #0x8]
7102dd29a8  eor w9,w9,w9, LSL #0xb
7102dd29ac  eor w9,w9,w9, LSR #0x8
7102dd29b0  eor w9,w9,w11
7102dd29b4  eor w9,w9,w11, LSR #0x13
7102dd29b8  ucvtf s2,w9
7102dd29bc  stp w10,w11,[x8, #0x4]
7102dd29c0  str w9,[x8, #0xc]
7102dd29c4  adrp x8,0x7104473000
7102dd29c8  fmul s1,s1,s2
7102dd29cc  ldr s2,[x8, #0x710]
7102dd29d0  mov w8,#0x1
7102dd29d4  str w8,[x13, #0x9d0]
7102dd29d8  fmul s4,s1,s2
7102dd29dc  fadd s0,s0,s4
7102dd29e0  str s0,[x13, #0x9d4]
7102dd29e4  b 0x7102dd2edc
7102dd29e8  ldr w8,[x24, #0x9a0]
7102dd29ec  cmp w8,#0x4
7102dd29f0  b.eq 0x7102dd2ed4
7102dd29f4  cmp w8,#0x3
7102dd29f8  b.ne 0x7102dd2a20
7102dd29fc  ldr s0,[x24, #0x9a4]
7102dd2a00  ldr s1,[x24, #0x7f8]
7102dd2a04  fcmp s0,s1
7102dd2a08  b.ls 0x7102dd2ed4
7102dd2a0c  ldr x8,[x24, #0x738]
7102dd2a10  ldr s0,[x8, #0xb0]
7102dd2a14  ldr s1,[x24, #0x7fc]
7102dd2a18  fcmp s0,s1
7102dd2a1c  b.ls 0x7102dd2ed4
7102dd2a20  ldr s0,[x24, #0x9d4]
7102dd2a24  fsub s0,s0,s8
7102dd2a28  fcmp s0,#0.0
7102dd2a2c  mov x13,x24
7102dd2a30  str s0,[x24, #0x9d4]
7102dd2a34  b.hi 0x7102dd2edc
7102dd2a38  adrp x8,0x7105314000
7102dd2a3c  add x8,x8,#0x4d8
7102dd2a40  ldarb w8,[x8]
7102dd2a44  tbz w8,#0x0,0x7102dd3e34
7102dd2a48  adrp x8,0x71052c5000
7102dd2a4c  ldrsb w8,[x8, #0x204]
7102dd2a50  ldr x13,[sp, #0xc0]
7102dd2a54  cmp w8,#0x1
7102dd2a58  b.lt 0x7102dd2edc
7102dd2a5c  ldr x8,[x13, #0x340]
7102dd2a60  ldp w9,w10,[x8]
7102dd2a64  ldr s0,[x13, #0x7c0]
7102dd2a68  ldr s1,[x13, #0x7c4]
7102dd2a6c  fsub s1,s1,s0
7102dd2a70  eor w9,w9,w9, LSL #0xb
7102dd2a74  str w10,[x8]
7102dd2a78  eor w9,w9,w9, LSR #0x8
7102dd2a7c  ldp w10,w11,[x8, #0x8]
7102dd2a80  eor w9,w9,w11
7102dd2a84  eor w9,w9,w11, LSR #0x13
7102dd2a88  ucvtf s2,w9
7102dd2a8c  stp w10,w11,[x8, #0x4]
7102dd2a90  str w9,[x8, #0xc]
7102dd2a94  adrp x8,0x7104473000
7102dd2a98  ldr s9,[x8, #0x710]
7102dd2a9c  ldr x8,[x13, #0x340]
7102dd2aa0  fmul s1,s1,s2
7102dd2aa4  fmul s2,s1,s9
7102dd2aa8  fadd s0,s0,s2
7102dd2aac  str s0,[x13, #0x9d4]
7102dd2ab0  ldp w9,w10,[x8]
7102dd2ab4  str w10,[x8]
7102dd2ab8  ldp w10,w11,[x8, #0x8]
7102dd2abc  eor w9,w9,w9, LSL #0xb
7102dd2ac0  eor w9,w9,w9, LSR #0x8
7102dd2ac4  eor w9,w9,w11
7102dd2ac8  eor w9,w9,w11, LSR #0x13
7102dd2acc  ucvtf s0,w9
7102dd2ad0  stp w10,w11,[x8, #0x4]
7102dd2ad4  str w9,[x8, #0xc]
7102dd2ad8  ldr s1,[x13, #0x7c8]
7102dd2adc  fmul s0,s0,s9
7102dd2ae0  fcmp s0,s1
7102dd2ae4  b.gt 0x7102dd2edc
7102dd2ae8  ldrb w22,[x13, #0x7f4]
7102dd2aec  cbz x22,0x7102dd2edc
7102dd2af0  adrp x9,0x7104465000
7102dd2af4  ldr d0,[x9, #0x510]
7102dd2af8  adrp x9,0x7104472000
7102dd2afc  ldr s21,[x9, #0x940]
7102dd2b00  faddp v22.2S,v0.2S,v0.2S
7102dd2b04  frsqrte v0.2S,v22.2S
7102dd2b08  fmul v1.2S,v22.2S,v0.2S
7102dd2b0c  frsqrts v1.2S,v1.2S,v0.2S
7102dd2b10  fmul v0.2S,v0.2S,v1.2S
7102dd2b14  fmul v1.2S,v22.2S,v0.2S
7102dd2b18  frsqrts v1.2S,v1.2S,v0.2S
7102dd2b1c  fsqrt s24,s22
7102dd2b20  adrp x8,0x7104472000
7102dd2b24  ldr s17,[x8, #0x6b8]
7102dd2b28  adrp x8,0x7104472000
7102dd2b2c  ldr s20,[x8, #0xf8c]
7102dd2b30  adrp x8,0x7104472000
7102dd2b34  ldr s12,[x8, #0xeec]
7102dd2b38  adrp x8,0x7104466000
7102dd2b3c  ldr q23,[x8, #0xff0]
7102dd2b40  adrp x8,0x7104468000
7102dd2b44  ldr q26,[x8, #0xca0]
7102dd2b48  adrp x8,0x710446a000
7102dd2b4c  adrp x10,0x7104471000
7102dd2b50  ldr q27,[x8, #0x360]
7102dd2b54  adrp x8,0x7104465000
7102dd2b58  ldr s11,[x10, #0xba0]
7102dd2b5c  adrp x10,0x7104473000
7102dd2b60  ldr q28,[x8, #0x6b0]
7102dd2b64  adrp x8,0x710446a000
7102dd2b68  ldr s19,[x10, #0xbcc]
7102dd2b6c  ldr q29,[x8, #0x350]
7102dd2b70  fmov s13,0x3f400000
7102dd2b74  fmov s14,0x3f800000
7102dd2b78  movi v18.2D,#0x0
7102dd2b7c  mov x26,#0x4
7102dd2b80  mov w24,#0x50000000
7102dd2b84  mov w25,#0x90
7102dd2b88  movk x26,#0x3, LSL #32
7102dd2b8c  orr w27,wzr,#0x3f000000
7102dd2b90  mov w28,#0x1
7102dd2b94  fmul v0.2S,v0.2S,v1.2S
7102dd2b98  fcmeq v1.2S,v22.2S,#0.0
7102dd2b9c  fmul v0.2S,v22.2S,v0.2S
7102dd2ba0  mvn v1.8B,v1.8B
7102dd2ba4  fmov s16,0x3e800000
7102dd2ba8  fmov s10,0x3f000000
7102dd2bac  and v25.8B,v0.8B,v1.8B
7102dd2bb0  mov x23,xzr
7102dd2bb4  ldr x21,[x13, #0x9d8]
7102dd2bb8  madd x20,x23,x25,x21
7102dd2bbc  ldr w8,[x20]
7102dd2bc0  cmp w8,#0x1
7102dd2bc4  b.eq 0x7102dd2c5c
7102dd2bc8  cbnz w8,0x7102dd2ec0
7102dd2bcc  madd x8,x23,x25,x21
7102dd2bd0  ldr x13,[sp, #0xc0]
7102dd2bd4  str wzr,[x20]
7102dd2bd8  stur xzr,[x8, #0x4]
7102dd2bdc  stur x26,[x8, #0xc]
7102dd2be0  str wzr,[x8, #0x14]
7102dd2be4  ldr w9,[x13, #0x7ec]
7102dd2be8  str w9,[x8, #0x18]
7102dd2bec  ldr w9,[x13, #0x7e8]
7102dd2bf0  str w9,[x8, #0x1c]
7102dd2bf4  stp xzr,xzr,[x8, #0x20]
7102dd2bf8  ldr x9,[x13, #0x340]
7102dd2bfc  ldp w10,w11,[x9]
7102dd2c00  ldr s0,[x13, #0x8c0]
7102dd2c04  str w11,[x9]
7102dd2c08  eor w10,w10,w10, LSL #0xb
7102dd2c0c  ldp w11,w12,[x9, #0x8]
7102dd2c10  eor w10,w10,w10, LSR #0x8
7102dd2c14  eor w10,w10,w12
7102dd2c18  eor w10,w10,w12, LSR #0x13
7102dd2c1c  stp w11,w12,[x9, #0x4]
7102dd2c20  ucvtf s1,w10
7102dd2c24  fmul s0,s0,s1
7102dd2c28  fmul s1,s0,s9
7102dd2c2c  fadd s0,s1,s12
7102dd2c30  str w10,[x9, #0xc]
7102dd2c34  stp q26,q27,[x8, #0x40]
7102dd2c38  str s0,[x8, #0x30]
7102dd2c3c  stp q28,q29,[x8, #0x60]
7102dd2c40  str w27,[x8, #0x34]
7102dd2c44  strb wzr,[x8, #0x80]
7102dd2c48  str w24,[x8, #0x84]
7102dd2c4c  str w28,[x20]
7102dd2c50  ldr x9,[x13, #0x9d8]
7102dd2c54  cbnz x9,0x7102dd2c64
7102dd2c58  b 0x7102dd2c8c
7102dd2c5c  mov x9,x21
7102dd2c60  cbz x9,0x7102dd2c8c
7102dd2c64  ldr x8,[sp, #0xc0]
7102dd2c68  ldrb w12,[x8, #0x7f4]
7102dd2c6c  cbz x12,0x7102dd2c8c
7102dd2c70  and x10,x12,#0x1
7102dd2c74  cmp w12,#0x1
7102dd2c78  b.ne 0x7102dd2c94
7102dd2c7c  mov x11,xzr
7102dd2c80  mov w8,wzr
7102dd2c84  cbnz x10,0x7102dd2ce8
7102dd2c88  b 0x7102dd2d08
7102dd2c8c  mov w8,wzr
7102dd2c90  b 0x7102dd2d08
7102dd2c94  mov x11,xzr
7102dd2c98  mov w8,wzr
7102dd2c9c  sub x12,x12,x10
7102dd2ca0  mov x13,x9
7102dd2ca4  ldr w14,[x13]
7102dd2ca8  cmp w14,#0x3
7102dd2cac  b.ne 0x7102dd2cbc
7102dd2cb0  ldr w14,[x13, #0xc]
7102dd2cb4  cmp w14,#0x3
7102dd2cb8  cinc w8,w8,cc
7102dd2cbc  ldr w14,[x13, #0x90]
7102dd2cc0  cmp w14,#0x3
7102dd2cc4  b.ne 0x7102dd2cd4
7102dd2cc8  ldr w14,[x13, #0x9c]
7102dd2ccc  cmp w14,#0x3
7102dd2cd0  cinc w8,w8,cc
7102dd2cd4  add x11,x11,#0x2
7102dd2cd8  add x13,x13,#0x120
7102dd2cdc  cmp x12,x11
7102dd2ce0  b.ne 0x7102dd2ca4
7102dd2ce4  cbz x10,0x7102dd2d08
7102dd2ce8  mul x10,x11,x25
7102dd2cec  ldr w10,[x9, x10, LSL #0x0]
7102dd2cf0  cmp w10,#0x3
7102dd2cf4  b.ne 0x7102dd2d08
7102dd2cf8  madd x9,x11,x25,x9
7102dd2cfc  ldr w9,[x9, #0xc]
7102dd2d00  cmp w9,#0x3
7102dd2d04  cinc w8,w8,cc
7102dd2d08  ldr x9,[sp, #0xc0]
7102dd2d0c  ldr x9,[x9, #0x340]
7102dd2d10  ldp w10,w11,[x9]
7102dd2d14  str w11,[x9]
7102dd2d18  ldp w11,w12,[x9, #0x8]
7102dd2d1c  eor w10,w10,w10, LSL #0xb
7102dd2d20  eor w10,w10,w10, LSR #0x8
7102dd2d24  eor w10,w10,w12
7102dd2d28  eor w10,w10,w12, LSR #0x13
7102dd2d2c  ucvtf s0,w10
7102dd2d30  fmul s0,s0,s9
7102dd2d34  fcmp s0,s16
7102dd2d38  stp w11,w12,[x9, #0x4]
7102dd2d3c  str w10,[x9, #0xc]
7102dd2d40  b.pl 0x7102dd2d58
7102dd2d44  cbnz w8,0x7102dd2ec0
7102dd2d48  ldr x8,[sp, #0xc0]
7102dd2d4c  ldr w8,[x8, #0x9b0]
7102dd2d50  cbz w8,0x7102dd2ec0
7102dd2d54  b 0x7102dd3d28
7102dd2d58  fcmp s0,s10
7102dd2d5c  b.pl 0x7102dd2d78
7102dd2d60  cbnz w8,0x7102dd2ec0
7102dd2d64  ldr x8,[sp, #0xc0]
7102dd2d68  ldr w8,[x8, #0x9b0]
7102dd2d6c  cmp w8,#0x1
7102dd2d70  b.eq 0x7102dd2ec0
7102dd2d74  b 0x7102dd3d3c
7102dd2d78  fcmp s0,s13
7102dd2d7c  b.pl 0x7102dd2d98
7102dd2d80  cbnz w8,0x7102dd2ec0
7102dd2d84  ldr x8,[sp, #0xc0]
7102dd2d88  ldr w8,[x8, #0x9b0]
7102dd2d8c  cmp w8,#0x2
7102dd2d90  b.eq 0x7102dd2ec0
7102dd2d94  b 0x7102dd3d50
7102dd2d98  ldr x12,[sp, #0xc0]
7102dd2d9c  ldr x9,[x12, #0x340]
7102dd2da0  ldp w8,w10,[x9]
7102dd2da4  eor w8,w8,w8, LSL #0xb
7102dd2da8  str w10,[x9]
7102dd2dac  ldp w10,w11,[x9, #0x8]
7102dd2db0  eor w8,w8,w8, LSR #0x8
7102dd2db4  eor w8,w8,w11
7102dd2db8  eor w8,w8,w11, LSR #0x13
7102dd2dbc  stp w10,w11,[x9, #0x4]
7102dd2dc0  str w8,[x9, #0xc]
7102dd2dc4  ldr x9,[x12, #0x9d8]
7102dd2dc8  cbz x9,0x7102dd2ec0
7102dd2dcc  ucvtf s0,w8
7102dd2dd0  fmul s0,s0,s9
7102dd2dd4  fmul s15,s0,s11
7102dd2dd8  fcmp s22,#0.0
7102dd2ddc  mov v1.16B,v23.16B
7102dd2de0  b.eq 0x7102dd2e60
7102dd2de4  fcmp s24,s24
7102dd2de8  mov v0.16B,v24.16B
7102dd2dec  b.vc 0x7102dd2e48
7102dd2df0  mov v0.16B,v22.16B
7102dd2df4  str s17,[sp, #0xb0]
7102dd2df8  str s19,[sp, #0xa0]
7102dd2dfc  str s20,[sp, #0x90]
7102dd2e00  str s21,[sp, #0x80]
7102dd2e04  str s24,[sp, #0x5c]
7102dd2e08  str q29,[sp]
7102dd2e0c  stp q23,q22,[sp, #0x60]
7102dd2e10  stp q26,q25,[sp, #0x30]
7102dd2e14  stp q28,q27,[sp, #0x10]
7102dd2e18  bl 0x71039c0840
7102dd2e1c  ldp q29,q28,[sp]
7102dd2e20  ldp q27,q26,[sp, #0x20]
7102dd2e24  movi v18.2D,#0x0
7102dd2e28  fmov s16,0x3e800000
7102dd2e2c  ldr q25,[sp, #0x40]
7102dd2e30  ldr s24,[sp, #0x5c]
7102dd2e34  ldr s21,[sp, #0x80]
7102dd2e38  ldr s20,[sp, #0x90]
7102dd2e3c  ldr s19,[sp, #0xa0]
7102dd2e40  ldr s17,[sp, #0xb0]
7102dd2e44  ldp q23,q22,[sp, #0x60]
7102dd2e48  fdiv s0,s14,s0
7102dd2e4c  fmul s2,s0,s19
7102dd2e50  mov v1.16B,v18.16B
7102dd2e54  mov v1.S[0x0],v2.S[0x0]
7102dd2e58  fmul s0,s0,s20
7102dd2e5c  mov v1.S[0x1],v0.S[0x0]
7102dd2e60  ldr x8,[sp, #0xc0]
7102dd2e64  fadd s0,s15,s17
7102dd2e68  ldrb w8,[x8, #0x7f4]
7102dd2e6c  cbz x8,0x7102dd38f0
7102dd2e70  fmin s2,s0,s14
7102dd2e74  fmul s2,s2,v25.S[0x0]
7102dd2e78  ldr x9,[sp, #0xc0]
7102dd2e7c  fmul v1.4S,v1.4S,v2.S[0x0]
7102dd2e80  fadd s1,s1,s21
7102dd2e84  ldr x9,[x9, #0x9d8]
7102dd2e88  add x9,x9,#0x20
7102dd2e8c  ldur w10,[x9, #-0x20]
7102dd2e90  cmp w10,#0x3
7102dd2e94  b.ne 0x7102dd2eb0
7102dd2e98  ldr s2,[x9]
7102dd2e9c  ldr x10,[sp, #0xc0]
7102dd2ea0  fabd s2,s1,s2
7102dd2ea4  ldr s3,[x10, #0x7f0]
7102dd2ea8  fcmp s2,s3
7102dd2eac  b.mi 0x7102dd2ec0
7102dd2eb0  add x9,x9,#0x90
7102dd2eb4  subs x8,x8,#0x1
7102dd2eb8  b.ne 0x7102dd2e8c
7102dd2ebc  b 0x7102dd38f0
7102dd2ec0  ldr x13,[sp, #0xc0]
7102dd2ec4  add x23,x23,#0x1
7102dd2ec8  cmp x23,x22
7102dd2ecc  b.cc 0x7102dd2bb4
7102dd2ed0  b 0x7102dd2edc
7102dd2ed4  str wzr,[x24, #0x9d0]
7102dd2ed8  mov x13,x24
7102dd2edc  ldr x19,[x13, #0x770]
7102dd2ee0  ldr x20,[x13, #0x778]
7102dd2ee4  cmp x19,x20
7102dd2ee8  mov x24,x13
7102dd2eec  b.eq 0x7102dd2f0c
7102dd2ef0  ldr x0,[x19]
7102dd2ef4  cbz x0,0x7102dd2f00
7102dd2ef8  mov v0.16B,v8.16B
7102dd2efc  bl 0x7102ddad90
7102dd2f00  add x19,x19,#0x8
7102dd2f04  cmp x20,x19
7102dd2f08  b.ne 0x7102dd2ef0
7102dd2f0c  ldr x28,[x24, #0x9d8]
7102dd2f10  cbz x28,0x7102dd3088
7102dd2f14  ldrb w8,[x24, #0x7f4]
7102dd2f18  cbz w8,0x7102dd3088
7102dd2f1c  mov w25,#0x50000000
7102dd2f20  add x9,x24,#0x9e8
7102dd2f24  mov w26,#0x1
7102dd2f28  mov w27,#0x84
7102dd2f2c  str x9,[sp, #0xb0]
7102dd2f30  b 0x7102dd2f40
7102dd2f34  ldr x28,[x24, #0x9d8]
7102dd2f38  add x26,x26,#0x1
7102dd2f3c  add x27,x27,#0x90
7102dd2f40  ldr w9,[x28, x27, LSL #0x0]
7102dd2f44  cmp w9,w25
7102dd2f48  b.eq 0x7102dd3074
7102dd2f4c  ldr x10,[x24, #0x9f0]
7102dd2f50  ldr x8,[x24, #0x9f8]
7102dd2f54  cmp x10,x8
7102dd2f58  b.eq 0x7102dd2f70
7102dd2f5c  str w9,[x10]
7102dd2f60  ldr x8,[x24, #0x9f0]
7102dd2f64  add x8,x8,#0x4
7102dd2f68  str x8,[x24, #0x9f0]
7102dd2f6c  b 0x7102dd3068
7102dd2f70  ldr x11,[sp, #0xb0]
7102dd2f74  ldr x21,[x11]
7102dd2f78  sub x22,x10,x21
7102dd2f7c  asr x20,x22,#0x2
7102dd2f80  add x10,x20,#0x1
7102dd2f84  lsr x11,x10,#0x3e
7102dd2f88  cbnz x11,0x7102dd3e74
7102dd2f8c  sub x8,x8,x21
7102dd2f90  asr x11,x8,#0x2
7102dd2f94  orr x12,xzr,#0x1ffffffffffffffe
7102dd2f98  cmp x11,x12
7102dd2f9c  b.hi 0x7102dd2fbc
7102dd2fa0  asr x8,x8,#0x1
7102dd2fa4  cmp x8,x10
7102dd2fa8  csel x19,x10,x8,cc
7102dd2fac  cbz x19,0x7102dd3080
7102dd2fb0  lsr x8,x19,#0x3e
7102dd2fb4  cbz x8,0x7102dd2fc0
7102dd2fb8  b 0x7102dd3e7c
7102dd2fbc  orr x19,xzr,#0x3fffffffffffffff
7102dd2fc0  lsl x8,x19,#0x2
7102dd2fc4  cmp x8,#0x0
7102dd2fc8  csinc x24,x8,xzr,ne
7102dd2fcc  mov w0,#0x10
7102dd2fd0  mov x1,x24
7102dd2fd4  bl 0x710392e290
7102dd2fd8  mov x23,x0
7102dd2fdc  cbnz x0,0x7102dd3024
7102dd2fe0  adrp x8,0x7105332000
7102dd2fe4  ldr x0,[x8, #0xf00]
7102dd2fe8  cbz x0,0x7102dd3020
7102dd2fec  str wzr,[sp, #0xe0]
7102dd2ff0  stur x24,[x29, #-0xb0]
7102dd2ff4  ldr x8,[x0]
7102dd2ff8  ldr x8,[x8, #0x30]
7102dd2ffc  add x1,sp,#0xe0
7102dd3000  sub x2,x29,#0xb0
7102dd3004  blr x8
7102dd3008  tbz w0,#0x0,0x7102dd3020
7102dd300c  mov w0,#0x10
7102dd3010  mov x1,x24
7102dd3014  bl 0x710392e290
7102dd3018  mov x23,x0
7102dd301c  cbnz x0,0x7102dd3024
7102dd3020  mov x23,xzr
7102dd3024  ldr w9,[x28, x27, LSL #0x0]
7102dd3028  ldr x24,[sp, #0xc0]
7102dd302c  add x20,x23,x20, LSL #0x2
7102dd3030  add x19,x23,x19, LSL #0x2
7102dd3034  cmp x22,#0x1
7102dd3038  str w9,[x20], #0x4
7102dd303c  b.lt 0x7102dd3050
7102dd3040  mov x0,x23
7102dd3044  mov x1,x21
7102dd3048  mov x2,x22
7102dd304c  bl 0x71039c00e0
7102dd3050  str x23,[x24, #0x9e8]
7102dd3054  str x20,[x24, #0x9f0]
7102dd3058  str x19,[x24, #0x9f8]
7102dd305c  cbz x21,0x7102dd3068
7102dd3060  mov x0,x21
7102dd3064  bl 0x710392eb40
7102dd3068  ldr x8,[x24, #0x9d8]
7102dd306c  str w25,[x8, x27, LSL #0x0]
7102dd3070  ldrb w8,[x24, #0x7f4]
7102dd3074  cmp x26,w8, UXTB 
7102dd3078  b.cc 0x7102dd2f34
7102dd307c  b 0x7102dd3088
7102dd3080  mov x23,xzr
7102dd3084  b 0x7102dd302c
7102dd3088  ldr w8,[x24, #0xdc]
7102dd308c  cmp w8,#0x2
7102dd3090  b.ne 0x7102dd31a8
7102dd3094  ldr x8,[x24, #0x9f0]
7102dd3098  ldr x9,[x24, #0x9e8]
7102dd309c  cmp x8,x9
7102dd30a0  b.eq 0x7102dd31a8
7102dd30a4  adrp x22,0x71052c4000
7102dd30a8  ldr x8,[x22, #0x70]
7102dd30ac  ldp x10,x11,[x8, #0x10]
7102dd30b0  subs x10,x11,x10
7102dd30b4  b.eq 0x7102dd31a4
7102dd30b8  adrp x25,0x71052a8000
7102dd30bc  adrp x26,0x71052a8000
7102dd30c0  ldr x25,[x25, #0xa88]
7102dd30c4  ldr x26,[x26, #0xaf8]
7102dd30c8  asr x9,x10,#0x3
7102dd30cc  mov x20,#0xb067
7102dd30d0  movk x20,#0xa06b, LSL #16
7102dd30d4  mov x23,xzr
7102dd30d8  sub x24,x9,#0x1
7102dd30dc  movk x20,#0xf, LSL #32
7102dd30e0  b 0x7102dd30ec
7102dd30e4  ldr x8,[x22, #0x70]
7102dd30e8  add x23,x23,#0x1
7102dd30ec  ldr x8,[x8, #0x10]
7102dd30f0  ldr x21,[x8, x23, LSL #0x3]
7102dd30f4  cbz x21,0x7102dd3194
7102dd30f8  ldr w8,[x21, #0xc]
7102dd30fc  cmp w8,#0x9f
7102dd3100  b.ne 0x7102dd3194
7102dd3104  ldrb w8,[x21, #0x3a]
7102dd3108  cmp w8,#0x4
7102dd310c  b.cc 0x7102dd3180
7102dd3110  ldr x0,[x21, #0xd0]
7102dd3114  ldr x8,[x0]
7102dd3118  ldr x8,[x8, #0x60]
7102dd311c  blr x8
7102dd3120  ldp x8,x9,[x0]
7102dd3124  ldr q0,[x25]
7102dd3128  stp x8,x9,[x29, #-0xb0]
7102dd312c  ldr x8,[sp, #0xc0]
7102dd3130  ldr x1,[x8, #0x320]
7102dd3134  sub x0,x29,#0xc8
7102dd3138  sub x3,x29,#0xb0
7102dd313c  str q0,[sp, #0xe0]
7102dd3140  ldr q0,[x26]
7102dd3144  add x4,sp,#0xe0
7102dd3148  add x5,sp,#0xd0
7102dd314c  mov x2,x20
7102dd3150  str q0,[sp, #0xd0]
7102dd3154  bl 0x71026277a0
7102dd3158  ldur x8,[x29, #-0xb8]
7102dd315c  cbz x8,0x7102dd3180
7102dd3160  ldp x9,x10,[x29, #-0xc8]
7102dd3164  str x9,[x10]
7102dd3168  str x10,[x9, #0x8]
7102dd316c  ldr x9,[x8, #0x10]
7102dd3170  sub x9,x9,#0x1
7102dd3174  str x9,[x8, #0x10]
7102dd3178  stp xzr,xzr,[x29, #-0xc0]
7102dd317c  stur xzr,[x29, #-0xc8]
7102dd3180  ldr x8,[x21]
7102dd3184  ldr x8,[x8, #0x520]
7102dd3188  mov x0,x21
7102dd318c  mov w1,wzr
7102dd3190  blr x8
7102dd3194  cmp x24,x23
7102dd3198  b.ne 0x7102dd30e4
7102dd319c  ldr x24,[sp, #0xc0]
7102dd31a0  ldr x9,[x24, #0x9e8]
7102dd31a4  str x9,[x24, #0x9f0]
7102dd31a8  ldrb w8,[x24, #0x975]
7102dd31ac  cbz w8,0x7102dd39c8
7102dd31b0  adrp x8,0x7105314000
7102dd31b4  add x8,x8,#0x4d8
7102dd31b8  ldarb w8,[x8]
7102dd31bc  tbz w8,#0x0,0x7102dd3db4
7102dd31c0  adrp x8,0x71052c5000
7102dd31c4  ldrsb w8,[x8, #0x204]
7102dd31c8  cmp w8,#0x1
7102dd31cc  b.lt 0x7102dd39c8
7102dd31d0  ldrb w8,[x24, #0x975]
7102dd31d4  cbz w8,0x7102dd39c8
7102dd31d8  ldr s0,[x24, #0x9a4]
7102dd31dc  fsub s1,s0,s8
7102dd31e0  fmov s0,wzr
7102dd31e4  fmax s1,s1,s0
7102dd31e8  ldr w8,[x24, #0x9a0]
7102dd31ec  cmp w8,#0x6
7102dd31f0  str s1,[x24, #0x9a4]
7102dd31f4  b.hi 0x7102dd39bc
7102dd31f8  adrp x9,0x710451c000
7102dd31fc  add x9,x9,#0x7c
7102dd3200  ldrsw x8,[x9, x8, LSL #0x2]
7102dd3204  add x8,x8,x9
7102dd3208  br x8
7102dd320c  ldrb w9,[x24, #0x9ac]
7102dd3210  ldr x8,[x24, #0x340]
7102dd3214  cbz w9,0x7102dd34a4
7102dd3218  ldp w9,w10,[x8]
7102dd321c  ldr s0,[x24, #0x800]
7102dd3220  ldr s1,[x24, #0x804]
7102dd3224  str w10,[x8]
7102dd3228  eor w9,w9,w9, LSL #0xb
7102dd322c  ldp w10,w11,[x8, #0x8]
7102dd3230  fsub s1,s1,s0
7102dd3234  eor w9,w9,w9, LSR #0x8
7102dd3238  eor w9,w9,w11
7102dd323c  eor w9,w9,w11, LSR #0x13
7102dd3240  ucvtf s2,w9
7102dd3244  stp w10,w11,[x8, #0x4]
7102dd3248  str w9,[x8, #0xc]
7102dd324c  adrp x8,0x7104473000
7102dd3250  strb wzr,[x24, #0x9ac]
7102dd3254  b 0x7102dd34dc
7102dd3258  fcmp s1,#0.0
7102dd325c  b.ne 0x7102dd39bc
7102dd3260  ldr x8,[x24, #0x340]
7102dd3264  ldp w9,w10,[x8]
7102dd3268  ldr s1,[x24, #0x810]
7102dd326c  str w10,[x8]
7102dd3270  eor w9,w9,w9, LSL #0xb
7102dd3274  ldp w10,w11,[x8, #0x8]
7102dd3278  eor w9,w9,w9, LSR #0x8
7102dd327c  eor w9,w9,w11
7102dd3280  eor w9,w9,w11, LSR #0x13
7102dd3284  stp w10,w11,[x8, #0x4]
7102dd3288  ucvtf s2,w9
7102dd328c  str w9,[x8, #0xc]
7102dd3290  adrp x8,0x7104473000
7102dd3294  ldr s0,[x8, #0x710]
7102dd3298  ldr x8,[x24, #0x340]
7102dd329c  fmul s2,s2,s0
7102dd32a0  fcmp s1,s2
7102dd32a4  b.gt 0x7102dd377c
7102dd32a8  ldp w9,w10,[x8]
7102dd32ac  str w10,[x8]
7102dd32b0  ldp w10,w11,[x8, #0x8]
7102dd32b4  eor w9,w9,w9, LSL #0xb
7102dd32b8  eor w9,w9,w9, LSR #0x8
7102dd32bc  eor w9,w9,w11
7102dd32c0  eor w9,w9,w11, LSR #0x13
7102dd32c4  ucvtf s1,w9
7102dd32c8  stp w10,w11,[x8, #0x4]
7102dd32cc  str w9,[x8, #0xc]
7102dd32d0  adrp x8,0x7104472000
7102dd32d4  ldr s2,[x8, #0x1ac]
7102dd32d8  fmul s1,s1,s0
7102dd32dc  fcmp s1,s2
7102dd32e0  b.pl 0x7102dd3644
7102dd32e4  mov w8,wzr
7102dd32e8  ldrb w9,[x24, #0x7f4]
7102dd32ec  cbnz x9,0x7102dd3704
7102dd32f0  b 0x7102dd37cc
7102dd32f4  ldr x9,[x24, #0x738]
7102dd32f8  ldr w8,[x9, #0xbc]
7102dd32fc  cmp w8,#0x5
7102dd3300  b.ne 0x7102dd3314
7102dd3304  orr w8,wzr,#0x6
7102dd3308  str w8,[x9, #0xbc]
7102dd330c  ldr x8,[x24, #0x738]
7102dd3310  ldr w8,[x8, #0xbc]
7102dd3314  cmp w8,#0x1
7102dd3318  b.ne 0x7102dd39bc
7102dd331c  str wzr,[x24, #0x9a0]
7102dd3320  b 0x7102dd39bc
7102dd3324  ldr x8,[x24, #0x738]
7102dd3328  ldr w9,[x8, #0xbc]
7102dd332c  cmp w9,#0x1
7102dd3330  b.ne 0x7102dd3348
7102dd3334  ldr w9,[x24, #0x9b0]
7102dd3338  str w9,[x8, #0x68]
7102dd333c  mov w9,#0x2
7102dd3340  str w9,[x8, #0xbc]
7102dd3344  ldr x8,[x24, #0x738]
7102dd3348  ldr w9,[x8, #0x68]
7102dd334c  cmp w9,#0x2
7102dd3350  b.hi 0x7102dd33b8
7102dd3354  add x9,x24,x9, LSL #0x3
7102dd3358  ldr x9,[x9, #0x750]
7102dd335c  ldr q1,[x9, #0x40]
7102dd3360  ext v2.16B,v1.16B,v1.16B,0x8
7102dd3364  mov v2.S[0x1],v0.S[0x0]
7102dd3368  mov v1.D[0x1],v2.D[0x0]
7102dd336c  ldr w10,[x8, #0xbc]
7102dd3370  cmp w10,#0x4
7102dd3374  b.lt 0x7102dd33d0
7102dd3378  ldr q2,[x9, #0xc0]
7102dd337c  fadd v1.4S,v1.4S,v2.4S
7102dd3380  b 0x7102dd33d0
7102dd3384  ldr x8,[x24, #0x738]
7102dd3388  ldr w9,[x8, #0x68]
7102dd338c  cmp w9,#0x2
7102dd3390  b.hi 0x7102dd344c
7102dd3394  add x9,x24,x9, LSL #0x3
7102dd3398  ldr x9,[x9, #0x750]
7102dd339c  ldr q1,[x9, #0x40]
7102dd33a0  ext v2.16B,v1.16B,v1.16B,0x8
7102dd33a4  mov v2.S[0x1],v0.S[0x0]
7102dd33a8  mov v1.D[0x1],v2.D[0x0]
7102dd33ac  ldr q2,[x9, #0xc0]
7102dd33b0  fadd v1.4S,v1.4S,v2.4S
7102dd33b4  b 0x7102dd3464
7102dd33b8  adrp x9,0x71052a8000
7102dd33bc  ldr x9,[x9, #0xa88]
7102dd33c0  ldr q1,[x9]
7102dd33c4  ext v2.16B,v1.16B,v1.16B,0x8
7102dd33c8  mov v2.S[0x1],v0.S[0x0]
7102dd33cc  mov v1.D[0x1],v2.D[0x0]
7102dd33d0  ext v2.16B,v1.16B,v1.16B,0x8
7102dd33d4  mov v2.S[0x1],v0.S[0x0]
7102dd33d8  mov v1.D[0x1],v2.D[0x0]
7102dd33dc  str q1,[x8, #0x80]
7102dd33e0  ldr x8,[x24, #0x738]
7102dd33e4  ldr w8,[x8, #0xbc]
7102dd33e8  cmp w8,#0x5
7102dd33ec  b.ne 0x7102dd39bc
7102dd33f0  ldr x8,[x24, #0x340]
7102dd33f4  ldp w9,w10,[x8]
7102dd33f8  ldr s0,[x24, #0x828]
7102dd33fc  ldr s1,[x24, #0x82c]
7102dd3400  fsub s1,s1,s0
7102dd3404  str w10,[x8]
7102dd3408  ldp w10,w11,[x8, #0x8]
7102dd340c  eor w9,w9,w9, LSL #0xb
7102dd3410  eor w9,w9,w9, LSR #0x8
7102dd3414  eor w9,w9,w11
7102dd3418  eor w9,w9,w11, LSR #0x13
7102dd341c  ucvtf s2,w9
7102dd3420  stp w10,w11,[x8, #0x4]
7102dd3424  str w9,[x8, #0xc]
7102dd3428  adrp x8,0x7104473000
7102dd342c  fmul s1,s1,s2
7102dd3430  ldr s2,[x8, #0x710]
7102dd3434  orr w8,wzr,#0x3
7102dd3438  str w8,[x24, #0x9a0]
7102dd343c  fmul s4,s1,s2
7102dd3440  fadd s0,s0,s4
7102dd3444  str s0,[x24, #0x9a4]
7102dd3448  b 0x7102dd39bc
7102dd344c  adrp x9,0x71052a8000
7102dd3450  ldr x9,[x9, #0xa88]
7102dd3454  ldr q1,[x9]
7102dd3458  ext v2.16B,v1.16B,v1.16B,0x8
7102dd345c  mov v2.S[0x1],v0.S[0x0]
7102dd3460  mov v1.D[0x1],v2.D[0x0]
7102dd3464  ext v2.16B,v1.16B,v1.16B,0x8
7102dd3468  mov v2.S[0x1],v0.S[0x0]
7102dd346c  mov v1.D[0x1],v2.D[0x0]
7102dd3470  str q1,[x8, #0x80]
7102dd3474  ldr x8,[x24, #0x738]
7102dd3478  ldr w8,[x8, #0xbc]
7102dd347c  cmp w8,#0x7
7102dd3480  b.eq 0x7102dd3498
7102dd3484  adrp x8,0x7104472000
7102dd3488  ldr s0,[x24, #0x9a4]
7102dd348c  ldr s1,[x8, #0x970]
7102dd3490  fcmp s0,s1
7102dd3494  b.hi 0x7102dd39bc
7102dd3498  mov w8,#0x4
7102dd349c  str w8,[x24, #0x9a0]
7102dd34a0  b 0x7102dd39bc
7102dd34a4  ldp w9,w10,[x8]
7102dd34a8  ldr s0,[x24, #0x808]
7102dd34ac  ldr s1,[x24, #0x80c]
7102dd34b0  str w10,[x8]
7102dd34b4  eor w9,w9,w9, LSL #0xb
7102dd34b8  ldp w10,w11,[x8, #0x8]
7102dd34bc  fsub s1,s1,s0
7102dd34c0  eor w9,w9,w9, LSR #0x8
7102dd34c4  eor w9,w9,w11
7102dd34c8  eor w9,w9,w11, LSR #0x13
7102dd34cc  ucvtf s2,w9
7102dd34d0  stp w10,w11,[x8, #0x4]
7102dd34d4  str w9,[x8, #0xc]
7102dd34d8  adrp x8,0x7104473000
7102dd34dc  fmul s1,s1,s2
7102dd34e0  ldr s2,[x8, #0x710]
7102dd34e4  fmul s4,s1,s2
7102dd34e8  fadd s0,s0,s4
7102dd34ec  str s0,[x24, #0x9a4]
7102dd34f0  mov w8,#0x1
7102dd34f4  str w8,[x24, #0x9a0]
7102dd34f8  b 0x7102dd39bc
7102dd34fc  cbnz w10,0x7102dd3508
7102dd3500  mov w9,#0x1
7102dd3504  str w9,[x8, #0xc]
7102dd3508  ldr w8,[x24, #0x8bc]
7102dd350c  ldr x9,[x24, #0x318]
7102dd3510  str w8,[x24, #0x9b8]
7102dd3514  fmov s0,w8
7102dd3518  ldr x0,[x9, #0x10]
7102dd351c  adrp x1,0x710426e000
7102dd3520  add x1,x1,#0x3ca
7102dd3524  bl 0x71025f74f0
7102dd3528  ldr x0,[x24, #0x318]
7102dd352c  adrp x1,0x7104359000
7102dd3530  add x1,x1,#0x726
7102dd3534  mov w2,#0x1
7102dd3538  bl 0x7102633a10
7102dd353c  ldr x0,[x24, #0x318]
7102dd3540  adrp x1,0x71042e5000
7102dd3544  add x1,x1,#0x4f0
7102dd3548  mov w2,#0x1
7102dd354c  bl 0x7102633b90
7102dd3550  ldr s0,[x24, #0x9b8]
7102dd3554  fmul s0,s0,s9
7102dd3558  ldrb w8,[x24, #0x9c0]
7102dd355c  str s0,[x24, #0x9bc]
7102dd3560  cbnz w8,0x7102dd3588
7102dd3564  ldr x8,[x24, #0x338]
7102dd3568  ldr x8,[x8]
7102dd356c  ldr x0,[x8, #0x8]
7102dd3570  cbz x0,0x7102dd3588
7102dd3574  ldr x8,[x0]
7102dd3578  ldr x8,[x8, #0x58]
7102dd357c  mov w1,#0x12
7102dd3580  mov w2,#0xffffffff
7102dd3584  blr x8
7102dd3588  str wzr,[x24, #0x9b4]
7102dd358c  b 0x7102dd2314
7102dd3590  mov w8,#0x2
7102dd3594  str w8,[x24, #0x9d0]
7102dd3598  orr w8,wzr,#0x3
7102dd359c  str w8,[x24, #0x984]
7102dd35a0  ldr x8,[x24, #0x340]
7102dd35a4  ldr s0,[x24, #0x92c]
7102dd35a8  ldp w9,w10,[x8]
7102dd35ac  ldr s1,[x24, #0x930]
7102dd35b0  str w10,[x8]
7102dd35b4  ldp w10,w11,[x8, #0x8]
7102dd35b8  eor w9,w9,w9, LSL #0xb
7102dd35bc  eor w9,w9,w9, LSR #0x8
7102dd35c0  eor w9,w9,w11
7102dd35c4  eor w9,w9,w11, LSR #0x13
7102dd35c8  ucvtf s2,w9
7102dd35cc  fsub s1,s1,s0
7102dd35d0  stp w10,w11,[x8, #0x4]
7102dd35d4  str w9,[x8, #0xc]
7102dd35d8  adrp x8,0x7104473000
7102dd35dc  fmul s1,s1,s2
7102dd35e0  ldr s2,[x8, #0x710]
7102dd35e4  fmul s4,s1,s2
7102dd35e8  fadd s0,s0,s4
7102dd35ec  str s0,[x24, #0x9d4]
7102dd35f0  b 0x7102dd1f38
7102dd35f4  ldr x8,[x24, #0x340]
7102dd35f8  ldp w9,w10,[x8]
7102dd35fc  ldr s1,[x24, #0x89c]
7102dd3600  ldr s2,[x24, #0x8a0]
7102dd3604  fsub s2,s2,s1
7102dd3608  str w10,[x8]
7102dd360c  ldp w10,w11,[x8, #0x8]
7102dd3610  eor w9,w9,w9, LSL #0xb
7102dd3614  eor w9,w9,w9, LSR #0x8
7102dd3618  eor w9,w9,w11
7102dd361c  eor w9,w9,w11, LSR #0x13
7102dd3620  ucvtf s3,w9
7102dd3624  fmul s2,s2,s3
7102dd3628  fmul s3,s2,s0
7102dd362c  fadd s0,s1,s3
7102dd3630  stp w10,w11,[x8, #0x4]
7102dd3634  str w9,[x8, #0xc]
7102dd3638  str s0,[x24, #0x9b8]
7102dd363c  str wzr,[x24, #0x9b4]
7102dd3640  b 0x7102dd2314
7102dd3644  adrp x8,0x7104471000
7102dd3648  ldr s2,[x8, #0xed0]
7102dd364c  fcmp s1,s2
7102dd3650  b.pl 0x7102dd36f8
7102dd3654  mov w8,#0x1
7102dd3658  ldrb w9,[x24, #0x7f4]
7102dd365c  cbnz x9,0x7102dd3704
7102dd3660  b 0x7102dd37cc
7102dd3664  ldp w9,w10,[x8]
7102dd3668  ldr s0,[x24, #0x89c]
7102dd366c  ldr s1,[x24, #0x8a0]
7102dd3670  str w10,[x8]
7102dd3674  eor w9,w9,w9, LSL #0xb
7102dd3678  ldp w10,w11,[x8, #0x8]
7102dd367c  fsub s1,s1,s0
7102dd3680  eor w9,w9,w9, LSR #0x8
7102dd3684  eor w9,w9,w11
7102dd3688  eor w9,w9,w11, LSR #0x13
7102dd368c  ucvtf s2,w9
7102dd3690  stp w10,w11,[x8, #0x4]
7102dd3694  str w9,[x8, #0xc]
7102dd3698  adrp x8,0x7104473000
7102dd369c  fmul s1,s1,s2
7102dd36a0  ldr s2,[x8, #0x710]
7102dd36a4  fmul s4,s1,s2
7102dd36a8  fadd s0,s0,s4
7102dd36ac  str s0,[x24, #0x9b8]
7102dd36b0  ldr s0,[x24, #0x9bc]
7102dd36b4  mov w8,#0x1
7102dd36b8  str w8,[x24, #0x9b4]
7102dd36bc  adrp x8,0x7104472000
7102dd36c0  ldr s1,[x8, #0x970]
7102dd36c4  fcmp s0,s1
7102dd36c8  b.hi 0x7102dd2314
7102dd36cc  ldrb w8,[x24, #0x9c1]
7102dd36d0  cbz w8,0x7102dd2314
7102dd36d4  ldr x8,[x24, #0x768]
7102dd36d8  ldr w9,[x8, #0x28]
7102dd36dc  sub w9,w9,#0x1
7102dd36e0  cmp w9,#0x2
7102dd36e4  b.hi 0x7102dd36f0
7102dd36e8  mov w9,#0x1
7102dd36ec  strb w9,[x8, #0x20]
7102dd36f0  strb wzr,[x24, #0x9c1]
7102dd36f4  b 0x7102dd2314
7102dd36f8  mov w8,#0x2
7102dd36fc  ldrb w9,[x24, #0x7f4]
7102dd3700  cbz x9,0x7102dd37cc
7102dd3704  ldr x13,[x24, #0x9d8]
7102dd3708  cmp w8,#0x0
7102dd370c  cset w10,eq
7102dd3710  cmp w8,#0x1
7102dd3714  cset w11,eq
7102dd3718  cmp w8,#0x2
7102dd371c  cset w12,eq
7102dd3720  mov w14,#0x1
7102dd3724  add x13,x13,#0xc
7102dd3728  ldr w16,[x13]
7102dd372c  cmp w16,#0x2
7102dd3730  b.eq 0x7102dd3750
7102dd3734  cmp w16,#0x1
7102dd3738  mov w15,w11
7102dd373c  b.eq 0x7102dd3760
7102dd3740  cbnz w16,0x7102dd375c
7102dd3744  mov w15,w10
7102dd3748  tbz w15,#0x0,0x7102dd3764
7102dd374c  b 0x7102dd3774
7102dd3750  mov w15,w12
7102dd3754  tbz w15,#0x0,0x7102dd3764
7102dd3758  b 0x7102dd3774
7102dd375c  mov w15,wzr
7102dd3760  tbnz w15,#0x0,0x7102dd3774
7102dd3764  cmp x14,x9
7102dd3768  add x14,x14,#0x1
7102dd376c  add x13,x13,#0x90
7102dd3770  b.cc 0x7102dd3728
7102dd3774  tbz w15,#0x0,0x7102dd37cc
7102dd3778  ldr x8,[x24, #0x340]
7102dd377c  ldp w9,w10,[x8]
7102dd3780  ldr s1,[x24, #0x808]
7102dd3784  ldr s2,[x24, #0x80c]
7102dd3788  str w10,[x8]
7102dd378c  eor w9,w9,w9, LSL #0xb
7102dd3790  ldp w10,w11,[x8, #0x8]
7102dd3794  fsub s2,s2,s1
7102dd3798  eor w9,w9,w9, LSR #0x8
7102dd379c  eor w9,w9,w11
7102dd37a0  eor w9,w9,w11, LSR #0x13
7102dd37a4  ucvtf s3,w9
7102dd37a8  fmul s2,s2,s3
7102dd37ac  fmul s3,s2,s0
7102dd37b0  fadd s0,s1,s3
7102dd37b4  fmov s1,0x3f000000
7102dd37b8  fmul s0,s0,s1
7102dd37bc  stp w10,w11,[x8, #0x4]
7102dd37c0  str w9,[x8, #0xc]
7102dd37c4  str s0,[x24, #0x9a4]
7102dd37c8  b 0x7102dd39bc
7102dd37cc  ldr x9,[x24, #0x738]
7102dd37d0  ldr x10,[x9, #0x28]
7102dd37d4  ldr w11,[x24, #0x9a8]
7102dd37d8  ldp s1,s3,[x10, #0x64]
7102dd37dc  ldr s2,[x10, #0x6c]
7102dd37e0  cmp w11,#0x2
7102dd37e4  b.eq 0x7102dd3944
7102dd37e8  cmp w11,#0x1
7102dd37ec  b.eq 0x7102dd3950
7102dd37f0  cbnz w11,0x7102dd3958
7102dd37f4  ldr s4,[x10, #0x70]
7102dd37f8  fmul s1,s1,s4
7102dd37fc  b 0x7102dd3958
7102dd3800  mov w8,wzr
7102dd3804  ldrb w9,[x20, #0x40]
7102dd3808  tbnz w8,#0x0,0x7102dd3810
7102dd380c  cbz w9,0x7102dd3860
7102dd3810  cbz w9,0x7102dd385c
7102dd3814  cbz x19,0x7102dd384c
7102dd3818  ldrb w8,[x19, #0x10]
7102dd381c  cbz w8,0x7102dd384c
7102dd3820  ldrb w8,[x19, #0x50]
7102dd3824  strb wzr,[x19, #0x10]
7102dd3828  cbz w8,0x7102dd384c
7102dd382c  ldr x8,[x19]
7102dd3830  ldr w0,[x8, #0x8]
7102dd3834  bl 0x71003ac560
7102dd3838  ldr x8,[x0]
7102dd383c  ldr x8,[x8, #0x48]
7102dd3840  mov w1,wzr
7102dd3844  blr x8
7102dd3848  strb wzr,[x19, #0x50]
7102dd384c  ldr x8,[x20]
7102dd3850  ldr x8,[x8, #0x30]
7102dd3854  mov x0,x20
7102dd3858  blr x8
7102dd385c  strb wzr,[x20, #0x40]
7102dd3860  ldr x20,[x21, #0x378]
7102dd3864  ldr x19,[x20, #0x30]
7102dd3868  cbz x19,0x7102dd3884
7102dd386c  ldrb w8,[x19, #0x10]
7102dd3870  cmp w8,#0x0
7102dd3874  cset w8,ne
7102dd3878  ldrb w9,[x20, #0x40]
7102dd387c  tbz w8,#0x0,0x7102dd3890
7102dd3880  b 0x7102dd3894
7102dd3884  mov w8,wzr
7102dd3888  ldrb w9,[x20, #0x40]
7102dd388c  tbnz w8,#0x0,0x7102dd3894
7102dd3890  cbz w9,0x7102dd1f5c
7102dd3894  cbz w9,0x7102dd38e0
7102dd3898  cbz x19,0x7102dd38d0
7102dd389c  ldrb w8,[x19, #0x10]
7102dd38a0  cbz w8,0x7102dd38d0
7102dd38a4  ldrb w8,[x19, #0x50]
7102dd38a8  strb wzr,[x19, #0x10]
7102dd38ac  cbz w8,0x7102dd38d0
7102dd38b0  ldr x8,[x19]
7102dd38b4  ldr w0,[x8, #0x8]
7102dd38b8  bl 0x71003ac560
7102dd38bc  ldr x8,[x0]
7102dd38c0  ldr x8,[x8, #0x48]
7102dd38c4  mov w1,wzr
7102dd38c8  blr x8
7102dd38cc  strb wzr,[x19, #0x50]
7102dd38d0  ldr x8,[x20]
7102dd38d4  ldr x8,[x8, #0x30]
7102dd38d8  mov x0,x20
7102dd38dc  blr x8
7102dd38e0  strb wzr,[x20, #0x40]
7102dd38e4  ldrb w8,[x24, #0x970]
7102dd38e8  cbnz w8,0x7102dd1b0c
7102dd38ec  b 0x7102dd1f64
7102dd38f0  and x8,x23,#0xffffffff
7102dd38f4  mov w9,#0x90
7102dd38f8  madd x9,x8,x9,x21
7102dd38fc  ldr x13,[sp, #0xc0]
7102dd3900  orr w10,wzr,#0x3
7102dd3904  str w10,[x9, #0xc]
7102dd3908  mov w9,#0x90
7102dd390c  madd x9,x8,x9,x21
7102dd3910  str s0,[x9, #0x34]
7102dd3914  ldr w9,[x13, #0x9e0]
7102dd3918  ldr s0,[x13, #0x7cc]
7102dd391c  ldr s2,[x13, #0x7d0]
7102dd3920  ldr s1,[x13, #0x7d4]
7102dd3924  cmp w9,#0x2
7102dd3928  b.eq 0x7102dd3cac
7102dd392c  cmp w9,#0x1
7102dd3930  b.eq 0x7102dd3cb8
7102dd3934  cbnz w9,0x7102dd3cc0
7102dd3938  ldr s3,[x13, #0x7d8]
7102dd393c  fmul s0,s0,s3
7102dd3940  b 0x7102dd3cc0
7102dd3944  ldr s4,[x10, #0x70]
7102dd3948  fmul s2,s2,s4
7102dd394c  b 0x7102dd3958
7102dd3950  ldr s4,[x10, #0x70]
7102dd3954  fmul s3,s3,s4
7102dd3958  ldr x10,[x9, #0x8]
7102dd395c  ldr x10,[x10, #0x340]
7102dd3960  fadd s3,s3,s1
7102dd3964  fadd s2,s2,s3
7102dd3968  ldp w11,w12,[x10]
7102dd396c  str w12,[x10]
7102dd3970  ldp w12,w13,[x10, #0x8]
7102dd3974  eor w11,w11,w11, LSL #0xb
7102dd3978  eor w11,w11,w11, LSR #0x8
7102dd397c  eor w11,w11,w13
7102dd3980  eor w11,w11,w13, LSR #0x13
7102dd3984  ucvtf s4,w11
7102dd3988  fmul s0,s4,s0
7102dd398c  fmul s0,s2,s0
7102dd3990  fcmp s0,s3
7102dd3994  stp w12,w13,[x10, #0x4]
7102dd3998  str w11,[x10, #0xc]
7102dd399c  mov w10,#0x2
7102dd39a0  csinc w11,w10,wzr,pl
7102dd39a4  fcmp s0,s1
7102dd39a8  csel w11,wzr,w11,mi
7102dd39ac  str w11,[x9, #0x58]
7102dd39b0  str w11,[x24, #0x9a8]
7102dd39b4  str w10,[x24, #0x9a0]
7102dd39b8  str w8,[x24, #0x9b0]
7102dd39bc  ldr x0,[x24, #0x738]
7102dd39c0  mov v0.16B,v8.16B
7102dd39c4  bl 0x7102dd8b10
7102dd39c8  ldrb w8,[x24, #0x972]
7102dd39cc  cbz w8,0x7102dd3ad4
7102dd39d0  ldr x19,[x24, #0x968]
7102dd39d4  ldrb w8,[x19, #0x43]
7102dd39d8  cbz w8,0x7102dd3a9c
7102dd39dc  ldr x8,[x19, #0x38]
7102dd39e0  cbz x8,0x7102dd3a9c
7102dd39e4  ldr s2,[x24, #0x94c]
7102dd39e8  mov v1.16B,v2.16B
7102dd39ec  add x9,x24,#0x950
7102dd39f0  ld1 {v1.S}[1],[x9]
7102dd39f4  movi d0,#0x0
7102dd39f8  mov v1.D[0x1],v0.D[0x0]
7102dd39fc  movi v3.2D,#0x0
7102dd3a00  str q1,[sp, #0xc0]
7102dd3a04  ldr s1,[x24, #0x958]
7102dd3a08  add x9,x24,#0x954
7102dd3a0c  ld1 {v3.S}[0],[x9]
7102dd3a10  mov v2.S[0x1],v1.S[0x0]
7102dd3a14  mov v3.S[0x1],v1.S[0x0]
7102dd3a18  mov v2.D[0x1],v0.D[0x0]
7102dd3a1c  stp q2,q3,[sp, #0xa0]
7102dd3a20  ldr x0,[x8, #0x130]
7102dd3a24  ldr x8,[x0]
7102dd3a28  ldr x9,[x24, #0x768]
7102dd3a2c  ldr w19,[x9, #0x24]
7102dd3a30  ldr x8,[x8, #0x1c8]
7102dd3a34  blr x8
7102dd3a38  ldr q0,[sp, #0xb0]
7102dd3a3c  mov w8,#0x4
7102dd3a40  mov w9,#0x1
7102dd3a44  str q0,[x0, #0x2d0]
7102dd3a48  ldr q0,[sp, #0xc0]
7102dd3a4c  strh w8,[x0, #0x2c0]
7102dd3a50  str wzr,[x0, #0x300]
7102dd3a54  str q0,[x0, #0x2e0]
7102dd3a58  ldr q0,[sp, #0xa0]
7102dd3a5c  strb w9,[x0, #0x304]
7102dd3a60  add x9,x0,#0x305
7102dd3a64  str q0,[x0, #0x2f0]
7102dd3a68  ldurh w10,[x29, #-0xb0]
7102dd3a6c  ldurb w11,[x29, #-0xae]
7102dd3a70  strh w10,[x9]
7102dd3a74  mov w9,#0xc2340000
7102dd3a78  strb w11,[x0, #0x307]
7102dd3a7c  str w19,[x0, #0x308]
7102dd3a80  strb wzr,[x0, #0x310]
7102dd3a84  strh w8,[x0, #0x268]
7102dd3a88  str w19,[x0, #0x26c]
7102dd3a8c  strb wzr,[x0, #0x288]
7102dd3a90  str w9,[x0, #0x30c]
7102dd3a94  str w9,[x0, #0x270]
7102dd3a98  ldr x19,[x24, #0x968]
7102dd3a9c  ldr x8,[x19, #0x38]
7102dd3aa0  cbz x8,0x7102dd3ad4
7102dd3aa4  adrp x8,0x7105314000
7102dd3aa8  add x8,x8,#0x4d8
7102dd3aac  ldarb w8,[x8]
7102dd3ab0  tbz w8,#0x0,0x7102dd3df4
7102dd3ab4  adrp x8,0x71052c5000
7102dd3ab8  ldrb w8,[x8, #0x18a]
7102dd3abc  cbnz w8,0x7102dd3ad4
7102dd3ac0  ldr x8,[x19, #0x38]
7102dd3ac4  ldr x0,[x8, #0x130]
7102dd3ac8  ldr x8,[x0]
7102dd3acc  ldr x8,[x8, #0x1c8]
7102dd3ad0  blr x8
7102dd3ad4  ldrb w8,[x24, #0x970]
7102dd3ad8  cbz w8,0x7102dd3ae8
7102dd3adc  ldr x0,[x24, #0x7a0]
7102dd3ae0  mov v0.16B,v8.16B
7102dd3ae4  bl 0x7102ddd9e0
7102dd3ae8  ldr x0,[x24, #0xa00]
7102dd3aec  cbz x0,0x7102dd3c7c
7102dd3af0  ldr w8,[x24, #0xa08]
7102dd3af4  cmp w8,#0x3
7102dd3af8  b.hi 0x7102dd3c7c
7102dd3afc  adrp x9,0x710451c000
7102dd3b00  add x9,x9,#0x98
7102dd3b04  ldrsw x8,[x9, x8, LSL #0x2]
7102dd3b08  add x8,x8,x9
7102dd3b0c  br x8
7102dd3b10  bl 0x710260ffb0
7102dd3b14  tbz w0,#0x0,0x7102dd3c7c
7102dd3b18  mov x8,#0x1
7102dd3b1c  b 0x7102dd3b2c
7102dd3b20  bl 0x710260ffb0
7102dd3b24  tbz w0,#0x0,0x7102dd3c7c
7102dd3b28  mov x8,#0x3
7102dd3b2c  movk x8,#0x4396, LSL #48
7102dd3b30  str x8,[x24, #0xa08]
7102dd3b34  ldr x8,[x24, #0xa00]
7102dd3b38  cbz x8,0x7102dd3c7c
7102dd3b3c  add x0,x8,#0x108
7102dd3b40  strb wzr,[x8, #0x110]
7102dd3b44  bl 0x71025e9d50
7102dd3b48  b 0x7102dd3c7c
7102dd3b4c  ldr s0,[x24, #0xa0c]
7102dd3b50  fsub s0,s0,s8
7102dd3b54  fcmp s0,#0.0
7102dd3b58  str s0,[x24, #0xa0c]
7102dd3b5c  b.hi 0x7102dd3c7c
7102dd3b60  mov x20,#0x3f14
7102dd3b64  movk x20,#0x3e2f, LSL #16
7102dd3b68  movk x20,#0x1a, LSL #32
7102dd3b6c  mov x1,x20
7102dd3b70  bl 0x7102610220
7102dd3b74  ldr x8,[x24, #0xa00]
7102dd3b78  cbz x8,0x7102dd3bb4
7102dd3b7c  add x0,x8,#0x60
7102dd3b80  mov x1,x20
7102dd3b84  mov w2,wzr
7102dd3b88  bl 0x71025ee2a0
7102dd3b8c  ldr x8,[x24, #0xa00]
7102dd3b90  cbz x8,0x7102dd3bb4
7102dd3b94  ldrb w9,[x8, #0xe0]
7102dd3b98  cbz w9,0x7102dd3ba8
7102dd3b9c  ldr x9,[x8, #0xc8]
7102dd3ba0  cbz x9,0x7102dd3ba8
7102dd3ba4  strh wzr,[x9, #0x32]
7102dd3ba8  ldr x8,[x8, #0xd8]
7102dd3bac  cbz x8,0x7102dd3bb4
7102dd3bb0  strb wzr,[x8, #0x22]
7102dd3bb4  ldr x0,[x24, #0xa00]
7102dd3bb8  fmov s0,wzr
7102dd3bbc  mov w1,#0x1
7102dd3bc0  mov w19,#0x1
7102dd3bc4  bl 0x710260fdd0
7102dd3bc8  ldr x8,[x24, #0xa00]
7102dd3bcc  cbz x8,0x7102dd3bdc
7102dd3bd0  add x0,x8,#0x108
7102dd3bd4  strb w19,[x8, #0x110]
7102dd3bd8  bl 0x71025e9d50
7102dd3bdc  str wzr,[x24, #0xa08]
7102dd3be0  b 0x7102dd3c7c
7102dd3be4  ldr s0,[x24, #0xa0c]
7102dd3be8  fsub s0,s0,s8
7102dd3bec  fcmp s0,#0.0
7102dd3bf0  str s0,[x24, #0xa0c]
7102dd3bf4  b.hi 0x7102dd3c7c
7102dd3bf8  mov x20,#0xb1cb
7102dd3bfc  movk x20,#0xce80, LSL #16
7102dd3c00  movk x20,#0x1c, LSL #32
7102dd3c04  mov x1,x20
7102dd3c08  bl 0x7102610220
7102dd3c0c  ldr x8,[x24, #0xa00]
7102dd3c10  cbz x8,0x7102dd3c4c
7102dd3c14  add x0,x8,#0x60
7102dd3c18  mov x1,x20
7102dd3c1c  mov w2,wzr
7102dd3c20  bl 0x71025ee2a0
7102dd3c24  ldr x8,[x24, #0xa00]
7102dd3c28  cbz x8,0x7102dd3c4c
7102dd3c2c  ldrb w9,[x8, #0xe0]
7102dd3c30  cbz w9,0x7102dd3c40
7102dd3c34  ldr x9,[x8, #0xc8]
7102dd3c38  cbz x9,0x7102dd3c40
7102dd3c3c  strh wzr,[x9, #0x32]
7102dd3c40  ldr x8,[x8, #0xd8]
7102dd3c44  cbz x8,0x7102dd3c4c
7102dd3c48  strb wzr,[x8, #0x22]
7102dd3c4c  ldr x0,[x24, #0xa00]
7102dd3c50  fmov s0,wzr
7102dd3c54  mov w1,#0x1
7102dd3c58  mov w19,#0x1
7102dd3c5c  bl 0x710260fdd0
7102dd3c60  ldr x8,[x24, #0xa00]
7102dd3c64  cbz x8,0x7102dd3c74
7102dd3c68  add x0,x8,#0x108
7102dd3c6c  strb w19,[x8, #0x110]
7102dd3c70  bl 0x71025e9d50
7102dd3c74  mov w8,#0x2
7102dd3c78  str w8,[x24, #0xa08]
7102dd3c7c  ldp d9,d8,[sp, #0x160]
7102dd3c80  ldp d11,d10,[sp, #0x150]
7102dd3c84  ldp d13,d12,[sp, #0x140]
7102dd3c88  ldp d15,d14,[sp, #0x130]
7102dd3c8c  ldp x29,x30,[sp, #0x1c0]
7102dd3c90  ldp x20,x19,[sp, #0x1b0]
7102dd3c94  ldp x22,x21,[sp, #0x1a0]
7102dd3c98  ldp x24,x23,[sp, #0x190]
7102dd3c9c  ldp x26,x25,[sp, #0x180]
7102dd3ca0  ldp x28,x27,[sp, #0x170]
7102dd3ca4  add sp,sp,#0x1d0
7102dd3ca8  ret
7102dd3cac  ldr s3,[x13, #0x7d8]
7102dd3cb0  fmul s1,s1,s3
7102dd3cb4  b 0x7102dd3cc0
7102dd3cb8  ldr s3,[x13, #0x7d8]
7102dd3cbc  fmul s2,s2,s3
7102dd3cc0  ldr x9,[x13, #0x340]
7102dd3cc4  ldp w10,w11,[x9]
7102dd3cc8  str w11,[x9]
7102dd3ccc  ldp w11,w12,[x9, #0x8]
7102dd3cd0  eor w10,w10,w10, LSL #0xb
7102dd3cd4  eor w10,w10,w10, LSR #0x8
7102dd3cd8  eor w10,w10,w12
7102dd3cdc  eor w10,w10,w12, LSR #0x13
7102dd3ce0  ucvtf s3,w10
7102dd3ce4  fadd s2,s2,s0
7102dd3ce8  fadd s1,s1,s2
7102dd3cec  stp w11,w12,[x9, #0x4]
7102dd3cf0  mov w11,#0x90
7102dd3cf4  str w10,[x9, #0xc]
7102dd3cf8  mov w9,#0x2
7102dd3cfc  madd x8,x8,x11,x21
7102dd3d00  fmul s4,s3,s9
7102dd3d04  fmul s1,s1,s4
7102dd3d08  fcmp s1,s2
7102dd3d0c  csinc w10,w9,wzr,pl
7102dd3d10  fcmp s1,s0
7102dd3d14  csel w10,wzr,w10,mi
7102dd3d18  str w10,[x13, #0x9e0]
7102dd3d1c  str w10,[x8, #0x10]
7102dd3d20  str w9,[x20]
7102dd3d24  b 0x7102dd2edc
7102dd3d28  and x8,x23,#0xffffffff
7102dd3d2c  mov w9,#0x90
7102dd3d30  madd x9,x8,x9,x21
7102dd3d34  str wzr,[x9, #0xc]
7102dd3d38  b 0x7102dd3d64
7102dd3d3c  and x8,x23,#0xffffffff
7102dd3d40  mov w9,#0x90
7102dd3d44  madd x9,x8,x9,x21
7102dd3d48  mov w10,#0x1
7102dd3d4c  b 0x7102dd3d60
7102dd3d50  and x8,x23,#0xffffffff
7102dd3d54  mov w9,#0x90
7102dd3d58  madd x9,x8,x9,x21
7102dd3d5c  mov w10,#0x2
7102dd3d60  str w10,[x9, #0xc]
7102dd3d64  ldr x13,[sp, #0xc0]
7102dd3d68  ldr x9,[x13, #0x340]
7102dd3d6c  ldp w10,w11,[x9]
7102dd3d70  str w11,[x9]
7102dd3d74  ldp w11,w12,[x9, #0x8]
7102dd3d78  eor w10,w10,w10, LSL #0xb
7102dd3d7c  eor w10,w10,w10, LSR #0x8
7102dd3d80  eor w10,w10,w12
7102dd3d84  eor w10,w10,w12, LSR #0x13
7102dd3d88  ucvtf s0,w10
7102dd3d8c  stp w11,w12,[x9, #0x4]
7102dd3d90  str w10,[x9, #0xc]
7102dd3d94  adrp x9,0x7104472000
7102dd3d98  ldr s1,[x9, #0x4b0]
7102dd3d9c  adrp x9,0x7104473000
7102dd3da0  fmul s0,s0,s9
7102dd3da4  fmul s3,s0,s1
7102dd3da8  ldr s1,[x9, #0x5f8]
7102dd3dac  fadd s0,s3,s1
7102dd3db0  b 0x7102dd3908
7102dd3db4  adrp x0,0x7105314000
7102dd3db8  add x0,x0,#0x4d8
7102dd3dbc  bl 0x71039c06b0
7102dd3dc0  cbz w0,0x7102dd31c0
7102dd3dc4  bl 0x7101764000
7102dd3dc8  adrp x0,0x7101763000
7102dd3dcc  add x0,x0,#0xc40
7102dd3dd0  adrp x1,0x71052c5000
7102dd3dd4  add x1,x1,#0x180
7102dd3dd8  adrp x2,0x7104f17000
7102dd3ddc  add x2,x2,#0x0
7102dd3de0  bl 0x71000001c0
7102dd3de4  adrp x0,0x7105314000
7102dd3de8  add x0,x0,#0x4d8
7102dd3dec  bl 0x71039c06c0
7102dd3df0  b 0x7102dd31c0
7102dd3df4  adrp x0,0x7105314000
7102dd3df8  add x0,x0,#0x4d8
7102dd3dfc  bl 0x71039c06b0
7102dd3e00  cbz w0,0x7102dd3ab4
7102dd3e04  bl 0x7101764000
7102dd3e08  adrp x0,0x7101763000
7102dd3e0c  add x0,x0,#0xc40
7102dd3e10  adrp x1,0x71052c5000
7102dd3e14  add x1,x1,#0x180
7102dd3e18  adrp x2,0x7104f17000
7102dd3e1c  add x2,x2,#0x0
7102dd3e20  bl 0x71000001c0
7102dd3e24  adrp x0,0x7105314000
7102dd3e28  add x0,x0,#0x4d8
7102dd3e2c  bl 0x71039c06c0
7102dd3e30  b 0x7102dd3ab4
7102dd3e34  adrp x0,0x7105314000
7102dd3e38  add x0,x0,#0x4d8
7102dd3e3c  bl 0x71039c06b0
7102dd3e40  cbz w0,0x7102dd2a48
7102dd3e44  bl 0x7101764000
7102dd3e48  adrp x0,0x7101763000
7102dd3e4c  add x0,x0,#0xc40
7102dd3e50  adrp x1,0x71052c5000
7102dd3e54  add x1,x1,#0x180
7102dd3e58  adrp x2,0x7104f17000
7102dd3e5c  add x2,x2,#0x0
7102dd3e60  bl 0x71000001c0
7102dd3e64  adrp x0,0x7105314000
7102dd3e68  add x0,x0,#0x4d8
7102dd3e6c  bl 0x71039c06c0
7102dd3e70  b 0x7102dd2a48
7102dd3e74  ldr x0,[sp, #0xb0]
7102dd3e78  bl 0x71039c0c00
7102dd3e7c  bl 0x71039c2650
