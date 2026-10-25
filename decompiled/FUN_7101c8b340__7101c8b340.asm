// addr:      7101c8b340
// offset:    0x1c8b340
// name:      FUN_7101c8b340
// mangled:   
// size:      6720

7101c8b340  stp x28,x25,[sp, #-0x50]!
7101c8b344  stp x24,x23,[sp, #0x10]
7101c8b348  stp x22,x21,[sp, #0x20]
7101c8b34c  stp x20,x19,[sp, #0x30]
7101c8b350  stp x29,x30,[sp, #0x40]
7101c8b354  add x29,sp,#0x40
7101c8b358  sub sp,sp,#0x5c0
7101c8b35c  sturb w1,[x29, #-0xd4]
7101c8b360  sturb w2,[x29, #-0xd8]
7101c8b364  mov x19,x0
7101c8b368  ldr x8,[x0, #0x10]!
7101c8b36c  ldr x9,[x0, #0x8]
7101c8b370  sub x9,x9,x8
7101c8b374  asr x9,x9,#0x3
7101c8b378  cmp x9,#0x1
7101c8b37c  b.ls 0x7101c8cd6c
7101c8b380  ldr x8,[x8, #0x8]
7101c8b384  ldr x9,[x19, #0x418]
7101c8b388  mov w21,w4
7101c8b38c  ldp x10,x11,[x9, #0x180]
7101c8b390  ldr x8,[x8]
7101c8b394  ldr x8,[x8]
7101c8b398  sub x11,x11,x10
7101c8b39c  lsr x12,x11,#0x3
7101c8b3a0  mov w20,w3
7101c8b3a4  mov w22,w2
7101c8b3a8  mov w23,w1
7101c8b3ac  cmp w12,w3
7101c8b3b0  b.le 0x7101c8b3d0
7101c8b3b4  sxtw x12,w20
7101c8b3b8  asr x11,x11,#0x3
7101c8b3bc  cmp x11,x12
7101c8b3c0  b.ls 0x7101c8cd78
7101c8b3c4  ldr x9,[x10, x12, LSL #0x3]
7101c8b3c8  ldr x1,[x9, #0x88]
7101c8b3cc  b 0x7101c8b3d4
7101c8b3d0  mov x1,xzr
7101c8b3d4  add x0,x8,#0x8
7101c8b3d8  sub x8,x29,#0xe8
7101c8b3dc  bl 0x7103776640
7101c8b3e0  adrp x1,0x71042b4000
7101c8b3e4  add x1,x1,#0x52d
7101c8b3e8  sub x8,x29,#0xf8
7101c8b3ec  sub x0,x29,#0xe8
7101c8b3f0  bl 0x7103776910
7101c8b3f4  adrp x1,0x71042a3000
7101c8b3f8  add x1,x1,#0x1a8
7101c8b3fc  add x8,sp,#0x4f8
7101c8b400  sub x0,x29,#0xe8
7101c8b404  bl 0x7103776910
7101c8b408  adrp x1,0x71042b4000
7101c8b40c  add x1,x1,#0x4a1
7101c8b410  add x8,sp,#0x4e8
7101c8b414  sub x0,x29,#0xe8
7101c8b418  bl 0x7103776910
7101c8b41c  cmp w20,#0x4
7101c8b420  strb wzr,[sp, #0x460]
7101c8b424  str xzr,[sp, #0x458]
7101c8b428  strb wzr,[sp, #0x4a8]
7101c8b42c  str xzr,[sp, #0x4a0]
7101c8b430  strb wzr,[sp, #0x454]
7101c8b434  b.hi 0x7101c8b7c4
7101c8b438  mov w8,w20
7101c8b43c  adrp x9,0x71044f9000
7101c8b440  add x9,x9,#0x8ac
7101c8b444  ldrsw x8,[x9, x8, LSL #0x2]
7101c8b448  add x8,x8,x9
7101c8b44c  sub x11,x29,#0xd0
7101c8b450  br x8
7101c8b454  sub x8,x29,#0xd4
7101c8b458  str x8,[sp, #0x20]
7101c8b45c  sub x8,x29,#0xd8
7101c8b460  str x8,[sp, #0x28]
7101c8b464  add x8,sp,#0x454
7101c8b468  str x8,[sp, #0x30]
7101c8b46c  add x8,sp,#0x458
7101c8b470  str x8,[sp, #0x38]
7101c8b474  sub x8,x29,#0xe8
7101c8b478  str x8,[sp, #0x40]
7101c8b47c  adrp x8,0x71052c4000
7101c8b480  ldr x8,[x8, #0xc58]
7101c8b484  ldr x8,[x8, #0x8]
7101c8b488  add x0,x8,#0xa0
7101c8b48c  bl 0x7101704ba0
7101c8b490  tbz w0,#0x0,0x7101c8b7d4
7101c8b494  adrp x1,0x7104545000
7101c8b498  add x1,x1,#0x282
7101c8b49c  b 0x7101c8b7e8
7101c8b4a0  sub x8,x29,#0xd4
7101c8b4a4  str x8,[sp]
7101c8b4a8  sub x8,x29,#0xd8
7101c8b4ac  str x8,[sp, #0x8]
7101c8b4b0  add x8,sp,#0x454
7101c8b4b4  str x8,[sp, #0x10]
7101c8b4b8  add x8,sp,#0x458
7101c8b4bc  str x8,[sp, #0x18]
7101c8b4c0  ldr x9,[x19, #0x440]
7101c8b4c4  ldr x8,[x19, #0x438]
7101c8b4c8  sub x9,x9,x8
7101c8b4cc  cmp x9,#0x2
7101c8b4d0  b.ls 0x7101c8cd70
7101c8b4d4  ldrsb x8,[x8, #0x2]
7101c8b4d8  cmp x8,#0x4
7101c8b4dc  b.cs 0x7101c8cd68
7101c8b4e0  adrp x9,0x7104545000
7101c8b4e4  add x9,x9,#0x296
7101c8b4e8  ldrb w8,[x9, x8, LSL ]
7101c8b4ec  cmp w8,#0x4
7101c8b4f0  b.eq 0x7101c8b95c
7101c8b4f4  cmp w8,#0x3
7101c8b4f8  b.ne 0x7101c8ba18
7101c8b4fc  adrp x1,0x7104545000
7101c8b500  add x1,x1,#0x29a
7101c8b504  b 0x7101c8b964
7101c8b508  sxtb w9,w23
7101c8b50c  orr w8,wzr,#0x3
7101c8b510  cmp w9,#0x3
7101c8b514  csel w9,w23,w8,lt
7101c8b518  sxtb w10,w9
7101c8b51c  bic w10,w9,w10, ASR #0x7
7101c8b520  sxtb w9,w22
7101c8b524  cmp w9,#0x3
7101c8b528  strb w8,[sp, #0x454]
7101c8b52c  csel w8,w22,w8,lt
7101c8b530  sxtb w9,w8
7101c8b534  and w12,w10,#0xff
7101c8b538  cmp w12,#0x4
7101c8b53c  sturb w10,[x29, #-0xd4]
7101c8b540  bic w9,w8,w9, ASR #0x7
7101c8b544  sturb w9,[x29, #-0xd8]
7101c8b548  b.cs 0x7101c8cd68
7101c8b54c  and x12,x10,#0xff
7101c8b550  adrp x10,0x7104545000
7101c8b554  add x10,x10,#0x296
7101c8b558  ldrb w12,[x10, x12, LSL ]
7101c8b55c  mov w8,#0x9dc5
7101c8b560  movk w8,#0x811c, LSL #16
7101c8b564  cmp w12,#0x4
7101c8b568  b.hi 0x7101c8c054
7101c8b56c  adrp x13,0x71044f9000
7101c8b570  add x13,x13,#0x8c0
7101c8b574  ldrsw x12,[x13, x12, LSL #0x2]
7101c8b578  add x12,x12,x13
7101c8b57c  br x12
7101c8b580  mov x13,#0x6e6d
7101c8b584  movk x13,#0x5f75, LSL #16
7101c8b588  orr x12,xzr,#0x1800000000
7101c8b58c  movk x13,#0x6e6f, LSL #32
7101c8b590  movk x13,#0x696c, LSL #48
7101c8b594  mov w14,#0x6d
7101c8b598  stp x12,x13,[x29, #-0x88]
7101c8b59c  mov x13,#0x656e
7101c8b5a0  movk x13,#0x725f, LSL #16
7101c8b5a4  movk x13,#0x6f6f, LSL #32
7101c8b5a8  movk x13,#0x5f6d, LSL #48
7101c8b5ac  stur x13,[x29, #-0x78]
7101c8b5b0  mov w13,#0x6f66
7101c8b5b4  sturh w13,[x29, #-0x70]
7101c8b5b8  mov w13,#0x6d72
7101c8b5bc  movk w13,#0x615f, LSL #16
7101c8b5c0  stur w13,[x11, #0x62]
7101c8b5c4  sub x12,x29,#0x88
7101c8b5c8  mov w13,#0x6c6c
7101c8b5cc  sturh w13,[x29, #-0x6a]
7101c8b5d0  add x12,x12,#0x9
7101c8b5d4  mov w13,#0x89
7101c8b5d8  sturb wzr,[x29, #-0x68]
7101c8b5dc  mov w15,w8
7101c8b5e0  mul w15,w15,w13
7101c8b5e4  and w14,w14,#0xff
7101c8b5e8  eor w15,w15,w14
7101c8b5ec  ldrb w14,[x12], #0x1
7101c8b5f0  cbnz w14,0x7101c8b5e0
7101c8b5f4  b 0x7101c8c0c4
7101c8b5f8  add x0,x19,#0x420
7101c8b5fc  mov w1,wzr
7101c8b600  bl 0x7101c83c40
7101c8b604  add x8,sp,#0x48
7101c8b608  add x0,x19,#0x500
7101c8b60c  add x1,sp,#0x48
7101c8b610  str xzr,[sp, #0x48]
7101c8b614  add x20,x8,#0x8
7101c8b618  strh wzr,[sp, #0x50]
7101c8b61c  bl 0x71017ab0c0
7101c8b620  ldrb w8,[x19, #0x9a1]
7101c8b624  cmp w8,#0x1
7101c8b628  b.eq 0x7101c8b970
7101c8b62c  cmp w8,#0x2
7101c8b630  b.ne 0x7101c8bad8
7101c8b634  ldur x0,[x29, #-0xe0]
7101c8b638  fmov s0,0x3f800000
7101c8b63c  adrp x1,0x710438c000
7101c8b640  add x1,x1,#0xb68
7101c8b644  bl 0x7103778300
7101c8b648  adrp x1,0x710439d000
7101c8b64c  add x1,x1,#0x4f4
7101c8b650  sub x8,x29,#0xd0
7101c8b654  sub x0,x29,#0xe8
7101c8b658  bl 0x7103776640
7101c8b65c  adrp x1,0x7104338000
7101c8b660  add x1,x1,#0xd31
7101c8b664  sub x8,x29,#0x88
7101c8b668  sub x0,x29,#0xd0
7101c8b66c  bl 0x7103776910
7101c8b670  ldur x19,[x29, #-0x80]
7101c8b674  ldr x0,[x19, #0x10]
7101c8b678  cbz x0,0x7101c8b68c
7101c8b67c  mov w2,#0xffffffff
7101c8b680  mov w3,#0x1
7101c8b684  mov x1,x20
7101c8b688  bl 0x71037a2270
7101c8b68c  adrp x21,0x710523d000
7101c8b690  add x21,x21,#0x9a8
7101c8b694  stp x21,xzr,[x29, #-0x88]
7101c8b698  cbz x19,0x7101c8b6a4
7101c8b69c  mov x0,x19
7101c8b6a0  bl 0x710392eb40
7101c8b6a4  ldur x19,[x29, #-0xc8]
7101c8b6a8  adrp x22,0x710523d000
7101c8b6ac  add x22,x22,#0x988
7101c8b6b0  stp x22,xzr,[x29, #-0xd0]
7101c8b6b4  cbz x19,0x7101c8b6d0
7101c8b6b8  ldr x0,[x19, #0x18]
7101c8b6bc  stp x21,xzr,[x19, #0x10]
7101c8b6c0  cbz x0,0x7101c8b6c8
7101c8b6c4  bl 0x710392eb40
7101c8b6c8  mov x0,x19
7101c8b6cc  bl 0x710392eb40
7101c8b6d0  adrp x1,0x7104270000
7101c8b6d4  add x1,x1,#0x4e
7101c8b6d8  b 0x7101c8bb7c
7101c8b6dc  mov w8,#0x1
7101c8b6e0  strb w8,[sp, #0x454]
7101c8b6e4  sxtb w8,w23
7101c8b6e8  cmp w8,#0x1
7101c8b6ec  csinc w8,w23,wzr,lt
7101c8b6f0  sxtb w10,w22
7101c8b6f4  cmp w10,#0x1
7101c8b6f8  sxtb w9,w8
7101c8b6fc  bic w8,w8,w9, ASR #0x7
7101c8b700  csinc w10,w22,wzr,lt
7101c8b704  sxtb w12,w10
7101c8b708  bic w12,w10,w12, ASR #0x7
7101c8b70c  and w9,w8,#0xff
7101c8b710  cmp w9,#0x2
7101c8b714  sturb w8,[x29, #-0xd4]
7101c8b718  sturb w12,[x29, #-0xd8]
7101c8b71c  b.cs 0x7101c8cd68
7101c8b720  and x10,x8,#0xff
7101c8b724  adrp x9,0x710455c000
7101c8b728  add x9,x9,#0x368
7101c8b72c  ldrb w17,[x9, x10, LSL ]
7101c8b730  mov x13,#0x6e6d
7101c8b734  movk x13,#0x5f75, LSL #16
7101c8b738  mov x14,#0x656e
7101c8b73c  movk x14,#0x725f, LSL #16
7101c8b740  mov w10,#0x9dc5
7101c8b744  movk w10,#0x811c, LSL #16
7101c8b748  movk x13,#0x6e6f, LSL #32
7101c8b74c  movk x13,#0x696c, LSL #48
7101c8b750  stp xzr,x13,[x29, #-0x88]
7101c8b754  movk x14,#0x6f6f, LSL #32
7101c8b758  movk x14,#0x5f6d, LSL #48
7101c8b75c  stur x14,[x29, #-0x78]
7101c8b760  mov w15,#0x696c
7101c8b764  movk w15,#0x696d, LSL #16
7101c8b768  stur w15,[x29, #-0x70]
7101c8b76c  mov w16,#0x5f74
7101c8b770  sturh w16,[x29, #-0x6c]
7101c8b774  cbz w17,0x7101c8b7f4
7101c8b778  mov w17,#0x7266
7101c8b77c  movk w17,#0x6569, LSL #16
7101c8b780  mov w18,#0x646e
7101c8b784  sub x0,x29,#0x88
7101c8b788  orr w2,wzr,#0x1c
7101c8b78c  stur w17,[x11, #0x66]
7101c8b790  sturh w18,[x29, #-0x66]
7101c8b794  add x18,x0,#0x9
7101c8b798  mov w1,#0x6d
7101c8b79c  mov w0,#0x89
7101c8b7a0  mov w17,w10
7101c8b7a4  sturb wzr,[x29, #-0x64]
7101c8b7a8  stur w2,[x29, #-0x84]
7101c8b7ac  mul w17,w17,w0
7101c8b7b0  and w1,w1,#0xff
7101c8b7b4  eor w17,w17,w1
7101c8b7b8  ldrb w1,[x18], #0x1
7101c8b7bc  cbnz w1,0x7101c8b7ac
7101c8b7c0  b 0x7101c8b83c
7101c8b7c4  add x0,x19,#0x420
7101c8b7c8  mov w1,wzr
7101c8b7cc  bl 0x7101c83c40
7101c8b7d0  b 0x7101c8cab8
7101c8b7d4  mov w0,wzr
7101c8b7d8  bl 0x7101797350
7101c8b7dc  tbz w0,#0x0,0x7101c8be28
7101c8b7e0  adrp x1,0x7104545000
7101c8b7e4  add x1,x1,#0x289
7101c8b7e8  add x0,sp,#0x20
7101c8b7ec  bl 0x7101c8d890
7101c8b7f0  b 0x7101c8c7c0
7101c8b7f4  mov w17,#0x6e61
7101c8b7f8  movk w17,#0x6f79, LSL #16
7101c8b7fc  mov w18,#0x656e
7101c8b800  sub x0,x29,#0x88
7101c8b804  orr w2,wzr,#0x1c
7101c8b808  stur w17,[x11, #0x66]
7101c8b80c  sturh w18,[x29, #-0x66]
7101c8b810  add x18,x0,#0x9
7101c8b814  mov w1,#0x6d
7101c8b818  mov w0,#0x89
7101c8b81c  mov w17,w10
7101c8b820  sturb wzr,[x29, #-0x64]
7101c8b824  stur w2,[x29, #-0x84]
7101c8b828  mul w17,w17,w0
7101c8b82c  and w1,w1,#0xff
7101c8b830  eor w17,w17,w1
7101c8b834  ldrb w1,[x18], #0x1
7101c8b838  cbnz w1,0x7101c8b828
7101c8b83c  stur w17,[x29, #-0x88]
7101c8b840  and w17,w12,#0xff
7101c8b844  cmp w17,#0x2
7101c8b848  b.cs 0x7101c8cd68
7101c8b84c  and x12,x12,#0xff
7101c8b850  ldrb w12,[x9, x12, LSL ]
7101c8b854  stp xzr,x13,[x29, #-0xd0]
7101c8b858  stur x14,[x29, #-0xc0]
7101c8b85c  stur w15,[x29, #-0xb8]
7101c8b860  sturh w16,[x29, #-0xb4]
7101c8b864  cbz w12,0x7101c8b8b4
7101c8b868  mov w12,#0x7266
7101c8b86c  movk w12,#0x6569, LSL #16
7101c8b870  mov w13,#0x646e
7101c8b874  sub x14,x29,#0xd0
7101c8b878  orr w15,wzr,#0x1c
7101c8b87c  stur w12,[x11, #0x1e]
7101c8b880  sturh w13,[x29, #-0xae]
7101c8b884  add x11,x14,#0x9
7101c8b888  mov w14,#0x6d
7101c8b88c  mov w13,#0x89
7101c8b890  mov w12,w10
7101c8b894  sturb wzr,[x29, #-0xac]
7101c8b898  stur w15,[x29, #-0xcc]
7101c8b89c  mul w12,w12,w13
7101c8b8a0  and w14,w14,#0xff
7101c8b8a4  eor w12,w12,w14
7101c8b8a8  ldrb w14,[x11], #0x1
7101c8b8ac  cbnz w14,0x7101c8b89c
7101c8b8b0  b 0x7101c8b8fc
7101c8b8b4  mov w12,#0x6e61
7101c8b8b8  movk w12,#0x6f79, LSL #16
7101c8b8bc  mov w13,#0x656e
7101c8b8c0  sub x14,x29,#0xd0
7101c8b8c4  orr w15,wzr,#0x1c
7101c8b8c8  stur w12,[x11, #0x1e]
7101c8b8cc  sturh w13,[x29, #-0xae]
7101c8b8d0  add x11,x14,#0x9
7101c8b8d4  mov w14,#0x6d
7101c8b8d8  mov w13,#0x89
7101c8b8dc  mov w12,w10
7101c8b8e0  sturb wzr,[x29, #-0xac]
7101c8b8e4  stur w15,[x29, #-0xcc]
7101c8b8e8  mul w12,w12,w13
7101c8b8ec  and w14,w14,#0xff
7101c8b8f0  eor w12,w12,w14
7101c8b8f4  ldrb w14,[x11], #0x1
7101c8b8f8  cbnz w14,0x7101c8b8e8
7101c8b8fc  stur w12,[x29, #-0xd0]
7101c8b900  sub x12,x29,#0x88
7101c8b904  add x13,sp,#0x48
7101c8b908  mov x11,xzr
7101c8b90c  add x12,x12,#0x9
7101c8b910  add x13,x13,#0x9
7101c8b914  mov w14,#0x6d
7101c8b918  str wzr,[sp, #0x48]
7101c8b91c  tst w14,#0xff
7101c8b920  b.eq 0x7101c8bc10
7101c8b924  add w15,w11,#0x1
7101c8b928  add x16,x13,x11
7101c8b92c  cmp w15,#0x3f
7101c8b930  sturb w14,[x16, #-0x1]
7101c8b934  b.cs 0x7101c8bc04
7101c8b938  ldrb w14,[x12, x11, LSL ]
7101c8b93c  cbz w14,0x7101c8bc0c
7101c8b940  add x15,x12,x11
7101c8b944  strb w14,[x13, x11, LSL ]
7101c8b948  ldrb w14,[x15, #0x1]
7101c8b94c  add x11,x11,#0x2
7101c8b950  tst w14,#0xff
7101c8b954  b.ne 0x7101c8b924
7101c8b958  b 0x7101c8bc10
7101c8b95c  adrp x1,0x7104545000
7101c8b960  add x1,x1,#0x29c
7101c8b964  mov x0,sp
7101c8b968  bl 0x7101c8da70
7101c8b96c  b 0x7101c8c7ac
7101c8b970  ldur x0,[x29, #-0xe0]
7101c8b974  fmov s0,0x3f800000
7101c8b978  adrp x1,0x71043e0000
7101c8b97c  add x1,x1,#0x969
7101c8b980  bl 0x7103778300
7101c8b984  adrp x1,0x710432a000
7101c8b988  add x1,x1,#0x6f
7101c8b98c  sub x8,x29,#0xd0
7101c8b990  sub x0,x29,#0xe8
7101c8b994  bl 0x7103776640
7101c8b998  adrp x1,0x7104338000
7101c8b99c  add x1,x1,#0xd31
7101c8b9a0  sub x8,x29,#0x88
7101c8b9a4  sub x0,x29,#0xd0
7101c8b9a8  bl 0x7103776910
7101c8b9ac  ldur x19,[x29, #-0x80]
7101c8b9b0  ldr x0,[x19, #0x10]
7101c8b9b4  cbz x0,0x7101c8b9c8
7101c8b9b8  mov w2,#0xffffffff
7101c8b9bc  mov w3,#0x1
7101c8b9c0  mov x1,x20
7101c8b9c4  bl 0x71037a2270
7101c8b9c8  adrp x21,0x710523d000
7101c8b9cc  add x21,x21,#0x9a8
7101c8b9d0  stp x21,xzr,[x29, #-0x88]
7101c8b9d4  cbz x19,0x7101c8b9e0
7101c8b9d8  mov x0,x19
7101c8b9dc  bl 0x710392eb40
7101c8b9e0  ldur x19,[x29, #-0xc8]
7101c8b9e4  adrp x22,0x710523d000
7101c8b9e8  add x22,x22,#0x988
7101c8b9ec  stp x22,xzr,[x29, #-0xd0]
7101c8b9f0  cbz x19,0x7101c8ba0c
7101c8b9f4  ldr x0,[x19, #0x18]
7101c8b9f8  stp x21,xzr,[x19, #0x10]
7101c8b9fc  cbz x0,0x7101c8ba04
7101c8ba00  bl 0x710392eb40
7101c8ba04  mov x0,x19
7101c8ba08  bl 0x710392eb40
7101c8ba0c  adrp x1,0x7104291000
7101c8ba10  add x1,x1,#0xcf9
7101c8ba14  b 0x7101c8bb7c
7101c8ba18  ldursb w8,[x29, #-0xd4]
7101c8ba1c  ldursb w11,[x29, #-0xd8]
7101c8ba20  orr w9,wzr,#0x3
7101c8ba24  strb w9,[sp, #0x454]
7101c8ba28  cmp w8,#0x3
7101c8ba2c  csel w8,w8,w9,lt
7101c8ba30  cmp w11,#0x3
7101c8ba34  bic w8,w8,w8, ASR #0x7
7101c8ba38  csel w9,w11,w9,lt
7101c8ba3c  bic w22,w9,w9, ASR #0x7
7101c8ba40  and w10,w8,#0xff
7101c8ba44  cmp w10,#0x4
7101c8ba48  sturb w8,[x29, #-0xd4]
7101c8ba4c  sturb w22,[x29, #-0xd8]
7101c8ba50  b.cs 0x7101c8cd68
7101c8ba54  adrp x24,0x7104545000
7101c8ba58  add x24,x24,#0x29e
7101c8ba5c  and x8,x8,#0xff
7101c8ba60  ldrb w1,[x24, x8, LSL ]
7101c8ba64  sub x0,x29,#0x88
7101c8ba68  sub x23,x29,#0x88
7101c8ba6c  bl 0x7101c6f7f0
7101c8ba70  and w8,w22,#0xff
7101c8ba74  cmp w8,#0x4
7101c8ba78  b.cs 0x7101c8cd68
7101c8ba7c  and x8,x22,#0xff
7101c8ba80  ldrb w1,[x24, x8, LSL ]
7101c8ba84  sub x0,x29,#0xd0
7101c8ba88  bl 0x7101c6f7f0
7101c8ba8c  mov x9,xzr
7101c8ba90  add x8,x23,#0x8
7101c8ba94  add x10,sp,#0x48
7101c8ba98  str wzr,[sp, #0x48]
7101c8ba9c  b 0x7101c8baa8
7101c8baa0  add x9,x9,#0x2
7101c8baa4  strb w11,[x12, #0x9]
7101c8baa8  add x11,x8,x9
7101c8baac  ldrb w13,[x11]
7101c8bab0  cbz w13,0x7101c8c5b0
7101c8bab4  add w14,w9,#0x1
7101c8bab8  add x12,x10,x9
7101c8babc  cmp w14,#0x3f
7101c8bac0  strb w13,[x12, #0x8]
7101c8bac4  b.cs 0x7101c8c5ac
7101c8bac8  ldrb w11,[x11, #0x1]
7101c8bacc  cbnz w11,0x7101c8baa0
7101c8bad0  add x9,x9,#0x1
7101c8bad4  b 0x7101c8c5b0
7101c8bad8  ldur x0,[x29, #-0xe0]
7101c8badc  fmov s0,0x3f800000
7101c8bae0  adrp x1,0x71042c5000
7101c8bae4  add x1,x1,#0x5fd
7101c8bae8  bl 0x7103778300
7101c8baec  adrp x1,0x710439d000
7101c8baf0  add x1,x1,#0x4df
7101c8baf4  sub x8,x29,#0xd0
7101c8baf8  sub x0,x29,#0xe8
7101c8bafc  bl 0x7103776640
7101c8bb00  adrp x1,0x7104338000
7101c8bb04  add x1,x1,#0xd31
7101c8bb08  sub x8,x29,#0x88
7101c8bb0c  sub x0,x29,#0xd0
7101c8bb10  bl 0x7103776910
7101c8bb14  ldur x19,[x29, #-0x80]
7101c8bb18  ldr x0,[x19, #0x10]
7101c8bb1c  cbz x0,0x7101c8bb30
7101c8bb20  mov w2,#0xffffffff
7101c8bb24  mov w3,#0x1
7101c8bb28  mov x1,x20
7101c8bb2c  bl 0x71037a2270
7101c8bb30  adrp x21,0x710523d000
7101c8bb34  add x21,x21,#0x9a8
7101c8bb38  stp x21,xzr,[x29, #-0x88]
7101c8bb3c  cbz x19,0x7101c8bb48
7101c8bb40  mov x0,x19
7101c8bb44  bl 0x710392eb40
7101c8bb48  ldur x19,[x29, #-0xc8]
7101c8bb4c  adrp x22,0x710523d000
7101c8bb50  add x22,x22,#0x988
7101c8bb54  stp x22,xzr,[x29, #-0xd0]
7101c8bb58  cbz x19,0x7101c8bb74
7101c8bb5c  ldr x0,[x19, #0x18]
7101c8bb60  stp x21,xzr,[x19, #0x10]
7101c8bb64  cbz x0,0x7101c8bb6c
7101c8bb68  bl 0x710392eb40
7101c8bb6c  mov x0,x19
7101c8bb70  bl 0x710392eb40
7101c8bb74  adrp x1,0x7104270000
7101c8bb78  add x1,x1,#0x38
7101c8bb7c  sub x8,x29,#0xd0
7101c8bb80  sub x0,x29,#0xe8
7101c8bb84  bl 0x7103776640
7101c8bb88  adrp x1,0x7104338000
7101c8bb8c  add x1,x1,#0xd31
7101c8bb90  sub x8,x29,#0x88
7101c8bb94  sub x0,x29,#0xd0
7101c8bb98  bl 0x7103776910
7101c8bb9c  ldur x19,[x29, #-0x80]
7101c8bba0  ldr x0,[x19, #0x10]
7101c8bba4  cbz x0,0x7101c8bbb8
7101c8bba8  mov w2,#0xffffffff
7101c8bbac  mov w3,#0x1
7101c8bbb0  mov x1,x20
7101c8bbb4  bl 0x71037a2270
7101c8bbb8  stp x21,xzr,[x29, #-0x88]
7101c8bbbc  cbz x19,0x7101c8bbc8
7101c8bbc0  mov x0,x19
7101c8bbc4  bl 0x710392eb40
7101c8bbc8  ldur x19,[x29, #-0xc8]
7101c8bbcc  stp x22,xzr,[x29, #-0xd0]
7101c8bbd0  cbz x19,0x7101c8bbec
7101c8bbd4  ldr x0,[x19, #0x18]
7101c8bbd8  stp x21,xzr,[x19, #0x10]
7101c8bbdc  cbz x0,0x7101c8bbe4
7101c8bbe0  bl 0x710392eb40
7101c8bbe4  mov x0,x19
7101c8bbe8  bl 0x710392eb40
7101c8bbec  ldur x0,[x29, #-0xe0]
7101c8bbf0  fmov s0,0x3f800000
7101c8bbf4  adrp x1,0x710425f000
7101c8bbf8  add x1,x1,#0x506
7101c8bbfc  bl 0x7103778300
7101c8bc00  b 0x7101c8cab8
7101c8bc04  add w11,w11,#0x1
7101c8bc08  b 0x7101c8bc10
7101c8bc0c  add x11,x11,#0x1
7101c8bc10  add x12,sp,#0x48
7101c8bc14  add x13,x12,#0x8
7101c8bc18  mov w14,w10
7101c8bc1c  strb wzr,[x13, w11, UXTW ]
7101c8bc20  str w11,[sp, #0x4c]
7101c8bc24  ldrb w11,[sp, #0x50]
7101c8bc28  cbz w11,0x7101c8bc50
7101c8bc2c  add x13,x12,#0x9
7101c8bc30  mov w15,#0x89
7101c8bc34  mov w16,w11
7101c8bc38  mov w14,w10
7101c8bc3c  mul w14,w14,w15
7101c8bc40  and w16,w16,#0xff
7101c8bc44  eor w14,w14,w16
7101c8bc48  ldrb w16,[x13], #0x1
7101c8bc4c  cbnz w16,0x7101c8bc3c
7101c8bc50  str w14,[sp, #0x48]
7101c8bc54  sub x14,x29,#0xd0
7101c8bc58  mov x13,xzr
7101c8bc5c  add x14,x14,#0x9
7101c8bc60  mov w15,#0x6d
7101c8bc64  str wzr,[sp, #0x90]
7101c8bc68  tst w15,#0xff
7101c8bc6c  b.eq 0x7101c8bcb4
7101c8bc70  add w17,w13,#0x1
7101c8bc74  add x16,x12,x13
7101c8bc78  cmp w17,#0x3f
7101c8bc7c  strb w15,[x16, #0x50]
7101c8bc80  b.cs 0x7101c8bca8
7101c8bc84  ldrb w15,[x14, x13, LSL ]
7101c8bc88  cbz w15,0x7101c8bcb0
7101c8bc8c  add x17,x14,x13
7101c8bc90  strb w15,[x16, #0x51]
7101c8bc94  ldrb w15,[x17, #0x1]
7101c8bc98  add x13,x13,#0x2
7101c8bc9c  tst w15,#0xff
7101c8bca0  b.ne 0x7101c8bc70
7101c8bca4  b 0x7101c8bcb4
7101c8bca8  add w13,w13,#0x1
7101c8bcac  b 0x7101c8bcb4
7101c8bcb0  add x13,x13,#0x1
7101c8bcb4  add x15,sp,#0x48
7101c8bcb8  add x12,x15,#0x50
7101c8bcbc  mov w14,w10
7101c8bcc0  strb wzr,[x12, w13, UXTW ]
7101c8bcc4  ldrb w12,[sp, #0x98]
7101c8bcc8  str w13,[sp, #0x94]
7101c8bccc  cbz w12,0x7101c8bcf4
7101c8bcd0  add x13,x15,#0x51
7101c8bcd4  mov w15,#0x89
7101c8bcd8  mov w16,w12
7101c8bcdc  mov w14,w10
7101c8bce0  mul w14,w14,w15
7101c8bce4  and w16,w16,#0xff
7101c8bce8  eor w14,w14,w16
7101c8bcec  ldrb w16,[x13], #0x1
7101c8bcf0  cbnz w16,0x7101c8bce0
7101c8bcf4  str w14,[sp, #0x90]
7101c8bcf8  cbz w11,0x7101c8bd34
7101c8bcfc  add x14,sp,#0x48
7101c8bd00  add x15,sp,#0x458
7101c8bd04  mov x13,xzr
7101c8bd08  add x14,x14,#0x9
7101c8bd0c  add x15,x15,#0x8
7101c8bd10  add w16,w13,#0x1
7101c8bd14  cmp w16,#0x3e
7101c8bd18  strb w11,[x15, x13, LSL ]
7101c8bd1c  b.hi 0x7101c8bd3c
7101c8bd20  ldrb w11,[x14, x13, LSL ]
7101c8bd24  add x16,x13,#0x1
7101c8bd28  mov x13,x16
7101c8bd2c  cbnz w11,0x7101c8bd10
7101c8bd30  b 0x7101c8bd40
7101c8bd34  mov w16,wzr
7101c8bd38  b 0x7101c8bd40
7101c8bd3c  add w16,w13,#0x1
7101c8bd40  add x13,sp,#0x458
7101c8bd44  add x11,x13,#0x8
7101c8bd48  mov w14,w10
7101c8bd4c  strb wzr,[x11, w16, UXTW ]
7101c8bd50  ldrb w11,[sp, #0x460]
7101c8bd54  str w16,[sp, #0x45c]
7101c8bd58  cbz w11,0x7101c8bd7c
7101c8bd5c  add x13,x13,#0x9
7101c8bd60  mov w15,#0x89
7101c8bd64  mov w14,w10
7101c8bd68  mul w14,w14,w15
7101c8bd6c  and w11,w11,#0xff
7101c8bd70  eor w14,w14,w11
7101c8bd74  ldrb w11,[x13], #0x1
7101c8bd78  cbnz w11,0x7101c8bd68
7101c8bd7c  str w14,[sp, #0x458]
7101c8bd80  cbz w12,0x7101c8bdbc
7101c8bd84  add x13,sp,#0x48
7101c8bd88  add x14,sp,#0x458
7101c8bd8c  mov x11,xzr
7101c8bd90  add x13,x13,#0x51
7101c8bd94  add x14,x14,#0x50
7101c8bd98  add w15,w11,#0x1
7101c8bd9c  cmp w15,#0x3e
7101c8bda0  strb w12,[x14, x11, LSL ]
7101c8bda4  b.hi 0x7101c8bdc4
7101c8bda8  ldrb w12,[x13, x11, LSL ]
7101c8bdac  add x15,x11,#0x1
7101c8bdb0  mov x11,x15
7101c8bdb4  cbnz w12,0x7101c8bd98
7101c8bdb8  b 0x7101c8bdc8
7101c8bdbc  mov w15,wzr
7101c8bdc0  b 0x7101c8bdc8
7101c8bdc4  add w15,w11,#0x1
7101c8bdc8  add x11,sp,#0x458
7101c8bdcc  add x12,x11,#0x50
7101c8bdd0  strb wzr,[x12, w15, UXTW ]
7101c8bdd4  ldrb w12,[sp, #0x4a8]
7101c8bdd8  str w15,[sp, #0x4a4]
7101c8bddc  cbz w12,0x7101c8bdfc
7101c8bde0  add x11,x11,#0x51
7101c8bde4  mov w13,#0x89
7101c8bde8  mul w10,w10,w13
7101c8bdec  and w12,w12,#0xff
7101c8bdf0  eor w10,w10,w12
7101c8bdf4  ldrb w12,[x11], #0x1
7101c8bdf8  cbnz w12,0x7101c8bde8
7101c8bdfc  and x8,x8,#0xff
7101c8be00  ldrb w8,[x9, x8, LSL ]
7101c8be04  ldur x0,[x29, #-0xe0]
7101c8be08  adrp x9,0x7104433000
7101c8be0c  add x9,x9,#0x1d0
7101c8be10  str w10,[sp, #0x4a0]
7101c8be14  adrp x10,0x710436c000
7101c8be18  add x10,x10,#0x447
7101c8be1c  cmp w8,#0x2
7101c8be20  csel x1,x10,x9,eq
7101c8be24  b 0x7101c8c7b8
7101c8be28  ldursb w8,[x29, #-0xd4]
7101c8be2c  ldursb w11,[x29, #-0xd8]
7101c8be30  mov w9,#0x5
7101c8be34  strb w9,[sp, #0x454]
7101c8be38  cmp w8,#0x5
7101c8be3c  csel w8,w8,w9,lt
7101c8be40  cmp w11,#0x5
7101c8be44  bic w8,w8,w8, ASR #0x7
7101c8be48  csel w9,w11,w9,lt
7101c8be4c  bic w23,w9,w9, ASR #0x7
7101c8be50  and w10,w8,#0xff
7101c8be54  cmp w10,#0x6
7101c8be58  sturb w8,[x29, #-0xd4]
7101c8be5c  sturb w23,[x29, #-0xd8]
7101c8be60  b.cs 0x7101c8cd68
7101c8be64  adrp x22,0x7104545000
7101c8be68  add x22,x22,#0x290
7101c8be6c  and x8,x8,#0xff
7101c8be70  ldrb w1,[x22, x8, LSL ]
7101c8be74  sub x0,x29,#0x88
7101c8be78  sub x24,x29,#0x88
7101c8be7c  bl 0x7101c6ee80
7101c8be80  and w8,w23,#0xff
7101c8be84  cmp w8,#0x6
7101c8be88  b.cs 0x7101c8cd68
7101c8be8c  and x8,x23,#0xff
7101c8be90  ldrb w1,[x22, x8, LSL ]
7101c8be94  sub x0,x29,#0xd0
7101c8be98  bl 0x7101c6ee80
7101c8be9c  mov x9,xzr
7101c8bea0  add x8,x24,#0x8
7101c8bea4  add x10,sp,#0x48
7101c8bea8  str wzr,[sp, #0x48]
7101c8beac  b 0x7101c8beb8
7101c8beb0  add x9,x9,#0x2
7101c8beb4  strb w11,[x12, #0x9]
7101c8beb8  add x11,x8,x9
7101c8bebc  ldrb w13,[x11]
7101c8bec0  cbz w13,0x7101c8cb44
7101c8bec4  add w14,w9,#0x1
7101c8bec8  add x12,x10,x9
7101c8becc  cmp w14,#0x3f
7101c8bed0  strb w13,[x12, #0x8]
7101c8bed4  b.cs 0x7101c8cb40
7101c8bed8  ldrb w11,[x11, #0x1]
7101c8bedc  cbnz w11,0x7101c8beb0
7101c8bee0  add x9,x9,#0x1
7101c8bee4  b 0x7101c8cb44
7101c8bee8  mov x13,#0x6e6d
7101c8beec  movk x13,#0x5f75, LSL #16
7101c8bef0  orr x12,xzr,#0x1c00000000
7101c8bef4  movk x13,#0x6e6f, LSL #32
7101c8bef8  movk x13,#0x696c, LSL #48
7101c8befc  mov w14,#0x6d
7101c8bf00  stp x12,x13,[x29, #-0x88]
7101c8bf04  mov x13,#0x656e
7101c8bf08  movk x13,#0x725f, LSL #16
7101c8bf0c  movk x13,#0x6f6f, LSL #32
7101c8bf10  movk x13,#0x5f6d, LSL #48
7101c8bf14  stur x13,[x29, #-0x78]
7101c8bf18  mov w13,#0x6f66
7101c8bf1c  sturh w13,[x29, #-0x70]
7101c8bf20  mov x13,#0x6d72
7101c8bf24  movk x13,#0x6f5f, LSL #16
7101c8bf28  movk x13,#0x656e, LSL #32
7101c8bf2c  movk x13,#0x6f5f, LSL #48
7101c8bf30  stur x13,[x11, #0x62]
7101c8bf34  sub x12,x29,#0x88
7101c8bf38  mov w13,#0x656e
7101c8bf3c  sturh w13,[x29, #-0x66]
7101c8bf40  add x12,x12,#0x9
7101c8bf44  mov w13,#0x89
7101c8bf48  sturb wzr,[x29, #-0x64]
7101c8bf4c  mov w15,w8
7101c8bf50  mul w15,w15,w13
7101c8bf54  and w14,w14,#0xff
7101c8bf58  eor w15,w15,w14
7101c8bf5c  ldrb w14,[x12], #0x1
7101c8bf60  cbnz w14,0x7101c8bf50
7101c8bf64  b 0x7101c8c0c4
7101c8bf68  mov x13,#0x6e6d
7101c8bf6c  movk x13,#0x5f75, LSL #16
7101c8bf70  mov x12,#0x1a00000000
7101c8bf74  movk x13,#0x6e6f, LSL #32
7101c8bf78  movk x13,#0x696c, LSL #48
7101c8bf7c  sub x14,x29,#0x88
7101c8bf80  stp x12,x13,[x29, #-0x88]
7101c8bf84  mov x13,#0x656e
7101c8bf88  movk x13,#0x725f, LSL #16
7101c8bf8c  movk x13,#0x6f6f, LSL #32
7101c8bf90  movk x13,#0x5f6d, LSL #48
7101c8bf94  stur x13,[x29, #-0x78]
7101c8bf98  mov w13,#0x6f66
7101c8bf9c  sturh w13,[x29, #-0x70]
7101c8bfa0  mov x13,#0x6d72
7101c8bfa4  movk x13,#0x745f, LSL #16
7101c8bfa8  movk x13,#0x7268, LSL #32
7101c8bfac  movk x13,#0x6565, LSL #48
7101c8bfb0  stur x13,[x11, #0x62]
7101c8bfb4  add x12,x14,#0x9
7101c8bfb8  mov w14,#0x6d
7101c8bfbc  sturb wzr,[x29, #-0x66]
7101c8bfc0  mov w13,#0x89
7101c8bfc4  mov w15,w8
7101c8bfc8  mul w15,w15,w13
7101c8bfcc  and w14,w14,#0xff
7101c8bfd0  eor w15,w15,w14
7101c8bfd4  ldrb w14,[x12], #0x1
7101c8bfd8  cbnz w14,0x7101c8bfc8
7101c8bfdc  b 0x7101c8c0c4
7101c8bfe0  mov x13,#0x6e6d
7101c8bfe4  movk x13,#0x5f75, LSL #16
7101c8bfe8  mov x12,#0x1900000000
7101c8bfec  movk x13,#0x6e6f, LSL #32
7101c8bff0  movk x13,#0x696c, LSL #48
7101c8bff4  mov x15,#0x6d72
7101c8bff8  movk x15,#0x745f, LSL #16
7101c8bffc  stp x12,x13,[x29, #-0x88]
7101c8c000  mov x13,#0x656e
7101c8c004  movk x13,#0x725f, LSL #16
7101c8c008  movk x13,#0x6f6f, LSL #32
7101c8c00c  movk x13,#0x5f6d, LSL #48
7101c8c010  stur x13,[x29, #-0x78]
7101c8c014  sub x14,x29,#0x88
7101c8c018  mov w13,#0x6f66
7101c8c01c  sturh w13,[x29, #-0x70]
7101c8c020  movk x15,#0x6165, LSL #32
7101c8c024  movk x15,#0x6d, LSL #48
7101c8c028  stur x15,[x11, #0x62]
7101c8c02c  add x12,x14,#0x9
7101c8c030  mov w14,#0x6d
7101c8c034  mov w13,#0x89
7101c8c038  mov w15,w8
7101c8c03c  mul w15,w15,w13
7101c8c040  and w14,w14,#0xff
7101c8c044  eor w15,w15,w14
7101c8c048  ldrb w14,[x12], #0x1
7101c8c04c  cbnz w14,0x7101c8c03c
7101c8c050  b 0x7101c8c0c4
7101c8c054  mov x13,#0x6e6d
7101c8c058  movk x13,#0x5f75, LSL #16
7101c8c05c  mov x12,#0x1900000000
7101c8c060  movk x13,#0x6e6f, LSL #32
7101c8c064  movk x13,#0x696c, LSL #48
7101c8c068  mov x15,#0x6d72
7101c8c06c  movk x15,#0x665f, LSL #16
7101c8c070  stp x12,x13,[x29, #-0x88]
7101c8c074  mov x13,#0x656e
7101c8c078  movk x13,#0x725f, LSL #16
7101c8c07c  movk x13,#0x6f6f, LSL #32
7101c8c080  movk x13,#0x5f6d, LSL #48
7101c8c084  stur x13,[x29, #-0x78]
7101c8c088  sub x14,x29,#0x88
7101c8c08c  mov w13,#0x6f66
7101c8c090  sturh w13,[x29, #-0x70]
7101c8c094  movk x15,#0x756f, LSL #32
7101c8c098  movk x15,#0x72, LSL #48
7101c8c09c  stur x15,[x11, #0x62]
7101c8c0a0  add x12,x14,#0x9
7101c8c0a4  mov w14,#0x6d
7101c8c0a8  mov w13,#0x89
7101c8c0ac  mov w15,w8
7101c8c0b0  mul w15,w15,w13
7101c8c0b4  and w14,w14,#0xff
7101c8c0b8  eor w15,w15,w14
7101c8c0bc  ldrb w14,[x12], #0x1
7101c8c0c0  cbnz w14,0x7101c8c0b0
7101c8c0c4  and w12,w9,#0xff
7101c8c0c8  cmp w12,#0x4
7101c8c0cc  stur w15,[x29, #-0x88]
7101c8c0d0  b.cs 0x7101c8cd68
7101c8c0d4  and x9,x9,#0xff
7101c8c0d8  ldrb w9,[x10, x9, LSL ]
7101c8c0dc  cmp w9,#0x4
7101c8c0e0  b.hi 0x7101c8c2e0
7101c8c0e4  adrp x10,0x71044f9000
7101c8c0e8  add x10,x10,#0x8d4
7101c8c0ec  ldrsw x9,[x10, x9, LSL #0x2]
7101c8c0f0  add x9,x9,x10
7101c8c0f4  br x9
7101c8c0f8  mov x10,#0x6e6d
7101c8c0fc  movk x10,#0x5f75, LSL #16
7101c8c100  orr x9,xzr,#0x1800000000
7101c8c104  movk x10,#0x6e6f, LSL #32
7101c8c108  movk x10,#0x696c, LSL #48
7101c8c10c  mov w12,w8
7101c8c110  stp x9,x10,[x29, #-0xd0]
7101c8c114  mov x10,#0x656e
7101c8c118  movk x10,#0x725f, LSL #16
7101c8c11c  movk x10,#0x6f6f, LSL #32
7101c8c120  movk x10,#0x5f6d, LSL #48
7101c8c124  stur x10,[x29, #-0xc0]
7101c8c128  mov w10,#0x6f66
7101c8c12c  sturh w10,[x29, #-0xb8]
7101c8c130  mov w10,#0x6d72
7101c8c134  movk w10,#0x615f, LSL #16
7101c8c138  stur w10,[x11, #0x1a]
7101c8c13c  sub x9,x29,#0xd0
7101c8c140  mov w10,#0x6c6c
7101c8c144  sturh w10,[x29, #-0xb2]
7101c8c148  add x9,x9,#0x9
7101c8c14c  mov w11,#0x6d
7101c8c150  sturb wzr,[x29, #-0xb0]
7101c8c154  mov w10,#0x89
7101c8c158  mul w12,w12,w10
7101c8c15c  and w11,w11,#0xff
7101c8c160  eor w12,w12,w11
7101c8c164  ldrb w11,[x9], #0x1
7101c8c168  cbnz w11,0x7101c8c158
7101c8c16c  b 0x7101c8c264
7101c8c170  mov x10,#0x6e6d
7101c8c174  movk x10,#0x5f75, LSL #16
7101c8c178  orr x9,xzr,#0x1c00000000
7101c8c17c  movk x10,#0x6e6f, LSL #32
7101c8c180  movk x10,#0x696c, LSL #48
7101c8c184  mov w12,w8
7101c8c188  stp x9,x10,[x29, #-0xd0]
7101c8c18c  mov x10,#0x656e
7101c8c190  movk x10,#0x725f, LSL #16
7101c8c194  movk x10,#0x6f6f, LSL #32
7101c8c198  movk x10,#0x5f6d, LSL #48
7101c8c19c  stur x10,[x29, #-0xc0]
7101c8c1a0  mov w10,#0x6f66
7101c8c1a4  sturh w10,[x29, #-0xb8]
7101c8c1a8  mov x10,#0x6d72
7101c8c1ac  movk x10,#0x6f5f, LSL #16
7101c8c1b0  movk x10,#0x656e, LSL #32
7101c8c1b4  movk x10,#0x6f5f, LSL #48
7101c8c1b8  stur x10,[x11, #0x1a]
7101c8c1bc  sub x9,x29,#0xd0
7101c8c1c0  mov w10,#0x656e
7101c8c1c4  sturh w10,[x29, #-0xae]
7101c8c1c8  add x9,x9,#0x9
7101c8c1cc  mov w11,#0x6d
7101c8c1d0  sturb wzr,[x29, #-0xac]
7101c8c1d4  mov w10,#0x89
7101c8c1d8  mul w12,w12,w10
7101c8c1dc  and w11,w11,#0xff
7101c8c1e0  eor w12,w12,w11
7101c8c1e4  ldrb w11,[x9], #0x1
7101c8c1e8  cbnz w11,0x7101c8c1d8
7101c8c1ec  b 0x7101c8c264
7101c8c1f0  mov x10,#0x6e6d
7101c8c1f4  movk x10,#0x5f75, LSL #16
7101c8c1f8  mov x9,#0x1a00000000
7101c8c1fc  movk x10,#0x6e6f, LSL #32
7101c8c200  movk x10,#0x696c, LSL #48
7101c8c204  sub x12,x29,#0xd0
7101c8c208  stp x9,x10,[x29, #-0xd0]
7101c8c20c  mov x10,#0x656e
7101c8c210  movk x10,#0x725f, LSL #16
7101c8c214  movk x10,#0x6f6f, LSL #32
7101c8c218  movk x10,#0x5f6d, LSL #48
7101c8c21c  stur x10,[x29, #-0xc0]
7101c8c220  mov w10,#0x6f66
7101c8c224  sturh w10,[x29, #-0xb8]
7101c8c228  mov x10,#0x6d72
7101c8c22c  movk x10,#0x745f, LSL #16
7101c8c230  movk x10,#0x7268, LSL #32
7101c8c234  movk x10,#0x6565, LSL #48
7101c8c238  stur x10,[x11, #0x1a]
7101c8c23c  add x9,x12,#0x9
7101c8c240  mov w11,#0x6d
7101c8c244  sturb wzr,[x29, #-0xae]
7101c8c248  mov w10,#0x89
7101c8c24c  mov w12,w8
7101c8c250  mul w12,w12,w10
7101c8c254  and w11,w11,#0xff
7101c8c258  eor w12,w12,w11
7101c8c25c  ldrb w11,[x9], #0x1
7101c8c260  cbnz w11,0x7101c8c250
7101c8c264  stur w12,[x29, #-0xd0]
7101c8c268  b 0x7101c8c354
7101c8c26c  mov x10,#0x6e6d
7101c8c270  movk x10,#0x5f75, LSL #16
7101c8c274  mov x9,#0x1900000000
7101c8c278  movk x10,#0x6e6f, LSL #32
7101c8c27c  movk x10,#0x696c, LSL #48
7101c8c280  mov x13,#0x6d72
7101c8c284  movk x13,#0x745f, LSL #16
7101c8c288  stp x9,x10,[x29, #-0xd0]
7101c8c28c  mov x10,#0x656e
7101c8c290  movk x10,#0x725f, LSL #16
7101c8c294  movk x10,#0x6f6f, LSL #32
7101c8c298  movk x10,#0x5f6d, LSL #48
7101c8c29c  stur x10,[x29, #-0xc0]
7101c8c2a0  sub x12,x29,#0xd0
7101c8c2a4  mov w10,#0x6f66
7101c8c2a8  sturh w10,[x29, #-0xb8]
7101c8c2ac  movk x13,#0x6165, LSL #32
7101c8c2b0  movk x13,#0x6d, LSL #48
7101c8c2b4  stur x13,[x11, #0x1a]
7101c8c2b8  add x9,x12,#0x9
7101c8c2bc  mov w12,#0x6d
7101c8c2c0  mov w10,#0x89
7101c8c2c4  mov w11,w8
7101c8c2c8  mul w11,w11,w10
7101c8c2cc  and w12,w12,#0xff
7101c8c2d0  eor w11,w11,w12
7101c8c2d4  ldrb w12,[x9], #0x1
7101c8c2d8  cbnz w12,0x7101c8c2c8
7101c8c2dc  b 0x7101c8c350
7101c8c2e0  mov x10,#0x6e6d
7101c8c2e4  movk x10,#0x5f75, LSL #16
7101c8c2e8  mov x9,#0x1900000000
7101c8c2ec  movk x10,#0x6e6f, LSL #32
7101c8c2f0  movk x10,#0x696c, LSL #48
7101c8c2f4  mov x13,#0x6d72
7101c8c2f8  movk x13,#0x665f, LSL #16
7101c8c2fc  stp x9,x10,[x29, #-0xd0]
7101c8c300  mov x10,#0x656e
7101c8c304  movk x10,#0x725f, LSL #16
7101c8c308  movk x10,#0x6f6f, LSL #32
7101c8c30c  movk x10,#0x5f6d, LSL #48
7101c8c310  stur x10,[x29, #-0xc0]
7101c8c314  sub x12,x29,#0xd0
7101c8c318  mov w10,#0x6f66
7101c8c31c  sturh w10,[x29, #-0xb8]
7101c8c320  movk x13,#0x756f, LSL #32
7101c8c324  movk x13,#0x72, LSL #48
7101c8c328  stur x13,[x11, #0x1a]
7101c8c32c  add x9,x12,#0x9
7101c8c330  mov w12,#0x6d
7101c8c334  mov w10,#0x89
7101c8c338  mov w11,w8
7101c8c33c  mul w11,w11,w10
7101c8c340  and w12,w12,#0xff
7101c8c344  eor w11,w11,w12
7101c8c348  ldrb w12,[x9], #0x1
7101c8c34c  cbnz w12,0x7101c8c33c
7101c8c350  stur w11,[x29, #-0xd0]
7101c8c354  sub x10,x29,#0x88
7101c8c358  add x11,sp,#0x48
7101c8c35c  mov x9,xzr
7101c8c360  add x10,x10,#0x9
7101c8c364  add x11,x11,#0x9
7101c8c368  str wzr,[sp, #0x48]
7101c8c36c  mov w12,#0x6d
7101c8c370  tst w12,#0xff
7101c8c374  b.eq 0x7101c8c3bc
7101c8c378  add w13,w9,#0x1
7101c8c37c  add x14,x11,x9
7101c8c380  cmp w13,#0x3f
7101c8c384  sturb w12,[x14, #-0x1]
7101c8c388  b.cs 0x7101c8c3b0
7101c8c38c  ldrb w12,[x10, x9, LSL ]
7101c8c390  cbz w12,0x7101c8c3b8
7101c8c394  add x13,x10,x9
7101c8c398  strb w12,[x11, x9, LSL ]
7101c8c39c  ldrb w12,[x13, #0x1]
7101c8c3a0  add x9,x9,#0x2
7101c8c3a4  tst w12,#0xff
7101c8c3a8  b.ne 0x7101c8c378
7101c8c3ac  b 0x7101c8c3bc
7101c8c3b0  add w9,w9,#0x1
7101c8c3b4  b 0x7101c8c3bc
7101c8c3b8  add x9,x9,#0x1
7101c8c3bc  add x10,sp,#0x48
7101c8c3c0  add x11,x10,#0x8
7101c8c3c4  mov w12,w8
7101c8c3c8  strb wzr,[x11, w9, UXTW ]
7101c8c3cc  str w9,[sp, #0x4c]
7101c8c3d0  ldrb w9,[sp, #0x50]
7101c8c3d4  cbz w9,0x7101c8c3fc
7101c8c3d8  add x11,x10,#0x9
7101c8c3dc  mov w13,#0x89
7101c8c3e0  mov w14,w9
7101c8c3e4  mov w12,w8
7101c8c3e8  mul w12,w12,w13
7101c8c3ec  and w14,w14,#0xff
7101c8c3f0  eor w12,w12,w14
7101c8c3f4  ldrb w14,[x11], #0x1
7101c8c3f8  cbnz w14,0x7101c8c3e8
7101c8c3fc  str w12,[sp, #0x48]
7101c8c400  sub x12,x29,#0xd0
7101c8c404  mov x11,xzr
7101c8c408  add x12,x12,#0x9
7101c8c40c  mov w13,#0x6d
7101c8c410  str wzr,[sp, #0x90]
7101c8c414  tst w13,#0xff
7101c8c418  b.eq 0x7101c8c460
7101c8c41c  add w15,w11,#0x1
7101c8c420  add x14,x10,x11
7101c8c424  cmp w15,#0x3f
7101c8c428  strb w13,[x14, #0x50]
7101c8c42c  b.cs 0x7101c8c454
7101c8c430  ldrb w13,[x12, x11, LSL ]
7101c8c434  cbz w13,0x7101c8c45c
7101c8c438  add x15,x12,x11
7101c8c43c  strb w13,[x14, #0x51]
7101c8c440  ldrb w13,[x15, #0x1]
7101c8c444  add x11,x11,#0x2
7101c8c448  tst w13,#0xff
7101c8c44c  b.ne 0x7101c8c41c
7101c8c450  b 0x7101c8c460
7101c8c454  add w11,w11,#0x1
7101c8c458  b 0x7101c8c460
7101c8c45c  add x11,x11,#0x1
7101c8c460  add x13,sp,#0x48
7101c8c464  add x10,x13,#0x50
7101c8c468  mov w12,w8
7101c8c46c  strb wzr,[x10, w11, UXTW ]
7101c8c470  ldrb w10,[sp, #0x98]
7101c8c474  str w11,[sp, #0x94]
7101c8c478  cbz w10,0x7101c8c4a0
7101c8c47c  add x11,x13,#0x51
7101c8c480  mov w13,#0x89
7101c8c484  mov w14,w10
7101c8c488  mov w12,w8
7101c8c48c  mul w12,w12,w13
7101c8c490  and w14,w14,#0xff
7101c8c494  eor w12,w12,w14
7101c8c498  ldrb w14,[x11], #0x1
7101c8c49c  cbnz w14,0x7101c8c48c
7101c8c4a0  str w12,[sp, #0x90]
7101c8c4a4  cbz w9,0x7101c8c4e0
7101c8c4a8  add x12,sp,#0x48
7101c8c4ac  add x13,sp,#0x458
7101c8c4b0  mov x11,xzr
7101c8c4b4  add x12,x12,#0x9
7101c8c4b8  add x13,x13,#0x8
7101c8c4bc  add w14,w11,#0x1
7101c8c4c0  cmp w14,#0x3e
7101c8c4c4  strb w9,[x13, x11, LSL ]
7101c8c4c8  b.hi 0x7101c8c4e8
7101c8c4cc  ldrb w9,[x12, x11, LSL ]
7101c8c4d0  add x14,x11,#0x1
7101c8c4d4  mov x11,x14
7101c8c4d8  cbnz w9,0x7101c8c4bc
7101c8c4dc  b 0x7101c8c4ec
7101c8c4e0  mov w14,wzr
7101c8c4e4  b 0x7101c8c4ec
7101c8c4e8  add w14,w11,#0x1
7101c8c4ec  add x11,sp,#0x458
7101c8c4f0  add x9,x11,#0x8
7101c8c4f4  mov w12,w8
7101c8c4f8  strb wzr,[x9, w14, UXTW ]
7101c8c4fc  ldrb w9,[sp, #0x460]
7101c8c500  str w14,[sp, #0x45c]
7101c8c504  cbz w9,0x7101c8c528
7101c8c508  add x11,x11,#0x9
7101c8c50c  mov w13,#0x89
7101c8c510  mov w12,w8
7101c8c514  mul w12,w12,w13
7101c8c518  and w9,w9,#0xff
7101c8c51c  eor w12,w12,w9
7101c8c520  ldrb w9,[x11], #0x1
7101c8c524  cbnz w9,0x7101c8c514
7101c8c528  str w12,[sp, #0x458]
7101c8c52c  cbz w10,0x7101c8c568
7101c8c530  add x11,sp,#0x48
7101c8c534  add x12,sp,#0x458
7101c8c538  mov x9,xzr
7101c8c53c  add x11,x11,#0x51
7101c8c540  add x12,x12,#0x50
7101c8c544  add w13,w9,#0x1
7101c8c548  cmp w13,#0x3e
7101c8c54c  strb w10,[x12, x9, LSL ]
7101c8c550  b.hi 0x7101c8c570
7101c8c554  ldrb w10,[x11, x9, LSL ]
7101c8c558  add x13,x9,#0x1
7101c8c55c  mov x9,x13
7101c8c560  cbnz w10,0x7101c8c544
7101c8c564  b 0x7101c8c574
7101c8c568  mov w13,wzr
7101c8c56c  b 0x7101c8c574
7101c8c570  add w13,w9,#0x1
7101c8c574  add x9,sp,#0x458
7101c8c578  add x10,x9,#0x50
7101c8c57c  strb wzr,[x10, w13, UXTW ]
7101c8c580  ldrb w10,[sp, #0x4a8]
7101c8c584  str w13,[sp, #0x4a4]
7101c8c588  cbz w10,0x7101c8c7a8
7101c8c58c  add x9,x9,#0x51
7101c8c590  mov w11,#0x89
7101c8c594  mul w8,w8,w11
7101c8c598  and w10,w10,#0xff
7101c8c59c  eor w8,w8,w10
7101c8c5a0  ldrb w10,[x9], #0x1
7101c8c5a4  cbnz w10,0x7101c8c594
7101c8c5a8  b 0x7101c8c7a8
7101c8c5ac  add w9,w9,#0x1
7101c8c5b0  add x10,sp,#0x48
7101c8c5b4  add x11,x10,#0x8
7101c8c5b8  mov w8,#0x9dc5
7101c8c5bc  movk w8,#0x811c, LSL #16
7101c8c5c0  mov w12,w8
7101c8c5c4  strb wzr,[x11, w9, UXTW ]
7101c8c5c8  str w9,[sp, #0x4c]
7101c8c5cc  ldrb w9,[sp, #0x50]
7101c8c5d0  cbz w9,0x7101c8c5f8
7101c8c5d4  add x11,x10,#0x9
7101c8c5d8  mov w13,#0x89
7101c8c5dc  mov w14,w9
7101c8c5e0  mov w12,w8
7101c8c5e4  mul w12,w12,w13
7101c8c5e8  and w14,w14,#0xff
7101c8c5ec  eor w12,w12,w14
7101c8c5f0  ldrb w14,[x11], #0x1
7101c8c5f4  cbnz w14,0x7101c8c5e4
7101c8c5f8  str w12,[sp, #0x48]
7101c8c5fc  sub x12,x29,#0xd0
7101c8c600  mov x11,xzr
7101c8c604  add x12,x12,#0x8
7101c8c608  str wzr,[sp, #0x90]
7101c8c60c  b 0x7101c8c618
7101c8c610  add x11,x11,#0x2
7101c8c614  strb w13,[x14, #0x51]
7101c8c618  add x13,x12,x11
7101c8c61c  ldrb w15,[x13]
7101c8c620  cbz w15,0x7101c8c64c
7101c8c624  add w16,w11,#0x1
7101c8c628  add x14,x10,x11
7101c8c62c  cmp w16,#0x3f
7101c8c630  strb w15,[x14, #0x50]
7101c8c634  b.cs 0x7101c8c648
7101c8c638  ldrb w13,[x13, #0x1]
7101c8c63c  cbnz w13,0x7101c8c610
7101c8c640  add x11,x11,#0x1
7101c8c644  b 0x7101c8c64c
7101c8c648  add w11,w11,#0x1
7101c8c64c  add x13,sp,#0x48
7101c8c650  add x10,x13,#0x50
7101c8c654  mov w12,w8
7101c8c658  strb wzr,[x10, w11, UXTW ]
7101c8c65c  ldrb w10,[sp, #0x98]
7101c8c660  str w11,[sp, #0x94]
7101c8c664  cbz w10,0x7101c8c68c
7101c8c668  add x11,x13,#0x51
7101c8c66c  mov w13,#0x89
7101c8c670  mov w14,w10
7101c8c674  mov w12,w8
7101c8c678  mul w12,w12,w13
7101c8c67c  and w14,w14,#0xff
7101c8c680  eor w12,w12,w14
7101c8c684  ldrb w14,[x11], #0x1
7101c8c688  cbnz w14,0x7101c8c678
7101c8c68c  str w12,[sp, #0x90]
7101c8c690  cbz w9,0x7101c8c6cc
7101c8c694  add x12,sp,#0x48
7101c8c698  add x13,sp,#0x458
7101c8c69c  mov x11,xzr
7101c8c6a0  add x12,x12,#0x9
7101c8c6a4  add x13,x13,#0x8
7101c8c6a8  add w14,w11,#0x1
7101c8c6ac  cmp w14,#0x3e
7101c8c6b0  strb w9,[x13, x11, LSL ]
7101c8c6b4  b.hi 0x7101c8c6d4
7101c8c6b8  ldrb w9,[x12, x11, LSL ]
7101c8c6bc  add x14,x11,#0x1
7101c8c6c0  mov x11,x14
7101c8c6c4  cbnz w9,0x7101c8c6a8
7101c8c6c8  b 0x7101c8c6d8
7101c8c6cc  mov w14,wzr
7101c8c6d0  b 0x7101c8c6d8
7101c8c6d4  add w14,w11,#0x1
7101c8c6d8  add x11,sp,#0x458
7101c8c6dc  add x9,x11,#0x8
7101c8c6e0  mov w13,w8
7101c8c6e4  strb wzr,[x9, w14, UXTW ]
7101c8c6e8  ldrb w9,[sp, #0x460]
7101c8c6ec  str w14,[sp, #0x45c]
7101c8c6f0  cbz w9,0x7101c8c714
7101c8c6f4  add x12,x11,#0x9
7101c8c6f8  mov w14,#0x89
7101c8c6fc  mov w13,w8
7101c8c700  mul w13,w13,w14
7101c8c704  and w9,w9,#0xff
7101c8c708  eor w13,w13,w9
7101c8c70c  ldrb w9,[x12], #0x1
7101c8c710  cbnz w9,0x7101c8c700
7101c8c714  add x12,sp,#0x48
7101c8c718  mov x9,xzr
7101c8c71c  add x11,x11,#0x51
7101c8c720  add x12,x12,#0x51
7101c8c724  str w13,[sp, #0x458]
7101c8c728  tst w10,#0xff
7101c8c72c  b.eq 0x7101c8c774
7101c8c730  add w13,w9,#0x1
7101c8c734  add x14,x11,x9
7101c8c738  cmp w13,#0x3f
7101c8c73c  sturb w10,[x14, #-0x1]
7101c8c740  b.cs 0x7101c8c768
7101c8c744  ldrb w10,[x12, x9, LSL ]
7101c8c748  cbz w10,0x7101c8c770
7101c8c74c  add x13,x12,x9
7101c8c750  strb w10,[x11, x9, LSL ]
7101c8c754  ldrb w10,[x13, #0x1]
7101c8c758  add x9,x9,#0x2
7101c8c75c  tst w10,#0xff
7101c8c760  b.ne 0x7101c8c730
7101c8c764  b 0x7101c8c774
7101c8c768  add w9,w9,#0x1
7101c8c76c  b 0x7101c8c774
7101c8c770  add x9,x9,#0x1
7101c8c774  add x11,sp,#0x458
7101c8c778  add x10,x11,#0x50
7101c8c77c  strb wzr,[x10, w9, UXTW ]
7101c8c780  ldrb w10,[sp, #0x4a8]
7101c8c784  str w9,[sp, #0x4a4]
7101c8c788  cbz w10,0x7101c8c7a8
7101c8c78c  add x9,x11,#0x51
7101c8c790  mov w11,#0x89
7101c8c794  mul w8,w8,w11
7101c8c798  and w10,w10,#0xff
7101c8c79c  eor w8,w8,w10
7101c8c7a0  ldrb w10,[x9], #0x1
7101c8c7a4  cbnz w10,0x7101c8c794
7101c8c7a8  str w8,[sp, #0x4a0]
7101c8c7ac  ldur x0,[x29, #-0xe0]
7101c8c7b0  adrp x1,0x710425f000
7101c8c7b4  add x1,x1,#0x506
7101c8c7b8  fmov s0,0x3f800000
7101c8c7bc  bl 0x7103778300
7101c8c7c0  add x23,sp,#0x458
7101c8c7c4  add x22,x23,#0x8
7101c8c7c8  sub x0,x29,#0xf8
7101c8c7cc  mov x1,x22
7101c8c7d0  bl 0x710377a120
7101c8c7d4  add x0,sp,#0x4e8
7101c8c7d8  mov x1,x22
7101c8c7dc  bl 0x710377a120
7101c8c7e0  ldurb w8,[x29, #-0xd4]
7101c8c7e4  ldurb w9,[x29, #-0xd8]
7101c8c7e8  cmp w8,w9
7101c8c7ec  b.eq 0x7101c8c82c
7101c8c7f0  add x1,x23,#0x50
7101c8c7f4  add x0,sp,#0x4f8
7101c8c7f8  bl 0x710377a120
7101c8c7fc  ldursb w9,[x29, #-0xd4]
7101c8c800  ldursb w11,[x29, #-0xd8]
7101c8c804  adrp x8,0x710438b000
7101c8c808  add x8,x8,#0x71d
7101c8c80c  adrp x10,0x7104401000
7101c8c810  add x10,x10,#0xd83
7101c8c814  adrp x1,0x710424f000
7101c8c818  add x1,x1,#0x5e3
7101c8c81c  sub x0,x29,#0xe8
7101c8c820  cmp w9,w11
7101c8c824  csel x2,x10,x8,gt
7101c8c828  bl 0x7103778430
7101c8c82c  tbz w21,#0x0,0x7101c8ca98
7101c8c830  ldr x1,[x19, #0x420]
7101c8c834  add x0,sp,#0x48
7101c8c838  mov w2,wzr
7101c8c83c  add x21,x19,#0x420
7101c8c840  bl 0x7103771d60
7101c8c844  ldr x1,[x19, #0x420]
7101c8c848  sub x0,x29,#0x88
7101c8c84c  mov w2,#0x1
7101c8c850  bl 0x7103771d60
7101c8c854  ldurb w8,[x29, #-0xd4]
7101c8c858  cbz w8,0x7101c8c8b4
7101c8c85c  ldur x22,[x29, #-0x80]
7101c8c860  ldrb w9,[sp, #0x454]
7101c8c864  cmp w8,w9
7101c8c868  ldr x23,[x22]
7101c8c86c  b.ne 0x7101c8c964
7101c8c870  cbz x23,0x7101c8ca00
7101c8c874  ldr x8,[x23]
7101c8c878  ldr x8,[x8, #0x208]
7101c8c87c  mov x0,x23
7101c8c880  mov w1,wzr
7101c8c884  blr x8
7101c8c888  ldr x8,[x23]
7101c8c88c  ldr x8,[x8, #0x200]
7101c8c890  mov x0,x23
7101c8c894  blr x8
7101c8c898  tbz w0,#0x0,0x7101c8c9e4
7101c8c89c  ldr x8,[x23]
7101c8c8a0  ldr x8,[x8, #0x210]
7101c8c8a4  mov x0,x23
7101c8c8a8  blr x8
7101c8c8ac  eor w8,w0,#0x1
7101c8c8b0  b 0x7101c8c9e8
7101c8c8b4  ldur x22,[x29, #-0x80]
7101c8c8b8  ldr x23,[x22]
7101c8c8bc  cbz x23,0x7101c8c918
7101c8c8c0  ldr x8,[x23]
7101c8c8c4  ldr x8,[x8, #0x208]
7101c8c8c8  mov w1,#0x1
7101c8c8cc  mov x0,x23
7101c8c8d0  mov w24,#0x1
7101c8c8d4  blr x8
7101c8c8d8  ldr x8,[x23]
7101c8c8dc  ldr x8,[x8, #0x200]
7101c8c8e0  mov x0,x23
7101c8c8e4  blr x8
7101c8c8e8  tbz w0,#0x0,0x7101c8c900
7101c8c8ec  ldr x8,[x23]
7101c8c8f0  ldr x8,[x8, #0x210]
7101c8c8f4  mov x0,x23
7101c8c8f8  blr x8
7101c8c8fc  eor w24,w0,#0x1
7101c8c900  ldr x8,[x23]
7101c8c904  ldr x8,[x8, #0x388]
7101c8c908  and w1,w24,#0x1
7101c8c90c  mov x0,x23
7101c8c910  mov w2,wzr
7101c8c914  blr x8
7101c8c918  ldr x23,[sp, #0x50]
7101c8c91c  ldr x24,[x23]
7101c8c920  cbz x24,0x7101c8ca64
7101c8c924  ldr x8,[x24]
7101c8c928  ldr x8,[x8, #0x208]
7101c8c92c  mov x0,x24
7101c8c930  mov w1,wzr
7101c8c934  blr x8
7101c8c938  ldr x8,[x24]
7101c8c93c  ldr x8,[x8, #0x200]
7101c8c940  mov x0,x24
7101c8c944  blr x8
7101c8c948  tbz w0,#0x0,0x7101c8c9c4
7101c8c94c  ldr x8,[x24]
7101c8c950  ldr x8,[x8, #0x210]
7101c8c954  mov x0,x24
7101c8c958  blr x8
7101c8c95c  eor w8,w0,#0x1
7101c8c960  b 0x7101c8c9c8
7101c8c964  cbz x23,0x7101c8ca00
7101c8c968  ldr x8,[x23]
7101c8c96c  ldr x8,[x8, #0x208]
7101c8c970  mov w1,#0x1
7101c8c974  mov x0,x23
7101c8c978  mov w24,#0x1
7101c8c97c  blr x8
7101c8c980  ldr x8,[x23]
7101c8c984  ldr x8,[x8, #0x200]
7101c8c988  mov x0,x23
7101c8c98c  blr x8
7101c8c990  tbz w0,#0x0,0x7101c8c9a8
7101c8c994  ldr x8,[x23]
7101c8c998  ldr x8,[x8, #0x210]
7101c8c99c  mov x0,x23
7101c8c9a0  blr x8
7101c8c9a4  eor w24,w0,#0x1
7101c8c9a8  ldr x8,[x23]
7101c8c9ac  ldr x8,[x8, #0x388]
7101c8c9b0  and w1,w24,#0x1
7101c8c9b4  mov x0,x23
7101c8c9b8  mov w2,wzr
7101c8c9bc  blr x8
7101c8c9c0  b 0x7101c8ca00
7101c8c9c4  mov w8,#0x1
7101c8c9c8  ldr x9,[x24]
7101c8c9cc  ldr x9,[x9, #0x388]
7101c8c9d0  and w1,w8,#0x1
7101c8c9d4  mov x0,x24
7101c8c9d8  mov w2,wzr
7101c8c9dc  blr x9
7101c8c9e0  b 0x7101c8ca64
7101c8c9e4  mov w8,#0x1
7101c8c9e8  ldr x9,[x23]
7101c8c9ec  ldr x9,[x9, #0x388]
7101c8c9f0  and w1,w8,#0x1
7101c8c9f4  mov x0,x23
7101c8c9f8  mov w2,wzr
7101c8c9fc  blr x9
7101c8ca00  ldr x23,[sp, #0x50]
7101c8ca04  ldr x24,[x23]
7101c8ca08  cbz x24,0x7101c8ca64
7101c8ca0c  ldr x8,[x24]
7101c8ca10  ldr x8,[x8, #0x208]
7101c8ca14  mov w1,#0x1
7101c8ca18  mov x0,x24
7101c8ca1c  mov w25,#0x1
7101c8ca20  blr x8
7101c8ca24  ldr x8,[x24]
7101c8ca28  ldr x8,[x8, #0x200]
7101c8ca2c  mov x0,x24
7101c8ca30  blr x8
7101c8ca34  tbz w0,#0x0,0x7101c8ca4c
7101c8ca38  ldr x8,[x24]
7101c8ca3c  ldr x8,[x8, #0x210]
7101c8ca40  mov x0,x24
7101c8ca44  blr x8
7101c8ca48  eor w25,w0,#0x1
7101c8ca4c  ldr x8,[x24]
7101c8ca50  ldr x8,[x8, #0x388]
7101c8ca54  and w1,w25,#0x1
7101c8ca58  mov x0,x24
7101c8ca5c  mov w2,wzr
7101c8ca60  blr x8
7101c8ca64  mov w1,#0x1
7101c8ca68  mov x0,x21
7101c8ca6c  bl 0x7101c83c40
7101c8ca70  adrp x21,0x710523d000
7101c8ca74  add x21,x21,#0x9c8
7101c8ca78  stp x21,xzr,[x29, #-0x88]
7101c8ca7c  cbz x22,0x7101c8ca88
7101c8ca80  mov x0,x22
7101c8ca84  bl 0x710392eb40
7101c8ca88  stp x21,xzr,[sp, #0x48]
7101c8ca8c  cbz x23,0x7101c8ca98
7101c8ca90  mov x0,x23
7101c8ca94  bl 0x710392eb40
7101c8ca98  ldr x10,[x19, #0x440]
7101c8ca9c  ldr x9,[x19, #0x438]
7101c8caa0  sxtw x8,w20
7101c8caa4  sub x10,x10,x9
7101c8caa8  cmp x10,x8
7101c8caac  b.ls 0x7101c8cd70
7101c8cab0  ldurb w10,[x29, #-0xd4]
7101c8cab4  strb w10,[x9, x8, LSL ]
7101c8cab8  ldr x0,[sp, #0x4f0]
7101c8cabc  adrp x20,0x710523d000
7101c8cac0  add x20,x20,#0x9a8
7101c8cac4  str x20,[sp, #0x4e8]
7101c8cac8  str xzr,[sp, #0x4f0]
7101c8cacc  cbz x0,0x7101c8cad4
7101c8cad0  bl 0x710392eb40
7101c8cad4  ldr x0,[sp, #0x500]
7101c8cad8  str x20,[sp, #0x4f8]
7101c8cadc  str xzr,[sp, #0x500]
7101c8cae0  cbz x0,0x7101c8cae8
7101c8cae4  bl 0x710392eb40
7101c8cae8  ldur x0,[x29, #-0xf0]
7101c8caec  stp x20,xzr,[x29, #-0xf8]
7101c8caf0  cbz x0,0x7101c8caf8
7101c8caf4  bl 0x710392eb40
7101c8caf8  ldur x19,[x29, #-0xe0]
7101c8cafc  adrp x8,0x710523d000
7101c8cb00  add x8,x8,#0x988
7101c8cb04  stp x8,xzr,[x29, #-0xe8]
7101c8cb08  cbz x19,0x7101c8cb24
7101c8cb0c  ldr x0,[x19, #0x18]
7101c8cb10  stp x20,xzr,[x19, #0x10]
7101c8cb14  cbz x0,0x7101c8cb1c
7101c8cb18  bl 0x710392eb40
7101c8cb1c  mov x0,x19
7101c8cb20  bl 0x710392eb40
7101c8cb24  add sp,sp,#0x5c0
7101c8cb28  ldp x29,x30,[sp, #0x40]
7101c8cb2c  ldp x20,x19,[sp, #0x30]
7101c8cb30  ldp x22,x21,[sp, #0x20]
7101c8cb34  ldp x24,x23,[sp, #0x10]
7101c8cb38  ldp x28,x25,[sp], #0x50
7101c8cb3c  ret
7101c8cb40  add w9,w9,#0x1
7101c8cb44  add x10,sp,#0x48
7101c8cb48  add x11,x10,#0x8
7101c8cb4c  mov w8,#0x9dc5
7101c8cb50  movk w8,#0x811c, LSL #16
7101c8cb54  mov w12,w8
7101c8cb58  strb wzr,[x11, w9, UXTW ]
7101c8cb5c  str w9,[sp, #0x4c]
7101c8cb60  ldrb w9,[sp, #0x50]
7101c8cb64  cbz w9,0x7101c8cb8c
7101c8cb68  add x11,x10,#0x9
7101c8cb6c  mov w13,#0x89
7101c8cb70  mov w14,w9
7101c8cb74  mov w12,w8
7101c8cb78  mul w12,w12,w13
7101c8cb7c  and w14,w14,#0xff
7101c8cb80  eor w12,w12,w14
7101c8cb84  ldrb w14,[x11], #0x1
7101c8cb88  cbnz w14,0x7101c8cb78
7101c8cb8c  str w12,[sp, #0x48]
7101c8cb90  sub x12,x29,#0xd0
7101c8cb94  mov x11,xzr
7101c8cb98  add x12,x12,#0x8
7101c8cb9c  str wzr,[sp, #0x90]
7101c8cba0  b 0x7101c8cbac
7101c8cba4  add x11,x11,#0x2
7101c8cba8  strb w13,[x14, #0x51]
7101c8cbac  add x13,x12,x11
7101c8cbb0  ldrb w15,[x13]
7101c8cbb4  cbz w15,0x7101c8cbe0
7101c8cbb8  add w16,w11,#0x1
7101c8cbbc  add x14,x10,x11
7101c8cbc0  cmp w16,#0x3f
7101c8cbc4  strb w15,[x14, #0x50]
7101c8cbc8  b.cs 0x7101c8cbdc
7101c8cbcc  ldrb w13,[x13, #0x1]
7101c8cbd0  cbnz w13,0x7101c8cba4
7101c8cbd4  add x11,x11,#0x1
7101c8cbd8  b 0x7101c8cbe0
7101c8cbdc  add w11,w11,#0x1
7101c8cbe0  add x13,sp,#0x48
7101c8cbe4  add x10,x13,#0x50
7101c8cbe8  mov w12,w8
7101c8cbec  strb wzr,[x10, w11, UXTW ]
7101c8cbf0  ldrb w10,[sp, #0x98]
7101c8cbf4  str w11,[sp, #0x94]
7101c8cbf8  cbz w10,0x7101c8cc20
7101c8cbfc  add x11,x13,#0x51
7101c8cc00  mov w13,#0x89
7101c8cc04  mov w14,w10
7101c8cc08  mov w12,w8
7101c8cc0c  mul w12,w12,w13
7101c8cc10  and w14,w14,#0xff
7101c8cc14  eor w12,w12,w14
7101c8cc18  ldrb w14,[x11], #0x1
7101c8cc1c  cbnz w14,0x7101c8cc0c
7101c8cc20  str w12,[sp, #0x90]
7101c8cc24  cbz w9,0x7101c8cc60
7101c8cc28  add x12,sp,#0x48
7101c8cc2c  add x13,sp,#0x458
7101c8cc30  mov x11,xzr
7101c8cc34  add x12,x12,#0x9
7101c8cc38  add x13,x13,#0x8
7101c8cc3c  add w14,w11,#0x1
7101c8cc40  cmp w14,#0x3e
7101c8cc44  strb w9,[x13, x11, LSL ]
7101c8cc48  b.hi 0x7101c8cc68
7101c8cc4c  ldrb w9,[x12, x11, LSL ]
7101c8cc50  add x14,x11,#0x1
7101c8cc54  mov x11,x14
7101c8cc58  cbnz w9,0x7101c8cc3c
7101c8cc5c  b 0x7101c8cc6c
7101c8cc60  mov w14,wzr
7101c8cc64  b 0x7101c8cc6c
7101c8cc68  add w14,w11,#0x1
7101c8cc6c  add x11,sp,#0x458
7101c8cc70  add x9,x11,#0x8
7101c8cc74  mov w13,w8
7101c8cc78  strb wzr,[x9, w14, UXTW ]
7101c8cc7c  ldrb w9,[sp, #0x460]
7101c8cc80  str w14,[sp, #0x45c]
7101c8cc84  cbz w9,0x7101c8cca8
7101c8cc88  add x12,x11,#0x9
7101c8cc8c  mov w14,#0x89
7101c8cc90  mov w13,w8
7101c8cc94  mul w13,w13,w14
7101c8cc98  and w9,w9,#0xff
7101c8cc9c  eor w13,w13,w9
7101c8cca0  ldrb w9,[x12], #0x1
7101c8cca4  cbnz w9,0x7101c8cc94
7101c8cca8  add x12,sp,#0x48
7101c8ccac  mov x9,xzr
7101c8ccb0  add x11,x11,#0x51
7101c8ccb4  add x12,x12,#0x51
7101c8ccb8  str w13,[sp, #0x458]
7101c8ccbc  tst w10,#0xff
7101c8ccc0  b.eq 0x7101c8cd08
7101c8ccc4  add w13,w9,#0x1
7101c8ccc8  add x14,x11,x9
7101c8cccc  cmp w13,#0x3f
7101c8ccd0  sturb w10,[x14, #-0x1]
7101c8ccd4  b.cs 0x7101c8ccfc
7101c8ccd8  ldrb w10,[x12, x9, LSL ]
7101c8ccdc  cbz w10,0x7101c8cd04
7101c8cce0  add x13,x12,x9
7101c8cce4  strb w10,[x11, x9, LSL ]
7101c8cce8  ldrb w10,[x13, #0x1]
7101c8ccec  add x9,x9,#0x2
7101c8ccf0  tst w10,#0xff
7101c8ccf4  b.ne 0x7101c8ccc4
7101c8ccf8  b 0x7101c8cd08
7101c8ccfc  add w9,w9,#0x1
7101c8cd00  b 0x7101c8cd08
7101c8cd04  add x9,x9,#0x1
7101c8cd08  add x11,sp,#0x458
7101c8cd0c  add x10,x11,#0x50
7101c8cd10  strb wzr,[x10, w9, UXTW ]
7101c8cd14  ldrb w10,[sp, #0x4a8]
7101c8cd18  str w9,[sp, #0x4a4]
7101c8cd1c  cbz w10,0x7101c8cd3c
7101c8cd20  add x9,x11,#0x51
7101c8cd24  mov w11,#0x89
7101c8cd28  mul w8,w8,w11
7101c8cd2c  and w10,w10,#0xff
7101c8cd30  eor w8,w8,w10
7101c8cd34  ldrb w10,[x9], #0x1
7101c8cd38  cbnz w10,0x7101c8cd28
7101c8cd3c  str w8,[sp, #0x4a0]
7101c8cd40  ldursb x8,[x29, #-0xd4]
7101c8cd44  cmp x8,#0x6
7101c8cd48  b.cs 0x7101c8cd68
7101c8cd4c  ldrb w1,[x22, x8, LSL ]
7101c8cd50  add x0,sp,#0x48
7101c8cd54  add x22,sp,#0x48
7101c8cd58  bl 0x7101c6ec50
7101c8cd5c  ldur x0,[x29, #-0xe0]
7101c8cd60  add x1,x22,#0x8
7101c8cd64  b 0x7101c8c7b8
7101c8cd68  bl 0x71039c2650
7101c8cd6c  bl 0x71039c1330
7101c8cd70  add x0,x19,#0x438
7101c8cd74  bl 0x71039c1330
7101c8cd78  add x0,x9,#0x180
7101c8cd7c  bl 0x71039c1330
