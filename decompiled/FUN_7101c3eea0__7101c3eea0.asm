// addr:      7101c3eea0
// offset:    0x1c3eea0
// name:      FUN_7101c3eea0
// mangled:   
// size:      1636

7101c3eea0  sub sp,sp,#0xd0
7101c3eea4  stp x28,x27,[sp, #0x70]
7101c3eea8  stp x26,x25,[sp, #0x80]
7101c3eeac  stp x24,x23,[sp, #0x90]
7101c3eeb0  stp x22,x21,[sp, #0xa0]
7101c3eeb4  stp x20,x19,[sp, #0xb0]
7101c3eeb8  stp x29,x30,[sp, #0xc0]
7101c3eebc  add x29,sp,#0xc0
7101c3eec0  ldr w8,[x0, #0x160]
7101c3eec4  mov x19,x0
7101c3eec8  cmp w8,#0x5
7101c3eecc  b.eq 0x7101c3f0e0
7101c3eed0  cmp w8,#0x2
7101c3eed4  b.ne 0x7101c3f4dc
7101c3eed8  add x20,x19,#0x30
7101c3eedc  adrp x1,0x7104401000
7101c3eee0  add x1,x1,#0xdad
7101c3eee4  add x8,sp,#0x60
7101c3eee8  mov x0,x20
7101c3eeec  bl 0x7103776640
7101c3eef0  adrp x1,0x710425f000
7101c3eef4  add x1,x1,#0x382
7101c3eef8  add x8,sp,#0x48
7101c3eefc  add x0,sp,#0x60
7101c3ef00  bl 0x7103776910
7101c3ef04  ldr x21,[sp, #0x50]
7101c3ef08  ldr x22,[x21, #0x10]
7101c3ef0c  cbz x22,0x7101c3ef50
7101c3ef10  ldr w3,[x19, #0x170]
7101c3ef14  mov x0,sp
7101c3ef18  mov w1,#0x20
7101c3ef1c  mov w2,wzr
7101c3ef20  mov w4,wzr
7101c3ef24  mov w5,wzr
7101c3ef28  stp xzr,xzr,[sp, #0x30]
7101c3ef2c  stp xzr,xzr,[sp, #0x20]
7101c3ef30  stp xzr,xzr,[sp, #0x10]
7101c3ef34  stp xzr,xzr,[sp]
7101c3ef38  bl 0x71037ad940
7101c3ef3c  mov w2,w0
7101c3ef40  mov x1,sp
7101c3ef44  mov x0,x22
7101c3ef48  mov w3,wzr
7101c3ef4c  bl 0x71037a2270
7101c3ef50  adrp x23,0x710523d000
7101c3ef54  add x23,x23,#0x9a8
7101c3ef58  stp x23,xzr,[sp, #0x48]
7101c3ef5c  cbz x21,0x7101c3ef68
7101c3ef60  mov x0,x21
7101c3ef64  bl 0x710392eb40
7101c3ef68  ldr x21,[sp, #0x68]
7101c3ef6c  adrp x24,0x710523d000
7101c3ef70  add x24,x24,#0x988
7101c3ef74  stp x24,xzr,[sp, #0x60]
7101c3ef78  cbz x21,0x7101c3ef94
7101c3ef7c  ldr x0,[x21, #0x18]
7101c3ef80  stp x23,xzr,[x21, #0x10]
7101c3ef84  cbz x0,0x7101c3ef8c
7101c3ef88  bl 0x710392eb40
7101c3ef8c  mov x0,x21
7101c3ef90  bl 0x710392eb40
7101c3ef94  adrp x1,0x7104308000
7101c3ef98  add x1,x1,#0xc5c
7101c3ef9c  add x8,sp,#0x60
7101c3efa0  mov x0,x20
7101c3efa4  bl 0x7103776640
7101c3efa8  adrp x1,0x710425f000
7101c3efac  add x1,x1,#0x382
7101c3efb0  add x8,sp,#0x48
7101c3efb4  add x0,sp,#0x60
7101c3efb8  bl 0x7103776910
7101c3efbc  ldr x21,[sp, #0x50]
7101c3efc0  ldr x22,[x21, #0x10]
7101c3efc4  cbz x22,0x7101c3f008
7101c3efc8  ldr w3,[x19, #0x174]
7101c3efcc  mov x0,sp
7101c3efd0  mov w1,#0x20
7101c3efd4  mov w2,wzr
7101c3efd8  mov w4,wzr
7101c3efdc  mov w5,wzr
7101c3efe0  stp xzr,xzr,[sp, #0x30]
7101c3efe4  stp xzr,xzr,[sp, #0x20]
7101c3efe8  stp xzr,xzr,[sp, #0x10]
7101c3efec  stp xzr,xzr,[sp]
7101c3eff0  bl 0x71037ad940
7101c3eff4  mov w2,w0
7101c3eff8  mov x1,sp
7101c3effc  mov x0,x22
7101c3f000  mov w3,wzr
7101c3f004  bl 0x71037a2270
7101c3f008  stp x23,xzr,[sp, #0x48]
7101c3f00c  cbz x21,0x7101c3f018
7101c3f010  mov x0,x21
7101c3f014  bl 0x710392eb40
7101c3f018  ldr x21,[sp, #0x68]
7101c3f01c  stp x24,xzr,[sp, #0x60]
7101c3f020  cbz x21,0x7101c3f03c
7101c3f024  ldr x0,[x21, #0x18]
7101c3f028  stp x23,xzr,[x21, #0x10]
7101c3f02c  cbz x0,0x7101c3f034
7101c3f030  bl 0x710392eb40
7101c3f034  mov x0,x21
7101c3f038  bl 0x710392eb40
7101c3f03c  adrp x1,0x71042d6000
7101c3f040  add x1,x1,#0x262
7101c3f044  mov x8,sp
7101c3f048  mov x0,x20
7101c3f04c  bl 0x7103776910
7101c3f050  ldr w3,[x19, #0x170]
7101c3f054  adrp x1,0x710435b000
7101c3f058  add x1,x1,#0x7ab
7101c3f05c  mov x0,sp
7101c3f060  mov w2,#0x1
7101c3f064  bl 0x710377a280
7101c3f068  ldr x0,[sp, #0x8]
7101c3f06c  stp x23,xzr,[sp]
7101c3f070  cbz x0,0x7101c3f078
7101c3f074  bl 0x710392eb40
7101c3f078  adrp x1,0x71042f8000
7101c3f07c  add x1,x1,#0x308
7101c3f080  mov x8,sp
7101c3f084  mov x0,x20
7101c3f088  bl 0x7103776910
7101c3f08c  ldr w3,[x19, #0x170]
7101c3f090  adrp x1,0x710435b000
7101c3f094  add x1,x1,#0x7ab
7101c3f098  mov x0,sp
7101c3f09c  mov w2,#0x1
7101c3f0a0  bl 0x710377a280
7101c3f0a4  ldr x0,[sp, #0x8]
7101c3f0a8  stp x23,xzr,[sp]
7101c3f0ac  cbz x0,0x7101c3f0b4
7101c3f0b0  bl 0x710392eb40
7101c3f0b4  ldr w2,[x19, #0x170]
7101c3f0b8  adrp x1,0x71042f8000
7101c3f0bc  add x1,x1,#0x318
7101c3f0c0  mov x0,x20
7101c3f0c4  bl 0x7103778430
7101c3f0c8  ldr w2,[x19, #0x174]
7101c3f0cc  adrp x1,0x71042c4000
7101c3f0d0  add x1,x1,#0xda9
7101c3f0d4  mov x0,x20
7101c3f0d8  bl 0x7103778430
7101c3f0dc  b 0x7101c3f4dc
7101c3f0e0  ldr w8,[x19, #0x198]
7101c3f0e4  cmp w8,#0x3
7101c3f0e8  b.hi 0x7101c3f3e0
7101c3f0ec  adrp x9,0x71044f9000
7101c3f0f0  add x9,x9,#0x304
7101c3f0f4  ldrsw x8,[x9, x8, LSL #0x2]
7101c3f0f8  add x8,x8,x9
7101c3f0fc  br x8
7101c3f100  add x0,x19,#0x30
7101c3f104  adrp x1,0x710437c000
7101c3f108  add x1,x1,#0x9ad
7101c3f10c  mov x8,sp
7101c3f110  bl 0x7103776910
7101c3f114  adrp x1,0x71043e0000
7101c3f118  add x1,x1,#0x12c
7101c3f11c  b 0x7101c3f17c
7101c3f120  add x0,x19,#0x30
7101c3f124  adrp x1,0x710437c000
7101c3f128  add x1,x1,#0x9ad
7101c3f12c  mov x8,sp
7101c3f130  bl 0x7103776910
7101c3f134  adrp x1,0x710439d000
7101c3f138  add x1,x1,#0x3f5
7101c3f13c  b 0x7101c3f17c
7101c3f140  add x0,x19,#0x30
7101c3f144  adrp x1,0x710437c000
7101c3f148  add x1,x1,#0x9ad
7101c3f14c  mov x8,sp
7101c3f150  bl 0x7103776910
7101c3f154  adrp x1,0x71043be000
7101c3f158  add x1,x1,#0x648
7101c3f15c  b 0x7101c3f17c
7101c3f160  add x0,x19,#0x30
7101c3f164  adrp x1,0x710437c000
7101c3f168  add x1,x1,#0x9ad
7101c3f16c  mov x8,sp
7101c3f170  bl 0x7103776910
7101c3f174  adrp x1,0x71043be000
7101c3f178  add x1,x1,#0x62b
7101c3f17c  mov x0,sp
7101c3f180  bl 0x710377a120
7101c3f184  ldr x0,[sp, #0x8]
7101c3f188  adrp x8,0x710523d000
7101c3f18c  add x8,x8,#0x9a8
7101c3f190  stp x8,xzr,[sp]
7101c3f194  cbz x0,0x7101c3f19c
7101c3f198  bl 0x710392eb40
7101c3f19c  ldp x24,x8,[x19, #0x180]
7101c3f1a0  subs x8,x8,x24
7101c3f1a4  b.eq 0x7101c3f240
7101c3f1a8  mov x20,xzr
7101c3f1ac  adrp x21,0x7104412000
7101c3f1b0  add x21,x21,#0x9fa
7101c3f1b4  asr x25,x8,#0x3
7101c3f1b8  adrp x22,0x71042d6000
7101c3f1bc  add x22,x22,#0x26e
7101c3f1c0  add x23,x19,#0x30
7101c3f1c4  adrp x26,0x710523d000
7101c3f1c8  add x26,x26,#0x988
7101c3f1cc  mov w27,#0x1
7101c3f1d0  adrp x28,0x710523d000
7101c3f1d4  add x28,x28,#0x9a8
7101c3f1d8  ldrb w24,[x24, x27, LSL ]
7101c3f1dc  mov x8,sp
7101c3f1e0  mov x0,x23
7101c3f1e4  mov x1,x21
7101c3f1e8  mov w2,w20
7101c3f1ec  bl 0x7103776640
7101c3f1f0  ldr x8,[x19, #0x180]
7101c3f1f4  add x8,x8,x24
7101c3f1f8  mov x0,sp
7101c3f1fc  ldrb w2,[x8, x27, LSL ]
7101c3f200  mov x1,x22
7101c3f204  bl 0x7103778430
7101c3f208  ldr x24,[sp, #0x8]
7101c3f20c  stp x26,xzr,[sp]
7101c3f210  cbz x24,0x7101c3f22c
7101c3f214  ldr x0,[x24, #0x18]
7101c3f218  stp x28,xzr,[x24, #0x10]
7101c3f21c  cbz x0,0x7101c3f224
7101c3f220  bl 0x710392eb40
7101c3f224  mov x0,x24
7101c3f228  bl 0x710392eb40
7101c3f22c  ldr x24,[x19, #0x180]
7101c3f230  add x20,x20,#0x1
7101c3f234  add x27,x27,#0x8
7101c3f238  cmp x25,x20
7101c3f23c  b.hi 0x7101c3f1d8
7101c3f240  ldrsw x22,[x19, #0x198]
7101c3f244  add x23,x24,x22, LSL #0x3
7101c3f248  mov x25,x23
7101c3f24c  ldrb w8,[x25, #0x1]!
7101c3f250  ldr x9,[x19, #0x18]
7101c3f254  add x21,x25,#0x1
7101c3f258  ldr x9,[x9]
7101c3f25c  add x8,x21,x8
7101c3f260  ldurb w2,[x8, #-0x1]
7101c3f264  add x0,x9,#0x8
7101c3f268  adrp x1,0x710437c000
7101c3f26c  add x1,x1,#0x4cc
7101c3f270  bl 0x7103778430
7101c3f274  ldrb w8,[x25]
7101c3f278  cmp x8,#0x1
7101c3f27c  b.ls 0x7101c3f2a8
7101c3f280  add x8,x8,#0x1
7101c3f284  mov w9,#0x1
7101c3f288  mov w20,#0x1
7101c3f28c  ldrb w10,[x23, x8, LSL ]
7101c3f290  sub x8,x8,#0x1
7101c3f294  cmp x8,#0x2
7101c3f298  mul w9,w9,w10
7101c3f29c  add w20,w9,w20
7101c3f2a0  b.gt 0x7101c3f28c
7101c3f2a4  b 0x7101c3f2ac
7101c3f2a8  mov w20,#0x1
7101c3f2ac  ldrb w8,[x21]
7101c3f2b0  cmp w8,#0x2
7101c3f2b4  b.ne 0x7101c3f2cc
7101c3f2b8  lsl x8,x22,#0x3
7101c3f2bc  ldrb w8,[x24, x8, LSL ]
7101c3f2c0  ldr w9,[x19, #0x170]
7101c3f2c4  sub w8,w20,w8
7101c3f2c8  add w20,w8,w9
7101c3f2cc  add x19,x19,#0x30
7101c3f2d0  adrp x1,0x7104443000
7101c3f2d4  add x1,x1,#0x6cd
7101c3f2d8  mov x8,sp
7101c3f2dc  mov x0,x19
7101c3f2e0  bl 0x7103776910
7101c3f2e4  adrp x1,0x7104318000
7101c3f2e8  add x1,x1,#0xe34
7101c3f2ec  mov x0,sp
7101c3f2f0  mov w2,#0x1
7101c3f2f4  mov w3,w20
7101c3f2f8  bl 0x710377a280
7101c3f2fc  ldr x0,[sp, #0x8]
7101c3f300  adrp x22,0x710523d000
7101c3f304  add x22,x22,#0x9a8
7101c3f308  stp x22,xzr,[sp]
7101c3f30c  cbz x0,0x7101c3f314
7101c3f310  bl 0x710392eb40
7101c3f314  ldrb w25,[x25]
7101c3f318  stp xzr,xzr,[sp, #0x50]
7101c3f31c  str xzr,[sp, #0x48]
7101c3f320  add x8,x23,x25
7101c3f324  add x24,x8,#0x2
7101c3f328  subs x26,x24,x21
7101c3f32c  b.eq 0x7101c3f3c4
7101c3f330  lsr x8,x26,#0x3d
7101c3f334  cbnz x8,0x7101c3f4fc
7101c3f338  lsl x8,x26,#0x3
7101c3f33c  cmp x8,#0x0
7101c3f340  csinc x20,x8,xzr,ne
7101c3f344  mov w0,#0x10
7101c3f348  mov x1,x20
7101c3f34c  bl 0x710392e290
7101c3f350  cbnz x0,0x7101c3f394
7101c3f354  adrp x8,0x7105332000
7101c3f358  ldr x0,[x8, #0xf00]
7101c3f35c  cbz x0,0x7101c3f390
7101c3f360  str wzr,[sp, #0x60]
7101c3f364  str x20,[sp]
7101c3f368  ldr x8,[x0]
7101c3f36c  ldr x8,[x8, #0x30]
7101c3f370  add x1,sp,#0x60
7101c3f374  mov x2,sp
7101c3f378  blr x8
7101c3f37c  tbz w0,#0x0,0x7101c3f390
7101c3f380  mov w0,#0x10
7101c3f384  mov x1,x20
7101c3f388  bl 0x710392e290
7101c3f38c  cbnz x0,0x7101c3f394
7101c3f390  mov x0,xzr
7101c3f394  add x8,sp,#0x48
7101c3f398  add x20,x8,#0x8
7101c3f39c  add x8,x0,x26, LSL #0x3
7101c3f3a0  cmp x21,x24
7101c3f3a4  stp x0,x0,[sp, #0x48]
7101c3f3a8  str x8,[sp, #0x58]
7101c3f3ac  b.eq 0x7101c3f3d8
7101c3f3b0  tbnz w25,#0x0,0x7101c3f424
7101c3f3b4  mov x8,x0
7101c3f3b8  cmp w25,#0x1
7101c3f3bc  b.ne 0x7101c3f440
7101c3f3c0  b 0x7101c3f474
7101c3f3c4  add x9,sp,#0x48
7101c3f3c8  mov x0,xzr
7101c3f3cc  mov x8,xzr
7101c3f3d0  add x20,x9,#0x8
7101c3f3d4  b 0x7101c3f474
7101c3f3d8  mov x8,x0
7101c3f3dc  b 0x7101c3f474
7101c3f3e0  add x0,x19,#0x30
7101c3f3e4  adrp x1,0x710437c000
7101c3f3e8  add x1,x1,#0x9ad
7101c3f3ec  mov x8,sp
7101c3f3f0  bl 0x7103776910
7101c3f3f4  ldr x20,[sp, #0x8]
7101c3f3f8  ldr x0,[x20, #0x10]
7101c3f3fc  cbz x0,0x7101c3f40c
7101c3f400  adrp x1,0x7104867000
7101c3f404  add x1,x1,#0xc2e
7101c3f408  bl 0x71037a28a0
7101c3f40c  adrp x8,0x710523d000
7101c3f410  add x8,x8,#0x9a8
7101c3f414  stp x8,xzr,[sp]
7101c3f418  cbz x20,0x7101c3f19c
7101c3f41c  mov x0,x20
7101c3f420  b 0x7101c3f198
7101c3f424  ldrb w9,[x21]
7101c3f428  mov x8,x0
7101c3f42c  add x21,x23,#0x3
7101c3f430  str x9,[x8], #0x8
7101c3f434  str x8,[sp, #0x50]
7101c3f438  cmp w25,#0x1
7101c3f43c  b.eq 0x7101c3f474
7101c3f440  ldrb w9,[x21]
7101c3f444  str x9,[x8]
7101c3f448  ldr x8,[sp, #0x50]
7101c3f44c  add x9,x8,#0x8
7101c3f450  str x9,[sp, #0x50]
7101c3f454  ldrb w9,[x21, #0x1]
7101c3f458  str x9,[x8, #0x8]
7101c3f45c  ldr x8,[sp, #0x50]
7101c3f460  add x21,x21,#0x2
7101c3f464  cmp x21,x24
7101c3f468  add x8,x8,#0x8
7101c3f46c  str x8,[sp, #0x50]
7101c3f470  b.ne 0x7101c3f440
7101c3f474  sub x8,x8,x0
7101c3f478  adrp x0,0x710434a000
7101c3f47c  add x0,x0,#0x2d0
7101c3f480  asr x1,x8,#0x3
7101c3f484  mov x8,sp
7101c3f488  mov x21,sp
7101c3f48c  bl 0x71003a4ca0
7101c3f490  adrp x1,0x7104308000
7101c3f494  add x1,x1,#0x4b5
7101c3f498  add x8,sp,#0x60
7101c3f49c  mov x0,x19
7101c3f4a0  bl 0x7103776910
7101c3f4a4  ldr x19,[sp, #0x68]
7101c3f4a8  ldr x0,[x19, #0x10]
7101c3f4ac  cbz x0,0x7101c3f4bc
7101c3f4b0  add x1,x21,#0x8
7101c3f4b4  add x2,sp,#0x48
7101c3f4b8  bl 0x71037a2660
7101c3f4bc  stp x22,xzr,[sp, #0x60]
7101c3f4c0  cbz x19,0x7101c3f4cc
7101c3f4c4  mov x0,x19
7101c3f4c8  bl 0x710392eb40
7101c3f4cc  ldr x0,[sp, #0x48]
7101c3f4d0  cbz x0,0x7101c3f4dc
7101c3f4d4  str x0,[x20]
7101c3f4d8  bl 0x710392eb40
7101c3f4dc  ldp x29,x30,[sp, #0xc0]
7101c3f4e0  ldp x20,x19,[sp, #0xb0]
7101c3f4e4  ldp x22,x21,[sp, #0xa0]
7101c3f4e8  ldp x24,x23,[sp, #0x90]
7101c3f4ec  ldp x26,x25,[sp, #0x80]
7101c3f4f0  ldp x28,x27,[sp, #0x70]
7101c3f4f4  add sp,sp,#0xd0
7101c3f4f8  ret
7101c3f4fc  add x0,sp,#0x48
7101c3f500  bl 0x71039c0c00
