// addr:      7101b7e8f0
// offset:    0x1b7e8f0
// name:      FUN_7101b7e8f0
// mangled:   
// size:      332

7101b7e8f0  stp x24,x23,[sp, #-0x40]!
7101b7e8f4  stp x22,x21,[sp, #0x10]
7101b7e8f8  stp x20,x19,[sp, #0x20]
7101b7e8fc  stp x29,x30,[sp, #0x30]
7101b7e900  add x29,sp,#0x30
7101b7e904  cmp w1,#0x8
7101b7e908  b.cs 0x7101b7ea38
7101b7e90c  ldr x21,[x0, #0x80]
7101b7e910  sub w8,w2,#0x1
7101b7e914  mov x19,x0
7101b7e918  sxtw x22,w1
7101b7e91c  cmp w8,#0x3
7101b7e920  b.hi 0x7101b7e9b8
7101b7e924  adrp x9,0x71044f8000
7101b7e928  add x9,x9,#0x7f0
7101b7e92c  ldrsw x8,[x9, x8, LSL #0x2]
7101b7e930  add x8,x8,x9
7101b7e934  br x8
7101b7e938  ldr x0,[x19, #0x78]
7101b7e93c  tst w3,#0x1
7101b7e940  mov w8,#0x12
7101b7e944  mov w9,#0xd
7101b7e948  csel x23,x9,x8,ne
7101b7e94c  adrp x20,0x710436c000
7101b7e950  add x20,x20,#0x77
7101b7e954  b 0x7101b7e9d4
7101b7e958  ldr x0,[x19, #0x78]
7101b7e95c  tst w3,#0x1
7101b7e960  mov w8,#0x14
7101b7e964  orr w9,wzr,#0xf
7101b7e968  csel x23,x9,x8,ne
7101b7e96c  adrp x20,0x71042d6000
7101b7e970  add x20,x20,#0x1f
7101b7e974  b 0x7101b7e9d4
7101b7e978  ldr x0,[x19, #0x78]
7101b7e97c  tst w3,#0x1
7101b7e980  mov w8,#0x13
7101b7e984  orr w9,wzr,#0xe
7101b7e988  csel x23,x9,x8,ne
7101b7e98c  adrp x20,0x7104308000
7101b7e990  add x20,x20,#0x23e
7101b7e994  b 0x7101b7e9d4
7101b7e998  ldr x0,[x19, #0x78]
7101b7e99c  tst w3,#0x1
7101b7e9a0  mov w8,#0x15
7101b7e9a4  mov w9,#0x10
7101b7e9a8  csel x23,x9,x8,ne
7101b7e9ac  adrp x20,0x710436c000
7101b7e9b0  add x20,x20,#0x92
7101b7e9b4  b 0x7101b7e9d4
7101b7e9b8  ldr x0,[x19, #0x78]
7101b7e9bc  tst w3,#0x1
7101b7e9c0  mov w8,#0x11
7101b7e9c4  orr w9,wzr,#0xc
7101b7e9c8  csel x23,x9,x8,ne
7101b7e9cc  adrp x20,0x7104443000
7101b7e9d0  add x20,x20,#0x3c9
7101b7e9d4  mov x1,x20
7101b7e9d8  mov w2,wzr
7101b7e9dc  bl 0x7103240d30
7101b7e9e0  mov w8,#0xd90
7101b7e9e4  madd x24,x22,x8,x21
7101b7e9e8  mov x1,x0
7101b7e9ec  ldr x0,[x24, #0xf60]
7101b7e9f0  bl 0x7103778b80
7101b7e9f4  ldr x0,[x19, #0x78]
7101b7e9f8  mov x1,x20
7101b7e9fc  mov w2,wzr
7101b7ea00  bl 0x7103240d30
7101b7ea04  mov x1,x0
7101b7ea08  ldr x0,[x24, #0xf70]
7101b7ea0c  bl 0x7103778b80
7101b7ea10  mov w8,#0xd90
7101b7ea14  madd x8,x22,x8,x21
7101b7ea18  fmov s0,0x3f800000
7101b7ea1c  ldp x29,x30,[sp, #0x30]
7101b7ea20  add x8,x8,x23, LSL #0x4
7101b7ea24  ldp x20,x19,[sp, #0x20]
7101b7ea28  add x0,x8,#0xc68
7101b7ea2c  ldp x22,x21,[sp, #0x10]
7101b7ea30  ldp x24,x23,[sp], #0x40
7101b7ea34  b 0x710377aee0
7101b7ea38  bl 0x71039c2650
