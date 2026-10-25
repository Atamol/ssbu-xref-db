// addr:      71027ea190
// offset:    0x27ea190
// name:      FUN_71027ea190
// mangled:   
// size:      3388

71027ea190  ldrb w8,[x0, #0x49]
71027ea194  cbz w8,0x71027ea19c
71027ea198  ret
71027ea19c  stp d9,d8,[sp, #-0x70]!
71027ea1a0  stp x28,x27,[sp, #0x10]
71027ea1a4  stp x26,x25,[sp, #0x20]
71027ea1a8  stp x24,x23,[sp, #0x30]
71027ea1ac  stp x22,x21,[sp, #0x40]
71027ea1b0  stp x20,x19,[sp, #0x50]
71027ea1b4  stp x29,x30,[sp, #0x60]
71027ea1b8  add x29,sp,#0x60
71027ea1bc  sub sp,sp,#0x270
71027ea1c0  ldr w8,[x0, #0x198]
71027ea1c4  mov v8.16B,v0.16B
71027ea1c8  mov x19,x0
71027ea1cc  cmp w8,#0x2
71027ea1d0  b.eq 0x71027ea21c
71027ea1d4  cmp w8,#0x1
71027ea1d8  b.eq 0x71027ea280
71027ea1dc  cbnz w8,0x71027ea8c8
71027ea1e0  ldr x0,[x19, #0xb8]
71027ea1e4  cbz x0,0x71027ea1f8
71027ea1e8  ldr x8,[x0, #0xd8]
71027ea1ec  cbz x8,0x71027ea8c8
71027ea1f0  ldrb w8,[x8, #0x21]
71027ea1f4  cbnz w8,0x71027ea8c8
71027ea1f8  bl 0x710260ffb0
71027ea1fc  tbz w0,#0x0,0x71027ea8c8
71027ea200  ldr x8,[x19, #0xb8]
71027ea204  cbz x8,0x71027ea8c8
71027ea208  ldr x8,[x8, #0xd8]
71027ea20c  cbz x8,0x71027ea8c8
71027ea210  mov w9,#0x1
71027ea214  strb w9,[x8, #0x21]
71027ea218  b 0x71027ea8c8
71027ea21c  fcmp s8,#0.0
71027ea220  b.hi 0x71027ea250
71027ea224  adrp x8,0x71052b9000
71027ea228  ldr x8,[x8, #0x4f8]
71027ea22c  ldr x8,[x8]
71027ea230  ldrsb w8,[x8, #0xbc]
71027ea234  cmp w8,#0x1
71027ea238  b.lt 0x71027ea250
71027ea23c  ldr s0,[x19, #0x120]
71027ea240  ucvtf s0,s0
71027ea244  fmov s1,0x3f800000
71027ea248  fadd s0,s0,s1
71027ea24c  str s0,[x19, #0x19c]
71027ea250  ldr x8,[x19, #0x210]
71027ea254  lsl x26,x8,#0x2
71027ea258  cbz x26,0x71027ea8c0
71027ea25c  add x25,x19,#0x208
71027ea260  mov w20,#0x2c
71027ea264  movk w20,#0x2000, LSL #16
71027ea268  mov w28,#0x1
71027ea26c  adrp x21,0x71052b7000
71027ea270  add x21,x21,#0x100
71027ea274  adrp x22,0x71052b7000
71027ea278  mov x27,x25
71027ea27c  b 0x71027ea3a8
71027ea280  ldr x8,[x19, #0x210]
71027ea284  lsl x20,x8,#0x2
71027ea288  cbz x20,0x71027ea8c0
71027ea28c  add x27,x19,#0x208
71027ea290  add x8,sp,#0xa0
71027ea294  add x25,sp,#0xa0
71027ea298  add x21,x8,#0x60
71027ea29c  add x22,x8,#0x94
71027ea2a0  mov w23,#0x1
71027ea2a4  adrp x28,0x710532a000
71027ea2a8  mov x26,x27
71027ea2ac  adrp x24,0x71050b4000
71027ea2b0  add x24,x24,#0x8c8
71027ea2b4  ldr w8,[x26], #0x4
71027ea2b8  ldr x9,[x19, #0x30]
71027ea2bc  ldr x9,[x9]
71027ea2c0  ldr w9,[x9, #0x8]
71027ea2c4  stp wzr,w8,[sp, #0xa8]
71027ea2c8  mov w8,#0x9
71027ea2cc  stp w8,w9,[sp, #0xb0]
71027ea2d0  mov w8,#0xffffffff
71027ea2d4  str x24,[sp, #0xa0]
71027ea2d8  str xzr,[sp, #0xd8]
71027ea2dc  strb wzr,[sp, #0xf4]
71027ea2e0  stp xzr,xzr,[x21, #0x20]
71027ea2e4  fmov s2,wzr
71027ea2e8  stp xzr,xzr,[x21, #0x10]
71027ea2ec  add x1,sp,#0xa0
71027ea2f0  stp xzr,xzr,[x21]
71027ea2f4  str wzr,[sp, #0xd0]
71027ea2f8  str w8,[sp, #0x130]
71027ea2fc  mov x8,#0x41c80000
71027ea300  movk x8,#0x3f80, LSL #48
71027ea304  stp xzr,xzr,[x22]
71027ea308  stur x8,[x25, #0xa4]
71027ea30c  stur xzr,[x25, #0xac]
71027ea310  ldr x8,[x28, #0x9d8]
71027ea314  strb w23,[sp, #0x154]
71027ea318  ldr q0,[x19, #0x70]
71027ea31c  ext v1.16B,v0.16B,v0.16B,0x8
71027ea320  mov v1.S[0x1],v2.S[0x0]
71027ea324  mov v0.D[0x1],v1.D[0x0]
71027ea328  str q0,[sp, #0xc0]
71027ea32c  ldr x8,[x8]
71027ea330  ldr x0,[x8, #0x1e0]
71027ea334  bl 0x710315f7e0
71027ea338  subs x20,x20,#0x4
71027ea33c  b.ne 0x71027ea2b4
71027ea340  ldr x8,[x19, #0x210]
71027ea344  lsl x25,x8,#0x2
71027ea348  cbz x25,0x71027ea8c0
71027ea34c  mov w20,#0x2c
71027ea350  movk w20,#0x2000, LSL #16
71027ea354  adrp x21,0x71052b7000
71027ea358  add x21,x21,#0x100
71027ea35c  mov w26,#0x1
71027ea360  adrp x28,0x71052b7000
71027ea364  adrp x22,0x7104f62000
71027ea368  add x22,x22,#0x78
71027ea36c  b 0x71027ea83c
71027ea370  mov x0,x21
71027ea374  bl 0x71039c06b0
71027ea378  cbz w0,0x71027ea3cc
71027ea37c  adrp x23,0x71052b7000
71027ea380  add x23,x23,#0xf0
71027ea384  mov x0,x23
71027ea388  mov x1,xzr
71027ea38c  bl 0x71003a9ab0
71027ea390  adrp x8,0x7104f62000
71027ea394  add x8,x8,#0x78
71027ea398  mov x0,x21
71027ea39c  str x8,[x23]
71027ea3a0  bl 0x71039c06c0
71027ea3a4  b 0x71027ea3cc
71027ea3a8  ldr w0,[x27]
71027ea3ac  bl 0x71003ac560
71027ea3b0  cbz x0,0x71027ea3c4
71027ea3b4  ldrb w8,[x0, #0x3a]
71027ea3b8  mov x23,x0
71027ea3bc  cmp w8,#0x3
71027ea3c0  b.hi 0x71027ea3d0
71027ea3c4  ldarb w8,[x21]
71027ea3c8  tbz w8,#0x0,0x71027ea370
71027ea3cc  ldr x23,[x22, #0xf8]
71027ea3d0  ldrb w8,[x23, #0x3a]
71027ea3d4  cmp w8,#0x4
71027ea3d8  b.cc 0x71027ea41c
71027ea3dc  ldr x8,[x23, #0x20]
71027ea3e0  ldr x0,[x8, #0x40]
71027ea3e4  ldr x8,[x0]
71027ea3e8  ldr x8,[x8, #0x110]
71027ea3ec  blr x8
71027ea3f0  ldr x8,[x23, #0x20]
71027ea3f4  mov w24,w0
71027ea3f8  ldr x0,[x8, #0x50]
71027ea3fc  ldr x8,[x0]
71027ea400  ldr x8,[x8, #0x108]
71027ea404  mov w1,w20
71027ea408  blr x8
71027ea40c  tbnz w0,#0x0,0x71027ea41c
71027ea410  cmp w24,#0xce
71027ea414  cset w8,ne
71027ea418  and w28,w28,w8
71027ea41c  add x27,x27,#0x4
71027ea420  subs x26,x26,#0x4
71027ea424  b.ne 0x71027ea3a8
71027ea428  add x10,sp,#0xa0
71027ea42c  tbnz w28,#0x0,0x71027ea8c0
71027ea430  ldr s1,[x19, #0x120]
71027ea434  ucvtf s1,s1
71027ea438  ldr s0,[x19, #0x19c]
71027ea43c  fcmp s0,s1
71027ea440  b.le 0x71027ea800
71027ea444  ldr x8,[x19, #0x210]
71027ea448  lsl x20,x8,#0x2
71027ea44c  cbz x20,0x71027ea6a8
71027ea450  add x8,sp,#0x1a0
71027ea454  add x22,x8,#0x60
71027ea458  add x23,x8,#0x94
71027ea45c  add x8,sp,#0xa0
71027ea460  add x28,x8,#0xa0
71027ea464  add x27,sp,#0x1a0
71027ea468  add x24,x8,#0xd4
71027ea46c  add x21,x8,#0x67
71027ea470  mov x26,x25
71027ea474  ldr w8,[x26], #0x4
71027ea478  ldr x9,[x19, #0x30]
71027ea47c  ldr x9,[x9]
71027ea480  ldr w9,[x9, #0x8]
71027ea484  str w8,[sp, #0x1ac]
71027ea488  mov w8,#0x4
71027ea48c  str w8,[sp, #0x1b0]
71027ea490  adrp x8,0x71050b4000
71027ea494  add x8,x8,#0x8c8
71027ea498  str x8,[sp, #0x1a0]
71027ea49c  mov w8,#0xffffffff
71027ea4a0  str wzr,[sp, #0x1a8]
71027ea4a4  str w9,[sp, #0x1b4]
71027ea4a8  strb wzr,[sp, #0x1f4]
71027ea4ac  stp xzr,xzr,[x22, #0x20]
71027ea4b0  mov w9,w8
71027ea4b4  stp xzr,xzr,[x22, #0x10]
71027ea4b8  movi d3,#0x0
71027ea4bc  stp xzr,xzr,[x22]
71027ea4c0  str w8,[sp, #0x230]
71027ea4c4  mov x8,#0x41c80000
71027ea4c8  movk x8,#0x3f80, LSL #48
71027ea4cc  str wzr,[sp, #0x1d0]
71027ea4d0  stp xzr,xzr,[x23]
71027ea4d4  mov v2.16B,v3.16B
71027ea4d8  orr w11,wzr,#0x3f800000
71027ea4dc  mov w12,#0x10000
71027ea4e0  add x13,sp,#0x3
71027ea4e4  add x1,sp,#0x1a0
71027ea4e8  stur x8,[x27, #0xa4]
71027ea4ec  mov w8,#0x1
71027ea4f0  stur xzr,[x27, #0xac]
71027ea4f4  strb w8,[sp, #0x254]
71027ea4f8  ldr q0,[x19, #0x70]
71027ea4fc  adrp x8,0x71052a8000
71027ea500  strb wzr,[x28, #0x6]
71027ea504  ldr x8,[x8, #0xa88]
71027ea508  ldr q1,[x8]
71027ea50c  adrp x8,0x71052a8000
71027ea510  strh wzr,[x28, #0x4]
71027ea514  mov v2.S[0x0],v1.S[0x2]
71027ea518  str wzr,[x28]
71027ea51c  mov v1.D[0x1],v2.D[0x0]
71027ea520  str w11,[sp, #0x148]
71027ea524  stp q1,q1,[sp, #0xa0]
71027ea528  mov v1.16B,v3.16B
71027ea52c  ldr x8,[x8, #0xa80]
71027ea530  mov v1.S[0x0],v0.S[0x2]
71027ea534  ldr q2,[x8]
71027ea538  mov x8,#0x1fca
71027ea53c  movk x8,#0x1ed9, LSL #16
71027ea540  movk x8,#0x3, LSL #32
71027ea544  str x8,[sp, #0xe8]
71027ea548  stur w12,[x13, #0xff]
71027ea54c  mov v0.D[0x1],v1.D[0x0]
71027ea550  orr w12,wzr,#0xe
71027ea554  strb wzr,[sp, #0x106]
71027ea558  strh wzr,[sp, #0x114]
71027ea55c  strh wzr,[sp, #0x120]
71027ea560  strb w12,[sp, #0x116]
71027ea564  str wzr,[x21, #0x8]
71027ea568  str xzr,[x21]
71027ea56c  str x8,[sp, #0x128]
71027ea570  mov x8,#0xfc4f
71027ea574  movk x8,#0x25cb, LSL #16
71027ea578  orr w12,wzr,#0x1e
71027ea57c  movk x8,#0x4, LSL #32
71027ea580  str x12,[sp, #0x118]
71027ea584  str q2,[sp, #0x130]
71027ea588  str wzr,[sp, #0x140]
71027ea58c  strh wzr,[sp, #0x144]
71027ea590  stur x11,[x10, #0xac]
71027ea594  str x8,[sp, #0x158]
71027ea598  mov x8,#0x7a80
71027ea59c  movk x8,#0xfb99, LSL #16
71027ea5a0  movk x8,#0x7, LSL #32
71027ea5a4  str x8,[sp, #0x160]
71027ea5a8  mov w8,#0xbf800000
71027ea5ac  str w8,[sp, #0x170]
71027ea5b0  orr w8,wzr,#0x3
71027ea5b4  strh wzr,[sp, #0x168]
71027ea5b8  strh wzr,[sp, #0x16c]
71027ea5bc  stp xzr,xzr,[x24, #0x8]
71027ea5c0  str xzr,[x24]
71027ea5c4  str w9,[sp, #0x18c]
71027ea5c8  str w11,[sp, #0x194]
71027ea5cc  strh wzr,[sp, #0x198]
71027ea5d0  strb wzr,[sp, #0x19a]
71027ea5d4  strh w8,[sp, #0x190]
71027ea5d8  str q0,[sp, #0x1c0]
71027ea5dc  ldr w8,[x19, #0x170]
71027ea5e0  str w8,[sp, #0xc0]
71027ea5e4  mov w8,#0x40c00000
71027ea5e8  str w8,[sp, #0xc4]
71027ea5ec  ldr s0,[x19, #0x174]
71027ea5f0  fcvtzs w8,s0
71027ea5f4  str w8,[sp, #0xc8]
71027ea5f8  ldr s0,[x19, #0x178]
71027ea5fc  fcvtzs w8,s0
71027ea600  str w8,[sp, #0xcc]
71027ea604  ldr s0,[x19, #0x17c]
71027ea608  fcvtzs w8,s0
71027ea60c  str w8,[sp, #0xd0]
71027ea610  ldr s0,[x19, #0x180]
71027ea614  fcvtzs w8,s0
71027ea618  str w8,[sp, #0xd4]
71027ea61c  ldr w8,[x19, #0x184]
71027ea620  str w8,[sp, #0xd8]
71027ea624  ldr w8,[x19, #0x188]
71027ea628  str w8,[sp, #0xdc]
71027ea62c  ldr w8,[x19, #0x18c]
71027ea630  str w8,[sp, #0xe0]
71027ea634  mov w8,#0x3f
71027ea638  movk w8,#0x7, LSL #16
71027ea63c  str w8,[sp, #0xf0]
71027ea640  orr w8,wzr,#0x1f
71027ea644  strb w8,[sp, #0xf4]
71027ea648  mov x8,#0x63a
71027ea64c  movk x8,#0x860b, LSL #16
71027ea650  movk x8,#0x14, LSL #32
71027ea654  str x8,[sp, #0xf8]
71027ea658  mov w8,#0x800
71027ea65c  strh w8,[sp, #0x100]
71027ea660  mov w8,#0x2
71027ea664  strb w8,[sp, #0x113]
71027ea668  add x8,sp,#0xa0
71027ea66c  str x8,[sp, #0x1d8]
71027ea670  adrp x8,0x710532a000
71027ea674  ldr x8,[x8, #0x9d8]
71027ea678  strb wzr,[sp, #0x10a]
71027ea67c  strb wzr,[sp, #0x111]
71027ea680  strb wzr,[sp, #0x10d]
71027ea684  ldr x8,[x8]
71027ea688  ldr x0,[x8, #0x1e0]
71027ea68c  bl 0x710315f7e0
71027ea690  add x10,sp,#0xa0
71027ea694  subs x20,x20,#0x4
71027ea698  b.ne 0x71027ea474
71027ea69c  ldr x8,[x19, #0x210]
71027ea6a0  add x20,x25,x8, LSL #0x2
71027ea6a4  b 0x71027ea6ac
71027ea6a8  add x20,x25,x20
71027ea6ac  cmp x20,x25
71027ea6b0  add x27,sp,#0xa0
71027ea6b4  b.eq 0x71027ea784
71027ea6b8  add x8,sp,#0xa0
71027ea6bc  add x21,x8,#0x20
71027ea6c0  add x22,x8,#0x60
71027ea6c4  add x23,x8,#0x94
71027ea6c8  adrp x8,0x7104473000
71027ea6cc  ldr s9,[x8, #0x708]
71027ea6d0  mov w28,#0x1
71027ea6d4  adrp x24,0x710532a000
71027ea6d8  adrp x26,0x71050b4000
71027ea6dc  add x26,x26,#0x8c8
71027ea6e0  ldr w8,[x25], #0x4
71027ea6e4  ldr x9,[x19, #0x30]
71027ea6e8  ldr x9,[x9]
71027ea6ec  ldr w9,[x9, #0x8]
71027ea6f0  stp wzr,w8,[sp, #0xa8]
71027ea6f4  mov w8,#0x5
71027ea6f8  stp w8,w9,[sp, #0xb0]
71027ea6fc  mov w8,#0xffffffff
71027ea700  str x26,[sp, #0xa0]
71027ea704  str xzr,[sp, #0xd8]
71027ea708  strb wzr,[sp, #0xf4]
71027ea70c  stp xzr,xzr,[x22, #0x20]
71027ea710  add x1,sp,#0xa0
71027ea714  stp xzr,xzr,[x22, #0x10]
71027ea718  stp xzr,xzr,[x22]
71027ea71c  str wzr,[x21, #0x10]
71027ea720  stp xzr,xzr,[x21]
71027ea724  str w8,[sp, #0x130]
71027ea728  mov x8,#0x41c80000
71027ea72c  movk x8,#0x3f80, LSL #48
71027ea730  stp xzr,xzr,[x23]
71027ea734  stur x8,[x27, #0xa4]
71027ea738  stur xzr,[x27, #0xac]
71027ea73c  strb w28,[sp, #0x154]
71027ea740  ldr w8,[x19, #0x110]
71027ea744  str w8,[sp, #0xe0]
71027ea748  ldr s0,[x19, #0x98]
71027ea74c  fadd s0,s0,s9
71027ea750  str s0,[sp, #0xe4]
71027ea754  ldr w8,[x19, #0x114]
71027ea758  str w8,[sp, #0xe8]
71027ea75c  ldr w8,[x19, #0x118]
71027ea760  str w8,[sp, #0xec]
71027ea764  ldr w8,[x19, #0x11c]
71027ea768  str w8,[sp, #0xf0]
71027ea76c  ldr x8,[x24, #0x9d8]
71027ea770  ldr x8,[x8]
71027ea774  ldr x0,[x8, #0x1e0]
71027ea778  bl 0x710315f7e0
71027ea77c  cmp x20,x25
71027ea780  b.ne 0x71027ea6e0
71027ea784  ldr x0,[x19, #0xb8]
71027ea788  fmov s0,wzr
71027ea78c  mov w1,#0x1
71027ea790  bl 0x710260fdd0
71027ea794  ldr x8,[x19, #0xb8]
71027ea798  cbz x8,0x71027ea7d0
71027ea79c  ldrb w9,[x8, #0xe0]
71027ea7a0  cbz w9,0x71027ea7b0
71027ea7a4  ldr x9,[x8, #0xc8]
71027ea7a8  cbz x9,0x71027ea7b0
71027ea7ac  strh wzr,[x9, #0x30]
71027ea7b0  ldr x9,[x8, #0xd8]
71027ea7b4  cbz x9,0x71027ea7bc
71027ea7b8  strb wzr,[x9, #0x21]
71027ea7bc  ldrb w9,[x8, #0xe0]
71027ea7c0  cbz w9,0x71027ea7d0
71027ea7c4  ldr x8,[x8, #0xb0]
71027ea7c8  mov w9,#0x1
71027ea7cc  strb w9,[x8, #0x10]
71027ea7d0  ldr x8,[x19, #0x1b8]
71027ea7d4  ldr x8,[x8]
71027ea7d8  ldr x0,[x8, #0x8]
71027ea7dc  cbz x0,0x71027ea7f4
71027ea7e0  ldr x8,[x0]
71027ea7e4  ldr w2,[x19, #0x1c0]
71027ea7e8  mov w1,#0x1
71027ea7ec  ldr x8,[x8, #0x58]
71027ea7f0  blr x8
71027ea7f4  ldr s0,[x19, #0x19c]
71027ea7f8  str xzr,[x19, #0x210]
71027ea7fc  str wzr,[x19, #0x198]
71027ea800  fadd s0,s0,s8
71027ea804  str s0,[x19, #0x19c]
71027ea808  b 0x71027ea8c8
71027ea80c  mov x0,x21
71027ea810  bl 0x71039c06b0
71027ea814  cbz w0,0x71027ea860
71027ea818  adrp x23,0x71052b7000
71027ea81c  add x23,x23,#0xf0
71027ea820  mov x0,x23
71027ea824  mov x1,xzr
71027ea828  bl 0x71003a9ab0
71027ea82c  mov x0,x21
71027ea830  str x22,[x23]
71027ea834  bl 0x71039c06c0
71027ea838  b 0x71027ea860
71027ea83c  ldr w0,[x27]
71027ea840  bl 0x71003ac560
71027ea844  cbz x0,0x71027ea858
71027ea848  ldrb w8,[x0, #0x3a]
71027ea84c  mov x23,x0
71027ea850  cmp w8,#0x3
71027ea854  b.hi 0x71027ea864
71027ea858  ldarb w8,[x21]
71027ea85c  tbz w8,#0x0,0x71027ea80c
71027ea860  ldr x23,[x28, #0xf8]
71027ea864  ldrb w8,[x23, #0x3a]
71027ea868  cmp w8,#0x4
71027ea86c  b.cc 0x71027ea8b0
71027ea870  ldr x8,[x23, #0x20]
71027ea874  ldr x0,[x8, #0x40]
71027ea878  ldr x8,[x0]
71027ea87c  ldr x8,[x8, #0x110]
71027ea880  blr x8
71027ea884  ldr x8,[x23, #0x20]
71027ea888  mov w24,w0
71027ea88c  ldr x0,[x8, #0x50]
71027ea890  ldr x8,[x0]
71027ea894  ldr x8,[x8, #0x108]
71027ea898  mov w1,w20
71027ea89c  blr x8
71027ea8a0  tbnz w0,#0x0,0x71027ea8b0
71027ea8a4  cmp w24,#0xce
71027ea8a8  cset w8,ne
71027ea8ac  and w26,w26,w8
71027ea8b0  add x27,x27,#0x4
71027ea8b4  subs x25,x25,#0x4
71027ea8b8  b.ne 0x71027ea83c
71027ea8bc  tbz w26,#0x0,0x71027eae84
71027ea8c0  str xzr,[x19, #0x210]
71027ea8c4  str wzr,[x19, #0x198]
71027ea8c8  adrp x8,0x7104472000
71027ea8cc  ldr q0,[x19, #0x90]
71027ea8d0  adrp x9,0x710446a000
71027ea8d4  ldr s1,[x8, #0x6e0]
71027ea8d8  ldr x8,[x19, #0x1a8]
71027ea8dc  fmul s2,s1,v0.S[0x0]
71027ea8e0  fmul s3,s1,v0.S[0x1]
71027ea8e4  fmul s0,s1,v0.S[0x2]
71027ea8e8  str q0,[sp, #0x70]
71027ea8ec  movi v0.2D,#0x0
71027ea8f0  mov v0.S[0x0],v2.S[0x0]
71027ea8f4  mov v0.S[0x1],v3.S[0x0]
71027ea8f8  str q0,[sp, #0x80]
71027ea8fc  ldr q0,[x9, #0x350]
71027ea900  adrp x9,0x7104465000
71027ea904  ldr q1,[x9, #0x6b0]
71027ea908  adrp x9,0x7104468000
71027ea90c  ldr q2,[x9, #0xca0]
71027ea910  adrp x9,0x710446a000
71027ea914  ldr q3,[x9, #0x360]
71027ea918  stp q1,q0,[sp, #0x50]
71027ea91c  stp q3,q2,[sp, #0x30]
71027ea920  cbz x8,0x71027eaa00
71027ea924  mov v0.16B,v8.16B
71027ea928  add x0,x8,#0x60
71027ea92c  bl 0x71025ed6c0
71027ea930  ldp q3,q2,[sp, #0x30]
71027ea934  ldp q1,q0,[sp, #0x50]
71027ea938  ldr x21,[x19, #0x1a8]
71027ea93c  cbz x21,0x71027eaa00
71027ea940  ldr x8,[x21, #0xd8]
71027ea944  cbz x8,0x71027ea984
71027ea948  ldr x8,[x8, #0x8]
71027ea94c  ldr x0,[x8, #0x8]
71027ea950  ldr x8,[x0]
71027ea954  ldr x8,[x8, #0x18]
71027ea958  adrp x1,0x7104420000
71027ea95c  add x1,x1,#0x290
71027ea960  blr x8
71027ea964  ldp q3,q2,[sp, #0x30]
71027ea968  ldp q1,q0,[sp, #0x50]
71027ea96c  ldr x21,[x19, #0x1a8]
71027ea970  cbz x21,0x71027eaa00
71027ea974  mov w20,w0
71027ea978  ldr x8,[x21, #0xd8]
71027ea97c  cbnz x8,0x71027ea990
71027ea980  b 0x71027ea9d4
71027ea984  mov w20,#0xffffffff
71027ea988  ldr x8,[x21, #0xd8]
71027ea98c  cbz x8,0x71027ea9d4
71027ea990  ldr x8,[x8, #0x8]
71027ea994  ldr x0,[x8, #0x8]
71027ea998  ldr x8,[x0]
71027ea99c  ldr x8,[x8, #0x10]
71027ea9a0  blr x8
71027ea9a4  cmp w0,w20
71027ea9a8  b.ls 0x71027ea9d4
71027ea9ac  ldr x8,[x21, #0xd8]
71027ea9b0  ldr x8,[x8, #0x8]
71027ea9b4  ldr x0,[x8, #0x48]
71027ea9b8  ldr x8,[x0]
71027ea9bc  ldr x8,[x8, #0x38]
71027ea9c0  mov w1,wzr
71027ea9c4  blr x8
71027ea9c8  mov w8,w20
71027ea9cc  add x0,x1,x8, LSL #0x6
71027ea9d0  b 0x71027ea9e4
71027ea9d4  ldr x0,[x21, #0x90]
71027ea9d8  ldr x8,[x0]
71027ea9dc  ldr x8,[x8, #0x158]
71027ea9e0  blr x8
71027ea9e4  add x8,x0,#0x10
71027ea9e8  add x9,x0,#0x20
71027ea9ec  add x10,x0,#0x30
71027ea9f0  ldr q1,[x9]
71027ea9f4  ldr q2,[x0]
71027ea9f8  ldr q3,[x8]
71027ea9fc  ldr q0,[x10]
71027eaa00  stp q2,q1,[sp]
71027eaa04  ldr x8,[x19, #0x1b0]
71027eaa08  str q0,[sp, #0x90]
71027eaa0c  ldp q0,q1,[sp, #0x70]
71027eaa10  mov v1.S[0x2],v0.S[0x0]
71027eaa14  mov v0.16B,v1.16B
71027eaa18  str q3,[sp, #0x20]
71027eaa1c  cbz x8,0x71027eab08
71027eaa20  str q0,[sp, #0x80]
71027eaa24  mov v0.16B,v8.16B
71027eaa28  add x0,x8,#0x60
71027eaa2c  bl 0x71025ed6c0
71027eaa30  ldr x21,[x19, #0x1b0]
71027eaa34  cbz x21,0x71027eab04
71027eaa38  ldr x8,[x21, #0xd8]
71027eaa3c  cbz x8,0x71027eaa78
71027eaa40  ldr x8,[x8, #0x8]
71027eaa44  ldr x0,[x8, #0x8]
71027eaa48  ldr x8,[x0]
71027eaa4c  ldr x8,[x8, #0x18]
71027eaa50  adrp x1,0x71043de000
71027eaa54  add x1,x1,#0x40
71027eaa58  blr x8
71027eaa5c  ldr q0,[sp, #0x80]
71027eaa60  ldr x21,[x19, #0x1b0]
71027eaa64  cbz x21,0x71027eab08
71027eaa68  mov w20,w0
71027eaa6c  ldr x8,[x21, #0xd8]
71027eaa70  cbnz x8,0x71027eaa84
71027eaa74  b 0x71027eaac8
71027eaa78  mov w20,#0xffffffff
71027eaa7c  ldr x8,[x21, #0xd8]
71027eaa80  cbz x8,0x71027eaac8
71027eaa84  ldr x8,[x8, #0x8]
71027eaa88  ldr x0,[x8, #0x8]
71027eaa8c  ldr x8,[x0]
71027eaa90  ldr x8,[x8, #0x10]
71027eaa94  blr x8
71027eaa98  cmp w0,w20
71027eaa9c  b.ls 0x71027eaac8
71027eaaa0  ldr x8,[x21, #0xd8]
71027eaaa4  ldr x8,[x8, #0x8]
71027eaaa8  ldr x0,[x8, #0x48]
71027eaaac  ldr x8,[x0]
71027eaab0  ldr x8,[x8, #0x38]
71027eaab4  mov w1,wzr
71027eaab8  blr x8
71027eaabc  mov w8,w20
71027eaac0  add x0,x1,x8, LSL #0x6
71027eaac4  b 0x71027eaad8
71027eaac8  ldr x0,[x21, #0x90]
71027eaacc  ldr x8,[x0]
71027eaad0  ldr x8,[x8, #0x158]
71027eaad4  blr x8
71027eaad8  add x9,x0,#0x20
71027eaadc  ldr q0,[x9]
71027eaae0  add x8,x0,#0x10
71027eaae4  str q0,[sp, #0x50]
71027eaae8  ldr q0,[x0]
71027eaaec  add x10,x0,#0x30
71027eaaf0  str q0,[sp, #0x40]
71027eaaf4  ldr q0,[x8]
71027eaaf8  str q0,[sp, #0x30]
71027eaafc  ldr q0,[x10]
71027eab00  str q0,[sp, #0x60]
71027eab04  ldr q0,[sp, #0x80]
71027eab08  mov w0,wzr
71027eab0c  bl 0x71003d7950
71027eab10  adrp x8,0x7104468000
71027eab14  ldr q1,[x8, #0x1b0]
71027eab18  adrp x8,0x7104465000
71027eab1c  ldp q17,q16,[sp, #0x30]
71027eab20  ldr d2,[x8, #0x310]
71027eab24  adrp x8,0x7104465000
71027eab28  and v3.16B,v0.16B,v1.16B
71027eab2c  tbl v4.8B,{v3.16B},v2.8B
71027eab30  ldr d2,[x8, #0x1e8]
71027eab34  adrp x8,0x7104465000
71027eab38  ldr d5,[x8, #0x2f8]
71027eab3c  ext v1.8B,v3.8B,v3.8B,0x4
71027eab40  tbl v2.8B,{v3.16B},v2.8B
71027eab44  mov v1.D[0x1],v4.D[0x0]
71027eab48  tbl v5.8B,{v3.16B},v5.8B
71027eab4c  mov v2.D[0x1],v5.D[0x0]
71027eab50  adrp x8,0x7104466000
71027eab54  fmul v1.4S,v1.4S,v1.4S
71027eab58  fadd v1.4S,v1.4S,v1.4S
71027eab5c  fmul v2.4S,v2.4S,v2.4S
71027eab60  fadd v2.4S,v2.4S,v2.4S
71027eab64  fadd v1.4S,v2.4S,v1.4S
71027eab68  ldr q2,[x8, #0x2b0]
71027eab6c  adrp x8,0x7104465000
71027eab70  ldr d6,[x8, #0x5f8]
71027eab74  tbl v6.8B,{v3.16B},v6.8B
71027eab78  fsub v1.4S,v2.4S,v1.4S
71027eab7c  adrp x8,0x7104465000
71027eab80  mov v6.D[0x1],v4.D[0x0]
71027eab84  fmul v4.4S,v6.4S,v3.4S
71027eab88  ldr d6,[x8, #0x2a0]
71027eab8c  fadd v4.4S,v4.4S,v4.4S
71027eab90  tbl v3.8B,{v3.16B},v6.8B
71027eab94  mov v3.D[0x1],v5.D[0x0]
71027eab98  adrp x8,0x7104465000
71027eab9c  fmul v0.4S,v3.4S,v0.S[0x3]
71027eaba0  fadd v0.4S,v0.4S,v0.4S
71027eaba4  fadd v5.4S,v4.4S,v0.4S
71027eaba8  fsub v6.4S,v4.4S,v0.4S
71027eabac  ldr d0,[x8, #0x3e8]
71027eabb0  adrp x8,0x7104465000
71027eabb4  tbl v2.8B,{v5.16B,v6.16B},v0.8B
71027eabb8  ldr d0,[x8, #0x378]
71027eabbc  adrp x8,0x7104465000
71027eabc0  tbl v0.8B,{v5.16B,v6.16B},v0.8B
71027eabc4  mov v2.D[0x1],v0.D[0x0]
71027eabc8  ldr d0,[x8, #0x628]
71027eabcc  adrp x8,0x7104465000
71027eabd0  tbl v4.8B,{v5.16B,v6.16B},v0.8B
71027eabd4  ldr d0,[x8, #0x1f0]
71027eabd8  adrp x8,0x7104465000
71027eabdc  tbl v0.8B,{v5.16B,v6.16B},v0.8B
71027eabe0  mov v4.D[0x1],v0.D[0x0]
71027eabe4  ldr d0,[x8, #0x250]
71027eabe8  adrp x8,0x7104465000
71027eabec  ldr d5,[x8, #0x498]
71027eabf0  adrp x8,0x7104465000
71027eabf4  mov v3.16B,v1.16B
71027eabf8  tbl v0.8B,{v3.16B,v4.16B},v0.8B
71027eabfc  tbl v5.8B,{v3.16B,v4.16B},v5.8B
71027eac00  mov v0.D[0x1],v5.D[0x0]
71027eac04  ldr d5,[x8, #0x1c0]
71027eac08  adrp x8,0x7104465000
71027eac0c  ldr d6,[x8, #0x180]
71027eac10  adrp x8,0x7104465000
71027eac14  tbl v5.8B,{v3.16B,v4.16B},v5.8B
71027eac18  tbl v3.8B,{v3.16B,v4.16B},v6.8B
71027eac1c  ldp q7,q6,[sp, #0x50]
71027eac20  mov v5.D[0x1],v3.D[0x0]
71027eac24  ldr d3,[x8, #0x298]
71027eac28  adrp x8,0x7104465000
71027eac2c  ldr d4,[x8, #0x188]
71027eac30  tbl v3.8B,{v1.16B,v2.16B},v3.8B
71027eac34  tbl v1.8B,{v1.16B,v2.16B},v4.8B
71027eac38  mov v3.D[0x1],v1.D[0x0]
71027eac3c  ldr q1,[x19, #0xa0]
71027eac40  fmul v0.4S,v0.4S,v1.S[0x0]
71027eac44  fmul v2.4S,v5.4S,v1.S[0x1]
71027eac48  fmul v1.4S,v3.4S,v1.S[0x2]
71027eac4c  fmul v3.4S,v16.4S,v0.S[0x0]
71027eac50  fmla v3.4S,v17.4S,v0.S[0x1]
71027eac54  fmul v4.4S,v16.4S,v1.S[0x0]
71027eac58  fmla v4.4S,v17.4S,v1.S[0x1]
71027eac5c  fmla v3.4S,v7.4S,v0.S[0x2]
71027eac60  fmla v4.4S,v7.4S,v1.S[0x2]
71027eac64  fmla v3.4S,v6.4S,v0.S[0x3]
71027eac68  fmul v0.4S,v16.4S,v2.S[0x0]
71027eac6c  fmla v4.4S,v6.4S,v1.S[0x3]
71027eac70  fmla v0.4S,v17.4S,v2.S[0x1]
71027eac74  fmla v0.4S,v7.4S,v2.S[0x2]
71027eac78  fmla v0.4S,v6.4S,v2.S[0x3]
71027eac7c  movi v2.2D,#0x0
71027eac80  mov v5.16B,v2.16B
71027eac84  fmul v2.4S,v16.4S,v2.4S
71027eac88  fmla v2.4S,v5.4S,v17.4S
71027eac8c  ldp q17,q16,[sp]
71027eac90  fmla v2.4S,v5.4S,v7.4S
71027eac94  ldr q7,[sp, #0x20]
71027eac98  fmul v1.4S,v17.4S,v3.S[0x0]
71027eac9c  fmla v1.4S,v7.4S,v3.S[0x1]
71027eaca0  fadd v2.4S,v6.4S,v2.4S
71027eaca4  ldr q6,[sp, #0x90]
71027eaca8  fmul v5.4S,v17.4S,v4.S[0x0]
71027eacac  fmla v5.4S,v7.4S,v4.S[0x1]
71027eacb0  fmla v1.4S,v16.4S,v3.S[0x2]
71027eacb4  fmla v1.4S,v6.4S,v3.S[0x3]
71027eacb8  fmla v5.4S,v16.4S,v4.S[0x2]
71027eacbc  fmul v3.4S,v17.4S,v0.S[0x0]
71027eacc0  fmla v3.4S,v7.4S,v0.S[0x1]
71027eacc4  fmla v3.4S,v16.4S,v0.S[0x2]
71027eacc8  fmla v3.4S,v6.4S,v0.S[0x3]
71027eaccc  fmla v5.4S,v6.4S,v4.S[0x3]
71027eacd0  fmul v0.4S,v17.4S,v2.S[0x0]
71027eacd4  fmla v0.4S,v7.4S,v2.S[0x1]
71027eacd8  fmla v0.4S,v16.4S,v2.S[0x2]
71027eacdc  fmla v0.4S,v6.4S,v2.S[0x3]
71027eace0  stp q1,q3,[sp, #0x1a0]
71027eace4  stp q5,q0,[sp, #0x1c0]
71027eace8  ldr x20,[x19, #0xb8]
71027eacec  cbz x20,0x71027ead7c
71027eacf0  ldr x0,[x20, #0x90]
71027eacf4  ldr x8,[x0]
71027eacf8  ldr x8,[x8, #0x148]
71027eacfc  add x1,sp,#0x1a0
71027ead00  blr x8
71027ead04  ldr q6,[sp, #0x90]
71027ead08  ldr x20,[x20, #0xd8]
71027ead0c  cbz x20,0x71027ead7c
71027ead10  ldr x8,[sp, #0x1b8]
71027ead14  str x8,[sp, #0xb8]
71027ead18  ldr x8,[sp, #0x1b0]
71027ead1c  str x8,[sp, #0xb0]
71027ead20  ldr x8,[sp, #0x1a8]
71027ead24  str x8,[sp, #0xa8]
71027ead28  ldr x8,[sp, #0x1a0]
71027ead2c  str x8,[sp, #0xa0]
71027ead30  ldr x8,[sp, #0x1d8]
71027ead34  str x8,[sp, #0xd8]
71027ead38  ldr x8,[sp, #0x1d0]
71027ead3c  str x8,[sp, #0xd0]
71027ead40  ldr x8,[sp, #0x1c8]
71027ead44  str x8,[sp, #0xc8]
71027ead48  ldr x8,[sp, #0x1c0]
71027ead4c  str x8,[sp, #0xc0]
71027ead50  ldr x8,[x20, #0x8]
71027ead54  ldrb w9,[x8, #0xa8]
71027ead58  cbz w9,0x71027ead74
71027ead5c  ldr x0,[x8, #0x48]
71027ead60  ldr x8,[x0]
71027ead64  ldr x8,[x8, #0x20]
71027ead68  add x1,sp,#0xa0
71027ead6c  blr x8
71027ead70  ldr q6,[sp, #0x90]
71027ead74  mov w8,#0x1
71027ead78  strb w8,[x20, #0x20]
71027ead7c  fmov s0,wzr
71027ead80  ext v1.16B,v6.16B,v6.16B,0x8
71027ead84  mov v2.16B,v6.16B
71027ead88  mov v1.S[0x1],v0.S[0x0]
71027ead8c  movi d0,#0x0
71027ead90  mov v6.D[0x1],v0.D[0x0]
71027ead94  ldr x8,[x19, #0x38]
71027ead98  mov v2.D[0x1],v1.D[0x0]
71027ead9c  str q2,[x19, #0x70]
71027eada0  cbz x8,0x71027eadc0
71027eada4  ldr x0,[x8, #0x130]
71027eada8  ldr x8,[x0]
71027eadac  ldr x8,[x8, #0x1c8]
71027eadb0  str q6,[sp, #0x90]
71027eadb4  blr x8
71027eadb8  ldr q6,[sp, #0x90]
71027eadbc  str q6,[x0, #0x450]
71027eadc0  ldrb w8,[x19, #0x1d9]
71027eadc4  str q6,[x19, #0x1e0]
71027eadc8  cbz w8,0x71027eae20
71027eadcc  ldrsw x8,[x19, #0x1dc]
71027eadd0  cmn w8,#0x1
71027eadd4  b.eq 0x71027eae2c
71027eadd8  adrp x9,0x71052b6000
71027eaddc  ldr x9,[x9, #0xfd8]
71027eade0  ldr x9,[x9]
71027eade4  ldr x9,[x9, #0xa8]
71027eade8  mov w10,#0x50
71027eadec  madd x8,x8,x10,x9
71027eadf0  mov w9,#0x1
71027eadf4  ldr q0,[x8, #0x10]
71027eadf8  strh w9,[x8, #0xc]
71027eadfc  fsub v0.4S,v6.4S,v0.4S
71027eae00  orr w9,wzr,#0x3f800000
71027eae04  stp q6,q0,[x8, #0x10]
71027eae08  str w9,[x8, #0x34]
71027eae0c  ldr q0,[sp, #0x70]
71027eae10  ldrb w8,[x19, #0x1d9]
71027eae14  str s0,[x19, #0x1f4]
71027eae18  cbnz w8,0x71027eae34
71027eae1c  b 0x71027eae60
71027eae20  ldr q0,[sp, #0x70]
71027eae24  str s0,[x19, #0x1f4]
71027eae28  b 0x71027eae60
71027eae2c  ldr q0,[sp, #0x70]
71027eae30  str s0,[x19, #0x1f4]
71027eae34  ldrsw x8,[x19, #0x1dc]
71027eae38  cmn w8,#0x1
71027eae3c  b.eq 0x71027eae60
71027eae40  adrp x9,0x71052b6000
71027eae44  ldr x9,[x9, #0xfd8]
71027eae48  ldr x9,[x9]
71027eae4c  ldr x9,[x9, #0xa8]
71027eae50  mov w10,#0x50
71027eae54  madd x8,x8,x10,x9
71027eae58  ldr q0,[sp, #0x70]
71027eae5c  str s0,[x8, #0x40]
71027eae60  add sp,sp,#0x270
71027eae64  ldp x29,x30,[sp, #0x60]
71027eae68  ldp x20,x19,[sp, #0x50]
71027eae6c  ldp x22,x21,[sp, #0x40]
71027eae70  ldp x24,x23,[sp, #0x30]
71027eae74  ldp x26,x25,[sp, #0x20]
71027eae78  ldp x28,x27,[sp, #0x10]
71027eae7c  ldp d9,d8,[sp], #0x70
71027eae80  ret
71027eae84  ldr s0,[x19, #0x1a0]
71027eae88  fsub s0,s0,s8
71027eae8c  fcmp s0,#0.0
71027eae90  str s0,[x19, #0x1a0]
71027eae94  b.ls 0x71027eaec0
71027eae98  adrp x8,0x71052b9000
71027eae9c  ldr x8,[x8, #0x4f8]
71027eaea0  ldr x8,[x8]
71027eaea4  ldrsb w8,[x8, #0xbc]
71027eaea8  cmp w8,#0x0
71027eaeac  b.gt 0x71027eaec0
71027eaeb0  ldr x8,[x19, #0x200]
71027eaeb4  ldr w8,[x8, #0xdc]
71027eaeb8  cmp w8,#0x2
71027eaebc  b.ne 0x71027ea8c8
71027eaec0  mov w8,#0x2
71027eaec4  str w8,[x19, #0x198]
71027eaec8  b 0x71027ea8c8
