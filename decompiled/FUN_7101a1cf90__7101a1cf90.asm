// addr:      7101a1cf90
// offset:    0x1a1cf90
// name:      FUN_7101a1cf90
// mangled:   
// size:      1344

7101a1cf90  sub sp,sp,#0x60
7101a1cf94  stp x26,x25,[sp, #0x10]
7101a1cf98  stp x24,x23,[sp, #0x20]
7101a1cf9c  stp x22,x21,[sp, #0x30]
7101a1cfa0  stp x20,x19,[sp, #0x40]
7101a1cfa4  stp x29,x30,[sp, #0x50]
7101a1cfa8  add x29,sp,#0x50
7101a1cfac  mov x22,x0
7101a1cfb0  ldr x0,[x1, #0x8]
7101a1cfb4  mov x19,x1
7101a1cfb8  mov x1,x2
7101a1cfbc  mov w23,w4
7101a1cfc0  mov w20,w3
7101a1cfc4  mov x21,x2
7101a1cfc8  bl 0x7101a06920
7101a1cfcc  ldr x8,[x19, #0x8]
7101a1cfd0  orr w9,wzr,#0x3
7101a1cfd4  str w9,[x8, #0x1f4]
7101a1cfd8  ldr x8,[x19, #0x8]
7101a1cfdc  ldr w9,[x8, #0x150]
7101a1cfe0  add w9,w9,#0x1
7101a1cfe4  str w9,[x8, #0x1f0]
7101a1cfe8  ldr x0,[x19, #0x8]
7101a1cfec  mov w1,wzr
7101a1cff0  bl 0x7101a028b0
7101a1cff4  str wzr,[sp, #0x8]
7101a1cff8  ldr x8,[x19, #0x8]
7101a1cffc  ldr x0,[x8, #0x5e8]
7101a1d000  add x1,sp,#0x8
7101a1d004  str wzr,[x8, #0x394]
7101a1d008  bl 0x71019fd0b0
7101a1d00c  ldr x8,[x19, #0x8]
7101a1d010  and w9,w23,#0x1
7101a1d014  strb w9,[x8, #0x6bd]
7101a1d018  ldr x8,[x19, #0x8]
7101a1d01c  ldr x8,[x8, #0x5e8]
7101a1d020  ldr x0,[x8, #0x10]
7101a1d024  adrp x1,0x710425e000
7101a1d028  add x1,x1,#0xd91
7101a1d02c  bl 0x7103778760
7101a1d030  ldr x8,[x19, #0x8]
7101a1d034  ldrb w9,[x8, #0x6bd]
7101a1d038  ldr x0,[x8, #0x5e8]
7101a1d03c  cmp w9,#0x0
7101a1d040  mov w9,#0x1
7101a1d044  cinc w1,w9,ne
7101a1d048  bl 0x7101a01130
7101a1d04c  mov x0,x22
7101a1d050  mov x1,x19
7101a1d054  bl 0x7101a1f530
7101a1d058  ldr x8,[x19, #0x8]
7101a1d05c  ldrb w9,[x8, #0x6bd]
7101a1d060  cbz w9,0x7101a1d0e0
7101a1d064  ldr x8,[x21, #0x8]
7101a1d068  ldr x8,[x8, #0x20]
7101a1d06c  strb wzr,[x8, #0x167]
7101a1d070  ldr x8,[x21, #0x8]
7101a1d074  mov w9,#0xffffffff
7101a1d078  str w9,[x8, #0x30]
7101a1d07c  ldr x23,[x19, #0x8]
7101a1d080  ldr x8,[x23, #0x200]
7101a1d084  lsr x9,x8,#0x38
7101a1d088  cmp x9,#0xc1
7101a1d08c  b.ne 0x7101a1d098
7101a1d090  and x8,x8,#0xffffffffff
7101a1d094  cbnz x8,0x7101a1d254
7101a1d098  adrp x8,0x710532f000
7101a1d09c  ldr x8,[x8, #0x730]
7101a1d0a0  ldr x8,[x8, #0x8]
7101a1d0a4  ldr x25,[x8, #0x168]
7101a1d0a8  ldr x24,[x22, #0xd90]
7101a1d0ac  mov x1,#0xb807
7101a1d0b0  movk x1,#0xb1cc, LSL #16
7101a1d0b4  movk x1,#0x11, LSL #32
7101a1d0b8  mov x0,x25
7101a1d0bc  mov x26,#-0x3f00000000000000
7101a1d0c0  bl 0x71032631a0
7101a1d0c4  and x10,x24,#-0x100000000000000
7101a1d0c8  and x9,x24,#0xffffffffff
7101a1d0cc  and x8,x0,#0xffffffffff
7101a1d0d0  cmp x10,x26
7101a1d0d4  b.ne 0x7101a1d194
7101a1d0d8  cbnz x9,0x7101a1d170
7101a1d0dc  b 0x7101a1d194
7101a1d0e0  ldr x9,[x21, #0x8]
7101a1d0e4  ldr w8,[x8, #0x150]
7101a1d0e8  cmn w8,#0x1
7101a1d0ec  ldr x9,[x9, #0x20]
7101a1d0f0  cset w10,ne
7101a1d0f4  strb w10,[x9, #0x167]
7101a1d0f8  ldr x9,[x21, #0x8]
7101a1d0fc  str w8,[x9, #0x30]
7101a1d100  ldr w8,[x22, #0x16c]
7101a1d104  orr w8,w8,#0x2
7101a1d108  cmp w8,#0x1b
7101a1d10c  b.ne 0x7101a1d1ec
7101a1d110  ldr x23,[x19, #0x8]
7101a1d114  ldr x8,[x23, #0x200]
7101a1d118  mov x26,#-0x3f00000000000000
7101a1d11c  and x9,x8,#-0x100000000000000
7101a1d120  cmp x9,x26
7101a1d124  b.ne 0x7101a1d130
7101a1d128  and x8,x8,#0xffffffffff
7101a1d12c  cbnz x8,0x7101a1d254
7101a1d130  adrp x8,0x710532f000
7101a1d134  ldr x8,[x8, #0x730]
7101a1d138  ldr x8,[x8, #0x8]
7101a1d13c  ldr x25,[x8, #0x168]
7101a1d140  ldr x24,[x22, #0xd90]
7101a1d144  mov x1,#0xb807
7101a1d148  movk x1,#0xb1cc, LSL #16
7101a1d14c  movk x1,#0x11, LSL #32
7101a1d150  mov x0,x25
7101a1d154  bl 0x71032631a0
7101a1d158  and x10,x24,#-0x100000000000000
7101a1d15c  and x9,x24,#0xffffffffff
7101a1d160  and x8,x0,#0xffffffffff
7101a1d164  cmp x10,x26
7101a1d168  b.ne 0x7101a1d194
7101a1d16c  cbz x9,0x7101a1d194
7101a1d170  and x11,x0,#-0x100000000000000
7101a1d174  cmp x11,x26
7101a1d178  b.ne 0x7101a1d198
7101a1d17c  cbz x8,0x7101a1d198
7101a1d180  eor x8,x0,x24
7101a1d184  tst x8,#0xffffffffff
7101a1d188  mov x2,x24
7101a1d18c  b.ne 0x7101a1d1e0
7101a1d190  b 0x7101a1d1d0
7101a1d194  and x11,x0,#-0x100000000000000
7101a1d198  cmp x10,x26
7101a1d19c  cset w10,eq
7101a1d1a0  cmp x9,#0x0
7101a1d1a4  cset w9,ne
7101a1d1a8  cmp x8,#0x0
7101a1d1ac  cset w8,ne
7101a1d1b0  cmp x11,x26
7101a1d1b4  and w9,w10,w9
7101a1d1b8  cset w10,eq
7101a1d1bc  and w8,w8,w10
7101a1d1c0  eor w8,w8,w9
7101a1d1c4  cmp w8,#0x1
7101a1d1c8  mov x2,x24
7101a1d1cc  b.eq 0x7101a1d1e0
7101a1d1d0  mov x0,x25
7101a1d1d4  mov x1,x24
7101a1d1d8  bl 0x7103263030
7101a1d1dc  mov x2,x0
7101a1d1e0  mov x0,x23
7101a1d1e4  mov x1,x24
7101a1d1e8  b 0x7101a1d24c
7101a1d1ec  adrp x8,0x710532f000
7101a1d1f0  ldr x8,[x8, #0x730]
7101a1d1f4  ldr x8,[x8, #0x8]
7101a1d1f8  ldr x24,[x8, #0x168]
7101a1d1fc  mov x1,#0xb807
7101a1d200  movk x1,#0xb1cc, LSL #16
7101a1d204  mov x23,#0xff0000000000
7101a1d208  movk x1,#0x11, LSL #32
7101a1d20c  mov x0,x24
7101a1d210  movk x23,#0xc1ff, LSL #48
7101a1d214  bl 0x71032631a0
7101a1d218  and x8,x0,#-0x100000000000000
7101a1d21c  mov x9,#-0x3f00000000000000
7101a1d220  cmp x8,x9
7101a1d224  b.ne 0x7101a1d234
7101a1d228  and x8,x0,#0xffffffffff
7101a1d22c  mov x2,x23
7101a1d230  cbnz x8,0x7101a1d244
7101a1d234  mov x0,x24
7101a1d238  mov x1,x23
7101a1d23c  bl 0x7103263030
7101a1d240  mov x2,x0
7101a1d244  ldr x0,[x19, #0x8]
7101a1d248  mov x1,x23
7101a1d24c  mov w3,wzr
7101a1d250  bl 0x7101a029b0
7101a1d254  ldr w8,[x22, #0x16c]
7101a1d258  cmp w8,#0x7
7101a1d25c  b.ne 0x7101a1d2a4
7101a1d260  ldrb w8,[x22, #0xf8c]
7101a1d264  cbz w8,0x7101a1d394
7101a1d268  ldr x8,[x19, #0x8]
7101a1d26c  ldr w9,[x8, #0x150]
7101a1d270  cbnz w9,0x7101a1d394
7101a1d274  ldr x10,[x22, #0x258]
7101a1d278  ldr x9,[x22, #0x250]
7101a1d27c  sub x10,x10,x9
7101a1d280  asr x10,x10,#0x4
7101a1d284  cmp x10,#0x1
7101a1d288  b.ls 0x7101a1d4c8
7101a1d28c  ldr x9,[x9, #0x18]
7101a1d290  add x1,x9,#0x394
7101a1d294  ldr w9,[x9, #0x394]
7101a1d298  ldr x0,[x8, #0x5e8]
7101a1d29c  str w9,[x8, #0x394]
7101a1d2a0  b 0x7101a1d390
7101a1d2a4  ldr x8,[x19, #0x8]
7101a1d2a8  ldr w10,[x8, #0x150]
7101a1d2ac  cmp w10,#0x7
7101a1d2b0  b.hi 0x7101a1d328
7101a1d2b4  adrp x9,0x7105314000
7101a1d2b8  ldr x9,[x9, #0x510]
7101a1d2bc  ldr x13,[x9]
7101a1d2c0  ldr x9,[x13, #0x228]
7101a1d2c4  ldr x9,[x9]
7101a1d2c8  ldr x12,[x9]
7101a1d2cc  sxtw x11,w10
7101a1d2d0  ldr w9,[x12, x11, LSL #0x2]
7101a1d2d4  cmn w9,#0x1
7101a1d2d8  b.eq 0x7101a1d32c
7101a1d2dc  cbz w9,0x7101a1d320
7101a1d2e0  cmp w9,#0x3c
7101a1d2e4  adrp x14,0x7105314000
7101a1d2e8  add x14,x14,#0x518
7101a1d2ec  b.hi 0x7101a1d30c
7101a1d2f0  ldrb w15,[x13]
7101a1d2f4  cbnz w15,0x7101a1d30c
7101a1d2f8  ldr x13,[x13, #0x58]
7101a1d2fc  ldr x13,[x13]
7101a1d300  ldr x13,[x13]
7101a1d304  mov w14,#0xf7d8
7101a1d308  madd x14,x9,x14,x13
7101a1d30c  ldrb w13,[x14]
7101a1d310  cbnz w13,0x7101a1d32c
7101a1d314  str wzr,[x12, x11, LSL #0x2]
7101a1d318  ldr x8,[x19, #0x8]
7101a1d31c  mov w9,wzr
7101a1d320  str w9,[sp]
7101a1d324  b 0x7101a1d384
7101a1d328  mov w9,#0xffffffff
7101a1d32c  str w9,[sp]
7101a1d330  ldr w11,[x22, #0x16c]
7101a1d334  cmp w11,#0x7
7101a1d338  b.eq 0x7101a1d384
7101a1d33c  ldr x11,[x22, #0x250]
7101a1d340  ldr x12,[x22, #0x258]
7101a1d344  cmp x11,x12
7101a1d348  b.eq 0x7101a1d384
7101a1d34c  ldr x13,[x11, #0x8]
7101a1d350  ldr w14,[x13, #0x150]
7101a1d354  cmp w14,w10
7101a1d358  b.eq 0x7101a1d378
7101a1d35c  ldr w14,[x13, #0x5d0]
7101a1d360  cbz w14,0x7101a1d378
7101a1d364  ldr w14,[x13, #0x1f8]
7101a1d368  cbnz w14,0x7101a1d378
7101a1d36c  ldr w13,[x13, #0x394]
7101a1d370  cmp w13,w9
7101a1d374  b.eq 0x7101a1d394
7101a1d378  add x11,x11,#0x10
7101a1d37c  cmp x12,x11
7101a1d380  b.ne 0x7101a1d34c
7101a1d384  ldr x0,[x8, #0x5e8]
7101a1d388  str w9,[x8, #0x394]
7101a1d38c  mov x1,sp
7101a1d390  bl 0x71019fd0b0
7101a1d394  ldr x8,[x19, #0x8]
7101a1d398  ldr w2,[x8, #0x1f8]
7101a1d39c  ldrb w9,[x8, #0x6bb]
7101a1d3a0  cbz w9,0x7101a1d3ac
7101a1d3a4  ldr w3,[x8, #0x1fc]
7101a1d3a8  b 0x7101a1d3b0
7101a1d3ac  mov w3,#0xffffffff
7101a1d3b0  ldr x8,[x21, #0x8]
7101a1d3b4  ldr w1,[x8, #0x28]
7101a1d3b8  ldr x0,[x8, #0x20]
7101a1d3bc  bl 0x71032d2e70
7101a1d3c0  ldr x8,[x21, #0x8]
7101a1d3c4  ldr x8,[x8, #0x20]
7101a1d3c8  ldr x9,[x8, #0x100]
7101a1d3cc  ldr x9,[x9, #0x38]
7101a1d3d0  cbz x9,0x7101a1d3e0
7101a1d3d4  ldrb w10,[x9, #0x58]
7101a1d3d8  orr w10,w10,#0x1
7101a1d3dc  strb w10,[x9, #0x58]
7101a1d3e0  mov w9,#0x1
7101a1d3e4  strb w9,[x8, #0x163]
7101a1d3e8  ldr x22,[x21, #0x8]
7101a1d3ec  ldrb w8,[x22, #0x35]
7101a1d3f0  strb w9,[x22, #0x36]
7101a1d3f4  cbz w8,0x7101a1d408
7101a1d3f8  ldrb w8,[x22, #0x37]
7101a1d3fc  cmp w8,#0x0
7101a1d400  cset w21,eq
7101a1d404  b 0x7101a1d40c
7101a1d408  mov w21,wzr
7101a1d40c  ldr x23,[x22, #0x20]
7101a1d410  ldr x0,[x23, #0x100]
7101a1d414  ldr x8,[x0]
7101a1d418  ldr x8,[x8, #0x60]
7101a1d41c  mov w1,w21
7101a1d420  blr x8
7101a1d424  strb w21,[x23, #0x162]
7101a1d428  ldrb w8,[x22, #0x35]
7101a1d42c  cbz w8,0x7101a1d440
7101a1d430  ldrb w8,[x22, #0x36]
7101a1d434  cbz w8,0x7101a1d440
7101a1d438  ldrb w8,[x22, #0x37]
7101a1d43c  eor w8,w8,#0x1
7101a1d440  ldr x9,[x22, #0x20]
7101a1d444  ldr x10,[x9, #0x100]
7101a1d448  ldr x10,[x10, #0x38]
7101a1d44c  cbz x10,0x7101a1d460
7101a1d450  ldrb w11,[x10, #0x58]
7101a1d454  and w11,w11,#0xfe
7101a1d458  orr w11,w11,w8
7101a1d45c  strb w11,[x10, #0x58]
7101a1d460  strb w8,[x9, #0x163]
7101a1d464  ldr x8,[x19, #0x8]
7101a1d468  mov w9,#0x1
7101a1d46c  str w9,[x8, #0x5d0]
7101a1d470  ldrb w9,[x8, #0x6b9]
7101a1d474  cbnz w9,0x7101a1d480
7101a1d478  ldr w9,[x8, #0x1f8]
7101a1d47c  cbz w9,0x7101a1d490
7101a1d480  ldr x9,[x8, #0x678]
7101a1d484  cmp x9,#0x0
7101a1d488  cset w9,ne
7101a1d48c  and w20,w9,w20
7101a1d490  ldr x0,[x8, #0x5e8]
7101a1d494  and w2,w20,#0x1
7101a1d498  mov w1,#0x1
7101a1d49c  mov w20,#0x1
7101a1d4a0  bl 0x71019fff00
7101a1d4a4  ldr x8,[x19, #0x8]
7101a1d4a8  strb w20,[x8, #0x6ba]
7101a1d4ac  ldp x29,x30,[sp, #0x50]
7101a1d4b0  ldp x20,x19,[sp, #0x40]
7101a1d4b4  ldp x22,x21,[sp, #0x30]
7101a1d4b8  ldp x24,x23,[sp, #0x20]
7101a1d4bc  ldp x26,x25,[sp, #0x10]
7101a1d4c0  add sp,sp,#0x60
7101a1d4c4  ret
7101a1d4c8  add x0,x22,#0x250
7101a1d4cc  bl 0x71039c1330
