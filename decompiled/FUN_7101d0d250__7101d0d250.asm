// addr:      7101d0d250
// offset:    0x1d0d250
// name:      FUN_7101d0d250
// mangled:   
// size:      1100

7101d0d250  sub sp,sp,#0x130
7101d0d254  str d8,[sp, #0xd0]
7101d0d258  str x28,[sp, #0xd8]
7101d0d25c  stp x26,x25,[sp, #0xe0]
7101d0d260  stp x24,x23,[sp, #0xf0]
7101d0d264  stp x22,x21,[sp, #0x100]
7101d0d268  stp x20,x19,[sp, #0x110]
7101d0d26c  stp x29,x30,[sp, #0x120]
7101d0d270  add x29,sp,#0x120
7101d0d274  ldr w8,[x0, #0xec]
7101d0d278  mov x19,x0
7101d0d27c  cbnz w8,0x7101d0d590
7101d0d280  ldr w8,[x19, #0x108]
7101d0d284  cmp w8,#0x1
7101d0d288  b.lt 0x7101d0d37c
7101d0d28c  fmov s8,0x3f800000
7101d0d290  add x8,sp,#0x88
7101d0d294  add x20,x8,#0x8
7101d0d298  mov w24,#0xa
7101d0d29c  adrp x21,0x7104280000
7101d0d2a0  add x21,x21,#0xbda
7101d0d2a4  adrp x22,0x71042b4000
7101d0d2a8  add x22,x22,#0x5a2
7101d0d2ac  ldr w9,[x19, #0x110]
7101d0d2b0  ldr x25,[x19, #0xf8]
7101d0d2b4  sub x8,x24,#0xa
7101d0d2b8  cmp x8,x9
7101d0d2bc  b.ne 0x7101d0d304
7101d0d2c0  ldr w2,[x25, #0x1c]
7101d0d2c4  sub w23,w24,#0xa
7101d0d2c8  add x8,sp,#0x88
7101d0d2cc  mov x0,x21
7101d0d2d0  mov w1,w23
7101d0d2d4  bl 0x71003a4ca0
7101d0d2d8  ldr x0,[x25, #0x10]
7101d0d2dc  mov v0.16B,v8.16B
7101d0d2e0  mov x1,x20
7101d0d2e4  bl 0x7103778300
7101d0d2e8  ldr x25,[x19, #0x100]
7101d0d2ec  ldr w2,[x25, #0x1c]
7101d0d2f0  add x8,sp,#0x88
7101d0d2f4  mov x0,x21
7101d0d2f8  mov w1,w23
7101d0d2fc  bl 0x71003a4ca0
7101d0d300  b 0x7101d0d358
7101d0d304  cmp x8,#0x4
7101d0d308  b.cs 0x7101d0d694
7101d0d30c  lsl x26,x24,#0x2
7101d0d310  ldr w2,[x25, #0x18]
7101d0d314  sub w23,w24,#0xa
7101d0d318  ldr w3,[x25, x26, LSL #0x0]
7101d0d31c  add x8,sp,#0x88
7101d0d320  mov x0,x22
7101d0d324  mov w1,w23
7101d0d328  bl 0x71003a4ca0
7101d0d32c  ldr x0,[x25, #0x10]
7101d0d330  mov v0.16B,v8.16B
7101d0d334  mov x1,x20
7101d0d338  bl 0x7103778300
7101d0d33c  ldr x25,[x19, #0x100]
7101d0d340  ldr w2,[x25, #0x18]
7101d0d344  add x8,sp,#0x88
7101d0d348  ldr w3,[x25, x26, LSL #0x0]
7101d0d34c  mov x0,x22
7101d0d350  mov w1,w23
7101d0d354  bl 0x71003a4ca0
7101d0d358  ldr x0,[x25, #0x10]
7101d0d35c  mov v0.16B,v8.16B
7101d0d360  mov x1,x20
7101d0d364  bl 0x7103778300
7101d0d368  ldrsw x8,[x19, #0x108]
7101d0d36c  sub x9,x24,#0x9
7101d0d370  add x24,x24,#0x1
7101d0d374  cmp x9,x8
7101d0d378  b.lt 0x7101d0d2ac
7101d0d37c  ldrb w8,[x19, #0x10c]
7101d0d380  add x0,x19,#0x180
7101d0d384  cbz w8,0x7101d0d490
7101d0d388  ldp x9,x10,[x19, #0x180]
7101d0d38c  ldrsw x8,[x19, #0x110]
7101d0d390  sub x10,x10,x9
7101d0d394  asr x10,x10,#0x3
7101d0d398  cmp x10,x8
7101d0d39c  b.ls 0x7101d0d698
7101d0d3a0  ldr x8,[x9, x8, LSL #0x3]
7101d0d3a4  adrp x9,0x710532f000
7101d0d3a8  ldr x9,[x9, #0x8d0]
7101d0d3ac  ldrb w8,[x8, #0x20]
7101d0d3b0  ldr x0,[x9, #0x8]
7101d0d3b4  cmp w8,#0x0
7101d0d3b8  mov x8,#0x1bb6
7101d0d3bc  movk x8,#0x6086, LSL #16
7101d0d3c0  mov x10,#0x26d5
7101d0d3c4  movk x10,#0x9a89, LSL #16
7101d0d3c8  movk x10,#0x2b, LSL #32
7101d0d3cc  movk x8,#0x2b, LSL #32
7101d0d3d0  csel x20,x10,x8,eq
7101d0d3d4  ldrb w8,[x0, #0x191]
7101d0d3d8  cbnz w8,0x7101d0d458
7101d0d3dc  mov w2,#0x4
7101d0d3e0  mov x1,x20
7101d0d3e4  bl 0x7103313f20
7101d0d3e8  tbz w0,#0x0,0x7101d0d458
7101d0d3ec  add x0,sp,#0x48
7101d0d3f0  mov x1,x20
7101d0d3f4  add x21,sp,#0x48
7101d0d3f8  bl 0x71024076d0
7101d0d3fc  ldr x9,[sp, #0x58]
7101d0d400  add x8,x21,#0x10
7101d0d404  adrp x10,0x7104f73000
7101d0d408  add x10,x10,#0xd50
7101d0d40c  str x10,[sp, #0x50]
7101d0d410  cbz x9,0x7101d0d588
7101d0d414  adrp x9,0x7106dd5000
7101d0d418  ldrb w9,[x9, #0x3a8]
7101d0d41c  cmp w9,#0x1
7101d0d420  b.ne 0x7101d0d684
7101d0d424  adrp x10,0x7106dd5000
7101d0d428  ldr w9,[sp, #0x60]
7101d0d42c  ldr w10,[x10, #0x3ac]
7101d0d430  cmp w9,w10
7101d0d434  b.ne 0x7101d0d684
7101d0d438  ldr x9,[sp, #0x58]
7101d0d43c  ldr wzr,[x9, #0x38]!
7101d0d440  ldaxr w10,[x9]
7101d0d444  sub w10,w10,#0x1
7101d0d448  add x21,sp,#0x48
7101d0d44c  stlxr w11,w10,[x9]
7101d0d450  cbnz w11,0x7101d0d440
7101d0d454  b 0x7101d0d588
7101d0d458  mov x9,#0x650000000000
7101d0d45c  movk x9,#0x87, LSL #48
7101d0d460  add x21,sp,#0x48
7101d0d464  stp xzr,x9,[sp, #0x58]
7101d0d468  mov x9,#-0x1
7101d0d46c  stp x9,xzr,[sp, #0x70]
7101d0d470  adrp x9,0x7104f73000
7101d0d474  add x9,x9,#0xd50
7101d0d478  add x8,x21,#0x10
7101d0d47c  strb wzr,[sp, #0x68]
7101d0d480  str wzr,[sp, #0x48]
7101d0d484  str xzr,[sp, #0x80]
7101d0d488  str x9,[sp, #0x50]
7101d0d48c  b 0x7101d0d588
7101d0d490  ldp x8,x9,[x19, #0x180]
7101d0d494  cmp x9,x8
7101d0d498  b.eq 0x7101d0d698
7101d0d49c  ldr x8,[x8]
7101d0d4a0  adrp x9,0x710532f000
7101d0d4a4  ldr x9,[x9, #0x8d0]
7101d0d4a8  ldrb w8,[x8, #0x20]
7101d0d4ac  ldr x0,[x9, #0x8]
7101d0d4b0  cmp w8,#0x0
7101d0d4b4  mov x8,#0x55a6
7101d0d4b8  movk x8,#0x2a05, LSL #16
7101d0d4bc  mov x10,#0x68c5
7101d0d4c0  movk x10,#0xd00a, LSL #16
7101d0d4c4  movk x10,#0x25, LSL #32
7101d0d4c8  movk x8,#0x25, LSL #32
7101d0d4cc  csel x20,x10,x8,eq
7101d0d4d0  ldrb w8,[x0, #0x191]
7101d0d4d4  cbnz w8,0x7101d0d554
7101d0d4d8  mov w2,#0x4
7101d0d4dc  mov x1,x20
7101d0d4e0  bl 0x7103313f20
7101d0d4e4  tbz w0,#0x0,0x7101d0d554
7101d0d4e8  add x0,sp,#0x8
7101d0d4ec  mov x1,x20
7101d0d4f0  add x21,sp,#0x8
7101d0d4f4  bl 0x71024076d0
7101d0d4f8  ldr x9,[sp, #0x18]
7101d0d4fc  add x8,x21,#0x10
7101d0d500  adrp x10,0x7104f73000
7101d0d504  add x10,x10,#0xd50
7101d0d508  str x10,[sp, #0x10]
7101d0d50c  cbz x9,0x7101d0d588
7101d0d510  adrp x9,0x7106dd5000
7101d0d514  ldrb w9,[x9, #0x3a8]
7101d0d518  cmp w9,#0x1
7101d0d51c  b.ne 0x7101d0d68c
7101d0d520  adrp x10,0x7106dd5000
7101d0d524  ldr w9,[sp, #0x20]
7101d0d528  ldr w10,[x10, #0x3ac]
7101d0d52c  cmp w9,w10
7101d0d530  b.ne 0x7101d0d68c
7101d0d534  ldr x9,[sp, #0x18]
7101d0d538  ldr wzr,[x9, #0x38]!
7101d0d53c  ldaxr w10,[x9]
7101d0d540  sub w10,w10,#0x1
7101d0d544  add x21,sp,#0x8
7101d0d548  stlxr w11,w10,[x9]
7101d0d54c  cbnz w11,0x7101d0d53c
7101d0d550  b 0x7101d0d588
7101d0d554  mov x9,#0x650000000000
7101d0d558  movk x9,#0x87, LSL #48
7101d0d55c  add x21,sp,#0x8
7101d0d560  stp xzr,x9,[sp, #0x18]
7101d0d564  mov x9,#-0x1
7101d0d568  stp x9,xzr,[sp, #0x30]
7101d0d56c  adrp x9,0x7104f73000
7101d0d570  add x9,x9,#0xd50
7101d0d574  add x8,x21,#0x10
7101d0d578  strb wzr,[sp, #0x28]
7101d0d57c  str wzr,[sp, #0x8]
7101d0d580  str xzr,[sp, #0x40]
7101d0d584  str x9,[sp, #0x10]
7101d0d588  str xzr,[x8]
7101d0d58c  strb wzr,[x21, #0x20]
7101d0d590  ldr w8,[x19, #0x108]
7101d0d594  cmp w8,#0x1
7101d0d598  b.lt 0x7101d0d648
7101d0d59c  add x8,sp,#0x88
7101d0d5a0  mov w20,wzr
7101d0d5a4  mov w24,#0x2
7101d0d5a8  add x21,x8,#0x8
7101d0d5ac  ldr w8,[x19, #0x110]
7101d0d5b0  ldr x23,[x19, #0xf8]
7101d0d5b4  add x0,sp,#0x88
7101d0d5b8  cmp w20,w8
7101d0d5bc  cinc w22,w24,eq
7101d0d5c0  mov x1,x23
7101d0d5c4  mov w2,w22
7101d0d5c8  mov w3,w20
7101d0d5cc  bl 0x7101d0f540
7101d0d5d0  ldr x8,[x23, #0x10]
7101d0d5d4  ldr x0,[x8, #0x8]
7101d0d5d8  cbz x0,0x7101d0d5f8
7101d0d5dc  mov x1,x21
7101d0d5e0  bl 0x71037964b0
7101d0d5e4  cbz x0,0x7101d0d5f8
7101d0d5e8  ldr x8,[x0]
7101d0d5ec  ldr x8,[x8, #0x138]
7101d0d5f0  blr x8
7101d0d5f4  tbz w0,#0x0,0x7101d0d660
7101d0d5f8  ldr x23,[x19, #0x100]
7101d0d5fc  add x0,sp,#0x88
7101d0d600  mov w2,w22
7101d0d604  mov x1,x23
7101d0d608  mov w3,w20
7101d0d60c  bl 0x7101d0f540
7101d0d610  ldr x8,[x23, #0x10]
7101d0d614  ldr x0,[x8, #0x8]
7101d0d618  cbz x0,0x7101d0d638
7101d0d61c  mov x1,x21
7101d0d620  bl 0x71037964b0
7101d0d624  cbz x0,0x7101d0d638
7101d0d628  ldr x8,[x0]
7101d0d62c  ldr x8,[x8, #0x138]
7101d0d630  blr x8
7101d0d634  tbz w0,#0x0,0x7101d0d660
7101d0d638  ldr w8,[x19, #0x108]
7101d0d63c  add w20,w20,#0x1
7101d0d640  cmp w20,w8
7101d0d644  b.lt 0x7101d0d5ac
7101d0d648  ldrsw x8,[x19, #0xe4]
7101d0d64c  cmp w8,#0x13
7101d0d650  b.cs 0x7101d0d694
7101d0d654  add x8,x19,x8, LSL #0x2
7101d0d658  orr w9,wzr,#0x6
7101d0d65c  str w9,[x8, #0x98]
7101d0d660  ldr d8,[sp, #0xd0]
7101d0d664  ldp x29,x30,[sp, #0x120]
7101d0d668  ldp x20,x19,[sp, #0x110]
7101d0d66c  ldr x28,[sp, #0xd8]
7101d0d670  ldp x22,x21,[sp, #0x100]
7101d0d674  ldp x24,x23,[sp, #0xf0]
7101d0d678  ldp x26,x25,[sp, #0xe0]
7101d0d67c  add sp,sp,#0x130
7101d0d680  ret
7101d0d684  add x21,sp,#0x48
7101d0d688  b 0x7101d0d588
7101d0d68c  add x21,sp,#0x8
7101d0d690  b 0x7101d0d588
7101d0d694  bl 0x71039c2650
7101d0d698  bl 0x71039c1330
