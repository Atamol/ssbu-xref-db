// addr:      7101f2d070
// offset:    0x1f2d070
// name:      FUN_7101f2d070
// mangled:   
// size:      3256

7101f2d070  sub sp,sp,#0x1e0
7101f2d074  stp x28,x27,[sp, #0x180]
7101f2d078  stp x26,x25,[sp, #0x190]
7101f2d07c  stp x24,x23,[sp, #0x1a0]
7101f2d080  stp x22,x21,[sp, #0x1b0]
7101f2d084  stp x20,x19,[sp, #0x1c0]
7101f2d088  stp x29,x30,[sp, #0x1d0]
7101f2d08c  add x29,sp,#0x1d0
7101f2d090  mov x23,x1
7101f2d094  ldr x1,[x1]
7101f2d098  add x19,x0,#0xd0
7101f2d09c  mov x22,x3
7101f2d0a0  mov x20,x0
7101f2d0a4  mov w3,#0x1
7101f2d0a8  mov x0,x19
7101f2d0ac  bl 0x71032cbf30
7101f2d0b0  ldr x1,[x23]
7101f2d0b4  mov w8,#0xe190
7101f2d0b8  movk w8,#0x2, LSL #16
7101f2d0bc  add x26,x20,x8
7101f2d0c0  mov w3,#0x1
7101f2d0c4  mov x2,x22
7101f2d0c8  mov x0,x26
7101f2d0cc  bl 0x71032cbf30
7101f2d0d0  ldr x8,[x20, #0xd0]
7101f2d0d4  ldr x8,[x8]
7101f2d0d8  ldr x9,[x8]
7101f2d0dc  ldr x8,[x9, #0x600]
7101f2d0e0  str wzr,[x8, #0x494]
7101f2d0e4  ldr x8,[x9, #0x608]
7101f2d0e8  ldr x9,[x9, #0x610]
7101f2d0ec  cmp x8,x9
7101f2d0f0  b.eq 0x7101f2d158
7101f2d0f4  sub x10,x9,#0x10
7101f2d0f8  sub x10,x10,x8
7101f2d0fc  ubfx x11,x10,#0x4,#0x1c
7101f2d100  add w11,w11,#0x1
7101f2d104  ands x11,x11,#0x3
7101f2d108  b.eq 0x7101f2d124
7101f2d10c  neg x11,x11
7101f2d110  ldr x12,[x8, #0x8]
7101f2d114  add x8,x8,#0x10
7101f2d118  adds x11,x11,#0x1
7101f2d11c  str wzr,[x12, #0x494]
7101f2d120  b.ne 0x7101f2d110
7101f2d124  cmp x10,#0x30
7101f2d128  b.cc 0x7101f2d158
7101f2d12c  ldr x10,[x8, #0x8]
7101f2d130  str wzr,[x10, #0x494]
7101f2d134  ldr x10,[x8, #0x18]
7101f2d138  str wzr,[x10, #0x494]
7101f2d13c  ldr x10,[x8, #0x28]
7101f2d140  str wzr,[x10, #0x494]
7101f2d144  ldr x10,[x8, #0x38]
7101f2d148  add x8,x8,#0x40
7101f2d14c  cmp x9,x8
7101f2d150  str wzr,[x10, #0x494]
7101f2d154  b.ne 0x7101f2d12c
7101f2d158  ldr x8,[x19]
7101f2d15c  ldr x8,[x8]
7101f2d160  ldr x0,[x8]
7101f2d164  mov w1,#0x1
7101f2d168  mov w22,#0x1
7101f2d16c  bl 0x71037760f0
7101f2d170  ldr x8,[x19]
7101f2d174  ldr x8,[x8]
7101f2d178  ldr x8,[x8]
7101f2d17c  ldr x9,[x8, #0x600]
7101f2d180  strb wzr,[x8, #0x656]
7101f2d184  strb wzr,[x9, #0x4ab]
7101f2d188  ldr x9,[x8, #0x608]
7101f2d18c  ldr x10,[x8, #0x610]
7101f2d190  cmp x9,x10
7101f2d194  b.eq 0x7101f2d210
7101f2d198  sub x11,x10,#0x10
7101f2d19c  sub x11,x11,x9
7101f2d1a0  ubfx x12,x11,#0x4,#0x1c
7101f2d1a4  add w12,w12,#0x1
7101f2d1a8  ands x12,x12,#0x3
7101f2d1ac  b.eq 0x7101f2d1cc
7101f2d1b0  neg x12,x12
7101f2d1b4  ldrb w13,[x8, #0x656]
7101f2d1b8  ldr x14,[x9, #0x8]
7101f2d1bc  add x9,x9,#0x10
7101f2d1c0  adds x12,x12,#0x1
7101f2d1c4  strb w13,[x14, #0x4ab]
7101f2d1c8  b.ne 0x7101f2d1b4
7101f2d1cc  cmp x11,#0x30
7101f2d1d0  b.cc 0x7101f2d210
7101f2d1d4  ldrb w11,[x8, #0x656]
7101f2d1d8  ldr x12,[x9, #0x8]
7101f2d1dc  strb w11,[x12, #0x4ab]
7101f2d1e0  ldrb w11,[x8, #0x656]
7101f2d1e4  ldr x12,[x9, #0x18]
7101f2d1e8  strb w11,[x12, #0x4ab]
7101f2d1ec  ldrb w11,[x8, #0x656]
7101f2d1f0  ldr x12,[x9, #0x28]
7101f2d1f4  strb w11,[x12, #0x4ab]
7101f2d1f8  ldrb w11,[x8, #0x656]
7101f2d1fc  ldr x12,[x9, #0x38]
7101f2d200  add x9,x9,#0x40
7101f2d204  cmp x10,x9
7101f2d208  strb w11,[x12, #0x4ab]
7101f2d20c  b.ne 0x7101f2d1d4
7101f2d210  ldr x8,[x20, #0xd0]
7101f2d214  ldr x8,[x8]
7101f2d218  ldr x8,[x8]
7101f2d21c  ldr x8,[x8, #0x600]
7101f2d220  mov w9,#0x100
7101f2d224  str w9,[x8, #0x18]
7101f2d228  ldr x8,[x20, #0xd0]
7101f2d22c  ldr x8,[x8]
7101f2d230  ldr x8,[x8]
7101f2d234  ldr x8,[x8, #0x600]
7101f2d238  mov w9,#0x200
7101f2d23c  str w9,[x8, #0x1c]
7101f2d240  ldr x9,[x20, #0xd0]
7101f2d244  ldr x9,[x9]
7101f2d248  ldr x9,[x9]
7101f2d24c  ldr x9,[x9, #0x600]
7101f2d250  mov w8,#0x80
7101f2d254  str w8,[x9, #0x20]
7101f2d258  mov w8,#0x101
7101f2d25c  strh w8,[sp, #0x48]
7101f2d260  mov x21,#0x41f0000000000000
7101f2d264  add x8,sp,#0x40
7101f2d268  add x0,sp,#0x40
7101f2d26c  str xzr,[sp, #0x40]
7101f2d270  stur wzr,[sp, #0x4a]
7101f2d274  strh wzr,[sp, #0x4e]
7101f2d278  str w22,[sp, #0x50]
7101f2d27c  strh w22,[sp, #0x54]
7101f2d280  strb w22,[sp, #0x56]
7101f2d284  str x21,[sp, #0x58]
7101f2d288  str wzr,[sp, #0x60]
7101f2d28c  str xzr,[sp, #0x90]
7101f2d290  str xzr,[sp, #0xc0]
7101f2d294  str xzr,[sp, #0xf0]
7101f2d298  str xzr,[sp, #0x120]
7101f2d29c  str xzr,[sp, #0x150]
7101f2d2a0  str wzr,[sp, #0x160]
7101f2d2a4  strb w22,[sp, #0x4a]
7101f2d2a8  add x23,x8,#0xf0
7101f2d2ac  bl 0x710337df20
7101f2d2b0  ldr x8,[x20, #0xd0]
7101f2d2b4  ldr x8,[x8]
7101f2d2b8  add x22,x20,#0xe8
7101f2d2bc  adrp x2,0x710424f000
7101f2d2c0  add x2,x2,#0xd71
7101f2d2c4  add x3,sp,#0x40
7101f2d2c8  mov x0,x22
7101f2d2cc  add x1,x8,#0x8
7101f2d2d0  bl 0x7103770b30
7101f2d2d4  adrp x2,0x7104281000
7101f2d2d8  add x2,x2,#0x32a
7101f2d2dc  mov x0,x22
7101f2d2e0  mov w1,wzr
7101f2d2e4  bl 0x71037717d0
7101f2d2e8  adrp x2,0x71042d6000
7101f2d2ec  add x2,x2,#0xb73
7101f2d2f0  mov w1,#0x1
7101f2d2f4  mov x0,x22
7101f2d2f8  bl 0x71037717d0
7101f2d2fc  ldr x0,[x20, #0xe8]
7101f2d300  ldr x8,[x0]
7101f2d304  ldr x8,[x8, #0x60]
7101f2d308  mov w1,wzr
7101f2d30c  blr x8
7101f2d310  ldr x0,[x20, #0xe8]
7101f2d314  ldr x8,[x0]
7101f2d318  ldr x8,[x8, #0x70]
7101f2d31c  mov w1,wzr
7101f2d320  blr x8
7101f2d324  ldr x0,[x20, #0xe8]
7101f2d328  orr w2,wzr,#0x6
7101f2d32c  mov w1,wzr
7101f2d330  mov w3,wzr
7101f2d334  bl 0x7103771930
7101f2d338  ldr x0,[x20, #0xe8]
7101f2d33c  mov w1,#0x1
7101f2d340  orr w2,wzr,#0x7
7101f2d344  mov w3,wzr
7101f2d348  bl 0x7103771930
7101f2d34c  ldr x0,[sp, #0x150]
7101f2d350  cmp x23,x0
7101f2d354  b.eq 0x7101f2d368
7101f2d358  cbz x0,0x7101f2d374
7101f2d35c  ldr x8,[x0]
7101f2d360  ldr x8,[x8, #0x28]
7101f2d364  b 0x7101f2d370
7101f2d368  ldr x8,[x0]
7101f2d36c  ldr x8,[x8, #0x20]
7101f2d370  blr x8
7101f2d374  ldr x0,[sp, #0x120]
7101f2d378  add x8,sp,#0x40
7101f2d37c  add x8,x8,#0xc0
7101f2d380  cmp x8,x0
7101f2d384  b.eq 0x7101f2d398
7101f2d388  cbz x0,0x7101f2d3a4
7101f2d38c  ldr x8,[x0]
7101f2d390  ldr x8,[x8, #0x28]
7101f2d394  b 0x7101f2d3a0
7101f2d398  ldr x8,[x0]
7101f2d39c  ldr x8,[x8, #0x20]
7101f2d3a0  blr x8
7101f2d3a4  ldr x0,[sp, #0xf0]
7101f2d3a8  add x8,sp,#0x40
7101f2d3ac  add x8,x8,#0x90
7101f2d3b0  cmp x8,x0
7101f2d3b4  b.eq 0x7101f2d3c8
7101f2d3b8  cbz x0,0x7101f2d3d4
7101f2d3bc  ldr x8,[x0]
7101f2d3c0  ldr x8,[x8, #0x28]
7101f2d3c4  b 0x7101f2d3d0
7101f2d3c8  ldr x8,[x0]
7101f2d3cc  ldr x8,[x8, #0x20]
7101f2d3d0  blr x8
7101f2d3d4  ldr x0,[sp, #0xc0]
7101f2d3d8  add x8,sp,#0x40
7101f2d3dc  add x8,x8,#0x60
7101f2d3e0  cmp x8,x0
7101f2d3e4  b.eq 0x7101f2d3f8
7101f2d3e8  cbz x0,0x7101f2d404
7101f2d3ec  ldr x8,[x0]
7101f2d3f0  ldr x8,[x8, #0x28]
7101f2d3f4  b 0x7101f2d400
7101f2d3f8  ldr x8,[x0]
7101f2d3fc  ldr x8,[x8, #0x20]
7101f2d400  blr x8
7101f2d404  ldr x0,[sp, #0x90]
7101f2d408  add x8,sp,#0x40
7101f2d40c  add x8,x8,#0x30
7101f2d410  cmp x8,x0
7101f2d414  b.eq 0x7101f2d428
7101f2d418  cbz x0,0x7101f2d434
7101f2d41c  ldr x8,[x0]
7101f2d420  ldr x8,[x8, #0x28]
7101f2d424  b 0x7101f2d430
7101f2d428  ldr x8,[x0]
7101f2d42c  ldr x8,[x8, #0x20]
7101f2d430  blr x8
7101f2d434  add x9,sp,#0x40
7101f2d438  mov w8,#0x1
7101f2d43c  str x21,[sp, #0x58]
7101f2d440  add x21,x9,#0xf0
7101f2d444  mov w9,#0x100
7101f2d448  add x0,sp,#0x40
7101f2d44c  str xzr,[sp, #0x40]
7101f2d450  strh wzr,[sp, #0x4e]
7101f2d454  stur wzr,[sp, #0x4a]
7101f2d458  str w8,[sp, #0x50]
7101f2d45c  strh w8,[sp, #0x54]
7101f2d460  strb w8,[sp, #0x56]
7101f2d464  str wzr,[sp, #0x60]
7101f2d468  str xzr,[sp, #0x90]
7101f2d46c  str xzr,[sp, #0xc0]
7101f2d470  str xzr,[sp, #0xf0]
7101f2d474  str xzr,[sp, #0x120]
7101f2d478  str xzr,[sp, #0x150]
7101f2d47c  str wzr,[sp, #0x160]
7101f2d480  strh w9,[sp, #0x48]
7101f2d484  strb w8,[sp, #0x4e]
7101f2d488  bl 0x710337df20
7101f2d48c  ldr x8,[x20, #0xd0]
7101f2d490  ldr x8,[x8]
7101f2d494  add x22,x20,#0xf0
7101f2d498  adrp x2,0x7104307000
7101f2d49c  add x2,x2,#0x72
7101f2d4a0  add x3,sp,#0x40
7101f2d4a4  mov x0,x22
7101f2d4a8  add x1,x8,#0x8
7101f2d4ac  bl 0x7103770b30
7101f2d4b0  adrp x2,0x71043ae000
7101f2d4b4  add x2,x2,#0xcc
7101f2d4b8  mov w1,#0x2
7101f2d4bc  mov x0,x22
7101f2d4c0  bl 0x71037717d0
7101f2d4c4  ldr x0,[x20, #0xf0]
7101f2d4c8  ldr x8,[x0]
7101f2d4cc  ldr x8,[x8, #0x60]
7101f2d4d0  mov w1,wzr
7101f2d4d4  blr x8
7101f2d4d8  ldr x0,[x20, #0xf0]
7101f2d4dc  ldr x8,[x0]
7101f2d4e0  ldr x8,[x8, #0x70]
7101f2d4e4  mov w1,wzr
7101f2d4e8  blr x8
7101f2d4ec  ldr x0,[x20, #0xf0]
7101f2d4f0  mov w1,#0x2
7101f2d4f4  mov w2,#0x8
7101f2d4f8  mov w3,wzr
7101f2d4fc  bl 0x7103771930
7101f2d500  mov w1,#0x2
7101f2d504  mov w2,#0x1
7101f2d508  mov x0,x22
7101f2d50c  bl 0x7103771a80
7101f2d510  ldr x0,[sp, #0x150]
7101f2d514  cmp x21,x0
7101f2d518  b.eq 0x7101f2d52c
7101f2d51c  cbz x0,0x7101f2d538
7101f2d520  ldr x8,[x0]
7101f2d524  ldr x8,[x8, #0x28]
7101f2d528  b 0x7101f2d534
7101f2d52c  ldr x8,[x0]
7101f2d530  ldr x8,[x8, #0x20]
7101f2d534  blr x8
7101f2d538  ldr x0,[sp, #0x120]
7101f2d53c  add x8,sp,#0x40
7101f2d540  add x8,x8,#0xc0
7101f2d544  mov w21,#0xe1c0
7101f2d548  movk w21,#0x2, LSL #16
7101f2d54c  cmp x8,x0
7101f2d550  b.eq 0x7101f2d564
7101f2d554  cbz x0,0x7101f2d570
7101f2d558  ldr x8,[x0]
7101f2d55c  ldr x8,[x8, #0x28]
7101f2d560  b 0x7101f2d56c
7101f2d564  ldr x8,[x0]
7101f2d568  ldr x8,[x8, #0x20]
7101f2d56c  blr x8
7101f2d570  ldr x0,[sp, #0xf0]
7101f2d574  add x8,sp,#0x40
7101f2d578  add x8,x8,#0x90
7101f2d57c  cmp x8,x0
7101f2d580  b.eq 0x7101f2d594
7101f2d584  cbz x0,0x7101f2d5a0
7101f2d588  ldr x8,[x0]
7101f2d58c  ldr x8,[x8, #0x28]
7101f2d590  b 0x7101f2d59c
7101f2d594  ldr x8,[x0]
7101f2d598  ldr x8,[x8, #0x20]
7101f2d59c  blr x8
7101f2d5a0  ldr x0,[sp, #0xc0]
7101f2d5a4  add x8,sp,#0x40
7101f2d5a8  add x8,x8,#0x60
7101f2d5ac  add x22,x20,x21
7101f2d5b0  cmp x8,x0
7101f2d5b4  b.eq 0x7101f2d5c8
7101f2d5b8  cbz x0,0x7101f2d5d4
7101f2d5bc  ldr x8,[x0]
7101f2d5c0  ldr x8,[x8, #0x28]
7101f2d5c4  b 0x7101f2d5d0
7101f2d5c8  ldr x8,[x0]
7101f2d5cc  ldr x8,[x8, #0x20]
7101f2d5d0  blr x8
7101f2d5d4  ldr x0,[sp, #0x90]
7101f2d5d8  add x8,sp,#0x40
7101f2d5dc  add x8,x8,#0x30
7101f2d5e0  cmp x8,x0
7101f2d5e4  b.eq 0x7101f2d5f8
7101f2d5e8  cbz x0,0x7101f2d604
7101f2d5ec  ldr x8,[x0]
7101f2d5f0  ldr x8,[x8, #0x28]
7101f2d5f4  b 0x7101f2d600
7101f2d5f8  ldr x8,[x0]
7101f2d5fc  ldr x8,[x8, #0x20]
7101f2d600  blr x8
7101f2d604  ldp x9,x8,[x22, #0x8]
7101f2d608  cmp x9,x8
7101f2d60c  b.cs 0x7101f2d624
7101f2d610  str wzr,[x9]
7101f2d614  ldr x8,[x22, #0x8]
7101f2d618  add x8,x8,#0x4
7101f2d61c  str x8,[x22, #0x8]
7101f2d620  b 0x7101f2d720
7101f2d624  ldr x23,[x22]
7101f2d628  sub x24,x9,x23
7101f2d62c  asr x21,x24,#0x2
7101f2d630  add x9,x21,#0x1
7101f2d634  lsr x10,x9,#0x3e
7101f2d638  cbnz x10,0x7101f2dd20
7101f2d63c  sub x8,x8,x23
7101f2d640  asr x10,x8,#0x2
7101f2d644  orr x11,xzr,#0x1ffffffffffffffe
7101f2d648  cmp x10,x11
7101f2d64c  b.hi 0x7101f2d670
7101f2d650  asr x8,x8,#0x1
7101f2d654  cmp x8,x9
7101f2d658  csel x27,x9,x8,cc
7101f2d65c  cbz x27,0x7101f2d6dc
7101f2d660  mov x28,x26
7101f2d664  lsr x8,x27,#0x3e
7101f2d668  cbz x8,0x7101f2d678
7101f2d66c  bl 0x71039c2650
7101f2d670  mov x28,x26
7101f2d674  orr x27,xzr,#0x3fffffffffffffff
7101f2d678  lsl x8,x27,#0x2
7101f2d67c  cmp x8,#0x0
7101f2d680  csinc x26,x8,xzr,ne
7101f2d684  mov w0,#0x10
7101f2d688  mov x1,x26
7101f2d68c  bl 0x710392e290
7101f2d690  mov x25,x0
7101f2d694  cbnz x0,0x7101f2d6e4
7101f2d698  adrp x8,0x7105332000
7101f2d69c  ldr x0,[x8, #0xf00]
7101f2d6a0  cbz x0,0x7101f2d6e0
7101f2d6a4  str wzr,[sp, #0x28]
7101f2d6a8  str x26,[sp, #0x40]
7101f2d6ac  ldr x8,[x0]
7101f2d6b0  ldr x8,[x8, #0x30]
7101f2d6b4  add x1,sp,#0x28
7101f2d6b8  add x2,sp,#0x40
7101f2d6bc  blr x8
7101f2d6c0  tbz w0,#0x0,0x7101f2d6e0
7101f2d6c4  mov w0,#0x10
7101f2d6c8  mov x1,x26
7101f2d6cc  bl 0x710392e290
7101f2d6d0  mov x25,x0
7101f2d6d4  cbnz x0,0x7101f2d6e4
7101f2d6d8  b 0x7101f2d6e0
7101f2d6dc  mov x28,x26
7101f2d6e0  mov x25,xzr
7101f2d6e4  add x21,x25,x21, LSL #0x2
7101f2d6e8  add x26,x25,x27, LSL #0x2
7101f2d6ec  cmp x24,#0x1
7101f2d6f0  str wzr,[x21], #0x4
7101f2d6f4  b.lt 0x7101f2d708
7101f2d6f8  mov x0,x25
7101f2d6fc  mov x1,x23
7101f2d700  mov x2,x24
7101f2d704  bl 0x71039c00e0
7101f2d708  str x26,[x22, #0x10]
7101f2d70c  mov x26,x28
7101f2d710  stp x25,x21,[x22]
7101f2d714  cbz x23,0x7101f2d720
7101f2d718  mov x0,x23
7101f2d71c  bl 0x710392eb40
7101f2d720  mov w8,#0xe1d8
7101f2d724  movk w8,#0x2, LSL #16
7101f2d728  add x23,x20,x8
7101f2d72c  mov x8,#0x6e6d
7101f2d730  movk x8,#0x5f75, LSL #16
7101f2d734  mov x25,#0x1700000000
7101f2d738  movk x8,#0x6572, LSL #32
7101f2d73c  movk x8,#0x6c70, LSL #48
7101f2d740  mov w28,#0x9dc5
7101f2d744  movk w28,#0x811c, LSL #16
7101f2d748  stp x25,x8,[sp, #0x40]
7101f2d74c  mov x8,#0x7961
7101f2d750  movk x8,#0x645f, LSL #16
7101f2d754  movk x8,#0x7461, LSL #32
7101f2d758  movk x8,#0x5f61, LSL #48
7101f2d75c  str x8,[sp, #0x50]
7101f2d760  mov w8,#0x6f73
7101f2d764  strh w8,[sp, #0x58]
7101f2d768  orr w10,wzr,#0x30
7101f2d76c  strh w10,[sp, #0x5e]
7101f2d770  mov w27,#0x7472
7101f2d774  movk w27,#0x305f, LSL #16
7101f2d778  stur w27,[sp, #0x5a]
7101f2d77c  mov w9,#0x6d
7101f2d780  mov w8,#0x9
7101f2d784  mov w21,#0x89
7101f2d788  add x10,sp,#0x40
7101f2d78c  mov w11,w28
7101f2d790  mul w11,w11,w21
7101f2d794  and w9,w9,#0xff
7101f2d798  eor w11,w11,w9
7101f2d79c  ldrb w9,[x10, x8, LSL ]
7101f2d7a0  add x8,x8,#0x1
7101f2d7a4  cbnz w9,0x7101f2d790
7101f2d7a8  str w11,[sp, #0x40]
7101f2d7ac  ldp x8,x9,[x22, #0x20]
7101f2d7b0  cmp x8,x9
7101f2d7b4  b.cs 0x7101f2d804
7101f2d7b8  add x10,sp,#0x40
7101f2d7bc  mov x9,xzr
7101f2d7c0  str wzr,[x8]
7101f2d7c4  add x10,x10,#0x8
7101f2d7c8  b 0x7101f2d7d4
7101f2d7cc  add x9,x9,#0x2
7101f2d7d0  strb w11,[x12, #0x9]
7101f2d7d4  add x11,x10,x9
7101f2d7d8  ldrb w13,[x11]
7101f2d7dc  cbz w13,0x7101f2d818
7101f2d7e0  add w14,w9,#0x1
7101f2d7e4  add x12,x8,x9
7101f2d7e8  cmp w14,#0x3f
7101f2d7ec  strb w13,[x12, #0x8]
7101f2d7f0  b.cs 0x7101f2d814
7101f2d7f4  ldrb w11,[x11, #0x1]
7101f2d7f8  cbnz w11,0x7101f2d7cc
7101f2d7fc  add x9,x9,#0x1
7101f2d800  b 0x7101f2d818
7101f2d804  add x1,sp,#0x40
7101f2d808  mov x0,x23
7101f2d80c  bl 0x71019c1c50
7101f2d810  b 0x7101f2d85c
7101f2d814  add w9,w9,#0x1
7101f2d818  add x10,x8,#0x8
7101f2d81c  strb wzr,[x10, w9, UXTW ]
7101f2d820  str w9,[x8, #0x4]
7101f2d824  ldrb w9,[x8, #0x8]
7101f2d828  mov w11,w28
7101f2d82c  cbz w9,0x7101f2d84c
7101f2d830  add x10,x8,#0x9
7101f2d834  mov w11,w28
7101f2d838  mul w11,w11,w21
7101f2d83c  and w9,w9,#0xff
7101f2d840  eor w11,w11,w9
7101f2d844  ldrb w9,[x10], #0x1
7101f2d848  cbnz w9,0x7101f2d838
7101f2d84c  str w11,[x8]
7101f2d850  ldr x8,[x22, #0x20]
7101f2d854  add x8,x8,#0x48
7101f2d858  str x8,[x22, #0x20]
7101f2d85c  adrp x8,0x710523d000
7101f2d860  ldr w8,[x8, #0xc]
7101f2d864  cmp w8,#0xd
7101f2d868  b.hi 0x7101f2dab4
7101f2d86c  mov w9,#0x3801
7101f2d870  lsr w8,w9,w8
7101f2d874  tbz w8,#0x0,0x7101f2dab4
7101f2d878  ldp x9,x8,[x22, #0x8]
7101f2d87c  cmp x9,x8
7101f2d880  b.cs 0x7101f2d89c
7101f2d884  mov w8,#0x1
7101f2d888  str w8,[x9]
7101f2d88c  ldr x8,[x22, #0x8]
7101f2d890  add x8,x8,#0x4
7101f2d894  str x8,[x22, #0x8]
7101f2d898  b 0x7101f2d9a4
7101f2d89c  ldr x24,[x22]
7101f2d8a0  sub x2,x9,x24
7101f2d8a4  asr x12,x2,#0x2
7101f2d8a8  add x9,x12,#0x1
7101f2d8ac  lsr x10,x9,#0x3e
7101f2d8b0  cbnz x10,0x7101f2dd20
7101f2d8b4  sub x8,x8,x24
7101f2d8b8  asr x10,x8,#0x2
7101f2d8bc  orr x11,xzr,#0x1ffffffffffffffe
7101f2d8c0  cmp x10,x11
7101f2d8c4  str x26,[sp, #0x10]
7101f2d8c8  b.hi 0x7101f2d8ec
7101f2d8cc  asr x8,x8,#0x1
7101f2d8d0  cmp x8,x9
7101f2d8d4  csel x25,x9,x8,cc
7101f2d8d8  cbz x25,0x7101f2dd10
7101f2d8dc  lsr x8,x25,#0x3e
7101f2d8e0  stp x12,x2,[sp]
7101f2d8e4  cbz x8,0x7101f2d8f4
7101f2d8e8  b 0x7101f2d66c
7101f2d8ec  stp x12,x2,[sp]
7101f2d8f0  orr x25,xzr,#0x3fffffffffffffff
7101f2d8f4  lsl x8,x25,#0x2
7101f2d8f8  cmp x8,#0x0
7101f2d8fc  csinc x27,x8,xzr,ne
7101f2d900  mov w0,#0x10
7101f2d904  mov x1,x27
7101f2d908  bl 0x710392e290
7101f2d90c  mov x26,x0
7101f2d910  cbnz x0,0x7101f2d958
7101f2d914  adrp x8,0x7105332000
7101f2d918  ldr x0,[x8, #0xf00]
7101f2d91c  cbz x0,0x7101f2d954
7101f2d920  str wzr,[sp, #0x28]
7101f2d924  str x27,[sp, #0x40]
7101f2d928  ldr x8,[x0]
7101f2d92c  ldr x8,[x8, #0x30]
7101f2d930  add x1,sp,#0x28
7101f2d934  add x2,sp,#0x40
7101f2d938  blr x8
7101f2d93c  tbz w0,#0x0,0x7101f2d954
7101f2d940  mov w0,#0x10
7101f2d944  mov x1,x27
7101f2d948  bl 0x710392e290
7101f2d94c  mov x26,x0
7101f2d950  cbnz x0,0x7101f2d958
7101f2d954  mov x26,xzr
7101f2d958  ldp x12,x2,[sp]
7101f2d95c  add x27,x26,x12, LSL #0x2
7101f2d960  mov w8,#0x1
7101f2d964  add x25,x26,x25, LSL #0x2
7101f2d968  str w8,[x27], #0x4
7101f2d96c  cmp x2,#0x1
7101f2d970  b.lt 0x7101f2d980
7101f2d974  mov x0,x26
7101f2d978  mov x1,x24
7101f2d97c  bl 0x71039c00e0
7101f2d980  stp x26,x27,[x22]
7101f2d984  ldr x26,[sp, #0x10]
7101f2d988  str x25,[x22, #0x10]
7101f2d98c  mov x25,#0x1700000000
7101f2d990  mov w27,#0x7472
7101f2d994  movk w27,#0x305f, LSL #16
7101f2d998  cbz x24,0x7101f2d9a4
7101f2d99c  mov x0,x24
7101f2d9a0  bl 0x710392eb40
7101f2d9a4  mov x8,#0x6e6d
7101f2d9a8  movk x8,#0x5f75, LSL #16
7101f2d9ac  movk x8,#0x6572, LSL #32
7101f2d9b0  movk x8,#0x6c70, LSL #48
7101f2d9b4  stp x25,x8,[sp, #0x40]
7101f2d9b8  mov x8,#0x7961
7101f2d9bc  movk x8,#0x645f, LSL #16
7101f2d9c0  movk x8,#0x7461, LSL #32
7101f2d9c4  movk x8,#0x5f61, LSL #48
7101f2d9c8  str x8,[sp, #0x50]
7101f2d9cc  mov w8,#0x6f73
7101f2d9d0  strh w8,[sp, #0x58]
7101f2d9d4  mov w12,#0x32
7101f2d9d8  mov w9,#0x6d
7101f2d9dc  mov w8,#0x9
7101f2d9e0  add x10,sp,#0x40
7101f2d9e4  stur w27,[sp, #0x5a]
7101f2d9e8  mov w11,w28
7101f2d9ec  strh w12,[sp, #0x5e]
7101f2d9f0  mul w11,w11,w21
7101f2d9f4  and w9,w9,#0xff
7101f2d9f8  eor w11,w11,w9
7101f2d9fc  ldrb w9,[x10, x8, LSL ]
7101f2da00  add x8,x8,#0x1
7101f2da04  cbnz w9,0x7101f2d9f0
7101f2da08  str w11,[sp, #0x40]
7101f2da0c  ldp x8,x9,[x22, #0x20]
7101f2da10  cmp x8,x9
7101f2da14  b.cs 0x7101f2da64
7101f2da18  add x10,sp,#0x40
7101f2da1c  mov x9,xzr
7101f2da20  str wzr,[x8]
7101f2da24  add x10,x10,#0x8
7101f2da28  b 0x7101f2da34
7101f2da2c  add x9,x9,#0x2
7101f2da30  strb w11,[x12, #0x9]
7101f2da34  add x11,x10,x9
7101f2da38  ldrb w13,[x11]
7101f2da3c  cbz w13,0x7101f2da78
7101f2da40  add w14,w9,#0x1
7101f2da44  add x12,x8,x9
7101f2da48  cmp w14,#0x3f
7101f2da4c  strb w13,[x12, #0x8]
7101f2da50  b.cs 0x7101f2da74
7101f2da54  ldrb w11,[x11, #0x1]
7101f2da58  cbnz w11,0x7101f2da2c
7101f2da5c  add x9,x9,#0x1
7101f2da60  b 0x7101f2da78
7101f2da64  add x1,sp,#0x40
7101f2da68  mov x0,x23
7101f2da6c  bl 0x71019c1c50
7101f2da70  b 0x7101f2dab4
7101f2da74  add w9,w9,#0x1
7101f2da78  add x10,x8,#0x8
7101f2da7c  strb wzr,[x10, w9, UXTW ]
7101f2da80  ldrb w10,[x8, #0x8]
7101f2da84  str w9,[x8, #0x4]
7101f2da88  cbz w10,0x7101f2daa4
7101f2da8c  add x9,x8,#0x9
7101f2da90  mul w11,w28,w21
7101f2da94  and w10,w10,#0xff
7101f2da98  eor w28,w11,w10
7101f2da9c  ldrb w10,[x9], #0x1
7101f2daa0  cbnz w10,0x7101f2da90
7101f2daa4  str w28,[x8]
7101f2daa8  ldr x8,[x22, #0x20]
7101f2daac  add x8,x8,#0x48
7101f2dab0  str x8,[x22, #0x20]
7101f2dab4  add x8,sp,#0x40
7101f2dab8  add x0,x8,#0x20
7101f2dabc  stp xzr,xzr,[sp, #0x50]
7101f2dac0  bl 0x7103776290
7101f2dac4  str wzr,[sp, #0x48]
7101f2dac8  adrp x21,0x71052a8000
7101f2dacc  ldr x21,[x21, #0xa80]
7101f2dad0  ldr q0,[x21]
7101f2dad4  ldr x8,[sp, #0x68]
7101f2dad8  adrp x1,0x71043ae000
7101f2dadc  add x1,x1,#0xcc
7101f2dae0  str q0,[sp, #0x50]
7101f2dae4  str xzr,[x8, #0x8]
7101f2dae8  mov w8,#0xb
7101f2daec  str x8,[sp, #0x40]
7101f2daf0  ldr x8,[x19]
7101f2daf4  ldr x8,[x8]
7101f2daf8  add x0,x8,#0x8
7101f2dafc  add x8,sp,#0x28
7101f2db00  bl 0x7103776640
7101f2db04  ldr x8,[sp, #0x30]
7101f2db08  ldr x24,[sp, #0x68]
7101f2db0c  str xzr,[sp, #0x30]
7101f2db10  str x8,[sp, #0x68]
7101f2db14  cbz x24,0x7101f2db38
7101f2db18  ldr x0,[x24, #0x18]
7101f2db1c  adrp x8,0x710523d000
7101f2db20  add x8,x8,#0x9a8
7101f2db24  stp x8,xzr,[x24, #0x10]
7101f2db28  cbz x0,0x7101f2db30
7101f2db2c  bl 0x710392eb40
7101f2db30  mov x0,x24
7101f2db34  bl 0x710392eb40
7101f2db38  ldr x8,[sp, #0x68]
7101f2db3c  adrp x25,0x710523d000
7101f2db40  add x25,x25,#0x988
7101f2db44  stp x25,xzr,[sp, #0x28]
7101f2db48  ldr x8,[x8, #0x18]
7101f2db4c  ldr x8,[x8]
7101f2db50  cbz x8,0x7101f2db6c
7101f2db54  movi v0.2D,#0x0
7101f2db58  add x9,x8,#0x30
7101f2db5c  add x8,x8,#0x34
7101f2db60  ld1 {v0.S}[0],[x9]
7101f2db64  ld1 {v0.S}[1],[x8]
7101f2db68  b 0x7101f2db70
7101f2db6c  ldr q0,[x21]
7101f2db70  mov w8,#0xe198
7101f2db74  movk w8,#0x2, LSL #16
7101f2db78  add x0,sp,#0x28
7101f2db7c  mov x1,x23
7101f2db80  add x24,x20,x8
7101f2db84  str q0,[sp, #0x50]
7101f2db88  bl 0x7101f2dd30
7101f2db8c  ldr x8,[x20, #0xd0]
7101f2db90  ldr x8,[x8]
7101f2db94  add x0,x8,#0x8
7101f2db98  adrp x1,0x710436c000
7101f2db9c  add x1,x1,#0xc09
7101f2dba0  add x8,sp,#0x18
7101f2dba4  bl 0x7103776640
7101f2dba8  add x2,sp,#0x28
7101f2dbac  add x3,sp,#0x40
7101f2dbb0  add x4,sp,#0x18
7101f2dbb4  mov x0,x24
7101f2dbb8  mov x1,x26
7101f2dbbc  bl 0x71032ccb70
7101f2dbc0  ldr x21,[sp, #0x20]
7101f2dbc4  stp x25,xzr,[sp, #0x18]
7101f2dbc8  cbz x21,0x7101f2dbec
7101f2dbcc  ldr x0,[x21, #0x18]
7101f2dbd0  adrp x8,0x710523d000
7101f2dbd4  add x8,x8,#0x9a8
7101f2dbd8  stp x8,xzr,[x21, #0x10]
7101f2dbdc  cbz x0,0x7101f2dbe4
7101f2dbe0  bl 0x710392eb40
7101f2dbe4  mov x0,x21
7101f2dbe8  bl 0x710392eb40
7101f2dbec  ldr x0,[sp, #0x28]
7101f2dbf0  cbz x0,0x7101f2dbfc
7101f2dbf4  str x0,[sp, #0x30]
7101f2dbf8  bl 0x710392eb40
7101f2dbfc  ldr x21,[sp, #0x68]
7101f2dc00  stp x25,xzr,[sp, #0x60]
7101f2dc04  cbz x21,0x7101f2dc28
7101f2dc08  ldr x0,[x21, #0x18]
7101f2dc0c  adrp x8,0x710523d000
7101f2dc10  add x8,x8,#0x9a8
7101f2dc14  stp x8,xzr,[x21, #0x10]
7101f2dc18  cbz x0,0x7101f2dc20
7101f2dc1c  bl 0x710392eb40
7101f2dc20  mov x0,x21
7101f2dc24  bl 0x710392eb40
7101f2dc28  ldp x8,x9,[x22]
7101f2dc2c  cmp x9,x8
7101f2dc30  b.eq 0x7101f2dd18
7101f2dc34  ldr w8,[x8]
7101f2dc38  mov w9,#0xe1f4
7101f2dc3c  movk w9,#0x2, LSL #16
7101f2dc40  mov x0,x20
7101f2dc44  str w8,[x20, x9, LSL #0x0]
7101f2dc48  bl 0x7101f23c20
7101f2dc4c  ldp x8,x9,[x22]
7101f2dc50  mov w22,#0xe1f8
7101f2dc54  movk w22,#0x2, LSL #16
7101f2dc58  sub x8,x9,x8
7101f2dc5c  asr x8,x8,#0x2
7101f2dc60  cmp x8,#0x1
7101f2dc64  cset w8,hi
7101f2dc68  adrp x1,0x71043ae000
7101f2dc6c  add x1,x1,#0xcc
7101f2dc70  strb w8,[x20, x22, LSL ]
7101f2dc74  ldr x8,[x20, #0xd0]
7101f2dc78  ldr x8,[x8]
7101f2dc7c  add x0,x8,#0x8
7101f2dc80  add x8,sp,#0x40
7101f2dc84  bl 0x7103776640
7101f2dc88  ldr x21,[sp, #0x48]
7101f2dc8c  ldr x8,[x21, #0x8]
7101f2dc90  cbz x8,0x7101f2dcb0
7101f2dc94  ldr x8,[x8, #0x18]
7101f2dc98  cbz x8,0x7101f2dcb0
7101f2dc9c  ldrb w10,[x8, #0x58]
7101f2dca0  ldrb w9,[x20, x22, LSL ]
7101f2dca4  and w10,w10,#0xfe
7101f2dca8  orr w9,w10,w9
7101f2dcac  strb w9,[x8, #0x58]
7101f2dcb0  stp x25,xzr,[sp, #0x40]
7101f2dcb4  cbz x21,0x7101f2dcd8
7101f2dcb8  ldr x0,[x21, #0x18]
7101f2dcbc  adrp x8,0x710523d000
7101f2dcc0  add x8,x8,#0x9a8
7101f2dcc4  stp x8,xzr,[x21, #0x10]
7101f2dcc8  cbz x0,0x7101f2dcd0
7101f2dccc  bl 0x710392eb40
7101f2dcd0  mov x0,x21
7101f2dcd4  bl 0x710392eb40
7101f2dcd8  ldr x8,[x19]
7101f2dcdc  ldr x8,[x8]
7101f2dce0  ldr x0,[x8, #0x10]
7101f2dce4  adrp x1,0x710428f000
7101f2dce8  add x1,x1,#0xf7d
7101f2dcec  bl 0x7103778760
7101f2dcf0  ldp x29,x30,[sp, #0x1d0]
7101f2dcf4  ldp x20,x19,[sp, #0x1c0]
7101f2dcf8  ldp x22,x21,[sp, #0x1b0]
7101f2dcfc  ldp x24,x23,[sp, #0x1a0]
7101f2dd00  ldp x26,x25,[sp, #0x190]
7101f2dd04  ldp x28,x27,[sp, #0x180]
7101f2dd08  add sp,sp,#0x1e0
7101f2dd0c  ret
7101f2dd10  mov x26,xzr
7101f2dd14  b 0x7101f2d95c
7101f2dd18  mov x0,x22
7101f2dd1c  bl 0x71039c1330
7101f2dd20  mov x0,x22
7101f2dd24  bl 0x71039c0c00
