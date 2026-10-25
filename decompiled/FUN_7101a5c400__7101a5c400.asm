// addr:      7101a5c400
// offset:    0x1a5c400
// name:      FUN_7101a5c400
// mangled:   
// size:      9376

7101a5c400  str d12,[sp, #-0x90]!
7101a5c404  stp d11,d10,[sp, #0x10]
7101a5c408  stp d9,d8,[sp, #0x20]
7101a5c40c  stp x28,x27,[sp, #0x30]
7101a5c410  stp x26,x25,[sp, #0x40]
7101a5c414  stp x24,x23,[sp, #0x50]
7101a5c418  stp x22,x21,[sp, #0x60]
7101a5c41c  stp x20,x19,[sp, #0x70]
7101a5c420  stp x29,x30,[sp, #0x80]
7101a5c424  add x29,sp,#0x80
7101a5c428  sub sp,sp,#0x220
7101a5c42c  mov x23,x1
7101a5c430  mov x21,x0
7101a5c434  mov w1,#0x500
7101a5c438  mov w0,#0x10
7101a5c43c  mov x20,x3
7101a5c440  mov x28,x2
7101a5c444  bl 0x710392e290
7101a5c448  mov x19,x0
7101a5c44c  cbnz x0,0x7101a5c498
7101a5c450  adrp x8,0x7105332000
7101a5c454  ldr x0,[x8, #0xf00]
7101a5c458  cbz x0,0x7101a5c494
7101a5c45c  mov w8,#0x500
7101a5c460  stur wzr,[x29, #-0xd0]
7101a5c464  sub x1,x29,#0xd0
7101a5c468  str x8,[sp, #0xa0]
7101a5c46c  ldr x8,[x0]
7101a5c470  ldr x8,[x8, #0x30]
7101a5c474  add x2,sp,#0xa0
7101a5c478  blr x8
7101a5c47c  tbz w0,#0x0,0x7101a5c494
7101a5c480  mov w1,#0x500
7101a5c484  mov w0,#0x10
7101a5c488  bl 0x710392e290
7101a5c48c  mov x19,x0
7101a5c490  cbnz x0,0x7101a5c498
7101a5c494  mov x19,xzr
7101a5c498  mov x8,#0xff0000000000
7101a5c49c  movk x8,#0xc1ff, LSL #48
7101a5c4a0  add x0,x19,#0x28
7101a5c4a4  stur x21,[x29, #-0x78]
7101a5c4a8  stp x23,xzr,[x19]
7101a5c4ac  str wzr,[x19, #0x10]
7101a5c4b0  str x8,[x19, #0x18]
7101a5c4b4  strh wzr,[x19, #0x20]
7101a5c4b8  bl 0x7103776290
7101a5c4bc  add x0,x19,#0x38
7101a5c4c0  bl 0x7103776290
7101a5c4c4  adrp x21,0x710523d000
7101a5c4c8  add x21,x21,#0x9a8
7101a5c4cc  mov w0,#0x10
7101a5c4d0  mov w1,#0x20
7101a5c4d4  str x21,[x19, #0x48]
7101a5c4d8  bl 0x710392e290
7101a5c4dc  cbnz x0,0x7101a5c524
7101a5c4e0  adrp x8,0x7105332000
7101a5c4e4  ldr x0,[x8, #0xf00]
7101a5c4e8  cbz x0,0x7101a5c520
7101a5c4ec  mov w8,#0x20
7101a5c4f0  stur wzr,[x29, #-0xd0]
7101a5c4f4  sub x1,x29,#0xd0
7101a5c4f8  str x8,[sp, #0xa0]
7101a5c4fc  ldr x8,[x0]
7101a5c500  ldr x8,[x8, #0x30]
7101a5c504  add x2,sp,#0xa0
7101a5c508  blr x8
7101a5c50c  tbz w0,#0x0,0x7101a5c520
7101a5c510  mov w0,#0x10
7101a5c514  mov w1,#0x20
7101a5c518  bl 0x710392e290
7101a5c51c  cbnz x0,0x7101a5c524
7101a5c520  mov x0,xzr
7101a5c524  mov x23,#0x753f
7101a5c528  movk x23,#0x95d0, LSL #16
7101a5c52c  orr w22,wzr,#0xff
7101a5c530  stp xzr,xzr,[x0, #0x10]
7101a5c534  mov w8,#0x1
7101a5c538  stp xzr,xzr,[x0]
7101a5c53c  mov w2,#0x420
7101a5c540  stp x0,xzr,[x19, #0x50]
7101a5c544  add x0,x19,#0xa8
7101a5c548  mov w1,wzr
7101a5c54c  movk x23,#0xb, LSL #32
7101a5c550  add x24,x19,#0xe0
7101a5c554  stp xzr,xzr,[x19, #0x70]
7101a5c558  strb w22,[x19, #0x80]
7101a5c55c  stur xzr,[x19, #0x84]
7101a5c560  str w8,[x19, #0xa4]
7101a5c564  strh wzr,[x19, #0x8c]
7101a5c568  stp xzr,xzr,[x19, #0x60]
7101a5c56c  str x0,[sp, #0x50]
7101a5c570  bl 0x71039c02a0
7101a5c574  mov x0,x24
7101a5c578  bl 0x71017abd00
7101a5c57c  mov w27,#0xffffffff
7101a5c580  mov x24,#-0x1
7101a5c584  add x8,x19,#0x29c
7101a5c588  str xzr,[x19, #0x288]
7101a5c58c  str x27,[x19, #0x280]
7101a5c590  str x24,[x19, #0x290]
7101a5c594  strh wzr,[x19, #0x298]
7101a5c598  orr w9,wzr,#0xffff
7101a5c59c  add x0,x19,#0x308
7101a5c5a0  str x24,[x8]
7101a5c5a4  orr x8,xzr,#0x3f8000003f800000
7101a5c5a8  strh w9,[x19, #0x2a4]
7101a5c5ac  str xzr,[x19, #0x2a8]
7101a5c5b0  strh wzr,[x19, #0x2b0]
7101a5c5b4  str w27,[x19, #0x2e0]
7101a5c5b8  strb wzr,[x19, #0x2e4]
7101a5c5bc  str wzr,[x19, #0x2e8]
7101a5c5c0  strb wzr,[x19, #0x2ec]
7101a5c5c4  str x8,[x19, #0x2f0]
7101a5c5c8  str x8,[x19, #0x2f8]
7101a5c5cc  strh wzr,[x19, #0x300]
7101a5c5d0  bl 0x71017abd00
7101a5c5d4  strb w22,[x19, #0x4b8]
7101a5c5d8  ldr x8,[x19, #0x78]
7101a5c5dc  ldr x22,[x19, #0x68]
7101a5c5e0  sub x8,x8,x22
7101a5c5e4  asr x8,x8,#0x4
7101a5c5e8  cmp x8,#0x7
7101a5c5ec  strb wzr,[x19, #0x4a8]
7101a5c5f0  str x23,[x19, #0x4b0]
7101a5c5f4  str wzr,[x19, #0x4c0]
7101a5c5f8  strh wzr,[x19, #0x4c4]
7101a5c5fc  str xzr,[x19, #0x4d0]
7101a5c600  str xzr,[x19, #0x4c8]
7101a5c604  str x24,[x19, #0x4d8]
7101a5c608  str wzr,[x19, #0x4e0]
7101a5c60c  strh wzr,[x19, #0x4f8]
7101a5c610  str xzr,[x19, #0x4f0]
7101a5c614  str xzr,[x19, #0x4e8]
7101a5c618  b.hi 0x7101a5c70c
7101a5c61c  ldr x24,[x19, #0x70]
7101a5c620  sub x8,x24,x22
7101a5c624  mov w0,#0x10
7101a5c628  mov w1,#0x80
7101a5c62c  asr x23,x8,#0x4
7101a5c630  bl 0x710392e290
7101a5c634  cbnz x0,0x7101a5c67c
7101a5c638  adrp x8,0x7105332000
7101a5c63c  ldr x0,[x8, #0xf00]
7101a5c640  cbz x0,0x7101a5c678
7101a5c644  mov w8,#0x80
7101a5c648  stur wzr,[x29, #-0xd0]
7101a5c64c  sub x1,x29,#0xd0
7101a5c650  str x8,[sp, #0xa0]
7101a5c654  ldr x8,[x0]
7101a5c658  ldr x8,[x8, #0x30]
7101a5c65c  add x2,sp,#0xa0
7101a5c660  blr x8
7101a5c664  tbz w0,#0x0,0x7101a5c678
7101a5c668  mov w0,#0x10
7101a5c66c  mov w1,#0x80
7101a5c670  bl 0x710392e290
7101a5c674  cbnz x0,0x7101a5c67c
7101a5c678  mov x0,xzr
7101a5c67c  add x23,x0,x23, LSL #0x4
7101a5c680  add x25,x0,#0x80
7101a5c684  cmp x24,x22
7101a5c688  b.eq 0x7101a5c918
7101a5c68c  mov x26,xzr
7101a5c690  sub x22,x22,x24
7101a5c694  add x8,x23,x26
7101a5c698  cmp x24,x23
7101a5c69c  stp x21,xzr,[x8, #-0x10]
7101a5c6a0  b.eq 0x7101a5c6c0
7101a5c6a4  add x9,x24,x26
7101a5c6a8  ldur x10,[x9, #-0x8]
7101a5c6ac  stur xzr,[x9, #-0x8]
7101a5c6b0  ldur x0,[x8, #-0x8]
7101a5c6b4  stur x10,[x8, #-0x8]
7101a5c6b8  cbz x0,0x7101a5c6c0
7101a5c6bc  bl 0x710392eb40
7101a5c6c0  sub x26,x26,#0x10
7101a5c6c4  cmp x22,x26
7101a5c6c8  b.ne 0x7101a5c694
7101a5c6cc  ldp x24,x22,[x19, #0x68]
7101a5c6d0  add x8,x23,x26
7101a5c6d4  stp x8,x23,[x19, #0x68]
7101a5c6d8  str x25,[x19, #0x78]
7101a5c6dc  cmp x22,x24
7101a5c6e0  b.eq 0x7101a5c700
7101a5c6e4  str x21,[x22, #-0x10]!
7101a5c6e8  ldr x0,[x22, #0x8]
7101a5c6ec  str xzr,[x22, #0x8]
7101a5c6f0  cbz x0,0x7101a5c6f8
7101a5c6f4  bl 0x710392eb40
7101a5c6f8  cmp x24,x22
7101a5c6fc  b.ne 0x7101a5c6e4
7101a5c700  cbz x24,0x7101a5c70c
7101a5c704  mov x0,x24
7101a5c708  bl 0x710392eb40
7101a5c70c  ldr x8,[x19, #0xb8]
7101a5c710  ldr x22,[x19, #0xa8]
7101a5c714  sub x8,x8,x22
7101a5c718  mov x9,#0xefbf
7101a5c71c  movk x9,#0xbefb, LSL #16
7101a5c720  movk x9,#0xfbef, LSL #32
7101a5c724  movk x9,#0xefbe, LSL #48
7101a5c728  asr x8,x8,#0x4
7101a5c72c  mul x8,x8,x9
7101a5c730  cmp x8,#0x1f
7101a5c734  b.hi 0x7101a5c940
7101a5c738  ldr x24,[x19, #0xb0]
7101a5c73c  sub x8,x24,x22
7101a5c740  asr x8,x8,#0x4
7101a5c744  mov w0,#0x10
7101a5c748  orr w1,wzr,#0x7e00
7101a5c74c  mul x26,x8,x9
7101a5c750  bl 0x710392e290
7101a5c754  mov x25,x0
7101a5c758  cbnz x0,0x7101a5c7a4
7101a5c75c  adrp x8,0x7105332000
7101a5c760  ldr x0,[x8, #0xf00]
7101a5c764  cbz x0,0x7101a5c7a0
7101a5c768  orr w8,wzr,#0x7e00
7101a5c76c  stur wzr,[x29, #-0xd0]
7101a5c770  sub x1,x29,#0xd0
7101a5c774  str x8,[sp, #0xa0]
7101a5c778  ldr x8,[x0]
7101a5c77c  ldr x8,[x8, #0x30]
7101a5c780  add x2,sp,#0xa0
7101a5c784  blr x8
7101a5c788  tbz w0,#0x0,0x7101a5c7a0
7101a5c78c  mov w0,#0x10
7101a5c790  orr w1,wzr,#0x7e00
7101a5c794  bl 0x710392e290
7101a5c798  mov x25,x0
7101a5c79c  cbnz x0,0x7101a5c7a4
7101a5c7a0  mov x25,xzr
7101a5c7a4  orr w8,wzr,#0x3f0
7101a5c7a8  madd x9,x26,x8,x25
7101a5c7ac  orr w8,wzr,#0x7e00
7101a5c7b0  add x10,x25,x8
7101a5c7b4  cmp x24,x22
7101a5c7b8  b.eq 0x7101a5c928
7101a5c7bc  orr w8,wzr,#0x3f0
7101a5c7c0  sub x23,x22,x24
7101a5c7c4  mov x27,xzr
7101a5c7c8  madd x22,x26,x8,x25
7101a5c7cc  stp x10,x9,[sp, #0x30]
7101a5c7d0  stp x26,x28,[sp, #0x40]
7101a5c7d4  add x26,x24,x27
7101a5c7d8  sub x9,x26,#0x3f0
7101a5c7dc  ldr w9,[x9]
7101a5c7e0  add x28,x22,x27
7101a5c7e4  sub x8,x28,#0x3f0
7101a5c7e8  sub x0,x28,#0x3e8
7101a5c7ec  sub x1,x26,#0x3e8
7101a5c7f0  str w9,[x8]
7101a5c7f4  bl 0x71015547e0
7101a5c7f8  sub x12,x26,#0x230
7101a5c7fc  sub x9,x26,#0x248
7101a5c800  sub x10,x26,#0x240
7101a5c804  sub x11,x26,#0x238
7101a5c808  ldrh w12,[x12]
7101a5c80c  ldr x9,[x9]
7101a5c810  ldr x10,[x10]
7101a5c814  ldr x11,[x11]
7101a5c818  sub x13,x28,#0x230
7101a5c81c  sub x8,x28,#0x248
7101a5c820  str x9,[x8]
7101a5c824  strh w12,[x13]
7101a5c828  sub x12,x28,#0x238
7101a5c82c  sub x13,x28,#0x240
7101a5c830  str x11,[x12]
7101a5c834  sub x12,x26,#0x22c
7101a5c838  str x10,[x13]
7101a5c83c  sub x10,x26,#0x224
7101a5c840  ldrh w9,[x10]
7101a5c844  ldr x8,[x12]
7101a5c848  sub x11,x28,#0x22c
7101a5c84c  sub x13,x28,#0x224
7101a5c850  sub x0,x28,#0x220
7101a5c854  sub x1,x26,#0x218
7101a5c858  strh w9,[x13]
7101a5c85c  str x8,[x11]
7101a5c860  str wzr,[x0]
7101a5c864  bl 0x7101696040
7101a5c868  sub x9,x26,#0x1e8
7101a5c86c  sub x10,x26,#0x1e3
7101a5c870  ldr x10,[x10]
7101a5c874  ldr x9,[x9]
7101a5c878  sub x8,x28,#0x1e8
7101a5c87c  sub x11,x28,#0x1e3
7101a5c880  str x10,[x11]
7101a5c884  str x9,[x8]
7101a5c888  sub x8,x26,#0x1c8
7101a5c88c  sub x10,x26,#0x1d8
7101a5c890  sub x11,x26,#0x1d0
7101a5c894  ldr x11,[x11]
7101a5c898  ldrh w8,[x8]
7101a5c89c  ldr x10,[x10]
7101a5c8a0  sub x9,x28,#0x1c8
7101a5c8a4  sub x12,x28,#0x1d8
7101a5c8a8  sub x0,x28,#0x1c0
7101a5c8ac  sub x1,x26,#0x1c0
7101a5c8b0  strh w8,[x9]
7101a5c8b4  sub x8,x28,#0x1d0
7101a5c8b8  str x11,[x8]
7101a5c8bc  str x10,[x12]
7101a5c8c0  bl 0x71015547e0
7101a5c8c4  ldp x8,x9,[x26, #-0x20]
7101a5c8c8  ldurb w10,[x26, #-0x10]
7101a5c8cc  sturb w10,[x28, #-0x10]
7101a5c8d0  stp x8,x9,[x28, #-0x20]
7101a5c8d4  ldur w8,[x26, #-0x8]
7101a5c8d8  ldurh w9,[x26, #-0x4]
7101a5c8dc  sub x27,x27,#0x3f0
7101a5c8e0  cmp x23,x27
7101a5c8e4  sturh w9,[x28, #-0x4]
7101a5c8e8  stur w8,[x28, #-0x8]
7101a5c8ec  b.ne 0x7101a5c7d4
7101a5c8f0  ldp x9,x28,[sp, #0x40]
7101a5c8f4  orr w8,wzr,#0x3f0
7101a5c8f8  mul x8,x9,x8
7101a5c8fc  ldr x9,[sp, #0x50]
7101a5c900  ldr x24,[x9]
7101a5c904  ldp x10,x9,[sp, #0x30]
7101a5c908  add x8,x25,x8
7101a5c90c  add x8,x8,x27
7101a5c910  mov w27,#0xffffffff
7101a5c914  b 0x7101a5c92c
7101a5c918  stp x23,x23,[x19, #0x68]
7101a5c91c  str x25,[x19, #0x78]
7101a5c920  cbnz x24,0x7101a5c704
7101a5c924  b 0x7101a5c70c
7101a5c928  mov x8,x9
7101a5c92c  stp x8,x9,[x19, #0xa8]
7101a5c930  str x10,[x19, #0xb8]
7101a5c934  cbz x24,0x7101a5c940
7101a5c938  mov x0,x24
7101a5c93c  bl 0x710392eb40
7101a5c940  ldr x8,[x19, #0xd0]
7101a5c944  ldr x22,[x19, #0xc0]
7101a5c948  sub x8,x8,x22
7101a5c94c  asr x8,x8,#0x4
7101a5c950  cmp x8,#0x1f
7101a5c954  b.hi 0x7101a5ca24
7101a5c958  ldr x23,[x19, #0xc8]
7101a5c95c  sub x8,x23,x22
7101a5c960  mov w0,#0x10
7101a5c964  mov w1,#0x200
7101a5c968  asr x24,x8,#0x4
7101a5c96c  bl 0x710392e290
7101a5c970  cbnz x0,0x7101a5c9b8
7101a5c974  adrp x8,0x7105332000
7101a5c978  ldr x0,[x8, #0xf00]
7101a5c97c  cbz x0,0x7101a5c9b4
7101a5c980  mov w8,#0x200
7101a5c984  stur wzr,[x29, #-0xd0]
7101a5c988  sub x1,x29,#0xd0
7101a5c98c  str x8,[sp, #0xa0]
7101a5c990  ldr x8,[x0]
7101a5c994  ldr x8,[x8, #0x30]
7101a5c998  add x2,sp,#0xa0
7101a5c99c  blr x8
7101a5c9a0  tbz w0,#0x0,0x7101a5c9b4
7101a5c9a4  mov w0,#0x10
7101a5c9a8  mov w1,#0x200
7101a5c9ac  bl 0x710392e290
7101a5c9b0  cbnz x0,0x7101a5c9b8
7101a5c9b4  mov x0,xzr
7101a5c9b8  add x27,x0,x24, LSL #0x4
7101a5c9bc  add x26,x0,#0x200
7101a5c9c0  cmp x23,x22
7101a5c9c4  b.eq 0x7101a5d25c
7101a5c9c8  mov x24,x27
7101a5c9cc  sub x24,x24,#0x10
7101a5c9d0  sub x23,x23,#0x10
7101a5c9d4  mov x0,x24
7101a5c9d8  mov x1,x23
7101a5c9dc  bl 0x7101a58b00
7101a5c9e0  cmp x22,x23
7101a5c9e4  b.ne 0x7101a5c9cc
7101a5c9e8  ldp x23,x25,[x19, #0xc0]
7101a5c9ec  cmp x25,x23
7101a5c9f0  stp x24,x27,[x19, #0xc0]
7101a5c9f4  mov w27,#0xffffffff
7101a5c9f8  str x26,[x19, #0xd0]
7101a5c9fc  b.eq 0x7101a5ca18
7101a5ca00  ldr x8,[x25, #-0x10]!
7101a5ca04  ldr x8,[x8]
7101a5ca08  mov x0,x25
7101a5ca0c  blr x8
7101a5ca10  cmp x23,x25
7101a5ca14  b.ne 0x7101a5ca00
7101a5ca18  cbz x23,0x7101a5ca24
7101a5ca1c  mov x0,x23
7101a5ca20  bl 0x710392eb40
7101a5ca24  ldur x22,[x29, #-0x78]
7101a5ca28  ldr x23,[x22, #0x8]
7101a5ca2c  str x19,[x22, #0x8]
7101a5ca30  cbz x23,0x7101a5ca48
7101a5ca34  mov x0,x23
7101a5ca38  bl 0x7101a59c60
7101a5ca3c  mov x0,x23
7101a5ca40  bl 0x710392eb40
7101a5ca44  ldr x19,[x22, #0x8]
7101a5ca48  add x22,x19,#0x28
7101a5ca4c  cmp x22,x28
7101a5ca50  b.eq 0x7101a5cac4
7101a5ca54  ldr x8,[x28, #0x8]
7101a5ca58  ldr x8,[x8]
7101a5ca5c  ldr x9,[x19, #0x30]
7101a5ca60  str x8,[x9]
7101a5ca64  ldr x8,[x28, #0x8]
7101a5ca68  ldr x8,[x8, #0x8]
7101a5ca6c  ldr x9,[x19, #0x30]
7101a5ca70  str x8,[x9, #0x8]
7101a5ca74  ldr x9,[x28, #0x8]
7101a5ca78  ldr x8,[x19, #0x30]
7101a5ca7c  cmp x8,x9
7101a5ca80  b.eq 0x7101a5cac4
7101a5ca84  ldr x10,[x9, #0x18]
7101a5ca88  ldr x10,[x10]
7101a5ca8c  ldr x11,[x8, #0x18]
7101a5ca90  str x10,[x11]
7101a5ca94  ldr x10,[x9, #0x18]
7101a5ca98  ldr x10,[x10, #0x8]
7101a5ca9c  ldr x11,[x8, #0x18]
7101a5caa0  str x10,[x11, #0x8]
7101a5caa4  ldr x10,[x9, #0x18]
7101a5caa8  ldr x10,[x10, #0x10]
7101a5caac  ldr x11,[x8, #0x18]
7101a5cab0  str x10,[x11, #0x10]
7101a5cab4  ldr x9,[x9, #0x18]
7101a5cab8  ldr x9,[x9, #0x18]
7101a5cabc  ldr x8,[x8, #0x18]
7101a5cac0  str x9,[x8, #0x18]
7101a5cac4  ldr w8,[x20]
7101a5cac8  str w8,[x19, #0x8]
7101a5cacc  ldrb w8,[x20, #0x4]
7101a5cad0  strb w8,[x19, #0x20]
7101a5cad4  ldrb w8,[x20, #0x5]
7101a5cad8  strb w8,[x19, #0x21]
7101a5cadc  ldr x8,[x20, #0x8]
7101a5cae0  str x8,[x19, #0x18]
7101a5cae4  ldr w8,[x20, #0x10]
7101a5cae8  str w8,[x19, #0xc]
7101a5caec  ldp w8,w9,[x20, #0x10]
7101a5caf0  sub w8,w8,w9
7101a5caf4  str w8,[x19, #0x10]
7101a5caf8  ldrb w8,[x20, #0x18]
7101a5cafc  strb w8,[x19, #0x4f8]
7101a5cb00  adrp x1,0x7104432000
7101a5cb04  add x1,x1,#0xa98
7101a5cb08  add x8,sp,#0xa0
7101a5cb0c  mov x0,x22
7101a5cb10  add x20,sp,#0xa0
7101a5cb14  bl 0x7103776640
7101a5cb18  add x8,x19,#0x38
7101a5cb1c  cmp x8,x20
7101a5cb20  str x8,[sp, #0x40]
7101a5cb24  b.eq 0x7101a5cb54
7101a5cb28  ldr x8,[sp, #0xa8]
7101a5cb2c  str xzr,[sp, #0xa8]
7101a5cb30  ldr x20,[x19, #0x40]
7101a5cb34  str x8,[x19, #0x40]
7101a5cb38  cbz x20,0x7101a5cb54
7101a5cb3c  ldr x0,[x20, #0x18]
7101a5cb40  stp x21,xzr,[x20, #0x10]
7101a5cb44  cbz x0,0x7101a5cb4c
7101a5cb48  bl 0x710392eb40
7101a5cb4c  mov x0,x20
7101a5cb50  bl 0x710392eb40
7101a5cb54  ldr x20,[sp, #0xa8]
7101a5cb58  adrp x28,0x710523d000
7101a5cb5c  add x28,x28,#0x988
7101a5cb60  stp x28,xzr,[sp, #0xa0]
7101a5cb64  cbz x20,0x7101a5cb80
7101a5cb68  ldr x0,[x20, #0x18]
7101a5cb6c  stp x21,xzr,[x20, #0x10]
7101a5cb70  cbz x0,0x7101a5cb78
7101a5cb74  bl 0x710392eb40
7101a5cb78  mov x0,x20
7101a5cb7c  bl 0x710392eb40
7101a5cb80  ldr x0,[sp, #0x40]
7101a5cb84  adrp x1,0x7104412000
7101a5cb88  add x1,x1,#0x39c
7101a5cb8c  add x8,sp,#0xa0
7101a5cb90  add x20,sp,#0xa0
7101a5cb94  bl 0x7103776910
7101a5cb98  add x8,x19,#0x48
7101a5cb9c  cmp x8,x20
7101a5cba0  b.eq 0x7101a5cbbc
7101a5cba4  ldr x8,[sp, #0xa8]
7101a5cba8  str xzr,[sp, #0xa8]
7101a5cbac  ldr x0,[x19, #0x50]
7101a5cbb0  str x8,[x19, #0x50]
7101a5cbb4  cbz x0,0x7101a5cbbc
7101a5cbb8  bl 0x710392eb40
7101a5cbbc  ldr x0,[sp, #0xa8]
7101a5cbc0  stp x21,xzr,[sp, #0xa0]
7101a5cbc4  cbz x0,0x7101a5cbcc
7101a5cbc8  bl 0x710392eb40
7101a5cbcc  adrp x1,0x710438c000
7101a5cbd0  add x1,x1,#0x366
7101a5cbd4  add x8,sp,#0x80
7101a5cbd8  mov x0,x22
7101a5cbdc  bl 0x7103776910
7101a5cbe0  ldr x8,[sp, #0x88]
7101a5cbe4  ldr x11,[x8]
7101a5cbe8  adrp x9,0x7104472000
7101a5cbec  adrp x10,0x7104472000
7101a5cbf0  adrp x8,0x7104473000
7101a5cbf4  cbz x11,0x7101a5cc58
7101a5cbf8  movi v0.2D,#0x0
7101a5cbfc  ldr s4,[x11, #0x30]
7101a5cc00  add x12,x11,#0x34
7101a5cc04  ldp s1,s7,[x11, #0x50]
7101a5cc08  add x13,x11,#0x38
7101a5cc0c  ldp s2,s16,[x11, #0x48]
7101a5cc10  fmul s1,s1,s2
7101a5cc14  mov v3.16B,v0.16B
7101a5cc18  mov v3.S[0x0],v4.S[0x0]
7101a5cc1c  ld1 {v3.S}[1],[x12]
7101a5cc20  fabs s2,s1
7101a5cc24  ld1 {v3.S}[2],[x13]
7101a5cc28  fmov s5,0x3f000000
7101a5cc2c  fmul s1,s7,s16
7101a5cc30  ldrb w12,[x11, #0x5b]
7101a5cc34  fmul s6,s2,s5
7101a5cc38  fabs s1,s1
7101a5cc3c  and w13,w12,#0x3
7101a5cc40  cmp w13,#0x2
7101a5cc44  b.eq 0x7101a5cc70
7101a5cc48  cmp w13,#0x1
7101a5cc4c  b.ne 0x7101a5cc78
7101a5cc50  fadd s4,s4,s6
7101a5cc54  b 0x7101a5cc74
7101a5cc58  ldr s9,[x9, #0x4c4]
7101a5cc5c  adrp x9,0x7104473000
7101a5cc60  ldr s12,[x9, #0x210]
7101a5cc64  ldr s11,[x10, #0x8b8]
7101a5cc68  ldr s10,[x8, #0x208]
7101a5cc6c  b 0x7101a5cd38
7101a5cc70  fsub s4,s4,s6
7101a5cc74  mov v3.S[0x0],v4.S[0x0]
7101a5cc78  fmul s4,s1,s5
7101a5cc7c  ubfx w12,w12,#0x2,#0x2
7101a5cc80  cmp w12,#0x2
7101a5cc84  b.eq 0x7101a5cc9c
7101a5cc88  cmp w12,#0x1
7101a5cc8c  b.ne 0x7101a5cca8
7101a5cc90  dup s5,v3.S[0x1]
7101a5cc94  fsub s4,s5,s4
7101a5cc98  b 0x7101a5cca4
7101a5cc9c  dup s5,v3.S[0x1]
7101a5cca0  fadd s4,s4,s5
7101a5cca4  mov v3.S[0x1],v4.S[0x0]
7101a5cca8  ldr x11,[x11, #0x18]
7101a5ccac  cbz x11,0x7101a5cce8
7101a5ccb0  ldp s4,s6,[x11, #0x30]
7101a5ccb4  fadd s5,s3,s4
7101a5ccb8  dup s4,v3.S[0x1]
7101a5ccbc  fadd s4,s4,s6
7101a5ccc0  dup s7,v3.S[0x2]
7101a5ccc4  mov v3.16B,v0.16B
7101a5ccc8  mov v3.S[0x0],v5.S[0x0]
7101a5cccc  ldr s6,[x11, #0x38]
7101a5ccd0  mov v3.S[0x1],v4.S[0x0]
7101a5ccd4  fadd s6,s7,s6
7101a5ccd8  mov v3.S[0x2],v6.S[0x0]
7101a5ccdc  ldr x11,[x11, #0x18]
7101a5cce0  cbnz x11,0x7101a5ccb0
7101a5cce4  b 0x7101a5ccf0
7101a5cce8  dup s4,v3.S[0x1]
7101a5ccec  mov v5.16B,v3.16B
7101a5ccf0  mov v0.S[0x0],v2.S[0x0]
7101a5ccf4  ldr s3,[x10, #0x8b8]
7101a5ccf8  fadd s3,s5,s3
7101a5ccfc  mov v0.S[0x1],v1.S[0x0]
7101a5cd00  movi v1.4S,#0x3f, LSL #24
7101a5cd04  ldr s2,[x9, #0x4c4]
7101a5cd08  ldr s6,[x8, #0x208]
7101a5cd0c  fmul v0.4S,v0.4S,v1.4S
7101a5cd10  fsub s1,s2,s4
7101a5cd14  fsub s4,s3,s0
7101a5cd18  fadd s3,s3,s0
7101a5cd1c  fadd s10,s4,s6
7101a5cd20  dup s0,v0.S[0x1]
7101a5cd24  fadd s5,s1,s0
7101a5cd28  fsub s0,s0,s1
7101a5cd2c  fadd s11,s3,s6
7101a5cd30  fadd s9,s0,s2
7101a5cd34  fsub s12,s2,s5
7101a5cd38  ldr w8,[x19, #0xc]
7101a5cd3c  add w10,w8,#0x3
7101a5cd40  add w11,w8,#0x6
7101a5cd44  cmp w10,#0x0
7101a5cd48  csel w10,w11,w10,lt
7101a5cd4c  add x9,x19,#0x4cc
7101a5cd50  asr w10,w10,#0x2
7101a5cd54  cmp w8,#0x1
7101a5cd58  str x22,[sp]
7101a5cd5c  str w10,[x19, #0x4c8]
7101a5cd60  str xzr,[x9]
7101a5cd64  str wzr,[x19, #0x4d4]
7101a5cd68  b.lt 0x7101a5d0fc
7101a5cd6c  mov w22,wzr
7101a5cd70  add x8,x19,#0x68
7101a5cd74  adrp x23,0x710426f000
7101a5cd78  add x23,x23,#0xa89
7101a5cd7c  stur x8,[x29, #-0x78]
7101a5cd80  mov w0,#0x10
7101a5cd84  mov w1,#0x20
7101a5cd88  str x21,[sp, #0xa0]
7101a5cd8c  bl 0x710392e290
7101a5cd90  cbnz x0,0x7101a5cdd8
7101a5cd94  adrp x8,0x7105332000
7101a5cd98  ldr x0,[x8, #0xf00]
7101a5cd9c  cbz x0,0x7101a5cdd4
7101a5cda0  mov w8,#0x20
7101a5cda4  str wzr,[sp, #0x68]
7101a5cda8  add x1,sp,#0x68
7101a5cdac  stur x8,[x29, #-0xd0]
7101a5cdb0  ldr x8,[x0]
7101a5cdb4  ldr x8,[x8, #0x30]
7101a5cdb8  sub x2,x29,#0xd0
7101a5cdbc  blr x8
7101a5cdc0  tbz w0,#0x0,0x7101a5cdd4
7101a5cdc4  mov w0,#0x10
7101a5cdc8  mov w1,#0x20
7101a5cdcc  bl 0x710392e290
7101a5cdd0  cbnz x0,0x7101a5cdd8
7101a5cdd4  mov x0,xzr
7101a5cdd8  stp xzr,xzr,[x0, #0x10]
7101a5cddc  sub x8,x29,#0xd0
7101a5cde0  stp xzr,xzr,[x0]
7101a5cde4  mov x1,x23
7101a5cde8  mov w2,w22
7101a5cdec  str x0,[sp, #0xa8]
7101a5cdf0  ldr x0,[sp, #0x40]
7101a5cdf4  bl 0x7103776910
7101a5cdf8  ldur x8,[x29, #-0xc8]
7101a5cdfc  ldr x0,[sp, #0xa8]
7101a5ce00  stur xzr,[x29, #-0xc8]
7101a5ce04  str x8,[sp, #0xa8]
7101a5ce08  cbz x0,0x7101a5ce10
7101a5ce0c  bl 0x710392eb40
7101a5ce10  stp x21,xzr,[x29, #-0xd0]
7101a5ce14  ldp x20,x8,[x19, #0x70]
7101a5ce18  cmp x20,x8
7101a5ce1c  b.eq 0x7101a5ced4
7101a5ce20  mov w0,#0x10
7101a5ce24  mov w1,#0x20
7101a5ce28  str x21,[x20]
7101a5ce2c  bl 0x710392e290
7101a5ce30  cbnz x0,0x7101a5ce78
7101a5ce34  adrp x8,0x7105332000
7101a5ce38  ldr x0,[x8, #0xf00]
7101a5ce3c  cbz x0,0x7101a5ce74
7101a5ce40  mov w8,#0x20
7101a5ce44  str wzr,[sp, #0x68]
7101a5ce48  add x1,sp,#0x68
7101a5ce4c  stur x8,[x29, #-0xd0]
7101a5ce50  ldr x8,[x0]
7101a5ce54  ldr x8,[x8, #0x30]
7101a5ce58  sub x2,x29,#0xd0
7101a5ce5c  blr x8
7101a5ce60  tbz w0,#0x0,0x7101a5ce74
7101a5ce64  mov w0,#0x10
7101a5ce68  mov w1,#0x20
7101a5ce6c  bl 0x710392e290
7101a5ce70  cbnz x0,0x7101a5ce78
7101a5ce74  mov x0,xzr
7101a5ce78  add x8,sp,#0xa0
7101a5ce7c  cmp x20,x8
7101a5ce80  stp xzr,xzr,[x0, #0x10]
7101a5ce84  stp xzr,xzr,[x0]
7101a5ce88  str x0,[x20, #0x8]
7101a5ce8c  b.eq 0x7101a5cec4
7101a5ce90  ldr x8,[sp, #0xa8]
7101a5ce94  ldr x9,[x8]
7101a5ce98  str x9,[x0]
7101a5ce9c  ldr x8,[x8, #0x8]
7101a5cea0  ldr x9,[x20, #0x8]
7101a5cea4  str x8,[x9, #0x8]
7101a5cea8  ldr x8,[sp, #0xa8]
7101a5ceac  ldr x9,[x8, #0x10]
7101a5ceb0  ldr x10,[x20, #0x8]
7101a5ceb4  str x9,[x10, #0x10]
7101a5ceb8  ldr x8,[x8, #0x18]
7101a5cebc  ldr x9,[x20, #0x8]
7101a5cec0  str x8,[x9, #0x18]
7101a5cec4  ldr x8,[x19, #0x70]
7101a5cec8  add x8,x8,#0x10
7101a5cecc  str x8,[x19, #0x70]
7101a5ced0  b 0x7101a5d0d8
7101a5ced4  ldur x9,[x29, #-0x78]
7101a5ced8  ldr x10,[x9]
7101a5cedc  sub x9,x20,x10
7101a5cee0  asr x28,x9,#0x4
7101a5cee4  add x9,x28,#0x1
7101a5cee8  lsr x11,x9,#0x3c
7101a5ceec  cbnz x11,0x7101a5e88c
7101a5cef0  sub x8,x8,x10
7101a5cef4  asr x10,x8,#0x4
7101a5cef8  orr x11,xzr,#0x7fffffffffffffe
7101a5cefc  cmp x10,x11
7101a5cf00  b.hi 0x7101a5cf20
7101a5cf04  asr x8,x8,#0x3
7101a5cf08  cmp x8,x9
7101a5cf0c  csel x20,x9,x8,cc
7101a5cf10  cbz x20,0x7101a5cf84
7101a5cf14  lsr x8,x20,#0x3c
7101a5cf18  cbz x8,0x7101a5cf24
7101a5cf1c  b 0x7101a5e894
7101a5cf20  orr x20,xzr,#0xfffffffffffffff
7101a5cf24  lsl x8,x20,#0x4
7101a5cf28  cmp x8,#0x0
7101a5cf2c  csinc x25,x8,xzr,ne
7101a5cf30  mov w0,#0x10
7101a5cf34  mov x1,x25
7101a5cf38  bl 0x710392e290
7101a5cf3c  mov x24,x0
7101a5cf40  cbnz x0,0x7101a5cf88
7101a5cf44  adrp x8,0x7105332000
7101a5cf48  ldr x0,[x8, #0xf00]
7101a5cf4c  cbz x0,0x7101a5cf84
7101a5cf50  str wzr,[sp, #0x68]
7101a5cf54  stur x25,[x29, #-0xd0]
7101a5cf58  ldr x8,[x0]
7101a5cf5c  ldr x8,[x8, #0x30]
7101a5cf60  add x1,sp,#0x68
7101a5cf64  sub x2,x29,#0xd0
7101a5cf68  blr x8
7101a5cf6c  tbz w0,#0x0,0x7101a5cf84
7101a5cf70  mov w0,#0x10
7101a5cf74  mov x1,x25
7101a5cf78  bl 0x710392e290
7101a5cf7c  mov x24,x0
7101a5cf80  cbnz x0,0x7101a5cf88
7101a5cf84  mov x24,xzr
7101a5cf88  add x25,x24,x28, LSL #0x4
7101a5cf8c  mov x28,x25
7101a5cf90  mov w0,#0x10
7101a5cf94  mov w1,#0x20
7101a5cf98  str x21,[x28], #0x8
7101a5cf9c  bl 0x710392e290
7101a5cfa0  cbnz x0,0x7101a5cfe8
7101a5cfa4  adrp x8,0x7105332000
7101a5cfa8  ldr x0,[x8, #0xf00]
7101a5cfac  cbz x0,0x7101a5cfe4
7101a5cfb0  mov w8,#0x20
7101a5cfb4  str wzr,[sp, #0x68]
7101a5cfb8  add x1,sp,#0x68
7101a5cfbc  stur x8,[x29, #-0xd0]
7101a5cfc0  ldr x8,[x0]
7101a5cfc4  ldr x8,[x8, #0x30]
7101a5cfc8  sub x2,x29,#0xd0
7101a5cfcc  blr x8
7101a5cfd0  tbz w0,#0x0,0x7101a5cfe4
7101a5cfd4  mov w0,#0x10
7101a5cfd8  mov w1,#0x20
7101a5cfdc  bl 0x710392e290
7101a5cfe0  cbnz x0,0x7101a5cfe8
7101a5cfe4  mov x0,xzr
7101a5cfe8  add x8,sp,#0xa0
7101a5cfec  cmp x25,x8
7101a5cff0  stp xzr,xzr,[x0, #0x10]
7101a5cff4  stp xzr,xzr,[x0]
7101a5cff8  str x0,[x28]
7101a5cffc  b.eq 0x7101a5d030
7101a5d000  ldr x8,[sp, #0xa8]
7101a5d004  ldr x9,[x8]
7101a5d008  str x9,[x0]
7101a5d00c  ldr x8,[x8, #0x8]
7101a5d010  str x8,[x0, #0x8]
7101a5d014  ldr x8,[sp, #0xa8]
7101a5d018  ldr x9,[x8, #0x10]
7101a5d01c  ldr x10,[x25, #0x8]
7101a5d020  str x9,[x10, #0x10]
7101a5d024  ldr x8,[x8, #0x18]
7101a5d028  ldr x9,[x25, #0x8]
7101a5d02c  str x8,[x9, #0x18]
7101a5d030  add x20,x24,x20, LSL #0x4
7101a5d034  ldp x24,x27,[x19, #0x68]
7101a5d038  add x28,x25,#0x10
7101a5d03c  cmp x27,x24
7101a5d040  b.eq 0x7101a5d090
7101a5d044  mov x26,xzr
7101a5d048  sub x24,x24,x27
7101a5d04c  add x8,x25,x26
7101a5d050  cmp x27,x25
7101a5d054  stp x21,xzr,[x8, #-0x10]
7101a5d058  b.eq 0x7101a5d078
7101a5d05c  add x9,x27,x26
7101a5d060  ldur x10,[x9, #-0x8]
7101a5d064  stur xzr,[x9, #-0x8]
7101a5d068  ldur x0,[x8, #-0x8]
7101a5d06c  stur x10,[x8, #-0x8]
7101a5d070  cbz x0,0x7101a5d078
7101a5d074  bl 0x710392eb40
7101a5d078  sub x26,x26,#0x10
7101a5d07c  cmp x24,x26
7101a5d080  b.ne 0x7101a5d04c
7101a5d084  add x25,x25,x26
7101a5d088  ldp x26,x24,[x19, #0x68]
7101a5d08c  b 0x7101a5d094
7101a5d090  mov x26,x24
7101a5d094  stp x25,x28,[x19, #0x68]
7101a5d098  cmp x24,x26
7101a5d09c  mov w27,#0xffffffff
7101a5d0a0  adrp x28,0x710523d000
7101a5d0a4  add x28,x28,#0x988
7101a5d0a8  str x20,[x19, #0x78]
7101a5d0ac  b.eq 0x7101a5d0cc
7101a5d0b0  str x21,[x24, #-0x10]!
7101a5d0b4  ldr x0,[x24, #0x8]
7101a5d0b8  str xzr,[x24, #0x8]
7101a5d0bc  cbz x0,0x7101a5d0c4
7101a5d0c0  bl 0x710392eb40
7101a5d0c4  cmp x26,x24
7101a5d0c8  b.ne 0x7101a5d0b0
7101a5d0cc  cbz x26,0x7101a5d0d8
7101a5d0d0  mov x0,x26
7101a5d0d4  bl 0x710392eb40
7101a5d0d8  ldr x0,[sp, #0xa8]
7101a5d0dc  stp x21,xzr,[sp, #0xa0]
7101a5d0e0  cbz x0,0x7101a5d0e8
7101a5d0e4  bl 0x710392eb40
7101a5d0e8  ldr w8,[x19, #0x4c8]
7101a5d0ec  add w22,w22,#0x1
7101a5d0f0  cmp w22,w8
7101a5d0f4  b.lt 0x7101a5cd80
7101a5d0f8  ldr w8,[x19, #0xc]
7101a5d0fc  mov x10,x19
7101a5d100  ldr x9,[x10, #0xa8]!
7101a5d104  ldr x22,[x10, #0x8]
7101a5d108  stur x10,[x29, #-0x78]
7101a5d10c  sub x10,x22,x9
7101a5d110  mov x13,#0xefbf
7101a5d114  movk x13,#0xbefb, LSL #16
7101a5d118  movk x13,#0xfbef, LSL #32
7101a5d11c  movk x13,#0xefbe, LSL #48
7101a5d120  sxtw x20,w8
7101a5d124  asr x10,x10,#0x4
7101a5d128  mul x26,x10,x13
7101a5d12c  subs x24,x26,x20
7101a5d130  b.cs 0x7101a5d194
7101a5d134  ldr x10,[x19, #0xb8]
7101a5d138  sub x12,x10,x22
7101a5d13c  asr x12,x12,#0x4
7101a5d140  mul x12,x12,x13
7101a5d144  sub x11,x20,x26
7101a5d148  cmp x12,x11
7101a5d14c  b.cs 0x7101a5d1b0
7101a5d150  tbnz w8,#0x1f,0x7101a5e88c
7101a5d154  sub x8,x10,x9
7101a5d158  mov x9,#0x81f
7101a5d15c  movk x9,#0x2082, LSL #16
7101a5d160  asr x8,x8,#0x4
7101a5d164  mul x8,x8,x13
7101a5d168  movk x9,#0x8208, LSL #32
7101a5d16c  movk x9,#0x20, LSL #48
7101a5d170  cmp x8,x9
7101a5d174  str x20,[sp, #0x50]
7101a5d178  b.hi 0x7101a5d270
7101a5d17c  lsl x8,x8,#0x1
7101a5d180  cmp x8,x20
7101a5d184  csel x9,x20,x8,cc
7101a5d188  cbnz x9,0x7101a5d280
7101a5d18c  str xzr,[sp, #0x38]
7101a5d190  b 0x7101a5d2e0
7101a5d194  b.ls 0x7101a5d1a4
7101a5d198  orr w10,wzr,#0x3f0
7101a5d19c  madd x9,x20,x10,x9
7101a5d1a0  str x9,[x19, #0xb0]
7101a5d1a4  cmp w8,#0x1
7101a5d1a8  b.ge 0x7101a5d528
7101a5d1ac  b 0x7101a5d574
7101a5d1b0  mov x20,#0x753f
7101a5d1b4  movk x20,#0x95d0, LSL #16
7101a5d1b8  orr x26,xzr,#0x3f8000003f800000
7101a5d1bc  orr w28,wzr,#0xff
7101a5d1c0  movk x20,#0xb, LSL #32
7101a5d1c4  mov x25,x27
7101a5d1c8  mov x27,#-0x1
7101a5d1cc  orr w2,wzr,#0x3f0
7101a5d1d0  mov x0,x22
7101a5d1d4  mov w1,wzr
7101a5d1d8  add x23,x22,#0x8
7101a5d1dc  bl 0x71039c02a0
7101a5d1e0  mov x0,x23
7101a5d1e4  bl 0x71017abd00
7101a5d1e8  add x8,x22,#0x1c4
7101a5d1ec  orr w9,wzr,#0xffff
7101a5d1f0  add x0,x22,#0x230
7101a5d1f4  stp x25,xzr,[x22, #0x1a8]
7101a5d1f8  str x27,[x22, #0x1b8]
7101a5d1fc  strh wzr,[x22, #0x1c0]
7101a5d200  strh w9,[x22, #0x1cc]
7101a5d204  str x27,[x8]
7101a5d208  str xzr,[x22, #0x1d0]
7101a5d20c  strh wzr,[x22, #0x1d8]
7101a5d210  str w25,[x22, #0x208]
7101a5d214  strb wzr,[x22, #0x20c]
7101a5d218  str wzr,[x22, #0x210]
7101a5d21c  strb wzr,[x22, #0x214]
7101a5d220  str x26,[x22, #0x218]
7101a5d224  str x26,[x22, #0x220]
7101a5d228  strh wzr,[x22, #0x228]
7101a5d22c  bl 0x71017abd00
7101a5d230  strb wzr,[x22, #0x3d0]
7101a5d234  str x20,[x22, #0x3d8]
7101a5d238  adds x24,x24,#0x1
7101a5d23c  strb w28,[x22, #0x3e0]
7101a5d240  str wzr,[x22, #0x3e8]
7101a5d244  strh wzr,[x22, #0x3ec]
7101a5d248  ldr x8,[x19, #0xb0]
7101a5d24c  add x22,x8,#0x3f0
7101a5d250  str x22,[x19, #0xb0]
7101a5d254  b.ne 0x7101a5d1cc
7101a5d258  b 0x7101a5d500
7101a5d25c  stp x27,x27,[x19, #0xc0]
7101a5d260  mov w27,#0xffffffff
7101a5d264  str x26,[x19, #0xd0]
7101a5d268  cbnz x23,0x7101a5ca1c
7101a5d26c  b 0x7101a5ca24
7101a5d270  mov x9,#0x1041
7101a5d274  movk x9,#0x4104, LSL #16
7101a5d278  movk x9,#0x410, LSL #32
7101a5d27c  movk x9,#0x41, LSL #48
7101a5d280  orr w8,wzr,#0x3f0
7101a5d284  mul x8,x9,x8
7101a5d288  cmp x8,#0x0
7101a5d28c  csinc x23,x8,xzr,ne
7101a5d290  mov w0,#0x10
7101a5d294  str x9,[sp, #0x38]
7101a5d298  mov x1,x23
7101a5d29c  bl 0x710392e290
7101a5d2a0  cbnz x0,0x7101a5d2e4
7101a5d2a4  adrp x8,0x7105332000
7101a5d2a8  ldr x0,[x8, #0xf00]
7101a5d2ac  cbz x0,0x7101a5d2e0
7101a5d2b0  stur wzr,[x29, #-0xd0]
7101a5d2b4  str x23,[sp, #0xa0]
7101a5d2b8  ldr x8,[x0]
7101a5d2bc  ldr x8,[x8, #0x30]
7101a5d2c0  sub x1,x29,#0xd0
7101a5d2c4  add x2,sp,#0xa0
7101a5d2c8  blr x8
7101a5d2cc  tbz w0,#0x0,0x7101a5d2e0
7101a5d2d0  mov w0,#0x10
7101a5d2d4  mov x1,x23
7101a5d2d8  bl 0x710392e290
7101a5d2dc  cbnz x0,0x7101a5d2e4
7101a5d2e0  mov x0,xzr
7101a5d2e4  orr w8,wzr,#0x3f0
7101a5d2e8  madd x23,x26,x8,x0
7101a5d2ec  mov x25,#0x753f
7101a5d2f0  movk x25,#0x95d0, LSL #16
7101a5d2f4  orr w28,wzr,#0xffff
7101a5d2f8  orr x20,xzr,#0x3f8000003f800000
7101a5d2fc  orr w22,wzr,#0xff
7101a5d300  movk x25,#0xb, LSL #32
7101a5d304  str x0,[sp, #0x30]
7101a5d308  mov x27,#-0x1
7101a5d30c  mov w26,#0xffffffff
7101a5d310  str x23,[sp, #0x48]
7101a5d314  orr w2,wzr,#0x3f0
7101a5d318  mov x0,x23
7101a5d31c  mov w1,wzr
7101a5d320  bl 0x71039c02a0
7101a5d324  add x0,x23,#0x8
7101a5d328  bl 0x71017abd00
7101a5d32c  add x8,x23,#0x1c4
7101a5d330  add x0,x23,#0x230
7101a5d334  str x27,[x23, #0x1b8]
7101a5d338  stp x26,xzr,[x23, #0x1a8]
7101a5d33c  strh wzr,[x23, #0x1c0]
7101a5d340  strh w28,[x23, #0x1cc]
7101a5d344  str x27,[x8]
7101a5d348  str xzr,[x23, #0x1d0]
7101a5d34c  strh wzr,[x23, #0x1d8]
7101a5d350  str w26,[x23, #0x208]
7101a5d354  strb wzr,[x23, #0x20c]
7101a5d358  str wzr,[x23, #0x210]
7101a5d35c  strb wzr,[x23, #0x214]
7101a5d360  str x20,[x23, #0x218]
7101a5d364  str x20,[x23, #0x220]
7101a5d368  strh wzr,[x23, #0x228]
7101a5d36c  bl 0x71017abd00
7101a5d370  strb wzr,[x23, #0x3d0]
7101a5d374  str x25,[x23, #0x3d8]
7101a5d378  adds x24,x24,#0x1
7101a5d37c  strb w22,[x23, #0x3e0]
7101a5d380  str wzr,[x23, #0x3e8]
7101a5d384  strh wzr,[x23, #0x3ec]
7101a5d388  add x23,x23,#0x3f0
7101a5d38c  b.ne 0x7101a5d314
7101a5d390  ldp x10,x9,[sp, #0x30]
7101a5d394  orr w8,wzr,#0x3f0
7101a5d398  ldp x0,x24,[x19, #0xa8]
7101a5d39c  madd x26,x9,x8,x10
7101a5d3a0  ldr x9,[sp, #0x50]
7101a5d3a4  madd x27,x9,x8,x10
7101a5d3a8  cmp x24,x0
7101a5d3ac  b.eq 0x7101a5d4e8
7101a5d3b0  ldr x20,[sp, #0x48]
7101a5d3b4  mov x25,xzr
7101a5d3b8  sub x28,x0,x24
7101a5d3bc  add x22,x24,x25
7101a5d3c0  sub x9,x22,#0x3f0
7101a5d3c4  ldr w9,[x9]
7101a5d3c8  add x23,x20,x25
7101a5d3cc  sub x8,x23,#0x3f0
7101a5d3d0  sub x0,x23,#0x3e8
7101a5d3d4  sub x1,x22,#0x3e8
7101a5d3d8  str w9,[x8]
7101a5d3dc  bl 0x71015547e0
7101a5d3e0  sub x12,x22,#0x230
7101a5d3e4  sub x9,x22,#0x248
7101a5d3e8  sub x10,x22,#0x240
7101a5d3ec  sub x11,x22,#0x238
7101a5d3f0  ldrh w12,[x12]
7101a5d3f4  ldr x9,[x9]
7101a5d3f8  ldr x10,[x10]
7101a5d3fc  ldr x11,[x11]
7101a5d400  sub x13,x23,#0x230
7101a5d404  sub x8,x23,#0x248
7101a5d408  str x9,[x8]
7101a5d40c  strh w12,[x13]
7101a5d410  sub x12,x23,#0x238
7101a5d414  sub x13,x23,#0x240
7101a5d418  str x11,[x12]
7101a5d41c  sub x12,x22,#0x22c
7101a5d420  str x10,[x13]
7101a5d424  sub x10,x22,#0x224
7101a5d428  ldrh w9,[x10]
7101a5d42c  ldr x8,[x12]
7101a5d430  sub x11,x23,#0x22c
7101a5d434  sub x13,x23,#0x224
7101a5d438  sub x0,x23,#0x220
7101a5d43c  sub x1,x22,#0x218
7101a5d440  strh w9,[x13]
7101a5d444  str x8,[x11]
7101a5d448  str wzr,[x0]
7101a5d44c  bl 0x7101696040
7101a5d450  sub x9,x22,#0x1e8
7101a5d454  sub x10,x22,#0x1e3
7101a5d458  ldr x10,[x10]
7101a5d45c  ldr x9,[x9]
7101a5d460  sub x8,x23,#0x1e8
7101a5d464  sub x11,x23,#0x1e3
7101a5d468  str x10,[x11]
7101a5d46c  str x9,[x8]
7101a5d470  sub x8,x22,#0x1c8
7101a5d474  sub x10,x22,#0x1d8
7101a5d478  sub x11,x22,#0x1d0
7101a5d47c  ldr x11,[x11]
7101a5d480  ldrh w8,[x8]
7101a5d484  ldr x10,[x10]
7101a5d488  sub x9,x23,#0x1c8
7101a5d48c  sub x12,x23,#0x1d8
7101a5d490  sub x0,x23,#0x1c0
7101a5d494  sub x1,x22,#0x1c0
7101a5d498  strh w8,[x9]
7101a5d49c  sub x8,x23,#0x1d0
7101a5d4a0  str x11,[x8]
7101a5d4a4  str x10,[x12]
7101a5d4a8  bl 0x71015547e0
7101a5d4ac  ldp x8,x9,[x22, #-0x20]
7101a5d4b0  ldurb w10,[x22, #-0x10]
7101a5d4b4  sturb w10,[x23, #-0x10]
7101a5d4b8  stp x8,x9,[x23, #-0x20]
7101a5d4bc  ldur w8,[x22, #-0x8]
7101a5d4c0  ldurh w9,[x22, #-0x4]
7101a5d4c4  sub x25,x25,#0x3f0
7101a5d4c8  cmp x28,x25
7101a5d4cc  sturh w9,[x23, #-0x4]
7101a5d4d0  stur w8,[x23, #-0x8]
7101a5d4d4  b.ne 0x7101a5d3bc
7101a5d4d8  ldur x8,[x29, #-0x78]
7101a5d4dc  ldr x0,[x8]
7101a5d4e0  add x20,x20,x25
7101a5d4e4  b 0x7101a5d4ec
7101a5d4e8  ldr x20,[sp, #0x48]
7101a5d4ec  mov w25,#0xffffffff
7101a5d4f0  stp x20,x27,[x19, #0xa8]
7101a5d4f4  str x26,[x19, #0xb8]
7101a5d4f8  cbz x0,0x7101a5d500
7101a5d4fc  bl 0x710392eb40
7101a5d500  ldr w8,[x19, #0xc]
7101a5d504  mov x13,#0xefbf
7101a5d508  movk x13,#0xbefb, LSL #16
7101a5d50c  adrp x28,0x710523d000
7101a5d510  add x28,x28,#0x988
7101a5d514  mov x27,x25
7101a5d518  movk x13,#0xfbef, LSL #32
7101a5d51c  movk x13,#0xefbe, LSL #48
7101a5d520  cmp w8,#0x1
7101a5d524  b.lt 0x7101a5d574
7101a5d528  mov x9,xzr
7101a5d52c  mov x10,xzr
7101a5d530  ldp x8,x11,[x19, #0xa8]
7101a5d534  sub x11,x11,x8
7101a5d538  asr x11,x11,#0x4
7101a5d53c  mul x11,x11,x13
7101a5d540  cmp x11,x10
7101a5d544  b.ls 0x7101a5e87c
7101a5d548  add x8,x8,x9
7101a5d54c  add x9,x9,#0x3f0
7101a5d550  str w10,[x8]
7101a5d554  ldrsw x11,[x19, #0x10]
7101a5d558  cmp x10,x11
7101a5d55c  cset w11,ge
7101a5d560  str w11,[x8, #0x10]
7101a5d564  ldrsw x8,[x19, #0xc]
7101a5d568  add x10,x10,#0x1
7101a5d56c  cmp x10,x8
7101a5d570  b.lt 0x7101a5d530
7101a5d574  add x9,x19,#0xc0
7101a5d578  add x22,sp,#0xa0
7101a5d57c  str x9,[sp, #0x8]
7101a5d580  add x9,x22,#0x8
7101a5d584  str x9,[sp, #0x50]
7101a5d588  sub x9,x29,#0xd0
7101a5d58c  add x9,x9,#0x8
7101a5d590  str x9,[sp, #0x48]
7101a5d594  mov w9,#0xa
7101a5d598  orr x9,x22,x9
7101a5d59c  str x9,[sp, #0x38]
7101a5d5a0  add x9,sp,#0x68
7101a5d5a4  orr x9,x9,#0x4
7101a5d5a8  stur x9,[x29, #-0x78]
7101a5d5ac  add x9,x22,#0xf0
7101a5d5b0  str x9,[sp, #0x30]
7101a5d5b4  add x9,x22,#0xc0
7101a5d5b8  str x9,[sp, #0x28]
7101a5d5bc  add x9,x22,#0x90
7101a5d5c0  fmov s8,0x3f800000
7101a5d5c4  str x9,[sp, #0x20]
7101a5d5c8  add x9,x22,#0x60
7101a5d5cc  mov w24,wzr
7101a5d5d0  str x9,[sp, #0x18]
7101a5d5d4  add x9,x22,#0x30
7101a5d5d8  str x9,[sp, #0x10]
7101a5d5dc  b 0x7101a5d5e4
7101a5d5e0  ldr w8,[x19, #0xc]
7101a5d5e4  str w24,[sp, #0x68]
7101a5d5e8  stp s10,s11,[sp, #0x6c]
7101a5d5ec  cmp w24,w8
7101a5d5f0  stp s12,s9,[sp, #0x74]
7101a5d5f4  ldrb w9,[x19, #0x20]
7101a5d5f8  cset w8,lt
7101a5d5fc  strb w9,[sp, #0x7c]
7101a5d600  ldrb w9,[x19, #0x21]
7101a5d604  strb w9,[sp, #0x7d]
7101a5d608  ldrb w9,[x19, #0x4f8]
7101a5d60c  strb w8,[sp, #0x7f]
7101a5d610  adrp x8,0x71050a8000
7101a5d614  add x8,x8,#0xf08
7101a5d618  stp x8,xzr,[sp, #0x58]
7101a5d61c  strb w9,[sp, #0x7e]
7101a5d620  ldr x20,[x19]
7101a5d624  mov w0,#0x10
7101a5d628  mov w1,#0xc8
7101a5d62c  bl 0x710392e290
7101a5d630  mov x26,x0
7101a5d634  cbnz x0,0x7101a5d680
7101a5d638  adrp x8,0x7105332000
7101a5d63c  ldr x0,[x8, #0xf00]
7101a5d640  cbz x0,0x7101a5d67c
7101a5d644  mov w8,#0xc8
7101a5d648  stur wzr,[x29, #-0xd0]
7101a5d64c  sub x1,x29,#0xd0
7101a5d650  str x8,[sp, #0xa0]
7101a5d654  ldr x8,[x0]
7101a5d658  ldr x8,[x8, #0x30]
7101a5d65c  add x2,sp,#0xa0
7101a5d660  blr x8
7101a5d664  tbz w0,#0x0,0x7101a5d67c
7101a5d668  mov w0,#0x10
7101a5d66c  mov w1,#0xc8
7101a5d670  bl 0x710392e290
7101a5d674  mov x26,x0
7101a5d678  cbnz x0,0x7101a5d680
7101a5d67c  mov x26,xzr
7101a5d680  add x0,x26,#0x10
7101a5d684  stp x20,xzr,[x26]
7101a5d688  bl 0x7103776290
7101a5d68c  add x0,x26,#0x20
7101a5d690  bl 0x7103776290
7101a5d694  add x0,x26,#0x30
7101a5d698  bl 0x7103776290
7101a5d69c  mov w0,#0x10
7101a5d6a0  mov w1,#0x20
7101a5d6a4  str x21,[x26, #0x40]
7101a5d6a8  bl 0x710392e290
7101a5d6ac  cbnz x0,0x7101a5d6f4
7101a5d6b0  adrp x8,0x7105332000
7101a5d6b4  ldr x0,[x8, #0xf00]
7101a5d6b8  cbz x0,0x7101a5d6f0
7101a5d6bc  mov w8,#0x20
7101a5d6c0  stur wzr,[x29, #-0xd0]
7101a5d6c4  sub x1,x29,#0xd0
7101a5d6c8  str x8,[sp, #0xa0]
7101a5d6cc  ldr x8,[x0]
7101a5d6d0  ldr x8,[x8, #0x30]
7101a5d6d4  add x2,sp,#0xa0
7101a5d6d8  blr x8
7101a5d6dc  tbz w0,#0x0,0x7101a5d6f0
7101a5d6e0  mov w0,#0x10
7101a5d6e4  mov w1,#0x20
7101a5d6e8  bl 0x710392e290
7101a5d6ec  cbnz x0,0x7101a5d6f4
7101a5d6f0  mov x0,xzr
7101a5d6f4  stp xzr,xzr,[x0, #0x10]
7101a5d6f8  mov w1,#0x20
7101a5d6fc  stp xzr,xzr,[x0]
7101a5d700  stp x0,x21,[x26, #0x48]
7101a5d704  mov w0,#0x10
7101a5d708  bl 0x710392e290
7101a5d70c  cbnz x0,0x7101a5d754
7101a5d710  adrp x8,0x7105332000
7101a5d714  ldr x0,[x8, #0xf00]
7101a5d718  cbz x0,0x7101a5d750
7101a5d71c  mov w8,#0x20
7101a5d720  stur wzr,[x29, #-0xd0]
7101a5d724  sub x1,x29,#0xd0
7101a5d728  str x8,[sp, #0xa0]
7101a5d72c  ldr x8,[x0]
7101a5d730  ldr x8,[x8, #0x30]
7101a5d734  add x2,sp,#0xa0
7101a5d738  blr x8
7101a5d73c  tbz w0,#0x0,0x7101a5d750
7101a5d740  mov w0,#0x10
7101a5d744  mov w1,#0x20
7101a5d748  bl 0x710392e290
7101a5d74c  cbnz x0,0x7101a5d754
7101a5d750  mov x0,xzr
7101a5d754  stp xzr,xzr,[x0, #0x10]
7101a5d758  mov w1,#0x20
7101a5d75c  stp xzr,xzr,[x0]
7101a5d760  stp x0,x21,[x26, #0x58]
7101a5d764  mov w0,#0x10
7101a5d768  bl 0x710392e290
7101a5d76c  cbnz x0,0x7101a5d7b4
7101a5d770  adrp x8,0x7105332000
7101a5d774  ldr x0,[x8, #0xf00]
7101a5d778  cbz x0,0x7101a5d7b0
7101a5d77c  mov w8,#0x20
7101a5d780  stur wzr,[x29, #-0xd0]
7101a5d784  sub x1,x29,#0xd0
7101a5d788  str x8,[sp, #0xa0]
7101a5d78c  ldr x8,[x0]
7101a5d790  ldr x8,[x8, #0x30]
7101a5d794  add x2,sp,#0xa0
7101a5d798  blr x8
7101a5d79c  tbz w0,#0x0,0x7101a5d7b0
7101a5d7a0  mov w0,#0x10
7101a5d7a4  mov w1,#0x20
7101a5d7a8  bl 0x710392e290
7101a5d7ac  cbnz x0,0x7101a5d7b4
7101a5d7b0  mov x0,xzr
7101a5d7b4  add x8,x26,#0x70
7101a5d7b8  stp xzr,xzr,[x0, #0x10]
7101a5d7bc  stp xzr,xzr,[x0]
7101a5d7c0  str x0,[x26, #0x68]
7101a5d7c4  mov x0,x8
7101a5d7c8  bl 0x7103776290
7101a5d7cc  add x0,x26,#0x80
7101a5d7d0  bl 0x7103776290
7101a5d7d4  add x0,x26,#0x90
7101a5d7d8  bl 0x7103776290
7101a5d7dc  orr x8,xzr,#0x300000000
7101a5d7e0  stp xzr,x8,[x26, #0xa0]
7101a5d7e4  str w27,[x26, #0xb0]
7101a5d7e8  stur xzr,[x26, #0xba]
7101a5d7ec  stur xzr,[x26, #0xb4]
7101a5d7f0  ldr x20,[sp, #0x60]
7101a5d7f4  str x26,[sp, #0x60]
7101a5d7f8  cbz x20,0x7101a5d928
7101a5d7fc  ldr x0,[x20, #0xa0]
7101a5d800  str xzr,[x20, #0xa0]
7101a5d804  cbz x0,0x7101a5d814
7101a5d808  ldr x8,[x0]
7101a5d80c  ldr x8,[x8, #0x8]
7101a5d810  blr x8
7101a5d814  ldr x23,[x20, #0x98]
7101a5d818  stp x28,xzr,[x20, #0x90]
7101a5d81c  cbz x23,0x7101a5d838
7101a5d820  ldr x0,[x23, #0x18]
7101a5d824  stp x21,xzr,[x23, #0x10]
7101a5d828  cbz x0,0x7101a5d830
7101a5d82c  bl 0x710392eb40
7101a5d830  mov x0,x23
7101a5d834  bl 0x710392eb40
7101a5d838  ldr x23,[x20, #0x88]
7101a5d83c  stp x28,xzr,[x20, #0x80]
7101a5d840  cbz x23,0x7101a5d85c
7101a5d844  ldr x0,[x23, #0x18]
7101a5d848  stp x21,xzr,[x23, #0x10]
7101a5d84c  cbz x0,0x7101a5d854
7101a5d850  bl 0x710392eb40
7101a5d854  mov x0,x23
7101a5d858  bl 0x710392eb40
7101a5d85c  ldr x23,[x20, #0x78]
7101a5d860  stp x28,xzr,[x20, #0x70]
7101a5d864  cbz x23,0x7101a5d880
7101a5d868  ldr x0,[x23, #0x18]
7101a5d86c  stp x21,xzr,[x23, #0x10]
7101a5d870  cbz x0,0x7101a5d878
7101a5d874  bl 0x710392eb40
7101a5d878  mov x0,x23
7101a5d87c  bl 0x710392eb40
7101a5d880  ldr x0,[x20, #0x68]
7101a5d884  stp x21,xzr,[x20, #0x60]
7101a5d888  cbz x0,0x7101a5d890
7101a5d88c  bl 0x710392eb40
7101a5d890  ldr x0,[x20, #0x58]
7101a5d894  stp x21,xzr,[x20, #0x50]
7101a5d898  cbz x0,0x7101a5d8a0
7101a5d89c  bl 0x710392eb40
7101a5d8a0  ldr x0,[x20, #0x48]
7101a5d8a4  stp x21,xzr,[x20, #0x40]
7101a5d8a8  cbz x0,0x7101a5d8b0
7101a5d8ac  bl 0x710392eb40
7101a5d8b0  ldr x23,[x20, #0x38]
7101a5d8b4  stp x28,xzr,[x20, #0x30]
7101a5d8b8  cbz x23,0x7101a5d8d4
7101a5d8bc  ldr x0,[x23, #0x18]
7101a5d8c0  stp x21,xzr,[x23, #0x10]
7101a5d8c4  cbz x0,0x7101a5d8cc
7101a5d8c8  bl 0x710392eb40
7101a5d8cc  mov x0,x23
7101a5d8d0  bl 0x710392eb40
7101a5d8d4  ldr x23,[x20, #0x28]
7101a5d8d8  stp x28,xzr,[x20, #0x20]
7101a5d8dc  cbz x23,0x7101a5d8f8
7101a5d8e0  ldr x0,[x23, #0x18]
7101a5d8e4  stp x21,xzr,[x23, #0x10]
7101a5d8e8  cbz x0,0x7101a5d8f0
7101a5d8ec  bl 0x710392eb40
7101a5d8f0  mov x0,x23
7101a5d8f4  bl 0x710392eb40
7101a5d8f8  ldr x23,[x20, #0x18]
7101a5d8fc  stp x28,xzr,[x20, #0x10]
7101a5d900  cbz x23,0x7101a5d91c
7101a5d904  ldr x0,[x23, #0x18]
7101a5d908  stp x21,xzr,[x23, #0x10]
7101a5d90c  cbz x0,0x7101a5d914
7101a5d910  bl 0x710392eb40
7101a5d914  mov x0,x23
7101a5d918  bl 0x710392eb40
7101a5d91c  mov x0,x20
7101a5d920  bl 0x710392eb40
7101a5d924  ldr x26,[sp, #0x60]
7101a5d928  ldr w2,[sp, #0x68]
7101a5d92c  add w8,w2,#0x3
7101a5d930  cmp w2,#0x0
7101a5d934  csel w8,w8,w2,lt
7101a5d938  asr w8,w8,#0x2
7101a5d93c  stp w2,w8,[x26, #0x8]
7101a5d940  ldrb w8,[sp, #0x7f]
7101a5d944  ldr x0,[sp, #0x40]
7101a5d948  strb w8,[x26, #0xbf]
7101a5d94c  add x8,sp,#0xa0
7101a5d950  adrp x1,0x710435a000
7101a5d954  add x1,x1,#0xfe9
7101a5d958  bl 0x7103776640
7101a5d95c  add x23,x26,#0x10
7101a5d960  cmp x23,x22
7101a5d964  b.eq 0x7101a5d994
7101a5d968  ldr x8,[sp, #0xa8]
7101a5d96c  str xzr,[sp, #0xa8]
7101a5d970  ldr x20,[x26, #0x18]
7101a5d974  str x8,[x26, #0x18]
7101a5d978  cbz x20,0x7101a5d994
7101a5d97c  ldr x0,[x20, #0x18]
7101a5d980  stp x21,xzr,[x20, #0x10]
7101a5d984  cbz x0,0x7101a5d98c
7101a5d988  bl 0x710392eb40
7101a5d98c  mov x0,x20
7101a5d990  bl 0x710392eb40
7101a5d994  ldr x20,[sp, #0xa8]
7101a5d998  stp x28,xzr,[sp, #0xa0]
7101a5d99c  cbz x20,0x7101a5d9b8
7101a5d9a0  ldr x0,[x20, #0x18]
7101a5d9a4  stp x21,xzr,[x20, #0x10]
7101a5d9a8  cbz x0,0x7101a5d9b0
7101a5d9ac  bl 0x710392eb40
7101a5d9b0  mov x0,x20
7101a5d9b4  bl 0x710392eb40
7101a5d9b8  ldr x0,[x26, #0x18]
7101a5d9bc  ldr x8,[x0, #0x8]
7101a5d9c0  cbz x8,0x7101a5d9e4
7101a5d9c4  ldr x8,[x8, #0x18]
7101a5d9c8  cbz x8,0x7101a5d9e4
7101a5d9cc  ldrb w10,[x8, #0x58]
7101a5d9d0  ldrb w9,[x26, #0xbf]
7101a5d9d4  and w10,w10,#0xfe
7101a5d9d8  orr w9,w10,w9
7101a5d9dc  strb w9,[x8, #0x58]
7101a5d9e0  ldr x0,[x26, #0x18]
7101a5d9e4  mov v0.16B,v8.16B
7101a5d9e8  adrp x1,0x710435b000
7101a5d9ec  add x1,x1,#0xe3c
7101a5d9f0  bl 0x7103778300
7101a5d9f4  ldr x0,[x26, #0x18]
7101a5d9f8  mov v0.16B,v8.16B
7101a5d9fc  adrp x1,0x71042e6000
7101a5da00  add x1,x1,#0xb72
7101a5da04  bl 0x7103778300
7101a5da08  ldr x0,[x26, #0x18]
7101a5da0c  mov v0.16B,v8.16B
7101a5da10  adrp x1,0x7104291000
7101a5da14  add x1,x1,#0x651
7101a5da18  bl 0x7103778300
7101a5da1c  ldrb w8,[sp, #0x7c]
7101a5da20  strb w8,[x26, #0xbc]
7101a5da24  ldrb w8,[sp, #0x7d]
7101a5da28  strb w8,[x26, #0xbd]
7101a5da2c  ldrb w8,[sp, #0x7e]
7101a5da30  strb w8,[x26, #0xbe]
7101a5da34  add x8,sp,#0xa0
7101a5da38  mov x0,x23
7101a5da3c  adrp x1,0x7104339000
7101a5da40  add x1,x1,#0xc3c
7101a5da44  bl 0x7103776640
7101a5da48  add x20,x26,#0x20
7101a5da4c  cmp x20,x22
7101a5da50  b.eq 0x7101a5da80
7101a5da54  ldr x8,[sp, #0xa8]
7101a5da58  str xzr,[sp, #0xa8]
7101a5da5c  ldr x28,[x26, #0x28]
7101a5da60  str x8,[x26, #0x28]
7101a5da64  cbz x28,0x7101a5da80
7101a5da68  ldr x0,[x28, #0x18]
7101a5da6c  stp x21,xzr,[x28, #0x10]
7101a5da70  cbz x0,0x7101a5da78
7101a5da74  bl 0x710392eb40
7101a5da78  mov x0,x28
7101a5da7c  bl 0x710392eb40
7101a5da80  ldr x28,[sp, #0xa8]
7101a5da84  adrp x8,0x710523d000
7101a5da88  add x8,x8,#0x988
7101a5da8c  stp x8,xzr,[sp, #0xa0]
7101a5da90  cbz x28,0x7101a5daac
7101a5da94  ldr x0,[x28, #0x18]
7101a5da98  stp x21,xzr,[x28, #0x10]
7101a5da9c  cbz x0,0x7101a5daa4
7101a5daa0  bl 0x710392eb40
7101a5daa4  mov x0,x28
7101a5daa8  bl 0x710392eb40
7101a5daac  add x8,sp,#0xa0
7101a5dab0  mov w1,#0x1
7101a5dab4  adrp x0,0x7104410000
7101a5dab8  add x0,x0,#0xef8
7101a5dabc  bl 0x71003a4ca0
7101a5dac0  ldr x0,[x26, #0x28]
7101a5dac4  ldr x1,[sp, #0x50]
7101a5dac8  mov v0.16B,v8.16B
7101a5dacc  bl 0x7103778300
7101a5dad0  add x8,sp,#0xa0
7101a5dad4  mov x0,x20
7101a5dad8  adrp x1,0x710437a000
7101a5dadc  add x1,x1,#0xd66
7101a5dae0  bl 0x7103776910
7101a5dae4  ldr w8,[x26, #0x8]
7101a5dae8  add w2,w8,#0x1
7101a5daec  add x0,sp,#0xa0
7101a5daf0  mov w1,#0x1
7101a5daf4  bl 0x710377a310
7101a5daf8  ldr x0,[sp, #0xa8]
7101a5dafc  stp x21,xzr,[sp, #0xa0]
7101a5db00  cbz x0,0x7101a5db08
7101a5db04  bl 0x710392eb40
7101a5db08  add x8,sp,#0xa0
7101a5db0c  mov x0,x20
7101a5db10  adrp x1,0x710436b000
7101a5db14  add x1,x1,#0xd0b
7101a5db18  bl 0x7103776910
7101a5db1c  ldr w8,[x26, #0x8]
7101a5db20  add w2,w8,#0x1
7101a5db24  add x0,sp,#0xa0
7101a5db28  mov w1,#0x1
7101a5db2c  bl 0x710377a310
7101a5db30  ldr x0,[sp, #0xa8]
7101a5db34  stp x21,xzr,[sp, #0xa0]
7101a5db38  cbz x0,0x7101a5db40
7101a5db3c  bl 0x710392eb40
7101a5db40  add x8,sp,#0xa0
7101a5db44  mov x0,x23
7101a5db48  adrp x1,0x710435b000
7101a5db4c  add x1,x1,#0xfb0
7101a5db50  bl 0x7103776640
7101a5db54  add x20,x26,#0x30
7101a5db58  cmp x20,x22
7101a5db5c  b.eq 0x7101a5db8c
7101a5db60  ldr x8,[sp, #0xa8]
7101a5db64  str xzr,[sp, #0xa8]
7101a5db68  ldr x28,[x26, #0x38]
7101a5db6c  str x8,[x26, #0x38]
7101a5db70  cbz x28,0x7101a5db8c
7101a5db74  ldr x0,[x28, #0x18]
7101a5db78  stp x21,xzr,[x28, #0x10]
7101a5db7c  cbz x0,0x7101a5db84
7101a5db80  bl 0x710392eb40
7101a5db84  mov x0,x28
7101a5db88  bl 0x710392eb40
7101a5db8c  ldr x28,[sp, #0xa8]
7101a5db90  adrp x8,0x710523d000
7101a5db94  add x8,x8,#0x988
7101a5db98  stp x8,xzr,[sp, #0xa0]
7101a5db9c  cbz x28,0x7101a5dbb8
7101a5dba0  ldr x0,[x28, #0x18]
7101a5dba4  stp x21,xzr,[x28, #0x10]
7101a5dba8  cbz x0,0x7101a5dbb0
7101a5dbac  bl 0x710392eb40
7101a5dbb0  mov x0,x28
7101a5dbb4  bl 0x710392eb40
7101a5dbb8  add x8,sp,#0xa0
7101a5dbbc  mov w1,#0x1
7101a5dbc0  adrp x0,0x7104410000
7101a5dbc4  add x0,x0,#0xef8
7101a5dbc8  bl 0x71003a4ca0
7101a5dbcc  ldr x0,[x26, #0x38]
7101a5dbd0  ldr x1,[sp, #0x50]
7101a5dbd4  mov v0.16B,v8.16B
7101a5dbd8  bl 0x7103778300
7101a5dbdc  orr w1,wzr,#0x3
7101a5dbe0  mov x0,x26
7101a5dbe4  bl 0x7101a587e0
7101a5dbe8  add x8,sp,#0xa0
7101a5dbec  mov x0,x20
7101a5dbf0  adrp x1,0x71043cf000
7101a5dbf4  add x1,x1,#0xca4
7101a5dbf8  bl 0x7103776910
7101a5dbfc  add x8,x26,#0x40
7101a5dc00  cmp x8,x22
7101a5dc04  b.eq 0x7101a5dc20
7101a5dc08  ldr x8,[sp, #0xa8]
7101a5dc0c  str xzr,[sp, #0xa8]
7101a5dc10  ldr x0,[x26, #0x48]
7101a5dc14  str x8,[x26, #0x48]
7101a5dc18  cbz x0,0x7101a5dc20
7101a5dc1c  bl 0x710392eb40
7101a5dc20  ldr x0,[sp, #0xa8]
7101a5dc24  adrp x28,0x710523d000
7101a5dc28  add x28,x28,#0x988
7101a5dc2c  stp x21,xzr,[sp, #0xa0]
7101a5dc30  cbz x0,0x7101a5dc38
7101a5dc34  bl 0x710392eb40
7101a5dc38  add x8,sp,#0xa0
7101a5dc3c  mov x0,x20
7101a5dc40  adrp x1,0x710438d000
7101a5dc44  add x1,x1,#0x369
7101a5dc48  bl 0x7103776910
7101a5dc4c  add x8,x26,#0x50
7101a5dc50  cmp x8,x22
7101a5dc54  b.eq 0x7101a5dc70
7101a5dc58  ldr x8,[sp, #0xa8]
7101a5dc5c  str xzr,[sp, #0xa8]
7101a5dc60  ldr x0,[x26, #0x58]
7101a5dc64  str x8,[x26, #0x58]
7101a5dc68  cbz x0,0x7101a5dc70
7101a5dc6c  bl 0x710392eb40
7101a5dc70  ldr x0,[sp, #0xa8]
7101a5dc74  stp x21,xzr,[sp, #0xa0]
7101a5dc78  cbz x0,0x7101a5dc80
7101a5dc7c  bl 0x710392eb40
7101a5dc80  add x8,sp,#0xa0
7101a5dc84  mov x0,x20
7101a5dc88  adrp x1,0x710438d000
7101a5dc8c  add x1,x1,#0x369
7101a5dc90  bl 0x7103776910
7101a5dc94  add x8,x26,#0x60
7101a5dc98  cmp x8,x22
7101a5dc9c  b.eq 0x7101a5dcb8
7101a5dca0  ldr x8,[sp, #0xa8]
7101a5dca4  str xzr,[sp, #0xa8]
7101a5dca8  ldr x0,[x26, #0x68]
7101a5dcac  str x8,[x26, #0x68]
7101a5dcb0  cbz x0,0x7101a5dcb8
7101a5dcb4  bl 0x710392eb40
7101a5dcb8  ldr x0,[sp, #0xa8]
7101a5dcbc  stp x21,xzr,[sp, #0xa0]
7101a5dcc0  cbz x0,0x7101a5dcc8
7101a5dcc4  bl 0x710392eb40
7101a5dcc8  add x8,sp,#0xa0
7101a5dccc  mov x0,x23
7101a5dcd0  adrp x1,0x7104454000
7101a5dcd4  add x1,x1,#0x50c
7101a5dcd8  bl 0x7103776640
7101a5dcdc  add x8,x26,#0x70
7101a5dce0  cmp x8,x22
7101a5dce4  b.eq 0x7101a5dd14
7101a5dce8  ldr x8,[sp, #0xa8]
7101a5dcec  str xzr,[sp, #0xa8]
7101a5dcf0  ldr x20,[x26, #0x78]
7101a5dcf4  str x8,[x26, #0x78]
7101a5dcf8  cbz x20,0x7101a5dd14
7101a5dcfc  ldr x0,[x20, #0x18]
7101a5dd00  stp x21,xzr,[x20, #0x10]
7101a5dd04  cbz x0,0x7101a5dd0c
7101a5dd08  bl 0x710392eb40
7101a5dd0c  mov x0,x20
7101a5dd10  bl 0x710392eb40
7101a5dd14  ldr x20,[sp, #0xa8]
7101a5dd18  stp x28,xzr,[sp, #0xa0]
7101a5dd1c  cbz x20,0x7101a5dd38
7101a5dd20  ldr x0,[x20, #0x18]
7101a5dd24  stp x21,xzr,[x20, #0x10]
7101a5dd28  cbz x0,0x7101a5dd30
7101a5dd2c  bl 0x710392eb40
7101a5dd30  mov x0,x20
7101a5dd34  bl 0x710392eb40
7101a5dd38  ldr x0,[x26, #0x78]
7101a5dd3c  mov v0.16B,v8.16B
7101a5dd40  adrp x1,0x710432a000
7101a5dd44  add x1,x1,#0x22d
7101a5dd48  bl 0x7103778300
7101a5dd4c  sub x8,x29,#0xd0
7101a5dd50  mov w1,#0x1
7101a5dd54  adrp x0,0x7104410000
7101a5dd58  add x0,x0,#0xef8
7101a5dd5c  bl 0x71003a4ca0
7101a5dd60  add x8,sp,#0xa0
7101a5dd64  mov x0,x23
7101a5dd68  adrp x1,0x71043cf000
7101a5dd6c  add x1,x1,#0x4e9
7101a5dd70  bl 0x7103776640
7101a5dd74  add x8,x26,#0x80
7101a5dd78  cmp x8,x22
7101a5dd7c  b.eq 0x7101a5ddac
7101a5dd80  ldr x8,[sp, #0xa8]
7101a5dd84  str xzr,[sp, #0xa8]
7101a5dd88  ldr x20,[x26, #0x88]
7101a5dd8c  str x8,[x26, #0x88]
7101a5dd90  cbz x20,0x7101a5ddac
7101a5dd94  ldr x0,[x20, #0x18]
7101a5dd98  stp x21,xzr,[x20, #0x10]
7101a5dd9c  cbz x0,0x7101a5dda4
7101a5dda0  bl 0x710392eb40
7101a5dda4  mov x0,x20
7101a5dda8  bl 0x710392eb40
7101a5ddac  ldr x20,[sp, #0xa8]
7101a5ddb0  stp x28,xzr,[sp, #0xa0]
7101a5ddb4  cbz x20,0x7101a5ddd0
7101a5ddb8  ldr x0,[x20, #0x18]
7101a5ddbc  stp x21,xzr,[x20, #0x10]
7101a5ddc0  cbz x0,0x7101a5ddc8
7101a5ddc4  bl 0x710392eb40
7101a5ddc8  mov x0,x20
7101a5ddcc  bl 0x710392eb40
7101a5ddd0  ldr x0,[x26, #0x88]
7101a5ddd4  ldr x1,[sp, #0x48]
7101a5ddd8  mov v0.16B,v8.16B
7101a5dddc  bl 0x7103778300
7101a5dde0  ldr x0,[x26, #0x88]
7101a5dde4  mov v0.16B,v8.16B
7101a5dde8  adrp x1,0x71043be000
7101a5ddec  add x1,x1,#0x6a5
7101a5ddf0  bl 0x7103778300
7101a5ddf4  add x8,sp,#0xa0
7101a5ddf8  mov x0,x23
7101a5ddfc  adrp x1,0x71042e7000
7101a5de00  add x1,x1,#0x1bb
7101a5de04  bl 0x7103776640
7101a5de08  add x8,x26,#0x90
7101a5de0c  cmp x8,x22
7101a5de10  b.eq 0x7101a5de40
7101a5de14  ldr x8,[sp, #0xa8]
7101a5de18  str xzr,[sp, #0xa8]
7101a5de1c  ldr x20,[x26, #0x98]
7101a5de20  str x8,[x26, #0x98]
7101a5de24  cbz x20,0x7101a5de40
7101a5de28  ldr x0,[x20, #0x18]
7101a5de2c  stp x21,xzr,[x20, #0x10]
7101a5de30  cbz x0,0x7101a5de38
7101a5de34  bl 0x710392eb40
7101a5de38  mov x0,x20
7101a5de3c  bl 0x710392eb40
7101a5de40  ldr x20,[sp, #0xa8]
7101a5de44  stp x28,xzr,[sp, #0xa0]
7101a5de48  cbz x20,0x7101a5de64
7101a5de4c  ldr x0,[x20, #0x18]
7101a5de50  stp x21,xzr,[x20, #0x10]
7101a5de54  cbz x0,0x7101a5de5c
7101a5de58  bl 0x710392eb40
7101a5de5c  mov x0,x20
7101a5de60  bl 0x710392eb40
7101a5de64  ldr x0,[x26, #0x98]
7101a5de68  ldr x1,[sp, #0x48]
7101a5de6c  mov v0.16B,v8.16B
7101a5de70  bl 0x7103778300
7101a5de74  ldrb w8,[sp, #0x7c]
7101a5de78  cmp w8,#0x2
7101a5de7c  b.ne 0x7101a5de90
7101a5de80  ldr x0,[x26, #0x98]
7101a5de84  adrp x1,0x710427e000
7101a5de88  add x1,x1,#0x6d1
7101a5de8c  b 0x7101a5dea8
7101a5de90  ldrb w8,[sp, #0x7d]
7101a5de94  cmp w8,#0x2
7101a5de98  b.ne 0x7101a5deb0
7101a5de9c  ldr x0,[x26, #0x98]
7101a5dea0  adrp x1,0x7104329000
7101a5dea4  add x1,x1,#0xfc1
7101a5dea8  mov v0.16B,v8.16B
7101a5deac  bl 0x7103778300
7101a5deb0  add x8,sp,#0xa0
7101a5deb4  mov x0,x23
7101a5deb8  adrp x1,0x710437c000
7101a5debc  add x1,x1,#0x35
7101a5dec0  mov x25,x27
7101a5dec4  bl 0x7103776910
7101a5dec8  ldr w8,[x26, #0x8]
7101a5decc  add w3,w8,#0x1
7101a5ded0  add x0,sp,#0xa0
7101a5ded4  mov w2,#0x1
7101a5ded8  adrp x1,0x71043bc000
7101a5dedc  add x1,x1,#0xd62
7101a5dee0  bl 0x710377a280
7101a5dee4  ldr x0,[sp, #0xa8]
7101a5dee8  stp x21,xzr,[sp, #0xa0]
7101a5deec  cbz x0,0x7101a5def4
7101a5def0  bl 0x710392eb40
7101a5def4  mov w8,#0x101
7101a5def8  strh w8,[sp, #0xa8]
7101a5defc  ldr x8,[sp, #0x38]
7101a5df00  str xzr,[sp, #0xa0]
7101a5df04  strh wzr,[x8, #0x4]
7101a5df08  str wzr,[x8]
7101a5df0c  mov w27,#0x1
7101a5df10  mov x8,#0x41f0000000000000
7101a5df14  add x0,sp,#0xa0
7101a5df18  str w27,[sp, #0xb0]
7101a5df1c  strh w27,[sp, #0xb4]
7101a5df20  strb w27,[sp, #0xb6]
7101a5df24  str xzr,[sp, #0xf0]
7101a5df28  str xzr,[sp, #0x120]
7101a5df2c  str xzr,[sp, #0x150]
7101a5df30  str xzr,[sp, #0x180]
7101a5df34  str xzr,[sp, #0x1b0]
7101a5df38  str wzr,[sp, #0x1c0]
7101a5df3c  str x8,[sp, #0xb8]
7101a5df40  str wzr,[sp, #0xc0]
7101a5df44  bl 0x710337df20
7101a5df48  add x20,x26,#0xa0
7101a5df4c  orr w8,wzr,#0x3
7101a5df50  add x3,sp,#0xa0
7101a5df54  mov x0,x20
7101a5df58  mov x1,x23
7101a5df5c  str w8,[sp, #0xa4]
7101a5df60  adrp x2,0x71043e0000
7101a5df64  add x2,x2,#0xa21
7101a5df68  strb wzr,[sp, #0xa9]
7101a5df6c  strb w27,[sp, #0xac]
7101a5df70  bl 0x7103770b30
7101a5df74  mov x0,x20
7101a5df78  mov w1,wzr
7101a5df7c  adrp x2,0x7104339000
7101a5df80  add x2,x2,#0xc3c
7101a5df84  bl 0x71037717d0
7101a5df88  mov w1,#0x1
7101a5df8c  mov x0,x20
7101a5df90  adrp x2,0x7104454000
7101a5df94  add x2,x2,#0x50c
7101a5df98  bl 0x71037717d0
7101a5df9c  mov w1,#0x2
7101a5dfa0  mov x0,x20
7101a5dfa4  adrp x2,0x710435b000
7101a5dfa8  add x2,x2,#0xfb0
7101a5dfac  bl 0x71037717d0
7101a5dfb0  orr w1,wzr,#0x3
7101a5dfb4  mov x0,x20
7101a5dfb8  adrp x2,0x71043cf000
7101a5dfbc  add x2,x2,#0x4e9
7101a5dfc0  bl 0x71037717d0
7101a5dfc4  mov w1,#0x4
7101a5dfc8  mov x0,x20
7101a5dfcc  adrp x2,0x71042e7000
7101a5dfd0  add x2,x2,#0x1bb
7101a5dfd4  bl 0x71037717d0
7101a5dfd8  ldr x0,[x26, #0xa0]
7101a5dfdc  ldr x8,[x0]
7101a5dfe0  ldrb w1,[x26, #0xbf]
7101a5dfe4  ldr x8,[x8, #0x60]
7101a5dfe8  blr x8
7101a5dfec  ldr x0,[x26, #0xa0]
7101a5dff0  ldr x8,[x0]
7101a5dff4  ldrb w1,[x26, #0xbf]
7101a5dff8  ldr x8,[x8, #0x70]
7101a5dffc  blr x8
7101a5e000  ldr x1,[x26, #0xa0]
7101a5e004  add x0,sp,#0x90
7101a5e008  mov w2,wzr
7101a5e00c  bl 0x7103771d60
7101a5e010  ldr x23,[sp, #0x98]
7101a5e014  ldr x0,[x23]
7101a5e018  cbz x0,0x7101a5e02c
7101a5e01c  ldr x8,[x0]
7101a5e020  ldr x8,[x8, #0x1b8]
7101a5e024  ldur x1,[x29, #-0x78]
7101a5e028  blr x8
7101a5e02c  adrp x8,0x710523d000
7101a5e030  add x8,x8,#0x9c8
7101a5e034  mov x27,x25
7101a5e038  stp x8,xzr,[sp, #0x90]
7101a5e03c  cbz x23,0x7101a5e048
7101a5e040  mov x0,x23
7101a5e044  bl 0x710392eb40
7101a5e048  ldr x1,[x20]
7101a5e04c  add x0,sp,#0x90
7101a5e050  mov w2,#0x1
7101a5e054  bl 0x7103771d60
7101a5e058  ldr x23,[sp, #0x98]
7101a5e05c  ldr x0,[x23]
7101a5e060  cbz x0,0x7101a5e074
7101a5e064  ldr x8,[x0]
7101a5e068  ldr x8,[x8, #0x1b8]
7101a5e06c  ldur x1,[x29, #-0x78]
7101a5e070  blr x8
7101a5e074  adrp x25,0x710523d000
7101a5e078  add x25,x25,#0x9c8
7101a5e07c  stp x25,xzr,[sp, #0x90]
7101a5e080  cbz x23,0x7101a5e08c
7101a5e084  mov x0,x23
7101a5e088  bl 0x710392eb40
7101a5e08c  ldr x1,[x20]
7101a5e090  add x0,sp,#0x90
7101a5e094  mov w2,#0x2
7101a5e098  bl 0x7103771d60
7101a5e09c  ldr x23,[sp, #0x98]
7101a5e0a0  ldr x0,[x23]
7101a5e0a4  cbz x0,0x7101a5e0b8
7101a5e0a8  ldr x8,[x0]
7101a5e0ac  ldr x8,[x8, #0x1b8]
7101a5e0b0  ldur x1,[x29, #-0x78]
7101a5e0b4  blr x8
7101a5e0b8  stp x25,xzr,[sp, #0x90]
7101a5e0bc  cbz x23,0x7101a5e0c8
7101a5e0c0  mov x0,x23
7101a5e0c4  bl 0x710392eb40
7101a5e0c8  ldr x1,[x20]
7101a5e0cc  add x0,sp,#0x90
7101a5e0d0  orr w2,wzr,#0x3
7101a5e0d4  bl 0x7103771d60
7101a5e0d8  ldr x23,[sp, #0x98]
7101a5e0dc  ldr x0,[x23]
7101a5e0e0  cbz x0,0x7101a5e0f4
7101a5e0e4  ldr x8,[x0]
7101a5e0e8  ldr x8,[x8, #0x1b8]
7101a5e0ec  ldur x1,[x29, #-0x78]
7101a5e0f0  blr x8
7101a5e0f4  stp x25,xzr,[sp, #0x90]
7101a5e0f8  cbz x23,0x7101a5e104
7101a5e0fc  mov x0,x23
7101a5e100  bl 0x710392eb40
7101a5e104  ldr x1,[x20]
7101a5e108  add x0,sp,#0x90
7101a5e10c  mov w2,#0x4
7101a5e110  bl 0x7103771d60
7101a5e114  ldr x23,[sp, #0x98]
7101a5e118  ldr x0,[x23]
7101a5e11c  cbz x0,0x7101a5e130
7101a5e120  ldr x8,[x0]
7101a5e124  ldr x8,[x8, #0x1b8]
7101a5e128  ldur x1,[x29, #-0x78]
7101a5e12c  blr x8
7101a5e130  stp x25,xzr,[sp, #0x90]
7101a5e134  cbz x23,0x7101a5e140
7101a5e138  mov x0,x23
7101a5e13c  bl 0x710392eb40
7101a5e140  mov x8,#0xc028
7101a5e144  movk x8,#0x1ca6, LSL #16
7101a5e148  movk x8,#0x15, LSL #32
7101a5e14c  str x8,[sp, #0x90]
7101a5e150  ldr x0,[x20]
7101a5e154  add x2,sp,#0x90
7101a5e158  mov w1,wzr
7101a5e15c  bl 0x7103772070
7101a5e160  adrp x8,0x710532f000
7101a5e164  ldr x8,[x8, #0x8d0]
7101a5e168  ldr x9,[x8, #0x8]
7101a5e16c  ldp x8,x9,[x9, #0x40]
7101a5e170  sub x9,x9,x8
7101a5e174  asr x9,x9,#0x3
7101a5e178  cmp x9,#0x2
7101a5e17c  b.cc 0x7101a5e188
7101a5e180  ldr x8,[x8, #0x8]
7101a5e184  b 0x7101a5e18c
7101a5e188  mov x8,xzr
7101a5e18c  str x8,[sp, #0x90]
7101a5e190  ldr x0,[x20]
7101a5e194  mov w1,#0x1
7101a5e198  add x2,sp,#0x90
7101a5e19c  bl 0x7103772070
7101a5e1a0  ldr x8,[x20]
7101a5e1a4  ldr x9,[x8, #0x1b8]
7101a5e1a8  cbz x9,0x7101a5e39c
7101a5e1ac  add x8,x8,#0x1b8
7101a5e1b0  mov x10,x8
7101a5e1b4  mov x11,x9
7101a5e1b8  ldr w12,[x11, #0x20]
7101a5e1bc  cmp w12,#0x0
7101a5e1c0  cset w12,lt
7101a5e1c4  csel x10,x10,x11,lt
7101a5e1c8  ldr x11,[x11, w12, UXTW #0x3]
7101a5e1cc  cbnz x11,0x7101a5e1b8
7101a5e1d0  cmp x10,x8
7101a5e1d4  b.eq 0x7101a5e224
7101a5e1d8  ldr w11,[x10, #0x20]
7101a5e1dc  cmp w11,#0x0
7101a5e1e0  b.gt 0x7101a5e224
7101a5e1e4  ldr x23,[x10, #0x28]
7101a5e1e8  cbz x23,0x7101a5e224
7101a5e1ec  ldr x8,[x23]
7101a5e1f0  ldr x8,[x8, #0x1f8]
7101a5e1f4  mov w1,#0x1
7101a5e1f8  mov x0,x23
7101a5e1fc  blr x8
7101a5e200  ldr x8,[x23]
7101a5e204  ldr x8,[x8, #0x388]
7101a5e208  mov x0,x23
7101a5e20c  mov w1,wzr
7101a5e210  mov w2,wzr
7101a5e214  blr x8
7101a5e218  ldr x9,[x20]
7101a5e21c  add x8,x9,#0x1b8
7101a5e220  ldr x9,[x9, #0x1b8]
7101a5e224  cbz x9,0x7101a5e39c
7101a5e228  mov x10,x8
7101a5e22c  mov x11,x9
7101a5e230  ldr w12,[x11, #0x20]
7101a5e234  cmp w12,#0x2
7101a5e238  cset w12,lt
7101a5e23c  csel x10,x10,x11,lt
7101a5e240  ldr x11,[x11, w12, UXTW #0x3]
7101a5e244  cbnz x11,0x7101a5e230
7101a5e248  cmp x10,x8
7101a5e24c  b.eq 0x7101a5e29c
7101a5e250  ldr w11,[x10, #0x20]
7101a5e254  cmp w11,#0x2
7101a5e258  b.gt 0x7101a5e29c
7101a5e25c  ldr x23,[x10, #0x28]
7101a5e260  cbz x23,0x7101a5e29c
7101a5e264  ldr x8,[x23]
7101a5e268  ldr x8,[x8, #0x1f8]
7101a5e26c  mov x0,x23
7101a5e270  mov w1,wzr
7101a5e274  blr x8
7101a5e278  ldr x8,[x23]
7101a5e27c  ldr x8,[x8, #0x388]
7101a5e280  mov w1,#0x1
7101a5e284  mov x0,x23
7101a5e288  mov w2,wzr
7101a5e28c  blr x8
7101a5e290  ldr x9,[x20]
7101a5e294  add x8,x9,#0x1b8
7101a5e298  ldr x9,[x9, #0x1b8]
7101a5e29c  cbz x9,0x7101a5e39c
7101a5e2a0  ldrb w10,[x26, #0xbe]
7101a5e2a4  mov x11,x8
7101a5e2a8  mov x12,x9
7101a5e2ac  ldr w13,[x12, #0x20]
7101a5e2b0  cmp w13,#0x3
7101a5e2b4  cset w13,lt
7101a5e2b8  csel x11,x11,x12,lt
7101a5e2bc  ldr x12,[x12, w13, UXTW #0x3]
7101a5e2c0  cbnz x12,0x7101a5e2ac
7101a5e2c4  cmp x11,x8
7101a5e2c8  b.eq 0x7101a5e328
7101a5e2cc  ldr w12,[x11, #0x20]
7101a5e2d0  cmp w12,#0x3
7101a5e2d4  b.gt 0x7101a5e328
7101a5e2d8  ldr x23,[x11, #0x28]
7101a5e2dc  cbz x23,0x7101a5e328
7101a5e2e0  ldr x8,[x23]
7101a5e2e4  ldr x8,[x8, #0x1f8]
7101a5e2e8  cmp w10,#0x0
7101a5e2ec  cset w1,ne
7101a5e2f0  mov x0,x23
7101a5e2f4  cset w28,eq
7101a5e2f8  blr x8
7101a5e2fc  ldr x8,[x23]
7101a5e300  ldr x8,[x8, #0x388]
7101a5e304  mov x0,x23
7101a5e308  mov w1,w28
7101a5e30c  mov w2,wzr
7101a5e310  adrp x28,0x710523d000
7101a5e314  add x28,x28,#0x988
7101a5e318  blr x8
7101a5e31c  ldr x9,[x20]
7101a5e320  add x8,x9,#0x1b8
7101a5e324  ldr x9,[x9, #0x1b8]
7101a5e328  cbz x9,0x7101a5e39c
7101a5e32c  ldrb w10,[x26, #0xbd]
7101a5e330  mov x11,x8
7101a5e334  ldr w12,[x9, #0x20]
7101a5e338  cmp w12,#0x4
7101a5e33c  cset w12,lt
7101a5e340  csel x11,x11,x9,lt
7101a5e344  ldr x9,[x9, w12, UXTW #0x3]
7101a5e348  cbnz x9,0x7101a5e334
7101a5e34c  cmp x11,x8
7101a5e350  b.eq 0x7101a5e39c
7101a5e354  ldr w8,[x11, #0x20]
7101a5e358  cmp w8,#0x4
7101a5e35c  b.gt 0x7101a5e39c
7101a5e360  ldr x20,[x11, #0x28]
7101a5e364  cbz x20,0x7101a5e39c
7101a5e368  ldr x8,[x20]
7101a5e36c  ldr x8,[x8, #0x1f8]
7101a5e370  cmp w10,#0x2
7101a5e374  cset w1,eq
7101a5e378  mov x0,x20
7101a5e37c  cset w23,ne
7101a5e380  blr x8
7101a5e384  ldr x8,[x20]
7101a5e388  ldr x8,[x8, #0x388]
7101a5e38c  mov x0,x20
7101a5e390  mov w1,w23
7101a5e394  mov w2,wzr
7101a5e398  blr x8
7101a5e39c  strb wzr,[x26, #0xc1]
7101a5e3a0  ldr x0,[sp, #0x1b0]
7101a5e3a4  ldr x8,[sp, #0x30]
7101a5e3a8  cmp x8,x0
7101a5e3ac  b.eq 0x7101a5e3c0
7101a5e3b0  cbz x0,0x7101a5e3cc
7101a5e3b4  ldr x8,[x0]
7101a5e3b8  ldr x8,[x8, #0x28]
7101a5e3bc  b 0x7101a5e3c8
7101a5e3c0  ldr x8,[x0]
7101a5e3c4  ldr x8,[x8, #0x20]
7101a5e3c8  blr x8
7101a5e3cc  ldr x0,[sp, #0x180]
7101a5e3d0  ldr x8,[sp, #0x28]
7101a5e3d4  cmp x8,x0
7101a5e3d8  b.eq 0x7101a5e3ec
7101a5e3dc  cbz x0,0x7101a5e3f8
7101a5e3e0  ldr x8,[x0]
7101a5e3e4  ldr x8,[x8, #0x28]
7101a5e3e8  b 0x7101a5e3f4
7101a5e3ec  ldr x8,[x0]
7101a5e3f0  ldr x8,[x8, #0x20]
7101a5e3f4  blr x8
7101a5e3f8  ldr x0,[sp, #0x150]
7101a5e3fc  ldr x8,[sp, #0x20]
7101a5e400  cmp x8,x0
7101a5e404  b.eq 0x7101a5e418
7101a5e408  cbz x0,0x7101a5e424
7101a5e40c  ldr x8,[x0]
7101a5e410  ldr x8,[x8, #0x28]
7101a5e414  b 0x7101a5e420
7101a5e418  ldr x8,[x0]
7101a5e41c  ldr x8,[x8, #0x20]
7101a5e420  blr x8
7101a5e424  ldr x0,[sp, #0x120]
7101a5e428  ldr x8,[sp, #0x18]
7101a5e42c  cmp x8,x0
7101a5e430  b.eq 0x7101a5e444
7101a5e434  cbz x0,0x7101a5e450
7101a5e438  ldr x8,[x0]
7101a5e43c  ldr x8,[x8, #0x28]
7101a5e440  b 0x7101a5e44c
7101a5e444  ldr x8,[x0]
7101a5e448  ldr x8,[x8, #0x20]
7101a5e44c  blr x8
7101a5e450  ldr x0,[sp, #0xf0]
7101a5e454  ldr x8,[sp, #0x10]
7101a5e458  cmp x8,x0
7101a5e45c  b.eq 0x7101a5e470
7101a5e460  cbz x0,0x7101a5e47c
7101a5e464  ldr x8,[x0]
7101a5e468  ldr x8,[x8, #0x28]
7101a5e46c  b 0x7101a5e478
7101a5e470  ldr x8,[x0]
7101a5e474  ldr x8,[x8, #0x20]
7101a5e478  blr x8
7101a5e47c  ldrb w8,[sp, #0x7f]
7101a5e480  cbz w8,0x7101a5e5e0
7101a5e484  ldp x0,x8,[x19, #0xc8]
7101a5e488  cmp x0,x8
7101a5e48c  b.cs 0x7101a5e4a8
7101a5e490  add x1,sp,#0x58
7101a5e494  bl 0x7101a58b00
7101a5e498  ldr x8,[x19, #0xc8]
7101a5e49c  add x8,x8,#0x10
7101a5e4a0  str x8,[x19, #0xc8]
7101a5e4a4  b 0x7101a5e5e0
7101a5e4a8  ldr x9,[sp, #0x8]
7101a5e4ac  ldr x10,[x9]
7101a5e4b0  sub x9,x0,x10
7101a5e4b4  asr x23,x9,#0x4
7101a5e4b8  add x9,x23,#0x1
7101a5e4bc  lsr x11,x9,#0x3c
7101a5e4c0  cbnz x11,0x7101a5e884
7101a5e4c4  sub x8,x8,x10
7101a5e4c8  asr x10,x8,#0x4
7101a5e4cc  orr x11,xzr,#0x7fffffffffffffe
7101a5e4d0  cmp x10,x11
7101a5e4d4  b.hi 0x7101a5e4f4
7101a5e4d8  asr x8,x8,#0x3
7101a5e4dc  cmp x8,x9
7101a5e4e0  csel x26,x9,x8,cc
7101a5e4e4  cbz x26,0x7101a5e550
7101a5e4e8  lsr x8,x26,#0x3c
7101a5e4ec  cbz x8,0x7101a5e4f8
7101a5e4f0  b 0x7101a5e894
7101a5e4f4  orr x26,xzr,#0xfffffffffffffff
7101a5e4f8  lsl x8,x26,#0x4
7101a5e4fc  cmp x8,#0x0
7101a5e500  csinc x20,x8,xzr,ne
7101a5e504  mov w0,#0x10
7101a5e508  mov x1,x20
7101a5e50c  bl 0x710392e290
7101a5e510  cbnz x0,0x7101a5e554
7101a5e514  adrp x8,0x7105332000
7101a5e518  ldr x0,[x8, #0xf00]
7101a5e51c  cbz x0,0x7101a5e550
7101a5e520  stur wzr,[x29, #-0xd0]
7101a5e524  str x20,[sp, #0xa0]
7101a5e528  ldr x8,[x0]
7101a5e52c  ldr x8,[x8, #0x30]
7101a5e530  sub x1,x29,#0xd0
7101a5e534  add x2,sp,#0xa0
7101a5e538  blr x8
7101a5e53c  tbz w0,#0x0,0x7101a5e550
7101a5e540  mov w0,#0x10
7101a5e544  mov x1,x20
7101a5e548  bl 0x710392e290
7101a5e54c  cbnz x0,0x7101a5e554
7101a5e550  mov x0,xzr
7101a5e554  add x23,x0,x23, LSL #0x4
7101a5e558  add x28,x0,x26, LSL #0x4
7101a5e55c  add x1,sp,#0x58
7101a5e560  mov x0,x23
7101a5e564  bl 0x7101a58b00
7101a5e568  ldp x20,x26,[x19, #0xc0]
7101a5e56c  add x27,x23,#0x10
7101a5e570  cmp x26,x20
7101a5e574  b.eq 0x7101a5e59c
7101a5e578  sub x23,x23,#0x10
7101a5e57c  sub x26,x26,#0x10
7101a5e580  mov x0,x23
7101a5e584  mov x1,x26
7101a5e588  bl 0x7101a58b00
7101a5e58c  cmp x20,x26
7101a5e590  b.ne 0x7101a5e578
7101a5e594  ldp x26,x20,[x19, #0xc0]
7101a5e598  b 0x7101a5e5a0
7101a5e59c  mov x26,x20
7101a5e5a0  cmp x20,x26
7101a5e5a4  stp x23,x27,[x19, #0xc0]
7101a5e5a8  str x28,[x19, #0xd0]
7101a5e5ac  b.eq 0x7101a5e5c8
7101a5e5b0  ldr x8,[x20, #-0x10]!
7101a5e5b4  ldr x8,[x8]
7101a5e5b8  mov x0,x20
7101a5e5bc  blr x8
7101a5e5c0  cmp x26,x20
7101a5e5c4  b.ne 0x7101a5e5b0
7101a5e5c8  mov w27,#0xffffffff
7101a5e5cc  adrp x28,0x710523d000
7101a5e5d0  add x28,x28,#0x988
7101a5e5d4  cbz x26,0x7101a5e5e0
7101a5e5d8  mov x0,x26
7101a5e5dc  bl 0x710392eb40
7101a5e5e0  add x0,sp,#0x58
7101a5e5e4  bl 0x7101a58930
7101a5e5e8  add w24,w24,#0x1
7101a5e5ec  cmp w24,#0x20
7101a5e5f0  b.ne 0x7101a5d5e0
7101a5e5f4  ldp x8,x9,[x19, #0xc0]
7101a5e5f8  cmp x9,x8
7101a5e5fc  str wzr,[x19, #0x4d8]
7101a5e600  b.eq 0x7101a5e898
7101a5e604  ldr x8,[x8, #0x8]
7101a5e608  ldr x0,[x8, #0x18]
7101a5e60c  fmov s0,0x3f800000
7101a5e610  adrp x1,0x7104412000
7101a5e614  add x1,x1,#0xfd0
7101a5e618  bl 0x7103778300
7101a5e61c  mov w8,#0x101
7101a5e620  strh w8,[sp, #0xa8]
7101a5e624  mov x8,#0x41f0000000000000
7101a5e628  mov w22,#0x1
7101a5e62c  str w22,[sp, #0xb0]
7101a5e630  strh w22,[sp, #0xb4]
7101a5e634  str x8,[sp, #0xb8]
7101a5e638  add x8,sp,#0xa0
7101a5e63c  add x0,sp,#0xa0
7101a5e640  str xzr,[sp, #0xa0]
7101a5e644  add x20,x8,#0xc0
7101a5e648  strh wzr,[sp, #0xae]
7101a5e64c  stur wzr,[sp, #0xaa]
7101a5e650  strb w22,[sp, #0xb6]
7101a5e654  str wzr,[sp, #0xc0]
7101a5e658  str xzr,[sp, #0xf0]
7101a5e65c  str xzr,[sp, #0x120]
7101a5e660  str xzr,[sp, #0x150]
7101a5e664  str xzr,[sp, #0x180]
7101a5e668  str xzr,[sp, #0x1b0]
7101a5e66c  str wzr,[sp, #0x1c0]
7101a5e670  bl 0x710337df20
7101a5e674  orr w8,wzr,#0x3
7101a5e678  str w8,[sp, #0xa4]
7101a5e67c  strb w22,[sp, #0xac]
7101a5e680  str w22,[sp, #0xc0]
7101a5e684  adrp x8,0x71050a8000
7101a5e688  add x8,x8,#0xf28
7101a5e68c  sub x22,x29,#0xd0
7101a5e690  sub x0,x29,#0xd0
7101a5e694  mov x1,x20
7101a5e698  strb wzr,[sp, #0xa9]
7101a5e69c  stur x8,[x29, #-0xd0]
7101a5e6a0  stur x22,[x29, #-0xb0]
7101a5e6a4  bl 0x7101989a30
7101a5e6a8  ldur x0,[x29, #-0xb0]
7101a5e6ac  cmp x22,x0
7101a5e6b0  b.eq 0x7101a5e6c4
7101a5e6b4  cbz x0,0x7101a5e6d0
7101a5e6b8  ldr x8,[x0]
7101a5e6bc  ldr x8,[x8, #0x28]
7101a5e6c0  b 0x7101a5e6cc
7101a5e6c4  ldr x8,[x0]
7101a5e6c8  ldr x8,[x8, #0x20]
7101a5e6cc  blr x8
7101a5e6d0  ldr x23,[sp]
7101a5e6d4  add x20,x19,#0x58
7101a5e6d8  adrp x2,0x7104307000
7101a5e6dc  add x2,x2,#0x72
7101a5e6e0  add x3,sp,#0xa0
7101a5e6e4  mov x0,x20
7101a5e6e8  add x22,sp,#0xa0
7101a5e6ec  mov x1,x23
7101a5e6f0  bl 0x7103770b30
7101a5e6f4  adrp x2,0x710425f000
7101a5e6f8  add x2,x2,#0xde2
7101a5e6fc  mov w1,#0x1
7101a5e700  mov x0,x20
7101a5e704  bl 0x71037717d0
7101a5e708  adrp x2,0x71042a3000
7101a5e70c  add x2,x2,#0x84e
7101a5e710  mov w1,#0x2
7101a5e714  mov x0,x20
7101a5e718  bl 0x71037717d0
7101a5e71c  add x20,x19,#0x60
7101a5e720  adrp x2,0x710424f000
7101a5e724  add x2,x2,#0xd71
7101a5e728  add x3,sp,#0xa0
7101a5e72c  mov x0,x20
7101a5e730  mov x1,x23
7101a5e734  bl 0x7103770b30
7101a5e738  adrp x2,0x710436b000
7101a5e73c  add x2,x2,#0xd26
7101a5e740  mov x0,x20
7101a5e744  mov w1,wzr
7101a5e748  bl 0x71037717d0
7101a5e74c  mov x0,x19
7101a5e750  bl 0x7101a59de0
7101a5e754  ldr x0,[sp, #0x1b0]
7101a5e758  add x8,x22,#0xf0
7101a5e75c  cmp x8,x0
7101a5e760  b.eq 0x7101a5e774
7101a5e764  cbz x0,0x7101a5e780
7101a5e768  ldr x8,[x0]
7101a5e76c  ldr x8,[x8, #0x28]
7101a5e770  b 0x7101a5e77c
7101a5e774  ldr x8,[x0]
7101a5e778  ldr x8,[x8, #0x20]
7101a5e77c  blr x8
7101a5e780  ldr x0,[sp, #0x180]
7101a5e784  add x8,sp,#0xa0
7101a5e788  add x8,x8,#0xc0
7101a5e78c  cmp x8,x0
7101a5e790  b.eq 0x7101a5e7a4
7101a5e794  cbz x0,0x7101a5e7b0
7101a5e798  ldr x8,[x0]
7101a5e79c  ldr x8,[x8, #0x28]
7101a5e7a0  b 0x7101a5e7ac
7101a5e7a4  ldr x8,[x0]
7101a5e7a8  ldr x8,[x8, #0x20]
7101a5e7ac  blr x8
7101a5e7b0  ldr x0,[sp, #0x150]
7101a5e7b4  add x8,sp,#0xa0
7101a5e7b8  add x8,x8,#0x90
7101a5e7bc  cmp x8,x0
7101a5e7c0  b.eq 0x7101a5e7d4
7101a5e7c4  cbz x0,0x7101a5e7e0
7101a5e7c8  ldr x8,[x0]
7101a5e7cc  ldr x8,[x8, #0x28]
7101a5e7d0  b 0x7101a5e7dc
7101a5e7d4  ldr x8,[x0]
7101a5e7d8  ldr x8,[x8, #0x20]
7101a5e7dc  blr x8
7101a5e7e0  ldr x0,[sp, #0x120]
7101a5e7e4  add x8,sp,#0xa0
7101a5e7e8  add x8,x8,#0x60
7101a5e7ec  cmp x8,x0
7101a5e7f0  b.eq 0x7101a5e804
7101a5e7f4  cbz x0,0x7101a5e810
7101a5e7f8  ldr x8,[x0]
7101a5e7fc  ldr x8,[x8, #0x28]
7101a5e800  b 0x7101a5e80c
7101a5e804  ldr x8,[x0]
7101a5e808  ldr x8,[x8, #0x20]
7101a5e80c  blr x8
7101a5e810  ldr x0,[sp, #0xf0]
7101a5e814  add x8,sp,#0xa0
7101a5e818  add x8,x8,#0x30
7101a5e81c  cmp x8,x0
7101a5e820  b.eq 0x7101a5e834
7101a5e824  cbz x0,0x7101a5e840
7101a5e828  ldr x8,[x0]
7101a5e82c  ldr x8,[x8, #0x28]
7101a5e830  b 0x7101a5e83c
7101a5e834  ldr x8,[x0]
7101a5e838  ldr x8,[x8, #0x20]
7101a5e83c  blr x8
7101a5e840  ldr x0,[sp, #0x88]
7101a5e844  stp x21,xzr,[sp, #0x80]
7101a5e848  cbz x0,0x7101a5e850
7101a5e84c  bl 0x710392eb40
7101a5e850  add sp,sp,#0x220
7101a5e854  ldp d9,d8,[sp, #0x20]
7101a5e858  ldp d11,d10,[sp, #0x10]
7101a5e85c  ldp x29,x30,[sp, #0x80]
7101a5e860  ldp x20,x19,[sp, #0x70]
7101a5e864  ldp x22,x21,[sp, #0x60]
7101a5e868  ldp x24,x23,[sp, #0x50]
7101a5e86c  ldp x26,x25,[sp, #0x40]
7101a5e870  ldp x28,x27,[sp, #0x30]
7101a5e874  ldr d12,[sp], #0x90
7101a5e878  ret
7101a5e87c  ldur x0,[x29, #-0x78]
7101a5e880  bl 0x71039c1330
7101a5e884  ldr x0,[sp, #0x8]
7101a5e888  bl 0x71039c0c00
7101a5e88c  ldur x0,[x29, #-0x78]
7101a5e890  bl 0x71039c0c00
7101a5e894  bl 0x71039c2650
7101a5e898  ldr x0,[sp, #0x8]
7101a5e89c  bl 0x71039c1330
