// addr:      7101c9d490
// offset:    0x1c9d490
// name:      FUN_7101c9d490
// mangled:   
// size:      2348

7101c9d490  sub sp,sp,#0x1a0
7101c9d494  str d8,[sp, #0x130]
7101c9d498  stp x28,x27,[sp, #0x140]
7101c9d49c  stp x26,x25,[sp, #0x150]
7101c9d4a0  stp x24,x23,[sp, #0x160]
7101c9d4a4  stp x22,x21,[sp, #0x170]
7101c9d4a8  stp x20,x19,[sp, #0x180]
7101c9d4ac  stp x29,x30,[sp, #0x190]
7101c9d4b0  add x29,sp,#0x190
7101c9d4b4  ldr w8,[x0, #0x10c]
7101c9d4b8  mov x19,x0
7101c9d4bc  add x20,x0,#0x168
7101c9d4c0  cbz w8,0x7101c9d5f8
7101c9d4c4  ldr x0,[x20]
7101c9d4c8  ldrb w8,[x0, #0x280]
7101c9d4cc  cbz w8,0x7101c9d664
7101c9d4d0  ldr x8,[x0]
7101c9d4d4  ldr x8,[x8, #0x70]
7101c9d4d8  mov w1,wzr
7101c9d4dc  blr x8
7101c9d4e0  ldrh w1,[x19, #0x254]
7101c9d4e4  mov x0,x19
7101c9d4e8  bl 0x7101c9f130
7101c9d4ec  ldr x8,[x19, #0x230]
7101c9d4f0  ldr x9,[x19, #0x228]
7101c9d4f4  sub x8,x8,x9
7101c9d4f8  lsr x24,x8,#0x2
7101c9d4fc  cmp w24,#0x1
7101c9d500  b.lt 0x7101c9d5a4
7101c9d504  mov w21,wzr
7101c9d508  adrp x25,0x710523d000
7101c9d50c  add x25,x25,#0x9c8
7101c9d510  ldr x1,[x20]
7101c9d514  sub x0,x29,#0x78
7101c9d518  mov w2,w21
7101c9d51c  bl 0x7103771d60
7101c9d520  ldur x22,[x29, #-0x70]
7101c9d524  ldr x23,[x22]
7101c9d528  cbz x23,0x7101c9d588
7101c9d52c  ldr x8,[x23]
7101c9d530  ldr x8,[x8, #0x1f8]
7101c9d534  mov x0,x23
7101c9d538  mov w1,wzr
7101c9d53c  blr x8
7101c9d540  ldr x8,[x23]
7101c9d544  ldr x8,[x8, #0x200]
7101c9d548  mov x0,x23
7101c9d54c  blr x8
7101c9d550  tbz w0,#0x0,0x7101c9d56c
7101c9d554  ldr x8,[x23]
7101c9d558  ldr x8,[x8, #0x210]
7101c9d55c  mov x0,x23
7101c9d560  blr x8
7101c9d564  eor w8,w0,#0x1
7101c9d568  b 0x7101c9d570
7101c9d56c  mov w8,#0x1
7101c9d570  ldr x9,[x23]
7101c9d574  ldr x9,[x9, #0x388]
7101c9d578  and w1,w8,#0x1
7101c9d57c  mov x0,x23
7101c9d580  mov w2,wzr
7101c9d584  blr x9
7101c9d588  stp x25,xzr,[x29, #-0x78]
7101c9d58c  cbz x22,0x7101c9d598
7101c9d590  mov x0,x22
7101c9d594  bl 0x710392eb40
7101c9d598  add w21,w21,#0x1
7101c9d59c  cmp w24,w21
7101c9d5a0  b.ne 0x7101c9d510
7101c9d5a4  ldr w8,[x19, #0x104]
7101c9d5a8  subs w8,w8,#0x1
7101c9d5ac  b.lt 0x7101c9d5b4
7101c9d5b0  str w8,[x19, #0x104]
7101c9d5b4  ldr x0,[x19, #0x120]
7101c9d5b8  fmov s0,0x3f800000
7101c9d5bc  adrp x1,0x7104433000
7101c9d5c0  add x1,x1,#0x246
7101c9d5c4  bl 0x7103778300
7101c9d5c8  adrp x8,0x710532f000
7101c9d5cc  ldr x8,[x8, #0x8d0]
7101c9d5d0  ldr x0,[x8, #0x8]
7101c9d5d4  ldp x8,x9,[x0, #0x40]
7101c9d5d8  sub x9,x9,x8
7101c9d5dc  asr x9,x9,#0x3
7101c9d5e0  cmp x9,#0x4
7101c9d5e4  b.cc 0x7101c9d6a4
7101c9d5e8  ldr x19,[x8, #0x18]
7101c9d5ec  ldrb w8,[x0, #0x191]
7101c9d5f0  cbnz w8,0x7101c9d720
7101c9d5f4  b 0x7101c9d6b0
7101c9d5f8  ldr x0,[x19, #0x130]
7101c9d5fc  ldr x8,[x0]
7101c9d600  ldr x8,[x8, #0x70]
7101c9d604  mov w1,wzr
7101c9d608  blr x8
7101c9d60c  ldr x0,[x19, #0x130]
7101c9d610  ldr x8,[x0]
7101c9d614  ldr x8,[x8, #0x60]
7101c9d618  mov w1,wzr
7101c9d61c  blr x8
7101c9d620  mov x0,x19
7101c9d624  mov w1,wzr
7101c9d628  bl 0x7101ca10c0
7101c9d62c  ldp x25,x24,[x19, #0x180]
7101c9d630  cmp x25,x24
7101c9d634  b.eq 0x7101c9d75c
7101c9d638  ldrb w8,[x25]
7101c9d63c  cmp w8,#0x6
7101c9d640  b.eq 0x7101c9d75c
7101c9d644  add x8,x25,#0x1
7101c9d648  cmp x24,x8
7101c9d64c  b.eq 0x7101c9d758
7101c9d650  ldrb w9,[x8], #0x1
7101c9d654  cmp w9,#0x6
7101c9d658  b.ne 0x7101c9d648
7101c9d65c  sub x25,x8,#0x1
7101c9d660  b 0x7101c9d75c
7101c9d664  ldr w8,[x19, #0x264]
7101c9d668  ldr w9,[x0, #0x254]
7101c9d66c  cmp w8,w9
7101c9d670  b.eq 0x7101c9d968
7101c9d674  adrp x8,0x710532f000
7101c9d678  ldr x8,[x8, #0x8d0]
7101c9d67c  ldr x0,[x8, #0x8]
7101c9d680  ldp x8,x9,[x0, #0x40]
7101c9d684  sub x9,x9,x8
7101c9d688  asr x9,x9,#0x3
7101c9d68c  cmp x9,#0x2
7101c9d690  b.cc 0x7101c9d8a4
7101c9d694  ldr x21,[x8, #0x8]
7101c9d698  ldrb w8,[x0, #0x191]
7101c9d69c  cbnz w8,0x7101c9d920
7101c9d6a0  b 0x7101c9d8b0
7101c9d6a4  mov x19,xzr
7101c9d6a8  ldrb w8,[x0, #0x191]
7101c9d6ac  cbnz w8,0x7101c9d720
7101c9d6b0  mov w2,#0x4
7101c9d6b4  mov x1,x19
7101c9d6b8  bl 0x7103313f20
7101c9d6bc  tbz w0,#0x0,0x7101c9d720
7101c9d6c0  sub x0,x29,#0xb8
7101c9d6c4  mov x1,x19
7101c9d6c8  bl 0x71024076d0
7101c9d6cc  ldur x8,[x29, #-0xa8]
7101c9d6d0  adrp x9,0x7104f73000
7101c9d6d4  add x9,x9,#0xd50
7101c9d6d8  stur x9,[x29, #-0xb0]
7101c9d6dc  cbz x8,0x7101c9d74c
7101c9d6e0  adrp x8,0x7106dd5000
7101c9d6e4  ldrb w8,[x8, #0x3a8]
7101c9d6e8  cmp w8,#0x1
7101c9d6ec  b.ne 0x7101c9d74c
7101c9d6f0  adrp x9,0x7106dd5000
7101c9d6f4  ldur w8,[x29, #-0xa0]
7101c9d6f8  ldr w9,[x9, #0x3ac]
7101c9d6fc  cmp w8,w9
7101c9d700  b.ne 0x7101c9d74c
7101c9d704  ldur x8,[x29, #-0xa8]
7101c9d708  ldr wzr,[x8, #0x38]!
7101c9d70c  ldaxr w9,[x8]
7101c9d710  sub w9,w9,#0x1
7101c9d714  stlxr w10,w9,[x8]
7101c9d718  cbnz w10,0x7101c9d70c
7101c9d71c  b 0x7101c9d74c
7101c9d720  mov x8,#0x650000000000
7101c9d724  movk x8,#0x87, LSL #48
7101c9d728  sturb wzr,[x29, #-0x98]
7101c9d72c  stp xzr,x8,[x29, #-0xa8]
7101c9d730  mov x8,#-0x1
7101c9d734  stp x8,xzr,[x29, #-0x90]
7101c9d738  adrp x8,0x7104f73000
7101c9d73c  add x8,x8,#0xd50
7101c9d740  stur wzr,[x29, #-0xb8]
7101c9d744  stur xzr,[x29, #-0x80]
7101c9d748  stur x8,[x29, #-0xb0]
7101c9d74c  stur xzr,[x29, #-0xa8]
7101c9d750  sturb wzr,[x29, #-0x98]
7101c9d754  b 0x7101c9dc24
7101c9d758  mov x25,x24
7101c9d75c  ldr x8,[x19, #0x230]
7101c9d760  ldr x9,[x19, #0x228]
7101c9d764  sub x8,x8,x9
7101c9d768  lsr x26,x8,#0x2
7101c9d76c  cmp w26,#0x1
7101c9d770  b.lt 0x7101c9d818
7101c9d774  mov w21,wzr
7101c9d778  adrp x27,0x710523d000
7101c9d77c  add x27,x27,#0x9c8
7101c9d780  ldr x1,[x20]
7101c9d784  sub x0,x29,#0x78
7101c9d788  mov w2,w21
7101c9d78c  bl 0x7103771d60
7101c9d790  ldur x22,[x29, #-0x70]
7101c9d794  ldr x23,[x22]
7101c9d798  cbz x23,0x7101c9d7fc
7101c9d79c  ldr x8,[x23]
7101c9d7a0  ldr x8,[x8, #0x1f8]
7101c9d7a4  cmp x25,x24
7101c9d7a8  cset w1,ne
7101c9d7ac  mov x0,x23
7101c9d7b0  blr x8
7101c9d7b4  ldr x8,[x23]
7101c9d7b8  ldr x8,[x8, #0x200]
7101c9d7bc  mov x0,x23
7101c9d7c0  blr x8
7101c9d7c4  tbz w0,#0x0,0x7101c9d7e0
7101c9d7c8  ldr x8,[x23]
7101c9d7cc  ldr x8,[x8, #0x210]
7101c9d7d0  mov x0,x23
7101c9d7d4  blr x8
7101c9d7d8  eor w8,w0,#0x1
7101c9d7dc  b 0x7101c9d7e4
7101c9d7e0  mov w8,#0x1
7101c9d7e4  ldr x9,[x23]
7101c9d7e8  ldr x9,[x9, #0x388]
7101c9d7ec  and w1,w8,#0x1
7101c9d7f0  mov x0,x23
7101c9d7f4  mov w2,wzr
7101c9d7f8  blr x9
7101c9d7fc  stp x27,xzr,[x29, #-0x78]
7101c9d800  cbz x22,0x7101c9d80c
7101c9d804  mov x0,x22
7101c9d808  bl 0x710392eb40
7101c9d80c  add w21,w21,#0x1
7101c9d810  cmp w26,w21
7101c9d814  b.ne 0x7101c9d780
7101c9d818  ldrh w1,[x19, #0x254]
7101c9d81c  mov x0,x19
7101c9d820  mov w2,wzr
7101c9d824  str wzr,[x19, #0x264]
7101c9d828  bl 0x7101c9f350
7101c9d82c  ldr x8,[x19, #0x228]
7101c9d830  ldr x9,[x19, #0x230]
7101c9d834  cmp x9,x8
7101c9d838  b.eq 0x7101c9dbf4
7101c9d83c  ldr w10,[x8]
7101c9d840  cmp w10,#0x21e
7101c9d844  mov x10,x8
7101c9d848  b.eq 0x7101c9d868
7101c9d84c  add x10,x8,#0x4
7101c9d850  cmp x9,x10
7101c9d854  b.eq 0x7101c9dbf4
7101c9d858  ldr w11,[x10], #0x4
7101c9d85c  cmp w11,#0x21e
7101c9d860  b.ne 0x7101c9d850
7101c9d864  sub x10,x10,#0x4
7101c9d868  cmp x10,x9
7101c9d86c  b.eq 0x7101c9dbf4
7101c9d870  ldr x1,[x20]
7101c9d874  sub x8,x10,x8
7101c9d878  lsr x2,x8,#0x2
7101c9d87c  sub x0,x29,#0x78
7101c9d880  bl 0x7103771d60
7101c9d884  ldur x21,[x29, #-0x70]
7101c9d888  ldr x0,[x21]
7101c9d88c  cbz x0,0x7101c9dbd4
7101c9d890  ldr x8,[x0]
7101c9d894  ldr x8,[x8, #0x2f8]
7101c9d898  blr x8
7101c9d89c  and w8,w0,#0x1
7101c9d8a0  b 0x7101c9dbd8
7101c9d8a4  mov x21,xzr
7101c9d8a8  ldrb w8,[x0, #0x191]
7101c9d8ac  cbnz w8,0x7101c9d920
7101c9d8b0  mov w2,#0x4
7101c9d8b4  mov x1,x21
7101c9d8b8  bl 0x7103313f20
7101c9d8bc  tbz w0,#0x0,0x7101c9d920
7101c9d8c0  add x0,sp,#0x98
7101c9d8c4  mov x1,x21
7101c9d8c8  bl 0x71024076d0
7101c9d8cc  ldr x8,[sp, #0xa8]
7101c9d8d0  adrp x9,0x7104f73000
7101c9d8d4  add x9,x9,#0xd50
7101c9d8d8  str x9,[sp, #0xa0]
7101c9d8dc  cbz x8,0x7101c9d94c
7101c9d8e0  adrp x8,0x7106dd5000
7101c9d8e4  ldrb w8,[x8, #0x3a8]
7101c9d8e8  cmp w8,#0x1
7101c9d8ec  b.ne 0x7101c9d94c
7101c9d8f0  adrp x9,0x7106dd5000
7101c9d8f4  ldr w8,[sp, #0xb0]
7101c9d8f8  ldr w9,[x9, #0x3ac]
7101c9d8fc  cmp w8,w9
7101c9d900  b.ne 0x7101c9d94c
7101c9d904  ldr x8,[sp, #0xa8]
7101c9d908  ldr wzr,[x8, #0x38]!
7101c9d90c  ldaxr w9,[x8]
7101c9d910  sub w9,w9,#0x1
7101c9d914  stlxr w10,w9,[x8]
7101c9d918  cbnz w10,0x7101c9d90c
7101c9d91c  b 0x7101c9d94c
7101c9d920  mov x8,#0x650000000000
7101c9d924  movk x8,#0x87, LSL #48
7101c9d928  strb wzr,[sp, #0xb8]
7101c9d92c  stp xzr,x8,[sp, #0xa8]
7101c9d930  mov x8,#-0x1
7101c9d934  stp x8,xzr,[sp, #0xc0]
7101c9d938  adrp x8,0x7104f73000
7101c9d93c  add x8,x8,#0xd50
7101c9d940  str wzr,[sp, #0x98]
7101c9d944  str xzr,[sp, #0xd0]
7101c9d948  str x8,[sp, #0xa0]
7101c9d94c  str xzr,[sp, #0xa8]
7101c9d950  strb wzr,[sp, #0xb8]
7101c9d954  ldr x8,[x19, #0x168]
7101c9d958  ldr w1,[x8, #0x254]
7101c9d95c  mov x0,x19
7101c9d960  str w1,[x19, #0x264]
7101c9d964  bl 0x7101ca1830
7101c9d968  ldr x8,[x19, #0x230]
7101c9d96c  ldr x9,[x19, #0x228]
7101c9d970  sub x8,x8,x9
7101c9d974  lsr x9,x8,#0x2
7101c9d978  cmp w9,#0x1
7101c9d97c  b.lt 0x7101c9dc24
7101c9d980  fmov s8,0x3f800000
7101c9d984  mov x22,xzr
7101c9d988  mov w21,wzr
7101c9d98c  add x9,x19,#0x228
7101c9d990  adrp x28,0x710523d000
7101c9d994  add x28,x28,#0x9c8
7101c9d998  add x24,x19,#0x118
7101c9d99c  sbfx x25,x8,#0x2,#0x20
7101c9d9a0  stur x9,[x29, #-0x58]
7101c9d9a4  ldr x1,[x20]
7101c9d9a8  sub x0,x29,#0x78
7101c9d9ac  mov w2,w22
7101c9d9b0  bl 0x7103771d60
7101c9d9b4  ldur x26,[x29, #-0x70]
7101c9d9b8  ldr x0,[x26]
7101c9d9bc  cbz x0,0x7101c9d9d4
7101c9d9c0  ldr x8,[x0]
7101c9d9c4  ldr x8,[x8, #0x2f8]
7101c9d9c8  blr x8
7101c9d9cc  mov w27,w0
7101c9d9d0  b 0x7101c9d9d8
7101c9d9d4  mov w27,wzr
7101c9d9d8  ldr x9,[x19, #0x230]
7101c9d9dc  ldr x8,[x19, #0x228]
7101c9d9e0  sub x9,x9,x8
7101c9d9e4  asr x9,x9,#0x2
7101c9d9e8  cmp x9,x22
7101c9d9ec  b.ls 0x7101c9ddb4
7101c9d9f0  ldr w23,[x8, x22, LSL #0x2]
7101c9d9f4  cmp w23,#0x21e
7101c9d9f8  b.ne 0x7101c9da10
7101c9d9fc  ldrb w8,[x19, #0x260]
7101c9da00  and w23,w27,#0x1
7101c9da04  cmp w8,w23
7101c9da08  b.eq 0x7101c9da38
7101c9da0c  b 0x7101c9db44
7101c9da10  ldrh w8,[x19, #0x254]
7101c9da14  bics wzr,w23,w8
7101c9da18  cset w8,eq
7101c9da1c  eor w8,w27,w8
7101c9da20  tbz w8,#0x0,0x7101c9da38
7101c9da24  tbz w27,#0x0,0x7101c9da44
7101c9da28  ldr x8,[x26]
7101c9da2c  cbz x8,0x7101c9da54
7101c9da30  ldr x1,[x8, #0x88]
7101c9da34  b 0x7101c9da5c
7101c9da38  stp x28,xzr,[x29, #-0x78]
7101c9da3c  cbnz x26,0x7101c9db2c
7101c9da40  b 0x7101c9db34
7101c9da44  ldr x8,[x26]
7101c9da48  cbz x8,0x7101c9dabc
7101c9da4c  ldr x1,[x8, #0x88]
7101c9da50  b 0x7101c9dac4
7101c9da54  adrp x1,0x7104867000
7101c9da58  add x1,x1,#0xc2e
7101c9da5c  add x8,sp,#0x48
7101c9da60  mov x0,x24
7101c9da64  bl 0x7103776640
7101c9da68  ldr x27,[sp, #0x50]
7101c9da6c  mov v0.16B,v8.16B
7101c9da70  adrp x1,0x7104270000
7101c9da74  add x1,x1,#0x82
7101c9da78  mov x0,x27
7101c9da7c  bl 0x7103778300
7101c9da80  adrp x8,0x710523d000
7101c9da84  add x8,x8,#0x988
7101c9da88  stp x8,xzr,[sp, #0x48]
7101c9da8c  cbz x27,0x7101c9dab0
7101c9da90  ldr x0,[x27, #0x18]
7101c9da94  adrp x8,0x710523d000
7101c9da98  add x8,x8,#0x9a8
7101c9da9c  stp x8,xzr,[x27, #0x10]
7101c9daa0  cbz x0,0x7101c9daa8
7101c9daa4  bl 0x710392eb40
7101c9daa8  mov x0,x27
7101c9daac  bl 0x710392eb40
7101c9dab0  ldrh w8,[x19, #0x254]
7101c9dab4  orr w8,w8,w23
7101c9dab8  b 0x7101c9db20
7101c9dabc  adrp x1,0x7104867000
7101c9dac0  add x1,x1,#0xc2e
7101c9dac4  add x8,sp,#0x48
7101c9dac8  mov x0,x24
7101c9dacc  bl 0x7103776640
7101c9dad0  ldr x27,[sp, #0x50]
7101c9dad4  mov v0.16B,v8.16B
7101c9dad8  adrp x1,0x7104401000
7101c9dadc  add x1,x1,#0x6e5
7101c9dae0  mov x0,x27
7101c9dae4  bl 0x7103778300
7101c9dae8  adrp x8,0x710523d000
7101c9daec  add x8,x8,#0x988
7101c9daf0  stp x8,xzr,[sp, #0x48]
7101c9daf4  cbz x27,0x7101c9db18
7101c9daf8  ldr x0,[x27, #0x18]
7101c9dafc  adrp x8,0x710523d000
7101c9db00  add x8,x8,#0x9a8
7101c9db04  stp x8,xzr,[x27, #0x10]
7101c9db08  cbz x0,0x7101c9db10
7101c9db0c  bl 0x710392eb40
7101c9db10  mov x0,x27
7101c9db14  bl 0x710392eb40
7101c9db18  ldrh w8,[x19, #0x254]
7101c9db1c  bic w8,w8,w23
7101c9db20  strh w8,[x19, #0x254]
7101c9db24  stp x28,xzr,[x29, #-0x78]
7101c9db28  mov w21,#0x1
7101c9db2c  mov x0,x26
7101c9db30  bl 0x710392eb40
7101c9db34  add x22,x22,#0x1
7101c9db38  cmp x22,x25
7101c9db3c  b.lt 0x7101c9d9a4
7101c9db40  b 0x7101c9dccc
7101c9db44  adrp x8,0x710532f000
7101c9db48  ldr x8,[x8, #0x8d0]
7101c9db4c  ldr x0,[x8, #0x8]
7101c9db50  ldrb w8,[x0, #0x191]
7101c9db54  cbnz w8,0x7101c9dc48
7101c9db58  mov x20,#0x70e6
7101c9db5c  movk x20,#0x6a20, LSL #16
7101c9db60  movk x20,#0x10, LSL #32
7101c9db64  mov w2,#0x4
7101c9db68  mov x1,x20
7101c9db6c  bl 0x7103313f20
7101c9db70  tbz w0,#0x0,0x7101c9dc48
7101c9db74  add x0,sp,#0x58
7101c9db78  mov x1,x20
7101c9db7c  bl 0x71024076d0
7101c9db80  ldr x8,[sp, #0x68]
7101c9db84  adrp x9,0x7104f73000
7101c9db88  add x9,x9,#0xd50
7101c9db8c  str x9,[sp, #0x60]
7101c9db90  cbz x8,0x7101c9dc74
7101c9db94  adrp x8,0x7106dd5000
7101c9db98  ldrb w8,[x8, #0x3a8]
7101c9db9c  cmp w8,#0x1
7101c9dba0  b.ne 0x7101c9dc74
7101c9dba4  adrp x9,0x7106dd5000
7101c9dba8  ldr w8,[sp, #0x70]
7101c9dbac  ldr w9,[x9, #0x3ac]
7101c9dbb0  cmp w8,w9
7101c9dbb4  b.ne 0x7101c9dc74
7101c9dbb8  ldr x8,[sp, #0x68]
7101c9dbbc  ldr wzr,[x8, #0x38]!
7101c9dbc0  ldaxr w9,[x8]
7101c9dbc4  sub w9,w9,#0x1
7101c9dbc8  stlxr w10,w9,[x8]
7101c9dbcc  cbnz w10,0x7101c9dbc0
7101c9dbd0  b 0x7101c9dc74
7101c9dbd4  mov w8,wzr
7101c9dbd8  adrp x9,0x710523d000
7101c9dbdc  add x9,x9,#0x9c8
7101c9dbe0  strb w8,[x19, #0x260]
7101c9dbe4  stp x9,xzr,[x29, #-0x78]
7101c9dbe8  cbz x21,0x7101c9dbf4
7101c9dbec  mov x0,x21
7101c9dbf0  bl 0x710392eb40
7101c9dbf4  ldr w1,[x19, #0x264]
7101c9dbf8  mov x0,x19
7101c9dbfc  bl 0x7101ca1830
7101c9dc00  ldr w1,[x19, #0x264]
7101c9dc04  mov x0,x20
7101c9dc08  mov w2,wzr
7101c9dc0c  bl 0x7103771a80
7101c9dc10  ldr x0,[x19, #0x168]
7101c9dc14  ldr x8,[x0]
7101c9dc18  ldr x8,[x8, #0x70]
7101c9dc1c  mov w1,#0x1
7101c9dc20  blr x8
7101c9dc24  ldr d8,[sp, #0x130]
7101c9dc28  ldp x29,x30,[sp, #0x190]
7101c9dc2c  ldp x20,x19,[sp, #0x180]
7101c9dc30  ldp x22,x21,[sp, #0x170]
7101c9dc34  ldp x24,x23,[sp, #0x160]
7101c9dc38  ldp x26,x25,[sp, #0x150]
7101c9dc3c  ldp x28,x27,[sp, #0x140]
7101c9dc40  add sp,sp,#0x1a0
7101c9dc44  ret
7101c9dc48  mov x8,#0x650000000000
7101c9dc4c  movk x8,#0x87, LSL #48
7101c9dc50  strb wzr,[sp, #0x78]
7101c9dc54  stp xzr,x8,[sp, #0x68]
7101c9dc58  mov x8,#-0x1
7101c9dc5c  stp x8,xzr,[sp, #0x80]
7101c9dc60  adrp x8,0x7104f73000
7101c9dc64  add x8,x8,#0xd50
7101c9dc68  str wzr,[sp, #0x58]
7101c9dc6c  str xzr,[sp, #0x90]
7101c9dc70  str x8,[sp, #0x60]
7101c9dc74  str xzr,[sp, #0x68]
7101c9dc78  strb wzr,[sp, #0x78]
7101c9dc7c  ldrh w8,[x19, #0x254]
7101c9dc80  ldrh w9,[x19, #0x240]
7101c9dc84  bic w10,w8,w9
7101c9dc88  orr w9,w9,w8
7101c9dc8c  tst w27,#0x1
7101c9dc90  csel w1,w10,w9,ne
7101c9dc94  and w9,w1,#0xffff
7101c9dc98  cmp w9,w8
7101c9dc9c  strb w23,[x19, #0x260]
7101c9dca0  b.eq 0x7101c9dcbc
7101c9dca4  mov x0,x19
7101c9dca8  strh w1,[x19, #0x254]
7101c9dcac  bl 0x7101c9f130
7101c9dcb0  ldr w1,[x19, #0x264]
7101c9dcb4  mov x0,x19
7101c9dcb8  bl 0x7101ca1830
7101c9dcbc  ldur x0,[x29, #-0x70]
7101c9dcc0  stp x28,xzr,[x29, #-0x78]
7101c9dcc4  cbz x0,0x7101c9dccc
7101c9dcc8  bl 0x710392eb40
7101c9dccc  tbz w21,#0x0,0x7101c9dc24
7101c9dcd0  adrp x8,0x710532f000
7101c9dcd4  ldr x8,[x8, #0x8d0]
7101c9dcd8  ldr x0,[x8, #0x8]
7101c9dcdc  ldrb w8,[x0, #0x191]
7101c9dce0  cbnz w8,0x7101c9dd60
7101c9dce4  mov x20,#0x70e6
7101c9dce8  movk x20,#0x6a20, LSL #16
7101c9dcec  movk x20,#0x10, LSL #32
7101c9dcf0  mov w2,#0x4
7101c9dcf4  mov x1,x20
7101c9dcf8  bl 0x7103313f20
7101c9dcfc  tbz w0,#0x0,0x7101c9dd60
7101c9dd00  add x0,sp,#0x8
7101c9dd04  mov x1,x20
7101c9dd08  bl 0x71024076d0
7101c9dd0c  ldr x8,[sp, #0x18]
7101c9dd10  adrp x9,0x7104f73000
7101c9dd14  add x9,x9,#0xd50
7101c9dd18  str x9,[sp, #0x10]
7101c9dd1c  cbz x8,0x7101c9dd8c
7101c9dd20  adrp x8,0x7106dd5000
7101c9dd24  ldrb w8,[x8, #0x3a8]
7101c9dd28  cmp w8,#0x1
7101c9dd2c  b.ne 0x7101c9dd8c
7101c9dd30  adrp x9,0x7106dd5000
7101c9dd34  ldr w8,[sp, #0x20]
7101c9dd38  ldr w9,[x9, #0x3ac]
7101c9dd3c  cmp w8,w9
7101c9dd40  b.ne 0x7101c9dd8c
7101c9dd44  ldr x8,[sp, #0x18]
7101c9dd48  ldr wzr,[x8, #0x38]!
7101c9dd4c  ldaxr w9,[x8]
7101c9dd50  sub w9,w9,#0x1
7101c9dd54  stlxr w10,w9,[x8]
7101c9dd58  cbnz w10,0x7101c9dd4c
7101c9dd5c  b 0x7101c9dd8c
7101c9dd60  mov x8,#0x650000000000
7101c9dd64  movk x8,#0x87, LSL #48
7101c9dd68  strb wzr,[sp, #0x28]
7101c9dd6c  stp xzr,x8,[sp, #0x18]
7101c9dd70  mov x8,#-0x1
7101c9dd74  stp x8,xzr,[sp, #0x30]
7101c9dd78  adrp x8,0x7104f73000
7101c9dd7c  add x8,x8,#0xd50
7101c9dd80  str wzr,[sp, #0x8]
7101c9dd84  str xzr,[sp, #0x40]
7101c9dd88  str x8,[sp, #0x10]
7101c9dd8c  str xzr,[sp, #0x18]
7101c9dd90  strb wzr,[sp, #0x28]
7101c9dd94  ldrh w1,[x19, #0x254]
7101c9dd98  mov x0,x19
7101c9dd9c  mov w2,wzr
7101c9dda0  bl 0x7101c9f350
7101c9dda4  ldr w1,[x19, #0x264]
7101c9dda8  mov x0,x19
7101c9ddac  bl 0x7101ca1830
7101c9ddb0  b 0x7101c9dc24
7101c9ddb4  ldur x0,[x29, #-0x58]
7101c9ddb8  bl 0x71039c1330
