// addr:      7101baf4f0
// offset:    0x1baf4f0
// name:      FUN_7101baf4f0
// mangled:   
// size:      1308

7101baf4f0  sub sp,sp,#0x90
7101baf4f4  stp x28,x27,[sp, #0x30]
7101baf4f8  stp x26,x25,[sp, #0x40]
7101baf4fc  stp x24,x23,[sp, #0x50]
7101baf500  stp x22,x21,[sp, #0x60]
7101baf504  stp x20,x19,[sp, #0x70]
7101baf508  stp x29,x30,[sp, #0x80]
7101baf50c  add x29,sp,#0x80
7101baf510  ldr w8,[x0, #0xcc]
7101baf514  mov x19,x0
7101baf518  cbz w8,0x7101baf63c
7101baf51c  ldrb w8,[x19, #0xe9]
7101baf520  cbz w8,0x7101baf870
7101baf524  adrp x8,0x71052c5000
7101baf528  ldr x8,[x8, #0xf0]
7101baf52c  ldr x20,[x8, #0x2b8]
7101baf530  lsr x8,x20,#0x20
7101baf534  lsr x9,x20,#0x28
7101baf538  orr w8,w9,w8
7101baf53c  mov w9,#0xffff7f7f
7101baf540  sxtb w8,w8
7101baf544  and w9,w20,w9
7101baf548  orr w8,w9,w8
7101baf54c  cbz w8,0x7101baf680
7101baf550  ldr w8,[x19, #0x148]
7101baf554  cmp w8,w20
7101baf558  b.eq 0x7101baf86c
7101baf55c  ldp x8,x9,[x19, #0x130]
7101baf560  sub x8,x9,x8
7101baf564  mov w2,#0x1
7101baf568  mov x0,x19
7101baf56c  mov w1,w20
7101baf570  asr x21,x8,#0x4
7101baf574  bl 0x7101bafcf0
7101baf578  mov w2,#0x2
7101baf57c  mov x0,x19
7101baf580  mov w1,w20
7101baf584  bl 0x7101bafcf0
7101baf588  mov w2,#0x4
7101baf58c  mov x0,x19
7101baf590  mov w1,w20
7101baf594  bl 0x7101bafcf0
7101baf598  mov w2,#0x8
7101baf59c  mov x0,x19
7101baf5a0  mov w1,w20
7101baf5a4  bl 0x7101bafcf0
7101baf5a8  mov w2,#0x10
7101baf5ac  mov x0,x19
7101baf5b0  mov w1,w20
7101baf5b4  bl 0x7101bafcf0
7101baf5b8  mov w2,#0x20
7101baf5bc  mov x0,x19
7101baf5c0  mov w1,w20
7101baf5c4  bl 0x7101bafcf0
7101baf5c8  mov w2,#0x400
7101baf5cc  mov x0,x19
7101baf5d0  mov w1,w20
7101baf5d4  bl 0x7101bafcf0
7101baf5d8  mov w2,#0x1000
7101baf5dc  mov x0,x19
7101baf5e0  mov w1,w20
7101baf5e4  bl 0x7101bafcf0
7101baf5e8  mov w2,#0x2000
7101baf5ec  mov x0,x19
7101baf5f0  mov w1,w20
7101baf5f4  bl 0x7101bafcf0
7101baf5f8  mov w2,#0x4000
7101baf5fc  mov x0,x19
7101baf600  mov w1,w20
7101baf604  bl 0x7101bafcf0
7101baf608  ldp x9,x8,[x19, #0x130]
7101baf60c  sub x9,x8,x9
7101baf610  lsr x9,x9,#0x4
7101baf614  cmp x21,w9, SXTW 
7101baf618  b.eq 0x7101baf86c
7101baf61c  ldr w10,[x19, #0x14c]
7101baf620  subs w21,w10,w9
7101baf624  b.ge 0x7101baf688
7101baf628  sub w9,w9,w10
7101baf62c  cbz w9,0x7101baf810
7101baf630  sub x8,x8,w9, SXTW  #0x4
7101baf634  str x8,[x19, #0x138]
7101baf638  b 0x7101baf810
7101baf63c  ldr x8,[x19, #0xd8]
7101baf640  ldr x8,[x8]
7101baf644  ldr x0,[x8]
7101baf648  mov w1,#0x1
7101baf64c  bl 0x71037760f0
7101baf650  ldr x0,[x19, #0xf0]
7101baf654  ldp x20,x19,[sp, #0x70]
7101baf658  ldr x8,[x0]
7101baf65c  ldr x2,[x8, #0x60]
7101baf660  mov w1,#0x1
7101baf664  ldp x29,x30,[sp, #0x80]
7101baf668  ldp x22,x21,[sp, #0x60]
7101baf66c  ldp x24,x23,[sp, #0x50]
7101baf670  ldp x26,x25,[sp, #0x40]
7101baf674  ldp x28,x27,[sp, #0x30]
7101baf678  add sp,sp,#0x90
7101baf67c  br x2
7101baf680  mov w20,wzr
7101baf684  b 0x7101baf86c
7101baf688  b.le 0x7101baf810
7101baf68c  cmp w21,#0x1
7101baf690  b.lt 0x7101baf810
7101baf694  add x9,x19,#0x130
7101baf698  mov w27,#0x1
7101baf69c  mov w26,#0x12
7101baf6a0  mov w28,#0xd
7101baf6a4  str x9,[sp, #0x10]
7101baf6a8  str w21,[sp, #0xc]
7101baf6ac  b 0x7101baf6b8
7101baf6b0  ldr x8,[x19, #0x138]
7101baf6b4  add w27,w27,#0x1
7101baf6b8  ldr x9,[x19, #0x140]
7101baf6bc  cmp x8,x9
7101baf6c0  b.cs 0x7101baf6f8
7101baf6c4  str w26,[x8]
7101baf6c8  strb w28,[x8, #0x4]
7101baf6cc  ldrh w9,[sp, #0x18]
7101baf6d0  ldrb w10,[sp, #0x1a]
7101baf6d4  strb w10,[x8, #0x7]
7101baf6d8  sturh w9,[x8, #0x5]
7101baf6dc  str xzr,[x8, #0x8]
7101baf6e0  ldr x8,[x19, #0x138]
7101baf6e4  add x8,x8,#0x10
7101baf6e8  str x8,[x19, #0x138]
7101baf6ec  cmp w27,w21
7101baf6f0  b.lt 0x7101baf6b0
7101baf6f4  b 0x7101baf810
7101baf6f8  ldr x10,[sp, #0x10]
7101baf6fc  ldr x22,[x10]
7101baf700  sub x23,x8,x22
7101baf704  asr x21,x23,#0x4
7101baf708  add x8,x21,#0x1
7101baf70c  lsr x10,x8,#0x3c
7101baf710  cbnz x10,0x7101bafa04
7101baf714  sub x9,x9,x22
7101baf718  asr x10,x9,#0x4
7101baf71c  orr x11,xzr,#0x7fffffffffffffe
7101baf720  cmp x10,x11
7101baf724  b.hi 0x7101baf744
7101baf728  asr x9,x9,#0x3
7101baf72c  cmp x9,x8
7101baf730  csel x28,x8,x9,cc
7101baf734  cbz x28,0x7101baf7a8
7101baf738  lsr x8,x28,#0x3c
7101baf73c  cbz x8,0x7101baf748
7101baf740  b 0x7101bafa00
7101baf744  orr x28,xzr,#0xfffffffffffffff
7101baf748  lsl x8,x28,#0x4
7101baf74c  cmp x8,#0x0
7101baf750  csinc x25,x8,xzr,ne
7101baf754  mov w0,#0x10
7101baf758  mov x1,x25
7101baf75c  bl 0x710392e290
7101baf760  mov x24,x0
7101baf764  cbnz x0,0x7101baf7ac
7101baf768  adrp x8,0x7105332000
7101baf76c  ldr x0,[x8, #0xf00]
7101baf770  cbz x0,0x7101baf7a8
7101baf774  str wzr,[sp, #0x2c]
7101baf778  str x25,[sp, #0x18]
7101baf77c  ldr x8,[x0]
7101baf780  ldr x8,[x8, #0x30]
7101baf784  add x1,sp,#0x2c
7101baf788  add x2,sp,#0x18
7101baf78c  blr x8
7101baf790  tbz w0,#0x0,0x7101baf7a8
7101baf794  mov w0,#0x10
7101baf798  mov x1,x25
7101baf79c  bl 0x710392e290
7101baf7a0  mov x24,x0
7101baf7a4  cbnz x0,0x7101baf7ac
7101baf7a8  mov x24,xzr
7101baf7ac  add x8,x24,x21, LSL #0x4
7101baf7b0  add x21,x24,x28, LSL #0x4
7101baf7b4  mov w28,#0xd
7101baf7b8  str w26,[x8]
7101baf7bc  strb w28,[x8, #0x4]
7101baf7c0  ldrh w9,[sp, #0x18]
7101baf7c4  ldrb w10,[sp, #0x1a]
7101baf7c8  add x25,x8,#0x10
7101baf7cc  cmp x23,#0x1
7101baf7d0  str xzr,[x8, #0x8]
7101baf7d4  strb w10,[x8, #0x7]
7101baf7d8  sturh w9,[x8, #0x5]
7101baf7dc  b.lt 0x7101baf7f0
7101baf7e0  mov x0,x24
7101baf7e4  mov x1,x22
7101baf7e8  mov x2,x23
7101baf7ec  bl 0x71039c00e0
7101baf7f0  stp x24,x25,[x19, #0x130]
7101baf7f4  str x21,[x19, #0x140]
7101baf7f8  ldr w21,[sp, #0xc]
7101baf7fc  cbz x22,0x7101baf808
7101baf800  mov x0,x22
7101baf804  bl 0x710392eb40
7101baf808  cmp w27,w21
7101baf80c  b.lt 0x7101baf6b0
7101baf810  ldr x8,[x19, #0xd8]
7101baf814  ldr x8,[x8]
7101baf818  add x0,x8,#0x8
7101baf81c  adrp x1,0x71042f8000
7101baf820  add x1,x1,#0xe2
7101baf824  add x8,sp,#0x18
7101baf828  bl 0x7103776640
7101baf82c  add x1,sp,#0x18
7101baf830  mov x0,x19
7101baf834  bl 0x7101bb0300
7101baf838  ldr x21,[sp, #0x20]
7101baf83c  adrp x8,0x710523d000
7101baf840  add x8,x8,#0x988
7101baf844  stp x8,xzr,[sp, #0x18]
7101baf848  cbz x21,0x7101baf86c
7101baf84c  ldr x0,[x21, #0x18]
7101baf850  adrp x8,0x710523d000
7101baf854  add x8,x8,#0x9a8
7101baf858  stp x8,xzr,[x21, #0x10]
7101baf85c  cbz x0,0x7101baf864
7101baf860  bl 0x710392eb40
7101baf864  mov x0,x21
7101baf868  bl 0x710392eb40
7101baf86c  str w20,[x19, #0x148]
7101baf870  ldrb w8,[x19, #0xe8]
7101baf874  cbz w8,0x7101baf9e0
7101baf878  ldr x8,[x19, #0xf0]
7101baf87c  cbz x8,0x7101baf8a4
7101baf880  ldr w8,[x8, #0x25c]
7101baf884  cmp w8,#0x2
7101baf888  b.ne 0x7101baf8a4
7101baf88c  ldrsw x8,[x19, #0xc4]
7101baf890  cmp w8,#0x13
7101baf894  b.cs 0x7101bafa00
7101baf898  add x8,x19,x8, LSL #0x2
7101baf89c  mov w9,#0x4
7101baf8a0  b 0x7101baf9dc
7101baf8a4  ldrsw x8,[x19, #0xf8]
7101baf8a8  cmp w8,#0x9
7101baf8ac  b.hi 0x7101baf9a0
7101baf8b0  adrp x9,0x7105339000
7101baf8b4  ldr x9,[x9, #0x8b0]
7101baf8b8  ldrb w9,[x9, #0x8]
7101baf8bc  cbz w9,0x7101baf8d0
7101baf8c0  adrp x10,0x7105339000
7101baf8c4  add x10,x10,#0x860
7101baf8c8  ldr x10,[x10, x8, LSL #0x3]
7101baf8cc  b 0x7101baf8d8
7101baf8d0  adrp x10,0x7105339000
7101baf8d4  add x10,x10,#0x830
7101baf8d8  ldr x10,[x10, #0x10]
7101baf8dc  ldr w11,[x10, #0x9c]
7101baf8e0  cmp w11,#0x7
7101baf8e4  b.hi 0x7101baf9a0
7101baf8e8  mov w12,#0x1
7101baf8ec  lsl w12,w12,w11
7101baf8f0  mov w13,#0xba
7101baf8f4  tst w12,w13
7101baf8f8  b.eq 0x7101baf920
7101baf8fc  ldrb w11,[x10, #0xb8]
7101baf900  cbz w11,0x7101baf9a0
7101baf904  ldrb w10,[x10, #0xbb]
7101baf908  cbz w10,0x7101baf9a0
7101baf90c  cbz w9,0x7101baf944
7101baf910  adrp x9,0x7105339000
7101baf914  add x9,x9,#0x860
7101baf918  ldr x8,[x9, x8, LSL #0x3]
7101baf91c  b 0x7101baf94c
7101baf920  cmp w11,#0x2
7101baf924  b.ne 0x7101baf9a0
7101baf928  ldrb w11,[x10, #0xb8]
7101baf92c  cbz w11,0x7101baf9a0
7101baf930  ldrb w11,[x10, #0xbd]
7101baf934  cbz w11,0x7101baf9a0
7101baf938  ldrb w11,[x10, #0xbc]
7101baf93c  cbnz w11,0x7101baf904
7101baf940  b 0x7101baf9a0
7101baf944  adrp x8,0x7105339000
7101baf948  add x8,x8,#0x830
7101baf94c  ldr x8,[x8, #0x10]
7101baf950  ldr w8,[x8, #0x9c]
7101baf954  sub w9,w8,#0x1
7101baf958  cmp w9,#0x5
7101baf95c  b.hi 0x7101baf980
7101baf960  mov w10,#0x33
7101baf964  lsr w9,w10,w9
7101baf968  tbnz w9,#0x0,0x7101baf990
7101baf96c  sub w9,w8,#0x3
7101baf970  cmp w9,#0x2
7101baf974  b.cs 0x7101baf980
7101baf978  mov w8,#0x1
7101baf97c  b 0x7101baf994
7101baf980  cmp w8,#0x7
7101baf984  mov w8,#0x2
7101baf988  csinv w8,w8,wzr,eq
7101baf98c  b 0x7101baf994
7101baf990  mov w8,wzr
7101baf994  ldr w9,[x19, #0x128]
7101baf998  cmp w8,w9
7101baf99c  b.eq 0x7101baf9e0
7101baf9a0  ldrsw x8,[x19, #0xc4]
7101baf9a4  cmp w8,#0x13
7101baf9a8  b.cs 0x7101bafa00
7101baf9ac  add x8,x19,x8, LSL #0x2
7101baf9b0  mov w9,#0x4
7101baf9b4  str w9,[x8, #0x78]
7101baf9b8  ldr w8,[x19, #0xc4]
7101baf9bc  cmp w8,#0x11
7101baf9c0  b.gt 0x7101baf9e0
7101baf9c4  add w8,w8,#0x1
7101baf9c8  cmp w8,#0x13
7101baf9cc  str w8,[x19, #0xc4]
7101baf9d0  b.cs 0x7101bafa00
7101baf9d4  add x8,x19,w8, SXTW  #0x2
7101baf9d8  orr w9,wzr,#0x3
7101baf9dc  str w9,[x8, #0x78]
7101baf9e0  ldp x29,x30,[sp, #0x80]
7101baf9e4  ldp x20,x19,[sp, #0x70]
7101baf9e8  ldp x22,x21,[sp, #0x60]
7101baf9ec  ldp x24,x23,[sp, #0x50]
7101baf9f0  ldp x26,x25,[sp, #0x40]
7101baf9f4  ldp x28,x27,[sp, #0x30]
7101baf9f8  add sp,sp,#0x90
7101baf9fc  ret
7101bafa00  bl 0x71039c2650
7101bafa04  ldr x0,[sp, #0x10]
7101bafa08  bl 0x71039c0c00
