// addr:      7101d9d070
// offset:    0x1d9d070
// name:      FUN_7101d9d070
// mangled:   
// size:      17636

7101d9d070  stp d9,d8,[sp, #-0x70]!
7101d9d074  stp x28,x27,[sp, #0x10]
7101d9d078  stp x26,x25,[sp, #0x20]
7101d9d07c  stp x24,x23,[sp, #0x30]
7101d9d080  stp x22,x21,[sp, #0x40]
7101d9d084  stp x20,x19,[sp, #0x50]
7101d9d088  stp x29,x30,[sp, #0x60]
7101d9d08c  add x29,sp,#0x60
7101d9d090  sub sp,sp,#0x3d0
7101d9d094  adrp x8,0x710532f000
7101d9d098  ldr x8,[x8, #0x730]
7101d9d09c  ldr x8,[x8, #0x8]
7101d9d0a0  ldrb w9,[x1, #0x8]
7101d9d0a4  mov x25,x2
7101d9d0a8  mov w23,w5
7101d9d0ac  mov w22,w4
7101d9d0b0  mov x20,x0
7101d9d0b4  sxth w27,w25
7101d9d0b8  str x3,[sp, #0x40]
7101d9d0bc  str x1,[sp, #0x68]
7101d9d0c0  cbz w9,0x7101d9d130
7101d9d0c4  ldrb w9,[x1, #0xec]
7101d9d0c8  cbnz w9,0x7101d9d0d8
7101d9d0cc  ldp x10,x11,[x1, #0x70]
7101d9d0d0  cmp x11,x10
7101d9d0d4  b.eq 0x7101d9d130
7101d9d0d8  ldrsh x10,[x1, #0x88]
7101d9d0dc  ldr x11,[x8, #0x1d8]
7101d9d0e0  cmn x10,#0x1
7101d9d0e4  b.eq 0x7101d9d0f0
7101d9d0e8  add x10,x11,x10, LSL #0x1
7101d9d0ec  ldrh w10,[x10, #0x60]
7101d9d0f0  ldp x12,x11,[x11, #0x20]
7101d9d0f4  sub x11,x11,x12
7101d9d0f8  lsr x11,x11,#0x6
7101d9d0fc  mov w13,#0xcccd
7101d9d100  movk w13,#0xcccc, LSL #16
7101d9d104  mul w11,w11,w13
7101d9d108  cmp w10,w11
7101d9d10c  b.cs 0x7101d9d130
7101d9d110  mov w11,#0x140
7101d9d114  umaddl x10,w10,w11,x12
7101d9d118  ldrb w10,[x10, #0x5e]
7101d9d11c  cmp w10,#0x3
7101d9d120  b.ne 0x7101d9d130
7101d9d124  cbz w9,0x7101d9d1dc
7101d9d128  ldp x8,x9,[x1, #0x70]
7101d9d12c  b 0x7101d9d1e8
7101d9d130  ldr x8,[x8, #0x1d8]
7101d9d134  cmn w27,#0x1
7101d9d138  b.eq 0x7101d9d14c
7101d9d13c  lsl x9,x25,#0x30
7101d9d140  add x9,x8,x9, ASR #0x2f
7101d9d144  ldrh w11,[x9, #0x60]
7101d9d148  b 0x7101d9d150
7101d9d14c  mov w11,#0xffffffff
7101d9d150  ldp x9,x10,[x8, #0x20]
7101d9d154  sub x10,x10,x9
7101d9d158  orr x12,xzr,#-0x3333333333333334
7101d9d15c  movk x12,#0xcccd
7101d9d160  asr x10,x10,#0x6
7101d9d164  mul x10,x10,x12
7101d9d168  cmp w11,w10
7101d9d16c  b.cs 0x7101d9d184
7101d9d170  mov w12,#0x140
7101d9d174  umaddl x11,w11,w12,x9
7101d9d178  ldrb w11,[x11, #0x5e]
7101d9d17c  cmp w11,#0x2
7101d9d180  b.eq 0x7101d9d240
7101d9d184  mov w1,wzr
7101d9d188  cmn w27,#0x1
7101d9d18c  b.eq 0x7101d9d244
7101d9d190  cmp w27,#0x7cf
7101d9d194  b.gt 0x7101d9d244
7101d9d198  lsl x11,x25,#0x30
7101d9d19c  add x8,x8,x11, ASR #0x2f
7101d9d1a0  ldrh w8,[x8, #0x60]
7101d9d1a4  cmp w10,w8
7101d9d1a8  b.ls 0x7101d9d240
7101d9d1ac  mov w11,#0x140
7101d9d1b0  madd x9,x8,x11,x9
7101d9d1b4  adrp x11,0x7105182000
7101d9d1b8  add x11,x11,#0xb08
7101d9d1bc  cmp x10,x8
7101d9d1c0  csel x8,x9,x11,hi
7101d9d1c4  ldrb w9,[x8, #0x5e]
7101d9d1c8  cbz w9,0x7101d9d1d4
7101d9d1cc  mov w1,#0x4
7101d9d1d0  b 0x7101d9d244
7101d9d1d4  ldrb w8,[x8, #0x6c]
7101d9d1d8  b 0x7101d9d21c
7101d9d1dc  ldp x8,x9,[x1, #0x70]
7101d9d1e0  cmp x9,x8
7101d9d1e4  b.eq 0x7101d9d240
7101d9d1e8  sub x9,x9,x8
7101d9d1ec  lsr x9,x9,#0x3
7101d9d1f0  cbz w9,0x7101d9d240
7101d9d1f4  mov w10,wzr
7101d9d1f8  ldr x11,[x8, w10, UXTW #0x3]
7101d9d1fc  ldrb w12,[x11, #0x10]
7101d9d200  cmp w12,#0x1
7101d9d204  b.eq 0x7101d9d218
7101d9d208  add w10,w10,#0x1
7101d9d20c  cmp w10,w9
7101d9d210  b.cc 0x7101d9d1f8
7101d9d214  b 0x7101d9d240
7101d9d218  ldrb w8,[x11, #0x48]
7101d9d21c  sub w8,w8,#0x1
7101d9d220  cmp w8,#0x2
7101d9d224  b.hi 0x7101d9d240
7101d9d228  and x8,x8,#0xff
7101d9d22c  lsl x8,x8,#0x3
7101d9d230  mov w9,#0x301
7101d9d234  movk w9,#0x2, LSL #16
7101d9d238  lsr w1,w9,w8
7101d9d23c  b 0x7101d9d244
7101d9d240  mov w1,wzr
7101d9d244  add x0,sp,#0x1e0
7101d9d248  mov w2,wzr
7101d9d24c  add x19,sp,#0x1e0
7101d9d250  bl 0x710339dde0
7101d9d254  add x26,x20,#0x170
7101d9d258  adrp x1,0x7104454000
7101d9d25c  add x1,x1,#0xf18
7101d9d260  add x8,sp,#0x198
7101d9d264  mov x0,x26
7101d9d268  bl 0x7103776640
7101d9d26c  ldr x9,[sp, #0x68]
7101d9d270  ldrb w8,[x9, #0xb8]
7101d9d274  cbz w8,0x7101d9d290
7101d9d278  ldrb w8,[x9, #0xec]
7101d9d27c  cbz w8,0x7101d9d298
7101d9d280  ldr x19,[sp, #0x1a0]
7101d9d284  adrp x1,0x710439d000
7101d9d288  add x1,x1,#0x8a0
7101d9d28c  b 0x7101d9d338
7101d9d290  add x1,x19,#0x8
7101d9d294  b 0x7101d9d334
7101d9d298  ldrb w8,[x9, #0x8]
7101d9d29c  cbz w8,0x7101d9d32c
7101d9d2a0  ldr x9,[sp, #0x68]
7101d9d2a4  ldp x8,x9,[x9, #0x70]
7101d9d2a8  cmp x9,x8
7101d9d2ac  b.eq 0x7101d9d32c
7101d9d2b0  adrp x8,0x710532f000
7101d9d2b4  ldr x8,[x8, #0x730]
7101d9d2b8  ldr x9,[x8, #0x8]
7101d9d2bc  ldr x8,[sp, #0x68]
7101d9d2c0  ldrsh x8,[x8, #0x88]
7101d9d2c4  ldr x9,[x9, #0x1d8]
7101d9d2c8  cmn x8,#0x1
7101d9d2cc  b.eq 0x7101d9d2d8
7101d9d2d0  add x8,x9,x8, LSL #0x1
7101d9d2d4  ldrh w8,[x8, #0x60]
7101d9d2d8  ldp x10,x9,[x9, #0x20]
7101d9d2dc  sub x9,x9,x10
7101d9d2e0  lsr x9,x9,#0x6
7101d9d2e4  mov w11,#0xcccd
7101d9d2e8  movk w11,#0xcccc, LSL #16
7101d9d2ec  mul w9,w9,w11
7101d9d2f0  cmp w8,w9
7101d9d2f4  b.cs 0x7101d9d32c
7101d9d2f8  mov w9,#0x140
7101d9d2fc  umaddl x8,w8,w9,x10
7101d9d300  ldrb w8,[x8, #0x5e]
7101d9d304  cmp w8,#0x3
7101d9d308  b.ne 0x7101d9d32c
7101d9d30c  ldr x8,[sp, #0x68]
7101d9d310  ldrb w8,[x8, #0xb9]
7101d9d314  ldr x19,[sp, #0x1a0]
7101d9d318  cmp w8,#0x2
7101d9d31c  b.ne 0x7101da151c
7101d9d320  adrp x1,0x7104401000
7101d9d324  add x1,x1,#0x9ad
7101d9d328  b 0x7101d9d338
7101d9d32c  add x8,sp,#0x1e0
7101d9d330  add x1,x8,#0x8
7101d9d334  ldr x19,[sp, #0x1a0]
7101d9d338  fmov s0,0x3f800000
7101d9d33c  mov x0,x19
7101d9d340  bl 0x7103778300
7101d9d344  fmov s8,0x3f800000
7101d9d348  mov v0.16B,v8.16B
7101d9d34c  adrp x1,0x710432a000
7101d9d350  add x1,x1,#0x70e
7101d9d354  mov x0,x19
7101d9d358  bl 0x7103778300
7101d9d35c  mov v0.16B,v8.16B
7101d9d360  adrp x1,0x71043f0000
7101d9d364  add x1,x1,#0xfa9
7101d9d368  mov x0,x19
7101d9d36c  bl 0x7103778300
7101d9d370  ldr x0,[x20, #0x168]
7101d9d374  mov v0.16B,v8.16B
7101d9d378  add x8,sp,#0x1e0
7101d9d37c  add x1,x8,#0x8
7101d9d380  bl 0x7103778300
7101d9d384  adrp x8,0x710523d000
7101d9d388  add x8,x8,#0x988
7101d9d38c  stp x8,xzr,[sp, #0x198]
7101d9d390  cbz x19,0x7101d9d3b4
7101d9d394  ldr x0,[x19, #0x18]
7101d9d398  adrp x8,0x710523d000
7101d9d39c  add x8,x8,#0x9a8
7101d9d3a0  stp x8,xzr,[x19, #0x10]
7101d9d3a4  cbz x0,0x7101d9d3ac
7101d9d3a8  bl 0x710392eb40
7101d9d3ac  mov x0,x19
7101d9d3b0  bl 0x710392eb40
7101d9d3b4  mov w0,#0x10
7101d9d3b8  mov w1,#0x20
7101d9d3bc  bl 0x710392e290
7101d9d3c0  mov x21,x0
7101d9d3c4  cbnz x0,0x7101d9d410
7101d9d3c8  adrp x8,0x7105332000
7101d9d3cc  ldr x0,[x8, #0xf00]
7101d9d3d0  cbz x0,0x7101d9d40c
7101d9d3d4  mov w8,#0x20
7101d9d3d8  str wzr,[sp, #0x198]
7101d9d3dc  add x1,sp,#0x198
7101d9d3e0  str x8,[sp, #0x1e0]
7101d9d3e4  ldr x8,[x0]
7101d9d3e8  ldr x8,[x8, #0x30]
7101d9d3ec  add x2,sp,#0x1e0
7101d9d3f0  blr x8
7101d9d3f4  tbz w0,#0x0,0x7101d9d40c
7101d9d3f8  mov w0,#0x10
7101d9d3fc  mov w1,#0x20
7101d9d400  bl 0x710392e290
7101d9d404  mov x21,x0
7101d9d408  cbnz x0,0x7101d9d410
7101d9d40c  mov x21,xzr
7101d9d410  mov w0,#0x10
7101d9d414  mov w1,#0x20
7101d9d418  stp xzr,xzr,[x21, #0x10]
7101d9d41c  stp xzr,xzr,[x21]
7101d9d420  bl 0x710392e290
7101d9d424  mov x19,x0
7101d9d428  cbnz x0,0x7101d9d474
7101d9d42c  adrp x8,0x7105332000
7101d9d430  ldr x0,[x8, #0xf00]
7101d9d434  cbz x0,0x7101d9d470
7101d9d438  mov w8,#0x20
7101d9d43c  str wzr,[sp, #0x198]
7101d9d440  add x1,sp,#0x198
7101d9d444  str x8,[sp, #0x1e0]
7101d9d448  ldr x8,[x0]
7101d9d44c  ldr x8,[x8, #0x30]
7101d9d450  add x2,sp,#0x1e0
7101d9d454  blr x8
7101d9d458  tbz w0,#0x0,0x7101d9d470
7101d9d45c  mov w0,#0x10
7101d9d460  mov w1,#0x20
7101d9d464  bl 0x710392e290
7101d9d468  mov x19,x0
7101d9d46c  cbnz x0,0x7101d9d474
7101d9d470  mov x19,xzr
7101d9d474  stp xzr,xzr,[x19, #0x10]
7101d9d478  stp xzr,xzr,[x19]
7101d9d47c  ldr x9,[sp, #0x68]
7101d9d480  ldrb w8,[x9, #0xb8]
7101d9d484  str x25,[sp, #0x38]
7101d9d488  cbz w8,0x7101d9d534
7101d9d48c  mov x24,x9
7101d9d490  ldrb w8,[x24, #0xec]!
7101d9d494  cbz w8,0x7101d9d614
7101d9d498  adrp x1,0x710438d000
7101d9d49c  add x1,x1,#0xe4
7101d9d4a0  add x8,sp,#0x1e0
7101d9d4a4  mov x0,x26
7101d9d4a8  bl 0x7103776910
7101d9d4ac  ldr x8,[sp, #0x1e8]
7101d9d4b0  str xzr,[sp, #0x1e8]
7101d9d4b4  str x8,[sp, #0x58]
7101d9d4b8  cbz x21,0x7101d9d4c4
7101d9d4bc  mov x0,x21
7101d9d4c0  bl 0x710392eb40
7101d9d4c4  adrp x21,0x710523d000
7101d9d4c8  add x21,x21,#0x9a8
7101d9d4cc  adrp x1,0x710434a000
7101d9d4d0  add x1,x1,#0x806
7101d9d4d4  add x8,sp,#0x1e0
7101d9d4d8  mov x0,x26
7101d9d4dc  stp x21,xzr,[sp, #0x1e0]
7101d9d4e0  bl 0x7103776910
7101d9d4e4  ldr x28,[sp, #0x1e8]
7101d9d4e8  str xzr,[sp, #0x1e8]
7101d9d4ec  cbz x19,0x7101d9d4f8
7101d9d4f0  mov x0,x19
7101d9d4f4  bl 0x710392eb40
7101d9d4f8  stp x21,xzr,[sp, #0x1e0]
7101d9d4fc  ldr x0,[x20, #0x178]
7101d9d500  fmov s0,0x3f800000
7101d9d504  adrp x1,0x710424f000
7101d9d508  add x1,x1,#0x95a
7101d9d50c  bl 0x7103778300
7101d9d510  ldr x8,[sp, #0x68]
7101d9d514  ldr x0,[x8, #0x10]
7101d9d518  bl 0x7102510850
7101d9d51c  mov w8,w0
7101d9d520  ldr x0,[x20, #0x178]
7101d9d524  tbz w8,#0x0,0x7101d9d790
7101d9d528  adrp x1,0x7104412000
7101d9d52c  add x1,x1,#0xdcb
7101d9d530  b 0x7101d9d798
7101d9d534  ldr x0,[x20, #0x178]
7101d9d538  fmov s0,0x3f800000
7101d9d53c  adrp x1,0x710434a000
7101d9d540  add x1,x1,#0x773
7101d9d544  bl 0x7103778300
7101d9d548  adrp x1,0x7104401000
7101d9d54c  add x1,x1,#0xd32
7101d9d550  add x8,sp,#0x1e0
7101d9d554  mov x0,x26
7101d9d558  bl 0x7103776910
7101d9d55c  ldr x24,[sp, #0x1e8]
7101d9d560  str xzr,[sp, #0x1e8]
7101d9d564  cbz x21,0x7101d9d570
7101d9d568  mov x0,x21
7101d9d56c  bl 0x710392eb40
7101d9d570  adrp x21,0x710523d000
7101d9d574  add x21,x21,#0x9a8
7101d9d578  adrp x1,0x7104308000
7101d9d57c  add x1,x1,#0xa92
7101d9d580  add x8,sp,#0x1e0
7101d9d584  str x24,[sp, #0x58]
7101d9d588  mov x0,x26
7101d9d58c  stp x21,xzr,[sp, #0x1e0]
7101d9d590  bl 0x7103776910
7101d9d594  ldr x28,[sp, #0x1e8]
7101d9d598  str xzr,[sp, #0x1e8]
7101d9d59c  cbz x19,0x7101d9d5a8
7101d9d5a0  mov x0,x19
7101d9d5a4  bl 0x710392eb40
7101d9d5a8  ldr x8,[sp, #0x68]
7101d9d5ac  mov w25,wzr
7101d9d5b0  add x24,x8,#0xec
7101d9d5b4  stp x21,xzr,[sp, #0x1e0]
7101d9d5b8  ldrb w8,[x24]
7101d9d5bc  cbnz w8,0x7101d9d7ac
7101d9d5c0  ldr x9,[sp, #0x68]
7101d9d5c4  ldrb w8,[x9, #0x8]
7101d9d5c8  mov x21,#0xff0000000000
7101d9d5cc  movk x21,#0xc1ff, LSL #48
7101d9d5d0  cbz w8,0x7101d9d7b4
7101d9d5d4  ldp x8,x9,[x9, #0x70]
7101d9d5d8  subs x9,x9,x8
7101d9d5dc  b.eq 0x7101d9d7b4
7101d9d5e0  lsr x10,x9,#0x3
7101d9d5e4  cmp w10,#0x1
7101d9d5e8  b.lt 0x7101d9d7b4
7101d9d5ec  mov x10,xzr
7101d9d5f0  sbfx x11,x9,#0x3,#0x20
7101d9d5f4  ldr x12,[x8, x10, LSL #0x3]
7101d9d5f8  ldrb w12,[x12, #0x10]
7101d9d5fc  cmp w12,#0x1
7101d9d600  b.eq 0x7101da14d8
7101d9d604  add x10,x10,#0x1
7101d9d608  cmp x10,x11
7101d9d60c  b.lt 0x7101d9d5f4
7101d9d610  b 0x7101d9d7b4
7101d9d614  ldrb w8,[x9, #0x8]
7101d9d618  cbz w8,0x7101d9d70c
7101d9d61c  ldr x9,[sp, #0x68]
7101d9d620  ldp x8,x9,[x9, #0x70]
7101d9d624  cmp x9,x8
7101d9d628  b.eq 0x7101d9d70c
7101d9d62c  adrp x8,0x710532f000
7101d9d630  ldr x8,[x8, #0x730]
7101d9d634  ldr x9,[x8, #0x8]
7101d9d638  ldr x8,[sp, #0x68]
7101d9d63c  ldrsh x8,[x8, #0x88]
7101d9d640  ldr x9,[x9, #0x1d8]
7101d9d644  cmn x8,#0x1
7101d9d648  b.eq 0x7101d9d654
7101d9d64c  add x8,x9,x8, LSL #0x1
7101d9d650  ldrh w8,[x8, #0x60]
7101d9d654  ldp x10,x9,[x9, #0x20]
7101d9d658  sub x9,x9,x10
7101d9d65c  lsr x9,x9,#0x6
7101d9d660  mov w11,#0xcccd
7101d9d664  movk w11,#0xcccc, LSL #16
7101d9d668  mul w9,w9,w11
7101d9d66c  cmp w8,w9
7101d9d670  b.cs 0x7101d9d70c
7101d9d674  mov w9,#0x140
7101d9d678  umaddl x8,w8,w9,x10
7101d9d67c  ldrb w8,[x8, #0x5e]
7101d9d680  cmp w8,#0x3
7101d9d684  b.ne 0x7101d9d70c
7101d9d688  adrp x1,0x7104422000
7101d9d68c  add x1,x1,#0x755
7101d9d690  add x8,sp,#0x1e0
7101d9d694  mov x0,x26
7101d9d698  bl 0x7103776910
7101d9d69c  ldr x8,[sp, #0x1e8]
7101d9d6a0  str xzr,[sp, #0x1e8]
7101d9d6a4  str x8,[sp, #0x58]
7101d9d6a8  cbz x21,0x7101d9d6b4
7101d9d6ac  mov x0,x21
7101d9d6b0  bl 0x710392eb40
7101d9d6b4  adrp x21,0x710523d000
7101d9d6b8  add x21,x21,#0x9a8
7101d9d6bc  adrp x1,0x710438c000
7101d9d6c0  add x1,x1,#0xee8
7101d9d6c4  add x8,sp,#0x1e0
7101d9d6c8  mov x0,x26
7101d9d6cc  stp x21,xzr,[sp, #0x1e0]
7101d9d6d0  bl 0x7103776910
7101d9d6d4  ldr x28,[sp, #0x1e8]
7101d9d6d8  str xzr,[sp, #0x1e8]
7101d9d6dc  cbz x19,0x7101d9d6e8
7101d9d6e0  mov x0,x19
7101d9d6e4  bl 0x710392eb40
7101d9d6e8  ldr x8,[sp, #0x68]
7101d9d6ec  stp x21,xzr,[sp, #0x1e0]
7101d9d6f0  ldrb w8,[x8, #0xb9]
7101d9d6f4  ldr x0,[x20, #0x178]
7101d9d6f8  cmp w8,#0x2
7101d9d6fc  b.ne 0x7101da1528
7101d9d700  adrp x1,0x710433a000
7101d9d704  add x1,x1,#0x559
7101d9d708  b 0x7101d9e188
7101d9d70c  adrp x1,0x71042a3000
7101d9d710  add x1,x1,#0x480
7101d9d714  add x8,sp,#0x1e0
7101d9d718  mov x0,x26
7101d9d71c  bl 0x7103776910
7101d9d720  ldr x8,[sp, #0x1e8]
7101d9d724  str xzr,[sp, #0x1e8]
7101d9d728  str x8,[sp, #0x58]
7101d9d72c  cbz x21,0x7101d9d738
7101d9d730  mov x0,x21
7101d9d734  bl 0x710392eb40
7101d9d738  adrp x21,0x710523d000
7101d9d73c  add x21,x21,#0x9a8
7101d9d740  adrp x1,0x7104308000
7101d9d744  add x1,x1,#0xa92
7101d9d748  add x8,sp,#0x1e0
7101d9d74c  mov x0,x26
7101d9d750  stp x21,xzr,[sp, #0x1e0]
7101d9d754  bl 0x7103776910
7101d9d758  ldr x28,[sp, #0x1e8]
7101d9d75c  str xzr,[sp, #0x1e8]
7101d9d760  cbz x19,0x7101d9d76c
7101d9d764  mov x0,x19
7101d9d768  bl 0x710392eb40
7101d9d76c  ldr x8,[sp, #0x68]
7101d9d770  stp x21,xzr,[sp, #0x1e0]
7101d9d774  ldrb w8,[x8, #0xb9]
7101d9d778  ldr x0,[x20, #0x178]
7101d9d77c  cmp w8,#0x2
7101d9d780  b.ne 0x7101d9e180
7101d9d784  adrp x1,0x7104319000
7101d9d788  add x1,x1,#0x2d0
7101d9d78c  b 0x7101d9e188
7101d9d790  adrp x1,0x71043ad000
7101d9d794  add x1,x1,#0xc5a
7101d9d798  fmov s0,0x3f800000
7101d9d79c  bl 0x7103778300
7101d9d7a0  mov w25,wzr
7101d9d7a4  ldrb w8,[x24]
7101d9d7a8  cbz w8,0x7101d9d5c0
7101d9d7ac  ldr x8,[sp, #0x68]
7101d9d7b0  ldr x21,[x8, #0xf0]
7101d9d7b4  mov w19,wzr
7101d9d7b8  orr w2,wzr,#0x3
7101d9d7bc  mov x0,x21
7101d9d7c0  mov w1,w19
7101d9d7c4  str w27,[sp, #0x48]
7101d9d7c8  str x24,[sp, #0x50]
7101d9d7cc  str w23,[sp, #0xc]
7101d9d7d0  str w22,[sp, #0x34]
7101d9d7d4  add x22,x20,#0x138
7101d9d7d8  bl 0x7103238a70
7101d9d7dc  tst x0,#0xffffffffff
7101d9d7e0  str x0,[sp, #0x1e0]
7101d9d7e4  b.eq 0x7101d9d7fc
7101d9d7e8  ldr x0,[x22]
7101d9d7ec  ldrsw x2,[x0, #0x70]
7101d9d7f0  ldr w3,[x0, #0x68]
7101d9d7f4  add x1,sp,#0x1e0
7101d9d7f8  bl 0x710323c4e0
7101d9d7fc  orr w3,wzr,#0x3
7101d9d800  mov x0,x22
7101d9d804  mov x1,x21
7101d9d808  mov w2,w19
7101d9d80c  str x22,[sp, #0x60]
7101d9d810  bl 0x710323f330
7101d9d814  adrp x8,0x710532f000
7101d9d818  ldr x8,[x8, #0x730]
7101d9d81c  ldr x27,[x8, #0x8]
7101d9d820  mov x22,x0
7101d9d824  ldr x0,[x27, #0x2a8]
7101d9d828  mov x1,x21
7101d9d82c  mov w2,w19
7101d9d830  bl 0x7103280ec0
7101d9d834  ldr x8,[x27, #0x2a8]
7101d9d838  fmov s8,wzr
7101d9d83c  mov v0.16B,v8.16B
7101d9d840  mov x2,#0x3aee
7101d9d844  movk x2,#0x91e, LSL #16
7101d9d848  movk x2,#0x12, LSL #32
7101d9d84c  ldr x24,[x8, #0x8]
7101d9d850  mov w23,w0
7101d9d854  mov x0,x24
7101d9d858  mov w1,w23
7101d9d85c  bl 0x710326ad60
7101d9d860  str d0,[sp, #0x20]
7101d9d864  mov v0.16B,v8.16B
7101d9d868  mov x2,#0xa78
7101d9d86c  movk x2,#0x7e19, LSL #16
7101d9d870  movk x2,#0x12, LSL #32
7101d9d874  mov x0,x24
7101d9d878  mov w1,w23
7101d9d87c  bl 0x710326ad60
7101d9d880  str d0,[sp, #0x10]
7101d9d884  fmov s0,0x3f800000
7101d9d888  mov x2,#0xe57b
7101d9d88c  movk x2,#0x1d20, LSL #16
7101d9d890  movk x2,#0xf, LSL #32
7101d9d894  mov x0,x24
7101d9d898  mov w1,w23
7101d9d89c  bl 0x710326ad60
7101d9d8a0  mov w0,#0x10
7101d9d8a4  mov w1,#0x20
7101d9d8a8  mov v8.16B,v0.16B
7101d9d8ac  bl 0x710392e290
7101d9d8b0  mov x23,x0
7101d9d8b4  cbnz x0,0x7101d9d900
7101d9d8b8  adrp x8,0x7105332000
7101d9d8bc  ldr x0,[x8, #0xf00]
7101d9d8c0  cbz x0,0x7101d9d8fc
7101d9d8c4  mov w8,#0x20
7101d9d8c8  str wzr,[sp, #0x198]
7101d9d8cc  add x1,sp,#0x198
7101d9d8d0  str x8,[sp, #0x1e0]
7101d9d8d4  ldr x8,[x0]
7101d9d8d8  ldr x8,[x8, #0x30]
7101d9d8dc  add x2,sp,#0x1e0
7101d9d8e0  blr x8
7101d9d8e4  tbz w0,#0x0,0x7101d9d8fc
7101d9d8e8  mov w0,#0x10
7101d9d8ec  mov w1,#0x20
7101d9d8f0  bl 0x710392e290
7101d9d8f4  mov x23,x0
7101d9d8f8  cbnz x0,0x7101d9d900
7101d9d8fc  mov x23,xzr
7101d9d900  stp xzr,xzr,[x23, #0x10]
7101d9d904  movi v1.2D,#0x0
7101d9d908  stp xzr,xzr,[x23]
7101d9d90c  ldr x24,[sp, #0x58]
7101d9d910  ldr q0,[sp, #0x20]
7101d9d914  ldr x8,[x24]
7101d9d918  str x8,[x23]
7101d9d91c  mov v1.S[0x0],v0.S[0x0]
7101d9d920  ldr q0,[sp, #0x10]
7101d9d924  ldr x8,[x24, #0x8]
7101d9d928  str x8,[x23, #0x8]
7101d9d92c  ldr x8,[x24, #0x10]
7101d9d930  mov v1.S[0x1],v0.S[0x0]
7101d9d934  mov v0.16B,v8.16B
7101d9d938  str x8,[x23, #0x10]
7101d9d93c  ldr x8,[x24, #0x18]
7101d9d940  add x1,sp,#0x1e0
7101d9d944  mov x0,x23
7101d9d948  str x8,[x23, #0x18]
7101d9d94c  str q1,[sp, #0x20]
7101d9d950  str q1,[sp, #0x1e0]
7101d9d954  bl 0x7103779770
7101d9d958  cbz x23,0x7101d9d964
7101d9d95c  mov x0,x23
7101d9d960  bl 0x710392eb40
7101d9d964  mov w0,#0x10
7101d9d968  mov w1,#0x20
7101d9d96c  bl 0x710392e290
7101d9d970  mov x23,x0
7101d9d974  cbnz x0,0x7101d9d9c0
7101d9d978  adrp x8,0x7105332000
7101d9d97c  ldr x0,[x8, #0xf00]
7101d9d980  cbz x0,0x7101d9d9bc
7101d9d984  mov w8,#0x20
7101d9d988  str wzr,[sp, #0x198]
7101d9d98c  add x1,sp,#0x198
7101d9d990  str x8,[sp, #0x1e0]
7101d9d994  ldr x8,[x0]
7101d9d998  ldr x8,[x8, #0x30]
7101d9d99c  add x2,sp,#0x1e0
7101d9d9a0  blr x8
7101d9d9a4  tbz w0,#0x0,0x7101d9d9bc
7101d9d9a8  mov w0,#0x10
7101d9d9ac  mov w1,#0x20
7101d9d9b0  bl 0x710392e290
7101d9d9b4  mov x23,x0
7101d9d9b8  cbnz x0,0x7101d9d9c0
7101d9d9bc  mov x23,xzr
7101d9d9c0  stp xzr,xzr,[x23, #0x10]
7101d9d9c4  add x1,sp,#0x1e0
7101d9d9c8  stp xzr,xzr,[x23]
7101d9d9cc  ldr x8,[x28]
7101d9d9d0  ldr q0,[sp, #0x20]
7101d9d9d4  mov x0,x23
7101d9d9d8  str x8,[x23]
7101d9d9dc  ldr x8,[x28, #0x8]
7101d9d9e0  str x8,[x23, #0x8]
7101d9d9e4  ldr x8,[x28, #0x10]
7101d9d9e8  str x8,[x23, #0x10]
7101d9d9ec  ldr x8,[x28, #0x18]
7101d9d9f0  str x8,[x23, #0x18]
7101d9d9f4  str q0,[sp, #0x1e0]
7101d9d9f8  mov v0.16B,v8.16B
7101d9d9fc  bl 0x7103779770
7101d9da00  cbz x23,0x7101d9da0c
7101d9da04  mov x0,x23
7101d9da08  bl 0x710392eb40
7101d9da0c  mov x0,x24
7101d9da10  mov x1,x22
7101d9da14  bl 0x7103778b80
7101d9da18  mov x0,x28
7101d9da1c  mov x1,x22
7101d9da20  bl 0x7103778b80
7101d9da24  cbz w25,0x7101d9db8c
7101d9da28  mov x9,#0x4904
7101d9da2c  movk x9,#0x1294, LSL #16
7101d9da30  and x8,x21,#0xffffffffff
7101d9da34  movk x9,#0x11, LSL #32
7101d9da38  cmp x8,x9
7101d9da3c  b.ne 0x7101d9da64
7101d9da40  adrp x8,0x710532f000
7101d9da44  ldr x8,[x8, #0x730]
7101d9da48  ldr x8,[x8, #0x8]
7101d9da4c  ldr x0,[x8, #0x168]
7101d9da50  mov x1,#0xa545
7101d9da54  movk x1,#0x2d9a, LSL #16
7101d9da58  movk x1,#0x1c, LSL #32
7101d9da5c  bl 0x71032631a0
7101d9da60  mov x21,x0
7101d9da64  ldr x0,[x27, #0x2a8]
7101d9da68  mov x1,x21
7101d9da6c  mov w2,w19
7101d9da70  bl 0x7103280ec0
7101d9da74  ldr x23,[x27, #0x2a8]
7101d9da78  mov w1,w0
7101d9da7c  ldr x0,[x23, #0x8]
7101d9da80  mov x2,#0x27a
7101d9da84  movk x2,#0x5ac2, LSL #16
7101d9da88  movk x2,#0x13, LSL #32
7101d9da8c  mov w3,wzr
7101d9da90  bl 0x710326a6e0
7101d9da94  mov w22,wzr
7101d9da98  tbz w0,#0x0,0x7101d9dad0
7101d9da9c  mov x0,x23
7101d9daa0  mov x1,x21
7101d9daa4  mov w2,w19
7101d9daa8  bl 0x7103280ec0
7101d9daac  ldr x8,[x27, #0x2a8]
7101d9dab0  mov w1,w0
7101d9dab4  ldr x0,[x8, #0x8]
7101d9dab8  mov x2,#0xeb67
7101d9dabc  movk x2,#0x190e, LSL #16
7101d9dac0  movk x2,#0x11, LSL #32
7101d9dac4  mov w3,wzr
7101d9dac8  bl 0x710326aa20
7101d9dacc  mov w22,w0
7101d9dad0  adrp x0,0x710425f000
7101d9dad4  add x0,x0,#0xaa7
7101d9dad8  add x8,sp,#0x1e0
7101d9dadc  mov w1,w22
7101d9dae0  add x23,sp,#0x1e0
7101d9dae4  bl 0x71003a4ca0
7101d9dae8  ldr x0,[x20, #0x178]
7101d9daec  fmov s0,0x3f800000
7101d9daf0  add x1,x23,#0x8
7101d9daf4  bl 0x7103778300
7101d9daf8  cmp w22,#0x1
7101d9dafc  b.lt 0x7101d9db84
7101d9db00  mov w23,wzr
7101d9db04  adrp x25,0x710425f000
7101d9db08  add x25,x25,#0xaa7
7101d9db0c  add x24,x27,#0x2a0
7101d9db10  adrp x27,0x710523d000
7101d9db14  add x27,x27,#0x9a8
7101d9db18  mov x0,x24
7101d9db1c  mov x1,x21
7101d9db20  mov w2,w19
7101d9db24  mov w3,w23
7101d9db28  mov w4,wzr
7101d9db2c  bl 0x7103281470
7101d9db30  add x8,sp,#0x198
7101d9db34  mov x0,x26
7101d9db38  mov x1,x25
7101d9db3c  mov w2,w23
7101d9db40  mov v8.16B,v0.16B
7101d9db44  mov v9.16B,v1.16B
7101d9db48  bl 0x7103776910
7101d9db4c  ldr x0,[sp, #0x1a0]
7101d9db50  ldr x8,[x0]
7101d9db54  cbz x8,0x7101d9db6c
7101d9db58  ldrb w9,[x8, #0x58]
7101d9db5c  orr w9,w9,#0x10
7101d9db60  str s8,[x8, #0x30]
7101d9db64  str s9,[x8, #0x34]
7101d9db68  strb w9,[x8, #0x58]
7101d9db6c  stp x27,xzr,[sp, #0x198]
7101d9db70  cbz x0,0x7101d9db78
7101d9db74  bl 0x710392eb40
7101d9db78  add w23,w23,#0x1
7101d9db7c  cmp w22,w23
7101d9db80  b.ne 0x7101d9db18
7101d9db84  ldr x24,[sp, #0x58]
7101d9db88  b 0x7101d9dba0
7101d9db8c  ldr x0,[x20, #0x178]
7101d9db90  fmov s0,0x3f800000
7101d9db94  adrp x1,0x710436c000
7101d9db98  add x1,x1,#0x9ac
7101d9db9c  bl 0x7103778300
7101d9dba0  ldr x26,[sp, #0x68]
7101d9dba4  ldr w27,[sp, #0x48]
7101d9dba8  adrp x25,0x710523d000
7101d9dbac  add x25,x25,#0x988
7101d9dbb0  cbz x28,0x7101d9dbbc
7101d9dbb4  mov x0,x28
7101d9dbb8  bl 0x710392eb40
7101d9dbbc  cbz x24,0x7101d9dbc8
7101d9dbc0  mov x0,x24
7101d9dbc4  bl 0x710392eb40
7101d9dbc8  ldrb w8,[x26, #0xb8]
7101d9dbcc  cbz w8,0x7101d9dc78
7101d9dbd0  ldrb w9,[x26, #0x8]
7101d9dbd4  ldrb w8,[x26, #0xec]
7101d9dbd8  cbz w9,0x7101d9dc44
7101d9dbdc  cbnz w8,0x7101d9dbec
7101d9dbe0  ldp x9,x10,[x26, #0x70]
7101d9dbe4  cmp x10,x9
7101d9dbe8  b.eq 0x7101d9dc78
7101d9dbec  adrp x9,0x710532f000
7101d9dbf0  ldr x9,[x9, #0x730]
7101d9dbf4  ldr x10,[x9, #0x8]
7101d9dbf8  ldrsh x9,[x26, #0x88]
7101d9dbfc  ldr x10,[x10, #0x1d8]
7101d9dc00  cmn x9,#0x1
7101d9dc04  b.eq 0x7101d9dc10
7101d9dc08  add x9,x10,x9, LSL #0x1
7101d9dc0c  ldrh w9,[x9, #0x60]
7101d9dc10  ldp x11,x10,[x10, #0x20]
7101d9dc14  sub x10,x10,x11
7101d9dc18  lsr x10,x10,#0x6
7101d9dc1c  mov w12,#0xcccd
7101d9dc20  movk w12,#0xcccc, LSL #16
7101d9dc24  mul w10,w10,w12
7101d9dc28  cmp w9,w10
7101d9dc2c  b.cs 0x7101d9dc44
7101d9dc30  mov w10,#0x140
7101d9dc34  umaddl x9,w9,w10,x11
7101d9dc38  ldrb w9,[x9, #0x5e]
7101d9dc3c  cmp w9,#0x3
7101d9dc40  b.eq 0x7101d9dc48
7101d9dc44  cbz w8,0x7101d9dc78
7101d9dc48  ldr x8,[x20, #0x188]
7101d9dc4c  ldr x8,[x8, #0x8]
7101d9dc50  add x19,x20,#0x180
7101d9dc54  cbz x8,0x7101d9dc6c
7101d9dc58  ldr x8,[x8, #0x18]
7101d9dc5c  cbz x8,0x7101d9dc6c
7101d9dc60  ldrb w9,[x8, #0x58]
7101d9dc64  and w9,w9,#0xfe
7101d9dc68  strb w9,[x8, #0x58]
7101d9dc6c  ldr x8,[sp, #0x38]
7101d9dc70  and x22,x8,#0xffff
7101d9dc74  b 0x7101d9ddfc
7101d9dc78  ldr x8,[x20, #0x188]
7101d9dc7c  ldr x8,[x8, #0x8]
7101d9dc80  add x19,x20,#0x180
7101d9dc84  cbz x8,0x7101d9dc9c
7101d9dc88  ldr x8,[x8, #0x18]
7101d9dc8c  cbz x8,0x7101d9dc9c
7101d9dc90  ldrb w9,[x8, #0x58]
7101d9dc94  orr w9,w9,#0x1
7101d9dc98  strb w9,[x8, #0x58]
7101d9dc9c  ldr x8,[sp, #0x38]
7101d9dca0  and x22,x8,#0xffff
7101d9dca4  ldr x8,[x20, #0x130]
7101d9dca8  ldr x21,[x8, #0x8]
7101d9dcac  cmn w27,#0x1
7101d9dcb0  b.eq 0x7101d9dd34
7101d9dcb4  mov x0,x21
7101d9dcb8  ldr x8,[x0, #0x10]!
7101d9dcbc  ldr x9,[x0, #0x8]
7101d9dcc0  sub x10,x9,x8
7101d9dcc4  asr x9,x10,#0x3
7101d9dcc8  cmp w9,#0x1
7101d9dccc  b.lt 0x7101d9dd34
7101d9dcd0  mov x11,xzr
7101d9dcd4  sbfx x10,x10,#0x3,#0x20
7101d9dcd8  mov x12,x8
7101d9dcdc  cmp x9,x11
7101d9dce0  b.ls 0x7101da1550
7101d9dce4  ldrh w13,[x12]
7101d9dce8  cmp w13,w27, UXTH 
7101d9dcec  b.eq 0x7101d9dd04
7101d9dcf0  add x11,x11,#0x1
7101d9dcf4  add x12,x12,#0x8
7101d9dcf8  cmp x11,x10
7101d9dcfc  b.lt 0x7101d9dcdc
7101d9dd00  b 0x7101d9dd34
7101d9dd04  tbnz w11,#0x1f,0x7101d9dd34
7101d9dd08  mov x11,xzr
7101d9dd0c  cmp x9,x11
7101d9dd10  b.ls 0x7101da1550
7101d9dd14  ldrh w12,[x8]
7101d9dd18  cmp w12,w27, UXTH 
7101d9dd1c  b.eq 0x7101da13f8
7101d9dd20  add x11,x11,#0x1
7101d9dd24  add x8,x8,#0x8
7101d9dd28  cmp x11,x10
7101d9dd2c  b.lt 0x7101d9dd0c
7101d9dd30  b 0x7101da14c0
7101d9dd34  mov w3,#0x1
7101d9dd38  mov x0,x21
7101d9dd3c  mov w1,wzr
7101d9dd40  mov x2,x22
7101d9dd44  mov x23,x22
7101d9dd48  bl 0x710259c150
7101d9dd4c  adrp x1,0x710439d000
7101d9dd50  add x1,x1,#0x945
7101d9dd54  add x8,sp,#0x1e0
7101d9dd58  mov x0,x19
7101d9dd5c  strh w27,[x20, #0x1c0]
7101d9dd60  bl 0x7103776640
7101d9dd64  adrp x1,0x7104441000
7101d9dd68  add x1,x1,#0x875
7101d9dd6c  add x8,sp,#0x198
7101d9dd70  add x0,sp,#0x1e0
7101d9dd74  bl 0x7103776910
7101d9dd78  ldr x21,[sp, #0x1a0]
7101d9dd7c  mov w1,#0x1
7101d9dd80  mov x0,x21
7101d9dd84  bl 0x71037790a0
7101d9dd88  adrp x22,0x710523d000
7101d9dd8c  add x22,x22,#0x9a8
7101d9dd90  stp x22,xzr,[sp, #0x198]
7101d9dd94  cbz x21,0x7101d9dda0
7101d9dd98  mov x0,x21
7101d9dd9c  bl 0x710392eb40
7101d9dda0  adrp x1,0x710426d000
7101d9dda4  add x1,x1,#0xc22
7101d9dda8  add x8,sp,#0x198
7101d9ddac  add x0,sp,#0x1e0
7101d9ddb0  bl 0x7103776910
7101d9ddb4  ldr x21,[sp, #0x1a0]
7101d9ddb8  mov w1,#0x1
7101d9ddbc  mov x0,x21
7101d9ddc0  bl 0x71037790a0
7101d9ddc4  stp x22,xzr,[sp, #0x198]
7101d9ddc8  cbz x21,0x7101d9ddd4
7101d9ddcc  mov x0,x21
7101d9ddd0  bl 0x710392eb40
7101d9ddd4  ldr x21,[sp, #0x1e8]
7101d9ddd8  stp x25,xzr,[sp, #0x1e0]
7101d9dddc  cbz x21,0x7101d9ddf8
7101d9dde0  ldr x0,[x21, #0x18]
7101d9dde4  stp x22,xzr,[x21, #0x10]
7101d9dde8  cbz x0,0x7101d9ddf0
7101d9ddec  bl 0x710392eb40
7101d9ddf0  mov x0,x21
7101d9ddf4  bl 0x710392eb40
7101d9ddf8  mov x22,x23
7101d9ddfc  adrp x1,0x710439d000
7101d9de00  add x1,x1,#0x945
7101d9de04  add x8,sp,#0x198
7101d9de08  mov x0,x19
7101d9de0c  bl 0x7103776640
7101d9de10  adrp x1,0x710428f000
7101d9de14  add x1,x1,#0x687
7101d9de18  add x8,sp,#0x1e0
7101d9de1c  add x0,sp,#0x198
7101d9de20  bl 0x7103776640
7101d9de24  ldr x19,[sp, #0x1e8]
7101d9de28  fmov s0,0x3f800000
7101d9de2c  adrp x1,0x7104348000
7101d9de30  add x1,x1,#0x100
7101d9de34  mov x0,x19
7101d9de38  bl 0x7103778300
7101d9de3c  stp x25,xzr,[sp, #0x1e0]
7101d9de40  cbz x19,0x7101d9de64
7101d9de44  ldr x0,[x19, #0x18]
7101d9de48  adrp x8,0x710523d000
7101d9de4c  add x8,x8,#0x9a8
7101d9de50  stp x8,xzr,[x19, #0x10]
7101d9de54  cbz x0,0x7101d9de5c
7101d9de58  bl 0x710392eb40
7101d9de5c  mov x0,x19
7101d9de60  bl 0x710392eb40
7101d9de64  ldr x19,[sp, #0x1a0]
7101d9de68  stp x25,xzr,[sp, #0x198]
7101d9de6c  cbz x19,0x7101d9de90
7101d9de70  ldr x0,[x19, #0x18]
7101d9de74  adrp x8,0x710523d000
7101d9de78  add x8,x8,#0x9a8
7101d9de7c  stp x8,xzr,[x19, #0x10]
7101d9de80  cbz x0,0x7101d9de88
7101d9de84  bl 0x710392eb40
7101d9de88  mov x0,x19
7101d9de8c  bl 0x710392eb40
7101d9de90  adrp x8,0x710532f000
7101d9de94  ldr x8,[x8, #0x730]
7101d9de98  orr w9,wzr,#0xffff
7101d9de9c  cmp w22,w9
7101d9dea0  cset w9,ne
7101d9dea4  ldr x23,[x8, #0x8]
7101d9dea8  sxth w8,w22
7101d9deac  cmp w8,#0x7d0
7101d9deb0  cset w8,lt
7101d9deb4  and w27,w9,w8
7101d9deb8  cmp w27,#0x1
7101d9debc  b.ne 0x7101d9df38
7101d9dec0  ldr x8,[x23, #0x1d8]
7101d9dec4  lsl x9,x22,#0x30
7101d9dec8  add x9,x8,x9, ASR #0x2f
7101d9decc  ldp x10,x8,[x8, #0x20]
7101d9ded0  ldrh w9,[x9, #0x60]
7101d9ded4  sub x8,x8,x10
7101d9ded8  mov w10,#0xcccd
7101d9dedc  movk w10,#0xcccc, LSL #16
7101d9dee0  lsr x8,x8,#0x6
7101d9dee4  mul w8,w8,w10
7101d9dee8  cmp w8,w9
7101d9deec  b.ls 0x7101d9df38
7101d9def0  adrp x8,0x7105329000
7101d9def4  ldr x8,[x8, #0xf98]
7101d9def8  ldr x8,[x8]
7101d9defc  ldr x8,[x8, #0x30]
7101d9df00  sxth x9,w22
7101d9df04  mov w10,#0x24
7101d9df08  madd x8,x9,x10,x8
7101d9df0c  ldrh w8,[x8, #0x20]
7101d9df10  cbz w8,0x7101d9df38
7101d9df14  add x0,x20,#0x160
7101d9df18  adrp x1,0x710438b000
7101d9df1c  add x1,x1,#0x306
7101d9df20  add x8,sp,#0x1e0
7101d9df24  bl 0x7103776640
7101d9df28  ldr x19,[sp, #0x1e8]
7101d9df2c  adrp x1,0x710438c000
7101d9df30  add x1,x1,#0xf86
7101d9df34  b 0x7101d9df58
7101d9df38  add x0,x20,#0x160
7101d9df3c  adrp x1,0x710438b000
7101d9df40  add x1,x1,#0x306
7101d9df44  add x8,sp,#0x1e0
7101d9df48  bl 0x7103776640
7101d9df4c  ldr x19,[sp, #0x1e8]
7101d9df50  adrp x1,0x7104422000
7101d9df54  add x1,x1,#0x8f0
7101d9df58  fmov s0,0x3f800000
7101d9df5c  mov x0,x19
7101d9df60  bl 0x7103778300
7101d9df64  stp x25,xzr,[sp, #0x1e0]
7101d9df68  cbz x19,0x7101d9df8c
7101d9df6c  ldr x0,[x19, #0x18]
7101d9df70  adrp x8,0x710523d000
7101d9df74  add x8,x8,#0x9a8
7101d9df78  stp x8,xzr,[x19, #0x10]
7101d9df7c  cbz x0,0x7101d9df84
7101d9df80  bl 0x710392eb40
7101d9df84  mov x0,x19
7101d9df88  bl 0x710392eb40
7101d9df8c  ldr x8,[sp, #0x50]
7101d9df90  ldrb w8,[x8]
7101d9df94  cbz w8,0x7101d9e044
7101d9df98  ldr x21,[x26, #0xf0]
7101d9df9c  mov w28,wzr
7101d9dfa0  add x24,x20,#0x160
7101d9dfa4  adrp x1,0x71043be000
7101d9dfa8  add x1,x1,#0xa54
7101d9dfac  add x8,sp,#0x188
7101d9dfb0  mov x0,x24
7101d9dfb4  bl 0x7103776910
7101d9dfb8  str x24,[sp, #0x58]
7101d9dfbc  str x22,[sp, #0x48]
7101d9dfc0  cbz w27,0x7101d9e024
7101d9dfc4  ldr x19,[x23, #0x1d8]
7101d9dfc8  ldp x9,x10,[x19, #0x20]
7101d9dfcc  lsl x8,x22,#0x30
7101d9dfd0  add x8,x19,x8, ASR #0x2f
7101d9dfd4  ldrh w8,[x8, #0x60]
7101d9dfd8  sub x9,x10,x9
7101d9dfdc  mov w10,#0xcccd
7101d9dfe0  movk w10,#0xcccc, LSL #16
7101d9dfe4  lsr x9,x9,#0x6
7101d9dfe8  mul w9,w9,w10
7101d9dfec  cmp w9,w8
7101d9dff0  b.ls 0x7101d9e024
7101d9dff4  ldr x13,[sp, #0x190]
7101d9dff8  ldr x8,[x13]
7101d9dffc  cbz x8,0x7101d9e010
7101d9e000  ldrb w9,[x8, #0x58]
7101d9e004  orr w9,w9,#0x1
7101d9e008  strb w9,[x8, #0x58]
7101d9e00c  ldr x19,[x23, #0x1d8]
7101d9e010  orr w8,wzr,#0xffff
7101d9e014  cmp x22,x8
7101d9e018  b.ne 0x7101d9e094
7101d9e01c  mov w8,#0xffffffff
7101d9e020  b 0x7101d9e0a0
7101d9e024  ldr x8,[sp, #0x190]
7101d9e028  str x8,[sp, #0x20]
7101d9e02c  ldr x8,[x8]
7101d9e030  cbz x8,0x7101d9e258
7101d9e034  ldrb w9,[x8, #0x58]
7101d9e038  and w9,w9,#0xfe
7101d9e03c  strb w9,[x8, #0x58]
7101d9e040  b 0x7101d9e258
7101d9e044  ldrb w8,[x26, #0x8]
7101d9e048  mov x21,#0xff0000000000
7101d9e04c  movk x21,#0xc1ff, LSL #48
7101d9e050  cbz w8,0x7101d9df9c
7101d9e054  ldp x8,x9,[x26, #0x70]
7101d9e058  subs x9,x9,x8
7101d9e05c  b.eq 0x7101d9df9c
7101d9e060  lsr x10,x9,#0x3
7101d9e064  cmp w10,#0x1
7101d9e068  b.lt 0x7101d9df9c
7101d9e06c  mov x10,xzr
7101d9e070  sbfx x11,x9,#0x3,#0x20
7101d9e074  ldr x12,[x8, x10, LSL #0x3]
7101d9e078  ldrb w12,[x12, #0x10]
7101d9e07c  cmp w12,#0x1
7101d9e080  b.eq 0x7101da14fc
7101d9e084  add x10,x10,#0x1
7101d9e088  cmp x10,x11
7101d9e08c  b.lt 0x7101d9e074
7101d9e090  b 0x7101d9df9c
7101d9e094  sxth x8,w22
7101d9e098  add x8,x19,x8, LSL #0x1
7101d9e09c  ldrh w8,[x8, #0x60]
7101d9e0a0  ldp x9,x10,[x19, #0x20]
7101d9e0a4  str x13,[sp, #0x20]
7101d9e0a8  sub x10,x10,x9
7101d9e0ac  orr x11,xzr,#-0x3333333333333334
7101d9e0b0  movk x11,#0xcccd
7101d9e0b4  asr x10,x10,#0x6
7101d9e0b8  mul x10,x10,x11
7101d9e0bc  mov w11,#0x140
7101d9e0c0  madd x9,x8,x11,x9
7101d9e0c4  adrp x12,0x7105182000
7101d9e0c8  add x12,x12,#0xb08
7101d9e0cc  cmp x10,x8
7101d9e0d0  mov x10,#0x5c00000000000000
7101d9e0d4  csel x22,x9,x12,hi
7101d9e0d8  ldr x2,[x22, #0x110]
7101d9e0dc  and x9,x2,#-0x100000000000000
7101d9e0e0  and x8,x2,#0xffffffffff
7101d9e0e4  cmp x9,x10
7101d9e0e8  mov x9,#0x832e
7101d9e0ec  movk x9,#0xb2d9, LSL #16
7101d9e0f0  ccmp x8,#0x0,#0x4,eq
7101d9e0f4  movk x9,#0x13, LSL #32
7101d9e0f8  b.ne 0x7101d9e108
7101d9e0fc  cmp x8,x9
7101d9e100  b.ne 0x7101d9e1f4
7101d9e104  b 0x7101d9e1a0
7101d9e108  cmp x8,x9
7101d9e10c  b.eq 0x7101d9e1a0
7101d9e110  mov x9,#0xb4dc
7101d9e114  movk x9,#0x1d15, LSL #16
7101d9e118  movk x9,#0x11, LSL #32
7101d9e11c  cmp x8,x9
7101d9e120  b.ne 0x7101d9e1f4
7101d9e124  adrp x8,0x710532f000
7101d9e128  ldr x8,[x8, #0x730]
7101d9e12c  ldr x19,[x8, #0x8]
7101d9e130  ldr x2,[x22, #0x60]
7101d9e134  add x24,sp,#0x1e0
7101d9e138  ldr x1,[x19, #0x188]
7101d9e13c  add x0,sp,#0x1e0
7101d9e140  bl 0x7103299d20
7101d9e144  add x1,x24,#0x8
7101d9e148  adrp x0,0x7104280000
7101d9e14c  add x0,x0,#0xec3
7101d9e150  add x8,sp,#0x198
7101d9e154  add x24,sp,#0x198
7101d9e158  bl 0x71003a4ca0
7101d9e15c  ldr x1,[x22, #0x60]
7101d9e160  ldr x0,[x19, #0x188]
7101d9e164  bl 0x710329acf0
7101d9e168  add x3,x24,#0x8
7101d9e16c  tbnz w0,#0x0,0x7101d9e23c
7101d9e170  add x0,sp,#0x188
7101d9e174  mov x1,x3
7101d9e178  bl 0x710377a120
7101d9e17c  b 0x7101d9e250
7101d9e180  adrp x1,0x7104308000
7101d9e184  add x1,x1,#0x87c
7101d9e188  fmov s0,0x3f800000
7101d9e18c  bl 0x7103778300
7101d9e190  mov w25,#0x1
7101d9e194  ldrb w8,[x24]
7101d9e198  cbnz w8,0x7101d9d7ac
7101d9e19c  b 0x7101d9d5c0
7101d9e1a0  ldr x24,[sp, #0x48]
7101d9e1a4  mov x0,x19
7101d9e1a8  mov x1,x24
7101d9e1ac  bl 0x71032a9470
7101d9e1b0  mov x2,x0
7101d9e1b4  add x0,sp,#0x1e0
7101d9e1b8  mov x1,x19
7101d9e1bc  add x22,sp,#0x1e0
7101d9e1c0  bl 0x71032a9540
7101d9e1c4  add x1,x22,#0x8
7101d9e1c8  adrp x0,0x710436c000
7101d9e1cc  add x0,x0,#0x861
7101d9e1d0  add x8,sp,#0x198
7101d9e1d4  mov x22,x24
7101d9e1d8  add x19,sp,#0x198
7101d9e1dc  bl 0x71003a4ca0
7101d9e1e0  add x1,x19,#0x8
7101d9e1e4  add x0,sp,#0x188
7101d9e1e8  bl 0x710377a120
7101d9e1ec  ldr x24,[sp, #0x58]
7101d9e1f0  b 0x7101d9e258
7101d9e1f4  adrp x8,0x710532f000
7101d9e1f8  ldr x8,[x8, #0x730]
7101d9e1fc  ldr x19,[x8, #0x8]
7101d9e200  ldr x1,[x19, #0x2b8]
7101d9e204  add x0,sp,#0x1e0
7101d9e208  add x24,sp,#0x1e0
7101d9e20c  bl 0x710327c1a0
7101d9e210  add x1,x24,#0x8
7101d9e214  adrp x0,0x7104420000
7101d9e218  add x0,x0,#0xa46
7101d9e21c  add x8,sp,#0x198
7101d9e220  add x24,sp,#0x198
7101d9e224  bl 0x71003a4ca0
7101d9e228  ldr x1,[x22, #0x110]
7101d9e22c  ldr x0,[x19, #0x2b8]
7101d9e230  bl 0x710327cba0
7101d9e234  add x3,x24,#0x8
7101d9e238  tbz w0,#0x0,0x7101d9e170
7101d9e23c  adrp x1,0x710434a000
7101d9e240  add x1,x1,#0x786
7101d9e244  add x0,sp,#0x188
7101d9e248  mov w2,#0x1
7101d9e24c  bl 0x710377a280
7101d9e250  ldr x24,[sp, #0x58]
7101d9e254  ldr x22,[sp, #0x48]
7101d9e258  adrp x1,0x710437c000
7101d9e25c  add x1,x1,#0xca7
7101d9e260  add x8,sp,#0x178
7101d9e264  mov x0,x24
7101d9e268  bl 0x7103776640
7101d9e26c  cbz w27,0x7101d9e30c
7101d9e270  adrp x8,0x710532f000
7101d9e274  ldr x8,[x8, #0x730]
7101d9e278  ldr x8,[x8, #0x8]
7101d9e27c  ldr x10,[x8, #0x1d8]
7101d9e280  lsl x8,x22,#0x30
7101d9e284  add x8,x10,x8, ASR #0x2f
7101d9e288  ldrh w9,[x8, #0x60]
7101d9e28c  ldp x8,x10,[x10, #0x20]
7101d9e290  sub x10,x10,x8
7101d9e294  orr x11,xzr,#-0x3333333333333334
7101d9e298  movk x11,#0xcccd
7101d9e29c  asr x10,x10,#0x6
7101d9e2a0  mul x10,x10,x11
7101d9e2a4  cmp w10,w9
7101d9e2a8  b.ls 0x7101d9e30c
7101d9e2ac  orr w11,wzr,#0xffff
7101d9e2b0  cmp x22,x11
7101d9e2b4  mov w11,#0xffffffff
7101d9e2b8  csel x9,x11,x9,eq
7101d9e2bc  mov w11,#0x140
7101d9e2c0  madd x8,x9,x11,x8
7101d9e2c4  adrp x11,0x7105182000
7101d9e2c8  add x11,x11,#0xb08
7101d9e2cc  cmp x10,x9
7101d9e2d0  csel x8,x8,x11,hi
7101d9e2d4  ldrb w9,[x8, #0x5e]
7101d9e2d8  cbz w9,0x7101d9e2e4
7101d9e2dc  mov w1,#0x4
7101d9e2e0  b 0x7101d9e310
7101d9e2e4  ldrb w8,[x8, #0x6c]
7101d9e2e8  sub w8,w8,#0x1
7101d9e2ec  cmp w8,#0x2
7101d9e2f0  b.hi 0x7101d9e30c
7101d9e2f4  and x8,x8,#0xff
7101d9e2f8  lsl x8,x8,#0x3
7101d9e2fc  mov w9,#0x301
7101d9e300  movk w9,#0x2, LSL #16
7101d9e304  lsr w1,w9,w8
7101d9e308  b 0x7101d9e310
7101d9e30c  mov w1,wzr
7101d9e310  add x0,sp,#0x198
7101d9e314  mov w2,wzr
7101d9e318  add x19,sp,#0x198
7101d9e31c  bl 0x710339dde0
7101d9e320  adrp x1,0x71043ad000
7101d9e324  add x1,x1,#0xc0a
7101d9e328  add x8,sp,#0x1e0
7101d9e32c  add x0,sp,#0x178
7101d9e330  add x22,sp,#0x1e0
7101d9e334  bl 0x7103776640
7101d9e338  add x1,x19,#0x8
7101d9e33c  ldr x19,[sp, #0x1e8]
7101d9e340  fmov s0,0x3f800000
7101d9e344  mov x0,x19
7101d9e348  bl 0x7103778300
7101d9e34c  stp x25,xzr,[sp, #0x1e0]
7101d9e350  cbz x19,0x7101d9e374
7101d9e354  ldr x0,[x19, #0x18]
7101d9e358  adrp x8,0x710523d000
7101d9e35c  add x8,x8,#0x9a8
7101d9e360  stp x8,xzr,[x19, #0x10]
7101d9e364  cbz x0,0x7101d9e36c
7101d9e368  bl 0x710392eb40
7101d9e36c  mov x0,x19
7101d9e370  bl 0x710392eb40
7101d9e374  adrp x1,0x7104338000
7101d9e378  add x1,x1,#0xd31
7101d9e37c  add x8,sp,#0x168
7101d9e380  add x0,sp,#0x178
7101d9e384  str w27,[sp, #0x38]
7101d9e388  bl 0x7103776910
7101d9e38c  adrp x1,0x7104280000
7101d9e390  add x1,x1,#0xee1
7101d9e394  add x8,sp,#0x158
7101d9e398  mov x0,x24
7101d9e39c  bl 0x7103776910
7101d9e3a0  ldr x19,[x23, #0x1d8]
7101d9e3a4  ldr x27,[sp, #0x48]
7101d9e3a8  mov x0,x19
7101d9e3ac  mov x1,x27
7101d9e3b0  bl 0x71032a9470
7101d9e3b4  mov x2,x0
7101d9e3b8  add x0,sp,#0x1e0
7101d9e3bc  mov x1,x19
7101d9e3c0  bl 0x71032a9540
7101d9e3c4  add x19,x22,#0x8
7101d9e3c8  adrp x0,0x7104464000
7101d9e3cc  add x0,x0,#0x1d4
7101d9e3d0  add x8,sp,#0x110
7101d9e3d4  mov x1,x19
7101d9e3d8  bl 0x71003a4ca0
7101d9e3dc  adrp x8,0x710532f000
7101d9e3e0  ldr x8,[x8, #0x730]
7101d9e3e4  ldr x24,[x8, #0x8]
7101d9e3e8  ldr x0,[x24, #0x168]
7101d9e3ec  mov x1,x21
7101d9e3f0  mov w2,w28
7101d9e3f4  bl 0x7103263540
7101d9e3f8  ldr x1,[x24, #0x168]
7101d9e3fc  mov w22,w0
7101d9e400  add x0,sp,#0x1e0
7101d9e404  mov x2,x21
7101d9e408  bl 0x7103262310
7101d9e40c  adrp x0,0x710439b000
7101d9e410  add x0,x0,#0x815
7101d9e414  add x8,sp,#0xc8
7101d9e418  mov w1,w22
7101d9e41c  mov x2,x19
7101d9e420  bl 0x71003a4ca0
7101d9e424  add x0,sp,#0x1e0
7101d9e428  mov x1,x26
7101d9e42c  bl 0x7102499260
7101d9e430  add x0,sp,#0x80
7101d9e434  mov x1,x26
7101d9e438  bl 0x71024999d0
7101d9e43c  ldrb w8,[x26, #0xb8]
7101d9e440  cbz w8,0x7101d9e464
7101d9e444  ldp x8,x24,[sp, #0x50]
7101d9e448  ldrb w8,[x8]
7101d9e44c  mov x22,x27
7101d9e450  cbz w8,0x7101d9e494
7101d9e454  ldr x0,[x20, #0x168]
7101d9e458  adrp x1,0x7104270000
7101d9e45c  add x1,x1,#0x331
7101d9e460  b 0x7101d9e50c
7101d9e464  ldr x0,[x20, #0x168]
7101d9e468  fmov s0,0x3f800000
7101d9e46c  adrp x1,0x7104433000
7101d9e470  add x1,x1,#0x521
7101d9e474  bl 0x7103778300
7101d9e478  ldr x9,[x23, #0x1d8]
7101d9e47c  orr w8,wzr,#0xffff
7101d9e480  cmp x27,x8
7101d9e484  mov x22,x27
7101d9e488  b.ne 0x7101d9e5d0
7101d9e48c  mov w8,#0xffffffff
7101d9e490  b 0x7101d9e5dc
7101d9e494  ldrb w8,[x26, #0x8]
7101d9e498  cbz w8,0x7101d9e500
7101d9e49c  ldp x8,x9,[x26, #0x70]
7101d9e4a0  cmp x9,x8
7101d9e4a4  b.eq 0x7101d9e500
7101d9e4a8  adrp x8,0x710532f000
7101d9e4ac  ldr x8,[x8, #0x730]
7101d9e4b0  ldr x9,[x8, #0x8]
7101d9e4b4  ldrsh x8,[x26, #0x88]
7101d9e4b8  ldr x9,[x9, #0x1d8]
7101d9e4bc  cmn x8,#0x1
7101d9e4c0  b.eq 0x7101d9e4cc
7101d9e4c4  add x8,x9,x8, LSL #0x1
7101d9e4c8  ldrh w8,[x8, #0x60]
7101d9e4cc  ldp x10,x9,[x9, #0x20]
7101d9e4d0  sub x9,x9,x10
7101d9e4d4  lsr x9,x9,#0x6
7101d9e4d8  mov w11,#0xcccd
7101d9e4dc  movk w11,#0xcccc, LSL #16
7101d9e4e0  mul w9,w9,w11
7101d9e4e4  cmp w8,w9
7101d9e4e8  b.cs 0x7101d9e500
7101d9e4ec  mov w9,#0x140
7101d9e4f0  umaddl x8,w8,w9,x10
7101d9e4f4  ldrb w8,[x8, #0x5e]
7101d9e4f8  cmp w8,#0x3
7101d9e4fc  b.eq 0x7101d9e454
7101d9e500  ldr x0,[x20, #0x168]
7101d9e504  adrp x1,0x710425f000
7101d9e508  add x1,x1,#0x8d8
7101d9e50c  fmov s0,0x3f800000
7101d9e510  bl 0x7103778300
7101d9e514  ldr x19,[sp, #0x50]
7101d9e518  ldrb w8,[x19]
7101d9e51c  cbz w8,0x7101d9e530
7101d9e520  ldr x0,[x20, #0x168]
7101d9e524  adrp x1,0x7104319000
7101d9e528  add x1,x1,#0x2ee
7101d9e52c  b 0x7101d9e640
7101d9e530  ldrb w8,[x26, #0x8]
7101d9e534  cbz w8,0x7101d9e5b8
7101d9e538  ldp x8,x9,[x26, #0x70]
7101d9e53c  cmp x9,x8
7101d9e540  b.eq 0x7101d9e5b8
7101d9e544  adrp x8,0x710532f000
7101d9e548  ldr x8,[x8, #0x730]
7101d9e54c  ldr x9,[x8, #0x8]
7101d9e550  ldrsh x8,[x26, #0x88]
7101d9e554  ldr x9,[x9, #0x1d8]
7101d9e558  cmn x8,#0x1
7101d9e55c  b.eq 0x7101d9e568
7101d9e560  add x8,x9,x8, LSL #0x1
7101d9e564  ldrh w8,[x8, #0x60]
7101d9e568  ldp x10,x9,[x9, #0x20]
7101d9e56c  sub x9,x9,x10
7101d9e570  lsr x9,x9,#0x6
7101d9e574  mov w11,#0xcccd
7101d9e578  movk w11,#0xcccc, LSL #16
7101d9e57c  mul w9,w9,w11
7101d9e580  cmp w8,w9
7101d9e584  b.cs 0x7101d9e5b8
7101d9e588  mov w9,#0x140
7101d9e58c  umaddl x8,w8,w9,x10
7101d9e590  ldrb w8,[x8, #0x5e]
7101d9e594  cmp w8,#0x3
7101d9e598  b.ne 0x7101d9e5b8
7101d9e59c  ldrb w8,[x26, #0xb9]
7101d9e5a0  ldr x0,[x20, #0x168]
7101d9e5a4  cmp w8,#0x2
7101d9e5a8  b.ne 0x7101da1534
7101d9e5ac  adrp x1,0x7104454000
7101d9e5b0  add x1,x1,#0xec7
7101d9e5b4  b 0x7101d9e640
7101d9e5b8  ldr x9,[x23, #0x1d8]
7101d9e5bc  orr w8,wzr,#0xffff
7101d9e5c0  cmp x22,x8
7101d9e5c4  b.ne 0x7101d9e5e4
7101d9e5c8  mov w8,#0xffffffff
7101d9e5cc  b 0x7101d9e5f0
7101d9e5d0  lsl x8,x22,#0x30
7101d9e5d4  add x8,x9,x8, ASR #0x2f
7101d9e5d8  ldrh w8,[x8, #0x60]
7101d9e5dc  ldp x19,x24,[sp, #0x50]
7101d9e5e0  b 0x7101d9e5f0
7101d9e5e4  lsl x8,x22,#0x30
7101d9e5e8  add x8,x9,x8, ASR #0x2f
7101d9e5ec  ldrh w8,[x8, #0x60]
7101d9e5f0  ldp x10,x9,[x9, #0x20]
7101d9e5f4  sub x9,x9,x10
7101d9e5f8  lsr x9,x9,#0x6
7101d9e5fc  mov w11,#0xcccd
7101d9e600  movk w11,#0xcccc, LSL #16
7101d9e604  mul w9,w9,w11
7101d9e608  cmp w8,w9
7101d9e60c  b.cs 0x7101d9e634
7101d9e610  mov w9,#0x140
7101d9e614  umaddl x8,w8,w9,x10
7101d9e618  ldrb w8,[x8, #0x5e]
7101d9e61c  cmp w8,#0x2
7101d9e620  b.ne 0x7101d9e634
7101d9e624  ldr x0,[x20, #0x168]
7101d9e628  adrp x1,0x71043ad000
7101d9e62c  add x1,x1,#0xc1f
7101d9e630  b 0x7101d9e640
7101d9e634  ldr x0,[x20, #0x168]
7101d9e638  adrp x1,0x71042f8000
7101d9e63c  add x1,x1,#0x749
7101d9e640  fmov s0,0x3f800000
7101d9e644  bl 0x7103778300
7101d9e648  ldrb w8,[x26, #0xb8]
7101d9e64c  ldr x9,[x23, #0x1d8]
7101d9e650  orr w10,wzr,#0xffff
7101d9e654  cmp x22,x10
7101d9e658  b.ne 0x7101d9e664
7101d9e65c  mov w10,#0xffffffff
7101d9e660  b 0x7101d9e670
7101d9e664  lsl x10,x22,#0x30
7101d9e668  add x10,x9,x10, ASR #0x2f
7101d9e66c  ldrh w10,[x10, #0x60]
7101d9e670  ldp x11,x9,[x9, #0x20]
7101d9e674  sub x9,x9,x11
7101d9e678  lsr x9,x9,#0x6
7101d9e67c  mov w12,#0xcccd
7101d9e680  movk w12,#0xcccc, LSL #16
7101d9e684  mul w9,w9,w12
7101d9e688  cmp w10,w9
7101d9e68c  b.cs 0x7101d9e6e8
7101d9e690  mov w9,#0x140
7101d9e694  umaddl x9,w10,w9,x11
7101d9e698  ldrb w9,[x9, #0x5e]
7101d9e69c  cmp w9,#0x2
7101d9e6a0  cset w9,eq
7101d9e6a4  cbz w8,0x7101d9e6f0
7101d9e6a8  cbnz w9,0x7101d9e6f4
7101d9e6ac  ldrb w8,[x19]
7101d9e6b0  cbz w8,0x7101d9e740
7101d9e6b4  ldr x0,[x26, #0x10]
7101d9e6b8  bl 0x7102510850
7101d9e6bc  adrp x1,0x710437c000
7101d9e6c0  add x1,x1,#0x9ad
7101d9e6c4  add x8,sp,#0x70
7101d9e6c8  tbz w0,#0x0,0x7101d9e7b0
7101d9e6cc  mov x0,x24
7101d9e6d0  bl 0x7103776910
7101d9e6d4  adrp x1,0x71043e0000
7101d9e6d8  add x1,x1,#0x545
7101d9e6dc  adrp x3,0x7104319000
7101d9e6e0  add x3,x3,#0x3d4
7101d9e6e4  b 0x7101d9e718
7101d9e6e8  mov w9,wzr
7101d9e6ec  cbnz w8,0x7101d9e6a8
7101d9e6f0  cbz w9,0x7101d9e7c0
7101d9e6f4  adrp x1,0x710437c000
7101d9e6f8  add x1,x1,#0x9ad
7101d9e6fc  add x8,sp,#0x70
7101d9e700  mov x0,x24
7101d9e704  bl 0x7103776910
7101d9e708  add x8,sp,#0x110
7101d9e70c  add x3,x8,#0x8
7101d9e710  adrp x1,0x71043e0000
7101d9e714  add x1,x1,#0x545
7101d9e718  add x0,sp,#0x70
7101d9e71c  mov w2,#0x1
7101d9e720  bl 0x710377a280
7101d9e724  ldr x0,[sp, #0x78]
7101d9e728  adrp x8,0x710523d000
7101d9e72c  add x8,x8,#0x9a8
7101d9e730  stp x8,xzr,[sp, #0x70]
7101d9e734  cbz x0,0x7101d9e7dc
7101d9e738  bl 0x710392eb40
7101d9e73c  b 0x7101d9e7dc
7101d9e740  ldrb w8,[x26, #0x8]
7101d9e744  cbz w8,0x7101d9e7c0
7101d9e748  ldp x8,x9,[x26, #0x70]
7101d9e74c  cmp x9,x8
7101d9e750  b.eq 0x7101d9e7c0
7101d9e754  adrp x8,0x710532f000
7101d9e758  ldr x8,[x8, #0x730]
7101d9e75c  ldr x9,[x8, #0x8]
7101d9e760  ldrsh x8,[x26, #0x88]
7101d9e764  ldr x9,[x9, #0x1d8]
7101d9e768  cmn x8,#0x1
7101d9e76c  b.eq 0x7101d9e778
7101d9e770  add x8,x9,x8, LSL #0x1
7101d9e774  ldrh w8,[x8, #0x60]
7101d9e778  ldp x10,x9,[x9, #0x20]
7101d9e77c  sub x9,x9,x10
7101d9e780  lsr x9,x9,#0x6
7101d9e784  mul w9,w9,w12
7101d9e788  cmp w8,w9
7101d9e78c  b.cs 0x7101d9e7c0
7101d9e790  mov w9,#0x140
7101d9e794  umaddl x8,w8,w9,x10
7101d9e798  ldrb w8,[x8, #0x5e]
7101d9e79c  cmp w8,#0x3
7101d9e7a0  b.ne 0x7101d9e7c0
7101d9e7a4  adrp x1,0x710437c000
7101d9e7a8  add x1,x1,#0x9ad
7101d9e7ac  add x8,sp,#0x70
7101d9e7b0  mov x0,x24
7101d9e7b4  bl 0x7103776910
7101d9e7b8  add x8,sp,#0xc8
7101d9e7bc  b 0x7101d9e70c
7101d9e7c0  add x8,sp,#0x110
7101d9e7c4  add x3,x8,#0x8
7101d9e7c8  adrp x1,0x71043e0000
7101d9e7cc  add x1,x1,#0x545
7101d9e7d0  add x0,sp,#0x168
7101d9e7d4  mov w2,#0x1
7101d9e7d8  bl 0x710377a280
7101d9e7dc  add x8,sp,#0x1e0
7101d9e7e0  add x9,sp,#0xc8
7101d9e7e4  add x4,x9,#0x8
7101d9e7e8  add x3,x8,#0x8
7101d9e7ec  add x8,sp,#0x80
7101d9e7f0  add x5,x8,#0x8
7101d9e7f4  adrp x1,0x710435b000
7101d9e7f8  add x1,x1,#0xc40
7101d9e7fc  add x0,sp,#0x158
7101d9e800  orr w2,wzr,#0x3
7101d9e804  bl 0x710377a280
7101d9e808  ldr x0,[sp, #0x160]
7101d9e80c  adrp x28,0x710523d000
7101d9e810  add x28,x28,#0x9a8
7101d9e814  stp x28,xzr,[sp, #0x158]
7101d9e818  cbz x0,0x7101d9e820
7101d9e81c  bl 0x710392eb40
7101d9e820  ldr x0,[sp, #0x170]
7101d9e824  stp x28,xzr,[sp, #0x168]
7101d9e828  cbz x0,0x7101d9e830
7101d9e82c  bl 0x710392eb40
7101d9e830  ldr x19,[sp, #0x180]
7101d9e834  stp x25,xzr,[sp, #0x178]
7101d9e838  cbz x19,0x7101d9e854
7101d9e83c  ldr x0,[x19, #0x18]
7101d9e840  stp x28,xzr,[x19, #0x10]
7101d9e844  cbz x0,0x7101d9e84c
7101d9e848  bl 0x710392eb40
7101d9e84c  mov x0,x19
7101d9e850  bl 0x710392eb40
7101d9e854  ldr x0,[sp, #0x20]
7101d9e858  stp x28,xzr,[sp, #0x188]
7101d9e85c  cbz x0,0x7101d9e864
7101d9e860  bl 0x710392eb40
7101d9e864  ldr w8,[sp, #0x38]
7101d9e868  add x21,sp,#0x110
7101d9e86c  mov w27,#0x9dc5
7101d9e870  movk w27,#0x811c, LSL #16
7101d9e874  cbz w8,0x7101d9e930
7101d9e878  adrp x8,0x710532f000
7101d9e87c  ldr x8,[x8, #0x730]
7101d9e880  ldr x8,[x8, #0x8]
7101d9e884  ldr x9,[x8, #0x1d8]
7101d9e888  lsl x8,x22,#0x30
7101d9e88c  add x8,x9,x8, ASR #0x2f
7101d9e890  ldrh w10,[x8, #0x60]
7101d9e894  ldp x8,x9,[x9, #0x20]
7101d9e898  sub x9,x9,x8
7101d9e89c  orr x11,xzr,#-0x3333333333333334
7101d9e8a0  movk x11,#0xcccd
7101d9e8a4  asr x9,x9,#0x6
7101d9e8a8  mul x11,x9,x11
7101d9e8ac  cmp w11,w10
7101d9e8b0  b.ls 0x7101d9e930
7101d9e8b4  orr w12,wzr,#0xffff
7101d9e8b8  cmp x22,x12
7101d9e8bc  mov w12,#0xffffffff
7101d9e8c0  csel x10,x12,x10,eq
7101d9e8c4  mov w12,#0x140
7101d9e8c8  madd x8,x10,x12,x8
7101d9e8cc  adrp x12,0x7105182000
7101d9e8d0  add x12,x12,#0xb08
7101d9e8d4  cmp x11,x10
7101d9e8d8  csel x8,x8,x12,hi
7101d9e8dc  ldp x10,x11,[x8]
7101d9e8e0  mov x9,xzr
7101d9e8e4  str wzr,[sp, #0x1f0]
7101d9e8e8  stp x10,x11,[sp, #0x1e0]
7101d9e8ec  add x10,x8,#0x18
7101d9e8f0  add x11,sp,#0x1e0
7101d9e8f4  b 0x7101d9e900
7101d9e8f8  add x9,x9,#0x2
7101d9e8fc  strb w12,[x13, #0x19]
7101d9e900  add x12,x10,x9
7101d9e904  ldrb w14,[x12]
7101d9e908  cbz w14,0x7101da0544
7101d9e90c  add w15,w9,#0x1
7101d9e910  add x13,x11,x9
7101d9e914  cmp w15,#0x3f
7101d9e918  strb w14,[x13, #0x18]
7101d9e91c  b.cs 0x7101da0540
7101d9e920  ldrb w12,[x12, #0x1]
7101d9e924  cbnz w12,0x7101d9e8f8
7101d9e928  add x9,x9,#0x1
7101d9e92c  b 0x7101da0544
7101d9e930  adrp x1,0x710438b000
7101d9e934  add x1,x1,#0x306
7101d9e938  add x8,sp,#0x198
7101d9e93c  mov x0,x24
7101d9e940  bl 0x7103776640
7101d9e944  fmov s8,0x3f800000
7101d9e948  ldr x19,[sp, #0x1a0]
7101d9e94c  adrp x1,0x7104464000
7101d9e950  add x1,x1,#0x374
7101d9e954  mov v0.16B,v8.16B
7101d9e958  mov x0,x19
7101d9e95c  bl 0x7103778300
7101d9e960  mov v0.16B,v8.16B
7101d9e964  adrp x1,0x7104453000
7101d9e968  add x1,x1,#0xa1
7101d9e96c  mov x0,x19
7101d9e970  bl 0x7103778300
7101d9e974  mov x9,#0x7073
7101d9e978  movk x9,#0x7269, LSL #16
7101d9e97c  mov x8,#0x2100000000
7101d9e980  movk x9,#0x7469, LSL #32
7101d9e984  movk x9,#0x5f73, LSL #48
7101d9e988  mov x11,#0x6e5f
7101d9e98c  movk x11,#0x766f, LSL #16
7101d9e990  stp x8,x9,[sp, #0x1e0]
7101d9e994  mov x9,#0x6f63
7101d9e998  movk x9,#0x5f6d, LSL #16
7101d9e99c  movk x9,#0x636c, LSL #32
7101d9e9a0  movk x9,#0x5f74, LSL #48
7101d9e9a4  str x9,[sp, #0x1f0]
7101d9e9a8  mov w9,#0x6369
7101d9e9ac  strh w9,[sp, #0x1f8]
7101d9e9b0  mov x9,#0x6e6f
7101d9e9b4  movk x9,#0x635f, LSL #16
7101d9e9b8  add x10,sp,#0x1e0
7101d9e9bc  movk x9,#0x616c, LSL #32
7101d9e9c0  movk x9,#0x7373, LSL #48
7101d9e9c4  stur x9,[x21, #0xea]
7101d9e9c8  movk x11,#0x6369, LSL #32
7101d9e9cc  movk x11,#0x65, LSL #48
7101d9e9d0  stur x11,[x21, #0xf2]
7101d9e9d4  add x8,x10,#0x9
7101d9e9d8  mov w10,#0x73
7101d9e9dc  mov w9,#0x89
7101d9e9e0  mov w11,w27
7101d9e9e4  mul w11,w11,w9
7101d9e9e8  and w10,w10,#0xff
7101d9e9ec  eor w11,w11,w10
7101d9e9f0  ldrb w10,[x8], #0x1
7101d9e9f4  cbnz w10,0x7101d9e9e4
7101d9e9f8  str w11,[sp, #0x1e0]
7101d9e9fc  adrp x1,0x7104292000
7101d9ea00  add x1,x1,#0x49
7101d9ea04  add x8,sp,#0x110
7101d9ea08  add x0,sp,#0x198
7101d9ea0c  bl 0x7103776910
7101d9ea10  ldr w8,[sp, #0x1e4]
7101d9ea14  cmp w8,#0x1
7101d9ea18  b.lt 0x7101d9eb10
7101d9ea1c  ldr x22,[x20, #0x128]
7101d9ea20  add x8,sp,#0x1e0
7101d9ea24  add x21,x8,#0x8
7101d9ea28  mov x0,x21
7101d9ea2c  mov w1,wzr
7101d9ea30  bl 0x710323af70
7101d9ea34  tst x0,#0xffffffffff
7101d9ea38  str x0,[sp, #0xc8]
7101d9ea3c  b.eq 0x7101d9ea54
7101d9ea40  ldr x0,[x22]
7101d9ea44  ldrsw x2,[x0, #0x70]
7101d9ea48  ldr w3,[x0, #0x68]
7101d9ea4c  add x1,sp,#0xc8
7101d9ea50  bl 0x710323c4e0
7101d9ea54  ldr x0,[x20, #0x128]
7101d9ea58  mov x1,x21
7101d9ea5c  mov w2,wzr
7101d9ea60  bl 0x7103240d30
7101d9ea64  ldr x21,[sp, #0x118]
7101d9ea68  mov x1,x0
7101d9ea6c  mov x0,x21
7101d9ea70  bl 0x7103778b80
7101d9ea74  stp x28,xzr,[sp, #0x110]
7101d9ea78  cbz x21,0x7101d9ea84
7101d9ea7c  mov x0,x21
7101d9ea80  bl 0x710392eb40
7101d9ea84  stp x25,xzr,[sp, #0x198]
7101d9ea88  cbz x19,0x7101d9eaa4
7101d9ea8c  ldr x0,[x19, #0x18]
7101d9ea90  stp x28,xzr,[x19, #0x10]
7101d9ea94  cbz x0,0x7101d9ea9c
7101d9ea98  bl 0x710392eb40
7101d9ea9c  mov x0,x19
7101d9eaa0  bl 0x710392eb40
7101d9eaa4  ldrsw x22,[x26, #0x24]
7101d9eaa8  adrp x1,0x710436c000
7101d9eaac  add x1,x1,#0x851
7101d9eab0  add x8,sp,#0x110
7101d9eab4  mov x0,x24
7101d9eab8  bl 0x7103776640
7101d9eabc  adrp x1,0x7104401000
7101d9eac0  add x1,x1,#0x96e
7101d9eac4  add x8,sp,#0xc8
7101d9eac8  mov x0,x24
7101d9eacc  bl 0x7103776910
7101d9ead0  ldr x19,[sp, #0x118]
7101d9ead4  ldrb w9,[x26, #0xec]
7101d9ead8  ldr x8,[x19, #0x8]
7101d9eadc  cbz w9,0x7101d9eb2c
7101d9eae0  cbz x8,0x7101d9eaf8
7101d9eae4  ldr x8,[x8, #0x18]
7101d9eae8  cbz x8,0x7101d9eaf8
7101d9eaec  ldrb w9,[x8, #0x58]
7101d9eaf0  and w9,w9,#0xfe
7101d9eaf4  strb w9,[x8, #0x58]
7101d9eaf8  ldr x21,[sp, #0xd0]
7101d9eafc  ldr x8,[x21]
7101d9eb00  cbz x8,0x7101d9eb5c
7101d9eb04  ldrb w9,[x8, #0x58]
7101d9eb08  and w9,w9,#0xfe
7101d9eb0c  b 0x7101d9eb58
7101d9eb10  ldr x21,[sp, #0x118]
7101d9eb14  mov w1,#0x1
7101d9eb18  mov x0,x21
7101d9eb1c  bl 0x71037790a0
7101d9eb20  stp x28,xzr,[sp, #0x110]
7101d9eb24  cbnz x21,0x7101d9ea7c
7101d9eb28  b 0x7101d9ea84
7101d9eb2c  cbz x8,0x7101d9eb44
7101d9eb30  ldr x8,[x8, #0x18]
7101d9eb34  cbz x8,0x7101d9eb44
7101d9eb38  ldrb w9,[x8, #0x58]
7101d9eb3c  orr w9,w9,#0x1
7101d9eb40  strb w9,[x8, #0x58]
7101d9eb44  ldr x21,[sp, #0xd0]
7101d9eb48  ldr x8,[x21]
7101d9eb4c  cbz x8,0x7101d9eb5c
7101d9eb50  ldrb w9,[x8, #0x58]
7101d9eb54  orr w9,w9,#0x1
7101d9eb58  strb w9,[x8, #0x58]
7101d9eb5c  mov w1,#0xffffffff
7101d9eb60  cmp w22,#0x16b
7101d9eb64  b.hi 0x7101d9eb80
7101d9eb68  mov w8,#0x48
7101d9eb6c  adrp x9,0x710454a000
7101d9eb70  add x9,x9,#0x7e8
7101d9eb74  madd x8,x22,x8,x9
7101d9eb78  ldp w1,w23,[x8, #0x4]
7101d9eb7c  b 0x7101d9eb84
7101d9eb80  mov w23,wzr
7101d9eb84  adrp x8,0x710532f000
7101d9eb88  ldr x8,[x8, #0x730]
7101d9eb8c  ldr x24,[x8, #0x8]
7101d9eb90  add x0,x24,#0x170
7101d9eb94  bl 0x71032b24e0
7101d9eb98  ldr x1,[x24, #0x178]
7101d9eb9c  mov x22,x0
7101d9eba0  add x0,sp,#0x1e0
7101d9eba4  mov x2,x22
7101d9eba8  add x24,sp,#0x1e0
7101d9ebac  bl 0x71032b1a60
7101d9ebb0  add x1,x24,#0x8
7101d9ebb4  adrp x0,0x7104452000
7101d9ebb8  add x0,x0,#0xf57
7101d9ebbc  add x8,sp,#0x198
7101d9ebc0  bl 0x71003a4ca0
7101d9ebc4  cmp w23,#0x2
7101d9ebc8  b.eq 0x7101d9ecbc
7101d9ebcc  ldr x24,[sp, #0x60]
7101d9ebd0  cmp w23,#0x1
7101d9ebd4  b.eq 0x7101d9ec38
7101d9ebd8  cbnz w23,0x7101d9edb4
7101d9ebdc  fmov s0,0x3f800000
7101d9ebe0  adrp x1,0x7104348000
7101d9ebe4  add x1,x1,#0xed7
7101d9ebe8  mov x0,x19
7101d9ebec  bl 0x7103778300
7101d9ebf0  adrp x1,0x71042d6000
7101d9ebf4  add x1,x1,#0x682
7101d9ebf8  add x8,sp,#0x1e0
7101d9ebfc  add x0,sp,#0x110
7101d9ec00  bl 0x7103776910
7101d9ec04  orr w1,wzr,#0xe
7101d9ec08  mov x0,x22
7101d9ec0c  bl 0x7103238c50
7101d9ec10  tst x0,#0xffffffffff
7101d9ec14  str x0,[sp, #0x80]
7101d9ec18  b.eq 0x7101d9ec30
7101d9ec1c  ldr x0,[x24]
7101d9ec20  ldrsw x2,[x0, #0x70]
7101d9ec24  ldr w3,[x0, #0x68]
7101d9ec28  add x1,sp,#0x80
7101d9ec2c  bl 0x710323c4e0
7101d9ec30  orr w2,wzr,#0xe
7101d9ec34  b 0x7101d9ec90
7101d9ec38  fmov s0,0x3f800000
7101d9ec3c  adrp x1,0x7104442000
7101d9ec40  add x1,x1,#0x4dd
7101d9ec44  mov x0,x19
7101d9ec48  bl 0x7103778300
7101d9ec4c  adrp x1,0x710425f000
7101d9ec50  add x1,x1,#0x8c6
7101d9ec54  add x8,sp,#0x1e0
7101d9ec58  add x0,sp,#0x110
7101d9ec5c  bl 0x7103776910
7101d9ec60  orr w1,wzr,#0xf
7101d9ec64  mov x0,x22
7101d9ec68  bl 0x7103238c50
7101d9ec6c  tst x0,#0xffffffffff
7101d9ec70  str x0,[sp, #0x80]
7101d9ec74  b.eq 0x7101d9ec8c
7101d9ec78  ldr x0,[x24]
7101d9ec7c  ldrsw x2,[x0, #0x70]
7101d9ec80  ldr w3,[x0, #0x68]
7101d9ec84  add x1,sp,#0x80
7101d9ec88  bl 0x710323c4e0
7101d9ec8c  orr w2,wzr,#0xf
7101d9ec90  mov x0,x24
7101d9ec94  mov x1,x22
7101d9ec98  bl 0x710323f4a0
7101d9ec9c  ldr x22,[sp, #0x1e8]
7101d9eca0  mov x1,x0
7101d9eca4  mov x0,x22
7101d9eca8  bl 0x7103778b80
7101d9ecac  stp x28,xzr,[sp, #0x1e0]
7101d9ecb0  cbz x22,0x7101d9edb4
7101d9ecb4  mov x0,x22
7101d9ecb8  b 0x7101d9edb0
7101d9ecbc  fmov s0,0x3f800000
7101d9ecc0  adrp x1,0x71042e7000
7101d9ecc4  add x1,x1,#0x659
7101d9ecc8  mov x0,x19
7101d9eccc  bl 0x7103778300
7101d9ecd0  adrp x1,0x710425f000
7101d9ecd4  add x1,x1,#0x8c6
7101d9ecd8  add x8,sp,#0x1e0
7101d9ecdc  add x0,sp,#0x110
7101d9ece0  bl 0x7103776910
7101d9ece4  orr w1,wzr,#0xf
7101d9ece8  mov x0,x22
7101d9ecec  bl 0x7103238c50
7101d9ecf0  ldr x24,[sp, #0x60]
7101d9ecf4  tst x0,#0xffffffffff
7101d9ecf8  str x0,[sp, #0x80]
7101d9ecfc  b.eq 0x7101d9ed14
7101d9ed00  ldr x0,[x24]
7101d9ed04  ldrsw x2,[x0, #0x70]
7101d9ed08  ldr w3,[x0, #0x68]
7101d9ed0c  add x1,sp,#0x80
7101d9ed10  bl 0x710323c4e0
7101d9ed14  orr w2,wzr,#0xf
7101d9ed18  mov x0,x24
7101d9ed1c  mov x1,x22
7101d9ed20  bl 0x710323f4a0
7101d9ed24  ldr x23,[sp, #0x1e8]
7101d9ed28  mov x1,x0
7101d9ed2c  mov x0,x23
7101d9ed30  bl 0x7103778b80
7101d9ed34  adrp x1,0x710432a000
7101d9ed38  add x1,x1,#0x4d8
7101d9ed3c  add x8,sp,#0x80
7101d9ed40  add x0,sp,#0x110
7101d9ed44  bl 0x7103776910
7101d9ed48  mov w1,#0x10
7101d9ed4c  mov x0,x22
7101d9ed50  bl 0x7103238c50
7101d9ed54  tst x0,#0xffffffffff
7101d9ed58  str x0,[sp, #0x188]
7101d9ed5c  b.eq 0x7101d9ed74
7101d9ed60  ldr x0,[x24]
7101d9ed64  ldrsw x2,[x0, #0x70]
7101d9ed68  ldr w3,[x0, #0x68]
7101d9ed6c  add x1,sp,#0x188
7101d9ed70  bl 0x710323c4e0
7101d9ed74  mov w2,#0x10
7101d9ed78  mov x0,x24
7101d9ed7c  mov x1,x22
7101d9ed80  bl 0x710323f4a0
7101d9ed84  ldr x22,[sp, #0x88]
7101d9ed88  mov x1,x0
7101d9ed8c  mov x0,x22
7101d9ed90  bl 0x7103778b80
7101d9ed94  stp x28,xzr,[sp, #0x80]
7101d9ed98  cbz x22,0x7101d9eda4
7101d9ed9c  mov x0,x22
7101d9eda0  bl 0x710392eb40
7101d9eda4  stp x28,xzr,[sp, #0x1e0]
7101d9eda8  cbz x23,0x7101d9edb4
7101d9edac  mov x0,x23
7101d9edb0  bl 0x710392eb40
7101d9edb4  adrp x1,0x71043cf000
7101d9edb8  add x1,x1,#0xca4
7101d9edbc  add x8,sp,#0x1e0
7101d9edc0  add x0,sp,#0x110
7101d9edc4  bl 0x7103776910
7101d9edc8  add x8,sp,#0x198
7101d9edcc  add x1,x8,#0x8
7101d9edd0  add x0,sp,#0x1e0
7101d9edd4  bl 0x710377a120
7101d9edd8  ldr x0,[sp, #0x1e8]
7101d9eddc  stp x28,xzr,[sp, #0x1e0]
7101d9ede0  cbz x0,0x7101d9ede8
7101d9ede4  bl 0x710392eb40
7101d9ede8  ldr x23,[sp, #0x40]
7101d9edec  stp x28,xzr,[sp, #0xc8]
7101d9edf0  cbz x21,0x7101d9edfc
7101d9edf4  mov x0,x21
7101d9edf8  bl 0x710392eb40
7101d9edfc  stp x25,xzr,[sp, #0x110]
7101d9ee00  cbz x19,0x7101d9ee1c
7101d9ee04  ldr x0,[x19, #0x18]
7101d9ee08  stp x28,xzr,[x19, #0x10]
7101d9ee0c  cbz x0,0x7101d9ee14
7101d9ee10  bl 0x710392eb40
7101d9ee14  mov x0,x19
7101d9ee18  bl 0x710392eb40
7101d9ee1c  ldr x0,[sp, #0x58]
7101d9ee20  adrp x1,0x71042b4000
7101d9ee24  add x1,x1,#0x754
7101d9ee28  add x8,sp,#0x198
7101d9ee2c  bl 0x7103776640
7101d9ee30  ldr x19,[sp, #0x1a0]
7101d9ee34  fmov s0,0x3f800000
7101d9ee38  adrp x1,0x710439d000
7101d9ee3c  add x1,x1,#0x809
7101d9ee40  mov x0,x19
7101d9ee44  bl 0x7103778300
7101d9ee48  ldp x22,x8,[x26, #0x158]
7101d9ee4c  cmp x8,x22
7101d9ee50  b.eq 0x7101d9f024
7101d9ee54  ldrb w8,[x22]
7101d9ee58  cmp w8,#0x1
7101d9ee5c  b.ne 0x7101d9f024
7101d9ee60  adrp x8,0x710532f000
7101d9ee64  ldr x8,[x8, #0x730]
7101d9ee68  ldr x8,[x8, #0x8]
7101d9ee6c  str x8,[sp, #0x50]
7101d9ee70  adrp x1,0x710435b000
7101d9ee74  add x1,x1,#0xc2a
7101d9ee78  add x8,sp,#0x110
7101d9ee7c  add x0,sp,#0x198
7101d9ee80  mov w2,wzr
7101d9ee84  bl 0x7103776640
7101d9ee88  ldr x23,[sp, #0x118]
7101d9ee8c  ldr x8,[x23, #0x8]
7101d9ee90  cbz x8,0x7101d9eea8
7101d9ee94  ldr x8,[x8, #0x18]
7101d9ee98  cbz x8,0x7101d9eea8
7101d9ee9c  ldrb w9,[x8, #0x58]
7101d9eea0  orr w9,w9,#0x1
7101d9eea4  strb w9,[x8, #0x58]
7101d9eea8  adrp x1,0x710439d000
7101d9eeac  add x1,x1,#0xca6
7101d9eeb0  add x8,sp,#0x1e0
7101d9eeb4  add x0,sp,#0x110
7101d9eeb8  bl 0x7103776910
7101d9eebc  ldr x0,[sp, #0x1e8]
7101d9eec0  ldr x8,[x0]
7101d9eec4  cbz x8,0x7101d9eed4
7101d9eec8  ldrb w9,[x8, #0x58]
7101d9eecc  and w9,w9,#0xfe
7101d9eed0  strb w9,[x8, #0x58]
7101d9eed4  str x19,[sp]
7101d9eed8  stp x28,xzr,[sp, #0x1e0]
7101d9eedc  cbz x0,0x7101d9eee4
7101d9eee0  bl 0x710392eb40
7101d9eee4  ldr x19,[x22, #0x8]
7101d9eee8  fmov s0,0x3f800000
7101d9eeec  adrp x1,0x710425f000
7101d9eef0  add x1,x1,#0xa89
7101d9eef4  mov x0,x23
7101d9eef8  bl 0x7103778300
7101d9eefc  ldr x8,[sp, #0x50]
7101d9ef00  ldr x0,[x8, #0x168]
7101d9ef04  ldrb w21,[x22, #0x10]
7101d9ef08  mov x1,x19
7101d9ef0c  bl 0x71032638e0
7101d9ef10  tst w0,#0x1
7101d9ef14  mov x0,x19
7101d9ef18  csel w21,wzr,w21,ne
7101d9ef1c  mov w2,#0x2
7101d9ef20  mov w1,w21
7101d9ef24  bl 0x7103238a70
7101d9ef28  tst x0,#0xffffffffff
7101d9ef2c  str x0,[sp, #0x1e0]
7101d9ef30  b.eq 0x7101d9ef48
7101d9ef34  ldr x0,[x24]
7101d9ef38  ldrsw x2,[x0, #0x70]
7101d9ef3c  ldr w3,[x0, #0x68]
7101d9ef40  add x1,sp,#0x1e0
7101d9ef44  bl 0x710323c4e0
7101d9ef48  adrp x1,0x7104401000
7101d9ef4c  add x1,x1,#0xd32
7101d9ef50  add x8,sp,#0x1e0
7101d9ef54  add x0,sp,#0x110
7101d9ef58  bl 0x7103776910
7101d9ef5c  mov w3,#0x2
7101d9ef60  mov x0,x24
7101d9ef64  mov x1,x19
7101d9ef68  mov w2,w21
7101d9ef6c  bl 0x710323f330
7101d9ef70  ldr x19,[sp, #0x1e8]
7101d9ef74  mov x1,x0
7101d9ef78  mov x0,x19
7101d9ef7c  bl 0x7103778b80
7101d9ef80  stp x28,xzr,[sp, #0x1e0]
7101d9ef84  cbz x19,0x7101d9ef90
7101d9ef88  mov x0,x19
7101d9ef8c  bl 0x710392eb40
7101d9ef90  ldrb w8,[x22, #0x12]
7101d9ef94  sub w8,w8,#0x1
7101d9ef98  and x9,x8,#0xff
7101d9ef9c  ldr w21,[x26, #0x150]
7101d9efa0  cmp w8,#0x3
7101d9efa4  adrp x1,0x7104308000
7101d9efa8  add x1,x1,#0x9cf
7101d9efac  add x8,sp,#0x1e0
7101d9efb0  lsl x9,x9,#0x3
7101d9efb4  mov w10,#0x301
7101d9efb8  movk w10,#0x2, LSL #16
7101d9efbc  lsr w9,w10,w9
7101d9efc0  add x0,sp,#0x110
7101d9efc4  csel w19,w9,wzr,cc
7101d9efc8  bl 0x7103776910
7101d9efcc  adrp x1,0x7104308000
7101d9efd0  add x1,x1,#0x98e
7101d9efd4  add x0,sp,#0x1e0
7101d9efd8  mov w2,#0x1
7101d9efdc  mov w3,w21
7101d9efe0  bl 0x710377a280
7101d9efe4  ldr x0,[sp, #0x1e8]
7101d9efe8  stp x28,xzr,[sp, #0x1e0]
7101d9efec  cbz x0,0x7101d9eff4
7101d9eff0  bl 0x710392eb40
7101d9eff4  ldrb w9,[x22, #0x12]
7101d9eff8  ldrb w8,[x20, #0x1c2]
7101d9effc  cmp w9,#0x3
7101d9f000  b.eq 0x7101da0690
7101d9f004  cmp w9,#0x2
7101d9f008  b.eq 0x7101da0680
7101d9f00c  cmp w9,#0x1
7101d9f010  b.ne 0x7101da06a4
7101d9f014  cmp w8,#0x2
7101d9f018  cset w9,eq
7101d9f01c  cmp w8,#0x3
7101d9f020  b 0x7101da069c
7101d9f024  adrp x1,0x710435b000
7101d9f028  add x1,x1,#0xc2a
7101d9f02c  add x8,sp,#0x1e0
7101d9f030  add x0,sp,#0x198
7101d9f034  mov w2,wzr
7101d9f038  mov x22,x19
7101d9f03c  bl 0x7103776640
7101d9f040  ldr x19,[sp, #0x1e8]
7101d9f044  ldr x8,[x19, #0x8]
7101d9f048  cbz x8,0x7101d9f060
7101d9f04c  ldr x8,[x8, #0x18]
7101d9f050  cbz x8,0x7101d9f060
7101d9f054  ldrb w9,[x8, #0x58]
7101d9f058  and w9,w9,#0xfe
7101d9f05c  strb w9,[x8, #0x58]
7101d9f060  ldr x21,[sp, #0x48]
7101d9f064  stp x25,xzr,[sp, #0x1e0]
7101d9f068  cbz x19,0x7101d9f084
7101d9f06c  ldr x0,[x19, #0x18]
7101d9f070  stp x28,xzr,[x19, #0x10]
7101d9f074  cbz x0,0x7101d9f07c
7101d9f078  bl 0x710392eb40
7101d9f07c  mov x0,x19
7101d9f080  bl 0x710392eb40
7101d9f084  adrp x1,0x710435b000
7101d9f088  add x1,x1,#0xc2a
7101d9f08c  add x8,sp,#0x1e0
7101d9f090  add x0,sp,#0x198
7101d9f094  mov w2,#0x1
7101d9f098  bl 0x7103776640
7101d9f09c  ldr x19,[sp, #0x1e8]
7101d9f0a0  ldr x8,[x19, #0x8]
7101d9f0a4  cbz x8,0x7101d9f0bc
7101d9f0a8  ldr x8,[x8, #0x18]
7101d9f0ac  cbz x8,0x7101d9f0bc
7101d9f0b0  ldrb w9,[x8, #0x58]
7101d9f0b4  and w9,w9,#0xfe
7101d9f0b8  strb w9,[x8, #0x58]
7101d9f0bc  stp x25,xzr,[sp, #0x1e0]
7101d9f0c0  cbz x19,0x7101d9f0dc
7101d9f0c4  ldr x0,[x19, #0x18]
7101d9f0c8  stp x28,xzr,[x19, #0x10]
7101d9f0cc  cbz x0,0x7101d9f0d4
7101d9f0d0  bl 0x710392eb40
7101d9f0d4  mov x0,x19
7101d9f0d8  bl 0x710392eb40
7101d9f0dc  adrp x1,0x710435b000
7101d9f0e0  add x1,x1,#0xc2a
7101d9f0e4  add x8,sp,#0x1e0
7101d9f0e8  add x0,sp,#0x198
7101d9f0ec  mov w2,#0x2
7101d9f0f0  bl 0x7103776640
7101d9f0f4  ldr x19,[sp, #0x1e8]
7101d9f0f8  ldr x8,[x19, #0x8]
7101d9f0fc  cbz x8,0x7101d9f114
7101d9f100  ldr x8,[x8, #0x18]
7101d9f104  cbz x8,0x7101d9f114
7101d9f108  ldrb w9,[x8, #0x58]
7101d9f10c  and w9,w9,#0xfe
7101d9f110  strb w9,[x8, #0x58]
7101d9f114  stp x25,xzr,[sp, #0x1e0]
7101d9f118  cbz x19,0x7101d9f134
7101d9f11c  ldr x0,[x19, #0x18]
7101d9f120  stp x28,xzr,[x19, #0x10]
7101d9f124  cbz x0,0x7101d9f12c
7101d9f128  bl 0x710392eb40
7101d9f12c  mov x0,x19
7101d9f130  bl 0x710392eb40
7101d9f134  adrp x1,0x710435b000
7101d9f138  add x1,x1,#0xc2a
7101d9f13c  add x8,sp,#0x1e0
7101d9f140  add x0,sp,#0x198
7101d9f144  orr w2,wzr,#0x3
7101d9f148  bl 0x7103776640
7101d9f14c  ldr x19,[sp, #0x1e8]
7101d9f150  ldr x8,[x19, #0x8]
7101d9f154  cbz x8,0x7101d9f16c
7101d9f158  ldr x8,[x8, #0x18]
7101d9f15c  cbz x8,0x7101d9f16c
7101d9f160  ldrb w9,[x8, #0x58]
7101d9f164  and w9,w9,#0xfe
7101d9f168  strb w9,[x8, #0x58]
7101d9f16c  stp x25,xzr,[sp, #0x1e0]
7101d9f170  cbz x19,0x7101d9f18c
7101d9f174  ldr x0,[x19, #0x18]
7101d9f178  stp x28,xzr,[x19, #0x10]
7101d9f17c  cbz x0,0x7101d9f184
7101d9f180  bl 0x710392eb40
7101d9f184  mov x0,x19
7101d9f188  bl 0x710392eb40
7101d9f18c  adrp x1,0x710435b000
7101d9f190  add x1,x1,#0xc2a
7101d9f194  add x8,sp,#0x1e0
7101d9f198  add x0,sp,#0x198
7101d9f19c  mov w2,#0x4
7101d9f1a0  bl 0x7103776640
7101d9f1a4  ldr x19,[sp, #0x1e8]
7101d9f1a8  ldr x8,[x19, #0x8]
7101d9f1ac  cbz x8,0x7101d9f1c4
7101d9f1b0  ldr x8,[x8, #0x18]
7101d9f1b4  cbz x8,0x7101d9f1c4
7101d9f1b8  ldrb w9,[x8, #0x58]
7101d9f1bc  and w9,w9,#0xfe
7101d9f1c0  strb w9,[x8, #0x58]
7101d9f1c4  stp x25,xzr,[sp, #0x1e0]
7101d9f1c8  cbz x19,0x7101d9f1e4
7101d9f1cc  ldr x0,[x19, #0x18]
7101d9f1d0  stp x28,xzr,[x19, #0x10]
7101d9f1d4  cbz x0,0x7101d9f1dc
7101d9f1d8  bl 0x710392eb40
7101d9f1dc  mov x0,x19
7101d9f1e0  bl 0x710392eb40
7101d9f1e4  adrp x1,0x710435b000
7101d9f1e8  add x1,x1,#0xc2a
7101d9f1ec  mov w2,#0x5
7101d9f1f0  add x8,sp,#0x1e0
7101d9f1f4  add x0,sp,#0x198
7101d9f1f8  bl 0x7103776640
7101d9f1fc  ldr x19,[sp, #0x1e8]
7101d9f200  ldr x8,[x19, #0x8]
7101d9f204  cbz x8,0x7101d9f21c
7101d9f208  ldr x8,[x8, #0x18]
7101d9f20c  cbz x8,0x7101d9f21c
7101d9f210  ldrb w9,[x8, #0x58]
7101d9f214  and w9,w9,#0xfe
7101d9f218  strb w9,[x8, #0x58]
7101d9f21c  stp x25,xzr,[sp, #0x1e0]
7101d9f220  cbz x19,0x7101d9f23c
7101d9f224  ldr x0,[x19, #0x18]
7101d9f228  stp x28,xzr,[x19, #0x10]
7101d9f22c  cbz x0,0x7101d9f234
7101d9f230  bl 0x710392eb40
7101d9f234  mov x0,x19
7101d9f238  bl 0x710392eb40
7101d9f23c  adrp x1,0x710435b000
7101d9f240  add x1,x1,#0xc2a
7101d9f244  add x8,sp,#0x1e0
7101d9f248  add x0,sp,#0x198
7101d9f24c  orr w2,wzr,#0x6
7101d9f250  bl 0x7103776640
7101d9f254  ldr x19,[sp, #0x1e8]
7101d9f258  ldr x8,[x19, #0x8]
7101d9f25c  cbz x8,0x7101d9f274
7101d9f260  ldr x8,[x8, #0x18]
7101d9f264  cbz x8,0x7101d9f274
7101d9f268  ldrb w9,[x8, #0x58]
7101d9f26c  and w9,w9,#0xfe
7101d9f270  strb w9,[x8, #0x58]
7101d9f274  stp x25,xzr,[sp, #0x1e0]
7101d9f278  cbz x19,0x7101d9f294
7101d9f27c  ldr x0,[x19, #0x18]
7101d9f280  stp x28,xzr,[x19, #0x10]
7101d9f284  cbz x0,0x7101d9f28c
7101d9f288  bl 0x710392eb40
7101d9f28c  mov x0,x19
7101d9f290  bl 0x710392eb40
7101d9f294  adrp x1,0x710435b000
7101d9f298  add x1,x1,#0xc2a
7101d9f29c  add x8,sp,#0x1e0
7101d9f2a0  add x0,sp,#0x198
7101d9f2a4  orr w2,wzr,#0x7
7101d9f2a8  bl 0x7103776640
7101d9f2ac  ldr x19,[sp, #0x1e8]
7101d9f2b0  ldr x8,[x19, #0x8]
7101d9f2b4  cbz x8,0x7101d9f2cc
7101d9f2b8  ldr x8,[x8, #0x18]
7101d9f2bc  cbz x8,0x7101d9f2cc
7101d9f2c0  ldrb w9,[x8, #0x58]
7101d9f2c4  and w9,w9,#0xfe
7101d9f2c8  strb w9,[x8, #0x58]
7101d9f2cc  stp x25,xzr,[sp, #0x1e0]
7101d9f2d0  cbz x19,0x7101d9f2ec
7101d9f2d4  ldr x0,[x19, #0x18]
7101d9f2d8  stp x28,xzr,[x19, #0x10]
7101d9f2dc  cbz x0,0x7101d9f2e4
7101d9f2e0  bl 0x710392eb40
7101d9f2e4  mov x0,x19
7101d9f2e8  bl 0x710392eb40
7101d9f2ec  adrp x1,0x710435b000
7101d9f2f0  add x1,x1,#0xc2a
7101d9f2f4  add x8,sp,#0x1e0
7101d9f2f8  add x0,sp,#0x198
7101d9f2fc  mov w2,#0x8
7101d9f300  bl 0x7103776640
7101d9f304  ldr x19,[sp, #0x1e8]
7101d9f308  ldr x8,[x19, #0x8]
7101d9f30c  cbz x8,0x7101d9f324
7101d9f310  ldr x8,[x8, #0x18]
7101d9f314  cbz x8,0x7101d9f324
7101d9f318  ldrb w9,[x8, #0x58]
7101d9f31c  and w9,w9,#0xfe
7101d9f320  strb w9,[x8, #0x58]
7101d9f324  stp x25,xzr,[sp, #0x1e0]
7101d9f328  cbz x19,0x7101d9f344
7101d9f32c  ldr x0,[x19, #0x18]
7101d9f330  stp x28,xzr,[x19, #0x10]
7101d9f334  cbz x0,0x7101d9f33c
7101d9f338  bl 0x710392eb40
7101d9f33c  mov x0,x19
7101d9f340  bl 0x710392eb40
7101d9f344  adrp x1,0x710435b000
7101d9f348  add x1,x1,#0xc2a
7101d9f34c  mov w2,#0x9
7101d9f350  add x8,sp,#0x1e0
7101d9f354  add x0,sp,#0x198
7101d9f358  bl 0x7103776640
7101d9f35c  ldr x19,[sp, #0x1e8]
7101d9f360  ldr x8,[x19, #0x8]
7101d9f364  cbz x8,0x7101d9f37c
7101d9f368  ldr x8,[x8, #0x18]
7101d9f36c  cbz x8,0x7101d9f37c
7101d9f370  ldrb w9,[x8, #0x58]
7101d9f374  and w9,w9,#0xfe
7101d9f378  strb w9,[x8, #0x58]
7101d9f37c  stp x25,xzr,[sp, #0x1e0]
7101d9f380  cbz x19,0x7101d9f39c
7101d9f384  ldr x0,[x19, #0x18]
7101d9f388  stp x28,xzr,[x19, #0x10]
7101d9f38c  cbz x0,0x7101d9f394
7101d9f390  bl 0x710392eb40
7101d9f394  mov x0,x19
7101d9f398  bl 0x710392eb40
7101d9f39c  adrp x1,0x710435b000
7101d9f3a0  add x1,x1,#0xc2a
7101d9f3a4  mov w2,#0xa
7101d9f3a8  add x8,sp,#0x1e0
7101d9f3ac  add x0,sp,#0x198
7101d9f3b0  bl 0x7103776640
7101d9f3b4  ldr x19,[sp, #0x1e8]
7101d9f3b8  ldr x8,[x19, #0x8]
7101d9f3bc  cbz x8,0x7101d9f3d4
7101d9f3c0  ldr x8,[x8, #0x18]
7101d9f3c4  cbz x8,0x7101d9f3d4
7101d9f3c8  ldrb w9,[x8, #0x58]
7101d9f3cc  and w9,w9,#0xfe
7101d9f3d0  strb w9,[x8, #0x58]
7101d9f3d4  stp x25,xzr,[sp, #0x1e0]
7101d9f3d8  cbz x19,0x7101d9f3f4
7101d9f3dc  ldr x0,[x19, #0x18]
7101d9f3e0  stp x28,xzr,[x19, #0x10]
7101d9f3e4  cbz x0,0x7101d9f3ec
7101d9f3e8  bl 0x710392eb40
7101d9f3ec  mov x0,x19
7101d9f3f0  bl 0x710392eb40
7101d9f3f4  mov x19,x22
7101d9f3f8  stp x25,xzr,[sp, #0x198]
7101d9f3fc  cbz x19,0x7101d9f418
7101d9f400  ldr x0,[x19, #0x18]
7101d9f404  stp x28,xzr,[x19, #0x10]
7101d9f408  cbz x0,0x7101d9f410
7101d9f40c  bl 0x710392eb40
7101d9f410  mov x0,x19
7101d9f414  bl 0x710392eb40
7101d9f418  ldrb w8,[x26, #0xb8]
7101d9f41c  cbnz w8,0x7101d9f488
7101d9f420  ldr w8,[sp, #0x38]
7101d9f424  cbz w8,0x7101d9f488
7101d9f428  adrp x8,0x710532f000
7101d9f42c  ldr x8,[x8, #0x730]
7101d9f430  ldr x8,[x8, #0x8]
7101d9f434  ldr x8,[x8, #0x1d8]
7101d9f438  lsl x9,x21,#0x30
7101d9f43c  add x9,x8,x9, ASR #0x2f
7101d9f440  ldp x10,x8,[x8, #0x20]
7101d9f444  ldrh w9,[x9, #0x60]
7101d9f448  sub x8,x8,x10
7101d9f44c  mov w10,#0xcccd
7101d9f450  movk w10,#0xcccc, LSL #16
7101d9f454  lsr x8,x8,#0x6
7101d9f458  mul w8,w8,w10
7101d9f45c  cmp w8,w9
7101d9f460  b.ls 0x7101d9f488
7101d9f464  adrp x8,0x7105329000
7101d9f468  ldr x8,[x8, #0xf98]
7101d9f46c  ldr x8,[x8]
7101d9f470  ldr x8,[x8, #0x30]
7101d9f474  sxth x9,w21
7101d9f478  mov w10,#0x24
7101d9f47c  madd x8,x9,x10,x8
7101d9f480  ldrb w8,[x8, #0x1]
7101d9f484  tbnz w8,#0x0,0x7101da1050
7101d9f488  ldr x0,[sp, #0x58]
7101d9f48c  adrp x1,0x71042f8000
7101d9f490  add x1,x1,#0xa08
7101d9f494  add x8,sp,#0x1e0
7101d9f498  bl 0x7103776640
7101d9f49c  ldr x19,[sp, #0x1e8]
7101d9f4a0  adrp x1,0x7104348000
7101d9f4a4  add x1,x1,#0x100
7101d9f4a8  fmov s0,0x3f800000
7101d9f4ac  mov x0,x19
7101d9f4b0  bl 0x7103778300
7101d9f4b4  stp x25,xzr,[sp, #0x1e0]
7101d9f4b8  cbz x19,0x7101d9f4d4
7101d9f4bc  ldr x0,[x19, #0x18]
7101d9f4c0  stp x28,xzr,[x19, #0x10]
7101d9f4c4  cbz x0,0x7101d9f4cc
7101d9f4c8  bl 0x710392eb40
7101d9f4cc  mov x0,x19
7101d9f4d0  bl 0x710392eb40
7101d9f4d4  mov x8,#0xff0000000000
7101d9f4d8  movk x8,#0x71ff, LSL #48
7101d9f4dc  strb wzr,[sp, #0x1e8]
7101d9f4e0  str xzr,[sp, #0x1e0]
7101d9f4e4  strb wzr,[sp, #0x230]
7101d9f4e8  str xzr,[sp, #0x228]
7101d9f4ec  strh wzr,[sp, #0x270]
7101d9f4f0  str x8,[sp, #0x278]
7101d9f4f4  strb wzr,[sp, #0x288]
7101d9f4f8  str xzr,[sp, #0x280]
7101d9f4fc  strb wzr,[sp, #0x2d0]
7101d9f500  str xzr,[sp, #0x2c8]
7101d9f504  strh wzr,[sp, #0x310]
7101d9f508  str x8,[sp, #0x318]
7101d9f50c  strb wzr,[sp, #0x328]
7101d9f510  str xzr,[sp, #0x320]
7101d9f514  strb wzr,[sp, #0x370]
7101d9f518  str xzr,[sp, #0x368]
7101d9f51c  strh wzr,[sp, #0x3b0]
7101d9f520  str x8,[sp, #0x3b8]
7101d9f524  cbz x23,0x7101d9f568
7101d9f528  mov x9,#0xff0000000000
7101d9f52c  movk x9,#0x52ff, LSL #48
7101d9f530  orr w8,wzr,#0xffff
7101d9f534  add x0,sp,#0x198
7101d9f538  mov x1,x23
7101d9f53c  strh w8,[sp, #0x198]
7101d9f540  str x9,[sp, #0x1a0]
7101d9f544  mov w9,#0xffffffff
7101d9f548  str wzr,[sp, #0x19c]
7101d9f54c  str w9,[sp, #0x1a8]
7101d9f550  strh w8,[sp, #0x1ac]
7101d9f554  bl 0x71025cae70
7101d9f558  add x0,sp,#0x1e0
7101d9f55c  add x2,sp,#0x198
7101d9f560  mov x1,x26
7101d9f564  b 0x7101d9f574
7101d9f568  add x0,sp,#0x1e0
7101d9f56c  mov x1,x26
7101d9f570  mov x2,xzr
7101d9f574  bl 0x71025b1bc0
7101d9f578  add x11,x20,#0x200
7101d9f57c  add x13,sp,#0x1e0
7101d9f580  cmp x11,x13
7101d9f584  b.eq 0x7101d9f8e0
7101d9f588  add x8,sp,#0x1e0
7101d9f58c  mov x12,xzr
7101d9f590  add x9,x8,#0x130
7101d9f594  add x10,x8,#0x90
7101d9f598  add x8,x8,#0x1d0
7101d9f59c  add x13,x13,#0x8
7101d9f5a0  b 0x7101d9f5ac
7101d9f5a4  add x12,x12,#0x2
7101d9f5a8  strb w14,[x15, #0x209]
7101d9f5ac  add x14,x13,x12
7101d9f5b0  ldrb w16,[x14]
7101d9f5b4  cbz w16,0x7101d9f5e0
7101d9f5b8  add w17,w12,#0x1
7101d9f5bc  add x15,x20,x12
7101d9f5c0  cmp w17,#0x3f
7101d9f5c4  strb w16,[x15, #0x208]
7101d9f5c8  b.cs 0x7101d9f5dc
7101d9f5cc  ldrb w14,[x14, #0x1]
7101d9f5d0  cbnz w14,0x7101d9f5a4
7101d9f5d4  add x12,x12,#0x1
7101d9f5d8  b 0x7101d9f5e0
7101d9f5dc  add w12,w12,#0x1
7101d9f5e0  add x13,x20,#0x208
7101d9f5e4  strb wzr,[x13, w12, UXTW ]
7101d9f5e8  str w12,[x20, #0x204]
7101d9f5ec  ldrb w12,[x20, #0x208]
7101d9f5f0  mov w14,w27
7101d9f5f4  cbz w12,0x7101d9f618
7101d9f5f8  add x13,x20,#0x209
7101d9f5fc  mov w15,#0x89
7101d9f600  mov w14,w27
7101d9f604  mul w14,w14,w15
7101d9f608  and w12,w12,#0xff
7101d9f60c  eor w14,w14,w12
7101d9f610  ldrb w12,[x13], #0x1
7101d9f614  cbnz w12,0x7101d9f604
7101d9f618  str w14,[x11]
7101d9f61c  add x11,sp,#0x1e0
7101d9f620  mov x12,xzr
7101d9f624  add x11,x11,#0x50
7101d9f628  b 0x7101d9f634
7101d9f62c  add x12,x12,#0x2
7101d9f630  strb w13,[x14, #0x251]
7101d9f634  add x13,x11,x12
7101d9f638  ldrb w15,[x13]
7101d9f63c  cbz w15,0x7101d9f668
7101d9f640  add w16,w12,#0x1
7101d9f644  add x14,x20,x12
7101d9f648  cmp w16,#0x3f
7101d9f64c  strb w15,[x14, #0x250]
7101d9f650  b.cs 0x7101d9f664
7101d9f654  ldrb w13,[x13, #0x1]
7101d9f658  cbnz w13,0x7101d9f62c
7101d9f65c  add x12,x12,#0x1
7101d9f660  b 0x7101d9f668
7101d9f664  add w12,w12,#0x1
7101d9f668  add x11,x20,#0x250
7101d9f66c  strb wzr,[x11, w12, UXTW ]
7101d9f670  ldrb w11,[x20, #0x250]
7101d9f674  mov w13,w27
7101d9f678  str w12,[x20, #0x24c]
7101d9f67c  cbz w11,0x7101d9f6a0
7101d9f680  add x12,x20,#0x251
7101d9f684  mov w14,#0x89
7101d9f688  mov w13,w27
7101d9f68c  mul w13,w13,w14
7101d9f690  and w11,w11,#0xff
7101d9f694  eor w13,w13,w11
7101d9f698  ldrb w11,[x12], #0x1
7101d9f69c  cbnz w11,0x7101d9f68c
7101d9f6a0  str w13,[x20, #0x248]
7101d9f6a4  ldp x12,x10,[x10]
7101d9f6a8  str x10,[x20, #0x298]
7101d9f6ac  add x10,sp,#0x1e0
7101d9f6b0  mov x11,xzr
7101d9f6b4  str x12,[x20, #0x290]
7101d9f6b8  add x10,x10,#0xa8
7101d9f6bc  b 0x7101d9f6c8
7101d9f6c0  add x11,x11,#0x2
7101d9f6c4  strb w12,[x13, #0x2a9]
7101d9f6c8  add x12,x10,x11
7101d9f6cc  ldrb w14,[x12]
7101d9f6d0  cbz w14,0x7101d9f6fc
7101d9f6d4  add w15,w11,#0x1
7101d9f6d8  add x13,x20,x11
7101d9f6dc  cmp w15,#0x3f
7101d9f6e0  strb w14,[x13, #0x2a8]
7101d9f6e4  b.cs 0x7101d9f6f8
7101d9f6e8  ldrb w12,[x12, #0x1]
7101d9f6ec  cbnz w12,0x7101d9f6c0
7101d9f6f0  add x11,x11,#0x1
7101d9f6f4  b 0x7101d9f6fc
7101d9f6f8  add w11,w11,#0x1
7101d9f6fc  add x10,x20,#0x2a8
7101d9f700  strb wzr,[x10, w11, UXTW ]
7101d9f704  ldrb w10,[x20, #0x2a8]
7101d9f708  mov w12,w27
7101d9f70c  str w11,[x20, #0x2a4]
7101d9f710  cbz w10,0x7101d9f734
7101d9f714  add x11,x20,#0x2a9
7101d9f718  mov w13,#0x89
7101d9f71c  mov w12,w27
7101d9f720  mul w12,w12,w13
7101d9f724  and w10,w10,#0xff
7101d9f728  eor w12,w12,w10
7101d9f72c  ldrb w10,[x11], #0x1
7101d9f730  cbnz w10,0x7101d9f720
7101d9f734  add x11,sp,#0x1e0
7101d9f738  mov x10,xzr
7101d9f73c  str w12,[x20, #0x2a0]
7101d9f740  add x11,x11,#0xf0
7101d9f744  b 0x7101d9f750
7101d9f748  add x10,x10,#0x2
7101d9f74c  strb w12,[x13, #0x2f1]
7101d9f750  add x12,x11,x10
7101d9f754  ldrb w14,[x12]
7101d9f758  cbz w14,0x7101d9f784
7101d9f75c  add w15,w10,#0x1
7101d9f760  add x13,x20,x10
7101d9f764  cmp w15,#0x3f
7101d9f768  strb w14,[x13, #0x2f0]
7101d9f76c  b.cs 0x7101d9f780
7101d9f770  ldrb w12,[x12, #0x1]
7101d9f774  cbnz w12,0x7101d9f748
7101d9f778  add x10,x10,#0x1
7101d9f77c  b 0x7101d9f784
7101d9f780  add w10,w10,#0x1
7101d9f784  add x11,x20,#0x2f0
7101d9f788  strb wzr,[x11, w10, UXTW ]
7101d9f78c  str w10,[x20, #0x2ec]
7101d9f790  ldrb w10,[x20, #0x2f0]
7101d9f794  mov w12,w27
7101d9f798  cbz w10,0x7101d9f7bc
7101d9f79c  add x11,x20,#0x2f1
7101d9f7a0  mov w13,#0x89
7101d9f7a4  mov w12,w27
7101d9f7a8  mul w12,w12,w13
7101d9f7ac  and w10,w10,#0xff
7101d9f7b0  eor w12,w12,w10
7101d9f7b4  ldrb w10,[x11], #0x1
7101d9f7b8  cbnz w10,0x7101d9f7a8
7101d9f7bc  str w12,[x20, #0x2e8]
7101d9f7c0  ldp x11,x9,[x9]
7101d9f7c4  str x9,[x20, #0x338]
7101d9f7c8  add x9,sp,#0x1e0
7101d9f7cc  mov x10,xzr
7101d9f7d0  str x11,[x20, #0x330]
7101d9f7d4  add x9,x9,#0x148
7101d9f7d8  b 0x7101d9f7e4
7101d9f7dc  add x10,x10,#0x2
7101d9f7e0  strb w11,[x12, #0x349]
7101d9f7e4  add x11,x9,x10
7101d9f7e8  ldrb w13,[x11]
7101d9f7ec  cbz w13,0x7101d9f818
7101d9f7f0  add w14,w10,#0x1
7101d9f7f4  add x12,x20,x10
7101d9f7f8  cmp w14,#0x3f
7101d9f7fc  strb w13,[x12, #0x348]
7101d9f800  b.cs 0x7101d9f814
7101d9f804  ldrb w11,[x11, #0x1]
7101d9f808  cbnz w11,0x7101d9f7dc
7101d9f80c  add x10,x10,#0x1
7101d9f810  b 0x7101d9f818
7101d9f814  add w10,w10,#0x1
7101d9f818  add x9,x20,#0x348
7101d9f81c  strb wzr,[x9, w10, UXTW ]
7101d9f820  ldrb w9,[x20, #0x348]
7101d9f824  mov w11,w27
7101d9f828  str w10,[x20, #0x344]
7101d9f82c  cbz w9,0x7101d9f850
7101d9f830  add x10,x20,#0x349
7101d9f834  mov w12,#0x89
7101d9f838  mov w11,w27
7101d9f83c  mul w11,w11,w12
7101d9f840  and w9,w9,#0xff
7101d9f844  eor w11,w11,w9
7101d9f848  ldrb w9,[x10], #0x1
7101d9f84c  cbnz w9,0x7101d9f83c
7101d9f850  add x10,sp,#0x1e0
7101d9f854  mov x9,xzr
7101d9f858  str w11,[x20, #0x340]
7101d9f85c  add x10,x10,#0x190
7101d9f860  b 0x7101d9f86c
7101d9f864  add x9,x9,#0x2
7101d9f868  strb w11,[x12, #0x391]
7101d9f86c  add x11,x10,x9
7101d9f870  ldrb w13,[x11]
7101d9f874  cbz w13,0x7101d9f8a0
7101d9f878  add w14,w9,#0x1
7101d9f87c  add x12,x20,x9
7101d9f880  cmp w14,#0x3f
7101d9f884  strb w13,[x12, #0x390]
7101d9f888  b.cs 0x7101d9f89c
7101d9f88c  ldrb w11,[x11, #0x1]
7101d9f890  cbnz w11,0x7101d9f864
7101d9f894  add x9,x9,#0x1
7101d9f898  b 0x7101d9f8a0
7101d9f89c  add w9,w9,#0x1
7101d9f8a0  add x10,x20,#0x390
7101d9f8a4  strb wzr,[x10, w9, UXTW ]
7101d9f8a8  ldrb w10,[x20, #0x390]
7101d9f8ac  str w9,[x20, #0x38c]
7101d9f8b0  cbz w10,0x7101d9f8d0
7101d9f8b4  add x9,x20,#0x391
7101d9f8b8  mov w11,#0x89
7101d9f8bc  mul w12,w27,w11
7101d9f8c0  and w10,w10,#0xff
7101d9f8c4  eor w27,w12,w10
7101d9f8c8  ldrb w10,[x9], #0x1
7101d9f8cc  cbnz w10,0x7101d9f8bc
7101d9f8d0  str w27,[x20, #0x388]
7101d9f8d4  ldp x9,x8,[x8]
7101d9f8d8  str x8,[x20, #0x3d8]
7101d9f8dc  str x9,[x20, #0x3d0]
7101d9f8e0  add x0,sp,#0x198
7101d9f8e4  add x21,sp,#0x198
7101d9f8e8  bl 0x7103776290
7101d9f8ec  add x19,x21,#0x10
7101d9f8f0  mov x0,x19
7101d9f8f4  bl 0x7103776290
7101d9f8f8  add x21,x21,#0x20
7101d9f8fc  mov x0,x21
7101d9f900  bl 0x7103776290
7101d9f904  ldr x0,[sp, #0x58]
7101d9f908  adrp x1,0x71043be000
7101d9f90c  add x1,x1,#0xa42
7101d9f910  add x8,sp,#0x110
7101d9f914  bl 0x7103776640
7101d9f918  ldr x26,[sp, #0x118]
7101d9f91c  ldr x22,[sp, #0x1a0]
7101d9f920  str xzr,[sp, #0x118]
7101d9f924  str x26,[sp, #0x1a0]
7101d9f928  cbz x22,0x7101d9f944
7101d9f92c  ldr x0,[x22, #0x18]
7101d9f930  stp x28,xzr,[x22, #0x10]
7101d9f934  cbz x0,0x7101d9f93c
7101d9f938  bl 0x710392eb40
7101d9f93c  mov x0,x22
7101d9f940  bl 0x710392eb40
7101d9f944  ldr x0,[sp, #0x58]
7101d9f948  adrp x1,0x71042e7000
7101d9f94c  add x1,x1,#0x6a5
7101d9f950  add x8,sp,#0x110
7101d9f954  stp x25,xzr,[sp, #0x110]
7101d9f958  bl 0x7103776640
7101d9f95c  ldr x27,[sp, #0x118]
7101d9f960  ldr x22,[sp, #0x1b0]
7101d9f964  str xzr,[sp, #0x118]
7101d9f968  str x27,[sp, #0x1b0]
7101d9f96c  cbz x22,0x7101d9f988
7101d9f970  ldr x0,[x22, #0x18]
7101d9f974  stp x28,xzr,[x22, #0x10]
7101d9f978  cbz x0,0x7101d9f980
7101d9f97c  bl 0x710392eb40
7101d9f980  mov x0,x22
7101d9f984  bl 0x710392eb40
7101d9f988  ldr x0,[sp, #0x58]
7101d9f98c  adrp x1,0x7104412000
7101d9f990  add x1,x1,#0xd5c
7101d9f994  add x8,sp,#0x110
7101d9f998  stp x25,xzr,[sp, #0x110]
7101d9f99c  bl 0x7103776640
7101d9f9a0  ldr x28,[sp, #0x118]
7101d9f9a4  ldr x22,[sp, #0x1c0]
7101d9f9a8  str xzr,[sp, #0x118]
7101d9f9ac  str x28,[sp, #0x1c0]
7101d9f9b0  cbz x22,0x7101d9f9d4
7101d9f9b4  ldr x0,[x22, #0x18]
7101d9f9b8  adrp x8,0x710523d000
7101d9f9bc  add x8,x8,#0x9a8
7101d9f9c0  stp x8,xzr,[x22, #0x10]
7101d9f9c4  cbz x0,0x7101d9f9cc
7101d9f9c8  bl 0x710392eb40
7101d9f9cc  mov x0,x22
7101d9f9d0  bl 0x710392eb40
7101d9f9d4  stp x25,xzr,[sp, #0x110]
7101d9f9d8  ldr w8,[x20, #0x204]
7101d9f9dc  cbz w8,0x7101d9fad8
7101d9f9e0  ldr x8,[x26, #0x8]
7101d9f9e4  cbz x8,0x7101d9f9fc
7101d9f9e8  ldr x8,[x8, #0x18]
7101d9f9ec  cbz x8,0x7101d9f9fc
7101d9f9f0  ldrb w9,[x8, #0x58]
7101d9f9f4  orr w9,w9,#0x1
7101d9f9f8  strb w9,[x8, #0x58]
7101d9f9fc  ldrb w8,[x20, #0x290]
7101d9fa00  cbz w8,0x7101d9fafc
7101d9fa04  fmov s8,0x3f800000
7101d9fa08  mov v0.16B,v8.16B
7101d9fa0c  adrp x1,0x710435b000
7101d9fa10  add x1,x1,#0xc1d
7101d9fa14  mov x0,x26
7101d9fa18  bl 0x7103778300
7101d9fa1c  mov v0.16B,v8.16B
7101d9fa20  adrp x1,0x71043f0000
7101d9fa24  add x1,x1,#0xd57
7101d9fa28  mov x0,x26
7101d9fa2c  bl 0x7103778300
7101d9fa30  adrp x1,0x7104270000
7101d9fa34  add x1,x1,#0x343
7101d9fa38  add x8,sp,#0x110
7101d9fa3c  add x0,sp,#0x198
7101d9fa40  bl 0x7103776910
7101d9fa44  ldr x0,[x20, #0x298]
7101d9fa48  mov w1,#0x13
7101d9fa4c  bl 0x7103238e70
7101d9fa50  tst x0,#0xffffffffff
7101d9fa54  str x0,[sp, #0xc8]
7101d9fa58  b.eq 0x7101d9fa70
7101d9fa5c  ldr x0,[x24]
7101d9fa60  ldrsw x2,[x0, #0x70]
7101d9fa64  ldr w3,[x0, #0x68]
7101d9fa68  add x1,sp,#0xc8
7101d9fa6c  bl 0x710323c4e0
7101d9fa70  ldr x1,[x20, #0x298]
7101d9fa74  mov x0,x24
7101d9fa78  bl 0x710323f760
7101d9fa7c  ldr x22,[sp, #0x118]
7101d9fa80  mov x1,x0
7101d9fa84  mov x0,x22
7101d9fa88  bl 0x7103778b80
7101d9fa8c  adrp x8,0x710523d000
7101d9fa90  add x8,x8,#0x9a8
7101d9fa94  stp x8,xzr,[sp, #0x110]
7101d9fa98  cbz x22,0x7101d9faa4
7101d9fa9c  mov x0,x22
7101d9faa0  bl 0x710392eb40
7101d9faa4  ldr w8,[x20, #0x24c]
7101d9faa8  cbz w8,0x7101d9fb18
7101d9faac  adrp x1,0x71043cf000
7101d9fab0  add x1,x1,#0xca4
7101d9fab4  add x8,sp,#0x110
7101d9fab8  add x0,sp,#0x198
7101d9fabc  bl 0x7103776910
7101d9fac0  add x1,x20,#0x208
7101d9fac4  add x3,x20,#0x250
7101d9fac8  add x0,sp,#0x110
7101d9facc  mov w2,#0x1
7101d9fad0  bl 0x710377a280
7101d9fad4  b 0x7101d9fb38
7101d9fad8  ldr x26,[sp, #0x1a0]
7101d9fadc  ldr x8,[x26, #0x8]
7101d9fae0  cbz x8,0x7101d9fb50
7101d9fae4  ldr x8,[x8, #0x18]
7101d9fae8  cbz x8,0x7101d9fb50
7101d9faec  ldrb w9,[x8, #0x58]
7101d9faf0  and w9,w9,#0xfe
7101d9faf4  strb w9,[x8, #0x58]
7101d9faf8  b 0x7101d9fb50
7101d9fafc  fmov s0,0x3f800000
7101d9fb00  adrp x1,0x71043ad000
7101d9fb04  add x1,x1,#0xc00
7101d9fb08  mov x0,x26
7101d9fb0c  bl 0x7103778300
7101d9fb10  ldr w8,[x20, #0x24c]
7101d9fb14  cbnz w8,0x7101d9faac
7101d9fb18  adrp x1,0x71043cf000
7101d9fb1c  add x1,x1,#0xca4
7101d9fb20  add x8,sp,#0x110
7101d9fb24  add x0,sp,#0x198
7101d9fb28  bl 0x7103776910
7101d9fb2c  add x1,x20,#0x208
7101d9fb30  add x0,sp,#0x110
7101d9fb34  bl 0x710377a120
7101d9fb38  ldr x0,[sp, #0x118]
7101d9fb3c  adrp x8,0x710523d000
7101d9fb40  add x8,x8,#0x9a8
7101d9fb44  stp x8,xzr,[sp, #0x110]
7101d9fb48  cbz x0,0x7101d9fb50
7101d9fb4c  bl 0x710392eb40
7101d9fb50  ldr w9,[x20, #0x2a4]
7101d9fb54  ldr x8,[x27, #0x8]
7101d9fb58  cbz w9,0x7101d9fc50
7101d9fb5c  cbz x8,0x7101d9fb74
7101d9fb60  ldr x8,[x8, #0x18]
7101d9fb64  cbz x8,0x7101d9fb74
7101d9fb68  ldrb w9,[x8, #0x58]
7101d9fb6c  orr w9,w9,#0x1
7101d9fb70  strb w9,[x8, #0x58]
7101d9fb74  ldrb w8,[x20, #0x330]
7101d9fb78  cbz w8,0x7101d9fc6c
7101d9fb7c  fmov s8,0x3f800000
7101d9fb80  mov v0.16B,v8.16B
7101d9fb84  adrp x1,0x710435b000
7101d9fb88  add x1,x1,#0xc1d
7101d9fb8c  mov x0,x27
7101d9fb90  bl 0x7103778300
7101d9fb94  mov v0.16B,v8.16B
7101d9fb98  adrp x1,0x71043f0000
7101d9fb9c  add x1,x1,#0xd57
7101d9fba0  mov x0,x27
7101d9fba4  bl 0x7103778300
7101d9fba8  adrp x1,0x7104270000
7101d9fbac  add x1,x1,#0x343
7101d9fbb0  add x8,sp,#0x110
7101d9fbb4  mov x0,x19
7101d9fbb8  bl 0x7103776910
7101d9fbbc  ldr x0,[x20, #0x338]
7101d9fbc0  mov w1,#0x13
7101d9fbc4  bl 0x7103238e70
7101d9fbc8  tst x0,#0xffffffffff
7101d9fbcc  str x0,[sp, #0xc8]
7101d9fbd0  b.eq 0x7101d9fbe8
7101d9fbd4  ldr x0,[x24]
7101d9fbd8  ldrsw x2,[x0, #0x70]
7101d9fbdc  ldr w3,[x0, #0x68]
7101d9fbe0  add x1,sp,#0xc8
7101d9fbe4  bl 0x710323c4e0
7101d9fbe8  ldr x1,[x20, #0x338]
7101d9fbec  mov x0,x24
7101d9fbf0  bl 0x710323f760
7101d9fbf4  ldr x22,[sp, #0x118]
7101d9fbf8  mov x1,x0
7101d9fbfc  mov x0,x22
7101d9fc00  bl 0x7103778b80
7101d9fc04  adrp x8,0x710523d000
7101d9fc08  add x8,x8,#0x9a8
7101d9fc0c  stp x8,xzr,[sp, #0x110]
7101d9fc10  cbz x22,0x7101d9fc1c
7101d9fc14  mov x0,x22
7101d9fc18  bl 0x710392eb40
7101d9fc1c  ldr w8,[x20, #0x2ec]
7101d9fc20  cbz w8,0x7101d9fc88
7101d9fc24  adrp x1,0x71043cf000
7101d9fc28  add x1,x1,#0xca4
7101d9fc2c  add x8,sp,#0x110
7101d9fc30  mov x0,x19
7101d9fc34  bl 0x7103776910
7101d9fc38  add x1,x20,#0x2a8
7101d9fc3c  add x3,x20,#0x2f0
7101d9fc40  add x0,sp,#0x110
7101d9fc44  mov w2,#0x1
7101d9fc48  bl 0x710377a280
7101d9fc4c  b 0x7101d9fca8
7101d9fc50  cbz x8,0x7101d9fcc0
7101d9fc54  ldr x8,[x8, #0x18]
7101d9fc58  cbz x8,0x7101d9fcc0
7101d9fc5c  ldrb w9,[x8, #0x58]
7101d9fc60  and w9,w9,#0xfe
7101d9fc64  strb w9,[x8, #0x58]
7101d9fc68  b 0x7101d9fcc0
7101d9fc6c  fmov s0,0x3f800000
7101d9fc70  adrp x1,0x71043ad000
7101d9fc74  add x1,x1,#0xc00
7101d9fc78  mov x0,x27
7101d9fc7c  bl 0x7103778300
7101d9fc80  ldr w8,[x20, #0x2ec]
7101d9fc84  cbnz w8,0x7101d9fc24
7101d9fc88  adrp x1,0x71043cf000
7101d9fc8c  add x1,x1,#0xca4
7101d9fc90  add x8,sp,#0x110
7101d9fc94  mov x0,x19
7101d9fc98  bl 0x7103776910
7101d9fc9c  add x1,x20,#0x2a8
7101d9fca0  add x0,sp,#0x110
7101d9fca4  bl 0x710377a120
7101d9fca8  ldr x0,[sp, #0x118]
7101d9fcac  adrp x8,0x710523d000
7101d9fcb0  add x8,x8,#0x9a8
7101d9fcb4  stp x8,xzr,[sp, #0x110]
7101d9fcb8  cbz x0,0x7101d9fcc0
7101d9fcbc  bl 0x710392eb40
7101d9fcc0  ldr w9,[x20, #0x344]
7101d9fcc4  ldr x8,[x28, #0x8]
7101d9fcc8  cbz w9,0x7101d9fd90
7101d9fccc  cbz x8,0x7101d9fce4
7101d9fcd0  ldr x8,[x8, #0x18]
7101d9fcd4  cbz x8,0x7101d9fce4
7101d9fcd8  ldrb w9,[x8, #0x58]
7101d9fcdc  orr w9,w9,#0x1
7101d9fce0  strb w9,[x8, #0x58]
7101d9fce4  ldrb w8,[x20, #0x3d0]
7101d9fce8  cbz w8,0x7101d9fdb0
7101d9fcec  fmov s8,0x3f800000
7101d9fcf0  mov v0.16B,v8.16B
7101d9fcf4  adrp x1,0x710435b000
7101d9fcf8  add x1,x1,#0xc1d
7101d9fcfc  mov x0,x28
7101d9fd00  bl 0x7103778300
7101d9fd04  mov v0.16B,v8.16B
7101d9fd08  adrp x1,0x71043f0000
7101d9fd0c  add x1,x1,#0xd57
7101d9fd10  mov x0,x28
7101d9fd14  bl 0x7103778300
7101d9fd18  adrp x1,0x7104270000
7101d9fd1c  add x1,x1,#0x343
7101d9fd20  add x8,sp,#0x110
7101d9fd24  mov x0,x21
7101d9fd28  bl 0x7103776910
7101d9fd2c  ldr x0,[x20, #0x3d8]
7101d9fd30  mov w1,#0x13
7101d9fd34  bl 0x7103238e70
7101d9fd38  tst x0,#0xffffffffff
7101d9fd3c  str x0,[sp, #0xc8]
7101d9fd40  b.eq 0x7101d9fd58
7101d9fd44  ldr x0,[x24]
7101d9fd48  ldrsw x2,[x0, #0x70]
7101d9fd4c  ldr w3,[x0, #0x68]
7101d9fd50  add x1,sp,#0xc8
7101d9fd54  bl 0x710323c4e0
7101d9fd58  ldr x1,[x20, #0x3d8]
7101d9fd5c  mov x0,x24
7101d9fd60  bl 0x710323f760
7101d9fd64  ldr x19,[sp, #0x118]
7101d9fd68  mov x1,x0
7101d9fd6c  mov x0,x19
7101d9fd70  bl 0x7103778b80
7101d9fd74  adrp x8,0x710523d000
7101d9fd78  add x8,x8,#0x9a8
7101d9fd7c  stp x8,xzr,[sp, #0x110]
7101d9fd80  cbz x19,0x7101d9fdc4
7101d9fd84  mov x0,x19
7101d9fd88  bl 0x710392eb40
7101d9fd8c  b 0x7101d9fdc4
7101d9fd90  ldr x22,[sp, #0x58]
7101d9fd94  cbz x8,0x7101d9fe34
7101d9fd98  ldr x8,[x8, #0x18]
7101d9fd9c  cbz x8,0x7101d9fe34
7101d9fda0  ldrb w9,[x8, #0x58]
7101d9fda4  and w9,w9,#0xfe
7101d9fda8  strb w9,[x8, #0x58]
7101d9fdac  b 0x7101d9fe34
7101d9fdb0  fmov s0,0x3f800000
7101d9fdb4  adrp x1,0x71043ad000
7101d9fdb8  add x1,x1,#0xc00
7101d9fdbc  mov x0,x28
7101d9fdc0  bl 0x7103778300
7101d9fdc4  ldr x22,[sp, #0x58]
7101d9fdc8  ldr w8,[x20, #0x38c]
7101d9fdcc  cbz w8,0x7101d9fdfc
7101d9fdd0  adrp x1,0x71043cf000
7101d9fdd4  add x1,x1,#0xca4
7101d9fdd8  add x8,sp,#0x110
7101d9fddc  mov x0,x21
7101d9fde0  bl 0x7103776910
7101d9fde4  add x1,x20,#0x348
7101d9fde8  add x3,x20,#0x390
7101d9fdec  add x0,sp,#0x110
7101d9fdf0  mov w2,#0x1
7101d9fdf4  bl 0x710377a280
7101d9fdf8  b 0x7101d9fe1c
7101d9fdfc  adrp x1,0x71043cf000
7101d9fe00  add x1,x1,#0xca4
7101d9fe04  add x8,sp,#0x110
7101d9fe08  mov x0,x21
7101d9fe0c  bl 0x7103776910
7101d9fe10  add x1,x20,#0x348
7101d9fe14  add x0,sp,#0x110
7101d9fe18  bl 0x710377a120
7101d9fe1c  ldr x0,[sp, #0x118]
7101d9fe20  adrp x8,0x710523d000
7101d9fe24  add x8,x8,#0x9a8
7101d9fe28  stp x8,xzr,[sp, #0x110]
7101d9fe2c  cbz x0,0x7101d9fe34
7101d9fe30  bl 0x710392eb40
7101d9fe34  adrp x1,0x7104443000
7101d9fe38  add x1,x1,#0xc0d
7101d9fe3c  add x8,sp,#0x110
7101d9fe40  mov x0,x22
7101d9fe44  bl 0x7103776640
7101d9fe48  ldr x19,[sp, #0x118]
7101d9fe4c  ldr x8,[x19, #0x8]
7101d9fe50  cbz x8,0x7101d9fe68
7101d9fe54  ldr x8,[x8, #0x18]
7101d9fe58  cbz x8,0x7101d9fe68
7101d9fe5c  ldrb w9,[x8, #0x58]
7101d9fe60  and w9,w9,#0xfe
7101d9fe64  strb w9,[x8, #0x58]
7101d9fe68  stp x25,xzr,[sp, #0x110]
7101d9fe6c  cbz x19,0x7101d9fe90
7101d9fe70  ldr x0,[x19, #0x18]
7101d9fe74  adrp x8,0x710523d000
7101d9fe78  add x8,x8,#0x9a8
7101d9fe7c  stp x8,xzr,[x19, #0x10]
7101d9fe80  cbz x0,0x7101d9fe88
7101d9fe84  bl 0x710392eb40
7101d9fe88  mov x0,x19
7101d9fe8c  bl 0x710392eb40
7101d9fe90  stp x25,xzr,[sp, #0x1b8]
7101d9fe94  cbz x28,0x7101d9fed8
7101d9fe98  ldr x0,[x28, #0x18]
7101d9fe9c  adrp x8,0x710523d000
7101d9fea0  add x8,x8,#0x9a8
7101d9fea4  stp x8,xzr,[x28, #0x10]
7101d9fea8  cbz x0,0x7101d9feb0
7101d9feac  bl 0x710392eb40
7101d9feb0  mov x0,x28
7101d9feb4  bl 0x710392eb40
7101d9feb8  ldr x27,[sp, #0x1b0]
7101d9febc  adrp x28,0x710523d000
7101d9fec0  add x28,x28,#0x9a8
7101d9fec4  stp x25,xzr,[sp, #0x1a8]
7101d9fec8  cbnz x27,0x7101d9fee4
7101d9fecc  stp x25,xzr,[sp, #0x198]
7101d9fed0  cbnz x26,0x7101d9ff04
7101d9fed4  b 0x7101d9ff1c
7101d9fed8  stp x25,xzr,[sp, #0x1a8]
7101d9fedc  adrp x28,0x710523d000
7101d9fee0  add x28,x28,#0x9a8
7101d9fee4  ldr x0,[x27, #0x18]
7101d9fee8  stp x28,xzr,[x27, #0x10]
7101d9feec  cbz x0,0x7101d9fef4
7101d9fef0  bl 0x710392eb40
7101d9fef4  mov x0,x27
7101d9fef8  bl 0x710392eb40
7101d9fefc  stp x25,xzr,[sp, #0x198]
7101d9ff00  cbz x26,0x7101d9ff1c
7101d9ff04  ldr x0,[x26, #0x18]
7101d9ff08  stp x28,xzr,[x26, #0x10]
7101d9ff0c  cbz x0,0x7101d9ff14
7101d9ff10  bl 0x710392eb40
7101d9ff14  mov x0,x26
7101d9ff18  bl 0x710392eb40
7101d9ff1c  ldr x1,[sp, #0x68]
7101d9ff20  add x0,sp,#0x198
7101d9ff24  str xzr,[sp, #0x198]
7101d9ff28  stp xzr,xzr,[sp, #0x1a0]
7101d9ff2c  bl 0x71025b39a0
7101d9ff30  ldp x9,x8,[sp, #0x198]
7101d9ff34  sub x8,x8,x9
7101d9ff38  mov w9,#0x1bad
7101d9ff3c  movk w9,#0x914c, LSL #16
7101d9ff40  lsr x8,x8,#0x2
7101d9ff44  mul w8,w8,w9
7101d9ff48  and w9,w8,#0xff
7101d9ff4c  cmp w8,#0x2
7101d9ff50  orr w8,wzr,#0x3
7101d9ff54  csel w19,w8,w9,hi
7101d9ff58  adrp x0,0x7104280000
7101d9ff5c  add x0,x0,#0xf18
7101d9ff60  add x8,sp,#0x1e0
7101d9ff64  mov w1,w19
7101d9ff68  add x21,sp,#0x1e0
7101d9ff6c  bl 0x71003a4ca0
7101d9ff70  ldr x0,[x20, #0x168]
7101d9ff74  fmov s0,0x3f800000
7101d9ff78  add x1,x21,#0x8
7101d9ff7c  bl 0x7103778300
7101d9ff80  adrp x1,0x71042d6000
7101d9ff84  add x1,x1,#0x724
7101d9ff88  add x8,sp,#0x110
7101d9ff8c  mov x0,x22
7101d9ff90  mov w2,wzr
7101d9ff94  bl 0x7103776910
7101d9ff98  cbz w19,0x7101d9ffec
7101d9ff9c  ldp x8,x9,[sp, #0x198]
7101d9ffa0  cmp x9,x8
7101d9ffa4  b.eq 0x7101da1540
7101d9ffa8  ldr x21,[sp, #0x118]
7101d9ffac  ldr x9,[x21]
7101d9ffb0  cbz x9,0x7101d9ffc0
7101d9ffb4  ldrb w10,[x9, #0x58]
7101d9ffb8  orr w10,w10,#0x1
7101d9ffbc  strb w10,[x9, #0x58]
7101d9ffc0  ldr w9,[x8, #0x4c]
7101d9ffc4  cmp w9,#0x1
7101d9ffc8  b.lt 0x7101da04d0
7101d9ffcc  add x1,x8,#0x50
7101d9ffd0  add x3,x8,#0x8
7101d9ffd4  add x0,sp,#0x110
7101d9ffd8  mov w2,#0x1
7101d9ffdc  bl 0x710377a280
7101d9ffe0  stp x28,xzr,[sp, #0x110]
7101d9ffe4  cbnz x21,0x7101da000c
7101d9ffe8  b 0x7101da0014
7101d9ffec  ldr x21,[sp, #0x118]
7101d9fff0  ldr x8,[x21]
7101d9fff4  cbz x8,0x7101da0004
7101d9fff8  ldrb w9,[x8, #0x58]
7101d9fffc  and w9,w9,#0xfe
7101da0000  strb w9,[x8, #0x58]
7101da0004  stp x28,xzr,[sp, #0x110]
7101da0008  cbz x21,0x7101da0014
7101da000c  mov x0,x21
7101da0010  bl 0x710392eb40
7101da0014  adrp x1,0x71042d6000
7101da0018  add x1,x1,#0x724
7101da001c  add x8,sp,#0x110
7101da0020  mov w2,#0x1
7101da0024  mov x0,x22
7101da0028  bl 0x7103776910
7101da002c  cmp w19,#0x1
7101da0030  b.ls 0x7101da00a0
7101da0034  ldp x8,x9,[sp, #0x198]
7101da0038  sub x9,x9,x8
7101da003c  mov x10,#0x1bad
7101da0040  movk x10,#0x914c, LSL #16
7101da0044  movk x10,#0xbacf, LSL #32
7101da0048  movk x10,#0x14c1, LSL #48
7101da004c  asr x9,x9,#0x2
7101da0050  mul x9,x9,x10
7101da0054  cmp x9,#0x2
7101da0058  b.cc 0x7101da1540
7101da005c  ldr x21,[sp, #0x118]
7101da0060  ldr x9,[x21]
7101da0064  cbz x9,0x7101da0074
7101da0068  ldrb w10,[x9, #0x58]
7101da006c  orr w10,w10,#0x1
7101da0070  strb w10,[x9, #0x58]
7101da0074  ldr w9,[x8, #0xe0]
7101da0078  cmp w9,#0x0
7101da007c  b.le 0x7101da04e8
7101da0080  add x1,x8,#0xe4
7101da0084  add x3,x8,#0x9c
7101da0088  add x0,sp,#0x110
7101da008c  mov w2,#0x1
7101da0090  bl 0x710377a280
7101da0094  stp x28,xzr,[sp, #0x110]
7101da0098  cbnz x21,0x7101da00c0
7101da009c  b 0x7101da00c8
7101da00a0  ldr x21,[sp, #0x118]
7101da00a4  ldr x8,[x21]
7101da00a8  cbz x8,0x7101da00b8
7101da00ac  ldrb w9,[x8, #0x58]
7101da00b0  and w9,w9,#0xfe
7101da00b4  strb w9,[x8, #0x58]
7101da00b8  stp x28,xzr,[sp, #0x110]
7101da00bc  cbz x21,0x7101da00c8
7101da00c0  mov x0,x21
7101da00c4  bl 0x710392eb40
7101da00c8  adrp x1,0x71042d6000
7101da00cc  add x1,x1,#0x724
7101da00d0  add x8,sp,#0x110
7101da00d4  mov w2,#0x2
7101da00d8  mov x0,x22
7101da00dc  bl 0x7103776910
7101da00e0  cmp w19,#0x2
7101da00e4  b.ls 0x7101da0154
7101da00e8  ldp x8,x9,[sp, #0x198]
7101da00ec  sub x9,x9,x8
7101da00f0  mov x10,#0x1bad
7101da00f4  movk x10,#0x914c, LSL #16
7101da00f8  movk x10,#0xbacf, LSL #32
7101da00fc  movk x10,#0x14c1, LSL #48
7101da0100  asr x9,x9,#0x2
7101da0104  mul x9,x9,x10
7101da0108  cmp x9,#0x3
7101da010c  b.cc 0x7101da1540
7101da0110  ldr x19,[sp, #0x118]
7101da0114  ldr x9,[x19]
7101da0118  cbz x9,0x7101da0128
7101da011c  ldrb w10,[x9, #0x58]
7101da0120  orr w10,w10,#0x1
7101da0124  strb w10,[x9, #0x58]
7101da0128  ldr w9,[x8, #0x174]
7101da012c  cmp w9,#0x0
7101da0130  b.le 0x7101da0500
7101da0134  add x1,x8,#0x178
7101da0138  add x3,x8,#0x130
7101da013c  add x0,sp,#0x110
7101da0140  mov w2,#0x1
7101da0144  bl 0x710377a280
7101da0148  stp x28,xzr,[sp, #0x110]
7101da014c  cbnz x19,0x7101da0174
7101da0150  b 0x7101da017c
7101da0154  ldr x19,[sp, #0x118]
7101da0158  ldr x8,[x19]
7101da015c  cbz x8,0x7101da016c
7101da0160  ldrb w9,[x8, #0x58]
7101da0164  and w9,w9,#0xfe
7101da0168  strb w9,[x8, #0x58]
7101da016c  stp x28,xzr,[sp, #0x110]
7101da0170  cbz x19,0x7101da017c
7101da0174  mov x0,x19
7101da0178  bl 0x710392eb40
7101da017c  ldr x0,[sp, #0x198]
7101da0180  cbz x0,0x7101da018c
7101da0184  str x0,[sp, #0x1a0]
7101da0188  bl 0x710392eb40
7101da018c  adrp x1,0x7104401000
7101da0190  add x1,x1,#0x95b
7101da0194  add x8,sp,#0x80
7101da0198  mov x0,x22
7101da019c  str wzr,[x20, #0x1fc]
7101da01a0  bl 0x7103776640
7101da01a4  ldr x24,[sp, #0x88]
7101da01a8  ldrb w9,[x20, #0x1c5]
7101da01ac  ldr x8,[x24, #0x8]
7101da01b0  cbz w9,0x7101da0404
7101da01b4  cbz x8,0x7101da01cc
7101da01b8  ldr x8,[x8, #0x18]
7101da01bc  cbz x8,0x7101da01cc
7101da01c0  ldrb w9,[x8, #0x58]
7101da01c4  orr w9,w9,#0x1
7101da01c8  strb w9,[x8, #0x58]
7101da01cc  adrp x1,0x710432a000
7101da01d0  add x1,x1,#0x4c4
7101da01d4  add x8,sp,#0x188
7101da01d8  add x0,sp,#0x80
7101da01dc  bl 0x7103776640
7101da01e0  ldrb w8,[x20, #0x1c2]
7101da01e4  sub w8,w8,#0x1
7101da01e8  and x9,x8,#0xff
7101da01ec  lsl x9,x9,#0x3
7101da01f0  mov w10,#0x301
7101da01f4  movk w10,#0x2, LSL #16
7101da01f8  lsr w9,w10,w9
7101da01fc  cmp w8,#0x3
7101da0200  csel w21,w9,wzr,cc
7101da0204  add x0,sp,#0x198
7101da0208  mov w1,w21
7101da020c  mov w2,wzr
7101da0210  bl 0x710339dde0
7101da0214  cbz x23,0x7101da0270
7101da0218  ldrsh w8,[x23, #0x2]
7101da021c  cmn w8,#0x1
7101da0220  b.eq 0x7101da0270
7101da0224  fmov s0,0x3f800000
7101da0228  add x8,sp,#0x198
7101da022c  add x1,x8,#0x8
7101da0230  mov x0,x24
7101da0234  add x22,sp,#0x1e0
7101da0238  bl 0x7103778300
7101da023c  ldrb w9,[x20, #0x1c2]
7101da0240  ldrb w8,[x20, #0x1c3]
7101da0244  cmp w9,#0x1
7101da0248  b.eq 0x7101da07c0
7101da024c  cmp w9,#0x2
7101da0250  b.eq 0x7101da0790
7101da0254  cmp w9,#0x3
7101da0258  b.ne 0x7101da08b8
7101da025c  cmp w8,#0x1
7101da0260  cset w19,eq
7101da0264  cmp w8,#0x2
7101da0268  b.eq 0x7101da07a0
7101da026c  b 0x7101da07d0
7101da0270  fmov s8,0x3f800000
7101da0274  mov v0.16B,v8.16B
7101da0278  adrp x19,0x71043be000
7101da027c  add x19,x19,#0xbaa
7101da0280  mov x0,x24
7101da0284  mov x1,x19
7101da0288  bl 0x7103778300
7101da028c  ldr x21,[sp, #0x190]
7101da0290  mov v0.16B,v8.16B
7101da0294  mov x1,x19
7101da0298  mov x0,x21
7101da029c  bl 0x7103778300
7101da02a0  mov v0.16B,v8.16B
7101da02a4  adrp x1,0x71043ab000
7101da02a8  add x1,x1,#0x85a
7101da02ac  mov x0,x21
7101da02b0  bl 0x7103778300
7101da02b4  adrp x1,0x7104308000
7101da02b8  add x1,x1,#0x9cf
7101da02bc  add x8,sp,#0x1e0
7101da02c0  add x0,sp,#0x188
7101da02c4  bl 0x7103776910
7101da02c8  ldr x0,[sp, #0x1e8]
7101da02cc  ldr x8,[x0]
7101da02d0  cbz x8,0x7101da02e0
7101da02d4  ldrb w9,[x8, #0x58]
7101da02d8  and w9,w9,#0xfe
7101da02dc  strb w9,[x8, #0x58]
7101da02e0  stp x28,xzr,[sp, #0x1e0]
7101da02e4  cbz x0,0x7101da02ec
7101da02e8  bl 0x710392eb40
7101da02ec  adrp x8,0x7105329000
7101da02f0  ldr x8,[x8, #0xf98]
7101da02f4  ldr x25,[x8]
7101da02f8  ldr x8,[x25, #0x68]
7101da02fc  ldrb w9,[x8]
7101da0300  ldrb w10,[x8, #0x78]
7101da0304  add w9,w10,w9
7101da0308  ldrb w10,[x8, #0xf0]
7101da030c  ldrb w8,[x8, #0x168]
7101da0310  add w9,w9,w10
7101da0314  add w19,w9,w8
7101da0318  and w8,w19,#0xff
7101da031c  cmp w8,#0x2
7101da0320  b.cc 0x7101da032c
7101da0324  ldrb w8,[x20, #0x1c6]
7101da0328  cbz w8,0x7101da0518
7101da032c  fmov s0,0x3f800000
7101da0330  adrp x1,0x7104422000
7101da0334  add x1,x1,#0x7a9
7101da0338  mov x0,x24
7101da033c  bl 0x7103778300
7101da0340  ldr x8,[x20, #0x1d0]
7101da0344  ldr x19,[sp, #0x190]
7101da0348  and x9,x8,#-0x100000000000000
7101da034c  mov x10,#-0x3f00000000000000
7101da0350  cmp x9,x10
7101da0354  b.ne 0x7101da0428
7101da0358  and x8,x8,#0xffffffffff
7101da035c  cbz x8,0x7101da0428
7101da0360  fmov s0,0x3f800000
7101da0364  adrp x1,0x710425f000
7101da0368  add x1,x1,#0xa89
7101da036c  mov x0,x19
7101da0370  bl 0x7103778300
7101da0374  ldr x0,[x20, #0x1d0]
7101da0378  ldrb w1,[x20, #0x1d8]
7101da037c  mov w2,#0x2
7101da0380  bl 0x7103238a70
7101da0384  ldr x21,[sp, #0x60]
7101da0388  tst x0,#0xffffffffff
7101da038c  adrp x25,0x710523d000
7101da0390  add x25,x25,#0x988
7101da0394  str x0,[sp, #0x1e0]
7101da0398  b.eq 0x7101da03b0
7101da039c  ldr x0,[x21]
7101da03a0  ldrsw x2,[x0, #0x70]
7101da03a4  ldr w3,[x0, #0x68]
7101da03a8  add x1,sp,#0x1e0
7101da03ac  bl 0x710323c4e0
7101da03b0  adrp x1,0x7104401000
7101da03b4  add x1,x1,#0xd32
7101da03b8  add x8,sp,#0x1e0
7101da03bc  add x0,sp,#0x188
7101da03c0  bl 0x7103776910
7101da03c4  ldr x1,[x20, #0x1d0]
7101da03c8  ldrb w2,[x20, #0x1d8]
7101da03cc  mov w3,#0x2
7101da03d0  mov x0,x21
7101da03d4  bl 0x710323f330
7101da03d8  ldr x21,[sp, #0x1e8]
7101da03dc  mov x1,x0
7101da03e0  mov x0,x21
7101da03e4  bl 0x7103778b80
7101da03e8  stp x28,xzr,[sp, #0x1e0]
7101da03ec  cbz x21,0x7101da0444
7101da03f0  mov x0,x21
7101da03f4  bl 0x710392eb40
7101da03f8  stp x25,xzr,[sp, #0x188]
7101da03fc  cbnz x19,0x7101da044c
7101da0400  b 0x7101da0464
7101da0404  cbz x8,0x7101da0464
7101da0408  ldr x8,[x8, #0x18]
7101da040c  cbz x8,0x7101da0464
7101da0410  ldrb w9,[x8, #0x58]
7101da0414  and w9,w9,#0xfe
7101da0418  strb w9,[x8, #0x58]
7101da041c  stp x25,xzr,[sp, #0x80]
7101da0420  cbnz x24,0x7101da046c
7101da0424  b 0x7101da0484
7101da0428  fmov s0,0x3f800000
7101da042c  adrp x1,0x710432a000
7101da0430  add x1,x1,#0x66a
7101da0434  mov x0,x19
7101da0438  bl 0x7103778300
7101da043c  adrp x25,0x710523d000
7101da0440  add x25,x25,#0x988
7101da0444  stp x25,xzr,[sp, #0x188]
7101da0448  cbz x19,0x7101da0464
7101da044c  ldr x0,[x19, #0x18]
7101da0450  stp x28,xzr,[x19, #0x10]
7101da0454  cbz x0,0x7101da045c
7101da0458  bl 0x710392eb40
7101da045c  mov x0,x19
7101da0460  bl 0x710392eb40
7101da0464  stp x25,xzr,[sp, #0x80]
7101da0468  cbz x24,0x7101da0484
7101da046c  ldr x0,[x24, #0x18]
7101da0470  stp x28,xzr,[x24, #0x10]
7101da0474  cbz x0,0x7101da047c
7101da0478  bl 0x710392eb40
7101da047c  mov x0,x24
7101da0480  bl 0x710392eb40
7101da0484  ldr x0,[x20, #0x168]
7101da0488  ldr w8,[sp, #0x34]
7101da048c  tbz w8,#0x0,0x7101da049c
7101da0490  adrp x1,0x710437c000
7101da0494  add x1,x1,#0x9a3
7101da0498  b 0x7101da04a4
7101da049c  adrp x1,0x71043cf000
7101da04a0  add x1,x1,#0x878
7101da04a4  fmov s0,0x3f800000
7101da04a8  bl 0x7103778300
7101da04ac  add sp,sp,#0x3d0
7101da04b0  ldp x29,x30,[sp, #0x60]
7101da04b4  ldp x20,x19,[sp, #0x50]
7101da04b8  ldp x22,x21,[sp, #0x40]
7101da04bc  ldp x24,x23,[sp, #0x30]
7101da04c0  ldp x26,x25,[sp, #0x20]
7101da04c4  ldp x28,x27,[sp, #0x10]
7101da04c8  ldp d9,d8,[sp], #0x70
7101da04cc  ret
7101da04d0  add x1,x8,#0x8
7101da04d4  add x0,sp,#0x110
7101da04d8  bl 0x710377a120
7101da04dc  stp x28,xzr,[sp, #0x110]
7101da04e0  cbnz x21,0x7101da000c
7101da04e4  b 0x7101da0014
7101da04e8  add x1,x8,#0x9c
7101da04ec  add x0,sp,#0x110
7101da04f0  bl 0x710377a120
7101da04f4  stp x28,xzr,[sp, #0x110]
7101da04f8  cbnz x21,0x7101da00c0
7101da04fc  b 0x7101da00c8
7101da0500  add x1,x8,#0x130
7101da0504  add x0,sp,#0x110
7101da0508  bl 0x710377a120
7101da050c  stp x28,xzr,[sp, #0x110]
7101da0510  cbnz x19,0x7101da0174
7101da0514  b 0x7101da017c
7101da0518  fmov s0,0x3f800000
7101da051c  adrp x1,0x71043e0000
7101da0520  add x1,x1,#0x582
7101da0524  mov x0,x24
7101da0528  bl 0x7103778300
7101da052c  ldr w8,[sp, #0xc]
7101da0530  tbz w8,#0x0,0x7101da0b9c
7101da0534  adrp x1,0x71042e7000
7101da0538  add x1,x1,#0x644
7101da053c  b 0x7101da0ba4
7101da0540  add w9,w9,#0x1
7101da0544  add x10,sp,#0x1e0
7101da0548  add x11,x10,#0x18
7101da054c  mov w12,w27
7101da0550  strb wzr,[x11, w9, UXTW ]
7101da0554  str w9,[sp, #0x1f4]
7101da0558  ldrb w9,[sp, #0x1f8]
7101da055c  cbz w9,0x7101da0580
7101da0560  add x11,x10,#0x19
7101da0564  mov w13,#0x89
7101da0568  mov w12,w27
7101da056c  mul w12,w12,w13
7101da0570  and w9,w9,#0xff
7101da0574  eor w12,w12,w9
7101da0578  ldrb w9,[x11], #0x1
7101da057c  cbnz w9,0x7101da056c
7101da0580  add x0,x10,#0x58
7101da0584  add x1,x8,#0x58
7101da0588  mov w2,#0xe8
7101da058c  str w12,[sp, #0x1f0]
7101da0590  bl 0x71039c00e0
7101da0594  ldrb w19,[sp, #0x248]
7101da0598  adrp x1,0x710438b000
7101da059c  add x1,x1,#0x306
7101da05a0  add x8,sp,#0x198
7101da05a4  mov x0,x24
7101da05a8  bl 0x7103776640
7101da05ac  cmp w19,#0x3
7101da05b0  b.hi 0x7101da1010
7101da05b4  adrp x8,0x71044fb000
7101da05b8  add x8,x8,#0x478
7101da05bc  ldrsw x9,[x8, x19, LSL #0x2]
7101da05c0  add x8,x9,x8
7101da05c4  br x8
7101da05c8  fmov s8,0x3f800000
7101da05cc  ldr x19,[sp, #0x1a0]
7101da05d0  adrp x1,0x7104442000
7101da05d4  add x1,x1,#0x147
7101da05d8  mov v0.16B,v8.16B
7101da05dc  mov x0,x19
7101da05e0  bl 0x7103778300
7101da05e4  mov v0.16B,v8.16B
7101da05e8  adrp x1,0x710426e000
7101da05ec  add x1,x1,#0x5e7
7101da05f0  mov x0,x19
7101da05f4  bl 0x7103778300
7101da05f8  mov x9,#0x7073
7101da05fc  movk x9,#0x7269, LSL #16
7101da0600  orr x8,xzr,#0x1f00000000
7101da0604  movk x9,#0x7469, LSL #32
7101da0608  movk x9,#0x5f73, LSL #48
7101da060c  add x10,sp,#0x1e0
7101da0610  stp x8,x9,[sp, #0x1e0]
7101da0614  mov x9,#0x6f63
7101da0618  movk x9,#0x5f6d, LSL #16
7101da061c  movk x9,#0x636c, LSL #32
7101da0620  movk x9,#0x5f74, LSL #48
7101da0624  str x9,[sp, #0x1f0]
7101da0628  mov w9,#0x6369
7101da062c  strh w9,[sp, #0x1f8]
7101da0630  mov x9,#0x6e6f
7101da0634  movk x9,#0x635f, LSL #16
7101da0638  movk x9,#0x616c, LSL #32
7101da063c  movk x9,#0x7373, LSL #48
7101da0640  stur x9,[x21, #0xea]
7101da0644  mov w9,#0x685f
7101da0648  movk w9,#0x706f, LSL #16
7101da064c  stur w9,[x21, #0xf2]
7101da0650  mov w11,#0x65
7101da0654  add x8,x10,#0x9
7101da0658  strh w11,[sp, #0x206]
7101da065c  mov w10,#0x73
7101da0660  mov w9,#0x89
7101da0664  mov w11,w27
7101da0668  mul w11,w11,w9
7101da066c  and w10,w10,#0xff
7101da0670  eor w11,w11,w10
7101da0674  ldrb w10,[x8], #0x1
7101da0678  cbnz w10,0x7101da0668
7101da067c  b 0x7101d9e9f8
7101da0680  cmp w8,#0x3
7101da0684  cset w9,eq
7101da0688  cmp w8,#0x1
7101da068c  b 0x7101da069c
7101da0690  cmp w8,#0x1
7101da0694  cset w9,eq
7101da0698  cmp w8,#0x2
7101da069c  csinv w21,w9,wzr,ne
7101da06a0  b 0x7101da06a8
7101da06a4  mov w21,wzr
7101da06a8  ldrb w2,[x22, #0x11]
7101da06ac  add x0,sp,#0x110
7101da06b0  mov w1,w19
7101da06b4  mov w3,w21
7101da06b8  mov w4,wzr
7101da06bc  bl 0x71025b12c0
7101da06c0  cbz w21,0x7101da0908
7101da06c4  add x0,sp,#0x1e0
7101da06c8  add x22,sp,#0x1e0
7101da06cc  bl 0x7103776290
7101da06d0  str wzr,[sp, #0x1f0]
7101da06d4  strh wzr,[sp, #0x1f4]
7101da06d8  ldr x8,[x23]
7101da06dc  ldr x9,[sp, #0x1e8]
7101da06e0  str x8,[x9]
7101da06e4  ldr x8,[x23, #0x8]
7101da06e8  ldr x9,[sp, #0x1e8]
7101da06ec  str x8,[x9, #0x8]
7101da06f0  ldr x8,[sp, #0x1e8]
7101da06f4  cmp x8,x23
7101da06f8  b.eq 0x7101da073c
7101da06fc  ldr x9,[x23, #0x18]
7101da0700  ldr x9,[x9]
7101da0704  ldr x10,[x8, #0x18]
7101da0708  str x9,[x10]
7101da070c  ldr x9,[x23, #0x18]
7101da0710  ldr x9,[x9, #0x8]
7101da0714  ldr x10,[x8, #0x18]
7101da0718  str x9,[x10, #0x8]
7101da071c  ldr x9,[x23, #0x18]
7101da0720  ldr x9,[x9, #0x10]
7101da0724  ldr x10,[x8, #0x18]
7101da0728  str x9,[x10, #0x10]
7101da072c  ldr x9,[x23, #0x18]
7101da0730  ldr x9,[x9, #0x18]
7101da0734  ldr x8,[x8, #0x18]
7101da0738  str x9,[x8, #0x18]
7101da073c  cmp w21,#0x0
7101da0740  cset w8,gt
7101da0744  strb w8,[sp, #0x1f4]
7101da0748  mov w8,#0x1
7101da074c  strb wzr,[sp, #0x1f5]
7101da0750  str w8,[sp, #0x1f0]
7101da0754  ldp x19,x8,[x20, #0x1e8]
7101da0758  cmp x19,x8
7101da075c  b.eq 0x7101da08d8
7101da0760  add x1,sp,#0x1e0
7101da0764  mov x0,x19
7101da0768  add x21,x22,#0x10
7101da076c  bl 0x7103776390
7101da0770  ldr w8,[x21]
7101da0774  ldrh w9,[x21, #0x4]
7101da0778  strh w9,[x19, #0x14]
7101da077c  str w8,[x19, #0x10]
7101da0780  ldr x8,[x20, #0x1e8]
7101da0784  add x8,x8,#0x18
7101da0788  str x8,[x20, #0x1e8]
7101da078c  b 0x7101da08e4
7101da0790  cmp w8,#0x3
7101da0794  cset w19,eq
7101da0798  cmp w8,#0x1
7101da079c  b.ne 0x7101da07d0
7101da07a0  mov w19,#0xffffffff
7101da07a4  add x0,sp,#0x188
7101da07a8  mov w4,#0x1
7101da07ac  mov w1,w21
7101da07b0  mov w2,w19
7101da07b4  mov w3,w19
7101da07b8  bl 0x71025b12c0
7101da07bc  b 0x7101da07ec
7101da07c0  cmp w8,#0x2
7101da07c4  cset w19,eq
7101da07c8  cmp w8,#0x3
7101da07cc  b.eq 0x7101da07a0
7101da07d0  mov w2,#0xffffffff
7101da07d4  add x0,sp,#0x188
7101da07d8  mov w4,#0x1
7101da07dc  mov w1,w21
7101da07e0  mov w3,w19
7101da07e4  bl 0x71025b12c0
7101da07e8  tbz w19,#0x0,0x7101da08d0
7101da07ec  add x0,sp,#0x1e0
7101da07f0  add x23,sp,#0x1e0
7101da07f4  bl 0x7103776290
7101da07f8  ldr x8,[sp, #0x190]
7101da07fc  str wzr,[sp, #0x1f0]
7101da0800  strh wzr,[sp, #0x1f4]
7101da0804  ldr x9,[x8]
7101da0808  ldr x10,[sp, #0x1e8]
7101da080c  str x9,[x10]
7101da0810  ldr x9,[x8, #0x8]
7101da0814  ldr x10,[sp, #0x1e8]
7101da0818  str x9,[x10, #0x8]
7101da081c  ldr x9,[sp, #0x1e8]
7101da0820  cmp x9,x8
7101da0824  b.eq 0x7101da0868
7101da0828  ldr x10,[x8, #0x18]
7101da082c  ldr x10,[x10]
7101da0830  ldr x11,[x9, #0x18]
7101da0834  str x10,[x11]
7101da0838  ldr x10,[x8, #0x18]
7101da083c  ldr x10,[x10, #0x8]
7101da0840  ldr x11,[x9, #0x18]
7101da0844  str x10,[x11, #0x8]
7101da0848  ldr x10,[x8, #0x18]
7101da084c  ldr x10,[x10, #0x10]
7101da0850  ldr x11,[x9, #0x18]
7101da0854  str x10,[x11, #0x10]
7101da0858  ldr x8,[x8, #0x18]
7101da085c  ldr x8,[x8, #0x18]
7101da0860  ldr x9,[x9, #0x18]
7101da0864  str x8,[x9, #0x18]
7101da0868  cmp w19,#0x0
7101da086c  mov w8,#0x1
7101da0870  cset w9,gt
7101da0874  strb w8,[sp, #0x1f5]
7101da0878  str w8,[sp, #0x1f0]
7101da087c  strb w9,[sp, #0x1f4]
7101da0880  ldp x21,x8,[x20, #0x1e8]
7101da0884  cmp x21,x8
7101da0888  b.eq 0x7101da0c90
7101da088c  add x1,sp,#0x1e0
7101da0890  mov x0,x21
7101da0894  bl 0x7103776390
7101da0898  ldr w8,[x23, #0x10]!
7101da089c  ldrh w9,[x23, #0x4]
7101da08a0  strh w9,[x21, #0x14]
7101da08a4  str w8,[x21, #0x10]
7101da08a8  ldr x8,[x20, #0x1e8]
7101da08ac  add x8,x8,#0x18
7101da08b0  str x8,[x20, #0x1e8]
7101da08b4  b 0x7101da0c9c
7101da08b8  mov w2,#0xffffffff
7101da08bc  add x0,sp,#0x188
7101da08c0  mov w4,#0x1
7101da08c4  mov w1,w21
7101da08c8  mov w3,wzr
7101da08cc  bl 0x71025b12c0
7101da08d0  str wzr,[x20, #0x1fc]
7101da08d4  b 0x7101da0cc8
7101da08d8  add x0,x20,#0x1e0
7101da08dc  add x1,sp,#0x1e0
7101da08e0  bl 0x7101da1560
7101da08e4  ldr x19,[sp, #0x1e8]
7101da08e8  stp x25,xzr,[sp, #0x1e0]
7101da08ec  cbz x19,0x7101da0908
7101da08f0  ldr x0,[x19, #0x18]
7101da08f4  stp x28,xzr,[x19, #0x10]
7101da08f8  cbz x0,0x7101da0900
7101da08fc  bl 0x710392eb40
7101da0900  mov x0,x19
7101da0904  bl 0x710392eb40
7101da0908  fmov s8,0x3f800000
7101da090c  str x23,[sp, #0x20]
7101da0910  orr x23,xzr,#-0x5555555555555556
7101da0914  str x20,[sp, #0x10]
7101da0918  mov x20,x28
7101da091c  mov x21,xzr
7101da0920  adrp x19,0x710435b000
7101da0924  add x19,x19,#0xc2a
7101da0928  mov w22,#0x1
7101da092c  movk x23,#0xaaab
7101da0930  add x8,sp,#0x1e0
7101da0934  add x0,sp,#0x198
7101da0938  mov x1,x19
7101da093c  mov w2,w22
7101da0940  bl 0x7103776640
7101da0944  ldp x8,x9,[x26, #0x158]
7101da0948  sub x9,x9,x8
7101da094c  asr x9,x9,#0x3
7101da0950  mul x9,x9,x23
7101da0954  cmp x9,x22
7101da0958  b.ls 0x7101da0ad0
7101da095c  add x26,x8,x21
7101da0960  ldr x8,[sp, #0x50]
7101da0964  ldr x24,[x26, #0x20]
7101da0968  ldrb w25,[x26, #0x28]
7101da096c  mov x1,x24
7101da0970  ldr x0,[x8, #0x168]
7101da0974  bl 0x71032638e0
7101da0978  ldr x28,[sp, #0x1e8]
7101da097c  ldr x8,[x28, #0x8]
7101da0980  tst w0,#0x1
7101da0984  csel w25,wzr,w25,ne
7101da0988  cbz x8,0x7101da09a4
7101da098c  ldr x8,[x8, #0x18]
7101da0990  cbz x8,0x7101da09a4
7101da0994  ldrb w9,[x8, #0x58]
7101da0998  orr w9,w9,#0x1
7101da099c  strb w9,[x8, #0x58]
7101da09a0  ldr x24,[x26, #0x20]
7101da09a4  mov w2,#0x2
7101da09a8  mov x0,x24
7101da09ac  mov w1,w25
7101da09b0  bl 0x7103238a70
7101da09b4  ldr x24,[sp, #0x60]
7101da09b8  tst x0,#0xffffffffff
7101da09bc  str x0,[sp, #0xc8]
7101da09c0  b.eq 0x7101da09d8
7101da09c4  ldr x0,[x24]
7101da09c8  ldrsw x2,[x0, #0x70]
7101da09cc  ldr w3,[x0, #0x68]
7101da09d0  add x1,sp,#0xc8
7101da09d4  bl 0x710323c4e0
7101da09d8  add x8,sp,#0xc8
7101da09dc  add x0,sp,#0x1e0
7101da09e0  adrp x1,0x7104401000
7101da09e4  add x1,x1,#0xd32
7101da09e8  bl 0x7103776910
7101da09ec  ldr x1,[x26, #0x20]
7101da09f0  mov w3,#0x2
7101da09f4  mov x0,x24
7101da09f8  mov w2,w25
7101da09fc  bl 0x710323f330
7101da0a00  ldr x24,[sp, #0xd0]
7101da0a04  mov x1,x0
7101da0a08  mov x0,x24
7101da0a0c  bl 0x7103778b80
7101da0a10  stp x20,xzr,[sp, #0xc8]
7101da0a14  cbz x24,0x7101da0a20
7101da0a18  mov x0,x24
7101da0a1c  bl 0x710392eb40
7101da0a20  mov v0.16B,v8.16B
7101da0a24  mov x0,x28
7101da0a28  adrp x1,0x71042b4000
7101da0a2c  add x1,x1,#0x792
7101da0a30  bl 0x7103778300
7101da0a34  ldrb w8,[x26, #0x29]
7101da0a38  cmp w8,#0x2
7101da0a3c  adrp x25,0x710523d000
7101da0a40  add x25,x25,#0x988
7101da0a44  add x8,sp,#0xc8
7101da0a48  add x0,sp,#0x1e0
7101da0a4c  adrp x1,0x71042b2000
7101da0a50  add x1,x1,#0x92e
7101da0a54  b.cc 0x7101da0afc
7101da0a58  bl 0x7103776910
7101da0a5c  ldr x0,[sp, #0xd0]
7101da0a60  ldr x8,[x0]
7101da0a64  ldr x24,[sp, #0x60]
7101da0a68  cbz x8,0x7101da0a78
7101da0a6c  ldrb w9,[x8, #0x58]
7101da0a70  orr w9,w9,#0x1
7101da0a74  strb w9,[x8, #0x58]
7101da0a78  stp x20,xzr,[sp, #0xc8]
7101da0a7c  cbz x0,0x7101da0a84
7101da0a80  bl 0x710392eb40
7101da0a84  add x8,sp,#0xc8
7101da0a88  add x0,sp,#0x1e0
7101da0a8c  adrp x1,0x71042b2000
7101da0a90  add x1,x1,#0x92e
7101da0a94  bl 0x7103776910
7101da0a98  ldrb w3,[x26, #0x29]
7101da0a9c  add x0,sp,#0xc8
7101da0aa0  mov w2,#0x1
7101da0aa4  adrp x1,0x71042e4000
7101da0aa8  add x1,x1,#0xfaa
7101da0aac  bl 0x710377a280
7101da0ab0  ldr x0,[sp, #0xd0]
7101da0ab4  stp x20,xzr,[sp, #0xc8]
7101da0ab8  cbz x0,0x7101da0ac0
7101da0abc  bl 0x710392eb40
7101da0ac0  ldr x26,[sp, #0x68]
7101da0ac4  stp x25,xzr,[sp, #0x1e0]
7101da0ac8  cbnz x28,0x7101da0b34
7101da0acc  b 0x7101da0b4c
7101da0ad0  ldr x28,[sp, #0x1e8]
7101da0ad4  ldr x8,[x28, #0x8]
7101da0ad8  cbz x8,0x7101da0b2c
7101da0adc  ldr x8,[x8, #0x18]
7101da0ae0  cbz x8,0x7101da0b2c
7101da0ae4  ldrb w9,[x8, #0x58]
7101da0ae8  and w9,w9,#0xfe
7101da0aec  strb w9,[x8, #0x58]
7101da0af0  stp x25,xzr,[sp, #0x1e0]
7101da0af4  cbnz x28,0x7101da0b34
7101da0af8  b 0x7101da0b4c
7101da0afc  bl 0x7103776910
7101da0b00  ldr x0,[sp, #0xd0]
7101da0b04  ldr x8,[x0]
7101da0b08  ldr x24,[sp, #0x60]
7101da0b0c  cbz x8,0x7101da0b1c
7101da0b10  ldrb w9,[x8, #0x58]
7101da0b14  and w9,w9,#0xfe
7101da0b18  strb w9,[x8, #0x58]
7101da0b1c  ldr x26,[sp, #0x68]
7101da0b20  stp x20,xzr,[sp, #0xc8]
7101da0b24  cbz x0,0x7101da0b2c
7101da0b28  bl 0x710392eb40
7101da0b2c  stp x25,xzr,[sp, #0x1e0]
7101da0b30  cbz x28,0x7101da0b4c
7101da0b34  ldr x0,[x28, #0x18]
7101da0b38  stp x20,xzr,[x28, #0x10]
7101da0b3c  cbz x0,0x7101da0b44
7101da0b40  bl 0x710392eb40
7101da0b44  mov x0,x28
7101da0b48  bl 0x710392eb40
7101da0b4c  add x21,x21,#0x18
7101da0b50  add x22,x22,#0x1
7101da0b54  cmp x21,#0xf0
7101da0b58  b.ne 0x7101da0930
7101da0b5c  ldp x23,x21,[sp, #0x40]
7101da0b60  mov x28,x20
7101da0b64  ldr x20,[sp, #0x10]
7101da0b68  ldr x19,[sp]
7101da0b6c  ldr x8,[sp, #0x20]
7101da0b70  stp x25,xzr,[sp, #0x110]
7101da0b74  cbz x8,0x7101d9f3f8
7101da0b78  ldr x0,[x8, #0x18]
7101da0b7c  stp x28,xzr,[x8, #0x10]
7101da0b80  cbz x0,0x7101da0b88
7101da0b84  bl 0x710392eb40
7101da0b88  ldr x0,[sp, #0x20]
7101da0b8c  bl 0x710392eb40
7101da0b90  stp x25,xzr,[sp, #0x198]
7101da0b94  cbnz x19,0x7101d9f400
7101da0b98  b 0x7101d9f418
7101da0b9c  adrp x1,0x7104292000
7101da0ba0  add x1,x1,#0xf
7101da0ba4  fmov s0,0x3f800000
7101da0ba8  mov x0,x24
7101da0bac  bl 0x7103778300
7101da0bb0  mov w8,#0x4
7101da0bb4  sub w21,w8,w19
7101da0bb8  ldr x8,[x25, #0x68]
7101da0bbc  ldrb w9,[x8]
7101da0bc0  mov x26,#-0x3f00000000000000
7101da0bc4  cbz w9,0x7101da1074
7101da0bc8  ldr x19,[x8, #0x8]
7101da0bcc  and x9,x19,#-0x100000000000000
7101da0bd0  mov w27,wzr
7101da0bd4  cmp x9,x26
7101da0bd8  b.ne 0x7101da1078
7101da0bdc  and x9,x19,#0xffffffffff
7101da0be0  cbz x9,0x7101da1078
7101da0be4  ldrb w23,[x8, #0x10]
7101da0be8  adrp x1,0x710425f000
7101da0bec  add x1,x1,#0x8af
7101da0bf0  add x8,sp,#0x1e0
7101da0bf4  add x0,sp,#0x80
7101da0bf8  mov w2,w21
7101da0bfc  bl 0x7103776910
7101da0c00  ldr x22,[sp, #0x1e8]
7101da0c04  ldr x8,[x22]
7101da0c08  cbz x8,0x7101da0c18
7101da0c0c  ldrb w9,[x8, #0x58]
7101da0c10  orr w9,w9,#0x1
7101da0c14  strb w9,[x8, #0x58]
7101da0c18  mov w2,#0x2
7101da0c1c  mov x0,x19
7101da0c20  mov w1,w23
7101da0c24  bl 0x7103238a70
7101da0c28  ldr x27,[sp, #0x60]
7101da0c2c  tst x0,#0xffffffffff
7101da0c30  str x0,[sp, #0x110]
7101da0c34  b.eq 0x7101da0c4c
7101da0c38  ldr x0,[x27]
7101da0c3c  ldrsw x2,[x0, #0x70]
7101da0c40  ldr w3,[x0, #0x68]
7101da0c44  add x1,sp,#0x110
7101da0c48  bl 0x710323c4e0
7101da0c4c  mov w3,#0x2
7101da0c50  mov x0,x27
7101da0c54  mov x1,x19
7101da0c58  mov w2,w23
7101da0c5c  bl 0x710323f330
7101da0c60  mov x1,x0
7101da0c64  mov x0,x22
7101da0c68  bl 0x7103778b80
7101da0c6c  stp x28,xzr,[sp, #0x1e0]
7101da0c70  cbz x22,0x7101da0c7c
7101da0c74  mov x0,x22
7101da0c78  bl 0x710392eb40
7101da0c7c  ldr x8,[x25, #0x68]
7101da0c80  mov w27,#0x1
7101da0c84  ldrb w9,[x8, #0x78]
7101da0c88  cbnz w9,0x7101da1080
7101da0c8c  b 0x7101da1140
7101da0c90  add x0,x20,#0x1e0
7101da0c94  add x1,sp,#0x1e0
7101da0c98  bl 0x7101da1560
7101da0c9c  ldr x23,[sp, #0x40]
7101da0ca0  ldr x21,[sp, #0x1e8]
7101da0ca4  stp x25,xzr,[sp, #0x1e0]
7101da0ca8  cbz x21,0x7101da0cc4
7101da0cac  ldr x0,[x21, #0x18]
7101da0cb0  stp x28,xzr,[x21, #0x10]
7101da0cb4  cbz x0,0x7101da0cbc
7101da0cb8  bl 0x710392eb40
7101da0cbc  mov x0,x21
7101da0cc0  bl 0x710392eb40
7101da0cc4  str w19,[x20, #0x1fc]
7101da0cc8  ldr x9,[x23]
7101da0ccc  ldrh w10,[x23, #0x8]
7101da0cd0  add x8,sp,#0x1e0
7101da0cd4  add x0,x8,#0xc
7101da0cd8  add x1,x23,#0x14
7101da0cdc  str wzr,[sp, #0x1ec]
7101da0ce0  strh w10,[sp, #0x1e8]
7101da0ce4  str x9,[sp, #0x1e0]
7101da0ce8  bl 0x7101696040
7101da0cec  ldur x9,[x23, #0x49]
7101da0cf0  ldur x8,[x23, #0x44]
7101da0cf4  stur x9,[x22, #0x49]
7101da0cf8  mov x9,#0xff0000000000
7101da0cfc  stur x8,[x22, #0x44]
7101da0d00  add x10,sp,#0x110
7101da0d04  orr w8,wzr,#0xffff
7101da0d08  mov w11,#0xffffffff
7101da0d0c  str wzr,[sp, #0xcc]
7101da0d10  str w11,[sp, #0xd8]
7101da0d14  strh w8,[sp, #0xdc]
7101da0d18  movk x9,#0x52ff, LSL #48
7101da0d1c  add x0,sp,#0xc8
7101da0d20  add x1,sp,#0x1e0
7101da0d24  strh w8,[sp, #0xc8]
7101da0d28  strb wzr,[sp, #0x110]
7101da0d2c  stur xzr,[x10, #0x4]
7101da0d30  strh wzr,[sp, #0x130]
7101da0d34  str x9,[sp, #0xd0]
7101da0d38  stp x9,xzr,[sp, #0x120]
7101da0d3c  bl 0x71025cae70
7101da0d40  ldrsh w21,[sp, #0xc8]
7101da0d44  ldr w2,[sp, #0xcc]
7101da0d48  and x19,x21,#0xffff
7101da0d4c  add x0,sp,#0x110
7101da0d50  mov x1,x19
7101da0d54  bl 0x71025caab0
7101da0d58  cmn w21,#0x1
7101da0d5c  b.eq 0x7101da0dd0
7101da0d60  cmp w21,#0x7cf
7101da0d64  b.gt 0x7101da0dd0
7101da0d68  adrp x8,0x710532f000
7101da0d6c  ldr x8,[x8, #0x730]
7101da0d70  ldr x8,[x8, #0x8]
7101da0d74  ldr x10,[x8, #0x1d8]
7101da0d78  add x8,x10,w19, SXTH  #0x1
7101da0d7c  orr x11,xzr,#-0x3333333333333334
7101da0d80  ldp x9,x10,[x10, #0x20]
7101da0d84  sub x10,x10,x9
7101da0d88  asr x10,x10,#0x6
7101da0d8c  movk x11,#0xcccd
7101da0d90  mul x10,x10,x11
7101da0d94  ldrh w8,[x8, #0x60]
7101da0d98  cmp w10,w8
7101da0d9c  b.ls 0x7101da0dd0
7101da0da0  mov w11,#0x140
7101da0da4  madd x9,x8,x11,x9
7101da0da8  adrp x12,0x7105182000
7101da0dac  add x12,x12,#0xb08
7101da0db0  cmp x10,x8
7101da0db4  csel x8,x9,x12,hi
7101da0db8  ldrb w9,[x8, #0x6c]
7101da0dbc  strb w9,[sp, #0x110]
7101da0dc0  ldrh w9,[x8, #0x90]
7101da0dc4  strh w9,[sp, #0x12a]
7101da0dc8  ldrh w8,[x8, #0x6a]
7101da0dcc  strh w8,[sp, #0x128]
7101da0dd0  ldr x8,[sp, #0xd0]
7101da0dd4  ldrh w1,[sp, #0xd8]
7101da0dd8  add x0,sp,#0x110
7101da0ddc  ldrh w2,[sp, #0xda]
7101da0de0  str x8,[sp, #0x120]
7101da0de4  ldrh w3,[sp, #0xdc]
7101da0de8  bl 0x71025cad00
7101da0dec  ldr x0,[x20, #0x1d0]
7101da0df0  mov x1,x19
7101da0df4  bl 0x71025cb340
7101da0df8  tbz w0,#0x0,0x7101da0e24
7101da0dfc  adrp x8,0x7105329000
7101da0e00  ldr x8,[x8, #0xfa0]
7101da0e04  ldr x8,[x8]
7101da0e08  ldr s0,[x8, #0x2b4]
7101da0e0c  ldr s1,[sp, #0x114]
7101da0e10  fmul s1,s0,s1
7101da0e14  str s1,[sp, #0x114]
7101da0e18  ldr s1,[sp, #0x118]
7101da0e1c  fmul s0,s0,s1
7101da0e20  str s0,[sp, #0x118]
7101da0e24  add x0,sp,#0x110
7101da0e28  bl 0x71025cb980
7101da0e2c  mov w19,w0
7101da0e30  adrp x1,0x7104308000
7101da0e34  add x1,x1,#0x9cf
7101da0e38  add x8,sp,#0x178
7101da0e3c  add x0,sp,#0x188
7101da0e40  bl 0x7103776910
7101da0e44  ldr x0,[sp, #0x180]
7101da0e48  ldr x8,[x0]
7101da0e4c  cbz x8,0x7101da0e5c
7101da0e50  ldrb w9,[x8, #0x58]
7101da0e54  orr w9,w9,#0x1
7101da0e58  strb w9,[x8, #0x58]
7101da0e5c  stp x28,xzr,[sp, #0x178]
7101da0e60  cbz x0,0x7101da0e68
7101da0e64  bl 0x710392eb40
7101da0e68  adrp x1,0x7104308000
7101da0e6c  add x1,x1,#0x9cf
7101da0e70  add x8,sp,#0x178
7101da0e74  add x0,sp,#0x188
7101da0e78  bl 0x7103776910
7101da0e7c  adrp x1,0x7104308000
7101da0e80  add x1,x1,#0x98e
7101da0e84  add x0,sp,#0x178
7101da0e88  mov w2,#0x1
7101da0e8c  mov w3,w19
7101da0e90  bl 0x710377a280
7101da0e94  ldr x0,[sp, #0x180]
7101da0e98  stp x28,xzr,[sp, #0x178]
7101da0e9c  cbnz x0,0x7101da02e8
7101da0ea0  b 0x7101da02ec
7101da0ea4  fmov s8,0x3f800000
7101da0ea8  ldr x19,[sp, #0x1a0]
7101da0eac  adrp x1,0x7104453000
7101da0eb0  add x1,x1,#0xac
7101da0eb4  mov v0.16B,v8.16B
7101da0eb8  mov x0,x19
7101da0ebc  bl 0x7103778300
7101da0ec0  mov v0.16B,v8.16B
7101da0ec4  adrp x1,0x7104431000
7101da0ec8  add x1,x1,#0x8aa
7101da0ecc  mov x0,x19
7101da0ed0  bl 0x7103778300
7101da0ed4  mov x9,#0x7073
7101da0ed8  movk x9,#0x7269, LSL #16
7101da0edc  orr x8,xzr,#0x1e00000000
7101da0ee0  movk x9,#0x7469, LSL #32
7101da0ee4  movk x9,#0x5f73, LSL #48
7101da0ee8  mov w10,#0x73
7101da0eec  stp x8,x9,[sp, #0x1e0]
7101da0ef0  mov x9,#0x6f63
7101da0ef4  movk x9,#0x5f6d, LSL #16
7101da0ef8  movk x9,#0x636c, LSL #32
7101da0efc  movk x9,#0x5f74, LSL #48
7101da0f00  str x9,[sp, #0x1f0]
7101da0f04  mov w9,#0x6369
7101da0f08  strh w9,[sp, #0x1f8]
7101da0f0c  mov x9,#0x6e6f
7101da0f10  movk x9,#0x635f, LSL #16
7101da0f14  movk x9,#0x616c, LSL #32
7101da0f18  movk x9,#0x7373, LSL #48
7101da0f1c  stur x9,[x21, #0xea]
7101da0f20  add x8,sp,#0x1e0
7101da0f24  mov w9,#0x615f
7101da0f28  movk w9,#0x6563, LSL #16
7101da0f2c  stur w9,[x21, #0xf2]
7101da0f30  add x8,x8,#0x9
7101da0f34  strb wzr,[sp, #0x206]
7101da0f38  mov w9,#0x89
7101da0f3c  mov w11,w27
7101da0f40  mul w11,w11,w9
7101da0f44  and w10,w10,#0xff
7101da0f48  eor w11,w11,w10
7101da0f4c  ldrb w10,[x8], #0x1
7101da0f50  cbnz w10,0x7101da0f40
7101da0f54  b 0x7101d9e9f8
7101da0f58  fmov s8,0x3f800000
7101da0f5c  ldr x19,[sp, #0x1a0]
7101da0f60  adrp x1,0x710436a000
7101da0f64  add x1,x1,#0xc3e
7101da0f68  mov v0.16B,v8.16B
7101da0f6c  mov x0,x19
7101da0f70  bl 0x7103778300
7101da0f74  mov v0.16B,v8.16B
7101da0f78  adrp x1,0x710437a000
7101da0f7c  add x1,x1,#0xe87
7101da0f80  mov x0,x19
7101da0f84  bl 0x7103778300
7101da0f88  mov x9,#0x7073
7101da0f8c  movk x9,#0x7269, LSL #16
7101da0f90  mov x8,#0x2100000000
7101da0f94  movk x9,#0x7469, LSL #32
7101da0f98  movk x9,#0x5f73, LSL #48
7101da0f9c  mov x11,#0x6c5f
7101da0fa0  movk x11,#0x6765, LSL #16
7101da0fa4  stp x8,x9,[sp, #0x1e0]
7101da0fa8  mov x9,#0x6f63
7101da0fac  movk x9,#0x5f6d, LSL #16
7101da0fb0  movk x9,#0x636c, LSL #32
7101da0fb4  movk x9,#0x5f74, LSL #48
7101da0fb8  str x9,[sp, #0x1f0]
7101da0fbc  mov w9,#0x6369
7101da0fc0  strh w9,[sp, #0x1f8]
7101da0fc4  mov x9,#0x6e6f
7101da0fc8  movk x9,#0x635f, LSL #16
7101da0fcc  add x10,sp,#0x1e0
7101da0fd0  movk x9,#0x616c, LSL #32
7101da0fd4  movk x9,#0x7373, LSL #48
7101da0fd8  stur x9,[x21, #0xea]
7101da0fdc  movk x11,#0x6e65, LSL #32
7101da0fe0  movk x11,#0x64, LSL #48
7101da0fe4  stur x11,[x21, #0xf2]
7101da0fe8  add x8,x10,#0x9
7101da0fec  mov w10,#0x73
7101da0ff0  mov w9,#0x89
7101da0ff4  mov w11,w27
7101da0ff8  mul w11,w11,w9
7101da0ffc  and w10,w10,#0xff
7101da1000  eor w11,w11,w10
7101da1004  ldrb w10,[x8], #0x1
7101da1008  cbnz w10,0x7101da0ff8
7101da100c  b 0x7101d9e9f8
7101da1010  fmov s8,0x3f800000
7101da1014  ldr x19,[sp, #0x1a0]
7101da1018  adrp x1,0x7104464000
7101da101c  add x1,x1,#0x374
7101da1020  mov v0.16B,v8.16B
7101da1024  mov x0,x19
7101da1028  bl 0x7103778300
7101da102c  mov v0.16B,v8.16B
7101da1030  adrp x1,0x7104453000
7101da1034  add x1,x1,#0xa1
7101da1038  mov x0,x19
7101da103c  bl 0x7103778300
7101da1040  strb wzr,[sp, #0x1e8]
7101da1044  str wzr,[sp, #0x1e4]
7101da1048  str w27,[sp, #0x1e0]
7101da104c  b 0x7101d9e9fc
7101da1050  ldr x0,[sp, #0x58]
7101da1054  adrp x1,0x71042f8000
7101da1058  add x1,x1,#0xa08
7101da105c  add x8,sp,#0x1e0
7101da1060  bl 0x7103776640
7101da1064  ldr x19,[sp, #0x1e8]
7101da1068  adrp x1,0x710438b000
7101da106c  add x1,x1,#0x28f
7101da1070  b 0x7101d9f4a8
7101da1074  mov w27,wzr
7101da1078  ldrb w9,[x8, #0x78]
7101da107c  cbz w9,0x7101da1140
7101da1080  ldr x19,[x8, #0x80]
7101da1084  and x9,x19,#-0x100000000000000
7101da1088  cmp x9,x26
7101da108c  b.ne 0x7101da1140
7101da1090  and x9,x19,#0xffffffffff
7101da1094  cbz x9,0x7101da1140
7101da1098  ldrb w23,[x8, #0x88]
7101da109c  add w2,w27,w21
7101da10a0  adrp x1,0x710425f000
7101da10a4  add x1,x1,#0x8af
7101da10a8  add x8,sp,#0x1e0
7101da10ac  add x0,sp,#0x80
7101da10b0  bl 0x7103776910
7101da10b4  ldr x22,[sp, #0x1e8]
7101da10b8  ldr x8,[x22]
7101da10bc  cbz x8,0x7101da10cc
7101da10c0  ldrb w9,[x8, #0x58]
7101da10c4  orr w9,w9,#0x1
7101da10c8  strb w9,[x8, #0x58]
7101da10cc  mov w2,#0x2
7101da10d0  mov x0,x19
7101da10d4  mov w1,w23
7101da10d8  bl 0x7103238a70
7101da10dc  ldr x28,[sp, #0x60]
7101da10e0  tst x0,#0xffffffffff
7101da10e4  str x0,[sp, #0x110]
7101da10e8  b.eq 0x7101da1100
7101da10ec  ldr x0,[x28]
7101da10f0  ldrsw x2,[x0, #0x70]
7101da10f4  ldr w3,[x0, #0x68]
7101da10f8  add x1,sp,#0x110
7101da10fc  bl 0x710323c4e0
7101da1100  mov w3,#0x2
7101da1104  mov x0,x28
7101da1108  mov x1,x19
7101da110c  mov w2,w23
7101da1110  bl 0x710323f330
7101da1114  mov x1,x0
7101da1118  mov x0,x22
7101da111c  bl 0x7103778b80
7101da1120  add w27,w27,#0x1
7101da1124  adrp x28,0x710523d000
7101da1128  add x28,x28,#0x9a8
7101da112c  stp x28,xzr,[sp, #0x1e0]
7101da1130  cbz x22,0x7101da113c
7101da1134  mov x0,x22
7101da1138  bl 0x710392eb40
7101da113c  ldr x8,[x25, #0x68]
7101da1140  ldrb w9,[x8, #0xf0]
7101da1144  cbz w9,0x7101da1208
7101da1148  ldr x19,[x8, #0xf8]
7101da114c  and x9,x19,#-0x100000000000000
7101da1150  cmp x9,x26
7101da1154  b.ne 0x7101da1208
7101da1158  and x9,x19,#0xffffffffff
7101da115c  cbz x9,0x7101da1208
7101da1160  ldrb w23,[x8, #0x100]
7101da1164  add w2,w27,w21
7101da1168  adrp x1,0x710425f000
7101da116c  add x1,x1,#0x8af
7101da1170  add x8,sp,#0x1e0
7101da1174  add x0,sp,#0x80
7101da1178  bl 0x7103776910
7101da117c  ldr x22,[sp, #0x1e8]
7101da1180  ldr x8,[x22]
7101da1184  cbz x8,0x7101da1194
7101da1188  ldrb w9,[x8, #0x58]
7101da118c  orr w9,w9,#0x1
7101da1190  strb w9,[x8, #0x58]
7101da1194  mov w2,#0x2
7101da1198  mov x0,x19
7101da119c  mov w1,w23
7101da11a0  bl 0x7103238a70
7101da11a4  ldr x28,[sp, #0x60]
7101da11a8  tst x0,#0xffffffffff
7101da11ac  str x0,[sp, #0x110]
7101da11b0  b.eq 0x7101da11c8
7101da11b4  ldr x0,[x28]
7101da11b8  ldrsw x2,[x0, #0x70]
7101da11bc  ldr w3,[x0, #0x68]
7101da11c0  add x1,sp,#0x110
7101da11c4  bl 0x710323c4e0
7101da11c8  mov w3,#0x2
7101da11cc  mov x0,x28
7101da11d0  mov x1,x19
7101da11d4  mov w2,w23
7101da11d8  bl 0x710323f330
7101da11dc  mov x1,x0
7101da11e0  mov x0,x22
7101da11e4  bl 0x7103778b80
7101da11e8  add w27,w27,#0x1
7101da11ec  adrp x28,0x710523d000
7101da11f0  add x28,x28,#0x9a8
7101da11f4  stp x28,xzr,[sp, #0x1e0]
7101da11f8  cbz x22,0x7101da1204
7101da11fc  mov x0,x22
7101da1200  bl 0x710392eb40
7101da1204  ldr x8,[x25, #0x68]
7101da1208  ldrb w9,[x8, #0x168]
7101da120c  adrp x25,0x710523d000
7101da1210  add x25,x25,#0x988
7101da1214  cbz w9,0x7101da12c8
7101da1218  ldr x19,[x8, #0x170]
7101da121c  and x9,x19,#-0x100000000000000
7101da1220  cmp x9,x26
7101da1224  b.ne 0x7101da12c8
7101da1228  and x9,x19,#0xffffffffff
7101da122c  cbz x9,0x7101da12c8
7101da1230  ldrb w23,[x8, #0x178]
7101da1234  add w2,w27,w21
7101da1238  adrp x1,0x710425f000
7101da123c  add x1,x1,#0x8af
7101da1240  add x8,sp,#0x1e0
7101da1244  add x0,sp,#0x80
7101da1248  bl 0x7103776910
7101da124c  ldr x22,[sp, #0x1e8]
7101da1250  ldr x8,[x22]
7101da1254  cbz x8,0x7101da1264
7101da1258  ldrb w9,[x8, #0x58]
7101da125c  orr w9,w9,#0x1
7101da1260  strb w9,[x8, #0x58]
7101da1264  mov w2,#0x2
7101da1268  mov x0,x19
7101da126c  mov w1,w23
7101da1270  bl 0x7103238a70
7101da1274  ldr x26,[sp, #0x60]
7101da1278  tst x0,#0xffffffffff
7101da127c  str x0,[sp, #0x110]
7101da1280  b.eq 0x7101da1298
7101da1284  ldr x0,[x26]
7101da1288  ldrsw x2,[x0, #0x70]
7101da128c  ldr w3,[x0, #0x68]
7101da1290  add x1,sp,#0x110
7101da1294  bl 0x710323c4e0
7101da1298  mov w3,#0x2
7101da129c  mov x0,x26
7101da12a0  mov x1,x19
7101da12a4  mov w2,w23
7101da12a8  bl 0x710323f330
7101da12ac  mov x1,x0
7101da12b0  mov x0,x22
7101da12b4  bl 0x7103778b80
7101da12b8  stp x28,xzr,[sp, #0x1e0]
7101da12bc  cbz x22,0x7101da12c8
7101da12c0  mov x0,x22
7101da12c4  bl 0x710392eb40
7101da12c8  cbz w21,0x7101da13d4
7101da12cc  adrp x1,0x710425f000
7101da12d0  add x1,x1,#0x8af
7101da12d4  add x8,sp,#0x1e0
7101da12d8  add x0,sp,#0x80
7101da12dc  mov w2,wzr
7101da12e0  bl 0x7103776910
7101da12e4  ldr x0,[sp, #0x1e8]
7101da12e8  ldr x8,[x0]
7101da12ec  cbz x8,0x7101da12fc
7101da12f0  ldrb w9,[x8, #0x58]
7101da12f4  and w9,w9,#0xfe
7101da12f8  strb w9,[x8, #0x58]
7101da12fc  stp x28,xzr,[sp, #0x1e0]
7101da1300  cbz x0,0x7101da1308
7101da1304  bl 0x710392eb40
7101da1308  cmp w21,#0x1
7101da130c  b.eq 0x7101da13d4
7101da1310  adrp x1,0x710425f000
7101da1314  add x1,x1,#0x8af
7101da1318  add x8,sp,#0x1e0
7101da131c  add x0,sp,#0x80
7101da1320  mov w2,#0x1
7101da1324  bl 0x7103776910
7101da1328  ldr x0,[sp, #0x1e8]
7101da132c  ldr x8,[x0]
7101da1330  cbz x8,0x7101da1340
7101da1334  ldrb w9,[x8, #0x58]
7101da1338  and w9,w9,#0xfe
7101da133c  strb w9,[x8, #0x58]
7101da1340  stp x28,xzr,[sp, #0x1e0]
7101da1344  cbz x0,0x7101da134c
7101da1348  bl 0x710392eb40
7101da134c  cmp w21,#0x3
7101da1350  b.cc 0x7101da13d4
7101da1354  adrp x1,0x710425f000
7101da1358  add x1,x1,#0x8af
7101da135c  add x8,sp,#0x1e0
7101da1360  add x0,sp,#0x80
7101da1364  mov w2,#0x2
7101da1368  bl 0x7103776910
7101da136c  ldr x0,[sp, #0x1e8]
7101da1370  ldr x8,[x0]
7101da1374  cbz x8,0x7101da1384
7101da1378  ldrb w9,[x8, #0x58]
7101da137c  and w9,w9,#0xfe
7101da1380  strb w9,[x8, #0x58]
7101da1384  stp x28,xzr,[sp, #0x1e0]
7101da1388  cbz x0,0x7101da1390
7101da138c  bl 0x710392eb40
7101da1390  cmp w21,#0x3
7101da1394  b.eq 0x7101da13d4
7101da1398  adrp x1,0x710425f000
7101da139c  add x1,x1,#0x8af
7101da13a0  add x8,sp,#0x1e0
7101da13a4  add x0,sp,#0x80
7101da13a8  orr w2,wzr,#0x3
7101da13ac  bl 0x7103776910
7101da13b0  ldr x0,[sp, #0x1e8]
7101da13b4  ldr x8,[x0]
7101da13b8  cbz x8,0x7101da13c8
7101da13bc  ldrb w9,[x8, #0x58]
7101da13c0  and w9,w9,#0xfe
7101da13c4  strb w9,[x8, #0x58]
7101da13c8  stp x28,xzr,[sp, #0x1e0]
7101da13cc  cbz x0,0x7101da13d4
7101da13d0  bl 0x710392eb40
7101da13d4  ldr x19,[sp, #0x190]
7101da13d8  fmov s0,0x3f800000
7101da13dc  adrp x1,0x710432a000
7101da13e0  add x1,x1,#0x66a
7101da13e4  mov x0,x19
7101da13e8  bl 0x7103778300
7101da13ec  stp x25,xzr,[sp, #0x188]
7101da13f0  cbnz x19,0x7101da044c
7101da13f4  b 0x7101da0464
7101da13f8  tbnz w11,#0x1f,0x7101da14c0
7101da13fc  adrp x8,0x710532f000
7101da1400  ldr x8,[x8, #0x730]
7101da1404  ldr x8,[x8, #0x8]
7101da1408  ldr x0,[x8, #0x1d8]
7101da140c  mov x1,x22
7101da1410  bl 0x71032a9470
7101da1414  mov x24,x22
7101da1418  mov x22,x0
7101da141c  add x21,x21,#0x8
7101da1420  mov w2,#0x17
7101da1424  mov x0,x21
7101da1428  mov x1,x22
7101da142c  bl 0x71032412a0
7101da1430  mov w23,w0
7101da1434  mov w2,#0x19
7101da1438  mov x0,x21
7101da143c  mov x1,x22
7101da1440  mov x22,x24
7101da1444  bl 0x71032412a0
7101da1448  tbz w23,#0x0,0x7101da14c0
7101da144c  tbz w0,#0x0,0x7101da14c0
7101da1450  adrp x1,0x710439d000
7101da1454  add x1,x1,#0x945
7101da1458  add x8,sp,#0x1e0
7101da145c  mov x0,x19
7101da1460  bl 0x7103776640
7101da1464  ldrb w8,[x20, #0x1c6]
7101da1468  cmp w8,#0x0
7101da146c  mov w8,#0x1
7101da1470  cinc w6,w8,ne
7101da1474  add x1,sp,#0x1e0
7101da1478  mov w2,#0x1
7101da147c  mov w3,#0x1
7101da1480  mov x0,x22
7101da1484  mov w4,wzr
7101da1488  mov w5,wzr
7101da148c  bl 0x71025ad150
7101da1490  ldr x21,[sp, #0x1e8]
7101da1494  stp x25,xzr,[sp, #0x1e0]
7101da1498  cbz x21,0x7101d9ddfc
7101da149c  ldr x0,[x21, #0x18]
7101da14a0  adrp x8,0x710523d000
7101da14a4  add x8,x8,#0x9a8
7101da14a8  stp x8,xzr,[x21, #0x10]
7101da14ac  cbz x0,0x7101da14b4
7101da14b0  bl 0x710392eb40
7101da14b4  mov x0,x21
7101da14b8  bl 0x710392eb40
7101da14bc  b 0x7101d9ddfc
7101da14c0  adrp x1,0x710439d000
7101da14c4  add x1,x1,#0x945
7101da14c8  add x8,sp,#0x1e0
7101da14cc  mov x0,x19
7101da14d0  mov x23,x22
7101da14d4  b 0x7101d9dd5c
7101da14d8  cmn w10,#0x1
7101da14dc  b.eq 0x7101d9d7b4
7101da14e0  asr x9,x9,#0x3
7101da14e4  cmp x9,x10
7101da14e8  b.ls 0x7101da1548
7101da14ec  ldr x8,[x8, x10, LSL #0x3]
7101da14f0  ldrb w19,[x8, #0x20]
7101da14f4  ldr x21,[x8, #0x18]
7101da14f8  b 0x7101d9d7b8
7101da14fc  tbnz w10,#0x1f,0x7101d9df9c
7101da1500  asr x9,x9,#0x3
7101da1504  cmp x9,x10
7101da1508  b.ls 0x7101d9df9c
7101da150c  ldr x8,[x8, x10, LSL #0x3]
7101da1510  ldr x21,[x8, #0x18]
7101da1514  ldrb w28,[x8, #0x20]
7101da1518  b 0x7101d9dfa0
7101da151c  adrp x1,0x710434a000
7101da1520  add x1,x1,#0x82a
7101da1524  b 0x7101d9d338
7101da1528  adrp x1,0x7104319000
7101da152c  add x1,x1,#0x2b1
7101da1530  b 0x7101d9e188
7101da1534  adrp x1,0x710432a000
7101da1538  add x1,x1,#0x4ed
7101da153c  b 0x7101d9e640
7101da1540  add x0,sp,#0x198
7101da1544  bl 0x71039c1330
7101da1548  ldr x8,[sp, #0x68]
7101da154c  add x0,x8,#0x70
7101da1550  bl 0x71039c1330
