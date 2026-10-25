// addr:      7101f2f100
// offset:    0x1f2f100
// name:      FUN_7101f2f100
// mangled:   
// size:      776

7101f2f100  sub sp,sp,#0x60
7101f2f104  str d8,[sp, #0x20]
7101f2f108  str x23,[sp, #0x28]
7101f2f10c  stp x22,x21,[sp, #0x30]
7101f2f110  stp x20,x19,[sp, #0x40]
7101f2f114  stp x29,x30,[sp, #0x50]
7101f2f118  add x29,sp,#0x50
7101f2f11c  mov x19,x0
7101f2f120  mov w1,#0x8980
7101f2f124  mov w0,#0x10
7101f2f128  str wzr,[sp, #0xc]
7101f2f12c  bl 0x710392e290
7101f2f130  mov x20,x0
7101f2f134  cbnz x0,0x7101f2f180
7101f2f138  adrp x8,0x7105332000
7101f2f13c  ldr x0,[x8, #0xf00]
7101f2f140  cbz x0,0x7101f2f17c
7101f2f144  mov w8,#0x8980
7101f2f148  str wzr,[sp, #0x1c]
7101f2f14c  add x1,sp,#0x1c
7101f2f150  str x8,[sp, #0x10]
7101f2f154  ldr x8,[x0]
7101f2f158  ldr x8,[x8, #0x30]
7101f2f15c  add x2,sp,#0x10
7101f2f160  blr x8
7101f2f164  tbz w0,#0x0,0x7101f2f17c
7101f2f168  mov w1,#0x8980
7101f2f16c  mov w0,#0x10
7101f2f170  bl 0x710392e290
7101f2f174  mov x20,x0
7101f2f178  cbnz x0,0x7101f2f180
7101f2f17c  mov x20,xzr
7101f2f180  mov w2,#0x8980
7101f2f184  mov x0,x20
7101f2f188  mov w1,wzr
7101f2f18c  mov w22,#0x5f00
7101f2f190  movk w22,#0x5, LSL #16
7101f2f194  bl 0x71039c02a0
7101f2f198  mov w2,#0x44c
7101f2f19c  add x0,sp,#0xc
7101f2f1a0  mov x1,x20
7101f2f1a4  bl 0x71039c6180
7101f2f1a8  ldr w2,[sp, #0xc]
7101f2f1ac  add x21,x19,#0xf8
7101f2f1b0  mov x0,x21
7101f2f1b4  mov x1,x20
7101f2f1b8  bl 0x7101f2f410
7101f2f1bc  mov w8,#0xe1f4
7101f2f1c0  movk w8,#0x2, LSL #16
7101f2f1c4  add x23,x19,x8
7101f2f1c8  ldr w0,[x23]
7101f2f1cc  mov x1,x21
7101f2f1d0  bl 0x7101f23d30
7101f2f1d4  mov w0,#0x10
7101f2f1d8  mov x1,x22
7101f2f1dc  str wzr,[sp, #0x8]
7101f2f1e0  bl 0x710392e290
7101f2f1e4  mov x21,x0
7101f2f1e8  cbnz x0,0x7101f2f230
7101f2f1ec  adrp x8,0x7105332000
7101f2f1f0  ldr x0,[x8, #0xf00]
7101f2f1f4  cbz x0,0x7101f2f22c
7101f2f1f8  str wzr,[sp, #0x1c]
7101f2f1fc  str x22,[sp, #0x10]
7101f2f200  ldr x8,[x0]
7101f2f204  ldr x8,[x8, #0x30]
7101f2f208  add x1,sp,#0x1c
7101f2f20c  add x2,sp,#0x10
7101f2f210  blr x8
7101f2f214  tbz w0,#0x0,0x7101f2f22c
7101f2f218  mov w0,#0x10
7101f2f21c  mov x1,x22
7101f2f220  bl 0x710392e290
7101f2f224  mov x21,x0
7101f2f228  cbnz x0,0x7101f2f230
7101f2f22c  mov x21,xzr
7101f2f230  mov w2,#0x5f00
7101f2f234  movk w2,#0x5, LSL #16
7101f2f238  mov x0,x21
7101f2f23c  mov w1,wzr
7101f2f240  bl 0x71039c02a0
7101f2f244  mov w2,#0x2af8
7101f2f248  add x0,sp,#0x8
7101f2f24c  mov x1,x21
7101f2f250  bl 0x71039c6490
7101f2f254  ldr w2,[sp, #0x8]
7101f2f258  mov w8,#0x7140
7101f2f25c  movk w8,#0x1, LSL #16
7101f2f260  add x22,x19,x8
7101f2f264  mov x0,x22
7101f2f268  mov x1,x21
7101f2f26c  bl 0x7101f2f410
7101f2f270  ldr w0,[x23]
7101f2f274  mov x1,x22
7101f2f278  bl 0x7101f23d30
7101f2f27c  ldr w8,[x19, #0xd8]
7101f2f280  mov w10,#0x7160
7101f2f284  movk w10,#0x1, LSL #16
7101f2f288  add x9,x19,#0x110
7101f2f28c  add x10,x19,x10
7101f2f290  cmp w8,#0x1
7101f2f294  csel x9,x9,x10,eq
7101f2f298  add x10,x9,#0x17, LSL #12
7101f2f29c  mov w11,#0x1
7101f2f2a0  str wzr,[x9]
7101f2f2a4  strb w11,[x9, #0xb4]
7101f2f2a8  str wzr,[x9, #0x2e0]
7101f2f2ac  strb w11,[x9, #0x394]
7101f2f2b0  str wzr,[x9, #0x5c0]
7101f2f2b4  strb w11,[x9, #0x674]
7101f2f2b8  str wzr,[x9, #0x8a0]
7101f2f2bc  strb w11,[x9, #0x954]
7101f2f2c0  add x9,x9,#0xb80
7101f2f2c4  cmp x9,x10
7101f2f2c8  b.ne 0x7101f2f2a0
7101f2f2cc  mov w9,#0xe200
7101f2f2d0  movk w9,#0x2, LSL #16
7101f2f2d4  mov w10,#0xe2a4
7101f2f2d8  movk w10,#0x2, LSL #16
7101f2f2dc  mov w23,#0x1
7101f2f2e0  mov x0,x19
7101f2f2e4  strb wzr,[x19, x9, LSL ]
7101f2f2e8  strb w23,[x19, x10, LSL ]
7101f2f2ec  str w8,[x19, #0xd8]
7101f2f2f0  bl 0x7101f2b8e0
7101f2f2f4  ldr x8,[x19, #0xd0]
7101f2f2f8  ldr x8,[x8]
7101f2f2fc  ldr w10,[x19, #0xd8]
7101f2f300  fmov s8,0x3f800000
7101f2f304  mov v0.16B,v8.16B
7101f2f308  adrp x11,0x71042a3000
7101f2f30c  add x11,x11,#0x821
7101f2f310  ldr x0,[x8, #0x10]
7101f2f314  adrp x9,0x7104281000
7101f2f318  add x9,x9,#0x31d
7101f2f31c  cmp w10,#0x1
7101f2f320  csel x1,x11,x9,eq
7101f2f324  bl 0x7103778300
7101f2f328  ldr x0,[x19, #0xf0]
7101f2f32c  ldr x8,[x0]
7101f2f330  ldr x8,[x8, #0x60]
7101f2f334  mov w1,#0x1
7101f2f338  blr x8
7101f2f33c  ldr x0,[x19, #0xf0]
7101f2f340  ldr x8,[x0]
7101f2f344  ldr x8,[x8, #0x70]
7101f2f348  mov w1,wzr
7101f2f34c  blr x8
7101f2f350  mov x22,x19
7101f2f354  ldr x0,[x22, #0xe8]!
7101f2f358  ldr x8,[x0]
7101f2f35c  ldr x8,[x8, #0x60]
7101f2f360  mov w1,#0x1
7101f2f364  blr x8
7101f2f368  ldr x0,[x22]
7101f2f36c  ldr x8,[x0]
7101f2f370  ldr x8,[x8, #0x70]
7101f2f374  mov w1,#0x1
7101f2f378  blr x8
7101f2f37c  ldr w8,[x19, #0xd8]
7101f2f380  cmp w8,#0x1
7101f2f384  cset w1,ne
7101f2f388  mov w2,#0x1
7101f2f38c  mov x0,x22
7101f2f390  bl 0x7103771a80
7101f2f394  mov w8,#0xe3d8
7101f2f398  movk w8,#0x2, LSL #16
7101f2f39c  mov v0.16B,v8.16B
7101f2f3a0  strb wzr,[x22, x8, LSL ]
7101f2f3a4  ldr x8,[x19, #0xd0]
7101f2f3a8  ldr x8,[x8]
7101f2f3ac  ldr x0,[x8, #0x10]
7101f2f3b0  adrp x1,0x7104421000
7101f2f3b4  add x1,x1,#0x55
7101f2f3b8  bl 0x7103778300
7101f2f3bc  ldursw x8,[x22, #-0x2c]
7101f2f3c0  cmp w8,#0x13
7101f2f3c4  b.cs 0x7101f2f404
7101f2f3c8  add x8,x19,x8, LSL #0x2
7101f2f3cc  str w23,[x8, #0x70]
7101f2f3d0  cbz x21,0x7101f2f3dc
7101f2f3d4  mov x0,x21
7101f2f3d8  bl 0x710392eb40
7101f2f3dc  cbz x20,0x7101f2f3e8
7101f2f3e0  mov x0,x20
7101f2f3e4  bl 0x710392eb40
7101f2f3e8  ldr d8,[sp, #0x20]
7101f2f3ec  ldp x29,x30,[sp, #0x50]
7101f2f3f0  ldp x20,x19,[sp, #0x40]
7101f2f3f4  ldr x23,[sp, #0x28]
7101f2f3f8  ldp x22,x21,[sp, #0x30]
7101f2f3fc  add sp,sp,#0x60
7101f2f400  ret
7101f2f404  bl 0x71039c2650
