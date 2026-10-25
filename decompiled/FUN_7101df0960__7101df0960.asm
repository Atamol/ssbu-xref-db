// addr:      7101df0960
// offset:    0x1df0960
// name:      FUN_7101df0960
// mangled:   
// size:      688

7101df0960  sub sp,sp,#0x70
7101df0964  stp x24,x23,[sp, #0x30]
7101df0968  stp x22,x21,[sp, #0x40]
7101df096c  stp x20,x19,[sp, #0x50]
7101df0970  stp x29,x30,[sp, #0x60]
7101df0974  add x29,sp,#0x60
7101df0978  mov x22,x1
7101df097c  mov x20,x0
7101df0980  add x0,x0,#0x10
7101df0984  adrp x1,0x710438c000
7101df0988  add x1,x1,#0xff8
7101df098c  add x8,sp,#0x20
7101df0990  bl 0x7103776640
7101df0994  cbz x22,0x7101df09b4
7101df0998  ldrb w8,[x22, #0x8]
7101df099c  cbz w8,0x7101df09b4
7101df09a0  ldrb w8,[x22, #0xec]
7101df09a4  cbnz w8,0x7101df09b4
7101df09a8  ldp x8,x9,[x22, #0x70]
7101df09ac  cmp x9,x8
7101df09b0  b.ne 0x7101df0a1c
7101df09b4  ldr x19,[sp, #0x28]
7101df09b8  ldr x8,[x19, #0x8]
7101df09bc  cbz x8,0x7101df09d4
7101df09c0  ldr x8,[x8, #0x18]
7101df09c4  cbz x8,0x7101df09d4
7101df09c8  ldrb w9,[x8, #0x58]
7101df09cc  and w9,w9,#0xfe
7101df09d0  strb w9,[x8, #0x58]
7101df09d4  adrp x8,0x710523d000
7101df09d8  add x8,x8,#0x988
7101df09dc  stp x8,xzr,[sp, #0x20]
7101df09e0  cbz x19,0x7101df0a04
7101df09e4  ldr x0,[x19, #0x18]
7101df09e8  adrp x8,0x710523d000
7101df09ec  add x8,x8,#0x9a8
7101df09f0  stp x8,xzr,[x19, #0x10]
7101df09f4  cbz x0,0x7101df09fc
7101df09f8  bl 0x710392eb40
7101df09fc  mov x0,x19
7101df0a00  bl 0x710392eb40
7101df0a04  ldp x29,x30,[sp, #0x60]
7101df0a08  ldp x20,x19,[sp, #0x50]
7101df0a0c  ldp x22,x21,[sp, #0x40]
7101df0a10  ldp x24,x23,[sp, #0x30]
7101df0a14  add sp,sp,#0x70
7101df0a18  ret
7101df0a1c  ldr x19,[sp, #0x28]
7101df0a20  ldr x8,[x19, #0x8]
7101df0a24  cbz x8,0x7101df0a3c
7101df0a28  ldr x8,[x8, #0x18]
7101df0a2c  cbz x8,0x7101df0a3c
7101df0a30  ldrb w9,[x8, #0x58]
7101df0a34  orr w9,w9,#0x1
7101df0a38  strb w9,[x8, #0x58]
7101df0a3c  mov x21,#0xff0000000000
7101df0a40  adrp x1,0x7104319000
7101df0a44  add x1,x1,#0x3b1
7101df0a48  add x8,sp,#0x10
7101df0a4c  add x0,sp,#0x20
7101df0a50  movk x21,#0xc1ff, LSL #48
7101df0a54  bl 0x7103776640
7101df0a58  ldr w23,[x22, #0x150]
7101df0a5c  ldrb w8,[x22, #0x8]
7101df0a60  cbz w8,0x7101df0ae0
7101df0a64  ldrb w8,[x22, #0xec]
7101df0a68  cbz w8,0x7101df0a74
7101df0a6c  ldp x8,x9,[x22, #0x70]
7101df0a70  b 0x7101df0a80
7101df0a74  ldp x8,x9,[x22, #0x70]
7101df0a78  cmp x9,x8
7101df0a7c  b.eq 0x7101df0ae0
7101df0a80  sub x9,x9,x8
7101df0a84  lsr x10,x9,#0x3
7101df0a88  cmp w10,#0x1
7101df0a8c  b.lt 0x7101df0ae0
7101df0a90  mov x10,xzr
7101df0a94  sbfx x11,x9,#0x3,#0x20
7101df0a98  ldr x12,[x8, x10, LSL #0x3]
7101df0a9c  ldrb w12,[x12, #0x10]
7101df0aa0  cmp w12,#0x1
7101df0aa4  b.eq 0x7101df0ab8
7101df0aa8  add x10,x10,#0x1
7101df0aac  cmp x10,x11
7101df0ab0  b.lt 0x7101df0a98
7101df0ab4  b 0x7101df0ae0
7101df0ab8  tbnz w10,#0x1f,0x7101df0ae0
7101df0abc  asr x9,x9,#0x3
7101df0ac0  cmp x9,x10
7101df0ac4  b.ls 0x7101df0ae0
7101df0ac8  ldr x8,[x8, x10, LSL #0x3]
7101df0acc  ldr x21,[x8, #0x18]
7101df0ad0  ldrb w22,[x8, #0x20]
7101df0ad4  ldrb w8,[x8, #0x48]
7101df0ad8  sub w24,w8,#0x1
7101df0adc  b 0x7101df0ae8
7101df0ae0  mov w22,wzr
7101df0ae4  orr w24,wzr,#0xff
7101df0ae8  adrp x1,0x7104308000
7101df0aec  add x1,x1,#0x9cf
7101df0af0  mov x8,sp
7101df0af4  add x0,sp,#0x10
7101df0af8  bl 0x7103776910
7101df0afc  adrp x1,0x7104308000
7101df0b00  add x1,x1,#0x98e
7101df0b04  mov x0,sp
7101df0b08  mov w2,#0x1
7101df0b0c  mov w3,w23
7101df0b10  bl 0x710377a280
7101df0b14  ldr x0,[sp, #0x8]
7101df0b18  adrp x23,0x710523d000
7101df0b1c  add x23,x23,#0x9a8
7101df0b20  stp x23,xzr,[sp]
7101df0b24  cbz x0,0x7101df0b2c
7101df0b28  bl 0x710392eb40
7101df0b2c  and x9,x24,#0xff
7101df0b30  and w8,w24,#0xff
7101df0b34  mov w10,#0x301
7101df0b38  movk w10,#0x2, LSL #16
7101df0b3c  lsl x9,x9,#0x3
7101df0b40  lsr w9,w10,w9
7101df0b44  cmp w8,#0x3
7101df0b48  csel w1,w9,wzr,cc
7101df0b4c  mov w2,#0xffffffff
7101df0b50  add x0,sp,#0x10
7101df0b54  mov w3,wzr
7101df0b58  mov w4,wzr
7101df0b5c  bl 0x71025b12c0
7101df0b60  ldr x24,[x20]
7101df0b64  mov w2,#0x2
7101df0b68  mov x0,x21
7101df0b6c  mov w1,w22
7101df0b70  bl 0x7103238a70
7101df0b74  tst x0,#0xffffffffff
7101df0b78  str x0,[sp]
7101df0b7c  b.eq 0x7101df0b94
7101df0b80  ldr x0,[x24]
7101df0b84  ldrsw x2,[x0, #0x70]
7101df0b88  ldr w3,[x0, #0x68]
7101df0b8c  mov x1,sp
7101df0b90  bl 0x710323c4e0
7101df0b94  ldr x0,[x20]
7101df0b98  mov w3,#0x2
7101df0b9c  mov x1,x21
7101df0ba0  mov w2,w22
7101df0ba4  bl 0x710323f330
7101df0ba8  mov x21,x0
7101df0bac  adrp x1,0x7104401000
7101df0bb0  add x1,x1,#0xd32
7101df0bb4  mov x8,sp
7101df0bb8  add x0,sp,#0x10
7101df0bbc  bl 0x7103776910
7101df0bc0  ldr x20,[sp, #0x8]
7101df0bc4  mov x0,x20
7101df0bc8  mov x1,x21
7101df0bcc  bl 0x7103778b80
7101df0bd0  stp x23,xzr,[sp]
7101df0bd4  cbz x20,0x7101df0be0
7101df0bd8  mov x0,x20
7101df0bdc  bl 0x710392eb40
7101df0be0  ldr x20,[sp, #0x18]
7101df0be4  adrp x8,0x710523d000
7101df0be8  add x8,x8,#0x988
7101df0bec  stp x8,xzr,[sp, #0x10]
7101df0bf0  cbz x20,0x7101df09d4
7101df0bf4  ldr x0,[x20, #0x18]
7101df0bf8  stp x23,xzr,[x20, #0x10]
7101df0bfc  cbz x0,0x7101df0c04
7101df0c00  bl 0x710392eb40
7101df0c04  mov x0,x20
7101df0c08  bl 0x710392eb40
7101df0c0c  b 0x7101df09d4
