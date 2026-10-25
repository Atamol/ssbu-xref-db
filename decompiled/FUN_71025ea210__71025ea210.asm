// addr:      71025ea210
// offset:    0x25ea210
// name:      FUN_71025ea210
// mangled:   
// size:      2444

71025ea210  sub sp,sp,#0xd0
71025ea214  str x27,[sp, #0x70]
71025ea218  stp x26,x25,[sp, #0x80]
71025ea21c  stp x24,x23,[sp, #0x90]
71025ea220  stp x22,x21,[sp, #0xa0]
71025ea224  stp x20,x19,[sp, #0xb0]
71025ea228  stp x29,x30,[sp, #0xc0]
71025ea22c  add x29,sp,#0xc0
71025ea230  str w2,[x0, #0x10]
71025ea234  ldr w8,[x1]
71025ea238  str w8,[x0]
71025ea23c  ldr x8,[x3]
71025ea240  mov x20,x1
71025ea244  mov x19,x0
71025ea248  cbz x8,0x71025ea290
71025ea24c  ldr x9,[x3, #0x8]
71025ea250  add x21,x19,#0x30
71025ea254  cbz x9,0x71025ea26c
71025ea258  add x10,x9,#0x8
71025ea25c  ldxr x11,[x10]
71025ea260  add x11,x11,#0x1
71025ea264  stxr w12,x11,[x10]
71025ea268  cbnz w12,0x71025ea25c
71025ea26c  ldr x22,[x19, #0x38]
71025ea270  stp x8,x9,[x19, #0x30]
71025ea274  cbz x22,0x71025ea5c8
71025ea278  add x8,x22,#0x8
71025ea27c  ldaxr x9,[x8]
71025ea280  sub x10,x9,#0x1
71025ea284  stlxr w11,x10,[x8]
71025ea288  cbnz w11,0x71025ea27c
71025ea28c  b 0x71025ea498
71025ea290  ldrb w8,[x19, #0x88]
71025ea294  cbz w8,0x71025ea350
71025ea298  adrp x8,0x710532f000
71025ea29c  ldr x8,[x8, #0x488]
71025ea2a0  cbz x8,0x71025ea350
71025ea2a4  ldr x21,[x8]
71025ea2a8  ldr w8,[x21]
71025ea2ac  cmp w8,#0x2
71025ea2b0  b.ne 0x71025ea2dc
71025ea2b4  adrp x8,0x710532f000
71025ea2b8  ldr w0,[x8, #0x484]
71025ea2bc  cmn w0,#0x1
71025ea2c0  b.eq 0x71025ea2dc
71025ea2c4  bl 0x71039c0ac0
71025ea2c8  cbz x0,0x71025ea2dc
71025ea2cc  ldr x0,[x21, #0x10]
71025ea2d0  orr w8,wzr,#0x3
71025ea2d4  str w8,[x21]
71025ea2d8  bl 0x710353c9b0
71025ea2dc  adrp x2,0x7104328000
71025ea2e0  add x2,x2,#0x86f
71025ea2e4  add x0,sp,#0x30
71025ea2e8  mov x1,x20
71025ea2ec  bl 0x710353e1d0
71025ea2f0  ldr w21,[sp, #0x30]
71025ea2f4  orr w22,wzr,#0xffffff
71025ea2f8  cmp w21,w22
71025ea2fc  b.eq 0x71025ea314
71025ea300  adrp x8,0x7105332000
71025ea304  ldr x0,[x8, #0xf20]
71025ea308  mov w1,w21
71025ea30c  bl 0x7103540b10
71025ea310  str w22,[sp, #0x30]
71025ea314  adrp x8,0x7105332000
71025ea318  ldr x8,[x8, #0xf20]
71025ea31c  ldr x8,[x8, #0x78]
71025ea320  cmp w21,w22
71025ea324  b.eq 0x71025ea4b8
71025ea328  ldr x9,[x8]
71025ea32c  ldr x10,[x9, #0x40]
71025ea330  ldr w10,[x10, #0x4]
71025ea334  cmp w10,w21
71025ea338  b.ls 0x71025ea4b8
71025ea33c  ldr x9,[x9, #0x60]
71025ea340  lsl x10,x21,#0x5
71025ea344  ldr x9,[x9, x10, LSL #0x0]
71025ea348  and x9,x9,#0xffffffffff
71025ea34c  b 0x71025ea4bc
71025ea350  adrp x2,0x7104328000
71025ea354  add x2,x2,#0x86f
71025ea358  add x0,sp,#0x30
71025ea35c  mov x1,x20
71025ea360  bl 0x710353e1d0
71025ea364  ldr w21,[sp, #0x30]
71025ea368  orr w22,wzr,#0xffffff
71025ea36c  cmp w21,w22
71025ea370  b.eq 0x71025ea388
71025ea374  adrp x8,0x7105332000
71025ea378  ldr x0,[x8, #0xf20]
71025ea37c  mov w1,w21
71025ea380  bl 0x7103540b10
71025ea384  str w22,[sp, #0x30]
71025ea388  adrp x8,0x7105332000
71025ea38c  ldr x8,[x8, #0xf20]
71025ea390  ldr x8,[x8, #0x78]
71025ea394  cmp w21,w22
71025ea398  b.eq 0x71025ea3c4
71025ea39c  ldr x9,[x8]
71025ea3a0  ldr x10,[x9, #0x40]
71025ea3a4  ldr w10,[x10, #0x4]
71025ea3a8  cmp w10,w21
71025ea3ac  b.ls 0x71025ea3c4
71025ea3b0  ldr x9,[x9, #0x60]
71025ea3b4  lsl x10,x21,#0x5
71025ea3b8  ldr x9,[x9, x10, LSL #0x0]
71025ea3bc  and x9,x9,#0xffffffffff
71025ea3c0  b 0x71025ea3c8
71025ea3c4  mov x9,xzr
71025ea3c8  ldr x21,[x8, #0x8]
71025ea3cc  str x9,[sp, #0x30]
71025ea3d0  ldr x8,[x21, #0x8]
71025ea3d4  ldr x1,[x21, #0x20]
71025ea3d8  ldr w2,[x8, #0x8]
71025ea3dc  adrp x4,0x7103542000
71025ea3e0  add x4,x4,#0x240
71025ea3e4  add x0,sp,#0x30
71025ea3e8  mov w3,#0x8
71025ea3ec  bl 0x71039c2630
71025ea3f0  orr w8,wzr,#0xffffff
71025ea3f4  cbz x0,0x71025ea41c
71025ea3f8  ldr x9,[x0]
71025ea3fc  lsr x9,x9,#0x28
71025ea400  cmp w9,w8
71025ea404  b.eq 0x71025ea41c
71025ea408  ldr x8,[x21, #0x8]
71025ea40c  ldr w8,[x8, #0x4]
71025ea410  cmp w8,w9
71025ea414  orr w8,wzr,#0xffffff
71025ea418  csel w8,w9,w8,hi
71025ea41c  mov w2,#0x9
71025ea420  add x0,sp,#0x30
71025ea424  mov x1,sp
71025ea428  str w8,[sp]
71025ea42c  bl 0x71035c2890
71025ea430  ldp x8,x9,[sp, #0x30]
71025ea434  mov x21,x19
71025ea438  stp xzr,xzr,[sp, #0x30]
71025ea43c  str x8,[x21, #0x30]!
71025ea440  ldr x22,[x21, #0x8]
71025ea444  str x9,[x21, #0x8]
71025ea448  cbz x22,0x71025ea47c
71025ea44c  add x8,x22,#0x8
71025ea450  ldaxr x9,[x8]
71025ea454  sub x10,x9,#0x1
71025ea458  stlxr w11,x10,[x8]
71025ea45c  cbnz w11,0x71025ea450
71025ea460  cbnz x9,0x71025ea47c
71025ea464  ldr x8,[x22]
71025ea468  ldr x8,[x8, #0x10]
71025ea46c  mov x0,x22
71025ea470  blr x8
71025ea474  mov x0,x22
71025ea478  bl 0x71039c2670
71025ea47c  ldr x22,[sp, #0x38]
71025ea480  cbz x22,0x71025ea5c8
71025ea484  add x8,x22,#0x8
71025ea488  ldaxr x9,[x8]
71025ea48c  sub x10,x9,#0x1
71025ea490  stlxr w11,x10,[x8]
71025ea494  cbnz w11,0x71025ea488
71025ea498  cbnz x9,0x71025ea5c8
71025ea49c  ldr x8,[x22]
71025ea4a0  ldr x8,[x8, #0x10]
71025ea4a4  mov x0,x22
71025ea4a8  blr x8
71025ea4ac  mov x0,x22
71025ea4b0  bl 0x71039c2670
71025ea4b4  b 0x71025ea5c8
71025ea4b8  mov x9,xzr
71025ea4bc  ldr x21,[x8, #0x8]
71025ea4c0  str x9,[sp, #0x30]
71025ea4c4  ldr x8,[x21, #0x8]
71025ea4c8  ldr x1,[x21, #0x20]
71025ea4cc  ldr w2,[x8, #0x8]
71025ea4d0  adrp x4,0x7103542000
71025ea4d4  add x4,x4,#0x240
71025ea4d8  add x0,sp,#0x30
71025ea4dc  mov w3,#0x8
71025ea4e0  bl 0x71039c2630
71025ea4e4  orr w8,wzr,#0xffffff
71025ea4e8  cbz x0,0x71025ea510
71025ea4ec  ldr x9,[x0]
71025ea4f0  lsr x9,x9,#0x28
71025ea4f4  cmp w9,w8
71025ea4f8  b.eq 0x71025ea510
71025ea4fc  ldr x8,[x21, #0x8]
71025ea500  ldr w8,[x8, #0x4]
71025ea504  cmp w8,w9
71025ea508  orr w8,wzr,#0xffffff
71025ea50c  csel w8,w9,w8,hi
71025ea510  mov w2,#0x9
71025ea514  add x0,sp,#0x30
71025ea518  mov x1,sp
71025ea51c  str w8,[sp]
71025ea520  bl 0x71035c2890
71025ea524  ldp x8,x9,[sp, #0x30]
71025ea528  mov x21,x19
71025ea52c  stp xzr,xzr,[sp, #0x30]
71025ea530  str x8,[x21, #0x30]!
71025ea534  ldr x22,[x21, #0x8]
71025ea538  str x9,[x21, #0x8]
71025ea53c  cbz x22,0x71025ea570
71025ea540  add x8,x22,#0x8
71025ea544  ldaxr x9,[x8]
71025ea548  sub x10,x9,#0x1
71025ea54c  stlxr w11,x10,[x8]
71025ea550  cbnz w11,0x71025ea544
71025ea554  cbnz x9,0x71025ea570
71025ea558  ldr x8,[x22]
71025ea55c  ldr x8,[x8, #0x10]
71025ea560  mov x0,x22
71025ea564  blr x8
71025ea568  mov x0,x22
71025ea56c  bl 0x71039c2670
71025ea570  ldr x22,[sp, #0x38]
71025ea574  cbz x22,0x71025ea5a8
71025ea578  add x8,x22,#0x8
71025ea57c  ldaxr x9,[x8]
71025ea580  sub x10,x9,#0x1
71025ea584  stlxr w11,x10,[x8]
71025ea588  cbnz w11,0x71025ea57c
71025ea58c  cbnz x9,0x71025ea5a8
71025ea590  ldr x8,[x22]
71025ea594  ldr x8,[x8, #0x10]
71025ea598  mov x0,x22
71025ea59c  blr x8
71025ea5a0  mov x0,x22
71025ea5a4  bl 0x71039c2670
71025ea5a8  adrp x8,0x710532f000
71025ea5ac  ldr w0,[x8, #0x484]
71025ea5b0  cmn w0,#0x1
71025ea5b4  b.eq 0x71025ea5c8
71025ea5b8  bl 0x71039c0ac0
71025ea5bc  cbz x0,0x71025ea5c8
71025ea5c0  mov x0,xzr
71025ea5c4  bl 0x710353c9b0
71025ea5c8  adrp x8,0x7104468000
71025ea5cc  ldr q0,[x8, #0xca0]
71025ea5d0  adrp x8,0x710446a000
71025ea5d4  ldr x0,[x19, #0x30]
71025ea5d8  add x1,sp,#0x30
71025ea5dc  str q0,[sp, #0x30]
71025ea5e0  ldr q0,[x8, #0x360]
71025ea5e4  adrp x8,0x7104465000
71025ea5e8  str q0,[sp, #0x40]
71025ea5ec  ldr q0,[x8, #0x6b0]
71025ea5f0  adrp x8,0x710446a000
71025ea5f4  str q0,[sp, #0x50]
71025ea5f8  ldr q0,[x8, #0x350]
71025ea5fc  str q0,[sp, #0x60]
71025ea600  ldr x8,[x0]
71025ea604  ldr x8,[x8, #0x148]
71025ea608  blr x8
71025ea60c  ldr x0,[x19, #0x30]
71025ea610  ldr x8,[x0]
71025ea614  ldr x8,[x8, #0xb0]
71025ea618  blr x8
71025ea61c  ldp x23,x22,[x19, #0x30]
71025ea620  and w8,w0,#0x1
71025ea624  strb w8,[x19, #0x82]
71025ea628  cbz x22,0x71025ea674
71025ea62c  add x24,x22,#0x10
71025ea630  ldxr x8,[x24]
71025ea634  add x8,x8,#0x1
71025ea638  stxr w9,x8,[x24]
71025ea63c  cbnz w9,0x71025ea630
71025ea640  ldxr x8,[x24]
71025ea644  add x8,x8,#0x1
71025ea648  stxr w9,x8,[x24]
71025ea64c  cbnz w9,0x71025ea640
71025ea650  mov x0,x22
71025ea654  bl 0x71039c2670
71025ea658  stp x23,x22,[sp, #0x18]
71025ea65c  ldxr x8,[x24]
71025ea660  add x8,x8,#0x1
71025ea664  stxr w9,x8,[x24]
71025ea668  cbnz w9,0x71025ea65c
71025ea66c  mov x25,sp
71025ea670  b 0x71025ea67c
71025ea674  mov x25,sp
71025ea678  stp x23,xzr,[sp, #0x18]
71025ea67c  mov w1,#0xb0
71025ea680  mov w0,#0x10
71025ea684  strb wzr,[sp, #0x28]
71025ea688  bl 0x710392e290
71025ea68c  mov x23,x0
71025ea690  cbnz x0,0x71025ea6dc
71025ea694  adrp x8,0x7105332000
71025ea698  ldr x0,[x8, #0xf00]
71025ea69c  cbz x0,0x71025ea6d8
71025ea6a0  mov w8,#0xb0
71025ea6a4  stur wzr,[x29, #-0x44]
71025ea6a8  sub x1,x29,#0x44
71025ea6ac  str x8,[sp, #0x30]
71025ea6b0  ldr x8,[x0]
71025ea6b4  ldr x8,[x8, #0x30]
71025ea6b8  add x2,sp,#0x30
71025ea6bc  blr x8
71025ea6c0  tbz w0,#0x0,0x71025ea6d8
71025ea6c4  mov w1,#0xb0
71025ea6c8  mov w0,#0x10
71025ea6cc  bl 0x710392e290
71025ea6d0  mov x23,x0
71025ea6d4  cbnz x0,0x71025ea6dc
71025ea6d8  mov x23,xzr
71025ea6dc  adrp x8,0x7105232000
71025ea6e0  add x8,x8,#0x428
71025ea6e4  adrp x9,0x7105232000
71025ea6e8  add x9,x9,#0x460
71025ea6ec  mov x24,x23
71025ea6f0  str x8,[x23]
71025ea6f4  orr w8,wzr,#0x3f800000
71025ea6f8  stp xzr,xzr,[x23, #0x8]
71025ea6fc  str x9,[x24, #0x18]!
71025ea700  str w8,[x23, #0x58]
71025ea704  mov x8,#-0x1
71025ea708  adrp x9,0x7105231000
71025ea70c  add x9,x9,#0xd18
71025ea710  stp x8,x9,[x23, #0x60]
71025ea714  adrp x8,0x710522f000
71025ea718  add x8,x8,#0xf60
71025ea71c  add x1,sp,#0x18
71025ea720  mov x0,x24
71025ea724  strb wzr,[x23, #0x20]
71025ea728  str xzr,[x23, #0x80]
71025ea72c  stp xzr,xzr,[x23, #0x48]
71025ea730  strb wzr,[x23, #0xa8]
71025ea734  stp xzr,xzr,[x23, #0x38]
71025ea738  stp xzr,xzr,[x23, #0x28]
71025ea73c  stp xzr,xzr,[x23, #0x70]
71025ea740  stp xzr,xzr,[x23, #0x98]
71025ea744  stp x8,xzr,[x23, #0x88]
71025ea748  stp x24,x23,[sp]
71025ea74c  bl 0x71035b9d00
71025ea750  tbz w0,#0x0,0x71025ea788
71025ea754  adrp x8,0x7105336000
71025ea758  ldr x0,[x8, #0xe10]
71025ea75c  add x8,x23,#0x10
71025ea760  stp x24,x23,[sp, #0x30]
71025ea764  ldxr x9,[x8]
71025ea768  add x9,x9,#0x1
71025ea76c  stxr w10,x9,[x8]
71025ea770  cbnz w10,0x71025ea764
71025ea774  add x1,sp,#0x30
71025ea778  bl 0x71035c1da0
71025ea77c  cbz x23,0x71025ea788
71025ea780  mov x0,x23
71025ea784  bl 0x71039c2670
71025ea788  stp xzr,xzr,[x25]
71025ea78c  str x24,[x19, #0x40]
71025ea790  ldr x24,[x19, #0x48]
71025ea794  str x23,[x19, #0x48]
71025ea798  cbz x24,0x71025ea7cc
71025ea79c  add x8,x24,#0x8
71025ea7a0  ldaxr x9,[x8]
71025ea7a4  sub x10,x9,#0x1
71025ea7a8  stlxr w11,x10,[x8]
71025ea7ac  cbnz w11,0x71025ea7a0
71025ea7b0  cbnz x9,0x71025ea7cc
71025ea7b4  ldr x8,[x24]
71025ea7b8  ldr x8,[x8, #0x10]
71025ea7bc  mov x0,x24
71025ea7c0  blr x8
71025ea7c4  mov x0,x24
71025ea7c8  bl 0x71039c2670
71025ea7cc  ldr x23,[sp, #0x8]
71025ea7d0  cbz x23,0x71025ea804
71025ea7d4  add x8,x23,#0x8
71025ea7d8  ldaxr x9,[x8]
71025ea7dc  sub x10,x9,#0x1
71025ea7e0  stlxr w11,x10,[x8]
71025ea7e4  cbnz w11,0x71025ea7d8
71025ea7e8  cbnz x9,0x71025ea804
71025ea7ec  ldr x8,[x23]
71025ea7f0  ldr x8,[x8, #0x10]
71025ea7f4  mov x0,x23
71025ea7f8  blr x8
71025ea7fc  mov x0,x23
71025ea800  bl 0x71039c2670
71025ea804  ldr x0,[sp, #0x20]
71025ea808  cbz x0,0x71025ea810
71025ea80c  bl 0x71039c2670
71025ea810  cbz x22,0x71025ea81c
71025ea814  mov x0,x22
71025ea818  bl 0x71039c2670
71025ea81c  ldr w8,[x20]
71025ea820  orr w9,wzr,#0xffffff
71025ea824  cmp w8,w9
71025ea828  b.ne 0x71025ea834
71025ea82c  mov x8,xzr
71025ea830  b 0x71025ea858
71025ea834  adrp x9,0x7105332000
71025ea838  ldr x9,[x9, #0xf20]
71025ea83c  ldr x9,[x9, #0x78]
71025ea840  ldr x9,[x9]
71025ea844  ldr x9,[x9, #0x78]
71025ea848  mov w10,#0x34
71025ea84c  madd x8,x8,x10,x9
71025ea850  ldr x8,[x8, #0x8]
71025ea854  and x8,x8,#0xffffffffff
71025ea858  mov w0,#0x10
71025ea85c  mov w1,#0x20
71025ea860  str x8,[x19, #0x8]
71025ea864  bl 0x710392e290
71025ea868  mov x22,x0
71025ea86c  cbnz x0,0x71025ea8b8
71025ea870  adrp x8,0x7105332000
71025ea874  ldr x0,[x8, #0xf00]
71025ea878  cbz x0,0x71025ea8b4
71025ea87c  mov w8,#0x20
71025ea880  str wzr,[sp]
71025ea884  mov x1,sp
71025ea888  str x8,[sp, #0x30]
71025ea88c  ldr x8,[x0]
71025ea890  ldr x8,[x8, #0x30]
71025ea894  add x2,sp,#0x30
71025ea898  blr x8
71025ea89c  tbz w0,#0x0,0x71025ea8b4
71025ea8a0  mov w0,#0x10
71025ea8a4  mov w1,#0x20
71025ea8a8  bl 0x710392e290
71025ea8ac  mov x22,x0
71025ea8b0  cbnz x0,0x71025ea8b8
71025ea8b4  mov x22,xzr
71025ea8b8  ldr x0,[x21]
71025ea8bc  ldr x8,[x19, #0x38]
71025ea8c0  stp x0,x8,[x22]
71025ea8c4  cbz x8,0x71025ea8e0
71025ea8c8  add x8,x8,#0x8
71025ea8cc  ldxr x9,[x8]
71025ea8d0  add x9,x9,#0x1
71025ea8d4  stxr w10,x9,[x8]
71025ea8d8  cbnz w10,0x71025ea8cc
71025ea8dc  ldr x0,[x22]
71025ea8e0  mov w8,#0x1
71025ea8e4  strb w8,[x22, #0x10]
71025ea8e8  orr w8,wzr,#0x3f800000
71025ea8ec  stur x8,[x22, #0x14]
71025ea8f0  mov w8,#0x1800
71025ea8f4  movk w8,#0x4876, LSL #16
71025ea8f8  str w8,[x22, #0x1c]
71025ea8fc  ldr x8,[x0]
71025ea900  ldr x8,[x8, #0x438]
71025ea904  fmov s0,wzr
71025ea908  blr x8
71025ea90c  ldr x23,[x19, #0x50]
71025ea910  str x22,[x19, #0x50]
71025ea914  cbz x23,0x71025ea958
71025ea918  ldr x22,[x23, #0x8]
71025ea91c  cbz x22,0x71025ea950
71025ea920  add x8,x22,#0x8
71025ea924  ldaxr x9,[x8]
71025ea928  sub x10,x9,#0x1
71025ea92c  stlxr w11,x10,[x8]
71025ea930  cbnz w11,0x71025ea924
71025ea934  cbnz x9,0x71025ea950
71025ea938  ldr x8,[x22]
71025ea93c  ldr x8,[x8, #0x10]
71025ea940  mov x0,x22
71025ea944  blr x8
71025ea948  mov x0,x22
71025ea94c  bl 0x71039c2670
71025ea950  mov x0,x23
71025ea954  bl 0x710392eb40
71025ea958  stp xzr,xzr,[sp, #0x8]
71025ea95c  add x0,sp,#0x30
71025ea960  str xzr,[sp]
71025ea964  ldr w1,[x20]
71025ea968  bl 0x710353db90
71025ea96c  ldp x20,x23,[sp, #0x30]
71025ea970  cmp x20,x23
71025ea974  b.eq 0x71025ea9ec
71025ea978  orr w24,wzr,#0xffffff
71025ea97c  adrp x25,0x7105332000
71025ea980  adrp x22,0x71043ab000
71025ea984  add x22,x22,#0x87b
71025ea988  ldr w0,[x20]
71025ea98c  mov x1,x22
71025ea990  bl 0x710353d910
71025ea994  tbz w0,#0x0,0x71025ea9dc
71025ea998  ldp x8,x9,[sp, #0x8]
71025ea99c  cmp x8,x9
71025ea9a0  b.eq 0x71025ea9d0
71025ea9a4  str w24,[x8]
71025ea9a8  ldr w1,[x20]
71025ea9ac  cmp w1,w24
71025ea9b0  str w1,[x8]
71025ea9b4  b.eq 0x71025ea9c0
71025ea9b8  ldr x0,[x25, #0xf20]
71025ea9bc  bl 0x7103540a00
71025ea9c0  ldr x8,[sp, #0x8]
71025ea9c4  add x8,x8,#0x4
71025ea9c8  str x8,[sp, #0x8]
71025ea9cc  b 0x71025ea9dc
71025ea9d0  mov x0,sp
71025ea9d4  mov x1,x20
71025ea9d8  bl 0x7101609af0
71025ea9dc  add x20,x20,#0x4
71025ea9e0  cmp x23,x20
71025ea9e4  b.ne 0x71025ea988
71025ea9e8  ldr x20,[sp, #0x30]
71025ea9ec  cbz x20,0x71025eaa3c
71025ea9f0  ldr x22,[sp, #0x38]
71025ea9f4  cmp x22,x20
71025ea9f8  b.eq 0x71025eab7c
71025ea9fc  orr w23,wzr,#0xffffff
71025eaa00  adrp x24,0x7105332000
71025eaa04  mov x25,x22
71025eaa08  ldr w1,[x25, #-0x4]!
71025eaa0c  cmp w1,w23
71025eaa10  b.eq 0x71025eaa20
71025eaa14  ldr x0,[x24, #0xf20]
71025eaa18  bl 0x7103540b10
71025eaa1c  stur w23,[x22, #-0x4]
71025eaa20  cmp x20,x25
71025eaa24  mov x22,x25
71025eaa28  b.ne 0x71025eaa08
71025eaa2c  ldr x0,[sp, #0x30]
71025eaa30  str x20,[sp, #0x38]
71025eaa34  cbz x0,0x71025eaa3c
71025eaa38  bl 0x710392eb40
71025eaa3c  mov x22,x19
71025eaa40  ldr x23,[x22, #0x18]!
71025eaa44  cbz x23,0x71025eaaa4
71025eaa48  mov x20,x19
71025eaa4c  ldr x24,[x20, #0x20]!
71025eaa50  cmp x24,x23
71025eaa54  b.eq 0x71025eab8c
71025eaa58  orr w25,wzr,#0xffffff
71025eaa5c  adrp x26,0x7105332000
71025eaa60  mov x27,x24
71025eaa64  ldr w1,[x27, #-0x4]!
71025eaa68  cmp w1,w25
71025eaa6c  b.eq 0x71025eaa7c
71025eaa70  ldr x0,[x26, #0xf20]
71025eaa74  bl 0x7103540b10
71025eaa78  stur w25,[x24, #-0x4]
71025eaa7c  cmp x23,x27
71025eaa80  mov x24,x27
71025eaa84  b.ne 0x71025eaa64
71025eaa88  ldr x0,[x22]
71025eaa8c  str x23,[x20]
71025eaa90  cbz x0,0x71025eaa98
71025eaa94  bl 0x710392eb40
71025eaa98  stp xzr,xzr,[x22, #0x8]
71025eaa9c  str xzr,[x22]
71025eaaa0  b 0x71025eaaa8
71025eaaa4  add x20,x19,#0x20
71025eaaa8  ldp x22,x23,[sp]
71025eaaac  str x22,[x19, #0x18]
71025eaab0  str x23,[x20]
71025eaab4  ldr x8,[sp, #0x10]
71025eaab8  mov w0,#0x10
71025eaabc  orr w1,wzr,#0x60
71025eaac0  str x8,[x19, #0x28]
71025eaac4  bl 0x710392e290
71025eaac8  mov x20,x0
71025eaacc  cbnz x0,0x71025eab18
71025eaad0  adrp x8,0x7105332000
71025eaad4  ldr x0,[x8, #0xf00]
71025eaad8  cbz x0,0x71025eab14
71025eaadc  orr w8,wzr,#0x60
71025eaae0  str wzr,[sp]
71025eaae4  mov x1,sp
71025eaae8  str x8,[sp, #0x30]
71025eaaec  ldr x8,[x0]
71025eaaf0  ldr x8,[x8, #0x30]
71025eaaf4  add x2,sp,#0x30
71025eaaf8  blr x8
71025eaafc  tbz w0,#0x0,0x71025eab14
71025eab00  mov w0,#0x10
71025eab04  orr w1,wzr,#0x60
71025eab08  bl 0x710392e290
71025eab0c  mov x20,x0
71025eab10  cbnz x0,0x71025eab18
71025eab14  mov x20,xzr
71025eab18  ldrb w4,[x19, #0x82]
71025eab1c  cmp x22,x23
71025eab20  sub x8,x23,x22
71025eab24  csel x2,xzr,x22,eq
71025eab28  asr x3,x8,#0x2
71025eab2c  mov x0,x20
71025eab30  mov x1,x21
71025eab34  bl 0x7102651db0
71025eab38  ldr x21,[x19, #0x58]
71025eab3c  str x20,[x19, #0x58]
71025eab40  cbz x21,0x71025eab54
71025eab44  mov x0,x21
71025eab48  bl 0x7102652630
71025eab4c  mov x0,x21
71025eab50  bl 0x710392eb40
71025eab54  mov w8,#0x1
71025eab58  strb w8,[x19, #0x80]
71025eab5c  ldr x27,[sp, #0x70]
71025eab60  ldp x29,x30,[sp, #0xc0]
71025eab64  ldp x20,x19,[sp, #0xb0]
71025eab68  ldp x22,x21,[sp, #0xa0]
71025eab6c  ldp x24,x23,[sp, #0x90]
71025eab70  ldp x26,x25,[sp, #0x80]
71025eab74  add sp,sp,#0xd0
71025eab78  ret
71025eab7c  mov x0,x20
71025eab80  str x20,[sp, #0x38]
71025eab84  cbnz x0,0x71025eaa38
71025eab88  b 0x71025eaa3c
71025eab8c  mov x0,x23
71025eab90  str x23,[x20]
71025eab94  cbnz x0,0x71025eaa94
71025eab98  b 0x71025eaa98
