// addr:      71019de980
// offset:    0x19de980
// name:      FUN_71019de980
// mangled:   
// size:      424

71019de980  sub sp,sp,#0x80
71019de984  str x21,[sp, #0x50]
71019de988  stp x20,x19,[sp, #0x60]
71019de98c  stp x29,x30,[sp, #0x70]
71019de990  add x29,sp,#0x70
71019de994  ldr x8,[x0, #0xe0]
71019de998  ldr x21,[x8]
71019de99c  ldr w8,[x0, #0xd4]
71019de9a0  mov x19,x0
71019de9a4  cbz w8,0x71019de9f0
71019de9a8  ldr x8,[x21, #0x10]
71019de9ac  ldr x0,[x8, #0x8]
71019de9b0  cbz x0,0x71019de9d4
71019de9b4  adrp x1,0x7104421000
71019de9b8  add x1,x1,#0x55
71019de9bc  bl 0x71037964b0
71019de9c0  cbz x0,0x71019de9d4
71019de9c4  ldr x8,[x0]
71019de9c8  ldr x8,[x8, #0x138]
71019de9cc  blr x8
71019de9d0  tbz w0,#0x0,0x71019deb10
71019de9d4  ldrsw x8,[x19, #0xcc]
71019de9d8  cmp w8,#0x13
71019de9dc  b.cs 0x71019deb24
71019de9e0  add x8,x19,x8, LSL #0x2
71019de9e4  mov w9,#0x2
71019de9e8  str w9,[x8, #0x80]
71019de9ec  b 0x71019deb10
71019de9f0  adrp x8,0x710532f000
71019de9f4  ldr x8,[x8, #0x840]
71019de9f8  ldr x8,[x8, #0x8]
71019de9fc  mov x9,#0x1400000000
71019dea00  mov w11,#0x6d
71019dea04  mov w10,#0x9
71019dea08  mov w12,#0x89
71019dea0c  ldr x8,[x8, #0xb8]
71019dea10  strb wzr,[x19, #0xf8]
71019dea14  str x9,[sp, #0x8]
71019dea18  mov x9,#0x6e6d
71019dea1c  movk x9,#0x5f75, LSL #16
71019dea20  movk x9,#0x6d6d, LSL #32
71019dea24  movk x9,#0x6969, LSL #48
71019dea28  str x9,[sp, #0x10]
71019dea2c  mov x9,#0x5f66
71019dea30  movk x9,#0x7974, LSL #16
71019dea34  movk x9,#0x6570, LSL #32
71019dea38  movk x9,#0x745f, LSL #48
71019dea3c  str x9,[sp, #0x18]
71019dea40  mov w9,#0x7469
71019dea44  movk w9,#0x656c, LSL #16
71019dea48  add x20,x21,#0x8
71019dea4c  strb wzr,[sp, #0x24]
71019dea50  str w9,[sp, #0x20]
71019dea54  mov w9,#0x9dc5
71019dea58  movk w9,#0x811c, LSL #16
71019dea5c  add x13,sp,#0x8
71019dea60  mul w9,w9,w12
71019dea64  and w11,w11,#0xff
71019dea68  eor w9,w9,w11
71019dea6c  ldrb w11,[x13, x10, LSL ]
71019dea70  add x10,x10,#0x1
71019dea74  cbnz w11,0x71019dea60
71019dea78  str w9,[sp, #0x8]
71019dea7c  ldr x0,[x8, #0x80]
71019dea80  add x1,sp,#0x8
71019dea84  bl 0x7101af90b0
71019dea88  ldr x8,[x19, #0xe8]
71019dea8c  ldr w2,[x8, #0x254]
71019dea90  adrp x1,0x7104400000
71019dea94  add x1,x1,#0xd3e
71019dea98  mov x0,x20
71019dea9c  bl 0x7103778430
71019deaa0  ldr x0,[x21, #0x10]
71019deaa4  ldr x8,[x0, #0x8]
71019deaa8  cbz x8,0x71019deac4
71019deaac  ldr x8,[x8, #0x18]
71019deab0  cbz x8,0x71019deac4
71019deab4  ldrb w9,[x8, #0x58]
71019deab8  orr w9,w9,#0x1
71019deabc  strb w9,[x8, #0x58]
71019deac0  ldr x0,[x21, #0x10]
71019deac4  fmov s0,0x3f800000
71019deac8  adrp x1,0x7104421000
71019deacc  add x1,x1,#0x55
71019dead0  bl 0x7103778300
71019dead4  ldr x8,[x19, #0xe0]
71019dead8  ldr x8,[x8]
71019deadc  ldr x0,[x8]
71019deae0  mov w1,#0x1
71019deae4  bl 0x71037760f0
71019deae8  ldr x0,[x19, #0xe8]
71019deaec  ldr x8,[x0]
71019deaf0  ldr x8,[x8, #0x60]
71019deaf4  mov w1,#0x1
71019deaf8  blr x8
71019deafc  ldr x0,[x19, #0xe8]
71019deb00  ldr x8,[x0]
71019deb04  ldr x8,[x8, #0x70]
71019deb08  mov w1,#0x1
71019deb0c  blr x8
71019deb10  ldp x29,x30,[sp, #0x70]
71019deb14  ldr x21,[sp, #0x50]
71019deb18  ldp x20,x19,[sp, #0x60]
71019deb1c  add sp,sp,#0x80
71019deb20  ret
71019deb24  bl 0x71039c2650
