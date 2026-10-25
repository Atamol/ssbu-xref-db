// addr:      710148c970
// offset:    0x148c970
// name:      FUN_710148c970
// mangled:   
// size:      684

710148c970  sub sp,sp,#0x50
710148c974  str x21,[sp, #0x20]
710148c978  stp x20,x19,[sp, #0x30]
710148c97c  stp x29,x30,[sp, #0x40]
710148c980  add x29,sp,#0x40
710148c984  ldr w8,[x0, #0x1dc]
710148c988  mov x19,x0
710148c98c  cbz w8,0x710148ca2c
710148c990  adrp x20,0x710532f000
710148c994  ldr x8,[x20, #0x820]
710148c998  ldr x21,[x8, #0x8]
710148c99c  ldr x8,[x21, #0x110]
710148c9a0  ldr x0,[x8, #0x80]
710148c9a4  bl 0x7101eefe30
710148c9a8  ldr w8,[x21, #0xf8]
710148c9ac  cmp w8,#0x0
710148c9b0  ldrb w9,[x21, #0x142]
710148c9b4  cset w8,ne
710148c9b8  orn w8,w8,w0
710148c9bc  and w8,w8,#0x1
710148c9c0  orr w8,w8,w9
710148c9c4  cbnz w8,0x710148cc04
710148c9c8  ldr x8,[x20, #0x820]
710148c9cc  ldr x8,[x8, #0x8]
710148c9d0  ldr w8,[x8, #0x118]
710148c9d4  cmp w8,#0x2
710148c9d8  b.ne 0x710148cbd8
710148c9dc  adrp x9,0x7105314000
710148c9e0  ldr x9,[x9, #0x510]
710148c9e4  ldr x9,[x9]
710148c9e8  ldr x9,[x9, #0xd8]
710148c9ec  ldr x9,[x9]
710148c9f0  ldr x9,[x9]
710148c9f4  ldr w8,[x19, #0x210]
710148c9f8  ldr w10,[x9, #0x24]
710148c9fc  cmp w10,w8
710148ca00  csel w10,w10,w8,hi
710148ca04  sub w8,w10,w8
710148ca08  str w8,[x9, #0x24]
710148ca0c  mov w8,#0x1
710148ca10  strb w8,[x19, #0x1fd]
710148ca14  ldrsw x8,[x19, #0x1d4]
710148ca18  cmp w8,#0x13
710148ca1c  b.cs 0x710148cc18
710148ca20  add x8,x19,x8, LSL #0x2
710148ca24  mov w9,#0x11
710148ca28  b 0x710148cc00
710148ca2c  adrp x8,0x7105314000
710148ca30  ldr x8,[x8, #0x510]
710148ca34  ldr x8,[x8]
710148ca38  ldr x8,[x8, #0xd8]
710148ca3c  ldr x8,[x8]
710148ca40  ldr x8,[x8]
710148ca44  ldr x9,[x19, #0x1f0]
710148ca48  ldr x20,[x9, #0x80]
710148ca4c  add x0,x20,#0x18
710148ca50  ldr w8,[x8, #0x24]
710148ca54  str w8,[x20, #0x3c]
710148ca58  adrp x1,0x71042b4000
710148ca5c  add x1,x1,#0xa41
710148ca60  add x8,sp,#0x8
710148ca64  bl 0x7103776640
710148ca68  ldr x0,[x20, #0x40]
710148ca6c  adrp x2,0x71042c3000
710148ca70  add x2,x2,#0x68c
710148ca74  adrp x3,0x71043cf000
710148ca78  add x3,x3,#0x8dc
710148ca7c  add x1,sp,#0x8
710148ca80  bl 0x7103399950
710148ca84  ldr x0,[x20, #0x40]
710148ca88  adrp x2,0x7104464000
710148ca8c  add x2,x2,#0x38d
710148ca90  adrp x3,0x7104348000
710148ca94  add x3,x3,#0xacf
710148ca98  add x1,sp,#0x8
710148ca9c  bl 0x7103399a70
710148caa0  ldr x8,[x20, #0x40]
710148caa4  mov x9,#0xfc80
710148caa8  movk x9,#0x5bf6, LSL #16
710148caac  mov x10,#0xf4dd
710148cab0  movk x10,#0x7123, LSL #16
710148cab4  movk x9,#0x20, LSL #32
710148cab8  movk x10,#0x25, LSL #32
710148cabc  stp x9,x10,[x8, #0x58]
710148cac0  ldr x8,[x20, #0x40]
710148cac4  mov x9,#0x1a56
710148cac8  movk x9,#0xfc22, LSL #16
710148cacc  mov x10,#0xd702
710148cad0  movk x10,#0xef44, LSL #16
710148cad4  movk x9,#0x21, LSL #32
710148cad8  movk x10,#0x26, LSL #32
710148cadc  stp x9,x10,[x8, #0x68]
710148cae0  ldr x0,[x20, #0x40]
710148cae4  ldr w3,[x20, #0x3c]
710148cae8  ldr w8,[x0, #0x94]
710148caec  cmp w8,w3
710148caf0  b.eq 0x710148cb04
710148caf4  add x1,x0,#0x18
710148caf8  mov w2,#0x1
710148cafc  str w3,[x0, #0x94]
710148cb00  bl 0x710377a280
710148cb04  ldr x0,[x20, #0x20]
710148cb08  fmov s0,0x3f800000
710148cb0c  adrp x1,0x7104422000
710148cb10  add x1,x1,#0x7e2
710148cb14  bl 0x7103778300
710148cb18  ldr x20,[sp, #0x10]
710148cb1c  adrp x8,0x710523d000
710148cb20  add x8,x8,#0x988
710148cb24  stp x8,xzr,[sp, #0x8]
710148cb28  cbz x20,0x710148cb4c
710148cb2c  ldr x0,[x20, #0x18]
710148cb30  adrp x8,0x710523d000
710148cb34  add x8,x8,#0x9a8
710148cb38  stp x8,xzr,[x20, #0x10]
710148cb3c  cbz x0,0x710148cb44
710148cb40  bl 0x710392eb40
710148cb44  mov x0,x20
710148cb48  bl 0x710392eb40
710148cb4c  ldr w19,[x19, #0x210]
710148cb50  mov w0,#0x10
710148cb54  mov w1,#0x8
710148cb58  bl 0x710392e290
710148cb5c  cbnz x0,0x710148cb94
710148cb60  adrp x8,0x7105332000
710148cb64  ldr x0,[x8, #0xf00]
710148cb68  mov w8,#0x8
710148cb6c  stur wzr,[x29, #-0x14]
710148cb70  sub x1,x29,#0x14
710148cb74  str x8,[sp, #0x8]
710148cb78  ldr x8,[x0]
710148cb7c  ldr x8,[x8, #0x30]
710148cb80  add x2,sp,#0x8
710148cb84  blr x8
710148cb88  mov w0,#0x10
710148cb8c  mov w1,#0x8
710148cb90  bl 0x710392e290
710148cb94  mov x8,x0
710148cb98  adrp x9,0x710532f000
710148cb9c  mov x1,#0xccf3
710148cba0  movk x1,#0xb2fd, LSL #16
710148cba4  movk x1,#0xff1e, LSL #32
710148cba8  movk x1,#0x58ff, LSL #48
710148cbac  str x19,[x8], #0x8
710148cbb0  stp x0,x8,[sp, #0x8]
710148cbb4  ldr x0,[x9, #0x820]
710148cbb8  add x2,sp,#0x8
710148cbbc  str x8,[sp, #0x18]
710148cbc0  bl 0x71032f29a0
710148cbc4  ldr x0,[sp, #0x8]
710148cbc8  cbz x0,0x710148cc04
710148cbcc  str x0,[sp, #0x10]
710148cbd0  bl 0x710392eb40
710148cbd4  b 0x710148cc04
710148cbd8  adrp x8,0x7105329000
710148cbdc  ldr x8,[x8, #0xfa0]
710148cbe0  ldr x8,[x8]
710148cbe4  ldr w8,[x8, #0x298]
710148cbe8  str w8,[x19, #0x20c]
710148cbec  ldrsw x8,[x19, #0x1d4]
710148cbf0  cmp w8,#0x13
710148cbf4  b.cs 0x710148cc18
710148cbf8  add x8,x19,x8, LSL #0x2
710148cbfc  mov w9,#0x12
710148cc00  str w9,[x8, #0x188]
710148cc04  ldp x29,x30,[sp, #0x40]
710148cc08  ldr x21,[sp, #0x20]
710148cc0c  ldp x20,x19,[sp, #0x30]
710148cc10  add sp,sp,#0x50
710148cc14  ret
710148cc18  bl 0x71039c2650
