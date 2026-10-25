// addr:      71038ea260
// offset:    0x38ea260
// name:      FUN_71038ea260
// mangled:   
// size:      11988

71038ea260  stp x28,x27,[sp, #-0x60]!
71038ea264  stp x26,x25,[sp, #0x10]
71038ea268  stp x24,x23,[sp, #0x20]
71038ea26c  stp x22,x21,[sp, #0x30]
71038ea270  stp x20,x19,[sp, #0x40]
71038ea274  stp x29,x30,[sp, #0x50]
71038ea278  add x29,sp,#0x50
71038ea27c  sub sp,sp,#0x1, LSL #12
71038ea280  sub sp,sp,#0x1f0
71038ea284  ldr x8,[x1, #0x8]
71038ea288  ldrb w9,[x8, #0x120]
71038ea28c  str x2,[sp, #0x58]
71038ea290  cbz w9,0x71038ec5d4
71038ea294  ldr x28,[x8, #0x118]
71038ea298  adrp x10,0x7105292000
71038ea29c  ldr w9,[x10, #0xee8]
71038ea2a0  ldr w8,[x28, #0x8]
71038ea2a4  mov x20,x0
71038ea2a8  cmn w9,#0x1
71038ea2ac  b.eq 0x71038ea2ec
71038ea2b0  cmp w8,w9
71038ea2b4  b.ne 0x71038ec5d4
71038ea2b8  ldr x8,[x20, #0x28]
71038ea2bc  cbz x8,0x71038ea30c
71038ea2c0  ldr x8,[x8]
71038ea2c4  ldr x9,[x20, #0x30]
71038ea2c8  cmp x8,x9
71038ea2cc  b.ne 0x71038ea30c
71038ea2d0  ldr x8,[x20, #0x20]
71038ea2d4  str x8,[x28, #0x18]
71038ea2d8  cbz x8,0x71038ea310
71038ea2dc  ldr x8,[x8, #0x8]
71038ea2e0  str x8,[x28, #0x20]
71038ea2e4  ldr x8,[x8]
71038ea2e8  b 0x71038ea318
71038ea2ec  adrp x11,0x7106d43000
71038ea2f0  ldr w9,[x11, #0x320]
71038ea2f4  add w12,w9,#0x1
71038ea2f8  str w12,[x11, #0x320]
71038ea2fc  str w9,[x10, #0xee8]
71038ea300  cmp w8,w9
71038ea304  b.eq 0x71038ea2b8
71038ea308  b 0x71038ec5d4
71038ea30c  str xzr,[x28, #0x18]
71038ea310  mov x8,xzr
71038ea314  str xzr,[x28, #0x20]
71038ea318  str x8,[x28, #0x28]
71038ea31c  ldr x8,[x1, #0x8]
71038ea320  ldr x8,[x8, #0x30]
71038ea324  ldr w9,[x8, #0x78]
71038ea328  eor w1,w9,w9, ASR #0x1f
71038ea32c  add x2,x8,#0x80
71038ea330  add x0,sp,#0x430
71038ea334  bl 0x71038d8140
71038ea338  ldr x8,[sp, #0x440]
71038ea33c  cbz x8,0x71038ea368
71038ea340  ldr x8,[x8]
71038ea344  ldr x9,[sp, #0x448]
71038ea348  cmp x8,x9
71038ea34c  b.ne 0x71038ea368
71038ea350  ldr x21,[sp, #0x438]
71038ea354  cbz x21,0x71038ea36c
71038ea358  ldr x22,[x21, #0x8]
71038ea35c  ldr x8,[x22]
71038ea360  str x8,[sp, #0xf0]
71038ea364  b 0x71038ea374
71038ea368  mov x21,xzr
71038ea36c  mov x22,xzr
71038ea370  str xzr,[sp, #0xf0]
71038ea374  ldr w8,[x21, #0x10]
71038ea378  eor w1,w8,w8, ASR #0x1f
71038ea37c  add x2,x21,#0x18
71038ea380  add x0,sp,#0x430
71038ea384  str x2,[sp, #0xa0]
71038ea388  bl 0x71038cf200
71038ea38c  ldr x8,[sp, #0x440]
71038ea390  cbz x8,0x71038ea3b0
71038ea394  ldr x8,[x8]
71038ea398  ldr x9,[sp, #0x448]
71038ea39c  cmp x8,x9
71038ea3a0  b.ne 0x71038ea3b0
71038ea3a4  ldr x8,[sp, #0x438]
71038ea3a8  str x8,[sp, #0xe8]
71038ea3ac  b 0x71038ea3b4
71038ea3b0  str xzr,[sp, #0xe8]
71038ea3b4  ldr x8,[x21, #0x48]
71038ea3b8  str x8,[sp, #0x30]
71038ea3bc  mov x23,x28
71038ea3c0  ldr x8,[x23, #0x48]!
71038ea3c4  str x8,[x23, #0x8]
71038ea3c8  mov w8,#0x1
71038ea3cc  str w8,[sp, #0x430]
71038ea3d0  str xzr,[sp, #0x460]
71038ea3d4  adrp x8,0x7106d43000
71038ea3d8  add x8,x8,#0x2e0
71038ea3dc  ldarb w8,[x8]
71038ea3e0  tbz w8,#0x0,0x71038ec600
71038ea3e4  adrp x26,0x7106d43000
71038ea3e8  add x26,x26,#0x1e8
71038ea3ec  ldrb w8,[x26]
71038ea3f0  ldr x9,[x26, #0x10]
71038ea3f4  tst w8,#0x1
71038ea3f8  csinc x8,x9,x26,ne
71038ea3fc  str x8,[sp, #0x470]
71038ea400  adrp x8,0x7106d43000
71038ea404  add x8,x8,#0x2d8
71038ea408  ldarb w8,[x8]
71038ea40c  tbz w8,#0x0,0x71038ec660
71038ea410  adrp x19,0x7106d43000
71038ea414  add x19,x19,#0x1d0
71038ea418  ldrb w8,[x19]
71038ea41c  ldr x9,[x19, #0x10]
71038ea420  tst w8,#0x1
71038ea424  csinc x8,x9,x19,ne
71038ea428  str x8,[sp, #0x478]
71038ea42c  adrp x8,0x7106d43000
71038ea430  add x8,x8,#0x2d0
71038ea434  ldarb w8,[x8]
71038ea438  tbz w8,#0x0,0x71038ec6b8
71038ea43c  adrp x24,0x7106d43000
71038ea440  add x24,x24,#0x1b8
71038ea444  ldrb w8,[x24]
71038ea448  ldr x9,[x24, #0x10]
71038ea44c  tst w8,#0x1
71038ea450  csinc x8,x9,x24,ne
71038ea454  str x23,[sp]
71038ea458  str x20,[sp, #0x90]
71038ea45c  str x8,[sp, #0x480]
71038ea460  adrp x8,0x7106d43000
71038ea464  add x8,x8,#0x2f8
71038ea468  ldarb w8,[x8]
71038ea46c  tbz w8,#0x0,0x71038ec718
71038ea470  adrp x8,0x71043ce000
71038ea474  add x8,x8,#0x119
71038ea478  adrp x25,0x7106d43000
71038ea47c  add x25,x25,#0x374
71038ea480  str x8,[sp, #0x490]
71038ea484  str x22,[sp, #0x50]
71038ea488  ldp x8,x12,[x25]
71038ea48c  adrp x22,0x7106d43000
71038ea490  add x22,x22,#0x2a8
71038ea494  adrp x23,0x7106d43000
71038ea498  add x23,x23,#0x230
71038ea49c  ldrb w9,[x23]
71038ea4a0  ldr x10,[x23, #0x10]
71038ea4a4  str x12,[sp, #0x4a8]
71038ea4a8  ldp x13,x12,[x22, #0x18]
71038ea4ac  str x12,[sp, #0x4e8]
71038ea4b0  ldr x12,[x22, #0x10]
71038ea4b4  tst w9,#0x1
71038ea4b8  csinc x9,x10,x23,ne
71038ea4bc  str x9,[sp, #0x488]
71038ea4c0  adrp x9,0x71038ed000
71038ea4c4  add x9,x9,#0x140
71038ea4c8  str x9,[sp, #0x498]
71038ea4cc  str x8,[sp, #0x4a0]
71038ea4d0  str x13,[sp, #0x4e0]
71038ea4d4  ldp x8,x9,[x25, #0x18]
71038ea4d8  str x8,[sp, #0x508]
71038ea4dc  str x9,[sp, #0x4c0]
71038ea4e0  ldp x9,x10,[x25, #0x10]
71038ea4e4  str x10,[sp, #0x4b8]
71038ea4e8  str x12,[sp, #0x4d8]
71038ea4ec  str x21,[sp, #0x98]
71038ea4f0  ldp x12,x13,[x22]
71038ea4f4  adrp x21,0x7106d43000
71038ea4f8  add x21,x21,#0x324
71038ea4fc  ldp x10,x11,[x25, #0x8]
71038ea500  str x12,[sp, #0x4c8]
71038ea504  ldp x8,x12,[x21]
71038ea508  str x12,[sp, #0x520]
71038ea50c  mov w12,#0x4
71038ea510  str x12,[sp, #0x540]
71038ea514  str w12,[sp, #0x550]
71038ea518  adrp x12,0x7105292000
71038ea51c  add x12,x12,#0xf18
71038ea520  str x12,[sp, #0x560]
71038ea524  add x12,sp,#0x430
71038ea528  add x12,x12,#0x130
71038ea52c  str x12,[sp, #0x580]
71038ea530  adrp x12,0x7105292000
71038ea534  add x12,x12,#0xf60
71038ea538  str x13,[sp, #0x4d0]
71038ea53c  ldp x13,x14,[x12, #0x10]
71038ea540  str x13,[sp, #0x5a0]
71038ea544  ldp x13,x12,[x12]
71038ea548  str x12,[sp, #0x598]
71038ea54c  adrp x12,0x71038ed000
71038ea550  add x12,x12,#0x5a0
71038ea554  str x12,[sp, #0x5b8]
71038ea558  adrp x12,0x7106d43000
71038ea55c  add x12,x12,#0x34c
71038ea560  str x11,[sp, #0x4b0]
71038ea564  ldr x11,[x25]
71038ea568  str x9,[sp, #0x500]
71038ea56c  str x8,[sp, #0x518]
71038ea570  ldp x8,x9,[x21, #0x18]
71038ea574  str x13,[sp, #0x590]
71038ea578  ldp x13,x17,[x12]
71038ea57c  str x11,[sp, #0x4f0]
71038ea580  ldr x11,[x25, #0x20]
71038ea584  str x10,[sp, #0x4f8]
71038ea588  str x9,[sp, #0x538]
71038ea58c  ldp x9,x10,[x21, #0x10]
71038ea590  str x14,[sp, #0x5a8]
71038ea594  str x11,[sp, #0x510]
71038ea598  str x10,[sp, #0x530]
71038ea59c  ldp x10,x11,[x21, #0x8]
71038ea5a0  str x11,[sp, #0x528]
71038ea5a4  ldr x11,[x21]
71038ea5a8  str x8,[sp, #0x600]
71038ea5ac  ldr x8,[x12, #0x20]
71038ea5b0  str x8,[sp, #0x630]
71038ea5b4  str x13,[sp, #0x5c0]
71038ea5b8  str x11,[sp, #0x5e8]
71038ea5bc  ldp x13,x14,[x12, #0x18]
71038ea5c0  str x14,[sp, #0x5e0]
71038ea5c4  ldp x14,x15,[x12, #0x10]
71038ea5c8  str x15,[sp, #0x5d8]
71038ea5cc  ldp x15,x16,[x12, #0x8]
71038ea5d0  str x16,[sp, #0x5d0]
71038ea5d4  ldr x16,[x12]
71038ea5d8  ldr x11,[x21, #0x20]
71038ea5dc  orr w8,wzr,#0x3
71038ea5e0  str x8,[sp, #0x660]
71038ea5e4  mov w8,#0x2
71038ea5e8  str xzr,[sp, #0x5b0]
71038ea5ec  str x17,[sp, #0x5c8]
71038ea5f0  str x11,[sp, #0x608]
71038ea5f4  str x9,[sp, #0x5f8]
71038ea5f8  str x10,[sp, #0x5f0]
71038ea5fc  str x13,[sp, #0x628]
71038ea600  str x16,[sp, #0x610]
71038ea604  str x14,[sp, #0x620]
71038ea608  str x15,[sp, #0x618]
71038ea60c  str xzr,[sp, #0x658]
71038ea610  str xzr,[sp, #0x650]
71038ea614  str xzr,[sp, #0x648]
71038ea618  str xzr,[sp, #0x640]
71038ea61c  str xzr,[sp, #0x638]
71038ea620  str w8,[sp, #0x670]
71038ea624  str xzr,[sp, #0x6a0]
71038ea628  adrp x8,0x7106d43000
71038ea62c  add x8,x8,#0x2e8
71038ea630  str xzr,[sp, #0x6c8]
71038ea634  str xzr,[sp, #0x6c0]
71038ea638  str xzr,[sp, #0x6b8]
71038ea63c  str xzr,[sp, #0x6b0]
71038ea640  ldarb w8,[x8]
71038ea644  tbz w8,#0x0,0x71038ec77c
71038ea648  adrp x8,0x7106d43000
71038ea64c  add x8,x8,#0x200
71038ea650  ldrb w10,[x8]
71038ea654  ldr x11,[x8, #0x10]
71038ea658  tst w10,#0x1
71038ea65c  csinc x8,x11,x8,ne
71038ea660  adrp x9,0x71042f6000
71038ea664  add x9,x9,#0x86b
71038ea668  str x9,[sp, #0x6d0]
71038ea66c  str x8,[sp, #0x6b0]
71038ea670  adrp x8,0x71038ee000
71038ea674  add x8,x8,#0x190
71038ea678  str x8,[sp, #0x6d8]
71038ea67c  ldp x8,x9,[x21]
71038ea680  str x8,[sp, #0x6e0]
71038ea684  ldp x8,x10,[x21, #0x10]
71038ea688  ldr x11,[x21, #0x20]
71038ea68c  str x11,[sp, #0x700]
71038ea690  str x8,[sp, #0x6f0]
71038ea694  mov w8,#0x1
71038ea698  mov w27,#0x5
71038ea69c  str xzr,[sp, #0x778]
71038ea6a0  str xzr,[sp, #0x770]
71038ea6a4  str xzr,[sp, #0x768]
71038ea6a8  str xzr,[sp, #0x760]
71038ea6ac  str xzr,[sp, #0x758]
71038ea6b0  str xzr,[sp, #0x750]
71038ea6b4  str xzr,[sp, #0x748]
71038ea6b8  str xzr,[sp, #0x740]
71038ea6bc  str xzr,[sp, #0x738]
71038ea6c0  str xzr,[sp, #0x730]
71038ea6c4  str xzr,[sp, #0x728]
71038ea6c8  str xzr,[sp, #0x720]
71038ea6cc  str xzr,[sp, #0x718]
71038ea6d0  str xzr,[sp, #0x710]
71038ea6d4  str xzr,[sp, #0x708]
71038ea6d8  str x10,[sp, #0x6f8]
71038ea6dc  str x9,[sp, #0x6e8]
71038ea6e0  str w27,[sp, #0x790]
71038ea6e4  str xzr,[sp, #0x7c0]
71038ea6e8  str xzr,[sp, #0x7e8]
71038ea6ec  str xzr,[sp, #0x7e0]
71038ea6f0  str xzr,[sp, #0x7d8]
71038ea6f4  str x8,[sp, #0x780]
71038ea6f8  adrp x8,0x7106d43000
71038ea6fc  add x8,x8,#0x308
71038ea700  str xzr,[sp, #0x7d0]
71038ea704  ldarb w8,[x8]
71038ea708  tbz w8,#0x0,0x71038ec7d4
71038ea70c  adrp x8,0x7106d43000
71038ea710  add x8,x8,#0x260
71038ea714  ldrb w9,[x8]
71038ea718  ldr x10,[x8, #0x10]
71038ea71c  tst w9,#0x1
71038ea720  csinc x8,x10,x8,ne
71038ea724  str x8,[sp, #0x7d0]
71038ea728  adrp x8,0x710427f000
71038ea72c  add x8,x8,#0x608
71038ea730  str x8,[sp, #0x7f0]
71038ea734  ldp x8,x9,[x21]
71038ea738  str x8,[sp, #0x800]
71038ea73c  ldp x8,x10,[x21, #0x10]
71038ea740  ldr x11,[x21, #0x20]
71038ea744  adrp x20,0x71038ee000
71038ea748  add x20,x20,#0x380
71038ea74c  str x20,[sp, #0x7f8]
71038ea750  str x8,[sp, #0x810]
71038ea754  mov w8,#0x1
71038ea758  str xzr,[sp, #0x898]
71038ea75c  str xzr,[sp, #0x890]
71038ea760  str xzr,[sp, #0x888]
71038ea764  str xzr,[sp, #0x880]
71038ea768  str xzr,[sp, #0x878]
71038ea76c  str xzr,[sp, #0x870]
71038ea770  str xzr,[sp, #0x868]
71038ea774  str xzr,[sp, #0x860]
71038ea778  str xzr,[sp, #0x858]
71038ea77c  str xzr,[sp, #0x850]
71038ea780  str xzr,[sp, #0x848]
71038ea784  str xzr,[sp, #0x840]
71038ea788  str xzr,[sp, #0x838]
71038ea78c  str xzr,[sp, #0x830]
71038ea790  str xzr,[sp, #0x828]
71038ea794  str x11,[sp, #0x820]
71038ea798  str x10,[sp, #0x818]
71038ea79c  str x9,[sp, #0x808]
71038ea7a0  str xzr,[sp, #0x8e0]
71038ea7a4  str xzr,[sp, #0x908]
71038ea7a8  str xzr,[sp, #0x900]
71038ea7ac  str xzr,[sp, #0x8f8]
71038ea7b0  str x8,[sp, #0x8a0]
71038ea7b4  adrp x8,0x7106d43000
71038ea7b8  add x8,x8,#0x310
71038ea7bc  str w27,[sp, #0x8b0]
71038ea7c0  str xzr,[sp, #0x8f0]
71038ea7c4  ldarb w8,[x8]
71038ea7c8  tbz w8,#0x0,0x71038ec82c
71038ea7cc  adrp x8,0x7106d43000
71038ea7d0  add x8,x8,#0x278
71038ea7d4  ldrb w10,[x8]
71038ea7d8  ldr x11,[x8, #0x10]
71038ea7dc  tst w10,#0x1
71038ea7e0  adrp x9,0x7104317000
71038ea7e4  add x9,x9,#0xad9
71038ea7e8  str x9,[sp, #0x910]
71038ea7ec  str x20,[sp, #0x918]
71038ea7f0  str xzr,[sp, #0x9b8]
71038ea7f4  str xzr,[sp, #0x9b0]
71038ea7f8  str xzr,[sp, #0x9a8]
71038ea7fc  str xzr,[sp, #0x9a0]
71038ea800  str xzr,[sp, #0x998]
71038ea804  csinc x8,x11,x8,ne
71038ea808  ldr x11,[x21, #0x20]
71038ea80c  str x8,[sp, #0x8f0]
71038ea810  str x28,[sp, #0x88]
71038ea814  ldp x8,x9,[x21]
71038ea818  str x8,[sp, #0x920]
71038ea81c  ldp x8,x10,[x21, #0x10]
71038ea820  str x8,[sp, #0x930]
71038ea824  mov w8,#0x1
71038ea828  str xzr,[sp, #0x990]
71038ea82c  str xzr,[sp, #0x988]
71038ea830  str xzr,[sp, #0x980]
71038ea834  str xzr,[sp, #0x978]
71038ea838  str xzr,[sp, #0x970]
71038ea83c  str xzr,[sp, #0x968]
71038ea840  str xzr,[sp, #0x960]
71038ea844  str xzr,[sp, #0x958]
71038ea848  str xzr,[sp, #0x950]
71038ea84c  str xzr,[sp, #0x948]
71038ea850  str x11,[sp, #0x940]
71038ea854  str x10,[sp, #0x938]
71038ea858  str x9,[sp, #0x928]
71038ea85c  str w27,[sp, #0x9d0]
71038ea860  str xzr,[sp, #0xa00]
71038ea864  str xzr,[sp, #0xa28]
71038ea868  str xzr,[sp, #0xa20]
71038ea86c  str xzr,[sp, #0xa18]
71038ea870  str xzr,[sp, #0xa10]
71038ea874  str x8,[sp, #0x9c0]
71038ea878  adrp x8,0x7106d43000
71038ea87c  add x8,x8,#0x318
71038ea880  ldarb w8,[x8]
71038ea884  tbz w8,#0x0,0x71038ec890
71038ea888  adrp x8,0x7106d43000
71038ea88c  add x8,x8,#0x290
71038ea890  ldrb w10,[x8]
71038ea894  ldr x11,[x8, #0x10]
71038ea898  tst w10,#0x1
71038ea89c  adrp x9,0x710438b000
71038ea8a0  add x9,x9,#0x5c0
71038ea8a4  str x9,[sp, #0xa30]
71038ea8a8  add x28,sp,#0x430
71038ea8ac  mov w27,#0x1
71038ea8b0  str x20,[sp, #0xa38]
71038ea8b4  str xzr,[sp, #0xad8]
71038ea8b8  str xzr,[sp, #0xad0]
71038ea8bc  str xzr,[sp, #0xac8]
71038ea8c0  str xzr,[sp, #0xac0]
71038ea8c4  str xzr,[sp, #0xab8]
71038ea8c8  csinc x8,x11,x8,ne
71038ea8cc  ldr x11,[x21, #0x20]
71038ea8d0  str x8,[sp, #0xa10]
71038ea8d4  ldp x8,x9,[x21]
71038ea8d8  str x8,[sp, #0xa40]
71038ea8dc  ldp x8,x10,[x21, #0x10]
71038ea8e0  str x8,[sp, #0xa50]
71038ea8e4  orr w8,wzr,#0x3
71038ea8e8  str x9,[sp, #0xa48]
71038ea8ec  adrp x9,0x7105292000
71038ea8f0  add x9,x9,#0xf90
71038ea8f4  str x10,[sp, #0xa58]
71038ea8f8  str x9,[sp, #0xb00]
71038ea8fc  str w8,[sp, #0xaf0]
71038ea900  add x8,x28,#0x6d0
71038ea904  str xzr,[sp, #0xab0]
71038ea908  str xzr,[sp, #0xaa8]
71038ea90c  str xzr,[sp, #0xaa0]
71038ea910  str xzr,[sp, #0xa98]
71038ea914  str xzr,[sp, #0xa90]
71038ea918  str xzr,[sp, #0xa88]
71038ea91c  str xzr,[sp, #0xa80]
71038ea920  str xzr,[sp, #0xa78]
71038ea924  str xzr,[sp, #0xa70]
71038ea928  str xzr,[sp, #0xa68]
71038ea92c  str x11,[sp, #0xa60]
71038ea930  str x27,[sp, #0xae0]
71038ea934  str xzr,[sp, #0xb48]
71038ea938  str xzr,[sp, #0xb40]
71038ea93c  str xzr,[sp, #0xb38]
71038ea940  str x8,[sp, #0xb20]
71038ea944  adrp x8,0x7106d43000
71038ea948  add x8,x8,#0x300
71038ea94c  str xzr,[sp, #0xb30]
71038ea950  ldarb w8,[x8]
71038ea954  tbz w8,#0x0,0x71038ec8f4
71038ea958  adrp x8,0x7106d43000
71038ea95c  add x8,x8,#0x248
71038ea960  ldrb w9,[x8]
71038ea964  ldr x10,[x8, #0x10]
71038ea968  tst w9,#0x1
71038ea96c  csinc x8,x10,x8,ne
71038ea970  str x8,[sp, #0xb30]
71038ea974  ldp x8,x9,[x21]
71038ea978  str x8,[sp, #0xb60]
71038ea97c  ldp x8,x10,[x21, #0x10]
71038ea980  ldr x11,[x21, #0x20]
71038ea984  add x0,x28,#0x7e0
71038ea988  mov w2,#0x110
71038ea98c  mov w1,wzr
71038ea990  str xzr,[sp, #0xb50]
71038ea994  str x20,[sp, #0xb58]
71038ea998  str xzr,[sp, #0xbf8]
71038ea99c  str xzr,[sp, #0xbf0]
71038ea9a0  str xzr,[sp, #0xbe8]
71038ea9a4  str xzr,[sp, #0xbe0]
71038ea9a8  str xzr,[sp, #0xbd8]
71038ea9ac  str xzr,[sp, #0xbd0]
71038ea9b0  str xzr,[sp, #0xbc8]
71038ea9b4  str xzr,[sp, #0xbc0]
71038ea9b8  str xzr,[sp, #0xbb8]
71038ea9bc  add x28,x28,#0x7f0
71038ea9c0  str xzr,[sp, #0xbb0]
71038ea9c4  str xzr,[sp, #0xba8]
71038ea9c8  str xzr,[sp, #0xba0]
71038ea9cc  str xzr,[sp, #0xb98]
71038ea9d0  str xzr,[sp, #0xb90]
71038ea9d4  str xzr,[sp, #0xb88]
71038ea9d8  str x11,[sp, #0xb80]
71038ea9dc  str x27,[sp, #0xc00]
71038ea9e0  str x10,[sp, #0xb78]
71038ea9e4  str x8,[sp, #0xb70]
71038ea9e8  str x9,[sp, #0xb68]
71038ea9ec  bl 0x71039c02a0
71038ea9f0  adrp x8,0x7105292000
71038ea9f4  add x8,x8,#0xfe8
71038ea9f8  str x8,[sp, #0xc20]
71038ea9fc  str x28,[sp, #0xc40]
71038eaa00  str x27,[sp, #0xd20]
71038eaa04  adrp x8,0x7106d43000
71038eaa08  add x8,x8,#0x2e0
71038eaa0c  str w27,[sp, #0xd30]
71038eaa10  str xzr,[sp, #0xd60]
71038eaa14  str xzr,[sp, #0xd88]
71038eaa18  str xzr,[sp, #0xd80]
71038eaa1c  str xzr,[sp, #0xd78]
71038eaa20  str xzr,[sp, #0xd70]
71038eaa24  ldarb w8,[x8]
71038eaa28  tbz w8,#0x0,0x71038ec954
71038eaa2c  ldrb w8,[x26]
71038eaa30  ldr x10,[x26, #0x10]
71038eaa34  mov w27,#0x1
71038eaa38  ldr x11,[x25, #0x20]
71038eaa3c  str xzr,[sp, #0xe38]
71038eaa40  str xzr,[sp, #0xe30]
71038eaa44  str xzr,[sp, #0xe28]
71038eaa48  str xzr,[sp, #0xe20]
71038eaa4c  tst w8,#0x1
71038eaa50  adrp x9,0x71042e5000
71038eaa54  add x9,x9,#0xd3d
71038eaa58  str x9,[sp, #0xd90]
71038eaa5c  str xzr,[sp, #0xe18]
71038eaa60  csinc x8,x10,x26,ne
71038eaa64  adrp x26,0x71038ee000
71038eaa68  add x26,x26,#0x5b0
71038eaa6c  str x8,[sp, #0xd70]
71038eaa70  str x26,[sp, #0xd98]
71038eaa74  ldp x8,x9,[x25]
71038eaa78  str x8,[sp, #0xda0]
71038eaa7c  ldp x8,x10,[x25, #0x10]
71038eaa80  str xzr,[sp, #0xe10]
71038eaa84  str xzr,[sp, #0xe08]
71038eaa88  str xzr,[sp, #0xe00]
71038eaa8c  str xzr,[sp, #0xdf8]
71038eaa90  str xzr,[sp, #0xdf0]
71038eaa94  str xzr,[sp, #0xde8]
71038eaa98  str xzr,[sp, #0xde0]
71038eaa9c  str xzr,[sp, #0xdd8]
71038eaaa0  str xzr,[sp, #0xdd0]
71038eaaa4  str xzr,[sp, #0xdc8]
71038eaaa8  str x11,[sp, #0xdc0]
71038eaaac  str x10,[sp, #0xdb8]
71038eaab0  str x8,[sp, #0xdb0]
71038eaab4  adrp x8,0x7106d43000
71038eaab8  add x8,x8,#0x2d8
71038eaabc  str x9,[sp, #0xda8]
71038eaac0  str x27,[sp, #0xe40]
71038eaac4  str w27,[sp, #0xe50]
71038eaac8  str xzr,[sp, #0xe80]
71038eaacc  str xzr,[sp, #0xea8]
71038eaad0  str xzr,[sp, #0xea0]
71038eaad4  str xzr,[sp, #0xe98]
71038eaad8  str xzr,[sp, #0xe90]
71038eaadc  ldarb w8,[x8]
71038eaae0  ldr x28,[sp, #0x88]
71038eaae4  tbz w8,#0x0,0x71038ec9b0
71038eaae8  ldrb w8,[x19]
71038eaaec  ldr x9,[x19, #0x10]
71038eaaf0  str xzr,[sp, #0xf58]
71038eaaf4  ldr x11,[x22, #0x20]
71038eaaf8  str xzr,[sp, #0xf50]
71038eaafc  str xzr,[sp, #0xf48]
71038eab00  str xzr,[sp, #0xf40]
71038eab04  tst w8,#0x1
71038eab08  csinc x8,x9,x19,ne
71038eab0c  str x8,[sp, #0xe90]
71038eab10  adrp x8,0x7104317000
71038eab14  add x8,x8,#0xae2
71038eab18  str x8,[sp, #0xeb0]
71038eab1c  adrp x8,0x71038ee000
71038eab20  add x8,x8,#0x7e0
71038eab24  str x8,[sp, #0xeb8]
71038eab28  ldp x8,x9,[x22]
71038eab2c  str x8,[sp, #0xec0]
71038eab30  ldp x8,x10,[x22, #0x10]
71038eab34  str xzr,[sp, #0xf38]
71038eab38  str xzr,[sp, #0xf30]
71038eab3c  str xzr,[sp, #0xf28]
71038eab40  str xzr,[sp, #0xf20]
71038eab44  str xzr,[sp, #0xf18]
71038eab48  str xzr,[sp, #0xf10]
71038eab4c  str xzr,[sp, #0xf08]
71038eab50  str xzr,[sp, #0xf00]
71038eab54  str xzr,[sp, #0xef8]
71038eab58  str xzr,[sp, #0xef0]
71038eab5c  str xzr,[sp, #0xee8]
71038eab60  str x11,[sp, #0xee0]
71038eab64  str x9,[sp, #0xec8]
71038eab68  str x27,[sp, #0xf60]
71038eab6c  str x10,[sp, #0xed8]
71038eab70  str x8,[sp, #0xed0]
71038eab74  adrp x8,0x7106d43000
71038eab78  add x8,x8,#0x2d0
71038eab7c  str w27,[sp, #0xf70]
71038eab80  str xzr,[sp, #0xfa0]
71038eab84  str xzr,[sp, #0xfc8]
71038eab88  str xzr,[sp, #0xfc0]
71038eab8c  str xzr,[sp, #0xfb8]
71038eab90  str xzr,[sp, #0xfb0]
71038eab94  ldarb w8,[x8]
71038eab98  tbz w8,#0x0,0x71038eca04
71038eab9c  ldrb w8,[x24]
71038eaba0  ldr x9,[x24, #0x10]
71038eaba4  str x26,[sp, #0xfd8]
71038eaba8  ldr x11,[x25, #0x20]
71038eabac  str xzr,[sp, #0x1078]
71038eabb0  str xzr,[sp, #0x1070]
71038eabb4  str xzr,[sp, #0x1068]
71038eabb8  tst w8,#0x1
71038eabbc  csinc x8,x9,x24,ne
71038eabc0  str x8,[sp, #0xfb0]
71038eabc4  adrp x8,0x71042a1000
71038eabc8  add x8,x8,#0xc4b
71038eabcc  str x8,[sp, #0xfd0]
71038eabd0  ldp x8,x9,[x25]
71038eabd4  str x8,[sp, #0xfe0]
71038eabd8  ldp x8,x10,[x25, #0x10]
71038eabdc  str x8,[sp, #0xff0]
71038eabe0  mov w8,#0x1
71038eabe4  str xzr,[sp, #0x1060]
71038eabe8  str xzr,[sp, #0x1058]
71038eabec  str xzr,[sp, #0x1050]
71038eabf0  str xzr,[sp, #0x1048]
71038eabf4  str xzr,[sp, #0x1040]
71038eabf8  str xzr,[sp, #0x1038]
71038eabfc  str xzr,[sp, #0x1030]
71038eac00  str xzr,[sp, #0x1028]
71038eac04  str xzr,[sp, #0x1020]
71038eac08  str xzr,[sp, #0x1018]
71038eac0c  str xzr,[sp, #0x1010]
71038eac10  str xzr,[sp, #0x1008]
71038eac14  str x11,[sp, #0x1000]
71038eac18  str x10,[sp, #0xff8]
71038eac1c  str x9,[sp, #0xfe8]
71038eac20  str x8,[sp, #0x1080]
71038eac24  str w8,[sp, #0x1090]
71038eac28  adrp x8,0x7106d43000
71038eac2c  add x8,x8,#0x2f8
71038eac30  str xzr,[sp, #0x10c0]
71038eac34  str xzr,[sp, #0x10e8]
71038eac38  str xzr,[sp, #0x10e0]
71038eac3c  str xzr,[sp, #0x10d8]
71038eac40  str xzr,[sp, #0x10d0]
71038eac44  ldarb w8,[x8]
71038eac48  ldp x22,x26,[sp, #0x90]
71038eac4c  tbz w8,#0x0,0x71038eca60
71038eac50  ldrb w8,[x23]
71038eac54  ldr x9,[x23, #0x10]
71038eac58  str xzr,[sp, #0x1198]
71038eac5c  str xzr,[sp, #0x1190]
71038eac60  str xzr,[sp, #0x1188]
71038eac64  tst w8,#0x1
71038eac68  adrp x8,0x7104453000
71038eac6c  add x8,x8,#0x57a
71038eac70  csinc x9,x9,x23,ne
71038eac74  str x8,[sp, #0x10f0]
71038eac78  adrp x8,0x71038ee000
71038eac7c  add x8,x8,#0x190
71038eac80  str x9,[sp, #0x10d0]
71038eac84  str x8,[sp, #0x10f8]
71038eac88  ldr x11,[x21, #0x20]
71038eac8c  ldp x8,x9,[x21]
71038eac90  str x8,[sp, #0x1100]
71038eac94  ldp x8,x10,[x21, #0x10]
71038eac98  str x8,[sp, #0x1110]
71038eac9c  mov w8,#0x1
71038eaca0  str x8,[sp, #0x11a0]
71038eaca4  ldr x8,[sp, #0x30]
71038eaca8  str xzr,[sp, #0x1180]
71038eacac  str xzr,[sp, #0x1178]
71038eacb0  str xzr,[sp, #0x1170]
71038eacb4  str xzr,[sp, #0x1168]
71038eacb8  str xzr,[sp, #0x1160]
71038eacbc  str xzr,[sp, #0x1158]
71038eacc0  str xzr,[sp, #0x1150]
71038eacc4  str xzr,[sp, #0x1148]
71038eacc8  str xzr,[sp, #0x1140]
71038eaccc  str xzr,[sp, #0x1138]
71038eacd0  str xzr,[sp, #0x1130]
71038eacd4  str xzr,[sp, #0x1128]
71038eacd8  str x11,[sp, #0x1120]
71038eacdc  str x10,[sp, #0x1118]
71038eace0  str x9,[sp, #0x1108]
71038eace4  cbz x8,0x71038ec394
71038eace8  add x9,x22,#0x18
71038eacec  str x9,[sp, #0x48]
71038eacf0  add x9,x28,#0x30
71038eacf4  add x13,sp,#0x1d0
71038eacf8  add x12,sp,#0x400
71038eacfc  orr x12,x12,#0x1
71038ead00  str x9,[sp, #0x10]
71038ead04  orr x9,x13,#0x1
71038ead08  str x9,[sp, #0xa8]
71038ead0c  add x9,sp,#0x120
71038ead10  str x12,[sp, #0xf8]
71038ead14  add x12,x13,#0x20
71038ead18  str x12,[sp, #0x40]
71038ead1c  add x12,x9,#0x80
71038ead20  str x12,[sp, #0x68]
71038ead24  add x12,x28,#0x40
71038ead28  orr x10,x9,#0x1
71038ead2c  str x10,[sp, #0x60]
71038ead30  str x12,[sp, #0x8]
71038ead34  add x12,x9,#0x50
71038ead38  add x9,x9,#0x10
71038ead3c  add x10,sp,#0x380
71038ead40  stp x12,x9,[sp, #0x70]
71038ead44  adrp x9,0x710455d000
71038ead48  add x9,x9,#0xba1
71038ead4c  orr x11,x10,#0x1
71038ead50  and x9,x9,#-0x2
71038ead54  str x11,[sp, #0x28]
71038ead58  add x11,sp,#0x418
71038ead5c  sub x9,x9,x13
71038ead60  orr x11,x11,#0x1
71038ead64  str x9,[sp, #0xb0]
71038ead68  add x9,x10,#0x10
71038ead6c  str x11,[sp, #0xb8]
71038ead70  add x11,sp,#0x430
71038ead74  str x9,[sp, #0x80]
71038ead78  add x9,x13,#0x28
71038ead7c  mov w8,wzr
71038ead80  add x20,x11,#0xd80
71038ead84  str x9,[sp, #0x20]
71038ead88  add x9,x11,#0x70
71038ead8c  str x9,[sp, #0x18]
71038ead90  str x20,[sp, #0xc8]
71038ead94  ldp x20,x25,[x28, #0x30]
71038ead98  str xzr,[sp, #0x428]
71038ead9c  str xzr,[sp, #0x420]
71038eada0  str xzr,[sp, #0x418]
71038eada4  mov w9,w8
71038eada8  ldr x8,[x26, #0x40]
71038eadac  add x8,x8,x9, LSL #0x5
71038eadb0  str x9,[sp, #0xe0]
71038eadb4  ldrb w9,[x8]
71038eadb8  ldr x10,[x8, #0x10]
71038eadbc  str xzr,[sp, #0x1d0]
71038eadc0  stp xzr,xzr,[sp, #0x1d8]
71038eadc4  tst w9,#0x1
71038eadc8  csinc x27,x10,x8,ne
71038eadcc  mov x0,x27
71038eadd0  bl 0x71039c0070
71038eadd4  cmn x0,#0x10
71038eadd8  b.cs 0x71038ecb30
71038eaddc  mov x23,x0
71038eade0  cmp x0,#0x17
71038eade4  b.cs 0x71038eadfc
71038eade8  ldr x19,[sp, #0xa8]
71038eadec  lsl w8,w23,#0x1
71038eadf0  strb w8,[sp, #0x1d0]
71038eadf4  cbnz x23,0x71038eae7c
71038eadf8  b 0x71038eae8c
71038eadfc  add x8,x23,#0x10
71038eae00  and x26,x8,#-0x10
71038eae04  add x0,sp,#0x380
71038eae08  mov w1,#0x10
71038eae0c  mov x2,x26
71038eae10  bl 0x710392e1f0
71038eae14  cmp w0,#0xc
71038eae18  b.ne 0x71038eae50
71038eae1c  adrp x8,0x710593d000
71038eae20  ldr x0,[x8, #0x2b0]
71038eae24  cbz x0,0x71038eae50
71038eae28  str x26,[sp, #0x120]
71038eae2c  ldr x8,[x0]
71038eae30  ldr x8,[x8, #0x30]
71038eae34  add x1,sp,#0x120
71038eae38  blr x8
71038eae3c  tbz w0,#0x0,0x71038eae50
71038eae40  add x0,sp,#0x380
71038eae44  mov w1,#0x10
71038eae48  mov x2,x26
71038eae4c  bl 0x710392e1f0
71038eae50  adrp x8,0x71052a8000
71038eae54  ldr x8,[x8, #0xa78]
71038eae58  cbz x8,0x71038eae6c
71038eae5c  ldr x2,[sp, #0x380]
71038eae60  mov w1,#0x10
71038eae64  mov x0,x26
71038eae68  bl 0x71039c19e0
71038eae6c  ldr x19,[sp, #0x380]
71038eae70  orr x8,x26,#0x1
71038eae74  str x8,[sp, #0x1d0]
71038eae78  stp x23,x19,[sp, #0x1d8]
71038eae7c  mov x0,x19
71038eae80  mov x1,x27
71038eae84  mov x2,x23
71038eae88  bl 0x71039c00e0
71038eae8c  strb wzr,[x19, x23, LSL ]
71038eae90  ldrb w8,[sp, #0x1d0]
71038eae94  ldp x10,x9,[sp, #0x1d8]
71038eae98  lsr x11,x8,#0x1
71038eae9c  tst w8,#0x1
71038eaea0  ldr x8,[sp, #0xa8]
71038eaea4  csel x19,x11,x10,eq
71038eaea8  csel x27,x8,x9,eq
71038eaeac  cbz x19,0x71038eaed0
71038eaeb0  mov x0,x27
71038eaeb4  mov w1,#0x2e
71038eaeb8  mov x2,x19
71038eaebc  bl 0x71039c0280
71038eaec0  sub x8,x0,x27
71038eaec4  cmp x0,#0x0
71038eaec8  csinv x21,x8,xzr,ne
71038eaecc  b 0x71038eaed4
71038eaed0  mov x21,#-0x1
71038eaed4  cmp x19,x21
71038eaed8  csel x23,x19,x21,cc
71038eaedc  str xzr,[sp, #0x120]
71038eaee0  stp xzr,xzr,[sp, #0x128]
71038eaee4  cmn x23,#0x10
71038eaee8  b.cs 0x71038ecb38
71038eaeec  cmp x23,#0x17
71038eaef0  b.cs 0x71038eaf08
71038eaef4  ldr x19,[sp, #0x60]
71038eaef8  lsl w8,w23,#0x1
71038eaefc  strb w8,[sp, #0x120]
71038eaf00  cbnz x23,0x71038eaf88
71038eaf04  b 0x71038eaf98
71038eaf08  add x8,x23,#0x10
71038eaf0c  and x26,x8,#-0x10
71038eaf10  sub x0,x29,#0x90
71038eaf14  mov w1,#0x10
71038eaf18  mov x2,x26
71038eaf1c  bl 0x710392e1f0
71038eaf20  cmp w0,#0xc
71038eaf24  b.ne 0x71038eaf5c
71038eaf28  adrp x8,0x710593d000
71038eaf2c  ldr x0,[x8, #0x2b0]
71038eaf30  cbz x0,0x71038eaf5c
71038eaf34  str x26,[sp, #0x380]
71038eaf38  ldr x8,[x0]
71038eaf3c  ldr x8,[x8, #0x30]
71038eaf40  add x1,sp,#0x380
71038eaf44  blr x8
71038eaf48  tbz w0,#0x0,0x71038eaf5c
71038eaf4c  sub x0,x29,#0x90
71038eaf50  mov w1,#0x10
71038eaf54  mov x2,x26
71038eaf58  bl 0x710392e1f0
71038eaf5c  adrp x8,0x71052a8000
71038eaf60  ldr x8,[x8, #0xa78]
71038eaf64  cbz x8,0x71038eaf78
71038eaf68  ldur x2,[x29, #-0x90]
71038eaf6c  mov w1,#0x10
71038eaf70  mov x0,x26
71038eaf74  bl 0x71039c19e0
71038eaf78  ldur x19,[x29, #-0x90]
71038eaf7c  orr x8,x26,#0x1
71038eaf80  str x8,[sp, #0x120]
71038eaf84  stp x23,x19,[sp, #0x128]
71038eaf88  mov x0,x19
71038eaf8c  mov x1,x27
71038eaf90  mov x2,x23
71038eaf94  bl 0x71039c00e0
71038eaf98  strb wzr,[x19, x23, LSL ]
71038eaf9c  ldrb w8,[sp, #0x1d0]
71038eafa0  ldr x9,[sp, #0x1d8]
71038eafa4  lsr x10,x8,#0x1
71038eafa8  tst w8,#0x1
71038eafac  add x21,x21,#0x1
71038eafb0  str xzr,[sp, #0x390]
71038eafb4  str xzr,[sp, #0x388]
71038eafb8  str xzr,[sp, #0x380]
71038eafbc  csel x9,x10,x9,eq
71038eafc0  subs x27,x9,x21
71038eafc4  b.cc 0x71038ecb20
71038eafc8  ldr x9,[sp, #0x1e0]
71038eafcc  tst w8,#0x1
71038eafd0  ldr x8,[sp, #0xa8]
71038eafd4  csel x26,x8,x9,eq
71038eafd8  cmn x27,#0x10
71038eafdc  b.cs 0x71038ecb28
71038eafe0  cmp x27,#0x17
71038eafe4  b.cs 0x71038eaffc
71038eafe8  ldr x19,[sp, #0x28]
71038eafec  lsl w8,w27,#0x1
71038eaff0  strb w8,[sp, #0x380]
71038eaff4  cbnz x27,0x71038eb080
71038eaff8  b 0x71038eb090
71038eaffc  add x8,x27,#0x10
71038eb000  and x23,x8,#-0x10
71038eb004  add x0,sp,#0x3e0
71038eb008  mov w1,#0x10
71038eb00c  mov x2,x23
71038eb010  bl 0x710392e1f0
71038eb014  cmp w0,#0xc
71038eb018  b.ne 0x71038eb050
71038eb01c  adrp x8,0x710593d000
71038eb020  ldr x0,[x8, #0x2b0]
71038eb024  cbz x0,0x71038eb050
71038eb028  stur x23,[x29, #-0x90]
71038eb02c  ldr x8,[x0]
71038eb030  ldr x8,[x8, #0x30]
71038eb034  sub x1,x29,#0x90
71038eb038  blr x8
71038eb03c  tbz w0,#0x0,0x71038eb050
71038eb040  add x0,sp,#0x3e0
71038eb044  mov w1,#0x10
71038eb048  mov x2,x23
71038eb04c  bl 0x710392e1f0
71038eb050  adrp x8,0x71052a8000
71038eb054  ldr x8,[x8, #0xa78]
71038eb058  cbz x8,0x71038eb06c
71038eb05c  ldr x2,[sp, #0x3e0]
71038eb060  mov w1,#0x10
71038eb064  mov x0,x23
71038eb068  bl 0x71039c19e0
71038eb06c  ldr x19,[sp, #0x3e0]
71038eb070  orr x8,x23,#0x1
71038eb074  str x8,[sp, #0x380]
71038eb078  str x19,[sp, #0x390]
71038eb07c  str x27,[sp, #0x388]
71038eb080  add x1,x26,x21
71038eb084  mov x0,x19
71038eb088  mov x2,x27
71038eb08c  bl 0x71039c00e0
71038eb090  strb wzr,[x19, x27, LSL ]
71038eb094  ldrb w8,[sp, #0x120]
71038eb098  ldr x9,[sp, #0x130]
71038eb09c  ldr x0,[x22, #0x20]
71038eb0a0  tst w8,#0x1
71038eb0a4  ldr x8,[sp, #0x60]
71038eb0a8  csel x1,x8,x9,eq
71038eb0ac  adrp x21,0x71052a8000
71038eb0b0  ldr x21,[x21, #0xa70]
71038eb0b4  bl 0x71038e1770
71038eb0b8  mov x26,x0
71038eb0bc  sub w8,w26,#0x3
71038eb0c0  cmp w8,#0x1
71038eb0c4  b.hi 0x71038eb164
71038eb0c8  ldrb w8,[sp, #0x380]
71038eb0cc  ldr x9,[sp, #0x390]
71038eb0d0  tst w8,#0x1
71038eb0d4  ldr x8,[sp, #0x28]
71038eb0d8  csel x19,x8,x9,eq
71038eb0dc  mov x0,x19
71038eb0e0  mov x27,x1
71038eb0e4  bl 0x71039c0070
71038eb0e8  ldrb w8,[sp, #0x418]
71038eb0ec  mov x23,x0
71038eb0f0  tbnz w8,#0x0,0x71038ec0f8
71038eb0f4  mov w1,#0x16
71038eb0f8  subs x2,x23,x1
71038eb0fc  b.hi 0x71038ec10c
71038eb100  ldr x9,[sp, #0x428]
71038eb104  tst w8,#0x1
71038eb108  ldr x8,[sp, #0xb8]
71038eb10c  csel x24,x8,x9,eq
71038eb110  cbz x23,0x71038eb124
71038eb114  mov x0,x24
71038eb118  mov x1,x19
71038eb11c  mov x2,x23
71038eb120  bl 0x71039c00a0
71038eb124  strb wzr,[x24, x23, LSL ]
71038eb128  ldrb w8,[sp, #0x418]
71038eb12c  tbnz w8,#0x0,0x71038ec198
71038eb130  lsl w8,w23,#0x1
71038eb134  strb w8,[sp, #0x418]
71038eb138  ldrb w8,[sp, #0x380]
71038eb13c  tbnz w8,#0x0,0x71038eb194
71038eb140  ldrb w8,[sp, #0x120]
71038eb144  tbz w8,#0x0,0x71038eb1b4
71038eb148  ldr x19,[sp, #0x130]
71038eb14c  cbz x21,0x71038eb158
71038eb150  mov x0,x19
71038eb154  bl 0x71039c19b0
71038eb158  mov x0,x19
71038eb15c  bl 0x710392eb40
71038eb160  b 0x71038eb1b4
71038eb164  ldrb w8,[sp, #0x1d0]
71038eb168  ldr x9,[sp, #0x1e0]
71038eb16c  tst w8,#0x1
71038eb170  ldr x8,[sp, #0xa8]
71038eb174  ldr x0,[x22, #0x20]
71038eb178  csel x1,x8,x9,eq
71038eb17c  bl 0x71038e1770
71038eb180  mov x26,x0
71038eb184  cbz w26,0x71038ec184
71038eb188  mov x27,x1
71038eb18c  ldrb w8,[sp, #0x380]
71038eb190  tbz w8,#0x0,0x71038eb140
71038eb194  ldr x19,[sp, #0x390]
71038eb198  cbz x21,0x71038eb1a4
71038eb19c  mov x0,x19
71038eb1a0  bl 0x71039c19b0
71038eb1a4  mov x0,x19
71038eb1a8  bl 0x710392eb40
71038eb1ac  ldrb w8,[sp, #0x120]
71038eb1b0  tbnz w8,#0x0,0x71038eb148
71038eb1b4  ldrb w8,[sp, #0x1d0]
71038eb1b8  str x26,[sp, #0xd0]
71038eb1bc  tbz w8,#0x0,0x71038eb1d8
71038eb1c0  ldr x19,[sp, #0x1e0]
71038eb1c4  cbz x21,0x71038eb1d0
71038eb1c8  mov x0,x19
71038eb1cc  bl 0x71039c19b0
71038eb1d0  mov x0,x19
71038eb1d4  bl 0x710392eb40
71038eb1d8  cbz x27,0x71038ec34c
71038eb1dc  sub x8,x25,x20
71038eb1e0  mov x9,#0x8ba3
71038eb1e4  movk x9,#0xba2e, LSL #16
71038eb1e8  asr x8,x8,#0x4
71038eb1ec  movk x9,#0xa2e8, LSL #32
71038eb1f0  movk x9,#0x2e8b, LSL #48
71038eb1f4  mul x8,x8,x9
71038eb1f8  str x8,[sp, #0x38]
71038eb1fc  adrp x25,0x71052a8000
71038eb200  ldr x19,[sp, #0x18]
71038eb204  ldr x25,[x25, #0xa70]
71038eb208  add x24,sp,#0x430
71038eb20c  ldp x20,x21,[sp, #0xc8]
71038eb210  str x27,[sp, #0xc0]
71038eb214  ldr w8,[x24]
71038eb218  cmp w8,#0x0
71038eb21c  ccmp w21,w8,#0x4,ne
71038eb220  b.ne 0x71038ec090
71038eb224  ldr x0,[x24, #0x30]
71038eb228  ldr x23,[x24, #0x60]
71038eb22c  str x24,[sp, #0x110]
71038eb230  str x19,[sp, #0x100]
71038eb234  cbz x0,0x71038eb258
71038eb238  str x23,[sp, #0x1d0]
71038eb23c  ldr x8,[x0]
71038eb240  ldr x9,[x8, #0x30]
71038eb244  add x8,sp,#0x400
71038eb248  add x1,sp,#0x418
71038eb24c  add x2,sp,#0x1d0
71038eb250  blr x9
71038eb254  b 0x71038eb330
71038eb258  mov x0,x23
71038eb25c  str xzr,[sp, #0x410]
71038eb260  str xzr,[sp, #0x408]
71038eb264  str xzr,[sp, #0x400]
71038eb268  bl 0x71039c0070
71038eb26c  cmn x0,#0x10
71038eb270  b.cs 0x71038ecae8
71038eb274  mov x26,x0
71038eb278  cmp x0,#0x17
71038eb27c  b.cs 0x71038eb294
71038eb280  ldr x24,[sp, #0xf8]
71038eb284  lsl w8,w26,#0x1
71038eb288  strb w8,[sp, #0x400]
71038eb28c  cbnz x26,0x71038eb318
71038eb290  b 0x71038eb328
71038eb294  add x8,x26,#0x10
71038eb298  and x19,x8,#-0x10
71038eb29c  add x0,sp,#0x120
71038eb2a0  mov w1,#0x10
71038eb2a4  mov x2,x19
71038eb2a8  bl 0x710392e1f0
71038eb2ac  cmp w0,#0xc
71038eb2b0  b.ne 0x71038eb2e8
71038eb2b4  adrp x8,0x710593d000
71038eb2b8  ldr x0,[x8, #0x2b0]
71038eb2bc  cbz x0,0x71038eb2e8
71038eb2c0  str x19,[sp, #0x1d0]
71038eb2c4  ldr x8,[x0]
71038eb2c8  ldr x8,[x8, #0x30]
71038eb2cc  add x1,sp,#0x1d0
71038eb2d0  blr x8
71038eb2d4  tbz w0,#0x0,0x71038eb2e8
71038eb2d8  add x0,sp,#0x120
71038eb2dc  mov w1,#0x10
71038eb2e0  mov x2,x19
71038eb2e4  bl 0x710392e1f0
71038eb2e8  adrp x8,0x71052a8000
71038eb2ec  ldr x8,[x8, #0xa78]
71038eb2f0  cbz x8,0x71038eb304
71038eb2f4  ldr x2,[sp, #0x120]
71038eb2f8  mov w1,#0x10
71038eb2fc  mov x0,x19
71038eb300  bl 0x71039c19e0
71038eb304  ldr x24,[sp, #0x120]
71038eb308  orr x8,x19,#0x1
71038eb30c  str x8,[sp, #0x400]
71038eb310  str x24,[sp, #0x410]
71038eb314  str x26,[sp, #0x408]
71038eb318  mov x0,x24
71038eb31c  mov x1,x23
71038eb320  mov x2,x26
71038eb324  bl 0x71039c00e0
71038eb328  strb wzr,[x24, x26, LSL ]
71038eb32c  ldr x24,[sp, #0x110]
71038eb330  ldr x8,[x22, #0x20]
71038eb334  ldrb w9,[sp, #0x400]
71038eb338  tst w9,#0x1
71038eb33c  ldr x10,[sp, #0x410]
71038eb340  ldr x9,[sp, #0xf8]
71038eb344  ldr w8,[x8, #0x10]
71038eb348  csel x19,x9,x10,eq
71038eb34c  asr w9,w8,#0x1f
71038eb350  cmp w9,w8
71038eb354  b.ne 0x71038eb384
71038eb358  ldrsw x8,[x27]
71038eb35c  sub x8,x27,x8
71038eb360  ldrh w9,[x8]
71038eb364  cmp w9,#0x7
71038eb368  b.cc 0x71038eb3f8
71038eb36c  ldrh w8,[x8, #0x6]
71038eb370  cbz x8,0x71038eb3f8
71038eb374  add x8,x27,x8
71038eb378  ldr w9,[x8]
71038eb37c  add x1,x8,x9
71038eb380  b 0x71038eb3fc
71038eb384  ldr x8,[sp, #0xb0]
71038eb388  str x8,[sp, #0x1d0]
71038eb38c  add x0,sp,#0x1d0
71038eb390  bl 0x7103828690
71038eb394  mov x1,x19
71038eb398  bl 0x71039c2720
71038eb39c  add x1,sp,#0x1d0
71038eb3a0  mov x0,x27
71038eb3a4  bl 0x710366f350
71038eb3a8  ldr x8,[sp, #0x1d0]
71038eb3ac  mov x19,x0
71038eb3b0  tbz w8,#0x0,0x71038eb3d8
71038eb3b4  ands x23,x8,#-0x2
71038eb3b8  b.eq 0x71038eb3d8
71038eb3bc  ldrb w8,[x23]
71038eb3c0  tbz w8,#0x0,0x71038eb3d0
71038eb3c4  ldr x0,[x23, #0x10]
71038eb3c8  cbz x0,0x71038eb3d0
71038eb3cc  bl 0x710392eb40
71038eb3d0  mov x0,x23
71038eb3d4  bl 0x710392eb40
71038eb3d8  ldr x8,[x27]
71038eb3dc  tbnz w8,#0x0,0x71038eb428
71038eb3e0  ldr x9,[x27, #0x8]
71038eb3e4  add x8,x27,x8
71038eb3e8  add x8,x8,x9, LSL #0x5
71038eb3ec  cmp x19,x8
71038eb3f0  b.ne 0x71038eb438
71038eb3f4  b 0x71038ec06c
71038eb3f8  mov x1,xzr
71038eb3fc  str x19,[sp, #0x1d0]
71038eb400  ldr w2,[x1], #0x4
71038eb404  add x0,sp,#0x1d0
71038eb408  mov w3,#0x4
71038eb40c  adrp x4,0x71038e1000
71038eb410  add x4,x4,#0xa80
71038eb414  bl 0x71039c2630
71038eb418  cbz x0,0x71038ec06c
71038eb41c  ldr w8,[x0]
71038eb420  add x8,x0,x8
71038eb424  b 0x71038eb440
71038eb428  sub x8,x8,#0x20
71038eb42c  orr x8,x8,#0x1
71038eb430  cmp x19,x8
71038eb434  b.eq 0x71038ec06c
71038eb438  and x8,x19,#-0x2
71038eb43c  add x8,x8,#0x8
71038eb440  ldr x0,[x24, #0x30]
71038eb444  str x8,[sp, #0xd8]
71038eb448  str xzr,[sp, #0x3f8]
71038eb44c  str xzr,[sp, #0x3f0]
71038eb450  str xzr,[sp, #0x3e8]
71038eb454  str xzr,[sp, #0x3e0]
71038eb458  str xzr,[sp, #0x3d8]
71038eb45c  str xzr,[sp, #0x3d0]
71038eb460  str xzr,[sp, #0x3c8]
71038eb464  str xzr,[sp, #0x3c0]
71038eb468  str xzr,[sp, #0x3b8]
71038eb46c  str xzr,[sp, #0x3b0]
71038eb470  str xzr,[sp, #0x3a8]
71038eb474  str xzr,[sp, #0x3a0]
71038eb478  str xzr,[sp, #0x398]
71038eb47c  str xzr,[sp, #0x390]
71038eb480  str xzr,[sp, #0x388]
71038eb484  str xzr,[sp, #0x380]
71038eb488  cbz x0,0x71038eb564
71038eb48c  ldr x8,[x24, #0x110]
71038eb490  add x26,x24,#0x110
71038eb494  str x26,[sp, #0x108]
71038eb498  cbz x8,0x71038eb58c
71038eb49c  ldr x8,[x24, #0x40]
71038eb4a0  ldr x23,[sp, #0x80]
71038eb4a4  mov x20,xzr
71038eb4a8  str x8,[sp, #0x120]
71038eb4ac  ldr x8,[x0]
71038eb4b0  ldr x9,[x8, #0x30]
71038eb4b4  add x8,sp,#0x1d0
71038eb4b8  add x1,sp,#0x418
71038eb4bc  add x2,sp,#0x120
71038eb4c0  blr x9
71038eb4c4  mov x21,x23
71038eb4c8  ldrb w8,[x21, #-0x10]!
71038eb4cc  tbnz w8,#0x0,0x71038eb4d8
71038eb4d0  sturh wzr,[x23, #-0x10]
71038eb4d4  b 0x71038eb508
71038eb4d8  ldr x8,[x23]
71038eb4dc  strb wzr,[x8]
71038eb4e0  ldurb w8,[x23, #-0x10]
71038eb4e4  stur xzr,[x23, #-0x8]
71038eb4e8  tbz w8,#0x0,0x71038eb508
71038eb4ec  ldr x19,[x23]
71038eb4f0  cbz x25,0x71038eb4fc
71038eb4f4  mov x0,x19
71038eb4f8  bl 0x71039c19b0
71038eb4fc  mov x0,x19
71038eb500  bl 0x710392eb40
71038eb504  stur xzr,[x23, #-0x10]
71038eb508  ldp x8,x9,[sp, #0x1d8]
71038eb50c  ldr x10,[sp, #0x1d0]
71038eb510  stp x8,x9,[x21, #0x8]
71038eb514  and x8,x10,#0xff
71038eb518  str x10,[x21]
71038eb51c  tbnz w8,#0x0,0x71038eb528
71038eb520  sub x8,x23,#0xf
71038eb524  b 0x71038eb52c
71038eb528  ldr x8,[x23]
71038eb52c  ldr x21,[x26]
71038eb530  add x9,sp,#0x3e0
71038eb534  str x8,[x9, x20, LSL #0x3]
71038eb538  add x8,x20,#0x1
71038eb53c  cmp x8,x21
71038eb540  b.cs 0x71038eb590
71038eb544  add x9,x24,x20, LSL #0x3
71038eb548  ldr x0,[x24, #0x30]
71038eb54c  ldr x9,[x9, #0x48]
71038eb550  add x23,x23,#0x18
71038eb554  mov x20,x8
71038eb558  str x9,[sp, #0x120]
71038eb55c  cbnz x0,0x71038eb4ac
71038eb560  b 0x71038ecac0
71038eb564  ldp x8,x9,[x24, #0x40]
71038eb568  ldr x21,[x24, #0x110]
71038eb56c  ldp x10,x11,[x24, #0x50]
71038eb570  str x8,[sp, #0x3e0]
71038eb574  add x8,x24,#0x110
71038eb578  str x11,[sp, #0x3f8]
71038eb57c  str x10,[sp, #0x3f0]
71038eb580  str x9,[sp, #0x3e8]
71038eb584  str x8,[sp, #0x108]
71038eb588  b 0x71038eb590
71038eb58c  mov x21,xzr
71038eb590  ldrb w8,[sp, #0x418]
71038eb594  ldr x9,[sp, #0x428]
71038eb598  tst w8,#0x1
71038eb59c  ldr x8,[sp, #0xb8]
71038eb5a0  csel x27,x8,x9,eq
71038eb5a4  ldr x8,[sp, #0xe8]
71038eb5a8  str xzr,[sp, #0x378]
71038eb5ac  str xzr,[sp, #0x370]
71038eb5b0  str xzr,[sp, #0x368]
71038eb5b4  str xzr,[sp, #0x360]
71038eb5b8  ldr x24,[x8, #0x20]
71038eb5bc  cbz x24,0x71038ebfd8
71038eb5c0  cbz x21,0x71038eb71c
71038eb5c4  ldr x8,[sp, #0xe8]
71038eb5c8  ldr x20,[x8, #0x18]
71038eb5cc  mov w28,wzr
71038eb5d0  str xzr,[sp, #0x118]
71038eb5d4  mov w8,#0x130
71038eb5d8  umaddl x25,w28,w8,x20
71038eb5dc  mov x19,x25
71038eb5e0  ldrb w8,[x19, #0x8]!
71038eb5e4  lsr x9,x8,#0x1
71038eb5e8  tst w8,#0x1
71038eb5ec  ldp x8,x10,[x25, #0x10]
71038eb5f0  csel x22,x9,x8,eq
71038eb5f4  add x8,x25,#0x9
71038eb5f8  csel x26,x8,x10,eq
71038eb5fc  cmn x22,#0x1
71038eb600  b.eq 0x71038eb630
71038eb604  cbnz x22,0x71038eb660
71038eb608  add x8,sp,#0x3e0
71038eb60c  ldr x8,[x8, x22, LSL #0x3]
71038eb610  cmp x8,#0x0
71038eb614  csel x8,x27,x8,eq
71038eb618  ldrb w8,[x8]
71038eb61c  cbz w8,0x71038eb6ac
71038eb620  add x22,x22,#0x1
71038eb624  cmp x22,x21
71038eb628  b.cc 0x71038eb608
71038eb62c  b 0x71038eb6c0
71038eb630  mov x22,xzr
71038eb634  add x8,sp,#0x3e0
71038eb638  ldr x8,[x8, x22, LSL #0x3]
71038eb63c  cmp x8,#0x0
71038eb640  csel x0,x27,x8,eq
71038eb644  bl 0x71039c0070
71038eb648  cmn x0,#0x1
71038eb64c  b.eq 0x71038ec5f8
71038eb650  add x22,x22,#0x1
71038eb654  cmp x22,x21
71038eb658  b.cc 0x71038eb634
71038eb65c  b 0x71038eb6c0
71038eb660  mov x23,xzr
71038eb664  add x8,sp,#0x3e0
71038eb668  ldr x8,[x8, x23, LSL #0x3]
71038eb66c  cmp x8,#0x0
71038eb670  csel x19,x27,x8,eq
71038eb674  mov x0,x19
71038eb678  bl 0x71039c0070
71038eb67c  cmp x0,x22
71038eb680  b.ne 0x71038eb698
71038eb684  mov x0,x26
71038eb688  mov x1,x19
71038eb68c  mov x2,x22
71038eb690  bl 0x71039c0250
71038eb694  cbz w0,0x71038eb6a8
71038eb698  add x23,x23,#0x1
71038eb69c  cmp x23,x21
71038eb6a0  b.cc 0x71038eb664
71038eb6a4  b 0x71038eb6c0
71038eb6a8  mov x22,x23
71038eb6ac  add x8,sp,#0x360
71038eb6b0  str x25,[x8, x22, LSL #0x3]
71038eb6b4  ldr x8,[sp, #0x118]
71038eb6b8  add x8,x8,#0x1
71038eb6bc  str x8,[sp, #0x118]
71038eb6c0  add w28,w28,#0x1
71038eb6c4  cmp x24,x28
71038eb6c8  b.hi 0x71038eb5d4
71038eb6cc  ldp x28,x22,[sp, #0x88]
71038eb6d0  ldr x8,[sp, #0x118]
71038eb6d4  cbz x8,0x71038ebfd8
71038eb6d8  ldr x0,[sp, #0x40]
71038eb6dc  mov w1,wzr
71038eb6e0  mov w2,#0x160
71038eb6e4  bl 0x71039c02a0
71038eb6e8  ldp x8,x27,[sp, #0x48]
71038eb6ec  str x8,[sp, #0x350]
71038eb6f0  ldr x8,[sp, #0x108]
71038eb6f4  ldr x9,[sp, #0xd8]
71038eb6f8  str x9,[sp, #0x358]
71038eb6fc  ldr x9,[sp, #0x110]
71038eb700  ldr x8,[x8]
71038eb704  ldr x25,[sp, #0x98]
71038eb708  cbz x8,0x71038eb994
71038eb70c  ldr x23,[sp, #0x100]
71038eb710  ldr x26,[sp, #0x20]
71038eb714  mov x19,xzr
71038eb718  b 0x71038eb7bc
71038eb71c  mov w8,#0x1
71038eb720  cmp x24,w8, UXTW 
71038eb724  add w8,w8,#0x1
71038eb728  b.hi 0x71038eb720
71038eb72c  b 0x71038ebfd8
71038eb730  adrp x8,0x71038d5000
71038eb734  add x8,x8,#0xbc0
71038eb738  str x8,[sp, #0x120]
71038eb73c  b 0x71038eb90c
71038eb740  adrp x8,0x71038d4000
71038eb744  add x8,x8,#0x880
71038eb748  str x8,[sp, #0x120]
71038eb74c  b 0x71038eb90c
71038eb750  adrp x8,0x71038d5000
71038eb754  add x8,x8,#0x220
71038eb758  str x8,[sp, #0x120]
71038eb75c  b 0x71038eb90c
71038eb760  mov x8,xzr
71038eb764  b 0x71038eb90c
71038eb768  adrp x8,0x71038d3000
71038eb76c  add x8,x8,#0xee0
71038eb770  str x8,[sp, #0x120]
71038eb774  b 0x71038eb90c
71038eb778  adrp x8,0x71038d6000
71038eb77c  add x8,x8,#0x560
71038eb780  str x8,[sp, #0x120]
71038eb784  b 0x71038eb90c
71038eb788  adrp x8,0x71038d6000
71038eb78c  add x8,x8,#0xf00
71038eb790  str x8,[sp, #0x120]
71038eb794  b 0x71038eb90c
71038eb798  mov w11,#0x130
71038eb79c  mul x9,x9,x11
71038eb7a0  ldr w8,[x8, #0x10]
71038eb7a4  ldr w9,[x10, x9, LSL #0x0]
71038eb7a8  ldr x10,[sp, #0xe0]
71038eb7ac  madd x8,x8,x10,x9
71038eb7b0  ldr x9,[sp, #0x58]
71038eb7b4  add x8,x9,x8
71038eb7b8  b 0x71038eb880
71038eb7bc  add x8,sp,#0x360
71038eb7c0  ldr x20,[x8, x19, LSL #0x3]
71038eb7c4  cbz x20,0x71038eb8f4
71038eb7c8  cbz x27,0x71038eb87c
71038eb7cc  ldr x8,[x27]
71038eb7d0  ldr x9,[sp, #0xf0]
71038eb7d4  cmp x8,x9
71038eb7d8  b.ne 0x71038eb87c
71038eb7dc  ldr x8,[x25, #0x48]
71038eb7e0  ldr x9,[sp, #0xe0]
71038eb7e4  cmp x8,x9
71038eb7e8  b.ls 0x71038eb87c
71038eb7ec  ldr x8,[sp, #0xe8]
71038eb7f0  ldr x8,[x8, #0x18]
71038eb7f4  sub x8,x20,x8
71038eb7f8  mov x9,#0xca1b
71038eb7fc  movk x9,#0x286b, LSL #16
71038eb800  movk x9,#0xa1af, LSL #32
71038eb804  movk x9,#0x86bc, LSL #48
71038eb808  add x0,sp,#0x120
71038eb80c  asr x8,x8,#0x4
71038eb810  mul x21,x8,x9
71038eb814  ldr w8,[x25, #0x10]
71038eb818  ldr x2,[sp, #0xa0]
71038eb81c  eor w1,w8,w8, ASR #0x1f
71038eb820  bl 0x71038cf200
71038eb824  ldr x8,[sp, #0x130]
71038eb828  cbz x8,0x71038eb840
71038eb82c  ldr x8,[x8]
71038eb830  ldr x9,[sp, #0x138]
71038eb834  cmp x8,x9
71038eb838  ldr x10,[sp, #0x128]
71038eb83c  csel x8,x10,xzr,eq
71038eb840  ldr x10,[x8, #0x20]
71038eb844  and x9,x21,#0xffffffff
71038eb848  cmp x10,x9
71038eb84c  b.ls 0x71038eb87c
71038eb850  ldr x10,[x8, #0x18]
71038eb854  ldrb w11,[x25, #0x999]
71038eb858  cbz w11,0x71038eb798
71038eb85c  ldr x8,[x25, #0x858]
71038eb860  mov w11,#0x130
71038eb864  ldr w8,[x8, x9, LSL #0x2]
71038eb868  madd x9,x9,x11,x10
71038eb86c  ldr x10,[sp, #0xe0]
71038eb870  ldr w9,[x9, #0x34]
71038eb874  madd w8,w9,w10,w8
71038eb878  b 0x71038eb7b0
71038eb87c  mov x8,xzr
71038eb880  add x9,sp,#0x1d0
71038eb884  str x8,[x9, x19, LSL #0x3]
71038eb888  mov x21,x20
71038eb88c  ldr w8,[x21, #0x30]!
71038eb890  ldr w9,[x23, #0x4]
71038eb894  cmp w9,#0x0
71038eb898  csel x24,x21,x23,eq
71038eb89c  ldr w9,[x24]
71038eb8a0  cmp w8,w9
71038eb8a4  adrp x8,0x71038d3000
71038eb8a8  add x8,x8,#0x110
71038eb8ac  b.eq 0x71038eb90c
71038eb8b0  str xzr,[sp, #0x120]
71038eb8b4  ldr w1,[x24, #0xc]
71038eb8b8  ldr w0,[x20, #0x3c]
71038eb8bc  cmp w1,w0
71038eb8c0  b.ne 0x71038eb900
71038eb8c4  cmp w1,#0x6
71038eb8c8  b.hi 0x71038eb760
71038eb8cc  mov w8,w1
71038eb8d0  adrp x9,0x7104535000
71038eb8d4  add x9,x9,#0xcc8
71038eb8d8  ldrsw x8,[x9, x8, LSL #0x2]
71038eb8dc  add x8,x8,x9
71038eb8e0  br x8
71038eb8e4  adrp x8,0x71038d3000
71038eb8e8  add x8,x8,#0x470
71038eb8ec  str x8,[sp, #0x120]
71038eb8f0  b 0x71038eb90c
71038eb8f4  add x8,sp,#0x1d0
71038eb8f8  str xzr,[x8, x19, LSL #0x3]
71038eb8fc  b 0x71038eb978
71038eb900  add x2,sp,#0x120
71038eb904  bl 0x71038d3120
71038eb908  ldr x8,[sp, #0x120]
71038eb90c  ldr x9,[x24]
71038eb910  str x9,[sp, #0x120]
71038eb914  ldp x9,x10,[x24, #0x8]
71038eb918  ldp x11,x12,[x24, #0x18]
71038eb91c  stp x11,x12,[sp, #0x138]
71038eb920  stp x9,x10,[sp, #0x128]
71038eb924  ldr x9,[x21]
71038eb928  stur x9,[x29, #-0x90]
71038eb92c  mov x9,x10
71038eb930  mov x10,x11
71038eb934  ldp x11,x12,[x21, #0x8]
71038eb938  ldp x13,x14,[x21, #0x18]
71038eb93c  stur x8,[x26, #-0x8]
71038eb940  stp x9,x10,[x26, #0x10]
71038eb944  ldp x9,x10,[sp, #0x120]
71038eb948  stp x9,x10,[x26]
71038eb94c  ldr x9,[sp, #0x140]
71038eb950  ldur x10,[x29, #-0x90]
71038eb954  stp x13,x14,[x29, #-0x78]
71038eb958  stp x11,x12,[x29, #-0x88]
71038eb95c  stp x9,x10,[x26, #0x20]
71038eb960  ldur x9,[x29, #-0x88]
71038eb964  ldp x10,x11,[x29, #-0x78]
71038eb968  stp x10,x11,[x26, #0x40]
71038eb96c  ldur x10,[x29, #-0x80]
71038eb970  stp x9,x10,[x26, #0x30]
71038eb974  ldr x9,[sp, #0x110]
71038eb978  ldr x8,[sp, #0x108]
71038eb97c  ldr x8,[x8]
71038eb980  add x19,x19,#0x1
71038eb984  add x26,x26,#0x58
71038eb988  add x23,x23,#0x28
71038eb98c  cmp x19,x8
71038eb990  b.cc 0x71038eb7bc
71038eb994  ldr x9,[x9, #0x68]
71038eb998  cbnz x9,0x71038eba3c
71038eb99c  ldr x8,[sp, #0x360]
71038eb9a0  adrp x9,0x7106d43000
71038eb9a4  ldr w9,[x9, #0x324]
71038eb9a8  ldr w8,[x8, #0x30]
71038eb9ac  cmp w9,w8
71038eb9b0  adrp x9,0x71038ee000
71038eb9b4  add x9,x9,#0x380
71038eb9b8  b.eq 0x71038eba3c
71038eb9bc  adrp x9,0x7106d43000
71038eb9c0  ldr w9,[x9, #0x34c]
71038eb9c4  cmp w9,w8
71038eb9c8  adrp x9,0x71038ee000
71038eb9cc  add x9,x9,#0xc00
71038eb9d0  b.eq 0x71038eba3c
71038eb9d4  adrp x9,0x7106d43000
71038eb9d8  ldr w9,[x9, #0x374]
71038eb9dc  cmp w9,w8
71038eb9e0  adrp x9,0x71038ee000
71038eb9e4  add x9,x9,#0x5b0
71038eb9e8  b.eq 0x71038eba3c
71038eb9ec  adrp x9,0x7106d43000
71038eb9f0  ldr w9,[x9, #0x39c]
71038eb9f4  cmp w9,w8
71038eb9f8  adrp x9,0x71038ee000
71038eb9fc  add x9,x9,#0xe30
71038eba00  b.eq 0x71038eba3c
71038eba04  adrp x9,0x7106d43000
71038eba08  ldr w9,[x9, #0x3c4]
71038eba0c  cmp w9,w8
71038eba10  adrp x9,0x71038ef000
71038eba14  add x9,x9,#0x60
71038eba18  b.eq 0x71038eba3c
71038eba1c  adrp x9,0x7106d43000
71038eba20  ldr w9,[x9, #0x3ec]
71038eba24  cmp w9,w8
71038eba28  adrp x8,0x71038ee000
71038eba2c  add x8,x8,#0x380
71038eba30  adrp x9,0x71038ee000
71038eba34  add x9,x9,#0xa10
71038eba38  csel x9,x9,x8,eq
71038eba3c  add x8,sp,#0x120
71038eba40  add x0,sp,#0x1d0
71038eba44  blr x9
71038eba48  mov x12,#0x8ba3
71038eba4c  movk x12,#0xba2e, LSL #16
71038eba50  movk x12,#0xa2e8, LSL #32
71038eba54  movk x12,#0x2e8b, LSL #48
71038eba58  mov w21,#0xb0
71038eba5c  ldr x8,[x22, #0x20]
71038eba60  ldr w8,[x8, #0x10]
71038eba64  asr w9,w8,#0x1f
71038eba68  cmp w9,w8
71038eba6c  b.ne 0x71038ebae0
71038eba70  ldr x9,[sp, #0xd8]
71038eba74  ldrsw x8,[x9]
71038eba78  sub x8,x9,x8
71038eba7c  ldrh w9,[x8]
71038eba80  cmp w9,#0x9
71038eba84  b.cc 0x71038ebaa0
71038eba88  ldrh w8,[x8, #0x8]
71038eba8c  cbz x8,0x71038ebaa0
71038eba90  ldr x9,[sp, #0xd8]
71038eba94  ldrb w8,[x9, x8, LSL ]
71038eba98  cmp w8,#0x2
71038eba9c  b.eq 0x71038ebaf0
71038ebaa0  ldp x23,x8,[x28, #0x38]
71038ebaa4  cmp x23,x8
71038ebaa8  b.cs 0x71038ebb14
71038ebaac  ldr w8,[sp, #0x120]
71038ebab0  mov x1,x23
71038ebab4  str w8,[x1], #0x10
71038ebab8  ldr x0,[sp, #0x150]
71038ebabc  cbz x0,0x71038ebc58
71038ebac0  ldr x8,[sp, #0x78]
71038ebac4  cmp x8,x0
71038ebac8  b.eq 0x71038ebc6c
71038ebacc  ldr x8,[x0]
71038ebad0  ldr x8,[x8, #0x10]
71038ebad4  blr x8
71038ebad8  str x0,[x23, #0x30]
71038ebadc  b 0x71038ebc80
71038ebae0  ldr x8,[sp, #0xd8]
71038ebae4  ldrsb w8,[x8, #0x1]
71038ebae8  cmp w8,#0x2
71038ebaec  b.ne 0x71038ebaa0
71038ebaf0  ldr x0,[sp, #0x1c0]
71038ebaf4  stur wzr,[x29, #-0x90]
71038ebaf8  cbz x0,0x71038ecaf0
71038ebafc  ldr x8,[x0]
71038ebb00  ldr x8,[x8, #0x30]
71038ebb04  add x1,sp,#0x120
71038ebb08  sub x2,x29,#0x90
71038ebb0c  blr x8
71038ebb10  b 0x71038ebf54
71038ebb14  ldr x9,[sp, #0x10]
71038ebb18  ldr x10,[x9]
71038ebb1c  sub x9,x23,x10
71038ebb20  asr x9,x9,#0x4
71038ebb24  mul x23,x9,x12
71038ebb28  mov x11,#0x745d
71038ebb2c  movk x11,#0x45d1, LSL #16
71038ebb30  movk x11,#0x5d17, LSL #32
71038ebb34  movk x11,#0x174, LSL #48
71038ebb38  add x9,x23,#0x1
71038ebb3c  cmp x9,x11
71038ebb40  b.hi 0x71038ecb18
71038ebb44  sub x8,x8,x10
71038ebb48  mov x10,#0xba2e
71038ebb4c  movk x10,#0xa2e8, LSL #16
71038ebb50  asr x8,x8,#0x4
71038ebb54  mul x8,x8,x12
71038ebb58  movk x10,#0x2e8b, LSL #32
71038ebb5c  movk x10,#0xba, LSL #48
71038ebb60  cmp x8,x10
71038ebb64  b.cs 0x71038ebb88
71038ebb68  lsl x8,x8,#0x1
71038ebb6c  cmp x8,x9
71038ebb70  csel x20,x9,x8,cc
71038ebb74  ldr x8,[sp, #0x8]
71038ebb78  stp xzr,x8,[x29, #-0x78]
71038ebb7c  cbnz x20,0x71038ebba0
71038ebb80  mov x24,xzr
71038ebb84  b 0x71038ebc10
71038ebb88  ldr x8,[sp, #0x8]
71038ebb8c  mov x20,#0x745d
71038ebb90  movk x20,#0x45d1, LSL #16
71038ebb94  movk x20,#0x5d17, LSL #32
71038ebb98  movk x20,#0x174, LSL #48
71038ebb9c  stp xzr,x8,[x29, #-0x78]
71038ebba0  mul x19,x20,x21
71038ebba4  sub x0,x29,#0x68
71038ebba8  mov w1,#0x10
71038ebbac  mov x2,x19
71038ebbb0  bl 0x710392e1f0
71038ebbb4  cmp w0,#0xc
71038ebbb8  b.ne 0x71038ebbf0
71038ebbbc  adrp x8,0x710593d000
71038ebbc0  ldr x0,[x8, #0x2b0]
71038ebbc4  cbz x0,0x71038ebbf0
71038ebbc8  stur x19,[x29, #-0x60]
71038ebbcc  ldr x8,[x0]
71038ebbd0  ldr x8,[x8, #0x30]
71038ebbd4  sub x1,x29,#0x60
71038ebbd8  blr x8
71038ebbdc  tbz w0,#0x0,0x71038ebbf0
71038ebbe0  sub x0,x29,#0x68
71038ebbe4  mov w1,#0x10
71038ebbe8  mov x2,x19
71038ebbec  bl 0x710392e1f0
71038ebbf0  adrp x8,0x71052a8000
71038ebbf4  ldr x8,[x8, #0xa78]
71038ebbf8  cbz x8,0x71038ebc0c
71038ebbfc  ldur x2,[x29, #-0x68]
71038ebc00  mov w1,#0x10
71038ebc04  mov x0,x19
71038ebc08  bl 0x71039c19e0
71038ebc0c  ldur x24,[x29, #-0x68]
71038ebc10  madd x19,x23,x21,x24
71038ebc14  madd x26,x20,x21,x24
71038ebc18  ldr w8,[sp, #0x120]
71038ebc1c  mov x1,x19
71038ebc20  stp x24,x19,[x29, #-0x90]
71038ebc24  stp x19,x26,[x29, #-0x80]
71038ebc28  str w8,[x1], #0x10
71038ebc2c  ldr x0,[sp, #0x150]
71038ebc30  cbz x0,0x71038ebc60
71038ebc34  ldr x8,[sp, #0x78]
71038ebc38  cmp x8,x0
71038ebc3c  b.eq 0x71038ebd0c
71038ebc40  ldr x8,[x0]
71038ebc44  ldr x8,[x8, #0x10]
71038ebc48  blr x8
71038ebc4c  madd x8,x23,x21,x24
71038ebc50  str x0,[x8, #0x30]
71038ebc54  b 0x71038ebd24
71038ebc58  str xzr,[x23, #0x30]
71038ebc5c  b 0x71038ebc80
71038ebc60  madd x8,x23,x21,x24
71038ebc64  str xzr,[x8, #0x30]
71038ebc68  b 0x71038ebd24
71038ebc6c  str x1,[x23, #0x30]
71038ebc70  ldr x0,[sp, #0x150]
71038ebc74  ldr x8,[x0]
71038ebc78  ldr x8,[x8, #0x18]
71038ebc7c  blr x8
71038ebc80  ldr w8,[sp, #0x160]
71038ebc84  str w8,[x23, #0x40]
71038ebc88  ldr x0,[sp, #0x190]
71038ebc8c  cbz x0,0x71038ebcbc
71038ebc90  ldr x8,[sp, #0x70]
71038ebc94  cmp x8,x0
71038ebc98  b.eq 0x71038ebccc
71038ebc9c  ldr x8,[x0]
71038ebca0  ldr x8,[x8, #0x10]
71038ebca4  blr x8
71038ebca8  str x0,[x23, #0x70]
71038ebcac  ldr x0,[sp, #0x1c0]
71038ebcb0  cbnz x0,0x71038ebcec
71038ebcb4  str xzr,[x23, #0xa0]
71038ebcb8  b 0x71038ebd98
71038ebcbc  str xzr,[x23, #0x70]
71038ebcc0  ldr x0,[sp, #0x1c0]
71038ebcc4  cbnz x0,0x71038ebcec
71038ebcc8  b 0x71038ebcb4
71038ebccc  add x1,x23,#0x50
71038ebcd0  str x1,[x23, #0x70]
71038ebcd4  ldr x0,[sp, #0x190]
71038ebcd8  ldr x8,[x0]
71038ebcdc  ldr x8,[x8, #0x18]
71038ebce0  blr x8
71038ebce4  ldr x0,[sp, #0x1c0]
71038ebce8  cbz x0,0x71038ebcb4
71038ebcec  ldr x8,[sp, #0x68]
71038ebcf0  cmp x8,x0
71038ebcf4  b.eq 0x71038ebd80
71038ebcf8  ldr x8,[x0]
71038ebcfc  ldr x8,[x8, #0x10]
71038ebd00  blr x8
71038ebd04  str x0,[x23, #0xa0]
71038ebd08  b 0x71038ebd98
71038ebd0c  madd x8,x23,x21,x24
71038ebd10  str x1,[x8, #0x30]
71038ebd14  ldr x0,[sp, #0x150]
71038ebd18  ldr x8,[x0]
71038ebd1c  ldr x8,[x8, #0x18]
71038ebd20  blr x8
71038ebd24  madd x8,x23,x21,x24
71038ebd28  ldr w9,[sp, #0x160]
71038ebd2c  str w9,[x8, #0x40]
71038ebd30  ldr x0,[sp, #0x190]
71038ebd34  cbz x0,0x71038ebd6c
71038ebd38  ldr x9,[sp, #0x70]
71038ebd3c  cmp x9,x0
71038ebd40  b.eq 0x71038ebda8
71038ebd44  ldr x8,[x0]
71038ebd48  ldr x8,[x8, #0x10]
71038ebd4c  blr x8
71038ebd50  madd x8,x23,x21,x24
71038ebd54  str x0,[x8, #0x70]
71038ebd58  ldr x0,[sp, #0x1c0]
71038ebd5c  cbnz x0,0x71038ebdcc
71038ebd60  madd x8,x23,x21,x24
71038ebd64  str xzr,[x8, #0xa0]
71038ebd68  b 0x71038ebe10
71038ebd6c  madd x8,x23,x21,x24
71038ebd70  str xzr,[x8, #0x70]
71038ebd74  ldr x0,[sp, #0x1c0]
71038ebd78  cbnz x0,0x71038ebdcc
71038ebd7c  b 0x71038ebd60
71038ebd80  add x1,x23,#0x80
71038ebd84  str x1,[x23, #0xa0]
71038ebd88  ldr x0,[sp, #0x1c0]
71038ebd8c  ldr x8,[x0]
71038ebd90  ldr x8,[x8, #0x18]
71038ebd94  blr x8
71038ebd98  ldr x8,[x28, #0x38]
71038ebd9c  add x8,x8,#0xb0
71038ebda0  str x8,[x28, #0x38]
71038ebda4  b 0x71038ebf54
71038ebda8  add x1,x8,#0x50
71038ebdac  madd x8,x23,x21,x24
71038ebdb0  str x1,[x8, #0x70]
71038ebdb4  ldr x0,[sp, #0x190]
71038ebdb8  ldr x8,[x0]
71038ebdbc  ldr x8,[x8, #0x18]
71038ebdc0  blr x8
71038ebdc4  ldr x0,[sp, #0x1c0]
71038ebdc8  cbz x0,0x71038ebd60
71038ebdcc  ldr x8,[sp, #0x68]
71038ebdd0  cmp x8,x0
71038ebdd4  b.eq 0x71038ebdf0
71038ebdd8  ldr x8,[x0]
71038ebddc  ldr x8,[x8, #0x10]
71038ebde0  blr x8
71038ebde4  madd x8,x23,x21,x24
71038ebde8  str x0,[x8, #0xa0]
71038ebdec  b 0x71038ebe10
71038ebdf0  madd x8,x23,x21,x24
71038ebdf4  add x1,x8,#0x80
71038ebdf8  madd x8,x23,x21,x24
71038ebdfc  str x1,[x8, #0xa0]
71038ebe00  ldr x0,[sp, #0x1c0]
71038ebe04  ldr x8,[x0]
71038ebe08  ldr x8,[x8, #0x18]
71038ebe0c  blr x8
71038ebe10  add x8,x19,#0xb0
71038ebe14  stur x8,[x29, #-0x80]
71038ebe18  ldp x21,x23,[x28, #0x30]
71038ebe1c  cmp x23,x21
71038ebe20  b.eq 0x71038ebf28
71038ebe24  mov x20,x23
71038ebe28  ldr w8,[x20, #-0xb0]!
71038ebe2c  stur w8,[x19, #-0xb0]
71038ebe30  ldr x8,[x20, #0x30]
71038ebe34  cbz x8,0x71038ebe50
71038ebe38  sub x9,x23,#0xa0
71038ebe3c  cmp x9,x8
71038ebe40  b.eq 0x71038ebe58
71038ebe44  stur x8,[x19, #-0x80]
71038ebe48  stur xzr,[x23, #-0x80]
71038ebe4c  b 0x71038ebe70
71038ebe50  stur xzr,[x19, #-0x80]
71038ebe54  b 0x71038ebe70
71038ebe58  sub x1,x19,#0xa0
71038ebe5c  stur x1,[x19, #-0x80]
71038ebe60  ldur x0,[x23, #-0x80]
71038ebe64  ldr x8,[x0]
71038ebe68  ldr x8,[x8, #0x18]
71038ebe6c  blr x8
71038ebe70  ldur w8,[x23, #-0x70]
71038ebe74  stur w8,[x19, #-0x70]
71038ebe78  ldur x8,[x23, #-0x40]
71038ebe7c  cbz x8,0x71038ebea4
71038ebe80  sub x9,x23,#0x60
71038ebe84  cmp x9,x8
71038ebe88  b.eq 0x71038ebeb4
71038ebe8c  stur x8,[x19, #-0x40]
71038ebe90  stur xzr,[x23, #-0x40]
71038ebe94  ldur x8,[x23, #-0x10]
71038ebe98  cbnz x8,0x71038ebed4
71038ebe9c  stur xzr,[x19, #-0x10]
71038ebea0  b 0x71038ebf04
71038ebea4  stur xzr,[x19, #-0x40]
71038ebea8  ldur x8,[x23, #-0x10]
71038ebeac  cbnz x8,0x71038ebed4
71038ebeb0  b 0x71038ebe9c
71038ebeb4  sub x1,x19,#0x60
71038ebeb8  stur x1,[x19, #-0x40]
71038ebebc  ldur x0,[x23, #-0x40]
71038ebec0  ldr x8,[x0]
71038ebec4  ldr x8,[x8, #0x18]
71038ebec8  blr x8
71038ebecc  ldur x8,[x23, #-0x10]
71038ebed0  cbz x8,0x71038ebe9c
71038ebed4  sub x9,x23,#0x30
71038ebed8  cmp x9,x8
71038ebedc  b.eq 0x71038ebeec
71038ebee0  stur x8,[x19, #-0x10]
71038ebee4  stur xzr,[x23, #-0x10]
71038ebee8  b 0x71038ebf04
71038ebeec  sub x1,x19,#0x30
71038ebef0  stur x1,[x19, #-0x10]
71038ebef4  ldur x0,[x23, #-0x10]
71038ebef8  ldr x8,[x0]
71038ebefc  ldr x8,[x8, #0x18]
71038ebf00  blr x8
71038ebf04  ldur x8,[x29, #-0x88]
71038ebf08  sub x19,x8,#0xb0
71038ebf0c  cmp x21,x20
71038ebf10  mov x23,x20
71038ebf14  stur x19,[x29, #-0x88]
71038ebf18  b.ne 0x71038ebe28
71038ebf1c  ldp x9,x21,[x28, #0x30]
71038ebf20  ldp x8,x26,[x29, #-0x80]
71038ebf24  b 0x71038ebf2c
71038ebf28  mov x9,x21
71038ebf2c  str x19,[x28, #0x30]
71038ebf30  stur x9,[x29, #-0x88]
71038ebf34  sub x0,x29,#0x90
71038ebf38  str x8,[x28, #0x38]
71038ebf3c  stur x21,[x29, #-0x80]
71038ebf40  ldr x8,[x28, #0x40]
71038ebf44  str x26,[x28, #0x40]
71038ebf48  stur x8,[x29, #-0x78]
71038ebf4c  stur x9,[x29, #-0x90]
71038ebf50  bl 0x71038ef290
71038ebf54  ldr x0,[sp, #0x1c0]
71038ebf58  ldr x8,[sp, #0x68]
71038ebf5c  cmp x8,x0
71038ebf60  b.eq 0x71038ebf74
71038ebf64  cbz x0,0x71038ebf80
71038ebf68  ldr x8,[x0]
71038ebf6c  ldr x8,[x8, #0x28]
71038ebf70  b 0x71038ebf7c
71038ebf74  ldr x8,[x0]
71038ebf78  ldr x8,[x8, #0x20]
71038ebf7c  blr x8
71038ebf80  ldr x0,[sp, #0x190]
71038ebf84  ldr x8,[sp, #0x70]
71038ebf88  cmp x8,x0
71038ebf8c  b.eq 0x71038ebfa0
71038ebf90  cbz x0,0x71038ebfac
71038ebf94  ldr x8,[x0]
71038ebf98  ldr x8,[x8, #0x28]
71038ebf9c  b 0x71038ebfa8
71038ebfa0  ldr x8,[x0]
71038ebfa4  ldr x8,[x8, #0x20]
71038ebfa8  blr x8
71038ebfac  ldr x0,[sp, #0x150]
71038ebfb0  ldr x8,[sp, #0x78]
71038ebfb4  cmp x8,x0
71038ebfb8  b.eq 0x71038ebfcc
71038ebfbc  cbz x0,0x71038ebfd8
71038ebfc0  ldr x8,[x0]
71038ebfc4  ldr x8,[x8, #0x28]
71038ebfc8  b 0x71038ebfd4
71038ebfcc  ldr x8,[x0]
71038ebfd0  ldr x8,[x8, #0x20]
71038ebfd4  blr x8
71038ebfd8  adrp x25,0x71052a8000
71038ebfdc  ldrb w8,[sp, #0x3c8]
71038ebfe0  ldr x25,[x25, #0xa70]
71038ebfe4  ldp x20,x21,[sp, #0xc8]
71038ebfe8  ldr x27,[sp, #0xc0]
71038ebfec  ldr x24,[sp, #0x110]
71038ebff0  tbz w8,#0x0,0x71038ec00c
71038ebff4  ldr x19,[sp, #0x3d8]
71038ebff8  cbz x25,0x71038ec004
71038ebffc  mov x0,x19
71038ec000  bl 0x71039c19b0
71038ec004  mov x0,x19
71038ec008  bl 0x710392eb40
71038ec00c  ldrb w8,[sp, #0x3b0]
71038ec010  tbz w8,#0x0,0x71038ec02c
71038ec014  ldr x19,[sp, #0x3c0]
71038ec018  cbz x25,0x71038ec024
71038ec01c  mov x0,x19
71038ec020  bl 0x71039c19b0
71038ec024  mov x0,x19
71038ec028  bl 0x710392eb40
71038ec02c  ldrb w8,[sp, #0x398]
71038ec030  tbz w8,#0x0,0x71038ec04c
71038ec034  ldr x19,[sp, #0x3a8]
71038ec038  cbz x25,0x71038ec044
71038ec03c  mov x0,x19
71038ec040  bl 0x71039c19b0
71038ec044  mov x0,x19
71038ec048  bl 0x710392eb40
71038ec04c  ldrb w8,[sp, #0x380]
71038ec050  tbz w8,#0x0,0x71038ec06c
71038ec054  ldr x19,[sp, #0x390]
71038ec058  cbz x25,0x71038ec064
71038ec05c  mov x0,x19
71038ec060  bl 0x71039c19b0
71038ec064  mov x0,x19
71038ec068  bl 0x710392eb40
71038ec06c  ldrb w8,[sp, #0x400]
71038ec070  tbz w8,#0x0,0x71038ec08c
71038ec074  ldr x19,[sp, #0x410]
71038ec078  cbz x25,0x71038ec084
71038ec07c  mov x0,x19
71038ec080  bl 0x71039c19b0
71038ec084  mov x0,x19
71038ec088  bl 0x710392eb40
71038ec08c  ldr x19,[sp, #0x100]
71038ec090  add x24,x24,#0x120
71038ec094  add x19,x19,#0x120
71038ec098  cmp x24,x20
71038ec09c  b.ne 0x71038eb214
71038ec0a0  ldp x8,x9,[x28, #0x30]
71038ec0a4  sub x8,x9,x8
71038ec0a8  ldr x9,[sp, #0x38]
71038ec0ac  mov x10,#0x8ba3
71038ec0b0  movk x10,#0xba2e, LSL #16
71038ec0b4  movk x10,#0xa2e8, LSL #32
71038ec0b8  movk x10,#0x2e8b, LSL #48
71038ec0bc  asr x8,x8,#0x4
71038ec0c0  neg x9,x9
71038ec0c4  madd x21,x8,x10,x9
71038ec0c8  cbz x21,0x71038ec34c
71038ec0cc  ldr x24,[sp]
71038ec0d0  ldp x8,x9,[x24, #0x8]
71038ec0d4  cmp x8,x9
71038ec0d8  b.cs 0x71038ec140
71038ec0dc  ldr x9,[sp, #0xe0]
71038ec0e0  bfm w9,w21,#0x10,#0xf
71038ec0e4  str w9,[x8]
71038ec0e8  ldr x8,[x24, #0x8]
71038ec0ec  add x8,x8,#0x4
71038ec0f0  str x8,[x24, #0x8]
71038ec0f4  b 0x71038ec34c
71038ec0f8  ldr x9,[sp, #0x418]
71038ec0fc  and x9,x9,#-0x2
71038ec100  sub x1,x9,#0x1
71038ec104  subs x2,x23,x1
71038ec108  b.ls 0x71038eb100
71038ec10c  ldr x9,[sp, #0x420]
71038ec110  lsr x10,x8,#0x1
71038ec114  tst w8,#0x1
71038ec118  csel x3,x10,x9,eq
71038ec11c  add x0,sp,#0x418
71038ec120  mov x4,xzr
71038ec124  mov x5,x3
71038ec128  mov x6,x23
71038ec12c  mov x7,x19
71038ec130  bl 0x71037cfe00
71038ec134  ldrb w8,[sp, #0x380]
71038ec138  tbz w8,#0x0,0x71038eb140
71038ec13c  b 0x71038eb194
71038ec140  ldr x10,[x24]
71038ec144  sub x8,x8,x10
71038ec148  asr x20,x8,#0x2
71038ec14c  add x8,x20,#0x1
71038ec150  lsr x11,x8,#0x3e
71038ec154  cbnz x11,0x71038ecb40
71038ec158  sub x9,x9,x10
71038ec15c  asr x10,x9,#0x2
71038ec160  orr x11,xzr,#0x1ffffffffffffffe
71038ec164  cmp x10,x11
71038ec168  b.hi 0x71038ec1a8
71038ec16c  asr x9,x9,#0x1
71038ec170  cmp x9,x8
71038ec174  csel x23,x8,x9,cc
71038ec178  cbnz x23,0x71038ec1ac
71038ec17c  mov x9,xzr
71038ec180  b 0x71038ec21c
71038ec184  mov x27,xzr
71038ec188  mov w26,w24
71038ec18c  ldrb w8,[sp, #0x380]
71038ec190  tbnz w8,#0x0,0x71038eb194
71038ec194  b 0x71038eb140
71038ec198  str x23,[sp, #0x420]
71038ec19c  ldrb w8,[sp, #0x380]
71038ec1a0  tbnz w8,#0x0,0x71038eb194
71038ec1a4  b 0x71038eb140
71038ec1a8  orr x23,xzr,#0x3fffffffffffffff
71038ec1ac  lsl x19,x23,#0x2
71038ec1b0  add x0,sp,#0x120
71038ec1b4  mov w1,#0x10
71038ec1b8  mov x2,x19
71038ec1bc  bl 0x710392e1f0
71038ec1c0  cmp w0,#0xc
71038ec1c4  b.ne 0x71038ec1fc
71038ec1c8  adrp x8,0x710593d000
71038ec1cc  ldr x0,[x8, #0x2b0]
71038ec1d0  cbz x0,0x71038ec1fc
71038ec1d4  str x19,[sp, #0x1d0]
71038ec1d8  ldr x8,[x0]
71038ec1dc  ldr x8,[x8, #0x30]
71038ec1e0  add x1,sp,#0x1d0
71038ec1e4  blr x8
71038ec1e8  tbz w0,#0x0,0x71038ec1fc
71038ec1ec  add x0,sp,#0x120
71038ec1f0  mov w1,#0x10
71038ec1f4  mov x2,x19
71038ec1f8  bl 0x710392e1f0
71038ec1fc  adrp x8,0x71052a8000
71038ec200  ldr x8,[x8, #0xa78]
71038ec204  cbz x8,0x71038ec218
71038ec208  ldr x2,[sp, #0x120]
71038ec20c  mov w1,#0x10
71038ec210  mov x0,x19
71038ec214  bl 0x71039c19e0
71038ec218  ldr x9,[sp, #0x120]
71038ec21c  ldr x10,[sp, #0xe0]
71038ec220  add x12,x9,x20, LSL #0x2
71038ec224  add x8,x9,x23, LSL #0x2
71038ec228  mov w11,w10
71038ec22c  mov x10,x12
71038ec230  bfm w11,w21,#0x10,#0xf
71038ec234  str w11,[x10], #0x4
71038ec238  ldp x27,x11,[x24]
71038ec23c  cmp x11,x27
71038ec240  b.eq 0x71038ec324
71038ec244  sub x15,x11,#0x4
71038ec248  sub x14,x15,x27
71038ec24c  lsr x16,x14,#0x2
71038ec250  mvn x13,x16
71038ec254  add w16,w16,#0x1
71038ec258  ands x16,x16,#0x3
71038ec25c  b.eq 0x71038ec288
71038ec260  sub x17,x20,x16
71038ec264  neg x16,x16
71038ec268  sub x12,x12,#0x4
71038ec26c  mov x18,x16
71038ec270  ldr w0,[x15], #-0x4
71038ec274  adds x18,x18,#0x1
71038ec278  str w0,[x12], #-0x4
71038ec27c  b.ne 0x71038ec270
71038ec280  add x12,x9,x17, LSL #0x2
71038ec284  add x11,x11,x16, LSL #0x2
71038ec288  add x13,x20,x13
71038ec28c  cmp x14,#0xc
71038ec290  b.cc 0x71038ec31c
71038ec294  sub x14,x11,#0x10
71038ec298  sub x14,x14,x27
71038ec29c  tbnz w14,#0x4,0x71038ec2c4
71038ec2a0  ldur w15,[x11, #-0x4]
71038ec2a4  stur w15,[x12, #-0x4]
71038ec2a8  ldur w15,[x11, #-0x8]
71038ec2ac  stur w15,[x12, #-0x8]
71038ec2b0  ldur w15,[x11, #-0xc]
71038ec2b4  stur w15,[x12, #-0xc]
71038ec2b8  ldr w15,[x11, #-0x10]!
71038ec2bc  stur w15,[x12, #-0x10]
71038ec2c0  sub x12,x12,#0x10
71038ec2c4  cmp x14,#0x10
71038ec2c8  b.cc 0x71038ec31c
71038ec2cc  sub x12,x12,#0x10
71038ec2d0  ldur w14,[x11, #-0x4]
71038ec2d4  str w14,[x12, #0xc]
71038ec2d8  ldur w14,[x11, #-0x8]
71038ec2dc  str w14,[x12, #0x8]
71038ec2e0  ldur w14,[x11, #-0xc]
71038ec2e4  str w14,[x12, #0x4]
71038ec2e8  ldur w14,[x11, #-0x10]
71038ec2ec  str w14,[x12]
71038ec2f0  ldur w14,[x11, #-0x14]
71038ec2f4  stur w14,[x12, #-0x4]
71038ec2f8  ldur w14,[x11, #-0x18]
71038ec2fc  stur w14,[x12, #-0x8]
71038ec300  ldur w14,[x11, #-0x1c]
71038ec304  stur w14,[x12, #-0xc]
71038ec308  ldr w14,[x11, #-0x20]!
71038ec30c  stur w14,[x12, #-0x10]
71038ec310  sub x12,x12,#0x20
71038ec314  cmp x27,x11
71038ec318  b.ne 0x71038ec2d0
71038ec31c  ldr x27,[x24]
71038ec320  add x12,x9,x13, LSL #0x2
71038ec324  stp x12,x10,[x24]
71038ec328  str x8,[x24, #0x10]
71038ec32c  cbz x27,0x71038ec34c
71038ec330  adrp x8,0x71052a8000
71038ec334  ldr x8,[x8, #0xa70]
71038ec338  cbz x8,0x71038ec344
71038ec33c  mov x0,x27
71038ec340  bl 0x71039c19b0
71038ec344  mov x0,x27
71038ec348  bl 0x710392eb40
71038ec34c  adrp x9,0x71052a8000
71038ec350  ldrb w8,[sp, #0x418]
71038ec354  ldr x26,[sp, #0x98]
71038ec358  ldr x9,[x9, #0xa70]
71038ec35c  ldr x21,[sp, #0xd0]
71038ec360  tbz w8,#0x0,0x71038ec37c
71038ec364  ldr x19,[sp, #0x428]
71038ec368  cbz x9,0x71038ec374
71038ec36c  mov x0,x19
71038ec370  bl 0x71039c19b0
71038ec374  mov x0,x19
71038ec378  bl 0x710392eb40
71038ec37c  ldr x8,[sp, #0xe0]
71038ec380  ldr x9,[sp, #0x30]
71038ec384  add w8,w8,#0x1
71038ec388  cmp x9,x8
71038ec38c  mov w24,w21
71038ec390  b.hi 0x71038ead94
71038ec394  ldr x0,[sp, #0x10c0]
71038ec398  add x8,sp,#0x430
71038ec39c  add x8,x8,#0xc70
71038ec3a0  cmp x8,x0
71038ec3a4  b.eq 0x71038ec3b8
71038ec3a8  cbz x0,0x71038ec3c4
71038ec3ac  ldr x8,[x0]
71038ec3b0  ldr x8,[x8, #0x28]
71038ec3b4  b 0x71038ec3c0
71038ec3b8  ldr x8,[x0]
71038ec3bc  ldr x8,[x8, #0x20]
71038ec3c0  blr x8
71038ec3c4  ldr x0,[sp, #0xfa0]
71038ec3c8  add x8,sp,#0x430
71038ec3cc  add x8,x8,#0xb50
71038ec3d0  cmp x8,x0
71038ec3d4  b.eq 0x71038ec3e8
71038ec3d8  cbz x0,0x71038ec3f4
71038ec3dc  ldr x8,[x0]
71038ec3e0  ldr x8,[x8, #0x28]
71038ec3e4  b 0x71038ec3f0
71038ec3e8  ldr x8,[x0]
71038ec3ec  ldr x8,[x8, #0x20]
71038ec3f0  blr x8
71038ec3f4  ldr x0,[sp, #0xe80]
71038ec3f8  add x8,sp,#0x430
71038ec3fc  add x8,x8,#0xa30
71038ec400  cmp x8,x0
71038ec404  b.eq 0x71038ec418
71038ec408  cbz x0,0x71038ec424
71038ec40c  ldr x8,[x0]
71038ec410  ldr x8,[x8, #0x28]
71038ec414  b 0x71038ec420
71038ec418  ldr x8,[x0]
71038ec41c  ldr x8,[x8, #0x20]
71038ec420  blr x8
71038ec424  ldr x0,[sp, #0xd60]
71038ec428  add x8,sp,#0x430
71038ec42c  add x8,x8,#0x910
71038ec430  cmp x8,x0
71038ec434  b.eq 0x71038ec448
71038ec438  cbz x0,0x71038ec454
71038ec43c  ldr x8,[x0]
71038ec440  ldr x8,[x8, #0x28]
71038ec444  b 0x71038ec450
71038ec448  ldr x8,[x0]
71038ec44c  ldr x8,[x8, #0x20]
71038ec450  blr x8
71038ec454  ldr x0,[sp, #0xc40]
71038ec458  add x8,sp,#0x430
71038ec45c  add x8,x8,#0x7f0
71038ec460  cmp x8,x0
71038ec464  b.eq 0x71038ec478
71038ec468  cbz x0,0x71038ec484
71038ec46c  ldr x8,[x0]
71038ec470  ldr x8,[x8, #0x28]
71038ec474  b 0x71038ec480
71038ec478  ldr x8,[x0]
71038ec47c  ldr x8,[x8, #0x20]
71038ec480  blr x8
71038ec484  ldr x0,[sp, #0xb20]
71038ec488  add x8,sp,#0x430
71038ec48c  add x8,x8,#0x6d0
71038ec490  cmp x8,x0
71038ec494  b.eq 0x71038ec4a8
71038ec498  cbz x0,0x71038ec4b4
71038ec49c  ldr x8,[x0]
71038ec4a0  ldr x8,[x8, #0x28]
71038ec4a4  b 0x71038ec4b0
71038ec4a8  ldr x8,[x0]
71038ec4ac  ldr x8,[x8, #0x20]
71038ec4b0  blr x8
71038ec4b4  ldr x0,[sp, #0xa00]
71038ec4b8  add x8,sp,#0x430
71038ec4bc  add x8,x8,#0x5b0
71038ec4c0  cmp x8,x0
71038ec4c4  b.eq 0x71038ec4d8
71038ec4c8  cbz x0,0x71038ec4e4
71038ec4cc  ldr x8,[x0]
71038ec4d0  ldr x8,[x8, #0x28]
71038ec4d4  b 0x71038ec4e0
71038ec4d8  ldr x8,[x0]
71038ec4dc  ldr x8,[x8, #0x20]
71038ec4e0  blr x8
71038ec4e4  ldr x0,[sp, #0x8e0]
71038ec4e8  add x8,sp,#0x430
71038ec4ec  add x8,x8,#0x490
71038ec4f0  cmp x8,x0
71038ec4f4  b.eq 0x71038ec508
71038ec4f8  cbz x0,0x71038ec514
71038ec4fc  ldr x8,[x0]
71038ec500  ldr x8,[x8, #0x28]
71038ec504  b 0x71038ec510
71038ec508  ldr x8,[x0]
71038ec50c  ldr x8,[x8, #0x20]
71038ec510  blr x8
71038ec514  ldr x0,[sp, #0x7c0]
71038ec518  add x8,sp,#0x430
71038ec51c  add x8,x8,#0x370
71038ec520  cmp x8,x0
71038ec524  b.eq 0x71038ec538
71038ec528  cbz x0,0x71038ec544
71038ec52c  ldr x8,[x0]
71038ec530  ldr x8,[x8, #0x28]
71038ec534  b 0x71038ec540
71038ec538  ldr x8,[x0]
71038ec53c  ldr x8,[x8, #0x20]
71038ec540  blr x8
71038ec544  ldr x0,[sp, #0x6a0]
71038ec548  add x8,sp,#0x430
71038ec54c  add x8,x8,#0x250
71038ec550  cmp x8,x0
71038ec554  b.eq 0x71038ec568
71038ec558  cbz x0,0x71038ec574
71038ec55c  ldr x8,[x0]
71038ec560  ldr x8,[x8, #0x28]
71038ec564  b 0x71038ec570
71038ec568  ldr x8,[x0]
71038ec56c  ldr x8,[x8, #0x20]
71038ec570  blr x8
71038ec574  ldr x0,[sp, #0x580]
71038ec578  add x8,sp,#0x430
71038ec57c  add x8,x8,#0x130
71038ec580  cmp x8,x0
71038ec584  b.eq 0x71038ec598
71038ec588  cbz x0,0x71038ec5a4
71038ec58c  ldr x8,[x0]
71038ec590  ldr x8,[x8, #0x28]
71038ec594  b 0x71038ec5a0
71038ec598  ldr x8,[x0]
71038ec59c  ldr x8,[x8, #0x20]
71038ec5a0  blr x8
71038ec5a4  ldr x0,[sp, #0x460]
71038ec5a8  add x8,sp,#0x430
71038ec5ac  add x8,x8,#0x10
71038ec5b0  cmp x8,x0
71038ec5b4  b.eq 0x71038ec5c8
71038ec5b8  cbz x0,0x71038ec5d4
71038ec5bc  ldr x8,[x0]
71038ec5c0  ldr x8,[x8, #0x28]
71038ec5c4  b 0x71038ec5d0
71038ec5c8  ldr x8,[x0]
71038ec5cc  ldr x8,[x8, #0x20]
71038ec5d0  blr x8
71038ec5d4  add sp,sp,#0x1, LSL #12
71038ec5d8  add sp,sp,#0x1f0
71038ec5dc  ldp x29,x30,[sp, #0x50]
71038ec5e0  ldp x20,x19,[sp, #0x40]
71038ec5e4  ldp x22,x21,[sp, #0x30]
71038ec5e8  ldp x24,x23,[sp, #0x20]
71038ec5ec  ldp x26,x25,[sp, #0x10]
71038ec5f0  ldp x28,x27,[sp], #0x60
71038ec5f4  ret
71038ec5f8  mov x0,x19
71038ec5fc  bl 0x71039c6e60
71038ec600  adrp x0,0x7106d43000
71038ec604  add x0,x0,#0x2e0
71038ec608  bl 0x71039c06b0
71038ec60c  cbz w0,0x71038ea3e4
71038ec610  adrp x1,0x7106d43000
71038ec614  add x1,x1,#0x1e8
71038ec618  mov w8,#0xa
71038ec61c  str xzr,[x1]
71038ec620  strb w8,[x1]
71038ec624  mov w8,#0x4353
71038ec628  movk w8,#0x4c41, LSL #16
71038ec62c  stur w8,[x1, #0x1]
71038ec630  mov w8,#0x45
71038ec634  adrp x0,0x7103558000
71038ec638  add x0,x0,#0x230
71038ec63c  adrp x2,0x7104f17000
71038ec640  add x2,x2,#0x0
71038ec644  stp xzr,xzr,[x1, #0x8]
71038ec648  sturh w8,[x1, #0x5]
71038ec64c  bl 0x71000001c0
71038ec650  adrp x0,0x7106d43000
71038ec654  add x0,x0,#0x2e0
71038ec658  bl 0x71039c06c0
71038ec65c  b 0x71038ea3e4
71038ec660  adrp x0,0x7106d43000
71038ec664  add x0,x0,#0x2d8
71038ec668  bl 0x71039c06b0
71038ec66c  cbz w0,0x71038ea410
71038ec670  adrp x1,0x7106d43000
71038ec674  add x1,x1,#0x1d0
71038ec678  orr w8,wzr,#0x6
71038ec67c  str xzr,[x1]
71038ec680  strb w8,[x1]
71038ec684  mov w8,#0x4f52
71038ec688  movk w8,#0x54, LSL #16
71038ec68c  adrp x0,0x7103558000
71038ec690  add x0,x0,#0x230
71038ec694  adrp x2,0x7104f17000
71038ec698  add x2,x2,#0x0
71038ec69c  stur w8,[x1, #0x1]
71038ec6a0  stp xzr,xzr,[x1, #0x8]
71038ec6a4  bl 0x71000001c0
71038ec6a8  adrp x0,0x7106d43000
71038ec6ac  add x0,x0,#0x2d8
71038ec6b0  bl 0x71039c06c0
71038ec6b4  b 0x71038ea410
71038ec6b8  adrp x0,0x7106d43000
71038ec6bc  add x0,x0,#0x2d0
71038ec6c0  bl 0x71039c06b0
71038ec6c4  cbz w0,0x71038ea43c
71038ec6c8  adrp x1,0x7106d43000
71038ec6cc  add x1,x1,#0x1b8
71038ec6d0  mov w8,#0xa
71038ec6d4  str xzr,[x1]
71038ec6d8  strb w8,[x1]
71038ec6dc  mov w8,#0x5254
71038ec6e0  movk w8,#0x4e41, LSL #16
71038ec6e4  stur w8,[x1, #0x1]
71038ec6e8  mov w8,#0x53
71038ec6ec  adrp x0,0x7103558000
71038ec6f0  add x0,x0,#0x230
71038ec6f4  adrp x2,0x7104f17000
71038ec6f8  add x2,x2,#0x0
71038ec6fc  stp xzr,xzr,[x1, #0x8]
71038ec700  sturh w8,[x1, #0x5]
71038ec704  bl 0x71000001c0
71038ec708  adrp x0,0x7106d43000
71038ec70c  add x0,x0,#0x2d0
71038ec710  bl 0x71039c06c0
71038ec714  b 0x71038ea43c
71038ec718  adrp x0,0x7106d43000
71038ec71c  add x0,x0,#0x2f8
71038ec720  bl 0x71039c06b0
71038ec724  cbz w0,0x71038ea470
71038ec728  adrp x1,0x7106d43000
71038ec72c  add x1,x1,#0x230
71038ec730  mov w8,#0x20
71038ec734  adrp x9,0x71043ce000
71038ec738  add x9,x9,#0x108
71038ec73c  str xzr,[x1]
71038ec740  strb w8,[x1]
71038ec744  ldp x8,x9,[x9]
71038ec748  adrp x0,0x7103558000
71038ec74c  add x0,x0,#0x230
71038ec750  adrp x2,0x7104f17000
71038ec754  add x2,x2,#0x0
71038ec758  stp xzr,xzr,[x1, #0x8]
71038ec75c  stur x9,[x1, #0x9]
71038ec760  stur x8,[x1, #0x1]
71038ec764  strb wzr,[x1, #0x11]
71038ec768  bl 0x71000001c0
71038ec76c  adrp x0,0x7106d43000
71038ec770  add x0,x0,#0x2f8
71038ec774  bl 0x71039c06c0
71038ec778  b 0x71038ea470
71038ec77c  adrp x0,0x7106d43000
71038ec780  add x0,x0,#0x2e8
71038ec784  bl 0x71039c06b0
71038ec788  cbz w0,0x71038ea648
71038ec78c  adrp x1,0x7106d43000
71038ec790  add x1,x1,#0x200
71038ec794  orr w8,wzr,#0x6
71038ec798  str xzr,[x1]
71038ec79c  strb w8,[x1]
71038ec7a0  mov w8,#0x4956
71038ec7a4  movk w8,#0x53, LSL #16
71038ec7a8  adrp x0,0x7103558000
71038ec7ac  add x0,x0,#0x230
71038ec7b0  adrp x2,0x7104f17000
71038ec7b4  add x2,x2,#0x0
71038ec7b8  stur w8,[x1, #0x1]
71038ec7bc  stp xzr,xzr,[x1, #0x8]
71038ec7c0  bl 0x71000001c0
71038ec7c4  adrp x0,0x7106d43000
71038ec7c8  add x0,x0,#0x2e8
71038ec7cc  bl 0x71039c06c0
71038ec7d0  b 0x71038ea648
71038ec7d4  adrp x0,0x7106d43000
71038ec7d8  add x0,x0,#0x308
71038ec7dc  bl 0x71039c06b0
71038ec7e0  cbz w0,0x71038ea70c
71038ec7e4  adrp x1,0x7106d43000
71038ec7e8  add x1,x1,#0x260
71038ec7ec  orr w8,wzr,#0x6
71038ec7f0  str xzr,[x1]
71038ec7f4  strb w8,[x1]
71038ec7f8  mov w8,#0x4f46
71038ec7fc  movk w8,#0x56, LSL #16
71038ec800  adrp x0,0x7103558000
71038ec804  add x0,x0,#0x230
71038ec808  adrp x2,0x7104f17000
71038ec80c  add x2,x2,#0x0
71038ec810  stur w8,[x1, #0x1]
71038ec814  stp xzr,xzr,[x1, #0x8]
71038ec818  bl 0x71000001c0
71038ec81c  adrp x0,0x7106d43000
71038ec820  add x0,x0,#0x308
71038ec824  bl 0x71039c06c0
71038ec828  b 0x71038ea70c
71038ec82c  adrp x0,0x7106d43000
71038ec830  add x0,x0,#0x310
71038ec834  bl 0x71039c06b0
71038ec838  cbz w0,0x71038ea7cc
71038ec83c  adrp x1,0x7106d43000
71038ec840  add x1,x1,#0x278
71038ec844  mov w8,#0x12
71038ec848  stp xzr,xzr,[x1]
71038ec84c  strb w8,[x1]
71038ec850  adrp x8,0x7104348000
71038ec854  add x8,x8,#0xe8f
71038ec858  ldr x8,[x8]
71038ec85c  stur x8,[x1, #0x1]
71038ec860  mov w8,#0x45
71038ec864  adrp x0,0x7103558000
71038ec868  add x0,x0,#0x230
71038ec86c  adrp x2,0x7104f17000
71038ec870  add x2,x2,#0x0
71038ec874  str xzr,[x1, #0x10]
71038ec878  sturh w8,[x1, #0x9]
71038ec87c  bl 0x71000001c0
71038ec880  adrp x0,0x7106d43000
71038ec884  add x0,x0,#0x310
71038ec888  bl 0x71039c06c0
71038ec88c  b 0x71038ea7cc
71038ec890  adrp x0,0x7106d43000
71038ec894  add x0,x0,#0x318
71038ec898  bl 0x71039c06b0
71038ec89c  cbz w0,0x71038ea888
71038ec8a0  adrp x1,0x7106d43000
71038ec8a4  add x1,x1,#0x290
71038ec8a8  mov w8,#0x10
71038ec8ac  stp xzr,xzr,[x1]
71038ec8b0  strb w8,[x1]
71038ec8b4  mov x8,#0x4146
71038ec8b8  movk x8,#0x5052, LSL #16
71038ec8bc  movk x8,#0x414c, LSL #32
71038ec8c0  movk x8,#0x454e, LSL #48
71038ec8c4  adrp x0,0x7103558000
71038ec8c8  add x0,x0,#0x230
71038ec8cc  adrp x2,0x7104f17000
71038ec8d0  add x2,x2,#0x0
71038ec8d4  str xzr,[x1, #0x10]
71038ec8d8  stur x8,[x1, #0x1]
71038ec8dc  strb wzr,[x1, #0x9]
71038ec8e0  bl 0x71000001c0
71038ec8e4  adrp x0,0x7106d43000
71038ec8e8  add x0,x0,#0x318
71038ec8ec  bl 0x71039c06c0
71038ec8f0  b 0x71038ea888
71038ec8f4  adrp x0,0x7106d43000
71038ec8f8  add x0,x0,#0x300
71038ec8fc  bl 0x71039c06b0
71038ec900  cbz w0,0x71038ea958
71038ec904  adrp x1,0x7106d43000
71038ec908  add x1,x1,#0x248
71038ec90c  orr w8,wzr,#0xc
71038ec910  mov w9,#0x5448
71038ec914  strb w8,[x1]
71038ec918  mov w8,#0x4557
71038ec91c  movk w8,#0x4749, LSL #16
71038ec920  adrp x0,0x7103558000
71038ec924  add x0,x0,#0x230
71038ec928  adrp x2,0x7104f17000
71038ec92c  add x2,x2,#0x0
71038ec930  sturh w9,[x1, #0x5]
71038ec934  stp xzr,xzr,[x1, #0x8]
71038ec938  stur w8,[x1, #0x1]
71038ec93c  strb wzr,[x1, #0x7]
71038ec940  bl 0x71000001c0
71038ec944  adrp x0,0x7106d43000
71038ec948  add x0,x0,#0x300
71038ec94c  bl 0x71039c06c0
71038ec950  b 0x71038ea958
71038ec954  adrp x0,0x7106d43000
71038ec958  add x0,x0,#0x2e0
71038ec95c  bl 0x71039c06b0
71038ec960  cbz w0,0x71038eaa2c
71038ec964  mov w8,#0xa
71038ec968  str xzr,[x26]
71038ec96c  adrp x0,0x7103558000
71038ec970  add x0,x0,#0x230
71038ec974  strb w8,[x26]
71038ec978  mov w8,#0x4353
71038ec97c  movk w8,#0x4c41, LSL #16
71038ec980  stur w8,[x26, #0x1]
71038ec984  mov w8,#0x45
71038ec988  adrp x2,0x7104f17000
71038ec98c  add x2,x2,#0x0
71038ec990  mov x1,x26
71038ec994  stp xzr,xzr,[x26, #0x8]
71038ec998  sturh w8,[x26, #0x5]
71038ec99c  bl 0x71000001c0
71038ec9a0  adrp x0,0x7106d43000
71038ec9a4  add x0,x0,#0x2e0
71038ec9a8  bl 0x71039c06c0
71038ec9ac  b 0x71038eaa2c
71038ec9b0  adrp x0,0x7106d43000
71038ec9b4  add x0,x0,#0x2d8
71038ec9b8  bl 0x71039c06b0
71038ec9bc  cbz w0,0x71038eaae8
71038ec9c0  orr w8,wzr,#0x6
71038ec9c4  str xzr,[x19]
71038ec9c8  adrp x0,0x7103558000
71038ec9cc  add x0,x0,#0x230
71038ec9d0  strb w8,[x19]
71038ec9d4  mov w8,#0x4f52
71038ec9d8  movk w8,#0x54, LSL #16
71038ec9dc  adrp x2,0x7104f17000
71038ec9e0  add x2,x2,#0x0
71038ec9e4  mov x1,x19
71038ec9e8  stp xzr,xzr,[x19, #0x8]
71038ec9ec  stur w8,[x19, #0x1]
71038ec9f0  bl 0x71000001c0
71038ec9f4  adrp x0,0x7106d43000
71038ec9f8  add x0,x0,#0x2d8
71038ec9fc  bl 0x71039c06c0
71038eca00  b 0x71038eaae8
71038eca04  adrp x0,0x7106d43000
71038eca08  add x0,x0,#0x2d0
71038eca0c  bl 0x71039c06b0
71038eca10  cbz w0,0x71038eab9c
71038eca14  mov w8,#0xa
71038eca18  str xzr,[x24]
71038eca1c  adrp x0,0x7103558000
71038eca20  add x0,x0,#0x230
71038eca24  strb w8,[x24]
71038eca28  mov w8,#0x5254
71038eca2c  movk w8,#0x4e41, LSL #16
71038eca30  stur w8,[x24, #0x1]
71038eca34  mov w8,#0x53
71038eca38  adrp x2,0x7104f17000
71038eca3c  add x2,x2,#0x0
71038eca40  mov x1,x24
71038eca44  stp xzr,xzr,[x24, #0x8]
71038eca48  sturh w8,[x24, #0x5]
71038eca4c  bl 0x71000001c0
71038eca50  adrp x0,0x7106d43000
71038eca54  add x0,x0,#0x2d0
71038eca58  bl 0x71039c06c0
71038eca5c  b 0x71038eab9c
71038eca60  adrp x0,0x7106d43000
71038eca64  add x0,x0,#0x2f8
71038eca68  bl 0x71039c06b0
71038eca6c  cbz w0,0x71038eac50
71038eca70  mov w8,#0x20
71038eca74  adrp x9,0x71043ce000
71038eca78  add x9,x9,#0x108
71038eca7c  str xzr,[x23]
71038eca80  strb w8,[x23]
71038eca84  adrp x0,0x7103558000
71038eca88  add x0,x0,#0x230
71038eca8c  ldp x8,x9,[x9]
71038eca90  adrp x2,0x7104f17000
71038eca94  add x2,x2,#0x0
71038eca98  mov x1,x23
71038eca9c  stp xzr,xzr,[x23, #0x8]
71038ecaa0  stur x9,[x23, #0x9]
71038ecaa4  stur x8,[x23, #0x1]
71038ecaa8  strb wzr,[x23, #0x11]
71038ecaac  bl 0x71000001c0
71038ecab0  adrp x0,0x7106d43000
71038ecab4  add x0,x0,#0x2f8
71038ecab8  bl 0x71039c06c0
71038ecabc  b 0x71038eac50
71038ecac0  mov w0,#0x8
71038ecac4  bl 0x71039c6c40
71038ecac8  adrp x8,0x7105242000
71038ecacc  add x8,x8,#0x50
71038ecad0  str x8,[x0]
71038ecad4  adrp x2,0x71052a8000
71038ecad8  ldr x2,[x2, #0xb58]
71038ecadc  adrp x1,0x7105242000
71038ecae0  add x1,x1,#0x70
71038ecae4  bl 0x71039c6c50
71038ecae8  add x0,sp,#0x400
71038ecaec  bl 0x71039c1a00
71038ecaf0  mov w0,#0x8
71038ecaf4  bl 0x71039c6c40
71038ecaf8  adrp x8,0x7105242000
71038ecafc  add x8,x8,#0x50
71038ecb00  str x8,[x0]
71038ecb04  adrp x2,0x71052a8000
71038ecb08  ldr x2,[x2, #0xb58]
71038ecb0c  adrp x1,0x7105242000
71038ecb10  add x1,x1,#0x70
71038ecb14  bl 0x71039c6c50
71038ecb18  ldr x0,[sp, #0x10]
71038ecb1c  bl 0x71039c0c00
71038ecb20  add x0,sp,#0x380
71038ecb24  bl 0x71039c6e60
71038ecb28  add x0,sp,#0x380
71038ecb2c  bl 0x71039c1a00
71038ecb30  add x0,sp,#0x1d0
71038ecb34  bl 0x71039c1a00
71038ecb38  add x0,sp,#0x120
71038ecb3c  bl 0x71039c1a00
71038ecb40  mov x0,x24
71038ecb44  bl 0x71039c0c00
71038ecb48  b 0x71038ecdf0
71038ecb4c  b 0x71038ecc80
71038ecb50  b 0x71038ecdf0
71038ecb54  b 0x71038ecc94
71038ecb58  b 0x71038ecca8
71038ecb5c  b 0x71038ecdf0
71038ecb60  b 0x71038ecdc4
71038ecb64  bl 0x71037b2bc0
71038ecb68  bl 0x71037b2bc0
71038ecb6c  b 0x71038ecdf0
71038ecb70  bl 0x71037b2bc0
71038ecb74  bl 0x71037b2bc0
71038ecb78  bl 0x71037b2bc0
71038ecb7c  bl 0x71037b2bc0
71038ecb80  mov w8,#0xb0
71038ecb84  madd x8,x23,x8,x24
71038ecb88  mov x19,x0
71038ecb8c  ldr x0,[x8, #0x70]
71038ecb90  add x9,x8,#0x50
71038ecb94  cmp x9,x0
71038ecb98  b.ne 0x71038ecba8
71038ecb9c  ldr x8,[x0]
71038ecba0  ldr x8,[x8, #0x20]
71038ecba4  b 0x71038ecbb4
71038ecba8  cbz x0,0x71038ecbb8
71038ecbac  ldr x8,[x0]
71038ecbb0  ldr x8,[x8, #0x28]
71038ecbb4  blr x8
71038ecbb8  mov w8,#0xb0
71038ecbbc  madd x8,x23,x8,x24
71038ecbc0  b 0x71038ecbd0
71038ecbc4  mov w8,#0xb0
71038ecbc8  madd x8,x23,x8,x24
71038ecbcc  mov x19,x0
71038ecbd0  ldr x0,[x8, #0x30]
71038ecbd4  add x9,x8,#0x10
71038ecbd8  cmp x9,x0
71038ecbdc  b.ne 0x71038ecbf0
71038ecbe0  ldr x8,[x0]
71038ecbe4  ldr x8,[x8, #0x20]
71038ecbe8  blr x8
71038ecbec  b 0x71038ecc08
71038ecbf0  cbz x0,0x71038ecc08
71038ecbf4  ldr x8,[x0]
71038ecbf8  ldr x8,[x8, #0x28]
71038ecbfc  blr x8
71038ecc00  b 0x71038ecc08
71038ecc04  mov x19,x0
71038ecc08  sub x0,x29,#0x90
71038ecc0c  bl 0x71038ef290
71038ecc10  b 0x71038eccac
71038ecc14  mov x19,x0
71038ecc18  ldr x0,[x23, #0x70]
71038ecc1c  add x8,x23,#0x50
71038ecc20  cmp x8,x0
71038ecc24  b.ne 0x71038ecc34
71038ecc28  ldr x8,[x0]
71038ecc2c  ldr x8,[x8, #0x20]
71038ecc30  b 0x71038ecc40
71038ecc34  cbz x0,0x71038ecc4c
71038ecc38  ldr x8,[x0]
71038ecc3c  ldr x8,[x8, #0x28]
71038ecc40  blr x8
71038ecc44  b 0x71038ecc4c
71038ecc48  mov x19,x0
71038ecc4c  ldr x0,[x23, #0x30]
71038ecc50  add x8,x23,#0x10
71038ecc54  cmp x8,x0
71038ecc58  b.ne 0x71038ecc6c
71038ecc5c  ldr x8,[x0]
71038ecc60  ldr x8,[x8, #0x20]
71038ecc64  blr x8
71038ecc68  b 0x71038eccac
71038ecc6c  cbz x0,0x71038eccac
71038ecc70  ldr x8,[x0]
71038ecc74  ldr x8,[x8, #0x28]
71038ecc78  blr x8
71038ecc7c  b 0x71038eccac
71038ecc80  mov x19,x0
71038ecc84  ldrb w8,[sp, #0x1d0]
71038ecc88  tbnz w8,#0x0,0x71038ecd94
71038ecc8c  b 0x71038ecdf4
71038ecc90  b 0x71038ecdf0
71038ecc94  mov x19,x0
71038ecc98  ldrb w8,[sp, #0x120]
71038ecc9c  tbnz w8,#0x0,0x71038ecd6c
71038ecca0  b 0x71038ecd8c
71038ecca4  b 0x71038ecd38
71038ecca8  mov x19,x0
71038eccac  ldr x0,[sp, #0x1c0]
71038eccb0  ldr x8,[sp, #0x68]
71038eccb4  cmp x8,x0
71038eccb8  b.ne 0x71038eccc8
71038eccbc  ldr x8,[x0]
71038eccc0  ldr x8,[x8, #0x20]
71038eccc4  b 0x71038eccd4
71038eccc8  cbz x0,0x71038eccd8
71038ecccc  ldr x8,[x0]
71038eccd0  ldr x8,[x8, #0x28]
71038eccd4  blr x8
71038eccd8  ldr x0,[sp, #0x190]
71038eccdc  ldr x8,[sp, #0x70]
71038ecce0  cmp x8,x0
71038ecce4  b.ne 0x71038eccf4
71038ecce8  ldr x8,[x0]
71038eccec  ldr x8,[x8, #0x20]
71038eccf0  b 0x71038ecd00
71038eccf4  cbz x0,0x71038ecd04
71038eccf8  ldr x8,[x0]
71038eccfc  ldr x8,[x8, #0x28]
71038ecd00  blr x8
71038ecd04  ldr x0,[sp, #0x150]
71038ecd08  ldr x8,[sp, #0x78]
71038ecd0c  cmp x8,x0
71038ecd10  b.ne 0x71038ecd24
71038ecd14  ldr x8,[x0]
71038ecd18  ldr x8,[x8, #0x20]
71038ecd1c  blr x8
71038ecd20  b 0x71038ecdc8
71038ecd24  cbz x0,0x71038ecdc8
71038ecd28  ldr x8,[x0]
71038ecd2c  ldr x8,[x8, #0x28]
71038ecd30  blr x8
71038ecd34  b 0x71038ecdc8
71038ecd38  ldrb w8,[sp, #0x380]
71038ecd3c  mov x19,x0
71038ecd40  tbz w8,#0x0,0x71038ecd64
71038ecd44  adrp x8,0x71052a8000
71038ecd48  ldr x20,[sp, #0x390]
71038ecd4c  ldr x8,[x8, #0xa70]
71038ecd50  cbz x8,0x71038ecd5c
71038ecd54  mov x0,x20
71038ecd58  bl 0x71039c19b0
71038ecd5c  mov x0,x20
71038ecd60  bl 0x710392eb40
71038ecd64  ldrb w8,[sp, #0x120]
71038ecd68  tbz w8,#0x0,0x71038ecd8c
71038ecd6c  adrp x8,0x71052a8000
71038ecd70  ldr x20,[sp, #0x130]
71038ecd74  ldr x8,[x8, #0xa70]
71038ecd78  cbz x8,0x71038ecd84
71038ecd7c  mov x0,x20
71038ecd80  bl 0x71039c19b0
71038ecd84  mov x0,x20
71038ecd88  bl 0x710392eb40
71038ecd8c  ldrb w8,[sp, #0x1d0]
71038ecd90  tbz w8,#0x0,0x71038ecdf4
71038ecd94  adrp x8,0x71052a8000
71038ecd98  ldr x20,[sp, #0x1e0]
71038ecd9c  ldr x8,[x8, #0xa70]
71038ecda0  cbz x8,0x71038ecdac
71038ecda4  mov x0,x20
71038ecda8  bl 0x71039c19b0
71038ecdac  mov x0,x20
71038ecdb0  bl 0x710392eb40
71038ecdb4  b 0x71038ecdf4
71038ecdb8  bl 0x71037b2bc0
71038ecdbc  bl 0x71037b2bc0
71038ecdc0  bl 0x71037b2bc0
71038ecdc4  mov x19,x0
71038ecdc8  adrp x25,0x71052a8000
71038ecdcc  ldr x25,[x25, #0xa70]
71038ecdd0  ldrb w8,[sp, #0x3c8]
71038ecdd4  tbnz w8,#0x0,0x71038ece28
71038ecdd8  b 0x71038ece40
71038ecddc  bl 0x71037b2bc0
71038ecde0  bl 0x71037b2bc0
71038ecde4  bl 0x71037b2bc0
71038ecde8  bl 0x71037b2bc0
71038ecdec  bl 0x71037b2bc0
71038ecdf0  mov x19,x0
71038ecdf4  adrp x25,0x71052a8000
71038ecdf8  ldr x25,[x25, #0xa70]
71038ecdfc  ldrb w8,[sp, #0x418]
71038ece00  tbnz w8,#0x0,0x71038ecec8
71038ece04  b 0x71038ecee0
71038ece08  bl 0x71037b2bc0
71038ece0c  mov x19,x0
71038ece10  ldrb w8,[sp, #0x400]
71038ece14  tbnz w8,#0x0,0x71038ecea8
71038ece18  b 0x71038ecec0
71038ece1c  mov x19,x0
71038ece20  ldrb w8,[sp, #0x3c8]
71038ece24  tbz w8,#0x0,0x71038ece40
71038ece28  ldr x20,[sp, #0x3d8]
71038ece2c  cbz x25,0x71038ece38
71038ece30  mov x0,x20
71038ece34  bl 0x71039c19b0
71038ece38  mov x0,x20
71038ece3c  bl 0x710392eb40
71038ece40  ldrb w8,[sp, #0x3b0]
71038ece44  tbz w8,#0x0,0x71038ece60
71038ece48  ldr x20,[sp, #0x3c0]
71038ece4c  cbz x25,0x71038ece58
71038ece50  mov x0,x20
71038ece54  bl 0x71039c19b0
71038ece58  mov x0,x20
71038ece5c  bl 0x710392eb40
71038ece60  ldrb w8,[sp, #0x398]
71038ece64  tbz w8,#0x0,0x71038ece80
71038ece68  ldr x20,[sp, #0x3a8]
71038ece6c  cbz x25,0x71038ece78
71038ece70  mov x0,x20
71038ece74  bl 0x71039c19b0
71038ece78  mov x0,x20
71038ece7c  bl 0x710392eb40
71038ece80  ldrb w8,[sp, #0x380]
71038ece84  tbz w8,#0x0,0x71038ecea0
71038ece88  ldr x20,[sp, #0x390]
71038ece8c  cbz x25,0x71038ece98
71038ece90  mov x0,x20
71038ece94  bl 0x71039c19b0
71038ece98  mov x0,x20
71038ece9c  bl 0x710392eb40
71038ecea0  ldrb w8,[sp, #0x400]
71038ecea4  tbz w8,#0x0,0x71038ecec0
71038ecea8  ldr x20,[sp, #0x410]
71038eceac  cbz x25,0x71038eceb8
71038eceb0  mov x0,x20
71038eceb4  bl 0x71039c19b0
71038eceb8  mov x0,x20
71038ecebc  bl 0x710392eb40
71038ecec0  ldrb w8,[sp, #0x418]
71038ecec4  tbz w8,#0x0,0x71038ecee0
71038ecec8  ldr x20,[sp, #0x428]
71038ececc  cbz x25,0x71038eced8
71038eced0  mov x0,x20
71038eced4  bl 0x71039c19b0
71038eced8  mov x0,x20
71038ecedc  bl 0x710392eb40
71038ecee0  ldr x0,[sp, #0x10c0]
71038ecee4  add x8,sp,#0x430
71038ecee8  add x8,x8,#0xc70
71038eceec  cmp x8,x0
71038ecef0  b.ne 0x71038ecf00
71038ecef4  ldr x8,[x0]
71038ecef8  ldr x8,[x8, #0x20]
71038ecefc  b 0x71038ecf0c
71038ecf00  cbz x0,0x71038ecf10
71038ecf04  ldr x8,[x0]
71038ecf08  ldr x8,[x8, #0x28]
71038ecf0c  blr x8
71038ecf10  ldr x0,[sp, #0xfa0]
71038ecf14  add x8,sp,#0x430
71038ecf18  add x8,x8,#0xb50
71038ecf1c  cmp x8,x0
71038ecf20  b.ne 0x71038ecf30
71038ecf24  ldr x8,[x0]
71038ecf28  ldr x8,[x8, #0x20]
71038ecf2c  b 0x71038ecf3c
71038ecf30  cbz x0,0x71038ecf40
71038ecf34  ldr x8,[x0]
71038ecf38  ldr x8,[x8, #0x28]
71038ecf3c  blr x8
71038ecf40  ldr x0,[sp, #0xe80]
71038ecf44  add x8,sp,#0x430
71038ecf48  add x8,x8,#0xa30
71038ecf4c  cmp x8,x0
71038ecf50  b.ne 0x71038ecf60
71038ecf54  ldr x8,[x0]
71038ecf58  ldr x8,[x8, #0x20]
71038ecf5c  b 0x71038ecf6c
71038ecf60  cbz x0,0x71038ecf70
71038ecf64  ldr x8,[x0]
71038ecf68  ldr x8,[x8, #0x28]
71038ecf6c  blr x8
71038ecf70  ldr x0,[sp, #0xd60]
71038ecf74  add x8,sp,#0x430
71038ecf78  add x8,x8,#0x910
71038ecf7c  cmp x8,x0
71038ecf80  b.ne 0x71038ecf90
71038ecf84  ldr x8,[x0]
71038ecf88  ldr x8,[x8, #0x20]
71038ecf8c  b 0x71038ecf9c
71038ecf90  cbz x0,0x71038ecfa0
71038ecf94  ldr x8,[x0]
71038ecf98  ldr x8,[x8, #0x28]
71038ecf9c  blr x8
71038ecfa0  ldr x0,[sp, #0xc40]
71038ecfa4  add x8,sp,#0x430
71038ecfa8  add x8,x8,#0x7f0
71038ecfac  cmp x8,x0
71038ecfb0  b.ne 0x71038ecfc0
71038ecfb4  ldr x8,[x0]
71038ecfb8  ldr x8,[x8, #0x20]
71038ecfbc  b 0x71038ecfcc
71038ecfc0  cbz x0,0x71038ecfd0
71038ecfc4  ldr x8,[x0]
71038ecfc8  ldr x8,[x8, #0x28]
71038ecfcc  blr x8
71038ecfd0  ldr x0,[sp, #0xb20]
71038ecfd4  add x8,sp,#0x430
71038ecfd8  add x8,x8,#0x6d0
71038ecfdc  cmp x8,x0
71038ecfe0  b.ne 0x71038ecff0
71038ecfe4  ldr x8,[x0]
71038ecfe8  ldr x8,[x8, #0x20]
71038ecfec  b 0x71038ecffc
71038ecff0  cbz x0,0x71038ed000
71038ecff4  ldr x8,[x0]
71038ecff8  ldr x8,[x8, #0x28]
71038ecffc  blr x8
71038ed000  ldr x0,[sp, #0xa00]
71038ed004  add x8,sp,#0x430
71038ed008  add x8,x8,#0x5b0
71038ed00c  cmp x8,x0
71038ed010  b.ne 0x71038ed020
71038ed014  ldr x8,[x0]
71038ed018  ldr x8,[x8, #0x20]
71038ed01c  b 0x71038ed02c
71038ed020  cbz x0,0x71038ed030
71038ed024  ldr x8,[x0]
71038ed028  ldr x8,[x8, #0x28]
71038ed02c  blr x8
71038ed030  ldr x0,[sp, #0x8e0]
71038ed034  add x8,sp,#0x430
71038ed038  add x8,x8,#0x490
71038ed03c  cmp x8,x0
71038ed040  b.ne 0x71038ed050
71038ed044  ldr x8,[x0]
71038ed048  ldr x8,[x8, #0x20]
71038ed04c  b 0x71038ed05c
71038ed050  cbz x0,0x71038ed060
71038ed054  ldr x8,[x0]
71038ed058  ldr x8,[x8, #0x28]
71038ed05c  blr x8
71038ed060  ldr x0,[sp, #0x7c0]
71038ed064  add x8,sp,#0x430
71038ed068  add x8,x8,#0x370
71038ed06c  cmp x8,x0
71038ed070  b.ne 0x71038ed080
71038ed074  ldr x8,[x0]
71038ed078  ldr x8,[x8, #0x20]
71038ed07c  b 0x71038ed08c
71038ed080  cbz x0,0x71038ed090
71038ed084  ldr x8,[x0]
71038ed088  ldr x8,[x8, #0x28]
71038ed08c  blr x8
71038ed090  ldr x0,[sp, #0x6a0]
71038ed094  add x8,sp,#0x430
71038ed098  add x8,x8,#0x250
71038ed09c  cmp x8,x0
71038ed0a0  b.ne 0x71038ed0b0
71038ed0a4  ldr x8,[x0]
71038ed0a8  ldr x8,[x8, #0x20]
71038ed0ac  b 0x71038ed0bc
71038ed0b0  cbz x0,0x71038ed0c0
71038ed0b4  ldr x8,[x0]
71038ed0b8  ldr x8,[x8, #0x28]
71038ed0bc  blr x8
71038ed0c0  ldr x0,[sp, #0x580]
71038ed0c4  add x8,sp,#0x430
71038ed0c8  add x8,x8,#0x130
71038ed0cc  cmp x8,x0
71038ed0d0  b.ne 0x71038ed0e0
71038ed0d4  ldr x8,[x0]
71038ed0d8  ldr x8,[x8, #0x20]
71038ed0dc  b 0x71038ed0ec
71038ed0e0  cbz x0,0x71038ed0f0
71038ed0e4  ldr x8,[x0]
71038ed0e8  ldr x8,[x8, #0x28]
71038ed0ec  blr x8
71038ed0f0  ldr x0,[sp, #0x460]
71038ed0f4  add x8,sp,#0x430
71038ed0f8  add x8,x8,#0x10
71038ed0fc  cmp x8,x0
71038ed100  b.ne 0x71038ed110
71038ed104  ldr x8,[x0]
71038ed108  ldr x8,[x8, #0x20]
71038ed10c  b 0x71038ed11c
71038ed110  cbz x0,0x71038ed120
71038ed114  ldr x8,[x0]
71038ed118  ldr x8,[x8, #0x28]
71038ed11c  blr x8
71038ed120  mov x0,x19
71038ed124  bl 0x71039c19f0
71038ed128  bl 0x71037b2bc0
71038ed12c  bl 0x71037b2bc0
71038ed130  bl 0x71037b2bc0
