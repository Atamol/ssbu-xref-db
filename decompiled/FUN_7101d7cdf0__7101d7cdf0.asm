// addr:      7101d7cdf0
// offset:    0x1d7cdf0
// name:      FUN_7101d7cdf0
// mangled:   
// size:      916

7101d7cdf0  sub sp,sp,#0xa0
7101d7cdf4  str x27,[sp, #0x40]
7101d7cdf8  stp x26,x25,[sp, #0x50]
7101d7cdfc  stp x24,x23,[sp, #0x60]
7101d7ce00  stp x22,x21,[sp, #0x70]
7101d7ce04  stp x20,x19,[sp, #0x80]
7101d7ce08  stp x29,x30,[sp, #0x90]
7101d7ce0c  add x29,sp,#0x90
7101d7ce10  mov x22,x0
7101d7ce14  ldr x0,[x0, #0x10]
7101d7ce18  mov x9,#0x8ba3
7101d7ce1c  movk x9,#0xba2e, LSL #16
7101d7ce20  movk x9,#0xa2e8, LSL #32
7101d7ce24  movk x9,#0x2e8b, LSL #48
7101d7ce28  ldr x25,[x0, #0x18]!
7101d7ce2c  ldr x8,[x0, #0x8]
7101d7ce30  sub x8,x8,x25
7101d7ce34  asr x8,x8,#0x3
7101d7ce38  mul x8,x8,x9
7101d7ce3c  mov w21,w1
7101d7ce40  sxtw x26,w21
7101d7ce44  cmp x8,x26
7101d7ce48  b.ls 0x7101d7d180
7101d7ce4c  mov w8,#0x58
7101d7ce50  madd x8,x26,x8,x25
7101d7ce54  mov x19,x2
7101d7ce58  ldp x9,x8,[x8, #0x38]
7101d7ce5c  sub x8,x8,x9
7101d7ce60  lsr x20,x8,#0x3
7101d7ce64  ldrb w8,[x22, #0x3d]
7101d7ce68  adrp x23,0x7104454000
7101d7ce6c  add x23,x23,#0xe15
7101d7ce70  cbz w8,0x7101d7ce94
7101d7ce74  ldr x8,[x22]
7101d7ce78  ldr x8,[x8, #0x90]
7101d7ce7c  mov x0,x22
7101d7ce80  blr x8
7101d7ce84  adrp x8,0x7104422000
7101d7ce88  add x8,x8,#0x68b
7101d7ce8c  cmp w0,w21
7101d7ce90  csel x23,x8,x23,eq
7101d7ce94  ldrb w8,[x22, #0x3b]
7101d7ce98  mov w24,#0xaaab
7101d7ce9c  movk w24,#0xaaaa, LSL #16
7101d7cea0  cbz w8,0x7101d7cec0
7101d7cea4  ldr x8,[x22]
7101d7cea8  ldr x8,[x8, #0x90]
7101d7ceac  mov x0,x22
7101d7ceb0  blr x8
7101d7ceb4  cmp w0,w21
7101d7ceb8  cset w27,eq
7101d7cebc  b 0x7101d7cec4
7101d7cec0  mov w27,wzr
7101d7cec4  mul w20,w20,w24
7101d7cec8  ldr x24,[x19, #0x8]
7101d7cecc  ldr x0,[x24, #0x8]
7101d7ced0  cbz x0,0x7101d7cef8
7101d7ced4  adrp x1,0x7104422000
7101d7ced8  add x1,x1,#0x68b
7101d7cedc  bl 0x71037964b0
7101d7cee0  cbz x0,0x7101d7cef8
7101d7cee4  ldr x8,[x0]
7101d7cee8  ldr x8,[x8, #0x138]
7101d7ceec  blr x8
7101d7cef0  tbz w0,#0x0,0x7101d7cf08
7101d7cef4  ldr x24,[x19, #0x8]
7101d7cef8  fmov s0,0x3f800000
7101d7cefc  mov x0,x24
7101d7cf00  mov x1,x23
7101d7cf04  bl 0x7103778300
7101d7cf08  ldrb w8,[x22, #0x3c]
7101d7cf0c  cbz w8,0x7101d7cf40
7101d7cf10  ldr x8,[x22]
7101d7cf14  ldr x8,[x8, #0x90]
7101d7cf18  mov x0,x22
7101d7cf1c  blr x8
7101d7cf20  cmp w0,w21
7101d7cf24  b.ne 0x7101d7cf78
7101d7cf28  ldr x0,[x19, #0x8]
7101d7cf2c  fmov s0,0x3f800000
7101d7cf30  adrp x1,0x710435b000
7101d7cf34  add x1,x1,#0xb1b
7101d7cf38  bl 0x7103778300
7101d7cf3c  b 0x7101d7cf7c
7101d7cf40  ldr x0,[x19, #0x8]
7101d7cf44  fmov s0,0x3f800000
7101d7cf48  adrp x8,0x710434a000
7101d7cf4c  add x8,x8,#0x70e
7101d7cf50  adrp x9,0x710433a000
7101d7cf54  add x9,x9,#0x4d1
7101d7cf58  cmp w27,#0x0
7101d7cf5c  csel x1,x9,x8,ne
7101d7cf60  bl 0x7103778300
7101d7cf64  tbz w27,#0x0,0x7101d7cf7c
7101d7cf68  mov w21,#0x1
7101d7cf6c  adrp x1,0x71042a3000
7101d7cf70  add x1,x1,#0x3c7
7101d7cf74  b 0x7101d7cf88
7101d7cf78  cbnz w27,0x7101d7cf68
7101d7cf7c  mov w21,wzr
7101d7cf80  adrp x1,0x71043f0000
7101d7cf84  add x1,x1,#0xd37
7101d7cf88  add x8,sp,#0x30
7101d7cf8c  mov x0,x19
7101d7cf90  bl 0x7103776910
7101d7cf94  mov w8,#0x58
7101d7cf98  madd x8,x26,x8,x25
7101d7cf9c  add x3,x8,#0x8
7101d7cfa0  adrp x1,0x710425f000
7101d7cfa4  add x1,x1,#0x81e
7101d7cfa8  add x0,sp,#0x30
7101d7cfac  mov w2,#0x1
7101d7cfb0  bl 0x710377a280
7101d7cfb4  adrp x8,0x71042e7000
7101d7cfb8  add x8,x8,#0x5e6
7101d7cfbc  adrp x9,0x71043be000
7101d7cfc0  add x9,x9,#0x9c4
7101d7cfc4  cmp w21,#0x0
7101d7cfc8  csel x1,x9,x8,ne
7101d7cfcc  add x8,sp,#0x20
7101d7cfd0  mov x0,x19
7101d7cfd4  bl 0x7103776640
7101d7cfd8  adrp x1,0x7104338000
7101d7cfdc  add x1,x1,#0xd31
7101d7cfe0  add x8,sp,#0x10
7101d7cfe4  add x0,sp,#0x20
7101d7cfe8  bl 0x7103776910
7101d7cfec  adrp x1,0x710437c000
7101d7cff0  add x1,x1,#0x961
7101d7cff4  add x0,sp,#0x10
7101d7cff8  mov w2,#0x1
7101d7cffc  mov w3,w20
7101d7d000  bl 0x710377a280
7101d7d004  cmp w20,#0x1
7101d7d008  b.lt 0x7101d7d0e4
7101d7d00c  mov w8,#0x58
7101d7d010  madd x8,x26,x8,x25
7101d7d014  ldr w8,[x8, #0x50]
7101d7d018  mov w9,#0x8889
7101d7d01c  movk w9,#0x8888, LSL #16
7101d7d020  mul x10,x8,x9
7101d7d024  lsr x10,x10,#0x25
7101d7d028  mul x9,x10,x9
7101d7d02c  mov w11,#0xb3c5
7101d7d030  movk w11,#0x91a2, LSL #16
7101d7d034  mul x11,x8,x11
7101d7d038  lsr x11,x11,#0x2b
7101d7d03c  lsr x9,x9,#0x25
7101d7d040  orr w12,wzr,#0x3c
7101d7d044  msub w9,w9,w12,w10
7101d7d048  mov w12,#0xffffffc4
7101d7d04c  madd w8,w10,w12,w8
7101d7d050  mov w12,#0x3e8
7101d7d054  mov w10,#0x4240
7101d7d058  movk w10,#0xf, LSL #16
7101d7d05c  mul w9,w9,w12
7101d7d060  mov w12,#0x3e7
7101d7d064  madd x9,x11,x10,x9
7101d7d068  sxtw x8,w8
7101d7d06c  cmp x8,#0x3e7
7101d7d070  adrp x10,0x71042a3000
7101d7d074  add x10,x10,#0x3e0
7101d7d078  adrp x11,0x710436c000
7101d7d07c  add x11,x11,#0x778
7101d7d080  csel x8,x8,x12,lt
7101d7d084  cmp w21,#0x0
7101d7d088  csel x1,x11,x10,ne
7101d7d08c  add x20,x9,x8
7101d7d090  mov x8,sp
7101d7d094  mov x0,x19
7101d7d098  bl 0x7103776910
7101d7d09c  adrp x1,0x71043ad000
7101d7d0a0  add x1,x1,#0xb78
7101d7d0a4  mov x0,sp
7101d7d0a8  mov w2,#0x1
7101d7d0ac  mov x3,x20
7101d7d0b0  bl 0x710377a280
7101d7d0b4  ldr x0,[x19, #0x8]
7101d7d0b8  fmov s0,0x3f800000
7101d7d0bc  adrp x1,0x71042d6000
7101d7d0c0  add x1,x1,#0x642
7101d7d0c4  bl 0x7103778300
7101d7d0c8  ldr x0,[sp, #0x8]
7101d7d0cc  adrp x8,0x710523d000
7101d7d0d0  add x8,x8,#0x9a8
7101d7d0d4  stp x8,xzr,[sp]
7101d7d0d8  cbz x0,0x7101d7d0f8
7101d7d0dc  bl 0x710392eb40
7101d7d0e0  b 0x7101d7d0f8
7101d7d0e4  ldr x0,[x19, #0x8]
7101d7d0e8  fmov s0,0x3f800000
7101d7d0ec  adrp x1,0x71043ad000
7101d7d0f0  add x1,x1,#0xb95
7101d7d0f4  bl 0x7103778300
7101d7d0f8  ldr x0,[x19, #0x8]
7101d7d0fc  fmov s0,0x3f800000
7101d7d100  adrp x1,0x7104308000
7101d7d104  add x1,x1,#0x81f
7101d7d108  bl 0x7103778300
7101d7d10c  ldr x0,[sp, #0x18]
7101d7d110  adrp x20,0x710523d000
7101d7d114  add x20,x20,#0x9a8
7101d7d118  stp x20,xzr,[sp, #0x10]
7101d7d11c  cbz x0,0x7101d7d124
7101d7d120  bl 0x710392eb40
7101d7d124  ldr x19,[sp, #0x28]
7101d7d128  adrp x8,0x710523d000
7101d7d12c  add x8,x8,#0x988
7101d7d130  stp x8,xzr,[sp, #0x20]
7101d7d134  cbz x19,0x7101d7d150
7101d7d138  ldr x0,[x19, #0x18]
7101d7d13c  stp x20,xzr,[x19, #0x10]
7101d7d140  cbz x0,0x7101d7d148
7101d7d144  bl 0x710392eb40
7101d7d148  mov x0,x19
7101d7d14c  bl 0x710392eb40
7101d7d150  ldr x0,[sp, #0x38]
7101d7d154  stp x20,xzr,[sp, #0x30]
7101d7d158  cbz x0,0x7101d7d160
7101d7d15c  bl 0x710392eb40
7101d7d160  ldp x29,x30,[sp, #0x90]
7101d7d164  ldr x27,[sp, #0x40]
7101d7d168  ldp x20,x19,[sp, #0x80]
7101d7d16c  ldp x22,x21,[sp, #0x70]
7101d7d170  ldp x24,x23,[sp, #0x60]
7101d7d174  ldp x26,x25,[sp, #0x50]
7101d7d178  add sp,sp,#0xa0
7101d7d17c  ret
7101d7d180  bl 0x71039c1330
