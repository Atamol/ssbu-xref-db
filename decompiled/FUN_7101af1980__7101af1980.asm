// addr:      7101af1980
// offset:    0x1af1980
// name:      FUN_7101af1980
// mangled:   
// size:      456

7101af1980  sub sp,sp,#0x70
7101af1984  str x21,[sp, #0x40]
7101af1988  stp x20,x19,[sp, #0x50]
7101af198c  stp x29,x30,[sp, #0x60]
7101af1990  add x29,sp,#0x60
7101af1994  ldr w8,[x0, #0xbc]
7101af1998  mov x20,x1
7101af199c  cbz w8,0x7101af1a58
7101af19a0  mov x21,x0
7101af19a4  ldr x8,[x21, #0xd8]!
7101af19a8  ldrb w9,[x8, #0x280]
7101af19ac  mov x19,x0
7101af19b0  cbz w9,0x7101af19c8
7101af19b4  mov x0,x21
7101af19b8  mov w1,wzr
7101af19bc  mov w2,wzr
7101af19c0  bl 0x7103771be0
7101af19c4  ldr x8,[x21]
7101af19c8  ldr w21,[x8, #0x25c]
7101af19cc  cmn w21,#0x1
7101af19d0  b.eq 0x7101af1b30
7101af19d4  ldr x8,[x19, #0xd0]
7101af19d8  ldr x0,[x8, #0x8]
7101af19dc  cbz x0,0x7101af1a10
7101af19e0  adrp x1,0x7104292000
7101af19e4  add x1,x1,#0x32d
7101af19e8  bl 0x71037964b0
7101af19ec  cbz x0,0x7101af1a10
7101af19f0  ldr x8,[x0]
7101af19f4  ldr x8,[x8, #0x138]
7101af19f8  blr x8
7101af19fc  tbnz w0,#0x0,0x7101af1a10
7101af1a00  ldr x0,[x19, #0xd0]
7101af1a04  adrp x1,0x7104292000
7101af1a08  add x1,x1,#0x32d
7101af1a0c  bl 0x7103778760
7101af1a10  cmp w21,#0x1
7101af1a14  orr w8,wzr,#0x3
7101af1a18  csinc w8,w8,wzr,eq
7101af1a1c  str w8,[x19, #0xec]
7101af1a20  ldr x8,[x20, #0x8]
7101af1a24  strb wzr,[x8, #0x4aa]
7101af1a28  adrp x8,0x710532f000
7101af1a2c  ldr x8,[x8, #0x8d0]
7101af1a30  ldr x0,[x8, #0x8]
7101af1a34  ldp x8,x9,[x0, #0x40]
7101af1a38  sub x9,x9,x8
7101af1a3c  asr x9,x9,#0x3
7101af1a40  cmp x9,#0x3
7101af1a44  b.cc 0x7101af1a68
7101af1a48  ldr x20,[x8, #0x10]
7101af1a4c  ldrb w8,[x0, #0x191]
7101af1a50  cbnz w8,0x7101af1ae4
7101af1a54  b 0x7101af1a74
7101af1a58  ldr x8,[x20, #0x8]
7101af1a5c  mov w9,#0x1
7101af1a60  strb w9,[x8, #0x4aa]
7101af1a64  b 0x7101af1b30
7101af1a68  mov x20,xzr
7101af1a6c  ldrb w8,[x0, #0x191]
7101af1a70  cbnz w8,0x7101af1ae4
7101af1a74  mov w2,#0x4
7101af1a78  mov x1,x20
7101af1a7c  bl 0x7103313f20
7101af1a80  tbz w0,#0x0,0x7101af1ae4
7101af1a84  mov x0,sp
7101af1a88  mov x1,x20
7101af1a8c  bl 0x71024076d0
7101af1a90  ldr x8,[sp, #0x10]
7101af1a94  adrp x9,0x7104f73000
7101af1a98  add x9,x9,#0xd50
7101af1a9c  str x9,[sp, #0x8]
7101af1aa0  cbz x8,0x7101af1b10
7101af1aa4  adrp x8,0x7106dd5000
7101af1aa8  ldrb w8,[x8, #0x3a8]
7101af1aac  cmp w8,#0x1
7101af1ab0  b.ne 0x7101af1b10
7101af1ab4  adrp x9,0x7106dd5000
7101af1ab8  ldr w8,[sp, #0x18]
7101af1abc  ldr w9,[x9, #0x3ac]
7101af1ac0  cmp w8,w9
7101af1ac4  b.ne 0x7101af1b10
7101af1ac8  ldr x8,[sp, #0x10]
7101af1acc  ldr wzr,[x8, #0x38]!
7101af1ad0  ldaxr w9,[x8]
7101af1ad4  sub w9,w9,#0x1
7101af1ad8  stlxr w10,w9,[x8]
7101af1adc  cbnz w10,0x7101af1ad0
7101af1ae0  b 0x7101af1b10
7101af1ae4  mov x8,#0x650000000000
7101af1ae8  movk x8,#0x87, LSL #48
7101af1aec  strb wzr,[sp, #0x20]
7101af1af0  stp xzr,x8,[sp, #0x10]
7101af1af4  mov x8,#-0x1
7101af1af8  stp x8,xzr,[sp, #0x28]
7101af1afc  adrp x8,0x7104f73000
7101af1b00  add x8,x8,#0xd50
7101af1b04  str wzr,[sp]
7101af1b08  str xzr,[sp, #0x38]
7101af1b0c  str x8,[sp, #0x8]
7101af1b10  str xzr,[sp, #0x10]
7101af1b14  strb wzr,[sp, #0x20]
7101af1b18  ldrsw x8,[x19, #0xb4]
7101af1b1c  cmp w8,#0x13
7101af1b20  b.cs 0x7101af1b44
7101af1b24  add x8,x19,x8, LSL #0x2
7101af1b28  orr w9,wzr,#0x3
7101af1b2c  str w9,[x8, #0x68]
7101af1b30  ldp x29,x30,[sp, #0x60]
7101af1b34  ldr x21,[sp, #0x40]
7101af1b38  ldp x20,x19,[sp, #0x50]
7101af1b3c  add sp,sp,#0x70
7101af1b40  ret
7101af1b44  bl 0x71039c2650
