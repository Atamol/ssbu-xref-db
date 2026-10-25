// addr:      7101ca1830
// offset:    0x1ca1830
// name:      FUN_7101ca1830
// mangled:   
// size:      1340

7101ca1830  sub sp,sp,#0xe0
7101ca1834  stp x22,x21,[sp, #0xb0]
7101ca1838  stp x20,x19,[sp, #0xc0]
7101ca183c  stp x29,x30,[sp, #0xd0]
7101ca1840  add x29,sp,#0xd0
7101ca1844  tbnz w1,#0x1f,0x7101ca1d50
7101ca1848  ldr x8,[x0, #0x230]
7101ca184c  ldr x9,[x0, #0x228]
7101ca1850  mov w19,w1
7101ca1854  sxtw x22,w19
7101ca1858  mov x21,x0
7101ca185c  sub x8,x8,x9
7101ca1860  asr x8,x8,#0x2
7101ca1864  cmp x8,x22
7101ca1868  b.ls 0x7101ca1d50
7101ca186c  add x8,sp,#0x60
7101ca1870  adrp x1,0x710436c000
7101ca1874  add x1,x1,#0x4a9
7101ca1878  add x0,sp,#0x60
7101ca187c  mov w2,w19
7101ca1880  strb wzr,[sp, #0x68]
7101ca1884  str xzr,[sp, #0x60]
7101ca1888  add x20,x8,#0x8
7101ca188c  bl 0x710062dc20
7101ca1890  ldr x0,[x21, #0x120]
7101ca1894  fmov s0,0x3f800000
7101ca1898  mov x1,x20
7101ca189c  bl 0x7103778300
7101ca18a0  ldr x9,[x21, #0x230]
7101ca18a4  ldr x8,[x21, #0x228]
7101ca18a8  sub x9,x9,x8
7101ca18ac  asr x9,x9,#0x2
7101ca18b0  cmp x9,x22
7101ca18b4  b.ls 0x7101ca1d64
7101ca18b8  ldr x1,[x21, #0x168]
7101ca18bc  ldr w22,[x8, x22, LSL #0x2]
7101ca18c0  add x0,sp,#0x8
7101ca18c4  mov w2,w19
7101ca18c8  add x20,x21,#0x118
7101ca18cc  bl 0x7103771d60
7101ca18d0  ldr x21,[sp, #0x10]
7101ca18d4  ldr x0,[x21]
7101ca18d8  cbz x0,0x7101ca18f0
7101ca18dc  ldr x8,[x0]
7101ca18e0  ldr x8,[x8, #0x2f8]
7101ca18e4  blr x8
7101ca18e8  mov w19,w0
7101ca18ec  b 0x7101ca18f4
7101ca18f0  mov w19,wzr
7101ca18f4  adrp x8,0x710523d000
7101ca18f8  add x8,x8,#0x9c8
7101ca18fc  stp x8,xzr,[sp, #0x8]
7101ca1900  cbz x21,0x7101ca190c
7101ca1904  mov x0,x21
7101ca1908  bl 0x710392eb40
7101ca190c  adrp x1,0x71042d6000
7101ca1910  add x1,x1,#0x36f
7101ca1914  add x8,sp,#0x50
7101ca1918  mov x0,x20
7101ca191c  bl 0x7103776910
7101ca1920  cmp w22,#0xff
7101ca1924  strb wzr,[sp, #0x10]
7101ca1928  str xzr,[sp, #0x8]
7101ca192c  b.gt 0x7101ca19f8
7101ca1930  sub w8,w22,#0x2
7101ca1934  cmp w8,#0xe
7101ca1938  b.hi 0x7101ca1cf8
7101ca193c  adrp x9,0x71044f9000
7101ca1940  add x9,x9,#0xb50
7101ca1944  ldrsw x8,[x9, x8, LSL #0x2]
7101ca1948  add x8,x8,x9
7101ca194c  br x8
7101ca1950  mov x10,#0x656e
7101ca1954  movk x10,#0x725f, LSL #16
7101ca1958  movk x10,#0x6c75, LSL #32
7101ca195c  movk x10,#0x5f65, LSL #48
7101ca1960  str x10,[sp, #0x18]
7101ca1964  mov w10,#0x6465
7101ca1968  strh w10,[sp, #0x20]
7101ca196c  mov x10,#0x7469
7101ca1970  movk x10,#0x695f, LSL #16
7101ca1974  movk x10,#0x6574, LSL #32
7101ca1978  movk x10,#0x5f6d, LSL #48
7101ca197c  stur x10,[sp, #0x22]
7101ca1980  mov w10,#0x6568
7101ca1984  movk w10,#0x706c, LSL #16
7101ca1988  stur w10,[sp, #0x2a]
7101ca198c  mov w10,#0x6d5f
7101ca1990  mov x9,#0x6e6d
7101ca1994  movk x9,#0x5f75, LSL #16
7101ca1998  movk x9,#0x6e61, LSL #32
7101ca199c  movk x9,#0x6f79, LSL #48
7101ca19a0  str x9,[sp, #0x10]
7101ca19a4  strh w10,[sp, #0x2e]
7101ca19a8  mov w10,#0x7365
7101ca19ac  movk w10,#0x305f, LSL #16
7101ca19b0  str w10,[sp, #0x30]
7101ca19b4  mov w10,#0x31
7101ca19b8  strh w10,[sp, #0x34]
7101ca19bc  add x9,sp,#0x8
7101ca19c0  mov w10,#0x25
7101ca19c4  str w10,[sp, #0xc]
7101ca19c8  mov w8,#0x9dc5
7101ca19cc  movk w8,#0x811c, LSL #16
7101ca19d0  add x3,x9,#0x8
7101ca19d4  add x9,x9,#0x9
7101ca19d8  mov w11,#0x6d
7101ca19dc  mov w10,#0x89
7101ca19e0  mul w8,w8,w10
7101ca19e4  and w11,w11,#0xff
7101ca19e8  eor w8,w8,w11
7101ca19ec  ldrb w11,[x9], #0x1
7101ca19f0  cbnz w11,0x7101ca19e0
7101ca19f4  b 0x7101ca1cbc
7101ca19f8  cmp w22,#0x100
7101ca19fc  b.eq 0x7101ca1c18
7101ca1a00  cmp w22,#0x200
7101ca1a04  b.eq 0x7101ca1ce8
7101ca1a08  cmp w22,#0x21e
7101ca1a0c  b.ne 0x7101ca1cf8
7101ca1a10  tbz w19,#0x0,0x7101ca1d1c
7101ca1a14  adrp x1,0x7104291000
7101ca1a18  add x1,x1,#0xd1b
7101ca1a1c  b 0x7101ca1d30
7101ca1a20  mov x10,#0x656e
7101ca1a24  movk x10,#0x725f, LSL #16
7101ca1a28  movk x10,#0x6c75, LSL #32
7101ca1a2c  movk x10,#0x5f65, LSL #48
7101ca1a30  str x10,[sp, #0x18]
7101ca1a34  mov w10,#0x6465
7101ca1a38  strh w10,[sp, #0x20]
7101ca1a3c  mov x10,#0x7469
7101ca1a40  movk x10,#0x695f, LSL #16
7101ca1a44  movk x10,#0x6574, LSL #32
7101ca1a48  movk x10,#0x5f6d, LSL #48
7101ca1a4c  stur x10,[sp, #0x22]
7101ca1a50  mov w10,#0x6568
7101ca1a54  movk w10,#0x706c, LSL #16
7101ca1a58  stur w10,[sp, #0x2a]
7101ca1a5c  mov w10,#0x6d5f
7101ca1a60  mov x9,#0x6e6d
7101ca1a64  movk x9,#0x5f75, LSL #16
7101ca1a68  movk x9,#0x6e61, LSL #32
7101ca1a6c  movk x9,#0x6f79, LSL #48
7101ca1a70  str x9,[sp, #0x10]
7101ca1a74  strh w10,[sp, #0x2e]
7101ca1a78  mov w10,#0x7365
7101ca1a7c  movk w10,#0x305f, LSL #16
7101ca1a80  str w10,[sp, #0x30]
7101ca1a84  mov w10,#0x33
7101ca1a88  strh w10,[sp, #0x34]
7101ca1a8c  add x9,sp,#0x8
7101ca1a90  mov w10,#0x25
7101ca1a94  str w10,[sp, #0xc]
7101ca1a98  mov w8,#0x9dc5
7101ca1a9c  movk w8,#0x811c, LSL #16
7101ca1aa0  add x3,x9,#0x8
7101ca1aa4  add x9,x9,#0x9
7101ca1aa8  mov w11,#0x6d
7101ca1aac  mov w10,#0x89
7101ca1ab0  mul w8,w8,w10
7101ca1ab4  and w11,w11,#0xff
7101ca1ab8  eor w8,w8,w11
7101ca1abc  ldrb w11,[x9], #0x1
7101ca1ac0  cbnz w11,0x7101ca1ab0
7101ca1ac4  b 0x7101ca1cbc
7101ca1ac8  mov x10,#0x656e
7101ca1acc  movk x10,#0x725f, LSL #16
7101ca1ad0  movk x10,#0x6c75, LSL #32
7101ca1ad4  movk x10,#0x5f65, LSL #48
7101ca1ad8  str x10,[sp, #0x18]
7101ca1adc  mov w10,#0x6465
7101ca1ae0  strh w10,[sp, #0x20]
7101ca1ae4  mov x10,#0x7469
7101ca1ae8  movk x10,#0x695f, LSL #16
7101ca1aec  movk x10,#0x6574, LSL #32
7101ca1af0  movk x10,#0x5f6d, LSL #48
7101ca1af4  stur x10,[sp, #0x22]
7101ca1af8  mov w10,#0x6568
7101ca1afc  movk w10,#0x706c, LSL #16
7101ca1b00  stur w10,[sp, #0x2a]
7101ca1b04  mov w10,#0x6d5f
7101ca1b08  mov x9,#0x6e6d
7101ca1b0c  movk x9,#0x5f75, LSL #16
7101ca1b10  movk x9,#0x6e61, LSL #32
7101ca1b14  movk x9,#0x6f79, LSL #48
7101ca1b18  str x9,[sp, #0x10]
7101ca1b1c  strh w10,[sp, #0x2e]
7101ca1b20  mov w10,#0x7365
7101ca1b24  movk w10,#0x305f, LSL #16
7101ca1b28  str w10,[sp, #0x30]
7101ca1b2c  mov w10,#0x34
7101ca1b30  strh w10,[sp, #0x34]
7101ca1b34  add x9,sp,#0x8
7101ca1b38  mov w10,#0x25
7101ca1b3c  str w10,[sp, #0xc]
7101ca1b40  mov w8,#0x9dc5
7101ca1b44  movk w8,#0x811c, LSL #16
7101ca1b48  add x3,x9,#0x8
7101ca1b4c  add x9,x9,#0x9
7101ca1b50  mov w11,#0x6d
7101ca1b54  mov w10,#0x89
7101ca1b58  mul w8,w8,w10
7101ca1b5c  and w11,w11,#0xff
7101ca1b60  eor w8,w8,w11
7101ca1b64  ldrb w11,[x9], #0x1
7101ca1b68  cbnz w11,0x7101ca1b58
7101ca1b6c  b 0x7101ca1cbc
7101ca1b70  mov x10,#0x656e
7101ca1b74  movk x10,#0x725f, LSL #16
7101ca1b78  movk x10,#0x6c75, LSL #32
7101ca1b7c  movk x10,#0x5f65, LSL #48
7101ca1b80  str x10,[sp, #0x18]
7101ca1b84  mov w10,#0x6465
7101ca1b88  strh w10,[sp, #0x20]
7101ca1b8c  mov x10,#0x7469
7101ca1b90  movk x10,#0x695f, LSL #16
7101ca1b94  movk x10,#0x6574, LSL #32
7101ca1b98  movk x10,#0x5f6d, LSL #48
7101ca1b9c  stur x10,[sp, #0x22]
7101ca1ba0  mov w10,#0x6568
7101ca1ba4  movk w10,#0x706c, LSL #16
7101ca1ba8  stur w10,[sp, #0x2a]
7101ca1bac  mov w10,#0x6d5f
7101ca1bb0  mov x9,#0x6e6d
7101ca1bb4  movk x9,#0x5f75, LSL #16
7101ca1bb8  movk x9,#0x6e61, LSL #32
7101ca1bbc  movk x9,#0x6f79, LSL #48
7101ca1bc0  str x9,[sp, #0x10]
7101ca1bc4  strh w10,[sp, #0x2e]
7101ca1bc8  mov w10,#0x7365
7101ca1bcc  movk w10,#0x305f, LSL #16
7101ca1bd0  str w10,[sp, #0x30]
7101ca1bd4  mov w10,#0x32
7101ca1bd8  strh w10,[sp, #0x34]
7101ca1bdc  add x9,sp,#0x8
7101ca1be0  mov w10,#0x25
7101ca1be4  str w10,[sp, #0xc]
7101ca1be8  mov w8,#0x9dc5
7101ca1bec  movk w8,#0x811c, LSL #16
7101ca1bf0  add x3,x9,#0x8
7101ca1bf4  add x9,x9,#0x9
7101ca1bf8  mov w11,#0x6d
7101ca1bfc  mov w10,#0x89
7101ca1c00  mul w8,w8,w10
7101ca1c04  and w11,w11,#0xff
7101ca1c08  eor w8,w8,w11
7101ca1c0c  ldrb w11,[x9], #0x1
7101ca1c10  cbnz w11,0x7101ca1c00
7101ca1c14  b 0x7101ca1cbc
7101ca1c18  mov x10,#0x656e
7101ca1c1c  movk x10,#0x725f, LSL #16
7101ca1c20  movk x10,#0x6c75, LSL #32
7101ca1c24  movk x10,#0x5f65, LSL #48
7101ca1c28  str x10,[sp, #0x18]
7101ca1c2c  mov w10,#0x6465
7101ca1c30  strh w10,[sp, #0x20]
7101ca1c34  mov x10,#0x7469
7101ca1c38  movk x10,#0x695f, LSL #16
7101ca1c3c  movk x10,#0x6574, LSL #32
7101ca1c40  movk x10,#0x5f6d, LSL #48
7101ca1c44  stur x10,[sp, #0x22]
7101ca1c48  mov w10,#0x6568
7101ca1c4c  movk w10,#0x706c, LSL #16
7101ca1c50  stur w10,[sp, #0x2a]
7101ca1c54  mov w10,#0x6d5f
7101ca1c58  mov x9,#0x6e6d
7101ca1c5c  movk x9,#0x5f75, LSL #16
7101ca1c60  movk x9,#0x6e61, LSL #32
7101ca1c64  movk x9,#0x6f79, LSL #48
7101ca1c68  str x9,[sp, #0x10]
7101ca1c6c  strh w10,[sp, #0x2e]
7101ca1c70  mov w10,#0x7365
7101ca1c74  movk w10,#0x305f, LSL #16
7101ca1c78  str w10,[sp, #0x30]
7101ca1c7c  mov w10,#0x35
7101ca1c80  strh w10,[sp, #0x34]
7101ca1c84  add x9,sp,#0x8
7101ca1c88  mov w10,#0x25
7101ca1c8c  str w10,[sp, #0xc]
7101ca1c90  mov w8,#0x9dc5
7101ca1c94  movk w8,#0x811c, LSL #16
7101ca1c98  add x3,x9,#0x8
7101ca1c9c  add x9,x9,#0x9
7101ca1ca0  mov w11,#0x6d
7101ca1ca4  mov w10,#0x89
7101ca1ca8  mul w8,w8,w10
7101ca1cac  and w11,w11,#0xff
7101ca1cb0  eor w8,w8,w11
7101ca1cb4  ldrb w11,[x9], #0x1
7101ca1cb8  cbnz w11,0x7101ca1ca8
7101ca1cbc  str w8,[sp, #0x8]
7101ca1cc0  tbz w19,#0x0,0x7101ca1cd0
7101ca1cc4  adrp x1,0x710436c000
7101ca1cc8  add x1,x1,#0x4b9
7101ca1ccc  b 0x7101ca1cd8
7101ca1cd0  adrp x1,0x710424f000
7101ca1cd4  add x1,x1,#0x62f
7101ca1cd8  add x0,sp,#0x50
7101ca1cdc  mov w2,#0x1
7101ca1ce0  bl 0x710377a280
7101ca1ce4  b 0x7101ca1d38
7101ca1ce8  tbz w19,#0x0,0x7101ca1d28
7101ca1cec  adrp x1,0x7104280000
7101ca1cf0  add x1,x1,#0xb32
7101ca1cf4  b 0x7101ca1d30
7101ca1cf8  ldr x8,[sp, #0x58]
7101ca1cfc  ldr x0,[x8, #0x10]
7101ca1d00  cbz x0,0x7101ca1d38
7101ca1d04  sub x1,x29,#0x24
7101ca1d08  mov w2,wzr
7101ca1d0c  mov w3,wzr
7101ca1d10  stur wzr,[x29, #-0x24]
7101ca1d14  bl 0x71037a2270
7101ca1d18  b 0x7101ca1d38
7101ca1d1c  adrp x1,0x7104318000
7101ca1d20  add x1,x1,#0xf86
7101ca1d24  b 0x7101ca1d30
7101ca1d28  adrp x1,0x7104422000
7101ca1d2c  add x1,x1,#0x4df
7101ca1d30  add x0,sp,#0x50
7101ca1d34  bl 0x710377a120
7101ca1d38  ldr x0,[sp, #0x58]
7101ca1d3c  adrp x8,0x710523d000
7101ca1d40  add x8,x8,#0x9a8
7101ca1d44  stp x8,xzr,[sp, #0x50]
7101ca1d48  cbz x0,0x7101ca1d50
7101ca1d4c  bl 0x710392eb40
7101ca1d50  ldp x29,x30,[sp, #0xd0]
7101ca1d54  ldp x20,x19,[sp, #0xc0]
7101ca1d58  ldp x22,x21,[sp, #0xb0]
7101ca1d5c  add sp,sp,#0xe0
7101ca1d60  ret
7101ca1d64  add x0,x21,#0x228
7101ca1d68  bl 0x71039c1330
