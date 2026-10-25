// addr:      7102ea7150
// offset:    0x2ea7150
// name:      FUN_7102ea7150
// mangled:   
// size:      5616

7102ea7150  sub sp,sp,#0x80
7102ea7154  stp x28,x27,[sp, #0x20]
7102ea7158  stp x26,x25,[sp, #0x30]
7102ea715c  stp x24,x23,[sp, #0x40]
7102ea7160  stp x22,x21,[sp, #0x50]
7102ea7164  stp x20,x19,[sp, #0x60]
7102ea7168  stp x29,x30,[sp, #0x70]
7102ea716c  add x29,sp,#0x70
7102ea7170  ldr x22,[x0, #0x738]
7102ea7174  ldr x8,[x22]
7102ea7178  ldr x8,[x8, #0x300]
7102ea717c  ldr x9,[x8, #0x18]
7102ea7180  ldp x8,x9,[x9]
7102ea7184  cmp x8,x9
7102ea7188  b.eq 0x7102ea7210
7102ea718c  mov x10,#0xdf99
7102ea7190  movk x10,#0xb569, LSL #16
7102ea7194  movk x10,#0x7, LSL #32
7102ea7198  ldr x11,[x8], #0x8
7102ea719c  ldr x12,[x11, #0xa0]
7102ea71a0  and x12,x12,#0xffffffffff
7102ea71a4  cmp x12,x10
7102ea71a8  b.eq 0x7102ea71b8
7102ea71ac  cmp x9,x8
7102ea71b0  b.ne 0x7102ea7198
7102ea71b4  b 0x7102ea7210
7102ea71b8  ldr x8,[x11, #0x130]
7102ea71bc  str x8,[x22, #0x390]
7102ea71c0  cbz x8,0x7102ea7210
7102ea71c4  ldp x0,x1,[x8]
7102ea71c8  adrp x2,0x71043bc000
7102ea71cc  add x2,x2,#0xb6c
7102ea71d0  bl 0x71025f55b0
7102ea71d4  ldr x8,[x22, #0x390]
7102ea71d8  ldp x0,x1,[x8]
7102ea71dc  adrp x2,0x710436a000
7102ea71e0  add x2,x2,#0x9e7
7102ea71e4  bl 0x71025f55b0
7102ea71e8  ldr x8,[x22, #0x390]
7102ea71ec  ldp x0,x1,[x8]
7102ea71f0  adrp x2,0x71042a1000
7102ea71f4  add x2,x2,#0x676
7102ea71f8  bl 0x71025f55b0
7102ea71fc  ldr x8,[x22, #0x390]
7102ea7200  ldp x0,x1,[x8]
7102ea7204  adrp x2,0x7104441000
7102ea7208  add x2,x2,#0xec7
7102ea720c  bl 0x71025f55b0
7102ea7210  mov w1,#0x250
7102ea7214  mov w0,#0x10
7102ea7218  bl 0x710392e290
7102ea721c  mov x20,x0
7102ea7220  cbnz x0,0x7102ea726c
7102ea7224  adrp x8,0x7105332000
7102ea7228  ldr x0,[x8, #0xf00]
7102ea722c  cbz x0,0x7102ea7268
7102ea7230  mov w8,#0x250
7102ea7234  str wzr,[sp, #0x1c]
7102ea7238  add x1,sp,#0x1c
7102ea723c  str x8,[sp]
7102ea7240  ldr x8,[x0]
7102ea7244  ldr x8,[x8, #0x30]
7102ea7248  mov x2,sp
7102ea724c  blr x8
7102ea7250  tbz w0,#0x0,0x7102ea7268
7102ea7254  mov w1,#0x250
7102ea7258  mov w0,#0x10
7102ea725c  bl 0x710392e290
7102ea7260  mov x20,x0
7102ea7264  cbnz x0,0x7102ea726c
7102ea7268  mov x20,xzr
7102ea726c  ldr x1,[x22]
7102ea7270  ldr x4,[x22, #0x390]
7102ea7274  add x19,x22,#0x8
7102ea7278  adrp x3,0x7104420000
7102ea727c  add x3,x3,#0x7bf
7102ea7280  mov x0,x20
7102ea7284  mov x2,x19
7102ea7288  bl 0x7102eaaea0
7102ea728c  ldr x0,[x22, #0x2c8]
7102ea7290  str x20,[x22, #0x2c8]
7102ea7294  cbz x0,0x7102ea72b0
7102ea7298  str xzr,[x0, #0x118]
7102ea729c  str xzr,[x0, #0x98]
7102ea72a0  str xzr,[x0, #0x80]
7102ea72a4  str xzr,[x0, #0x18]
7102ea72a8  str xzr,[x0]
7102ea72ac  bl 0x710392eb40
7102ea72b0  adrp x8,0x7105314000
7102ea72b4  add x8,x8,#0x4d8
7102ea72b8  ldarb w8,[x8]
7102ea72bc  tbz w8,#0x0,0x7102ea8700
7102ea72c0  adrp x8,0x71052c5000
7102ea72c4  ldrb w8,[x8, #0x1ba]
7102ea72c8  cbz w8,0x7102ea72d8
7102ea72cc  ldr x8,[x22, #0x2c8]
7102ea72d0  mov w9,#0x1
7102ea72d4  strb w9,[x8, #0x248]
7102ea72d8  mov w1,#0xb0
7102ea72dc  mov w0,#0x10
7102ea72e0  bl 0x710392e290
7102ea72e4  mov x20,x0
7102ea72e8  cbnz x0,0x7102ea7334
7102ea72ec  adrp x8,0x7105332000
7102ea72f0  ldr x0,[x8, #0xf00]
7102ea72f4  cbz x0,0x7102ea7330
7102ea72f8  mov w8,#0xb0
7102ea72fc  str wzr,[sp, #0x1c]
7102ea7300  add x1,sp,#0x1c
7102ea7304  str x8,[sp]
7102ea7308  ldr x8,[x0]
7102ea730c  ldr x8,[x8, #0x30]
7102ea7310  mov x2,sp
7102ea7314  blr x8
7102ea7318  tbz w0,#0x0,0x7102ea7330
7102ea731c  mov w1,#0xb0
7102ea7320  mov w0,#0x10
7102ea7324  bl 0x710392e290
7102ea7328  mov x20,x0
7102ea732c  cbnz x0,0x7102ea7334
7102ea7330  mov x20,xzr
7102ea7334  ldr x1,[x22]
7102ea7338  adrp x2,0x710427e000
7102ea733c  add x2,x2,#0xe7f
7102ea7340  adrp x3,0x71043cd000
7102ea7344  add x3,x3,#0x831
7102ea7348  mov x0,x20
7102ea734c  bl 0x7102eae230
7102ea7350  ldr x0,[x22, #0x2c0]
7102ea7354  str x20,[x22, #0x2c0]
7102ea7358  cbz x0,0x7102ea7374
7102ea735c  adrp x8,0x7105146000
7102ea7360  add x8,x8,#0x950
7102ea7364  str xzr,[x0, #0x38]
7102ea7368  str x8,[x0, #0x20]
7102ea736c  bl 0x710392eb40
7102ea7370  ldr x20,[x22, #0x2c0]
7102ea7374  adrp x2,0x71042b2000
7102ea7378  add x2,x2,#0x579
7102ea737c  mov x0,x20
7102ea7380  mov w1,wzr
7102ea7384  bl 0x7102eae830
7102ea7388  ldr x0,[x22, #0x2c0]
7102ea738c  adrp x2,0x7104431000
7102ea7390  add x2,x2,#0x416
7102ea7394  mov w1,#0x1
7102ea7398  bl 0x7102eae830
7102ea739c  ldr x0,[x22, #0x2c0]
7102ea73a0  adrp x2,0x7104463000
7102ea73a4  add x2,x2,#0xede
7102ea73a8  mov w1,#0x2
7102ea73ac  bl 0x7102eae830
7102ea73b0  ldr x0,[x22, #0x2c0]
7102ea73b4  adrp x2,0x710427e000
7102ea73b8  add x2,x2,#0xe85
7102ea73bc  orr w1,wzr,#0x3
7102ea73c0  bl 0x7102eae830
7102ea73c4  mov w0,#0x10
7102ea73c8  orr w1,wzr,#0x1e0
7102ea73cc  bl 0x710392e290
7102ea73d0  mov x20,x0
7102ea73d4  cbnz x0,0x7102ea7420
7102ea73d8  adrp x8,0x7105332000
7102ea73dc  ldr x0,[x8, #0xf00]
7102ea73e0  cbz x0,0x7102ea741c
7102ea73e4  orr w8,wzr,#0x1e0
7102ea73e8  str wzr,[sp, #0x1c]
7102ea73ec  add x1,sp,#0x1c
7102ea73f0  str x8,[sp]
7102ea73f4  ldr x8,[x0]
7102ea73f8  ldr x8,[x8, #0x30]
7102ea73fc  mov x2,sp
7102ea7400  blr x8
7102ea7404  tbz w0,#0x0,0x7102ea741c
7102ea7408  mov w0,#0x10
7102ea740c  orr w1,wzr,#0x1e0
7102ea7410  bl 0x710392e290
7102ea7414  mov x20,x0
7102ea7418  cbnz x0,0x7102ea7420
7102ea741c  mov x20,xzr
7102ea7420  ldr x8,[x22]
7102ea7424  adrp x26,0x7105146000
7102ea7428  add x26,x26,#0x980
7102ea742c  stp x26,x8,[x20]
7102ea7430  str x19,[x20, #0x10]
7102ea7434  adrp x24,0x71052a8000
7102ea7438  ldr x24,[x24, #0xa88]
7102ea743c  ldr q0,[x24]
7102ea7440  add x9,x20,#0x20
7102ea7444  mov w25,#0xffffffff
7102ea7448  str w25,[x20, #0x40]
7102ea744c  stp q0,q0,[x20, #0x20]
7102ea7450  str x9,[sp]
7102ea7454  ldr x9,[x8, #0x338]
7102ea7458  ldr x9,[x9]
7102ea745c  ldr x0,[x9, #0x8]
7102ea7460  cbz x0,0x7102ea747c
7102ea7464  mov x1,sp
7102ea7468  mov w2,wzr
7102ea746c  bl 0x7102405040
7102ea7470  ldr q0,[x24]
7102ea7474  ldr x8,[x20, #0x8]
7102ea7478  b 0x7102ea7480
7102ea747c  mov w0,#0xffffffff
7102ea7480  adrp x9,0x7105146000
7102ea7484  add x9,x9,#0xab0
7102ea7488  str w0,[x20, #0x18]
7102ea748c  str x9,[x20]
7102ea7490  orr w9,wzr,#0x3f800000
7102ea7494  strb wzr,[x20, #0x46]
7102ea7498  stp xzr,xzr,[x20, #0x120]
7102ea749c  add x21,x20,#0x108
7102ea74a0  str xzr,[x20, #0x108]
7102ea74a4  str xzr,[x20, #0x148]
7102ea74a8  str x9,[x20, #0x1a0]
7102ea74ac  str wzr,[x20, #0x1a8]
7102ea74b0  stp xzr,xzr,[x20, #0x110]
7102ea74b4  stp xzr,xzr,[x20, #0x150]
7102ea74b8  stp xzr,xzr,[x20, #0x190]
7102ea74bc  stp xzr,xzr,[x20, #0x180]
7102ea74c0  stp xzr,xzr,[x20, #0x1c0]
7102ea74c4  str q0,[x20, #0x130]
7102ea74c8  ldr x8,[x8, #0x310]
7102ea74cc  ldp x9,x10,[x8, #0xd0]
7102ea74d0  cmp x9,x10
7102ea74d4  b.eq 0x7102ea750c
7102ea74d8  mov x11,#0xd188
7102ea74dc  movk x11,#0x209d, LSL #16
7102ea74e0  movk x11,#0x6, LSL #32
7102ea74e4  ldr w8,[x9, #0x8]
7102ea74e8  cmp w8,#0x1
7102ea74ec  b.hi 0x7102ea7500
7102ea74f0  ldr x8,[x9]
7102ea74f4  ldr x12,[x8, #0x68]
7102ea74f8  cmp x12,x11
7102ea74fc  b.eq 0x7102ea7f28
7102ea7500  add x9,x9,#0x10
7102ea7504  cmp x10,x9
7102ea7508  b.ne 0x7102ea74e4
7102ea750c  str xzr,[x21]
7102ea7510  str xzr,[x20, #0x1d0]
7102ea7514  ldr q0,[x24]
7102ea7518  fmov s2,wzr
7102ea751c  ext v1.16B,v0.16B,v0.16B,0x8
7102ea7520  mov v1.S[0x1],v2.S[0x0]
7102ea7524  mov v0.D[0x1],v1.D[0x0]
7102ea7528  ldr x8,[x20, #0x8]
7102ea752c  str q0,[x20, #0x120]
7102ea7530  str q0,[x20, #0x1c0]
7102ea7534  strh wzr,[x20, #0x140]
7102ea7538  ldr x9,[x8, #0x320]
7102ea753c  ldr x9,[x9, #0x48]
7102ea7540  ldr x9,[x9, #0x320]
7102ea7544  ldr x10,[x9, #0x40]
7102ea7548  mov x23,#0x6db7
7102ea754c  movk x23,#0xb6db, LSL #16
7102ea7550  movk x23,#0xdb6d, LSL #32
7102ea7554  movk x23,#0x6db6, LSL #48
7102ea7558  ldp x9,x11,[x10]
7102ea755c  subs x10,x11,x9
7102ea7560  b.eq 0x7102ea75c8
7102ea7564  asr x10,x10,#0x4
7102ea7568  mul x10,x10,x23
7102ea756c  cmp x9,x11
7102ea7570  b.eq 0x7102ea75b0
7102ea7574  mov x13,#0x47e5
7102ea7578  movk x13,#0x3bff, LSL #16
7102ea757c  movk x13,#0x11, LSL #32
7102ea7580  mov x12,x9
7102ea7584  ldr w14,[x12]
7102ea7588  cbnz w14,0x7102ea759c
7102ea758c  ldr x14,[x12, #0x8]
7102ea7590  and x14,x14,#0xffffffffff
7102ea7594  cmp x14,x13
7102ea7598  b.eq 0x7102ea75b4
7102ea759c  add x12,x12,#0x70
7102ea75a0  cmp x11,x12
7102ea75a4  b.ne 0x7102ea7584
7102ea75a8  mov x12,x11
7102ea75ac  b 0x7102ea75b4
7102ea75b0  mov x12,x9
7102ea75b4  sub x9,x12,x9
7102ea75b8  asr x9,x9,#0x4
7102ea75bc  mul x9,x9,x23
7102ea75c0  cmp x9,x10
7102ea75c4  b.cc 0x7102ea75cc
7102ea75c8  mov w9,#0xffffffff
7102ea75cc  str w9,[x20, #0x160]
7102ea75d0  ldr x9,[x8, #0x320]
7102ea75d4  ldr x9,[x9, #0x48]
7102ea75d8  ldr x9,[x9, #0x320]
7102ea75dc  ldr x10,[x9, #0x40]
7102ea75e0  ldp x9,x11,[x10]
7102ea75e4  subs x10,x11,x9
7102ea75e8  b.eq 0x7102ea7650
7102ea75ec  asr x10,x10,#0x4
7102ea75f0  mul x10,x10,x23
7102ea75f4  cmp x9,x11
7102ea75f8  b.eq 0x7102ea7638
7102ea75fc  mov x13,#0x9450
7102ea7600  movk x13,#0xe6c8, LSL #16
7102ea7604  movk x13,#0xf, LSL #32
7102ea7608  mov x12,x9
7102ea760c  ldr w14,[x12]
7102ea7610  cbnz w14,0x7102ea7624
7102ea7614  ldr x14,[x12, #0x8]
7102ea7618  and x14,x14,#0xffffffffff
7102ea761c  cmp x14,x13
7102ea7620  b.eq 0x7102ea763c
7102ea7624  add x12,x12,#0x70
7102ea7628  cmp x11,x12
7102ea762c  b.ne 0x7102ea760c
7102ea7630  mov x12,x11
7102ea7634  b 0x7102ea763c
7102ea7638  mov x12,x9
7102ea763c  sub x9,x12,x9
7102ea7640  asr x9,x9,#0x4
7102ea7644  mul x9,x9,x23
7102ea7648  cmp x9,x10
7102ea764c  b.cc 0x7102ea7654
7102ea7650  mov w9,#0xffffffff
7102ea7654  str w9,[x20, #0x164]
7102ea7658  ldr x9,[x8, #0x320]
7102ea765c  ldr x9,[x9, #0x48]
7102ea7660  ldr x9,[x9, #0x320]
7102ea7664  ldr x10,[x9, #0x40]
7102ea7668  ldp x9,x11,[x10]
7102ea766c  subs x10,x11,x9
7102ea7670  b.eq 0x7102ea76d8
7102ea7674  asr x10,x10,#0x4
7102ea7678  mul x10,x10,x23
7102ea767c  cmp x9,x11
7102ea7680  b.eq 0x7102ea76c0
7102ea7684  mov x13,#0x734d
7102ea7688  movk x13,#0x67e, LSL #16
7102ea768c  movk x13,#0xf, LSL #32
7102ea7690  mov x12,x9
7102ea7694  ldr w14,[x12]
7102ea7698  cbnz w14,0x7102ea76ac
7102ea769c  ldr x14,[x12, #0x8]
7102ea76a0  and x14,x14,#0xffffffffff
7102ea76a4  cmp x14,x13
7102ea76a8  b.eq 0x7102ea76c4
7102ea76ac  add x12,x12,#0x70
7102ea76b0  cmp x11,x12
7102ea76b4  b.ne 0x7102ea7694
7102ea76b8  mov x12,x11
7102ea76bc  b 0x7102ea76c4
7102ea76c0  mov x12,x9
7102ea76c4  sub x9,x12,x9
7102ea76c8  asr x9,x9,#0x4
7102ea76cc  mul x9,x9,x23
7102ea76d0  cmp x9,x10
7102ea76d4  b.cc 0x7102ea76dc
7102ea76d8  mov w9,#0xffffffff
7102ea76dc  str w9,[x20, #0x168]
7102ea76e0  ldr x9,[x8, #0x320]
7102ea76e4  ldr x9,[x9, #0x48]
7102ea76e8  ldr x9,[x9, #0x320]
7102ea76ec  ldr x10,[x9, #0x40]
7102ea76f0  ldp x9,x11,[x10]
7102ea76f4  subs x10,x11,x9
7102ea76f8  b.eq 0x7102ea7760
7102ea76fc  asr x10,x10,#0x4
7102ea7700  mul x10,x10,x23
7102ea7704  cmp x9,x11
7102ea7708  b.eq 0x7102ea7748
7102ea770c  mov x13,#0x3e2e
7102ea7710  movk x13,#0xe022, LSL #16
7102ea7714  movk x13,#0xf, LSL #32
7102ea7718  mov x12,x9
7102ea771c  ldr w14,[x12]
7102ea7720  cbnz w14,0x7102ea7734
7102ea7724  ldr x14,[x12, #0x8]
7102ea7728  and x14,x14,#0xffffffffff
7102ea772c  cmp x14,x13
7102ea7730  b.eq 0x7102ea774c
7102ea7734  add x12,x12,#0x70
7102ea7738  cmp x11,x12
7102ea773c  b.ne 0x7102ea771c
7102ea7740  mov x12,x11
7102ea7744  b 0x7102ea774c
7102ea7748  mov x12,x9
7102ea774c  sub x9,x12,x9
7102ea7750  asr x9,x9,#0x4
7102ea7754  mul x9,x9,x23
7102ea7758  cmp x9,x10
7102ea775c  b.cc 0x7102ea7764
7102ea7760  mov w9,#0xffffffff
7102ea7764  str w9,[x20, #0x16c]
7102ea7768  ldr x8,[x8, #0x320]
7102ea776c  ldr x8,[x8, #0x48]
7102ea7770  ldr x8,[x8, #0x320]
7102ea7774  ldr x9,[x8, #0x40]
7102ea7778  ldp x8,x10,[x9]
7102ea777c  subs x9,x10,x8
7102ea7780  b.eq 0x7102ea77e8
7102ea7784  asr x9,x9,#0x4
7102ea7788  mul x9,x9,x23
7102ea778c  cmp x8,x10
7102ea7790  b.eq 0x7102ea77d0
7102ea7794  mov x12,#0xf699
7102ea7798  movk x12,#0xe720, LSL #16
7102ea779c  movk x12,#0xe, LSL #32
7102ea77a0  mov x11,x8
7102ea77a4  ldr w13,[x11]
7102ea77a8  cbnz w13,0x7102ea77bc
7102ea77ac  ldr x13,[x11, #0x8]
7102ea77b0  and x13,x13,#0xffffffffff
7102ea77b4  cmp x13,x12
7102ea77b8  b.eq 0x7102ea77d4
7102ea77bc  add x11,x11,#0x70
7102ea77c0  cmp x10,x11
7102ea77c4  b.ne 0x7102ea77a4
7102ea77c8  mov x11,x10
7102ea77cc  b 0x7102ea77d4
7102ea77d0  mov x11,x8
7102ea77d4  sub x8,x11,x8
7102ea77d8  asr x8,x8,#0x4
7102ea77dc  mul x8,x8,x23
7102ea77e0  cmp x8,x9
7102ea77e4  b.cc 0x7102ea77ec
7102ea77e8  mov w8,#0xffffffff
7102ea77ec  str w8,[x20, #0x170]
7102ea77f0  stp xzr,xzr,[sp, #0x8]
7102ea77f4  str xzr,[sp]
7102ea77f8  ldr x8,[x20, #0x158]
7102ea77fc  cbz x8,0x7102ea784c
7102ea7800  ldp x10,x11,[x20, #0x148]
7102ea7804  str x10,[x11]
7102ea7808  str x11,[x10, #0x8]
7102ea780c  ldr x10,[x8, #0x10]
7102ea7810  add x9,x20,#0x148
7102ea7814  sub x10,x10,#0x1
7102ea7818  str x10,[x8, #0x10]
7102ea781c  str xzr,[x9]
7102ea7820  stp xzr,xzr,[x9, #0x8]
7102ea7824  ldr x8,[sp, #0x10]
7102ea7828  cbz x8,0x7102ea784c
7102ea782c  ldp x9,x10,[sp]
7102ea7830  str x9,[x10]
7102ea7834  str x10,[x9, #0x8]
7102ea7838  ldr x9,[x8, #0x10]
7102ea783c  sub x9,x9,#0x1
7102ea7840  str x9,[x8, #0x10]
7102ea7844  stp xzr,xzr,[sp, #0x8]
7102ea7848  str xzr,[sp]
7102ea784c  ldr q0,[x24]
7102ea7850  str wzr,[x20, #0x1ac]
7102ea7854  strb wzr,[x20, #0x1b0]
7102ea7858  strh wzr,[x20, #0x44]
7102ea785c  ext v1.16B,v0.16B,v0.16B,0x8
7102ea7860  fmov s2,wzr
7102ea7864  mov v1.S[0x1],v2.S[0x0]
7102ea7868  adrp x8,0x7102eb2000
7102ea786c  add x8,x8,#0xc00
7102ea7870  stp x8,xzr,[x20, #0x48]
7102ea7874  adrp x8,0x7102eb3000
7102ea7878  add x8,x8,#0x460
7102ea787c  adrp x9,0x7102eb2000
7102ea7880  add x9,x9,#0xfe0
7102ea7884  stp x9,xzr,[x20, #0x58]
7102ea7888  adrp x9,0x7102eb4000
7102ea788c  add x9,x9,#0x540
7102ea7890  adrp x10,0x7102eb3000
7102ea7894  add x10,x10,#0x380
7102ea7898  stp x8,xzr,[x20, #0x78]
7102ea789c  adrp x8,0x7102eb3000
7102ea78a0  add x8,x8,#0xa00
7102ea78a4  strb wzr,[x20, #0x47]
7102ea78a8  mov v0.D[0x1],v1.D[0x0]
7102ea78ac  str xzr,[x20, #0x1d8]
7102ea78b0  stp x9,xzr,[x20, #0xa8]
7102ea78b4  adrp x9,0x7102eb5000
7102ea78b8  add x9,x9,#0x920
7102ea78bc  stp x8,xzr,[x20, #0x88]
7102ea78c0  adrp x8,0x7102eb3000
7102ea78c4  add x8,x8,#0xe80
7102ea78c8  mov x0,x20
7102ea78cc  stp x9,xzr,[x20, #0xe8]
7102ea78d0  ldr x9,[x20]
7102ea78d4  stp x8,xzr,[x20, #0x98]
7102ea78d8  adrp x8,0x7102eb5000
7102ea78dc  add x8,x8,#0x220
7102ea78e0  stp x10,xzr,[x20, #0x68]
7102ea78e4  adrp x10,0x7102eb4000
7102ea78e8  add x10,x10,#0xa40
7102ea78ec  stp x8,xzr,[x20, #0xc8]
7102ea78f0  adrp x8,0x7102eb5000
7102ea78f4  add x8,x8,#0x9d0
7102ea78f8  stp x10,xzr,[x20, #0xb8]
7102ea78fc  stp x8,xzr,[x20, #0xd8]
7102ea7900  stp q0,q0,[x20, #0x180]
7102ea7904  ldr x8,[x9, #0x18]
7102ea7908  blr x8
7102ea790c  ldr x0,[x22, #0x2d0]
7102ea7910  str x20,[x22, #0x2d0]
7102ea7914  cbz x0,0x7102ea7924
7102ea7918  ldr x8,[x0]
7102ea791c  ldr x8,[x8, #0x8]
7102ea7920  blr x8
7102ea7924  mov w1,#0x3b0
7102ea7928  mov w0,#0x10
7102ea792c  bl 0x710392e290
7102ea7930  mov x20,x0
7102ea7934  cbnz x0,0x7102ea7980
7102ea7938  adrp x8,0x7105332000
7102ea793c  ldr x0,[x8, #0xf00]
7102ea7940  cbz x0,0x7102ea797c
7102ea7944  mov w8,#0x3b0
7102ea7948  str wzr,[sp, #0x1c]
7102ea794c  add x1,sp,#0x1c
7102ea7950  str x8,[sp]
7102ea7954  ldr x8,[x0]
7102ea7958  ldr x8,[x8, #0x30]
7102ea795c  mov x2,sp
7102ea7960  blr x8
7102ea7964  tbz w0,#0x0,0x7102ea797c
7102ea7968  mov w1,#0x3b0
7102ea796c  mov w0,#0x10
7102ea7970  bl 0x710392e290
7102ea7974  mov x20,x0
7102ea7978  cbnz x0,0x7102ea7980
7102ea797c  mov x20,xzr
7102ea7980  ldr x21,[x22]
7102ea7984  stp x26,x21,[x20]
7102ea7988  str x19,[x20, #0x10]
7102ea798c  ldr q0,[x24]
7102ea7990  add x8,x20,#0x20
7102ea7994  stp q0,q0,[x20, #0x20]
7102ea7998  str w25,[x20, #0x40]
7102ea799c  str x8,[sp]
7102ea79a0  ldr x8,[x21, #0x338]
7102ea79a4  ldr x8,[x8]
7102ea79a8  ldr x0,[x8, #0x8]
7102ea79ac  cbz x0,0x7102ea79c0
7102ea79b0  mov x1,sp
7102ea79b4  mov w2,wzr
7102ea79b8  bl 0x7102405040
7102ea79bc  b 0x7102ea79c4
7102ea79c0  mov w0,w25
7102ea79c4  adrp x8,0x7105146000
7102ea79c8  add x8,x8,#0xa10
7102ea79cc  str w0,[x20, #0x18]
7102ea79d0  str x8,[x20]
7102ea79d4  strb wzr,[x20, #0xa8]
7102ea79d8  adrp x27,0x71052a8000
7102ea79dc  strb wzr,[x20, #0xaa]
7102ea79e0  mov w26,#0x1
7102ea79e4  adrp x28,0x710532a000
7102ea79e8  stp xzr,xzr,[x20, #0x120]
7102ea79ec  add x2,x20,#0x160
7102ea79f0  mov x1,x21
7102ea79f4  stur xzr,[x20, #0xc2]
7102ea79f8  stur xzr,[x20, #0xbc]
7102ea79fc  str xzr,[x20, #0x148]
7102ea7a00  stp xzr,xzr,[x20, #0x100]
7102ea7a04  stp xzr,xzr,[x20, #0xf0]
7102ea7a08  stp xzr,xzr,[x20, #0xe0]
7102ea7a0c  stp xzr,xzr,[x20, #0xd0]
7102ea7a10  stp xzr,xzr,[x20, #0x150]
7102ea7a14  ldr x27,[x27, #0xa80]
7102ea7a18  ldr q0,[x27]
7102ea7a1c  str x21,[x20, #0x160]
7102ea7a20  strh w26,[x20, #0x168]
7102ea7a24  strb wzr,[x20, #0x16a]
7102ea7a28  str w25,[x20, #0x16c]
7102ea7a2c  str wzr,[x20, #0x1a0]
7102ea7a30  stp xzr,xzr,[x20, #0x190]
7102ea7a34  stp q0,q0,[x20, #0x170]
7102ea7a38  ldr x8,[x28, #0x9d8]
7102ea7a3c  ldr x8,[x8]
7102ea7a40  ldr x0,[x8, #0x1c8]
7102ea7a44  bl 0x71031675b0
7102ea7a48  and w8,w0,#0x1
7102ea7a4c  strb w8,[x20, #0x168]
7102ea7a50  ldr q0,[x24]
7102ea7a54  str wzr,[x20, #0x130]
7102ea7a58  strb w26,[x20, #0x134]
7102ea7a5c  str xzr,[x20, #0x138]
7102ea7a60  ext v1.16B,v0.16B,v0.16B,0x8
7102ea7a64  fmov s2,wzr
7102ea7a68  mov v1.S[0x1],v2.S[0x0]
7102ea7a6c  mov v0.D[0x1],v1.D[0x0]
7102ea7a70  str q0,[x20, #0x120]
7102ea7a74  stp xzr,xzr,[sp, #0x8]
7102ea7a78  str xzr,[sp]
7102ea7a7c  ldr x8,[x20, #0x158]
7102ea7a80  cbz x8,0x7102ea7ad0
7102ea7a84  ldp x10,x11,[x20, #0x148]
7102ea7a88  str x10,[x11]
7102ea7a8c  str x11,[x10, #0x8]
7102ea7a90  ldr x10,[x8, #0x10]
7102ea7a94  add x9,x20,#0x148
7102ea7a98  sub x10,x10,#0x1
7102ea7a9c  str x10,[x8, #0x10]
7102ea7aa0  str xzr,[x9]
7102ea7aa4  stp xzr,xzr,[x9, #0x8]
7102ea7aa8  ldr x8,[sp, #0x10]
7102ea7aac  cbz x8,0x7102ea7ad0
7102ea7ab0  ldp x9,x10,[sp]
7102ea7ab4  str x9,[x10]
7102ea7ab8  str x10,[x9, #0x8]
7102ea7abc  ldr x9,[x8, #0x10]
7102ea7ac0  sub x9,x9,#0x1
7102ea7ac4  str x9,[x8, #0x10]
7102ea7ac8  stp xzr,xzr,[sp, #0x8]
7102ea7acc  str xzr,[sp]
7102ea7ad0  str w25,[x20, #0x140]
7102ea7ad4  str x25,[x20, #0x1b0]
7102ea7ad8  add x2,x20,#0x200
7102ea7adc  stp xzr,xzr,[x20, #0x1c0]
7102ea7ae0  mov x1,x21
7102ea7ae4  str xzr,[x20, #0x1e8]
7102ea7ae8  stp xzr,xzr,[x20, #0x1f0]
7102ea7aec  ldr q0,[x27]
7102ea7af0  str x21,[x20, #0x200]
7102ea7af4  strh w26,[x20, #0x208]
7102ea7af8  strb wzr,[x20, #0x20a]
7102ea7afc  str w25,[x20, #0x20c]
7102ea7b00  str wzr,[x20, #0x240]
7102ea7b04  str xzr,[x20, #0x238]
7102ea7b08  str xzr,[x20, #0x230]
7102ea7b0c  stp q0,q0,[x20, #0x210]
7102ea7b10  ldr x8,[x28, #0x9d8]
7102ea7b14  ldr x8,[x8]
7102ea7b18  ldr x0,[x8, #0x1c8]
7102ea7b1c  bl 0x71031675b0
7102ea7b20  and w8,w0,#0x1
7102ea7b24  strb w8,[x20, #0x208]
7102ea7b28  ldr q0,[x24]
7102ea7b2c  str wzr,[x20, #0x1d0]
7102ea7b30  strb w26,[x20, #0x1d4]
7102ea7b34  str xzr,[x20, #0x1d8]
7102ea7b38  ext v1.16B,v0.16B,v0.16B,0x8
7102ea7b3c  fmov s2,wzr
7102ea7b40  mov v1.S[0x1],v2.S[0x0]
7102ea7b44  mov v0.D[0x1],v1.D[0x0]
7102ea7b48  str q0,[x20, #0x1c0]
7102ea7b4c  stp xzr,xzr,[sp, #0x8]
7102ea7b50  str xzr,[sp]
7102ea7b54  ldr x8,[x20, #0x1f8]
7102ea7b58  cbz x8,0x7102ea7ba8
7102ea7b5c  ldp x10,x11,[x20, #0x1e8]
7102ea7b60  str x10,[x11]
7102ea7b64  str x11,[x10, #0x8]
7102ea7b68  ldr x10,[x8, #0x10]
7102ea7b6c  add x9,x20,#0x1e8
7102ea7b70  sub x10,x10,#0x1
7102ea7b74  str x10,[x8, #0x10]
7102ea7b78  str xzr,[x9]
7102ea7b7c  stp xzr,xzr,[x9, #0x8]
7102ea7b80  ldr x8,[sp, #0x10]
7102ea7b84  cbz x8,0x7102ea7ba8
7102ea7b88  ldp x9,x10,[sp]
7102ea7b8c  str x9,[x10]
7102ea7b90  str x10,[x9, #0x8]
7102ea7b94  ldr x9,[x8, #0x10]
7102ea7b98  sub x9,x9,#0x1
7102ea7b9c  str x9,[x8, #0x10]
7102ea7ba0  stp xzr,xzr,[sp, #0x8]
7102ea7ba4  str xzr,[sp]
7102ea7ba8  add x8,x20,#0x263
7102ea7bac  str w25,[x20, #0x1e0]
7102ea7bb0  str x25,[x20, #0x250]
7102ea7bb4  strh wzr,[x8]
7102ea7bb8  add x8,x20,#0x374
7102ea7bbc  strb wzr,[x20, #0x265]
7102ea7bc0  str xzr,[x20, #0x268]
7102ea7bc4  ldr q0,[x24]
7102ea7bc8  strb wzr,[x20, #0x364]
7102ea7bcc  strb wzr,[x20, #0x370]
7102ea7bd0  str xzr,[x20, #0x368]
7102ea7bd4  strb wzr,[x20, #0x37c]
7102ea7bd8  str q0,[x20, #0x270]
7102ea7bdc  movi v0.2D,#0x0
7102ea7be0  str xzr,[x8]
7102ea7be4  add x8,x20,#0x38c
7102ea7be8  strb wzr,[x20, #0x388]
7102ea7bec  str xzr,[x20, #0x380]
7102ea7bf0  str xzr,[x8]
7102ea7bf4  add x8,x20,#0x3a4
7102ea7bf8  strb wzr,[x20, #0x394]
7102ea7bfc  strb wzr,[x20, #0x3a0]
7102ea7c00  str xzr,[x20, #0x398]
7102ea7c04  str xzr,[x8]
7102ea7c08  add x8,x22,#0x28
7102ea7c0c  strb wzr,[x20, #0x360]
7102ea7c10  str xzr,[x20, #0x358]
7102ea7c14  str xzr,[x20, #0x350]
7102ea7c18  str xzr,[x20, #0x348]
7102ea7c1c  str xzr,[x20, #0x340]
7102ea7c20  str xzr,[x20, #0x338]
7102ea7c24  str xzr,[x20, #0x330]
7102ea7c28  str xzr,[x20, #0x328]
7102ea7c2c  str xzr,[x20, #0x320]
7102ea7c30  str xzr,[x20, #0x318]
7102ea7c34  str xzr,[x20, #0x310]
7102ea7c38  str xzr,[x20, #0x308]
7102ea7c3c  str xzr,[x20, #0x300]
7102ea7c40  str xzr,[x20, #0x2f8]
7102ea7c44  str xzr,[x20, #0x2f0]
7102ea7c48  str xzr,[x20, #0x2e8]
7102ea7c4c  str xzr,[x20, #0x2e0]
7102ea7c50  str xzr,[x20, #0x2d8]
7102ea7c54  str xzr,[x20, #0x2d0]
7102ea7c58  str xzr,[x20, #0x2c8]
7102ea7c5c  str xzr,[x20, #0x2c0]
7102ea7c60  str xzr,[x20, #0x2b8]
7102ea7c64  str xzr,[x20, #0x2b0]
7102ea7c68  str xzr,[x20, #0x2a8]
7102ea7c6c  str xzr,[x20, #0x2a0]
7102ea7c70  str xzr,[x20, #0x298]
7102ea7c74  str xzr,[x20, #0x290]
7102ea7c78  str xzr,[x20, #0x288]
7102ea7c7c  str xzr,[x20, #0x280]
7102ea7c80  ld1 {v0.S}[0],[x8]
7102ea7c84  add x8,x22,#0x2c
7102ea7c88  ld1 {v0.S}[1],[x8]
7102ea7c8c  add x8,x22,#0x30
7102ea7c90  ld1 {v0.S}[2],[x8]
7102ea7c94  ldr x8,[x20, #0x8]
7102ea7c98  str wzr,[x20, #0xb8]
7102ea7c9c  str q0,[x20, #0x20]
7102ea7ca0  ldr x9,[x8, #0x320]
7102ea7ca4  ldr x9,[x9, #0x48]
7102ea7ca8  ldr x9,[x9, #0x320]
7102ea7cac  ldr x10,[x9, #0x40]
7102ea7cb0  ldp x9,x11,[x10]
7102ea7cb4  subs x10,x11,x9
7102ea7cb8  b.eq 0x7102ea7d20
7102ea7cbc  asr x10,x10,#0x4
7102ea7cc0  mul x10,x10,x23
7102ea7cc4  cmp x9,x11
7102ea7cc8  b.eq 0x7102ea7d08
7102ea7ccc  mov x13,#0x1d19
7102ea7cd0  movk x13,#0x9afa, LSL #16
7102ea7cd4  movk x13,#0xf, LSL #32
7102ea7cd8  mov x12,x9
7102ea7cdc  ldr w14,[x12]
7102ea7ce0  cbnz w14,0x7102ea7cf4
7102ea7ce4  ldr x14,[x12, #0x8]
7102ea7ce8  and x14,x14,#0xffffffffff
7102ea7cec  cmp x14,x13
7102ea7cf0  b.eq 0x7102ea7d0c
7102ea7cf4  add x12,x12,#0x70
7102ea7cf8  cmp x11,x12
7102ea7cfc  b.ne 0x7102ea7cdc
7102ea7d00  mov x12,x11
7102ea7d04  b 0x7102ea7d0c
7102ea7d08  mov x12,x9
7102ea7d0c  sub x9,x12,x9
7102ea7d10  asr x9,x9,#0x4
7102ea7d14  mul x9,x9,x23
7102ea7d18  cmp x9,x10
7102ea7d1c  b.cc 0x7102ea7d24
7102ea7d20  mov w9,#0xffffffff
7102ea7d24  str w9,[x20, #0xac]
7102ea7d28  ldr x9,[x8, #0x320]
7102ea7d2c  ldr x9,[x9, #0x48]
7102ea7d30  ldr x9,[x9, #0x320]
7102ea7d34  ldr x10,[x9, #0x40]
7102ea7d38  ldp x9,x11,[x10]
7102ea7d3c  subs x10,x11,x9
7102ea7d40  b.eq 0x7102ea7da8
7102ea7d44  asr x10,x10,#0x4
7102ea7d48  mul x10,x10,x23
7102ea7d4c  cmp x9,x11
7102ea7d50  b.eq 0x7102ea7d90
7102ea7d54  mov x13,#0xcb96
7102ea7d58  movk x13,#0xcdd2, LSL #16
7102ea7d5c  movk x13,#0x15, LSL #32
7102ea7d60  mov x12,x9
7102ea7d64  ldr w14,[x12]
7102ea7d68  cbnz w14,0x7102ea7d7c
7102ea7d6c  ldr x14,[x12, #0x8]
7102ea7d70  and x14,x14,#0xffffffffff
7102ea7d74  cmp x14,x13
7102ea7d78  b.eq 0x7102ea7d94
7102ea7d7c  add x12,x12,#0x70
7102ea7d80  cmp x11,x12
7102ea7d84  b.ne 0x7102ea7d64
7102ea7d88  mov x12,x11
7102ea7d8c  b 0x7102ea7d94
7102ea7d90  mov x12,x9
7102ea7d94  sub x9,x12,x9
7102ea7d98  asr x9,x9,#0x4
7102ea7d9c  mul x9,x9,x23
7102ea7da0  cmp x9,x10
7102ea7da4  b.cc 0x7102ea7dac
7102ea7da8  mov w9,#0xffffffff
7102ea7dac  str w9,[x20, #0xb0]
7102ea7db0  ldr x9,[x8, #0x320]
7102ea7db4  ldr x9,[x9, #0x48]
7102ea7db8  ldr x9,[x9, #0x320]
7102ea7dbc  ldr x10,[x9, #0x40]
7102ea7dc0  ldp x9,x11,[x10]
7102ea7dc4  subs x10,x11,x9
7102ea7dc8  b.eq 0x7102ea7e30
7102ea7dcc  asr x10,x10,#0x4
7102ea7dd0  mul x10,x10,x23
7102ea7dd4  cmp x9,x11
7102ea7dd8  b.eq 0x7102ea7e18
7102ea7ddc  mov x13,#0xdf6a
7102ea7de0  movk x13,#0x1e15, LSL #16
7102ea7de4  movk x13,#0xf, LSL #32
7102ea7de8  mov x12,x9
7102ea7dec  ldr w14,[x12]
7102ea7df0  cbnz w14,0x7102ea7e04
7102ea7df4  ldr x14,[x12, #0x8]
7102ea7df8  and x14,x14,#0xffffffffff
7102ea7dfc  cmp x14,x13
7102ea7e00  b.eq 0x7102ea7e1c
7102ea7e04  add x12,x12,#0x70
7102ea7e08  cmp x11,x12
7102ea7e0c  b.ne 0x7102ea7dec
7102ea7e10  mov x12,x11
7102ea7e14  b 0x7102ea7e1c
7102ea7e18  mov x12,x9
7102ea7e1c  sub x9,x12,x9
7102ea7e20  asr x9,x9,#0x4
7102ea7e24  mul x9,x9,x23
7102ea7e28  cmp x9,x10
7102ea7e2c  b.cc 0x7102ea7e34
7102ea7e30  mov w9,#0xffffffff
7102ea7e34  str w9,[x20, #0xb4]
7102ea7e38  strh wzr,[x20, #0x260]
7102ea7e3c  strb wzr,[x20, #0x262]
7102ea7e40  ldr x8,[x8, #0x310]
7102ea7e44  ldp x9,x10,[x8, #0xd0]
7102ea7e48  cmp x9,x10
7102ea7e4c  b.eq 0x7102ea7e84
7102ea7e50  mov x11,#0x2a91
7102ea7e54  movk x11,#0x2893, LSL #16
7102ea7e58  movk x11,#0x8, LSL #32
7102ea7e5c  ldr w8,[x9, #0x8]
7102ea7e60  cmp w8,#0x1
7102ea7e64  b.hi 0x7102ea7e78
7102ea7e68  ldr x8,[x9]
7102ea7e6c  ldr x12,[x8, #0x68]
7102ea7e70  cmp x12,x11
7102ea7e74  b.eq 0x7102ea7f80
7102ea7e78  add x9,x9,#0x10
7102ea7e7c  cmp x10,x9
7102ea7e80  b.ne 0x7102ea7e5c
7102ea7e84  str xzr,[x20, #0x268]
7102ea7e88  ldr x8,[x20, #0x8]
7102ea7e8c  mov w21,#0x8000
7102ea7e90  movk w21,#0x4427, LSL #16
7102ea7e94  str w21,[x20, #0x36c]
7102ea7e98  ldr x1,[x8, #0x320]
7102ea7e9c  mov x2,#0xbe8e
7102ea7ea0  movk x2,#0xd94a, LSL #16
7102ea7ea4  movk x2,#0x10, LSL #32
7102ea7ea8  mov x0,sp
7102ea7eac  mov x23,sp
7102ea7eb0  bl 0x7102626be0
7102ea7eb4  add x9,x20,#0x290
7102ea7eb8  cmp x23,x9
7102ea7ebc  b.eq 0x7102ea8000
7102ea7ec0  ldr x10,[x20, #0x2a0]
7102ea7ec4  ldr x8,[sp, #0x10]
7102ea7ec8  cmp x10,x8
7102ea7ecc  b.eq 0x7102ea8004
7102ea7ed0  cbz x8,0x7102ea7fd8
7102ea7ed4  cbz x10,0x7102ea7efc
7102ea7ed8  ldr x11,[x9]
7102ea7edc  ldr x12,[x20, #0x298]
7102ea7ee0  str x11,[x12]
7102ea7ee4  str x12,[x11, #0x8]
7102ea7ee8  ldr x11,[x10, #0x10]
7102ea7eec  sub x11,x11,#0x1
7102ea7ef0  str x11,[x10, #0x10]
7102ea7ef4  stp xzr,xzr,[x9, #0x8]
7102ea7ef8  str xzr,[x9]
7102ea7efc  ldr x11,[x8, #0x20]
7102ea7f00  add x10,x8,#0x18
7102ea7f04  str x10,[x20, #0x290]
7102ea7f08  str x11,[x20, #0x298]
7102ea7f0c  str x9,[x8, #0x20]
7102ea7f10  str x9,[x11]
7102ea7f14  ldr x9,[x8, #0x10]
7102ea7f18  add x9,x9,#0x1
7102ea7f1c  str x9,[x8, #0x10]
7102ea7f20  str x8,[x20, #0x2a0]
7102ea7f24  b 0x7102ea8000
7102ea7f28  str x8,[x21]
7102ea7f2c  cbz x8,0x7102ea7f40
7102ea7f30  add x0,x8,#0x108
7102ea7f34  strb wzr,[x8, #0x110]
7102ea7f38  bl 0x71025e9d50
7102ea7f3c  ldr x8,[x21]
7102ea7f40  cbz x8,0x7102ea7510
7102ea7f44  ldrb w9,[x8, #0xe0]
7102ea7f48  cbz w9,0x7102ea7f5c
7102ea7f4c  ldr x9,[x8, #0xc8]
7102ea7f50  cbz x9,0x7102ea7f5c
7102ea7f54  mov w10,#0x101
7102ea7f58  strh w10,[x9, #0x30]
7102ea7f5c  ldr x9,[x8, #0xd8]
7102ea7f60  cbz x9,0x7102ea7f6c
7102ea7f64  mov w10,#0x1
7102ea7f68  strb w10,[x9, #0x21]
7102ea7f6c  ldrb w9,[x8, #0xe0]
7102ea7f70  cbz w9,0x7102ea7510
7102ea7f74  ldr x8,[x8, #0xb0]
7102ea7f78  strb wzr,[x8, #0x10]
7102ea7f7c  b 0x7102ea7510
7102ea7f80  str x8,[x20, #0x268]
7102ea7f84  cbz x8,0x7102ea7f98
7102ea7f88  add x0,x8,#0x108
7102ea7f8c  strb wzr,[x8, #0x110]
7102ea7f90  bl 0x71025e9d50
7102ea7f94  ldr x8,[x20, #0x268]
7102ea7f98  cbz x8,0x7102ea7e88
7102ea7f9c  ldrb w9,[x8, #0xe0]
7102ea7fa0  cbz w9,0x7102ea7fb4
7102ea7fa4  ldr x9,[x8, #0xc8]
7102ea7fa8  cbz x9,0x7102ea7fb4
7102ea7fac  mov w10,#0x101
7102ea7fb0  strh w10,[x9, #0x30]
7102ea7fb4  ldr x9,[x8, #0xd8]
7102ea7fb8  cbz x9,0x7102ea7fc4
7102ea7fbc  mov w10,#0x1
7102ea7fc0  strb w10,[x9, #0x21]
7102ea7fc4  ldrb w9,[x8, #0xe0]
7102ea7fc8  cbz w9,0x7102ea7e88
7102ea7fcc  ldr x8,[x8, #0xb0]
7102ea7fd0  strb wzr,[x8, #0x10]
7102ea7fd4  b 0x7102ea7e88
7102ea7fd8  cbz x10,0x7102ea8000
7102ea7fdc  ldr x8,[x20, #0x290]
7102ea7fe0  ldr x11,[x20, #0x298]
7102ea7fe4  str x8,[x11]
7102ea7fe8  str x11,[x8, #0x8]
7102ea7fec  ldr x8,[x10, #0x10]
7102ea7ff0  sub x8,x8,#0x1
7102ea7ff4  str x8,[x10, #0x10]
7102ea7ff8  stp xzr,xzr,[x9, #0x8]
7102ea7ffc  str xzr,[x9]
7102ea8000  ldr x8,[sp, #0x10]
7102ea8004  cbz x8,0x7102ea8028
7102ea8008  ldp x9,x10,[sp]
7102ea800c  str x9,[x10]
7102ea8010  str x10,[x9, #0x8]
7102ea8014  ldr x9,[x8, #0x10]
7102ea8018  sub x9,x9,#0x1
7102ea801c  str x9,[x8, #0x10]
7102ea8020  stp xzr,xzr,[sp, #0x8]
7102ea8024  str xzr,[sp]
7102ea8028  ldr x8,[x20, #0x8]
7102ea802c  str w21,[x20, #0x378]
7102ea8030  ldr x1,[x8, #0x320]
7102ea8034  mov x2,#0x2b2d
7102ea8038  movk x2,#0x472e, LSL #16
7102ea803c  movk x2,#0x10, LSL #32
7102ea8040  mov x0,sp
7102ea8044  mov x23,sp
7102ea8048  bl 0x7102626be0
7102ea804c  add x9,x20,#0x2a8
7102ea8050  cmp x23,x9
7102ea8054  b.eq 0x7102ea80e8
7102ea8058  ldr x10,[x20, #0x2b8]
7102ea805c  ldr x8,[sp, #0x10]
7102ea8060  cmp x10,x8
7102ea8064  b.eq 0x7102ea80ec
7102ea8068  cbz x8,0x7102ea80c0
7102ea806c  cbz x10,0x7102ea8094
7102ea8070  ldr x11,[x9]
7102ea8074  ldr x12,[x20, #0x2b0]
7102ea8078  str x11,[x12]
7102ea807c  str x12,[x11, #0x8]
7102ea8080  ldr x11,[x10, #0x10]
7102ea8084  sub x11,x11,#0x1
7102ea8088  str x11,[x10, #0x10]
7102ea808c  stp xzr,xzr,[x9, #0x8]
7102ea8090  str xzr,[x9]
7102ea8094  ldr x11,[x8, #0x20]
7102ea8098  add x10,x8,#0x18
7102ea809c  str x10,[x20, #0x2a8]
7102ea80a0  str x11,[x20, #0x2b0]
7102ea80a4  str x9,[x8, #0x20]
7102ea80a8  str x9,[x11]
7102ea80ac  ldr x9,[x8, #0x10]
7102ea80b0  add x9,x9,#0x1
7102ea80b4  str x9,[x8, #0x10]
7102ea80b8  str x8,[x20, #0x2b8]
7102ea80bc  b 0x7102ea80e8
7102ea80c0  cbz x10,0x7102ea80e8
7102ea80c4  ldr x8,[x20, #0x2a8]
7102ea80c8  ldr x11,[x20, #0x2b0]
7102ea80cc  str x8,[x11]
7102ea80d0  str x11,[x8, #0x8]
7102ea80d4  ldr x8,[x10, #0x10]
7102ea80d8  sub x8,x8,#0x1
7102ea80dc  str x8,[x10, #0x10]
7102ea80e0  stp xzr,xzr,[x9, #0x8]
7102ea80e4  str xzr,[x9]
7102ea80e8  ldr x8,[sp, #0x10]
7102ea80ec  cbz x8,0x7102ea8110
7102ea80f0  ldp x9,x10,[sp]
7102ea80f4  str x9,[x10]
7102ea80f8  str x10,[x9, #0x8]
7102ea80fc  ldr x9,[x8, #0x10]
7102ea8100  sub x9,x9,#0x1
7102ea8104  str x9,[x8, #0x10]
7102ea8108  stp xzr,xzr,[sp, #0x8]
7102ea810c  str xzr,[sp]
7102ea8110  ldr x8,[x20, #0x8]
7102ea8114  mov w23,#0x43000000
7102ea8118  str w23,[x20, #0x384]
7102ea811c  ldr x1,[x8, #0x320]
7102ea8120  mov x2,#0xdfa2
7102ea8124  movk x2,#0x3744, LSL #16
7102ea8128  movk x2,#0x10, LSL #32
7102ea812c  mov x0,sp
7102ea8130  mov x24,sp
7102ea8134  bl 0x7102626be0
7102ea8138  add x9,x20,#0x2c0
7102ea813c  cmp x24,x9
7102ea8140  b.eq 0x7102ea81d4
7102ea8144  ldr x10,[x20, #0x2d0]
7102ea8148  ldr x8,[sp, #0x10]
7102ea814c  cmp x10,x8
7102ea8150  b.eq 0x7102ea81d8
7102ea8154  cbz x8,0x7102ea81ac
7102ea8158  cbz x10,0x7102ea8180
7102ea815c  ldr x11,[x9]
7102ea8160  ldr x12,[x20, #0x2c8]
7102ea8164  str x11,[x12]
7102ea8168  str x12,[x11, #0x8]
7102ea816c  ldr x11,[x10, #0x10]
7102ea8170  sub x11,x11,#0x1
7102ea8174  str x11,[x10, #0x10]
7102ea8178  stp xzr,xzr,[x9, #0x8]
7102ea817c  str xzr,[x9]
7102ea8180  ldr x11,[x8, #0x20]
7102ea8184  add x10,x8,#0x18
7102ea8188  str x10,[x20, #0x2c0]
7102ea818c  str x11,[x20, #0x2c8]
7102ea8190  str x9,[x8, #0x20]
7102ea8194  str x9,[x11]
7102ea8198  ldr x9,[x8, #0x10]
7102ea819c  add x9,x9,#0x1
7102ea81a0  str x9,[x8, #0x10]
7102ea81a4  str x8,[x20, #0x2d0]
7102ea81a8  b 0x7102ea81d4
7102ea81ac  cbz x10,0x7102ea81d4
7102ea81b0  ldr x8,[x20, #0x2c0]
7102ea81b4  ldr x11,[x20, #0x2c8]
7102ea81b8  str x8,[x11]
7102ea81bc  str x11,[x8, #0x8]
7102ea81c0  ldr x8,[x10, #0x10]
7102ea81c4  sub x8,x8,#0x1
7102ea81c8  str x8,[x10, #0x10]
7102ea81cc  stp xzr,xzr,[x9, #0x8]
7102ea81d0  str xzr,[x9]
7102ea81d4  ldr x8,[sp, #0x10]
7102ea81d8  cbz x8,0x7102ea81fc
7102ea81dc  ldp x9,x10,[sp]
7102ea81e0  str x9,[x10]
7102ea81e4  str x10,[x9, #0x8]
7102ea81e8  ldr x9,[x8, #0x10]
7102ea81ec  sub x9,x9,#0x1
7102ea81f0  str x9,[x8, #0x10]
7102ea81f4  stp xzr,xzr,[sp, #0x8]
7102ea81f8  str xzr,[sp]
7102ea81fc  ldr x8,[x20, #0x8]
7102ea8200  str w23,[x20, #0x390]
7102ea8204  ldr x1,[x8, #0x320]
7102ea8208  mov x2,#0x7a97
7102ea820c  movk x2,#0xde27, LSL #16
7102ea8210  movk x2,#0x10, LSL #32
7102ea8214  mov x0,sp
7102ea8218  mov x23,sp
7102ea821c  bl 0x7102626be0
7102ea8220  add x9,x20,#0x2d8
7102ea8224  cmp x23,x9
7102ea8228  b.eq 0x7102ea82bc
7102ea822c  ldr x10,[x20, #0x2e8]
7102ea8230  ldr x8,[sp, #0x10]
7102ea8234  cmp x10,x8
7102ea8238  b.eq 0x7102ea82c0
7102ea823c  cbz x8,0x7102ea8294
7102ea8240  cbz x10,0x7102ea8268
7102ea8244  ldr x11,[x9]
7102ea8248  ldr x12,[x20, #0x2e0]
7102ea824c  str x11,[x12]
7102ea8250  str x12,[x11, #0x8]
7102ea8254  ldr x11,[x10, #0x10]
7102ea8258  sub x11,x11,#0x1
7102ea825c  str x11,[x10, #0x10]
7102ea8260  stp xzr,xzr,[x9, #0x8]
7102ea8264  str xzr,[x9]
7102ea8268  ldr x11,[x8, #0x20]
7102ea826c  add x10,x8,#0x18
7102ea8270  str x10,[x20, #0x2d8]
7102ea8274  str x11,[x20, #0x2e0]
7102ea8278  str x9,[x8, #0x20]
7102ea827c  str x9,[x11]
7102ea8280  ldr x9,[x8, #0x10]
7102ea8284  add x9,x9,#0x1
7102ea8288  str x9,[x8, #0x10]
7102ea828c  str x8,[x20, #0x2e8]
7102ea8290  b 0x7102ea82bc
7102ea8294  cbz x10,0x7102ea82bc
7102ea8298  ldr x8,[x20, #0x2d8]
7102ea829c  ldr x11,[x20, #0x2e0]
7102ea82a0  str x8,[x11]
7102ea82a4  str x11,[x8, #0x8]
7102ea82a8  ldr x8,[x10, #0x10]
7102ea82ac  sub x8,x8,#0x1
7102ea82b0  str x8,[x10, #0x10]
7102ea82b4  stp xzr,xzr,[x9, #0x8]
7102ea82b8  str xzr,[x9]
7102ea82bc  ldr x8,[sp, #0x10]
7102ea82c0  cbz x8,0x7102ea82e4
7102ea82c4  ldp x9,x10,[sp]
7102ea82c8  str x9,[x10]
7102ea82cc  str x10,[x9, #0x8]
7102ea82d0  ldr x9,[x8, #0x10]
7102ea82d4  sub x9,x9,#0x1
7102ea82d8  str x9,[x8, #0x10]
7102ea82dc  stp xzr,xzr,[sp, #0x8]
7102ea82e0  str xzr,[sp]
7102ea82e4  ldr x8,[x20, #0x8]
7102ea82e8  str w21,[x20, #0x39c]
7102ea82ec  ldr x1,[x8, #0x320]
7102ea82f0  mov x2,#0xef34
7102ea82f4  movk x2,#0x4043, LSL #16
7102ea82f8  movk x2,#0x10, LSL #32
7102ea82fc  mov x0,sp
7102ea8300  mov x23,sp
7102ea8304  bl 0x7102626be0
7102ea8308  add x9,x20,#0x2f0
7102ea830c  cmp x23,x9
7102ea8310  b.eq 0x7102ea83a4
7102ea8314  ldr x10,[x20, #0x300]
7102ea8318  ldr x8,[sp, #0x10]
7102ea831c  cmp x10,x8
7102ea8320  b.eq 0x7102ea83a8
7102ea8324  cbz x8,0x7102ea837c
7102ea8328  cbz x10,0x7102ea8350
7102ea832c  ldr x11,[x9]
7102ea8330  ldr x12,[x20, #0x2f8]
7102ea8334  str x11,[x12]
7102ea8338  str x12,[x11, #0x8]
7102ea833c  ldr x11,[x10, #0x10]
7102ea8340  sub x11,x11,#0x1
7102ea8344  str x11,[x10, #0x10]
7102ea8348  stp xzr,xzr,[x9, #0x8]
7102ea834c  str xzr,[x9]
7102ea8350  ldr x11,[x8, #0x20]
7102ea8354  add x10,x8,#0x18
7102ea8358  str x10,[x20, #0x2f0]
7102ea835c  str x11,[x20, #0x2f8]
7102ea8360  str x9,[x8, #0x20]
7102ea8364  str x9,[x11]
7102ea8368  ldr x9,[x8, #0x10]
7102ea836c  add x9,x9,#0x1
7102ea8370  str x9,[x8, #0x10]
7102ea8374  str x8,[x20, #0x300]
7102ea8378  b 0x7102ea83a4
7102ea837c  cbz x10,0x7102ea83a4
7102ea8380  ldr x8,[x20, #0x2f0]
7102ea8384  ldr x11,[x20, #0x2f8]
7102ea8388  str x8,[x11]
7102ea838c  str x11,[x8, #0x8]
7102ea8390  ldr x8,[x10, #0x10]
7102ea8394  sub x8,x8,#0x1
7102ea8398  str x8,[x10, #0x10]
7102ea839c  stp xzr,xzr,[x9, #0x8]
7102ea83a0  str xzr,[x9]
7102ea83a4  ldr x8,[sp, #0x10]
7102ea83a8  cbz x8,0x7102ea83cc
7102ea83ac  ldp x9,x10,[sp]
7102ea83b0  str x9,[x10]
7102ea83b4  str x10,[x9, #0x8]
7102ea83b8  ldr x9,[x8, #0x10]
7102ea83bc  sub x9,x9,#0x1
7102ea83c0  str x9,[x8, #0x10]
7102ea83c4  stp xzr,xzr,[sp, #0x8]
7102ea83c8  str xzr,[sp]
7102ea83cc  ldr x8,[x20, #0x8]
7102ea83d0  str w21,[x20, #0x3a8]
7102ea83d4  ldr x1,[x8, #0x320]
7102ea83d8  mov x2,#0x4a01
7102ea83dc  movk x2,#0xa920, LSL #16
7102ea83e0  movk x2,#0x10, LSL #32
7102ea83e4  mov x0,sp
7102ea83e8  mov x21,sp
7102ea83ec  bl 0x7102626be0
7102ea83f0  add x9,x20,#0x308
7102ea83f4  cmp x21,x9
7102ea83f8  b.eq 0x7102ea848c
7102ea83fc  ldr x10,[x20, #0x318]
7102ea8400  ldr x8,[sp, #0x10]
7102ea8404  cmp x10,x8
7102ea8408  b.eq 0x7102ea8490
7102ea840c  cbz x8,0x7102ea8464
7102ea8410  cbz x10,0x7102ea8438
7102ea8414  ldr x11,[x9]
7102ea8418  ldr x12,[x20, #0x310]
7102ea841c  str x11,[x12]
7102ea8420  str x12,[x11, #0x8]
7102ea8424  ldr x11,[x10, #0x10]
7102ea8428  sub x11,x11,#0x1
7102ea842c  str x11,[x10, #0x10]
7102ea8430  stp xzr,xzr,[x9, #0x8]
7102ea8434  str xzr,[x9]
7102ea8438  ldr x11,[x8, #0x20]
7102ea843c  add x10,x8,#0x18
7102ea8440  str x10,[x20, #0x308]
7102ea8444  str x11,[x20, #0x310]
7102ea8448  str x9,[x8, #0x20]
7102ea844c  str x9,[x11]
7102ea8450  ldr x9,[x8, #0x10]
7102ea8454  add x9,x9,#0x1
7102ea8458  str x9,[x8, #0x10]
7102ea845c  str x8,[x20, #0x318]
7102ea8460  b 0x7102ea848c
7102ea8464  cbz x10,0x7102ea848c
7102ea8468  ldr x8,[x20, #0x308]
7102ea846c  ldr x11,[x20, #0x310]
7102ea8470  str x8,[x11]
7102ea8474  str x11,[x8, #0x8]
7102ea8478  ldr x8,[x10, #0x10]
7102ea847c  sub x8,x8,#0x1
7102ea8480  str x8,[x10, #0x10]
7102ea8484  stp xzr,xzr,[x9, #0x8]
7102ea8488  str xzr,[x9]
7102ea848c  ldr x8,[sp, #0x10]
7102ea8490  cbz x8,0x7102ea84b4
7102ea8494  ldp x9,x10,[sp]
7102ea8498  str x9,[x10]
7102ea849c  str x10,[x9, #0x8]
7102ea84a0  ldr x9,[x8, #0x10]
7102ea84a4  sub x9,x9,#0x1
7102ea84a8  str x9,[x8, #0x10]
7102ea84ac  stp xzr,xzr,[sp, #0x8]
7102ea84b0  str xzr,[sp]
7102ea84b4  mov x0,sp
7102ea84b8  mov x1,x20
7102ea84bc  mov w2,wzr
7102ea84c0  bl 0x7102eb0f30
7102ea84c4  ldr x8,[sp]
7102ea84c8  mov x0,sp
7102ea84cc  mov w2,#0x1
7102ea84d0  mov x1,x20
7102ea84d4  mov w21,#0x1
7102ea84d8  str x8,[x20, #0x320]
7102ea84dc  bl 0x7102eb0f30
7102ea84e0  ldr x8,[sp]
7102ea84e4  mov x0,sp
7102ea84e8  mov w2,#0x2
7102ea84ec  mov x1,x20
7102ea84f0  str x8,[x20, #0x328]
7102ea84f4  bl 0x7102eb0f30
7102ea84f8  ldr x8,[sp]
7102ea84fc  mov x0,sp
7102ea8500  orr w2,wzr,#0x3
7102ea8504  mov x1,x20
7102ea8508  str x8,[x20, #0x330]
7102ea850c  bl 0x7102eb0f30
7102ea8510  ldr x8,[sp]
7102ea8514  mov x0,sp
7102ea8518  mov w2,#0x4
7102ea851c  mov x1,x20
7102ea8520  str x8,[x20, #0x338]
7102ea8524  bl 0x7102eb0f30
7102ea8528  ldr x8,[sp]
7102ea852c  mov w2,#0x5
7102ea8530  mov x0,sp
7102ea8534  mov x1,x20
7102ea8538  str x8,[x20, #0x340]
7102ea853c  bl 0x7102eb0f30
7102ea8540  ldr x8,[sp]
7102ea8544  mov x0,sp
7102ea8548  orr w2,wzr,#0x6
7102ea854c  mov x1,x20
7102ea8550  str x8,[x20, #0x348]
7102ea8554  bl 0x7102eb0f30
7102ea8558  ldr x8,[sp]
7102ea855c  mov x0,sp
7102ea8560  orr w2,wzr,#0x7
7102ea8564  mov x1,x20
7102ea8568  str x8,[x20, #0x350]
7102ea856c  bl 0x7102eb0f30
7102ea8570  ldr x8,[sp]
7102ea8574  str x8,[x20, #0x358]
7102ea8578  adrp x8,0x710532e000
7102ea857c  mov w9,#0xc1480000
7102ea8580  str w9,[x8, #0x758]
7102ea8584  adrp x8,0x7105146000
7102ea8588  mov w9,#0x41480000
7102ea858c  str w9,[x8, #0xa90]
7102ea8590  adrp x8,0x7105146000
7102ea8594  mov w9,#0x43700000
7102ea8598  str w9,[x8, #0xa94]
7102ea859c  adrp x8,0x710532e000
7102ea85a0  adrp x10,0x710532e000
7102ea85a4  strb w21,[x10, #0x760]
7102ea85a8  mov w10,#0xbf800000
7102ea85ac  str wzr,[x8, #0x75c]
7102ea85b0  adrp x8,0x710532e000
7102ea85b4  str w10,[x8, #0x764]
7102ea85b8  adrp x8,0x7105146000
7102ea85bc  str w9,[x8, #0xa98]
7102ea85c0  adrp x8,0x710532e000
7102ea85c4  str wzr,[x8, #0x768]
7102ea85c8  adrp x8,0x710532e000
7102ea85cc  strb w21,[x8, #0x76c]
7102ea85d0  adrp x8,0x7102eaf000
7102ea85d4  add x8,x8,#0xd40
7102ea85d8  adrp x9,0x7102eb0000
7102ea85dc  add x9,x9,#0x7b0
7102ea85e0  stp x9,xzr,[x20, #0x68]
7102ea85e4  adrp x9,0x7102eb0000
7102ea85e8  add x9,x9,#0xda0
7102ea85ec  strb wzr,[x20, #0x361]
7102ea85f0  stp x8,xzr,[x20, #0x48]
7102ea85f4  adrp x8,0x7102eb0000
7102ea85f8  add x8,x8,#0x2e0
7102ea85fc  strb wzr,[x20, #0xa9]
7102ea8600  strb wzr,[x20, #0x260]
7102ea8604  strh wzr,[x20, #0xca]
7102ea8608  stp x8,xzr,[x20, #0x58]
7102ea860c  adrp x8,0x7102eb0000
7102ea8610  add x8,x8,#0x9f0
7102ea8614  stp x8,xzr,[x20, #0x78]
7102ea8618  adrp x8,0x7102eb0000
7102ea861c  add x8,x8,#0xc50
7102ea8620  stp x8,xzr,[x20, #0x88]
7102ea8624  stp x9,xzr,[x20, #0x98]
7102ea8628  ldr x0,[x22, #0x2d8]
7102ea862c  str x20,[x22, #0x2d8]
7102ea8630  cbz x0,0x7102ea8640
7102ea8634  ldr x8,[x0]
7102ea8638  ldr x8,[x8, #0x8]
7102ea863c  blr x8
7102ea8640  mov w1,#0x120
7102ea8644  mov w0,#0x10
7102ea8648  bl 0x710392e290
7102ea864c  mov x20,x0
7102ea8650  cbnz x0,0x7102ea869c
7102ea8654  adrp x8,0x7105332000
7102ea8658  ldr x0,[x8, #0xf00]
7102ea865c  cbz x0,0x7102ea8698
7102ea8660  mov w8,#0x120
7102ea8664  str wzr,[sp, #0x1c]
7102ea8668  add x1,sp,#0x1c
7102ea866c  str x8,[sp]
7102ea8670  ldr x8,[x0]
7102ea8674  ldr x8,[x8, #0x30]
7102ea8678  mov x2,sp
7102ea867c  blr x8
7102ea8680  tbz w0,#0x0,0x7102ea8698
7102ea8684  mov w1,#0x120
7102ea8688  mov w0,#0x10
7102ea868c  bl 0x710392e290
7102ea8690  mov x20,x0
7102ea8694  cbnz x0,0x7102ea869c
7102ea8698  mov x20,xzr
7102ea869c  ldr x1,[x22]
7102ea86a0  mov x0,x20
7102ea86a4  mov x2,x19
7102ea86a8  bl 0x7102ea9920
7102ea86ac  ldr x0,[x22, #0x2e0]
7102ea86b0  str x20,[x22, #0x2e0]
7102ea86b4  cbz x0,0x7102ea86e0
7102ea86b8  ldr x8,[x0]
7102ea86bc  ldr x1,[x8, #0x8]
7102ea86c0  ldp x29,x30,[sp, #0x70]
7102ea86c4  ldp x20,x19,[sp, #0x60]
7102ea86c8  ldp x22,x21,[sp, #0x50]
7102ea86cc  ldp x24,x23,[sp, #0x40]
7102ea86d0  ldp x26,x25,[sp, #0x30]
7102ea86d4  ldp x28,x27,[sp, #0x20]
7102ea86d8  add sp,sp,#0x80
7102ea86dc  br x1
7102ea86e0  ldp x29,x30,[sp, #0x70]
7102ea86e4  ldp x20,x19,[sp, #0x60]
7102ea86e8  ldp x22,x21,[sp, #0x50]
7102ea86ec  ldp x24,x23,[sp, #0x40]
7102ea86f0  ldp x26,x25,[sp, #0x30]
7102ea86f4  ldp x28,x27,[sp, #0x20]
7102ea86f8  add sp,sp,#0x80
7102ea86fc  ret
7102ea8700  adrp x0,0x7105314000
7102ea8704  add x0,x0,#0x4d8
7102ea8708  bl 0x71039c06b0
7102ea870c  cbz w0,0x7102ea72c0
7102ea8710  bl 0x7101764000
7102ea8714  adrp x0,0x7101763000
7102ea8718  add x0,x0,#0xc40
7102ea871c  adrp x1,0x71052c5000
7102ea8720  add x1,x1,#0x180
7102ea8724  adrp x2,0x7104f17000
7102ea8728  add x2,x2,#0x0
7102ea872c  bl 0x71000001c0
7102ea8730  adrp x0,0x7105314000
7102ea8734  add x0,x0,#0x4d8
7102ea8738  bl 0x71039c06c0
7102ea873c  b 0x7102ea72c0
