// addr:      7101e4b7f0
// offset:    0x1e4b7f0
// name:      FUN_7101e4b7f0
// mangled:   
// size:      1408

7101e4b7f0  sub sp,sp,#0xe0
7101e4b7f4  stp d9,d8,[sp, #0x70]
7101e4b7f8  stp x28,x27,[sp, #0x80]
7101e4b7fc  stp x26,x25,[sp, #0x90]
7101e4b800  stp x24,x23,[sp, #0xa0]
7101e4b804  stp x22,x21,[sp, #0xb0]
7101e4b808  stp x20,x19,[sp, #0xc0]
7101e4b80c  stp x29,x30,[sp, #0xd0]
7101e4b810  add x29,sp,#0xd0
7101e4b814  ldrb w8,[x0, #0x8]
7101e4b818  cmp w8,w1, UXTB 
7101e4b81c  b.ls 0x7101e4bd3c
7101e4b820  fcvtzu w22,s0
7101e4b824  mov x21,x2
7101e4b828  orr w9,wzr,#0xffff
7101e4b82c  sxth w8,w21
7101e4b830  bics wzr,w9,w21
7101e4b834  cset w9,ne
7101e4b838  cmp w8,#0x7d0
7101e4b83c  mov v8.16B,v0.16B
7101e4b840  cset w8,lt
7101e4b844  and w28,w9,w8
7101e4b848  mov w24,w3
7101e4b84c  mov x20,x0
7101e4b850  mov w19,w1
7101e4b854  adrp x25,0x710532f000
7101e4b858  cmp w28,#0x1
7101e4b85c  b.ne 0x7101e4b8c8
7101e4b860  ldr x8,[x25, #0x730]
7101e4b864  ldr x8,[x8, #0x8]
7101e4b868  ldr x10,[x8, #0x1d8]
7101e4b86c  lsl x8,x21,#0x30
7101e4b870  add x8,x10,x8, ASR #0x2f
7101e4b874  orr x11,xzr,#-0x3333333333333334
7101e4b878  ldp x9,x10,[x10, #0x20]
7101e4b87c  sub x10,x10,x9
7101e4b880  asr x10,x10,#0x6
7101e4b884  movk x11,#0xcccd
7101e4b888  mul x10,x10,x11
7101e4b88c  ldrh w8,[x8, #0x60]
7101e4b890  cmp w10,w8
7101e4b894  b.ls 0x7101e4b8c8
7101e4b898  mov w11,#0x140
7101e4b89c  madd x9,x8,x11,x9
7101e4b8a0  adrp x11,0x7105182000
7101e4b8a4  add x11,x11,#0xb08
7101e4b8a8  cmp x10,x8
7101e4b8ac  csel x8,x9,x11,hi
7101e4b8b0  ldr s0,[x8, #0x74]
7101e4b8b4  ldr w1,[x8, #0x70]
7101e4b8b8  mov w0,w22
7101e4b8bc  bl 0x71025c9ac0
7101e4b8c0  mov w23,w0
7101e4b8c4  b 0x7101e4b8cc
7101e4b8c8  mov w23,#0x1
7101e4b8cc  and w8,w19,#0xff
7101e4b8d0  cmp w8,#0x3
7101e4b8d4  b.hi 0x7101e4bb64
7101e4b8d8  ldr x8,[x20]
7101e4b8dc  add x8,x8,w19, UXTB  #0x3
7101e4b8e0  ldr x27,[x8, #0x48]
7101e4b8e4  cbz x27,0x7101e4bb64
7101e4b8e8  ldrb w8,[x20, #0x9]
7101e4b8ec  cbz w8,0x7101e4bb64
7101e4b8f0  ldrh w8,[x27, #0xb6]
7101e4b8f4  cmp w8,w23, UXTH 
7101e4b8f8  b.cs 0x7101e4bb48
7101e4b8fc  add x25,x27,#0x20
7101e4b900  adrp x1,0x710436c000
7101e4b904  add x1,x1,#0xa8d
7101e4b908  add x8,sp,#0x10
7101e4b90c  mov x0,x25
7101e4b910  and w26,w23,#0xffff
7101e4b914  bl 0x7103776910
7101e4b918  cmp w26,#0x63
7101e4b91c  b.cc 0x7101e4b934
7101e4b920  adrp x1,0x7104431000
7101e4b924  add x1,x1,#0x8ca
7101e4b928  add x0,sp,#0x10
7101e4b92c  bl 0x710377a120
7101e4b930  b 0x7101e4b94c
7101e4b934  adrp x1,0x71042d4000
7101e4b938  add x1,x1,#0xc86
7101e4b93c  add x0,sp,#0x10
7101e4b940  mov w2,#0x1
7101e4b944  mov w3,w26
7101e4b948  bl 0x710377a280
7101e4b94c  ldr x0,[sp, #0x18]
7101e4b950  adrp x8,0x710523d000
7101e4b954  add x8,x8,#0x9a8
7101e4b958  stp x8,xzr,[sp, #0x10]
7101e4b95c  cbz x0,0x7101e4b964
7101e4b960  bl 0x710392eb40
7101e4b964  adrp x1,0x7104270000
7101e4b968  add x1,x1,#0x610
7101e4b96c  mov x8,sp
7101e4b970  mov x0,x25
7101e4b974  and w26,w23,#0xffff
7101e4b978  bl 0x7103776910
7101e4b97c  cmp w26,#0x63
7101e4b980  b.cc 0x7101e4b998
7101e4b984  adrp x1,0x7104431000
7101e4b988  add x1,x1,#0x8ca
7101e4b98c  mov x0,sp
7101e4b990  bl 0x710377a120
7101e4b994  b 0x7101e4b9b0
7101e4b998  adrp x1,0x71042d4000
7101e4b99c  add x1,x1,#0xc86
7101e4b9a0  mov x0,sp
7101e4b9a4  mov w2,#0x1
7101e4b9a8  mov w3,w26
7101e4b9ac  bl 0x710377a280
7101e4b9b0  ldr x0,[sp, #0x8]
7101e4b9b4  adrp x8,0x710523d000
7101e4b9b8  add x8,x8,#0x9a8
7101e4b9bc  stp x8,xzr,[sp]
7101e4b9c0  cbz x0,0x7101e4b9c8
7101e4b9c4  bl 0x710392eb40
7101e4b9c8  adrp x1,0x71042b4000
7101e4b9cc  add x1,x1,#0xab5
7101e4b9d0  add x8,sp,#0x20
7101e4b9d4  mov x0,x25
7101e4b9d8  add x26,sp,#0x20
7101e4b9dc  bl 0x71037780e0
7101e4b9e0  mov w0,#0x10
7101e4b9e4  mov w1,#0x10
7101e4b9e8  bl 0x710392e290
7101e4b9ec  cbnz x0,0x7101e4ba34
7101e4b9f0  adrp x8,0x7105332000
7101e4b9f4  ldr x0,[x8, #0xf00]
7101e4b9f8  cbz x0,0x7101e4ba30
7101e4b9fc  mov w8,#0x10
7101e4ba00  stur wzr,[x29, #-0x64]
7101e4ba04  sub x1,x29,#0x64
7101e4ba08  str x8,[sp, #0x60]
7101e4ba0c  ldr x8,[x0]
7101e4ba10  ldr x8,[x8, #0x30]
7101e4ba14  add x2,sp,#0x60
7101e4ba18  blr x8
7101e4ba1c  tbz w0,#0x0,0x7101e4ba30
7101e4ba20  mov w0,#0x10
7101e4ba24  mov w1,#0x10
7101e4ba28  bl 0x710392e290
7101e4ba2c  cbnz x0,0x7101e4ba34
7101e4ba30  mov x0,xzr
7101e4ba34  adrp x25,0x710523d000
7101e4ba38  add x25,x25,#0x9e8
7101e4ba3c  cmp x26,x0
7101e4ba40  stp x25,xzr,[x0]
7101e4ba44  b.eq 0x7101e4ba54
7101e4ba48  ldr x8,[sp, #0x28]
7101e4ba4c  str xzr,[sp, #0x28]
7101e4ba50  str x8,[x0, #0x8]
7101e4ba54  ldr x8,[x27, #0xa8]
7101e4ba58  str x0,[x27, #0xa8]
7101e4ba5c  cbz x8,0x7101e4ba70
7101e4ba60  ldr x9,[x8]
7101e4ba64  ldr x9,[x9, #0x8]
7101e4ba68  mov x0,x8
7101e4ba6c  blr x9
7101e4ba70  ldr x0,[sp, #0x28]
7101e4ba74  stp x25,xzr,[sp, #0x20]
7101e4ba78  cbz x0,0x7101e4ba80
7101e4ba7c  bl 0x710392eb40
7101e4ba80  fmov s9,0x3f800000
7101e4ba84  ldr x0,[x27, #0xa8]
7101e4ba88  mov v0.16B,v9.16B
7101e4ba8c  bl 0x710377aee0
7101e4ba90  ldr x0,[x27, #0x28]
7101e4ba94  mov v0.16B,v9.16B
7101e4ba98  adrp x1,0x71042d4000
7101e4ba9c  add x1,x1,#0xc7e
7101e4baa0  bl 0x7103778300
7101e4baa4  adrp x25,0x710532f000
7101e4baa8  tbnz w24,#0x0,0x7101e4bb40
7101e4baac  adrp x8,0x710532f000
7101e4bab0  ldr x8,[x8, #0x8d0]
7101e4bab4  and w9,w23,#0xffff
7101e4bab8  cmp w9,#0x63
7101e4babc  b.ne 0x7101e4bad0
7101e4bac0  mov x9,#0x20b6
7101e4bac4  movk x9,#0x5bfb, LSL #16
7101e4bac8  movk x9,#0x14, LSL #32
7101e4bacc  b 0x7101e4bad4
7101e4bad0  ldr x9,[x27, #0x90]
7101e4bad4  str x9,[sp, #0x60]
7101e4bad8  ldr x1,[x8, #0x8]
7101e4badc  mov w3,#0xa
7101e4bae0  add x0,sp,#0x20
7101e4bae4  add x2,sp,#0x60
7101e4bae8  bl 0x7103314db0
7101e4baec  adrp x8,0x7104f73000
7101e4baf0  add x8,x8,#0xd50
7101e4baf4  str x8,[sp, #0x28]
7101e4baf8  ldr x8,[sp, #0x30]
7101e4bafc  cbz x8,0x7101e4bb38
7101e4bb00  adrp x9,0x7106dd5000
7101e4bb04  ldrb w9,[x9, #0x3a8]
7101e4bb08  cmp w9,#0x1
7101e4bb0c  b.ne 0x7101e4bb38
7101e4bb10  adrp x10,0x7106dd5000
7101e4bb14  ldr w9,[sp, #0x38]
7101e4bb18  ldr w10,[x10, #0x3ac]
7101e4bb1c  cmp w9,w10
7101e4bb20  b.ne 0x7101e4bb38
7101e4bb24  ldr wzr,[x8, #0x38]!
7101e4bb28  ldaxr w9,[x8]
7101e4bb2c  sub w9,w9,#0x1
7101e4bb30  stlxr w10,w9,[x8]
7101e4bb34  cbnz w10,0x7101e4bb28
7101e4bb38  str xzr,[sp, #0x30]
7101e4bb3c  strb wzr,[sp, #0x40]
7101e4bb40  ldrb w8,[x20, #0x9]
7101e4bb44  cbz w8,0x7101e4bb64
7101e4bb48  add x0,x27,#0x40
7101e4bb4c  and w3,w23,#0xffff
7101e4bb50  adrp x1,0x71043be000
7101e4bb54  add x1,x1,#0xd1d
7101e4bb58  mov w2,#0x1
7101e4bb5c  bl 0x710377a280
7101e4bb60  strh w23,[x27, #0xb6]
7101e4bb64  cmp w23,#0x63
7101e4bb68  b.cc 0x7101e4bc64
7101e4bb6c  fmov s0,0x3f800000
7101e4bb70  mov w2,#0x1
7101e4bb74  mov x0,x20
7101e4bb78  mov w1,w19
7101e4bb7c  mov w22,#0x1
7101e4bb80  bl 0x7101e9c280
7101e4bb84  tbz w0,#0x0,0x7101e4bd40
7101e4bb88  cbz w28,0x7101e4bd68
7101e4bb8c  ldr x8,[x25, #0x730]
7101e4bb90  ldr x8,[x8, #0x8]
7101e4bb94  ldr x9,[x8, #0x1d8]
7101e4bb98  lsl x8,x21,#0x30
7101e4bb9c  add x8,x9,x8, ASR #0x2f
7101e4bba0  ldrh w10,[x8, #0x60]
7101e4bba4  ldp x8,x11,[x9, #0x20]
7101e4bba8  sub x11,x11,x8
7101e4bbac  lsr x11,x11,#0x6
7101e4bbb0  mov w12,#0xcccd
7101e4bbb4  movk w12,#0xcccc, LSL #16
7101e4bbb8  mul w11,w11,w12
7101e4bbbc  cmp w11,w10
7101e4bbc0  b.ls 0x7101e4bd68
7101e4bbc4  add x9,x9,x10, LSL #0x1
7101e4bbc8  ldrh w9,[x9, #0x1000]
7101e4bbcc  cmp w11,w9
7101e4bbd0  b.ls 0x7101e4bd68
7101e4bbd4  mov w10,#0x140
7101e4bbd8  mul x9,x9,x10
7101e4bbdc  ldrsh w8,[x8, x9, LSL #0x0]
7101e4bbe0  cmn w8,#0x1
7101e4bbe4  and w8,w19,#0xff
7101e4bbe8  ccmp w8,#0x3,#0x2,ne
7101e4bbec  b.hi 0x7101e4bd68
7101e4bbf0  ldr x8,[x20]
7101e4bbf4  add x8,x8,w19, UXTB  #0x3
7101e4bbf8  ldr x20,[x8, #0x48]
7101e4bbfc  cbz x20,0x7101e4bd68
7101e4bc00  ldrb w8,[x20, #0xb4]
7101e4bc04  cbnz w8,0x7101e4bc58
7101e4bc08  ldr x0,[x20, #0x8]
7101e4bc0c  fmov s0,0x3f800000
7101e4bc10  mov x19,#0x1eaf
7101e4bc14  movk x19,#0xd1b, LSL #16
7101e4bc18  adrp x1,0x71042f8000
7101e4bc1c  add x1,x1,#0xa52
7101e4bc20  movk x19,#0x1d, LSL #32
7101e4bc24  bl 0x7103778300
7101e4bc28  adrp x21,0x710532f000
7101e4bc2c  ldr x8,[x21, #0x8d0]
7101e4bc30  ldr x0,[x8, #0x8]
7101e4bc34  mov w2,#0xa
7101e4bc38  mov x1,x19
7101e4bc3c  bl 0x7103313f20
7101e4bc40  tbz w0,#0x0,0x7101e4bc58
7101e4bc44  ldr x8,[x21, #0x8d0]
7101e4bc48  ldr x0,[x8, #0x8]
7101e4bc4c  mov w2,#0x50
7101e4bc50  mov x1,x19
7101e4bc54  bl 0x7103314c70
7101e4bc58  mov w22,#0x1
7101e4bc5c  strb w22,[x20, #0xb4]
7101e4bc60  b 0x7101e4bd40
7101e4bc64  and x23,x21,#0xffff
7101e4bc68  cbz w28,0x7101e4bce0
7101e4bc6c  ldr x8,[x25, #0x730]
7101e4bc70  ldr x8,[x8, #0x8]
7101e4bc74  ldr x10,[x8, #0x1d8]
7101e4bc78  lsl x8,x21,#0x30
7101e4bc7c  add x8,x10,x8, ASR #0x2f
7101e4bc80  orr x11,xzr,#-0x3333333333333334
7101e4bc84  ldp x9,x10,[x10, #0x20]
7101e4bc88  sub x10,x10,x9
7101e4bc8c  asr x10,x10,#0x6
7101e4bc90  movk x11,#0xcccd
7101e4bc94  mul x10,x10,x11
7101e4bc98  ldrh w8,[x8, #0x60]
7101e4bc9c  cmp w10,w8
7101e4bca0  b.ls 0x7101e4bce0
7101e4bca4  mov w11,#0x140
7101e4bca8  madd x9,x8,x11,x9
7101e4bcac  adrp x11,0x7105182000
7101e4bcb0  add x11,x11,#0xb08
7101e4bcb4  cmp x10,x8
7101e4bcb8  csel x8,x9,x11,hi
7101e4bcbc  ldr s0,[x8, #0x74]
7101e4bcc0  ldr w1,[x8, #0x70]
7101e4bcc4  mov w0,w22
7101e4bcc8  bl 0x71025c9ac0
7101e4bccc  mov w21,w0
7101e4bcd0  cmp w0,#0x61
7101e4bcd4  b.ls 0x7101e4bce4
7101e4bcd8  mov w21,#0x62
7101e4bcdc  b 0x7101e4bce4
7101e4bce0  mov w21,#0x1
7101e4bce4  mov x0,x23
7101e4bce8  mov w1,w21
7101e4bcec  bl 0x71025c9e50
7101e4bcf0  ucvtf s9,w0
7101e4bcf4  add w1,w21,#0x1
7101e4bcf8  mov x0,x23
7101e4bcfc  bl 0x71025c9e50
7101e4bd00  ucvtf s0,w0
7101e4bd04  fcmp s9,s0
7101e4bd08  mov w22,wzr
7101e4bd0c  b.ge 0x7101e4bd40
7101e4bd10  ldrb w8,[x20, #0x8]
7101e4bd14  cmp w8,w19, UXTB 
7101e4bd18  b.ls 0x7101e4bd40
7101e4bd1c  fsub s1,s8,s9
7101e4bd20  fsub s0,s0,s9
7101e4bd24  fdiv s0,s1,s0
7101e4bd28  cmp w21,#0x61
7101e4bd2c  cset w2,hi
7101e4bd30  mov x0,x20
7101e4bd34  mov w1,w19
7101e4bd38  bl 0x7101e9c280
7101e4bd3c  mov w22,wzr
7101e4bd40  ldp d9,d8,[sp, #0x70]
7101e4bd44  mov w0,w22
7101e4bd48  ldp x29,x30,[sp, #0xd0]
7101e4bd4c  ldp x20,x19,[sp, #0xc0]
7101e4bd50  ldp x22,x21,[sp, #0xb0]
7101e4bd54  ldp x24,x23,[sp, #0xa0]
7101e4bd58  ldp x26,x25,[sp, #0x90]
7101e4bd5c  ldp x28,x27,[sp, #0x80]
7101e4bd60  add sp,sp,#0xe0
7101e4bd64  ret
7101e4bd68  mov w22,#0x1
7101e4bd6c  b 0x7101e4bd40
