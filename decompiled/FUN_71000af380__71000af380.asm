// addr:      71000af380
// offset:    0xaf380
// name:      FUN_71000af380
// mangled:   
// size:      1000

71000af380  sub sp,sp,#0xa0
71000af384  stp x28,x27,[sp, #0x40]
71000af388  stp x26,x25,[sp, #0x50]
71000af38c  stp x24,x23,[sp, #0x60]
71000af390  stp x22,x21,[sp, #0x70]
71000af394  stp x20,x19,[sp, #0x80]
71000af398  stp x29,x30,[sp, #0x90]
71000af39c  add x29,sp,#0x90
71000af3a0  adrp x20,0x71052a4000
71000af3a4  ldr x20,[x20, #0xbc0]
71000af3a8  ldr x8,[x20]
71000af3ac  cbz x8,0x71000af3d8
71000af3b0  ldp x29,x30,[sp, #0x90]
71000af3b4  adrp x0,0x71042f6000
71000af3b8  add x0,x0,#0xe2d
71000af3bc  ldp x20,x19,[sp, #0x80]
71000af3c0  ldp x22,x21,[sp, #0x70]
71000af3c4  ldp x24,x23,[sp, #0x60]
71000af3c8  ldp x26,x25,[sp, #0x50]
71000af3cc  ldp x28,x27,[sp, #0x40]
71000af3d0  add sp,sp,#0xa0
71000af3d4  b 0x7100093660
71000af3d8  adrp x8,0x71052a4000
71000af3dc  ldr x8,[x8, #0xbc8]
71000af3e0  mov w9,#0x20
71000af3e4  str w9,[x8]
71000af3e8  ldr x8,[x1]
71000af3ec  ldr x9,[x8, #0x10]
71000af3f0  mov w8,#0x1500
71000af3f4  mov x19,x0
71000af3f8  mov w2,#0x80
71000af3fc  mov x0,x1
71000af400  mov x1,x8
71000af404  blr x9
71000af408  mov w23,wzr
71000af40c  mov w25,#0x15
71000af410  mov w26,#0x2a
71000af414  mov w27,#0x1
71000af418  str x0,[x20]
71000af41c  mov x28,xzr
71000af420  mov w20,wzr
71000af424  add x8,x0,#0xa80
71000af428  str x8,[sp]
71000af42c  add x22,x0,x28
71000af430  add x21,x22,#0x30
71000af434  mov x24,x0
71000af438  mov x8,#-0x1
71000af43c  mov x0,x21
71000af440  stur xzr,[sp, #0x15]
71000af444  stp xzr,xzr,[sp, #0x8]
71000af448  str x8,[x22, #0x28]
71000af44c  bl 0x7100038120
71000af450  strb wzr,[x22]
71000af454  str xzr,[x22, #0x8]
71000af458  add x0,sp,#0x20
71000af45c  strb w20,[x22, #0x10]
71000af460  strb wzr,[x22, #0x11]
71000af464  strb w23,[x22, #0x12]
71000af468  ldp x8,x9,[sp, #0x8]
71000af46c  ldur x10,[sp, #0x15]
71000af470  str x10,[x22, #0x20]
71000af474  stur x9,[x22, #0x1b]
71000af478  stur x8,[x22, #0x13]
71000af47c  stp xzr,xzr,[sp, #0x30]
71000af480  stp xzr,xzr,[sp, #0x20]
71000af484  bl 0x7100031140
71000af488  ldrb w8,[x22, #0x12]
71000af48c  cmp w8,#0x0
71000af490  csel w8,w26,w25,eq
71000af494  strh w8,[sp, #0x26]
71000af498  ldrb w8,[x22, #0x10]
71000af49c  cmp w8,#0x4
71000af4a0  b.cs 0x71000af4b8
71000af4a4  lsl w8,w8,#0x3
71000af4a8  mov w9,#0x1
71000af4ac  movk w9,#0x402, LSL #16
71000af4b0  lsr w8,w9,w8
71000af4b4  strb w8,[sp, #0x20]
71000af4b8  ldrb w8,[x22, #0x11]
71000af4bc  cmp w8,#0x3
71000af4c0  b.hi 0x71000af4d8
71000af4c4  lsl w8,w8,#0x3
71000af4c8  mov w9,#0x1
71000af4cc  movk w9,#0x402, LSL #16
71000af4d0  lsr w8,w9,w8
71000af4d4  strb w8,[sp, #0x21]
71000af4d8  add x2,sp,#0x20
71000af4dc  mov x0,x21
71000af4e0  mov x1,x19
71000af4e4  strb w27,[sp, #0x22]
71000af4e8  bl 0x7100038160
71000af4ec  add x21,x22,#0xd8
71000af4f0  mov x8,#-0x1
71000af4f4  mov x0,x21
71000af4f8  strb w27,[x22]
71000af4fc  stur xzr,[sp, #0x15]
71000af500  stp xzr,xzr,[sp, #0x8]
71000af504  str x8,[x22, #0xd0]
71000af508  bl 0x7100038120
71000af50c  add x0,sp,#0x20
71000af510  strb wzr,[x22, #0xa8]
71000af514  str xzr,[x22, #0xb0]
71000af518  strb w20,[x22, #0xb8]
71000af51c  strb w27,[x22, #0xb9]
71000af520  strb w23,[x22, #0xba]
71000af524  str xzr,[x22, #0xc8]
71000af528  stur xzr,[x22, #0xc3]
71000af52c  stur xzr,[x22, #0xbb]
71000af530  stp xzr,xzr,[sp, #0x30]
71000af534  stp xzr,xzr,[sp, #0x20]
71000af538  bl 0x7100031140
71000af53c  ldrb w8,[x22, #0xba]
71000af540  cmp w8,#0x0
71000af544  csel w8,w26,w25,eq
71000af548  strh w8,[sp, #0x26]
71000af54c  ldrb w8,[x22, #0xb8]
71000af550  cmp w8,#0x4
71000af554  b.cs 0x71000af56c
71000af558  lsl w8,w8,#0x3
71000af55c  mov w9,#0x1
71000af560  movk w9,#0x402, LSL #16
71000af564  lsr w8,w9,w8
71000af568  strb w8,[sp, #0x20]
71000af56c  ldrb w8,[x22, #0xb9]
71000af570  cmp w8,#0x3
71000af574  b.hi 0x71000af58c
71000af578  lsl w8,w8,#0x3
71000af57c  mov w9,#0x1
71000af580  movk w9,#0x402, LSL #16
71000af584  lsr w8,w9,w8
71000af588  strb w8,[sp, #0x21]
71000af58c  add x2,sp,#0x20
71000af590  mov x0,x21
71000af594  mov x1,x19
71000af598  strb w27,[sp, #0x22]
71000af59c  bl 0x7100038160
71000af5a0  add x21,x22,#0x180
71000af5a4  mov x8,#-0x1
71000af5a8  mov x0,x21
71000af5ac  strb w27,[x22, #0xa8]
71000af5b0  stur xzr,[sp, #0x15]
71000af5b4  stp xzr,xzr,[sp, #0x8]
71000af5b8  str x8,[x22, #0x178]
71000af5bc  bl 0x7100038120
71000af5c0  mov w8,#0x2
71000af5c4  strb w8,[x22, #0x161]
71000af5c8  add x8,x22,#0x163
71000af5cc  add x9,x22,#0x16b
71000af5d0  add x0,sp,#0x20
71000af5d4  strb wzr,[x22, #0x150]
71000af5d8  str xzr,[x22, #0x158]
71000af5dc  strb w20,[x22, #0x160]
71000af5e0  strb w23,[x22, #0x162]
71000af5e4  str xzr,[x22, #0x170]
71000af5e8  str xzr,[x9]
71000af5ec  str xzr,[x8]
71000af5f0  stp xzr,xzr,[sp, #0x30]
71000af5f4  stp xzr,xzr,[sp, #0x20]
71000af5f8  bl 0x7100031140
71000af5fc  ldrb w8,[x22, #0x162]
71000af600  cmp w8,#0x0
71000af604  csel w8,w26,w25,eq
71000af608  strh w8,[sp, #0x26]
71000af60c  ldrb w8,[x22, #0x160]
71000af610  cmp w8,#0x3
71000af614  b.hi 0x71000af62c
71000af618  lsl w8,w8,#0x3
71000af61c  mov w9,#0x1
71000af620  movk w9,#0x402, LSL #16
71000af624  lsr w8,w9,w8
71000af628  strb w8,[sp, #0x20]
71000af62c  ldrb w8,[x22, #0x161]
71000af630  cmp w8,#0x3
71000af634  b.hi 0x71000af64c
71000af638  lsl w8,w8,#0x3
71000af63c  mov w9,#0x1
71000af640  movk w9,#0x402, LSL #16
71000af644  lsr w8,w9,w8
71000af648  strb w8,[sp, #0x21]
71000af64c  add x2,sp,#0x20
71000af650  mov x0,x21
71000af654  mov x1,x19
71000af658  strb w27,[sp, #0x22]
71000af65c  bl 0x7100038160
71000af660  add x21,x22,#0x228
71000af664  mov x8,#-0x1
71000af668  mov x0,x21
71000af66c  strb w27,[x22, #0x150]
71000af670  stur xzr,[sp, #0x15]
71000af674  stp xzr,xzr,[sp, #0x8]
71000af678  str x8,[x22, #0x220]
71000af67c  bl 0x7100038120
71000af680  orr w8,wzr,#0x3
71000af684  strb w8,[x22, #0x209]
71000af688  add x8,x22,#0x20b
71000af68c  add x9,x22,#0x213
71000af690  add x0,sp,#0x20
71000af694  strb wzr,[x22, #0x1f8]
71000af698  str xzr,[x22, #0x200]
71000af69c  strb w20,[x22, #0x208]
71000af6a0  strb w23,[x22, #0x20a]
71000af6a4  str xzr,[x22, #0x218]
71000af6a8  str xzr,[x9]
71000af6ac  str xzr,[x8]
71000af6b0  stp xzr,xzr,[sp, #0x30]
71000af6b4  stp xzr,xzr,[sp, #0x20]
71000af6b8  bl 0x7100031140
71000af6bc  ldrb w8,[x22, #0x20a]
71000af6c0  cmp w8,#0x0
71000af6c4  csel w8,w26,w25,eq
71000af6c8  strh w8,[sp, #0x26]
71000af6cc  ldrb w8,[x22, #0x208]
71000af6d0  cmp w8,#0x3
71000af6d4  b.hi 0x71000af6ec
71000af6d8  lsl w8,w8,#0x3
71000af6dc  mov w9,#0x1
71000af6e0  movk w9,#0x402, LSL #16
71000af6e4  lsr w8,w9,w8
71000af6e8  strb w8,[sp, #0x20]
71000af6ec  ldrb w8,[x22, #0x209]
71000af6f0  cmp w8,#0x3
71000af6f4  b.hi 0x71000af70c
71000af6f8  lsl w8,w8,#0x3
71000af6fc  mov w9,#0x1
71000af700  movk w9,#0x402, LSL #16
71000af704  lsr w8,w9,w8
71000af708  strb w8,[sp, #0x21]
71000af70c  add x2,sp,#0x20
71000af710  mov x0,x21
71000af714  mov x1,x19
71000af718  strb w27,[sp, #0x22]
71000af71c  bl 0x7100038160
71000af720  add x28,x28,#0x2a0
71000af724  add w20,w20,#0x1
71000af728  mov x0,x24
71000af72c  cmp w28,#0xa80
71000af730  strb w27,[x22, #0x1f8]
71000af734  b.ne 0x71000af42c
71000af738  ldr x0,[sp]
71000af73c  add w23,w23,#0x1
71000af740  cmp w23,#0x2
71000af744  b.ne 0x71000af41c
71000af748  ldp x29,x30,[sp, #0x90]
71000af74c  ldp x20,x19,[sp, #0x80]
71000af750  ldp x22,x21,[sp, #0x70]
71000af754  ldp x24,x23,[sp, #0x60]
71000af758  ldp x26,x25,[sp, #0x50]
71000af75c  ldp x28,x27,[sp, #0x40]
71000af760  add sp,sp,#0xa0
71000af764  ret
