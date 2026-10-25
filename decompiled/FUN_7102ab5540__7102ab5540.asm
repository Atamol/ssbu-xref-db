// addr:      7102ab5540
// offset:    0x2ab5540
// name:      FUN_7102ab5540
// mangled:   
// size:      10492

7102ab5540  sub sp,sp,#0x1b0
7102ab5544  str d10,[sp, #0x130]
7102ab5548  stp d9,d8,[sp, #0x140]
7102ab554c  stp x28,x27,[sp, #0x150]
7102ab5550  stp x26,x25,[sp, #0x160]
7102ab5554  stp x24,x23,[sp, #0x170]
7102ab5558  stp x22,x21,[sp, #0x180]
7102ab555c  stp x20,x19,[sp, #0x190]
7102ab5560  stp x29,x30,[sp, #0x1a0]
7102ab5564  add x29,sp,#0x1a0
7102ab5568  ldrb w8,[x0, #0xab0]
7102ab556c  fmov s9,wzr
7102ab5570  cmp w8,#0x0
7102ab5574  ldrb w8,[x0, #0xa48]
7102ab5578  fcsel s8,s9,s0,eq
7102ab557c  ldr s0,[x0, #0xa4c]
7102ab5580  fadd s0,s0,s8
7102ab5584  mov x19,x0
7102ab5588  cmp w8,#0x5
7102ab558c  str s0,[x0, #0xa4c]
7102ab5590  b.hi 0x7102ab59f4
7102ab5594  adrp x9,0x7104514000
7102ab5598  add x9,x9,#0xc3c
7102ab559c  ldrsw x8,[x9, x8, LSL #0x2]
7102ab55a0  add x8,x8,x9
7102ab55a4  br x8
7102ab55a8  mov w8,#0x2
7102ab55ac  str wzr,[x19, #0xa4c]
7102ab55b0  strb w8,[x19, #0xa54]
7102ab55b4  mov w8,#0x1
7102ab55b8  b 0x7102ab59f0
7102ab55bc  ldrb w8,[x19, #0xab1]
7102ab55c0  cbnz w8,0x7102ab560c
7102ab55c4  adrp x9,0x7104472000
7102ab55c8  ldr s1,[x9, #0xc40]
7102ab55cc  ldrb w8,[x19, #0xab3]
7102ab55d0  fcmp s0,s1
7102ab55d4  ccmp w8,#0x0,#0x4,ge
7102ab55d8  b.eq 0x7102ab560c
7102ab55dc  adrp x8,0x71052b9000
7102ab55e0  ldr x8,[x8, #0x4f8]
7102ab55e4  ldr x0,[x8]
7102ab55e8  mov x1,#0x40be
7102ab55ec  movk x1,#0xfd2, LSL #16
7102ab55f0  movk x1,#0x14, LSL #32
7102ab55f4  mov w4,#0x50000000
7102ab55f8  mov w2,wzr
7102ab55fc  mov w3,wzr
7102ab5600  bl 0x710067de90
7102ab5604  ldr s0,[x19, #0xa4c]
7102ab5608  strb wzr,[x19, #0xab3]
7102ab560c  ldr w8,[x19, #0x75c]
7102ab5610  mov w9,#0x4b0
7102ab5614  sub w8,w9,w8
7102ab5618  scvtf s1,w8
7102ab561c  fcmp s0,s1
7102ab5620  b.lt 0x7102ab59f4
7102ab5624  mov w8,#0x5
7102ab5628  mov w9,#0x100
7102ab562c  strb w8,[x19, #0xa48]
7102ab5630  mov w8,#0x1
7102ab5634  strh w9,[x19, #0xab2]
7102ab5638  strb w8,[x19, #0xab4]
7102ab563c  b 0x7102ab59f4
7102ab5640  ldrb w8,[x19, #0xab1]
7102ab5644  cbz w8,0x7102ab5f00
7102ab5648  ldr s0,[x19, #0xa4c]
7102ab564c  adrp x8,0x7104473000
7102ab5650  ldr s1,[x8, #0x334]
7102ab5654  fcmp s0,s1
7102ab5658  b.ge 0x7102ab5b84
7102ab565c  adrp x8,0x7104473000
7102ab5660  ldr s1,[x8, #0xba8]
7102ab5664  fcmp s0,s1
7102ab5668  b.lt 0x7102ab59f4
7102ab566c  ldp x8,x9,[x19, #0x1a8]
7102ab5670  add x0,x19,#0x1a8
7102ab5674  cmp x9,x8
7102ab5678  b.eq 0x7102ab7e38
7102ab567c  ldr x11,[x8]
7102ab5680  ldp x10,x11,[x11, #0x20]
7102ab5684  sub x11,x11,x10
7102ab5688  lsr x11,x11,#0x3
7102ab568c  cbz w11,0x7102ab56fc
7102ab5690  ldr x10,[x10, #0x8]
7102ab5694  ldrb w11,[x10, #0x20]
7102ab5698  cbz w11,0x7102ab56fc
7102ab569c  ldp x11,x8,[x10, #0x8]
7102ab56a0  ldr x9,[x10]
7102ab56a4  strb wzr,[x10, #0x20]
7102ab56a8  str x9,[x11]
7102ab56ac  str x11,[x9, #0x8]
7102ab56b0  ldr x9,[x8, #0x18]
7102ab56b4  sub x9,x9,#0x1
7102ab56b8  str x9,[x8, #0x18]
7102ab56bc  stp xzr,xzr,[x10]
7102ab56c0  ldr x11,[x8, #0x40]
7102ab56c4  add x9,x8,#0x38
7102ab56c8  stp x9,x11,[x10]
7102ab56cc  str x10,[x8, #0x40]
7102ab56d0  str x10,[x11]
7102ab56d4  ldr x9,[x8, #0x30]
7102ab56d8  add x9,x9,#0x1
7102ab56dc  str x9,[x8, #0x30]
7102ab56e0  ldr x9,[x10, #0x18]
7102ab56e4  cbz x9,0x7102ab56ec
7102ab56e8  ldr w9,[x9, #0x110]
7102ab56ec  ldr w10,[x8, #0x48]
7102ab56f0  sub w9,w10,w9
7102ab56f4  str w9,[x8, #0x48]
7102ab56f8  ldp x8,x9,[x19, #0x1a8]
7102ab56fc  cmp x9,x8
7102ab5700  b.eq 0x7102ab7e38
7102ab5704  ldr x9,[x8]
7102ab5708  ldp x8,x9,[x9, #0x20]
7102ab570c  sub x9,x9,x8
7102ab5710  lsr x9,x9,#0x3
7102ab5714  cbz w9,0x7102ab59f4
7102ab5718  ldr x9,[x8, #0x10]
7102ab571c  ldrb w8,[x9, #0x20]
7102ab5720  cbnz w8,0x7102ab59f4
7102ab5724  mov w8,#0x1
7102ab5728  strb w8,[x9, #0x20]
7102ab572c  ldr x10,[x9]
7102ab5730  ldp x11,x8,[x9, #0x8]
7102ab5734  str x10,[x11]
7102ab5738  str x11,[x10, #0x8]
7102ab573c  ldr x10,[x8, #0x30]
7102ab5740  sub x10,x10,#0x1
7102ab5744  str x10,[x8, #0x30]
7102ab5748  stp xzr,xzr,[x9]
7102ab574c  ldr x11,[x8, #0x28]
7102ab5750  add x10,x8,#0x20
7102ab5754  stp x10,x11,[x9]
7102ab5758  str x9,[x8, #0x28]
7102ab575c  str x9,[x11]
7102ab5760  ldr x10,[x8, #0x18]
7102ab5764  add x10,x10,#0x1
7102ab5768  str x10,[x8, #0x18]
7102ab576c  ldr x9,[x9, #0x18]
7102ab5770  cbz x9,0x7102ab5778
7102ab5774  ldr w9,[x9, #0x110]
7102ab5778  ldr w10,[x8, #0x48]
7102ab577c  add w9,w10,w9
7102ab5780  str w9,[x8, #0x48]
7102ab5784  b 0x7102ab59f4
7102ab5788  ldrb w8,[x19, #0xa5c]
7102ab578c  cmp w8,#0x15
7102ab5790  b.ne 0x7102ab59f4
7102ab5794  ldr s1,[x19, #0xa50]
7102ab5798  fcmp s0,s1
7102ab579c  b.lt 0x7102ab57a8
7102ab57a0  ldrb w8,[x19, #0xab1]
7102ab57a4  cbz w8,0x7102ab7bdc
7102ab57a8  ldrb w8,[x19, #0x18]
7102ab57ac  cbz w8,0x7102ab59f4
7102ab57b0  ldr s0,[x19, #0xa58]
7102ab57b4  fsub s0,s0,s8
7102ab57b8  fmax s0,s0,s9
7102ab57bc  ldr x8,[x19, #0xa70]
7102ab57c0  str s0,[x19, #0xa58]
7102ab57c4  ldr x8,[x8, #0x8]
7102ab57c8  mov w9,#0x1
7102ab57cc  str w9,[x8, #0x10]
7102ab57d0  ldr s0,[x19, #0xa58]
7102ab57d4  fcmp s0,#0.0
7102ab57d8  b.gt 0x7102ab59f4
7102ab57dc  ldr x20,[x19, #0xa60]
7102ab57e0  ldr w8,[x20, #0x8]
7102ab57e4  cmn w8,#0x1
7102ab57e8  b.ne 0x7102ab57f8
7102ab57ec  mov x0,x20
7102ab57f0  bl 0x7102666c30
7102ab57f4  ldr w8,[x20, #0x8]
7102ab57f8  ldp w9,w10,[x20, #0xc]
7102ab57fc  stp w9,w10,[x20, #0x8]
7102ab5800  mov w9,#0xffffffff
7102ab5804  str w9,[x20, #0x10]
7102ab5808  str w8,[x20, #0x18]
7102ab580c  mov w9,#0x1
7102ab5810  add x8,x20,w8, UXTW 
7102ab5814  strb w9,[x20, #0x14]
7102ab5818  ldrb w8,[x8, #0x20]
7102ab581c  cmp w8,#0x7
7102ab5820  strb w8,[x19, #0xa5c]
7102ab5824  b.eq 0x7102ab7d74
7102ab5828  cmp w8,#0x6
7102ab582c  b.eq 0x7102ab7d84
7102ab5830  cmp w8,#0x5
7102ab5834  b.ne 0x7102ab7d90
7102ab5838  ldr x8,[x19, #0xa98]
7102ab583c  mov w9,#0x5
7102ab5840  strb w9,[x8, #0x2b0]
7102ab5844  b 0x7102ab7d90
7102ab5848  ldr w8,[x19, #0x75c]
7102ab584c  mov w9,#0x2d0
7102ab5850  sub w8,w9,w8
7102ab5854  scvtf s1,w8
7102ab5858  fcmp s0,s1
7102ab585c  b.ge 0x7102ab59ec
7102ab5860  b 0x7102ab59f4
7102ab5864  adrp x8,0x7104472000
7102ab5868  ldr s1,[x8, #0xff0]
7102ab586c  fcmp s0,s1
7102ab5870  b.lt 0x7102ab59f4
7102ab5874  adrp x8,0x7104471000
7102ab5878  ldr s1,[x8, #0xee0]
7102ab587c  adrp x8,0x7104472000
7102ab5880  ldr s2,[x8, #0xbc4]
7102ab5884  ldp x8,x10,[x19, #0x1a8]
7102ab5888  fadd s0,s0,s1
7102ab588c  fadd s0,s0,s2
7102ab5890  add x0,x19,#0x1a8
7102ab5894  mov w9,#0x2
7102ab5898  cmp x10,x8
7102ab589c  strb w9,[x19, #0xa54]
7102ab58a0  str s0,[x19, #0xa4c]
7102ab58a4  b.eq 0x7102ab7e38
7102ab58a8  ldr x11,[x8]
7102ab58ac  ldp x9,x11,[x11, #0x20]
7102ab58b0  sub x11,x11,x9
7102ab58b4  lsr x11,x11,#0x3
7102ab58b8  cbz w11,0x7102ab592c
7102ab58bc  ldr x9,[x9, #0x8]
7102ab58c0  ldrb w11,[x9, #0x20]
7102ab58c4  cbnz w11,0x7102ab592c
7102ab58c8  mov w8,#0x1
7102ab58cc  strb w8,[x9, #0x20]
7102ab58d0  ldr x10,[x9]
7102ab58d4  ldp x11,x8,[x9, #0x8]
7102ab58d8  str x10,[x11]
7102ab58dc  str x11,[x10, #0x8]
7102ab58e0  ldr x10,[x8, #0x30]
7102ab58e4  sub x10,x10,#0x1
7102ab58e8  str x10,[x8, #0x30]
7102ab58ec  stp xzr,xzr,[x9]
7102ab58f0  ldr x11,[x8, #0x28]
7102ab58f4  add x10,x8,#0x20
7102ab58f8  stp x10,x11,[x9]
7102ab58fc  str x9,[x8, #0x28]
7102ab5900  str x9,[x11]
7102ab5904  ldr x10,[x8, #0x18]
7102ab5908  add x10,x10,#0x1
7102ab590c  str x10,[x8, #0x18]
7102ab5910  ldr x9,[x9, #0x18]
7102ab5914  cbz x9,0x7102ab591c
7102ab5918  ldr w9,[x9, #0x110]
7102ab591c  ldr w10,[x8, #0x48]
7102ab5920  add w9,w10,w9
7102ab5924  str w9,[x8, #0x48]
7102ab5928  ldp x8,x10,[x19, #0x1a8]
7102ab592c  cmp x10,x8
7102ab5930  b.eq 0x7102ab7e38
7102ab5934  ldr x9,[x8]
7102ab5938  ldp x8,x9,[x9, #0x20]
7102ab593c  sub x9,x9,x8
7102ab5940  lsr x9,x9,#0x3
7102ab5944  cbz w9,0x7102ab59b0
7102ab5948  ldr x9,[x8, #0x10]
7102ab594c  ldrb w8,[x9, #0x20]
7102ab5950  cbz w8,0x7102ab59b0
7102ab5954  ldp x11,x8,[x9, #0x8]
7102ab5958  ldr x10,[x9]
7102ab595c  strb wzr,[x9, #0x20]
7102ab5960  str x10,[x11]
7102ab5964  str x11,[x10, #0x8]
7102ab5968  ldr x10,[x8, #0x18]
7102ab596c  sub x10,x10,#0x1
7102ab5970  str x10,[x8, #0x18]
7102ab5974  stp xzr,xzr,[x9]
7102ab5978  ldr x11,[x8, #0x40]
7102ab597c  add x10,x8,#0x38
7102ab5980  stp x10,x11,[x9]
7102ab5984  str x9,[x8, #0x40]
7102ab5988  str x9,[x11]
7102ab598c  ldr x10,[x8, #0x30]
7102ab5990  add x10,x10,#0x1
7102ab5994  str x10,[x8, #0x30]
7102ab5998  ldr x9,[x9, #0x18]
7102ab599c  cbz x9,0x7102ab59a4
7102ab59a0  ldr w9,[x9, #0x110]
7102ab59a4  ldr w10,[x8, #0x48]
7102ab59a8  sub w9,w10,w9
7102ab59ac  str w9,[x8, #0x48]
7102ab59b0  ldr x8,[x19, #0x318]
7102ab59b4  ldr x0,[x8, #0x10]
7102ab59b8  adrp x1,0x71042c2000
7102ab59bc  add x1,x1,#0xe16
7102ab59c0  bl 0x71025f7350
7102ab59c4  ldr x0,[x19, #0x318]
7102ab59c8  adrp x1,0x7104317000
7102ab59cc  add x1,x1,#0x4bd
7102ab59d0  mov w2,#0x1
7102ab59d4  bl 0x7102633a10
7102ab59d8  ldr x0,[x19, #0x318]
7102ab59dc  adrp x1,0x710437a000
7102ab59e0  add x1,x1,#0xfdd
7102ab59e4  mov w2,#0x1
7102ab59e8  bl 0x7102633b90
7102ab59ec  mov w8,#0x2
7102ab59f0  strb w8,[x19, #0xa48]
7102ab59f4  ldr x20,[x19, #0xa78]
7102ab59f8  ldrb w8,[x20, #0x381]
7102ab59fc  cmp w8,#0x4
7102ab5a00  b.eq 0x7102ab61f0
7102ab5a04  ldrb w9,[x20, #0x38c]
7102ab5a08  cmp w9,#0x4
7102ab5a0c  b.eq 0x7102ab5ad8
7102ab5a10  cmp w9,#0x3
7102ab5a14  b.eq 0x7102ab5a4c
7102ab5a18  cmp w9,#0x2
7102ab5a1c  b.ne 0x7102ab5c74
7102ab5a20  ldr x8,[x20, #0x18]
7102ab5a24  ldp x21,x22,[x8]
7102ab5a28  adrp x8,0x7104472000
7102ab5a2c  ldr s0,[x20, #0x388]
7102ab5a30  ldr s1,[x8, #0xae0]
7102ab5a34  fcmp s0,s1
7102ab5a38  b.ge 0x7102ab5e7c
7102ab5a3c  mov w2,#0x1
7102ab5a40  mov x0,x21
7102ab5a44  mov x1,x22
7102ab5a48  b 0x7102ab5c5c
7102ab5a4c  ldr x8,[x20, #0x18]
7102ab5a50  ldp x21,x22,[x8]
7102ab5a54  cmp x21,x22
7102ab5a58  b.eq 0x7102ab5a90
7102ab5a5c  mov w23,#0x1
7102ab5a60  mov x24,#-0x1
7102ab5a64  ldr x8,[x21]
7102ab5a68  ldr x9,[x8, #0x8]
7102ab5a6c  strb w23,[x8, #0x128]
7102ab5a70  cbz x9,0x7102ab5a84
7102ab5a74  str x24,[x9, #0xd8]
7102ab5a78  ldr x0,[x8, #0x8]
7102ab5a7c  mov w1,wzr
7102ab5a80  bl 0x7100532bc0
7102ab5a84  add x21,x21,#0x8
7102ab5a88  cmp x22,x21
7102ab5a8c  b.ne 0x7102ab5a64
7102ab5a90  ldr x8,[x20, #0x20]
7102ab5a94  ldp x21,x22,[x8]
7102ab5a98  cmp x21,x22
7102ab5a9c  b.eq 0x7102ab5c70
7102ab5aa0  mov w23,#0x1
7102ab5aa4  mov x24,#-0x1
7102ab5aa8  ldr x8,[x21]
7102ab5aac  ldr x9,[x8, #0x8]
7102ab5ab0  strb w23,[x8, #0x128]
7102ab5ab4  cbz x9,0x7102ab5ac8
7102ab5ab8  str x24,[x9, #0xd8]
7102ab5abc  ldr x0,[x8, #0x8]
7102ab5ac0  mov w1,wzr
7102ab5ac4  bl 0x7100532bc0
7102ab5ac8  add x21,x21,#0x8
7102ab5acc  cmp x22,x21
7102ab5ad0  b.ne 0x7102ab5aa8
7102ab5ad4  b 0x7102ab5c70
7102ab5ad8  adrp x8,0x7104472000
7102ab5adc  ldr s10,[x20, #0x388]
7102ab5ae0  ldr s0,[x8, #0x750]
7102ab5ae4  fcmp s10,s0
7102ab5ae8  b.ge 0x7102ab5c50
7102ab5aec  ldr x8,[x20, #0x18]
7102ab5af0  ldp x21,x22,[x8]
7102ab5af4  cmp x21,x22
7102ab5af8  b.eq 0x7102ab5b30
7102ab5afc  mov w23,#0x1
7102ab5b00  mov x24,#-0x1
7102ab5b04  ldr x8,[x21]
7102ab5b08  ldr x9,[x8, #0x8]
7102ab5b0c  strb w23,[x8, #0x128]
7102ab5b10  cbz x9,0x7102ab5b24
7102ab5b14  str x24,[x9, #0xd8]
7102ab5b18  ldr x0,[x8, #0x8]
7102ab5b1c  mov w1,wzr
7102ab5b20  bl 0x7100532bc0
7102ab5b24  add x21,x21,#0x8
7102ab5b28  cmp x22,x21
7102ab5b2c  b.ne 0x7102ab5b04
7102ab5b30  ldr x8,[x20, #0x20]
7102ab5b34  fmov s0,0x41700000
7102ab5b38  fcmp s10,s0
7102ab5b3c  ldp x21,x22,[x8]
7102ab5b40  b.ge 0x7102ab7ad0
7102ab5b44  cmp x21,x22
7102ab5b48  b.eq 0x7102ab5c70
7102ab5b4c  mov w23,#0x1
7102ab5b50  mov x24,#-0x1
7102ab5b54  ldr x8,[x21]
7102ab5b58  ldr x9,[x8, #0x8]
7102ab5b5c  strb w23,[x8, #0x128]
7102ab5b60  cbz x9,0x7102ab5b74
7102ab5b64  str x24,[x9, #0xd8]
7102ab5b68  ldr x0,[x8, #0x8]
7102ab5b6c  mov w1,wzr
7102ab5b70  bl 0x7100532bc0
7102ab5b74  add x21,x21,#0x8
7102ab5b78  cmp x22,x21
7102ab5b7c  b.ne 0x7102ab5b54
7102ab5b80  b 0x7102ab5c70
7102ab5b84  adrp x8,0x7104472000
7102ab5b88  ldr s1,[x8, #0x84c]
7102ab5b8c  ldr x8,[x19, #0x340]
7102ab5b90  fadd s0,s0,s1
7102ab5b94  ldr w9,[x19, #0x764]
7102ab5b98  ldr w10,[x19, #0x768]
7102ab5b9c  scvtf s1,w9
7102ab5ba0  sub w9,w10,w9
7102ab5ba4  scvtf s2,w9
7102ab5ba8  str s0,[x19, #0xa4c]
7102ab5bac  ldp w9,w10,[x8]
7102ab5bb0  str w10,[x8]
7102ab5bb4  ldp w10,w11,[x8, #0x8]
7102ab5bb8  eor w9,w9,w9, LSL #0xb
7102ab5bbc  eor w9,w9,w9, LSR #0x8
7102ab5bc0  eor w9,w9,w11
7102ab5bc4  eor w9,w9,w11, LSR #0x13
7102ab5bc8  ucvtf s3,w9
7102ab5bcc  stp w10,w11,[x8, #0x4]
7102ab5bd0  adrp x10,0x7104473000
7102ab5bd4  ldr s0,[x10, #0x710]
7102ab5bd8  fmul s3,s3,s0
7102ab5bdc  fmul s2,s3,s2
7102ab5be0  str w9,[x8, #0xc]
7102ab5be4  orr w8,wzr,#0x3
7102ab5be8  strb w8,[x19, #0xa54]
7102ab5bec  ldrb w8,[x19, #0xa68]
7102ab5bf0  fadd s1,s2,s1
7102ab5bf4  str s1,[x19, #0xa50]
7102ab5bf8  cbz w8,0x7102ab7ae0
7102ab5bfc  ldr w8,[x19, #0x740]
7102ab5c00  ldr w9,[x19, #0x744]
7102ab5c04  scvtf s1,w8
7102ab5c08  sub w8,w9,w8
7102ab5c0c  scvtf s2,w8
7102ab5c10  ldr x8,[x19, #0x340]
7102ab5c14  ldp w9,w10,[x8]
7102ab5c18  str w10,[x8]
7102ab5c1c  ldp w10,w11,[x8, #0x8]
7102ab5c20  eor w9,w9,w9, LSL #0xb
7102ab5c24  eor w9,w9,w9, LSR #0x8
7102ab5c28  eor w9,w9,w11
7102ab5c2c  eor w9,w9,w11, LSR #0x13
7102ab5c30  ucvtf s3,w9
7102ab5c34  fmul s0,s3,s0
7102ab5c38  fmul s3,s0,s2
7102ab5c3c  stp w10,w11,[x8, #0x4]
7102ab5c40  str w9,[x8, #0xc]
7102ab5c44  strb wzr,[x19, #0xa68]
7102ab5c48  fadd s0,s3,s1
7102ab5c4c  b 0x7102ab7b2c
7102ab5c50  ldr x8,[x20, #0x18]
7102ab5c54  ldp x0,x1,[x8]
7102ab5c58  mov w2,#0x1
7102ab5c5c  bl 0x71025f4d80
7102ab5c60  ldr x8,[x20, #0x20]
7102ab5c64  ldp x0,x1,[x8]
7102ab5c68  mov w2,#0x1
7102ab5c6c  bl 0x71025f4d80
7102ab5c70  ldrb w8,[x20, #0x381]
7102ab5c74  ldr s0,[x20, #0x384]
7102ab5c78  fadd s0,s0,s8
7102ab5c7c  cmp w8,#0x2
7102ab5c80  strb wzr,[x20, #0x395]
7102ab5c84  str s0,[x20, #0x384]
7102ab5c88  b.eq 0x7102ab5cdc
7102ab5c8c  cmp w8,#0x1
7102ab5c90  b.eq 0x7102ab5ca4
7102ab5c94  cbnz w8,0x7102ab5d90
7102ab5c98  mov w8,#0x1
7102ab5c9c  strb w8,[x20, #0x395]
7102ab5ca0  strb w8,[x20, #0x381]
7102ab5ca4  ldrb w8,[x20, #0x38c]
7102ab5ca8  cmp w8,#0x2
7102ab5cac  b.ne 0x7102ab5d90
7102ab5cb0  ldr s0,[x20, #0x388]
7102ab5cb4  mov x0,x20
7102ab5cb8  mov w1,wzr
7102ab5cbc  bl 0x7102abb730
7102ab5cc0  mov w8,#0x42700000
7102ab5cc4  mov w9,#0x1
7102ab5cc8  str w8,[x20, #0x420]
7102ab5ccc  mov w8,#0x2
7102ab5cd0  strb w9,[x20, #0x395]
7102ab5cd4  strb w8,[x20, #0x381]
7102ab5cd8  b 0x7102ab5d90
7102ab5cdc  fcmp s8,#0.0
7102ab5ce0  b.le 0x7102ab5d2c
7102ab5ce4  ldr s0,[x20, #0x420]
7102ab5ce8  fsub s0,s0,s8
7102ab5cec  fcmp s0,#0.0
7102ab5cf0  str s0,[x20, #0x420]
7102ab5cf4  b.hi 0x7102ab5d2c
7102ab5cf8  ldrb w8,[x20, #0x3c8]
7102ab5cfc  cbnz w8,0x7102ab5d2c
7102ab5d00  ldr x8,[x20, #0x3c0]
7102ab5d04  ldr x8,[x8]
7102ab5d08  ldr x0,[x8, #0x8]
7102ab5d0c  cbz x0,0x7102ab5d24
7102ab5d10  ldr x8,[x0]
7102ab5d14  ldr w2,[x20, #0x3cc]
7102ab5d18  ldr w1,[x20, #0x3e0]
7102ab5d1c  ldr x8,[x8, #0x58]
7102ab5d20  blr x8
7102ab5d24  mov w8,#0x1
7102ab5d28  strb w8,[x20, #0x3c8]
7102ab5d2c  adrp x8,0x7104473000
7102ab5d30  ldr s0,[x20, #0x388]
7102ab5d34  ldr s1,[x8, #0x334]
7102ab5d38  fcmp s0,s1
7102ab5d3c  b.lt 0x7102ab5d88
7102ab5d40  ldr x8,[x20]
7102ab5d44  cbz x8,0x7102ab5d80
7102ab5d48  ldrb w9,[x8, #0xe0]
7102ab5d4c  cbz w9,0x7102ab5d60
7102ab5d50  ldr x9,[x8, #0xc8]
7102ab5d54  cbz x9,0x7102ab5d60
7102ab5d58  mov w10,#0x101
7102ab5d5c  strh w10,[x9, #0x30]
7102ab5d60  ldr x9,[x8, #0xd8]
7102ab5d64  cbz x9,0x7102ab5d70
7102ab5d68  mov w10,#0x1
7102ab5d6c  strb w10,[x9, #0x21]
7102ab5d70  ldrb w9,[x8, #0xe0]
7102ab5d74  cbz w9,0x7102ab5d80
7102ab5d78  ldr x8,[x8, #0xb0]
7102ab5d7c  strb wzr,[x8, #0x10]
7102ab5d80  orr w8,wzr,#0x3
7102ab5d84  strb w8,[x20, #0x381]
7102ab5d88  mov w8,#0x1
7102ab5d8c  strb w8,[x20, #0x395]
7102ab5d90  ldrb w8,[x20, #0x380]
7102ab5d94  cmp w8,#0x1
7102ab5d98  b.eq 0x7102ab5e0c
7102ab5d9c  cbnz w8,0x7102ab61c0
7102ab5da0  ldr x8,[x20]
7102ab5da4  cbz x8,0x7102ab5fc0
7102ab5da8  ldr x8,[x8, #0xd8]
7102ab5dac  cbz x8,0x7102ab5fc0
7102ab5db0  ldr s9,[x8, #0x10]
7102ab5db4  adrp x8,0x7104472000
7102ab5db8  ldr s0,[x8, #0x24c]
7102ab5dbc  fcmp s9,s0
7102ab5dc0  b.ge 0x7102ab5f90
7102ab5dc4  adrp x8,0x7104472000
7102ab5dc8  ldr s0,[x8, #0xdc]
7102ab5dcc  fcmp s9,s0
7102ab5dd0  b.lt 0x7102ab5fc0
7102ab5dd4  ldrb w8,[x20, #0x3f8]
7102ab5dd8  cbnz w8,0x7102ab5fc0
7102ab5ddc  ldr x8,[x20, #0x3f0]
7102ab5de0  ldr x8,[x8]
7102ab5de4  ldr x0,[x8, #0x8]
7102ab5de8  cbz x0,0x7102ab5e00
7102ab5dec  ldr x8,[x0]
7102ab5df0  ldr w2,[x20, #0x3fc]
7102ab5df4  ldr w1,[x20, #0x410]
7102ab5df8  ldr x8,[x8, #0x58]
7102ab5dfc  blr x8
7102ab5e00  mov w8,#0x1
7102ab5e04  strb w8,[x20, #0x3f8]
7102ab5e08  b 0x7102ab5fc0
7102ab5e0c  ldr x8,[x20]
7102ab5e10  fmov s9,wzr
7102ab5e14  cbz x8,0x7102ab60e4
7102ab5e18  ldr x8,[x8, #0xd8]
7102ab5e1c  cbz x8,0x7102ab60e4
7102ab5e20  ldr s9,[x8, #0x10]
7102ab5e24  adrp x8,0x7104473000
7102ab5e28  ldr s0,[x8, #0x21c]
7102ab5e2c  fcmp s9,s0
7102ab5e30  b.ge 0x7102ab60b4
7102ab5e34  adrp x8,0x7104473000
7102ab5e38  ldr s0,[x8, #0x2a8]
7102ab5e3c  fcmp s9,s0
7102ab5e40  b.lt 0x7102ab60e4
7102ab5e44  ldrb w8,[x20, #0x3f8]
7102ab5e48  cbnz w8,0x7102ab60e4
7102ab5e4c  ldr x8,[x20, #0x3f0]
7102ab5e50  ldr x8,[x8]
7102ab5e54  ldr x0,[x8, #0x8]
7102ab5e58  cbz x0,0x7102ab5e70
7102ab5e5c  ldr x8,[x0]
7102ab5e60  ldr w2,[x20, #0x3fc]
7102ab5e64  ldr w1,[x20, #0x410]
7102ab5e68  ldr x8,[x8, #0x58]
7102ab5e6c  blr x8
7102ab5e70  mov w8,#0x1
7102ab5e74  strb w8,[x20, #0x3f8]
7102ab5e78  b 0x7102ab60e4
7102ab5e7c  cmp x21,x22
7102ab5e80  b.eq 0x7102ab5eb8
7102ab5e84  mov w23,#0x1
7102ab5e88  mov x24,#-0x1
7102ab5e8c  ldr x8,[x21]
7102ab5e90  ldr x9,[x8, #0x8]
7102ab5e94  strb w23,[x8, #0x128]
7102ab5e98  cbz x9,0x7102ab5eac
7102ab5e9c  str x24,[x9, #0xd8]
7102ab5ea0  ldr x0,[x8, #0x8]
7102ab5ea4  mov w1,wzr
7102ab5ea8  bl 0x7100532bc0
7102ab5eac  add x21,x21,#0x8
7102ab5eb0  cmp x22,x21
7102ab5eb4  b.ne 0x7102ab5e8c
7102ab5eb8  ldr x8,[x20, #0x20]
7102ab5ebc  ldp x21,x22,[x8]
7102ab5ec0  cmp x21,x22
7102ab5ec4  b.eq 0x7102ab5c70
7102ab5ec8  mov w23,#0x1
7102ab5ecc  mov x24,#-0x1
7102ab5ed0  ldr x8,[x21]
7102ab5ed4  ldr x9,[x8, #0x8]
7102ab5ed8  strb w23,[x8, #0x128]
7102ab5edc  cbz x9,0x7102ab5ef0
7102ab5ee0  str x24,[x9, #0xd8]
7102ab5ee4  ldr x0,[x8, #0x8]
7102ab5ee8  mov w1,wzr
7102ab5eec  bl 0x7100532bc0
7102ab5ef0  add x21,x21,#0x8
7102ab5ef4  cmp x22,x21
7102ab5ef8  b.ne 0x7102ab5ed0
7102ab5efc  b 0x7102ab5c70
7102ab5f00  adrp x9,0x7104472000
7102ab5f04  ldr s1,[x9, #0xf50]
7102ab5f08  ldrb w8,[x19, #0xab2]
7102ab5f0c  fcmp s0,s1
7102ab5f10  ccmp w8,#0x0,#0x4,ge
7102ab5f14  b.eq 0x7102ab5f44
7102ab5f18  adrp x8,0x71052b9000
7102ab5f1c  ldr x8,[x8, #0x4f8]
7102ab5f20  ldr x0,[x8]
7102ab5f24  mov x1,#0x40be
7102ab5f28  movk x1,#0xfd2, LSL #16
7102ab5f2c  movk x1,#0x14, LSL #32
7102ab5f30  mov w4,#0x50000000
7102ab5f34  mov w2,wzr
7102ab5f38  mov w3,wzr
7102ab5f3c  bl 0x710067de90
7102ab5f40  strb wzr,[x19, #0xab2]
7102ab5f44  ldrb w8,[x19, #0xab4]
7102ab5f48  cbz w8,0x7102ab5648
7102ab5f4c  adrp x8,0x7104471000
7102ab5f50  ldr s0,[x19, #0xa4c]
7102ab5f54  ldr s1,[x8, #0xf08]
7102ab5f58  fcmp s0,s1
7102ab5f5c  b.lt 0x7102ab564c
7102ab5f60  adrp x8,0x71052b9000
7102ab5f64  ldr x8,[x8, #0x4f8]
7102ab5f68  ldr x0,[x8]
7102ab5f6c  mov x1,#0x7e0e
7102ab5f70  movk x1,#0x1c13, LSL #16
7102ab5f74  movk x1,#0x12, LSL #32
7102ab5f78  mov w4,#0x50000000
7102ab5f7c  mov w2,wzr
7102ab5f80  mov w3,wzr
7102ab5f84  bl 0x710067de90
7102ab5f88  strb wzr,[x19, #0xab4]
7102ab5f8c  b 0x7102ab5648
7102ab5f90  ldrb w8,[x20, #0x3f8]
7102ab5f94  cbz w8,0x7102ab5fc0
7102ab5f98  ldr x8,[x20, #0x3f0]
7102ab5f9c  ldr x8,[x8]
7102ab5fa0  ldr x0,[x8, #0x8]
7102ab5fa4  cbz x0,0x7102ab5fbc
7102ab5fa8  ldr x8,[x0]
7102ab5fac  ldr w2,[x20, #0x3fc]
7102ab5fb0  ldr w1,[x20, #0x414]
7102ab5fb4  ldr x8,[x8, #0x58]
7102ab5fb8  blr x8
7102ab5fbc  strb wzr,[x20, #0x3f8]
7102ab5fc0  ldrb w22,[x20, #0x3b0]
7102ab5fc4  adrp x24,0x7104556000
7102ab5fc8  add x24,x24,#0xfe8
7102ab5fcc  lsl x8,x22,#0x3
7102ab5fd0  ldr s0,[x24,x8]
7102ab5fd4  fcmp s9,s0
7102ab5fd8  b.lt 0x7102ab6078
7102ab5fdc  ldr x8,[x20, #0x398]
7102ab5fe0  ldr x23,[x8]
7102ab5fe4  ldr x0,[x23, #0x8]
7102ab5fe8  cbz x0,0x7102ab6070
7102ab5fec  sub x1,x29,#0xc0
7102ab5ff0  mov w2,#0x1
7102ab5ff4  stur xzr,[x29, #-0xc0]
7102ab5ff8  bl 0x7102405040
7102ab5ffc  cmn w0,#0x1
7102ab6000  b.eq 0x7102ab606c
7102ab6004  add x8,x24,x22, LSL #0x3
7102ab6008  ldr s0,[x8, #0x4]
7102ab600c  mov w21,w0
7102ab6010  fcvtzu w22,s0
7102ab6014  cmp w0,#0x18
7102ab6018  b.hi 0x7102ab6054
7102ab601c  ldr x8,[x23, #0x8]
7102ab6020  mov w9,#0x50
7102ab6024  smaddl x8,w21,w9,x8
7102ab6028  ldr x0,[x8, #0x68]
7102ab602c  ldr x8,[x0]
7102ab6030  cbz x8,0x7102ab6054
7102ab6034  ldr w9,[x0, #0x8]
7102ab6038  cmn w9,#0x1
7102ab603c  b.eq 0x7102ab6054
7102ab6040  ldr w8,[x8, #0x20]
7102ab6044  cmp w9,w8
7102ab6048  b.ne 0x7102ab6054
7102ab604c  add x1,x20,#0x3a0
7102ab6050  bl 0x7103736cf0
7102ab6054  ldr x0,[x23, #0x8]
7102ab6058  ldr x8,[x0]
7102ab605c  ldr x8,[x8, #0x58]
7102ab6060  mov w1,w22
7102ab6064  mov w2,w21
7102ab6068  blr x8
7102ab606c  ldrb w22,[x20, #0x3b0]
7102ab6070  add w8,w22,#0x1
7102ab6074  strb w8,[x20, #0x3b0]
7102ab6078  ldrb w8,[x20, #0x38c]
7102ab607c  cmp w8,#0x4
7102ab6080  b.ne 0x7102ab61c0
7102ab6084  ldr s0,[x20, #0x388]
7102ab6088  mov w1,#0x1
7102ab608c  mov x0,x20
7102ab6090  mov w21,#0x1
7102ab6094  bl 0x7102abb730
7102ab6098  mov w8,#0x2
7102ab609c  strb wzr,[x20, #0x3b1]
7102ab60a0  strb w21,[x20, #0x395]
7102ab60a4  strb w8,[x20, #0x381]
7102ab60a8  ldr x8,[x20]
7102ab60ac  cbnz x8,0x7102ab61d0
7102ab60b0  b 0x7102ab61e4
7102ab60b4  ldrb w8,[x20, #0x3f8]
7102ab60b8  cbz w8,0x7102ab60e4
7102ab60bc  ldr x8,[x20, #0x3f0]
7102ab60c0  ldr x8,[x8]
7102ab60c4  ldr x0,[x8, #0x8]
7102ab60c8  cbz x0,0x7102ab60e0
7102ab60cc  ldr x8,[x0]
7102ab60d0  ldr w2,[x20, #0x3fc]
7102ab60d4  ldr w1,[x20, #0x414]
7102ab60d8  ldr x8,[x8, #0x58]
7102ab60dc  blr x8
7102ab60e0  strb wzr,[x20, #0x3f8]
7102ab60e4  ldrb w22,[x20, #0x3b1]
7102ab60e8  adrp x24,0x7104556000
7102ab60ec  add x24,x24,#0xfd0
7102ab60f0  lsl x8,x22,#0x3
7102ab60f4  ldr s0,[x24,x8]
7102ab60f8  fcmp s9,s0
7102ab60fc  b.lt 0x7102ab619c
7102ab6100  ldr x8,[x20, #0x398]
7102ab6104  ldr x23,[x8]
7102ab6108  ldr x0,[x23, #0x8]
7102ab610c  cbz x0,0x7102ab6194
7102ab6110  sub x1,x29,#0xc0
7102ab6114  mov w2,#0x1
7102ab6118  stur xzr,[x29, #-0xc0]
7102ab611c  bl 0x7102405040
7102ab6120  cmn w0,#0x1
7102ab6124  b.eq 0x7102ab6190
7102ab6128  add x8,x24,x22, LSL #0x3
7102ab612c  ldr s0,[x8, #0x4]
7102ab6130  mov w21,w0
7102ab6134  fcvtzu w22,s0
7102ab6138  cmp w0,#0x18
7102ab613c  b.hi 0x7102ab6178
7102ab6140  ldr x8,[x23, #0x8]
7102ab6144  mov w9,#0x50
7102ab6148  smaddl x8,w21,w9,x8
7102ab614c  ldr x0,[x8, #0x68]
7102ab6150  ldr x8,[x0]
7102ab6154  cbz x8,0x7102ab6178
7102ab6158  ldr w9,[x0, #0x8]
7102ab615c  cmn w9,#0x1
7102ab6160  b.eq 0x7102ab6178
7102ab6164  ldr w8,[x8, #0x20]
7102ab6168  cmp w9,w8
7102ab616c  b.ne 0x7102ab6178
7102ab6170  add x1,x20,#0x3a0
7102ab6174  bl 0x7103736cf0
7102ab6178  ldr x0,[x23, #0x8]
7102ab617c  ldr x8,[x0]
7102ab6180  ldr x8,[x8, #0x58]
7102ab6184  mov w1,w22
7102ab6188  mov w2,w21
7102ab618c  blr x8
7102ab6190  ldrb w22,[x20, #0x3b1]
7102ab6194  add w8,w22,#0x1
7102ab6198  strb w8,[x20, #0x3b1]
7102ab619c  ldrb w8,[x20, #0x38c]
7102ab61a0  cmp w8,#0x2
7102ab61a4  b.ne 0x7102ab61c0
7102ab61a8  ldr s0,[x20, #0x388]
7102ab61ac  mov x0,x20
7102ab61b0  mov w1,wzr
7102ab61b4  bl 0x7102abb730
7102ab61b8  mov w8,#0x5
7102ab61bc  strb w8,[x20, #0x3b0]
7102ab61c0  ldrb w8,[x20, #0x395]
7102ab61c4  cbz w8,0x7102ab61f0
7102ab61c8  ldr x8,[x20]
7102ab61cc  cbz x8,0x7102ab61e4
7102ab61d0  mov v0.16B,v8.16B
7102ab61d4  add x0,x8,#0x60
7102ab61d8  bl 0x71025ed6c0
7102ab61dc  ldrb w8,[x20, #0x395]
7102ab61e0  cbz w8,0x7102ab61f0
7102ab61e4  mov v0.16B,v8.16B
7102ab61e8  mov x0,x20
7102ab61ec  bl 0x7102abb920
7102ab61f0  ldr x20,[x19, #0xa80]
7102ab61f4  ldrb w8,[x20, #0x1e1]
7102ab61f8  cmp w8,#0x4
7102ab61fc  b.eq 0x7102ab6a94
7102ab6200  ldr s0,[x20, #0x1e4]
7102ab6204  fadd s0,s0,s8
7102ab6208  cmp w8,#0x2
7102ab620c  strb wzr,[x20, #0x1f5]
7102ab6210  str s0,[x20, #0x1e4]
7102ab6214  b.eq 0x7102ab62a4
7102ab6218  cmp w8,#0x1
7102ab621c  b.eq 0x7102ab6230
7102ab6220  cbnz w8,0x7102ab64d0
7102ab6224  mov w8,#0x1
7102ab6228  strb w8,[x20, #0x1f5]
7102ab622c  strb w8,[x20, #0x1e1]
7102ab6230  ldrb w8,[x20, #0x1ec]
7102ab6234  cmp w8,#0x2
7102ab6238  b.ne 0x7102ab64d0
7102ab623c  ldr w8,[x20, #0x1e8]
7102ab6240  str w8,[x20, #0x1e4]
7102ab6244  ldr x8,[x20, #0x8]
7102ab6248  strb wzr,[x20, #0x1a0]
7102ab624c  cbz x8,0x7102ab6280
7102ab6250  ldr x1,[x20, #0x110]
7102ab6254  cbz x1,0x7102ab6280
7102ab6258  ldr x21,[x8, #0xd8]
7102ab625c  cbz x21,0x7102ab627c
7102ab6260  ldr x8,[x8, #0xd0]
7102ab6264  cbz x8,0x7102ab627c
7102ab6268  ldr x0,[x21, #0x8]
7102ab626c  fmov s0,wzr
7102ab6270  bl 0x710367c160
7102ab6274  tbz w0,#0x0,0x7102ab627c
7102ab6278  str wzr,[x21, #0x10]
7102ab627c  ldr x8,[x20, #0x8]
7102ab6280  cbz x8,0x7102ab63c4
7102ab6284  ldrb w9,[x20, #0x1a0]
7102ab6288  add x9,x20,x9, LSL #0x6
7102ab628c  add x1,x9,#0x120
7102ab6290  add x0,x8,#0x60
7102ab6294  mov w2,#0x1
7102ab6298  bl 0x71025ee080
7102ab629c  ldr x0,[x20, #0x8]
7102ab62a0  b 0x7102ab63c8
7102ab62a4  ldrb w8,[x20, #0x1a0]
7102ab62a8  cbnz w8,0x7102ab63b8
7102ab62ac  ldr x0,[x20, #0x8]
7102ab62b0  bl 0x710260ffb0
7102ab62b4  tbz w0,#0x0,0x7102ab63b8
7102ab62b8  ldr x8,[x20, #0x8]
7102ab62bc  cbz x8,0x7102ab62f8
7102ab62c0  ldrb w9,[x8, #0xe0]
7102ab62c4  cbz w9,0x7102ab62d8
7102ab62c8  ldr x9,[x8, #0xc8]
7102ab62cc  cbz x9,0x7102ab62d8
7102ab62d0  mov w10,#0x101
7102ab62d4  strh w10,[x9, #0x30]
7102ab62d8  ldr x9,[x8, #0xd8]
7102ab62dc  cbz x9,0x7102ab62e8
7102ab62e0  mov w10,#0x1
7102ab62e4  strb w10,[x9, #0x21]
7102ab62e8  ldrb w9,[x8, #0xe0]
7102ab62ec  cbz w9,0x7102ab62f8
7102ab62f0  ldr x8,[x8, #0xb0]
7102ab62f4  strb wzr,[x8, #0x10]
7102ab62f8  ldr x8,[x20, #0x210]
7102ab62fc  ldr x8,[x8]
7102ab6300  ldr x0,[x8, #0x8]
7102ab6304  cbz x0,0x7102ab631c
7102ab6308  ldr x8,[x0]
7102ab630c  ldr w2,[x20, #0x21c]
7102ab6310  ldr w1,[x20, #0x234]
7102ab6314  ldr x8,[x8, #0x58]
7102ab6318  blr x8
7102ab631c  ldr x8,[x20, #0x1f8]
7102ab6320  strb wzr,[x20, #0x218]
7102ab6324  ldr x22,[x8]
7102ab6328  ldr x0,[x22, #0x8]
7102ab632c  cbz x0,0x7102ab63a4
7102ab6330  sub x1,x29,#0xc0
7102ab6334  mov w2,#0x1
7102ab6338  stur xzr,[x29, #-0xc0]
7102ab633c  bl 0x7102405040
7102ab6340  cmn w0,#0x1
7102ab6344  b.eq 0x7102ab63a4
7102ab6348  mov w21,w0
7102ab634c  cmp w0,#0x18
7102ab6350  b.hi 0x7102ab638c
7102ab6354  ldr x8,[x22, #0x8]
7102ab6358  mov w9,#0x50
7102ab635c  smaddl x8,w21,w9,x8
7102ab6360  ldr x0,[x8, #0x68]
7102ab6364  ldr x8,[x0]
7102ab6368  cbz x8,0x7102ab638c
7102ab636c  ldr w9,[x0, #0x8]
7102ab6370  cmn w9,#0x1
7102ab6374  b.eq 0x7102ab638c
7102ab6378  ldr w8,[x8, #0x20]
7102ab637c  cmp w9,w8
7102ab6380  b.ne 0x7102ab638c
7102ab6384  add x1,x20,#0x200
7102ab6388  bl 0x7103736cf0
7102ab638c  ldr x0,[x22, #0x8]
7102ab6390  ldr x8,[x0]
7102ab6394  ldr x8,[x8, #0x58]
7102ab6398  orr w1,wzr,#0xf
7102ab639c  mov w2,w21
7102ab63a0  blr x8
7102ab63a4  ldrb w8,[x20, #0x240]
7102ab63a8  add w8,w8,#0x1
7102ab63ac  strb w8,[x20, #0x240]
7102ab63b0  orr w8,wzr,#0x3
7102ab63b4  strb w8,[x20, #0x1e1]
7102ab63b8  mov w8,#0x1
7102ab63bc  strb w8,[x20, #0x1f5]
7102ab63c0  b 0x7102ab64d0
7102ab63c4  mov x0,xzr
7102ab63c8  ldr s0,[x20, #0x1e4]
7102ab63cc  mov w1,#0x1
7102ab63d0  bl 0x710260fdd0
7102ab63d4  ldr x8,[x20, #0x8]
7102ab63d8  cbz x8,0x7102ab6438
7102ab63dc  ldrb w9,[x8, #0xe0]
7102ab63e0  cbz w9,0x7102ab63f0
7102ab63e4  ldr x9,[x8, #0xc8]
7102ab63e8  cbz x9,0x7102ab63f0
7102ab63ec  strh wzr,[x9, #0x32]
7102ab63f0  ldr x8,[x8, #0xd8]
7102ab63f4  cbz x8,0x7102ab63fc
7102ab63f8  strb wzr,[x8, #0x22]
7102ab63fc  ldr x8,[x20, #0x8]
7102ab6400  cbz x8,0x7102ab6438
7102ab6404  ldrb w9,[x8, #0xe0]
7102ab6408  cbz w9,0x7102ab6418
7102ab640c  ldr x9,[x8, #0xc8]
7102ab6410  cbz x9,0x7102ab6418
7102ab6414  strh wzr,[x9, #0x30]
7102ab6418  ldr x9,[x8, #0xd8]
7102ab641c  cbz x9,0x7102ab6424
7102ab6420  strb wzr,[x9, #0x21]
7102ab6424  ldrb w9,[x8, #0xe0]
7102ab6428  cbz w9,0x7102ab6438
7102ab642c  ldr x8,[x8, #0xb0]
7102ab6430  mov w9,#0x1
7102ab6434  strb w9,[x8, #0x10]
7102ab6438  ldr x8,[x20, #0x10]
7102ab643c  ldp x21,x22,[x8]
7102ab6440  cmp x21,x22
7102ab6444  b.eq 0x7102ab647c
7102ab6448  mov w23,#0x1
7102ab644c  mov x24,#-0x1
7102ab6450  ldr x8,[x21]
7102ab6454  ldr x9,[x8, #0x8]
7102ab6458  strb w23,[x8, #0x128]
7102ab645c  cbz x9,0x7102ab6470
7102ab6460  str x24,[x9, #0xd8]
7102ab6464  ldr x0,[x8, #0x8]
7102ab6468  mov w1,wzr
7102ab646c  bl 0x7100532bc0
7102ab6470  add x21,x21,#0x8
7102ab6474  cmp x22,x21
7102ab6478  b.ne 0x7102ab6450
7102ab647c  ldr x8,[x20, #0x90]
7102ab6480  ldp x21,x22,[x8]
7102ab6484  cmp x21,x22
7102ab6488  b.eq 0x7102ab64c0
7102ab648c  mov w23,#0x1
7102ab6490  mov x24,#-0x1
7102ab6494  ldr x8,[x21]
7102ab6498  ldr x9,[x8, #0x8]
7102ab649c  strb w23,[x8, #0x128]
7102ab64a0  cbz x9,0x7102ab64b4
7102ab64a4  str x24,[x9, #0xd8]
7102ab64a8  ldr x0,[x8, #0x8]
7102ab64ac  mov w1,wzr
7102ab64b0  bl 0x7100532bc0
7102ab64b4  add x21,x21,#0x8
7102ab64b8  cmp x22,x21
7102ab64bc  b.ne 0x7102ab6494
7102ab64c0  mov w8,#0x1
7102ab64c4  strb w8,[x20, #0x1f5]
7102ab64c8  mov w8,#0x2
7102ab64cc  strb w8,[x20, #0x1e1]
7102ab64d0  ldrb w8,[x20, #0x1a0]
7102ab64d4  cmp w8,#0x1
7102ab64d8  b.eq 0x7102ab67c0
7102ab64dc  cbnz w8,0x7102ab6840
7102ab64e0  ldrb w8,[x20, #0x1f4]
7102ab64e4  cbnz w8,0x7102ab6618
7102ab64e8  adrp x8,0x7104472000
7102ab64ec  ldr s0,[x20, #0x1e8]
7102ab64f0  ldr s1,[x8, #0x8]
7102ab64f4  fcmp s0,s1
7102ab64f8  b.lt 0x7102ab661c
7102ab64fc  ldr x8,[x20, #0x288]
7102ab6500  ldr x8,[x8, #0x320]
7102ab6504  ldr w2,[x20, #0x1f0]
7102ab6508  sub x0,x29,#0xc0
7102ab650c  add x1,x8,#0x48
7102ab6510  mov w3,wzr
7102ab6514  bl 0x71025efd10
7102ab6518  ldur x8,[x29, #-0xb0]
7102ab651c  cbz x8,0x7102ab6540
7102ab6520  ldp x9,x10,[x29, #-0xc0]
7102ab6524  str x9,[x10]
7102ab6528  str x10,[x9, #0x8]
7102ab652c  ldr x9,[x8, #0x10]
7102ab6530  sub x9,x9,#0x1
7102ab6534  str x9,[x8, #0x10]
7102ab6538  stp xzr,xzr,[x29, #-0xb8]
7102ab653c  stur xzr,[x29, #-0xc0]
7102ab6540  ldr x8,[x20, #0x288]
7102ab6544  ldr x8,[x8, #0x320]
7102ab6548  ldr w2,[x20, #0x1f0]
7102ab654c  add x0,sp,#0xc8
7102ab6550  add x1,x8,#0x48
7102ab6554  mov w3,#0x1
7102ab6558  bl 0x71025efd10
7102ab655c  ldr x8,[sp, #0xd8]
7102ab6560  cbz x8,0x7102ab6584
7102ab6564  ldp x9,x10,[sp, #0xc8]
7102ab6568  str x9,[x10]
7102ab656c  str x10,[x9, #0x8]
7102ab6570  ldr x9,[x8, #0x10]
7102ab6574  sub x9,x9,#0x1
7102ab6578  str x9,[x8, #0x10]
7102ab657c  stp xzr,xzr,[sp, #0xd0]
7102ab6580  str xzr,[sp, #0xc8]
7102ab6584  ldr x8,[x20, #0x288]
7102ab6588  ldr x8,[x8, #0x320]
7102ab658c  ldr w2,[x20, #0x1f0]
7102ab6590  add x0,sp,#0xb0
7102ab6594  add x1,x8,#0x48
7102ab6598  mov w3,#0x2
7102ab659c  bl 0x71025efd10
7102ab65a0  ldr x8,[sp, #0xc0]
7102ab65a4  cbz x8,0x7102ab65c8
7102ab65a8  ldp x9,x10,[sp, #0xb0]
7102ab65ac  str x9,[x10]
7102ab65b0  str x10,[x9, #0x8]
7102ab65b4  ldr x9,[x8, #0x10]
7102ab65b8  sub x9,x9,#0x1
7102ab65bc  str x9,[x8, #0x10]
7102ab65c0  stp xzr,xzr,[sp, #0xb8]
7102ab65c4  str xzr,[sp, #0xb0]
7102ab65c8  ldr x8,[x20, #0x288]
7102ab65cc  ldr x8,[x8, #0x320]
7102ab65d0  ldr w2,[x20, #0x1f0]
7102ab65d4  add x0,sp,#0x98
7102ab65d8  add x1,x8,#0x48
7102ab65dc  orr w3,wzr,#0x3
7102ab65e0  bl 0x71025efd10
7102ab65e4  ldr x8,[sp, #0xa8]
7102ab65e8  cbz x8,0x7102ab660c
7102ab65ec  ldp x9,x10,[sp, #0x98]
7102ab65f0  str x9,[x10]
7102ab65f4  str x10,[x9, #0x8]
7102ab65f8  ldr x9,[x8, #0x10]
7102ab65fc  sub x9,x9,#0x1
7102ab6600  str x9,[x8, #0x10]
7102ab6604  stp xzr,xzr,[sp, #0xa0]
7102ab6608  str xzr,[sp, #0x98]
7102ab660c  ldrb w8,[x20, #0x1f4]
7102ab6610  add w8,w8,#0x1
7102ab6614  strb w8,[x20, #0x1f4]
7102ab6618  ldr s0,[x20, #0x1e8]
7102ab661c  adrp x8,0x7104473000
7102ab6620  ldr s1,[x8, #0x7b4]
7102ab6624  fcmp s0,s1
7102ab6628  b.lt 0x7102ab6640
7102ab662c  ldr x8,[x20, #0x10]
7102ab6630  ldp x0,x1,[x8]
7102ab6634  mov w2,#0x1
7102ab6638  bl 0x71025f4d80
7102ab663c  ldr s0,[x20, #0x1e8]
7102ab6640  adrp x8,0x7104472000
7102ab6644  ldr s1,[x8, #0x28]
7102ab6648  fcmp s0,s1
7102ab664c  b.lt 0x7102ab673c
7102ab6650  ldr x8,[x20, #0x10]
7102ab6654  ldp x22,x23,[x8, #0x18]
7102ab6658  cmp x22,x23
7102ab665c  b.eq 0x7102ab673c
7102ab6660  ldrb w26,[x20, #0x1a1]
7102ab6664  add x8,x20,#0x1a1
7102ab6668  str x8,[sp, #0x80]
7102ab666c  mov w24,#0x9dc5
7102ab6670  movk w24,#0x811c, LSL #16
7102ab6674  add x27,x20,#0x1a2
7102ab6678  mov w25,#0x89
7102ab667c  mov x28,x22
7102ab6680  ldr x21,[x28]
7102ab6684  ldr w8,[x21, #0x18]
7102ab6688  mov w9,w24
7102ab668c  cbz w26,0x7102ab66b0
7102ab6690  mov x10,x27
7102ab6694  mov w11,w26
7102ab6698  mov w9,w24
7102ab669c  mul w9,w9,w25
7102ab66a0  and w11,w11,#0xff
7102ab66a4  eor w9,w9,w11
7102ab66a8  ldrb w11,[x10], #0x1
7102ab66ac  cbnz w11,0x7102ab669c
7102ab66b0  cmp w8,w9
7102ab66b4  b.ne 0x7102ab66c8
7102ab66b8  ldr x1,[sp, #0x80]
7102ab66bc  add x0,x21,#0x20
7102ab66c0  bl 0x71039c0060
7102ab66c4  cbz w0,0x7102ab7b88
7102ab66c8  add x28,x28,#0x8
7102ab66cc  cmp x28,x23
7102ab66d0  b.ne 0x7102ab6680
7102ab66d4  cmp x22,x23
7102ab66d8  b.eq 0x7102ab673c
7102ab66dc  ldrb w26,[x20, #0x1c1]
7102ab66e0  add x21,x20,#0x1c1
7102ab66e4  add x27,x20,#0x1c2
7102ab66e8  ldr x28,[x22]
7102ab66ec  ldr w8,[x28, #0x18]
7102ab66f0  mov w9,w24
7102ab66f4  cbz w26,0x7102ab6718
7102ab66f8  mov x10,x27
7102ab66fc  mov w11,w26
7102ab6700  mov w9,w24
7102ab6704  mul w9,w9,w25
7102ab6708  and w11,w11,#0xff
7102ab670c  eor w9,w9,w11
7102ab6710  ldrb w11,[x10], #0x1
7102ab6714  cbnz w11,0x7102ab6704
7102ab6718  cmp w8,w9
7102ab671c  b.ne 0x7102ab6730
7102ab6720  add x0,x28,#0x20
7102ab6724  mov x1,x21
7102ab6728  bl 0x71039c0060
7102ab672c  cbz w0,0x7102ab7d40
7102ab6730  add x22,x22,#0x8
7102ab6734  cmp x22,x23
7102ab6738  b.ne 0x7102ab66e8
7102ab673c  mov x0,x20
7102ab6740  bl 0x7102ac02a0
7102ab6744  ldrb w8,[x20, #0x1ec]
7102ab6748  cmp w8,#0x4
7102ab674c  b.ne 0x7102ab6840
7102ab6750  mov x23,x20
7102ab6754  ldr x8,[x23, #0x8]!
7102ab6758  ldr w9,[x23, #0x1e0]
7102ab675c  mov w10,#0x1
7102ab6760  strb w10,[x23, #0x198]
7102ab6764  str w9,[x23, #0x1dc]
7102ab6768  cbz x8,0x7102ab679c
7102ab676c  ldr x1,[x23, #0x110]
7102ab6770  cbz x1,0x7102ab679c
7102ab6774  ldr x21,[x8, #0xd8]
7102ab6778  cbz x21,0x7102ab6798
7102ab677c  ldr x8,[x8, #0xd0]
7102ab6780  cbz x8,0x7102ab6798
7102ab6784  ldr x0,[x21, #0x8]
7102ab6788  fmov s0,wzr
7102ab678c  bl 0x710367c160
7102ab6790  tbz w0,#0x0,0x7102ab6798
7102ab6794  str wzr,[x21, #0x10]
7102ab6798  ldr x8,[x23]
7102ab679c  cbz x8,0x7102ab7870
7102ab67a0  ldrb w9,[x20, #0x1a0]
7102ab67a4  add x9,x20,x9, LSL #0x6
7102ab67a8  add x1,x9,#0x120
7102ab67ac  add x0,x8,#0x60
7102ab67b0  mov w2,#0x1
7102ab67b4  bl 0x71025ee080
7102ab67b8  ldr x0,[x20, #0x8]
7102ab67bc  b 0x7102ab7874
7102ab67c0  mov x0,x20
7102ab67c4  bl 0x7102ac02a0
7102ab67c8  ldrb w8,[x20, #0x1ec]
7102ab67cc  cmp w8,#0x2
7102ab67d0  b.ne 0x7102ab6840
7102ab67d4  mov x22,x20
7102ab67d8  ldr x8,[x22, #0x8]!
7102ab67dc  ldr w9,[x22, #0x1e0]
7102ab67e0  strb wzr,[x22, #0x198]
7102ab67e4  str w9,[x22, #0x1dc]
7102ab67e8  cbz x8,0x7102ab681c
7102ab67ec  ldr x1,[x22, #0x108]
7102ab67f0  cbz x1,0x7102ab681c
7102ab67f4  ldr x21,[x8, #0xd8]
7102ab67f8  cbz x21,0x7102ab6818
7102ab67fc  ldr x8,[x8, #0xd0]
7102ab6800  cbz x8,0x7102ab6818
7102ab6804  ldr x0,[x21, #0x8]
7102ab6808  fmov s0,wzr
7102ab680c  bl 0x710367c160
7102ab6810  tbz w0,#0x0,0x7102ab6818
7102ab6814  str wzr,[x21, #0x10]
7102ab6818  ldr x8,[x22]
7102ab681c  cbz x8,0x7102ab7a38
7102ab6820  ldrb w9,[x20, #0x1a0]
7102ab6824  add x9,x20,x9, LSL #0x6
7102ab6828  add x1,x9,#0x120
7102ab682c  add x0,x8,#0x60
7102ab6830  mov w2,#0x1
7102ab6834  bl 0x71025ee080
7102ab6838  ldr x0,[x20, #0x8]
7102ab683c  b 0x7102ab7a3c
7102ab6840  ldrb w8,[x20, #0x1f5]
7102ab6844  cbz w8,0x7102ab6864
7102ab6848  add x22,x20,#0x8
7102ab684c  ldr x9,[x22]
7102ab6850  cbz x9,0x7102ab6864
7102ab6854  mov v0.16B,v8.16B
7102ab6858  add x0,x9,#0x60
7102ab685c  bl 0x71025ed6c0
7102ab6860  ldrb w8,[x20, #0x1f5]
7102ab6864  cbz w8,0x7102ab6a94
7102ab6868  adrp x8,0x7104468000
7102ab686c  adrp x9,0x710446a000
7102ab6870  ldr q1,[x9, #0x360]
7102ab6874  ldr q0,[x8, #0xca0]
7102ab6878  adrp x10,0x7104465000
7102ab687c  adrp x11,0x710446a000
7102ab6880  stp q0,q1,[x29, #-0xc0]
7102ab6884  ldr q0,[x10, #0x6b0]
7102ab6888  ldr q1,[x11, #0x350]
7102ab688c  add x0,x20,#0x20
7102ab6890  sub x1,x29,#0xc0
7102ab6894  stp q0,q1,[x29, #-0xa0]
7102ab6898  bl 0x710314fa90
7102ab689c  ldur q0,[x29, #-0x90]
7102ab68a0  movi v1.2D,#0x0
7102ab68a4  ldr x9,[x20, #0x10]
7102ab68a8  ldp x8,x9,[x9]
7102ab68ac  ext v1.16B,v1.16B,v0.16B,0x8
7102ab68b0  ext v7.16B,v1.16B,v1.16B,0x8
7102ab68b4  cmp x8,x9
7102ab68b8  b.eq 0x7102ab6990
7102ab68bc  dup s1,v0.S[0x1]
7102ab68c0  adrp x11,0x7104472000
7102ab68c4  ldr s2,[x11, #0x970]
7102ab68c8  fmov s3,0xbf800000
7102ab68cc  fmov s4,0x3f800000
7102ab68d0  mov w10,#0x1
7102ab68d4  ldr x11,[x8]
7102ab68d8  ldr x13,[x11, #0x8]
7102ab68dc  ldrb w14,[x13, #0xe7]
7102ab68e0  ldrb w13,[x13, #0xe8]
7102ab68e4  ldrb w12,[x11, #0x128]
7102ab68e8  cmp w12,#0x0
7102ab68ec  orr w13,w13,w14
7102ab68f0  and w12,w13,#0xff
7102ab68f4  ccmp w12,#0x0,#0x0,ne
7102ab68f8  b.eq 0x7102ab6904
7102ab68fc  strb w10,[x11, #0x129]
7102ab6900  b 0x7102ab6928
7102ab6904  ldr q5,[x11, #0x10]
7102ab6908  fabd s6,s5,s0
7102ab690c  fcmp s6,s2
7102ab6910  b.gt 0x7102ab6924
7102ab6914  dup s5,v5.S[0x1]
7102ab6918  fabd s5,s5,s1
7102ab691c  fcmp s5,s2
7102ab6920  b.le 0x7102ab692c
7102ab6924  strb w10,[x11, #0x12a]
7102ab6928  str q7,[x11, #0x10]
7102ab692c  ldr s5,[x11, #0x30]
7102ab6930  fabs s5,s5
7102ab6934  fcmp s5,s2
7102ab6938  b.mi 0x7102ab6944
7102ab693c  str wzr,[x11, #0x30]
7102ab6940  strb w10,[x11, #0x129]
7102ab6944  ldr q5,[x11, #0x50]
7102ab6948  fadd s6,s5,s3
7102ab694c  fabs s6,s6
7102ab6950  fcmp s6,s2
7102ab6954  b.mi 0x7102ab6964
7102ab6958  mov v5.S[0x0],v4.S[0x0]
7102ab695c  strb w10,[x11, #0x129]
7102ab6960  str q5,[x11, #0x50]
7102ab6964  dup s6,v5.S[0x1]
7102ab6968  fadd s6,s6,s3
7102ab696c  fabs s6,s6
7102ab6970  fcmp s6,s2
7102ab6974  b.mi 0x7102ab6984
7102ab6978  mov v5.S[0x1],v4.S[0x0]
7102ab697c  strb w10,[x11, #0x129]
7102ab6980  str q5,[x11, #0x50]
7102ab6984  add x8,x8,#0x8
7102ab6988  cmp x9,x8
7102ab698c  b.ne 0x7102ab68d4
7102ab6990  add x0,x20,#0xa0
7102ab6994  sub x1,x29,#0xc0
7102ab6998  str q7,[sp, #0x80]
7102ab699c  bl 0x710314fa90
7102ab69a0  ldr x9,[x20, #0x90]
7102ab69a4  ldp x8,x9,[x9]
7102ab69a8  cmp x8,x9
7102ab69ac  b.eq 0x7102ab6a94
7102ab69b0  ldur q0,[x29, #-0x90]
7102ab69b4  ldr q1,[sp, #0x80]
7102ab69b8  ext v2.16B,v1.16B,v0.16B,0x8
7102ab69bc  dup s1,v0.S[0x1]
7102ab69c0  adrp x11,0x7104472000
7102ab69c4  ldr s3,[x11, #0x970]
7102ab69c8  ext v2.16B,v2.16B,v2.16B,0x8
7102ab69cc  fmov s4,0xbf800000
7102ab69d0  fmov s5,0x3f800000
7102ab69d4  mov w10,#0x1
7102ab69d8  ldr x11,[x8]
7102ab69dc  ldr x13,[x11, #0x8]
7102ab69e0  ldrb w14,[x13, #0xe7]
7102ab69e4  ldrb w13,[x13, #0xe8]
7102ab69e8  ldrb w12,[x11, #0x128]
7102ab69ec  cmp w12,#0x0
7102ab69f0  orr w13,w13,w14
7102ab69f4  and w12,w13,#0xff
7102ab69f8  ccmp w12,#0x0,#0x0,ne
7102ab69fc  b.eq 0x7102ab6a08
7102ab6a00  strb w10,[x11, #0x129]
7102ab6a04  b 0x7102ab6a2c
7102ab6a08  ldr q6,[x11, #0x10]
7102ab6a0c  fabd s7,s6,s0
7102ab6a10  fcmp s7,s3
7102ab6a14  b.gt 0x7102ab6a28
7102ab6a18  dup s6,v6.S[0x1]
7102ab6a1c  fabd s6,s6,s1
7102ab6a20  fcmp s6,s3
7102ab6a24  b.le 0x7102ab6a30
7102ab6a28  strb w10,[x11, #0x12a]
7102ab6a2c  str q2,[x11, #0x10]
7102ab6a30  ldr s6,[x11, #0x30]
7102ab6a34  fabs s6,s6
7102ab6a38  fcmp s6,s3
7102ab6a3c  b.mi 0x7102ab6a48
7102ab6a40  str wzr,[x11, #0x30]
7102ab6a44  strb w10,[x11, #0x129]
7102ab6a48  ldr q6,[x11, #0x50]
7102ab6a4c  fadd s7,s6,s4
7102ab6a50  fabs s7,s7
7102ab6a54  fcmp s7,s3
7102ab6a58  b.mi 0x7102ab6a68
7102ab6a5c  mov v6.S[0x0],v5.S[0x0]
7102ab6a60  strb w10,[x11, #0x129]
7102ab6a64  str q6,[x11, #0x50]
7102ab6a68  dup s7,v6.S[0x1]
7102ab6a6c  fadd s7,s7,s4
7102ab6a70  fabs s7,s7
7102ab6a74  fcmp s7,s3
7102ab6a78  b.mi 0x7102ab6a88
7102ab6a7c  mov v6.S[0x1],v5.S[0x0]
7102ab6a80  strb w10,[x11, #0x129]
7102ab6a84  str q6,[x11, #0x50]
7102ab6a88  add x8,x8,#0x8
7102ab6a8c  cmp x9,x8
7102ab6a90  b.ne 0x7102ab69d8
7102ab6a94  ldr x8,[x19, #0x318]
7102ab6a98  ldr x8,[x8, #0x10]
7102ab6a9c  ldr w9,[x19, #0xa4c]
7102ab6aa0  str w9,[x8, #0x48]
7102ab6aa4  ldr x8,[x19, #0x318]
7102ab6aa8  ldr s0,[x19, #0xa4c]
7102ab6aac  ldr x20,[x8, #0x40]
7102ab6ab0  cbz x20,0x7102ab6b34
7102ab6ab4  stur s0,[x29, #-0xc0]
7102ab6ab8  ldr x8,[x20, #0x10]
7102ab6abc  cbz x8,0x7102ab6b2c
7102ab6ac0  ldr x9,[x8]
7102ab6ac4  ldr w9,[x9, #0x4]
7102ab6ac8  cbz w9,0x7102ab6b2c
7102ab6acc  fcmp s0,#0.0
7102ab6ad0  b.pl 0x7102ab6adc
7102ab6ad4  fmov s0,wzr
7102ab6ad8  stur wzr,[x29, #-0xc0]
7102ab6adc  ldrb w10,[x20, #0x21]
7102ab6ae0  cbz w10,0x7102ab6afc
7102ab6ae4  ucvtf s1,w9
7102ab6ae8  bl 0x71039c0810
7102ab6aec  ldr x8,[x20, #0x10]
7102ab6af0  str s0,[x20, #0x1c]
7102ab6af4  cbnz x8,0x7102ab6b20
7102ab6af8  b 0x7102ab6b2c
7102ab6afc  ucvtf s1,w9
7102ab6b00  sub x9,x29,#0xc0
7102ab6b04  fcmp s0,s1
7102ab6b08  add x10,sp,#0xc8
7102ab6b0c  str s1,[sp, #0xc8]
7102ab6b10  csel x9,x10,x9,gt
7102ab6b14  ldr w9,[x9]
7102ab6b18  str w9,[x20, #0x1c]
7102ab6b1c  fmov s0,w9
7102ab6b20  fcvtzs w9,s0
7102ab6b24  ldr x8,[x8]
7102ab6b28  str w9,[x8, #0x40]
7102ab6b2c  ldr s0,[x19, #0xa4c]
7102ab6b30  ldr x8,[x19, #0x318]
7102ab6b34  ldr x20,[x8, #0x48]
7102ab6b38  cbz x20,0x7102ab6b84
7102ab6b3c  stur s0,[x29, #-0xc0]
7102ab6b40  ldr x8,[x20, #0x10]
7102ab6b44  cbz x8,0x7102ab6bbc
7102ab6b48  ldr x9,[x8]
7102ab6b4c  ldr w9,[x9, #0x4]
7102ab6b50  cbz w9,0x7102ab6bbc
7102ab6b54  fcmp s0,#0.0
7102ab6b58  b.pl 0x7102ab6b64
7102ab6b5c  fmov s0,wzr
7102ab6b60  stur wzr,[x29, #-0xc0]
7102ab6b64  ldrb w10,[x20, #0x21]
7102ab6b68  cbz w10,0x7102ab6b8c
7102ab6b6c  ucvtf s1,w9
7102ab6b70  bl 0x71039c0810
7102ab6b74  ldr x8,[x20, #0x10]
7102ab6b78  str s0,[x20, #0x1c]
7102ab6b7c  cbnz x8,0x7102ab6bb0
7102ab6b80  b 0x7102ab6bbc
7102ab6b84  fmov w8,s0
7102ab6b88  b 0x7102ab6bc0
7102ab6b8c  ucvtf s1,w9
7102ab6b90  sub x9,x29,#0xc0
7102ab6b94  fcmp s0,s1
7102ab6b98  add x10,sp,#0xc8
7102ab6b9c  str s1,[sp, #0xc8]
7102ab6ba0  csel x9,x10,x9,gt
7102ab6ba4  ldr w9,[x9]
7102ab6ba8  str w9,[x20, #0x1c]
7102ab6bac  fmov s0,w9
7102ab6bb0  fcvtzs w9,s0
7102ab6bb4  ldr x8,[x8]
7102ab6bb8  str w9,[x8, #0x40]
7102ab6bbc  ldr w8,[x19, #0xa4c]
7102ab6bc0  ldr x9,[x19, #0xa90]
7102ab6bc4  str w8,[x9, #0xf8]
7102ab6bc8  ldr x8,[x19, #0xa88]
7102ab6bcc  ldr w9,[x19, #0xa4c]
7102ab6bd0  str w9,[x8, #0x1c4]
7102ab6bd4  ldr x8,[x19, #0xa78]
7102ab6bd8  ldr w9,[x19, #0xa4c]
7102ab6bdc  str w9,[x8, #0x388]
7102ab6be0  ldr x8,[x19, #0xa80]
7102ab6be4  ldr w9,[x19, #0xa4c]
7102ab6be8  str w9,[x8, #0x1e8]
7102ab6bec  ldr x8,[x19, #0xa90]
7102ab6bf0  ldrb w9,[x19, #0xa54]
7102ab6bf4  strb w9,[x8, #0xfc]
7102ab6bf8  ldr x8,[x19, #0xa88]
7102ab6bfc  ldrb w9,[x19, #0xa54]
7102ab6c00  strb w9,[x8, #0x1c8]
7102ab6c04  ldr x8,[x19, #0xa78]
7102ab6c08  ldrb w9,[x19, #0xa54]
7102ab6c0c  strb w9,[x8, #0x38c]
7102ab6c10  ldr x8,[x19, #0xa80]
7102ab6c14  ldrb w9,[x19, #0xa54]
7102ab6c18  strb w9,[x8, #0x1ec]
7102ab6c1c  adrp x8,0x7104468000
7102ab6c20  ldr q0,[x8, #0xca0]
7102ab6c24  adrp x8,0x710446a000
7102ab6c28  ldr x0,[x19, #0xa78]
7102ab6c2c  str q0,[sp, #0x80]
7102ab6c30  stur q0,[x29, #-0xc0]
7102ab6c34  ldr q0,[x8, #0x360]
7102ab6c38  adrp x8,0x7104465000
7102ab6c3c  stur q0,[x29, #-0xb0]
7102ab6c40  str q0,[sp, #0x70]
7102ab6c44  ldr q0,[x8, #0x6b0]
7102ab6c48  adrp x8,0x710446a000
7102ab6c4c  sub x1,x29,#0xc0
7102ab6c50  str q0,[sp, #0x60]
7102ab6c54  stur q0,[x29, #-0xa0]
7102ab6c58  ldr q0,[x8, #0x350]
7102ab6c5c  str q0,[sp, #0x50]
7102ab6c60  stur q0,[x29, #-0x90]
7102ab6c64  ldr x8,[x0, #0xa0]!
7102ab6c68  ldr x8,[x8, #0x10]
7102ab6c6c  blr x8
7102ab6c70  ldp q0,q1,[x29, #-0xc0]
7102ab6c74  ldp q2,q3,[x29, #-0xa0]
7102ab6c78  sub x1,x29,#0xc0
7102ab6c7c  ldr x8,[x19, #0xa88]
7102ab6c80  stp q0,q1,[x8, #0x180]
7102ab6c84  stp q2,q3,[x8, #0x1a0]
7102ab6c88  ldr q0,[sp, #0x80]
7102ab6c8c  ldr x8,[x19, #0xa78]
7102ab6c90  add x0,x8,#0x110
7102ab6c94  stur q0,[x29, #-0xc0]
7102ab6c98  ldr q0,[sp, #0x70]
7102ab6c9c  stur q0,[x29, #-0xb0]
7102ab6ca0  ldr q0,[sp, #0x60]
7102ab6ca4  stur q0,[x29, #-0xa0]
7102ab6ca8  ldr q0,[sp, #0x50]
7102ab6cac  stur q0,[x29, #-0x90]
7102ab6cb0  ldr x8,[x8, #0x110]
7102ab6cb4  ldr x8,[x8, #0x10]
7102ab6cb8  blr x8
7102ab6cbc  ldp q0,q1,[x29, #-0xc0]
7102ab6cc0  ldp q2,q3,[x29, #-0xa0]
7102ab6cc4  sub x1,x29,#0xc0
7102ab6cc8  ldr x8,[x19, #0xa90]
7102ab6ccc  stp q0,q1,[x8, #0xb0]
7102ab6cd0  stp q2,q3,[x8, #0xd0]
7102ab6cd4  ldr q0,[sp, #0x80]
7102ab6cd8  ldr x8,[x19, #0xa78]
7102ab6cdc  add x0,x8,#0x180
7102ab6ce0  stur q0,[x29, #-0xc0]
7102ab6ce4  ldr q0,[sp, #0x70]
7102ab6ce8  stur q0,[x29, #-0xb0]
7102ab6cec  ldr q0,[sp, #0x60]
7102ab6cf0  stur q0,[x29, #-0xa0]
7102ab6cf4  ldr q0,[sp, #0x50]
7102ab6cf8  stur q0,[x29, #-0x90]
7102ab6cfc  ldr x8,[x8, #0x180]
7102ab6d00  ldr x8,[x8, #0x10]
7102ab6d04  blr x8
7102ab6d08  ldp q0,q1,[x29, #-0xc0]
7102ab6d0c  ldp q2,q3,[x29, #-0xa0]
7102ab6d10  ldr x8,[x19, #0xa98]
7102ab6d14  stp q0,q1,[x8, #0x20]
7102ab6d18  mov v0.16B,v8.16B
7102ab6d1c  stp q2,q3,[x8, #0x40]
7102ab6d20  ldr x0,[x19, #0xa90]
7102ab6d24  bl 0x7102abec80
7102ab6d28  ldr x22,[x19, #0xa88]
7102ab6d2c  ldrb w8,[x22, #0x1c0]
7102ab6d30  cmp w8,#0x4
7102ab6d34  b.hi 0x7102ab6f68
7102ab6d38  adrp x9,0x7104514000
7102ab6d3c  add x9,x9,#0xc54
7102ab6d40  ldrsw x8,[x9, x8, LSL #0x2]
7102ab6d44  add x8,x8,x9
7102ab6d48  br x8
7102ab6d4c  mov w8,#0x1
7102ab6d50  strb w8,[x22, #0x1c0]
7102ab6d54  fcmp s8,#0.0
7102ab6d58  b.le 0x7102ab6f68
7102ab6d5c  ldrb w8,[x22, #0x1c8]
7102ab6d60  cmp w8,#0x2
7102ab6d64  b.ne 0x7102ab6f68
7102ab6d68  ldr x8,[x22, #0x10]
7102ab6d6c  cbz x8,0x7102ab6da4
7102ab6d70  ldrb w9,[x8, #0xe0]
7102ab6d74  cbz w9,0x7102ab6d84
7102ab6d78  ldr x9,[x8, #0xc8]
7102ab6d7c  cbz x9,0x7102ab6d84
7102ab6d80  strh wzr,[x9, #0x30]
7102ab6d84  ldr x9,[x8, #0xd8]
7102ab6d88  cbz x9,0x7102ab6d90
7102ab6d8c  strb wzr,[x9, #0x21]
7102ab6d90  ldrb w9,[x8, #0xe0]
7102ab6d94  cbz w9,0x7102ab6da4
7102ab6d98  ldr x8,[x8, #0xb0]
7102ab6d9c  mov w9,#0x1
7102ab6da0  strb w9,[x8, #0x10]
7102ab6da4  ldr x8,[x22, #0x1d8]
7102ab6da8  ldr x8,[x8]
7102ab6dac  ldr x0,[x8, #0x8]
7102ab6db0  cbz x0,0x7102ab6dc8
7102ab6db4  ldr x8,[x0]
7102ab6db8  ldr x8,[x8, #0x58]
7102ab6dbc  mov w2,#0xffffffff
7102ab6dc0  mov w1,wzr
7102ab6dc4  blr x8
7102ab6dc8  ldr x8,[x22, #0x1e0]
7102ab6dcc  ldr x8,[x8]
7102ab6dd0  ldr x0,[x8, #0x8]
7102ab6dd4  cbz x0,0x7102ab6dec
7102ab6dd8  ldr x8,[x0]
7102ab6ddc  ldr w2,[x22, #0x1ec]
7102ab6de0  ldr w1,[x22, #0x200]
7102ab6de4  ldr x8,[x8, #0x58]
7102ab6de8  blr x8
7102ab6dec  mov w8,#0x1
7102ab6df0  strb w8,[x22, #0x1e8]
7102ab6df4  ldr x8,[x22, #0x1d0]
7102ab6df8  strb wzr,[x8, #0x140]
7102ab6dfc  mov w8,#0x2
7102ab6e00  b 0x7102ab6f64
7102ab6e04  adrp x8,0x7104473000
7102ab6e08  ldr s0,[x22, #0x1c4]
7102ab6e0c  ldr s1,[x8, #0x21c]
7102ab6e10  fcmp s0,s1
7102ab6e14  b.lt 0x7102ab6f68
7102ab6e18  ldr x8,[x22, #0x10]
7102ab6e1c  cbz x8,0x7102ab6e6c
7102ab6e20  ldrb w9,[x8, #0xe0]
7102ab6e24  cbz w9,0x7102ab6e38
7102ab6e28  ldr x9,[x8, #0xc8]
7102ab6e2c  cbz x9,0x7102ab6e38
7102ab6e30  mov w10,#0x101
7102ab6e34  strh w10,[x9, #0x30]
7102ab6e38  ldr x9,[x8, #0xd8]
7102ab6e3c  cbz x9,0x7102ab6e48
7102ab6e40  mov w10,#0x1
7102ab6e44  strb w10,[x9, #0x21]
7102ab6e48  ldrb w9,[x8, #0xe0]
7102ab6e4c  cbz w9,0x7102ab6e58
7102ab6e50  ldr x8,[x8, #0xb0]
7102ab6e54  strb wzr,[x8, #0x10]
7102ab6e58  ldr x8,[x22, #0x10]
7102ab6e5c  cbz x8,0x7102ab6e6c
7102ab6e60  add x0,x8,#0x108
7102ab6e64  strb wzr,[x8, #0x110]
7102ab6e68  bl 0x71025e9d50
7102ab6e6c  orr w8,wzr,#0x3
7102ab6e70  b 0x7102ab6f64
7102ab6e74  ldr x8,[x22, #0x10]
7102ab6e78  cbz x8,0x7102ab6ef4
7102ab6e7c  ldr x8,[x8, #0xd8]
7102ab6e80  cbz x8,0x7102ab6ef4
7102ab6e84  ldr s0,[x8, #0x10]
7102ab6e88  adrp x8,0x7104472000
7102ab6e8c  ldr s1,[x8, #0xf38]
7102ab6e90  fcmp s0,s1
7102ab6e94  b.lt 0x7102ab6ef4
7102ab6e98  ldrb w8,[x22, #0x210]
7102ab6e9c  cbnz w8,0x7102ab6ef4
7102ab6ea0  ldr x8,[x22, #0x1e0]
7102ab6ea4  ldr x8,[x8]
7102ab6ea8  ldr x0,[x8, #0x8]
7102ab6eac  cbz x0,0x7102ab6ec4
7102ab6eb0  ldr x8,[x0]
7102ab6eb4  ldr w2,[x22, #0x1ec]
7102ab6eb8  ldr w1,[x22, #0x204]
7102ab6ebc  ldr x8,[x8, #0x58]
7102ab6ec0  blr x8
7102ab6ec4  ldr x8,[x22, #0x1d8]
7102ab6ec8  strb wzr,[x22, #0x1e8]
7102ab6ecc  ldr x8,[x8]
7102ab6ed0  ldr x0,[x8, #0x8]
7102ab6ed4  cbz x0,0x7102ab6eec
7102ab6ed8  ldr x8,[x0]
7102ab6edc  ldr x8,[x8, #0x58]
7102ab6ee0  mov w2,#0xffffffff
7102ab6ee4  orr w1,wzr,#0x3
7102ab6ee8  blr x8
7102ab6eec  mov w8,#0x1
7102ab6ef0  strb w8,[x22, #0x210]
7102ab6ef4  adrp x8,0x7104471000
7102ab6ef8  ldr s0,[x22, #0x1c4]
7102ab6efc  ldr s1,[x8, #0xc90]
7102ab6f00  fcmp s0,s1
7102ab6f04  b.lt 0x7102ab6f68
7102ab6f08  ldr x8,[x22, #0x1d0]
7102ab6f0c  ldr x9,[x8, #0x10]
7102ab6f10  cbz x9,0x7102ab6f60
7102ab6f14  ldrb w10,[x9, #0xe0]
7102ab6f18  cbz w10,0x7102ab6f2c
7102ab6f1c  ldr x10,[x9, #0xc8]
7102ab6f20  cbz x10,0x7102ab6f2c
7102ab6f24  mov w11,#0x101
7102ab6f28  strh w11,[x10, #0x30]
7102ab6f2c  ldr x10,[x9, #0xd8]
7102ab6f30  cbz x10,0x7102ab6f3c
7102ab6f34  mov w11,#0x1
7102ab6f38  strb w11,[x10, #0x21]
7102ab6f3c  ldrb w10,[x9, #0xe0]
7102ab6f40  cbz w10,0x7102ab6f4c
7102ab6f44  ldr x9,[x9, #0xb0]
7102ab6f48  strb wzr,[x9, #0x10]
7102ab6f4c  ldr x8,[x8, #0x10]
7102ab6f50  cbz x8,0x7102ab6f60
7102ab6f54  add x0,x8,#0x108
7102ab6f58  strb wzr,[x8, #0x110]
7102ab6f5c  bl 0x71025e9d50
7102ab6f60  mov w8,#0x4
7102ab6f64  strb w8,[x22, #0x1c0]
7102ab6f68  ldr x21,[x22, #0x10]
7102ab6f6c  cbz x21,0x7102ab6ff4
7102ab6f70  ldr x0,[x21, #0x90]
7102ab6f74  ldr x8,[x0]
7102ab6f78  ldr x8,[x8, #0x148]
7102ab6f7c  add x20,x22,#0x180
7102ab6f80  mov x1,x20
7102ab6f84  blr x8
7102ab6f88  ldr x21,[x21, #0xd8]
7102ab6f8c  cbz x21,0x7102ab6fe0
7102ab6f90  ldp x10,x9,[x20, #0x10]
7102ab6f94  stur x9,[x29, #-0xa8]
7102ab6f98  ldp x9,x8,[x20]
7102ab6f9c  stur x9,[x29, #-0xc0]
7102ab6fa0  stp x8,x10,[x29, #-0xb8]
7102ab6fa4  ldp x10,x9,[x20, #0x30]
7102ab6fa8  stur x9,[x29, #-0x88]
7102ab6fac  ldp x9,x8,[x20, #0x20]
7102ab6fb0  stur x9,[x29, #-0xa0]
7102ab6fb4  stp x8,x10,[x29, #-0x98]
7102ab6fb8  ldr x8,[x21, #0x8]
7102ab6fbc  ldrb w9,[x8, #0xa8]
7102ab6fc0  cbz w9,0x7102ab6fd8
7102ab6fc4  ldr x0,[x8, #0x48]
7102ab6fc8  ldr x8,[x0]
7102ab6fcc  ldr x8,[x8, #0x20]
7102ab6fd0  sub x1,x29,#0xc0
7102ab6fd4  blr x8
7102ab6fd8  mov w8,#0x1
7102ab6fdc  strb w8,[x21, #0x20]
7102ab6fe0  ldr x8,[x22, #0x10]
7102ab6fe4  cbz x8,0x7102ab6ff4
7102ab6fe8  mov v0.16B,v8.16B
7102ab6fec  add x0,x8,#0x60
7102ab6ff0  bl 0x71025ed6c0
7102ab6ff4  ldrb w8,[x22, #0x1c8]
7102ab6ff8  cmp w8,#0x2
7102ab6ffc  b.ne 0x7102ab7268
7102ab7000  adrp x8,0x7104473000
7102ab7004  ldr s10,[x22, #0x1c4]
7102ab7008  ldr s9,[x8, #0x684]
7102ab700c  fcmp s10,s9
7102ab7010  b.le 0x7102ab7038
7102ab7014  ldr x8,[x22, #0x18]
7102ab7018  ldp x0,x1,[x8]
7102ab701c  mov w2,#0x1
7102ab7020  bl 0x71025f4d80
7102ab7024  ldr x8,[x22, #0x20]
7102ab7028  ldp x0,x1,[x8]
7102ab702c  mov w2,#0x1
7102ab7030  bl 0x71025f4d80
7102ab7034  b 0x7102ab7180
7102ab7038  adrp x8,0x7104472000
7102ab703c  ldr s0,[x8, #0x440]
7102ab7040  fcmp s10,s0
7102ab7044  b.le 0x7102ab70d4
7102ab7048  ldr x8,[x22, #0x18]
7102ab704c  ldp x20,x21,[x8]
7102ab7050  cmp x20,x21
7102ab7054  b.eq 0x7102ab708c
7102ab7058  mov w23,#0x1
7102ab705c  mov x24,#-0x1
7102ab7060  ldr x8,[x20]
7102ab7064  ldr x9,[x8, #0x8]
7102ab7068  strb w23,[x8, #0x128]
7102ab706c  cbz x9,0x7102ab7080
7102ab7070  str x24,[x9, #0xd8]
7102ab7074  ldr x0,[x8, #0x8]
7102ab7078  mov w1,wzr
7102ab707c  bl 0x7100532bc0
7102ab7080  add x20,x20,#0x8
7102ab7084  cmp x21,x20
7102ab7088  b.ne 0x7102ab7060
7102ab708c  ldr x8,[x22, #0x20]
7102ab7090  ldp x20,x21,[x8]
7102ab7094  cmp x20,x21
7102ab7098  b.eq 0x7102ab7180
7102ab709c  mov w23,#0x1
7102ab70a0  mov x24,#-0x1
7102ab70a4  ldr x8,[x20]
7102ab70a8  ldr x9,[x8, #0x8]
7102ab70ac  strb w23,[x8, #0x128]
7102ab70b0  cbz x9,0x7102ab70c4
7102ab70b4  str x24,[x9, #0xd8]
7102ab70b8  ldr x0,[x8, #0x8]
7102ab70bc  mov w1,wzr
7102ab70c0  bl 0x7100532bc0
7102ab70c4  add x20,x20,#0x8
7102ab70c8  cmp x21,x20
7102ab70cc  b.ne 0x7102ab70a4
7102ab70d0  b 0x7102ab7180
7102ab70d4  ldr x8,[x22, #0x18]
7102ab70d8  ldp x20,x21,[x8]
7102ab70dc  cmp x20,x21
7102ab70e0  b.eq 0x7102ab7118
7102ab70e4  mov w23,#0x1
7102ab70e8  mov x24,#-0x1
7102ab70ec  ldr x8,[x20]
7102ab70f0  ldr x9,[x8, #0x8]
7102ab70f4  strb w23,[x8, #0x128]
7102ab70f8  cbz x9,0x7102ab710c
7102ab70fc  str x24,[x9, #0xd8]
7102ab7100  ldr x0,[x8, #0x8]
7102ab7104  mov w1,wzr
7102ab7108  bl 0x7100532bc0
7102ab710c  add x20,x20,#0x8
7102ab7110  cmp x21,x20
7102ab7114  b.ne 0x7102ab70ec
7102ab7118  ldr x8,[x22, #0x20]
7102ab711c  ldp x20,x21,[x8]
7102ab7120  adrp x8,0x7104473000
7102ab7124  ldr s0,[x8, #0xc8]
7102ab7128  fcmp s10,s0
7102ab712c  b.le 0x7102ab7144
7102ab7130  mov w2,#0x1
7102ab7134  mov x0,x20
7102ab7138  mov x1,x21
7102ab713c  bl 0x71025f4d80
7102ab7140  b 0x7102ab7180
7102ab7144  cmp x20,x21
7102ab7148  b.eq 0x7102ab7180
7102ab714c  mov w23,#0x1
7102ab7150  mov x24,#-0x1
7102ab7154  ldr x8,[x20]
7102ab7158  ldr x9,[x8, #0x8]
7102ab715c  strb w23,[x8, #0x128]
7102ab7160  cbz x9,0x7102ab7174
7102ab7164  str x24,[x9, #0xd8]
7102ab7168  ldr x0,[x8, #0x8]
7102ab716c  mov w1,wzr
7102ab7170  bl 0x7100532bc0
7102ab7174  add x20,x20,#0x8
7102ab7178  cmp x21,x20
7102ab717c  b.ne 0x7102ab7154
7102ab7180  ldr s0,[x22, #0x1c4]
7102ab7184  fcmp s0,s9
7102ab7188  b.le 0x7102ab71ec
7102ab718c  ldrb w8,[x22, #0x23a]
7102ab7190  cbz w8,0x7102ab720c
7102ab7194  ldrb w8,[x22, #0x239]
7102ab7198  cbz w8,0x7102ab71e4
7102ab719c  ldrsw x9,[x22, #0x23c]
7102ab71a0  cmp w9,#0x37
7102ab71a4  b.hi 0x7102ab71d8
7102ab71a8  adrp x8,0x71052b6000
7102ab71ac  ldr x8,[x8, #0xfd8]
7102ab71b0  ldr x8,[x8]
7102ab71b4  ldr x8,[x8, #0xc0]
7102ab71b8  add x9,x8,x9
7102ab71bc  ldrb w10,[x9, #0x464]
7102ab71c0  cbz w10,0x7102ab71d8
7102ab71c4  add x9,x9,#0x464
7102ab71c8  strb wzr,[x9]
7102ab71cc  ldr w9,[x8]
7102ab71d0  sub w9,w9,#0x1
7102ab71d4  str w9,[x8]
7102ab71d8  mov w8,#0xffffffff
7102ab71dc  str w8,[x22, #0x23c]
7102ab71e0  strb wzr,[x22, #0x239]
7102ab71e4  strb wzr,[x22, #0x23a]
7102ab71e8  b 0x7102ab720c
7102ab71ec  ldr x8,[x22, #0x8]
7102ab71f0  ldr s1,[x8, #0x308]
7102ab71f4  fcmp s0,s1
7102ab71f8  b.le 0x7102ab720c
7102ab71fc  ldrb w8,[x22, #0x23a]
7102ab7200  cbnz w8,0x7102ab720c
7102ab7204  add x0,x22,#0x230
7102ab7208  bl 0x710317dc90
7102ab720c  ldr s0,[x22, #0x1c4]
7102ab7210  fcmp s0,s9
7102ab7214  b.le 0x7102ab723c
7102ab7218  ldrb w8,[x22, #0x224]
7102ab721c  cbnz w8,0x7102ab7268
7102ab7220  ldr x8,[x22, #0x280]
7102ab7224  ldr x0,[x8, #0x308]
7102ab7228  add x1,x22,#0x214
7102ab722c  bl 0x71026249a0
7102ab7230  mov w8,#0x1
7102ab7234  strb w8,[x22, #0x224]
7102ab7238  b 0x7102ab7268
7102ab723c  ldr x8,[x22, #0x8]
7102ab7240  ldr w9,[x8, #0xb4]
7102ab7244  stur w9,[x29, #-0xc0]
7102ab7248  ldr w9,[x8, #0xb8]
7102ab724c  stur w9,[x29, #-0xbc]
7102ab7250  sub x1,x29,#0xc0
7102ab7254  ldp w9,w8,[x8, #0xbc]
7102ab7258  stp w9,w8,[x29, #-0xb8]
7102ab725c  ldr x8,[x22, #0x280]
7102ab7260  ldr x0,[x8, #0x308]
7102ab7264  bl 0x71026249a0
7102ab7268  ldr q0,[sp, #0x80]
7102ab726c  stur q0,[x29, #-0xc0]
7102ab7270  ldr q0,[sp, #0x70]
7102ab7274  stur q0,[x29, #-0xb0]
7102ab7278  ldr q0,[sp, #0x60]
7102ab727c  stur q0,[x29, #-0xa0]
7102ab7280  ldr q0,[sp, #0x50]
7102ab7284  mov x0,x22
7102ab7288  sub x1,x29,#0xc0
7102ab728c  stur q0,[x29, #-0x90]
7102ab7290  ldr x8,[x0, #0x30]!
7102ab7294  ldr x8,[x8, #0x10]
7102ab7298  blr x8
7102ab729c  movi d17,#0x0
7102ab72a0  ldur q0,[x29, #-0xa0]
7102ab72a4  mov v3.16B,v17.16B
7102ab72a8  ldp q1,q2,[x29, #-0xc0]
7102ab72ac  mov v3.S[0x0],v0.S[0x0]
7102ab72b0  zip1 v4.2S,v1.2S,v2.2S
7102ab72b4  mov v4.D[0x1],v3.D[0x0]
7102ab72b8  fmul v3.4S,v4.4S,v4.4S
7102ab72bc  ext v5.16B,v3.16B,v3.16B,0x8
7102ab72c0  fadd v3.2S,v5.2S,v3.2S
7102ab72c4  faddp v3.2S,v3.2S,v3.2S
7102ab72c8  mov v3.D[0x1],v3.D[0x0]
7102ab72cc  frsqrte v5.4S,v3.4S
7102ab72d0  fmul v6.4S,v5.4S,v3.4S
7102ab72d4  frsqrts v6.4S,v5.4S,v6.4S
7102ab72d8  fmul v5.4S,v5.4S,v6.4S
7102ab72dc  fmul v6.4S,v3.4S,v5.4S
7102ab72e0  fcmeq v3.4S,v3.4S,#0.0
7102ab72e4  mvn v3.16B,v3.16B
7102ab72e8  frsqrts v6.4S,v5.4S,v6.4S
7102ab72ec  fmul v5.4S,v5.4S,v6.4S
7102ab72f0  zip2 v6.2S,v1.2S,v2.2S
7102ab72f4  fmul v4.4S,v4.4S,v5.4S
7102ab72f8  mov v5.16B,v17.16B
7102ab72fc  mov v5.S[0x0],v0.S[0x1]
7102ab7300  ext v2.16B,v2.16B,v2.16B,0x8
7102ab7304  mov v6.D[0x1],v5.D[0x0]
7102ab7308  ext v1.16B,v1.16B,v1.16B,0x8
7102ab730c  fmul v5.4S,v6.4S,v6.4S
7102ab7310  ext v7.16B,v5.16B,v5.16B,0x8
7102ab7314  fadd v5.2S,v7.2S,v5.2S
7102ab7318  faddp v5.2S,v5.2S,v5.2S
7102ab731c  and v4.16B,v4.16B,v3.16B
7102ab7320  mov v5.D[0x1],v5.D[0x0]
7102ab7324  str q4,[sp, #0x20]
7102ab7328  frsqrte v7.4S,v5.4S
7102ab732c  fmul v16.4S,v7.4S,v5.4S
7102ab7330  frsqrts v16.4S,v7.4S,v16.4S
7102ab7334  fmul v7.4S,v7.4S,v16.4S
7102ab7338  fmul v16.4S,v5.4S,v7.4S
7102ab733c  fcmeq v5.4S,v5.4S,#0.0
7102ab7340  mvn v3.16B,v5.16B
7102ab7344  frsqrts v16.4S,v7.4S,v16.4S
7102ab7348  fmul v7.4S,v7.4S,v16.4S
7102ab734c  fmul v6.4S,v6.4S,v7.4S
7102ab7350  mov v7.16B,v17.16B
7102ab7354  mov v7.S[0x0],v0.S[0x2]
7102ab7358  zip1 v0.2S,v1.2S,v2.2S
7102ab735c  mov v0.D[0x1],v7.D[0x0]
7102ab7360  fmul v1.4S,v0.4S,v0.4S
7102ab7364  ext v2.16B,v1.16B,v1.16B,0x8
7102ab7368  fadd v1.2S,v2.2S,v1.2S
7102ab736c  faddp v1.2S,v1.2S,v1.2S
7102ab7370  mov v1.D[0x1],v1.D[0x0]
7102ab7374  frsqrte v2.4S,v1.4S
7102ab7378  fmul v7.4S,v2.4S,v1.4S
7102ab737c  frsqrts v7.4S,v2.4S,v7.4S
7102ab7380  fmul v2.4S,v2.4S,v7.4S
7102ab7384  ldur q7,[x29, #-0x90]
7102ab7388  str q7,[sp, #0x10]
7102ab738c  fmul v7.4S,v1.4S,v2.4S
7102ab7390  frsqrts v7.4S,v2.4S,v7.4S
7102ab7394  fmul v2.4S,v2.4S,v7.4S
7102ab7398  fmul v5.4S,v0.4S,v2.4S
7102ab739c  and v2.16B,v6.16B,v3.16B
7102ab73a0  fcmeq v0.4S,v1.4S,#0.0
7102ab73a4  fmul s1,s2,v2.S[0x0]
7102ab73a8  mvn v3.16B,v0.16B
7102ab73ac  fmul s0,s4,v4.S[0x0]
7102ab73b0  fadd s0,s0,s1
7102ab73b4  fsqrt s9,s0
7102ab73b8  fcmp s9,s9
7102ab73bc  b.vc 0x7102ab73d8
7102ab73c0  stp q2,q5,[sp, #0x30]
7102ab73c4  str q3,[sp]
7102ab73c8  bl 0x71039c0840
7102ab73cc  ldp q2,q5,[sp, #0x30]
7102ab73d0  ldr q3,[sp]
7102ab73d4  mov v9.16B,v0.16B
7102ab73d8  adrp x8,0x7104471000
7102ab73dc  ldr s0,[x8, #0xb98]
7102ab73e0  and v1.16B,v5.16B,v3.16B
7102ab73e4  str q1,[sp, #0x40]
7102ab73e8  fcmp s9,s0
7102ab73ec  b.le 0x7102ab743c
7102ab73f0  dup s0,v1.S[0x1]
7102ab73f4  dup s1,v1.S[0x2]
7102ab73f8  str q2,[sp, #0x30]
7102ab73fc  bl 0x71039c2660
7102ab7400  ldr q0,[sp, #0x40]
7102ab7404  fneg s0,s0
7102ab7408  mov v1.16B,v9.16B
7102ab740c  bl 0x71039c2660
7102ab7410  ldp q1,q0,[sp, #0x20]
7102ab7414  bl 0x71039c2660
7102ab7418  movi d16,#0x0
7102ab741c  mov v16.S[0x0],v0.S[0x0]
7102ab7420  ldrb w8,[x22, #0x225]
7102ab7424  cbz w8,0x7102ab7468
7102ab7428  adrp x8,0x71052a8000
7102ab742c  ldr x8,[x8, #0xa80]
7102ab7430  ldr q0,[x8]
7102ab7434  strb wzr,[x22, #0x225]
7102ab7438  b 0x7102ab7488
7102ab743c  dup s0,v2.S[0x2]
7102ab7440  fneg s0,s0
7102ab7444  dup s1,v2.S[0x1]
7102ab7448  bl 0x71039c2660
7102ab744c  ldr q0,[sp, #0x40]
7102ab7450  fneg s0,s0
7102ab7454  mov v1.16B,v9.16B
7102ab7458  bl 0x71039c2660
7102ab745c  movi d16,#0x0
7102ab7460  ldrb w8,[x22, #0x225]
7102ab7464  cbnz w8,0x7102ab7428
7102ab7468  ldr q3,[sp, #0x10]
7102ab746c  dup s1,v3.S[0x1]
7102ab7470  adrp x8,0x7104473000
7102ab7474  movi v0.2D,#0x0
7102ab7478  ldr s2,[x8, #0x58c]
7102ab747c  mov v0.S[0x0],v3.S[0x0]
7102ab7480  fadd s1,s1,s2
7102ab7484  mov v0.S[0x1],v1.S[0x0]
7102ab7488  ldr x9,[x22, #0x18]
7102ab748c  ldp x8,x9,[x9]
7102ab7490  cmp x8,x9
7102ab7494  b.eq 0x7102ab757c
7102ab7498  fmov s2,wzr
7102ab749c  dup s1,v0.S[0x1]
7102ab74a0  adrp x11,0x7104472000
7102ab74a4  ldr s3,[x11, #0x970]
7102ab74a8  fmov s4,0xbf800000
7102ab74ac  mov w10,#0x1
7102ab74b0  fabd s2,s2,s16
7102ab74b4  fmov s5,0x3f800000
7102ab74b8  ldr x11,[x8]
7102ab74bc  ldr x13,[x11, #0x8]
7102ab74c0  ldrb w14,[x13, #0xe7]
7102ab74c4  ldrb w13,[x13, #0xe8]
7102ab74c8  ldrb w12,[x11, #0x128]
7102ab74cc  cmp w12,#0x0
7102ab74d0  orr w13,w13,w14
7102ab74d4  and w12,w13,#0xff
7102ab74d8  ccmp w12,#0x0,#0x0,ne
7102ab74dc  b.eq 0x7102ab74e8
7102ab74e0  strb w10,[x11, #0x129]
7102ab74e4  b 0x7102ab750c
7102ab74e8  ldr q6,[x11, #0x10]
7102ab74ec  fabd s7,s6,s0
7102ab74f0  fcmp s7,s3
7102ab74f4  b.gt 0x7102ab7508
7102ab74f8  dup s6,v6.S[0x1]
7102ab74fc  fabd s6,s6,s1
7102ab7500  fcmp s6,s3
7102ab7504  b.le 0x7102ab7510
7102ab7508  strb w10,[x11, #0x12a]
7102ab750c  str q0,[x11, #0x10]
7102ab7510  fcmp s2,s3
7102ab7514  b.pl 0x7102ab7528
7102ab7518  ldr s6,[x11, #0x30]
7102ab751c  fabd s6,s6,s16
7102ab7520  fcmp s6,s3
7102ab7524  b.mi 0x7102ab7530
7102ab7528  str s16,[x11, #0x30]
7102ab752c  strb w10,[x11, #0x129]
7102ab7530  ldr q6,[x11, #0x50]
7102ab7534  fadd s7,s6,s4
7102ab7538  fabs s7,s7
7102ab753c  fcmp s7,s3
7102ab7540  b.mi 0x7102ab7550
7102ab7544  mov v6.S[0x0],v5.S[0x0]
7102ab7548  strb w10,[x11, #0x129]
7102ab754c  str q6,[x11, #0x50]
7102ab7550  dup s7,v6.S[0x1]
7102ab7554  fadd s7,s7,s4
7102ab7558  fabs s7,s7
7102ab755c  fcmp s7,s3
7102ab7560  b.mi 0x7102ab7570
7102ab7564  mov v6.S[0x1],v5.S[0x0]
7102ab7568  strb w10,[x11, #0x129]
7102ab756c  str q6,[x11, #0x50]
7102ab7570  add x8,x8,#0x8
7102ab7574  cmp x9,x8
7102ab7578  b.ne 0x7102ab74b8
7102ab757c  ldr x9,[x22, #0x20]
7102ab7580  ldp x8,x9,[x9]
7102ab7584  cmp x8,x9
7102ab7588  b.eq 0x7102ab7670
7102ab758c  fmov s2,wzr
7102ab7590  dup s1,v0.S[0x1]
7102ab7594  adrp x11,0x7104472000
7102ab7598  ldr s3,[x11, #0x970]
7102ab759c  fmov s4,0xbf800000
7102ab75a0  mov w10,#0x1
7102ab75a4  fabd s2,s2,s16
7102ab75a8  fmov s5,0x3f800000
7102ab75ac  ldr x11,[x8]
7102ab75b0  ldr x13,[x11, #0x8]
7102ab75b4  ldrb w14,[x13, #0xe7]
7102ab75b8  ldrb w13,[x13, #0xe8]
7102ab75bc  ldrb w12,[x11, #0x128]
7102ab75c0  cmp w12,#0x0
7102ab75c4  orr w13,w13,w14
7102ab75c8  and w12,w13,#0xff
7102ab75cc  ccmp w12,#0x0,#0x0,ne
7102ab75d0  b.eq 0x7102ab75dc
7102ab75d4  strb w10,[x11, #0x129]
7102ab75d8  b 0x7102ab7600
7102ab75dc  ldr q6,[x11, #0x10]
7102ab75e0  fabd s7,s6,s0
7102ab75e4  fcmp s7,s3
7102ab75e8  b.gt 0x7102ab75fc
7102ab75ec  dup s6,v6.S[0x1]
7102ab75f0  fabd s6,s6,s1
7102ab75f4  fcmp s6,s3
7102ab75f8  b.le 0x7102ab7604
7102ab75fc  strb w10,[x11, #0x12a]
7102ab7600  str q0,[x11, #0x10]
7102ab7604  fcmp s2,s3
7102ab7608  b.pl 0x7102ab761c
7102ab760c  ldr s6,[x11, #0x30]
7102ab7610  fabd s6,s6,s16
7102ab7614  fcmp s6,s3
7102ab7618  b.mi 0x7102ab7624
7102ab761c  str s16,[x11, #0x30]
7102ab7620  strb w10,[x11, #0x129]
7102ab7624  ldr q6,[x11, #0x50]
7102ab7628  fadd s7,s6,s4
7102ab762c  fabs s7,s7
7102ab7630  fcmp s7,s3
7102ab7634  b.mi 0x7102ab7644
7102ab7638  mov v6.S[0x0],v5.S[0x0]
7102ab763c  strb w10,[x11, #0x129]
7102ab7640  str q6,[x11, #0x50]
7102ab7644  dup s7,v6.S[0x1]
7102ab7648  fadd s7,s7,s4
7102ab764c  fabs s7,s7
7102ab7650  fcmp s7,s3
7102ab7654  b.mi 0x7102ab7664
7102ab7658  mov v6.S[0x1],v5.S[0x0]
7102ab765c  strb w10,[x11, #0x129]
7102ab7660  str q6,[x11, #0x50]
7102ab7664  add x8,x8,#0x8
7102ab7668  cmp x9,x8
7102ab766c  b.ne 0x7102ab75ac
7102ab7670  ldr q0,[sp, #0x80]
7102ab7674  stur q0,[x29, #-0xc0]
7102ab7678  ldr q0,[sp, #0x70]
7102ab767c  stur q0,[x29, #-0xb0]
7102ab7680  ldr q0,[sp, #0x60]
7102ab7684  stur q0,[x29, #-0xa0]
7102ab7688  ldr q0,[sp, #0x50]
7102ab768c  stur q0,[x29, #-0x90]
7102ab7690  ldr x8,[x22, #0x110]
7102ab7694  ldr x8,[x8, #0x10]
7102ab7698  add x0,x22,#0x110
7102ab769c  sub x1,x29,#0xc0
7102ab76a0  blr x8
7102ab76a4  ldp q0,q1,[x29, #-0xc0]
7102ab76a8  ldp q2,q3,[x29, #-0xa0]
7102ab76ac  ldr x8,[x22, #0x1d0]
7102ab76b0  stp q0,q1,[x8, #0x20]
7102ab76b4  mov v0.16B,v8.16B
7102ab76b8  stp q2,q3,[x8, #0x40]
7102ab76bc  ldr x8,[x22, #0x1d0]
7102ab76c0  ldr w9,[x22, #0x1c4]
7102ab76c4  str w9,[x8, #0x144]
7102ab76c8  ldr x0,[x22, #0x1d0]
7102ab76cc  bl 0x7102ac09e0
7102ab76d0  ldr x0,[x19, #0xa98]
7102ab76d4  mov v0.16B,v8.16B
7102ab76d8  bl 0x7102abbed0
7102ab76dc  ldr x8,[x19, #0xa98]
7102ab76e0  ldr x9,[x19, #0xaa8]
7102ab76e4  mov v0.16B,v8.16B
7102ab76e8  ldr x11,[x8, #0xa8]
7102ab76ec  ldr x10,[x8, #0xb8]
7102ab76f0  str x11,[x9, #0x18]
7102ab76f4  ldr x11,[x8, #0xb0]
7102ab76f8  ldr x12,[x8, #0xa0]
7102ab76fc  str x12,[x9, #0x10]
7102ab7700  stp x11,x10,[x9, #0x20]
7102ab7704  ldp x10,x11,[x8, #0xd0]
7102ab7708  ldp x12,x8,[x8, #0xc0]
7102ab770c  stp x12,x8,[x9, #0x30]
7102ab7710  stp x10,x11,[x9, #0x40]
7102ab7714  ldr x0,[x19, #0xaa8]
7102ab7718  bl 0x7102ab9360
7102ab771c  ldr x8,[x19, #0xa98]
7102ab7720  ldr x9,[x19, #0xaa0]
7102ab7724  mov v0.16B,v8.16B
7102ab7728  ldr x11,[x8, #0x68]
7102ab772c  ldr x10,[x8, #0x78]
7102ab7730  str x11,[x9, #0x48]
7102ab7734  ldr x11,[x8, #0x70]
7102ab7738  ldr x12,[x8, #0x60]
7102ab773c  str x12,[x9, #0x40]
7102ab7740  stp x11,x10,[x9, #0x50]
7102ab7744  ldp x10,x11,[x8, #0x90]
7102ab7748  ldp x12,x8,[x8, #0x80]
7102ab774c  stp x12,x8,[x9, #0x60]
7102ab7750  stp x10,x11,[x9, #0x70]
7102ab7754  ldr x0,[x19, #0xaa0]
7102ab7758  bl 0x7102abf340
7102ab775c  ldrb w8,[x19, #0xa5c]
7102ab7760  cmp w8,#0x5
7102ab7764  b.ne 0x7102ab780c
7102ab7768  ldr x10,[x19, #0xa98]
7102ab776c  ldrb w10,[x10, #0x2b0]
7102ab7770  cmp w10,#0x15
7102ab7774  mov w9,wzr
7102ab7778  mov w8,wzr
7102ab777c  cset w10,eq
7102ab7780  tbnz w10,#0x0,0x7102ab778c
7102ab7784  tbnz w9,#0x0,0x7102ab778c
7102ab7788  cbz w8,0x7102ab7794
7102ab778c  mov w8,#0x15
7102ab7790  strb w8,[x19, #0xa5c]
7102ab7794  ldr q0,[sp, #0x80]
7102ab7798  ldr x8,[x19, #0xa78]
7102ab779c  add x0,x8,#0x110
7102ab77a0  stur q0,[x29, #-0xc0]
7102ab77a4  ldr q0,[sp, #0x70]
7102ab77a8  stur q0,[x29, #-0xb0]
7102ab77ac  ldr q0,[sp, #0x60]
7102ab77b0  stur q0,[x29, #-0xa0]
7102ab77b4  ldr q0,[sp, #0x50]
7102ab77b8  stur q0,[x29, #-0x90]
7102ab77bc  ldr x8,[x8, #0x110]
7102ab77c0  ldr x8,[x8, #0x10]
7102ab77c4  sub x1,x29,#0xc0
7102ab77c8  blr x8
7102ab77cc  ldp q0,q1,[x29, #-0xc0]
7102ab77d0  ldp q2,q3,[x29, #-0xa0]
7102ab77d4  stp q0,q1,[x19, #0x380]
7102ab77d8  mov v0.16B,v8.16B
7102ab77dc  stp q2,q3,[x19, #0x3a0]
7102ab77e0  ldr d10,[sp, #0x130]
7102ab77e4  ldp d9,d8,[sp, #0x140]
7102ab77e8  mov x0,x19
7102ab77ec  ldp x29,x30,[sp, #0x1a0]
7102ab77f0  ldp x20,x19,[sp, #0x190]
7102ab77f4  ldp x22,x21,[sp, #0x180]
7102ab77f8  ldp x24,x23,[sp, #0x170]
7102ab77fc  ldp x26,x25,[sp, #0x160]
7102ab7800  ldp x28,x27,[sp, #0x150]
7102ab7804  add sp,sp,#0x1b0
7102ab7808  b 0x71025dd540
7102ab780c  cmp w8,#0x6
7102ab7810  b.ne 0x7102ab7834
7102ab7814  ldr x9,[x19, #0xaa8]
7102ab7818  ldrb w9,[x9, #0x60]
7102ab781c  cmp w9,#0x15
7102ab7820  mov w10,wzr
7102ab7824  mov w8,wzr
7102ab7828  cset w9,eq
7102ab782c  tbz w10,#0x0,0x7102ab7784
7102ab7830  b 0x7102ab778c
7102ab7834  cmp w8,#0x7
7102ab7838  b.ne 0x7102ab785c
7102ab783c  ldr x8,[x19, #0xaa0]
7102ab7840  ldrb w8,[x8, #0xc8]
7102ab7844  cmp w8,#0x15
7102ab7848  mov w9,wzr
7102ab784c  mov w10,wzr
7102ab7850  cset w8,eq
7102ab7854  tbz w10,#0x0,0x7102ab7784
7102ab7858  b 0x7102ab778c
7102ab785c  mov w9,wzr
7102ab7860  mov w10,wzr
7102ab7864  mov w8,wzr
7102ab7868  tbz w10,#0x0,0x7102ab7784
7102ab786c  b 0x7102ab778c
7102ab7870  mov x0,xzr
7102ab7874  ldr s0,[x20, #0x1e4]
7102ab7878  mov w1,#0x1
7102ab787c  bl 0x710260fdd0
7102ab7880  ldr x8,[x20, #0x8]
7102ab7884  cbz x8,0x7102ab78e4
7102ab7888  ldrb w9,[x8, #0xe0]
7102ab788c  cbz w9,0x7102ab789c
7102ab7890  ldr x9,[x8, #0xc8]
7102ab7894  cbz x9,0x7102ab789c
7102ab7898  strh wzr,[x9, #0x32]
7102ab789c  ldr x8,[x8, #0xd8]
7102ab78a0  cbz x8,0x7102ab78a8
7102ab78a4  strb wzr,[x8, #0x22]
7102ab78a8  ldr x8,[x23]
7102ab78ac  cbz x8,0x7102ab78e4
7102ab78b0  ldrb w9,[x8, #0xe0]
7102ab78b4  cbz w9,0x7102ab78c4
7102ab78b8  ldr x9,[x8, #0xc8]
7102ab78bc  cbz x9,0x7102ab78c4
7102ab78c0  strh wzr,[x9, #0x30]
7102ab78c4  ldr x9,[x8, #0xd8]
7102ab78c8  cbz x9,0x7102ab78d0
7102ab78cc  strb wzr,[x9, #0x21]
7102ab78d0  ldrb w9,[x8, #0xe0]
7102ab78d4  cbz w9,0x7102ab78e4
7102ab78d8  ldr x8,[x8, #0xb0]
7102ab78dc  mov w9,#0x1
7102ab78e0  strb w9,[x8, #0x10]
7102ab78e4  ldr x8,[x20, #0x10]
7102ab78e8  ldp x21,x22,[x8]
7102ab78ec  str x23,[sp, #0x70]
7102ab78f0  cmp x21,x22
7102ab78f4  b.eq 0x7102ab7930
7102ab78f8  mov w23,#0x1
7102ab78fc  mov x24,#-0x1
7102ab7900  ldr x8,[x21]
7102ab7904  ldr x9,[x8, #0x8]
7102ab7908  strb w23,[x8, #0x128]
7102ab790c  cbz x9,0x7102ab7920
7102ab7910  str x24,[x9, #0xd8]
7102ab7914  ldr x0,[x8, #0x8]
7102ab7918  mov w1,wzr
7102ab791c  bl 0x7100532bc0
7102ab7920  add x21,x21,#0x8
7102ab7924  cmp x22,x21
7102ab7928  b.ne 0x7102ab7900
7102ab792c  ldr x8,[x20, #0x10]
7102ab7930  ldp x22,x24,[x8, #0x18]
7102ab7934  cmp x22,x24
7102ab7938  b.eq 0x7102ab7a18
7102ab793c  ldrb w27,[x20, #0x1a1]
7102ab7940  add x8,x20,#0x1a1
7102ab7944  str x8,[sp, #0x80]
7102ab7948  mov w25,#0x9dc5
7102ab794c  movk w25,#0x811c, LSL #16
7102ab7950  add x28,x20,#0x1a2
7102ab7954  mov w26,#0x89
7102ab7958  mov x23,x22
7102ab795c  ldr x21,[x23]
7102ab7960  ldr w8,[x21, #0x18]
7102ab7964  mov w9,w25
7102ab7968  cbz w27,0x7102ab798c
7102ab796c  mov x10,x28
7102ab7970  mov w11,w27
7102ab7974  mov w9,w25
7102ab7978  mul w9,w9,w26
7102ab797c  and w11,w11,#0xff
7102ab7980  eor w9,w9,w11
7102ab7984  ldrb w11,[x10], #0x1
7102ab7988  cbnz w11,0x7102ab7978
7102ab798c  cmp w8,w9
7102ab7990  b.ne 0x7102ab79a4
7102ab7994  ldr x1,[sp, #0x80]
7102ab7998  add x0,x21,#0x20
7102ab799c  bl 0x71039c0060
7102ab79a0  cbz w0,0x7102ab7bb0
7102ab79a4  add x23,x23,#0x8
7102ab79a8  cmp x23,x24
7102ab79ac  b.ne 0x7102ab795c
7102ab79b0  cmp x22,x24
7102ab79b4  b.eq 0x7102ab7a18
7102ab79b8  ldrb w27,[x20, #0x1c1]
7102ab79bc  add x21,x20,#0x1c1
7102ab79c0  add x28,x20,#0x1c2
7102ab79c4  ldr x23,[x22]
7102ab79c8  ldr w8,[x23, #0x18]
7102ab79cc  mov w9,w25
7102ab79d0  cbz w27,0x7102ab79f4
7102ab79d4  mov x10,x28
7102ab79d8  mov w11,w27
7102ab79dc  mov w9,w25
7102ab79e0  mul w9,w9,w26
7102ab79e4  and w11,w11,#0xff
7102ab79e8  eor w9,w9,w11
7102ab79ec  ldrb w11,[x10], #0x1
7102ab79f0  cbnz w11,0x7102ab79e0
7102ab79f4  cmp w8,w9
7102ab79f8  b.ne 0x7102ab7a0c
7102ab79fc  add x0,x23,#0x20
7102ab7a00  mov x1,x21
7102ab7a04  bl 0x71039c0060
7102ab7a08  cbz w0,0x7102ab7d58
7102ab7a0c  add x22,x22,#0x8
7102ab7a10  cmp x22,x24
7102ab7a14  b.ne 0x7102ab79c4
7102ab7a18  ldr x22,[sp, #0x70]
7102ab7a1c  mov w8,#0x1
7102ab7a20  mov w9,#0x2
7102ab7a24  strb w8,[x20, #0x1f5]
7102ab7a28  strb w9,[x20, #0x1e1]
7102ab7a2c  ldr x9,[x22]
7102ab7a30  cbnz x9,0x7102ab6854
7102ab7a34  b 0x7102ab6864
7102ab7a38  mov x0,xzr
7102ab7a3c  ldr s0,[x20, #0x1e4]
7102ab7a40  mov w1,#0x1
7102ab7a44  bl 0x710260fdd0
7102ab7a48  ldr x8,[x20, #0x8]
7102ab7a4c  cbz x8,0x7102ab7aac
7102ab7a50  ldrb w9,[x8, #0xe0]
7102ab7a54  cbz w9,0x7102ab7a64
7102ab7a58  ldr x9,[x8, #0xc8]
7102ab7a5c  cbz x9,0x7102ab7a64
7102ab7a60  strh wzr,[x9, #0x32]
7102ab7a64  ldr x8,[x8, #0xd8]
7102ab7a68  cbz x8,0x7102ab7a70
7102ab7a6c  strb wzr,[x8, #0x22]
7102ab7a70  ldr x8,[x22]
7102ab7a74  cbz x8,0x7102ab7aac
7102ab7a78  ldrb w9,[x8, #0xe0]
7102ab7a7c  cbz w9,0x7102ab7a8c
7102ab7a80  ldr x9,[x8, #0xc8]
7102ab7a84  cbz x9,0x7102ab7a8c
7102ab7a88  strh wzr,[x9, #0x30]
7102ab7a8c  ldr x9,[x8, #0xd8]
7102ab7a90  cbz x9,0x7102ab7a98
7102ab7a94  strb wzr,[x9, #0x21]
7102ab7a98  ldrb w9,[x8, #0xe0]
7102ab7a9c  cbz w9,0x7102ab7aac
7102ab7aa0  ldr x8,[x8, #0xb0]
7102ab7aa4  mov w9,#0x1
7102ab7aa8  strb w9,[x8, #0x10]
7102ab7aac  mov w8,#0x100
7102ab7ab0  mov w9,#0x2
7102ab7ab4  strh w8,[x20, #0x1f4]
7102ab7ab8  strb w9,[x20, #0x240]
7102ab7abc  mov w8,#0x1
7102ab7ac0  strb wzr,[x20, #0x280]
7102ab7ac4  ldr x9,[x22]
7102ab7ac8  cbnz x9,0x7102ab6854
7102ab7acc  b 0x7102ab6864
7102ab7ad0  mov w2,#0x1
7102ab7ad4  mov x0,x21
7102ab7ad8  mov x1,x22
7102ab7adc  b 0x7102ab5c6c
7102ab7ae0  ldr w8,[x19, #0x748]
7102ab7ae4  ldr w9,[x19, #0x74c]
7102ab7ae8  scvtf s1,w8
7102ab7aec  sub w8,w9,w8
7102ab7af0  scvtf s2,w8
7102ab7af4  ldr x8,[x19, #0x340]
7102ab7af8  ldp w9,w10,[x8]
7102ab7afc  str w10,[x8]
7102ab7b00  ldp w10,w11,[x8, #0x8]
7102ab7b04  eor w9,w9,w9, LSL #0xb
7102ab7b08  eor w9,w9,w9, LSR #0x8
7102ab7b0c  eor w9,w9,w11
7102ab7b10  eor w9,w9,w11, LSR #0x13
7102ab7b14  ucvtf s3,w9
7102ab7b18  fmul s0,s3,s0
7102ab7b1c  fmul s3,s0,s2
7102ab7b20  fadd s0,s3,s1
7102ab7b24  stp w10,w11,[x8, #0x4]
7102ab7b28  str w9,[x8, #0xc]
7102ab7b2c  ldr x8,[x19, #0x318]
7102ab7b30  str s0,[x19, #0xa58]
7102ab7b34  ldr x0,[x8, #0x10]
7102ab7b38  adrp x1,0x71042c2000
7102ab7b3c  add x1,x1,#0xe0b
7102ab7b40  bl 0x71025f7350
7102ab7b44  ldr x0,[x19, #0x318]
7102ab7b48  adrp x1,0x71042e5000
7102ab7b4c  add x1,x1,#0x263
7102ab7b50  mov w2,#0x1
7102ab7b54  mov w20,#0x1
7102ab7b58  bl 0x7102633a10
7102ab7b5c  ldr x0,[x19, #0x318]
7102ab7b60  adrp x1,0x7104441000
7102ab7b64  add x1,x1,#0xb63
7102ab7b68  mov w2,#0x1
7102ab7b6c  bl 0x7102633b90
7102ab7b70  orr w8,wzr,#0x3
7102ab7b74  strb w8,[x19, #0xa48]
7102ab7b78  mov w8,#0x100
7102ab7b7c  strh w8,[x19, #0xab2]
7102ab7b80  strb w20,[x19, #0xab4]
7102ab7b84  b 0x7102ab59f4
7102ab7b88  cbz x21,0x7102ab66d4
7102ab7b8c  ldr x8,[x21, #0x8]
7102ab7b90  ldr x8,[x8, #0x108]
7102ab7b94  cbz x8,0x7102ab66d4
7102ab7b98  strb wzr,[x8, #0x44]
7102ab7b9c  ldr x8,[x20, #0x10]
7102ab7ba0  ldp x22,x23,[x8, #0x18]
7102ab7ba4  cmp x22,x23
7102ab7ba8  b.ne 0x7102ab66dc
7102ab7bac  b 0x7102ab673c
7102ab7bb0  cbz x21,0x7102ab79b0
7102ab7bb4  ldr x8,[x21, #0x8]
7102ab7bb8  ldr x8,[x8, #0x108]
7102ab7bbc  cbz x8,0x7102ab79b0
7102ab7bc0  mov w9,#0x1
7102ab7bc4  strb w9,[x8, #0x44]
7102ab7bc8  ldr x8,[x20, #0x10]
7102ab7bcc  ldp x22,x24,[x8, #0x18]
7102ab7bd0  cmp x22,x24
7102ab7bd4  b.ne 0x7102ab79b8
7102ab7bd8  b 0x7102ab7a18
7102ab7bdc  mov w8,#0x4
7102ab7be0  strb w8,[x19, #0xa54]
7102ab7be4  add x0,x19,#0x1a8
7102ab7be8  ldp x8,x9,[x19, #0x1a8]
7102ab7bec  cmp x9,x8
7102ab7bf0  str wzr,[x19, #0xa4c]
7102ab7bf4  b.eq 0x7102ab7e38
7102ab7bf8  ldr x11,[x8]
7102ab7bfc  ldp x10,x11,[x11, #0x20]
7102ab7c00  sub x11,x11,x10
7102ab7c04  lsr x11,x11,#0x3
7102ab7c08  cbz w11,0x7102ab7c78
7102ab7c0c  ldr x10,[x10, #0x8]
7102ab7c10  ldrb w11,[x10, #0x20]
7102ab7c14  cbz w11,0x7102ab7c78
7102ab7c18  ldp x11,x8,[x10, #0x8]
7102ab7c1c  ldr x9,[x10]
7102ab7c20  strb wzr,[x10, #0x20]
7102ab7c24  str x9,[x11]
7102ab7c28  str x11,[x9, #0x8]
7102ab7c2c  ldr x9,[x8, #0x18]
7102ab7c30  sub x9,x9,#0x1
7102ab7c34  str x9,[x8, #0x18]
7102ab7c38  stp xzr,xzr,[x10]
7102ab7c3c  ldr x11,[x8, #0x40]
7102ab7c40  add x9,x8,#0x38
7102ab7c44  stp x9,x11,[x10]
7102ab7c48  str x10,[x8, #0x40]
7102ab7c4c  str x10,[x11]
7102ab7c50  ldr x9,[x8, #0x30]
7102ab7c54  add x9,x9,#0x1
7102ab7c58  str x9,[x8, #0x30]
7102ab7c5c  ldr x9,[x10, #0x18]
7102ab7c60  cbz x9,0x7102ab7c68
7102ab7c64  ldr w9,[x9, #0x110]
7102ab7c68  ldr w10,[x8, #0x48]
7102ab7c6c  sub w9,w10,w9
7102ab7c70  str w9,[x8, #0x48]
7102ab7c74  ldp x8,x9,[x19, #0x1a8]
7102ab7c78  cmp x9,x8
7102ab7c7c  b.eq 0x7102ab7e38
7102ab7c80  ldr x9,[x8]
7102ab7c84  ldp x8,x9,[x9, #0x20]
7102ab7c88  sub x9,x9,x8
7102ab7c8c  lsr x9,x9,#0x3
7102ab7c90  cbz w9,0x7102ab7cfc
7102ab7c94  ldr x9,[x8, #0x10]
7102ab7c98  ldrb w8,[x9, #0x20]
7102ab7c9c  cbz w8,0x7102ab7cfc
7102ab7ca0  ldp x11,x8,[x9, #0x8]
7102ab7ca4  ldr x10,[x9]
7102ab7ca8  strb wzr,[x9, #0x20]
7102ab7cac  str x10,[x11]
7102ab7cb0  str x11,[x10, #0x8]
7102ab7cb4  ldr x10,[x8, #0x18]
7102ab7cb8  sub x10,x10,#0x1
7102ab7cbc  str x10,[x8, #0x18]
7102ab7cc0  stp xzr,xzr,[x9]
7102ab7cc4  ldr x11,[x8, #0x40]
7102ab7cc8  add x10,x8,#0x38
7102ab7ccc  stp x10,x11,[x9]
7102ab7cd0  str x9,[x8, #0x40]
7102ab7cd4  str x9,[x11]
7102ab7cd8  ldr x10,[x8, #0x30]
7102ab7cdc  add x10,x10,#0x1
7102ab7ce0  str x10,[x8, #0x30]
7102ab7ce4  ldr x9,[x9, #0x18]
7102ab7ce8  cbz x9,0x7102ab7cf0
7102ab7cec  ldr w9,[x9, #0x110]
7102ab7cf0  ldr w10,[x8, #0x48]
7102ab7cf4  sub w9,w10,w9
7102ab7cf8  str w9,[x8, #0x48]
7102ab7cfc  ldr x8,[x19, #0x318]
7102ab7d00  ldr x0,[x8, #0x10]
7102ab7d04  adrp x1,0x710428f000
7102ab7d08  add x1,x1,#0x86d
7102ab7d0c  bl 0x71025f7350
7102ab7d10  ldr x0,[x19, #0x318]
7102ab7d14  adrp x1,0x71043bc000
7102ab7d18  add x1,x1,#0x6f1
7102ab7d1c  mov w2,#0x1
7102ab7d20  bl 0x7102633a10
7102ab7d24  ldr x0,[x19, #0x318]
7102ab7d28  adrp x1,0x710426d000
7102ab7d2c  add x1,x1,#0xfc7
7102ab7d30  mov w2,#0x1
7102ab7d34  bl 0x7102633b90
7102ab7d38  mov w8,#0x4
7102ab7d3c  b 0x7102ab59f0
7102ab7d40  cbz x28,0x7102ab673c
7102ab7d44  ldr x8,[x28, #0x8]
7102ab7d48  ldr x8,[x8, #0x108]
7102ab7d4c  cbz x8,0x7102ab673c
7102ab7d50  strb wzr,[x8, #0x44]
7102ab7d54  b 0x7102ab673c
7102ab7d58  cbz x23,0x7102ab7a18
7102ab7d5c  ldr x8,[x23, #0x8]
7102ab7d60  ldr x8,[x8, #0x108]
7102ab7d64  cbz x8,0x7102ab7a18
7102ab7d68  mov w9,#0x1
7102ab7d6c  strb w9,[x8, #0x44]
7102ab7d70  b 0x7102ab7a18
7102ab7d74  ldr x8,[x19, #0xaa0]
7102ab7d78  orr w9,wzr,#0x7
7102ab7d7c  strb w9,[x8, #0xc8]
7102ab7d80  b 0x7102ab7d90
7102ab7d84  ldr x8,[x19, #0xaa8]
7102ab7d88  orr w9,wzr,#0x6
7102ab7d8c  strb w9,[x8, #0x60]
7102ab7d90  ldr w8,[x19, #0x748]
7102ab7d94  ldr w9,[x19, #0x74c]
7102ab7d98  scvtf s0,w8
7102ab7d9c  sub w8,w9,w8
7102ab7da0  scvtf s1,w8
7102ab7da4  ldr x8,[x19, #0x340]
7102ab7da8  ldp w9,w10,[x8]
7102ab7dac  str w10,[x8]
7102ab7db0  ldp w10,w11,[x8, #0x8]
7102ab7db4  eor w9,w9,w9, LSL #0xb
7102ab7db8  eor w9,w9,w9, LSR #0x8
7102ab7dbc  eor w9,w9,w11
7102ab7dc0  eor w9,w9,w11, LSR #0x13
7102ab7dc4  ucvtf s2,w9
7102ab7dc8  stp w10,w11,[x8, #0x4]
7102ab7dcc  str w9,[x8, #0xc]
7102ab7dd0  adrp x8,0x7104473000
7102ab7dd4  ldr s3,[x8, #0x710]
7102ab7dd8  ldr x8,[x19, #0xa70]
7102ab7ddc  fmul s2,s2,s3
7102ab7de0  fmul s1,s2,s1
7102ab7de4  fadd s0,s1,s0
7102ab7de8  str s0,[x19, #0xa58]
7102ab7dec  ldr x8,[x8, #0x8]
7102ab7df0  str wzr,[x8, #0x10]
7102ab7df4  ldr x8,[x19, #0xa70]
7102ab7df8  ldr x8,[x8, #0x8]
7102ab7dfc  mov w9,#0x1
7102ab7e00  str w9,[x8, #0x14]
7102ab7e04  ldr x8,[x19, #0xa70]
7102ab7e08  adrp x9,0x7104469000
7102ab7e0c  ldr q0,[x9, #0x80]
7102ab7e10  mov x9,#0xc1c80000
7102ab7e14  movk x9,#0x41c8, LSL #48
7102ab7e18  ldr x8,[x8, #0x8]
7102ab7e1c  str q0,[x8, #0x30]
7102ab7e20  ldr x8,[x19, #0xa70]
7102ab7e24  ldr x8,[x8, #0x8]
7102ab7e28  stur x9,[x8, #0xac]
7102ab7e2c  mov w9,#0x42480000
7102ab7e30  stur x9,[x8, #0xb4]
7102ab7e34  b 0x7102ab59f4
7102ab7e38  bl 0x71039c1330
