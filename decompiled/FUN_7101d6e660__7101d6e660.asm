// addr:      7101d6e660
// offset:    0x1d6e660
// name:      FUN_7101d6e660
// mangled:   
// size:      4536

7101d6e660  str d8,[sp, #-0x50]!
7101d6e664  str x28,[sp, #0x8]
7101d6e668  stp x24,x23,[sp, #0x10]
7101d6e66c  stp x22,x21,[sp, #0x20]
7101d6e670  stp x20,x19,[sp, #0x30]
7101d6e674  stp x29,x30,[sp, #0x40]
7101d6e678  add x29,sp,#0x40
7101d6e67c  sub sp,sp,#0x380
7101d6e680  ldr w8,[x0, #0x290]
7101d6e684  ldrsw x2,[x0, #0x2ac]
7101d6e688  mov x19,x0
7101d6e68c  ldr w3,[x0, #0x2b0]
7101d6e690  mov w9,wzr
7101d6e694  cmp w8,#0x4
7101d6e698  ldr x1,[x0]
7101d6e69c  b.hi 0x7101d6e6f4
7101d6e6a0  adrp x10,0x71044fb000
7101d6e6a4  add x10,x10,#0x40
7101d6e6a8  ldrsw x11,[x10, x8, LSL #0x2]
7101d6e6ac  add x10,x11,x10
7101d6e6b0  br x10
7101d6e6b4  ldp x9,x10,[x1]
7101d6e6b8  sub x10,x10,x9
7101d6e6bc  orr x11,xzr,#-0x5555555555555556
7101d6e6c0  movk x11,#0xaaab
7101d6e6c4  asr x10,x10,#0x4
7101d6e6c8  mul x10,x10,x11
7101d6e6cc  cmp x10,x2
7101d6e6d0  b.ls 0x7101d6e7d4
7101d6e6d4  orr w10,wzr,#0x30
7101d6e6d8  madd x9,x2,x10,x9
7101d6e6dc  ldp x10,x9,[x9, #0x8]
7101d6e6e0  sub x9,x9,x10
7101d6e6e4  mov w10,#0xaaab
7101d6e6e8  movk w10,#0xaaaa, LSL #16
7101d6e6ec  lsr x9,x9,#0x3
7101d6e6f0  mul w9,w9,w10
7101d6e6f4  cmp w8,#0x2
7101d6e6f8  b.cc 0x7101d6e7e0
7101d6e6fc  b.eq 0x7101d6e824
7101d6e700  cmp w8,#0x4
7101d6e704  b.eq 0x7101d6e7e0
7101d6e708  b 0x7101d6f370
7101d6e70c  ldp x8,x9,[x1, #0x30]
7101d6e710  sub x9,x9,x8
7101d6e714  mov x10,#0x5c29
7101d6e718  movk x10,#0xc28f, LSL #16
7101d6e71c  movk x10,#0x28f5, LSL #32
7101d6e720  movk x10,#0x8f5c, LSL #48
7101d6e724  asr x9,x9,#0x3
7101d6e728  mul x9,x9,x10
7101d6e72c  cmp x9,x2
7101d6e730  b.ls 0x7101d6e918
7101d6e734  mov w9,#0xc8
7101d6e738  madd x8,x2,x9,x8
7101d6e73c  ldp x9,x8,[x8, #0xa8]
7101d6e740  sub x8,x8,x9
7101d6e744  lsr x8,x8,#0x4
7101d6e748  b 0x7101d6e91c
7101d6e74c  ldp x9,x10,[x1, #0x18]
7101d6e750  sub x10,x10,x9
7101d6e754  mov x11,#0x8ba3
7101d6e758  movk x11,#0xba2e, LSL #16
7101d6e75c  movk x11,#0xa2e8, LSL #32
7101d6e760  movk x11,#0x2e8b, LSL #48
7101d6e764  asr x10,x10,#0x3
7101d6e768  mul x10,x10,x11
7101d6e76c  cmp x10,x2
7101d6e770  b.ls 0x7101d6e970
7101d6e774  mov w10,#0x58
7101d6e778  madd x9,x2,x10,x9
7101d6e77c  ldp x10,x9,[x9, #0x38]
7101d6e780  sub x9,x9,x10
7101d6e784  mov w10,#0xaaab
7101d6e788  movk w10,#0xaaaa, LSL #16
7101d6e78c  lsr x9,x9,#0x3
7101d6e790  mul w9,w9,w10
7101d6e794  cmp w9,w3
7101d6e798  b.le 0x7101d6e7e8
7101d6e79c  ldr w9,[x19, #0x2a0]
7101d6e7a0  cbnz w9,0x7101d6e7ac
7101d6e7a4  ldr w9,[x19, #0x29c]
7101d6e7a8  cbz w9,0x7101d6e7e8
7101d6e7ac  mov x23,#0xff0000000000
7101d6e7b0  movk x23,#0xd9ff, LSL #48
7101d6e7b4  cmp w8,#0x4
7101d6e7b8  b.eq 0x7101d6e7c8
7101d6e7bc  cmp w8,#0x1
7101d6e7c0  b.eq 0x7101d6e980
7101d6e7c4  cbnz w8,0x7101d6e990
7101d6e7c8  sub x0,x29,#0x68
7101d6e7cc  bl 0x7101d88390
7101d6e7d0  b 0x7101d6e99c
7101d6e7d4  mov w9,wzr
7101d6e7d8  cmp w8,#0x2
7101d6e7dc  b.cs 0x7101d6e6fc
7101d6e7e0  cmp w9,w3
7101d6e7e4  b.gt 0x7101d6e79c
7101d6e7e8  ldr x9,[x19, #0x1c0]
7101d6e7ec  ldr x20,[x9]
7101d6e7f0  ldrb w10,[x19, #0x35d]
7101d6e7f4  ldr x0,[x20, #0x10]
7101d6e7f8  adrp x9,0x71043e0000
7101d6e7fc  add x9,x9,#0x462
7101d6e800  adrp x11,0x710434a000
7101d6e804  add x11,x11,#0x6d9
7101d6e808  cmp w8,#0x1
7101d6e80c  csel x1,x11,x9,eq
7101d6e810  cbz w10,0x7101d6e8b4
7101d6e814  fmov s0,0x3f800000
7101d6e818  bl 0x7103778300
7101d6e81c  strb wzr,[x19, #0x35d]
7101d6e820  b 0x7101d6e8b8
7101d6e824  ldr x8,[x19, #0x1c0]
7101d6e828  ldr x22,[x8]
7101d6e82c  cmp w9,w3
7101d6e830  b.le 0x7101d6e92c
7101d6e834  ldr w8,[x19, #0x2a0]
7101d6e838  cbnz w8,0x7101d6e844
7101d6e83c  ldr w8,[x19, #0x29c]
7101d6e840  cbz w8,0x7101d6e92c
7101d6e844  add x0,x1,#0x30
7101d6e848  mov w1,w2
7101d6e84c  mov w2,w3
7101d6e850  bl 0x7101d884a0
7101d6e854  adrp x8,0x710532f000
7101d6e858  ldr x8,[x8, #0x730]
7101d6e85c  ldr x21,[x8, #0x8]
7101d6e860  adrp x8,0x710532f000
7101d6e864  ldr x8,[x8, #0x8d8]
7101d6e868  mov x20,x1
7101d6e86c  ldr x1,[x8, #0x8]
7101d6e870  mov x2,x0
7101d6e874  add x0,sp,#0x8
7101d6e878  bl 0x7103318150
7101d6e87c  ldr x8,[x21, #0x288]
7101d6e880  ldr x12,[x8, #0x50]
7101d6e884  cbz x12,0x7101d6edc4
7101d6e888  ldr x10,[sp, #0x20]
7101d6e88c  sub x13,x12,#0x1
7101d6e890  ands x14,x13,x12
7101d6e894  and x11,x10,#0xffffffffff
7101d6e898  b.eq 0x7101d6ed28
7101d6e89c  cmp x11,x12
7101d6e8a0  mov x16,x11
7101d6e8a4  b.cc 0x7101d6ed2c
7101d6e8a8  udiv x9,x11,x12
7101d6e8ac  msub x16,x9,x12,x11
7101d6e8b0  b 0x7101d6ed2c
7101d6e8b4  bl 0x7103778760
7101d6e8b8  fmov s8,0x3f800000
7101d6e8bc  ldr x0,[x20, #0x10]
7101d6e8c0  adrp x1,0x710435b000
7101d6e8c4  add x1,x1,#0xb35
7101d6e8c8  mov v0.16B,v8.16B
7101d6e8cc  bl 0x7103778300
7101d6e8d0  ldr x0,[x20, #0x10]
7101d6e8d4  mov v0.16B,v8.16B
7101d6e8d8  adrp x1,0x7104291000
7101d6e8dc  add x1,x1,#0xf57
7101d6e8e0  bl 0x7103778300
7101d6e8e4  ldr w8,[x19, #0x290]
7101d6e8e8  cmp w8,#0x1
7101d6e8ec  b.ne 0x7101d6f370
7101d6e8f0  ldrb w8,[x19, #0x35c]
7101d6e8f4  ldr x0,[x20, #0x10]
7101d6e8f8  adrp x1,0x710434a000
7101d6e8fc  add x1,x1,#0x6e9
7101d6e900  cbnz w8,0x7101d6e950
7101d6e904  fmov s0,0x3f800000
7101d6e908  bl 0x7103778300
7101d6e90c  mov w8,#0x1
7101d6e910  strb w8,[x19, #0x35c]
7101d6e914  b 0x7101d6f370
7101d6e918  mov w8,wzr
7101d6e91c  ldr x9,[x19, #0x1c0]
7101d6e920  ldr x22,[x9]
7101d6e924  cmp w8,w3
7101d6e928  b.gt 0x7101d6e834
7101d6e92c  ldrb w8,[x19, #0x35d]
7101d6e930  ldr x0,[x22, #0x10]
7101d6e934  adrp x1,0x71043ad000
7101d6e938  add x1,x1,#0xb23
7101d6e93c  cbz w8,0x7101d6e950
7101d6e940  fmov s0,0x3f800000
7101d6e944  bl 0x7103778300
7101d6e948  strb wzr,[x19, #0x35d]
7101d6e94c  b 0x7101d6f370
7101d6e950  add sp,sp,#0x380
7101d6e954  ldp x29,x30,[sp, #0x40]
7101d6e958  ldr x28,[sp, #0x8]
7101d6e95c  ldp x20,x19,[sp, #0x30]
7101d6e960  ldp x22,x21,[sp, #0x20]
7101d6e964  ldp x24,x23,[sp, #0x10]
7101d6e968  ldr d8,[sp], #0x50
7101d6e96c  b 0x7103778760
7101d6e970  mov w9,wzr
7101d6e974  cmp w9,w3
7101d6e978  b.gt 0x7101d6e79c
7101d6e97c  b 0x7101d6e7e8
7101d6e980  add x1,x1,#0x18
7101d6e984  sub x0,x29,#0x68
7101d6e988  bl 0x7101d88410
7101d6e98c  b 0x7101d6e99c
7101d6e990  stp xzr,xzr,[x29, #-0x60]
7101d6e994  stur x23,[x29, #-0x68]
7101d6e998  sturb wzr,[x29, #-0x58]
7101d6e99c  adrp x8,0x710532f000
7101d6e9a0  ldr x8,[x8, #0x730]
7101d6e9a4  ldr x24,[x8, #0x8]
7101d6e9a8  ldur x21,[x29, #-0x68]
7101d6e9ac  mov x2,x21
7101d6e9b0  ldr x1,[x24, #0x278]
7101d6e9b4  sub x0,x29,#0xb0
7101d6e9b8  add x20,x24,#0x2b0
7101d6e9bc  sub x22,x29,#0xb0
7101d6e9c0  bl 0x71032570e0
7101d6e9c4  mov x8,xzr
7101d6e9c8  add x9,x22,#0x8
7101d6e9cc  add x10,sp,#0x280
7101d6e9d0  str wzr,[sp, #0x280]
7101d6e9d4  b 0x7101d6e9e0
7101d6e9d8  add x8,x8,#0x2
7101d6e9dc  strb w11,[x12, #0x9]
7101d6e9e0  add x11,x9,x8
7101d6e9e4  ldrb w13,[x11]
7101d6e9e8  cbz w13,0x7101d6ea14
7101d6e9ec  add w14,w8,#0x1
7101d6e9f0  add x12,x10,x8
7101d6e9f4  cmp w14,#0x3f
7101d6e9f8  strb w13,[x12, #0x8]
7101d6e9fc  b.cs 0x7101d6ea10
7101d6ea00  ldrb w11,[x11, #0x1]
7101d6ea04  cbnz w11,0x7101d6e9d8
7101d6ea08  add x8,x8,#0x1
7101d6ea0c  b 0x7101d6ea14
7101d6ea10  add w8,w8,#0x1
7101d6ea14  add x9,sp,#0x280
7101d6ea18  add x1,x9,#0x8
7101d6ea1c  mov w22,#0x9dc5
7101d6ea20  movk w22,#0x811c, LSL #16
7101d6ea24  mov w10,w22
7101d6ea28  strb wzr,[x1, w8, UXTW ]
7101d6ea2c  str w8,[sp, #0x284]
7101d6ea30  ldrb w8,[sp, #0x288]
7101d6ea34  cbz w8,0x7101d6ea58
7101d6ea38  add x9,x9,#0x9
7101d6ea3c  mov w11,#0x89
7101d6ea40  mov w10,w22
7101d6ea44  mul w10,w10,w11
7101d6ea48  and w8,w8,#0xff
7101d6ea4c  eor w10,w10,w8
7101d6ea50  ldrb w8,[x9], #0x1
7101d6ea54  cbnz w8,0x7101d6ea44
7101d6ea58  adrp x0,0x710428f000
7101d6ea5c  add x0,x0,#0xf21
7101d6ea60  sub x8,x29,#0xf8
7101d6ea64  str w10,[sp, #0x280]
7101d6ea68  bl 0x71003a4ca0
7101d6ea6c  ldr x0,[x24, #0x278]
7101d6ea70  mov x1,x21
7101d6ea74  bl 0x710325dd40
7101d6ea78  mov x2,x0
7101d6ea7c  add x0,sp,#0x238
7101d6ea80  mov x1,x20
7101d6ea84  bl 0x710327c2f0
7101d6ea88  sub x9,x29,#0xb0
7101d6ea8c  mov x8,xzr
7101d6ea90  add x10,sp,#0x1a8
7101d6ea94  add x9,x9,#0x8
7101d6ea98  str wzr,[sp, #0x1a8]
7101d6ea9c  b 0x7101d6eaa8
7101d6eaa0  add x8,x8,#0x2
7101d6eaa4  strb w11,[x12, #0x9]
7101d6eaa8  add x11,x9,x8
7101d6eaac  ldrb w13,[x11]
7101d6eab0  cbz w13,0x7101d6eadc
7101d6eab4  add w14,w8,#0x1
7101d6eab8  add x12,x10,x8
7101d6eabc  cmp w14,#0x3f
7101d6eac0  strb w13,[x12, #0x8]
7101d6eac4  b.cs 0x7101d6ead8
7101d6eac8  ldrb w11,[x11, #0x1]
7101d6eacc  cbnz w11,0x7101d6eaa0
7101d6ead0  add x8,x8,#0x1
7101d6ead4  b 0x7101d6eadc
7101d6ead8  add w8,w8,#0x1
7101d6eadc  add x9,sp,#0x1a8
7101d6eae0  add x1,x9,#0x8
7101d6eae4  mov w10,w22
7101d6eae8  strb wzr,[x1, w8, UXTW ]
7101d6eaec  str w8,[sp, #0x1ac]
7101d6eaf0  ldrb w8,[sp, #0x1b0]
7101d6eaf4  cbz w8,0x7101d6eb18
7101d6eaf8  add x9,x9,#0x9
7101d6eafc  mov w11,#0x89
7101d6eb00  mov w10,w22
7101d6eb04  mul w10,w10,w11
7101d6eb08  and w8,w8,#0xff
7101d6eb0c  eor w10,w10,w8
7101d6eb10  ldrb w8,[x9], #0x1
7101d6eb14  cbnz w8,0x7101d6eb04
7101d6eb18  adrp x0,0x7104410000
7101d6eb1c  add x0,x0,#0xd3f
7101d6eb20  add x8,sp,#0x1f0
7101d6eb24  str w10,[sp, #0x1a8]
7101d6eb28  bl 0x71003a4ca0
7101d6eb2c  sub x8,x29,#0xf8
7101d6eb30  add x0,x19,#0x218
7101d6eb34  adrp x1,0x71042c3000
7101d6eb38  add x1,x1,#0x645
7101d6eb3c  add x20,x8,#0x8
7101d6eb40  add x8,sp,#0x8
7101d6eb44  bl 0x7103776910
7101d6eb48  add x0,sp,#0x8
7101d6eb4c  mov x1,x20
7101d6eb50  mov w2,wzr
7101d6eb54  bl 0x710377a750
7101d6eb58  ldr x0,[sp, #0x10]
7101d6eb5c  adrp x21,0x710523d000
7101d6eb60  add x21,x21,#0x9a8
7101d6eb64  stp x21,xzr,[sp, #0x8]
7101d6eb68  cbz x0,0x7101d6eb70
7101d6eb6c  bl 0x710392eb40
7101d6eb70  add x8,sp,#0x238
7101d6eb74  add x0,x19,#0x228
7101d6eb78  adrp x1,0x71042c3000
7101d6eb7c  add x1,x1,#0x645
7101d6eb80  add x20,x8,#0x8
7101d6eb84  add x8,sp,#0x8
7101d6eb88  bl 0x7103776910
7101d6eb8c  add x0,sp,#0x8
7101d6eb90  mov x1,x20
7101d6eb94  mov w2,wzr
7101d6eb98  bl 0x710377a750
7101d6eb9c  ldr x0,[sp, #0x10]
7101d6eba0  stp x21,xzr,[sp, #0x8]
7101d6eba4  cbz x0,0x7101d6ebac
7101d6eba8  bl 0x710392eb40
7101d6ebac  add x8,sp,#0x158
7101d6ebb0  str x8,[sp, #0x198]
7101d6ebb4  adrp x8,0x710593b000
7101d6ebb8  stp xzr,xzr,[sp, #0x188]
7101d6ebbc  ldr x8,[x8, #0xc60]
7101d6ebc0  stp xzr,xzr,[sp, #0x178]
7101d6ebc4  add x9,sp,#0x1f0
7101d6ebc8  add x20,x9,#0x8
7101d6ebcc  mov x1,x20
7101d6ebd0  str wzr,[sp, #0x1a0]
7101d6ebd4  stp xzr,xzr,[sp, #0x168]
7101d6ebd8  stp xzr,xzr,[sp, #0x158]
7101d6ebdc  ldr x0,[x8]
7101d6ebe0  bl 0x71037a4570
7101d6ebe4  tbz w0,#0x0,0x7101d6ef94
7101d6ebe8  add x0,sp,#0x8
7101d6ebec  mov x1,x20
7101d6ebf0  str xzr,[sp, #0x8]
7101d6ebf4  stp xzr,xzr,[sp, #0x10]
7101d6ebf8  bl 0x71037a7e90
7101d6ebfc  ldp x8,x9,[sp, #0x8]
7101d6ec00  cmp x9,x8
7101d6ec04  b.eq 0x7101d6f7e8
7101d6ec08  ldr x0,[sp, #0x198]
7101d6ec0c  ldr x20,[x8, #0x40]
7101d6ec10  add x21,sp,#0x158
7101d6ec14  ldr w24,[x8, #0x48]
7101d6ec18  cmp x21,x0
7101d6ec1c  b.eq 0x7101d6ec28
7101d6ec20  cbz x0,0x7101d6ec28
7101d6ec24  bl 0x710392eb40
7101d6ec28  strh wzr,[sp, #0x158]
7101d6ec2c  str x21,[sp, #0x198]
7101d6ec30  str wzr,[sp, #0x1a0]
7101d6ec34  cbz x20,0x7101d6ef30
7101d6ec38  tbz w24,#0x1f,0x7101d6eca4
7101d6ec3c  ldrh w10,[x20]
7101d6ec40  cbz w10,0x7101d6ef08
7101d6ec44  mov w8,wzr
7101d6ec48  mov w24,wzr
7101d6ec4c  orr w9,wzr,#0x3
7101d6ec50  mov x11,x20
7101d6ec54  orr w12,w10,#0x1
7101d6ec58  and w12,w12,#0xffff
7101d6ec5c  cmp w12,#0xf
7101d6ec60  b.ne 0x7101d6ec80
7101d6ec64  and w10,w10,#0xffff
7101d6ec68  cmp w10,#0xe
7101d6ec6c  b.ne 0x7101d6ec88
7101d6ec70  ldrh w10,[x11, #0x6]
7101d6ec74  lsr w10,w10,#0x1
7101d6ec78  add w10,w10,#0x4
7101d6ec7c  b 0x7101d6ec90
7101d6ec80  mov w10,#0x1
7101d6ec84  b 0x7101d6ec90
7101d6ec88  cmp w10,#0xf
7101d6ec8c  csel w10,w9,wzr,eq
7101d6ec90  add w8,w10,w8
7101d6ec94  add x11,x20,w8, UXTW  #0x1
7101d6ec98  add w24,w10,w24
7101d6ec9c  ldrh w10,[x11]
7101d6eca0  cbnz w10,0x7101d6ec54
7101d6eca4  cmp w24,#0x20
7101d6eca8  str w24,[sp, #0x1a0]
7101d6ecac  b.lt 0x7101d6ed20
7101d6ecb0  add w8,w24,#0x1
7101d6ecb4  sxtw x8,w8
7101d6ecb8  adds x8,x8,x8
7101d6ecbc  csinv x8,x8,xzr,cc
7101d6ecc0  cmp x8,#0x0
7101d6ecc4  csinc x21,x8,xzr,ne
7101d6ecc8  mov w0,#0x10
7101d6eccc  mov x1,x21
7101d6ecd0  bl 0x710392e290
7101d6ecd4  cbnz x0,0x7101d6ed18
7101d6ecd8  adrp x8,0x7105332000
7101d6ecdc  ldr x0,[x8, #0xf00]
7101d6ece0  cbz x0,0x7101d6ed14
7101d6ece4  stur wzr,[x29, #-0x44]
7101d6ece8  stur x21,[x29, #-0x50]
7101d6ecec  ldr x8,[x0]
7101d6ecf0  ldr x8,[x8, #0x30]
7101d6ecf4  sub x1,x29,#0x44
7101d6ecf8  sub x2,x29,#0x50
7101d6ecfc  blr x8
7101d6ed00  tbz w0,#0x0,0x7101d6ed14
7101d6ed04  mov w0,#0x10
7101d6ed08  mov x1,x21
7101d6ed0c  bl 0x710392e290
7101d6ed10  cbnz x0,0x7101d6ed18
7101d6ed14  mov x0,xzr
7101d6ed18  str x0,[sp, #0x198]
7101d6ed1c  b 0x7101d6ef14
7101d6ed20  add x0,sp,#0x158
7101d6ed24  b 0x7101d6ef14
7101d6ed28  and x16,x13,x11
7101d6ed2c  ldr x15,[x8, #0x48]
7101d6ed30  ldr x9,[x15, x16, LSL #0x3]
7101d6ed34  cbz x9,0x7101d6edc4
7101d6ed38  ldr x17,[x9]
7101d6ed3c  cbz x17,0x7101d6edc4
7101d6ed40  mov w9,#0xffffffff
7101d6ed44  cbz x14,0x7101d6ed8c
7101d6ed48  ldr x18,[x17, #0x8]
7101d6ed4c  cmp x11,x18
7101d6ed50  b.ne 0x7101d6ed68
7101d6ed54  ldr x18,[x17, #0x10]
7101d6ed58  eor x18,x18,x10
7101d6ed5c  tst x18,#0xffffffffff
7101d6ed60  b.ne 0x7101d6ed80
7101d6ed64  b 0x7101d6f390
7101d6ed68  cmp x18,x12
7101d6ed6c  b.cc 0x7101d6ed78
7101d6ed70  udiv x0,x18,x12
7101d6ed74  msub x18,x0,x12,x18
7101d6ed78  cmp x18,x16
7101d6ed7c  b.ne 0x7101d6edc8
7101d6ed80  ldr x17,[x17]
7101d6ed84  cbnz x17,0x7101d6ed48
7101d6ed88  b 0x7101d6edc8
7101d6ed8c  ldr x18,[x17, #0x8]
7101d6ed90  and x0,x18,x13
7101d6ed94  cmp x11,x18
7101d6ed98  ccmp x0,x16,#0x4,ne
7101d6ed9c  b.ne 0x7101d6edc8
7101d6eda0  cmp x11,x18
7101d6eda4  b.ne 0x7101d6edb8
7101d6eda8  ldr x18,[x17, #0x10]
7101d6edac  eor x18,x18,x10
7101d6edb0  tst x18,#0xffffffffff
7101d6edb4  b.eq 0x7101d6f390
7101d6edb8  ldr x17,[x17]
7101d6edbc  cbnz x17,0x7101d6ed8c
7101d6edc0  b 0x7101d6edc8
7101d6edc4  mov w9,#0xffffffff
7101d6edc8  ldr x11,[x8, #0x8]
7101d6edcc  ldr x10,[x11, #0x20]
7101d6edd0  ldrb w12,[x10]
7101d6edd4  cmp w12,#0xc
7101d6edd8  b.ne 0x7101d6ee5c
7101d6eddc  ldur w13,[x10, #0x1]
7101d6ede0  subs w14,w13,#0x1
7101d6ede4  b.lt 0x7101d6ee5c
7101d6ede8  ldr x13,[x8, #0x18]
7101d6edec  ldr x18,[x11, #0x18]
7101d6edf0  and x16,x13,#0xffffffffff
7101d6edf4  ldursw x13,[x10, #0x5]
7101d6edf8  ldp x17,x18,[x18, #0x20]
7101d6edfc  mov w15,wzr
7101d6ee00  add x18,x18,x13
7101d6ee04  adrp x13,0x7104742000
7101d6ee08  add x13,x13,#0xdbb
7101d6ee0c  add w0,w14,w15
7101d6ee10  cmp w0,#0x0
7101d6ee14  cinc w0,w0,lt
7101d6ee18  asr w0,w0,#0x1
7101d6ee1c  add x1,x18,w0, SXTW  #0x3
7101d6ee20  ldr w2,[x1]
7101d6ee24  ldr x2,[x17, x2, LSL #0x3]
7101d6ee28  cmp x2,x16
7101d6ee2c  b.eq 0x7101d6ee4c
7101d6ee30  sub w1,w0,#0x1
7101d6ee34  cmp x2,x16
7101d6ee38  csel w14,w1,w14,hi
7101d6ee3c  csinc w15,w15,w0,hi
7101d6ee40  cmp w15,w14
7101d6ee44  b.le 0x7101d6ee0c
7101d6ee48  b 0x7101d6ee64
7101d6ee4c  ldrsw x13,[x1, #0x4]
7101d6ee50  tbnz w13,#0x1f,0x7101d6ee5c
7101d6ee54  add x13,x10,x13
7101d6ee58  b 0x7101d6ee64
7101d6ee5c  adrp x13,0x7104742000
7101d6ee60  add x13,x13,#0xdbb
7101d6ee64  ldrb w14,[x13]
7101d6ee68  sub w14,w14,#0xb
7101d6ee6c  cmp w14,#0x1
7101d6ee70  b.hi 0x7101d6eefc
7101d6ee74  ldur w13,[x13, #0x1]
7101d6ee78  cmp w13,w9
7101d6ee7c  b.ls 0x7101d6eefc
7101d6ee80  cmp w12,#0xc
7101d6ee84  b.ne 0x7101d6f3e0
7101d6ee88  ldur w12,[x10, #0x1]
7101d6ee8c  subs w13,w12,#0x1
7101d6ee90  b.lt 0x7101d6f3e0
7101d6ee94  ldr x11,[x11, #0x18]
7101d6ee98  ldr x8,[x8, #0x18]
7101d6ee9c  mov w14,wzr
7101d6eea0  ldursw x12,[x10, #0x5]
7101d6eea4  and x8,x8,#0xffffffffff
7101d6eea8  ldp x15,x16,[x11, #0x20]
7101d6eeac  add x16,x16,x12
7101d6eeb0  adrp x12,0x7104742000
7101d6eeb4  add x12,x12,#0xdbb
7101d6eeb8  add w17,w13,w14
7101d6eebc  cmp w17,#0x0
7101d6eec0  cinc w17,w17,lt
7101d6eec4  asr w17,w17,#0x1
7101d6eec8  add x18,x16,w17, SXTW  #0x3
7101d6eecc  ldr w0,[x18]
7101d6eed0  ldr x0,[x15, x0, LSL #0x3]
7101d6eed4  cmp x0,x8
7101d6eed8  b.eq 0x7101d6f3d0
7101d6eedc  sub w18,w17,#0x1
7101d6eee0  cmp x0,x8
7101d6eee4  csel w13,w18,w13,hi
7101d6eee8  csinc w14,w14,w17,hi
7101d6eeec  cmp w14,w13
7101d6eef0  b.le 0x7101d6eeb8
7101d6eef4  mov x11,xzr
7101d6eef8  b 0x7101d6f3ec
7101d6eefc  strb wzr,[sp, #0x160]
7101d6ef00  str xzr,[sp, #0x158]
7101d6ef04  b 0x7101d6f590
7101d6ef08  mov w24,wzr
7101d6ef0c  add x0,sp,#0x158
7101d6ef10  str wzr,[sp, #0x1a0]
7101d6ef14  sbfiz x2,x24,#0x1,#0x20
7101d6ef18  mov x1,x20
7101d6ef1c  bl 0x71039c00e0
7101d6ef20  ldr x8,[sp, #0x198]
7101d6ef24  ldrsw x9,[sp, #0x1a0]
7101d6ef28  strh wzr,[x8, x9, LSL #0x1]
7101d6ef2c  ldr x21,[sp, #0x198]
7101d6ef30  ldr x8,[x19, #0x260]
7101d6ef34  ldr x0,[x8, #0x10]
7101d6ef38  mov x1,x21
7101d6ef3c  bl 0x710377a960
7101d6ef40  ldr x20,[sp, #0x8]
7101d6ef44  cbz x20,0x7101d6ef94
7101d6ef48  ldr x21,[sp, #0x10]
7101d6ef4c  cmp x21,x20
7101d6ef50  b.eq 0x7101d6f314
7101d6ef54  ldur x0,[x21, #-0x10]
7101d6ef58  sub x24,x21,#0x50
7101d6ef5c  cmp x24,x0
7101d6ef60  ccmp x0,#0x0,#0x4,ne
7101d6ef64  b.eq 0x7101d6ef6c
7101d6ef68  bl 0x710392eb40
7101d6ef6c  sturh wzr,[x21, #-0x50]
7101d6ef70  stur x24,[x21, #-0x10]
7101d6ef74  cmp x20,x24
7101d6ef78  stur wzr,[x21, #-0x8]
7101d6ef7c  mov x21,x24
7101d6ef80  b.ne 0x7101d6ef54
7101d6ef84  ldr x0,[sp, #0x8]
7101d6ef88  str x20,[sp, #0x10]
7101d6ef8c  cbz x0,0x7101d6ef94
7101d6ef90  bl 0x710392eb40
7101d6ef94  mov x0,x19
7101d6ef98  mov w1,wzr
7101d6ef9c  bl 0x7101d6f820
7101d6efa0  mov w2,#0x108
7101d6efa4  add x0,sp,#0x8
7101d6efa8  mov w1,wzr
7101d6efac  add x20,sp,#0x8
7101d6efb0  bl 0x71039c02a0
7101d6efb4  stp x23,xzr,[sp, #0x10]
7101d6efb8  add x8,x19,#0x360
7101d6efbc  strb wzr,[sp, #0x20]
7101d6efc0  ldp x9,x10,[sp, #0x8]
7101d6efc4  ldrb w12,[sp, #0x20]
7101d6efc8  add x21,x20,#0xb0
7101d6efcc  mov x11,xzr
7101d6efd0  cmp x8,x20
7101d6efd4  strb wzr,[sp, #0x30]
7101d6efd8  str xzr,[sp, #0x28]
7101d6efdc  strb wzr,[sp, #0x78]
7101d6efe0  str xzr,[sp, #0x70]
7101d6efe4  str x21,[sp, #0xf8]
7101d6efe8  str wzr,[sp, #0x100]
7101d6efec  str wzr,[sp, #0x108]
7101d6eff0  stp xzr,xzr,[sp, #0xe8]
7101d6eff4  stp xzr,xzr,[sp, #0xd8]
7101d6eff8  stp xzr,xzr,[sp, #0xc8]
7101d6effc  stp xzr,xzr,[sp, #0xb8]
7101d6f000  strb w12,[x19, #0x378]
7101d6f004  str x11,[x19, #0x370]
7101d6f008  str x10,[x19, #0x368]
7101d6f00c  str x9,[x19, #0x360]
7101d6f010  b.eq 0x7101d6f02c
7101d6f014  strb wzr,[x19, #0x388]
7101d6f018  str wzr,[x19, #0x384]
7101d6f01c  str w22,[x19, #0x380]
7101d6f020  strb wzr,[x19, #0x3d0]
7101d6f024  str wzr,[x19, #0x3cc]
7101d6f028  str w22,[x19, #0x3c8]
7101d6f02c  add x20,x19,#0x410
7101d6f030  cmp x20,x21
7101d6f034  b.eq 0x7101d6f070
7101d6f038  ldr x0,[x19, #0x450]
7101d6f03c  cmp x20,x0
7101d6f040  b.eq 0x7101d6f078
7101d6f044  cbz x0,0x7101d6f078
7101d6f048  bl 0x710392eb40
7101d6f04c  ldr x9,[sp, #0xf8]
7101d6f050  add x8,x19,#0x458
7101d6f054  str x20,[x19, #0x450]
7101d6f058  str wzr,[x19, #0x458]
7101d6f05c  cmp x9,x21
7101d6f060  strh wzr,[x19, #0x410]
7101d6f064  b.eq 0x7101d6f088
7101d6f068  str x9,[x19, #0x450]
7101d6f06c  b 0x7101d6f0a8
7101d6f070  mov w8,wzr
7101d6f074  b 0x7101d6f0c0
7101d6f078  add x8,x19,#0x458
7101d6f07c  strh wzr,[x19, #0x410]
7101d6f080  str x20,[x19, #0x450]
7101d6f084  str wzr,[x19, #0x458]
7101d6f088  ldp x9,x10,[x21]
7101d6f08c  ldp x11,x12,[x21, #0x10]
7101d6f090  stp x11,x12,[x20, #0x10]
7101d6f094  stp x9,x10,[x20]
7101d6f098  ldp x9,x10,[x21, #0x20]
7101d6f09c  ldp x11,x12,[x21, #0x30]
7101d6f0a0  stp x11,x12,[x20, #0x30]
7101d6f0a4  stp x9,x10,[x20, #0x20]
7101d6f0a8  ldr w9,[sp, #0x100]
7101d6f0ac  str w9,[x8]
7101d6f0b0  ldr w8,[sp, #0x108]
7101d6f0b4  str x21,[sp, #0xf8]
7101d6f0b8  strh wzr,[sp, #0xb8]
7101d6f0bc  str wzr,[sp, #0x100]
7101d6f0c0  str w8,[x19, #0x460]
7101d6f0c4  ldp x8,x9,[x29, #-0x68]
7101d6f0c8  ldurb w10,[x29, #-0x58]
7101d6f0cc  strb w10,[x19, #0x378]
7101d6f0d0  str x8,[x19, #0x368]
7101d6f0d4  add x8,x19,#0x380
7101d6f0d8  sub x10,x29,#0xf8
7101d6f0dc  cmp x8,x10
7101d6f0e0  str x9,[x19, #0x370]
7101d6f0e4  b.eq 0x7101d6f16c
7101d6f0e8  mov x9,xzr
7101d6f0ec  add x10,x10,#0x8
7101d6f0f0  b 0x7101d6f0fc
7101d6f0f4  add x9,x9,#0x2
7101d6f0f8  strb w11,[x12, #0x389]
7101d6f0fc  add x11,x10,x9
7101d6f100  ldrb w13,[x11]
7101d6f104  cbz w13,0x7101d6f130
7101d6f108  add w14,w9,#0x1
7101d6f10c  add x12,x19,x9
7101d6f110  cmp w14,#0x3f
7101d6f114  strb w13,[x12, #0x388]
7101d6f118  b.cs 0x7101d6f12c
7101d6f11c  ldrb w11,[x11, #0x1]
7101d6f120  cbnz w11,0x7101d6f0f4
7101d6f124  add x9,x9,#0x1
7101d6f128  b 0x7101d6f130
7101d6f12c  add w9,w9,#0x1
7101d6f130  add x10,x19,#0x388
7101d6f134  strb wzr,[x10, w9, UXTW ]
7101d6f138  str w9,[x19, #0x384]
7101d6f13c  ldrb w9,[x19, #0x388]
7101d6f140  mov w11,w22
7101d6f144  cbz w9,0x7101d6f168
7101d6f148  add x10,x19,#0x389
7101d6f14c  mov w12,#0x89
7101d6f150  mov w11,w22
7101d6f154  mul w11,w11,w12
7101d6f158  and w9,w9,#0xff
7101d6f15c  eor w11,w11,w9
7101d6f160  ldrb w9,[x10], #0x1
7101d6f164  cbnz w9,0x7101d6f154
7101d6f168  str w11,[x8]
7101d6f16c  add x8,x19,#0x3c8
7101d6f170  add x10,sp,#0x238
7101d6f174  cmp x8,x10
7101d6f178  b.eq 0x7101d6f1f8
7101d6f17c  mov x9,xzr
7101d6f180  add x10,x10,#0x8
7101d6f184  b 0x7101d6f190
7101d6f188  add x9,x9,#0x2
7101d6f18c  strb w11,[x12, #0x3d1]
7101d6f190  add x11,x10,x9
7101d6f194  ldrb w13,[x11]
7101d6f198  cbz w13,0x7101d6f1c4
7101d6f19c  add w14,w9,#0x1
7101d6f1a0  add x12,x19,x9
7101d6f1a4  cmp w14,#0x3f
7101d6f1a8  strb w13,[x12, #0x3d0]
7101d6f1ac  b.cs 0x7101d6f1c0
7101d6f1b0  ldrb w11,[x11, #0x1]
7101d6f1b4  cbnz w11,0x7101d6f188
7101d6f1b8  add x9,x9,#0x1
7101d6f1bc  b 0x7101d6f1c4
7101d6f1c0  add w9,w9,#0x1
7101d6f1c4  add x10,x19,#0x3d0
7101d6f1c8  strb wzr,[x10, w9, UXTW ]
7101d6f1cc  ldrb w10,[x19, #0x3d0]
7101d6f1d0  str w9,[x19, #0x3cc]
7101d6f1d4  cbz w10,0x7101d6f1f4
7101d6f1d8  add x9,x19,#0x3d1
7101d6f1dc  mov w11,#0x89
7101d6f1e0  mul w12,w22,w11
7101d6f1e4  and w10,w10,#0xff
7101d6f1e8  eor w22,w12,w10
7101d6f1ec  ldrb w10,[x9], #0x1
7101d6f1f0  cbnz w10,0x7101d6f1e0
7101d6f1f4  str w22,[x8]
7101d6f1f8  ldr x0,[x19, #0x450]
7101d6f1fc  ldr x21,[sp, #0x198]
7101d6f200  cmp x20,x0
7101d6f204  ldr w23,[sp, #0x1a0]
7101d6f208  b.eq 0x7101d6f214
7101d6f20c  cbz x0,0x7101d6f214
7101d6f210  bl 0x710392eb40
7101d6f214  strh wzr,[x19, #0x410]
7101d6f218  str x20,[x19, #0x450]
7101d6f21c  str wzr,[x19, #0x458]
7101d6f220  cbz x21,0x7101d6f348
7101d6f224  tbz w23,#0x1f,0x7101d6f290
7101d6f228  ldrh w10,[x21]
7101d6f22c  cbz w10,0x7101d6f324
7101d6f230  mov w8,wzr
7101d6f234  mov w23,wzr
7101d6f238  orr w9,wzr,#0x3
7101d6f23c  mov x11,x21
7101d6f240  orr w12,w10,#0x1
7101d6f244  and w12,w12,#0xffff
7101d6f248  cmp w12,#0xf
7101d6f24c  b.ne 0x7101d6f26c
7101d6f250  and w10,w10,#0xffff
7101d6f254  cmp w10,#0xe
7101d6f258  b.ne 0x7101d6f274
7101d6f25c  ldrh w10,[x11, #0x6]
7101d6f260  lsr w10,w10,#0x1
7101d6f264  add w10,w10,#0x4
7101d6f268  b 0x7101d6f27c
7101d6f26c  mov w10,#0x1
7101d6f270  b 0x7101d6f27c
7101d6f274  cmp w10,#0xf
7101d6f278  csel w10,w9,wzr,eq
7101d6f27c  add w8,w10,w8
7101d6f280  add x11,x21,w8, UXTW  #0x1
7101d6f284  add w23,w10,w23
7101d6f288  ldrh w10,[x11]
7101d6f28c  cbnz w10,0x7101d6f240
7101d6f290  cmp w23,#0x20
7101d6f294  str w23,[x19, #0x458]
7101d6f298  b.lt 0x7101d6f32c
7101d6f29c  add w8,w23,#0x1
7101d6f2a0  sxtw x8,w8
7101d6f2a4  adds x8,x8,x8
7101d6f2a8  csinv x8,x8,xzr,cc
7101d6f2ac  cmp x8,#0x0
7101d6f2b0  csinc x22,x8,xzr,ne
7101d6f2b4  mov w0,#0x10
7101d6f2b8  mov x1,x22
7101d6f2bc  bl 0x710392e290
7101d6f2c0  mov x20,x0
7101d6f2c4  cbnz x0,0x7101d6f30c
7101d6f2c8  adrp x8,0x7105332000
7101d6f2cc  ldr x0,[x8, #0xf00]
7101d6f2d0  cbz x0,0x7101d6f308
7101d6f2d4  stur wzr,[x29, #-0x50]
7101d6f2d8  str x22,[sp, #0x8]
7101d6f2dc  ldr x8,[x0]
7101d6f2e0  ldr x8,[x8, #0x30]
7101d6f2e4  sub x1,x29,#0x50
7101d6f2e8  add x2,sp,#0x8
7101d6f2ec  blr x8
7101d6f2f0  tbz w0,#0x0,0x7101d6f308
7101d6f2f4  mov w0,#0x10
7101d6f2f8  mov x1,x22
7101d6f2fc  bl 0x710392e290
7101d6f300  mov x20,x0
7101d6f304  cbnz x0,0x7101d6f30c
7101d6f308  mov x20,xzr
7101d6f30c  str x20,[x19, #0x450]
7101d6f310  b 0x7101d6f32c
7101d6f314  mov x0,x20
7101d6f318  str x20,[sp, #0x10]
7101d6f31c  cbnz x0,0x7101d6ef90
7101d6f320  b 0x7101d6ef94
7101d6f324  mov w23,wzr
7101d6f328  str wzr,[x19, #0x458]
7101d6f32c  sbfiz x2,x23,#0x1,#0x20
7101d6f330  mov x0,x20
7101d6f334  mov x1,x21
7101d6f338  bl 0x71039c00e0
7101d6f33c  ldr x8,[x19, #0x450]
7101d6f340  ldrsw x9,[x19, #0x458]
7101d6f344  strh wzr,[x8, x9, LSL #0x1]
7101d6f348  orr w8,wzr,#0x3
7101d6f34c  str w8,[x19, #0x460]
7101d6f350  mov w8,#0x1
7101d6f354  strb w8,[x19, #0x360]
7101d6f358  ldr x0,[sp, #0x198]
7101d6f35c  add x8,sp,#0x158
7101d6f360  cmp x8,x0
7101d6f364  b.eq 0x7101d6f370
7101d6f368  cbz x0,0x7101d6f370
7101d6f36c  bl 0x710392eb40
7101d6f370  add sp,sp,#0x380
7101d6f374  ldp x29,x30,[sp, #0x40]
7101d6f378  ldr x28,[sp, #0x8]
7101d6f37c  ldp x20,x19,[sp, #0x30]
7101d6f380  ldp x22,x21,[sp, #0x20]
7101d6f384  ldp x24,x23,[sp, #0x10]
7101d6f388  ldr d8,[sp], #0x50
7101d6f38c  ret
7101d6f390  cbz x14,0x7101d6f774
7101d6f394  cmp x11,x12
7101d6f398  mov x9,x11
7101d6f39c  b.cc 0x7101d6f3a8
7101d6f3a0  udiv x9,x11,x12
7101d6f3a4  msub x9,x9,x12,x11
7101d6f3a8  ldr x9,[x15, x9, LSL #0x3]
7101d6f3ac  ldr x9,[x9]
7101d6f3b0  ldr x12,[x9, #0x8]
7101d6f3b4  cmp x11,x12
7101d6f3b8  b.ne 0x7101d6f3ac
7101d6f3bc  ldr x12,[x9, #0x10]
7101d6f3c0  eor x12,x12,x10
7101d6f3c4  tst x12,#0xffffffffff
7101d6f3c8  b.ne 0x7101d6f3ac
7101d6f3cc  b 0x7101d6f79c
7101d6f3d0  ldrsw x8,[x18, #0x4]
7101d6f3d4  tbnz w8,#0x1f,0x7101d6f3e0
7101d6f3d8  add x12,x10,x8
7101d6f3dc  b 0x7101d6f3ec
7101d6f3e0  mov x11,xzr
7101d6f3e4  adrp x12,0x7104742000
7101d6f3e8  add x12,x12,#0xdbb
7101d6f3ec  mov x8,xzr
7101d6f3f0  adrp x10,0x7104742000
7101d6f3f4  add x10,x10,#0xdbb
7101d6f3f8  tbnz w9,#0x1f,0x7101d6f434
7101d6f3fc  ldrb w13,[x12]
7101d6f400  cmp w13,#0xb
7101d6f404  b.ne 0x7101d6f434
7101d6f408  ldur w8,[x12, #0x1]
7101d6f40c  cmp w8,w9
7101d6f410  b.le 0x7101d6f428
7101d6f414  add x8,x12,w9, SXTW  #0x2
7101d6f418  ldursw x8,[x8, #0x5]
7101d6f41c  add x10,x12,x8
7101d6f420  mov x8,x11
7101d6f424  b 0x7101d6f434
7101d6f428  mov x8,xzr
7101d6f42c  adrp x10,0x7104742000
7101d6f430  add x10,x10,#0xdbb
7101d6f434  ldrb w9,[x10]
7101d6f438  cmp w9,#0xc
7101d6f43c  b.ne 0x7101d6f4c4
7101d6f440  ldur w9,[x10, #0x1]
7101d6f444  subs w11,w9,#0x1
7101d6f448  b.lt 0x7101d6f4c4
7101d6f44c  ldursw x9,[x10, #0x5]
7101d6f450  ldp x13,x14,[x8, #0x20]
7101d6f454  mov x15,#0x2ad
7101d6f458  movk x15,#0xc081, LSL #16
7101d6f45c  mov w12,wzr
7101d6f460  add x14,x14,x9
7101d6f464  movk x15,#0xa, LSL #32
7101d6f468  adrp x9,0x7104742000
7101d6f46c  add x9,x9,#0xdbb
7101d6f470  add w16,w11,w12
7101d6f474  cmp w16,#0x0
7101d6f478  cinc w16,w16,lt
7101d6f47c  asr w16,w16,#0x1
7101d6f480  add x17,x14,w16, SXTW  #0x3
7101d6f484  ldr w18,[x17]
7101d6f488  ldr x18,[x13, x18, LSL #0x3]
7101d6f48c  cmp x18,x15
7101d6f490  b.eq 0x7101d6f4b4
7101d6f494  sub w17,w16,#0x1
7101d6f498  cmp x18,x15
7101d6f49c  csel w11,w17,w11,hi
7101d6f4a0  csinc w12,w12,w16,hi
7101d6f4a4  cmp w12,w11
7101d6f4a8  b.le 0x7101d6f470
7101d6f4ac  mov x8,xzr
7101d6f4b0  b 0x7101d6f4d0
7101d6f4b4  ldrsw x9,[x17, #0x4]
7101d6f4b8  tbnz w9,#0x1f,0x7101d6f4c4
7101d6f4bc  add x9,x10,x9
7101d6f4c0  b 0x7101d6f4d0
7101d6f4c4  mov x8,xzr
7101d6f4c8  adrp x9,0x7104742000
7101d6f4cc  add x9,x9,#0xdbb
7101d6f4d0  ldrb w10,[x9]
7101d6f4d4  cmp w10,#0xa
7101d6f4d8  b.ne 0x7101d6f4f8
7101d6f4dc  ldursw x9,[x9, #0x1]
7101d6f4e0  ldr x8,[x8, #0x28]
7101d6f4e4  add x9,x8,x9
7101d6f4e8  str xzr,[sp, #0x158]
7101d6f4ec  cbnz x9,0x7101d6f508
7101d6f4f0  mov w8,wzr
7101d6f4f4  b 0x7101d6f550
7101d6f4f8  adrp x9,0x7104867000
7101d6f4fc  add x9,x9,#0xc2e
7101d6f500  str xzr,[sp, #0x158]
7101d6f504  cbz x9,0x7101d6f4f0
7101d6f508  mov x8,xzr
7101d6f50c  add x10,sp,#0x158
7101d6f510  b 0x7101d6f51c
7101d6f514  add x8,x8,#0x2
7101d6f518  strb w11,[x12, #0x9]
7101d6f51c  add x11,x9,x8
7101d6f520  ldrb w13,[x11]
7101d6f524  cbz w13,0x7101d6f550
7101d6f528  add w14,w8,#0x1
7101d6f52c  add x12,x10,x8
7101d6f530  cmp w14,#0x3f
7101d6f534  strb w13,[x12, #0x8]
7101d6f538  b.cs 0x7101d6f54c
7101d6f53c  ldrb w11,[x11, #0x1]
7101d6f540  cbnz w11,0x7101d6f514
7101d6f544  add x8,x8,#0x1
7101d6f548  b 0x7101d6f550
7101d6f54c  add w8,w8,#0x1
7101d6f550  add x11,sp,#0x158
7101d6f554  add x9,x11,#0x8
7101d6f558  strb wzr,[x9, w8, UXTW ]
7101d6f55c  ldrb w10,[sp, #0x160]
7101d6f560  mov w9,#0x9dc5
7101d6f564  movk w9,#0x811c, LSL #16
7101d6f568  str w8,[sp, #0x15c]
7101d6f56c  cbz w10,0x7101d6f58c
7101d6f570  add x8,x11,#0x9
7101d6f574  mov w11,#0x89
7101d6f578  mul w9,w9,w11
7101d6f57c  and w10,w10,#0xff
7101d6f580  eor w9,w9,w10
7101d6f584  ldrb w10,[x8], #0x1
7101d6f588  cbnz w10,0x7101d6f578
7101d6f58c  str w9,[sp, #0x158]
7101d6f590  ldrb w8,[sp, #0x45]
7101d6f594  add x21,x22,#0x8
7101d6f598  add x0,x19,#0x218
7101d6f59c  cbz w8,0x7101d6f5c0
7101d6f5a0  add x8,sp,#0x8
7101d6f5a4  add x3,x8,#0x48
7101d6f5a8  adrp x1,0x710424f000
7101d6f5ac  add x1,x1,#0x873
7101d6f5b0  mov w2,#0x2
7101d6f5b4  mov w4,w20
7101d6f5b8  bl 0x7101d85d30
7101d6f5bc  b 0x7101d6f5d4
7101d6f5c0  adrp x1,0x7104291000
7101d6f5c4  add x1,x1,#0xf63
7101d6f5c8  mov w2,#0x1
7101d6f5cc  mov w3,w20
7101d6f5d0  bl 0x7101d85d30
7101d6f5d4  ldr x8,[x19, #0x220]
7101d6f5d8  ldr x8,[x8, #0x8]
7101d6f5dc  cbz x8,0x7101d6f6b0
7101d6f5e0  ldr x20,[x8, #0x78]
7101d6f5e4  adrp x8,0x710593b000
7101d6f5e8  add x8,x8,#0xa40
7101d6f5ec  ldarb w8,[x8]
7101d6f5f0  tbz w8,#0x0,0x7101d6f7a4
7101d6f5f4  cbz x20,0x7101d6f6b0
7101d6f5f8  ldr x8,[x20]
7101d6f5fc  ldr x8,[x8]
7101d6f600  mov x0,x20
7101d6f604  blr x8
7101d6f608  cbz x0,0x7101d6f6b0
7101d6f60c  adrp x8,0x710593b000
7101d6f610  add x8,x8,#0xa58
7101d6f614  cmp x0,x8
7101d6f618  b.eq 0x7101d6f628
7101d6f61c  ldr x0,[x0]
7101d6f620  cbnz x0,0x7101d6f614
7101d6f624  b 0x7101d6f6b0
7101d6f628  ldr w9,[x20, #0x54]
7101d6f62c  ldr x8,[x20, #0x18]
7101d6f630  str w9,[x20, #0x58]
7101d6f634  cbz x8,0x7101d6f648
7101d6f638  str w9,[x8, #0x30]
7101d6f63c  ldrb w9,[x8, #0x58]
7101d6f640  orr w9,w9,#0x10
7101d6f644  strb w9,[x8, #0x58]
7101d6f648  ldr x8,[x20, #0x20]
7101d6f64c  cbz x8,0x7101d6f664
7101d6f650  ldr w9,[x20, #0x58]
7101d6f654  str w9,[x8, #0x30]
7101d6f658  ldrb w9,[x8, #0x58]
7101d6f65c  orr w9,w9,#0x10
7101d6f660  strb w9,[x8, #0x58]
7101d6f664  ldr x0,[x20, #0x28]
7101d6f668  cbz x0,0x7101d6f67c
7101d6f66c  ldr x8,[x0]
7101d6f670  ldr x8,[x8, #0x180]
7101d6f674  fmov s0,wzr
7101d6f678  blr x8
7101d6f67c  ldr x0,[x20, #0x30]
7101d6f680  cbz x0,0x7101d6f6ac
7101d6f684  ldrb w8,[x20, #0x63]
7101d6f688  cbz w8,0x7101d6f69c
7101d6f68c  ldr x8,[x0]
7101d6f690  ldr x8,[x8, #0x190]
7101d6f694  blr x8
7101d6f698  b 0x7101d6f6ac
7101d6f69c  ldr x8,[x0]
7101d6f6a0  ldr x8,[x8, #0x180]
7101d6f6a4  fmov s0,wzr
7101d6f6a8  blr x8
7101d6f6ac  strh wzr,[x20, #0x64]
7101d6f6b0  adrp x1,0x7104454000
7101d6f6b4  add x1,x1,#0xde4
7101d6f6b8  sub x8,x29,#0xb0
7101d6f6bc  mov x0,x21
7101d6f6c0  str wzr,[x19, #0x468]
7101d6f6c4  bl 0x7103776910
7101d6f6c8  adrp x8,0x710523d000
7101d6f6cc  ldr w8,[x8, #0xc]
7101d6f6d0  cbnz w8,0x7101d6f718
7101d6f6d4  add x8,sp,#0x158
7101d6f6d8  add x20,x8,#0x8
7101d6f6dc  adrp x8,0x710593b000
7101d6f6e0  ldr x8,[x8, #0xc60]
7101d6f6e4  ldr x0,[x8]
7101d6f6e8  mov x1,x20
7101d6f6ec  bl 0x71037a4570
7101d6f6f0  tbz w0,#0x0,0x7101d6f718
7101d6f6f4  adrp x1,0x71042f8000
7101d6f6f8  add x1,x1,#0x68b
7101d6f6fc  sub x0,x29,#0xb0
7101d6f700  mov w2,#0x1
7101d6f704  mov x3,x20
7101d6f708  bl 0x710377a280
7101d6f70c  ldrb w8,[x19, #0x35d]
7101d6f710  cbnz w8,0x7101d6f75c
7101d6f714  b 0x7101d6f740
7101d6f718  ldur x8,[x29, #-0xa8]
7101d6f71c  ldr x0,[x8, #0x10]
7101d6f720  cbz x0,0x7101d6f738
7101d6f724  sub x1,x29,#0xf8
7101d6f728  mov w2,wzr
7101d6f72c  mov w3,wzr
7101d6f730  stur wzr,[x29, #-0xf8]
7101d6f734  bl 0x71037a2270
7101d6f738  ldrb w8,[x19, #0x35d]
7101d6f73c  cbnz w8,0x7101d6f75c
7101d6f740  ldr x0,[x22, #0x10]
7101d6f744  fmov s0,0x3f800000
7101d6f748  adrp x1,0x71043f0000
7101d6f74c  add x1,x1,#0xcdf
7101d6f750  bl 0x7103778300
7101d6f754  mov w8,#0x1
7101d6f758  strb w8,[x19, #0x35d]
7101d6f75c  ldur x0,[x29, #-0xa8]
7101d6f760  adrp x8,0x710523d000
7101d6f764  add x8,x8,#0x9a8
7101d6f768  stp x8,xzr,[x29, #-0xb0]
7101d6f76c  cbnz x0,0x7101d6f36c
7101d6f770  b 0x7101d6f370
7101d6f774  and x9,x13,x11
7101d6f778  ldr x9,[x15, x9, LSL #0x3]
7101d6f77c  ldr x9,[x9]
7101d6f780  ldr x12,[x9, #0x8]
7101d6f784  cmp x11,x12
7101d6f788  b.ne 0x7101d6f77c
7101d6f78c  ldr x12,[x9, #0x10]
7101d6f790  eor x12,x12,x10
7101d6f794  tst x12,#0xffffffffff
7101d6f798  b.ne 0x7101d6f77c
7101d6f79c  ldr w9,[x9, #0x18]
7101d6f7a0  b 0x7101d6edc8
7101d6f7a4  adrp x0,0x710593b000
7101d6f7a8  add x0,x0,#0xa40
7101d6f7ac  bl 0x71039c06b0
7101d6f7b0  cbz w0,0x7101d6f5f4
7101d6f7b4  adrp x8,0x710593b000
7101d6f7b8  add x8,x8,#0xa48
7101d6f7bc  ldarb w8,[x8]
7101d6f7c0  tbz w8,#0x0,0x7101d6f7f0
7101d6f7c4  adrp x8,0x710593b000
7101d6f7c8  adrp x9,0x710593b000
7101d6f7cc  add x9,x9,#0xa50
7101d6f7d0  adrp x0,0x710593b000
7101d6f7d4  add x0,x0,#0xa40
7101d6f7d8  str x9,[x8, #0xa58]
7101d6f7dc  bl 0x71039c06c0
7101d6f7e0  cbnz x20,0x7101d6f5f8
7101d6f7e4  b 0x7101d6f6b0
7101d6f7e8  add x0,sp,#0x8
7101d6f7ec  bl 0x71039c1330
7101d6f7f0  adrp x0,0x710593b000
7101d6f7f4  add x0,x0,#0xa48
7101d6f7f8  bl 0x71039c06b0
7101d6f7fc  cbz w0,0x7101d6f7c4
7101d6f800  adrp x8,0x710593b000
7101d6f804  adrp x0,0x710593b000
7101d6f808  add x0,x0,#0xa48
7101d6f80c  str xzr,[x8, #0xa50]
7101d6f810  bl 0x71039c06c0
7101d6f814  b 0x7101d6f7c4
