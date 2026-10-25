// addr:      7102c72db0
// offset:    0x2c72db0
// name:      FUN_7102c72db0
// mangled:   
// size:      380

7102c72db0  str x27,[sp, #-0x60]!
7102c72db4  stp x26,x25,[sp, #0x10]
7102c72db8  stp x24,x23,[sp, #0x20]
7102c72dbc  stp x22,x21,[sp, #0x30]
7102c72dc0  stp x20,x19,[sp, #0x40]
7102c72dc4  stp x29,x30,[sp, #0x50]
7102c72dc8  add x29,sp,#0x50
7102c72dcc  adrp x8,0x7105128000
7102c72dd0  add x8,x8,#0x328
7102c72dd4  adrp x9,0x7105128000
7102c72dd8  add x9,x9,#0x308
7102c72ddc  tst w1,#0x1
7102c72de0  csel x21,x9,x8,ne
7102c72de4  ldr x8,[x0]
7102c72de8  ldr x8,[x8, #0x318]
7102c72dec  mov x19,x0
7102c72df0  ldr x0,[x8, #0x10]
7102c72df4  ldr x1,[x21]
7102c72df8  bl 0x71025f7350
7102c72dfc  ldr x8,[x19]
7102c72e00  ldr x0,[x8, #0x318]
7102c72e04  ldr x1,[x21, #0x8]
7102c72e08  bl 0x7102633800
7102c72e0c  ldr x8,[x19]
7102c72e10  ldr x20,[x21, #0x10]
7102c72e14  mov w2,#0x1
7102c72e18  ldr x0,[x8, #0x318]
7102c72e1c  mov x1,x20
7102c72e20  bl 0x7102633a10
7102c72e24  ldr x8,[x19]
7102c72e28  ldr x0,[x8, #0x318]
7102c72e2c  ldr x1,[x21, #0x18]
7102c72e30  mov w2,#0x1
7102c72e34  bl 0x7102633b90
7102c72e38  ldr x8,[x19]
7102c72e3c  ldr x8,[x8, #0x310]
7102c72e40  ldp x9,x10,[x8, #0xd0]
7102c72e44  sub x9,x10,x9
7102c72e48  lsr x10,x9,#0x4
7102c72e4c  cmp w10,#0x1
7102c72e50  b.lt 0x7102c72f10
7102c72e54  ubfx x9,x9,#0x4,#0x20
7102c72e58  mov x22,#0x66ff
7102c72e5c  movk x22,#0x6ae, LSL #16
7102c72e60  mov x24,#0x8f8c
7102c72e64  movk x24,#0x9359, LSL #16
7102c72e68  mov x25,#0xf55c
7102c72e6c  movk x25,#0xd4f9, LSL #16
7102c72e70  mov x26,#0xdcec
7102c72e74  movk x26,#0xe999, LSL #16
7102c72e78  mov x21,xzr
7102c72e7c  movk x22,#0x8, LSL #32
7102c72e80  sub x23,x9,#0x1
7102c72e84  movk x24,#0x10, LSL #32
7102c72e88  movk x25,#0x10, LSL #32
7102c72e8c  movk x26,#0x10, LSL #32
7102c72e90  b 0x7102c72ea4
7102c72e94  ldr x8,[x19]
7102c72e98  ldr x8,[x8, #0x310]
7102c72e9c  add x21,x21,#0x10
7102c72ea0  sub x23,x23,#0x1
7102c72ea4  ldr x8,[x8, #0xd0]
7102c72ea8  ldr x27,[x8, x21, LSL #0x0]
7102c72eac  cbz x27,0x7102c72f0c
7102c72eb0  ldr x8,[x27, #0x68]
7102c72eb4  cmp x8,x22
7102c72eb8  b.eq 0x7102c72ee0
7102c72ebc  ldr x8,[x27, #0x68]
7102c72ec0  cmp x8,x24
7102c72ec4  b.eq 0x7102c72ee0
7102c72ec8  ldr x8,[x27, #0x68]
7102c72ecc  cmp x8,x25
7102c72ed0  b.eq 0x7102c72ee0
7102c72ed4  ldr x8,[x27, #0x68]
7102c72ed8  cmp x8,x26
7102c72edc  b.ne 0x7102c72f0c
7102c72ee0  ldrb w8,[x27, #0xe0]
7102c72ee4  cbz w8,0x7102c72efc
7102c72ee8  ldr x0,[x27, #0xb8]
7102c72eec  add x1,sp,#0x8
7102c72ef0  mov w2,#0x1
7102c72ef4  str x20,[sp, #0x8]
7102c72ef8  bl 0x71026527b0
7102c72efc  ldrb w8,[x27, #0xe0]
7102c72f00  cbz w8,0x7102c72f0c
7102c72f04  ldr x8,[x27, #0xb8]
7102c72f08  strb wzr,[x8, #0x33]
7102c72f0c  cbnz x23,0x7102c72e94
7102c72f10  ldp x29,x30,[sp, #0x50]
7102c72f14  ldp x20,x19,[sp, #0x40]
7102c72f18  ldp x22,x21,[sp, #0x30]
7102c72f1c  ldp x24,x23,[sp, #0x20]
7102c72f20  ldp x26,x25,[sp, #0x10]
7102c72f24  ldr x27,[sp], #0x60
7102c72f28  ret
