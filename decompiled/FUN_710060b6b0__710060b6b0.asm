// addr:      710060b6b0
// offset:    0x60b6b0
// name:      FUN_710060b6b0
// mangled:   
// size:      10412

710060b6b0  stp x28,x27,[sp, #-0x60]!
710060b6b4  stp x26,x25,[sp, #0x10]
710060b6b8  stp x24,x23,[sp, #0x20]
710060b6bc  stp x22,x21,[sp, #0x30]
710060b6c0  stp x20,x19,[sp, #0x40]
710060b6c4  stp x29,x30,[sp, #0x50]
710060b6c8  add x29,sp,#0x50
710060b6cc  sub sp,sp,#0x9a0
710060b6d0  ldrsw x8,[x0, #0x10]
710060b6d4  cmp w8,#0x8
710060b6d8  b.cs 0x710060df44
710060b6dc  adrp x22,0x71052b9000
710060b6e0  ldr x9,[x22, #0x4f8]
710060b6e4  ldr x9,[x9]
710060b6e8  add x8,x9,x8, LSL #0x3
710060b6ec  ldr x21,[x0, #0x440]
710060b6f0  ldr x20,[x0, #0x20]
710060b6f4  ldr x28,[x8, #0x20]
710060b6f8  mov x19,x0
710060b6fc  bl 0x710353d580
710060b700  tbnz w0,#0x0,0x710060b70c
710060b704  mov w8,#0x1
710060b708  strb w8,[x20, #0x30]
710060b70c  orr w8,wzr,#0x3
710060b710  strb w8,[x19, #0x3a]
710060b714  orr w8,wzr,#0xff
710060b718  strb w8,[x19, #0x3c]
710060b71c  orr w8,wzr,#0x3f800000
710060b720  str x8,[sp, #0x880]
710060b724  orr x8,xzr,#0x3f80000000000000
710060b728  str x8,[sp, #0x888]
710060b72c  mov x8,#0x3f800000
710060b730  movk x8,#0xd3d4, LSL #32
710060b734  movk x8,#0x3f53, LSL #48
710060b738  str x8,[sp, #0x870]
710060b73c  mov x8,#0xadae
710060b740  movk x8,#0x3f2d, LSL #16
710060b744  movk x8,#0x3f80, LSL #48
710060b748  str x8,[sp, #0x878]
710060b74c  ldr w8,[x19, #0xc]
710060b750  sub w8,w8,#0x48
710060b754  cmp w8,#0x2
710060b758  b.hi 0x710060b948
710060b75c  ldrsw x8,[x19, #0x10]
710060b760  cmp w8,#0x8
710060b764  b.cs 0x710060df44
710060b768  ldr x9,[x22, #0x4f8]
710060b76c  adrp x22,0x710593b000
710060b770  ldr x9,[x9]
710060b774  add x8,x9,x8, LSL #0x3
710060b778  ldr x9,[x22, #0x6a0]
710060b77c  ldr x20,[x8, #0x20]
710060b780  ldr x9,[x9]
710060b784  ldr x8,[x20, #0xf8]
710060b788  ldr x11,[x9, #0x24d8]
710060b78c  ldr x10,[x9, #0x24d0]
710060b790  sub x11,x11,x10
710060b794  mov x23,#0x4ec5
710060b798  movk x23,#0xc4ec, LSL #16
710060b79c  movk x23,#0xec4e, LSL #32
710060b7a0  movk x23,#0x4ec4, LSL #48
710060b7a4  ldrh w8,[x8, #0x72]
710060b7a8  asr x11,x11,#0x3
710060b7ac  mul x11,x11,x23
710060b7b0  cmp x11,x8
710060b7b4  b.ls 0x710060df48
710060b7b8  mov w9,#0x68
710060b7bc  madd x8,x8,x9,x10
710060b7c0  ldr x11,[x8, #0x10]
710060b7c4  ldp x9,x10,[x8]
710060b7c8  str x11,[sp, #0x8a0]
710060b7cc  str x10,[sp, #0x898]
710060b7d0  str x9,[sp, #0x890]
710060b7d4  add x0,sp,#0x20
710060b7d8  ldp x9,x10,[x8, #0x18]
710060b7dc  add x1,sp,#0x890
710060b7e0  ldp x11,x12,[x8, #0x28]
710060b7e4  str x12,[sp, #0x8c0]
710060b7e8  str x11,[sp, #0x8b8]
710060b7ec  str x10,[sp, #0x8b0]
710060b7f0  str x9,[sp, #0x8a8]
710060b7f4  ldp x9,x10,[x8, #0x38]
710060b7f8  ldp x11,x8,[x8, #0x48]
710060b7fc  str x8,[sp, #0x8e0]
710060b800  str x11,[sp, #0x8d8]
710060b804  str x10,[sp, #0x8d0]
710060b808  str x9,[sp, #0x8c8]
710060b80c  bl 0x71039c2930
710060b810  add x0,sp,#0x20
710060b814  bl 0x71039c2940
710060b818  tbz w0,#0x0,0x710060b8e0
710060b81c  ldr x9,[x22, #0x6a0]
710060b820  ldr x9,[x9]
710060b824  ldr x11,[x9, #0x24d8]
710060b828  ldr x10,[x9, #0x24d0]
710060b82c  ldr x8,[x20, #0xf8]
710060b830  ldrh w8,[x8, #0x72]
710060b834  sub x11,x11,x10
710060b838  asr x11,x11,#0x3
710060b83c  mul x11,x11,x23
710060b840  cmp x11,x8
710060b844  b.ls 0x710060df48
710060b848  mov w9,#0x68
710060b84c  madd x20,x8,x9,x10
710060b850  add x0,sp,#0x20
710060b854  mov x1,x20
710060b858  bl 0x71039c2930
710060b85c  add x0,sp,#0x20
710060b860  bl 0x71039c2970
710060b864  mov w1,wzr
710060b868  bl 0x71039c2980
710060b86c  adrp x8,0x7104473000
710060b870  ldp s0,s1,[x0]
710060b874  ldr s3,[x8, #0x844]
710060b878  fmul s0,s0,s3
710060b87c  ldr s2,[x0, #0x8]
710060b880  fcvtzs w8,s0
710060b884  fmul s0,s2,s3
710060b888  fcvtzs w10,s0
710060b88c  fmul s5,s1,s3
710060b890  ucvtf s0,w8
710060b894  adrp x8,0x7104472000
710060b898  fcvtzs w9,s5
710060b89c  ldr s3,[x8, #0xc34]
710060b8a0  ucvtf s1,w9
710060b8a4  fdiv s1,s1,s3
710060b8a8  fdiv s0,s0,s3
710060b8ac  ucvtf s2,w10
710060b8b0  orr w8,wzr,#0x3f800000
710060b8b4  str w8,[sp, #0x87c]
710060b8b8  str s0,[sp, #0x870]
710060b8bc  fdiv s0,s2,s3
710060b8c0  add x0,sp,#0x20
710060b8c4  mov x1,x20
710060b8c8  str s1,[sp, #0x874]
710060b8cc  str s0,[sp, #0x878]
710060b8d0  bl 0x71039c2930
710060b8d4  add x0,sp,#0x20
710060b8d8  bl 0x71039c2990
710060b8dc  b 0x710060b8e4
710060b8e0  mov w0,wzr
710060b8e4  mov w1,wzr
710060b8e8  bl 0x71039c16d0
710060b8ec  adrp x8,0x7104473000
710060b8f0  ldp s0,s1,[x0]
710060b8f4  ldr s3,[x8, #0x844]
710060b8f8  fmul s0,s0,s3
710060b8fc  ldr s2,[x0, #0x8]
710060b900  fcvtzs w8,s0
710060b904  fmul s0,s2,s3
710060b908  fcvtzs w10,s0
710060b90c  fmul s5,s1,s3
710060b910  ucvtf s0,w8
710060b914  adrp x8,0x7104472000
710060b918  fcvtzs w9,s5
710060b91c  ldr s3,[x8, #0xc34]
710060b920  ucvtf s1,w9
710060b924  fdiv s1,s1,s3
710060b928  fdiv s0,s0,s3
710060b92c  ucvtf s2,w10
710060b930  orr w8,wzr,#0x3f800000
710060b934  str w8,[sp, #0x88c]
710060b938  str s0,[sp, #0x880]
710060b93c  fdiv s0,s2,s3
710060b940  str s1,[sp, #0x884]
710060b944  str s0,[sp, #0x888]
710060b948  ldrsw x8,[x19, #0x10]
710060b94c  cmp w8,#0x8
710060b950  b.cs 0x710060df44
710060b954  adrp x27,0x7105324000
710060b958  ldr x23,[x27, #0x680]
710060b95c  add x8,x23,x8, LSL #0x3
710060b960  ldr x20,[x8, #0xe8]
710060b964  add x22,x23,#0xc8
710060b968  mov x0,x22
710060b96c  bl 0x71039c1a40
710060b970  ldr x24,[x23, #0x60]
710060b974  mov x0,x22
710060b978  bl 0x71039c1a50
710060b97c  ldr w2,[x19, #0xc]
710060b980  ldrb w3,[x28, #0x41]
710060b984  add x0,sp,#0x868
710060b988  mov x1,x20
710060b98c  bl 0x71017e99c0
710060b990  ldr w8,[x19, #0xc]
710060b994  sub w8,w8,#0x4e
710060b998  cmp w8,#0x2
710060b99c  b.hi 0x710060bc00
710060b9a0  ldrb w8,[x20, #0x48]
710060b9a4  cmp w8,#0x2
710060b9a8  b.ne 0x710060bc00
710060b9ac  ldr w25,[x19, #0x10]
710060b9b0  cmp w25,#0x8
710060b9b4  b.cs 0x710060df44
710060b9b8  adrp x9,0x71052b9000
710060b9bc  ldr x9,[x9, #0x4f8]
710060b9c0  ldr x9,[x9]
710060b9c4  sxtw x8,w25
710060b9c8  add x8,x9,x8, LSL #0x3
710060b9cc  ldr x22,[x8, #0x20]
710060b9d0  adrp x8,0x71052c3000
710060b9d4  ldr x8,[x8, #0x6c8]
710060b9d8  cbz x8,0x710060ba1c
710060b9dc  adrp x8,0x71052c3000
710060b9e0  ldr x26,[x8, #0x6d0]
710060b9e4  cbz x26,0x710060ba1c
710060b9e8  ldr x23,[x26, #0x8]
710060b9ec  add x22,x23,#0xf0
710060b9f0  mov x0,x22
710060b9f4  bl 0x71039c1a40
710060b9f8  ldr w8,[x23, #0x20]
710060b9fc  cmp w8,w25
710060ba00  b.ne 0x710060bb10
710060ba04  cbnz x23,0x710060bb4c
710060ba08  mov x0,x23
710060ba0c  bl 0x71014cdf90
710060ba10  cbz x0,0x710060bb4c
710060ba14  str w25,[x0, #0x20]
710060ba18  b 0x710060bb4c
710060ba1c  adrp x23,0x710593b000
710060ba20  ldr x9,[x23, #0x6a0]
710060ba24  ldr x9,[x9]
710060ba28  ldr x11,[x9, #0x24d8]
710060ba2c  ldr x10,[x9, #0x24d0]
710060ba30  ldr x8,[x22, #0xf8]
710060ba34  ldrh w8,[x8, #0x72]
710060ba38  sub x11,x11,x10
710060ba3c  mov x25,#0x4ec5
710060ba40  movk x25,#0xc4ec, LSL #16
710060ba44  movk x25,#0xec4e, LSL #32
710060ba48  movk x25,#0x4ec4, LSL #48
710060ba4c  asr x11,x11,#0x3
710060ba50  mul x11,x11,x25
710060ba54  cmp x11,x8
710060ba58  b.ls 0x710060df48
710060ba5c  mov w9,#0x68
710060ba60  madd x8,x8,x9,x10
710060ba64  ldr x11,[x8, #0x10]
710060ba68  ldp x9,x10,[x8]
710060ba6c  str x11,[sp, #0x8a0]
710060ba70  str x10,[sp, #0x898]
710060ba74  str x9,[sp, #0x890]
710060ba78  add x0,sp,#0x20
710060ba7c  ldp x9,x10,[x8, #0x18]
710060ba80  add x1,sp,#0x890
710060ba84  ldp x11,x12,[x8, #0x28]
710060ba88  str x12,[sp, #0x8c0]
710060ba8c  str x11,[sp, #0x8b8]
710060ba90  str x10,[sp, #0x8b0]
710060ba94  str x9,[sp, #0x8a8]
710060ba98  ldp x9,x10,[x8, #0x38]
710060ba9c  ldp x11,x8,[x8, #0x48]
710060baa0  str x8,[sp, #0x8e0]
710060baa4  str x11,[sp, #0x8d8]
710060baa8  str x10,[sp, #0x8d0]
710060baac  str x9,[sp, #0x8c8]
710060bab0  bl 0x71039c2930
710060bab4  add x0,sp,#0x20
710060bab8  bl 0x71039c2940
710060babc  tbz w0,#0x0,0x710060bc00
710060bac0  ldr x9,[x23, #0x6a0]
710060bac4  ldr x9,[x9]
710060bac8  ldr x11,[x9, #0x24d8]
710060bacc  ldr x10,[x9, #0x24d0]
710060bad0  ldr x8,[x22, #0xf8]
710060bad4  ldrh w8,[x8, #0x72]
710060bad8  sub x11,x11,x10
710060badc  asr x11,x11,#0x3
710060bae0  mul x11,x11,x25
710060bae4  cmp x11,x8
710060bae8  b.ls 0x710060df48
710060baec  mov w9,#0x68
710060baf0  madd x1,x8,x9,x10
710060baf4  add x0,sp,#0x20
710060baf8  bl 0x71039c2930
710060bafc  add x0,sp,#0x20
710060bb00  bl 0x71039c29a0
710060bb04  cmp w0,#0x1
710060bb08  b.eq 0x710060bbe4
710060bb0c  b 0x710060bc00
710060bb10  ldr w8,[x23, #0x48]
710060bb14  cmp w8,w25
710060bb18  b.eq 0x710060bb4c
710060bb1c  ldr w8,[x23, #0x70]
710060bb20  cmp w8,w25
710060bb24  b.eq 0x710060bb4c
710060bb28  ldr w8,[x23, #0x98]
710060bb2c  cmp w8,w25
710060bb30  b.eq 0x710060bb4c
710060bb34  ldr w8,[x23, #0xc0]
710060bb38  cmp w8,w25
710060bb3c  b.eq 0x710060bb4c
710060bb40  ldr w8,[x23, #0xe8]
710060bb44  cmp w8,w25
710060bb48  b.ne 0x710060ba08
710060bb4c  mov x0,x22
710060bb50  bl 0x71039c1a50
710060bb54  ldr x23,[x26, #0x8]
710060bb58  ldr w25,[x19, #0x10]
710060bb5c  add x22,x23,#0xf0
710060bb60  mov x0,x22
710060bb64  bl 0x71039c1a40
710060bb68  ldr w8,[x23, #0x20]
710060bb6c  cmp w8,w25
710060bb70  b.eq 0x710060bbd4
710060bb74  ldr w8,[x23, #0x48]
710060bb78  cmp w8,w25
710060bb7c  b.ne 0x710060bb88
710060bb80  add x23,x23,#0x28
710060bb84  b 0x710060bbd4
710060bb88  ldr w8,[x23, #0x70]
710060bb8c  cmp w8,w25
710060bb90  b.ne 0x710060bb9c
710060bb94  add x23,x23,#0x50
710060bb98  b 0x710060bbd4
710060bb9c  ldr w8,[x23, #0x98]
710060bba0  cmp w8,w25
710060bba4  b.ne 0x710060bbb0
710060bba8  add x23,x23,#0x78
710060bbac  b 0x710060bbd4
710060bbb0  ldr w8,[x23, #0xc0]
710060bbb4  cmp w8,w25
710060bbb8  b.ne 0x710060bbc4
710060bbbc  add x23,x23,#0xa0
710060bbc0  b 0x710060bbd4
710060bbc4  ldr w8,[x23, #0xe8]
710060bbc8  cmp w8,w25
710060bbcc  b.ne 0x710060bec0
710060bbd0  add x23,x23,#0xc8
710060bbd4  ldrb w23,[x23, #0x24]
710060bbd8  mov x0,x22
710060bbdc  bl 0x71039c1a50
710060bbe0  cbnz w23,0x710060bc00
710060bbe4  ldr w2,[x19, #0xc]
710060bbe8  add x0,sp,#0x20
710060bbec  mov w3,#0x1
710060bbf0  mov x1,x20
710060bbf4  bl 0x71017e99c0
710060bbf8  ldr w8,[sp, #0x20]
710060bbfc  str w8,[sp, #0x868]
710060bc00  ldrsw x23,[x19, #0x10]
710060bc04  cmp w23,#0x8
710060bc08  b.cs 0x710060df44
710060bc0c  ldr x8,[x27, #0x680]
710060bc10  add x8,x8,x23
710060bc14  ldrb w25,[x8, #0x128]
710060bc18  adrp x8,0x71052b9000
710060bc1c  ldr x8,[x8, #0x450]
710060bc20  ldr w22,[x19, #0xc]
710060bc24  cmp w22,#0x52
710060bc28  ldr x26,[x8]
710060bc2c  b.eq 0x710060bc40
710060bc30  cmp w22,#0x4c
710060bc34  b.ne 0x710060bf24
710060bc38  mov w22,#0x4b
710060bc3c  b 0x710060bf24
710060bc40  adrp x1,0x71043ce000
710060bc44  add x1,x1,#0xc11
710060bc48  add x0,sp,#0x20
710060bc4c  add x22,sp,#0x890
710060bc50  strh wzr,[sp, #0x120]
710060bc54  strb wzr,[sp, #0x20]
710060bc58  bl 0x710147f330
710060bc5c  ldrh w11,[sp, #0x120]
710060bc60  strb wzr,[sp, #0x890]
710060bc64  strh wzr,[sp, #0x990]
710060bc68  cbz x11,0x710060bc88
710060bc6c  and x8,x11,#0x1
710060bc70  cmp w11,#0x1
710060bc74  b.ne 0x710060bc90
710060bc78  mov w9,wzr
710060bc7c  add x10,sp,#0x20
710060bc80  cbnz x8,0x710060bcdc
710060bc84  b 0x710060bcf4
710060bc88  add x8,sp,#0x890
710060bc8c  b 0x710060bcfc
710060bc90  mov w9,wzr
710060bc94  add x10,sp,#0x20
710060bc98  sub x11,x8,x11
710060bc9c  add x12,sp,#0x890
710060bca0  ldrb w13,[x10]
710060bca4  add w14,w9,#0x1
710060bca8  and x9,x9,#0xffff
710060bcac  strh w14,[sp, #0x990]
710060bcb0  strb w13,[x12, x9, LSL ]
710060bcb4  ldrh w9,[sp, #0x990]
710060bcb8  ldrb w13,[x10, #0x1]
710060bcbc  add x10,x10,#0x2
710060bcc0  add w14,w9,#0x1
710060bcc4  strh w14,[sp, #0x990]
710060bcc8  adds x11,x11,#0x2
710060bccc  strb w13,[x12, x9, LSL ]
710060bcd0  ldrh w9,[sp, #0x990]
710060bcd4  b.ne 0x710060bca0
710060bcd8  cbz x8,0x710060bcf4
710060bcdc  ldrb w8,[x10]
710060bce0  add w10,w9,#0x1
710060bce4  strh w10,[sp, #0x990]
710060bce8  add x10,sp,#0x890
710060bcec  strb w8,[x10, w9, UXTW ]
710060bcf0  ldrh w9,[sp, #0x990]
710060bcf4  add x8,sp,#0x890
710060bcf8  add x8,x8,w9, UXTH 
710060bcfc  strb wzr,[x8]
710060bd00  ldrh w8,[sp, #0x990]
710060bd04  add w9,w8,#0x1
710060bd08  strh w9,[sp, #0x990]
710060bd0c  mov w9,#0x6a
710060bd10  add x0,sp,#0x20
710060bd14  strb w9,[x22, x8, LSL ]
710060bd18  ldrh w8,[sp, #0x990]
710060bd1c  add w9,w8,#0x1
710060bd20  strh w9,[sp, #0x990]
710060bd24  mov w9,#0x61
710060bd28  strb w9,[x22, x8, LSL ]
710060bd2c  ldrh w8,[sp, #0x990]
710060bd30  add w9,w8,#0x1
710060bd34  strh w9,[sp, #0x990]
710060bd38  mov w9,#0x63
710060bd3c  strb w9,[x22, x8, LSL ]
710060bd40  ldrh w8,[sp, #0x990]
710060bd44  add w10,w8,#0x1
710060bd48  strh w10,[sp, #0x990]
710060bd4c  mov w10,#0x6b
710060bd50  strb w10,[x22, x8, LSL ]
710060bd54  ldrh w8,[sp, #0x990]
710060bd58  add w10,w8,#0x1
710060bd5c  strh w10,[sp, #0x990]
710060bd60  mov w10,#0x5f
710060bd64  strb w10,[x22, x8, LSL ]
710060bd68  ldrh w8,[sp, #0x990]
710060bd6c  add w10,w8,#0x1
710060bd70  strh w10,[sp, #0x990]
710060bd74  add x1,sp,#0x890
710060bd78  strb w9,[x22, x8, LSL ]
710060bd7c  ldrh w8,[sp, #0x990]
710060bd80  add w9,w8,#0x1
710060bd84  strh w9,[sp, #0x990]
710060bd88  mov w9,#0x75
710060bd8c  strb w9,[x22, x8, LSL ]
710060bd90  ldrh w8,[sp, #0x990]
710060bd94  add w9,w8,#0x1
710060bd98  strh w9,[sp, #0x990]
710060bd9c  mov w9,#0x74
710060bda0  strb w9,[x22, x8, LSL ]
710060bda4  ldrh w8,[sp, #0x990]
710060bda8  add w9,w8,#0x1
710060bdac  strh w9,[sp, #0x990]
710060bdb0  mov w9,#0x69
710060bdb4  strb w9,[x22, x8, LSL ]
710060bdb8  ldrh w8,[sp, #0x990]
710060bdbc  add w9,w8,#0x1
710060bdc0  strh w9,[sp, #0x990]
710060bdc4  mov w9,#0x6e
710060bdc8  strb w9,[x22, x8, LSL ]
710060bdcc  ldrh w8,[sp, #0x990]
710060bdd0  strb wzr,[x22, x8, LSL ]
710060bdd4  bl 0x710353e8e0
710060bdd8  ldr w1,[sp, #0x20]
710060bddc  mov x2,#0xd895
710060bde0  movk x2,#0x262b, LSL #16
710060bde4  movk x2,#0x3, LSL #32
710060bde8  add x0,sp,#0x820
710060bdec  bl 0x71017ddb00
710060bdf0  ldr w9,[sp, #0x820]
710060bdf4  orr w8,wzr,#0xffffff
710060bdf8  cmp w9,w8
710060bdfc  b.eq 0x710060bf1c
710060be00  adrp x27,0x7105332000
710060be04  ldr x8,[x27, #0xf20]
710060be08  ldr w10,[x8, #0x18]
710060be0c  cmp w10,w9
710060be10  b.ls 0x710060bf00
710060be14  ldr x10,[x8, #0x8]
710060be18  add x11,x10,x9, LSL #0x3
710060be1c  ldrb w11,[x11, #0x4]
710060be20  cbz w11,0x710060bf00
710060be24  lsl x9,x9,#0x3
710060be28  ldr w9,[x10, x9, LSL #0x0]
710060be2c  orr w10,wzr,#0xffffff
710060be30  cmp w9,w10
710060be34  b.eq 0x710060bf00
710060be38  ldr w10,[x8, #0x1c]
710060be3c  cmp w10,w9
710060be40  b.ls 0x710060bf00
710060be44  ldr x10,[x8, #0x10]
710060be48  orr w8,wzr,#0x18
710060be4c  madd x8,x9,x8,x10
710060be50  ldrb w11,[x8, #0xc]
710060be54  cbz w11,0x710060bf00
710060be58  cbz x8,0x710060bf00
710060be5c  orr w11,wzr,#0x18
710060be60  madd x9,x9,x11,x10
710060be64  add x9,x9,#0xd
710060be68  ldarb w9,[x9]
710060be6c  and w9,w9,#0xff
710060be70  cmp w9,#0x3
710060be74  b.ne 0x710060bf00
710060be78  ldr x8,[x8]
710060be7c  cbz x8,0x710060bf00
710060be80  ldr w8,[sp, #0x20]
710060be84  orr w9,wzr,#0xffffff
710060be88  cmp w8,w9
710060be8c  b.eq 0x710060bf00
710060be90  add x22,x26,#0x488
710060be94  mov x0,x22
710060be98  bl 0x71039c19c0
710060be9c  ldr w8,[x26, #0x480]
710060bea0  cbz w8,0x710060becc
710060bea4  ldrb w9,[x26, #0x484]
710060bea8  cbnz w9,0x710060beb4
710060beac  add w8,w8,#0x1
710060beb0  str w8,[x26, #0x480]
710060beb4  mov x0,x22
710060beb8  bl 0x71039c19d0
710060bebc  b 0x710060bf00
710060bec0  mov x0,x22
710060bec4  bl 0x71039c1a50
710060bec8  b 0x710060bbe4
710060becc  mov x9,#0x5f
710060bed0  add x8,x26,#0x47c
710060bed4  mov x0,x22
710060bed8  movk x9,#0x1, LSL #32
710060bedc  str x9,[x8]
710060bee0  strb w25,[x26, #0x484]
710060bee4  bl 0x71039c19d0
710060bee8  adrp x8,0x7105334000
710060beec  ldr x8,[x8, #0x920]
710060bef0  ldr x0,[x8]
710060bef4  mov w1,#0x35f
710060bef8  add x2,sp,#0x20
710060befc  bl 0x710355fea0
710060bf00  ldr w1,[sp, #0x820]
710060bf04  orr w22,wzr,#0xffffff
710060bf08  cmp w1,w22
710060bf0c  b.eq 0x710060bf1c
710060bf10  ldr x0,[x27, #0xf20]
710060bf14  bl 0x7103540b10
710060bf18  str w22,[sp, #0x820]
710060bf1c  mov w22,#0x52
710060bf20  adrp x27,0x7105324000
710060bf24  ldr x8,[x27, #0x680]
710060bf28  add x8,x8,x23, LSL #0x3
710060bf2c  ldr x1,[x8, #0xe8]
710060bf30  mov w3,#0x14
710060bf34  add x0,sp,#0x20
710060bf38  mov w2,w22
710060bf3c  bl 0x71017e8890
710060bf40  ldr w8,[sp, #0x20]
710060bf44  orr w9,wzr,#0xffffff
710060bf48  cmp w8,w9
710060bf4c  str x28,[sp, #0x10]
710060bf50  b.eq 0x710060bfe0
710060bf54  cmp w22,#0x72
710060bf58  mov w8,#0x5e
710060bf5c  add x23,x26,#0x488
710060bf60  csel w28,w8,w22,eq
710060bf64  mov x0,x23
710060bf68  sxtw x27,w28
710060bf6c  bl 0x71039c19c0
710060bf70  orr w8,wzr,#0xc
710060bf74  smaddl x8,w28,w8,x26
710060bf78  ldr w9,[x8, #0xc]!
710060bf7c  cbz w9,0x710060bfa4
710060bf80  orr w10,wzr,#0xc
710060bf84  madd x10,x27,x10,x26
710060bf88  ldrb w10,[x10, #0x10]
710060bf8c  cbnz w10,0x710060bf98
710060bf90  add w9,w9,#0x1
710060bf94  str w9,[x8]
710060bf98  mov x0,x23
710060bf9c  bl 0x71039c19d0
710060bfa0  b 0x710060bfdc
710060bfa4  orr w9,wzr,#0xc
710060bfa8  madd x9,x27,x9,x26
710060bfac  mov w10,#0x1
710060bfb0  mov x0,x23
710060bfb4  str w22,[x9, #0x8]
710060bfb8  str w10,[x8]
710060bfbc  strb w25,[x9, #0x10]
710060bfc0  bl 0x71039c19d0
710060bfc4  adrp x8,0x7105334000
710060bfc8  ldr x8,[x8, #0x920]
710060bfcc  ldr x0,[x8]
710060bfd0  add w1,w22,#0x300
710060bfd4  add x2,sp,#0x20
710060bfd8  bl 0x710355fea0
710060bfdc  ldr x28,[sp, #0x10]
710060bfe0  ldr w8,[x19, #0xc]
710060bfe4  ldr x0,[x19, #0x468]
710060bfe8  sub w8,w8,#0x48
710060bfec  cmp w8,#0x3
710060bff0  b.cs 0x710060c014
710060bff4  ldr x8,[x0]
710060bff8  ldr x8,[x8, #0x68]
710060bffc  add x1,sp,#0x868
710060c000  add x3,sp,#0x880
710060c004  add x4,sp,#0x870
710060c008  mov w2,wzr
710060c00c  blr x8
710060c010  b 0x710060c028
710060c014  ldr x8,[x0]
710060c018  ldr x8,[x8, #0x48]
710060c01c  add x1,sp,#0x868
710060c020  mov w2,wzr
710060c024  blr x8
710060c028  ldrb w8,[x28, #0x24]
710060c02c  cmp w8,#0x5
710060c030  b.eq 0x710060c074
710060c034  cmp w8,#0x2
710060c038  b.eq 0x710060c05c
710060c03c  cmp w8,#0x1
710060c040  b.ne 0x710060c090
710060c044  ldr x0,[x19, #0x468]
710060c048  ldr x8,[x0]
710060c04c  ldr x8,[x8, #0x60]
710060c050  adrp x2,0x7104318000
710060c054  add x2,x2,#0x716
710060c058  b 0x710060c088
710060c05c  ldr x0,[x19, #0x468]
710060c060  ldr x8,[x0]
710060c064  ldr x8,[x8, #0x60]
710060c068  adrp x2,0x7104291000
710060c06c  add x2,x2,#0x356
710060c070  b 0x710060c088
710060c074  ldr x0,[x19, #0x468]
710060c078  ldr x8,[x0]
710060c07c  ldr x8,[x8, #0x60]
710060c080  adrp x2,0x7104432000
710060c084  add x2,x2,#0x722
710060c088  add x1,sp,#0x868
710060c08c  blr x8
710060c090  ldr x0,[x19, #0x540]
710060c094  str xzr,[sp, #0x860]
710060c098  str xzr,[sp, #0x858]
710060c09c  ldr x8,[x0]
710060c0a0  ldr x8,[x8, #0x130]
710060c0a4  add x1,sp,#0x858
710060c0a8  blr x8
710060c0ac  ldr x22,[sp, #0x860]
710060c0b0  cbz x22,0x710060c0e4
710060c0b4  add x8,x22,#0x8
710060c0b8  ldaxr x9,[x8]
710060c0bc  sub x10,x9,#0x1
710060c0c0  stlxr w11,x10,[x8]
710060c0c4  cbnz w11,0x710060c0b8
710060c0c8  cbnz x9,0x710060c0e4
710060c0cc  ldr x8,[x22]
710060c0d0  ldr x8,[x8, #0x10]
710060c0d4  mov x0,x22
710060c0d8  blr x8
710060c0dc  mov x0,x22
710060c0e0  bl 0x71039c2670
710060c0e4  ldr w9,[x20, #0x58]
710060c0e8  ldrsw x8,[x19, #0xc]
710060c0ec  cmp w9,#0x2d
710060c0f0  b.ne 0x710060c124
710060c0f4  adrp x9,0x710523d000
710060c0f8  ldr w9,[x9, #0xc]
710060c0fc  cmp w9,#0xd
710060c100  b.hi 0x710060c110
710060c104  orr w10,wzr,#0x7fe
710060c108  lsr w9,w10,w9
710060c10c  tbz w9,#0x0,0x710060c138
710060c110  ldr w4,[x20, #0x64]
710060c114  cbz w4,0x710060c140
710060c118  cmp w4,#0x1
710060c11c  b.eq 0x710060c130
710060c120  b 0x710060c144
710060c124  sub w9,w9,#0x48
710060c128  cmp w9,#0x3
710060c12c  b.cs 0x710060c138
710060c130  mov w4,wzr
710060c134  b 0x710060c144
710060c138  ldr w4,[x20, #0x64]
710060c13c  b 0x710060c144
710060c140  mov w4,#0x1
710060c144  mov w9,#0x6f62
710060c148  movk w9,#0x7964, LSL #16
710060c14c  str w9,[sp, #0x20]
710060c150  mov w9,#0x4
710060c154  cmp w8,#0x75
710060c158  strh wzr,[sp, #0x990]
710060c15c  strb wzr,[sp, #0x890]
710060c160  strh w9,[sp, #0x120]
710060c164  strb wzr,[sp, #0x24]
710060c168  b.hi 0x710060c17c
710060c16c  adrp x9,0x7104f81000
710060c170  add x9,x9,#0xe20
710060c174  ldr x2,[x9, x8, LSL #0x3]
710060c178  b 0x710060c184
710060c17c  adrp x2,0x71042b2000
710060c180  add x2,x2,#0xe2e
710060c184  adrp x1,0x7104421000
710060c188  add x1,x1,#0xaa8
710060c18c  add x0,sp,#0x890
710060c190  add x3,sp,#0x20
710060c194  add x22,sp,#0x890
710060c198  bl 0x710147f330
710060c19c  ldrh w8,[sp, #0x990]
710060c1a0  add w9,w8,#0x1
710060c1a4  strh w9,[sp, #0x990]
710060c1a8  mov w9,#0x2f
710060c1ac  strb w9,[x22, x8, LSL ]
710060c1b0  ldrh w8,[sp, #0x990]
710060c1b4  add w9,w8,#0x1
710060c1b8  strh w9,[sp, #0x990]
710060c1bc  mov w9,#0x6d
710060c1c0  strb w9,[x22, x8, LSL ]
710060c1c4  ldrh w8,[sp, #0x990]
710060c1c8  add w9,w8,#0x1
710060c1cc  strh w9,[sp, #0x990]
710060c1d0  mov w9,#0x6f
710060c1d4  strb w9,[x22, x8, LSL ]
710060c1d8  ldrh w8,[sp, #0x990]
710060c1dc  add w10,w8,#0x1
710060c1e0  strh w10,[sp, #0x990]
710060c1e4  mov w10,#0x74
710060c1e8  strb w10,[x22, x8, LSL ]
710060c1ec  ldrh w11,[sp, #0x990]
710060c1f0  add w8,w11,#0x1
710060c1f4  strh w8,[sp, #0x990]
710060c1f8  mov w8,#0x69
710060c1fc  strb w8,[x22, x11, LSL ]
710060c200  ldrh w11,[sp, #0x990]
710060c204  add w12,w11,#0x1
710060c208  strh w12,[sp, #0x990]
710060c20c  strb w9,[x22, x11, LSL ]
710060c210  ldrh w9,[sp, #0x990]
710060c214  add w11,w9,#0x1
710060c218  strh w11,[sp, #0x990]
710060c21c  mov w11,#0x6e
710060c220  strb w11,[x22, x9, LSL ]
710060c224  ldrh w9,[sp, #0x990]
710060c228  add w12,w9,#0x1
710060c22c  strh w12,[sp, #0x990]
710060c230  mov w12,#0x5f
710060c234  strb w12,[x22, x9, LSL ]
710060c238  ldrh w9,[sp, #0x990]
710060c23c  add w12,w9,#0x1
710060c240  strh w12,[sp, #0x990]
710060c244  mov w12,#0x6c
710060c248  strb w12,[x22, x9, LSL ]
710060c24c  ldrh w9,[sp, #0x990]
710060c250  add w12,w9,#0x1
710060c254  strh w12,[sp, #0x990]
710060c258  add x0,sp,#0x20
710060c25c  strb w8,[x22, x9, LSL ]
710060c260  ldrh w9,[sp, #0x990]
710060c264  add w12,w9,#0x1
710060c268  strh w12,[sp, #0x990]
710060c26c  mov w12,#0x73
710060c270  strb w12,[x22, x9, LSL ]
710060c274  ldrh w9,[sp, #0x990]
710060c278  add w12,w9,#0x1
710060c27c  strh w12,[sp, #0x990]
710060c280  add x1,sp,#0x890
710060c284  strb w10,[x22, x9, LSL ]
710060c288  ldrh w9,[sp, #0x990]
710060c28c  add w10,w9,#0x1
710060c290  strh w10,[sp, #0x990]
710060c294  mov w10,#0x2e
710060c298  strb w10,[x22, x9, LSL ]
710060c29c  ldrh w9,[sp, #0x990]
710060c2a0  add w10,w9,#0x1
710060c2a4  strh w10,[sp, #0x990]
710060c2a8  mov w10,#0x62
710060c2ac  strb w10,[x22, x9, LSL ]
710060c2b0  ldrh w9,[sp, #0x990]
710060c2b4  add w10,w9,#0x1
710060c2b8  strh w10,[sp, #0x990]
710060c2bc  strb w8,[x22, x9, LSL ]
710060c2c0  ldrh w8,[sp, #0x990]
710060c2c4  add w9,w8,#0x1
710060c2c8  strh w9,[sp, #0x990]
710060c2cc  strb w11,[x22, x8, LSL ]
710060c2d0  ldrh w8,[sp, #0x990]
710060c2d4  strb wzr,[x22, x8, LSL ]
710060c2d8  bl 0x710353e8e0
710060c2dc  ldr w0,[sp, #0x20]
710060c2e0  bl 0x710353ea90
710060c2e4  mov x1,x0
710060c2e8  orr w8,wzr,#0xffffff
710060c2ec  cmp w1,w8
710060c2f0  str w1,[sp, #0x850]
710060c2f4  b.eq 0x710060c304
710060c2f8  adrp x8,0x7105332000
710060c2fc  ldr x0,[x8, #0xf20]
710060c300  bl 0x7103540a00
710060c304  ldr x0,[x19, #0x478]
710060c308  ldr x8,[x0]
710060c30c  ldr x8,[x8, #0x68]
710060c310  add x1,sp,#0x850
710060c314  blr x8
710060c318  ldr w1,[x19, #0xc]
710060c31c  sub w8,w1,#0x48
710060c320  cmp w8,#0x2
710060c324  b.hi 0x710060c3a4
710060c328  ldr w3,[x20, #0x6c]
710060c32c  mov w2,#0x19
710060c330  add x0,sp,#0x20
710060c334  mov w4,wzr
710060c338  bl 0x71017dfe10
710060c33c  add x0,sp,#0x890
710060c340  add x1,sp,#0x20
710060c344  bl 0x710353e8e0
710060c348  ldr w0,[sp, #0x890]
710060c34c  bl 0x710353ea90
710060c350  mov x1,x0
710060c354  orr w22,wzr,#0xffffff
710060c358  cmp w1,w22
710060c35c  str w1,[sp, #0x20]
710060c360  b.eq 0x710060c370
710060c364  adrp x8,0x7105332000
710060c368  ldr x0,[x8, #0xf20]
710060c36c  bl 0x7103540a00
710060c370  ldr x0,[x19, #0x478]
710060c374  ldr x8,[x0]
710060c378  ldr x8,[x8, #0x78]
710060c37c  add x1,sp,#0x20
710060c380  blr x8
710060c384  ldr w1,[sp, #0x20]
710060c388  cmp w1,w22
710060c38c  b.eq 0x710060c3a4
710060c390  adrp x8,0x7105332000
710060c394  ldr x0,[x8, #0xf20]
710060c398  bl 0x7103540b10
710060c39c  orr w8,wzr,#0xffffff
710060c3a0  str w8,[sp, #0x20]
710060c3a4  adrp x26,0x7105332000
710060c3a8  ldr x8,[x26, #0xf20]
710060c3ac  ldr x8,[x8, #0x78]
710060c3b0  ldr x22,[x8, #0x8]
710060c3b4  ldr w9,[sp, #0x868]
710060c3b8  ldr x8,[x22, #0x8]
710060c3bc  orr w10,wzr,#0xffffff
710060c3c0  cmp w9,w10
710060c3c4  b.eq 0x710060c414
710060c3c8  ldr w10,[x8, #0x4]
710060c3cc  cmp w10,w9
710060c3d0  b.ls 0x710060c414
710060c3d4  ldr x10,[x22, #0x28]
710060c3d8  cbz x10,0x710060c3e0
710060c3dc  ldr w9,[x10, x9, LSL #0x2]
710060c3e0  orr w10,wzr,#0xffffff
710060c3e4  cmp w9,w10
710060c3e8  b.eq 0x710060c414
710060c3ec  ldr w10,[x8, #0x8]
710060c3f0  cmp w10,w9
710060c3f4  b.ls 0x710060c414
710060c3f8  ldr x10,[x22, #0x30]
710060c3fc  mov w9,w9
710060c400  adds x9,x10,x9, LSL #0x5
710060c404  b.eq 0x710060c418
710060c408  ldr x9,[x9, #0x8]
710060c40c  and x9,x9,#0xffffffffff
710060c410  b 0x710060c418
710060c414  mov x9,xzr
710060c418  str x9,[sp, #0x20]
710060c41c  ldr x1,[x22, #0x20]
710060c420  ldr w2,[x8, #0x8]
710060c424  adrp x4,0x7103542000
710060c428  add x4,x4,#0x240
710060c42c  add x0,sp,#0x20
710060c430  mov w3,#0x8
710060c434  bl 0x71039c2630
710060c438  orr w8,wzr,#0xffffff
710060c43c  cbz x0,0x710060c464
710060c440  ldr x9,[x0]
710060c444  lsr x9,x9,#0x28
710060c448  cmp w9,w8
710060c44c  b.eq 0x710060c464
710060c450  ldr x8,[x22, #0x8]
710060c454  ldr w8,[x8, #0x4]
710060c458  cmp w8,w9
710060c45c  orr w8,wzr,#0xffffff
710060c460  csel w8,w9,w8,hi
710060c464  str w8,[sp, #0x20]
710060c468  ldr x0,[x19, #0x478]
710060c46c  str xzr,[sp, #0x848]
710060c470  str xzr,[sp, #0x840]
710060c474  ldr w8,[x19, #0xc]
710060c478  cmp w8,#0x48
710060c47c  ldr x8,[x0]
710060c480  cset w6,eq
710060c484  ldr x8,[x8, #0x48]
710060c488  add x1,sp,#0x840
710060c48c  add x2,sp,#0x20
710060c490  mov w3,wzr
710060c494  mov w4,wzr
710060c498  mov w5,wzr
710060c49c  blr x8
710060c4a0  ldr x22,[sp, #0x848]
710060c4a4  cbz x22,0x710060c4d8
710060c4a8  add x8,x22,#0x8
710060c4ac  ldaxr x9,[x8]
710060c4b0  sub x10,x9,#0x1
710060c4b4  stlxr w11,x10,[x8]
710060c4b8  cbnz w11,0x710060c4ac
710060c4bc  cbnz x9,0x710060c4d8
710060c4c0  ldr x8,[x22]
710060c4c4  ldr x8,[x8, #0x10]
710060c4c8  mov x0,x22
710060c4cc  blr x8
710060c4d0  mov x0,x22
710060c4d4  bl 0x71039c2670
710060c4d8  ldr x8,[x21]
710060c4dc  ldr x8,[x8, #0x270]
710060c4e0  ldr x22,[x19, #0x470]
710060c4e4  mov x1,#0x8724
710060c4e8  movk x1,#0x8ed, LSL #16
710060c4ec  movk x1,#0x13, LSL #32
710060c4f0  mov x0,x21
710060c4f4  mov x2,xzr
710060c4f8  blr x8
710060c4fc  ldr x8,[x22]
710060c500  ldr x8,[x8, #0x38]
710060c504  mov w1,#0x1
710060c508  mov w2,#0x1
710060c50c  mov x0,x22
710060c510  blr x8
710060c514  ldr x8,[x26, #0xf20]
710060c518  ldr x8,[x8, #0x78]
710060c51c  ldr x22,[x8, #0x8]
710060c520  mov x8,#0x6ca1
710060c524  movk x8,#0x615f, LSL #16
710060c528  movk x8,#0x1f, LSL #32
710060c52c  str x8,[sp, #0x20]
710060c530  ldr x8,[x22, #0x8]
710060c534  ldr x1,[x22, #0x20]
710060c538  ldr w2,[x8, #0x8]
710060c53c  adrp x4,0x7103542000
710060c540  add x4,x4,#0x240
710060c544  add x0,sp,#0x20
710060c548  mov w3,#0x8
710060c54c  bl 0x71039c2630
710060c550  orr w1,wzr,#0xffffff
710060c554  cbz x0,0x710060c57c
710060c558  ldr x8,[x0]
710060c55c  lsr x8,x8,#0x28
710060c560  cmp w8,w1
710060c564  b.eq 0x710060c57c
710060c568  ldr x9,[x22, #0x8]
710060c56c  ldr w9,[x9, #0x4]
710060c570  cmp w9,w8
710060c574  orr w9,wzr,#0xffffff
710060c578  csel w1,w8,w9,hi
710060c57c  adrp x2,0x71042e6000
710060c580  add x2,x2,#0x5b8
710060c584  add x0,sp,#0x20
710060c588  bl 0x71017dd5b0
710060c58c  ldp x8,x22,[x24, #0x48]
710060c590  cbz x22,0x710060c5c8
710060c594  add x9,x22,#0x8
710060c598  ldxr x10,[x9]
710060c59c  add x10,x10,#0x1
710060c5a0  stxr w11,x10,[x9]
710060c5a4  cbnz w11,0x710060c598
710060c5a8  ldr x0,[x19, #0x558]
710060c5ac  str x8,[sp, #0x830]
710060c5b0  str x22,[sp, #0x838]
710060c5b4  ldxr x8,[x9]
710060c5b8  add x8,x8,#0x1
710060c5bc  stxr w10,x8,[x9]
710060c5c0  cbnz w10,0x710060c5b4
710060c5c4  b 0x710060c5d4
710060c5c8  ldr x0,[x19, #0x558]
710060c5cc  str x8,[sp, #0x830]
710060c5d0  str xzr,[sp, #0x838]
710060c5d4  ldr x8,[x0]
710060c5d8  ldr x8,[x8, #0x48]
710060c5dc  add x1,sp,#0x830
710060c5e0  add x2,sp,#0x20
710060c5e4  blr x8
710060c5e8  ldr x23,[sp, #0x838]
710060c5ec  cbz x23,0x710060c620
710060c5f0  add x8,x23,#0x8
710060c5f4  ldaxr x9,[x8]
710060c5f8  sub x10,x9,#0x1
710060c5fc  stlxr w11,x10,[x8]
710060c600  cbnz w11,0x710060c5f4
710060c604  cbnz x9,0x710060c620
710060c608  ldr x8,[x23]
710060c60c  ldr x8,[x8, #0x10]
710060c610  mov x0,x23
710060c614  blr x8
710060c618  mov x0,x23
710060c61c  bl 0x71039c2670
710060c620  cbz x22,0x710060c654
710060c624  add x8,x22,#0x8
710060c628  ldaxr x9,[x8]
710060c62c  sub x10,x9,#0x1
710060c630  stlxr w11,x10,[x8]
710060c634  cbnz w11,0x710060c628
710060c638  cbnz x9,0x710060c654
710060c63c  ldr x8,[x22]
710060c640  ldr x8,[x8, #0x10]
710060c644  mov x0,x22
710060c648  blr x8
710060c64c  mov x0,x22
710060c650  bl 0x71039c2670
710060c654  ldr w1,[sp, #0x20]
710060c658  orr w22,wzr,#0xffffff
710060c65c  add x25,x19,#0x3f0
710060c660  cmp w1,w22
710060c664  b.eq 0x710060c674
710060c668  ldr x0,[x26, #0xf20]
710060c66c  bl 0x7103540b10
710060c670  str w22,[sp, #0x20]
710060c674  ldr x8,[x19]
710060c678  ldr x8,[x8, #0x28]
710060c67c  mov x0,x19
710060c680  blr x8
710060c684  ldr w9,[x19, #0xc]
710060c688  adrp x26,0x71052bc000
710060c68c  ldr x8,[x26, #0x3b0]
710060c690  mov w23,#0x4b
710060c694  orr w10,wzr,#0x38
710060c698  mov x1,#0xc150
710060c69c  movk x1,#0x2a90, LSL #16
710060c6a0  movk x1,#0xd, LSL #32
710060c6a4  cmp w9,#0x4c
710060c6a8  csel w9,w23,w9,eq
710060c6ac  smaddl x8,w9,w10,x8
710060c6b0  ldr x0,[x8, #0x70]
710060c6b4  ldr x8,[x0]
710060c6b8  ldr x8,[x8, #0x10]
710060c6bc  blr x8
710060c6c0  ldp x2,x8,[x1]
710060c6c4  str x20,[sp, #0x18]
710060c6c8  subs x8,x8,x2
710060c6cc  b.eq 0x710060c704
710060c6d0  ldr x0,[x19, #0x448]
710060c6d4  lsr x8,x8,#0x3
710060c6d8  mov w9,#0xaaab
710060c6dc  movk w9,#0xaaaa, LSL #16
710060c6e0  mul w1,w8,w9
710060c6e4  ldr x8,[x0]
710060c6e8  fmov s0,0x40800000
710060c6ec  fmov s2,wzr
710060c6f0  mov v1.16B,v0.16B
710060c6f4  add x27,x19,#0x448
710060c6f8  ldr x8,[x8, #0xd0]
710060c6fc  blr x8
710060c700  b 0x710060c708
710060c704  add x27,x19,#0x448
710060c708  ldr w1,[x19, #0xc]
710060c70c  mov x28,#0x846f
710060c710  movk x28,#0x8401, LSL #16
710060c714  mov x22,#0x7051
710060c718  movk x22,#0xe5ec, LSL #16
710060c71c  mov x20,#0xe258
710060c720  movk x20,#0x5dbf, LSL #16
710060c724  mov x0,x25
710060c728  movk x28,#0x1c, LSL #32
710060c72c  movk x22,#0x6, LSL #32
710060c730  movk x20,#0x3, LSL #32
710060c734  bl 0x710069b6c0
710060c738  ldr x8,[x26, #0x3b0]
710060c73c  ldr x0,[x19, #0x448]
710060c740  ldr x8,[x8, #0x50]
710060c744  ldr s0,[x8, #0xbd8]
710060c748  ldr x8,[x0]
710060c74c  ldr x8,[x8, #0x238]
710060c750  blr x8
710060c754  ldr w9,[x19, #0xc]
710060c758  ldr x8,[x26, #0x3b0]
710060c75c  orr w10,wzr,#0x38
710060c760  mov x1,#0x553f
710060c764  movk x1,#0x9fb9, LSL #16
710060c768  movk x1,#0xf, LSL #32
710060c76c  cmp w9,#0x4c
710060c770  csel w9,w23,w9,eq
710060c774  smaddl x8,w9,w10,x8
710060c778  ldr x0,[x8, #0x70]
710060c77c  ldr x8,[x0]
710060c780  ldr x8,[x8, #0x10]
710060c784  ldr x25,[x27]
710060c788  blr x8
710060c78c  str x1,[x25, #0x140]
710060c790  ldr x0,[x19, #0x570]
710060c794  ldr x8,[x0]
710060c798  ldr x8,[x8, #0x80]
710060c79c  mov w1,#0x1
710060c7a0  mov w25,#0x1
710060c7a4  blr x8
710060c7a8  ldr x0,[x19, #0x570]
710060c7ac  ldr x8,[x0]
710060c7b0  ldr x8,[x8, #0x68]
710060c7b4  mov x1,x20
710060c7b8  blr x8
710060c7bc  ldr x0,[x19, #0x570]
710060c7c0  ldr x8,[x0]
710060c7c4  ldr x8,[x8, #0x88]
710060c7c8  fmov s0,0x3fc00000
710060c7cc  blr x8
710060c7d0  ldr x0,[x19, #0x570]
710060c7d4  ldr x8,[x0]
710060c7d8  ldr x8,[x8, #0x70]
710060c7dc  fmov s0,0x41300000
710060c7e0  fmov s1,0x41700000
710060c7e4  blr x8
710060c7e8  adrp x27,0x71052a8000
710060c7ec  ldr x27,[x27, #0xa88]
710060c7f0  ldr q0,[x27]
710060c7f4  movi d1,#0x0
710060c7f8  mov v1.S[0x0],v0.S[0x2]
710060c7fc  mov v0.D[0x1],v1.D[0x0]
710060c800  mov x24,#0x4137
710060c804  movk x24,#0x4f93, LSL #16
710060c808  orr w20,wzr,#0x3f800000
710060c80c  movk x24,#0x5, LSL #32
710060c810  mov w8,#0x2
710060c814  str w20,[sp, #0x40]
710060c818  str x24,[sp, #0x48]
710060c81c  stp q0,q0,[sp, #0x20]
710060c820  strb w8,[sp, #0x50]
710060c824  ldr w8,[x19, #0xc]
710060c828  str wzr,[sp, #0x8a0]
710060c82c  str x25,[sp, #0x898]
710060c830  cmp w8,#0x5
710060c834  cset w8,ne
710060c838  add x23,sp,#0x20
710060c83c  str x23,[sp, #0x890]
710060c840  strb w8,[sp, #0x51]
710060c844  ldr x0,[x19, #0x4f0]
710060c848  ldr x8,[x0]
710060c84c  ldr x8,[x8, #0x58]
710060c850  add x1,sp,#0x890
710060c854  mov w2,wzr
710060c858  blr x8
710060c85c  ldr q0,[x27]
710060c860  movi d1,#0x0
710060c864  mov w8,#0x302
710060c868  mov v1.S[0x0],v0.S[0x2]
710060c86c  strh wzr,[sp, #0x8b0]
710060c870  mov v0.D[0x1],v1.D[0x0]
710060c874  str xzr,[sp, #0x8a8]
710060c878  stp q0,q0,[sp, #0x20]
710060c87c  str xzr,[sp, #0x8a0]
710060c880  str w20,[sp, #0x40]
710060c884  str x24,[sp, #0x48]
710060c888  strh w8,[sp, #0x50]
710060c88c  str x23,[sp, #0x890]
710060c890  str x25,[sp, #0x898]
710060c894  ldr x8,[x21]
710060c898  ldr x8,[x8, #0x270]
710060c89c  mov x25,#0x421d
710060c8a0  movk x25,#0x8ddb, LSL #16
710060c8a4  movk x25,#0xd, LSL #32
710060c8a8  mov x2,#0xd194
710060c8ac  movk x2,#0x98e4, LSL #16
710060c8b0  movk x2,#0x1e, LSL #32
710060c8b4  mov x0,x21
710060c8b8  mov x1,x25
710060c8bc  blr x8
710060c8c0  str s0,[sp, #0x8a0]
710060c8c4  ldr x8,[x21]
710060c8c8  ldr x8,[x8, #0x270]
710060c8cc  mov x2,#0x5be8
710060c8d0  movk x2,#0x6929, LSL #16
710060c8d4  movk x2,#0x1d, LSL #32
710060c8d8  mov x0,x21
710060c8dc  mov x1,x25
710060c8e0  blr x8
710060c8e4  str s0,[sp, #0x8a4]
710060c8e8  ldr x8,[x21]
710060c8ec  ldr x8,[x8, #0x270]
710060c8f0  mov x0,x21
710060c8f4  mov x1,x22
710060c8f8  mov x2,x28
710060c8fc  mov x24,x22
710060c900  blr x8
710060c904  str s0,[sp, #0x8a8]
710060c908  ldr x8,[x21]
710060c90c  ldr x8,[x8, #0x270]
710060c910  mov x2,#0x902a
710060c914  movk x2,#0x170f, LSL #16
710060c918  movk x2,#0x1c, LSL #32
710060c91c  mov x0,x21
710060c920  mov x1,x25
710060c924  blr x8
710060c928  str s0,[sp, #0x8ac]
710060c92c  strb wzr,[sp, #0x8b0]
710060c930  ldr x0,[x19, #0x4f8]
710060c934  ldr x8,[x0]
710060c938  ldr x8,[x8, #0x60]
710060c93c  add x1,sp,#0x890
710060c940  mov w2,wzr
710060c944  blr x8
710060c948  ldr x0,[x19, #0x4f8]
710060c94c  ldr x8,[x0]
710060c950  ldr x8,[x8, #0x98]
710060c954  mov w1,wzr
710060c958  mov w2,wzr
710060c95c  mov w3,wzr
710060c960  blr x8
710060c964  ldrsw x9,[x19, #0xc]
710060c968  ldr x8,[x26, #0x3b0]
710060c96c  cmp w9,#0x4c
710060c970  b.ne 0x710060c990
710060c974  ldr x0,[x8, #0x10d8]
710060c978  ldr x8,[x0]
710060c97c  ldr x8,[x8, #0x10]
710060c980  mov x1,#0xd30c
710060c984  movk x1,#0xc7be, LSL #16
710060c988  movk x1,#0xd, LSL #32
710060c98c  b 0x710060c9b0
710060c990  orr w10,wzr,#0x38
710060c994  madd x8,x9,x10,x8
710060c998  ldr x0,[x8, #0x70]
710060c99c  ldr x8,[x0]
710060c9a0  ldr x8,[x8, #0x10]
710060c9a4  mov x1,#0x56e3
710060c9a8  movk x1,#0xde45, LSL #16
710060c9ac  movk x1,#0x8, LSL #32
710060c9b0  blr x8
710060c9b4  ldp x8,x9,[x1]
710060c9b8  str x8,[sp, #0x820]
710060c9bc  ldr x8,[x1]
710060c9c0  sub x8,x9,x8
710060c9c4  mov x9,#0x6db7
710060c9c8  movk x9,#0xb6db, LSL #16
710060c9cc  asr x8,x8,#0x3
710060c9d0  movk x9,#0xdb6d, LSL #32
710060c9d4  movk x9,#0x6db6, LSL #48
710060c9d8  mul x8,x8,x9
710060c9dc  mov x25,x1
710060c9e0  mov w23,#0x4b
710060c9e4  mov x22,x24
710060c9e8  lsl x9,x8,#0x20
710060c9ec  sxtw x8,w8
710060c9f0  str x8,[sp, #0x828]
710060c9f4  cbz x9,0x710060ce1c
710060c9f8  ldr x0,[x19, #0x4a0]
710060c9fc  ldr x8,[x0]
710060ca00  ldr x8,[x8, #0x78]
710060ca04  add x1,sp,#0x820
710060ca08  mov w2,wzr
710060ca0c  blr x8
710060ca10  ldr x0,[x19, #0x4a0]
710060ca14  ldr x8,[x0]
710060ca18  ldr x8,[x8, #0x248]
710060ca1c  adrp x1,0x7100646000
710060ca20  add x1,x1,#0x480
710060ca24  blr x8
710060ca28  ldr x8,[sp, #0x828]
710060ca2c  strh wzr,[sp, #0x8b0]
710060ca30  str xzr,[sp, #0x8a8]
710060ca34  str xzr,[sp, #0x8a0]
710060ca38  str xzr,[sp, #0x898]
710060ca3c  str xzr,[sp, #0x890]
710060ca40  str xzr,[sp, #0x48]
710060ca44  str xzr,[sp, #0x88]
710060ca48  str xzr,[sp, #0xc8]
710060ca4c  str xzr,[sp, #0x108]
710060ca50  str xzr,[sp, #0x148]
710060ca54  str xzr,[sp, #0x188]
710060ca58  str xzr,[sp, #0x1c8]
710060ca5c  str xzr,[sp, #0x208]
710060ca60  str xzr,[sp, #0x248]
710060ca64  str xzr,[sp, #0x238]
710060ca68  str xzr,[sp, #0x230]
710060ca6c  str xzr,[sp, #0x228]
710060ca70  str xzr,[sp, #0x220]
710060ca74  str xzr,[sp, #0x288]
710060ca78  str xzr,[sp, #0x278]
710060ca7c  str xzr,[sp, #0x270]
710060ca80  str xzr,[sp, #0x268]
710060ca84  str xzr,[sp, #0x260]
710060ca88  str xzr,[sp, #0x2c8]
710060ca8c  str xzr,[sp, #0x2b8]
710060ca90  str xzr,[sp, #0x2b0]
710060ca94  str xzr,[sp, #0x2a8]
710060ca98  str xzr,[sp, #0x2a0]
710060ca9c  str xzr,[sp, #0x308]
710060caa0  str xzr,[sp, #0x2f8]
710060caa4  str xzr,[sp, #0x2f0]
710060caa8  str xzr,[sp, #0x2e8]
710060caac  str xzr,[sp, #0x2e0]
710060cab0  str xzr,[sp, #0x348]
710060cab4  str xzr,[sp, #0x338]
710060cab8  str xzr,[sp, #0x330]
710060cabc  str xzr,[sp, #0x328]
710060cac0  str xzr,[sp, #0x320]
710060cac4  str xzr,[sp, #0x388]
710060cac8  str xzr,[sp, #0x378]
710060cacc  str xzr,[sp, #0x370]
710060cad0  str xzr,[sp, #0x368]
710060cad4  str xzr,[sp, #0x360]
710060cad8  str xzr,[sp, #0x3c8]
710060cadc  str xzr,[sp, #0x3b8]
710060cae0  str xzr,[sp, #0x3b0]
710060cae4  str xzr,[sp, #0x3a8]
710060cae8  str xzr,[sp, #0x3a0]
710060caec  str xzr,[sp, #0x408]
710060caf0  str xzr,[sp, #0x3f8]
710060caf4  str xzr,[sp, #0x3f0]
710060caf8  str xzr,[sp, #0x3e8]
710060cafc  str xzr,[sp, #0x3e0]
710060cb00  str xzr,[sp, #0x448]
710060cb04  str xzr,[sp, #0x438]
710060cb08  str xzr,[sp, #0x430]
710060cb0c  str xzr,[sp, #0x428]
710060cb10  str xzr,[sp, #0x420]
710060cb14  str xzr,[sp, #0x488]
710060cb18  str xzr,[sp, #0x478]
710060cb1c  str xzr,[sp, #0x470]
710060cb20  str xzr,[sp, #0x468]
710060cb24  str xzr,[sp, #0x460]
710060cb28  str xzr,[sp, #0x4c8]
710060cb2c  str xzr,[sp, #0x4b8]
710060cb30  str xzr,[sp, #0x4b0]
710060cb34  str xzr,[sp, #0x4a8]
710060cb38  str xzr,[sp, #0x4a0]
710060cb3c  str xzr,[sp, #0x508]
710060cb40  str xzr,[sp, #0x4f8]
710060cb44  str xzr,[sp, #0x4f0]
710060cb48  str xzr,[sp, #0x4e8]
710060cb4c  str xzr,[sp, #0x4e0]
710060cb50  str xzr,[sp, #0x548]
710060cb54  str xzr,[sp, #0x538]
710060cb58  str xzr,[sp, #0x530]
710060cb5c  str xzr,[sp, #0x528]
710060cb60  str xzr,[sp, #0x520]
710060cb64  str xzr,[sp, #0x588]
710060cb68  str xzr,[sp, #0x578]
710060cb6c  str xzr,[sp, #0x570]
710060cb70  str xzr,[sp, #0x568]
710060cb74  str xzr,[sp, #0x560]
710060cb78  str xzr,[sp, #0x5c8]
710060cb7c  str xzr,[sp, #0x5b8]
710060cb80  str xzr,[sp, #0x5b0]
710060cb84  str xzr,[sp, #0x5a8]
710060cb88  str xzr,[sp, #0x5a0]
710060cb8c  str xzr,[sp, #0x608]
710060cb90  str xzr,[sp, #0x5f8]
710060cb94  str xzr,[sp, #0x5f0]
710060cb98  str xzr,[sp, #0x5e8]
710060cb9c  str xzr,[sp, #0x5e0]
710060cba0  str xzr,[sp, #0x648]
710060cba4  str xzr,[sp, #0x638]
710060cba8  str xzr,[sp, #0x630]
710060cbac  str xzr,[sp, #0x628]
710060cbb0  str xzr,[sp, #0x620]
710060cbb4  str xzr,[sp, #0x688]
710060cbb8  str xzr,[sp, #0x678]
710060cbbc  str xzr,[sp, #0x670]
710060cbc0  str xzr,[sp, #0x668]
710060cbc4  str xzr,[sp, #0x660]
710060cbc8  str xzr,[sp, #0x6c8]
710060cbcc  str xzr,[sp, #0x6b8]
710060cbd0  str xzr,[sp, #0x6b0]
710060cbd4  str xzr,[sp, #0x6a8]
710060cbd8  str xzr,[sp, #0x6a0]
710060cbdc  str xzr,[sp, #0x708]
710060cbe0  str xzr,[sp, #0x6f8]
710060cbe4  str xzr,[sp, #0x6f0]
710060cbe8  str xzr,[sp, #0x6e8]
710060cbec  str xzr,[sp, #0x6e0]
710060cbf0  str xzr,[sp, #0x748]
710060cbf4  str xzr,[sp, #0x738]
710060cbf8  str xzr,[sp, #0x730]
710060cbfc  str xzr,[sp, #0x728]
710060cc00  str xzr,[sp, #0x720]
710060cc04  str xzr,[sp, #0x788]
710060cc08  str xzr,[sp, #0x778]
710060cc0c  str xzr,[sp, #0x770]
710060cc10  str xzr,[sp, #0x768]
710060cc14  str xzr,[sp, #0x760]
710060cc18  str xzr,[sp, #0x7c8]
710060cc1c  str xzr,[sp, #0x7b8]
710060cc20  str xzr,[sp, #0x7b0]
710060cc24  str xzr,[sp, #0x7a8]
710060cc28  str xzr,[sp, #0x7a0]
710060cc2c  str xzr,[sp, #0x808]
710060cc30  str xzr,[sp, #0x7f8]
710060cc34  str xzr,[sp, #0x7f0]
710060cc38  str xzr,[sp, #0x7e8]
710060cc3c  str xzr,[sp, #0x7e0]
710060cc40  stp xzr,xzr,[sp, #0x30]
710060cc44  stp xzr,xzr,[sp, #0x20]
710060cc48  stp xzr,xzr,[sp, #0x70]
710060cc4c  stp xzr,xzr,[sp, #0x60]
710060cc50  stp xzr,xzr,[sp, #0xb0]
710060cc54  stp xzr,xzr,[sp, #0xa0]
710060cc58  stp xzr,xzr,[sp, #0xf0]
710060cc5c  stp xzr,xzr,[sp, #0xe0]
710060cc60  stp xzr,xzr,[sp, #0x130]
710060cc64  stp xzr,xzr,[sp, #0x120]
710060cc68  stp xzr,xzr,[sp, #0x170]
710060cc6c  stp xzr,xzr,[sp, #0x160]
710060cc70  stp xzr,xzr,[sp, #0x1b0]
710060cc74  stp xzr,xzr,[sp, #0x1a0]
710060cc78  stp xzr,xzr,[sp, #0x1f0]
710060cc7c  stp xzr,xzr,[sp, #0x1e0]
710060cc80  cbz x8,0x710060cd34
710060cc84  movi v0.2D,#0x0
710060cc88  add x10,sp,#0x20
710060cc8c  mov x9,xzr
710060cc90  add x10,x10,#0x31
710060cc94  mov w11,#0x34
710060cc98  cmp x9,#0x20
710060cc9c  b.cs 0x710060df44
710060cca0  ldr x12,[x25]
710060cca4  mov v1.16B,v0.16B
710060cca8  add x12,x12,x11
710060ccac  sub x13,x12,#0x34
710060ccb0  ld1 {v1.S}[0],[x13]
710060ccb4  sub x13,x12,#0x30
710060ccb8  sub x12,x12,#0x2c
710060ccbc  add x9,x9,#0x1
710060ccc0  ld1 {v1.S}[1],[x13]
710060ccc4  cmp x8,x9
710060ccc8  ld1 {v1.S}[2],[x12]
710060cccc  stur q1,[x10, #-0x31]
710060ccd0  ldr x12,[x25]
710060ccd4  mov v1.16B,v0.16B
710060ccd8  add x12,x12,x11
710060ccdc  sub x13,x12,#0x28
710060cce0  ld1 {v1.S}[0],[x13]
710060cce4  sub x13,x12,#0x24
710060cce8  sub x12,x12,#0x20
710060ccec  ld1 {v1.S}[1],[x13]
710060ccf0  ld1 {v1.S}[2],[x12]
710060ccf4  stur q1,[x10, #-0x21]
710060ccf8  ldr x12,[x25]
710060ccfc  add x12,x12,x11
710060cd00  ldur w12,[x12, #-0x1c]
710060cd04  stur w12,[x10, #-0x11]
710060cd08  ldr x12,[x25]
710060cd0c  add x12,x12,x11
710060cd10  ldur x12,[x12, #-0x14]
710060cd14  stur x12,[x10, #-0x9]
710060cd18  ldr x12,[x25]
710060cd1c  ldr w12,[x12, x11, LSL #0x0]
710060cd20  strb wzr,[x10]
710060cd24  sturb w12,[x10, #-0x1]
710060cd28  add x10,x10,#0x40
710060cd2c  add x11,x11,#0x38
710060cd30  b.hi 0x710060cc98
710060cd34  add x9,sp,#0x20
710060cd38  str x9,[sp, #0x890]
710060cd3c  str x8,[sp, #0x898]
710060cd40  ldr x8,[x21]
710060cd44  ldr x8,[x8, #0x270]
710060cd48  mov x2,#0x14c9
710060cd4c  movk x2,#0xe081, LSL #16
710060cd50  movk x2,#0x1a, LSL #32
710060cd54  mov x0,x21
710060cd58  mov x1,x22
710060cd5c  blr x8
710060cd60  str s0,[sp, #0x8a0]
710060cd64  ldr x8,[x21]
710060cd68  ldr x8,[x8, #0x270]
710060cd6c  mov x2,#0xa4a0
710060cd70  movk x2,#0xb25, LSL #16
710060cd74  movk x2,#0x19, LSL #32
710060cd78  mov x0,x21
710060cd7c  mov x1,x22
710060cd80  blr x8
710060cd84  str s0,[sp, #0x8a4]
710060cd88  ldr x8,[x21]
710060cd8c  ldr x8,[x8, #0x270]
710060cd90  mov x0,x21
710060cd94  mov x1,x22
710060cd98  mov x2,x28
710060cd9c  blr x8
710060cda0  str s0,[sp, #0x8a8]
710060cda4  ldr x8,[x21]
710060cda8  ldr x8,[x8, #0x270]
710060cdac  mov x2,#0x776
710060cdb0  movk x2,#0xc6ed, LSL #16
710060cdb4  movk x2,#0x18, LSL #32
710060cdb8  mov x0,x21
710060cdbc  mov x1,x22
710060cdc0  blr x8
710060cdc4  str s0,[sp, #0x8ac]
710060cdc8  strb wzr,[sp, #0x8b0]
710060cdcc  ldr x0,[x19, #0x4f8]
710060cdd0  ldr x8,[x0]
710060cdd4  ldr x8,[x8, #0x60]
710060cdd8  add x1,sp,#0x890
710060cddc  mov w2,#0x1
710060cde0  blr x8
710060cde4  ldr x8,[sp, #0x828]
710060cde8  cbz x8,0x710060ce1c
710060cdec  mov x24,xzr
710060cdf0  ldr x0,[x19, #0x4f8]
710060cdf4  ldr x8,[x0]
710060cdf8  ldr x8,[x8, #0x98]
710060cdfc  mov w3,#0x1
710060ce00  mov w1,w24
710060ce04  mov w2,wzr
710060ce08  blr x8
710060ce0c  ldr x8,[sp, #0x828]
710060ce10  add x24,x24,#0x1
710060ce14  cmp x8,x24
710060ce18  b.hi 0x710060cdf0
710060ce1c  str xzr,[sp, #0x890]
710060ce20  str xzr,[sp, #0x898]
710060ce24  adrp x8,0x71052a8000
710060ce28  str xzr,[sp, #0x8a0]
710060ce2c  fmov s1,wzr
710060ce30  add x1,sp,#0x890
710060ce34  str xzr,[sp, #0x8a8]
710060ce38  ldr x8,[x8, #0xa88]
710060ce3c  ldr q0,[x8]
710060ce40  orr w8,wzr,#0x3f800000
710060ce44  str w8,[sp, #0x40]
710060ce48  mov x8,#0x1fca
710060ce4c  movk x8,#0x1ed9, LSL #16
710060ce50  movk x8,#0x3, LSL #32
710060ce54  str x8,[sp, #0x48]
710060ce58  mov w8,#0x2
710060ce5c  strh w8,[sp, #0x50]
710060ce60  add x8,sp,#0x20
710060ce64  ext v2.16B,v0.16B,v0.16B,0x8
710060ce68  mov v2.S[0x1],v1.S[0x0]
710060ce6c  mov v0.D[0x1],v2.D[0x0]
710060ce70  str x8,[sp, #0x890]
710060ce74  mov w8,#0x1
710060ce78  str x8,[sp, #0x898]
710060ce7c  orr x8,xzr,#0x3f8000003f800000
710060ce80  str x8,[sp, #0x8a0]
710060ce84  mov x8,#0x42480000
710060ce88  movk x8,#0x3f80, LSL #48
710060ce8c  strh wzr,[sp, #0x8b0]
710060ce90  str x8,[sp, #0x8a8]
710060ce94  strb wzr,[sp, #0x8b0]
710060ce98  stp q0,q0,[sp, #0x20]
710060ce9c  ldr x0,[x19, #0x4f8]
710060cea0  ldr x8,[x0]
710060cea4  ldr x8,[x8, #0x60]
710060cea8  mov w2,#0x2
710060ceac  blr x8
710060ceb0  ldr x0,[x19, #0x4f8]
710060ceb4  ldr x8,[x0]
710060ceb8  ldr x8,[x8, #0x98]
710060cebc  mov w3,#0x2
710060cec0  mov w1,wzr
710060cec4  mov w2,wzr
710060cec8  blr x8
710060cecc  ldr x0,[x19, #0x530]
710060ced0  ldr x8,[x0]
710060ced4  ldr x8,[x8, #0x298]
710060ced8  mov w1,#0x1
710060cedc  blr x8
710060cee0  ldr w9,[x19, #0xc]
710060cee4  ldr x8,[x26, #0x3b0]
710060cee8  orr w10,wzr,#0x38
710060ceec  mov x1,#0x307e
710060cef0  movk x1,#0x7e91, LSL #16
710060cef4  movk x1,#0x15, LSL #32
710060cef8  cmp w9,#0x4c
710060cefc  csel w9,w23,w9,eq
710060cf00  smaddl x8,w9,w10,x8
710060cf04  ldr x0,[x8, #0x88]
710060cf08  ldr x8,[x0]
710060cf0c  ldr x8,[x8, #0x10]
710060cf10  blr x8
710060cf14  ldp x2,x8,[x1]
710060cf18  subs x8,x8,x2
710060cf1c  b.eq 0x710060cf40
710060cf20  ldr x0,[x19, #0x530]
710060cf24  lsr x8,x8,#0x3
710060cf28  mov w9,#0xaaab
710060cf2c  movk w9,#0xaaaa, LSL #16
710060cf30  mul w1,w8,w9
710060cf34  ldr x8,[x0]
710060cf38  ldr x8,[x8, #0x2d0]
710060cf3c  blr x8
710060cf40  ldrsw x8,[x19, #0xc]
710060cf44  cmp w8,#0x5e
710060cf48  adrp x25,0x7105324000
710060cf4c  b.cs 0x710060df44
710060cf50  mov w9,#0xf5d0
710060cf54  add x28,x19,x9
710060cf58  ldr x9,[x26, #0x3b0]
710060cf5c  orr w11,wzr,#0xc
710060cf60  madd x8,x8,x11,x9
710060cf64  ldr x24,[x19, #0x450]
710060cf68  ldr x10,[x9]
710060cf6c  ldr x23,[x10, #0x8]
710060cf70  mov x0,x24
710060cf74  ldrsw x20,[x8, #0x14f0]
710060cf78  ldr x8,[x24]
710060cf7c  ldr x8,[x8, #0x50]
710060cf80  blr x8
710060cf84  mov w8,#0x628
710060cf88  madd x20,x20,x8,x23
710060cf8c  ldr x8,[x24]
710060cf90  ldr x8,[x8, #0x60]
710060cf94  add x1,x20,#0x504
710060cf98  mov x0,x24
710060cf9c  mov w2,wzr
710060cfa0  blr x8
710060cfa4  ldr x8,[x24]
710060cfa8  ldr x8,[x8, #0x68]
710060cfac  add x1,x20,#0x518
710060cfb0  mov x0,x24
710060cfb4  mov w2,wzr
710060cfb8  blr x8
710060cfbc  ldr x8,[x24]
710060cfc0  ldr s0,[x20, #0x548]
710060cfc4  mov x0,x24
710060cfc8  mov w1,wzr
710060cfcc  ldr x8,[x8, #0xe0]
710060cfd0  blr x8
710060cfd4  ldr x8,[x24]
710060cfd8  ldr x8,[x8, #0x130]
710060cfdc  mov w2,#0xffffffff
710060cfe0  mov w1,#0x4
710060cfe4  mov x0,x24
710060cfe8  blr x8
710060cfec  ldr x8,[x24]
710060cff0  ldr w1,[x19, #0x10]
710060cff4  mov x0,x24
710060cff8  mov w2,wzr
710060cffc  ldr x8,[x8, #0x140]
710060d000  blr x8
710060d004  ldr x0,[x19, #0x460]
710060d008  ldr x8,[x0]
710060d00c  ldr x8,[x8, #0x178]
710060d010  mov w1,#0x64
710060d014  blr x8
710060d018  mov w8,#0xf700
710060d01c  ldr x0,[x19, x8, LSL #0x0]
710060d020  cbz x0,0x710060d034
710060d024  ldr x8,[x0]
710060d028  ldr x8,[x8]
710060d02c  mov x1,x19
710060d030  blr x8
710060d034  ldr q0,[x19, #0xf7d0]
710060d038  dup s2,v0.S[0x2]
710060d03c  fmov s1,0x3f800000
710060d040  ldr x8,[x28]
710060d044  ldr x20,[sp, #0x18]
710060d048  fcmp s2,s1
710060d04c  adrp x26,0x7105332000
710060d050  b.ne 0x710060d068
710060d054  fcmp s0,s1
710060d058  b.ne 0x710060d068
710060d05c  dup s0,v0.S[0x1]
710060d060  fcmp s0,s1
710060d064  b.eq 0x710060d07c
710060d068  mov w9,#0xf7d0
710060d06c  add x9,x19,x9
710060d070  str x9,[x8, #0x268]
710060d074  ldr s0,[x9]
710060d078  str s0,[x8, #0x1fc]
710060d07c  ldr x0,[x19, #0x468]
710060d080  ldr x8,[x0]
710060d084  ldr x8,[x8, #0x150]
710060d088  mov x24,#0xa761
710060d08c  movk x24,#0x1d39, LSL #16
710060d090  movk x24,#0x3, LSL #32
710060d094  add x2,sp,#0x20
710060d098  mov w3,#0x1
710060d09c  mov x1,x24
710060d0a0  blr x8
710060d0a4  adrp x9,0x7104472000
710060d0a8  ldr s0,[sp, #0x24]
710060d0ac  ldr s1,[x9, #0xd5c]
710060d0b0  fdiv s0,s0,s1
710060d0b4  ldr x8,[x28]
710060d0b8  str s0,[x8, #0x264]
710060d0bc  adrp x8,0x71052b9000
710060d0c0  add x8,x8,#0x448
710060d0c4  ldarb w8,[x8]
710060d0c8  tbz w8,#0x0,0x710060df24
710060d0cc  ldr w0,[x19, #0xc]
710060d0d0  bl 0x710064b730
710060d0d4  ldr w8,[x0, #0x38]
710060d0d8  cmn w8,#0x1
710060d0dc  b.eq 0x710060d0f0
710060d0e0  ldr x9,[x28]
710060d0e4  ldr x10,[x0, #0x40]
710060d0e8  str w8,[x9, #0x270]
710060d0ec  str x10,[x9, #0x278]
710060d0f0  str xzr,[sp, #0x890]
710060d0f4  str xzr,[sp, #0x898]
710060d0f8  ldr x0,[x19, #0x478]
710060d0fc  ldr x8,[x0]
710060d100  ldr x8,[x8, #0x2b8]
710060d104  mov x23,#0xe258
710060d108  movk x23,#0x5dbf, LSL #16
710060d10c  mov x1,#0xdf0c
710060d110  movk x1,#0xfb50, LSL #16
710060d114  movk x23,#0x3, LSL #32
710060d118  movk x1,#0x4, LSL #32
710060d11c  add x3,sp,#0x890
710060d120  mov x2,x23
710060d124  blr x8
710060d128  ldr x0,[x19, #0x528]
710060d12c  ldr x8,[x0]
710060d130  ldr s0,[sp, #0x894]
710060d134  mov x1,x24
710060d138  ldr x8,[x8, #0x48]
710060d13c  mov x2,x23
710060d140  blr x8
710060d144  ldr x0,[x19, #0x510]
710060d148  ldr x8,[x0]
710060d14c  ldr s0,[sp, #0x894]
710060d150  mov x1,x24
710060d154  ldr x8,[x8, #0x48]
710060d158  mov x2,x23
710060d15c  blr x8
710060d160  ldr x0,[x19, #0x458]
710060d164  ldr x8,[x0]
710060d168  ldr x8,[x8, #0x60]
710060d16c  orr w1,wzr,#0x6
710060d170  blr x8
710060d174  ldr x8,[x21]
710060d178  ldr x8,[x8, #0x270]
710060d17c  mov x1,#0x94a7
710060d180  movk x1,#0x82a1, LSL #16
710060d184  mov x23,x0
710060d188  movk x1,#0x16, LSL #32
710060d18c  mov x0,x21
710060d190  mov x2,xzr
710060d194  blr x8
710060d198  ldr x8,[x23]
710060d19c  ldr x8,[x8, #0xa8]
710060d1a0  mov x0,x23
710060d1a4  blr x8
710060d1a8  ldr x8,[x23]
710060d1ac  ldr x8,[x8, #0xb0]
710060d1b0  mov w1,#0x1
710060d1b4  mov x0,x23
710060d1b8  blr x8
710060d1bc  ldr x8,[x21]
710060d1c0  ldr x8,[x8, #0x270]
710060d1c4  mov x2,#0x1a53
710060d1c8  movk x2,#0xbf35, LSL #16
710060d1cc  movk x2,#0x1a, LSL #32
710060d1d0  mov x0,x21
710060d1d4  mov x1,x22
710060d1d8  blr x8
710060d1dc  ldr x8,[x23]
710060d1e0  ldr x8,[x8, #0xb8]
710060d1e4  mov x0,x23
710060d1e8  blr x8
710060d1ec  ldp w21,w23,[x19, #0xc]
710060d1f0  sub w8,w21,#0x4b
710060d1f4  sxtw x23,w23
710060d1f8  cmp w8,#0x1
710060d1fc  b.hi 0x710060d250
710060d200  cmp w23,#0x8
710060d204  adrp x12,0x71052b9000
710060d208  b.cs 0x710060df44
710060d20c  ldr x8,[x12, #0x4f8]
710060d210  ldr x8,[x8]
710060d214  add x9,x8,x23, LSL #0x3
710060d218  ldr x9,[x9, #0x20]
710060d21c  ldr w10,[x9, #0x14]
710060d220  cmp w10,#0x2
710060d224  b.lt 0x710060d25c
710060d228  ldr w10,[x9, #0x1c]
710060d22c  cmn w10,#0x1
710060d230  b.eq 0x710060d25c
710060d234  ldr w11,[x9, #0x18]
710060d238  cmp w11,w21
710060d23c  b.eq 0x710060d26c
710060d240  cmp w10,w21
710060d244  b.ne 0x710060d25c
710060d248  add x9,x9,#0x100
710060d24c  b 0x710060d270
710060d250  cmp w23,#0x8
710060d254  adrp x12,0x71052b9000
710060d258  b.cs 0x710060df44
710060d25c  ldr x8,[x12, #0x4f8]
710060d260  ldr x8,[x8]
710060d264  add x9,x8,x23, LSL #0x3
710060d268  ldr x9,[x9, #0x20]
710060d26c  add x9,x9,#0xf0
710060d270  ldr x9,[x9, #0x8]
710060d274  ldrb w9,[x9, #0x94]
710060d278  cbnz w9,0x710060d62c
710060d27c  ldr x8,[x8, #0xb78]
710060d280  ldr x22,[x8]
710060d284  mov w0,w21
710060d288  bl 0x710065dd70
710060d28c  tbz w0,#0x0,0x710060d62c
710060d290  ldp x8,x9,[x22]
710060d294  cmp x9,x8
710060d298  b.eq 0x710060d2d8
710060d29c  ldr w10,[x8]
710060d2a0  cmp w21,w10
710060d2a4  b.eq 0x710060d2b8
710060d2a8  add x8,x8,#0x8
710060d2ac  cmp x9,x8
710060d2b0  b.ne 0x710060d29c
710060d2b4  b 0x710060d2d0
710060d2b8  cmp x8,x9
710060d2bc  b.eq 0x710060d2d0
710060d2c0  ldr w9,[x8, #0x4]
710060d2c4  add w9,w9,#0x1
710060d2c8  str w9,[x8, #0x4]
710060d2cc  b 0x710060d62c
710060d2d0  cmp w23,#0x8
710060d2d4  b.cs 0x710060df44
710060d2d8  ldr x8,[x25, #0x680]
710060d2dc  add x8,x8,x23, LSL #0x3
710060d2e0  ldr x8,[x8, #0xe8]
710060d2e4  orr w9,w21,#0x1
710060d2e8  cmp w9,#0x5b
710060d2ec  mov w9,#0x75
710060d2f0  csel w9,w9,w21,eq
710060d2f4  cmp w9,#0x75
710060d2f8  ldrb w8,[x8, #0x7d]
710060d2fc  strh wzr,[sp, #0x120]
710060d300  strb wzr,[sp, #0x20]
710060d304  str xzr,[sp, #0x8a0]
710060d308  str xzr,[sp, #0x898]
710060d30c  str xzr,[sp, #0x890]
710060d310  b.hi 0x710060d35c
710060d314  adrp x10,0x7104f81000
710060d318  add x10,x10,#0xe20
710060d31c  cmp w9,#0x72
710060d320  ldr x2,[x10, w9, SXTW #0x3]
710060d324  b.ne 0x710060d364
710060d328  cbz w8,0x710060d364
710060d32c  add x0,sp,#0x890
710060d330  mov x1,x2
710060d334  add x23,sp,#0x890
710060d338  bl 0x71039c2880
710060d33c  adrp x1,0x7104464000
710060d340  add x1,x1,#0x3dc
710060d344  add x0,sp,#0x890
710060d348  bl 0x71039c2880
710060d34c  ldrb w8,[sp, #0x890]
710060d350  tbnz w8,#0x0,0x710060d524
710060d354  orr x2,x23,#0x1
710060d358  b 0x710060d364
710060d35c  adrp x2,0x71042b2000
710060d360  add x2,x2,#0xe2e
710060d364  adrp x1,0x7104454000
710060d368  add x1,x1,#0x230
710060d36c  add x0,sp,#0x20
710060d370  bl 0x710147f330
710060d374  ldrb w8,[sp, #0x890]
710060d378  tbz w8,#0x0,0x710060d388
710060d37c  ldr x0,[sp, #0x8a0]
710060d380  cbz x0,0x710060d388
710060d384  bl 0x710392eb40
710060d388  ldr x0,[x26, #0xf20]
710060d38c  ldrb w11,[sp, #0x20]
710060d390  orr w8,wzr,#0xffffff
710060d394  str w8,[sp, #0x820]
710060d398  cbz w11,0x710060d3f4
710060d39c  add x10,sp,#0x20
710060d3a0  mov x8,xzr
710060d3a4  mov w9,#0xffffffff
710060d3a8  orr x10,x10,#0x1
710060d3ac  orr x12,xzr,#0x100000000
710060d3b0  adrp x13,0x7104754000
710060d3b4  add x13,x13,#0x84
710060d3b8  and w11,w11,#0xff
710060d3bc  sub w14,w11,#0x41
710060d3c0  add w15,w11,#0x20
710060d3c4  cmp w14,#0x1a
710060d3c8  csel w11,w15,w11,cc
710060d3cc  eor w11,w11,w9
710060d3d0  and w11,w11,#0xff
710060d3d4  ldr w11,[x13, w11, UXTW #0x2]
710060d3d8  eor w9,w11,w9, LSR #0x8
710060d3dc  ldrb w11,[x10], #0x1
710060d3e0  add x8,x8,x12
710060d3e4  cbnz w11,0x710060d3b8
710060d3e8  mvn w9,w9
710060d3ec  and x8,x8,#0xff00000000
710060d3f0  b 0x710060d3fc
710060d3f4  mov x9,xzr
710060d3f8  mov x8,xzr
710060d3fc  orr x8,x8,x9
710060d400  orr w23,wzr,#0xffffff
710060d404  cbz x8,0x710060d474
710060d408  ldr x9,[x0, #0x78]
710060d40c  ldr x10,[x9]
710060d410  ldr x9,[x10, #0x70]
710060d414  ldr x10,[x10, #0x40]
710060d418  ldr w11,[x10, #0xc]
710060d41c  add x10,x9,x11, LSL #0x3
710060d420  cbz w11,0x710060d454
710060d424  cmp x11,#0x0
710060d428  cinc x12,x11,lt
710060d42c  asr x12,x12,#0x1
710060d430  add x13,x9,x12, LSL #0x3
710060d434  ldr x14,[x13], #0x8
710060d438  and x14,x14,#0xffffffffff
710060d43c  mvn x15,x12
710060d440  add x11,x11,x15
710060d444  cmp x14,x8
710060d448  csel x11,x11,x12,cc
710060d44c  csel x9,x13,x9,cc
710060d450  cbnz x11,0x710060d424
710060d454  cmp x9,x10
710060d458  b.eq 0x710060d474
710060d45c  ldr x9,[x9]
710060d460  and x10,x9,#0xffffffffff
710060d464  cmp x10,x8
710060d468  b.ne 0x710060d474
710060d46c  lsr x1,x9,#0x28
710060d470  b 0x710060d478
710060d474  orr w1,wzr,#0xffffff
710060d478  bl 0x7103540d50
710060d47c  adrp x8,0x7104471000
710060d480  add x8,x8,#0xf50
710060d484  cmp x0,#0x0
710060d488  csel x8,x8,x0,eq
710060d48c  ldr w27,[x8]
710060d490  cmp w27,w23
710060d494  str w27,[sp, #0x820]
710060d498  b.eq 0x710060d628
710060d49c  adrp x8,0x710532a000
710060d4a0  ldr x8,[x8, #0x9d8]
710060d4a4  ldr x0,[x8]
710060d4a8  add x2,sp,#0x820
710060d4ac  mov w1,w21
710060d4b0  bl 0x7102608cc0
710060d4b4  ldp x9,x8,[x22, #0x8]
710060d4b8  cmp x9,x8
710060d4bc  b.eq 0x710060d4d8
710060d4c0  orr x8,x21,#0x100000000
710060d4c4  str x8,[x9]
710060d4c8  ldr x8,[x22, #0x8]
710060d4cc  add x8,x8,#0x8
710060d4d0  str x8,[x22, #0x8]
710060d4d4  b 0x710060d5d8
710060d4d8  ldr x23,[x22]
710060d4dc  sub x2,x9,x23
710060d4e0  asr x12,x2,#0x3
710060d4e4  add x9,x12,#0x1
710060d4e8  lsr x10,x9,#0x3d
710060d4ec  cbnz x10,0x710060df54
710060d4f0  sub x8,x8,x23
710060d4f4  asr x10,x8,#0x3
710060d4f8  orr x11,xzr,#0xffffffffffffffe
710060d4fc  cmp x10,x11
710060d500  b.hi 0x710060d52c
710060d504  asr x8,x8,#0x2
710060d508  cmp x8,x9
710060d50c  csel x24,x9,x8,cc
710060d510  cbz x24,0x710060df1c
710060d514  lsr x8,x24,#0x3d
710060d518  stp x12,x2,[sp]
710060d51c  cbz x8,0x710060d534
710060d520  b 0x710060df44
710060d524  ldr x2,[sp, #0x8a0]
710060d528  b 0x710060d364
710060d52c  stp x12,x2,[sp]
710060d530  orr x24,xzr,#0x1fffffffffffffff
710060d534  lsl x8,x24,#0x3
710060d538  cmp x8,#0x0
710060d53c  csinc x26,x8,xzr,ne
710060d540  mov w0,#0x10
710060d544  mov x1,x26
710060d548  bl 0x710392e290
710060d54c  mov x25,x0
710060d550  cbnz x0,0x710060d598
710060d554  adrp x8,0x7105332000
710060d558  ldr x0,[x8, #0xf00]
710060d55c  cbz x0,0x710060d594
710060d560  str wzr,[sp, #0x890]
710060d564  str x26,[sp, #0x20]
710060d568  ldr x8,[x0]
710060d56c  ldr x8,[x8, #0x30]
710060d570  add x1,sp,#0x890
710060d574  add x2,sp,#0x20
710060d578  blr x8
710060d57c  tbz w0,#0x0,0x710060d594
710060d580  mov w0,#0x10
710060d584  mov x1,x26
710060d588  bl 0x710392e290
710060d58c  mov x25,x0
710060d590  cbnz x0,0x710060d598
710060d594  mov x25,xzr
710060d598  ldp x12,x2,[sp]
710060d59c  add x26,x25,x12, LSL #0x3
710060d5a0  orr x8,x21,#0x100000000
710060d5a4  add x21,x25,x24, LSL #0x3
710060d5a8  str x8,[x26], #0x8
710060d5ac  cmp x2,#0x1
710060d5b0  b.lt 0x710060d5c0
710060d5b4  mov x0,x25
710060d5b8  mov x1,x23
710060d5bc  bl 0x71039c00e0
710060d5c0  stp x25,x26,[x22]
710060d5c4  adrp x26,0x7105332000
710060d5c8  str x21,[x22, #0x10]
710060d5cc  cbz x23,0x710060d5d8
710060d5d0  mov x0,x23
710060d5d4  bl 0x710392eb40
710060d5d8  ldr x21,[x26, #0xf20]
710060d5dc  ldr w8,[x21, #0x48]
710060d5e0  cmp w8,w27
710060d5e4  b.ls 0x710060d620
710060d5e8  ldr x22,[x21]
710060d5ec  mov x0,x22
710060d5f0  bl 0x71039c1a40
710060d5f4  ldr x8,[x21, #0x40]
710060d5f8  mov w9,#0x48
710060d5fc  madd x9,x27,x9,x8
710060d600  ldrb w9,[x9, #0x8]
710060d604  tbz w9,#0x0,0x710060d618
710060d608  mov w9,#0x48
710060d60c  madd x1,x27,x9,x8
710060d610  mov x0,x21
710060d614  bl 0x710353f5a0
710060d618  mov x0,x22
710060d61c  bl 0x71039c1a50
710060d620  orr w8,wzr,#0xffffff
710060d624  str w8,[sp, #0x820]
710060d628  adrp x25,0x7105324000
710060d62c  ldrsw x8,[x19, #0x10]
710060d630  cmp w8,#0x8
710060d634  b.cs 0x710060df44
710060d638  ldr x9,[x25, #0x680]
710060d63c  add x8,x9,x8
710060d640  ldrb w8,[x8, #0x128]
710060d644  cbnz w8,0x710060dec8
710060d648  ldr w8,[x20, #0x58]
710060d64c  ldr w1,[x19, #0xc]
710060d650  cmp w8,#0x2d
710060d654  b.ne 0x710060d688
710060d658  adrp x8,0x710523d000
710060d65c  ldr w8,[x8, #0xc]
710060d660  cmp w8,#0xd
710060d664  b.hi 0x710060d674
710060d668  orr w9,wzr,#0x7fe
710060d66c  lsr w8,w9,w8
710060d670  tbz w8,#0x0,0x710060d69c
710060d674  ldr w3,[x20, #0x64]
710060d678  cbz w3,0x710060d6a4
710060d67c  cmp w3,#0x1
710060d680  b.eq 0x710060d694
710060d684  b 0x710060d6a8
710060d688  sub w8,w8,#0x48
710060d68c  cmp w8,#0x3
710060d690  b.cs 0x710060d69c
710060d694  mov w3,wzr
710060d698  b 0x710060d6a8
710060d69c  ldr w3,[x20, #0x64]
710060d6a0  b 0x710060d6a8
710060d6a4  mov w3,#0x1
710060d6a8  ldrb w4,[x20, #0x7d]
710060d6ac  mov w2,#0x24
710060d6b0  add x0,sp,#0x20
710060d6b4  add x21,sp,#0x20
710060d6b8  bl 0x71017df420
710060d6bc  ldr x0,[x26, #0xf20]
710060d6c0  ldrb w12,[sp, #0x20]
710060d6c4  cbz w12,0x710060d71c
710060d6c8  mov x8,xzr
710060d6cc  orr x10,x21,#0x1
710060d6d0  mov w9,#0xffffffff
710060d6d4  orr x11,xzr,#0x100000000
710060d6d8  adrp x13,0x7104754000
710060d6dc  add x13,x13,#0x84
710060d6e0  and w12,w12,#0xff
710060d6e4  sub w14,w12,#0x41
710060d6e8  add w15,w12,#0x20
710060d6ec  cmp w14,#0x1a
710060d6f0  csel w12,w15,w12,cc
710060d6f4  eor w12,w12,w9
710060d6f8  and w12,w12,#0xff
710060d6fc  ldr w12,[x13, w12, UXTW #0x2]
710060d700  eor w9,w12,w9, LSR #0x8
710060d704  ldrb w12,[x10], #0x1
710060d708  add x8,x8,x11
710060d70c  cbnz w12,0x710060d6e0
710060d710  mvn w9,w9
710060d714  and x8,x8,#0xff00000000
710060d718  b 0x710060d724
710060d71c  mov x9,xzr
710060d720  mov x8,xzr
710060d724  orr x8,x8,x9
710060d728  orr w22,wzr,#0xffffff
710060d72c  cbz x8,0x710060d79c
710060d730  ldr x9,[x0, #0x78]
710060d734  ldr x10,[x9]
710060d738  ldr x9,[x10, #0x70]
710060d73c  ldr x10,[x10, #0x40]
710060d740  ldr w11,[x10, #0xc]
710060d744  add x10,x9,x11, LSL #0x3
710060d748  cbz w11,0x710060d77c
710060d74c  cmp x11,#0x0
710060d750  cinc x12,x11,lt
710060d754  asr x12,x12,#0x1
710060d758  add x13,x9,x12, LSL #0x3
710060d75c  ldr x14,[x13], #0x8
710060d760  and x14,x14,#0xffffffffff
710060d764  mvn x15,x12
710060d768  add x11,x11,x15
710060d76c  cmp x14,x8
710060d770  csel x11,x11,x12,cc
710060d774  csel x9,x13,x9,cc
710060d778  cbnz x11,0x710060d74c
710060d77c  cmp x9,x10
710060d780  b.eq 0x710060d79c
710060d784  ldr x9,[x9]
710060d788  and x10,x9,#0xffffffffff
710060d78c  cmp x10,x8
710060d790  b.ne 0x710060d79c
710060d794  lsr x1,x9,#0x28
710060d798  b 0x710060d7a0
710060d79c  orr w1,wzr,#0xffffff
710060d7a0  bl 0x7103540d50
710060d7a4  adrp x24,0x7104471000
710060d7a8  add x24,x24,#0xf50
710060d7ac  cmp x0,#0x0
710060d7b0  csel x8,x24,x0,eq
710060d7b4  ldr w21,[x8]
710060d7b8  cmp w21,w22
710060d7bc  stp w22,w21,[sp, #0x20]
710060d7c0  b.eq 0x710060d820
710060d7c4  ldr x22,[x26, #0xf20]
710060d7c8  ldr w8,[x22, #0x48]
710060d7cc  cmp w8,w21
710060d7d0  b.ls 0x710060d820
710060d7d4  ldr x23,[x22]
710060d7d8  mov x0,x23
710060d7dc  bl 0x71039c1a40
710060d7e0  ldr x8,[x22, #0x40]
710060d7e4  mov w9,#0x48
710060d7e8  madd x9,x21,x9,x8
710060d7ec  ldrb w9,[x9, #0x8]
710060d7f0  tbnz w9,#0x0,0x710060d80c
710060d7f4  mov x0,x23
710060d7f8  bl 0x71039c1a50
710060d7fc  mov x0,x22
710060d800  mov w1,w21
710060d804  bl 0x7103540d50
710060d808  b 0x710060d820
710060d80c  mov w9,#0x48
710060d810  madd x0,x21,x9,x8
710060d814  bl 0x71035432d0
710060d818  mov x0,x23
710060d81c  bl 0x71039c1a50
710060d820  ldr x8,[x28, #0x358]
710060d824  ldr x9,[x28, #0x360]
710060d828  cmp x8,x9
710060d82c  b.cs 0x710060d888
710060d830  orr w9,wzr,#0xffffff
710060d834  cmp w21,w9
710060d838  stp w9,w21,[x8]
710060d83c  b.eq 0x710060d8b0
710060d840  ldr x22,[x26, #0xf20]
710060d844  ldr w8,[x22, #0x48]
710060d848  cmp w8,w21
710060d84c  b.ls 0x710060d8b0
710060d850  ldr x23,[x22]
710060d854  mov x0,x23
710060d858  bl 0x71039c1a40
710060d85c  ldr x8,[x22, #0x40]
710060d860  mov w9,#0x48
710060d864  madd x9,x21,x9,x8
710060d868  ldrb w9,[x9, #0x8]
710060d86c  tbnz w9,#0x0,0x710060d89c
710060d870  mov x0,x23
710060d874  bl 0x71039c1a50
710060d878  mov x0,x22
710060d87c  mov w1,w21
710060d880  bl 0x7103540d50
710060d884  b 0x710060d8b0
710060d888  mov w8,#0xf920
710060d88c  add x0,x19,x8
710060d890  add x1,sp,#0x20
710060d894  bl 0x7100646800
710060d898  b 0x710060d8bc
710060d89c  mov w9,#0x48
710060d8a0  madd x0,x21,x9,x8
710060d8a4  bl 0x71035432d0
710060d8a8  mov x0,x23
710060d8ac  bl 0x71039c1a50
710060d8b0  ldr x8,[x28, #0x358]
710060d8b4  add x8,x8,#0x8
710060d8b8  str x8,[x28, #0x358]
710060d8bc  add x0,sp,#0x20
710060d8c0  bl 0x710353f120
710060d8c4  orr w8,wzr,#0xffffff
710060d8c8  cmp w21,w8
710060d8cc  b.eq 0x710060d918
710060d8d0  ldr x22,[x26, #0xf20]
710060d8d4  ldr w8,[x22, #0x48]
710060d8d8  cmp w8,w21
710060d8dc  b.ls 0x710060d918
710060d8e0  ldr x23,[x22]
710060d8e4  mov x0,x23
710060d8e8  bl 0x71039c1a40
710060d8ec  ldr x8,[x22, #0x40]
710060d8f0  mov w9,#0x48
710060d8f4  madd x9,x21,x9,x8
710060d8f8  ldrb w9,[x9, #0x8]
710060d8fc  tbz w9,#0x0,0x710060d910
710060d900  mov w9,#0x48
710060d904  madd x1,x21,x9,x8
710060d908  mov x0,x22
710060d90c  bl 0x710353f5a0
710060d910  mov x0,x23
710060d914  bl 0x71039c1a50
710060d918  orr x8,xzr,#0xffffff00ffffff
710060d91c  str x8,[sp, #0x20]
710060d920  ldr x9,[x28, #0x358]
710060d924  ldr x10,[x28, #0x360]
710060d928  cmp x9,x10
710060d92c  b.cs 0x710060d944
710060d930  str x8,[x9]
710060d934  ldr x8,[x28, #0x358]
710060d938  add x8,x8,#0x8
710060d93c  str x8,[x28, #0x358]
710060d940  b 0x710060d954
710060d944  mov w8,#0xf920
710060d948  add x0,x19,x8
710060d94c  add x1,sp,#0x20
710060d950  bl 0x7100646800
710060d954  add x0,sp,#0x20
710060d958  bl 0x710353f120
710060d95c  ldr w8,[x20, #0x58]
710060d960  ldr w1,[x19, #0xc]
710060d964  cmp w8,#0x2d
710060d968  b.ne 0x710060d99c
710060d96c  adrp x8,0x710523d000
710060d970  ldr w8,[x8, #0xc]
710060d974  cmp w8,#0xd
710060d978  b.hi 0x710060d988
710060d97c  orr w9,wzr,#0x7fe
710060d980  lsr w8,w9,w8
710060d984  tbz w8,#0x0,0x710060d9b0
710060d988  ldr w3,[x20, #0x64]
710060d98c  cbz w3,0x710060d9b8
710060d990  cmp w3,#0x1
710060d994  b.eq 0x710060d9a8
710060d998  b 0x710060d9bc
710060d99c  sub w8,w8,#0x48
710060d9a0  cmp w8,#0x3
710060d9a4  b.cs 0x710060d9b0
710060d9a8  mov w3,wzr
710060d9ac  b 0x710060d9bc
710060d9b0  ldr w3,[x20, #0x64]
710060d9b4  b 0x710060d9bc
710060d9b8  mov w3,#0x1
710060d9bc  ldrb w4,[x20, #0x7d]
710060d9c0  add x0,sp,#0x20
710060d9c4  mov w2,#0x10
710060d9c8  add x21,sp,#0x20
710060d9cc  bl 0x71017df420
710060d9d0  ldr x0,[x26, #0xf20]
710060d9d4  ldrb w12,[sp, #0x20]
710060d9d8  cbz w12,0x710060da30
710060d9dc  mov x8,xzr
710060d9e0  orr x10,x21,#0x1
710060d9e4  mov w9,#0xffffffff
710060d9e8  orr x11,xzr,#0x100000000
710060d9ec  adrp x13,0x7104754000
710060d9f0  add x13,x13,#0x84
710060d9f4  and w12,w12,#0xff
710060d9f8  sub w14,w12,#0x41
710060d9fc  add w15,w12,#0x20
710060da00  cmp w14,#0x1a
710060da04  csel w12,w15,w12,cc
710060da08  eor w12,w12,w9
710060da0c  and w12,w12,#0xff
710060da10  ldr w12,[x13, w12, UXTW #0x2]
710060da14  eor w9,w12,w9, LSR #0x8
710060da18  ldrb w12,[x10], #0x1
710060da1c  add x8,x8,x11
710060da20  cbnz w12,0x710060d9f4
710060da24  mvn w9,w9
710060da28  and x8,x8,#0xff00000000
710060da2c  b 0x710060da38
710060da30  mov x9,xzr
710060da34  mov x8,xzr
710060da38  orr x8,x8,x9
710060da3c  orr w22,wzr,#0xffffff
710060da40  cbz x8,0x710060dab0
710060da44  ldr x9,[x0, #0x78]
710060da48  ldr x10,[x9]
710060da4c  ldr x9,[x10, #0x70]
710060da50  ldr x10,[x10, #0x40]
710060da54  ldr w11,[x10, #0xc]
710060da58  add x10,x9,x11, LSL #0x3
710060da5c  cbz w11,0x710060da90
710060da60  cmp x11,#0x0
710060da64  cinc x12,x11,lt
710060da68  asr x12,x12,#0x1
710060da6c  add x13,x9,x12, LSL #0x3
710060da70  ldr x14,[x13], #0x8
710060da74  and x14,x14,#0xffffffffff
710060da78  mvn x15,x12
710060da7c  add x11,x11,x15
710060da80  cmp x14,x8
710060da84  csel x11,x11,x12,cc
710060da88  csel x9,x13,x9,cc
710060da8c  cbnz x11,0x710060da60
710060da90  cmp x9,x10
710060da94  b.eq 0x710060dab0
710060da98  ldr x9,[x9]
710060da9c  and x10,x9,#0xffffffffff
710060daa0  cmp x10,x8
710060daa4  b.ne 0x710060dab0
710060daa8  lsr x1,x9,#0x28
710060daac  b 0x710060dab4
710060dab0  orr w1,wzr,#0xffffff
710060dab4  bl 0x7103540d50
710060dab8  cmp x0,#0x0
710060dabc  csel x8,x24,x0,eq
710060dac0  ldr w21,[x8]
710060dac4  cmp w21,w22
710060dac8  stp w22,w21,[sp, #0x20]
710060dacc  b.eq 0x710060db2c
710060dad0  ldr x22,[x26, #0xf20]
710060dad4  ldr w8,[x22, #0x48]
710060dad8  cmp w8,w21
710060dadc  b.ls 0x710060db2c
710060dae0  ldr x23,[x22]
710060dae4  mov x0,x23
710060dae8  bl 0x71039c1a40
710060daec  ldr x8,[x22, #0x40]
710060daf0  mov w9,#0x48
710060daf4  madd x9,x21,x9,x8
710060daf8  ldrb w9,[x9, #0x8]
710060dafc  tbnz w9,#0x0,0x710060db18
710060db00  mov x0,x23
710060db04  bl 0x71039c1a50
710060db08  mov x0,x22
710060db0c  mov w1,w21
710060db10  bl 0x7103540d50
710060db14  b 0x710060db2c
710060db18  mov w9,#0x48
710060db1c  madd x0,x21,x9,x8
710060db20  bl 0x71035432d0
710060db24  mov x0,x23
710060db28  bl 0x71039c1a50
710060db2c  ldr x8,[x28, #0x358]
710060db30  ldr x9,[x28, #0x360]
710060db34  cmp x8,x9
710060db38  b.cs 0x710060db94
710060db3c  orr w9,wzr,#0xffffff
710060db40  cmp w21,w9
710060db44  stp w9,w21,[x8]
710060db48  b.eq 0x710060dbbc
710060db4c  ldr x22,[x26, #0xf20]
710060db50  ldr w8,[x22, #0x48]
710060db54  cmp w8,w21
710060db58  b.ls 0x710060dbbc
710060db5c  ldr x23,[x22]
710060db60  mov x0,x23
710060db64  bl 0x71039c1a40
710060db68  ldr x8,[x22, #0x40]
710060db6c  mov w9,#0x48
710060db70  madd x9,x21,x9,x8
710060db74  ldrb w9,[x9, #0x8]
710060db78  tbnz w9,#0x0,0x710060dba8
710060db7c  mov x0,x23
710060db80  bl 0x71039c1a50
710060db84  mov x0,x22
710060db88  mov w1,w21
710060db8c  bl 0x7103540d50
710060db90  b 0x710060dbbc
710060db94  mov w8,#0xf920
710060db98  add x0,x19,x8
710060db9c  add x1,sp,#0x20
710060dba0  bl 0x7100646800
710060dba4  b 0x710060dbc8
710060dba8  mov w9,#0x48
710060dbac  madd x0,x21,x9,x8
710060dbb0  bl 0x71035432d0
710060dbb4  mov x0,x23
710060dbb8  bl 0x71039c1a50
710060dbbc  ldr x8,[x28, #0x358]
710060dbc0  add x8,x8,#0x8
710060dbc4  str x8,[x28, #0x358]
710060dbc8  add x0,sp,#0x20
710060dbcc  bl 0x710353f120
710060dbd0  orr w8,wzr,#0xffffff
710060dbd4  cmp w21,w8
710060dbd8  b.eq 0x710060dc24
710060dbdc  ldr x22,[x26, #0xf20]
710060dbe0  ldr w8,[x22, #0x48]
710060dbe4  cmp w8,w21
710060dbe8  b.ls 0x710060dc24
710060dbec  ldr x23,[x22]
710060dbf0  mov x0,x23
710060dbf4  bl 0x71039c1a40
710060dbf8  ldr x8,[x22, #0x40]
710060dbfc  mov w9,#0x48
710060dc00  madd x9,x21,x9,x8
710060dc04  ldrb w9,[x9, #0x8]
710060dc08  tbz w9,#0x0,0x710060dc1c
710060dc0c  mov w9,#0x48
710060dc10  madd x1,x21,x9,x8
710060dc14  mov x0,x22
710060dc18  bl 0x710353f5a0
710060dc1c  mov x0,x23
710060dc20  bl 0x71039c1a50
710060dc24  ldr w8,[x19, #0xc]
710060dc28  cmp w8,#0x6
710060dc2c  b.ne 0x710060de60
710060dc30  ldr x8,[x26, #0xf20]
710060dc34  ldr w9,[sp, #0x850]
710060dc38  orr w10,wzr,#0xffffff
710060dc3c  ldr x8,[x8, #0x78]
710060dc40  cmp w9,w10
710060dc44  b.eq 0x710060dc70
710060dc48  ldr x10,[x8]
710060dc4c  ldr x11,[x10, #0x40]
710060dc50  ldr w11,[x11, #0x4]
710060dc54  cmp w11,w9
710060dc58  b.ls 0x710060dc70
710060dc5c  ldr x10,[x10, #0x60]
710060dc60  lsl x9,x9,#0x5
710060dc64  ldr x9,[x10, x9, LSL #0x0]
710060dc68  and x9,x9,#0xffffffffff
710060dc6c  b 0x710060dc74
710060dc70  mov x9,xzr
710060dc74  ldr x21,[x8, #0x8]
710060dc78  str x9,[sp, #0x20]
710060dc7c  ldr x8,[x21, #0x8]
710060dc80  ldr x1,[x21, #0x20]
710060dc84  ldr w2,[x8, #0x8]
710060dc88  adrp x4,0x7103542000
710060dc8c  add x4,x4,#0x240
710060dc90  add x0,sp,#0x20
710060dc94  mov w3,#0x8
710060dc98  bl 0x71039c2630
710060dc9c  orr w10,wzr,#0xffffff
710060dca0  cbz x0,0x710060dcd0
710060dca4  ldr x8,[x0]
710060dca8  lsr x8,x8,#0x28
710060dcac  cmp w8,w10
710060dcb0  orr w9,wzr,#0xffffff
710060dcb4  b.eq 0x710060dcd4
710060dcb8  ldr x9,[x21, #0x8]
710060dcbc  ldr w9,[x9, #0x4]
710060dcc0  cmp w9,w8
710060dcc4  orr w9,wzr,#0xffffff
710060dcc8  csel w9,w8,w9,hi
710060dccc  b 0x710060dcd4
710060dcd0  orr w9,wzr,#0xffffff
710060dcd4  ldr x8,[x26, #0xf20]
710060dcd8  ldr x8,[x8, #0x78]
710060dcdc  ldr x21,[x8, #0x8]
710060dce0  ldr x8,[x21, #0x8]
710060dce4  cmp w9,w10
710060dce8  b.eq 0x710060dd38
710060dcec  ldr w10,[x8, #0x4]
710060dcf0  cmp w10,w9
710060dcf4  b.ls 0x710060dd38
710060dcf8  ldr x10,[x21, #0x28]
710060dcfc  cbz x10,0x710060dd10
710060dd00  ldr w9,[x10, w9, UXTW #0x2]
710060dd04  orr w10,wzr,#0xffffff
710060dd08  cmp w9,w10
710060dd0c  b.eq 0x710060dd38
710060dd10  ldr w10,[x8, #0x8]
710060dd14  cmp w10,w9
710060dd18  b.ls 0x710060dd38
710060dd1c  ldr x10,[x21, #0x30]
710060dd20  mov w9,w9
710060dd24  adds x9,x10,x9, LSL #0x5
710060dd28  b.eq 0x710060dd3c
710060dd2c  ldr x9,[x9, #0x8]
710060dd30  and x9,x9,#0xffffffffff
710060dd34  b 0x710060dd3c
710060dd38  mov x9,xzr
710060dd3c  str x9,[sp, #0x20]
710060dd40  ldr x1,[x21, #0x20]
710060dd44  ldr w2,[x8, #0x8]
710060dd48  adrp x4,0x7103542000
710060dd4c  add x4,x4,#0x240
710060dd50  add x0,sp,#0x20
710060dd54  mov w3,#0x8
710060dd58  bl 0x71039c2630
710060dd5c  orr w22,wzr,#0xffffff
710060dd60  cbz x0,0x710060dd90
710060dd64  ldr x8,[x0]
710060dd68  lsr x8,x8,#0x28
710060dd6c  cmp w8,w22
710060dd70  orr w1,wzr,#0xffffff
710060dd74  b.eq 0x710060dd94
710060dd78  ldr x9,[x21, #0x8]
710060dd7c  ldr w9,[x9, #0x4]
710060dd80  cmp w9,w8
710060dd84  orr w9,wzr,#0xffffff
710060dd88  csel w1,w8,w9,hi
710060dd8c  b 0x710060dd94
710060dd90  orr w1,wzr,#0xffffff
710060dd94  mov x2,#0xdb16
710060dd98  movk x2,#0xa1e0, LSL #16
710060dd9c  movk x2,#0x17, LSL #32
710060dda0  add x0,sp,#0x890
710060dda4  bl 0x71017dd770
710060dda8  ldr w21,[sp, #0x890]
710060ddac  cmp w21,w22
710060ddb0  b.ne 0x710060ddbc
710060ddb4  str w21,[sp, #0x20]
710060ddb8  b 0x710060ddd8
710060ddbc  ldr x0,[x26, #0xf20]
710060ddc0  mov w1,w21
710060ddc4  bl 0x7103540a00
710060ddc8  ldr x0,[x26, #0xf20]
710060ddcc  mov w1,w21
710060ddd0  str w21,[sp, #0x20]
710060ddd4  bl 0x7103540a00
710060ddd8  orr w8,wzr,#0xffffff
710060dddc  str w8,[sp, #0x24]
710060dde0  ldr x22,[x28, #0x358]
710060dde4  ldr x9,[x28, #0x360]
710060dde8  cmp x22,x9
710060ddec  b.cs 0x710060de20
710060ddf0  cmp w21,w8
710060ddf4  str w21,[x22]
710060ddf8  b.eq 0x710060de08
710060ddfc  ldr x0,[x26, #0xf20]
710060de00  mov w1,w21
710060de04  bl 0x7103540a00
710060de08  orr w8,wzr,#0xffffff
710060de0c  str w8,[x22, #0x4]
710060de10  ldr x8,[x28, #0x358]
710060de14  add x8,x8,#0x8
710060de18  str x8,[x28, #0x358]
710060de1c  b 0x710060de30
710060de20  mov w8,#0xf920
710060de24  add x0,x19,x8
710060de28  add x1,sp,#0x20
710060de2c  bl 0x7100646800
710060de30  add x0,sp,#0x20
710060de34  bl 0x710353f120
710060de38  orr w22,wzr,#0xffffff
710060de3c  cmp w21,w22
710060de40  b.eq 0x710060de60
710060de44  ldr x0,[x26, #0xf20]
710060de48  mov w1,w21
710060de4c  bl 0x7103540b10
710060de50  ldr x0,[x26, #0xf20]
710060de54  mov w1,w21
710060de58  bl 0x7103540b10
710060de5c  str w22,[sp, #0x890]
710060de60  ldr x9,[sp, #0x10]
710060de64  ldr w8,[x9, #0x18]
710060de68  cmp w8,#0x4b
710060de6c  b.ne 0x710060debc
710060de70  ldr w8,[x9, #0x1c]
710060de74  cmp w8,#0x4c
710060de78  b.ne 0x710060debc
710060de7c  add x21,x20,#0x28
710060de80  mov x0,x21
710060de84  bl 0x71039c19c0
710060de88  mov x22,x20
710060de8c  ldr w20,[x20, #0x50]
710060de90  subs w8,w20,#0x1
710060de94  mov x0,x21
710060de98  str w8,[x22, #0x50]
710060de9c  bl 0x71039c19d0
710060dea0  cmp w20,#0x1
710060dea4  b.gt 0x710060dec8
710060dea8  ldr x8,[x22]
710060deac  ldr x8,[x8, #0x20]
710060deb0  mov x0,x22
710060deb4  blr x8
710060deb8  b 0x710060dec8
710060debc  ldr w1,[x19, #0xc]
710060dec0  mov x0,x20
710060dec4  bl 0x71017e8610
710060dec8  ldr x19,[x19, #0x20]
710060decc  ldr x0,[x19, #0x58]
710060ded0  ldr x8,[x0]
710060ded4  ldr x8,[x8, #0x7e0]
710060ded8  blr x8
710060dedc  strb wzr,[x19, #0x30]
710060dee0  ldr w1,[sp, #0x850]
710060dee4  orr w19,wzr,#0xffffff
710060dee8  cmp w1,w19
710060deec  b.eq 0x710060defc
710060def0  ldr x0,[x26, #0xf20]
710060def4  bl 0x7103540b10
710060def8  str w19,[sp, #0x850]
710060defc  add sp,sp,#0x9a0
710060df00  ldp x29,x30,[sp, #0x50]
710060df04  ldp x20,x19,[sp, #0x40]
710060df08  ldp x22,x21,[sp, #0x30]
710060df0c  ldp x24,x23,[sp, #0x20]
710060df10  ldp x26,x25,[sp, #0x10]
710060df14  ldp x28,x27,[sp], #0x60
710060df18  ret
710060df1c  mov x25,xzr
710060df20  b 0x710060d59c
710060df24  adrp x0,0x71052b9000
710060df28  add x0,x0,#0x448
710060df2c  bl 0x71039c06b0
710060df30  cbz w0,0x710060d0cc
710060df34  adrp x0,0x71052b9000
710060df38  add x0,x0,#0x448
710060df3c  bl 0x71039c06c0
710060df40  b 0x710060d0cc
710060df44  bl 0x71039c2650
710060df48  mov w8,#0x24d0
710060df4c  add x0,x9,x8
710060df50  bl 0x71039c1330
710060df54  mov x0,x22
710060df58  bl 0x71039c0c00
