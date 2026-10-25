// addr:      7102d1bec0
// offset:    0x2d1bec0
// name:      FUN_7102d1bec0
// mangled:   
// size:      1648

7102d1bec0  sub sp,sp,#0x110
7102d1bec4  stp x28,x27,[sp, #0xb0]
7102d1bec8  stp x26,x25,[sp, #0xc0]
7102d1becc  stp x24,x23,[sp, #0xd0]
7102d1bed0  stp x22,x21,[sp, #0xe0]
7102d1bed4  stp x20,x19,[sp, #0xf0]
7102d1bed8  stp x29,x30,[sp, #0x100]
7102d1bedc  add x29,sp,#0x100
7102d1bee0  adrp x8,0x71052a8000
7102d1bee4  ldr x8,[x8, #0xa88]
7102d1bee8  ldr q0,[x8]
7102d1beec  adrp x8,0x7105131000
7102d1bef0  add x8,x8,#0xe40
7102d1bef4  mov x27,x5
7102d1bef8  mov x22,x4
7102d1befc  mov x21,x2
7102d1bf00  mov x19,x0
7102d1bf04  stp x8,x2,[x0]
7102d1bf08  mov w8,#0x1
7102d1bf0c  str q0,[x0, #0x20]
7102d1bf10  str x3,[x0, #0x10]
7102d1bf14  strb w8,[x0, #0x30]
7102d1bf18  str wzr,[x0, #0x34]
7102d1bf1c  str x1,[x0, #0x38]
7102d1bf20  stp x2,x0,[sp, #0x10]
7102d1bf24  cbz x2,0x7102d1bf40
7102d1bf28  ldr x0,[x21, #0x90]
7102d1bf2c  ldr x8,[x0]
7102d1bf30  ldr x8,[x8, #0x158]
7102d1bf34  blr x8
7102d1bf38  mov x23,x0
7102d1bf3c  b 0x7102d1bf58
7102d1bf40  adrp x8,0x710532a000
7102d1bf44  add x8,x8,#0x9e0
7102d1bf48  ldarb w8,[x8]
7102d1bf4c  tbz w8,#0x0,0x7102d1c4d4
7102d1bf50  adrp x23,0x710532a000
7102d1bf54  add x23,x23,#0x9f0
7102d1bf58  ldr x9,[x23, #0x18]
7102d1bf5c  ldr x8,[x23, #0x8]
7102d1bf60  str x9,[sp, #0x38]
7102d1bf64  ldr x9,[x23]
7102d1bf68  ldr x10,[x23, #0x10]
7102d1bf6c  str x9,[sp, #0x20]
7102d1bf70  stp x8,x10,[sp, #0x28]
7102d1bf74  ldr x9,[x23, #0x38]
7102d1bf78  ldr x8,[x23, #0x28]
7102d1bf7c  str x9,[sp, #0x58]
7102d1bf80  ldr x9,[x23, #0x20]
7102d1bf84  ldr x10,[x23, #0x30]
7102d1bf88  stp x8,x10,[sp, #0x48]
7102d1bf8c  str x9,[sp, #0x40]
7102d1bf90  ldr q0,[x19, #0x20]
7102d1bf94  add x8,sp,#0x20
7102d1bf98  add x8,x8,#0x3c
7102d1bf9c  ld1 {v0.S}[3],[x8]
7102d1bfa0  str q0,[sp, #0x50]
7102d1bfa4  ldr x20,[x19, #0x8]
7102d1bfa8  cbz x20,0x7102d1c0ec
7102d1bfac  ldr x0,[x20, #0x90]
7102d1bfb0  ldr x8,[x0]
7102d1bfb4  ldr x8,[x8, #0x148]
7102d1bfb8  add x1,sp,#0x20
7102d1bfbc  blr x8
7102d1bfc0  ldr x20,[x20, #0xd8]
7102d1bfc4  cbz x20,0x7102d1c030
7102d1bfc8  ldr x8,[sp, #0x38]
7102d1bfcc  str x8,[sp, #0x78]
7102d1bfd0  ldr x8,[sp, #0x30]
7102d1bfd4  str x8,[sp, #0x70]
7102d1bfd8  ldr x8,[sp, #0x28]
7102d1bfdc  str x8,[sp, #0x68]
7102d1bfe0  ldr x8,[sp, #0x20]
7102d1bfe4  str x8,[sp, #0x60]
7102d1bfe8  ldr x8,[sp, #0x58]
7102d1bfec  str x8,[sp, #0x98]
7102d1bff0  ldr x8,[sp, #0x50]
7102d1bff4  str x8,[sp, #0x90]
7102d1bff8  ldr x8,[sp, #0x48]
7102d1bffc  str x8,[sp, #0x88]
7102d1c000  ldr x8,[sp, #0x40]
7102d1c004  str x8,[sp, #0x80]
7102d1c008  ldr x8,[x20, #0x8]
7102d1c00c  ldrb w9,[x8, #0xa8]
7102d1c010  cbz w9,0x7102d1c028
7102d1c014  ldr x0,[x8, #0x48]
7102d1c018  ldr x8,[x0]
7102d1c01c  ldr x8,[x8, #0x20]
7102d1c020  add x1,sp,#0x60
7102d1c024  blr x8
7102d1c028  mov w8,#0x1
7102d1c02c  strb w8,[x20, #0x20]
7102d1c030  ldr x20,[x19, #0x8]
7102d1c034  cbz x20,0x7102d1c0ec
7102d1c038  ldr x8,[x20, #0xd8]
7102d1c03c  cbnz x8,0x7102d1c074
7102d1c040  cbz x20,0x7102d1c074
7102d1c044  ldr x8,[x20, #0xd8]
7102d1c048  cbnz x8,0x7102d1c074
7102d1c04c  add x0,x20,#0x90
7102d1c050  mov x1,xzr
7102d1c054  bl 0x71026533a0
7102d1c058  mov x8,x0
7102d1c05c  ldr x0,[x20, #0xd8]
7102d1c060  str x8,[x20, #0xd8]
7102d1c064  cbz x0,0x7102d1c074
7102d1c068  ldr x8,[x0]
7102d1c06c  ldr x8,[x8, #0x8]
7102d1c070  blr x8
7102d1c074  ldr x8,[x19, #0x8]
7102d1c078  cbz x8,0x7102d1c0ec
7102d1c07c  ldr x23,[x8, #0xd8]
7102d1c080  ldr x8,[x23]
7102d1c084  ldr x8,[x8, #0x10]
7102d1c088  mov x0,x23
7102d1c08c  blr x8
7102d1c090  ldr x8,[x23, #0x8]
7102d1c094  ldrb w9,[x8, #0xa8]
7102d1c098  cbz w9,0x7102d1c0e8
7102d1c09c  ldr x0,[x8, #0x48]
7102d1c0a0  ldr x8,[x0]
7102d1c0a4  ldr x8,[x8, #0x10]
7102d1c0a8  mov w1,wzr
7102d1c0ac  blr x8
7102d1c0b0  ldr x8,[x23, #0x8]
7102d1c0b4  ldrb w9,[x8, #0xa8]
7102d1c0b8  cbz w9,0x7102d1c0e8
7102d1c0bc  ldr x24,[x8, #0x48]
7102d1c0c0  ldr x8,[x24]
7102d1c0c4  ldr x8,[x8, #0x10]
7102d1c0c8  mov w1,#0x1
7102d1c0cc  mov x0,x24
7102d1c0d0  blr x8
7102d1c0d4  ldr x8,[x24]
7102d1c0d8  ldr x8,[x8, #0x10]
7102d1c0dc  mov w1,#0x2
7102d1c0e0  mov x0,x24
7102d1c0e4  blr x8
7102d1c0e8  strb wzr,[x23, #0x20]
7102d1c0ec  adrp x8,0x7105132000
7102d1c0f0  add x8,x8,#0x420
7102d1c0f4  str x22,[x19, #0x40]
7102d1c0f8  str wzr,[x19, #0x48]
7102d1c0fc  str x8,[x19]
7102d1c100  str wzr,[x19, #0x78]
7102d1c104  stur xzr,[x19, #0x6d]
7102d1c108  stp xzr,xzr,[x19, #0x60]
7102d1c10c  cbz x21,0x7102d1c4a0
7102d1c110  ldrb w8,[x21, #0xe0]
7102d1c114  cbz w8,0x7102d1c4a0
7102d1c118  ldr x0,[x21, #0x90]
7102d1c11c  ldr x8,[x0]
7102d1c120  ldr x8,[x8, #0x220]
7102d1c124  blr x8
7102d1c128  cmp w0,#0x1
7102d1c12c  b.lt 0x7102d1c4a0
7102d1c130  add x8,sp,#0x60
7102d1c134  mov w22,w0
7102d1c138  mov w23,wzr
7102d1c13c  orr x8,x8,#0x1
7102d1c140  adrp x24,0x7104754000
7102d1c144  add x24,x24,#0x84
7102d1c148  orr x20,xzr,#0x100000000
7102d1c14c  str x8,[sp, #0x8]
7102d1c150  b 0x7102d1c174
7102d1c154  mov x9,xzr
7102d1c158  mov x8,xzr
7102d1c15c  ldr x0,[x21, #0x90]
7102d1c160  orr x1,x8,x9
7102d1c164  ldr x8,[x0]
7102d1c168  ldr x8,[x8, #0x180]
7102d1c16c  mov w2,#0x1
7102d1c170  b 0x7102d1c3f0
7102d1c174  ldrb w8,[x21, #0xe0]
7102d1c178  cbz w8,0x7102d1c1b0
7102d1c17c  ldr x0,[x21, #0x90]
7102d1c180  ldr x8,[x0]
7102d1c184  ldr x8,[x8, #0x220]
7102d1c188  blr x8
7102d1c18c  cmp w0,w23
7102d1c190  b.ls 0x7102d1c1b0
7102d1c194  ldr x0,[x21, #0x90]
7102d1c198  ldr x8,[x0]
7102d1c19c  ldr x8,[x8, #0x228]
7102d1c1a0  mov w1,w23
7102d1c1a4  blr x8
7102d1c1a8  mov x25,x0
7102d1c1ac  b 0x7102d1c1b4
7102d1c1b0  mov x25,xzr
7102d1c1b4  mov x0,x25
7102d1c1b8  stp xzr,xzr,[sp, #0x68]
7102d1c1bc  str xzr,[sp, #0x60]
7102d1c1c0  bl 0x71039c0070
7102d1c1c4  cmn x0,#0x10
7102d1c1c8  b.cs 0x7102d1c528
7102d1c1cc  mov x26,x0
7102d1c1d0  cmp x0,#0x17
7102d1c1d4  b.cs 0x7102d1c1ec
7102d1c1d8  ldr x28,[sp, #0x8]
7102d1c1dc  lsl w8,w26,#0x1
7102d1c1e0  strb w8,[sp, #0x60]
7102d1c1e4  cbnz x26,0x7102d1c274
7102d1c1e8  b 0x7102d1c284
7102d1c1ec  add x8,x26,#0x10
7102d1c1f0  mov w21,w22
7102d1c1f4  and x22,x8,#-0x10
7102d1c1f8  tst x8,#-0x10
7102d1c1fc  mov x19,x27
7102d1c200  csinc x27,x22,xzr,ne
7102d1c204  mov w0,#0x10
7102d1c208  mov x1,x27
7102d1c20c  bl 0x710392e290
7102d1c210  mov x28,x0
7102d1c214  cbnz x0,0x7102d1c25c
7102d1c218  adrp x8,0x7105332000
7102d1c21c  ldr x0,[x8, #0xf00]
7102d1c220  cbz x0,0x7102d1c258
7102d1c224  stur wzr,[x29, #-0x5c]
7102d1c228  str x27,[sp, #0x20]
7102d1c22c  ldr x8,[x0]
7102d1c230  ldr x8,[x8, #0x30]
7102d1c234  sub x1,x29,#0x5c
7102d1c238  add x2,sp,#0x20
7102d1c23c  blr x8
7102d1c240  tbz w0,#0x0,0x7102d1c258
7102d1c244  mov w0,#0x10
7102d1c248  mov x1,x27
7102d1c24c  bl 0x710392e290
7102d1c250  mov x28,x0
7102d1c254  cbnz x0,0x7102d1c25c
7102d1c258  mov x28,xzr
7102d1c25c  orr x8,x22,#0x1
7102d1c260  mov x27,x19
7102d1c264  mov w22,w21
7102d1c268  ldp x21,x19,[sp, #0x10]
7102d1c26c  str x8,[sp, #0x60]
7102d1c270  stp x26,x28,[sp, #0x68]
7102d1c274  mov x0,x28
7102d1c278  mov x1,x25
7102d1c27c  mov x2,x26
7102d1c280  bl 0x71039c00e0
7102d1c284  mov x0,x27
7102d1c288  strb wzr,[x28, x26, LSL ]
7102d1c28c  bl 0x71039c0070
7102d1c290  ldrb w8,[sp, #0x60]
7102d1c294  ldr x9,[sp, #0x68]
7102d1c298  lsr x10,x8,#0x1
7102d1c29c  tst w8,#0x1
7102d1c2a0  csel x8,x10,x9,eq
7102d1c2a4  cmp x0,x8
7102d1c2a8  b.ne 0x7102d1c2c8
7102d1c2ac  mov x4,x0
7102d1c2b0  add x0,sp,#0x60
7102d1c2b4  mov x1,xzr
7102d1c2b8  mov x2,#-0x1
7102d1c2bc  mov x3,x27
7102d1c2c0  bl 0x71039c28d0
7102d1c2c4  cbz w0,0x7102d1c34c
7102d1c2c8  ldrb w8,[x21, #0xe0]
7102d1c2cc  cbz w8,0x7102d1c3f4
7102d1c2d0  ldr x0,[x21, #0x90]
7102d1c2d4  ldr x8,[x0]
7102d1c2d8  ldr x8,[x8, #0x220]
7102d1c2dc  blr x8
7102d1c2e0  cmp w0,w23
7102d1c2e4  b.ls 0x7102d1c3f4
7102d1c2e8  ldr x0,[x21, #0x90]
7102d1c2ec  ldr x8,[x0]
7102d1c2f0  ldr x8,[x8, #0x228]
7102d1c2f4  mov w1,w23
7102d1c2f8  blr x8
7102d1c2fc  ldrb w11,[x0]
7102d1c300  cbz w11,0x7102d1c3d4
7102d1c304  mov x8,xzr
7102d1c308  add x9,x0,#0x1
7102d1c30c  mov w10,#0xffffffff
7102d1c310  and w11,w11,#0xff
7102d1c314  sub w12,w11,#0x41
7102d1c318  add w13,w11,#0x20
7102d1c31c  cmp w12,#0x1a
7102d1c320  csel w11,w13,w11,cc
7102d1c324  eor w11,w11,w10
7102d1c328  and w11,w11,#0xff
7102d1c32c  ldr w11,[x24, w11, UXTW #0x2]
7102d1c330  eor w10,w11,w10, LSR #0x8
7102d1c334  ldrb w11,[x9], #0x1
7102d1c338  add x8,x8,x20
7102d1c33c  cbnz w11,0x7102d1c310
7102d1c340  mvn w9,w10
7102d1c344  and x8,x8,#0xff00000000
7102d1c348  b 0x7102d1c3dc
7102d1c34c  str w23,[x19, #0x68]
7102d1c350  ldrb w8,[x21, #0xe0]
7102d1c354  cbz w8,0x7102d1c3f4
7102d1c358  ldr x0,[x21, #0x90]
7102d1c35c  ldr x8,[x0]
7102d1c360  ldr x8,[x8, #0x220]
7102d1c364  blr x8
7102d1c368  cmp w0,w23
7102d1c36c  b.ls 0x7102d1c3f4
7102d1c370  ldr x0,[x21, #0x90]
7102d1c374  ldr x8,[x0]
7102d1c378  ldr x8,[x8, #0x228]
7102d1c37c  mov w1,w23
7102d1c380  blr x8
7102d1c384  ldrb w11,[x0]
7102d1c388  cbz w11,0x7102d1c154
7102d1c38c  mov x8,xzr
7102d1c390  add x9,x0,#0x1
7102d1c394  mov w10,#0xffffffff
7102d1c398  and w11,w11,#0xff
7102d1c39c  sub w12,w11,#0x41
7102d1c3a0  add w13,w11,#0x20
7102d1c3a4  cmp w12,#0x1a
7102d1c3a8  csel w11,w13,w11,cc
7102d1c3ac  eor w11,w11,w10
7102d1c3b0  and w11,w11,#0xff
7102d1c3b4  ldr w11,[x24, w11, UXTW #0x2]
7102d1c3b8  eor w10,w11,w10, LSR #0x8
7102d1c3bc  ldrb w11,[x9], #0x1
7102d1c3c0  add x8,x8,x20
7102d1c3c4  cbnz w11,0x7102d1c398
7102d1c3c8  mvn w9,w10
7102d1c3cc  and x8,x8,#0xff00000000
7102d1c3d0  b 0x7102d1c15c
7102d1c3d4  mov x9,xzr
7102d1c3d8  mov x8,xzr
7102d1c3dc  ldr x0,[x21, #0x90]
7102d1c3e0  orr x1,x8,x9
7102d1c3e4  ldr x8,[x0]
7102d1c3e8  ldr x8,[x8, #0x180]
7102d1c3ec  mov w2,wzr
7102d1c3f0  blr x8
7102d1c3f4  ldrb w8,[sp, #0x60]
7102d1c3f8  ldr x9,[sp, #0x68]
7102d1c3fc  lsr x10,x8,#0x1
7102d1c400  tst w8,#0x1
7102d1c404  csel x8,x10,x9,eq
7102d1c408  cmp x8,#0x15
7102d1c40c  b.ne 0x7102d1c434
7102d1c410  add x0,sp,#0x60
7102d1c414  mov x1,xzr
7102d1c418  mov x2,#-0x1
7102d1c41c  adrp x3,0x710436a000
7102d1c420  add x3,x3,#0x7e1
7102d1c424  mov w4,#0x15
7102d1c428  bl 0x71039c28d0
7102d1c42c  cbnz w0,0x7102d1c434
7102d1c430  str w23,[x19, #0x6c]
7102d1c434  ldrb w8,[sp, #0x60]
7102d1c438  ldr x9,[sp, #0x68]
7102d1c43c  lsr x10,x8,#0x1
7102d1c440  tst w8,#0x1
7102d1c444  csel x8,x10,x9,eq
7102d1c448  cmp x8,#0x16
7102d1c44c  b.ne 0x7102d1c470
7102d1c450  add x0,sp,#0x60
7102d1c454  mov x1,xzr
7102d1c458  mov x2,#-0x1
7102d1c45c  adrp x3,0x710438a000
7102d1c460  add x3,x3,#0xf00
7102d1c464  mov w4,#0x16
7102d1c468  bl 0x71039c28d0
7102d1c46c  cbz w0,0x7102d1c488
7102d1c470  ldrb w8,[sp, #0x60]
7102d1c474  tbz w8,#0x0,0x7102d1c494
7102d1c478  ldr x0,[sp, #0x70]
7102d1c47c  cbz x0,0x7102d1c494
7102d1c480  bl 0x710392eb40
7102d1c484  b 0x7102d1c494
7102d1c488  str w23,[x19, #0x70]
7102d1c48c  ldrb w8,[sp, #0x60]
7102d1c490  tbnz w8,#0x0,0x7102d1c478
7102d1c494  add w23,w23,#0x1
7102d1c498  cmp w23,w22
7102d1c49c  b.lt 0x7102d1c174
7102d1c4a0  ldr x8,[x19]
7102d1c4a4  ldr x8,[x8, #0x10]
7102d1c4a8  mov x0,x19
7102d1c4ac  mov w1,wzr
7102d1c4b0  blr x8
7102d1c4b4  ldp x29,x30,[sp, #0x100]
7102d1c4b8  ldp x20,x19,[sp, #0xf0]
7102d1c4bc  ldp x22,x21,[sp, #0xe0]
7102d1c4c0  ldp x24,x23,[sp, #0xd0]
7102d1c4c4  ldp x26,x25,[sp, #0xc0]
7102d1c4c8  ldp x28,x27,[sp, #0xb0]
7102d1c4cc  add sp,sp,#0x110
7102d1c4d0  ret
7102d1c4d4  adrp x0,0x710532a000
7102d1c4d8  add x0,x0,#0x9e0
7102d1c4dc  bl 0x71039c06b0
7102d1c4e0  adrp x23,0x710532a000
7102d1c4e4  add x23,x23,#0x9f0
7102d1c4e8  cbz w0,0x7102d1c520
7102d1c4ec  adrp x8,0x7104468000
7102d1c4f0  adrp x9,0x710446a000
7102d1c4f4  ldr q1,[x9, #0x360]
7102d1c4f8  ldr q0,[x8, #0xca0]
7102d1c4fc  adrp x10,0x7104465000
7102d1c500  adrp x8,0x710446a000
7102d1c504  stp q0,q1,[x23]
7102d1c508  ldr q0,[x10, #0x6b0]
7102d1c50c  ldr q1,[x8, #0x350]
7102d1c510  adrp x0,0x710532a000
7102d1c514  add x0,x0,#0x9e0
7102d1c518  stp q0,q1,[x23, #0x20]
7102d1c51c  bl 0x71039c06c0
7102d1c520  ldp x21,x19,[sp, #0x10]
7102d1c524  b 0x7102d1bf58
7102d1c528  add x0,sp,#0x60
7102d1c52c  bl 0x71039c1a00
