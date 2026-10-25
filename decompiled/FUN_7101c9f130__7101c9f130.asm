// addr:      7101c9f130
// offset:    0x1c9f130
// name:      FUN_7101c9f130
// mangled:   
// size:      544

7101c9f130  sub sp,sp,#0xb0
7101c9f134  str d8,[sp, #0x40]
7101c9f138  stp x28,x27,[sp, #0x50]
7101c9f13c  stp x26,x25,[sp, #0x60]
7101c9f140  stp x24,x23,[sp, #0x70]
7101c9f144  stp x22,x21,[sp, #0x80]
7101c9f148  stp x20,x19,[sp, #0x90]
7101c9f14c  stp x29,x30,[sp, #0xa0]
7101c9f150  add x29,sp,#0xa0
7101c9f154  ldr x28,[x0, #0x228]
7101c9f158  ldr x24,[x0, #0x230]
7101c9f15c  cmp x28,x24
7101c9f160  str w1,[sp, #0xc]
7101c9f164  b.eq 0x7101c9f32c
7101c9f168  add x8,x0,#0x118
7101c9f16c  str x8,[sp, #0x48]
7101c9f170  ldr w8,[sp, #0xc]
7101c9f174  fmov s8,0x3f800000
7101c9f178  mov x20,x0
7101c9f17c  mov w21,wzr
7101c9f180  mov w22,wzr
7101c9f184  adrp x23,0x710523d000
7101c9f188  add x23,x23,#0x988
7101c9f18c  and w8,w8,#0xffff
7101c9f190  str w8,[sp, #0x8]
7101c9f194  ldr w8,[x28]
7101c9f198  cmp w8,#0x21e
7101c9f19c  b.ne 0x7101c9f1b4
7101c9f1a0  ldr w1,[sp, #0xc]
7101c9f1a4  mov x0,x20
7101c9f1a8  mov w2,wzr
7101c9f1ac  bl 0x7101c9f350
7101c9f1b0  b 0x7101c9f31c
7101c9f1b4  ldr x0,[sp, #0x48]
7101c9f1b8  add x8,sp,#0x30
7101c9f1bc  adrp x1,0x7104422000
7101c9f1c0  add x1,x1,#0x4cd
7101c9f1c4  mov w2,w21
7101c9f1c8  bl 0x7103776640
7101c9f1cc  ldr w27,[x28]
7101c9f1d0  ldr w8,[sp, #0x8]
7101c9f1d4  and w19,w27,w8
7101c9f1d8  ldr x25,[sp, #0x38]
7101c9f1dc  mov x0,x25
7101c9f1e0  cmp w19,w27
7101c9f1e4  b.ne 0x7101c9f1f4
7101c9f1e8  adrp x1,0x710439d000
7101c9f1ec  add x1,x1,#0x548
7101c9f1f0  b 0x7101c9f1fc
7101c9f1f4  adrp x1,0x71043ad000
7101c9f1f8  add x1,x1,#0x87c
7101c9f1fc  mov v0.16B,v8.16B
7101c9f200  bl 0x7103778300
7101c9f204  ldr x1,[x20, #0x168]
7101c9f208  add x0,sp,#0x20
7101c9f20c  mov w2,w22
7101c9f210  bl 0x7103771d60
7101c9f214  ldr x26,[sp, #0x28]
7101c9f218  ldr x0,[x26]
7101c9f21c  cbz x0,0x7101c9f238
7101c9f220  ldr x8,[x0]
7101c9f224  ldr x8,[x8, #0x2f0]
7101c9f228  cmp w19,w27
7101c9f22c  cset w1,eq
7101c9f230  mov w2,wzr
7101c9f234  blr x8
7101c9f238  cmp w19,w27
7101c9f23c  b.ne 0x7101c9f250
7101c9f240  ldr x8,[x26]
7101c9f244  cbz x8,0x7101c9f260
7101c9f248  ldr x1,[x8, #0x88]
7101c9f24c  b 0x7101c9f268
7101c9f250  ldr x8,[x26]
7101c9f254  cbz x8,0x7101c9f288
7101c9f258  ldr x1,[x8, #0x88]
7101c9f25c  b 0x7101c9f290
7101c9f260  adrp x1,0x7104867000
7101c9f264  add x1,x1,#0xc2e
7101c9f268  ldr x0,[sp, #0x48]
7101c9f26c  add x8,sp,#0x10
7101c9f270  bl 0x7103776640
7101c9f274  ldr x27,[sp, #0x18]
7101c9f278  mov x0,x27
7101c9f27c  adrp x1,0x7104270000
7101c9f280  add x1,x1,#0x82
7101c9f284  b 0x7101c9f2ac
7101c9f288  adrp x1,0x7104867000
7101c9f28c  add x1,x1,#0xc2e
7101c9f290  ldr x0,[sp, #0x48]
7101c9f294  add x8,sp,#0x10
7101c9f298  bl 0x7103776640
7101c9f29c  ldr x27,[sp, #0x18]
7101c9f2a0  mov x0,x27
7101c9f2a4  adrp x1,0x7104401000
7101c9f2a8  add x1,x1,#0x6e5
7101c9f2ac  mov v0.16B,v8.16B
7101c9f2b0  bl 0x7103778300
7101c9f2b4  stp x23,xzr,[sp, #0x10]
7101c9f2b8  cbz x27,0x7101c9f2dc
7101c9f2bc  ldr x0,[x27, #0x18]
7101c9f2c0  adrp x8,0x710523d000
7101c9f2c4  add x8,x8,#0x9a8
7101c9f2c8  stp x8,xzr,[x27, #0x10]
7101c9f2cc  cbz x0,0x7101c9f2d4
7101c9f2d0  bl 0x710392eb40
7101c9f2d4  mov x0,x27
7101c9f2d8  bl 0x710392eb40
7101c9f2dc  adrp x8,0x710523d000
7101c9f2e0  add x8,x8,#0x9c8
7101c9f2e4  mov x0,x26
7101c9f2e8  add w21,w21,#0x1
7101c9f2ec  stp x8,xzr,[sp, #0x20]
7101c9f2f0  bl 0x710392eb40
7101c9f2f4  stp x23,xzr,[sp, #0x30]
7101c9f2f8  cbz x25,0x7101c9f31c
7101c9f2fc  ldr x0,[x25, #0x18]
7101c9f300  adrp x8,0x710523d000
7101c9f304  add x8,x8,#0x9a8
7101c9f308  stp x8,xzr,[x25, #0x10]
7101c9f30c  cbz x0,0x7101c9f314
7101c9f310  bl 0x710392eb40
7101c9f314  mov x0,x25
7101c9f318  bl 0x710392eb40
7101c9f31c  add x28,x28,#0x4
7101c9f320  add w22,w22,#0x1
7101c9f324  cmp x24,x28
7101c9f328  b.ne 0x7101c9f194
7101c9f32c  ldr d8,[sp, #0x40]
7101c9f330  ldp x29,x30,[sp, #0xa0]
7101c9f334  ldp x20,x19,[sp, #0x90]
7101c9f338  ldp x22,x21,[sp, #0x80]
7101c9f33c  ldp x24,x23,[sp, #0x70]
7101c9f340  ldp x26,x25,[sp, #0x60]
7101c9f344  ldp x28,x27,[sp, #0x50]
7101c9f348  add sp,sp,#0xb0
7101c9f34c  ret
