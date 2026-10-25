// addr:      7101a3a120
// offset:    0x1a3a120
// name:      FUN_7101a3a120
// mangled:   
// size:      792

7101a3a120  sub sp,sp,#0x40
7101a3a124  stp x22,x21,[sp, #0x10]
7101a3a128  stp x20,x19,[sp, #0x20]
7101a3a12c  stp x29,x30,[sp, #0x30]
7101a3a130  add x29,sp,#0x30
7101a3a134  mov x19,x0
7101a3a138  ldr x0,[x0, #0x8]
7101a3a13c  mov x21,#0xff0000000000
7101a3a140  orr w2,wzr,#0x3
7101a3a144  mov w20,w1
7101a3a148  movk x21,#0xc1ff, LSL #48
7101a3a14c  bl 0x7101a4a800
7101a3a150  adrp x8,0x710532f000
7101a3a154  ldr x8,[x8, #0x730]
7101a3a158  ldr x8,[x8, #0x8]
7101a3a15c  ldr x22,[x8, #0x168]
7101a3a160  mov x1,#0xb807
7101a3a164  movk x1,#0xb1cc, LSL #16
7101a3a168  movk x1,#0x11, LSL #32
7101a3a16c  mov x0,x22
7101a3a170  bl 0x71032631a0
7101a3a174  and x9,x0,#-0x100000000000000
7101a3a178  mov x10,#-0x3f00000000000000
7101a3a17c  and x8,x0,#0xffffffffff
7101a3a180  cmp x9,x10
7101a3a184  ccmp x8,#0x0,#0x4,eq
7101a3a188  mov x3,x21
7101a3a18c  b.ne 0x7101a3a1a0
7101a3a190  mov x0,x22
7101a3a194  mov x1,x21
7101a3a198  bl 0x7103263030
7101a3a19c  mov x3,x0
7101a3a1a0  ldr x0,[x19, #0x8]
7101a3a1a4  mov w1,w20
7101a3a1a8  mov x2,x21
7101a3a1ac  mov w4,wzr
7101a3a1b0  bl 0x7101a48700
7101a3a1b4  ldr x8,[x19, #0x8]
7101a3a1b8  ldr x10,[x8, #0x258]
7101a3a1bc  ldr x9,[x8, #0x250]
7101a3a1c0  sub x10,x10,x9
7101a3a1c4  mov x21,#0xbf7f
7101a3a1c8  movk x21,#0xefdf, LSL #16
7101a3a1cc  movk x21,#0xfbf7, LSL #32
7101a3a1d0  movk x21,#0x7efd, LSL #48
7101a3a1d4  sxtw x20,w20
7101a3a1d8  asr x10,x10,#0x3
7101a3a1dc  mul x10,x10,x21
7101a3a1e0  cmp x10,x20
7101a3a1e4  b.ls 0x7101a3a428
7101a3a1e8  orr w10,wzr,#0x3f8
7101a3a1ec  madd x9,x20,x10,x9
7101a3a1f0  strb wzr,[x9, #0x29]
7101a3a1f4  ldr x10,[x8, #0x3b8]
7101a3a1f8  ldr x9,[x8, #0x3b0]
7101a3a1fc  sub x10,x10,x9
7101a3a200  asr x10,x10,#0x4
7101a3a204  cmp x10,x20
7101a3a208  b.ls 0x7101a3a430
7101a3a20c  add x8,x9,x20, LSL #0x4
7101a3a210  ldr x22,[x8, #0x8]
7101a3a214  ldr w8,[x22, #0xd8]
7101a3a218  cmp w8,#0x1
7101a3a21c  str wzr,[x22, #0xfc]
7101a3a220  b.ne 0x7101a3a250
7101a3a224  add x0,x22,#0x78
7101a3a228  adrp x1,0x71042b3000
7101a3a22c  add x1,x1,#0xd87
7101a3a230  mov w2,#0x1
7101a3a234  mov w3,wzr
7101a3a238  bl 0x710377a280
7101a3a23c  ldr w2,[x22, #0xfc]
7101a3a240  add x0,x22,#0x58
7101a3a244  adrp x1,0x710439d000
7101a3a248  add x1,x1,#0xc8e
7101a3a24c  bl 0x7103778430
7101a3a250  ldr x8,[x19, #0x8]
7101a3a254  ldr x10,[x8, #0x258]
7101a3a258  ldr x9,[x8, #0x250]
7101a3a25c  sub x10,x10,x9
7101a3a260  asr x10,x10,#0x3
7101a3a264  mul x10,x10,x21
7101a3a268  cmp x10,x20
7101a3a26c  b.ls 0x7101a3a428
7101a3a270  orr w10,wzr,#0x3f8
7101a3a274  madd x9,x20,x10,x9
7101a3a278  strb wzr,[x9, #0xf8]
7101a3a27c  ldr x10,[x8, #0x3b8]
7101a3a280  ldr x9,[x8, #0x3b0]
7101a3a284  sub x10,x10,x9
7101a3a288  asr x10,x10,#0x4
7101a3a28c  cmp x10,x20
7101a3a290  b.ls 0x7101a3a430
7101a3a294  add x8,x9,x20, LSL #0x4
7101a3a298  ldr x8,[x8, #0x8]
7101a3a29c  str wzr,[x8, #0x100]
7101a3a2a0  ldr x8,[x8, #0x90]
7101a3a2a4  ldr x0,[x8, #0x10]
7101a3a2a8  cbz x0,0x7101a3a2c0
7101a3a2ac  mov x1,sp
7101a3a2b0  mov w2,wzr
7101a3a2b4  mov w3,wzr
7101a3a2b8  str wzr,[sp]
7101a3a2bc  bl 0x71037a2270
7101a3a2c0  ldr x8,[x19, #0x8]
7101a3a2c4  ldr x10,[x8, #0x258]
7101a3a2c8  ldr x9,[x8, #0x250]
7101a3a2cc  sub x10,x10,x9
7101a3a2d0  asr x10,x10,#0x3
7101a3a2d4  mul x10,x10,x21
7101a3a2d8  cmp x10,x20
7101a3a2dc  b.ls 0x7101a3a428
7101a3a2e0  orr w10,wzr,#0x3f8
7101a3a2e4  madd x9,x20,x10,x9
7101a3a2e8  str wzr,[x9, #0x1ac]
7101a3a2ec  ldr x10,[x8, #0x3b8]
7101a3a2f0  ldr x9,[x8, #0x3b0]
7101a3a2f4  sub x10,x10,x9
7101a3a2f8  asr x10,x10,#0x4
7101a3a2fc  cmp x10,x20
7101a3a300  b.ls 0x7101a3a430
7101a3a304  add x8,x9,x20, LSL #0x4
7101a3a308  ldr x22,[x8, #0x8]
7101a3a30c  ldr w8,[x22, #0xd8]
7101a3a310  str wzr,[x22, #0xf8]
7101a3a314  cbnz w8,0x7101a3a358
7101a3a318  add x1,x22,#0x68
7101a3a31c  mov x0,sp
7101a3a320  bl 0x7103778ab0
7101a3a324  ldr w8,[x22, #0x8]
7101a3a328  add w3,w8,#0x1
7101a3a32c  adrp x1,0x7104338000
7101a3a330  add x1,x1,#0xa8c
7101a3a334  mov x0,sp
7101a3a338  mov w2,#0x1
7101a3a33c  bl 0x710377a280
7101a3a340  ldr x0,[sp, #0x8]
7101a3a344  adrp x8,0x710523d000
7101a3a348  add x8,x8,#0x9a8
7101a3a34c  stp x8,xzr,[sp]
7101a3a350  cbz x0,0x7101a3a358
7101a3a354  bl 0x710392eb40
7101a3a358  ldr x8,[x19, #0x8]
7101a3a35c  ldr x10,[x8, #0x258]
7101a3a360  ldr x9,[x8, #0x250]
7101a3a364  sub x10,x10,x9
7101a3a368  asr x10,x10,#0x3
7101a3a36c  mul x10,x10,x21
7101a3a370  cmp x10,x20
7101a3a374  b.ls 0x7101a3a428
7101a3a378  orr w10,wzr,#0x3f8
7101a3a37c  madd x10,x20,x10,x9
7101a3a380  mov w11,#0xffffffff
7101a3a384  str w11,[x10, #0x1b8]
7101a3a388  strb wzr,[x10, #0x3f5]
7101a3a38c  strb wzr,[x10, #0x3f7]
7101a3a390  ldr x10,[x8, #0x3b8]
7101a3a394  ldr x11,[x8, #0x3b0]
7101a3a398  sub x10,x10,x11
7101a3a39c  asr x10,x10,#0x4
7101a3a3a0  cmp x10,x20
7101a3a3a4  b.ls 0x7101a3a430
7101a3a3a8  orr w8,wzr,#0x3f8
7101a3a3ac  madd x8,x20,x8,x9
7101a3a3b0  mov w9,#0x1
7101a3a3b4  strb w9,[x8, #0x3f4]
7101a3a3b8  ldr x8,[x19, #0x8]
7101a3a3bc  ldr x10,[x8, #0x258]
7101a3a3c0  ldr x9,[x8, #0x250]
7101a3a3c4  sub x10,x10,x9
7101a3a3c8  asr x10,x10,#0x3
7101a3a3cc  mul x10,x10,x21
7101a3a3d0  cmp x10,x20
7101a3a3d4  b.ls 0x7101a3a428
7101a3a3d8  orr w8,wzr,#0x3f8
7101a3a3dc  madd x8,x20,x8,x9
7101a3a3e0  strb wzr,[x8, #0x3f5]
7101a3a3e4  ldr x8,[x19, #0x8]
7101a3a3e8  ldr x10,[x8, #0x258]
7101a3a3ec  ldr x9,[x8, #0x250]
7101a3a3f0  sub x10,x10,x9
7101a3a3f4  asr x10,x10,#0x3
7101a3a3f8  mul x10,x10,x21
7101a3a3fc  cmp x10,x20
7101a3a400  b.ls 0x7101a3a428
7101a3a404  orr w8,wzr,#0x3f8
7101a3a408  madd x8,x20,x8,x9
7101a3a40c  mov w9,#0x1
7101a3a410  strb w9,[x8, #0x3f4]
7101a3a414  ldp x29,x30,[sp, #0x30]
7101a3a418  ldp x20,x19,[sp, #0x20]
7101a3a41c  ldp x22,x21,[sp, #0x10]
7101a3a420  add sp,sp,#0x40
7101a3a424  ret
7101a3a428  add x0,x8,#0x250
7101a3a42c  bl 0x71039c1330
7101a3a430  add x0,x8,#0x3b0
7101a3a434  bl 0x71039c1330
