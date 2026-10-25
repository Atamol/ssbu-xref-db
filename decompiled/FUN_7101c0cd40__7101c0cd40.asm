// addr:      7101c0cd40
// offset:    0x1c0cd40
// name:      FUN_7101c0cd40
// mangled:   
// size:      6860

7101c0cd40  stp x28,x27,[sp, #-0x60]!
7101c0cd44  stp x26,x25,[sp, #0x10]
7101c0cd48  stp x24,x23,[sp, #0x20]
7101c0cd4c  stp x22,x21,[sp, #0x30]
7101c0cd50  stp x20,x19,[sp, #0x40]
7101c0cd54  stp x29,x30,[sp, #0x50]
7101c0cd58  add x29,sp,#0x50
7101c0cd5c  sub sp,sp,#0x5f0
7101c0cd60  ldr w8,[x0, #0x144]
7101c0cd64  mov x19,x0
7101c0cd68  cbz w8,0x7101c0cd78
7101c0cd6c  ldr w8,[x19, #0x714]
7101c0cd70  cbnz w8,0x7101c0da58
7101c0cd74  b 0x7101c0cda8
7101c0cd78  ldr x8,[x19, #0x6a8]
7101c0cd7c  ldr x8,[x8]
7101c0cd80  ldr x0,[x8]
7101c0cd84  mov w1,#0x1
7101c0cd88  bl 0x71037760f0
7101c0cd8c  ldr x0,[x19, #0x6b8]
7101c0cd90  ldr x8,[x0]
7101c0cd94  ldr x8,[x8, #0x60]
7101c0cd98  mov w1,#0x1
7101c0cd9c  blr x8
7101c0cda0  ldr w8,[x19, #0x714]
7101c0cda4  cbnz w8,0x7101c0da58
7101c0cda8  ldr x8,[x19, #0x6b8]
7101c0cdac  ldrb w8,[x8, #0x316]
7101c0cdb0  cbz w8,0x7101c0ce4c
7101c0cdb4  ldr x8,[x19, #0x640]
7101c0cdb8  ldr x9,[x19, #0x648]
7101c0cdbc  cmp x9,x8
7101c0cdc0  b.eq 0x7101c0ce14
7101c0cdc4  ldrb w10,[x8]
7101c0cdc8  cmp w10,#0x1a
7101c0cdcc  mov x10,x8
7101c0cdd0  b.eq 0x7101c0cdf0
7101c0cdd4  add x10,x8,#0x1
7101c0cdd8  cmp x9,x10
7101c0cddc  b.eq 0x7101c0ce14
7101c0cde0  ldrb w11,[x10], #0x1
7101c0cde4  cmp w11,#0x1a
7101c0cde8  b.ne 0x7101c0cdd8
7101c0cdec  sub x10,x10,#0x1
7101c0cdf0  cmp x10,x9
7101c0cdf4  b.eq 0x7101c0ce14
7101c0cdf8  sub w1,w10,w8
7101c0cdfc  cmn w1,#0x1
7101c0ce00  b.eq 0x7101c0ce14
7101c0ce04  add x0,x19,#0x6b8
7101c0ce08  mov w2,wzr
7101c0ce0c  bl 0x7103783da0
7101c0ce10  b 0x7101c0ce4c
7101c0ce14  ldr x8,[x19, #0x6a0]
7101c0ce18  ldr x20,[x8, #0x80]
7101c0ce1c  ldrb w8,[x20, #0xc9]
7101c0ce20  mov w9,#0x2260
7101c0ce24  add x0,x20,x9
7101c0ce28  cbz w8,0x7101c0ce34
7101c0ce2c  mov w1,wzr
7101c0ce30  b 0x7101c0ce38
7101c0ce34  mov w1,#0x4
7101c0ce38  mov w2,wzr
7101c0ce3c  bl 0x7103771be0
7101c0ce40  ldr x8,[x20, #0x2260]
7101c0ce44  ldr w8,[x8, #0x25c]
7101c0ce48  str w8,[x20, #0x2270]
7101c0ce4c  ldr x8,[x19, #0x6a0]
7101c0ce50  ldr x8,[x8, #0x80]
7101c0ce54  ldr w8,[x8, #0x2270]
7101c0ce58  cbz w8,0x7101c0cea4
7101c0ce5c  sub w8,w8,#0x1
7101c0ce60  cmp w8,#0x1
7101c0ce64  b.hi 0x7101c0cf2c
7101c0ce68  mov w1,#0x1
7101c0ce6c  mov x0,x19
7101c0ce70  bl 0x7101c10b80
7101c0ce74  adrp x8,0x710532f000
7101c0ce78  ldr x8,[x8, #0x8d0]
7101c0ce7c  ldr x0,[x8, #0x8]
7101c0ce80  ldp x8,x9,[x0, #0x40]
7101c0ce84  sub x9,x9,x8
7101c0ce88  asr x9,x9,#0x3
7101c0ce8c  cmp x9,#0x3
7101c0ce90  b.cc 0x7101c0cfd8
7101c0ce94  ldr x19,[x8, #0x10]
7101c0ce98  ldrb w8,[x0, #0x191]
7101c0ce9c  cbnz w8,0x7101c0d054
7101c0cea0  b 0x7101c0cfe4
7101c0cea4  ldrb w8,[x19, #0x732]
7101c0cea8  cbz w8,0x7101c0d08c
7101c0ceac  adrp x8,0x7105314000
7101c0ceb0  add x8,x8,#0x4d8
7101c0ceb4  ldarb w8,[x8]
7101c0ceb8  tbz w8,#0x0,0x7101c0e6c0
7101c0cebc  adrp x8,0x7105305000
7101c0cec0  ldr w8,[x8, #0xf0]
7101c0cec4  mov w9,#0x300
7101c0cec8  movk w9,#0x203, LSL #16
7101c0cecc  cmp w8,w9
7101c0ced0  b.eq 0x7101c0d4d8
7101c0ced4  adrp x8,0x7105305000
7101c0ced8  ldrb w8,[x8, #0xf4]
7101c0cedc  cbz w8,0x7101c0d108
7101c0cee0  adrp x8,0x71052c4000
7101c0cee4  ldr x8,[x8, #0xc58]
7101c0cee8  ldr x8,[x8, #0x8]
7101c0ceec  ldr x8,[x8, #0x88]
7101c0cef0  mov w9,#0x9ff8
7101c0cef4  ldr x1,[x8, x9, LSL #0x0]
7101c0cef8  cbz x1,0x7101c0d108
7101c0cefc  mov w9,#0xa010
7101c0cf00  add x0,x8,x9
7101c0cf04  bl 0x71016f6340
7101c0cf08  mvn w8,w0
7101c0cf0c  tst w8,#0xff
7101c0cf10  b.eq 0x7101c0d108
7101c0cf14  ldrsw x8,[x19, #0x13c]
7101c0cf18  cmp w8,#0x13
7101c0cf1c  b.cs 0x7101c0e800
7101c0cf20  add x8,x19,x8, LSL #0x2
7101c0cf24  orr w9,wzr,#0x7
7101c0cf28  b 0x7101c0d4ec
7101c0cf2c  ldr x9,[x19, #0x6b8]
7101c0cf30  ldr w8,[x9, #0x2b4]
7101c0cf34  cmn w8,#0x1
7101c0cf38  b.eq 0x7101c0d0e4
7101c0cf3c  ldr x11,[x19, #0x648]
7101c0cf40  ldr x10,[x19, #0x640]
7101c0cf44  sxtw x9,w8
7101c0cf48  sub x11,x11,x10
7101c0cf4c  cmp x11,x9
7101c0cf50  b.ls 0x7101c0e804
7101c0cf54  ldrb w20,[x10, x9, LSL ]
7101c0cf58  ldr w9,[x19, #0x6c0]
7101c0cf5c  cmp w9,w8
7101c0cf60  b.eq 0x7101c0cf88
7101c0cf64  mov x0,x19
7101c0cf68  mov w1,w20
7101c0cf6c  str w8,[x19, #0x6c0]
7101c0cf70  bl 0x7101c10630
7101c0cf74  mov w8,#0x1
7101c0cf78  mov w1,#0x1
7101c0cf7c  mov x0,x19
7101c0cf80  strb w8,[x19, #0x6c4]
7101c0cf84  bl 0x7101c0fbb0
7101c0cf88  sub w8,w20,#0x19
7101c0cf8c  add x27,sp,#0x90
7101c0cf90  cmp w8,#0x2
7101c0cf94  b.cc 0x7101c0d114
7101c0cf98  cmp w20,#0xc
7101c0cf9c  b.eq 0x7101c0d608
7101c0cfa0  cmp w20,#0xd
7101c0cfa4  b.ne 0x7101c0d6f0
7101c0cfa8  adrp x8,0x710532f000
7101c0cfac  ldr x8,[x8, #0x8d0]
7101c0cfb0  ldr x0,[x8, #0x8]
7101c0cfb4  ldp x8,x9,[x0, #0x40]
7101c0cfb8  sub x9,x9,x8
7101c0cfbc  asr x9,x9,#0x3
7101c0cfc0  cmp x9,#0x3
7101c0cfc4  b.cc 0x7101c0d8cc
7101c0cfc8  ldr x20,[x8, #0x10]
7101c0cfcc  ldrb w8,[x0, #0x191]
7101c0cfd0  cbnz w8,0x7101c0d948
7101c0cfd4  b 0x7101c0d8d8
7101c0cfd8  mov x19,xzr
7101c0cfdc  ldrb w8,[x0, #0x191]
7101c0cfe0  cbnz w8,0x7101c0d054
7101c0cfe4  mov w2,#0x4
7101c0cfe8  mov x1,x19
7101c0cfec  bl 0x7103313f20
7101c0cff0  tbz w0,#0x0,0x7101c0d054
7101c0cff4  add x0,sp,#0x10
7101c0cff8  mov x1,x19
7101c0cffc  bl 0x71024076d0
7101c0d000  ldr x8,[sp, #0x20]
7101c0d004  adrp x9,0x7104f73000
7101c0d008  add x9,x9,#0xd50
7101c0d00c  str x9,[sp, #0x18]
7101c0d010  cbz x8,0x7101c0d080
7101c0d014  adrp x8,0x7106dd5000
7101c0d018  ldrb w8,[x8, #0x3a8]
7101c0d01c  cmp w8,#0x1
7101c0d020  b.ne 0x7101c0d080
7101c0d024  adrp x9,0x7106dd5000
7101c0d028  ldr w8,[sp, #0x28]
7101c0d02c  ldr w9,[x9, #0x3ac]
7101c0d030  cmp w8,w9
7101c0d034  b.ne 0x7101c0d080
7101c0d038  ldr x8,[sp, #0x20]
7101c0d03c  ldr wzr,[x8, #0x38]!
7101c0d040  ldaxr w9,[x8]
7101c0d044  sub w9,w9,#0x1
7101c0d048  stlxr w10,w9,[x8]
7101c0d04c  cbnz w10,0x7101c0d040
7101c0d050  b 0x7101c0d080
7101c0d054  mov x8,#0x650000000000
7101c0d058  movk x8,#0x87, LSL #48
7101c0d05c  strb wzr,[sp, #0x30]
7101c0d060  stp xzr,x8,[sp, #0x20]
7101c0d064  mov x8,#-0x1
7101c0d068  stp x8,xzr,[sp, #0x38]
7101c0d06c  adrp x8,0x7104f73000
7101c0d070  add x8,x8,#0xd50
7101c0d074  str wzr,[sp, #0x10]
7101c0d078  str xzr,[sp, #0x48]
7101c0d07c  str x8,[sp, #0x18]
7101c0d080  str xzr,[sp, #0x20]
7101c0d084  strb wzr,[sp, #0x30]
7101c0d088  b 0x7101c0da58
7101c0d08c  add x8,x19,#0x15c
7101c0d090  ldr x8,[x8]
7101c0d094  ldr w9,[x19, #0x164]
7101c0d098  mov x10,xzr
7101c0d09c  stp w9,wzr,[sp, #0x98]
7101c0d0a0  str x8,[sp, #0x90]
7101c0d0a4  add x8,sp,#0x90
7101c0d0a8  b 0x7101c0d0b4
7101c0d0ac  add x10,x10,#0x2
7101c0d0b0  strb w9,[x11, #0x15]
7101c0d0b4  add x9,x19,x10
7101c0d0b8  ldrb w12,[x9, #0x170]
7101c0d0bc  cbz w12,0x7101c0d28c
7101c0d0c0  add w13,w10,#0x1
7101c0d0c4  add x11,x8,x10
7101c0d0c8  cmp w13,#0x3f
7101c0d0cc  strb w12,[x11, #0x14]
7101c0d0d0  b.cs 0x7101c0d288
7101c0d0d4  ldrb w9,[x9, #0x171]
7101c0d0d8  cbnz w9,0x7101c0d0ac
7101c0d0dc  add x10,x10,#0x1
7101c0d0e0  b 0x7101c0d28c
7101c0d0e4  ldr x8,[x19, #0x6c8]
7101c0d0e8  ldr w20,[x8, #0x25c]
7101c0d0ec  cmn w20,#0x1
7101c0d0f0  b.eq 0x7101c0d5e0
7101c0d0f4  cmp w20,#0x1
7101c0d0f8  b.eq 0x7101c0d7a0
7101c0d0fc  cbnz w20,0x7101c0da58
7101c0d100  mov w23,#0xffffffff
7101c0d104  b 0x7101c0d7a4
7101c0d108  mov w8,#0x2
7101c0d10c  str w8,[x19, #0x714]
7101c0d110  b 0x7101c0d4fc
7101c0d114  adrp x8,0x710532f000
7101c0d118  ldr x8,[x8, #0x8d0]
7101c0d11c  ldr x0,[x8, #0x8]
7101c0d120  ldrb w8,[x0, #0x191]
7101c0d124  cbnz w8,0x7101c0d1a4
7101c0d128  mov x21,#0x70e6
7101c0d12c  movk x21,#0x6a20, LSL #16
7101c0d130  movk x21,#0x10, LSL #32
7101c0d134  mov w2,#0x4
7101c0d138  mov x1,x21
7101c0d13c  bl 0x7103313f20
7101c0d140  tbz w0,#0x0,0x7101c0d1a4
7101c0d144  sub x0,x29,#0xa8
7101c0d148  mov x1,x21
7101c0d14c  bl 0x71024076d0
7101c0d150  ldur x8,[x29, #-0x98]
7101c0d154  adrp x9,0x7104f73000
7101c0d158  add x9,x9,#0xd50
7101c0d15c  stur x9,[x29, #-0xa0]
7101c0d160  cbz x8,0x7101c0d1d0
7101c0d164  adrp x8,0x7106dd5000
7101c0d168  ldrb w8,[x8, #0x3a8]
7101c0d16c  cmp w8,#0x1
7101c0d170  b.ne 0x7101c0d1d0
7101c0d174  adrp x9,0x7106dd5000
7101c0d178  ldur w8,[x29, #-0x90]
7101c0d17c  ldr w9,[x9, #0x3ac]
7101c0d180  cmp w8,w9
7101c0d184  b.ne 0x7101c0d1d0
7101c0d188  ldur x8,[x29, #-0x98]
7101c0d18c  ldr wzr,[x8, #0x38]!
7101c0d190  ldaxr w9,[x8]
7101c0d194  sub w9,w9,#0x1
7101c0d198  stlxr w10,w9,[x8]
7101c0d19c  cbnz w10,0x7101c0d190
7101c0d1a0  b 0x7101c0d1d0
7101c0d1a4  mov x8,#0x650000000000
7101c0d1a8  movk x8,#0x87, LSL #48
7101c0d1ac  sturb wzr,[x29, #-0x88]
7101c0d1b0  stp xzr,x8,[x29, #-0x98]
7101c0d1b4  mov x8,#-0x1
7101c0d1b8  stp x8,xzr,[x29, #-0x80]
7101c0d1bc  adrp x8,0x7104f73000
7101c0d1c0  add x8,x8,#0xd50
7101c0d1c4  stur wzr,[x29, #-0xa8]
7101c0d1c8  stur xzr,[x29, #-0x70]
7101c0d1cc  stur x8,[x29, #-0xa0]
7101c0d1d0  cmp w20,#0x19
7101c0d1d4  cset w8,eq
7101c0d1d8  stur xzr,[x29, #-0x98]
7101c0d1dc  sturb wzr,[x29, #-0x88]
7101c0d1e0  strb w8,[x19, #0x6c5]
7101c0d1e4  adrp x8,0x7105314000
7101c0d1e8  add x8,x8,#0x4d8
7101c0d1ec  ldarb w8,[x8]
7101c0d1f0  b.ne 0x7101c0d638
7101c0d1f4  tbz w8,#0x0,0x7101c0e700
7101c0d1f8  mov x10,#0x656d
7101c0d1fc  movk x10,#0x5f6c, LSL #16
7101c0d200  orr x9,xzr,#0x1f00000000
7101c0d204  movk x10,#0x7572, LSL #32
7101c0d208  movk x10,#0x656c, LSL #48
7101c0d20c  mov w11,#0x6c63
7101c0d210  movk w11,#0x736f, LSL #16
7101c0d214  stp x9,x10,[sp, #0x90]
7101c0d218  mov x9,#0x655f
7101c0d21c  movk x9,#0x6964, LSL #16
7101c0d220  movk x9,#0x5f74, LSL #32
7101c0d224  movk x9,#0x6568, LSL #48
7101c0d228  str x9,[sp, #0xa0]
7101c0d22c  mov w9,#0x706c
7101c0d230  strh w9,[sp, #0xa8]
7101c0d234  mov x9,#0x645f
7101c0d238  movk x9,#0x7465, LSL #16
7101c0d23c  movk x9,#0x6961, LSL #32
7101c0d240  movk x9,#0x5f6c, LSL #48
7101c0d244  stur x9,[x27, #0x1a]
7101c0d248  mov w12,#0x65
7101c0d24c  stur w11,[x27, #0x22]
7101c0d250  strh w12,[sp, #0xb6]
7101c0d254  mov w8,#0x9dc5
7101c0d258  movk w8,#0x811c, LSL #16
7101c0d25c  mov w10,#0x6d
7101c0d260  mov w9,#0x9
7101c0d264  mov w11,#0x89
7101c0d268  add x12,sp,#0x90
7101c0d26c  mul w8,w8,w11
7101c0d270  and w10,w10,#0xff
7101c0d274  eor w8,w8,w10
7101c0d278  ldrb w10,[x12, x9, LSL ]
7101c0d27c  add x9,x9,#0x1
7101c0d280  cbnz w10,0x7101c0d26c
7101c0d284  b 0x7101c0d6c4
7101c0d288  add w10,w10,#0x1
7101c0d28c  add x9,sp,#0x90
7101c0d290  add x11,x9,#0x14
7101c0d294  mov w8,#0x9dc5
7101c0d298  movk w8,#0x811c, LSL #16
7101c0d29c  mov w12,w8
7101c0d2a0  strb wzr,[x11, w10, UXTW ]
7101c0d2a4  str w10,[sp, #0xa0]
7101c0d2a8  ldrb w10,[sp, #0xa4]
7101c0d2ac  cbz w10,0x7101c0d2d0
7101c0d2b0  add x11,x9,#0x15
7101c0d2b4  mov w13,#0x89
7101c0d2b8  mov w12,w8
7101c0d2bc  mul w12,w12,w13
7101c0d2c0  and w10,w10,#0xff
7101c0d2c4  eor w12,w12,w10
7101c0d2c8  ldrb w10,[x11], #0x1
7101c0d2cc  cbnz w10,0x7101c0d2bc
7101c0d2d0  mov x10,xzr
7101c0d2d4  str w12,[sp, #0x9c]
7101c0d2d8  str wzr,[sp, #0xe4]
7101c0d2dc  b 0x7101c0d2e8
7101c0d2e0  add x10,x10,#0x2
7101c0d2e4  strh w11,[x12, #0x5e]
7101c0d2e8  add x11,x19,x10, LSL #0x1
7101c0d2ec  ldrh w13,[x11, #0x1b8]
7101c0d2f0  cbz w13,0x7101c0d31c
7101c0d2f4  add w14,w10,#0x1
7101c0d2f8  add x12,x9,x10, LSL #0x1
7101c0d2fc  cmp w14,#0x1ff
7101c0d300  strh w13,[x12, #0x5c]
7101c0d304  b.cs 0x7101c0d318
7101c0d308  ldrh w11,[x11, #0x1ba]
7101c0d30c  cbnz w11,0x7101c0d2e0
7101c0d310  add x10,x10,#0x1
7101c0d314  b 0x7101c0d31c
7101c0d318  add w10,w10,#0x1
7101c0d31c  add x20,sp,#0x90
7101c0d320  add x9,x20,#0x5c
7101c0d324  strh wzr,[x9, w10, UXTW #0x1]
7101c0d328  str w10,[sp, #0xe8]
7101c0d32c  ldrh w10,[sp, #0xec]
7101c0d330  cbz w10,0x7101c0d350
7101c0d334  add x9,x20,#0x5e
7101c0d338  mov w11,#0x89
7101c0d33c  mul w8,w8,w11
7101c0d340  and w10,w10,#0xffff
7101c0d344  eor w8,w8,w10
7101c0d348  ldrh w10,[x9], #0x2
7101c0d34c  cbnz w10,0x7101c0d33c
7101c0d350  str w8,[sp, #0xe4]
7101c0d354  ldr w8,[x19, #0x5c0]
7101c0d358  ldr x9,[x19, #0x5b8]
7101c0d35c  add x10,x20,#0x45c
7101c0d360  add x0,x20,#0x468
7101c0d364  add x1,x19,#0x5cc
7101c0d368  str x9,[x10]
7101c0d36c  str w8,[sp, #0x4f4]
7101c0d370  str wzr,[sp, #0x4f8]
7101c0d374  bl 0x7101696040
7101c0d378  ldr x8,[x19, #0x658]
7101c0d37c  ldr x9,[x19, #0x660]
7101c0d380  add x11,x19,#0x674
7101c0d384  ldr x10,[x19, #0x668]
7101c0d388  str x10,[sp, #0x540]
7101c0d38c  str x9,[sp, #0x538]
7101c0d390  str x8,[sp, #0x530]
7101c0d394  ldrb w24,[x19, #0x670]
7101c0d398  strb w24,[sp, #0x548]
7101c0d39c  ldr w8,[x19, #0x67c]
7101c0d3a0  ldr x9,[x11]
7101c0d3a4  add x10,x20,#0x4bc
7101c0d3a8  str x9,[x10]
7101c0d3ac  str w8,[sp, #0x554]
7101c0d3b0  ldr x8,[x19, #0x680]
7101c0d3b4  ldr x9,[x19, #0x688]
7101c0d3b8  str x9,[sp, #0x560]
7101c0d3bc  str x8,[sp, #0x558]
7101c0d3c0  ldr x8,[x19, #0x658]
7101c0d3c4  ldr x9,[x19, #0x660]
7101c0d3c8  ldr x10,[x19, #0x668]
7101c0d3cc  ldr w27,[sp, #0x54c]
7101c0d3d0  ldr w26,[sp, #0x550]
7101c0d3d4  ldr w25,[sp, #0x554]
7101c0d3d8  ldr w23,[sp, #0x558]
7101c0d3dc  ldr w22,[sp, #0x55c]
7101c0d3e0  ldr w21,[sp, #0x560]
7101c0d3e4  ldr w20,[sp, #0x564]
7101c0d3e8  add x0,x19,#0x5fc
7101c0d3ec  sub x1,x29,#0xa8
7101c0d3f0  stp x9,x10,[x29, #-0xa0]
7101c0d3f4  stur x8,[x29, #-0xa8]
7101c0d3f8  bl 0x71017abe20
7101c0d3fc  tbz w0,#0x0,0x7101c0d4d8
7101c0d400  ldrb w8,[x19, #0x614]
7101c0d404  cmp w8,w24
7101c0d408  b.ne 0x7101c0d4d8
7101c0d40c  ldr w8,[x19, #0x618]
7101c0d410  cmp w8,w27
7101c0d414  b.ne 0x7101c0d4d8
7101c0d418  ldr w8,[x19, #0x61c]
7101c0d41c  cmp w8,w26
7101c0d420  b.ne 0x7101c0d4d8
7101c0d424  ldr w8,[x19, #0x620]
7101c0d428  cmp w8,w25
7101c0d42c  b.ne 0x7101c0d4d8
7101c0d430  ldr w8,[x19, #0x624]
7101c0d434  cmp w8,w23
7101c0d438  b.ne 0x7101c0d4d8
7101c0d43c  ldr w8,[x19, #0x628]
7101c0d440  cmp w8,w22
7101c0d444  b.ne 0x7101c0d4d8
7101c0d448  ldr w8,[x19, #0x62c]
7101c0d44c  cmp w8,w21
7101c0d450  b.ne 0x7101c0d4d8
7101c0d454  ldr w8,[x19, #0x630]
7101c0d458  cmp w8,w20
7101c0d45c  b.ne 0x7101c0d4d8
7101c0d460  ldr x8,[x19, #0x690]
7101c0d464  ldrb w9,[x19, #0x634]
7101c0d468  and w10,w8,#0x1
7101c0d46c  cmp w10,w9
7101c0d470  b.ne 0x7101c0d4d8
7101c0d474  ldrb w9,[x19, #0x635]
7101c0d478  ubfx w10,w8,#0x8,#0x1
7101c0d47c  cmp w10,w9
7101c0d480  b.ne 0x7101c0d4d8
7101c0d484  ldrb w9,[x19, #0x636]
7101c0d488  ubfx w8,w8,#0x10,#0x1
7101c0d48c  cmp w8,w9
7101c0d490  b.ne 0x7101c0d4d8
7101c0d494  ldr w8,[x19, #0x698]
7101c0d498  ldrb w9,[x19, #0x63c]
7101c0d49c  and w10,w8,#0x1
7101c0d4a0  cmp w10,w9
7101c0d4a4  b.ne 0x7101c0d4d8
7101c0d4a8  ldrb w10,[x19, #0x63d]
7101c0d4ac  lsr w9,w8,#0x8
7101c0d4b0  cmp w10,w9, UXTB 
7101c0d4b4  b.ne 0x7101c0d4d8
7101c0d4b8  ldrb w9,[x19, #0x63e]
7101c0d4bc  lsr w8,w8,#0x10
7101c0d4c0  cmp w9,w8, UXTB 
7101c0d4c4  b.ne 0x7101c0d4d8
7101c0d4c8  mov w1,#0x2
7101c0d4cc  mov x0,x19
7101c0d4d0  bl 0x7101c10b80
7101c0d4d4  b 0x7101c0d4f0
7101c0d4d8  ldrsw x8,[x19, #0x13c]
7101c0d4dc  cmp w8,#0x13
7101c0d4e0  b.cs 0x7101c0e800
7101c0d4e4  add x8,x19,x8, LSL #0x2
7101c0d4e8  orr w9,wzr,#0x6
7101c0d4ec  str w9,[x8, #0xf0]
7101c0d4f0  ldr w8,[x19, #0x714]
7101c0d4f4  cmp w8,#0x2
7101c0d4f8  b.ne 0x7101c0da58
7101c0d4fc  adrp x8,0x710532f000
7101c0d500  ldr x8,[x8, #0x8d0]
7101c0d504  ldr x0,[x8, #0x8]
7101c0d508  ldp x8,x9,[x0, #0x40]
7101c0d50c  sub x9,x9,x8
7101c0d510  asr x9,x9,#0x3
7101c0d514  cmp x9,#0x4
7101c0d518  b.cc 0x7101c0d52c
7101c0d51c  ldr x19,[x8, #0x18]
7101c0d520  ldrb w8,[x0, #0x191]
7101c0d524  cbnz w8,0x7101c0d5a8
7101c0d528  b 0x7101c0d538
7101c0d52c  mov x19,xzr
7101c0d530  ldrb w8,[x0, #0x191]
7101c0d534  cbnz w8,0x7101c0d5a8
7101c0d538  mov w2,#0x4
7101c0d53c  mov x1,x19
7101c0d540  bl 0x7103313f20
7101c0d544  tbz w0,#0x0,0x7101c0d5a8
7101c0d548  add x0,sp,#0x50
7101c0d54c  mov x1,x19
7101c0d550  bl 0x71024076d0
7101c0d554  ldr x8,[sp, #0x60]
7101c0d558  adrp x9,0x7104f73000
7101c0d55c  add x9,x9,#0xd50
7101c0d560  str x9,[sp, #0x58]
7101c0d564  cbz x8,0x7101c0d5d4
7101c0d568  adrp x8,0x7106dd5000
7101c0d56c  ldrb w8,[x8, #0x3a8]
7101c0d570  cmp w8,#0x1
7101c0d574  b.ne 0x7101c0d5d4
7101c0d578  adrp x9,0x7106dd5000
7101c0d57c  ldr w8,[sp, #0x68]
7101c0d580  ldr w9,[x9, #0x3ac]
7101c0d584  cmp w8,w9
7101c0d588  b.ne 0x7101c0d5d4
7101c0d58c  ldr x8,[sp, #0x60]
7101c0d590  ldr wzr,[x8, #0x38]!
7101c0d594  ldaxr w9,[x8]
7101c0d598  sub w9,w9,#0x1
7101c0d59c  stlxr w10,w9,[x8]
7101c0d5a0  cbnz w10,0x7101c0d594
7101c0d5a4  b 0x7101c0d5d4
7101c0d5a8  mov x8,#0x650000000000
7101c0d5ac  movk x8,#0x87, LSL #48
7101c0d5b0  strb wzr,[sp, #0x70]
7101c0d5b4  stp xzr,x8,[sp, #0x60]
7101c0d5b8  mov x8,#-0x1
7101c0d5bc  stp x8,xzr,[sp, #0x78]
7101c0d5c0  adrp x8,0x7104f73000
7101c0d5c4  add x8,x8,#0xd50
7101c0d5c8  str wzr,[sp, #0x50]
7101c0d5cc  str xzr,[sp, #0x88]
7101c0d5d0  str x8,[sp, #0x58]
7101c0d5d4  str xzr,[sp, #0x60]
7101c0d5d8  strb wzr,[sp, #0x70]
7101c0d5dc  b 0x7101c0da58
7101c0d5e0  ldr w8,[x9, #0x2a4]
7101c0d5e4  ldr w10,[x19, #0x6c0]
7101c0d5e8  cmp w10,w8
7101c0d5ec  b.ne 0x7101c0d88c
7101c0d5f0  ldr x8,[x9, #0x1b8]
7101c0d5f4  cbz x8,0x7101c0db40
7101c0d5f8  ldr s0,[x8, #0x134]
7101c0d5fc  fcmp s0,#0.0
7101c0d600  cset w1,gt
7101c0d604  b 0x7101c0db44
7101c0d608  adrp x8,0x710532f000
7101c0d60c  ldr x8,[x8, #0x8d0]
7101c0d610  ldr x0,[x8, #0x8]
7101c0d614  ldp x8,x9,[x0, #0x40]
7101c0d618  sub x9,x9,x8
7101c0d61c  asr x9,x9,#0x3
7101c0d620  cmp x9,#0x3
7101c0d624  b.cc 0x7101c0d984
7101c0d628  ldr x20,[x8, #0x10]
7101c0d62c  ldrb w8,[x0, #0x191]
7101c0d630  cbnz w8,0x7101c0da00
7101c0d634  b 0x7101c0d990
7101c0d638  tbz w8,#0x0,0x7101c0e740
7101c0d63c  orr x9,xzr,#0x1e00000000
7101c0d640  str x9,[sp, #0x90]
7101c0d644  mov x9,#0x656d
7101c0d648  movk x9,#0x5f6c, LSL #16
7101c0d64c  mov x10,#0x655f
7101c0d650  movk x10,#0x6964, LSL #16
7101c0d654  movk x9,#0x7572, LSL #32
7101c0d658  movk x9,#0x656c, LSL #48
7101c0d65c  movk x10,#0x5f74, LSL #32
7101c0d660  movk x10,#0x6568, LSL #48
7101c0d664  stp x9,x10,[sp, #0x98]
7101c0d668  mov w9,#0x706c
7101c0d66c  strh w9,[sp, #0xa8]
7101c0d670  mov x9,#0x645f
7101c0d674  movk x9,#0x7465, LSL #16
7101c0d678  movk x9,#0x6961, LSL #32
7101c0d67c  movk x9,#0x5f6c, LSL #48
7101c0d680  stur x9,[x27, #0x1a]
7101c0d684  mov w9,#0x706f
7101c0d688  movk w9,#0x6e65, LSL #16
7101c0d68c  mov w8,#0x9dc5
7101c0d690  movk w8,#0x811c, LSL #16
7101c0d694  stur w9,[x27, #0x22]
7101c0d698  mov w10,#0x6d
7101c0d69c  strb wzr,[sp, #0xb6]
7101c0d6a0  mov w9,#0x9
7101c0d6a4  mov w11,#0x89
7101c0d6a8  add x12,sp,#0x90
7101c0d6ac  mul w8,w8,w11
7101c0d6b0  and w10,w10,#0xff
7101c0d6b4  eor w8,w8,w10
7101c0d6b8  ldrb w10,[x12, x9, LSL ]
7101c0d6bc  add x9,x9,#0x1
7101c0d6c0  cbnz w10,0x7101c0d6ac
7101c0d6c4  str w8,[sp, #0x90]
7101c0d6c8  ldr x8,[x19, #0x6a0]
7101c0d6cc  ldr x0,[x8, #0x80]
7101c0d6d0  add x1,sp,#0x90
7101c0d6d4  bl 0x7101af53d0
7101c0d6d8  ldrsw x8,[x19, #0x13c]
7101c0d6dc  cmp w8,#0x13
7101c0d6e0  b.cs 0x7101c0e800
7101c0d6e4  add x8,x19,x8, LSL #0x2
7101c0d6e8  mov w9,#0xb
7101c0d6ec  b 0x7101c0da54
7101c0d6f0  ldrb w8,[x19, #0x732]
7101c0d6f4  sub w9,w20,#0x1b
7101c0d6f8  cmp w9,#0x3
7101c0d6fc  b.hi 0x7101c0da78
7101c0d700  cbnz w8,0x7101c0da58
7101c0d704  ldr x28,[x19, #0x6f0]
7101c0d708  ldr w8,[x28, #0x4]
7101c0d70c  cmp w8,#0x1
7101c0d710  b.lt 0x7101c0dd4c
7101c0d714  mov w21,wzr
7101c0d718  adrp x22,0x7105314000
7101c0d71c  add x22,x22,#0x4d8
7101c0d720  adrp x25,0x71052c5000
7101c0d724  add x25,x25,#0x180
7101c0d728  adrp x24,0x7105305000
7101c0d72c  adrp x26,0x7104f17000
7101c0d730  add x26,x26,#0x0
7101c0d734  ldarb w8,[x22]
7101c0d738  tbz w8,#0x0,0x7101c0d770
7101c0d73c  ldr w0,[x24, #0xf0]
7101c0d740  ldrb w3,[x28, #0x2]
7101c0d744  mov w5,w21
7101c0d748  ldrb w4,[x28]
7101c0d74c  ldrb w2,[x28, #0x3]
7101c0d750  ldrb w1,[x28, #0x1]
7101c0d754  bl 0x7101c08ff0
7101c0d758  tbnz w0,#0x0,0x7101c0dcb8
7101c0d75c  ldr w23,[x28, #0x4]
7101c0d760  add w21,w21,#0x1
7101c0d764  cmp w21,w23
7101c0d768  b.lt 0x7101c0d734
7101c0d76c  b 0x7101c0dcc0
7101c0d770  mov x0,x22
7101c0d774  bl 0x71039c06b0
7101c0d778  cbz w0,0x7101c0d73c
7101c0d77c  bl 0x7101764000
7101c0d780  adrp x0,0x7101763000
7101c0d784  add x0,x0,#0xc40
7101c0d788  mov x1,x25
7101c0d78c  mov x2,x26
7101c0d790  bl 0x71000001c0
7101c0d794  mov x0,x22
7101c0d798  bl 0x71039c06c0
7101c0d79c  b 0x7101c0d73c
7101c0d7a0  mov w23,w20
7101c0d7a4  ldr x27,[x19, #0x6f0]
7101c0d7a8  ldr w8,[x27, #0x4]
7101c0d7ac  cmp w8,#0x2
7101c0d7b0  b.lt 0x7101c0da58
7101c0d7b4  ldr w9,[x27, #0xa8]
7101c0d7b8  adrp x21,0x7105314000
7101c0d7bc  add x21,x21,#0x4d8
7101c0d7c0  mov w22,#0x1
7101c0d7c4  mov w24,#0x2
7101c0d7c8  adrp x28,0x7105305000
7101c0d7cc  mov w26,w23
7101c0d7d0  str w9,[sp, #0xc]
7101c0d7d4  b 0x7101c0d7e8
7101c0d7d8  ldr w9,[x27, #0xa8]
7101c0d7dc  add w22,w22,#0x1
7101c0d7e0  add w24,w24,#0x1
7101c0d7e4  add w26,w26,w23
7101c0d7e8  ldrb w10,[x27, #0xa4]
7101c0d7ec  add w25,w9,w26
7101c0d7f0  cbz w10,0x7101c0d81c
7101c0d7f4  tbnz w25,#0x1f,0x7101c0d814
7101c0d7f8  cmp w8,w25
7101c0d7fc  b.gt 0x7101c0d81c
7101c0d800  sdiv w9,w25,w8
7101c0d804  msub w25,w9,w8,w25
7101c0d808  ldarb w8,[x21]
7101c0d80c  tbnz w8,#0x0,0x7101c0d824
7101c0d810  b 0x7101c0d854
7101c0d814  madd w9,w22,w23,w9
7101c0d818  add w25,w9,w8
7101c0d81c  ldarb w8,[x21]
7101c0d820  tbz w8,#0x0,0x7101c0d854
7101c0d824  ldr w0,[x28, #0xf0]
7101c0d828  ldrb w3,[x27, #0x2]
7101c0d82c  mov w5,w25
7101c0d830  ldrb w4,[x27]
7101c0d834  ldrb w2,[x27, #0x3]
7101c0d838  ldrb w1,[x27, #0x1]
7101c0d83c  bl 0x7101c08ff0
7101c0d840  tbnz w0,#0x0,0x7101c0dae8
7101c0d844  ldr w8,[x27, #0x4]
7101c0d848  cmp w24,w8
7101c0d84c  b.lt 0x7101c0d7d8
7101c0d850  b 0x7101c0da58
7101c0d854  mov x0,x21
7101c0d858  bl 0x71039c06b0
7101c0d85c  cbz w0,0x7101c0d824
7101c0d860  bl 0x7101764000
7101c0d864  adrp x0,0x7101763000
7101c0d868  add x0,x0,#0xc40
7101c0d86c  adrp x1,0x71052c5000
7101c0d870  add x1,x1,#0x180
7101c0d874  adrp x2,0x7104f17000
7101c0d878  add x2,x2,#0x0
7101c0d87c  bl 0x71000001c0
7101c0d880  mov x0,x21
7101c0d884  bl 0x71039c06c0
7101c0d888  b 0x7101c0d824
7101c0d88c  cmn w8,#0x1
7101c0d890  str w8,[x19, #0x6c0]
7101c0d894  b.eq 0x7101c0da58
7101c0d898  ldr x10,[x19, #0x648]
7101c0d89c  ldr x9,[x19, #0x640]
7101c0d8a0  sxtw x8,w8
7101c0d8a4  sub x10,x10,x9
7101c0d8a8  cmp x10,x8
7101c0d8ac  b.ls 0x7101c0e804
7101c0d8b0  ldrb w1,[x9, x8, LSL ]
7101c0d8b4  mov x0,x19
7101c0d8b8  bl 0x7101c10630
7101c0d8bc  mov w8,#0x1
7101c0d8c0  strb w8,[x19, #0x6c4]
7101c0d8c4  mov w1,#0x1
7101c0d8c8  b 0x7101c0db54
7101c0d8cc  mov x20,xzr
7101c0d8d0  ldrb w8,[x0, #0x191]
7101c0d8d4  cbnz w8,0x7101c0d948
7101c0d8d8  mov w2,#0x4
7101c0d8dc  mov x1,x20
7101c0d8e0  bl 0x7103313f20
7101c0d8e4  tbz w0,#0x0,0x7101c0d948
7101c0d8e8  add x0,sp,#0x90
7101c0d8ec  mov x1,x20
7101c0d8f0  bl 0x71024076d0
7101c0d8f4  ldr x8,[sp, #0xa0]
7101c0d8f8  adrp x9,0x7104f73000
7101c0d8fc  add x9,x9,#0xd50
7101c0d900  str x9,[sp, #0x98]
7101c0d904  cbz x8,0x7101c0d974
7101c0d908  adrp x8,0x7106dd5000
7101c0d90c  ldrb w8,[x8, #0x3a8]
7101c0d910  cmp w8,#0x1
7101c0d914  b.ne 0x7101c0d974
7101c0d918  adrp x9,0x7106dd5000
7101c0d91c  ldr w8,[sp, #0xa8]
7101c0d920  ldr w9,[x9, #0x3ac]
7101c0d924  cmp w8,w9
7101c0d928  b.ne 0x7101c0d974
7101c0d92c  ldr x8,[sp, #0xa0]
7101c0d930  ldr wzr,[x8, #0x38]!
7101c0d934  ldaxr w9,[x8]
7101c0d938  sub w9,w9,#0x1
7101c0d93c  stlxr w10,w9,[x8]
7101c0d940  cbnz w10,0x7101c0d934
7101c0d944  b 0x7101c0d974
7101c0d948  mov x8,#0x650000000000
7101c0d94c  movk x8,#0x87, LSL #48
7101c0d950  strb wzr,[sp, #0xb0]
7101c0d954  stp xzr,x8,[sp, #0xa0]
7101c0d958  mov x8,#-0x1
7101c0d95c  stp x8,xzr,[sp, #0xb8]
7101c0d960  adrp x8,0x7104f73000
7101c0d964  add x8,x8,#0xd50
7101c0d968  str wzr,[sp, #0x90]
7101c0d96c  str xzr,[sp, #0xc8]
7101c0d970  str x8,[sp, #0x98]
7101c0d974  str xzr,[sp, #0xa0]
7101c0d978  strb wzr,[sp, #0xb0]
7101c0d97c  mov w1,#0x4
7101c0d980  b 0x7101c0da38
7101c0d984  mov x20,xzr
7101c0d988  ldrb w8,[x0, #0x191]
7101c0d98c  cbnz w8,0x7101c0da00
7101c0d990  mov w2,#0x4
7101c0d994  mov x1,x20
7101c0d998  bl 0x7103313f20
7101c0d99c  tbz w0,#0x0,0x7101c0da00
7101c0d9a0  add x0,sp,#0x90
7101c0d9a4  mov x1,x20
7101c0d9a8  bl 0x71024076d0
7101c0d9ac  ldr x8,[sp, #0xa0]
7101c0d9b0  adrp x9,0x7104f73000
7101c0d9b4  add x9,x9,#0xd50
7101c0d9b8  str x9,[sp, #0x98]
7101c0d9bc  cbz x8,0x7101c0da2c
7101c0d9c0  adrp x8,0x7106dd5000
7101c0d9c4  ldrb w8,[x8, #0x3a8]
7101c0d9c8  cmp w8,#0x1
7101c0d9cc  b.ne 0x7101c0da2c
7101c0d9d0  adrp x9,0x7106dd5000
7101c0d9d4  ldr w8,[sp, #0xa8]
7101c0d9d8  ldr w9,[x9, #0x3ac]
7101c0d9dc  cmp w8,w9
7101c0d9e0  b.ne 0x7101c0da2c
7101c0d9e4  ldr x8,[sp, #0xa0]
7101c0d9e8  ldr wzr,[x8, #0x38]!
7101c0d9ec  ldaxr w9,[x8]
7101c0d9f0  sub w9,w9,#0x1
7101c0d9f4  stlxr w10,w9,[x8]
7101c0d9f8  cbnz w10,0x7101c0d9ec
7101c0d9fc  b 0x7101c0da2c
7101c0da00  mov x8,#0x650000000000
7101c0da04  movk x8,#0x87, LSL #48
7101c0da08  strb wzr,[sp, #0xb0]
7101c0da0c  stp xzr,x8,[sp, #0xa0]
7101c0da10  mov x8,#-0x1
7101c0da14  stp x8,xzr,[sp, #0xb8]
7101c0da18  adrp x8,0x7104f73000
7101c0da1c  add x8,x8,#0xd50
7101c0da20  str wzr,[sp, #0x90]
7101c0da24  str xzr,[sp, #0xc8]
7101c0da28  str x8,[sp, #0x98]
7101c0da2c  orr w1,wzr,#0x3
7101c0da30  str xzr,[sp, #0xa0]
7101c0da34  strb wzr,[sp, #0xb0]
7101c0da38  mov x0,x19
7101c0da3c  bl 0x7101c10b80
7101c0da40  ldrsw x8,[x19, #0x13c]
7101c0da44  cmp w8,#0x13
7101c0da48  b.cs 0x7101c0e800
7101c0da4c  add x8,x19,x8, LSL #0x2
7101c0da50  mov w9,#0x9
7101c0da54  str w9,[x8, #0xf0]
7101c0da58  add sp,sp,#0x5f0
7101c0da5c  ldp x29,x30,[sp, #0x50]
7101c0da60  ldp x20,x19,[sp, #0x40]
7101c0da64  ldp x22,x21,[sp, #0x30]
7101c0da68  ldp x24,x23,[sp, #0x20]
7101c0da6c  ldp x26,x25,[sp, #0x10]
7101c0da70  ldp x28,x27,[sp], #0x60
7101c0da74  ret
7101c0da78  cbnz w8,0x7101c0da58
7101c0da7c  ldr w8,[x19, #0x164]
7101c0da80  sub w8,w8,#0x1
7101c0da84  cmp w8,#0x2
7101c0da88  b.cc 0x7101c0da58
7101c0da8c  adrp x8,0x7105314000
7101c0da90  add x8,x8,#0x4d8
7101c0da94  ldarb w8,[x8]
7101c0da98  tbz w8,#0x0,0x7101c0e7c0
7101c0da9c  adrp x8,0x7105305000
7101c0daa0  ldr w8,[x8, #0xf0]
7101c0daa4  mov w9,#0x300
7101c0daa8  movk w9,#0x203, LSL #16
7101c0daac  cmp w8,w9
7101c0dab0  b.eq 0x7101c0e130
7101c0dab4  mov w9,#0x200
7101c0dab8  movk w9,#0x203, LSL #16
7101c0dabc  cmp w8,w9
7101c0dac0  b.ne 0x7101c0d704
7101c0dac4  cmp w20,#0x11
7101c0dac8  b.hi 0x7101c0d704
7101c0dacc  mov w8,#0x1
7101c0dad0  lsl w8,w8,w20
7101c0dad4  mov w9,#0x544
7101c0dad8  movk w9,#0x3, LSL #16
7101c0dadc  tst w8,w9
7101c0dae0  b.ne 0x7101c0da58
7101c0dae4  b 0x7101c0d704
7101c0dae8  ldr w8,[sp, #0xc]
7101c0daec  cmp w8,w25
7101c0daf0  b.eq 0x7101c0da58
7101c0daf4  ldrb w1,[x27]
7101c0daf8  mov x0,x19
7101c0dafc  mov w2,w25
7101c0db00  bl 0x7101c11360
7101c0db04  ldrb w1,[x27]
7101c0db08  mov x0,x19
7101c0db0c  bl 0x7101c108f0
7101c0db10  ldrb w22,[x27]
7101c0db14  ldarb w8,[x21]
7101c0db18  tbz w8,#0x0,0x7101c0e780
7101c0db1c  ldrb w10,[x19, #0x658]
7101c0db20  ldr w8,[x28, #0xf0]
7101c0db24  add x0,x19,#0x658
7101c0db28  ldrb w9,[x19, #0x659]
7101c0db2c  add x1,x19,#0x690
7101c0db30  cmp w10,#0x2
7101c0db34  b.ne 0x7101c0db78
7101c0db38  cbnz w9,0x7101c0db8c
7101c0db3c  b 0x7101c0db84
7101c0db40  mov w1,wzr
7101c0db44  ldrb w8,[x19, #0x6c4]
7101c0db48  cmp w8,w1
7101c0db4c  b.eq 0x7101c0da58
7101c0db50  strb w1,[x19, #0x6c4]
7101c0db54  mov x0,x19
7101c0db58  add sp,sp,#0x5f0
7101c0db5c  ldp x29,x30,[sp, #0x50]
7101c0db60  ldp x20,x19,[sp, #0x40]
7101c0db64  ldp x22,x21,[sp, #0x30]
7101c0db68  ldp x24,x23,[sp, #0x20]
7101c0db6c  ldp x26,x25,[sp, #0x10]
7101c0db70  ldp x28,x27,[sp], #0x60
7101c0db74  b 0x7101c0fbb0
7101c0db78  cbnz w9,0x7101c0db8c
7101c0db7c  ldrb w9,[x19, #0x693]
7101c0db80  cbz w9,0x7101c0db8c
7101c0db84  mov w21,wzr
7101c0db88  b 0x7101c0dbb0
7101c0db8c  mov w9,#0x4090000
7101c0db90  mov w21,wzr
7101c0db94  cmp w8,w9
7101c0db98  b.eq 0x7101c0dbb0
7101c0db9c  mov w9,#0x200
7101c0dba0  movk w9,#0x701, LSL #16
7101c0dba4  cmp w8,w9
7101c0dba8  b.eq 0x7101c0dbb0
7101c0dbac  mov w21,#0x1
7101c0dbb0  mov w2,w22
7101c0dbb4  bl 0x7101c043c0
7101c0dbb8  ldrb w8,[x19, #0x658]
7101c0dbbc  cmp w8,#0x1
7101c0dbc0  mov w2,w0
7101c0dbc4  add x0,sp,#0x90
7101c0dbc8  mov w1,w22
7101c0dbcc  mov w3,w21
7101c0dbd0  cset w4,eq
7101c0dbd4  bl 0x7101c0a4b0
7101c0dbd8  ldr x8,[x19, #0x6a0]
7101c0dbdc  ldr x0,[x8, #0x80]
7101c0dbe0  add x1,sp,#0x90
7101c0dbe4  bl 0x7101af53d0
7101c0dbe8  adrp x8,0x710532f000
7101c0dbec  ldr x8,[x8, #0x8d0]
7101c0dbf0  ldr x0,[x8, #0x8]
7101c0dbf4  ldrb w9,[x27, #0xa4]
7101c0dbf8  ldrb w8,[x0, #0x191]
7101c0dbfc  cbz w9,0x7101c0df34
7101c0dc00  cbnz w8,0x7101c0dc80
7101c0dc04  mov x19,#0x3153
7101c0dc08  movk x19,#0x5c74, LSL #16
7101c0dc0c  movk x19,#0x17, LSL #32
7101c0dc10  mov w2,#0x4
7101c0dc14  mov x1,x19
7101c0dc18  bl 0x7103313f20
7101c0dc1c  tbz w0,#0x0,0x7101c0dc80
7101c0dc20  add x0,sp,#0x90
7101c0dc24  mov x1,x19
7101c0dc28  bl 0x71024076d0
7101c0dc2c  ldr x8,[sp, #0xa0]
7101c0dc30  adrp x9,0x7104f73000
7101c0dc34  add x9,x9,#0xd50
7101c0dc38  str x9,[sp, #0x98]
7101c0dc3c  cbz x8,0x7101c0dcac
7101c0dc40  adrp x8,0x7106dd5000
7101c0dc44  ldrb w8,[x8, #0x3a8]
7101c0dc48  cmp w8,#0x1
7101c0dc4c  b.ne 0x7101c0dcac
7101c0dc50  adrp x9,0x7106dd5000
7101c0dc54  ldr w8,[sp, #0xa8]
7101c0dc58  ldr w9,[x9, #0x3ac]
7101c0dc5c  cmp w8,w9
7101c0dc60  b.ne 0x7101c0dcac
7101c0dc64  ldr x8,[sp, #0xa0]
7101c0dc68  ldr wzr,[x8, #0x38]!
7101c0dc6c  ldaxr w9,[x8]
7101c0dc70  sub w9,w9,#0x1
7101c0dc74  stlxr w10,w9,[x8]
7101c0dc78  cbnz w10,0x7101c0dc6c
7101c0dc7c  b 0x7101c0dcac
7101c0dc80  mov x8,#0x650000000000
7101c0dc84  movk x8,#0x87, LSL #48
7101c0dc88  strb wzr,[sp, #0xb0]
7101c0dc8c  stp xzr,x8,[sp, #0xa0]
7101c0dc90  mov x8,#-0x1
7101c0dc94  stp x8,xzr,[sp, #0xb8]
7101c0dc98  adrp x8,0x7104f73000
7101c0dc9c  add x8,x8,#0xd50
7101c0dca0  str wzr,[sp, #0x90]
7101c0dca4  str xzr,[sp, #0xc8]
7101c0dca8  str x8,[sp, #0x98]
7101c0dcac  str xzr,[sp, #0xa0]
7101c0dcb0  strb wzr,[sp, #0xb0]
7101c0dcb4  b 0x7101c0da58
7101c0dcb8  ldr w23,[x28, #0x4]
7101c0dcbc  b 0x7101c0dcc4
7101c0dcc0  sub w21,w23,#0x1
7101c0dcc4  adrp x25,0x71052c5000
7101c0dcc8  add x25,x25,#0x180
7101c0dccc  adrp x26,0x7104f17000
7101c0dcd0  add x26,x26,#0x0
7101c0dcd4  ldarb w8,[x22]
7101c0dcd8  sub w23,w23,#0x1
7101c0dcdc  tbz w8,#0x0,0x7101c0dd10
7101c0dce0  ldr w0,[x24, #0xf0]
7101c0dce4  ldrb w3,[x28, #0x2]
7101c0dce8  mov w5,w23
7101c0dcec  ldrb w4,[x28]
7101c0dcf0  ldrb w2,[x28, #0x3]
7101c0dcf4  ldrb w1,[x28, #0x1]
7101c0dcf8  bl 0x7101c08ff0
7101c0dcfc  tbnz w0,#0x0,0x7101c0dd44
7101c0dd00  ldr w8,[x28, #0x4]
7101c0dd04  cmp w23,w8
7101c0dd08  b.le 0x7101c0dcd4
7101c0dd0c  b 0x7101c0dd40
7101c0dd10  mov x0,x22
7101c0dd14  bl 0x71039c06b0
7101c0dd18  cbz w0,0x7101c0dce0
7101c0dd1c  bl 0x7101764000
7101c0dd20  adrp x0,0x7101763000
7101c0dd24  add x0,x0,#0xc40
7101c0dd28  mov x1,x25
7101c0dd2c  mov x2,x26
7101c0dd30  bl 0x71000001c0
7101c0dd34  mov x0,x22
7101c0dd38  bl 0x71039c06c0
7101c0dd3c  b 0x7101c0dce0
7101c0dd40  mov w23,wzr
7101c0dd44  cmp w21,w23
7101c0dd48  b.eq 0x7101c0da58
7101c0dd4c  ldr x9,[x19, #0x6b0]
7101c0dd50  ldr x9,[x9]
7101c0dd54  ldr x10,[x9]
7101c0dd58  ldr w8,[x19, #0x6e4]
7101c0dd5c  ldr x9,[x10, #0x600]
7101c0dd60  ldr x22,[x19, #0x150]
7101c0dd64  str w8,[x9, #0x494]
7101c0dd68  ldr x9,[x10, #0x608]
7101c0dd6c  ldr x10,[x10, #0x610]
7101c0dd70  add x1,x19,#0x658
7101c0dd74  add x2,x19,#0x690
7101c0dd78  cmp x9,x10
7101c0dd7c  b.eq 0x7101c0dde4
7101c0dd80  sub x11,x10,#0x10
7101c0dd84  sub x11,x11,x9
7101c0dd88  ubfx x12,x11,#0x4,#0x1c
7101c0dd8c  add w12,w12,#0x1
7101c0dd90  ands x12,x12,#0x3
7101c0dd94  b.eq 0x7101c0ddb0
7101c0dd98  neg x12,x12
7101c0dd9c  ldr x13,[x9, #0x8]
7101c0dda0  add x9,x9,#0x10
7101c0dda4  adds x12,x12,#0x1
7101c0dda8  str w8,[x13, #0x494]
7101c0ddac  b.ne 0x7101c0dd9c
7101c0ddb0  cmp x11,#0x30
7101c0ddb4  b.cc 0x7101c0dde4
7101c0ddb8  ldr x11,[x9, #0x8]
7101c0ddbc  str w8,[x11, #0x494]
7101c0ddc0  ldr x11,[x9, #0x18]
7101c0ddc4  str w8,[x11, #0x494]
7101c0ddc8  ldr x11,[x9, #0x28]
7101c0ddcc  str w8,[x11, #0x494]
7101c0ddd0  ldr x11,[x9, #0x38]
7101c0ddd4  add x9,x9,#0x40
7101c0ddd8  cmp x10,x9
7101c0dddc  str w8,[x11, #0x494]
7101c0dde0  b.ne 0x7101c0ddb8
7101c0dde4  ldr x24,[x19, #0x6b0]
7101c0dde8  ldr x8,[x24]
7101c0ddec  mov x9,x8
7101c0ddf0  ldr x21,[x19, #0x6f0]
7101c0ddf4  ldr x10,[x9], #0x8
7101c0ddf8  ldr x10,[x10, #0x600]
7101c0ddfc  mov w11,#0x20
7101c0de00  str w11,[x10, #0x10]
7101c0de04  ldr x10,[x24]
7101c0de08  ldr x10,[x10]
7101c0de0c  ldr x10,[x10, #0x600]
7101c0de10  mov w11,#0x40
7101c0de14  str w11,[x10, #0x14]
7101c0de18  ldr x10,[x24]
7101c0de1c  ldr x10,[x10]
7101c0de20  ldr x10,[x10, #0x600]
7101c0de24  mov w11,#0x8
7101c0de28  movk w11,#0x80, LSL #16
7101c0de2c  str w11,[x10, #0x18]
7101c0de30  ldr x10,[x24]
7101c0de34  ldr x10,[x10]
7101c0de38  ldr x10,[x10, #0x600]
7101c0de3c  mov w11,#0x2
7101c0de40  movk w11,#0x20, LSL #16
7101c0de44  str w11,[x10, #0x1c]
7101c0de48  ldr x10,[x24]
7101c0de4c  ldr x10,[x10]
7101c0de50  ldr x10,[x10, #0x600]
7101c0de54  mov w11,#0x1
7101c0de58  movk w11,#0x10, LSL #16
7101c0de5c  str w11,[x10, #0x20]
7101c0de60  ldr x10,[x24]
7101c0de64  ldr x10,[x10]
7101c0de68  ldr x10,[x10, #0x600]
7101c0de6c  add x23,x21,#0x178
7101c0de70  mov w11,#0x4
7101c0de74  movk w11,#0x40, LSL #16
7101c0de78  cmp x23,x9
7101c0de7c  str w11,[x10, #0x24]
7101c0de80  b.eq 0x7101c0def4
7101c0de84  ldr x9,[x8, #0x10]
7101c0de88  ldr x9,[x9]
7101c0de8c  ldr x10,[x21, #0x180]
7101c0de90  str x9,[x10]
7101c0de94  ldr x9,[x8, #0x10]
7101c0de98  ldr x9,[x9, #0x8]
7101c0de9c  ldr x10,[x21, #0x180]
7101c0dea0  str x9,[x10, #0x8]
7101c0dea4  ldr x9,[x8, #0x10]
7101c0dea8  ldr x8,[x21, #0x180]
7101c0deac  cmp x8,x9
7101c0deb0  b.eq 0x7101c0def4
7101c0deb4  ldr x10,[x9, #0x18]
7101c0deb8  ldr x10,[x10]
7101c0debc  ldr x11,[x8, #0x18]
7101c0dec0  str x10,[x11]
7101c0dec4  ldr x10,[x9, #0x18]
7101c0dec8  ldr x10,[x10, #0x8]
7101c0decc  ldr x11,[x8, #0x18]
7101c0ded0  str x10,[x11, #0x8]
7101c0ded4  ldr x10,[x9, #0x18]
7101c0ded8  ldr x10,[x10, #0x10]
7101c0dedc  ldr x11,[x8, #0x18]
7101c0dee0  str x10,[x11, #0x10]
7101c0dee4  ldr x9,[x9, #0x18]
7101c0dee8  ldr x9,[x9, #0x18]
7101c0deec  ldr x8,[x8, #0x18]
7101c0def0  str x9,[x8, #0x18]
7101c0def4  mov x0,x21
7101c0def8  mov w3,w20
7101c0defc  bl 0x7101c16450
7101c0df00  ldr x0,[x21, #0x180]
7101c0df04  ldr x8,[x0, #0x8]
7101c0df08  cbz x8,0x7101c0e688
7101c0df0c  fmov s0,0x3f800000
7101c0df10  add x1,x21,#0x14
7101c0df14  bl 0x7103778300
7101c0df18  ldr w8,[x21, #0x8]
7101c0df1c  ldr x0,[x21, #0x180]
7101c0df20  cmp w8,#0x6
7101c0df24  b.lt 0x7101c0dfb4
7101c0df28  adrp x1,0x710439d000
7101c0df2c  add x1,x1,#0x3b1
7101c0df30  b 0x7101c0dfbc
7101c0df34  cbnz w8,0x7101c0e070
7101c0df38  mov x21,#0xc028
7101c0df3c  movk x21,#0x1ca6, LSL #16
7101c0df40  movk x21,#0x15, LSL #32
7101c0df44  mov w2,#0x4
7101c0df48  mov x1,x21
7101c0df4c  bl 0x7103313f20
7101c0df50  tbz w0,#0x0,0x7101c0e070
7101c0df54  add x0,sp,#0x90
7101c0df58  mov x1,x21
7101c0df5c  bl 0x71024076d0
7101c0df60  ldr x8,[sp, #0xa0]
7101c0df64  adrp x9,0x7104f73000
7101c0df68  add x9,x9,#0xd50
7101c0df6c  str x9,[sp, #0x98]
7101c0df70  cbz x8,0x7101c0e09c
7101c0df74  adrp x8,0x7106dd5000
7101c0df78  ldrb w8,[x8, #0x3a8]
7101c0df7c  cmp w8,#0x1
7101c0df80  b.ne 0x7101c0e09c
7101c0df84  adrp x9,0x7106dd5000
7101c0df88  ldr w8,[sp, #0xa8]
7101c0df8c  ldr w9,[x9, #0x3ac]
7101c0df90  cmp w8,w9
7101c0df94  b.ne 0x7101c0e09c
7101c0df98  ldr x8,[sp, #0xa0]
7101c0df9c  ldr wzr,[x8, #0x38]!
7101c0dfa0  ldaxr w9,[x8]
7101c0dfa4  sub w9,w9,#0x1
7101c0dfa8  stlxr w10,w9,[x8]
7101c0dfac  cbnz w10,0x7101c0dfa0
7101c0dfb0  b 0x7101c0e09c
7101c0dfb4  adrp x1,0x710436c000
7101c0dfb8  add x1,x1,#0x2fb
7101c0dfbc  fmov s0,0x3f800000
7101c0dfc0  bl 0x7103778300
7101c0dfc4  ldr x8,[x24]
7101c0dfc8  ldr x25,[x8]
7101c0dfcc  ldr x0,[x25, #0x458]
7101c0dfd0  ldr s0,[x25, #0x640]
7101c0dfd4  fmov s1,wzr
7101c0dfd8  ldr x8,[x0]
7101c0dfdc  fmul s0,s0,s1
7101c0dfe0  ldr x8,[x8, #0x58]
7101c0dfe4  blr x8
7101c0dfe8  ldr x26,[x25, #0x460]
7101c0dfec  ldr x28,[x25, #0x468]
7101c0dff0  cmp x26,x28
7101c0dff4  b.eq 0x7101c0e02c
7101c0dff8  ldr x25,[x26]
7101c0dffc  ldr x8,[x25]
7101c0e000  ldr x8,[x8, #0x40]
7101c0e004  mov x0,x25
7101c0e008  blr x8
7101c0e00c  tbz w0,#0x0,0x7101c0e020
7101c0e010  ldr x8,[x25]
7101c0e014  ldr x8,[x8, #0x20]
7101c0e018  mov x0,x25
7101c0e01c  blr x8
7101c0e020  add x26,x26,#0x8
7101c0e024  cmp x28,x26
7101c0e028  b.ne 0x7101c0dff8
7101c0e02c  ldr w9,[x21, #0xa0]
7101c0e030  mov w8,#0xffffffff
7101c0e034  str w8,[x21, #0x190]
7101c0e038  cbz w9,0x7101c0e234
7101c0e03c  ldr w8,[x21, #0xa8]
7101c0e040  ldr w11,[x21, #0x8]
7101c0e044  sub w10,w11,#0x1
7101c0e048  cmp w11,w8
7101c0e04c  csel w12,w8,w10,gt
7101c0e050  cmp w9,#0x1
7101c0e054  b.eq 0x7101c0e140
7101c0e058  cmp w9,#0x2
7101c0e05c  b.ne 0x7101c0e150
7101c0e060  bic w13,w10,w10, ASR #0x1f
7101c0e064  cmp w13,w12
7101c0e068  b.ne 0x7101c0e15c
7101c0e06c  b 0x7101c0e230
7101c0e070  mov x8,#0x650000000000
7101c0e074  movk x8,#0x87, LSL #48
7101c0e078  strb wzr,[sp, #0xb0]
7101c0e07c  stp xzr,x8,[sp, #0xa0]
7101c0e080  mov x8,#-0x1
7101c0e084  stp x8,xzr,[sp, #0xb8]
7101c0e088  adrp x8,0x7104f73000
7101c0e08c  add x8,x8,#0xd50
7101c0e090  str wzr,[sp, #0x90]
7101c0e094  str xzr,[sp, #0xc8]
7101c0e098  str x8,[sp, #0x98]
7101c0e09c  str xzr,[sp, #0xa0]
7101c0e0a0  strb wzr,[sp, #0xb0]
7101c0e0a4  ldr x8,[x19, #0x6b8]
7101c0e0a8  ldrsw x9,[x8, #0x2c8]
7101c0e0ac  tbnz w9,#0x1f,0x7101c0e0d4
7101c0e0b0  ldr w10,[x8, #0x2c0]
7101c0e0b4  cmp w9,w10
7101c0e0b8  b.ge 0x7101c0e0d4
7101c0e0bc  ldr x8,[x8, #0x168]
7101c0e0c0  ldr x8,[x8, x9, LSL #0x3]
7101c0e0c4  add x1,x8,#0x8
7101c0e0c8  sub x0,x29,#0xa8
7101c0e0cc  bl 0x7103776390
7101c0e0d0  b 0x7101c0e0dc
7101c0e0d4  sub x0,x29,#0xa8
7101c0e0d8  bl 0x7103776290
7101c0e0dc  ldur x19,[x29, #-0xa0]
7101c0e0e0  ldr x8,[x19, #0x8]
7101c0e0e4  cbz x8,0x7101c0e1e8
7101c0e0e8  adrp x1,0x7104401000
7101c0e0ec  add x1,x1,#0x4db
7101c0e0f0  sub x8,x29,#0xb8
7101c0e0f4  sub x0,x29,#0xa8
7101c0e0f8  bl 0x7103776910
7101c0e0fc  ldrb w8,[x27, #0x1]
7101c0e100  ldrb w1,[x27]
7101c0e104  sub x0,x29,#0xb8
7101c0e108  ldr w2,[sp, #0xc]
7101c0e10c  cmp w8,#0x1
7101c0e110  cset w3,eq
7101c0e114  bl 0x7101c09380
7101c0e118  ldur x0,[x29, #-0xa0]
7101c0e11c  cmp w20,#0x1
7101c0e120  b.ne 0x7101c0e1bc
7101c0e124  adrp x1,0x71043e0000
7101c0e128  add x1,x1,#0x2be
7101c0e12c  b 0x7101c0e1c4
7101c0e130  sub w8,w20,#0x7
7101c0e134  cmp w8,#0x2
7101c0e138  b.cs 0x7101c0d704
7101c0e13c  b 0x7101c0da58
7101c0e140  mov w13,wzr
7101c0e144  cmp w13,w12
7101c0e148  b.ne 0x7101c0e15c
7101c0e14c  b 0x7101c0e230
7101c0e150  mov w13,#0xffffffff
7101c0e154  cmp w13,w12
7101c0e158  b.eq 0x7101c0e230
7101c0e15c  ldr x13,[x21, #0x1b0]
7101c0e160  cbz x13,0x7101c0e19c
7101c0e164  ldrb w14,[x21]
7101c0e168  add x15,x21,#0x1b0
7101c0e16c  mov x12,x15
7101c0e170  ldrb w16,[x13, #0x1c]
7101c0e174  cmp w16,w14
7101c0e178  cset w16,cc
7101c0e17c  csel x12,x12,x13,cc
7101c0e180  ldr x13,[x13, w16, UXTW #0x3]
7101c0e184  cbnz x13,0x7101c0e170
7101c0e188  cmp x12,x15
7101c0e18c  b.eq 0x7101c0e19c
7101c0e190  ldrb w13,[x12, #0x1c]
7101c0e194  cmp w14,w13
7101c0e198  b.cs 0x7101c0e21c
7101c0e19c  cmp w11,w8
7101c0e1a0  b.le 0x7101c0e230
7101c0e1a4  cmp w9,#0x1
7101c0e1a8  b.eq 0x7101c0e224
7101c0e1ac  cmp w9,#0x2
7101c0e1b0  b.ne 0x7101c0e22c
7101c0e1b4  bic w8,w10,w10, ASR #0x1f
7101c0e1b8  b 0x7101c0e230
7101c0e1bc  adrp x1,0x7104422000
7101c0e1c0  add x1,x1,#0x55e
7101c0e1c4  fmov s0,0x3f800000
7101c0e1c8  bl 0x7103778300
7101c0e1cc  ldur x0,[x29, #-0xb0]
7101c0e1d0  adrp x8,0x710523d000
7101c0e1d4  add x8,x8,#0x9a8
7101c0e1d8  stp x8,xzr,[x29, #-0xb8]
7101c0e1dc  cbz x0,0x7101c0e1e4
7101c0e1e0  bl 0x710392eb40
7101c0e1e4  ldur x19,[x29, #-0xa0]
7101c0e1e8  adrp x8,0x710523d000
7101c0e1ec  add x8,x8,#0x988
7101c0e1f0  stp x8,xzr,[x29, #-0xa8]
7101c0e1f4  cbz x19,0x7101c0da58
7101c0e1f8  ldr x0,[x19, #0x18]
7101c0e1fc  adrp x8,0x710523d000
7101c0e200  add x8,x8,#0x9a8
7101c0e204  stp x8,xzr,[x19, #0x10]
7101c0e208  cbz x0,0x7101c0e210
7101c0e20c  bl 0x710392eb40
7101c0e210  mov x0,x19
7101c0e214  bl 0x710392eb40
7101c0e218  b 0x7101c0da58
7101c0e21c  ldr w8,[x12, #0x20]
7101c0e220  b 0x7101c0e230
7101c0e224  mov w8,wzr
7101c0e228  b 0x7101c0e230
7101c0e22c  mov w8,#0xffffffff
7101c0e230  str w8,[x21, #0x1a0]
7101c0e234  mov w8,#0x101
7101c0e238  strh w8,[sp, #0x98]
7101c0e23c  mov w8,#0x1
7101c0e240  str xzr,[sp, #0x90]
7101c0e244  stur wzr,[x27, #0xa]
7101c0e248  add x0,sp,#0x90
7101c0e24c  str w8,[sp, #0xa0]
7101c0e250  strh w8,[sp, #0xa4]
7101c0e254  strb w8,[sp, #0xa6]
7101c0e258  mov x8,#0x41f0000000000000
7101c0e25c  strh wzr,[sp, #0x9e]
7101c0e260  str x8,[sp, #0xa8]
7101c0e264  str wzr,[sp, #0xb0]
7101c0e268  str xzr,[sp, #0xe0]
7101c0e26c  str xzr,[sp, #0x110]
7101c0e270  str xzr,[sp, #0x140]
7101c0e274  str xzr,[sp, #0x170]
7101c0e278  str xzr,[sp, #0x1a0]
7101c0e27c  str wzr,[sp, #0x1b0]
7101c0e280  bl 0x710337df20
7101c0e284  add x25,x21,#0x188
7101c0e288  adrp x2,0x7104307000
7101c0e28c  add x2,x2,#0x72
7101c0e290  add x3,sp,#0x90
7101c0e294  mov x0,x25
7101c0e298  mov x1,x23
7101c0e29c  bl 0x7103770b30
7101c0e2a0  ldr w8,[x21, #0xa0]
7101c0e2a4  cmp w8,#0x2
7101c0e2a8  b.eq 0x7101c0e328
7101c0e2ac  cmp w8,#0x1
7101c0e2b0  b.eq 0x7101c0e3f4
7101c0e2b4  cbnz w8,0x7101c0e598
7101c0e2b8  ldr w8,[x21, #0x8]
7101c0e2bc  cmp w8,#0x1
7101c0e2c0  b.lt 0x7101c0e3dc
7101c0e2c4  sub x8,x29,#0xa8
7101c0e2c8  mov w26,wzr
7101c0e2cc  adrp x28,0x710439d000
7101c0e2d0  add x28,x28,#0xc57
7101c0e2d4  add x27,x8,#0x8
7101c0e2d8  sub x0,x29,#0xa8
7101c0e2dc  mov x1,x28
7101c0e2e0  mov w2,w26
7101c0e2e4  sturb wzr,[x29, #-0xa0]
7101c0e2e8  stur xzr,[x29, #-0xa8]
7101c0e2ec  bl 0x710062dc20
7101c0e2f0  mov x0,x25
7101c0e2f4  mov w1,w26
7101c0e2f8  mov x2,x27
7101c0e2fc  bl 0x71037717d0
7101c0e300  mov x0,x21
7101c0e304  mov x1,x24
7101c0e308  mov w2,w26
7101c0e30c  mov w3,wzr
7101c0e310  bl 0x7101c16740
7101c0e314  ldr w8,[x21, #0x8]
7101c0e318  add w26,w26,#0x1
7101c0e31c  cmp w26,w8
7101c0e320  b.lt 0x7101c0e2d8
7101c0e324  b 0x7101c0e3dc
7101c0e328  ldr w8,[x21, #0x8]
7101c0e32c  cmp w8,#0x1
7101c0e330  b.lt 0x7101c0e3dc
7101c0e334  sub x8,x29,#0xa8
7101c0e338  mov w26,wzr
7101c0e33c  adrp x28,0x710439d000
7101c0e340  add x28,x28,#0xc57
7101c0e344  add x27,x8,#0x8
7101c0e348  sub x0,x29,#0xa8
7101c0e34c  mov x1,x28
7101c0e350  mov w2,w26
7101c0e354  sturb wzr,[x29, #-0xa0]
7101c0e358  stur xzr,[x29, #-0xa8]
7101c0e35c  bl 0x710062dc20
7101c0e360  mov x0,x25
7101c0e364  mov w1,w26
7101c0e368  mov x2,x27
7101c0e36c  bl 0x71037717d0
7101c0e370  ldr w8,[x21, #0xa0]
7101c0e374  cmp w8,#0x1
7101c0e378  b.eq 0x7101c0e3ac
7101c0e37c  cmp w8,#0x2
7101c0e380  b.ne 0x7101c0e3b8
7101c0e384  ldr w8,[x21, #0x8]
7101c0e388  sub w8,w8,#0x1
7101c0e38c  bic w8,w8,w8, ASR #0x1f
7101c0e390  cmp w26,w8
7101c0e394  b.ne 0x7101c0e3b8
7101c0e398  mov w3,#0x2
7101c0e39c  mov x0,x21
7101c0e3a0  mov x1,x24
7101c0e3a4  mov w2,w26
7101c0e3a8  b 0x7101c0e3c8
7101c0e3ac  mov w8,wzr
7101c0e3b0  cmp w26,w8
7101c0e3b4  b.eq 0x7101c0e398
7101c0e3b8  mov x0,x21
7101c0e3bc  mov x1,x24
7101c0e3c0  mov w2,w26
7101c0e3c4  mov w3,wzr
7101c0e3c8  bl 0x7101c16740
7101c0e3cc  ldr w8,[x21, #0x8]
7101c0e3d0  add w26,w26,#0x1
7101c0e3d4  cmp w26,w8
7101c0e3d8  b.lt 0x7101c0e348
7101c0e3dc  ldr w9,[x21, #0xa8]
7101c0e3e0  sub w10,w8,#0x1
7101c0e3e4  cmp w8,w9
7101c0e3e8  csel w1,w9,w10,gt
7101c0e3ec  mov x0,x25
7101c0e3f0  b 0x7101c0e444
7101c0e3f4  sub x8,x29,#0xa8
7101c0e3f8  adrp x1,0x710439d000
7101c0e3fc  add x1,x1,#0xc57
7101c0e400  sub x0,x29,#0xa8
7101c0e404  mov w2,wzr
7101c0e408  sturb wzr,[x29, #-0xa0]
7101c0e40c  stur xzr,[x29, #-0xa8]
7101c0e410  add x26,x8,#0x8
7101c0e414  bl 0x710062dc20
7101c0e418  mov x0,x25
7101c0e41c  mov w1,wzr
7101c0e420  mov x2,x26
7101c0e424  bl 0x71037717d0
7101c0e428  mov w3,#0x1
7101c0e42c  mov x0,x21
7101c0e430  mov x1,x24
7101c0e434  mov w2,wzr
7101c0e438  bl 0x7101c16740
7101c0e43c  mov x0,x25
7101c0e440  mov w1,wzr
7101c0e444  mov w2,wzr
7101c0e448  bl 0x7103771a80
7101c0e44c  ldr x0,[x25]
7101c0e450  ldr x8,[x0]
7101c0e454  ldr x8,[x8, #0x70]
7101c0e458  mov w1,wzr
7101c0e45c  blr x8
7101c0e460  ldr x0,[x25]
7101c0e464  ldr x8,[x0]
7101c0e468  ldr x8,[x8, #0x60]
7101c0e46c  mov w1,wzr
7101c0e470  blr x8
7101c0e474  adrp x1,0x710437c000
7101c0e478  add x1,x1,#0xca7
7101c0e47c  sub x8,x29,#0xb8
7101c0e480  mov x0,x23
7101c0e484  bl 0x7103776640
7101c0e488  adrp x1,0x71043ef000
7101c0e48c  add x1,x1,#0x356
7101c0e490  sub x8,x29,#0xc8
7101c0e494  sub x0,x29,#0xb8
7101c0e498  bl 0x7103776910
7101c0e49c  mov w0,w20
7101c0e4a0  bl 0x7101c0c470
7101c0e4a4  and x8,x0,#-0x100000000000000
7101c0e4a8  mov x9,#0x7100000000000000
7101c0e4ac  cmp x8,x9
7101c0e4b0  b.ne 0x7101c0e4d4
7101c0e4b4  mov x1,x0
7101c0e4b8  and x8,x0,#0xffffffffff
7101c0e4bc  cbz x8,0x7101c0e4d4
7101c0e4c0  mov x0,x22
7101c0e4c4  bl 0x710323f760
7101c0e4c8  mov x1,x0
7101c0e4cc  ldur x0,[x29, #-0xc0]
7101c0e4d0  bl 0x7103778b80
7101c0e4d4  adrp x1,0x7104338000
7101c0e4d8  add x1,x1,#0xd31
7101c0e4dc  sub x8,x29,#0xd8
7101c0e4e0  sub x0,x29,#0xb8
7101c0e4e4  bl 0x7103776910
7101c0e4e8  sub x0,x29,#0xa8
7101c0e4ec  mov w1,w20
7101c0e4f0  sub x22,x29,#0xa8
7101c0e4f4  bl 0x7103396910
7101c0e4f8  add x1,x22,#0x8
7101c0e4fc  sub x0,x29,#0xd8
7101c0e500  bl 0x710377a120
7101c0e504  ldr w9,[x21, #0xa8]
7101c0e508  ldr w10,[x21, #0x8]
7101c0e50c  sub w8,w10,#0x1
7101c0e510  cmp w10,w9
7101c0e514  csel w1,w9,w8,gt
7101c0e518  ldr w9,[x21, #0xa0]
7101c0e51c  cmp w9,#0x1
7101c0e520  b.eq 0x7101c0e6a0
7101c0e524  cmp w9,#0x2
7101c0e528  b.ne 0x7101c0e6b0
7101c0e52c  bic w8,w8,w8, ASR #0x1f
7101c0e530  cmp w8,w1
7101c0e534  b.ne 0x7101c0e53c
7101c0e538  ldr w1,[x21, #0x1a0]
7101c0e53c  mov x0,x21
7101c0e540  bl 0x7101c15860
7101c0e544  ldur x0,[x29, #-0xd0]
7101c0e548  adrp x21,0x710523d000
7101c0e54c  add x21,x21,#0x9a8
7101c0e550  stp x21,xzr,[x29, #-0xd8]
7101c0e554  cbz x0,0x7101c0e55c
7101c0e558  bl 0x710392eb40
7101c0e55c  ldur x0,[x29, #-0xc0]
7101c0e560  stp x21,xzr,[x29, #-0xc8]
7101c0e564  cbz x0,0x7101c0e56c
7101c0e568  bl 0x710392eb40
7101c0e56c  ldur x20,[x29, #-0xb0]
7101c0e570  adrp x8,0x710523d000
7101c0e574  add x8,x8,#0x988
7101c0e578  stp x8,xzr,[x29, #-0xb8]
7101c0e57c  cbz x20,0x7101c0e598
7101c0e580  ldr x0,[x20, #0x18]
7101c0e584  stp x21,xzr,[x20, #0x10]
7101c0e588  cbz x0,0x7101c0e590
7101c0e58c  bl 0x710392eb40
7101c0e590  mov x0,x20
7101c0e594  bl 0x710392eb40
7101c0e598  ldr x0,[sp, #0x1a0]
7101c0e59c  add x8,sp,#0x90
7101c0e5a0  add x8,x8,#0xf0
7101c0e5a4  cmp x8,x0
7101c0e5a8  b.eq 0x7101c0e5bc
7101c0e5ac  cbz x0,0x7101c0e5c8
7101c0e5b0  ldr x8,[x0]
7101c0e5b4  ldr x8,[x8, #0x28]
7101c0e5b8  b 0x7101c0e5c4
7101c0e5bc  ldr x8,[x0]
7101c0e5c0  ldr x8,[x8, #0x20]
7101c0e5c4  blr x8
7101c0e5c8  ldr x0,[sp, #0x170]
7101c0e5cc  add x8,sp,#0x90
7101c0e5d0  add x8,x8,#0xc0
7101c0e5d4  cmp x8,x0
7101c0e5d8  b.eq 0x7101c0e5ec
7101c0e5dc  cbz x0,0x7101c0e5f8
7101c0e5e0  ldr x8,[x0]
7101c0e5e4  ldr x8,[x8, #0x28]
7101c0e5e8  b 0x7101c0e5f4
7101c0e5ec  ldr x8,[x0]
7101c0e5f0  ldr x8,[x8, #0x20]
7101c0e5f4  blr x8
7101c0e5f8  ldr x0,[sp, #0x140]
7101c0e5fc  add x8,sp,#0x90
7101c0e600  add x8,x8,#0x90
7101c0e604  cmp x8,x0
7101c0e608  b.eq 0x7101c0e61c
7101c0e60c  cbz x0,0x7101c0e628
7101c0e610  ldr x8,[x0]
7101c0e614  ldr x8,[x8, #0x28]
7101c0e618  b 0x7101c0e624
7101c0e61c  ldr x8,[x0]
7101c0e620  ldr x8,[x8, #0x20]
7101c0e624  blr x8
7101c0e628  ldr x0,[sp, #0x110]
7101c0e62c  add x8,sp,#0x90
7101c0e630  add x8,x8,#0x60
7101c0e634  cmp x8,x0
7101c0e638  b.eq 0x7101c0e64c
7101c0e63c  cbz x0,0x7101c0e658
7101c0e640  ldr x8,[x0]
7101c0e644  ldr x8,[x8, #0x28]
7101c0e648  b 0x7101c0e654
7101c0e64c  ldr x8,[x0]
7101c0e650  ldr x8,[x8, #0x20]
7101c0e654  blr x8
7101c0e658  ldr x0,[sp, #0xe0]
7101c0e65c  add x8,sp,#0x90
7101c0e660  add x8,x8,#0x30
7101c0e664  cmp x8,x0
7101c0e668  b.eq 0x7101c0e67c
7101c0e66c  cbz x0,0x7101c0e688
7101c0e670  ldr x8,[x0]
7101c0e674  ldr x8,[x8, #0x28]
7101c0e678  b 0x7101c0e684
7101c0e67c  ldr x8,[x0]
7101c0e680  ldr x8,[x8, #0x20]
7101c0e684  blr x8
7101c0e688  ldrsw x8,[x19, #0x13c]
7101c0e68c  cmp w8,#0x13
7101c0e690  b.cs 0x7101c0e800
7101c0e694  add x8,x19,x8, LSL #0x2
7101c0e698  orr w9,wzr,#0x3
7101c0e69c  b 0x7101c0da54
7101c0e6a0  mov w8,wzr
7101c0e6a4  cmp w8,w1
7101c0e6a8  b.eq 0x7101c0e538
7101c0e6ac  b 0x7101c0e53c
7101c0e6b0  mov w8,#0xffffffff
7101c0e6b4  cmp w8,w1
7101c0e6b8  b.ne 0x7101c0e53c
7101c0e6bc  b 0x7101c0e538
7101c0e6c0  adrp x0,0x7105314000
7101c0e6c4  add x0,x0,#0x4d8
7101c0e6c8  bl 0x71039c06b0
7101c0e6cc  cbz w0,0x7101c0cebc
7101c0e6d0  bl 0x7101764000
7101c0e6d4  adrp x0,0x7101763000
7101c0e6d8  add x0,x0,#0xc40
7101c0e6dc  adrp x1,0x71052c5000
7101c0e6e0  add x1,x1,#0x180
7101c0e6e4  adrp x2,0x7104f17000
7101c0e6e8  add x2,x2,#0x0
7101c0e6ec  bl 0x71000001c0
7101c0e6f0  adrp x0,0x7105314000
7101c0e6f4  add x0,x0,#0x4d8
7101c0e6f8  bl 0x71039c06c0
7101c0e6fc  b 0x7101c0cebc
7101c0e700  adrp x0,0x7105314000
7101c0e704  add x0,x0,#0x4d8
7101c0e708  bl 0x71039c06b0
7101c0e70c  cbz w0,0x7101c0d1f8
7101c0e710  bl 0x7101764000
7101c0e714  adrp x0,0x7101763000
7101c0e718  add x0,x0,#0xc40
7101c0e71c  adrp x1,0x71052c5000
7101c0e720  add x1,x1,#0x180
7101c0e724  adrp x2,0x7104f17000
7101c0e728  add x2,x2,#0x0
7101c0e72c  bl 0x71000001c0
7101c0e730  adrp x0,0x7105314000
7101c0e734  add x0,x0,#0x4d8
7101c0e738  bl 0x71039c06c0
7101c0e73c  b 0x7101c0d1f8
7101c0e740  adrp x0,0x7105314000
7101c0e744  add x0,x0,#0x4d8
7101c0e748  bl 0x71039c06b0
7101c0e74c  cbz w0,0x7101c0d63c
7101c0e750  bl 0x7101764000
7101c0e754  adrp x0,0x7101763000
7101c0e758  add x0,x0,#0xc40
7101c0e75c  adrp x1,0x71052c5000
7101c0e760  add x1,x1,#0x180
7101c0e764  adrp x2,0x7104f17000
7101c0e768  add x2,x2,#0x0
7101c0e76c  bl 0x71000001c0
7101c0e770  adrp x0,0x7105314000
7101c0e774  add x0,x0,#0x4d8
7101c0e778  bl 0x71039c06c0
7101c0e77c  b 0x7101c0d63c
7101c0e780  adrp x0,0x7105314000
7101c0e784  add x0,x0,#0x4d8
7101c0e788  bl 0x71039c06b0
7101c0e78c  cbz w0,0x7101c0db1c
7101c0e790  bl 0x7101764000
7101c0e794  adrp x0,0x7101763000
7101c0e798  add x0,x0,#0xc40
7101c0e79c  adrp x1,0x71052c5000
7101c0e7a0  add x1,x1,#0x180
7101c0e7a4  adrp x2,0x7104f17000
7101c0e7a8  add x2,x2,#0x0
7101c0e7ac  bl 0x71000001c0
7101c0e7b0  adrp x0,0x7105314000
7101c0e7b4  add x0,x0,#0x4d8
7101c0e7b8  bl 0x71039c06c0
7101c0e7bc  b 0x7101c0db1c
7101c0e7c0  adrp x0,0x7105314000
7101c0e7c4  add x0,x0,#0x4d8
7101c0e7c8  bl 0x71039c06b0
7101c0e7cc  cbz w0,0x7101c0da9c
7101c0e7d0  bl 0x7101764000
7101c0e7d4  adrp x0,0x7101763000
7101c0e7d8  add x0,x0,#0xc40
7101c0e7dc  adrp x1,0x71052c5000
7101c0e7e0  add x1,x1,#0x180
7101c0e7e4  adrp x2,0x7104f17000
7101c0e7e8  add x2,x2,#0x0
7101c0e7ec  bl 0x71000001c0
7101c0e7f0  adrp x0,0x7105314000
7101c0e7f4  add x0,x0,#0x4d8
7101c0e7f8  bl 0x71039c06c0
7101c0e7fc  b 0x7101c0da9c
7101c0e800  bl 0x71039c2650
7101c0e804  add x0,x19,#0x640
7101c0e808  bl 0x71039c1330
