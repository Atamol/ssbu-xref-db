// addr:      71001ea210
// offset:    0x1ea210
// name:      FUN_71001ea210
// mangled:   
// size:      6988

71001ea210  stp x28,x27,[sp, #-0x60]!
71001ea214  stp x26,x25,[sp, #0x10]
71001ea218  stp x24,x23,[sp, #0x20]
71001ea21c  stp x22,x21,[sp, #0x30]
71001ea220  stp x20,x19,[sp, #0x40]
71001ea224  stp x29,x30,[sp, #0x50]
71001ea228  add x29,sp,#0x50
71001ea22c  sub sp,sp,#0x340
71001ea230  adrp x8,0x71052a4000
71001ea234  ldr x8,[x8, #0xda8]
71001ea238  adrp x9,0x71052a4000
71001ea23c  ldrb w8,[x8]
71001ea240  ldr x9,[x9, #0xdb0]
71001ea244  mov x28,x0
71001ea248  add x20,x9,#0x28
71001ea24c  cbz w8,0x71001ea290
71001ea250  adrp x8,0x71052a4000
71001ea254  ldr x8,[x8, #0xdb8]
71001ea258  ldr x0,[x8]
71001ea25c  bl 0x7101717960
71001ea260  ldr w8,[x0]
71001ea264  cbz w8,0x71001ea290
71001ea268  adrp x9,0x71052a4000
71001ea26c  ldr x9,[x9, #0xdb0]
71001ea270  ldr x10,[x9, #0xa0]
71001ea274  ldp x9,x10,[x10]
71001ea278  sub x10,x10,x9
71001ea27c  asr x10,x10,#0x3
71001ea280  cmp x10,x8
71001ea284  b.ls 0x71001ea2a8
71001ea288  ldr x8,[x9, x8, LSL #0x3]
71001ea28c  add x20,x8,#0x20
71001ea290  ldr x8,[x20]
71001ea294  cbz x8,0x71001ea2c0
71001ea298  ldr x8,[x8, #0x10]
71001ea29c  cbz x8,0x71001ea2c0
71001ea2a0  ldr x21,[x8, #0x10]
71001ea2a4  b 0x71001ea2c4
71001ea2a8  adrp x0,0x71042c4000
71001ea2ac  add x0,x0,#0x35f
71001ea2b0  mov w1,#0x47
71001ea2b4  orr w2,wzr,#0xe0000003
71001ea2b8  mov w3,wzr
71001ea2bc  bl 0x71001b1300
71001ea2c0  mov x21,xzr
71001ea2c4  ldr x8,[x21, #0x78]!
71001ea2c8  ldr x8,[x8, #0x10]
71001ea2cc  mov x0,x21
71001ea2d0  blr x8
71001ea2d4  adrp x8,0x71052a4000
71001ea2d8  ldr x8,[x8, #0xda8]
71001ea2dc  adrp x9,0x71052a4000
71001ea2e0  ldrb w8,[x8]
71001ea2e4  ldr x9,[x9, #0xdb0]
71001ea2e8  str x21,[sp, #0x18]
71001ea2ec  add x20,x9,#0x18
71001ea2f0  cbz w8,0x71001ea334
71001ea2f4  adrp x8,0x71052a4000
71001ea2f8  ldr x8,[x8, #0xdb8]
71001ea2fc  ldr x0,[x8]
71001ea300  bl 0x7101717960
71001ea304  ldr w8,[x0]
71001ea308  cbz w8,0x71001ea334
71001ea30c  adrp x9,0x71052a4000
71001ea310  ldr x9,[x9, #0xdb0]
71001ea314  ldr x10,[x9, #0xa0]
71001ea318  ldp x9,x10,[x10]
71001ea31c  sub x10,x10,x9
71001ea320  asr x10,x10,#0x3
71001ea324  cmp x10,x8
71001ea328  b.ls 0x71001ebd44
71001ea32c  ldr x8,[x9, x8, LSL #0x3]
71001ea330  add x20,x8,#0x10
71001ea334  ldr x8,[x20]
71001ea338  ldr x8,[x8, #0x10]
71001ea33c  ldrb w8,[x8, #0x179]
71001ea340  cbz w8,0x71001ebd14
71001ea344  ldr x8,[x28, #0x48]
71001ea348  cbz x8,0x71001ebd14
71001ea34c  add x8,x28,#0x58
71001ea350  add x9,sp,#0x138
71001ea354  sub x20,x29,#0x90
71001ea358  str x8,[sp, #0x20]
71001ea35c  add x8,x9,#0x8
71001ea360  str x8,[sp, #0x128]
71001ea364  add x8,x9,#0x10
71001ea368  str x8,[sp, #0xc8]
71001ea36c  add x8,x9,#0x38
71001ea370  str x8,[sp, #0x120]
71001ea374  add x8,x9,#0x40
71001ea378  str x8,[sp, #0xd0]
71001ea37c  add x8,x9,#0x60
71001ea380  str x8,[sp, #0xc0]
71001ea384  add x8,x20,#0x8
71001ea388  str x8,[sp, #0x78]
71001ea38c  add x8,sp,#0x278
71001ea390  add x10,x8,#0x20
71001ea394  str x10,[sp, #0x108]
71001ea398  add x10,x8,#0x18
71001ea39c  str x10,[sp, #0x100]
71001ea3a0  add x10,x8,#0x38
71001ea3a4  str x10,[sp, #0xf8]
71001ea3a8  add x10,x8,#0x30
71001ea3ac  str x10,[sp, #0x130]
71001ea3b0  add x10,x8,#0x50
71001ea3b4  add x8,x8,#0x48
71001ea3b8  stp x8,x10,[sp, #0xe8]
71001ea3bc  add x10,sp,#0x208
71001ea3c0  add x8,x10,#0x20
71001ea3c4  str x8,[sp, #0x70]
71001ea3c8  add x8,x10,#0x18
71001ea3cc  str x8,[sp, #0x68]
71001ea3d0  add x8,x10,#0x38
71001ea3d4  str x8,[sp, #0x60]
71001ea3d8  add x8,x10,#0x30
71001ea3dc  str x8,[sp, #0x58]
71001ea3e0  add x8,x10,#0x50
71001ea3e4  str x8,[sp, #0x50]
71001ea3e8  add x8,x10,#0x48
71001ea3ec  str x8,[sp, #0x48]
71001ea3f0  add x8,sp,#0x1e0
71001ea3f4  add x8,x8,#0x8
71001ea3f8  str x8,[sp, #0x28]
71001ea3fc  add x8,x10,#0x8
71001ea400  add x10,x9,#0x30
71001ea404  str x8,[sp, #0xb8]
71001ea408  add x8,x9,#0x20
71001ea40c  str x8,[sp, #0xb0]
71001ea410  add x8,x9,#0x18
71001ea414  str x8,[sp, #0xa0]
71001ea418  adrp x8,0x71052a6000
71001ea41c  ldr x8,[x8, #0xfb0]
71001ea420  str x10,[sp, #0x98]
71001ea424  adrp x10,0x71052a4000
71001ea428  add x11,x9,#0x50
71001ea42c  add x8,x8,#0x10
71001ea430  ldr x10,[x10, #0xd80]
71001ea434  str x11,[sp, #0xa8]
71001ea438  adrp x11,0x71052a6000
71001ea43c  ldr x11,[x11, #0xe70]
71001ea440  add x12,x9,#0x48
71001ea444  str x12,[sp, #0x90]
71001ea448  add x12,x9,#0x28
71001ea44c  add x9,x9,#0x58
71001ea450  adrp x24,0x710449c000
71001ea454  add x24,x24,#0xe5b
71001ea458  adrp x27,0x710449c000
71001ea45c  add x27,x27,#0xe33
71001ea460  stp x9,x12,[sp, #0x8]
71001ea464  add x9,x28,#0x150
71001ea468  str x9,[sp]
71001ea46c  str x28,[sp, #0x118]
71001ea470  str x8,[sp, #0x40]
71001ea474  add x8,x10,#0x10
71001ea478  add x26,sp,#0x1c8
71001ea47c  str x8,[sp, #0x38]
71001ea480  add x8,x11,#0x10
71001ea484  str x8,[sp, #0x30]
71001ea488  b 0x71001ea4d4
71001ea48c  mov x0,x19
71001ea490  bl 0x71001f2180
71001ea494  ldr x0,[x21, #0x18]
71001ea498  bl 0x71001bef20
71001ea49c  cbnz w0,0x71001ea9e0
71001ea4a0  b 0x71001ea9f0
71001ea4a4  mov w22,wzr
71001ea4a8  bl 0x71001e9b80
71001ea4ac  cmp w22,w0
71001ea4b0  b.cc 0x71001ea520
71001ea4b4  b 0x71001ebd14
71001ea4b8  add x0,sp,#0x208
71001ea4bc  bl 0x71001f2180
71001ea4c0  ldr x0,[sp, #0x210]
71001ea4c4  bl 0x71001beb30
71001ea4c8  tst w0,#0xffff
71001ea4cc  b.ne 0x71001eab9c
71001ea4d0  b 0x71001eacd8
71001ea4d4  ldrb w8,[x28, #0x192]
71001ea4d8  cbnz w8,0x71001ea528
71001ea4dc  ldr x21,[x28, #0x60]
71001ea4e0  ldr x23,[sp, #0x20]
71001ea4e4  cmp x23,x21
71001ea4e8  b.eq 0x71001ea4a4
71001ea4ec  mov w22,wzr
71001ea4f0  add x0,x21,#0x18
71001ea4f4  mov x1,x24
71001ea4f8  mov x2,xzr
71001ea4fc  bl 0x71001f2ba0
71001ea500  ldr x21,[x21, #0x8]
71001ea504  ubfx w8,w0,#0x1,#0x1
71001ea508  add w22,w8,w22
71001ea50c  cmp x23,x21
71001ea510  b.ne 0x71001ea4f0
71001ea514  bl 0x71001e9b80
71001ea518  cmp w22,w0
71001ea51c  b.cs 0x71001ebd14
71001ea520  ldr x8,[x28, #0x98]
71001ea524  cbnz x8,0x71001ebd14
71001ea528  ldr x8,[x28, #0x40]
71001ea52c  add x0,x8,#0x10
71001ea530  adrp x1,0x710449c000
71001ea534  add x1,x1,#0xe48
71001ea538  mov x2,xzr
71001ea53c  str x8,[sp, #0x80]
71001ea540  str x0,[sp, #0x110]
71001ea544  bl 0x71001f2ba0
71001ea548  cmp x0,#0x0
71001ea54c  cset w8,eq
71001ea550  str xzr,[sp, #0x1d8]
71001ea554  stp x26,x26,[sp, #0x1c8]
71001ea558  adrp x9,0x71052a4000
71001ea55c  stp x0,x8,[sp, #0xd8]
71001ea560  adrp x8,0x71052a4000
71001ea564  ldr w22,[x28, #0x28]
71001ea568  ldr x8,[x8, #0xda8]
71001ea56c  ldrb w8,[x8]
71001ea570  ldr x9,[x9, #0xdb0]
71001ea574  add x25,x9,#0x18
71001ea578  cbz w8,0x71001ea5bc
71001ea57c  adrp x8,0x71052a4000
71001ea580  ldr x8,[x8, #0xdb8]
71001ea584  ldr x0,[x8]
71001ea588  bl 0x7101717960
71001ea58c  ldr w8,[x0]
71001ea590  cbz w8,0x71001ea5bc
71001ea594  adrp x9,0x71052a4000
71001ea598  ldr x9,[x9, #0xdb0]
71001ea59c  ldr x10,[x9, #0xa0]
71001ea5a0  ldp x9,x10,[x10]
71001ea5a4  sub x10,x10,x9
71001ea5a8  asr x10,x10,#0x3
71001ea5ac  cmp x10,x8
71001ea5b0  b.ls 0x71001ea5d4
71001ea5b4  ldr x8,[x9, x8, LSL #0x3]
71001ea5b8  add x25,x8,#0x10
71001ea5bc  ldr x8,[x25]
71001ea5c0  cbz x8,0x71001ea5ec
71001ea5c4  ldr x8,[x8, #0x10]
71001ea5c8  cbz x8,0x71001ea5ec
71001ea5cc  ldr x25,[x8, #0xe8]
71001ea5d0  b 0x71001ea5f0
71001ea5d4  orr w2,wzr,#0xe0000003
71001ea5d8  adrp x0,0x71042c4000
71001ea5dc  add x0,x0,#0x35f
71001ea5e0  mov w1,#0x47
71001ea5e4  mov w3,wzr
71001ea5e8  bl 0x71001b1300
71001ea5ec  mov x25,xzr
71001ea5f0  ldp x19,x21,[sp, #0x38]
71001ea5f4  ldr x8,[sp, #0xc8]
71001ea5f8  mov w28,#0x10
71001ea5fc  stp x21,x19,[sp, #0x138]
71001ea600  strb wzr,[sp, #0x148]
71001ea604  stp x8,x28,[sp, #0x158]
71001ea608  ldr x24,[sp, #0x128]
71001ea60c  mov x0,x24
71001ea610  ldr x1,[x25, #0x168]
71001ea614  mov x23,#-0x1
71001ea618  mov x2,x23
71001ea61c  bl 0x71001b47e0
71001ea620  ldrh w8,[x25, #0x178]
71001ea624  strh w8,[sp, #0x168]
71001ea628  ldr x8,[sp, #0xd0]
71001ea62c  str x19,[sp, #0x170]
71001ea630  stp x8,x28,[sp, #0x188]
71001ea634  strb wzr,[sp, #0x178]
71001ea638  ldr x26,[sp, #0x120]
71001ea63c  mov x0,x26
71001ea640  ldr x1,[x25, #0x198]
71001ea644  mov x2,x23
71001ea648  bl 0x71001b47e0
71001ea64c  ldp x8,x9,[x25, #0x1a8]
71001ea650  ldrb w10,[x25, #0x1b8]
71001ea654  ldr x11,[sp, #0xc0]
71001ea658  strb w10,[x11, #0x10]
71001ea65c  sub x0,x29,#0x90
71001ea660  stp x8,x9,[x11]
71001ea664  ldr x8,[sp, #0x78]
71001ea668  ldr x1,[sp, #0x188]
71001ea66c  mov x2,x23
71001ea670  stur x19,[x29, #-0x90]
71001ea674  stp x8,x28,[x29, #-0x78]
71001ea678  sturb wzr,[x29, #-0x88]
71001ea67c  bl 0x71001b47e0
71001ea680  mov x0,x26
71001ea684  str x21,[sp, #0x138]
71001ea688  str x19,[sp, #0x170]
71001ea68c  bl 0x71001b4910
71001ea690  mov x0,x24
71001ea694  str x19,[sp, #0x140]
71001ea698  bl 0x71001b4910
71001ea69c  ldr x19,[sp, #0x110]
71001ea6a0  mov x0,x19
71001ea6a4  adrp x1,0x710449c000
71001ea6a8  add x1,x1,#0xe48
71001ea6ac  mov x2,xzr
71001ea6b0  bl 0x71001f2ba0
71001ea6b4  sub x28,x29,#0xa8
71001ea6b8  stp x28,x28,[x29, #-0xa8]
71001ea6bc  adrp x8,0x71052a4000
71001ea6c0  ldr x8,[x8, #0xda8]
71001ea6c4  adrp x9,0x71052a4000
71001ea6c8  ldrb w8,[x8]
71001ea6cc  ldr x9,[x9, #0xdb0]
71001ea6d0  stur xzr,[x29, #-0x98]
71001ea6d4  str x0,[sp, #0x88]
71001ea6d8  add x25,x9,#0x18
71001ea6dc  cbz w8,0x71001ea738
71001ea6e0  adrp x8,0x71052a4000
71001ea6e4  ldr x8,[x8, #0xdb8]
71001ea6e8  ldr x0,[x8]
71001ea6ec  bl 0x7101717960
71001ea6f0  ldr w8,[x0]
71001ea6f4  mov w21,#0xffffffff
71001ea6f8  cbz w8,0x71001ea750
71001ea6fc  adrp x9,0x71052a4000
71001ea700  ldr x9,[x9, #0xdb0]
71001ea704  ldr x10,[x9, #0xa0]
71001ea708  ldp x9,x10,[x10]
71001ea70c  sub x10,x10,x9
71001ea710  asr x10,x10,#0x3
71001ea714  cmp x10,x8
71001ea718  adrp x24,0x710449c000
71001ea71c  add x24,x24,#0xe5b
71001ea720  b.ls 0x71001ea768
71001ea724  ldr x8,[x9, x8, LSL #0x3]
71001ea728  add x25,x8,#0x10
71001ea72c  ldr x8,[x25]
71001ea730  cbnz x8,0x71001ea760
71001ea734  b 0x71001ea784
71001ea738  adrp x24,0x710449c000
71001ea73c  add x24,x24,#0xe5b
71001ea740  mov w21,#0xffffffff
71001ea744  ldr x8,[x25]
71001ea748  cbnz x8,0x71001ea760
71001ea74c  b 0x71001ea784
71001ea750  adrp x24,0x710449c000
71001ea754  add x24,x24,#0xe5b
71001ea758  ldr x8,[x25]
71001ea75c  cbz x8,0x71001ea784
71001ea760  ldr x8,[x8, #0x10]
71001ea764  b 0x71001ea784
71001ea768  orr w2,wzr,#0xe0000003
71001ea76c  adrp x0,0x71042c4000
71001ea770  add x0,x0,#0x35f
71001ea774  mov w1,#0x47
71001ea778  mov w3,wzr
71001ea77c  bl 0x71001b1300
71001ea780  mov x8,xzr
71001ea784  add x0,x8,#0x80
71001ea788  sub x1,x29,#0xa8
71001ea78c  bl 0x71001efaf0
71001ea790  ldur x26,[x29, #-0xa0]
71001ea794  cmp x28,x26
71001ea798  b.eq 0x71001ea824
71001ea79c  add x25,x26,#0x10
71001ea7a0  mov x0,x25
71001ea7a4  mov x1,x27
71001ea7a8  mov x2,xzr
71001ea7ac  bl 0x71001f2ba0
71001ea7b0  cmp w22,w0
71001ea7b4  b.eq 0x71001ea818
71001ea7b8  mov x0,x25
71001ea7bc  mov x1,x27
71001ea7c0  mov x2,xzr
71001ea7c4  bl 0x71001f2ba0
71001ea7c8  cbz w0,0x71001ea818
71001ea7cc  ldp x8,x27,[x26]
71001ea7d0  str x27,[x8, #0x8]
71001ea7d4  ldr x9,[x26, #0x8]
71001ea7d8  str x8,[x9]
71001ea7dc  ldur x8,[x29, #-0x98]
71001ea7e0  sub x8,x8,#0x1
71001ea7e4  stur x8,[x29, #-0x98]
71001ea7e8  ldr x8,[x26, #0x10]
71001ea7ec  ldr x8,[x8]
71001ea7f0  mov x0,x25
71001ea7f4  blr x8
71001ea7f8  mov x0,x26
71001ea7fc  bl 0x71001b1870
71001ea800  mov x26,x27
71001ea804  adrp x27,0x710449c000
71001ea808  add x27,x27,#0xe33
71001ea80c  cmp x28,x26
71001ea810  b.ne 0x71001ea79c
71001ea814  b 0x71001ea824
71001ea818  ldr x26,[x26, #0x8]
71001ea81c  cmp x28,x26
71001ea820  b.ne 0x71001ea79c
71001ea824  ldr x8,[sp, #0x30]
71001ea828  str x8,[sp, #0x278]
71001ea82c  ldr x8,[sp, #0x108]
71001ea830  str x8,[sp, #0x290]
71001ea834  ldr x8,[sp, #0xf8]
71001ea838  str x8,[sp, #0x2a8]
71001ea83c  ldr x8,[sp, #0xf0]
71001ea840  str x8,[sp, #0x2c0]
71001ea844  mov w8,#0x1
71001ea848  mov w0,#0x90
71001ea84c  str xzr,[sp, #0x298]
71001ea850  str xzr,[sp, #0x2a0]
71001ea854  str xzr,[sp, #0x2b0]
71001ea858  str xzr,[sp, #0x2b8]
71001ea85c  str xzr,[sp, #0x2c8]
71001ea860  str xzr,[sp, #0x2d0]
71001ea864  str xzr,[sp, #0x2d8]
71001ea868  strh w8,[sp, #0x2e0]
71001ea86c  strb w8,[sp, #0x2e2]
71001ea870  bl 0x71001af850
71001ea874  mov x25,x0
71001ea878  cbz x0,0x71001ea884
71001ea87c  mov x0,x25
71001ea880  bl 0x71001beb40
71001ea884  ldrb w8,[sp, #0x2e0]
71001ea888  adrp x23,0x710449c000
71001ea88c  add x23,x23,#0xe68
71001ea890  str x25,[sp, #0x280]
71001ea894  cbnz w8,0x71001ea8a0
71001ea898  add x0,sp,#0x278
71001ea89c  bl 0x71001f2180
71001ea8a0  mov w9,#0x1
71001ea8a4  str w9,[sp, #0x288]
71001ea8a8  strb wzr,[sp, #0x2e1]
71001ea8ac  adrp x8,0x71052a6000
71001ea8b0  ldr x8,[x8, #0xe70]
71001ea8b4  str xzr,[sp, #0x228]
71001ea8b8  str xzr,[sp, #0x230]
71001ea8bc  add x8,x8,#0x10
71001ea8c0  str x8,[sp, #0x208]
71001ea8c4  ldr x8,[sp, #0x70]
71001ea8c8  str x8,[sp, #0x220]
71001ea8cc  ldr x8,[sp, #0x60]
71001ea8d0  str x8,[sp, #0x238]
71001ea8d4  ldr x8,[sp, #0x50]
71001ea8d8  mov w0,#0x90
71001ea8dc  str xzr,[sp, #0x240]
71001ea8e0  str xzr,[sp, #0x248]
71001ea8e4  str xzr,[sp, #0x258]
71001ea8e8  str xzr,[sp, #0x260]
71001ea8ec  str xzr,[sp, #0x268]
71001ea8f0  strh w9,[sp, #0x270]
71001ea8f4  strb w9,[sp, #0x272]
71001ea8f8  str x8,[sp, #0x250]
71001ea8fc  bl 0x71001af850
71001ea900  mov x25,x0
71001ea904  cbz x0,0x71001ea910
71001ea908  mov x0,x25
71001ea90c  bl 0x71001beb40
71001ea910  ldrb w8,[sp, #0x270]
71001ea914  str x25,[sp, #0x210]
71001ea918  cbnz w8,0x71001ea924
71001ea91c  add x0,sp,#0x208
71001ea920  bl 0x71001f2180
71001ea924  ldur x22,[x29, #-0xa0]
71001ea928  mov w8,#0x1
71001ea92c  str w8,[sp, #0x218]
71001ea930  strb wzr,[sp, #0x271]
71001ea934  cmp x28,x22
71001ea938  b.eq 0x71001ea9a4
71001ea93c  add x25,x22,#0x10
71001ea940  mov x0,x25
71001ea944  mov x1,x23
71001ea948  mov x2,x21
71001ea94c  bl 0x71001f2ba0
71001ea950  add w8,w0,#0x1
71001ea954  cmp w8,#0x1
71001ea958  b.hi 0x71001ea998
71001ea95c  mov x0,x25
71001ea960  mov x1,x24
71001ea964  mov x2,xzr
71001ea968  bl 0x71001f2ba0
71001ea96c  tbnz w0,#0x2,0x71001ea98c
71001ea970  mov x0,x25
71001ea974  mov x1,x24
71001ea978  mov x2,xzr
71001ea97c  bl 0x71001f2ba0
71001ea980  tbnz w0,#0x1,0x71001ea998
71001ea984  add x0,sp,#0x208
71001ea988  b 0x71001ea990
71001ea98c  add x0,sp,#0x278
71001ea990  mov x1,x25
71001ea994  bl 0x71001f1f40
71001ea998  ldr x22,[x22, #0x8]
71001ea99c  cmp x28,x22
71001ea9a0  b.ne 0x71001ea93c
71001ea9a4  ldrb w8,[sp, #0x2e0]
71001ea9a8  cbz w8,0x71001eab64
71001ea9ac  ldr x0,[sp, #0x280]
71001ea9b0  bl 0x71001beb30
71001ea9b4  tst w0,#0xffff
71001ea9b8  b.eq 0x71001eab7c
71001ea9bc  ldr x8,[sp, #0x88]
71001ea9c0  cbz x8,0x71001eab84
71001ea9c4  ldr x21,[sp, #0x80]
71001ea9c8  strb wzr,[sp, #0x138]
71001ea9cc  ldrb w8,[x21, #0x78]
71001ea9d0  cbz w8,0x71001ea48c
71001ea9d4  ldr x0,[x21, #0x18]
71001ea9d8  bl 0x71001bef20
71001ea9dc  cbz w0,0x71001ea9f0
71001ea9e0  ldr x0,[x21, #0x18]
71001ea9e4  add x1,sp,#0x138
71001ea9e8  mov w2,#0x80
71001ea9ec  bl 0x71001bef30
71001ea9f0  adrp x8,0x71052a4000
71001ea9f4  ldr x8,[x8, #0xd80]
71001ea9f8  strb wzr,[sp, #0x1e8]
71001ea9fc  add x21,x8,#0x10
71001eaa00  ldr x8,[sp, #0x28]
71001eaa04  str x8,[sp, #0x1f8]
71001eaa08  mov w8,#0x10
71001eaa0c  add x0,sp,#0x1e0
71001eaa10  add x1,sp,#0x138
71001eaa14  mov x2,#-0x1
71001eaa18  str x21,[sp, #0x1e0]
71001eaa1c  str x8,[sp, #0x200]
71001eaa20  bl 0x71001b47e0
71001eaa24  ldr x0,[sp, #0x1f8]
71001eaa28  ldur x1,[x29, #-0x78]
71001eaa2c  bl 0x71001b4e00
71001eaa30  mov w22,w0
71001eaa34  add x0,sp,#0x1e0
71001eaa38  str x21,[sp, #0x1e0]
71001eaa3c  bl 0x71001b4910
71001eaa40  mov w0,#0x80
71001eaa44  bl 0x71001b1820
71001eaa48  str xzr,[x0]
71001eaa4c  adrp x8,0x71052a6000
71001eaa50  ldr x8,[x8, #0xe70]
71001eaa54  add x8,x8,#0x10
71001eaa58  mov x27,x0
71001eaa5c  mov x25,x0
71001eaa60  str x8,[x27, #0x10]!
71001eaa64  mov x8,x0
71001eaa68  str xzr,[x8, #0x30]!
71001eaa6c  str x8,[x0, #0x28]
71001eaa70  mov x8,x0
71001eaa74  str xzr,[x8, #0x48]!
71001eaa78  stp xzr,x8,[x0, #0x38]
71001eaa7c  mov x8,x0
71001eaa80  str xzr,[x8, #0x60]!
71001eaa84  stp xzr,x8,[x0, #0x50]
71001eaa88  mov w8,#0x1
71001eaa8c  stp xzr,xzr,[x0, #0x68]
71001eaa90  strh w8,[x0, #0x78]
71001eaa94  strb wzr,[x0, #0x7a]
71001eaa98  mov w0,#0x90
71001eaa9c  bl 0x71001af850
71001eaaa0  mov x26,x0
71001eaaa4  cbz x0,0x71001eaab0
71001eaaa8  mov x0,x26
71001eaaac  bl 0x71001beb40
71001eaab0  add x1,sp,#0x278
71001eaab4  mov x0,x27
71001eaab8  str x26,[x25, #0x18]
71001eaabc  bl 0x71001f1f40
71001eaac0  add x8,sp,#0x1c8
71001eaac4  str x8,[x25, #0x8]
71001eaac8  ldr x8,[sp, #0x1c8]
71001eaacc  str x8,[x25]
71001eaad0  str x25,[x8, #0x8]
71001eaad4  ldr x8,[sp, #0x1d8]
71001eaad8  add x8,x8,#0x1
71001eaadc  str x25,[sp, #0x1c8]
71001eaae0  str x8,[sp, #0x1d8]
71001eaae4  tbz w22,#0x0,0x71001ead7c
71001eaae8  mov w0,#0x80
71001eaaec  bl 0x71001b1820
71001eaaf0  str xzr,[x0]
71001eaaf4  adrp x8,0x71052a6000
71001eaaf8  ldr x8,[x8, #0xe70]
71001eaafc  add x8,x8,#0x10
71001eab00  mov x25,x0
71001eab04  mov x26,x0
71001eab08  str x8,[x25, #0x10]!
71001eab0c  mov x8,x0
71001eab10  str xzr,[x8, #0x30]!
71001eab14  str x8,[x0, #0x28]
71001eab18  mov x8,x0
71001eab1c  str xzr,[x8, #0x48]!
71001eab20  stp xzr,x8,[x0, #0x38]
71001eab24  mov x8,x0
71001eab28  str xzr,[x8, #0x60]!
71001eab2c  stp xzr,x8,[x0, #0x50]
71001eab30  mov w8,#0x1
71001eab34  stp xzr,xzr,[x0, #0x68]
71001eab38  strh w8,[x0, #0x78]
71001eab3c  strb wzr,[x0, #0x7a]
71001eab40  mov w0,#0x90
71001eab44  bl 0x71001af850
71001eab48  mov x27,x0
71001eab4c  cbz x0,0x71001eab58
71001eab50  mov x0,x27
71001eab54  bl 0x71001beb40
71001eab58  add x1,sp,#0x208
71001eab5c  str x27,[x26, #0x18]
71001eab60  b 0x71001ead50
71001eab64  add x0,sp,#0x278
71001eab68  bl 0x71001f2180
71001eab6c  ldr x0,[sp, #0x280]
71001eab70  bl 0x71001beb30
71001eab74  tst w0,#0xffff
71001eab78  b.ne 0x71001ea9bc
71001eab7c  mov w21,wzr
71001eab80  b 0x71001ead88
71001eab84  ldrb w8,[sp, #0x270]
71001eab88  cbz w8,0x71001ea4b8
71001eab8c  ldr x0,[sp, #0x210]
71001eab90  bl 0x71001beb30
71001eab94  tst w0,#0xffff
71001eab98  b.eq 0x71001eacd8
71001eab9c  ldrb w8,[sp, #0x270]
71001eaba0  strb wzr,[sp, #0x138]
71001eaba4  cbnz w8,0x71001eabb0
71001eaba8  add x0,sp,#0x208
71001eabac  bl 0x71001f2180
71001eabb0  ldr x0,[sp, #0x210]
71001eabb4  bl 0x71001bef20
71001eabb8  cbz w0,0x71001eabcc
71001eabbc  ldr x0,[sp, #0x210]
71001eabc0  add x1,sp,#0x138
71001eabc4  mov w2,#0x80
71001eabc8  bl 0x71001bef30
71001eabcc  adrp x8,0x71052a4000
71001eabd0  ldr x8,[x8, #0xd80]
71001eabd4  strb wzr,[sp, #0x1e8]
71001eabd8  add x21,x8,#0x10
71001eabdc  ldr x8,[sp, #0x28]
71001eabe0  mov x23,#-0x1
71001eabe4  mov w25,#0x10
71001eabe8  add x0,sp,#0x1e0
71001eabec  add x1,sp,#0x138
71001eabf0  mov x2,x23
71001eabf4  str x21,[sp, #0x1e0]
71001eabf8  stp x8,x25,[sp, #0x1f8]
71001eabfc  bl 0x71001b47e0
71001eac00  ldr x22,[sp, #0x128]
71001eac04  adrp x26,0x710449c000
71001eac08  add x26,x26,#0xe7b
71001eac0c  add x0,sp,#0x138
71001eac10  mov x1,x26
71001eac14  mov x2,x23
71001eac18  str x21,[sp, #0x138]
71001eac1c  strb wzr,[sp, #0x140]
71001eac20  stp x22,x25,[sp, #0x150]
71001eac24  bl 0x71001b47e0
71001eac28  ldr x27,[sp, #0x130]
71001eac2c  add x1,sp,#0x138
71001eac30  mov x0,x27
71001eac34  bl 0x710021bff0
71001eac38  add x0,sp,#0x138
71001eac3c  str x21,[sp, #0x138]
71001eac40  bl 0x71001b4910
71001eac44  add x0,sp,#0x138
71001eac48  mov x1,x26
71001eac4c  mov x2,x23
71001eac50  str x21,[sp, #0x138]
71001eac54  stp x22,x25,[sp, #0x150]
71001eac58  strb wzr,[sp, #0x140]
71001eac5c  bl 0x71001b47e0
71001eac60  add x8,sp,#0x138
71001eac64  add x1,sp,#0x138
71001eac68  sub x3,x29,#0x60
71001eac6c  sub x4,x29,#0x68
71001eac70  mov x0,x27
71001eac74  stur x8,[x29, #-0x60]
71001eac78  adrp x2,0x710449d000
71001eac7c  add x2,x2,#0x8aa
71001eac80  bl 0x710021c110
71001eac84  add x0,x0,#0x48
71001eac88  add x1,sp,#0x1e0
71001eac8c  bl 0x71001b2f70
71001eac90  add x0,sp,#0x138
71001eac94  str x21,[sp, #0x138]
71001eac98  bl 0x71001b4910
71001eac9c  add x0,sp,#0x1e0
71001eaca0  str x21,[sp, #0x1e0]
71001eaca4  bl 0x71001b4910
71001eaca8  ldrb w8,[sp, #0x270]
71001eacac  cbnz w8,0x71001eacb8
71001eacb0  add x0,sp,#0x208
71001eacb4  bl 0x71001f2180
71001eacb8  ldr x0,[sp, #0x210]
71001eacbc  bl 0x71001beb30
71001eacc0  and x2,x0,#0xffff
71001eacc4  add x8,sp,#0x138
71001eacc8  add x0,sp,#0x278
71001eaccc  adrp x1,0x710449c000
71001eacd0  add x1,x1,#0xe81
71001eacd4  bl 0x71001f2a80
71001eacd8  mov w0,#0x80
71001eacdc  bl 0x71001b1820
71001eace0  str xzr,[x0]
71001eace4  adrp x8,0x71052a6000
71001eace8  ldr x8,[x8, #0xe70]
71001eacec  add x8,x8,#0x10
71001eacf0  mov x25,x0
71001eacf4  mov x26,x0
71001eacf8  str x8,[x25, #0x10]!
71001eacfc  mov x8,x0
71001ead00  str xzr,[x8, #0x30]!
71001ead04  str x8,[x0, #0x28]
71001ead08  mov x8,x0
71001ead0c  str xzr,[x8, #0x48]!
71001ead10  stp xzr,x8,[x0, #0x38]
71001ead14  mov x8,x0
71001ead18  str xzr,[x8, #0x60]!
71001ead1c  stp xzr,x8,[x0, #0x50]
71001ead20  mov w8,#0x1
71001ead24  stp xzr,xzr,[x0, #0x68]
71001ead28  strh w8,[x0, #0x78]
71001ead2c  strb wzr,[x0, #0x7a]
71001ead30  mov w0,#0x90
71001ead34  bl 0x71001af850
71001ead38  mov x27,x0
71001ead3c  cbz x0,0x71001ead48
71001ead40  mov x0,x27
71001ead44  bl 0x71001beb40
71001ead48  str x27,[x26, #0x18]
71001ead4c  add x1,sp,#0x278
71001ead50  mov x0,x25
71001ead54  bl 0x71001f1f40
71001ead58  add x8,sp,#0x1c8
71001ead5c  str x8,[x26, #0x8]
71001ead60  ldr x8,[sp, #0x1c8]
71001ead64  str x8,[x26]
71001ead68  str x26,[x8, #0x8]
71001ead6c  ldr x8,[sp, #0x1d8]
71001ead70  add x8,x8,#0x1
71001ead74  str x26,[sp, #0x1c8]
71001ead78  str x8,[sp, #0x1d8]
71001ead7c  mov w21,#0x1
71001ead80  adrp x27,0x710449c000
71001ead84  add x27,x27,#0xe33
71001ead88  adrp x8,0x71052a6000
71001ead8c  ldr x8,[x8, #0xe70]
71001ead90  add x8,x8,#0x10
71001ead94  str x8,[sp, #0x208]
71001ead98  ldr x8,[sp, #0x268]
71001ead9c  cbz x8,0x71001eadb0
71001eada0  sub x0,x8,#0x4
71001eada4  bl 0x71001b1870
71001eada8  str xzr,[sp, #0x268]
71001eadac  strb wzr,[sp, #0x271]
71001eadb0  ldr x0,[sp, #0x210]
71001eadb4  add x26,sp,#0x1c8
71001eadb8  cbz x0,0x71001eadc8
71001eadbc  ldr x8,[x0]
71001eadc0  ldr x8,[x8, #0x8]
71001eadc4  blr x8
71001eadc8  ldr x1,[sp, #0x258]
71001eadcc  ldr x0,[sp, #0x48]
71001eadd0  bl 0x7101711670
71001eadd4  ldr x1,[sp, #0x240]
71001eadd8  ldr x0,[sp, #0x58]
71001eaddc  bl 0x7101711670
71001eade0  ldr x1,[sp, #0x228]
71001eade4  ldr x0,[sp, #0x68]
71001eade8  bl 0x7100219ca0
71001eadec  adrp x8,0x71052a6000
71001eadf0  ldr x8,[x8, #0xe70]
71001eadf4  add x8,x8,#0x10
71001eadf8  str x8,[sp, #0x278]
71001eadfc  ldr x8,[sp, #0x2d8]
71001eae00  cbz x8,0x71001eae14
71001eae04  sub x0,x8,#0x4
71001eae08  bl 0x71001b1870
71001eae0c  str xzr,[sp, #0x2d8]
71001eae10  strb wzr,[sp, #0x2e1]
71001eae14  ldr x0,[sp, #0x280]
71001eae18  cbz x0,0x71001eae28
71001eae1c  ldr x8,[x0]
71001eae20  ldr x8,[x8, #0x8]
71001eae24  blr x8
71001eae28  ldr x1,[sp, #0x2c8]
71001eae2c  ldr x0,[sp, #0xe8]
71001eae30  bl 0x7101711670
71001eae34  ldr x1,[sp, #0x2b0]
71001eae38  ldr x0,[sp, #0x130]
71001eae3c  bl 0x7101711670
71001eae40  ldr x1,[sp, #0x298]
71001eae44  ldr x0,[sp, #0x100]
71001eae48  bl 0x7100219ca0
71001eae4c  ldur x8,[x29, #-0x98]
71001eae50  cbz x8,0x71001eaea0
71001eae54  ldp x8,x25,[x29, #-0xa8]
71001eae58  ldr x9,[x8, #0x8]
71001eae5c  ldr x10,[x25]
71001eae60  str x9,[x10, #0x8]
71001eae64  ldr x8,[x8, #0x8]
71001eae68  cmp x25,x28
71001eae6c  str x10,[x8]
71001eae70  stur xzr,[x29, #-0x98]
71001eae74  b.eq 0x71001eaea0
71001eae78  mov x0,x25
71001eae7c  ldr x22,[x25, #0x8]
71001eae80  ldr x8,[x0, #0x10]!
71001eae84  ldr x8,[x8]
71001eae88  blr x8
71001eae8c  mov x0,x25
71001eae90  bl 0x71001b1870
71001eae94  cmp x22,x28
71001eae98  mov x25,x22
71001eae9c  b.ne 0x71001eae78
71001eaea0  adrp x8,0x71052a4000
71001eaea4  ldr x8,[x8, #0xd80]
71001eaea8  add x8,x8,#0x10
71001eaeac  sub x0,x29,#0x90
71001eaeb0  stur x8,[x29, #-0x90]
71001eaeb4  bl 0x71001b4910
71001eaeb8  ldr x28,[sp, #0x118]
71001eaebc  cbz w21,0x71001ebcb8
71001eaec0  ldr x21,[sp, #0x1d0]
71001eaec4  cmp x26,x21
71001eaec8  b.eq 0x71001ebb44
71001eaecc  adrp x8,0x71052a6000
71001eaed0  ldr x8,[x8, #0xe70]
71001eaed4  str xzr,[sp, #0x298]
71001eaed8  str xzr,[sp, #0x2a0]
71001eaedc  str xzr,[sp, #0x2b0]
71001eaee0  add x8,x8,#0x10
71001eaee4  str x8,[sp, #0x278]
71001eaee8  ldr x8,[sp, #0x108]
71001eaeec  str x8,[sp, #0x290]
71001eaef0  ldr x8,[sp, #0xf8]
71001eaef4  str x8,[sp, #0x2a8]
71001eaef8  ldr x8,[sp, #0xf0]
71001eaefc  str x8,[sp, #0x2c0]
71001eaf00  mov w8,#0x1
71001eaf04  mov w0,#0x90
71001eaf08  add x26,x21,#0x10
71001eaf0c  str xzr,[sp, #0x2b8]
71001eaf10  str xzr,[sp, #0x2c8]
71001eaf14  str xzr,[sp, #0x2d0]
71001eaf18  str xzr,[sp, #0x2d8]
71001eaf1c  strb wzr,[sp, #0x2e2]
71001eaf20  strh w8,[sp, #0x2e0]
71001eaf24  bl 0x71001af850
71001eaf28  mov x25,x0
71001eaf2c  cbz x0,0x71001eaf38
71001eaf30  mov x0,x25
71001eaf34  bl 0x71001beb40
71001eaf38  add x0,sp,#0x278
71001eaf3c  mov x1,x26
71001eaf40  str x25,[sp, #0x280]
71001eaf44  bl 0x71001f1f40
71001eaf48  ldr w2,[x28, #0x28]
71001eaf4c  add x8,sp,#0x138
71001eaf50  add x0,sp,#0x278
71001eaf54  mov x1,x27
71001eaf58  bl 0x71001f2a80
71001eaf5c  ldr x2,[sp, #0xe0]
71001eaf60  add x8,sp,#0x138
71001eaf64  add x0,sp,#0x278
71001eaf68  adrp x1,0x710449c000
71001eaf6c  add x1,x1,#0xe48
71001eaf70  bl 0x71001f2a80
71001eaf74  adrp x22,0x710449c000
71001eaf78  add x22,x22,#0xe39
71001eaf7c  mov x0,x19
71001eaf80  mov x1,x22
71001eaf84  mov x2,xzr
71001eaf88  bl 0x71001f2ba0
71001eaf8c  and x2,x0,#0xffffffff
71001eaf90  add x8,sp,#0x138
71001eaf94  add x0,sp,#0x278
71001eaf98  mov x1,x22
71001eaf9c  bl 0x71001f2a80
71001eafa0  adrp x8,0x71052a4000
71001eafa4  ldr x8,[x8, #0xda8]
71001eafa8  adrp x9,0x71052a4000
71001eafac  ldrb w8,[x8]
71001eafb0  ldr x9,[x9, #0xdb0]
71001eafb4  add x22,x9,#0x18
71001eafb8  cbz w8,0x71001eaffc
71001eafbc  adrp x8,0x71052a4000
71001eafc0  ldr x8,[x8, #0xdb8]
71001eafc4  ldr x0,[x8]
71001eafc8  bl 0x7101717960
71001eafcc  ldr w8,[x0]
71001eafd0  cbz w8,0x71001eaffc
71001eafd4  adrp x9,0x71052a4000
71001eafd8  ldr x9,[x9, #0xdb0]
71001eafdc  ldr x10,[x9, #0xa0]
71001eafe0  ldp x9,x10,[x10]
71001eafe4  sub x10,x10,x9
71001eafe8  asr x10,x10,#0x3
71001eafec  cmp x10,x8
71001eaff0  b.ls 0x71001ebd44
71001eaff4  ldr x8,[x9, x8, LSL #0x3]
71001eaff8  add x22,x8,#0x10
71001eaffc  ldr x8,[x22]
71001eb000  ldr x8,[x8, #0x10]
71001eb004  ldr x0,[x8, #0xe8]
71001eb008  ldr x8,[x0]
71001eb00c  ldr x8,[x8, #0x80]
71001eb010  blr x8
71001eb014  ldrb w8,[x0, #0x10]
71001eb018  cbz w8,0x71001eb1a0
71001eb01c  adrp x8,0x71052a4000
71001eb020  ldr x8,[x8, #0xda8]
71001eb024  adrp x9,0x71052a4000
71001eb028  ldrb w8,[x8]
71001eb02c  ldr x9,[x9, #0xdb0]
71001eb030  add x22,x9,#0x18
71001eb034  cbz w8,0x71001eb078
71001eb038  adrp x8,0x71052a4000
71001eb03c  ldr x8,[x8, #0xdb8]
71001eb040  ldr x0,[x8]
71001eb044  bl 0x7101717960
71001eb048  ldr w8,[x0]
71001eb04c  cbz w8,0x71001eb078
71001eb050  adrp x9,0x71052a4000
71001eb054  ldr x9,[x9, #0xdb0]
71001eb058  ldr x10,[x9, #0xa0]
71001eb05c  ldp x9,x10,[x10]
71001eb060  sub x10,x10,x9
71001eb064  asr x10,x10,#0x3
71001eb068  cmp x10,x8
71001eb06c  b.ls 0x71001ebd44
71001eb070  ldr x8,[x9, x8, LSL #0x3]
71001eb074  add x22,x8,#0x10
71001eb078  ldr x8,[x22]
71001eb07c  ldr x8,[x8, #0x10]
71001eb080  ldr x0,[x8, #0xe8]
71001eb084  ldr x8,[x0]
71001eb088  ldr x8,[x8, #0x80]
71001eb08c  blr x8
71001eb090  add x1,x0,#0x20
71001eb094  add x0,sp,#0x138
71001eb098  bl 0x71001bebd0
71001eb09c  sub x8,x29,#0x90
71001eb0a0  add x0,sp,#0x138
71001eb0a4  bl 0x71001befa0
71001eb0a8  adrp x8,0x71052a4000
71001eb0ac  ldr x8,[x8, #0xd80]
71001eb0b0  ldr x24,[sp, #0xb8]
71001eb0b4  adrp x27,0x710449c000
71001eb0b8  add x27,x27,#0xe73
71001eb0bc  mov x23,#-0x1
71001eb0c0  mov x2,x23
71001eb0c4  strb wzr,[sp, #0x210]
71001eb0c8  add x22,x8,#0x10
71001eb0cc  mov w25,#0x10
71001eb0d0  add x0,sp,#0x208
71001eb0d4  mov x1,x27
71001eb0d8  str x25,[sp, #0x228]
71001eb0dc  str x22,[sp, #0x208]
71001eb0e0  str x24,[sp, #0x220]
71001eb0e4  bl 0x71001b47e0
71001eb0e8  ldr x19,[sp, #0x130]
71001eb0ec  add x1,sp,#0x208
71001eb0f0  mov x0,x19
71001eb0f4  bl 0x710021bff0
71001eb0f8  add x0,sp,#0x208
71001eb0fc  str x22,[sp, #0x208]
71001eb100  bl 0x71001b4910
71001eb104  add x0,sp,#0x208
71001eb108  mov x1,x27
71001eb10c  mov x2,x23
71001eb110  str x22,[sp, #0x208]
71001eb114  str x24,[sp, #0x220]
71001eb118  strb wzr,[sp, #0x210]
71001eb11c  str x25,[sp, #0x228]
71001eb120  bl 0x71001b47e0
71001eb124  add x8,sp,#0x208
71001eb128  add x1,sp,#0x208
71001eb12c  add x3,sp,#0x1e0
71001eb130  sub x4,x29,#0xa8
71001eb134  mov x0,x19
71001eb138  str x8,[sp, #0x1e0]
71001eb13c  adrp x2,0x710449d000
71001eb140  add x2,x2,#0x8aa
71001eb144  bl 0x710021c110
71001eb148  add x0,x0,#0x48
71001eb14c  sub x1,x29,#0x90
71001eb150  bl 0x71001b2f70
71001eb154  add x0,sp,#0x208
71001eb158  str x22,[sp, #0x208]
71001eb15c  bl 0x71001b4910
71001eb160  sub x0,x29,#0x90
71001eb164  stur x22,[x29, #-0x90]
71001eb168  bl 0x71001b4910
71001eb16c  add x0,sp,#0x138
71001eb170  bl 0x71001beb30
71001eb174  and x2,x0,#0xffff
71001eb178  add x8,sp,#0x208
71001eb17c  add x0,sp,#0x278
71001eb180  adrp x1,0x710449c000
71001eb184  add x1,x1,#0xe76
71001eb188  bl 0x71001f2a80
71001eb18c  add x0,sp,#0x138
71001eb190  bl 0x71001bef00
71001eb194  ldr x19,[sp, #0x110]
71001eb198  adrp x24,0x710449c000
71001eb19c  add x24,x24,#0xe5b
71001eb1a0  mov w0,#0x80
71001eb1a4  stp x20,x20,[x29, #-0x90]
71001eb1a8  stur xzr,[x29, #-0x80]
71001eb1ac  bl 0x71001b1820
71001eb1b0  str xzr,[x0]
71001eb1b4  adrp x8,0x71052a6000
71001eb1b8  ldr x8,[x8, #0xe70]
71001eb1bc  add x8,x8,#0x10
71001eb1c0  mov x27,x0
71001eb1c4  mov x25,x0
71001eb1c8  str x8,[x27, #0x10]!
71001eb1cc  mov x8,x0
71001eb1d0  str xzr,[x8, #0x30]!
71001eb1d4  str x8,[x0, #0x28]
71001eb1d8  mov x8,x0
71001eb1dc  str xzr,[x8, #0x48]!
71001eb1e0  stp xzr,x8,[x0, #0x38]
71001eb1e4  mov x8,x0
71001eb1e8  str xzr,[x8, #0x60]!
71001eb1ec  stp xzr,x8,[x0, #0x50]
71001eb1f0  mov w8,#0x1
71001eb1f4  stp xzr,xzr,[x0, #0x68]
71001eb1f8  strh w8,[x0, #0x78]
71001eb1fc  strb wzr,[x0, #0x7a]
71001eb200  mov w0,#0x90
71001eb204  bl 0x71001af850
71001eb208  mov x22,x0
71001eb20c  cbz x0,0x71001eb218
71001eb210  mov x0,x22
71001eb214  bl 0x71001beb40
71001eb218  mov x0,x27
71001eb21c  mov x1,x19
71001eb220  str x22,[x25, #0x18]
71001eb224  bl 0x71001f1f40
71001eb228  ldur x8,[x29, #-0x90]
71001eb22c  stp x8,x20,[x25]
71001eb230  str x25,[x8, #0x8]
71001eb234  ldur x8,[x29, #-0x80]
71001eb238  add x8,x8,#0x1
71001eb23c  mov x0,x26
71001eb240  mov x1,x24
71001eb244  mov x2,xzr
71001eb248  stur x25,[x29, #-0x90]
71001eb24c  stur x8,[x29, #-0x80]
71001eb250  bl 0x71001f2ba0
71001eb254  tbz w0,#0x1,0x71001eb45c
71001eb258  adrp x8,0x71052a4000
71001eb25c  ldr x8,[x8, #0xda8]
71001eb260  adrp x9,0x71052a4000
71001eb264  ldrb w8,[x8]
71001eb268  ldr x9,[x9, #0xdb0]
71001eb26c  add x22,x9,#0x18
71001eb270  cbz w8,0x71001eb2b4
71001eb274  adrp x8,0x71052a4000
71001eb278  ldr x8,[x8, #0xdb8]
71001eb27c  ldr x0,[x8]
71001eb280  bl 0x7101717960
71001eb284  ldr w8,[x0]
71001eb288  cbz w8,0x71001eb2b4
71001eb28c  adrp x9,0x71052a4000
71001eb290  ldr x9,[x9, #0xdb0]
71001eb294  ldr x10,[x9, #0xa0]
71001eb298  ldp x9,x10,[x10]
71001eb29c  sub x10,x10,x9
71001eb2a0  asr x10,x10,#0x3
71001eb2a4  cmp x10,x8
71001eb2a8  b.ls 0x71001eb2cc
71001eb2ac  ldr x8,[x9, x8, LSL #0x3]
71001eb2b0  add x22,x8,#0x10
71001eb2b4  ldr x8,[x22]
71001eb2b8  cbz x8,0x71001eb2e4
71001eb2bc  ldr x8,[x8, #0x10]
71001eb2c0  cbz x8,0x71001eb2e4
71001eb2c4  ldr x22,[x8, #0xe8]
71001eb2c8  b 0x71001eb2e8
71001eb2cc  orr w2,wzr,#0xe0000003
71001eb2d0  adrp x0,0x71042c4000
71001eb2d4  add x0,x0,#0x35f
71001eb2d8  mov w1,#0x47
71001eb2dc  mov w3,wzr
71001eb2e0  bl 0x71001b1300
71001eb2e4  mov x22,xzr
71001eb2e8  adrp x8,0x71052a6000
71001eb2ec  ldr x8,[x8, #0xfb0]
71001eb2f0  add x27,x8,#0x10
71001eb2f4  adrp x8,0x71052a4000
71001eb2f8  str x27,[sp, #0x138]
71001eb2fc  ldr x8,[x8, #0xd80]
71001eb300  strb wzr,[sp, #0x148]
71001eb304  ldr x24,[sp, #0x128]
71001eb308  add x25,x8,#0x10
71001eb30c  ldr x8,[sp, #0xc8]
71001eb310  mov w28,#0x10
71001eb314  mov x0,x24
71001eb318  str x25,[sp, #0x140]
71001eb31c  stp x8,x28,[sp, #0x158]
71001eb320  ldr x1,[x22, #0x168]
71001eb324  mov x23,#-0x1
71001eb328  mov x2,x23
71001eb32c  bl 0x71001b47e0
71001eb330  ldrh w8,[x22, #0x178]
71001eb334  strh w8,[sp, #0x168]
71001eb338  ldr x8,[sp, #0xd0]
71001eb33c  str x25,[sp, #0x170]
71001eb340  stp x8,x28,[sp, #0x188]
71001eb344  strb wzr,[sp, #0x178]
71001eb348  ldr x28,[sp, #0x120]
71001eb34c  ldr x1,[x22, #0x198]
71001eb350  mov x0,x28
71001eb354  mov x2,x23
71001eb358  bl 0x71001b47e0
71001eb35c  ldp x8,x9,[x22, #0x1a8]
71001eb360  ldrb w10,[x22, #0x1b8]
71001eb364  ldr x11,[sp, #0xc0]
71001eb368  strb w10,[x11, #0x10]
71001eb36c  stp x8,x9,[x11]
71001eb370  ldr w8,[sp, #0x19c]
71001eb374  cmp w8,#0x2
71001eb378  b.ne 0x71001eb434
71001eb37c  mov x0,x19
71001eb380  adrp x1,0x710449c000
71001eb384  add x1,x1,#0xe79
71001eb388  mov x2,xzr
71001eb38c  bl 0x71001f2ba0
71001eb390  mov x22,x0
71001eb394  mov x0,x28
71001eb398  str x27,[sp, #0x138]
71001eb39c  str x25,[sp, #0x170]
71001eb3a0  bl 0x71001b4910
71001eb3a4  mov x0,x24
71001eb3a8  str x25,[sp, #0x140]
71001eb3ac  bl 0x71001b4910
71001eb3b0  ldr x28,[sp, #0x118]
71001eb3b4  adrp x24,0x710449c000
71001eb3b8  add x24,x24,#0xe5b
71001eb3bc  cbnz x22,0x71001eb45c
71001eb3c0  adrp x8,0x71052a4000
71001eb3c4  ldr x8,[x8, #0xda8]
71001eb3c8  adrp x9,0x71052a4000
71001eb3cc  ldrb w8,[x8]
71001eb3d0  ldr x9,[x9, #0xdb0]
71001eb3d4  add x22,x9,#0x18
71001eb3d8  cbz w8,0x71001eb41c
71001eb3dc  adrp x8,0x71052a4000
71001eb3e0  ldr x8,[x8, #0xdb8]
71001eb3e4  ldr x0,[x8]
71001eb3e8  bl 0x7101717960
71001eb3ec  ldr w8,[x0]
71001eb3f0  cbz w8,0x71001eb41c
71001eb3f4  adrp x9,0x71052a4000
71001eb3f8  ldr x9,[x9, #0xdb0]
71001eb3fc  ldr x10,[x9, #0xa0]
71001eb400  ldp x9,x10,[x10]
71001eb404  sub x10,x10,x9
71001eb408  asr x10,x10,#0x3
71001eb40c  cmp x10,x8
71001eb410  b.ls 0x71001eb980
71001eb414  ldr x8,[x9, x8, LSL #0x3]
71001eb418  add x22,x8,#0x10
71001eb41c  ldr x8,[x22]
71001eb420  cbz x8,0x71001eb998
71001eb424  ldr x8,[x8, #0x10]
71001eb428  cbz x8,0x71001eb998
71001eb42c  ldr x22,[x8, #0xe8]
71001eb430  b 0x71001eb99c
71001eb434  mov x0,x28
71001eb438  str x27,[sp, #0x138]
71001eb43c  str x25,[sp, #0x170]
71001eb440  bl 0x71001b4910
71001eb444  mov x0,x24
71001eb448  str x25,[sp, #0x140]
71001eb44c  bl 0x71001b4910
71001eb450  ldr x28,[sp, #0x118]
71001eb454  adrp x24,0x710449c000
71001eb458  add x24,x24,#0xe5b
71001eb45c  mov x0,x19
71001eb460  adrp x1,0x710449c000
71001eb464  add x1,x1,#0xe79
71001eb468  mov x2,xzr
71001eb46c  bl 0x71001f2ba0
71001eb470  adrp x27,0x710449c000
71001eb474  add x27,x27,#0xe33
71001eb478  cbz x0,0x71001eb490
71001eb47c  mov x0,x26
71001eb480  mov x1,x24
71001eb484  mov x2,xzr
71001eb488  bl 0x71001f2ba0
71001eb48c  tbnz w0,#0x1,0x71001eb554
71001eb490  mov x0,x26
71001eb494  mov x1,x24
71001eb498  mov x2,xzr
71001eb49c  bl 0x71001f2ba0
71001eb4a0  adrp x8,0x71052a4000
71001eb4a4  ldr x8,[x8, #0xda8]
71001eb4a8  tbnz w0,#0x1,0x71001eb4e8
71001eb4ac  ldrb w8,[x8]
71001eb4b0  cbz w8,0x71001eb674
71001eb4b4  adrp x8,0x71052a4000
71001eb4b8  ldr x8,[x8, #0xdb8]
71001eb4bc  ldr x0,[x8]
71001eb4c0  bl 0x7101717960
71001eb4c4  ldr w8,[x0]
71001eb4c8  cbz w8,0x71001eb674
71001eb4cc  adrp x9,0x71052b5000
71001eb4d0  ldr x9,[x9, #0x270]
71001eb4d4  add x8,x9,x8, LSL #0x1
71001eb4d8  ldrh w25,[x8]
71001eb4dc  ldrb w8,[sp, #0x2e0]
71001eb4e0  cbnz w8,0x71001eb690
71001eb4e4  b 0x71001eb688
71001eb4e8  adrp x9,0x71052a4000
71001eb4ec  ldrb w8,[x8]
71001eb4f0  ldr x9,[x9, #0xdb0]
71001eb4f4  add x22,x9,#0x18
71001eb4f8  cbz w8,0x71001eb53c
71001eb4fc  adrp x8,0x71052a4000
71001eb500  ldr x8,[x8, #0xdb8]
71001eb504  ldr x0,[x8]
71001eb508  bl 0x7101717960
71001eb50c  ldr w8,[x0]
71001eb510  cbz w8,0x71001eb53c
71001eb514  adrp x9,0x71052a4000
71001eb518  ldr x9,[x9, #0xdb0]
71001eb51c  ldr x10,[x9, #0xa0]
71001eb520  ldp x9,x10,[x10]
71001eb524  sub x10,x10,x9
71001eb528  asr x10,x10,#0x3
71001eb52c  cmp x10,x8
71001eb530  b.ls 0x71001eb6a4
71001eb534  ldr x8,[x9, x8, LSL #0x3]
71001eb538  add x22,x8,#0x10
71001eb53c  ldr x8,[x22]
71001eb540  cbz x8,0x71001eb6bc
71001eb544  ldr x8,[x8, #0x10]
71001eb548  cbz x8,0x71001eb6bc
71001eb54c  ldr x25,[x8, #0xe8]
71001eb550  b 0x71001eb6c0
71001eb554  add x8,sp,#0x208
71001eb558  mov x0,x19
71001eb55c  bl 0x71001e9e10
71001eb560  adrp x8,0x71052a4000
71001eb564  ldr x8,[x8, #0xd80]
71001eb568  ldr x24,[sp, #0x128]
71001eb56c  adrp x28,0x710449c000
71001eb570  add x28,x28,#0xe60
71001eb574  mov x23,#-0x1
71001eb578  mov x2,x23
71001eb57c  add x22,x8,#0x10
71001eb580  mov w25,#0x10
71001eb584  add x0,sp,#0x138
71001eb588  mov x1,x28
71001eb58c  str x22,[sp, #0x138]
71001eb590  strb wzr,[sp, #0x140]
71001eb594  stp x24,x25,[sp, #0x150]
71001eb598  bl 0x71001b47e0
71001eb59c  ldr x19,[sp, #0x130]
71001eb5a0  add x1,sp,#0x138
71001eb5a4  mov x0,x19
71001eb5a8  bl 0x710021bff0
71001eb5ac  add x0,sp,#0x138
71001eb5b0  str x22,[sp, #0x138]
71001eb5b4  bl 0x71001b4910
71001eb5b8  mov x1,x28
71001eb5bc  ldr x28,[sp, #0x118]
71001eb5c0  add x0,sp,#0x138
71001eb5c4  mov x2,x23
71001eb5c8  str x22,[sp, #0x138]
71001eb5cc  strb wzr,[sp, #0x140]
71001eb5d0  stp x24,x25,[sp, #0x150]
71001eb5d4  adrp x24,0x710449c000
71001eb5d8  add x24,x24,#0xe5b
71001eb5dc  bl 0x71001b47e0
71001eb5e0  mov x0,x19
71001eb5e4  ldr x19,[sp, #0x110]
71001eb5e8  add x8,sp,#0x138
71001eb5ec  add x1,sp,#0x138
71001eb5f0  add x3,sp,#0x1e0
71001eb5f4  sub x4,x29,#0xa8
71001eb5f8  adrp x2,0x710449d000
71001eb5fc  add x2,x2,#0x8aa
71001eb600  str x8,[sp, #0x1e0]
71001eb604  bl 0x710021c110
71001eb608  add x0,x0,#0x48
71001eb60c  add x1,sp,#0x208
71001eb610  bl 0x71001b2f70
71001eb614  add x0,sp,#0x138
71001eb618  str x22,[sp, #0x138]
71001eb61c  bl 0x71001b4910
71001eb620  add x0,sp,#0x208
71001eb624  str x22,[sp, #0x208]
71001eb628  bl 0x71001b4910
71001eb62c  adrp x22,0x710449c000
71001eb630  add x22,x22,#0xe6f
71001eb634  mov x0,x19
71001eb638  mov x1,x22
71001eb63c  mov x2,xzr
71001eb640  bl 0x71001f2ba0
71001eb644  and x2,x0,#0xffff
71001eb648  add x8,sp,#0x138
71001eb64c  add x0,sp,#0x278
71001eb650  mov x1,x22
71001eb654  bl 0x71001f2a80
71001eb658  add x8,sp,#0x138
71001eb65c  add x0,sp,#0x278
71001eb660  mov w2,#0x1
71001eb664  adrp x1,0x710449c000
71001eb668  add x1,x1,#0xe79
71001eb66c  bl 0x71001f2a80
71001eb670  b 0x71001eb79c
71001eb674  adrp x8,0x71052b5000
71001eb678  add x8,x8,#0x278
71001eb67c  ldrh w25,[x8]
71001eb680  ldrb w8,[sp, #0x2e0]
71001eb684  cbnz w8,0x71001eb690
71001eb688  add x0,sp,#0x278
71001eb68c  bl 0x71001f2180
71001eb690  ldr x0,[sp, #0x280]
71001eb694  mov w1,w25
71001eb698  bl 0x71001bee30
71001eb69c  strb wzr,[sp, #0x2e1]
71001eb6a0  b 0x71001eb79c
71001eb6a4  orr w2,wzr,#0xe0000003
71001eb6a8  adrp x0,0x71042c4000
71001eb6ac  add x0,x0,#0x35f
71001eb6b0  mov w1,#0x47
71001eb6b4  mov w3,wzr
71001eb6b8  bl 0x71001b1300
71001eb6bc  mov x25,xzr
71001eb6c0  adrp x8,0x71052a6000
71001eb6c4  ldr x8,[x8, #0xfb0]
71001eb6c8  add x27,x8,#0x10
71001eb6cc  adrp x8,0x71052a4000
71001eb6d0  str x27,[sp, #0x138]
71001eb6d4  ldr x8,[x8, #0xd80]
71001eb6d8  strb wzr,[sp, #0x148]
71001eb6dc  ldr x24,[sp, #0x128]
71001eb6e0  add x22,x8,#0x10
71001eb6e4  ldr x8,[sp, #0xc8]
71001eb6e8  mov w28,#0x10
71001eb6ec  mov x0,x24
71001eb6f0  str x22,[sp, #0x140]
71001eb6f4  stp x8,x28,[sp, #0x158]
71001eb6f8  ldr x1,[x25, #0x168]
71001eb6fc  mov x23,#-0x1
71001eb700  mov x2,x23
71001eb704  bl 0x71001b47e0
71001eb708  ldrh w8,[x25, #0x178]
71001eb70c  strh w8,[sp, #0x168]
71001eb710  ldr x8,[sp, #0xd0]
71001eb714  str x22,[sp, #0x170]
71001eb718  stp x8,x28,[sp, #0x188]
71001eb71c  strb wzr,[sp, #0x178]
71001eb720  ldr x28,[sp, #0x120]
71001eb724  ldr x1,[x25, #0x198]
71001eb728  mov x0,x28
71001eb72c  mov x2,x23
71001eb730  bl 0x71001b47e0
71001eb734  ldp x8,x9,[x25, #0x1a8]
71001eb738  ldrb w10,[x25, #0x1b8]
71001eb73c  ldr x11,[sp, #0xc0]
71001eb740  strb w10,[x11, #0x10]
71001eb744  stp x8,x9,[x11]
71001eb748  ldrh w25,[sp, #0x198]
71001eb74c  ldrb w8,[sp, #0x2e0]
71001eb750  cbnz w8,0x71001eb75c
71001eb754  add x0,sp,#0x278
71001eb758  bl 0x71001f2180
71001eb75c  ldr x0,[sp, #0x280]
71001eb760  mov w1,w25
71001eb764  bl 0x71001bee30
71001eb768  mov x0,x28
71001eb76c  strb wzr,[sp, #0x2e1]
71001eb770  str x27,[sp, #0x138]
71001eb774  str x22,[sp, #0x170]
71001eb778  bl 0x71001b4910
71001eb77c  mov x0,x24
71001eb780  str x22,[sp, #0x140]
71001eb784  bl 0x71001b4910
71001eb788  ldr x28,[sp, #0x118]
71001eb78c  adrp x24,0x710449c000
71001eb790  add x24,x24,#0xe5b
71001eb794  adrp x27,0x710449c000
71001eb798  add x27,x27,#0xe33
71001eb79c  ldr x0,[x28, #0x10]
71001eb7a0  ldr x8,[x0]
71001eb7a4  ldr x8,[x8, #0x28]
71001eb7a8  sub x1,x29,#0x90
71001eb7ac  add x2,sp,#0x278
71001eb7b0  blr x8
71001eb7b4  ldr x8,[sp, #0xd8]
71001eb7b8  cbz x8,0x71001eb95c
71001eb7bc  mov x0,x26
71001eb7c0  mov x1,x24
71001eb7c4  mov x2,xzr
71001eb7c8  bl 0x71001f2ba0
71001eb7cc  tbnz w0,#0x1,0x71001eb968
71001eb7d0  adrp x8,0x71052a6000
71001eb7d4  ldr x8,[x8, #0xe70]
71001eb7d8  str xzr,[sp, #0x198]
71001eb7dc  stp xzr,xzr,[sp, #0x158]
71001eb7e0  add x8,x8,#0x10
71001eb7e4  stp xzr,xzr,[sp, #0x170]
71001eb7e8  str x8,[sp, #0x138]
71001eb7ec  ldr x8,[sp, #0xb0]
71001eb7f0  str x8,[sp, #0x150]
71001eb7f4  ldr x8,[sp, #0x120]
71001eb7f8  stp xzr,xzr,[sp, #0x188]
71001eb7fc  str x8,[sp, #0x168]
71001eb800  ldr x8,[sp, #0xa8]
71001eb804  str x8,[sp, #0x180]
71001eb808  mov w8,#0x1
71001eb80c  mov w0,#0x90
71001eb810  strh w8,[sp, #0x1a0]
71001eb814  strb w8,[sp, #0x1a2]
71001eb818  bl 0x71001af850
71001eb81c  mov x22,x0
71001eb820  cbz x0,0x71001eb82c
71001eb824  mov x0,x22
71001eb828  bl 0x71001beb40
71001eb82c  ldrb w8,[sp, #0x1a0]
71001eb830  str x22,[sp, #0x140]
71001eb834  cbnz w8,0x71001eb840
71001eb838  add x0,sp,#0x138
71001eb83c  bl 0x71001f2180
71001eb840  mov w8,#0x1
71001eb844  str w8,[sp, #0x148]
71001eb848  add x8,sp,#0x208
71001eb84c  mov x0,x19
71001eb850  strb wzr,[sp, #0x1a1]
71001eb854  bl 0x71001ec320
71001eb858  ldr x25,[sp, #0x220]
71001eb85c  ldrb w8,[sp, #0x1a0]
71001eb860  cbnz w8,0x71001eb86c
71001eb864  add x0,sp,#0x138
71001eb868  bl 0x71001f2180
71001eb86c  ldr x0,[sp, #0x140]
71001eb870  mov x1,x25
71001eb874  strb wzr,[sp, #0x1a1]
71001eb878  bl 0x71001becd0
71001eb87c  adrp x8,0x71052a4000
71001eb880  ldr x8,[x8, #0xd80]
71001eb884  add x8,x8,#0x10
71001eb888  add x0,sp,#0x208
71001eb88c  str x8,[sp, #0x208]
71001eb890  bl 0x71001b4910
71001eb894  mov x0,x19
71001eb898  adrp x1,0x710449c000
71001eb89c  add x1,x1,#0xe81
71001eb8a0  mov x2,xzr
71001eb8a4  bl 0x71001f2ba0
71001eb8a8  ldrb w8,[sp, #0x1a0]
71001eb8ac  mov x25,x0
71001eb8b0  cbnz w8,0x71001eb8bc
71001eb8b4  add x0,sp,#0x138
71001eb8b8  bl 0x71001f2180
71001eb8bc  ldr x0,[sp, #0x140]
71001eb8c0  mov w1,w25
71001eb8c4  bl 0x71001bee30
71001eb8c8  mov x0,x19
71001eb8cc  mov x1,x27
71001eb8d0  mov x2,xzr
71001eb8d4  strb wzr,[sp, #0x1a1]
71001eb8d8  bl 0x71001f2ba0
71001eb8dc  and x2,x0,#0xffffffff
71001eb8e0  add x8,sp,#0x208
71001eb8e4  add x0,sp,#0x138
71001eb8e8  mov x1,x27
71001eb8ec  bl 0x71001f2a80
71001eb8f0  add x1,sp,#0x138
71001eb8f4  mov x0,x28
71001eb8f8  bl 0x71001e7a40
71001eb8fc  adrp x8,0x71052a6000
71001eb900  ldr x8,[x8, #0xe70]
71001eb904  add x8,x8,#0x10
71001eb908  str x8,[sp, #0x138]
71001eb90c  ldr x8,[sp, #0x198]
71001eb910  cbz x8,0x71001eb924
71001eb914  sub x0,x8,#0x4
71001eb918  bl 0x71001b1870
71001eb91c  str xzr,[sp, #0x198]
71001eb920  strb wzr,[sp, #0x1a1]
71001eb924  ldr x0,[sp, #0x140]
71001eb928  cbz x0,0x71001eb938
71001eb92c  ldr x8,[x0]
71001eb930  ldr x8,[x8, #0x8]
71001eb934  blr x8
71001eb938  ldr x1,[sp, #0x188]
71001eb93c  ldr x0,[sp, #0x90]
71001eb940  bl 0x7101711670
71001eb944  ldr x1,[sp, #0x170]
71001eb948  ldr x0,[sp, #0x98]
71001eb94c  bl 0x7101711670
71001eb950  ldr x1,[sp, #0x158]
71001eb954  ldr x0,[sp, #0xa0]
71001eb958  bl 0x7100219ca0
71001eb95c  ldur x8,[x29, #-0x80]
71001eb960  cbnz x8,0x71001eba88
71001eb964  b 0x71001ebad4
71001eb968  mov x0,x28
71001eb96c  mov x1,x19
71001eb970  bl 0x71001e7a40
71001eb974  ldur x8,[x29, #-0x80]
71001eb978  cbnz x8,0x71001eba88
71001eb97c  b 0x71001ebad4
71001eb980  orr w2,wzr,#0xe0000003
71001eb984  adrp x0,0x71042c4000
71001eb988  add x0,x0,#0x35f
71001eb98c  mov w1,#0x47
71001eb990  mov w3,wzr
71001eb994  bl 0x71001b1300
71001eb998  mov x22,xzr
71001eb99c  adrp x8,0x71052a6000
71001eb9a0  ldr x8,[x8, #0xfb0]
71001eb9a4  add x25,x8,#0x10
71001eb9a8  adrp x8,0x71052a4000
71001eb9ac  str x25,[sp, #0x138]
71001eb9b0  ldr x8,[x8, #0xd80]
71001eb9b4  strb wzr,[sp, #0x148]
71001eb9b8  ldr x24,[sp, #0x128]
71001eb9bc  add x26,x8,#0x10
71001eb9c0  ldr x8,[sp, #0xc8]
71001eb9c4  mov w27,#0x10
71001eb9c8  mov x0,x24
71001eb9cc  str x26,[sp, #0x140]
71001eb9d0  stp x8,x27,[sp, #0x158]
71001eb9d4  ldr x1,[x22, #0x168]
71001eb9d8  mov x23,#-0x1
71001eb9dc  mov x2,x23
71001eb9e0  bl 0x71001b47e0
71001eb9e4  ldrh w8,[x22, #0x178]
71001eb9e8  strh w8,[sp, #0x168]
71001eb9ec  ldr x8,[sp, #0xd0]
71001eb9f0  str x26,[sp, #0x170]
71001eb9f4  stp x8,x27,[sp, #0x188]
71001eb9f8  strb wzr,[sp, #0x178]
71001eb9fc  ldr x27,[sp, #0x120]
71001eba00  ldr x1,[x22, #0x198]
71001eba04  mov x0,x27
71001eba08  mov x2,x23
71001eba0c  bl 0x71001b47e0
71001eba10  ldp x8,x9,[x22, #0x1a8]
71001eba14  ldrb w10,[x22, #0x1b8]
71001eba18  ldr x11,[sp, #0xc0]
71001eba1c  strb w10,[x11, #0x10]
71001eba20  mov x0,x27
71001eba24  stp x8,x9,[x11]
71001eba28  ldrb w22,[sp, #0x1a8]
71001eba2c  str x25,[sp, #0x138]
71001eba30  str x26,[sp, #0x170]
71001eba34  bl 0x71001b4910
71001eba38  mov x0,x24
71001eba3c  str x26,[sp, #0x140]
71001eba40  bl 0x71001b4910
71001eba44  cbz w22,0x71001eba60
71001eba48  adrp x8,0x71052a6000
71001eba4c  ldr x8,[x8, #0xfd0]
71001eba50  ldrb w2,[x8]
71001eba54  mov x0,x28
71001eba58  mov x1,x19
71001eba5c  bl 0x71001ebeb0
71001eba60  sub x1,x29,#0x90
71001eba64  add x2,sp,#0x278
71001eba68  mov x0,x28
71001eba6c  bl 0x71001ec220
71001eba70  adrp x24,0x710449c000
71001eba74  add x24,x24,#0xe5b
71001eba78  adrp x27,0x710449c000
71001eba7c  add x27,x27,#0xe33
71001eba80  ldur x8,[x29, #-0x80]
71001eba84  cbz x8,0x71001ebad4
71001eba88  ldp x8,x25,[x29, #-0x90]
71001eba8c  ldr x9,[x8, #0x8]
71001eba90  ldr x10,[x25]
71001eba94  str x9,[x10, #0x8]
71001eba98  ldr x8,[x8, #0x8]
71001eba9c  cmp x25,x20
71001ebaa0  str x10,[x8]
71001ebaa4  stur xzr,[x29, #-0x80]
71001ebaa8  b.eq 0x71001ebad4
71001ebaac  mov x0,x25
71001ebab0  ldr x22,[x25, #0x8]
71001ebab4  ldr x8,[x0, #0x10]!
71001ebab8  ldr x8,[x8]
71001ebabc  blr x8
71001ebac0  mov x0,x25
71001ebac4  bl 0x71001b1870
71001ebac8  cmp x22,x20
71001ebacc  mov x25,x22
71001ebad0  b.ne 0x71001ebaac
71001ebad4  adrp x8,0x71052a6000
71001ebad8  ldr x8,[x8, #0xe70]
71001ebadc  add x8,x8,#0x10
71001ebae0  str x8,[sp, #0x278]
71001ebae4  ldr x8,[sp, #0x2d8]
71001ebae8  add x26,sp,#0x1c8
71001ebaec  cbz x8,0x71001ebb00
71001ebaf0  sub x0,x8,#0x4
71001ebaf4  bl 0x71001b1870
71001ebaf8  str xzr,[sp, #0x2d8]
71001ebafc  strb wzr,[sp, #0x2e1]
71001ebb00  ldr x0,[sp, #0x280]
71001ebb04  cbz x0,0x71001ebb14
71001ebb08  ldr x8,[x0]
71001ebb0c  ldr x8,[x8, #0x8]
71001ebb10  blr x8
71001ebb14  ldr x1,[sp, #0x2c8]
71001ebb18  ldr x0,[sp, #0xe8]
71001ebb1c  bl 0x7101711670
71001ebb20  ldr x1,[sp, #0x2b0]
71001ebb24  ldr x0,[sp, #0x130]
71001ebb28  bl 0x7101711670
71001ebb2c  ldr x1,[sp, #0x298]
71001ebb30  ldr x0,[sp, #0x100]
71001ebb34  bl 0x7100219ca0
71001ebb38  ldr x21,[x21, #0x8]
71001ebb3c  cmp x26,x21
71001ebb40  b.ne 0x71001eaecc
71001ebb44  ldr x8,[sp, #0xd8]
71001ebb48  cbnz x8,0x71001ebc80
71001ebb4c  add x8,sp,#0x208
71001ebb50  bl 0x71001b12a0
71001ebb54  adrp x8,0x71052a6000
71001ebb58  ldr x8,[x8, #0xfe8]
71001ebb5c  ldrsw x8,[x8]
71001ebb60  ldr x9,[sp, #0x208]
71001ebb64  add x8,x9,x8
71001ebb68  str x8,[sp, #0x138]
71001ebb6c  adrp x8,0x71052a6000
71001ebb70  ldr x8,[x8, #0xe70]
71001ebb74  str xzr,[sp, #0x1a0]
71001ebb78  stp xzr,xzr,[sp, #0x160]
71001ebb7c  strb wzr,[sp, #0x1aa]
71001ebb80  stp xzr,xzr,[sp, #0x178]
71001ebb84  add x21,x8,#0x10
71001ebb88  ldr x8,[sp, #0x10]
71001ebb8c  str x8,[sp, #0x158]
71001ebb90  ldr x8,[sp, #0xd0]
71001ebb94  stp xzr,xzr,[sp, #0x190]
71001ebb98  str x8,[sp, #0x170]
71001ebb9c  ldr x8,[sp, #0x8]
71001ebba0  str x8,[sp, #0x188]
71001ebba4  mov w8,#0x1
71001ebba8  mov w0,#0x90
71001ebbac  str x21,[sp, #0x140]
71001ebbb0  strh w8,[sp, #0x1a8]
71001ebbb4  bl 0x71001af850
71001ebbb8  mov x22,x0
71001ebbbc  cbz x0,0x71001ebbc8
71001ebbc0  mov x0,x22
71001ebbc4  bl 0x71001beb40
71001ebbc8  str x22,[sp, #0x148]
71001ebbcc  ldr x22,[sp, #0x128]
71001ebbd0  mov x0,x22
71001ebbd4  mov x1,x19
71001ebbd8  bl 0x71001f1f40
71001ebbdc  mov x0,x19
71001ebbe0  adrp x1,0x710449c000
71001ebbe4  add x1,x1,#0xe39
71001ebbe8  mov x2,xzr
71001ebbec  bl 0x71001f2ba0
71001ebbf0  stur w0,[x29, #-0x90]
71001ebbf4  ldr x0,[sp]
71001ebbf8  sub x1,x29,#0x90
71001ebbfc  add x3,sp,#0x278
71001ebc00  add x4,sp,#0x1e0
71001ebc04  adrp x2,0x710449d000
71001ebc08  add x2,x2,#0x8aa
71001ebc0c  str x20,[sp, #0x278]
71001ebc10  bl 0x710021b6f0
71001ebc14  ldr x8,[sp, #0x138]
71001ebc18  str x8,[x0, #0x28]
71001ebc1c  add x0,x0,#0x30
71001ebc20  mov x1,x22
71001ebc24  bl 0x71001f1f40
71001ebc28  ldr x8,[sp, #0x1a0]
71001ebc2c  str x21,[sp, #0x140]
71001ebc30  cbz x8,0x71001ebc44
71001ebc34  sub x0,x8,#0x4
71001ebc38  bl 0x71001b1870
71001ebc3c  str xzr,[sp, #0x1a0]
71001ebc40  strb wzr,[sp, #0x1a9]
71001ebc44  ldr x0,[sp, #0x148]
71001ebc48  ldr x21,[sp, #0x120]
71001ebc4c  cbz x0,0x71001ebc5c
71001ebc50  ldr x8,[x0]
71001ebc54  ldr x8,[x8, #0x8]
71001ebc58  blr x8
71001ebc5c  ldr x1,[sp, #0x190]
71001ebc60  ldr x0,[sp, #0xa8]
71001ebc64  bl 0x7101711670
71001ebc68  ldr x1,[sp, #0x178]
71001ebc6c  mov x0,x21
71001ebc70  bl 0x7101711670
71001ebc74  ldr x1,[sp, #0x160]
71001ebc78  ldr x0,[sp, #0xb0]
71001ebc7c  bl 0x7100219ca0
71001ebc80  ldr x22,[x28, #0x40]
71001ebc84  ldp x8,x9,[x22]
71001ebc88  str x9,[x8, #0x8]
71001ebc8c  ldr x9,[x22, #0x8]
71001ebc90  str x8,[x9]
71001ebc94  ldr x8,[x28, #0x48]
71001ebc98  sub x8,x8,#0x1
71001ebc9c  str x8,[x28, #0x48]
71001ebca0  mov x0,x22
71001ebca4  ldr x8,[x0, #0x10]!
71001ebca8  ldr x8,[x8]
71001ebcac  blr x8
71001ebcb0  mov x0,x22
71001ebcb4  bl 0x71001b1870
71001ebcb8  ldr x8,[sp, #0x1d8]
71001ebcbc  cbz x8,0x71001ebd0c
71001ebcc0  ldp x8,x23,[sp, #0x1c8]
71001ebcc4  ldr x9,[x8, #0x8]
71001ebcc8  ldr x10,[x23]
71001ebccc  str x9,[x10, #0x8]
71001ebcd0  ldr x8,[x8, #0x8]
71001ebcd4  cmp x23,x26
71001ebcd8  str x10,[x8]
71001ebcdc  str xzr,[sp, #0x1d8]
71001ebce0  b.eq 0x71001ebd0c
71001ebce4  mov x0,x23
71001ebce8  ldr x21,[x23, #0x8]
71001ebcec  ldr x8,[x0, #0x10]!
71001ebcf0  ldr x8,[x8]
71001ebcf4  blr x8
71001ebcf8  mov x0,x23
71001ebcfc  bl 0x71001b1870
71001ebd00  cmp x21,x26
71001ebd04  mov x23,x21
71001ebd08  b.ne 0x71001ebce4
71001ebd0c  ldr x8,[x28, #0x48]
71001ebd10  cbnz x8,0x71001ea4d4
71001ebd14  ldr x0,[sp, #0x18]
71001ebd18  ldr x8,[x0]
71001ebd1c  ldr x8,[x8, #0x20]
71001ebd20  blr x8
71001ebd24  add sp,sp,#0x340
71001ebd28  ldp x29,x30,[sp, #0x50]
71001ebd2c  ldp x20,x19,[sp, #0x40]
71001ebd30  ldp x22,x21,[sp, #0x30]
71001ebd34  ldp x24,x23,[sp, #0x20]
71001ebd38  ldp x26,x25,[sp, #0x10]
71001ebd3c  ldp x28,x27,[sp], #0x60
71001ebd40  ret
71001ebd44  adrp x0,0x71042c4000
71001ebd48  add x0,x0,#0x35f
71001ebd4c  mov w1,#0x47
71001ebd50  orr w2,wzr,#0xe0000003
71001ebd54  mov w3,wzr
71001ebd58  bl 0x71001b1300
