// addr:      7101fd17f0
// offset:    0x1fd17f0
// name:      FUN_7101fd17f0
// mangled:   
// size:      16836

7101fd17f0  sub sp,sp,#0x60
7101fd17f4  str x25,[sp, #0x10]
7101fd17f8  stp x24,x23,[sp, #0x20]
7101fd17fc  stp x22,x21,[sp, #0x30]
7101fd1800  stp x20,x19,[sp, #0x40]
7101fd1804  stp x29,x30,[sp, #0x50]
7101fd1808  add x29,sp,#0x50
7101fd180c  mov x24,x1
7101fd1810  ldr x8,[x24, #0x20]!
7101fd1814  mov w21,w2
7101fd1818  mov x20,x1
7101fd181c  mov x19,x0
7101fd1820  mov w23,#0xb9d8
7101fd1824  movk w23,#0xfff0, LSL #16
7101fd1828  cmp w2,#0x1
7101fd182c  b.lt 0x7101fd1850
7101fd1830  ldr x8,[x8]
7101fd1834  ldr x10,[x20, #0x10]
7101fd1838  adrp x9,0x7104862000
7101fd183c  add x9,x9,#0x960
7101fd1840  add x8,x8,w21, SXTW  #0x4
7101fd1844  cmp x8,x10
7101fd1848  csel x1,x8,x9,cc
7101fd184c  b 0x7101fd18b0
7101fd1850  add w9,w23,#0x1
7101fd1854  cmp w21,w9
7101fd1858  b.ge 0x7101fd1870
7101fd185c  cmp w21,w23
7101fd1860  b.ne 0x7101fd187c
7101fd1864  ldr x8,[x20, #0x18]
7101fd1868  add x1,x8,#0x40
7101fd186c  b 0x7101fd18b0
7101fd1870  ldr x8,[x20, #0x10]
7101fd1874  add x1,x8,w21, SXTW  #0x4
7101fd1878  b 0x7101fd18b0
7101fd187c  ldr x8,[x8]
7101fd1880  ldr w9,[x8, #0x8]
7101fd1884  adrp x1,0x7104862000
7101fd1888  add x1,x1,#0x960
7101fd188c  cmp w9,#0x16
7101fd1890  b.eq 0x7101fd18b0
7101fd1894  ldr x8,[x8]
7101fd1898  sub w9,w23,w21
7101fd189c  add x10,x8,w9, SXTW  #0x4
7101fd18a0  ldrb w8,[x8, #0xa]
7101fd18a4  add x10,x10,#0x10
7101fd18a8  cmp w9,w8
7101fd18ac  csel x1,x1,x10,gt
7101fd18b0  adrp x2,0x71042c5000
7101fd18b4  add x2,x2,#0xce7
7101fd18b8  mov x0,x20
7101fd18bc  bl 0x71038f4d40
7101fd18c0  mov x22,x20
7101fd18c4  ldr x8,[x22, #0x10]!
7101fd18c8  sub x1,x8,#0x10
7101fd18cc  adrp x2,0x71043d7000
7101fd18d0  add x2,x2,#0xeae
7101fd18d4  mov x0,x20
7101fd18d8  bl 0x71038f4d40
7101fd18dc  ldr x25,[x22]
7101fd18e0  ldur w8,[x25, #-0x8]
7101fd18e4  cmp w8,#0x3
7101fd18e8  b.ne 0x7101fd18f4
7101fd18ec  ldur s0,[x25, #-0x10]
7101fd18f0  b 0x7101fd196c
7101fd18f4  cmp w8,#0x13
7101fd18f8  b.ne 0x7101fd1908
7101fd18fc  ldur x8,[x25, #-0x10]
7101fd1900  scvtf s0,x8
7101fd1904  b 0x7101fd196c
7101fd1908  and w8,w8,#0xf
7101fd190c  cmp w8,#0x4
7101fd1910  b.ne 0x7101fd1968
7101fd1914  ldur x8,[x25, #-0x10]
7101fd1918  add x0,x8,#0x18
7101fd191c  mov x1,sp
7101fd1920  bl 0x7103907f00
7101fd1924  ldur x8,[x25, #-0x10]
7101fd1928  ldrb w9,[x8, #0x8]
7101fd192c  cmp w9,#0x4
7101fd1930  b.ne 0x7101fd193c
7101fd1934  ldrb w8,[x8, #0xb]
7101fd1938  b 0x7101fd1940
7101fd193c  ldr x8,[x8, #0x10]
7101fd1940  add x8,x8,#0x1
7101fd1944  cmp x0,x8
7101fd1948  b.ne 0x7101fd1968
7101fd194c  ldr x9,[sp]
7101fd1950  scvtf s0,x9
7101fd1954  ldr w8,[sp, #0x8]
7101fd1958  fmov s1,w9
7101fd195c  cmp w8,#0x13
7101fd1960  fcsel s0,s0,s1,eq
7101fd1964  b 0x7101fd196c
7101fd1968  fmov s0,wzr
7101fd196c  ldr x8,[x20, #0x10]
7101fd1970  sub x8,x8,#0x10
7101fd1974  str x8,[x20, #0x10]
7101fd1978  ldr q1,[x19]
7101fd197c  mov v1.S[0x0],v0.S[0x0]
7101fd1980  str q1,[x19]
7101fd1984  ldr x8,[x20, #0x10]
7101fd1988  sub x1,x8,#0x10
7101fd198c  adrp x2,0x71042ab000
7101fd1990  add x2,x2,#0xc20
7101fd1994  mov x0,x20
7101fd1998  bl 0x71038f4d40
7101fd199c  ldr x25,[x20, #0x10]
7101fd19a0  ldur w8,[x25, #-0x8]
7101fd19a4  cmp w8,#0x3
7101fd19a8  b.ne 0x7101fd19b4
7101fd19ac  ldur s0,[x25, #-0x10]
7101fd19b0  b 0x7101fd1a2c
7101fd19b4  cmp w8,#0x13
7101fd19b8  b.ne 0x7101fd19c8
7101fd19bc  ldur x8,[x25, #-0x10]
7101fd19c0  scvtf s0,x8
7101fd19c4  b 0x7101fd1a2c
7101fd19c8  and w8,w8,#0xf
7101fd19cc  cmp w8,#0x4
7101fd19d0  b.ne 0x7101fd1a28
7101fd19d4  ldur x8,[x25, #-0x10]
7101fd19d8  add x0,x8,#0x18
7101fd19dc  mov x1,sp
7101fd19e0  bl 0x7103907f00
7101fd19e4  ldur x8,[x25, #-0x10]
7101fd19e8  ldrb w9,[x8, #0x8]
7101fd19ec  cmp w9,#0x4
7101fd19f0  b.ne 0x7101fd19fc
7101fd19f4  ldrb w8,[x8, #0xb]
7101fd19f8  b 0x7101fd1a00
7101fd19fc  ldr x8,[x8, #0x10]
7101fd1a00  add x8,x8,#0x1
7101fd1a04  cmp x0,x8
7101fd1a08  b.ne 0x7101fd1a28
7101fd1a0c  ldr x9,[sp]
7101fd1a10  scvtf s0,x9
7101fd1a14  ldr w8,[sp, #0x8]
7101fd1a18  fmov s1,w9
7101fd1a1c  cmp w8,#0x13
7101fd1a20  fcsel s0,s0,s1,eq
7101fd1a24  b 0x7101fd1a2c
7101fd1a28  fmov s0,wzr
7101fd1a2c  ldr x8,[x20, #0x10]
7101fd1a30  sub x8,x8,#0x10
7101fd1a34  str x8,[x20, #0x10]
7101fd1a38  ldr q1,[x19]
7101fd1a3c  mov v1.S[0x1],v0.S[0x0]
7101fd1a40  str q1,[x19]
7101fd1a44  ldr x8,[x20, #0x10]
7101fd1a48  sub x1,x8,#0x10
7101fd1a4c  adrp x2,0x710443b000
7101fd1a50  add x2,x2,#0x9a0
7101fd1a54  mov x0,x20
7101fd1a58  bl 0x71038f4d40
7101fd1a5c  ldr x25,[x20, #0x10]
7101fd1a60  ldur w8,[x25, #-0x8]
7101fd1a64  cmp w8,#0x3
7101fd1a68  b.ne 0x7101fd1a74
7101fd1a6c  ldur s0,[x25, #-0x10]
7101fd1a70  b 0x7101fd1aec
7101fd1a74  cmp w8,#0x13
7101fd1a78  b.ne 0x7101fd1a88
7101fd1a7c  ldur x8,[x25, #-0x10]
7101fd1a80  scvtf s0,x8
7101fd1a84  b 0x7101fd1aec
7101fd1a88  and w8,w8,#0xf
7101fd1a8c  cmp w8,#0x4
7101fd1a90  b.ne 0x7101fd1ae8
7101fd1a94  ldur x8,[x25, #-0x10]
7101fd1a98  add x0,x8,#0x18
7101fd1a9c  mov x1,sp
7101fd1aa0  bl 0x7103907f00
7101fd1aa4  ldur x8,[x25, #-0x10]
7101fd1aa8  ldrb w9,[x8, #0x8]
7101fd1aac  cmp w9,#0x4
7101fd1ab0  b.ne 0x7101fd1abc
7101fd1ab4  ldrb w8,[x8, #0xb]
7101fd1ab8  b 0x7101fd1ac0
7101fd1abc  ldr x8,[x8, #0x10]
7101fd1ac0  add x8,x8,#0x1
7101fd1ac4  cmp x0,x8
7101fd1ac8  b.ne 0x7101fd1ae8
7101fd1acc  ldr x9,[sp]
7101fd1ad0  scvtf s0,x9
7101fd1ad4  ldr w8,[sp, #0x8]
7101fd1ad8  fmov s1,w9
7101fd1adc  cmp w8,#0x13
7101fd1ae0  fcsel s0,s0,s1,eq
7101fd1ae4  b 0x7101fd1aec
7101fd1ae8  fmov s0,wzr
7101fd1aec  ldr x8,[x22]
7101fd1af0  sub x8,x8,#0x10
7101fd1af4  str x8,[x22]
7101fd1af8  ldr q1,[x19]
7101fd1afc  mov v1.S[0x2],v0.S[0x0]
7101fd1b00  fmov s0,wzr
7101fd1b04  mov v1.S[0x3],v0.S[0x0]
7101fd1b08  str q1,[x19]
7101fd1b0c  ldr x8,[x22]
7101fd1b10  sub x8,x8,#0x10
7101fd1b14  str x8,[x22]
7101fd1b18  ldr x9,[x24]
7101fd1b1c  cmp w21,#0x1
7101fd1b20  b.lt 0x7101fd1b40
7101fd1b24  ldr x9,[x9]
7101fd1b28  add x9,x9,w21, SXTW  #0x4
7101fd1b2c  adrp x10,0x7104862000
7101fd1b30  add x10,x10,#0x960
7101fd1b34  cmp x9,x8
7101fd1b38  csel x1,x9,x10,cc
7101fd1b3c  b 0x7101fd1b9c
7101fd1b40  add w10,w23,#0x1
7101fd1b44  cmp w21,w10
7101fd1b48  b.ge 0x7101fd1b60
7101fd1b4c  cmp w21,w23
7101fd1b50  b.ne 0x7101fd1b68
7101fd1b54  ldr x8,[x20, #0x18]
7101fd1b58  add x1,x8,#0x40
7101fd1b5c  b 0x7101fd1b9c
7101fd1b60  add x1,x8,w21, SXTW  #0x4
7101fd1b64  b 0x7101fd1b9c
7101fd1b68  ldr x8,[x9]
7101fd1b6c  ldr w9,[x8, #0x8]
7101fd1b70  adrp x1,0x7104862000
7101fd1b74  add x1,x1,#0x960
7101fd1b78  cmp w9,#0x16
7101fd1b7c  b.eq 0x7101fd1b9c
7101fd1b80  ldr x8,[x8]
7101fd1b84  sub w9,w23,w21
7101fd1b88  add x10,x8,w9, SXTW  #0x4
7101fd1b8c  ldrb w8,[x8, #0xa]
7101fd1b90  add x10,x10,#0x10
7101fd1b94  cmp w9,w8
7101fd1b98  csel x1,x1,x10,gt
7101fd1b9c  adrp x2,0x710438d000
7101fd1ba0  add x2,x2,#0x8a9
7101fd1ba4  mov x0,x20
7101fd1ba8  bl 0x71038f4d40
7101fd1bac  ldr x8,[x20, #0x10]
7101fd1bb0  sub x1,x8,#0x10
7101fd1bb4  adrp x2,0x71043d7000
7101fd1bb8  add x2,x2,#0xeae
7101fd1bbc  mov x0,x20
7101fd1bc0  bl 0x71038f4d40
7101fd1bc4  ldr x25,[x20, #0x10]
7101fd1bc8  ldur w8,[x25, #-0x8]
7101fd1bcc  cmp w8,#0x3
7101fd1bd0  b.ne 0x7101fd1bdc
7101fd1bd4  ldur s1,[x25, #-0x10]
7101fd1bd8  b 0x7101fd1c54
7101fd1bdc  cmp w8,#0x13
7101fd1be0  b.ne 0x7101fd1bf0
7101fd1be4  ldur x8,[x25, #-0x10]
7101fd1be8  scvtf s1,x8
7101fd1bec  b 0x7101fd1c54
7101fd1bf0  and w8,w8,#0xf
7101fd1bf4  cmp w8,#0x4
7101fd1bf8  b.ne 0x7101fd1c50
7101fd1bfc  ldur x8,[x25, #-0x10]
7101fd1c00  add x0,x8,#0x18
7101fd1c04  mov x1,sp
7101fd1c08  bl 0x7103907f00
7101fd1c0c  ldur x8,[x25, #-0x10]
7101fd1c10  ldrb w9,[x8, #0x8]
7101fd1c14  cmp w9,#0x4
7101fd1c18  b.ne 0x7101fd1c24
7101fd1c1c  ldrb w8,[x8, #0xb]
7101fd1c20  b 0x7101fd1c28
7101fd1c24  ldr x8,[x8, #0x10]
7101fd1c28  add x8,x8,#0x1
7101fd1c2c  cmp x0,x8
7101fd1c30  b.ne 0x7101fd1c50
7101fd1c34  ldr x9,[sp]
7101fd1c38  scvtf s0,x9
7101fd1c3c  ldr w8,[sp, #0x8]
7101fd1c40  fmov s1,w9
7101fd1c44  cmp w8,#0x13
7101fd1c48  fcsel s1,s0,s1,eq
7101fd1c4c  b 0x7101fd1c54
7101fd1c50  fmov s1,wzr
7101fd1c54  ldr x8,[x20, #0x10]
7101fd1c58  sub x8,x8,#0x10
7101fd1c5c  str x8,[x20, #0x10]
7101fd1c60  ldr q0,[x19, #0x10]
7101fd1c64  mov v0.S[0x0],v1.S[0x0]
7101fd1c68  str q0,[x19, #0x10]
7101fd1c6c  ldr x8,[x20, #0x10]
7101fd1c70  sub x1,x8,#0x10
7101fd1c74  adrp x2,0x71042ab000
7101fd1c78  add x2,x2,#0xc20
7101fd1c7c  mov x0,x20
7101fd1c80  bl 0x71038f4d40
7101fd1c84  ldr x25,[x20, #0x10]
7101fd1c88  ldur w8,[x25, #-0x8]
7101fd1c8c  cmp w8,#0x3
7101fd1c90  b.ne 0x7101fd1c9c
7101fd1c94  ldur s0,[x25, #-0x10]
7101fd1c98  b 0x7101fd1d14
7101fd1c9c  cmp w8,#0x13
7101fd1ca0  b.ne 0x7101fd1cb0
7101fd1ca4  ldur x8,[x25, #-0x10]
7101fd1ca8  scvtf s0,x8
7101fd1cac  b 0x7101fd1d14
7101fd1cb0  and w8,w8,#0xf
7101fd1cb4  cmp w8,#0x4
7101fd1cb8  b.ne 0x7101fd1d10
7101fd1cbc  ldur x8,[x25, #-0x10]
7101fd1cc0  add x0,x8,#0x18
7101fd1cc4  mov x1,sp
7101fd1cc8  bl 0x7103907f00
7101fd1ccc  ldur x8,[x25, #-0x10]
7101fd1cd0  ldrb w9,[x8, #0x8]
7101fd1cd4  cmp w9,#0x4
7101fd1cd8  b.ne 0x7101fd1ce4
7101fd1cdc  ldrb w8,[x8, #0xb]
7101fd1ce0  b 0x7101fd1ce8
7101fd1ce4  ldr x8,[x8, #0x10]
7101fd1ce8  add x8,x8,#0x1
7101fd1cec  cmp x0,x8
7101fd1cf0  b.ne 0x7101fd1d10
7101fd1cf4  ldr x9,[sp]
7101fd1cf8  scvtf s0,x9
7101fd1cfc  ldr w8,[sp, #0x8]
7101fd1d00  fmov s1,w9
7101fd1d04  cmp w8,#0x13
7101fd1d08  fcsel s0,s0,s1,eq
7101fd1d0c  b 0x7101fd1d14
7101fd1d10  fmov s0,wzr
7101fd1d14  ldr x8,[x20, #0x10]
7101fd1d18  sub x8,x8,#0x10
7101fd1d1c  str x8,[x20, #0x10]
7101fd1d20  ldr q1,[x19, #0x10]
7101fd1d24  mov v1.S[0x1],v0.S[0x0]
7101fd1d28  str q1,[x19, #0x10]
7101fd1d2c  ldr x8,[x20, #0x10]
7101fd1d30  sub x1,x8,#0x10
7101fd1d34  adrp x2,0x710443b000
7101fd1d38  add x2,x2,#0x9a0
7101fd1d3c  mov x0,x20
7101fd1d40  bl 0x71038f4d40
7101fd1d44  ldr x25,[x20, #0x10]
7101fd1d48  ldur w8,[x25, #-0x8]
7101fd1d4c  cmp w8,#0x3
7101fd1d50  b.ne 0x7101fd1d5c
7101fd1d54  ldur s0,[x25, #-0x10]
7101fd1d58  b 0x7101fd1dd4
7101fd1d5c  cmp w8,#0x13
7101fd1d60  b.ne 0x7101fd1d70
7101fd1d64  ldur x8,[x25, #-0x10]
7101fd1d68  scvtf s0,x8
7101fd1d6c  b 0x7101fd1dd4
7101fd1d70  and w8,w8,#0xf
7101fd1d74  cmp w8,#0x4
7101fd1d78  b.ne 0x7101fd1dd0
7101fd1d7c  ldur x8,[x25, #-0x10]
7101fd1d80  add x0,x8,#0x18
7101fd1d84  mov x1,sp
7101fd1d88  bl 0x7103907f00
7101fd1d8c  ldur x8,[x25, #-0x10]
7101fd1d90  ldrb w9,[x8, #0x8]
7101fd1d94  cmp w9,#0x4
7101fd1d98  b.ne 0x7101fd1da4
7101fd1d9c  ldrb w8,[x8, #0xb]
7101fd1da0  b 0x7101fd1da8
7101fd1da4  ldr x8,[x8, #0x10]
7101fd1da8  add x8,x8,#0x1
7101fd1dac  cmp x0,x8
7101fd1db0  b.ne 0x7101fd1dd0
7101fd1db4  ldr x9,[sp]
7101fd1db8  scvtf s0,x9
7101fd1dbc  ldr w8,[sp, #0x8]
7101fd1dc0  fmov s1,w9
7101fd1dc4  cmp w8,#0x13
7101fd1dc8  fcsel s0,s0,s1,eq
7101fd1dcc  b 0x7101fd1dd4
7101fd1dd0  fmov s0,wzr
7101fd1dd4  ldr x8,[x22]
7101fd1dd8  sub x8,x8,#0x10
7101fd1ddc  str x8,[x22]
7101fd1de0  ldr q1,[x19, #0x10]
7101fd1de4  mov v1.S[0x2],v0.S[0x0]
7101fd1de8  fmov s0,wzr
7101fd1dec  mov v1.S[0x3],v0.S[0x0]
7101fd1df0  str q1,[x19, #0x10]
7101fd1df4  ldr x8,[x22]
7101fd1df8  sub x8,x8,#0x10
7101fd1dfc  str x8,[x22]
7101fd1e00  ldr x9,[x24]
7101fd1e04  cmp w21,#0x1
7101fd1e08  b.lt 0x7101fd1e28
7101fd1e0c  ldr x9,[x9]
7101fd1e10  add x9,x9,w21, SXTW  #0x4
7101fd1e14  adrp x10,0x7104862000
7101fd1e18  add x10,x10,#0x960
7101fd1e1c  cmp x9,x8
7101fd1e20  csel x1,x9,x10,cc
7101fd1e24  b 0x7101fd1e84
7101fd1e28  add w10,w23,#0x1
7101fd1e2c  cmp w21,w10
7101fd1e30  b.ge 0x7101fd1e48
7101fd1e34  cmp w21,w23
7101fd1e38  b.ne 0x7101fd1e50
7101fd1e3c  ldr x8,[x20, #0x18]
7101fd1e40  add x1,x8,#0x40
7101fd1e44  b 0x7101fd1e84
7101fd1e48  add x1,x8,w21, SXTW  #0x4
7101fd1e4c  b 0x7101fd1e84
7101fd1e50  ldr x8,[x9]
7101fd1e54  ldr w9,[x8, #0x8]
7101fd1e58  adrp x1,0x7104862000
7101fd1e5c  add x1,x1,#0x960
7101fd1e60  cmp w9,#0x16
7101fd1e64  b.eq 0x7101fd1e84
7101fd1e68  ldr x8,[x8]
7101fd1e6c  sub w9,w23,w21
7101fd1e70  add x10,x8,w9, SXTW  #0x4
7101fd1e74  ldrb w8,[x8, #0xa]
7101fd1e78  add x10,x10,#0x10
7101fd1e7c  cmp w9,w8
7101fd1e80  csel x1,x1,x10,gt
7101fd1e84  adrp x2,0x710434b000
7101fd1e88  add x2,x2,#0x4c
7101fd1e8c  mov x0,x20
7101fd1e90  bl 0x71038f4d40
7101fd1e94  ldr x25,[x20, #0x10]
7101fd1e98  ldur w8,[x25, #-0x8]
7101fd1e9c  cmp w8,#0x3
7101fd1ea0  b.ne 0x7101fd1eac
7101fd1ea4  ldur w8,[x25, #-0x10]
7101fd1ea8  b 0x7101fd1f28
7101fd1eac  cmp w8,#0x13
7101fd1eb0  b.ne 0x7101fd1ec4
7101fd1eb4  ldur x8,[x25, #-0x10]
7101fd1eb8  scvtf s0,x8
7101fd1ebc  fmov w8,s0
7101fd1ec0  b 0x7101fd1f28
7101fd1ec4  and w8,w8,#0xf
7101fd1ec8  cmp w8,#0x4
7101fd1ecc  b.ne 0x7101fd1f24
7101fd1ed0  ldur x8,[x25, #-0x10]
7101fd1ed4  add x0,x8,#0x18
7101fd1ed8  mov x1,sp
7101fd1edc  bl 0x7103907f00
7101fd1ee0  ldur x8,[x25, #-0x10]
7101fd1ee4  ldrb w9,[x8, #0x8]
7101fd1ee8  cmp w9,#0x4
7101fd1eec  b.ne 0x7101fd1ef8
7101fd1ef0  ldrb w8,[x8, #0xb]
7101fd1ef4  b 0x7101fd1efc
7101fd1ef8  ldr x8,[x8, #0x10]
7101fd1efc  add x8,x8,#0x1
7101fd1f00  cmp x0,x8
7101fd1f04  b.ne 0x7101fd1f24
7101fd1f08  ldr x9,[sp]
7101fd1f0c  scvtf s0,x9
7101fd1f10  ldr w8,[sp, #0x8]
7101fd1f14  cmp w8,#0x13
7101fd1f18  fmov w10,s0
7101fd1f1c  csel w8,w10,w9,eq
7101fd1f20  b 0x7101fd1f28
7101fd1f24  mov w8,wzr
7101fd1f28  str w8,[x19, #0x20]
7101fd1f2c  ldr x8,[x22]
7101fd1f30  sub x8,x8,#0x10
7101fd1f34  str x8,[x22]
7101fd1f38  ldr x9,[x24]
7101fd1f3c  cmp w21,#0x1
7101fd1f40  b.lt 0x7101fd1f60
7101fd1f44  ldr x9,[x9]
7101fd1f48  add x9,x9,w21, SXTW  #0x4
7101fd1f4c  adrp x10,0x7104862000
7101fd1f50  add x10,x10,#0x960
7101fd1f54  cmp x9,x8
7101fd1f58  csel x1,x9,x10,cc
7101fd1f5c  b 0x7101fd1fbc
7101fd1f60  add w10,w23,#0x1
7101fd1f64  cmp w21,w10
7101fd1f68  b.ge 0x7101fd1f80
7101fd1f6c  cmp w21,w23
7101fd1f70  b.ne 0x7101fd1f88
7101fd1f74  ldr x8,[x20, #0x18]
7101fd1f78  add x1,x8,#0x40
7101fd1f7c  b 0x7101fd1fbc
7101fd1f80  add x1,x8,w21, SXTW  #0x4
7101fd1f84  b 0x7101fd1fbc
7101fd1f88  ldr x8,[x9]
7101fd1f8c  ldr w9,[x8, #0x8]
7101fd1f90  adrp x1,0x7104862000
7101fd1f94  add x1,x1,#0x960
7101fd1f98  cmp w9,#0x16
7101fd1f9c  b.eq 0x7101fd1fbc
7101fd1fa0  ldr x8,[x8]
7101fd1fa4  sub w9,w23,w21
7101fd1fa8  add x10,x8,w9, SXTW  #0x4
7101fd1fac  ldrb w8,[x8, #0xa]
7101fd1fb0  add x10,x10,#0x10
7101fd1fb4  cmp w9,w8
7101fd1fb8  csel x1,x1,x10,gt
7101fd1fbc  adrp x2,0x7104292000
7101fd1fc0  add x2,x2,#0x9ee
7101fd1fc4  mov x0,x20
7101fd1fc8  bl 0x71038f4d40
7101fd1fcc  ldr x25,[x20, #0x10]
7101fd1fd0  ldur w8,[x25, #-0x8]
7101fd1fd4  cmp w8,#0x3
7101fd1fd8  b.ne 0x7101fd1fe4
7101fd1fdc  ldur w8,[x25, #-0x10]
7101fd1fe0  b 0x7101fd2060
7101fd1fe4  cmp w8,#0x13
7101fd1fe8  b.ne 0x7101fd1ffc
7101fd1fec  ldur x8,[x25, #-0x10]
7101fd1ff0  scvtf s0,x8
7101fd1ff4  fmov w8,s0
7101fd1ff8  b 0x7101fd2060
7101fd1ffc  and w8,w8,#0xf
7101fd2000  cmp w8,#0x4
7101fd2004  b.ne 0x7101fd205c
7101fd2008  ldur x8,[x25, #-0x10]
7101fd200c  add x0,x8,#0x18
7101fd2010  mov x1,sp
7101fd2014  bl 0x7103907f00
7101fd2018  ldur x8,[x25, #-0x10]
7101fd201c  ldrb w9,[x8, #0x8]
7101fd2020  cmp w9,#0x4
7101fd2024  b.ne 0x7101fd2030
7101fd2028  ldrb w8,[x8, #0xb]
7101fd202c  b 0x7101fd2034
7101fd2030  ldr x8,[x8, #0x10]
7101fd2034  add x8,x8,#0x1
7101fd2038  cmp x0,x8
7101fd203c  b.ne 0x7101fd205c
7101fd2040  ldr x9,[sp]
7101fd2044  scvtf s0,x9
7101fd2048  ldr w8,[sp, #0x8]
7101fd204c  cmp w8,#0x13
7101fd2050  fmov w10,s0
7101fd2054  csel w8,w10,w9,eq
7101fd2058  b 0x7101fd2060
7101fd205c  mov w8,wzr
7101fd2060  str w8,[x19, #0x24]
7101fd2064  ldr x8,[x22]
7101fd2068  sub x8,x8,#0x10
7101fd206c  str x8,[x22]
7101fd2070  ldr x9,[x24]
7101fd2074  cmp w21,#0x1
7101fd2078  b.lt 0x7101fd2098
7101fd207c  ldr x9,[x9]
7101fd2080  add x9,x9,w21, SXTW  #0x4
7101fd2084  adrp x10,0x7104862000
7101fd2088  add x10,x10,#0x960
7101fd208c  cmp x9,x8
7101fd2090  csel x1,x9,x10,cc
7101fd2094  b 0x7101fd20f4
7101fd2098  add w10,w23,#0x1
7101fd209c  cmp w21,w10
7101fd20a0  b.ge 0x7101fd20b8
7101fd20a4  cmp w21,w23
7101fd20a8  b.ne 0x7101fd20c0
7101fd20ac  ldr x8,[x20, #0x18]
7101fd20b0  add x1,x8,#0x40
7101fd20b4  b 0x7101fd20f4
7101fd20b8  add x1,x8,w21, SXTW  #0x4
7101fd20bc  b 0x7101fd20f4
7101fd20c0  ldr x8,[x9]
7101fd20c4  ldr w9,[x8, #0x8]
7101fd20c8  adrp x1,0x7104862000
7101fd20cc  add x1,x1,#0x960
7101fd20d0  cmp w9,#0x16
7101fd20d4  b.eq 0x7101fd20f4
7101fd20d8  ldr x8,[x8]
7101fd20dc  sub w9,w23,w21
7101fd20e0  add x10,x8,w9, SXTW  #0x4
7101fd20e4  ldrb w8,[x8, #0xa]
7101fd20e8  add x10,x10,#0x10
7101fd20ec  cmp w9,w8
7101fd20f0  csel x1,x1,x10,gt
7101fd20f4  adrp x2,0x7104433000
7101fd20f8  add x2,x2,#0xdee
7101fd20fc  mov x0,x20
7101fd2100  bl 0x71038f4d40
7101fd2104  ldr x8,[x20, #0x10]
7101fd2108  sub x25,x8,#0x10
7101fd210c  ldur w8,[x8, #-0x8]
7101fd2110  cmp w8,#0x13
7101fd2114  b.ne 0x7101fd2120
7101fd2118  ldr x8,[x25]
7101fd211c  b 0x7101fd2180
7101fd2120  ldr w8,[x25, #0x8]
7101fd2124  cmp w8,#0x13
7101fd2128  b.eq 0x7101fd2118
7101fd212c  cmp w8,#0x3
7101fd2130  b.eq 0x7101fd25e8
7101fd2134  and w8,w8,#0xf
7101fd2138  cmp w8,#0x4
7101fd213c  b.ne 0x7101fd217c
7101fd2140  ldr x8,[x25]
7101fd2144  add x0,x8,#0x18
7101fd2148  mov x1,sp
7101fd214c  bl 0x7103907f00
7101fd2150  ldr x8,[x25]
7101fd2154  ldrb w9,[x8, #0x8]
7101fd2158  cmp w9,#0x4
7101fd215c  b.ne 0x7101fd2168
7101fd2160  ldrb w8,[x8, #0xb]
7101fd2164  b 0x7101fd216c
7101fd2168  ldr x8,[x8, #0x10]
7101fd216c  add x8,x8,#0x1
7101fd2170  mov x25,sp
7101fd2174  cmp x0,x8
7101fd2178  b.eq 0x7101fd2120
7101fd217c  mov x8,xzr
7101fd2180  str w8,[x19, #0x28]
7101fd2184  ldr x8,[x22]
7101fd2188  sub x8,x8,#0x10
7101fd218c  str x8,[x22]
7101fd2190  ldr x9,[x24]
7101fd2194  cmp w21,#0x1
7101fd2198  b.lt 0x7101fd21b8
7101fd219c  ldr x9,[x9]
7101fd21a0  add x9,x9,w21, SXTW  #0x4
7101fd21a4  adrp x10,0x7104862000
7101fd21a8  add x10,x10,#0x960
7101fd21ac  cmp x9,x8
7101fd21b0  csel x1,x9,x10,cc
7101fd21b4  b 0x7101fd2214
7101fd21b8  add w10,w23,#0x1
7101fd21bc  cmp w21,w10
7101fd21c0  b.ge 0x7101fd21d8
7101fd21c4  cmp w21,w23
7101fd21c8  b.ne 0x7101fd21e0
7101fd21cc  ldr x8,[x20, #0x18]
7101fd21d0  add x1,x8,#0x40
7101fd21d4  b 0x7101fd2214
7101fd21d8  add x1,x8,w21, SXTW  #0x4
7101fd21dc  b 0x7101fd2214
7101fd21e0  ldr x8,[x9]
7101fd21e4  ldr w9,[x8, #0x8]
7101fd21e8  adrp x1,0x7104862000
7101fd21ec  add x1,x1,#0x960
7101fd21f0  cmp w9,#0x16
7101fd21f4  b.eq 0x7101fd2214
7101fd21f8  ldr x8,[x8]
7101fd21fc  sub w9,w23,w21
7101fd2200  add x10,x8,w9, SXTW  #0x4
7101fd2204  ldrb w8,[x8, #0xa]
7101fd2208  add x10,x10,#0x10
7101fd220c  cmp w9,w8
7101fd2210  csel x1,x1,x10,gt
7101fd2214  adrp x2,0x7104281000
7101fd2218  add x2,x2,#0x701
7101fd221c  mov x0,x20
7101fd2220  bl 0x71038f4d40
7101fd2224  ldr x8,[x20, #0x10]
7101fd2228  sub x25,x8,#0x10
7101fd222c  ldur w8,[x8, #-0x8]
7101fd2230  cmp w8,#0x13
7101fd2234  b.ne 0x7101fd2240
7101fd2238  ldr x8,[x25]
7101fd223c  b 0x7101fd22a0
7101fd2240  ldr w8,[x25, #0x8]
7101fd2244  cmp w8,#0x13
7101fd2248  b.eq 0x7101fd2238
7101fd224c  cmp w8,#0x3
7101fd2250  b.eq 0x7101fd2618
7101fd2254  and w8,w8,#0xf
7101fd2258  cmp w8,#0x4
7101fd225c  b.ne 0x7101fd229c
7101fd2260  ldr x8,[x25]
7101fd2264  add x0,x8,#0x18
7101fd2268  mov x1,sp
7101fd226c  bl 0x7103907f00
7101fd2270  ldr x8,[x25]
7101fd2274  ldrb w9,[x8, #0x8]
7101fd2278  cmp w9,#0x4
7101fd227c  b.ne 0x7101fd2288
7101fd2280  ldrb w8,[x8, #0xb]
7101fd2284  b 0x7101fd228c
7101fd2288  ldr x8,[x8, #0x10]
7101fd228c  add x8,x8,#0x1
7101fd2290  mov x25,sp
7101fd2294  cmp x0,x8
7101fd2298  b.eq 0x7101fd2240
7101fd229c  mov x8,xzr
7101fd22a0  str w8,[x19, #0x2c]
7101fd22a4  ldr x8,[x22]
7101fd22a8  sub x8,x8,#0x10
7101fd22ac  str x8,[x22]
7101fd22b0  ldr x9,[x24]
7101fd22b4  cmp w21,#0x1
7101fd22b8  b.lt 0x7101fd22d8
7101fd22bc  ldr x9,[x9]
7101fd22c0  add x9,x9,w21, SXTW  #0x4
7101fd22c4  adrp x10,0x7104862000
7101fd22c8  add x10,x10,#0x960
7101fd22cc  cmp x9,x8
7101fd22d0  csel x1,x9,x10,cc
7101fd22d4  b 0x7101fd2334
7101fd22d8  add w10,w23,#0x1
7101fd22dc  cmp w21,w10
7101fd22e0  b.ge 0x7101fd22f8
7101fd22e4  cmp w21,w23
7101fd22e8  b.ne 0x7101fd2300
7101fd22ec  ldr x8,[x20, #0x18]
7101fd22f0  add x1,x8,#0x40
7101fd22f4  b 0x7101fd2334
7101fd22f8  add x1,x8,w21, SXTW  #0x4
7101fd22fc  b 0x7101fd2334
7101fd2300  ldr x8,[x9]
7101fd2304  ldr w9,[x8, #0x8]
7101fd2308  adrp x1,0x7104862000
7101fd230c  add x1,x1,#0x960
7101fd2310  cmp w9,#0x16
7101fd2314  b.eq 0x7101fd2334
7101fd2318  ldr x8,[x8]
7101fd231c  sub w9,w23,w21
7101fd2320  add x10,x8,w9, SXTW  #0x4
7101fd2324  ldrb w8,[x8, #0xa]
7101fd2328  add x10,x10,#0x10
7101fd232c  cmp w9,w8
7101fd2330  csel x1,x1,x10,gt
7101fd2334  adrp x2,0x71042a3000
7101fd2338  add x2,x2,#0xd47
7101fd233c  mov x0,x20
7101fd2340  bl 0x71038f4d40
7101fd2344  ldr x8,[x20, #0x10]
7101fd2348  sub x25,x8,#0x10
7101fd234c  ldur w8,[x8, #-0x8]
7101fd2350  cmp w8,#0x13
7101fd2354  b.ne 0x7101fd2360
7101fd2358  ldr x8,[x25]
7101fd235c  b 0x7101fd23c0
7101fd2360  ldr w8,[x25, #0x8]
7101fd2364  cmp w8,#0x13
7101fd2368  b.eq 0x7101fd2358
7101fd236c  cmp w8,#0x3
7101fd2370  b.eq 0x7101fd2648
7101fd2374  and w8,w8,#0xf
7101fd2378  cmp w8,#0x4
7101fd237c  b.ne 0x7101fd23bc
7101fd2380  ldr x8,[x25]
7101fd2384  add x0,x8,#0x18
7101fd2388  mov x1,sp
7101fd238c  bl 0x7103907f00
7101fd2390  ldr x8,[x25]
7101fd2394  ldrb w9,[x8, #0x8]
7101fd2398  cmp w9,#0x4
7101fd239c  b.ne 0x7101fd23a8
7101fd23a0  ldrb w8,[x8, #0xb]
7101fd23a4  b 0x7101fd23ac
7101fd23a8  ldr x8,[x8, #0x10]
7101fd23ac  add x8,x8,#0x1
7101fd23b0  mov x25,sp
7101fd23b4  cmp x0,x8
7101fd23b8  b.eq 0x7101fd2360
7101fd23bc  mov x8,xzr
7101fd23c0  str w8,[x19, #0x30]
7101fd23c4  ldr x8,[x22]
7101fd23c8  sub x8,x8,#0x10
7101fd23cc  str x8,[x22]
7101fd23d0  ldr x9,[x24]
7101fd23d4  cmp w21,#0x1
7101fd23d8  b.lt 0x7101fd23f8
7101fd23dc  ldr x9,[x9]
7101fd23e0  add x9,x9,w21, SXTW  #0x4
7101fd23e4  adrp x10,0x7104862000
7101fd23e8  add x10,x10,#0x960
7101fd23ec  cmp x9,x8
7101fd23f0  csel x1,x9,x10,cc
7101fd23f4  b 0x7101fd2454
7101fd23f8  add w10,w23,#0x1
7101fd23fc  cmp w21,w10
7101fd2400  b.ge 0x7101fd2418
7101fd2404  cmp w21,w23
7101fd2408  b.ne 0x7101fd2420
7101fd240c  ldr x8,[x20, #0x18]
7101fd2410  add x1,x8,#0x40
7101fd2414  b 0x7101fd2454
7101fd2418  add x1,x8,w21, SXTW  #0x4
7101fd241c  b 0x7101fd2454
7101fd2420  ldr x8,[x9]
7101fd2424  ldr w9,[x8, #0x8]
7101fd2428  adrp x1,0x7104862000
7101fd242c  add x1,x1,#0x960
7101fd2430  cmp w9,#0x16
7101fd2434  b.eq 0x7101fd2454
7101fd2438  ldr x8,[x8]
7101fd243c  sub w9,w23,w21
7101fd2440  add x10,x8,w9, SXTW  #0x4
7101fd2444  ldrb w8,[x8, #0xa]
7101fd2448  add x10,x10,#0x10
7101fd244c  cmp w9,w8
7101fd2450  csel x1,x1,x10,gt
7101fd2454  adrp x2,0x71042e8000
7101fd2458  add x2,x2,#0x64
7101fd245c  mov x0,x20
7101fd2460  bl 0x71038f4d40
7101fd2464  ldr x8,[x20, #0x10]
7101fd2468  sub x25,x8,#0x10
7101fd246c  ldur w8,[x8, #-0x8]
7101fd2470  cmp w8,#0x13
7101fd2474  b.ne 0x7101fd2480
7101fd2478  ldr x8,[x25]
7101fd247c  b 0x7101fd24e0
7101fd2480  ldr w8,[x25, #0x8]
7101fd2484  cmp w8,#0x13
7101fd2488  b.eq 0x7101fd2478
7101fd248c  cmp w8,#0x3
7101fd2490  b.eq 0x7101fd2678
7101fd2494  and w8,w8,#0xf
7101fd2498  cmp w8,#0x4
7101fd249c  b.ne 0x7101fd24dc
7101fd24a0  ldr x8,[x25]
7101fd24a4  add x0,x8,#0x18
7101fd24a8  mov x1,sp
7101fd24ac  bl 0x7103907f00
7101fd24b0  ldr x8,[x25]
7101fd24b4  ldrb w9,[x8, #0x8]
7101fd24b8  cmp w9,#0x4
7101fd24bc  b.ne 0x7101fd24c8
7101fd24c0  ldrb w8,[x8, #0xb]
7101fd24c4  b 0x7101fd24cc
7101fd24c8  ldr x8,[x8, #0x10]
7101fd24cc  add x8,x8,#0x1
7101fd24d0  mov x25,sp
7101fd24d4  cmp x0,x8
7101fd24d8  b.eq 0x7101fd2480
7101fd24dc  mov x8,xzr
7101fd24e0  str w8,[x19, #0x34]
7101fd24e4  ldr x8,[x22]
7101fd24e8  sub x8,x8,#0x10
7101fd24ec  str x8,[x22]
7101fd24f0  ldr x9,[x24]
7101fd24f4  cmp w21,#0x1
7101fd24f8  b.lt 0x7101fd2518
7101fd24fc  ldr x9,[x9]
7101fd2500  add x9,x9,w21, SXTW  #0x4
7101fd2504  adrp x10,0x7104862000
7101fd2508  add x10,x10,#0x960
7101fd250c  cmp x9,x8
7101fd2510  csel x1,x9,x10,cc
7101fd2514  b 0x7101fd2574
7101fd2518  add w10,w23,#0x1
7101fd251c  cmp w21,w10
7101fd2520  b.ge 0x7101fd2538
7101fd2524  cmp w21,w23
7101fd2528  b.ne 0x7101fd2540
7101fd252c  ldr x8,[x20, #0x18]
7101fd2530  add x1,x8,#0x40
7101fd2534  b 0x7101fd2574
7101fd2538  add x1,x8,w21, SXTW  #0x4
7101fd253c  b 0x7101fd2574
7101fd2540  ldr x8,[x9]
7101fd2544  ldr w9,[x8, #0x8]
7101fd2548  adrp x1,0x7104862000
7101fd254c  add x1,x1,#0x960
7101fd2550  cmp w9,#0x16
7101fd2554  b.eq 0x7101fd2574
7101fd2558  ldr x8,[x8]
7101fd255c  sub w9,w23,w21
7101fd2560  add x10,x8,w9, SXTW  #0x4
7101fd2564  ldrb w8,[x8, #0xa]
7101fd2568  add x10,x10,#0x10
7101fd256c  cmp w9,w8
7101fd2570  csel x1,x1,x10,gt
7101fd2574  adrp x2,0x71043d0000
7101fd2578  add x2,x2,#0x1b8
7101fd257c  mov x0,x20
7101fd2580  bl 0x71038f4d40
7101fd2584  ldr x25,[x20, #0x10]
7101fd2588  ldur w8,[x25, #-0x8]
7101fd258c  cmp w8,#0x3
7101fd2590  b.ne 0x7101fd259c
7101fd2594  ldur w8,[x25, #-0x10]
7101fd2598  b 0x7101fd26d8
7101fd259c  cmp w8,#0x13
7101fd25a0  b.ne 0x7101fd25b4
7101fd25a4  ldur x8,[x25, #-0x10]
7101fd25a8  scvtf s0,x8
7101fd25ac  fmov w8,s0
7101fd25b0  b 0x7101fd26d8
7101fd25b4  and w8,w8,#0xf
7101fd25b8  cmp w8,#0x4
7101fd25bc  b.ne 0x7101fd26d4
7101fd25c0  ldur x8,[x25, #-0x10]
7101fd25c4  add x0,x8,#0x18
7101fd25c8  mov x1,sp
7101fd25cc  bl 0x7103907f00
7101fd25d0  ldur x8,[x25, #-0x10]
7101fd25d4  ldrb w9,[x8, #0x8]
7101fd25d8  cmp w9,#0x4
7101fd25dc  b.ne 0x7101fd26a8
7101fd25e0  ldrb w8,[x8, #0xb]
7101fd25e4  b 0x7101fd26ac
7101fd25e8  ldr s0,[x25]
7101fd25ec  adrp x8,0x7104472000
7101fd25f0  ldr s1,[x8, #0x8f4]
7101fd25f4  frintm s0,s0
7101fd25f8  fcmp s0,s1
7101fd25fc  b.lt 0x7101fd217c
7101fd2600  adrp x8,0x7104472000
7101fd2604  ldr s1,[x8, #0xe68]
7101fd2608  fcmp s0,s1
7101fd260c  b.pl 0x7101fd217c
7101fd2610  fcvtzs x8,s0
7101fd2614  b 0x7101fd2180
7101fd2618  ldr s0,[x25]
7101fd261c  adrp x8,0x7104472000
7101fd2620  ldr s1,[x8, #0x8f4]
7101fd2624  frintm s0,s0
7101fd2628  fcmp s0,s1
7101fd262c  b.lt 0x7101fd229c
7101fd2630  adrp x8,0x7104472000
7101fd2634  ldr s1,[x8, #0xe68]
7101fd2638  fcmp s0,s1
7101fd263c  b.pl 0x7101fd229c
7101fd2640  fcvtzs x8,s0
7101fd2644  b 0x7101fd22a0
7101fd2648  ldr s0,[x25]
7101fd264c  adrp x8,0x7104472000
7101fd2650  ldr s1,[x8, #0x8f4]
7101fd2654  frintm s0,s0
7101fd2658  fcmp s0,s1
7101fd265c  b.lt 0x7101fd23bc
7101fd2660  adrp x8,0x7104472000
7101fd2664  ldr s1,[x8, #0xe68]
7101fd2668  fcmp s0,s1
7101fd266c  b.pl 0x7101fd23bc
7101fd2670  fcvtzs x8,s0
7101fd2674  b 0x7101fd23c0
7101fd2678  ldr s0,[x25]
7101fd267c  adrp x8,0x7104472000
7101fd2680  ldr s1,[x8, #0x8f4]
7101fd2684  frintm s0,s0
7101fd2688  fcmp s0,s1
7101fd268c  b.lt 0x7101fd24dc
7101fd2690  adrp x8,0x7104472000
7101fd2694  ldr s1,[x8, #0xe68]
7101fd2698  fcmp s0,s1
7101fd269c  b.pl 0x7101fd24dc
7101fd26a0  fcvtzs x8,s0
7101fd26a4  b 0x7101fd24e0
7101fd26a8  ldr x8,[x8, #0x10]
7101fd26ac  add x8,x8,#0x1
7101fd26b0  cmp x0,x8
7101fd26b4  b.ne 0x7101fd26d4
7101fd26b8  ldr x9,[sp]
7101fd26bc  scvtf s0,x9
7101fd26c0  ldr w8,[sp, #0x8]
7101fd26c4  cmp w8,#0x13
7101fd26c8  fmov w10,s0
7101fd26cc  csel w8,w10,w9,eq
7101fd26d0  b 0x7101fd26d8
7101fd26d4  mov w8,wzr
7101fd26d8  str w8,[x19, #0x38]
7101fd26dc  ldr x8,[x22]
7101fd26e0  sub x8,x8,#0x10
7101fd26e4  str x8,[x22]
7101fd26e8  ldr x9,[x24]
7101fd26ec  cmp w21,#0x1
7101fd26f0  b.lt 0x7101fd2710
7101fd26f4  ldr x9,[x9]
7101fd26f8  add x9,x9,w21, SXTW  #0x4
7101fd26fc  adrp x10,0x7104862000
7101fd2700  add x10,x10,#0x960
7101fd2704  cmp x9,x8
7101fd2708  csel x1,x9,x10,cc
7101fd270c  b 0x7101fd276c
7101fd2710  add w10,w23,#0x1
7101fd2714  cmp w21,w10
7101fd2718  b.ge 0x7101fd2730
7101fd271c  cmp w21,w23
7101fd2720  b.ne 0x7101fd2738
7101fd2724  ldr x8,[x20, #0x18]
7101fd2728  add x1,x8,#0x40
7101fd272c  b 0x7101fd276c
7101fd2730  add x1,x8,w21, SXTW  #0x4
7101fd2734  b 0x7101fd276c
7101fd2738  ldr x8,[x9]
7101fd273c  ldr w9,[x8, #0x8]
7101fd2740  adrp x1,0x7104862000
7101fd2744  add x1,x1,#0x960
7101fd2748  cmp w9,#0x16
7101fd274c  b.eq 0x7101fd276c
7101fd2750  ldr x8,[x8]
7101fd2754  sub w9,w23,w21
7101fd2758  add x10,x8,w9, SXTW  #0x4
7101fd275c  ldrb w8,[x8, #0xa]
7101fd2760  add x10,x10,#0x10
7101fd2764  cmp w9,w8
7101fd2768  csel x1,x1,x10,gt
7101fd276c  adrp x2,0x71042c5000
7101fd2770  add x2,x2,#0xcef
7101fd2774  mov x0,x20
7101fd2778  bl 0x71038f4d40
7101fd277c  ldr x25,[x20, #0x10]
7101fd2780  ldur w8,[x25, #-0x8]
7101fd2784  cmp w8,#0x3
7101fd2788  b.ne 0x7101fd2794
7101fd278c  ldur w8,[x25, #-0x10]
7101fd2790  b 0x7101fd2810
7101fd2794  cmp w8,#0x13
7101fd2798  b.ne 0x7101fd27ac
7101fd279c  ldur x8,[x25, #-0x10]
7101fd27a0  scvtf s0,x8
7101fd27a4  fmov w8,s0
7101fd27a8  b 0x7101fd2810
7101fd27ac  and w8,w8,#0xf
7101fd27b0  cmp w8,#0x4
7101fd27b4  b.ne 0x7101fd280c
7101fd27b8  ldur x8,[x25, #-0x10]
7101fd27bc  add x0,x8,#0x18
7101fd27c0  mov x1,sp
7101fd27c4  bl 0x7103907f00
7101fd27c8  ldur x8,[x25, #-0x10]
7101fd27cc  ldrb w9,[x8, #0x8]
7101fd27d0  cmp w9,#0x4
7101fd27d4  b.ne 0x7101fd27e0
7101fd27d8  ldrb w8,[x8, #0xb]
7101fd27dc  b 0x7101fd27e4
7101fd27e0  ldr x8,[x8, #0x10]
7101fd27e4  add x8,x8,#0x1
7101fd27e8  cmp x0,x8
7101fd27ec  b.ne 0x7101fd280c
7101fd27f0  ldr x9,[sp]
7101fd27f4  scvtf s0,x9
7101fd27f8  ldr w8,[sp, #0x8]
7101fd27fc  cmp w8,#0x13
7101fd2800  fmov w10,s0
7101fd2804  csel w8,w10,w9,eq
7101fd2808  b 0x7101fd2810
7101fd280c  mov w8,wzr
7101fd2810  str w8,[x19, #0x3c]
7101fd2814  ldr x8,[x22]
7101fd2818  sub x8,x8,#0x10
7101fd281c  str x8,[x22]
7101fd2820  ldr x9,[x24]
7101fd2824  cmp w21,#0x1
7101fd2828  b.lt 0x7101fd2848
7101fd282c  ldr x9,[x9]
7101fd2830  add x9,x9,w21, SXTW  #0x4
7101fd2834  adrp x10,0x7104862000
7101fd2838  add x10,x10,#0x960
7101fd283c  cmp x9,x8
7101fd2840  csel x1,x9,x10,cc
7101fd2844  b 0x7101fd28a4
7101fd2848  add w10,w23,#0x1
7101fd284c  cmp w21,w10
7101fd2850  b.ge 0x7101fd2868
7101fd2854  cmp w21,w23
7101fd2858  b.ne 0x7101fd2870
7101fd285c  ldr x8,[x20, #0x18]
7101fd2860  add x1,x8,#0x40
7101fd2864  b 0x7101fd28a4
7101fd2868  add x1,x8,w21, SXTW  #0x4
7101fd286c  b 0x7101fd28a4
7101fd2870  ldr x8,[x9]
7101fd2874  ldr w9,[x8, #0x8]
7101fd2878  adrp x1,0x7104862000
7101fd287c  add x1,x1,#0x960
7101fd2880  cmp w9,#0x16
7101fd2884  b.eq 0x7101fd28a4
7101fd2888  ldr x8,[x8]
7101fd288c  sub w9,w23,w21
7101fd2890  add x10,x8,w9, SXTW  #0x4
7101fd2894  ldrb w8,[x8, #0xa]
7101fd2898  add x10,x10,#0x10
7101fd289c  cmp w9,w8
7101fd28a0  csel x1,x1,x10,gt
7101fd28a4  adrp x2,0x71043bf000
7101fd28a8  add x2,x2,#0x398
7101fd28ac  mov x0,x20
7101fd28b0  bl 0x71038f4d40
7101fd28b4  ldr x25,[x20, #0x10]
7101fd28b8  ldur w8,[x25, #-0x8]
7101fd28bc  cmp w8,#0x3
7101fd28c0  b.ne 0x7101fd28cc
7101fd28c4  ldur w8,[x25, #-0x10]
7101fd28c8  b 0x7101fd2948
7101fd28cc  cmp w8,#0x13
7101fd28d0  b.ne 0x7101fd28e4
7101fd28d4  ldur x8,[x25, #-0x10]
7101fd28d8  scvtf s0,x8
7101fd28dc  fmov w8,s0
7101fd28e0  b 0x7101fd2948
7101fd28e4  and w8,w8,#0xf
7101fd28e8  cmp w8,#0x4
7101fd28ec  b.ne 0x7101fd2944
7101fd28f0  ldur x8,[x25, #-0x10]
7101fd28f4  add x0,x8,#0x18
7101fd28f8  mov x1,sp
7101fd28fc  bl 0x7103907f00
7101fd2900  ldur x8,[x25, #-0x10]
7101fd2904  ldrb w9,[x8, #0x8]
7101fd2908  cmp w9,#0x4
7101fd290c  b.ne 0x7101fd2918
7101fd2910  ldrb w8,[x8, #0xb]
7101fd2914  b 0x7101fd291c
7101fd2918  ldr x8,[x8, #0x10]
7101fd291c  add x8,x8,#0x1
7101fd2920  cmp x0,x8
7101fd2924  b.ne 0x7101fd2944
7101fd2928  ldr x9,[sp]
7101fd292c  scvtf s0,x9
7101fd2930  ldr w8,[sp, #0x8]
7101fd2934  cmp w8,#0x13
7101fd2938  fmov w10,s0
7101fd293c  csel w8,w10,w9,eq
7101fd2940  b 0x7101fd2948
7101fd2944  mov w8,wzr
7101fd2948  str w8,[x19, #0x40]
7101fd294c  ldr x8,[x22]
7101fd2950  sub x8,x8,#0x10
7101fd2954  str x8,[x22]
7101fd2958  ldr x9,[x24]
7101fd295c  cmp w21,#0x1
7101fd2960  b.lt 0x7101fd2980
7101fd2964  ldr x9,[x9]
7101fd2968  add x9,x9,w21, SXTW  #0x4
7101fd296c  adrp x10,0x7104862000
7101fd2970  add x10,x10,#0x960
7101fd2974  cmp x9,x8
7101fd2978  csel x1,x9,x10,cc
7101fd297c  b 0x7101fd29dc
7101fd2980  add w10,w23,#0x1
7101fd2984  cmp w21,w10
7101fd2988  b.ge 0x7101fd29a0
7101fd298c  cmp w21,w23
7101fd2990  b.ne 0x7101fd29a8
7101fd2994  ldr x8,[x20, #0x18]
7101fd2998  add x1,x8,#0x40
7101fd299c  b 0x7101fd29dc
7101fd29a0  add x1,x8,w21, SXTW  #0x4
7101fd29a4  b 0x7101fd29dc
7101fd29a8  ldr x8,[x9]
7101fd29ac  ldr w9,[x8, #0x8]
7101fd29b0  adrp x1,0x7104862000
7101fd29b4  add x1,x1,#0x960
7101fd29b8  cmp w9,#0x16
7101fd29bc  b.eq 0x7101fd29dc
7101fd29c0  ldr x8,[x8]
7101fd29c4  sub w9,w23,w21
7101fd29c8  add x10,x8,w9, SXTW  #0x4
7101fd29cc  ldrb w8,[x8, #0xa]
7101fd29d0  add x10,x10,#0x10
7101fd29d4  cmp w9,w8
7101fd29d8  csel x1,x1,x10,gt
7101fd29dc  adrp x2,0x71042e8000
7101fd29e0  add x2,x2,#0x6b
7101fd29e4  mov x0,x20
7101fd29e8  bl 0x71038f4d40
7101fd29ec  ldr x8,[x20, #0x10]
7101fd29f0  sub x25,x8,#0x10
7101fd29f4  ldur w8,[x8, #-0x8]
7101fd29f8  cmp w8,#0x13
7101fd29fc  b.ne 0x7101fd2a08
7101fd2a00  ldr x8,[x25]
7101fd2a04  b 0x7101fd2a68
7101fd2a08  ldr w8,[x25, #0x8]
7101fd2a0c  cmp w8,#0x13
7101fd2a10  b.eq 0x7101fd2a00
7101fd2a14  cmp w8,#0x3
7101fd2a18  b.eq 0x7101fd51c4
7101fd2a1c  and w8,w8,#0xf
7101fd2a20  cmp w8,#0x4
7101fd2a24  b.ne 0x7101fd2a64
7101fd2a28  ldr x8,[x25]
7101fd2a2c  add x0,x8,#0x18
7101fd2a30  mov x1,sp
7101fd2a34  bl 0x7103907f00
7101fd2a38  ldr x8,[x25]
7101fd2a3c  ldrb w9,[x8, #0x8]
7101fd2a40  cmp w9,#0x4
7101fd2a44  b.ne 0x7101fd2a50
7101fd2a48  ldrb w8,[x8, #0xb]
7101fd2a4c  b 0x7101fd2a54
7101fd2a50  ldr x8,[x8, #0x10]
7101fd2a54  add x8,x8,#0x1
7101fd2a58  mov x25,sp
7101fd2a5c  cmp x0,x8
7101fd2a60  b.eq 0x7101fd2a08
7101fd2a64  mov x8,xzr
7101fd2a68  str x8,[x19, #0x48]
7101fd2a6c  ldr x8,[x22]
7101fd2a70  sub x8,x8,#0x10
7101fd2a74  str x8,[x22]
7101fd2a78  ldr x9,[x24]
7101fd2a7c  cmp w21,#0x1
7101fd2a80  b.lt 0x7101fd2aa0
7101fd2a84  ldr x9,[x9]
7101fd2a88  add x9,x9,w21, SXTW  #0x4
7101fd2a8c  adrp x10,0x7104862000
7101fd2a90  add x10,x10,#0x960
7101fd2a94  cmp x9,x8
7101fd2a98  csel x1,x9,x10,cc
7101fd2a9c  b 0x7101fd2afc
7101fd2aa0  add w10,w23,#0x1
7101fd2aa4  cmp w21,w10
7101fd2aa8  b.ge 0x7101fd2ac0
7101fd2aac  cmp w21,w23
7101fd2ab0  b.ne 0x7101fd2ac8
7101fd2ab4  ldr x8,[x20, #0x18]
7101fd2ab8  add x1,x8,#0x40
7101fd2abc  b 0x7101fd2afc
7101fd2ac0  add x1,x8,w21, SXTW  #0x4
7101fd2ac4  b 0x7101fd2afc
7101fd2ac8  ldr x8,[x9]
7101fd2acc  ldr w9,[x8, #0x8]
7101fd2ad0  adrp x1,0x7104862000
7101fd2ad4  add x1,x1,#0x960
7101fd2ad8  cmp w9,#0x16
7101fd2adc  b.eq 0x7101fd2afc
7101fd2ae0  ldr x8,[x8]
7101fd2ae4  sub w9,w23,w21
7101fd2ae8  add x10,x8,w9, SXTW  #0x4
7101fd2aec  ldrb w8,[x8, #0xa]
7101fd2af0  add x10,x10,#0x10
7101fd2af4  cmp w9,w8
7101fd2af8  csel x1,x1,x10,gt
7101fd2afc  adrp x2,0x71043bf000
7101fd2b00  add x2,x2,#0x375
7101fd2b04  mov x0,x20
7101fd2b08  bl 0x71038f4d40
7101fd2b0c  ldr x8,[x20, #0x10]
7101fd2b10  sub x25,x8,#0x10
7101fd2b14  ldur w8,[x8, #-0x8]
7101fd2b18  cmp w8,#0x13
7101fd2b1c  b.ne 0x7101fd2b28
7101fd2b20  ldr x8,[x25]
7101fd2b24  b 0x7101fd2b88
7101fd2b28  ldr w8,[x25, #0x8]
7101fd2b2c  cmp w8,#0x13
7101fd2b30  b.eq 0x7101fd2b20
7101fd2b34  cmp w8,#0x3
7101fd2b38  b.eq 0x7101fd51f4
7101fd2b3c  and w8,w8,#0xf
7101fd2b40  cmp w8,#0x4
7101fd2b44  b.ne 0x7101fd2b84
7101fd2b48  ldr x8,[x25]
7101fd2b4c  add x0,x8,#0x18
7101fd2b50  mov x1,sp
7101fd2b54  bl 0x7103907f00
7101fd2b58  ldr x8,[x25]
7101fd2b5c  ldrb w9,[x8, #0x8]
7101fd2b60  cmp w9,#0x4
7101fd2b64  b.ne 0x7101fd2b70
7101fd2b68  ldrb w8,[x8, #0xb]
7101fd2b6c  b 0x7101fd2b74
7101fd2b70  ldr x8,[x8, #0x10]
7101fd2b74  add x8,x8,#0x1
7101fd2b78  mov x25,sp
7101fd2b7c  cmp x0,x8
7101fd2b80  b.eq 0x7101fd2b28
7101fd2b84  mov x8,xzr
7101fd2b88  strh w8,[x19, #0x50]
7101fd2b8c  ldr x8,[x22]
7101fd2b90  sub x8,x8,#0x10
7101fd2b94  str x8,[x22]
7101fd2b98  ldr x9,[x24]
7101fd2b9c  cmp w21,#0x1
7101fd2ba0  b.lt 0x7101fd2bc0
7101fd2ba4  ldr x9,[x9]
7101fd2ba8  add x9,x9,w21, SXTW  #0x4
7101fd2bac  adrp x10,0x7104862000
7101fd2bb0  add x10,x10,#0x960
7101fd2bb4  cmp x9,x8
7101fd2bb8  csel x1,x9,x10,cc
7101fd2bbc  b 0x7101fd2c1c
7101fd2bc0  add w10,w23,#0x1
7101fd2bc4  cmp w21,w10
7101fd2bc8  b.ge 0x7101fd2be0
7101fd2bcc  cmp w21,w23
7101fd2bd0  b.ne 0x7101fd2be8
7101fd2bd4  ldr x8,[x20, #0x18]
7101fd2bd8  add x1,x8,#0x40
7101fd2bdc  b 0x7101fd2c1c
7101fd2be0  add x1,x8,w21, SXTW  #0x4
7101fd2be4  b 0x7101fd2c1c
7101fd2be8  ldr x8,[x9]
7101fd2bec  ldr w9,[x8, #0x8]
7101fd2bf0  adrp x1,0x7104862000
7101fd2bf4  add x1,x1,#0x960
7101fd2bf8  cmp w9,#0x16
7101fd2bfc  b.eq 0x7101fd2c1c
7101fd2c00  ldr x8,[x8]
7101fd2c04  sub w9,w23,w21
7101fd2c08  add x10,x8,w9, SXTW  #0x4
7101fd2c0c  ldrb w8,[x8, #0xa]
7101fd2c10  add x10,x10,#0x10
7101fd2c14  cmp w9,w8
7101fd2c18  csel x1,x1,x10,gt
7101fd2c1c  adrp x2,0x71042d7000
7101fd2c20  add x2,x2,#0x171
7101fd2c24  mov x0,x20
7101fd2c28  bl 0x71038f4d40
7101fd2c2c  ldr x8,[x20, #0x10]
7101fd2c30  sub x25,x8,#0x10
7101fd2c34  ldur w8,[x8, #-0x8]
7101fd2c38  cmp w8,#0x13
7101fd2c3c  b.ne 0x7101fd2c48
7101fd2c40  ldr x8,[x25]
7101fd2c44  b 0x7101fd2ca8
7101fd2c48  ldr w8,[x25, #0x8]
7101fd2c4c  cmp w8,#0x13
7101fd2c50  b.eq 0x7101fd2c40
7101fd2c54  cmp w8,#0x3
7101fd2c58  b.eq 0x7101fd5224
7101fd2c5c  and w8,w8,#0xf
7101fd2c60  cmp w8,#0x4
7101fd2c64  b.ne 0x7101fd2ca4
7101fd2c68  ldr x8,[x25]
7101fd2c6c  add x0,x8,#0x18
7101fd2c70  mov x1,sp
7101fd2c74  bl 0x7103907f00
7101fd2c78  ldr x8,[x25]
7101fd2c7c  ldrb w9,[x8, #0x8]
7101fd2c80  cmp w9,#0x4
7101fd2c84  b.ne 0x7101fd2c90
7101fd2c88  ldrb w8,[x8, #0xb]
7101fd2c8c  b 0x7101fd2c94
7101fd2c90  ldr x8,[x8, #0x10]
7101fd2c94  add x8,x8,#0x1
7101fd2c98  mov x25,sp
7101fd2c9c  cmp x0,x8
7101fd2ca0  b.eq 0x7101fd2c48
7101fd2ca4  mov x8,xzr
7101fd2ca8  strb w8,[x19, #0x52]
7101fd2cac  ldr x8,[x22]
7101fd2cb0  sub x8,x8,#0x10
7101fd2cb4  str x8,[x22]
7101fd2cb8  ldr x9,[x24]
7101fd2cbc  cmp w21,#0x1
7101fd2cc0  b.lt 0x7101fd2ce0
7101fd2cc4  ldr x9,[x9]
7101fd2cc8  add x9,x9,w21, SXTW  #0x4
7101fd2ccc  adrp x10,0x7104862000
7101fd2cd0  add x10,x10,#0x960
7101fd2cd4  cmp x9,x8
7101fd2cd8  csel x1,x9,x10,cc
7101fd2cdc  b 0x7101fd2d3c
7101fd2ce0  add w10,w23,#0x1
7101fd2ce4  cmp w21,w10
7101fd2ce8  b.ge 0x7101fd2d00
7101fd2cec  cmp w21,w23
7101fd2cf0  b.ne 0x7101fd2d08
7101fd2cf4  ldr x8,[x20, #0x18]
7101fd2cf8  add x1,x8,#0x40
7101fd2cfc  b 0x7101fd2d3c
7101fd2d00  add x1,x8,w21, SXTW  #0x4
7101fd2d04  b 0x7101fd2d3c
7101fd2d08  ldr x8,[x9]
7101fd2d0c  ldr w9,[x8, #0x8]
7101fd2d10  adrp x1,0x7104862000
7101fd2d14  add x1,x1,#0x960
7101fd2d18  cmp w9,#0x16
7101fd2d1c  b.eq 0x7101fd2d3c
7101fd2d20  ldr x8,[x8]
7101fd2d24  sub w9,w23,w21
7101fd2d28  add x10,x8,w9, SXTW  #0x4
7101fd2d2c  ldrb w8,[x8, #0xa]
7101fd2d30  add x10,x10,#0x10
7101fd2d34  cmp w9,w8
7101fd2d38  csel x1,x1,x10,gt
7101fd2d3c  adrp x2,0x710432a000
7101fd2d40  add x2,x2,#0xe01
7101fd2d44  mov x0,x20
7101fd2d48  bl 0x71038f4d40
7101fd2d4c  ldr x8,[x20, #0x10]
7101fd2d50  ldur w9,[x8, #-0x8]
7101fd2d54  cbz w9,0x7101fd2da4
7101fd2d58  cmp w9,#0x13
7101fd2d5c  b.eq 0x7101fd2d74
7101fd2d60  cmp w9,#0x1
7101fd2d64  b.ne 0x7101fd2d8c
7101fd2d68  ldur w8,[x8, #-0x10]
7101fd2d6c  cmp w8,#0x0
7101fd2d70  b 0x7101fd2dbc
7101fd2d74  ldur x10,[x8, #-0x10]
7101fd2d78  cbz x10,0x7101fd2da4
7101fd2d7c  scvtf s0,x10
7101fd2d80  fcmp s0,#0.0
7101fd2d84  b.eq 0x7101fd2da4
7101fd2d88  b 0x7101fd2dac
7101fd2d8c  and w10,w9,#0xf
7101fd2d90  cmp w10,#0x3
7101fd2d94  b.ne 0x7101fd2dac
7101fd2d98  ldur s0,[x8, #-0x10]
7101fd2d9c  fcmp s0,#0.0
7101fd2da0  b.ne 0x7101fd2dac
7101fd2da4  mov w8,wzr
7101fd2da8  b 0x7101fd2dc8
7101fd2dac  cmp w9,#0x3
7101fd2db0  b.ne 0x7101fd2dc4
7101fd2db4  ldur s0,[x8, #-0x10]
7101fd2db8  fcmp s0,#0.0
7101fd2dbc  cset w8,ne
7101fd2dc0  b 0x7101fd2dc8
7101fd2dc4  mov w8,#0x1
7101fd2dc8  strb w8,[x19, #0x53]
7101fd2dcc  ldr x8,[x22]
7101fd2dd0  sub x8,x8,#0x10
7101fd2dd4  str x8,[x22]
7101fd2dd8  ldr x9,[x24]
7101fd2ddc  cmp w21,#0x1
7101fd2de0  b.lt 0x7101fd2e00
7101fd2de4  ldr x9,[x9]
7101fd2de8  add x9,x9,w21, SXTW  #0x4
7101fd2dec  adrp x10,0x7104862000
7101fd2df0  add x10,x10,#0x960
7101fd2df4  cmp x9,x8
7101fd2df8  csel x1,x9,x10,cc
7101fd2dfc  b 0x7101fd2e5c
7101fd2e00  add w10,w23,#0x1
7101fd2e04  cmp w21,w10
7101fd2e08  b.ge 0x7101fd2e20
7101fd2e0c  cmp w21,w23
7101fd2e10  b.ne 0x7101fd2e28
7101fd2e14  ldr x8,[x20, #0x18]
7101fd2e18  add x1,x8,#0x40
7101fd2e1c  b 0x7101fd2e5c
7101fd2e20  add x1,x8,w21, SXTW  #0x4
7101fd2e24  b 0x7101fd2e5c
7101fd2e28  ldr x8,[x9]
7101fd2e2c  ldr w9,[x8, #0x8]
7101fd2e30  adrp x1,0x7104862000
7101fd2e34  add x1,x1,#0x960
7101fd2e38  cmp w9,#0x16
7101fd2e3c  b.eq 0x7101fd2e5c
7101fd2e40  ldr x8,[x8]
7101fd2e44  sub w9,w23,w21
7101fd2e48  add x10,x8,w9, SXTW  #0x4
7101fd2e4c  ldrb w8,[x8, #0xa]
7101fd2e50  add x10,x10,#0x10
7101fd2e54  cmp w9,w8
7101fd2e58  csel x1,x1,x10,gt
7101fd2e5c  adrp x2,0x7104455000
7101fd2e60  add x2,x2,#0x8bb
7101fd2e64  mov x0,x20
7101fd2e68  bl 0x71038f4d40
7101fd2e6c  ldr x8,[x20, #0x10]
7101fd2e70  sub x25,x8,#0x10
7101fd2e74  ldur w8,[x8, #-0x8]
7101fd2e78  cmp w8,#0x13
7101fd2e7c  b.ne 0x7101fd2e88
7101fd2e80  ldr x8,[x25]
7101fd2e84  b 0x7101fd2ee8
7101fd2e88  ldr w8,[x25, #0x8]
7101fd2e8c  cmp w8,#0x13
7101fd2e90  b.eq 0x7101fd2e80
7101fd2e94  cmp w8,#0x3
7101fd2e98  b.eq 0x7101fd5254
7101fd2e9c  and w8,w8,#0xf
7101fd2ea0  cmp w8,#0x4
7101fd2ea4  b.ne 0x7101fd2ee4
7101fd2ea8  ldr x8,[x25]
7101fd2eac  add x0,x8,#0x18
7101fd2eb0  mov x1,sp
7101fd2eb4  bl 0x7103907f00
7101fd2eb8  ldr x8,[x25]
7101fd2ebc  ldrb w9,[x8, #0x8]
7101fd2ec0  cmp w9,#0x4
7101fd2ec4  b.ne 0x7101fd2ed0
7101fd2ec8  ldrb w8,[x8, #0xb]
7101fd2ecc  b 0x7101fd2ed4
7101fd2ed0  ldr x8,[x8, #0x10]
7101fd2ed4  add x8,x8,#0x1
7101fd2ed8  mov x25,sp
7101fd2edc  cmp x0,x8
7101fd2ee0  b.eq 0x7101fd2e88
7101fd2ee4  mov x8,xzr
7101fd2ee8  strb w8,[x19, #0x54]
7101fd2eec  ldr x8,[x22]
7101fd2ef0  sub x8,x8,#0x10
7101fd2ef4  str x8,[x22]
7101fd2ef8  ldr x9,[x24]
7101fd2efc  cmp w21,#0x1
7101fd2f00  b.lt 0x7101fd2f20
7101fd2f04  ldr x9,[x9]
7101fd2f08  add x9,x9,w21, SXTW  #0x4
7101fd2f0c  adrp x10,0x7104862000
7101fd2f10  add x10,x10,#0x960
7101fd2f14  cmp x9,x8
7101fd2f18  csel x1,x9,x10,cc
7101fd2f1c  b 0x7101fd2f7c
7101fd2f20  add w10,w23,#0x1
7101fd2f24  cmp w21,w10
7101fd2f28  b.ge 0x7101fd2f40
7101fd2f2c  cmp w21,w23
7101fd2f30  b.ne 0x7101fd2f48
7101fd2f34  ldr x8,[x20, #0x18]
7101fd2f38  add x1,x8,#0x40
7101fd2f3c  b 0x7101fd2f7c
7101fd2f40  add x1,x8,w21, SXTW  #0x4
7101fd2f44  b 0x7101fd2f7c
7101fd2f48  ldr x8,[x9]
7101fd2f4c  ldr w9,[x8, #0x8]
7101fd2f50  adrp x1,0x7104862000
7101fd2f54  add x1,x1,#0x960
7101fd2f58  cmp w9,#0x16
7101fd2f5c  b.eq 0x7101fd2f7c
7101fd2f60  ldr x8,[x8]
7101fd2f64  sub w9,w23,w21
7101fd2f68  add x10,x8,w9, SXTW  #0x4
7101fd2f6c  ldrb w8,[x8, #0xa]
7101fd2f70  add x10,x10,#0x10
7101fd2f74  cmp w9,w8
7101fd2f78  csel x1,x1,x10,gt
7101fd2f7c  adrp x2,0x71042a3000
7101fd2f80  add x2,x2,#0xd4e
7101fd2f84  mov x0,x20
7101fd2f88  bl 0x71038f4d40
7101fd2f8c  ldr x8,[x20, #0x10]
7101fd2f90  sub x25,x8,#0x10
7101fd2f94  ldur w8,[x8, #-0x8]
7101fd2f98  cmp w8,#0x13
7101fd2f9c  b.ne 0x7101fd2fa8
7101fd2fa0  ldr x8,[x25]
7101fd2fa4  b 0x7101fd3008
7101fd2fa8  ldr w8,[x25, #0x8]
7101fd2fac  cmp w8,#0x13
7101fd2fb0  b.eq 0x7101fd2fa0
7101fd2fb4  cmp w8,#0x3
7101fd2fb8  b.eq 0x7101fd5284
7101fd2fbc  and w8,w8,#0xf
7101fd2fc0  cmp w8,#0x4
7101fd2fc4  b.ne 0x7101fd3004
7101fd2fc8  ldr x8,[x25]
7101fd2fcc  add x0,x8,#0x18
7101fd2fd0  mov x1,sp
7101fd2fd4  bl 0x7103907f00
7101fd2fd8  ldr x8,[x25]
7101fd2fdc  ldrb w9,[x8, #0x8]
7101fd2fe0  cmp w9,#0x4
7101fd2fe4  b.ne 0x7101fd2ff0
7101fd2fe8  ldrb w8,[x8, #0xb]
7101fd2fec  b 0x7101fd2ff4
7101fd2ff0  ldr x8,[x8, #0x10]
7101fd2ff4  add x8,x8,#0x1
7101fd2ff8  mov x25,sp
7101fd2ffc  cmp x0,x8
7101fd3000  b.eq 0x7101fd2fa8
7101fd3004  mov x8,xzr
7101fd3008  str x8,[x19, #0x58]
7101fd300c  ldr x8,[x22]
7101fd3010  sub x8,x8,#0x10
7101fd3014  str x8,[x22]
7101fd3018  ldr x9,[x24]
7101fd301c  cmp w21,#0x1
7101fd3020  b.lt 0x7101fd3040
7101fd3024  ldr x9,[x9]
7101fd3028  add x9,x9,w21, SXTW  #0x4
7101fd302c  adrp x10,0x7104862000
7101fd3030  add x10,x10,#0x960
7101fd3034  cmp x9,x8
7101fd3038  csel x1,x9,x10,cc
7101fd303c  b 0x7101fd309c
7101fd3040  add w10,w23,#0x1
7101fd3044  cmp w21,w10
7101fd3048  b.ge 0x7101fd3060
7101fd304c  cmp w21,w23
7101fd3050  b.ne 0x7101fd3068
7101fd3054  ldr x8,[x20, #0x18]
7101fd3058  add x1,x8,#0x40
7101fd305c  b 0x7101fd309c
7101fd3060  add x1,x8,w21, SXTW  #0x4
7101fd3064  b 0x7101fd309c
7101fd3068  ldr x8,[x9]
7101fd306c  ldr w9,[x8, #0x8]
7101fd3070  adrp x1,0x7104862000
7101fd3074  add x1,x1,#0x960
7101fd3078  cmp w9,#0x16
7101fd307c  b.eq 0x7101fd309c
7101fd3080  ldr x8,[x8]
7101fd3084  sub w9,w23,w21
7101fd3088  add x10,x8,w9, SXTW  #0x4
7101fd308c  ldrb w8,[x8, #0xa]
7101fd3090  add x10,x10,#0x10
7101fd3094  cmp w9,w8
7101fd3098  csel x1,x1,x10,gt
7101fd309c  adrp x2,0x7104444000
7101fd30a0  add x2,x2,#0x508
7101fd30a4  mov x0,x20
7101fd30a8  bl 0x71038f4d40
7101fd30ac  ldr x8,[x20, #0x10]
7101fd30b0  sub x25,x8,#0x10
7101fd30b4  ldur w8,[x8, #-0x8]
7101fd30b8  cmp w8,#0x13
7101fd30bc  b.ne 0x7101fd30c8
7101fd30c0  ldr x8,[x25]
7101fd30c4  b 0x7101fd3128
7101fd30c8  ldr w8,[x25, #0x8]
7101fd30cc  cmp w8,#0x13
7101fd30d0  b.eq 0x7101fd30c0
7101fd30d4  cmp w8,#0x3
7101fd30d8  b.eq 0x7101fd52b4
7101fd30dc  and w8,w8,#0xf
7101fd30e0  cmp w8,#0x4
7101fd30e4  b.ne 0x7101fd3124
7101fd30e8  ldr x8,[x25]
7101fd30ec  add x0,x8,#0x18
7101fd30f0  mov x1,sp
7101fd30f4  bl 0x7103907f00
7101fd30f8  ldr x8,[x25]
7101fd30fc  ldrb w9,[x8, #0x8]
7101fd3100  cmp w9,#0x4
7101fd3104  b.ne 0x7101fd3110
7101fd3108  ldrb w8,[x8, #0xb]
7101fd310c  b 0x7101fd3114
7101fd3110  ldr x8,[x8, #0x10]
7101fd3114  add x8,x8,#0x1
7101fd3118  mov x25,sp
7101fd311c  cmp x0,x8
7101fd3120  b.eq 0x7101fd30c8
7101fd3124  mov x8,xzr
7101fd3128  strb w8,[x19, #0x60]
7101fd312c  ldr x8,[x22]
7101fd3130  sub x8,x8,#0x10
7101fd3134  str x8,[x22]
7101fd3138  ldr x9,[x24]
7101fd313c  cmp w21,#0x1
7101fd3140  b.lt 0x7101fd3160
7101fd3144  ldr x9,[x9]
7101fd3148  add x9,x9,w21, SXTW  #0x4
7101fd314c  adrp x10,0x7104862000
7101fd3150  add x10,x10,#0x960
7101fd3154  cmp x9,x8
7101fd3158  csel x1,x9,x10,cc
7101fd315c  b 0x7101fd31bc
7101fd3160  add w10,w23,#0x1
7101fd3164  cmp w21,w10
7101fd3168  b.ge 0x7101fd3180
7101fd316c  cmp w21,w23
7101fd3170  b.ne 0x7101fd3188
7101fd3174  ldr x8,[x20, #0x18]
7101fd3178  add x1,x8,#0x40
7101fd317c  b 0x7101fd31bc
7101fd3180  add x1,x8,w21, SXTW  #0x4
7101fd3184  b 0x7101fd31bc
7101fd3188  ldr x8,[x9]
7101fd318c  ldr w9,[x8, #0x8]
7101fd3190  adrp x1,0x7104862000
7101fd3194  add x1,x1,#0x960
7101fd3198  cmp w9,#0x16
7101fd319c  b.eq 0x7101fd31bc
7101fd31a0  ldr x8,[x8]
7101fd31a4  sub w9,w23,w21
7101fd31a8  add x10,x8,w9, SXTW  #0x4
7101fd31ac  ldrb w8,[x8, #0xa]
7101fd31b0  add x10,x10,#0x10
7101fd31b4  cmp w9,w8
7101fd31b8  csel x1,x1,x10,gt
7101fd31bc  adrp x2,0x7104402000
7101fd31c0  add x2,x2,#0x393
7101fd31c4  mov x0,x20
7101fd31c8  bl 0x71038f4d40
7101fd31cc  ldr x8,[x20, #0x10]
7101fd31d0  sub x25,x8,#0x10
7101fd31d4  ldur w8,[x8, #-0x8]
7101fd31d8  cmp w8,#0x13
7101fd31dc  b.ne 0x7101fd31e8
7101fd31e0  ldr x8,[x25]
7101fd31e4  b 0x7101fd3248
7101fd31e8  ldr w8,[x25, #0x8]
7101fd31ec  cmp w8,#0x13
7101fd31f0  b.eq 0x7101fd31e0
7101fd31f4  cmp w8,#0x3
7101fd31f8  b.eq 0x7101fd52e4
7101fd31fc  and w8,w8,#0xf
7101fd3200  cmp w8,#0x4
7101fd3204  b.ne 0x7101fd3244
7101fd3208  ldr x8,[x25]
7101fd320c  add x0,x8,#0x18
7101fd3210  mov x1,sp
7101fd3214  bl 0x7103907f00
7101fd3218  ldr x8,[x25]
7101fd321c  ldrb w9,[x8, #0x8]
7101fd3220  cmp w9,#0x4
7101fd3224  b.ne 0x7101fd3230
7101fd3228  ldrb w8,[x8, #0xb]
7101fd322c  b 0x7101fd3234
7101fd3230  ldr x8,[x8, #0x10]
7101fd3234  add x8,x8,#0x1
7101fd3238  mov x25,sp
7101fd323c  cmp x0,x8
7101fd3240  b.eq 0x7101fd31e8
7101fd3244  mov x8,xzr
7101fd3248  strb w8,[x19, #0x61]
7101fd324c  ldr x8,[x22]
7101fd3250  sub x8,x8,#0x10
7101fd3254  str x8,[x22]
7101fd3258  ldr x9,[x24]
7101fd325c  cmp w21,#0x1
7101fd3260  b.lt 0x7101fd3280
7101fd3264  ldr x9,[x9]
7101fd3268  add x9,x9,w21, SXTW  #0x4
7101fd326c  adrp x10,0x7104862000
7101fd3270  add x10,x10,#0x960
7101fd3274  cmp x9,x8
7101fd3278  csel x1,x9,x10,cc
7101fd327c  b 0x7101fd32dc
7101fd3280  add w10,w23,#0x1
7101fd3284  cmp w21,w10
7101fd3288  b.ge 0x7101fd32a0
7101fd328c  cmp w21,w23
7101fd3290  b.ne 0x7101fd32a8
7101fd3294  ldr x8,[x20, #0x18]
7101fd3298  add x1,x8,#0x40
7101fd329c  b 0x7101fd32dc
7101fd32a0  add x1,x8,w21, SXTW  #0x4
7101fd32a4  b 0x7101fd32dc
7101fd32a8  ldr x8,[x9]
7101fd32ac  ldr w9,[x8, #0x8]
7101fd32b0  adrp x1,0x7104862000
7101fd32b4  add x1,x1,#0x960
7101fd32b8  cmp w9,#0x16
7101fd32bc  b.eq 0x7101fd32dc
7101fd32c0  ldr x8,[x8]
7101fd32c4  sub w9,w23,w21
7101fd32c8  add x10,x8,w9, SXTW  #0x4
7101fd32cc  ldrb w8,[x8, #0xa]
7101fd32d0  add x10,x10,#0x10
7101fd32d4  cmp w9,w8
7101fd32d8  csel x1,x1,x10,gt
7101fd32dc  adrp x2,0x7104423000
7101fd32e0  add x2,x2,#0x10
7101fd32e4  mov x0,x20
7101fd32e8  bl 0x71038f4d40
7101fd32ec  ldr x8,[x20, #0x10]
7101fd32f0  sub x25,x8,#0x10
7101fd32f4  ldur w8,[x8, #-0x8]
7101fd32f8  cmp w8,#0x13
7101fd32fc  b.ne 0x7101fd3308
7101fd3300  ldr x8,[x25]
7101fd3304  b 0x7101fd3368
7101fd3308  ldr w8,[x25, #0x8]
7101fd330c  cmp w8,#0x13
7101fd3310  b.eq 0x7101fd3300
7101fd3314  cmp w8,#0x3
7101fd3318  b.eq 0x7101fd5314
7101fd331c  and w8,w8,#0xf
7101fd3320  cmp w8,#0x4
7101fd3324  b.ne 0x7101fd3364
7101fd3328  ldr x8,[x25]
7101fd332c  add x0,x8,#0x18
7101fd3330  mov x1,sp
7101fd3334  bl 0x7103907f00
7101fd3338  ldr x8,[x25]
7101fd333c  ldrb w9,[x8, #0x8]
7101fd3340  cmp w9,#0x4
7101fd3344  b.ne 0x7101fd3350
7101fd3348  ldrb w8,[x8, #0xb]
7101fd334c  b 0x7101fd3354
7101fd3350  ldr x8,[x8, #0x10]
7101fd3354  add x8,x8,#0x1
7101fd3358  mov x25,sp
7101fd335c  cmp x0,x8
7101fd3360  b.eq 0x7101fd3308
7101fd3364  mov x8,xzr
7101fd3368  strb w8,[x19, #0x62]
7101fd336c  ldr x8,[x22]
7101fd3370  sub x8,x8,#0x10
7101fd3374  str x8,[x22]
7101fd3378  ldr x9,[x24]
7101fd337c  cmp w21,#0x1
7101fd3380  b.lt 0x7101fd33a0
7101fd3384  ldr x9,[x9]
7101fd3388  add x9,x9,w21, SXTW  #0x4
7101fd338c  adrp x10,0x7104862000
7101fd3390  add x10,x10,#0x960
7101fd3394  cmp x9,x8
7101fd3398  csel x1,x9,x10,cc
7101fd339c  b 0x7101fd33fc
7101fd33a0  add w10,w23,#0x1
7101fd33a4  cmp w21,w10
7101fd33a8  b.ge 0x7101fd33c0
7101fd33ac  cmp w21,w23
7101fd33b0  b.ne 0x7101fd33c8
7101fd33b4  ldr x8,[x20, #0x18]
7101fd33b8  add x1,x8,#0x40
7101fd33bc  b 0x7101fd33fc
7101fd33c0  add x1,x8,w21, SXTW  #0x4
7101fd33c4  b 0x7101fd33fc
7101fd33c8  ldr x8,[x9]
7101fd33cc  ldr w9,[x8, #0x8]
7101fd33d0  adrp x1,0x7104862000
7101fd33d4  add x1,x1,#0x960
7101fd33d8  cmp w9,#0x16
7101fd33dc  b.eq 0x7101fd33fc
7101fd33e0  ldr x8,[x8]
7101fd33e4  sub w9,w23,w21
7101fd33e8  add x10,x8,w9, SXTW  #0x4
7101fd33ec  ldrb w8,[x8, #0xa]
7101fd33f0  add x10,x10,#0x10
7101fd33f4  cmp w9,w8
7101fd33f8  csel x1,x1,x10,gt
7101fd33fc  adrp x2,0x7104402000
7101fd3400  add x2,x2,#0x39f
7101fd3404  mov x0,x20
7101fd3408  bl 0x71038f4d40
7101fd340c  ldr x8,[x20, #0x10]
7101fd3410  ldur w9,[x8, #-0x8]
7101fd3414  cbz w9,0x7101fd3464
7101fd3418  cmp w9,#0x13
7101fd341c  b.eq 0x7101fd3434
7101fd3420  cmp w9,#0x1
7101fd3424  b.ne 0x7101fd344c
7101fd3428  ldur w8,[x8, #-0x10]
7101fd342c  cmp w8,#0x0
7101fd3430  b 0x7101fd347c
7101fd3434  ldur x10,[x8, #-0x10]
7101fd3438  cbz x10,0x7101fd3464
7101fd343c  scvtf s0,x10
7101fd3440  fcmp s0,#0.0
7101fd3444  b.eq 0x7101fd3464
7101fd3448  b 0x7101fd346c
7101fd344c  and w10,w9,#0xf
7101fd3450  cmp w10,#0x3
7101fd3454  b.ne 0x7101fd346c
7101fd3458  ldur s0,[x8, #-0x10]
7101fd345c  fcmp s0,#0.0
7101fd3460  b.ne 0x7101fd346c
7101fd3464  mov w8,wzr
7101fd3468  b 0x7101fd3488
7101fd346c  cmp w9,#0x3
7101fd3470  b.ne 0x7101fd3484
7101fd3474  ldur s0,[x8, #-0x10]
7101fd3478  fcmp s0,#0.0
7101fd347c  cset w8,ne
7101fd3480  b 0x7101fd3488
7101fd3484  mov w8,#0x1
7101fd3488  strb w8,[x19, #0x63]
7101fd348c  ldr x8,[x22]
7101fd3490  sub x8,x8,#0x10
7101fd3494  str x8,[x22]
7101fd3498  ldr x9,[x24]
7101fd349c  cmp w21,#0x1
7101fd34a0  b.lt 0x7101fd34c0
7101fd34a4  ldr x9,[x9]
7101fd34a8  add x9,x9,w21, SXTW  #0x4
7101fd34ac  adrp x10,0x7104862000
7101fd34b0  add x10,x10,#0x960
7101fd34b4  cmp x9,x8
7101fd34b8  csel x1,x9,x10,cc
7101fd34bc  b 0x7101fd351c
7101fd34c0  add w10,w23,#0x1
7101fd34c4  cmp w21,w10
7101fd34c8  b.ge 0x7101fd34e0
7101fd34cc  cmp w21,w23
7101fd34d0  b.ne 0x7101fd34e8
7101fd34d4  ldr x8,[x20, #0x18]
7101fd34d8  add x1,x8,#0x40
7101fd34dc  b 0x7101fd351c
7101fd34e0  add x1,x8,w21, SXTW  #0x4
7101fd34e4  b 0x7101fd351c
7101fd34e8  ldr x8,[x9]
7101fd34ec  ldr w9,[x8, #0x8]
7101fd34f0  adrp x1,0x7104862000
7101fd34f4  add x1,x1,#0x960
7101fd34f8  cmp w9,#0x16
7101fd34fc  b.eq 0x7101fd351c
7101fd3500  ldr x8,[x8]
7101fd3504  sub w9,w23,w21
7101fd3508  add x10,x8,w9, SXTW  #0x4
7101fd350c  ldrb w8,[x8, #0xa]
7101fd3510  add x10,x10,#0x10
7101fd3514  cmp w9,w8
7101fd3518  csel x1,x1,x10,gt
7101fd351c  adrp x2,0x71043f1000
7101fd3520  add x2,x2,#0x6d4
7101fd3524  mov x0,x20
7101fd3528  bl 0x71038f4d40
7101fd352c  ldr x8,[x20, #0x10]
7101fd3530  ldur w9,[x8, #-0x8]
7101fd3534  cbz w9,0x7101fd3584
7101fd3538  cmp w9,#0x13
7101fd353c  b.eq 0x7101fd3554
7101fd3540  cmp w9,#0x1
7101fd3544  b.ne 0x7101fd356c
7101fd3548  ldur w8,[x8, #-0x10]
7101fd354c  cmp w8,#0x0
7101fd3550  b 0x7101fd359c
7101fd3554  ldur x10,[x8, #-0x10]
7101fd3558  cbz x10,0x7101fd3584
7101fd355c  scvtf s0,x10
7101fd3560  fcmp s0,#0.0
7101fd3564  b.eq 0x7101fd3584
7101fd3568  b 0x7101fd358c
7101fd356c  and w10,w9,#0xf
7101fd3570  cmp w10,#0x3
7101fd3574  b.ne 0x7101fd358c
7101fd3578  ldur s0,[x8, #-0x10]
7101fd357c  fcmp s0,#0.0
7101fd3580  b.ne 0x7101fd358c
7101fd3584  mov w8,wzr
7101fd3588  b 0x7101fd35a8
7101fd358c  cmp w9,#0x3
7101fd3590  b.ne 0x7101fd35a4
7101fd3594  ldur s0,[x8, #-0x10]
7101fd3598  fcmp s0,#0.0
7101fd359c  cset w8,ne
7101fd35a0  b 0x7101fd35a8
7101fd35a4  mov w8,#0x1
7101fd35a8  strb w8,[x19, #0x64]
7101fd35ac  ldr x8,[x22]
7101fd35b0  sub x8,x8,#0x10
7101fd35b4  str x8,[x22]
7101fd35b8  ldr x9,[x24]
7101fd35bc  cmp w21,#0x1
7101fd35c0  b.lt 0x7101fd35e0
7101fd35c4  ldr x9,[x9]
7101fd35c8  add x9,x9,w21, SXTW  #0x4
7101fd35cc  adrp x10,0x7104862000
7101fd35d0  add x10,x10,#0x960
7101fd35d4  cmp x9,x8
7101fd35d8  csel x1,x9,x10,cc
7101fd35dc  b 0x7101fd363c
7101fd35e0  add w10,w23,#0x1
7101fd35e4  cmp w21,w10
7101fd35e8  b.ge 0x7101fd3600
7101fd35ec  cmp w21,w23
7101fd35f0  b.ne 0x7101fd3608
7101fd35f4  ldr x8,[x20, #0x18]
7101fd35f8  add x1,x8,#0x40
7101fd35fc  b 0x7101fd363c
7101fd3600  add x1,x8,w21, SXTW  #0x4
7101fd3604  b 0x7101fd363c
7101fd3608  ldr x8,[x9]
7101fd360c  ldr w9,[x8, #0x8]
7101fd3610  adrp x1,0x7104862000
7101fd3614  add x1,x1,#0x960
7101fd3618  cmp w9,#0x16
7101fd361c  b.eq 0x7101fd363c
7101fd3620  ldr x8,[x8]
7101fd3624  sub w9,w23,w21
7101fd3628  add x10,x8,w9, SXTW  #0x4
7101fd362c  ldrb w8,[x8, #0xa]
7101fd3630  add x10,x10,#0x10
7101fd3634  cmp w9,w8
7101fd3638  csel x1,x1,x10,gt
7101fd363c  adrp x2,0x710436d000
7101fd3640  add x2,x2,#0x176
7101fd3644  mov x0,x20
7101fd3648  bl 0x71038f4d40
7101fd364c  ldr x8,[x20, #0x10]
7101fd3650  ldur w9,[x8, #-0x8]
7101fd3654  cbz w9,0x7101fd36a4
7101fd3658  cmp w9,#0x13
7101fd365c  b.eq 0x7101fd3674
7101fd3660  cmp w9,#0x1
7101fd3664  b.ne 0x7101fd368c
7101fd3668  ldur w8,[x8, #-0x10]
7101fd366c  cmp w8,#0x0
7101fd3670  b 0x7101fd36bc
7101fd3674  ldur x10,[x8, #-0x10]
7101fd3678  cbz x10,0x7101fd36a4
7101fd367c  scvtf s0,x10
7101fd3680  fcmp s0,#0.0
7101fd3684  b.eq 0x7101fd36a4
7101fd3688  b 0x7101fd36ac
7101fd368c  and w10,w9,#0xf
7101fd3690  cmp w10,#0x3
7101fd3694  b.ne 0x7101fd36ac
7101fd3698  ldur s0,[x8, #-0x10]
7101fd369c  fcmp s0,#0.0
7101fd36a0  b.ne 0x7101fd36ac
7101fd36a4  mov w8,wzr
7101fd36a8  b 0x7101fd36c8
7101fd36ac  cmp w9,#0x3
7101fd36b0  b.ne 0x7101fd36c4
7101fd36b4  ldur s0,[x8, #-0x10]
7101fd36b8  fcmp s0,#0.0
7101fd36bc  cset w8,ne
7101fd36c0  b 0x7101fd36c8
7101fd36c4  mov w8,#0x1
7101fd36c8  strb w8,[x19, #0x65]
7101fd36cc  ldr x8,[x22]
7101fd36d0  sub x8,x8,#0x10
7101fd36d4  str x8,[x22]
7101fd36d8  ldr x9,[x24]
7101fd36dc  cmp w21,#0x1
7101fd36e0  b.lt 0x7101fd3700
7101fd36e4  ldr x9,[x9]
7101fd36e8  add x9,x9,w21, SXTW  #0x4
7101fd36ec  adrp x10,0x7104862000
7101fd36f0  add x10,x10,#0x960
7101fd36f4  cmp x9,x8
7101fd36f8  csel x1,x9,x10,cc
7101fd36fc  b 0x7101fd375c
7101fd3700  add w10,w23,#0x1
7101fd3704  cmp w21,w10
7101fd3708  b.ge 0x7101fd3720
7101fd370c  cmp w21,w23
7101fd3710  b.ne 0x7101fd3728
7101fd3714  ldr x8,[x20, #0x18]
7101fd3718  add x1,x8,#0x40
7101fd371c  b 0x7101fd375c
7101fd3720  add x1,x8,w21, SXTW  #0x4
7101fd3724  b 0x7101fd375c
7101fd3728  ldr x8,[x9]
7101fd372c  ldr w9,[x8, #0x8]
7101fd3730  adrp x1,0x7104862000
7101fd3734  add x1,x1,#0x960
7101fd3738  cmp w9,#0x16
7101fd373c  b.eq 0x7101fd375c
7101fd3740  ldr x8,[x8]
7101fd3744  sub w9,w23,w21
7101fd3748  add x10,x8,w9, SXTW  #0x4
7101fd374c  ldrb w8,[x8, #0xa]
7101fd3750  add x10,x10,#0x10
7101fd3754  cmp w9,w8
7101fd3758  csel x1,x1,x10,gt
7101fd375c  adrp x2,0x71043ae000
7101fd3760  add x2,x2,#0x74c
7101fd3764  mov x0,x20
7101fd3768  bl 0x71038f4d40
7101fd376c  ldr x8,[x20, #0x10]
7101fd3770  ldur w9,[x8, #-0x8]
7101fd3774  cbz w9,0x7101fd37c4
7101fd3778  cmp w9,#0x13
7101fd377c  b.eq 0x7101fd3794
7101fd3780  cmp w9,#0x1
7101fd3784  b.ne 0x7101fd37ac
7101fd3788  ldur w8,[x8, #-0x10]
7101fd378c  cmp w8,#0x0
7101fd3790  b 0x7101fd37dc
7101fd3794  ldur x10,[x8, #-0x10]
7101fd3798  cbz x10,0x7101fd37c4
7101fd379c  scvtf s0,x10
7101fd37a0  fcmp s0,#0.0
7101fd37a4  b.eq 0x7101fd37c4
7101fd37a8  b 0x7101fd37cc
7101fd37ac  and w10,w9,#0xf
7101fd37b0  cmp w10,#0x3
7101fd37b4  b.ne 0x7101fd37cc
7101fd37b8  ldur s0,[x8, #-0x10]
7101fd37bc  fcmp s0,#0.0
7101fd37c0  b.ne 0x7101fd37cc
7101fd37c4  mov w8,wzr
7101fd37c8  b 0x7101fd37e8
7101fd37cc  cmp w9,#0x3
7101fd37d0  b.ne 0x7101fd37e4
7101fd37d4  ldur s0,[x8, #-0x10]
7101fd37d8  fcmp s0,#0.0
7101fd37dc  cset w8,ne
7101fd37e0  b 0x7101fd37e8
7101fd37e4  mov w8,#0x1
7101fd37e8  strb w8,[x19, #0x66]
7101fd37ec  ldr x8,[x22]
7101fd37f0  sub x8,x8,#0x10
7101fd37f4  str x8,[x22]
7101fd37f8  ldr x9,[x24]
7101fd37fc  cmp w21,#0x1
7101fd3800  b.lt 0x7101fd3820
7101fd3804  ldr x9,[x9]
7101fd3808  add x9,x9,w21, SXTW  #0x4
7101fd380c  adrp x10,0x7104862000
7101fd3810  add x10,x10,#0x960
7101fd3814  cmp x9,x8
7101fd3818  csel x1,x9,x10,cc
7101fd381c  b 0x7101fd387c
7101fd3820  add w10,w23,#0x1
7101fd3824  cmp w21,w10
7101fd3828  b.ge 0x7101fd3840
7101fd382c  cmp w21,w23
7101fd3830  b.ne 0x7101fd3848
7101fd3834  ldr x8,[x20, #0x18]
7101fd3838  add x1,x8,#0x40
7101fd383c  b 0x7101fd387c
7101fd3840  add x1,x8,w21, SXTW  #0x4
7101fd3844  b 0x7101fd387c
7101fd3848  ldr x8,[x9]
7101fd384c  ldr w9,[x8, #0x8]
7101fd3850  adrp x1,0x7104862000
7101fd3854  add x1,x1,#0x960
7101fd3858  cmp w9,#0x16
7101fd385c  b.eq 0x7101fd387c
7101fd3860  ldr x8,[x8]
7101fd3864  sub w9,w23,w21
7101fd3868  add x10,x8,w9, SXTW  #0x4
7101fd386c  ldrb w8,[x8, #0xa]
7101fd3870  add x10,x10,#0x10
7101fd3874  cmp w9,w8
7101fd3878  csel x1,x1,x10,gt
7101fd387c  adrp x2,0x7104413000
7101fd3880  add x2,x2,#0x7c5
7101fd3884  mov x0,x20
7101fd3888  bl 0x71038f4d40
7101fd388c  ldr x8,[x20, #0x10]
7101fd3890  ldur w9,[x8, #-0x8]
7101fd3894  cbz w9,0x7101fd38e4
7101fd3898  cmp w9,#0x13
7101fd389c  b.eq 0x7101fd38b4
7101fd38a0  cmp w9,#0x1
7101fd38a4  b.ne 0x7101fd38cc
7101fd38a8  ldur w8,[x8, #-0x10]
7101fd38ac  cmp w8,#0x0
7101fd38b0  b 0x7101fd38fc
7101fd38b4  ldur x10,[x8, #-0x10]
7101fd38b8  cbz x10,0x7101fd38e4
7101fd38bc  scvtf s0,x10
7101fd38c0  fcmp s0,#0.0
7101fd38c4  b.eq 0x7101fd38e4
7101fd38c8  b 0x7101fd38ec
7101fd38cc  and w10,w9,#0xf
7101fd38d0  cmp w10,#0x3
7101fd38d4  b.ne 0x7101fd38ec
7101fd38d8  ldur s0,[x8, #-0x10]
7101fd38dc  fcmp s0,#0.0
7101fd38e0  b.ne 0x7101fd38ec
7101fd38e4  mov w8,wzr
7101fd38e8  b 0x7101fd3908
7101fd38ec  cmp w9,#0x3
7101fd38f0  b.ne 0x7101fd3904
7101fd38f4  ldur s0,[x8, #-0x10]
7101fd38f8  fcmp s0,#0.0
7101fd38fc  cset w8,ne
7101fd3900  b 0x7101fd3908
7101fd3904  mov w8,#0x1
7101fd3908  strb w8,[x19, #0x67]
7101fd390c  ldr x8,[x22]
7101fd3910  sub x8,x8,#0x10
7101fd3914  str x8,[x22]
7101fd3918  ldr x9,[x24]
7101fd391c  cmp w21,#0x1
7101fd3920  b.lt 0x7101fd3940
7101fd3924  ldr x9,[x9]
7101fd3928  add x9,x9,w21, SXTW  #0x4
7101fd392c  adrp x10,0x7104862000
7101fd3930  add x10,x10,#0x960
7101fd3934  cmp x9,x8
7101fd3938  csel x1,x9,x10,cc
7101fd393c  b 0x7101fd399c
7101fd3940  add w10,w23,#0x1
7101fd3944  cmp w21,w10
7101fd3948  b.ge 0x7101fd3960
7101fd394c  cmp w21,w23
7101fd3950  b.ne 0x7101fd3968
7101fd3954  ldr x8,[x20, #0x18]
7101fd3958  add x1,x8,#0x40
7101fd395c  b 0x7101fd399c
7101fd3960  add x1,x8,w21, SXTW  #0x4
7101fd3964  b 0x7101fd399c
7101fd3968  ldr x8,[x9]
7101fd396c  ldr w9,[x8, #0x8]
7101fd3970  adrp x1,0x7104862000
7101fd3974  add x1,x1,#0x960
7101fd3978  cmp w9,#0x16
7101fd397c  b.eq 0x7101fd399c
7101fd3980  ldr x8,[x8]
7101fd3984  sub w9,w23,w21
7101fd3988  add x10,x8,w9, SXTW  #0x4
7101fd398c  ldrb w8,[x8, #0xa]
7101fd3990  add x10,x10,#0x10
7101fd3994  cmp w9,w8
7101fd3998  csel x1,x1,x10,gt
7101fd399c  adrp x2,0x71043e1000
7101fd39a0  add x2,x2,#0x58
7101fd39a4  mov x0,x20
7101fd39a8  bl 0x71038f4d40
7101fd39ac  ldr x8,[x20, #0x10]
7101fd39b0  ldur w9,[x8, #-0x8]
7101fd39b4  cbz w9,0x7101fd3a04
7101fd39b8  cmp w9,#0x13
7101fd39bc  b.eq 0x7101fd39d4
7101fd39c0  cmp w9,#0x1
7101fd39c4  b.ne 0x7101fd39ec
7101fd39c8  ldur w8,[x8, #-0x10]
7101fd39cc  cmp w8,#0x0
7101fd39d0  b 0x7101fd3a1c
7101fd39d4  ldur x10,[x8, #-0x10]
7101fd39d8  cbz x10,0x7101fd3a04
7101fd39dc  scvtf s0,x10
7101fd39e0  fcmp s0,#0.0
7101fd39e4  b.eq 0x7101fd3a04
7101fd39e8  b 0x7101fd3a0c
7101fd39ec  and w10,w9,#0xf
7101fd39f0  cmp w10,#0x3
7101fd39f4  b.ne 0x7101fd3a0c
7101fd39f8  ldur s0,[x8, #-0x10]
7101fd39fc  fcmp s0,#0.0
7101fd3a00  b.ne 0x7101fd3a0c
7101fd3a04  mov w8,wzr
7101fd3a08  b 0x7101fd3a28
7101fd3a0c  cmp w9,#0x3
7101fd3a10  b.ne 0x7101fd3a24
7101fd3a14  ldur s0,[x8, #-0x10]
7101fd3a18  fcmp s0,#0.0
7101fd3a1c  cset w8,ne
7101fd3a20  b 0x7101fd3a28
7101fd3a24  mov w8,#0x1
7101fd3a28  strb w8,[x19, #0x68]
7101fd3a2c  ldr x8,[x22]
7101fd3a30  sub x8,x8,#0x10
7101fd3a34  str x8,[x22]
7101fd3a38  ldr x9,[x24]
7101fd3a3c  cmp w21,#0x1
7101fd3a40  b.lt 0x7101fd3a60
7101fd3a44  ldr x9,[x9]
7101fd3a48  add x9,x9,w21, SXTW  #0x4
7101fd3a4c  adrp x10,0x7104862000
7101fd3a50  add x10,x10,#0x960
7101fd3a54  cmp x9,x8
7101fd3a58  csel x1,x9,x10,cc
7101fd3a5c  b 0x7101fd3abc
7101fd3a60  add w10,w23,#0x1
7101fd3a64  cmp w21,w10
7101fd3a68  b.ge 0x7101fd3a80
7101fd3a6c  cmp w21,w23
7101fd3a70  b.ne 0x7101fd3a88
7101fd3a74  ldr x8,[x20, #0x18]
7101fd3a78  add x1,x8,#0x40
7101fd3a7c  b 0x7101fd3abc
7101fd3a80  add x1,x8,w21, SXTW  #0x4
7101fd3a84  b 0x7101fd3abc
7101fd3a88  ldr x8,[x9]
7101fd3a8c  ldr w9,[x8, #0x8]
7101fd3a90  adrp x1,0x7104862000
7101fd3a94  add x1,x1,#0x960
7101fd3a98  cmp w9,#0x16
7101fd3a9c  b.eq 0x7101fd3abc
7101fd3aa0  ldr x8,[x8]
7101fd3aa4  sub w9,w23,w21
7101fd3aa8  add x10,x8,w9, SXTW  #0x4
7101fd3aac  ldrb w8,[x8, #0xa]
7101fd3ab0  add x10,x10,#0x10
7101fd3ab4  cmp w9,w8
7101fd3ab8  csel x1,x1,x10,gt
7101fd3abc  adrp x2,0x7104423000
7101fd3ac0  add x2,x2,#0x19
7101fd3ac4  mov x0,x20
7101fd3ac8  bl 0x71038f4d40
7101fd3acc  ldr x8,[x20, #0x10]
7101fd3ad0  ldur w9,[x8, #-0x8]
7101fd3ad4  cbz w9,0x7101fd3b24
7101fd3ad8  cmp w9,#0x13
7101fd3adc  b.eq 0x7101fd3af4
7101fd3ae0  cmp w9,#0x1
7101fd3ae4  b.ne 0x7101fd3b0c
7101fd3ae8  ldur w8,[x8, #-0x10]
7101fd3aec  cmp w8,#0x0
7101fd3af0  b 0x7101fd3b3c
7101fd3af4  ldur x10,[x8, #-0x10]
7101fd3af8  cbz x10,0x7101fd3b24
7101fd3afc  scvtf s0,x10
7101fd3b00  fcmp s0,#0.0
7101fd3b04  b.eq 0x7101fd3b24
7101fd3b08  b 0x7101fd3b2c
7101fd3b0c  and w10,w9,#0xf
7101fd3b10  cmp w10,#0x3
7101fd3b14  b.ne 0x7101fd3b2c
7101fd3b18  ldur s0,[x8, #-0x10]
7101fd3b1c  fcmp s0,#0.0
7101fd3b20  b.ne 0x7101fd3b2c
7101fd3b24  mov w8,wzr
7101fd3b28  b 0x7101fd3b48
7101fd3b2c  cmp w9,#0x3
7101fd3b30  b.ne 0x7101fd3b44
7101fd3b34  ldur s0,[x8, #-0x10]
7101fd3b38  fcmp s0,#0.0
7101fd3b3c  cset w8,ne
7101fd3b40  b 0x7101fd3b48
7101fd3b44  mov w8,#0x1
7101fd3b48  strb w8,[x19, #0x69]
7101fd3b4c  ldr x8,[x22]
7101fd3b50  sub x8,x8,#0x10
7101fd3b54  str x8,[x22]
7101fd3b58  ldr x9,[x24]
7101fd3b5c  cmp w21,#0x1
7101fd3b60  b.lt 0x7101fd3b80
7101fd3b64  ldr x9,[x9]
7101fd3b68  add x9,x9,w21, SXTW  #0x4
7101fd3b6c  adrp x10,0x7104862000
7101fd3b70  add x10,x10,#0x960
7101fd3b74  cmp x9,x8
7101fd3b78  csel x1,x9,x10,cc
7101fd3b7c  b 0x7101fd3bdc
7101fd3b80  add w10,w23,#0x1
7101fd3b84  cmp w21,w10
7101fd3b88  b.ge 0x7101fd3ba0
7101fd3b8c  cmp w21,w23
7101fd3b90  b.ne 0x7101fd3ba8
7101fd3b94  ldr x8,[x20, #0x18]
7101fd3b98  add x1,x8,#0x40
7101fd3b9c  b 0x7101fd3bdc
7101fd3ba0  add x1,x8,w21, SXTW  #0x4
7101fd3ba4  b 0x7101fd3bdc
7101fd3ba8  ldr x8,[x9]
7101fd3bac  ldr w9,[x8, #0x8]
7101fd3bb0  adrp x1,0x7104862000
7101fd3bb4  add x1,x1,#0x960
7101fd3bb8  cmp w9,#0x16
7101fd3bbc  b.eq 0x7101fd3bdc
7101fd3bc0  ldr x8,[x8]
7101fd3bc4  sub w9,w23,w21
7101fd3bc8  add x10,x8,w9, SXTW  #0x4
7101fd3bcc  ldrb w8,[x8, #0xa]
7101fd3bd0  add x10,x10,#0x10
7101fd3bd4  cmp w9,w8
7101fd3bd8  csel x1,x1,x10,gt
7101fd3bdc  adrp x2,0x710436d000
7101fd3be0  add x2,x2,#0x181
7101fd3be4  mov x0,x20
7101fd3be8  bl 0x71038f4d40
7101fd3bec  ldr x8,[x20, #0x10]
7101fd3bf0  sub x25,x8,#0x10
7101fd3bf4  ldur w8,[x8, #-0x8]
7101fd3bf8  cmp w8,#0x13
7101fd3bfc  b.ne 0x7101fd3c08
7101fd3c00  ldr x8,[x25]
7101fd3c04  b 0x7101fd3c68
7101fd3c08  ldr w8,[x25, #0x8]
7101fd3c0c  cmp w8,#0x13
7101fd3c10  b.eq 0x7101fd3c00
7101fd3c14  cmp w8,#0x3
7101fd3c18  b.eq 0x7101fd5344
7101fd3c1c  and w8,w8,#0xf
7101fd3c20  cmp w8,#0x4
7101fd3c24  b.ne 0x7101fd3c64
7101fd3c28  ldr x8,[x25]
7101fd3c2c  add x0,x8,#0x18
7101fd3c30  mov x1,sp
7101fd3c34  bl 0x7103907f00
7101fd3c38  ldr x8,[x25]
7101fd3c3c  ldrb w9,[x8, #0x8]
7101fd3c40  cmp w9,#0x4
7101fd3c44  b.ne 0x7101fd3c50
7101fd3c48  ldrb w8,[x8, #0xb]
7101fd3c4c  b 0x7101fd3c54
7101fd3c50  ldr x8,[x8, #0x10]
7101fd3c54  add x8,x8,#0x1
7101fd3c58  mov x25,sp
7101fd3c5c  cmp x0,x8
7101fd3c60  b.eq 0x7101fd3c08
7101fd3c64  mov x8,xzr
7101fd3c68  strb w8,[x19, #0x6a]
7101fd3c6c  ldr x8,[x22]
7101fd3c70  sub x8,x8,#0x10
7101fd3c74  str x8,[x22]
7101fd3c78  ldr x9,[x24]
7101fd3c7c  cmp w21,#0x1
7101fd3c80  b.lt 0x7101fd3ca0
7101fd3c84  ldr x9,[x9]
7101fd3c88  add x9,x9,w21, SXTW  #0x4
7101fd3c8c  adrp x10,0x7104862000
7101fd3c90  add x10,x10,#0x960
7101fd3c94  cmp x9,x8
7101fd3c98  csel x1,x9,x10,cc
7101fd3c9c  b 0x7101fd3cfc
7101fd3ca0  add w10,w23,#0x1
7101fd3ca4  cmp w21,w10
7101fd3ca8  b.ge 0x7101fd3cc0
7101fd3cac  cmp w21,w23
7101fd3cb0  b.ne 0x7101fd3cc8
7101fd3cb4  ldr x8,[x20, #0x18]
7101fd3cb8  add x1,x8,#0x40
7101fd3cbc  b 0x7101fd3cfc
7101fd3cc0  add x1,x8,w21, SXTW  #0x4
7101fd3cc4  b 0x7101fd3cfc
7101fd3cc8  ldr x8,[x9]
7101fd3ccc  ldr w9,[x8, #0x8]
7101fd3cd0  adrp x1,0x7104862000
7101fd3cd4  add x1,x1,#0x960
7101fd3cd8  cmp w9,#0x16
7101fd3cdc  b.eq 0x7101fd3cfc
7101fd3ce0  ldr x8,[x8]
7101fd3ce4  sub w9,w23,w21
7101fd3ce8  add x10,x8,w9, SXTW  #0x4
7101fd3cec  ldrb w8,[x8, #0xa]
7101fd3cf0  add x10,x10,#0x10
7101fd3cf4  cmp w9,w8
7101fd3cf8  csel x1,x1,x10,gt
7101fd3cfc  adrp x2,0x7104413000
7101fd3d00  add x2,x2,#0x7cd
7101fd3d04  mov x0,x20
7101fd3d08  bl 0x71038f4d40
7101fd3d0c  ldr x8,[x20, #0x10]
7101fd3d10  ldur w9,[x8, #-0x8]
7101fd3d14  cbz w9,0x7101fd3d64
7101fd3d18  cmp w9,#0x13
7101fd3d1c  b.eq 0x7101fd3d34
7101fd3d20  cmp w9,#0x1
7101fd3d24  b.ne 0x7101fd3d4c
7101fd3d28  ldur w8,[x8, #-0x10]
7101fd3d2c  cmp w8,#0x0
7101fd3d30  b 0x7101fd3d7c
7101fd3d34  ldur x10,[x8, #-0x10]
7101fd3d38  cbz x10,0x7101fd3d64
7101fd3d3c  scvtf s0,x10
7101fd3d40  fcmp s0,#0.0
7101fd3d44  b.eq 0x7101fd3d64
7101fd3d48  b 0x7101fd3d6c
7101fd3d4c  and w10,w9,#0xf
7101fd3d50  cmp w10,#0x3
7101fd3d54  b.ne 0x7101fd3d6c
7101fd3d58  ldur s0,[x8, #-0x10]
7101fd3d5c  fcmp s0,#0.0
7101fd3d60  b.ne 0x7101fd3d6c
7101fd3d64  mov w8,wzr
7101fd3d68  b 0x7101fd3d88
7101fd3d6c  cmp w9,#0x3
7101fd3d70  b.ne 0x7101fd3d84
7101fd3d74  ldur s0,[x8, #-0x10]
7101fd3d78  fcmp s0,#0.0
7101fd3d7c  cset w8,ne
7101fd3d80  b 0x7101fd3d88
7101fd3d84  mov w8,#0x1
7101fd3d88  strb w8,[x19, #0x6b]
7101fd3d8c  ldr x8,[x22]
7101fd3d90  sub x8,x8,#0x10
7101fd3d94  str x8,[x22]
7101fd3d98  ldr x9,[x24]
7101fd3d9c  cmp w21,#0x1
7101fd3da0  b.lt 0x7101fd3dc0
7101fd3da4  ldr x9,[x9]
7101fd3da8  add x9,x9,w21, SXTW  #0x4
7101fd3dac  adrp x10,0x7104862000
7101fd3db0  add x10,x10,#0x960
7101fd3db4  cmp x9,x8
7101fd3db8  csel x1,x9,x10,cc
7101fd3dbc  b 0x7101fd3e1c
7101fd3dc0  add w10,w23,#0x1
7101fd3dc4  cmp w21,w10
7101fd3dc8  b.ge 0x7101fd3de0
7101fd3dcc  cmp w21,w23
7101fd3dd0  b.ne 0x7101fd3de8
7101fd3dd4  ldr x8,[x20, #0x18]
7101fd3dd8  add x1,x8,#0x40
7101fd3ddc  b 0x7101fd3e1c
7101fd3de0  add x1,x8,w21, SXTW  #0x4
7101fd3de4  b 0x7101fd3e1c
7101fd3de8  ldr x8,[x9]
7101fd3dec  ldr w9,[x8, #0x8]
7101fd3df0  adrp x1,0x7104862000
7101fd3df4  add x1,x1,#0x960
7101fd3df8  cmp w9,#0x16
7101fd3dfc  b.eq 0x7101fd3e1c
7101fd3e00  ldr x8,[x8]
7101fd3e04  sub w9,w23,w21
7101fd3e08  add x10,x8,w9, SXTW  #0x4
7101fd3e0c  ldrb w8,[x8, #0xa]
7101fd3e10  add x10,x10,#0x10
7101fd3e14  cmp w9,w8
7101fd3e18  csel x1,x1,x10,gt
7101fd3e1c  adrp x2,0x71043f1000
7101fd3e20  add x2,x2,#0x6dc
7101fd3e24  mov x0,x20
7101fd3e28  bl 0x71038f4d40
7101fd3e2c  ldr x8,[x20, #0x10]
7101fd3e30  ldur w9,[x8, #-0x8]
7101fd3e34  cbz w9,0x7101fd3e84
7101fd3e38  cmp w9,#0x13
7101fd3e3c  b.eq 0x7101fd3e54
7101fd3e40  cmp w9,#0x1
7101fd3e44  b.ne 0x7101fd3e6c
7101fd3e48  ldur w8,[x8, #-0x10]
7101fd3e4c  cmp w8,#0x0
7101fd3e50  b 0x7101fd3e9c
7101fd3e54  ldur x10,[x8, #-0x10]
7101fd3e58  cbz x10,0x7101fd3e84
7101fd3e5c  scvtf s0,x10
7101fd3e60  fcmp s0,#0.0
7101fd3e64  b.eq 0x7101fd3e84
7101fd3e68  b 0x7101fd3e8c
7101fd3e6c  and w10,w9,#0xf
7101fd3e70  cmp w10,#0x3
7101fd3e74  b.ne 0x7101fd3e8c
7101fd3e78  ldur s0,[x8, #-0x10]
7101fd3e7c  fcmp s0,#0.0
7101fd3e80  b.ne 0x7101fd3e8c
7101fd3e84  mov w8,wzr
7101fd3e88  b 0x7101fd3ea8
7101fd3e8c  cmp w9,#0x3
7101fd3e90  b.ne 0x7101fd3ea4
7101fd3e94  ldur s0,[x8, #-0x10]
7101fd3e98  fcmp s0,#0.0
7101fd3e9c  cset w8,ne
7101fd3ea0  b 0x7101fd3ea8
7101fd3ea4  mov w8,#0x1
7101fd3ea8  strb w8,[x19, #0x6c]
7101fd3eac  ldr x8,[x22]
7101fd3eb0  sub x8,x8,#0x10
7101fd3eb4  str x8,[x22]
7101fd3eb8  ldr x9,[x24]
7101fd3ebc  cmp w21,#0x1
7101fd3ec0  b.lt 0x7101fd3ee0
7101fd3ec4  ldr x9,[x9]
7101fd3ec8  add x9,x9,w21, SXTW  #0x4
7101fd3ecc  adrp x10,0x7104862000
7101fd3ed0  add x10,x10,#0x960
7101fd3ed4  cmp x9,x8
7101fd3ed8  csel x1,x9,x10,cc
7101fd3edc  b 0x7101fd3f3c
7101fd3ee0  add w10,w23,#0x1
7101fd3ee4  cmp w21,w10
7101fd3ee8  b.ge 0x7101fd3f00
7101fd3eec  cmp w21,w23
7101fd3ef0  b.ne 0x7101fd3f08
7101fd3ef4  ldr x8,[x20, #0x18]
7101fd3ef8  add x1,x8,#0x40
7101fd3efc  b 0x7101fd3f3c
7101fd3f00  add x1,x8,w21, SXTW  #0x4
7101fd3f04  b 0x7101fd3f3c
7101fd3f08  ldr x8,[x9]
7101fd3f0c  ldr w9,[x8, #0x8]
7101fd3f10  adrp x1,0x7104862000
7101fd3f14  add x1,x1,#0x960
7101fd3f18  cmp w9,#0x16
7101fd3f1c  b.eq 0x7101fd3f3c
7101fd3f20  ldr x8,[x8]
7101fd3f24  sub w9,w23,w21
7101fd3f28  add x10,x8,w9, SXTW  #0x4
7101fd3f2c  ldrb w8,[x8, #0xa]
7101fd3f30  add x10,x10,#0x10
7101fd3f34  cmp w9,w8
7101fd3f38  csel x1,x1,x10,gt
7101fd3f3c  adrp x2,0x710434b000
7101fd3f40  add x2,x2,#0x53
7101fd3f44  mov x0,x20
7101fd3f48  bl 0x71038f4d40
7101fd3f4c  ldr x8,[x20, #0x10]
7101fd3f50  ldur w9,[x8, #-0x8]
7101fd3f54  cbz w9,0x7101fd3fa4
7101fd3f58  cmp w9,#0x13
7101fd3f5c  b.eq 0x7101fd3f74
7101fd3f60  cmp w9,#0x1
7101fd3f64  b.ne 0x7101fd3f8c
7101fd3f68  ldur w8,[x8, #-0x10]
7101fd3f6c  cmp w8,#0x0
7101fd3f70  b 0x7101fd3fbc
7101fd3f74  ldur x10,[x8, #-0x10]
7101fd3f78  cbz x10,0x7101fd3fa4
7101fd3f7c  scvtf s0,x10
7101fd3f80  fcmp s0,#0.0
7101fd3f84  b.eq 0x7101fd3fa4
7101fd3f88  b 0x7101fd3fac
7101fd3f8c  and w10,w9,#0xf
7101fd3f90  cmp w10,#0x3
7101fd3f94  b.ne 0x7101fd3fac
7101fd3f98  ldur s0,[x8, #-0x10]
7101fd3f9c  fcmp s0,#0.0
7101fd3fa0  b.ne 0x7101fd3fac
7101fd3fa4  mov w8,wzr
7101fd3fa8  b 0x7101fd3fc8
7101fd3fac  cmp w9,#0x3
7101fd3fb0  b.ne 0x7101fd3fc4
7101fd3fb4  ldur s0,[x8, #-0x10]
7101fd3fb8  fcmp s0,#0.0
7101fd3fbc  cset w8,ne
7101fd3fc0  b 0x7101fd3fc8
7101fd3fc4  mov w8,#0x1
7101fd3fc8  strb w8,[x19, #0x6d]
7101fd3fcc  ldr x8,[x22]
7101fd3fd0  sub x8,x8,#0x10
7101fd3fd4  str x8,[x22]
7101fd3fd8  ldr x9,[x24]
7101fd3fdc  cmp w21,#0x1
7101fd3fe0  b.lt 0x7101fd4000
7101fd3fe4  ldr x9,[x9]
7101fd3fe8  add x9,x9,w21, SXTW  #0x4
7101fd3fec  adrp x10,0x7104862000
7101fd3ff0  add x10,x10,#0x960
7101fd3ff4  cmp x9,x8
7101fd3ff8  csel x1,x9,x10,cc
7101fd3ffc  b 0x7101fd405c
7101fd4000  add w10,w23,#0x1
7101fd4004  cmp w21,w10
7101fd4008  b.ge 0x7101fd4020
7101fd400c  cmp w21,w23
7101fd4010  b.ne 0x7101fd4028
7101fd4014  ldr x8,[x20, #0x18]
7101fd4018  add x1,x8,#0x40
7101fd401c  b 0x7101fd405c
7101fd4020  add x1,x8,w21, SXTW  #0x4
7101fd4024  b 0x7101fd405c
7101fd4028  ldr x8,[x9]
7101fd402c  ldr w9,[x8, #0x8]
7101fd4030  adrp x1,0x7104862000
7101fd4034  add x1,x1,#0x960
7101fd4038  cmp w9,#0x16
7101fd403c  b.eq 0x7101fd405c
7101fd4040  ldr x8,[x8]
7101fd4044  sub w9,w23,w21
7101fd4048  add x10,x8,w9, SXTW  #0x4
7101fd404c  ldrb w8,[x8, #0xa]
7101fd4050  add x10,x10,#0x10
7101fd4054  cmp w9,w8
7101fd4058  csel x1,x1,x10,gt
7101fd405c  adrp x2,0x71042f9000
7101fd4060  add x2,x2,#0x166
7101fd4064  mov x0,x20
7101fd4068  bl 0x71038f4d40
7101fd406c  ldr x8,[x20, #0x10]
7101fd4070  ldur w9,[x8, #-0x8]
7101fd4074  cbz w9,0x7101fd40c4
7101fd4078  cmp w9,#0x13
7101fd407c  b.eq 0x7101fd4094
7101fd4080  cmp w9,#0x1
7101fd4084  b.ne 0x7101fd40ac
7101fd4088  ldur w8,[x8, #-0x10]
7101fd408c  cmp w8,#0x0
7101fd4090  b 0x7101fd40dc
7101fd4094  ldur x10,[x8, #-0x10]
7101fd4098  cbz x10,0x7101fd40c4
7101fd409c  scvtf s0,x10
7101fd40a0  fcmp s0,#0.0
7101fd40a4  b.eq 0x7101fd40c4
7101fd40a8  b 0x7101fd40cc
7101fd40ac  and w10,w9,#0xf
7101fd40b0  cmp w10,#0x3
7101fd40b4  b.ne 0x7101fd40cc
7101fd40b8  ldur s0,[x8, #-0x10]
7101fd40bc  fcmp s0,#0.0
7101fd40c0  b.ne 0x7101fd40cc
7101fd40c4  mov w8,wzr
7101fd40c8  b 0x7101fd40e8
7101fd40cc  cmp w9,#0x3
7101fd40d0  b.ne 0x7101fd40e4
7101fd40d4  ldur s0,[x8, #-0x10]
7101fd40d8  fcmp s0,#0.0
7101fd40dc  cset w8,ne
7101fd40e0  b 0x7101fd40e8
7101fd40e4  mov w8,#0x1
7101fd40e8  strb w8,[x19, #0x6e]
7101fd40ec  ldr x8,[x22]
7101fd40f0  sub x8,x8,#0x10
7101fd40f4  str x8,[x22]
7101fd40f8  ldr x9,[x24]
7101fd40fc  cmp w21,#0x1
7101fd4100  b.lt 0x7101fd4120
7101fd4104  ldr x9,[x9]
7101fd4108  add x9,x9,w21, SXTW  #0x4
7101fd410c  adrp x10,0x7104862000
7101fd4110  add x10,x10,#0x960
7101fd4114  cmp x9,x8
7101fd4118  csel x1,x9,x10,cc
7101fd411c  b 0x7101fd417c
7101fd4120  add w10,w23,#0x1
7101fd4124  cmp w21,w10
7101fd4128  b.ge 0x7101fd4140
7101fd412c  cmp w21,w23
7101fd4130  b.ne 0x7101fd4148
7101fd4134  ldr x8,[x20, #0x18]
7101fd4138  add x1,x8,#0x40
7101fd413c  b 0x7101fd417c
7101fd4140  add x1,x8,w21, SXTW  #0x4
7101fd4144  b 0x7101fd417c
7101fd4148  ldr x8,[x9]
7101fd414c  ldr w9,[x8, #0x8]
7101fd4150  adrp x1,0x7104862000
7101fd4154  add x1,x1,#0x960
7101fd4158  cmp w9,#0x16
7101fd415c  b.eq 0x7101fd417c
7101fd4160  ldr x8,[x8]
7101fd4164  sub w9,w23,w21
7101fd4168  add x10,x8,w9, SXTW  #0x4
7101fd416c  ldrb w8,[x8, #0xa]
7101fd4170  add x10,x10,#0x10
7101fd4174  cmp w9,w8
7101fd4178  csel x1,x1,x10,gt
7101fd417c  adrp x2,0x71043d7000
7101fd4180  add x2,x2,#0x730
7101fd4184  mov x0,x20
7101fd4188  bl 0x71038f4d40
7101fd418c  ldr x8,[x20, #0x10]
7101fd4190  ldur w9,[x8, #-0x8]
7101fd4194  cbz w9,0x7101fd41e4
7101fd4198  cmp w9,#0x13
7101fd419c  b.eq 0x7101fd41b4
7101fd41a0  cmp w9,#0x1
7101fd41a4  b.ne 0x7101fd41cc
7101fd41a8  ldur w8,[x8, #-0x10]
7101fd41ac  cmp w8,#0x0
7101fd41b0  b 0x7101fd41fc
7101fd41b4  ldur x10,[x8, #-0x10]
7101fd41b8  cbz x10,0x7101fd41e4
7101fd41bc  scvtf s0,x10
7101fd41c0  fcmp s0,#0.0
7101fd41c4  b.eq 0x7101fd41e4
7101fd41c8  b 0x7101fd41ec
7101fd41cc  and w10,w9,#0xf
7101fd41d0  cmp w10,#0x3
7101fd41d4  b.ne 0x7101fd41ec
7101fd41d8  ldur s0,[x8, #-0x10]
7101fd41dc  fcmp s0,#0.0
7101fd41e0  b.ne 0x7101fd41ec
7101fd41e4  mov w8,wzr
7101fd41e8  b 0x7101fd4208
7101fd41ec  cmp w9,#0x3
7101fd41f0  b.ne 0x7101fd4204
7101fd41f4  ldur s0,[x8, #-0x10]
7101fd41f8  fcmp s0,#0.0
7101fd41fc  cset w8,ne
7101fd4200  b 0x7101fd4208
7101fd4204  mov w8,#0x1
7101fd4208  strb w8,[x19, #0x70]
7101fd420c  ldr x8,[x22]
7101fd4210  sub x8,x8,#0x10
7101fd4214  str x8,[x22]
7101fd4218  ldr x9,[x24]
7101fd421c  cmp w21,#0x1
7101fd4220  b.lt 0x7101fd4240
7101fd4224  ldr x9,[x9]
7101fd4228  add x9,x9,w21, SXTW  #0x4
7101fd422c  adrp x10,0x7104862000
7101fd4230  add x10,x10,#0x960
7101fd4234  cmp x9,x8
7101fd4238  csel x1,x9,x10,cc
7101fd423c  b 0x7101fd429c
7101fd4240  add w10,w23,#0x1
7101fd4244  cmp w21,w10
7101fd4248  b.ge 0x7101fd4260
7101fd424c  cmp w21,w23
7101fd4250  b.ne 0x7101fd4268
7101fd4254  ldr x8,[x20, #0x18]
7101fd4258  add x1,x8,#0x40
7101fd425c  b 0x7101fd429c
7101fd4260  add x1,x8,w21, SXTW  #0x4
7101fd4264  b 0x7101fd429c
7101fd4268  ldr x8,[x9]
7101fd426c  ldr w9,[x8, #0x8]
7101fd4270  adrp x1,0x7104862000
7101fd4274  add x1,x1,#0x960
7101fd4278  cmp w9,#0x16
7101fd427c  b.eq 0x7101fd429c
7101fd4280  ldr x8,[x8]
7101fd4284  sub w9,w23,w21
7101fd4288  add x10,x8,w9, SXTW  #0x4
7101fd428c  ldrb w8,[x8, #0xa]
7101fd4290  add x10,x10,#0x10
7101fd4294  cmp w9,w8
7101fd4298  csel x1,x1,x10,gt
7101fd429c  adrp x2,0x710433b000
7101fd42a0  add x2,x2,#0x1e
7101fd42a4  mov x0,x20
7101fd42a8  bl 0x71038f4d40
7101fd42ac  ldr x8,[x20, #0x10]
7101fd42b0  sub x25,x8,#0x10
7101fd42b4  ldur w8,[x8, #-0x8]
7101fd42b8  cmp w8,#0x13
7101fd42bc  b.ne 0x7101fd42c8
7101fd42c0  ldr x8,[x25]
7101fd42c4  b 0x7101fd4328
7101fd42c8  ldr w8,[x25, #0x8]
7101fd42cc  cmp w8,#0x13
7101fd42d0  b.eq 0x7101fd42c0
7101fd42d4  cmp w8,#0x3
7101fd42d8  b.eq 0x7101fd5374
7101fd42dc  and w8,w8,#0xf
7101fd42e0  cmp w8,#0x4
7101fd42e4  b.ne 0x7101fd4324
7101fd42e8  ldr x8,[x25]
7101fd42ec  add x0,x8,#0x18
7101fd42f0  mov x1,sp
7101fd42f4  bl 0x7103907f00
7101fd42f8  ldr x8,[x25]
7101fd42fc  ldrb w9,[x8, #0x8]
7101fd4300  cmp w9,#0x4
7101fd4304  b.ne 0x7101fd4310
7101fd4308  ldrb w8,[x8, #0xb]
7101fd430c  b 0x7101fd4314
7101fd4310  ldr x8,[x8, #0x10]
7101fd4314  add x8,x8,#0x1
7101fd4318  mov x25,sp
7101fd431c  cmp x0,x8
7101fd4320  b.eq 0x7101fd42c8
7101fd4324  mov x8,xzr
7101fd4328  strb w8,[x19, #0x71]
7101fd432c  ldr x8,[x22]
7101fd4330  sub x8,x8,#0x10
7101fd4334  str x8,[x22]
7101fd4338  ldr x9,[x24]
7101fd433c  cmp w21,#0x1
7101fd4340  b.lt 0x7101fd4360
7101fd4344  ldr x9,[x9]
7101fd4348  add x9,x9,w21, SXTW  #0x4
7101fd434c  adrp x10,0x7104862000
7101fd4350  add x10,x10,#0x960
7101fd4354  cmp x9,x8
7101fd4358  csel x1,x9,x10,cc
7101fd435c  b 0x7101fd43bc
7101fd4360  add w10,w23,#0x1
7101fd4364  cmp w21,w10
7101fd4368  b.ge 0x7101fd4380
7101fd436c  cmp w21,w23
7101fd4370  b.ne 0x7101fd4388
7101fd4374  ldr x8,[x20, #0x18]
7101fd4378  add x1,x8,#0x40
7101fd437c  b 0x7101fd43bc
7101fd4380  add x1,x8,w21, SXTW  #0x4
7101fd4384  b 0x7101fd43bc
7101fd4388  ldr x8,[x9]
7101fd438c  ldr w9,[x8, #0x8]
7101fd4390  adrp x1,0x7104862000
7101fd4394  add x1,x1,#0x960
7101fd4398  cmp w9,#0x16
7101fd439c  b.eq 0x7101fd43bc
7101fd43a0  ldr x8,[x8]
7101fd43a4  sub w9,w23,w21
7101fd43a8  add x10,x8,w9, SXTW  #0x4
7101fd43ac  ldrb w8,[x8, #0xa]
7101fd43b0  add x10,x10,#0x10
7101fd43b4  cmp w9,w8
7101fd43b8  csel x1,x1,x10,gt
7101fd43bc  adrp x2,0x7104413000
7101fd43c0  add x2,x2,#0x7d4
7101fd43c4  mov x0,x20
7101fd43c8  bl 0x71038f4d40
7101fd43cc  ldr x8,[x20, #0x10]
7101fd43d0  ldur w9,[x8, #-0x8]
7101fd43d4  cbz w9,0x7101fd4424
7101fd43d8  cmp w9,#0x13
7101fd43dc  b.eq 0x7101fd43f4
7101fd43e0  cmp w9,#0x1
7101fd43e4  b.ne 0x7101fd440c
7101fd43e8  ldur w8,[x8, #-0x10]
7101fd43ec  cmp w8,#0x0
7101fd43f0  b 0x7101fd443c
7101fd43f4  ldur x10,[x8, #-0x10]
7101fd43f8  cbz x10,0x7101fd4424
7101fd43fc  scvtf s0,x10
7101fd4400  fcmp s0,#0.0
7101fd4404  b.eq 0x7101fd4424
7101fd4408  b 0x7101fd442c
7101fd440c  and w10,w9,#0xf
7101fd4410  cmp w10,#0x3
7101fd4414  b.ne 0x7101fd442c
7101fd4418  ldur s0,[x8, #-0x10]
7101fd441c  fcmp s0,#0.0
7101fd4420  b.ne 0x7101fd442c
7101fd4424  mov w8,wzr
7101fd4428  b 0x7101fd4448
7101fd442c  cmp w9,#0x3
7101fd4430  b.ne 0x7101fd4444
7101fd4434  ldur s0,[x8, #-0x10]
7101fd4438  fcmp s0,#0.0
7101fd443c  cset w8,ne
7101fd4440  b 0x7101fd4448
7101fd4444  mov w8,#0x1
7101fd4448  strb w8,[x19, #0x72]
7101fd444c  ldr x8,[x22]
7101fd4450  sub x8,x8,#0x10
7101fd4454  str x8,[x22]
7101fd4458  ldr x9,[x24]
7101fd445c  cmp w21,#0x1
7101fd4460  b.lt 0x7101fd4480
7101fd4464  ldr x9,[x9]
7101fd4468  add x9,x9,w21, SXTW  #0x4
7101fd446c  adrp x10,0x7104862000
7101fd4470  add x10,x10,#0x960
7101fd4474  cmp x9,x8
7101fd4478  csel x1,x9,x10,cc
7101fd447c  b 0x7101fd44dc
7101fd4480  add w10,w23,#0x1
7101fd4484  cmp w21,w10
7101fd4488  b.ge 0x7101fd44a0
7101fd448c  cmp w21,w23
7101fd4490  b.ne 0x7101fd44a8
7101fd4494  ldr x8,[x20, #0x18]
7101fd4498  add x1,x8,#0x40
7101fd449c  b 0x7101fd44dc
7101fd44a0  add x1,x8,w21, SXTW  #0x4
7101fd44a4  b 0x7101fd44dc
7101fd44a8  ldr x8,[x9]
7101fd44ac  ldr w9,[x8, #0x8]
7101fd44b0  adrp x1,0x7104862000
7101fd44b4  add x1,x1,#0x960
7101fd44b8  cmp w9,#0x16
7101fd44bc  b.eq 0x7101fd44dc
7101fd44c0  ldr x8,[x8]
7101fd44c4  sub w9,w23,w21
7101fd44c8  add x10,x8,w9, SXTW  #0x4
7101fd44cc  ldrb w8,[x8, #0xa]
7101fd44d0  add x10,x10,#0x10
7101fd44d4  cmp w9,w8
7101fd44d8  csel x1,x1,x10,gt
7101fd44dc  adrp x2,0x710436d000
7101fd44e0  add x2,x2,#0x18b
7101fd44e4  mov x0,x20
7101fd44e8  bl 0x71038f4d40
7101fd44ec  ldr x8,[x20, #0x10]
7101fd44f0  sub x25,x8,#0x10
7101fd44f4  ldur w8,[x8, #-0x8]
7101fd44f8  cmp w8,#0x13
7101fd44fc  b.ne 0x7101fd4508
7101fd4500  ldr x8,[x25]
7101fd4504  b 0x7101fd4568
7101fd4508  ldr w8,[x25, #0x8]
7101fd450c  cmp w8,#0x13
7101fd4510  b.eq 0x7101fd4500
7101fd4514  cmp w8,#0x3
7101fd4518  b.eq 0x7101fd53a4
7101fd451c  and w8,w8,#0xf
7101fd4520  cmp w8,#0x4
7101fd4524  b.ne 0x7101fd4564
7101fd4528  ldr x8,[x25]
7101fd452c  add x0,x8,#0x18
7101fd4530  mov x1,sp
7101fd4534  bl 0x7103907f00
7101fd4538  ldr x8,[x25]
7101fd453c  ldrb w9,[x8, #0x8]
7101fd4540  cmp w9,#0x4
7101fd4544  b.ne 0x7101fd4550
7101fd4548  ldrb w8,[x8, #0xb]
7101fd454c  b 0x7101fd4554
7101fd4550  ldr x8,[x8, #0x10]
7101fd4554  add x8,x8,#0x1
7101fd4558  mov x25,sp
7101fd455c  cmp x0,x8
7101fd4560  b.eq 0x7101fd4508
7101fd4564  mov x8,xzr
7101fd4568  strb w8,[x19, #0x73]
7101fd456c  ldr x8,[x22]
7101fd4570  sub x8,x8,#0x10
7101fd4574  str x8,[x22]
7101fd4578  ldr x9,[x24]
7101fd457c  cmp w21,#0x1
7101fd4580  b.lt 0x7101fd45a0
7101fd4584  ldr x9,[x9]
7101fd4588  add x9,x9,w21, SXTW  #0x4
7101fd458c  adrp x10,0x7104862000
7101fd4590  add x10,x10,#0x960
7101fd4594  cmp x9,x8
7101fd4598  csel x1,x9,x10,cc
7101fd459c  b 0x7101fd45fc
7101fd45a0  add w10,w23,#0x1
7101fd45a4  cmp w21,w10
7101fd45a8  b.ge 0x7101fd45c0
7101fd45ac  cmp w21,w23
7101fd45b0  b.ne 0x7101fd45c8
7101fd45b4  ldr x8,[x20, #0x18]
7101fd45b8  add x1,x8,#0x40
7101fd45bc  b 0x7101fd45fc
7101fd45c0  add x1,x8,w21, SXTW  #0x4
7101fd45c4  b 0x7101fd45fc
7101fd45c8  ldr x8,[x9]
7101fd45cc  ldr w9,[x8, #0x8]
7101fd45d0  adrp x1,0x7104862000
7101fd45d4  add x1,x1,#0x960
7101fd45d8  cmp w9,#0x16
7101fd45dc  b.eq 0x7101fd45fc
7101fd45e0  ldr x8,[x8]
7101fd45e4  sub w9,w23,w21
7101fd45e8  add x10,x8,w9, SXTW  #0x4
7101fd45ec  ldrb w8,[x8, #0xa]
7101fd45f0  add x10,x10,#0x10
7101fd45f4  cmp w9,w8
7101fd45f8  csel x1,x1,x10,gt
7101fd45fc  adrp x2,0x7104413000
7101fd4600  add x2,x2,#0x7e1
7101fd4604  mov x0,x20
7101fd4608  bl 0x71038f4d40
7101fd460c  ldr x8,[x20, #0x10]
7101fd4610  sub x25,x8,#0x10
7101fd4614  ldur w8,[x8, #-0x8]
7101fd4618  cmp w8,#0x13
7101fd461c  b.ne 0x7101fd4628
7101fd4620  ldr x8,[x25]
7101fd4624  b 0x7101fd4688
7101fd4628  ldr w8,[x25, #0x8]
7101fd462c  cmp w8,#0x13
7101fd4630  b.eq 0x7101fd4620
7101fd4634  cmp w8,#0x3
7101fd4638  b.eq 0x7101fd53d4
7101fd463c  and w8,w8,#0xf
7101fd4640  cmp w8,#0x4
7101fd4644  b.ne 0x7101fd4684
7101fd4648  ldr x8,[x25]
7101fd464c  add x0,x8,#0x18
7101fd4650  mov x1,sp
7101fd4654  bl 0x7103907f00
7101fd4658  ldr x8,[x25]
7101fd465c  ldrb w9,[x8, #0x8]
7101fd4660  cmp w9,#0x4
7101fd4664  b.ne 0x7101fd4670
7101fd4668  ldrb w8,[x8, #0xb]
7101fd466c  b 0x7101fd4674
7101fd4670  ldr x8,[x8, #0x10]
7101fd4674  add x8,x8,#0x1
7101fd4678  mov x25,sp
7101fd467c  cmp x0,x8
7101fd4680  b.eq 0x7101fd4628
7101fd4684  mov x8,xzr
7101fd4688  strh w8,[x19, #0x74]
7101fd468c  ldr x8,[x22]
7101fd4690  sub x8,x8,#0x10
7101fd4694  str x8,[x22]
7101fd4698  ldr x9,[x24]
7101fd469c  cmp w21,#0x1
7101fd46a0  b.lt 0x7101fd46c0
7101fd46a4  ldr x9,[x9]
7101fd46a8  add x9,x9,w21, SXTW  #0x4
7101fd46ac  adrp x10,0x7104862000
7101fd46b0  add x10,x10,#0x960
7101fd46b4  cmp x9,x8
7101fd46b8  csel x1,x9,x10,cc
7101fd46bc  b 0x7101fd471c
7101fd46c0  add w10,w23,#0x1
7101fd46c4  cmp w21,w10
7101fd46c8  b.ge 0x7101fd46e0
7101fd46cc  cmp w21,w23
7101fd46d0  b.ne 0x7101fd46e8
7101fd46d4  ldr x8,[x20, #0x18]
7101fd46d8  add x1,x8,#0x40
7101fd46dc  b 0x7101fd471c
7101fd46e0  add x1,x8,w21, SXTW  #0x4
7101fd46e4  b 0x7101fd471c
7101fd46e8  ldr x8,[x9]
7101fd46ec  ldr w9,[x8, #0x8]
7101fd46f0  adrp x1,0x7104862000
7101fd46f4  add x1,x1,#0x960
7101fd46f8  cmp w9,#0x16
7101fd46fc  b.eq 0x7101fd471c
7101fd4700  ldr x8,[x8]
7101fd4704  sub w9,w23,w21
7101fd4708  add x10,x8,w9, SXTW  #0x4
7101fd470c  ldrb w8,[x8, #0xa]
7101fd4710  add x10,x10,#0x10
7101fd4714  cmp w9,w8
7101fd4718  csel x1,x1,x10,gt
7101fd471c  adrp x2,0x7104455000
7101fd4720  add x2,x2,#0x8c8
7101fd4724  mov x0,x20
7101fd4728  bl 0x71038f4d40
7101fd472c  ldr x8,[x20, #0x10]
7101fd4730  sub x25,x8,#0x10
7101fd4734  ldur w8,[x8, #-0x8]
7101fd4738  cmp w8,#0x13
7101fd473c  b.ne 0x7101fd4748
7101fd4740  ldr x8,[x25]
7101fd4744  b 0x7101fd47a8
7101fd4748  ldr w8,[x25, #0x8]
7101fd474c  cmp w8,#0x13
7101fd4750  b.eq 0x7101fd4740
7101fd4754  cmp w8,#0x3
7101fd4758  b.eq 0x7101fd5404
7101fd475c  and w8,w8,#0xf
7101fd4760  cmp w8,#0x4
7101fd4764  b.ne 0x7101fd47a4
7101fd4768  ldr x8,[x25]
7101fd476c  add x0,x8,#0x18
7101fd4770  mov x1,sp
7101fd4774  bl 0x7103907f00
7101fd4778  ldr x8,[x25]
7101fd477c  ldrb w9,[x8, #0x8]
7101fd4780  cmp w9,#0x4
7101fd4784  b.ne 0x7101fd4790
7101fd4788  ldrb w8,[x8, #0xb]
7101fd478c  b 0x7101fd4794
7101fd4790  ldr x8,[x8, #0x10]
7101fd4794  add x8,x8,#0x1
7101fd4798  mov x25,sp
7101fd479c  cmp x0,x8
7101fd47a0  b.eq 0x7101fd4748
7101fd47a4  mov x8,xzr
7101fd47a8  strb w8,[x19, #0x76]
7101fd47ac  ldr x8,[x22]
7101fd47b0  sub x8,x8,#0x10
7101fd47b4  str x8,[x22]
7101fd47b8  ldr x9,[x24]
7101fd47bc  cmp w21,#0x1
7101fd47c0  b.lt 0x7101fd47e0
7101fd47c4  ldr x9,[x9]
7101fd47c8  add x9,x9,w21, SXTW  #0x4
7101fd47cc  adrp x10,0x7104862000
7101fd47d0  add x10,x10,#0x960
7101fd47d4  cmp x9,x8
7101fd47d8  csel x1,x9,x10,cc
7101fd47dc  b 0x7101fd483c
7101fd47e0  add w10,w23,#0x1
7101fd47e4  cmp w21,w10
7101fd47e8  b.ge 0x7101fd4800
7101fd47ec  cmp w21,w23
7101fd47f0  b.ne 0x7101fd4808
7101fd47f4  ldr x8,[x20, #0x18]
7101fd47f8  add x1,x8,#0x40
7101fd47fc  b 0x7101fd483c
7101fd4800  add x1,x8,w21, SXTW  #0x4
7101fd4804  b 0x7101fd483c
7101fd4808  ldr x8,[x9]
7101fd480c  ldr w9,[x8, #0x8]
7101fd4810  adrp x1,0x7104862000
7101fd4814  add x1,x1,#0x960
7101fd4818  cmp w9,#0x16
7101fd481c  b.eq 0x7101fd483c
7101fd4820  ldr x8,[x8]
7101fd4824  sub w9,w23,w21
7101fd4828  add x10,x8,w9, SXTW  #0x4
7101fd482c  ldrb w8,[x8, #0xa]
7101fd4830  add x10,x10,#0x10
7101fd4834  cmp w9,w8
7101fd4838  csel x1,x1,x10,gt
7101fd483c  adrp x2,0x71042a3000
7101fd4840  add x2,x2,#0xd54
7101fd4844  mov x0,x20
7101fd4848  bl 0x71038f4d40
7101fd484c  ldr x8,[x20, #0x10]
7101fd4850  sub x25,x8,#0x10
7101fd4854  ldur w8,[x8, #-0x8]
7101fd4858  cmp w8,#0x13
7101fd485c  b.ne 0x7101fd4868
7101fd4860  ldr x8,[x25]
7101fd4864  b 0x7101fd48c8
7101fd4868  ldr w8,[x25, #0x8]
7101fd486c  cmp w8,#0x13
7101fd4870  b.eq 0x7101fd4860
7101fd4874  cmp w8,#0x3
7101fd4878  b.eq 0x7101fd5434
7101fd487c  and w8,w8,#0xf
7101fd4880  cmp w8,#0x4
7101fd4884  b.ne 0x7101fd48c4
7101fd4888  ldr x8,[x25]
7101fd488c  add x0,x8,#0x18
7101fd4890  mov x1,sp
7101fd4894  bl 0x7103907f00
7101fd4898  ldr x8,[x25]
7101fd489c  ldrb w9,[x8, #0x8]
7101fd48a0  cmp w9,#0x4
7101fd48a4  b.ne 0x7101fd48b0
7101fd48a8  ldrb w8,[x8, #0xb]
7101fd48ac  b 0x7101fd48b4
7101fd48b0  ldr x8,[x8, #0x10]
7101fd48b4  add x8,x8,#0x1
7101fd48b8  mov x25,sp
7101fd48bc  cmp x0,x8
7101fd48c0  b.eq 0x7101fd4868
7101fd48c4  mov x8,xzr
7101fd48c8  str w8,[x19, #0x78]
7101fd48cc  ldr x8,[x22]
7101fd48d0  sub x8,x8,#0x10
7101fd48d4  str x8,[x22]
7101fd48d8  ldr x9,[x24]
7101fd48dc  cmp w21,#0x1
7101fd48e0  b.lt 0x7101fd4900
7101fd48e4  ldr x9,[x9]
7101fd48e8  add x9,x9,w21, SXTW  #0x4
7101fd48ec  adrp x10,0x7104862000
7101fd48f0  add x10,x10,#0x960
7101fd48f4  cmp x9,x8
7101fd48f8  csel x1,x9,x10,cc
7101fd48fc  b 0x7101fd495c
7101fd4900  add w10,w23,#0x1
7101fd4904  cmp w21,w10
7101fd4908  b.ge 0x7101fd4920
7101fd490c  cmp w21,w23
7101fd4910  b.ne 0x7101fd4928
7101fd4914  ldr x8,[x20, #0x18]
7101fd4918  add x1,x8,#0x40
7101fd491c  b 0x7101fd495c
7101fd4920  add x1,x8,w21, SXTW  #0x4
7101fd4924  b 0x7101fd495c
7101fd4928  ldr x8,[x9]
7101fd492c  ldr w9,[x8, #0x8]
7101fd4930  adrp x1,0x7104862000
7101fd4934  add x1,x1,#0x960
7101fd4938  cmp w9,#0x16
7101fd493c  b.eq 0x7101fd495c
7101fd4940  ldr x8,[x8]
7101fd4944  sub w9,w23,w21
7101fd4948  add x10,x8,w9, SXTW  #0x4
7101fd494c  ldrb w8,[x8, #0xa]
7101fd4950  add x10,x10,#0x10
7101fd4954  cmp w9,w8
7101fd4958  csel x1,x1,x10,gt
7101fd495c  adrp x2,0x71043e1000
7101fd4960  add x2,x2,#0x67
7101fd4964  mov x0,x20
7101fd4968  bl 0x71038f4d40
7101fd496c  ldr x8,[x20, #0x10]
7101fd4970  ldur w9,[x8, #-0x8]
7101fd4974  cbz w9,0x7101fd49c4
7101fd4978  cmp w9,#0x13
7101fd497c  b.eq 0x7101fd4994
7101fd4980  cmp w9,#0x1
7101fd4984  b.ne 0x7101fd49ac
7101fd4988  ldur w8,[x8, #-0x10]
7101fd498c  cmp w8,#0x0
7101fd4990  b 0x7101fd49dc
7101fd4994  ldur x10,[x8, #-0x10]
7101fd4998  cbz x10,0x7101fd49c4
7101fd499c  scvtf s0,x10
7101fd49a0  fcmp s0,#0.0
7101fd49a4  b.eq 0x7101fd49c4
7101fd49a8  b 0x7101fd49cc
7101fd49ac  and w10,w9,#0xf
7101fd49b0  cmp w10,#0x3
7101fd49b4  b.ne 0x7101fd49cc
7101fd49b8  ldur s0,[x8, #-0x10]
7101fd49bc  fcmp s0,#0.0
7101fd49c0  b.ne 0x7101fd49cc
7101fd49c4  mov w8,wzr
7101fd49c8  b 0x7101fd49e8
7101fd49cc  cmp w9,#0x3
7101fd49d0  b.ne 0x7101fd49e4
7101fd49d4  ldur s0,[x8, #-0x10]
7101fd49d8  fcmp s0,#0.0
7101fd49dc  cset w8,ne
7101fd49e0  b 0x7101fd49e8
7101fd49e4  mov w8,#0x1
7101fd49e8  strb w8,[x19, #0x7c]
7101fd49ec  ldr x8,[x22]
7101fd49f0  sub x8,x8,#0x10
7101fd49f4  str x8,[x22]
7101fd49f8  ldr x9,[x24]
7101fd49fc  cmp w21,#0x1
7101fd4a00  b.lt 0x7101fd4a20
7101fd4a04  ldr x9,[x9]
7101fd4a08  add x9,x9,w21, SXTW  #0x4
7101fd4a0c  adrp x10,0x7104862000
7101fd4a10  add x10,x10,#0x960
7101fd4a14  cmp x9,x8
7101fd4a18  csel x1,x9,x10,cc
7101fd4a1c  b 0x7101fd4a7c
7101fd4a20  add w10,w23,#0x1
7101fd4a24  cmp w21,w10
7101fd4a28  b.ge 0x7101fd4a40
7101fd4a2c  cmp w21,w23
7101fd4a30  b.ne 0x7101fd4a48
7101fd4a34  ldr x8,[x20, #0x18]
7101fd4a38  add x1,x8,#0x40
7101fd4a3c  b 0x7101fd4a7c
7101fd4a40  add x1,x8,w21, SXTW  #0x4
7101fd4a44  b 0x7101fd4a7c
7101fd4a48  ldr x8,[x9]
7101fd4a4c  ldr w9,[x8, #0x8]
7101fd4a50  adrp x1,0x7104862000
7101fd4a54  add x1,x1,#0x960
7101fd4a58  cmp w9,#0x16
7101fd4a5c  b.eq 0x7101fd4a7c
7101fd4a60  ldr x8,[x8]
7101fd4a64  sub w9,w23,w21
7101fd4a68  add x10,x8,w9, SXTW  #0x4
7101fd4a6c  ldrb w8,[x8, #0xa]
7101fd4a70  add x10,x10,#0x10
7101fd4a74  cmp w9,w8
7101fd4a78  csel x1,x1,x10,gt
7101fd4a7c  adrp x2,0x71043bf000
7101fd4a80  add x2,x2,#0x3a4
7101fd4a84  mov x0,x20
7101fd4a88  bl 0x71038f4d40
7101fd4a8c  ldr x8,[x20, #0x10]
7101fd4a90  ldur w9,[x8, #-0x8]
7101fd4a94  cbz w9,0x7101fd4ae4
7101fd4a98  cmp w9,#0x13
7101fd4a9c  b.eq 0x7101fd4ab4
7101fd4aa0  cmp w9,#0x1
7101fd4aa4  b.ne 0x7101fd4acc
7101fd4aa8  ldur w8,[x8, #-0x10]
7101fd4aac  cmp w8,#0x0
7101fd4ab0  b 0x7101fd4afc
7101fd4ab4  ldur x10,[x8, #-0x10]
7101fd4ab8  cbz x10,0x7101fd4ae4
7101fd4abc  scvtf s0,x10
7101fd4ac0  fcmp s0,#0.0
7101fd4ac4  b.eq 0x7101fd4ae4
7101fd4ac8  b 0x7101fd4aec
7101fd4acc  and w10,w9,#0xf
7101fd4ad0  cmp w10,#0x3
7101fd4ad4  b.ne 0x7101fd4aec
7101fd4ad8  ldur s0,[x8, #-0x10]
7101fd4adc  fcmp s0,#0.0
7101fd4ae0  b.ne 0x7101fd4aec
7101fd4ae4  mov w8,wzr
7101fd4ae8  b 0x7101fd4b08
7101fd4aec  cmp w9,#0x3
7101fd4af0  b.ne 0x7101fd4b04
7101fd4af4  ldur s0,[x8, #-0x10]
7101fd4af8  fcmp s0,#0.0
7101fd4afc  cset w8,ne
7101fd4b00  b 0x7101fd4b08
7101fd4b04  mov w8,#0x1
7101fd4b08  strb w8,[x19, #0x7d]
7101fd4b0c  ldr x8,[x22]
7101fd4b10  sub x8,x8,#0x10
7101fd4b14  str x8,[x22]
7101fd4b18  ldr x9,[x24]
7101fd4b1c  cmp w21,#0x1
7101fd4b20  b.lt 0x7101fd4b40
7101fd4b24  ldr x9,[x9]
7101fd4b28  add x9,x9,w21, SXTW  #0x4
7101fd4b2c  adrp x10,0x7104862000
7101fd4b30  add x10,x10,#0x960
7101fd4b34  cmp x9,x8
7101fd4b38  csel x1,x9,x10,cc
7101fd4b3c  b 0x7101fd4b9c
7101fd4b40  add w10,w23,#0x1
7101fd4b44  cmp w21,w10
7101fd4b48  b.ge 0x7101fd4b60
7101fd4b4c  cmp w21,w23
7101fd4b50  b.ne 0x7101fd4b68
7101fd4b54  ldr x8,[x20, #0x18]
7101fd4b58  add x1,x8,#0x40
7101fd4b5c  b 0x7101fd4b9c
7101fd4b60  add x1,x8,w21, SXTW  #0x4
7101fd4b64  b 0x7101fd4b9c
7101fd4b68  ldr x8,[x9]
7101fd4b6c  ldr w9,[x8, #0x8]
7101fd4b70  adrp x1,0x7104862000
7101fd4b74  add x1,x1,#0x960
7101fd4b78  cmp w9,#0x16
7101fd4b7c  b.eq 0x7101fd4b9c
7101fd4b80  ldr x8,[x8]
7101fd4b84  sub w9,w23,w21
7101fd4b88  add x10,x8,w9, SXTW  #0x4
7101fd4b8c  ldrb w8,[x8, #0xa]
7101fd4b90  add x10,x10,#0x10
7101fd4b94  cmp w9,w8
7101fd4b98  csel x1,x1,x10,gt
7101fd4b9c  adrp x2,0x71043ae000
7101fd4ba0  add x2,x2,#0x756
7101fd4ba4  mov x0,x20
7101fd4ba8  bl 0x71038f4d40
7101fd4bac  ldr x8,[x20, #0x10]
7101fd4bb0  sub x25,x8,#0x10
7101fd4bb4  ldur w8,[x8, #-0x8]
7101fd4bb8  cmp w8,#0x13
7101fd4bbc  b.ne 0x7101fd4bc8
7101fd4bc0  ldr x8,[x25]
7101fd4bc4  b 0x7101fd4c28
7101fd4bc8  ldr w8,[x25, #0x8]
7101fd4bcc  cmp w8,#0x13
7101fd4bd0  b.eq 0x7101fd4bc0
7101fd4bd4  cmp w8,#0x3
7101fd4bd8  b.eq 0x7101fd5464
7101fd4bdc  and w8,w8,#0xf
7101fd4be0  cmp w8,#0x4
7101fd4be4  b.ne 0x7101fd4c24
7101fd4be8  ldr x8,[x25]
7101fd4bec  add x0,x8,#0x18
7101fd4bf0  mov x1,sp
7101fd4bf4  bl 0x7103907f00
7101fd4bf8  ldr x8,[x25]
7101fd4bfc  ldrb w9,[x8, #0x8]
7101fd4c00  cmp w9,#0x4
7101fd4c04  b.ne 0x7101fd4c10
7101fd4c08  ldrb w8,[x8, #0xb]
7101fd4c0c  b 0x7101fd4c14
7101fd4c10  ldr x8,[x8, #0x10]
7101fd4c14  add x8,x8,#0x1
7101fd4c18  mov x25,sp
7101fd4c1c  cmp x0,x8
7101fd4c20  b.eq 0x7101fd4bc8
7101fd4c24  mov x8,xzr
7101fd4c28  strb w8,[x19, #0x7e]
7101fd4c2c  ldr x8,[x22]
7101fd4c30  sub x8,x8,#0x10
7101fd4c34  str x8,[x22]
7101fd4c38  ldr x9,[x24]
7101fd4c3c  cmp w21,#0x1
7101fd4c40  b.lt 0x7101fd4c60
7101fd4c44  ldr x9,[x9]
7101fd4c48  add x9,x9,w21, SXTW  #0x4
7101fd4c4c  adrp x10,0x7104862000
7101fd4c50  add x10,x10,#0x960
7101fd4c54  cmp x9,x8
7101fd4c58  csel x1,x9,x10,cc
7101fd4c5c  b 0x7101fd4cbc
7101fd4c60  add w10,w23,#0x1
7101fd4c64  cmp w21,w10
7101fd4c68  b.ge 0x7101fd4c80
7101fd4c6c  cmp w21,w23
7101fd4c70  b.ne 0x7101fd4c88
7101fd4c74  ldr x8,[x20, #0x18]
7101fd4c78  add x1,x8,#0x40
7101fd4c7c  b 0x7101fd4cbc
7101fd4c80  add x1,x8,w21, SXTW  #0x4
7101fd4c84  b 0x7101fd4cbc
7101fd4c88  ldr x8,[x9]
7101fd4c8c  ldr w9,[x8, #0x8]
7101fd4c90  adrp x1,0x7104862000
7101fd4c94  add x1,x1,#0x960
7101fd4c98  cmp w9,#0x16
7101fd4c9c  b.eq 0x7101fd4cbc
7101fd4ca0  ldr x8,[x8]
7101fd4ca4  sub w9,w23,w21
7101fd4ca8  add x10,x8,w9, SXTW  #0x4
7101fd4cac  ldrb w8,[x8, #0xa]
7101fd4cb0  add x10,x10,#0x10
7101fd4cb4  cmp w9,w8
7101fd4cb8  csel x1,x1,x10,gt
7101fd4cbc  adrp x2,0x710432a000
7101fd4cc0  add x2,x2,#0xe0c
7101fd4cc4  mov x0,x20
7101fd4cc8  bl 0x71038f4d40
7101fd4ccc  ldr x8,[x20, #0x10]
7101fd4cd0  sub x25,x8,#0x10
7101fd4cd4  ldur w8,[x8, #-0x8]
7101fd4cd8  cmp w8,#0x13
7101fd4cdc  b.ne 0x7101fd4ce8
7101fd4ce0  ldr x8,[x25]
7101fd4ce4  b 0x7101fd4d48
7101fd4ce8  ldr w8,[x25, #0x8]
7101fd4cec  cmp w8,#0x13
7101fd4cf0  b.eq 0x7101fd4ce0
7101fd4cf4  cmp w8,#0x3
7101fd4cf8  b.eq 0x7101fd5494
7101fd4cfc  and w8,w8,#0xf
7101fd4d00  cmp w8,#0x4
7101fd4d04  b.ne 0x7101fd4d44
7101fd4d08  ldr x8,[x25]
7101fd4d0c  add x0,x8,#0x18
7101fd4d10  mov x1,sp
7101fd4d14  bl 0x7103907f00
7101fd4d18  ldr x8,[x25]
7101fd4d1c  ldrb w9,[x8, #0x8]
7101fd4d20  cmp w9,#0x4
7101fd4d24  b.ne 0x7101fd4d30
7101fd4d28  ldrb w8,[x8, #0xb]
7101fd4d2c  b 0x7101fd4d34
7101fd4d30  ldr x8,[x8, #0x10]
7101fd4d34  add x8,x8,#0x1
7101fd4d38  mov x25,sp
7101fd4d3c  cmp x0,x8
7101fd4d40  b.eq 0x7101fd4ce8
7101fd4d44  mov x8,xzr
7101fd4d48  strb w8,[x19, #0x7f]
7101fd4d4c  ldr x8,[x22]
7101fd4d50  sub x8,x8,#0x10
7101fd4d54  str x8,[x22]
7101fd4d58  ldr x9,[x24]
7101fd4d5c  cmp w21,#0x1
7101fd4d60  b.lt 0x7101fd4d80
7101fd4d64  ldr x9,[x9]
7101fd4d68  add x9,x9,w21, SXTW  #0x4
7101fd4d6c  adrp x10,0x7104862000
7101fd4d70  add x10,x10,#0x960
7101fd4d74  cmp x9,x8
7101fd4d78  csel x1,x9,x10,cc
7101fd4d7c  b 0x7101fd4ddc
7101fd4d80  add w10,w23,#0x1
7101fd4d84  cmp w21,w10
7101fd4d88  b.ge 0x7101fd4da0
7101fd4d8c  cmp w21,w23
7101fd4d90  b.ne 0x7101fd4da8
7101fd4d94  ldr x8,[x20, #0x18]
7101fd4d98  add x1,x8,#0x40
7101fd4d9c  b 0x7101fd4ddc
7101fd4da0  add x1,x8,w21, SXTW  #0x4
7101fd4da4  b 0x7101fd4ddc
7101fd4da8  ldr x8,[x9]
7101fd4dac  ldr w9,[x8, #0x8]
7101fd4db0  adrp x1,0x7104862000
7101fd4db4  add x1,x1,#0x960
7101fd4db8  cmp w9,#0x16
7101fd4dbc  b.eq 0x7101fd4ddc
7101fd4dc0  ldr x8,[x8]
7101fd4dc4  sub w9,w23,w21
7101fd4dc8  add x10,x8,w9, SXTW  #0x4
7101fd4dcc  ldrb w8,[x8, #0xa]
7101fd4dd0  add x10,x10,#0x10
7101fd4dd4  cmp w9,w8
7101fd4dd8  csel x1,x1,x10,gt
7101fd4ddc  adrp x2,0x71043ae000
7101fd4de0  add x2,x2,#0x76a
7101fd4de4  mov x0,x20
7101fd4de8  bl 0x71038f4d40
7101fd4dec  ldr x8,[x20, #0x10]
7101fd4df0  ldur w9,[x8, #-0x8]
7101fd4df4  cbz w9,0x7101fd4e44
7101fd4df8  cmp w9,#0x13
7101fd4dfc  b.eq 0x7101fd4e14
7101fd4e00  cmp w9,#0x1
7101fd4e04  b.ne 0x7101fd4e2c
7101fd4e08  ldur w8,[x8, #-0x10]
7101fd4e0c  cmp w8,#0x0
7101fd4e10  b 0x7101fd4e5c
7101fd4e14  ldur x10,[x8, #-0x10]
7101fd4e18  cbz x10,0x7101fd4e44
7101fd4e1c  scvtf s0,x10
7101fd4e20  fcmp s0,#0.0
7101fd4e24  b.eq 0x7101fd4e44
7101fd4e28  b 0x7101fd4e4c
7101fd4e2c  and w10,w9,#0xf
7101fd4e30  cmp w10,#0x3
7101fd4e34  b.ne 0x7101fd4e4c
7101fd4e38  ldur s0,[x8, #-0x10]
7101fd4e3c  fcmp s0,#0.0
7101fd4e40  b.ne 0x7101fd4e4c
7101fd4e44  mov w8,wzr
7101fd4e48  b 0x7101fd4e68
7101fd4e4c  cmp w9,#0x3
7101fd4e50  b.ne 0x7101fd4e64
7101fd4e54  ldur s0,[x8, #-0x10]
7101fd4e58  fcmp s0,#0.0
7101fd4e5c  cset w8,ne
7101fd4e60  b 0x7101fd4e68
7101fd4e64  mov w8,#0x1
7101fd4e68  strb w8,[x19, #0x80]
7101fd4e6c  ldr x8,[x22]
7101fd4e70  sub x8,x8,#0x10
7101fd4e74  str x8,[x22]
7101fd4e78  ldr x9,[x24]
7101fd4e7c  cmp w21,#0x1
7101fd4e80  b.lt 0x7101fd4ea0
7101fd4e84  ldr x9,[x9]
7101fd4e88  add x9,x9,w21, SXTW  #0x4
7101fd4e8c  adrp x10,0x7104862000
7101fd4e90  add x10,x10,#0x960
7101fd4e94  cmp x9,x8
7101fd4e98  csel x1,x9,x10,cc
7101fd4e9c  b 0x7101fd4efc
7101fd4ea0  add w10,w23,#0x1
7101fd4ea4  cmp w21,w10
7101fd4ea8  b.ge 0x7101fd4ec0
7101fd4eac  cmp w21,w23
7101fd4eb0  b.ne 0x7101fd4ec8
7101fd4eb4  ldr x8,[x20, #0x18]
7101fd4eb8  add x1,x8,#0x40
7101fd4ebc  b 0x7101fd4efc
7101fd4ec0  add x1,x8,w21, SXTW  #0x4
7101fd4ec4  b 0x7101fd4efc
7101fd4ec8  ldr x8,[x9]
7101fd4ecc  ldr w9,[x8, #0x8]
7101fd4ed0  adrp x1,0x7104862000
7101fd4ed4  add x1,x1,#0x960
7101fd4ed8  cmp w9,#0x16
7101fd4edc  b.eq 0x7101fd4efc
7101fd4ee0  ldr x8,[x8]
7101fd4ee4  sub w9,w23,w21
7101fd4ee8  add x10,x8,w9, SXTW  #0x4
7101fd4eec  ldrb w8,[x8, #0xa]
7101fd4ef0  add x10,x10,#0x10
7101fd4ef4  cmp w9,w8
7101fd4ef8  csel x1,x1,x10,gt
7101fd4efc  adrp x2,0x710438d000
7101fd4f00  add x2,x2,#0x8b2
7101fd4f04  mov x0,x20
7101fd4f08  bl 0x71038f4d40
7101fd4f0c  ldr x8,[x20, #0x10]
7101fd4f10  ldur w9,[x8, #-0x8]
7101fd4f14  cbz w9,0x7101fd4f64
7101fd4f18  cmp w9,#0x13
7101fd4f1c  b.eq 0x7101fd4f34
7101fd4f20  cmp w9,#0x1
7101fd4f24  b.ne 0x7101fd4f4c
7101fd4f28  ldur w8,[x8, #-0x10]
7101fd4f2c  cmp w8,#0x0
7101fd4f30  b 0x7101fd4f7c
7101fd4f34  ldur x10,[x8, #-0x10]
7101fd4f38  cbz x10,0x7101fd4f64
7101fd4f3c  scvtf s0,x10
7101fd4f40  fcmp s0,#0.0
7101fd4f44  b.eq 0x7101fd4f64
7101fd4f48  b 0x7101fd4f6c
7101fd4f4c  and w10,w9,#0xf
7101fd4f50  cmp w10,#0x3
7101fd4f54  b.ne 0x7101fd4f6c
7101fd4f58  ldur s0,[x8, #-0x10]
7101fd4f5c  fcmp s0,#0.0
7101fd4f60  b.ne 0x7101fd4f6c
7101fd4f64  mov w8,wzr
7101fd4f68  b 0x7101fd4f88
7101fd4f6c  cmp w9,#0x3
7101fd4f70  b.ne 0x7101fd4f84
7101fd4f74  ldur s0,[x8, #-0x10]
7101fd4f78  fcmp s0,#0.0
7101fd4f7c  cset w8,ne
7101fd4f80  b 0x7101fd4f88
7101fd4f84  mov w8,#0x1
7101fd4f88  strb w8,[x19, #0x81]
7101fd4f8c  ldr x8,[x22]
7101fd4f90  sub x8,x8,#0x10
7101fd4f94  str x8,[x22]
7101fd4f98  ldr x9,[x24]
7101fd4f9c  cmp w21,#0x1
7101fd4fa0  b.lt 0x7101fd4fc0
7101fd4fa4  ldr x9,[x9]
7101fd4fa8  add x9,x9,w21, SXTW  #0x4
7101fd4fac  adrp x10,0x7104862000
7101fd4fb0  add x10,x10,#0x960
7101fd4fb4  cmp x9,x8
7101fd4fb8  csel x1,x9,x10,cc
7101fd4fbc  b 0x7101fd501c
7101fd4fc0  add w10,w23,#0x1
7101fd4fc4  cmp w21,w10
7101fd4fc8  b.ge 0x7101fd4fe0
7101fd4fcc  cmp w21,w23
7101fd4fd0  b.ne 0x7101fd4fe8
7101fd4fd4  ldr x8,[x20, #0x18]
7101fd4fd8  add x1,x8,#0x40
7101fd4fdc  b 0x7101fd501c
7101fd4fe0  add x1,x8,w21, SXTW  #0x4
7101fd4fe4  b 0x7101fd501c
7101fd4fe8  ldr x8,[x9]
7101fd4fec  ldr w9,[x8, #0x8]
7101fd4ff0  adrp x1,0x7104862000
7101fd4ff4  add x1,x1,#0x960
7101fd4ff8  cmp w9,#0x16
7101fd4ffc  b.eq 0x7101fd501c
7101fd5000  ldr x8,[x8]
7101fd5004  sub w9,w23,w21
7101fd5008  add x10,x8,w9, SXTW  #0x4
7101fd500c  ldrb w8,[x8, #0xa]
7101fd5010  add x10,x10,#0x10
7101fd5014  cmp w9,w8
7101fd5018  csel x1,x1,x10,gt
7101fd501c  adrp x2,0x7104433000
7101fd5020  add x2,x2,#0xdf6
7101fd5024  mov x0,x20
7101fd5028  bl 0x71038f4d40
7101fd502c  ldr x8,[x20, #0x10]
7101fd5030  sub x25,x8,#0x10
7101fd5034  ldur w8,[x8, #-0x8]
7101fd5038  cmp w8,#0x13
7101fd503c  b.ne 0x7101fd5048
7101fd5040  ldr x8,[x25]
7101fd5044  b 0x7101fd50a8
7101fd5048  ldr w8,[x25, #0x8]
7101fd504c  cmp w8,#0x13
7101fd5050  b.eq 0x7101fd5040
7101fd5054  cmp w8,#0x3
7101fd5058  b.eq 0x7101fd54c4
7101fd505c  and w8,w8,#0xf
7101fd5060  cmp w8,#0x4
7101fd5064  b.ne 0x7101fd50a4
7101fd5068  ldr x8,[x25]
7101fd506c  add x0,x8,#0x18
7101fd5070  mov x1,sp
7101fd5074  bl 0x7103907f00
7101fd5078  ldr x8,[x25]
7101fd507c  ldrb w9,[x8, #0x8]
7101fd5080  cmp w9,#0x4
7101fd5084  b.ne 0x7101fd5090
7101fd5088  ldrb w8,[x8, #0xb]
7101fd508c  b 0x7101fd5094
7101fd5090  ldr x8,[x8, #0x10]
7101fd5094  add x8,x8,#0x1
7101fd5098  mov x25,sp
7101fd509c  cmp x0,x8
7101fd50a0  b.eq 0x7101fd5048
7101fd50a4  mov x8,xzr
7101fd50a8  str x8,[x19, #0x88]
7101fd50ac  ldr x8,[x22]
7101fd50b0  sub x8,x8,#0x10
7101fd50b4  str x8,[x22]
7101fd50b8  ldr x9,[x24]
7101fd50bc  cmp w21,#0x1
7101fd50c0  b.lt 0x7101fd50e0
7101fd50c4  ldr x9,[x9]
7101fd50c8  add x9,x9,w21, SXTW  #0x4
7101fd50cc  adrp x10,0x7104862000
7101fd50d0  add x10,x10,#0x960
7101fd50d4  cmp x9,x8
7101fd50d8  csel x1,x9,x10,cc
7101fd50dc  b 0x7101fd513c
7101fd50e0  add w10,w23,#0x1
7101fd50e4  cmp w21,w10
7101fd50e8  b.ge 0x7101fd5100
7101fd50ec  cmp w21,w23
7101fd50f0  b.ne 0x7101fd5108
7101fd50f4  ldr x8,[x20, #0x18]
7101fd50f8  add x1,x8,#0x40
7101fd50fc  b 0x7101fd513c
7101fd5100  add x1,x8,w21, SXTW  #0x4
7101fd5104  b 0x7101fd513c
7101fd5108  ldr x8,[x9]
7101fd510c  ldr w9,[x8, #0x8]
7101fd5110  adrp x1,0x7104862000
7101fd5114  add x1,x1,#0x960
7101fd5118  cmp w9,#0x16
7101fd511c  b.eq 0x7101fd513c
7101fd5120  ldr x8,[x8]
7101fd5124  sub w9,w23,w21
7101fd5128  add x10,x8,w9, SXTW  #0x4
7101fd512c  ldrb w8,[x8, #0xa]
7101fd5130  add x10,x10,#0x10
7101fd5134  cmp w9,w8
7101fd5138  csel x1,x1,x10,gt
7101fd513c  adrp x2,0x7104433000
7101fd5140  add x2,x2,#0xe07
7101fd5144  mov x0,x20
7101fd5148  bl 0x71038f4d40
7101fd514c  ldr x8,[x20, #0x10]
7101fd5150  sub x1,x8,#0x10
7101fd5154  adrp x2,0x71043d7000
7101fd5158  add x2,x2,#0xeae
7101fd515c  mov x0,x20
7101fd5160  bl 0x71038f4d40
7101fd5164  ldr x25,[x20, #0x10]
7101fd5168  ldur w8,[x25, #-0x8]
7101fd516c  cmp w8,#0x3
7101fd5170  b.ne 0x7101fd517c
7101fd5174  ldur s1,[x25, #-0x10]
7101fd5178  b 0x7101fd5524
7101fd517c  cmp w8,#0x13
7101fd5180  b.ne 0x7101fd5190
7101fd5184  ldur x8,[x25, #-0x10]
7101fd5188  scvtf s1,x8
7101fd518c  b 0x7101fd5524
7101fd5190  and w8,w8,#0xf
7101fd5194  cmp w8,#0x4
7101fd5198  b.ne 0x7101fd5520
7101fd519c  ldur x8,[x25, #-0x10]
7101fd51a0  add x0,x8,#0x18
7101fd51a4  mov x1,sp
7101fd51a8  bl 0x7103907f00
7101fd51ac  ldur x8,[x25, #-0x10]
7101fd51b0  ldrb w9,[x8, #0x8]
7101fd51b4  cmp w9,#0x4
7101fd51b8  b.ne 0x7101fd54f4
7101fd51bc  ldrb w8,[x8, #0xb]
7101fd51c0  b 0x7101fd54f8
7101fd51c4  ldr s0,[x25]
7101fd51c8  adrp x8,0x7104472000
7101fd51cc  ldr s1,[x8, #0x8f4]
7101fd51d0  frintm s0,s0
7101fd51d4  fcmp s0,s1
7101fd51d8  b.lt 0x7101fd2a64
7101fd51dc  adrp x8,0x7104472000
7101fd51e0  ldr s1,[x8, #0xe68]
7101fd51e4  fcmp s0,s1
7101fd51e8  b.pl 0x7101fd2a64
7101fd51ec  fcvtzs x8,s0
7101fd51f0  b 0x7101fd2a68
7101fd51f4  ldr s0,[x25]
7101fd51f8  adrp x8,0x7104472000
7101fd51fc  ldr s1,[x8, #0x8f4]
7101fd5200  frintm s0,s0
7101fd5204  fcmp s0,s1
7101fd5208  b.lt 0x7101fd2b84
7101fd520c  adrp x8,0x7104472000
7101fd5210  ldr s1,[x8, #0xe68]
7101fd5214  fcmp s0,s1
7101fd5218  b.pl 0x7101fd2b84
7101fd521c  fcvtzs x8,s0
7101fd5220  b 0x7101fd2b88
7101fd5224  ldr s0,[x25]
7101fd5228  adrp x8,0x7104472000
7101fd522c  ldr s1,[x8, #0x8f4]
7101fd5230  frintm s0,s0
7101fd5234  fcmp s0,s1
7101fd5238  b.lt 0x7101fd2ca4
7101fd523c  adrp x8,0x7104472000
7101fd5240  ldr s1,[x8, #0xe68]
7101fd5244  fcmp s0,s1
7101fd5248  b.pl 0x7101fd2ca4
7101fd524c  fcvtzs x8,s0
7101fd5250  b 0x7101fd2ca8
7101fd5254  ldr s0,[x25]
7101fd5258  adrp x8,0x7104472000
7101fd525c  ldr s1,[x8, #0x8f4]
7101fd5260  frintm s0,s0
7101fd5264  fcmp s0,s1
7101fd5268  b.lt 0x7101fd2ee4
7101fd526c  adrp x8,0x7104472000
7101fd5270  ldr s1,[x8, #0xe68]
7101fd5274  fcmp s0,s1
7101fd5278  b.pl 0x7101fd2ee4
7101fd527c  fcvtzs x8,s0
7101fd5280  b 0x7101fd2ee8
7101fd5284  ldr s0,[x25]
7101fd5288  adrp x8,0x7104472000
7101fd528c  ldr s1,[x8, #0x8f4]
7101fd5290  frintm s0,s0
7101fd5294  fcmp s0,s1
7101fd5298  b.lt 0x7101fd3004
7101fd529c  adrp x8,0x7104472000
7101fd52a0  ldr s1,[x8, #0xe68]
7101fd52a4  fcmp s0,s1
7101fd52a8  b.pl 0x7101fd3004
7101fd52ac  fcvtzs x8,s0
7101fd52b0  b 0x7101fd3008
7101fd52b4  ldr s0,[x25]
7101fd52b8  adrp x8,0x7104472000
7101fd52bc  ldr s1,[x8, #0x8f4]
7101fd52c0  frintm s0,s0
7101fd52c4  fcmp s0,s1
7101fd52c8  b.lt 0x7101fd3124
7101fd52cc  adrp x8,0x7104472000
7101fd52d0  ldr s1,[x8, #0xe68]
7101fd52d4  fcmp s0,s1
7101fd52d8  b.pl 0x7101fd3124
7101fd52dc  fcvtzs x8,s0
7101fd52e0  b 0x7101fd3128
7101fd52e4  ldr s0,[x25]
7101fd52e8  adrp x8,0x7104472000
7101fd52ec  ldr s1,[x8, #0x8f4]
7101fd52f0  frintm s0,s0
7101fd52f4  fcmp s0,s1
7101fd52f8  b.lt 0x7101fd3244
7101fd52fc  adrp x8,0x7104472000
7101fd5300  ldr s1,[x8, #0xe68]
7101fd5304  fcmp s0,s1
7101fd5308  b.pl 0x7101fd3244
7101fd530c  fcvtzs x8,s0
7101fd5310  b 0x7101fd3248
7101fd5314  ldr s0,[x25]
7101fd5318  adrp x8,0x7104472000
7101fd531c  ldr s1,[x8, #0x8f4]
7101fd5320  frintm s0,s0
7101fd5324  fcmp s0,s1
7101fd5328  b.lt 0x7101fd3364
7101fd532c  adrp x8,0x7104472000
7101fd5330  ldr s1,[x8, #0xe68]
7101fd5334  fcmp s0,s1
7101fd5338  b.pl 0x7101fd3364
7101fd533c  fcvtzs x8,s0
7101fd5340  b 0x7101fd3368
7101fd5344  ldr s0,[x25]
7101fd5348  adrp x8,0x7104472000
7101fd534c  ldr s1,[x8, #0x8f4]
7101fd5350  frintm s0,s0
7101fd5354  fcmp s0,s1
7101fd5358  b.lt 0x7101fd3c64
7101fd535c  adrp x8,0x7104472000
7101fd5360  ldr s1,[x8, #0xe68]
7101fd5364  fcmp s0,s1
7101fd5368  b.pl 0x7101fd3c64
7101fd536c  fcvtzs x8,s0
7101fd5370  b 0x7101fd3c68
7101fd5374  ldr s0,[x25]
7101fd5378  adrp x8,0x7104472000
7101fd537c  ldr s1,[x8, #0x8f4]
7101fd5380  frintm s0,s0
7101fd5384  fcmp s0,s1
7101fd5388  b.lt 0x7101fd4324
7101fd538c  adrp x8,0x7104472000
7101fd5390  ldr s1,[x8, #0xe68]
7101fd5394  fcmp s0,s1
7101fd5398  b.pl 0x7101fd4324
7101fd539c  fcvtzs x8,s0
7101fd53a0  b 0x7101fd4328
7101fd53a4  ldr s0,[x25]
7101fd53a8  adrp x8,0x7104472000
7101fd53ac  ldr s1,[x8, #0x8f4]
7101fd53b0  frintm s0,s0
7101fd53b4  fcmp s0,s1
7101fd53b8  b.lt 0x7101fd4564
7101fd53bc  adrp x8,0x7104472000
7101fd53c0  ldr s1,[x8, #0xe68]
7101fd53c4  fcmp s0,s1
7101fd53c8  b.pl 0x7101fd4564
7101fd53cc  fcvtzs x8,s0
7101fd53d0  b 0x7101fd4568
7101fd53d4  ldr s0,[x25]
7101fd53d8  adrp x8,0x7104472000
7101fd53dc  ldr s1,[x8, #0x8f4]
7101fd53e0  frintm s0,s0
7101fd53e4  fcmp s0,s1
7101fd53e8  b.lt 0x7101fd4684
7101fd53ec  adrp x8,0x7104472000
7101fd53f0  ldr s1,[x8, #0xe68]
7101fd53f4  fcmp s0,s1
7101fd53f8  b.pl 0x7101fd4684
7101fd53fc  fcvtzs x8,s0
7101fd5400  b 0x7101fd4688
7101fd5404  ldr s0,[x25]
7101fd5408  adrp x8,0x7104472000
7101fd540c  ldr s1,[x8, #0x8f4]
7101fd5410  frintm s0,s0
7101fd5414  fcmp s0,s1
7101fd5418  b.lt 0x7101fd47a4
7101fd541c  adrp x8,0x7104472000
7101fd5420  ldr s1,[x8, #0xe68]
7101fd5424  fcmp s0,s1
7101fd5428  b.pl 0x7101fd47a4
7101fd542c  fcvtzs x8,s0
7101fd5430  b 0x7101fd47a8
7101fd5434  ldr s0,[x25]
7101fd5438  adrp x8,0x7104472000
7101fd543c  ldr s1,[x8, #0x8f4]
7101fd5440  frintm s0,s0
7101fd5444  fcmp s0,s1
7101fd5448  b.lt 0x7101fd48c4
7101fd544c  adrp x8,0x7104472000
7101fd5450  ldr s1,[x8, #0xe68]
7101fd5454  fcmp s0,s1
7101fd5458  b.pl 0x7101fd48c4
7101fd545c  fcvtzs x8,s0
7101fd5460  b 0x7101fd48c8
7101fd5464  ldr s0,[x25]
7101fd5468  adrp x8,0x7104472000
7101fd546c  ldr s1,[x8, #0x8f4]
7101fd5470  frintm s0,s0
7101fd5474  fcmp s0,s1
7101fd5478  b.lt 0x7101fd4c24
7101fd547c  adrp x8,0x7104472000
7101fd5480  ldr s1,[x8, #0xe68]
7101fd5484  fcmp s0,s1
7101fd5488  b.pl 0x7101fd4c24
7101fd548c  fcvtzs x8,s0
7101fd5490  b 0x7101fd4c28
7101fd5494  ldr s0,[x25]
7101fd5498  adrp x8,0x7104472000
7101fd549c  ldr s1,[x8, #0x8f4]
7101fd54a0  frintm s0,s0
7101fd54a4  fcmp s0,s1
7101fd54a8  b.lt 0x7101fd4d44
7101fd54ac  adrp x8,0x7104472000
7101fd54b0  ldr s1,[x8, #0xe68]
7101fd54b4  fcmp s0,s1
7101fd54b8  b.pl 0x7101fd4d44
7101fd54bc  fcvtzs x8,s0
7101fd54c0  b 0x7101fd4d48
7101fd54c4  ldr s0,[x25]
7101fd54c8  adrp x8,0x7104472000
7101fd54cc  ldr s1,[x8, #0x8f4]
7101fd54d0  frintm s0,s0
7101fd54d4  fcmp s0,s1
7101fd54d8  b.lt 0x7101fd50a4
7101fd54dc  adrp x8,0x7104472000
7101fd54e0  ldr s1,[x8, #0xe68]
7101fd54e4  fcmp s0,s1
7101fd54e8  b.pl 0x7101fd50a4
7101fd54ec  fcvtzs x8,s0
7101fd54f0  b 0x7101fd50a8
7101fd54f4  ldr x8,[x8, #0x10]
7101fd54f8  add x8,x8,#0x1
7101fd54fc  cmp x0,x8
7101fd5500  b.ne 0x7101fd5520
7101fd5504  ldr x9,[sp]
7101fd5508  scvtf s0,x9
7101fd550c  ldr w8,[sp, #0x8]
7101fd5510  fmov s1,w9
7101fd5514  cmp w8,#0x13
7101fd5518  fcsel s1,s0,s1,eq
7101fd551c  b 0x7101fd5524
7101fd5520  fmov s1,wzr
7101fd5524  ldr x8,[x20, #0x10]
7101fd5528  sub x8,x8,#0x10
7101fd552c  str x8,[x20, #0x10]
7101fd5530  ldr q0,[x19, #0x90]
7101fd5534  mov v0.S[0x0],v1.S[0x0]
7101fd5538  str q0,[x19, #0x90]
7101fd553c  ldr x8,[x20, #0x10]
7101fd5540  sub x1,x8,#0x10
7101fd5544  adrp x2,0x71042ab000
7101fd5548  add x2,x2,#0xc20
7101fd554c  mov x0,x20
7101fd5550  bl 0x71038f4d40
7101fd5554  ldr x25,[x20, #0x10]
7101fd5558  ldur w8,[x25, #-0x8]
7101fd555c  cmp w8,#0x3
7101fd5560  b.ne 0x7101fd556c
7101fd5564  ldur s0,[x25, #-0x10]
7101fd5568  b 0x7101fd55e4
7101fd556c  cmp w8,#0x13
7101fd5570  b.ne 0x7101fd5580
7101fd5574  ldur x8,[x25, #-0x10]
7101fd5578  scvtf s0,x8
7101fd557c  b 0x7101fd55e4
7101fd5580  and w8,w8,#0xf
7101fd5584  cmp w8,#0x4
7101fd5588  b.ne 0x7101fd55e0
7101fd558c  ldur x8,[x25, #-0x10]
7101fd5590  add x0,x8,#0x18
7101fd5594  mov x1,sp
7101fd5598  bl 0x7103907f00
7101fd559c  ldur x8,[x25, #-0x10]
7101fd55a0  ldrb w9,[x8, #0x8]
7101fd55a4  cmp w9,#0x4
7101fd55a8  b.ne 0x7101fd55b4
7101fd55ac  ldrb w8,[x8, #0xb]
7101fd55b0  b 0x7101fd55b8
7101fd55b4  ldr x8,[x8, #0x10]
7101fd55b8  add x8,x8,#0x1
7101fd55bc  cmp x0,x8
7101fd55c0  b.ne 0x7101fd55e0
7101fd55c4  ldr x9,[sp]
7101fd55c8  scvtf s0,x9
7101fd55cc  ldr w8,[sp, #0x8]
7101fd55d0  fmov s1,w9
7101fd55d4  cmp w8,#0x13
7101fd55d8  fcsel s0,s0,s1,eq
7101fd55dc  b 0x7101fd55e4
7101fd55e0  fmov s0,wzr
7101fd55e4  ldr x8,[x22]
7101fd55e8  sub x8,x8,#0x10
7101fd55ec  str x8,[x22]
7101fd55f0  ldr q1,[x19, #0x90]
7101fd55f4  mov v1.S[0x1],v0.S[0x0]
7101fd55f8  str q1,[x19, #0x90]
7101fd55fc  ldr x8,[x22]
7101fd5600  sub x8,x8,#0x10
7101fd5604  str x8,[x22]
7101fd5608  ldr x9,[x24]
7101fd560c  cmp w21,#0x1
7101fd5610  b.lt 0x7101fd5630
7101fd5614  ldr x9,[x9]
7101fd5618  add x9,x9,w21, SXTW  #0x4
7101fd561c  adrp x10,0x7104862000
7101fd5620  add x10,x10,#0x960
7101fd5624  cmp x9,x8
7101fd5628  csel x1,x9,x10,cc
7101fd562c  b 0x7101fd568c
7101fd5630  add w10,w23,#0x1
7101fd5634  cmp w21,w10
7101fd5638  b.ge 0x7101fd5650
7101fd563c  cmp w21,w23
7101fd5640  b.ne 0x7101fd5658
7101fd5644  ldr x8,[x20, #0x18]
7101fd5648  add x1,x8,#0x40
7101fd564c  b 0x7101fd568c
7101fd5650  add x1,x8,w21, SXTW  #0x4
7101fd5654  b 0x7101fd568c
7101fd5658  ldr x8,[x9]
7101fd565c  ldr w9,[x8, #0x8]
7101fd5660  adrp x1,0x7104862000
7101fd5664  add x1,x1,#0x960
7101fd5668  cmp w9,#0x16
7101fd566c  b.eq 0x7101fd568c
7101fd5670  ldr x8,[x8]
7101fd5674  sub w9,w23,w21
7101fd5678  add x10,x8,w9, SXTW  #0x4
7101fd567c  ldrb w8,[x8, #0xa]
7101fd5680  add x10,x10,#0x10
7101fd5684  cmp w9,w8
7101fd5688  csel x1,x1,x10,gt
7101fd568c  adrp x2,0x71043d0000
7101fd5690  add x2,x2,#0x1be
7101fd5694  mov x0,x20
7101fd5698  bl 0x71038f4d40
7101fd569c  ldr x8,[x20, #0x10]
7101fd56a0  sub x25,x8,#0x10
7101fd56a4  ldur w8,[x8, #-0x8]
7101fd56a8  cmp w8,#0x13
7101fd56ac  b.ne 0x7101fd56b8
7101fd56b0  ldr x8,[x25]
7101fd56b4  b 0x7101fd5718
7101fd56b8  ldr w8,[x25, #0x8]
7101fd56bc  cmp w8,#0x13
7101fd56c0  b.eq 0x7101fd56b0
7101fd56c4  cmp w8,#0x3
7101fd56c8  b.eq 0x7101fd5984
7101fd56cc  and w8,w8,#0xf
7101fd56d0  cmp w8,#0x4
7101fd56d4  b.ne 0x7101fd5714
7101fd56d8  ldr x8,[x25]
7101fd56dc  add x0,x8,#0x18
7101fd56e0  mov x1,sp
7101fd56e4  bl 0x7103907f00
7101fd56e8  ldr x8,[x25]
7101fd56ec  ldrb w9,[x8, #0x8]
7101fd56f0  cmp w9,#0x4
7101fd56f4  b.ne 0x7101fd5700
7101fd56f8  ldrb w8,[x8, #0xb]
7101fd56fc  b 0x7101fd5704
7101fd5700  ldr x8,[x8, #0x10]
7101fd5704  add x8,x8,#0x1
7101fd5708  mov x25,sp
7101fd570c  cmp x0,x8
7101fd5710  b.eq 0x7101fd56b8
7101fd5714  mov x8,xzr
7101fd5718  str w8,[x19, #0xa0]
7101fd571c  ldr x8,[x22]
7101fd5720  sub x8,x8,#0x10
7101fd5724  str x8,[x22]
7101fd5728  ldr x9,[x24]
7101fd572c  cmp w21,#0x1
7101fd5730  b.lt 0x7101fd5750
7101fd5734  ldr x9,[x9]
7101fd5738  add x9,x9,w21, SXTW  #0x4
7101fd573c  adrp x10,0x7104862000
7101fd5740  add x10,x10,#0x960
7101fd5744  cmp x9,x8
7101fd5748  csel x1,x9,x10,cc
7101fd574c  b 0x7101fd57ac
7101fd5750  add w10,w23,#0x1
7101fd5754  cmp w21,w10
7101fd5758  b.ge 0x7101fd5770
7101fd575c  cmp w21,w23
7101fd5760  b.ne 0x7101fd5778
7101fd5764  ldr x8,[x20, #0x18]
7101fd5768  add x1,x8,#0x40
7101fd576c  b 0x7101fd57ac
7101fd5770  add x1,x8,w21, SXTW  #0x4
7101fd5774  b 0x7101fd57ac
7101fd5778  ldr x8,[x9]
7101fd577c  ldr w9,[x8, #0x8]
7101fd5780  adrp x1,0x7104862000
7101fd5784  add x1,x1,#0x960
7101fd5788  cmp w9,#0x16
7101fd578c  b.eq 0x7101fd57ac
7101fd5790  ldr x8,[x8]
7101fd5794  sub w9,w23,w21
7101fd5798  add x10,x8,w9, SXTW  #0x4
7101fd579c  ldrb w8,[x8, #0xa]
7101fd57a0  add x10,x10,#0x10
7101fd57a4  cmp w9,w8
7101fd57a8  csel x1,x1,x10,gt
7101fd57ac  adrp x2,0x7104281000
7101fd57b0  add x2,x2,#0x708
7101fd57b4  mov x0,x20
7101fd57b8  bl 0x71038f4d40
7101fd57bc  ldr x8,[x20, #0x10]
7101fd57c0  ldur w9,[x8, #-0x8]
7101fd57c4  cbz w9,0x7101fd5814
7101fd57c8  cmp w9,#0x13
7101fd57cc  b.eq 0x7101fd57e4
7101fd57d0  cmp w9,#0x1
7101fd57d4  b.ne 0x7101fd57fc
7101fd57d8  ldur w8,[x8, #-0x10]
7101fd57dc  cmp w8,#0x0
7101fd57e0  b 0x7101fd582c
7101fd57e4  ldur x10,[x8, #-0x10]
7101fd57e8  cbz x10,0x7101fd5814
7101fd57ec  scvtf s0,x10
7101fd57f0  fcmp s0,#0.0
7101fd57f4  b.eq 0x7101fd5814
7101fd57f8  b 0x7101fd581c
7101fd57fc  and w10,w9,#0xf
7101fd5800  cmp w10,#0x3
7101fd5804  b.ne 0x7101fd581c
7101fd5808  ldur s0,[x8, #-0x10]
7101fd580c  fcmp s0,#0.0
7101fd5810  b.ne 0x7101fd581c
7101fd5814  mov w8,wzr
7101fd5818  b 0x7101fd5838
7101fd581c  cmp w9,#0x3
7101fd5820  b.ne 0x7101fd5834
7101fd5824  ldur s0,[x8, #-0x10]
7101fd5828  fcmp s0,#0.0
7101fd582c  cset w8,ne
7101fd5830  b 0x7101fd5838
7101fd5834  mov w8,#0x1
7101fd5838  strb w8,[x19, #0xa4]
7101fd583c  ldr x8,[x22]
7101fd5840  sub x8,x8,#0x10
7101fd5844  str x8,[x22]
7101fd5848  ldr x9,[x24]
7101fd584c  cmp w21,#0x1
7101fd5850  b.lt 0x7101fd5870
7101fd5854  ldr x9,[x9]
7101fd5858  add x9,x9,w21, SXTW  #0x4
7101fd585c  adrp x10,0x7104862000
7101fd5860  add x10,x10,#0x960
7101fd5864  cmp x9,x8
7101fd5868  csel x1,x9,x10,cc
7101fd586c  b 0x7101fd58cc
7101fd5870  add w10,w23,#0x1
7101fd5874  cmp w21,w10
7101fd5878  b.ge 0x7101fd5890
7101fd587c  cmp w21,w23
7101fd5880  b.ne 0x7101fd5898
7101fd5884  ldr x8,[x20, #0x18]
7101fd5888  add x1,x8,#0x40
7101fd588c  b 0x7101fd58cc
7101fd5890  add x1,x8,w21, SXTW  #0x4
7101fd5894  b 0x7101fd58cc
7101fd5898  ldr x8,[x9]
7101fd589c  ldr w9,[x8, #0x8]
7101fd58a0  adrp x1,0x7104862000
7101fd58a4  add x1,x1,#0x960
7101fd58a8  cmp w9,#0x16
7101fd58ac  b.eq 0x7101fd58cc
7101fd58b0  ldr x8,[x8]
7101fd58b4  sub w9,w23,w21
7101fd58b8  add x10,x8,w9, SXTW  #0x4
7101fd58bc  ldrb w8,[x8, #0xa]
7101fd58c0  add x10,x10,#0x10
7101fd58c4  cmp w9,w8
7101fd58c8  csel x1,x1,x10,gt
7101fd58cc  adrp x2,0x7104402000
7101fd58d0  add x2,x2,#0x3a9
7101fd58d4  mov x0,x20
7101fd58d8  bl 0x71038f4d40
7101fd58dc  ldr x8,[x20, #0x10]
7101fd58e0  ldur w9,[x8, #-0x8]
7101fd58e4  cbz w9,0x7101fd5934
7101fd58e8  cmp w9,#0x13
7101fd58ec  b.eq 0x7101fd5904
7101fd58f0  cmp w9,#0x1
7101fd58f4  b.ne 0x7101fd591c
7101fd58f8  ldur w8,[x8, #-0x10]
7101fd58fc  cmp w8,#0x0
7101fd5900  b 0x7101fd594c
7101fd5904  ldur x10,[x8, #-0x10]
7101fd5908  cbz x10,0x7101fd5934
7101fd590c  scvtf s0,x10
7101fd5910  fcmp s0,#0.0
7101fd5914  b.eq 0x7101fd5934
7101fd5918  b 0x7101fd593c
7101fd591c  and w10,w9,#0xf
7101fd5920  cmp w10,#0x3
7101fd5924  b.ne 0x7101fd593c
7101fd5928  ldur s0,[x8, #-0x10]
7101fd592c  fcmp s0,#0.0
7101fd5930  b.ne 0x7101fd593c
7101fd5934  mov w8,wzr
7101fd5938  b 0x7101fd5958
7101fd593c  cmp w9,#0x3
7101fd5940  b.ne 0x7101fd5954
7101fd5944  ldur s0,[x8, #-0x10]
7101fd5948  fcmp s0,#0.0
7101fd594c  cset w8,ne
7101fd5950  b 0x7101fd5958
7101fd5954  mov w8,#0x1
7101fd5958  strb w8,[x19, #0xa6]
7101fd595c  ldr x8,[x22]
7101fd5960  sub x8,x8,#0x10
7101fd5964  str x8,[x22]
7101fd5968  ldp x29,x30,[sp, #0x50]
7101fd596c  ldp x20,x19,[sp, #0x40]
7101fd5970  ldr x25,[sp, #0x10]
7101fd5974  ldp x22,x21,[sp, #0x30]
7101fd5978  ldp x24,x23,[sp, #0x20]
7101fd597c  add sp,sp,#0x60
7101fd5980  ret
7101fd5984  ldr s0,[x25]
7101fd5988  adrp x8,0x7104472000
7101fd598c  ldr s1,[x8, #0x8f4]
7101fd5990  frintm s0,s0
7101fd5994  fcmp s0,s1
7101fd5998  b.lt 0x7101fd5714
7101fd599c  adrp x8,0x7104472000
7101fd59a0  ldr s1,[x8, #0xe68]
7101fd59a4  fcmp s0,s1
7101fd59a8  b.pl 0x7101fd5714
7101fd59ac  fcvtzs x8,s0
7101fd59b0  b 0x7101fd5718
