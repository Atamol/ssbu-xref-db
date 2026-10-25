// addr:      7101e0cff0
// offset:    0x1e0cff0
// name:      FUN_7101e0cff0
// mangled:   
// size:      1816

7101e0cff0  str x25,[sp, #-0x50]!
7101e0cff4  stp x24,x23,[sp, #0x10]
7101e0cff8  stp x22,x21,[sp, #0x20]
7101e0cffc  stp x20,x19,[sp, #0x30]
7101e0d000  stp x29,x30,[sp, #0x40]
7101e0d004  add x29,sp,#0x40
7101e0d008  ldr x21,[x0, #0x80]
7101e0d00c  ldrb w8,[x21, #0x597]
7101e0d010  mov w23,w2
7101e0d014  mov w20,w1
7101e0d018  mov x19,x0
7101e0d01c  cbnz w8,0x7101e0d064
7101e0d020  ldr x8,[x21, #0x4d0]
7101e0d024  ldr x0,[x8]
7101e0d028  mov w2,#0x1002
7101e0d02c  mov w1,wzr
7101e0d030  bl 0x7103775dc0
7101e0d034  mov w8,#0x1
7101e0d038  strb w8,[x21, #0x597]
7101e0d03c  ldr x8,[x21, #0x4e0]
7101e0d040  ldr x0,[x8]
7101e0d044  mov w2,#0x6fff
7101e0d048  movk w2,#0x1, LSL #16
7101e0d04c  mov w1,#0x1
7101e0d050  bl 0x7103775dc0
7101e0d054  ldr x0,[x21, #0x4f0]
7101e0d058  adrp x1,0x710428f000
7101e0d05c  add x1,x1,#0xf7d
7101e0d060  bl 0x7103778760
7101e0d064  ldrb w8,[x21, #0x59e]
7101e0d068  ldr x0,[x21, #0x518]
7101e0d06c  cbz w8,0x7101e0d084
7101e0d070  fmov s0,0x3f800000
7101e0d074  adrp x1,0x71042e7000
7101e0d078  add x1,x1,#0x754
7101e0d07c  bl 0x7103778300
7101e0d080  b 0x7101e0d098
7101e0d084  fmov s0,0x3f800000
7101e0d088  adrp x1,0x7104443000
7101e0d08c  add x1,x1,#0xcbf
7101e0d090  bl 0x7103778300
7101e0d094  mov w23,wzr
7101e0d098  ldr x8,[x21, #0x4d0]
7101e0d09c  ldr x8,[x8]
7101e0d0a0  ldr x0,[x8]
7101e0d0a4  mov w1,wzr
7101e0d0a8  bl 0x71037760f0
7101e0d0ac  ldr x0,[x21, #0x528]
7101e0d0b0  ldr x8,[x0]
7101e0d0b4  ldr x8,[x8, #0x60]
7101e0d0b8  mov w1,#0x1
7101e0d0bc  add x22,x21,#0x528
7101e0d0c0  blr x8
7101e0d0c4  tbnz w23,#0x0,0x7101e0d0ec
7101e0d0c8  ldr x0,[x21, #0x528]
7101e0d0cc  ldr x8,[x0]
7101e0d0d0  ldr x8,[x8, #0x70]
7101e0d0d4  mov w1,#0x1
7101e0d0d8  blr x8
7101e0d0dc  add x0,x21,#0x520
7101e0d0e0  mov w1,#0x2
7101e0d0e4  mov w2,#0x1
7101e0d0e8  bl 0x7103771a80
7101e0d0ec  ldr x0,[x21, #0x520]
7101e0d0f0  ldr x8,[x0]
7101e0d0f4  ldr x8,[x8, #0x60]
7101e0d0f8  mov w1,wzr
7101e0d0fc  blr x8
7101e0d100  ldr x0,[x21, #0x520]
7101e0d104  ldr x8,[x0]
7101e0d108  ldr x8,[x8, #0x70]
7101e0d10c  mov w1,wzr
7101e0d110  blr x8
7101e0d114  ldrb w8,[x21, #0x59b]
7101e0d118  cbz w8,0x7101e0d3a4
7101e0d11c  add x8,x21,#0x584
7101e0d120  mov x9,#-0x1
7101e0d124  str x9,[x8]
7101e0d128  ldr x10,[x21, #0x570]
7101e0d12c  ldr x9,[x21, #0x568]
7101e0d130  ldrsw x8,[x21, #0x580]
7101e0d134  sub x10,x10,x9
7101e0d138  asr x10,x10,#0x2
7101e0d13c  mov w25,#0xffffffff
7101e0d140  str w25,[x21, #0x58c]
7101e0d144  cmp x10,x8
7101e0d148  b.ls 0x7101e0d700
7101e0d14c  ldr w24,[x9, x8, LSL #0x2]
7101e0d150  mov x0,x21
7101e0d154  mov w1,w24
7101e0d158  bl 0x7101e06fa0
7101e0d15c  str w24,[x21, #0x364]
7101e0d160  adrp x8,0x7105329000
7101e0d164  ldr x8,[x8, #0xf98]
7101e0d168  ldr x8,[x8]
7101e0d16c  ldrb w3,[x21, #0x361]
7101e0d170  add x1,x21,#0x18
7101e0d174  ldr x0,[x8, #0x30]
7101e0d178  mov w2,w24
7101e0d17c  bl 0x7102528f40
7101e0d180  ldp x9,x10,[x21, #0x18]
7101e0d184  ldrb w8,[x21, #0x361]
7101e0d188  eor w8,w8,#0x1
7101e0d18c  sub x9,x10,x9
7101e0d190  lsr x9,x9,#0x3
7101e0d194  add w1,w9,w8
7101e0d198  mov x0,x22
7101e0d19c  strb w8,[x21, #0x360]
7101e0d1a0  bl 0x7103783690
7101e0d1a4  ldr x0,[x21, #0x528]
7101e0d1a8  mov w1,#0x1
7101e0d1ac  bl 0x710377cc80
7101e0d1b0  ldr x8,[x21, #0x528]
7101e0d1b4  ldr w9,[x8, #0x2a4]
7101e0d1b8  tbnz w9,#0x1f,0x7101e0d298
7101e0d1bc  ldr w10,[x8, #0x288]
7101e0d1c0  cmp w10,w9
7101e0d1c4  b.le 0x7101e0d298
7101e0d1c8  ldr w10,[x8, #0x29c]
7101e0d1cc  subs w9,w9,w10
7101e0d1d0  b.mi 0x7101e0d298
7101e0d1d4  ldr w10,[x8, #0x2c4]
7101e0d1d8  cmp w10,w9
7101e0d1dc  b.le 0x7101e0d298
7101e0d1e0  ldr w10,[x8, #0x2c0]
7101e0d1e4  cmp w10,w9
7101e0d1e8  b.le 0x7101e0d298
7101e0d1ec  ldr x8,[x8, #0x168]
7101e0d1f0  ldr x8,[x8, w9, SXTW #0x3]
7101e0d1f4  ldr x24,[x8, #0x28]
7101e0d1f8  cbz x24,0x7101e0d298
7101e0d1fc  ldr x8,[x24]
7101e0d200  ldr x8,[x8, #0x218]
7101e0d204  mov x0,x24
7101e0d208  mov w1,wzr
7101e0d20c  blr x8
7101e0d210  ldr x8,[x24]
7101e0d214  ldr x8,[x8, #0x410]
7101e0d218  mov x0,x24
7101e0d21c  blr x8
7101e0d220  ldr x8,[x24]
7101e0d224  ldr x8,[x8, #0x3f0]
7101e0d228  mov x0,x24
7101e0d22c  mov w1,wzr
7101e0d230  blr x8
7101e0d234  ldr x8,[x24]
7101e0d238  ldr x8,[x8, #0x140]
7101e0d23c  mov x0,x24
7101e0d240  blr x8
7101e0d244  cmp w0,#0x6
7101e0d248  b.eq 0x7101e0d274
7101e0d24c  ldr x8,[x24]
7101e0d250  ldr x8,[x8, #0x140]
7101e0d254  mov x0,x24
7101e0d258  blr x8
7101e0d25c  cmp w0,#0x1
7101e0d260  b.eq 0x7101e0d274
7101e0d264  ldr x8,[x24]
7101e0d268  ldr x8,[x8, #0x400]
7101e0d26c  mov x0,x24
7101e0d270  blr x8
7101e0d274  ldr x8,[x24]
7101e0d278  ldr x8,[x8, #0x158]
7101e0d27c  mov x0,x24
7101e0d280  blr x8
7101e0d284  tbnz w0,#0x0,0x7101e0d298
7101e0d288  ldr x8,[x24]
7101e0d28c  ldr x8,[x8, #0x370]
7101e0d290  mov x0,x24
7101e0d294  blr x8
7101e0d298  ldrb w8,[x21, #0x59e]
7101e0d29c  cbz w8,0x7101e0d338
7101e0d2a0  ldrb w8,[x21, #0x59d]
7101e0d2a4  cbz w8,0x7101e0d338
7101e0d2a8  ldp x8,x9,[x21, #0x18]
7101e0d2ac  sub x8,x9,x8
7101e0d2b0  lsr x8,x8,#0x3
7101e0d2b4  cmp w8,#0x0
7101e0d2b8  cset w8,eq
7101e0d2bc  orr w8,w23,w8
7101e0d2c0  tbnz w8,#0x0,0x7101e0d33c
7101e0d2c4  ldrh w10,[x21, #0x594]
7101e0d2c8  orr w8,wzr,#0xffff
7101e0d2cc  cmp w10,w8
7101e0d2d0  b.eq 0x7101e0d628
7101e0d2d4  ldp x8,x9,[x21, #0x18]
7101e0d2d8  cmp x9,x8
7101e0d2dc  b.eq 0x7101e0d628
7101e0d2e0  ldr x11,[x8]
7101e0d2e4  ldrh w11,[x11]
7101e0d2e8  cmp w11,w10
7101e0d2ec  mov x11,x8
7101e0d2f0  b.eq 0x7101e0d314
7101e0d2f4  add x11,x8,#0x8
7101e0d2f8  cmp x9,x11
7101e0d2fc  b.eq 0x7101e0d628
7101e0d300  ldr x12,[x11], #0x8
7101e0d304  ldrh w12,[x12]
7101e0d308  cmp w12,w10
7101e0d30c  b.ne 0x7101e0d2f8
7101e0d310  sub x11,x11,#0x8
7101e0d314  cmp x11,x9
7101e0d318  b.eq 0x7101e0d628
7101e0d31c  ldrb w9,[x21, #0x360]
7101e0d320  sub x8,x11,x8
7101e0d324  lsr x8,x8,#0x3
7101e0d328  add w1,w8,w9
7101e0d32c  mov w3,#0x1
7101e0d330  mov x0,x22
7101e0d334  b 0x7101e0d634
7101e0d338  tbz w23,#0x0,0x7101e0d2c4
7101e0d33c  mov w8,#0x1
7101e0d340  add x9,x21,#0x4b4
7101e0d344  str xzr,[x21, #0x378]
7101e0d348  strb w8,[x21, #0x5a0]
7101e0d34c  str xzr,[x21, #0x370]
7101e0d350  add x8,x21,#0x474
7101e0d354  str xzr,[x9]
7101e0d358  add x9,x21,#0x4ac
7101e0d35c  add x0,x21,#0x368
7101e0d360  str xzr,[x9]
7101e0d364  add x9,x21,#0x4a4
7101e0d368  str xzr,[x9]
7101e0d36c  add x9,x21,#0x49c
7101e0d370  str xzr,[x9]
7101e0d374  add x9,x21,#0x494
7101e0d378  str xzr,[x9]
7101e0d37c  add x9,x21,#0x48c
7101e0d380  str xzr,[x9]
7101e0d384  add x9,x21,#0x484
7101e0d388  str xzr,[x9]
7101e0d38c  add x9,x21,#0x47c
7101e0d390  str wzr,[x21, #0x4bc]
7101e0d394  str xzr,[x9]
7101e0d398  str xzr,[x8]
7101e0d39c  mov w8,#0x4
7101e0d3a0  b 0x7101e0d698
7101e0d3a4  add x8,x21,#0x584
7101e0d3a8  add x9,x21,#0x58c
7101e0d3ac  mov x10,#-0x1
7101e0d3b0  str wzr,[x21, #0x580]
7101e0d3b4  str x10,[x9]
7101e0d3b8  str x10,[x8]
7101e0d3bc  ldr x9,[x21, #0x570]
7101e0d3c0  ldr x8,[x21, #0x568]
7101e0d3c4  add x23,x21,#0x568
7101e0d3c8  cmp x9,x8
7101e0d3cc  b.eq 0x7101e0d6f8
7101e0d3d0  ldr w1,[x8]
7101e0d3d4  mov x0,x21
7101e0d3d8  bl 0x7101e06fa0
7101e0d3dc  ldr x10,[x21, #0x570]
7101e0d3e0  ldr x9,[x21, #0x568]
7101e0d3e4  sub x10,x10,x9
7101e0d3e8  ldrsw x8,[x21, #0x580]
7101e0d3ec  asr x10,x10,#0x2
7101e0d3f0  cmp x10,x8
7101e0d3f4  b.ls 0x7101e0d6f8
7101e0d3f8  ldr w2,[x9, x8, LSL #0x2]
7101e0d3fc  str w2,[x21, #0x364]
7101e0d400  adrp x8,0x7105329000
7101e0d404  ldr x8,[x8, #0xf98]
7101e0d408  ldr x8,[x8]
7101e0d40c  ldrb w3,[x21, #0x361]
7101e0d410  add x1,x21,#0x18
7101e0d414  ldr x0,[x8, #0x30]
7101e0d418  bl 0x7102528f40
7101e0d41c  ldp x9,x10,[x21, #0x18]
7101e0d420  ldrb w8,[x21, #0x361]
7101e0d424  eor w8,w8,#0x1
7101e0d428  sub x9,x10,x9
7101e0d42c  lsr x9,x9,#0x3
7101e0d430  add w1,w9,w8
7101e0d434  mov x0,x22
7101e0d438  strb w8,[x21, #0x360]
7101e0d43c  bl 0x7103783690
7101e0d440  ldr x0,[x21, #0x528]
7101e0d444  mov w1,#0x1
7101e0d448  bl 0x710377cc80
7101e0d44c  ldr x8,[x21, #0x528]
7101e0d450  ldr w9,[x8, #0x2a4]
7101e0d454  tbnz w9,#0x1f,0x7101e0d534
7101e0d458  ldr w10,[x8, #0x288]
7101e0d45c  cmp w10,w9
7101e0d460  b.le 0x7101e0d534
7101e0d464  ldr w10,[x8, #0x29c]
7101e0d468  subs w9,w9,w10
7101e0d46c  b.mi 0x7101e0d534
7101e0d470  ldr w10,[x8, #0x2c4]
7101e0d474  cmp w10,w9
7101e0d478  b.le 0x7101e0d534
7101e0d47c  ldr w10,[x8, #0x2c0]
7101e0d480  cmp w10,w9
7101e0d484  b.le 0x7101e0d534
7101e0d488  ldr x8,[x8, #0x168]
7101e0d48c  ldr x8,[x8, w9, SXTW #0x3]
7101e0d490  ldr x23,[x8, #0x28]
7101e0d494  cbz x23,0x7101e0d534
7101e0d498  ldr x8,[x23]
7101e0d49c  ldr x8,[x8, #0x218]
7101e0d4a0  mov x0,x23
7101e0d4a4  mov w1,wzr
7101e0d4a8  blr x8
7101e0d4ac  ldr x8,[x23]
7101e0d4b0  ldr x8,[x8, #0x410]
7101e0d4b4  mov x0,x23
7101e0d4b8  blr x8
7101e0d4bc  ldr x8,[x23]
7101e0d4c0  ldr x8,[x8, #0x3f0]
7101e0d4c4  mov x0,x23
7101e0d4c8  mov w1,wzr
7101e0d4cc  blr x8
7101e0d4d0  ldr x8,[x23]
7101e0d4d4  ldr x8,[x8, #0x140]
7101e0d4d8  mov x0,x23
7101e0d4dc  blr x8
7101e0d4e0  cmp w0,#0x6
7101e0d4e4  b.eq 0x7101e0d510
7101e0d4e8  ldr x8,[x23]
7101e0d4ec  ldr x8,[x8, #0x140]
7101e0d4f0  mov x0,x23
7101e0d4f4  blr x8
7101e0d4f8  cmp w0,#0x1
7101e0d4fc  b.eq 0x7101e0d510
7101e0d500  ldr x8,[x23]
7101e0d504  ldr x8,[x8, #0x400]
7101e0d508  mov x0,x23
7101e0d50c  blr x8
7101e0d510  ldr x8,[x23]
7101e0d514  ldr x8,[x8, #0x158]
7101e0d518  mov x0,x23
7101e0d51c  blr x8
7101e0d520  tbnz w0,#0x0,0x7101e0d534
7101e0d524  ldr x8,[x23]
7101e0d528  ldr x8,[x8, #0x370]
7101e0d52c  mov x0,x23
7101e0d530  blr x8
7101e0d534  ldrh w10,[x21, #0x594]
7101e0d538  orr w8,wzr,#0xffff
7101e0d53c  cmp w10,w8
7101e0d540  b.eq 0x7101e0d5a8
7101e0d544  ldp x8,x9,[x21, #0x18]
7101e0d548  cmp x9,x8
7101e0d54c  b.eq 0x7101e0d5a8
7101e0d550  ldr x11,[x8]
7101e0d554  ldrh w11,[x11]
7101e0d558  cmp w11,w10
7101e0d55c  mov x11,x8
7101e0d560  b.eq 0x7101e0d584
7101e0d564  add x11,x8,#0x8
7101e0d568  cmp x9,x11
7101e0d56c  b.eq 0x7101e0d5a8
7101e0d570  ldr x12,[x11], #0x8
7101e0d574  ldrh w12,[x12]
7101e0d578  cmp w12,w10
7101e0d57c  b.ne 0x7101e0d568
7101e0d580  sub x11,x11,#0x8
7101e0d584  cmp x11,x9
7101e0d588  b.eq 0x7101e0d5a8
7101e0d58c  ldrb w9,[x21, #0x360]
7101e0d590  sub x8,x11,x8
7101e0d594  lsr x8,x8,#0x3
7101e0d598  add w1,w8,w9
7101e0d59c  mov w3,#0x1
7101e0d5a0  mov x0,x22
7101e0d5a4  b 0x7101e0d5b4
7101e0d5a8  mov w3,#0x1
7101e0d5ac  mov x0,x22
7101e0d5b0  mov w1,wzr
7101e0d5b4  mov w2,wzr
7101e0d5b8  bl 0x7103783c10
7101e0d5bc  add x9,x21,#0x4b4
7101e0d5c0  str xzr,[x21, #0x378]
7101e0d5c4  str xzr,[x21, #0x370]
7101e0d5c8  str xzr,[x9]
7101e0d5cc  add x9,x21,#0x4ac
7101e0d5d0  add x8,x21,#0x474
7101e0d5d4  str xzr,[x9]
7101e0d5d8  add x9,x21,#0x4a4
7101e0d5dc  add x0,x21,#0x368
7101e0d5e0  str xzr,[x9]
7101e0d5e4  add x9,x21,#0x49c
7101e0d5e8  str xzr,[x9]
7101e0d5ec  add x9,x21,#0x494
7101e0d5f0  str xzr,[x9]
7101e0d5f4  add x9,x21,#0x48c
7101e0d5f8  str xzr,[x9]
7101e0d5fc  add x9,x21,#0x484
7101e0d600  str xzr,[x9]
7101e0d604  add x9,x21,#0x47c
7101e0d608  str xzr,[x8]
7101e0d60c  mov w8,#0xffffffff
7101e0d610  str wzr,[x21, #0x4bc]
7101e0d614  str xzr,[x9]
7101e0d618  str x8,[x21, #0x4c0]
7101e0d61c  str w8,[x21, #0x4c8]
7101e0d620  mov w8,#0x1
7101e0d624  b 0x7101e0d6a0
7101e0d628  mov w3,#0x1
7101e0d62c  mov x0,x22
7101e0d630  mov w1,wzr
7101e0d634  mov w2,wzr
7101e0d638  bl 0x7103783c10
7101e0d63c  add x9,x21,#0x4b4
7101e0d640  str xzr,[x21, #0x378]
7101e0d644  str xzr,[x21, #0x370]
7101e0d648  str xzr,[x9]
7101e0d64c  add x9,x21,#0x4ac
7101e0d650  add x8,x21,#0x474
7101e0d654  str xzr,[x9]
7101e0d658  add x9,x21,#0x4a4
7101e0d65c  add x0,x21,#0x368
7101e0d660  str xzr,[x9]
7101e0d664  add x9,x21,#0x49c
7101e0d668  str xzr,[x9]
7101e0d66c  add x9,x21,#0x494
7101e0d670  str xzr,[x9]
7101e0d674  add x9,x21,#0x48c
7101e0d678  str xzr,[x9]
7101e0d67c  add x9,x21,#0x484
7101e0d680  str xzr,[x9]
7101e0d684  add x9,x21,#0x47c
7101e0d688  str wzr,[x21, #0x4bc]
7101e0d68c  str xzr,[x9]
7101e0d690  str xzr,[x8]
7101e0d694  mov w8,#0x2
7101e0d698  str x25,[x21, #0x4c0]
7101e0d69c  str w25,[x21, #0x4c8]
7101e0d6a0  strb wzr,[x21, #0x4cc]
7101e0d6a4  str w8,[x21, #0x470]
7101e0d6a8  bl 0x7101e0a060
7101e0d6ac  ldr x8,[x21, #0x4d0]
7101e0d6b0  strb wzr,[x21, #0x59a]
7101e0d6b4  ldr x8,[x8]
7101e0d6b8  ldr x0,[x8, #0x10]
7101e0d6bc  tbz w20,#0x0,0x7101e0d6cc
7101e0d6c0  adrp x1,0x710424f000
7101e0d6c4  add x1,x1,#0xac6
7101e0d6c8  b 0x7101e0d6d4
7101e0d6cc  adrp x1,0x710433a000
7101e0d6d0  add x1,x1,#0x6a9
7101e0d6d4  fmov s0,0x3f800000
7101e0d6d8  bl 0x7103778300
7101e0d6dc  strb wzr,[x19, #0x70]
7101e0d6e0  ldp x29,x30,[sp, #0x40]
7101e0d6e4  ldp x20,x19,[sp, #0x30]
7101e0d6e8  ldp x22,x21,[sp, #0x20]
7101e0d6ec  ldp x24,x23,[sp, #0x10]
7101e0d6f0  ldr x25,[sp], #0x50
7101e0d6f4  ret
7101e0d6f8  mov x0,x23
7101e0d6fc  bl 0x71039c1330
7101e0d700  add x0,x21,#0x568
7101e0d704  bl 0x71039c1330
