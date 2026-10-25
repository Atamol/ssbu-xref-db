// addr:      7101da73b0
// offset:    0x1da73b0
// name:      FUN_7101da73b0
// mangled:   
// size:      3028

7101da73b0  str d8,[sp, #-0x70]!
7101da73b4  stp x28,x27,[sp, #0x10]
7101da73b8  stp x26,x25,[sp, #0x20]
7101da73bc  stp x24,x23,[sp, #0x30]
7101da73c0  stp x22,x21,[sp, #0x40]
7101da73c4  stp x20,x19,[sp, #0x50]
7101da73c8  stp x29,x30,[sp, #0x60]
7101da73cc  add x29,sp,#0x60
7101da73d0  sub sp,sp,#0x230
7101da73d4  mov w19,w1
7101da73d8  mov x26,x0
7101da73dc  add x0,x0,#0x50
7101da73e0  adrp x1,0x7104433000
7101da73e4  add x1,x1,#0x603
7101da73e8  sub x8,x29,#0xc0
7101da73ec  bl 0x7103776640
7101da73f0  adrp x8,0x710532f000
7101da73f4  ldr x8,[x8, #0x730]
7101da73f8  ldr x8,[x8, #0x8]
7101da73fc  str x8,[sp, #0x48]
7101da7400  tbz w19,#0x0,0x7101da7470
7101da7404  ldrsh x8,[x26, #0x98]
7101da7408  cmn x8,#0x1
7101da740c  b.eq 0x7101da7470
7101da7410  cmp w8,#0x7cf
7101da7414  b.gt 0x7101da7e9c
7101da7418  ldr x9,[sp, #0x48]
7101da741c  ldr x10,[x9, #0x1d8]
7101da7420  add x8,x10,x8, LSL #0x1
7101da7424  ldp x9,x10,[x10, #0x20]
7101da7428  sub x10,x10,x9
7101da742c  orr x11,xzr,#-0x3333333333333334
7101da7430  movk x11,#0xcccd
7101da7434  ldrh w8,[x8, #0x60]
7101da7438  asr x10,x10,#0x6
7101da743c  mul x10,x10,x11
7101da7440  cmp w10,w8
7101da7444  b.ls 0x7101da7e9c
7101da7448  mov w11,#0x140
7101da744c  madd x9,x8,x11,x9
7101da7450  adrp x11,0x7105182000
7101da7454  add x11,x11,#0xb08
7101da7458  cmp x10,x8
7101da745c  csel x8,x9,x11,hi
7101da7460  ldrb w28,[x8, #0x69]
7101da7464  cbz w28,0x7101da7e9c
7101da7468  mov w21,wzr
7101da746c  b 0x7101da7478
7101da7470  mov w21,#0x1
7101da7474  orr w28,wzr,#0x3
7101da7478  ldur x20,[x29, #-0xb8]
7101da747c  ldr x8,[x20, #0x8]
7101da7480  cbz x8,0x7101da7498
7101da7484  ldr x8,[x8, #0x18]
7101da7488  cbz x8,0x7101da7498
7101da748c  ldrb w9,[x8, #0x58]
7101da7490  bfxil w9,w19,#0x0,#0x1
7101da7494  strb w9,[x8, #0x58]
7101da7498  sub w1,w28,#0x1
7101da749c  adrp x0,0x71042e4000
7101da74a0  add x0,x0,#0xfd3
7101da74a4  add x8,sp,#0x188
7101da74a8  add x19,sp,#0x188
7101da74ac  bl 0x71003a4ca0
7101da74b0  fmov s0,0x3f800000
7101da74b4  add x1,x19,#0x8
7101da74b8  mov x0,x20
7101da74bc  str x20,[sp, #0x8]
7101da74c0  bl 0x7103778300
7101da74c4  orr w8,wzr,#0xffff
7101da74c8  mov w11,#0xffffffff
7101da74cc  orr w9,wzr,#0xffff
7101da74d0  orr w10,wzr,#0xffff
7101da74d4  sturh wzr,[x29, #-0x58]
7101da74d8  sturb wzr,[x29, #-0x56]
7101da74dc  strh wzr,[sp, #0x180]
7101da74e0  strb wzr,[sp, #0x182]
7101da74e4  strh w8,[sp, #0x17c]
7101da74e8  str w11,[sp, #0x178]
7101da74ec  stur w21,[x29, #-0x54]
7101da74f0  tbnz w21,#0x0,0x7101da7500
7101da74f4  ldrh w8,[x26, #0xa8]
7101da74f8  ldrh w9,[x26, #0xaa]
7101da74fc  ldrh w10,[x26, #0xac]
7101da7500  strh w8,[sp, #0x178]
7101da7504  strh w9,[sp, #0x17a]
7101da7508  strh w10,[sp, #0x17c]
7101da750c  cbz w28,0x7101da7b90
7101da7510  add x8,sp,#0x130
7101da7514  add x20,x8,#0x8
7101da7518  add x8,sp,#0xd8
7101da751c  stp x28,x26,[sp, #0x30]
7101da7520  add x8,x8,#0x8
7101da7524  stp x8,x20,[sp, #0x20]
7101da7528  add x8,sp,#0x80
7101da752c  fmov s8,0x3f800000
7101da7530  sub x9,x29,#0xb0
7101da7534  add x23,x9,#0x8
7101da7538  add x8,x8,#0x8
7101da753c  mov x21,xzr
7101da7540  adrp x22,0x71043be000
7101da7544  add x22,x22,#0xbb5
7101da7548  str x8,[sp, #0x18]
7101da754c  add x8,x26,#0x28
7101da7550  adrp x24,0x7104443000
7101da7554  add x24,x24,#0xcda
7101da7558  sub x27,x29,#0x58
7101da755c  adrp x25,0x710523d000
7101da7560  add x25,x25,#0x988
7101da7564  str x8,[sp, #0x10]
7101da7568  b 0x7101da75d4
7101da756c  mov v0.16B,v8.16B
7101da7570  adrp x1,0x71042b4000
7101da7574  add x1,x1,#0x875
7101da7578  bl 0x7103778300
7101da757c  ldr x0,[sp, #0x128]
7101da7580  mov v0.16B,v8.16B
7101da7584  adrp x1,0x710439d000
7101da7588  add x1,x1,#0x93c
7101da758c  bl 0x7103778300
7101da7590  sub x8,x29,#0xb0
7101da7594  mov x0,x24
7101da7598  mov w1,wzr
7101da759c  bl 0x71003a4ca0
7101da75a0  add x8,sp,#0xd8
7101da75a4  add x0,sp,#0x120
7101da75a8  mov x1,x23
7101da75ac  bl 0x7103776640
7101da75b0  add x0,sp,#0xd8
7101da75b4  mov w1,wzr
7101da75b8  mov w2,wzr
7101da75bc  bl 0x71025b0340
7101da75c0  ldr x19,[sp, #0xe0]
7101da75c4  sub x27,x29,#0x58
7101da75c8  stp x25,xzr,[sp, #0xd8]
7101da75cc  cbnz x19,0x7101da7668
7101da75d0  b 0x7101da7688
7101da75d4  add x8,sp,#0x130
7101da75d8  mov x0,x22
7101da75dc  mov w1,w21
7101da75e0  bl 0x71003a4ca0
7101da75e4  add x8,sp,#0x120
7101da75e8  sub x0,x29,#0xc0
7101da75ec  mov x1,x20
7101da75f0  bl 0x7103776640
7101da75f4  ldrb w8,[x27, x21, LSL ]
7101da75f8  cbz w8,0x7101da7744
7101da75fc  ldr x8,[sp, #0x128]
7101da7600  ldr x8,[x8, #0x8]
7101da7604  cbz x8,0x7101da761c
7101da7608  ldr x8,[x8, #0x18]
7101da760c  cbz x8,0x7101da761c
7101da7610  ldrb w9,[x8, #0x58]
7101da7614  and w9,w9,#0xfe
7101da7618  strb w9,[x8, #0x58]
7101da761c  cmp x21,#0x3
7101da7620  b.cs 0x7101da7f80
7101da7624  add x8,sp,#0x180
7101da7628  strb wzr,[x8, x21, LSL ]
7101da762c  sub x8,x29,#0xb0
7101da7630  mov x0,x24
7101da7634  mov w1,wzr
7101da7638  bl 0x71003a4ca0
7101da763c  add x8,sp,#0xd8
7101da7640  add x0,sp,#0x120
7101da7644  mov x1,x23
7101da7648  bl 0x7103776640
7101da764c  add x0,sp,#0xd8
7101da7650  mov w1,wzr
7101da7654  mov w2,wzr
7101da7658  bl 0x71025b0340
7101da765c  ldr x19,[sp, #0xe0]
7101da7660  stp x25,xzr,[sp, #0xd8]
7101da7664  cbz x19,0x7101da7688
7101da7668  ldr x0,[x19, #0x18]
7101da766c  adrp x8,0x710523d000
7101da7670  add x8,x8,#0x9a8
7101da7674  stp x8,xzr,[x19, #0x10]
7101da7678  cbz x0,0x7101da7680
7101da767c  bl 0x710392eb40
7101da7680  mov x0,x19
7101da7684  bl 0x710392eb40
7101da7688  sub x8,x29,#0xb0
7101da768c  mov w1,#0x1
7101da7690  mov x0,x24
7101da7694  bl 0x71003a4ca0
7101da7698  add x8,sp,#0xd8
7101da769c  add x0,sp,#0x120
7101da76a0  mov x1,x23
7101da76a4  bl 0x7103776640
7101da76a8  add x0,sp,#0xd8
7101da76ac  mov w1,wzr
7101da76b0  mov w2,wzr
7101da76b4  bl 0x71025b0340
7101da76b8  ldr x19,[sp, #0xe0]
7101da76bc  stp x25,xzr,[sp, #0xd8]
7101da76c0  cbz x19,0x7101da76e4
7101da76c4  ldr x0,[x19, #0x18]
7101da76c8  adrp x8,0x710523d000
7101da76cc  add x8,x8,#0x9a8
7101da76d0  stp x8,xzr,[x19, #0x10]
7101da76d4  cbz x0,0x7101da76dc
7101da76d8  bl 0x710392eb40
7101da76dc  mov x0,x19
7101da76e0  bl 0x710392eb40
7101da76e4  sub x8,x29,#0xb0
7101da76e8  mov w1,#0x2
7101da76ec  mov x0,x24
7101da76f0  bl 0x71003a4ca0
7101da76f4  add x8,sp,#0xd8
7101da76f8  add x0,sp,#0x120
7101da76fc  mov x1,x23
7101da7700  bl 0x7103776640
7101da7704  add x0,sp,#0xd8
7101da7708  mov w1,wzr
7101da770c  mov w2,wzr
7101da7710  bl 0x71025b0340
7101da7714  ldr x19,[sp, #0xe0]
7101da7718  stp x25,xzr,[sp, #0xd8]
7101da771c  cbz x19,0x7101da7b58
7101da7720  ldr x0,[x19, #0x18]
7101da7724  adrp x8,0x710523d000
7101da7728  add x8,x8,#0x9a8
7101da772c  stp x8,xzr,[x19, #0x10]
7101da7730  cbz x0,0x7101da7738
7101da7734  bl 0x710392eb40
7101da7738  mov x0,x19
7101da773c  bl 0x710392eb40
7101da7740  b 0x7101da7b58
7101da7744  cmp x21,#0x3
7101da7748  b.cs 0x7101da7f80
7101da774c  ldr x0,[sp, #0x128]
7101da7750  add x8,sp,#0x178
7101da7754  ldrh w27,[x8, x21, LSL #0x1]
7101da7758  ldr x8,[x0, #0x8]
7101da775c  cbz x8,0x7101da7774
7101da7760  ldr x8,[x8, #0x18]
7101da7764  cbz x8,0x7101da7774
7101da7768  ldrb w9,[x8, #0x58]
7101da776c  orr w9,w9,#0x1
7101da7770  strb w9,[x8, #0x58]
7101da7774  add x8,sp,#0x180
7101da7778  mov w9,#0x1
7101da777c  strb w9,[x8, x21, LSL ]
7101da7780  orr w8,wzr,#0xffff
7101da7784  cmp w27,w8
7101da7788  b.eq 0x7101da756c
7101da778c  mov v0.16B,v8.16B
7101da7790  adrp x1,0x7104308000
7101da7794  add x1,x1,#0x9dd
7101da7798  sxth x19,w27
7101da779c  bl 0x7103778300
7101da77a0  ldr x8,[sp, #0x48]
7101da77a4  ldr x8,[x8, #0x1d8]
7101da77a8  add x9,x8,x19, LSL #0x1
7101da77ac  ldp x10,x8,[x8, #0x20]
7101da77b0  ldrh w9,[x9, #0x60]
7101da77b4  sub x8,x8,x10
7101da77b8  orr x11,xzr,#-0x3333333333333334
7101da77bc  movk x11,#0xcccd
7101da77c0  asr x8,x8,#0x6
7101da77c4  mul x8,x8,x11
7101da77c8  mov w11,#0x140
7101da77cc  madd x10,x9,x11,x10
7101da77d0  cmp x8,x9
7101da77d4  adrp x8,0x7105182000
7101da77d8  add x8,x8,#0xb08
7101da77dc  csel x28,x10,x8,hi
7101da77e0  adrp x8,0x710532f000
7101da77e4  ldr x8,[x8, #0x730]
7101da77e8  ldr x22,[x8, #0x8]
7101da77ec  ldr x0,[x22, #0x218]
7101da77f0  ldrh w1,[x28, #0x6a]
7101da77f4  bl 0x71032a0fd0
7101da77f8  and w8,w0,#0xff
7101da77fc  str x0,[sp, #0x40]
7101da7800  adrp x0,0x7104412000
7101da7804  add x0,x0,#0xe6e
7101da7808  sub w1,w8,#0x1
7101da780c  add x8,sp,#0xd8
7101da7810  bl 0x71003a4ca0
7101da7814  ldr x0,[sp, #0x128]
7101da7818  ldr x1,[sp, #0x20]
7101da781c  mov v0.16B,v8.16B
7101da7820  bl 0x7103778300
7101da7824  mov w2,#0x1
7101da7828  add x3,sp,#0x120
7101da782c  mov x0,x26
7101da7830  mov x1,x27
7101da7834  mov w4,wzr
7101da7838  mov w5,wzr
7101da783c  bl 0x7101da7f90
7101da7840  add x8,sp,#0xc8
7101da7844  add x0,sp,#0x120
7101da7848  adrp x1,0x71043cd000
7101da784c  add x1,x1,#0xb92
7101da7850  bl 0x7103776910
7101da7854  ldr x20,[sp, #0xd0]
7101da7858  ldr x0,[x20, #0x8]
7101da785c  cbz x0,0x7101da7880
7101da7860  adrp x8,0x710593b000
7101da7864  ldr x8,[x8, #0xc38]
7101da7868  cbz x8,0x7101da7880
7101da786c  ldr x8,[x8, #0x8]
7101da7870  ldr x1,[x8, #0x88]
7101da7874  cbz x1,0x7101da7880
7101da7878  mov w2,wzr
7101da787c  bl 0x710379e9c0
7101da7880  sub x8,x29,#0xb0
7101da7884  mov x0,x24
7101da7888  mov w1,wzr
7101da788c  bl 0x71003a4ca0
7101da7890  add x8,sp,#0x80
7101da7894  add x0,sp,#0x120
7101da7898  mov x1,x23
7101da789c  bl 0x7103776640
7101da78a0  ldrb w2,[x28, #0x68]
7101da78a4  add x0,sp,#0x80
7101da78a8  mov w1,#0x1
7101da78ac  bl 0x71025b0340
7101da78b0  ldr x19,[sp, #0x88]
7101da78b4  stp x25,xzr,[sp, #0x80]
7101da78b8  cbz x19,0x7101da78dc
7101da78bc  ldr x0,[x19, #0x18]
7101da78c0  adrp x8,0x710523d000
7101da78c4  add x8,x8,#0x9a8
7101da78c8  stp x8,xzr,[x19, #0x10]
7101da78cc  cbz x0,0x7101da78d4
7101da78d0  bl 0x710392eb40
7101da78d4  mov x0,x19
7101da78d8  bl 0x710392eb40
7101da78dc  sub x8,x29,#0xb0
7101da78e0  mov w1,#0x1
7101da78e4  mov x0,x24
7101da78e8  add x19,x22,#0x210
7101da78ec  bl 0x71003a4ca0
7101da78f0  add x8,sp,#0x80
7101da78f4  add x0,sp,#0x120
7101da78f8  mov x1,x23
7101da78fc  bl 0x7103776640
7101da7900  ldrb w2,[x28, #0x68]
7101da7904  add x0,sp,#0x80
7101da7908  mov w1,#0x1
7101da790c  bl 0x71025b0340
7101da7910  ldr x26,[sp, #0x88]
7101da7914  stp x25,xzr,[sp, #0x80]
7101da7918  cbz x26,0x7101da793c
7101da791c  ldr x0,[x26, #0x18]
7101da7920  adrp x8,0x710523d000
7101da7924  add x8,x8,#0x9a8
7101da7928  stp x8,xzr,[x26, #0x10]
7101da792c  cbz x0,0x7101da7934
7101da7930  bl 0x710392eb40
7101da7934  mov x0,x26
7101da7938  bl 0x710392eb40
7101da793c  sub x8,x29,#0xb0
7101da7940  mov w1,#0x2
7101da7944  mov x0,x24
7101da7948  bl 0x71003a4ca0
7101da794c  add x8,sp,#0x80
7101da7950  add x0,sp,#0x120
7101da7954  mov x1,x23
7101da7958  bl 0x7103776640
7101da795c  ldrb w2,[x28, #0x68]
7101da7960  add x0,sp,#0x80
7101da7964  mov w1,#0x1
7101da7968  bl 0x71025b0340
7101da796c  ldr x26,[sp, #0x88]
7101da7970  stp x25,xzr,[sp, #0x80]
7101da7974  cbz x26,0x7101da7998
7101da7978  ldr x0,[x26, #0x18]
7101da797c  adrp x8,0x710523d000
7101da7980  add x8,x8,#0x9a8
7101da7984  stp x8,xzr,[x26, #0x10]
7101da7988  cbz x0,0x7101da7990
7101da798c  bl 0x710392eb40
7101da7990  mov x0,x26
7101da7994  bl 0x710392eb40
7101da7998  ldr x8,[sp, #0x48]
7101da799c  ldr x26,[x8, #0x1d8]
7101da79a0  mov x0,x26
7101da79a4  mov x1,x27
7101da79a8  bl 0x71032a9470
7101da79ac  mov x2,x0
7101da79b0  sub x0,x29,#0xb0
7101da79b4  mov x1,x26
7101da79b8  bl 0x71032a9540
7101da79bc  add x8,sp,#0x80
7101da79c0  adrp x0,0x7104464000
7101da79c4  add x0,x0,#0x1d4
7101da79c8  mov x1,x23
7101da79cc  bl 0x71003a4ca0
7101da79d0  add x8,sp,#0x70
7101da79d4  add x0,sp,#0x120
7101da79d8  adrp x1,0x710433a000
7101da79dc  add x1,x1,#0x953
7101da79e0  bl 0x7103776910
7101da79e4  ldr x1,[sp, #0x18]
7101da79e8  add x0,sp,#0x70
7101da79ec  bl 0x710377a120
7101da79f0  ldrh w2,[x28, #0x6a]
7101da79f4  sub x0,x29,#0xb0
7101da79f8  mov x1,x19
7101da79fc  bl 0x71032a0c90
7101da7a00  ldr x0,[x22, #0x218]
7101da7a04  ldrh w1,[x28, #0x6a]
7101da7a08  bl 0x71032a1630
7101da7a0c  mov x19,x0
7101da7a10  add x8,sp,#0x60
7101da7a14  add x0,sp,#0x120
7101da7a18  adrp x1,0x710438d000
7101da7a1c  add x1,x1,#0x1b5
7101da7a20  bl 0x7103776910
7101da7a24  add x0,sp,#0x60
7101da7a28  mov x1,x23
7101da7a2c  bl 0x710377a120
7101da7a30  mov x0,x19
7101da7a34  mov w1,#0x13
7101da7a38  bl 0x7103238e70
7101da7a3c  ldr x22,[sp, #0x10]
7101da7a40  tst x0,#0xffffffffff
7101da7a44  str x0,[sp, #0x50]
7101da7a48  b.eq 0x7101da7a60
7101da7a4c  ldr x0,[x22]
7101da7a50  ldrsw x2,[x0, #0x70]
7101da7a54  ldr w3,[x0, #0x68]
7101da7a58  add x1,sp,#0x50
7101da7a5c  bl 0x710323c4e0
7101da7a60  mov x0,x22
7101da7a64  mov x1,x19
7101da7a68  bl 0x710323f760
7101da7a6c  mov x26,x0
7101da7a70  add x8,sp,#0x50
7101da7a74  add x0,sp,#0x120
7101da7a78  adrp x1,0x71042e7000
7101da7a7c  add x1,x1,#0x762
7101da7a80  bl 0x7103776910
7101da7a84  ldr x19,[sp, #0x58]
7101da7a88  mov x0,x19
7101da7a8c  mov x1,x26
7101da7a90  bl 0x7103778b80
7101da7a94  ldr x28,[sp, #0x30]
7101da7a98  adrp x8,0x710523d000
7101da7a9c  add x8,x8,#0x9a8
7101da7aa0  adrp x22,0x71043be000
7101da7aa4  add x22,x22,#0xbb5
7101da7aa8  sub x27,x29,#0x58
7101da7aac  stp x8,xzr,[sp, #0x50]
7101da7ab0  cbz x19,0x7101da7abc
7101da7ab4  mov x0,x19
7101da7ab8  bl 0x710392eb40
7101da7abc  ldp x26,x8,[sp, #0x38]
7101da7ac0  add x8,x21,w8, UXTB 
7101da7ac4  cmp x21,w8, UXTW 
7101da7ac8  b.cs 0x7101da7b0c
7101da7acc  mov w9,#0x1
7101da7ad0  cmp x21,#0x1
7101da7ad4  strb w9,[x27, x21, LSL ]
7101da7ad8  b.hi 0x7101da7b0c
7101da7adc  add w9,w21,#0x1
7101da7ae0  cmp w8,w9
7101da7ae4  b.ls 0x7101da7b0c
7101da7ae8  add x9,x27,x21
7101da7aec  mov w10,#0x1
7101da7af0  strb w10,[x9, #0x1]
7101da7af4  cbnz x21,0x7101da7b0c
7101da7af8  add w10,w21,#0x2
7101da7afc  cmp w8,w10
7101da7b00  b.ls 0x7101da7b0c
7101da7b04  mov w8,#0x1
7101da7b08  strb w8,[x9, #0x2]
7101da7b0c  ldr x0,[sp, #0x68]
7101da7b10  adrp x8,0x710523d000
7101da7b14  add x8,x8,#0x9a8
7101da7b18  stp x8,xzr,[sp, #0x60]
7101da7b1c  cbz x0,0x7101da7b24
7101da7b20  bl 0x710392eb40
7101da7b24  ldr x0,[sp, #0x78]
7101da7b28  adrp x8,0x710523d000
7101da7b2c  add x8,x8,#0x9a8
7101da7b30  stp x8,xzr,[sp, #0x70]
7101da7b34  cbz x0,0x7101da7b3c
7101da7b38  bl 0x710392eb40
7101da7b3c  adrp x8,0x710523d000
7101da7b40  add x8,x8,#0x9a8
7101da7b44  stp x8,xzr,[sp, #0xc8]
7101da7b48  cbz x20,0x7101da7b54
7101da7b4c  mov x0,x20
7101da7b50  bl 0x710392eb40
7101da7b54  ldr x20,[sp, #0x28]
7101da7b58  ldr x19,[sp, #0x128]
7101da7b5c  stp x25,xzr,[sp, #0x120]
7101da7b60  cbz x19,0x7101da7b84
7101da7b64  ldr x0,[x19, #0x18]
7101da7b68  adrp x8,0x710523d000
7101da7b6c  add x8,x8,#0x9a8
7101da7b70  stp x8,xzr,[x19, #0x10]
7101da7b74  cbz x0,0x7101da7b7c
7101da7b78  bl 0x710392eb40
7101da7b7c  mov x0,x19
7101da7b80  bl 0x710392eb40
7101da7b84  add x21,x21,#0x1
7101da7b88  cmp x21,x28
7101da7b8c  b.cc 0x7101da75d4
7101da7b90  ldur w8,[x29, #-0x54]
7101da7b94  tbz w8,#0x0,0x7101da7d08
7101da7b98  ldr x0,[x26, #0x80]
7101da7b9c  ldr x9,[x0, #0x1b8]
7101da7ba0  cbz x9,0x7101da7ec4
7101da7ba4  add x8,x0,#0x1b8
7101da7ba8  mov x10,x8
7101da7bac  mov x11,x9
7101da7bb0  ldr w12,[x11, #0x20]
7101da7bb4  cmp w12,#0x14
7101da7bb8  cset w12,lt
7101da7bbc  csel x10,x10,x11,lt
7101da7bc0  ldr x11,[x11, w12, UXTW #0x3]
7101da7bc4  cbnz x11,0x7101da7bb0
7101da7bc8  ldr x24,[sp, #0x8]
7101da7bcc  cmp x10,x8
7101da7bd0  b.eq 0x7101da7c20
7101da7bd4  ldr w11,[x10, #0x20]
7101da7bd8  cmp w11,#0x14
7101da7bdc  b.gt 0x7101da7c20
7101da7be0  ldr x19,[x10, #0x28]
7101da7be4  cbz x19,0x7101da7c20
7101da7be8  ldr x8,[x19]
7101da7bec  ldr x8,[x8, #0x1f8]
7101da7bf0  mov x0,x19
7101da7bf4  mov w1,wzr
7101da7bf8  blr x8
7101da7bfc  ldr x8,[x19]
7101da7c00  ldr x8,[x8, #0x388]
7101da7c04  mov w1,#0x1
7101da7c08  mov x0,x19
7101da7c0c  mov w2,wzr
7101da7c10  blr x8
7101da7c14  ldr x0,[x26, #0x80]
7101da7c18  ldr x9,[x0, #0x1b8]
7101da7c1c  add x8,x0,#0x1b8
7101da7c20  cbz x9,0x7101da7ec8
7101da7c24  mov x10,x8
7101da7c28  mov x11,x9
7101da7c2c  ldr w12,[x11, #0x20]
7101da7c30  cmp w12,#0x15
7101da7c34  cset w12,lt
7101da7c38  csel x10,x10,x11,lt
7101da7c3c  ldr x11,[x11, w12, UXTW #0x3]
7101da7c40  cbnz x11,0x7101da7c2c
7101da7c44  cmp x10,x8
7101da7c48  b.eq 0x7101da7c98
7101da7c4c  ldr w11,[x10, #0x20]
7101da7c50  cmp w11,#0x15
7101da7c54  b.gt 0x7101da7c98
7101da7c58  ldr x19,[x10, #0x28]
7101da7c5c  cbz x19,0x7101da7c98
7101da7c60  ldr x8,[x19]
7101da7c64  ldr x8,[x8, #0x1f8]
7101da7c68  mov x0,x19
7101da7c6c  mov w1,wzr
7101da7c70  blr x8
7101da7c74  ldr x8,[x19]
7101da7c78  ldr x8,[x8, #0x388]
7101da7c7c  mov w1,#0x1
7101da7c80  mov x0,x19
7101da7c84  mov w2,wzr
7101da7c88  blr x8
7101da7c8c  ldr x0,[x26, #0x80]
7101da7c90  ldr x9,[x0, #0x1b8]
7101da7c94  add x8,x0,#0x1b8
7101da7c98  cbz x9,0x7101da7ec8
7101da7c9c  mov x10,x8
7101da7ca0  ldr w11,[x9, #0x20]
7101da7ca4  cmp w11,#0x16
7101da7ca8  cset w11,lt
7101da7cac  csel x10,x10,x9,lt
7101da7cb0  ldr x9,[x9, w11, UXTW #0x3]
7101da7cb4  cbnz x9,0x7101da7ca0
7101da7cb8  cmp x10,x8
7101da7cbc  b.eq 0x7101da7ec8
7101da7cc0  ldr w8,[x10, #0x20]
7101da7cc4  cmp w8,#0x16
7101da7cc8  b.gt 0x7101da7ec8
7101da7ccc  ldr x19,[x10, #0x28]
7101da7cd0  cbz x19,0x7101da7ec8
7101da7cd4  ldr x8,[x19]
7101da7cd8  ldr x8,[x8, #0x1f8]
7101da7cdc  mov x0,x19
7101da7ce0  mov w1,wzr
7101da7ce4  blr x8
7101da7ce8  ldr x8,[x19]
7101da7cec  ldr x8,[x8, #0x388]
7101da7cf0  mov w1,#0x1
7101da7cf4  mov x0,x19
7101da7cf8  mov w2,wzr
7101da7cfc  blr x8
7101da7d00  ldr x0,[x26, #0x80]
7101da7d04  b 0x7101da7ec8
7101da7d08  ldr x0,[x26, #0x80]
7101da7d0c  ldrb w21,[sp, #0x180]
7101da7d10  ldr x9,[x0, #0x1b8]
7101da7d14  cbz x9,0x7101da7ee4
7101da7d18  add x8,x0,#0x1b8
7101da7d1c  mov x10,x8
7101da7d20  mov x11,x9
7101da7d24  ldr w12,[x11, #0x20]
7101da7d28  cmp w12,#0x14
7101da7d2c  cset w12,lt
7101da7d30  csel x10,x10,x11,lt
7101da7d34  ldr x11,[x11, w12, UXTW #0x3]
7101da7d38  cbnz x11,0x7101da7d24
7101da7d3c  ldr x24,[sp, #0x8]
7101da7d40  cmp x10,x8
7101da7d44  b.eq 0x7101da7d9c
7101da7d48  ldr w11,[x10, #0x20]
7101da7d4c  cmp w11,#0x14
7101da7d50  b.gt 0x7101da7d9c
7101da7d54  ldr x19,[x10, #0x28]
7101da7d58  cbz x19,0x7101da7d9c
7101da7d5c  ldr x8,[x19]
7101da7d60  ldr x8,[x8, #0x1f8]
7101da7d64  cmp w21,#0x0
7101da7d68  cset w1,ne
7101da7d6c  mov x0,x19
7101da7d70  cset w20,eq
7101da7d74  blr x8
7101da7d78  ldr x8,[x19]
7101da7d7c  ldr x8,[x8, #0x388]
7101da7d80  mov x0,x19
7101da7d84  mov w1,w20
7101da7d88  mov w2,wzr
7101da7d8c  blr x8
7101da7d90  ldr x0,[x26, #0x80]
7101da7d94  ldr x9,[x0, #0x1b8]
7101da7d98  add x8,x0,#0x1b8
7101da7d9c  ldrb w22,[sp, #0x181]
7101da7da0  cbz x9,0x7101da7eec
7101da7da4  mov x10,x8
7101da7da8  mov x11,x9
7101da7dac  ldr w12,[x11, #0x20]
7101da7db0  cmp w12,#0x15
7101da7db4  cset w12,lt
7101da7db8  csel x10,x10,x11,lt
7101da7dbc  ldr x11,[x11, w12, UXTW #0x3]
7101da7dc0  cbnz x11,0x7101da7dac
7101da7dc4  cmp x10,x8
7101da7dc8  b.eq 0x7101da7e20
7101da7dcc  ldr w11,[x10, #0x20]
7101da7dd0  cmp w11,#0x15
7101da7dd4  b.gt 0x7101da7e20
7101da7dd8  ldr x19,[x10, #0x28]
7101da7ddc  cbz x19,0x7101da7e20
7101da7de0  ldr x8,[x19]
7101da7de4  ldr x8,[x8, #0x1f8]
7101da7de8  cmp w22,#0x0
7101da7dec  cset w1,ne
7101da7df0  mov x0,x19
7101da7df4  cset w20,eq
7101da7df8  blr x8
7101da7dfc  ldr x8,[x19]
7101da7e00  ldr x8,[x8, #0x388]
7101da7e04  mov x0,x19
7101da7e08  mov w1,w20
7101da7e0c  mov w2,wzr
7101da7e10  blr x8
7101da7e14  ldr x0,[x26, #0x80]
7101da7e18  ldr x9,[x0, #0x1b8]
7101da7e1c  add x8,x0,#0x1b8
7101da7e20  ldrb w23,[sp, #0x182]
7101da7e24  cbz x9,0x7101da7ef0
7101da7e28  mov x10,x8
7101da7e2c  ldr w11,[x9, #0x20]
7101da7e30  cmp w11,#0x16
7101da7e34  cset w11,lt
7101da7e38  csel x10,x10,x9,lt
7101da7e3c  ldr x9,[x9, w11, UXTW #0x3]
7101da7e40  cbnz x9,0x7101da7e2c
7101da7e44  cmp x10,x8
7101da7e48  b.eq 0x7101da7ef0
7101da7e4c  ldr w8,[x10, #0x20]
7101da7e50  cmp w8,#0x16
7101da7e54  b.gt 0x7101da7ef0
7101da7e58  ldr x19,[x10, #0x28]
7101da7e5c  cbz x19,0x7101da7ef0
7101da7e60  ldr x8,[x19]
7101da7e64  ldr x8,[x8, #0x1f8]
7101da7e68  cmp w23,#0x0
7101da7e6c  cset w1,ne
7101da7e70  mov x0,x19
7101da7e74  cset w20,eq
7101da7e78  blr x8
7101da7e7c  ldr x8,[x19]
7101da7e80  ldr x8,[x8, #0x388]
7101da7e84  mov x0,x19
7101da7e88  mov w1,w20
7101da7e8c  mov w2,wzr
7101da7e90  blr x8
7101da7e94  ldr x0,[x26, #0x80]
7101da7e98  b 0x7101da7ef0
7101da7e9c  ldur x24,[x29, #-0xb8]
7101da7ea0  ldr x8,[x24, #0x8]
7101da7ea4  cbz x8,0x7101da7ebc
7101da7ea8  ldr x8,[x8, #0x18]
7101da7eac  cbz x8,0x7101da7ebc
7101da7eb0  ldrb w9,[x8, #0x58]
7101da7eb4  and w9,w9,#0xfe
7101da7eb8  strb w9,[x8, #0x58]
7101da7ebc  str xzr,[x26, #0xb0]
7101da7ec0  b 0x7101da7f2c
7101da7ec4  ldr x24,[sp, #0x8]
7101da7ec8  ldr x8,[x0]
7101da7ecc  ldr x8,[x8, #0x60]
7101da7ed0  mov w1,wzr
7101da7ed4  blr x8
7101da7ed8  mov w8,wzr
7101da7edc  str wzr,[x26, #0xb0]
7101da7ee0  b 0x7101da7f28
7101da7ee4  ldrb w22,[sp, #0x181]
7101da7ee8  ldr x24,[sp, #0x8]
7101da7eec  ldrb w23,[sp, #0x182]
7101da7ef0  ldr x8,[x0]
7101da7ef4  ldr x8,[x8, #0x60]
7101da7ef8  mov w1,#0x1
7101da7efc  mov w19,#0x1
7101da7f00  blr x8
7101da7f04  orr w8,w22,w21
7101da7f08  orr w8,w8,w23
7101da7f0c  str w28,[x26, #0xb0]
7101da7f10  cbz w8,0x7101da7f2c
7101da7f14  cmp w22,#0x0
7101da7f18  cinc w8,w19,ne
7101da7f1c  cmp w23,#0x0
7101da7f20  orr w9,wzr,#0x3
7101da7f24  csel w8,w8,w9,eq
7101da7f28  str w8,[x26, #0xb4]
7101da7f2c  adrp x8,0x710523d000
7101da7f30  add x8,x8,#0x988
7101da7f34  stp x8,xzr,[x29, #-0xc0]
7101da7f38  cbz x24,0x7101da7f5c
7101da7f3c  ldr x0,[x24, #0x18]
7101da7f40  adrp x8,0x710523d000
7101da7f44  add x8,x8,#0x9a8
7101da7f48  stp x8,xzr,[x24, #0x10]
7101da7f4c  cbz x0,0x7101da7f54
7101da7f50  bl 0x710392eb40
7101da7f54  mov x0,x24
7101da7f58  bl 0x710392eb40
7101da7f5c  add sp,sp,#0x230
7101da7f60  ldp x29,x30,[sp, #0x60]
7101da7f64  ldp x20,x19,[sp, #0x50]
7101da7f68  ldp x22,x21,[sp, #0x40]
7101da7f6c  ldp x24,x23,[sp, #0x30]
7101da7f70  ldp x26,x25,[sp, #0x20]
7101da7f74  ldp x28,x27,[sp, #0x10]
7101da7f78  ldr d8,[sp], #0x70
7101da7f7c  ret
7101da7f80  bl 0x71039c2650
