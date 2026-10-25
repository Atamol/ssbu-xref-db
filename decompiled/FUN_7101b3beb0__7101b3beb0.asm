// addr:      7101b3beb0
// offset:    0x1b3beb0
// name:      FUN_7101b3beb0
// mangled:   
// size:      4416

7101b3beb0  sub sp,sp,#0xd0
7101b3beb4  stp x28,x27,[sp, #0x70]
7101b3beb8  stp x26,x25,[sp, #0x80]
7101b3bebc  stp x24,x23,[sp, #0x90]
7101b3bec0  stp x22,x21,[sp, #0xa0]
7101b3bec4  stp x20,x19,[sp, #0xb0]
7101b3bec8  stp x29,x30,[sp, #0xc0]
7101b3becc  add x29,sp,#0xc0
7101b3bed0  adrp x8,0x71050aa000
7101b3bed4  add x8,x8,#0xc30
7101b3bed8  mov x19,x0
7101b3bedc  stp x8,xzr,[x0]
7101b3bee0  orr x8,xzr,#0x1ffffffff
7101b3bee4  stp xzr,x8,[x0, #0x60]
7101b3bee8  mov w8,#0x1
7101b3beec  stp xzr,xzr,[x0, #0x10]
7101b3bef0  strb wzr,[x0, #0x58]
7101b3bef4  str x1,[x0, #0x78]
7101b3bef8  mov w1,#0x170
7101b3befc  strb w8,[x0, #0x70]
7101b3bf00  stp xzr,xzr,[x0, #0x48]
7101b3bf04  mov w0,#0x10
7101b3bf08  bl 0x710392e290
7101b3bf0c  mov x20,x0
7101b3bf10  cbnz x0,0x7101b3bf5c
7101b3bf14  adrp x8,0x7105332000
7101b3bf18  ldr x0,[x8, #0xf00]
7101b3bf1c  cbz x0,0x7101b3bf58
7101b3bf20  mov w8,#0x170
7101b3bf24  stur wzr,[x29, #-0x54]
7101b3bf28  sub x1,x29,#0x54
7101b3bf2c  str x8,[sp, #0x58]
7101b3bf30  ldr x8,[x0]
7101b3bf34  ldr x8,[x8, #0x30]
7101b3bf38  add x2,sp,#0x58
7101b3bf3c  blr x8
7101b3bf40  tbz w0,#0x0,0x7101b3bf58
7101b3bf44  mov w1,#0x170
7101b3bf48  mov w0,#0x10
7101b3bf4c  bl 0x710392e290
7101b3bf50  mov x20,x0
7101b3bf54  cbnz x0,0x7101b3bf5c
7101b3bf58  mov x20,xzr
7101b3bf5c  mov x21,x20
7101b3bf60  mov w0,#0x10
7101b3bf64  mov w1,#0x8
7101b3bf68  str x19,[x21], #0x8
7101b3bf6c  bl 0x710392e290
7101b3bf70  mov x22,x0
7101b3bf74  cbnz x0,0x7101b3bfc0
7101b3bf78  adrp x8,0x7105332000
7101b3bf7c  ldr x0,[x8, #0xf00]
7101b3bf80  cbz x0,0x7101b3bfbc
7101b3bf84  mov w8,#0x8
7101b3bf88  stur wzr,[x29, #-0x54]
7101b3bf8c  sub x1,x29,#0x54
7101b3bf90  str x8,[sp, #0x58]
7101b3bf94  ldr x8,[x0]
7101b3bf98  ldr x8,[x8, #0x30]
7101b3bf9c  add x2,sp,#0x58
7101b3bfa0  blr x8
7101b3bfa4  tbz w0,#0x0,0x7101b3bfbc
7101b3bfa8  mov w0,#0x10
7101b3bfac  mov w1,#0x8
7101b3bfb0  bl 0x710392e290
7101b3bfb4  mov x22,x0
7101b3bfb8  cbnz x0,0x7101b3bfc0
7101b3bfbc  mov x22,xzr
7101b3bfc0  mov x0,x22
7101b3bfc4  bl 0x7103773200
7101b3bfc8  add x0,x20,#0x10
7101b3bfcc  mov x1,x21
7101b3bfd0  str x22,[x20, #0x8]
7101b3bfd4  bl 0x7101414b10
7101b3bfd8  adrp x22,0x710523d000
7101b3bfdc  add x22,x22,#0x9e8
7101b3bfe0  mov x8,x20
7101b3bfe4  stp xzr,xzr,[x20, #0xa0]
7101b3bfe8  str xzr,[x20, #0x28]
7101b3bfec  stp xzr,xzr,[x20, #0x90]
7101b3bff0  mov w0,#0x10
7101b3bff4  orr w1,wzr,#0x18
7101b3bff8  stp xzr,xzr,[x20, #0x80]
7101b3bffc  stp xzr,xzr,[x20, #0x70]
7101b3c000  stp xzr,xzr,[x20, #0x60]
7101b3c004  stp xzr,xzr,[x20, #0x50]
7101b3c008  stp xzr,xzr,[x20, #0x40]
7101b3c00c  stp xzr,xzr,[x20, #0x30]
7101b3c010  str x22,[x8, #0x20]!
7101b3c014  str x8,[sp, #0x50]
7101b3c018  bl 0x710392e290
7101b3c01c  cbnz x0,0x7101b3c064
7101b3c020  adrp x8,0x7105332000
7101b3c024  ldr x0,[x8, #0xf00]
7101b3c028  cbz x0,0x7101b3c060
7101b3c02c  orr w8,wzr,#0x18
7101b3c030  stur wzr,[x29, #-0x54]
7101b3c034  sub x1,x29,#0x54
7101b3c038  str x8,[sp, #0x58]
7101b3c03c  ldr x8,[x0]
7101b3c040  ldr x8,[x8, #0x30]
7101b3c044  add x2,sp,#0x58
7101b3c048  blr x8
7101b3c04c  tbz w0,#0x0,0x7101b3c060
7101b3c050  mov w0,#0x10
7101b3c054  orr w1,wzr,#0x18
7101b3c058  bl 0x710392e290
7101b3c05c  cbnz x0,0x7101b3c064
7101b3c060  mov x0,xzr
7101b3c064  mov w23,#0x1
7101b3c068  mov x8,x20
7101b3c06c  orr w1,wzr,#0x18
7101b3c070  stp xzr,xzr,[x0]
7101b3c074  strb w23,[x0, #0x10]
7101b3c078  str x22,[x8, #0x30]!
7101b3c07c  stur x0,[x8, #-0x8]
7101b3c080  mov w0,#0x10
7101b3c084  str x8,[sp, #0x48]
7101b3c088  bl 0x710392e290
7101b3c08c  cbnz x0,0x7101b3c0d4
7101b3c090  adrp x8,0x7105332000
7101b3c094  ldr x0,[x8, #0xf00]
7101b3c098  cbz x0,0x7101b3c0d0
7101b3c09c  orr w8,wzr,#0x18
7101b3c0a0  stur wzr,[x29, #-0x54]
7101b3c0a4  sub x1,x29,#0x54
7101b3c0a8  str x8,[sp, #0x58]
7101b3c0ac  ldr x8,[x0]
7101b3c0b0  ldr x8,[x8, #0x30]
7101b3c0b4  add x2,sp,#0x58
7101b3c0b8  blr x8
7101b3c0bc  tbz w0,#0x0,0x7101b3c0d0
7101b3c0c0  mov w0,#0x10
7101b3c0c4  orr w1,wzr,#0x18
7101b3c0c8  bl 0x710392e290
7101b3c0cc  cbnz x0,0x7101b3c0d4
7101b3c0d0  mov x0,xzr
7101b3c0d4  mov x8,x20
7101b3c0d8  stp xzr,xzr,[x0]
7101b3c0dc  strb w23,[x0, #0x10]
7101b3c0e0  orr w1,wzr,#0x18
7101b3c0e4  str x22,[x8, #0x40]!
7101b3c0e8  stur x0,[x8, #-0x8]
7101b3c0ec  mov w0,#0x10
7101b3c0f0  str x8,[sp, #0x40]
7101b3c0f4  bl 0x710392e290
7101b3c0f8  cbnz x0,0x7101b3c140
7101b3c0fc  adrp x8,0x7105332000
7101b3c100  ldr x0,[x8, #0xf00]
7101b3c104  cbz x0,0x7101b3c13c
7101b3c108  orr w8,wzr,#0x18
7101b3c10c  stur wzr,[x29, #-0x54]
7101b3c110  sub x1,x29,#0x54
7101b3c114  str x8,[sp, #0x58]
7101b3c118  ldr x8,[x0]
7101b3c11c  ldr x8,[x8, #0x30]
7101b3c120  add x2,sp,#0x58
7101b3c124  blr x8
7101b3c128  tbz w0,#0x0,0x7101b3c13c
7101b3c12c  mov w0,#0x10
7101b3c130  orr w1,wzr,#0x18
7101b3c134  bl 0x710392e290
7101b3c138  cbnz x0,0x7101b3c140
7101b3c13c  mov x0,xzr
7101b3c140  mov w23,#0x1
7101b3c144  mov x8,x20
7101b3c148  orr w1,wzr,#0x18
7101b3c14c  stp xzr,xzr,[x0]
7101b3c150  strb w23,[x0, #0x10]
7101b3c154  str x22,[x8, #0x50]!
7101b3c158  stur x0,[x8, #-0x8]
7101b3c15c  mov w0,#0x10
7101b3c160  str x8,[sp, #0x38]
7101b3c164  bl 0x710392e290
7101b3c168  cbnz x0,0x7101b3c1b0
7101b3c16c  adrp x8,0x7105332000
7101b3c170  ldr x0,[x8, #0xf00]
7101b3c174  cbz x0,0x7101b3c1ac
7101b3c178  orr w8,wzr,#0x18
7101b3c17c  stur wzr,[x29, #-0x54]
7101b3c180  sub x1,x29,#0x54
7101b3c184  str x8,[sp, #0x58]
7101b3c188  ldr x8,[x0]
7101b3c18c  ldr x8,[x8, #0x30]
7101b3c190  add x2,sp,#0x58
7101b3c194  blr x8
7101b3c198  tbz w0,#0x0,0x7101b3c1ac
7101b3c19c  mov w0,#0x10
7101b3c1a0  orr w1,wzr,#0x18
7101b3c1a4  bl 0x710392e290
7101b3c1a8  cbnz x0,0x7101b3c1b0
7101b3c1ac  mov x0,xzr
7101b3c1b0  mov x8,x20
7101b3c1b4  stp xzr,xzr,[x0]
7101b3c1b8  strb w23,[x0, #0x10]
7101b3c1bc  orr w1,wzr,#0x18
7101b3c1c0  str x22,[x8, #0x60]!
7101b3c1c4  stur x0,[x8, #-0x8]
7101b3c1c8  mov w0,#0x10
7101b3c1cc  str x8,[sp, #0x30]
7101b3c1d0  bl 0x710392e290
7101b3c1d4  cbnz x0,0x7101b3c21c
7101b3c1d8  adrp x8,0x7105332000
7101b3c1dc  ldr x0,[x8, #0xf00]
7101b3c1e0  cbz x0,0x7101b3c218
7101b3c1e4  orr w8,wzr,#0x18
7101b3c1e8  stur wzr,[x29, #-0x54]
7101b3c1ec  sub x1,x29,#0x54
7101b3c1f0  str x8,[sp, #0x58]
7101b3c1f4  ldr x8,[x0]
7101b3c1f8  ldr x8,[x8, #0x30]
7101b3c1fc  add x2,sp,#0x58
7101b3c200  blr x8
7101b3c204  tbz w0,#0x0,0x7101b3c218
7101b3c208  mov w0,#0x10
7101b3c20c  orr w1,wzr,#0x18
7101b3c210  bl 0x710392e290
7101b3c214  cbnz x0,0x7101b3c21c
7101b3c218  mov x0,xzr
7101b3c21c  mov w23,#0x1
7101b3c220  mov x8,x20
7101b3c224  orr w1,wzr,#0x18
7101b3c228  stp xzr,xzr,[x0]
7101b3c22c  strb w23,[x0, #0x10]
7101b3c230  str x22,[x8, #0x70]!
7101b3c234  stur x0,[x8, #-0x8]
7101b3c238  mov w0,#0x10
7101b3c23c  str x8,[sp, #0x28]
7101b3c240  bl 0x710392e290
7101b3c244  cbnz x0,0x7101b3c28c
7101b3c248  adrp x8,0x7105332000
7101b3c24c  ldr x0,[x8, #0xf00]
7101b3c250  cbz x0,0x7101b3c288
7101b3c254  orr w8,wzr,#0x18
7101b3c258  stur wzr,[x29, #-0x54]
7101b3c25c  sub x1,x29,#0x54
7101b3c260  str x8,[sp, #0x58]
7101b3c264  ldr x8,[x0]
7101b3c268  ldr x8,[x8, #0x30]
7101b3c26c  add x2,sp,#0x58
7101b3c270  blr x8
7101b3c274  tbz w0,#0x0,0x7101b3c288
7101b3c278  mov w0,#0x10
7101b3c27c  orr w1,wzr,#0x18
7101b3c280  bl 0x710392e290
7101b3c284  cbnz x0,0x7101b3c28c
7101b3c288  mov x0,xzr
7101b3c28c  mov x8,x20
7101b3c290  stp xzr,xzr,[x0]
7101b3c294  strb w23,[x0, #0x10]
7101b3c298  orr w1,wzr,#0x18
7101b3c29c  str x22,[x8, #0x80]!
7101b3c2a0  stur x0,[x8, #-0x8]
7101b3c2a4  mov w0,#0x10
7101b3c2a8  str x8,[sp, #0x20]
7101b3c2ac  bl 0x710392e290
7101b3c2b0  cbnz x0,0x7101b3c2f8
7101b3c2b4  adrp x8,0x7105332000
7101b3c2b8  ldr x0,[x8, #0xf00]
7101b3c2bc  cbz x0,0x7101b3c2f4
7101b3c2c0  orr w8,wzr,#0x18
7101b3c2c4  stur wzr,[x29, #-0x54]
7101b3c2c8  sub x1,x29,#0x54
7101b3c2cc  str x8,[sp, #0x58]
7101b3c2d0  ldr x8,[x0]
7101b3c2d4  ldr x8,[x8, #0x30]
7101b3c2d8  add x2,sp,#0x58
7101b3c2dc  blr x8
7101b3c2e0  tbz w0,#0x0,0x7101b3c2f4
7101b3c2e4  mov w0,#0x10
7101b3c2e8  orr w1,wzr,#0x18
7101b3c2ec  bl 0x710392e290
7101b3c2f0  cbnz x0,0x7101b3c2f8
7101b3c2f4  mov x0,xzr
7101b3c2f8  mov w23,#0x1
7101b3c2fc  mov x8,x20
7101b3c300  orr w1,wzr,#0x18
7101b3c304  stp xzr,xzr,[x0]
7101b3c308  strb w23,[x0, #0x10]
7101b3c30c  str x22,[x8, #0x90]!
7101b3c310  stur x0,[x8, #-0x8]
7101b3c314  mov w0,#0x10
7101b3c318  str x8,[sp, #0x18]
7101b3c31c  bl 0x710392e290
7101b3c320  cbnz x0,0x7101b3c368
7101b3c324  adrp x8,0x7105332000
7101b3c328  ldr x0,[x8, #0xf00]
7101b3c32c  cbz x0,0x7101b3c364
7101b3c330  orr w8,wzr,#0x18
7101b3c334  stur wzr,[x29, #-0x54]
7101b3c338  sub x1,x29,#0x54
7101b3c33c  str x8,[sp, #0x58]
7101b3c340  ldr x8,[x0]
7101b3c344  ldr x8,[x8, #0x30]
7101b3c348  add x2,sp,#0x58
7101b3c34c  blr x8
7101b3c350  tbz w0,#0x0,0x7101b3c364
7101b3c354  mov w0,#0x10
7101b3c358  orr w1,wzr,#0x18
7101b3c35c  bl 0x710392e290
7101b3c360  cbnz x0,0x7101b3c368
7101b3c364  mov x0,xzr
7101b3c368  mov x8,x20
7101b3c36c  stp xzr,xzr,[x0]
7101b3c370  strb w23,[x0, #0x10]
7101b3c374  orr w1,wzr,#0x18
7101b3c378  str x22,[x8, #0xa0]!
7101b3c37c  stur x0,[x8, #-0x8]
7101b3c380  mov w0,#0x10
7101b3c384  str x8,[sp, #0x10]
7101b3c388  bl 0x710392e290
7101b3c38c  cbnz x0,0x7101b3c3d4
7101b3c390  adrp x8,0x7105332000
7101b3c394  ldr x0,[x8, #0xf00]
7101b3c398  cbz x0,0x7101b3c3d0
7101b3c39c  orr w8,wzr,#0x18
7101b3c3a0  stur wzr,[x29, #-0x54]
7101b3c3a4  sub x1,x29,#0x54
7101b3c3a8  str x8,[sp, #0x58]
7101b3c3ac  ldr x8,[x0]
7101b3c3b0  ldr x8,[x8, #0x30]
7101b3c3b4  add x2,sp,#0x58
7101b3c3b8  blr x8
7101b3c3bc  tbz w0,#0x0,0x7101b3c3d0
7101b3c3c0  mov w0,#0x10
7101b3c3c4  orr w1,wzr,#0x18
7101b3c3c8  bl 0x710392e290
7101b3c3cc  cbnz x0,0x7101b3c3d4
7101b3c3d0  mov x0,xzr
7101b3c3d4  mov w8,#0x1
7101b3c3d8  strb w8,[x0, #0x10]
7101b3c3dc  adrp x23,0x710523d000
7101b3c3e0  add x23,x23,#0x9a8
7101b3c3e4  mov x8,x20
7101b3c3e8  mov w1,#0x20
7101b3c3ec  stp xzr,xzr,[x0]
7101b3c3f0  str x0,[x20, #0xa8]
7101b3c3f4  stp xzr,xzr,[x20, #0x160]
7101b3c3f8  mov w0,#0x10
7101b3c3fc  str xzr,[x20, #0xb8]
7101b3c400  stp xzr,xzr,[x20, #0x150]
7101b3c404  stp xzr,xzr,[x20, #0x140]
7101b3c408  stp xzr,xzr,[x20, #0x130]
7101b3c40c  stp xzr,xzr,[x20, #0x120]
7101b3c410  stp xzr,xzr,[x20, #0x110]
7101b3c414  stp xzr,xzr,[x20, #0x100]
7101b3c418  stp xzr,xzr,[x20, #0xf0]
7101b3c41c  stp xzr,xzr,[x20, #0xe0]
7101b3c420  stp xzr,xzr,[x20, #0xd0]
7101b3c424  stp xzr,xzr,[x20, #0xc0]
7101b3c428  str x23,[x8, #0xb0]!
7101b3c42c  str x8,[sp, #0x8]
7101b3c430  bl 0x710392e290
7101b3c434  cbnz x0,0x7101b3c47c
7101b3c438  adrp x8,0x7105332000
7101b3c43c  ldr x0,[x8, #0xf00]
7101b3c440  cbz x0,0x7101b3c478
7101b3c444  mov w8,#0x20
7101b3c448  stur wzr,[x29, #-0x54]
7101b3c44c  sub x1,x29,#0x54
7101b3c450  str x8,[sp, #0x58]
7101b3c454  ldr x8,[x0]
7101b3c458  ldr x8,[x8, #0x30]
7101b3c45c  add x2,sp,#0x58
7101b3c460  blr x8
7101b3c464  tbz w0,#0x0,0x7101b3c478
7101b3c468  mov w0,#0x10
7101b3c46c  mov w1,#0x20
7101b3c470  bl 0x710392e290
7101b3c474  cbnz x0,0x7101b3c47c
7101b3c478  mov x0,xzr
7101b3c47c  mov x28,x20
7101b3c480  stp xzr,xzr,[x0, #0x10]
7101b3c484  stp xzr,xzr,[x0]
7101b3c488  mov w1,#0x20
7101b3c48c  str x23,[x28, #0xc0]!
7101b3c490  stur x0,[x28, #-0x8]
7101b3c494  mov w0,#0x10
7101b3c498  bl 0x710392e290
7101b3c49c  cbnz x0,0x7101b3c4e4
7101b3c4a0  adrp x8,0x7105332000
7101b3c4a4  ldr x0,[x8, #0xf00]
7101b3c4a8  cbz x0,0x7101b3c4e0
7101b3c4ac  mov w8,#0x20
7101b3c4b0  stur wzr,[x29, #-0x54]
7101b3c4b4  sub x1,x29,#0x54
7101b3c4b8  str x8,[sp, #0x58]
7101b3c4bc  ldr x8,[x0]
7101b3c4c0  ldr x8,[x8, #0x30]
7101b3c4c4  add x2,sp,#0x58
7101b3c4c8  blr x8
7101b3c4cc  tbz w0,#0x0,0x7101b3c4e0
7101b3c4d0  mov w0,#0x10
7101b3c4d4  mov w1,#0x20
7101b3c4d8  bl 0x710392e290
7101b3c4dc  cbnz x0,0x7101b3c4e4
7101b3c4e0  mov x0,xzr
7101b3c4e4  mov x24,x20
7101b3c4e8  stp xzr,xzr,[x0, #0x10]
7101b3c4ec  stp xzr,xzr,[x0]
7101b3c4f0  mov w1,#0x20
7101b3c4f4  str x23,[x24, #0xd0]!
7101b3c4f8  stur x0,[x24, #-0x8]
7101b3c4fc  mov w0,#0x10
7101b3c500  bl 0x710392e290
7101b3c504  cbnz x0,0x7101b3c54c
7101b3c508  adrp x8,0x7105332000
7101b3c50c  ldr x0,[x8, #0xf00]
7101b3c510  cbz x0,0x7101b3c548
7101b3c514  mov w8,#0x20
7101b3c518  stur wzr,[x29, #-0x54]
7101b3c51c  sub x1,x29,#0x54
7101b3c520  str x8,[sp, #0x58]
7101b3c524  ldr x8,[x0]
7101b3c528  ldr x8,[x8, #0x30]
7101b3c52c  add x2,sp,#0x58
7101b3c530  blr x8
7101b3c534  tbz w0,#0x0,0x7101b3c548
7101b3c538  mov w0,#0x10
7101b3c53c  mov w1,#0x20
7101b3c540  bl 0x710392e290
7101b3c544  cbnz x0,0x7101b3c54c
7101b3c548  mov x0,xzr
7101b3c54c  mov x25,x20
7101b3c550  stp xzr,xzr,[x0, #0x10]
7101b3c554  stp xzr,xzr,[x0]
7101b3c558  mov w1,#0x20
7101b3c55c  str x23,[x25, #0xe0]!
7101b3c560  stur x0,[x25, #-0x8]
7101b3c564  mov w0,#0x10
7101b3c568  bl 0x710392e290
7101b3c56c  cbnz x0,0x7101b3c5b4
7101b3c570  adrp x8,0x7105332000
7101b3c574  ldr x0,[x8, #0xf00]
7101b3c578  cbz x0,0x7101b3c5b0
7101b3c57c  mov w8,#0x20
7101b3c580  stur wzr,[x29, #-0x54]
7101b3c584  sub x1,x29,#0x54
7101b3c588  str x8,[sp, #0x58]
7101b3c58c  ldr x8,[x0]
7101b3c590  ldr x8,[x8, #0x30]
7101b3c594  add x2,sp,#0x58
7101b3c598  blr x8
7101b3c59c  tbz w0,#0x0,0x7101b3c5b0
7101b3c5a0  mov w0,#0x10
7101b3c5a4  mov w1,#0x20
7101b3c5a8  bl 0x710392e290
7101b3c5ac  cbnz x0,0x7101b3c5b4
7101b3c5b0  mov x0,xzr
7101b3c5b4  mov x26,x20
7101b3c5b8  stp xzr,xzr,[x0, #0x10]
7101b3c5bc  stp xzr,xzr,[x0]
7101b3c5c0  mov w1,#0x20
7101b3c5c4  str x23,[x26, #0xf0]!
7101b3c5c8  stur x0,[x26, #-0x8]
7101b3c5cc  mov w0,#0x10
7101b3c5d0  bl 0x710392e290
7101b3c5d4  cbnz x0,0x7101b3c61c
7101b3c5d8  adrp x8,0x7105332000
7101b3c5dc  ldr x0,[x8, #0xf00]
7101b3c5e0  cbz x0,0x7101b3c618
7101b3c5e4  mov w8,#0x20
7101b3c5e8  stur wzr,[x29, #-0x54]
7101b3c5ec  sub x1,x29,#0x54
7101b3c5f0  str x8,[sp, #0x58]
7101b3c5f4  ldr x8,[x0]
7101b3c5f8  ldr x8,[x8, #0x30]
7101b3c5fc  add x2,sp,#0x58
7101b3c600  blr x8
7101b3c604  tbz w0,#0x0,0x7101b3c618
7101b3c608  mov w0,#0x10
7101b3c60c  mov w1,#0x20
7101b3c610  bl 0x710392e290
7101b3c614  cbnz x0,0x7101b3c61c
7101b3c618  mov x0,xzr
7101b3c61c  stp xzr,xzr,[x0, #0x10]
7101b3c620  mov w1,#0x20
7101b3c624  stp xzr,xzr,[x0]
7101b3c628  stp x0,x23,[x20, #0xf8]
7101b3c62c  mov w0,#0x10
7101b3c630  bl 0x710392e290
7101b3c634  cbnz x0,0x7101b3c67c
7101b3c638  adrp x8,0x7105332000
7101b3c63c  ldr x0,[x8, #0xf00]
7101b3c640  cbz x0,0x7101b3c678
7101b3c644  mov w8,#0x20
7101b3c648  stur wzr,[x29, #-0x54]
7101b3c64c  sub x1,x29,#0x54
7101b3c650  str x8,[sp, #0x58]
7101b3c654  ldr x8,[x0]
7101b3c658  ldr x8,[x8, #0x30]
7101b3c65c  add x2,sp,#0x58
7101b3c660  blr x8
7101b3c664  tbz w0,#0x0,0x7101b3c678
7101b3c668  mov w0,#0x10
7101b3c66c  mov w1,#0x20
7101b3c670  bl 0x710392e290
7101b3c674  cbnz x0,0x7101b3c67c
7101b3c678  mov x0,xzr
7101b3c67c  stp xzr,xzr,[x0, #0x10]
7101b3c680  mov w1,#0x20
7101b3c684  stp xzr,xzr,[x0]
7101b3c688  stp x0,x23,[x20, #0x108]
7101b3c68c  mov w0,#0x10
7101b3c690  bl 0x710392e290
7101b3c694  cbnz x0,0x7101b3c6dc
7101b3c698  adrp x8,0x7105332000
7101b3c69c  ldr x0,[x8, #0xf00]
7101b3c6a0  cbz x0,0x7101b3c6d8
7101b3c6a4  mov w8,#0x20
7101b3c6a8  stur wzr,[x29, #-0x54]
7101b3c6ac  sub x1,x29,#0x54
7101b3c6b0  str x8,[sp, #0x58]
7101b3c6b4  ldr x8,[x0]
7101b3c6b8  ldr x8,[x8, #0x30]
7101b3c6bc  add x2,sp,#0x58
7101b3c6c0  blr x8
7101b3c6c4  tbz w0,#0x0,0x7101b3c6d8
7101b3c6c8  mov w0,#0x10
7101b3c6cc  mov w1,#0x20
7101b3c6d0  bl 0x710392e290
7101b3c6d4  cbnz x0,0x7101b3c6dc
7101b3c6d8  mov x0,xzr
7101b3c6dc  stp xzr,xzr,[x0, #0x10]
7101b3c6e0  mov w1,#0x20
7101b3c6e4  stp xzr,xzr,[x0]
7101b3c6e8  stp x0,x23,[x20, #0x118]
7101b3c6ec  mov w0,#0x10
7101b3c6f0  bl 0x710392e290
7101b3c6f4  cbnz x0,0x7101b3c73c
7101b3c6f8  adrp x8,0x7105332000
7101b3c6fc  ldr x0,[x8, #0xf00]
7101b3c700  cbz x0,0x7101b3c738
7101b3c704  mov w8,#0x20
7101b3c708  stur wzr,[x29, #-0x54]
7101b3c70c  sub x1,x29,#0x54
7101b3c710  str x8,[sp, #0x58]
7101b3c714  ldr x8,[x0]
7101b3c718  ldr x8,[x8, #0x30]
7101b3c71c  add x2,sp,#0x58
7101b3c720  blr x8
7101b3c724  tbz w0,#0x0,0x7101b3c738
7101b3c728  mov w0,#0x10
7101b3c72c  mov w1,#0x20
7101b3c730  bl 0x710392e290
7101b3c734  cbnz x0,0x7101b3c73c
7101b3c738  mov x0,xzr
7101b3c73c  stp xzr,xzr,[x0, #0x10]
7101b3c740  mov w1,#0x20
7101b3c744  stp xzr,xzr,[x0]
7101b3c748  stp x0,x23,[x20, #0x128]
7101b3c74c  mov w0,#0x10
7101b3c750  bl 0x710392e290
7101b3c754  cbnz x0,0x7101b3c79c
7101b3c758  adrp x8,0x7105332000
7101b3c75c  ldr x0,[x8, #0xf00]
7101b3c760  cbz x0,0x7101b3c798
7101b3c764  mov w8,#0x20
7101b3c768  stur wzr,[x29, #-0x54]
7101b3c76c  sub x1,x29,#0x54
7101b3c770  str x8,[sp, #0x58]
7101b3c774  ldr x8,[x0]
7101b3c778  ldr x8,[x8, #0x30]
7101b3c77c  add x2,sp,#0x58
7101b3c780  blr x8
7101b3c784  tbz w0,#0x0,0x7101b3c798
7101b3c788  mov w0,#0x10
7101b3c78c  mov w1,#0x20
7101b3c790  bl 0x710392e290
7101b3c794  cbnz x0,0x7101b3c79c
7101b3c798  mov x0,xzr
7101b3c79c  stp xzr,xzr,[x0, #0x10]
7101b3c7a0  mov w1,#0x20
7101b3c7a4  stp xzr,xzr,[x0]
7101b3c7a8  stp x0,x23,[x20, #0x138]
7101b3c7ac  mov w0,#0x10
7101b3c7b0  bl 0x710392e290
7101b3c7b4  cbnz x0,0x7101b3c7fc
7101b3c7b8  adrp x8,0x7105332000
7101b3c7bc  ldr x0,[x8, #0xf00]
7101b3c7c0  cbz x0,0x7101b3c7f8
7101b3c7c4  mov w8,#0x20
7101b3c7c8  stur wzr,[x29, #-0x54]
7101b3c7cc  sub x1,x29,#0x54
7101b3c7d0  str x8,[sp, #0x58]
7101b3c7d4  ldr x8,[x0]
7101b3c7d8  ldr x8,[x8, #0x30]
7101b3c7dc  add x2,sp,#0x58
7101b3c7e0  blr x8
7101b3c7e4  tbz w0,#0x0,0x7101b3c7f8
7101b3c7e8  mov w0,#0x10
7101b3c7ec  mov w1,#0x20
7101b3c7f0  bl 0x710392e290
7101b3c7f4  cbnz x0,0x7101b3c7fc
7101b3c7f8  mov x0,xzr
7101b3c7fc  stp xzr,xzr,[x0, #0x10]
7101b3c800  mov w1,#0x20
7101b3c804  stp xzr,xzr,[x0]
7101b3c808  stp x0,x23,[x20, #0x148]
7101b3c80c  mov w0,#0x10
7101b3c810  bl 0x710392e290
7101b3c814  cbnz x0,0x7101b3c85c
7101b3c818  adrp x8,0x7105332000
7101b3c81c  ldr x0,[x8, #0xf00]
7101b3c820  cbz x0,0x7101b3c858
7101b3c824  mov w8,#0x20
7101b3c828  stur wzr,[x29, #-0x54]
7101b3c82c  sub x1,x29,#0x54
7101b3c830  str x8,[sp, #0x58]
7101b3c834  ldr x8,[x0]
7101b3c838  ldr x8,[x8, #0x30]
7101b3c83c  add x2,sp,#0x58
7101b3c840  blr x8
7101b3c844  tbz w0,#0x0,0x7101b3c858
7101b3c848  mov w0,#0x10
7101b3c84c  mov w1,#0x20
7101b3c850  bl 0x710392e290
7101b3c854  cbnz x0,0x7101b3c85c
7101b3c858  mov x0,xzr
7101b3c85c  stp xzr,xzr,[x0, #0x10]
7101b3c860  mov w1,#0x20
7101b3c864  stp xzr,xzr,[x0]
7101b3c868  stp x0,x23,[x20, #0x158]
7101b3c86c  mov w0,#0x10
7101b3c870  bl 0x710392e290
7101b3c874  cbnz x0,0x7101b3c8bc
7101b3c878  adrp x8,0x7105332000
7101b3c87c  ldr x0,[x8, #0xf00]
7101b3c880  cbz x0,0x7101b3c8b8
7101b3c884  mov w8,#0x20
7101b3c888  stur wzr,[x29, #-0x54]
7101b3c88c  sub x1,x29,#0x54
7101b3c890  str x8,[sp, #0x58]
7101b3c894  ldr x8,[x0]
7101b3c898  ldr x8,[x8, #0x30]
7101b3c89c  add x2,sp,#0x58
7101b3c8a0  blr x8
7101b3c8a4  tbz w0,#0x0,0x7101b3c8b8
7101b3c8a8  mov w0,#0x10
7101b3c8ac  mov w1,#0x20
7101b3c8b0  bl 0x710392e290
7101b3c8b4  cbnz x0,0x7101b3c8bc
7101b3c8b8  mov x0,xzr
7101b3c8bc  stp xzr,xzr,[x0, #0x10]
7101b3c8c0  adrp x2,0x7104544000
7101b3c8c4  add x2,x2,#0x8e0
7101b3c8c8  stp xzr,xzr,[x0]
7101b3c8cc  ldr x8,[x20]
7101b3c8d0  mov w3,wzr
7101b3c8d4  str x0,[x20, #0x168]
7101b3c8d8  ldr x8,[x8, #0x78]
7101b3c8dc  ldr x1,[x8]
7101b3c8e0  mov x0,x21
7101b3c8e4  bl 0x71032cbf30
7101b3c8e8  ldr x8,[x20, #0x8]
7101b3c8ec  ldr x8,[x8]
7101b3c8f0  ldr x8,[x8]
7101b3c8f4  str wzr,[x8, #0x650]
7101b3c8f8  ldr x8,[x20, #0x8]
7101b3c8fc  ldr x8,[x8]
7101b3c900  add x0,x8,#0x8
7101b3c904  adrp x1,0x7104421000
7101b3c908  add x1,x1,#0x55
7101b3c90c  add x8,sp,#0x58
7101b3c910  add x27,sp,#0x58
7101b3c914  bl 0x71037780e0
7101b3c918  ldr x8,[sp, #0x50]
7101b3c91c  cmp x27,x8
7101b3c920  b.eq 0x7101b3c93c
7101b3c924  ldr x8,[sp, #0x60]
7101b3c928  str xzr,[sp, #0x60]
7101b3c92c  ldr x0,[x20, #0x28]
7101b3c930  str x8,[x20, #0x28]
7101b3c934  cbz x0,0x7101b3c93c
7101b3c938  bl 0x710392eb40
7101b3c93c  ldr x0,[sp, #0x60]
7101b3c940  stp x22,xzr,[sp, #0x58]
7101b3c944  cbz x0,0x7101b3c94c
7101b3c948  bl 0x710392eb40
7101b3c94c  ldr x8,[x21]
7101b3c950  ldr x8,[x8]
7101b3c954  add x0,x8,#0x8
7101b3c958  adrp x1,0x7104432000
7101b3c95c  add x1,x1,#0xca8
7101b3c960  add x8,sp,#0x58
7101b3c964  add x27,sp,#0x58
7101b3c968  bl 0x71037780e0
7101b3c96c  ldr x8,[sp, #0x48]
7101b3c970  cmp x27,x8
7101b3c974  b.eq 0x7101b3c990
7101b3c978  ldr x8,[sp, #0x60]
7101b3c97c  str xzr,[sp, #0x60]
7101b3c980  ldr x0,[x20, #0x38]
7101b3c984  str x8,[x20, #0x38]
7101b3c988  cbz x0,0x7101b3c990
7101b3c98c  bl 0x710392eb40
7101b3c990  ldr x0,[sp, #0x60]
7101b3c994  stp x22,xzr,[sp, #0x58]
7101b3c998  cbz x0,0x7101b3c9a0
7101b3c99c  bl 0x710392eb40
7101b3c9a0  ldr x8,[x21]
7101b3c9a4  ldr x8,[x8]
7101b3c9a8  add x0,x8,#0x8
7101b3c9ac  adrp x1,0x7104421000
7101b3c9b0  add x1,x1,#0xfbc
7101b3c9b4  add x8,sp,#0x58
7101b3c9b8  add x27,sp,#0x58
7101b3c9bc  bl 0x71037780e0
7101b3c9c0  ldr x8,[sp, #0x40]
7101b3c9c4  cmp x27,x8
7101b3c9c8  b.eq 0x7101b3c9e4
7101b3c9cc  ldr x8,[sp, #0x60]
7101b3c9d0  str xzr,[sp, #0x60]
7101b3c9d4  ldr x0,[x20, #0x48]
7101b3c9d8  str x8,[x20, #0x48]
7101b3c9dc  cbz x0,0x7101b3c9e4
7101b3c9e0  bl 0x710392eb40
7101b3c9e4  ldr x0,[sp, #0x60]
7101b3c9e8  stp x22,xzr,[sp, #0x58]
7101b3c9ec  cbz x0,0x7101b3c9f4
7101b3c9f0  bl 0x710392eb40
7101b3c9f4  ldr x8,[x21]
7101b3c9f8  ldr x8,[x8]
7101b3c9fc  add x0,x8,#0x8
7101b3ca00  adrp x1,0x71042b4000
7101b3ca04  add x1,x1,#0xc
7101b3ca08  add x8,sp,#0x58
7101b3ca0c  add x27,sp,#0x58
7101b3ca10  bl 0x71037780e0
7101b3ca14  ldr x8,[sp, #0x38]
7101b3ca18  cmp x27,x8
7101b3ca1c  b.eq 0x7101b3ca38
7101b3ca20  ldr x8,[sp, #0x60]
7101b3ca24  str xzr,[sp, #0x60]
7101b3ca28  ldr x0,[x20, #0x58]
7101b3ca2c  str x8,[x20, #0x58]
7101b3ca30  cbz x0,0x7101b3ca38
7101b3ca34  bl 0x710392eb40
7101b3ca38  ldr x0,[sp, #0x60]
7101b3ca3c  stp x22,xzr,[sp, #0x58]
7101b3ca40  cbz x0,0x7101b3ca48
7101b3ca44  bl 0x710392eb40
7101b3ca48  ldr x8,[x21]
7101b3ca4c  ldr x8,[x8]
7101b3ca50  add x0,x8,#0x8
7101b3ca54  adrp x1,0x710425e000
7101b3ca58  add x1,x1,#0xfe7
7101b3ca5c  add x8,sp,#0x58
7101b3ca60  add x27,sp,#0x58
7101b3ca64  bl 0x71037780e0
7101b3ca68  ldr x8,[sp, #0x30]
7101b3ca6c  cmp x27,x8
7101b3ca70  b.eq 0x7101b3ca8c
7101b3ca74  ldr x8,[sp, #0x60]
7101b3ca78  str xzr,[sp, #0x60]
7101b3ca7c  ldr x0,[x20, #0x68]
7101b3ca80  str x8,[x20, #0x68]
7101b3ca84  cbz x0,0x7101b3ca8c
7101b3ca88  bl 0x710392eb40
7101b3ca8c  ldr x0,[sp, #0x60]
7101b3ca90  stp x22,xzr,[sp, #0x58]
7101b3ca94  cbz x0,0x7101b3ca9c
7101b3ca98  bl 0x710392eb40
7101b3ca9c  ldr x8,[x21]
7101b3caa0  ldr x8,[x8]
7101b3caa4  add x0,x8,#0x8
7101b3caa8  adrp x1,0x7104329000
7101b3caac  add x1,x1,#0xc3a
7101b3cab0  add x8,sp,#0x58
7101b3cab4  add x27,sp,#0x58
7101b3cab8  bl 0x71037780e0
7101b3cabc  ldr x8,[sp, #0x28]
7101b3cac0  cmp x27,x8
7101b3cac4  b.eq 0x7101b3cae0
7101b3cac8  ldr x8,[sp, #0x60]
7101b3cacc  str xzr,[sp, #0x60]
7101b3cad0  ldr x0,[x20, #0x78]
7101b3cad4  str x8,[x20, #0x78]
7101b3cad8  cbz x0,0x7101b3cae0
7101b3cadc  bl 0x710392eb40
7101b3cae0  ldr x0,[sp, #0x60]
7101b3cae4  stp x22,xzr,[sp, #0x58]
7101b3cae8  cbz x0,0x7101b3caf0
7101b3caec  bl 0x710392eb40
7101b3caf0  ldr x8,[x21]
7101b3caf4  ldr x8,[x8]
7101b3caf8  add x0,x8,#0x8
7101b3cafc  adrp x1,0x7104280000
7101b3cb00  add x1,x1,#0x6d5
7101b3cb04  add x8,sp,#0x58
7101b3cb08  add x27,sp,#0x58
7101b3cb0c  bl 0x71037780e0
7101b3cb10  ldr x8,[sp, #0x20]
7101b3cb14  cmp x27,x8
7101b3cb18  b.eq 0x7101b3cb34
7101b3cb1c  ldr x8,[sp, #0x60]
7101b3cb20  str xzr,[sp, #0x60]
7101b3cb24  ldr x0,[x20, #0x88]
7101b3cb28  str x8,[x20, #0x88]
7101b3cb2c  cbz x0,0x7101b3cb34
7101b3cb30  bl 0x710392eb40
7101b3cb34  ldr x0,[sp, #0x60]
7101b3cb38  stp x22,xzr,[sp, #0x58]
7101b3cb3c  cbz x0,0x7101b3cb44
7101b3cb40  bl 0x710392eb40
7101b3cb44  ldr x8,[x21]
7101b3cb48  ldr x8,[x8]
7101b3cb4c  add x0,x8,#0x8
7101b3cb50  adrp x1,0x71042e6000
7101b3cb54  add x1,x1,#0xd08
7101b3cb58  add x8,sp,#0x58
7101b3cb5c  add x27,sp,#0x58
7101b3cb60  bl 0x71037780e0
7101b3cb64  ldr x8,[sp, #0x18]
7101b3cb68  cmp x27,x8
7101b3cb6c  b.eq 0x7101b3cb88
7101b3cb70  ldr x8,[sp, #0x60]
7101b3cb74  str xzr,[sp, #0x60]
7101b3cb78  ldr x0,[x20, #0x98]
7101b3cb7c  str x8,[x20, #0x98]
7101b3cb80  cbz x0,0x7101b3cb88
7101b3cb84  bl 0x710392eb40
7101b3cb88  ldr x0,[sp, #0x60]
7101b3cb8c  stp x22,xzr,[sp, #0x58]
7101b3cb90  cbz x0,0x7101b3cb98
7101b3cb94  bl 0x710392eb40
7101b3cb98  ldr x8,[x21]
7101b3cb9c  ldr x8,[x8]
7101b3cba0  add x0,x8,#0x8
7101b3cba4  adrp x1,0x71042a2000
7101b3cba8  add x1,x1,#0xbfc
7101b3cbac  add x8,sp,#0x58
7101b3cbb0  add x27,sp,#0x58
7101b3cbb4  bl 0x71037780e0
7101b3cbb8  ldr x8,[sp, #0x10]
7101b3cbbc  cmp x27,x8
7101b3cbc0  b.eq 0x7101b3cbdc
7101b3cbc4  ldr x8,[sp, #0x60]
7101b3cbc8  str xzr,[sp, #0x60]
7101b3cbcc  ldr x0,[x20, #0xa8]
7101b3cbd0  str x8,[x20, #0xa8]
7101b3cbd4  cbz x0,0x7101b3cbdc
7101b3cbd8  bl 0x710392eb40
7101b3cbdc  ldr x0,[sp, #0x60]
7101b3cbe0  stp x22,xzr,[sp, #0x58]
7101b3cbe4  cbz x0,0x7101b3cbec
7101b3cbe8  bl 0x710392eb40
7101b3cbec  ldr x8,[x21]
7101b3cbf0  ldr x8,[x8]
7101b3cbf4  add x0,x8,#0x8
7101b3cbf8  adrp x1,0x71043df000
7101b3cbfc  add x1,x1,#0xd7b
7101b3cc00  add x8,sp,#0x58
7101b3cc04  add x22,sp,#0x58
7101b3cc08  bl 0x7103776910
7101b3cc0c  ldr x8,[sp, #0x8]
7101b3cc10  cmp x22,x8
7101b3cc14  b.eq 0x7101b3cc30
7101b3cc18  ldr x8,[sp, #0x60]
7101b3cc1c  str xzr,[sp, #0x60]
7101b3cc20  ldr x0,[x20, #0xb8]
7101b3cc24  str x8,[x20, #0xb8]
7101b3cc28  cbz x0,0x7101b3cc30
7101b3cc2c  bl 0x710392eb40
7101b3cc30  ldr x0,[sp, #0x60]
7101b3cc34  stp x23,xzr,[sp, #0x58]
7101b3cc38  cbz x0,0x7101b3cc40
7101b3cc3c  bl 0x710392eb40
7101b3cc40  ldr x8,[x21]
7101b3cc44  ldr x8,[x8]
7101b3cc48  add x0,x8,#0x8
7101b3cc4c  adrp x1,0x71042e6000
7101b3cc50  add x1,x1,#0xd11
7101b3cc54  add x8,sp,#0x58
7101b3cc58  add x22,sp,#0x58
7101b3cc5c  bl 0x7103776910
7101b3cc60  cmp x22,x28
7101b3cc64  b.eq 0x7101b3cc80
7101b3cc68  ldr x8,[sp, #0x60]
7101b3cc6c  str xzr,[sp, #0x60]
7101b3cc70  ldr x0,[x20, #0xc8]
7101b3cc74  str x8,[x20, #0xc8]
7101b3cc78  cbz x0,0x7101b3cc80
7101b3cc7c  bl 0x710392eb40
7101b3cc80  ldr x0,[sp, #0x60]
7101b3cc84  stp x23,xzr,[sp, #0x58]
7101b3cc88  cbz x0,0x7101b3cc90
7101b3cc8c  bl 0x710392eb40
7101b3cc90  ldr x8,[x21]
7101b3cc94  ldr x8,[x8]
7101b3cc98  add x0,x8,#0x8
7101b3cc9c  adrp x1,0x7104412000
7101b3cca0  add x1,x1,#0x601
7101b3cca4  add x8,sp,#0x58
7101b3cca8  add x22,sp,#0x58
7101b3ccac  bl 0x7103776910
7101b3ccb0  cmp x22,x24
7101b3ccb4  b.eq 0x7101b3ccd0
7101b3ccb8  ldr x8,[sp, #0x60]
7101b3ccbc  str xzr,[sp, #0x60]
7101b3ccc0  ldr x0,[x20, #0xd8]
7101b3ccc4  str x8,[x20, #0xd8]
7101b3ccc8  cbz x0,0x7101b3ccd0
7101b3cccc  bl 0x710392eb40
7101b3ccd0  ldr x0,[sp, #0x60]
7101b3ccd4  stp x23,xzr,[sp, #0x58]
7101b3ccd8  cbz x0,0x7101b3cce0
7101b3ccdc  bl 0x710392eb40
7101b3cce0  ldr x8,[x21]
7101b3cce4  ldr x8,[x8]
7101b3cce8  add x0,x8,#0x8
7101b3ccec  adrp x1,0x71042c4000
7101b3ccf0  add x1,x1,#0xa3b
7101b3ccf4  add x8,sp,#0x58
7101b3ccf8  add x22,sp,#0x58
7101b3ccfc  bl 0x7103776910
7101b3cd00  cmp x22,x25
7101b3cd04  b.eq 0x7101b3cd20
7101b3cd08  ldr x8,[sp, #0x60]
7101b3cd0c  str xzr,[sp, #0x60]
7101b3cd10  ldr x0,[x20, #0xe8]
7101b3cd14  str x8,[x20, #0xe8]
7101b3cd18  cbz x0,0x7101b3cd20
7101b3cd1c  bl 0x710392eb40
7101b3cd20  ldr x0,[sp, #0x60]
7101b3cd24  stp x23,xzr,[sp, #0x58]
7101b3cd28  cbz x0,0x7101b3cd30
7101b3cd2c  bl 0x710392eb40
7101b3cd30  ldr x8,[x21]
7101b3cd34  ldr x8,[x8]
7101b3cd38  add x0,x8,#0x8
7101b3cd3c  adrp x1,0x71042f7000
7101b3cd40  add x1,x1,#0xf35
7101b3cd44  add x8,sp,#0x58
7101b3cd48  add x22,sp,#0x58
7101b3cd4c  bl 0x7103776910
7101b3cd50  cmp x22,x26
7101b3cd54  b.eq 0x7101b3cd70
7101b3cd58  ldr x8,[sp, #0x60]
7101b3cd5c  str xzr,[sp, #0x60]
7101b3cd60  ldr x0,[x20, #0xf8]
7101b3cd64  str x8,[x20, #0xf8]
7101b3cd68  cbz x0,0x7101b3cd70
7101b3cd6c  bl 0x710392eb40
7101b3cd70  ldr x0,[sp, #0x60]
7101b3cd74  add x22,x20,#0x100
7101b3cd78  stp x23,xzr,[sp, #0x58]
7101b3cd7c  cbz x0,0x7101b3cd84
7101b3cd80  bl 0x710392eb40
7101b3cd84  ldr x8,[x21]
7101b3cd88  ldr x8,[x8]
7101b3cd8c  add x0,x8,#0x8
7101b3cd90  adrp x1,0x71042f7000
7101b3cd94  add x1,x1,#0xf49
7101b3cd98  add x8,sp,#0x58
7101b3cd9c  add x24,sp,#0x58
7101b3cda0  bl 0x7103776910
7101b3cda4  cmp x24,x22
7101b3cda8  b.eq 0x7101b3cdc4
7101b3cdac  ldr x8,[sp, #0x60]
7101b3cdb0  str xzr,[sp, #0x60]
7101b3cdb4  ldr x0,[x20, #0x108]
7101b3cdb8  str x8,[x20, #0x108]
7101b3cdbc  cbz x0,0x7101b3cdc4
7101b3cdc0  bl 0x710392eb40
7101b3cdc4  ldr x0,[sp, #0x60]
7101b3cdc8  add x22,x20,#0x110
7101b3cdcc  stp x23,xzr,[sp, #0x58]
7101b3cdd0  cbz x0,0x7101b3cdd8
7101b3cdd4  bl 0x710392eb40
7101b3cdd8  ldr x8,[x21]
7101b3cddc  ldr x8,[x8]
7101b3cde0  add x0,x8,#0x8
7101b3cde4  adrp x1,0x7104318000
7101b3cde8  add x1,x1,#0xb21
7101b3cdec  add x8,sp,#0x58
7101b3cdf0  add x24,sp,#0x58
7101b3cdf4  bl 0x7103776910
7101b3cdf8  cmp x24,x22
7101b3cdfc  b.eq 0x7101b3ce18
7101b3ce00  ldr x8,[sp, #0x60]
7101b3ce04  str xzr,[sp, #0x60]
7101b3ce08  ldr x0,[x20, #0x118]
7101b3ce0c  str x8,[x20, #0x118]
7101b3ce10  cbz x0,0x7101b3ce18
7101b3ce14  bl 0x710392eb40
7101b3ce18  ldr x0,[sp, #0x60]
7101b3ce1c  add x22,x20,#0x120
7101b3ce20  stp x23,xzr,[sp, #0x58]
7101b3ce24  cbz x0,0x7101b3ce2c
7101b3ce28  bl 0x710392eb40
7101b3ce2c  ldr x8,[x21]
7101b3ce30  ldr x8,[x8]
7101b3ce34  add x0,x8,#0x8
7101b3ce38  adrp x1,0x7104318000
7101b3ce3c  add x1,x1,#0xb35
7101b3ce40  add x8,sp,#0x58
7101b3ce44  add x24,sp,#0x58
7101b3ce48  bl 0x7103776910
7101b3ce4c  cmp x24,x22
7101b3ce50  b.eq 0x7101b3ce6c
7101b3ce54  ldr x8,[sp, #0x60]
7101b3ce58  str xzr,[sp, #0x60]
7101b3ce5c  ldr x0,[x20, #0x128]
7101b3ce60  str x8,[x20, #0x128]
7101b3ce64  cbz x0,0x7101b3ce6c
7101b3ce68  bl 0x710392eb40
7101b3ce6c  ldr x0,[sp, #0x60]
7101b3ce70  add x22,x20,#0x130
7101b3ce74  stp x23,xzr,[sp, #0x58]
7101b3ce78  cbz x0,0x7101b3ce80
7101b3ce7c  bl 0x710392eb40
7101b3ce80  ldr x8,[x21]
7101b3ce84  ldr x8,[x8]
7101b3ce88  add x0,x8,#0x8
7101b3ce8c  adrp x1,0x7104349000
7101b3ce90  add x1,x1,#0xfac
7101b3ce94  add x8,sp,#0x58
7101b3ce98  add x24,sp,#0x58
7101b3ce9c  bl 0x7103776910
7101b3cea0  cmp x24,x22
7101b3cea4  b.eq 0x7101b3cec0
7101b3cea8  ldr x8,[sp, #0x60]
7101b3ceac  str xzr,[sp, #0x60]
7101b3ceb0  ldr x0,[x20, #0x138]
7101b3ceb4  str x8,[x20, #0x138]
7101b3ceb8  cbz x0,0x7101b3cec0
7101b3cebc  bl 0x710392eb40
7101b3cec0  ldr x0,[sp, #0x60]
7101b3cec4  add x22,x20,#0x140
7101b3cec8  stp x23,xzr,[sp, #0x58]
7101b3cecc  cbz x0,0x7101b3ced4
7101b3ced0  bl 0x710392eb40
7101b3ced4  ldr x8,[x21]
7101b3ced8  ldr x8,[x8]
7101b3cedc  add x0,x8,#0x8
7101b3cee0  adrp x1,0x7104412000
7101b3cee4  add x1,x1,#0x615
7101b3cee8  add x8,sp,#0x58
7101b3ceec  add x24,sp,#0x58
7101b3cef0  bl 0x7103776910
7101b3cef4  cmp x24,x22
7101b3cef8  b.eq 0x7101b3cf14
7101b3cefc  ldr x8,[sp, #0x60]
7101b3cf00  str xzr,[sp, #0x60]
7101b3cf04  ldr x0,[x20, #0x148]
7101b3cf08  str x8,[x20, #0x148]
7101b3cf0c  cbz x0,0x7101b3cf14
7101b3cf10  bl 0x710392eb40
7101b3cf14  ldr x0,[sp, #0x60]
7101b3cf18  add x22,x20,#0x150
7101b3cf1c  stp x23,xzr,[sp, #0x58]
7101b3cf20  cbz x0,0x7101b3cf28
7101b3cf24  bl 0x710392eb40
7101b3cf28  ldr x8,[x21]
7101b3cf2c  ldr x8,[x8]
7101b3cf30  add x0,x8,#0x8
7101b3cf34  adrp x1,0x71042a2000
7101b3cf38  add x1,x1,#0xc05
7101b3cf3c  add x8,sp,#0x58
7101b3cf40  add x24,sp,#0x58
7101b3cf44  bl 0x7103776910
7101b3cf48  cmp x24,x22
7101b3cf4c  b.eq 0x7101b3cf68
7101b3cf50  ldr x8,[sp, #0x60]
7101b3cf54  str xzr,[sp, #0x60]
7101b3cf58  ldr x0,[x20, #0x158]
7101b3cf5c  str x8,[x20, #0x158]
7101b3cf60  cbz x0,0x7101b3cf68
7101b3cf64  bl 0x710392eb40
7101b3cf68  ldr x0,[sp, #0x60]
7101b3cf6c  add x22,x20,#0x160
7101b3cf70  stp x23,xzr,[sp, #0x58]
7101b3cf74  cbz x0,0x7101b3cf7c
7101b3cf78  bl 0x710392eb40
7101b3cf7c  ldr x8,[x21]
7101b3cf80  add x21,sp,#0x58
7101b3cf84  ldr x8,[x8]
7101b3cf88  add x0,x8,#0x8
7101b3cf8c  adrp x1,0x7104349000
7101b3cf90  add x1,x1,#0xfc0
7101b3cf94  add x8,sp,#0x58
7101b3cf98  bl 0x7103776910
7101b3cf9c  cmp x21,x22
7101b3cfa0  b.eq 0x7101b3cfbc
7101b3cfa4  ldr x8,[sp, #0x60]
7101b3cfa8  str xzr,[sp, #0x60]
7101b3cfac  ldr x0,[x20, #0x168]
7101b3cfb0  str x8,[x20, #0x168]
7101b3cfb4  cbz x0,0x7101b3cfbc
7101b3cfb8  bl 0x710392eb40
7101b3cfbc  ldr x0,[sp, #0x60]
7101b3cfc0  stp x23,xzr,[sp, #0x58]
7101b3cfc4  cbz x0,0x7101b3cfcc
7101b3cfc8  bl 0x710392eb40
7101b3cfcc  str x20,[x19, #0x80]
7101b3cfd0  ldp x29,x30,[sp, #0xc0]
7101b3cfd4  ldp x20,x19,[sp, #0xb0]
7101b3cfd8  ldp x22,x21,[sp, #0xa0]
7101b3cfdc  ldp x24,x23,[sp, #0x90]
7101b3cfe0  ldp x26,x25,[sp, #0x80]
7101b3cfe4  ldp x28,x27,[sp, #0x70]
7101b3cfe8  add sp,sp,#0xd0
7101b3cfec  ret
