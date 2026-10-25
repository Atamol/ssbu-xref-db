// addr:      71001ec430
// offset:    0x1ec430
// name:      FUN_71001ec430
// mangled:   
// size:      864

71001ec430  sub sp,sp,#0x140
71001ec434  stp x28,x27,[sp, #0xe0]
71001ec438  stp x26,x25,[sp, #0xf0]
71001ec43c  stp x24,x23,[sp, #0x100]
71001ec440  stp x22,x21,[sp, #0x110]
71001ec444  stp x20,x19,[sp, #0x120]
71001ec448  stp x29,x30,[sp, #0x130]
71001ec44c  add x29,sp,#0x130
71001ec450  adrp x8,0x71052a4000
71001ec454  ldr x8,[x8, #0xda8]
71001ec458  adrp x22,0x71052a4000
71001ec45c  ldrb w8,[x8]
71001ec460  ldr x22,[x22, #0xdb0]
71001ec464  mov x19,x1
71001ec468  mov x20,x0
71001ec46c  add x21,x22,#0x28
71001ec470  cbz w8,0x71001ec4ac
71001ec474  adrp x8,0x71052a4000
71001ec478  ldr x8,[x8, #0xdb8]
71001ec47c  ldr x0,[x8]
71001ec480  bl 0x7101717960
71001ec484  ldr w8,[x0]
71001ec488  cbz w8,0x71001ec4ac
71001ec48c  ldr x10,[x22, #0xa0]
71001ec490  ldp x9,x10,[x10]
71001ec494  sub x10,x10,x9
71001ec498  asr x10,x10,#0x3
71001ec49c  cmp x10,x8
71001ec4a0  b.ls 0x71001ec4c4
71001ec4a4  ldr x8,[x9, x8, LSL #0x3]
71001ec4a8  add x21,x8,#0x20
71001ec4ac  ldr x8,[x21]
71001ec4b0  cbz x8,0x71001ec4dc
71001ec4b4  ldr x8,[x8, #0x10]
71001ec4b8  cbz x8,0x71001ec4dc
71001ec4bc  ldr x0,[x8, #0x10]
71001ec4c0  b 0x71001ec4e0
71001ec4c4  adrp x0,0x71042c4000
71001ec4c8  add x0,x0,#0x35f
71001ec4cc  mov w1,#0x47
71001ec4d0  orr w2,wzr,#0xe0000003
71001ec4d4  mov w3,wzr
71001ec4d8  bl 0x71001b1300
71001ec4dc  mov x0,xzr
71001ec4e0  ldr x8,[x0, #0x78]!
71001ec4e4  ldr x8,[x8, #0x10]
71001ec4e8  str x0,[sp]
71001ec4ec  blr x8
71001ec4f0  ldr x25,[x20, #0x150]
71001ec4f4  add x23,x20,#0x158
71001ec4f8  cmp x23,x25
71001ec4fc  b.eq 0x71001ec760
71001ec500  add x8,x20,#0x150
71001ec504  str x8,[sp, #0x30]
71001ec508  add x8,x20,#0x78
71001ec50c  str x8,[sp, #0x28]
71001ec510  add x8,sp,#0x38
71001ec514  add x9,x8,#0x8
71001ec518  str x9,[sp, #0x20]
71001ec51c  add x9,x8,#0x50
71001ec520  add x24,x8,#0x78
71001ec524  str x9,[sp, #0x18]
71001ec528  add x9,x8,#0x38
71001ec52c  add x8,x8,#0x20
71001ec530  stp x8,x9,[sp, #0x8]
71001ec534  adrp x8,0x71052a6000
71001ec538  ldr x8,[x8, #0xf70]
71001ec53c  add x26,x8,#0x10
71001ec540  adrp x8,0x71052a6000
71001ec544  ldr x8,[x8, #0xe70]
71001ec548  add x27,x8,#0x10
71001ec54c  ldr x8,[x25, #0x28]
71001ec550  ldr x9,[x19]
71001ec554  cmp x8,x9
71001ec558  b.cs 0x71001ec6c4
71001ec55c  adrp x8,0x71052a6000
71001ec560  ldr x8,[x8, #0xfc8]
71001ec564  ldr w2,[x8]
71001ec568  add x1,x25,#0x30
71001ec56c  add x0,sp,#0x38
71001ec570  orr w4,wzr,#0xc
71001ec574  mov w3,#0x5f90
71001ec578  movk w3,#0x1, LSL #16
71001ec57c  bl 0x71001f5fe0
71001ec580  mov w0,#0xb0
71001ec584  bl 0x71001b1820
71001ec588  mov x28,x0
71001ec58c  mov x8,x0
71001ec590  str xzr,[x0]
71001ec594  str x26,[x0, #0x10]
71001ec598  mov x21,x0
71001ec59c  str x27,[x28, #0x18]!
71001ec5a0  str xzr,[x8, #0x38]!
71001ec5a4  str x8,[x0, #0x30]
71001ec5a8  mov x8,x0
71001ec5ac  str xzr,[x8, #0x50]!
71001ec5b0  stp xzr,x8,[x0, #0x40]
71001ec5b4  mov x8,x0
71001ec5b8  str xzr,[x8, #0x68]!
71001ec5bc  stp xzr,x8,[x0, #0x58]
71001ec5c0  mov w8,#0x1
71001ec5c4  strh w8,[x0, #0x80]
71001ec5c8  strb wzr,[x0, #0x82]
71001ec5cc  stp xzr,xzr,[x0, #0x70]
71001ec5d0  mov w0,#0x90
71001ec5d4  bl 0x71001af850
71001ec5d8  mov x22,x0
71001ec5dc  cbz x0,0x71001ec5e8
71001ec5e0  mov x0,x22
71001ec5e4  bl 0x71001beb40
71001ec5e8  ldr x1,[sp, #0x20]
71001ec5ec  mov x0,x28
71001ec5f0  str x22,[x21, #0x20]
71001ec5f4  bl 0x71001f1f40
71001ec5f8  ldr x8,[x24]
71001ec5fc  str x8,[x21, #0x88]
71001ec600  ldr x10,[x24, #0x18]
71001ec604  ldp x8,x9,[x24, #0x8]
71001ec608  ldr w11,[x24, #0x20]
71001ec60c  stp x9,x10,[x21, #0x98]
71001ec610  str x8,[x21, #0x90]
71001ec614  ldr x8,[sp, #0x28]
71001ec618  str w11,[x21, #0xa8]
71001ec61c  str x8,[x21, #0x8]
71001ec620  ldr x8,[x20, #0x78]
71001ec624  str x8,[x21]
71001ec628  str x21,[x8, #0x8]
71001ec62c  ldr x8,[x20, #0x88]
71001ec630  add x8,x8,#0x1
71001ec634  str x21,[x20, #0x78]
71001ec638  str x8,[x20, #0x88]
71001ec63c  adrp x8,0x71052a6000
71001ec640  ldr x8,[x8, #0xf70]
71001ec644  add x8,x8,#0x10
71001ec648  str x8,[sp, #0x38]
71001ec64c  adrp x8,0x71052a6000
71001ec650  ldr x8,[x8, #0xe70]
71001ec654  add x8,x8,#0x10
71001ec658  str x8,[sp, #0x40]
71001ec65c  ldr x8,[sp, #0xa0]
71001ec660  cbz x8,0x71001ec674
71001ec664  sub x0,x8,#0x4
71001ec668  bl 0x71001b1870
71001ec66c  str xzr,[sp, #0xa0]
71001ec670  strb wzr,[sp, #0xa9]
71001ec674  ldr x0,[sp, #0x48]
71001ec678  cbz x0,0x71001ec688
71001ec67c  ldr x8,[x0]
71001ec680  ldr x8,[x8, #0x8]
71001ec684  blr x8
71001ec688  ldr x1,[sp, #0x90]
71001ec68c  ldr x0,[sp, #0x18]
71001ec690  bl 0x7101711670
71001ec694  ldr x1,[sp, #0x78]
71001ec698  ldr x0,[sp, #0x10]
71001ec69c  bl 0x7101711670
71001ec6a0  ldr x1,[sp, #0x60]
71001ec6a4  ldr x0,[sp, #0x8]
71001ec6a8  bl 0x7100219ca0
71001ec6ac  ldr x8,[x25, #0x8]
71001ec6b0  cbz x8,0x71001ec6dc
71001ec6b4  mov x21,x8
71001ec6b8  ldr x8,[x8]
71001ec6bc  cbnz x8,0x71001ec6b4
71001ec6c0  b 0x71001ec708
71001ec6c4  ldr x8,[x25, #0x8]
71001ec6c8  cbz x8,0x71001ec724
71001ec6cc  mov x25,x8
71001ec6d0  ldr x8,[x8]
71001ec6d4  cbnz x8,0x71001ec6cc
71001ec6d8  b 0x71001ec718
71001ec6dc  mov x8,x25
71001ec6e0  ldr x21,[x8, #0x10]!
71001ec6e4  ldr x9,[x21]
71001ec6e8  cmp x9,x25
71001ec6ec  b.eq 0x71001ec708
71001ec6f0  ldr x9,[x8]
71001ec6f4  mov x8,x9
71001ec6f8  ldr x21,[x8, #0x10]!
71001ec6fc  ldr x10,[x21]
71001ec700  cmp x10,x9
71001ec704  b.ne 0x71001ec6f0
71001ec708  ldr x0,[sp, #0x30]
71001ec70c  mov x1,x25
71001ec710  bl 0x710021b5f0
71001ec714  mov x25,x21
71001ec718  cmp x23,x25
71001ec71c  b.ne 0x71001ec54c
71001ec720  b 0x71001ec760
71001ec724  mov x8,x25
71001ec728  ldr x9,[x8, #0x10]!
71001ec72c  ldr x10,[x9]
71001ec730  cmp x10,x25
71001ec734  b.eq 0x71001ec754
71001ec738  ldr x9,[x8]
71001ec73c  mov x8,x9
71001ec740  ldr x25,[x8, #0x10]!
71001ec744  ldr x10,[x25]
71001ec748  cmp x10,x9
71001ec74c  b.ne 0x71001ec738
71001ec750  b 0x71001ec718
71001ec754  mov x25,x9
71001ec758  cmp x23,x25
71001ec75c  b.ne 0x71001ec54c
71001ec760  ldr x0,[sp]
71001ec764  ldr x8,[x0]
71001ec768  ldr x8,[x8, #0x20]
71001ec76c  blr x8
71001ec770  ldp x29,x30,[sp, #0x130]
71001ec774  ldp x20,x19,[sp, #0x120]
71001ec778  ldp x22,x21,[sp, #0x110]
71001ec77c  ldp x24,x23,[sp, #0x100]
71001ec780  ldp x26,x25,[sp, #0xf0]
71001ec784  ldp x28,x27,[sp, #0xe0]
71001ec788  add sp,sp,#0x140
71001ec78c  ret
