// addr:      71001fd1d0
// offset:    0x1fd1d0
// name:      FUN_71001fd1d0
// mangled:   
// size:      3336

71001fd1d0  sub sp,sp,#0x120
71001fd1d4  stp x28,x27,[sp, #0xc0]
71001fd1d8  stp x26,x25,[sp, #0xd0]
71001fd1dc  stp x24,x23,[sp, #0xe0]
71001fd1e0  stp x22,x21,[sp, #0xf0]
71001fd1e4  stp x20,x19,[sp, #0x100]
71001fd1e8  stp x29,x30,[sp, #0x110]
71001fd1ec  add x29,sp,#0x110
71001fd1f0  ldr x23,[x1, #0x10]
71001fd1f4  cbz x23,0x71001fd260
71001fd1f8  mov x19,x0
71001fd1fc  mov x0,x23
71001fd200  mov w26,w3
71001fd204  mov x20,x2
71001fd208  mov x21,x1
71001fd20c  bl 0x7100216760
71001fd210  tbz w0,#0x0,0x71001fd260
71001fd214  adrp x8,0x71052a4000
71001fd218  ldrb w22,[x23, #0x42]
71001fd21c  ldr x8,[x8, #0xda8]
71001fd220  ldrb w8,[x8]
71001fd224  cbz w8,0x71001fd268
71001fd228  adrp x8,0x71052a4000
71001fd22c  ldr x8,[x8, #0xdb8]
71001fd230  ldr x0,[x8]
71001fd234  bl 0x7101717960
71001fd238  ldr w8,[x0]
71001fd23c  cbz w8,0x71001fd268
71001fd240  adrp x10,0x71052a6000
71001fd244  ldr x10,[x10, #0xe18]
71001fd248  mov w9,#0x2e8
71001fd24c  madd x9,x22,x9,x10
71001fd250  mov w10,#0x168
71001fd254  ldr x9,[x9, #0x10]
71001fd258  madd x25,x8,x10,x9
71001fd25c  b 0x71001fd27c
71001fd260  mov x19,xzr
71001fd264  b 0x71001fdeb4
71001fd268  adrp x8,0x71052a6000
71001fd26c  ldr x8,[x8, #0xe18]
71001fd270  mov w9,#0x2e8
71001fd274  madd x8,x22,x9,x8
71001fd278  add x25,x8,#0x18
71001fd27c  ldp x9,x10,[x25, #0x50]
71001fd280  ldrb w8,[x23, #0xa2]
71001fd284  cmp x10,x9
71001fd288  str w8,[sp, #0x28]
71001fd28c  csel x8,x9,x10,cc
71001fd290  stp x9,x10,[sp, #0x30]
71001fd294  stp x25,x8,[sp, #0x40]
71001fd298  ldrh w9,[x23, #0x60]
71001fd29c  ldrb w8,[x19, #0x1e8]
71001fd2a0  stp x20,x19,[sp, #0x10]
71001fd2a4  and w9,w9,#0xf
71001fd2a8  cmp w9,#0x4
71001fd2ac  b.eq 0x71001fd2c8
71001fd2b0  ldr x9,[x23, #0x138]
71001fd2b4  cbz x9,0x71001fd2c8
71001fd2b8  cbz w8,0x71001fd3d0
71001fd2bc  ldrb w8,[x9, #0x30]
71001fd2c0  tbnz w8,#0x2,0x71001fd2cc
71001fd2c4  b 0x71001fd3d0
71001fd2c8  cbz w8,0x71001fd3d0
71001fd2cc  orr w0,wzr,#0x38
71001fd2d0  mov w1,wzr
71001fd2d4  bl 0x71001b4580
71001fd2d8  mov x24,x0
71001fd2dc  cbz x0,0x71001fd330
71001fd2e0  adrp x8,0x71052a6000
71001fd2e4  ldr x8,[x8, #0x970]
71001fd2e8  adrp x9,0x71052a6000
71001fd2ec  ldr x9,[x9, #0xb80]
71001fd2f0  mov w10,#0x1
71001fd2f4  mov w1,w26
71001fd2f8  mov w2,#0x4
71001fd2fc  add x8,x8,#0x10
71001fd300  str x8,[x24]
71001fd304  add x8,x24,#0x8
71001fd308  stlr w10,[x8]
71001fd30c  add x8,x9,#0x10
71001fd310  mov x0,x24
71001fd314  strb wzr,[x24, #0xc]
71001fd318  str x8,[x24]
71001fd31c  bl 0x71001cf760
71001fd320  adrp x8,0x71052a7000
71001fd324  ldr x8,[x8, #0xa8]
71001fd328  add x8,x8,#0x10
71001fd32c  str x8,[x24]
71001fd330  orr w0,wzr,#0x38
71001fd334  mov w1,wzr
71001fd338  bl 0x71001b4580
71001fd33c  mov x25,x0
71001fd340  cbz x0,0x71001fd394
71001fd344  adrp x8,0x71052a6000
71001fd348  ldr x8,[x8, #0x970]
71001fd34c  adrp x9,0x71052a6000
71001fd350  ldr x9,[x9, #0xb80]
71001fd354  mov w10,#0x1
71001fd358  mov w1,w26
71001fd35c  mov w2,#0x4
71001fd360  add x8,x8,#0x10
71001fd364  str x8,[x25]
71001fd368  add x8,x25,#0x8
71001fd36c  stlr w10,[x8]
71001fd370  add x8,x9,#0x10
71001fd374  mov x0,x25
71001fd378  strb wzr,[x25, #0xc]
71001fd37c  str x8,[x25]
71001fd380  bl 0x71001cf760
71001fd384  adrp x8,0x71052a7000
71001fd388  ldr x8,[x8, #0xa8]
71001fd38c  add x8,x8,#0x10
71001fd390  str x8,[x25]
71001fd394  cbz x24,0x71001fd3bc
71001fd398  cbz x25,0x71001fd3ac
71001fd39c  ldr x8,[x24, #0x10]
71001fd3a0  cbz x8,0x71001fd3ac
71001fd3a4  ldr x8,[x25, #0x10]
71001fd3a8  cbnz x8,0x71001fd470
71001fd3ac  ldr x8,[x24]
71001fd3b0  ldr x8,[x8, #0x8]
71001fd3b4  mov x0,x24
71001fd3b8  blr x8
71001fd3bc  cbz x25,0x71001fd3d0
71001fd3c0  ldr x8,[x25]
71001fd3c4  ldr x8,[x8, #0x8]
71001fd3c8  mov x0,x25
71001fd3cc  blr x8
71001fd3d0  orr w0,wzr,#0x38
71001fd3d4  bl 0x71001af850
71001fd3d8  mov x24,x0
71001fd3dc  cbz x0,0x71001fd420
71001fd3e0  adrp x8,0x71052a6000
71001fd3e4  ldr x8,[x8, #0x970]
71001fd3e8  adrp x9,0x71052a6000
71001fd3ec  ldr x9,[x9, #0xb80]
71001fd3f0  mov w10,#0x1
71001fd3f4  mov w1,w26
71001fd3f8  mov x0,x24
71001fd3fc  add x8,x8,#0x10
71001fd400  str x8,[x24]
71001fd404  add x8,x24,#0x8
71001fd408  stlr w10,[x8]
71001fd40c  add x8,x9,#0x10
71001fd410  mov w2,wzr
71001fd414  strb wzr,[x24, #0xc]
71001fd418  str x8,[x24]
71001fd41c  bl 0x71001cf760
71001fd420  orr w0,wzr,#0x38
71001fd424  bl 0x71001af850
71001fd428  mov x25,x0
71001fd42c  cbz x0,0x71001fd470
71001fd430  adrp x8,0x71052a6000
71001fd434  ldr x8,[x8, #0x970]
71001fd438  adrp x9,0x71052a6000
71001fd43c  ldr x9,[x9, #0xb80]
71001fd440  mov w10,#0x1
71001fd444  mov w1,w26
71001fd448  mov x0,x25
71001fd44c  add x8,x8,#0x10
71001fd450  str x8,[x25]
71001fd454  add x8,x25,#0x8
71001fd458  stlr w10,[x8]
71001fd45c  add x8,x9,#0x10
71001fd460  mov w2,wzr
71001fd464  strb wzr,[x25, #0xc]
71001fd468  str x8,[x25]
71001fd46c  bl 0x71001cf760
71001fd470  add x0,sp,#0x88
71001fd474  mov x1,x24
71001fd478  bl 0x71001d01c0
71001fd47c  add x8,x24,#0x8
71001fd480  ldar w11,[x8]
71001fd484  ldaxr w10,[x8]
71001fd488  sub w9,w11,#0x1
71001fd48c  cmp w10,w11
71001fd490  b.ne 0x71001fd4a8
71001fd494  stlxr w11,w9,[x8]
71001fd498  cbnz w11,0x71001fd4ac
71001fd49c  mov w11,#0x1
71001fd4a0  tbz w11,#0x0,0x71001fd4b4
71001fd4a4  b 0x71001fd4fc
71001fd4a8  clrex 
71001fd4ac  mov w11,wzr
71001fd4b0  tbnz w11,#0x0,0x71001fd4fc
71001fd4b4  ldaxr w11,[x8]
71001fd4b8  sub w9,w10,#0x1
71001fd4bc  cmp w11,w10
71001fd4c0  b.ne 0x71001fd4dc
71001fd4c4  stlxr w10,w9,[x8]
71001fd4c8  cbz w10,0x71001fd4f0
71001fd4cc  mov w12,wzr
71001fd4d0  mov w10,w11
71001fd4d4  cbz w12,0x71001fd4b4
71001fd4d8  b 0x71001fd4fc
71001fd4dc  clrex 
71001fd4e0  mov w12,wzr
71001fd4e4  mov w10,w11
71001fd4e8  cbz w12,0x71001fd4b4
71001fd4ec  b 0x71001fd4fc
71001fd4f0  mov w12,#0x1
71001fd4f4  mov w10,w11
71001fd4f8  cbz w12,0x71001fd4b4
71001fd4fc  cbnz w9,0x71001fd520
71001fd500  ldrb w8,[x24, #0xc]
71001fd504  cbnz w8,0x71001fd520
71001fd508  mov w8,#0x1
71001fd50c  strb w8,[x24, #0xc]
71001fd510  ldr x8,[x24]
71001fd514  ldr x8,[x8, #0x8]
71001fd518  mov x0,x24
71001fd51c  blr x8
71001fd520  add x0,sp,#0x68
71001fd524  mov x1,x25
71001fd528  bl 0x71001d01c0
71001fd52c  add x8,x25,#0x8
71001fd530  ldar w11,[x8]
71001fd534  ldaxr w10,[x8]
71001fd538  sub w9,w11,#0x1
71001fd53c  cmp w10,w11
71001fd540  b.ne 0x71001fd558
71001fd544  stlxr w11,w9,[x8]
71001fd548  cbnz w11,0x71001fd55c
71001fd54c  mov w11,#0x1
71001fd550  tbz w11,#0x0,0x71001fd564
71001fd554  b 0x71001fd5ac
71001fd558  clrex 
71001fd55c  mov w11,wzr
71001fd560  tbnz w11,#0x0,0x71001fd5ac
71001fd564  ldaxr w11,[x8]
71001fd568  sub w9,w10,#0x1
71001fd56c  cmp w11,w10
71001fd570  b.ne 0x71001fd58c
71001fd574  stlxr w10,w9,[x8]
71001fd578  cbz w10,0x71001fd5a0
71001fd57c  mov w12,wzr
71001fd580  mov w10,w11
71001fd584  cbz w12,0x71001fd564
71001fd588  b 0x71001fd5ac
71001fd58c  clrex 
71001fd590  mov w12,wzr
71001fd594  mov w10,w11
71001fd598  cbz w12,0x71001fd564
71001fd59c  b 0x71001fd5ac
71001fd5a0  mov w12,#0x1
71001fd5a4  mov w10,w11
71001fd5a8  cbz w12,0x71001fd564
71001fd5ac  cbnz w9,0x71001fd5d0
71001fd5b0  ldrb w8,[x25, #0xc]
71001fd5b4  cbnz w8,0x71001fd5d0
71001fd5b8  mov w8,#0x1
71001fd5bc  strb w8,[x25, #0xc]
71001fd5c0  ldr x8,[x25]
71001fd5c4  ldr x8,[x8, #0x8]
71001fd5c8  mov x0,x25
71001fd5cc  blr x8
71001fd5d0  adrp x8,0x71052a4000
71001fd5d4  ldr x8,[x8, #0xda8]
71001fd5d8  adrp x20,0x71052a4000
71001fd5dc  ldrb w8,[x8]
71001fd5e0  ldr x20,[x20, #0xdb0]
71001fd5e4  add x19,x20,#0x18
71001fd5e8  cbz w8,0x71001fd624
71001fd5ec  adrp x8,0x71052a4000
71001fd5f0  ldr x8,[x8, #0xdb8]
71001fd5f4  ldr x0,[x8]
71001fd5f8  bl 0x7101717960
71001fd5fc  ldr w8,[x0]
71001fd600  cbz w8,0x71001fd624
71001fd604  ldr x10,[x20, #0xa0]
71001fd608  ldp x9,x10,[x10]
71001fd60c  sub x10,x10,x9
71001fd610  asr x10,x10,#0x3
71001fd614  cmp x10,x8
71001fd618  b.ls 0x71001fd634
71001fd61c  ldr x8,[x9, x8, LSL #0x3]
71001fd620  add x19,x8,#0x10
71001fd624  ldr x8,[x19]
71001fd628  cbz x8,0x71001fd650
71001fd62c  ldr x8,[x8, #0x10]
71001fd630  b 0x71001fd650
71001fd634  adrp x0,0x71042c4000
71001fd638  add x0,x0,#0x35f
71001fd63c  mov w1,#0x47
71001fd640  orr w2,wzr,#0xe0000003
71001fd644  mov w3,wzr
71001fd648  bl 0x71001b1300
71001fd64c  mov x8,xzr
71001fd650  ldr w9,[x23, #0x1e8]
71001fd654  sub w9,w9,#0x1
71001fd658  cmp w9,#0x2
71001fd65c  mov w9,#0x1a8
71001fd660  mov w10,#0x1b0
71001fd664  csel x9,x10,x9,cc
71001fd668  ldr x10,[x21, #0x20]
71001fd66c  adrp x19,0x71052a7000
71001fd670  ldr x19,[x19, #0x220]
71001fd674  cmp x10,x23
71001fd678  b.eq 0x71001fdca0
71001fd67c  stp x22,xzr,[sp]
71001fd680  adrp x19,0x71052a6000
71001fd684  ldr x25,[x8, x9, LSL #0x0]
71001fd688  mov w8,w26
71001fd68c  str xzr,[sp, #0x20]
71001fd690  str x8,[sp, #0x50]
71001fd694  ldr x19,[x19, #0xe18]
71001fd698  mov x20,xzr
71001fd69c  mov w22,#0x2e8
71001fd6a0  mov x26,x23
71001fd6a4  add x0,sp,#0x88
71001fd6a8  bl 0x71001d0400
71001fd6ac  ldr x8,[x25]
71001fd6b0  ldr x8,[x8, #0x40]
71001fd6b4  add x2,sp,#0x88
71001fd6b8  mov x0,x25
71001fd6bc  mov x1,x26
71001fd6c0  blr x8
71001fd6c4  ldr x8,[sp, #0x78]
71001fd6c8  ldr x1,[sp, #0x98]
71001fd6cc  ldr x8,[x8, #0x18]
71001fd6d0  ldr x9,[x1, #0x18]
71001fd6d4  add x8,x9,x8
71001fd6d8  ldr x9,[sp, #0x50]
71001fd6dc  cmp x8,x9
71001fd6e0  b.hi 0x71001fdc10
71001fd6e4  add x0,sp,#0x68
71001fd6e8  bl 0x71001d05f0
71001fd6ec  add x24,x26,#0x8
71001fd6f0  ldar w9,[x24]
71001fd6f4  ldaxr w8,[x24]
71001fd6f8  cmp w8,w9
71001fd6fc  b.ne 0x71001fd718
71001fd700  add w9,w9,#0x1
71001fd704  stlxr w10,w9,[x24]
71001fd708  cbnz w10,0x71001fd71c
71001fd70c  mov w9,#0x1
71001fd710  tbz w9,#0x0,0x71001fd724
71001fd714  b 0x71001fd76c
71001fd718  clrex 
71001fd71c  mov w9,wzr
71001fd720  tbnz w9,#0x0,0x71001fd76c
71001fd724  ldaxr w9,[x24]
71001fd728  cmp w9,w8
71001fd72c  b.ne 0x71001fd74c
71001fd730  add w8,w8,#0x1
71001fd734  stlxr w10,w8,[x24]
71001fd738  cbz w10,0x71001fd760
71001fd73c  mov w10,wzr
71001fd740  mov w8,w9
71001fd744  cbz w10,0x71001fd724
71001fd748  b 0x71001fd76c
71001fd74c  clrex 
71001fd750  mov w10,wzr
71001fd754  mov w8,w9
71001fd758  cbz w10,0x71001fd724
71001fd75c  b 0x71001fd76c
71001fd760  mov w10,#0x1
71001fd764  mov w8,w9
71001fd768  cbz w10,0x71001fd724
71001fd76c  str x23,[sp, #0x60]
71001fd770  ldr x8,[x21]
71001fd774  ldr x9,[x8, #0x28]
71001fd778  sub x8,x29,#0x60
71001fd77c  add x1,sp,#0x60
71001fd780  mov x0,x21
71001fd784  blr x9
71001fd788  ldur x23,[x29, #-0x60]
71001fd78c  ldr x8,[x26, #0x218]
71001fd790  cbz x8,0x71001fd8dc
71001fd794  adrp x8,0x71052a7000
71001fd798  ldr x8,[x8, #0x218]
71001fd79c  ldrb w8,[x8]
71001fd7a0  cbz w8,0x71001fd8dc
71001fd7a4  ldrh w8,[x26, #0x60]
71001fd7a8  and w9,w8,#0xf
71001fd7ac  cmp w9,#0x2
71001fd7b0  b.ne 0x71001fd8dc
71001fd7b4  ldrb w9,[x26, #0x42]
71001fd7b8  cmp w9,#0x1
71001fd7bc  b.ne 0x71001fd8dc
71001fd7c0  ands w9,w8,#0x30
71001fd7c4  b.ne 0x71001fd7d8
71001fd7c8  adrp x10,0x71052a7000
71001fd7cc  ldr x10,[x10, #0x228]
71001fd7d0  ldrb w10,[x10]
71001fd7d4  cbz w10,0x71001fd8dc
71001fd7d8  adrp x10,0x71052a7000
71001fd7dc  ldr x10,[x10, #0x230]
71001fd7e0  ldrb w10,[x10]
71001fd7e4  cmp w10,#0x0
71001fd7e8  cset w10,ne
71001fd7ec  tst w8,#0x10
71001fd7f0  cset w8,eq
71001fd7f4  cbz w9,0x71001fd800
71001fd7f8  and w8,w8,w10
71001fd7fc  cbz w8,0x71001fd8dc
71001fd800  ldrb w8,[x26, #0x211]
71001fd804  cbnz w8,0x71001fd8dc
71001fd808  ldr x8,[x26, #0x18]
71001fd80c  cbnz x8,0x71001fd8d4
71001fd810  ldr x8,[x26, #0x10]
71001fd814  cbnz x8,0x71001fd8d4
71001fd818  ldr x8,[sp, #0x18]
71001fd81c  ldr x8,[x8, #0x1c8]
71001fd820  cmp x8,x26
71001fd824  b.eq 0x71001fd8d4
71001fd828  add x8,x26,#0x8
71001fd82c  ldar w10,[x8]
71001fd830  ldaxr w9,[x8]
71001fd834  cmp w9,w10
71001fd838  b.ne 0x71001fd854
71001fd83c  add w10,w10,#0x1
71001fd840  stlxr w11,w10,[x8]
71001fd844  cbnz w11,0x71001fd858
71001fd848  mov w10,#0x1
71001fd84c  tbz w10,#0x0,0x71001fd860
71001fd850  b 0x71001fd898
71001fd854  clrex 
71001fd858  mov w10,wzr
71001fd85c  tbnz w10,#0x0,0x71001fd898
71001fd860  ldaxr w10,[x8]
71001fd864  cmp w10,w9
71001fd868  b.ne 0x71001fd888
71001fd86c  add w9,w9,#0x1
71001fd870  stlxr w11,w9,[x8]
71001fd874  cbnz w11,0x71001fd88c
71001fd878  mov w11,#0x1
71001fd87c  mov w9,w10
71001fd880  cbz w11,0x71001fd860
71001fd884  b 0x71001fd898
71001fd888  clrex 
71001fd88c  mov w11,wzr
71001fd890  mov w9,w10
71001fd894  cbz w11,0x71001fd860
71001fd898  ldr x10,[sp, #0x18]
71001fd89c  ldr x8,[x10, #0x1c8]
71001fd8a0  ldr x9,[x10, #0x1d8]
71001fd8a4  cmp x8,x9
71001fd8a8  b.eq 0x71001fd8c0
71001fd8ac  ldr x8,[x10, #0x1d0]
71001fd8b0  str x26,[x8, #0x10]
71001fd8b4  ldr x8,[x10, #0x1d0]
71001fd8b8  str x8,[x26, #0x18]
71001fd8bc  b 0x71001fd8c4
71001fd8c0  str x26,[x10, #0x1c8]
71001fd8c4  ldr x8,[x10, #0x1e0]
71001fd8c8  add x8,x8,#0x1
71001fd8cc  str x26,[x10, #0x1d0]
71001fd8d0  str x8,[x10, #0x1e0]
71001fd8d4  str x26,[sp, #0x8]
71001fd8d8  str x26,[sp, #0x20]
71001fd8dc  ldr x8,[sp, #0x48]
71001fd8e0  add x20,x20,#0x1
71001fd8e4  cmp x8,x20
71001fd8e8  b.cc 0x71001fdb48
71001fd8ec  ldr x8,[sp, #0x40]
71001fd8f0  ldrb w8,[x8, #0x40]
71001fd8f4  cbz w8,0x71001fdb48
71001fd8f8  ldr x8,[x21, #0x20]
71001fd8fc  cmp x8,x23
71001fd900  b.eq 0x71001fdb4c
71001fd904  ldr x8,[sp, #0x38]
71001fd908  add x27,x26,#0x140
71001fd90c  cmp x8,x20
71001fd910  b.cc 0x71001fda10
71001fd914  ldr x8,[sp, #0x30]
71001fd918  cmp x8,x20
71001fd91c  cset w8,cs
71001fd920  str w8,[sp, #0x2c]
71001fd924  b 0x71001fdb20
71001fd928  adrp x8,0x71052a4000
71001fd92c  ldrb w28,[x26, #0x42]
71001fd930  ldr x8,[x8, #0xda8]
71001fd934  ldrb w8,[x8]
71001fd938  cbz w8,0x71001fd9fc
71001fd93c  adrp x8,0x71052a4000
71001fd940  ldr x8,[x8, #0xdb8]
71001fd944  ldr x0,[x8]
71001fd948  bl 0x7101717960
71001fd94c  ldr w8,[x0]
71001fd950  cbz w8,0x71001fd9fc
71001fd954  madd x9,x28,x22,x19
71001fd958  ldr x9,[x9, #0x10]
71001fd95c  mov w10,#0x168
71001fd960  madd x8,x8,x10,x9
71001fd964  ldrb w8,[x8, #0x40]
71001fd968  cbz w8,0x71001fda24
71001fd96c  ldrb w8,[x23, #0xa2]
71001fd970  ldrb w9,[x26, #0xa2]
71001fd974  cmp w8,w9
71001fd978  b.ne 0x71001fda24
71001fd97c  ldrh w8,[x23, #0xac]
71001fd980  ldrh w9,[x26, #0xac]
71001fd984  cmp w8,w9
71001fd988  b.ne 0x71001fda24
71001fd98c  adrp x8,0x71052a6000
71001fd990  ldr x8,[x8, #0xe78]
71001fd994  ldr x8,[x8]
71001fd998  ldr w8,[x8, #0x8]
71001fd99c  cmp w8,#0x1
71001fd9a0  b.ne 0x71001fd9b4
71001fd9a4  ldrb w8,[x23, #0x61]
71001fd9a8  tbz w8,#0x1,0x71001fd9b4
71001fd9ac  ldrb w8,[x26, #0x61]
71001fd9b0  tbnz w8,#0x1,0x71001fd9e0
71001fd9b4  add x0,x23,#0x140
71001fd9b8  bl 0x71001beb00
71001fd9bc  mov x28,x0
71001fd9c0  mov x0,x27
71001fd9c4  bl 0x71001beb00
71001fd9c8  cmp x28,x0
71001fd9cc  b.ne 0x71001fda24
71001fd9d0  ldr w8,[x23, #0x1c8]
71001fd9d4  ldr w9,[x26, #0x1c8]
71001fd9d8  cmp w8,w9
71001fd9dc  b.ne 0x71001fda24
71001fd9e0  ldrb w8,[x23, #0x60]
71001fd9e4  tst w8,#0x30
71001fd9e8  b.ne 0x71001fda24
71001fd9ec  ldr x8,[sp, #0x30]
71001fd9f0  cmp x8,x20
71001fd9f4  b.cc 0x71001fda24
71001fd9f8  b 0x71001fdb4c
71001fd9fc  madd x8,x28,x22,x19
71001fda00  add x8,x8,#0x18
71001fda04  ldrb w8,[x8, #0x40]
71001fda08  cbnz w8,0x71001fd96c
71001fda0c  b 0x71001fda24
71001fda10  ldrh w8,[x26, #0x60]
71001fda14  orr w8,w8,#0x4
71001fda18  and w8,w8,#0xf
71001fda1c  cmp w8,#0x7
71001fda20  b.ne 0x71001fd928
71001fda24  ldr x23,[x23, #0x10]
71001fda28  ldr x8,[x21, #0x20]
71001fda2c  cmp x8,x23
71001fda30  b.ne 0x71001fda10
71001fda34  b 0x71001fdb4c
71001fda38  adrp x8,0x71052a4000
71001fda3c  ldrb w28,[x26, #0x42]
71001fda40  ldr x8,[x8, #0xda8]
71001fda44  ldrb w8,[x8]
71001fda48  cbz w8,0x71001fdb0c
71001fda4c  adrp x8,0x71052a4000
71001fda50  ldr x8,[x8, #0xdb8]
71001fda54  ldr x0,[x8]
71001fda58  bl 0x7101717960
71001fda5c  ldr w8,[x0]
71001fda60  cbz w8,0x71001fdb0c
71001fda64  madd x9,x28,x22,x19
71001fda68  ldr x9,[x9, #0x10]
71001fda6c  mov w10,#0x168
71001fda70  madd x8,x8,x10,x9
71001fda74  ldrb w8,[x8, #0x40]
71001fda78  cbz w8,0x71001fdb34
71001fda7c  ldrb w8,[x23, #0xa2]
71001fda80  ldrb w9,[x26, #0xa2]
71001fda84  cmp w8,w9
71001fda88  b.ne 0x71001fdb34
71001fda8c  ldrh w8,[x23, #0xac]
71001fda90  ldrh w9,[x26, #0xac]
71001fda94  cmp w8,w9
71001fda98  b.ne 0x71001fdb34
71001fda9c  adrp x8,0x71052a6000
71001fdaa0  ldr x8,[x8, #0xe78]
71001fdaa4  ldr x8,[x8]
71001fdaa8  ldr w8,[x8, #0x8]
71001fdaac  cmp w8,#0x1
71001fdab0  b.ne 0x71001fdac4
71001fdab4  ldrb w8,[x23, #0x61]
71001fdab8  tbz w8,#0x1,0x71001fdac4
71001fdabc  ldrb w8,[x26, #0x61]
71001fdac0  tbnz w8,#0x1,0x71001fdaf0
71001fdac4  add x0,x23,#0x140
71001fdac8  bl 0x71001beb00
71001fdacc  mov x28,x0
71001fdad0  mov x0,x27
71001fdad4  bl 0x71001beb00
71001fdad8  cmp x28,x0
71001fdadc  b.ne 0x71001fdb34
71001fdae0  ldr w8,[x23, #0x1c8]
71001fdae4  ldr w9,[x26, #0x1c8]
71001fdae8  cmp w8,w9
71001fdaec  b.ne 0x71001fdb34
71001fdaf0  ldrb w8,[x23, #0x60]
71001fdaf4  ldr w9,[sp, #0x2c]
71001fdaf8  tst w8,#0x30
71001fdafc  cset w8,ne
71001fdb00  orr w8,w8,w9
71001fdb04  tbz w8,#0x0,0x71001fdb34
71001fdb08  b 0x71001fdb4c
71001fdb0c  madd x8,x28,x22,x19
71001fdb10  add x8,x8,#0x18
71001fdb14  ldrb w8,[x8, #0x40]
71001fdb18  cbnz w8,0x71001fda7c
71001fdb1c  b 0x71001fdb34
71001fdb20  ldrh w8,[x26, #0x60]
71001fdb24  orr w8,w8,#0x4
71001fdb28  and w8,w8,#0xf
71001fdb2c  cmp w8,#0x7
71001fdb30  b.ne 0x71001fda38
71001fdb34  ldr x23,[x23, #0x10]
71001fdb38  ldr x8,[x21, #0x20]
71001fdb3c  cmp x8,x23
71001fdb40  b.ne 0x71001fdb20
71001fdb44  b 0x71001fdb4c
71001fdb48  ldr x23,[x21, #0x20]
71001fdb4c  ldar w10,[x24]
71001fdb50  ldaxr w9,[x24]
71001fdb54  sub w8,w10,#0x1
71001fdb58  cmp w9,w10
71001fdb5c  b.ne 0x71001fdb74
71001fdb60  stlxr w10,w8,[x24]
71001fdb64  cbnz w10,0x71001fdb78
71001fdb68  mov w10,#0x1
71001fdb6c  tbz w10,#0x0,0x71001fdb80
71001fdb70  b 0x71001fdbc8
71001fdb74  clrex 
71001fdb78  mov w10,wzr
71001fdb7c  tbnz w10,#0x0,0x71001fdbc8
71001fdb80  ldaxr w10,[x24]
71001fdb84  sub w8,w9,#0x1
71001fdb88  cmp w10,w9
71001fdb8c  b.ne 0x71001fdba8
71001fdb90  stlxr w9,w8,[x24]
71001fdb94  cbz w9,0x71001fdbbc
71001fdb98  mov w11,wzr
71001fdb9c  mov w9,w10
71001fdba0  cbz w11,0x71001fdb80
71001fdba4  b 0x71001fdbc8
71001fdba8  clrex 
71001fdbac  mov w11,wzr
71001fdbb0  mov w9,w10
71001fdbb4  cbz w11,0x71001fdb80
71001fdbb8  b 0x71001fdbc8
71001fdbbc  mov w11,#0x1
71001fdbc0  mov w9,w10
71001fdbc4  cbz w11,0x71001fdb80
71001fdbc8  cbnz w8,0x71001fdbd4
71001fdbcc  ldrb w8,[x26, #0xc]
71001fdbd0  cbz w8,0x71001fdbe8
71001fdbd4  ldr x8,[x21, #0x20]
71001fdbd8  cmp x8,x23
71001fdbdc  mov x26,x23
71001fdbe0  b.ne 0x71001fd6a4
71001fdbe4  b 0x71001fdc10
71001fdbe8  mov w8,#0x1
71001fdbec  strb w8,[x26, #0xc]
71001fdbf0  ldr x8,[x26]
71001fdbf4  ldr x8,[x8, #0x8]
71001fdbf8  mov x0,x26
71001fdbfc  blr x8
71001fdc00  ldr x8,[x21, #0x20]
71001fdc04  cmp x8,x23
71001fdc08  mov x26,x23
71001fdc0c  b.ne 0x71001fd6a4
71001fdc10  adrp x19,0x71052a7000
71001fdc14  ldr x19,[x19, #0x220]
71001fdc18  ldr x26,[sp, #0x20]
71001fdc1c  add x20,sp,#0x68
71001fdc20  cbz x26,0x71001fddf0
71001fdc24  adrp x8,0x71052a7000
71001fdc28  ldr x8,[x8, #0x218]
71001fdc2c  ldrb w8,[x8]
71001fdc30  cbz w8,0x71001fddf0
71001fdc34  adrp x8,0x71052a7000
71001fdc38  ldr x8,[x8, #0x238]
71001fdc3c  ldr x9,[sp, #0x50]
71001fdc40  ldr x8,[x8]
71001fdc44  cmp x8,x9
71001fdc48  csel x8,x9,x8,hi
71001fdc4c  ldr x9,[sp, #0x78]
71001fdc50  ldr x9,[x9, #0x18]
71001fdc54  subs x23,x8,x9
71001fdc58  b.eq 0x71001fdca8
71001fdc5c  add x0,sp,#0x88
71001fdc60  bl 0x71001d0400
71001fdc64  sub x8,x29,#0x60
71001fdc68  bl 0x71001b12a0
71001fdc6c  adrp x8,0x71052a7000
71001fdc70  ldr x8,[x8, #0x240]
71001fdc74  ldrsw x9,[x8]
71001fdc78  ldur x10,[x29, #-0x60]
71001fdc7c  ldp x25,x24,[sp, #0x10]
71001fdc80  subs x8,x10,x9
71001fdc84  b.ls 0x71001fdcb4
71001fdc88  ldr x5,[sp]
71001fdc8c  cmp w9,#0x1
71001fdc90  b.ge 0x71001fdcbc
71001fdc94  neg w8,w9
71001fdc98  add x8,x10,w8, SXTW 
71001fdc9c  b 0x71001fdcbc
71001fdca0  add x20,sp,#0x68
71001fdca4  b 0x71001fddf0
71001fdca8  ldp x25,x24,[sp, #0x10]
71001fdcac  mov x22,xzr
71001fdcb0  b 0x71001fdd08
71001fdcb4  ldr x5,[sp]
71001fdcb8  mov x8,xzr
71001fdcbc  add x2,sp,#0x58
71001fdcc0  add x4,sp,#0x88
71001fdcc4  mov x0,x25
71001fdcc8  mov x1,x26
71001fdccc  mov x3,x23
71001fdcd0  str x8,[sp, #0x58]
71001fdcd4  bl 0x7100217710
71001fdcd8  mov x22,x0
71001fdcdc  ldr x0,[sp, #0x98]
71001fdce0  ldr x8,[x0, #0x18]
71001fdce4  cbz x8,0x71001fdd08
71001fdce8  ldr x8,[sp, #0x78]
71001fdcec  ldr x9,[x8, #0x28]
71001fdcf0  mov x3,#-0x1
71001fdcf4  ldp x10,x2,[x8, #0x10]
71001fdcf8  add x1,x10,x9
71001fdcfc  add x20,sp,#0x88
71001fdd00  bl 0x71001cb870
71001fdd04  b 0x71001fdd0c
71001fdd08  add x20,sp,#0x68
71001fdd0c  add x23,x24,#0x1b8
71001fdd10  mov x0,x25
71001fdd14  mov x1,x23
71001fdd18  bl 0x7100218130
71001fdd1c  ldr w8,[x26, #0x220]
71001fdd20  cmp w8,#0x2
71001fdd24  b.eq 0x71001fdd4c
71001fdd28  ldr x0,[x21, #0x10]
71001fdd2c  cbz x0,0x71001fdd38
71001fdd30  bl 0x7100216760
71001fdd34  tbnz w0,#0x0,0x71001fdd4c
71001fdd38  ldr x8,[sp, #0x8]
71001fdd3c  ldrh w2,[x8, #0xac]
71001fdd40  mov x0,x21
71001fdd44  mov x1,x25
71001fdd48  bl 0x71001fcd90
71001fdd4c  ldr x8,[x24, #0x1c8]
71001fdd50  ldr x9,[x24, #0x1d8]
71001fdd54  cmp x9,x8
71001fdd58  b.eq 0x71001fdd88
71001fdd5c  stur x8,[x29, #-0x68]
71001fdd60  ldr x8,[x24, #0x1b8]
71001fdd64  ldr x9,[x8, #0x28]
71001fdd68  sub x8,x29,#0x60
71001fdd6c  sub x1,x29,#0x68
71001fdd70  mov x0,x23
71001fdd74  blr x9
71001fdd78  ldur x8,[x29, #-0x60]
71001fdd7c  ldr x9,[x24, #0x1d8]
71001fdd80  cmp x9,x8
71001fdd84  b.ne 0x71001fdd5c
71001fdd88  cmp x22,#0x0
71001fdd8c  mov w8,#0x10
71001fdd90  mov w9,#0x8
71001fdd94  csel x8,x9,x8,eq
71001fdd98  add x9,x19,#0x8
71001fdd9c  add x10,x19,#0x10
71001fdda0  csel x9,x9,x10,eq
71001fdda4  ldr x9,[x9]
71001fdda8  add x9,x9,#0x1
71001fddac  str x9,[x19, x8, LSL #0x0]
71001fddb0  adrp x8,0x71052a7000
71001fddb4  ldr x8,[x8, #0x248]
71001fddb8  ldr x8,[x8]
71001fddbc  cmp x22,x8, LSR #0x1
71001fddc0  b.cs 0x71001fddd8
71001fddc4  cmp x22,x8
71001fddc8  b.cs 0x71001fddec
71001fddcc  ldr x19,[x20, #0x10]
71001fddd0  cbnz x19,0x71001fde04
71001fddd4  b 0x71001fdea4
71001fddd8  ldr x9,[x19, #0x18]
71001fdddc  add x9,x9,#0x1
71001fdde0  str x9,[x19, #0x18]
71001fdde4  cmp x22,x8
71001fdde8  b.cc 0x71001fddcc
71001fddec  add x19,x19,#0x20
71001fddf0  ldr x8,[x19]
71001fddf4  add x8,x8,#0x1
71001fddf8  str x8,[x19]
71001fddfc  ldr x19,[x20, #0x10]
71001fde00  cbz x19,0x71001fdea4
71001fde04  adrp x8,0x71052a7000
71001fde08  ldr x8,[x8, #0x220]
71001fde0c  mov x9,x8
71001fde10  ldr x8,[x8, #0x28]
71001fde14  add x8,x8,#0x1
71001fde18  str x8,[x9, #0x28]
71001fde1c  ldr w8,[sp, #0x28]
71001fde20  strb w8,[x19, #0x31]
71001fde24  add x8,x19,#0x8
71001fde28  ldar w10,[x8]
71001fde2c  ldaxr w9,[x8]
71001fde30  cmp w9,w10
71001fde34  b.ne 0x71001fde50
71001fde38  add w10,w10,#0x1
71001fde3c  stlxr w11,w10,[x8]
71001fde40  cbnz w11,0x71001fde54
71001fde44  mov w10,#0x1
71001fde48  tbz w10,#0x0,0x71001fde5c
71001fde4c  b 0x71001fdea4
71001fde50  clrex 
71001fde54  mov w10,wzr
71001fde58  tbnz w10,#0x0,0x71001fdea4
71001fde5c  ldaxr w10,[x8]
71001fde60  cmp w10,w9
71001fde64  b.ne 0x71001fde84
71001fde68  add w9,w9,#0x1
71001fde6c  stlxr w11,w9,[x8]
71001fde70  cbz w11,0x71001fde98
71001fde74  mov w11,wzr
71001fde78  mov w9,w10
71001fde7c  cbz w11,0x71001fde5c
71001fde80  b 0x71001fdea4
71001fde84  clrex 
71001fde88  mov w11,wzr
71001fde8c  mov w9,w10
71001fde90  cbz w11,0x71001fde5c
71001fde94  b 0x71001fdea4
71001fde98  mov w11,#0x1
71001fde9c  mov w9,w10
71001fdea0  cbz w11,0x71001fde5c
71001fdea4  add x0,sp,#0x68
71001fdea8  bl 0x71001d0250
71001fdeac  add x0,sp,#0x88
71001fdeb0  bl 0x71001d0250
71001fdeb4  mov x0,x19
71001fdeb8  ldp x29,x30,[sp, #0x110]
71001fdebc  ldp x20,x19,[sp, #0x100]
71001fdec0  ldp x22,x21,[sp, #0xf0]
71001fdec4  ldp x24,x23,[sp, #0xe0]
71001fdec8  ldp x26,x25,[sp, #0xd0]
71001fdecc  ldp x28,x27,[sp, #0xc0]
71001fded0  add sp,sp,#0x120
71001fded4  ret
