// addr:      7101e0b1b0
// offset:    0x1e0b1b0
// name:      FUN_7101e0b1b0
// mangled:   
// size:      7732

7101e0b1b0  stp x28,x27,[sp, #-0x60]!
7101e0b1b4  stp x26,x25,[sp, #0x10]
7101e0b1b8  stp x24,x23,[sp, #0x20]
7101e0b1bc  stp x22,x21,[sp, #0x30]
7101e0b1c0  stp x20,x19,[sp, #0x40]
7101e0b1c4  stp x29,x30,[sp, #0x50]
7101e0b1c8  add x29,sp,#0x50
7101e0b1cc  sub sp,sp,#0x230
7101e0b1d0  cmp w1,#0x0
7101e0b1d4  cset w8,ne
7101e0b1d8  cmp w1,#0x2
7101e0b1dc  strb w8,[x0, #0x59d]
7101e0b1e0  cset w8,eq
7101e0b1e4  strb w8,[x0, #0x59f]
7101e0b1e8  adrp x8,0x7105314000
7101e0b1ec  ldr x8,[x8, #0x510]
7101e0b1f0  ldr x8,[x8]
7101e0b1f4  ldr x8,[x8, #0x138]
7101e0b1f8  ldr x8,[x8]
7101e0b1fc  ldr x8,[x8]
7101e0b200  ldr w8,[x8, #0xdc]
7101e0b204  ubfx w8,w8,#0x14,#0x1
7101e0b208  strb w8,[x0, #0x59e]
7101e0b20c  ldr x8,[x0, #0x8]
7101e0b210  ldr x1,[x8]
7101e0b214  add x20,x0,#0x4d0
7101e0b218  mov x19,x0
7101e0b21c  adrp x2,0x7104545000
7101e0b220  add x2,x2,#0x9c8
7101e0b224  mov w3,#0x2
7101e0b228  mov x0,x20
7101e0b22c  bl 0x71032cbf30
7101e0b230  ldr x8,[x19, #0x8]
7101e0b234  ldr x1,[x8]
7101e0b238  add x22,x19,#0x4d8
7101e0b23c  adrp x2,0x7104545000
7101e0b240  add x2,x2,#0x9d0
7101e0b244  mov w3,#0x1
7101e0b248  mov x0,x22
7101e0b24c  bl 0x71032cbf30
7101e0b250  ldr x8,[x19, #0x4d0]
7101e0b254  ldr x8,[x8]
7101e0b258  add x9,x8,#0x8
7101e0b25c  add x10,x19,#0x510
7101e0b260  str x10,[sp, #0x28]
7101e0b264  cmp x10,x9
7101e0b268  b.eq 0x7101e0b2dc
7101e0b26c  ldr x9,[x8, #0x10]
7101e0b270  ldr x9,[x9]
7101e0b274  ldr x10,[x19, #0x518]
7101e0b278  str x9,[x10]
7101e0b27c  ldr x9,[x8, #0x10]
7101e0b280  ldr x9,[x9, #0x8]
7101e0b284  ldr x10,[x19, #0x518]
7101e0b288  str x9,[x10, #0x8]
7101e0b28c  ldr x9,[x8, #0x10]
7101e0b290  ldr x8,[x19, #0x518]
7101e0b294  cmp x8,x9
7101e0b298  b.eq 0x7101e0b2dc
7101e0b29c  ldr x10,[x9, #0x18]
7101e0b2a0  ldr x10,[x10]
7101e0b2a4  ldr x11,[x8, #0x18]
7101e0b2a8  str x10,[x11]
7101e0b2ac  ldr x10,[x9, #0x18]
7101e0b2b0  ldr x10,[x10, #0x8]
7101e0b2b4  ldr x11,[x8, #0x18]
7101e0b2b8  str x10,[x11, #0x8]
7101e0b2bc  ldr x10,[x9, #0x18]
7101e0b2c0  ldr x10,[x10, #0x10]
7101e0b2c4  ldr x11,[x8, #0x18]
7101e0b2c8  str x10,[x11, #0x10]
7101e0b2cc  ldr x9,[x9, #0x18]
7101e0b2d0  ldr x9,[x9, #0x18]
7101e0b2d4  ldr x8,[x8, #0x18]
7101e0b2d8  str x9,[x8, #0x18]
7101e0b2dc  ldr x8,[x19, #0x8]
7101e0b2e0  ldr x1,[x8]
7101e0b2e4  add x0,x19,#0x4e0
7101e0b2e8  adrp x2,0x7104545000
7101e0b2ec  add x2,x2,#0x9d8
7101e0b2f0  mov w3,#0x1
7101e0b2f4  bl 0x71032cbf30
7101e0b2f8  ldr x8,[x19, #0x4e0]
7101e0b2fc  ldr x8,[x8]
7101e0b300  add x9,x8,#0x8
7101e0b304  add x10,x19,#0x4e8
7101e0b308  cmp x10,x9
7101e0b30c  b.eq 0x7101e0b380
7101e0b310  ldr x9,[x8, #0x10]
7101e0b314  ldr x9,[x9]
7101e0b318  ldr x10,[x19, #0x4f0]
7101e0b31c  str x9,[x10]
7101e0b320  ldr x9,[x8, #0x10]
7101e0b324  ldr x9,[x9, #0x8]
7101e0b328  ldr x10,[x19, #0x4f0]
7101e0b32c  str x9,[x10, #0x8]
7101e0b330  ldr x9,[x8, #0x10]
7101e0b334  ldr x8,[x19, #0x4f0]
7101e0b338  cmp x8,x9
7101e0b33c  b.eq 0x7101e0b380
7101e0b340  ldr x10,[x9, #0x18]
7101e0b344  ldr x10,[x10]
7101e0b348  ldr x11,[x8, #0x18]
7101e0b34c  str x10,[x11]
7101e0b350  ldr x10,[x9, #0x18]
7101e0b354  ldr x10,[x10, #0x8]
7101e0b358  ldr x11,[x8, #0x18]
7101e0b35c  str x10,[x11, #0x8]
7101e0b360  ldr x10,[x9, #0x18]
7101e0b364  ldr x10,[x10, #0x10]
7101e0b368  ldr x11,[x8, #0x18]
7101e0b36c  str x10,[x11, #0x10]
7101e0b370  ldr x9,[x9, #0x18]
7101e0b374  ldr x9,[x9, #0x18]
7101e0b378  ldr x8,[x8, #0x18]
7101e0b37c  str x9,[x8, #0x18]
7101e0b380  ldr x8,[x20]
7101e0b384  ldr x8,[x8]
7101e0b388  ldr x8,[x8]
7101e0b38c  ldr x9,[x8, #0x600]
7101e0b390  mov w10,#0x10
7101e0b394  str w10,[x9, #0x18]
7101e0b398  ldr x9,[x8, #0x600]
7101e0b39c  mov w10,#0x80
7101e0b3a0  str w10,[x9, #0x1c]
7101e0b3a4  ldr x8,[x8, #0x600]
7101e0b3a8  mov w9,#0x500
7101e0b3ac  str w9,[x8, #0x20]
7101e0b3b0  ldr x8,[x20]
7101e0b3b4  ldr x8,[x8]
7101e0b3b8  ldr x9,[x8]
7101e0b3bc  ldr x10,[x9, #0x610]
7101e0b3c0  ldr x8,[x9, #0x608]
7101e0b3c4  cmp x10,x8
7101e0b3c8  b.eq 0x7101e0cfd4
7101e0b3cc  ldr x8,[x8, #0x8]
7101e0b3d0  mov w9,#0x20
7101e0b3d4  str w9,[x8, #0x24]
7101e0b3d8  ldrb w8,[x19, #0x59e]
7101e0b3dc  ldr x0,[x19, #0x518]
7101e0b3e0  add x21,sp,#0xd0
7101e0b3e4  str x22,[sp, #0x18]
7101e0b3e8  cbz w8,0x7101e0b3f8
7101e0b3ec  adrp x1,0x71042e7000
7101e0b3f0  add x1,x1,#0x754
7101e0b3f4  b 0x7101e0b400
7101e0b3f8  adrp x1,0x7104443000
7101e0b3fc  add x1,x1,#0xcbf
7101e0b400  fmov s0,0x3f800000
7101e0b404  bl 0x7103778300
7101e0b408  mov w8,#0x101
7101e0b40c  strh w8,[sp, #0xd8]
7101e0b410  mov w8,#0x1
7101e0b414  str xzr,[sp, #0xd0]
7101e0b418  stur wzr,[x21, #0xa]
7101e0b41c  add x0,sp,#0xd0
7101e0b420  str w8,[sp, #0xe0]
7101e0b424  strh w8,[sp, #0xe4]
7101e0b428  strb w8,[sp, #0xe6]
7101e0b42c  mov x8,#0x41f0000000000000
7101e0b430  strh wzr,[sp, #0xde]
7101e0b434  str x8,[sp, #0xe8]
7101e0b438  str wzr,[sp, #0xf0]
7101e0b43c  str xzr,[sp, #0x120]
7101e0b440  str xzr,[sp, #0x150]
7101e0b444  str xzr,[sp, #0x180]
7101e0b448  str xzr,[sp, #0x1b0]
7101e0b44c  str xzr,[sp, #0x1e0]
7101e0b450  str wzr,[sp, #0x1f0]
7101e0b454  bl 0x710337df20
7101e0b458  ldr x1,[sp, #0x28]
7101e0b45c  add x23,x19,#0x520
7101e0b460  adrp x2,0x7104307000
7101e0b464  add x2,x2,#0x72
7101e0b468  add x3,sp,#0xd0
7101e0b46c  mov x0,x23
7101e0b470  bl 0x7103770b30
7101e0b474  adrp x2,0x71043ae000
7101e0b478  add x2,x2,#0xcc
7101e0b47c  mov w1,#0x1
7101e0b480  mov x0,x23
7101e0b484  bl 0x71037717d0
7101e0b488  adrp x2,0x7104348000
7101e0b48c  add x2,x2,#0xcf6
7101e0b490  mov w1,#0x2
7101e0b494  mov x0,x23
7101e0b498  bl 0x71037717d0
7101e0b49c  ldrb w8,[x19, #0x59e]
7101e0b4a0  cbz w8,0x7101e0b4b8
7101e0b4a4  adrp x2,0x71042a3000
7101e0b4a8  add x2,x2,#0x56b
7101e0b4ac  orr w1,wzr,#0x3
7101e0b4b0  mov x0,x23
7101e0b4b4  bl 0x71037717d0
7101e0b4b8  ldr x0,[x19, #0x520]
7101e0b4bc  mov w1,#0x1
7101e0b4c0  orr w2,wzr,#0x7
7101e0b4c4  mov w3,wzr
7101e0b4c8  str x20,[sp, #0x20]
7101e0b4cc  bl 0x7103771930
7101e0b4d0  mov x8,#0xce8
7101e0b4d4  movk x8,#0xfc42, LSL #16
7101e0b4d8  movk x8,#0x7, LSL #32
7101e0b4dc  str x8,[sp, #0x40]
7101e0b4e0  ldr x0,[x19, #0x520]
7101e0b4e4  mov w1,#0x1
7101e0b4e8  add x2,sp,#0x40
7101e0b4ec  bl 0x7103772070
7101e0b4f0  ldr x9,[x19, #0x570]
7101e0b4f4  ldr x8,[x19, #0x578]
7101e0b4f8  add x23,x19,#0x568
7101e0b4fc  cmp x9,x8
7101e0b500  b.cs 0x7101e0b51c
7101e0b504  mov w8,#0x2
7101e0b508  str w8,[x9]
7101e0b50c  ldr x8,[x19, #0x570]
7101e0b510  add x20,x8,#0x4
7101e0b514  str x20,[x19, #0x570]
7101e0b518  b 0x7101e0b610
7101e0b51c  ldr x24,[x23]
7101e0b520  sub x25,x9,x24
7101e0b524  asr x20,x25,#0x2
7101e0b528  add x9,x20,#0x1
7101e0b52c  lsr x10,x9,#0x3e
7101e0b530  cbnz x10,0x7101e0cfcc
7101e0b534  sub x8,x8,x24
7101e0b538  asr x10,x8,#0x2
7101e0b53c  orr x11,xzr,#0x1ffffffffffffffe
7101e0b540  cmp x10,x11
7101e0b544  b.hi 0x7101e0b564
7101e0b548  asr x8,x8,#0x1
7101e0b54c  cmp x8,x9
7101e0b550  csel x21,x9,x8,cc
7101e0b554  cbz x21,0x7101e0b5c8
7101e0b558  lsr x8,x21,#0x3e
7101e0b55c  cbz x8,0x7101e0b568
7101e0b560  b 0x7101e0cfb8
7101e0b564  orr x21,xzr,#0x3fffffffffffffff
7101e0b568  lsl x8,x21,#0x2
7101e0b56c  cmp x8,#0x0
7101e0b570  csinc x27,x8,xzr,ne
7101e0b574  mov w0,#0x10
7101e0b578  mov x1,x27
7101e0b57c  bl 0x710392e290
7101e0b580  mov x26,x0
7101e0b584  cbnz x0,0x7101e0b5cc
7101e0b588  adrp x8,0x7105332000
7101e0b58c  ldr x0,[x8, #0xf00]
7101e0b590  cbz x0,0x7101e0b5c8
7101e0b594  str wzr,[sp, #0xa0]
7101e0b598  str x27,[sp, #0x40]
7101e0b59c  ldr x8,[x0]
7101e0b5a0  ldr x8,[x8, #0x30]
7101e0b5a4  add x1,sp,#0xa0
7101e0b5a8  add x2,sp,#0x40
7101e0b5ac  blr x8
7101e0b5b0  tbz w0,#0x0,0x7101e0b5c8
7101e0b5b4  mov w0,#0x10
7101e0b5b8  mov x1,x27
7101e0b5bc  bl 0x710392e290
7101e0b5c0  mov x26,x0
7101e0b5c4  cbnz x0,0x7101e0b5cc
7101e0b5c8  mov x26,xzr
7101e0b5cc  add x20,x26,x20, LSL #0x2
7101e0b5d0  mov w8,#0x2
7101e0b5d4  add x21,x26,x21, LSL #0x2
7101e0b5d8  str w8,[x20], #0x4
7101e0b5dc  cmp x25,#0x1
7101e0b5e0  b.lt 0x7101e0b5f4
7101e0b5e4  mov x0,x26
7101e0b5e8  mov x1,x24
7101e0b5ec  mov x2,x25
7101e0b5f0  bl 0x71039c00e0
7101e0b5f4  str x26,[x19, #0x568]
7101e0b5f8  str x20,[x19, #0x570]
7101e0b5fc  str x21,[x19, #0x578]
7101e0b600  cbz x24,0x7101e0b610
7101e0b604  mov x0,x24
7101e0b608  bl 0x710392eb40
7101e0b60c  ldr x20,[x19, #0x570]
7101e0b610  ldr x8,[x19, #0x578]
7101e0b614  cmp x20,x8
7101e0b618  b.cs 0x7101e0b634
7101e0b61c  mov w8,#0x1
7101e0b620  str w8,[x20]
7101e0b624  ldr x8,[x19, #0x570]
7101e0b628  add x8,x8,#0x4
7101e0b62c  str x8,[x19, #0x570]
7101e0b630  b 0x7101e0b724
7101e0b634  ldr x24,[x23]
7101e0b638  sub x25,x20,x24
7101e0b63c  asr x20,x25,#0x2
7101e0b640  add x9,x20,#0x1
7101e0b644  lsr x10,x9,#0x3e
7101e0b648  cbnz x10,0x7101e0cfcc
7101e0b64c  sub x8,x8,x24
7101e0b650  asr x10,x8,#0x2
7101e0b654  orr x11,xzr,#0x1ffffffffffffffe
7101e0b658  cmp x10,x11
7101e0b65c  b.hi 0x7101e0b67c
7101e0b660  asr x8,x8,#0x1
7101e0b664  cmp x8,x9
7101e0b668  csel x21,x9,x8,cc
7101e0b66c  cbz x21,0x7101e0b6e0
7101e0b670  lsr x8,x21,#0x3e
7101e0b674  cbz x8,0x7101e0b680
7101e0b678  b 0x7101e0cfb8
7101e0b67c  orr x21,xzr,#0x3fffffffffffffff
7101e0b680  lsl x8,x21,#0x2
7101e0b684  cmp x8,#0x0
7101e0b688  csinc x27,x8,xzr,ne
7101e0b68c  mov w0,#0x10
7101e0b690  mov x1,x27
7101e0b694  bl 0x710392e290
7101e0b698  mov x26,x0
7101e0b69c  cbnz x0,0x7101e0b6e4
7101e0b6a0  adrp x8,0x7105332000
7101e0b6a4  ldr x0,[x8, #0xf00]
7101e0b6a8  cbz x0,0x7101e0b6e0
7101e0b6ac  str wzr,[sp, #0xa0]
7101e0b6b0  str x27,[sp, #0x40]
7101e0b6b4  ldr x8,[x0]
7101e0b6b8  ldr x8,[x8, #0x30]
7101e0b6bc  add x1,sp,#0xa0
7101e0b6c0  add x2,sp,#0x40
7101e0b6c4  blr x8
7101e0b6c8  tbz w0,#0x0,0x7101e0b6e0
7101e0b6cc  mov w0,#0x10
7101e0b6d0  mov x1,x27
7101e0b6d4  bl 0x710392e290
7101e0b6d8  mov x26,x0
7101e0b6dc  cbnz x0,0x7101e0b6e4
7101e0b6e0  mov x26,xzr
7101e0b6e4  add x20,x26,x20, LSL #0x2
7101e0b6e8  mov w8,#0x1
7101e0b6ec  add x21,x26,x21, LSL #0x2
7101e0b6f0  str w8,[x20], #0x4
7101e0b6f4  cmp x25,#0x1
7101e0b6f8  b.lt 0x7101e0b70c
7101e0b6fc  mov x0,x26
7101e0b700  mov x1,x24
7101e0b704  mov x2,x25
7101e0b708  bl 0x71039c00e0
7101e0b70c  str x26,[x19, #0x568]
7101e0b710  str x20,[x19, #0x570]
7101e0b714  str x21,[x19, #0x578]
7101e0b718  cbz x24,0x7101e0b724
7101e0b71c  mov x0,x24
7101e0b720  bl 0x710392eb40
7101e0b724  adrp x8,0x710523d000
7101e0b728  ldr w8,[x8, #0xc]
7101e0b72c  cmp w8,#0xd
7101e0b730  b.hi 0x7101e0b858
7101e0b734  mov w9,#0x3801
7101e0b738  lsr w8,w9,w8
7101e0b73c  tbz w8,#0x0,0x7101e0b858
7101e0b740  ldr x9,[x19, #0x570]
7101e0b744  ldr x8,[x19, #0x578]
7101e0b748  cmp x9,x8
7101e0b74c  b.cs 0x7101e0b768
7101e0b750  orr w8,wzr,#0xc
7101e0b754  str w8,[x9]
7101e0b758  ldr x8,[x19, #0x570]
7101e0b75c  add x8,x8,#0x4
7101e0b760  str x8,[x19, #0x570]
7101e0b764  b 0x7101e0b858
7101e0b768  ldr x24,[x23]
7101e0b76c  sub x25,x9,x24
7101e0b770  asr x20,x25,#0x2
7101e0b774  add x9,x20,#0x1
7101e0b778  lsr x10,x9,#0x3e
7101e0b77c  cbnz x10,0x7101e0cfcc
7101e0b780  sub x8,x8,x24
7101e0b784  asr x10,x8,#0x2
7101e0b788  orr x11,xzr,#0x1ffffffffffffffe
7101e0b78c  cmp x10,x11
7101e0b790  b.hi 0x7101e0b7b0
7101e0b794  asr x8,x8,#0x1
7101e0b798  cmp x8,x9
7101e0b79c  csel x21,x9,x8,cc
7101e0b7a0  cbz x21,0x7101e0b814
7101e0b7a4  lsr x8,x21,#0x3e
7101e0b7a8  cbz x8,0x7101e0b7b4
7101e0b7ac  b 0x7101e0cfb8
7101e0b7b0  orr x21,xzr,#0x3fffffffffffffff
7101e0b7b4  lsl x8,x21,#0x2
7101e0b7b8  cmp x8,#0x0
7101e0b7bc  csinc x27,x8,xzr,ne
7101e0b7c0  mov w0,#0x10
7101e0b7c4  mov x1,x27
7101e0b7c8  bl 0x710392e290
7101e0b7cc  mov x26,x0
7101e0b7d0  cbnz x0,0x7101e0b818
7101e0b7d4  adrp x8,0x7105332000
7101e0b7d8  ldr x0,[x8, #0xf00]
7101e0b7dc  cbz x0,0x7101e0b814
7101e0b7e0  str wzr,[sp, #0xa0]
7101e0b7e4  str x27,[sp, #0x40]
7101e0b7e8  ldr x8,[x0]
7101e0b7ec  ldr x8,[x8, #0x30]
7101e0b7f0  add x1,sp,#0xa0
7101e0b7f4  add x2,sp,#0x40
7101e0b7f8  blr x8
7101e0b7fc  tbz w0,#0x0,0x7101e0b814
7101e0b800  mov w0,#0x10
7101e0b804  mov x1,x27
7101e0b808  bl 0x710392e290
7101e0b80c  mov x26,x0
7101e0b810  cbnz x0,0x7101e0b818
7101e0b814  mov x26,xzr
7101e0b818  add x20,x26,x20, LSL #0x2
7101e0b81c  orr w8,wzr,#0xc
7101e0b820  add x21,x26,x21, LSL #0x2
7101e0b824  str w8,[x20], #0x4
7101e0b828  cmp x25,#0x1
7101e0b82c  b.lt 0x7101e0b840
7101e0b830  mov x0,x26
7101e0b834  mov x1,x24
7101e0b838  mov x2,x25
7101e0b83c  bl 0x71039c00e0
7101e0b840  str x26,[x19, #0x568]
7101e0b844  str x20,[x19, #0x570]
7101e0b848  str x21,[x19, #0x578]
7101e0b84c  cbz x24,0x7101e0b858
7101e0b850  mov x0,x24
7101e0b854  bl 0x710392eb40
7101e0b858  ldr x9,[x19, #0x570]
7101e0b85c  ldr x8,[x19, #0x578]
7101e0b860  cmp x9,x8
7101e0b864  b.cs 0x7101e0b880
7101e0b868  mov w8,#0xd
7101e0b86c  str w8,[x9]
7101e0b870  ldr x8,[x19, #0x570]
7101e0b874  add x20,x8,#0x4
7101e0b878  str x20,[x19, #0x570]
7101e0b87c  b 0x7101e0b974
7101e0b880  ldr x24,[x23]
7101e0b884  sub x25,x9,x24
7101e0b888  asr x20,x25,#0x2
7101e0b88c  add x9,x20,#0x1
7101e0b890  lsr x10,x9,#0x3e
7101e0b894  cbnz x10,0x7101e0cfcc
7101e0b898  sub x8,x8,x24
7101e0b89c  asr x10,x8,#0x2
7101e0b8a0  orr x11,xzr,#0x1ffffffffffffffe
7101e0b8a4  cmp x10,x11
7101e0b8a8  b.hi 0x7101e0b8c8
7101e0b8ac  asr x8,x8,#0x1
7101e0b8b0  cmp x8,x9
7101e0b8b4  csel x21,x9,x8,cc
7101e0b8b8  cbz x21,0x7101e0b92c
7101e0b8bc  lsr x8,x21,#0x3e
7101e0b8c0  cbz x8,0x7101e0b8cc
7101e0b8c4  b 0x7101e0cfb8
7101e0b8c8  orr x21,xzr,#0x3fffffffffffffff
7101e0b8cc  lsl x8,x21,#0x2
7101e0b8d0  cmp x8,#0x0
7101e0b8d4  csinc x27,x8,xzr,ne
7101e0b8d8  mov w0,#0x10
7101e0b8dc  mov x1,x27
7101e0b8e0  bl 0x710392e290
7101e0b8e4  mov x26,x0
7101e0b8e8  cbnz x0,0x7101e0b930
7101e0b8ec  adrp x8,0x7105332000
7101e0b8f0  ldr x0,[x8, #0xf00]
7101e0b8f4  cbz x0,0x7101e0b92c
7101e0b8f8  str wzr,[sp, #0xa0]
7101e0b8fc  str x27,[sp, #0x40]
7101e0b900  ldr x8,[x0]
7101e0b904  ldr x8,[x8, #0x30]
7101e0b908  add x1,sp,#0xa0
7101e0b90c  add x2,sp,#0x40
7101e0b910  blr x8
7101e0b914  tbz w0,#0x0,0x7101e0b92c
7101e0b918  mov w0,#0x10
7101e0b91c  mov x1,x27
7101e0b920  bl 0x710392e290
7101e0b924  mov x26,x0
7101e0b928  cbnz x0,0x7101e0b930
7101e0b92c  mov x26,xzr
7101e0b930  add x20,x26,x20, LSL #0x2
7101e0b934  mov w8,#0xd
7101e0b938  add x21,x26,x21, LSL #0x2
7101e0b93c  str w8,[x20], #0x4
7101e0b940  cmp x25,#0x1
7101e0b944  b.lt 0x7101e0b958
7101e0b948  mov x0,x26
7101e0b94c  mov x1,x24
7101e0b950  mov x2,x25
7101e0b954  bl 0x71039c00e0
7101e0b958  str x26,[x19, #0x568]
7101e0b95c  str x20,[x19, #0x570]
7101e0b960  str x21,[x19, #0x578]
7101e0b964  cbz x24,0x7101e0b974
7101e0b968  mov x0,x24
7101e0b96c  bl 0x710392eb40
7101e0b970  ldr x20,[x19, #0x570]
7101e0b974  ldr x8,[x19, #0x578]
7101e0b978  cmp x20,x8
7101e0b97c  b.cs 0x7101e0b998
7101e0b980  orr w8,wzr,#0x3
7101e0b984  str w8,[x20]
7101e0b988  ldr x8,[x19, #0x570]
7101e0b98c  add x20,x8,#0x4
7101e0b990  str x20,[x19, #0x570]
7101e0b994  b 0x7101e0ba8c
7101e0b998  ldr x24,[x23]
7101e0b99c  sub x25,x20,x24
7101e0b9a0  asr x20,x25,#0x2
7101e0b9a4  add x9,x20,#0x1
7101e0b9a8  lsr x10,x9,#0x3e
7101e0b9ac  cbnz x10,0x7101e0cfcc
7101e0b9b0  sub x8,x8,x24
7101e0b9b4  asr x10,x8,#0x2
7101e0b9b8  orr x11,xzr,#0x1ffffffffffffffe
7101e0b9bc  cmp x10,x11
7101e0b9c0  b.hi 0x7101e0b9e0
7101e0b9c4  asr x8,x8,#0x1
7101e0b9c8  cmp x8,x9
7101e0b9cc  csel x21,x9,x8,cc
7101e0b9d0  cbz x21,0x7101e0ba44
7101e0b9d4  lsr x8,x21,#0x3e
7101e0b9d8  cbz x8,0x7101e0b9e4
7101e0b9dc  b 0x7101e0cfb8
7101e0b9e0  orr x21,xzr,#0x3fffffffffffffff
7101e0b9e4  lsl x8,x21,#0x2
7101e0b9e8  cmp x8,#0x0
7101e0b9ec  csinc x27,x8,xzr,ne
7101e0b9f0  mov w0,#0x10
7101e0b9f4  mov x1,x27
7101e0b9f8  bl 0x710392e290
7101e0b9fc  mov x26,x0
7101e0ba00  cbnz x0,0x7101e0ba48
7101e0ba04  adrp x8,0x7105332000
7101e0ba08  ldr x0,[x8, #0xf00]
7101e0ba0c  cbz x0,0x7101e0ba44
7101e0ba10  str wzr,[sp, #0xa0]
7101e0ba14  str x27,[sp, #0x40]
7101e0ba18  ldr x8,[x0]
7101e0ba1c  ldr x8,[x8, #0x30]
7101e0ba20  add x1,sp,#0xa0
7101e0ba24  add x2,sp,#0x40
7101e0ba28  blr x8
7101e0ba2c  tbz w0,#0x0,0x7101e0ba44
7101e0ba30  mov w0,#0x10
7101e0ba34  mov x1,x27
7101e0ba38  bl 0x710392e290
7101e0ba3c  mov x26,x0
7101e0ba40  cbnz x0,0x7101e0ba48
7101e0ba44  mov x26,xzr
7101e0ba48  add x20,x26,x20, LSL #0x2
7101e0ba4c  orr w8,wzr,#0x3
7101e0ba50  add x21,x26,x21, LSL #0x2
7101e0ba54  str w8,[x20], #0x4
7101e0ba58  cmp x25,#0x1
7101e0ba5c  b.lt 0x7101e0ba70
7101e0ba60  mov x0,x26
7101e0ba64  mov x1,x24
7101e0ba68  mov x2,x25
7101e0ba6c  bl 0x71039c00e0
7101e0ba70  str x26,[x19, #0x568]
7101e0ba74  str x20,[x19, #0x570]
7101e0ba78  str x21,[x19, #0x578]
7101e0ba7c  cbz x24,0x7101e0ba8c
7101e0ba80  mov x0,x24
7101e0ba84  bl 0x710392eb40
7101e0ba88  ldr x20,[x19, #0x570]
7101e0ba8c  ldr x8,[x19, #0x578]
7101e0ba90  cmp x20,x8
7101e0ba94  b.cs 0x7101e0bab0
7101e0ba98  mov w8,#0x14
7101e0ba9c  str w8,[x20]
7101e0baa0  ldr x8,[x19, #0x570]
7101e0baa4  add x8,x8,#0x4
7101e0baa8  str x8,[x19, #0x570]
7101e0baac  b 0x7101e0bba0
7101e0bab0  ldr x24,[x23]
7101e0bab4  sub x25,x20,x24
7101e0bab8  asr x20,x25,#0x2
7101e0babc  add x9,x20,#0x1
7101e0bac0  lsr x10,x9,#0x3e
7101e0bac4  cbnz x10,0x7101e0cfcc
7101e0bac8  sub x8,x8,x24
7101e0bacc  asr x10,x8,#0x2
7101e0bad0  orr x11,xzr,#0x1ffffffffffffffe
7101e0bad4  cmp x10,x11
7101e0bad8  b.hi 0x7101e0baf8
7101e0badc  asr x8,x8,#0x1
7101e0bae0  cmp x8,x9
7101e0bae4  csel x21,x9,x8,cc
7101e0bae8  cbz x21,0x7101e0bb5c
7101e0baec  lsr x8,x21,#0x3e
7101e0baf0  cbz x8,0x7101e0bafc
7101e0baf4  b 0x7101e0cfb8
7101e0baf8  orr x21,xzr,#0x3fffffffffffffff
7101e0bafc  lsl x8,x21,#0x2
7101e0bb00  cmp x8,#0x0
7101e0bb04  csinc x26,x8,xzr,ne
7101e0bb08  mov w0,#0x10
7101e0bb0c  mov x1,x26
7101e0bb10  bl 0x710392e290
7101e0bb14  mov x23,x0
7101e0bb18  cbnz x0,0x7101e0bb60
7101e0bb1c  adrp x8,0x7105332000
7101e0bb20  ldr x0,[x8, #0xf00]
7101e0bb24  cbz x0,0x7101e0bb5c
7101e0bb28  str wzr,[sp, #0xa0]
7101e0bb2c  str x26,[sp, #0x40]
7101e0bb30  ldr x8,[x0]
7101e0bb34  ldr x8,[x8, #0x30]
7101e0bb38  add x1,sp,#0xa0
7101e0bb3c  add x2,sp,#0x40
7101e0bb40  blr x8
7101e0bb44  tbz w0,#0x0,0x7101e0bb5c
7101e0bb48  mov w0,#0x10
7101e0bb4c  mov x1,x26
7101e0bb50  bl 0x710392e290
7101e0bb54  mov x23,x0
7101e0bb58  cbnz x0,0x7101e0bb60
7101e0bb5c  mov x23,xzr
7101e0bb60  add x20,x23,x20, LSL #0x2
7101e0bb64  mov w8,#0x14
7101e0bb68  add x21,x23,x21, LSL #0x2
7101e0bb6c  str w8,[x20], #0x4
7101e0bb70  cmp x25,#0x1
7101e0bb74  b.lt 0x7101e0bb88
7101e0bb78  mov x0,x23
7101e0bb7c  mov x1,x24
7101e0bb80  mov x2,x25
7101e0bb84  bl 0x71039c00e0
7101e0bb88  str x23,[x19, #0x568]
7101e0bb8c  str x20,[x19, #0x570]
7101e0bb90  str x21,[x19, #0x578]
7101e0bb94  cbz x24,0x7101e0bba0
7101e0bb98  mov x0,x24
7101e0bb9c  bl 0x710392eb40
7101e0bba0  add x8,sp,#0xa0
7101e0bba4  add x0,x8,#0x20
7101e0bba8  stp xzr,xzr,[sp, #0xb0]
7101e0bbac  bl 0x7103776290
7101e0bbb0  str wzr,[sp, #0xa8]
7101e0bbb4  adrp x20,0x71052a8000
7101e0bbb8  ldr x20,[x20, #0xa80]
7101e0bbbc  ldr x0,[sp, #0x28]
7101e0bbc0  ldr q0,[x20]
7101e0bbc4  ldr x8,[sp, #0xc8]
7101e0bbc8  str q0,[sp, #0xb0]
7101e0bbcc  str xzr,[x8, #0x8]
7101e0bbd0  ldrb w8,[x19, #0x59e]
7101e0bbd4  cmp w8,#0x0
7101e0bbd8  orr w8,wzr,#0xc
7101e0bbdc  csel w8,wzr,w8,eq
7101e0bbe0  stp w8,wzr,[sp, #0xa0]
7101e0bbe4  adrp x1,0x71043ae000
7101e0bbe8  add x1,x1,#0xcc
7101e0bbec  add x8,sp,#0x40
7101e0bbf0  bl 0x7103776640
7101e0bbf4  ldr x8,[sp, #0x48]
7101e0bbf8  ldr x23,[sp, #0xc8]
7101e0bbfc  str xzr,[sp, #0x48]
7101e0bc00  str x8,[sp, #0xc8]
7101e0bc04  cbz x23,0x7101e0bc28
7101e0bc08  ldr x0,[x23, #0x18]
7101e0bc0c  adrp x8,0x710523d000
7101e0bc10  add x8,x8,#0x9a8
7101e0bc14  stp x8,xzr,[x23, #0x10]
7101e0bc18  cbz x0,0x7101e0bc20
7101e0bc1c  bl 0x710392eb40
7101e0bc20  mov x0,x23
7101e0bc24  bl 0x710392eb40
7101e0bc28  adrp x8,0x710523d000
7101e0bc2c  add x8,x8,#0x988
7101e0bc30  stp x8,xzr,[sp, #0x40]
7101e0bc34  ldr x8,[sp, #0xc8]
7101e0bc38  ldr x8,[x8, #0x18]
7101e0bc3c  ldr x8,[x8]
7101e0bc40  cbz x8,0x7101e0bc5c
7101e0bc44  movi v0.2D,#0x0
7101e0bc48  add x9,x8,#0x30
7101e0bc4c  add x8,x8,#0x34
7101e0bc50  ld1 {v0.S}[0],[x9]
7101e0bc54  ld1 {v0.S}[1],[x8]
7101e0bc58  b 0x7101e0bc60
7101e0bc5c  ldr q0,[x20]
7101e0bc60  str q0,[sp, #0xb0]
7101e0bc64  stp xzr,xzr,[sp, #0x90]
7101e0bc68  mov x24,#0xe38e
7101e0bc6c  movk x24,#0x8e38, LSL #16
7101e0bc70  movk x24,#0x38e3, LSL #32
7101e0bc74  movk x24,#0x38e, LSL #48
7101e0bc78  str xzr,[sp, #0x88]
7101e0bc7c  ldr x9,[x19, #0x570]
7101e0bc80  ldr x8,[x19, #0x568]
7101e0bc84  mov w25,#0x9dc5
7101e0bc88  movk w25,#0x811c, LSL #16
7101e0bc8c  cmp x9,x8
7101e0bc90  b.eq 0x7101e0bfc0
7101e0bc94  add x9,sp,#0x40
7101e0bc98  mov x21,xzr
7101e0bc9c  mov x22,xzr
7101e0bca0  mov x20,xzr
7101e0bca4  add x27,x9,#0x8
7101e0bca8  mov w26,#0x89
7101e0bcac  b 0x7101e0bcb4
7101e0bcb0  ldp x22,x21,[sp, #0x90]
7101e0bcb4  ldr w1,[x8, x20, LSL #0x2]
7101e0bcb8  add x0,sp,#0x40
7101e0bcbc  bl 0x71025c6970
7101e0bcc0  cmp x22,x21
7101e0bcc4  b.eq 0x7101e0bd0c
7101e0bcc8  mov x8,xzr
7101e0bccc  str wzr,[x22]
7101e0bcd0  add x9,x27,x8
7101e0bcd4  ldrb w11,[x9]
7101e0bcd8  cbz w11,0x7101e0be3c
7101e0bcdc  add x10,x22,x8
7101e0bce0  strb w11,[x10, #0x8]
7101e0bce4  ldrb w11,[x9, #0x1]
7101e0bce8  cbz w11,0x7101e0be30
7101e0bcec  strb w11,[x10, #0x9]
7101e0bcf0  ldrb w9,[x9, #0x2]
7101e0bcf4  cbz w9,0x7101e0be38
7101e0bcf8  add x8,x8,#0x3
7101e0bcfc  cmp w8,#0x3f
7101e0bd00  strb w9,[x10, #0xa]
7101e0bd04  b.cc 0x7101e0bcd0
7101e0bd08  b 0x7101e0be3c
7101e0bd0c  ldr x23,[sp, #0x88]
7101e0bd10  sub x8,x22,x23
7101e0bd14  mov x10,#0x8e39
7101e0bd18  movk x10,#0x38e3, LSL #16
7101e0bd1c  movk x10,#0xe38e, LSL #32
7101e0bd20  movk x10,#0x8e38, LSL #48
7101e0bd24  asr x8,x8,#0x3
7101e0bd28  mul x28,x8,x10
7101e0bd2c  add x8,x28,#0x1
7101e0bd30  cmp x8,x24
7101e0bd34  b.hi 0x7101e0cfc4
7101e0bd38  sub x9,x21,x23
7101e0bd3c  mov x21,x24
7101e0bd40  asr x9,x9,#0x3
7101e0bd44  mul x9,x9,x10
7101e0bd48  mov x10,#0x71c6
7101e0bd4c  movk x10,#0xc71c, LSL #16
7101e0bd50  movk x10,#0x1c71, LSL #32
7101e0bd54  movk x10,#0x1c7, LSL #48
7101e0bd58  cmp x9,x10
7101e0bd5c  b.hi 0x7101e0bd70
7101e0bd60  lsl x9,x9,#0x1
7101e0bd64  cmp x9,x8
7101e0bd68  csel x21,x8,x9,cc
7101e0bd6c  cbz x21,0x7101e0bfb8
7101e0bd70  add x8,x21,x21, LSL #0x3
7101e0bd74  lsl x8,x8,#0x3
7101e0bd78  cmp x8,#0x0
7101e0bd7c  csinc x24,x8,xzr,ne
7101e0bd80  mov w0,#0x10
7101e0bd84  mov x1,x24
7101e0bd88  bl 0x710392e290
7101e0bd8c  cbnz x0,0x7101e0bdd0
7101e0bd90  adrp x8,0x7105332000
7101e0bd94  ldr x0,[x8, #0xf00]
7101e0bd98  cbz x0,0x7101e0bdcc
7101e0bd9c  str wzr,[sp, #0x30]
7101e0bda0  stur x24,[x29, #-0x78]
7101e0bda4  ldr x8,[x0]
7101e0bda8  ldr x8,[x8, #0x30]
7101e0bdac  add x1,sp,#0x30
7101e0bdb0  sub x2,x29,#0x78
7101e0bdb4  blr x8
7101e0bdb8  tbz w0,#0x0,0x7101e0bdcc
7101e0bdbc  mov w0,#0x10
7101e0bdc0  mov x1,x24
7101e0bdc4  bl 0x710392e290
7101e0bdc8  cbnz x0,0x7101e0bdd0
7101e0bdcc  mov x0,xzr
7101e0bdd0  mov x24,#0xe38e
7101e0bdd4  movk x24,#0x8e38, LSL #16
7101e0bdd8  movk x24,#0x38e3, LSL #32
7101e0bddc  movk x24,#0x38e, LSL #48
7101e0bde0  mov w8,#0x48
7101e0bde4  madd x9,x28,x8,x0
7101e0bde8  madd x8,x21,x8,x0
7101e0bdec  mov x10,xzr
7101e0bdf0  str wzr,[x9]
7101e0bdf4  b 0x7101e0be00
7101e0bdf8  add x10,x10,#0x2
7101e0bdfc  strb w11,[x12, #0x9]
7101e0be00  add x11,x27,x10
7101e0be04  ldrb w13,[x11]
7101e0be08  cbz w13,0x7101e0be88
7101e0be0c  add w14,w10,#0x1
7101e0be10  add x12,x9,x10
7101e0be14  cmp w14,#0x3f
7101e0be18  strb w13,[x12, #0x8]
7101e0be1c  b.cs 0x7101e0be84
7101e0be20  ldrb w11,[x11, #0x1]
7101e0be24  cbnz w11,0x7101e0bdf8
7101e0be28  add x10,x10,#0x1
7101e0be2c  b 0x7101e0be88
7101e0be30  add x8,x8,#0x1
7101e0be34  b 0x7101e0be3c
7101e0be38  add x8,x8,#0x2
7101e0be3c  add x9,x22,#0x8
7101e0be40  strb wzr,[x9, w8, UXTW ]
7101e0be44  str w8,[x22, #0x4]
7101e0be48  ldrb w8,[x22, #0x8]
7101e0be4c  mov w10,w25
7101e0be50  cbz w8,0x7101e0be70
7101e0be54  add x9,x22,#0x9
7101e0be58  mov w10,w25
7101e0be5c  mul w10,w10,w26
7101e0be60  and w8,w8,#0xff
7101e0be64  eor w10,w10,w8
7101e0be68  ldrb w8,[x9], #0x1
7101e0be6c  cbnz w8,0x7101e0be5c
7101e0be70  str w10,[x22]
7101e0be74  ldr x8,[sp, #0x90]
7101e0be78  add x8,x8,#0x48
7101e0be7c  str x8,[sp, #0x90]
7101e0be80  b 0x7101e0bf98
7101e0be84  add w10,w10,#0x1
7101e0be88  mov w11,#0x48
7101e0be8c  mul x11,x28,x11
7101e0be90  add x11,x0,x11
7101e0be94  add x12,x11,#0x8
7101e0be98  strb wzr,[x12, w10, UXTW ]
7101e0be9c  str w10,[x11, #0x4]
7101e0bea0  ldrb w10,[x11, #0x8]
7101e0bea4  mov w11,w25
7101e0bea8  cbz w10,0x7101e0bed4
7101e0beac  mov w11,#0x48
7101e0beb0  mul x11,x28,x11
7101e0beb4  add x11,x0,x11
7101e0beb8  add x12,x11,#0x9
7101e0bebc  mov w11,w25
7101e0bec0  mul w11,w11,w26
7101e0bec4  and w10,w10,#0xff
7101e0bec8  eor w11,w11,w10
7101e0becc  ldrb w10,[x12], #0x1
7101e0bed0  cbnz w10,0x7101e0bec0
7101e0bed4  mov x10,x9
7101e0bed8  cmp x22,x23
7101e0bedc  str w11,[x10], #0x48
7101e0bee0  b.eq 0x7101e0bf84
7101e0bee4  mov x11,xzr
7101e0bee8  mov x12,x22
7101e0beec  sub x22,x22,#0x48
7101e0bef0  stur wzr,[x9, #-0x48]
7101e0bef4  add x13,x12,x11
7101e0bef8  ldurb w15,[x13, #-0x40]
7101e0befc  cbz w15,0x7101e0bf3c
7101e0bf00  add x14,x9,x11
7101e0bf04  sturb w15,[x14, #-0x40]
7101e0bf08  ldurb w15,[x13, #-0x3f]
7101e0bf0c  cbz w15,0x7101e0bf30
7101e0bf10  sturb w15,[x14, #-0x3f]
7101e0bf14  ldurb w13,[x13, #-0x3e]
7101e0bf18  cbz w13,0x7101e0bf38
7101e0bf1c  add x11,x11,#0x3
7101e0bf20  cmp w11,#0x3f
7101e0bf24  sturb w13,[x14, #-0x3e]
7101e0bf28  b.cc 0x7101e0bef4
7101e0bf2c  b 0x7101e0bf3c
7101e0bf30  add x11,x11,#0x1
7101e0bf34  b 0x7101e0bf3c
7101e0bf38  add x11,x11,#0x2
7101e0bf3c  sub x12,x9,#0x40
7101e0bf40  strb wzr,[x12, w11, UXTW ]
7101e0bf44  ldurb w12,[x9, #-0x40]
7101e0bf48  stur w11,[x9, #-0x44]
7101e0bf4c  mov w11,w25
7101e0bf50  cbz w12,0x7101e0bf74
7101e0bf54  orr x13,xzr,#-0x3f
7101e0bf58  mov w11,w25
7101e0bf5c  mul w11,w11,w26
7101e0bf60  and w12,w12,#0xff
7101e0bf64  eor w11,w11,w12
7101e0bf68  ldrb w12,[x9, x13, LSL ]
7101e0bf6c  add x13,x13,#0x1
7101e0bf70  cbnz w12,0x7101e0bf5c
7101e0bf74  cmp x22,x23
7101e0bf78  str w11,[x9, #-0x48]!
7101e0bf7c  b.ne 0x7101e0bee4
7101e0bf80  ldr x23,[sp, #0x88]
7101e0bf84  stp x9,x10,[sp, #0x88]
7101e0bf88  str x8,[sp, #0x98]
7101e0bf8c  cbz x23,0x7101e0bf98
7101e0bf90  mov x0,x23
7101e0bf94  bl 0x710392eb40
7101e0bf98  ldr x9,[x19, #0x570]
7101e0bf9c  ldr x8,[x19, #0x568]
7101e0bfa0  sub x9,x9,x8
7101e0bfa4  add w20,w20,#0x1
7101e0bfa8  asr x9,x9,#0x2
7101e0bfac  cmp x9,x20
7101e0bfb0  b.hi 0x7101e0bcb0
7101e0bfb4  b 0x7101e0bfc0
7101e0bfb8  mov x0,xzr
7101e0bfbc  b 0x7101e0bde0
7101e0bfc0  ldr x0,[sp, #0x28]
7101e0bfc4  adrp x1,0x710436c000
7101e0bfc8  add x1,x1,#0xc09
7101e0bfcc  sub x8,x29,#0x78
7101e0bfd0  bl 0x7103776640
7101e0bfd4  ldp x21,x20,[sp, #0x88]
7101e0bfd8  mov x24,#0x8e39
7101e0bfdc  movk x24,#0x38e3, LSL #16
7101e0bfe0  movk x24,#0xe38e, LSL #32
7101e0bfe4  movk x24,#0x8e38, LSL #48
7101e0bfe8  stp xzr,xzr,[sp, #0x48]
7101e0bfec  str xzr,[sp, #0x40]
7101e0bff0  subs x23,x20,x21
7101e0bff4  b.eq 0x7101e0c124
7101e0bff8  asr x8,x23,#0x3
7101e0bffc  mul x22,x8,x24
7101e0c000  mov x8,#0xe38e
7101e0c004  movk x8,#0x8e38, LSL #16
7101e0c008  movk x8,#0x38e3, LSL #32
7101e0c00c  movk x8,#0x38e, LSL #48
7101e0c010  cmp x22,x8
7101e0c014  b.hi 0x7101e0cfdc
7101e0c018  mov w0,#0x10
7101e0c01c  mov x1,x23
7101e0c020  bl 0x710392e290
7101e0c024  cbnz x0,0x7101e0c068
7101e0c028  adrp x8,0x7105332000
7101e0c02c  ldr x0,[x8, #0xf00]
7101e0c030  cbz x0,0x7101e0c064
7101e0c034  stur wzr,[x29, #-0x64]
7101e0c038  str x23,[sp, #0x30]
7101e0c03c  ldr x8,[x0]
7101e0c040  ldr x8,[x8, #0x30]
7101e0c044  sub x1,x29,#0x64
7101e0c048  add x2,sp,#0x30
7101e0c04c  blr x8
7101e0c050  tbz w0,#0x0,0x7101e0c064
7101e0c054  mov w0,#0x10
7101e0c058  mov x1,x23
7101e0c05c  bl 0x710392e290
7101e0c060  cbnz x0,0x7101e0c068
7101e0c064  mov x0,xzr
7101e0c068  mov w8,#0x48
7101e0c06c  madd x8,x22,x8,x0
7101e0c070  cmp x21,x20
7101e0c074  stp x0,x0,[sp, #0x40]
7101e0c078  str x8,[sp, #0x50]
7101e0c07c  b.eq 0x7101e0c124
7101e0c080  mov w8,#0x89
7101e0c084  mov x9,xzr
7101e0c088  str wzr,[x0]
7101e0c08c  add x10,x21,x9
7101e0c090  ldrb w12,[x10, #0x8]
7101e0c094  cbz w12,0x7101e0c0d4
7101e0c098  add x11,x0,x9
7101e0c09c  strb w12,[x11, #0x8]
7101e0c0a0  ldrb w12,[x10, #0x9]
7101e0c0a4  cbz w12,0x7101e0c0c8
7101e0c0a8  strb w12,[x11, #0x9]
7101e0c0ac  ldrb w10,[x10, #0xa]
7101e0c0b0  cbz w10,0x7101e0c0d0
7101e0c0b4  add x9,x9,#0x3
7101e0c0b8  cmp w9,#0x3f
7101e0c0bc  strb w10,[x11, #0xa]
7101e0c0c0  b.cc 0x7101e0c08c
7101e0c0c4  b 0x7101e0c0d4
7101e0c0c8  add x9,x9,#0x1
7101e0c0cc  b 0x7101e0c0d4
7101e0c0d0  add x9,x9,#0x2
7101e0c0d4  add x10,x0,#0x8
7101e0c0d8  strb wzr,[x10, w9, UXTW ]
7101e0c0dc  str w9,[x0, #0x4]
7101e0c0e0  ldrb w9,[x0, #0x8]
7101e0c0e4  mov w11,w25
7101e0c0e8  cbz w9,0x7101e0c108
7101e0c0ec  add x10,x0,#0x9
7101e0c0f0  mov w11,w25
7101e0c0f4  mul w11,w11,w8
7101e0c0f8  and w9,w9,#0xff
7101e0c0fc  eor w11,w11,w9
7101e0c100  ldrb w9,[x10], #0x1
7101e0c104  cbnz w9,0x7101e0c0f4
7101e0c108  str w11,[x0]
7101e0c10c  ldr x9,[sp, #0x48]
7101e0c110  add x21,x21,#0x48
7101e0c114  cmp x21,x20
7101e0c118  add x0,x9,#0x48
7101e0c11c  str x0,[sp, #0x48]
7101e0c120  b.ne 0x7101e0c084
7101e0c124  ldr x1,[sp, #0x18]
7101e0c128  add x0,x19,#0x530
7101e0c12c  add x2,sp,#0x40
7101e0c130  add x3,sp,#0xa0
7101e0c134  sub x4,x29,#0x78
7101e0c138  bl 0x71032ccb70
7101e0c13c  ldr x0,[sp, #0x40]
7101e0c140  adrp x21,0x710523d000
7101e0c144  add x21,x21,#0x988
7101e0c148  cbz x0,0x7101e0c154
7101e0c14c  str x0,[sp, #0x48]
7101e0c150  bl 0x710392eb40
7101e0c154  ldr x0,[sp, #0x28]
7101e0c158  adrp x1,0x7104401000
7101e0c15c  add x1,x1,#0xa64
7101e0c160  add x8,sp,#0x30
7101e0c164  bl 0x7103776910
7101e0c168  ldr x0,[sp, #0x38]
7101e0c16c  ldr x8,[x0]
7101e0c170  add x20,sp,#0xd0
7101e0c174  cbz x8,0x7101e0c184
7101e0c178  ldrb w9,[x8, #0x58]
7101e0c17c  and w9,w9,#0xfe
7101e0c180  strb w9,[x8, #0x58]
7101e0c184  adrp x27,0x710523d000
7101e0c188  add x27,x27,#0x9a8
7101e0c18c  stp x27,xzr,[sp, #0x30]
7101e0c190  cbz x0,0x7101e0c198
7101e0c194  bl 0x710392eb40
7101e0c198  ldur x22,[x29, #-0x70]
7101e0c19c  stp x21,xzr,[x29, #-0x78]
7101e0c1a0  cbz x22,0x7101e0c1bc
7101e0c1a4  ldr x0,[x22, #0x18]
7101e0c1a8  stp x27,xzr,[x22, #0x10]
7101e0c1ac  cbz x0,0x7101e0c1b4
7101e0c1b0  bl 0x710392eb40
7101e0c1b4  mov x0,x22
7101e0c1b8  bl 0x710392eb40
7101e0c1bc  ldr x0,[sp, #0x88]
7101e0c1c0  cbz x0,0x7101e0c1cc
7101e0c1c4  str x0,[sp, #0x90]
7101e0c1c8  bl 0x710392eb40
7101e0c1cc  ldr x22,[sp, #0xc8]
7101e0c1d0  stp x21,xzr,[sp, #0xc0]
7101e0c1d4  cbz x22,0x7101e0c1f0
7101e0c1d8  ldr x0,[x22, #0x18]
7101e0c1dc  stp x27,xzr,[x22, #0x10]
7101e0c1e0  cbz x0,0x7101e0c1e8
7101e0c1e4  bl 0x710392eb40
7101e0c1e8  mov x0,x22
7101e0c1ec  bl 0x710392eb40
7101e0c1f0  ldr x0,[sp, #0x1e0]
7101e0c1f4  add x8,sp,#0xd0
7101e0c1f8  add x8,x8,#0xf0
7101e0c1fc  cmp x8,x0
7101e0c200  b.eq 0x7101e0c214
7101e0c204  cbz x0,0x7101e0c220
7101e0c208  ldr x8,[x0]
7101e0c20c  ldr x8,[x8, #0x28]
7101e0c210  b 0x7101e0c21c
7101e0c214  ldr x8,[x0]
7101e0c218  ldr x8,[x8, #0x20]
7101e0c21c  blr x8
7101e0c220  ldr x0,[sp, #0x1b0]
7101e0c224  add x8,sp,#0xd0
7101e0c228  add x8,x8,#0xc0
7101e0c22c  cmp x8,x0
7101e0c230  b.eq 0x7101e0c244
7101e0c234  cbz x0,0x7101e0c250
7101e0c238  ldr x8,[x0]
7101e0c23c  ldr x8,[x8, #0x28]
7101e0c240  b 0x7101e0c24c
7101e0c244  ldr x8,[x0]
7101e0c248  ldr x8,[x8, #0x20]
7101e0c24c  blr x8
7101e0c250  ldr x0,[sp, #0x180]
7101e0c254  add x8,sp,#0xd0
7101e0c258  add x8,x8,#0x90
7101e0c25c  cmp x8,x0
7101e0c260  b.eq 0x7101e0c274
7101e0c264  cbz x0,0x7101e0c280
7101e0c268  ldr x8,[x0]
7101e0c26c  ldr x8,[x8, #0x28]
7101e0c270  b 0x7101e0c27c
7101e0c274  ldr x8,[x0]
7101e0c278  ldr x8,[x8, #0x20]
7101e0c27c  blr x8
7101e0c280  ldr x0,[sp, #0x150]
7101e0c284  add x8,sp,#0xd0
7101e0c288  add x8,x8,#0x60
7101e0c28c  cmp x8,x0
7101e0c290  b.eq 0x7101e0c2a4
7101e0c294  cbz x0,0x7101e0c2b0
7101e0c298  ldr x8,[x0]
7101e0c29c  ldr x8,[x8, #0x28]
7101e0c2a0  b 0x7101e0c2ac
7101e0c2a4  ldr x8,[x0]
7101e0c2a8  ldr x8,[x8, #0x20]
7101e0c2ac  blr x8
7101e0c2b0  ldr x0,[sp, #0x120]
7101e0c2b4  add x8,sp,#0xd0
7101e0c2b8  add x8,x8,#0x30
7101e0c2bc  cmp x8,x0
7101e0c2c0  b.eq 0x7101e0c2d4
7101e0c2c4  cbz x0,0x7101e0c2e0
7101e0c2c8  ldr x8,[x0]
7101e0c2cc  ldr x8,[x8, #0x28]
7101e0c2d0  b 0x7101e0c2dc
7101e0c2d4  ldr x8,[x0]
7101e0c2d8  ldr x8,[x8, #0x20]
7101e0c2dc  blr x8
7101e0c2e0  ldr x0,[sp, #0x28]
7101e0c2e4  adrp x1,0x71042b4000
7101e0c2e8  add x1,x1,#0xa2f
7101e0c2ec  add x8,sp,#0xa0
7101e0c2f0  bl 0x7103776640
7101e0c2f4  adrp x1,0x7104338000
7101e0c2f8  add x1,x1,#0xd31
7101e0c2fc  add x8,sp,#0xd0
7101e0c300  add x0,sp,#0xa0
7101e0c304  bl 0x7103776910
7101e0c308  adrp x1,0x71042b4000
7101e0c30c  add x1,x1,#0x84f
7101e0c310  add x0,sp,#0xd0
7101e0c314  bl 0x710377a120
7101e0c318  ldr x0,[sp, #0xd8]
7101e0c31c  stp x27,xzr,[sp, #0xd0]
7101e0c320  cbz x0,0x7101e0c328
7101e0c324  bl 0x710392eb40
7101e0c328  ldr x22,[sp, #0xa8]
7101e0c32c  stp x21,xzr,[sp, #0xa0]
7101e0c330  cbz x22,0x7101e0c34c
7101e0c334  ldr x0,[x22, #0x18]
7101e0c338  stp x27,xzr,[x22, #0x10]
7101e0c33c  cbz x0,0x7101e0c344
7101e0c340  bl 0x710392eb40
7101e0c344  mov x0,x22
7101e0c348  bl 0x710392eb40
7101e0c34c  ldr x0,[sp, #0x28]
7101e0c350  adrp x1,0x71042b4000
7101e0c354  add x1,x1,#0xa2f
7101e0c358  add x8,sp,#0xd0
7101e0c35c  bl 0x7103776640
7101e0c360  ldr x22,[sp, #0xd8]
7101e0c364  ldr x8,[x22, #0x8]
7101e0c368  cbz x8,0x7101e0c380
7101e0c36c  ldr x8,[x8, #0x18]
7101e0c370  cbz x8,0x7101e0c380
7101e0c374  ldrb w9,[x8, #0x58]
7101e0c378  and w9,w9,#0xfe
7101e0c37c  strb w9,[x8, #0x58]
7101e0c380  stp x21,xzr,[sp, #0xd0]
7101e0c384  cbz x22,0x7101e0c3a0
7101e0c388  ldr x0,[x22, #0x18]
7101e0c38c  stp x27,xzr,[x22, #0x10]
7101e0c390  cbz x0,0x7101e0c398
7101e0c394  bl 0x710392eb40
7101e0c398  mov x0,x22
7101e0c39c  bl 0x710392eb40
7101e0c3a0  mov x21,#0x6e6d
7101e0c3a4  movk x21,#0x5f75, LSL #16
7101e0c3a8  orr x8,xzr,#0x2000000000
7101e0c3ac  movk x21,#0x6d6d, LSL #32
7101e0c3b0  movk x21,#0x6969, LSL #48
7101e0c3b4  str xzr,[sp, #0xa0]
7101e0c3b8  stp x8,x21,[sp, #0xd0]
7101e0c3bc  mov x8,#0x5f66
7101e0c3c0  movk x8,#0x7573, LSL #16
7101e0c3c4  movk x8,#0x6d62, LSL #32
7101e0c3c8  movk x8,#0x6e65, LSL #48
7101e0c3cc  str x8,[sp, #0xe0]
7101e0c3d0  mov w8,#0x5f75
7101e0c3d4  strh w8,[sp, #0xe8]
7101e0c3d8  mov x8,#0x6166
7101e0c3dc  movk x8,#0x6f76, LSL #16
7101e0c3e0  movk x8,#0x6972, LSL #32
7101e0c3e4  movk x8,#0x6574, LSL #48
7101e0c3e8  stur x8,[x20, #0x1a]
7101e0c3ec  mov w8,#0x675f
7101e0c3f0  movk w8,#0x6975, LSL #16
7101e0c3f4  mov w10,#0x6564
7101e0c3f8  stur w8,[x20, #0x22]
7101e0c3fc  mov w9,#0x6d
7101e0c400  mov w8,#0x9
7101e0c404  strh w10,[sp, #0xf6]
7101e0c408  mov w20,#0x89
7101e0c40c  add x10,sp,#0xd0
7101e0c410  strb wzr,[sp, #0xf8]
7101e0c414  mov w11,w25
7101e0c418  stp xzr,xzr,[sp, #0xa8]
7101e0c41c  mul w11,w11,w20
7101e0c420  and w9,w9,#0xff
7101e0c424  eor w11,w11,w9
7101e0c428  ldrb w9,[x10, x8, LSL ]
7101e0c42c  add x8,x8,#0x1
7101e0c430  cbnz w9,0x7101e0c41c
7101e0c434  add x0,sp,#0xa0
7101e0c438  add x1,sp,#0xd0
7101e0c43c  str w11,[sp, #0xd0]
7101e0c440  add x22,sp,#0xd0
7101e0c444  bl 0x71019c1c50
7101e0c448  mov x8,#0x1400000000
7101e0c44c  stp x8,x21,[sp, #0xd0]
7101e0c450  mov x8,#0x5f66
7101e0c454  movk x8,#0x7573, LSL #16
7101e0c458  movk x8,#0x5f62, LSL #32
7101e0c45c  movk x8,#0x6564, LSL #48
7101e0c460  str x8,[sp, #0xe0]
7101e0c464  mov w8,#0x656c
7101e0c468  movk w8,#0x6574, LSL #16
7101e0c46c  str w8,[sp, #0xe8]
7101e0c470  mov w9,#0x6d
7101e0c474  mov w8,#0x9
7101e0c478  mov w10,w25
7101e0c47c  strb wzr,[sp, #0xec]
7101e0c480  mul w10,w10,w20
7101e0c484  and w9,w9,#0xff
7101e0c488  eor w10,w10,w9
7101e0c48c  ldrb w9,[x22, x8, LSL ]
7101e0c490  add x8,x8,#0x1
7101e0c494  cbnz w9,0x7101e0c480
7101e0c498  ldp x8,x9,[sp, #0xa8]
7101e0c49c  cmp x8,x9
7101e0c4a0  str w10,[sp, #0xd0]
7101e0c4a4  b.cs 0x7101e0c4f4
7101e0c4a8  add x10,sp,#0xd0
7101e0c4ac  mov x9,xzr
7101e0c4b0  str wzr,[x8]
7101e0c4b4  add x10,x10,#0x8
7101e0c4b8  b 0x7101e0c4c4
7101e0c4bc  add x9,x9,#0x2
7101e0c4c0  strb w11,[x12, #0x9]
7101e0c4c4  add x11,x10,x9
7101e0c4c8  ldrb w13,[x11]
7101e0c4cc  cbz w13,0x7101e0c50c
7101e0c4d0  add w14,w9,#0x1
7101e0c4d4  add x12,x8,x9
7101e0c4d8  cmp w14,#0x3f
7101e0c4dc  strb w13,[x12, #0x8]
7101e0c4e0  b.cs 0x7101e0c508
7101e0c4e4  ldrb w11,[x11, #0x1]
7101e0c4e8  cbnz w11,0x7101e0c4bc
7101e0c4ec  add x9,x9,#0x1
7101e0c4f0  b 0x7101e0c50c
7101e0c4f4  add x0,sp,#0xa0
7101e0c4f8  add x1,sp,#0xd0
7101e0c4fc  bl 0x71019c1c50
7101e0c500  ldr x21,[sp, #0xa8]
7101e0c504  b 0x7101e0c550
7101e0c508  add w9,w9,#0x1
7101e0c50c  add x10,x8,#0x8
7101e0c510  strb wzr,[x10, w9, UXTW ]
7101e0c514  str w9,[x8, #0x4]
7101e0c518  ldrb w9,[x8, #0x8]
7101e0c51c  mov w11,w25
7101e0c520  cbz w9,0x7101e0c540
7101e0c524  add x10,x8,#0x9
7101e0c528  mov w11,w25
7101e0c52c  mul w11,w11,w20
7101e0c530  and w9,w9,#0xff
7101e0c534  eor w11,w11,w9
7101e0c538  ldrb w9,[x10], #0x1
7101e0c53c  cbnz w9,0x7101e0c52c
7101e0c540  str w11,[x8]
7101e0c544  ldr x8,[sp, #0xa8]
7101e0c548  add x21,x8,#0x48
7101e0c54c  str x21,[sp, #0xa8]
7101e0c550  ldr x23,[sp, #0xa0]
7101e0c554  subs x22,x21,x23
7101e0c558  strb wzr,[sp, #0xd8]
7101e0c55c  str xzr,[sp, #0xd0]
7101e0c560  stp xzr,xzr,[sp, #0x90]
7101e0c564  str xzr,[sp, #0x88]
7101e0c568  b.eq 0x7101e0c694
7101e0c56c  asr x8,x22,#0x3
7101e0c570  mul x24,x8,x24
7101e0c574  mov x8,#0xe38e
7101e0c578  movk x8,#0x8e38, LSL #16
7101e0c57c  movk x8,#0x38e3, LSL #32
7101e0c580  movk x8,#0x38e, LSL #48
7101e0c584  cmp x24,x8
7101e0c588  b.hi 0x7101e0cfc4
7101e0c58c  mov w0,#0x10
7101e0c590  mov x1,x22
7101e0c594  bl 0x710392e290
7101e0c598  cbnz x0,0x7101e0c5dc
7101e0c59c  adrp x8,0x7105332000
7101e0c5a0  ldr x0,[x8, #0xf00]
7101e0c5a4  cbz x0,0x7101e0c5d8
7101e0c5a8  str wzr,[sp, #0x30]
7101e0c5ac  stur x22,[x29, #-0x78]
7101e0c5b0  ldr x8,[x0]
7101e0c5b4  ldr x8,[x8, #0x30]
7101e0c5b8  add x1,sp,#0x30
7101e0c5bc  sub x2,x29,#0x78
7101e0c5c0  blr x8
7101e0c5c4  tbz w0,#0x0,0x7101e0c5d8
7101e0c5c8  mov w0,#0x10
7101e0c5cc  mov x1,x22
7101e0c5d0  bl 0x710392e290
7101e0c5d4  cbnz x0,0x7101e0c5dc
7101e0c5d8  mov x0,xzr
7101e0c5dc  mov w8,#0x48
7101e0c5e0  madd x8,x24,x8,x0
7101e0c5e4  cmp x21,x23
7101e0c5e8  stp x0,x0,[sp, #0x88]
7101e0c5ec  str x8,[sp, #0x98]
7101e0c5f0  b.eq 0x7101e0c694
7101e0c5f4  mov x8,xzr
7101e0c5f8  str wzr,[x0]
7101e0c5fc  add x9,x23,x8
7101e0c600  ldrb w11,[x9, #0x8]
7101e0c604  cbz w11,0x7101e0c644
7101e0c608  add x10,x0,x8
7101e0c60c  strb w11,[x10, #0x8]
7101e0c610  ldrb w11,[x9, #0x9]
7101e0c614  cbz w11,0x7101e0c638
7101e0c618  strb w11,[x10, #0x9]
7101e0c61c  ldrb w9,[x9, #0xa]
7101e0c620  cbz w9,0x7101e0c640
7101e0c624  add x8,x8,#0x3
7101e0c628  cmp w8,#0x3f
7101e0c62c  strb w9,[x10, #0xa]
7101e0c630  b.cc 0x7101e0c5fc
7101e0c634  b 0x7101e0c644
7101e0c638  add x8,x8,#0x1
7101e0c63c  b 0x7101e0c644
7101e0c640  add x8,x8,#0x2
7101e0c644  add x9,x0,#0x8
7101e0c648  strb wzr,[x9, w8, UXTW ]
7101e0c64c  str w8,[x0, #0x4]
7101e0c650  ldrb w8,[x0, #0x8]
7101e0c654  mov w10,w25
7101e0c658  cbz w8,0x7101e0c678
7101e0c65c  add x9,x0,#0x9
7101e0c660  mov w10,w25
7101e0c664  mul w10,w10,w20
7101e0c668  and w8,w8,#0xff
7101e0c66c  eor w10,w10,w8
7101e0c670  ldrb w8,[x9], #0x1
7101e0c674  cbnz w8,0x7101e0c664
7101e0c678  str w10,[x0]
7101e0c67c  ldr x8,[sp, #0x90]
7101e0c680  add x23,x23,#0x48
7101e0c684  cmp x23,x21
7101e0c688  add x0,x8,#0x48
7101e0c68c  str x0,[sp, #0x90]
7101e0c690  b.ne 0x7101e0c5f4
7101e0c694  ldr x0,[x19, #0x560]
7101e0c698  ldr x1,[sp, #0x20]
7101e0c69c  add x2,sp,#0xd0
7101e0c6a0  add x3,sp,#0x88
7101e0c6a4  mov w4,#0x1
7101e0c6a8  mov w6,#0x1
7101e0c6ac  mov w5,wzr
7101e0c6b0  bl 0x71032d6470
7101e0c6b4  ldr x0,[sp, #0x88]
7101e0c6b8  cbz x0,0x7101e0c6c4
7101e0c6bc  str x0,[sp, #0x90]
7101e0c6c0  bl 0x710392eb40
7101e0c6c4  ldr x0,[sp, #0x28]
7101e0c6c8  adrp x1,0x71042b4000
7101e0c6cc  add x1,x1,#0x86a
7101e0c6d0  bl 0x7103778430
7101e0c6d4  ldr x0,[x19, #0x518]
7101e0c6d8  adrp x1,0x7104292000
7101e0c6dc  add x1,x1,#0x1b0
7101e0c6e0  bl 0x7103778760
7101e0c6e4  mov w21,#0x101
7101e0c6e8  strh w21,[x19, #0x598]
7101e0c6ec  ldr x0,[sp, #0xa0]
7101e0c6f0  add x20,sp,#0xd0
7101e0c6f4  cbz x0,0x7101e0c700
7101e0c6f8  str x0,[sp, #0xa8]
7101e0c6fc  bl 0x710392eb40
7101e0c700  mov x8,#0x41800000
7101e0c704  movk x8,#0x4248, LSL #48
7101e0c708  add x0,sp,#0xd0
7101e0c70c  stp xzr,x8,[sp, #0xd0]
7101e0c710  mov x8,#0x3f800000
7101e0c714  movk x8,#0x101, LSL #32
7101e0c718  movk x8,#0x1, LSL #48
7101e0c71c  str x8,[sp, #0xe0]
7101e0c720  mov w8,#0x1
7101e0c724  strh wzr,[sp, #0xe8]
7101e0c728  str xzr,[sp, #0x120]
7101e0c72c  str xzr,[sp, #0x150]
7101e0c730  str xzr,[sp, #0x180]
7101e0c734  str xzr,[sp, #0x1b0]
7101e0c738  strb w8,[sp, #0xea]
7101e0c73c  str xzr,[sp, #0x1e0]
7101e0c740  strb wzr,[sp, #0xf1]
7101e0c744  sturh wzr,[x20, #0x1f]
7101e0c748  stur wzr,[x20, #0x1b]
7101e0c74c  bl 0x710337e790
7101e0c750  ldr x1,[sp, #0x28]
7101e0c754  add x24,x19,#0x528
7101e0c758  mov w8,#0x63
7101e0c75c  add x4,x19,#0x10
7101e0c760  adrp x2,0x710424f000
7101e0c764  add x2,x2,#0xc05
7101e0c768  add x3,sp,#0xd0
7101e0c76c  mov x0,x24
7101e0c770  str w8,[sp, #0xd4]
7101e0c774  strh w21,[sp, #0xec]
7101e0c778  bl 0x7103781a20
7101e0c77c  ldr x0,[x19, #0x528]
7101e0c780  ldr x8,[x0]
7101e0c784  ldr x8,[x8, #0x60]
7101e0c788  mov w1,wzr
7101e0c78c  blr x8
7101e0c790  ldr x21,[x19, #0x528]
7101e0c794  ldr x23,[x19]
7101e0c798  str xzr,[sp, #0xa0]
7101e0c79c  stp xzr,xzr,[sp, #0xa8]
7101e0c7a0  add x0,sp,#0xa0
7101e0c7a4  ldp x8,x9,[x21, #0x168]
7101e0c7a8  sub x8,x9,x8
7101e0c7ac  asr x1,x8,#0x3
7101e0c7b0  bl 0x71019bb740
7101e0c7b4  ldp x20,x21,[x21, #0x168]
7101e0c7b8  cmp x20,x21
7101e0c7bc  b.eq 0x7101e0c7fc
7101e0c7c0  ldr x8,[x20]
7101e0c7c4  add x1,x8,#0x8
7101e0c7c8  ldp x0,x8,[sp, #0xa8]
7101e0c7cc  cmp x0,x8
7101e0c7d0  b.eq 0x7101e0c7e8
7101e0c7d4  bl 0x7103776390
7101e0c7d8  ldr x8,[sp, #0xa8]
7101e0c7dc  add x8,x8,#0x10
7101e0c7e0  str x8,[sp, #0xa8]
7101e0c7e4  b 0x7101e0c7f0
7101e0c7e8  add x0,sp,#0xa0
7101e0c7ec  bl 0x71019bb8f0
7101e0c7f0  add x20,x20,#0x8
7101e0c7f4  cmp x21,x20
7101e0c7f8  b.ne 0x7101e0c7c0
7101e0c7fc  ldp x22,x21,[sp, #0xa0]
7101e0c800  ldrb w9,[x19, #0x59d]
7101e0c804  cmp x22,x21
7101e0c808  b.eq 0x7101e0cd3c
7101e0c80c  add x8,x19,#0x348
7101e0c810  str w9,[sp, #0x4]
7101e0c814  stp x24,x8,[sp, #0x8]
7101e0c818  stp x21,x23,[sp, #0x18]
7101e0c81c  b 0x7101e0c850
7101e0c820  ldr x23,[sp, #0x20]
7101e0c824  mov x10,x19
7101e0c828  str x11,[x19, #0x348]
7101e0c82c  str x9,[x19, #0x350]
7101e0c830  str x8,[x19, #0x358]
7101e0c834  cbnz x26,0x7101e0cce0
7101e0c838  b 0x7101e0cce8
7101e0c83c  ldr x23,[sp, #0x20]
7101e0c840  cbnz x26,0x7101e0cce0
7101e0c844  b 0x7101e0cce8
7101e0c848  mov x0,xzr
7101e0c84c  b 0x7101e0cb70
7101e0c850  mov w0,#0x10
7101e0c854  orr w1,wzr,#0xf0
7101e0c858  bl 0x710392e290
7101e0c85c  mov x28,x0
7101e0c860  cbnz x0,0x7101e0c8ac
7101e0c864  adrp x8,0x7105332000
7101e0c868  ldr x0,[x8, #0xf00]
7101e0c86c  cbz x0,0x7101e0c8a8
7101e0c870  orr w8,wzr,#0xf0
7101e0c874  str wzr,[sp, #0x30]
7101e0c878  add x1,sp,#0x30
7101e0c87c  stur x8,[x29, #-0x78]
7101e0c880  ldr x8,[x0]
7101e0c884  ldr x8,[x8, #0x30]
7101e0c888  sub x2,x29,#0x78
7101e0c88c  blr x8
7101e0c890  tbz w0,#0x0,0x7101e0c8a8
7101e0c894  mov w0,#0x10
7101e0c898  orr w1,wzr,#0xf0
7101e0c89c  bl 0x710392e290
7101e0c8a0  mov x28,x0
7101e0c8a4  cbnz x0,0x7101e0c8ac
7101e0c8a8  mov x28,xzr
7101e0c8ac  mov x25,x28
7101e0c8b0  adrp x8,0x71050b1000
7101e0c8b4  add x8,x8,#0x5f0
7101e0c8b8  mov x24,x28
7101e0c8bc  str xzr,[x28, #0x10]
7101e0c8c0  mov x20,x28
7101e0c8c4  str xzr,[x25, #0x8]!
7101e0c8c8  str x8,[x28]
7101e0c8cc  mov w8,#0xffffffff
7101e0c8d0  mov w0,#0x10
7101e0c8d4  str xzr,[x24, #0x18]!
7101e0c8d8  mov w1,#0x20
7101e0c8dc  stp xzr,xzr,[x28, #0x30]
7101e0c8e0  stp x24,xzr,[x28, #0x20]
7101e0c8e4  str w8,[x28, #0xc0]
7101e0c8e8  strb wzr,[x28, #0xc4]
7101e0c8ec  stp xzr,x8,[x28, #0xb0]
7101e0c8f0  stp xzr,xzr,[x28, #0xa0]
7101e0c8f4  stp xzr,xzr,[x28, #0x90]
7101e0c8f8  stp xzr,xzr,[x28, #0x80]
7101e0c8fc  stp xzr,xzr,[x28, #0x70]
7101e0c900  stp xzr,xzr,[x28, #0x60]
7101e0c904  stp xzr,xzr,[x28, #0x50]
7101e0c908  stp xzr,xzr,[x28, #0x40]
7101e0c90c  str x27,[x20, #0xc8]!
7101e0c910  bl 0x710392e290
7101e0c914  cbnz x0,0x7101e0c95c
7101e0c918  adrp x8,0x7105332000
7101e0c91c  ldr x0,[x8, #0xf00]
7101e0c920  cbz x0,0x7101e0c958
7101e0c924  mov w8,#0x20
7101e0c928  str wzr,[sp, #0x30]
7101e0c92c  add x1,sp,#0x30
7101e0c930  stur x8,[x29, #-0x78]
7101e0c934  ldr x8,[x0]
7101e0c938  ldr x8,[x8, #0x30]
7101e0c93c  sub x2,x29,#0x78
7101e0c940  blr x8
7101e0c944  tbz w0,#0x0,0x7101e0c958
7101e0c948  mov w0,#0x10
7101e0c94c  mov w1,#0x20
7101e0c950  bl 0x710392e290
7101e0c954  cbnz x0,0x7101e0c95c
7101e0c958  mov x0,xzr
7101e0c95c  add x26,x28,#0xd8
7101e0c960  stp xzr,xzr,[x0, #0x10]
7101e0c964  stp xzr,xzr,[x0]
7101e0c968  str x0,[x28, #0xd0]
7101e0c96c  mov x0,x26
7101e0c970  bl 0x7103776290
7101e0c974  orr w8,wzr,#0xffff
7101e0c978  strh w8,[x28, #0xea]
7101e0c97c  adrp x8,0x7101e09000
7101e0c980  add x8,x8,#0xe50
7101e0c984  stp x8,xzr,[x28, #0x48]
7101e0c988  ldrsw x8,[x28, #0xb4]
7101e0c98c  cmp w8,#0x13
7101e0c990  adrp x9,0x7101e09000
7101e0c994  add x9,x9,#0xe60
7101e0c998  strb wzr,[x28, #0xe8]
7101e0c99c  stp x9,xzr,[x28, #0x58]
7101e0c9a0  b.cs 0x7101e0cfb8
7101e0c9a4  add x9,x28,#0x18
7101e0c9a8  add x8,x9,x8, LSL #0x2
7101e0c9ac  str wzr,[x8, #0x50]
7101e0c9b0  sub x8,x29,#0x78
7101e0c9b4  mov x0,x22
7101e0c9b8  adrp x1,0x710436a000
7101e0c9bc  add x1,x1,#0xc4b
7101e0c9c0  bl 0x7103776910
7101e0c9c4  cmp x22,x26
7101e0c9c8  str x23,[x28, #0x18]
7101e0c9cc  b.eq 0x7101e0ca40
7101e0c9d0  ldr x8,[x22, #0x8]
7101e0c9d4  ldr x8,[x8]
7101e0c9d8  ldr x9,[x28, #0xe0]
7101e0c9dc  str x8,[x9]
7101e0c9e0  ldr x8,[x22, #0x8]
7101e0c9e4  ldr x8,[x8, #0x8]
7101e0c9e8  ldr x9,[x28, #0xe0]
7101e0c9ec  str x8,[x9, #0x8]
7101e0c9f0  ldr x9,[x22, #0x8]
7101e0c9f4  ldr x8,[x28, #0xe0]
7101e0c9f8  cmp x8,x9
7101e0c9fc  b.eq 0x7101e0ca40
7101e0ca00  ldr x10,[x9, #0x18]
7101e0ca04  ldr x10,[x10]
7101e0ca08  ldr x11,[x8, #0x18]
7101e0ca0c  str x10,[x11]
7101e0ca10  ldr x10,[x9, #0x18]
7101e0ca14  ldr x10,[x10, #0x8]
7101e0ca18  ldr x11,[x8, #0x18]
7101e0ca1c  str x10,[x11, #0x8]
7101e0ca20  ldr x10,[x9, #0x18]
7101e0ca24  ldr x10,[x10, #0x10]
7101e0ca28  ldr x11,[x8, #0x18]
7101e0ca2c  str x10,[x11, #0x10]
7101e0ca30  ldr x9,[x9, #0x18]
7101e0ca34  ldr x9,[x9, #0x18]
7101e0ca38  ldr x8,[x8, #0x18]
7101e0ca3c  str x9,[x8, #0x18]
7101e0ca40  sub x8,x29,#0x78
7101e0ca44  cmp x8,x20
7101e0ca48  b.eq 0x7101e0ca88
7101e0ca4c  ldur x8,[x29, #-0x70]
7101e0ca50  ldr x8,[x8]
7101e0ca54  ldr x9,[x28, #0xd0]
7101e0ca58  str x8,[x9]
7101e0ca5c  ldur x8,[x29, #-0x70]
7101e0ca60  ldr x8,[x8, #0x8]
7101e0ca64  ldr x9,[x28, #0xd0]
7101e0ca68  str x8,[x9, #0x8]
7101e0ca6c  ldur x8,[x29, #-0x70]
7101e0ca70  ldr x9,[x8, #0x10]
7101e0ca74  ldr x10,[x28, #0xd0]
7101e0ca78  str x9,[x10, #0x10]
7101e0ca7c  ldr x8,[x8, #0x18]
7101e0ca80  ldr x9,[x28, #0xd0]
7101e0ca84  str x8,[x9, #0x18]
7101e0ca88  ldr x20,[x19, #0x350]
7101e0ca8c  ldr x8,[x19, #0x358]
7101e0ca90  cmp x20,x8
7101e0ca94  b.eq 0x7101e0cabc
7101e0ca98  stp x24,x28,[x20]
7101e0ca9c  ldxr x8,[x25]
7101e0caa0  add x8,x8,#0x1
7101e0caa4  stxr w9,x8,[x25]
7101e0caa8  cbnz w9,0x7101e0ca9c
7101e0caac  ldr x8,[x19, #0x350]
7101e0cab0  add x8,x8,#0x10
7101e0cab4  str x8,[x19, #0x350]
7101e0cab8  b 0x7101e0cce8
7101e0cabc  ldr x9,[sp, #0x10]
7101e0cac0  ldr x26,[x9]
7101e0cac4  sub x9,x20,x26
7101e0cac8  asr x23,x9,#0x4
7101e0cacc  add x9,x23,#0x1
7101e0cad0  lsr x10,x9,#0x3c
7101e0cad4  cbnz x10,0x7101e0cfbc
7101e0cad8  sub x8,x8,x26
7101e0cadc  asr x10,x8,#0x4
7101e0cae0  orr x11,xzr,#0x7fffffffffffffe
7101e0cae4  cmp x10,x11
7101e0cae8  b.hi 0x7101e0cb08
7101e0caec  asr x8,x8,#0x3
7101e0caf0  cmp x8,x9
7101e0caf4  csel x21,x9,x8,cc
7101e0caf8  cbz x21,0x7101e0c848
7101e0cafc  lsr x8,x21,#0x3c
7101e0cb00  cbz x8,0x7101e0cb0c
7101e0cb04  b 0x7101e0cfb8
7101e0cb08  orr x21,xzr,#0xfffffffffffffff
7101e0cb0c  lsl x8,x21,#0x4
7101e0cb10  cmp x8,#0x0
7101e0cb14  csinc x27,x8,xzr,ne
7101e0cb18  mov w0,#0x10
7101e0cb1c  mov x1,x27
7101e0cb20  bl 0x710392e290
7101e0cb24  cbnz x0,0x7101e0cb68
7101e0cb28  adrp x8,0x7105332000
7101e0cb2c  ldr x0,[x8, #0xf00]
7101e0cb30  cbz x0,0x7101e0cb64
7101e0cb34  stur wzr,[x29, #-0x64]
7101e0cb38  str x27,[sp, #0x30]
7101e0cb3c  ldr x8,[x0]
7101e0cb40  ldr x8,[x8, #0x30]
7101e0cb44  sub x1,x29,#0x64
7101e0cb48  add x2,sp,#0x30
7101e0cb4c  blr x8
7101e0cb50  tbz w0,#0x0,0x7101e0cb64
7101e0cb54  mov w0,#0x10
7101e0cb58  mov x1,x27
7101e0cb5c  bl 0x710392e290
7101e0cb60  cbnz x0,0x7101e0cb68
7101e0cb64  mov x0,xzr
7101e0cb68  adrp x27,0x710523d000
7101e0cb6c  add x27,x27,#0x9a8
7101e0cb70  add x11,x0,x23, LSL #0x4
7101e0cb74  add x8,x0,x21, LSL #0x4
7101e0cb78  stp x24,x28,[x11]
7101e0cb7c  ldxr x9,[x25]
7101e0cb80  add x9,x9,#0x1
7101e0cb84  stxr w10,x9,[x25]
7101e0cb88  cbnz w10,0x7101e0cb7c
7101e0cb8c  ldr x21,[sp, #0x18]
7101e0cb90  add x9,x11,#0x10
7101e0cb94  cmp x20,x26
7101e0cb98  b.eq 0x7101e0c820
7101e0cb9c  sub x12,x20,#0x10
7101e0cba0  sub x10,x12,x26
7101e0cba4  ubfx x13,x10,#0x4,#0x1c
7101e0cba8  add w13,w13,#0x1
7101e0cbac  ands x13,x13,#0x3
7101e0cbb0  b.eq 0x7101e0cbe8
7101e0cbb4  sub x14,x23,x13
7101e0cbb8  neg x13,x13
7101e0cbbc  sub x11,x11,#0x8
7101e0cbc0  mov x15,x13
7101e0cbc4  ldr x16,[x12]
7101e0cbc8  stur x16,[x11, #-0x8]
7101e0cbcc  ldr x16,[x12, #0x8]
7101e0cbd0  str x16,[x11], #-0x10
7101e0cbd4  stp xzr,xzr,[x12], #-0x10
7101e0cbd8  adds x15,x15,#0x1
7101e0cbdc  b.ne 0x7101e0cbc4
7101e0cbe0  add x11,x0,x14, LSL #0x4
7101e0cbe4  add x20,x20,x13, LSL #0x4
7101e0cbe8  cmp x10,#0x30
7101e0cbec  b.cc 0x7101e0cc50
7101e0cbf0  sub x11,x11,#0x20
7101e0cbf4  ldur x12,[x20, #-0x10]
7101e0cbf8  str x12,[x11, #0x10]
7101e0cbfc  ldur x12,[x20, #-0x8]
7101e0cc00  str x12,[x11, #0x18]
7101e0cc04  ldur x12,[x20, #-0x20]
7101e0cc08  stp xzr,xzr,[x20, #-0x10]
7101e0cc0c  str x12,[x11]
7101e0cc10  ldur x12,[x20, #-0x18]
7101e0cc14  str x12,[x11, #0x8]
7101e0cc18  ldur x12,[x20, #-0x30]
7101e0cc1c  stp xzr,xzr,[x20, #-0x20]
7101e0cc20  stur x12,[x11, #-0x10]
7101e0cc24  ldur x12,[x20, #-0x28]
7101e0cc28  stur x12,[x11, #-0x8]
7101e0cc2c  stp xzr,xzr,[x20, #-0x30]
7101e0cc30  ldr x12,[x20, #-0x40]!
7101e0cc34  stur x12,[x11, #-0x20]
7101e0cc38  ldr x12,[x20, #0x8]
7101e0cc3c  stur x12,[x11, #-0x18]
7101e0cc40  sub x11,x11,#0x40
7101e0cc44  cmp x26,x20
7101e0cc48  stp xzr,xzr,[x20]
7101e0cc4c  b.ne 0x7101e0cbf4
7101e0cc50  mov x11,#-0x1
7101e0cc54  eor x10,x11,x10, LSR #0x4
7101e0cc58  ldr x26,[x19, #0x348]
7101e0cc5c  ldr x20,[x19, #0x350]
7101e0cc60  str x9,[x19, #0x350]
7101e0cc64  add x10,x23,x10
7101e0cc68  add x10,x0,x10, LSL #0x4
7101e0cc6c  cmp x20,x26
7101e0cc70  mov x11,x19
7101e0cc74  str x10,[x19, #0x348]
7101e0cc78  str x8,[x19, #0x358]
7101e0cc7c  b.eq 0x7101e0c83c
7101e0cc80  ldr x23,[sp, #0x20]
7101e0cc84  ldur x27,[x20, #-0x8]
7101e0cc88  sub x20,x20,#0x10
7101e0cc8c  cbz x27,0x7101e0cca8
7101e0cc90  add x8,x27,#0x8
7101e0cc94  ldaxr x9,[x8]
7101e0cc98  sub x10,x9,#0x1
7101e0cc9c  stlxr w11,x10,[x8]
7101e0cca0  cbnz w11,0x7101e0cc94
7101e0cca4  cbz x9,0x7101e0ccb4
7101e0cca8  cmp x20,x26
7101e0ccac  b.ne 0x7101e0cc84
7101e0ccb0  b 0x7101e0ccd4
7101e0ccb4  ldr x8,[x27]
7101e0ccb8  ldr x8,[x8, #0x10]
7101e0ccbc  mov x0,x27
7101e0ccc0  blr x8
7101e0ccc4  mov x0,x27
7101e0ccc8  bl 0x71039c2670
7101e0cccc  cmp x20,x26
7101e0ccd0  b.ne 0x7101e0cc84
7101e0ccd4  adrp x27,0x710523d000
7101e0ccd8  add x27,x27,#0x9a8
7101e0ccdc  cbz x26,0x7101e0cce8
7101e0cce0  mov x0,x26
7101e0cce4  bl 0x710392eb40
7101e0cce8  ldur x0,[x29, #-0x70]
7101e0ccec  stp x27,xzr,[x29, #-0x78]
7101e0ccf0  cbz x0,0x7101e0ccf8
7101e0ccf4  bl 0x710392eb40
7101e0ccf8  ldaxr x8,[x25]
7101e0ccfc  sub x9,x8,#0x1
7101e0cd00  stlxr w10,x9,[x25]
7101e0cd04  cbnz w10,0x7101e0ccf8
7101e0cd08  cbnz x8,0x7101e0cd24
7101e0cd0c  ldr x8,[x28]
7101e0cd10  ldr x8,[x8, #0x10]
7101e0cd14  mov x0,x28
7101e0cd18  blr x8
7101e0cd1c  mov x0,x28
7101e0cd20  bl 0x71039c2670
7101e0cd24  add x22,x22,#0x10
7101e0cd28  cmp x22,x21
7101e0cd2c  b.ne 0x7101e0c850
7101e0cd30  ldr x22,[sp, #0xa0]
7101e0cd34  ldr x24,[sp, #0x8]
7101e0cd38  ldr w9,[sp, #0x4]
7101e0cd3c  mov w8,#0x1
7101e0cd40  strb w8,[x19, #0x362]
7101e0cd44  strb w9,[x19, #0x361]
7101e0cd48  cbz x22,0x7101e0cd80
7101e0cd4c  ldr x23,[sp, #0xa8]
7101e0cd50  cmp x23,x22
7101e0cd54  b.eq 0x7101e0cfa8
7101e0cd58  ldr x8,[x23, #-0x10]!
7101e0cd5c  ldr x8,[x8]
7101e0cd60  mov x0,x23
7101e0cd64  blr x8
7101e0cd68  cmp x22,x23
7101e0cd6c  b.ne 0x7101e0cd58
7101e0cd70  ldr x0,[sp, #0xa0]
7101e0cd74  str x22,[sp, #0xa8]
7101e0cd78  cbz x0,0x7101e0cd80
7101e0cd7c  bl 0x710392eb40
7101e0cd80  adrp x8,0x7105329000
7101e0cd84  ldr x8,[x8, #0xf98]
7101e0cd88  ldr x8,[x8]
7101e0cd8c  ldr w2,[x19, #0x364]
7101e0cd90  ldrb w3,[x19, #0x361]
7101e0cd94  add x1,x19,#0x18
7101e0cd98  ldr x0,[x8, #0x30]
7101e0cd9c  bl 0x7102528f40
7101e0cda0  ldp x9,x10,[x19, #0x18]
7101e0cda4  ldrb w8,[x19, #0x361]
7101e0cda8  sub x9,x10,x9
7101e0cdac  eor w8,w8,#0x1
7101e0cdb0  lsr x9,x9,#0x3
7101e0cdb4  strb w8,[x19, #0x360]
7101e0cdb8  add w8,w9,w8
7101e0cdbc  cmp w8,#0x0
7101e0cdc0  b.le 0x7101e0cddc
7101e0cdc4  ldrb w8,[x19, #0x59d]
7101e0cdc8  eor w1,w8,#0x1
7101e0cdcc  mov w3,#0x1
7101e0cdd0  mov x0,x24
7101e0cdd4  mov w2,wzr
7101e0cdd8  bl 0x7103783c10
7101e0cddc  ldr x0,[sp, #0x1e0]
7101e0cde0  add x8,sp,#0xd0
7101e0cde4  add x8,x8,#0xf0
7101e0cde8  cmp x8,x0
7101e0cdec  b.eq 0x7101e0ce00
7101e0cdf0  cbz x0,0x7101e0ce0c
7101e0cdf4  ldr x8,[x0]
7101e0cdf8  ldr x8,[x8, #0x28]
7101e0cdfc  b 0x7101e0ce08
7101e0ce00  ldr x8,[x0]
7101e0ce04  ldr x8,[x8, #0x20]
7101e0ce08  blr x8
7101e0ce0c  ldr x0,[sp, #0x1b0]
7101e0ce10  add x8,sp,#0xd0
7101e0ce14  add x8,x8,#0xc0
7101e0ce18  cmp x8,x0
7101e0ce1c  b.eq 0x7101e0ce30
7101e0ce20  cbz x0,0x7101e0ce3c
7101e0ce24  ldr x8,[x0]
7101e0ce28  ldr x8,[x8, #0x28]
7101e0ce2c  b 0x7101e0ce38
7101e0ce30  ldr x8,[x0]
7101e0ce34  ldr x8,[x8, #0x20]
7101e0ce38  blr x8
7101e0ce3c  ldr x0,[sp, #0x180]
7101e0ce40  add x8,sp,#0xd0
7101e0ce44  add x8,x8,#0x90
7101e0ce48  cmp x8,x0
7101e0ce4c  b.eq 0x7101e0ce60
7101e0ce50  cbz x0,0x7101e0ce6c
7101e0ce54  ldr x8,[x0]
7101e0ce58  ldr x8,[x8, #0x28]
7101e0ce5c  b 0x7101e0ce68
7101e0ce60  ldr x8,[x0]
7101e0ce64  ldr x8,[x8, #0x20]
7101e0ce68  blr x8
7101e0ce6c  ldr x0,[sp, #0x150]
7101e0ce70  add x8,sp,#0xd0
7101e0ce74  add x8,x8,#0x60
7101e0ce78  cmp x8,x0
7101e0ce7c  b.eq 0x7101e0ce90
7101e0ce80  cbz x0,0x7101e0ce9c
7101e0ce84  ldr x8,[x0]
7101e0ce88  ldr x8,[x8, #0x28]
7101e0ce8c  b 0x7101e0ce98
7101e0ce90  ldr x8,[x0]
7101e0ce94  ldr x8,[x8, #0x20]
7101e0ce98  blr x8
7101e0ce9c  ldr x0,[sp, #0x120]
7101e0cea0  add x8,sp,#0xd0
7101e0cea4  add x8,x8,#0x30
7101e0cea8  cmp x8,x0
7101e0ceac  b.eq 0x7101e0cec0
7101e0ceb0  cbz x0,0x7101e0cecc
7101e0ceb4  ldr x8,[x0]
7101e0ceb8  ldr x8,[x8, #0x28]
7101e0cebc  b 0x7101e0cec8
7101e0cec0  ldr x8,[x0]
7101e0cec4  ldr x8,[x8, #0x20]
7101e0cec8  blr x8
7101e0cecc  ldr x0,[x19, #0x518]
7101e0ced0  adrp x1,0x710428f000
7101e0ced4  add x1,x1,#0xf7d
7101e0ced8  bl 0x7103778760
7101e0cedc  ldr x0,[sp, #0x28]
7101e0cee0  adrp x1,0x71042b4000
7101e0cee4  add x1,x1,#0xa2f
7101e0cee8  add x8,sp,#0xd0
7101e0ceec  bl 0x7103776640
7101e0cef0  ldr x21,[sp, #0xd8]
7101e0cef4  ldr x8,[x21, #0x8]
7101e0cef8  cbz x8,0x7101e0cf10
7101e0cefc  ldr x8,[x8, #0x18]
7101e0cf00  cbz x8,0x7101e0cf10
7101e0cf04  ldrb w9,[x8, #0x58]
7101e0cf08  orr w9,w9,#0x1
7101e0cf0c  strb w9,[x8, #0x58]
7101e0cf10  ldrb w8,[x19, #0x599]
7101e0cf14  cbz w8,0x7101e0cf70
7101e0cf18  ldrb w8,[x19, #0x598]
7101e0cf1c  cbz w8,0x7101e0cf90
7101e0cf20  mov w8,#0x1
7101e0cf24  strb w8,[x19, #0x598]
7101e0cf28  adrp x8,0x710523d000
7101e0cf2c  add x8,x8,#0x988
7101e0cf30  stp x8,xzr,[sp, #0xd0]
7101e0cf34  cbz x21,0x7101e0cf50
7101e0cf38  ldr x0,[x21, #0x18]
7101e0cf3c  stp x27,xzr,[x21, #0x10]
7101e0cf40  cbz x0,0x7101e0cf48
7101e0cf44  bl 0x710392eb40
7101e0cf48  mov x0,x21
7101e0cf4c  bl 0x710392eb40
7101e0cf50  add sp,sp,#0x230
7101e0cf54  ldp x29,x30,[sp, #0x50]
7101e0cf58  ldp x20,x19,[sp, #0x40]
7101e0cf5c  ldp x22,x21,[sp, #0x30]
7101e0cf60  ldp x24,x23,[sp, #0x20]
7101e0cf64  ldp x26,x25,[sp, #0x10]
7101e0cf68  ldp x28,x27,[sp], #0x60
7101e0cf6c  ret
7101e0cf70  ldr x0,[sp, #0x28]
7101e0cf74  adrp x1,0x71042b4000
7101e0cf78  add x1,x1,#0x86a
7101e0cf7c  bl 0x7103778430
7101e0cf80  mov w8,#0x1
7101e0cf84  strb w8,[x19, #0x599]
7101e0cf88  ldrb w8,[x19, #0x598]
7101e0cf8c  cbnz w8,0x7101e0cf20
7101e0cf90  ldr x0,[x19, #0x518]
7101e0cf94  fmov s0,0x3f800000
7101e0cf98  adrp x1,0x7104292000
7101e0cf9c  add x1,x1,#0x1b0
7101e0cfa0  bl 0x7103778300
7101e0cfa4  b 0x7101e0cf20
7101e0cfa8  mov x0,x22
7101e0cfac  str x22,[sp, #0xa8]
7101e0cfb0  cbnz x0,0x7101e0cd7c
7101e0cfb4  b 0x7101e0cd80
7101e0cfb8  bl 0x71039c2650
7101e0cfbc  ldr x0,[sp, #0x10]
7101e0cfc0  bl 0x71039c0c00
7101e0cfc4  add x0,sp,#0x88
7101e0cfc8  bl 0x71039c0c00
7101e0cfcc  mov x0,x23
7101e0cfd0  bl 0x71039c0c00
7101e0cfd4  add x0,x9,#0x608
7101e0cfd8  bl 0x71039c1330
7101e0cfdc  add x0,sp,#0x40
7101e0cfe0  bl 0x71039c0c00
