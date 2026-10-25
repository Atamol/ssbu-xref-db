// addr:      71032ec140
// offset:    0x32ec140
// name:      FUN_71032ec140
// mangled:   
// size:      4336

71032ec140  sub sp,sp,#0x1e0
71032ec144  stp x28,x27,[sp, #0x180]
71032ec148  stp x26,x25,[sp, #0x190]
71032ec14c  stp x24,x23,[sp, #0x1a0]
71032ec150  stp x22,x21,[sp, #0x1b0]
71032ec154  stp x20,x19,[sp, #0x1c0]
71032ec158  stp x29,x30,[sp, #0x1d0]
71032ec15c  add x29,sp,#0x1d0
71032ec160  ldr x8,[x0, #0x8]
71032ec164  ldrb w9,[x8, #0x34]
71032ec168  cbnz w9,0x71032ed20c
71032ec16c  ldr x20,[x8]
71032ec170  mov x19,x0
71032ec174  mov x0,x20
71032ec178  bl 0x710323cb80
71032ec17c  tbnz w0,#0x0,0x71032ec19c
71032ec180  mov w21,#0x4240
71032ec184  movk w21,#0xf, LSL #16
71032ec188  mov x0,x21
71032ec18c  bl 0x71039c0d80
71032ec190  mov x0,x20
71032ec194  bl 0x710323cb80
71032ec198  tbz w0,#0x0,0x71032ec188
71032ec19c  ldr x26,[x19, #0x8]
71032ec1a0  mov w1,#0x88
71032ec1a4  mov w0,#0x10
71032ec1a8  bl 0x710392e290
71032ec1ac  mov x19,x0
71032ec1b0  cbnz x0,0x71032ec1fc
71032ec1b4  adrp x8,0x7105332000
71032ec1b8  ldr x0,[x8, #0xf00]
71032ec1bc  cbz x0,0x71032ec1f8
71032ec1c0  mov w8,#0x88
71032ec1c4  stur wzr,[x29, #-0x90]
71032ec1c8  sub x1,x29,#0x90
71032ec1cc  str x8,[sp]
71032ec1d0  ldr x8,[x0]
71032ec1d4  ldr x8,[x8, #0x30]
71032ec1d8  mov x2,sp
71032ec1dc  blr x8
71032ec1e0  tbz w0,#0x0,0x71032ec1f8
71032ec1e4  mov w1,#0x88
71032ec1e8  mov w0,#0x10
71032ec1ec  bl 0x710392e290
71032ec1f0  mov x19,x0
71032ec1f4  cbnz x0,0x71032ec1fc
71032ec1f8  mov x19,xzr
71032ec1fc  adrp x8,0x71050aa000
71032ec200  add x8,x8,#0x2b0
71032ec204  mov w1,#0x208
71032ec208  stp x8,xzr,[x19]
71032ec20c  orr x8,xzr,#0x1ffffffff
71032ec210  stp xzr,x8,[x19, #0x60]
71032ec214  mov w8,#0x1
71032ec218  mov w0,#0x10
71032ec21c  stp xzr,xzr,[x19, #0x10]
71032ec220  strb wzr,[x19, #0x58]
71032ec224  str x26,[x19, #0x78]
71032ec228  strb w8,[x19, #0x70]
71032ec22c  stp xzr,xzr,[x19, #0x48]
71032ec230  bl 0x710392e290
71032ec234  mov x20,x0
71032ec238  cbnz x0,0x71032ec284
71032ec23c  adrp x8,0x7105332000
71032ec240  ldr x0,[x8, #0xf00]
71032ec244  cbz x0,0x71032ec280
71032ec248  mov w8,#0x208
71032ec24c  stur wzr,[x29, #-0x90]
71032ec250  sub x1,x29,#0x90
71032ec254  str x8,[sp]
71032ec258  ldr x8,[x0]
71032ec25c  ldr x8,[x8, #0x30]
71032ec260  mov x2,sp
71032ec264  blr x8
71032ec268  tbz w0,#0x0,0x71032ec280
71032ec26c  mov w1,#0x208
71032ec270  mov w0,#0x10
71032ec274  bl 0x710392e290
71032ec278  mov x20,x0
71032ec27c  cbnz x0,0x71032ec284
71032ec280  mov x20,xzr
71032ec284  mov w8,#0xffffffff
71032ec288  mov w0,#0x10
71032ec28c  mov w1,#0x8
71032ec290  stp xzr,xzr,[x20, #0x10]
71032ec294  str w8,[x20, #0xf0]
71032ec298  stp x20,xzr,[x20]
71032ec29c  strb wzr,[x20, #0xf4]
71032ec2a0  stp xzr,x8,[x20, #0xe0]
71032ec2a4  stp xzr,xzr,[x20, #0xd0]
71032ec2a8  stp xzr,xzr,[x20, #0xc0]
71032ec2ac  stp xzr,xzr,[x20, #0xb0]
71032ec2b0  stp xzr,xzr,[x20, #0xa0]
71032ec2b4  stp xzr,xzr,[x20, #0x90]
71032ec2b8  stp xzr,xzr,[x20, #0x80]
71032ec2bc  stp xzr,xzr,[x20, #0x70]
71032ec2c0  stp xzr,xzr,[x20, #0x60]
71032ec2c4  stp xzr,xzr,[x20, #0x50]
71032ec2c8  stp xzr,xzr,[x20, #0x40]
71032ec2cc  stp xzr,xzr,[x20, #0x30]
71032ec2d0  stp xzr,xzr,[x20, #0x20]
71032ec2d4  stp xzr,xzr,[x20, #0x118]
71032ec2d8  stp xzr,xzr,[x20, #0x108]
71032ec2dc  stp xzr,xzr,[x20, #0xf8]
71032ec2e0  bl 0x710392e290
71032ec2e4  mov x21,x0
71032ec2e8  cbnz x0,0x71032ec334
71032ec2ec  adrp x8,0x7105332000
71032ec2f0  ldr x0,[x8, #0xf00]
71032ec2f4  cbz x0,0x71032ec330
71032ec2f8  mov w8,#0x8
71032ec2fc  stur wzr,[x29, #-0x90]
71032ec300  sub x1,x29,#0x90
71032ec304  str x8,[sp]
71032ec308  ldr x8,[x0]
71032ec30c  ldr x8,[x8, #0x30]
71032ec310  mov x2,sp
71032ec314  blr x8
71032ec318  tbz w0,#0x0,0x71032ec330
71032ec31c  mov w0,#0x10
71032ec320  mov w1,#0x8
71032ec324  bl 0x710392e290
71032ec328  mov x21,x0
71032ec32c  cbnz x0,0x71032ec334
71032ec330  mov x21,xzr
71032ec334  mov x0,x21
71032ec338  bl 0x7103773200
71032ec33c  mov w0,#0x10
71032ec340  mov w1,#0x8
71032ec344  str x21,[x20, #0x128]
71032ec348  bl 0x710392e290
71032ec34c  mov x21,x0
71032ec350  cbnz x0,0x71032ec39c
71032ec354  adrp x8,0x7105332000
71032ec358  ldr x0,[x8, #0xf00]
71032ec35c  cbz x0,0x71032ec398
71032ec360  mov w8,#0x8
71032ec364  stur wzr,[x29, #-0x90]
71032ec368  sub x1,x29,#0x90
71032ec36c  str x8,[sp]
71032ec370  ldr x8,[x0]
71032ec374  ldr x8,[x8, #0x30]
71032ec378  mov x2,sp
71032ec37c  blr x8
71032ec380  tbz w0,#0x0,0x71032ec398
71032ec384  mov w0,#0x10
71032ec388  mov w1,#0x8
71032ec38c  bl 0x710392e290
71032ec390  mov x21,x0
71032ec394  cbnz x0,0x71032ec39c
71032ec398  mov x21,xzr
71032ec39c  mov x0,x21
71032ec3a0  bl 0x7103773200
71032ec3a4  adrp x23,0x710523d000
71032ec3a8  add x23,x23,#0x9e8
71032ec3ac  mov w0,#0x10
71032ec3b0  orr w1,wzr,#0x18
71032ec3b4  stp x21,xzr,[x20, #0x130]
71032ec3b8  str x23,[x20, #0x140]
71032ec3bc  bl 0x710392e290
71032ec3c0  cbnz x0,0x71032ec408
71032ec3c4  adrp x8,0x7105332000
71032ec3c8  ldr x0,[x8, #0xf00]
71032ec3cc  cbz x0,0x71032ec404
71032ec3d0  orr w8,wzr,#0x18
71032ec3d4  stur wzr,[x29, #-0x90]
71032ec3d8  sub x1,x29,#0x90
71032ec3dc  str x8,[sp]
71032ec3e0  ldr x8,[x0]
71032ec3e4  ldr x8,[x8, #0x30]
71032ec3e8  mov x2,sp
71032ec3ec  blr x8
71032ec3f0  tbz w0,#0x0,0x71032ec404
71032ec3f4  mov w0,#0x10
71032ec3f8  orr w1,wzr,#0x18
71032ec3fc  bl 0x710392e290
71032ec400  cbnz x0,0x71032ec408
71032ec404  mov x0,xzr
71032ec408  mov w21,#0x1
71032ec40c  stp xzr,xzr,[x0]
71032ec410  strb w21,[x0, #0x10]
71032ec414  orr w1,wzr,#0x18
71032ec418  stp x0,x23,[x20, #0x148]
71032ec41c  mov w0,#0x10
71032ec420  bl 0x710392e290
71032ec424  cbnz x0,0x71032ec46c
71032ec428  adrp x8,0x7105332000
71032ec42c  ldr x0,[x8, #0xf00]
71032ec430  cbz x0,0x71032ec468
71032ec434  orr w8,wzr,#0x18
71032ec438  stur wzr,[x29, #-0x90]
71032ec43c  sub x1,x29,#0x90
71032ec440  str x8,[sp]
71032ec444  ldr x8,[x0]
71032ec448  ldr x8,[x8, #0x30]
71032ec44c  mov x2,sp
71032ec450  blr x8
71032ec454  tbz w0,#0x0,0x71032ec468
71032ec458  mov w0,#0x10
71032ec45c  orr w1,wzr,#0x18
71032ec460  bl 0x710392e290
71032ec464  cbnz x0,0x71032ec46c
71032ec468  mov x0,xzr
71032ec46c  add x22,x20,#0x160
71032ec470  stp xzr,xzr,[x0]
71032ec474  strb w21,[x0, #0x10]
71032ec478  str x0,[x20, #0x158]
71032ec47c  mov x0,x22
71032ec480  bl 0x7103776290
71032ec484  add x21,x20,#0x170
71032ec488  mov x0,x21
71032ec48c  bl 0x7103776290
71032ec490  mov w0,#0x10
71032ec494  orr w1,wzr,#0x18
71032ec498  str x23,[x20, #0x180]
71032ec49c  bl 0x710392e290
71032ec4a0  cbnz x0,0x71032ec4e8
71032ec4a4  adrp x8,0x7105332000
71032ec4a8  ldr x0,[x8, #0xf00]
71032ec4ac  cbz x0,0x71032ec4e4
71032ec4b0  orr w8,wzr,#0x18
71032ec4b4  stur wzr,[x29, #-0x90]
71032ec4b8  sub x1,x29,#0x90
71032ec4bc  str x8,[sp]
71032ec4c0  ldr x8,[x0]
71032ec4c4  ldr x8,[x8, #0x30]
71032ec4c8  mov x2,sp
71032ec4cc  blr x8
71032ec4d0  tbz w0,#0x0,0x71032ec4e4
71032ec4d4  mov w0,#0x10
71032ec4d8  orr w1,wzr,#0x18
71032ec4dc  bl 0x710392e290
71032ec4e0  cbnz x0,0x71032ec4e8
71032ec4e4  mov x0,xzr
71032ec4e8  mov w8,#0x1
71032ec4ec  adrp x27,0x710523d000
71032ec4f0  add x27,x27,#0x9a8
71032ec4f4  stp xzr,xzr,[x0]
71032ec4f8  strb w8,[x0, #0x10]
71032ec4fc  stp x0,x27,[x20, #0x188]
71032ec500  mov w0,#0x10
71032ec504  mov w1,#0x20
71032ec508  bl 0x710392e290
71032ec50c  cbnz x0,0x71032ec554
71032ec510  adrp x8,0x7105332000
71032ec514  ldr x0,[x8, #0xf00]
71032ec518  cbz x0,0x71032ec550
71032ec51c  mov w8,#0x20
71032ec520  stur wzr,[x29, #-0x90]
71032ec524  sub x1,x29,#0x90
71032ec528  str x8,[sp]
71032ec52c  ldr x8,[x0]
71032ec530  ldr x8,[x8, #0x30]
71032ec534  mov x2,sp
71032ec538  blr x8
71032ec53c  tbz w0,#0x0,0x71032ec550
71032ec540  mov w0,#0x10
71032ec544  mov w1,#0x20
71032ec548  bl 0x710392e290
71032ec54c  cbnz x0,0x71032ec554
71032ec550  mov x0,xzr
71032ec554  stp xzr,xzr,[x0, #0x10]
71032ec558  mov w1,#0x20
71032ec55c  stp xzr,xzr,[x0]
71032ec560  stp x0,x27,[x20, #0x198]
71032ec564  mov w0,#0x10
71032ec568  bl 0x710392e290
71032ec56c  cbnz x0,0x71032ec5b4
71032ec570  adrp x8,0x7105332000
71032ec574  ldr x0,[x8, #0xf00]
71032ec578  cbz x0,0x71032ec5b0
71032ec57c  mov w8,#0x20
71032ec580  stur wzr,[x29, #-0x90]
71032ec584  sub x1,x29,#0x90
71032ec588  str x8,[sp]
71032ec58c  ldr x8,[x0]
71032ec590  ldr x8,[x8, #0x30]
71032ec594  mov x2,sp
71032ec598  blr x8
71032ec59c  tbz w0,#0x0,0x71032ec5b0
71032ec5a0  mov w0,#0x10
71032ec5a4  mov w1,#0x20
71032ec5a8  bl 0x710392e290
71032ec5ac  cbnz x0,0x71032ec5b4
71032ec5b0  mov x0,xzr
71032ec5b4  stp xzr,xzr,[x0, #0x10]
71032ec5b8  mov w1,#0x20
71032ec5bc  stp xzr,xzr,[x0]
71032ec5c0  stp x0,x27,[x20, #0x1a8]
71032ec5c4  mov w0,#0x10
71032ec5c8  bl 0x710392e290
71032ec5cc  cbnz x0,0x71032ec614
71032ec5d0  adrp x8,0x7105332000
71032ec5d4  ldr x0,[x8, #0xf00]
71032ec5d8  cbz x0,0x71032ec610
71032ec5dc  mov w8,#0x20
71032ec5e0  stur wzr,[x29, #-0x90]
71032ec5e4  sub x1,x29,#0x90
71032ec5e8  str x8,[sp]
71032ec5ec  ldr x8,[x0]
71032ec5f0  ldr x8,[x8, #0x30]
71032ec5f4  mov x2,sp
71032ec5f8  blr x8
71032ec5fc  tbz w0,#0x0,0x71032ec610
71032ec600  mov w0,#0x10
71032ec604  mov w1,#0x20
71032ec608  bl 0x710392e290
71032ec60c  cbnz x0,0x71032ec614
71032ec610  mov x0,xzr
71032ec614  add x8,x20,#0x1ee
71032ec618  stp xzr,xzr,[x0, #0x10]
71032ec61c  stp xzr,xzr,[x0]
71032ec620  adrp x9,0x7101af9000
71032ec624  add x9,x9,#0x7f0
71032ec628  str xzr,[x20, #0x1c8]
71032ec62c  stp x0,xzr,[x20, #0x1b8]
71032ec630  str xzr,[x8]
71032ec634  mov w8,#0x1
71032ec638  strh w8,[x20, #0x1f6]
71032ec63c  strb w8,[x20, #0x200]
71032ec640  adrp x8,0x7101af9000
71032ec644  add x8,x8,#0x5b0
71032ec648  strb wzr,[x20, #0x1f8]
71032ec64c  str wzr,[x20, #0x1fc]
71032ec650  stp x8,xzr,[x20, #0x28]
71032ec654  adrp x8,0x7101af9000
71032ec658  add x8,x8,#0x670
71032ec65c  stp x8,xzr,[x20, #0x38]
71032ec660  adrp x8,0x7101af9000
71032ec664  add x8,x8,#0xc60
71032ec668  stp x8,xzr,[x20, #0x58]
71032ec66c  adrp x8,0x7101af9000
71032ec670  add x8,x8,#0xe40
71032ec674  stp x8,xzr,[x20, #0x68]
71032ec678  ldrsw x8,[x20, #0xe4]
71032ec67c  cmp w8,#0x13
71032ec680  stp x9,xzr,[x20, #0x48]
71032ec684  adrp x9,0x7101af9000
71032ec688  add x9,x9,#0xee0
71032ec68c  stp x9,xzr,[x20, #0x78]
71032ec690  adrp x9,0x7101afa000
71032ec694  add x9,x9,#0x110
71032ec698  stp xzr,xzr,[x20, #0x1e0]
71032ec69c  stp xzr,xzr,[x20, #0x1d0]
71032ec6a0  stp x9,xzr,[x20, #0x88]
71032ec6a4  b.cs 0x71032ed22c
71032ec6a8  add x8,x20,x8, LSL #0x2
71032ec6ac  str wzr,[x8, #0x98]
71032ec6b0  str x20,[x19, #0x80]
71032ec6b4  ldr x1,[x26]
71032ec6b8  add x23,x20,#0x128
71032ec6bc  adrp x2,0x7104544000
71032ec6c0  add x2,x2,#0x750
71032ec6c4  mov w3,#0x1
71032ec6c8  mov x0,x23
71032ec6cc  bl 0x71032cbf30
71032ec6d0  ldr x8,[x20, #0x128]
71032ec6d4  ldr x8,[x8]
71032ec6d8  ldr x0,[x8]
71032ec6dc  mov w1,wzr
71032ec6e0  bl 0x71037760f0
71032ec6e4  ldr x8,[x20, #0x128]
71032ec6e8  ldr x8,[x8]
71032ec6ec  ldr x9,[x8]
71032ec6f0  ldr x8,[x9, #0x600]
71032ec6f4  orr w10,wzr,#0x3
71032ec6f8  str w10,[x8, #0x494]
71032ec6fc  ldr x8,[x9, #0x608]
71032ec700  ldr x9,[x9, #0x610]
71032ec704  cmp x8,x9
71032ec708  b.eq 0x71032ec778
71032ec70c  sub x10,x9,#0x10
71032ec710  sub x10,x10,x8
71032ec714  ubfx x11,x10,#0x4,#0x1c
71032ec718  add w11,w11,#0x1
71032ec71c  ands x11,x11,#0x3
71032ec720  b.eq 0x71032ec740
71032ec724  neg x11,x11
71032ec728  orr w12,wzr,#0x3
71032ec72c  ldr x13,[x8, #0x8]
71032ec730  add x8,x8,#0x10
71032ec734  adds x11,x11,#0x1
71032ec738  str w12,[x13, #0x494]
71032ec73c  b.ne 0x71032ec72c
71032ec740  cmp x10,#0x30
71032ec744  b.cc 0x71032ec778
71032ec748  orr w10,wzr,#0x3
71032ec74c  ldr x11,[x8, #0x8]
71032ec750  str w10,[x11, #0x494]
71032ec754  ldr x11,[x8, #0x18]
71032ec758  str w10,[x11, #0x494]
71032ec75c  ldr x11,[x8, #0x28]
71032ec760  str w10,[x11, #0x494]
71032ec764  ldr x11,[x8, #0x38]
71032ec768  add x8,x8,#0x40
71032ec76c  cmp x9,x8
71032ec770  str w10,[x11, #0x494]
71032ec774  b.ne 0x71032ec74c
71032ec778  ldr x8,[x23]
71032ec77c  ldr x8,[x8]
71032ec780  ldr x8,[x8]
71032ec784  ldr x9,[x8, #0x600]
71032ec788  mov w10,#0x20
71032ec78c  str w10,[x9, #0x10]
71032ec790  ldr x9,[x8, #0x600]
71032ec794  mov w10,#0x440
71032ec798  str w10,[x9, #0x14]
71032ec79c  ldr x9,[x8, #0x600]
71032ec7a0  mov w10,#0x800
71032ec7a4  str w10,[x9, #0x18]
71032ec7a8  ldr x8,[x8, #0x600]
71032ec7ac  mov w9,#0x10
71032ec7b0  str w9,[x8, #0x1c]
71032ec7b4  ldr x8,[x23]
71032ec7b8  ldr x8,[x8]
71032ec7bc  add x25,x8,#0x8
71032ec7c0  adrp x1,0x7104432000
71032ec7c4  add x1,x1,#0xbc5
71032ec7c8  mov x8,sp
71032ec7cc  mov x0,x25
71032ec7d0  bl 0x7103776910
71032ec7d4  ldr x0,[sp, #0x8]
71032ec7d8  ldr x8,[x0]
71032ec7dc  cbz x8,0x71032ec840
71032ec7e0  movi v2.2D,#0x0
71032ec7e4  ldr s4,[x8, #0x30]
71032ec7e8  add x9,x8,#0x34
71032ec7ec  ldp s0,s1,[x8, #0x50]
71032ec7f0  add x10,x8,#0x38
71032ec7f4  ldp s5,s7,[x8, #0x48]
71032ec7f8  mov v3.16B,v2.16B
71032ec7fc  fmul s1,s1,s7
71032ec800  fmul s0,s0,s5
71032ec804  fabs s0,s0
71032ec808  mov v3.S[0x0],v4.S[0x0]
71032ec80c  fmov s5,0x3f000000
71032ec810  fmul s6,s0,s5
71032ec814  ld1 {v3.S}[1],[x9]
71032ec818  ldrb w9,[x8, #0x5b]
71032ec81c  ld1 {v3.S}[2],[x10]
71032ec820  fabs s1,s1
71032ec824  and w10,w9,#0x3
71032ec828  cmp w10,#0x2
71032ec82c  b.eq 0x71032ec85c
71032ec830  cmp w10,#0x1
71032ec834  b.ne 0x71032ec864
71032ec838  fadd s4,s4,s6
71032ec83c  b 0x71032ec860
71032ec840  adrp x8,0x71052a8000
71032ec844  ldr x8,[x8, #0xa88]
71032ec848  ldr q4,[x8]
71032ec84c  fmov s0,wzr
71032ec850  mov v1.16B,v0.16B
71032ec854  dup s5,v4.S[0x1]
71032ec858  b 0x71032ec8dc
71032ec85c  fsub s4,s4,s6
71032ec860  mov v3.S[0x0],v4.S[0x0]
71032ec864  fmul s4,s1,s5
71032ec868  ubfx w9,w9,#0x2,#0x2
71032ec86c  cmp w9,#0x2
71032ec870  b.eq 0x71032ec888
71032ec874  cmp w9,#0x1
71032ec878  b.ne 0x71032ec894
71032ec87c  dup s5,v3.S[0x1]
71032ec880  fsub s4,s5,s4
71032ec884  b 0x71032ec890
71032ec888  dup s5,v3.S[0x1]
71032ec88c  fadd s4,s4,s5
71032ec890  mov v3.S[0x1],v4.S[0x0]
71032ec894  ldr x8,[x8, #0x18]
71032ec898  cbz x8,0x71032ec8d4
71032ec89c  ldp s4,s5,[x8, #0x30]
71032ec8a0  fadd s4,s3,s4
71032ec8a4  dup s6,v3.S[0x1]
71032ec8a8  fadd s5,s6,s5
71032ec8ac  dup s7,v3.S[0x2]
71032ec8b0  mov v3.16B,v2.16B
71032ec8b4  mov v3.S[0x0],v4.S[0x0]
71032ec8b8  ldr s6,[x8, #0x38]
71032ec8bc  mov v3.S[0x1],v5.S[0x0]
71032ec8c0  fadd s6,s7,s6
71032ec8c4  mov v3.S[0x2],v6.S[0x0]
71032ec8c8  ldr x8,[x8, #0x18]
71032ec8cc  cbnz x8,0x71032ec89c
71032ec8d0  b 0x71032ec8dc
71032ec8d4  dup s5,v3.S[0x1]
71032ec8d8  mov v4.16B,v3.16B
71032ec8dc  movi v2.2D,#0x0
71032ec8e0  mov v2.S[0x0],v0.S[0x0]
71032ec8e4  movi v0.4S,#0x3f, LSL #24
71032ec8e8  mov v2.S[0x1],v1.S[0x0]
71032ec8ec  adrp x8,0x7104472000
71032ec8f0  ldr s1,[x8, #0x8b8]
71032ec8f4  fadd s1,s4,s1
71032ec8f8  fmul v0.4S,v2.4S,v0.4S
71032ec8fc  adrp x8,0x7104472000
71032ec900  ldr s2,[x8, #0x4c4]
71032ec904  fsub s3,s1,s0
71032ec908  fadd s1,s1,s0
71032ec90c  dup s0,v0.S[0x1]
71032ec910  fsub s2,s2,s5
71032ec914  str s1,[x20, #0x1c8]
71032ec918  fsub s1,s2,s0
71032ec91c  fadd s0,s2,s0
71032ec920  add x24,x20,#0x138
71032ec924  str s3,[x20, #0x1c4]
71032ec928  str s1,[x20, #0x1cc]
71032ec92c  str s0,[x20, #0x1d0]
71032ec930  stp x27,xzr,[sp]
71032ec934  cbz x0,0x71032ec93c
71032ec938  bl 0x710392eb40
71032ec93c  ldr x8,[x23]
71032ec940  ldr x8,[x8]
71032ec944  add x0,x8,#0x8
71032ec948  adrp x1,0x7104412000
71032ec94c  add x1,x1,#0x6f6
71032ec950  sub x8,x29,#0xa0
71032ec954  bl 0x7103776640
71032ec958  ldur x0,[x29, #-0x98]
71032ec95c  fmov s0,0x3f800000
71032ec960  adrp x1,0x710433a000
71032ec964  add x1,x1,#0x60c
71032ec968  bl 0x7103778300
71032ec96c  mov w8,#0x101
71032ec970  strh w8,[sp, #0x8]
71032ec974  mov w8,#0x1
71032ec978  str w8,[sp, #0x10]
71032ec97c  strh w8,[sp, #0x14]
71032ec980  strb w8,[sp, #0x16]
71032ec984  mov x8,#0x41f0000000000000
71032ec988  sub x28,x29,#0x90
71032ec98c  sub x0,x29,#0x90
71032ec990  str x8,[sp, #0x18]
71032ec994  mov x8,sp
71032ec998  add x1,x8,#0xc0
71032ec99c  adrp x8,0x71050aa000
71032ec9a0  add x8,x8,#0x268
71032ec9a4  str xzr,[sp]
71032ec9a8  strh wzr,[sp, #0xe]
71032ec9ac  stur wzr,[sp, #0xa]
71032ec9b0  str wzr,[sp, #0x20]
71032ec9b4  str xzr,[sp, #0x50]
71032ec9b8  str xzr,[sp, #0x80]
71032ec9bc  str xzr,[sp, #0xb0]
71032ec9c0  str xzr,[sp, #0xe0]
71032ec9c4  str xzr,[sp, #0x110]
71032ec9c8  str wzr,[sp, #0x120]
71032ec9cc  stur x8,[x29, #-0x90]
71032ec9d0  stur x28,[x29, #-0x70]
71032ec9d4  bl 0x7101989a30
71032ec9d8  ldur x0,[x29, #-0x70]
71032ec9dc  cmp x28,x0
71032ec9e0  b.eq 0x71032ec9f4
71032ec9e4  cbz x0,0x71032eca00
71032ec9e8  ldr x8,[x0]
71032ec9ec  ldr x8,[x8, #0x28]
71032ec9f0  b 0x71032ec9fc
71032ec9f4  ldr x8,[x0]
71032ec9f8  ldr x8,[x8, #0x20]
71032ec9fc  blr x8
71032eca00  mov w8,#0x1
71032eca04  adrp x2,0x7104307000
71032eca08  add x2,x2,#0x72
71032eca0c  mov x3,sp
71032eca10  mov x0,x24
71032eca14  strb w8,[sp, #0x15]
71032eca18  mov x1,x25
71032eca1c  bl 0x7103770b30
71032eca20  adrp x25,0x71042b4000
71032eca24  add x25,x25,#0xcc
71032eca28  mov w1,#0x1
71032eca2c  mov x0,x24
71032eca30  mov x2,x25
71032eca34  bl 0x71037717d0
71032eca38  ldr x8,[x23]
71032eca3c  ldr x8,[x8]
71032eca40  add x0,x8,#0x8
71032eca44  sub x8,x29,#0x90
71032eca48  mov x1,x25
71032eca4c  bl 0x7103776640
71032eca50  ldur x25,[x29, #-0x88]
71032eca54  fmov s0,0x3f800000
71032eca58  adrp x1,0x710433a000
71032eca5c  add x1,x1,#0x60c
71032eca60  mov x0,x25
71032eca64  bl 0x7103778300
71032eca68  adrp x28,0x710523d000
71032eca6c  add x28,x28,#0x988
71032eca70  stp x28,xzr,[x29, #-0x90]
71032eca74  cbz x25,0x71032eca90
71032eca78  ldr x0,[x25, #0x18]
71032eca7c  stp x27,xzr,[x25, #0x10]
71032eca80  cbz x0,0x71032eca88
71032eca84  bl 0x710392eb40
71032eca88  mov x0,x25
71032eca8c  bl 0x710392eb40
71032eca90  adrp x25,0x71042a2000
71032eca94  add x25,x25,#0xdaf
71032eca98  mov w1,#0x2
71032eca9c  mov x0,x24
71032ecaa0  mov x2,x25
71032ecaa4  bl 0x71037717d0
71032ecaa8  ldr x8,[x23]
71032ecaac  ldr x8,[x8]
71032ecab0  add x0,x8,#0x8
71032ecab4  sub x8,x29,#0x90
71032ecab8  mov x1,x25
71032ecabc  bl 0x7103776640
71032ecac0  ldur x25,[x29, #-0x88]
71032ecac4  fmov s0,0x3f800000
71032ecac8  adrp x1,0x710433a000
71032ecacc  add x1,x1,#0x60c
71032ecad0  mov x0,x25
71032ecad4  bl 0x7103778300
71032ecad8  stp x28,xzr,[x29, #-0x90]
71032ecadc  cbz x25,0x71032ecaf8
71032ecae0  ldr x0,[x25, #0x18]
71032ecae4  stp x27,xzr,[x25, #0x10]
71032ecae8  cbz x0,0x71032ecaf0
71032ecaec  bl 0x710392eb40
71032ecaf0  mov x0,x25
71032ecaf4  bl 0x710392eb40
71032ecaf8  adrp x25,0x7104291000
71032ecafc  add x25,x25,#0x991
71032ecb00  orr w1,wzr,#0x3
71032ecb04  mov x0,x24
71032ecb08  mov x2,x25
71032ecb0c  bl 0x71037717d0
71032ecb10  ldr x8,[x23]
71032ecb14  ldr x8,[x8]
71032ecb18  add x0,x8,#0x8
71032ecb1c  sub x8,x29,#0x90
71032ecb20  mov x1,x25
71032ecb24  bl 0x7103776640
71032ecb28  ldur x25,[x29, #-0x88]
71032ecb2c  fmov s0,0x3f800000
71032ecb30  adrp x1,0x710433a000
71032ecb34  add x1,x1,#0x60c
71032ecb38  mov x0,x25
71032ecb3c  bl 0x7103778300
71032ecb40  stp x28,xzr,[x29, #-0x90]
71032ecb44  cbz x25,0x71032ecb60
71032ecb48  ldr x0,[x25, #0x18]
71032ecb4c  stp x27,xzr,[x25, #0x10]
71032ecb50  cbz x0,0x71032ecb58
71032ecb54  bl 0x710392eb40
71032ecb58  mov x0,x25
71032ecb5c  bl 0x710392eb40
71032ecb60  adrp x25,0x7104412000
71032ecb64  add x25,x25,#0x6f6
71032ecb68  mov w1,#0x4
71032ecb6c  mov x0,x24
71032ecb70  mov x2,x25
71032ecb74  bl 0x71037717d0
71032ecb78  ldr x8,[x23]
71032ecb7c  ldr x8,[x8]
71032ecb80  add x0,x8,#0x8
71032ecb84  sub x8,x29,#0x90
71032ecb88  mov x1,x25
71032ecb8c  bl 0x7103776640
71032ecb90  ldur x25,[x29, #-0x88]
71032ecb94  fmov s0,0x3f800000
71032ecb98  adrp x1,0x710433a000
71032ecb9c  add x1,x1,#0x60c
71032ecba0  mov x0,x25
71032ecba4  bl 0x7103778300
71032ecba8  stp x28,xzr,[x29, #-0x90]
71032ecbac  cbz x25,0x71032ecbc8
71032ecbb0  ldr x0,[x25, #0x18]
71032ecbb4  stp x27,xzr,[x25, #0x10]
71032ecbb8  cbz x0,0x71032ecbc0
71032ecbbc  bl 0x710392eb40
71032ecbc0  mov x0,x25
71032ecbc4  bl 0x710392eb40
71032ecbc8  adrp x25,0x71043f0000
71032ecbcc  add x25,x25,#0x6dc
71032ecbd0  mov w1,#0x5
71032ecbd4  mov x0,x24
71032ecbd8  mov x2,x25
71032ecbdc  bl 0x71037717d0
71032ecbe0  ldr x8,[x23]
71032ecbe4  ldr x8,[x8]
71032ecbe8  add x0,x8,#0x8
71032ecbec  sub x8,x29,#0x90
71032ecbf0  mov x1,x25
71032ecbf4  bl 0x7103776640
71032ecbf8  ldur x25,[x29, #-0x88]
71032ecbfc  fmov s0,0x3f800000
71032ecc00  adrp x1,0x710433a000
71032ecc04  add x1,x1,#0x60c
71032ecc08  mov x0,x25
71032ecc0c  bl 0x7103778300
71032ecc10  stp x28,xzr,[x29, #-0x90]
71032ecc14  cbz x25,0x71032ecc30
71032ecc18  ldr x0,[x25, #0x18]
71032ecc1c  stp x27,xzr,[x25, #0x10]
71032ecc20  cbz x0,0x71032ecc28
71032ecc24  bl 0x710392eb40
71032ecc28  mov x0,x25
71032ecc2c  bl 0x710392eb40
71032ecc30  adrp x25,0x710436b000
71032ecc34  add x25,x25,#0xe7f
71032ecc38  orr w1,wzr,#0x6
71032ecc3c  mov x0,x24
71032ecc40  mov x2,x25
71032ecc44  bl 0x71037717d0
71032ecc48  ldr x8,[x23]
71032ecc4c  ldr x8,[x8]
71032ecc50  add x0,x8,#0x8
71032ecc54  sub x8,x29,#0x90
71032ecc58  mov x1,x25
71032ecc5c  bl 0x7103776640
71032ecc60  ldur x23,[x29, #-0x88]
71032ecc64  fmov s0,0x3f800000
71032ecc68  adrp x1,0x710433a000
71032ecc6c  add x1,x1,#0x60c
71032ecc70  mov x0,x23
71032ecc74  bl 0x7103778300
71032ecc78  stp x28,xzr,[x29, #-0x90]
71032ecc7c  cbz x23,0x71032ecc98
71032ecc80  ldr x0,[x23, #0x18]
71032ecc84  stp x27,xzr,[x23, #0x10]
71032ecc88  cbz x0,0x71032ecc90
71032ecc8c  bl 0x710392eb40
71032ecc90  mov x0,x23
71032ecc94  bl 0x710392eb40
71032ecc98  mov x8,#0xce8
71032ecc9c  movk x8,#0xfc42, LSL #16
71032ecca0  movk x8,#0x7, LSL #32
71032ecca4  stur x8,[x29, #-0x90]
71032ecca8  ldr x0,[x20, #0x138]
71032eccac  mov w1,#0x4
71032eccb0  sub x2,x29,#0x90
71032eccb4  bl 0x7103772070
71032eccb8  mov w1,#0x1
71032eccbc  mov w2,#0x1
71032eccc0  mov x0,x24
71032eccc4  mov w23,#0x1
71032eccc8  bl 0x7103771a80
71032ecccc  ldr x0,[x20, #0x138]
71032eccd0  ldr x8,[x0]
71032eccd4  ldr x8,[x8, #0x60]
71032eccd8  mov w1,#0x1
71032eccdc  blr x8
71032ecce0  ldr x0,[x20, #0x138]
71032ecce4  ldr x8,[x0]
71032ecce8  ldr x8,[x8, #0x70]
71032eccec  mov w1,wzr
71032eccf0  blr x8
71032eccf4  orr w8,wzr,#0x3c
71032eccf8  mov x0,x20
71032eccfc  str w23,[x20, #0x1e0]
71032ecd00  str w8,[x20, #0x1e8]
71032ecd04  bl 0x7101afdf90
71032ecd08  ldr x0,[sp, #0x110]
71032ecd0c  mov x8,sp
71032ecd10  add x8,x8,#0xf0
71032ecd14  cmp x8,x0
71032ecd18  b.eq 0x71032ecd2c
71032ecd1c  cbz x0,0x71032ecd38
71032ecd20  ldr x8,[x0]
71032ecd24  ldr x8,[x8, #0x28]
71032ecd28  b 0x71032ecd34
71032ecd2c  ldr x8,[x0]
71032ecd30  ldr x8,[x8, #0x20]
71032ecd34  blr x8
71032ecd38  ldr x0,[sp, #0xe0]
71032ecd3c  mov x8,sp
71032ecd40  add x8,x8,#0xc0
71032ecd44  cmp x8,x0
71032ecd48  b.eq 0x71032ecd5c
71032ecd4c  cbz x0,0x71032ecd68
71032ecd50  ldr x8,[x0]
71032ecd54  ldr x8,[x8, #0x28]
71032ecd58  b 0x71032ecd64
71032ecd5c  ldr x8,[x0]
71032ecd60  ldr x8,[x8, #0x20]
71032ecd64  blr x8
71032ecd68  ldr x0,[sp, #0xb0]
71032ecd6c  mov x8,sp
71032ecd70  add x8,x8,#0x90
71032ecd74  cmp x8,x0
71032ecd78  b.eq 0x71032ecd8c
71032ecd7c  cbz x0,0x71032ecd98
71032ecd80  ldr x8,[x0]
71032ecd84  ldr x8,[x8, #0x28]
71032ecd88  b 0x71032ecd94
71032ecd8c  ldr x8,[x0]
71032ecd90  ldr x8,[x8, #0x20]
71032ecd94  blr x8
71032ecd98  ldr x0,[sp, #0x80]
71032ecd9c  mov x8,sp
71032ecda0  add x8,x8,#0x60
71032ecda4  cmp x8,x0
71032ecda8  b.eq 0x71032ecdbc
71032ecdac  cbz x0,0x71032ecdc8
71032ecdb0  ldr x8,[x0]
71032ecdb4  ldr x8,[x8, #0x28]
71032ecdb8  b 0x71032ecdc4
71032ecdbc  ldr x8,[x0]
71032ecdc0  ldr x8,[x8, #0x20]
71032ecdc4  blr x8
71032ecdc8  ldr x0,[sp, #0x50]
71032ecdcc  mov x8,sp
71032ecdd0  add x8,x8,#0x30
71032ecdd4  cmp x8,x0
71032ecdd8  b.eq 0x71032ecdec
71032ecddc  cbz x0,0x71032ecdf8
71032ecde0  ldr x8,[x0]
71032ecde4  ldr x8,[x8, #0x28]
71032ecde8  b 0x71032ecdf4
71032ecdec  ldr x8,[x0]
71032ecdf0  ldr x8,[x8, #0x20]
71032ecdf4  blr x8
71032ecdf8  ldur x23,[x29, #-0x98]
71032ecdfc  add x24,x20,#0x130
71032ece00  stp x28,xzr,[x29, #-0xa0]
71032ece04  cbz x23,0x71032ece20
71032ece08  ldr x0,[x23, #0x18]
71032ece0c  stp x27,xzr,[x23, #0x10]
71032ece10  cbz x0,0x71032ece18
71032ece14  bl 0x710392eb40
71032ece18  mov x0,x23
71032ece1c  bl 0x710392eb40
71032ece20  ldr x1,[x26]
71032ece24  adrp x2,0x7104544000
71032ece28  add x2,x2,#0x758
71032ece2c  mov w3,#0x1
71032ece30  mov x0,x24
71032ece34  bl 0x71032cbf30
71032ece38  ldr x8,[x24]
71032ece3c  ldr x8,[x8]
71032ece40  ldr x0,[x8]
71032ece44  mov w1,wzr
71032ece48  bl 0x71037760f0
71032ece4c  ldr x8,[x24]
71032ece50  ldr x8,[x8]
71032ece54  ldr x9,[x8]
71032ece58  ldr x8,[x9, #0x600]
71032ece5c  orr w10,wzr,#0x7
71032ece60  str w10,[x8, #0x494]
71032ece64  ldr x8,[x9, #0x608]
71032ece68  ldr x9,[x9, #0x610]
71032ece6c  cmp x8,x9
71032ece70  b.eq 0x71032ecee0
71032ece74  sub x10,x9,#0x10
71032ece78  sub x10,x10,x8
71032ece7c  ubfx x11,x10,#0x4,#0x1c
71032ece80  add w11,w11,#0x1
71032ece84  ands x11,x11,#0x3
71032ece88  b.eq 0x71032ecea8
71032ece8c  neg x11,x11
71032ece90  orr w12,wzr,#0x7
71032ece94  ldr x13,[x8, #0x8]
71032ece98  add x8,x8,#0x10
71032ece9c  adds x11,x11,#0x1
71032ecea0  str w12,[x13, #0x494]
71032ecea4  b.ne 0x71032ece94
71032ecea8  cmp x10,#0x30
71032eceac  b.cc 0x71032ecee0
71032eceb0  orr w10,wzr,#0x7
71032eceb4  ldr x11,[x8, #0x8]
71032eceb8  str w10,[x11, #0x494]
71032ecebc  ldr x11,[x8, #0x18]
71032ecec0  str w10,[x11, #0x494]
71032ecec4  ldr x11,[x8, #0x28]
71032ecec8  str w10,[x11, #0x494]
71032ececc  ldr x11,[x8, #0x38]
71032eced0  add x8,x8,#0x40
71032eced4  cmp x9,x8
71032eced8  str w10,[x11, #0x494]
71032ecedc  b.ne 0x71032eceb4
71032ecee0  ldr x8,[x20, #0x130]
71032ecee4  ldr x8,[x8]
71032ecee8  ldr x0,[x8, #0x10]
71032eceec  adrp x1,0x7104349000
71032ecef0  add x1,x1,#0xe91
71032ecef4  add x23,x8,#0x8
71032ecef8  bl 0x7103778760
71032ecefc  ldr w8,[x20, #0x1fc]
71032ecf00  cmp w8,#0x1
71032ecf04  b.eq 0x71032ecf64
71032ecf08  ldr x8,[x24]
71032ecf0c  ldr x24,[x8]
71032ecf10  mov x8,sp
71032ecf14  add x0,x24,#0x8
71032ecf18  adrp x1,0x71043ad000
71032ecf1c  add x1,x1,#0xfe3
71032ecf20  bl 0x7103776910
71032ecf24  ldr x0,[sp, #0x8]
71032ecf28  ldr x8,[x0]
71032ecf2c  cbz x8,0x71032ecf3c
71032ecf30  ldrb w9,[x8, #0x58]
71032ecf34  orr w9,w9,#0x1
71032ecf38  strb w9,[x8, #0x58]
71032ecf3c  stp x27,xzr,[sp]
71032ecf40  cbz x0,0x71032ecf48
71032ecf44  bl 0x710392eb40
71032ecf48  ldr x0,[x24, #0x10]
71032ecf4c  fmov s0,0x3f800000
71032ecf50  adrp x1,0x71042a3000
71032ecf54  add x1,x1,#0x672
71032ecf58  bl 0x7103778300
71032ecf5c  mov w8,#0x1
71032ecf60  str w8,[x20, #0x1fc]
71032ecf64  adrp x1,0x71043ce000
71032ecf68  add x1,x1,#0xfa6
71032ecf6c  mov x8,sp
71032ecf70  mov x0,x23
71032ecf74  mov x24,sp
71032ecf78  bl 0x7103776640
71032ecf7c  cmp x24,x22
71032ecf80  b.eq 0x71032ecfb0
71032ecf84  ldr x8,[sp, #0x8]
71032ecf88  str xzr,[sp, #0x8]
71032ecf8c  ldr x24,[x20, #0x168]
71032ecf90  str x8,[x20, #0x168]
71032ecf94  cbz x24,0x71032ecfb0
71032ecf98  ldr x0,[x24, #0x18]
71032ecf9c  stp x27,xzr,[x24, #0x10]
71032ecfa0  cbz x0,0x71032ecfa8
71032ecfa4  bl 0x710392eb40
71032ecfa8  mov x0,x24
71032ecfac  bl 0x710392eb40
71032ecfb0  ldr x24,[sp, #0x8]
71032ecfb4  add x25,x20,#0x190
71032ecfb8  stp x28,xzr,[sp]
71032ecfbc  cbz x24,0x71032ecfd8
71032ecfc0  ldr x0,[x24, #0x18]
71032ecfc4  stp x27,xzr,[x24, #0x10]
71032ecfc8  cbz x0,0x71032ecfd0
71032ecfcc  bl 0x710392eb40
71032ecfd0  mov x0,x24
71032ecfd4  bl 0x710392eb40
71032ecfd8  adrp x1,0x710438c000
71032ecfdc  add x1,x1,#0x4b6
71032ecfe0  mov x8,sp
71032ecfe4  mov x0,x22
71032ecfe8  mov x24,sp
71032ecfec  bl 0x7103776910
71032ecff0  cmp x24,x25
71032ecff4  b.eq 0x71032ed010
71032ecff8  ldr x8,[sp, #0x8]
71032ecffc  str xzr,[sp, #0x8]
71032ed000  ldr x0,[x20, #0x198]
71032ed004  str x8,[x20, #0x198]
71032ed008  cbz x0,0x71032ed010
71032ed00c  bl 0x710392eb40
71032ed010  ldr x0,[sp, #0x8]
71032ed014  add x24,x20,#0x1a0
71032ed018  stp x27,xzr,[sp]
71032ed01c  cbz x0,0x71032ed024
71032ed020  bl 0x710392eb40
71032ed024  adrp x1,0x710439c000
71032ed028  add x1,x1,#0xf97
71032ed02c  mov x8,sp
71032ed030  mov x0,x22
71032ed034  mov x25,sp
71032ed038  bl 0x7103776910
71032ed03c  cmp x25,x24
71032ed040  b.eq 0x71032ed05c
71032ed044  ldr x8,[sp, #0x8]
71032ed048  str xzr,[sp, #0x8]
71032ed04c  ldr x0,[x20, #0x1a8]
71032ed050  str x8,[x20, #0x1a8]
71032ed054  cbz x0,0x71032ed05c
71032ed058  bl 0x710392eb40
71032ed05c  ldr x0,[sp, #0x8]
71032ed060  add x24,x20,#0x1b0
71032ed064  stp x27,xzr,[sp]
71032ed068  cbz x0,0x71032ed070
71032ed06c  bl 0x710392eb40
71032ed070  adrp x1,0x71042b3000
71032ed074  add x1,x1,#0xf02
71032ed078  mov x8,sp
71032ed07c  mov x0,x22
71032ed080  mov x25,sp
71032ed084  bl 0x7103776910
71032ed088  cmp x25,x24
71032ed08c  b.eq 0x71032ed0a8
71032ed090  ldr x8,[sp, #0x8]
71032ed094  str xzr,[sp, #0x8]
71032ed098  ldr x0,[x20, #0x1b8]
71032ed09c  str x8,[x20, #0x1b8]
71032ed0a0  cbz x0,0x71032ed0a8
71032ed0a4  bl 0x710392eb40
71032ed0a8  ldr x0,[sp, #0x8]
71032ed0ac  stp x27,xzr,[sp]
71032ed0b0  cbz x0,0x71032ed0b8
71032ed0b4  bl 0x710392eb40
71032ed0b8  adrp x1,0x71042b4000
71032ed0bc  add x1,x1,#0x510
71032ed0c0  mov x8,sp
71032ed0c4  mov x0,x23
71032ed0c8  mov x22,sp
71032ed0cc  bl 0x7103776640
71032ed0d0  cmp x22,x21
71032ed0d4  b.eq 0x71032ed104
71032ed0d8  ldr x8,[sp, #0x8]
71032ed0dc  str xzr,[sp, #0x8]
71032ed0e0  ldr x21,[x20, #0x178]
71032ed0e4  str x8,[x20, #0x178]
71032ed0e8  cbz x21,0x71032ed104
71032ed0ec  ldr x0,[x21, #0x18]
71032ed0f0  stp x27,xzr,[x21, #0x10]
71032ed0f4  cbz x0,0x71032ed0fc
71032ed0f8  bl 0x710392eb40
71032ed0fc  mov x0,x21
71032ed100  bl 0x710392eb40
71032ed104  ldr x21,[sp, #0x8]
71032ed108  stp x28,xzr,[sp]
71032ed10c  cbz x21,0x71032ed128
71032ed110  ldr x0,[x21, #0x18]
71032ed114  stp x27,xzr,[x21, #0x10]
71032ed118  cbz x0,0x71032ed120
71032ed11c  bl 0x710392eb40
71032ed120  mov x0,x21
71032ed124  bl 0x710392eb40
71032ed128  ldr x0,[x20, #0x178]
71032ed12c  fmov s0,0x3f800000
71032ed130  adrp x1,0x7104339000
71032ed134  add x1,x1,#0xcd6
71032ed138  bl 0x7103778300
71032ed13c  ldr x8,[x20, #0x130]
71032ed140  ldr x8,[x8]
71032ed144  ldr x21,[x8]
71032ed148  ldr x0,[x21, #0x600]
71032ed14c  mov w2,#0x198
71032ed150  mov w1,wzr
71032ed154  bl 0x71039c02a0
71032ed158  ldr x8,[x21, #0x600]
71032ed15c  mov w9,#0x440
71032ed160  str w9,[x8, #0x14]
71032ed164  ldr x8,[x21, #0x600]
71032ed168  mov w9,#0x800
71032ed16c  str w9,[x8, #0x18]
71032ed170  ldr x8,[x21, #0x600]
71032ed174  mov w9,#0x10
71032ed178  mov w1,#0x1
71032ed17c  mov x0,x20
71032ed180  str w9,[x8, #0x1c]
71032ed184  mov w21,#0x1
71032ed188  bl 0x7101afe3e0
71032ed18c  adrp x8,0x7105333000
71032ed190  add x8,x8,#0x600
71032ed194  strb wzr,[x20, #0x1f0]
71032ed198  str x8,[x19, #0x10]
71032ed19c  ldp w9,w8,[x8, #0x60]
71032ed1a0  stp w9,w8,[x19, #0x68]
71032ed1a4  adrp x8,0x7105333000
71032ed1a8  add x8,x8,#0x650
71032ed1ac  ldaxrb w9,[x8]
71032ed1b0  stxrb w10,w21,[x8]
71032ed1b4  and w9,w9,#0x1
71032ed1b8  cmp w10,#0x0
71032ed1bc  ccmp w9,#0x0,#0x0,eq
71032ed1c0  b.ne 0x71032ed1ac
71032ed1c4  adrp x8,0x7105333000
71032ed1c8  add x8,x8,#0x648
71032ed1cc  ldr x9,[x8]
71032ed1d0  str x9,[x19, #0x48]
71032ed1d4  mov x0,x19
71032ed1d8  str x19,[x8], #0x8
71032ed1dc  stlrb wzr,[x8]
71032ed1e0  bl 0x71032caea0
71032ed1e4  ldr x0,[x26, #0x8]
71032ed1e8  str x19,[x26, #0x8]
71032ed1ec  cbz x0,0x71032ed1f4
71032ed1f0  bl 0x71032cad20
71032ed1f4  ldr x0,[x26]
71032ed1f8  bl 0x710323b9e0
71032ed1fc  ldr x8,[x26, #0x8]
71032ed200  strb wzr,[x8, #0x70]
71032ed204  mov w8,#0x1
71032ed208  strb w8,[x26, #0x34]
71032ed20c  ldp x29,x30,[sp, #0x1d0]
71032ed210  ldp x20,x19,[sp, #0x1c0]
71032ed214  ldp x22,x21,[sp, #0x1b0]
71032ed218  ldp x24,x23,[sp, #0x1a0]
71032ed21c  ldp x26,x25,[sp, #0x190]
71032ed220  ldp x28,x27,[sp, #0x180]
71032ed224  add sp,sp,#0x1e0
71032ed228  ret
71032ed22c  bl 0x71039c2650
