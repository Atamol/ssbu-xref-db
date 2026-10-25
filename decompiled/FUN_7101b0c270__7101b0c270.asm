// addr:      7101b0c270
// offset:    0x1b0c270
// name:      FUN_7101b0c270
// mangled:   
// size:      9952

7101b0c270  stp d11,d10,[sp, #-0x80]!
7101b0c274  stp d9,d8,[sp, #0x10]
7101b0c278  stp x28,x27,[sp, #0x20]
7101b0c27c  stp x26,x25,[sp, #0x30]
7101b0c280  stp x24,x23,[sp, #0x40]
7101b0c284  stp x22,x21,[sp, #0x50]
7101b0c288  stp x20,x19,[sp, #0x60]
7101b0c28c  stp x29,x30,[sp, #0x70]
7101b0c290  add x29,sp,#0x70
7101b0c294  sub sp,sp,#0x3a0
7101b0c298  adrp x8,0x71050aa000
7101b0c29c  add x8,x8,#0x370
7101b0c2a0  mov x19,x1
7101b0c2a4  stp x8,xzr,[x0]
7101b0c2a8  orr x8,xzr,#0x1ffffffff
7101b0c2ac  stp xzr,x8,[x0, #0x60]
7101b0c2b0  mov w8,#0x1
7101b0c2b4  mov x25,x0
7101b0c2b8  stp xzr,xzr,[x0, #0x10]
7101b0c2bc  mov x22,x2
7101b0c2c0  strb wzr,[x0, #0x58]
7101b0c2c4  str x1,[x0, #0x78]
7101b0c2c8  mov w1,#0x538
7101b0c2cc  strb w8,[x0, #0x70]
7101b0c2d0  stp xzr,xzr,[x0, #0x48]
7101b0c2d4  mov w0,#0x10
7101b0c2d8  bl 0x710392e290
7101b0c2dc  mov x21,x0
7101b0c2e0  cbnz x0,0x7101b0c32c
7101b0c2e4  adrp x8,0x7105332000
7101b0c2e8  ldr x0,[x8, #0xf00]
7101b0c2ec  cbz x0,0x7101b0c328
7101b0c2f0  mov w8,#0x538
7101b0c2f4  str wzr,[sp, #0x40]
7101b0c2f8  add x1,sp,#0x40
7101b0c2fc  str x8,[sp, #0x180]
7101b0c300  ldr x8,[x0]
7101b0c304  ldr x8,[x8, #0x30]
7101b0c308  add x2,sp,#0x180
7101b0c30c  blr x8
7101b0c310  tbz w0,#0x0,0x7101b0c328
7101b0c314  mov w1,#0x538
7101b0c318  mov w0,#0x10
7101b0c31c  bl 0x710392e290
7101b0c320  mov x21,x0
7101b0c324  cbnz x0,0x7101b0c32c
7101b0c328  mov x21,xzr
7101b0c32c  mov w8,#0x1000
7101b0c330  str w8,[x21, #0x8]
7101b0c334  mov x8,x21
7101b0c338  stp xzr,xzr,[x21, #0x18]
7101b0c33c  adrp x9,0x71050aa000
7101b0c340  add x9,x9,#0x2e8
7101b0c344  str xzr,[x21, #0x10]
7101b0c348  add x0,x21,#0x70
7101b0c34c  str xzr,[x8, #0x30]!
7101b0c350  str x8,[x21, #0x28]
7101b0c354  add x8,x21,#0x25c
7101b0c358  mov w2,#0x1ec
7101b0c35c  str x9,[x21]
7101b0c360  orr x9,xzr,#-0x100000000
7101b0c364  mov w1,wzr
7101b0c368  stp xzr,xzr,[x21, #0x38]
7101b0c36c  stp x21,xzr,[x21, #0x48]
7101b0c370  str x9,[x8]
7101b0c374  add x8,x21,#0x264
7101b0c378  str xzr,[x21, #0x68]
7101b0c37c  stp xzr,xzr,[x21, #0x58]
7101b0c380  str x9,[x8]
7101b0c384  strb wzr,[x21, #0x26c]
7101b0c388  bl 0x71039c02a0
7101b0c38c  str x19,[x21, #0x270]
7101b0c390  ldp x8,x9,[x22]
7101b0c394  ldr w10,[x22, #0x10]
7101b0c398  str x8,[x21, #0x278]
7101b0c39c  adrp x8,0x710523d000
7101b0c3a0  add x8,x8,#0xa48
7101b0c3a4  mov w0,#0x10
7101b0c3a8  mov w1,#0x10
7101b0c3ac  add x20,x21,#0x290
7101b0c3b0  add x23,x22,#0x18
7101b0c3b4  str w10,[x21, #0x288]
7101b0c3b8  str x9,[x21, #0x280]
7101b0c3bc  str x8,[x21, #0x290]
7101b0c3c0  bl 0x710392e290
7101b0c3c4  cbnz x0,0x7101b0c40c
7101b0c3c8  adrp x8,0x7105332000
7101b0c3cc  ldr x0,[x8, #0xf00]
7101b0c3d0  cbz x0,0x7101b0c408
7101b0c3d4  mov w8,#0x10
7101b0c3d8  str wzr,[sp, #0x40]
7101b0c3dc  add x1,sp,#0x40
7101b0c3e0  str x8,[sp, #0x180]
7101b0c3e4  ldr x8,[x0]
7101b0c3e8  ldr x8,[x8, #0x30]
7101b0c3ec  add x2,sp,#0x180
7101b0c3f0  blr x8
7101b0c3f4  tbz w0,#0x0,0x7101b0c408
7101b0c3f8  mov w0,#0x10
7101b0c3fc  mov w1,#0x10
7101b0c400  bl 0x710392e290
7101b0c404  cbnz x0,0x7101b0c40c
7101b0c408  mov x0,xzr
7101b0c40c  cmp x23,x20
7101b0c410  stp xzr,xzr,[x0]
7101b0c414  str x0,[x21, #0x298]
7101b0c418  b.eq 0x7101b0c480
7101b0c41c  ldr x8,[x22, #0x20]
7101b0c420  ldp x9,x8,[x8]
7101b0c424  cbz x8,0x7101b0c47c
7101b0c428  add x10,x8,#0x8
7101b0c42c  ldxr x11,[x10]
7101b0c430  add x11,x11,#0x1
7101b0c434  stxr w12,x11,[x10]
7101b0c438  cbnz w12,0x7101b0c42c
7101b0c43c  ldr x23,[x0, #0x8]
7101b0c440  stp x9,x8,[x0]
7101b0c444  cbz x23,0x7101b0c480
7101b0c448  add x8,x23,#0x8
7101b0c44c  ldaxr x9,[x8]
7101b0c450  sub x10,x9,#0x1
7101b0c454  stlxr w11,x10,[x8]
7101b0c458  cbnz w11,0x7101b0c44c
7101b0c45c  cbnz x9,0x7101b0c480
7101b0c460  ldr x8,[x23]
7101b0c464  ldr x8,[x8, #0x10]
7101b0c468  mov x0,x23
7101b0c46c  blr x8
7101b0c470  mov x0,x23
7101b0c474  bl 0x71039c2670
7101b0c478  b 0x7101b0c480
7101b0c47c  stp x9,x8,[x0]
7101b0c480  ldp x8,x10,[x22, #0x28]
7101b0c484  ldr x11,[x22, #0x38]
7101b0c488  str x11,[x21, #0x2b0]
7101b0c48c  str x10,[x21, #0x2a8]
7101b0c490  str x8,[x21, #0x2a0]
7101b0c494  ldp x8,x10,[x22, #0x40]
7101b0c498  mov x9,xzr
7101b0c49c  ldp x11,x12,[x22, #0x50]
7101b0c4a0  str x12,[x21, #0x2d0]
7101b0c4a4  str x11,[x21, #0x2c8]
7101b0c4a8  str x10,[x21, #0x2c0]
7101b0c4ac  str x8,[x21, #0x2b8]
7101b0c4b0  ldp x10,x11,[x22, #0x60]
7101b0c4b4  ldp x8,x12,[x22, #0x70]
7101b0c4b8  str x8,[x21, #0x2e8]
7101b0c4bc  add x8,x21,#0x278
7101b0c4c0  str x10,[x21, #0x2d8]
7101b0c4c4  add x10,x22,#0x88
7101b0c4c8  str x12,[x21, #0x2f0]
7101b0c4cc  str x11,[x21, #0x2e0]
7101b0c4d0  str wzr,[x21, #0x2f8]
7101b0c4d4  b 0x7101b0c4e0
7101b0c4d8  add x9,x9,#0x2
7101b0c4dc  strb w11,[x12, #0x301]
7101b0c4e0  add x11,x10,x9
7101b0c4e4  ldrb w13,[x11]
7101b0c4e8  cbz w13,0x7101b0c514
7101b0c4ec  add w14,w9,#0x1
7101b0c4f0  add x12,x21,x9
7101b0c4f4  cmp w14,#0x3f
7101b0c4f8  strb w13,[x12, #0x300]
7101b0c4fc  b.cs 0x7101b0c510
7101b0c500  ldrb w11,[x11, #0x1]
7101b0c504  cbnz w11,0x7101b0c4d8
7101b0c508  add x9,x9,#0x1
7101b0c50c  b 0x7101b0c514
7101b0c510  add w9,w9,#0x1
7101b0c514  add x10,x8,w9, UXTW 
7101b0c518  strb wzr,[x10, #0x88]
7101b0c51c  str w9,[x21, #0x2fc]
7101b0c520  ldrb w9,[x21, #0x300]
7101b0c524  mov w15,#0x9dc5
7101b0c528  movk w15,#0x811c, LSL #16
7101b0c52c  mov w11,w15
7101b0c530  cbz w9,0x7101b0c554
7101b0c534  add x10,x21,#0x301
7101b0c538  mov w12,#0x89
7101b0c53c  mov w11,w15
7101b0c540  mul w11,w11,w12
7101b0c544  and w9,w9,#0xff
7101b0c548  eor w11,w11,w9
7101b0c54c  ldrb w9,[x10], #0x1
7101b0c550  cbnz w9,0x7101b0c540
7101b0c554  mov x9,xzr
7101b0c558  add x10,x22,#0xd0
7101b0c55c  str w11,[x21, #0x2f8]
7101b0c560  str wzr,[x21, #0x340]
7101b0c564  b 0x7101b0c570
7101b0c568  add x9,x9,#0x2
7101b0c56c  strb w11,[x12, #0x349]
7101b0c570  add x11,x10,x9
7101b0c574  ldrb w13,[x11]
7101b0c578  cbz w13,0x7101b0c5a4
7101b0c57c  add w14,w9,#0x1
7101b0c580  add x12,x21,x9
7101b0c584  cmp w14,#0x3f
7101b0c588  strb w13,[x12, #0x348]
7101b0c58c  b.cs 0x7101b0c5a0
7101b0c590  ldrb w11,[x11, #0x1]
7101b0c594  cbnz w11,0x7101b0c568
7101b0c598  add x9,x9,#0x1
7101b0c59c  b 0x7101b0c5a4
7101b0c5a0  add w9,w9,#0x1
7101b0c5a4  add x8,x8,w9, UXTW 
7101b0c5a8  strb wzr,[x8, #0xd0]
7101b0c5ac  ldrb w8,[x21, #0x348]
7101b0c5b0  mov w10,w15
7101b0c5b4  str w9,[x21, #0x344]
7101b0c5b8  cbz w8,0x7101b0c5dc
7101b0c5bc  add x9,x21,#0x349
7101b0c5c0  mov w11,#0x89
7101b0c5c4  mov w10,w15
7101b0c5c8  mul w10,w10,w11
7101b0c5cc  and w8,w8,#0xff
7101b0c5d0  eor w10,w10,w8
7101b0c5d4  ldrb w8,[x9], #0x1
7101b0c5d8  cbnz w8,0x7101b0c5c8
7101b0c5dc  str w10,[x21, #0x340]
7101b0c5e0  ldr x8,[x22, #0x110]
7101b0c5e4  str x8,[x21, #0x388]
7101b0c5e8  ldp x8,x9,[x22, #0x118]
7101b0c5ec  ldr x10,[x22, #0x128]
7101b0c5f0  ldr w11,[x22, #0x130]
7101b0c5f4  str w11,[x21, #0x3a8]
7101b0c5f8  str x10,[x21, #0x3a0]
7101b0c5fc  str x9,[x21, #0x398]
7101b0c600  str x8,[x21, #0x390]
7101b0c604  str xzr,[x21, #0x3c0]
7101b0c608  str xzr,[x21, #0x3b8]
7101b0c60c  str xzr,[x21, #0x3b0]
7101b0c610  ldp x8,x9,[x22, #0x138]
7101b0c614  subs x23,x9,x8
7101b0c618  b.eq 0x7101b0c6b4
7101b0c61c  asr x20,x23,#0x5
7101b0c620  lsr x8,x20,#0x3b
7101b0c624  cbnz x8,0x7101b0e948
7101b0c628  mov w0,#0x10
7101b0c62c  mov x1,x23
7101b0c630  bl 0x710392e290
7101b0c634  mov x24,x0
7101b0c638  cbnz x0,0x7101b0c680
7101b0c63c  adrp x8,0x7105332000
7101b0c640  ldr x0,[x8, #0xf00]
7101b0c644  cbz x0,0x7101b0c67c
7101b0c648  str wzr,[sp, #0x40]
7101b0c64c  str x23,[sp, #0x180]
7101b0c650  ldr x8,[x0]
7101b0c654  ldr x8,[x8, #0x30]
7101b0c658  add x1,sp,#0x40
7101b0c65c  add x2,sp,#0x180
7101b0c660  blr x8
7101b0c664  tbz w0,#0x0,0x7101b0c67c
7101b0c668  mov w0,#0x10
7101b0c66c  mov x1,x23
7101b0c670  bl 0x710392e290
7101b0c674  mov x24,x0
7101b0c678  cbnz x0,0x7101b0c680
7101b0c67c  mov x24,xzr
7101b0c680  add x8,x24,x20, LSL #0x5
7101b0c684  str x24,[x21, #0x3b8]
7101b0c688  str x24,[x21, #0x3b0]
7101b0c68c  str x8,[x21, #0x3c0]
7101b0c690  ldp x1,x8,[x22, #0x138]
7101b0c694  sub x23,x8,x1
7101b0c698  cmp x23,#0x1
7101b0c69c  b.lt 0x7101b0c6b4
7101b0c6a0  mov x0,x24
7101b0c6a4  mov x2,x23
7101b0c6a8  bl 0x71039c00e0
7101b0c6ac  add x8,x24,x23
7101b0c6b0  str x8,[x21, #0x3b8]
7101b0c6b4  ldr x8,[x22, #0x150]
7101b0c6b8  add x0,x21,#0x3d0
7101b0c6bc  str x8,[x21, #0x3c8]
7101b0c6c0  bl 0x7103776290
7101b0c6c4  adrp x8,0x710523d000
7101b0c6c8  add x8,x8,#0x9e8
7101b0c6cc  mov w0,#0x10
7101b0c6d0  orr w1,wzr,#0x18
7101b0c6d4  str x8,[x21, #0x3e0]
7101b0c6d8  bl 0x710392e290
7101b0c6dc  cbnz x0,0x7101b0c724
7101b0c6e0  adrp x8,0x7105332000
7101b0c6e4  ldr x0,[x8, #0xf00]
7101b0c6e8  cbz x0,0x7101b0c720
7101b0c6ec  orr w8,wzr,#0x18
7101b0c6f0  str wzr,[sp, #0x40]
7101b0c6f4  add x1,sp,#0x40
7101b0c6f8  str x8,[sp, #0x180]
7101b0c6fc  ldr x8,[x0]
7101b0c700  ldr x8,[x8, #0x30]
7101b0c704  add x2,sp,#0x180
7101b0c708  blr x8
7101b0c70c  tbz w0,#0x0,0x7101b0c720
7101b0c710  mov w0,#0x10
7101b0c714  orr w1,wzr,#0x18
7101b0c718  bl 0x710392e290
7101b0c71c  cbnz x0,0x7101b0c724
7101b0c720  mov x0,xzr
7101b0c724  mov w20,#0x1
7101b0c728  adrp x8,0x71050aa000
7101b0c72c  add x8,x8,#0x330
7101b0c730  add x9,x21,#0x461
7101b0c734  stp xzr,xzr,[x0]
7101b0c738  strb w20,[x0, #0x10]
7101b0c73c  str x0,[x21, #0x3e8]
7101b0c740  add x0,x21,#0x470
7101b0c744  str xzr,[x21, #0x400]
7101b0c748  str xzr,[x21, #0x3f8]
7101b0c74c  str xzr,[x21, #0x3f0]
7101b0c750  str x8,[x21, #0x408]
7101b0c754  add x8,x21,#0x434
7101b0c758  str x19,[x21, #0x410]
7101b0c75c  str xzr,[x21, #0x488]
7101b0c760  str xzr,[x21, #0x480]
7101b0c764  str xzr,[x21, #0x478]
7101b0c768  str xzr,[x21, #0x470]
7101b0c76c  strh wzr,[x21, #0x430]
7101b0c770  str xzr,[x21, #0x428]
7101b0c774  str xzr,[x21, #0x420]
7101b0c778  str xzr,[x21, #0x418]
7101b0c77c  str xzr,[x9]
7101b0c780  add x9,x21,#0x45c
7101b0c784  str xzr,[x9]
7101b0c788  add x9,x21,#0x454
7101b0c78c  str xzr,[x9]
7101b0c790  add x9,x21,#0x44c
7101b0c794  str xzr,[x9]
7101b0c798  add x9,x21,#0x444
7101b0c79c  str xzr,[x9]
7101b0c7a0  add x9,x21,#0x43c
7101b0c7a4  str xzr,[x9]
7101b0c7a8  str xzr,[x8]
7101b0c7ac  bl 0x710339b260
7101b0c7b0  add x0,x21,#0x478
7101b0c7b4  bl 0x710339b260
7101b0c7b8  add x0,x21,#0x480
7101b0c7bc  bl 0x710339b260
7101b0c7c0  add x0,x21,#0x488
7101b0c7c4  bl 0x710339b260
7101b0c7c8  orr w8,wzr,#0xffff
7101b0c7cc  mov x9,#0x1
7101b0c7d0  strh w8,[x21, #0x490]
7101b0c7d4  add x8,x21,#0x494
7101b0c7d8  movk x9,#0x5a, LSL #32
7101b0c7dc  str x9,[x8]
7101b0c7e0  add x8,x21,#0x49c
7101b0c7e4  str xzr,[x8]
7101b0c7e8  mov x8,#0x650000000000
7101b0c7ec  movk x8,#0x87, LSL #48
7101b0c7f0  str x8,[x21, #0x4b8]
7101b0c7f4  adrp x8,0x7104f73000
7101b0c7f8  add x8,x8,#0xd30
7101b0c7fc  str x8,[x21, #0x4a8]
7101b0c800  mov x8,#-0x1
7101b0c804  str x8,[x21, #0x4c8]
7101b0c808  mov w8,#0xffffffff
7101b0c80c  str w8,[x21, #0x4e0]
7101b0c810  mov x8,#0x12c00000000
7101b0c814  add x0,x21,#0x510
7101b0c818  str xzr,[x21, #0x4b0]
7101b0c81c  strb wzr,[x21, #0x4c0]
7101b0c820  str xzr,[x21, #0x4d8]
7101b0c824  str xzr,[x21, #0x4d0]
7101b0c828  str xzr,[x21, #0x4f8]
7101b0c82c  str xzr,[x21, #0x4f0]
7101b0c830  str xzr,[x21, #0x4e8]
7101b0c834  str x8,[x21, #0x500]
7101b0c838  str xzr,[x21, #0x508]
7101b0c83c  bl 0x7103763c70
7101b0c840  mov w1,#0xb8
7101b0c844  mov w0,#0x10
7101b0c848  strb wzr,[x21, #0x520]
7101b0c84c  str wzr,[x21, #0x524]
7101b0c850  strb w20,[x21, #0x528]
7101b0c854  bl 0x710392e290
7101b0c858  mov x22,x0
7101b0c85c  cbnz x0,0x7101b0c8a8
7101b0c860  adrp x8,0x7105332000
7101b0c864  ldr x0,[x8, #0xf00]
7101b0c868  cbz x0,0x7101b0c8a4
7101b0c86c  mov w8,#0xb8
7101b0c870  str wzr,[sp, #0x40]
7101b0c874  add x1,sp,#0x40
7101b0c878  str x8,[sp, #0x180]
7101b0c87c  ldr x8,[x0]
7101b0c880  ldr x8,[x8, #0x30]
7101b0c884  add x2,sp,#0x180
7101b0c888  blr x8
7101b0c88c  tbz w0,#0x0,0x7101b0c8a4
7101b0c890  mov w1,#0xb8
7101b0c894  mov w0,#0x10
7101b0c898  bl 0x710392e290
7101b0c89c  mov x22,x0
7101b0c8a0  cbnz x0,0x7101b0c8a8
7101b0c8a4  mov x22,xzr
7101b0c8a8  adrp x8,0x710523d000
7101b0c8ac  add x8,x8,#0x9a8
7101b0c8b0  mov w0,#0x10
7101b0c8b4  mov w1,#0x20
7101b0c8b8  str x8,[x22]
7101b0c8bc  bl 0x710392e290
7101b0c8c0  cbnz x0,0x7101b0c908
7101b0c8c4  adrp x8,0x7105332000
7101b0c8c8  ldr x0,[x8, #0xf00]
7101b0c8cc  cbz x0,0x7101b0c904
7101b0c8d0  mov w8,#0x20
7101b0c8d4  str wzr,[sp, #0x40]
7101b0c8d8  add x1,sp,#0x40
7101b0c8dc  str x8,[sp, #0x180]
7101b0c8e0  ldr x8,[x0]
7101b0c8e4  ldr x8,[x8, #0x30]
7101b0c8e8  add x2,sp,#0x180
7101b0c8ec  blr x8
7101b0c8f0  tbz w0,#0x0,0x7101b0c904
7101b0c8f4  mov w0,#0x10
7101b0c8f8  mov w1,#0x20
7101b0c8fc  bl 0x710392e290
7101b0c900  cbnz x0,0x7101b0c908
7101b0c904  mov x0,xzr
7101b0c908  mov w8,#0x1
7101b0c90c  stp xzr,xzr,[x0, #0x10]
7101b0c910  stp xzr,xzr,[x0]
7101b0c914  mov w9,#0x51ea
7101b0c918  movk w9,#0x3ed8, LSL #16
7101b0c91c  mov x10,#0x11
7101b0c920  movk x10,#0x6, LSL #32
7101b0c924  str w8,[x22, #0xa4]
7101b0c928  mov w8,#0x100
7101b0c92c  mov x11,#0x2
7101b0c930  strh w8,[x22, #0xb0]
7101b0c934  orr w8,wzr,#0x3f800000
7101b0c938  movk x11,#0x64, LSL #32
7101b0c93c  strb wzr,[x22, #0x18]
7101b0c940  strh wzr,[x22, #0x90]
7101b0c944  str xzr,[x22, #0x58]
7101b0c948  stur xzr,[x22, #0x9c]
7101b0c94c  stur xzr,[x22, #0x94]
7101b0c950  str xzr,[x22, #0xa8]
7101b0c954  str w8,[x22, #0xb4]
7101b0c958  stp x0,xzr,[x22, #0x8]
7101b0c95c  stp xzr,xzr,[x22, #0x80]
7101b0c960  stp xzr,xzr,[x22, #0x70]
7101b0c964  stp xzr,xzr,[x22, #0x60]
7101b0c968  ldr x8,[x21, #0x518]
7101b0c96c  str x22,[x21, #0x530]
7101b0c970  str w9,[x8, #0x490]
7101b0c974  add x9,x8,#0x3fc
7101b0c978  strh wzr,[x8, #0x4a8]
7101b0c97c  str x10,[x9]
7101b0c980  add x9,x8,#0x404
7101b0c984  str x11,[x9]
7101b0c988  add x9,x8,#0x40c
7101b0c98c  str xzr,[x9]
7101b0c990  add x9,x8,#0x414
7101b0c994  str x10,[x9]
7101b0c998  add x9,x8,#0x41c
7101b0c99c  add x8,x8,#0x424
7101b0c9a0  adrp x10,0x7101b02000
7101b0c9a4  add x10,x10,#0x590
7101b0c9a8  str x11,[x9]
7101b0c9ac  orr w9,wzr,#0x60
7101b0c9b0  str xzr,[x8]
7101b0c9b4  ldr x8,[x21, #0x518]
7101b0c9b8  str w9,[x8, #0x18]
7101b0c9bc  adrp x8,0x7101b02000
7101b0c9c0  add x8,x8,#0x5a0
7101b0c9c4  adrp x9,0x7101b04000
7101b0c9c8  add x9,x9,#0x270
7101b0c9cc  str xzr,[x21, #0x208]
7101b0c9d0  stp x8,xzr,[x21, #0x90]
7101b0c9d4  adrp x8,0x7101b03000
7101b0c9d8  add x8,x8,#0xb50
7101b0c9dc  stp x8,xzr,[x21, #0xa0]
7101b0c9e0  adrp x8,0x7101b04000
7101b0c9e4  add x8,x8,#0x8e0
7101b0c9e8  stp x8,xzr,[x21, #0x80]
7101b0c9ec  adrp x8,0x7101b04000
7101b0c9f0  add x8,x8,#0x970
7101b0c9f4  stp x8,xzr,[x21, #0x100]
7101b0c9f8  adrp x8,0x7101b05000
7101b0c9fc  add x8,x8,#0x3b0
7101b0ca00  stp x8,xzr,[x21, #0x120]
7101b0ca04  adrp x8,0x7101b05000
7101b0ca08  add x8,x8,#0x440
7101b0ca0c  stp x8,xzr,[x21, #0x130]
7101b0ca10  adrp x8,0x7101b06000
7101b0ca14  add x8,x8,#0x400
7101b0ca18  stp x8,xzr,[x21, #0x150]
7101b0ca1c  adrp x8,0x7101b06000
7101b0ca20  add x8,x8,#0x640
7101b0ca24  stp x8,xzr,[x21, #0x160]
7101b0ca28  adrp x8,0x7101b07000
7101b0ca2c  add x8,x8,#0x190
7101b0ca30  stp x8,xzr,[x21, #0x180]
7101b0ca34  adrp x8,0x7101b07000
7101b0ca38  add x8,x8,#0x3d0
7101b0ca3c  stp x8,xzr,[x21, #0x190]
7101b0ca40  adrp x8,0x7101b08000
7101b0ca44  add x8,x8,#0xc0
7101b0ca48  stp x8,xzr,[x21, #0x1b0]
7101b0ca4c  adrp x8,0x7101b08000
7101b0ca50  add x8,x8,#0x490
7101b0ca54  stp x8,xzr,[x21, #0x1c0]
7101b0ca58  adrp x8,0x7101b08000
7101b0ca5c  add x8,x8,#0x680
7101b0ca60  stp x9,xzr,[x21, #0xb0]
7101b0ca64  adrp x9,0x7101b05000
7101b0ca68  add x9,x9,#0x1b0
7101b0ca6c  stp x8,xzr,[x21, #0x1e0]
7101b0ca70  adrp x8,0x7101b08000
7101b0ca74  add x8,x8,#0xa60
7101b0ca78  stp x9,xzr,[x21, #0x110]
7101b0ca7c  adrp x9,0x7101b05000
7101b0ca80  add x9,x9,#0xfb0
7101b0ca84  stp x8,xzr,[x21, #0x1f0]
7101b0ca88  adrp x8,0x7101b08000
7101b0ca8c  add x8,x8,#0xd70
7101b0ca90  stp x9,xzr,[x21, #0x140]
7101b0ca94  adrp x9,0x7101b06000
7101b0ca98  add x9,x9,#0xf40
7101b0ca9c  stp x8,xzr,[x21, #0xc0]
7101b0caa0  adrp x8,0x7101b09000
7101b0caa4  add x8,x8,#0x4f0
7101b0caa8  stp x9,xzr,[x21, #0x170]
7101b0caac  adrp x9,0x7101b07000
7101b0cab0  add x9,x9,#0x490
7101b0cab4  stp x8,xzr,[x21, #0xd0]
7101b0cab8  ldrsw x8,[x21, #0x25c]
7101b0cabc  cmp w8,#0x13
7101b0cac0  stp x9,xzr,[x21, #0x1a0]
7101b0cac4  adrp x9,0x7101b08000
7101b0cac8  add x9,x9,#0x610
7101b0cacc  stp x9,xzr,[x21, #0x1d0]
7101b0cad0  adrp x9,0x7101b08000
7101b0cad4  add x9,x9,#0xcd0
7101b0cad8  str x9,[x21, #0x200]
7101b0cadc  adrp x9,0x7101b09000
7101b0cae0  add x9,x9,#0x900
7101b0cae4  stp x9,xzr,[x21, #0xe0]
7101b0cae8  adrp x9,0x7101b09000
7101b0caec  add x9,x9,#0xe10
7101b0caf0  stp x10,xzr,[x21, #0x70]
7101b0caf4  stp x9,xzr,[x21, #0xf0]
7101b0caf8  b.cs 0x7101b0e944
7101b0cafc  add x8,x21,x8, LSL #0x2
7101b0cb00  str wzr,[x8, #0x210]
7101b0cb04  str x21,[x25, #0x80]
7101b0cb08  adrp x8,0x710532f000
7101b0cb0c  ldr x9,[x8, #0x7e8]
7101b0cb10  ldr x8,[x9, #0x8]
7101b0cb14  ldrb w10,[x8, #0x162]
7101b0cb18  cbz w10,0x7101b0cdb4
7101b0cb1c  ldrb w9,[x8, #0x161]
7101b0cb20  cbz w9,0x7101b0cdc8
7101b0cb24  mov w9,#0x1
7101b0cb28  strb w9,[x8, #0x160]
7101b0cb2c  ldr x0,[x25, #0x80]
7101b0cb30  mov x3,#0x1e2
7101b0cb34  movk x3,#0x3561, LSL #16
7101b0cb38  adrp x2,0x71050aa000
7101b0cb3c  add x2,x2,#0x398
7101b0cb40  movk x3,#0x23, LSL #32
7101b0cb44  mov w4,#0x1
7101b0cb48  mov x1,x19
7101b0cb4c  bl 0x71032cb040
7101b0cb50  ldr x19,[x25, #0x80]
7101b0cb54  mov x24,x19
7101b0cb58  ldr x8,[x24, #0x10]!
7101b0cb5c  ldr x9,[x19, #0x18]
7101b0cb60  cmp x9,x8
7101b0cb64  b.eq 0x7101b0e934
7101b0cb68  ldr x8,[x8]
7101b0cb6c  ldr x8,[x8]
7101b0cb70  ldr x8,[x8]
7101b0cb74  ldr x8,[x8]
7101b0cb78  ldr x8,[x8, #0x600]
7101b0cb7c  mov w9,#0x20
7101b0cb80  str w9,[x8, #0x10]
7101b0cb84  ldp x8,x9,[x19, #0x10]
7101b0cb88  cmp x9,x8
7101b0cb8c  adrp x21,0x710523d000
7101b0cb90  add x21,x21,#0x9e8
7101b0cb94  b.eq 0x7101b0e934
7101b0cb98  ldr x8,[x8]
7101b0cb9c  ldr x8,[x8]
7101b0cba0  ldr x8,[x8]
7101b0cba4  add x9,x8,#0x8
7101b0cba8  add x10,x19,#0x3d0
7101b0cbac  str x10,[sp, #0x20]
7101b0cbb0  cmp x10,x9
7101b0cbb4  b.eq 0x7101b0cc28
7101b0cbb8  ldr x9,[x8, #0x10]
7101b0cbbc  ldr x9,[x9]
7101b0cbc0  ldr x10,[x19, #0x3d8]
7101b0cbc4  str x9,[x10]
7101b0cbc8  ldr x9,[x8, #0x10]
7101b0cbcc  ldr x9,[x9, #0x8]
7101b0cbd0  ldr x10,[x19, #0x3d8]
7101b0cbd4  str x9,[x10, #0x8]
7101b0cbd8  ldr x9,[x8, #0x10]
7101b0cbdc  ldr x8,[x19, #0x3d8]
7101b0cbe0  cmp x8,x9
7101b0cbe4  b.eq 0x7101b0cc28
7101b0cbe8  ldr x10,[x9, #0x18]
7101b0cbec  ldr x10,[x10]
7101b0cbf0  ldr x11,[x8, #0x18]
7101b0cbf4  str x10,[x11]
7101b0cbf8  ldr x10,[x9, #0x18]
7101b0cbfc  ldr x10,[x10, #0x8]
7101b0cc00  ldr x11,[x8, #0x18]
7101b0cc04  str x10,[x11, #0x8]
7101b0cc08  ldr x10,[x9, #0x18]
7101b0cc0c  ldr x10,[x10, #0x10]
7101b0cc10  ldr x11,[x8, #0x18]
7101b0cc14  str x10,[x11, #0x10]
7101b0cc18  ldr x9,[x9, #0x18]
7101b0cc1c  ldr x9,[x9, #0x18]
7101b0cc20  ldr x8,[x8, #0x18]
7101b0cc24  str x9,[x8, #0x18]
7101b0cc28  ldr x0,[sp, #0x20]
7101b0cc2c  adrp x1,0x710433a000
7101b0cc30  add x1,x1,#0x532
7101b0cc34  add x8,sp,#0x180
7101b0cc38  add x20,sp,#0x180
7101b0cc3c  bl 0x71037780e0
7101b0cc40  add x8,x19,#0x3e0
7101b0cc44  cmp x8,x20
7101b0cc48  b.eq 0x7101b0cc64
7101b0cc4c  ldr x8,[sp, #0x188]
7101b0cc50  str xzr,[sp, #0x188]
7101b0cc54  ldr x0,[x19, #0x3e8]
7101b0cc58  str x8,[x19, #0x3e8]
7101b0cc5c  cbz x0,0x7101b0cc64
7101b0cc60  bl 0x710392eb40
7101b0cc64  ldr x0,[sp, #0x188]
7101b0cc68  stp x21,xzr,[sp, #0x180]
7101b0cc6c  cbz x0,0x7101b0cc74
7101b0cc70  bl 0x710392eb40
7101b0cc74  ldr x8,[x19, #0x3e8]
7101b0cc78  ldr x21,[x8, #0x8]
7101b0cc7c  cbz x21,0x7101b0cd60
7101b0cc80  ldrb w9,[x8, #0x10]
7101b0cc84  cbz w9,0x7101b0cd50
7101b0cc88  ldr x8,[x8]
7101b0cc8c  ldr x22,[x8, #0x80]
7101b0cc90  add x20,x8,#0x88
7101b0cc94  cmp x22,x20
7101b0cc98  b.eq 0x7101b0cd50
7101b0cc9c  ldr x0,[x22, #0x68]
7101b0cca0  ldr x8,[x0]
7101b0cca4  ldr x8,[x8, #0x148]
7101b0cca8  blr x8
7101b0ccac  tbz w0,#0x0,0x7101b0ccec
7101b0ccb0  ldr x8,[x21]
7101b0ccb4  ldr x1,[x22, #0x68]
7101b0ccb8  mov x0,x21
7101b0ccbc  ldr x8,[x8, #0x120]
7101b0ccc0  blr x8
7101b0ccc4  tbz w0,#0x0,0x7101b0ccec
7101b0ccc8  ldr x0,[x22, #0x68]
7101b0cccc  ldr x8,[x0]
7101b0ccd0  ldr x8,[x8, #0x178]
7101b0ccd4  blr x8
7101b0ccd8  ldr x0,[x22, #0x68]
7101b0ccdc  ldr x8,[x0]
7101b0cce0  ldr x8,[x8, #0x140]
7101b0cce4  mov w1,wzr
7101b0cce8  blr x8
7101b0ccec  ldr x8,[x22, #0x8]
7101b0ccf0  cbz x8,0x7101b0cd04
7101b0ccf4  mov x22,x8
7101b0ccf8  ldr x8,[x8]
7101b0ccfc  cbnz x8,0x7101b0ccf4
7101b0cd00  b 0x7101b0cd30
7101b0cd04  mov x8,x22
7101b0cd08  ldr x9,[x8, #0x10]!
7101b0cd0c  ldr x10,[x9]
7101b0cd10  cmp x10,x22
7101b0cd14  b.eq 0x7101b0cd3c
7101b0cd18  ldr x9,[x8]
7101b0cd1c  mov x8,x9
7101b0cd20  ldr x22,[x8, #0x10]!
7101b0cd24  ldr x10,[x22]
7101b0cd28  cmp x10,x9
7101b0cd2c  b.ne 0x7101b0cd18
7101b0cd30  cmp x22,x20
7101b0cd34  b.ne 0x7101b0cc9c
7101b0cd38  b 0x7101b0cd48
7101b0cd3c  mov x22,x9
7101b0cd40  cmp x22,x20
7101b0cd44  b.ne 0x7101b0cc9c
7101b0cd48  ldr x8,[x19, #0x3e8]
7101b0cd4c  ldr x21,[x8, #0x8]
7101b0cd50  ldr x8,[x21]
7101b0cd54  ldr x8,[x8, #0x188]
7101b0cd58  mov x0,x21
7101b0cd5c  blr x8
7101b0cd60  ldr x8,[x19, #0x3d8]
7101b0cd64  ldr x8,[x8, #0x8]
7101b0cd68  cbz x8,0x7101b0cd80
7101b0cd6c  ldr x8,[x8, #0x18]
7101b0cd70  cbz x8,0x7101b0cd80
7101b0cd74  ldrb w9,[x8, #0x58]
7101b0cd78  and w9,w9,#0xfe
7101b0cd7c  strb w9,[x8, #0x58]
7101b0cd80  mov w8,#0x1
7101b0cd84  strb w8,[x19, #0x528]
7101b0cd88  ldr w8,[x19, #0x278]
7101b0cd8c  cmp w8,#0x2
7101b0cd90  b.eq 0x7101b0ce20
7101b0cd94  cmp w8,#0x3
7101b0cd98  b.eq 0x7101b0ce04
7101b0cd9c  cmp w8,#0x4
7101b0cda0  b.ne 0x7101b0ce30
7101b0cda4  ldr x0,[x19, #0x3d8]
7101b0cda8  adrp x1,0x710439c000
7101b0cdac  add x1,x1,#0xfb3
7101b0cdb0  b 0x7101b0ce10
7101b0cdb4  mov w10,#0x1
7101b0cdb8  strb w10,[x8, #0x162]
7101b0cdbc  ldr x8,[x9, #0x8]
7101b0cdc0  ldrb w9,[x8, #0x161]
7101b0cdc4  cbnz w9,0x7101b0cb24
7101b0cdc8  mov x9,#0x1
7101b0cdcc  movk x9,#0x6, LSL #32
7101b0cdd0  str wzr,[x8, #0xe0]
7101b0cdd4  stp xzr,xzr,[x8, #0x8]
7101b0cdd8  strb wzr,[x8, #0xf4]
7101b0cddc  str x9,[x8, #0x98]
7101b0cde0  orr x9,xzr,#-0x100000000
7101b0cde4  stur x9,[x8, #0xec]
7101b0cde8  orr x9,xzr,#-0xffffffff
7101b0cdec  stur x9,[x8, #0xe4]
7101b0cdf0  stp xzr,xzr,[x8, #0xd0]
7101b0cdf4  stp xzr,xzr,[x8, #0xc0]
7101b0cdf8  stp xzr,xzr,[x8, #0xb0]
7101b0cdfc  stp xzr,xzr,[x8, #0xa0]
7101b0ce00  b 0x7101b0cb24
7101b0ce04  ldr x0,[x19, #0x3d8]
7101b0ce08  adrp x1,0x710425e000
7101b0ce0c  add x1,x1,#0xe92
7101b0ce10  fmov s0,0x3f800000
7101b0ce14  bl 0x7103778300
7101b0ce18  orr w8,wzr,#0x3
7101b0ce1c  b 0x7101b0ce48
7101b0ce20  ldr x0,[x19, #0x3d8]
7101b0ce24  adrp x1,0x7104400000
7101b0ce28  add x1,x1,#0xfd4
7101b0ce2c  b 0x7101b0ce3c
7101b0ce30  ldr x0,[x19, #0x3d8]
7101b0ce34  adrp x1,0x710426f000
7101b0ce38  add x1,x1,#0xb6a
7101b0ce3c  fmov s0,0x3f800000
7101b0ce40  bl 0x7103778300
7101b0ce44  mov w8,#0x2
7101b0ce48  str w8,[x19, #0x494]
7101b0ce4c  ldr w8,[x19, #0x2fc]
7101b0ce50  cbz w8,0x7101b0cec8
7101b0ce54  ldr x0,[sp, #0x20]
7101b0ce58  adrp x1,0x71043cd000
7101b0ce5c  add x1,x1,#0xab4
7101b0ce60  add x8,sp,#0x180
7101b0ce64  bl 0x7103776910
7101b0ce68  add x21,x19,#0x300
7101b0ce6c  add x0,sp,#0x180
7101b0ce70  mov x1,x21
7101b0ce74  bl 0x710377a120
7101b0ce78  ldr x0,[sp, #0x188]
7101b0ce7c  adrp x8,0x710523d000
7101b0ce80  add x8,x8,#0x9a8
7101b0ce84  stp x8,xzr,[sp, #0x180]
7101b0ce88  cbz x0,0x7101b0ce90
7101b0ce8c  bl 0x710392eb40
7101b0ce90  ldr x0,[sp, #0x20]
7101b0ce94  adrp x1,0x710439c000
7101b0ce98  add x1,x1,#0xfbf
7101b0ce9c  add x8,sp,#0x180
7101b0cea0  bl 0x7103776910
7101b0cea4  add x0,sp,#0x180
7101b0cea8  mov x1,x21
7101b0ceac  bl 0x710377a120
7101b0ceb0  ldr x0,[sp, #0x188]
7101b0ceb4  adrp x8,0x710523d000
7101b0ceb8  add x8,x8,#0x9a8
7101b0cebc  stp x8,xzr,[sp, #0x180]
7101b0cec0  cbz x0,0x7101b0cec8
7101b0cec4  bl 0x710392eb40
7101b0cec8  ldr w8,[x19, #0x344]
7101b0cecc  cbz w8,0x7101b0cf08
7101b0ced0  ldr x0,[sp, #0x20]
7101b0ced4  adrp x1,0x7104281000
7101b0ced8  add x1,x1,#0x234
7101b0cedc  add x8,sp,#0x180
7101b0cee0  bl 0x7103776910
7101b0cee4  add x1,x19,#0x348
7101b0cee8  add x0,sp,#0x180
7101b0ceec  bl 0x710377a120
7101b0cef0  ldr x0,[sp, #0x188]
7101b0cef4  adrp x8,0x710523d000
7101b0cef8  add x8,x8,#0x9a8
7101b0cefc  stp x8,xzr,[sp, #0x180]
7101b0cf00  cbz x0,0x7101b0cf08
7101b0cf04  bl 0x710392eb40
7101b0cf08  ldr w8,[x19, #0x278]
7101b0cf0c  adrp x1,0x7104339000
7101b0cf10  add x1,x1,#0xcf9
7101b0cf14  cmp w8,#0x4
7101b0cf18  str wzr,[x19, #0x500]
7101b0cf1c  b.ne 0x7101b0cf38
7101b0cf20  ldr x0,[sp, #0x20]
7101b0cf24  add x8,sp,#0x180
7101b0cf28  bl 0x7103776910
7101b0cf2c  adrp x1,0x710426f000
7101b0cf30  add x1,x1,#0xb7d
7101b0cf34  b 0x7101b0cf4c
7101b0cf38  ldr x0,[sp, #0x20]
7101b0cf3c  add x8,sp,#0x180
7101b0cf40  bl 0x7103776910
7101b0cf44  adrp x1,0x7104400000
7101b0cf48  add x1,x1,#0xfe9
7101b0cf4c  add x0,sp,#0x180
7101b0cf50  bl 0x710377a120
7101b0cf54  ldr x0,[sp, #0x188]
7101b0cf58  adrp x8,0x710523d000
7101b0cf5c  add x8,x8,#0x9a8
7101b0cf60  stp x8,xzr,[sp, #0x180]
7101b0cf64  cbz x0,0x7101b0cf6c
7101b0cf68  bl 0x710392eb40
7101b0cf6c  ldr x0,[sp, #0x20]
7101b0cf70  adrp x1,0x71042b2000
7101b0cf74  add x1,x1,#0x92e
7101b0cf78  add x8,sp,#0x180
7101b0cf7c  bl 0x7103776910
7101b0cf80  ldr w3,[x19, #0x500]
7101b0cf84  adrp x1,0x71043ce000
7101b0cf88  add x1,x1,#0xfbd
7101b0cf8c  add x0,sp,#0x180
7101b0cf90  mov w2,#0x1
7101b0cf94  bl 0x710377a280
7101b0cf98  ldr x0,[sp, #0x188]
7101b0cf9c  adrp x8,0x710523d000
7101b0cfa0  add x8,x8,#0x9a8
7101b0cfa4  stp x8,xzr,[sp, #0x180]
7101b0cfa8  cbz x0,0x7101b0cfb0
7101b0cfac  bl 0x710392eb40
7101b0cfb0  add x22,x19,#0x408
7101b0cfb4  add x1,x19,#0x3b0
7101b0cfb8  mov x0,x22
7101b0cfbc  bl 0x7101aff8b0
7101b0cfc0  ldp x8,x9,[x19, #0x10]
7101b0cfc4  cmp x9,x8
7101b0cfc8  b.eq 0x7101b0e934
7101b0cfcc  ldr x8,[x8]
7101b0cfd0  ldr x8,[x8]
7101b0cfd4  ldr x8,[x8]
7101b0cfd8  ldr x8,[x8]
7101b0cfdc  ldr x8,[x8, #0x600]
7101b0cfe0  mov w9,#0x20
7101b0cfe4  movk w9,#0x4, LSL #16
7101b0cfe8  str w9,[x8, #0x18]
7101b0cfec  ldp x8,x9,[x19, #0x10]
7101b0cff0  cmp x9,x8
7101b0cff4  b.eq 0x7101b0e934
7101b0cff8  ldr x8,[x8]
7101b0cffc  ldr x8,[x8]
7101b0d000  ldr x8,[x8]
7101b0d004  ldr x8,[x8]
7101b0d008  ldr x8,[x8, #0x600]
7101b0d00c  mov w9,#0x10
7101b0d010  str w9,[x8, #0x1c]
7101b0d014  ldp x8,x9,[x19, #0x10]
7101b0d018  cmp x9,x8
7101b0d01c  b.eq 0x7101b0e934
7101b0d020  ldr x8,[x8]
7101b0d024  ldr x8,[x8]
7101b0d028  ldr x8,[x8]
7101b0d02c  ldr x8,[x8]
7101b0d030  ldr x8,[x8, #0x600]
7101b0d034  ldr x20,[sp, #0x20]
7101b0d038  mov w9,#0x80
7101b0d03c  str w9,[x8, #0x20]
7101b0d040  mov w8,#0x101
7101b0d044  strh w8,[sp, #0x188]
7101b0d048  add x8,sp,#0x8b
7101b0d04c  add x21,x19,#0x3f0
7101b0d050  str xzr,[sp, #0x180]
7101b0d054  stur wzr,[x8, #0xff]
7101b0d058  mov w8,#0x1
7101b0d05c  mov x9,#0x41f0000000000000
7101b0d060  adrp x2,0x7104401000
7101b0d064  add x2,x2,#0xbc0
7101b0d068  add x3,sp,#0x180
7101b0d06c  mov x0,x21
7101b0d070  mov x1,x20
7101b0d074  strh wzr,[sp, #0x18e]
7101b0d078  str wzr,[sp, #0x1a0]
7101b0d07c  str xzr,[sp, #0x200]
7101b0d080  str xzr,[sp, #0x230]
7101b0d084  str xzr,[sp, #0x260]
7101b0d088  str xzr,[sp, #0x290]
7101b0d08c  str wzr,[sp, #0x2a0]
7101b0d090  str w8,[sp, #0x190]
7101b0d094  strh w8,[sp, #0x194]
7101b0d098  strb w8,[sp, #0x196]
7101b0d09c  str x9,[sp, #0x198]
7101b0d0a0  str xzr,[sp, #0x1d0]
7101b0d0a4  strb w8,[sp, #0x18a]
7101b0d0a8  bl 0x7103770b30
7101b0d0ac  adrp x2,0x710432a000
7101b0d0b0  add x2,x2,#0x895
7101b0d0b4  mov x0,x21
7101b0d0b8  mov w1,wzr
7101b0d0bc  bl 0x71037717d0
7101b0d0c0  ldr x0,[x19, #0x3f0]
7101b0d0c4  orr w2,wzr,#0x6
7101b0d0c8  mov w1,wzr
7101b0d0cc  mov w3,wzr
7101b0d0d0  bl 0x7103771930
7101b0d0d4  ldr x0,[x19, #0x3f0]
7101b0d0d8  ldr x8,[x0]
7101b0d0dc  ldr x8,[x8, #0x70]
7101b0d0e0  mov w1,wzr
7101b0d0e4  blr x8
7101b0d0e8  add x21,x19,#0x3f8
7101b0d0ec  adrp x2,0x710437c000
7101b0d0f0  add x2,x2,#0xb65
7101b0d0f4  add x3,sp,#0x180
7101b0d0f8  mov x0,x21
7101b0d0fc  mov x1,x20
7101b0d100  bl 0x7103770b30
7101b0d104  adrp x2,0x7104454000
7101b0d108  add x2,x2,#0x5fa
7101b0d10c  mov x0,x21
7101b0d110  mov w1,wzr
7101b0d114  bl 0x71037717d0
7101b0d118  ldr x0,[x19, #0x3f8]
7101b0d11c  orr w2,wzr,#0x7
7101b0d120  mov w1,wzr
7101b0d124  mov w3,wzr
7101b0d128  bl 0x7103771930
7101b0d12c  adrp x2,0x71042b3000
7101b0d130  add x2,x2,#0xf1d
7101b0d134  mov w1,#0x1
7101b0d138  mov x0,x21
7101b0d13c  bl 0x71037717d0
7101b0d140  ldr x0,[x19, #0x3f8]
7101b0d144  mov w1,#0x1
7101b0d148  mov w2,#0x8
7101b0d14c  mov w3,wzr
7101b0d150  bl 0x7103771930
7101b0d154  ldr x0,[x19, #0x3f8]
7101b0d158  ldr x8,[x0]
7101b0d15c  ldr x8,[x8, #0x70]
7101b0d160  mov w1,wzr
7101b0d164  blr x8
7101b0d168  ldr x1,[x19, #0x3f8]
7101b0d16c  add x0,sp,#0x170
7101b0d170  mov w2,wzr
7101b0d174  bl 0x7103771d60
7101b0d178  ldr x20,[sp, #0x178]
7101b0d17c  ldr x23,[x20]
7101b0d180  cbz x23,0x7101b0d1c4
7101b0d184  ldr x8,[x23]
7101b0d188  ldrb w1,[x19, #0x430]
7101b0d18c  mov x0,x23
7101b0d190  ldr x8,[x8, #0x208]
7101b0d194  blr x8
7101b0d198  ldr x8,[x23]
7101b0d19c  ldr x8,[x8, #0x200]
7101b0d1a0  mov x0,x23
7101b0d1a4  blr x8
7101b0d1a8  tbz w0,#0x0,0x7101b0d1cc
7101b0d1ac  ldr x8,[x23]
7101b0d1b0  ldr x8,[x8, #0x210]
7101b0d1b4  mov x0,x23
7101b0d1b8  blr x8
7101b0d1bc  eor w8,w0,#0x1
7101b0d1c0  b 0x7101b0d1d0
7101b0d1c4  mov x1,xzr
7101b0d1c8  b 0x7101b0d1ec
7101b0d1cc  mov w8,#0x1
7101b0d1d0  ldr x9,[x23]
7101b0d1d4  ldr x9,[x9, #0x388]
7101b0d1d8  and w1,w8,#0x1
7101b0d1dc  mov x0,x23
7101b0d1e0  mov w2,wzr
7101b0d1e4  blr x9
7101b0d1e8  ldr x1,[x20]
7101b0d1ec  add x0,sp,#0x40
7101b0d1f0  bl 0x710377ad90
7101b0d1f4  ldr x0,[sp, #0x48]
7101b0d1f8  ldr x8,[x0]
7101b0d1fc  cbz x8,0x7101b0d214
7101b0d200  ldrb w10,[x8, #0x58]
7101b0d204  ldrb w9,[x19, #0x430]
7101b0d208  and w10,w10,#0xfe
7101b0d20c  orr w9,w10,w9
7101b0d210  strb w9,[x8, #0x58]
7101b0d214  adrp x8,0x710523d000
7101b0d218  add x8,x8,#0x9a8
7101b0d21c  stp x8,xzr,[sp, #0x40]
7101b0d220  cbz x0,0x7101b0d228
7101b0d224  bl 0x710392eb40
7101b0d228  mov w0,wzr
7101b0d22c  bl 0x710175bf90
7101b0d230  mov w23,wzr
7101b0d234  tbz w0,#0x0,0x7101b0d244
7101b0d238  ldrb w8,[x19, #0x388]
7101b0d23c  cmp w8,#0x0
7101b0d240  cset w23,ne
7101b0d244  ldr x1,[x21]
7101b0d248  add x0,sp,#0x160
7101b0d24c  mov w2,#0x1
7101b0d250  bl 0x7103771d60
7101b0d254  ldr x20,[sp, #0x168]
7101b0d258  ldr x21,[x20]
7101b0d25c  cbz x21,0x7101b0d2a0
7101b0d260  ldr x8,[x21]
7101b0d264  ldr x8,[x8, #0x208]
7101b0d268  mov x0,x21
7101b0d26c  mov w1,w23
7101b0d270  blr x8
7101b0d274  ldr x8,[x21]
7101b0d278  ldr x8,[x8, #0x200]
7101b0d27c  mov x0,x21
7101b0d280  blr x8
7101b0d284  tbz w0,#0x0,0x7101b0d2a8
7101b0d288  ldr x8,[x21]
7101b0d28c  ldr x8,[x8, #0x210]
7101b0d290  mov x0,x21
7101b0d294  blr x8
7101b0d298  eor w8,w0,#0x1
7101b0d29c  b 0x7101b0d2ac
7101b0d2a0  mov x1,xzr
7101b0d2a4  b 0x7101b0d2c8
7101b0d2a8  mov w8,#0x1
7101b0d2ac  ldr x9,[x21]
7101b0d2b0  ldr x9,[x9, #0x388]
7101b0d2b4  and w1,w8,#0x1
7101b0d2b8  mov x0,x21
7101b0d2bc  mov w2,wzr
7101b0d2c0  blr x9
7101b0d2c4  ldr x1,[x20]
7101b0d2c8  add x0,sp,#0x40
7101b0d2cc  bl 0x710377ad90
7101b0d2d0  ldr x0,[sp, #0x48]
7101b0d2d4  ldr x8,[x0]
7101b0d2d8  cbz x8,0x7101b0d2ec
7101b0d2dc  ldrb w9,[x8, #0x58]
7101b0d2e0  and w9,w9,#0xfe
7101b0d2e4  orr w9,w9,w23
7101b0d2e8  strb w9,[x8, #0x58]
7101b0d2ec  adrp x8,0x710523d000
7101b0d2f0  add x8,x8,#0x9a8
7101b0d2f4  stp x8,xzr,[sp, #0x40]
7101b0d2f8  cbz x0,0x7101b0d300
7101b0d2fc  bl 0x710392eb40
7101b0d300  mov x8,#0x41800000
7101b0d304  mov x9,#0x3f800000
7101b0d308  movk x9,#0x101, LSL #32
7101b0d30c  movk x9,#0x1, LSL #48
7101b0d310  movk x8,#0x4248, LSL #48
7101b0d314  strb wzr,[sp, #0x58]
7101b0d318  stp x8,x9,[sp, #0x48]
7101b0d31c  str xzr,[sp, #0x90]
7101b0d320  str xzr,[sp, #0xc0]
7101b0d324  ldr x1,[sp, #0x20]
7101b0d328  add x0,x19,#0x400
7101b0d32c  str xzr,[sp, #0xf0]
7101b0d330  adrp x2,0x710424f000
7101b0d334  add x2,x2,#0xc05
7101b0d338  str xzr,[sp, #0x120]
7101b0d33c  add x3,sp,#0x40
7101b0d340  mov x4,x22
7101b0d344  str xzr,[sp, #0x150]
7101b0d348  strh wzr,[sp, #0x60]
7101b0d34c  str wzr,[sp, #0x5c]
7101b0d350  ldr x8,[x19, #0x420]
7101b0d354  ldr x9,[x19, #0x418]
7101b0d358  sub x8,x8,x9
7101b0d35c  lsr x8,x8,#0x3
7101b0d360  stp wzr,w8,[sp, #0x40]
7101b0d364  mov w8,#0x1
7101b0d368  sturh w8,[sp, #0x59]
7101b0d36c  strb w8,[sp, #0x5b]
7101b0d370  strb w8,[sp, #0x60]
7101b0d374  str x0,[sp, #0x18]
7101b0d378  bl 0x7103781a20
7101b0d37c  ldr x0,[x19, #0x400]
7101b0d380  ldr x8,[x0]
7101b0d384  ldr x8,[x8, #0x70]
7101b0d388  mov w1,#0x1
7101b0d38c  blr x8
7101b0d390  ldr x21,[x19, #0x400]
7101b0d394  stp xzr,xzr,[sp, #0x30]
7101b0d398  str xzr,[sp, #0x28]
7101b0d39c  ldp x8,x9,[x21, #0x168]
7101b0d3a0  sub x8,x9,x8
7101b0d3a4  asr x1,x8,#0x3
7101b0d3a8  add x0,sp,#0x28
7101b0d3ac  bl 0x71019bb740
7101b0d3b0  ldp x20,x21,[x21, #0x168]
7101b0d3b4  cmp x20,x21
7101b0d3b8  b.eq 0x7101b0d3f8
7101b0d3bc  ldr x8,[x20]
7101b0d3c0  add x1,x8,#0x8
7101b0d3c4  ldp x0,x8,[sp, #0x30]
7101b0d3c8  cmp x0,x8
7101b0d3cc  b.eq 0x7101b0d3e4
7101b0d3d0  bl 0x7103776390
7101b0d3d4  ldr x8,[sp, #0x30]
7101b0d3d8  add x8,x8,#0x10
7101b0d3dc  str x8,[sp, #0x30]
7101b0d3e0  b 0x7101b0d3ec
7101b0d3e4  add x0,sp,#0x28
7101b0d3e8  bl 0x71019bb8f0
7101b0d3ec  add x20,x20,#0x8
7101b0d3f0  cmp x21,x20
7101b0d3f4  b.ne 0x7101b0d3bc
7101b0d3f8  ldp x22,x20,[sp, #0x28]
7101b0d3fc  cmp x22,x20
7101b0d400  str x24,[sp, #0x8]
7101b0d404  b.eq 0x7101b0d6c0
7101b0d408  fmov s8,0x3f800000
7101b0d40c  fmov s9,wzr
7101b0d410  adrp x25,0x7104411000
7101b0d414  add x25,x25,#0x1db
7101b0d418  adrp x23,0x710523d000
7101b0d41c  add x23,x23,#0x988
7101b0d420  adrp x26,0x710593b000
7101b0d424  add x26,x26,#0xa40
7101b0d428  adrp x24,0x710593b000
7101b0d42c  add x24,x24,#0xa58
7101b0d430  b 0x7101b0d444
7101b0d434  mov x0,x28
7101b0d438  stur x28,[x29, #-0xc8]
7101b0d43c  cbnz x0,0x7101b0d6a0
7101b0d440  b 0x7101b0d6a4
7101b0d444  ldr x0,[x22, #0x8]
7101b0d448  mov v0.16B,v8.16B
7101b0d44c  adrp x1,0x710426f000
7101b0d450  add x1,x1,#0xbad
7101b0d454  bl 0x7103778300
7101b0d458  mov x0,x22
7101b0d45c  mov w1,wzr
7101b0d460  bl 0x7101b11920
7101b0d464  ldr x8,[sp, #0x18]
7101b0d468  ldr x27,[x8]
7101b0d46c  stur xzr,[x29, #-0xd0]
7101b0d470  stp xzr,xzr,[x29, #-0xc8]
7101b0d474  sub x0,x29,#0xd0
7101b0d478  ldp x8,x9,[x27, #0x168]
7101b0d47c  sub x8,x9,x8
7101b0d480  asr x1,x8,#0x3
7101b0d484  bl 0x71019bb740
7101b0d488  ldp x21,x27,[x27, #0x168]
7101b0d48c  cmp x21,x27
7101b0d490  b.eq 0x7101b0d4d0
7101b0d494  ldr x8,[x21]
7101b0d498  add x1,x8,#0x8
7101b0d49c  ldp x0,x8,[x29, #-0xc8]
7101b0d4a0  cmp x0,x8
7101b0d4a4  b.eq 0x7101b0d4bc
7101b0d4a8  bl 0x7103776390
7101b0d4ac  ldur x8,[x29, #-0xc8]
7101b0d4b0  add x8,x8,#0x10
7101b0d4b4  stur x8,[x29, #-0xc8]
7101b0d4b8  b 0x7101b0d4c4
7101b0d4bc  sub x0,x29,#0xd0
7101b0d4c0  bl 0x71019bb8f0
7101b0d4c4  add x21,x21,#0x8
7101b0d4c8  cmp x27,x21
7101b0d4cc  b.ne 0x7101b0d494
7101b0d4d0  ldp x28,x21,[x29, #-0xd0]
7101b0d4d4  cmp x28,x21
7101b0d4d8  b.ne 0x7101b0d548
7101b0d4dc  cbnz x28,0x7101b0d670
7101b0d4e0  b 0x7101b0d6a4
7101b0d4e4  mov x0,x26
7101b0d4e8  bl 0x71039c06b0
7101b0d4ec  cbz w0,0x7101b0d570
7101b0d4f0  adrp x8,0x710593b000
7101b0d4f4  add x8,x8,#0xa48
7101b0d4f8  ldarb w8,[x8]
7101b0d4fc  tbz w8,#0x0,0x7101b0d520
7101b0d500  adrp x8,0x710593b000
7101b0d504  adrp x9,0x710593b000
7101b0d508  add x9,x9,#0xa50
7101b0d50c  mov x0,x26
7101b0d510  str x9,[x8, #0xa58]
7101b0d514  bl 0x71039c06c0
7101b0d518  cbnz x27,0x7101b0d574
7101b0d51c  b 0x7101b0d624
7101b0d520  adrp x0,0x710593b000
7101b0d524  add x0,x0,#0xa48
7101b0d528  bl 0x71039c06b0
7101b0d52c  cbz w0,0x7101b0d500
7101b0d530  adrp x8,0x710593b000
7101b0d534  adrp x0,0x710593b000
7101b0d538  add x0,x0,#0xa48
7101b0d53c  str xzr,[x8, #0xa50]
7101b0d540  bl 0x71039c06c0
7101b0d544  b 0x7101b0d500
7101b0d548  add x8,sp,#0x2f8
7101b0d54c  mov x0,x28
7101b0d550  mov x1,x25
7101b0d554  bl 0x7103776640
7101b0d558  ldr x27,[sp, #0x300]
7101b0d55c  ldr x8,[x27, #0x8]
7101b0d560  cbz x8,0x7101b0d628
7101b0d564  ldr x27,[x8, #0x78]
7101b0d568  ldarb w8,[x26]
7101b0d56c  tbz w8,#0x0,0x7101b0d4e4
7101b0d570  cbz x27,0x7101b0d624
7101b0d574  ldr x8,[x27]
7101b0d578  ldr x8,[x8]
7101b0d57c  mov x0,x27
7101b0d580  blr x8
7101b0d584  cbz x0,0x7101b0d624
7101b0d588  cmp x0,x24
7101b0d58c  b.eq 0x7101b0d59c
7101b0d590  ldr x0,[x0]
7101b0d594  cbnz x0,0x7101b0d588
7101b0d598  b 0x7101b0d624
7101b0d59c  ldr w9,[x27, #0x54]
7101b0d5a0  ldr x8,[x27, #0x18]
7101b0d5a4  str w9,[x27, #0x58]
7101b0d5a8  cbz x8,0x7101b0d5bc
7101b0d5ac  str w9,[x8, #0x30]
7101b0d5b0  ldrb w9,[x8, #0x58]
7101b0d5b4  orr w9,w9,#0x10
7101b0d5b8  strb w9,[x8, #0x58]
7101b0d5bc  ldr x8,[x27, #0x20]
7101b0d5c0  cbz x8,0x7101b0d5d8
7101b0d5c4  ldr w9,[x27, #0x58]
7101b0d5c8  str w9,[x8, #0x30]
7101b0d5cc  ldrb w9,[x8, #0x58]
7101b0d5d0  orr w9,w9,#0x10
7101b0d5d4  strb w9,[x8, #0x58]
7101b0d5d8  ldr x0,[x27, #0x28]
7101b0d5dc  cbz x0,0x7101b0d5f0
7101b0d5e0  ldr x8,[x0]
7101b0d5e4  ldr x8,[x8, #0x180]
7101b0d5e8  mov v0.16B,v9.16B
7101b0d5ec  blr x8
7101b0d5f0  ldr x0,[x27, #0x30]
7101b0d5f4  cbz x0,0x7101b0d620
7101b0d5f8  ldrb w8,[x27, #0x63]
7101b0d5fc  cbz w8,0x7101b0d610
7101b0d600  ldr x8,[x0]
7101b0d604  ldr x8,[x8, #0x190]
7101b0d608  blr x8
7101b0d60c  b 0x7101b0d620
7101b0d610  ldr x8,[x0]
7101b0d614  ldr x8,[x8, #0x180]
7101b0d618  mov v0.16B,v9.16B
7101b0d61c  blr x8
7101b0d620  strh wzr,[x27, #0x64]
7101b0d624  ldr x27,[sp, #0x300]
7101b0d628  ldr x0,[x27, #0x8]
7101b0d62c  bl 0x7103778950
7101b0d630  str x23,[sp, #0x2f8]
7101b0d634  str xzr,[sp, #0x300]
7101b0d638  cbz x27,0x7101b0d65c
7101b0d63c  ldr x0,[x27, #0x18]
7101b0d640  adrp x8,0x710523d000
7101b0d644  add x8,x8,#0x9a8
7101b0d648  stp x8,xzr,[x27, #0x10]
7101b0d64c  cbz x0,0x7101b0d654
7101b0d650  bl 0x710392eb40
7101b0d654  mov x0,x27
7101b0d658  bl 0x710392eb40
7101b0d65c  add x28,x28,#0x10
7101b0d660  cmp x28,x21
7101b0d664  b.ne 0x7101b0d548
7101b0d668  ldur x28,[x29, #-0xd0]
7101b0d66c  cbz x28,0x7101b0d6a4
7101b0d670  ldur x27,[x29, #-0xc8]
7101b0d674  cmp x27,x28
7101b0d678  b.eq 0x7101b0d434
7101b0d67c  ldr x8,[x27, #-0x10]!
7101b0d680  ldr x8,[x8]
7101b0d684  mov x0,x27
7101b0d688  blr x8
7101b0d68c  cmp x28,x27
7101b0d690  b.ne 0x7101b0d67c
7101b0d694  ldur x0,[x29, #-0xd0]
7101b0d698  stur x28,[x29, #-0xc8]
7101b0d69c  cbz x0,0x7101b0d6a4
7101b0d6a0  bl 0x710392eb40
7101b0d6a4  ldr x0,[x22, #0x8]
7101b0d6a8  adrp x1,0x71042c4000
7101b0d6ac  add x1,x1,#0x9ba
7101b0d6b0  bl 0x7103778760
7101b0d6b4  add x22,x22,#0x10
7101b0d6b8  cmp x22,x20
7101b0d6bc  b.ne 0x7101b0d444
7101b0d6c0  ldr x21,[x19, #0x400]
7101b0d6c4  stp xzr,xzr,[x29, #-0xc8]
7101b0d6c8  stur xzr,[x29, #-0xd0]
7101b0d6cc  ldp x8,x9,[x21, #0x168]
7101b0d6d0  sub x8,x9,x8
7101b0d6d4  asr x1,x8,#0x3
7101b0d6d8  sub x0,x29,#0xd0
7101b0d6dc  bl 0x71019bb740
7101b0d6e0  ldp x20,x21,[x21, #0x168]
7101b0d6e4  cmp x20,x21
7101b0d6e8  adrp x25,0x710523d000
7101b0d6ec  add x25,x25,#0x9e8
7101b0d6f0  b.eq 0x7101b0d730
7101b0d6f4  ldr x8,[x20]
7101b0d6f8  add x1,x8,#0x8
7101b0d6fc  ldp x0,x8,[x29, #-0xc8]
7101b0d700  cmp x0,x8
7101b0d704  b.eq 0x7101b0d71c
7101b0d708  bl 0x7103776390
7101b0d70c  ldur x8,[x29, #-0xc8]
7101b0d710  add x8,x8,#0x10
7101b0d714  stur x8,[x29, #-0xc8]
7101b0d718  b 0x7101b0d724
7101b0d71c  sub x0,x29,#0xd0
7101b0d720  bl 0x71019bb8f0
7101b0d724  add x20,x20,#0x8
7101b0d728  cmp x21,x20
7101b0d72c  b.ne 0x7101b0d6f4
7101b0d730  ldp x21,x20,[x29, #-0xd0]
7101b0d734  cmp x21,x20
7101b0d738  b.eq 0x7101b0d970
7101b0d73c  adrp x8,0x7104473000
7101b0d740  ldr s11,[x8, #0x710]
7101b0d744  fmov s10,wzr
7101b0d748  fmov s8,0x3f800000
7101b0d74c  adrp x28,0x7104329000
7101b0d750  add x28,x28,#0xb76
7101b0d754  adrp x23,0x7104328000
7101b0d758  add x23,x23,#0x277
7101b0d75c  adrp x26,0x710523d000
7101b0d760  add x26,x26,#0x988
7101b0d764  adrp x27,0x7105239000
7101b0d768  add x27,x27,#0x1c0
7101b0d76c  str x19,[sp, #0x10]
7101b0d770  add x8,sp,#0x2b0
7101b0d774  mov x0,x21
7101b0d778  mov x1,x28
7101b0d77c  bl 0x7103776640
7101b0d780  add x8,sp,#0x2f8
7101b0d784  add x0,sp,#0x2b0
7101b0d788  mov x1,x23
7101b0d78c  bl 0x71037780e0
7101b0d790  ldr x24,[sp, #0x2b8]
7101b0d794  str x26,[sp, #0x2b0]
7101b0d798  str xzr,[sp, #0x2b8]
7101b0d79c  cbz x24,0x7101b0d7c0
7101b0d7a0  ldr x0,[x24, #0x18]
7101b0d7a4  adrp x8,0x710523d000
7101b0d7a8  add x8,x8,#0x9a8
7101b0d7ac  stp x8,xzr,[x24, #0x10]
7101b0d7b0  cbz x0,0x7101b0d7b8
7101b0d7b4  bl 0x710392eb40
7101b0d7b8  mov x0,x24
7101b0d7bc  bl 0x710392eb40
7101b0d7c0  ldr x24,[sp, #0x300]
7101b0d7c4  ldr x0,[x24, #0x8]
7101b0d7c8  mov v9.16B,v10.16B
7101b0d7cc  cbz x0,0x7101b0d7e0
7101b0d7d0  ldr x8,[x0]
7101b0d7d4  ldr x8,[x8, #0x1a8]
7101b0d7d8  blr x8
7101b0d7dc  mov v9.16B,v0.16B
7101b0d7e0  ldp w8,w9,[x27]
7101b0d7e4  eor w8,w8,w8, LSL #0xb
7101b0d7e8  str w9,[x27]
7101b0d7ec  ldp w9,w10,[x27, #0x8]
7101b0d7f0  eor w8,w8,w8, LSR #0x8
7101b0d7f4  eor w8,w8,w10
7101b0d7f8  mov v0.16B,v8.16B
7101b0d7fc  add x0,sp,#0x2f8
7101b0d800  stp w9,w10,[x27, #0x4]
7101b0d804  eor w22,w8,w10, LSR #0x13
7101b0d808  str w22,[x27, #0xc]
7101b0d80c  bl 0x710377aee0
7101b0d810  ldr x0,[x24, #0x8]
7101b0d814  cbz x0,0x7101b0d950
7101b0d818  ucvtf s0,w22
7101b0d81c  ldr x8,[x0]
7101b0d820  ldr x8,[x8, #0x148]
7101b0d824  fmul s0,s9,s0
7101b0d828  fmul s9,s0,s11
7101b0d82c  blr x8
7101b0d830  tbnz w0,#0x0,0x7101b0d93c
7101b0d834  ldrb w8,[x24, #0x10]
7101b0d838  mov x19,x20
7101b0d83c  mov x20,x23
7101b0d840  mov x23,x26
7101b0d844  mov x26,x28
7101b0d848  cbz w8,0x7101b0d910
7101b0d84c  ldr x8,[x24]
7101b0d850  ldr x22,[x8, #0x80]
7101b0d854  add x28,x8,#0x88
7101b0d858  cmp x22,x28
7101b0d85c  b.eq 0x7101b0d910
7101b0d860  ldr x25,[x24, #0x8]
7101b0d864  ldr x0,[x22, #0x68]
7101b0d868  ldr x8,[x0]
7101b0d86c  ldr x8,[x8, #0x148]
7101b0d870  blr x8
7101b0d874  tbz w0,#0x0,0x7101b0d8b4
7101b0d878  ldr x8,[x25]
7101b0d87c  ldr x1,[x22, #0x68]
7101b0d880  mov x0,x25
7101b0d884  ldr x8,[x8, #0x120]
7101b0d888  blr x8
7101b0d88c  tbz w0,#0x0,0x7101b0d8b4
7101b0d890  ldr x0,[x22, #0x68]
7101b0d894  ldr x8,[x0]
7101b0d898  ldr x8,[x8, #0x178]
7101b0d89c  blr x8
7101b0d8a0  ldr x0,[x22, #0x68]
7101b0d8a4  ldr x8,[x0]
7101b0d8a8  ldr x8,[x8, #0x140]
7101b0d8ac  mov w1,wzr
7101b0d8b0  blr x8
7101b0d8b4  ldr x8,[x22, #0x8]
7101b0d8b8  cbz x8,0x7101b0d8cc
7101b0d8bc  mov x22,x8
7101b0d8c0  ldr x8,[x8]
7101b0d8c4  cbnz x8,0x7101b0d8bc
7101b0d8c8  b 0x7101b0d8f8
7101b0d8cc  mov x8,x22
7101b0d8d0  ldr x9,[x8, #0x10]!
7101b0d8d4  ldr x10,[x9]
7101b0d8d8  cmp x10,x22
7101b0d8dc  b.eq 0x7101b0d904
7101b0d8e0  ldr x9,[x8]
7101b0d8e4  mov x8,x9
7101b0d8e8  ldr x22,[x8, #0x10]!
7101b0d8ec  ldr x10,[x22]
7101b0d8f0  cmp x10,x9
7101b0d8f4  b.ne 0x7101b0d8e0
7101b0d8f8  cmp x22,x28
7101b0d8fc  b.ne 0x7101b0d864
7101b0d900  b 0x7101b0d910
7101b0d904  mov x22,x9
7101b0d908  cmp x22,x28
7101b0d90c  b.ne 0x7101b0d864
7101b0d910  ldr x0,[x24, #0x8]
7101b0d914  ldr x8,[x0]
7101b0d918  ldr x8,[x8, #0x178]
7101b0d91c  blr x8
7101b0d920  mov x28,x26
7101b0d924  mov x26,x23
7101b0d928  mov x23,x20
7101b0d92c  mov x20,x19
7101b0d930  ldr x19,[sp, #0x10]
7101b0d934  adrp x25,0x710523d000
7101b0d938  add x25,x25,#0x9e8
7101b0d93c  ldr x0,[x24, #0x8]
7101b0d940  ldr x8,[x0]
7101b0d944  ldr x8,[x8, #0x1a0]
7101b0d948  mov v0.16B,v9.16B
7101b0d94c  blr x8
7101b0d950  mov x0,x24
7101b0d954  str x25,[sp, #0x2f8]
7101b0d958  str xzr,[sp, #0x300]
7101b0d95c  bl 0x710392eb40
7101b0d960  add x21,x21,#0x10
7101b0d964  cmp x21,x20
7101b0d968  b.ne 0x7101b0d770
7101b0d96c  ldur x21,[x29, #-0xd0]
7101b0d970  add x23,sp,#0x2f8
7101b0d974  cbz x21,0x7101b0d9ac
7101b0d978  ldur x22,[x29, #-0xc8]
7101b0d97c  cmp x22,x21
7101b0d980  b.eq 0x7101b0db70
7101b0d984  ldr x8,[x22, #-0x10]!
7101b0d988  ldr x8,[x8]
7101b0d98c  mov x0,x22
7101b0d990  blr x8
7101b0d994  cmp x21,x22
7101b0d998  b.ne 0x7101b0d984
7101b0d99c  ldur x0,[x29, #-0xd0]
7101b0d9a0  stur x21,[x29, #-0xc8]
7101b0d9a4  cbz x0,0x7101b0d9ac
7101b0d9a8  bl 0x710392eb40
7101b0d9ac  ldr w9,[x19, #0x278]
7101b0d9b0  ldr w22,[x19, #0x3a8]
7101b0d9b4  add x21,x19,#0x4e8
7101b0d9b8  ldr x8,[x19, #0x4e8]
7101b0d9bc  cmp w9,#0x3
7101b0d9c0  cset w20,eq
7101b0d9c4  str x8,[x19, #0x4f0]
7101b0d9c8  b.ne 0x7101b0daa0
7101b0d9cc  ldrb w9,[x19, #0x38d]
7101b0d9d0  mov w16,#0x9dc5
7101b0d9d4  movk w16,#0x811c, LSL #16
7101b0d9d8  cbz w9,0x7101b0ded0
7101b0d9dc  orr x9,xzr,#0x1800000000
7101b0d9e0  mov x10,#0x6e6d
7101b0d9e4  movk x10,#0x5f75, LSL #16
7101b0d9e8  movk x10,#0x6572, LSL #32
7101b0d9ec  movk x10,#0x6177, LSL #48
7101b0d9f0  str x9,[sp, #0x2f8]
7101b0d9f4  add x9,sp,#0x2f8
7101b0d9f8  str x10,[sp, #0x300]
7101b0d9fc  add x10,x9,#0x9
7101b0da00  mov x9,#0x6472
7101b0da04  movk x9,#0x625f, LSL #16
7101b0da08  movk x9,#0x6e6f, LSL #32
7101b0da0c  movk x9,#0x7375, LSL #48
7101b0da10  str x9,[sp, #0x308]
7101b0da14  mov w9,#0x675f
7101b0da18  strh w9,[sp, #0x310]
7101b0da1c  mov w9,#0x6172
7101b0da20  movk w9,#0x6564, LSL #16
7101b0da24  stur w9,[x23, #0x1a]
7101b0da28  mov w9,#0x7075
7101b0da2c  strh w9,[sp, #0x316]
7101b0da30  mov w11,#0x6d
7101b0da34  mov w9,#0x89
7101b0da38  strb wzr,[sp, #0x318]
7101b0da3c  mov w12,w16
7101b0da40  mul w12,w12,w9
7101b0da44  and w11,w11,#0xff
7101b0da48  eor w12,w12,w11
7101b0da4c  ldrb w11,[x10], #0x1
7101b0da50  cbnz w11,0x7101b0da40
7101b0da54  str w12,[sp, #0x2f8]
7101b0da58  orr w12,wzr,#0x7800
7101b0da5c  add x11,sp,#0x2f8
7101b0da60  mov x10,xzr
7101b0da64  stur w20,[x29, #-0xd0]
7101b0da68  add x11,x11,#0x9
7101b0da6c  mov w14,#0x6d
7101b0da70  stur x12,[x23, #0x4c]
7101b0da74  sub x12,x29,#0xd0
7101b0da78  add w13,w10,#0x1
7101b0da7c  add x15,x12,x10
7101b0da80  cmp w13,#0x3e
7101b0da84  strb w14,[x15, #0x10]
7101b0da88  b.hi 0x7101b0db80
7101b0da8c  ldrb w14,[x11, x10, LSL ]
7101b0da90  add x13,x10,#0x1
7101b0da94  mov x10,x13
7101b0da98  cbnz w14,0x7101b0da78
7101b0da9c  b 0x7101b0db84
7101b0daa0  mov w16,#0x9dc5
7101b0daa4  movk w16,#0x811c, LSL #16
7101b0daa8  tbz w22,#0xa,0x7101b0dcd4
7101b0daac  orr x9,xzr,#0x1800000000
7101b0dab0  mov x10,#0x6e6d
7101b0dab4  movk x10,#0x5f75, LSL #16
7101b0dab8  movk x10,#0x6572, LSL #32
7101b0dabc  movk x10,#0x6177, LSL #48
7101b0dac0  str x9,[sp, #0x2f8]
7101b0dac4  add x9,sp,#0x2f8
7101b0dac8  str x10,[sp, #0x300]
7101b0dacc  add x10,x9,#0x9
7101b0dad0  mov x9,#0x6472
7101b0dad4  movk x9,#0x755f, LSL #16
7101b0dad8  movk x9,#0x5f70, LSL #32
7101b0dadc  movk x9,#0x7073, LSL #48
7101b0dae0  str x9,[sp, #0x308]
7101b0dae4  mov w9,#0x7269
7101b0dae8  strh w9,[sp, #0x310]
7101b0daec  mov w9,#0x7469
7101b0daf0  movk w9,#0x655f, LSL #16
7101b0daf4  stur w9,[x23, #0x1a]
7101b0daf8  mov w9,#0x7078
7101b0dafc  strh w9,[sp, #0x316]
7101b0db00  mov w11,#0x6d
7101b0db04  mov w9,#0x89
7101b0db08  strb wzr,[sp, #0x318]
7101b0db0c  mov w12,w16
7101b0db10  mul w12,w12,w9
7101b0db14  and w11,w11,#0xff
7101b0db18  eor w12,w12,w11
7101b0db1c  ldrb w11,[x10], #0x1
7101b0db20  cbnz w11,0x7101b0db10
7101b0db24  str w12,[sp, #0x2f8]
7101b0db28  mov w12,#0x400
7101b0db2c  add x11,sp,#0x2f8
7101b0db30  mov x10,xzr
7101b0db34  stur w20,[x29, #-0xd0]
7101b0db38  add x11,x11,#0x9
7101b0db3c  mov w14,#0x6d
7101b0db40  stur x12,[x23, #0x4c]
7101b0db44  sub x12,x29,#0xd0
7101b0db48  add w13,w10,#0x1
7101b0db4c  add x15,x12,x10
7101b0db50  cmp w13,#0x3e
7101b0db54  strb w14,[x15, #0x10]
7101b0db58  b.hi 0x7101b0dc20
7101b0db5c  ldrb w14,[x11, x10, LSL ]
7101b0db60  add x13,x10,#0x1
7101b0db64  mov x10,x13
7101b0db68  cbnz w14,0x7101b0db48
7101b0db6c  b 0x7101b0dc24
7101b0db70  mov x0,x21
7101b0db74  stur x21,[x29, #-0xc8]
7101b0db78  cbnz x0,0x7101b0d9a8
7101b0db7c  b 0x7101b0d9ac
7101b0db80  add w13,w10,#0x1
7101b0db84  sub x11,x29,#0xd0
7101b0db88  add x10,x11,#0x10
7101b0db8c  mov w12,w16
7101b0db90  strb wzr,[x10, w13, UXTW ]
7101b0db94  ldurb w10,[x29, #-0xc0]
7101b0db98  stur w13,[x29, #-0xc4]
7101b0db9c  cbz w10,0x7101b0dbbc
7101b0dba0  add x11,x11,#0x11
7101b0dba4  mov w12,w16
7101b0dba8  mul w12,w12,w9
7101b0dbac  and w10,w10,#0xff
7101b0dbb0  eor w12,w12,w10
7101b0dbb4  ldrb w10,[x11], #0x1
7101b0dbb8  cbnz w10,0x7101b0dba8
7101b0dbbc  stur w12,[x29, #-0xc8]
7101b0dbc0  ldr x10,[x19, #0x4f8]
7101b0dbc4  cmp x10,x8
7101b0dbc8  b.ls 0x7101b0de48
7101b0dbcc  ldur x11,[x29, #-0xd0]
7101b0dbd0  str x11,[x8]
7101b0dbd4  sub x11,x29,#0xd0
7101b0dbd8  mov x10,xzr
7101b0dbdc  str wzr,[x8, #0x8]
7101b0dbe0  add x11,x11,#0x10
7101b0dbe4  b 0x7101b0dbf0
7101b0dbe8  add x10,x10,#0x2
7101b0dbec  strb w12,[x13, #0x11]
7101b0dbf0  add x12,x11,x10
7101b0dbf4  ldrb w14,[x12]
7101b0dbf8  cbz w14,0x7101b0de5c
7101b0dbfc  add w15,w10,#0x1
7101b0dc00  add x13,x8,x10
7101b0dc04  cmp w15,#0x3f
7101b0dc08  strb w14,[x13, #0x10]
7101b0dc0c  b.cs 0x7101b0de58
7101b0dc10  ldrb w12,[x12, #0x1]
7101b0dc14  cbnz w12,0x7101b0dbe8
7101b0dc18  add x10,x10,#0x1
7101b0dc1c  b 0x7101b0de5c
7101b0dc20  add w13,w10,#0x1
7101b0dc24  sub x11,x29,#0xd0
7101b0dc28  add x10,x11,#0x10
7101b0dc2c  mov w12,w16
7101b0dc30  strb wzr,[x10, w13, UXTW ]
7101b0dc34  ldurb w10,[x29, #-0xc0]
7101b0dc38  stur w13,[x29, #-0xc4]
7101b0dc3c  cbz w10,0x7101b0dc5c
7101b0dc40  add x11,x11,#0x11
7101b0dc44  mov w12,w16
7101b0dc48  mul w12,w12,w9
7101b0dc4c  and w10,w10,#0xff
7101b0dc50  eor w12,w12,w10
7101b0dc54  ldrb w10,[x11], #0x1
7101b0dc58  cbnz w10,0x7101b0dc48
7101b0dc5c  stur w12,[x29, #-0xc8]
7101b0dc60  ldr x10,[x19, #0x4f8]
7101b0dc64  cmp x10,x8
7101b0dc68  b.ls 0x7101b0dcc0
7101b0dc6c  ldur x11,[x29, #-0xd0]
7101b0dc70  str x11,[x8]
7101b0dc74  sub x11,x29,#0xd0
7101b0dc78  mov x10,xzr
7101b0dc7c  str wzr,[x8, #0x8]
7101b0dc80  add x11,x11,#0x10
7101b0dc84  b 0x7101b0dc90
7101b0dc88  add x10,x10,#0x2
7101b0dc8c  strb w12,[x13, #0x11]
7101b0dc90  add x12,x11,x10
7101b0dc94  ldrb w14,[x12]
7101b0dc98  cbz w14,0x7101b0e8e4
7101b0dc9c  add w15,w10,#0x1
7101b0dca0  add x13,x8,x10
7101b0dca4  cmp w15,#0x3f
7101b0dca8  strb w14,[x13, #0x10]
7101b0dcac  b.cs 0x7101b0e8e0
7101b0dcb0  ldrb w12,[x12, #0x1]
7101b0dcb4  cbnz w12,0x7101b0dc88
7101b0dcb8  add x10,x10,#0x1
7101b0dcbc  b 0x7101b0e8e4
7101b0dcc0  sub x1,x29,#0xd0
7101b0dcc4  mov x0,x21
7101b0dcc8  bl 0x7101b0bfc0
7101b0dccc  mov w16,#0x9dc5
7101b0dcd0  movk w16,#0x811c, LSL #16
7101b0dcd4  tst w22,#0x7800
7101b0dcd8  b.eq 0x7101b0ded0
7101b0dcdc  mov x8,#0x1400000000
7101b0dce0  str x8,[sp, #0x2b0]
7101b0dce4  mov x8,#0x6472
7101b0dce8  movk x8,#0x755f, LSL #16
7101b0dcec  mov x9,#0x6e6d
7101b0dcf0  movk x9,#0x5f75, LSL #16
7101b0dcf4  movk x8,#0x5f70, LSL #32
7101b0dcf8  movk x8,#0x6572, LSL #48
7101b0dcfc  str x8,[sp, #0x2c0]
7101b0dd00  movk x9,#0x6572, LSL #32
7101b0dd04  movk x9,#0x6177, LSL #48
7101b0dd08  str x9,[sp, #0x2b8]
7101b0dd0c  add x10,sp,#0x2b0
7101b0dd10  mov w8,#0x6177
7101b0dd14  movk w8,#0x6472, LSL #16
7101b0dd18  add x9,x10,#0x9
7101b0dd1c  str w8,[sp, #0x2c8]
7101b0dd20  strb wzr,[sp, #0x2cc]
7101b0dd24  mov w10,#0x6d
7101b0dd28  mov w8,#0x89
7101b0dd2c  mov w11,w16
7101b0dd30  mul w11,w11,w8
7101b0dd34  and w10,w10,#0xff
7101b0dd38  eor w11,w11,w10
7101b0dd3c  ldrb w10,[x9], #0x1
7101b0dd40  cbnz w10,0x7101b0dd30
7101b0dd44  str w11,[sp, #0x2b0]
7101b0dd48  orr w11,wzr,#0x7800
7101b0dd4c  add x10,sp,#0x2b0
7101b0dd50  mov x9,xzr
7101b0dd54  stur w20,[x29, #-0xd0]
7101b0dd58  add x10,x10,#0x9
7101b0dd5c  mov w13,#0x6d
7101b0dd60  stur x11,[x23, #0x4c]
7101b0dd64  sub x11,x29,#0xd0
7101b0dd68  add w12,w9,#0x1
7101b0dd6c  add x14,x11,x9
7101b0dd70  cmp w12,#0x3e
7101b0dd74  strb w13,[x14, #0x10]
7101b0dd78  b.hi 0x7101b0dd90
7101b0dd7c  ldrb w13,[x10, x9, LSL ]
7101b0dd80  add x12,x9,#0x1
7101b0dd84  mov x9,x12
7101b0dd88  cbnz w13,0x7101b0dd68
7101b0dd8c  b 0x7101b0dd94
7101b0dd90  add w12,w9,#0x1
7101b0dd94  sub x9,x29,#0xd0
7101b0dd98  add x10,x9,#0x10
7101b0dd9c  mov w11,w16
7101b0dda0  strb wzr,[x10, w12, UXTW ]
7101b0dda4  ldurb w10,[x29, #-0xc0]
7101b0dda8  stur w12,[x29, #-0xc4]
7101b0ddac  cbz w10,0x7101b0ddd0
7101b0ddb0  add x9,x9,#0x11
7101b0ddb4  mov w12,w10
7101b0ddb8  mov w11,w16
7101b0ddbc  mul w11,w11,w8
7101b0ddc0  and w12,w12,#0xff
7101b0ddc4  eor w11,w11,w12
7101b0ddc8  ldrb w12,[x9], #0x1
7101b0ddcc  cbnz w12,0x7101b0ddbc
7101b0ddd0  stur w11,[x29, #-0xc8]
7101b0ddd4  ldr x9,[x19, #0x4f0]
7101b0ddd8  ldr x11,[x19, #0x4f8]
7101b0dddc  cmp x9,x11
7101b0dde0  b.cs 0x7101b0de48
7101b0dde4  ldur x12,[x29, #-0xd0]
7101b0dde8  str wzr,[x9, #0x8]
7101b0ddec  str x12,[x9]
7101b0ddf0  sub x12,x29,#0xd0
7101b0ddf4  mov x11,xzr
7101b0ddf8  add x13,x9,#0x11
7101b0ddfc  add x12,x12,#0x11
7101b0de00  tst w10,#0xff
7101b0de04  b.ne 0x7101b0de24
7101b0de08  b 0x7101b0de94
7101b0de0c  add x14,x12,x11
7101b0de10  strb w10,[x13, x11, LSL ]
7101b0de14  ldrb w10,[x14, #0x1]
7101b0de18  add x11,x11,#0x2
7101b0de1c  tst w10,#0xff
7101b0de20  b.eq 0x7101b0de94
7101b0de24  add w14,w11,#0x1
7101b0de28  add x15,x13,x11
7101b0de2c  cmp w14,#0x3f
7101b0de30  sturb w10,[x15, #-0x1]
7101b0de34  b.cs 0x7101b0de90
7101b0de38  ldrb w10,[x12, x11, LSL ]
7101b0de3c  cbnz w10,0x7101b0de0c
7101b0de40  add x11,x11,#0x1
7101b0de44  b 0x7101b0de94
7101b0de48  sub x1,x29,#0xd0
7101b0de4c  mov x0,x21
7101b0de50  bl 0x7101b0bfc0
7101b0de54  b 0x7101b0ded0
7101b0de58  add w10,w10,#0x1
7101b0de5c  add x11,x8,#0x10
7101b0de60  strb wzr,[x11, w10, UXTW ]
7101b0de64  ldrb w11,[x8, #0x10]
7101b0de68  str w10,[x8, #0xc]
7101b0de6c  cbz w11,0x7101b0de88
7101b0de70  add x10,x8,#0x11
7101b0de74  mul w12,w16,w9
7101b0de78  and w11,w11,#0xff
7101b0de7c  eor w16,w12,w11
7101b0de80  ldrb w11,[x10], #0x1
7101b0de84  cbnz w11,0x7101b0de74
7101b0de88  str w16,[x8, #0x8]
7101b0de8c  b 0x7101b0dec4
7101b0de90  add w11,w11,#0x1
7101b0de94  add x10,x9,#0x10
7101b0de98  strb wzr,[x10, w11, UXTW ]
7101b0de9c  str w11,[x9, #0xc]
7101b0dea0  ldrb w11,[x9, #0x10]
7101b0dea4  cbz w11,0x7101b0dec0
7101b0dea8  add x10,x9,#0x11
7101b0deac  mul w12,w16,w8
7101b0deb0  and w11,w11,#0xff
7101b0deb4  eor w16,w12,w11
7101b0deb8  ldrb w11,[x10], #0x1
7101b0debc  cbnz w11,0x7101b0deac
7101b0dec0  str w16,[x9, #0x8]
7101b0dec4  ldr x8,[x19, #0x4f0]
7101b0dec8  add x8,x8,#0x50
7101b0decc  str x8,[x19, #0x4f0]
7101b0ded0  ldr w8,[x19, #0x278]
7101b0ded4  cmp w8,#0x3
7101b0ded8  b.ne 0x7101b0e03c
7101b0dedc  ldr w8,[x19, #0x3a0]
7101b0dee0  ldr w9,[x19, #0x39c]
7101b0dee4  sub w8,w8,w9
7101b0dee8  ldr x0,[sp, #0x20]
7101b0deec  mov w10,#0x5a
7101b0def0  adrp x1,0x71042a3000
7101b0def4  add x1,x1,#0x41f
7101b0def8  str w9,[x19, #0x49c]
7101b0defc  cmp w8,#0x5a
7101b0df00  csel w8,w8,w10,cc
7101b0df04  str w8,[x19, #0x498]
7101b0df08  sub x8,x29,#0xd0
7101b0df0c  bl 0x7103776910
7101b0df10  ldr w2,[x19, #0x49c]
7101b0df14  sub x0,x29,#0xd0
7101b0df18  mov w1,#0x1
7101b0df1c  bl 0x710377a310
7101b0df20  ldur x0,[x29, #-0xc8]
7101b0df24  adrp x8,0x710523d000
7101b0df28  add x8,x8,#0x9a8
7101b0df2c  stp x8,xzr,[x29, #-0xd0]
7101b0df30  cbz x0,0x7101b0df38
7101b0df34  bl 0x710392eb40
7101b0df38  ldr x0,[sp, #0x20]
7101b0df3c  adrp x1,0x7104421000
7101b0df40  add x1,x1,#0xe65
7101b0df44  sub x8,x29,#0xd0
7101b0df48  bl 0x71037780e0
7101b0df4c  ldur x21,[x29, #-0xc8]
7101b0df50  ldr x22,[x21, #0x8]
7101b0df54  cbz x22,0x7101b0e42c
7101b0df58  ldrb w8,[x21, #0x10]
7101b0df5c  cbz w8,0x7101b0e024
7101b0df60  ldr x8,[x21]
7101b0df64  ldr x23,[x8, #0x80]
7101b0df68  add x20,x8,#0x88
7101b0df6c  cmp x23,x20
7101b0df70  b.eq 0x7101b0e024
7101b0df74  ldr x0,[x23, #0x68]
7101b0df78  ldr x8,[x0]
7101b0df7c  ldr x8,[x8, #0x148]
7101b0df80  blr x8
7101b0df84  tbz w0,#0x0,0x7101b0dfc4
7101b0df88  ldr x8,[x22]
7101b0df8c  ldr x1,[x23, #0x68]
7101b0df90  mov x0,x22
7101b0df94  ldr x8,[x8, #0x120]
7101b0df98  blr x8
7101b0df9c  tbz w0,#0x0,0x7101b0dfc4
7101b0dfa0  ldr x0,[x23, #0x68]
7101b0dfa4  ldr x8,[x0]
7101b0dfa8  ldr x8,[x8, #0x178]
7101b0dfac  blr x8
7101b0dfb0  ldr x0,[x23, #0x68]
7101b0dfb4  ldr x8,[x0]
7101b0dfb8  ldr x8,[x8, #0x140]
7101b0dfbc  mov w1,wzr
7101b0dfc0  blr x8
7101b0dfc4  ldr x8,[x23, #0x8]
7101b0dfc8  cbz x8,0x7101b0dfdc
7101b0dfcc  mov x23,x8
7101b0dfd0  ldr x8,[x8]
7101b0dfd4  cbnz x8,0x7101b0dfcc
7101b0dfd8  b 0x7101b0e008
7101b0dfdc  mov x8,x23
7101b0dfe0  ldr x9,[x8, #0x10]!
7101b0dfe4  ldr x10,[x9]
7101b0dfe8  cmp x10,x23
7101b0dfec  b.eq 0x7101b0e014
7101b0dff0  ldr x9,[x8]
7101b0dff4  mov x8,x9
7101b0dff8  ldr x23,[x8, #0x10]!
7101b0dffc  ldr x10,[x23]
7101b0e000  cmp x10,x9
7101b0e004  b.ne 0x7101b0dff0
7101b0e008  cmp x23,x20
7101b0e00c  b.ne 0x7101b0df74
7101b0e010  b 0x7101b0e020
7101b0e014  mov x23,x9
7101b0e018  cmp x23,x20
7101b0e01c  b.ne 0x7101b0df74
7101b0e020  ldr x22,[x21, #0x8]
7101b0e024  ldr x8,[x22]
7101b0e028  ldr x8,[x8, #0x188]
7101b0e02c  mov x0,x22
7101b0e030  blr x8
7101b0e034  stp x25,xzr,[x29, #-0xd0]
7101b0e038  b 0x7101b0e434
7101b0e03c  ldr x0,[sp, #0x20]
7101b0e040  adrp x1,0x71042c5000
7101b0e044  add x1,x1,#0x541
7101b0e048  add x8,sp,#0x2f8
7101b0e04c  bl 0x7103776640
7101b0e050  ldrsw x8,[x19, #0x2f4]
7101b0e054  cmp w8,#0x3
7101b0e058  b.hi 0x7101b0e0ac
7101b0e05c  ldr x21,[sp, #0x300]
7101b0e060  ldr x9,[x21, #0x8]
7101b0e064  cbz x9,0x7101b0e098
7101b0e068  ldr x9,[x9, #0x18]
7101b0e06c  cbz x9,0x7101b0e098
7101b0e070  mov w10,#0x14
7101b0e074  madd x8,x8,x10,x19
7101b0e078  orr w10,wzr,#0xffff
7101b0e07c  ldrh w8,[x8, #0x2a8]
7101b0e080  cmp w8,w10
7101b0e084  ldrb w10,[x9, #0x58]
7101b0e088  cset w8,ne
7101b0e08c  and w10,w10,#0xfe
7101b0e090  orr w8,w10,w8
7101b0e094  strb w8,[x9, #0x58]
7101b0e098  adrp x1,0x71042e6000
7101b0e09c  add x1,x1,#0xc4e
7101b0e0a0  mov x0,x21
7101b0e0a4  bl 0x7103778760
7101b0e0a8  b 0x7101b0e0cc
7101b0e0ac  ldr x21,[sp, #0x300]
7101b0e0b0  ldr x8,[x21, #0x8]
7101b0e0b4  cbz x8,0x7101b0e0cc
7101b0e0b8  ldr x8,[x8, #0x18]
7101b0e0bc  cbz x8,0x7101b0e0cc
7101b0e0c0  ldrb w9,[x8, #0x58]
7101b0e0c4  and w9,w9,#0xfe
7101b0e0c8  strb w9,[x8, #0x58]
7101b0e0cc  mov x22,xzr
7101b0e0d0  mov w26,wzr
7101b0e0d4  orr x27,xzr,#-0x4
7101b0e0d8  adrp x20,0x710523d000
7101b0e0dc  add x20,x20,#0x988
7101b0e0e0  mov w24,#0x470
7101b0e0e4  add x0,sp,#0x2b0
7101b0e0e8  add x25,x27,#0x4
7101b0e0ec  bl 0x7103776290
7101b0e0f0  ldr w8,[x19, #0x278]
7101b0e0f4  add w2,w27,#0x5
7101b0e0f8  cmp w8,#0x2
7101b0e0fc  b.ne 0x7101b0e114
7101b0e100  ldr x0,[sp, #0x20]
7101b0e104  sub x8,x29,#0xd0
7101b0e108  adrp x1,0x7104432000
7101b0e10c  add x1,x1,#0xbce
7101b0e110  b 0x7101b0e124
7101b0e114  ldr x0,[sp, #0x20]
7101b0e118  sub x8,x29,#0xd0
7101b0e11c  adrp x1,0x71042f7000
7101b0e120  add x1,x1,#0xe2b
7101b0e124  bl 0x7103776640
7101b0e128  ldur x8,[x29, #-0xc8]
7101b0e12c  ldr x28,[sp, #0x2b8]
7101b0e130  stur xzr,[x29, #-0xc8]
7101b0e134  str x8,[sp, #0x2b8]
7101b0e138  cbz x28,0x7101b0e15c
7101b0e13c  ldr x0,[x28, #0x18]
7101b0e140  adrp x8,0x710523d000
7101b0e144  add x8,x8,#0x9a8
7101b0e148  stp x8,xzr,[x28, #0x10]
7101b0e14c  cbz x0,0x7101b0e154
7101b0e150  bl 0x710392eb40
7101b0e154  mov x0,x28
7101b0e158  bl 0x710392eb40
7101b0e15c  stp x20,xzr,[x29, #-0xd0]
7101b0e160  ldr w8,[x19, #0x2f4]
7101b0e164  cmp x25,x8
7101b0e168  b.ne 0x7101b0e178
7101b0e16c  ldr w8,[x19, #0x278]
7101b0e170  cmp w8,#0x2
7101b0e174  b.ne 0x7101b0e19c
7101b0e178  ldr x0,[sp, #0x2b8]
7101b0e17c  ldr x8,[x0, #0x8]
7101b0e180  cbz x8,0x7101b0e224
7101b0e184  ldr x8,[x8, #0x18]
7101b0e188  cbz x8,0x7101b0e224
7101b0e18c  ldrb w9,[x8, #0x58]
7101b0e190  orr w9,w9,#0x1
7101b0e194  strb w9,[x8, #0x58]
7101b0e198  b 0x7101b0e224
7101b0e19c  ldr x8,[sp, #0x2b8]
7101b0e1a0  ldr x9,[x8, #0x8]
7101b0e1a4  cbz x9,0x7101b0e1bc
7101b0e1a8  ldr x9,[x9, #0x18]
7101b0e1ac  cbz x9,0x7101b0e1bc
7101b0e1b0  ldrb w10,[x9, #0x58]
7101b0e1b4  and w10,w10,#0xfe
7101b0e1b8  strb w10,[x9, #0x58]
7101b0e1bc  ldr x9,[x21]
7101b0e1c0  str x9,[x8]
7101b0e1c4  ldr x8,[x21, #0x8]
7101b0e1c8  ldr x9,[sp, #0x2b8]
7101b0e1cc  str x8,[x9, #0x8]
7101b0e1d0  ldr x8,[sp, #0x2b8]
7101b0e1d4  cmp x8,x21
7101b0e1d8  mov x0,x21
7101b0e1dc  b.eq 0x7101b0e224
7101b0e1e0  ldr x9,[x21, #0x18]
7101b0e1e4  ldr x9,[x9]
7101b0e1e8  ldr x10,[x8, #0x18]
7101b0e1ec  str x9,[x10]
7101b0e1f0  ldr x9,[x21, #0x18]
7101b0e1f4  ldr x9,[x9, #0x8]
7101b0e1f8  ldr x10,[x8, #0x18]
7101b0e1fc  str x9,[x10, #0x8]
7101b0e200  ldr x9,[x21, #0x18]
7101b0e204  ldr x9,[x9, #0x10]
7101b0e208  ldr x10,[x8, #0x18]
7101b0e20c  str x9,[x10, #0x10]
7101b0e210  ldr x9,[x21, #0x18]
7101b0e214  ldr x9,[x9, #0x18]
7101b0e218  ldr x8,[x8, #0x18]
7101b0e21c  str x9,[x8, #0x18]
7101b0e220  ldr x0,[sp, #0x2b8]
7101b0e224  adrp x1,0x710428f000
7101b0e228  add x1,x1,#0xf7d
7101b0e22c  bl 0x7103778760
7101b0e230  add x28,x19,x24
7101b0e234  add x1,sp,#0x2b0
7101b0e238  mov w2,#0x1
7101b0e23c  mov x0,x28
7101b0e240  bl 0x710339b5e0
7101b0e244  add x23,x19,x22
7101b0e248  ldrb w8,[x23, #0x2b4]
7101b0e24c  cbz w8,0x7101b0e2c4
7101b0e250  ldr w8,[x19, #0x278]
7101b0e254  ldr x9,[x19, x24, LSL #0x0]
7101b0e258  cmp w8,#0x2
7101b0e25c  orr w8,wzr,#0x18
7101b0e260  mov w10,#0x2f
7101b0e264  csel w8,w10,w8,eq
7101b0e268  str w8,[x9, #0x4]
7101b0e26c  add w8,w27,#0x5
7101b0e270  ldr x9,[x19, x24, LSL #0x0]
7101b0e274  str w8,[x9, #0x8]
7101b0e278  ldr x0,[x19, x24, LSL #0x0]
7101b0e27c  bl 0x710339ae90
7101b0e280  ldrh w8,[x23, #0x2a8]
7101b0e284  ldr x9,[x19, x24, LSL #0x0]
7101b0e288  strh w8,[x9]
7101b0e28c  ldr x0,[x19, x24, LSL #0x0]
7101b0e290  bl 0x710339ae90
7101b0e294  ldr w1,[x23, #0x2ac]
7101b0e298  ldr w2,[x23, #0x2b0]
7101b0e29c  mov x0,x28
7101b0e2a0  bl 0x710339b6b0
7101b0e2a4  ldr w8,[x19, #0x2f4]
7101b0e2a8  cmp x25,x8
7101b0e2ac  cset w9,ne
7101b0e2b0  orr w26,w26,w9
7101b0e2b4  cmp x25,x8
7101b0e2b8  b.ne 0x7101b0e2f4
7101b0e2bc  mov w8,#0x1
7101b0e2c0  b 0x7101b0e300
7101b0e2c4  ldr x8,[x19, x24, LSL #0x0]
7101b0e2c8  orr w9,wzr,#0xffff
7101b0e2cc  strh w9,[x8]
7101b0e2d0  ldr x0,[x19, x24, LSL #0x0]
7101b0e2d4  bl 0x710339ae90
7101b0e2d8  mov x0,x28
7101b0e2dc  mov w1,wzr
7101b0e2e0  mov w2,wzr
7101b0e2e4  bl 0x710339b6b0
7101b0e2e8  ldr w8,[x19, #0x2f4]
7101b0e2ec  cmp x25,x8
7101b0e2f0  b.eq 0x7101b0e2bc
7101b0e2f4  ldr w8,[x19, #0x278]
7101b0e2f8  cmp w8,#0x2
7101b0e2fc  cset w8,eq
7101b0e300  ldr x9,[x19, x24, LSL #0x0]
7101b0e304  strb w8,[x9, #0xa8]
7101b0e308  ldr x1,[x19, #0x270]
7101b0e30c  mov x0,x28
7101b0e310  bl 0x710339bba0
7101b0e314  mov x0,x28
7101b0e318  bl 0x710339ba00
7101b0e31c  ldr x23,[x19, x24, LSL #0x0]
7101b0e320  ldr x8,[x23, #0x18]
7101b0e324  ldr x8,[x8, #0x8]
7101b0e328  cbz x8,0x7101b0e394
7101b0e32c  add x0,x23,#0x10
7101b0e330  sub x8,x29,#0xd0
7101b0e334  adrp x1,0x710439b000
7101b0e338  add x1,x1,#0x9ff
7101b0e33c  bl 0x7103776910
7101b0e340  ldr w3,[x23, #0x50]
7101b0e344  sub x0,x29,#0xd0
7101b0e348  mov w2,#0x1
7101b0e34c  adrp x1,0x7104290000
7101b0e350  add x1,x1,#0x179
7101b0e354  bl 0x710377a280
7101b0e358  ldur x0,[x29, #-0xc8]
7101b0e35c  adrp x8,0x710523d000
7101b0e360  add x8,x8,#0x9a8
7101b0e364  stp x8,xzr,[x29, #-0xd0]
7101b0e368  cbz x0,0x7101b0e370
7101b0e36c  bl 0x710392eb40
7101b0e370  ldr x8,[x19, x24, LSL #0x0]
7101b0e374  ldr x0,[x8, #0x18]
7101b0e378  ldr x9,[x0, #0x8]
7101b0e37c  cbz x9,0x7101b0e394
7101b0e380  ldr s0,[x8, #0x58]
7101b0e384  ucvtf s0,s0
7101b0e388  adrp x1,0x7104464000
7101b0e38c  add x1,x1,#0x398
7101b0e390  bl 0x7103778630
7101b0e394  ldr x28,[sp, #0x2b8]
7101b0e398  str x20,[sp, #0x2b0]
7101b0e39c  str xzr,[sp, #0x2b8]
7101b0e3a0  cbz x28,0x7101b0e3c4
7101b0e3a4  ldr x0,[x28, #0x18]
7101b0e3a8  adrp x8,0x710523d000
7101b0e3ac  add x8,x8,#0x9a8
7101b0e3b0  stp x8,xzr,[x28, #0x10]
7101b0e3b4  cbz x0,0x7101b0e3bc
7101b0e3b8  bl 0x710392eb40
7101b0e3bc  mov x0,x28
7101b0e3c0  bl 0x710392eb40
7101b0e3c4  add x22,x22,#0x14
7101b0e3c8  add x27,x27,#0x1
7101b0e3cc  add x24,x24,#0x8
7101b0e3d0  cmp x22,#0x50
7101b0e3d4  b.ne 0x7101b0e0e4
7101b0e3d8  ldr x0,[x19, #0x3d8]
7101b0e3dc  tbz w26,#0x0,0x7101b0e3ec
7101b0e3e0  adrp x1,0x71042f7000
7101b0e3e4  add x1,x1,#0xe40
7101b0e3e8  b 0x7101b0e3f4
7101b0e3ec  adrp x1,0x7104412000
7101b0e3f0  add x1,x1,#0x4ed
7101b0e3f4  fmov s0,0x3f800000
7101b0e3f8  bl 0x7103778300
7101b0e3fc  str x20,[sp, #0x2f8]
7101b0e400  str xzr,[sp, #0x300]
7101b0e404  cbz x21,0x7101b0e604
7101b0e408  ldr x0,[x21, #0x18]
7101b0e40c  adrp x8,0x710523d000
7101b0e410  add x8,x8,#0x9a8
7101b0e414  stp x8,xzr,[x21, #0x10]
7101b0e418  cbz x0,0x7101b0e420
7101b0e41c  bl 0x710392eb40
7101b0e420  mov x0,x21
7101b0e424  bl 0x710392eb40
7101b0e428  b 0x7101b0e604
7101b0e42c  stp x25,xzr,[x29, #-0xd0]
7101b0e430  cbz x21,0x7101b0e43c
7101b0e434  mov x0,x21
7101b0e438  bl 0x710392eb40
7101b0e43c  ldr x0,[sp, #0x20]
7101b0e440  adrp x1,0x7104349000
7101b0e444  add x1,x1,#0xea0
7101b0e448  add x8,sp,#0x2f8
7101b0e44c  bl 0x7103776640
7101b0e450  adrp x1,0x71042b2000
7101b0e454  add x1,x1,#0x92e
7101b0e458  sub x8,x29,#0xd0
7101b0e45c  add x0,sp,#0x2f8
7101b0e460  bl 0x7103776910
7101b0e464  ldr w3,[x19, #0x390]
7101b0e468  adrp x1,0x7104412000
7101b0e46c  add x1,x1,#0x501
7101b0e470  sub x0,x29,#0xd0
7101b0e474  mov w2,#0x1
7101b0e478  bl 0x710377a280
7101b0e47c  ldur x0,[x29, #-0xc8]
7101b0e480  adrp x8,0x710523d000
7101b0e484  add x8,x8,#0x9a8
7101b0e488  stp x8,xzr,[x29, #-0xd0]
7101b0e48c  cbz x0,0x7101b0e494
7101b0e490  bl 0x710392eb40
7101b0e494  ldr x21,[sp, #0x300]
7101b0e498  adrp x20,0x710523d000
7101b0e49c  add x20,x20,#0x988
7101b0e4a0  str x20,[sp, #0x2f8]
7101b0e4a4  str xzr,[sp, #0x300]
7101b0e4a8  cbz x21,0x7101b0e4cc
7101b0e4ac  ldr x0,[x21, #0x18]
7101b0e4b0  adrp x8,0x710523d000
7101b0e4b4  add x8,x8,#0x9a8
7101b0e4b8  stp x8,xzr,[x21, #0x10]
7101b0e4bc  cbz x0,0x7101b0e4c4
7101b0e4c0  bl 0x710392eb40
7101b0e4c4  mov x0,x21
7101b0e4c8  bl 0x710392eb40
7101b0e4cc  ldr x0,[sp, #0x20]
7101b0e4d0  adrp x1,0x7104339000
7101b0e4d4  add x1,x1,#0xd0b
7101b0e4d8  add x8,sp,#0x2f8
7101b0e4dc  bl 0x7103776640
7101b0e4e0  adrp x1,0x71042b2000
7101b0e4e4  add x1,x1,#0x92e
7101b0e4e8  sub x8,x29,#0xd0
7101b0e4ec  add x0,sp,#0x2f8
7101b0e4f0  bl 0x7103776910
7101b0e4f4  ldr w3,[x19, #0x394]
7101b0e4f8  adrp x1,0x7104280000
7101b0e4fc  add x1,x1,#0x5fc
7101b0e500  sub x0,x29,#0xd0
7101b0e504  mov w2,#0x1
7101b0e508  bl 0x710377a280
7101b0e50c  ldur x0,[x29, #-0xc8]
7101b0e510  adrp x8,0x710523d000
7101b0e514  add x8,x8,#0x9a8
7101b0e518  stp x8,xzr,[x29, #-0xd0]
7101b0e51c  cbz x0,0x7101b0e524
7101b0e520  bl 0x710392eb40
7101b0e524  ldr x21,[sp, #0x300]
7101b0e528  str x20,[sp, #0x2f8]
7101b0e52c  str xzr,[sp, #0x300]
7101b0e530  cbz x21,0x7101b0e554
7101b0e534  ldr x0,[x21, #0x18]
7101b0e538  adrp x8,0x710523d000
7101b0e53c  add x8,x8,#0x9a8
7101b0e540  stp x8,xzr,[x21, #0x10]
7101b0e544  cbz x0,0x7101b0e54c
7101b0e548  bl 0x710392eb40
7101b0e54c  mov x0,x21
7101b0e550  bl 0x710392eb40
7101b0e554  ldr x0,[sp, #0x20]
7101b0e558  adrp x1,0x71042e6000
7101b0e55c  add x1,x1,#0xc5c
7101b0e560  add x8,sp,#0x2f8
7101b0e564  bl 0x7103776640
7101b0e568  adrp x1,0x71042b2000
7101b0e56c  add x1,x1,#0x92e
7101b0e570  sub x8,x29,#0xd0
7101b0e574  add x0,sp,#0x2f8
7101b0e578  bl 0x7103776910
7101b0e57c  ldr w3,[x19, #0x398]
7101b0e580  adrp x1,0x710438c000
7101b0e584  add x1,x1,#0x4c4
7101b0e588  sub x0,x29,#0xd0
7101b0e58c  mov w2,#0x1
7101b0e590  bl 0x710377a280
7101b0e594  ldur x0,[x29, #-0xc8]
7101b0e598  adrp x8,0x710523d000
7101b0e59c  add x8,x8,#0x9a8
7101b0e5a0  stp x8,xzr,[x29, #-0xd0]
7101b0e5a4  cbz x0,0x7101b0e5ac
7101b0e5a8  bl 0x710392eb40
7101b0e5ac  str x20,[sp, #0x2f8]
7101b0e5b0  ldr x20,[sp, #0x300]
7101b0e5b4  str xzr,[sp, #0x300]
7101b0e5b8  cbz x20,0x7101b0e5dc
7101b0e5bc  ldr x0,[x20, #0x18]
7101b0e5c0  adrp x8,0x710523d000
7101b0e5c4  add x8,x8,#0x9a8
7101b0e5c8  stp x8,xzr,[x20, #0x10]
7101b0e5cc  cbz x0,0x7101b0e5d4
7101b0e5d0  bl 0x710392eb40
7101b0e5d4  mov x0,x20
7101b0e5d8  bl 0x710392eb40
7101b0e5dc  ldrb w8,[x19, #0x38c]
7101b0e5e0  ldr x0,[x19, #0x3d8]
7101b0e5e4  cbz w8,0x7101b0e5f4
7101b0e5e8  adrp x1,0x710438c000
7101b0e5ec  add x1,x1,#0x4d8
7101b0e5f0  b 0x7101b0e5fc
7101b0e5f4  adrp x1,0x7104412000
7101b0e5f8  add x1,x1,#0x514
7101b0e5fc  fmov s0,0x3f800000
7101b0e600  bl 0x7103778300
7101b0e604  ldp x8,x9,[x19, #0x10]
7101b0e608  cmp x9,x8
7101b0e60c  b.eq 0x7101b0e93c
7101b0e610  ldr x8,[x8]
7101b0e614  ldr x8,[x8]
7101b0e618  ldr x8,[x8]
7101b0e61c  ldr x0,[x8]
7101b0e620  mov w1,wzr
7101b0e624  bl 0x71037760f0
7101b0e628  ldr x8,[x19, #0x40]
7101b0e62c  cbz x8,0x7101b0e664
7101b0e630  ldr x8,[x8]
7101b0e634  cbz x8,0x7101b0e640
7101b0e638  ldr x0,[x8]
7101b0e63c  b 0x7101b0e644
7101b0e640  mov x0,xzr
7101b0e644  ldp x8,x9,[x19, #0x10]
7101b0e648  cmp x9,x8
7101b0e64c  b.eq 0x7101b0e93c
7101b0e650  ldr x8,[x8]
7101b0e654  ldr x2,[x8]
7101b0e658  adrp x1,0x7104270000
7101b0e65c  add x1,x1,#0x556
7101b0e660  bl 0x71033743c0
7101b0e664  ldr x20,[sp, #0x28]
7101b0e668  cbz x20,0x7101b0e6a0
7101b0e66c  ldr x19,[sp, #0x30]
7101b0e670  cmp x19,x20
7101b0e674  b.eq 0x7101b0e8d0
7101b0e678  ldr x8,[x19, #-0x10]!
7101b0e67c  ldr x8,[x8]
7101b0e680  mov x0,x19
7101b0e684  blr x8
7101b0e688  cmp x20,x19
7101b0e68c  b.ne 0x7101b0e678
7101b0e690  ldr x0,[sp, #0x28]
7101b0e694  str x20,[sp, #0x30]
7101b0e698  cbz x0,0x7101b0e6a0
7101b0e69c  bl 0x710392eb40
7101b0e6a0  ldr x0,[sp, #0x150]
7101b0e6a4  add x8,sp,#0x40
7101b0e6a8  add x8,x8,#0xf0
7101b0e6ac  cmp x8,x0
7101b0e6b0  b.eq 0x7101b0e6c4
7101b0e6b4  cbz x0,0x7101b0e6d0
7101b0e6b8  ldr x8,[x0]
7101b0e6bc  ldr x8,[x8, #0x28]
7101b0e6c0  b 0x7101b0e6cc
7101b0e6c4  ldr x8,[x0]
7101b0e6c8  ldr x8,[x8, #0x20]
7101b0e6cc  blr x8
7101b0e6d0  ldr x0,[sp, #0x120]
7101b0e6d4  add x8,sp,#0x40
7101b0e6d8  add x8,x8,#0xc0
7101b0e6dc  cmp x8,x0
7101b0e6e0  b.eq 0x7101b0e6f4
7101b0e6e4  cbz x0,0x7101b0e700
7101b0e6e8  ldr x8,[x0]
7101b0e6ec  ldr x8,[x8, #0x28]
7101b0e6f0  b 0x7101b0e6fc
7101b0e6f4  ldr x8,[x0]
7101b0e6f8  ldr x8,[x8, #0x20]
7101b0e6fc  blr x8
7101b0e700  ldr x0,[sp, #0xf0]
7101b0e704  add x8,sp,#0x40
7101b0e708  add x8,x8,#0x90
7101b0e70c  cmp x8,x0
7101b0e710  b.eq 0x7101b0e724
7101b0e714  cbz x0,0x7101b0e730
7101b0e718  ldr x8,[x0]
7101b0e71c  ldr x8,[x8, #0x28]
7101b0e720  b 0x7101b0e72c
7101b0e724  ldr x8,[x0]
7101b0e728  ldr x8,[x8, #0x20]
7101b0e72c  blr x8
7101b0e730  ldr x0,[sp, #0xc0]
7101b0e734  add x8,sp,#0x40
7101b0e738  add x8,x8,#0x60
7101b0e73c  cmp x8,x0
7101b0e740  b.eq 0x7101b0e754
7101b0e744  cbz x0,0x7101b0e760
7101b0e748  ldr x8,[x0]
7101b0e74c  ldr x8,[x8, #0x28]
7101b0e750  b 0x7101b0e75c
7101b0e754  ldr x8,[x0]
7101b0e758  ldr x8,[x8, #0x20]
7101b0e75c  blr x8
7101b0e760  ldr x0,[sp, #0x90]
7101b0e764  add x8,sp,#0x40
7101b0e768  add x8,x8,#0x30
7101b0e76c  cmp x8,x0
7101b0e770  b.eq 0x7101b0e784
7101b0e774  cbz x0,0x7101b0e790
7101b0e778  ldr x8,[x0]
7101b0e77c  ldr x8,[x8, #0x28]
7101b0e780  b 0x7101b0e78c
7101b0e784  ldr x8,[x0]
7101b0e788  ldr x8,[x8, #0x20]
7101b0e78c  blr x8
7101b0e790  ldr x0,[sp, #0x168]
7101b0e794  adrp x19,0x710523d000
7101b0e798  add x19,x19,#0x9c8
7101b0e79c  stp x19,xzr,[sp, #0x160]
7101b0e7a0  cbz x0,0x7101b0e7a8
7101b0e7a4  bl 0x710392eb40
7101b0e7a8  ldr x0,[sp, #0x178]
7101b0e7ac  stp x19,xzr,[sp, #0x170]
7101b0e7b0  cbz x0,0x7101b0e7b8
7101b0e7b4  bl 0x710392eb40
7101b0e7b8  ldr x0,[sp, #0x290]
7101b0e7bc  add x8,sp,#0x180
7101b0e7c0  add x8,x8,#0xf0
7101b0e7c4  cmp x8,x0
7101b0e7c8  b.eq 0x7101b0e7dc
7101b0e7cc  cbz x0,0x7101b0e7e8
7101b0e7d0  ldr x8,[x0]
7101b0e7d4  ldr x8,[x8, #0x28]
7101b0e7d8  b 0x7101b0e7e4
7101b0e7dc  ldr x8,[x0]
7101b0e7e0  ldr x8,[x8, #0x20]
7101b0e7e4  blr x8
7101b0e7e8  ldr x0,[sp, #0x260]
7101b0e7ec  add x8,sp,#0x180
7101b0e7f0  add x8,x8,#0xc0
7101b0e7f4  cmp x8,x0
7101b0e7f8  b.eq 0x7101b0e80c
7101b0e7fc  cbz x0,0x7101b0e818
7101b0e800  ldr x8,[x0]
7101b0e804  ldr x8,[x8, #0x28]
7101b0e808  b 0x7101b0e814
7101b0e80c  ldr x8,[x0]
7101b0e810  ldr x8,[x8, #0x20]
7101b0e814  blr x8
7101b0e818  ldr x0,[sp, #0x230]
7101b0e81c  add x8,sp,#0x180
7101b0e820  add x8,x8,#0x90
7101b0e824  cmp x8,x0
7101b0e828  b.eq 0x7101b0e83c
7101b0e82c  cbz x0,0x7101b0e848
7101b0e830  ldr x8,[x0]
7101b0e834  ldr x8,[x8, #0x28]
7101b0e838  b 0x7101b0e844
7101b0e83c  ldr x8,[x0]
7101b0e840  ldr x8,[x8, #0x20]
7101b0e844  blr x8
7101b0e848  ldr x0,[sp, #0x200]
7101b0e84c  add x8,sp,#0x180
7101b0e850  add x8,x8,#0x60
7101b0e854  cmp x8,x0
7101b0e858  b.eq 0x7101b0e86c
7101b0e85c  cbz x0,0x7101b0e878
7101b0e860  ldr x8,[x0]
7101b0e864  ldr x8,[x8, #0x28]
7101b0e868  b 0x7101b0e874
7101b0e86c  ldr x8,[x0]
7101b0e870  ldr x8,[x8, #0x20]
7101b0e874  blr x8
7101b0e878  ldr x0,[sp, #0x1d0]
7101b0e87c  add x8,sp,#0x180
7101b0e880  add x8,x8,#0x30
7101b0e884  cmp x8,x0
7101b0e888  b.eq 0x7101b0e89c
7101b0e88c  cbz x0,0x7101b0e8a8
7101b0e890  ldr x8,[x0]
7101b0e894  ldr x8,[x8, #0x28]
7101b0e898  b 0x7101b0e8a4
7101b0e89c  ldr x8,[x0]
7101b0e8a0  ldr x8,[x8, #0x20]
7101b0e8a4  blr x8
7101b0e8a8  add sp,sp,#0x3a0
7101b0e8ac  ldp d9,d8,[sp, #0x10]
7101b0e8b0  ldp x29,x30,[sp, #0x70]
7101b0e8b4  ldp x20,x19,[sp, #0x60]
7101b0e8b8  ldp x22,x21,[sp, #0x50]
7101b0e8bc  ldp x24,x23,[sp, #0x40]
7101b0e8c0  ldp x26,x25,[sp, #0x30]
7101b0e8c4  ldp x28,x27,[sp, #0x20]
7101b0e8c8  ldp d11,d10,[sp], #0x80
7101b0e8cc  ret
7101b0e8d0  mov x0,x20
7101b0e8d4  str x20,[sp, #0x30]
7101b0e8d8  cbnz x0,0x7101b0e69c
7101b0e8dc  b 0x7101b0e6a0
7101b0e8e0  add w10,w10,#0x1
7101b0e8e4  add x11,x8,#0x10
7101b0e8e8  strb wzr,[x11, w10, UXTW ]
7101b0e8ec  str w10,[x8, #0xc]
7101b0e8f0  ldrb w10,[x8, #0x10]
7101b0e8f4  mov w12,w16
7101b0e8f8  cbz w10,0x7101b0e918
7101b0e8fc  add x11,x8,#0x11
7101b0e900  mov w12,w16
7101b0e904  mul w12,w12,w9
7101b0e908  and w10,w10,#0xff
7101b0e90c  eor w12,w12,w10
7101b0e910  ldrb w10,[x11], #0x1
7101b0e914  cbnz w10,0x7101b0e904
7101b0e918  str w12,[x8, #0x8]
7101b0e91c  ldr x8,[x19, #0x4f0]
7101b0e920  add x8,x8,#0x50
7101b0e924  str x8,[x19, #0x4f0]
7101b0e928  tst w22,#0x7800
7101b0e92c  b.ne 0x7101b0dcdc
7101b0e930  b 0x7101b0ded0
7101b0e934  mov x0,x24
7101b0e938  bl 0x71039c1330
7101b0e93c  ldr x0,[sp, #0x8]
7101b0e940  bl 0x71039c1330
7101b0e944  bl 0x71039c2650
7101b0e948  add x0,x21,#0x3b0
7101b0e94c  bl 0x71039c0c00
