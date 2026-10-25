// addr:      7102c2bf50
// offset:    0x2c2bf50
// name:      FUN_7102c2bf50
// mangled:   
// size:      4808

7102c2bf50  sub sp,sp,#0xd0
7102c2bf54  stp d13,d12,[sp, #0x40]
7102c2bf58  stp d11,d10,[sp, #0x50]
7102c2bf5c  stp d9,d8,[sp, #0x60]
7102c2bf60  stp x28,x27,[sp, #0x70]
7102c2bf64  stp x26,x25,[sp, #0x80]
7102c2bf68  stp x24,x23,[sp, #0x90]
7102c2bf6c  stp x22,x21,[sp, #0xa0]
7102c2bf70  stp x20,x19,[sp, #0xb0]
7102c2bf74  stp x29,x30,[sp, #0xc0]
7102c2bf78  add x29,sp,#0xc0
7102c2bf7c  adrp x8,0x7105123000
7102c2bf80  add x8,x8,#0x198
7102c2bf84  add x9,x1,#0x738
7102c2bf88  stp x8,x1,[x0]
7102c2bf8c  mov x8,#0x447a0000
7102c2bf90  movk x8,#0x447a, LSL #48
7102c2bf94  stp x9,x8,[x0, #0x10]
7102c2bf98  mov w8,#0x44960000
7102c2bf9c  str w8,[x0, #0x30]
7102c2bfa0  mov x8,#-0xfeff00000001
7102c2bfa4  stp xzr,xzr,[x0, #0x20]
7102c2bfa8  movk x8,#0x1, LSL #48
7102c2bfac  mov x19,x0
7102c2bfb0  stur xzr,[x0, #0x39]
7102c2bfb4  stur xzr,[x0, #0x34]
7102c2bfb8  strh wzr,[x0, #0xb8]
7102c2bfbc  stp xzr,x8,[x0, #0xa8]
7102c2bfc0  orr w8,wzr,#0x3f800000
7102c2bfc4  str w8,[x0, #0xe0]
7102c2bfc8  adrp x8,0x7105314000
7102c2bfcc  add x8,x8,#0x4d8
7102c2bfd0  stp xzr,xzr,[x0, #0x68]
7102c2bfd4  stp xzr,xzr,[x0, #0xd0]
7102c2bfd8  stp xzr,xzr,[x0, #0xc0]
7102c2bfdc  stp xzr,xzr,[x0, #0x58]
7102c2bfe0  stp xzr,xzr,[x0, #0x48]
7102c2bfe4  stp xzr,xzr,[x0, #0x98]
7102c2bfe8  stp xzr,xzr,[x0, #0x88]
7102c2bfec  stp xzr,xzr,[x0, #0x78]
7102c2bff0  ldarb w8,[x8]
7102c2bff4  tbz w8,#0x0,0x7102c2d1d4
7102c2bff8  mov x26,xzr
7102c2bffc  add x28,x19,#0x78
7102c2c000  adrp x20,0x7104518000
7102c2c004  add x20,x20,#0xa14
7102c2c008  orr x21,xzr,#0x100000000
7102c2c00c  mov w22,#0xbf800000
7102c2c010  mov w23,#0xd8
7102c2c014  mov w24,#0xd0
7102c2c018  mov w27,#0xffffffff
7102c2c01c  sub w8,w26,#0x1
7102c2c020  cmp w8,#0x4
7102c2c024  b.hi 0x7102c2c448
7102c2c028  ldrsw x8,[x20, x8, LSL #0x2]
7102c2c02c  add x8,x8,x20
7102c2c030  br x8
7102c2c034  mov w0,#0x10
7102c2c038  mov w1,#0x158
7102c2c03c  bl 0x710392e290
7102c2c040  cbnz x0,0x7102c2c088
7102c2c044  adrp x8,0x7105332000
7102c2c048  ldr x0,[x8, #0xf00]
7102c2c04c  cbz x0,0x7102c2c084
7102c2c050  mov w8,#0x158
7102c2c054  str wzr,[sp, #0x3c]
7102c2c058  add x1,sp,#0x3c
7102c2c05c  str x8,[sp, #0x30]
7102c2c060  ldr x8,[x0]
7102c2c064  ldr x8,[x8, #0x30]
7102c2c068  add x2,sp,#0x30
7102c2c06c  blr x8
7102c2c070  tbz w0,#0x0,0x7102c2c084
7102c2c074  mov w0,#0x10
7102c2c078  mov w1,#0x158
7102c2c07c  bl 0x710392e290
7102c2c080  cbnz x0,0x7102c2c088
7102c2c084  mov x0,xzr
7102c2c088  ldr x8,[x19, #0x8]
7102c2c08c  stp x8,x21,[x0, #0x8]
7102c2c090  mov w9,#0x42f00000
7102c2c094  adrp x10,0x7105124000
7102c2c098  add x10,x10,#0x2f8
7102c2c09c  add x8,x0,#0x12c
7102c2c0a0  str w9,[x0, #0x118]
7102c2c0a4  str x10,[x0]
7102c2c0a8  str xzr,[x8]
7102c2c0ac  add x8,x0,#0x124
7102c2c0b0  str xzr,[x8]
7102c2c0b4  mov x8,#0xcccd
7102c2c0b8  movk x8,#0x3dcc, LSL #16
7102c2c0bc  add x9,x0,#0x11c
7102c2c0c0  str xzr,[x9]
7102c2c0c4  strb wzr,[x0, #0x150]
7102c2c0c8  movk x8,#0x42f0, LSL #48
7102c2c0cc  stp xzr,xzr,[x0, #0x108]
7102c2c0d0  str x8,[x0, #0x138]
7102c2c0d4  mov x8,#-0x4080000000000000
7102c2c0d8  str wzr,[x0, #0x134]
7102c2c0dc  str w22,[x0, #0x154]
7102c2c0e0  stp xzr,xzr,[x0, #0xf8]
7102c2c0e4  stp x8,xzr,[x0, #0x140]
7102c2c0e8  stp xzr,xzr,[x0, #0xe8]
7102c2c0ec  stp xzr,xzr,[x0, #0xd8]
7102c2c0f0  stp xzr,xzr,[x0, #0xc8]
7102c2c0f4  stp xzr,xzr,[x0, #0xb8]
7102c2c0f8  stp xzr,xzr,[x0, #0xa8]
7102c2c0fc  stp xzr,xzr,[x0, #0x98]
7102c2c100  stp xzr,xzr,[x0, #0x88]
7102c2c104  stp xzr,xzr,[x0, #0x78]
7102c2c108  stp xzr,xzr,[x0, #0x68]
7102c2c10c  stp xzr,xzr,[x0, #0x58]
7102c2c110  stp xzr,xzr,[x0, #0x48]
7102c2c114  stp xzr,xzr,[x0, #0x38]
7102c2c118  stp xzr,xzr,[x0, #0x28]
7102c2c11c  stp xzr,xzr,[x0, #0x18]
7102c2c120  ldr x8,[x28]
7102c2c124  str x0,[x28]
7102c2c128  cbz x8,0x7102c2c448
7102c2c12c  ldr x9,[x8]
7102c2c130  ldr x9,[x9, #0x8]
7102c2c134  mov x0,x8
7102c2c138  blr x9
7102c2c13c  ldr x0,[x28]
7102c2c140  cbnz x0,0x7102c2c450
7102c2c144  b 0x7102c2c460
7102c2c148  mov w0,#0x10
7102c2c14c  mov x1,x24
7102c2c150  bl 0x710392e290
7102c2c154  mov x25,x0
7102c2c158  cbnz x0,0x7102c2c1a0
7102c2c15c  adrp x8,0x7105332000
7102c2c160  ldr x0,[x8, #0xf00]
7102c2c164  cbz x0,0x7102c2c19c
7102c2c168  str wzr,[sp, #0x3c]
7102c2c16c  str x24,[sp, #0x30]
7102c2c170  ldr x8,[x0]
7102c2c174  ldr x8,[x8, #0x30]
7102c2c178  add x1,sp,#0x3c
7102c2c17c  add x2,sp,#0x30
7102c2c180  blr x8
7102c2c184  tbz w0,#0x0,0x7102c2c19c
7102c2c188  mov w0,#0x10
7102c2c18c  mov x1,x24
7102c2c190  bl 0x710392e290
7102c2c194  mov x25,x0
7102c2c198  cbnz x0,0x7102c2c1a0
7102c2c19c  mov x25,xzr
7102c2c1a0  ldr x8,[x19, #0x8]
7102c2c1a4  adrp x9,0x7105124000
7102c2c1a8  add x9,x9,#0x190
7102c2c1ac  mov w0,#0x10
7102c2c1b0  mov w1,#0x40
7102c2c1b4  stp xzr,xzr,[x25, #0x40]
7102c2c1b8  stp xzr,xzr,[x25, #0x20]
7102c2c1bc  stp x9,x8,[x25]
7102c2c1c0  stp xzr,xzr,[x25, #0x30]
7102c2c1c4  stp x21,xzr,[x25, #0x10]
7102c2c1c8  bl 0x710392e290
7102c2c1cc  cbnz x0,0x7102c2c214
7102c2c1d0  adrp x8,0x7105332000
7102c2c1d4  ldr x0,[x8, #0xf00]
7102c2c1d8  cbz x0,0x7102c2c210
7102c2c1dc  mov w8,#0x40
7102c2c1e0  str wzr,[sp, #0x3c]
7102c2c1e4  add x1,sp,#0x3c
7102c2c1e8  str x8,[sp, #0x30]
7102c2c1ec  ldr x8,[x0]
7102c2c1f0  ldr x8,[x8, #0x30]
7102c2c1f4  add x2,sp,#0x30
7102c2c1f8  blr x8
7102c2c1fc  tbz w0,#0x0,0x7102c2c210
7102c2c200  mov w0,#0x10
7102c2c204  mov w1,#0x40
7102c2c208  bl 0x710392e290
7102c2c20c  cbnz x0,0x7102c2c214
7102c2c210  mov x0,xzr
7102c2c214  add x8,x0,#0x40
7102c2c218  stp x8,xzr,[x25, #0x60]
7102c2c21c  stp xzr,xzr,[x0, #0x30]
7102c2c220  stp xzr,xzr,[x0, #0x20]
7102c2c224  stp xzr,xzr,[x0, #0x10]
7102c2c228  stp xzr,xzr,[x0]
7102c2c22c  stur xzr,[x25, #0x7d]
7102c2c230  str w22,[x25, #0x88]
7102c2c234  str w27,[x25, #0xc0]
7102c2c238  stp x0,x8,[x25, #0x50]
7102c2c23c  stp xzr,xzr,[x25, #0x70]
7102c2c240  stp xzr,xzr,[x25, #0xb0]
7102c2c244  stp xzr,xzr,[x25, #0xa0]
7102c2c248  stp xzr,xzr,[x25, #0x90]
7102c2c24c  b 0x7102c2c430
7102c2c250  mov w0,#0x10
7102c2c254  mov w1,#0x88
7102c2c258  bl 0x710392e290
7102c2c25c  mov x25,x0
7102c2c260  cbnz x0,0x7102c2c2ac
7102c2c264  adrp x8,0x7105332000
7102c2c268  ldr x0,[x8, #0xf00]
7102c2c26c  cbz x0,0x7102c2c2a8
7102c2c270  mov w8,#0x88
7102c2c274  str wzr,[sp, #0x3c]
7102c2c278  add x1,sp,#0x3c
7102c2c27c  str x8,[sp, #0x30]
7102c2c280  ldr x8,[x0]
7102c2c284  ldr x8,[x8, #0x30]
7102c2c288  add x2,sp,#0x30
7102c2c28c  blr x8
7102c2c290  tbz w0,#0x0,0x7102c2c2a8
7102c2c294  mov w0,#0x10
7102c2c298  mov w1,#0x88
7102c2c29c  bl 0x710392e290
7102c2c2a0  mov x25,x0
7102c2c2a4  cbnz x0,0x7102c2c2ac
7102c2c2a8  mov x25,xzr
7102c2c2ac  ldr x1,[x19, #0x8]
7102c2c2b0  mov x0,x25
7102c2c2b4  bl 0x7102c3a5f0
7102c2c2b8  b 0x7102c2c430
7102c2c2bc  mov w0,#0x10
7102c2c2c0  mov x1,x23
7102c2c2c4  bl 0x710392e290
7102c2c2c8  mov x25,x0
7102c2c2cc  cbnz x0,0x7102c2c314
7102c2c2d0  adrp x8,0x7105332000
7102c2c2d4  ldr x0,[x8, #0xf00]
7102c2c2d8  cbz x0,0x7102c2c310
7102c2c2dc  str wzr,[sp, #0x3c]
7102c2c2e0  str x23,[sp, #0x30]
7102c2c2e4  ldr x8,[x0]
7102c2c2e8  ldr x8,[x8, #0x30]
7102c2c2ec  add x1,sp,#0x3c
7102c2c2f0  add x2,sp,#0x30
7102c2c2f4  blr x8
7102c2c2f8  tbz w0,#0x0,0x7102c2c310
7102c2c2fc  mov w0,#0x10
7102c2c300  mov x1,x23
7102c2c304  bl 0x710392e290
7102c2c308  mov x25,x0
7102c2c30c  cbnz x0,0x7102c2c314
7102c2c310  mov x25,xzr
7102c2c314  ldr x1,[x19, #0x8]
7102c2c318  mov x0,x25
7102c2c31c  bl 0x7102c3ef30
7102c2c320  b 0x7102c2c430
7102c2c324  mov w0,#0x10
7102c2c328  mov w1,#0x58
7102c2c32c  bl 0x710392e290
7102c2c330  mov x25,x0
7102c2c334  cbnz x0,0x7102c2c380
7102c2c338  adrp x8,0x7105332000
7102c2c33c  ldr x0,[x8, #0xf00]
7102c2c340  cbz x0,0x7102c2c37c
7102c2c344  mov w8,#0x58
7102c2c348  str wzr,[sp, #0x3c]
7102c2c34c  add x1,sp,#0x3c
7102c2c350  str x8,[sp, #0x30]
7102c2c354  ldr x8,[x0]
7102c2c358  ldr x8,[x8, #0x30]
7102c2c35c  add x2,sp,#0x30
7102c2c360  blr x8
7102c2c364  tbz w0,#0x0,0x7102c2c37c
7102c2c368  mov w0,#0x10
7102c2c36c  mov w1,#0x58
7102c2c370  bl 0x710392e290
7102c2c374  mov x25,x0
7102c2c378  cbnz x0,0x7102c2c380
7102c2c37c  mov x25,xzr
7102c2c380  ldr x8,[x19, #0x8]
7102c2c384  adrp x9,0x7105124000
7102c2c388  add x9,x9,#0x228
7102c2c38c  mov w0,#0x10
7102c2c390  orr w1,wzr,#0x60
7102c2c394  stp x9,x8,[x25]
7102c2c398  stp xzr,xzr,[x25, #0x20]
7102c2c39c  stp x21,xzr,[x25, #0x10]
7102c2c3a0  bl 0x710392e290
7102c2c3a4  cbnz x0,0x7102c2c3ec
7102c2c3a8  adrp x8,0x7105332000
7102c2c3ac  ldr x0,[x8, #0xf00]
7102c2c3b0  cbz x0,0x7102c2c3e8
7102c2c3b4  orr w8,wzr,#0x60
7102c2c3b8  str wzr,[sp, #0x3c]
7102c2c3bc  add x1,sp,#0x3c
7102c2c3c0  str x8,[sp, #0x30]
7102c2c3c4  ldr x8,[x0]
7102c2c3c8  ldr x8,[x8, #0x30]
7102c2c3cc  add x2,sp,#0x30
7102c2c3d0  blr x8
7102c2c3d4  tbz w0,#0x0,0x7102c2c3e8
7102c2c3d8  mov w0,#0x10
7102c2c3dc  orr w1,wzr,#0x60
7102c2c3e0  bl 0x710392e290
7102c2c3e4  cbnz x0,0x7102c2c3ec
7102c2c3e8  mov x0,xzr
7102c2c3ec  add x8,x0,#0x60
7102c2c3f0  str x8,[x25, #0x40]
7102c2c3f4  stp xzr,xzr,[x0, #0x50]
7102c2c3f8  stp xzr,xzr,[x0, #0x40]
7102c2c3fc  stp xzr,xzr,[x0, #0x30]
7102c2c400  stp xzr,xzr,[x0, #0x20]
7102c2c404  stp xzr,xzr,[x0, #0x10]
7102c2c408  stp xzr,xzr,[x0]
7102c2c40c  stp x0,x8,[x25, #0x30]
7102c2c410  mov x8,#0xcccd
7102c2c414  movk x8,#0x3dcc, LSL #16
7102c2c418  movk x8,#0x4270, LSL #48
7102c2c41c  str x8,[x25, #0x48]
7102c2c420  mov x8,#0xcccd
7102c2c424  movk x8,#0x3d4c, LSL #16
7102c2c428  movk x8,#0x3f80, LSL #48
7102c2c42c  str x8,[x25, #0x50]
7102c2c430  ldr x0,[x28]
7102c2c434  str x25,[x28]
7102c2c438  cbz x0,0x7102c2c448
7102c2c43c  ldr x8,[x0]
7102c2c440  ldr x8,[x8, #0x8]
7102c2c444  blr x8
7102c2c448  ldr x0,[x28]
7102c2c44c  cbz x0,0x7102c2c460
7102c2c450  ldr x8,[x0]
7102c2c454  ldr x1,[x19, #0x10]
7102c2c458  ldr x8,[x8, #0x18]
7102c2c45c  blr x8
7102c2c460  add x26,x26,#0x1
7102c2c464  add x28,x28,#0x8
7102c2c468  cmp x26,#0x6
7102c2c46c  b.ne 0x7102c2c01c
7102c2c470  mov w0,#0x10
7102c2c474  mov w1,#0x20
7102c2c478  bl 0x710392e290
7102c2c47c  cbnz x0,0x7102c2c4c4
7102c2c480  adrp x8,0x7105332000
7102c2c484  ldr x0,[x8, #0xf00]
7102c2c488  cbz x0,0x7102c2c4c0
7102c2c48c  mov w8,#0x20
7102c2c490  str wzr,[sp, #0x3c]
7102c2c494  add x1,sp,#0x3c
7102c2c498  str x8,[sp, #0x30]
7102c2c49c  ldr x8,[x0]
7102c2c4a0  ldr x8,[x8, #0x30]
7102c2c4a4  add x2,sp,#0x30
7102c2c4a8  blr x8
7102c2c4ac  tbz w0,#0x0,0x7102c2c4c0
7102c2c4b0  mov w0,#0x10
7102c2c4b4  mov w1,#0x20
7102c2c4b8  bl 0x710392e290
7102c2c4bc  cbnz x0,0x7102c2c4c4
7102c2c4c0  mov x0,xzr
7102c2c4c4  ldr x8,[x19, #0x8]
7102c2c4c8  ldr x8,[x8, #0x340]
7102c2c4cc  mov x9,x19
7102c2c4d0  mov x19,#-0x1
7102c2c4d4  strb wzr,[x0, #0x18]
7102c2c4d8  str x8,[x0]
7102c2c4dc  stp x19,x19,[x0, #0x8]
7102c2c4e0  ldr x8,[x9, #0x68]
7102c2c4e4  str x9,[sp, #0x28]
7102c2c4e8  str x0,[x9, #0x68]
7102c2c4ec  cbz x8,0x7102c2c4f8
7102c2c4f0  mov x0,x8
7102c2c4f4  bl 0x710392eb40
7102c2c4f8  mov w0,#0x10
7102c2c4fc  mov w1,#0x40
7102c2c500  bl 0x710392e290
7102c2c504  cbnz x0,0x7102c2c54c
7102c2c508  adrp x8,0x7105332000
7102c2c50c  ldr x0,[x8, #0xf00]
7102c2c510  cbz x0,0x7102c2c548
7102c2c514  mov w8,#0x40
7102c2c518  str wzr,[sp, #0x3c]
7102c2c51c  add x1,sp,#0x3c
7102c2c520  str x8,[sp, #0x30]
7102c2c524  ldr x8,[x0]
7102c2c528  ldr x8,[x8, #0x30]
7102c2c52c  add x2,sp,#0x30
7102c2c530  blr x8
7102c2c534  tbz w0,#0x0,0x7102c2c548
7102c2c538  mov w0,#0x10
7102c2c53c  mov w1,#0x40
7102c2c540  bl 0x710392e290
7102c2c544  cbnz x0,0x7102c2c54c
7102c2c548  mov x0,xzr
7102c2c54c  ldr x9,[sp, #0x28]
7102c2c550  ldr x8,[x9, #0x8]
7102c2c554  ldr x8,[x8, #0x340]
7102c2c558  strb wzr,[x0, #0x1c]
7102c2c55c  str w27,[x0, #0x18]
7102c2c560  str wzr,[x0, #0x38]
7102c2c564  stp x19,x19,[x0, #0x8]
7102c2c568  mov x19,x9
7102c2c56c  stp xzr,xzr,[x0, #0x28]
7102c2c570  str x8,[x0]
7102c2c574  ldr x8,[x9, #0x70]
7102c2c578  str x0,[x9, #0x70]
7102c2c57c  cbz x8,0x7102c2c58c
7102c2c580  mov x0,x8
7102c2c584  bl 0x710392eb40
7102c2c588  ldr x0,[x19, #0x70]
7102c2c58c  mov w8,#0x1
7102c2c590  str w8,[x0, #0x28]
7102c2c594  ldr x8,[x19, #0x70]
7102c2c598  mov w9,#0x2
7102c2c59c  str w9,[x8, #0x2c]
7102c2c5a0  ldr x8,[x19, #0x70]
7102c2c5a4  orr w9,wzr,#0x3
7102c2c5a8  str w9,[x8, #0x30]
7102c2c5ac  ldr x8,[x19, #0x70]
7102c2c5b0  mov w9,#0x4
7102c2c5b4  str w9,[x8, #0x34]
7102c2c5b8  ldr x8,[x19, #0x70]
7102c2c5bc  mov w9,#0x5
7102c2c5c0  str w9,[x8, #0x38]
7102c2c5c4  mov w8,#0x100
7102c2c5c8  strh w8,[x19, #0xb4]
7102c2c5cc  ldr x8,[x19, #0x8]
7102c2c5d0  ldp x9,x8,[x8, #0x1a8]
7102c2c5d4  sub x8,x8,x9
7102c2c5d8  lsr x8,x8,#0x3
7102c2c5dc  cmp w8,#0x4
7102c2c5e0  b.cc 0x7102c2d198
7102c2c5e4  mov x24,xzr
7102c2c5e8  add x25,x19,#0x48
7102c2c5ec  mov w20,#0x130
7102c2c5f0  orr x26,xzr,#0x3f80000000000000
7102c2c5f4  orr w28,wzr,#0x3f800000
7102c2c5f8  mov w21,#0xa0
7102c2c5fc  mov w22,#0x98
7102c2c600  mov w0,#0x10
7102c2c604  cmp w24,#0x3
7102c2c608  b.eq 0x7102c2c6e0
7102c2c60c  cbnz w24,0x7102c2c854
7102c2c610  orr w1,wzr,#0xf0
7102c2c614  bl 0x710392e290
7102c2c618  cbnz x0,0x7102c2c660
7102c2c61c  adrp x8,0x7105332000
7102c2c620  ldr x0,[x8, #0xf00]
7102c2c624  cbz x0,0x7102c2c65c
7102c2c628  orr w8,wzr,#0xf0
7102c2c62c  str wzr,[sp, #0x3c]
7102c2c630  add x1,sp,#0x3c
7102c2c634  str x8,[sp, #0x30]
7102c2c638  ldr x8,[x0]
7102c2c63c  ldr x8,[x8, #0x30]
7102c2c640  add x2,sp,#0x30
7102c2c644  blr x8
7102c2c648  tbz w0,#0x0,0x7102c2c65c
7102c2c64c  mov w0,#0x10
7102c2c650  orr w1,wzr,#0xf0
7102c2c654  bl 0x710392e290
7102c2c658  cbnz x0,0x7102c2c660
7102c2c65c  mov x0,xzr
7102c2c660  ldr x8,[x19, #0x8]
7102c2c664  adrp x9,0x7105124000
7102c2c668  add x9,x9,#0x128
7102c2c66c  stp xzr,xzr,[x0, #0xa8]
7102c2c670  stur x26,[x0, #0x14]
7102c2c674  stp xzr,xzr,[x0, #0xd0]
7102c2c678  stur x28,[x0, #0x1c]
7102c2c67c  str x26,[x0, #0x28]
7102c2c680  str w28,[x0, #0x30]
7102c2c684  str xzr,[x0, #0x90]
7102c2c688  strb wzr,[x0, #0x8c]
7102c2c68c  stur xzr,[x0, #0x84]
7102c2c690  stur xzr,[x0, #0x7c]
7102c2c694  stur xzr,[x0, #0x74]
7102c2c698  stur xzr,[x0, #0x6c]
7102c2c69c  stur xzr,[x0, #0x64]
7102c2c6a0  stur xzr,[x0, #0x5c]
7102c2c6a4  stur xzr,[x0, #0x54]
7102c2c6a8  stur xzr,[x0, #0x4c]
7102c2c6ac  stur xzr,[x0, #0x44]
7102c2c6b0  stur xzr,[x0, #0x3c]
7102c2c6b4  stur xzr,[x0, #0x34]
7102c2c6b8  stur xzr,[x0, #0x9c]
7102c2c6bc  str w28,[x0, #0xa4]
7102c2c6c0  str w28,[x0, #0xc0]
7102c2c6c4  str w27,[x0, #0xe0]
7102c2c6c8  strb wzr,[x0, #0xe4]
7102c2c6cc  stp x9,x8,[x0]
7102c2c6d0  mov x8,#0x5
7102c2c6d4  movk x8,#0x1, LSL #32
7102c2c6d8  str x8,[x0, #0xb8]
7102c2c6dc  b 0x7102c2c8f4
7102c2c6e0  mov x1,x20
7102c2c6e4  bl 0x710392e290
7102c2c6e8  mov x23,x0
7102c2c6ec  cbnz x0,0x7102c2c734
7102c2c6f0  adrp x8,0x7105332000
7102c2c6f4  ldr x0,[x8, #0xf00]
7102c2c6f8  cbz x0,0x7102c2c730
7102c2c6fc  str wzr,[sp, #0x3c]
7102c2c700  str x20,[sp, #0x30]
7102c2c704  ldr x8,[x0]
7102c2c708  ldr x8,[x8, #0x30]
7102c2c70c  add x1,sp,#0x3c
7102c2c710  add x2,sp,#0x30
7102c2c714  blr x8
7102c2c718  tbz w0,#0x0,0x7102c2c730
7102c2c71c  mov w0,#0x10
7102c2c720  mov x1,x20
7102c2c724  bl 0x710392e290
7102c2c728  mov x23,x0
7102c2c72c  cbnz x0,0x7102c2c734
7102c2c730  mov x23,xzr
7102c2c734  ldr x8,[x19, #0x8]
7102c2c738  adrp x9,0x7105124000
7102c2c73c  add x9,x9,#0xa0
7102c2c740  mov w0,#0x10
7102c2c744  mov x1,x21
7102c2c748  stur x26,[x23, #0x14]
7102c2c74c  stur x28,[x23, #0x1c]
7102c2c750  str x26,[x23, #0x28]
7102c2c754  str w28,[x23, #0x30]
7102c2c758  stp xzr,xzr,[x23, #0x90]
7102c2c75c  strb wzr,[x23, #0x8c]
7102c2c760  stur xzr,[x23, #0x84]
7102c2c764  stur xzr,[x23, #0x7c]
7102c2c768  stur xzr,[x23, #0x74]
7102c2c76c  stur xzr,[x23, #0x6c]
7102c2c770  stur xzr,[x23, #0x64]
7102c2c774  stur xzr,[x23, #0x5c]
7102c2c778  stur xzr,[x23, #0x54]
7102c2c77c  stur xzr,[x23, #0x4c]
7102c2c780  stur xzr,[x23, #0x44]
7102c2c784  stur xzr,[x23, #0x3c]
7102c2c788  stur xzr,[x23, #0x34]
7102c2c78c  stp x9,x8,[x23]
7102c2c790  bl 0x710392e290
7102c2c794  cbnz x0,0x7102c2c7d8
7102c2c798  adrp x8,0x7105332000
7102c2c79c  ldr x0,[x8, #0xf00]
7102c2c7a0  cbz x0,0x7102c2c7d4
7102c2c7a4  str wzr,[sp, #0x3c]
7102c2c7a8  str x21,[sp, #0x30]
7102c2c7ac  ldr x8,[x0]
7102c2c7b0  ldr x8,[x8, #0x30]
7102c2c7b4  add x1,sp,#0x3c
7102c2c7b8  add x2,sp,#0x30
7102c2c7bc  blr x8
7102c2c7c0  tbz w0,#0x0,0x7102c2c7d4
7102c2c7c4  mov w0,#0x10
7102c2c7c8  mov x1,x21
7102c2c7cc  bl 0x710392e290
7102c2c7d0  cbnz x0,0x7102c2c7d8
7102c2c7d4  mov x0,xzr
7102c2c7d8  add x8,x0,#0xa0
7102c2c7dc  str x0,[x23, #0xa0]
7102c2c7e0  str x8,[x23, #0xb0]
7102c2c7e4  strb wzr,[x0, #0x20]
7102c2c7e8  strb wzr,[x0, #0x48]
7102c2c7ec  strb wzr,[x0, #0x70]
7102c2c7f0  strb wzr,[x0, #0x98]
7102c2c7f4  stp xzr,xzr,[x0, #0x10]
7102c2c7f8  stp xzr,xzr,[x0]
7102c2c7fc  stp xzr,xzr,[x0, #0x38]
7102c2c800  stp xzr,xzr,[x0, #0x28]
7102c2c804  stp xzr,xzr,[x0, #0x60]
7102c2c808  stp xzr,xzr,[x0, #0x50]
7102c2c80c  stp xzr,xzr,[x0, #0x88]
7102c2c810  stp xzr,xzr,[x0, #0x78]
7102c2c814  str x8,[x23, #0xa8]
7102c2c818  str w27,[x23, #0xd0]
7102c2c81c  strb wzr,[x23, #0xd4]
7102c2c820  stp xzr,xzr,[x23, #0xc0]
7102c2c824  stp xzr,xzr,[x23, #0x120]
7102c2c828  stp xzr,xzr,[x23, #0x110]
7102c2c82c  stp xzr,xzr,[x23, #0x100]
7102c2c830  stp xzr,xzr,[x23, #0xf0]
7102c2c834  stp xzr,xzr,[x23, #0xe0]
7102c2c838  ldr x0,[x25]
7102c2c83c  str x23,[x25]
7102c2c840  cbz x0,0x7102c2c910
7102c2c844  ldr x8,[x0]
7102c2c848  ldr x8,[x8, #0x8]
7102c2c84c  blr x8
7102c2c850  b 0x7102c2c910
7102c2c854  mov x1,x22
7102c2c858  bl 0x710392e290
7102c2c85c  cbnz x0,0x7102c2c8a0
7102c2c860  adrp x8,0x7105332000
7102c2c864  ldr x0,[x8, #0xf00]
7102c2c868  cbz x0,0x7102c2c89c
7102c2c86c  str wzr,[sp, #0x3c]
7102c2c870  str x22,[sp, #0x30]
7102c2c874  ldr x8,[x0]
7102c2c878  ldr x8,[x8, #0x30]
7102c2c87c  add x1,sp,#0x3c
7102c2c880  add x2,sp,#0x30
7102c2c884  blr x8
7102c2c888  tbz w0,#0x0,0x7102c2c89c
7102c2c88c  mov w0,#0x10
7102c2c890  mov x1,x22
7102c2c894  bl 0x710392e290
7102c2c898  cbnz x0,0x7102c2c8a0
7102c2c89c  mov x0,xzr
7102c2c8a0  ldr x8,[x19, #0x8]
7102c2c8a4  adrp x9,0x7105124000
7102c2c8a8  add x9,x9,#0x38
7102c2c8ac  stur x26,[x0, #0x14]
7102c2c8b0  stur x28,[x0, #0x1c]
7102c2c8b4  str x26,[x0, #0x28]
7102c2c8b8  stp x9,x8,[x0]
7102c2c8bc  str w28,[x0, #0x30]
7102c2c8c0  str xzr,[x0, #0x90]
7102c2c8c4  strb wzr,[x0, #0x8c]
7102c2c8c8  stur xzr,[x0, #0x84]
7102c2c8cc  stur xzr,[x0, #0x7c]
7102c2c8d0  stur xzr,[x0, #0x74]
7102c2c8d4  stur xzr,[x0, #0x6c]
7102c2c8d8  stur xzr,[x0, #0x64]
7102c2c8dc  stur xzr,[x0, #0x5c]
7102c2c8e0  stur xzr,[x0, #0x54]
7102c2c8e4  stur xzr,[x0, #0x4c]
7102c2c8e8  stur xzr,[x0, #0x44]
7102c2c8ec  stur xzr,[x0, #0x3c]
7102c2c8f0  stur xzr,[x0, #0x34]
7102c2c8f4  ldr x8,[x25]
7102c2c8f8  str x0,[x25]
7102c2c8fc  cbz x8,0x7102c2c910
7102c2c900  ldr x9,[x8]
7102c2c904  ldr x9,[x9, #0x8]
7102c2c908  mov x0,x8
7102c2c90c  blr x9
7102c2c910  ldr x0,[x25], #0x8
7102c2c914  ldr x1,[x19, #0x10]
7102c2c918  ldr x8,[x0]
7102c2c91c  ldr x8,[x8, #0x10]
7102c2c920  blr x8
7102c2c924  add x24,x24,#0x1
7102c2c928  cmp x24,#0x4
7102c2c92c  b.ne 0x7102c2c600
7102c2c930  mov w8,#0x1
7102c2c934  str w8,[x19, #0x20]
7102c2c938  ldr x8,[x19, #0x8]
7102c2c93c  ldr x20,[x8, #0x300]
7102c2c940  orr w1,wzr,#0xf
7102c2c944  mov x0,x20
7102c2c948  bl 0x710262bb40
7102c2c94c  orr w1,wzr,#0xfffffff0
7102c2c950  mov x0,x20
7102c2c954  bl 0x710262beb0
7102c2c958  ldr x8,[x19, #0x8]
7102c2c95c  ldr x10,[x8, #0x300]
7102c2c960  ldr w1,[x19, #0x20]
7102c2c964  ldr x9,[x10, #0x48]
7102c2c968  ldr x9,[x9, x1, LSL #0x3]
7102c2c96c  ldr x0,[x10, #0x60]
7102c2c970  add x11,x9,#0x8
7102c2c974  cmp x0,x11
7102c2c978  b.eq 0x7102c2c99c
7102c2c97c  ldp x1,x2,[x9, #0x8]
7102c2c980  bl 0x7102616cf0
7102c2c984  ldr x8,[x19, #0x8]
7102c2c988  ldr x10,[x8, #0x300]
7102c2c98c  ldr w1,[x19, #0x20]
7102c2c990  ldr x9,[x10, #0x48]
7102c2c994  ldr x9,[x9, x1, LSL #0x3]
7102c2c998  ldr x0,[x10, #0x60]
7102c2c99c  add x10,x9,#0x20
7102c2c9a0  add x0,x0,#0x18
7102c2c9a4  cmp x0,x10
7102c2c9a8  b.eq 0x7102c2c9bc
7102c2c9ac  ldp x1,x2,[x9, #0x20]
7102c2c9b0  bl 0x7102616cf0
7102c2c9b4  ldr x8,[x19, #0x8]
7102c2c9b8  ldr w1,[x19, #0x20]
7102c2c9bc  ldr x0,[x8, #0x308]
7102c2c9c0  bl 0x7102624870
7102c2c9c4  ldr x8,[x19, #0x8]
7102c2c9c8  ldr x0,[x8, #0x308]
7102c2c9cc  ldr w1,[x19, #0x20]
7102c2c9d0  bl 0x7102624740
7102c2c9d4  ldp x8,x9,[x19, #0x8]
7102c2c9d8  str wzr,[x19, #0x24]
7102c2c9dc  ldr x10,[x8, #0x340]
7102c2c9e0  ldp w12,w8,[x9, #0x88]
7102c2c9e4  ldp w13,w14,[x10]
7102c2c9e8  str w14,[x10]
7102c2c9ec  ldp w14,w15,[x10, #0x8]
7102c2c9f0  eor w13,w13,w13, LSL #0xb
7102c2c9f4  eor w13,w13,w13, LSR #0x8
7102c2c9f8  mov w11,#0x1
7102c2c9fc  sub w9,w11,w12
7102c2ca00  add w8,w9,w8
7102c2ca04  eor w13,w13,w15
7102c2ca08  eor w13,w13,w15, LSR #0x13
7102c2ca0c  udiv w9,w13,w8
7102c2ca10  stp w14,w15,[x10, #0x4]
7102c2ca14  str w13,[x10, #0xc]
7102c2ca18  msub w9,w9,w8,w13
7102c2ca1c  orr w8,wzr,#0x3c
7102c2ca20  add w9,w9,w12
7102c2ca24  mul w9,w9,w8
7102c2ca28  ucvtf s0,w9
7102c2ca2c  ldp x9,x10,[x19, #0x8]
7102c2ca30  str s0,[x19, #0x18]
7102c2ca34  ldr x9,[x9, #0x340]
7102c2ca38  ldp w13,w14,[x9]
7102c2ca3c  ldp w12,w10,[x10, #0x9c]
7102c2ca40  str w14,[x9]
7102c2ca44  ldp w14,w15,[x9, #0x8]
7102c2ca48  eor w13,w13,w13, LSL #0xb
7102c2ca4c  eor w13,w13,w13, LSR #0x8
7102c2ca50  eor w13,w13,w15
7102c2ca54  stp w14,w15,[x9, #0x4]
7102c2ca58  sub w14,w11,w12
7102c2ca5c  eor w13,w13,w15, LSR #0x13
7102c2ca60  add w10,w14,w10
7102c2ca64  udiv w14,w13,w10
7102c2ca68  msub w10,w14,w10,w13
7102c2ca6c  add w10,w10,w12
7102c2ca70  mul w10,w10,w8
7102c2ca74  ucvtf s0,w10
7102c2ca78  str w13,[x9, #0xc]
7102c2ca7c  ldr x9,[x19, #0x10]
7102c2ca80  str s0,[x19, #0x1c]
7102c2ca84  ldr w10,[x9, #0xb0]
7102c2ca88  mul w10,w10,w8
7102c2ca8c  ucvtf s0,w10
7102c2ca90  str s0,[x19, #0x30]
7102c2ca94  ldr w10,[x9, #0xb4]
7102c2ca98  str w10,[x19, #0x34]
7102c2ca9c  ldr w10,[x9, #0xb8]
7102c2caa0  strb wzr,[x19, #0x40]
7102c2caa4  stp w10,wzr,[x19, #0x38]
7102c2caa8  ldrb w10,[x19, #0xb8]
7102c2caac  str s0,[x19, #0x2c]
7102c2cab0  strh w11,[x19, #0xb6]
7102c2cab4  cbz w10,0x7102c2cad8
7102c2cab8  ldr w10,[x9, #0xbc]
7102c2cabc  mul w8,w10,w8
7102c2cac0  ucvtf s0,w8
7102c2cac4  str s0,[x19, #0x30]
7102c2cac8  ldr w8,[x9, #0xc0]
7102c2cacc  str w8,[x19, #0x34]
7102c2cad0  ldr w8,[x9, #0xc4]
7102c2cad4  str w8,[x19, #0x38]
7102c2cad8  ldr x8,[x19, #0x8]
7102c2cadc  ldr x8,[x8, #0x310]
7102c2cae0  ldp x24,x23,[x8, #0xd0]
7102c2cae4  cmp x24,x23
7102c2cae8  b.eq 0x7102c2cb20
7102c2caec  ldr w8,[x24, #0x8]
7102c2caf0  sub w8,w8,#0x2
7102c2caf4  cmp w8,#0x2
7102c2caf8  b.hi 0x7102c2cb20
7102c2cafc  add x8,x24,#0x10
7102c2cb00  cmp x23,x8
7102c2cb04  b.eq 0x7102c2d1c4
7102c2cb08  ldr w9,[x8, #0x8]
7102c2cb0c  add x8,x8,#0x10
7102c2cb10  sub w9,w9,#0x2
7102c2cb14  cmp w9,#0x2
7102c2cb18  b.ls 0x7102c2cb00
7102c2cb1c  sub x24,x8,#0x10
7102c2cb20  cmp x24,x23
7102c2cb24  b.eq 0x7102c2d198
7102c2cb28  adrp x8,0x7104472000
7102c2cb2c  ldr s10,[x8, #0x3b0]
7102c2cb30  fmov s8,wzr
7102c2cb34  fmov s9,0x3f800000
7102c2cb38  orr w21,wzr,#0x18
7102c2cb3c  adrp x28,0x7105123000
7102c2cb40  add x28,x28,#0xaa0
7102c2cb44  mov w20,#0xffffffff
7102c2cb48  adrp x26,0x7104754000
7102c2cb4c  add x26,x26,#0x84
7102c2cb50  orr x27,xzr,#0x100000000
7102c2cb54  adrp x25,0x7105123000
7102c2cb58  add x25,x25,#0x500
7102c2cb5c  adrp x17,0x7105123000
7102c2cb60  add x17,x17,#0x218
7102c2cb64  b 0x7102c2cb94
7102c2cb68  mov x24,x23
7102c2cb6c  adrp x25,0x7105123000
7102c2cb70  add x25,x25,#0x500
7102c2cb74  cmp x24,x23
7102c2cb78  b.ne 0x7102c2cb94
7102c2cb7c  b 0x7102c2d198
7102c2cb80  mov x0,xzr
7102c2cb84  b 0x7102c2d0a4
7102c2cb88  orr w10,wzr,#0x3
7102c2cb8c  mov x11,x28
7102c2cb90  b 0x7102c2cd74
7102c2cb94  ldr x18,[x24]
7102c2cb98  cbz x18,0x7102c2cbe4
7102c2cb9c  add x0,x18,#0x108
7102c2cba0  strb wzr,[x18, #0x110]
7102c2cba4  mov x22,x18
7102c2cba8  bl 0x71025e9d50
7102c2cbac  mov x10,x22
7102c2cbb0  ldr x8,[x10, #0x68]!
7102c2cbb4  mov x9,#0xa167
7102c2cbb8  movk x9,#0x67f9, LSL #16
7102c2cbbc  movk x9,#0x12, LSL #32
7102c2cbc0  mov x18,x22
7102c2cbc4  cmp x8,x9
7102c2cbc8  b.ne 0x7102c2cbf4
7102c2cbcc  mov w8,wzr
7102c2cbd0  mov x10,xzr
7102c2cbd4  mov w9,wzr
7102c2cbd8  adrp x17,0x7105123000
7102c2cbdc  add x17,x17,#0x218
7102c2cbe0  b 0x7102c2cd70
7102c2cbe4  cmp x18,#0x0
7102c2cbe8  cset w8,eq
7102c2cbec  mov w10,#0x68
7102c2cbf0  b 0x7102c2cc00
7102c2cbf4  mov w8,wzr
7102c2cbf8  adrp x17,0x7105123000
7102c2cbfc  add x17,x17,#0x218
7102c2cc00  mov w9,#0x1
7102c2cc04  cmp w9,#0x1e
7102c2cc08  b.eq 0x7102c2cc8c
7102c2cc0c  tbnz w8,#0x0,0x7102c2cc80
7102c2cc10  umull x11,w9,w21
7102c2cc14  ldr x12,[x17, x11, LSL #0x0]
7102c2cc18  ldrb w14,[x12]
7102c2cc1c  cbz w14,0x7102c2cc68
7102c2cc20  mov x11,xzr
7102c2cc24  add x12,x12,#0x1
7102c2cc28  mov w13,w20
7102c2cc2c  and w14,w14,#0xff
7102c2cc30  sub w15,w14,#0x41
7102c2cc34  add w16,w14,#0x20
7102c2cc38  cmp w15,#0x1a
7102c2cc3c  csel w14,w16,w14,cc
7102c2cc40  eor w14,w14,w13
7102c2cc44  and w14,w14,#0xff
7102c2cc48  ldr w14,[x26, w14, UXTW #0x2]
7102c2cc4c  eor w13,w14,w13, LSR #0x8
7102c2cc50  ldrb w14,[x12], #0x1
7102c2cc54  add x11,x11,x27
7102c2cc58  cbnz w14,0x7102c2cc2c
7102c2cc5c  mvn w12,w13
7102c2cc60  and x11,x11,#0xff00000000
7102c2cc64  b 0x7102c2cc70
7102c2cc68  mov x12,xzr
7102c2cc6c  mov x11,xzr
7102c2cc70  orr x11,x11,x12
7102c2cc74  ldr x12,[x10]
7102c2cc78  cmp x12,x11
7102c2cc7c  b.eq 0x7102c2cd6c
7102c2cc80  add w9,w9,#0x1
7102c2cc84  cmp w9,#0x1e
7102c2cc88  b.ne 0x7102c2cc0c
7102c2cc8c  tbnz w8,#0x0,0x7102c2ccb0
7102c2cc90  ldr x9,[x10]
7102c2cc94  mov x11,#0xed08
7102c2cc98  movk x11,#0xfc5c, LSL #16
7102c2cc9c  movk x11,#0x12, LSL #32
7102c2cca0  cmp x9,x11
7102c2cca4  b.ne 0x7102c2ccb0
7102c2cca8  mov w9,wzr
7102c2ccac  b 0x7102c2cd60
7102c2ccb0  mov w9,#0x1
7102c2ccb4  cmp w9,#0x1e
7102c2ccb8  b.eq 0x7102c2cd3c
7102c2ccbc  tbnz w8,#0x0,0x7102c2cd30
7102c2ccc0  umull x11,w9,w21
7102c2ccc4  ldr x12,[x25, x11, LSL #0x0]
7102c2ccc8  ldrb w14,[x12]
7102c2cccc  cbz w14,0x7102c2cd18
7102c2ccd0  mov x11,xzr
7102c2ccd4  add x12,x12,#0x1
7102c2ccd8  mov w13,w20
7102c2ccdc  and w14,w14,#0xff
7102c2cce0  sub w15,w14,#0x41
7102c2cce4  add w16,w14,#0x20
7102c2cce8  cmp w15,#0x1a
7102c2ccec  csel w14,w16,w14,cc
7102c2ccf0  eor w14,w14,w13
7102c2ccf4  and w14,w14,#0xff
7102c2ccf8  ldr w14,[x26, w14, UXTW #0x2]
7102c2ccfc  eor w13,w14,w13, LSR #0x8
7102c2cd00  ldrb w14,[x12], #0x1
7102c2cd04  add x11,x11,x27
7102c2cd08  cbnz w14,0x7102c2ccdc
7102c2cd0c  mvn w12,w13
7102c2cd10  and x11,x11,#0xff00000000
7102c2cd14  b 0x7102c2cd20
7102c2cd18  mov x12,xzr
7102c2cd1c  mov x11,xzr
7102c2cd20  orr x11,x11,x12
7102c2cd24  ldr x12,[x10]
7102c2cd28  cmp x12,x11
7102c2cd2c  b.eq 0x7102c2cd60
7102c2cd30  add w9,w9,#0x1
7102c2cd34  cmp w9,#0x1e
7102c2cd38  b.ne 0x7102c2ccbc
7102c2cd3c  tbnz w8,#0x0,0x7102c2cdd0
7102c2cd40  ldr x9,[x10]
7102c2cd44  mov x11,#0xb74c
7102c2cd48  movk x11,#0x6388, LSL #16
7102c2cd4c  movk x11,#0x17, LSL #32
7102c2cd50  cmp x9,x11
7102c2cd54  b.ne 0x7102c2cdd0
7102c2cd58  mov w9,wzr
7102c2cd5c  b 0x7102c2ce88
7102c2cd60  mov w10,#0x1
7102c2cd64  mov x11,x25
7102c2cd68  b 0x7102c2cd74
7102c2cd6c  mov x10,xzr
7102c2cd70  mov x11,x17
7102c2cd74  umaddl x9,w9,w21,x11
7102c2cd78  add x10,x19,x10, LSL #0x3
7102c2cd7c  ldr x19,[x10, #0x48]
7102c2cd80  ldr w25,[x9, #0x8]
7102c2cd84  ldr s11,[x9, #0xc]
7102c2cd88  ldrb w22,[x9, #0x10]
7102c2cd8c  cmp w25,#0x4
7102c2cd90  b.eq 0x7102c2cdbc
7102c2cd94  cmp w25,#0x5
7102c2cd98  b.eq 0x7102c2cda4
7102c2cd9c  cmp w25,#0x6
7102c2cda0  b.ne 0x7102c2cdb0
7102c2cda4  tbnz w8,#0x0,0x7102c2cdb0
7102c2cda8  ldr x8,[x18, #0xd8]
7102c2cdac  cbz x8,0x7102c2cf28
7102c2cdb0  mov x13,xzr
7102c2cdb4  mov v12.16B,v9.16B
7102c2cdb8  b 0x7102c2cf68
7102c2cdbc  mov v12.16B,v10.16B
7102c2cdc0  adrp x8,0x7102c34000
7102c2cdc4  add x8,x8,#0xeb0
7102c2cdc8  mov x13,x8
7102c2cdcc  b 0x7102c2cf68
7102c2cdd0  mov w9,#0x1
7102c2cdd4  cmp w9,#0x1c
7102c2cdd8  b.eq 0x7102c2ce64
7102c2cddc  tbnz w8,#0x0,0x7102c2ce58
7102c2cde0  umull x11,w9,w21
7102c2cde4  adrp x12,0x7105123000
7102c2cde8  add x12,x12,#0x7e8
7102c2cdec  ldr x12,[x12, x11, LSL #0x0]
7102c2cdf0  ldrb w14,[x12]
7102c2cdf4  cbz w14,0x7102c2ce40
7102c2cdf8  mov x11,xzr
7102c2cdfc  add x12,x12,#0x1
7102c2ce00  mov w13,w20
7102c2ce04  and w14,w14,#0xff
7102c2ce08  sub w15,w14,#0x41
7102c2ce0c  add w16,w14,#0x20
7102c2ce10  cmp w15,#0x1a
7102c2ce14  csel w14,w16,w14,cc
7102c2ce18  eor w14,w14,w13
7102c2ce1c  and w14,w14,#0xff
7102c2ce20  ldr w14,[x26, w14, UXTW #0x2]
7102c2ce24  eor w13,w14,w13, LSR #0x8
7102c2ce28  ldrb w14,[x12], #0x1
7102c2ce2c  add x11,x11,x27
7102c2ce30  cbnz w14,0x7102c2ce04
7102c2ce34  mvn w12,w13
7102c2ce38  and x11,x11,#0xff00000000
7102c2ce3c  b 0x7102c2ce48
7102c2ce40  mov x12,xzr
7102c2ce44  mov x11,xzr
7102c2ce48  orr x11,x11,x12
7102c2ce4c  ldr x12,[x10]
7102c2ce50  cmp x12,x11
7102c2ce54  b.eq 0x7102c2ce88
7102c2ce58  add w9,w9,#0x1
7102c2ce5c  cmp w9,#0x1c
7102c2ce60  b.ne 0x7102c2cddc
7102c2ce64  tbnz w8,#0x0,0x7102c2ce98
7102c2ce68  ldr x9,[x10]
7102c2ce6c  mov x11,#0x14a2
7102c2ce70  movk x11,#0x9bac, LSL #16
7102c2ce74  movk x11,#0x15, LSL #32
7102c2ce78  cmp x9,x11
7102c2ce7c  b.ne 0x7102c2ce98
7102c2ce80  mov w9,wzr
7102c2ce84  b 0x7102c2cb88
7102c2ce88  mov w10,#0x2
7102c2ce8c  adrp x11,0x7105123000
7102c2ce90  add x11,x11,#0x7e8
7102c2ce94  b 0x7102c2cd74
7102c2ce98  mov w9,#0x1
7102c2ce9c  cmp w9,#0x26
7102c2cea0  b.eq 0x7102c2d15c
7102c2cea4  tbnz w8,#0x0,0x7102c2cf18
7102c2cea8  umull x11,w9,w21
7102c2ceac  ldr x12,[x28, x11, LSL #0x0]
7102c2ceb0  ldrb w14,[x12]
7102c2ceb4  cbz w14,0x7102c2cf00
7102c2ceb8  mov x11,xzr
7102c2cebc  add x12,x12,#0x1
7102c2cec0  mov w13,w20
7102c2cec4  and w14,w14,#0xff
7102c2cec8  sub w15,w14,#0x41
7102c2cecc  add w16,w14,#0x20
7102c2ced0  cmp w15,#0x1a
7102c2ced4  csel w14,w16,w14,cc
7102c2ced8  eor w14,w14,w13
7102c2cedc  and w14,w14,#0xff
7102c2cee0  ldr w14,[x26, w14, UXTW #0x2]
7102c2cee4  eor w13,w14,w13, LSR #0x8
7102c2cee8  ldrb w14,[x12], #0x1
7102c2ceec  add x11,x11,x27
7102c2cef0  cbnz w14,0x7102c2cec4
7102c2cef4  mvn w12,w13
7102c2cef8  and x11,x11,#0xff00000000
7102c2cefc  b 0x7102c2cf08
7102c2cf00  mov x12,xzr
7102c2cf04  mov x11,xzr
7102c2cf08  orr x11,x11,x12
7102c2cf0c  ldr x12,[x10]
7102c2cf10  cmp x12,x11
7102c2cf14  b.eq 0x7102c2cb88
7102c2cf18  add w9,w9,#0x1
7102c2cf1c  cmp w9,#0x26
7102c2cf20  b.ne 0x7102c2cea4
7102c2cf24  b 0x7102c2d15c
7102c2cf28  add x0,x18,#0x90
7102c2cf2c  mov x1,xzr
7102c2cf30  mov x20,x18
7102c2cf34  bl 0x71026533a0
7102c2cf38  mov x8,x0
7102c2cf3c  ldr x0,[x20, #0xd8]
7102c2cf40  str x8,[x20, #0xd8]
7102c2cf44  cbz x0,0x7102c2cf54
7102c2cf48  ldr x8,[x0]
7102c2cf4c  ldr x8,[x8, #0x8]
7102c2cf50  blr x8
7102c2cf54  mov x18,x20
7102c2cf58  mov x13,xzr
7102c2cf5c  mov v12.16B,v9.16B
7102c2cf60  adrp x17,0x7105123000
7102c2cf64  add x17,x17,#0x218
7102c2cf68  fminnm s13,s11,s8
7102c2cf6c  ldp x8,x9,[x19, #0x58]
7102c2cf70  cmp x8,x9
7102c2cf74  b.eq 0x7102c2cfc0
7102c2cf78  str x18,[x8]
7102c2cf7c  str w25,[x8, #0x8]
7102c2cf80  str wzr,[x8, #0x10]
7102c2cf84  str s12,[x8, #0x14]
7102c2cf88  str s11,[x8, #0x18]
7102c2cf8c  str s13,[x8, #0x1c]
7102c2cf90  strb w22,[x8, #0x20]
7102c2cf94  ldr w9,[sp, #0x30]
7102c2cf98  ldrh w10,[sp, #0x34]
7102c2cf9c  ldrb w11,[sp, #0x36]
7102c2cfa0  strb w11,[x8, #0x27]
7102c2cfa4  sturh w10,[x8, #0x25]
7102c2cfa8  stur w9,[x8, #0x21]
7102c2cfac  stp x13,xzr,[x8, #0x28]
7102c2cfb0  ldr x8,[x19, #0x58]
7102c2cfb4  add x8,x8,#0x38
7102c2cfb8  str x8,[x19, #0x58]
7102c2cfbc  b 0x7102c2d154
7102c2cfc0  add x0,x19,#0x50
7102c2cfc4  ldr x20,[x0]
7102c2cfc8  sub x21,x8,x20
7102c2cfcc  mov x10,#0x6db7
7102c2cfd0  movk x10,#0xb6db, LSL #16
7102c2cfd4  movk x10,#0xdb6d, LSL #32
7102c2cfd8  movk x10,#0x6db6, LSL #48
7102c2cfdc  asr x8,x21,#0x3
7102c2cfe0  mul x28,x8,x10
7102c2cfe4  str w22,[sp, #0x24]
7102c2cfe8  mov x22,#0x2492
7102c2cfec  movk x22,#0x9249, LSL #16
7102c2cff0  movk x22,#0x4924, LSL #32
7102c2cff4  movk x22,#0x492, LSL #48
7102c2cff8  add x8,x28,#0x1
7102c2cffc  cmp x8,x22
7102c2d000  b.hi 0x7102c2d214
7102c2d004  sub x9,x9,x20
7102c2d008  asr x9,x9,#0x3
7102c2d00c  mul x9,x9,x10
7102c2d010  mov x10,#0x9248
7102c2d014  movk x10,#0x4924, LSL #16
7102c2d018  movk x10,#0x2492, LSL #32
7102c2d01c  movk x10,#0x249, LSL #48
7102c2d020  cmp x9,x10
7102c2d024  b.hi 0x7102c2d038
7102c2d028  lsl x9,x9,#0x1
7102c2d02c  cmp x9,x8
7102c2d030  csel x22,x8,x9,cc
7102c2d034  cbz x22,0x7102c2cb80
7102c2d038  orr w8,wzr,#0x38
7102c2d03c  mul x8,x22,x8
7102c2d040  mov w0,#0x10
7102c2d044  stp x13,x18,[sp, #0x10]
7102c2d048  cmp x8,#0x0
7102c2d04c  csinc x1,x8,xzr,ne
7102c2d050  str x1,[sp, #0x8]
7102c2d054  bl 0x710392e290
7102c2d058  cbnz x0,0x7102c2d0a0
7102c2d05c  adrp x8,0x7105332000
7102c2d060  ldr x0,[x8, #0xf00]
7102c2d064  cbz x0,0x7102c2d09c
7102c2d068  ldr x8,[sp, #0x8]
7102c2d06c  str wzr,[sp, #0x3c]
7102c2d070  add x1,sp,#0x3c
7102c2d074  add x2,sp,#0x30
7102c2d078  str x8,[sp, #0x30]
7102c2d07c  ldr x8,[x0]
7102c2d080  ldr x8,[x8, #0x30]
7102c2d084  blr x8
7102c2d088  tbz w0,#0x0,0x7102c2d09c
7102c2d08c  ldr x1,[sp, #0x8]
7102c2d090  mov w0,#0x10
7102c2d094  bl 0x710392e290
7102c2d098  cbnz x0,0x7102c2d0a0
7102c2d09c  mov x0,xzr
7102c2d0a0  ldp x13,x18,[sp, #0x10]
7102c2d0a4  orr w12,wzr,#0x38
7102c2d0a8  madd x8,x28,x12,x0
7102c2d0ac  madd x28,x22,x12,x0
7102c2d0b0  stp s12,s11,[x8, #0x14]
7102c2d0b4  ldr w9,[sp, #0x24]
7102c2d0b8  str x18,[x8]
7102c2d0bc  str w25,[x8, #0x8]
7102c2d0c0  str wzr,[x8, #0x10]
7102c2d0c4  str s13,[x8, #0x1c]
7102c2d0c8  strb w9,[x8, #0x20]
7102c2d0cc  ldr w9,[sp, #0x30]
7102c2d0d0  ldrh w10,[sp, #0x34]
7102c2d0d4  ldrb w11,[sp, #0x36]
7102c2d0d8  stur w9,[x8, #0x21]
7102c2d0dc  mov x9,#0xb6db
7102c2d0e0  movk x9,#0xdb6d, LSL #16
7102c2d0e4  movk x9,#0x6db6, LSL #32
7102c2d0e8  movk x9,#0xb6db, LSL #48
7102c2d0ec  stp x13,xzr,[x8, #0x28]
7102c2d0f0  smulh x9,x21,x9
7102c2d0f4  sturh w10,[x8, #0x25]
7102c2d0f8  asr x10,x9,#0x4
7102c2d0fc  add x9,x10,x9, LSR #0x3f
7102c2d100  madd x22,x9,x12,x8
7102c2d104  add x25,x8,#0x38
7102c2d108  cmp x21,#0x1
7102c2d10c  strb w11,[x8, #0x27]
7102c2d110  b.lt 0x7102c2d124
7102c2d114  mov x0,x22
7102c2d118  mov x1,x20
7102c2d11c  mov x2,x21
7102c2d120  bl 0x71039c00e0
7102c2d124  str x28,[x19, #0x60]
7102c2d128  orr w21,wzr,#0x18
7102c2d12c  adrp x28,0x7105123000
7102c2d130  add x28,x28,#0xaa0
7102c2d134  adrp x17,0x7105123000
7102c2d138  add x17,x17,#0x218
7102c2d13c  stp x22,x25,[x19, #0x50]
7102c2d140  cbz x20,0x7102c2d154
7102c2d144  mov x0,x20
7102c2d148  bl 0x710392eb40
7102c2d14c  adrp x17,0x7105123000
7102c2d150  add x17,x17,#0x218
7102c2d154  ldr x19,[sp, #0x28]
7102c2d158  mov w20,#0xffffffff
7102c2d15c  add x24,x24,#0x10
7102c2d160  cmp x24,x23
7102c2d164  b.eq 0x7102c2cb68
7102c2d168  adrp x25,0x7105123000
7102c2d16c  add x25,x25,#0x500
7102c2d170  ldr w8,[x24, #0x8]
7102c2d174  sub w8,w8,#0x2
7102c2d178  cmp w8,#0x2
7102c2d17c  b.hi 0x7102c2d190
7102c2d180  add x24,x24,#0x10
7102c2d184  cmp x23,x24
7102c2d188  b.ne 0x7102c2d170
7102c2d18c  mov x24,x23
7102c2d190  cmp x24,x23
7102c2d194  b.ne 0x7102c2cb94
7102c2d198  ldp d9,d8,[sp, #0x60]
7102c2d19c  ldp d11,d10,[sp, #0x50]
7102c2d1a0  ldp d13,d12,[sp, #0x40]
7102c2d1a4  ldp x29,x30,[sp, #0xc0]
7102c2d1a8  ldp x20,x19,[sp, #0xb0]
7102c2d1ac  ldp x22,x21,[sp, #0xa0]
7102c2d1b0  ldp x24,x23,[sp, #0x90]
7102c2d1b4  ldp x26,x25,[sp, #0x80]
7102c2d1b8  ldp x28,x27,[sp, #0x70]
7102c2d1bc  add sp,sp,#0xd0
7102c2d1c0  ret
7102c2d1c4  mov x24,x23
7102c2d1c8  cmp x24,x23
7102c2d1cc  b.ne 0x7102c2cb28
7102c2d1d0  b 0x7102c2d198
7102c2d1d4  adrp x0,0x7105314000
7102c2d1d8  add x0,x0,#0x4d8
7102c2d1dc  bl 0x71039c06b0
7102c2d1e0  cbz w0,0x7102c2bff8
7102c2d1e4  bl 0x7101764000
7102c2d1e8  adrp x0,0x7101763000
7102c2d1ec  add x0,x0,#0xc40
7102c2d1f0  adrp x1,0x71052c5000
7102c2d1f4  add x1,x1,#0x180
7102c2d1f8  adrp x2,0x7104f17000
7102c2d1fc  add x2,x2,#0x0
7102c2d200  bl 0x71000001c0
7102c2d204  adrp x0,0x7105314000
7102c2d208  add x0,x0,#0x4d8
7102c2d20c  bl 0x71039c06c0
7102c2d210  b 0x7102c2bff8
7102c2d214  bl 0x71039c0c00
