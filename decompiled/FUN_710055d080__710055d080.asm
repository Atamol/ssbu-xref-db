// addr:      710055d080
// offset:    0x55d080
// name:      FUN_710055d080
// mangled:   
// size:      19000

710055d080  stp x28,x27,[sp, #-0x60]!
710055d084  stp x26,x25,[sp, #0x10]
710055d088  stp x24,x23,[sp, #0x20]
710055d08c  stp x22,x21,[sp, #0x30]
710055d090  stp x20,x19,[sp, #0x40]
710055d094  stp x29,x30,[sp, #0x50]
710055d098  add x29,sp,#0x50
710055d09c  sub sp,sp,#0x4d0
710055d0a0  adrp x22,0x7105332000
710055d0a4  ldr x20,[x22, #0xf20]
710055d0a8  ldr x9,[x20, #0x78]
710055d0ac  ldr x9,[x9]
710055d0b0  ldp x10,x9,[x9, #0x50]
710055d0b4  ldr w11,[x10, #0x4]
710055d0b8  mov x8,#0x6a9b
710055d0bc  movk x8,#0x38c6, LSL #16
710055d0c0  movk x8,#0x24, LSL #32
710055d0c4  udiv x12,x8,x11
710055d0c8  msub x11,x12,x11,x8
710055d0cc  add x10,x10,x11, LSL #0x3
710055d0d0  ldp w12,w11,[x10, #0x8]
710055d0d4  add x9,x9,x12, LSL #0x3
710055d0d8  add x10,x9,x11, LSL #0x3
710055d0dc  cbz w11,0x710055d110
710055d0e0  cmp x11,#0x0
710055d0e4  cinc x12,x11,lt
710055d0e8  asr x12,x12,#0x1
710055d0ec  add x13,x9,x12, LSL #0x3
710055d0f0  ldr x14,[x13], #0x8
710055d0f4  and x14,x14,#0xffffffffff
710055d0f8  mvn x15,x12
710055d0fc  add x11,x11,x15
710055d100  cmp x14,x8
710055d104  csel x11,x11,x12,cc
710055d108  csel x9,x13,x9,cc
710055d10c  cbnz x11,0x710055d0e0
710055d110  cmp x9,x10
710055d114  b.eq 0x710055d134
710055d118  ldr x9,[x9]
710055d11c  and x10,x9,#0xffffffffff
710055d120  cmp x10,x8
710055d124  lsr x23,x9,#0x28
710055d128  orr w24,wzr,#0xffffff
710055d12c  ccmp w23,w24,#0x4,eq
710055d130  b.ne 0x710055f8a0
710055d134  adrp x8,0x7105334000
710055d138  ldr x9,[x8, #0x920]
710055d13c  cbnz x9,0x710055da78
710055d140  mov w0,#0x10
710055d144  mov w1,#0x8
710055d148  bl 0x710392e290
710055d14c  cbnz x0,0x710055d194
710055d150  adrp x8,0x7105332000
710055d154  ldr x0,[x8, #0xf00]
710055d158  cbz x0,0x710055d190
710055d15c  mov w8,#0x8
710055d160  str wzr,[sp, #0x3b8]
710055d164  add x1,sp,#0x3b8
710055d168  str x8,[sp, #0x108]
710055d16c  ldr x8,[x0]
710055d170  ldr x8,[x8, #0x30]
710055d174  add x2,sp,#0x108
710055d178  blr x8
710055d17c  tbz w0,#0x0,0x710055d190
710055d180  mov w0,#0x10
710055d184  mov w1,#0x8
710055d188  bl 0x710392e290
710055d18c  cbnz x0,0x710055d194
710055d190  mov x0,xzr
710055d194  mov w21,#0x9890
710055d198  movk w21,#0x1, LSL #16
710055d19c  str x0,[sp, #0x68]
710055d1a0  mov w0,#0x10
710055d1a4  mov x1,x21
710055d1a8  bl 0x710392e290
710055d1ac  mov x27,x0
710055d1b0  cbnz x0,0x710055d1f8
710055d1b4  adrp x8,0x7105332000
710055d1b8  ldr x0,[x8, #0xf00]
710055d1bc  cbz x0,0x710055d1f4
710055d1c0  str wzr,[sp, #0x3b8]
710055d1c4  str x21,[sp, #0x108]
710055d1c8  ldr x8,[x0]
710055d1cc  ldr x8,[x8, #0x30]
710055d1d0  add x1,sp,#0x3b8
710055d1d4  add x2,sp,#0x108
710055d1d8  blr x8
710055d1dc  tbz w0,#0x0,0x710055d1f4
710055d1e0  mov w0,#0x10
710055d1e4  mov x1,x21
710055d1e8  bl 0x710392e290
710055d1ec  mov x27,x0
710055d1f0  cbnz x0,0x710055d1f8
710055d1f4  mov x27,xzr
710055d1f8  orr w2,wzr,#0x18000
710055d1fc  mov x0,x27
710055d200  mov w1,wzr
710055d204  bl 0x71039c02a0
710055d208  adrp x8,0x7104468000
710055d20c  ldr q0,[x8, #0xca0]
710055d210  adrp x9,0x710446a000
710055d214  str q0,[sp, #0xb0]
710055d218  ldr q0,[x9, #0x360]
710055d21c  adrp x10,0x7104465000
710055d220  adrp x8,0x710446a000
710055d224  str q0,[sp, #0xa0]
710055d228  ldr q0,[x10, #0x6b0]
710055d22c  adrp x19,0x71052a8000
710055d230  mov x25,#0x1fca
710055d234  movk x25,#0x1ed9, LSL #16
710055d238  add x21,x27,#0x18, LSL #12
710055d23c  mov w23,#0xffffffff
710055d240  str q0,[sp, #0x90]
710055d244  ldr q0,[x8, #0x350]
710055d248  adrp x8,0x7104466000
710055d24c  orr w24,wzr,#0x3f800000
710055d250  str q0,[sp, #0x80]
710055d254  ldr q0,[x8, #0x2b0]
710055d258  adrp x8,0x7104465000
710055d25c  movk x25,#0x3, LSL #32
710055d260  str q0,[sp, #0xc0]
710055d264  ldr q0,[x8, #0xfb0]
710055d268  mov x22,#-0x1
710055d26c  mov w26,#0x100
710055d270  str q0,[sp, #0x70]
710055d274  ldr x19,[x19, #0xa80]
710055d278  mov x20,x27
710055d27c  str xzr,[x20, #0x10]
710055d280  str xzr,[x20, #0x20]
710055d284  add x28,x20,#0x2e8
710055d288  stp xzr,xzr,[x20, #0x38]
710055d28c  adrp x8,0x71052a8000
710055d290  mov x9,#0x1000000
710055d294  movk x9,#0x1, LSL #32
710055d298  str xzr,[x20, #0x58]
710055d29c  stp xzr,xzr,[x20, #0x60]
710055d2a0  ldp q1,q0,[sp, #0xa0]
710055d2a4  stp q0,q1,[x20, #0x80]
710055d2a8  ldp q3,q2,[sp, #0x80]
710055d2ac  stp w23,w23,[x20, #0x50]
710055d2b0  str xzr,[x20]
710055d2b4  str xzr,[x20, #0x190]
710055d2b8  str w23,[x20, #0x1d8]
710055d2bc  str xzr,[x20, #0x1e0]
710055d2c0  str w23,[x20, #0x1e8]
710055d2c4  str xzr,[x20, #0x1f0]
710055d2c8  str w23,[x20, #0x1f8]
710055d2cc  str xzr,[x20, #0x200]
710055d2d0  str w23,[x20, #0x208]
710055d2d4  str xzr,[x20, #0x210]
710055d2d8  str w23,[x20, #0x218]
710055d2dc  str xzr,[x20, #0x220]
710055d2e0  str w23,[x20, #0x228]
710055d2e4  str xzr,[x20, #0x230]
710055d2e8  str w23,[x20, #0x238]
710055d2ec  str xzr,[x20, #0x240]
710055d2f0  str w23,[x20, #0x248]
710055d2f4  str xzr,[x20, #0x250]
710055d2f8  str w23,[x20, #0x258]
710055d2fc  str xzr,[x20, #0x2f0]
710055d300  str xzr,[x20, #0x2e8]
710055d304  str x28,[x20, #0x2e0]
710055d308  str w24,[x20, #0x140]
710055d30c  str w24,[x20, #0x144]
710055d310  str w24,[x20, #0x148]
710055d314  str w24,[x20, #0x14c]
710055d318  str w24,[x20, #0x150]
710055d31c  str w24,[x20, #0x154]
710055d320  str w24,[x20, #0x158]
710055d324  str w24,[x20, #0x15c]
710055d328  str w24,[x20, #0x160]
710055d32c  str w24,[x20, #0x164]
710055d330  str w24,[x20, #0x168]
710055d334  str w24,[x20, #0x16c]
710055d338  str xzr,[x20, #0x48]
710055d33c  str wzr,[x20, #0x28]
710055d340  str wzr,[x20, #0x8]
710055d344  str xzr,[x20, #0x2b8]
710055d348  stp xzr,xzr,[x20, #0x1c8]
710055d34c  stp xzr,xzr,[x20, #0x1b8]
710055d350  stp xzr,xzr,[x20, #0x1a8]
710055d354  stp xzr,xzr,[x20, #0x198]
710055d358  stp q2,q3,[x20, #0xa0]
710055d35c  stp q0,q1,[x20, #0xc0]
710055d360  stp q2,q3,[x20, #0xe0]
710055d364  ldr q0,[sp, #0xc0]
710055d368  fmov s2,wzr
710055d36c  stp xzr,xzr,[x20, #0x130]
710055d370  str q0,[x20, #0x100]
710055d374  stp xzr,xzr,[x20, #0x120]
710055d378  stp xzr,xzr,[x20, #0x110]
710055d37c  ldr x8,[x8, #0xa88]
710055d380  ldr q0,[x8]
710055d384  ext v1.16B,v0.16B,v0.16B,0x8
710055d388  orr x8,xzr,#0x3f8000003f800000
710055d38c  mov v1.S[0x1],v2.S[0x0]
710055d390  mov v0.D[0x1],v1.D[0x0]
710055d394  str q0,[x20, #0x1a0]
710055d398  ldr q0,[sp, #0x70]
710055d39c  str q0,[x20, #0x180]
710055d3a0  ldr q0,[x19]
710055d3a4  str x8,[x20, #0x260]
710055d3a8  add x8,x20,#0x2d1
710055d3ac  str w24,[x20, #0x78]
710055d3b0  str xzr,[x20, #0x268]
710055d3b4  str wzr,[x20, #0x280]
710055d3b8  strb wzr,[x20, #0x2c8]
710055d3bc  stp xzr,xzr,[x20, #0x1c0]
710055d3c0  str q0,[x20, #0x170]
710055d3c4  str x9,[x8]
710055d3c8  add x8,x20,#0x2c9
710055d3cc  add x9,x20,#0x2a4
710055d3d0  str xzr,[x8]
710055d3d4  orr x8,xzr,#0x3f80000000000000
710055d3d8  str x8,[x20, #0x278]
710055d3dc  add x8,x20,#0x284
710055d3e0  str xzr,[x20, #0x70]
710055d3e4  str x24,[x20, #0x270]
710055d3e8  str xzr,[x20, #0x30]
710055d3ec  str x25,[x20, #0x60]
710055d3f0  str xzr,[x8]
710055d3f4  add x8,x20,#0x28c
710055d3f8  str x22,[x9]
710055d3fc  add x9,x20,#0x29c
710055d400  str x22,[x9]
710055d404  add x9,x20,#0x294
710055d408  str x22,[x8]
710055d40c  add x8,x20,#0x2ac
710055d410  str x22,[x9]
710055d414  str xzr,[x8]
710055d418  add x8,x20,#0x2d9
710055d41c  str wzr,[x20, #0x2b4]
710055d420  str wzr,[x20, #0x2c0]
710055d424  str w23,[x20, #0xc]
710055d428  str w26,[x8]
710055d42c  ldr x0,[x20, #0x2e8]
710055d430  bl 0x710356ce80
710055d434  str xzr,[x20, #0x2f0]
710055d438  str x28,[x20, #0x2e0]
710055d43c  str xzr,[x20, #0x2e8]
710055d440  str xzr,[x20, #0x18]
710055d444  str wzr,[x20, #0x2c4]
710055d448  add x20,x20,#0x300
710055d44c  cmp x20,x21
710055d450  b.ne 0x710055d27c
710055d454  mov w2,#0x13b0
710055d458  mov x0,x21
710055d45c  mov w1,wzr
710055d460  bl 0x71039c02a0
710055d464  mov w8,#0x93b0
710055d468  movk w8,#0x1, LSL #16
710055d46c  mov w10,#0x8004
710055d470  movk w10,#0x1, LSL #16
710055d474  add x9,x27,x8
710055d478  add x10,x27,x10
710055d47c  mov x11,#-0x13b0
710055d480  mov w12,#0x13b4
710055d484  mov w13,#0x93d8
710055d488  movk w13,#0x1, LSL #16
710055d48c  orr x14,xzr,#0xffffff00ffffff
710055d490  mov w15,#0x13cc
710055d494  mov w16,#0x13c4
710055d498  mov w17,#0x13bc
710055d49c  mov w18,#0x1434
710055d4a0  mov w0,#0x142c
710055d4a4  mov w1,#0x1424
710055d4a8  mov w2,#0x141c
710055d4ac  mov w3,#0x1414
710055d4b0  mov w4,#0x140c
710055d4b4  mov w5,#0x1404
710055d4b8  mov w6,#0x13fc
710055d4bc  mov w7,#0x13f4
710055d4c0  mov w19,#0x13ec
710055d4c4  mov w20,#0x13e4
710055d4c8  mov w21,#0x93e0
710055d4cc  movk w21,#0x1, LSL #16
710055d4d0  mov w23,#0x144c
710055d4d4  mov w24,#0x1444
710055d4d8  mov w25,#0x143c
710055d4dc  add x26,x10,x11
710055d4e0  add x28,x27,x11
710055d4e4  adds x11,x11,#0xa8
710055d4e8  str xzr,[x26, x12, LSL #0x0]
710055d4ec  str x14,[x28, x13, LSL #0x0]
710055d4f0  str xzr,[x26, x15, LSL #0x0]
710055d4f4  str xzr,[x26, x16, LSL #0x0]
710055d4f8  str xzr,[x26, x17, LSL #0x0]
710055d4fc  str xzr,[x26, x18, LSL #0x0]
710055d500  str xzr,[x26, x0, LSL #0x0]
710055d504  str xzr,[x26, x1, LSL #0x0]
710055d508  str xzr,[x26, x2, LSL #0x0]
710055d50c  str xzr,[x26, x3, LSL #0x0]
710055d510  str xzr,[x26, x4, LSL #0x0]
710055d514  str xzr,[x26, x5, LSL #0x0]
710055d518  str xzr,[x26, x6, LSL #0x0]
710055d51c  str xzr,[x26, x7, LSL #0x0]
710055d520  str xzr,[x26, x19, LSL #0x0]
710055d524  str xzr,[x26, x20, LSL #0x0]
710055d528  str x22,[x28, x8, LSL #0x0]
710055d52c  str wzr,[x28, x21, LSL #0x0]
710055d530  strb wzr,[x26, x23, LSL ]
710055d534  str xzr,[x26, x24, LSL #0x0]
710055d538  str xzr,[x26, x25, LSL #0x0]
710055d53c  b.ne 0x710055d4dc
710055d540  stp xzr,xzr,[x9, #0x10]
710055d544  mov w10,#0x93d0
710055d548  movk w10,#0x1, LSL #16
710055d54c  orr w8,wzr,#0x3f800000
710055d550  mov w11,#0x101
710055d554  stp xzr,xzr,[x9]
710055d558  mov w9,#0x93f0
710055d55c  movk w9,#0x1, LSL #16
710055d560  str w8,[x27, x10, LSL #0x0]
710055d564  str xzr,[x27, x9, LSL #0x0]
710055d568  mov w9,#0x93e8
710055d56c  movk w9,#0x1, LSL #16
710055d570  str xzr,[x27, x9, LSL #0x0]
710055d574  mov w9,#0x93e0
710055d578  movk w9,#0x1, LSL #16
710055d57c  orr x10,xzr,#0x800000000
710055d580  str xzr,[x27, x9, LSL #0x0]
710055d584  mov w9,#0x93d8
710055d588  movk w9,#0x1, LSL #16
710055d58c  str xzr,[x27, x9, LSL #0x0]
710055d590  mov w9,#0x93f8
710055d594  movk w9,#0x1, LSL #16
710055d598  ldr q0,[sp, #0xc0]
710055d59c  str w8,[x27, x9, LSL #0x0]
710055d5a0  mov w9,#0x9468
710055d5a4  movk w9,#0x1, LSL #16
710055d5a8  str wzr,[x27, x9, LSL #0x0]
710055d5ac  mov w9,#0x9460
710055d5b0  movk w9,#0x1, LSL #16
710055d5b4  str xzr,[x27, x9, LSL #0x0]
710055d5b8  mov w9,#0x9458
710055d5bc  movk w9,#0x1, LSL #16
710055d5c0  str xzr,[x27, x9, LSL #0x0]
710055d5c4  mov w9,#0x9450
710055d5c8  movk w9,#0x1, LSL #16
710055d5cc  str xzr,[x27, x9, LSL #0x0]
710055d5d0  mov w9,#0x9448
710055d5d4  movk w9,#0x1, LSL #16
710055d5d8  str xzr,[x27, x9, LSL #0x0]
710055d5dc  mov w9,#0x9440
710055d5e0  movk w9,#0x1, LSL #16
710055d5e4  str xzr,[x27, x9, LSL #0x0]
710055d5e8  mov w9,#0x9438
710055d5ec  movk w9,#0x1, LSL #16
710055d5f0  str xzr,[x27, x9, LSL #0x0]
710055d5f4  mov w9,#0x9430
710055d5f8  movk w9,#0x1, LSL #16
710055d5fc  str xzr,[x27, x9, LSL #0x0]
710055d600  mov w9,#0x9428
710055d604  movk w9,#0x1, LSL #16
710055d608  str xzr,[x27, x9, LSL #0x0]
710055d60c  mov w9,#0x9420
710055d610  movk w9,#0x1, LSL #16
710055d614  str xzr,[x27, x9, LSL #0x0]
710055d618  mov w9,#0x9418
710055d61c  movk w9,#0x1, LSL #16
710055d620  str xzr,[x27, x9, LSL #0x0]
710055d624  mov w9,#0x9410
710055d628  movk w9,#0x1, LSL #16
710055d62c  str xzr,[x27, x9, LSL #0x0]
710055d630  mov w9,#0x9408
710055d634  movk w9,#0x1, LSL #16
710055d638  str xzr,[x27, x9, LSL #0x0]
710055d63c  mov w9,#0x9400
710055d640  movk w9,#0x1, LSL #16
710055d644  str xzr,[x27, x9, LSL #0x0]
710055d648  mov w9,#0x9478
710055d64c  movk w9,#0x1, LSL #16
710055d650  str xzr,[x27, x9, LSL #0x0]
710055d654  mov w9,#0x9470
710055d658  movk w9,#0x1, LSL #16
710055d65c  str xzr,[x27, x9, LSL #0x0]
710055d660  mov w9,#0x9480
710055d664  movk w9,#0x1, LSL #16
710055d668  str x10,[x27, x9, LSL #0x0]
710055d66c  mov w10,#0x94b0
710055d670  movk w10,#0x1, LSL #16
710055d674  mov w9,#0x9498
710055d678  movk w9,#0x1, LSL #16
710055d67c  str xzr,[x27, x10, LSL #0x0]
710055d680  mov w10,#0x94a8
710055d684  movk w10,#0x1, LSL #16
710055d688  str xzr,[x27, x10, LSL #0x0]
710055d68c  mov w10,#0x94a0
710055d690  movk w10,#0x1, LSL #16
710055d694  str xzr,[x27, x10, LSL #0x0]
710055d698  mov w10,#0x9490
710055d69c  movk w10,#0x1, LSL #16
710055d6a0  str xzr,[x27, x10, LSL #0x0]
710055d6a4  mov w10,#0x9488
710055d6a8  movk w10,#0x1, LSL #16
710055d6ac  str xzr,[x27, x10, LSL #0x0]
710055d6b0  mov w10,#0x1
710055d6b4  str xzr,[x27, x9, LSL #0x0]
710055d6b8  strh w10,[x27, x9, LSL #0x0]
710055d6bc  mov w9,#0x949a
710055d6c0  movk w9,#0x1, LSL #16
710055d6c4  strb wzr,[x27, x9, LSL ]
710055d6c8  mov w9,#0x94b8
710055d6cc  movk w9,#0x1, LSL #16
710055d6d0  str xzr,[x27, x9, LSL #0x0]
710055d6d4  mov w9,#0x94c0
710055d6d8  movk w9,#0x1, LSL #16
710055d6dc  strh w11,[x27, x9, LSL #0x0]
710055d6e0  mov w9,#0x94c2
710055d6e4  movk w9,#0x1, LSL #16
710055d6e8  mov w11,#0x94d8
710055d6ec  movk w11,#0x1, LSL #16
710055d6f0  strb wzr,[x27, x9, LSL ]
710055d6f4  mov w9,#0x94d0
710055d6f8  movk w9,#0x1, LSL #16
710055d6fc  str xzr,[x27, x9, LSL #0x0]
710055d700  mov w9,#0x94c8
710055d704  movk w9,#0x1, LSL #16
710055d708  str xzr,[x27, x9, LSL #0x0]
710055d70c  adrp x9,0x7105230000
710055d710  add x9,x9,#0x138
710055d714  str x9,[x27, x11, LSL #0x0]
710055d718  mov w9,#0x94f8
710055d71c  movk w9,#0x1, LSL #16
710055d720  str xzr,[x27, x9, LSL #0x0]
710055d724  mov w9,#0x94f0
710055d728  movk w9,#0x1, LSL #16
710055d72c  str xzr,[x27, x9, LSL #0x0]
710055d730  mov w9,#0x94e8
710055d734  movk w9,#0x1, LSL #16
710055d738  str xzr,[x27, x9, LSL #0x0]
710055d73c  mov w9,#0x94e0
710055d740  movk w9,#0x1, LSL #16
710055d744  str xzr,[x27, x9, LSL #0x0]
710055d748  strb w10,[x27, x9, LSL ]
710055d74c  mov w9,#0x94e1
710055d750  movk w9,#0x1, LSL #16
710055d754  strb wzr,[x27, x9, LSL ]
710055d758  mov w9,#0x94e2
710055d75c  movk w9,#0x1, LSL #16
710055d760  strb wzr,[x27, x9, LSL ]
710055d764  mov w9,#0x9518
710055d768  movk w9,#0x1, LSL #16
710055d76c  str xzr,[x27, x9, LSL #0x0]
710055d770  mov w9,#0x9510
710055d774  movk w9,#0x1, LSL #16
710055d778  str xzr,[x27, x9, LSL #0x0]
710055d77c  mov w9,#0x9508
710055d780  movk w9,#0x1, LSL #16
710055d784  str xzr,[x27, x9, LSL #0x0]
710055d788  mov w9,#0x9500
710055d78c  movk w9,#0x1, LSL #16
710055d790  str xzr,[x27, x9, LSL #0x0]
710055d794  mov w9,#0x9520
710055d798  movk w9,#0x1, LSL #16
710055d79c  str w8,[x27, x9, LSL #0x0]
710055d7a0  mov w8,#0x9540
710055d7a4  movk w8,#0x1, LSL #16
710055d7a8  mov w9,#0x9528
710055d7ac  movk w9,#0x1, LSL #16
710055d7b0  str xzr,[x27, x8, LSL #0x0]
710055d7b4  mov w8,#0x9538
710055d7b8  movk w8,#0x1, LSL #16
710055d7bc  str xzr,[x27, x8, LSL #0x0]
710055d7c0  mov w8,#0x9530
710055d7c4  movk w8,#0x1, LSL #16
710055d7c8  str xzr,[x27, x8, LSL #0x0]
710055d7cc  adrp x8,0x710522f000
710055d7d0  add x8,x8,#0xea0
710055d7d4  str x8,[x27, x9, LSL #0x0]
710055d7d8  mov w9,#0x9548
710055d7dc  movk w9,#0x1, LSL #16
710055d7e0  str xzr,[x27, x9, LSL #0x0]
710055d7e4  mov w9,#0x9568
710055d7e8  movk w9,#0x1, LSL #16
710055d7ec  str xzr,[x27, x9, LSL #0x0]
710055d7f0  mov w9,#0x9560
710055d7f4  movk w9,#0x1, LSL #16
710055d7f8  str xzr,[x27, x9, LSL #0x0]
710055d7fc  mov w9,#0x9558
710055d800  movk w9,#0x1, LSL #16
710055d804  str xzr,[x27, x9, LSL #0x0]
710055d808  mov w9,#0x9550
710055d80c  movk w9,#0x1, LSL #16
710055d810  str x8,[x27, x9, LSL #0x0]
710055d814  mov w9,#0x9570
710055d818  movk w9,#0x1, LSL #16
710055d81c  str xzr,[x27, x9, LSL #0x0]
710055d820  mov w9,#0x9590
710055d824  movk w9,#0x1, LSL #16
710055d828  str xzr,[x27, x9, LSL #0x0]
710055d82c  mov w9,#0x9588
710055d830  movk w9,#0x1, LSL #16
710055d834  str xzr,[x27, x9, LSL #0x0]
710055d838  mov w9,#0x9580
710055d83c  movk w9,#0x1, LSL #16
710055d840  str xzr,[x27, x9, LSL #0x0]
710055d844  mov w9,#0x9578
710055d848  movk w9,#0x1, LSL #16
710055d84c  str x8,[x27, x9, LSL #0x0]
710055d850  mov w9,#0x9598
710055d854  movk w9,#0x1, LSL #16
710055d858  str xzr,[x27, x9, LSL #0x0]
710055d85c  mov w9,#0x95b8
710055d860  movk w9,#0x1, LSL #16
710055d864  str xzr,[x27, x9, LSL #0x0]
710055d868  mov w9,#0x95b0
710055d86c  movk w9,#0x1, LSL #16
710055d870  str xzr,[x27, x9, LSL #0x0]
710055d874  mov w9,#0x95a8
710055d878  movk w9,#0x1, LSL #16
710055d87c  str xzr,[x27, x9, LSL #0x0]
710055d880  mov w9,#0x95a0
710055d884  movk w9,#0x1, LSL #16
710055d888  str x8,[x27, x9, LSL #0x0]
710055d88c  mov w9,#0x95c0
710055d890  movk w9,#0x1, LSL #16
710055d894  str xzr,[x27, x9, LSL #0x0]
710055d898  mov w9,#0x95e0
710055d89c  movk w9,#0x1, LSL #16
710055d8a0  str xzr,[x27, x9, LSL #0x0]
710055d8a4  mov w9,#0x95d8
710055d8a8  movk w9,#0x1, LSL #16
710055d8ac  str xzr,[x27, x9, LSL #0x0]
710055d8b0  mov w9,#0x95d0
710055d8b4  movk w9,#0x1, LSL #16
710055d8b8  str xzr,[x27, x9, LSL #0x0]
710055d8bc  mov w9,#0x95c8
710055d8c0  movk w9,#0x1, LSL #16
710055d8c4  str x8,[x27, x9, LSL #0x0]
710055d8c8  mov w9,#0x95e8
710055d8cc  movk w9,#0x1, LSL #16
710055d8d0  str xzr,[x27, x9, LSL #0x0]
710055d8d4  mov w9,#0x9608
710055d8d8  movk w9,#0x1, LSL #16
710055d8dc  str xzr,[x27, x9, LSL #0x0]
710055d8e0  mov w9,#0x9600
710055d8e4  movk w9,#0x1, LSL #16
710055d8e8  str xzr,[x27, x9, LSL #0x0]
710055d8ec  mov w9,#0x95f8
710055d8f0  movk w9,#0x1, LSL #16
710055d8f4  str xzr,[x27, x9, LSL #0x0]
710055d8f8  mov w9,#0x95f0
710055d8fc  movk w9,#0x1, LSL #16
710055d900  str x8,[x27, x9, LSL #0x0]
710055d904  mov w9,#0x9610
710055d908  movk w9,#0x1, LSL #16
710055d90c  str xzr,[x27, x9, LSL #0x0]
710055d910  mov w9,#0x9630
710055d914  movk w9,#0x1, LSL #16
710055d918  str xzr,[x27, x9, LSL #0x0]
710055d91c  mov w9,#0x9628
710055d920  movk w9,#0x1, LSL #16
710055d924  str xzr,[x27, x9, LSL #0x0]
710055d928  mov w9,#0x9620
710055d92c  movk w9,#0x1, LSL #16
710055d930  str xzr,[x27, x9, LSL #0x0]
710055d934  mov w9,#0x9618
710055d938  movk w9,#0x1, LSL #16
710055d93c  str x8,[x27, x9, LSL #0x0]
710055d940  mov w9,#0x9638
710055d944  movk w9,#0x1, LSL #16
710055d948  str xzr,[x27, x9, LSL #0x0]
710055d94c  mov w9,#0x9658
710055d950  movk w9,#0x1, LSL #16
710055d954  str xzr,[x27, x9, LSL #0x0]
710055d958  mov w9,#0x9650
710055d95c  movk w9,#0x1, LSL #16
710055d960  str xzr,[x27, x9, LSL #0x0]
710055d964  mov w9,#0x9648
710055d968  movk w9,#0x1, LSL #16
710055d96c  str xzr,[x27, x9, LSL #0x0]
710055d970  mov w9,#0x9640
710055d974  movk w9,#0x1, LSL #16
710055d978  str x8,[x27, x9, LSL #0x0]
710055d97c  mov w8,#0x9660
710055d980  movk w8,#0x1, LSL #16
710055d984  adrp x9,0x710522f000
710055d988  add x9,x9,#0xfe0
710055d98c  str xzr,[x27, x8, LSL #0x0]
710055d990  mov w8,#0x9680
710055d994  movk w8,#0x1, LSL #16
710055d998  str xzr,[x27, x8, LSL #0x0]
710055d99c  mov w8,#0x9678
710055d9a0  movk w8,#0x1, LSL #16
710055d9a4  str xzr,[x27, x8, LSL #0x0]
710055d9a8  mov w8,#0x9670
710055d9ac  movk w8,#0x1, LSL #16
710055d9b0  str xzr,[x27, x8, LSL #0x0]
710055d9b4  mov w8,#0x9668
710055d9b8  movk w8,#0x1, LSL #16
710055d9bc  str x9,[x27, x8, LSL #0x0]
710055d9c0  ldr x9,[sp, #0x68]
710055d9c4  mov w8,#0x96a0
710055d9c8  movk w8,#0x1, LSL #16
710055d9cc  str xzr,[x27, x8, LSL #0x0]
710055d9d0  mov w8,#0x9698
710055d9d4  movk w8,#0x1, LSL #16
710055d9d8  str xzr,[x27, x8, LSL #0x0]
710055d9dc  mov w8,#0x9690
710055d9e0  movk w8,#0x1, LSL #16
710055d9e4  str xzr,[x27, x8, LSL #0x0]
710055d9e8  mov w8,#0x9688
710055d9ec  movk w8,#0x1, LSL #16
710055d9f0  str xzr,[x27, x8, LSL #0x0]
710055d9f4  mov w8,#0x9830
710055d9f8  movk w8,#0x1, LSL #16
710055d9fc  strb wzr,[x27, x8, LSL ]
710055da00  mov w8,#0x9878
710055da04  movk w8,#0x1, LSL #16
710055da08  str xzr,[x27, x8, LSL #0x0]
710055da0c  mov w8,#0x9870
710055da10  movk w8,#0x1, LSL #16
710055da14  str xzr,[x27, x8, LSL #0x0]
710055da18  mov w8,#0x9868
710055da1c  movk w8,#0x1, LSL #16
710055da20  str xzr,[x27, x8, LSL #0x0]
710055da24  mov w8,#0x9860
710055da28  movk w8,#0x1, LSL #16
710055da2c  str xzr,[x27, x8, LSL #0x0]
710055da30  mov w8,#0x9858
710055da34  movk w8,#0x1, LSL #16
710055da38  str xzr,[x27, x8, LSL #0x0]
710055da3c  mov w8,#0x9850
710055da40  movk w8,#0x1, LSL #16
710055da44  str xzr,[x27, x8, LSL #0x0]
710055da48  mov w8,#0x9848
710055da4c  movk w8,#0x1, LSL #16
710055da50  str xzr,[x27, x8, LSL #0x0]
710055da54  mov w8,#0x9840
710055da58  movk w8,#0x1, LSL #16
710055da5c  str xzr,[x27, x8, LSL #0x0]
710055da60  mov w8,#0x9880
710055da64  movk w8,#0x1, LSL #16
710055da68  str q0,[x27,x8]
710055da6c  adrp x8,0x7105334000
710055da70  str x27,[x9]
710055da74  str x9,[x8, #0x920]
710055da78  adrp x8,0x71052b9000
710055da7c  ldr x8,[x8, #0x380]
710055da80  ldr x21,[x9]
710055da84  ldp w20,w23,[x8, #0x18]
710055da88  ldr w19,[x8, #0x20]
710055da8c  mov w8,#0x93d8
710055da90  movk w8,#0x1, LSL #16
710055da94  mov w0,#0x10
710055da98  mov w1,#0x4000000
710055da9c  add x22,x21,x8
710055daa0  bl 0x710392e290
710055daa4  cbnz x0,0x710055daec
710055daa8  adrp x8,0x7105332000
710055daac  ldr x0,[x8, #0xf00]
710055dab0  cbz x0,0x710055dae8
710055dab4  mov w8,#0x4000000
710055dab8  str wzr,[sp, #0x3b8]
710055dabc  add x1,sp,#0x3b8
710055dac0  str x8,[sp, #0x108]
710055dac4  ldr x8,[x0]
710055dac8  ldr x8,[x8, #0x30]
710055dacc  add x2,sp,#0x108
710055dad0  blr x8
710055dad4  tbz w0,#0x0,0x710055dae8
710055dad8  mov w0,#0x10
710055dadc  mov w1,#0x4000000
710055dae0  bl 0x710392e290
710055dae4  cbnz x0,0x710055daec
710055dae8  mov x0,xzr
710055daec  mov w8,#0x94c8
710055daf0  movk w8,#0x1, LSL #16
710055daf4  adrp x9,0x7105336000
710055daf8  str x0,[x21, x8, LSL #0x0]
710055dafc  adrp x8,0x7105230000
710055db00  add x8,x8,#0x168
710055db04  str x8,[sp, #0x3b8]
710055db08  mov w8,#0x400
710055db0c  str w8,[sp, #0x3f8]
710055db10  mov x8,#0x1
710055db14  movk x8,#0x101, LSL #32
710055db18  str x8,[sp, #0x400]
710055db1c  mov w8,#0x40
710055db20  str w8,[sp, #0x3e8]
710055db24  ldr x8,[x9, #0xe08]
710055db28  mov w9,#0x94d8
710055db2c  movk w9,#0x1, LSL #16
710055db30  add x9,x21,x9
710055db34  str x9,[sp, #0x3c8]
710055db38  str x9,[sp, #0x3d0]
710055db3c  str x8,[sp, #0x3c0]
710055db40  mov w8,#0x40000
710055db44  str w23,[sp, #0x3d8]
710055db48  mov w23,#0x1
710055db4c  strb w23,[sp, #0x3fc]
710055db50  str x8,[sp, #0x3f0]
710055db54  mov w8,#0x800000
710055db58  mov w1,#0x1708
710055db5c  mov w0,#0x10
710055db60  add x28,sp,#0x358
710055db64  str w20,[sp, #0x3dc]
710055db68  str w19,[sp, #0x3e0]
710055db6c  str w19,[sp, #0x3e4]
710055db70  str x8,[sp, #0x408]
710055db74  bl 0x710392e290
710055db78  mov x19,x0
710055db7c  cbnz x0,0x710055dbc8
710055db80  adrp x8,0x7105332000
710055db84  ldr x0,[x8, #0xf00]
710055db88  cbz x0,0x710055dbc4
710055db8c  mov w8,#0x1708
710055db90  str wzr,[sp, #0x358]
710055db94  add x1,sp,#0x358
710055db98  str x8,[sp, #0x108]
710055db9c  ldr x8,[x0]
710055dba0  ldr x8,[x8, #0x30]
710055dba4  add x2,sp,#0x108
710055dba8  blr x8
710055dbac  tbz w0,#0x0,0x710055dbc4
710055dbb0  mov w1,#0x1708
710055dbb4  mov w0,#0x10
710055dbb8  bl 0x710392e290
710055dbbc  mov x19,x0
710055dbc0  cbnz x0,0x710055dbc8
710055dbc4  mov x19,xzr
710055dbc8  add x1,sp,#0x3b8
710055dbcc  mov x0,x19
710055dbd0  bl 0x71000a3d30
710055dbd4  mov w20,#0x94d0
710055dbd8  movk w20,#0x1, LSL #16
710055dbdc  mov w8,#0x1700
710055dbe0  adrp x1,0x71035b9000
710055dbe4  add x1,x1,#0x360
710055dbe8  mov x0,x19
710055dbec  mov x2,xzr
710055dbf0  str x19,[x21, x20, LSL #0x0]
710055dbf4  strb w23,[x19, x8, LSL ]
710055dbf8  bl 0x71000a6c20
710055dbfc  ldr x0,[x21, x20, LSL #0x0]
710055dc00  adrp x1,0x71035b9000
710055dc04  add x1,x1,#0x420
710055dc08  mov x2,xzr
710055dc0c  bl 0x71000a6c30
710055dc10  ldr x9,[x21, x20, LSL #0x0]
710055dc14  adrp x8,0x7103570000
710055dc18  add x8,x8,#0xd90
710055dc1c  str x8,[x9, #0x8f0]
710055dc20  adrp x8,0x7103570000
710055dc24  add x8,x8,#0xfc0
710055dc28  str x8,[x9, #0x918]
710055dc2c  adrp x8,0x7103572000
710055dc30  add x8,x8,#0x90
710055dc34  str x8,[x9, #0x920]
710055dc38  adrp x8,0x7103571000
710055dc3c  add x8,x8,#0x110
710055dc40  str x8,[x9, #0x928]
710055dc44  adrp x8,0x7100086000
710055dc48  add x8,x8,#0xd40
710055dc4c  strb w23,[x9, #0x8c8]
710055dc50  str xzr,[x9, #0x8e8]
710055dc54  str xzr,[x9, #0x910]
710055dc58  str xzr,[x9, #0x908]
710055dc5c  str xzr,[x9, #0x900]
710055dc60  adrp x10,0x7103571000
710055dc64  add x10,x10,#0x520
710055dc68  adrp x11,0x7103571000
710055dc6c  add x11,x11,#0x620
710055dc70  str xzr,[x9, #0x8f8]
710055dc74  orr w24,wzr,#0x3f800000
710055dc78  str xzr,[x9, #0x930]
710055dc7c  adrp x13,0x7105334000
710055dc80  add x13,x13,#0xa80
710055dc84  str x8,[x9, #0x8e0]
710055dc88  ldr x9,[x21, x20, LSL #0x0]
710055dc8c  strb w23,[x9, #0x8c9]
710055dc90  str xzr,[x9, #0x940]
710055dc94  str x10,[x9, #0x948]
710055dc98  adrp x10,0x7103572000
710055dc9c  add x10,x10,#0x60
710055dca0  add x0,sp,#0x108
710055dca4  str xzr,[x9, #0x988]
710055dca8  str xzr,[x9, #0x980]
710055dcac  str xzr,[x9, #0x978]
710055dcb0  str xzr,[x9, #0x970]
710055dcb4  str xzr,[x9, #0x968]
710055dcb8  str xzr,[x9, #0x960]
710055dcbc  str xzr,[x9, #0x958]
710055dcc0  str xzr,[x9, #0x950]
710055dcc4  str x8,[x9, #0x938]
710055dcc8  ldr x9,[x21, x20, LSL #0x0]
710055dccc  strb w23,[x9, #0x8ca]
710055dcd0  str xzr,[x9, #0x9a0]
710055dcd4  str xzr,[x9, #0x998]
710055dcd8  str x10,[x9, #0x9a8]
710055dcdc  adrp x10,0x7103571000
710055dce0  add x10,x10,#0x5a0
710055dce4  str xzr,[x9, #0x9e0]
710055dce8  str xzr,[x9, #0x9d8]
710055dcec  str xzr,[x9, #0x9d0]
710055dcf0  str xzr,[x9, #0x9c8]
710055dcf4  str xzr,[x9, #0x9c0]
710055dcf8  str xzr,[x9, #0x9b8]
710055dcfc  str xzr,[x9, #0x9b0]
710055dd00  str x8,[x9, #0x990]
710055dd04  ldr x9,[x21, x20, LSL #0x0]
710055dd08  str x10,[x9, #0x9f0]
710055dd0c  adrp x10,0x7103571000
710055dd10  add x10,x10,#0x710
710055dd14  str x10,[x9, #0xa20]
710055dd18  adrp x10,0x7103571000
710055dd1c  add x10,x10,#0x810
710055dd20  strb w23,[x9, #0x8cb]
710055dd24  str x11,[x9, #0x9f8]
710055dd28  str xzr,[x9, #0xa18]
710055dd2c  str xzr,[x9, #0xa10]
710055dd30  str xzr,[x9, #0xa08]
710055dd34  str xzr,[x9, #0xa00]
710055dd38  str xzr,[x9, #0xa28]
710055dd3c  str x10,[x9, #0xa30]
710055dd40  adrp x10,0x710355a000
710055dd44  add x10,x10,#0x8a0
710055dd48  str xzr,[x9, #0xa38]
710055dd4c  str x8,[x9, #0x9e8]
710055dd50  ldr x9,[x21, x20, LSL #0x0]
710055dd54  strb w23,[x9, #0x8d0]
710055dd58  str xzr,[x9, #0xbe8]
710055dd5c  str xzr,[x9, #0xbe0]
710055dd60  str xzr,[x9, #0xbd8]
710055dd64  str xzr,[x9, #0xbd0]
710055dd68  str xzr,[x9, #0xbc8]
710055dd6c  str xzr,[x9, #0xbc0]
710055dd70  str xzr,[x9, #0xbb8]
710055dd74  str xzr,[x9, #0xbb0]
710055dd78  str xzr,[x9, #0xba8]
710055dd7c  str x10,[x9, #0xbf0]
710055dd80  str x8,[x9, #0xba0]
710055dd84  ldr x9,[x21, x20, LSL #0x0]
710055dd88  strb w23,[x9, #0x8d5]
710055dd8c  str xzr,[x9, #0xda0]
710055dd90  str xzr,[x9, #0xd98]
710055dd94  str xzr,[x9, #0xd90]
710055dd98  str xzr,[x9, #0xd88]
710055dd9c  str xzr,[x9, #0xd80]
710055dda0  str xzr,[x9, #0xd78]
710055dda4  str xzr,[x9, #0xd70]
710055dda8  str xzr,[x9, #0xd68]
710055ddac  str xzr,[x9, #0xd60]
710055ddb0  str x10,[x9, #0xda8]
710055ddb4  str x8,[x9, #0xd58]
710055ddb8  ldr x9,[x21, x20, LSL #0x0]
710055ddbc  strb w23,[x9, #0x8d6]
710055ddc0  str xzr,[x9, #0xdf8]
710055ddc4  str xzr,[x9, #0xdf0]
710055ddc8  str xzr,[x9, #0xde8]
710055ddcc  str xzr,[x9, #0xde0]
710055ddd0  str xzr,[x9, #0xdd8]
710055ddd4  str xzr,[x9, #0xdd0]
710055ddd8  str xzr,[x9, #0xdc8]
710055dddc  str xzr,[x9, #0xdc0]
710055dde0  str xzr,[x9, #0xdb8]
710055dde4  str x10,[x9, #0xe00]
710055dde8  str x8,[x9, #0xdb0]
710055ddec  ldr x9,[x21, x20, LSL #0x0]
710055ddf0  strb w23,[x9, #0x8d7]
710055ddf4  str xzr,[x9, #0xe50]
710055ddf8  str xzr,[x9, #0xe48]
710055ddfc  str xzr,[x9, #0xe40]
710055de00  str xzr,[x9, #0xe38]
710055de04  str xzr,[x9, #0xe30]
710055de08  str xzr,[x9, #0xe28]
710055de0c  str xzr,[x9, #0xe20]
710055de10  str xzr,[x9, #0xe18]
710055de14  str xzr,[x9, #0xe10]
710055de18  str x10,[x9, #0xe58]
710055de1c  str x8,[x9, #0xe08]
710055de20  ldr x9,[x21, x20, LSL #0x0]
710055de24  strb w23,[x9, #0x8d8]
710055de28  str xzr,[x9, #0xea8]
710055de2c  str xzr,[x9, #0xea0]
710055de30  str xzr,[x9, #0xe98]
710055de34  str xzr,[x9, #0xe90]
710055de38  str xzr,[x9, #0xe88]
710055de3c  str xzr,[x9, #0xe80]
710055de40  str xzr,[x9, #0xe78]
710055de44  str xzr,[x9, #0xe70]
710055de48  str xzr,[x9, #0xe68]
710055de4c  str x10,[x9, #0xeb0]
710055de50  adrp x10,0x710355a000
710055de54  add x10,x10,#0x980
710055de58  str x8,[x9, #0xe60]
710055de5c  ldr x9,[x21, x20, LSL #0x0]
710055de60  strb w23,[x9, #0x8d4]
710055de64  str xzr,[x9, #0xd48]
710055de68  str xzr,[x9, #0xd40]
710055de6c  str xzr,[x9, #0xd38]
710055de70  str xzr,[x9, #0xd30]
710055de74  str xzr,[x9, #0xd28]
710055de78  str xzr,[x9, #0xd20]
710055de7c  str xzr,[x9, #0xd18]
710055de80  str xzr,[x9, #0xd10]
710055de84  str xzr,[x9, #0xd08]
710055de88  str x10,[x9, #0xd50]
710055de8c  adrp x10,0x710355a000
710055de90  add x10,x10,#0xc40
710055de94  str x8,[x9, #0xd00]
710055de98  ldr x9,[x21, x20, LSL #0x0]
710055de9c  strb w23,[x9, #0x8d6]
710055dea0  str xzr,[x9, #0xdf8]
710055dea4  str xzr,[x9, #0xdf0]
710055dea8  str xzr,[x9, #0xde8]
710055deac  str xzr,[x9, #0xde0]
710055deb0  str xzr,[x9, #0xdd8]
710055deb4  str xzr,[x9, #0xdd0]
710055deb8  str xzr,[x9, #0xdc8]
710055debc  str xzr,[x9, #0xdc0]
710055dec0  str xzr,[x9, #0xdb8]
710055dec4  str x10,[x9, #0xe00]
710055dec8  adrp x10,0x710355a000
710055decc  add x10,x10,#0xcc0
710055ded0  str x8,[x9, #0xdb0]
710055ded4  ldr x9,[x21, x20, LSL #0x0]
710055ded8  str x8,[x9, #0xe08]
710055dedc  adrp x8,0x7104468000
710055dee0  ldr q1,[x8, #0xca0]
710055dee4  adrp x8,0x710446a000
710055dee8  ldr q0,[x8, #0x360]
710055deec  adrp x8,0x7104465000
710055def0  strb w23,[x9, #0x8d7]
710055def4  str xzr,[x9, #0xe50]
710055def8  str xzr,[x9, #0xe48]
710055defc  str xzr,[x9, #0xe40]
710055df00  str xzr,[x9, #0xe38]
710055df04  str xzr,[x9, #0xe30]
710055df08  str xzr,[x9, #0xe28]
710055df0c  str xzr,[x9, #0xe20]
710055df10  str xzr,[x9, #0xe18]
710055df14  str xzr,[x9, #0xe10]
710055df18  str x10,[x9, #0xe58]
710055df1c  adrp x9,0x7105334000
710055df20  add x9,x9,#0xa30
710055df24  stp xzr,xzr,[x9, #0x30]
710055df28  str q1,[sp, #0xc0]
710055df2c  stp q1,q0,[x9]
710055df30  ldr q0,[x8, #0x6b0]
710055df34  adrp x8,0x7105230000
710055df38  str w24,[x8, #0x300]
710055df3c  mov x8,#0x8000000080
710055df40  str q0,[x9, #0x20]
710055df44  adrp x9,0x7105334000
710055df48  add x9,x9,#0xa00
710055df4c  str x8,[x9]
710055df50  adrp x8,0x7105334000
710055df54  adrp x9,0x7105230000
710055df58  add x9,x9,#0x2f0
710055df5c  strb wzr,[x8, #0xa70]
710055df60  adrp x8,0x7105334000
710055df64  strb wzr,[x8, #0xa74]
710055df68  adrp x8,0x7105334000
710055df6c  strb wzr,[x8, #0xa78]
710055df70  adrp x8,0x7105334000
710055df74  strb wzr,[x8, #0xa7c]
710055df78  orr x8,xzr,#0x3f8000003f800000
710055df7c  stp x8,x8,[x9]
710055df80  adrp x8,0x71052a8000
710055df84  ldr x8,[x8, #0xaf0]
710055df88  ldp x9,x10,[x8]
710055df8c  ldp x11,x12,[x8, #0x10]
710055df90  stp x11,x12,[x13, #0x10]
710055df94  stp x9,x10,[x13]
710055df98  ldp x9,x10,[x8, #0x20]
710055df9c  ldp x11,x8,[x8, #0x30]
710055dfa0  stp x11,x8,[x13, #0x30]
710055dfa4  adrp x8,0x7105230000
710055dfa8  stp x9,x10,[x13, #0x20]
710055dfac  adrp x9,0x71052a8000
710055dfb0  ldr x9,[x9, #0xa80]
710055dfb4  ldr q0,[x9]
710055dfb8  adrp x9,0x7105334000
710055dfbc  str w24,[x8, #0x304]
710055dfc0  adrp x8,0x7105334000
710055dfc4  str q0,[x8, #0xac0]
710055dfc8  adrp x8,0x7105334000
710055dfcc  strb wzr,[x8, #0xad0]
710055dfd0  adrp x8,0x7105334000
710055dfd4  str wzr,[x8, #0xad4]
710055dfd8  ldr x8,[x21, x20, LSL #0x0]
710055dfdc  str x8,[x9, #0xad8]
710055dfe0  str xzr,[sp, #0x370]
710055dfe4  str xzr,[sp, #0x368]
710055dfe8  str xzr,[sp, #0x360]
710055dfec  str xzr,[sp, #0x358]
710055dff0  stp xzr,xzr,[sp, #0x128]
710055dff4  stp xzr,xzr,[sp, #0x118]
710055dff8  stp xzr,xzr,[sp, #0x108]
710055dffc  bl 0x7100031210
710055e000  ldrh w8,[sp, #0x10a]
710055e004  and w8,w8,#0xfffffffb
710055e008  add x0,sp,#0x358
710055e00c  add x25,sp,#0x358
710055e010  strh w8,[sp, #0x10a]
710055e014  bl 0x71000311e0
710055e018  ldrb w8,[sp, #0x358]
710055e01c  orr w8,w8,#0x1
710055e020  strb w8,[sp, #0x358]
710055e024  mov w8,#0x706
710055e028  stur w8,[x28, #0x1]
710055e02c  orr w8,wzr,#0x7
710055e030  add x0,sp,#0x108
710055e034  strb w23,[sp, #0x108]
710055e038  str x25,[sp, #0x120]
710055e03c  sturh w8,[x28, #0x5]
710055e040  bl 0x7100039590
710055e044  mov w8,#0x96a8
710055e048  movk w8,#0x1, LSL #16
710055e04c  adrp x19,0x7105334000
710055e050  add x19,x19,#0x4d8
710055e054  mov x2,x0
710055e058  add x1,x21,x8
710055e05c  mov x0,x19
710055e060  bl 0x71000395c0
710055e064  adrp x27,0x7105336000
710055e068  ldr x1,[x27, #0xe08]
710055e06c  add x2,sp,#0x108
710055e070  mov x0,x19
710055e074  bl 0x71000395e0
710055e078  mov w26,#0x800
710055e07c  add x0,sp,#0x108
710055e080  strb wzr,[sp, #0x35e]
710055e084  strh w26,[sp, #0x35c]
710055e088  strb w23,[sp, #0x108]
710055e08c  str x25,[sp, #0x120]
710055e090  bl 0x7100039590
710055e094  mov w8,#0x96c8
710055e098  movk w8,#0x1, LSL #16
710055e09c  add x20,x19,#0x28
710055e0a0  mov x2,x0
710055e0a4  add x1,x21,x8
710055e0a8  mov x0,x20
710055e0ac  bl 0x71000395c0
710055e0b0  ldr x1,[x27, #0xe08]
710055e0b4  add x2,sp,#0x108
710055e0b8  mov x0,x20
710055e0bc  bl 0x71000395e0
710055e0c0  add x0,sp,#0x108
710055e0c4  bl 0x7100031210
710055e0c8  ldrh w8,[sp, #0x10a]
710055e0cc  and w8,w8,#0xfffffffb
710055e0d0  add x0,sp,#0x358
710055e0d4  strh w8,[sp, #0x10a]
710055e0d8  bl 0x71000311e0
710055e0dc  ldrb w8,[sp, #0x358]
710055e0e0  orr w8,w8,#0x1
710055e0e4  strb w8,[sp, #0x358]
710055e0e8  mov w8,#0x106
710055e0ec  add x0,sp,#0x108
710055e0f0  sturh w23,[x28, #0x5]
710055e0f4  strb w23,[sp, #0x108]
710055e0f8  str x25,[sp, #0x120]
710055e0fc  stur w8,[x28, #0x1]
710055e100  bl 0x7100039590
710055e104  mov w8,#0x96e8
710055e108  movk w8,#0x1, LSL #16
710055e10c  add x20,x19,#0x50
710055e110  mov x2,x0
710055e114  add x1,x21,x8
710055e118  mov x0,x20
710055e11c  bl 0x71000395c0
710055e120  ldr x1,[x27, #0xe08]
710055e124  add x2,sp,#0x108
710055e128  mov x0,x20
710055e12c  bl 0x71000395e0
710055e130  add x0,sp,#0x108
710055e134  strh w26,[sp, #0x35c]
710055e138  strb wzr,[sp, #0x35e]
710055e13c  strb w23,[sp, #0x108]
710055e140  str x25,[sp, #0x120]
710055e144  bl 0x7100039590
710055e148  mov w8,#0x9708
710055e14c  movk w8,#0x1, LSL #16
710055e150  add x20,x19,#0x78
710055e154  mov x2,x0
710055e158  add x1,x21,x8
710055e15c  mov x0,x20
710055e160  bl 0x71000395c0
710055e164  ldr x1,[x27, #0xe08]
710055e168  add x2,sp,#0x108
710055e16c  mov x0,x20
710055e170  bl 0x71000395e0
710055e174  add x0,sp,#0x108
710055e178  bl 0x7100031210
710055e17c  ldrh w8,[sp, #0x10a]
710055e180  and w8,w8,#0xfffffffb
710055e184  add x0,sp,#0x358
710055e188  strh w8,[sp, #0x10a]
710055e18c  bl 0x71000311e0
710055e190  ldrb w8,[sp, #0x358]
710055e194  orr w8,w8,#0x1
710055e198  strb w8,[sp, #0x358]
710055e19c  mov w8,#0x106
710055e1a0  movk w8,#0x2, LSL #16
710055e1a4  add x0,sp,#0x108
710055e1a8  sturh w23,[x28, #0x5]
710055e1ac  strb w23,[sp, #0x108]
710055e1b0  str x25,[sp, #0x120]
710055e1b4  stur w8,[x28, #0x1]
710055e1b8  bl 0x7100039590
710055e1bc  mov w8,#0x9728
710055e1c0  movk w8,#0x1, LSL #16
710055e1c4  add x20,x19,#0xa0
710055e1c8  mov x2,x0
710055e1cc  add x1,x21,x8
710055e1d0  mov x0,x20
710055e1d4  bl 0x71000395c0
710055e1d8  ldr x1,[x27, #0xe08]
710055e1dc  add x2,sp,#0x108
710055e1e0  mov x0,x20
710055e1e4  bl 0x71000395e0
710055e1e8  add x0,sp,#0x108
710055e1ec  strh w26,[sp, #0x35c]
710055e1f0  strb wzr,[sp, #0x35e]
710055e1f4  strb w23,[sp, #0x108]
710055e1f8  str x25,[sp, #0x120]
710055e1fc  bl 0x7100039590
710055e200  mov w8,#0x9748
710055e204  movk w8,#0x1, LSL #16
710055e208  add x20,x19,#0xc8
710055e20c  mov x2,x0
710055e210  add x1,x21,x8
710055e214  mov x0,x20
710055e218  bl 0x71000395c0
710055e21c  ldr x1,[x27, #0xe08]
710055e220  add x2,sp,#0x108
710055e224  mov x0,x20
710055e228  bl 0x71000395e0
710055e22c  add x0,sp,#0x108
710055e230  bl 0x7100031210
710055e234  ldrh w8,[sp, #0x10a]
710055e238  and w8,w8,#0xfffffffb
710055e23c  add x0,sp,#0x358
710055e240  strh w8,[sp, #0x10a]
710055e244  bl 0x71000311e0
710055e248  ldrb w8,[sp, #0x358]
710055e24c  orr w8,w8,#0x1
710055e250  strb w8,[sp, #0x358]
710055e254  mov w8,#0x109
710055e258  movk w8,#0x100, LSL #16
710055e25c  add x0,sp,#0x108
710055e260  sturh w23,[x28, #0x5]
710055e264  strb w23,[sp, #0x108]
710055e268  str x25,[sp, #0x120]
710055e26c  stur w8,[x28, #0x1]
710055e270  bl 0x7100039590
710055e274  mov w8,#0x9768
710055e278  movk w8,#0x1, LSL #16
710055e27c  add x20,x19,#0xf0
710055e280  mov x2,x0
710055e284  add x1,x21,x8
710055e288  mov x0,x20
710055e28c  bl 0x71000395c0
710055e290  ldr x1,[x27, #0xe08]
710055e294  add x2,sp,#0x108
710055e298  mov x0,x20
710055e29c  bl 0x71000395e0
710055e2a0  add x0,sp,#0x108
710055e2a4  strh wzr,[sp, #0x35c]
710055e2a8  strb wzr,[sp, #0x35e]
710055e2ac  strb w23,[sp, #0x108]
710055e2b0  str x25,[sp, #0x120]
710055e2b4  bl 0x7100039590
710055e2b8  mov w8,#0x9788
710055e2bc  movk w8,#0x1, LSL #16
710055e2c0  add x20,x19,#0x118
710055e2c4  mov x2,x0
710055e2c8  add x1,x21,x8
710055e2cc  mov x0,x20
710055e2d0  bl 0x71000395c0
710055e2d4  ldr x1,[x27, #0xe08]
710055e2d8  add x2,sp,#0x108
710055e2dc  mov x0,x20
710055e2e0  bl 0x71000395e0
710055e2e4  add x0,sp,#0x108
710055e2e8  bl 0x7100031210
710055e2ec  ldrh w8,[sp, #0x10a]
710055e2f0  and w8,w8,#0xfffffffb
710055e2f4  add x0,sp,#0x358
710055e2f8  strh w8,[sp, #0x10a]
710055e2fc  bl 0x71000311e0
710055e300  ldrb w8,[sp, #0x358]
710055e304  orr w8,w8,#0x1
710055e308  strb w8,[sp, #0x358]
710055e30c  mov w8,#0x809
710055e310  movk w8,#0x100, LSL #16
710055e314  add x0,sp,#0x108
710055e318  sturh w23,[x28, #0x5]
710055e31c  strb w23,[sp, #0x108]
710055e320  str x25,[sp, #0x120]
710055e324  stur w8,[x28, #0x1]
710055e328  bl 0x7100039590
710055e32c  mov w8,#0x97a8
710055e330  movk w8,#0x1, LSL #16
710055e334  add x20,x19,#0x140
710055e338  mov x2,x0
710055e33c  add x1,x21,x8
710055e340  mov x0,x20
710055e344  bl 0x71000395c0
710055e348  ldr x1,[x27, #0xe08]
710055e34c  add x2,sp,#0x108
710055e350  mov x0,x20
710055e354  bl 0x71000395e0
710055e358  add x0,sp,#0x108
710055e35c  strh wzr,[sp, #0x35c]
710055e360  strb wzr,[sp, #0x35e]
710055e364  strb w23,[sp, #0x108]
710055e368  str x25,[sp, #0x120]
710055e36c  bl 0x7100039590
710055e370  mov w8,#0x97c8
710055e374  movk w8,#0x1, LSL #16
710055e378  add x20,x19,#0x168
710055e37c  mov x2,x0
710055e380  add x1,x21,x8
710055e384  mov x0,x20
710055e388  bl 0x71000395c0
710055e38c  ldr x1,[x27, #0xe08]
710055e390  add x2,sp,#0x108
710055e394  mov x0,x20
710055e398  bl 0x71000395e0
710055e39c  add x0,sp,#0x108
710055e3a0  bl 0x7100031210
710055e3a4  ldrh w8,[sp, #0x10a]
710055e3a8  and w8,w8,#0xfffffffb
710055e3ac  add x0,sp,#0x358
710055e3b0  strh w8,[sp, #0x10a]
710055e3b4  bl 0x71000311e0
710055e3b8  ldrb w8,[sp, #0x358]
710055e3bc  orr w8,w8,#0x1
710055e3c0  strb w8,[sp, #0x358]
710055e3c4  mov w8,#0x1
710055e3c8  movk w8,#0x100, LSL #16
710055e3cc  add x0,sp,#0x108
710055e3d0  sturh wzr,[x28, #0x5]
710055e3d4  strb w23,[sp, #0x108]
710055e3d8  str x25,[sp, #0x120]
710055e3dc  stur w8,[x28, #0x1]
710055e3e0  bl 0x7100039590
710055e3e4  mov w8,#0x97e8
710055e3e8  movk w8,#0x1, LSL #16
710055e3ec  add x20,x19,#0x190
710055e3f0  mov x2,x0
710055e3f4  add x1,x21,x8
710055e3f8  mov x0,x20
710055e3fc  bl 0x71000395c0
710055e400  ldr x1,[x27, #0xe08]
710055e404  add x2,sp,#0x108
710055e408  mov x0,x20
710055e40c  bl 0x71000395e0
710055e410  add x0,sp,#0x108
710055e414  strh wzr,[sp, #0x35c]
710055e418  strb wzr,[sp, #0x35e]
710055e41c  strb w23,[sp, #0x108]
710055e420  str x25,[sp, #0x120]
710055e424  bl 0x7100039590
710055e428  mov w8,#0x9808
710055e42c  movk w8,#0x1, LSL #16
710055e430  add x19,x19,#0x1b8
710055e434  mov x2,x0
710055e438  add x1,x21,x8
710055e43c  mov x0,x19
710055e440  bl 0x71000395c0
710055e444  ldr x1,[x27, #0xe08]
710055e448  add x2,sp,#0x108
710055e44c  mov x0,x19
710055e450  bl 0x71000395e0
710055e454  add x0,sp,#0x108
710055e458  stp xzr,xzr,[sp, #0x138]
710055e45c  stp xzr,xzr,[sp, #0x128]
710055e460  stp xzr,xzr,[sp, #0x118]
710055e464  stp xzr,xzr,[sp, #0x108]
710055e468  bl 0x7100031250
710055e46c  mov w8,#0x1003
710055e470  strh w8,[sp, #0x108]
710055e474  ldrh w9,[sp, #0x10c]
710055e478  ldp x8,x10,[sp, #0x120]
710055e47c  ldr x1,[x27, #0xe08]
710055e480  and w9,w9,#0xfff8
710055e484  stp x8,x10,[sp, #0x110]
710055e488  mov w8,#0x1005
710055e48c  add x10,sp,#0x14
710055e490  adrp x19,0x7105334000
710055e494  add x19,x19,#0x6b8
710055e498  mov x0,x19
710055e49c  sturh w8,[x10, #0xff]
710055e4a0  orr w8,w9,#0x4
710055e4a4  add x2,sp,#0x108
710055e4a8  strh w8,[sp, #0x10c]
710055e4ac  bl 0x7100039820
710055e4b0  ldrh w8,[sp, #0x10c]
710055e4b4  ldr x1,[x27, #0xe08]
710055e4b8  add x0,x19,#0x1c
710055e4bc  orr w8,w8,#0x1
710055e4c0  add x2,sp,#0x108
710055e4c4  strh w8,[sp, #0x10c]
710055e4c8  bl 0x7100039820
710055e4cc  ldrh w8,[sp, #0x10c]
710055e4d0  ldr x1,[x27, #0xe08]
710055e4d4  add x0,x19,#0x38
710055e4d8  orr w8,w8,#0x2
710055e4dc  add x2,sp,#0x108
710055e4e0  strh w8,[sp, #0x10c]
710055e4e4  bl 0x7100039820
710055e4e8  adrp x8,0x7104465000
710055e4ec  ldr q0,[x8, #0xa00]
710055e4f0  adrp x9,0x7105334000
710055e4f4  add x9,x9,#0x7c0
710055e4f8  adrp x8,0x7104465000
710055e4fc  str q0,[x9]
710055e500  ldr q0,[x8, #0xa10]
710055e504  mov w8,#0x9480
710055e508  movk w8,#0x1, LSL #16
710055e50c  str q0,[x9, #0x20]
710055e510  ldr q0,[sp, #0xc0]
710055e514  str q0,[x9, #0x30]
710055e518  str wzr,[x21, x8, LSL #0x0]
710055e51c  mov w8,#0x9494
710055e520  movk w8,#0x1, LSL #16
710055e524  str wzr,[x21, x8, LSL #0x0]
710055e528  mov w8,#0x9488
710055e52c  movk w8,#0x1, LSL #16
710055e530  str xzr,[x21, x8, LSL #0x0]
710055e534  adrp x8,0x7105230000
710055e538  str w24,[x8, #0x178]
710055e53c  ldr x8,[x22, #0x18]
710055e540  cbz x8,0x710055e5f4
710055e544  ldr x0,[x22, #0x10]
710055e548  cbz x0,0x710055e55c
710055e54c  ldr x19,[x0]
710055e550  bl 0x710392eb40
710055e554  mov x0,x19
710055e558  cbnz x19,0x710055e54c
710055e55c  str xzr,[x22, #0x10]
710055e560  mov w8,#0x93e0
710055e564  movk w8,#0x1, LSL #16
710055e568  ldr x10,[x21, x8, LSL #0x0]
710055e56c  cbz x10,0x710055e5f0
710055e570  sub x9,x10,#0x1
710055e574  and x8,x10,#0x3
710055e578  cmp x9,#0x3
710055e57c  b.cs 0x710055e58c
710055e580  mov x9,xzr
710055e584  cbnz x8,0x710055e5d4
710055e588  b 0x710055e5f0
710055e58c  mov x9,xzr
710055e590  sub x10,x10,x8
710055e594  ldr x11,[x22]
710055e598  lsl x12,x9,#0x3
710055e59c  add x9,x9,#0x4
710055e5a0  str xzr,[x11, x12, LSL #0x0]
710055e5a4  ldr x11,[x22]
710055e5a8  add x11,x11,x12
710055e5ac  str xzr,[x11, #0x8]
710055e5b0  ldr x11,[x22]
710055e5b4  add x11,x11,x12
710055e5b8  str xzr,[x11, #0x10]
710055e5bc  ldr x11,[x22]
710055e5c0  add x11,x11,x12
710055e5c4  cmp x10,x9
710055e5c8  str xzr,[x11, #0x18]
710055e5cc  b.ne 0x710055e594
710055e5d0  cbz x8,0x710055e5f0
710055e5d4  lsl x9,x9,#0x3
710055e5d8  neg x8,x8
710055e5dc  ldr x10,[x22]
710055e5e0  str xzr,[x10, x9, LSL #0x0]
710055e5e4  add x9,x9,#0x8
710055e5e8  adds x8,x8,#0x1
710055e5ec  b.ne 0x710055e5dc
710055e5f0  str xzr,[x22, #0x18]
710055e5f4  mov x8,#0xcdef
710055e5f8  movk x8,#0xcdef, LSL #16
710055e5fc  mov w10,#0x9460
710055e600  movk w10,#0x1, LSL #16
710055e604  mov x9,xzr
710055e608  add x20,sp,#0x108
710055e60c  movk x8,#0xcdef, LSL #32
710055e610  movk x8,#0xcdef, LSL #48
710055e614  str x21,[x21, x10, LSL #0x0]
710055e618  mov x10,x21
710055e61c  str w9,[x10]
710055e620  add x9,x9,#0x1
710055e624  add x11,x10,#0x300
710055e628  cmp x9,#0x7f
710055e62c  stp x8,x11,[x10, #0x38]
710055e630  mov x10,x11
710055e634  b.ne 0x710055e61c
710055e638  mov w9,#0x7d00
710055e63c  movk w9,#0x1, LSL #16
710055e640  orr w10,wzr,#0x7f
710055e644  str w10,[x21, x9, LSL #0x0]
710055e648  mov w9,#0x7d40
710055e64c  movk w9,#0x1, LSL #16
710055e650  str xzr,[x21, x9, LSL #0x0]
710055e654  mov w9,#0x7d38
710055e658  movk w9,#0x1, LSL #16
710055e65c  adrp x19,0x7105336000
710055e660  str x8,[x21, x9, LSL #0x0]
710055e664  mov w8,#0x9468
710055e668  movk w8,#0x1, LSL #16
710055e66c  mov w9,#0x80
710055e670  str w9,[x21, x8, LSL #0x0]
710055e674  mov w8,#0x9458
710055e678  movk w8,#0x1, LSL #16
710055e67c  str xzr,[x21, x8, LSL #0x0]
710055e680  mov w8,#0x9450
710055e684  movk w8,#0x1, LSL #16
710055e688  str xzr,[x21, x8, LSL #0x0]
710055e68c  mov w8,#0x9448
710055e690  movk w8,#0x1, LSL #16
710055e694  str xzr,[x21, x8, LSL #0x0]
710055e698  mov w8,#0x9440
710055e69c  movk w8,#0x1, LSL #16
710055e6a0  str xzr,[x21, x8, LSL #0x0]
710055e6a4  mov w8,#0x9438
710055e6a8  movk w8,#0x1, LSL #16
710055e6ac  str xzr,[x21, x8, LSL #0x0]
710055e6b0  mov w8,#0x9430
710055e6b4  movk w8,#0x1, LSL #16
710055e6b8  str xzr,[x21, x8, LSL #0x0]
710055e6bc  mov w8,#0x9428
710055e6c0  movk w8,#0x1, LSL #16
710055e6c4  str xzr,[x21, x8, LSL #0x0]
710055e6c8  mov w8,#0x9420
710055e6cc  movk w8,#0x1, LSL #16
710055e6d0  str xzr,[x21, x8, LSL #0x0]
710055e6d4  mov w8,#0x9418
710055e6d8  movk w8,#0x1, LSL #16
710055e6dc  str xzr,[x21, x8, LSL #0x0]
710055e6e0  mov w8,#0x9410
710055e6e4  movk w8,#0x1, LSL #16
710055e6e8  str xzr,[x21, x8, LSL #0x0]
710055e6ec  mov w8,#0x9408
710055e6f0  movk w8,#0x1, LSL #16
710055e6f4  str xzr,[x21, x8, LSL #0x0]
710055e6f8  mov w8,#0x9400
710055e6fc  movk w8,#0x1, LSL #16
710055e700  str xzr,[x21, x8, LSL #0x0]
710055e704  ldr x0,[x19, #0xdb8]
710055e708  cbnz x0,0x710055e828
710055e70c  mov w1,#0x188
710055e710  mov w0,#0x10
710055e714  bl 0x710392e290
710055e718  cbnz x0,0x710055e760
710055e71c  adrp x8,0x7105332000
710055e720  ldr x0,[x8, #0xf00]
710055e724  cbz x0,0x710055e75c
710055e728  mov w8,#0x188
710055e72c  str wzr,[sp, #0x358]
710055e730  add x1,sp,#0x358
710055e734  str x8,[sp, #0x108]
710055e738  ldr x8,[x0]
710055e73c  ldr x8,[x8, #0x30]
710055e740  add x2,sp,#0x108
710055e744  blr x8
710055e748  tbz w0,#0x0,0x710055e75c
710055e74c  mov w1,#0x188
710055e750  mov w0,#0x10
710055e754  bl 0x710392e290
710055e758  cbnz x0,0x710055e760
710055e75c  mov x0,xzr
710055e760  adrp x9,0x7105231000
710055e764  add x9,x9,#0xbd0
710055e768  adrp x8,0x710522f000
710055e76c  add x8,x8,#0xfe0
710055e770  stp x9,xzr,[x0, #0xb0]
710055e774  stp x9,xzr,[x0, #0xd0]
710055e778  adrp x9,0x7105231000
710055e77c  add x9,x9,#0x8b0
710055e780  stp x8,xzr,[x0]
710055e784  str xzr,[x0, #0x80]
710055e788  str wzr,[x0, #0x140]
710055e78c  str wzr,[x0, #0x174]
710055e790  stp x8,xzr,[x0, #0x20]
710055e794  stp x8,xzr,[x0, #0x40]
710055e798  stp x8,xzr,[x0, #0x60]
710055e79c  orr w8,wzr,#0x3f800000
710055e7a0  str w8,[x0, #0xa8]
710055e7a4  str w8,[x0, #0x144]
710055e7a8  str w8,[x0, #0x148]
710055e7ac  add x8,x0,#0x14c
710055e7b0  stp x9,xzr,[x0, #0xf0]
710055e7b4  stp x9,xzr,[x0, #0x110]
710055e7b8  add x9,x0,#0x16c
710055e7bc  stp xzr,xzr,[x0, #0x10]
710055e7c0  stp xzr,xzr,[x0, #0x30]
710055e7c4  stp xzr,xzr,[x0, #0x50]
710055e7c8  stp xzr,xzr,[x0, #0x70]
710055e7cc  stp xzr,xzr,[x0, #0x98]
710055e7d0  stp xzr,xzr,[x0, #0x88]
710055e7d4  stp xzr,xzr,[x0, #0xc0]
710055e7d8  stp xzr,xzr,[x0, #0xe0]
710055e7dc  stp xzr,xzr,[x0, #0x100]
710055e7e0  stp xzr,xzr,[x0, #0x120]
710055e7e4  stp xzr,xzr,[x0, #0x130]
710055e7e8  str xzr,[x9]
710055e7ec  add x9,x0,#0x164
710055e7f0  str xzr,[x9]
710055e7f4  add x9,x0,#0x15c
710055e7f8  str xzr,[x9]
710055e7fc  add x9,x0,#0x154
710055e800  str xzr,[x8]
710055e804  mov w8,#0x1
710055e808  str xzr,[x9]
710055e80c  strb w8,[x0, #0x158]
710055e810  strb wzr,[x0, #0x159]
710055e814  strb wzr,[x0, #0x15a]
710055e818  str xzr,[x0, #0x178]
710055e81c  strb w8,[x0, #0x180]
710055e820  strb wzr,[x0, #0x181]
710055e824  str x0,[x19, #0xdb8]
710055e828  mov x19,x0
710055e82c  mov w1,#0x1a8
710055e830  mov w0,#0x10
710055e834  bl 0x710392e290
710055e838  cbnz x0,0x710055e880
710055e83c  adrp x8,0x7105332000
710055e840  ldr x0,[x8, #0xf00]
710055e844  cbz x0,0x710055e87c
710055e848  mov w8,#0x1a8
710055e84c  str wzr,[sp, #0x358]
710055e850  add x1,sp,#0x358
710055e854  str x8,[sp, #0x108]
710055e858  ldr x8,[x0]
710055e85c  ldr x8,[x8, #0x30]
710055e860  add x2,sp,#0x108
710055e864  blr x8
710055e868  tbz w0,#0x0,0x710055e87c
710055e86c  mov w1,#0x1a8
710055e870  mov w0,#0x10
710055e874  bl 0x710392e290
710055e878  cbnz x0,0x710055e880
710055e87c  mov x0,xzr
710055e880  mov w8,#0xd
710055e884  str x8,[x0]
710055e888  adrp x9,0x7105231000
710055e88c  add x9,x9,#0x730
710055e890  mov x8,x0
710055e894  add x22,sp,#0x108
710055e898  mov x28,#0xf
710055e89c  mov x21,xzr
710055e8a0  str xzr,[x0, #0x10]
710055e8a4  stp xzr,xzr,[x0, #0x18]
710055e8a8  add x23,x22,#0x19
710055e8ac  str x9,[x8, #0x8]!
710055e8b0  add x24,x22,#0x21
710055e8b4  adrp x25,0x71046fd000
710055e8b8  add x25,x25,#0x624
710055e8bc  mov w26,#0x1
710055e8c0  orr x27,xzr,#0x100000000
710055e8c4  movk x28,#0x1, LSL #32
710055e8c8  stp xzr,xzr,[x0, #0x38]
710055e8cc  stp x9,xzr,[x0, #0x28]
710055e8d0  stp xzr,xzr,[x0, #0x58]
710055e8d4  stp x9,xzr,[x0, #0x48]
710055e8d8  stp xzr,xzr,[x0, #0x78]
710055e8dc  stp x9,xzr,[x0, #0x68]
710055e8e0  stp xzr,xzr,[x0, #0x98]
710055e8e4  stp x9,xzr,[x0, #0x88]
710055e8e8  stp xzr,xzr,[x0, #0xb8]
710055e8ec  stp x9,xzr,[x0, #0xa8]
710055e8f0  stp xzr,xzr,[x0, #0xd8]
710055e8f4  stp x9,xzr,[x0, #0xc8]
710055e8f8  stp xzr,xzr,[x0, #0xf8]
710055e8fc  stp x9,xzr,[x0, #0xe8]
710055e900  stp xzr,xzr,[x0, #0x118]
710055e904  stp x9,xzr,[x0, #0x108]
710055e908  stp xzr,xzr,[x0, #0x138]
710055e90c  stp x9,xzr,[x0, #0x128]
710055e910  stp xzr,xzr,[x0, #0x158]
710055e914  stp x9,xzr,[x0, #0x148]
710055e918  stp xzr,xzr,[x0, #0x178]
710055e91c  stp x9,xzr,[x0, #0x168]
710055e920  stp xzr,xzr,[x0, #0x198]
710055e924  stp x9,xzr,[x0, #0x188]
710055e928  str x8,[x19, #0x178]
710055e92c  add x10,x22,#0x114
710055e930  str x26,[sp, #0x138]
710055e934  str x27,[sp, #0x140]
710055e938  str xzr,[sp, #0x148]
710055e93c  ldur x8,[x25, #-0x4]
710055e940  ldr w9,[x25, #0x4]
710055e944  stur x26,[x20, #0x54]
710055e948  add x0,sp,#0x358
710055e94c  add x1,sp,#0x108
710055e950  stur x28,[x20, #0x5c]
710055e954  strb wzr,[sp, #0x150]
710055e958  str wzr,[sp, #0x154]
710055e95c  strb wzr,[sp, #0x158]
710055e960  stur xzr,[x20, #0x64]
710055e964  str w26,[sp, #0x174]
710055e968  str xzr,[sp, #0x178]
710055e96c  stur x26,[x20, #0x84]
710055e970  stur x28,[x20, #0x8c]
710055e974  strb wzr,[sp, #0x180]
710055e978  str wzr,[sp, #0x184]
710055e97c  strb wzr,[sp, #0x188]
710055e980  str wzr,[sp, #0x19c]
710055e984  stp x27,xzr,[sp, #0x1a0]
710055e988  stur x26,[x20, #0xb4]
710055e98c  stur x28,[x20, #0xbc]
710055e990  strb wzr,[sp, #0x1b0]
710055e994  str wzr,[sp, #0x1b4]
710055e998  strb wzr,[sp, #0x1b8]
710055e99c  stur xzr,[x20, #0xc4]
710055e9a0  str w26,[sp, #0x1d4]
710055e9a4  str xzr,[sp, #0x1d8]
710055e9a8  stur x26,[x20, #0xe4]
710055e9ac  stur x28,[x20, #0xec]
710055e9b0  strb wzr,[sp, #0x1e0]
710055e9b4  str wzr,[sp, #0x1e4]
710055e9b8  strb wzr,[sp, #0x1e8]
710055e9bc  stur xzr,[x20, #0xf4]
710055e9c0  str w26,[sp, #0x204]
710055e9c4  str xzr,[sp, #0x208]
710055e9c8  str x26,[x10]
710055e9cc  add x10,x22,#0x11c
710055e9d0  str x28,[x10]
710055e9d4  add x10,x22,#0x124
710055e9d8  strb wzr,[sp, #0x210]
710055e9dc  str wzr,[sp, #0x214]
710055e9e0  strb wzr,[sp, #0x218]
710055e9e4  str xzr,[x10]
710055e9e8  add x10,x22,#0x144
710055e9ec  str w26,[sp, #0x234]
710055e9f0  str xzr,[sp, #0x238]
710055e9f4  str x26,[x10]
710055e9f8  add x10,x22,#0x14c
710055e9fc  str x28,[x10]
710055ea00  add x10,x22,#0x154
710055ea04  strb wzr,[sp, #0x240]
710055ea08  str wzr,[sp, #0x244]
710055ea0c  strb wzr,[sp, #0x248]
710055ea10  str xzr,[x10]
710055ea14  orr x10,xzr,#0xf00000000
710055ea18  str x8,[sp, #0x108]
710055ea1c  ldrh w8,[sp, #0x310]
710055ea20  str w9,[sp, #0x110]
710055ea24  ldrb w9,[sp, #0x312]
710055ea28  str w26,[sp, #0x264]
710055ea2c  str xzr,[sp, #0x268]
710055ea30  str w26,[sp, #0x27c]
710055ea34  str x10,[sp, #0x280]
710055ea38  strb wzr,[sp, #0x270]
710055ea3c  str wzr,[sp, #0x274]
710055ea40  strb wzr,[sp, #0x278]
710055ea44  str wzr,[sp, #0x114]
710055ea48  str x27,[sp, #0x118]
710055ea4c  strb wzr,[sp, #0x120]
710055ea50  strb w9,[x23, #0x2]
710055ea54  ldrb w9,[sp, #0x2ca]
710055ea58  strh w8,[x23]
710055ea5c  ldrh w8,[sp, #0x2c8]
710055ea60  str wzr,[sp, #0x124]
710055ea64  strb wzr,[sp, #0x128]
710055ea68  strb w9,[x24, #0x2]
710055ea6c  add x9,sp,#0x2d
710055ea70  strh w8,[x24]
710055ea74  mov w8,#0x5
710055ea78  stur x8,[x9, #0xff]
710055ea7c  orr w8,wzr,#0xf
710055ea80  str w8,[sp, #0x134]
710055ea84  bl 0x710359b630
710055ea88  ldr x8,[x19, #0x178]
710055ea8c  ldr x9,[sp, #0x368]
710055ea90  cbz x9,0x710055eac4
710055ea94  ldr x9,[x9]
710055ea98  ldr x10,[sp, #0x370]
710055ea9c  cmp x9,x10
710055eaa0  b.ne 0x710055eac4
710055eaa4  ldr x9,[sp, #0x360]
710055eaa8  add x10,x8,x21
710055eaac  str x9,[x10, #0x8]
710055eab0  cbz x9,0x710055eacc
710055eab4  ldr x9,[x9, #0x8]
710055eab8  str x9,[x10, #0x10]
710055eabc  ldr x9,[x9]
710055eac0  b 0x710055ead8
710055eac4  add x9,x8,x21
710055eac8  str xzr,[x9, #0x8]
710055eacc  add x10,x8,x21
710055ead0  mov x9,xzr
710055ead4  str xzr,[x10, #0x10]
710055ead8  add x8,x8,x21
710055eadc  add x21,x21,#0x20
710055eae0  add x25,x25,#0xc
710055eae4  cmp x21,#0x1a0
710055eae8  str x9,[x8, #0x18]
710055eaec  b.ne 0x710055e92c
710055eaf0  ldr x20,[x19, #0x80]
710055eaf4  mov x22,x19
710055eaf8  cbz x20,0x710055eb68
710055eafc  ldr x8,[x20, #0x10]
710055eb00  str x8,[sp, #0x108]
710055eb04  cbz x8,0x710055eb38
710055eb08  add x1,sp,#0x108
710055eb0c  mov w2,#0x1
710055eb10  mov x0,x20
710055eb14  bl 0x710371edf0
710055eb18  ldr x8,[x0]
710055eb1c  str x8,[sp, #0x108]
710055eb20  cbnz x8,0x710055eb08
710055eb24  ldr x20,[x22, #0x80]
710055eb28  str xzr,[x22, #0x80]
710055eb2c  cbnz x20,0x710055eb3c
710055eb30  str xzr,[x22, #0x80]
710055eb34  b 0x710055eb68
710055eb38  str xzr,[x22, #0x80]
710055eb3c  mov x0,x20
710055eb40  bl 0x710371ec70
710055eb44  mov x0,x20
710055eb48  bl 0x710392eb40
710055eb4c  ldr x20,[x22, #0x80]
710055eb50  str xzr,[x22, #0x80]
710055eb54  cbz x20,0x710055eb68
710055eb58  mov x0,x20
710055eb5c  bl 0x710371ec70
710055eb60  mov x0,x20
710055eb64  bl 0x710392eb40
710055eb68  mov w0,#0x10
710055eb6c  mov w1,#0x80
710055eb70  bl 0x710392e290
710055eb74  mov x20,x0
710055eb78  cbnz x0,0x710055ebc4
710055eb7c  adrp x8,0x7105332000
710055eb80  ldr x0,[x8, #0xf00]
710055eb84  cbz x0,0x710055ebc0
710055eb88  mov w8,#0x80
710055eb8c  str wzr,[sp, #0x358]
710055eb90  add x1,sp,#0x358
710055eb94  str x8,[sp, #0x108]
710055eb98  ldr x8,[x0]
710055eb9c  ldr x8,[x8, #0x30]
710055eba0  add x2,sp,#0x108
710055eba4  blr x8
710055eba8  tbz w0,#0x0,0x710055ebc0
710055ebac  mov w0,#0x10
710055ebb0  mov w1,#0x80
710055ebb4  bl 0x710392e290
710055ebb8  mov x20,x0
710055ebbc  cbnz x0,0x710055ebc4
710055ebc0  mov x20,xzr
710055ebc4  mov w1,#0x1
710055ebc8  mov w2,#0x800
710055ebcc  mov x0,x20
710055ebd0  bl 0x710371e260
710055ebd4  ldr x21,[x22, #0x80]
710055ebd8  str x20,[x22, #0x80]
710055ebdc  cbz x21,0x710055ebf0
710055ebe0  mov x0,x21
710055ebe4  bl 0x710371ec70
710055ebe8  mov x0,x21
710055ebec  bl 0x710392eb40
710055ebf0  ldr x8,[x22, #0xa0]
710055ebf4  cbz x8,0x710055eca0
710055ebf8  ldr x0,[x22, #0x98]
710055ebfc  cbz x0,0x710055ec10
710055ec00  ldr x19,[x0]
710055ec04  bl 0x710392eb40
710055ec08  mov x0,x19
710055ec0c  cbnz x19,0x710055ec00
710055ec10  ldr x10,[x22, #0x90]
710055ec14  str xzr,[x22, #0x98]
710055ec18  cbz x10,0x710055ec9c
710055ec1c  sub x9,x10,#0x1
710055ec20  and x8,x10,#0x3
710055ec24  cmp x9,#0x3
710055ec28  b.cs 0x710055ec38
710055ec2c  mov x9,xzr
710055ec30  cbnz x8,0x710055ec80
710055ec34  b 0x710055ec9c
710055ec38  mov x9,xzr
710055ec3c  sub x10,x10,x8
710055ec40  ldr x11,[x22, #0x88]
710055ec44  lsl x12,x9,#0x3
710055ec48  add x9,x9,#0x4
710055ec4c  str xzr,[x11, x12, LSL #0x0]
710055ec50  ldr x11,[x22, #0x88]
710055ec54  add x11,x11,x12
710055ec58  str xzr,[x11, #0x8]
710055ec5c  ldr x11,[x22, #0x88]
710055ec60  add x11,x11,x12
710055ec64  str xzr,[x11, #0x10]
710055ec68  ldr x11,[x22, #0x88]
710055ec6c  add x11,x11,x12
710055ec70  cmp x10,x9
710055ec74  str xzr,[x11, #0x18]
710055ec78  b.ne 0x710055ec40
710055ec7c  cbz x8,0x710055ec9c
710055ec80  lsl x9,x9,#0x3
710055ec84  neg x8,x8
710055ec88  ldr x10,[x22, #0x88]
710055ec8c  str xzr,[x10, x9, LSL #0x0]
710055ec90  add x9,x9,#0x8
710055ec94  adds x8,x8,#0x1
710055ec98  b.ne 0x710055ec88
710055ec9c  str xzr,[x22, #0xa0]
710055eca0  adrp x8,0x7105337000
710055eca4  ldr x19,[x8, #0x5a8]
710055eca8  adrp x8,0x7105336000
710055ecac  add x8,x8,#0xdc0
710055ecb0  ldarb w8,[x8]
710055ecb4  tbz w8,#0x0,0x7100561968
710055ecb8  adrp x8,0x7105336000
710055ecbc  add x8,x8,#0xdc8
710055ecc0  ldarb w8,[x8]
710055ecc4  tbz w8,#0x0,0x71005619d4
710055ecc8  adrp x8,0x7105336000
710055eccc  add x8,x8,#0xdd0
710055ecd0  ldarb w8,[x8]
710055ecd4  tbz w8,#0x0,0x7100561a38
710055ecd8  add x20,x19,#0x10
710055ecdc  adrp x1,0x7105336000
710055ece0  add x1,x1,#0xd40
710055ece4  mov x0,x20
710055ece8  bl 0x7103550630
710055ecec  cbz x0,0x710055ed4c
710055ecf0  ldr x8,[x0, #0x30]
710055ecf4  ldr x0,[x8, #0x40]
710055ecf8  adrp x1,0x7105336000
710055ecfc  add x1,x1,#0xd70
710055ed00  bl 0x7103556f50
710055ed04  cbz x0,0x710055ed4c
710055ed08  ldr x8,[x0, #0x38]
710055ed0c  cbz x8,0x710055ed3c
710055ed10  ldr x8,[x8]
710055ed14  ldr x9,[x0, #0x40]
710055ed18  cmp x8,x9
710055ed1c  b.ne 0x710055ed3c
710055ed20  ldr x8,[x0, #0x30]
710055ed24  str x8,[x22, #0x8]
710055ed28  cbz x8,0x710055ed40
710055ed2c  ldr x8,[x8, #0x8]
710055ed30  str x8,[x22, #0x10]
710055ed34  ldr x8,[x8]
710055ed38  b 0x710055ed48
710055ed3c  str xzr,[x22, #0x8]
710055ed40  mov x8,xzr
710055ed44  str xzr,[x22, #0x10]
710055ed48  str x8,[x22, #0x18]
710055ed4c  adrp x1,0x7105336000
710055ed50  add x1,x1,#0xd58
710055ed54  mov x0,x20
710055ed58  bl 0x7103550630
710055ed5c  cbz x0,0x710055edbc
710055ed60  ldr x8,[x0, #0x30]
710055ed64  ldr x0,[x8, #0x40]
710055ed68  adrp x1,0x7105336000
710055ed6c  add x1,x1,#0xd70
710055ed70  bl 0x7103556f50
710055ed74  cbz x0,0x710055edbc
710055ed78  ldr x8,[x0, #0x38]
710055ed7c  cbz x8,0x710055edac
710055ed80  ldr x8,[x8]
710055ed84  ldr x9,[x0, #0x40]
710055ed88  cmp x8,x9
710055ed8c  b.ne 0x710055edac
710055ed90  ldr x8,[x0, #0x30]
710055ed94  str x8,[x22, #0x28]
710055ed98  cbz x8,0x710055edb0
710055ed9c  ldr x8,[x8, #0x8]
710055eda0  str x8,[x22, #0x30]
710055eda4  ldr x8,[x8]
710055eda8  b 0x710055edb8
710055edac  str xzr,[x22, #0x28]
710055edb0  mov x8,xzr
710055edb4  str xzr,[x22, #0x30]
710055edb8  str x8,[x22, #0x38]
710055edbc  mov w1,#0x9fec
710055edc0  mov w0,#0x10
710055edc4  bl 0x710392e290
710055edc8  mov x20,x0
710055edcc  cbnz x0,0x710055ee18
710055edd0  adrp x8,0x7105332000
710055edd4  ldr x0,[x8, #0xf00]
710055edd8  cbz x0,0x710055ee14
710055eddc  mov w8,#0x9fec
710055ede0  str wzr,[sp, #0x358]
710055ede4  add x1,sp,#0x358
710055ede8  str x8,[sp, #0x108]
710055edec  ldr x8,[x0]
710055edf0  ldr x8,[x8, #0x30]
710055edf4  add x2,sp,#0x108
710055edf8  blr x8
710055edfc  tbz w0,#0x0,0x710055ee14
710055ee00  mov w1,#0x9fec
710055ee04  mov w0,#0x10
710055ee08  bl 0x710392e290
710055ee0c  mov x20,x0
710055ee10  cbnz x0,0x710055ee18
710055ee14  mov x20,xzr
710055ee18  add x8,x20,#0xa
710055ee1c  mov w9,#0x1
710055ee20  lsl w10,w9,#0x2
710055ee24  sturh w10,[x8, #-0x6]
710055ee28  sub w10,w10,#0x4
710055ee2c  orr w11,w10,#0x1
710055ee30  sturh w11,[x8, #-0x4]
710055ee34  mov w11,#0x1
710055ee38  bfm w11,w9,#0x1e,#0x1d
710055ee3c  sturh w10,[x8, #-0xa]
710055ee40  sturh w10,[x8, #-0x8]
710055ee44  sturh w11,[x8, #-0x2]
710055ee48  orr w11,w10,#0x2
710055ee4c  orr w10,w10,#0x3
710055ee50  strh w11,[x8]
710055ee54  mov w11,#0x2
710055ee58  strh w10,[x8, #0x4]
710055ee5c  orr w10,wzr,#0x3
710055ee60  bfm w11,w9,#0x1e,#0x1d
710055ee64  bfm w10,w9,#0x1e,#0x1d
710055ee68  add w9,w9,#0x1
710055ee6c  cmp w9,#0x800
710055ee70  strh w11,[x8, #0x2]
710055ee74  strh w10,[x8, #0x6]
710055ee78  strh w10,[x8, #0x8]
710055ee7c  add x8,x8,#0x14
710055ee80  b.ne 0x710055ee20
710055ee84  mov w2,#0xf20
710055ee88  add x0,sp,#0x358
710055ee8c  mov w1,#0x10
710055ee90  bl 0x710392e1f0
710055ee94  cmp w0,#0xc
710055ee98  b.ne 0x710055eed4
710055ee9c  adrp x8,0x710593d000
710055eea0  ldr x0,[x8, #0x2b0]
710055eea4  cbz x0,0x710055eed4
710055eea8  mov w8,#0xf20
710055eeac  str x8,[sp, #0x108]
710055eeb0  ldr x8,[x0]
710055eeb4  ldr x8,[x8, #0x30]
710055eeb8  add x1,sp,#0x108
710055eebc  blr x8
710055eec0  tbz w0,#0x0,0x710055eed4
710055eec4  mov w2,#0xf20
710055eec8  add x0,sp,#0x358
710055eecc  mov w1,#0x10
710055eed0  bl 0x710392e1f0
710055eed4  adrp x8,0x71052a8000
710055eed8  ldr x8,[x8, #0xa78]
710055eedc  cbz x8,0x710055eef0
710055eee0  ldr x2,[sp, #0x358]
710055eee4  mov w0,#0xf20
710055eee8  mov w1,#0x10
710055eeec  bl 0x71039c19e0
710055eef0  ldr x21,[sp, #0x358]
710055eef4  mov x0,x21
710055eef8  bl 0x71037c3a70
710055eefc  adrp x8,0x7105243000
710055ef00  add x8,x8,#0x978
710055ef04  str x8,[x21]
710055ef08  mov w8,#0x9fec
710055ef0c  str wzr,[x21, #0x10]
710055ef10  strb wzr,[x21, #0x14]
710055ef14  str xzr,[x21, #0xf18]
710055ef18  add x1,sp,#0x108
710055ef1c  mov x0,x21
710055ef20  stp x20,x8,[sp, #0x108]
710055ef24  str wzr,[sp, #0x118]
710055ef28  strb wzr,[sp, #0x15d]
710055ef2c  strb wzr,[sp, #0x11c]
710055ef30  ldr x8,[x21]
710055ef34  ldr x9,[x8, #0x10]
710055ef38  add x8,sp,#0x310
710055ef3c  blr x9
710055ef40  cbz x21,0x710055ef50
710055ef44  ldr x8,[x21, #0x8]
710055ef48  ldr x9,[x8]
710055ef4c  b 0x710055ef58
710055ef50  mov x8,xzr
710055ef54  mov x9,xzr
710055ef58  ldp x0,x10,[x22, #0xb8]
710055ef5c  stp x21,x8,[x22, #0xb8]
710055ef60  ldr x8,[x22, #0xc8]
710055ef64  str x9,[x22, #0xc8]
710055ef68  cbz x10,0x710055ef8c
710055ef6c  cbz x0,0x710055ef8c
710055ef70  ldr x9,[x10]
710055ef74  cmp x9,x8
710055ef78  b.ne 0x710055ef8c
710055ef7c  ldr x8,[x0]
710055ef80  ldr x8,[x8, #0x8]
710055ef84  blr x8
710055ef88  ldr x21,[x22, #0xb8]
710055ef8c  ldr x8,[x21]
710055ef90  ldr x9,[x8, #0x20]
710055ef94  add x8,sp,#0x358
710055ef98  mov x0,x21
710055ef9c  blr x9
710055efa0  ldr x8,[sp, #0x368]
710055efa4  cbz x8,0x710055efd4
710055efa8  ldr x8,[x8]
710055efac  ldr x9,[sp, #0x370]
710055efb0  cmp x8,x9
710055efb4  b.ne 0x710055efd4
710055efb8  ldr x8,[sp, #0x360]
710055efbc  str x8,[x22, #0xf8]
710055efc0  cbz x8,0x710055efd8
710055efc4  ldr x8,[x8, #0x8]
710055efc8  str x8,[x22, #0x100]
710055efcc  ldr x8,[x8]
710055efd0  b 0x710055efe0
710055efd4  str xzr,[x22, #0xf8]
710055efd8  mov x8,xzr
710055efdc  str xzr,[x22, #0x100]
710055efe0  add x0,sp,#0x358
710055efe4  mov w1,#0x2000
710055efe8  str x8,[x22, #0x108]
710055efec  bl 0x71035b9070
710055eff0  ldr x8,[sp, #0x360]
710055eff4  str xzr,[sp, #0x370]
710055eff8  str xzr,[sp, #0x368]
710055effc  str xzr,[sp, #0x360]
710055f000  cbz x8,0x710055f010
710055f004  ldr x9,[x8, #0x8]
710055f008  ldr x10,[x9]
710055f00c  b 0x710055f018
710055f010  mov x9,xzr
710055f014  mov x10,xzr
710055f018  ldp x0,x11,[x22, #0xd8]
710055f01c  stp x8,x9,[x22, #0xd8]
710055f020  ldr x8,[x22, #0xe8]
710055f024  str x10,[x22, #0xe8]
710055f028  cbz x11,0x710055f048
710055f02c  cbz x0,0x710055f048
710055f030  ldr x9,[x11]
710055f034  cmp x9,x8
710055f038  b.ne 0x710055f048
710055f03c  ldr x8,[x0]
710055f040  ldr x8,[x8, #0x8]
710055f044  blr x8
710055f048  adrp x8,0x7105231000
710055f04c  add x8,x8,#0xbd0
710055f050  str x8,[sp, #0x358]
710055f054  ldr x0,[x22, #0xd8]
710055f058  ldr x8,[x0]
710055f05c  ldr x9,[x8, #0x20]
710055f060  add x8,sp,#0x358
710055f064  blr x9
710055f068  ldr x8,[sp, #0x368]
710055f06c  cbz x8,0x710055f09c
710055f070  ldr x8,[x8]
710055f074  ldr x9,[sp, #0x370]
710055f078  cmp x8,x9
710055f07c  b.ne 0x710055f09c
710055f080  ldr x8,[sp, #0x360]
710055f084  str x8,[x22, #0x118]
710055f088  cbz x8,0x710055f0a0
710055f08c  ldr x8,[x8, #0x8]
710055f090  str x8,[x22, #0x120]
710055f094  ldr x8,[x8]
710055f098  b 0x710055f0a8
710055f09c  str xzr,[x22, #0x118]
710055f0a0  mov x8,xzr
710055f0a4  str xzr,[x22, #0x120]
710055f0a8  str x8,[x22, #0x128]
710055f0ac  orr w8,wzr,#0x3f800000
710055f0b0  str w8,[x22, #0x144]
710055f0b4  adrp x20,0x7105334000
710055f0b8  ldr x19,[x20, #0x948]
710055f0bc  cbnz x19,0x710055f128
710055f0c0  mov w1,#0x1370
710055f0c4  mov w0,#0x10
710055f0c8  bl 0x710392e290
710055f0cc  mov x19,x0
710055f0d0  cbnz x0,0x710055f11c
710055f0d4  adrp x8,0x7105332000
710055f0d8  ldr x0,[x8, #0xf00]
710055f0dc  cbz x0,0x710055f118
710055f0e0  mov w8,#0x1370
710055f0e4  str wzr,[sp, #0x358]
710055f0e8  add x1,sp,#0x358
710055f0ec  str x8,[sp, #0x108]
710055f0f0  ldr x8,[x0]
710055f0f4  ldr x8,[x8, #0x30]
710055f0f8  add x2,sp,#0x108
710055f0fc  blr x8
710055f100  tbz w0,#0x0,0x710055f118
710055f104  mov w1,#0x1370
710055f108  mov w0,#0x10
710055f10c  bl 0x710392e290
710055f110  mov x19,x0
710055f114  cbnz x0,0x710055f11c
710055f118  mov x19,xzr
710055f11c  mov x0,x19
710055f120  bl 0x7103564ec0
710055f124  str x19,[x20, #0x948]
710055f128  mov x0,x19
710055f12c  bl 0x71035651b0
710055f130  add x10,sp,#0xd8
710055f134  add x8,x10,#0x8
710055f138  str x8,[sp, #0x90]
710055f13c  stp xzr,xzr,[sp, #0xe0]
710055f140  str x8,[sp, #0xd8]
710055f144  adrp x8,0x71052b9000
710055f148  add x8,x8,#0x348
710055f14c  str xzr,[sp, #0xf0]
710055f150  stp xzr,xzr,[sp, #0xf8]
710055f154  ldr x24,[x8], #0x8
710055f158  cmp x24,x8
710055f15c  b.eq 0x710055f3ac
710055f160  mov w26,#0x40
710055f164  adrp x27,0x7105332000
710055f168  adrp x28,0x710593d000
710055f16c  adrp x25,0x71052b9000
710055f170  add x25,x25,#0x350
710055f174  mov w0,#0x10
710055f178  mov w1,#0x40
710055f17c  bl 0x710392e290
710055f180  mov x19,x0
710055f184  cbnz x0,0x710055f1c8
710055f188  ldr x0,[x27, #0xf00]
710055f18c  cbz x0,0x710055f1c4
710055f190  str wzr,[sp, #0x3b8]
710055f194  str x26,[sp, #0x108]
710055f198  ldr x8,[x0]
710055f19c  ldr x8,[x8, #0x30]
710055f1a0  add x1,sp,#0x3b8
710055f1a4  add x2,sp,#0x108
710055f1a8  blr x8
710055f1ac  tbz w0,#0x0,0x710055f1c4
710055f1b0  mov w0,#0x10
710055f1b4  mov w1,#0x40
710055f1b8  bl 0x710392e290
710055f1bc  mov x19,x0
710055f1c0  cbnz x0,0x710055f1c8
710055f1c4  mov x19,xzr
710055f1c8  ldr w8,[x24, #0x20]
710055f1cc  mov x0,x19
710055f1d0  str xzr,[x0, #0x28]!
710055f1d4  stur w8,[x0, #-0x8]
710055f1d8  stp xzr,xzr,[x0, #0x8]
710055f1dc  mov x8,x24
710055f1e0  ldrb w9,[x8, #0x28]!
710055f1e4  tbnz w9,#0x0,0x710055f234
710055f1e8  ldp x9,x10,[x8]
710055f1ec  ldr x8,[x8, #0x10]
710055f1f0  stp x10,x8,[x0, #0x8]
710055f1f4  str x9,[x0]
710055f1f8  ldr x8,[sp, #0xe0]
710055f1fc  cbz x8,0x710055f300
710055f200  ldr w10,[x19, #0x20]
710055f204  b 0x710055f20c
710055f208  mov x8,x11
710055f20c  ldr w9,[x8, #0x20]
710055f210  cmp w10,w9
710055f214  b.cs 0x710055f224
710055f218  ldr x11,[x8]
710055f21c  cbnz x11,0x710055f208
710055f220  b 0x710055f260
710055f224  mov x9,x8
710055f228  ldr x11,[x9, #0x8]!
710055f22c  cbnz x11,0x710055f208
710055f230  b 0x710055f308
710055f234  ldr x20,[x24, #0x30]
710055f238  cmn x20,#0x10
710055f23c  b.cs 0x7100561a9c
710055f240  ldr x21,[x24, #0x38]
710055f244  cmp x20,#0x17
710055f248  b.cs 0x710055f268
710055f24c  lsl w8,w20,#0x1
710055f250  add x23,x19,#0x29
710055f254  strb w8,[x19, #0x28]
710055f258  cbnz x20,0x710055f2e4
710055f25c  b 0x710055f2f4
710055f260  mov x9,x8
710055f264  b 0x710055f308
710055f268  add x8,x20,#0x10
710055f26c  and x22,x8,#-0x10
710055f270  add x0,sp,#0x3b8
710055f274  mov w1,#0x10
710055f278  mov x2,x22
710055f27c  bl 0x710392e1f0
710055f280  cmp w0,#0xc
710055f284  b.ne 0x710055f2b8
710055f288  ldr x0,[x28, #0x2b0]
710055f28c  cbz x0,0x710055f2b8
710055f290  str x22,[sp, #0x108]
710055f294  ldr x8,[x0]
710055f298  ldr x8,[x8, #0x30]
710055f29c  add x1,sp,#0x108
710055f2a0  blr x8
710055f2a4  tbz w0,#0x0,0x710055f2b8
710055f2a8  add x0,sp,#0x3b8
710055f2ac  mov w1,#0x10
710055f2b0  mov x2,x22
710055f2b4  bl 0x710392e1f0
710055f2b8  adrp x8,0x71052a8000
710055f2bc  ldr x8,[x8, #0xa78]
710055f2c0  cbz x8,0x710055f2d4
710055f2c4  ldr x2,[sp, #0x3b8]
710055f2c8  mov w1,#0x10
710055f2cc  mov x0,x22
710055f2d0  bl 0x71039c19e0
710055f2d4  ldr x23,[sp, #0x3b8]
710055f2d8  orr x8,x22,#0x1
710055f2dc  str x8,[x19, #0x28]
710055f2e0  stp x20,x23,[x19, #0x30]
710055f2e4  mov x0,x23
710055f2e8  mov x1,x21
710055f2ec  mov x2,x20
710055f2f0  bl 0x71039c00e0
710055f2f4  strb wzr,[x23, x20, LSL ]
710055f2f8  ldr x8,[sp, #0xe0]
710055f2fc  cbnz x8,0x710055f200
710055f300  ldr x9,[sp, #0x90]
710055f304  mov x8,x9
710055f308  stp xzr,xzr,[x19]
710055f30c  str x8,[x19, #0x10]
710055f310  str x19,[x9]
710055f314  ldr x8,[sp, #0xd8]
710055f318  ldr x8,[x8]
710055f31c  cbz x8,0x710055f328
710055f320  str x8,[sp, #0xd8]
710055f324  ldr x19,[x9]
710055f328  ldr x0,[sp, #0xe0]
710055f32c  mov x1,x19
710055f330  bl 0x71003e59f0
710055f334  ldr x8,[sp, #0xe8]
710055f338  add x8,x8,#0x1
710055f33c  str x8,[sp, #0xe8]
710055f340  ldr x8,[x24, #0x8]
710055f344  cbz x8,0x710055f358
710055f348  mov x24,x8
710055f34c  ldr x8,[x8]
710055f350  cbnz x8,0x710055f348
710055f354  b 0x710055f384
710055f358  mov x8,x24
710055f35c  ldr x9,[x8, #0x10]!
710055f360  ldr x10,[x9]
710055f364  cmp x10,x24
710055f368  b.eq 0x710055f390
710055f36c  ldr x9,[x8]
710055f370  mov x8,x9
710055f374  ldr x24,[x8, #0x10]!
710055f378  ldr x10,[x24]
710055f37c  cmp x10,x9
710055f380  b.ne 0x710055f36c
710055f384  cmp x24,x25
710055f388  b.ne 0x710055f174
710055f38c  b 0x710055f39c
710055f390  mov x24,x9
710055f394  cmp x24,x25
710055f398  b.ne 0x710055f174
710055f39c  ldr x8,[sp, #0x100]
710055f3a0  ldr x23,[sp, #0xf0]
710055f3a4  add x10,sp,#0xd8
710055f3a8  b 0x710055f3b4
710055f3ac  mov x23,xzr
710055f3b0  mov x8,xzr
710055f3b4  adrp x9,0x71052b9000
710055f3b8  add x9,x9,#0x360
710055f3bc  orr x25,xzr,#-0x1111111111111112
710055f3c0  ldp x19,x22,[x9]
710055f3c4  sub x9,x22,x19
710055f3c8  sub x8,x8,x23
710055f3cc  movk x25,#0xeeef
710055f3d0  asr x8,x8,#0x3
710055f3d4  mul x8,x8,x25
710055f3d8  asr x9,x9,#0x3
710055f3dc  mul x24,x9,x25
710055f3e0  cmp x24,x8
710055f3e4  b.ls 0x710055f5a4
710055f3e8  add x20,x10,#0x18
710055f3ec  cbz x23,0x710055f4c0
710055f3f0  ldr x27,[sp, #0xf8]
710055f3f4  cmp x27,x23
710055f3f8  b.eq 0x710055fa2c
710055f3fc  adrp x26,0x71052a8000
710055f400  ldr x26,[x26, #0xa70]
710055f404  ldurb w8,[x27, #-0x18]
710055f408  tbnz w8,#0x0,0x710055f438
710055f40c  ldurb w8,[x27, #-0x30]
710055f410  tbnz w8,#0x0,0x710055f458
710055f414  ldurb w8,[x27, #-0x48]
710055f418  tbz w8,#0x0,0x710055f478
710055f41c  ldur x21,[x27, #-0x38]
710055f420  cbz x26,0x710055f42c
710055f424  mov x0,x21
710055f428  bl 0x71039c19b0
710055f42c  mov x0,x21
710055f430  bl 0x710392eb40
710055f434  b 0x710055f478
710055f438  ldur x21,[x27, #-0x8]
710055f43c  cbz x26,0x710055f448
710055f440  mov x0,x21
710055f444  bl 0x71039c19b0
710055f448  mov x0,x21
710055f44c  bl 0x710392eb40
710055f450  ldurb w8,[x27, #-0x30]
710055f454  tbz w8,#0x0,0x710055f414
710055f458  ldur x21,[x27, #-0x20]
710055f45c  cbz x26,0x710055f468
710055f460  mov x0,x21
710055f464  bl 0x71039c19b0
710055f468  mov x0,x21
710055f46c  bl 0x710392eb40
710055f470  ldurb w8,[x27, #-0x48]
710055f474  tbnz w8,#0x0,0x710055f41c
710055f478  ldurb w8,[x27, #-0x78]
710055f47c  sub x28,x27,#0x78
710055f480  tbz w8,#0x0,0x710055f49c
710055f484  ldur x21,[x27, #-0x68]
710055f488  cbz x26,0x710055f494
710055f48c  mov x0,x21
710055f490  bl 0x71039c19b0
710055f494  mov x0,x21
710055f498  bl 0x710392eb40
710055f49c  cmp x23,x28
710055f4a0  mov x27,x28
710055f4a4  b.ne 0x710055f404
710055f4a8  ldr x0,[sp, #0xf0]
710055f4ac  str x23,[sp, #0xf8]
710055f4b0  cbz x0,0x710055f4b8
710055f4b4  bl 0x710392eb40
710055f4b8  stp xzr,xzr,[x20, #0x8]
710055f4bc  str xzr,[x20]
710055f4c0  orr x21,xzr,#0x2222222222222222
710055f4c4  movk x21,#0x222, LSL #48
710055f4c8  cmp x24,x21
710055f4cc  b.hi 0x7100561ab0
710055f4d0  ldr x8,[sp, #0x100]
710055f4d4  ldr x9,[sp, #0xf0]
710055f4d8  sub x8,x8,x9
710055f4dc  orr x9,xzr,#0x1111111111111111
710055f4e0  asr x8,x8,#0x3
710055f4e4  mul x8,x8,x25
710055f4e8  movk x9,#0x1110
710055f4ec  movk x9,#0x111, LSL #48
710055f4f0  cmp x8,x9
710055f4f4  b.hi 0x710055f504
710055f4f8  lsl x8,x8,#0x1
710055f4fc  cmp x8,x24
710055f500  csel x21,x24,x8,cc
710055f504  orr w8,wzr,#0x78
710055f508  mul x8,x21,x8
710055f50c  cmp x8,#0x0
710055f510  csinc x20,x8,xzr,ne
710055f514  mov w0,#0x10
710055f518  mov x1,x20
710055f51c  bl 0x710392e290
710055f520  cbnz x0,0x710055f564
710055f524  adrp x8,0x7105332000
710055f528  ldr x0,[x8, #0xf00]
710055f52c  cbz x0,0x710055f560
710055f530  str wzr,[sp, #0x3b8]
710055f534  str x20,[sp, #0x108]
710055f538  ldr x8,[x0]
710055f53c  ldr x8,[x8, #0x30]
710055f540  add x1,sp,#0x3b8
710055f544  add x2,sp,#0x108
710055f548  blr x8
710055f54c  tbz w0,#0x0,0x710055f560
710055f550  mov w0,#0x10
710055f554  mov x1,x20
710055f558  bl 0x710392e290
710055f55c  cbnz x0,0x710055f564
710055f560  mov x0,xzr
710055f564  orr w8,wzr,#0x78
710055f568  madd x8,x21,x8,x0
710055f56c  cmp x19,x22
710055f570  adrp x24,0x7105337000
710055f574  stp x0,x0,[sp, #0xf0]
710055f578  str x8,[sp, #0x100]
710055f57c  b.eq 0x710055f78c
710055f580  mov x1,x19
710055f584  bl 0x710055cae0
710055f588  ldr x8,[sp, #0xf8]
710055f58c  add x19,x19,#0x78
710055f590  cmp x22,x19
710055f594  add x0,x8,#0x78
710055f598  str x0,[sp, #0xf8]
710055f59c  b.ne 0x710055f580
710055f5a0  b 0x710055f78c
710055f5a4  ldr x8,[sp, #0xf8]
710055f5a8  sub x8,x8,x23
710055f5ac  asr x9,x8,#0x3
710055f5b0  mul x26,x9,x25
710055f5b4  add x20,x19,x8
710055f5b8  cmp x24,x26
710055f5bc  csel x8,x20,x22,hi
710055f5c0  subs x27,x8,x19
710055f5c4  b.eq 0x710055f690
710055f5c8  mov x28,xzr
710055f5cc  str x8,[sp, #0xc0]
710055f5d0  cmp x19,x23
710055f5d4  b.eq 0x710055f67c
710055f5d8  add x25,x19,x28
710055f5dc  ldrb w8,[x25]
710055f5e0  add x21,x23,x28
710055f5e4  ldp x9,x10,[x25, #0x8]
710055f5e8  mov x0,x21
710055f5ec  lsr x11,x8,#0x1
710055f5f0  tst w8,#0x1
710055f5f4  csinc x1,x10,x25,ne
710055f5f8  csel x2,x11,x9,eq
710055f5fc  bl 0x71002c51f0
710055f600  ldp x8,x9,[x25, #0x18]
710055f604  ldrh w10,[x25, #0x28]
710055f608  strh w10,[x21, #0x28]
710055f60c  stp x8,x9,[x21, #0x18]
710055f610  ldrb w8,[x25, #0x30]
710055f614  ldp x9,x10,[x25, #0x38]
710055f618  add x11,x25,#0x31
710055f61c  lsr x12,x8,#0x1
710055f620  tst w8,#0x1
710055f624  add x0,x21,#0x30
710055f628  csel x1,x11,x10,eq
710055f62c  csel x2,x12,x9,eq
710055f630  bl 0x71002c51f0
710055f634  ldrb w8,[x25, #0x48]
710055f638  ldp x9,x10,[x25, #0x50]
710055f63c  add x11,x25,#0x49
710055f640  lsr x12,x8,#0x1
710055f644  tst w8,#0x1
710055f648  add x0,x21,#0x48
710055f64c  csel x1,x11,x10,eq
710055f650  csel x2,x12,x9,eq
710055f654  bl 0x71002c51f0
710055f658  ldrb w8,[x25, #0x60]
710055f65c  ldp x9,x10,[x25, #0x68]
710055f660  add x11,x25,#0x61
710055f664  lsr x12,x8,#0x1
710055f668  tst w8,#0x1
710055f66c  add x0,x21,#0x60
710055f670  csel x1,x11,x10,eq
710055f674  csel x2,x12,x9,eq
710055f678  bl 0x71002c51f0
710055f67c  add x28,x28,#0x78
710055f680  cmp x27,x28
710055f684  b.ne 0x710055f5d0
710055f688  ldr x8,[sp, #0xc0]
710055f68c  add x23,x23,x28
710055f690  cmp x24,x26
710055f694  b.ls 0x710055f6cc
710055f698  cmp x8,x22
710055f69c  adrp x24,0x7105337000
710055f6a0  b.eq 0x710055f78c
710055f6a4  ldr x0,[sp, #0xf8]
710055f6a8  mov x1,x20
710055f6ac  bl 0x710055cae0
710055f6b0  ldr x8,[sp, #0xf8]
710055f6b4  add x20,x20,#0x78
710055f6b8  cmp x22,x20
710055f6bc  add x0,x8,#0x78
710055f6c0  str x0,[sp, #0xf8]
710055f6c4  b.ne 0x710055f6a8
710055f6c8  b 0x710055f78c
710055f6cc  ldr x21,[sp, #0xf8]
710055f6d0  cmp x21,x23
710055f6d4  adrp x24,0x7105337000
710055f6d8  b.eq 0x710055f788
710055f6dc  adrp x20,0x71052a8000
710055f6e0  ldr x20,[x20, #0xa70]
710055f6e4  ldurb w8,[x21, #-0x18]
710055f6e8  tbnz w8,#0x0,0x710055f718
710055f6ec  ldurb w8,[x21, #-0x30]
710055f6f0  tbnz w8,#0x0,0x710055f738
710055f6f4  ldurb w8,[x21, #-0x48]
710055f6f8  tbz w8,#0x0,0x710055f758
710055f6fc  ldur x19,[x21, #-0x38]
710055f700  cbz x20,0x710055f70c
710055f704  mov x0,x19
710055f708  bl 0x71039c19b0
710055f70c  mov x0,x19
710055f710  bl 0x710392eb40
710055f714  b 0x710055f758
710055f718  ldur x19,[x21, #-0x8]
710055f71c  cbz x20,0x710055f728
710055f720  mov x0,x19
710055f724  bl 0x71039c19b0
710055f728  mov x0,x19
710055f72c  bl 0x710392eb40
710055f730  ldurb w8,[x21, #-0x30]
710055f734  tbz w8,#0x0,0x710055f6f4
710055f738  ldur x19,[x21, #-0x20]
710055f73c  cbz x20,0x710055f748
710055f740  mov x0,x19
710055f744  bl 0x71039c19b0
710055f748  mov x0,x19
710055f74c  bl 0x710392eb40
710055f750  ldurb w8,[x21, #-0x48]
710055f754  tbnz w8,#0x0,0x710055f6fc
710055f758  ldurb w8,[x21, #-0x78]
710055f75c  sub x22,x21,#0x78
710055f760  tbz w8,#0x0,0x710055f77c
710055f764  ldur x19,[x21, #-0x68]
710055f768  cbz x20,0x710055f774
710055f76c  mov x0,x19
710055f770  bl 0x71039c19b0
710055f774  mov x0,x19
710055f778  bl 0x710392eb40
710055f77c  cmp x23,x22
710055f780  mov x21,x22
710055f784  b.ne 0x710055f6e4
710055f788  str x23,[sp, #0xf8]
710055f78c  adrp x8,0x7105334000
710055f790  ldr x8,[x8, #0x920]
710055f794  ldr x9,[x8]
710055f798  mov w8,#0x9500
710055f79c  movk w8,#0x1, LSL #16
710055f7a0  add x25,x9,x8
710055f7a4  adrp x8,0x7105335000
710055f7a8  ldr x8,[x8, #0x480]
710055f7ac  ldr x8,[x8, #0x68]
710055f7b0  str x9,[sp, #0xb0]
710055f7b4  ldr x9,[x8, #0x20]
710055f7b8  cbz x9,0x710055f7d8
710055f7bc  ldr x9,[x9]
710055f7c0  ldr x10,[x8, #0x28]
710055f7c4  cmp x9,x10
710055f7c8  b.ne 0x710055f7d8
710055f7cc  ldr x8,[x8, #0x18]
710055f7d0  str x8,[sp, #0xc0]
710055f7d4  b 0x710055f7dc
710055f7d8  str xzr,[sp, #0xc0]
710055f7dc  ldr x19,[x24, #0x5a8]
710055f7e0  sub x0,x29,#0x80
710055f7e4  stp xzr,xzr,[x29, #-0x70]
710055f7e8  stp xzr,xzr,[x29, #-0x80]
710055f7ec  bl 0x7100031080
710055f7f0  ldp x21,x20,[sp, #0xf0]
710055f7f4  mov w8,#0x1
710055f7f8  sturh w8,[x29, #-0x7e]
710055f7fc  sturb wzr,[x29, #-0x80]
710055f800  str x25,[sp, #0x58]
710055f804  str x19,[sp]
710055f808  cmp x21,x20
710055f80c  b.eq 0x7100560e38
710055f810  add x8,sp,#0x3b8
710055f814  add x9,x8,#0x20
710055f818  str x9,[sp, #0xa0]
710055f81c  add x9,x8,#0x40
710055f820  str x9,[sp, #0x80]
710055f824  add x9,x8,#0x58
710055f828  add x22,x8,#0x80
710055f82c  orr x8,x8,#0x1
710055f830  str x8,[sp, #0x20]
710055f834  add x8,sp,#0x108
710055f838  str x9,[sp, #0x40]
710055f83c  add x9,x8,#0x18
710055f840  str x9,[sp, #0x68]
710055f844  add x9,x8,#0x70
710055f848  orr x8,x8,#0x1
710055f84c  stp x20,x8,[sp, #0x48]
710055f850  add x8,x25,#0x10
710055f854  str x8,[sp, #0x8]
710055f858  add x8,x19,#0x10
710055f85c  str x8,[sp, #0x70]
710055f860  add x8,sp,#0x358
710055f864  add x8,x8,#0x9
710055f868  str x8,[sp, #0x38]
710055f86c  add x8,sp,#0x310
710055f870  str x9,[sp, #0x60]
710055f874  add x9,x8,#0x8
710055f878  add x8,x8,#0x9
710055f87c  str x8,[sp, #0x18]
710055f880  add x8,sp,#0x2c8
710055f884  str x9,[sp, #0x30]
710055f888  add x9,x8,#0x8
710055f88c  add x8,x8,#0x9
710055f890  mov w23,#0x89
710055f894  str x9,[sp, #0x28]
710055f898  str x8,[sp, #0x10]
710055f89c  b 0x710055faa0
710055f8a0  ldr x21,[x20]
710055f8a4  and x9,x9,#-0x10000000000
710055f8a8  orr x19,x9,x8
710055f8ac  mov x0,x21
710055f8b0  bl 0x71039c1a40
710055f8b4  mov x0,x20
710055f8b8  mov x1,x19
710055f8bc  bl 0x71035404b0
710055f8c0  mov x19,x0
710055f8c4  mov x0,x21
710055f8c8  bl 0x71039c1a50
710055f8cc  cmp x19,#0x0
710055f8d0  csel w19,w24,w23,eq
710055f8d4  cmp w19,w24
710055f8d8  b.eq 0x710055d134
710055f8dc  ldr x8,[x20, #0x8]
710055f8e0  add x8,x8,w19, UXTW  #0x3
710055f8e4  ldrb w8,[x8, #0x4]
710055f8e8  cbz w8,0x710055d134
710055f8ec  ldr x8,[x22, #0xf20]
710055f8f0  ldr w9,[x8, #0x18]
710055f8f4  cmp w9,w19
710055f8f8  b.ls 0x710055fa1c
710055f8fc  ldr x9,[x8, #0x8]
710055f900  add x10,x9,w19, UXTW  #0x3
710055f904  ldrb w10,[x10, #0x4]
710055f908  cbz w10,0x710055fa1c
710055f90c  lsl x10,x19,#0x3
710055f910  ldr w9,[x9, x10, LSL #0x0]
710055f914  orr w10,wzr,#0xffffff
710055f918  cmp w9,w10
710055f91c  b.eq 0x710055fa1c
710055f920  ldr w10,[x8, #0x1c]
710055f924  cmp w10,w9
710055f928  b.ls 0x710055fa1c
710055f92c  ldr x10,[x8, #0x10]
710055f930  orr w8,wzr,#0x18
710055f934  madd x8,x9,x8,x10
710055f938  ldrb w11,[x8, #0xc]
710055f93c  cmp w11,#0x0
710055f940  ccmp x8,#0x0,#0x4,ne
710055f944  b.eq 0x710055fa1c
710055f948  orr w11,wzr,#0x18
710055f94c  madd x9,x9,x11,x10
710055f950  add x9,x9,#0xd
710055f954  ldarb w9,[x9]
710055f958  and w9,w9,#0xff
710055f95c  cmp w9,#0x3
710055f960  b.ne 0x710055fa1c
710055f964  ldr x8,[x8]
710055f968  cbz x8,0x710055fa1c
710055f96c  mov w1,#0x28
710055f970  mov w0,#0x10
710055f974  bl 0x710392e290
710055f978  cbnz x0,0x710055f9c0
710055f97c  adrp x8,0x7105332000
710055f980  ldr x0,[x8, #0xf00]
710055f984  cbz x0,0x710055f9bc
710055f988  mov w8,#0x28
710055f98c  str wzr,[sp, #0x3b8]
710055f990  add x1,sp,#0x3b8
710055f994  str x8,[sp, #0x108]
710055f998  ldr x8,[x0]
710055f99c  ldr x8,[x8, #0x30]
710055f9a0  add x2,sp,#0x108
710055f9a4  blr x8
710055f9a8  tbz w0,#0x0,0x710055f9bc
710055f9ac  mov w1,#0x28
710055f9b0  mov w0,#0x10
710055f9b4  bl 0x710392e290
710055f9b8  cbnz x0,0x710055f9c0
710055f9bc  mov x0,xzr
710055f9c0  mov x9,#0x64
710055f9c4  adrp x8,0x7104f76000
710055f9c8  add x8,x8,#0xb30
710055f9cc  movk x9,#0x64, LSL #32
710055f9d0  stp x8,x9,[x0]
710055f9d4  mov x8,#0x32
710055f9d8  mov x9,#0x64
710055f9dc  movk x8,#0x19, LSL #32
710055f9e0  movk x9,#0x320, LSL #32
710055f9e4  stp x8,x9,[x0, #0x10]
710055f9e8  mov w8,#0x64
710055f9ec  str w8,[x0, #0x20]
710055f9f0  adrp x20,0x71052b9000
710055f9f4  ldr x8,[x20, #0x380]
710055f9f8  str x0,[x20, #0x380]
710055f9fc  cbz x8,0x710055fa14
710055fa00  ldr x9,[x8]
710055fa04  ldr x9,[x9, #0x8]
710055fa08  mov x0,x8
710055fa0c  blr x9
710055fa10  ldr x0,[x20, #0x380]
710055fa14  mov w1,w19
710055fa18  bl 0x7103720ec0
710055fa1c  ldr x0,[x22, #0xf20]
710055fa20  mov w1,w19
710055fa24  bl 0x7103540b10
710055fa28  b 0x710055d134
710055fa2c  mov x0,x23
710055fa30  str x23,[sp, #0xf8]
710055fa34  cbnz x0,0x710055f4b4
710055fa38  b 0x710055f4b8
710055fa3c  adrp x0,0x7105334000
710055fa40  add x0,x0,#0x868
710055fa44  bl 0x71039c06b0
710055fa48  cbz w0,0x710055fc24
710055fa4c  adrp x1,0x7105334000
710055fa50  add x1,x1,#0x710
710055fa54  mov w8,#0x10
710055fa58  stp xzr,xzr,[x1]
710055fa5c  strb w8,[x1]
710055fa60  mov x8,#0x756e
710055fa64  movk x8,#0x3a3a, LSL #16
710055fa68  movk x8,#0x6f53, LSL #32
710055fa6c  movk x8,#0x7472, LSL #48
710055fa70  adrp x0,0x7103558000
710055fa74  add x0,x0,#0x230
710055fa78  adrp x2,0x7104f17000
710055fa7c  add x2,x2,#0x0
710055fa80  str xzr,[x1, #0x10]
710055fa84  stur x8,[x1, #0x1]
710055fa88  strb wzr,[x1, #0x9]
710055fa8c  bl 0x71000001c0
710055fa90  adrp x0,0x7105334000
710055fa94  add x0,x0,#0x868
710055fa98  bl 0x71039c06c0
710055fa9c  b 0x710055fc24
710055faa0  str xzr,[sp, #0x3c8]
710055faa4  str xzr,[sp, #0x3c0]
710055faa8  str xzr,[sp, #0x3b8]
710055faac  ldrb w8,[x21]
710055fab0  tbnz w8,#0x0,0x710055facc
710055fab4  ldp x8,x9,[x21]
710055fab8  ldr x10,[x21, #0x10]
710055fabc  str x10,[sp, #0x3c8]
710055fac0  str x9,[sp, #0x3c0]
710055fac4  str x8,[sp, #0x3b8]
710055fac8  b 0x710055fb90
710055facc  ldr x26,[x21, #0x8]
710055fad0  cmn x26,#0x10
710055fad4  b.cs 0x7100561aa0
710055fad8  ldr x27,[x21, #0x10]
710055fadc  cmp x26,#0x17
710055fae0  b.cs 0x710055faf8
710055fae4  ldr x24,[sp, #0x20]
710055fae8  lsl w8,w26,#0x1
710055faec  strb w8,[sp, #0x3b8]
710055faf0  cbnz x26,0x710055fb7c
710055faf4  b 0x710055fb8c
710055faf8  add x8,x26,#0x10
710055fafc  and x28,x8,#-0x10
710055fb00  add x0,sp,#0x358
710055fb04  mov w1,#0x10
710055fb08  mov x2,x28
710055fb0c  bl 0x710392e1f0
710055fb10  cmp w0,#0xc
710055fb14  b.ne 0x710055fb4c
710055fb18  adrp x8,0x710593d000
710055fb1c  ldr x0,[x8, #0x2b0]
710055fb20  cbz x0,0x710055fb4c
710055fb24  str x28,[sp, #0x108]
710055fb28  ldr x8,[x0]
710055fb2c  ldr x8,[x8, #0x30]
710055fb30  add x1,sp,#0x108
710055fb34  blr x8
710055fb38  tbz w0,#0x0,0x710055fb4c
710055fb3c  add x0,sp,#0x358
710055fb40  mov w1,#0x10
710055fb44  mov x2,x28
710055fb48  bl 0x710392e1f0
710055fb4c  adrp x8,0x71052a8000
710055fb50  ldr x8,[x8, #0xa78]
710055fb54  cbz x8,0x710055fb68
710055fb58  ldr x2,[sp, #0x358]
710055fb5c  mov w1,#0x10
710055fb60  mov x0,x28
710055fb64  bl 0x71039c19e0
710055fb68  ldr x24,[sp, #0x358]
710055fb6c  orr x8,x28,#0x1
710055fb70  str x8,[sp, #0x3b8]
710055fb74  str x24,[sp, #0x3c8]
710055fb78  str x26,[sp, #0x3c0]
710055fb7c  mov x0,x24
710055fb80  mov x1,x27
710055fb84  mov x2,x26
710055fb88  bl 0x71039c00e0
710055fb8c  strb wzr,[x24, x26, LSL ]
710055fb90  ldr x8,[sp, #0xa0]
710055fb94  stp xzr,xzr,[x8, #0x8]
710055fb98  str xzr,[x8]
710055fb9c  adrp x8,0x710522f000
710055fba0  add x8,x8,#0xfe0
710055fba4  mov x9,x8
710055fba8  str x8,[sp, #0x3d0]
710055fbac  ldr x8,[sp, #0x80]
710055fbb0  stp xzr,xzr,[x8, #0x8]
710055fbb4  str xzr,[x8]
710055fbb8  str x9,[sp, #0x3f0]
710055fbbc  str wzr,[sp, #0x410]
710055fbc0  ldr x8,[x21, #0x18]
710055fbc4  str x8,[sp, #0x418]
710055fbc8  ldr x8,[x21, #0x20]
710055fbcc  str x8,[sp, #0x420]
710055fbd0  str xzr,[sp, #0x428]
710055fbd4  ldrb w8,[x21, #0x28]
710055fbd8  strb w8,[sp, #0x430]
710055fbdc  ldrb w8,[x21, #0x29]
710055fbe0  add x0,sp,#0x3a0
710055fbe4  adrp x1,0x710438b000
710055fbe8  add x1,x1,#0x3c3
710055fbec  mov x2,x21
710055fbf0  strb w8,[sp, #0x431]
710055fbf4  stp xzr,xzr,[x22, #0x58]
710055fbf8  str xzr,[x22]
710055fbfc  stp xzr,xzr,[x22, #0x48]
710055fc00  stp xzr,xzr,[x22, #0x38]
710055fc04  stp xzr,xzr,[x22, #0x28]
710055fc08  stp xzr,xzr,[x22, #0x18]
710055fc0c  stp xzr,xzr,[x22, #0x8]
710055fc10  bl 0x710355afd0
710055fc14  adrp x8,0x7105334000
710055fc18  add x8,x8,#0x868
710055fc1c  ldarb w8,[x8]
710055fc20  tbz w8,#0x0,0x710055fa3c
710055fc24  ldr x0,[sp, #0x70]
710055fc28  add x1,sp,#0x3a0
710055fc2c  bl 0x7103550630
710055fc30  cbz x0,0x710055fc90
710055fc34  ldr x8,[x0, #0x30]
710055fc38  ldr x0,[x8, #0x40]
710055fc3c  adrp x1,0x7105334000
710055fc40  add x1,x1,#0x710
710055fc44  bl 0x7103556f50
710055fc48  cbz x0,0x710055fc90
710055fc4c  ldr x8,[x0, #0x38]
710055fc50  cbz x8,0x710055fc80
710055fc54  ldr x8,[x8]
710055fc58  ldr x9,[x0, #0x40]
710055fc5c  cmp x8,x9
710055fc60  b.ne 0x710055fc80
710055fc64  ldr x8,[x0, #0x30]
710055fc68  str x8,[sp, #0x3d8]
710055fc6c  cbz x8,0x710055fc84
710055fc70  ldr x8,[x8, #0x8]
710055fc74  str x8,[sp, #0x3e0]
710055fc78  ldr x8,[x8]
710055fc7c  b 0x710055fc8c
710055fc80  str xzr,[sp, #0x3d8]
710055fc84  mov x8,xzr
710055fc88  str xzr,[sp, #0x3e0]
710055fc8c  str x8,[sp, #0x3e8]
710055fc90  ldr x8,[sp, #0x3e0]
710055fc94  cbz x8,0x7100560d88
710055fc98  ldr x8,[x8]
710055fc9c  ldr x9,[sp, #0x3e8]
710055fca0  cmp x8,x9
710055fca4  b.ne 0x7100560d88
710055fca8  ldr x16,[sp, #0x38]
710055fcac  orr x8,xzr,#0xf00000000
710055fcb0  str x8,[sp, #0x358]
710055fcb4  mov x8,#0x6645
710055fcb8  movk x8,#0x6566, LSL #16
710055fcbc  movk x8,#0x7463, LSL #32
710055fcc0  movk x8,#0x614d, LSL #48
710055fcc4  mov w14,#0x9dc5
710055fcc8  movk w14,#0x811c, LSL #16
710055fccc  mov x11,#0x616e
710055fcd0  movk x11,#0x6567, LSL #16
710055fcd4  str x8,[sp, #0x360]
710055fcd8  mov x8,x16
710055fcdc  mov w10,#0x45
710055fce0  mov w9,w14
710055fce4  movk x11,#0x2072, LSL #32
710055fce8  movk x11,#0x28, LSL #48
710055fcec  str x11,[sp, #0x368]
710055fcf0  mul w9,w9,w23
710055fcf4  and w10,w10,#0xff
710055fcf8  eor w9,w9,w10
710055fcfc  ldrb w10,[x8], #0x1
710055fd00  cbnz w10,0x710055fcf0
710055fd04  str w9,[sp, #0x358]
710055fd08  ldrb w8,[x21]
710055fd0c  add x15,sp,#0x358
710055fd10  ldp x18,x17,[sp, #0x28]
710055fd14  adrp x19,0x7105332000
710055fd18  orr w20,wzr,#0xffff
710055fd1c  tbnz w8,#0x0,0x710055fd28
710055fd20  add x8,x21,#0x1
710055fd24  b 0x710055fd30
710055fd28  ldr x8,[x21, #0x10]
710055fd2c  cbz x8,0x710055fde4
710055fd30  mov x9,xzr
710055fd34  add x10,x8,x9
710055fd38  ldrb w11,[x10]
710055fd3c  cbz w11,0x710055fd9c
710055fd40  ldrsw x12,[sp, #0x35c]
710055fd44  add w13,w12,#0x1
710055fd48  add x12,x15,x12
710055fd4c  str w13,[sp, #0x35c]
710055fd50  strb w11,[x12, #0x8]
710055fd54  ldrb w11,[x10, #0x1]
710055fd58  cbz w11,0x710055fd9c
710055fd5c  ldrsw x12,[sp, #0x35c]
710055fd60  add w13,w12,#0x1
710055fd64  add x12,x15,x12
710055fd68  str w13,[sp, #0x35c]
710055fd6c  strb w11,[x12, #0x8]
710055fd70  ldrb w10,[x10, #0x2]
710055fd74  cbz w10,0x710055fd9c
710055fd78  ldrsw x11,[sp, #0x35c]
710055fd7c  add w12,w11,#0x1
710055fd80  add x11,x15,x11
710055fd84  add x9,x9,#0x3
710055fd88  str w12,[sp, #0x35c]
710055fd8c  strb w10,[x11, #0x8]
710055fd90  add w10,w9,#0xe
710055fd94  cmp w10,#0x3e
710055fd98  b.cc 0x710055fd34
710055fd9c  ldrsw x8,[sp, #0x35c]
710055fda0  add x9,x15,#0x8
710055fda4  strb wzr,[x9, x8, LSL ]
710055fda8  ldrb w8,[sp, #0x360]
710055fdac  mov w9,w14
710055fdb0  cbz w8,0x710055fdd0
710055fdb4  mov x10,x16
710055fdb8  mov w9,w14
710055fdbc  mul w9,w9,w23
710055fdc0  and w8,w8,#0xff
710055fdc4  eor w9,w9,w8
710055fdc8  ldrb w8,[x10], #0x1
710055fdcc  cbnz w8,0x710055fdbc
710055fdd0  ldr w8,[sp, #0x35c]
710055fdd4  cmp w8,#0x3e
710055fdd8  str w9,[sp, #0x358]
710055fddc  b.le 0x710055fde8
710055fde0  b 0x710055fe00
710055fde4  orr w8,wzr,#0xf
710055fde8  add w9,w8,#0x1
710055fdec  add x8,x15,w8, SXTW 
710055fdf0  str w9,[sp, #0x35c]
710055fdf4  mov w9,#0x29
710055fdf8  strb w9,[x8, #0x8]
710055fdfc  ldr w8,[sp, #0x35c]
710055fe00  add x9,x15,#0x8
710055fe04  strb wzr,[x9, w8, SXTW ]
710055fe08  ldrb w8,[sp, #0x360]
710055fe0c  cbz w8,0x710055fe64
710055fe10  mov x9,x16
710055fe14  mov w10,w8
710055fe18  mov w11,w14
710055fe1c  mul w11,w11,w23
710055fe20  and w10,w10,#0xff
710055fe24  eor w11,w11,w10
710055fe28  ldrb w10,[x9], #0x1
710055fe2c  cbnz w10,0x710055fe1c
710055fe30  mov x10,xzr
710055fe34  str w11,[sp, #0x358]
710055fe38  mov w11,w8
710055fe3c  str wzr,[sp, #0x310]
710055fe40  add w9,w10,#0x1
710055fe44  cmp w9,#0x3e
710055fe48  strb w11,[x17, x10, LSL ]
710055fe4c  b.hi 0x710055fe74
710055fe50  ldrb w11,[x16, x10, LSL ]
710055fe54  add x9,x10,#0x1
710055fe58  mov x10,x9
710055fe5c  cbnz w11,0x710055fe40
710055fe60  b 0x710055fe78
710055fe64  mov x9,xzr
710055fe68  str w14,[sp, #0x358]
710055fe6c  str wzr,[sp, #0x310]
710055fe70  b 0x710055fe78
710055fe74  add w9,w10,#0x1
710055fe78  add x10,sp,#0x310
710055fe7c  add x10,x10,#0x8
710055fe80  strb wzr,[x10, w9, UXTW ]
710055fe84  str w9,[sp, #0x314]
710055fe88  ldrb w9,[sp, #0x318]
710055fe8c  mov w10,w14
710055fe90  cbz w9,0x710055feb0
710055fe94  ldr x11,[sp, #0x18]
710055fe98  mov w10,w14
710055fe9c  mul w10,w10,w23
710055fea0  and w9,w9,#0xff
710055fea4  eor w10,w10,w9
710055fea8  ldrb w9,[x11], #0x1
710055feac  cbnz w9,0x710055fe9c
710055feb0  str w10,[sp, #0x310]
710055feb4  str wzr,[sp, #0x2c8]
710055feb8  cbz w8,0x710055fee4
710055febc  mov x10,xzr
710055fec0  add w9,w10,#0x1
710055fec4  cmp w9,#0x3e
710055fec8  strb w8,[x18, x10, LSL ]
710055fecc  b.hi 0x710055feec
710055fed0  ldrb w8,[x16, x10, LSL ]
710055fed4  add x9,x10,#0x1
710055fed8  mov x10,x9
710055fedc  cbnz w8,0x710055fec0
710055fee0  b 0x710055fef0
710055fee4  mov x9,xzr
710055fee8  b 0x710055fef0
710055feec  add w9,w10,#0x1
710055fef0  add x8,sp,#0x2c8
710055fef4  add x8,x8,#0x8
710055fef8  strb wzr,[x8, w9, UXTW ]
710055fefc  ldrb w8,[sp, #0x2d0]
710055ff00  str w9,[sp, #0x2cc]
710055ff04  mov w9,w14
710055ff08  cbz w8,0x710055ff28
710055ff0c  ldr x10,[sp, #0x10]
710055ff10  mov w9,w14
710055ff14  mul w9,w9,w23
710055ff18  and w8,w8,#0xff
710055ff1c  eor w9,w9,w8
710055ff20  ldrb w8,[x10], #0x1
710055ff24  cbnz w8,0x710055ff14
710055ff28  mov w0,#0x10
710055ff2c  mov w1,#0x10
710055ff30  str w9,[sp, #0x2c8]
710055ff34  bl 0x710392e290
710055ff38  mov x24,x0
710055ff3c  cbnz x0,0x710055ff84
710055ff40  ldr x0,[x19, #0xf00]
710055ff44  cbz x0,0x710055ff80
710055ff48  mov w8,#0x10
710055ff4c  str wzr,[sp, #0x2a8]
710055ff50  add x1,sp,#0x2a8
710055ff54  str x8,[sp, #0x108]
710055ff58  ldr x8,[x0]
710055ff5c  ldr x8,[x8, #0x30]
710055ff60  add x2,sp,#0x108
710055ff64  blr x8
710055ff68  tbz w0,#0x0,0x710055ff80
710055ff6c  mov w0,#0x10
710055ff70  mov w1,#0x10
710055ff74  bl 0x710392e290
710055ff78  mov x24,x0
710055ff7c  cbnz x0,0x710055ff84
710055ff80  mov x24,xzr
710055ff84  add x1,sp,#0x310
710055ff88  mov x0,x24
710055ff8c  bl 0x710363f2d0
710055ff90  ldr x26,[sp, #0x438]
710055ff94  str x24,[sp, #0x438]
710055ff98  cbz x26,0x710055ffdc
710055ff9c  ldr x27,[x26, #0x8]
710055ffa0  cbz x27,0x710055ffd4
710055ffa4  add x8,x27,#0x8
710055ffa8  ldaxr x9,[x8]
710055ffac  sub x10,x9,#0x1
710055ffb0  stlxr w11,x10,[x8]
710055ffb4  cbnz w11,0x710055ffa8
710055ffb8  cbnz x9,0x710055ffd4
710055ffbc  ldr x8,[x27]
710055ffc0  ldr x8,[x8, #0x10]
710055ffc4  mov x0,x27
710055ffc8  blr x8
710055ffcc  mov x0,x27
710055ffd0  bl 0x71039c2670
710055ffd4  mov x0,x26
710055ffd8  bl 0x710392eb40
710055ffdc  mov w0,#0x10
710055ffe0  mov w1,#0x10
710055ffe4  bl 0x710392e290
710055ffe8  mov x24,x0
710055ffec  cbnz x0,0x7100560034
710055fff0  ldr x0,[x19, #0xf00]
710055fff4  cbz x0,0x7100560030
710055fff8  mov w8,#0x10
710055fffc  str wzr,[sp, #0x2a8]
7100560000  add x1,sp,#0x2a8
7100560004  str x8,[sp, #0x108]
7100560008  ldr x8,[x0]
710056000c  ldr x8,[x8, #0x30]
7100560010  add x2,sp,#0x108
7100560014  blr x8
7100560018  tbz w0,#0x0,0x7100560030
710056001c  mov w0,#0x10
7100560020  mov w1,#0x10
7100560024  bl 0x710392e290
7100560028  mov x24,x0
710056002c  cbnz x0,0x7100560034
7100560030  mov x24,xzr
7100560034  add x1,sp,#0x2c8
7100560038  mov x0,x24
710056003c  bl 0x710363f2d0
7100560040  ldr x26,[sp, #0x440]
7100560044  str x24,[sp, #0x440]
7100560048  cbz x26,0x710056008c
710056004c  ldr x27,[x26, #0x8]
7100560050  cbz x27,0x7100560084
7100560054  add x8,x27,#0x8
7100560058  ldaxr x9,[x8]
710056005c  sub x10,x9,#0x1
7100560060  stlxr w11,x10,[x8]
7100560064  cbnz w11,0x7100560058
7100560068  cbnz x9,0x7100560084
710056006c  ldr x8,[x27]
7100560070  ldr x8,[x8, #0x10]
7100560074  mov x0,x27
7100560078  blr x8
710056007c  mov x0,x27
7100560080  bl 0x71039c2670
7100560084  mov x0,x26
7100560088  bl 0x710392eb40
710056008c  mov w0,#0x10
7100560090  mov w1,#0x10
7100560094  bl 0x710392e290
7100560098  mov x24,x0
710056009c  cbnz x0,0x71005600e4
71005600a0  ldr x0,[x19, #0xf00]
71005600a4  cbz x0,0x71005600e0
71005600a8  mov w8,#0x10
71005600ac  str wzr,[sp, #0x2a8]
71005600b0  add x1,sp,#0x2a8
71005600b4  str x8,[sp, #0x108]
71005600b8  ldr x8,[x0]
71005600bc  ldr x8,[x8, #0x30]
71005600c0  add x2,sp,#0x108
71005600c4  blr x8
71005600c8  tbz w0,#0x0,0x71005600e0
71005600cc  mov w0,#0x10
71005600d0  mov w1,#0x10
71005600d4  bl 0x710392e290
71005600d8  mov x24,x0
71005600dc  cbnz x0,0x71005600e4
71005600e0  mov x24,xzr
71005600e4  add x1,sp,#0x2c8
71005600e8  mov x0,x24
71005600ec  bl 0x710363f2d0
71005600f0  ldr x26,[sp, #0x448]
71005600f4  str x24,[sp, #0x448]
71005600f8  cbz x26,0x710056013c
71005600fc  ldr x27,[x26, #0x8]
7100560100  cbz x27,0x7100560134
7100560104  add x8,x27,#0x8
7100560108  ldaxr x9,[x8]
710056010c  sub x10,x9,#0x1
7100560110  stlxr w11,x10,[x8]
7100560114  cbnz w11,0x7100560108
7100560118  cbnz x9,0x7100560134
710056011c  ldr x8,[x27]
7100560120  ldr x8,[x8, #0x10]
7100560124  mov x0,x27
7100560128  blr x8
710056012c  mov x0,x27
7100560130  bl 0x71039c2670
7100560134  mov x0,x26
7100560138  bl 0x710392eb40
710056013c  ldr x26,[sp, #0x450]
7100560140  str xzr,[sp, #0x450]
7100560144  cbz x26,0x7100560188
7100560148  ldr x27,[x26, #0x8]
710056014c  cbz x27,0x7100560180
7100560150  add x8,x27,#0x8
7100560154  ldaxr x9,[x8]
7100560158  sub x10,x9,#0x1
710056015c  stlxr w11,x10,[x8]
7100560160  cbnz w11,0x7100560154
7100560164  cbnz x9,0x7100560180
7100560168  ldr x8,[x27]
710056016c  ldr x8,[x8, #0x10]
7100560170  mov x0,x27
7100560174  blr x8
7100560178  mov x0,x27
710056017c  bl 0x71039c2670
7100560180  mov x0,x26
7100560184  bl 0x710392eb40
7100560188  mov x26,x21
710056018c  ldrb w8,[x26, #0x30]!
7100560190  tbnz w8,#0x0,0x71005601a0
7100560194  lsr x8,x8,#0x1
7100560198  cbnz x8,0x71005601a8
710056019c  b 0x71005603c8
71005601a0  ldr x8,[x21, #0x38]
71005601a4  cbz x8,0x71005603c8
71005601a8  mov w0,#0x10
71005601ac  mov w1,#0xd8
71005601b0  bl 0x710392e290
71005601b4  mov x24,x0
71005601b8  cbnz x0,0x7100560200
71005601bc  ldr x0,[x19, #0xf00]
71005601c0  cbz x0,0x71005601fc
71005601c4  mov w8,#0xd8
71005601c8  str wzr,[sp, #0x2a8]
71005601cc  add x1,sp,#0x2a8
71005601d0  str x8,[sp, #0x108]
71005601d4  ldr x8,[x0]
71005601d8  ldr x8,[x8, #0x30]
71005601dc  add x2,sp,#0x108
71005601e0  blr x8
71005601e4  tbz w0,#0x0,0x71005601fc
71005601e8  mov w0,#0x10
71005601ec  mov w1,#0xd8
71005601f0  bl 0x710392e290
71005601f4  mov x24,x0
71005601f8  cbnz x0,0x7100560200
71005601fc  mov x24,xzr
7100560200  mov x0,x24
7100560204  bl 0x710003a0e0
7100560208  ldr x27,[sp, #0x458]
710056020c  str x24,[sp, #0x458]
7100560210  cbz x27,0x7100560224
7100560214  mov x0,x27
7100560218  bl 0x710003a120
710056021c  mov x0,x27
7100560220  bl 0x710392eb40
7100560224  ldr x1,[sp, #0xc0]
7100560228  add x0,sp,#0x2a8
710056022c  mov x2,x26
7100560230  bl 0x710385c280
7100560234  ldr x26,[sp, #0x2b0]
7100560238  ldr x8,[x26]
710056023c  ldr x9,[x8, #0x18]
7100560240  add x8,sp,#0x108
7100560244  mov x0,x26
7100560248  blr x9
710056024c  ldr x8,[sp, #0x110]
7100560250  ldr x1,[x8, #0x1c0]
7100560254  ldr x0,[sp, #0x458]
7100560258  bl 0x71000314e0
710056025c  mov w0,#0x10
7100560260  mov w1,#0x48
7100560264  bl 0x710392e290
7100560268  mov x24,x0
710056026c  cbnz x0,0x71005602b4
7100560270  ldr x0,[x19, #0xf00]
7100560274  cbz x0,0x71005602b0
7100560278  mov w8,#0x48
710056027c  str wzr,[sp, #0x288]
7100560280  add x1,sp,#0x288
7100560284  str x8,[sp, #0x108]
7100560288  ldr x8,[x0]
710056028c  ldr x8,[x8, #0x30]
7100560290  add x2,sp,#0x108
7100560294  blr x8
7100560298  tbz w0,#0x0,0x71005602b0
710056029c  mov w0,#0x10
71005602a0  mov w1,#0x48
71005602a4  bl 0x710392e290
71005602a8  mov x24,x0
71005602ac  cbnz x0,0x71005602b4
71005602b0  mov x24,xzr
71005602b4  mov x0,x24
71005602b8  bl 0x710003a240
71005602bc  ldr x27,[sp, #0x460]
71005602c0  str x24,[sp, #0x460]
71005602c4  cbz x27,0x71005602d8
71005602c8  mov x0,x27
71005602cc  bl 0x710003a260
71005602d0  mov x0,x27
71005602d4  bl 0x710392eb40
71005602d8  add x0,sp,#0x108
71005602dc  stp xzr,xzr,[sp, #0x138]
71005602e0  stp xzr,xzr,[sp, #0x128]
71005602e4  stp xzr,xzr,[sp, #0x118]
71005602e8  stp xzr,xzr,[sp, #0x108]
71005602ec  bl 0x7100031360
71005602f0  ldr x8,[x26]
71005602f4  ldr x9,[x8, #0x18]
71005602f8  add x8,sp,#0x288
71005602fc  mov x0,x26
7100560300  blr x9
7100560304  ldr x8,[sp, #0x290]
7100560308  ldr w8,[x8, #0x1e0]
710056030c  adrp x9,0x71046fd000
7100560310  add x9,x9,#0x6bc
7100560314  ldr w10,[x9], #0x8
7100560318  cmp w10,w20
710056031c  b.eq 0x7100560328
7100560320  cmp w10,w8
7100560324  b.ne 0x7100560314
7100560328  ldur w8,[x9, #-0x4]
710056032c  ldr x9,[sp, #0x458]
7100560330  str w8,[sp, #0x10c]
7100560334  adrp x8,0x7105336000
7100560338  ldr x0,[sp, #0x460]
710056033c  str x9,[sp, #0x138]
7100560340  ldr x1,[x8, #0xe08]
7100560344  add x2,sp,#0x108
7100560348  bl 0x710003a270
710056034c  mov w0,#0x10
7100560350  mov w1,#0x8
7100560354  bl 0x710392e290
7100560358  cbnz x0,0x710056039c
710056035c  ldr x0,[x19, #0xf00]
7100560360  cbz x0,0x7100560398
7100560364  mov w8,#0x8
7100560368  stur wzr,[x29, #-0x5c]
710056036c  sub x1,x29,#0x5c
7100560370  str x8,[sp, #0x288]
7100560374  ldr x8,[x0]
7100560378  ldr x8,[x8, #0x30]
710056037c  add x2,sp,#0x288
7100560380  blr x8
7100560384  tbz w0,#0x0,0x7100560398
7100560388  mov w0,#0x10
710056038c  mov w1,#0x8
7100560390  bl 0x710392e290
7100560394  cbnz x0,0x710056039c
7100560398  mov x0,xzr
710056039c  mov x8,#-0x1
71005603a0  str x8,[x0]
71005603a4  ldr x8,[sp, #0x468]
71005603a8  str x0,[sp, #0x468]
71005603ac  cbz x8,0x71005603bc
71005603b0  mov x0,x8
71005603b4  bl 0x710392eb40
71005603b8  ldr x0,[sp, #0x468]
71005603bc  ldr x1,[sp, #0x460]
71005603c0  mov x2,xzr
71005603c4  bl 0x71035b9360
71005603c8  mov x26,x21
71005603cc  ldrb w8,[x26, #0x48]!
71005603d0  tbnz w8,#0x0,0x71005603e0
71005603d4  lsr x8,x8,#0x1
71005603d8  cbnz x8,0x71005603e8
71005603dc  b 0x7100560608
71005603e0  ldr x8,[x21, #0x50]
71005603e4  cbz x8,0x7100560608
71005603e8  mov w0,#0x10
71005603ec  mov w1,#0xd8
71005603f0  bl 0x710392e290
71005603f4  mov x24,x0
71005603f8  cbnz x0,0x7100560440
71005603fc  ldr x0,[x19, #0xf00]
7100560400  cbz x0,0x710056043c
7100560404  mov w8,#0xd8
7100560408  str wzr,[sp, #0x2a8]
710056040c  add x1,sp,#0x2a8
7100560410  str x8,[sp, #0x108]
7100560414  ldr x8,[x0]
7100560418  ldr x8,[x8, #0x30]
710056041c  add x2,sp,#0x108
7100560420  blr x8
7100560424  tbz w0,#0x0,0x710056043c
7100560428  mov w0,#0x10
710056042c  mov w1,#0xd8
7100560430  bl 0x710392e290
7100560434  mov x24,x0
7100560438  cbnz x0,0x7100560440
710056043c  mov x24,xzr
7100560440  mov x0,x24
7100560444  bl 0x710003a0e0
7100560448  ldr x27,[sp, #0x488]
710056044c  str x24,[sp, #0x488]
7100560450  cbz x27,0x7100560464
7100560454  mov x0,x27
7100560458  bl 0x710003a120
710056045c  mov x0,x27
7100560460  bl 0x710392eb40
7100560464  ldr x1,[sp, #0xc0]
7100560468  add x0,sp,#0x2a8
710056046c  mov x2,x26
7100560470  bl 0x710385c280
7100560474  ldr x26,[sp, #0x2b0]
7100560478  ldr x8,[x26]
710056047c  ldr x9,[x8, #0x18]
7100560480  add x8,sp,#0x108
7100560484  mov x0,x26
7100560488  blr x9
710056048c  ldr x8,[sp, #0x110]
7100560490  ldr x1,[x8, #0x1c0]
7100560494  ldr x0,[sp, #0x488]
7100560498  bl 0x71000314e0
710056049c  mov w0,#0x10
71005604a0  mov w1,#0x48
71005604a4  bl 0x710392e290
71005604a8  mov x24,x0
71005604ac  cbnz x0,0x71005604f4
71005604b0  ldr x0,[x19, #0xf00]
71005604b4  cbz x0,0x71005604f0
71005604b8  mov w8,#0x48
71005604bc  str wzr,[sp, #0x288]
71005604c0  add x1,sp,#0x288
71005604c4  str x8,[sp, #0x108]
71005604c8  ldr x8,[x0]
71005604cc  ldr x8,[x8, #0x30]
71005604d0  add x2,sp,#0x108
71005604d4  blr x8
71005604d8  tbz w0,#0x0,0x71005604f0
71005604dc  mov w0,#0x10
71005604e0  mov w1,#0x48
71005604e4  bl 0x710392e290
71005604e8  mov x24,x0
71005604ec  cbnz x0,0x71005604f4
71005604f0  mov x24,xzr
71005604f4  mov x0,x24
71005604f8  bl 0x710003a240
71005604fc  ldr x27,[sp, #0x490]
7100560500  str x24,[sp, #0x490]
7100560504  cbz x27,0x7100560518
7100560508  mov x0,x27
710056050c  bl 0x710003a260
7100560510  mov x0,x27
7100560514  bl 0x710392eb40
7100560518  add x0,sp,#0x108
710056051c  stp xzr,xzr,[sp, #0x138]
7100560520  stp xzr,xzr,[sp, #0x128]
7100560524  stp xzr,xzr,[sp, #0x118]
7100560528  stp xzr,xzr,[sp, #0x108]
710056052c  bl 0x7100031360
7100560530  ldr x8,[x26]
7100560534  ldr x9,[x8, #0x18]
7100560538  add x8,sp,#0x288
710056053c  mov x0,x26
7100560540  blr x9
7100560544  ldr x8,[sp, #0x290]
7100560548  ldr w8,[x8, #0x1e0]
710056054c  adrp x9,0x71046fd000
7100560550  add x9,x9,#0x6bc
7100560554  ldr w10,[x9], #0x8
7100560558  cmp w10,w20
710056055c  b.eq 0x7100560568
7100560560  cmp w10,w8
7100560564  b.ne 0x7100560554
7100560568  ldur w8,[x9, #-0x4]
710056056c  ldr x9,[sp, #0x488]
7100560570  str w8,[sp, #0x10c]
7100560574  adrp x8,0x7105336000
7100560578  ldr x0,[sp, #0x490]
710056057c  str x9,[sp, #0x138]
7100560580  ldr x1,[x8, #0xe08]
7100560584  add x2,sp,#0x108
7100560588  bl 0x710003a270
710056058c  mov w0,#0x10
7100560590  mov w1,#0x8
7100560594  bl 0x710392e290
7100560598  cbnz x0,0x71005605dc
710056059c  ldr x0,[x19, #0xf00]
71005605a0  cbz x0,0x71005605d8
71005605a4  mov w8,#0x8
71005605a8  stur wzr,[x29, #-0x5c]
71005605ac  sub x1,x29,#0x5c
71005605b0  str x8,[sp, #0x288]
71005605b4  ldr x8,[x0]
71005605b8  ldr x8,[x8, #0x30]
71005605bc  add x2,sp,#0x288
71005605c0  blr x8
71005605c4  tbz w0,#0x0,0x71005605d8
71005605c8  mov w0,#0x10
71005605cc  mov w1,#0x8
71005605d0  bl 0x710392e290
71005605d4  cbnz x0,0x71005605dc
71005605d8  mov x0,xzr
71005605dc  mov x8,#-0x1
71005605e0  str x8,[x0]
71005605e4  ldr x8,[sp, #0x498]
71005605e8  str x0,[sp, #0x498]
71005605ec  cbz x8,0x71005605fc
71005605f0  mov x0,x8
71005605f4  bl 0x710392eb40
71005605f8  ldr x0,[sp, #0x498]
71005605fc  ldr x1,[sp, #0x490]
7100560600  mov x2,xzr
7100560604  bl 0x71035b9360
7100560608  stp xzr,xzr,[sp, #0x110]
710056060c  str xzr,[sp, #0x108]
7100560610  ldrb w8,[x21]
7100560614  tbnz w8,#0x0,0x710056062c
7100560618  ldp x8,x9,[x21]
710056061c  ldr x10,[x21, #0x10]
7100560620  stp x9,x10,[sp, #0x110]
7100560624  str x8,[sp, #0x108]
7100560628  b 0x71005606ec
710056062c  ldr x26,[x21, #0x8]
7100560630  cmn x26,#0x10
7100560634  b.cs 0x7100561aa8
7100560638  ldr x27,[x21, #0x10]
710056063c  cmp x26,#0x17
7100560640  b.cs 0x7100560658
7100560644  ldr x24,[sp, #0x50]
7100560648  lsl w8,w26,#0x1
710056064c  strb w8,[sp, #0x108]
7100560650  cbnz x26,0x71005606d8
7100560654  b 0x71005606e8
7100560658  add x8,x26,#0x10
710056065c  and x28,x8,#-0x10
7100560660  add x0,sp,#0x288
7100560664  mov w1,#0x10
7100560668  mov x2,x28
710056066c  bl 0x710392e1f0
7100560670  cmp w0,#0xc
7100560674  b.ne 0x71005606ac
7100560678  adrp x8,0x710593d000
710056067c  ldr x0,[x8, #0x2b0]
7100560680  cbz x0,0x71005606ac
7100560684  str x28,[sp, #0x2a8]
7100560688  ldr x8,[x0]
710056068c  ldr x8,[x8, #0x30]
7100560690  add x1,sp,#0x2a8
7100560694  blr x8
7100560698  tbz w0,#0x0,0x71005606ac
710056069c  add x0,sp,#0x288
71005606a0  mov w1,#0x10
71005606a4  mov x2,x28
71005606a8  bl 0x710392e1f0
71005606ac  adrp x8,0x71052a8000
71005606b0  ldr x8,[x8, #0xa78]
71005606b4  cbz x8,0x71005606c8
71005606b8  ldr x2,[sp, #0x288]
71005606bc  mov w1,#0x10
71005606c0  mov x0,x28
71005606c4  bl 0x71039c19e0
71005606c8  ldr x24,[sp, #0x288]
71005606cc  orr x8,x28,#0x1
71005606d0  str x8,[sp, #0x108]
71005606d4  stp x26,x24,[sp, #0x110]
71005606d8  mov x0,x24
71005606dc  mov x1,x27
71005606e0  mov x2,x26
71005606e4  bl 0x71039c00e0
71005606e8  strb wzr,[x24, x26, LSL ]
71005606ec  ldr x8,[sp, #0x3c8]
71005606f0  ldr x9,[sp, #0x3c0]
71005606f4  str xzr,[sp, #0x3c8]
71005606f8  ldr x10,[sp, #0x68]
71005606fc  stp x9,x8,[x10, #0x8]
7100560700  ldr x8,[sp, #0x3b8]
7100560704  str xzr,[sp, #0x3b8]
7100560708  str x8,[x10]
710056070c  ldr x8,[sp, #0x3d8]
7100560710  str x8,[sp, #0x140]
7100560714  ldr x8,[sp, #0x3e0]
7100560718  str x8,[sp, #0x148]
710056071c  ldr x8,[sp, #0x3e8]
7100560720  str x8,[sp, #0x150]
7100560724  adrp x8,0x710522f000
7100560728  add x8,x8,#0xfe0
710056072c  mov x9,x8
7100560730  str x8,[sp, #0x138]
7100560734  ldr x8,[sp, #0x3f8]
7100560738  ldr x11,[sp, #0x40]
710056073c  stp x9,x8,[sp, #0x158]
7100560740  ldr x8,[sp, #0x400]
7100560744  str x8,[sp, #0x168]
7100560748  ldr x8,[sp, #0x408]
710056074c  str xzr,[sp, #0x3c0]
7100560750  ldrh w10,[x11, #0x20]
7100560754  str x8,[sp, #0x170]
7100560758  ldr x12,[sp, #0x60]
710056075c  ldp x8,x9,[x11]
7100560760  strh w10,[x12, #0x20]
7100560764  ldp x10,x11,[x11, #0x10]
7100560768  stp x8,x9,[x12]
710056076c  ldr x8,[sp, #0x438]
7100560770  stp x10,x11,[x12, #0x10]
7100560774  str x8,[sp, #0x1a0]
7100560778  ldr x8,[sp, #0x440]
710056077c  str xzr,[sp, #0x440]
7100560780  str x8,[sp, #0x1a8]
7100560784  ldr x8,[sp, #0x448]
7100560788  str xzr,[sp, #0x448]
710056078c  str x8,[sp, #0x1b0]
7100560790  ldr x8,[sp, #0x450]
7100560794  str xzr,[sp, #0x450]
7100560798  str x8,[sp, #0x1b8]
710056079c  ldr x8,[sp, #0x458]
71005607a0  str xzr,[sp, #0x458]
71005607a4  str x8,[sp, #0x1c0]
71005607a8  ldr x8,[sp, #0x460]
71005607ac  str xzr,[sp, #0x460]
71005607b0  str x8,[sp, #0x1c8]
71005607b4  ldr x8,[sp, #0x468]
71005607b8  str xzr,[sp, #0x468]
71005607bc  str x8,[sp, #0x1d0]
71005607c0  ldr x8,[sp, #0x470]
71005607c4  str xzr,[sp, #0x470]
71005607c8  str x8,[sp, #0x1d8]
71005607cc  ldr x8,[sp, #0x478]
71005607d0  str xzr,[sp, #0x478]
71005607d4  str x8,[sp, #0x1e0]
71005607d8  ldr x8,[sp, #0x480]
71005607dc  str xzr,[sp, #0x480]
71005607e0  str x8,[sp, #0x1e8]
71005607e4  ldr x8,[sp, #0x488]
71005607e8  ldr x9,[sp, #0x490]
71005607ec  ldr x10,[sp, #0x498]
71005607f0  stp x8,x9,[sp, #0x1f0]
71005607f4  ldrb w8,[sp, #0x108]
71005607f8  str x10,[sp, #0x200]
71005607fc  ldp x10,x9,[sp, #0x110]
7100560800  tst w8,#0x1
7100560804  lsr x11,x8,#0x1
7100560808  ldr x8,[sp, #0x50]
710056080c  csel x26,x11,x10,eq
7100560810  mov x1,x26
7100560814  csel x27,x8,x9,eq
7100560818  mov x0,x27
710056081c  str xzr,[sp, #0x438]
7100560820  str xzr,[sp, #0x488]
7100560824  str xzr,[sp, #0x490]
7100560828  str xzr,[sp, #0x498]
710056082c  bl 0x7102677830
7100560830  ldr x24,[x25, #0x8]
7100560834  mov x28,x0
7100560838  cbz x24,0x7100560a24
710056083c  sub x19,x24,#0x1
7100560840  ands x8,x19,x24
7100560844  b.eq 0x7100560860
7100560848  cmp x28,x24
710056084c  mov x20,x28
7100560850  b.cc 0x7100560864
7100560854  udiv x9,x28,x24
7100560858  msub x20,x9,x24,x28
710056085c  b 0x7100560864
7100560860  and x20,x19,x28
7100560864  ldr x9,[x25]
7100560868  ldr x9,[x9, x20, LSL #0x3]
710056086c  cbz x9,0x7100560a24
7100560870  ldr x25,[x9]
7100560874  cbz x25,0x7100560a20
7100560878  cbz x8,0x7100560960
710056087c  cbz x26,0x7100560918
7100560880  ldr x8,[x25, #0x8]
7100560884  cmp x8,x28
7100560888  b.eq 0x71005608a4
710056088c  cmp x8,x24
7100560890  b.cc 0x710056089c
7100560894  udiv x9,x8,x24
7100560898  msub x8,x9,x24,x8
710056089c  cmp x8,x20
71005608a0  b.ne 0x7100560a20
71005608a4  mov x8,x25
71005608a8  ldrb w10,[x8, #0x10]!
71005608ac  tst w10,#0x1
71005608b0  ldr x11,[x8, #0x8]
71005608b4  lsr x9,x10,#0x1
71005608b8  csel x11,x9,x11,eq
71005608bc  cmp x11,x26
71005608c0  b.ne 0x710056090c
71005608c4  tbnz w10,#0x0,0x71005608f8
71005608c8  add x8,x8,#0x1
71005608cc  neg x9,x9
71005608d0  mov x10,x27
71005608d4  ldrb w11,[x8]
71005608d8  ldrb w12,[x10]
71005608dc  cmp w11,w12
71005608e0  b.ne 0x710056090c
71005608e4  add x8,x8,#0x1
71005608e8  add x10,x10,#0x1
71005608ec  adds x9,x9,#0x1
71005608f0  b.ne 0x71005608d4
71005608f4  b 0x7100560d50
71005608f8  ldr x0,[x25, #0x20]
71005608fc  mov x1,x27
7100560900  mov x2,x26
7100560904  bl 0x71039c0250
7100560908  cbz w0,0x7100560d50
710056090c  ldr x25,[x25]
7100560910  cbnz x25,0x7100560880
7100560914  b 0x7100560a20
7100560918  ldr x8,[x25, #0x8]
710056091c  cmp x8,x28
7100560920  b.eq 0x710056093c
7100560924  cmp x8,x24
7100560928  b.cc 0x7100560934
710056092c  udiv x9,x8,x24
7100560930  msub x8,x9,x24,x8
7100560934  cmp x8,x20
7100560938  b.ne 0x7100560a20
710056093c  ldrb w8,[x25, #0x10]
7100560940  ldr x9,[x25, #0x18]
7100560944  lsr x10,x8,#0x1
7100560948  tst w8,#0x1
710056094c  csel x8,x10,x9,eq
7100560950  cbz x8,0x7100560d50
7100560954  ldr x25,[x25]
7100560958  cbnz x25,0x7100560918
710056095c  b 0x7100560a20
7100560960  cbz x26,0x71005609ec
7100560964  ldr x8,[x25, #0x8]
7100560968  and x9,x8,x19
710056096c  cmp x8,x28
7100560970  ccmp x9,x20,#0x4,ne
7100560974  b.ne 0x7100560a20
7100560978  mov x8,x25
710056097c  ldrb w10,[x8, #0x10]!
7100560980  tst w10,#0x1
7100560984  ldr x11,[x8, #0x8]
7100560988  lsr x9,x10,#0x1
710056098c  csel x11,x9,x11,eq
7100560990  cmp x11,x26
7100560994  b.ne 0x71005609e0
7100560998  tbnz w10,#0x0,0x71005609cc
710056099c  add x8,x8,#0x1
71005609a0  neg x9,x9
71005609a4  mov x10,x27
71005609a8  ldrb w11,[x8]
71005609ac  ldrb w12,[x10]
71005609b0  cmp w11,w12
71005609b4  b.ne 0x71005609e0
71005609b8  add x8,x8,#0x1
71005609bc  add x10,x10,#0x1
71005609c0  adds x9,x9,#0x1
71005609c4  b.ne 0x71005609a8
71005609c8  b 0x7100560d50
71005609cc  ldr x0,[x25, #0x20]
71005609d0  mov x1,x27
71005609d4  mov x2,x26
71005609d8  bl 0x71039c0250
71005609dc  cbz w0,0x7100560d50
71005609e0  ldr x25,[x25]
71005609e4  cbnz x25,0x7100560964
71005609e8  b 0x7100560a20
71005609ec  ldr x8,[x25, #0x8]
71005609f0  and x9,x8,x19
71005609f4  cmp x8,x28
71005609f8  ccmp x9,x20,#0x4,ne
71005609fc  b.ne 0x7100560a20
7100560a00  ldrb w8,[x25, #0x10]
7100560a04  ldr x9,[x25, #0x18]
7100560a08  lsr x10,x8,#0x1
7100560a0c  tst w8,#0x1
7100560a10  csel x8,x10,x9,eq
7100560a14  cbz x8,0x7100560d50
7100560a18  ldr x25,[x25]
7100560a1c  cbnz x25,0x71005609ec
7100560a20  ldr x25,[sp, #0x58]
7100560a24  mov w0,#0x10
7100560a28  mov w1,#0x110
7100560a2c  bl 0x710392e290
7100560a30  mov x27,x0
7100560a34  cbnz x0,0x7100560a80
7100560a38  adrp x8,0x7105332000
7100560a3c  ldr x0,[x8, #0xf00]
7100560a40  cbz x0,0x7100560a7c
7100560a44  mov w8,#0x110
7100560a48  str wzr,[sp, #0x288]
7100560a4c  add x1,sp,#0x288
7100560a50  str x8,[sp, #0x2a8]
7100560a54  ldr x8,[x0]
7100560a58  ldr x8,[x8, #0x30]
7100560a5c  add x2,sp,#0x2a8
7100560a60  blr x8
7100560a64  tbz w0,#0x0,0x7100560a7c
7100560a68  mov w0,#0x10
7100560a6c  mov w1,#0x110
7100560a70  bl 0x710392e290
7100560a74  mov x27,x0
7100560a78  cbnz x0,0x7100560a80
7100560a7c  mov x27,xzr
7100560a80  ldp x8,x9,[sp, #0x108]
7100560a84  ldr x10,[sp, #0x118]
7100560a88  stp x9,x10,[x27, #0x18]
7100560a8c  ldr x11,[sp, #0x68]
7100560a90  str x8,[x27, #0x10]
7100560a94  stp xzr,xzr,[sp, #0x110]
7100560a98  str xzr,[sp, #0x108]
7100560a9c  ldp x8,x9,[x11]
7100560aa0  ldr x10,[x11, #0x10]
7100560aa4  stp x9,x10,[x27, #0x30]
7100560aa8  str x8,[x27, #0x28]
7100560aac  stp xzr,xzr,[x11, #0x8]
7100560ab0  str xzr,[x11]
7100560ab4  ldr x8,[sp, #0x140]
7100560ab8  str x8,[x27, #0x48]
7100560abc  ldr x8,[sp, #0x148]
7100560ac0  str x8,[x27, #0x50]
7100560ac4  ldr x8,[sp, #0x150]
7100560ac8  str x8,[x27, #0x58]
7100560acc  adrp x8,0x710522f000
7100560ad0  add x8,x8,#0xfe0
7100560ad4  str x8,[x27, #0x40]
7100560ad8  mov x9,x8
7100560adc  ldr x8,[sp, #0x160]
7100560ae0  stp x9,x8,[x27, #0x60]
7100560ae4  ldr x8,[sp, #0x168]
7100560ae8  str x8,[x27, #0x70]
7100560aec  ldr x8,[sp, #0x170]
7100560af0  ldr x11,[sp, #0x60]
7100560af4  str x8,[x27, #0x78]
7100560af8  ldr x8,[x11]
7100560afc  str x8,[x27, #0x80]
7100560b00  ldp x8,x9,[x11, #0x8]
7100560b04  ldr x10,[x11, #0x18]
7100560b08  ldrh w11,[x11, #0x20]
7100560b0c  strh w11,[x27, #0xa0]
7100560b10  str x8,[x27, #0x88]
7100560b14  stp x9,x10,[x27, #0x90]
7100560b18  ldr x8,[sp, #0x1a0]
7100560b1c  str x8,[x27, #0xa8]
7100560b20  ldr x8,[sp, #0x1a8]
7100560b24  stp xzr,xzr,[sp, #0x1a0]
7100560b28  str x8,[x27, #0xb0]
7100560b2c  ldr x8,[sp, #0x1b0]
7100560b30  str x8,[x27, #0xb8]
7100560b34  ldr x8,[sp, #0x1b8]
7100560b38  stp xzr,xzr,[sp, #0x1b0]
7100560b3c  str x8,[x27, #0xc0]
7100560b40  ldr x8,[sp, #0x1c0]
7100560b44  str x8,[x27, #0xc8]
7100560b48  ldr x8,[sp, #0x1c8]
7100560b4c  stp xzr,xzr,[sp, #0x1c0]
7100560b50  str x8,[x27, #0xd0]
7100560b54  ldr x8,[sp, #0x1d0]
7100560b58  str x8,[x27, #0xd8]
7100560b5c  ldr x8,[sp, #0x1d8]
7100560b60  stp xzr,xzr,[sp, #0x1d0]
7100560b64  str x8,[x27, #0xe0]
7100560b68  ldr x8,[sp, #0x1e0]
7100560b6c  str x8,[x27, #0xe8]
7100560b70  ldr x8,[sp, #0x1e8]
7100560b74  stp xzr,xzr,[sp, #0x1e0]
7100560b78  str x8,[x27, #0xf0]
7100560b7c  ldr x8,[sp, #0x1f0]
7100560b80  str x8,[x27, #0xf8]
7100560b84  ldr x8,[sp, #0x1f8]
7100560b88  stp xzr,xzr,[sp, #0x1f0]
7100560b8c  str x8,[x27, #0x100]
7100560b90  ldr x8,[sp, #0x200]
7100560b94  str xzr,[sp, #0x200]
7100560b98  str x8,[x27, #0x108]
7100560b9c  stp xzr,x28,[x27]
7100560ba0  ldr x8,[x25, #0x18]
7100560ba4  add x8,x8,#0x1
7100560ba8  ucvtf s0,x8
7100560bac  ldr s1,[x25, #0x20]
7100560bb0  cbz x24,0x7100560bc4
7100560bb4  ucvtf s2,x24
7100560bb8  fmul s2,s1,s2
7100560bbc  fcmp s2,s0
7100560bc0  b.pl 0x7100560cdc
7100560bc4  lsl x8,x24,#0x1
7100560bc8  cmp x24,#0x3
7100560bcc  b.cc 0x7100560be0
7100560bd0  sub x9,x24,#0x1
7100560bd4  tst x9,x24
7100560bd8  cset w9,ne
7100560bdc  b 0x7100560be4
7100560be0  mov w9,#0x1
7100560be4  fdiv s0,s0,s1
7100560be8  orr x8,x9,x8
7100560bec  fcvtpu x9,s0
7100560bf0  cmp x8,x9
7100560bf4  csel x26,x9,x8,cc
7100560bf8  subs x8,x26,#0x1
7100560bfc  b.ne 0x7100560c08
7100560c00  mov w26,#0x2
7100560c04  b 0x7100560c1c
7100560c08  tst x8,x26
7100560c0c  b.eq 0x7100560c1c
7100560c10  mov x0,x26
7100560c14  bl 0x71039c26e0
7100560c18  mov x26,x0
7100560c1c  ldr x19,[x25, #0x8]
7100560c20  cmp x26,x19
7100560c24  b.ls 0x7100560c38
7100560c28  mov x0,x25
7100560c2c  mov x1,x26
7100560c30  bl 0x710355b310
7100560c34  b 0x7100560cac
7100560c38  b.cs 0x7100560cac
7100560c3c  cmp x19,#0x3
7100560c40  b.cc 0x7100560c54
7100560c44  sub x8,x19,#0x1
7100560c48  tst x8,x19
7100560c4c  cset w8,eq
7100560c50  b 0x7100560c58
7100560c54  mov w8,wzr
7100560c58  ldr x9,[x25, #0x18]
7100560c5c  ucvtf s0,x9
7100560c60  ldr s1,[x25, #0x20]
7100560c64  fdiv s0,s0,s1
7100560c68  fcvtpu x0,s0
7100560c6c  cbz w8,0x7100560c90
7100560c70  cmp x0,#0x2
7100560c74  b.cc 0x7100560c94
7100560c78  sub x8,x0,#0x1
7100560c7c  clz x8,x8
7100560c80  neg x8,x8
7100560c84  mov w9,#0x1
7100560c88  lsl x0,x9,x8
7100560c8c  b 0x7100560c94
7100560c90  bl 0x71039c26e0
7100560c94  cmp x26,x0
7100560c98  csel x1,x0,x26,cc
7100560c9c  cmp x1,x19
7100560ca0  b.cs 0x7100560cac
7100560ca4  mov x0,x25
7100560ca8  b 0x7100560c30
7100560cac  ldr x24,[x25, #0x8]
7100560cb0  sub x8,x24,#0x1
7100560cb4  tst x8,x24
7100560cb8  b.eq 0x7100560ccc
7100560cbc  cmp x28,x24
7100560cc0  b.cs 0x7100560cd4
7100560cc4  mov x20,x28
7100560cc8  b 0x7100560cdc
7100560ccc  and x20,x8,x28
7100560cd0  b 0x7100560cdc
7100560cd4  udiv x8,x28,x24
7100560cd8  msub x20,x8,x24,x28
7100560cdc  ldr x9,[x25]
7100560ce0  ldr x8,[x9, x20, LSL #0x3]
7100560ce4  cbz x8,0x7100560cf4
7100560ce8  ldr x9,[x8]
7100560cec  str x9,[x27]
7100560cf0  b 0x7100560d40
7100560cf4  ldr x10,[sp, #0x8]
7100560cf8  ldr x8,[x10]
7100560cfc  str x8,[x27]
7100560d00  str x27,[x10]
7100560d04  str x10,[x9, x20, LSL #0x3]
7100560d08  ldr x8,[x27]
7100560d0c  cbz x8,0x7100560d44
7100560d10  ldr x8,[x8, #0x8]
7100560d14  sub x9,x24,#0x1
7100560d18  tst x9,x24
7100560d1c  b.eq 0x7100560d34
7100560d20  cmp x8,x24
7100560d24  b.cc 0x7100560d38
7100560d28  udiv x9,x8,x24
7100560d2c  msub x8,x9,x24,x8
7100560d30  b 0x7100560d38
7100560d34  and x8,x8,x9
7100560d38  ldr x9,[x25]
7100560d3c  add x8,x9,x8, LSL #0x3
7100560d40  str x27,[x8]
7100560d44  ldr x8,[x25, #0x18]
7100560d48  add x8,x8,#0x1
7100560d4c  str x8,[x25, #0x18]
7100560d50  ldr x0,[sp, #0x68]
7100560d54  bl 0x710355a420
7100560d58  ldrb w8,[sp, #0x108]
7100560d5c  ldr x20,[sp, #0x48]
7100560d60  tbz w8,#0x0,0x7100560d84
7100560d64  adrp x8,0x71052a8000
7100560d68  ldr x24,[sp, #0x118]
7100560d6c  ldr x8,[x8, #0xa70]
7100560d70  cbz x8,0x7100560d7c
7100560d74  mov x0,x24
7100560d78  bl 0x71039c19b0
7100560d7c  mov x0,x24
7100560d80  bl 0x710392eb40
7100560d84  ldr x25,[sp, #0x58]
7100560d88  ldrb w8,[sp, #0x3a0]
7100560d8c  tbz w8,#0x0,0x7100560db0
7100560d90  adrp x8,0x71052a8000
7100560d94  ldr x24,[sp, #0x3b0]
7100560d98  ldr x8,[x8, #0xa70]
7100560d9c  cbz x8,0x7100560da8
7100560da0  mov x0,x24
7100560da4  bl 0x71039c19b0
7100560da8  mov x0,x24
7100560dac  bl 0x710392eb40
7100560db0  add x0,sp,#0x3b8
7100560db4  bl 0x710355a420
7100560db8  add x21,x21,#0x78
7100560dbc  cmp x21,x20
7100560dc0  b.ne 0x710055faa0
7100560dc4  ldp x21,x19,[sp, #0xf0]
7100560dc8  cmp x21,x19
7100560dcc  b.eq 0x7100560e38
7100560dd0  ldr x9,[sp, #0xb0]
7100560dd4  mov w8,#0x9500
7100560dd8  movk w8,#0x1, LSL #16
7100560ddc  add x22,x9,x8
7100560de0  mov x23,x21
7100560de4  ldrb w8,[x23, #0x60]!
7100560de8  tbnz w8,#0x0,0x7100560df8
7100560dec  lsr x8,x8,#0x1
7100560df0  cbnz x8,0x7100560e00
7100560df4  b 0x7100560e2c
7100560df8  ldr x8,[x21, #0x68]
7100560dfc  cbz x8,0x7100560e2c
7100560e00  mov x0,x22
7100560e04  mov x1,x21
7100560e08  bl 0x710355b120
7100560e0c  cbz x0,0x7100560e2c
7100560e10  mov x24,x0
7100560e14  mov x0,x22
7100560e18  mov x1,x23
7100560e1c  bl 0x710355b120
7100560e20  cbz x0,0x7100560e2c
7100560e24  add x8,x0,#0x28
7100560e28  str x8,[x24, #0x98]
7100560e2c  add x21,x21,#0x78
7100560e30  cmp x19,x21
7100560e34  b.ne 0x7100560de0
7100560e38  add x27,sp,#0x358
7100560e3c  ldr x21,[sp, #0xb0]
7100560e40  add x25,sp,#0x108
7100560e44  orr x8,x27,#0x1
7100560e48  str x8,[sp, #0xa0]
7100560e4c  add x8,sp,#0x3b8
7100560e50  mov x26,xzr
7100560e54  add x23,x27,#0x8
7100560e58  add x24,x25,#0x9
7100560e5c  add x20,x8,#0x8
7100560e60  add x8,x8,#0x9
7100560e64  str x8,[sp, #0x80]
7100560e68  mov w28,#0x28
7100560e6c  mov w19,#0x89
7100560e70  ldr x8,[sp, #0xa0]
7100560e74  ldr x1,[sp, #0xc0]
7100560e78  mov w9,#0x5f45
7100560e7c  stp xzr,xzr,[x23]
7100560e80  strh w9,[x8, #0x4]
7100560e84  mov w9,#0x4f4c
7100560e88  movk w9,#0x5055, LSL #16
7100560e8c  str w9,[x8]
7100560e90  add w8,w26,#0x30
7100560e94  orr w9,wzr,#0xe
7100560e98  add x0,sp,#0x108
7100560e9c  add x2,sp,#0x358
7100560ea0  strb w8,[sp, #0x35f]
7100560ea4  strb w9,[sp, #0x358]
7100560ea8  strb wzr,[sp, #0x360]
7100560eac  bl 0x7103864d90
7100560eb0  ldr x8,[sp, #0x118]
7100560eb4  cbz x8,0x7100560f04
7100560eb8  ldr x8,[x8]
7100560ebc  ldr x9,[sp, #0x120]
7100560ec0  cmp x8,x9
7100560ec4  b.ne 0x7100560f04
7100560ec8  madd x9,x26,x28,x21
7100560ecc  ldr x8,[sp, #0x110]
7100560ed0  mov w10,#0x9530
7100560ed4  movk w10,#0x1, LSL #16
7100560ed8  mov w14,#0x9dc5
7100560edc  movk w14,#0x811c, LSL #16
7100560ee0  str x8,[x9, x10, LSL #0x0]
7100560ee4  cbz x8,0x7100560f1c
7100560ee8  madd x9,x26,x28,x21
7100560eec  ldr x8,[x8, #0x8]
7100560ef0  mov w10,#0x9538
7100560ef4  movk w10,#0x1, LSL #16
7100560ef8  str x8,[x9, x10, LSL #0x0]
7100560efc  ldr x8,[x8]
7100560f00  b 0x7100560f30
7100560f04  madd x8,x26,x28,x21
7100560f08  mov w9,#0x9530
7100560f0c  movk w9,#0x1, LSL #16
7100560f10  mov w14,#0x9dc5
7100560f14  movk w14,#0x811c, LSL #16
7100560f18  str xzr,[x8, x9, LSL #0x0]
7100560f1c  madd x9,x26,x28,x21
7100560f20  mov w10,#0x9538
7100560f24  movk w10,#0x1, LSL #16
7100560f28  mov x8,xzr
7100560f2c  str xzr,[x9, x10, LSL #0x0]
7100560f30  madd x9,x26,x28,x21
7100560f34  mov w10,#0x9540
7100560f38  movk w10,#0x1, LSL #16
7100560f3c  str x8,[x9, x10, LSL #0x0]
7100560f40  orr x8,xzr,#0xf00000000
7100560f44  str x8,[sp, #0x108]
7100560f48  mov x8,#0x6645
7100560f4c  movk x8,#0x6566, LSL #16
7100560f50  movk x8,#0x7463, LSL #32
7100560f54  movk x8,#0x614d, LSL #48
7100560f58  str x8,[sp, #0x110]
7100560f5c  mov x8,#0x616e
7100560f60  movk x8,#0x6567, LSL #16
7100560f64  movk x8,#0x2072, LSL #32
7100560f68  movk x8,#0x28, LSL #48
7100560f6c  str x8,[sp, #0x118]
7100560f70  mov x8,x24
7100560f74  mov w10,#0x45
7100560f78  mov w9,w14
7100560f7c  mul w9,w9,w19
7100560f80  and w10,w10,#0xff
7100560f84  eor w9,w9,w10
7100560f88  ldrb w10,[x8], #0x1
7100560f8c  cbnz w10,0x7100560f7c
7100560f90  mov x8,xzr
7100560f94  mov w10,#0x4c
7100560f98  str w9,[sp, #0x108]
7100560f9c  tst w10,#0xff
7100560fa0  b.eq 0x7100561010
7100560fa4  ldrsw x11,[sp, #0x10c]
7100560fa8  add x9,x27,x8
7100560fac  add w12,w11,#0x1
7100560fb0  add x11,x25,x11
7100560fb4  str w12,[sp, #0x10c]
7100560fb8  strb w10,[x11, #0x8]
7100560fbc  ldrb w10,[x9, #0x2]
7100560fc0  cbz w10,0x7100561010
7100560fc4  ldrsw x11,[sp, #0x10c]
7100560fc8  add w12,w11,#0x1
7100560fcc  add x11,x25,x11
7100560fd0  str w12,[sp, #0x10c]
7100560fd4  strb w10,[x11, #0x8]
7100560fd8  ldrb w10,[x9, #0x3]
7100560fdc  cbz w10,0x7100561010
7100560fe0  ldrsw x11,[sp, #0x10c]
7100560fe4  add w12,w8,#0x11
7100560fe8  cmp w12,#0x3d
7100560fec  add w13,w11,#0x1
7100560ff0  add x11,x25,x11
7100560ff4  str w13,[sp, #0x10c]
7100560ff8  strb w10,[x11, #0x8]
7100560ffc  b.hi 0x7100561010
7100561000  ldrb w10,[x9, #0x4]
7100561004  add x8,x8,#0x3
7100561008  tst w10,#0xff
710056100c  b.ne 0x7100560fa4
7100561010  ldrsw x8,[sp, #0x10c]
7100561014  add x9,x25,#0x8
7100561018  strb wzr,[x9, x8, LSL ]
710056101c  ldrb w8,[sp, #0x110]
7100561020  mov w9,w14
7100561024  cbz w8,0x7100561044
7100561028  mov x10,x24
710056102c  mov w9,w14
7100561030  mul w9,w9,w19
7100561034  and w8,w8,#0xff
7100561038  eor w9,w9,w8
710056103c  ldrb w8,[x10], #0x1
7100561040  cbnz w8,0x7100561030
7100561044  ldr w8,[sp, #0x10c]
7100561048  cmp w8,#0x3e
710056104c  str w9,[sp, #0x108]
7100561050  b.gt 0x7100561070
7100561054  sxtw x9,w8
7100561058  add w8,w8,#0x1
710056105c  str w8,[sp, #0x10c]
7100561060  add x8,x25,x9
7100561064  mov w9,#0x29
7100561068  strb w9,[x8, #0x8]
710056106c  ldr w8,[sp, #0x10c]
7100561070  add x9,x25,#0x8
7100561074  strb wzr,[x9, w8, SXTW ]
7100561078  ldrb w8,[sp, #0x110]
710056107c  cbz w8,0x71005610d0
7100561080  mov x9,x24
7100561084  mov w10,w8
7100561088  mov w11,w14
710056108c  mul w11,w11,w19
7100561090  and w10,w10,#0xff
7100561094  eor w11,w11,w10
7100561098  ldrb w10,[x9], #0x1
710056109c  cbnz w10,0x710056108c
71005610a0  mov x10,xzr
71005610a4  str w11,[sp, #0x108]
71005610a8  str wzr,[sp, #0x3b8]
71005610ac  add w9,w10,#0x1
71005610b0  cmp w9,#0x3e
71005610b4  strb w8,[x20, x10, LSL ]
71005610b8  b.hi 0x71005610e0
71005610bc  ldrb w8,[x24, x10, LSL ]
71005610c0  add x9,x10,#0x1
71005610c4  mov x10,x9
71005610c8  cbnz w8,0x71005610ac
71005610cc  b 0x71005610e4
71005610d0  mov x9,xzr
71005610d4  str w14,[sp, #0x108]
71005610d8  str wzr,[sp, #0x3b8]
71005610dc  b 0x71005610e4
71005610e0  add w9,w10,#0x1
71005610e4  add x8,sp,#0x3b8
71005610e8  add x8,x8,#0x8
71005610ec  strb wzr,[x8, w9, UXTW ]
71005610f0  ldrb w8,[sp, #0x3c0]
71005610f4  str w9,[sp, #0x3bc]
71005610f8  mov w9,w14
71005610fc  cbz w8,0x710056111c
7100561100  ldr x10,[sp, #0x80]
7100561104  mov w9,w14
7100561108  mul w9,w9,w19
710056110c  and w8,w8,#0xff
7100561110  eor w9,w9,w8
7100561114  ldrb w8,[x10], #0x1
7100561118  cbnz w8,0x7100561108
710056111c  mov w0,#0x10
7100561120  mov w1,#0x10
7100561124  str w9,[sp, #0x3b8]
7100561128  bl 0x710392e290
710056112c  mov x22,x0
7100561130  cbnz x0,0x710056117c
7100561134  adrp x8,0x7105332000
7100561138  ldr x0,[x8, #0xf00]
710056113c  cbz x0,0x7100561178
7100561140  mov w8,#0x10
7100561144  str wzr,[sp, #0x2c8]
7100561148  add x1,sp,#0x2c8
710056114c  str x8,[sp, #0x310]
7100561150  ldr x8,[x0]
7100561154  ldr x8,[x8, #0x30]
7100561158  add x2,sp,#0x310
710056115c  blr x8
7100561160  tbz w0,#0x0,0x7100561178
7100561164  mov w0,#0x10
7100561168  mov w1,#0x10
710056116c  bl 0x710392e290
7100561170  mov x22,x0
7100561174  cbnz x0,0x710056117c
7100561178  mov x22,xzr
710056117c  add x1,sp,#0x3b8
7100561180  mov x0,x22
7100561184  bl 0x710363f2d0
7100561188  madd x8,x26,x28,x21
710056118c  mov w9,#0x9548
7100561190  movk w9,#0x1, LSL #16
7100561194  ldr x21,[x8, x9, LSL #0x0]
7100561198  str x22,[x8, x9, LSL #0x0]
710056119c  cbz x21,0x7100561208
71005611a0  ldr x22,[x21, #0x8]
71005611a4  cbz x22,0x71005611d8
71005611a8  add x8,x22,#0x8
71005611ac  ldaxr x9,[x8]
71005611b0  sub x10,x9,#0x1
71005611b4  stlxr w11,x10,[x8]
71005611b8  cbnz w11,0x71005611ac
71005611bc  cbnz x9,0x71005611d8
71005611c0  ldr x8,[x22]
71005611c4  ldr x8,[x8, #0x10]
71005611c8  mov x0,x22
71005611cc  blr x8
71005611d0  mov x0,x22
71005611d4  bl 0x71039c2670
71005611d8  mov x0,x21
71005611dc  bl 0x710392eb40
71005611e0  ldrb w8,[sp, #0x358]
71005611e4  tbz w8,#0x0,0x7100561208
71005611e8  adrp x8,0x71052a8000
71005611ec  ldr x21,[sp, #0x368]
71005611f0  ldr x8,[x8, #0xa70]
71005611f4  cbz x8,0x7100561200
71005611f8  mov x0,x21
71005611fc  bl 0x71039c19b0
7100561200  mov x0,x21
7100561204  bl 0x710392eb40
7100561208  ldr x21,[sp, #0xb0]
710056120c  add x26,x26,#0x1
7100561210  cmp x26,#0x8
7100561214  b.ne 0x7100560e70
7100561218  add x0,sp,#0x358
710056121c  mov w1,#0x10
7100561220  mov w2,#0x20
7100561224  stp xzr,xzr,[sp, #0x110]
7100561228  str xzr,[sp, #0x108]
710056122c  bl 0x710392e1f0
7100561230  cmp w0,#0xc
7100561234  b.ne 0x7100561270
7100561238  adrp x8,0x710593d000
710056123c  ldr x0,[x8, #0x2b0]
7100561240  cbz x0,0x7100561270
7100561244  mov w8,#0x20
7100561248  str x8,[sp, #0x3b8]
710056124c  ldr x8,[x0]
7100561250  ldr x8,[x8, #0x30]
7100561254  add x1,sp,#0x3b8
7100561258  blr x8
710056125c  tbz w0,#0x0,0x7100561270
7100561260  add x0,sp,#0x358
7100561264  mov w1,#0x10
7100561268  mov w2,#0x20
710056126c  bl 0x710392e1f0
7100561270  adrp x8,0x71052a8000
7100561274  ldr x8,[x8, #0xa78]
7100561278  ldr x24,[sp, #0x58]
710056127c  add x23,sp,#0x358
7100561280  cbz x8,0x7100561294
7100561284  ldr x2,[sp, #0x358]
7100561288  mov w0,#0x20
710056128c  mov w1,#0x10
7100561290  bl 0x71039c19e0
7100561294  adrp x10,0x71042d4000
7100561298  add x10,x10,#0xda0
710056129c  ldr x21,[sp, #0x358]
71005612a0  ldr x11,[x10, #0x10]
71005612a4  mov w8,#0x21
71005612a8  orr w9,wzr,#0x18
71005612ac  stp x9,x21,[sp, #0x110]
71005612b0  str x8,[sp, #0x108]
71005612b4  str x11,[x21, #0x10]
71005612b8  ldp x8,x9,[x10]
71005612bc  stp x8,x9,[x21]
71005612c0  ldr x8,[sp]
71005612c4  add x0,x8,#0x10
71005612c8  add x1,sp,#0x108
71005612cc  strb wzr,[x21, #0x18]
71005612d0  bl 0x7103550630
71005612d4  cbz x0,0x7100561304
71005612d8  ldr x8,[x0, #0x38]
71005612dc  cbz x8,0x71005612f8
71005612e0  ldr x8,[x8]
71005612e4  ldr x9,[x0, #0x40]
71005612e8  cmp x8,x9
71005612ec  b.ne 0x71005612f8
71005612f0  ldr x20,[x0, #0x30]
71005612f4  b 0x71005612fc
71005612f8  mov x20,xzr
71005612fc  mov w22,#0x1
7100561300  b 0x710056130c
7100561304  mov x20,xzr
7100561308  mov w22,wzr
710056130c  adrp x8,0x71052a8000
7100561310  ldr x8,[x8, #0xa70]
7100561314  cbz x8,0x7100561320
7100561318  mov x0,x21
710056131c  bl 0x71039c19b0
7100561320  mov x0,x21
7100561324  bl 0x710392eb40
7100561328  ldr x21,[sp, #0xb0]
710056132c  tbz w22,#0x0,0x71005613d8
7100561330  mov w8,#0x10
7100561334  stp xzr,xzr,[sp, #0x108]
7100561338  strb w8,[sp, #0x108]
710056133c  mov x8,#0x756e
7100561340  movk x8,#0x3a3a, LSL #16
7100561344  movk x8,#0x6f53, LSL #32
7100561348  movk x8,#0x7472, LSL #48
710056134c  add x9,sp,#0xa
7100561350  str xzr,[sp, #0x118]
7100561354  stur x8,[x9, #0xff]
7100561358  add x1,sp,#0x108
710056135c  strb wzr,[sp, #0x111]
7100561360  ldr x0,[x20, #0x40]
7100561364  bl 0x7103556f50
7100561368  cbz x0,0x71005613d8
710056136c  ldr x8,[x0, #0x38]
7100561370  cbz x8,0x71005613b0
7100561374  ldr x8,[x8]
7100561378  ldr x9,[x0, #0x40]
710056137c  cmp x8,x9
7100561380  b.ne 0x71005613b0
7100561384  ldr x8,[x0, #0x30]
7100561388  mov w9,#0x9670
710056138c  movk w9,#0x1, LSL #16
7100561390  str x8,[x21, x9, LSL #0x0]
7100561394  cbz x8,0x71005613bc
7100561398  ldr x8,[x8, #0x8]
710056139c  mov w9,#0x9678
71005613a0  movk w9,#0x1, LSL #16
71005613a4  str x8,[x21, x9, LSL #0x0]
71005613a8  ldr x8,[x8]
71005613ac  b 0x71005613cc
71005613b0  mov w8,#0x9670
71005613b4  movk w8,#0x1, LSL #16
71005613b8  str xzr,[x21, x8, LSL #0x0]
71005613bc  mov w9,#0x9678
71005613c0  movk w9,#0x1, LSL #16
71005613c4  mov x8,xzr
71005613c8  str xzr,[x21, x9, LSL #0x0]
71005613cc  mov w9,#0x9680
71005613d0  movk w9,#0x1, LSL #16
71005613d4  str x8,[x21, x9, LSL #0x0]
71005613d8  mov x8,#0x2800000000
71005613dc  str x8,[sp, #0x108]
71005613e0  mov x8,#0x616e
71005613e4  movk x8,#0x6567, LSL #16
71005613e8  mov x9,#0x6645
71005613ec  movk x9,#0x6566, LSL #16
71005613f0  movk x8,#0x2072, LSL #32
71005613f4  movk x8,#0x4e28, LSL #48
71005613f8  movk x9,#0x7463, LSL #32
71005613fc  movk x9,#0x614d, LSL #48
7100561400  stp x9,x8,[sp, #0x110]
7100561404  mov w8,#0x444f
7100561408  strh w8,[sp, #0x120]
710056140c  mov x8,#0x5f45
7100561410  movk x8,#0x4955, LSL #16
7100561414  movk x8,#0x4f5f, LSL #32
7100561418  movk x8,#0x4646, LSL #48
710056141c  add x9,sp,#0x23
7100561420  stur x8,[x9, #0xff]
7100561424  mov w8,#0x4353
7100561428  movk w8,#0x4552, LSL #16
710056142c  add x9,sp,#0x2b
7100561430  stur w8,[x9, #0xff]
7100561434  mov w8,#0x4e45
7100561438  strh w8,[sp, #0x12e]
710056143c  strb wzr,[sp, #0x138]
7100561440  mov x8,#0x455f
7100561444  movk x8,#0x4646, LSL #16
7100561448  movk x8,#0x4345, LSL #32
710056144c  movk x8,#0x2954, LSL #48
7100561450  str x8,[sp, #0x130]
7100561454  mov w9,#0x45
7100561458  mov w8,#0x9
710056145c  add x10,sp,#0x108
7100561460  mov w11,#0x9dc5
7100561464  movk w11,#0x811c, LSL #16
7100561468  mul w11,w11,w19
710056146c  and w9,w9,#0xff
7100561470  eor w11,w11,w9
7100561474  ldrb w9,[x10, x8, LSL ]
7100561478  add x8,x8,#0x1
710056147c  cbnz w9,0x7100561468
7100561480  mov w0,#0x10
7100561484  mov w1,#0x10
7100561488  str w11,[sp, #0x108]
710056148c  bl 0x710392e290
7100561490  mov x22,x0
7100561494  cbnz x0,0x71005614e0
7100561498  adrp x8,0x7105332000
710056149c  ldr x0,[x8, #0xf00]
71005614a0  cbz x0,0x71005614dc
71005614a4  mov w8,#0x10
71005614a8  str wzr,[sp, #0x358]
71005614ac  add x1,sp,#0x358
71005614b0  str x8,[sp, #0x3b8]
71005614b4  ldr x8,[x0]
71005614b8  ldr x8,[x8, #0x30]
71005614bc  add x2,sp,#0x3b8
71005614c0  blr x8
71005614c4  tbz w0,#0x0,0x71005614dc
71005614c8  mov w0,#0x10
71005614cc  mov w1,#0x10
71005614d0  bl 0x710392e290
71005614d4  mov x22,x0
71005614d8  cbnz x0,0x71005614e0
71005614dc  mov x22,xzr
71005614e0  add x1,sp,#0x108
71005614e4  mov x0,x22
71005614e8  bl 0x710363f2d0
71005614ec  mov w8,#0x9688
71005614f0  movk w8,#0x1, LSL #16
71005614f4  mov x9,x21
71005614f8  ldr x21,[x21, x8, LSL #0x0]
71005614fc  str x22,[x9, x8, LSL #0x0]
7100561500  cbz x21,0x7100561544
7100561504  ldr x22,[x21, #0x8]
7100561508  cbz x22,0x710056153c
710056150c  add x8,x22,#0x8
7100561510  ldaxr x9,[x8]
7100561514  sub x10,x9,#0x1
7100561518  stlxr w11,x10,[x8]
710056151c  cbnz w11,0x7100561510
7100561520  cbnz x9,0x710056153c
7100561524  ldr x8,[x22]
7100561528  ldr x8,[x8, #0x10]
710056152c  mov x0,x22
7100561530  blr x8
7100561534  mov x0,x22
7100561538  bl 0x71039c2670
710056153c  mov x0,x21
7100561540  bl 0x710392eb40
7100561544  mov w1,#0xd8
7100561548  mov w0,#0x10
710056154c  bl 0x710392e290
7100561550  mov x21,x0
7100561554  cbnz x0,0x71005615a0
7100561558  adrp x8,0x7105332000
710056155c  ldr x0,[x8, #0xf00]
7100561560  cbz x0,0x710056159c
7100561564  mov w8,#0xd8
7100561568  str wzr,[sp, #0x358]
710056156c  add x1,sp,#0x358
7100561570  str x8,[sp, #0x3b8]
7100561574  ldr x8,[x0]
7100561578  ldr x8,[x8, #0x30]
710056157c  add x2,sp,#0x3b8
7100561580  blr x8
7100561584  tbz w0,#0x0,0x710056159c
7100561588  mov w1,#0xd8
710056158c  mov w0,#0x10
7100561590  bl 0x710392e290
7100561594  mov x21,x0
7100561598  cbnz x0,0x71005615a0
710056159c  mov x21,xzr
71005615a0  mov x0,x21
71005615a4  bl 0x710003a0e0
71005615a8  ldr x22,[x24, #0x190]
71005615ac  str x21,[x24, #0x190]
71005615b0  cbz x22,0x71005615c4
71005615b4  mov x0,x22
71005615b8  bl 0x710003a120
71005615bc  mov x0,x22
71005615c0  bl 0x710392eb40
71005615c4  mov w8,#0x12
71005615c8  str xzr,[sp, #0x3b8]
71005615cc  strb w8,[sp, #0x3b8]
71005615d0  adrp x8,0x7104497000
71005615d4  add x8,x8,#0x720
71005615d8  ldr x8,[x8]
71005615dc  ldr x1,[sp, #0xc0]
71005615e0  str xzr,[sp, #0x3c0]
71005615e4  str xzr,[sp, #0x3c8]
71005615e8  stur x8,[x23, #0x61]
71005615ec  mov w8,#0x52
71005615f0  add x0,sp,#0x358
71005615f4  add x2,sp,#0x3b8
71005615f8  sturh w8,[x23, #0x69]
71005615fc  bl 0x710385c280
7100561600  ldr x20,[sp, #0x360]
7100561604  ldr x8,[x20]
7100561608  ldr x9,[x8, #0x18]
710056160c  add x8,sp,#0x3b8
7100561610  mov x0,x20
7100561614  blr x9
7100561618  ldr x8,[sp, #0x3c0]
710056161c  ldr x1,[x8, #0x1c0]
7100561620  ldr x0,[x24, #0x190]
7100561624  bl 0x71000314e0
7100561628  mov w1,#0x48
710056162c  mov w0,#0x10
7100561630  bl 0x710392e290
7100561634  mov x21,x0
7100561638  cbnz x0,0x7100561684
710056163c  adrp x8,0x7105332000
7100561640  ldr x0,[x8, #0xf00]
7100561644  cbz x0,0x7100561680
7100561648  mov w8,#0x48
710056164c  str wzr,[sp, #0x310]
7100561650  add x1,sp,#0x310
7100561654  str x8,[sp, #0x3b8]
7100561658  ldr x8,[x0]
710056165c  ldr x8,[x8, #0x30]
7100561660  add x2,sp,#0x3b8
7100561664  blr x8
7100561668  tbz w0,#0x0,0x7100561680
710056166c  mov w1,#0x48
7100561670  mov w0,#0x10
7100561674  bl 0x710392e290
7100561678  mov x21,x0
710056167c  cbnz x0,0x7100561684
7100561680  mov x21,xzr
7100561684  mov x0,x21
7100561688  bl 0x710003a240
710056168c  ldr x22,[x24, #0x198]
7100561690  str x21,[x24, #0x198]
7100561694  cbz x22,0x71005616a8
7100561698  mov x0,x22
710056169c  bl 0x710003a260
71005616a0  mov x0,x22
71005616a4  bl 0x710392eb40
71005616a8  add x0,sp,#0x3b8
71005616ac  str xzr,[sp, #0x3f0]
71005616b0  str xzr,[sp, #0x3e8]
71005616b4  str xzr,[sp, #0x3e0]
71005616b8  str xzr,[sp, #0x3d8]
71005616bc  str xzr,[sp, #0x3d0]
71005616c0  str xzr,[sp, #0x3c8]
71005616c4  str xzr,[sp, #0x3c0]
71005616c8  str xzr,[sp, #0x3b8]
71005616cc  bl 0x7100031360
71005616d0  ldr x8,[x20]
71005616d4  ldr x9,[x8, #0x18]
71005616d8  add x8,sp,#0x310
71005616dc  mov x0,x20
71005616e0  blr x9
71005616e4  ldr x8,[sp, #0x318]
71005616e8  ldr w9,[x8, #0x1e0]
71005616ec  adrp x8,0x71046fd000
71005616f0  add x8,x8,#0x6bc
71005616f4  orr w10,wzr,#0xffff
71005616f8  ldr w11,[x8], #0x8
71005616fc  cmp w11,w10
7100561700  b.eq 0x710056170c
7100561704  cmp w11,w9
7100561708  b.ne 0x71005616f8
710056170c  ldur w8,[x8, #-0x4]
7100561710  str w8,[sp, #0x3bc]
7100561714  ldr x8,[x24, #0x190]
7100561718  str x8,[sp, #0x3e8]
710056171c  adrp x8,0x7105336000
7100561720  ldr x0,[x24, #0x198]
7100561724  ldr x1,[x8, #0xe08]
7100561728  add x2,sp,#0x3b8
710056172c  bl 0x710003a270
7100561730  mov w0,#0x10
7100561734  mov w1,#0x8
7100561738  bl 0x710392e290
710056173c  cbnz x0,0x7100561784
7100561740  adrp x8,0x7105332000
7100561744  ldr x0,[x8, #0xf00]
7100561748  cbz x0,0x7100561780
710056174c  mov w8,#0x8
7100561750  str wzr,[sp, #0x2c8]
7100561754  add x1,sp,#0x2c8
7100561758  str x8,[sp, #0x310]
710056175c  ldr x8,[x0]
7100561760  ldr x8,[x8, #0x30]
7100561764  add x2,sp,#0x310
7100561768  blr x8
710056176c  tbz w0,#0x0,0x7100561780
7100561770  mov w0,#0x10
7100561774  mov w1,#0x8
7100561778  bl 0x710392e290
710056177c  cbnz x0,0x7100561784
7100561780  mov x0,xzr
7100561784  mov x8,#-0x1
7100561788  str x8,[x0]
710056178c  ldr x8,[x24, #0x1a0]
7100561790  str x0,[x24, #0x1a0]
7100561794  cbz x8,0x71005617a4
7100561798  mov x0,x8
710056179c  bl 0x710392eb40
71005617a0  ldr x0,[x24, #0x1a0]
71005617a4  ldr x1,[x24, #0x198]
71005617a8  mov x2,xzr
71005617ac  bl 0x71035b9360
71005617b0  ldr x25,[sp, #0xd8]
71005617b4  ldr x8,[sp, #0x90]
71005617b8  adrp x20,0x7105334000
71005617bc  adrp x21,0x7105334000
71005617c0  str wzr,[x20, #0x808]
71005617c4  str wzr,[x21, #0x80c]
71005617c8  cmp x25,x8
71005617cc  b.eq 0x7100561888
71005617d0  ldr x9,[sp, #0xb0]
71005617d4  mov w8,#0x9500
71005617d8  movk w8,#0x1, LSL #16
71005617dc  mov w22,wzr
71005617e0  mov w23,wzr
71005617e4  mov w24,#0x1
71005617e8  add x19,x9,x8
71005617ec  add x1,x25,#0x28
71005617f0  mov x0,x19
71005617f4  bl 0x710355b120
71005617f8  cbz x0,0x7100561830
71005617fc  ldr w8,[x25, #0x20]
7100561800  ldr w9,[x0, #0x80]
7100561804  lsl w8,w24,w8
7100561808  orr w8,w9,w8
710056180c  ldrb w9,[x0, #0xa0]
7100561810  str w8,[x0, #0x80]
7100561814  cbz w9,0x7100561820
7100561818  orr w23,w23,w8
710056181c  str w23,[x20, #0x808]
7100561820  ldrb w9,[x0, #0xa1]
7100561824  cbz w9,0x7100561830
7100561828  orr w22,w22,w8
710056182c  str w22,[x21, #0x80c]
7100561830  ldr x8,[x25, #0x8]
7100561834  cbz x8,0x7100561848
7100561838  mov x25,x8
710056183c  ldr x8,[x8]
7100561840  cbnz x8,0x7100561838
7100561844  b 0x710056187c
7100561848  mov x8,x25
710056184c  ldr x9,[x8, #0x10]!
7100561850  ldr x10,[x9]
7100561854  cmp x10,x25
7100561858  b.eq 0x7100561878
710056185c  ldr x9,[x8]
7100561860  mov x8,x9
7100561864  ldr x25,[x8, #0x10]!
7100561868  ldr x10,[x25]
710056186c  cmp x10,x9
7100561870  b.ne 0x710056185c
7100561874  b 0x710056187c
7100561878  mov x25,x9
710056187c  ldr x8,[sp, #0x90]
7100561880  cmp x25,x8
7100561884  b.ne 0x71005617ec
7100561888  adrp x20,0x7105334000
710056188c  ldr x8,[x20, #0x948]
7100561890  cbnz x8,0x71005618fc
7100561894  mov w1,#0x1370
7100561898  mov w0,#0x10
710056189c  bl 0x710392e290
71005618a0  mov x19,x0
71005618a4  cbnz x0,0x71005618f0
71005618a8  adrp x8,0x7105332000
71005618ac  ldr x0,[x8, #0xf00]
71005618b0  cbz x0,0x71005618ec
71005618b4  mov w8,#0x1370
71005618b8  str wzr,[sp, #0x3b8]
71005618bc  add x1,sp,#0x3b8
71005618c0  str x8,[sp, #0x108]
71005618c4  ldr x8,[x0]
71005618c8  ldr x8,[x8, #0x30]
71005618cc  add x2,sp,#0x108
71005618d0  blr x8
71005618d4  tbz w0,#0x0,0x71005618ec
71005618d8  mov w1,#0x1370
71005618dc  mov w0,#0x10
71005618e0  bl 0x710392e290
71005618e4  mov x19,x0
71005618e8  cbnz x0,0x71005618f0
71005618ec  mov x19,xzr
71005618f0  mov x0,x19
71005618f4  bl 0x7103564ec0
71005618f8  str x19,[x20, #0x948]
71005618fc  adrp x8,0x7105334000
7100561900  ldr x8,[x8, #0x920]
7100561904  ldr x9,[x8]
7100561908  adrp x10,0x7100561000
710056190c  add x10,x10,#0xac0
7100561910  mov w11,#0x9470
7100561914  movk w11,#0x1, LSL #16
7100561918  str x10,[x9, x11, LSL #0x0]
710056191c  ldr x8,[x8]
7100561920  mov w9,#0x9478
7100561924  movk w9,#0x1, LSL #16
7100561928  adrp x10,0x7100561000
710056192c  add x10,x10,#0xb60
7100561930  str x10,[x8, x9, LSL #0x0]
7100561934  add x8,sp,#0xd8
7100561938  add x0,x8,#0x18
710056193c  bl 0x710055cee0
7100561940  ldr x0,[sp, #0xe0]
7100561944  bl 0x710055d020
7100561948  add sp,sp,#0x4d0
710056194c  ldp x29,x30,[sp, #0x50]
7100561950  ldp x20,x19,[sp, #0x40]
7100561954  ldp x22,x21,[sp, #0x30]
7100561958  ldp x24,x23,[sp, #0x20]
710056195c  ldp x26,x25,[sp, #0x10]
7100561960  ldp x28,x27,[sp], #0x60
7100561964  ret
7100561968  adrp x0,0x7105336000
710056196c  add x0,x0,#0xdc0
7100561970  bl 0x71039c06b0
7100561974  cbz w0,0x710055ecb8
7100561978  adrp x1,0x7105336000
710056197c  add x1,x1,#0xd40
7100561980  mov w8,#0x24
7100561984  adrp x9,0x7104431000
7100561988  add x9,x9,#0x9d8
710056198c  str xzr,[x1, #0x10]
7100561990  stp xzr,xzr,[x1]
7100561994  strb w8,[x1]
7100561998  ldp x8,x9,[x9]
710056199c  stur x8,[x1, #0x1]
71005619a0  mov w8,#0x5443
71005619a4  adrp x0,0x7103558000
71005619a8  add x0,x0,#0x230
71005619ac  adrp x2,0x7104f17000
71005619b0  add x2,x2,#0x0
71005619b4  stur x9,[x1, #0x9]
71005619b8  sturh w8,[x1, #0x11]
71005619bc  strb wzr,[x1, #0x13]
71005619c0  bl 0x71000001c0
71005619c4  adrp x0,0x7105336000
71005619c8  add x0,x0,#0xdc0
71005619cc  bl 0x71039c06c0
71005619d0  b 0x710055ecb8
71005619d4  adrp x0,0x7105336000
71005619d8  add x0,x0,#0xdc8
71005619dc  bl 0x71039c06b0
71005619e0  cbz w0,0x710055ecc8
71005619e4  adrp x1,0x7105336000
71005619e8  add x1,x1,#0xd58
71005619ec  adrp x8,0x710437b000
71005619f0  add x8,x8,#0x0
71005619f4  mov w9,#0x2c
71005619f8  strb w9,[x1]
71005619fc  ldur x9,[x8, #0xe]
7100561a00  stur x9,[x1, #0xf]
7100561a04  adrp x0,0x7103558000
7100561a08  add x0,x0,#0x230
7100561a0c  ldp x9,x8,[x8]
7100561a10  adrp x2,0x7104f17000
7100561a14  add x2,x2,#0x0
7100561a18  stur x9,[x1, #0x1]
7100561a1c  stur x8,[x1, #0x9]
7100561a20  strb wzr,[x1, #0x17]
7100561a24  bl 0x71000001c0
7100561a28  adrp x0,0x7105336000
7100561a2c  add x0,x0,#0xdc8
7100561a30  bl 0x71039c06c0
7100561a34  b 0x710055ecc8
7100561a38  adrp x0,0x7105336000
7100561a3c  add x0,x0,#0xdd0
7100561a40  bl 0x71039c06b0
7100561a44  cbz w0,0x710055ecd8
7100561a48  adrp x1,0x7105336000
7100561a4c  add x1,x1,#0xd70
7100561a50  mov w8,#0x10
7100561a54  stp xzr,xzr,[x1]
7100561a58  strb w8,[x1]
7100561a5c  mov x8,#0x756e
7100561a60  movk x8,#0x3a3a, LSL #16
7100561a64  movk x8,#0x6f53, LSL #32
7100561a68  movk x8,#0x7472, LSL #48
7100561a6c  adrp x0,0x7103558000
7100561a70  add x0,x0,#0x230
7100561a74  adrp x2,0x7104f17000
7100561a78  add x2,x2,#0x0
7100561a7c  str xzr,[x1, #0x10]
7100561a80  stur x8,[x1, #0x1]
7100561a84  strb wzr,[x1, #0x9]
7100561a88  bl 0x71000001c0
7100561a8c  adrp x0,0x7105336000
7100561a90  add x0,x0,#0xdd0
7100561a94  bl 0x71039c06c0
7100561a98  b 0x710055ecd8
7100561a9c  bl 0x71039c1a00
7100561aa0  add x0,sp,#0x3b8
7100561aa4  bl 0x71039c1a00
7100561aa8  add x0,sp,#0x108
7100561aac  bl 0x71039c1a00
7100561ab0  mov x0,x20
7100561ab4  bl 0x71039c0c00
