// addr:      71035ec290
// offset:    0x35ec290
// name:      FUN_71035ec290
// mangled:   
// size:      1332

71035ec290  sub sp,sp,#0xc0
71035ec294  stp x28,x27,[sp, #0x60]
71035ec298  stp x26,x25,[sp, #0x70]
71035ec29c  stp x24,x23,[sp, #0x80]
71035ec2a0  stp x22,x21,[sp, #0x90]
71035ec2a4  stp x20,x19,[sp, #0xa0]
71035ec2a8  stp x29,x30,[sp, #0xb0]
71035ec2ac  add x29,sp,#0xb0
71035ec2b0  mov x20,x0
71035ec2b4  ldr w0,[x2]
71035ec2b8  adrp x1,0x7104328000
71035ec2bc  add x1,x1,#0x86f
71035ec2c0  mov x21,x2
71035ec2c4  bl 0x71035c25f0
71035ec2c8  mov x19,x0
71035ec2cc  orr w8,wzr,#0xffffff
71035ec2d0  cmp w19,w8
71035ec2d4  b.eq 0x71035ec798
71035ec2d8  adrp x27,0x7105332000
71035ec2dc  ldr x0,[x27, #0xf20]
71035ec2e0  mov w1,w19
71035ec2e4  bl 0x7103540a00
71035ec2e8  ldr x8,[x27, #0xf20]
71035ec2ec  ldr w9,[x8, #0x18]
71035ec2f0  cmp w9,w19
71035ec2f4  b.ls 0x71035ec348
71035ec2f8  ldr x9,[x8, #0x8]
71035ec2fc  add x10,x9,w19, UXTW  #0x3
71035ec300  ldrb w10,[x10, #0x4]
71035ec304  cbz w10,0x71035ec348
71035ec308  and x10,x19,#0xffffffff
71035ec30c  lsl x10,x10,#0x3
71035ec310  ldr w9,[x9, x10, LSL #0x0]
71035ec314  orr w10,wzr,#0xffffff
71035ec318  cmp w9,w10
71035ec31c  b.eq 0x71035ec348
71035ec320  ldr w10,[x8, #0x1c]
71035ec324  cmp w10,w9
71035ec328  b.ls 0x71035ec348
71035ec32c  ldr x8,[x8, #0x10]
71035ec330  orr w10,wzr,#0x18
71035ec334  madd x8,x9,x10,x8
71035ec338  ldrb w9,[x8, #0xc]
71035ec33c  cmp w9,#0x0
71035ec340  ccmp x8,#0x0,#0x4,ne
71035ec344  b.ne 0x71035ec35c
71035ec348  mov x8,xzr
71035ec34c  ldr x9,[x8, #0x20]!
71035ec350  tbnz w9,#0x0,0x71035ec368
71035ec354  add x1,x8,x9
71035ec358  b 0x71035ec380
71035ec35c  ldr x8,[x8]
71035ec360  ldr x9,[x8, #0x20]!
71035ec364  tbz w9,#0x0,0x71035ec354
71035ec368  and x8,x9,#-0x2
71035ec36c  ldrb w9,[x8]
71035ec370  tbnz w9,#0x0,0x71035ec37c
71035ec374  add x1,x8,#0x1
71035ec378  b 0x71035ec380
71035ec37c  ldr x1,[x8, #0x10]
71035ec380  ldr w0,[x21]
71035ec384  bl 0x71035c25f0
71035ec388  mov x21,x0
71035ec38c  orr w8,wzr,#0xffffff
71035ec390  cmp w21,w8
71035ec394  b.eq 0x71035ec78c
71035ec398  ldr x0,[x27, #0xf20]
71035ec39c  mov w1,w21
71035ec3a0  bl 0x7103540a00
71035ec3a4  ldr x8,[x27, #0xf20]
71035ec3a8  ldr w9,[x8, #0x18]
71035ec3ac  cmp w9,w21
71035ec3b0  b.ls 0x71035ec40c
71035ec3b4  ldr x9,[x8, #0x8]
71035ec3b8  add x10,x9,w21, UXTW  #0x3
71035ec3bc  ldrb w10,[x10, #0x4]
71035ec3c0  cbz w10,0x71035ec40c
71035ec3c4  and x10,x21,#0xffffffff
71035ec3c8  lsl x10,x10,#0x3
71035ec3cc  ldr w9,[x9, x10, LSL #0x0]
71035ec3d0  orr w10,wzr,#0xffffff
71035ec3d4  cmp w9,w10
71035ec3d8  b.eq 0x71035ec40c
71035ec3dc  ldr w10,[x8, #0x1c]
71035ec3e0  cmp w10,w9
71035ec3e4  b.ls 0x71035ec40c
71035ec3e8  ldr x8,[x8, #0x10]
71035ec3ec  orr w10,wzr,#0x18
71035ec3f0  madd x8,x9,x10,x8
71035ec3f4  ldrb w9,[x8, #0xc]
71035ec3f8  mov x22,xzr
71035ec3fc  cbz w9,0x71035ec410
71035ec400  cbz x8,0x71035ec410
71035ec404  ldr x22,[x8]
71035ec408  b 0x71035ec410
71035ec40c  mov x22,xzr
71035ec410  ldr x8,[x27, #0xf20]
71035ec414  ldr x9,[x8, #0x78]
71035ec418  ldr x23,[x9]
71035ec41c  ldr x11,[x23, #0x40]
71035ec420  ldr w9,[x11, #0x4]
71035ec424  cmp w9,w21
71035ec428  b.ls 0x71035ec780
71035ec42c  ldr x9,[x23, #0x60]
71035ec430  and x10,x21,#0xffffffff
71035ec434  lsl x12,x10,#0x5
71035ec438  ldr x9,[x9, x12, LSL #0x0]
71035ec43c  orr w12,wzr,#0xffffff
71035ec440  lsr x9,x9,#0x28
71035ec444  cmp w9,w12
71035ec448  b.eq 0x71035ec780
71035ec44c  ldr w11,[x11, #0x8]
71035ec450  cmp w11,w9
71035ec454  b.ls 0x71035ec780
71035ec458  ldp x11,x8,[x8, #0x8]
71035ec45c  lsl x10,x10,#0x3
71035ec460  ldr w10,[x11, x10, LSL #0x0]
71035ec464  orr w11,wzr,#0x18
71035ec468  madd x8,x10,x11,x8
71035ec46c  ldr x10,[x23, #0x90]
71035ec470  ldr w2,[x8, #0x10]
71035ec474  ldr x8,[x23, #0x68]
71035ec478  add x8,x8,w9, UXTW  #0x3
71035ec47c  ldr w8,[x8, #0x4]
71035ec480  and x8,x8,#0xffffff
71035ec484  add x1,x10,x8, LSL #0x4
71035ec488  mov x0,x23
71035ec48c  bl 0x7103541e10
71035ec490  cbz x22,0x71035ec780
71035ec494  ldr w8,[x0, #0x4]
71035ec498  ldr x9,[x23, #0xa0]
71035ec49c  add x8,x9,x8, LSL #0x4
71035ec4a0  ldr w8,[x8, #0x8]
71035ec4a4  cbz w8,0x71035ec780
71035ec4a8  add x0,sp,#0x38
71035ec4ac  mov x1,x22
71035ec4b0  bl 0x7103892d30
71035ec4b4  ldr x8,[sp, #0x40]
71035ec4b8  stp xzr,xzr,[sp, #0x48]
71035ec4bc  str xzr,[sp, #0x40]
71035ec4c0  cbz x8,0x71035ec4d0
71035ec4c4  ldr x9,[x8, #0x8]
71035ec4c8  ldr x10,[x9]
71035ec4cc  b 0x71035ec4d8
71035ec4d0  mov x9,xzr
71035ec4d4  mov x10,xzr
71035ec4d8  ldp x0,x11,[x20, #0x40]
71035ec4dc  stp x8,x9,[x20, #0x40]
71035ec4e0  ldr x8,[x20, #0x50]
71035ec4e4  str x10,[x20, #0x50]
71035ec4e8  cbz x11,0x71035ec508
71035ec4ec  cbz x0,0x71035ec508
71035ec4f0  ldr x9,[x11]
71035ec4f4  cmp x9,x8
71035ec4f8  b.ne 0x71035ec508
71035ec4fc  ldr x8,[x0]
71035ec500  ldr x8,[x8, #0x8]
71035ec504  blr x8
71035ec508  adrp x8,0x7105232000
71035ec50c  add x8,x8,#0xd28
71035ec510  str x8,[sp, #0x38]
71035ec514  ldr x8,[x20, #0x48]
71035ec518  cbz x8,0x71035ec554
71035ec51c  ldr x8,[x8]
71035ec520  ldr x9,[x20, #0x50]
71035ec524  cmp x8,x9
71035ec528  b.ne 0x71035ec554
71035ec52c  ldr x9,[x20, #0x40]
71035ec530  cbz x9,0x71035ec554
71035ec534  ldr x10,[x9, #0x8]
71035ec538  add x8,x20,#0x18
71035ec53c  cbz x10,0x71035ec558
71035ec540  str x9,[x20, #0x20]
71035ec544  ldr x9,[x9, #0x8]
71035ec548  str x9,[x20, #0x28]
71035ec54c  ldr x9,[x9]
71035ec550  b 0x71035ec560
71035ec554  add x8,x20,#0x18
71035ec558  mov x9,xzr
71035ec55c  stp xzr,xzr,[x20, #0x20]
71035ec560  str x9,[x8, #0x18]
71035ec564  ldr x8,[x8, #0x8]
71035ec568  mov w9,#0x4
71035ec56c  str w9,[x8, #0x1d8]
71035ec570  ldr x8,[x20, #0x48]
71035ec574  cbz x8,0x71035ec590
71035ec578  ldr x8,[x8]
71035ec57c  ldr x9,[x20, #0x50]
71035ec580  cmp x8,x9
71035ec584  b.ne 0x71035ec590
71035ec588  ldr x28,[x20, #0x40]
71035ec58c  b 0x71035ec594
71035ec590  mov x28,xzr
71035ec594  mov x9,x20
71035ec598  ldr x8,[x9, #0xf0]!
71035ec59c  str x9,[sp, #0x8]
71035ec5a0  str x8,[x9, #0x8]
71035ec5a4  ldp x8,x9,[x28, #0x48]
71035ec5a8  cmp x9,x8
71035ec5ac  b.eq 0x71035ec780
71035ec5b0  mov x22,xzr
71035ec5b4  mov x26,xzr
71035ec5b8  mov w24,#0x55
71035ec5bc  orr x25,xzr,#0x100000000
71035ec5c0  b 0x71035ec5cc
71035ec5c4  mov x25,xzr
71035ec5c8  b 0x71035ec710
71035ec5cc  ldr x9,[x28, #0x120]
71035ec5d0  ldrb w9,[x9, x26, LSL ]
71035ec5d4  sub w9,w9,#0x2
71035ec5d8  cmp w9,#0x6
71035ec5dc  b.hi 0x71035ec758
71035ec5e0  lsr w10,w24,w9
71035ec5e4  tbz w10,#0x0,0x71035ec758
71035ec5e8  asr x10,x22,#0x1d
71035ec5ec  ldr x8,[x8, x10, LSL #0x0]
71035ec5f0  sxtb x9,w9
71035ec5f4  adrp x10,0x71046fd000
71035ec5f8  add x10,x10,#0x920
71035ec5fc  ldr w12,[x10, x9, LSL #0x2]
71035ec600  ldrh w13,[x8, #0x30]
71035ec604  ldp x9,x8,[x20, #0xf8]
71035ec608  cmp x9,x8
71035ec60c  b.cs 0x71035ec628
71035ec610  orr w8,w13,w12
71035ec614  str w8,[x9]
71035ec618  ldr x8,[x20, #0xf8]
71035ec61c  add x8,x8,#0x4
71035ec620  str x8,[x20, #0xf8]
71035ec624  b 0x71035ec758
71035ec628  ldr x10,[sp, #0x8]
71035ec62c  ldr x23,[x10]
71035ec630  sub x2,x9,x23
71035ec634  asr x14,x2,#0x2
71035ec638  add x9,x14,#0x1
71035ec63c  lsr x10,x9,#0x3e
71035ec640  cbnz x10,0x71035ec7b8
71035ec644  sub x8,x8,x23
71035ec648  asr x10,x8,#0x2
71035ec64c  orr x11,xzr,#0x1ffffffffffffffe
71035ec650  cmp x10,x11
71035ec654  b.hi 0x71035ec684
71035ec658  asr x8,x8,#0x1
71035ec65c  cmp x8,x9
71035ec660  csel x9,x9,x8,cc
71035ec664  cbz x9,0x71035ec5c4
71035ec668  lsr x8,x9,#0x3e
71035ec66c  str x14,[sp, #0x20]
71035ec670  str w13,[sp, #0x2c]
71035ec674  str w12,[sp, #0x14]
71035ec678  str x2,[sp, #0x30]
71035ec67c  cbz x8,0x71035ec698
71035ec680  b 0x71035ec7c0
71035ec684  str x14,[sp, #0x20]
71035ec688  str w13,[sp, #0x2c]
71035ec68c  orr x9,xzr,#0x3fffffffffffffff
71035ec690  str w12,[sp, #0x14]
71035ec694  str x2,[sp, #0x30]
71035ec698  lsl x8,x9,#0x2
71035ec69c  cmp x8,#0x0
71035ec6a0  csinc x24,x8,xzr,ne
71035ec6a4  mov w0,#0x10
71035ec6a8  mov x1,x24
71035ec6ac  str x9,[sp, #0x18]
71035ec6b0  bl 0x710392e290
71035ec6b4  mov x25,x0
71035ec6b8  cbnz x0,0x71035ec700
71035ec6bc  adrp x8,0x7105332000
71035ec6c0  ldr x0,[x8, #0xf00]
71035ec6c4  cbz x0,0x71035ec6fc
71035ec6c8  stur wzr,[x29, #-0x54]
71035ec6cc  str x24,[sp, #0x38]
71035ec6d0  ldr x8,[x0]
71035ec6d4  ldr x8,[x8, #0x30]
71035ec6d8  sub x1,x29,#0x54
71035ec6dc  add x2,sp,#0x38
71035ec6e0  blr x8
71035ec6e4  tbz w0,#0x0,0x71035ec6fc
71035ec6e8  mov w0,#0x10
71035ec6ec  mov x1,x24
71035ec6f0  bl 0x710392e290
71035ec6f4  mov x25,x0
71035ec6f8  cbnz x0,0x71035ec700
71035ec6fc  mov x25,xzr
71035ec700  ldr x2,[sp, #0x30]
71035ec704  ldr w12,[sp, #0x14]
71035ec708  ldr w13,[sp, #0x2c]
71035ec70c  ldp x9,x14,[sp, #0x18]
71035ec710  add x24,x25,x14, LSL #0x2
71035ec714  orr w8,w13,w12
71035ec718  cmp x2,#0x1
71035ec71c  str w8,[x24], #0x4
71035ec720  add x8,x25,x9, LSL #0x2
71035ec724  b.lt 0x71035ec73c
71035ec728  mov x0,x25
71035ec72c  mov x1,x23
71035ec730  str x8,[sp, #0x30]
71035ec734  bl 0x71039c00e0
71035ec738  ldr x8,[sp, #0x30]
71035ec73c  stp x25,x24,[x20, #0xf0]
71035ec740  mov w24,#0x55
71035ec744  orr x25,xzr,#0x100000000
71035ec748  str x8,[x20, #0x100]
71035ec74c  cbz x23,0x71035ec758
71035ec750  mov x0,x23
71035ec754  bl 0x710392eb40
71035ec758  ldp x8,x9,[x28, #0x48]
71035ec75c  sub x9,x9,x8
71035ec760  add x26,x26,#0x1
71035ec764  add x22,x22,x25
71035ec768  asr x9,x9,#0x3
71035ec76c  cmp x9,x26
71035ec770  b.hi 0x71035ec5cc
71035ec774  orr w8,wzr,#0xffffff
71035ec778  cmp w21,w8
71035ec77c  b.eq 0x71035ec78c
71035ec780  ldr x0,[x27, #0xf20]
71035ec784  mov w1,w21
71035ec788  bl 0x7103540b10
71035ec78c  ldr x0,[x27, #0xf20]
71035ec790  mov w1,w19
71035ec794  bl 0x7103540b10
71035ec798  ldp x29,x30,[sp, #0xb0]
71035ec79c  ldp x20,x19,[sp, #0xa0]
71035ec7a0  ldp x22,x21,[sp, #0x90]
71035ec7a4  ldp x24,x23,[sp, #0x80]
71035ec7a8  ldp x26,x25,[sp, #0x70]
71035ec7ac  ldp x28,x27,[sp, #0x60]
71035ec7b0  add sp,sp,#0xc0
71035ec7b4  ret
71035ec7b8  ldr x0,[sp, #0x8]
71035ec7bc  bl 0x71039c0c00
71035ec7c0  bl 0x71039c2650
