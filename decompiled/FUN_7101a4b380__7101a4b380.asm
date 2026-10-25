// addr:      7101a4b380
// offset:    0x1a4b380
// name:      FUN_7101a4b380
// mangled:   
// size:      9668

7101a4b380  str d8,[sp, #-0x70]!
7101a4b384  stp x28,x27,[sp, #0x10]
7101a4b388  stp x26,x25,[sp, #0x20]
7101a4b38c  stp x24,x23,[sp, #0x30]
7101a4b390  stp x22,x21,[sp, #0x40]
7101a4b394  stp x20,x19,[sp, #0x50]
7101a4b398  stp x29,x30,[sp, #0x60]
7101a4b39c  add x29,sp,#0x60
7101a4b3a0  sub sp,sp,#0x6d0
7101a4b3a4  mov x24,x1
7101a4b3a8  mov x26,x0
7101a4b3ac  mov w1,#0x430
7101a4b3b0  mov w0,#0x10
7101a4b3b4  mov x23,x4
7101a4b3b8  mov x25,x3
7101a4b3bc  mov x27,x2
7101a4b3c0  bl 0x710392e290
7101a4b3c4  mov x19,x0
7101a4b3c8  cbnz x0,0x7101a4b414
7101a4b3cc  adrp x8,0x7105332000
7101a4b3d0  ldr x0,[x8, #0xf00]
7101a4b3d4  cbz x0,0x7101a4b410
7101a4b3d8  mov w8,#0x430
7101a4b3dc  str wzr,[sp, #0x90]
7101a4b3e0  add x1,sp,#0x90
7101a4b3e4  str x8,[sp, #0x1c0]
7101a4b3e8  ldr x8,[x0]
7101a4b3ec  ldr x8,[x8, #0x30]
7101a4b3f0  add x2,sp,#0x1c0
7101a4b3f4  blr x8
7101a4b3f8  tbz w0,#0x0,0x7101a4b410
7101a4b3fc  mov w1,#0x430
7101a4b400  mov w0,#0x10
7101a4b404  bl 0x710392e290
7101a4b408  mov x19,x0
7101a4b40c  cbnz x0,0x7101a4b414
7101a4b410  mov x19,xzr
7101a4b414  mov x8,x19
7101a4b418  str x19,[x19]
7101a4b41c  add x0,x19,#0x28
7101a4b420  str xzr,[x8, #0x8]!
7101a4b424  str x8,[sp, #0x40]
7101a4b428  mov w8,#0xffffffff
7101a4b42c  mov w2,#0x10c
7101a4b430  mov w1,wzr
7101a4b434  str wzr,[x19, #0x134]
7101a4b438  str xzr,[x19, #0x10]
7101a4b43c  stp xzr,xzr,[x19, #0x18]
7101a4b440  str x8,[x19, #0x138]
7101a4b444  str w8,[x19, #0x140]
7101a4b448  strb wzr,[x19, #0x144]
7101a4b44c  bl 0x71039c02a0
7101a4b450  orr w8,wzr,#0xff
7101a4b454  mov w21,#0x1
7101a4b458  add x0,x19,#0x278
7101a4b45c  stp x24,xzr,[x19, #0x148]
7101a4b460  str xzr,[x19, #0x180]
7101a4b464  str xzr,[x19, #0x1b0]
7101a4b468  str xzr,[x19, #0x1e0]
7101a4b46c  str xzr,[x19, #0x210]
7101a4b470  strh wzr,[x19, #0x220]
7101a4b474  strb w8,[x19, #0x224]
7101a4b478  str xzr,[x19, #0x228]
7101a4b47c  strh wzr,[x19, #0x230]
7101a4b480  str w21,[x19, #0x248]
7101a4b484  str wzr,[x19, #0x270]
7101a4b488  str xzr,[x19, #0x268]
7101a4b48c  str xzr,[x19, #0x260]
7101a4b490  str xzr,[x19, #0x258]
7101a4b494  strb w8,[x19, #0x274]
7101a4b498  str xzr,[x19, #0x250]
7101a4b49c  bl 0x7103776290
7101a4b4a0  add x0,x19,#0x288
7101a4b4a4  bl 0x7103776290
7101a4b4a8  add x0,x19,#0x298
7101a4b4ac  bl 0x7103776290
7101a4b4b0  add x0,x19,#0x2a8
7101a4b4b4  bl 0x7103776290
7101a4b4b8  add x0,x19,#0x2b8
7101a4b4bc  bl 0x7103776290
7101a4b4c0  adrp x28,0x710523d000
7101a4b4c4  add x28,x28,#0x9e8
7101a4b4c8  mov w0,#0x10
7101a4b4cc  orr w1,wzr,#0x18
7101a4b4d0  str x28,[x19, #0x2c8]
7101a4b4d4  bl 0x710392e290
7101a4b4d8  cbnz x0,0x7101a4b520
7101a4b4dc  adrp x8,0x7105332000
7101a4b4e0  ldr x0,[x8, #0xf00]
7101a4b4e4  cbz x0,0x7101a4b51c
7101a4b4e8  orr w8,wzr,#0x18
7101a4b4ec  str wzr,[sp, #0x90]
7101a4b4f0  add x1,sp,#0x90
7101a4b4f4  str x8,[sp, #0x1c0]
7101a4b4f8  ldr x8,[x0]
7101a4b4fc  ldr x8,[x8, #0x30]
7101a4b500  add x2,sp,#0x1c0
7101a4b504  blr x8
7101a4b508  tbz w0,#0x0,0x7101a4b51c
7101a4b50c  mov w0,#0x10
7101a4b510  orr w1,wzr,#0x18
7101a4b514  bl 0x710392e290
7101a4b518  cbnz x0,0x7101a4b520
7101a4b51c  mov x0,xzr
7101a4b520  stp xzr,xzr,[x0]
7101a4b524  strb w21,[x0, #0x10]
7101a4b528  str x0,[x19, #0x2d0]
7101a4b52c  add x0,x19,#0x2e0
7101a4b530  str wzr,[x19, #0x2d8]
7101a4b534  bl 0x7103776290
7101a4b538  add x0,x19,#0x2f0
7101a4b53c  bl 0x7103776290
7101a4b540  mov w0,#0x10
7101a4b544  orr w1,wzr,#0x18
7101a4b548  str xzr,[x19, #0x300]
7101a4b54c  str x28,[x19, #0x308]
7101a4b550  bl 0x710392e290
7101a4b554  cbnz x0,0x7101a4b59c
7101a4b558  adrp x8,0x7105332000
7101a4b55c  ldr x0,[x8, #0xf00]
7101a4b560  cbz x0,0x7101a4b598
7101a4b564  orr w8,wzr,#0x18
7101a4b568  str wzr,[sp, #0x90]
7101a4b56c  add x1,sp,#0x90
7101a4b570  str x8,[sp, #0x1c0]
7101a4b574  ldr x8,[x0]
7101a4b578  ldr x8,[x8, #0x30]
7101a4b57c  add x2,sp,#0x1c0
7101a4b580  blr x8
7101a4b584  tbz w0,#0x0,0x7101a4b598
7101a4b588  mov w0,#0x10
7101a4b58c  orr w1,wzr,#0x18
7101a4b590  bl 0x710392e290
7101a4b594  cbnz x0,0x7101a4b59c
7101a4b598  mov x0,xzr
7101a4b59c  mov w20,#0x1
7101a4b5a0  stp xzr,xzr,[x0]
7101a4b5a4  strb w20,[x0, #0x10]
7101a4b5a8  orr w1,wzr,#0x18
7101a4b5ac  str x0,[x19, #0x310]
7101a4b5b0  mov w0,#0x10
7101a4b5b4  str x28,[x19, #0x318]
7101a4b5b8  bl 0x710392e290
7101a4b5bc  cbnz x0,0x7101a4b604
7101a4b5c0  adrp x8,0x7105332000
7101a4b5c4  ldr x0,[x8, #0xf00]
7101a4b5c8  cbz x0,0x7101a4b600
7101a4b5cc  orr w8,wzr,#0x18
7101a4b5d0  str wzr,[sp, #0x90]
7101a4b5d4  add x1,sp,#0x90
7101a4b5d8  str x8,[sp, #0x1c0]
7101a4b5dc  ldr x8,[x0]
7101a4b5e0  ldr x8,[x8, #0x30]
7101a4b5e4  add x2,sp,#0x1c0
7101a4b5e8  blr x8
7101a4b5ec  tbz w0,#0x0,0x7101a4b600
7101a4b5f0  mov w0,#0x10
7101a4b5f4  orr w1,wzr,#0x18
7101a4b5f8  bl 0x710392e290
7101a4b5fc  cbnz x0,0x7101a4b604
7101a4b600  mov x0,xzr
7101a4b604  adrp x8,0x71050a8000
7101a4b608  add x8,x8,#0x90
7101a4b60c  strb w20,[x0, #0x10]
7101a4b610  stp xzr,xzr,[x0]
7101a4b614  str x0,[x19, #0x320]
7101a4b618  add x0,x19,#0x350
7101a4b61c  str x8,[x19, #0x330]
7101a4b620  adrp x8,0x71050a8000
7101a4b624  add x8,x8,#0x750
7101a4b628  str xzr,[x19, #0x328]
7101a4b62c  str xzr,[x19, #0x338]
7101a4b630  str x8,[x19, #0x340]
7101a4b634  str xzr,[x19, #0x348]
7101a4b638  bl 0x71019e8a70
7101a4b63c  add x0,x19,#0x360
7101a4b640  bl 0x71019e9c80
7101a4b644  add x0,x19,#0x370
7101a4b648  bl 0x71019ea8a0
7101a4b64c  adrp x8,0x71050a8000
7101a4b650  add x8,x8,#0x870
7101a4b654  add x0,x19,#0x390
7101a4b658  str x8,[x19, #0x380]
7101a4b65c  str xzr,[x19, #0x388]
7101a4b660  bl 0x71019f2350
7101a4b664  add x0,x19,#0x3a0
7101a4b668  bl 0x71019e5890
7101a4b66c  add x8,x19,#0x3cc
7101a4b670  add x9,x19,#0x3dc
7101a4b674  mov x10,#-0x1
7101a4b678  str wzr,[x19, #0x3c8]
7101a4b67c  str xzr,[x19, #0x3c0]
7101a4b680  str xzr,[x19, #0x3b8]
7101a4b684  str xzr,[x19, #0x3b0]
7101a4b688  mov x1,#0xfa78
7101a4b68c  movk x1,#0xd5f7, LSL #16
7101a4b690  str x10,[x9]
7101a4b694  add x9,x19,#0x3d4
7101a4b698  movk x1,#0xf, LSL #32
7101a4b69c  str x10,[x8]
7101a4b6a0  orr w8,wzr,#0x3
7101a4b6a4  str x10,[x9]
7101a4b6a8  str w8,[x19, #0x3e4]
7101a4b6ac  adrp x8,0x710532f000
7101a4b6b0  str xzr,[x19, #0x400]
7101a4b6b4  str xzr,[x19, #0x3f8]
7101a4b6b8  str xzr,[x19, #0x3f0]
7101a4b6bc  str xzr,[x19, #0x3e8]
7101a4b6c0  ldr x8,[x8, #0x730]
7101a4b6c4  ldr x8,[x8, #0x8]
7101a4b6c8  ldr x0,[x8, #0x168]
7101a4b6cc  bl 0x71032631a0
7101a4b6d0  add x8,x19,#0x419
7101a4b6d4  mov w9,#0x101
7101a4b6d8  str x0,[x19, #0x408]
7101a4b6dc  strb wzr,[x19, #0x418]
7101a4b6e0  str xzr,[x19, #0x410]
7101a4b6e4  strh w9,[x8]
7101a4b6e8  add x8,x19,#0x41b
7101a4b6ec  add x9,x19,#0x41f
7101a4b6f0  strh wzr,[x9]
7101a4b6f4  str wzr,[x8]
7101a4b6f8  ldr x8,[x19, #0x260]
7101a4b6fc  ldr x22,[x19, #0x250]
7101a4b700  sub x8,x8,x22
7101a4b704  asr x9,x8,#0x3
7101a4b708  mov x8,#0xbf7f
7101a4b70c  movk x8,#0xefdf, LSL #16
7101a4b710  movk x8,#0xfbf7, LSL #32
7101a4b714  movk x8,#0x7efd, LSL #48
7101a4b718  mul x9,x9,x8
7101a4b71c  cmp x9,#0x4
7101a4b720  b.hi 0x7101a4b92c
7101a4b724  stp x26,x25,[sp, #0x30]
7101a4b728  ldr x24,[x19, #0x258]
7101a4b72c  sub x9,x24,x22
7101a4b730  asr x9,x9,#0x3
7101a4b734  mov w1,#0x13d8
7101a4b738  mov w0,#0x10
7101a4b73c  mul x26,x9,x8
7101a4b740  bl 0x710392e290
7101a4b744  mov x25,x0
7101a4b748  cbnz x0,0x7101a4b794
7101a4b74c  adrp x8,0x7105332000
7101a4b750  ldr x0,[x8, #0xf00]
7101a4b754  cbz x0,0x7101a4b790
7101a4b758  mov w8,#0x13d8
7101a4b75c  str wzr,[sp, #0x90]
7101a4b760  add x1,sp,#0x90
7101a4b764  str x8,[sp, #0x1c0]
7101a4b768  ldr x8,[x0]
7101a4b76c  ldr x8,[x8, #0x30]
7101a4b770  add x2,sp,#0x1c0
7101a4b774  blr x8
7101a4b778  tbz w0,#0x0,0x7101a4b790
7101a4b77c  mov w1,#0x13d8
7101a4b780  mov w0,#0x10
7101a4b784  bl 0x710392e290
7101a4b788  mov x25,x0
7101a4b78c  cbnz x0,0x7101a4b794
7101a4b790  mov x25,xzr
7101a4b794  orr w8,wzr,#0x3f8
7101a4b798  madd x28,x26,x8,x25
7101a4b79c  mov w8,#0x13d8
7101a4b7a0  add x9,x25,x8
7101a4b7a4  cmp x24,x22
7101a4b7a8  b.eq 0x7101a4b904
7101a4b7ac  add x8,x19,#0x250
7101a4b7b0  str x8,[sp, #0x10]
7101a4b7b4  orr w8,wzr,#0x3f8
7101a4b7b8  str x27,[sp, #0x28]
7101a4b7bc  madd x27,x26,x8,x25
7101a4b7c0  sub x22,x22,x24
7101a4b7c4  stp x9,x23,[sp, #0x18]
7101a4b7c8  mov x23,xzr
7101a4b7cc  add x20,x24,x23
7101a4b7d0  sub x9,x20,#0x3f8
7101a4b7d4  ldr w9,[x9]
7101a4b7d8  add x21,x27,x23
7101a4b7dc  sub x8,x21,#0x3f8
7101a4b7e0  sub x0,x21,#0x3f0
7101a4b7e4  sub x1,x20,#0x3f0
7101a4b7e8  str w9,[x8]
7101a4b7ec  bl 0x71015547e0
7101a4b7f0  sub x12,x20,#0x238
7101a4b7f4  sub x9,x20,#0x250
7101a4b7f8  sub x10,x20,#0x248
7101a4b7fc  sub x11,x20,#0x240
7101a4b800  ldrh w12,[x12]
7101a4b804  ldr x9,[x9]
7101a4b808  ldr x10,[x10]
7101a4b80c  ldr x11,[x11]
7101a4b810  sub x13,x21,#0x238
7101a4b814  sub x8,x21,#0x250
7101a4b818  str x9,[x8]
7101a4b81c  strh w12,[x13]
7101a4b820  sub x12,x21,#0x240
7101a4b824  sub x13,x21,#0x248
7101a4b828  str x11,[x12]
7101a4b82c  sub x12,x20,#0x234
7101a4b830  str x10,[x13]
7101a4b834  sub x10,x20,#0x22c
7101a4b838  ldrh w9,[x10]
7101a4b83c  ldr x8,[x12]
7101a4b840  sub x11,x21,#0x234
7101a4b844  sub x13,x21,#0x22c
7101a4b848  sub x0,x21,#0x228
7101a4b84c  sub x1,x20,#0x220
7101a4b850  strh w9,[x13]
7101a4b854  str x8,[x11]
7101a4b858  str wzr,[x0]
7101a4b85c  bl 0x7101696040
7101a4b860  sub x9,x20,#0x1f0
7101a4b864  sub x10,x20,#0x1eb
7101a4b868  ldr x10,[x10]
7101a4b86c  ldr x9,[x9]
7101a4b870  sub x8,x21,#0x1f0
7101a4b874  sub x11,x21,#0x1eb
7101a4b878  str x10,[x11]
7101a4b87c  str x9,[x8]
7101a4b880  sub x8,x20,#0x1d0
7101a4b884  sub x10,x20,#0x1e0
7101a4b888  sub x11,x20,#0x1d8
7101a4b88c  ldr x11,[x11]
7101a4b890  ldrh w8,[x8]
7101a4b894  ldr x10,[x10]
7101a4b898  sub x9,x21,#0x1d0
7101a4b89c  sub x12,x21,#0x1e0
7101a4b8a0  sub x0,x21,#0x1c8
7101a4b8a4  sub x1,x20,#0x1c8
7101a4b8a8  strh w8,[x9]
7101a4b8ac  sub x8,x21,#0x1d8
7101a4b8b0  str x11,[x8]
7101a4b8b4  str x10,[x12]
7101a4b8b8  bl 0x71015547e0
7101a4b8bc  ldp x8,x9,[x20, #-0x28]
7101a4b8c0  ldurb w10,[x20, #-0x18]
7101a4b8c4  sturb w10,[x21, #-0x18]
7101a4b8c8  stp x8,x9,[x21, #-0x28]
7101a4b8cc  ldp x8,x9,[x20, #-0x10]
7101a4b8d0  sub x23,x23,#0x3f8
7101a4b8d4  cmp x22,x23
7101a4b8d8  stp x8,x9,[x21, #-0x10]
7101a4b8dc  b.ne 0x7101a4b7cc
7101a4b8e0  orr w8,wzr,#0x3f8
7101a4b8e4  mul x8,x26,x8
7101a4b8e8  ldr x9,[sp, #0x10]
7101a4b8ec  ldr x24,[x9]
7101a4b8f0  ldr x9,[sp, #0x18]
7101a4b8f4  add x8,x25,x8
7101a4b8f8  add x8,x8,x23
7101a4b8fc  ldp x23,x27,[sp, #0x20]
7101a4b900  b 0x7101a4b908
7101a4b904  mov x8,x28
7101a4b908  str x8,[x19, #0x250]
7101a4b90c  str x28,[x19, #0x258]
7101a4b910  adrp x28,0x710523d000
7101a4b914  add x28,x28,#0x9e8
7101a4b918  str x9,[x19, #0x260]
7101a4b91c  ldp x26,x25,[sp, #0x30]
7101a4b920  cbz x24,0x7101a4b92c
7101a4b924  mov x0,x24
7101a4b928  bl 0x710392eb40
7101a4b92c  ldr x8,[x19, #0x3c0]
7101a4b930  ldr x21,[x19, #0x3b0]
7101a4b934  sub x8,x8,x21
7101a4b938  asr x8,x8,#0x4
7101a4b93c  cmp x8,#0x4
7101a4b940  b.hi 0x7101a4ba88
7101a4b944  ldr x24,[x19, #0x3b8]
7101a4b948  sub x8,x24,x21
7101a4b94c  mov w1,#0x50
7101a4b950  mov w0,#0x10
7101a4b954  asr x20,x8,#0x4
7101a4b958  bl 0x710392e290
7101a4b95c  cbnz x0,0x7101a4b9a4
7101a4b960  adrp x8,0x7105332000
7101a4b964  ldr x0,[x8, #0xf00]
7101a4b968  cbz x0,0x7101a4b9a0
7101a4b96c  mov w8,#0x50
7101a4b970  str wzr,[sp, #0x90]
7101a4b974  add x1,sp,#0x90
7101a4b978  str x8,[sp, #0x1c0]
7101a4b97c  ldr x8,[x0]
7101a4b980  ldr x8,[x8, #0x30]
7101a4b984  add x2,sp,#0x1c0
7101a4b988  blr x8
7101a4b98c  tbz w0,#0x0,0x7101a4b9a0
7101a4b990  mov w1,#0x50
7101a4b994  mov w0,#0x10
7101a4b998  bl 0x710392e290
7101a4b99c  cbnz x0,0x7101a4b9a4
7101a4b9a0  mov x0,xzr
7101a4b9a4  add x22,x0,x20, LSL #0x4
7101a4b9a8  add x20,x0,#0x50
7101a4b9ac  cmp x24,x21
7101a4b9b0  b.eq 0x7101a4ba58
7101a4b9b4  stp x26,x25,[sp, #0x30]
7101a4b9b8  mov x28,x27
7101a4b9bc  mov x27,x23
7101a4b9c0  mov x23,x22
7101a4b9c4  adrp x25,0x71050a8000
7101a4b9c8  add x25,x25,#0xc98
7101a4b9cc  mov x8,x23
7101a4b9d0  sub x26,x24,#0x10
7101a4b9d4  cmp x24,x8
7101a4b9d8  str x25,[x23, #-0x10]!
7101a4b9dc  stur xzr,[x8, #-0x8]
7101a4b9e0  b.eq 0x7101a4ba08
7101a4b9e4  ldur x9,[x24, #-0x8]
7101a4b9e8  stur xzr,[x24, #-0x8]
7101a4b9ec  ldur x24,[x8, #-0x8]
7101a4b9f0  stur x9,[x8, #-0x8]
7101a4b9f4  cbz x24,0x7101a4ba08
7101a4b9f8  mov x0,x24
7101a4b9fc  bl 0x7101a41fd0
7101a4ba00  mov x0,x24
7101a4ba04  bl 0x710392eb40
7101a4ba08  cmp x21,x26
7101a4ba0c  mov x24,x26
7101a4ba10  b.ne 0x7101a4b9cc
7101a4ba14  ldr x24,[x19, #0x3b0]
7101a4ba18  ldr x25,[x19, #0x3b8]
7101a4ba1c  str x23,[x19, #0x3b0]
7101a4ba20  mov x23,x27
7101a4ba24  cmp x25,x24
7101a4ba28  str x22,[x19, #0x3b8]
7101a4ba2c  str x20,[x19, #0x3c0]
7101a4ba30  b.eq 0x7101a4ba6c
7101a4ba34  ldr x26,[sp, #0x30]
7101a4ba38  ldr x8,[x25, #-0x10]!
7101a4ba3c  ldr x8,[x8]
7101a4ba40  mov x0,x25
7101a4ba44  blr x8
7101a4ba48  cmp x24,x25
7101a4ba4c  b.ne 0x7101a4ba38
7101a4ba50  ldr x25,[sp, #0x38]
7101a4ba54  b 0x7101a4ba70
7101a4ba58  str x22,[x19, #0x3b0]
7101a4ba5c  str x22,[x19, #0x3b8]
7101a4ba60  str x20,[x19, #0x3c0]
7101a4ba64  cbnz x24,0x7101a4ba80
7101a4ba68  b 0x7101a4ba88
7101a4ba6c  ldp x26,x25,[sp, #0x30]
7101a4ba70  mov x27,x28
7101a4ba74  adrp x28,0x710523d000
7101a4ba78  add x28,x28,#0x9e8
7101a4ba7c  cbz x24,0x7101a4ba88
7101a4ba80  mov x0,x24
7101a4ba84  bl 0x710392eb40
7101a4ba88  adrp x8,0x7101a45000
7101a4ba8c  add x8,x8,#0x710
7101a4ba90  adrp x9,0x7101a45000
7101a4ba94  add x9,x9,#0xac0
7101a4ba98  stp x8,xzr,[x19, #0x28]
7101a4ba9c  adrp x8,0x7101a45000
7101a4baa0  add x8,x8,#0x720
7101a4baa4  mov x0,x19
7101a4baa8  stp x8,xzr,[x19, #0x38]
7101a4baac  adrp x8,0x7101a45000
7101a4bab0  add x8,x8,#0x750
7101a4bab4  stp x8,xzr,[x19, #0x48]
7101a4bab8  adrp x8,0x7101a45000
7101a4babc  add x8,x8,#0xf70
7101a4bac0  stp x8,xzr,[x19, #0x68]
7101a4bac4  adrp x8,0x7101a46000
7101a4bac8  add x8,x8,#0x1a0
7101a4bacc  stp x8,xzr,[x19, #0x78]
7101a4bad0  adrp x8,0x7101a46000
7101a4bad4  add x8,x8,#0xe60
7101a4bad8  stp x8,xzr,[x19, #0x98]
7101a4badc  adrp x8,0x7101a47000
7101a4bae0  add x8,x8,#0xc0
7101a4bae4  stp x9,xzr,[x19, #0x58]
7101a4bae8  adrp x9,0x7101a46000
7101a4baec  add x9,x9,#0xaa0
7101a4baf0  stp x8,xzr,[x19, #0xa8]
7101a4baf4  adrp x8,0x7101a47000
7101a4baf8  add x8,x8,#0x6a0
7101a4bafc  stp x9,xzr,[x19, #0x88]
7101a4bb00  adrp x9,0x7101a47000
7101a4bb04  add x9,x9,#0x320
7101a4bb08  stp x8,xzr,[x19, #0xc8]
7101a4bb0c  adrp x8,0x7101a47000
7101a4bb10  add x8,x8,#0xb50
7101a4bb14  stp x9,xzr,[x19, #0xb8]
7101a4bb18  orr x9,xzr,#-0x100000000
7101a4bb1c  stp x8,xzr,[x19, #0xd8]
7101a4bb20  ldr x8,[sp, #0x40]
7101a4bb24  stp xzr,xzr,[x8]
7101a4bb28  add x8,x19,#0x12c
7101a4bb2c  str xzr,[x8]
7101a4bb30  add x8,x19,#0x124
7101a4bb34  str xzr,[x8]
7101a4bb38  add x8,x19,#0x11c
7101a4bb3c  str xzr,[x8]
7101a4bb40  add x8,x19,#0x114
7101a4bb44  str xzr,[x8]
7101a4bb48  add x8,x19,#0x10c
7101a4bb4c  str xzr,[x8]
7101a4bb50  add x8,x19,#0x104
7101a4bb54  str xzr,[x8]
7101a4bb58  add x8,x19,#0x134
7101a4bb5c  str x9,[x8]
7101a4bb60  add x8,x19,#0x13c
7101a4bb64  stur xzr,[x19, #0xfc]
7101a4bb68  stur xzr,[x19, #0xf4]
7101a4bb6c  stur xzr,[x19, #0xec]
7101a4bb70  str x9,[x8]
7101a4bb74  mov w8,#0x1
7101a4bb78  strb wzr,[x19, #0x144]
7101a4bb7c  str w8,[x19, #0xe8]
7101a4bb80  bl 0x7101a484a0
7101a4bb84  ldr x24,[x26, #0x8]
7101a4bb88  str x19,[x26, #0x8]
7101a4bb8c  cbz x24,0x7101a4bba4
7101a4bb90  mov x0,x24
7101a4bb94  bl 0x7101a48ee0
7101a4bb98  mov x0,x24
7101a4bb9c  bl 0x710392eb40
7101a4bba0  ldr x19,[x26, #0x8]
7101a4bba4  ldr w8,[x25]
7101a4bba8  str w8,[x19, #0x150]
7101a4bbac  ldr w8,[x25, #0x4]
7101a4bbb0  str w8,[x19, #0x154]
7101a4bbb4  ldr x0,[x23, #0x20]
7101a4bbb8  add x22,x19,#0x160
7101a4bbbc  cbz x0,0x7101a4bbdc
7101a4bbc0  cmp x23,x0
7101a4bbc4  b.eq 0x7101a4bbe4
7101a4bbc8  ldr x8,[x0]
7101a4bbcc  ldr x8,[x8, #0x10]
7101a4bbd0  blr x8
7101a4bbd4  str x0,[sp, #0x1e0]
7101a4bbd8  b 0x7101a4bbfc
7101a4bbdc  str xzr,[sp, #0x1e0]
7101a4bbe0  b 0x7101a4bbfc
7101a4bbe4  add x8,sp,#0x1c0
7101a4bbe8  str x8,[sp, #0x1e0]
7101a4bbec  ldr x8,[x0]
7101a4bbf0  ldr x8,[x8, #0x18]
7101a4bbf4  add x1,sp,#0x1c0
7101a4bbf8  blr x8
7101a4bbfc  add x0,sp,#0x1c0
7101a4bc00  mov x1,x22
7101a4bc04  add x20,sp,#0x1c0
7101a4bc08  bl 0x7101a3b4a0
7101a4bc0c  ldr x0,[sp, #0x1e0]
7101a4bc10  cmp x20,x0
7101a4bc14  b.eq 0x7101a4bc28
7101a4bc18  cbz x0,0x7101a4bc34
7101a4bc1c  ldr x8,[x0]
7101a4bc20  ldr x8,[x8, #0x28]
7101a4bc24  b 0x7101a4bc30
7101a4bc28  ldr x8,[x0]
7101a4bc2c  ldr x8,[x8, #0x20]
7101a4bc30  blr x8
7101a4bc34  ldr x0,[x23, #0x50]
7101a4bc38  add x22,x19,#0x190
7101a4bc3c  cbz x0,0x7101a4bc60
7101a4bc40  add x8,x23,#0x30
7101a4bc44  cmp x8,x0
7101a4bc48  b.eq 0x7101a4bc68
7101a4bc4c  ldr x8,[x0]
7101a4bc50  ldr x8,[x8, #0x10]
7101a4bc54  blr x8
7101a4bc58  str x0,[sp, #0x1e0]
7101a4bc5c  b 0x7101a4bc80
7101a4bc60  str xzr,[sp, #0x1e0]
7101a4bc64  b 0x7101a4bc80
7101a4bc68  add x8,sp,#0x1c0
7101a4bc6c  str x8,[sp, #0x1e0]
7101a4bc70  ldr x8,[x0]
7101a4bc74  ldr x8,[x8, #0x18]
7101a4bc78  add x1,sp,#0x1c0
7101a4bc7c  blr x8
7101a4bc80  add x0,sp,#0x1c0
7101a4bc84  mov x1,x22
7101a4bc88  add x20,sp,#0x1c0
7101a4bc8c  bl 0x7101a3b5e0
7101a4bc90  ldr x0,[sp, #0x1e0]
7101a4bc94  cmp x20,x0
7101a4bc98  b.eq 0x7101a4bcac
7101a4bc9c  cbz x0,0x7101a4bcb8
7101a4bca0  ldr x8,[x0]
7101a4bca4  ldr x8,[x8, #0x28]
7101a4bca8  b 0x7101a4bcb4
7101a4bcac  ldr x8,[x0]
7101a4bcb0  ldr x8,[x8, #0x20]
7101a4bcb4  blr x8
7101a4bcb8  ldr x0,[x23, #0x80]
7101a4bcbc  add x22,x19,#0x1c0
7101a4bcc0  cbz x0,0x7101a4bce4
7101a4bcc4  add x8,x23,#0x60
7101a4bcc8  cmp x8,x0
7101a4bccc  b.eq 0x7101a4bcec
7101a4bcd0  ldr x8,[x0]
7101a4bcd4  ldr x8,[x8, #0x10]
7101a4bcd8  blr x8
7101a4bcdc  str x0,[sp, #0x1e0]
7101a4bce0  b 0x7101a4bd04
7101a4bce4  str xzr,[sp, #0x1e0]
7101a4bce8  b 0x7101a4bd04
7101a4bcec  add x8,sp,#0x1c0
7101a4bcf0  str x8,[sp, #0x1e0]
7101a4bcf4  ldr x8,[x0]
7101a4bcf8  ldr x8,[x8, #0x18]
7101a4bcfc  add x1,sp,#0x1c0
7101a4bd00  blr x8
7101a4bd04  add x0,sp,#0x1c0
7101a4bd08  mov x1,x22
7101a4bd0c  add x20,sp,#0x1c0
7101a4bd10  bl 0x7101a3b7e0
7101a4bd14  ldr x0,[sp, #0x1e0]
7101a4bd18  cmp x20,x0
7101a4bd1c  b.eq 0x7101a4bd30
7101a4bd20  cbz x0,0x7101a4bd3c
7101a4bd24  ldr x8,[x0]
7101a4bd28  ldr x8,[x8, #0x28]
7101a4bd2c  b 0x7101a4bd38
7101a4bd30  ldr x8,[x0]
7101a4bd34  ldr x8,[x8, #0x20]
7101a4bd38  blr x8
7101a4bd3c  ldr x0,[x23, #0xb0]
7101a4bd40  add x22,x19,#0x1f0
7101a4bd44  cbz x0,0x7101a4bd68
7101a4bd48  add x8,x23,#0x90
7101a4bd4c  cmp x8,x0
7101a4bd50  b.eq 0x7101a4bd70
7101a4bd54  ldr x8,[x0]
7101a4bd58  ldr x8,[x8, #0x10]
7101a4bd5c  blr x8
7101a4bd60  str x0,[sp, #0x1e0]
7101a4bd64  b 0x7101a4bd88
7101a4bd68  str xzr,[sp, #0x1e0]
7101a4bd6c  b 0x7101a4bd88
7101a4bd70  add x8,sp,#0x1c0
7101a4bd74  str x8,[sp, #0x1e0]
7101a4bd78  ldr x8,[x0]
7101a4bd7c  ldr x8,[x8, #0x18]
7101a4bd80  add x1,sp,#0x1c0
7101a4bd84  blr x8
7101a4bd88  add x0,sp,#0x1c0
7101a4bd8c  mov x1,x22
7101a4bd90  add x20,sp,#0x1c0
7101a4bd94  bl 0x7101a3bc70
7101a4bd98  ldr x0,[sp, #0x1e0]
7101a4bd9c  cmp x20,x0
7101a4bda0  b.eq 0x7101a4bdb4
7101a4bda4  cbz x0,0x7101a4bdc0
7101a4bda8  ldr x8,[x0]
7101a4bdac  ldr x8,[x8, #0x28]
7101a4bdb0  b 0x7101a4bdbc
7101a4bdb4  ldr x8,[x0]
7101a4bdb8  ldr x8,[x8, #0x20]
7101a4bdbc  blr x8
7101a4bdc0  add x21,x19,#0x278
7101a4bdc4  cmp x21,x27
7101a4bdc8  b.eq 0x7101a4be3c
7101a4bdcc  ldr x8,[x27, #0x8]
7101a4bdd0  ldr x8,[x8]
7101a4bdd4  ldr x9,[x19, #0x280]
7101a4bdd8  str x8,[x9]
7101a4bddc  ldr x8,[x27, #0x8]
7101a4bde0  ldr x8,[x8, #0x8]
7101a4bde4  ldr x9,[x19, #0x280]
7101a4bde8  str x8,[x9, #0x8]
7101a4bdec  ldr x9,[x27, #0x8]
7101a4bdf0  ldr x8,[x19, #0x280]
7101a4bdf4  cmp x8,x9
7101a4bdf8  b.eq 0x7101a4be3c
7101a4bdfc  ldr x10,[x9, #0x18]
7101a4be00  ldr x10,[x10]
7101a4be04  ldr x11,[x8, #0x18]
7101a4be08  str x10,[x11]
7101a4be0c  ldr x10,[x9, #0x18]
7101a4be10  ldr x10,[x10, #0x8]
7101a4be14  ldr x11,[x8, #0x18]
7101a4be18  str x10,[x11, #0x8]
7101a4be1c  ldr x10,[x9, #0x18]
7101a4be20  ldr x10,[x10, #0x10]
7101a4be24  ldr x11,[x8, #0x18]
7101a4be28  str x10,[x11, #0x10]
7101a4be2c  ldr x9,[x9, #0x18]
7101a4be30  ldr x9,[x9, #0x18]
7101a4be34  ldr x8,[x8, #0x18]
7101a4be38  str x9,[x8, #0x18]
7101a4be3c  ldr w8,[x19, #0x150]
7101a4be40  add w2,w8,#0x1
7101a4be44  adrp x1,0x71042e7000
7101a4be48  add x1,x1,#0xb0e
7101a4be4c  add x8,sp,#0x1c0
7101a4be50  mov x0,x21
7101a4be54  add x20,sp,#0x1c0
7101a4be58  bl 0x7103776640
7101a4be5c  add x25,x19,#0x288
7101a4be60  cmp x25,x20
7101a4be64  b.eq 0x7101a4be9c
7101a4be68  ldr x8,[sp, #0x1c8]
7101a4be6c  str xzr,[sp, #0x1c8]
7101a4be70  ldr x22,[x19, #0x290]
7101a4be74  str x8,[x19, #0x290]
7101a4be78  cbz x22,0x7101a4be9c
7101a4be7c  ldr x0,[x22, #0x18]
7101a4be80  adrp x8,0x710523d000
7101a4be84  add x8,x8,#0x9a8
7101a4be88  stp x8,xzr,[x22, #0x10]
7101a4be8c  cbz x0,0x7101a4be94
7101a4be90  bl 0x710392eb40
7101a4be94  mov x0,x22
7101a4be98  bl 0x710392eb40
7101a4be9c  ldr x22,[sp, #0x1c8]
7101a4bea0  adrp x26,0x710523d000
7101a4bea4  add x26,x26,#0x988
7101a4bea8  stp x26,xzr,[sp, #0x1c0]
7101a4beac  cbz x22,0x7101a4bed0
7101a4beb0  ldr x0,[x22, #0x18]
7101a4beb4  adrp x8,0x710523d000
7101a4beb8  add x8,x8,#0x9a8
7101a4bebc  stp x8,xzr,[x22, #0x10]
7101a4bec0  cbz x0,0x7101a4bec8
7101a4bec4  bl 0x710392eb40
7101a4bec8  mov x0,x22
7101a4becc  bl 0x710392eb40
7101a4bed0  ldr w8,[x19, #0x154]
7101a4bed4  add w2,w8,#0x1
7101a4bed8  adrp x1,0x7104318000
7101a4bedc  add x1,x1,#0x970
7101a4bee0  mov x0,x25
7101a4bee4  bl 0x7103778430
7101a4bee8  ldr x0,[x19, #0x290]
7101a4beec  fmov s0,0x3f800000
7101a4bef0  adrp x1,0x7104308000
7101a4bef4  add x1,x1,#0xc25
7101a4bef8  bl 0x7103778300
7101a4befc  adrp x1,0x710439d000
7101a4bf00  add x1,x1,#0xca6
7101a4bf04  add x8,sp,#0x90
7101a4bf08  mov x0,x25
7101a4bf0c  bl 0x7103776910
7101a4bf10  ldr w8,[x19, #0x150]
7101a4bf14  add w1,w8,#0x1
7101a4bf18  adrp x0,0x71042b2000
7101a4bf1c  add x0,x0,#0x93a
7101a4bf20  add x8,sp,#0x1c0
7101a4bf24  add x20,sp,#0x1c0
7101a4bf28  bl 0x71003a4ca0
7101a4bf2c  add x1,x20,#0x8
7101a4bf30  add x0,sp,#0x90
7101a4bf34  bl 0x710377a120
7101a4bf38  ldr x0,[sp, #0x98]
7101a4bf3c  adrp x27,0x710523d000
7101a4bf40  add x27,x27,#0x9a8
7101a4bf44  stp x27,xzr,[sp, #0x90]
7101a4bf48  cbz x0,0x7101a4bf50
7101a4bf4c  bl 0x710392eb40
7101a4bf50  ldr w8,[x19, #0x150]
7101a4bf54  add w2,w8,#0x1
7101a4bf58  adrp x1,0x7104339000
7101a4bf5c  add x1,x1,#0xc1b
7101a4bf60  add x8,sp,#0x1c0
7101a4bf64  mov x0,x21
7101a4bf68  bl 0x7103776640
7101a4bf6c  add x8,x19,#0x298
7101a4bf70  cmp x8,x20
7101a4bf74  b.eq 0x7101a4bfa4
7101a4bf78  ldr x8,[sp, #0x1c8]
7101a4bf7c  str xzr,[sp, #0x1c8]
7101a4bf80  ldr x22,[x19, #0x2a0]
7101a4bf84  str x8,[x19, #0x2a0]
7101a4bf88  cbz x22,0x7101a4bfa4
7101a4bf8c  ldr x0,[x22, #0x18]
7101a4bf90  stp x27,xzr,[x22, #0x10]
7101a4bf94  cbz x0,0x7101a4bf9c
7101a4bf98  bl 0x710392eb40
7101a4bf9c  mov x0,x22
7101a4bfa0  bl 0x710392eb40
7101a4bfa4  ldr x22,[sp, #0x1c8]
7101a4bfa8  stp x26,xzr,[sp, #0x1c0]
7101a4bfac  cbz x22,0x7101a4bfc8
7101a4bfb0  ldr x0,[x22, #0x18]
7101a4bfb4  stp x27,xzr,[x22, #0x10]
7101a4bfb8  cbz x0,0x7101a4bfc0
7101a4bfbc  bl 0x710392eb40
7101a4bfc0  mov x0,x22
7101a4bfc4  bl 0x710392eb40
7101a4bfc8  fmov s8,0x3f800000
7101a4bfcc  ldr x0,[x19, #0x2a0]
7101a4bfd0  adrp x1,0x71042a3000
7101a4bfd4  add x1,x1,#0x7e8
7101a4bfd8  mov v0.16B,v8.16B
7101a4bfdc  bl 0x7103778300
7101a4bfe0  ldr x0,[x19, #0x2a0]
7101a4bfe4  mov v0.16B,v8.16B
7101a4bfe8  adrp x1,0x7104329000
7101a4bfec  add x1,x1,#0xfc1
7101a4bff0  bl 0x7103778300
7101a4bff4  ldr x8,[x19, #0x2a0]
7101a4bff8  ldr x8,[x8, #0x8]
7101a4bffc  cbz x8,0x7101a4c014
7101a4c000  ldr x8,[x8, #0x18]
7101a4c004  cbz x8,0x7101a4c014
7101a4c008  ldrb w9,[x8, #0x58]
7101a4c00c  and w9,w9,#0xfe
7101a4c010  strb w9,[x8, #0x58]
7101a4c014  ldr w8,[x19, #0x150]
7101a4c018  add w2,w8,#0x1
7101a4c01c  adrp x1,0x71043f0000
7101a4c020  add x1,x1,#0x42a
7101a4c024  add x8,sp,#0x1c0
7101a4c028  mov x0,x21
7101a4c02c  add x20,sp,#0x1c0
7101a4c030  bl 0x7103776640
7101a4c034  add x22,x19,#0x2a8
7101a4c038  cmp x22,x20
7101a4c03c  b.eq 0x7101a4c06c
7101a4c040  ldr x8,[sp, #0x1c8]
7101a4c044  str xzr,[sp, #0x1c8]
7101a4c048  ldr x23,[x19, #0x2b0]
7101a4c04c  str x8,[x19, #0x2b0]
7101a4c050  cbz x23,0x7101a4c06c
7101a4c054  ldr x0,[x23, #0x18]
7101a4c058  stp x27,xzr,[x23, #0x10]
7101a4c05c  cbz x0,0x7101a4c064
7101a4c060  bl 0x710392eb40
7101a4c064  mov x0,x23
7101a4c068  bl 0x710392eb40
7101a4c06c  ldr x23,[sp, #0x1c8]
7101a4c070  stp x26,xzr,[sp, #0x1c0]
7101a4c074  cbz x23,0x7101a4c090
7101a4c078  ldr x0,[x23, #0x18]
7101a4c07c  stp x27,xzr,[x23, #0x10]
7101a4c080  cbz x0,0x7101a4c088
7101a4c084  bl 0x710392eb40
7101a4c088  mov x0,x23
7101a4c08c  bl 0x710392eb40
7101a4c090  fmov s8,0x3f800000
7101a4c094  ldr x0,[x19, #0x2b0]
7101a4c098  adrp x1,0x71042a3000
7101a4c09c  add x1,x1,#0x7e8
7101a4c0a0  mov v0.16B,v8.16B
7101a4c0a4  bl 0x7103778300
7101a4c0a8  ldr x0,[x19, #0x2b0]
7101a4c0ac  mov v0.16B,v8.16B
7101a4c0b0  adrp x1,0x7104443000
7101a4c0b4  add x1,x1,#0xf4b
7101a4c0b8  bl 0x7103778300
7101a4c0bc  adrp x1,0x710425f000
7101a4c0c0  add x1,x1,#0xd64
7101a4c0c4  add x8,sp,#0x1c0
7101a4c0c8  mov x0,x25
7101a4c0cc  add x20,sp,#0x1c0
7101a4c0d0  bl 0x7103776640
7101a4c0d4  add x23,x19,#0x2b8
7101a4c0d8  cmp x23,x20
7101a4c0dc  b.eq 0x7101a4c10c
7101a4c0e0  ldr x8,[sp, #0x1c8]
7101a4c0e4  str xzr,[sp, #0x1c8]
7101a4c0e8  ldr x24,[x19, #0x2c0]
7101a4c0ec  str x8,[x19, #0x2c0]
7101a4c0f0  cbz x24,0x7101a4c10c
7101a4c0f4  ldr x0,[x24, #0x18]
7101a4c0f8  stp x27,xzr,[x24, #0x10]
7101a4c0fc  cbz x0,0x7101a4c104
7101a4c100  bl 0x710392eb40
7101a4c104  mov x0,x24
7101a4c108  bl 0x710392eb40
7101a4c10c  ldr x24,[sp, #0x1c8]
7101a4c110  stp x26,xzr,[sp, #0x1c0]
7101a4c114  cbz x24,0x7101a4c130
7101a4c118  ldr x0,[x24, #0x18]
7101a4c11c  stp x27,xzr,[x24, #0x10]
7101a4c120  cbz x0,0x7101a4c128
7101a4c124  bl 0x710392eb40
7101a4c128  mov x0,x24
7101a4c12c  bl 0x710392eb40
7101a4c130  ldr x0,[x19, #0x2c0]
7101a4c134  fmov s0,0x3f800000
7101a4c138  adrp x1,0x71042c5000
7101a4c13c  add x1,x1,#0x6a7
7101a4c140  str wzr,[x19, #0x2d8]
7101a4c144  bl 0x7103778300
7101a4c148  adrp x1,0x710439d000
7101a4c14c  add x1,x1,#0xc9a
7101a4c150  add x8,sp,#0x1c0
7101a4c154  mov x0,x23
7101a4c158  add x20,sp,#0x1c0
7101a4c15c  bl 0x7103776910
7101a4c160  ldrsw x9,[x19, #0x2d8]
7101a4c164  adrp x8,0x71050a8000
7101a4c168  add x8,x8,#0x890
7101a4c16c  ldr x1,[x8, x9, LSL #0x3]
7101a4c170  add x0,sp,#0x1c0
7101a4c174  bl 0x710377a120
7101a4c178  ldr x0,[sp, #0x1c8]
7101a4c17c  stp x27,xzr,[sp, #0x1c0]
7101a4c180  cbz x0,0x7101a4c188
7101a4c184  bl 0x710392eb40
7101a4c188  adrp x1,0x71043ae000
7101a4c18c  add x1,x1,#0xc3
7101a4c190  add x8,sp,#0x1c0
7101a4c194  mov x0,x23
7101a4c198  bl 0x71037780e0
7101a4c19c  add x23,x19,#0x2c8
7101a4c1a0  cmp x23,x20
7101a4c1a4  b.eq 0x7101a4c1c0
7101a4c1a8  ldr x8,[sp, #0x1c8]
7101a4c1ac  str xzr,[sp, #0x1c8]
7101a4c1b0  ldr x0,[x19, #0x2d0]
7101a4c1b4  str x8,[x19, #0x2d0]
7101a4c1b8  cbz x0,0x7101a4c1c0
7101a4c1bc  bl 0x710392eb40
7101a4c1c0  ldr x0,[sp, #0x1c8]
7101a4c1c4  stp x28,xzr,[sp, #0x1c0]
7101a4c1c8  cbz x0,0x7101a4c1d0
7101a4c1cc  bl 0x710392eb40
7101a4c1d0  fmov s0,0x3f800000
7101a4c1d4  mov x0,x23
7101a4c1d8  bl 0x710377aee0
7101a4c1dc  adrp x1,0x71042f8000
7101a4c1e0  add x1,x1,#0xc62
7101a4c1e4  add x8,sp,#0x1c0
7101a4c1e8  mov x0,x25
7101a4c1ec  add x20,sp,#0x1c0
7101a4c1f0  bl 0x7103776640
7101a4c1f4  add x8,x19,#0x2e0
7101a4c1f8  cmp x8,x20
7101a4c1fc  b.eq 0x7101a4c22c
7101a4c200  ldr x8,[sp, #0x1c8]
7101a4c204  str xzr,[sp, #0x1c8]
7101a4c208  ldr x23,[x19, #0x2e8]
7101a4c20c  str x8,[x19, #0x2e8]
7101a4c210  cbz x23,0x7101a4c22c
7101a4c214  ldr x0,[x23, #0x18]
7101a4c218  stp x27,xzr,[x23, #0x10]
7101a4c21c  cbz x0,0x7101a4c224
7101a4c220  bl 0x710392eb40
7101a4c224  mov x0,x23
7101a4c228  bl 0x710392eb40
7101a4c22c  ldr x23,[sp, #0x1c8]
7101a4c230  stp x26,xzr,[sp, #0x1c0]
7101a4c234  cbz x23,0x7101a4c250
7101a4c238  ldr x0,[x23, #0x18]
7101a4c23c  stp x27,xzr,[x23, #0x10]
7101a4c240  cbz x0,0x7101a4c248
7101a4c244  bl 0x710392eb40
7101a4c248  mov x0,x23
7101a4c24c  bl 0x710392eb40
7101a4c250  fmov s8,0x3f800000
7101a4c254  ldr x0,[x19, #0x2e8]
7101a4c258  adrp x1,0x710436c000
7101a4c25c  add x1,x1,#0xb6c
7101a4c260  mov v0.16B,v8.16B
7101a4c264  bl 0x7103778300
7101a4c268  ldr x0,[x19, #0x2e8]
7101a4c26c  mov v0.16B,v8.16B
7101a4c270  adrp x1,0x71042d5000
7101a4c274  add x1,x1,#0xcab
7101a4c278  bl 0x7103778300
7101a4c27c  adrp x1,0x71042f8000
7101a4c280  add x1,x1,#0xc1e
7101a4c284  add x8,sp,#0x1c0
7101a4c288  mov x0,x22
7101a4c28c  add x20,sp,#0x1c0
7101a4c290  bl 0x7103776640
7101a4c294  add x8,x19,#0x2f0
7101a4c298  cmp x8,x20
7101a4c29c  b.eq 0x7101a4c2cc
7101a4c2a0  ldr x8,[sp, #0x1c8]
7101a4c2a4  str xzr,[sp, #0x1c8]
7101a4c2a8  ldr x22,[x19, #0x2f8]
7101a4c2ac  str x8,[x19, #0x2f8]
7101a4c2b0  cbz x22,0x7101a4c2cc
7101a4c2b4  ldr x0,[x22, #0x18]
7101a4c2b8  stp x27,xzr,[x22, #0x10]
7101a4c2bc  cbz x0,0x7101a4c2c4
7101a4c2c0  bl 0x710392eb40
7101a4c2c4  mov x0,x22
7101a4c2c8  bl 0x710392eb40
7101a4c2cc  ldr x22,[sp, #0x1c8]
7101a4c2d0  stp x26,xzr,[sp, #0x1c0]
7101a4c2d4  cbz x22,0x7101a4c2f0
7101a4c2d8  ldr x0,[x22, #0x18]
7101a4c2dc  stp x27,xzr,[x22, #0x10]
7101a4c2e0  cbz x0,0x7101a4c2e8
7101a4c2e4  bl 0x710392eb40
7101a4c2e8  mov x0,x22
7101a4c2ec  bl 0x710392eb40
7101a4c2f0  fmov s8,0x3f800000
7101a4c2f4  stp x25,x21,[sp, #0x28]
7101a4c2f8  ldr x0,[x19, #0x2f8]
7101a4c2fc  mov x23,#0x753f
7101a4c300  movk x23,#0x95d0, LSL #16
7101a4c304  adrp x1,0x710436c000
7101a4c308  add x1,x1,#0xb6c
7101a4c30c  movk x23,#0xb, LSL #32
7101a4c310  mov v0.16B,v8.16B
7101a4c314  bl 0x7103778300
7101a4c318  ldr x0,[x19, #0x2f8]
7101a4c31c  mov v0.16B,v8.16B
7101a4c320  adrp x1,0x71042d5000
7101a4c324  add x1,x1,#0xcab
7101a4c328  bl 0x7103778300
7101a4c32c  mov w8,#0x5
7101a4c330  add x9,sp,#0x1c0
7101a4c334  str x8,[x19, #0x3c8]
7101a4c338  add x26,x9,#0x8
7101a4c33c  add x8,x9,#0x3e8
7101a4c340  str x8,[sp, #0x8]
7101a4c344  add x8,x19,#0x250
7101a4c348  mov x0,x26
7101a4c34c  add x21,x9,#0x1a8
7101a4c350  str x8,[sp, #0x38]
7101a4c354  add x25,x9,#0x1c4
7101a4c358  add x27,x9,#0x1d8
7101a4c35c  add x22,x9,#0x208
7101a4c360  add x20,x9,#0x218
7101a4c364  str wzr,[sp, #0x1c0]
7101a4c368  add x24,x9,#0x230
7101a4c36c  add x28,x9,#0x3d0
7101a4c370  bl 0x71017abd00
7101a4c374  mov w8,#0xffffffff
7101a4c378  mov x9,x8
7101a4c37c  str x8,[sp, #0x368]
7101a4c380  mov x8,#-0x1
7101a4c384  str xzr,[sp, #0x370]
7101a4c388  strh wzr,[sp, #0x380]
7101a4c38c  str x8,[sp, #0x378]
7101a4c390  mov x0,x24
7101a4c394  str x8,[x25]
7101a4c398  orr w8,wzr,#0xffff
7101a4c39c  strh w8,[sp, #0x38c]
7101a4c3a0  orr x8,xzr,#0x3f8000003f800000
7101a4c3a4  str xzr,[sp, #0x390]
7101a4c3a8  strh wzr,[sp, #0x398]
7101a4c3ac  str w9,[sp, #0x3c8]
7101a4c3b0  strb wzr,[sp, #0x3cc]
7101a4c3b4  str wzr,[sp, #0x3d0]
7101a4c3b8  strb wzr,[sp, #0x3d4]
7101a4c3bc  str x8,[sp, #0x3d8]
7101a4c3c0  str x8,[sp, #0x3e0]
7101a4c3c4  strh wzr,[sp, #0x3e8]
7101a4c3c8  bl 0x71017abd00
7101a4c3cc  orr w8,wzr,#0xff
7101a4c3d0  strb w8,[sp, #0x5a0]
7101a4c3d4  mov x8,#0x500000000
7101a4c3d8  strb wzr,[sp, #0x590]
7101a4c3dc  str x23,[sp, #0x598]
7101a4c3e0  str xzr,[sp, #0x5b0]
7101a4c3e4  str x8,[sp, #0x5a8]
7101a4c3e8  str wzr,[sp, #0x1c0]
7101a4c3ec  ldr x23,[x19, #0x258]
7101a4c3f0  ldr x8,[x19, #0x260]
7101a4c3f4  cmp x23,x8
7101a4c3f8  str x27,[sp, #0x40]
7101a4c3fc  stp x28,x22,[sp, #0x18]
7101a4c400  str x20,[sp, #0x10]
7101a4c404  b.eq 0x7101a4c4c4
7101a4c408  add x0,x23,#0x8
7101a4c40c  mov x1,x26
7101a4c410  str wzr,[x23]
7101a4c414  bl 0x71015547e0
7101a4c418  ldp x8,x9,[x21]
7101a4c41c  ldr x10,[x21, #0x10]
7101a4c420  ldrh w11,[x21, #0x18]
7101a4c424  strh w11,[x23, #0x1c0]
7101a4c428  str x8,[x23, #0x1a8]
7101a4c42c  stp x9,x10,[x23, #0x1b0]
7101a4c430  ldr x8,[x25]
7101a4c434  ldrh w9,[x25, #0x8]
7101a4c438  add x12,x23,#0x1c4
7101a4c43c  add x0,x23,#0x1d0
7101a4c440  mov x1,x27
7101a4c444  strh w9,[x23, #0x1cc]
7101a4c448  str x8,[x12]
7101a4c44c  str wzr,[x23, #0x1d0]
7101a4c450  bl 0x7101696040
7101a4c454  ldr x8,[x22]
7101a4c458  ldur x9,[x22, #0x5]
7101a4c45c  add x10,x23,#0x20d
7101a4c460  str x9,[x10]
7101a4c464  str x8,[x23, #0x208]
7101a4c468  ldrh w10,[x20, #0x10]
7101a4c46c  ldp x8,x9,[x20]
7101a4c470  add x0,x23,#0x230
7101a4c474  mov x1,x24
7101a4c478  strh w10,[x23, #0x228]
7101a4c47c  str x9,[x23, #0x220]
7101a4c480  str x8,[x23, #0x218]
7101a4c484  bl 0x71015547e0
7101a4c488  ldp x8,x9,[x28]
7101a4c48c  ldrb w10,[x28, #0x10]
7101a4c490  ldr x27,[sp, #0x8]
7101a4c494  strb w10,[x23, #0x3e0]
7101a4c498  str x9,[x23, #0x3d8]
7101a4c49c  str x8,[x23, #0x3d0]
7101a4c4a0  ldp x8,x9,[x27]
7101a4c4a4  str x9,[x23, #0x3f0]
7101a4c4a8  str x8,[x23, #0x3e8]
7101a4c4ac  ldr x8,[x19, #0x258]
7101a4c4b0  ldr x20,[sp, #0x38]
7101a4c4b4  mov x22,x24
7101a4c4b8  add x8,x8,#0x3f8
7101a4c4bc  str x8,[x19, #0x258]
7101a4c4c0  b 0x7101a4c4dc
7101a4c4c4  ldr x20,[sp, #0x38]
7101a4c4c8  add x1,sp,#0x1c0
7101a4c4cc  mov x0,x20
7101a4c4d0  bl 0x7101a492f0
7101a4c4d4  ldr x27,[sp, #0x8]
7101a4c4d8  mov x22,x24
7101a4c4dc  mov x0,x26
7101a4c4e0  str wzr,[sp, #0x1c0]
7101a4c4e4  bl 0x71017abd00
7101a4c4e8  mov w8,#0xffffffff
7101a4c4ec  mov x9,x8
7101a4c4f0  str x8,[sp, #0x368]
7101a4c4f4  mov x8,#-0x1
7101a4c4f8  str xzr,[sp, #0x370]
7101a4c4fc  strh wzr,[sp, #0x380]
7101a4c500  str x8,[sp, #0x378]
7101a4c504  mov x0,x22
7101a4c508  str x8,[x25]
7101a4c50c  orr w8,wzr,#0xffff
7101a4c510  strh w8,[x25, #0x8]
7101a4c514  orr x8,xzr,#0x3f8000003f800000
7101a4c518  str xzr,[sp, #0x390]
7101a4c51c  strh wzr,[sp, #0x398]
7101a4c520  str w9,[sp, #0x3c8]
7101a4c524  strb wzr,[sp, #0x3cc]
7101a4c528  str wzr,[sp, #0x3d0]
7101a4c52c  strb wzr,[sp, #0x3d4]
7101a4c530  str x8,[sp, #0x3d8]
7101a4c534  str x8,[sp, #0x3e0]
7101a4c538  strh wzr,[sp, #0x3e8]
7101a4c53c  bl 0x71017abd00
7101a4c540  orr w8,wzr,#0xff
7101a4c544  mov x24,#0x753f
7101a4c548  movk x24,#0x95d0, LSL #16
7101a4c54c  strb w8,[sp, #0x5a0]
7101a4c550  mov x8,#0x500000000
7101a4c554  movk x24,#0xb, LSL #32
7101a4c558  str x8,[sp, #0x5a8]
7101a4c55c  mov w8,#0x1
7101a4c560  strb wzr,[sp, #0x590]
7101a4c564  str x24,[sp, #0x598]
7101a4c568  str xzr,[sp, #0x5b0]
7101a4c56c  str w8,[sp, #0x1c0]
7101a4c570  ldr x23,[x19, #0x258]
7101a4c574  ldr x9,[x19, #0x260]
7101a4c578  cmp x23,x9
7101a4c57c  b.eq 0x7101a4c640
7101a4c580  add x0,x23,#0x8
7101a4c584  mov x1,x26
7101a4c588  str w8,[x23]
7101a4c58c  bl 0x71015547e0
7101a4c590  ldp x8,x9,[x21]
7101a4c594  ldr x10,[x21, #0x10]
7101a4c598  ldrh w11,[x21, #0x18]
7101a4c59c  strh w11,[x23, #0x1c0]
7101a4c5a0  str x8,[x23, #0x1a8]
7101a4c5a4  stp x9,x10,[x23, #0x1b0]
7101a4c5a8  ldr x8,[x25]
7101a4c5ac  ldrh w9,[x25, #0x8]
7101a4c5b0  ldr x1,[sp, #0x40]
7101a4c5b4  add x12,x23,#0x1c4
7101a4c5b8  add x0,x23,#0x1d0
7101a4c5bc  strh w9,[x23, #0x1cc]
7101a4c5c0  str x8,[x12]
7101a4c5c4  str wzr,[x23, #0x1d0]
7101a4c5c8  bl 0x7101696040
7101a4c5cc  ldr x20,[sp, #0x20]
7101a4c5d0  ldr x8,[x20]
7101a4c5d4  ldur x9,[x20, #0x5]
7101a4c5d8  ldr x28,[sp, #0x10]
7101a4c5dc  add x10,x23,#0x20d
7101a4c5e0  str x9,[x10]
7101a4c5e4  str x8,[x23, #0x208]
7101a4c5e8  ldp x8,x9,[x28]
7101a4c5ec  ldrh w10,[x28, #0x10]
7101a4c5f0  add x0,x23,#0x230
7101a4c5f4  mov x1,x22
7101a4c5f8  mov x24,x26
7101a4c5fc  strh w10,[x23, #0x228]
7101a4c600  str x9,[x23, #0x220]
7101a4c604  str x8,[x23, #0x218]
7101a4c608  bl 0x71015547e0
7101a4c60c  ldr x26,[sp, #0x18]
7101a4c610  ldp x8,x9,[x26]
7101a4c614  ldrb w10,[x26, #0x10]
7101a4c618  strb w10,[x23, #0x3e0]
7101a4c61c  str x9,[x23, #0x3d8]
7101a4c620  str x8,[x23, #0x3d0]
7101a4c624  ldp x8,x9,[x27]
7101a4c628  str x9,[x23, #0x3f0]
7101a4c62c  str x8,[x23, #0x3e8]
7101a4c630  ldr x8,[x19, #0x258]
7101a4c634  add x8,x8,#0x3f8
7101a4c638  str x8,[x19, #0x258]
7101a4c63c  b 0x7101a4c658
7101a4c640  add x1,sp,#0x1c0
7101a4c644  mov x0,x20
7101a4c648  bl 0x7101a492f0
7101a4c64c  mov x24,x26
7101a4c650  ldp x26,x20,[sp, #0x18]
7101a4c654  ldr x28,[sp, #0x10]
7101a4c658  mov x0,x24
7101a4c65c  str wzr,[sp, #0x1c0]
7101a4c660  bl 0x71017abd00
7101a4c664  mov w8,#0xffffffff
7101a4c668  mov x9,x8
7101a4c66c  str x8,[sp, #0x368]
7101a4c670  mov x8,#-0x1
7101a4c674  str xzr,[sp, #0x370]
7101a4c678  strh wzr,[sp, #0x380]
7101a4c67c  str x8,[sp, #0x378]
7101a4c680  mov x0,x22
7101a4c684  str x8,[x25]
7101a4c688  orr w8,wzr,#0xffff
7101a4c68c  strh w8,[x25, #0x8]
7101a4c690  orr x8,xzr,#0x3f8000003f800000
7101a4c694  str xzr,[sp, #0x390]
7101a4c698  strh wzr,[sp, #0x398]
7101a4c69c  str w9,[sp, #0x3c8]
7101a4c6a0  strb wzr,[sp, #0x3cc]
7101a4c6a4  str wzr,[sp, #0x3d0]
7101a4c6a8  strb wzr,[sp, #0x3d4]
7101a4c6ac  str x8,[sp, #0x3d8]
7101a4c6b0  str x8,[sp, #0x3e0]
7101a4c6b4  strh wzr,[sp, #0x3e8]
7101a4c6b8  bl 0x71017abd00
7101a4c6bc  mov x8,#0x753f
7101a4c6c0  movk x8,#0x95d0, LSL #16
7101a4c6c4  movk x8,#0xb, LSL #32
7101a4c6c8  str x8,[sp, #0x598]
7101a4c6cc  orr w8,wzr,#0xff
7101a4c6d0  strb w8,[sp, #0x5a0]
7101a4c6d4  mov x8,#0x500000000
7101a4c6d8  str x8,[sp, #0x5a8]
7101a4c6dc  mov w8,#0x2
7101a4c6e0  strb wzr,[sp, #0x590]
7101a4c6e4  str xzr,[sp, #0x5b0]
7101a4c6e8  str w8,[sp, #0x1c0]
7101a4c6ec  ldr x23,[x19, #0x258]
7101a4c6f0  ldr x9,[x19, #0x260]
7101a4c6f4  cmp x23,x9
7101a4c6f8  b.eq 0x7101a4c7ac
7101a4c6fc  add x0,x23,#0x8
7101a4c700  mov x1,x24
7101a4c704  str w8,[x23]
7101a4c708  bl 0x71015547e0
7101a4c70c  ldp x8,x9,[x21]
7101a4c710  ldr x10,[x21, #0x10]
7101a4c714  ldrh w11,[x21, #0x18]
7101a4c718  strh w11,[x23, #0x1c0]
7101a4c71c  str x8,[x23, #0x1a8]
7101a4c720  stp x9,x10,[x23, #0x1b0]
7101a4c724  ldr x8,[x25]
7101a4c728  ldrh w9,[x25, #0x8]
7101a4c72c  ldr x1,[sp, #0x40]
7101a4c730  add x12,x23,#0x1c4
7101a4c734  add x0,x23,#0x1d0
7101a4c738  strh w9,[x23, #0x1cc]
7101a4c73c  str x8,[x12]
7101a4c740  str wzr,[x23, #0x1d0]
7101a4c744  bl 0x7101696040
7101a4c748  ldr x8,[x20]
7101a4c74c  ldur x9,[x20, #0x5]
7101a4c750  add x10,x23,#0x20d
7101a4c754  str x9,[x10]
7101a4c758  str x8,[x23, #0x208]
7101a4c75c  ldrh w10,[x28, #0x10]
7101a4c760  ldp x8,x9,[x28]
7101a4c764  add x0,x23,#0x230
7101a4c768  mov x1,x22
7101a4c76c  strh w10,[x23, #0x228]
7101a4c770  str x9,[x23, #0x220]
7101a4c774  str x8,[x23, #0x218]
7101a4c778  bl 0x71015547e0
7101a4c77c  ldp x8,x9,[x26]
7101a4c780  ldrb w10,[x26, #0x10]
7101a4c784  strb w10,[x23, #0x3e0]
7101a4c788  str x9,[x23, #0x3d8]
7101a4c78c  str x8,[x23, #0x3d0]
7101a4c790  ldp x8,x9,[x27]
7101a4c794  str x9,[x23, #0x3f0]
7101a4c798  str x8,[x23, #0x3e8]
7101a4c79c  ldr x8,[x19, #0x258]
7101a4c7a0  add x8,x8,#0x3f8
7101a4c7a4  str x8,[x19, #0x258]
7101a4c7a8  b 0x7101a4c7b8
7101a4c7ac  ldr x0,[sp, #0x38]
7101a4c7b0  add x1,sp,#0x1c0
7101a4c7b4  bl 0x7101a492f0
7101a4c7b8  mov x0,x24
7101a4c7bc  str wzr,[sp, #0x1c0]
7101a4c7c0  bl 0x71017abd00
7101a4c7c4  mov w8,#0xffffffff
7101a4c7c8  mov x9,x8
7101a4c7cc  str x8,[sp, #0x368]
7101a4c7d0  mov x8,#-0x1
7101a4c7d4  str xzr,[sp, #0x370]
7101a4c7d8  strh wzr,[sp, #0x380]
7101a4c7dc  str x8,[sp, #0x378]
7101a4c7e0  mov x0,x22
7101a4c7e4  str x8,[x25]
7101a4c7e8  orr w8,wzr,#0xffff
7101a4c7ec  strh w8,[x25, #0x8]
7101a4c7f0  orr x8,xzr,#0x3f8000003f800000
7101a4c7f4  str xzr,[sp, #0x390]
7101a4c7f8  strh wzr,[sp, #0x398]
7101a4c7fc  str w9,[sp, #0x3c8]
7101a4c800  strb wzr,[sp, #0x3cc]
7101a4c804  str wzr,[sp, #0x3d0]
7101a4c808  strb wzr,[sp, #0x3d4]
7101a4c80c  str x8,[sp, #0x3d8]
7101a4c810  str x8,[sp, #0x3e0]
7101a4c814  strh wzr,[sp, #0x3e8]
7101a4c818  bl 0x71017abd00
7101a4c81c  mov x8,#0x753f
7101a4c820  movk x8,#0x95d0, LSL #16
7101a4c824  movk x8,#0xb, LSL #32
7101a4c828  str x8,[sp, #0x598]
7101a4c82c  orr w8,wzr,#0xff
7101a4c830  strb w8,[sp, #0x5a0]
7101a4c834  mov x8,#0x500000000
7101a4c838  str x8,[sp, #0x5a8]
7101a4c83c  orr w8,wzr,#0x3
7101a4c840  strb wzr,[sp, #0x590]
7101a4c844  str xzr,[sp, #0x5b0]
7101a4c848  str w8,[sp, #0x1c0]
7101a4c84c  ldr x23,[x19, #0x258]
7101a4c850  ldr x9,[x19, #0x260]
7101a4c854  cmp x23,x9
7101a4c858  b.eq 0x7101a4c90c
7101a4c85c  add x0,x23,#0x8
7101a4c860  mov x1,x24
7101a4c864  str w8,[x23]
7101a4c868  bl 0x71015547e0
7101a4c86c  ldp x8,x9,[x21]
7101a4c870  ldr x10,[x21, #0x10]
7101a4c874  ldrh w11,[x21, #0x18]
7101a4c878  strh w11,[x23, #0x1c0]
7101a4c87c  str x8,[x23, #0x1a8]
7101a4c880  stp x9,x10,[x23, #0x1b0]
7101a4c884  ldr x8,[x25]
7101a4c888  ldrh w9,[x25, #0x8]
7101a4c88c  ldr x1,[sp, #0x40]
7101a4c890  add x12,x23,#0x1c4
7101a4c894  add x0,x23,#0x1d0
7101a4c898  strh w9,[x23, #0x1cc]
7101a4c89c  str x8,[x12]
7101a4c8a0  str wzr,[x23, #0x1d0]
7101a4c8a4  bl 0x7101696040
7101a4c8a8  ldr x8,[x20]
7101a4c8ac  ldur x9,[x20, #0x5]
7101a4c8b0  add x10,x23,#0x20d
7101a4c8b4  str x9,[x10]
7101a4c8b8  str x8,[x23, #0x208]
7101a4c8bc  ldrh w10,[x28, #0x10]
7101a4c8c0  ldp x8,x9,[x28]
7101a4c8c4  add x0,x23,#0x230
7101a4c8c8  mov x1,x22
7101a4c8cc  strh w10,[x23, #0x228]
7101a4c8d0  str x9,[x23, #0x220]
7101a4c8d4  str x8,[x23, #0x218]
7101a4c8d8  bl 0x71015547e0
7101a4c8dc  ldp x8,x9,[x26]
7101a4c8e0  ldrb w10,[x26, #0x10]
7101a4c8e4  strb w10,[x23, #0x3e0]
7101a4c8e8  str x9,[x23, #0x3d8]
7101a4c8ec  str x8,[x23, #0x3d0]
7101a4c8f0  ldp x8,x9,[x27]
7101a4c8f4  str x9,[x23, #0x3f0]
7101a4c8f8  str x8,[x23, #0x3e8]
7101a4c8fc  ldr x8,[x19, #0x258]
7101a4c900  add x8,x8,#0x3f8
7101a4c904  str x8,[x19, #0x258]
7101a4c908  b 0x7101a4c918
7101a4c90c  ldr x0,[sp, #0x38]
7101a4c910  add x1,sp,#0x1c0
7101a4c914  bl 0x7101a492f0
7101a4c918  mov x0,x24
7101a4c91c  str wzr,[sp, #0x1c0]
7101a4c920  bl 0x71017abd00
7101a4c924  mov w8,#0xffffffff
7101a4c928  mov x9,x8
7101a4c92c  str x8,[sp, #0x368]
7101a4c930  mov x8,#-0x1
7101a4c934  str xzr,[sp, #0x370]
7101a4c938  strh wzr,[sp, #0x380]
7101a4c93c  str x8,[sp, #0x378]
7101a4c940  mov x0,x22
7101a4c944  str x8,[x25]
7101a4c948  orr w8,wzr,#0xffff
7101a4c94c  strh w8,[x25, #0x8]
7101a4c950  orr x8,xzr,#0x3f8000003f800000
7101a4c954  str xzr,[sp, #0x390]
7101a4c958  strh wzr,[sp, #0x398]
7101a4c95c  str w9,[sp, #0x3c8]
7101a4c960  strb wzr,[sp, #0x3cc]
7101a4c964  str wzr,[sp, #0x3d0]
7101a4c968  strb wzr,[sp, #0x3d4]
7101a4c96c  str x8,[sp, #0x3d8]
7101a4c970  str x8,[sp, #0x3e0]
7101a4c974  strh wzr,[sp, #0x3e8]
7101a4c978  bl 0x71017abd00
7101a4c97c  mov x8,#0x753f
7101a4c980  movk x8,#0x95d0, LSL #16
7101a4c984  movk x8,#0xb, LSL #32
7101a4c988  str x8,[sp, #0x598]
7101a4c98c  orr w8,wzr,#0xff
7101a4c990  strb w8,[sp, #0x5a0]
7101a4c994  mov x8,#0x500000000
7101a4c998  str x8,[sp, #0x5a8]
7101a4c99c  mov w8,#0x4
7101a4c9a0  strb wzr,[sp, #0x590]
7101a4c9a4  str xzr,[sp, #0x5b0]
7101a4c9a8  str w8,[sp, #0x1c0]
7101a4c9ac  ldr x23,[x19, #0x258]
7101a4c9b0  ldr x9,[x19, #0x260]
7101a4c9b4  cmp x23,x9
7101a4c9b8  b.eq 0x7101a4ca6c
7101a4c9bc  add x0,x23,#0x8
7101a4c9c0  mov x1,x24
7101a4c9c4  str w8,[x23]
7101a4c9c8  bl 0x71015547e0
7101a4c9cc  ldp x8,x9,[x21]
7101a4c9d0  ldr x10,[x21, #0x10]
7101a4c9d4  ldrh w11,[x21, #0x18]
7101a4c9d8  strh w11,[x23, #0x1c0]
7101a4c9dc  str x8,[x23, #0x1a8]
7101a4c9e0  stp x9,x10,[x23, #0x1b0]
7101a4c9e4  ldr x8,[x25]
7101a4c9e8  ldrh w9,[x25, #0x8]
7101a4c9ec  ldr x1,[sp, #0x40]
7101a4c9f0  add x12,x23,#0x1c4
7101a4c9f4  add x0,x23,#0x1d0
7101a4c9f8  strh w9,[x23, #0x1cc]
7101a4c9fc  str x8,[x12]
7101a4ca00  str wzr,[x23, #0x1d0]
7101a4ca04  bl 0x7101696040
7101a4ca08  ldr x8,[x20]
7101a4ca0c  ldur x9,[x20, #0x5]
7101a4ca10  add x10,x23,#0x20d
7101a4ca14  str x9,[x10]
7101a4ca18  str x8,[x23, #0x208]
7101a4ca1c  ldrh w10,[x28, #0x10]
7101a4ca20  ldp x8,x9,[x28]
7101a4ca24  add x0,x23,#0x230
7101a4ca28  mov x1,x22
7101a4ca2c  strh w10,[x23, #0x228]
7101a4ca30  str x9,[x23, #0x220]
7101a4ca34  str x8,[x23, #0x218]
7101a4ca38  bl 0x71015547e0
7101a4ca3c  ldp x8,x9,[x26]
7101a4ca40  ldrb w10,[x26, #0x10]
7101a4ca44  strb w10,[x23, #0x3e0]
7101a4ca48  str x9,[x23, #0x3d8]
7101a4ca4c  str x8,[x23, #0x3d0]
7101a4ca50  ldp x8,x9,[x27]
7101a4ca54  str x9,[x23, #0x3f0]
7101a4ca58  str x8,[x23, #0x3e8]
7101a4ca5c  ldr x8,[x19, #0x258]
7101a4ca60  add x8,x8,#0x3f8
7101a4ca64  str x8,[x19, #0x258]
7101a4ca68  b 0x7101a4ca78
7101a4ca6c  ldr x0,[sp, #0x38]
7101a4ca70  add x1,sp,#0x1c0
7101a4ca74  bl 0x7101a492f0
7101a4ca78  mov w24,#0x101
7101a4ca7c  add x8,sp,#0xcb
7101a4ca80  mov w20,#0x1
7101a4ca84  mov x21,#0x41f0000000000000
7101a4ca88  add x0,sp,#0x1c0
7101a4ca8c  str xzr,[sp, #0x1c0]
7101a4ca90  adrp x28,0x710523d000
7101a4ca94  add x28,x28,#0x9a8
7101a4ca98  strh w24,[sp, #0x1c8]
7101a4ca9c  strh wzr,[sp, #0x1ce]
7101a4caa0  stur wzr,[x8, #0xff]
7101a4caa4  str w20,[sp, #0x1d0]
7101a4caa8  strh w20,[sp, #0x1d4]
7101a4caac  strb w20,[sp, #0x1d6]
7101a4cab0  str x21,[sp, #0x1d8]
7101a4cab4  str wzr,[sp, #0x1e0]
7101a4cab8  str xzr,[sp, #0x210]
7101a4cabc  str xzr,[sp, #0x240]
7101a4cac0  str xzr,[sp, #0x270]
7101a4cac4  str xzr,[sp, #0x2a0]
7101a4cac8  str xzr,[sp, #0x2d0]
7101a4cacc  str wzr,[sp, #0x2e0]
7101a4cad0  bl 0x710337df20
7101a4cad4  ldr x27,[sp, #0x28]
7101a4cad8  add x22,x19,#0x328
7101a4cadc  orr w25,wzr,#0x3
7101a4cae0  mov w26,#0x2
7101a4cae4  adrp x2,0x71043e0000
7101a4cae8  add x2,x2,#0xa56
7101a4caec  add x3,sp,#0x1c0
7101a4caf0  mov x0,x22
7101a4caf4  str w25,[sp, #0x1c4]
7101a4caf8  mov x1,x27
7101a4cafc  strb wzr,[sp, #0x1c9]
7101a4cb00  strb w20,[sp, #0x1cc]
7101a4cb04  str w26,[sp, #0x1e0]
7101a4cb08  bl 0x7103770b30
7101a4cb0c  adrp x2,0x710425e000
7101a4cb10  add x2,x2,#0xd98
7101a4cb14  mov x0,x22
7101a4cb18  mov w1,wzr
7101a4cb1c  bl 0x71037717d0
7101a4cb20  ldr x0,[x19, #0x328]
7101a4cb24  ldr x10,[x0, #0x1b8]
7101a4cb28  cbz x10,0x7101a4cbac
7101a4cb2c  ldr w8,[x19, #0x150]
7101a4cb30  add x11,x0,#0x1b8
7101a4cb34  mov x9,x11
7101a4cb38  ldr w12,[x10, #0x20]
7101a4cb3c  cmp w12,#0x0
7101a4cb40  cset w12,lt
7101a4cb44  csel x9,x9,x10,lt
7101a4cb48  ldr x10,[x10, w12, UXTW #0x3]
7101a4cb4c  cbnz x10,0x7101a4cb38
7101a4cb50  cmp x9,x11
7101a4cb54  b.eq 0x7101a4cbac
7101a4cb58  ldr w10,[x9, #0x20]
7101a4cb5c  cmp w10,#0x0
7101a4cb60  b.gt 0x7101a4cbac
7101a4cb64  ldr x23,[x9, #0x28]
7101a4cb68  cbz x23,0x7101a4cbac
7101a4cb6c  cmp w8,#0x1
7101a4cb70  cset w24,lt
7101a4cb74  cmp w8,#0x0
7101a4cb78  ldr x8,[x23]
7101a4cb7c  cset w1,gt
7101a4cb80  ldr x8,[x8, #0x1f8]
7101a4cb84  mov x0,x23
7101a4cb88  blr x8
7101a4cb8c  ldr x8,[x23]
7101a4cb90  ldr x8,[x8, #0x388]
7101a4cb94  mov x0,x23
7101a4cb98  mov w1,w24
7101a4cb9c  mov w2,wzr
7101a4cba0  mov w24,#0x101
7101a4cba4  blr x8
7101a4cba8  ldr x0,[x22]
7101a4cbac  ldr x8,[x0]
7101a4cbb0  ldr x8,[x8, #0x60]
7101a4cbb4  mov w1,#0x1
7101a4cbb8  blr x8
7101a4cbbc  ldr x0,[x19, #0x328]
7101a4cbc0  ldr x8,[x0]
7101a4cbc4  ldr x8,[x8, #0x70]
7101a4cbc8  mov w1,#0x1
7101a4cbcc  blr x8
7101a4cbd0  add x0,sp,#0x90
7101a4cbd4  str xzr,[sp, #0x90]
7101a4cbd8  strh w24,[sp, #0x98]
7101a4cbdc  strh wzr,[sp, #0x9e]
7101a4cbe0  stur wzr,[sp, #0x9a]
7101a4cbe4  str w20,[sp, #0xa0]
7101a4cbe8  strh w20,[sp, #0xa4]
7101a4cbec  strb w20,[sp, #0xa6]
7101a4cbf0  str x21,[sp, #0xa8]
7101a4cbf4  str wzr,[sp, #0xb0]
7101a4cbf8  str xzr,[sp, #0xe0]
7101a4cbfc  str xzr,[sp, #0x110]
7101a4cc00  str xzr,[sp, #0x140]
7101a4cc04  str xzr,[sp, #0x170]
7101a4cc08  str xzr,[sp, #0x1a0]
7101a4cc0c  str wzr,[sp, #0x1b0]
7101a4cc10  bl 0x710337df20
7101a4cc14  str w25,[sp, #0x94]
7101a4cc18  strb wzr,[sp, #0x99]
7101a4cc1c  adrp x0,0x710436b000
7101a4cc20  add x0,x0,#0xce3
7101a4cc24  strb w20,[sp, #0x9c]
7101a4cc28  add x20,sp,#0x48
7101a4cc2c  str w26,[sp, #0xb0]
7101a4cc30  ldr w8,[x19, #0x150]
7101a4cc34  add w1,w8,#0x1
7101a4cc38  add x8,sp,#0x48
7101a4cc3c  bl 0x71003a4ca0
7101a4cc40  ldr x25,[sp, #0x30]
7101a4cc44  add x22,x19,#0x300
7101a4cc48  add x2,x20,#0x8
7101a4cc4c  add x3,sp,#0x90
7101a4cc50  mov x0,x22
7101a4cc54  mov x1,x25
7101a4cc58  bl 0x7103770b30
7101a4cc5c  ldr w8,[x19, #0x150]
7101a4cc60  add w3,w8,#0x1
7101a4cc64  adrp x2,0x7104339000
7101a4cc68  add x2,x2,#0xc1b
7101a4cc6c  mov w1,#0x1
7101a4cc70  mov x0,x22
7101a4cc74  bl 0x71037717d0
7101a4cc78  ldr w8,[x19, #0x150]
7101a4cc7c  add w3,w8,#0x1
7101a4cc80  adrp x2,0x71043f0000
7101a4cc84  add x2,x2,#0x42a
7101a4cc88  mov w1,#0x2
7101a4cc8c  mov x0,x22
7101a4cc90  bl 0x71037717d0
7101a4cc94  ldr x0,[x19, #0x300]
7101a4cc98  ldr x8,[x0, #0x1b8]
7101a4cc9c  cbz x8,0x7101a4cd90
7101a4cca0  add x9,x0,#0x1b8
7101a4cca4  mov x10,x9
7101a4cca8  mov x11,x8
7101a4ccac  adrp x26,0x710523d000
7101a4ccb0  add x26,x26,#0x988
7101a4ccb4  ldr w12,[x11, #0x20]
7101a4ccb8  cmp w12,#0x1
7101a4ccbc  cset w12,lt
7101a4ccc0  csel x10,x10,x11,lt
7101a4ccc4  ldr x11,[x11, w12, UXTW #0x3]
7101a4ccc8  cbnz x11,0x7101a4ccb4
7101a4cccc  cmp x10,x9
7101a4ccd0  b.eq 0x7101a4cd20
7101a4ccd4  ldr w11,[x10, #0x20]
7101a4ccd8  cmp w11,#0x1
7101a4ccdc  b.gt 0x7101a4cd20
7101a4cce0  ldr x23,[x10, #0x28]
7101a4cce4  cbz x23,0x7101a4cd20
7101a4cce8  ldr x8,[x23]
7101a4ccec  ldr x8,[x8, #0x1f8]
7101a4ccf0  mov x0,x23
7101a4ccf4  mov w1,wzr
7101a4ccf8  blr x8
7101a4ccfc  ldr x8,[x23]
7101a4cd00  ldr x8,[x8, #0x388]
7101a4cd04  mov w1,#0x1
7101a4cd08  mov x0,x23
7101a4cd0c  mov w2,wzr
7101a4cd10  blr x8
7101a4cd14  ldr x0,[x22]
7101a4cd18  ldr x8,[x0, #0x1b8]
7101a4cd1c  add x9,x0,#0x1b8
7101a4cd20  cbz x8,0x7101a4cd98
7101a4cd24  mov x10,x9
7101a4cd28  ldr w11,[x8, #0x20]
7101a4cd2c  cmp w11,#0x2
7101a4cd30  cset w11,lt
7101a4cd34  csel x10,x10,x8,lt
7101a4cd38  ldr x8,[x8, w11, UXTW #0x3]
7101a4cd3c  cbnz x8,0x7101a4cd28
7101a4cd40  cmp x10,x9
7101a4cd44  b.eq 0x7101a4cd98
7101a4cd48  ldr w8,[x10, #0x20]
7101a4cd4c  cmp w8,#0x2
7101a4cd50  b.gt 0x7101a4cd98
7101a4cd54  ldr x23,[x10, #0x28]
7101a4cd58  cbz x23,0x7101a4cd98
7101a4cd5c  ldr x8,[x23]
7101a4cd60  ldr x8,[x8, #0x1f8]
7101a4cd64  mov x0,x23
7101a4cd68  mov w1,wzr
7101a4cd6c  blr x8
7101a4cd70  ldr x8,[x23]
7101a4cd74  ldr x8,[x8, #0x388]
7101a4cd78  mov w1,#0x1
7101a4cd7c  mov x0,x23
7101a4cd80  mov w2,wzr
7101a4cd84  blr x8
7101a4cd88  ldr x0,[x22]
7101a4cd8c  b 0x7101a4cd98
7101a4cd90  adrp x26,0x710523d000
7101a4cd94  add x26,x26,#0x988
7101a4cd98  mov x8,#0x208
7101a4cd9c  movk x8,#0xb483, LSL #16
7101a4cda0  movk x8,#0x1b, LSL #32
7101a4cda4  mov w1,#0x2
7101a4cda8  sub x2,x29,#0xa0
7101a4cdac  stur x8,[x29, #-0xa0]
7101a4cdb0  bl 0x7103772070
7101a4cdb4  ldr x0,[x19, #0x300]
7101a4cdb8  ldr x8,[x0]
7101a4cdbc  ldr x8,[x8, #0x60]
7101a4cdc0  mov w1,#0x1
7101a4cdc4  blr x8
7101a4cdc8  ldr x0,[x19, #0x300]
7101a4cdcc  ldr x8,[x0]
7101a4cdd0  ldr x8,[x8, #0x70]
7101a4cdd4  mov w1,#0x1
7101a4cdd8  blr x8
7101a4cddc  str wzr,[sp, #0x620]
7101a4cde0  ldr w8,[x19, #0x150]
7101a4cde4  str w8,[sp, #0x624]
7101a4cde8  ldr w9,[x19, #0x154]
7101a4cdec  add w2,w8,#0x1
7101a4cdf0  adrp x1,0x710439c000
7101a4cdf4  add x1,x1,#0xe96
7101a4cdf8  sub x8,x29,#0xa0
7101a4cdfc  mov x0,x25
7101a4ce00  mov w3,wzr
7101a4ce04  add x22,x19,#0x3b0
7101a4ce08  str w9,[sp, #0x628]
7101a4ce0c  bl 0x7103776640
7101a4ce10  adrp x24,0x71050a8000
7101a4ce14  add x24,x24,#0xc98
7101a4ce18  sub x0,x29,#0xd0
7101a4ce1c  stp x24,xzr,[x29, #-0xd0]
7101a4ce20  ldr x1,[x19, #0x148]
7101a4ce24  sub x2,x29,#0xa0
7101a4ce28  add x3,sp,#0x620
7101a4ce2c  sub x20,x29,#0xd0
7101a4ce30  bl 0x7101a43a00
7101a4ce34  ldur x21,[x29, #-0xc8]
7101a4ce38  fmov s8,0x3f800000
7101a4ce3c  mov v0.16B,v8.16B
7101a4ce40  adrp x1,0x7104412000
7101a4ce44  add x1,x1,#0x36e
7101a4ce48  ldr x0,[x21, #0x20]
7101a4ce4c  bl 0x7103778300
7101a4ce50  str wzr,[x21, #0xd0]
7101a4ce54  ldur x21,[x29, #-0xc8]
7101a4ce58  ldr x0,[x21, #0x20]
7101a4ce5c  mov v0.16B,v8.16B
7101a4ce60  adrp x1,0x710435b000
7101a4ce64  add x1,x1,#0xe3c
7101a4ce68  bl 0x7103778300
7101a4ce6c  strb wzr,[x21, #0x10a]
7101a4ce70  ldr x8,[x19, #0x3b8]
7101a4ce74  ldr x9,[x19, #0x3c0]
7101a4ce78  cmp x8,x9
7101a4ce7c  b.cs 0x7101a4cec0
7101a4ce80  cmp x8,x20
7101a4ce84  stp x24,xzr,[x8]
7101a4ce88  b.eq 0x7101a4ceb0
7101a4ce8c  ldur x9,[x29, #-0xc8]
7101a4ce90  stur xzr,[x29, #-0xc8]
7101a4ce94  ldr x23,[x8, #0x8]
7101a4ce98  str x9,[x8, #0x8]
7101a4ce9c  cbz x23,0x7101a4ceb0
7101a4cea0  mov x0,x23
7101a4cea4  bl 0x7101a41fd0
7101a4cea8  mov x0,x23
7101a4ceac  bl 0x710392eb40
7101a4ceb0  ldr x8,[x19, #0x3b8]
7101a4ceb4  add x8,x8,#0x10
7101a4ceb8  str x8,[x19, #0x3b8]
7101a4cebc  b 0x7101a4cecc
7101a4cec0  sub x1,x29,#0xd0
7101a4cec4  mov x0,x22
7101a4cec8  bl 0x7101a49700
7101a4cecc  ldur x23,[x29, #-0xc8]
7101a4ced0  stp x24,xzr,[x29, #-0xd0]
7101a4ced4  cbz x23,0x7101a4cee8
7101a4ced8  mov x0,x23
7101a4cedc  bl 0x7101a41fd0
7101a4cee0  mov x0,x23
7101a4cee4  bl 0x710392eb40
7101a4cee8  ldur x23,[x29, #-0x98]
7101a4ceec  stp x26,xzr,[x29, #-0xa0]
7101a4cef0  cbz x23,0x7101a4cf0c
7101a4cef4  ldr x0,[x23, #0x18]
7101a4cef8  stp x28,xzr,[x23, #0x10]
7101a4cefc  cbz x0,0x7101a4cf04
7101a4cf00  bl 0x710392eb40
7101a4cf04  mov x0,x23
7101a4cf08  bl 0x710392eb40
7101a4cf0c  mov w8,#0x1
7101a4cf10  str w8,[sp, #0x620]
7101a4cf14  ldr w8,[x19, #0x150]
7101a4cf18  str w8,[sp, #0x624]
7101a4cf1c  ldr w9,[x19, #0x154]
7101a4cf20  add w2,w8,#0x1
7101a4cf24  adrp x1,0x710439c000
7101a4cf28  add x1,x1,#0xe96
7101a4cf2c  sub x8,x29,#0xa0
7101a4cf30  mov w3,#0x1
7101a4cf34  mov x0,x25
7101a4cf38  str w9,[sp, #0x628]
7101a4cf3c  bl 0x7103776640
7101a4cf40  stp x24,xzr,[x29, #-0xd0]
7101a4cf44  ldr x1,[x19, #0x148]
7101a4cf48  sub x0,x29,#0xd0
7101a4cf4c  sub x2,x29,#0xa0
7101a4cf50  add x3,sp,#0x620
7101a4cf54  sub x20,x29,#0xd0
7101a4cf58  bl 0x7101a43a00
7101a4cf5c  ldur x21,[x29, #-0xc8]
7101a4cf60  fmov s8,0x3f800000
7101a4cf64  mov v0.16B,v8.16B
7101a4cf68  adrp x1,0x7104412000
7101a4cf6c  add x1,x1,#0x36e
7101a4cf70  ldr x0,[x21, #0x20]
7101a4cf74  bl 0x7103778300
7101a4cf78  str wzr,[x21, #0xd0]
7101a4cf7c  ldur x21,[x29, #-0xc8]
7101a4cf80  ldr x0,[x21, #0x20]
7101a4cf84  mov v0.16B,v8.16B
7101a4cf88  adrp x1,0x710435b000
7101a4cf8c  add x1,x1,#0xe3c
7101a4cf90  bl 0x7103778300
7101a4cf94  strb wzr,[x21, #0x10a]
7101a4cf98  ldr x8,[x19, #0x3b8]
7101a4cf9c  ldr x9,[x19, #0x3c0]
7101a4cfa0  cmp x8,x9
7101a4cfa4  b.cs 0x7101a4cfe8
7101a4cfa8  cmp x8,x20
7101a4cfac  stp x24,xzr,[x8]
7101a4cfb0  b.eq 0x7101a4cfd8
7101a4cfb4  ldur x9,[x29, #-0xc8]
7101a4cfb8  stur xzr,[x29, #-0xc8]
7101a4cfbc  ldr x23,[x8, #0x8]
7101a4cfc0  str x9,[x8, #0x8]
7101a4cfc4  cbz x23,0x7101a4cfd8
7101a4cfc8  mov x0,x23
7101a4cfcc  bl 0x7101a41fd0
7101a4cfd0  mov x0,x23
7101a4cfd4  bl 0x710392eb40
7101a4cfd8  ldr x8,[x19, #0x3b8]
7101a4cfdc  add x8,x8,#0x10
7101a4cfe0  str x8,[x19, #0x3b8]
7101a4cfe4  b 0x7101a4cff4
7101a4cfe8  sub x1,x29,#0xd0
7101a4cfec  mov x0,x22
7101a4cff0  bl 0x7101a49700
7101a4cff4  ldur x23,[x29, #-0xc8]
7101a4cff8  stp x24,xzr,[x29, #-0xd0]
7101a4cffc  cbz x23,0x7101a4d010
7101a4d000  mov x0,x23
7101a4d004  bl 0x7101a41fd0
7101a4d008  mov x0,x23
7101a4d00c  bl 0x710392eb40
7101a4d010  ldur x23,[x29, #-0x98]
7101a4d014  stp x26,xzr,[x29, #-0xa0]
7101a4d018  cbz x23,0x7101a4d034
7101a4d01c  ldr x0,[x23, #0x18]
7101a4d020  stp x28,xzr,[x23, #0x10]
7101a4d024  cbz x0,0x7101a4d02c
7101a4d028  bl 0x710392eb40
7101a4d02c  mov x0,x23
7101a4d030  bl 0x710392eb40
7101a4d034  mov w8,#0x2
7101a4d038  str w8,[sp, #0x620]
7101a4d03c  ldr w8,[x19, #0x150]
7101a4d040  str w8,[sp, #0x624]
7101a4d044  ldr w9,[x19, #0x154]
7101a4d048  add w2,w8,#0x1
7101a4d04c  adrp x1,0x710439c000
7101a4d050  add x1,x1,#0xe96
7101a4d054  sub x8,x29,#0xa0
7101a4d058  mov w3,#0x2
7101a4d05c  mov x0,x25
7101a4d060  str w9,[sp, #0x628]
7101a4d064  bl 0x7103776640
7101a4d068  stp x24,xzr,[x29, #-0xd0]
7101a4d06c  ldr x1,[x19, #0x148]
7101a4d070  sub x0,x29,#0xd0
7101a4d074  sub x2,x29,#0xa0
7101a4d078  add x3,sp,#0x620
7101a4d07c  sub x20,x29,#0xd0
7101a4d080  bl 0x7101a43a00
7101a4d084  ldur x21,[x29, #-0xc8]
7101a4d088  fmov s8,0x3f800000
7101a4d08c  mov v0.16B,v8.16B
7101a4d090  adrp x1,0x7104412000
7101a4d094  add x1,x1,#0x36e
7101a4d098  ldr x0,[x21, #0x20]
7101a4d09c  bl 0x7103778300
7101a4d0a0  str wzr,[x21, #0xd0]
7101a4d0a4  ldur x21,[x29, #-0xc8]
7101a4d0a8  ldr x0,[x21, #0x20]
7101a4d0ac  mov v0.16B,v8.16B
7101a4d0b0  adrp x1,0x710435b000
7101a4d0b4  add x1,x1,#0xe3c
7101a4d0b8  bl 0x7103778300
7101a4d0bc  strb wzr,[x21, #0x10a]
7101a4d0c0  ldr x8,[x19, #0x3b8]
7101a4d0c4  ldr x9,[x19, #0x3c0]
7101a4d0c8  cmp x8,x9
7101a4d0cc  b.cs 0x7101a4d110
7101a4d0d0  cmp x8,x20
7101a4d0d4  stp x24,xzr,[x8]
7101a4d0d8  b.eq 0x7101a4d100
7101a4d0dc  ldur x9,[x29, #-0xc8]
7101a4d0e0  stur xzr,[x29, #-0xc8]
7101a4d0e4  ldr x23,[x8, #0x8]
7101a4d0e8  str x9,[x8, #0x8]
7101a4d0ec  cbz x23,0x7101a4d100
7101a4d0f0  mov x0,x23
7101a4d0f4  bl 0x7101a41fd0
7101a4d0f8  mov x0,x23
7101a4d0fc  bl 0x710392eb40
7101a4d100  ldr x8,[x19, #0x3b8]
7101a4d104  add x8,x8,#0x10
7101a4d108  str x8,[x19, #0x3b8]
7101a4d10c  b 0x7101a4d11c
7101a4d110  sub x1,x29,#0xd0
7101a4d114  mov x0,x22
7101a4d118  bl 0x7101a49700
7101a4d11c  ldur x23,[x29, #-0xc8]
7101a4d120  stp x24,xzr,[x29, #-0xd0]
7101a4d124  cbz x23,0x7101a4d138
7101a4d128  mov x0,x23
7101a4d12c  bl 0x7101a41fd0
7101a4d130  mov x0,x23
7101a4d134  bl 0x710392eb40
7101a4d138  ldur x23,[x29, #-0x98]
7101a4d13c  stp x26,xzr,[x29, #-0xa0]
7101a4d140  cbz x23,0x7101a4d15c
7101a4d144  ldr x0,[x23, #0x18]
7101a4d148  stp x28,xzr,[x23, #0x10]
7101a4d14c  cbz x0,0x7101a4d154
7101a4d150  bl 0x710392eb40
7101a4d154  mov x0,x23
7101a4d158  bl 0x710392eb40
7101a4d15c  orr w8,wzr,#0x3
7101a4d160  str w8,[sp, #0x620]
7101a4d164  ldr w8,[x19, #0x150]
7101a4d168  str w8,[sp, #0x624]
7101a4d16c  ldr w9,[x19, #0x154]
7101a4d170  add w2,w8,#0x1
7101a4d174  adrp x1,0x710439c000
7101a4d178  add x1,x1,#0xe96
7101a4d17c  sub x8,x29,#0xa0
7101a4d180  orr w3,wzr,#0x3
7101a4d184  mov x0,x25
7101a4d188  str w9,[sp, #0x628]
7101a4d18c  bl 0x7103776640
7101a4d190  stp x24,xzr,[x29, #-0xd0]
7101a4d194  ldr x1,[x19, #0x148]
7101a4d198  sub x0,x29,#0xd0
7101a4d19c  sub x2,x29,#0xa0
7101a4d1a0  add x3,sp,#0x620
7101a4d1a4  sub x20,x29,#0xd0
7101a4d1a8  bl 0x7101a43a00
7101a4d1ac  ldur x21,[x29, #-0xc8]
7101a4d1b0  fmov s8,0x3f800000
7101a4d1b4  mov v0.16B,v8.16B
7101a4d1b8  adrp x1,0x7104412000
7101a4d1bc  add x1,x1,#0x36e
7101a4d1c0  ldr x0,[x21, #0x20]
7101a4d1c4  bl 0x7103778300
7101a4d1c8  str wzr,[x21, #0xd0]
7101a4d1cc  ldur x21,[x29, #-0xc8]
7101a4d1d0  ldr x0,[x21, #0x20]
7101a4d1d4  mov v0.16B,v8.16B
7101a4d1d8  adrp x1,0x710435b000
7101a4d1dc  add x1,x1,#0xe3c
7101a4d1e0  bl 0x7103778300
7101a4d1e4  strb wzr,[x21, #0x10a]
7101a4d1e8  ldr x8,[x19, #0x3b8]
7101a4d1ec  ldr x9,[x19, #0x3c0]
7101a4d1f0  cmp x8,x9
7101a4d1f4  b.cs 0x7101a4d238
7101a4d1f8  cmp x8,x20
7101a4d1fc  stp x24,xzr,[x8]
7101a4d200  b.eq 0x7101a4d228
7101a4d204  ldur x9,[x29, #-0xc8]
7101a4d208  stur xzr,[x29, #-0xc8]
7101a4d20c  ldr x23,[x8, #0x8]
7101a4d210  str x9,[x8, #0x8]
7101a4d214  cbz x23,0x7101a4d228
7101a4d218  mov x0,x23
7101a4d21c  bl 0x7101a41fd0
7101a4d220  mov x0,x23
7101a4d224  bl 0x710392eb40
7101a4d228  ldr x8,[x19, #0x3b8]
7101a4d22c  add x8,x8,#0x10
7101a4d230  str x8,[x19, #0x3b8]
7101a4d234  b 0x7101a4d244
7101a4d238  sub x1,x29,#0xd0
7101a4d23c  mov x0,x22
7101a4d240  bl 0x7101a49700
7101a4d244  ldur x23,[x29, #-0xc8]
7101a4d248  stp x24,xzr,[x29, #-0xd0]
7101a4d24c  cbz x23,0x7101a4d260
7101a4d250  mov x0,x23
7101a4d254  bl 0x7101a41fd0
7101a4d258  mov x0,x23
7101a4d25c  bl 0x710392eb40
7101a4d260  ldur x23,[x29, #-0x98]
7101a4d264  stp x26,xzr,[x29, #-0xa0]
7101a4d268  cbz x23,0x7101a4d284
7101a4d26c  ldr x0,[x23, #0x18]
7101a4d270  stp x28,xzr,[x23, #0x10]
7101a4d274  cbz x0,0x7101a4d27c
7101a4d278  bl 0x710392eb40
7101a4d27c  mov x0,x23
7101a4d280  bl 0x710392eb40
7101a4d284  mov w8,#0x4
7101a4d288  str w8,[sp, #0x620]
7101a4d28c  ldr w8,[x19, #0x150]
7101a4d290  str w8,[sp, #0x624]
7101a4d294  ldr w9,[x19, #0x154]
7101a4d298  add w2,w8,#0x1
7101a4d29c  adrp x1,0x710439c000
7101a4d2a0  add x1,x1,#0xe96
7101a4d2a4  sub x8,x29,#0xa0
7101a4d2a8  mov w3,#0x4
7101a4d2ac  mov x0,x25
7101a4d2b0  str w9,[sp, #0x628]
7101a4d2b4  bl 0x7103776640
7101a4d2b8  stp x24,xzr,[x29, #-0xd0]
7101a4d2bc  ldr x1,[x19, #0x148]
7101a4d2c0  sub x0,x29,#0xd0
7101a4d2c4  sub x2,x29,#0xa0
7101a4d2c8  add x3,sp,#0x620
7101a4d2cc  sub x20,x29,#0xd0
7101a4d2d0  bl 0x7101a43a00
7101a4d2d4  ldur x21,[x29, #-0xc8]
7101a4d2d8  fmov s8,0x3f800000
7101a4d2dc  mov v0.16B,v8.16B
7101a4d2e0  adrp x1,0x7104412000
7101a4d2e4  add x1,x1,#0x36e
7101a4d2e8  ldr x0,[x21, #0x20]
7101a4d2ec  bl 0x7103778300
7101a4d2f0  str wzr,[x21, #0xd0]
7101a4d2f4  ldur x21,[x29, #-0xc8]
7101a4d2f8  ldr x0,[x21, #0x20]
7101a4d2fc  mov v0.16B,v8.16B
7101a4d300  adrp x1,0x710435b000
7101a4d304  add x1,x1,#0xe3c
7101a4d308  bl 0x7103778300
7101a4d30c  strb wzr,[x21, #0x10a]
7101a4d310  ldr x8,[x19, #0x3b8]
7101a4d314  ldr x9,[x19, #0x3c0]
7101a4d318  cmp x8,x9
7101a4d31c  b.cs 0x7101a4d360
7101a4d320  cmp x8,x20
7101a4d324  stp x24,xzr,[x8]
7101a4d328  b.eq 0x7101a4d350
7101a4d32c  ldur x9,[x29, #-0xc8]
7101a4d330  stur xzr,[x29, #-0xc8]
7101a4d334  ldr x23,[x8, #0x8]
7101a4d338  str x9,[x8, #0x8]
7101a4d33c  cbz x23,0x7101a4d350
7101a4d340  mov x0,x23
7101a4d344  bl 0x7101a41fd0
7101a4d348  mov x0,x23
7101a4d34c  bl 0x710392eb40
7101a4d350  ldr x8,[x19, #0x3b8]
7101a4d354  add x8,x8,#0x10
7101a4d358  str x8,[x19, #0x3b8]
7101a4d35c  b 0x7101a4d36c
7101a4d360  sub x1,x29,#0xd0
7101a4d364  mov x0,x22
7101a4d368  bl 0x7101a49700
7101a4d36c  ldur x23,[x29, #-0xc8]
7101a4d370  stp x24,xzr,[x29, #-0xd0]
7101a4d374  cbz x23,0x7101a4d388
7101a4d378  mov x0,x23
7101a4d37c  bl 0x7101a41fd0
7101a4d380  mov x0,x23
7101a4d384  bl 0x710392eb40
7101a4d388  ldur x23,[x29, #-0x98]
7101a4d38c  stp x26,xzr,[x29, #-0xa0]
7101a4d390  cbz x23,0x7101a4d3ac
7101a4d394  ldr x0,[x23, #0x18]
7101a4d398  stp x28,xzr,[x23, #0x10]
7101a4d39c  cbz x0,0x7101a4d3a4
7101a4d3a0  bl 0x710392eb40
7101a4d3a4  mov x0,x23
7101a4d3a8  bl 0x710392eb40
7101a4d3ac  ldr w8,[x19, #0x150]
7101a4d3b0  stur w8,[x29, #-0x58]
7101a4d3b4  ldr w8,[x19, #0x154]
7101a4d3b8  adrp x9,0x71050a8000
7101a4d3bc  add x9,x9,#0xd48
7101a4d3c0  stur x9,[x29, #-0xa0]
7101a4d3c4  adrp x9,0x7101a49000
7101a4d3c8  add x9,x9,#0x8e0
7101a4d3cc  sub x20,x29,#0xa0
7101a4d3d0  sub x0,x29,#0xa0
7101a4d3d4  sub x1,x29,#0xd0
7101a4d3d8  stur xzr,[x29, #-0xb0]
7101a4d3dc  stp x9,xzr,[x29, #-0x98]
7101a4d3e0  stur w8,[x29, #-0x54]
7101a4d3e4  stp x19,x20,[x29, #-0x88]
7101a4d3e8  bl 0x71019e6eb0
7101a4d3ec  ldur x0,[x29, #-0x80]
7101a4d3f0  cmp x20,x0
7101a4d3f4  b.eq 0x7101a4d408
7101a4d3f8  cbz x0,0x7101a4d414
7101a4d3fc  ldr x8,[x0]
7101a4d400  ldr x8,[x8, #0x28]
7101a4d404  b 0x7101a4d410
7101a4d408  ldr x8,[x0]
7101a4d40c  ldr x8,[x8, #0x20]
7101a4d410  blr x8
7101a4d414  ldr x1,[x19, #0x148]
7101a4d418  add x0,x19,#0x330
7101a4d41c  sub x3,x29,#0x58
7101a4d420  sub x4,x29,#0xd0
7101a4d424  mov x2,x27
7101a4d428  bl 0x71019e73b0
7101a4d42c  ldr x8,[x19, #0x338]
7101a4d430  mov w9,#0x2
7101a4d434  str w9,[x8, #0x40]
7101a4d438  stur xzr,[x29, #-0xda]
7101a4d43c  stur xzr,[x29, #-0xe0]
7101a4d440  ldr w8,[x19, #0x150]
7101a4d444  stur w8,[x29, #-0xe0]
7101a4d448  ldr w8,[x19, #0x154]
7101a4d44c  adrp x9,0x71050a8000
7101a4d450  add x9,x9,#0xcb8
7101a4d454  stur x9,[x29, #-0xa0]
7101a4d458  adrp x9,0x7101a49000
7101a4d45c  add x9,x9,#0x640
7101a4d460  stp x9,xzr,[x29, #-0x98]
7101a4d464  mov w9,#0x1
7101a4d468  sub x20,x29,#0xa0
7101a4d46c  sub x0,x29,#0xa0
7101a4d470  add x1,sp,#0x620
7101a4d474  str xzr,[sp, #0x640]
7101a4d478  sturb w9,[x29, #-0xd4]
7101a4d47c  stp x19,x20,[x29, #-0x88]
7101a4d480  stp w8,w8,[x29, #-0xdc]
7101a4d484  bl 0x71019f57d0
7101a4d488  ldur x0,[x29, #-0x80]
7101a4d48c  cmp x20,x0
7101a4d490  b.eq 0x7101a4d4a4
7101a4d494  cbz x0,0x7101a4d4b0
7101a4d498  ldr x8,[x0]
7101a4d49c  ldr x8,[x8, #0x28]
7101a4d4a0  b 0x7101a4d4ac
7101a4d4a4  ldr x8,[x0]
7101a4d4a8  ldr x8,[x8, #0x20]
7101a4d4ac  blr x8
7101a4d4b0  add x0,x19,#0x340
7101a4d4b4  sub x2,x29,#0xe0
7101a4d4b8  add x3,sp,#0x620
7101a4d4bc  mov x1,x27
7101a4d4c0  bl 0x71019f6b40
7101a4d4c4  ldr x0,[x19, #0x348]
7101a4d4c8  mov w1,#0x2
7101a4d4cc  bl 0x71019fa350
7101a4d4d0  ldr w8,[x19, #0x154]
7101a4d4d4  mov w20,#0x1
7101a4d4d8  strb w20,[sp, #0x61c]
7101a4d4dc  add x2,sp,#0x618
7101a4d4e0  str w8,[sp, #0x618]
7101a4d4e4  ldr x0,[x19, #0x358]
7101a4d4e8  mov x1,x27
7101a4d4ec  bl 0x71019e8c20
7101a4d4f0  ldr x0,[x19, #0x358]
7101a4d4f4  mov w1,#0x2
7101a4d4f8  bl 0x71019e90c0
7101a4d4fc  ldr x0,[x19, #0x368]
7101a4d500  mov x1,x27
7101a4d504  bl 0x71019e9dc0
7101a4d508  ldr x0,[x19, #0x368]
7101a4d50c  mov w1,#0x2
7101a4d510  bl 0x71019ea0a0
7101a4d514  ldr w8,[x19, #0x154]
7101a4d518  str w8,[sp, #0x610]
7101a4d51c  strb w20,[sp, #0x614]
7101a4d520  ldr x0,[x19, #0x378]
7101a4d524  add x2,sp,#0x610
7101a4d528  mov x1,x27
7101a4d52c  bl 0x71019ea9e0
7101a4d530  ldr x0,[x19, #0x378]
7101a4d534  mov w1,#0x2
7101a4d538  bl 0x71019eade0
7101a4d53c  ldr w8,[x19, #0x154]
7101a4d540  str w8,[sp, #0x608]
7101a4d544  strb wzr,[sp, #0x60c]
7101a4d548  ldr x1,[x19, #0x148]
7101a4d54c  add x0,x19,#0x380
7101a4d550  add x3,sp,#0x608
7101a4d554  mov x2,x27
7101a4d558  bl 0x7101a0ec00
7101a4d55c  ldr x0,[x19, #0x388]
7101a4d560  mov w1,#0x2
7101a4d564  bl 0x7101a0f680
7101a4d568  ldr w8,[x19, #0x154]
7101a4d56c  str w8,[sp, #0x600]
7101a4d570  ldr x0,[x19, #0x398]
7101a4d574  add x2,sp,#0x600
7101a4d578  mov x1,x27
7101a4d57c  bl 0x71019f2630
7101a4d580  ldr x0,[x19, #0x398]
7101a4d584  mov w1,#0x2
7101a4d588  bl 0x71019f2980
7101a4d58c  strh wzr,[sp, #0x5f8]
7101a4d590  str xzr,[sp, #0x5f0]
7101a4d594  ldr w8,[x19, #0x150]
7101a4d598  str w8,[sp, #0x5f0]
7101a4d59c  ldr w9,[x19, #0x154]
7101a4d5a0  adrp x8,0x71050a8000
7101a4d5a4  add x8,x8,#0xd00
7101a4d5a8  adrp x10,0x7101a49000
7101a4d5ac  add x10,x10,#0x6a0
7101a4d5b0  strb w20,[sp, #0x5f8]
7101a4d5b4  sub x20,x29,#0xa0
7101a4d5b8  sub x0,x29,#0xa0
7101a4d5bc  add x1,sp,#0x5c0
7101a4d5c0  stp x8,x10,[x29, #-0xa0]
7101a4d5c4  str xzr,[sp, #0x5e0]
7101a4d5c8  stp xzr,x19,[x29, #-0x90]
7101a4d5cc  stur x20,[x29, #-0x80]
7101a4d5d0  str w9,[sp, #0x5f4]
7101a4d5d4  bl 0x71019e5610
7101a4d5d8  ldur x0,[x29, #-0x80]
7101a4d5dc  cmp x20,x0
7101a4d5e0  b.eq 0x7101a4d5f4
7101a4d5e4  cbz x0,0x7101a4d600
7101a4d5e8  ldr x8,[x0]
7101a4d5ec  ldr x8,[x8, #0x28]
7101a4d5f0  b 0x7101a4d5fc
7101a4d5f4  ldr x8,[x0]
7101a4d5f8  ldr x8,[x8, #0x20]
7101a4d5fc  blr x8
7101a4d600  ldr x0,[x19, #0x3a8]
7101a4d604  add x2,sp,#0x5f0
7101a4d608  add x3,sp,#0x5c0
7101a4d60c  mov x1,x27
7101a4d610  add x20,sp,#0x5c0
7101a4d614  bl 0x71019e5b80
7101a4d618  ldr x0,[sp, #0x5e0]
7101a4d61c  cmp x20,x0
7101a4d620  b.eq 0x7101a4d634
7101a4d624  cbz x0,0x7101a4d640
7101a4d628  ldr x8,[x0]
7101a4d62c  ldr x8,[x8, #0x28]
7101a4d630  b 0x7101a4d63c
7101a4d634  ldr x8,[x0]
7101a4d638  ldr x8,[x8, #0x20]
7101a4d63c  blr x8
7101a4d640  ldr x0,[sp, #0x640]
7101a4d644  add x8,sp,#0x620
7101a4d648  cmp x8,x0
7101a4d64c  b.eq 0x7101a4d660
7101a4d650  cbz x0,0x7101a4d66c
7101a4d654  ldr x8,[x0]
7101a4d658  ldr x8,[x8, #0x28]
7101a4d65c  b 0x7101a4d668
7101a4d660  ldr x8,[x0]
7101a4d664  ldr x8,[x8, #0x20]
7101a4d668  blr x8
7101a4d66c  ldur x0,[x29, #-0xb0]
7101a4d670  sub x8,x29,#0xd0
7101a4d674  cmp x8,x0
7101a4d678  b.eq 0x7101a4d68c
7101a4d67c  cbz x0,0x7101a4d698
7101a4d680  ldr x8,[x0]
7101a4d684  ldr x8,[x8, #0x28]
7101a4d688  b 0x7101a4d694
7101a4d68c  ldr x8,[x0]
7101a4d690  ldr x8,[x8, #0x20]
7101a4d694  blr x8
7101a4d698  ldr w8,[x19, #0x150]
7101a4d69c  add w2,w8,#0x1
7101a4d6a0  adrp x1,0x710424e000
7101a4d6a4  add x1,x1,#0xefc
7101a4d6a8  mov x0,x25
7101a4d6ac  bl 0x7103778430
7101a4d6b0  mov w8,#0x1
7101a4d6b4  strb w8,[x19, #0x41d]
7101a4d6b8  ldrsw x8,[x19, #0x3cc]
7101a4d6bc  cmn w8,#0x1
7101a4d6c0  b.eq 0x7101a4d6fc
7101a4d6c4  ldr x10,[x19, #0x3b8]
7101a4d6c8  ldr x9,[x19, #0x3b0]
7101a4d6cc  sub x10,x10,x9
7101a4d6d0  asr x10,x10,#0x4
7101a4d6d4  cmp x10,x8
7101a4d6d8  b.ls 0x7101a4d93c
7101a4d6dc  add x8,x9,x8, LSL #0x4
7101a4d6e0  ldr x20,[x8, #0x8]
7101a4d6e4  ldr x0,[x20, #0x20]
7101a4d6e8  fmov s0,0x3f800000
7101a4d6ec  adrp x1,0x710435b000
7101a4d6f0  add x1,x1,#0xe3c
7101a4d6f4  bl 0x7103778300
7101a4d6f8  strb wzr,[x20, #0x10a]
7101a4d6fc  ldr x20,[x19, #0x3b0]
7101a4d700  ldr x21,[x19, #0x3b8]
7101a4d704  cmp x20,x21
7101a4d708  b.eq 0x7101a4d738
7101a4d70c  fmov s8,0x3f800000
7101a4d710  adrp x19,0x710426f000
7101a4d714  add x19,x19,#0xa7c
7101a4d718  ldr x8,[x20, #0x8]
7101a4d71c  ldr x0,[x8, #0x20]
7101a4d720  mov v0.16B,v8.16B
7101a4d724  mov x1,x19
7101a4d728  bl 0x7103778300
7101a4d72c  add x20,x20,#0x10
7101a4d730  cmp x21,x20
7101a4d734  b.ne 0x7101a4d718
7101a4d738  ldr x0,[sp, #0x1a0]
7101a4d73c  add x8,sp,#0x90
7101a4d740  add x8,x8,#0xf0
7101a4d744  cmp x8,x0
7101a4d748  b.eq 0x7101a4d75c
7101a4d74c  cbz x0,0x7101a4d768
7101a4d750  ldr x8,[x0]
7101a4d754  ldr x8,[x8, #0x28]
7101a4d758  b 0x7101a4d764
7101a4d75c  ldr x8,[x0]
7101a4d760  ldr x8,[x8, #0x20]
7101a4d764  blr x8
7101a4d768  ldr x0,[sp, #0x170]
7101a4d76c  add x8,sp,#0x90
7101a4d770  add x8,x8,#0xc0
7101a4d774  cmp x8,x0
7101a4d778  b.eq 0x7101a4d78c
7101a4d77c  cbz x0,0x7101a4d798
7101a4d780  ldr x8,[x0]
7101a4d784  ldr x8,[x8, #0x28]
7101a4d788  b 0x7101a4d794
7101a4d78c  ldr x8,[x0]
7101a4d790  ldr x8,[x8, #0x20]
7101a4d794  blr x8
7101a4d798  ldr x0,[sp, #0x140]
7101a4d79c  add x8,sp,#0x90
7101a4d7a0  add x8,x8,#0x90
7101a4d7a4  cmp x8,x0
7101a4d7a8  b.eq 0x7101a4d7bc
7101a4d7ac  cbz x0,0x7101a4d7c8
7101a4d7b0  ldr x8,[x0]
7101a4d7b4  ldr x8,[x8, #0x28]
7101a4d7b8  b 0x7101a4d7c4
7101a4d7bc  ldr x8,[x0]
7101a4d7c0  ldr x8,[x8, #0x20]
7101a4d7c4  blr x8
7101a4d7c8  ldr x0,[sp, #0x110]
7101a4d7cc  add x8,sp,#0x90
7101a4d7d0  add x8,x8,#0x60
7101a4d7d4  cmp x8,x0
7101a4d7d8  b.eq 0x7101a4d7ec
7101a4d7dc  cbz x0,0x7101a4d7f8
7101a4d7e0  ldr x8,[x0]
7101a4d7e4  ldr x8,[x8, #0x28]
7101a4d7e8  b 0x7101a4d7f4
7101a4d7ec  ldr x8,[x0]
7101a4d7f0  ldr x8,[x8, #0x20]
7101a4d7f4  blr x8
7101a4d7f8  ldr x0,[sp, #0xe0]
7101a4d7fc  add x8,sp,#0x90
7101a4d800  add x8,x8,#0x30
7101a4d804  cmp x8,x0
7101a4d808  b.eq 0x7101a4d81c
7101a4d80c  cbz x0,0x7101a4d828
7101a4d810  ldr x8,[x0]
7101a4d814  ldr x8,[x8, #0x28]
7101a4d818  b 0x7101a4d824
7101a4d81c  ldr x8,[x0]
7101a4d820  ldr x8,[x8, #0x20]
7101a4d824  blr x8
7101a4d828  ldr x0,[sp, #0x2d0]
7101a4d82c  add x8,sp,#0x1c0
7101a4d830  add x8,x8,#0xf0
7101a4d834  cmp x8,x0
7101a4d838  b.eq 0x7101a4d84c
7101a4d83c  cbz x0,0x7101a4d858
7101a4d840  ldr x8,[x0]
7101a4d844  ldr x8,[x8, #0x28]
7101a4d848  b 0x7101a4d854
7101a4d84c  ldr x8,[x0]
7101a4d850  ldr x8,[x8, #0x20]
7101a4d854  blr x8
7101a4d858  ldr x0,[sp, #0x2a0]
7101a4d85c  add x8,sp,#0x1c0
7101a4d860  add x8,x8,#0xc0
7101a4d864  cmp x8,x0
7101a4d868  b.eq 0x7101a4d87c
7101a4d86c  cbz x0,0x7101a4d888
7101a4d870  ldr x8,[x0]
7101a4d874  ldr x8,[x8, #0x28]
7101a4d878  b 0x7101a4d884
7101a4d87c  ldr x8,[x0]
7101a4d880  ldr x8,[x8, #0x20]
7101a4d884  blr x8
7101a4d888  ldr x0,[sp, #0x270]
7101a4d88c  add x8,sp,#0x1c0
7101a4d890  add x8,x8,#0x90
7101a4d894  cmp x8,x0
7101a4d898  b.eq 0x7101a4d8ac
7101a4d89c  cbz x0,0x7101a4d8b8
7101a4d8a0  ldr x8,[x0]
7101a4d8a4  ldr x8,[x8, #0x28]
7101a4d8a8  b 0x7101a4d8b4
7101a4d8ac  ldr x8,[x0]
7101a4d8b0  ldr x8,[x8, #0x20]
7101a4d8b4  blr x8
7101a4d8b8  ldr x0,[sp, #0x240]
7101a4d8bc  add x8,sp,#0x1c0
7101a4d8c0  add x8,x8,#0x60
7101a4d8c4  cmp x8,x0
7101a4d8c8  b.eq 0x7101a4d8dc
7101a4d8cc  cbz x0,0x7101a4d8e8
7101a4d8d0  ldr x8,[x0]
7101a4d8d4  ldr x8,[x8, #0x28]
7101a4d8d8  b 0x7101a4d8e4
7101a4d8dc  ldr x8,[x0]
7101a4d8e0  ldr x8,[x8, #0x20]
7101a4d8e4  blr x8
7101a4d8e8  ldr x0,[sp, #0x210]
7101a4d8ec  add x8,sp,#0x1c0
7101a4d8f0  add x8,x8,#0x30
7101a4d8f4  cmp x8,x0
7101a4d8f8  b.eq 0x7101a4d90c
7101a4d8fc  cbz x0,0x7101a4d918
7101a4d900  ldr x8,[x0]
7101a4d904  ldr x8,[x8, #0x28]
7101a4d908  b 0x7101a4d914
7101a4d90c  ldr x8,[x0]
7101a4d910  ldr x8,[x8, #0x20]
7101a4d914  blr x8
7101a4d918  add sp,sp,#0x6d0
7101a4d91c  ldp x29,x30,[sp, #0x60]
7101a4d920  ldp x20,x19,[sp, #0x50]
7101a4d924  ldp x22,x21,[sp, #0x40]
7101a4d928  ldp x24,x23,[sp, #0x30]
7101a4d92c  ldp x26,x25,[sp, #0x20]
7101a4d930  ldp x28,x27,[sp, #0x10]
7101a4d934  ldr d8,[sp], #0x70
7101a4d938  ret
7101a4d93c  mov x0,x22
7101a4d940  bl 0x71039c1330
