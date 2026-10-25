// addr:      7101d4b6b0
// offset:    0x1d4b6b0
// name:      FUN_7101d4b6b0
// mangled:   
// size:      15404

7101d4b6b0  str d8,[sp, #-0x70]!
7101d4b6b4  stp x28,x27,[sp, #0x10]
7101d4b6b8  stp x26,x25,[sp, #0x20]
7101d4b6bc  stp x24,x23,[sp, #0x30]
7101d4b6c0  stp x22,x21,[sp, #0x40]
7101d4b6c4  stp x20,x19,[sp, #0x50]
7101d4b6c8  stp x29,x30,[sp, #0x60]
7101d4b6cc  add x29,sp,#0x60
7101d4b6d0  sub sp,sp,#0x7f0
7101d4b6d4  mov x21,x0
7101d4b6d8  add x0,x0,#0xa0
7101d4b6dc  ldr x8,[x21, #0x1e8]
7101d4b6e0  ldr x1,[x8]
7101d4b6e4  adrp x2,0x7104545000
7101d4b6e8  add x2,x2,#0x668
7101d4b6ec  mov w3,#0x1
7101d4b6f0  str x0,[sp, #0x20]
7101d4b6f4  bl 0x71032cbf30
7101d4b6f8  ldr x8,[x21, #0x1e8]
7101d4b6fc  ldr x1,[x8]
7101d4b700  adrp x19,0x7104545000
7101d4b704  add x19,x19,#0x670
7101d4b708  add x0,x21,#0x8
7101d4b70c  mov w3,#0x1
7101d4b710  mov x2,x19
7101d4b714  str x0,[sp, #0x10]
7101d4b718  bl 0x71032cbf30
7101d4b71c  ldr x8,[x21, #0x1e8]
7101d4b720  ldr x1,[x8]
7101d4b724  add x0,x21,#0x10
7101d4b728  mov w3,#0x1
7101d4b72c  mov x2,x19
7101d4b730  str x0,[sp, #0x18]
7101d4b734  bl 0x71032cbf30
7101d4b738  ldr x8,[x21, #0x1e8]
7101d4b73c  ldr x1,[x8]
7101d4b740  add x0,x21,#0xa8
7101d4b744  adrp x2,0x7104545000
7101d4b748  add x2,x2,#0x678
7101d4b74c  mov w3,#0x1
7101d4b750  str x0,[sp, #0x28]
7101d4b754  bl 0x71032cbf30
7101d4b758  ldr x8,[x21, #0xa0]
7101d4b75c  ldr x8,[x8]
7101d4b760  ldr x0,[x8]
7101d4b764  mov w1,wzr
7101d4b768  bl 0x71037760f0
7101d4b76c  ldr x8,[x21, #0x8]
7101d4b770  ldr x8,[x8]
7101d4b774  ldr x0,[x8]
7101d4b778  mov w1,wzr
7101d4b77c  bl 0x71037760f0
7101d4b780  ldr x8,[x21, #0x10]
7101d4b784  ldr x8,[x8]
7101d4b788  ldr x0,[x8]
7101d4b78c  mov w1,wzr
7101d4b790  bl 0x71037760f0
7101d4b794  ldr x8,[x21, #0xa8]
7101d4b798  ldr x8,[x8]
7101d4b79c  ldr x0,[x8]
7101d4b7a0  mov w1,wzr
7101d4b7a4  bl 0x71037760f0
7101d4b7a8  ldr x8,[x21, #0xa0]
7101d4b7ac  ldr x8,[x8]
7101d4b7b0  str x8,[sp, #0x8]
7101d4b7b4  adrp x8,0x710532f000
7101d4b7b8  ldr x8,[x8, #0x730]
7101d4b7bc  ldr x20,[x8, #0x8]
7101d4b7c0  ldr x24,[x20, #0x308]
7101d4b7c4  ldr x9,[x24, #0x8]
7101d4b7c8  ldr x8,[x9, #0x20]
7101d4b7cc  ldrb w10,[x8]
7101d4b7d0  cmp w10,#0xc
7101d4b7d4  b.ne 0x7101d4b858
7101d4b7d8  ldur w10,[x8, #0x1]
7101d4b7dc  subs w10,w10,#0x1
7101d4b7e0  b.lt 0x7101d4b858
7101d4b7e4  ldr x12,[x9, #0x48]
7101d4b7e8  ldr x9,[x9, #0x18]
7101d4b7ec  mov w11,wzr
7101d4b7f0  ldursw x14,[x8, #0x5]
7101d4b7f4  and x12,x12,#0xffffffffff
7101d4b7f8  ldp x13,x9,[x9, #0x20]
7101d4b7fc  add x14,x9,x14
7101d4b800  adrp x9,0x7104742000
7101d4b804  add x9,x9,#0xdbb
7101d4b808  add w15,w10,w11
7101d4b80c  cmp w15,#0x0
7101d4b810  cinc w15,w15,lt
7101d4b814  asr w15,w15,#0x1
7101d4b818  add x16,x14,w15, SXTW  #0x3
7101d4b81c  ldr w17,[x16]
7101d4b820  ldr x17,[x13, x17, LSL #0x3]
7101d4b824  cmp x17,x12
7101d4b828  b.eq 0x7101d4b848
7101d4b82c  sub w16,w15,#0x1
7101d4b830  cmp x17,x12
7101d4b834  csel w10,w16,w10,hi
7101d4b838  csinc w11,w11,w15,hi
7101d4b83c  cmp w11,w10
7101d4b840  b.le 0x7101d4b808
7101d4b844  b 0x7101d4b860
7101d4b848  ldrsw x9,[x16, #0x4]
7101d4b84c  tbnz w9,#0x1f,0x7101d4b858
7101d4b850  add x9,x8,x9
7101d4b854  b 0x7101d4b860
7101d4b858  adrp x9,0x7104742000
7101d4b85c  add x9,x9,#0xdbb
7101d4b860  ldrb w8,[x9]
7101d4b864  sub w8,w8,#0xb
7101d4b868  cmp w8,#0x1
7101d4b86c  str x21,[sp, #0x40]
7101d4b870  b.hi 0x7101d4b93c
7101d4b874  ldur w25,[x9, #0x1]
7101d4b878  cmp w25,#0x1
7101d4b87c  b.lt 0x7101d4b948
7101d4b880  mov w23,wzr
7101d4b884  mov w26,wzr
7101d4b888  mov w27,#0x1
7101d4b88c  b 0x7101d4b898
7101d4b890  ldr x24,[x20, #0x308]
7101d4b894  add w27,w27,#0x1
7101d4b898  sub w22,w27,#0x1
7101d4b89c  mov x0,x24
7101d4b8a0  mov w1,w22
7101d4b8a4  bl 0x710329f5f0
7101d4b8a8  mov x1,x0
7101d4b8ac  mov x0,x24
7101d4b8b0  bl 0x710329f6f0
7101d4b8b4  cbz w0,0x7101d4b8dc
7101d4b8b8  ldr x19,[x20, #0x308]
7101d4b8bc  mov x0,x19
7101d4b8c0  mov w1,w22
7101d4b8c4  bl 0x710329f5f0
7101d4b8c8  mov x1,x0
7101d4b8cc  mov x0,x19
7101d4b8d0  bl 0x710329f6f0
7101d4b8d4  cmp w0,#0x2
7101d4b8d8  b.ne 0x7101d4b8e0
7101d4b8dc  add w23,w23,#0x1
7101d4b8e0  ldr x19,[x20, #0x308]
7101d4b8e4  mov x0,x19
7101d4b8e8  mov w1,w22
7101d4b8ec  bl 0x710329f5f0
7101d4b8f0  mov x1,x0
7101d4b8f4  mov x0,x19
7101d4b8f8  bl 0x710329f6f0
7101d4b8fc  cmp w0,#0x1
7101d4b900  b.eq 0x7101d4b928
7101d4b904  ldr x19,[x20, #0x308]
7101d4b908  mov x0,x19
7101d4b90c  mov w1,w22
7101d4b910  bl 0x710329f5f0
7101d4b914  mov x1,x0
7101d4b918  mov x0,x19
7101d4b91c  bl 0x710329f6f0
7101d4b920  cmp w0,#0x2
7101d4b924  b.ne 0x7101d4b92c
7101d4b928  add w26,w26,#0x1
7101d4b92c  cmp w25,w27
7101d4b930  b.ne 0x7101d4b890
7101d4b934  mov w27,#0x1
7101d4b938  b 0x7101d4b954
7101d4b93c  mov w27,wzr
7101d4b940  mov w25,wzr
7101d4b944  b 0x7101d4b94c
7101d4b948  mov w27,wzr
7101d4b94c  mov w26,wzr
7101d4b950  mov w23,wzr
7101d4b954  ldr x24,[sp, #0x40]
7101d4b958  ldr x8,[x24, #0x248]
7101d4b95c  ldr x22,[x24, #0x238]
7101d4b960  sub x8,x8,x22
7101d4b964  sxtw x28,w23
7101d4b968  asr x8,x8,#0x3
7101d4b96c  cmp x8,x28
7101d4b970  b.cs 0x7101d4ba24
7101d4b974  tbnz w28,#0x1f,0x7101d4df64
7101d4b978  ldr x8,[x24, #0x240]
7101d4b97c  sub x24,x8,x22
7101d4b980  lsl x8,x28,#0x3
7101d4b984  cmp w28,#0x0
7101d4b988  csinc x23,x8,xzr,ne
7101d4b98c  mov w0,#0x10
7101d4b990  asr x21,x24,#0x3
7101d4b994  mov x1,x23
7101d4b998  bl 0x710392e290
7101d4b99c  mov x19,x0
7101d4b9a0  cbnz x0,0x7101d4b9e8
7101d4b9a4  adrp x8,0x7105332000
7101d4b9a8  ldr x0,[x8, #0xf00]
7101d4b9ac  cbz x0,0x7101d4b9e4
7101d4b9b0  str wzr,[sp, #0x550]
7101d4b9b4  str x23,[sp, #0x680]
7101d4b9b8  ldr x8,[x0]
7101d4b9bc  ldr x8,[x8, #0x30]
7101d4b9c0  add x1,sp,#0x550
7101d4b9c4  add x2,sp,#0x680
7101d4b9c8  blr x8
7101d4b9cc  tbz w0,#0x0,0x7101d4b9e4
7101d4b9d0  mov w0,#0x10
7101d4b9d4  mov x1,x23
7101d4b9d8  bl 0x710392e290
7101d4b9dc  mov x19,x0
7101d4b9e0  cbnz x0,0x7101d4b9e8
7101d4b9e4  mov x19,xzr
7101d4b9e8  add x21,x19,x21, LSL #0x3
7101d4b9ec  add x23,x19,x28, LSL #0x3
7101d4b9f0  cmp x24,#0x1
7101d4b9f4  b.lt 0x7101d4ba08
7101d4b9f8  mov x0,x19
7101d4b9fc  mov x1,x22
7101d4ba00  mov x2,x24
7101d4ba04  bl 0x71039c00e0
7101d4ba08  ldr x24,[sp, #0x40]
7101d4ba0c  str x19,[x24, #0x238]
7101d4ba10  str x21,[x24, #0x240]
7101d4ba14  str x23,[x24, #0x248]
7101d4ba18  cbz x22,0x7101d4ba24
7101d4ba1c  mov x0,x22
7101d4ba20  bl 0x710392eb40
7101d4ba24  ldr x8,[x24, #0x260]
7101d4ba28  ldr x22,[x24, #0x250]
7101d4ba2c  sub x8,x8,x22
7101d4ba30  str w27,[sp, #0x30]
7101d4ba34  sxtw x27,w26
7101d4ba38  asr x8,x8,#0x3
7101d4ba3c  cmp x8,x27
7101d4ba40  b.cs 0x7101d4baf4
7101d4ba44  tbnz w26,#0x1f,0x7101d4df64
7101d4ba48  ldr x8,[x24, #0x258]
7101d4ba4c  sub x24,x8,x22
7101d4ba50  lsl x8,x27,#0x3
7101d4ba54  cmp w26,#0x0
7101d4ba58  csinc x23,x8,xzr,ne
7101d4ba5c  mov w0,#0x10
7101d4ba60  asr x21,x24,#0x3
7101d4ba64  mov x1,x23
7101d4ba68  bl 0x710392e290
7101d4ba6c  mov x19,x0
7101d4ba70  cbnz x0,0x7101d4bab8
7101d4ba74  adrp x8,0x7105332000
7101d4ba78  ldr x0,[x8, #0xf00]
7101d4ba7c  cbz x0,0x7101d4bab4
7101d4ba80  str wzr,[sp, #0x550]
7101d4ba84  str x23,[sp, #0x680]
7101d4ba88  ldr x8,[x0]
7101d4ba8c  ldr x8,[x8, #0x30]
7101d4ba90  add x1,sp,#0x550
7101d4ba94  add x2,sp,#0x680
7101d4ba98  blr x8
7101d4ba9c  tbz w0,#0x0,0x7101d4bab4
7101d4baa0  mov w0,#0x10
7101d4baa4  mov x1,x23
7101d4baa8  bl 0x710392e290
7101d4baac  mov x19,x0
7101d4bab0  cbnz x0,0x7101d4bab8
7101d4bab4  mov x19,xzr
7101d4bab8  add x21,x19,x21, LSL #0x3
7101d4babc  add x23,x19,x27, LSL #0x3
7101d4bac0  cmp x24,#0x1
7101d4bac4  b.lt 0x7101d4bad8
7101d4bac8  mov x0,x19
7101d4bacc  mov x1,x22
7101d4bad0  mov x2,x24
7101d4bad4  bl 0x71039c00e0
7101d4bad8  ldr x24,[sp, #0x40]
7101d4badc  str x19,[x24, #0x250]
7101d4bae0  str x21,[x24, #0x258]
7101d4bae4  str x23,[x24, #0x260]
7101d4bae8  cbz x22,0x7101d4baf4
7101d4baec  mov x0,x22
7101d4baf0  bl 0x710392eb40
7101d4baf4  ldr x8,[x24, #0x278]
7101d4baf8  ldr x22,[x24, #0x268]
7101d4bafc  sub x8,x8,x22
7101d4bb00  asr x8,x8,#0x3
7101d4bb04  cmp x8,x28
7101d4bb08  b.cs 0x7101d4bbbc
7101d4bb0c  tbnz w28,#0x1f,0x7101d4df64
7101d4bb10  ldr x8,[x24, #0x270]
7101d4bb14  sub x24,x8,x22
7101d4bb18  lsl x8,x28,#0x3
7101d4bb1c  cmp w28,#0x0
7101d4bb20  csinc x23,x8,xzr,ne
7101d4bb24  mov w0,#0x10
7101d4bb28  asr x21,x24,#0x3
7101d4bb2c  mov x1,x23
7101d4bb30  bl 0x710392e290
7101d4bb34  mov x19,x0
7101d4bb38  cbnz x0,0x7101d4bb80
7101d4bb3c  adrp x8,0x7105332000
7101d4bb40  ldr x0,[x8, #0xf00]
7101d4bb44  cbz x0,0x7101d4bb7c
7101d4bb48  str wzr,[sp, #0x550]
7101d4bb4c  str x23,[sp, #0x680]
7101d4bb50  ldr x8,[x0]
7101d4bb54  ldr x8,[x8, #0x30]
7101d4bb58  add x1,sp,#0x550
7101d4bb5c  add x2,sp,#0x680
7101d4bb60  blr x8
7101d4bb64  tbz w0,#0x0,0x7101d4bb7c
7101d4bb68  mov w0,#0x10
7101d4bb6c  mov x1,x23
7101d4bb70  bl 0x710392e290
7101d4bb74  mov x19,x0
7101d4bb78  cbnz x0,0x7101d4bb80
7101d4bb7c  mov x19,xzr
7101d4bb80  add x21,x19,x21, LSL #0x3
7101d4bb84  add x23,x19,x28, LSL #0x3
7101d4bb88  cmp x24,#0x1
7101d4bb8c  b.lt 0x7101d4bba0
7101d4bb90  mov x0,x19
7101d4bb94  mov x1,x22
7101d4bb98  mov x2,x24
7101d4bb9c  bl 0x71039c00e0
7101d4bba0  ldr x24,[sp, #0x40]
7101d4bba4  str x19,[x24, #0x268]
7101d4bba8  str x21,[x24, #0x270]
7101d4bbac  str x23,[x24, #0x278]
7101d4bbb0  cbz x22,0x7101d4bbbc
7101d4bbb4  mov x0,x22
7101d4bbb8  bl 0x710392eb40
7101d4bbbc  ldr x8,[x24, #0x290]
7101d4bbc0  ldr x22,[x24, #0x280]
7101d4bbc4  sub x8,x8,x22
7101d4bbc8  asr x8,x8,#0x3
7101d4bbcc  cmp x8,x27
7101d4bbd0  b.cs 0x7101d4bc84
7101d4bbd4  tbnz w26,#0x1f,0x7101d4df64
7101d4bbd8  ldr x8,[x24, #0x288]
7101d4bbdc  sub x24,x8,x22
7101d4bbe0  lsl x8,x27,#0x3
7101d4bbe4  cmp w26,#0x0
7101d4bbe8  csinc x23,x8,xzr,ne
7101d4bbec  mov w0,#0x10
7101d4bbf0  asr x21,x24,#0x3
7101d4bbf4  mov x1,x23
7101d4bbf8  bl 0x710392e290
7101d4bbfc  mov x19,x0
7101d4bc00  cbnz x0,0x7101d4bc48
7101d4bc04  adrp x8,0x7105332000
7101d4bc08  ldr x0,[x8, #0xf00]
7101d4bc0c  cbz x0,0x7101d4bc44
7101d4bc10  str wzr,[sp, #0x550]
7101d4bc14  str x23,[sp, #0x680]
7101d4bc18  ldr x8,[x0]
7101d4bc1c  ldr x8,[x8, #0x30]
7101d4bc20  add x1,sp,#0x550
7101d4bc24  add x2,sp,#0x680
7101d4bc28  blr x8
7101d4bc2c  tbz w0,#0x0,0x7101d4bc44
7101d4bc30  mov w0,#0x10
7101d4bc34  mov x1,x23
7101d4bc38  bl 0x710392e290
7101d4bc3c  mov x19,x0
7101d4bc40  cbnz x0,0x7101d4bc48
7101d4bc44  mov x19,xzr
7101d4bc48  add x21,x19,x21, LSL #0x3
7101d4bc4c  add x23,x19,x27, LSL #0x3
7101d4bc50  cmp x24,#0x1
7101d4bc54  b.lt 0x7101d4bc68
7101d4bc58  mov x0,x19
7101d4bc5c  mov x1,x22
7101d4bc60  mov x2,x24
7101d4bc64  bl 0x71039c00e0
7101d4bc68  ldr x24,[sp, #0x40]
7101d4bc6c  str x19,[x24, #0x280]
7101d4bc70  str x21,[x24, #0x288]
7101d4bc74  str x23,[x24, #0x290]
7101d4bc78  cbz x22,0x7101d4bc84
7101d4bc7c  mov x0,x22
7101d4bc80  bl 0x710392eb40
7101d4bc84  ldr w8,[sp, #0x30]
7101d4bc88  tbz w8,#0x0,0x7101d4bf88
7101d4bc8c  add x8,x24,#0x238
7101d4bc90  mov w26,wzr
7101d4bc94  stur x8,[x29, #-0x58]
7101d4bc98  add x8,x24,#0x250
7101d4bc9c  str x8,[sp, #0x30]
7101d4bca0  ldr x19,[x20, #0x308]
7101d4bca4  mov x0,x19
7101d4bca8  mov w1,w26
7101d4bcac  bl 0x710329f5f0
7101d4bcb0  mov x1,x0
7101d4bcb4  mov x0,x19
7101d4bcb8  bl 0x710329f6f0
7101d4bcbc  cbz w0,0x7101d4bce4
7101d4bcc0  ldr x19,[x20, #0x308]
7101d4bcc4  mov x0,x19
7101d4bcc8  mov w1,w26
7101d4bccc  bl 0x710329f5f0
7101d4bcd0  mov x1,x0
7101d4bcd4  mov x0,x19
7101d4bcd8  bl 0x710329f6f0
7101d4bcdc  cmp w0,#0x2
7101d4bce0  b.ne 0x7101d4be0c
7101d4bce4  ldr x0,[x20, #0x308]
7101d4bce8  mov w1,w26
7101d4bcec  bl 0x710329f5f0
7101d4bcf0  ldr x9,[x24, #0x240]
7101d4bcf4  ldr x8,[x24, #0x248]
7101d4bcf8  mov x28,x0
7101d4bcfc  cmp x9,x8
7101d4bd00  b.cs 0x7101d4bd18
7101d4bd04  str x28,[x9]
7101d4bd08  ldr x8,[x24, #0x240]
7101d4bd0c  add x8,x8,#0x8
7101d4bd10  str x8,[x24, #0x240]
7101d4bd14  b 0x7101d4be0c
7101d4bd18  ldur x10,[x29, #-0x58]
7101d4bd1c  ldr x27,[x10]
7101d4bd20  sub x22,x9,x27
7101d4bd24  asr x24,x22,#0x3
7101d4bd28  add x9,x24,#0x1
7101d4bd2c  lsr x10,x9,#0x3d
7101d4bd30  cbnz x10,0x7101d4f2ac
7101d4bd34  sub x8,x8,x27
7101d4bd38  asr x10,x8,#0x3
7101d4bd3c  orr x11,xzr,#0xffffffffffffffe
7101d4bd40  cmp x10,x11
7101d4bd44  b.hi 0x7101d4bd64
7101d4bd48  asr x8,x8,#0x2
7101d4bd4c  cmp x8,x9
7101d4bd50  csel x21,x9,x8,cc
7101d4bd54  cbz x21,0x7101d4bdc8
7101d4bd58  lsr x8,x21,#0x3d
7101d4bd5c  cbz x8,0x7101d4bd68
7101d4bd60  b 0x7101d4df64
7101d4bd64  orr x21,xzr,#0x1fffffffffffffff
7101d4bd68  lsl x8,x21,#0x3
7101d4bd6c  cmp x8,#0x0
7101d4bd70  csinc x19,x8,xzr,ne
7101d4bd74  mov w0,#0x10
7101d4bd78  mov x1,x19
7101d4bd7c  bl 0x710392e290
7101d4bd80  mov x23,x0
7101d4bd84  cbnz x0,0x7101d4bdcc
7101d4bd88  adrp x8,0x7105332000
7101d4bd8c  ldr x0,[x8, #0xf00]
7101d4bd90  cbz x0,0x7101d4bdc8
7101d4bd94  str wzr,[sp, #0x550]
7101d4bd98  str x19,[sp, #0x680]
7101d4bd9c  ldr x8,[x0]
7101d4bda0  ldr x8,[x8, #0x30]
7101d4bda4  add x1,sp,#0x550
7101d4bda8  add x2,sp,#0x680
7101d4bdac  blr x8
7101d4bdb0  tbz w0,#0x0,0x7101d4bdc8
7101d4bdb4  mov w0,#0x10
7101d4bdb8  mov x1,x19
7101d4bdbc  bl 0x710392e290
7101d4bdc0  mov x23,x0
7101d4bdc4  cbnz x0,0x7101d4bdcc
7101d4bdc8  mov x23,xzr
7101d4bdcc  add x19,x23,x24, LSL #0x3
7101d4bdd0  add x21,x23,x21, LSL #0x3
7101d4bdd4  cmp x22,#0x1
7101d4bdd8  str x28,[x19], #0x8
7101d4bddc  b.lt 0x7101d4bdf0
7101d4bde0  mov x0,x23
7101d4bde4  mov x1,x27
7101d4bde8  mov x2,x22
7101d4bdec  bl 0x71039c00e0
7101d4bdf0  ldr x24,[sp, #0x40]
7101d4bdf4  str x23,[x24, #0x238]
7101d4bdf8  str x19,[x24, #0x240]
7101d4bdfc  str x21,[x24, #0x248]
7101d4be00  cbz x27,0x7101d4be0c
7101d4be04  mov x0,x27
7101d4be08  bl 0x710392eb40
7101d4be0c  ldr x19,[x20, #0x308]
7101d4be10  mov x0,x19
7101d4be14  mov w1,w26
7101d4be18  bl 0x710329f5f0
7101d4be1c  mov x1,x0
7101d4be20  mov x0,x19
7101d4be24  bl 0x710329f6f0
7101d4be28  cmp w0,#0x1
7101d4be2c  b.eq 0x7101d4be54
7101d4be30  ldr x19,[x20, #0x308]
7101d4be34  mov x0,x19
7101d4be38  mov w1,w26
7101d4be3c  bl 0x710329f5f0
7101d4be40  mov x1,x0
7101d4be44  mov x0,x19
7101d4be48  bl 0x710329f6f0
7101d4be4c  cmp w0,#0x2
7101d4be50  b.ne 0x7101d4bf7c
7101d4be54  ldr x0,[x20, #0x308]
7101d4be58  mov w1,w26
7101d4be5c  bl 0x710329f5f0
7101d4be60  ldr x9,[x24, #0x258]
7101d4be64  ldr x8,[x24, #0x260]
7101d4be68  mov x28,x0
7101d4be6c  cmp x9,x8
7101d4be70  b.cs 0x7101d4be88
7101d4be74  str x28,[x9]
7101d4be78  ldr x8,[x24, #0x258]
7101d4be7c  add x8,x8,#0x8
7101d4be80  str x8,[x24, #0x258]
7101d4be84  b 0x7101d4bf7c
7101d4be88  ldr x10,[sp, #0x30]
7101d4be8c  ldr x27,[x10]
7101d4be90  sub x22,x9,x27
7101d4be94  asr x24,x22,#0x3
7101d4be98  add x9,x24,#0x1
7101d4be9c  lsr x10,x9,#0x3d
7101d4bea0  cbnz x10,0x7101d4f2b4
7101d4bea4  sub x8,x8,x27
7101d4bea8  asr x10,x8,#0x3
7101d4beac  orr x11,xzr,#0xffffffffffffffe
7101d4beb0  cmp x10,x11
7101d4beb4  b.hi 0x7101d4bed4
7101d4beb8  asr x8,x8,#0x2
7101d4bebc  cmp x8,x9
7101d4bec0  csel x21,x9,x8,cc
7101d4bec4  cbz x21,0x7101d4bf38
7101d4bec8  lsr x8,x21,#0x3d
7101d4becc  cbz x8,0x7101d4bed8
7101d4bed0  b 0x7101d4df64
7101d4bed4  orr x21,xzr,#0x1fffffffffffffff
7101d4bed8  lsl x8,x21,#0x3
7101d4bedc  cmp x8,#0x0
7101d4bee0  csinc x19,x8,xzr,ne
7101d4bee4  mov w0,#0x10
7101d4bee8  mov x1,x19
7101d4beec  bl 0x710392e290
7101d4bef0  mov x23,x0
7101d4bef4  cbnz x0,0x7101d4bf3c
7101d4bef8  adrp x8,0x7105332000
7101d4befc  ldr x0,[x8, #0xf00]
7101d4bf00  cbz x0,0x7101d4bf38
7101d4bf04  str wzr,[sp, #0x550]
7101d4bf08  str x19,[sp, #0x680]
7101d4bf0c  ldr x8,[x0]
7101d4bf10  ldr x8,[x8, #0x30]
7101d4bf14  add x1,sp,#0x550
7101d4bf18  add x2,sp,#0x680
7101d4bf1c  blr x8
7101d4bf20  tbz w0,#0x0,0x7101d4bf38
7101d4bf24  mov w0,#0x10
7101d4bf28  mov x1,x19
7101d4bf2c  bl 0x710392e290
7101d4bf30  mov x23,x0
7101d4bf34  cbnz x0,0x7101d4bf3c
7101d4bf38  mov x23,xzr
7101d4bf3c  add x19,x23,x24, LSL #0x3
7101d4bf40  add x21,x23,x21, LSL #0x3
7101d4bf44  cmp x22,#0x1
7101d4bf48  str x28,[x19], #0x8
7101d4bf4c  b.lt 0x7101d4bf60
7101d4bf50  mov x0,x23
7101d4bf54  mov x1,x27
7101d4bf58  mov x2,x22
7101d4bf5c  bl 0x71039c00e0
7101d4bf60  ldr x24,[sp, #0x40]
7101d4bf64  str x23,[x24, #0x250]
7101d4bf68  str x19,[x24, #0x258]
7101d4bf6c  str x21,[x24, #0x260]
7101d4bf70  cbz x27,0x7101d4bf7c
7101d4bf74  mov x0,x27
7101d4bf78  bl 0x710392eb40
7101d4bf7c  add w26,w26,#0x1
7101d4bf80  cmp w26,w25
7101d4bf84  b.lt 0x7101d4bca0
7101d4bf88  ldr x0,[x24, #0x238]
7101d4bf8c  ldr x1,[x24, #0x240]
7101d4bf90  add x19,x20,#0x300
7101d4bf94  add x2,sp,#0x680
7101d4bf98  add x20,sp,#0x680
7101d4bf9c  str x19,[sp, #0x680]
7101d4bfa0  bl 0x7101d4f2e0
7101d4bfa4  ldr x0,[x24, #0x250]
7101d4bfa8  ldr x1,[x24, #0x258]
7101d4bfac  add x2,sp,#0x680
7101d4bfb0  str x19,[sp, #0x680]
7101d4bfb4  add x19,sp,#0x680
7101d4bfb8  bl 0x7101d4f880
7101d4bfbc  mov x8,#0x41800000
7101d4bfc0  movk x8,#0x4248, LSL #48
7101d4bfc4  str x8,[sp, #0x688]
7101d4bfc8  mov x8,#0x3f800000
7101d4bfcc  movk x8,#0x101, LSL #32
7101d4bfd0  movk x8,#0x1, LSL #48
7101d4bfd4  mov w21,#0x1
7101d4bfd8  add x0,sp,#0x680
7101d4bfdc  str xzr,[sp, #0x680]
7101d4bfe0  str xzr,[sp, #0x6d0]
7101d4bfe4  str xzr,[sp, #0x700]
7101d4bfe8  str xzr,[sp, #0x730]
7101d4bfec  str x8,[sp, #0x690]
7101d4bff0  add x23,x19,#0xf0
7101d4bff4  strh wzr,[sp, #0x698]
7101d4bff8  strb w21,[sp, #0x69a]
7101d4bffc  str xzr,[sp, #0x760]
7101d4c000  str xzr,[sp, #0x790]
7101d4c004  strb wzr,[sp, #0x6a1]
7101d4c008  sturh wzr,[x20, #0x1f]
7101d4c00c  stur wzr,[x20, #0x1b]
7101d4c010  bl 0x710337e790
7101d4c014  mov w22,#0x101
7101d4c018  str w25,[sp, #0x684]
7101d4c01c  add x19,x24,#0x218
7101d4c020  strh w22,[sp, #0x69c]
7101d4c024  ldr x8,[x24, #0xa8]
7101d4c028  ldr x8,[x8]
7101d4c02c  add x1,x8,#0x8
7101d4c030  adrp x2,0x710424f000
7101d4c034  add x2,x2,#0xc05
7101d4c038  add x3,sp,#0x680
7101d4c03c  mov x0,x19
7101d4c040  mov x4,x24
7101d4c044  bl 0x7103781a20
7101d4c048  mov w3,#0x1
7101d4c04c  mov x0,x19
7101d4c050  mov w1,wzr
7101d4c054  mov w2,wzr
7101d4c058  bl 0x7103783c10
7101d4c05c  ldr x0,[x24, #0x218]
7101d4c060  ldr x8,[x0]
7101d4c064  ldr x8,[x8, #0x70]
7101d4c068  mov w1,wzr
7101d4c06c  blr x8
7101d4c070  mov x0,x24
7101d4c074  mov w1,wzr
7101d4c078  bl 0x7101d49940
7101d4c07c  mov x0,x24
7101d4c080  mov w1,wzr
7101d4c084  str w21,[x24, #0x2e4]
7101d4c088  bl 0x7101d49940
7101d4c08c  ldr x0,[sp, #0x790]
7101d4c090  cmp x23,x0
7101d4c094  b.eq 0x7101d4c0a8
7101d4c098  cbz x0,0x7101d4c0b4
7101d4c09c  ldr x8,[x0]
7101d4c0a0  ldr x8,[x8, #0x28]
7101d4c0a4  b 0x7101d4c0b0
7101d4c0a8  ldr x8,[x0]
7101d4c0ac  ldr x8,[x8, #0x20]
7101d4c0b0  blr x8
7101d4c0b4  ldr x0,[sp, #0x760]
7101d4c0b8  add x8,sp,#0x680
7101d4c0bc  add x8,x8,#0xc0
7101d4c0c0  cmp x8,x0
7101d4c0c4  b.eq 0x7101d4c0d8
7101d4c0c8  cbz x0,0x7101d4c0e4
7101d4c0cc  ldr x8,[x0]
7101d4c0d0  ldr x8,[x8, #0x28]
7101d4c0d4  b 0x7101d4c0e0
7101d4c0d8  ldr x8,[x0]
7101d4c0dc  ldr x8,[x8, #0x20]
7101d4c0e0  blr x8
7101d4c0e4  ldr x0,[sp, #0x730]
7101d4c0e8  add x8,sp,#0x680
7101d4c0ec  add x8,x8,#0x90
7101d4c0f0  cmp x8,x0
7101d4c0f4  b.eq 0x7101d4c108
7101d4c0f8  cbz x0,0x7101d4c114
7101d4c0fc  ldr x8,[x0]
7101d4c100  ldr x8,[x8, #0x28]
7101d4c104  b 0x7101d4c110
7101d4c108  ldr x8,[x0]
7101d4c10c  ldr x8,[x8, #0x20]
7101d4c110  blr x8
7101d4c114  ldr x0,[sp, #0x700]
7101d4c118  add x8,sp,#0x680
7101d4c11c  add x8,x8,#0x60
7101d4c120  cmp x8,x0
7101d4c124  b.eq 0x7101d4c138
7101d4c128  cbz x0,0x7101d4c144
7101d4c12c  ldr x8,[x0]
7101d4c130  ldr x8,[x8, #0x28]
7101d4c134  b 0x7101d4c140
7101d4c138  ldr x8,[x0]
7101d4c13c  ldr x8,[x8, #0x20]
7101d4c140  blr x8
7101d4c144  ldr x8,[sp, #0x8]
7101d4c148  ldr x0,[sp, #0x6d0]
7101d4c14c  add x24,x8,#0x8
7101d4c150  add x8,sp,#0x680
7101d4c154  add x8,x8,#0x30
7101d4c158  cmp x8,x0
7101d4c15c  b.eq 0x7101d4c170
7101d4c160  cbz x0,0x7101d4c17c
7101d4c164  ldr x8,[x0]
7101d4c168  ldr x8,[x8, #0x28]
7101d4c16c  b 0x7101d4c178
7101d4c170  ldr x8,[x0]
7101d4c174  ldr x8,[x8, #0x20]
7101d4c178  blr x8
7101d4c17c  mov w8,#0x1
7101d4c180  str xzr,[sp, #0x680]
7101d4c184  stur wzr,[x20, #0xa]
7101d4c188  str w8,[sp, #0x690]
7101d4c18c  mov x23,#0x41f0000000000000
7101d4c190  add x0,sp,#0x680
7101d4c194  strh w8,[sp, #0x694]
7101d4c198  strb w8,[sp, #0x696]
7101d4c19c  add x8,sp,#0x680
7101d4c1a0  add x20,x8,#0x90
7101d4c1a4  mov w8,#0x100
7101d4c1a8  strh wzr,[sp, #0x68e]
7101d4c1ac  str x23,[sp, #0x698]
7101d4c1b0  str wzr,[sp, #0x6a0]
7101d4c1b4  str xzr,[sp, #0x6d0]
7101d4c1b8  str xzr,[sp, #0x700]
7101d4c1bc  str xzr,[sp, #0x730]
7101d4c1c0  str xzr,[sp, #0x760]
7101d4c1c4  str xzr,[sp, #0x790]
7101d4c1c8  str wzr,[sp, #0x7a0]
7101d4c1cc  strh w8,[sp, #0x688]
7101d4c1d0  bl 0x710337df20
7101d4c1d4  ldr x0,[sp, #0x730]
7101d4c1d8  str xzr,[sp, #0x730]
7101d4c1dc  cmp x20,x0
7101d4c1e0  b.eq 0x7101d4c1f4
7101d4c1e4  cbz x0,0x7101d4c200
7101d4c1e8  ldr x8,[x0]
7101d4c1ec  ldr x8,[x8, #0x28]
7101d4c1f0  b 0x7101d4c1fc
7101d4c1f4  ldr x8,[x0]
7101d4c1f8  ldr x8,[x8, #0x20]
7101d4c1fc  blr x8
7101d4c200  ldr x8,[sp, #0x40]
7101d4c204  add x25,x8,#0x1f0
7101d4c208  adrp x2,0x7104433000
7101d4c20c  add x2,x2,#0x952
7101d4c210  add x3,sp,#0x680
7101d4c214  mov x0,x25
7101d4c218  mov x1,x24
7101d4c21c  bl 0x7103770b30
7101d4c220  adrp x2,0x710432a000
7101d4c224  add x2,x2,#0x340
7101d4c228  mov x0,x25
7101d4c22c  mov w1,wzr
7101d4c230  bl 0x71037717d0
7101d4c234  mov x0,x25
7101d4c238  mov w1,wzr
7101d4c23c  mov w2,wzr
7101d4c240  bl 0x7103771a80
7101d4c244  adrp x8,0x710532f000
7101d4c248  ldr x8,[x8, #0x8d0]
7101d4c24c  ldr x9,[x8, #0x8]
7101d4c250  ldp x8,x9,[x9, #0x40]
7101d4c254  sub x9,x9,x8
7101d4c258  asr x9,x9,#0x3
7101d4c25c  cmp x9,#0x2
7101d4c260  b.cc 0x7101d4c26c
7101d4c264  ldr x8,[x8, #0x8]
7101d4c268  b 0x7101d4c270
7101d4c26c  mov x8,xzr
7101d4c270  ldr x21,[sp, #0x40]
7101d4c274  str x8,[sp, #0x550]
7101d4c278  ldr x0,[x21, #0x1f0]
7101d4c27c  add x2,sp,#0x550
7101d4c280  mov w1,wzr
7101d4c284  add x19,sp,#0x550
7101d4c288  bl 0x7103772070
7101d4c28c  add x8,sp,#0x45b
7101d4c290  str xzr,[sp, #0x550]
7101d4c294  strh w22,[sp, #0x558]
7101d4c298  stur wzr,[x8, #0xff]
7101d4c29c  mov w8,#0x1
7101d4c2a0  add x1,x19,#0x30
7101d4c2a4  str w8,[sp, #0x560]
7101d4c2a8  add x19,sp,#0x410
7101d4c2ac  add x0,sp,#0x410
7101d4c2b0  strh w8,[sp, #0x564]
7101d4c2b4  strb w8,[sp, #0x566]
7101d4c2b8  adrp x8,0x71050af000
7101d4c2bc  add x8,x8,#0x418
7101d4c2c0  strh wzr,[sp, #0x55e]
7101d4c2c4  str x23,[sp, #0x568]
7101d4c2c8  str wzr,[sp, #0x570]
7101d4c2cc  str xzr,[sp, #0x5a0]
7101d4c2d0  str xzr,[sp, #0x5d0]
7101d4c2d4  str xzr,[sp, #0x600]
7101d4c2d8  str xzr,[sp, #0x630]
7101d4c2dc  str xzr,[sp, #0x660]
7101d4c2e0  str wzr,[sp, #0x670]
7101d4c2e4  str x8,[sp, #0x410]
7101d4c2e8  str x21,[sp, #0x418]
7101d4c2ec  str x19,[sp, #0x430]
7101d4c2f0  bl 0x7101a7ed70
7101d4c2f4  ldr x0,[sp, #0x430]
7101d4c2f8  cmp x19,x0
7101d4c2fc  b.eq 0x7101d4c310
7101d4c300  cbz x0,0x7101d4c31c
7101d4c304  ldr x8,[x0]
7101d4c308  ldr x8,[x8, #0x28]
7101d4c30c  b 0x7101d4c318
7101d4c310  ldr x8,[x0]
7101d4c314  ldr x8,[x8, #0x20]
7101d4c318  blr x8
7101d4c31c  add x8,sp,#0x550
7101d4c320  add x1,x8,#0xc0
7101d4c324  adrp x8,0x71050af000
7101d4c328  add x8,x8,#0x460
7101d4c32c  add x19,sp,#0x410
7101d4c330  str x19,[sp, #0x430]
7101d4c334  add x0,sp,#0x410
7101d4c338  str x8,[sp, #0x410]
7101d4c33c  bl 0x7101989a30
7101d4c340  ldr x0,[sp, #0x430]
7101d4c344  cmp x19,x0
7101d4c348  b.eq 0x7101d4c35c
7101d4c34c  cbz x0,0x7101d4c368
7101d4c350  ldr x8,[x0]
7101d4c354  ldr x8,[x8, #0x28]
7101d4c358  b 0x7101d4c364
7101d4c35c  ldr x8,[x0]
7101d4c360  ldr x8,[x8, #0x20]
7101d4c364  blr x8
7101d4c368  adrp x1,0x710424f000
7101d4c36c  add x1,x1,#0x7ec
7101d4c370  add x8,sp,#0x540
7101d4c374  mov x0,x24
7101d4c378  bl 0x7103776640
7101d4c37c  ldr x19,[sp, #0x40]
7101d4c380  add x26,x19,#0x208
7101d4c384  adrp x2,0x71043e0000
7101d4c388  add x2,x2,#0xa21
7101d4c38c  add x1,sp,#0x540
7101d4c390  add x3,sp,#0x550
7101d4c394  mov x0,x26
7101d4c398  bl 0x7103770b30
7101d4c39c  adrp x2,0x71043cf000
7101d4c3a0  add x2,x2,#0x73c
7101d4c3a4  mov x0,x26
7101d4c3a8  mov w1,wzr
7101d4c3ac  bl 0x71037717d0
7101d4c3b0  adrp x2,0x7104443000
7101d4c3b4  add x2,x2,#0xab4
7101d4c3b8  mov w1,#0x1
7101d4c3bc  mov x0,x26
7101d4c3c0  bl 0x71037717d0
7101d4c3c4  ldr x9,[x19, #0x208]
7101d4c3c8  ldr x8,[x9, #0x1b8]
7101d4c3cc  cbz x8,0x7101d4c4b0
7101d4c3d0  add x9,x9,#0x1b8
7101d4c3d4  mov x10,x9
7101d4c3d8  mov x11,x8
7101d4c3dc  ldr w12,[x11, #0x20]
7101d4c3e0  cmp w12,#0x0
7101d4c3e4  cset w12,lt
7101d4c3e8  csel x10,x10,x11,lt
7101d4c3ec  ldr x11,[x11, w12, UXTW #0x3]
7101d4c3f0  cbnz x11,0x7101d4c3dc
7101d4c3f4  cmp x10,x9
7101d4c3f8  b.eq 0x7101d4c448
7101d4c3fc  ldr w11,[x10, #0x20]
7101d4c400  cmp w11,#0x0
7101d4c404  b.gt 0x7101d4c448
7101d4c408  ldr x19,[x10, #0x28]
7101d4c40c  cbz x19,0x7101d4c448
7101d4c410  ldr x8,[x19]
7101d4c414  ldr x8,[x8, #0x208]
7101d4c418  mov x0,x19
7101d4c41c  mov w1,wzr
7101d4c420  blr x8
7101d4c424  ldr x8,[x19]
7101d4c428  ldr x8,[x8, #0x388]
7101d4c42c  mov w1,#0x1
7101d4c430  mov x0,x19
7101d4c434  mov w2,wzr
7101d4c438  blr x8
7101d4c43c  ldr x8,[x26]
7101d4c440  add x9,x8,#0x1b8
7101d4c444  ldr x8,[x8, #0x1b8]
7101d4c448  cbz x8,0x7101d4c4b0
7101d4c44c  mov x10,x9
7101d4c450  ldr w11,[x8, #0x20]
7101d4c454  cmp w11,#0x1
7101d4c458  cset w11,lt
7101d4c45c  csel x10,x10,x8,lt
7101d4c460  ldr x8,[x8, w11, UXTW #0x3]
7101d4c464  cbnz x8,0x7101d4c450
7101d4c468  cmp x10,x9
7101d4c46c  b.eq 0x7101d4c4b0
7101d4c470  ldr w8,[x10, #0x20]
7101d4c474  cmp w8,#0x1
7101d4c478  b.gt 0x7101d4c4b0
7101d4c47c  ldr x19,[x10, #0x28]
7101d4c480  cbz x19,0x7101d4c4b0
7101d4c484  ldr x8,[x19]
7101d4c488  ldr x8,[x8, #0x208]
7101d4c48c  mov x0,x19
7101d4c490  mov w1,wzr
7101d4c494  blr x8
7101d4c498  ldr x8,[x19]
7101d4c49c  ldr x8,[x8, #0x388]
7101d4c4a0  mov w1,#0x1
7101d4c4a4  mov x0,x19
7101d4c4a8  mov w2,wzr
7101d4c4ac  blr x8
7101d4c4b0  ldr x0,[x25]
7101d4c4b4  ldr x8,[x0]
7101d4c4b8  ldr x8,[x8, #0x70]
7101d4c4bc  mov w1,wzr
7101d4c4c0  blr x8
7101d4c4c4  ldr x0,[x26]
7101d4c4c8  ldr x8,[x0]
7101d4c4cc  ldr x8,[x8, #0x70]
7101d4c4d0  mov w1,wzr
7101d4c4d4  blr x8
7101d4c4d8  add x0,sp,#0x410
7101d4c4dc  add x1,sp,#0x680
7101d4c4e0  add x19,sp,#0x410
7101d4c4e4  bl 0x7101989b70
7101d4c4e8  mov w8,#0x42340000
7101d4c4ec  str w8,[sp, #0x42c]
7101d4c4f0  add x1,x19,#0x60
7101d4c4f4  adrp x8,0x71050af000
7101d4c4f8  add x8,x8,#0x4a8
7101d4c4fc  add x19,sp,#0x2e0
7101d4c500  add x0,sp,#0x2e0
7101d4c504  str wzr,[sp, #0x414]
7101d4c508  str x8,[sp, #0x2e0]
7101d4c50c  str x19,[sp, #0x300]
7101d4c510  bl 0x7101989a30
7101d4c514  ldr x0,[sp, #0x300]
7101d4c518  cmp x19,x0
7101d4c51c  b.eq 0x7101d4c530
7101d4c520  cbz x0,0x7101d4c53c
7101d4c524  ldr x8,[x0]
7101d4c528  ldr x8,[x8, #0x28]
7101d4c52c  b 0x7101d4c538
7101d4c530  ldr x8,[x0]
7101d4c534  ldr x8,[x8, #0x20]
7101d4c538  blr x8
7101d4c53c  add x0,sp,#0x2e0
7101d4c540  add x1,sp,#0x410
7101d4c544  add x19,sp,#0x2e0
7101d4c548  bl 0x7101989b70
7101d4c54c  add x0,sp,#0x1b0
7101d4c550  add x1,sp,#0x410
7101d4c554  bl 0x7101989b70
7101d4c558  adrp x8,0x71050af000
7101d4c55c  add x8,x8,#0x4f0
7101d4c560  str x8,[sp, #0x80]
7101d4c564  ldr x8,[sp, #0x40]
7101d4c568  add x1,x19,#0x30
7101d4c56c  add x19,sp,#0x80
7101d4c570  add x0,sp,#0x80
7101d4c574  str x19,[sp, #0xa0]
7101d4c578  stp x8,x8,[sp, #0x88]
7101d4c57c  bl 0x7101a7ed70
7101d4c580  ldr x0,[sp, #0xa0]
7101d4c584  cmp x19,x0
7101d4c588  b.eq 0x7101d4c59c
7101d4c58c  cbz x0,0x7101d4c5a8
7101d4c590  ldr x8,[x0]
7101d4c594  ldr x8,[x8, #0x28]
7101d4c598  b 0x7101d4c5a4
7101d4c59c  ldr x8,[x0]
7101d4c5a0  ldr x8,[x8, #0x20]
7101d4c5a4  blr x8
7101d4c5a8  adrp x8,0x71050af000
7101d4c5ac  add x8,x8,#0x538
7101d4c5b0  str x8,[sp, #0x80]
7101d4c5b4  add x8,sp,#0x1b0
7101d4c5b8  add x1,x8,#0x30
7101d4c5bc  ldr x8,[sp, #0x40]
7101d4c5c0  add x19,sp,#0x80
7101d4c5c4  add x0,sp,#0x80
7101d4c5c8  str x19,[sp, #0xa0]
7101d4c5cc  stp x8,x8,[sp, #0x88]
7101d4c5d0  bl 0x7101a7ed70
7101d4c5d4  ldr x0,[sp, #0xa0]
7101d4c5d8  cmp x19,x0
7101d4c5dc  b.eq 0x7101d4c5f0
7101d4c5e0  cbz x0,0x7101d4c5fc
7101d4c5e4  ldr x8,[x0]
7101d4c5e8  ldr x8,[x8, #0x28]
7101d4c5ec  b 0x7101d4c5f8
7101d4c5f0  ldr x8,[x0]
7101d4c5f4  ldr x8,[x8, #0x20]
7101d4c5f8  blr x8
7101d4c5fc  mov w8,#0x1
7101d4c600  str w8,[sp, #0x90]
7101d4c604  strh w8,[sp, #0x94]
7101d4c608  strb w8,[sp, #0x96]
7101d4c60c  add x8,sp,#0x80
7101d4c610  add x1,x8,#0xc0
7101d4c614  adrp x8,0x71050af000
7101d4c618  add x8,x8,#0x580
7101d4c61c  sub x19,x29,#0xa0
7101d4c620  sub x0,x29,#0xa0
7101d4c624  str xzr,[sp, #0x80]
7101d4c628  strh w22,[sp, #0x88]
7101d4c62c  strh wzr,[sp, #0x8e]
7101d4c630  stur wzr,[sp, #0x8a]
7101d4c634  str x23,[sp, #0x98]
7101d4c638  str wzr,[sp, #0xa0]
7101d4c63c  str xzr,[sp, #0xd0]
7101d4c640  str xzr,[sp, #0x100]
7101d4c644  str xzr,[sp, #0x130]
7101d4c648  str xzr,[sp, #0x160]
7101d4c64c  str xzr,[sp, #0x190]
7101d4c650  str wzr,[sp, #0x1a0]
7101d4c654  stur x8,[x29, #-0xa0]
7101d4c658  stur x19,[x29, #-0x80]
7101d4c65c  bl 0x7101989a30
7101d4c660  ldur x0,[x29, #-0x80]
7101d4c664  cmp x19,x0
7101d4c668  b.eq 0x7101d4c684
7101d4c66c  ldr x23,[sp, #0x40]
7101d4c670  cbz x0,0x7101d4c694
7101d4c674  ldr x8,[x0]
7101d4c678  ldr x8,[x8, #0x28]
7101d4c67c  blr x8
7101d4c680  b 0x7101d4c694
7101d4c684  ldr x8,[x0]
7101d4c688  ldr x8,[x8, #0x20]
7101d4c68c  blr x8
7101d4c690  ldr x23,[sp, #0x40]
7101d4c694  add x8,sp,#0x80
7101d4c698  add x1,x8,#0x90
7101d4c69c  adrp x8,0x71050af000
7101d4c6a0  add x8,x8,#0x5c8
7101d4c6a4  sub x19,x29,#0xa0
7101d4c6a8  stur x19,[x29, #-0x80]
7101d4c6ac  sub x0,x29,#0xa0
7101d4c6b0  stur x8,[x29, #-0xa0]
7101d4c6b4  bl 0x7101989a30
7101d4c6b8  ldur x0,[x29, #-0x80]
7101d4c6bc  cmp x19,x0
7101d4c6c0  b.eq 0x7101d4c6d4
7101d4c6c4  cbz x0,0x7101d4c6e0
7101d4c6c8  ldr x8,[x0]
7101d4c6cc  ldr x8,[x8, #0x28]
7101d4c6d0  b 0x7101d4c6dc
7101d4c6d4  ldr x8,[x0]
7101d4c6d8  ldr x8,[x8, #0x20]
7101d4c6dc  blr x8
7101d4c6e0  add x9,sp,#0x80
7101d4c6e4  adrp x8,0x71050af000
7101d4c6e8  add x8,x8,#0x610
7101d4c6ec  add x1,x9,#0x30
7101d4c6f0  sub x19,x29,#0xa0
7101d4c6f4  stur x19,[x29, #-0x80]
7101d4c6f8  sub x0,x29,#0xa0
7101d4c6fc  stp x8,x23,[x29, #-0xa0]
7101d4c700  bl 0x7101a7ed70
7101d4c704  ldur x0,[x29, #-0x80]
7101d4c708  cmp x19,x0
7101d4c70c  b.eq 0x7101d4c720
7101d4c710  cbz x0,0x7101d4c72c
7101d4c714  ldr x8,[x0]
7101d4c718  ldr x8,[x8, #0x28]
7101d4c71c  b 0x7101d4c728
7101d4c720  ldr x8,[x0]
7101d4c724  ldr x8,[x8, #0x20]
7101d4c728  blr x8
7101d4c72c  add x25,x23,#0x1f8
7101d4c730  adrp x2,0x7104401000
7101d4c734  add x2,x2,#0xbc0
7101d4c738  add x3,sp,#0x2e0
7101d4c73c  mov x0,x25
7101d4c740  mov x1,x24
7101d4c744  bl 0x7103770b30
7101d4c748  adrp x19,0x71042b4000
7101d4c74c  add x19,x19,#0x5fd
7101d4c750  mov x0,x25
7101d4c754  mov w1,wzr
7101d4c758  mov x2,x19
7101d4c75c  bl 0x71037717d0
7101d4c760  adrp x2,0x7104454000
7101d4c764  add x2,x2,#0xd5c
7101d4c768  mov w1,#0x1
7101d4c76c  mov x0,x25
7101d4c770  bl 0x71037717d0
7101d4c774  adrp x2,0x7104443000
7101d4c778  add x2,x2,#0xa8c
7101d4c77c  orr w1,wzr,#0x3
7101d4c780  mov x0,x25
7101d4c784  bl 0x71037717d0
7101d4c788  adrp x2,0x710435b000
7101d4c78c  add x2,x2,#0xa25
7101d4c790  mov w1,#0x2
7101d4c794  mov x0,x25
7101d4c798  bl 0x71037717d0
7101d4c79c  sub x8,x29,#0xa0
7101d4c7a0  mov x0,x24
7101d4c7a4  mov x1,x19
7101d4c7a8  bl 0x7103776640
7101d4c7ac  ldur x19,[x29, #-0x98]
7101d4c7b0  fmov s0,0x3f800000
7101d4c7b4  adrp x1,0x71042d6000
7101d4c7b8  add x1,x1,#0x588
7101d4c7bc  mov x0,x19
7101d4c7c0  bl 0x7103778300
7101d4c7c4  adrp x28,0x710523d000
7101d4c7c8  add x28,x28,#0x988
7101d4c7cc  stp x28,xzr,[x29, #-0xa0]
7101d4c7d0  cbz x19,0x7101d4c7f4
7101d4c7d4  ldr x0,[x19, #0x18]
7101d4c7d8  adrp x8,0x710523d000
7101d4c7dc  add x8,x8,#0x9a8
7101d4c7e0  stp x8,xzr,[x19, #0x10]
7101d4c7e4  cbz x0,0x7101d4c7ec
7101d4c7e8  bl 0x710392eb40
7101d4c7ec  mov x0,x19
7101d4c7f0  bl 0x710392eb40
7101d4c7f4  adrp x1,0x7104454000
7101d4c7f8  add x1,x1,#0xd5c
7101d4c7fc  sub x8,x29,#0xa0
7101d4c800  mov x0,x24
7101d4c804  bl 0x7103776640
7101d4c808  ldur x19,[x29, #-0x98]
7101d4c80c  fmov s0,0x3f800000
7101d4c810  adrp x1,0x71042d6000
7101d4c814  add x1,x1,#0x588
7101d4c818  mov x0,x19
7101d4c81c  bl 0x7103778300
7101d4c820  stp x28,xzr,[x29, #-0xa0]
7101d4c824  cbz x19,0x7101d4c848
7101d4c828  ldr x0,[x19, #0x18]
7101d4c82c  adrp x8,0x710523d000
7101d4c830  add x8,x8,#0x9a8
7101d4c834  stp x8,xzr,[x19, #0x10]
7101d4c838  cbz x0,0x7101d4c840
7101d4c83c  bl 0x710392eb40
7101d4c840  mov x0,x19
7101d4c844  bl 0x710392eb40
7101d4c848  adrp x1,0x7104443000
7101d4c84c  add x1,x1,#0xa8c
7101d4c850  sub x8,x29,#0xa0
7101d4c854  mov x0,x24
7101d4c858  bl 0x7103776640
7101d4c85c  ldur x19,[x29, #-0x98]
7101d4c860  fmov s0,0x3f800000
7101d4c864  adrp x1,0x71042d6000
7101d4c868  add x1,x1,#0x588
7101d4c86c  mov x0,x19
7101d4c870  bl 0x7103778300
7101d4c874  stp x28,xzr,[x29, #-0xa0]
7101d4c878  cbz x19,0x7101d4c89c
7101d4c87c  ldr x0,[x19, #0x18]
7101d4c880  adrp x8,0x710523d000
7101d4c884  add x8,x8,#0x9a8
7101d4c888  stp x8,xzr,[x19, #0x10]
7101d4c88c  cbz x0,0x7101d4c894
7101d4c890  bl 0x710392eb40
7101d4c894  mov x0,x19
7101d4c898  bl 0x710392eb40
7101d4c89c  adrp x1,0x710435b000
7101d4c8a0  add x1,x1,#0xa25
7101d4c8a4  sub x8,x29,#0xa0
7101d4c8a8  mov x0,x24
7101d4c8ac  bl 0x7103776640
7101d4c8b0  ldur x19,[x29, #-0x98]
7101d4c8b4  fmov s0,0x3f800000
7101d4c8b8  adrp x1,0x71042d6000
7101d4c8bc  add x1,x1,#0x588
7101d4c8c0  mov x0,x19
7101d4c8c4  bl 0x7103778300
7101d4c8c8  stp x28,xzr,[x29, #-0xa0]
7101d4c8cc  cbz x19,0x7101d4c8f0
7101d4c8d0  ldr x0,[x19, #0x18]
7101d4c8d4  adrp x8,0x710523d000
7101d4c8d8  add x8,x8,#0x9a8
7101d4c8dc  stp x8,xzr,[x19, #0x10]
7101d4c8e0  cbz x0,0x7101d4c8e8
7101d4c8e4  bl 0x710392eb40
7101d4c8e8  mov x0,x19
7101d4c8ec  bl 0x710392eb40
7101d4c8f0  add x26,x23,#0x200
7101d4c8f4  adrp x2,0x7104454000
7101d4c8f8  add x2,x2,#0xd70
7101d4c8fc  add x3,sp,#0x1b0
7101d4c900  mov x0,x26
7101d4c904  mov x1,x24
7101d4c908  bl 0x7103770b30
7101d4c90c  adrp x19,0x7104280000
7101d4c910  add x19,x19,#0xd48
7101d4c914  mov x0,x26
7101d4c918  mov w1,wzr
7101d4c91c  mov x2,x19
7101d4c920  bl 0x71037717d0
7101d4c924  adrp x2,0x710439d000
7101d4c928  add x2,x2,#0x6d7
7101d4c92c  mov w1,#0x1
7101d4c930  mov x0,x26
7101d4c934  bl 0x71037717d0
7101d4c938  adrp x2,0x7104443000
7101d4c93c  add x2,x2,#0xaa0
7101d4c940  orr w1,wzr,#0x3
7101d4c944  mov x0,x26
7101d4c948  bl 0x71037717d0
7101d4c94c  adrp x2,0x7104291000
7101d4c950  add x2,x2,#0xf03
7101d4c954  mov w1,#0x2
7101d4c958  mov x0,x26
7101d4c95c  bl 0x71037717d0
7101d4c960  sub x8,x29,#0xa0
7101d4c964  mov x0,x24
7101d4c968  mov x1,x19
7101d4c96c  bl 0x7103776640
7101d4c970  ldur x19,[x29, #-0x98]
7101d4c974  fmov s0,0x3f800000
7101d4c978  adrp x1,0x7104454000
7101d4c97c  add x1,x1,#0xd7c
7101d4c980  mov x0,x19
7101d4c984  bl 0x7103778300
7101d4c988  stp x28,xzr,[x29, #-0xa0]
7101d4c98c  cbz x19,0x7101d4c9b0
7101d4c990  ldr x0,[x19, #0x18]
7101d4c994  adrp x8,0x710523d000
7101d4c998  add x8,x8,#0x9a8
7101d4c99c  stp x8,xzr,[x19, #0x10]
7101d4c9a0  cbz x0,0x7101d4c9a8
7101d4c9a4  bl 0x710392eb40
7101d4c9a8  mov x0,x19
7101d4c9ac  bl 0x710392eb40
7101d4c9b0  adrp x1,0x710439d000
7101d4c9b4  add x1,x1,#0x6d7
7101d4c9b8  sub x8,x29,#0xa0
7101d4c9bc  mov x0,x24
7101d4c9c0  bl 0x7103776640
7101d4c9c4  ldur x19,[x29, #-0x98]
7101d4c9c8  fmov s0,0x3f800000
7101d4c9cc  adrp x1,0x7104454000
7101d4c9d0  add x1,x1,#0xd7c
7101d4c9d4  mov x0,x19
7101d4c9d8  bl 0x7103778300
7101d4c9dc  stp x28,xzr,[x29, #-0xa0]
7101d4c9e0  cbz x19,0x7101d4ca04
7101d4c9e4  ldr x0,[x19, #0x18]
7101d4c9e8  adrp x8,0x710523d000
7101d4c9ec  add x8,x8,#0x9a8
7101d4c9f0  stp x8,xzr,[x19, #0x10]
7101d4c9f4  cbz x0,0x7101d4c9fc
7101d4c9f8  bl 0x710392eb40
7101d4c9fc  mov x0,x19
7101d4ca00  bl 0x710392eb40
7101d4ca04  adrp x1,0x7104443000
7101d4ca08  add x1,x1,#0xaa0
7101d4ca0c  sub x8,x29,#0xa0
7101d4ca10  mov x0,x24
7101d4ca14  bl 0x7103776640
7101d4ca18  ldur x19,[x29, #-0x98]
7101d4ca1c  fmov s0,0x3f800000
7101d4ca20  adrp x1,0x7104454000
7101d4ca24  add x1,x1,#0xd7c
7101d4ca28  mov x0,x19
7101d4ca2c  bl 0x7103778300
7101d4ca30  stp x28,xzr,[x29, #-0xa0]
7101d4ca34  cbz x19,0x7101d4ca58
7101d4ca38  ldr x0,[x19, #0x18]
7101d4ca3c  adrp x8,0x710523d000
7101d4ca40  add x8,x8,#0x9a8
7101d4ca44  stp x8,xzr,[x19, #0x10]
7101d4ca48  cbz x0,0x7101d4ca50
7101d4ca4c  bl 0x710392eb40
7101d4ca50  mov x0,x19
7101d4ca54  bl 0x710392eb40
7101d4ca58  adrp x1,0x7104291000
7101d4ca5c  add x1,x1,#0xf03
7101d4ca60  sub x8,x29,#0xa0
7101d4ca64  mov x0,x24
7101d4ca68  bl 0x7103776640
7101d4ca6c  ldur x19,[x29, #-0x98]
7101d4ca70  fmov s0,0x3f800000
7101d4ca74  adrp x1,0x7104454000
7101d4ca78  add x1,x1,#0xd7c
7101d4ca7c  mov x0,x19
7101d4ca80  bl 0x7103778300
7101d4ca84  stp x28,xzr,[x29, #-0xa0]
7101d4ca88  cbz x19,0x7101d4caac
7101d4ca8c  ldr x0,[x19, #0x18]
7101d4ca90  adrp x8,0x710523d000
7101d4ca94  add x8,x8,#0x9a8
7101d4ca98  stp x8,xzr,[x19, #0x10]
7101d4ca9c  cbz x0,0x7101d4caa4
7101d4caa0  bl 0x710392eb40
7101d4caa4  mov x0,x19
7101d4caa8  bl 0x710392eb40
7101d4caac  mov w2,#0x1
7101d4cab0  mov x0,x25
7101d4cab4  mov w1,wzr
7101d4cab8  bl 0x7103771a80
7101d4cabc  ldr x0,[x23, #0x1f8]
7101d4cac0  ldr x8,[x0]
7101d4cac4  ldr x8,[x8, #0x70]
7101d4cac8  mov w1,wzr
7101d4cacc  blr x8
7101d4cad0  mov w2,#0x1
7101d4cad4  mov x0,x26
7101d4cad8  mov w1,wzr
7101d4cadc  bl 0x7103771a80
7101d4cae0  ldr x0,[x23, #0x200]
7101d4cae4  ldr x8,[x0]
7101d4cae8  ldr x8,[x8, #0x70]
7101d4caec  mov w1,wzr
7101d4caf0  blr x8
7101d4caf4  ldr x8,[x23, #0xa8]
7101d4caf8  ldr x8,[x8]
7101d4cafc  add x19,x23,#0x210
7101d4cb00  adrp x2,0x7104401000
7101d4cb04  add x2,x2,#0xbc0
7101d4cb08  add x3,sp,#0x80
7101d4cb0c  mov x0,x19
7101d4cb10  add x21,sp,#0x80
7101d4cb14  add x1,x8,#0x8
7101d4cb18  bl 0x7103770b30
7101d4cb1c  adrp x2,0x7104281000
7101d4cb20  add x2,x2,#0x205
7101d4cb24  mov x0,x19
7101d4cb28  mov w1,wzr
7101d4cb2c  bl 0x71037717d0
7101d4cb30  mov w2,#0x1
7101d4cb34  mov x0,x19
7101d4cb38  mov w1,wzr
7101d4cb3c  bl 0x7103771a80
7101d4cb40  ldr x0,[x23, #0x210]
7101d4cb44  ldr x8,[x0]
7101d4cb48  ldr x8,[x8, #0x70]
7101d4cb4c  mov w1,wzr
7101d4cb50  blr x8
7101d4cb54  ldr x0,[sp, #0x190]
7101d4cb58  add x8,x21,#0xf0
7101d4cb5c  cmp x8,x0
7101d4cb60  b.eq 0x7101d4cb74
7101d4cb64  cbz x0,0x7101d4cb80
7101d4cb68  ldr x8,[x0]
7101d4cb6c  ldr x8,[x8, #0x28]
7101d4cb70  b 0x7101d4cb7c
7101d4cb74  ldr x8,[x0]
7101d4cb78  ldr x8,[x8, #0x20]
7101d4cb7c  blr x8
7101d4cb80  ldr x0,[sp, #0x160]
7101d4cb84  add x8,sp,#0x80
7101d4cb88  add x8,x8,#0xc0
7101d4cb8c  cmp x8,x0
7101d4cb90  b.eq 0x7101d4cba4
7101d4cb94  cbz x0,0x7101d4cbb0
7101d4cb98  ldr x8,[x0]
7101d4cb9c  ldr x8,[x8, #0x28]
7101d4cba0  b 0x7101d4cbac
7101d4cba4  ldr x8,[x0]
7101d4cba8  ldr x8,[x8, #0x20]
7101d4cbac  blr x8
7101d4cbb0  ldr x0,[sp, #0x130]
7101d4cbb4  add x8,sp,#0x80
7101d4cbb8  add x8,x8,#0x90
7101d4cbbc  cmp x8,x0
7101d4cbc0  b.eq 0x7101d4cbd4
7101d4cbc4  cbz x0,0x7101d4cbe0
7101d4cbc8  ldr x8,[x0]
7101d4cbcc  ldr x8,[x8, #0x28]
7101d4cbd0  b 0x7101d4cbdc
7101d4cbd4  ldr x8,[x0]
7101d4cbd8  ldr x8,[x8, #0x20]
7101d4cbdc  blr x8
7101d4cbe0  ldr x0,[sp, #0x100]
7101d4cbe4  add x8,sp,#0x80
7101d4cbe8  add x8,x8,#0x60
7101d4cbec  cmp x8,x0
7101d4cbf0  b.eq 0x7101d4cc04
7101d4cbf4  cbz x0,0x7101d4cc10
7101d4cbf8  ldr x8,[x0]
7101d4cbfc  ldr x8,[x8, #0x28]
7101d4cc00  b 0x7101d4cc0c
7101d4cc04  ldr x8,[x0]
7101d4cc08  ldr x8,[x8, #0x20]
7101d4cc0c  blr x8
7101d4cc10  ldr x0,[sp, #0xd0]
7101d4cc14  add x8,sp,#0x80
7101d4cc18  add x8,x8,#0x30
7101d4cc1c  cmp x8,x0
7101d4cc20  b.eq 0x7101d4cc34
7101d4cc24  cbz x0,0x7101d4cc40
7101d4cc28  ldr x8,[x0]
7101d4cc2c  ldr x8,[x8, #0x28]
7101d4cc30  b 0x7101d4cc3c
7101d4cc34  ldr x8,[x0]
7101d4cc38  ldr x8,[x8, #0x20]
7101d4cc3c  blr x8
7101d4cc40  ldr x0,[sp, #0x2c0]
7101d4cc44  add x8,sp,#0x1b0
7101d4cc48  add x8,x8,#0xf0
7101d4cc4c  cmp x8,x0
7101d4cc50  b.eq 0x7101d4cc64
7101d4cc54  cbz x0,0x7101d4cc70
7101d4cc58  ldr x8,[x0]
7101d4cc5c  ldr x8,[x8, #0x28]
7101d4cc60  b 0x7101d4cc6c
7101d4cc64  ldr x8,[x0]
7101d4cc68  ldr x8,[x8, #0x20]
7101d4cc6c  blr x8
7101d4cc70  ldr x0,[sp, #0x290]
7101d4cc74  add x8,sp,#0x1b0
7101d4cc78  add x8,x8,#0xc0
7101d4cc7c  cmp x8,x0
7101d4cc80  b.eq 0x7101d4cc94
7101d4cc84  cbz x0,0x7101d4cca0
7101d4cc88  ldr x8,[x0]
7101d4cc8c  ldr x8,[x8, #0x28]
7101d4cc90  b 0x7101d4cc9c
7101d4cc94  ldr x8,[x0]
7101d4cc98  ldr x8,[x8, #0x20]
7101d4cc9c  blr x8
7101d4cca0  ldr x0,[sp, #0x260]
7101d4cca4  add x8,sp,#0x1b0
7101d4cca8  add x8,x8,#0x90
7101d4ccac  cmp x8,x0
7101d4ccb0  b.eq 0x7101d4ccc4
7101d4ccb4  cbz x0,0x7101d4ccd0
7101d4ccb8  ldr x8,[x0]
7101d4ccbc  ldr x8,[x8, #0x28]
7101d4ccc0  b 0x7101d4cccc
7101d4ccc4  ldr x8,[x0]
7101d4ccc8  ldr x8,[x8, #0x20]
7101d4cccc  blr x8
7101d4ccd0  ldr x0,[sp, #0x230]
7101d4ccd4  add x8,sp,#0x1b0
7101d4ccd8  add x8,x8,#0x60
7101d4ccdc  cmp x8,x0
7101d4cce0  b.eq 0x7101d4ccf4
7101d4cce4  cbz x0,0x7101d4cd00
7101d4cce8  ldr x8,[x0]
7101d4ccec  ldr x8,[x8, #0x28]
7101d4ccf0  b 0x7101d4ccfc
7101d4ccf4  ldr x8,[x0]
7101d4ccf8  ldr x8,[x8, #0x20]
7101d4ccfc  blr x8
7101d4cd00  ldr x0,[sp, #0x200]
7101d4cd04  add x8,sp,#0x1b0
7101d4cd08  add x8,x8,#0x30
7101d4cd0c  cmp x8,x0
7101d4cd10  b.eq 0x7101d4cd24
7101d4cd14  cbz x0,0x7101d4cd30
7101d4cd18  ldr x8,[x0]
7101d4cd1c  ldr x8,[x8, #0x28]
7101d4cd20  b 0x7101d4cd2c
7101d4cd24  ldr x8,[x0]
7101d4cd28  ldr x8,[x8, #0x20]
7101d4cd2c  blr x8
7101d4cd30  ldr x0,[sp, #0x3f0]
7101d4cd34  add x8,sp,#0x2e0
7101d4cd38  add x8,x8,#0xf0
7101d4cd3c  cmp x8,x0
7101d4cd40  b.eq 0x7101d4cd54
7101d4cd44  cbz x0,0x7101d4cd60
7101d4cd48  ldr x8,[x0]
7101d4cd4c  ldr x8,[x8, #0x28]
7101d4cd50  b 0x7101d4cd5c
7101d4cd54  ldr x8,[x0]
7101d4cd58  ldr x8,[x8, #0x20]
7101d4cd5c  blr x8
7101d4cd60  ldr x0,[sp, #0x3c0]
7101d4cd64  add x8,sp,#0x2e0
7101d4cd68  add x8,x8,#0xc0
7101d4cd6c  cmp x8,x0
7101d4cd70  b.eq 0x7101d4cd84
7101d4cd74  cbz x0,0x7101d4cd90
7101d4cd78  ldr x8,[x0]
7101d4cd7c  ldr x8,[x8, #0x28]
7101d4cd80  b 0x7101d4cd8c
7101d4cd84  ldr x8,[x0]
7101d4cd88  ldr x8,[x8, #0x20]
7101d4cd8c  blr x8
7101d4cd90  ldr x0,[sp, #0x390]
7101d4cd94  add x8,sp,#0x2e0
7101d4cd98  add x8,x8,#0x90
7101d4cd9c  cmp x8,x0
7101d4cda0  b.eq 0x7101d4cdb4
7101d4cda4  cbz x0,0x7101d4cdc0
7101d4cda8  ldr x8,[x0]
7101d4cdac  ldr x8,[x8, #0x28]
7101d4cdb0  b 0x7101d4cdbc
7101d4cdb4  ldr x8,[x0]
7101d4cdb8  ldr x8,[x8, #0x20]
7101d4cdbc  blr x8
7101d4cdc0  ldr x0,[sp, #0x360]
7101d4cdc4  add x8,sp,#0x2e0
7101d4cdc8  add x8,x8,#0x60
7101d4cdcc  cmp x8,x0
7101d4cdd0  b.eq 0x7101d4cde4
7101d4cdd4  cbz x0,0x7101d4cdf0
7101d4cdd8  ldr x8,[x0]
7101d4cddc  ldr x8,[x8, #0x28]
7101d4cde0  b 0x7101d4cdec
7101d4cde4  ldr x8,[x0]
7101d4cde8  ldr x8,[x8, #0x20]
7101d4cdec  blr x8
7101d4cdf0  ldr x0,[sp, #0x330]
7101d4cdf4  add x8,sp,#0x2e0
7101d4cdf8  add x8,x8,#0x30
7101d4cdfc  cmp x8,x0
7101d4ce00  b.eq 0x7101d4ce14
7101d4ce04  cbz x0,0x7101d4ce20
7101d4ce08  ldr x8,[x0]
7101d4ce0c  ldr x8,[x8, #0x28]
7101d4ce10  b 0x7101d4ce1c
7101d4ce14  ldr x8,[x0]
7101d4ce18  ldr x8,[x8, #0x20]
7101d4ce1c  blr x8
7101d4ce20  ldr x0,[sp, #0x520]
7101d4ce24  add x8,sp,#0x410
7101d4ce28  add x8,x8,#0xf0
7101d4ce2c  cmp x8,x0
7101d4ce30  b.eq 0x7101d4ce44
7101d4ce34  cbz x0,0x7101d4ce50
7101d4ce38  ldr x8,[x0]
7101d4ce3c  ldr x8,[x8, #0x28]
7101d4ce40  b 0x7101d4ce4c
7101d4ce44  ldr x8,[x0]
7101d4ce48  ldr x8,[x8, #0x20]
7101d4ce4c  blr x8
7101d4ce50  ldr x0,[sp, #0x4f0]
7101d4ce54  add x8,sp,#0x410
7101d4ce58  add x8,x8,#0xc0
7101d4ce5c  cmp x8,x0
7101d4ce60  b.eq 0x7101d4ce74
7101d4ce64  cbz x0,0x7101d4ce80
7101d4ce68  ldr x8,[x0]
7101d4ce6c  ldr x8,[x8, #0x28]
7101d4ce70  b 0x7101d4ce7c
7101d4ce74  ldr x8,[x0]
7101d4ce78  ldr x8,[x8, #0x20]
7101d4ce7c  blr x8
7101d4ce80  ldr x0,[sp, #0x4c0]
7101d4ce84  add x8,sp,#0x410
7101d4ce88  add x8,x8,#0x90
7101d4ce8c  cmp x8,x0
7101d4ce90  b.eq 0x7101d4cea4
7101d4ce94  cbz x0,0x7101d4ceb0
7101d4ce98  ldr x8,[x0]
7101d4ce9c  ldr x8,[x8, #0x28]
7101d4cea0  b 0x7101d4ceac
7101d4cea4  ldr x8,[x0]
7101d4cea8  ldr x8,[x8, #0x20]
7101d4ceac  blr x8
7101d4ceb0  ldr x0,[sp, #0x490]
7101d4ceb4  add x8,sp,#0x410
7101d4ceb8  add x8,x8,#0x60
7101d4cebc  cmp x8,x0
7101d4cec0  b.eq 0x7101d4ced4
7101d4cec4  cbz x0,0x7101d4cee0
7101d4cec8  ldr x8,[x0]
7101d4cecc  ldr x8,[x8, #0x28]
7101d4ced0  b 0x7101d4cedc
7101d4ced4  ldr x8,[x0]
7101d4ced8  ldr x8,[x8, #0x20]
7101d4cedc  blr x8
7101d4cee0  ldr x0,[sp, #0x460]
7101d4cee4  add x8,sp,#0x410
7101d4cee8  add x8,x8,#0x30
7101d4ceec  cmp x8,x0
7101d4cef0  b.eq 0x7101d4cf04
7101d4cef4  cbz x0,0x7101d4cf10
7101d4cef8  ldr x8,[x0]
7101d4cefc  ldr x8,[x8, #0x28]
7101d4cf00  b 0x7101d4cf0c
7101d4cf04  ldr x8,[x0]
7101d4cf08  ldr x8,[x8, #0x20]
7101d4cf0c  blr x8
7101d4cf10  ldr x19,[sp, #0x548]
7101d4cf14  str x28,[sp, #0x540]
7101d4cf18  str xzr,[sp, #0x548]
7101d4cf1c  cbz x19,0x7101d4cf40
7101d4cf20  ldr x0,[x19, #0x18]
7101d4cf24  adrp x8,0x710523d000
7101d4cf28  add x8,x8,#0x9a8
7101d4cf2c  stp x8,xzr,[x19, #0x10]
7101d4cf30  cbz x0,0x7101d4cf38
7101d4cf34  bl 0x710392eb40
7101d4cf38  mov x0,x19
7101d4cf3c  bl 0x710392eb40
7101d4cf40  ldr x0,[sp, #0x660]
7101d4cf44  add x8,sp,#0x550
7101d4cf48  add x8,x8,#0xf0
7101d4cf4c  cmp x8,x0
7101d4cf50  b.eq 0x7101d4cf64
7101d4cf54  cbz x0,0x7101d4cf70
7101d4cf58  ldr x8,[x0]
7101d4cf5c  ldr x8,[x8, #0x28]
7101d4cf60  b 0x7101d4cf6c
7101d4cf64  ldr x8,[x0]
7101d4cf68  ldr x8,[x8, #0x20]
7101d4cf6c  blr x8
7101d4cf70  ldr x0,[sp, #0x630]
7101d4cf74  add x8,sp,#0x550
7101d4cf78  add x8,x8,#0xc0
7101d4cf7c  cmp x8,x0
7101d4cf80  b.eq 0x7101d4cf94
7101d4cf84  cbz x0,0x7101d4cfa0
7101d4cf88  ldr x8,[x0]
7101d4cf8c  ldr x8,[x8, #0x28]
7101d4cf90  b 0x7101d4cf9c
7101d4cf94  ldr x8,[x0]
7101d4cf98  ldr x8,[x8, #0x20]
7101d4cf9c  blr x8
7101d4cfa0  ldr x0,[sp, #0x600]
7101d4cfa4  add x8,sp,#0x550
7101d4cfa8  add x8,x8,#0x90
7101d4cfac  cmp x8,x0
7101d4cfb0  b.eq 0x7101d4cfc4
7101d4cfb4  cbz x0,0x7101d4cfd0
7101d4cfb8  ldr x8,[x0]
7101d4cfbc  ldr x8,[x8, #0x28]
7101d4cfc0  b 0x7101d4cfcc
7101d4cfc4  ldr x8,[x0]
7101d4cfc8  ldr x8,[x8, #0x20]
7101d4cfcc  blr x8
7101d4cfd0  ldr x0,[sp, #0x5d0]
7101d4cfd4  add x8,sp,#0x550
7101d4cfd8  add x8,x8,#0x60
7101d4cfdc  cmp x8,x0
7101d4cfe0  b.eq 0x7101d4cff4
7101d4cfe4  cbz x0,0x7101d4d000
7101d4cfe8  ldr x8,[x0]
7101d4cfec  ldr x8,[x8, #0x28]
7101d4cff0  b 0x7101d4cffc
7101d4cff4  ldr x8,[x0]
7101d4cff8  ldr x8,[x8, #0x20]
7101d4cffc  blr x8
7101d4d000  ldr x0,[sp, #0x5a0]
7101d4d004  add x8,sp,#0x550
7101d4d008  add x8,x8,#0x30
7101d4d00c  cmp x8,x0
7101d4d010  b.eq 0x7101d4d024
7101d4d014  cbz x0,0x7101d4d030
7101d4d018  ldr x8,[x0]
7101d4d01c  ldr x8,[x8, #0x28]
7101d4d020  b 0x7101d4d02c
7101d4d024  ldr x8,[x0]
7101d4d028  ldr x8,[x8, #0x20]
7101d4d02c  blr x8
7101d4d030  ldr x0,[sp, #0x790]
7101d4d034  add x8,sp,#0x680
7101d4d038  add x8,x8,#0xf0
7101d4d03c  cmp x8,x0
7101d4d040  b.eq 0x7101d4d054
7101d4d044  cbz x0,0x7101d4d060
7101d4d048  ldr x8,[x0]
7101d4d04c  ldr x8,[x8, #0x28]
7101d4d050  b 0x7101d4d05c
7101d4d054  ldr x8,[x0]
7101d4d058  ldr x8,[x8, #0x20]
7101d4d05c  blr x8
7101d4d060  ldr x0,[sp, #0x760]
7101d4d064  add x8,sp,#0x680
7101d4d068  add x8,x8,#0xc0
7101d4d06c  cmp x8,x0
7101d4d070  b.eq 0x7101d4d084
7101d4d074  cbz x0,0x7101d4d090
7101d4d078  ldr x8,[x0]
7101d4d07c  ldr x8,[x8, #0x28]
7101d4d080  b 0x7101d4d08c
7101d4d084  ldr x8,[x0]
7101d4d088  ldr x8,[x8, #0x20]
7101d4d08c  blr x8
7101d4d090  ldr x0,[sp, #0x730]
7101d4d094  cmp x20,x0
7101d4d098  b.eq 0x7101d4d0ac
7101d4d09c  cbz x0,0x7101d4d0b8
7101d4d0a0  ldr x8,[x0]
7101d4d0a4  ldr x8,[x8, #0x28]
7101d4d0a8  b 0x7101d4d0b4
7101d4d0ac  ldr x8,[x0]
7101d4d0b0  ldr x8,[x8, #0x20]
7101d4d0b4  blr x8
7101d4d0b8  ldr x0,[sp, #0x700]
7101d4d0bc  add x8,sp,#0x680
7101d4d0c0  add x8,x8,#0x60
7101d4d0c4  cmp x8,x0
7101d4d0c8  b.eq 0x7101d4d0dc
7101d4d0cc  cbz x0,0x7101d4d0e8
7101d4d0d0  ldr x8,[x0]
7101d4d0d4  ldr x8,[x8, #0x28]
7101d4d0d8  b 0x7101d4d0e4
7101d4d0dc  ldr x8,[x0]
7101d4d0e0  ldr x8,[x8, #0x20]
7101d4d0e4  blr x8
7101d4d0e8  ldr x0,[sp, #0x6d0]
7101d4d0ec  add x8,sp,#0x680
7101d4d0f0  add x8,x8,#0x30
7101d4d0f4  cmp x8,x0
7101d4d0f8  b.eq 0x7101d4d10c
7101d4d0fc  cbz x0,0x7101d4d118
7101d4d100  ldr x8,[x0]
7101d4d104  ldr x8,[x8, #0x28]
7101d4d108  b 0x7101d4d114
7101d4d10c  ldr x8,[x0]
7101d4d110  ldr x8,[x8, #0x20]
7101d4d114  blr x8
7101d4d118  adrp x9,0x710532f000
7101d4d11c  ldr x9,[x9, #0x7f0]
7101d4d120  ldr x8,[x23, #0xa0]
7101d4d124  ldr x8,[x8]
7101d4d128  fmov s8,0x3f800000
7101d4d12c  adrp x10,0x710424f000
7101d4d130  add x10,x10,#0xac6
7101d4d134  adrp x11,0x710433a000
7101d4d138  add x11,x11,#0x6a9
7101d4d13c  mov v0.16B,v8.16B
7101d4d140  ldr x9,[x9, #0x8]
7101d4d144  ldr x0,[x8, #0x10]
7101d4d148  ldrb w9,[x9, #0x35]
7101d4d14c  cmp w9,#0x0
7101d4d150  csel x19,x11,x10,eq
7101d4d154  mov x1,x19
7101d4d158  bl 0x7103778300
7101d4d15c  ldr x8,[x23, #0xa8]
7101d4d160  ldr x8,[x8]
7101d4d164  ldr x0,[x8, #0x10]
7101d4d168  mov v0.16B,v8.16B
7101d4d16c  mov x1,x19
7101d4d170  bl 0x7103778300
7101d4d174  mov x19,x23
7101d4d178  ldr x8,[x19, #0x78]!
7101d4d17c  ldr x9,[x19, #0x8]
7101d4d180  sub x24,x19,#0x8
7101d4d184  cmp x8,x9
7101d4d188  b.cs 0x7101d4d1a0
7101d4d18c  str wzr,[x8]
7101d4d190  ldr x8,[x19]
7101d4d194  add x20,x8,#0x4
7101d4d198  str x20,[x19]
7101d4d19c  b 0x7101d4d290
7101d4d1a0  ldr x25,[x24]
7101d4d1a4  sub x26,x8,x25
7101d4d1a8  asr x20,x26,#0x2
7101d4d1ac  add x8,x20,#0x1
7101d4d1b0  lsr x10,x8,#0x3e
7101d4d1b4  cbnz x10,0x7101d4f2c4
7101d4d1b8  sub x9,x9,x25
7101d4d1bc  asr x10,x9,#0x2
7101d4d1c0  orr x11,xzr,#0x1ffffffffffffffe
7101d4d1c4  cmp x10,x11
7101d4d1c8  b.hi 0x7101d4d1e8
7101d4d1cc  asr x9,x9,#0x1
7101d4d1d0  cmp x9,x8
7101d4d1d4  csel x23,x8,x9,cc
7101d4d1d8  cbz x23,0x7101d4d24c
7101d4d1dc  lsr x8,x23,#0x3e
7101d4d1e0  cbz x8,0x7101d4d1ec
7101d4d1e4  b 0x7101d4df64
7101d4d1e8  orr x23,xzr,#0x3fffffffffffffff
7101d4d1ec  lsl x8,x23,#0x2
7101d4d1f0  cmp x8,#0x0
7101d4d1f4  csinc x27,x8,xzr,ne
7101d4d1f8  mov w0,#0x10
7101d4d1fc  mov x1,x27
7101d4d200  bl 0x710392e290
7101d4d204  mov x22,x0
7101d4d208  cbnz x0,0x7101d4d250
7101d4d20c  adrp x8,0x7105332000
7101d4d210  ldr x0,[x8, #0xf00]
7101d4d214  cbz x0,0x7101d4d24c
7101d4d218  str wzr,[sp, #0x550]
7101d4d21c  str x27,[sp, #0x680]
7101d4d220  ldr x8,[x0]
7101d4d224  ldr x8,[x8, #0x30]
7101d4d228  add x1,sp,#0x550
7101d4d22c  add x2,sp,#0x680
7101d4d230  blr x8
7101d4d234  tbz w0,#0x0,0x7101d4d24c
7101d4d238  mov w0,#0x10
7101d4d23c  mov x1,x27
7101d4d240  bl 0x710392e290
7101d4d244  mov x22,x0
7101d4d248  cbnz x0,0x7101d4d250
7101d4d24c  mov x22,xzr
7101d4d250  add x20,x22,x20, LSL #0x2
7101d4d254  add x21,x22,x23, LSL #0x2
7101d4d258  cmp x26,#0x1
7101d4d25c  str wzr,[x20], #0x4
7101d4d260  b.lt 0x7101d4d274
7101d4d264  mov x0,x22
7101d4d268  mov x1,x25
7101d4d26c  mov x2,x26
7101d4d270  bl 0x71039c00e0
7101d4d274  ldr x23,[sp, #0x40]
7101d4d278  stp x22,x20,[x23, #0x70]
7101d4d27c  str x21,[x23, #0x80]
7101d4d280  cbz x25,0x7101d4d290
7101d4d284  mov x0,x25
7101d4d288  bl 0x710392eb40
7101d4d28c  ldr x20,[x19]
7101d4d290  ldr x8,[x23, #0x80]
7101d4d294  cmp x20,x8
7101d4d298  b.cs 0x7101d4d2b4
7101d4d29c  mov w8,#0x1
7101d4d2a0  str w8,[x20]
7101d4d2a4  ldr x8,[x19]
7101d4d2a8  add x20,x8,#0x4
7101d4d2ac  str x20,[x19]
7101d4d2b0  b 0x7101d4d3a8
7101d4d2b4  ldr x25,[x24]
7101d4d2b8  sub x26,x20,x25
7101d4d2bc  asr x20,x26,#0x2
7101d4d2c0  add x9,x20,#0x1
7101d4d2c4  lsr x10,x9,#0x3e
7101d4d2c8  cbnz x10,0x7101d4f2c4
7101d4d2cc  sub x8,x8,x25
7101d4d2d0  asr x10,x8,#0x2
7101d4d2d4  orr x11,xzr,#0x1ffffffffffffffe
7101d4d2d8  cmp x10,x11
7101d4d2dc  b.hi 0x7101d4d2fc
7101d4d2e0  asr x8,x8,#0x1
7101d4d2e4  cmp x8,x9
7101d4d2e8  csel x23,x9,x8,cc
7101d4d2ec  cbz x23,0x7101d4d360
7101d4d2f0  lsr x8,x23,#0x3e
7101d4d2f4  cbz x8,0x7101d4d300
7101d4d2f8  b 0x7101d4df64
7101d4d2fc  orr x23,xzr,#0x3fffffffffffffff
7101d4d300  lsl x8,x23,#0x2
7101d4d304  cmp x8,#0x0
7101d4d308  csinc x27,x8,xzr,ne
7101d4d30c  mov w0,#0x10
7101d4d310  mov x1,x27
7101d4d314  bl 0x710392e290
7101d4d318  mov x22,x0
7101d4d31c  cbnz x0,0x7101d4d364
7101d4d320  adrp x8,0x7105332000
7101d4d324  ldr x0,[x8, #0xf00]
7101d4d328  cbz x0,0x7101d4d360
7101d4d32c  str wzr,[sp, #0x550]
7101d4d330  str x27,[sp, #0x680]
7101d4d334  ldr x8,[x0]
7101d4d338  ldr x8,[x8, #0x30]
7101d4d33c  add x1,sp,#0x550
7101d4d340  add x2,sp,#0x680
7101d4d344  blr x8
7101d4d348  tbz w0,#0x0,0x7101d4d360
7101d4d34c  mov w0,#0x10
7101d4d350  mov x1,x27
7101d4d354  bl 0x710392e290
7101d4d358  mov x22,x0
7101d4d35c  cbnz x0,0x7101d4d364
7101d4d360  mov x22,xzr
7101d4d364  add x20,x22,x20, LSL #0x2
7101d4d368  mov w8,#0x1
7101d4d36c  add x21,x22,x23, LSL #0x2
7101d4d370  str w8,[x20], #0x4
7101d4d374  cmp x26,#0x1
7101d4d378  b.lt 0x7101d4d38c
7101d4d37c  mov x0,x22
7101d4d380  mov x1,x25
7101d4d384  mov x2,x26
7101d4d388  bl 0x71039c00e0
7101d4d38c  ldr x23,[sp, #0x40]
7101d4d390  stp x22,x20,[x23, #0x70]
7101d4d394  str x21,[x23, #0x80]
7101d4d398  cbz x25,0x7101d4d3a8
7101d4d39c  mov x0,x25
7101d4d3a0  bl 0x710392eb40
7101d4d3a4  ldr x20,[x19]
7101d4d3a8  ldr x8,[x23, #0x80]
7101d4d3ac  cmp x20,x8
7101d4d3b0  b.cs 0x7101d4d3cc
7101d4d3b4  mov w8,#0x2
7101d4d3b8  str w8,[x20]
7101d4d3bc  ldr x8,[x19]
7101d4d3c0  add x20,x8,#0x4
7101d4d3c4  str x20,[x19]
7101d4d3c8  b 0x7101d4d4c0
7101d4d3cc  ldr x25,[x24]
7101d4d3d0  sub x26,x20,x25
7101d4d3d4  asr x20,x26,#0x2
7101d4d3d8  add x9,x20,#0x1
7101d4d3dc  lsr x10,x9,#0x3e
7101d4d3e0  cbnz x10,0x7101d4f2c4
7101d4d3e4  sub x8,x8,x25
7101d4d3e8  asr x10,x8,#0x2
7101d4d3ec  orr x11,xzr,#0x1ffffffffffffffe
7101d4d3f0  cmp x10,x11
7101d4d3f4  b.hi 0x7101d4d414
7101d4d3f8  asr x8,x8,#0x1
7101d4d3fc  cmp x8,x9
7101d4d400  csel x23,x9,x8,cc
7101d4d404  cbz x23,0x7101d4d478
7101d4d408  lsr x8,x23,#0x3e
7101d4d40c  cbz x8,0x7101d4d418
7101d4d410  b 0x7101d4df64
7101d4d414  orr x23,xzr,#0x3fffffffffffffff
7101d4d418  lsl x8,x23,#0x2
7101d4d41c  cmp x8,#0x0
7101d4d420  csinc x27,x8,xzr,ne
7101d4d424  mov w0,#0x10
7101d4d428  mov x1,x27
7101d4d42c  bl 0x710392e290
7101d4d430  mov x22,x0
7101d4d434  cbnz x0,0x7101d4d47c
7101d4d438  adrp x8,0x7105332000
7101d4d43c  ldr x0,[x8, #0xf00]
7101d4d440  cbz x0,0x7101d4d478
7101d4d444  str wzr,[sp, #0x550]
7101d4d448  str x27,[sp, #0x680]
7101d4d44c  ldr x8,[x0]
7101d4d450  ldr x8,[x8, #0x30]
7101d4d454  add x1,sp,#0x550
7101d4d458  add x2,sp,#0x680
7101d4d45c  blr x8
7101d4d460  tbz w0,#0x0,0x7101d4d478
7101d4d464  mov w0,#0x10
7101d4d468  mov x1,x27
7101d4d46c  bl 0x710392e290
7101d4d470  mov x22,x0
7101d4d474  cbnz x0,0x7101d4d47c
7101d4d478  mov x22,xzr
7101d4d47c  add x20,x22,x20, LSL #0x2
7101d4d480  mov w8,#0x2
7101d4d484  add x21,x22,x23, LSL #0x2
7101d4d488  str w8,[x20], #0x4
7101d4d48c  cmp x26,#0x1
7101d4d490  b.lt 0x7101d4d4a4
7101d4d494  mov x0,x22
7101d4d498  mov x1,x25
7101d4d49c  mov x2,x26
7101d4d4a0  bl 0x71039c00e0
7101d4d4a4  ldr x23,[sp, #0x40]
7101d4d4a8  stp x22,x20,[x23, #0x70]
7101d4d4ac  str x21,[x23, #0x80]
7101d4d4b0  cbz x25,0x7101d4d4c0
7101d4d4b4  mov x0,x25
7101d4d4b8  bl 0x710392eb40
7101d4d4bc  ldr x20,[x19]
7101d4d4c0  ldr x8,[x23, #0x80]
7101d4d4c4  cmp x20,x8
7101d4d4c8  b.cs 0x7101d4d4e4
7101d4d4cc  orr w8,wzr,#0x3
7101d4d4d0  str w8,[x20]
7101d4d4d4  ldr x8,[x19]
7101d4d4d8  add x20,x8,#0x4
7101d4d4dc  str x20,[x19]
7101d4d4e0  b 0x7101d4d5d8
7101d4d4e4  ldr x25,[x24]
7101d4d4e8  sub x26,x20,x25
7101d4d4ec  asr x20,x26,#0x2
7101d4d4f0  add x9,x20,#0x1
7101d4d4f4  lsr x10,x9,#0x3e
7101d4d4f8  cbnz x10,0x7101d4f2c4
7101d4d4fc  sub x8,x8,x25
7101d4d500  asr x10,x8,#0x2
7101d4d504  orr x11,xzr,#0x1ffffffffffffffe
7101d4d508  cmp x10,x11
7101d4d50c  b.hi 0x7101d4d52c
7101d4d510  asr x8,x8,#0x1
7101d4d514  cmp x8,x9
7101d4d518  csel x23,x9,x8,cc
7101d4d51c  cbz x23,0x7101d4d590
7101d4d520  lsr x8,x23,#0x3e
7101d4d524  cbz x8,0x7101d4d530
7101d4d528  b 0x7101d4df64
7101d4d52c  orr x23,xzr,#0x3fffffffffffffff
7101d4d530  lsl x8,x23,#0x2
7101d4d534  cmp x8,#0x0
7101d4d538  csinc x27,x8,xzr,ne
7101d4d53c  mov w0,#0x10
7101d4d540  mov x1,x27
7101d4d544  bl 0x710392e290
7101d4d548  mov x22,x0
7101d4d54c  cbnz x0,0x7101d4d594
7101d4d550  adrp x8,0x7105332000
7101d4d554  ldr x0,[x8, #0xf00]
7101d4d558  cbz x0,0x7101d4d590
7101d4d55c  str wzr,[sp, #0x550]
7101d4d560  str x27,[sp, #0x680]
7101d4d564  ldr x8,[x0]
7101d4d568  ldr x8,[x8, #0x30]
7101d4d56c  add x1,sp,#0x550
7101d4d570  add x2,sp,#0x680
7101d4d574  blr x8
7101d4d578  tbz w0,#0x0,0x7101d4d590
7101d4d57c  mov w0,#0x10
7101d4d580  mov x1,x27
7101d4d584  bl 0x710392e290
7101d4d588  mov x22,x0
7101d4d58c  cbnz x0,0x7101d4d594
7101d4d590  mov x22,xzr
7101d4d594  add x20,x22,x20, LSL #0x2
7101d4d598  orr w8,wzr,#0x3
7101d4d59c  add x21,x22,x23, LSL #0x2
7101d4d5a0  str w8,[x20], #0x4
7101d4d5a4  cmp x26,#0x1
7101d4d5a8  b.lt 0x7101d4d5bc
7101d4d5ac  mov x0,x22
7101d4d5b0  mov x1,x25
7101d4d5b4  mov x2,x26
7101d4d5b8  bl 0x71039c00e0
7101d4d5bc  ldr x23,[sp, #0x40]
7101d4d5c0  stp x22,x20,[x23, #0x70]
7101d4d5c4  str x21,[x23, #0x80]
7101d4d5c8  cbz x25,0x7101d4d5d8
7101d4d5cc  mov x0,x25
7101d4d5d0  bl 0x710392eb40
7101d4d5d4  ldr x20,[x19]
7101d4d5d8  ldr x8,[x23, #0x80]
7101d4d5dc  cmp x20,x8
7101d4d5e0  b.cs 0x7101d4d5fc
7101d4d5e4  mov w8,#0x4
7101d4d5e8  str w8,[x20]
7101d4d5ec  ldr x8,[x19]
7101d4d5f0  add x20,x8,#0x4
7101d4d5f4  str x20,[x19]
7101d4d5f8  b 0x7101d4d6f0
7101d4d5fc  ldr x25,[x24]
7101d4d600  sub x26,x20,x25
7101d4d604  asr x20,x26,#0x2
7101d4d608  add x9,x20,#0x1
7101d4d60c  lsr x10,x9,#0x3e
7101d4d610  cbnz x10,0x7101d4f2c4
7101d4d614  sub x8,x8,x25
7101d4d618  asr x10,x8,#0x2
7101d4d61c  orr x11,xzr,#0x1ffffffffffffffe
7101d4d620  cmp x10,x11
7101d4d624  b.hi 0x7101d4d644
7101d4d628  asr x8,x8,#0x1
7101d4d62c  cmp x8,x9
7101d4d630  csel x23,x9,x8,cc
7101d4d634  cbz x23,0x7101d4d6a8
7101d4d638  lsr x8,x23,#0x3e
7101d4d63c  cbz x8,0x7101d4d648
7101d4d640  b 0x7101d4df64
7101d4d644  orr x23,xzr,#0x3fffffffffffffff
7101d4d648  lsl x8,x23,#0x2
7101d4d64c  cmp x8,#0x0
7101d4d650  csinc x27,x8,xzr,ne
7101d4d654  mov w0,#0x10
7101d4d658  mov x1,x27
7101d4d65c  bl 0x710392e290
7101d4d660  mov x22,x0
7101d4d664  cbnz x0,0x7101d4d6ac
7101d4d668  adrp x8,0x7105332000
7101d4d66c  ldr x0,[x8, #0xf00]
7101d4d670  cbz x0,0x7101d4d6a8
7101d4d674  str wzr,[sp, #0x550]
7101d4d678  str x27,[sp, #0x680]
7101d4d67c  ldr x8,[x0]
7101d4d680  ldr x8,[x8, #0x30]
7101d4d684  add x1,sp,#0x550
7101d4d688  add x2,sp,#0x680
7101d4d68c  blr x8
7101d4d690  tbz w0,#0x0,0x7101d4d6a8
7101d4d694  mov w0,#0x10
7101d4d698  mov x1,x27
7101d4d69c  bl 0x710392e290
7101d4d6a0  mov x22,x0
7101d4d6a4  cbnz x0,0x7101d4d6ac
7101d4d6a8  mov x22,xzr
7101d4d6ac  add x20,x22,x20, LSL #0x2
7101d4d6b0  mov w8,#0x4
7101d4d6b4  add x21,x22,x23, LSL #0x2
7101d4d6b8  str w8,[x20], #0x4
7101d4d6bc  cmp x26,#0x1
7101d4d6c0  b.lt 0x7101d4d6d4
7101d4d6c4  mov x0,x22
7101d4d6c8  mov x1,x25
7101d4d6cc  mov x2,x26
7101d4d6d0  bl 0x71039c00e0
7101d4d6d4  ldr x23,[sp, #0x40]
7101d4d6d8  stp x22,x20,[x23, #0x70]
7101d4d6dc  str x21,[x23, #0x80]
7101d4d6e0  cbz x25,0x7101d4d6f0
7101d4d6e4  mov x0,x25
7101d4d6e8  bl 0x710392eb40
7101d4d6ec  ldr x20,[x19]
7101d4d6f0  ldr x8,[x23, #0x80]
7101d4d6f4  cmp x20,x8
7101d4d6f8  b.cs 0x7101d4d714
7101d4d6fc  mov w8,#0x5
7101d4d700  str w8,[x20]
7101d4d704  ldr x8,[x19]
7101d4d708  add x8,x8,#0x4
7101d4d70c  str x8,[x19]
7101d4d710  b 0x7101d4d804
7101d4d714  ldr x25,[x24]
7101d4d718  sub x26,x20,x25
7101d4d71c  asr x20,x26,#0x2
7101d4d720  add x9,x20,#0x1
7101d4d724  lsr x10,x9,#0x3e
7101d4d728  cbnz x10,0x7101d4f2c4
7101d4d72c  sub x8,x8,x25
7101d4d730  asr x10,x8,#0x2
7101d4d734  orr x11,xzr,#0x1ffffffffffffffe
7101d4d738  cmp x10,x11
7101d4d73c  b.hi 0x7101d4d75c
7101d4d740  asr x8,x8,#0x1
7101d4d744  cmp x8,x9
7101d4d748  csel x23,x9,x8,cc
7101d4d74c  cbz x23,0x7101d4d7c0
7101d4d750  lsr x8,x23,#0x3e
7101d4d754  cbz x8,0x7101d4d760
7101d4d758  b 0x7101d4df64
7101d4d75c  orr x23,xzr,#0x3fffffffffffffff
7101d4d760  lsl x8,x23,#0x2
7101d4d764  cmp x8,#0x0
7101d4d768  csinc x27,x8,xzr,ne
7101d4d76c  mov w0,#0x10
7101d4d770  mov x1,x27
7101d4d774  bl 0x710392e290
7101d4d778  mov x22,x0
7101d4d77c  cbnz x0,0x7101d4d7c4
7101d4d780  adrp x8,0x7105332000
7101d4d784  ldr x0,[x8, #0xf00]
7101d4d788  cbz x0,0x7101d4d7c0
7101d4d78c  str wzr,[sp, #0x550]
7101d4d790  str x27,[sp, #0x680]
7101d4d794  ldr x8,[x0]
7101d4d798  ldr x8,[x8, #0x30]
7101d4d79c  add x1,sp,#0x550
7101d4d7a0  add x2,sp,#0x680
7101d4d7a4  blr x8
7101d4d7a8  tbz w0,#0x0,0x7101d4d7c0
7101d4d7ac  mov w0,#0x10
7101d4d7b0  mov x1,x27
7101d4d7b4  bl 0x710392e290
7101d4d7b8  mov x22,x0
7101d4d7bc  cbnz x0,0x7101d4d7c4
7101d4d7c0  mov x22,xzr
7101d4d7c4  add x20,x22,x20, LSL #0x2
7101d4d7c8  mov w8,#0x5
7101d4d7cc  add x21,x22,x23, LSL #0x2
7101d4d7d0  str w8,[x20], #0x4
7101d4d7d4  cmp x26,#0x1
7101d4d7d8  b.lt 0x7101d4d7ec
7101d4d7dc  mov x0,x22
7101d4d7e0  mov x1,x25
7101d4d7e4  mov x2,x26
7101d4d7e8  bl 0x71039c00e0
7101d4d7ec  ldr x23,[sp, #0x40]
7101d4d7f0  stp x22,x20,[x23, #0x70]
7101d4d7f4  str x21,[x23, #0x80]
7101d4d7f8  cbz x25,0x7101d4d804
7101d4d7fc  mov x0,x25
7101d4d800  bl 0x710392eb40
7101d4d804  mov x20,x23
7101d4d808  ldr x8,[x20, #0x90]!
7101d4d80c  str x24,[sp, #0x30]
7101d4d810  ldr x9,[x20, #0x8]
7101d4d814  sub x25,x20,#0x8
7101d4d818  cmp x8,x9
7101d4d81c  b.cs 0x7101d4d834
7101d4d820  str wzr,[x8]
7101d4d824  ldr x8,[x20]
7101d4d828  add x21,x8,#0x4
7101d4d82c  str x21,[x20]
7101d4d830  b 0x7101d4d934
7101d4d834  ldr x26,[x25]
7101d4d838  sub x27,x8,x26
7101d4d83c  asr x23,x27,#0x2
7101d4d840  add x8,x23,#0x1
7101d4d844  lsr x10,x8,#0x3e
7101d4d848  cbnz x10,0x7101d4f2bc
7101d4d84c  sub x9,x9,x26
7101d4d850  asr x10,x9,#0x2
7101d4d854  orr x11,xzr,#0x1ffffffffffffffe
7101d4d858  cmp x10,x11
7101d4d85c  b.hi 0x7101d4d87c
7101d4d860  asr x9,x9,#0x1
7101d4d864  cmp x9,x8
7101d4d868  csel x24,x8,x9,cc
7101d4d86c  cbz x24,0x7101d4f264
7101d4d870  lsr x8,x24,#0x3e
7101d4d874  cbz x8,0x7101d4d880
7101d4d878  b 0x7101d4df64
7101d4d87c  orr x24,xzr,#0x3fffffffffffffff
7101d4d880  lsl x8,x24,#0x2
7101d4d884  cmp x8,#0x0
7101d4d888  csinc x28,x8,xzr,ne
7101d4d88c  mov w0,#0x10
7101d4d890  mov x1,x28
7101d4d894  bl 0x710392e290
7101d4d898  mov x22,x0
7101d4d89c  cbnz x0,0x7101d4d8e4
7101d4d8a0  adrp x8,0x7105332000
7101d4d8a4  ldr x0,[x8, #0xf00]
7101d4d8a8  cbz x0,0x7101d4d8e0
7101d4d8ac  str wzr,[sp, #0x550]
7101d4d8b0  str x28,[sp, #0x680]
7101d4d8b4  ldr x8,[x0]
7101d4d8b8  ldr x8,[x8, #0x30]
7101d4d8bc  add x1,sp,#0x550
7101d4d8c0  add x2,sp,#0x680
7101d4d8c4  blr x8
7101d4d8c8  tbz w0,#0x0,0x7101d4d8e0
7101d4d8cc  mov w0,#0x10
7101d4d8d0  mov x1,x28
7101d4d8d4  bl 0x710392e290
7101d4d8d8  mov x22,x0
7101d4d8dc  cbnz x0,0x7101d4d8e4
7101d4d8e0  mov x22,xzr
7101d4d8e4  adrp x28,0x710523d000
7101d4d8e8  add x28,x28,#0x988
7101d4d8ec  add x21,x22,x23, LSL #0x2
7101d4d8f0  add x23,x22,x24, LSL #0x2
7101d4d8f4  cmp x27,#0x1
7101d4d8f8  str wzr,[x21], #0x4
7101d4d8fc  b.lt 0x7101d4d910
7101d4d900  mov x0,x22
7101d4d904  mov x1,x26
7101d4d908  mov x2,x27
7101d4d90c  bl 0x71039c00e0
7101d4d910  ldr x8,[sp, #0x40]
7101d4d914  stp x22,x21,[x8, #0x88]
7101d4d918  ldr x24,[sp, #0x30]
7101d4d91c  str x23,[x8, #0x98]
7101d4d920  mov x23,x8
7101d4d924  cbz x26,0x7101d4d934
7101d4d928  mov x0,x26
7101d4d92c  bl 0x710392eb40
7101d4d930  ldr x21,[x20]
7101d4d934  ldr x8,[x23, #0x98]
7101d4d938  cmp x21,x8
7101d4d93c  b.cs 0x7101d4d958
7101d4d940  mov w8,#0x1
7101d4d944  str w8,[x21]
7101d4d948  ldr x8,[x20]
7101d4d94c  add x21,x8,#0x4
7101d4d950  str x21,[x20]
7101d4d954  b 0x7101d4da5c
7101d4d958  ldr x26,[x25]
7101d4d95c  sub x27,x21,x26
7101d4d960  asr x23,x27,#0x2
7101d4d964  add x9,x23,#0x1
7101d4d968  lsr x10,x9,#0x3e
7101d4d96c  cbnz x10,0x7101d4f2bc
7101d4d970  sub x8,x8,x26
7101d4d974  asr x10,x8,#0x2
7101d4d978  orr x11,xzr,#0x1ffffffffffffffe
7101d4d97c  cmp x10,x11
7101d4d980  b.hi 0x7101d4d9a0
7101d4d984  asr x8,x8,#0x1
7101d4d988  cmp x8,x9
7101d4d98c  csel x24,x9,x8,cc
7101d4d990  cbz x24,0x7101d4f26c
7101d4d994  lsr x8,x24,#0x3e
7101d4d998  cbz x8,0x7101d4d9a4
7101d4d99c  b 0x7101d4df64
7101d4d9a0  orr x24,xzr,#0x3fffffffffffffff
7101d4d9a4  lsl x8,x24,#0x2
7101d4d9a8  cmp x8,#0x0
7101d4d9ac  csinc x28,x8,xzr,ne
7101d4d9b0  mov w0,#0x10
7101d4d9b4  mov x1,x28
7101d4d9b8  bl 0x710392e290
7101d4d9bc  mov x22,x0
7101d4d9c0  cbnz x0,0x7101d4da08
7101d4d9c4  adrp x8,0x7105332000
7101d4d9c8  ldr x0,[x8, #0xf00]
7101d4d9cc  cbz x0,0x7101d4da04
7101d4d9d0  str wzr,[sp, #0x550]
7101d4d9d4  str x28,[sp, #0x680]
7101d4d9d8  ldr x8,[x0]
7101d4d9dc  ldr x8,[x8, #0x30]
7101d4d9e0  add x1,sp,#0x550
7101d4d9e4  add x2,sp,#0x680
7101d4d9e8  blr x8
7101d4d9ec  tbz w0,#0x0,0x7101d4da04
7101d4d9f0  mov w0,#0x10
7101d4d9f4  mov x1,x28
7101d4d9f8  bl 0x710392e290
7101d4d9fc  mov x22,x0
7101d4da00  cbnz x0,0x7101d4da08
7101d4da04  mov x22,xzr
7101d4da08  adrp x28,0x710523d000
7101d4da0c  add x28,x28,#0x988
7101d4da10  add x21,x22,x23, LSL #0x2
7101d4da14  mov w8,#0x1
7101d4da18  add x23,x22,x24, LSL #0x2
7101d4da1c  str w8,[x21], #0x4
7101d4da20  cmp x27,#0x1
7101d4da24  b.lt 0x7101d4da38
7101d4da28  mov x0,x22
7101d4da2c  mov x1,x26
7101d4da30  mov x2,x27
7101d4da34  bl 0x71039c00e0
7101d4da38  ldr x8,[sp, #0x40]
7101d4da3c  stp x22,x21,[x8, #0x88]
7101d4da40  ldr x24,[sp, #0x30]
7101d4da44  str x23,[x8, #0x98]
7101d4da48  mov x23,x8
7101d4da4c  cbz x26,0x7101d4da5c
7101d4da50  mov x0,x26
7101d4da54  bl 0x710392eb40
7101d4da58  ldr x21,[x20]
7101d4da5c  ldr x8,[x23, #0x98]
7101d4da60  cmp x21,x8
7101d4da64  b.cs 0x7101d4da80
7101d4da68  orr w8,wzr,#0x6
7101d4da6c  str w8,[x21]
7101d4da70  ldr x8,[x20]
7101d4da74  add x21,x8,#0x4
7101d4da78  str x21,[x20]
7101d4da7c  b 0x7101d4db84
7101d4da80  ldr x26,[x25]
7101d4da84  sub x27,x21,x26
7101d4da88  asr x23,x27,#0x2
7101d4da8c  add x9,x23,#0x1
7101d4da90  lsr x10,x9,#0x3e
7101d4da94  cbnz x10,0x7101d4f2bc
7101d4da98  sub x8,x8,x26
7101d4da9c  asr x10,x8,#0x2
7101d4daa0  orr x11,xzr,#0x1ffffffffffffffe
7101d4daa4  cmp x10,x11
7101d4daa8  b.hi 0x7101d4dac8
7101d4daac  asr x8,x8,#0x1
7101d4dab0  cmp x8,x9
7101d4dab4  csel x24,x9,x8,cc
7101d4dab8  cbz x24,0x7101d4f274
7101d4dabc  lsr x8,x24,#0x3e
7101d4dac0  cbz x8,0x7101d4dacc
7101d4dac4  b 0x7101d4df64
7101d4dac8  orr x24,xzr,#0x3fffffffffffffff
7101d4dacc  lsl x8,x24,#0x2
7101d4dad0  cmp x8,#0x0
7101d4dad4  csinc x28,x8,xzr,ne
7101d4dad8  mov w0,#0x10
7101d4dadc  mov x1,x28
7101d4dae0  bl 0x710392e290
7101d4dae4  mov x22,x0
7101d4dae8  cbnz x0,0x7101d4db30
7101d4daec  adrp x8,0x7105332000
7101d4daf0  ldr x0,[x8, #0xf00]
7101d4daf4  cbz x0,0x7101d4db2c
7101d4daf8  str wzr,[sp, #0x550]
7101d4dafc  str x28,[sp, #0x680]
7101d4db00  ldr x8,[x0]
7101d4db04  ldr x8,[x8, #0x30]
7101d4db08  add x1,sp,#0x550
7101d4db0c  add x2,sp,#0x680
7101d4db10  blr x8
7101d4db14  tbz w0,#0x0,0x7101d4db2c
7101d4db18  mov w0,#0x10
7101d4db1c  mov x1,x28
7101d4db20  bl 0x710392e290
7101d4db24  mov x22,x0
7101d4db28  cbnz x0,0x7101d4db30
7101d4db2c  mov x22,xzr
7101d4db30  adrp x28,0x710523d000
7101d4db34  add x28,x28,#0x988
7101d4db38  add x21,x22,x23, LSL #0x2
7101d4db3c  orr w8,wzr,#0x6
7101d4db40  add x23,x22,x24, LSL #0x2
7101d4db44  str w8,[x21], #0x4
7101d4db48  cmp x27,#0x1
7101d4db4c  b.lt 0x7101d4db60
7101d4db50  mov x0,x22
7101d4db54  mov x1,x26
7101d4db58  mov x2,x27
7101d4db5c  bl 0x71039c00e0
7101d4db60  ldr x8,[sp, #0x40]
7101d4db64  stp x22,x21,[x8, #0x88]
7101d4db68  ldr x24,[sp, #0x30]
7101d4db6c  str x23,[x8, #0x98]
7101d4db70  mov x23,x8
7101d4db74  cbz x26,0x7101d4db84
7101d4db78  mov x0,x26
7101d4db7c  bl 0x710392eb40
7101d4db80  ldr x21,[x20]
7101d4db84  ldr x8,[x23, #0x98]
7101d4db88  cmp x21,x8
7101d4db8c  b.cs 0x7101d4dba8
7101d4db90  orr w8,wzr,#0x7
7101d4db94  str w8,[x21]
7101d4db98  ldr x8,[x20]
7101d4db9c  add x21,x8,#0x4
7101d4dba0  str x21,[x20]
7101d4dba4  b 0x7101d4dcac
7101d4dba8  ldr x26,[x25]
7101d4dbac  sub x27,x21,x26
7101d4dbb0  asr x23,x27,#0x2
7101d4dbb4  add x9,x23,#0x1
7101d4dbb8  lsr x10,x9,#0x3e
7101d4dbbc  cbnz x10,0x7101d4f2bc
7101d4dbc0  sub x8,x8,x26
7101d4dbc4  asr x10,x8,#0x2
7101d4dbc8  orr x11,xzr,#0x1ffffffffffffffe
7101d4dbcc  cmp x10,x11
7101d4dbd0  b.hi 0x7101d4dbf0
7101d4dbd4  asr x8,x8,#0x1
7101d4dbd8  cmp x8,x9
7101d4dbdc  csel x24,x9,x8,cc
7101d4dbe0  cbz x24,0x7101d4f27c
7101d4dbe4  lsr x8,x24,#0x3e
7101d4dbe8  cbz x8,0x7101d4dbf4
7101d4dbec  b 0x7101d4df64
7101d4dbf0  orr x24,xzr,#0x3fffffffffffffff
7101d4dbf4  lsl x8,x24,#0x2
7101d4dbf8  cmp x8,#0x0
7101d4dbfc  csinc x28,x8,xzr,ne
7101d4dc00  mov w0,#0x10
7101d4dc04  mov x1,x28
7101d4dc08  bl 0x710392e290
7101d4dc0c  mov x22,x0
7101d4dc10  cbnz x0,0x7101d4dc58
7101d4dc14  adrp x8,0x7105332000
7101d4dc18  ldr x0,[x8, #0xf00]
7101d4dc1c  cbz x0,0x7101d4dc54
7101d4dc20  str wzr,[sp, #0x550]
7101d4dc24  str x28,[sp, #0x680]
7101d4dc28  ldr x8,[x0]
7101d4dc2c  ldr x8,[x8, #0x30]
7101d4dc30  add x1,sp,#0x550
7101d4dc34  add x2,sp,#0x680
7101d4dc38  blr x8
7101d4dc3c  tbz w0,#0x0,0x7101d4dc54
7101d4dc40  mov w0,#0x10
7101d4dc44  mov x1,x28
7101d4dc48  bl 0x710392e290
7101d4dc4c  mov x22,x0
7101d4dc50  cbnz x0,0x7101d4dc58
7101d4dc54  mov x22,xzr
7101d4dc58  adrp x28,0x710523d000
7101d4dc5c  add x28,x28,#0x988
7101d4dc60  add x21,x22,x23, LSL #0x2
7101d4dc64  orr w8,wzr,#0x7
7101d4dc68  add x23,x22,x24, LSL #0x2
7101d4dc6c  str w8,[x21], #0x4
7101d4dc70  cmp x27,#0x1
7101d4dc74  b.lt 0x7101d4dc88
7101d4dc78  mov x0,x22
7101d4dc7c  mov x1,x26
7101d4dc80  mov x2,x27
7101d4dc84  bl 0x71039c00e0
7101d4dc88  ldr x8,[sp, #0x40]
7101d4dc8c  stp x22,x21,[x8, #0x88]
7101d4dc90  ldr x24,[sp, #0x30]
7101d4dc94  str x23,[x8, #0x98]
7101d4dc98  mov x23,x8
7101d4dc9c  cbz x26,0x7101d4dcac
7101d4dca0  mov x0,x26
7101d4dca4  bl 0x710392eb40
7101d4dca8  ldr x21,[x20]
7101d4dcac  ldr x8,[x23, #0x98]
7101d4dcb0  cmp x21,x8
7101d4dcb4  b.cs 0x7101d4dcd0
7101d4dcb8  mov w8,#0x8
7101d4dcbc  str w8,[x21]
7101d4dcc0  ldr x8,[x20]
7101d4dcc4  add x21,x8,#0x4
7101d4dcc8  str x21,[x20]
7101d4dccc  b 0x7101d4ddd4
7101d4dcd0  ldr x26,[x25]
7101d4dcd4  sub x27,x21,x26
7101d4dcd8  asr x23,x27,#0x2
7101d4dcdc  add x9,x23,#0x1
7101d4dce0  lsr x10,x9,#0x3e
7101d4dce4  cbnz x10,0x7101d4f2bc
7101d4dce8  sub x8,x8,x26
7101d4dcec  asr x10,x8,#0x2
7101d4dcf0  orr x11,xzr,#0x1ffffffffffffffe
7101d4dcf4  cmp x10,x11
7101d4dcf8  b.hi 0x7101d4dd18
7101d4dcfc  asr x8,x8,#0x1
7101d4dd00  cmp x8,x9
7101d4dd04  csel x24,x9,x8,cc
7101d4dd08  cbz x24,0x7101d4f284
7101d4dd0c  lsr x8,x24,#0x3e
7101d4dd10  cbz x8,0x7101d4dd1c
7101d4dd14  b 0x7101d4df64
7101d4dd18  orr x24,xzr,#0x3fffffffffffffff
7101d4dd1c  lsl x8,x24,#0x2
7101d4dd20  cmp x8,#0x0
7101d4dd24  csinc x28,x8,xzr,ne
7101d4dd28  mov w0,#0x10
7101d4dd2c  mov x1,x28
7101d4dd30  bl 0x710392e290
7101d4dd34  mov x22,x0
7101d4dd38  cbnz x0,0x7101d4dd80
7101d4dd3c  adrp x8,0x7105332000
7101d4dd40  ldr x0,[x8, #0xf00]
7101d4dd44  cbz x0,0x7101d4dd7c
7101d4dd48  str wzr,[sp, #0x550]
7101d4dd4c  str x28,[sp, #0x680]
7101d4dd50  ldr x8,[x0]
7101d4dd54  ldr x8,[x8, #0x30]
7101d4dd58  add x1,sp,#0x550
7101d4dd5c  add x2,sp,#0x680
7101d4dd60  blr x8
7101d4dd64  tbz w0,#0x0,0x7101d4dd7c
7101d4dd68  mov w0,#0x10
7101d4dd6c  mov x1,x28
7101d4dd70  bl 0x710392e290
7101d4dd74  mov x22,x0
7101d4dd78  cbnz x0,0x7101d4dd80
7101d4dd7c  mov x22,xzr
7101d4dd80  adrp x28,0x710523d000
7101d4dd84  add x28,x28,#0x988
7101d4dd88  add x21,x22,x23, LSL #0x2
7101d4dd8c  mov w8,#0x8
7101d4dd90  add x23,x22,x24, LSL #0x2
7101d4dd94  str w8,[x21], #0x4
7101d4dd98  cmp x27,#0x1
7101d4dd9c  b.lt 0x7101d4ddb0
7101d4dda0  mov x0,x22
7101d4dda4  mov x1,x26
7101d4dda8  mov x2,x27
7101d4ddac  bl 0x71039c00e0
7101d4ddb0  ldr x8,[sp, #0x40]
7101d4ddb4  stp x22,x21,[x8, #0x88]
7101d4ddb8  ldr x24,[sp, #0x30]
7101d4ddbc  str x23,[x8, #0x98]
7101d4ddc0  mov x23,x8
7101d4ddc4  cbz x26,0x7101d4ddd4
7101d4ddc8  mov x0,x26
7101d4ddcc  bl 0x710392eb40
7101d4ddd0  ldr x21,[x20]
7101d4ddd4  ldr x8,[x23, #0x98]
7101d4ddd8  cmp x21,x8
7101d4dddc  b.cs 0x7101d4ddf8
7101d4dde0  orr w8,wzr,#0x3
7101d4dde4  str w8,[x21]
7101d4dde8  ldr x8,[x20]
7101d4ddec  add x21,x8,#0x4
7101d4ddf0  str x21,[x20]
7101d4ddf4  b 0x7101d4defc
7101d4ddf8  ldr x26,[x25]
7101d4ddfc  sub x27,x21,x26
7101d4de00  asr x23,x27,#0x2
7101d4de04  add x9,x23,#0x1
7101d4de08  lsr x10,x9,#0x3e
7101d4de0c  cbnz x10,0x7101d4f2bc
7101d4de10  sub x8,x8,x26
7101d4de14  asr x10,x8,#0x2
7101d4de18  orr x11,xzr,#0x1ffffffffffffffe
7101d4de1c  cmp x10,x11
7101d4de20  b.hi 0x7101d4de40
7101d4de24  asr x8,x8,#0x1
7101d4de28  cmp x8,x9
7101d4de2c  csel x24,x9,x8,cc
7101d4de30  cbz x24,0x7101d4f28c
7101d4de34  lsr x8,x24,#0x3e
7101d4de38  cbz x8,0x7101d4de44
7101d4de3c  b 0x7101d4df64
7101d4de40  orr x24,xzr,#0x3fffffffffffffff
7101d4de44  lsl x8,x24,#0x2
7101d4de48  cmp x8,#0x0
7101d4de4c  csinc x28,x8,xzr,ne
7101d4de50  mov w0,#0x10
7101d4de54  mov x1,x28
7101d4de58  bl 0x710392e290
7101d4de5c  mov x22,x0
7101d4de60  cbnz x0,0x7101d4dea8
7101d4de64  adrp x8,0x7105332000
7101d4de68  ldr x0,[x8, #0xf00]
7101d4de6c  cbz x0,0x7101d4dea4
7101d4de70  str wzr,[sp, #0x550]
7101d4de74  str x28,[sp, #0x680]
7101d4de78  ldr x8,[x0]
7101d4de7c  ldr x8,[x8, #0x30]
7101d4de80  add x1,sp,#0x550
7101d4de84  add x2,sp,#0x680
7101d4de88  blr x8
7101d4de8c  tbz w0,#0x0,0x7101d4dea4
7101d4de90  mov w0,#0x10
7101d4de94  mov x1,x28
7101d4de98  bl 0x710392e290
7101d4de9c  mov x22,x0
7101d4dea0  cbnz x0,0x7101d4dea8
7101d4dea4  mov x22,xzr
7101d4dea8  adrp x28,0x710523d000
7101d4deac  add x28,x28,#0x988
7101d4deb0  add x21,x22,x23, LSL #0x2
7101d4deb4  orr w8,wzr,#0x3
7101d4deb8  add x23,x22,x24, LSL #0x2
7101d4debc  str w8,[x21], #0x4
7101d4dec0  cmp x27,#0x1
7101d4dec4  b.lt 0x7101d4ded8
7101d4dec8  mov x0,x22
7101d4decc  mov x1,x26
7101d4ded0  mov x2,x27
7101d4ded4  bl 0x71039c00e0
7101d4ded8  ldr x8,[sp, #0x40]
7101d4dedc  stp x22,x21,[x8, #0x88]
7101d4dee0  ldr x24,[sp, #0x30]
7101d4dee4  str x23,[x8, #0x98]
7101d4dee8  mov x23,x8
7101d4deec  cbz x26,0x7101d4defc
7101d4def0  mov x0,x26
7101d4def4  bl 0x710392eb40
7101d4def8  ldr x21,[x20]
7101d4defc  ldr x8,[x23, #0x98]
7101d4df00  cmp x21,x8
7101d4df04  b.cs 0x7101d4df20
7101d4df08  mov w8,#0x5
7101d4df0c  str w8,[x21]
7101d4df10  ldr x8,[x20]
7101d4df14  add x8,x8,#0x4
7101d4df18  str x8,[x20]
7101d4df1c  b 0x7101d4e020
7101d4df20  ldr x26,[x25]
7101d4df24  sub x27,x21,x26
7101d4df28  asr x23,x27,#0x2
7101d4df2c  add x9,x23,#0x1
7101d4df30  lsr x10,x9,#0x3e
7101d4df34  cbnz x10,0x7101d4f2bc
7101d4df38  sub x8,x8,x26
7101d4df3c  asr x10,x8,#0x2
7101d4df40  orr x11,xzr,#0x1ffffffffffffffe
7101d4df44  cmp x10,x11
7101d4df48  b.hi 0x7101d4df68
7101d4df4c  asr x8,x8,#0x1
7101d4df50  cmp x8,x9
7101d4df54  csel x24,x9,x8,cc
7101d4df58  cbz x24,0x7101d4f294
7101d4df5c  lsr x8,x24,#0x3e
7101d4df60  cbz x8,0x7101d4df6c
7101d4df64  bl 0x71039c2650
7101d4df68  orr x24,xzr,#0x3fffffffffffffff
7101d4df6c  lsl x8,x24,#0x2
7101d4df70  cmp x8,#0x0
7101d4df74  csinc x28,x8,xzr,ne
7101d4df78  mov w0,#0x10
7101d4df7c  mov x1,x28
7101d4df80  bl 0x710392e290
7101d4df84  mov x22,x0
7101d4df88  cbnz x0,0x7101d4dfd0
7101d4df8c  adrp x8,0x7105332000
7101d4df90  ldr x0,[x8, #0xf00]
7101d4df94  cbz x0,0x7101d4dfcc
7101d4df98  str wzr,[sp, #0x550]
7101d4df9c  str x28,[sp, #0x680]
7101d4dfa0  ldr x8,[x0]
7101d4dfa4  ldr x8,[x8, #0x30]
7101d4dfa8  add x1,sp,#0x550
7101d4dfac  add x2,sp,#0x680
7101d4dfb0  blr x8
7101d4dfb4  tbz w0,#0x0,0x7101d4dfcc
7101d4dfb8  mov w0,#0x10
7101d4dfbc  mov x1,x28
7101d4dfc0  bl 0x710392e290
7101d4dfc4  mov x22,x0
7101d4dfc8  cbnz x0,0x7101d4dfd0
7101d4dfcc  mov x22,xzr
7101d4dfd0  adrp x28,0x710523d000
7101d4dfd4  add x28,x28,#0x988
7101d4dfd8  add x21,x22,x23, LSL #0x2
7101d4dfdc  mov w8,#0x5
7101d4dfe0  add x23,x22,x24, LSL #0x2
7101d4dfe4  str w8,[x21], #0x4
7101d4dfe8  cmp x27,#0x1
7101d4dfec  b.lt 0x7101d4e000
7101d4dff0  mov x0,x22
7101d4dff4  mov x1,x26
7101d4dff8  mov x2,x27
7101d4dffc  bl 0x71039c00e0
7101d4e000  ldr x8,[sp, #0x40]
7101d4e004  stp x22,x21,[x8, #0x88]
7101d4e008  ldr x24,[sp, #0x30]
7101d4e00c  str x23,[x8, #0x98]
7101d4e010  mov x23,x8
7101d4e014  cbz x26,0x7101d4e020
7101d4e018  mov x0,x26
7101d4e01c  bl 0x710392eb40
7101d4e020  add x8,sp,#0x550
7101d4e024  add x26,x8,#0x20
7101d4e028  mov x0,x26
7101d4e02c  str xzr,[sp, #0x560]
7101d4e030  str xzr,[sp, #0x568]
7101d4e034  bl 0x7103776290
7101d4e038  str wzr,[sp, #0x558]
7101d4e03c  adrp x22,0x71052a8000
7101d4e040  ldr x22,[x22, #0xa80]
7101d4e044  ldr q0,[x22]
7101d4e048  ldr x8,[sp, #0x578]
7101d4e04c  str q0,[sp, #0x560]
7101d4e050  str xzr,[x8, #0x8]
7101d4e054  mov w8,#0x4
7101d4e058  str x8,[sp, #0x550]
7101d4e05c  str xzr,[sp, #0x420]
7101d4e060  str xzr,[sp, #0x418]
7101d4e064  str xzr,[sp, #0x410]
7101d4e068  ldr x9,[x19]
7101d4e06c  ldr x8,[x24]
7101d4e070  cmp x9,x8
7101d4e074  b.eq 0x7101d4f2a4
7101d4e078  ldr w1,[x8]
7101d4e07c  add x0,sp,#0x680
7101d4e080  mov w27,#0x9dc5
7101d4e084  movk w27,#0x811c, LSL #16
7101d4e088  add x21,sp,#0x680
7101d4e08c  bl 0x7101d49460
7101d4e090  ldr x8,[sp, #0x418]
7101d4e094  ldr x9,[sp, #0x420]
7101d4e098  cmp x8,x9
7101d4e09c  b.cs 0x7101d4e0e8
7101d4e0a0  mov x9,xzr
7101d4e0a4  add x10,x21,#0x8
7101d4e0a8  str wzr,[x8]
7101d4e0ac  b 0x7101d4e0b8
7101d4e0b0  add x9,x9,#0x2
7101d4e0b4  strb w11,[x12, #0x9]
7101d4e0b8  add x11,x10,x9
7101d4e0bc  ldrb w13,[x11]
7101d4e0c0  cbz w13,0x7101d4e0fc
7101d4e0c4  add w14,w9,#0x1
7101d4e0c8  add x12,x8,x9
7101d4e0cc  cmp w14,#0x3f
7101d4e0d0  strb w13,[x12, #0x8]
7101d4e0d4  b.cs 0x7101d4e0f8
7101d4e0d8  ldrb w11,[x11, #0x1]
7101d4e0dc  cbnz w11,0x7101d4e0b0
7101d4e0e0  add x9,x9,#0x1
7101d4e0e4  b 0x7101d4e0fc
7101d4e0e8  add x0,sp,#0x410
7101d4e0ec  add x1,sp,#0x680
7101d4e0f0  bl 0x71019c1c50
7101d4e0f4  b 0x7101d4e144
7101d4e0f8  add w9,w9,#0x1
7101d4e0fc  add x10,x8,#0x8
7101d4e100  strb wzr,[x10, w9, UXTW ]
7101d4e104  str w9,[x8, #0x4]
7101d4e108  ldrb w9,[x8, #0x8]
7101d4e10c  mov w11,w27
7101d4e110  cbz w9,0x7101d4e134
7101d4e114  add x10,x8,#0x9
7101d4e118  mov w12,#0x89
7101d4e11c  mov w11,w27
7101d4e120  mul w11,w11,w12
7101d4e124  and w9,w9,#0xff
7101d4e128  eor w11,w11,w9
7101d4e12c  ldrb w9,[x10], #0x1
7101d4e130  cbnz w9,0x7101d4e120
7101d4e134  str w11,[x8]
7101d4e138  ldr x8,[sp, #0x418]
7101d4e13c  add x8,x8,#0x48
7101d4e140  str x8,[sp, #0x418]
7101d4e144  ldr x9,[x19]
7101d4e148  ldr x8,[x24]
7101d4e14c  sub x9,x9,x8
7101d4e150  asr x9,x9,#0x2
7101d4e154  cmp x9,#0x1
7101d4e158  b.ls 0x7101d4f2a4
7101d4e15c  ldr w1,[x8, #0x4]
7101d4e160  add x0,sp,#0x680
7101d4e164  add x21,sp,#0x680
7101d4e168  bl 0x7101d49460
7101d4e16c  ldr x8,[sp, #0x418]
7101d4e170  ldr x9,[sp, #0x420]
7101d4e174  cmp x8,x9
7101d4e178  b.cs 0x7101d4e1c4
7101d4e17c  mov x9,xzr
7101d4e180  add x10,x21,#0x8
7101d4e184  str wzr,[x8]
7101d4e188  b 0x7101d4e194
7101d4e18c  add x9,x9,#0x2
7101d4e190  strb w11,[x12, #0x9]
7101d4e194  add x11,x10,x9
7101d4e198  ldrb w13,[x11]
7101d4e19c  cbz w13,0x7101d4e1d8
7101d4e1a0  add w14,w9,#0x1
7101d4e1a4  add x12,x8,x9
7101d4e1a8  cmp w14,#0x3f
7101d4e1ac  strb w13,[x12, #0x8]
7101d4e1b0  b.cs 0x7101d4e1d4
7101d4e1b4  ldrb w11,[x11, #0x1]
7101d4e1b8  cbnz w11,0x7101d4e18c
7101d4e1bc  add x9,x9,#0x1
7101d4e1c0  b 0x7101d4e1d8
7101d4e1c4  add x0,sp,#0x410
7101d4e1c8  add x1,sp,#0x680
7101d4e1cc  bl 0x71019c1c50
7101d4e1d0  b 0x7101d4e220
7101d4e1d4  add w9,w9,#0x1
7101d4e1d8  add x10,x8,#0x8
7101d4e1dc  strb wzr,[x10, w9, UXTW ]
7101d4e1e0  str w9,[x8, #0x4]
7101d4e1e4  ldrb w9,[x8, #0x8]
7101d4e1e8  mov w11,w27
7101d4e1ec  cbz w9,0x7101d4e210
7101d4e1f0  add x10,x8,#0x9
7101d4e1f4  mov w12,#0x89
7101d4e1f8  mov w11,w27
7101d4e1fc  mul w11,w11,w12
7101d4e200  and w9,w9,#0xff
7101d4e204  eor w11,w11,w9
7101d4e208  ldrb w9,[x10], #0x1
7101d4e20c  cbnz w9,0x7101d4e1fc
7101d4e210  str w11,[x8]
7101d4e214  ldr x8,[sp, #0x418]
7101d4e218  add x8,x8,#0x48
7101d4e21c  str x8,[sp, #0x418]
7101d4e220  ldr x9,[x19]
7101d4e224  ldr x8,[x24]
7101d4e228  sub x9,x9,x8
7101d4e22c  asr x9,x9,#0x2
7101d4e230  cmp x9,#0x2
7101d4e234  b.ls 0x7101d4f2a4
7101d4e238  ldr w1,[x8, #0x8]
7101d4e23c  add x0,sp,#0x680
7101d4e240  add x21,sp,#0x680
7101d4e244  bl 0x7101d49460
7101d4e248  ldr x8,[sp, #0x418]
7101d4e24c  ldr x9,[sp, #0x420]
7101d4e250  cmp x8,x9
7101d4e254  b.cs 0x7101d4e2a0
7101d4e258  mov x9,xzr
7101d4e25c  add x10,x21,#0x8
7101d4e260  str wzr,[x8]
7101d4e264  b 0x7101d4e270
7101d4e268  add x9,x9,#0x2
7101d4e26c  strb w11,[x12, #0x9]
7101d4e270  add x11,x10,x9
7101d4e274  ldrb w13,[x11]
7101d4e278  cbz w13,0x7101d4e2b4
7101d4e27c  add w14,w9,#0x1
7101d4e280  add x12,x8,x9
7101d4e284  cmp w14,#0x3f
7101d4e288  strb w13,[x12, #0x8]
7101d4e28c  b.cs 0x7101d4e2b0
7101d4e290  ldrb w11,[x11, #0x1]
7101d4e294  cbnz w11,0x7101d4e268
7101d4e298  add x9,x9,#0x1
7101d4e29c  b 0x7101d4e2b4
7101d4e2a0  add x0,sp,#0x410
7101d4e2a4  add x1,sp,#0x680
7101d4e2a8  bl 0x71019c1c50
7101d4e2ac  b 0x7101d4e2fc
7101d4e2b0  add w9,w9,#0x1
7101d4e2b4  add x10,x8,#0x8
7101d4e2b8  strb wzr,[x10, w9, UXTW ]
7101d4e2bc  str w9,[x8, #0x4]
7101d4e2c0  ldrb w9,[x8, #0x8]
7101d4e2c4  mov w11,w27
7101d4e2c8  cbz w9,0x7101d4e2ec
7101d4e2cc  add x10,x8,#0x9
7101d4e2d0  mov w12,#0x89
7101d4e2d4  mov w11,w27
7101d4e2d8  mul w11,w11,w12
7101d4e2dc  and w9,w9,#0xff
7101d4e2e0  eor w11,w11,w9
7101d4e2e4  ldrb w9,[x10], #0x1
7101d4e2e8  cbnz w9,0x7101d4e2d8
7101d4e2ec  str w11,[x8]
7101d4e2f0  ldr x8,[sp, #0x418]
7101d4e2f4  add x8,x8,#0x48
7101d4e2f8  str x8,[sp, #0x418]
7101d4e2fc  ldr x9,[x19]
7101d4e300  ldr x8,[x24]
7101d4e304  sub x9,x9,x8
7101d4e308  asr x9,x9,#0x2
7101d4e30c  cmp x9,#0x3
7101d4e310  b.ls 0x7101d4f2a4
7101d4e314  ldr w1,[x8, #0xc]
7101d4e318  add x0,sp,#0x680
7101d4e31c  add x21,sp,#0x680
7101d4e320  bl 0x7101d49460
7101d4e324  ldr x8,[sp, #0x418]
7101d4e328  ldr x9,[sp, #0x420]
7101d4e32c  cmp x8,x9
7101d4e330  b.cs 0x7101d4e37c
7101d4e334  mov x9,xzr
7101d4e338  add x10,x21,#0x8
7101d4e33c  str wzr,[x8]
7101d4e340  b 0x7101d4e34c
7101d4e344  add x9,x9,#0x2
7101d4e348  strb w11,[x12, #0x9]
7101d4e34c  add x11,x10,x9
7101d4e350  ldrb w13,[x11]
7101d4e354  cbz w13,0x7101d4e390
7101d4e358  add w14,w9,#0x1
7101d4e35c  add x12,x8,x9
7101d4e360  cmp w14,#0x3f
7101d4e364  strb w13,[x12, #0x8]
7101d4e368  b.cs 0x7101d4e38c
7101d4e36c  ldrb w11,[x11, #0x1]
7101d4e370  cbnz w11,0x7101d4e344
7101d4e374  add x9,x9,#0x1
7101d4e378  b 0x7101d4e390
7101d4e37c  add x0,sp,#0x410
7101d4e380  add x1,sp,#0x680
7101d4e384  bl 0x71019c1c50
7101d4e388  b 0x7101d4e3d8
7101d4e38c  add w9,w9,#0x1
7101d4e390  add x10,x8,#0x8
7101d4e394  strb wzr,[x10, w9, UXTW ]
7101d4e398  str w9,[x8, #0x4]
7101d4e39c  ldrb w9,[x8, #0x8]
7101d4e3a0  mov w11,w27
7101d4e3a4  cbz w9,0x7101d4e3c8
7101d4e3a8  add x10,x8,#0x9
7101d4e3ac  mov w12,#0x89
7101d4e3b0  mov w11,w27
7101d4e3b4  mul w11,w11,w12
7101d4e3b8  and w9,w9,#0xff
7101d4e3bc  eor w11,w11,w9
7101d4e3c0  ldrb w9,[x10], #0x1
7101d4e3c4  cbnz w9,0x7101d4e3b4
7101d4e3c8  str w11,[x8]
7101d4e3cc  ldr x8,[sp, #0x418]
7101d4e3d0  add x8,x8,#0x48
7101d4e3d4  str x8,[sp, #0x418]
7101d4e3d8  ldr x9,[x19]
7101d4e3dc  ldr x8,[x24]
7101d4e3e0  sub x9,x9,x8
7101d4e3e4  asr x9,x9,#0x2
7101d4e3e8  cmp x9,#0x4
7101d4e3ec  b.ls 0x7101d4f2a4
7101d4e3f0  ldr w1,[x8, #0x10]
7101d4e3f4  add x0,sp,#0x680
7101d4e3f8  add x21,sp,#0x680
7101d4e3fc  bl 0x7101d49460
7101d4e400  ldr x8,[sp, #0x418]
7101d4e404  ldr x9,[sp, #0x420]
7101d4e408  cmp x8,x9
7101d4e40c  b.cs 0x7101d4e458
7101d4e410  mov x9,xzr
7101d4e414  add x10,x21,#0x8
7101d4e418  str wzr,[x8]
7101d4e41c  b 0x7101d4e428
7101d4e420  add x9,x9,#0x2
7101d4e424  strb w11,[x12, #0x9]
7101d4e428  add x11,x10,x9
7101d4e42c  ldrb w13,[x11]
7101d4e430  cbz w13,0x7101d4e46c
7101d4e434  add w14,w9,#0x1
7101d4e438  add x12,x8,x9
7101d4e43c  cmp w14,#0x3f
7101d4e440  strb w13,[x12, #0x8]
7101d4e444  b.cs 0x7101d4e468
7101d4e448  ldrb w11,[x11, #0x1]
7101d4e44c  cbnz w11,0x7101d4e420
7101d4e450  add x9,x9,#0x1
7101d4e454  b 0x7101d4e46c
7101d4e458  add x0,sp,#0x410
7101d4e45c  add x1,sp,#0x680
7101d4e460  bl 0x71019c1c50
7101d4e464  b 0x7101d4e4b4
7101d4e468  add w9,w9,#0x1
7101d4e46c  add x10,x8,#0x8
7101d4e470  strb wzr,[x10, w9, UXTW ]
7101d4e474  str w9,[x8, #0x4]
7101d4e478  ldrb w9,[x8, #0x8]
7101d4e47c  mov w11,w27
7101d4e480  cbz w9,0x7101d4e4a4
7101d4e484  add x10,x8,#0x9
7101d4e488  mov w12,#0x89
7101d4e48c  mov w11,w27
7101d4e490  mul w11,w11,w12
7101d4e494  and w9,w9,#0xff
7101d4e498  eor w11,w11,w9
7101d4e49c  ldrb w9,[x10], #0x1
7101d4e4a0  cbnz w9,0x7101d4e490
7101d4e4a4  str w11,[x8]
7101d4e4a8  ldr x8,[sp, #0x418]
7101d4e4ac  add x8,x8,#0x48
7101d4e4b0  str x8,[sp, #0x418]
7101d4e4b4  ldr x9,[x19]
7101d4e4b8  ldr x8,[x24]
7101d4e4bc  sub x9,x9,x8
7101d4e4c0  asr x9,x9,#0x2
7101d4e4c4  cmp x9,#0x5
7101d4e4c8  b.ls 0x7101d4f2a4
7101d4e4cc  ldr w1,[x8, #0x14]
7101d4e4d0  add x0,sp,#0x680
7101d4e4d4  add x19,sp,#0x680
7101d4e4d8  bl 0x7101d49460
7101d4e4dc  ldr x8,[sp, #0x418]
7101d4e4e0  ldr x9,[sp, #0x420]
7101d4e4e4  cmp x8,x9
7101d4e4e8  b.cs 0x7101d4e534
7101d4e4ec  mov x9,xzr
7101d4e4f0  add x10,x19,#0x8
7101d4e4f4  str wzr,[x8]
7101d4e4f8  b 0x7101d4e504
7101d4e4fc  add x9,x9,#0x2
7101d4e500  strb w11,[x12, #0x9]
7101d4e504  add x11,x10,x9
7101d4e508  ldrb w13,[x11]
7101d4e50c  cbz w13,0x7101d4e548
7101d4e510  add w14,w9,#0x1
7101d4e514  add x12,x8,x9
7101d4e518  cmp w14,#0x3f
7101d4e51c  strb w13,[x12, #0x8]
7101d4e520  b.cs 0x7101d4e544
7101d4e524  ldrb w11,[x11, #0x1]
7101d4e528  cbnz w11,0x7101d4e4fc
7101d4e52c  add x9,x9,#0x1
7101d4e530  b 0x7101d4e548
7101d4e534  add x0,sp,#0x410
7101d4e538  add x1,sp,#0x680
7101d4e53c  bl 0x71019c1c50
7101d4e540  b 0x7101d4e590
7101d4e544  add w9,w9,#0x1
7101d4e548  add x10,x8,#0x8
7101d4e54c  strb wzr,[x10, w9, UXTW ]
7101d4e550  str w9,[x8, #0x4]
7101d4e554  ldrb w9,[x8, #0x8]
7101d4e558  mov w11,w27
7101d4e55c  cbz w9,0x7101d4e580
7101d4e560  add x10,x8,#0x9
7101d4e564  mov w12,#0x89
7101d4e568  mov w11,w27
7101d4e56c  mul w11,w11,w12
7101d4e570  and w9,w9,#0xff
7101d4e574  eor w11,w11,w9
7101d4e578  ldrb w9,[x10], #0x1
7101d4e57c  cbnz w9,0x7101d4e56c
7101d4e580  str w11,[x8]
7101d4e584  ldr x8,[sp, #0x418]
7101d4e588  add x8,x8,#0x48
7101d4e58c  str x8,[sp, #0x418]
7101d4e590  str xzr,[sp, #0x2f0]
7101d4e594  str xzr,[sp, #0x2e8]
7101d4e598  str xzr,[sp, #0x2e0]
7101d4e59c  ldr x9,[x20]
7101d4e5a0  ldr x8,[x25]
7101d4e5a4  cmp x9,x8
7101d4e5a8  b.eq 0x7101d4f29c
7101d4e5ac  ldr w1,[x8]
7101d4e5b0  add x0,sp,#0x680
7101d4e5b4  add x19,sp,#0x680
7101d4e5b8  bl 0x7101d49460
7101d4e5bc  ldr x8,[sp, #0x2e8]
7101d4e5c0  ldr x9,[sp, #0x2f0]
7101d4e5c4  cmp x8,x9
7101d4e5c8  b.cs 0x7101d4e614
7101d4e5cc  mov x9,xzr
7101d4e5d0  add x10,x19,#0x8
7101d4e5d4  str wzr,[x8]
7101d4e5d8  b 0x7101d4e5e4
7101d4e5dc  add x9,x9,#0x2
7101d4e5e0  strb w11,[x12, #0x9]
7101d4e5e4  add x11,x10,x9
7101d4e5e8  ldrb w13,[x11]
7101d4e5ec  cbz w13,0x7101d4e628
7101d4e5f0  add w14,w9,#0x1
7101d4e5f4  add x12,x8,x9
7101d4e5f8  cmp w14,#0x3f
7101d4e5fc  strb w13,[x12, #0x8]
7101d4e600  b.cs 0x7101d4e624
7101d4e604  ldrb w11,[x11, #0x1]
7101d4e608  cbnz w11,0x7101d4e5dc
7101d4e60c  add x9,x9,#0x1
7101d4e610  b 0x7101d4e628
7101d4e614  add x0,sp,#0x2e0
7101d4e618  add x1,sp,#0x680
7101d4e61c  bl 0x71019c1c50
7101d4e620  b 0x7101d4e670
7101d4e624  add w9,w9,#0x1
7101d4e628  add x10,x8,#0x8
7101d4e62c  strb wzr,[x10, w9, UXTW ]
7101d4e630  str w9,[x8, #0x4]
7101d4e634  ldrb w9,[x8, #0x8]
7101d4e638  mov w11,w27
7101d4e63c  cbz w9,0x7101d4e660
7101d4e640  add x10,x8,#0x9
7101d4e644  mov w12,#0x89
7101d4e648  mov w11,w27
7101d4e64c  mul w11,w11,w12
7101d4e650  and w9,w9,#0xff
7101d4e654  eor w11,w11,w9
7101d4e658  ldrb w9,[x10], #0x1
7101d4e65c  cbnz w9,0x7101d4e64c
7101d4e660  str w11,[x8]
7101d4e664  ldr x8,[sp, #0x2e8]
7101d4e668  add x8,x8,#0x48
7101d4e66c  str x8,[sp, #0x2e8]
7101d4e670  ldr x9,[x20]
7101d4e674  ldr x8,[x25]
7101d4e678  sub x9,x9,x8
7101d4e67c  asr x9,x9,#0x2
7101d4e680  cmp x9,#0x1
7101d4e684  b.ls 0x7101d4f29c
7101d4e688  ldr w1,[x8, #0x4]
7101d4e68c  add x0,sp,#0x680
7101d4e690  add x19,sp,#0x680
7101d4e694  bl 0x7101d49460
7101d4e698  ldr x8,[sp, #0x2e8]
7101d4e69c  ldr x9,[sp, #0x2f0]
7101d4e6a0  cmp x8,x9
7101d4e6a4  b.cs 0x7101d4e6f0
7101d4e6a8  mov x9,xzr
7101d4e6ac  add x10,x19,#0x8
7101d4e6b0  str wzr,[x8]
7101d4e6b4  b 0x7101d4e6c0
7101d4e6b8  add x9,x9,#0x2
7101d4e6bc  strb w11,[x12, #0x9]
7101d4e6c0  add x11,x10,x9
7101d4e6c4  ldrb w13,[x11]
7101d4e6c8  cbz w13,0x7101d4e704
7101d4e6cc  add w14,w9,#0x1
7101d4e6d0  add x12,x8,x9
7101d4e6d4  cmp w14,#0x3f
7101d4e6d8  strb w13,[x12, #0x8]
7101d4e6dc  b.cs 0x7101d4e700
7101d4e6e0  ldrb w11,[x11, #0x1]
7101d4e6e4  cbnz w11,0x7101d4e6b8
7101d4e6e8  add x9,x9,#0x1
7101d4e6ec  b 0x7101d4e704
7101d4e6f0  add x0,sp,#0x2e0
7101d4e6f4  add x1,sp,#0x680
7101d4e6f8  bl 0x71019c1c50
7101d4e6fc  b 0x7101d4e74c
7101d4e700  add w9,w9,#0x1
7101d4e704  add x10,x8,#0x8
7101d4e708  strb wzr,[x10, w9, UXTW ]
7101d4e70c  str w9,[x8, #0x4]
7101d4e710  ldrb w9,[x8, #0x8]
7101d4e714  mov w11,w27
7101d4e718  cbz w9,0x7101d4e73c
7101d4e71c  add x10,x8,#0x9
7101d4e720  mov w12,#0x89
7101d4e724  mov w11,w27
7101d4e728  mul w11,w11,w12
7101d4e72c  and w9,w9,#0xff
7101d4e730  eor w11,w11,w9
7101d4e734  ldrb w9,[x10], #0x1
7101d4e738  cbnz w9,0x7101d4e728
7101d4e73c  str w11,[x8]
7101d4e740  ldr x8,[sp, #0x2e8]
7101d4e744  add x8,x8,#0x48
7101d4e748  str x8,[sp, #0x2e8]
7101d4e74c  ldr x9,[x20]
7101d4e750  ldr x8,[x25]
7101d4e754  sub x9,x9,x8
7101d4e758  asr x9,x9,#0x2
7101d4e75c  cmp x9,#0x2
7101d4e760  b.ls 0x7101d4f29c
7101d4e764  ldr w1,[x8, #0x8]
7101d4e768  add x0,sp,#0x680
7101d4e76c  add x19,sp,#0x680
7101d4e770  bl 0x7101d49460
7101d4e774  ldr x8,[sp, #0x2e8]
7101d4e778  ldr x9,[sp, #0x2f0]
7101d4e77c  cmp x8,x9
7101d4e780  b.cs 0x7101d4e7cc
7101d4e784  mov x9,xzr
7101d4e788  add x10,x19,#0x8
7101d4e78c  str wzr,[x8]
7101d4e790  b 0x7101d4e79c
7101d4e794  add x9,x9,#0x2
7101d4e798  strb w11,[x12, #0x9]
7101d4e79c  add x11,x10,x9
7101d4e7a0  ldrb w13,[x11]
7101d4e7a4  cbz w13,0x7101d4e7e0
7101d4e7a8  add w14,w9,#0x1
7101d4e7ac  add x12,x8,x9
7101d4e7b0  cmp w14,#0x3f
7101d4e7b4  strb w13,[x12, #0x8]
7101d4e7b8  b.cs 0x7101d4e7dc
7101d4e7bc  ldrb w11,[x11, #0x1]
7101d4e7c0  cbnz w11,0x7101d4e794
7101d4e7c4  add x9,x9,#0x1
7101d4e7c8  b 0x7101d4e7e0
7101d4e7cc  add x0,sp,#0x2e0
7101d4e7d0  add x1,sp,#0x680
7101d4e7d4  bl 0x71019c1c50
7101d4e7d8  b 0x7101d4e828
7101d4e7dc  add w9,w9,#0x1
7101d4e7e0  add x10,x8,#0x8
7101d4e7e4  strb wzr,[x10, w9, UXTW ]
7101d4e7e8  str w9,[x8, #0x4]
7101d4e7ec  ldrb w9,[x8, #0x8]
7101d4e7f0  mov w11,w27
7101d4e7f4  cbz w9,0x7101d4e818
7101d4e7f8  add x10,x8,#0x9
7101d4e7fc  mov w12,#0x89
7101d4e800  mov w11,w27
7101d4e804  mul w11,w11,w12
7101d4e808  and w9,w9,#0xff
7101d4e80c  eor w11,w11,w9
7101d4e810  ldrb w9,[x10], #0x1
7101d4e814  cbnz w9,0x7101d4e804
7101d4e818  str w11,[x8]
7101d4e81c  ldr x8,[sp, #0x2e8]
7101d4e820  add x8,x8,#0x48
7101d4e824  str x8,[sp, #0x2e8]
7101d4e828  ldr x9,[x20]
7101d4e82c  ldr x8,[x25]
7101d4e830  sub x9,x9,x8
7101d4e834  asr x9,x9,#0x2
7101d4e838  cmp x9,#0x3
7101d4e83c  b.ls 0x7101d4f29c
7101d4e840  ldr w1,[x8, #0xc]
7101d4e844  add x0,sp,#0x680
7101d4e848  add x19,sp,#0x680
7101d4e84c  bl 0x7101d49460
7101d4e850  ldr x8,[sp, #0x2e8]
7101d4e854  ldr x9,[sp, #0x2f0]
7101d4e858  cmp x8,x9
7101d4e85c  b.cs 0x7101d4e8a8
7101d4e860  mov x9,xzr
7101d4e864  add x10,x19,#0x8
7101d4e868  str wzr,[x8]
7101d4e86c  b 0x7101d4e878
7101d4e870  add x9,x9,#0x2
7101d4e874  strb w11,[x12, #0x9]
7101d4e878  add x11,x10,x9
7101d4e87c  ldrb w13,[x11]
7101d4e880  cbz w13,0x7101d4e8bc
7101d4e884  add w14,w9,#0x1
7101d4e888  add x12,x8,x9
7101d4e88c  cmp w14,#0x3f
7101d4e890  strb w13,[x12, #0x8]
7101d4e894  b.cs 0x7101d4e8b8
7101d4e898  ldrb w11,[x11, #0x1]
7101d4e89c  cbnz w11,0x7101d4e870
7101d4e8a0  add x9,x9,#0x1
7101d4e8a4  b 0x7101d4e8bc
7101d4e8a8  add x0,sp,#0x2e0
7101d4e8ac  add x1,sp,#0x680
7101d4e8b0  bl 0x71019c1c50
7101d4e8b4  b 0x7101d4e904
7101d4e8b8  add w9,w9,#0x1
7101d4e8bc  add x10,x8,#0x8
7101d4e8c0  strb wzr,[x10, w9, UXTW ]
7101d4e8c4  str w9,[x8, #0x4]
7101d4e8c8  ldrb w9,[x8, #0x8]
7101d4e8cc  mov w11,w27
7101d4e8d0  cbz w9,0x7101d4e8f4
7101d4e8d4  add x10,x8,#0x9
7101d4e8d8  mov w12,#0x89
7101d4e8dc  mov w11,w27
7101d4e8e0  mul w11,w11,w12
7101d4e8e4  and w9,w9,#0xff
7101d4e8e8  eor w11,w11,w9
7101d4e8ec  ldrb w9,[x10], #0x1
7101d4e8f0  cbnz w9,0x7101d4e8e0
7101d4e8f4  str w11,[x8]
7101d4e8f8  ldr x8,[sp, #0x2e8]
7101d4e8fc  add x8,x8,#0x48
7101d4e900  str x8,[sp, #0x2e8]
7101d4e904  ldr x9,[x20]
7101d4e908  ldr x8,[x25]
7101d4e90c  sub x9,x9,x8
7101d4e910  asr x9,x9,#0x2
7101d4e914  cmp x9,#0x4
7101d4e918  b.ls 0x7101d4f29c
7101d4e91c  ldr w1,[x8, #0x10]
7101d4e920  add x0,sp,#0x680
7101d4e924  add x19,sp,#0x680
7101d4e928  bl 0x7101d49460
7101d4e92c  ldr x8,[sp, #0x2e8]
7101d4e930  ldr x9,[sp, #0x2f0]
7101d4e934  cmp x8,x9
7101d4e938  b.cs 0x7101d4e984
7101d4e93c  mov x9,xzr
7101d4e940  add x10,x19,#0x8
7101d4e944  str wzr,[x8]
7101d4e948  b 0x7101d4e954
7101d4e94c  add x9,x9,#0x2
7101d4e950  strb w11,[x12, #0x9]
7101d4e954  add x11,x10,x9
7101d4e958  ldrb w13,[x11]
7101d4e95c  cbz w13,0x7101d4e998
7101d4e960  add w14,w9,#0x1
7101d4e964  add x12,x8,x9
7101d4e968  cmp w14,#0x3f
7101d4e96c  strb w13,[x12, #0x8]
7101d4e970  b.cs 0x7101d4e994
7101d4e974  ldrb w11,[x11, #0x1]
7101d4e978  cbnz w11,0x7101d4e94c
7101d4e97c  add x9,x9,#0x1
7101d4e980  b 0x7101d4e998
7101d4e984  add x0,sp,#0x2e0
7101d4e988  add x1,sp,#0x680
7101d4e98c  bl 0x71019c1c50
7101d4e990  b 0x7101d4e9e0
7101d4e994  add w9,w9,#0x1
7101d4e998  add x10,x8,#0x8
7101d4e99c  strb wzr,[x10, w9, UXTW ]
7101d4e9a0  str w9,[x8, #0x4]
7101d4e9a4  ldrb w9,[x8, #0x8]
7101d4e9a8  mov w11,w27
7101d4e9ac  cbz w9,0x7101d4e9d0
7101d4e9b0  add x10,x8,#0x9
7101d4e9b4  mov w12,#0x89
7101d4e9b8  mov w11,w27
7101d4e9bc  mul w11,w11,w12
7101d4e9c0  and w9,w9,#0xff
7101d4e9c4  eor w11,w11,w9
7101d4e9c8  ldrb w9,[x10], #0x1
7101d4e9cc  cbnz w9,0x7101d4e9bc
7101d4e9d0  str w11,[x8]
7101d4e9d4  ldr x8,[sp, #0x2e8]
7101d4e9d8  add x8,x8,#0x48
7101d4e9dc  str x8,[sp, #0x2e8]
7101d4e9e0  ldr x9,[x20]
7101d4e9e4  ldr x8,[x25]
7101d4e9e8  sub x9,x9,x8
7101d4e9ec  asr x9,x9,#0x2
7101d4e9f0  cmp x9,#0x5
7101d4e9f4  b.ls 0x7101d4f29c
7101d4e9f8  ldr w1,[x8, #0x14]
7101d4e9fc  add x0,sp,#0x680
7101d4ea00  add x19,sp,#0x680
7101d4ea04  bl 0x7101d49460
7101d4ea08  ldr x8,[sp, #0x2e8]
7101d4ea0c  ldr x9,[sp, #0x2f0]
7101d4ea10  cmp x8,x9
7101d4ea14  b.cs 0x7101d4ea60
7101d4ea18  mov x9,xzr
7101d4ea1c  add x10,x19,#0x8
7101d4ea20  str wzr,[x8]
7101d4ea24  b 0x7101d4ea30
7101d4ea28  add x9,x9,#0x2
7101d4ea2c  strb w11,[x12, #0x9]
7101d4ea30  add x11,x10,x9
7101d4ea34  ldrb w13,[x11]
7101d4ea38  cbz w13,0x7101d4ea74
7101d4ea3c  add w14,w9,#0x1
7101d4ea40  add x12,x8,x9
7101d4ea44  cmp w14,#0x3f
7101d4ea48  strb w13,[x12, #0x8]
7101d4ea4c  b.cs 0x7101d4ea70
7101d4ea50  ldrb w11,[x11, #0x1]
7101d4ea54  cbnz w11,0x7101d4ea28
7101d4ea58  add x9,x9,#0x1
7101d4ea5c  b 0x7101d4ea74
7101d4ea60  add x0,sp,#0x2e0
7101d4ea64  add x1,sp,#0x680
7101d4ea68  bl 0x71019c1c50
7101d4ea6c  b 0x7101d4eabc
7101d4ea70  add w9,w9,#0x1
7101d4ea74  add x10,x8,#0x8
7101d4ea78  strb wzr,[x10, w9, UXTW ]
7101d4ea7c  str w9,[x8, #0x4]
7101d4ea80  ldrb w9,[x8, #0x8]
7101d4ea84  mov w11,w27
7101d4ea88  cbz w9,0x7101d4eaac
7101d4ea8c  add x10,x8,#0x9
7101d4ea90  mov w12,#0x89
7101d4ea94  mov w11,w27
7101d4ea98  mul w11,w11,w12
7101d4ea9c  and w9,w9,#0xff
7101d4eaa0  eor w11,w11,w9
7101d4eaa4  ldrb w9,[x10], #0x1
7101d4eaa8  cbnz w9,0x7101d4ea98
7101d4eaac  str w11,[x8]
7101d4eab0  ldr x8,[sp, #0x2e8]
7101d4eab4  add x8,x8,#0x48
7101d4eab8  str x8,[sp, #0x2e8]
7101d4eabc  ldr x9,[x20]
7101d4eac0  ldr x8,[x25]
7101d4eac4  sub x9,x9,x8
7101d4eac8  asr x9,x9,#0x2
7101d4eacc  cmp x9,#0x6
7101d4ead0  b.ls 0x7101d4f29c
7101d4ead4  ldr w1,[x8, #0x18]
7101d4ead8  add x0,sp,#0x680
7101d4eadc  add x19,sp,#0x680
7101d4eae0  bl 0x7101d49460
7101d4eae4  ldr x8,[sp, #0x2e8]
7101d4eae8  ldr x9,[sp, #0x2f0]
7101d4eaec  cmp x8,x9
7101d4eaf0  b.cs 0x7101d4eb3c
7101d4eaf4  mov x9,xzr
7101d4eaf8  add x10,x19,#0x8
7101d4eafc  str wzr,[x8]
7101d4eb00  b 0x7101d4eb0c
7101d4eb04  add x9,x9,#0x2
7101d4eb08  strb w11,[x12, #0x9]
7101d4eb0c  add x11,x10,x9
7101d4eb10  ldrb w13,[x11]
7101d4eb14  cbz w13,0x7101d4eb50
7101d4eb18  add w14,w9,#0x1
7101d4eb1c  add x12,x8,x9
7101d4eb20  cmp w14,#0x3f
7101d4eb24  strb w13,[x12, #0x8]
7101d4eb28  b.cs 0x7101d4eb4c
7101d4eb2c  ldrb w11,[x11, #0x1]
7101d4eb30  cbnz w11,0x7101d4eb04
7101d4eb34  add x9,x9,#0x1
7101d4eb38  b 0x7101d4eb50
7101d4eb3c  add x0,sp,#0x2e0
7101d4eb40  add x1,sp,#0x680
7101d4eb44  bl 0x71019c1c50
7101d4eb48  b 0x7101d4eb98
7101d4eb4c  add w9,w9,#0x1
7101d4eb50  add x10,x8,#0x8
7101d4eb54  strb wzr,[x10, w9, UXTW ]
7101d4eb58  str w9,[x8, #0x4]
7101d4eb5c  ldrb w9,[x8, #0x8]
7101d4eb60  mov w11,w27
7101d4eb64  cbz w9,0x7101d4eb88
7101d4eb68  add x10,x8,#0x9
7101d4eb6c  mov w12,#0x89
7101d4eb70  mov w11,w27
7101d4eb74  mul w11,w11,w12
7101d4eb78  and w9,w9,#0xff
7101d4eb7c  eor w11,w11,w9
7101d4eb80  ldrb w9,[x10], #0x1
7101d4eb84  cbnz w9,0x7101d4eb74
7101d4eb88  str w11,[x8]
7101d4eb8c  ldr x8,[sp, #0x2e8]
7101d4eb90  add x8,x8,#0x48
7101d4eb94  str x8,[sp, #0x2e8]
7101d4eb98  ldr x8,[x23, #0xa8]
7101d4eb9c  ldr x8,[x8]
7101d4eba0  add x0,x8,#0x8
7101d4eba4  adrp x1,0x7104281000
7101d4eba8  add x1,x1,#0x205
7101d4ebac  add x8,sp,#0x680
7101d4ebb0  add x19,sp,#0x680
7101d4ebb4  bl 0x7103776640
7101d4ebb8  add x25,x23,#0x2a8
7101d4ebbc  cmp x25,x19
7101d4ebc0  b.eq 0x7101d4ebf8
7101d4ebc4  ldr x8,[sp, #0x688]
7101d4ebc8  str xzr,[sp, #0x688]
7101d4ebcc  ldr x19,[x23, #0x2b0]
7101d4ebd0  str x8,[x23, #0x2b0]
7101d4ebd4  cbz x19,0x7101d4ebf8
7101d4ebd8  ldr x0,[x19, #0x18]
7101d4ebdc  adrp x8,0x710523d000
7101d4ebe0  add x8,x8,#0x9a8
7101d4ebe4  stp x8,xzr,[x19, #0x10]
7101d4ebe8  cbz x0,0x7101d4ebf0
7101d4ebec  bl 0x710392eb40
7101d4ebf0  mov x0,x19
7101d4ebf4  bl 0x710392eb40
7101d4ebf8  ldr x19,[sp, #0x688]
7101d4ebfc  str x28,[sp, #0x680]
7101d4ec00  str xzr,[sp, #0x688]
7101d4ec04  cbz x19,0x7101d4ec28
7101d4ec08  ldr x0,[x19, #0x18]
7101d4ec0c  adrp x8,0x710523d000
7101d4ec10  add x8,x8,#0x9a8
7101d4ec14  stp x8,xzr,[x19, #0x10]
7101d4ec18  cbz x0,0x7101d4ec20
7101d4ec1c  bl 0x710392eb40
7101d4ec20  mov x0,x19
7101d4ec24  bl 0x710392eb40
7101d4ec28  ldr x8,[sp, #0x28]
7101d4ec2c  ldr x8,[x8]
7101d4ec30  ldr x8,[x8]
7101d4ec34  add x0,x8,#0x8
7101d4ec38  adrp x1,0x710436c000
7101d4ec3c  add x1,x1,#0x6bc
7101d4ec40  add x8,sp,#0x680
7101d4ec44  bl 0x7103776910
7101d4ec48  ldr x0,[sp, #0x688]
7101d4ec4c  ldr x8,[x0]
7101d4ec50  cbz x8,0x7101d4ec6c
7101d4ec54  movi v0.2D,#0x0
7101d4ec58  add x9,x8,#0x30
7101d4ec5c  add x8,x8,#0x34
7101d4ec60  ld1 {v0.S}[0],[x9]
7101d4ec64  ld1 {v0.S}[1],[x8]
7101d4ec68  b 0x7101d4ec70
7101d4ec6c  ldr q0,[x22]
7101d4ec70  adrp x20,0x710523d000
7101d4ec74  add x20,x20,#0x9a8
7101d4ec78  str x20,[sp, #0x680]
7101d4ec7c  str q0,[sp, #0x40]
7101d4ec80  str xzr,[sp, #0x688]
7101d4ec84  cbz x0,0x7101d4ec8c
7101d4ec88  bl 0x710392eb40
7101d4ec8c  ldr x8,[sp, #0x28]
7101d4ec90  ldr x8,[x8]
7101d4ec94  ldr x8,[x8]
7101d4ec98  add x0,x8,#0x8
7101d4ec9c  adrp x1,0x7104422000
7101d4eca0  add x1,x1,#0x85c
7101d4eca4  add x8,sp,#0x680
7101d4eca8  bl 0x7103776910
7101d4ecac  ldr x0,[sp, #0x688]
7101d4ecb0  ldr x8,[x0]
7101d4ecb4  cbz x8,0x7101d4ecd0
7101d4ecb8  movi v2.2D,#0x0
7101d4ecbc  add x9,x8,#0x30
7101d4ecc0  add x8,x8,#0x34
7101d4ecc4  ld1 {v2.S}[0],[x9]
7101d4ecc8  ld1 {v2.S}[1],[x8]
7101d4eccc  b 0x7101d4ecd4
7101d4ecd0  ldr q2,[x22]
7101d4ecd4  str x20,[sp, #0x680]
7101d4ecd8  str xzr,[sp, #0x688]
7101d4ecdc  cbz x0,0x7101d4ecec
7101d4ece0  str q2,[sp, #0x30]
7101d4ece4  bl 0x710392eb40
7101d4ece8  ldr q2,[sp, #0x30]
7101d4ecec  ldr x8,[x23, #0x2b0]
7101d4ecf0  ldr x9,[x8, #0x18]
7101d4ecf4  ldr x9,[x9]
7101d4ecf8  cbz x9,0x7101d4ed14
7101d4ecfc  movi v0.2D,#0x0
7101d4ed00  add x10,x9,#0x30
7101d4ed04  add x9,x9,#0x34
7101d4ed08  ld1 {v0.S}[0],[x10]
7101d4ed0c  ld1 {v0.S}[1],[x9]
7101d4ed10  b 0x7101d4ed18
7101d4ed14  ldr q0,[x22]
7101d4ed18  ldr q1,[sp, #0x40]
7101d4ed1c  mov v1.S[0x1],v0.S[0x1]
7101d4ed20  mov v0.16B,v1.16B
7101d4ed24  cmp x26,x25
7101d4ed28  b.eq 0x7101d4ed98
7101d4ed2c  ldr x8,[x8]
7101d4ed30  ldr x9,[sp, #0x578]
7101d4ed34  str x8,[x9]
7101d4ed38  ldr x8,[x23, #0x2b0]
7101d4ed3c  ldr x8,[x8, #0x8]
7101d4ed40  ldr x9,[sp, #0x578]
7101d4ed44  str x8,[x9, #0x8]
7101d4ed48  ldr x9,[x23, #0x2b0]
7101d4ed4c  ldr x8,[sp, #0x578]
7101d4ed50  cmp x8,x9
7101d4ed54  b.eq 0x7101d4ed98
7101d4ed58  ldr x10,[x9, #0x18]
7101d4ed5c  ldr x10,[x10]
7101d4ed60  ldr x11,[x8, #0x18]
7101d4ed64  str x10,[x11]
7101d4ed68  ldr x10,[x9, #0x18]
7101d4ed6c  ldr x10,[x10, #0x8]
7101d4ed70  ldr x11,[x8, #0x18]
7101d4ed74  str x10,[x11, #0x8]
7101d4ed78  ldr x10,[x9, #0x18]
7101d4ed7c  ldr x10,[x10, #0x10]
7101d4ed80  ldr x11,[x8, #0x18]
7101d4ed84  str x10,[x11, #0x10]
7101d4ed88  ldr x9,[x9, #0x18]
7101d4ed8c  ldr x9,[x9, #0x18]
7101d4ed90  ldr x8,[x8, #0x18]
7101d4ed94  str x9,[x8, #0x18]
7101d4ed98  fadd v0.4S,v2.4S,v0.4S
7101d4ed9c  mov x19,#0xe38e
7101d4eda0  movk x19,#0x8e38, LSL #16
7101d4eda4  adrp x1,0x710436c000
7101d4eda8  add x1,x1,#0xc09
7101d4edac  str q0,[sp, #0x560]
7101d4edb0  ldr x8,[x23, #0xa8]
7101d4edb4  ldr x8,[x8]
7101d4edb8  add x0,x8,#0x8
7101d4edbc  add x8,sp,#0x1b0
7101d4edc0  movk x19,#0x38e3, LSL #32
7101d4edc4  movk x19,#0x38e, LSL #48
7101d4edc8  bl 0x7103776640
7101d4edcc  ldr x26,[sp, #0x418]
7101d4edd0  ldr x28,[sp, #0x410]
7101d4edd4  mov x25,#0x8e39
7101d4edd8  movk x25,#0x38e3, LSL #16
7101d4eddc  movk x25,#0xe38e, LSL #32
7101d4ede0  movk x25,#0x8e38, LSL #48
7101d4ede4  stp xzr,xzr,[sp, #0x70]
7101d4ede8  str xzr,[sp, #0x68]
7101d4edec  subs x22,x26,x28
7101d4edf0  b.eq 0x7101d4ef14
7101d4edf4  asr x8,x22,#0x3
7101d4edf8  mul x21,x8,x25
7101d4edfc  cmp x21,x19
7101d4ee00  b.hi 0x7101d4f2cc
7101d4ee04  mov w0,#0x10
7101d4ee08  mov x1,x22
7101d4ee0c  bl 0x710392e290
7101d4ee10  cbnz x0,0x7101d4ee54
7101d4ee14  adrp x8,0x7105332000
7101d4ee18  ldr x0,[x8, #0xf00]
7101d4ee1c  cbz x0,0x7101d4ee50
7101d4ee20  str wzr,[sp, #0x80]
7101d4ee24  str x22,[sp, #0x680]
7101d4ee28  ldr x8,[x0]
7101d4ee2c  ldr x8,[x8, #0x30]
7101d4ee30  add x1,sp,#0x80
7101d4ee34  add x2,sp,#0x680
7101d4ee38  blr x8
7101d4ee3c  tbz w0,#0x0,0x7101d4ee50
7101d4ee40  mov w0,#0x10
7101d4ee44  mov x1,x22
7101d4ee48  bl 0x710392e290
7101d4ee4c  cbnz x0,0x7101d4ee54
7101d4ee50  mov x0,xzr
7101d4ee54  mov w8,#0x48
7101d4ee58  madd x8,x21,x8,x0
7101d4ee5c  cmp x28,x26
7101d4ee60  stp x0,x0,[sp, #0x68]
7101d4ee64  str x8,[sp, #0x78]
7101d4ee68  b.eq 0x7101d4ef14
7101d4ee6c  mov w8,#0x89
7101d4ee70  mov x10,x0
7101d4ee74  mov x9,xzr
7101d4ee78  str wzr,[x10], #0x8
7101d4ee7c  add x11,x28,x9
7101d4ee80  ldrb w12,[x11, #0x8]
7101d4ee84  cbz w12,0x7101d4eec4
7101d4ee88  strb w12,[x10, x9, LSL ]
7101d4ee8c  ldrb w13,[x11, #0x9]
7101d4ee90  cbz w13,0x7101d4eeb8
7101d4ee94  add x12,x10,x9
7101d4ee98  strb w13,[x12, #0x1]
7101d4ee9c  ldrb w11,[x11, #0xa]
7101d4eea0  cbz w11,0x7101d4eec0
7101d4eea4  add x9,x9,#0x3
7101d4eea8  cmp w9,#0x3f
7101d4eeac  strb w11,[x12, #0x2]
7101d4eeb0  b.cc 0x7101d4ee7c
7101d4eeb4  b 0x7101d4eec4
7101d4eeb8  add x9,x9,#0x1
7101d4eebc  b 0x7101d4eec4
7101d4eec0  add x9,x9,#0x2
7101d4eec4  add x10,x0,#0x8
7101d4eec8  strb wzr,[x10, w9, UXTW ]
7101d4eecc  str w9,[x0, #0x4]
7101d4eed0  ldrb w9,[x0, #0x8]
7101d4eed4  mov w11,w27
7101d4eed8  cbz w9,0x7101d4eef8
7101d4eedc  add x10,x0,#0x9
7101d4eee0  mov w11,w27
7101d4eee4  mul w11,w11,w8
7101d4eee8  and w9,w9,#0xff
7101d4eeec  eor w11,w11,w9
7101d4eef0  ldrb w9,[x10], #0x1
7101d4eef4  cbnz w9,0x7101d4eee4
7101d4eef8  str w11,[x0]
7101d4eefc  ldr x9,[sp, #0x70]
7101d4ef00  add x28,x28,#0x48
7101d4ef04  cmp x28,x26
7101d4ef08  add x0,x9,#0x48
7101d4ef0c  str x0,[sp, #0x70]
7101d4ef10  b.ne 0x7101d4ee70
7101d4ef14  ldr x1,[sp, #0x10]
7101d4ef18  add x0,x23,#0x20
7101d4ef1c  add x2,sp,#0x68
7101d4ef20  add x3,sp,#0x550
7101d4ef24  add x4,sp,#0x1b0
7101d4ef28  bl 0x71032ccb70
7101d4ef2c  ldr x0,[sp, #0x68]
7101d4ef30  cbz x0,0x7101d4ef3c
7101d4ef34  str x0,[sp, #0x70]
7101d4ef38  bl 0x710392eb40
7101d4ef3c  ldr x26,[sp, #0x2e8]
7101d4ef40  ldr x28,[sp, #0x2e0]
7101d4ef44  str xzr,[sp, #0x50]
7101d4ef48  stp xzr,xzr,[sp, #0x58]
7101d4ef4c  subs x22,x26,x28
7101d4ef50  b.eq 0x7101d4f074
7101d4ef54  asr x8,x22,#0x3
7101d4ef58  mul x21,x8,x25
7101d4ef5c  cmp x21,x19
7101d4ef60  b.hi 0x7101d4f2d4
7101d4ef64  mov w0,#0x10
7101d4ef68  mov x1,x22
7101d4ef6c  bl 0x710392e290
7101d4ef70  cbnz x0,0x7101d4efb4
7101d4ef74  adrp x8,0x7105332000
7101d4ef78  ldr x0,[x8, #0xf00]
7101d4ef7c  cbz x0,0x7101d4efb0
7101d4ef80  str wzr,[sp, #0x80]
7101d4ef84  str x22,[sp, #0x680]
7101d4ef88  ldr x8,[x0]
7101d4ef8c  ldr x8,[x8, #0x30]
7101d4ef90  add x1,sp,#0x80
7101d4ef94  add x2,sp,#0x680
7101d4ef98  blr x8
7101d4ef9c  tbz w0,#0x0,0x7101d4efb0
7101d4efa0  mov w0,#0x10
7101d4efa4  mov x1,x22
7101d4efa8  bl 0x710392e290
7101d4efac  cbnz x0,0x7101d4efb4
7101d4efb0  mov x0,xzr
7101d4efb4  mov w8,#0x48
7101d4efb8  madd x8,x21,x8,x0
7101d4efbc  cmp x28,x26
7101d4efc0  stp x0,x0,[sp, #0x50]
7101d4efc4  str x8,[sp, #0x60]
7101d4efc8  b.eq 0x7101d4f074
7101d4efcc  mov w8,#0x89
7101d4efd0  mov x10,x0
7101d4efd4  mov x9,xzr
7101d4efd8  str wzr,[x10], #0x8
7101d4efdc  add x11,x28,x9
7101d4efe0  ldrb w12,[x11, #0x8]
7101d4efe4  cbz w12,0x7101d4f024
7101d4efe8  strb w12,[x10, x9, LSL ]
7101d4efec  ldrb w13,[x11, #0x9]
7101d4eff0  cbz w13,0x7101d4f018
7101d4eff4  add x12,x10,x9
7101d4eff8  strb w13,[x12, #0x1]
7101d4effc  ldrb w11,[x11, #0xa]
7101d4f000  cbz w11,0x7101d4f020
7101d4f004  add x9,x9,#0x3
7101d4f008  cmp w9,#0x3f
7101d4f00c  strb w11,[x12, #0x2]
7101d4f010  b.cc 0x7101d4efdc
7101d4f014  b 0x7101d4f024
7101d4f018  add x9,x9,#0x1
7101d4f01c  b 0x7101d4f024
7101d4f020  add x9,x9,#0x2
7101d4f024  add x10,x0,#0x8
7101d4f028  strb wzr,[x10, w9, UXTW ]
7101d4f02c  str w9,[x0, #0x4]
7101d4f030  ldrb w9,[x0, #0x8]
7101d4f034  mov w11,w27
7101d4f038  cbz w9,0x7101d4f058
7101d4f03c  add x10,x0,#0x9
7101d4f040  mov w11,w27
7101d4f044  mul w11,w11,w8
7101d4f048  and w9,w9,#0xff
7101d4f04c  eor w11,w11,w9
7101d4f050  ldrb w9,[x10], #0x1
7101d4f054  cbnz w9,0x7101d4f044
7101d4f058  str w11,[x0]
7101d4f05c  ldr x9,[sp, #0x58]
7101d4f060  add x28,x28,#0x48
7101d4f064  cmp x28,x26
7101d4f068  add x0,x9,#0x48
7101d4f06c  str x0,[sp, #0x58]
7101d4f070  b.ne 0x7101d4efd0
7101d4f074  ldr x1,[sp, #0x18]
7101d4f078  add x0,x23,#0x48
7101d4f07c  add x2,sp,#0x50
7101d4f080  add x3,sp,#0x550
7101d4f084  add x4,sp,#0x1b0
7101d4f088  bl 0x71032ccb70
7101d4f08c  ldr x0,[sp, #0x50]
7101d4f090  cbz x0,0x7101d4f09c
7101d4f094  str x0,[sp, #0x58]
7101d4f098  bl 0x710392eb40
7101d4f09c  ldp x9,x10,[x23, #0x70]
7101d4f0a0  ldrsw x8,[x23, #0x2a0]
7101d4f0a4  adrp x22,0x710523d000
7101d4f0a8  add x22,x22,#0x988
7101d4f0ac  sub x10,x10,x9
7101d4f0b0  asr x10,x10,#0x2
7101d4f0b4  cmp x10,x8
7101d4f0b8  b.ls 0x7101d4f2a4
7101d4f0bc  ldr w19,[x9, x8, LSL #0x2]
7101d4f0c0  ldr x8,[sp, #0x28]
7101d4f0c4  ldr x8,[x8]
7101d4f0c8  ldr x8,[x8]
7101d4f0cc  add x0,x8,#0x8
7101d4f0d0  adrp x1,0x7104281000
7101d4f0d4  add x1,x1,#0x205
7101d4f0d8  add x8,sp,#0x80
7101d4f0dc  bl 0x7103776640
7101d4f0e0  add x0,sp,#0x680
7101d4f0e4  mov w1,w19
7101d4f0e8  add x21,sp,#0x680
7101d4f0ec  bl 0x7101d49460
7101d4f0f0  adrp x1,0x7104431000
7101d4f0f4  add x1,x1,#0x6d5
7101d4f0f8  sub x8,x29,#0xa0
7101d4f0fc  add x0,sp,#0x80
7101d4f100  bl 0x7103776910
7101d4f104  add x1,x21,#0x8
7101d4f108  sub x0,x29,#0xa0
7101d4f10c  bl 0x710377a120
7101d4f110  ldur x0,[x29, #-0x98]
7101d4f114  stp x20,xzr,[x29, #-0xa0]
7101d4f118  cbz x0,0x7101d4f120
7101d4f11c  bl 0x710392eb40
7101d4f120  ldr x19,[sp, #0x88]
7101d4f124  stp x22,xzr,[sp, #0x80]
7101d4f128  cbz x19,0x7101d4f144
7101d4f12c  ldr x0,[x19, #0x18]
7101d4f130  stp x20,xzr,[x19, #0x10]
7101d4f134  cbz x0,0x7101d4f13c
7101d4f138  bl 0x710392eb40
7101d4f13c  mov x0,x19
7101d4f140  bl 0x710392eb40
7101d4f144  ldr x19,[sp, #0x1b8]
7101d4f148  stp x22,xzr,[sp, #0x1b0]
7101d4f14c  cbz x19,0x7101d4f168
7101d4f150  ldr x0,[x19, #0x18]
7101d4f154  stp x20,xzr,[x19, #0x10]
7101d4f158  cbz x0,0x7101d4f160
7101d4f15c  bl 0x710392eb40
7101d4f160  mov x0,x19
7101d4f164  bl 0x710392eb40
7101d4f168  ldr x0,[sp, #0x2e0]
7101d4f16c  cbz x0,0x7101d4f178
7101d4f170  str x0,[sp, #0x2e8]
7101d4f174  bl 0x710392eb40
7101d4f178  ldr x0,[sp, #0x410]
7101d4f17c  cbz x0,0x7101d4f188
7101d4f180  str x0,[sp, #0x418]
7101d4f184  bl 0x710392eb40
7101d4f188  ldr x19,[sp, #0x578]
7101d4f18c  str x22,[sp, #0x570]
7101d4f190  str xzr,[sp, #0x578]
7101d4f194  cbz x19,0x7101d4f1b0
7101d4f198  ldr x0,[x19, #0x18]
7101d4f19c  stp x20,xzr,[x19, #0x10]
7101d4f1a0  cbz x0,0x7101d4f1a8
7101d4f1a4  bl 0x710392eb40
7101d4f1a8  mov x0,x19
7101d4f1ac  bl 0x710392eb40
7101d4f1b0  ldp x19,x10,[sp, #0x20]
7101d4f1b4  ldr x8,[x19]
7101d4f1b8  ldr x8,[x8]
7101d4f1bc  ldr x8,[x8]
7101d4f1c0  ldr x8,[x8, #0x600]
7101d4f1c4  mov w9,#0x10
7101d4f1c8  str w9,[x8, #0x18]
7101d4f1cc  ldr x8,[x10]
7101d4f1d0  ldr x8,[x8]
7101d4f1d4  ldr x8,[x8]
7101d4f1d8  ldr x8,[x8, #0x600]
7101d4f1dc  mov w9,#0x80
7101d4f1e0  str w9,[x8, #0x1c]
7101d4f1e4  ldr x8,[x10]
7101d4f1e8  ldr x8,[x8]
7101d4f1ec  ldr x8,[x8]
7101d4f1f0  ldr x8,[x8, #0x600]
7101d4f1f4  mov w9,#0x140
7101d4f1f8  str w9,[x8, #0x14]
7101d4f1fc  ldr x8,[x10]
7101d4f200  ldr x0,[x8]
7101d4f204  mov w1,#0x1
7101d4f208  orr w2,wzr,#0x10001
7101d4f20c  bl 0x7103775dc0
7101d4f210  ldr x8,[x19]
7101d4f214  ldr x8,[x8]
7101d4f218  ldr x0,[x8, #0x10]
7101d4f21c  fmov s0,wzr
7101d4f220  adrp x1,0x7104401000
7101d4f224  add x1,x1,#0x836
7101d4f228  bl 0x7103778630
7101d4f22c  ldr x8,[x19]
7101d4f230  ldr x0,[x8]
7101d4f234  mov w2,#0x1001
7101d4f238  mov w1,wzr
7101d4f23c  bl 0x7103775dc0
7101d4f240  add sp,sp,#0x7f0
7101d4f244  ldp x29,x30,[sp, #0x60]
7101d4f248  ldp x20,x19,[sp, #0x50]
7101d4f24c  ldp x22,x21,[sp, #0x40]
7101d4f250  ldp x24,x23,[sp, #0x30]
7101d4f254  ldp x26,x25,[sp, #0x20]
7101d4f258  ldp x28,x27,[sp, #0x10]
7101d4f25c  ldr d8,[sp], #0x70
7101d4f260  ret
7101d4f264  mov x22,xzr
7101d4f268  b 0x7101d4d8ec
7101d4f26c  mov x22,xzr
7101d4f270  b 0x7101d4da10
7101d4f274  mov x22,xzr
7101d4f278  b 0x7101d4db38
7101d4f27c  mov x22,xzr
7101d4f280  b 0x7101d4dc60
7101d4f284  mov x22,xzr
7101d4f288  b 0x7101d4dd88
7101d4f28c  mov x22,xzr
7101d4f290  b 0x7101d4deb0
7101d4f294  mov x22,xzr
7101d4f298  b 0x7101d4dfd8
7101d4f29c  mov x0,x25
7101d4f2a0  bl 0x71039c1330
7101d4f2a4  mov x0,x24
7101d4f2a8  bl 0x71039c1330
7101d4f2ac  ldur x0,[x29, #-0x58]
7101d4f2b0  bl 0x71039c0c00
7101d4f2b4  ldr x0,[sp, #0x30]
7101d4f2b8  bl 0x71039c0c00
7101d4f2bc  mov x0,x25
7101d4f2c0  bl 0x71039c0c00
7101d4f2c4  mov x0,x24
7101d4f2c8  bl 0x71039c0c00
7101d4f2cc  add x0,sp,#0x68
7101d4f2d0  bl 0x71039c0c00
7101d4f2d4  add x0,sp,#0x50
7101d4f2d8  bl 0x71039c0c00
