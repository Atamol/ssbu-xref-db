// addr:      7101c8af80
// offset:    0x1c8af80
// name:      FUN_7101c8af80
// mangled:   
// size:      952

7101c8af80  sub sp,sp,#0x90
7101c8af84  str x23,[sp, #0x50]
7101c8af88  stp x22,x21,[sp, #0x60]
7101c8af8c  stp x20,x19,[sp, #0x70]
7101c8af90  stp x29,x30,[sp, #0x80]
7101c8af94  add x29,sp,#0x80
7101c8af98  ldp x8,x20,[x0]
7101c8af9c  mov x19,x0
7101c8afa0  ldr x0,[x8, #0x8]
7101c8afa4  fmov s0,0x3f800000
7101c8afa8  adrp x1,0x710433a000
7101c8afac  add x1,x1,#0xa5c
7101c8afb0  bl 0x7103778300
7101c8afb4  ldr x8,[x20, #0x418]
7101c8afb8  ldp x9,x8,[x8, #0x180]
7101c8afbc  sub x8,x8,x9
7101c8afc0  lsr x9,x8,#0x3
7101c8afc4  cmp w9,#0x1
7101c8afc8  b.lt 0x7101c8b010
7101c8afcc  mov x22,xzr
7101c8afd0  add x21,x20,#0x438
7101c8afd4  sbfx x23,x8,#0x3,#0x20
7101c8afd8  ldr x9,[x20, #0x440]
7101c8afdc  ldr x8,[x20, #0x438]
7101c8afe0  sub x9,x9,x8
7101c8afe4  cmp x9,x22
7101c8afe8  b.ls 0x7101c8b330
7101c8afec  ldrb w1,[x8, x22, LSL ]
7101c8aff0  mov w4,#0x1
7101c8aff4  mov x0,x20
7101c8aff8  mov w2,w1
7101c8affc  mov w3,w22
7101c8b000  bl 0x7101c8b340
7101c8b004  add x22,x22,#0x1
7101c8b008  cmp x22,x23
7101c8b00c  b.lt 0x7101c8afd8
7101c8b010  adrp x8,0x710532f000
7101c8b014  ldr x8,[x8, #0x840]
7101c8b018  ldr x8,[x8, #0x8]
7101c8b01c  ldr x22,[x8, #0xb8]
7101c8b020  ldr w8,[x20, #0x208]
7101c8b024  mov w21,#0x9dc5
7101c8b028  movk w21,#0x811c, LSL #16
7101c8b02c  cmp w8,#0x13
7101c8b030  b.ne 0x7101c8b0b0
7101c8b034  ldr x8,[x19]
7101c8b038  ldr x0,[x8, #0x8]
7101c8b03c  fmov s0,0x3f800000
7101c8b040  adrp x1,0x710433a000
7101c8b044  add x1,x1,#0x6a9
7101c8b048  bl 0x7103778300
7101c8b04c  mov x9,#0x6e6d
7101c8b050  movk x9,#0x5f75, LSL #16
7101c8b054  mov x8,#0xd00000000
7101c8b058  ldr x0,[x22, #0x80]!
7101c8b05c  movk x9,#0x6f66, LSL #32
7101c8b060  movk x9,#0x746f, LSL #48
7101c8b064  stp x8,x9,[sp, #0x8]
7101c8b068  mov w8,#0x7265
7101c8b06c  movk w8,#0x6f5f, LSL #16
7101c8b070  str w8,[sp, #0x18]
7101c8b074  mov w8,#0x6b
7101c8b078  mov w9,#0x6d
7101c8b07c  strh w8,[sp, #0x1c]
7101c8b080  mov w8,#0x9
7101c8b084  mov w10,#0x89
7101c8b088  add x11,sp,#0x8
7101c8b08c  mov w12,w21
7101c8b090  mul w12,w12,w10
7101c8b094  and w9,w9,#0xff
7101c8b098  eor w12,w12,w9
7101c8b09c  ldrb w9,[x11, x8, LSL ]
7101c8b0a0  add x8,x8,#0x1
7101c8b0a4  cbnz w9,0x7101c8b090
7101c8b0a8  str w12,[sp, #0x8]
7101c8b0ac  b 0x7101c8b110
7101c8b0b0  mov x10,#0x6e6d
7101c8b0b4  movk x10,#0x5f75, LSL #16
7101c8b0b8  mov x11,#0x7265
7101c8b0bc  movk x11,#0x6e5f, LSL #16
7101c8b0c0  orr x8,xzr,#0xf00000000
7101c8b0c4  movk x10,#0x6f66, LSL #32
7101c8b0c8  movk x10,#0x746f, LSL #48
7101c8b0cc  stp x8,x10,[sp, #0x8]
7101c8b0d0  movk x11,#0x7865, LSL #32
7101c8b0d4  movk x11,#0x74, LSL #48
7101c8b0d8  str x11,[sp, #0x18]
7101c8b0dc  mov w9,#0x6d
7101c8b0e0  mov w8,#0x9
7101c8b0e4  mov w10,#0x89
7101c8b0e8  add x11,sp,#0x8
7101c8b0ec  mov w12,w21
7101c8b0f0  mul w12,w12,w10
7101c8b0f4  and w9,w9,#0xff
7101c8b0f8  eor w12,w12,w9
7101c8b0fc  ldrb w9,[x11, x8, LSL ]
7101c8b100  add x8,x8,#0x1
7101c8b104  cbnz w9,0x7101c8b0f0
7101c8b108  str w12,[sp, #0x8]
7101c8b10c  ldr x0,[x22, #0x80]!
7101c8b110  mov w1,#0x5
7101c8b114  add x2,sp,#0x8
7101c8b118  bl 0x7101af6200
7101c8b11c  ldr x23,[x22]
7101c8b120  ldr x0,[x23, #0x2268]
7101c8b124  bl 0x710376b960
7101c8b128  ldr x0,[x23, #0x2268]
7101c8b12c  ldr x8,[x0]
7101c8b130  ldr x8,[x8, #0x70]
7101c8b134  mov w1,wzr
7101c8b138  blr x8
7101c8b13c  ldr w8,[x23, #0x11b0]
7101c8b140  cmp w8,#0x5
7101c8b144  b.ne 0x7101c8b15c
7101c8b148  mov w8,#0x2258
7101c8b14c  ldrb w8,[x23, x8, LSL ]
7101c8b150  cmp w8,#0x1
7101c8b154  b.ne 0x7101c8b164
7101c8b158  b 0x7101c8b1c0
7101c8b15c  mov w8,#0x5
7101c8b160  str w8,[x23, #0x11b0]
7101c8b164  mov w8,#0x225a
7101c8b168  add x8,x23,x8
7101c8b16c  ldrb w9,[x8]
7101c8b170  cmp w9,#0xff
7101c8b174  b.ne 0x7101c8b17c
7101c8b178  strb wzr,[x8]
7101c8b17c  ldr w8,[x23, #0xa8]
7101c8b180  cmp w8,#0x1
7101c8b184  b.ne 0x7101c8b1c0
7101c8b188  mov x8,#0x1
7101c8b18c  movk x8,#0x2, LSL #32
7101c8b190  str wzr,[x23, #0xa0]
7101c8b194  stp xzr,xzr,[x23, #0x8]
7101c8b198  strb wzr,[x23, #0xb4]
7101c8b19c  str x8,[x23, #0x58]
7101c8b1a0  orr x8,xzr,#-0x100000000
7101c8b1a4  stur x8,[x23, #0xac]
7101c8b1a8  orr x8,xzr,#-0xffffffff
7101c8b1ac  stur x8,[x23, #0xa4]
7101c8b1b0  stp xzr,xzr,[x23, #0x90]
7101c8b1b4  stp xzr,xzr,[x23, #0x80]
7101c8b1b8  stp xzr,xzr,[x23, #0x70]
7101c8b1bc  stp xzr,xzr,[x23, #0x60]
7101c8b1c0  ldr w8,[x20, #0x208]
7101c8b1c4  cmp w8,#0x13
7101c8b1c8  b.ne 0x7101c8b268
7101c8b1cc  mov x8,#0x2700000000
7101c8b1d0  str x8,[sp, #0x8]
7101c8b1d4  mov x8,#0x6e6d
7101c8b1d8  movk x8,#0x5f75, LSL #16
7101c8b1dc  mov x9,#0x656e
7101c8b1e0  movk x9,#0x725f, LSL #16
7101c8b1e4  movk x8,#0x6e6f, LSL #32
7101c8b1e8  movk x8,#0x696c, LSL #48
7101c8b1ec  movk x9,#0x6f6f, LSL #32
7101c8b1f0  movk x9,#0x5f6d, LSL #48
7101c8b1f4  stp x8,x9,[sp, #0x10]
7101c8b1f8  mov w8,#0x6573
7101c8b1fc  strh w8,[sp, #0x20]
7101c8b200  mov x8,#0x7261
7101c8b204  movk x8,#0x6863, LSL #16
7101c8b208  movk x8,#0x725f, LSL #32
7101c8b20c  movk x8,#0x6f6f, LSL #48
7101c8b210  mov x11,#0x635f
7101c8b214  movk x11,#0x6168, LSL #16
7101c8b218  stur x8,[sp, #0x22]
7101c8b21c  mov w8,#0x5f6d
7101c8b220  movk w8,#0x7572, LSL #16
7101c8b224  stur w8,[sp, #0x2a]
7101c8b228  mov w10,#0x656c
7101c8b22c  strh w10,[sp, #0x2e]
7101c8b230  movk x11,#0x676e, LSL #32
7101c8b234  movk x11,#0x65, LSL #48
7101c8b238  str x11,[sp, #0x30]
7101c8b23c  mov w9,#0x6d
7101c8b240  mov w8,#0x9
7101c8b244  mov w10,#0x89
7101c8b248  add x11,sp,#0x8
7101c8b24c  mul w12,w21,w10
7101c8b250  and w9,w9,#0xff
7101c8b254  eor w21,w12,w9
7101c8b258  ldrb w9,[x11, x8, LSL ]
7101c8b25c  add x8,x8,#0x1
7101c8b260  cbnz w9,0x7101c8b24c
7101c8b264  b 0x7101c8b2e4
7101c8b268  orr x8,xzr,#0x1c00000000
7101c8b26c  str x8,[sp, #0x8]
7101c8b270  mov x8,#0x6e6d
7101c8b274  movk x8,#0x5f75, LSL #16
7101c8b278  mov x9,#0x656e
7101c8b27c  movk x9,#0x725f, LSL #16
7101c8b280  movk x8,#0x6e6f, LSL #32
7101c8b284  movk x8,#0x696c, LSL #48
7101c8b288  strb wzr,[sp, #0x2c]
7101c8b28c  movk x9,#0x6f6f, LSL #32
7101c8b290  movk x9,#0x5f6d, LSL #48
7101c8b294  mov w10,#0x89
7101c8b298  stp x8,x9,[sp, #0x10]
7101c8b29c  mov w8,#0x7263
7101c8b2a0  strh w8,[sp, #0x20]
7101c8b2a4  mov x8,#0x6165
7101c8b2a8  movk x8,#0x6574, LSL #16
7101c8b2ac  movk x8,#0x745f, LSL #32
7101c8b2b0  movk x8,#0x7469, LSL #48
7101c8b2b4  stur x8,[sp, #0x22]
7101c8b2b8  mov w8,#0x656c
7101c8b2bc  mov w9,#0x6d
7101c8b2c0  strh w8,[sp, #0x2a]
7101c8b2c4  mov w8,#0x9
7101c8b2c8  add x11,sp,#0x8
7101c8b2cc  mul w12,w21,w10
7101c8b2d0  and w9,w9,#0xff
7101c8b2d4  eor w21,w12,w9
7101c8b2d8  ldrb w9,[x11, x8, LSL ]
7101c8b2dc  add x8,x8,#0x1
7101c8b2e0  cbnz w9,0x7101c8b2cc
7101c8b2e4  str w21,[sp, #0x8]
7101c8b2e8  ldr x0,[x22]
7101c8b2ec  add x1,sp,#0x8
7101c8b2f0  bl 0x7101af90b0
7101c8b2f4  ldr x8,[x19]
7101c8b2f8  ldr x8,[x8, #0x8]
7101c8b2fc  ldr x8,[x8, #0x8]
7101c8b300  cbz x8,0x7101c8b318
7101c8b304  ldr x8,[x8, #0x18]
7101c8b308  cbz x8,0x7101c8b318
7101c8b30c  ldrb w9,[x8, #0x58]
7101c8b310  orr w9,w9,#0x1
7101c8b314  strb w9,[x8, #0x58]
7101c8b318  ldp x29,x30,[sp, #0x80]
7101c8b31c  ldr x23,[sp, #0x50]
7101c8b320  ldp x20,x19,[sp, #0x70]
7101c8b324  ldp x22,x21,[sp, #0x60]
7101c8b328  add sp,sp,#0x90
7101c8b32c  ret
7101c8b330  mov x0,x21
7101c8b334  bl 0x71039c1330
