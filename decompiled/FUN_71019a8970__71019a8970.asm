// addr:      71019a8970
// offset:    0x19a8970
// name:      FUN_71019a8970
// mangled:   
// size:      436

71019a8970  str x21,[sp, #-0x30]!
71019a8974  stp x20,x19,[sp, #0x10]
71019a8978  stp x29,x30,[sp, #0x20]
71019a897c  add x29,sp,#0x20
71019a8980  adrp x21,0x710532f000
71019a8984  ldr w8,[x0, #0x2d4]
71019a8988  ldr x20,[x21, #0x820]
71019a898c  cbz w8,0x71019a8a60
71019a8990  ldr x20,[x20, #0x8]
71019a8994  ldr x8,[x20, #0x110]
71019a8998  mov x19,x0
71019a899c  ldr x0,[x8, #0x80]
71019a89a0  bl 0x7101eefe30
71019a89a4  ldr w8,[x20, #0xf8]
71019a89a8  cmp w8,#0x0
71019a89ac  ldrb w9,[x20, #0x142]
71019a89b0  cset w8,ne
71019a89b4  orn w8,w8,w0
71019a89b8  and w8,w8,#0x1
71019a89bc  orr w8,w8,w9
71019a89c0  cbnz w8,0x71019a8b10
71019a89c4  ldr x8,[x21, #0x820]
71019a89c8  ldr x8,[x8, #0x8]
71019a89cc  ldr w8,[x8, #0x118]
71019a89d0  cmp w8,#0x2
71019a89d4  b.ne 0x71019a8ab0
71019a89d8  adrp x8,0x7104280000
71019a89dc  add x8,x8,#0x2df
71019a89e0  str x8,[x19, #0x308]
71019a89e4  mov w8,#0x100
71019a89e8  strh w8,[x19, #0x320]
71019a89ec  ldrsw x8,[x19, #0x2cc]
71019a89f0  adrp x9,0x7104291000
71019a89f4  add x9,x9,#0x50a
71019a89f8  str x9,[x19, #0x310]
71019a89fc  cmp w8,#0x13
71019a8a00  b.cs 0x71019a8b20
71019a8a04  add x8,x19,x8, LSL #0x2
71019a8a08  mov w9,#0x12
71019a8a0c  str w9,[x8, #0x280]
71019a8a10  ldr w8,[x19, #0x2cc]
71019a8a14  cmp w8,#0x11
71019a8a18  b.gt 0x71019a8b10
71019a8a1c  add w8,w8,#0x1
71019a8a20  cmp w8,#0x13
71019a8a24  str w8,[x19, #0x2cc]
71019a8a28  b.cs 0x71019a8b20
71019a8a2c  add x8,x19,w8, SXTW  #0x2
71019a8a30  mov w9,#0x1
71019a8a34  str w9,[x8, #0x280]
71019a8a38  ldr w8,[x19, #0x2cc]
71019a8a3c  cmp w8,#0x11
71019a8a40  b.gt 0x71019a8b10
71019a8a44  add w8,w8,#0x1
71019a8a48  cmp w8,#0x13
71019a8a4c  str w8,[x19, #0x2cc]
71019a8a50  b.cs 0x71019a8b20
71019a8a54  add x8,x19,w8, SXTW  #0x2
71019a8a58  mov w9,#0x2
71019a8a5c  b 0x71019a8b0c
71019a8a60  adrp x8,0x710532f000
71019a8a64  ldr x8,[x8, #0x730]
71019a8a68  ldr x8,[x8, #0x8]
71019a8a6c  ldr x0,[x8, #0x1c8]
71019a8a70  mov x19,#0x81eb
71019a8a74  movk x19,#0xc7cc, LSL #16
71019a8a78  movk x19,#0xff15, LSL #32
71019a8a7c  movk x19,#0x58ff, LSL #48
71019a8a80  mov x1,x19
71019a8a84  bl 0x7103291150
71019a8a88  tbz w0,#0x0,0x71019a8aa4
71019a8a8c  ldr x0,[x20, #0x10]
71019a8a90  mov x1,x19
71019a8a94  bl 0x71032edf70
71019a8a98  ldp x0,x1,[x20, #0x8]
71019a8a9c  bl 0x71032f1bb0
71019a8aa0  b 0x71019a8b10
71019a8aa4  ldr x8,[x20, #0x8]
71019a8aa8  str wzr,[x8, #0x118]
71019a8aac  b 0x71019a8b10
71019a8ab0  adrp x8,0x710426f000
71019a8ab4  add x8,x8,#0x8d2
71019a8ab8  str x8,[x19, #0x308]
71019a8abc  mov w8,#0x100
71019a8ac0  strh w8,[x19, #0x320]
71019a8ac4  ldrsw x8,[x19, #0x2cc]
71019a8ac8  adrp x9,0x710439c000
71019a8acc  add x9,x9,#0xcc9
71019a8ad0  str x9,[x19, #0x310]
71019a8ad4  cmp w8,#0x13
71019a8ad8  b.cs 0x71019a8b20
71019a8adc  add x8,x19,x8, LSL #0x2
71019a8ae0  orr w9,wzr,#0xe
71019a8ae4  str w9,[x8, #0x280]
71019a8ae8  ldr w8,[x19, #0x2cc]
71019a8aec  cmp w8,#0x11
71019a8af0  b.gt 0x71019a8b10
71019a8af4  add w8,w8,#0x1
71019a8af8  cmp w8,#0x13
71019a8afc  str w8,[x19, #0x2cc]
71019a8b00  b.cs 0x71019a8b20
71019a8b04  add x8,x19,w8, SXTW  #0x2
71019a8b08  mov w9,#0x1
71019a8b0c  str w9,[x8, #0x280]
71019a8b10  ldp x29,x30,[sp, #0x20]
71019a8b14  ldp x20,x19,[sp, #0x10]
71019a8b18  ldr x21,[sp], #0x30
71019a8b1c  ret
71019a8b20  bl 0x71039c2650
