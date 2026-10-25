// addr:      71029ec220
// offset:    0x29ec220
// name:      FUN_71029ec220
// mangled:   
// size:      1344

71029ec220  sub sp,sp,#0x50
71029ec224  str x23,[sp, #0x10]
71029ec228  stp x22,x21,[sp, #0x20]
71029ec22c  stp x20,x19,[sp, #0x30]
71029ec230  stp x29,x30,[sp, #0x40]
71029ec234  add x29,sp,#0x40
71029ec238  adrp x8,0x7105101000
71029ec23c  add x8,x8,#0x6f8
71029ec240  str x2,[x0, #0x10]
71029ec244  stp x8,x1,[x0]
71029ec248  mov w8,#0x1
71029ec24c  strb w8,[x0, #0x20]
71029ec250  adrp x8,0x71052a8000
71029ec254  mov x23,x1
71029ec258  str wzr,[x0, #0x98]
71029ec25c  mov x19,x0
71029ec260  mov w2,#0x118
71029ec264  strb wzr,[x0, #0x9c]
71029ec268  mov w1,wzr
71029ec26c  mov x21,x5
71029ec270  str xzr,[x0, #0xb8]
71029ec274  mov w22,w4
71029ec278  mov w20,w3
71029ec27c  stur xzr,[x0, #0x43]
71029ec280  stur xzr,[x0, #0x3c]
71029ec284  stur xzr,[x0, #0x34]
71029ec288  stur xzr,[x0, #0x2c]
71029ec28c  stur xzr,[x0, #0x24]
71029ec290  strb wzr,[x0, #0x94]
71029ec294  stur xzr,[x0, #0x8c]
71029ec298  stur xzr,[x0, #0x84]
71029ec29c  stur xzr,[x0, #0x7c]
71029ec2a0  stur xzr,[x0, #0x74]
71029ec2a4  stur xzr,[x0, #0x6c]
71029ec2a8  stur xzr,[x0, #0x64]
71029ec2ac  stur xzr,[x0, #0x5c]
71029ec2b0  stur xzr,[x0, #0x54]
71029ec2b4  stur xzr,[x0, #0x4c]
71029ec2b8  str wzr,[x0, #0xb0]
71029ec2bc  stp xzr,xzr,[x0, #0xa0]
71029ec2c0  ldr x8,[x8, #0xa88]
71029ec2c4  ldr q0,[x8]
71029ec2c8  orr x8,xzr,#0x300000000
71029ec2cc  str x8,[x0, #0xe0]
71029ec2d0  add x0,x0,#0xf0
71029ec2d4  stp q0,q0,[x19, #0xc0]
71029ec2d8  bl 0x71039c02a0
71029ec2dc  strb wzr,[x19, #0x1f1]
71029ec2e0  str xzr,[x19, #0x208]
71029ec2e4  adrp x8,0x71052a8000
71029ec2e8  str xzr,[x19, #0x218]
71029ec2ec  mov w3,#0xffffffff
71029ec2f0  add x0,x19,#0x230
71029ec2f4  str xzr,[x19, #0x210]
71029ec2f8  mov x2,sp
71029ec2fc  mov x1,x23
71029ec300  strb wzr,[x19, #0x209]
71029ec304  mov x4,x3
71029ec308  str xzr,[x19, #0x220]
71029ec30c  ldr x8,[x8, #0xa80]
71029ec310  ldr q0,[x8]
71029ec314  str q0,[sp]
71029ec318  fmov s0,wzr
71029ec31c  mov v1.16B,v0.16B
71029ec320  bl 0x710318bf30
71029ec324  adrp x9,0x7104466000
71029ec328  ldr q0,[x9, #0x2b0]
71029ec32c  ldr x8,[x19, #0x10]
71029ec330  stp xzr,xzr,[x19, #0x38]
71029ec334  strb w22,[x19, #0x49]
71029ec338  stp xzr,xzr,[x19, #0xa0]
71029ec33c  fmov s3,wzr
71029ec340  strh wzr,[x19, #0x260]
71029ec344  strb wzr,[x19, #0x262]
71029ec348  str xzr,[x19, #0x30]
71029ec34c  strb w20,[x19, #0x48]
71029ec350  str x21,[x19, #0x18]
71029ec354  stp xzr,xzr,[x19, #0x80]
71029ec358  str q0,[x19, #0x50]
71029ec35c  ldp q0,q1,[x19, #0xf0]
71029ec360  stp xzr,xzr,[x19, #0x70]
71029ec364  stp xzr,xzr,[x19, #0x60]
71029ec368  ldr x9,[x8, #0x98]
71029ec36c  ld1 {v0.S}[0],[x9]
71029ec370  str q0,[x19, #0xf0]
71029ec374  ldr x9,[x8, #0x98]
71029ec378  add x9,x9,#0x4
71029ec37c  ld1 {v0.S}[1],[x9]
71029ec380  str q0,[x19, #0xf0]
71029ec384  ldr x9,[x8, #0x98]
71029ec388  add x9,x9,#0x8
71029ec38c  ld1 {v0.S}[2],[x9]
71029ec390  mov v0.S[0x3],v3.S[0x0]
71029ec394  str q0,[x19, #0xf0]
71029ec398  ldp q0,q2,[x19, #0x170]
71029ec39c  ldr x9,[x8, #0x98]
71029ec3a0  add x9,x9,#0xc
71029ec3a4  ld1 {v0.S}[0],[x9]
71029ec3a8  str q0,[x19, #0x170]
71029ec3ac  ldr x9,[x8, #0x98]
71029ec3b0  add x9,x9,#0x10
71029ec3b4  ld1 {v0.S}[1],[x9]
71029ec3b8  str q0,[x19, #0x170]
71029ec3bc  ldr x9,[x8, #0x98]
71029ec3c0  add x9,x9,#0x14
71029ec3c4  ld1 {v0.S}[2],[x9]
71029ec3c8  mov v0.S[0x3],v3.S[0x0]
71029ec3cc  str q0,[x19, #0x170]
71029ec3d0  ldr x9,[x8, #0x98]
71029ec3d4  add x9,x9,#0x1c
71029ec3d8  ld1 {v1.S}[0],[x9]
71029ec3dc  str q1,[x19, #0x100]
71029ec3e0  ldr x9,[x8, #0x98]
71029ec3e4  add x9,x9,#0x20
71029ec3e8  ld1 {v1.S}[1],[x9]
71029ec3ec  str q1,[x19, #0x100]
71029ec3f0  ldr x9,[x8, #0x98]
71029ec3f4  add x9,x9,#0x24
71029ec3f8  ld1 {v1.S}[2],[x9]
71029ec3fc  mov v1.S[0x3],v3.S[0x0]
71029ec400  str q1,[x19, #0x100]
71029ec404  ldr x9,[x8, #0x98]
71029ec408  add x9,x9,#0x28
71029ec40c  ld1 {v2.S}[0],[x9]
71029ec410  ldp q0,q1,[x19, #0x110]
71029ec414  str q2,[x19, #0x180]
71029ec418  ldr x9,[x8, #0x98]
71029ec41c  add x9,x9,#0x2c
71029ec420  ld1 {v2.S}[1],[x9]
71029ec424  str q2,[x19, #0x180]
71029ec428  ldr x9,[x8, #0x98]
71029ec42c  add x9,x9,#0x30
71029ec430  ld1 {v2.S}[2],[x9]
71029ec434  mov v2.S[0x3],v3.S[0x0]
71029ec438  str q2,[x19, #0x180]
71029ec43c  ldr x9,[x8, #0x98]
71029ec440  add x9,x9,#0x38
71029ec444  ld1 {v0.S}[0],[x9]
71029ec448  str q0,[x19, #0x110]
71029ec44c  ldr x9,[x8, #0x98]
71029ec450  add x9,x9,#0x3c
71029ec454  ld1 {v0.S}[1],[x9]
71029ec458  str q0,[x19, #0x110]
71029ec45c  ldr x9,[x8, #0x98]
71029ec460  add x9,x9,#0x40
71029ec464  ld1 {v0.S}[2],[x9]
71029ec468  mov v0.S[0x3],v3.S[0x0]
71029ec46c  str q0,[x19, #0x110]
71029ec470  ldp q0,q2,[x19, #0x190]
71029ec474  ldr x9,[x8, #0x98]
71029ec478  add x9,x9,#0x44
71029ec47c  ld1 {v0.S}[0],[x9]
71029ec480  str q0,[x19, #0x190]
71029ec484  ldr x9,[x8, #0x98]
71029ec488  add x9,x9,#0x48
71029ec48c  ld1 {v0.S}[1],[x9]
71029ec490  str q0,[x19, #0x190]
71029ec494  ldr x8,[x8, #0x98]
71029ec498  add x8,x8,#0x4c
71029ec49c  ld1 {v0.S}[2],[x8]
71029ec4a0  ldr x8,[x19, #0x10]
71029ec4a4  mov v0.S[0x3],v3.S[0x0]
71029ec4a8  str q0,[x19, #0x190]
71029ec4ac  ldr x9,[x8, #0x98]
71029ec4b0  add x9,x9,#0x54
71029ec4b4  ld1 {v1.S}[0],[x9]
71029ec4b8  str q1,[x19, #0x120]
71029ec4bc  ldr x9,[x8, #0x98]
71029ec4c0  add x9,x9,#0x58
71029ec4c4  ld1 {v1.S}[1],[x9]
71029ec4c8  str q1,[x19, #0x120]
71029ec4cc  ldr x9,[x8, #0x98]
71029ec4d0  add x9,x9,#0x5c
71029ec4d4  ld1 {v1.S}[2],[x9]
71029ec4d8  mov v1.S[0x3],v3.S[0x0]
71029ec4dc  str q1,[x19, #0x120]
71029ec4e0  ldr x9,[x8, #0x98]
71029ec4e4  add x9,x9,#0x60
71029ec4e8  ld1 {v2.S}[0],[x9]
71029ec4ec  ldp q0,q1,[x19, #0x130]
71029ec4f0  str q2,[x19, #0x1a0]
71029ec4f4  ldr x9,[x8, #0x98]
71029ec4f8  add x9,x9,#0x64
71029ec4fc  ld1 {v2.S}[1],[x9]
71029ec500  str q2,[x19, #0x1a0]
71029ec504  ldr x9,[x8, #0x98]
71029ec508  add x9,x9,#0x68
71029ec50c  ld1 {v2.S}[2],[x9]
71029ec510  mov v2.S[0x3],v3.S[0x0]
71029ec514  str q2,[x19, #0x1a0]
71029ec518  ldr x9,[x8, #0x98]
71029ec51c  add x9,x9,#0x70
71029ec520  ld1 {v0.S}[0],[x9]
71029ec524  str q0,[x19, #0x130]
71029ec528  ldr x9,[x8, #0x98]
71029ec52c  add x9,x9,#0x74
71029ec530  ld1 {v0.S}[1],[x9]
71029ec534  str q0,[x19, #0x130]
71029ec538  ldr x9,[x8, #0x98]
71029ec53c  add x9,x9,#0x78
71029ec540  ld1 {v0.S}[2],[x9]
71029ec544  mov v0.S[0x3],v3.S[0x0]
71029ec548  str q0,[x19, #0x130]
71029ec54c  ldp q0,q2,[x19, #0x1b0]
71029ec550  ldr x9,[x8, #0x98]
71029ec554  add x9,x9,#0x7c
71029ec558  ld1 {v0.S}[0],[x9]
71029ec55c  str q0,[x19, #0x1b0]
71029ec560  ldr x9,[x8, #0x98]
71029ec564  add x9,x9,#0x80
71029ec568  ld1 {v0.S}[1],[x9]
71029ec56c  str q0,[x19, #0x1b0]
71029ec570  ldr x9,[x8, #0x98]
71029ec574  add x9,x9,#0x84
71029ec578  ld1 {v0.S}[2],[x9]
71029ec57c  mov v0.S[0x3],v3.S[0x0]
71029ec580  str q0,[x19, #0x1b0]
71029ec584  ldr x9,[x8, #0x98]
71029ec588  add x9,x9,#0x8c
71029ec58c  ld1 {v1.S}[0],[x9]
71029ec590  str q1,[x19, #0x140]
71029ec594  ldr x9,[x8, #0x98]
71029ec598  add x9,x9,#0x90
71029ec59c  ld1 {v1.S}[1],[x9]
71029ec5a0  str q1,[x19, #0x140]
71029ec5a4  ldr x9,[x8, #0x98]
71029ec5a8  add x9,x9,#0x94
71029ec5ac  ld1 {v1.S}[2],[x9]
71029ec5b0  mov v1.S[0x3],v3.S[0x0]
71029ec5b4  str q1,[x19, #0x140]
71029ec5b8  ldr x9,[x8, #0x98]
71029ec5bc  add x9,x9,#0x98
71029ec5c0  ld1 {v2.S}[0],[x9]
71029ec5c4  ldp q0,q1,[x19, #0x150]
71029ec5c8  str q2,[x19, #0x1c0]
71029ec5cc  ldr x9,[x8, #0x98]
71029ec5d0  add x9,x9,#0x9c
71029ec5d4  ld1 {v2.S}[1],[x9]
71029ec5d8  str q2,[x19, #0x1c0]
71029ec5dc  ldr x8,[x8, #0x98]
71029ec5e0  add x8,x8,#0xa0
71029ec5e4  ld1 {v2.S}[2],[x8]
71029ec5e8  ldr x8,[x19, #0x10]
71029ec5ec  mov v2.S[0x3],v3.S[0x0]
71029ec5f0  str q2,[x19, #0x1c0]
71029ec5f4  ldr x9,[x8, #0x98]
71029ec5f8  add x9,x9,#0xa8
71029ec5fc  ld1 {v0.S}[0],[x9]
71029ec600  str q0,[x19, #0x150]
71029ec604  ldr x9,[x8, #0x98]
71029ec608  add x9,x9,#0xac
71029ec60c  ld1 {v0.S}[1],[x9]
71029ec610  str q0,[x19, #0x150]
71029ec614  ldr x9,[x8, #0x98]
71029ec618  add x9,x9,#0xb0
71029ec61c  ld1 {v0.S}[2],[x9]
71029ec620  mov v0.S[0x3],v3.S[0x0]
71029ec624  str q0,[x19, #0x150]
71029ec628  ldp q0,q2,[x19, #0x1d0]
71029ec62c  ldr x9,[x8, #0x98]
71029ec630  add x9,x9,#0xb4
71029ec634  ld1 {v0.S}[0],[x9]
71029ec638  str q0,[x19, #0x1d0]
71029ec63c  ldr x9,[x8, #0x98]
71029ec640  add x9,x9,#0xb8
71029ec644  ld1 {v0.S}[1],[x9]
71029ec648  str q0,[x19, #0x1d0]
71029ec64c  ldr x9,[x8, #0x98]
71029ec650  add x9,x9,#0xbc
71029ec654  ld1 {v0.S}[2],[x9]
71029ec658  mov v0.S[0x3],v3.S[0x0]
71029ec65c  str q0,[x19, #0x1d0]
71029ec660  ldr x9,[x8, #0x98]
71029ec664  add x9,x9,#0xc4
71029ec668  ld1 {v1.S}[0],[x9]
71029ec66c  str q1,[x19, #0x160]
71029ec670  ldr x9,[x8, #0x98]
71029ec674  add x9,x9,#0xc8
71029ec678  ld1 {v1.S}[1],[x9]
71029ec67c  str q1,[x19, #0x160]
71029ec680  ldr x9,[x8, #0x98]
71029ec684  add x9,x9,#0xcc
71029ec688  ld1 {v1.S}[2],[x9]
71029ec68c  mov v1.S[0x3],v3.S[0x0]
71029ec690  str q1,[x19, #0x160]
71029ec694  ldr x9,[x8, #0x98]
71029ec698  add x9,x9,#0xd0
71029ec69c  ld1 {v2.S}[0],[x9]
71029ec6a0  str q2,[x19, #0x1e0]
71029ec6a4  ldr x9,[x8, #0x98]
71029ec6a8  add x9,x9,#0xd4
71029ec6ac  ld1 {v2.S}[1],[x9]
71029ec6b0  str q2,[x19, #0x1e0]
71029ec6b4  ldr x8,[x8, #0x98]
71029ec6b8  add x8,x8,#0xd8
71029ec6bc  ld1 {v2.S}[2],[x8]
71029ec6c0  and w8,w20,#0xff
71029ec6c4  sub w8,w8,#0x4
71029ec6c8  cmp w8,#0x3
71029ec6cc  mov v2.S[0x3],v3.S[0x0]
71029ec6d0  str q2,[x19, #0x1e0]
71029ec6d4  b.hi 0x71029ec748
71029ec6d8  adrp x9,0x7104512000
71029ec6dc  add x9,x9,#0x4c8
71029ec6e0  add x20,x19,#0x1f0
71029ec6e4  ldrsw x8,[x9, x8, LSL #0x2]
71029ec6e8  add x8,x8,x9
71029ec6ec  add x0,x19,#0x208
71029ec6f0  br x8
71029ec6f4  adrp x1,0x7104359000
71029ec6f8  add x1,x1,#0x465
71029ec6fc  mov x0,x20
71029ec700  b 0x71029ec744
71029ec704  adrp x1,0x7104306000
71029ec708  add x1,x1,#0x6b9
71029ec70c  bl 0x71039c2720
71029ec710  adrp x1,0x71042f5000
71029ec714  add x1,x1,#0xde9
71029ec718  mov x0,x20
71029ec71c  b 0x71029ec744
71029ec720  adrp x1,0x71043cd000
71029ec724  add x1,x1,#0x580
71029ec728  bl 0x71039c2720
71029ec72c  adrp x1,0x7104306000
71029ec730  add x1,x1,#0x6d1
71029ec734  mov x0,x20
71029ec738  b 0x71029ec744
71029ec73c  adrp x1,0x7104431000
71029ec740  add x1,x1,#0x14c
71029ec744  bl 0x71039c2720
71029ec748  ldp x29,x30,[sp, #0x40]
71029ec74c  ldr x23,[sp, #0x10]
71029ec750  ldp x20,x19,[sp, #0x30]
71029ec754  ldp x22,x21,[sp, #0x20]
71029ec758  add sp,sp,#0x50
71029ec75c  ret
