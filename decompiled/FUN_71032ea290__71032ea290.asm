// addr:      71032ea290
// offset:    0x32ea290
// name:      FUN_71032ea290
// mangled:   
// size:      2116

71032ea290  sub sp,sp,#0x150
71032ea294  stp x28,x27,[sp, #0xf0]
71032ea298  stp x26,x25,[sp, #0x100]
71032ea29c  stp x24,x23,[sp, #0x110]
71032ea2a0  stp x22,x21,[sp, #0x120]
71032ea2a4  stp x20,x19,[sp, #0x130]
71032ea2a8  stp x29,x30,[sp, #0x140]
71032ea2ac  add x29,sp,#0x140
71032ea2b0  ldr w8,[x0, #0xec]
71032ea2b4  mov x19,x0
71032ea2b8  cbz w8,0x71032ea318
71032ea2bc  ldr w8,[x19, #0xf8]
71032ea2c0  cmp w8,#0x6
71032ea2c4  b.ne 0x71032ea354
71032ea2c8  ldr x0,[x19, #0x158]
71032ea2cc  ldr x8,[x0]
71032ea2d0  ldr x8,[x8, #0x28]
71032ea2d4  blr x8
71032ea2d8  tbnz w0,#0x0,0x71032eaab0
71032ea2dc  ldp x8,x20,[x19, #0x150]
71032ea2e0  ldr x8,[x8]
71032ea2e4  ldr x0,[x8]
71032ea2e8  bl 0x7103775fa0
71032ea2ec  adrp x9,0x710593b000
71032ea2f0  ldr x9,[x9, #0x988]
71032ea2f4  ldr w8,[x20, #0x14]
71032ea2f8  mov w10,#0x1
71032ea2fc  lsl w8,w10,w8
71032ea300  ldr x9,[x9, #0x8]
71032ea304  ldr w10,[x9]
71032ea308  bic w8,w10,w8
71032ea30c  str w8,[x9]
71032ea310  strb wzr,[x19, #0x164]
71032ea314  b 0x71032ea420
71032ea318  adrp x8,0x710532f000
71032ea31c  ldr x8,[x8, #0x7c8]
71032ea320  ldr x0,[x8, #0x8]
71032ea324  bl 0x71032e5a30
71032ea328  ldr w8,[x19, #0xf8]
71032ea32c  cmp w8,#0x6
71032ea330  b.ne 0x71032ea454
71032ea334  ldrb w8,[x19, #0x160]
71032ea338  cbz w8,0x71032ea510
71032ea33c  ldrsw x8,[x19, #0xe4]
71032ea340  ldrb w9,[x19, #0x161]
71032ea344  cmp w8,#0x13
71032ea348  cbz w9,0x71032ea53c
71032ea34c  b.cc 0x71032ea444
71032ea350  b 0x71032eaad0
71032ea354  ldr x0,[x19, #0x148]
71032ea358  ldr x8,[x0]
71032ea35c  ldr x8,[x8, #0x28]
71032ea360  blr x8
71032ea364  tbnz w0,#0x0,0x71032eaab0
71032ea368  ldr x20,[x19, #0x148]
71032ea36c  ldr x8,[x20]
71032ea370  ldr x8,[x8, #0x28]
71032ea374  mov x0,x20
71032ea378  blr x8
71032ea37c  tbnz w0,#0x0,0x71032ea438
71032ea380  ldr x8,[x20, #0x20]
71032ea384  ldrb w9,[x8, #0x11c]
71032ea388  cbnz w9,0x71032ea3e8
71032ea38c  ldr w9,[x8, #0x13c]
71032ea390  sub w9,w9,#0x3
71032ea394  cmp w9,#0x2
71032ea398  b.cc 0x71032ea3e8
71032ea39c  ldr x1,[x8, #0x140]
71032ea3a0  add x0,sp,#0xa0
71032ea3a4  mov w2,#0x1
71032ea3a8  mov w20,#0x1
71032ea3ac  bl 0x7103771d60
71032ea3b0  ldr x21,[sp, #0xa8]
71032ea3b4  ldr x0,[x21]
71032ea3b8  cbz x0,0x71032ea3cc
71032ea3bc  ldr x8,[x0]
71032ea3c0  ldr x8,[x8, #0x210]
71032ea3c4  blr x8
71032ea3c8  mov w20,w0
71032ea3cc  adrp x8,0x710523d000
71032ea3d0  add x8,x8,#0x9c8
71032ea3d4  stp x8,xzr,[sp, #0xa0]
71032ea3d8  cbz x21,0x71032ea3e4
71032ea3dc  mov x0,x21
71032ea3e0  bl 0x710392eb40
71032ea3e4  tbnz w20,#0x0,0x71032ea438
71032ea3e8  ldp x8,x20,[x19, #0x140]
71032ea3ec  ldr x8,[x8]
71032ea3f0  ldr x0,[x8]
71032ea3f4  bl 0x7103775fa0
71032ea3f8  adrp x9,0x710593b000
71032ea3fc  ldr x9,[x9, #0x988]
71032ea400  ldr w8,[x20, #0x14]
71032ea404  mov w10,#0x1
71032ea408  lsl w8,w10,w8
71032ea40c  ldr x9,[x9, #0x8]
71032ea410  ldr w10,[x9]
71032ea414  bic w8,w10,w8
71032ea418  str w8,[x9]
71032ea41c  strb wzr,[x19, #0x163]
71032ea420  adrp x8,0x710532f000
71032ea424  ldr x8,[x8, #0x7f0]
71032ea428  ldr x8,[x8, #0x8]
71032ea42c  ldr x0,[x8, #0x8]
71032ea430  mov w1,wzr
71032ea434  bl 0x71032eb9f0
71032ea438  ldrsw x8,[x19, #0xe4]
71032ea43c  cmp w8,#0x13
71032ea440  b.cs 0x71032eaad0
71032ea444  add x8,x19,x8, LSL #0x2
71032ea448  mov w9,#0x2
71032ea44c  str w9,[x8, #0x98]
71032ea450  b 0x71032eaab0
71032ea454  mov w9,#0x1
71032ea458  strb w9,[sp, #0xa4]
71032ea45c  orr w9,wzr,#0xff
71032ea460  mov x10,#0xff0000000000
71032ea464  movk x10,#0xc1ff, LSL #48
71032ea468  strb w9,[sp, #0xb0]
71032ea46c  sub w9,w8,#0x2
71032ea470  cmp w9,#0x2
71032ea474  str wzr,[sp, #0xa0]
71032ea478  str x10,[sp, #0xa8]
71032ea47c  str wzr,[sp, #0xcc]
71032ea480  strb wzr,[sp, #0xd0]
71032ea484  strh wzr,[sp, #0xc8]
71032ea488  stp xzr,xzr,[sp, #0xb8]
71032ea48c  b.cc 0x71032ea4a8
71032ea490  ldrb w8,[x19, #0x108]
71032ea494  cmp w8,#0x6
71032ea498  cset w9,eq
71032ea49c  cmp w8,#0x4
71032ea4a0  lsl w9,w9,#0x2
71032ea4a4  csinc w8,w9,wzr,ne
71032ea4a8  str w8,[sp, #0xa0]
71032ea4ac  ldp x8,x9,[x19, #0x100]
71032ea4b0  ldp x10,x11,[x19, #0x110]
71032ea4b4  stp x10,x11,[sp, #0xb8]
71032ea4b8  stp x8,x9,[sp, #0xa8]
71032ea4bc  ldrb w8,[x19, #0x120]
71032ea4c0  strb w8,[sp, #0xa4]
71032ea4c4  ldrb w8,[x19, #0x121]
71032ea4c8  strb w8,[sp, #0xc8]
71032ea4cc  ldrb w8,[x19, #0x122]
71032ea4d0  strb w8,[sp, #0xc9]
71032ea4d4  ldr w8,[x19, #0x124]
71032ea4d8  str w8,[sp, #0xcc]
71032ea4dc  ldrb w8,[x19, #0x128]
71032ea4e0  strb w8,[sp, #0xd0]
71032ea4e4  ldrb w8,[x19, #0x163]
71032ea4e8  cbnz w8,0x71032ea650
71032ea4ec  ldp x8,x10,[x19, #0x140]
71032ea4f0  ldr w2,[x10, #0xc]
71032ea4f4  ldr x8,[x8]
71032ea4f8  mov w9,#0x4ffff
71032ea4fc  add w10,w9,#0x4b0, LSL #12
71032ea500  cmp w2,w10
71032ea504  b.le 0x71032ea54c
71032ea508  mov w1,#0x9
71032ea50c  b 0x71032ea640
71032ea510  ldrb w8,[x19, #0x164]
71032ea514  cbnz w8,0x71032ea6a8
71032ea518  ldp x8,x10,[x19, #0x150]
71032ea51c  ldr w2,[x10, #0xc]
71032ea520  ldr x8,[x8]
71032ea524  mov w9,#0x4ffff
71032ea528  add w10,w9,#0x4b0, LSL #12
71032ea52c  cmp w2,w10
71032ea530  b.le 0x71032ea570
71032ea534  mov w1,#0x9
71032ea538  b 0x71032ea698
71032ea53c  b.cs 0x71032eaad0
71032ea540  add x8,x19,x8, LSL #0x2
71032ea544  str wzr,[x8, #0x98]
71032ea548  b 0x71032eaab0
71032ea54c  orr w10,w9,#0x200000
71032ea550  cmp w2,w10
71032ea554  b.le 0x71032ea560
71032ea558  orr w1,wzr,#0x7
71032ea55c  b 0x71032ea640
71032ea560  cmp w2,#0x200, LSL #12
71032ea564  b.lt 0x71032ea584
71032ea568  mov w1,#0x5
71032ea56c  b 0x71032ea640
71032ea570  orr w10,w9,#0x200000
71032ea574  cmp w2,w10
71032ea578  b.le 0x71032ea598
71032ea57c  orr w1,wzr,#0x7
71032ea580  b 0x71032ea698
71032ea584  orr w10,w9,#0x100000
71032ea588  cmp w2,w10
71032ea58c  b.le 0x71032ea5a8
71032ea590  orr w1,wzr,#0x6
71032ea594  b 0x71032ea640
71032ea598  cmp w2,#0x200, LSL #12
71032ea59c  b.lt 0x71032ea5b8
71032ea5a0  mov w1,#0x5
71032ea5a4  b 0x71032ea698
71032ea5a8  cmp w2,#0x100, LSL #12
71032ea5ac  b.lt 0x71032ea5cc
71032ea5b0  mov w1,#0x4
71032ea5b4  b 0x71032ea640
71032ea5b8  orr w10,w9,#0x100000
71032ea5bc  cmp w2,w10
71032ea5c0  b.le 0x71032ea5e0
71032ea5c4  orr w1,wzr,#0x6
71032ea5c8  b 0x71032ea698
71032ea5cc  add w10,w9,#0xae, LSL #12
71032ea5d0  cmp w2,w10
71032ea5d4  b.le 0x71032ea5f0
71032ea5d8  mov w1,#0x8
71032ea5dc  b 0x71032ea640
71032ea5e0  cmp w2,#0x100, LSL #12
71032ea5e4  b.lt 0x71032ea600
71032ea5e8  mov w1,#0x4
71032ea5ec  b 0x71032ea698
71032ea5f0  cmp w2,w9
71032ea5f4  b.le 0x71032ea614
71032ea5f8  mov w1,#0x2
71032ea5fc  b 0x71032ea640
71032ea600  add w10,w9,#0xae, LSL #12
71032ea604  cmp w2,w10
71032ea608  b.le 0x71032ea624
71032ea60c  mov w1,#0x8
71032ea610  b 0x71032ea698
71032ea614  cmp w2,#0x10, LSL #12
71032ea618  b.lt 0x71032ea634
71032ea61c  mov w1,#0x1
71032ea620  b 0x71032ea640
71032ea624  cmp w2,w9
71032ea628  b.le 0x71032ea67c
71032ea62c  mov w1,#0x2
71032ea630  b 0x71032ea698
71032ea634  cmp w2,#0x1
71032ea638  orr w9,wzr,#0x3
71032ea63c  csel w1,w9,wzr,lt
71032ea640  ldr x0,[x8]
71032ea644  bl 0x7103775dc0
71032ea648  mov w8,#0x1
71032ea64c  strb w8,[x19, #0x163]
71032ea650  ldr x20,[x19, #0x148]
71032ea654  ldr x8,[x20]
71032ea658  ldr x8,[x8, #0x28]
71032ea65c  mov x0,x20
71032ea660  blr x8
71032ea664  tbnz w0,#0x0,0x71032ea674
71032ea668  ldr x0,[x20, #0x20]
71032ea66c  add x1,sp,#0xa0
71032ea670  bl 0x7101b16690
71032ea674  ldr x0,[x19, #0x148]
71032ea678  b 0x71032eaa88
71032ea67c  cmp w2,#0x10, LSL #12
71032ea680  b.lt 0x71032ea68c
71032ea684  mov w1,#0x1
71032ea688  b 0x71032ea698
71032ea68c  cmp w2,#0x1
71032ea690  orr w9,wzr,#0x3
71032ea694  csel w1,w9,wzr,lt
71032ea698  ldr x0,[x8]
71032ea69c  bl 0x7103775dc0
71032ea6a0  mov w8,#0x1
71032ea6a4  strb w8,[x19, #0x164]
71032ea6a8  ldr x21,[x19, #0x158]
71032ea6ac  ldr x8,[x21]
71032ea6b0  ldr x8,[x8, #0x28]
71032ea6b4  ldr x24,[x19, #0x130]
71032ea6b8  ldr w20,[x19, #0x124]
71032ea6bc  mov x0,x21
71032ea6c0  blr x8
71032ea6c4  tbnz w0,#0x0,0x71032eaa84
71032ea6c8  ldr x25,[x21, #0x20]
71032ea6cc  add x21,x25,#0xc8
71032ea6d0  adrp x1,0x710437c000
71032ea6d4  add x1,x1,#0x12c
71032ea6d8  add x8,sp,#0x90
71032ea6dc  str wzr,[x25, #0xec]
71032ea6e0  mov x0,x21
71032ea6e4  str x24,[x25, #0xe0]
71032ea6e8  bl 0x7103776910
71032ea6ec  adrp x26,0x710532f000
71032ea6f0  ldr x8,[x26, #0x730]
71032ea6f4  strb wzr,[sp, #0x50]
71032ea6f8  str xzr,[sp, #0x48]
71032ea6fc  ldr x8,[x8, #0x8]
71032ea700  ldr x0,[x8, #0x338]
71032ea704  mov x1,x24
71032ea708  bl 0x710324f870
71032ea70c  mov w23,w0
71032ea710  mov x0,x24
71032ea714  bl 0x710176a460
71032ea718  mov x22,x0
71032ea71c  add x0,sp,#0xa0
71032ea720  mov x1,x24
71032ea724  add x27,sp,#0xa0
71032ea728  bl 0x710176b890
71032ea72c  mov x8,xzr
71032ea730  add x9,x27,#0x8
71032ea734  add x10,sp,#0x48
71032ea738  b 0x71032ea744
71032ea73c  add x8,x8,#0x2
71032ea740  strb w11,[x12, #0x9]
71032ea744  add x11,x9,x8
71032ea748  ldrb w13,[x11]
71032ea74c  cbz w13,0x71032ea778
71032ea750  add w14,w8,#0x1
71032ea754  add x12,x10,x8
71032ea758  cmp w14,#0x3f
71032ea75c  strb w13,[x12, #0x8]
71032ea760  b.cs 0x71032ea774
71032ea764  ldrb w11,[x11, #0x1]
71032ea768  cbnz w11,0x71032ea73c
71032ea76c  add x8,x8,#0x1
71032ea770  b 0x71032ea778
71032ea774  add w8,w8,#0x1
71032ea778  add x10,sp,#0x48
71032ea77c  add x24,x10,#0x8
71032ea780  mov w9,#0x9dc5
71032ea784  movk w9,#0x811c, LSL #16
71032ea788  strb wzr,[x24, w8, UXTW ]
71032ea78c  ldrb w11,[sp, #0x50]
71032ea790  str w8,[sp, #0x4c]
71032ea794  cbz w11,0x71032ea7b4
71032ea798  add x10,x10,#0x9
71032ea79c  mov w12,#0x89
71032ea7a0  mul w9,w9,w12
71032ea7a4  and w11,w11,#0xff
71032ea7a8  eor w9,w9,w11
71032ea7ac  ldrb w11,[x10], #0x1
71032ea7b0  cbnz w11,0x71032ea7a0
71032ea7b4  str w9,[sp, #0x48]
71032ea7b8  cbz w8,0x71032ea838
71032ea7bc  and x8,x22,#-0x100000000000000
71032ea7c0  mov x9,#-0x3f00000000000000
71032ea7c4  cmp x8,x9
71032ea7c8  b.ne 0x71032ea85c
71032ea7cc  and x8,x22,#0xffffffffff
71032ea7d0  cbz x8,0x71032ea85c
71032ea7d4  ldr x8,[x26, #0x730]
71032ea7d8  ldr x26,[x8, #0x8]
71032ea7dc  ldr x0,[x26, #0x168]
71032ea7e0  mov x1,x22
71032ea7e4  mov w2,wzr
71032ea7e8  bl 0x7103263540
71032ea7ec  ldr x1,[x26, #0x168]
71032ea7f0  mov w23,w0
71032ea7f4  add x0,sp,#0xa0
71032ea7f8  mov x2,x22
71032ea7fc  add x26,sp,#0xa0
71032ea800  bl 0x7103262310
71032ea804  add x2,x26,#0x8
71032ea808  adrp x0,0x710439b000
71032ea80c  add x0,x0,#0x815
71032ea810  mov x8,sp
71032ea814  mov w1,w23
71032ea818  mov x22,sp
71032ea81c  bl 0x71003a4ca0
71032ea820  add x3,x22,#0x8
71032ea824  add x0,sp,#0x90
71032ea828  mov w2,#0x1
71032ea82c  mov x1,x24
71032ea830  bl 0x710377a280
71032ea834  b 0x71032ea870
71032ea838  ldr x8,[sp, #0x98]
71032ea83c  ldr x0,[x8, #0x10]
71032ea840  cbz x0,0x71032ea870
71032ea844  add x1,sp,#0xa0
71032ea848  mov w2,wzr
71032ea84c  mov w3,wzr
71032ea850  str wzr,[sp, #0xa0]
71032ea854  bl 0x71037a2270
71032ea858  b 0x71032ea870
71032ea85c  add x0,sp,#0x90
71032ea860  mov w2,#0x1
71032ea864  mov x1,x24
71032ea868  mov w3,w23
71032ea86c  bl 0x710377a280
71032ea870  ldr x0,[sp, #0x98]
71032ea874  adrp x24,0x710523d000
71032ea878  add x24,x24,#0x9a8
71032ea87c  stp x24,xzr,[sp, #0x90]
71032ea880  cbz x0,0x71032ea888
71032ea884  bl 0x710392eb40
71032ea888  ldr x1,[x25, #0xd8]
71032ea88c  add x0,sp,#0xa0
71032ea890  mov w2,#0x1
71032ea894  bl 0x7103771d60
71032ea898  ldr x22,[sp, #0xa8]
71032ea89c  ldr x23,[x22]
71032ea8a0  cbz x23,0x71032ea904
71032ea8a4  ldr x8,[x23]
71032ea8a8  ldr x8,[x8, #0x1f8]
71032ea8ac  cmp w20,#0x0
71032ea8b0  cset w1,gt
71032ea8b4  mov x0,x23
71032ea8b8  blr x8
71032ea8bc  ldr x8,[x23]
71032ea8c0  ldr x8,[x8, #0x200]
71032ea8c4  mov x0,x23
71032ea8c8  blr x8
71032ea8cc  tbz w0,#0x0,0x71032ea8e8
71032ea8d0  ldr x8,[x23]
71032ea8d4  ldr x8,[x8, #0x210]
71032ea8d8  mov x0,x23
71032ea8dc  blr x8
71032ea8e0  eor w8,w0,#0x1
71032ea8e4  b 0x71032ea8ec
71032ea8e8  mov w8,#0x1
71032ea8ec  ldr x9,[x23]
71032ea8f0  ldr x9,[x9, #0x388]
71032ea8f4  and w1,w8,#0x1
71032ea8f8  mov x0,x23
71032ea8fc  mov w2,wzr
71032ea900  blr x9
71032ea904  adrp x26,0x710523d000
71032ea908  add x26,x26,#0x9c8
71032ea90c  stp x26,xzr,[sp, #0xa0]
71032ea910  cbz x22,0x71032ea91c
71032ea914  mov x0,x22
71032ea918  bl 0x710392eb40
71032ea91c  ldr x1,[x25, #0xd8]
71032ea920  add x0,sp,#0xa0
71032ea924  mov w2,#0x1
71032ea928  bl 0x7103771d60
71032ea92c  ldr x22,[sp, #0xa8]
71032ea930  ldr x23,[x22]
71032ea934  cbz x23,0x71032ea998
71032ea938  ldr x8,[x23]
71032ea93c  ldr x8,[x8, #0x208]
71032ea940  cmp w20,#0x0
71032ea944  cset w1,gt
71032ea948  mov x0,x23
71032ea94c  blr x8
71032ea950  ldr x8,[x23]
71032ea954  ldr x8,[x8, #0x200]
71032ea958  mov x0,x23
71032ea95c  blr x8
71032ea960  tbz w0,#0x0,0x71032ea97c
71032ea964  ldr x8,[x23]
71032ea968  ldr x8,[x8, #0x210]
71032ea96c  mov x0,x23
71032ea970  blr x8
71032ea974  eor w8,w0,#0x1
71032ea978  b 0x71032ea980
71032ea97c  mov w8,#0x1
71032ea980  ldr x9,[x23]
71032ea984  ldr x9,[x9, #0x388]
71032ea988  and w1,w8,#0x1
71032ea98c  mov x0,x23
71032ea990  mov w2,wzr
71032ea994  blr x9
71032ea998  stp x26,xzr,[sp, #0xa0]
71032ea99c  cbz x22,0x71032ea9a8
71032ea9a0  mov x0,x22
71032ea9a4  bl 0x710392eb40
71032ea9a8  ldr x1,[x25, #0xd8]
71032ea9ac  add x0,sp,#0x48
71032ea9b0  mov w2,#0x1
71032ea9b4  bl 0x7103771d60
71032ea9b8  ldr x22,[sp, #0x50]
71032ea9bc  ldr x1,[x22]
71032ea9c0  add x0,sp,#0xa0
71032ea9c4  bl 0x710377ad90
71032ea9c8  ldr x0,[sp, #0xa8]
71032ea9cc  ldr x8,[x0]
71032ea9d0  cbz x8,0x71032ea9ec
71032ea9d4  ldrb w10,[x8, #0x58]
71032ea9d8  cmp w20,#0x0
71032ea9dc  cset w9,gt
71032ea9e0  and w10,w10,#0xfe
71032ea9e4  orr w9,w10,w9
71032ea9e8  strb w9,[x8, #0x58]
71032ea9ec  stp x24,xzr,[sp, #0xa0]
71032ea9f0  cbz x0,0x71032ea9f8
71032ea9f4  bl 0x710392eb40
71032ea9f8  stp x26,xzr,[sp, #0x48]
71032ea9fc  cbz x22,0x71032eaa08
71032eaa00  mov x0,x22
71032eaa04  bl 0x710392eb40
71032eaa08  adrp x1,0x7104443000
71032eaa0c  add x1,x1,#0x150
71032eaa10  add x8,sp,#0x48
71032eaa14  mov x0,x21
71032eaa18  bl 0x7103776640
71032eaa1c  adrp x1,0x7104338000
71032eaa20  add x1,x1,#0xd31
71032eaa24  add x8,sp,#0xa0
71032eaa28  add x0,sp,#0x48
71032eaa2c  bl 0x7103776910
71032eaa30  adrp x1,0x710439c000
71032eaa34  add x1,x1,#0xfd1
71032eaa38  add x0,sp,#0xa0
71032eaa3c  mov w2,#0x1
71032eaa40  mov w3,w20
71032eaa44  bl 0x710377a280
71032eaa48  ldr x0,[sp, #0xa8]
71032eaa4c  stp x24,xzr,[sp, #0xa0]
71032eaa50  cbz x0,0x71032eaa58
71032eaa54  bl 0x710392eb40
71032eaa58  ldr x20,[sp, #0x50]
71032eaa5c  adrp x8,0x710523d000
71032eaa60  add x8,x8,#0x988
71032eaa64  stp x8,xzr,[sp, #0x48]
71032eaa68  cbz x20,0x71032eaa84
71032eaa6c  ldr x0,[x20, #0x18]
71032eaa70  stp x24,xzr,[x20, #0x10]
71032eaa74  cbz x0,0x71032eaa7c
71032eaa78  bl 0x710392eb40
71032eaa7c  mov x0,x20
71032eaa80  bl 0x710392eb40
71032eaa84  ldr x0,[x19, #0x158]
71032eaa88  ldr x8,[x0]
71032eaa8c  ldr x8,[x8, #0x10]
71032eaa90  mov w1,wzr
71032eaa94  blr x8
71032eaa98  adrp x8,0x710532f000
71032eaa9c  ldr x8,[x8, #0x7f0]
71032eaaa0  ldr x8,[x8, #0x8]
71032eaaa4  ldr x0,[x8, #0x8]
71032eaaa8  mov w1,#0x1
71032eaaac  bl 0x71032eb9f0
71032eaab0  ldp x29,x30,[sp, #0x140]
71032eaab4  ldp x20,x19,[sp, #0x130]
71032eaab8  ldp x22,x21,[sp, #0x120]
71032eaabc  ldp x24,x23,[sp, #0x110]
71032eaac0  ldp x26,x25,[sp, #0x100]
71032eaac4  ldp x28,x27,[sp, #0xf0]
71032eaac8  add sp,sp,#0x150
71032eaacc  ret
71032eaad0  bl 0x71039c2650
