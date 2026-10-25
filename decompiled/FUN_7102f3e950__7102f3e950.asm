// addr:      7102f3e950
// offset:    0x2f3e950
// name:      FUN_7102f3e950
// mangled:   
// size:      548

7102f3e950  stp x20,x19,[sp, #-0x20]!
7102f3e954  stp x29,x30,[sp, #0x10]
7102f3e958  add x29,sp,#0x10
7102f3e95c  mov x20,x1
7102f3e960  mov x19,x0
7102f3e964  cbz x1,0x7102f3ea00
7102f3e968  ldrb w11,[x20]
7102f3e96c  cbz w11,0x7102f3ea00
7102f3e970  ldr x8,[x19, #0x50]
7102f3e974  ldr x9,[x8, #0x310]
7102f3e978  ldp x8,x9,[x9, #0xd0]
7102f3e97c  cmp x8,x9
7102f3e980  b.eq 0x7102f3ea00
7102f3e984  mov x10,xzr
7102f3e988  add x13,x20,#0x1
7102f3e98c  mov w12,#0xffffffff
7102f3e990  orr x14,xzr,#0x100000000
7102f3e994  adrp x15,0x7104754000
7102f3e998  add x15,x15,#0x84
7102f3e99c  and w11,w11,#0xff
7102f3e9a0  sub w16,w11,#0x41
7102f3e9a4  add w17,w11,#0x20
7102f3e9a8  cmp w16,#0x1a
7102f3e9ac  csel w11,w17,w11,cc
7102f3e9b0  eor w11,w11,w12
7102f3e9b4  and w11,w11,#0xff
7102f3e9b8  ldr w11,[x15, w11, UXTW #0x2]
7102f3e9bc  eor w12,w11,w12, LSR #0x8
7102f3e9c0  ldrb w11,[x13], #0x1
7102f3e9c4  add x10,x10,x14
7102f3e9c8  cbnz w11,0x7102f3e99c
7102f3e9cc  mvn w11,w12
7102f3e9d0  and x10,x10,#0xff00000000
7102f3e9d4  orr x10,x10,x11
7102f3e9d8  ldr w11,[x8, #0x8]
7102f3e9dc  cmp w11,#0x1
7102f3e9e0  b.hi 0x7102f3e9f4
7102f3e9e4  ldr x0,[x8]
7102f3e9e8  ldr x11,[x0, #0x68]
7102f3e9ec  cmp x10,x11
7102f3e9f0  b.eq 0x7102f3ea04
7102f3e9f4  add x8,x8,#0x10
7102f3e9f8  cmp x9,x8
7102f3e9fc  b.ne 0x7102f3e9d8
7102f3ea00  mov x0,xzr
7102f3ea04  adrp x1,0x71043ee000
7102f3ea08  add x1,x1,#0xe10
7102f3ea0c  str x0,[x19, #0x8]
7102f3ea10  bl 0x7102610070
7102f3ea14  ldr x0,[x19, #0x8]
7102f3ea18  fmov s0,wzr
7102f3ea1c  mov w1,#0x1
7102f3ea20  bl 0x710260fdd0
7102f3ea24  ldr x8,[x19, #0x8]
7102f3ea28  cbz x8,0x7102f3eaa4
7102f3ea2c  ldrb w9,[x8, #0xe0]
7102f3ea30  cbz w9,0x7102f3ea40
7102f3ea34  ldr x9,[x8, #0xc8]
7102f3ea38  cbz x9,0x7102f3ea40
7102f3ea3c  strh wzr,[x9, #0x32]
7102f3ea40  ldr x8,[x8, #0xd8]
7102f3ea44  cbz x8,0x7102f3ea4c
7102f3ea48  strb wzr,[x8, #0x22]
7102f3ea4c  ldr x8,[x19, #0x8]
7102f3ea50  cbz x8,0x7102f3eaa4
7102f3ea54  add x0,x8,#0x108
7102f3ea58  mov w9,#0x1
7102f3ea5c  strb w9,[x8, #0x110]
7102f3ea60  bl 0x71025e9d50
7102f3ea64  ldr x8,[x19, #0x8]
7102f3ea68  cbz x8,0x7102f3eaa4
7102f3ea6c  ldrb w9,[x8, #0xe0]
7102f3ea70  cbz w9,0x7102f3ea84
7102f3ea74  ldr x9,[x8, #0xc8]
7102f3ea78  cbz x9,0x7102f3ea84
7102f3ea7c  mov w10,#0x101
7102f3ea80  strh w10,[x9, #0x30]
7102f3ea84  ldr x9,[x8, #0xd8]
7102f3ea88  cbz x9,0x7102f3ea94
7102f3ea8c  mov w10,#0x1
7102f3ea90  strb w10,[x9, #0x21]
7102f3ea94  ldrb w9,[x8, #0xe0]
7102f3ea98  cbz w9,0x7102f3eaa4
7102f3ea9c  ldr x8,[x8, #0xb0]
7102f3eaa0  strb wzr,[x8, #0x10]
7102f3eaa4  ldr x8,[x19, #0x50]
7102f3eaa8  ldr x8,[x8, #0x300]
7102f3eaac  ldr x9,[x8, #0x18]
7102f3eab0  ldp x8,x9,[x9]
7102f3eab4  cmp x8,x9
7102f3eab8  b.eq 0x7102f3eb68
7102f3eabc  ldrb w10,[x20], #0x1
7102f3eac0  mov w11,#0xffffffff
7102f3eac4  orr x12,xzr,#0x100000000
7102f3eac8  adrp x13,0x7104754000
7102f3eacc  add x13,x13,#0x84
7102f3ead0  ldr x14,[x8]
7102f3ead4  cbz w10,0x7102f3eb24
7102f3ead8  mov x15,xzr
7102f3eadc  mov x16,x20
7102f3eae0  mov w18,w10
7102f3eae4  mov w17,w11
7102f3eae8  and w18,w18,#0xff
7102f3eaec  sub w0,w18,#0x41
7102f3eaf0  add w1,w18,#0x20
7102f3eaf4  cmp w0,#0x1a
7102f3eaf8  csel w18,w1,w18,cc
7102f3eafc  eor w18,w18,w17
7102f3eb00  and w18,w18,#0xff
7102f3eb04  ldr w18,[x13, w18, UXTW #0x2]
7102f3eb08  eor w17,w18,w17, LSR #0x8
7102f3eb0c  ldrb w18,[x16], #0x1
7102f3eb10  add x15,x15,x12
7102f3eb14  cbnz w18,0x7102f3eae8
7102f3eb18  mvn w16,w17
7102f3eb1c  and x15,x15,#0xff00000000
7102f3eb20  b 0x7102f3eb2c
7102f3eb24  mov x16,xzr
7102f3eb28  mov x15,xzr
7102f3eb2c  orr x15,x15,x16
7102f3eb30  ldr x16,[x14, #0xa0]
7102f3eb34  and x16,x16,#0xffffffffff
7102f3eb38  cmp x16,x15
7102f3eb3c  b.eq 0x7102f3eb50
7102f3eb40  add x8,x8,#0x8
7102f3eb44  cmp x8,x9
7102f3eb48  b.ne 0x7102f3ead0
7102f3eb4c  b 0x7102f3eb68
7102f3eb50  ldr x8,[x14, #0x110]
7102f3eb54  cbz x8,0x7102f3eb68
7102f3eb58  ldp x9,x10,[x8]
7102f3eb5c  cmp x9,x10
7102f3eb60  b.eq 0x7102f3eb68
7102f3eb64  str x8,[x19, #0x10]
7102f3eb68  ldp x29,x30,[sp, #0x10]
7102f3eb6c  ldp x20,x19,[sp], #0x20
7102f3eb70  ret
