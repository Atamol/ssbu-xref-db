// addr:      7101db1910
// offset:    0x1db1910
// name:      FUN_7101db1910
// mangled:   
// size:      440

7101db1910  sub sp,sp,#0x40
7101db1914  str x21,[sp, #0x10]
7101db1918  stp x20,x19,[sp, #0x20]
7101db191c  stp x29,x30,[sp, #0x30]
7101db1920  add x29,sp,#0x30
7101db1924  ldr w8,[x0, #0x428]
7101db1928  orr w8,w8,#0x1
7101db192c  cmp w8,#0x3
7101db1930  b.eq 0x7101db19e0
7101db1934  ldrb w8,[x0, #0x44d]
7101db1938  mov x19,x0
7101db193c  cbz w8,0x7101db1974
7101db1940  add x0,x19,#0x50
7101db1944  adrp x1,0x710433a000
7101db1948  add x1,x1,#0x587
7101db194c  mov x8,sp
7101db1950  bl 0x7103776ad0
7101db1954  ldr x20,[sp, #0x8]
7101db1958  ldr x0,[x20]
7101db195c  cbz x0,0x7101db1994
7101db1960  ldr x8,[x0]
7101db1964  ldr x8,[x8, #0x3b8]
7101db1968  blr x8
7101db196c  mov w21,w0
7101db1970  b 0x7101db1998
7101db1974  ldr x8,[x19, #0x88]
7101db1978  ldr w8,[x8, #0x25c]
7101db197c  cmp w8,#0x1e
7101db1980  b.ne 0x7101db19c0
7101db1984  mov w0,wzr
7101db1988  mov w8,#0x1
7101db198c  strb w8,[x19, #0x44d]
7101db1990  b 0x7101db19e4
7101db1994  mov w21,#0x1
7101db1998  adrp x8,0x710523d000
7101db199c  add x8,x8,#0x9c8
7101db19a0  stp x8,xzr,[sp]
7101db19a4  cbz x20,0x7101db19b0
7101db19a8  mov x0,x20
7101db19ac  bl 0x710392eb40
7101db19b0  tbz w21,#0x0,0x7101db19e0
7101db19b4  strb wzr,[x19, #0x44d]
7101db19b8  mov w0,#0x1
7101db19bc  b 0x7101db19e4
7101db19c0  ldr x8,[x19, #0x20]
7101db19c4  ldr x8,[x8]
7101db19c8  ldr x8,[x8]
7101db19cc  ldr x8,[x8, #0x600]
7101db19d0  ldrb w9,[x8, #0x4aa]
7101db19d4  cbz w9,0x7101db19e0
7101db19d8  ldrb w8,[x8, #0x1c4]
7101db19dc  tbnz w8,#0x1,0x7101db19f8
7101db19e0  mov w0,wzr
7101db19e4  ldp x29,x30,[sp, #0x30]
7101db19e8  ldr x21,[sp, #0x10]
7101db19ec  ldp x20,x19,[sp, #0x20]
7101db19f0  add sp,sp,#0x40
7101db19f4  ret
7101db19f8  add x0,x19,#0x50
7101db19fc  adrp x1,0x710433a000
7101db1a00  add x1,x1,#0x587
7101db1a04  mov x8,sp
7101db1a08  bl 0x7103776ad0
7101db1a0c  ldr x20,[sp, #0x8]
7101db1a10  ldr x21,[x20]
7101db1a14  cbz x21,0x7101db1aac
7101db1a18  ldr x8,[x21]
7101db1a1c  ldr x8,[x8, #0x238]
7101db1a20  mov x0,x21
7101db1a24  mov w1,wzr
7101db1a28  blr x8
7101db1a2c  ldr x8,[x21]
7101db1a30  ldr x8,[x8, #0x228]
7101db1a34  mov x0,x21
7101db1a38  mov w1,wzr
7101db1a3c  blr x8
7101db1a40  ldr x8,[x21]
7101db1a44  ldr x8,[x8, #0x200]
7101db1a48  mov x0,x21
7101db1a4c  blr x8
7101db1a50  tbz w0,#0x0,0x7101db1aac
7101db1a54  ldr x8,[x21]
7101db1a58  ldr x8,[x8, #0x210]
7101db1a5c  mov x0,x21
7101db1a60  blr x8
7101db1a64  tbz w0,#0x0,0x7101db1aac
7101db1a68  ldr x8,[x21]
7101db1a6c  ldr x8,[x8, #0x238]
7101db1a70  mov w1,#0x1
7101db1a74  mov x0,x21
7101db1a78  blr x8
7101db1a7c  ldr x8,[x21]
7101db1a80  ldr x8,[x8, #0x3c8]
7101db1a84  mov x0,x21
7101db1a88  blr x8
7101db1a8c  ldr x8,[x21]
7101db1a90  ldr x8,[x8, #0x10]
7101db1a94  mov x0,x21
7101db1a98  blr x8
7101db1a9c  ldr x8,[x21]
7101db1aa0  ldr x8,[x8, #0x18]
7101db1aa4  mov x0,x21
7101db1aa8  blr x8
7101db1aac  adrp x8,0x710523d000
7101db1ab0  add x8,x8,#0x9c8
7101db1ab4  stp x8,xzr,[sp]
7101db1ab8  cbz x20,0x7101db1984
7101db1abc  mov x0,x20
7101db1ac0  bl 0x710392eb40
7101db1ac4  b 0x7101db1984
