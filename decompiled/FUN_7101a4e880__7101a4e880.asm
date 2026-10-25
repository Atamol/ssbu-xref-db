// addr:      7101a4e880
// offset:    0x1a4e880
// name:      FUN_7101a4e880
// mangled:   
// size:      19976

7101a4e880  str d10,[sp, #-0x80]!
7101a4e884  stp d9,d8,[sp, #0x10]
7101a4e888  stp x28,x27,[sp, #0x20]
7101a4e88c  stp x26,x25,[sp, #0x30]
7101a4e890  stp x24,x23,[sp, #0x40]
7101a4e894  stp x22,x21,[sp, #0x50]
7101a4e898  stp x20,x19,[sp, #0x60]
7101a4e89c  stp x29,x30,[sp, #0x70]
7101a4e8a0  add x29,sp,#0x70
7101a4e8a4  sub sp,sp,#0x510
7101a4e8a8  ldr w8,[x0, #0xdc]
7101a4e8ac  mov x19,x0
7101a4e8b0  cbz w8,0x7101a4e940
7101a4e8b4  mov w8,#0xffffffff
7101a4e8b8  str w8,[x19, #0x26c]
7101a4e8bc  ldr w8,[x19, #0xf0]
7101a4e8c0  cbz w8,0x7101a4e9c4
7101a4e8c4  cbnz w8,0x7101a51b64
7101a4e8c8  ldr x8,[x19, #0x218]
7101a4e8cc  ldr x9,[x19, #0x220]
7101a4e8d0  cmp x8,x9
7101a4e8d4  b.eq 0x7101a4eaa4
7101a4e8d8  mov w21,wzr
7101a4e8dc  ldr x10,[x8, #0x8]
7101a4e8e0  ldrb w11,[x10, #0x36]
7101a4e8e4  cbz w11,0x7101a4e930
7101a4e8e8  ldr x10,[x10, #0x10]
7101a4e8ec  ldr x10,[x10, #0x8]
7101a4e8f0  ldr w12,[x19, #0x268]
7101a4e8f4  ldrb w11,[x10, #0x4aa]
7101a4e8f8  cbz w11,0x7101a4e918
7101a4e8fc  ldr w13,[x10, #0x344]
7101a4e900  cmp w12,w13
7101a4e904  b.gt 0x7101a4e930
7101a4e908  cbz w11,0x7101a4e928
7101a4e90c  ldrb w10,[x10, #0x278]
7101a4e910  ubfx w10,w10,#0x4,#0x1
7101a4e914  b 0x7101a4e92c
7101a4e918  mov w13,wzr
7101a4e91c  cmp w12,w13
7101a4e920  b.le 0x7101a4e908
7101a4e924  b 0x7101a4e930
7101a4e928  mov w10,wzr
7101a4e92c  orr w21,w21,w10
7101a4e930  add x8,x8,#0x10
7101a4e934  cmp x9,x8
7101a4e938  b.ne 0x7101a4e8dc
7101a4e93c  b 0x7101a4eaa8
7101a4e940  ldr x8,[x19, #0xf8]
7101a4e944  ldr x8,[x8]
7101a4e948  ldr x0,[x8]
7101a4e94c  mov w1,#0x1
7101a4e950  bl 0x71037760f0
7101a4e954  ldr x9,[x19, #0x250]
7101a4e958  ldrb w8,[x9, #0x4f9]
7101a4e95c  cbz w8,0x7101a4e8b4
7101a4e960  ldp x8,x9,[x9, #0xa8]
7101a4e964  cmp x8,x9
7101a4e968  b.eq 0x7101a4e9a8
7101a4e96c  mov x10,#-0x3f00000000000000
7101a4e970  ldrb w11,[x8, #0x3ed]
7101a4e974  cbz w11,0x7101a4e8b4
7101a4e978  ldr x11,[x8, #0x20]
7101a4e97c  and x12,x11,#0xffffffffff
7101a4e980  and x11,x11,#-0x100000000000000
7101a4e984  cmp x11,x10
7101a4e988  ccmp x12,#0x0,#0x4,eq
7101a4e98c  b.eq 0x7101a4e8b4
7101a4e990  ldr w11,[x8, #0x3e8]
7101a4e994  cmp w11,#0x6
7101a4e998  b.ne 0x7101a4e8b4
7101a4e99c  add x8,x8,#0x3f0
7101a4e9a0  cmp x9,x8
7101a4e9a4  b.ne 0x7101a4e970
7101a4e9a8  ldr x8,[x19, #0x238]
7101a4e9ac  ldr x1,[x19, #0x230]
7101a4e9b0  cmp x8,x1
7101a4e9b4  b.eq 0x7101a53668
7101a4e9b8  mov x0,x19
7101a4e9bc  bl 0x7101a54a30
7101a4e9c0  b 0x7101a4e8b4
7101a4e9c4  ldr x8,[x19, #0x158]
7101a4e9c8  strb wzr,[x8, #0x2c]
7101a4e9cc  ldr x8,[x19, #0x168]
7101a4e9d0  strb wzr,[x8, #0x2c]
7101a4e9d4  ldr x8,[x19, #0x178]
7101a4e9d8  strb wzr,[x8, #0x2c]
7101a4e9dc  str xzr,[sp, #0x218]
7101a4e9e0  str xzr,[sp, #0x210]
7101a4e9e4  str xzr,[sp, #0x208]
7101a4e9e8  ldr x24,[x19, #0x220]
7101a4e9ec  ldr x25,[x19, #0x218]
7101a4e9f0  orr x28,xzr,#0x5555555555555555
7101a4e9f4  movk x28,#0x555, LSL #48
7101a4e9f8  subs x8,x24,x25
7101a4e9fc  b.eq 0x7101a4ea80
7101a4ea00  asr x21,x8,#0x4
7101a4ea04  cmp x21,x28
7101a4ea08  b.hi 0x7101a53644
7101a4ea0c  add x8,x21,x21, LSL #0x1
7101a4ea10  lsl x8,x8,#0x4
7101a4ea14  cmp x8,#0x0
7101a4ea18  csinc x20,x8,xzr,ne
7101a4ea1c  mov w0,#0x10
7101a4ea20  mov x1,x20
7101a4ea24  bl 0x710392e290
7101a4ea28  cbnz x0,0x7101a4ea6c
7101a4ea2c  adrp x8,0x7105332000
7101a4ea30  ldr x0,[x8, #0xf00]
7101a4ea34  cbz x0,0x7101a4ea68
7101a4ea38  stur wzr,[x29, #-0xf8]
7101a4ea3c  stur x20,[x29, #-0xb8]
7101a4ea40  ldr x8,[x0]
7101a4ea44  ldr x8,[x8, #0x30]
7101a4ea48  sub x1,x29,#0xf8
7101a4ea4c  sub x2,x29,#0xb8
7101a4ea50  blr x8
7101a4ea54  tbz w0,#0x0,0x7101a4ea68
7101a4ea58  mov w0,#0x10
7101a4ea5c  mov x1,x20
7101a4ea60  bl 0x710392e290
7101a4ea64  cbnz x0,0x7101a4ea6c
7101a4ea68  mov x0,xzr
7101a4ea6c  orr w8,wzr,#0x30
7101a4ea70  madd x8,x21,x8,x0
7101a4ea74  str x0,[sp, #0x208]
7101a4ea78  str x0,[sp, #0x210]
7101a4ea7c  str x8,[sp, #0x218]
7101a4ea80  cmp x25,x24
7101a4ea84  b.eq 0x7101a4ee04
7101a4ea88  adrp x8,0x7104472000
7101a4ea8c  ldr s8,[x8, #0x8b8]
7101a4ea90  adrp x8,0x7104472000
7101a4ea94  ldr s9,[x8, #0x4c4]
7101a4ea98  orr x22,xzr,#-0x5555555555555556
7101a4ea9c  movk x22,#0xaaab
7101a4eaa0  b 0x7101a4ebb0
7101a4eaa4  mov w21,wzr
7101a4eaa8  ldrb w8,[x19, #0x2db]
7101a4eaac  and w9,w21,#0x1
7101a4eab0  mov w23,#0x6500
7101a4eab4  movk w23,#0x87, LSL #16
7101a4eab8  cmp w8,w9
7101a4eabc  b.eq 0x7101a4f260
7101a4eac0  ldr x8,[x19, #0x118]
7101a4eac4  ldr x0,[x8]
7101a4eac8  tbz w21,#0x0,0x7101a4f190
7101a4eacc  cbz x0,0x7101a4eae0
7101a4ead0  ldr x8,[x0]
7101a4ead4  ldr x8,[x8, #0x320]
7101a4ead8  mov w1,#0x1
7101a4eadc  blr x8
7101a4eae0  ldr w8,[x19, #0x2a0]
7101a4eae4  cmn w8,#0x1
7101a4eae8  b.ne 0x7101a4f258
7101a4eaec  ldr w8,[x19, #0x2a4]
7101a4eaf0  cmn w8,#0x1
7101a4eaf4  b.ne 0x7101a4f258
7101a4eaf8  adrp x8,0x710532f000
7101a4eafc  ldr x8,[x8, #0x8d0]
7101a4eb00  ldr x0,[x8, #0x8]
7101a4eb04  ldrb w8,[x0, #0x191]
7101a4eb08  add x22,x19,#0x2a0
7101a4eb0c  cbnz w8,0x7101a52558
7101a4eb10  mov x20,#0x90f3
7101a4eb14  movk x20,#0x29a, LSL #16
7101a4eb18  movk x20,#0x1a, LSL #32
7101a4eb1c  mov w2,#0x4
7101a4eb20  mov x1,x20
7101a4eb24  bl 0x7103313f20
7101a4eb28  tbz w0,#0x0,0x7101a52558
7101a4eb2c  add x0,sp,#0x208
7101a4eb30  mov x1,x20
7101a4eb34  bl 0x71024076d0
7101a4eb38  ldr w9,[sp, #0x208]
7101a4eb3c  ldr x8,[sp, #0x218]
7101a4eb40  str w9,[x19, #0x278]
7101a4eb44  cbz x8,0x7101a5258c
7101a4eb48  ldr w9,[x19, #0x294]
7101a4eb4c  cmp w9,w23
7101a4eb50  b.ne 0x7101a535f0
7101a4eb54  adrp x9,0x7106dd5000
7101a4eb58  ldr w9,[x9, #0x3ac]
7101a4eb5c  ldr w10,[x19, #0x290]
7101a4eb60  cmp w10,w9
7101a4eb64  b.ne 0x7101a53614
7101a4eb68  ldr x10,[x19, #0x288]
7101a4eb6c  add x9,x19,#0x288
7101a4eb70  cbz x10,0x7101a4eb98
7101a4eb74  adrp x11,0x7106dd5000
7101a4eb78  ldrb w11,[x11, #0x3a8]
7101a4eb7c  cmp w11,#0x1
7101a4eb80  b.ne 0x7101a4eb98
7101a4eb84  ldr wzr,[x10, #0x38]!
7101a4eb88  ldaxr w11,[x10]
7101a4eb8c  sub w11,w11,#0x1
7101a4eb90  stlxr w12,w11,[x10]
7101a4eb94  cbnz w12,0x7101a4eb88
7101a4eb98  str xzr,[x19, #0x288]
7101a4eb9c  add x10,x19,#0x298
7101a4eba0  strb wzr,[x19, #0x298]
7101a4eba4  b 0x7101a53620
7101a4eba8  mov x0,xzr
7101a4ebac  b 0x7101a4ed6c
7101a4ebb0  ldr x8,[x25, #0x8]
7101a4ebb4  ldr x9,[x8, #0x20]
7101a4ebb8  ldr x10,[x9, #0x100]
7101a4ebbc  ldr q0,[x10, #0x60]
7101a4ebc0  ldr x10,[x19, #0x260]
7101a4ebc4  ldr s2,[x10, #0xbf0]
7101a4ebc8  dup s1,v0.S[0x1]
7101a4ebcc  fcmp s2,s0
7101a4ebd0  b.lt 0x7101a4ec04
7101a4ebd4  ldr s2,[x10, #0xbec]
7101a4ebd8  fcmp s2,s0
7101a4ebdc  b.hi 0x7101a4ec04
7101a4ebe0  ldr s2,[x10, #0xbf8]
7101a4ebe4  fcmp s2,s1
7101a4ebe8  b.lt 0x7101a4ec04
7101a4ebec  ldr s2,[x10, #0xbf4]
7101a4ebf0  fcmp s2,s1
7101a4ebf4  b.hi 0x7101a4ec04
7101a4ebf8  ldr w10,[x8, #0x2c]
7101a4ebfc  cmn w10,#0x1
7101a4ec00  b.ne 0x7101a4edf8
7101a4ec04  ldrb w10,[x8, #0x36]
7101a4ec08  cbz w10,0x7101a4edf8
7101a4ec0c  ldrb w9,[x9, #0x165]
7101a4ec10  cbnz w9,0x7101a4edf8
7101a4ec14  ldr x9,[x8, #0x10]
7101a4ec18  ldr x9,[x9, #0x8]
7101a4ec1c  ldr w10,[x9, #0x484]
7101a4ec20  cbz w10,0x7101a4ec2c
7101a4ec24  mov w10,#0x1
7101a4ec28  b 0x7101a4ec38
7101a4ec2c  ldr w10,[x9, #0x488]
7101a4ec30  cmn w10,#0x1
7101a4ec34  cset w10,ne
7101a4ec38  ldrb w11,[x9, #0x4aa]
7101a4ec3c  cmp w11,#0x0
7101a4ec40  ccmp w10,#0x0,#0x4,ne
7101a4ec44  b.ne 0x7101a4ec50
7101a4ec48  mov w26,wzr
7101a4ec4c  b 0x7101a4ec60
7101a4ec50  ldrb w9,[x9, #0x1a8]
7101a4ec54  tst w9,#0x2
7101a4ec58  mov w9,#0x1
7101a4ec5c  cinc w26,w9,ne
7101a4ec60  fadd s0,s0,s8
7101a4ec64  movi v2.2D,#0x0
7101a4ec68  fsub s1,s9,s1
7101a4ec6c  mov v2.S[0x0],v0.S[0x0]
7101a4ec70  ldr w23,[x8, #0x28]
7101a4ec74  mov v2.S[0x1],v1.S[0x0]
7101a4ec78  ldr x8,[sp, #0x210]
7101a4ec7c  ldr x9,[sp, #0x218]
7101a4ec80  cmp x8,x9
7101a4ec84  b.eq 0x7101a4ecb8
7101a4ec88  str w26,[x8]
7101a4ec8c  ldur x9,[x29, #-0xb8]
7101a4ec90  ldur w10,[x29, #-0xb0]
7101a4ec94  str q2,[x8, #0x10]
7101a4ec98  stur x9,[x8, #0x4]
7101a4ec9c  mov x9,#-0x1
7101a4eca0  str w10,[x8, #0xc]
7101a4eca4  stp wzr,w23,[x8, #0x20]
7101a4eca8  str x9,[x8, #0x28]
7101a4ecac  add x8,x8,#0x30
7101a4ecb0  str x8,[sp, #0x210]
7101a4ecb4  b 0x7101a4edf8
7101a4ecb8  ldr x20,[sp, #0x208]
7101a4ecbc  sub x21,x8,x20
7101a4ecc0  asr x8,x21,#0x4
7101a4ecc4  mul x27,x8,x22
7101a4ecc8  add x8,x27,#0x1
7101a4eccc  cmp x8,x28
7101a4ecd0  b.hi 0x7101a53658
7101a4ecd4  sub x9,x9,x20
7101a4ecd8  asr x9,x9,#0x4
7101a4ecdc  mul x9,x9,x22
7101a4ece0  orr x10,xzr,#-0x5555555555555556
7101a4ece4  movk x10,#0xaaa9
7101a4ece8  movk x10,#0x2aa, LSL #48
7101a4ecec  cmp x9,x10
7101a4ecf0  b.hi 0x7101a4ed04
7101a4ecf4  lsl x9,x9,#0x1
7101a4ecf8  cmp x9,x8
7101a4ecfc  csel x28,x8,x9,cc
7101a4ed00  cbz x28,0x7101a4eba8
7101a4ed04  add x8,x28,x28, LSL #0x1
7101a4ed08  mov w0,#0x10
7101a4ed0c  lsl x8,x8,#0x4
7101a4ed10  str q2,[sp, #0xb0]
7101a4ed14  cmp x8,#0x0
7101a4ed18  csinc x22,x8,xzr,ne
7101a4ed1c  mov x1,x22
7101a4ed20  bl 0x710392e290
7101a4ed24  cbnz x0,0x7101a4ed68
7101a4ed28  adrp x8,0x7105332000
7101a4ed2c  ldr x0,[x8, #0xf00]
7101a4ed30  cbz x0,0x7101a4ed64
7101a4ed34  stur wzr,[x29, #-0xf8]
7101a4ed38  stur x22,[x29, #-0xb8]
7101a4ed3c  ldr x8,[x0]
7101a4ed40  ldr x8,[x8, #0x30]
7101a4ed44  sub x1,x29,#0xf8
7101a4ed48  sub x2,x29,#0xb8
7101a4ed4c  blr x8
7101a4ed50  tbz w0,#0x0,0x7101a4ed64
7101a4ed54  mov w0,#0x10
7101a4ed58  mov x1,x22
7101a4ed5c  bl 0x710392e290
7101a4ed60  cbnz x0,0x7101a4ed68
7101a4ed64  mov x0,xzr
7101a4ed68  ldr q2,[sp, #0xb0]
7101a4ed6c  orr w11,wzr,#0x30
7101a4ed70  madd x8,x27,x11,x0
7101a4ed74  madd x27,x28,x11,x0
7101a4ed78  str w26,[x8]
7101a4ed7c  ldur x9,[x29, #-0xb8]
7101a4ed80  ldur w10,[x29, #-0xb0]
7101a4ed84  stur x9,[x8, #0x4]
7101a4ed88  mov x9,#-0x1
7101a4ed8c  str x9,[x8, #0x28]
7101a4ed90  orr x9,xzr,#0x5555555555555555
7101a4ed94  movk x9,#0xd555, LSL #48
7101a4ed98  smulh x9,x21,x9
7101a4ed9c  str w10,[x8, #0xc]
7101a4eda0  asr x10,x9,#0x3
7101a4eda4  add x9,x10,x9, LSR #0x3f
7101a4eda8  str q2,[x8, #0x10]
7101a4edac  madd x22,x9,x11,x8
7101a4edb0  stp wzr,w23,[x8, #0x20]
7101a4edb4  add x23,x8,#0x30
7101a4edb8  cmp x21,#0x1
7101a4edbc  b.lt 0x7101a4edd0
7101a4edc0  mov x0,x22
7101a4edc4  mov x1,x20
7101a4edc8  mov x2,x21
7101a4edcc  bl 0x71039c00e0
7101a4edd0  str x22,[sp, #0x208]
7101a4edd4  orr x28,xzr,#0x5555555555555555
7101a4edd8  orr x22,xzr,#-0x5555555555555556
7101a4eddc  movk x28,#0x555, LSL #48
7101a4ede0  movk x22,#0xaaab
7101a4ede4  str x23,[sp, #0x210]
7101a4ede8  str x27,[sp, #0x218]
7101a4edec  cbz x20,0x7101a4edf8
7101a4edf0  mov x0,x20
7101a4edf4  bl 0x710392eb40
7101a4edf8  add x25,x25,#0x10
7101a4edfc  cmp x24,x25
7101a4ee00  b.ne 0x7101a4ebb0
7101a4ee04  ldr x0,[x19, #0x180]
7101a4ee08  add x1,sp,#0x208
7101a4ee0c  add x20,x19,#0x180
7101a4ee10  bl 0x710376e720
7101a4ee14  ldr x21,[sp, #0x208]
7101a4ee18  ldr x24,[sp, #0x210]
7101a4ee1c  mov w25,#0x1
7101a4ee20  cmp x21,x24
7101a4ee24  b.eq 0x7101a4f174
7101a4ee28  add x22,x19,#0x218
7101a4ee2c  mov w23,#0x1
7101a4ee30  ldr w8,[x21, #0x28]
7101a4ee34  cmn w8,#0x1
7101a4ee38  b.eq 0x7101a4ee88
7101a4ee3c  ldr x10,[x19, #0x220]
7101a4ee40  ldr x9,[x19, #0x218]
7101a4ee44  sub x10,x10,x9
7101a4ee48  ldrsw x8,[x21, #0x24]
7101a4ee4c  asr x10,x10,#0x4
7101a4ee50  cmp x10,x8
7101a4ee54  b.ls 0x7101a5363c
7101a4ee58  add x8,x9,x8, LSL #0x4
7101a4ee5c  ldr x8,[x8, #0x8]
7101a4ee60  ldr x8,[x8, #0x20]
7101a4ee64  strb w25,[x8, #0x165]
7101a4ee68  ldrb w8,[x19, #0x2dc]
7101a4ee6c  cbnz w8,0x7101a4ee88
7101a4ee70  ldrsw x8,[x21, #0x28]
7101a4ee74  cmp w8,#0x3
7101a4ee78  b.cs 0x7101a53644
7101a4ee7c  add x8,x19,x8, LSL #0x4
7101a4ee80  ldr x8,[x8, #0x158]
7101a4ee84  strb w25,[x8, #0x2c]
7101a4ee88  ldr w8,[x21, #0x2c]
7101a4ee8c  cmn w8,#0x1
7101a4ee90  b.eq 0x7101a4ef40
7101a4ee94  cmp w8,#0x2
7101a4ee98  b.ne 0x7101a4ef10
7101a4ee9c  ldr x8,[x20]
7101a4eea0  ldr x9,[x8, #0x1b8]
7101a4eea4  cbz x9,0x7101a4ef10
7101a4eea8  add x10,x8,#0x1b8
7101a4eeac  mov x8,x10
7101a4eeb0  ldr w11,[x9, #0x20]
7101a4eeb4  cmp w11,#0x2
7101a4eeb8  cset w11,lt
7101a4eebc  csel x8,x8,x9,lt
7101a4eec0  ldr x9,[x9, w11, UXTW #0x3]
7101a4eec4  cbnz x9,0x7101a4eeb0
7101a4eec8  cmp x8,x10
7101a4eecc  b.eq 0x7101a4ef10
7101a4eed0  ldr w9,[x8, #0x20]
7101a4eed4  cmp w9,#0x2
7101a4eed8  b.gt 0x7101a4ef10
7101a4eedc  ldr x23,[x8, #0x28]
7101a4eee0  cbz x23,0x7101a4ef10
7101a4eee4  ldr x8,[x23]
7101a4eee8  ldr x8,[x8, #0x1f8]
7101a4eeec  mov x0,x23
7101a4eef0  mov w1,wzr
7101a4eef4  blr x8
7101a4eef8  ldr x8,[x23]
7101a4eefc  ldr x8,[x8, #0x388]
7101a4ef00  mov w1,#0x1
7101a4ef04  mov x0,x23
7101a4ef08  mov w2,wzr
7101a4ef0c  blr x8
7101a4ef10  ldr x10,[x19, #0x220]
7101a4ef14  ldr x9,[x19, #0x218]
7101a4ef18  sub x10,x10,x9
7101a4ef1c  ldrsw x8,[x21, #0x24]
7101a4ef20  asr x10,x10,#0x4
7101a4ef24  cmp x10,x8
7101a4ef28  b.ls 0x7101a5363c
7101a4ef2c  add x8,x9,x8, LSL #0x4
7101a4ef30  ldr x8,[x8, #0x8]
7101a4ef34  ldr x0,[x8, #0x20]
7101a4ef38  bl 0x71032d3260
7101a4ef3c  mov w23,wzr
7101a4ef40  add x21,x21,#0x30
7101a4ef44  cmp x21,x24
7101a4ef48  b.ne 0x7101a4ee30
7101a4ef4c  ldr x21,[sp, #0x208]
7101a4ef50  cbz x21,0x7101a4ef60
7101a4ef54  mov x0,x21
7101a4ef58  str x21,[sp, #0x210]
7101a4ef5c  bl 0x710392eb40
7101a4ef60  ldr x0,[x19, #0x158]
7101a4ef64  bl 0x71032d6e10
7101a4ef68  ldr x0,[x19, #0x168]
7101a4ef6c  bl 0x71032d6e10
7101a4ef70  ldr x0,[x19, #0x178]
7101a4ef74  bl 0x71032d6e10
7101a4ef78  ldr x8,[x19, #0x180]
7101a4ef7c  ldr w21,[x8, #0x25c]
7101a4ef80  ldr x22,[x19, #0x218]
7101a4ef84  ldr x24,[x19, #0x220]
7101a4ef88  cmp x22,x24
7101a4ef8c  b.eq 0x7101a4f0b8
7101a4ef90  tbz w23,#0x0,0x7101a4efcc
7101a4ef94  ldr x8,[x22, #0x8]
7101a4ef98  ldrb w9,[x8, #0x36]
7101a4ef9c  cbz w9,0x7101a4efe0
7101a4efa0  ldr x8,[x8, #0x10]
7101a4efa4  ldr x8,[x8, #0x8]
7101a4efa8  ldrb w9,[x8, #0x4aa]
7101a4efac  cbz w9,0x7101a4eff4
7101a4efb0  ldrb w8,[x8, #0x1b0]
7101a4efb4  tbnz w8,#0x1,0x7101a4f008
7101a4efb8  mov w23,#0x1
7101a4efbc  add x22,x22,#0x10
7101a4efc0  cmp x22,x24
7101a4efc4  b.ne 0x7101a4ef90
7101a4efc8  b 0x7101a4f0b8
7101a4efcc  mov w23,wzr
7101a4efd0  add x22,x22,#0x10
7101a4efd4  cmp x22,x24
7101a4efd8  b.ne 0x7101a4ef90
7101a4efdc  b 0x7101a4f0b8
7101a4efe0  mov w23,#0x1
7101a4efe4  add x22,x22,#0x10
7101a4efe8  cmp x22,x24
7101a4efec  b.ne 0x7101a4ef90
7101a4eff0  b 0x7101a4f0b8
7101a4eff4  mov w23,#0x1
7101a4eff8  add x22,x22,#0x10
7101a4effc  cmp x22,x24
7101a4f000  b.ne 0x7101a4ef90
7101a4f004  b 0x7101a4f0b8
7101a4f008  mov w1,#0x2
7101a4f00c  mov x0,x20
7101a4f010  mov w2,wzr
7101a4f014  mov w21,#0x2
7101a4f018  bl 0x7103771be0
7101a4f01c  ldr x8,[x20]
7101a4f020  ldr x9,[x8, #0x1b8]
7101a4f024  cbz x9,0x7101a4f0a8
7101a4f028  add x10,x8,#0x1b8
7101a4f02c  mov x8,x10
7101a4f030  ldr w11,[x9, #0x20]
7101a4f034  cmp w11,#0x2
7101a4f038  cset w11,lt
7101a4f03c  csel x8,x8,x9,lt
7101a4f040  ldr x9,[x9, w11, UXTW #0x3]
7101a4f044  cbnz x9,0x7101a4f030
7101a4f048  cmp x8,x10
7101a4f04c  b.eq 0x7101a4f090
7101a4f050  ldr w9,[x8, #0x20]
7101a4f054  cmp w9,#0x2
7101a4f058  b.gt 0x7101a4f090
7101a4f05c  ldr x21,[x8, #0x28]
7101a4f060  cbz x21,0x7101a4f090
7101a4f064  ldr x8,[x21]
7101a4f068  ldr x8,[x8, #0x1f8]
7101a4f06c  mov x0,x21
7101a4f070  mov w1,wzr
7101a4f074  blr x8
7101a4f078  ldr x8,[x21]
7101a4f07c  ldr x8,[x8, #0x388]
7101a4f080  mov w1,#0x1
7101a4f084  mov x0,x21
7101a4f088  mov w2,wzr
7101a4f08c  blr x8
7101a4f090  mov w23,wzr
7101a4f094  mov w21,#0x2
7101a4f098  add x22,x22,#0x10
7101a4f09c  cmp x22,x24
7101a4f0a0  b.ne 0x7101a4ef90
7101a4f0a4  b 0x7101a4f0b8
7101a4f0a8  mov w23,wzr
7101a4f0ac  add x22,x22,#0x10
7101a4f0b0  cmp x22,x24
7101a4f0b4  b.ne 0x7101a4ef90
7101a4f0b8  cmp w21,#0x1
7101a4f0bc  b.eq 0x7101a4f180
7101a4f0c0  cmp w21,#0x2
7101a4f0c4  b.ne 0x7101a4f168
7101a4f0c8  ldrb w8,[x19, #0x2dc]
7101a4f0cc  cbz w8,0x7101a4f168
7101a4f0d0  adrp x22,0x710532f000
7101a4f0d4  ldr x8,[x22, #0x8d0]
7101a4f0d8  ldr x0,[x8, #0x8]
7101a4f0dc  ldrb w8,[x0, #0x191]
7101a4f0e0  mov w21,#0x6500
7101a4f0e4  movk w21,#0x87, LSL #16
7101a4f0e8  cbnz w8,0x7101a51ba4
7101a4f0ec  mov x20,#0x9adc
7101a4f0f0  movk x20,#0xd3b1, LSL #16
7101a4f0f4  movk x20,#0x13, LSL #32
7101a4f0f8  mov w2,#0x4
7101a4f0fc  mov x1,x20
7101a4f100  bl 0x7103313f20
7101a4f104  tbz w0,#0x0,0x7101a51ba4
7101a4f108  add x0,sp,#0x208
7101a4f10c  mov x1,x20
7101a4f110  bl 0x71024076d0
7101a4f114  ldr x8,[sp, #0x218]
7101a4f118  adrp x9,0x7104f73000
7101a4f11c  add x9,x9,#0xd50
7101a4f120  str x9,[sp, #0x210]
7101a4f124  cbz x8,0x7101a51bd4
7101a4f128  adrp x8,0x7106dd5000
7101a4f12c  ldrb w8,[x8, #0x3a8]
7101a4f130  cmp w8,#0x1
7101a4f134  b.ne 0x7101a51bd4
7101a4f138  adrp x9,0x7106dd5000
7101a4f13c  ldr w8,[sp, #0x220]
7101a4f140  ldr w9,[x9, #0x3ac]
7101a4f144  cmp w8,w9
7101a4f148  b.ne 0x7101a51bd4
7101a4f14c  ldr x8,[sp, #0x218]
7101a4f150  ldr wzr,[x8, #0x38]!
7101a4f154  ldaxr w9,[x8]
7101a4f158  sub w9,w9,#0x1
7101a4f15c  stlxr w10,w9,[x8]
7101a4f160  cbnz w10,0x7101a4f154
7101a4f164  b 0x7101a51bd4
7101a4f168  ldr w8,[x19, #0xf0]
7101a4f16c  cbnz w8,0x7101a51b64
7101a4f170  b 0x7101a4e8c8
7101a4f174  mov w23,#0x1
7101a4f178  cbnz x21,0x7101a4ef54
7101a4f17c  b 0x7101a4ef60
7101a4f180  orr w8,wzr,#0x3
7101a4f184  str w8,[x19, #0xf0]
7101a4f188  cbnz w8,0x7101a51b64
7101a4f18c  b 0x7101a4e8c8
7101a4f190  cbz x0,0x7101a4f1a4
7101a4f194  ldr x8,[x0]
7101a4f198  ldr x8,[x8, #0x328]
7101a4f19c  mov w1,wzr
7101a4f1a0  blr x8
7101a4f1a4  ldr w8,[x19, #0x2a0]
7101a4f1a8  cmn w8,#0x1
7101a4f1ac  b.ne 0x7101a4f1bc
7101a4f1b0  ldr w8,[x19, #0x2a4]
7101a4f1b4  cmn w8,#0x1
7101a4f1b8  b.eq 0x7101a4f258
7101a4f1bc  add x0,x19,#0x278
7101a4f1c0  mov w1,wzr
7101a4f1c4  bl 0x710373b540
7101a4f1c8  add x20,x19,#0x280
7101a4f1cc  mov x0,x20
7101a4f1d0  str wzr,[x19, #0x278]
7101a4f1d4  bl 0x71039602c0
7101a4f1d8  adrp x8,0x7104f73000
7101a4f1dc  add x8,x8,#0xd50
7101a4f1e0  str x8,[x19, #0x280]
7101a4f1e4  ldr x8,[x19, #0x288]
7101a4f1e8  cbz x8,0x7101a4f224
7101a4f1ec  adrp x9,0x7106dd5000
7101a4f1f0  ldrb w9,[x9, #0x3a8]
7101a4f1f4  cmp w9,#0x1
7101a4f1f8  b.ne 0x7101a4f224
7101a4f1fc  adrp x10,0x7106dd5000
7101a4f200  ldr w9,[x19, #0x290]
7101a4f204  ldr w10,[x10, #0x3ac]
7101a4f208  cmp w9,w10
7101a4f20c  b.ne 0x7101a4f224
7101a4f210  ldr wzr,[x8, #0x38]!
7101a4f214  ldaxr w9,[x8]
7101a4f218  sub w9,w9,#0x1
7101a4f21c  stlxr w10,w9,[x8]
7101a4f220  cbnz w10,0x7101a4f214
7101a4f224  adrp x8,0x7104f73000
7101a4f228  add x8,x8,#0xd30
7101a4f22c  stp xzr,xzr,[x20, #0x10]
7101a4f230  stp xzr,xzr,[x20]
7101a4f234  str x8,[x19, #0x280]
7101a4f238  mov x8,#-0x1
7101a4f23c  str xzr,[x19, #0x288]
7101a4f240  str wzr,[x19, #0x290]
7101a4f244  str w23,[x19, #0x294]
7101a4f248  strb wzr,[x19, #0x298]
7101a4f24c  str x8,[x19, #0x2a0]
7101a4f250  str xzr,[x19, #0x2a8]
7101a4f254  str wzr,[x19, #0x2b4]
7101a4f258  and w8,w21,#0x1
7101a4f25c  strb w8,[x19, #0x2db]
7101a4f260  cbz w8,0x7101a4f280
7101a4f264  ldr x8,[x19, #0x118]
7101a4f268  ldr x0,[x8]
7101a4f26c  cbz x0,0x7101a4f388
7101a4f270  ldr x8,[x0]
7101a4f274  ldr x8,[x8, #0x330]
7101a4f278  blr x8
7101a4f27c  tbnz w0,#0x0,0x7101a4f388
7101a4f280  ldr x8,[x19, #0x180]
7101a4f284  ldr w8,[x8, #0x25c]
7101a4f288  cbz w8,0x7101a4f388
7101a4f28c  ldr w8,[x19, #0xf0]
7101a4f290  cbnz w8,0x7101a51b64
7101a4f294  mov x0,x19
7101a4f298  bl 0x7101a54eb0
7101a4f29c  ldr x20,[x19, #0x218]
7101a4f2a0  ldr x8,[x19, #0x220]
7101a4f2a4  cmp x20,x8
7101a4f2a8  str x8,[sp, #0xb0]
7101a4f2ac  b.eq 0x7101a51d2c
7101a4f2b0  add x8,x19,#0x258
7101a4f2b4  str x8,[sp, #0x98]
7101a4f2b8  add x8,sp,#0xc8
7101a4f2bc  add x8,x8,#0x30
7101a4f2c0  str x8,[sp, #0x90]
7101a4f2c4  add x8,x19,#0x230
7101a4f2c8  str x8,[sp, #0xa8]
7101a4f2cc  add x8,x19,#0x238
7101a4f2d0  stur x8,[x29, #-0x68]
7101a4f2d4  add x8,x19,#0x248
7101a4f2d8  str x8,[sp, #0xa0]
7101a4f2dc  add x8,x19,#0x208
7101a4f2e0  str x8,[sp, #0x68]
7101a4f2e4  add x8,sp,#0x208
7101a4f2e8  add x9,x8,#0x30
7101a4f2ec  str x9,[sp, #0x80]
7101a4f2f0  add x9,x8,#0x1c
7101a4f2f4  str x9,[sp, #0x58]
7101a4f2f8  add x9,x8,#0x28
7101a4f2fc  str x9,[sp, #0x50]
7101a4f300  add x9,x8,#0x60
7101a4f304  str x9,[sp, #0x48]
7101a4f308  add x9,x8,#0x70
7101a4f30c  str x9,[sp, #0x40]
7101a4f310  add x9,x8,#0x88
7101a4f314  add x8,x8,#0x228
7101a4f318  fmov s8,wzr
7101a4f31c  stp x8,x9,[sp, #0x30]
7101a4f320  sub x8,x29,#0xf8
7101a4f324  add x8,x8,#0x30
7101a4f328  str x8,[sp, #0x60]
7101a4f32c  sub x8,x29,#0xb8
7101a4f330  add x8,x8,#0x30
7101a4f334  str x8,[sp, #0x70]
7101a4f338  add x8,sp,#0x448
7101a4f33c  add x8,x8,#0x30
7101a4f340  str x8,[sp, #0x28]
7101a4f344  add x8,sp,#0x1c8
7101a4f348  add x8,x8,#0x30
7101a4f34c  str x8,[sp, #0x20]
7101a4f350  add x8,sp,#0x188
7101a4f354  add x8,x8,#0x30
7101a4f358  str x8,[sp, #0x10]
7101a4f35c  add x8,sp,#0x148
7101a4f360  add x8,x8,#0x30
7101a4f364  str x8,[sp, #0x18]
7101a4f368  add x8,sp,#0x108
7101a4f36c  add x8,x8,#0x30
7101a4f370  str x8,[sp, #0x8]
7101a4f374  adrp x8,0x7104473000
7101a4f378  ldr s10,[x8, #0x91c]
7101a4f37c  fmov s9,0x3f800000
7101a4f380  mov w16,#0x130
7101a4f384  b 0x7101a50948
7101a4f388  ldr w8,[x19, #0x2a0]
7101a4f38c  cmn w8,#0x1
7101a4f390  b.ne 0x7101a4f3a0
7101a4f394  ldr w8,[x19, #0x2a4]
7101a4f398  cmn w8,#0x1
7101a4f39c  b.eq 0x7101a4f43c
7101a4f3a0  add x0,x19,#0x278
7101a4f3a4  mov w1,wzr
7101a4f3a8  bl 0x710373b540
7101a4f3ac  add x20,x19,#0x280
7101a4f3b0  mov x0,x20
7101a4f3b4  str wzr,[x19, #0x278]
7101a4f3b8  bl 0x71039602c0
7101a4f3bc  adrp x8,0x7104f73000
7101a4f3c0  add x8,x8,#0xd50
7101a4f3c4  str x8,[x19, #0x280]
7101a4f3c8  ldr x8,[x19, #0x288]
7101a4f3cc  cbz x8,0x7101a4f408
7101a4f3d0  adrp x9,0x7106dd5000
7101a4f3d4  ldrb w9,[x9, #0x3a8]
7101a4f3d8  cmp w9,#0x1
7101a4f3dc  b.ne 0x7101a4f408
7101a4f3e0  adrp x10,0x7106dd5000
7101a4f3e4  ldr w9,[x19, #0x290]
7101a4f3e8  ldr w10,[x10, #0x3ac]
7101a4f3ec  cmp w9,w10
7101a4f3f0  b.ne 0x7101a4f408
7101a4f3f4  ldr wzr,[x8, #0x38]!
7101a4f3f8  ldaxr w9,[x8]
7101a4f3fc  sub w9,w9,#0x1
7101a4f400  stlxr w10,w9,[x8]
7101a4f404  cbnz w10,0x7101a4f3f8
7101a4f408  adrp x8,0x7104f73000
7101a4f40c  add x8,x8,#0xd30
7101a4f410  stp xzr,xzr,[x20, #0x10]
7101a4f414  stp xzr,xzr,[x20]
7101a4f418  str x8,[x19, #0x280]
7101a4f41c  mov x8,#-0x1
7101a4f420  str xzr,[x19, #0x288]
7101a4f424  str wzr,[x19, #0x290]
7101a4f428  str w23,[x19, #0x294]
7101a4f42c  strb wzr,[x19, #0x298]
7101a4f430  str x8,[x19, #0x2a0]
7101a4f434  str xzr,[x19, #0x2a8]
7101a4f438  str wzr,[x19, #0x2b4]
7101a4f43c  adrp x8,0x710532f000
7101a4f440  ldr x8,[x8, #0x8d0]
7101a4f444  ldr x0,[x8, #0x8]
7101a4f448  ldp x8,x9,[x0, #0x40]
7101a4f44c  sub x9,x9,x8
7101a4f450  asr x9,x9,#0x3
7101a4f454  cmp x9,#0x4
7101a4f458  b.cc 0x7101a51ab4
7101a4f45c  ldr x20,[x8, #0x18]
7101a4f460  ldrb w8,[x0, #0x191]
7101a4f464  cbnz w8,0x7101a51b30
7101a4f468  b 0x7101a51ac0
7101a4f46c  mov w27,wzr
7101a4f470  mov w24,wzr
7101a4f474  mov w26,wzr
7101a4f478  tbz w24,#0x0,0x7101a51a98
7101a4f47c  ldr w9,[x8, #0x30]
7101a4f480  cmn w9,#0x1
7101a4f484  b.ne 0x7101a4f494
7101a4f488  ldr w9,[x8, #0x28]
7101a4f48c  cmn w9,#0x1
7101a4f490  b.eq 0x7101a51aa0
7101a4f494  sxtw x8,w9
7101a4f498  ldur x9,[x29, #-0x68]
7101a4f49c  ldr x10,[x9]
7101a4f4a0  ldr x9,[sp, #0xa8]
7101a4f4a4  ldr x9,[x9]
7101a4f4a8  sub x10,x10,x9
7101a4f4ac  asr x10,x10,#0x4
7101a4f4b0  cmp x10,x8
7101a4f4b4  b.ls 0x7101a53650
7101a4f4b8  adrp x10,0x710532f000
7101a4f4bc  ldr x10,[x10, #0x730]
7101a4f4c0  add x22,x9,x8, LSL #0x4
7101a4f4c4  mov x9,#-0x3f00000000000000
7101a4f4c8  str x22,[sp, #0x88]
7101a4f4cc  ldr x21,[x10, #0x8]
7101a4f4d0  ldr x25,[x22, #0x8]!
7101a4f4d4  ldr x28,[x25, #0x200]
7101a4f4d8  and x8,x28,#-0x100000000000000
7101a4f4dc  cmp x8,x9
7101a4f4e0  b.ne 0x7101a51aa0
7101a4f4e4  and x8,x28,#0xffffffffff
7101a4f4e8  cbz x8,0x7101a51aa0
7101a4f4ec  add x23,x21,#0x160
7101a4f4f0  mov x0,x23
7101a4f4f4  mov x1,x28
7101a4f4f8  bl 0x7103265e70
7101a4f4fc  mov w16,#0x130
7101a4f500  tbnz w0,#0x0,0x7101a51aa0
7101a4f504  ldr x21,[x21, #0x168]
7101a4f508  mov x1,#0xfa78
7101a4f50c  movk x1,#0xd5f7, LSL #16
7101a4f510  movk x1,#0xf, LSL #32
7101a4f514  mov x0,x21
7101a4f518  bl 0x71032631a0
7101a4f51c  and x8,x0,#-0x100000000000000
7101a4f520  mov x10,#-0x3f00000000000000
7101a4f524  and x9,x0,#0xffffffffff
7101a4f528  cmp x8,x10
7101a4f52c  b.ne 0x7101a4f548
7101a4f530  cbz x9,0x7101a4f548
7101a4f534  eor x8,x0,x28
7101a4f538  tst x8,#0xffffffffff
7101a4f53c  mov w16,#0x130
7101a4f540  b.ne 0x7101a4f55c
7101a4f544  b 0x7101a51aa0
7101a4f548  mov w16,#0x130
7101a4f54c  cbz x9,0x7101a4f55c
7101a4f550  mov x9,#-0x3f00000000000000
7101a4f554  cmp x8,x9
7101a4f558  b.eq 0x7101a51aa0
7101a4f55c  str x21,[sp, #0x78]
7101a4f560  ldr w21,[x25, #0x1f8]
7101a4f564  cmp w21,#0x1
7101a4f568  b.hi 0x7101a4f620
7101a4f56c  eor w8,w27,#0x1
7101a4f570  tbnz w8,#0x0,0x7101a4f620
7101a4f574  ldrb w21,[x25, #0x210]
7101a4f578  add w1,w21,#0x1
7101a4f57c  mov x0,x28
7101a4f580  mov w2,wzr
7101a4f584  bl 0x7101a55970
7101a4f588  mov w16,#0x130
7101a4f58c  cmp w0,w21
7101a4f590  mov x24,x22
7101a4f594  b.eq 0x7101a4fbf8
7101a4f598  adrp x8,0x710532f000
7101a4f59c  ldr x8,[x8, #0x730]
7101a4f5a0  ldr x21,[x24]
7101a4f5a4  ldr x23,[x21, #0x200]
7101a4f5a8  ldr x8,[x8, #0x8]
7101a4f5ac  mov w25,w0
7101a4f5b0  mov x1,x23
7101a4f5b4  ldr x0,[x8, #0x168]
7101a4f5b8  bl 0x71032633f0
7101a4f5bc  cbz w0,0x7101a4f774
7101a4f5c0  and w8,w0,w0, ASR #0x1f
7101a4f5c4  cmp w0,#0x0
7101a4f5c8  csel w9,wzr,w0,lt
7101a4f5cc  sub w10,w25,w8
7101a4f5d0  sub w9,w9,w8
7101a4f5d4  sdiv w11,w10,w9
7101a4f5d8  msub w10,w11,w9,w10
7101a4f5dc  and w9,w9,w10, ASR #0x1f
7101a4f5e0  add w8,w10,w8
7101a4f5e4  add w8,w8,w9
7101a4f5e8  b 0x7101a4f778
7101a4f5ec  mov w16,#0x130
7101a4f5f0  madd x8,x22,x16,x9
7101a4f5f4  ldr x8,[x8, #0x28]
7101a4f5f8  ldr x8,[x8, #0x18]
7101a4f5fc  ldr x8,[x8]
7101a4f600  movi v4.2D,#0x0
7101a4f604  cbz x8,0x7101a4f6ec
7101a4f608  mov v1.16B,v4.16B
7101a4f60c  add x10,x8,#0x30
7101a4f610  add x8,x8,#0x34
7101a4f614  ld1 {v1.S}[0],[x10]
7101a4f618  ld1 {v1.S}[1],[x8]
7101a4f61c  b 0x7101a4f6f8
7101a4f620  cmp w21,#0x1
7101a4f624  b.hi 0x7101a4f6a8
7101a4f628  eor w8,w24,#0x1
7101a4f62c  tbnz w8,#0x0,0x7101a4f6a8
7101a4f630  ldrb w21,[x25, #0x210]
7101a4f634  sub w1,w21,#0x1
7101a4f638  mov w2,#0x1
7101a4f63c  mov x0,x28
7101a4f640  bl 0x7101a55970
7101a4f644  mov w16,#0x130
7101a4f648  cmp w0,w21
7101a4f64c  mov x24,x22
7101a4f650  b.eq 0x7101a4fbf8
7101a4f654  adrp x8,0x710532f000
7101a4f658  ldr x8,[x8, #0x730]
7101a4f65c  ldr x21,[x24]
7101a4f660  ldr x23,[x21, #0x200]
7101a4f664  ldr x8,[x8, #0x8]
7101a4f668  mov w25,w0
7101a4f66c  mov x1,x23
7101a4f670  ldr x0,[x8, #0x168]
7101a4f674  bl 0x71032633f0
7101a4f678  cbz w0,0x7101a4fad4
7101a4f67c  and w8,w0,w0, ASR #0x1f
7101a4f680  cmp w0,#0x0
7101a4f684  csel w9,wzr,w0,lt
7101a4f688  sub w10,w25,w8
7101a4f68c  sub w9,w9,w8
7101a4f690  sdiv w11,w10,w9
7101a4f694  msub w10,w11,w9,w10
7101a4f698  and w9,w9,w10, ASR #0x1f
7101a4f69c  add w8,w10,w8
7101a4f6a0  add w8,w8,w9
7101a4f6a4  b 0x7101a4fad8
7101a4f6a8  mov x24,x22
7101a4f6ac  cbz w26,0x7101a4fbf8
7101a4f6b0  ldr x0,[sp, #0x78]
7101a4f6b4  mov x1,#0xb807
7101a4f6b8  movk x1,#0xb1cc, LSL #16
7101a4f6bc  movk x1,#0x11, LSL #32
7101a4f6c0  bl 0x71032631a0
7101a4f6c4  and x8,x0,#-0x100000000000000
7101a4f6c8  mov x10,#-0x3f00000000000000
7101a4f6cc  and x9,x0,#0xffffffffff
7101a4f6d0  cmp x8,x10
7101a4f6d4  b.ne 0x7101a4f8a0
7101a4f6d8  cbz x9,0x7101a4f8a0
7101a4f6dc  eor x8,x0,x28
7101a4f6e0  tst x8,#0xffffffffff
7101a4f6e4  b.ne 0x7101a4f91c
7101a4f6e8  b 0x7101a4f8b0
7101a4f6ec  adrp x8,0x71052a8000
7101a4f6f0  ldr x8,[x8, #0xa80]
7101a4f6f4  ldr q1,[x8]
7101a4f6f8  fsub v0.4S,v0.4S,v1.4S
7101a4f6fc  mul x10,x22,x16
7101a4f700  fmul v0.4S,v0.4S,v0.4S
7101a4f704  faddp v0.2S,v0.2S,v0.2S
7101a4f708  fcmp s0,s10
7101a4f70c  cset w8,gt
7101a4f710  add x9,x9,x10
7101a4f714  strb w8,[x9, #0x123]
7101a4f718  strb wzr,[x9, #0x124]
7101a4f71c  ldr x8,[x20, #0x8]
7101a4f720  ldr x8,[x8, #0x20]
7101a4f724  ldr x8,[x8, #0x100]
7101a4f728  ldr q0,[x8, #0x60]
7101a4f72c  ldr x8,[x19, #0x260]
7101a4f730  add x8,x8,x10
7101a4f734  ldp s1,s2,[x8, #0xd0]
7101a4f738  fcmp s0,s1
7101a4f73c  fcsel s1,s1,s0,mi
7101a4f740  fcmp s2,s1
7101a4f744  fcsel s1,s2,s1,mi
7101a4f748  dup s0,v0.S[0x1]
7101a4f74c  ldp s2,s3,[x8, #0xd8]
7101a4f750  fcmp s0,s2
7101a4f754  fcsel s0,s2,s0,mi
7101a4f758  mov v2.16B,v4.16B
7101a4f75c  fcmp s3,s0
7101a4f760  mov v2.S[0x0],v1.S[0x0]
7101a4f764  fcsel s0,s3,s0,mi
7101a4f768  mov v2.S[0x1],v0.S[0x0]
7101a4f76c  str q2,[x8, #0xf0]
7101a4f770  b 0x7101a51a60
7101a4f774  mov w8,wzr
7101a4f778  ldr x2,[x21, #0x208]
7101a4f77c  ldrb w4,[x21, #0x6c2]
7101a4f780  and w3,w8,#0xff
7101a4f784  ldr x0,[x21, #0x5e8]
7101a4f788  mov x1,x23
7101a4f78c  mov w5,wzr
7101a4f790  ldr x22,[sp, #0x88]
7101a4f794  strb w8,[x21, #0x210]
7101a4f798  bl 0x71019fd290
7101a4f79c  mov x0,x19
7101a4f7a0  mov x1,x22
7101a4f7a4  bl 0x7101a55b60
7101a4f7a8  adrp x8,0x710532f000
7101a4f7ac  ldr x8,[x8, #0x8d0]
7101a4f7b0  ldr x0,[x8, #0x8]
7101a4f7b4  ldp x8,x9,[x0, #0x40]
7101a4f7b8  sub x9,x9,x8
7101a4f7bc  asr x9,x9,#0x3
7101a4f7c0  cmp x9,#0x2
7101a4f7c4  mov w21,#0x6500
7101a4f7c8  movk w21,#0x87, LSL #16
7101a4f7cc  b.cc 0x7101a4f7e0
7101a4f7d0  ldr x22,[x8, #0x8]
7101a4f7d4  ldrb w8,[x0, #0x191]
7101a4f7d8  cbnz w8,0x7101a4f858
7101a4f7dc  b 0x7101a4f7ec
7101a4f7e0  mov x22,xzr
7101a4f7e4  ldrb w8,[x0, #0x191]
7101a4f7e8  cbnz w8,0x7101a4f858
7101a4f7ec  mov w2,#0x4
7101a4f7f0  mov x1,x22
7101a4f7f4  bl 0x7103313f20
7101a4f7f8  tbz w0,#0x0,0x7101a4f858
7101a4f7fc  add x0,sp,#0x208
7101a4f800  mov x1,x22
7101a4f804  bl 0x71024076d0
7101a4f808  ldr x8,[sp, #0x218]
7101a4f80c  adrp x9,0x7104f73000
7101a4f810  add x9,x9,#0xd50
7101a4f814  str x9,[sp, #0x210]
7101a4f818  cbz x8,0x7101a4f894
7101a4f81c  adrp x9,0x7106dd5000
7101a4f820  ldrb w9,[x9, #0x3a8]
7101a4f824  cmp w9,#0x1
7101a4f828  b.ne 0x7101a4f894
7101a4f82c  adrp x10,0x7106dd5000
7101a4f830  ldr w9,[sp, #0x220]
7101a4f834  ldr w10,[x10, #0x3ac]
7101a4f838  cmp w9,w10
7101a4f83c  b.ne 0x7101a4f894
7101a4f840  ldr wzr,[x8, #0x38]!
7101a4f844  ldaxr w9,[x8]
7101a4f848  sub w9,w9,#0x1
7101a4f84c  stlxr w10,w9,[x8]
7101a4f850  cbnz w10,0x7101a4f844
7101a4f854  b 0x7101a4f894
7101a4f858  adrp x8,0x7104f73000
7101a4f85c  add x8,x8,#0xd30
7101a4f860  str x8,[sp, #0x210]
7101a4f864  mov x8,#-0x1
7101a4f868  str x8,[sp, #0x230]
7101a4f86c  ldr x8,[sp, #0x80]
7101a4f870  str xzr,[sp, #0x218]
7101a4f874  str wzr,[sp, #0x220]
7101a4f878  str w21,[sp, #0x224]
7101a4f87c  strb wzr,[sp, #0x228]
7101a4f880  str wzr,[sp, #0x208]
7101a4f884  stp xzr,xzr,[x8]
7101a4f888  adrp x8,0x7104f73000
7101a4f88c  add x8,x8,#0xd50
7101a4f890  str x8,[sp, #0x210]
7101a4f894  str xzr,[sp, #0x218]
7101a4f898  strb wzr,[sp, #0x228]
7101a4f89c  b 0x7101a4fbf4
7101a4f8a0  cbz x9,0x7101a4f91c
7101a4f8a4  mov x9,#-0x3f00000000000000
7101a4f8a8  cmp x8,x9
7101a4f8ac  b.ne 0x7101a4f91c
7101a4f8b0  ldr x23,[x25, #0x208]
7101a4f8b4  ldrb w8,[x25, #0x6c2]
7101a4f8b8  ldr x21,[sp, #0x88]
7101a4f8bc  cbnz w8,0x7101a4ffbc
7101a4f8c0  ldr x28,[x25, #0x5e8]
7101a4f8c4  ldr x0,[sp, #0x78]
7101a4f8c8  mov x1,#0xb807
7101a4f8cc  movk x1,#0xb1cc, LSL #16
7101a4f8d0  movk x1,#0x11, LSL #32
7101a4f8d4  ldr x22,[x28, #0x228]
7101a4f8d8  bl 0x71032631a0
7101a4f8dc  and x10,x22,#-0x100000000000000
7101a4f8e0  mov x11,#-0x3f00000000000000
7101a4f8e4  and x9,x22,#0xffffffffff
7101a4f8e8  and x8,x0,#0xffffffffff
7101a4f8ec  cmp x10,x11
7101a4f8f0  b.ne 0x7101a4ff10
7101a4f8f4  cbz x9,0x7101a4ff10
7101a4f8f8  and x11,x0,#-0x100000000000000
7101a4f8fc  mov x12,#-0x3f00000000000000
7101a4f900  cmp x11,x12
7101a4f904  b.ne 0x7101a4ff14
7101a4f908  cbz x8,0x7101a4ff14
7101a4f90c  eor x8,x0,x22
7101a4f910  tst x8,#0xffffffffff
7101a4f914  b.ne 0x7101a4ff9c
7101a4f918  b 0x7101a4ff4c
7101a4f91c  ldrb w8,[x19, #0x2d8]
7101a4f920  cbnz w8,0x7101a4f9e0
7101a4f924  mov x0,x23
7101a4f928  mov x1,x28
7101a4f92c  bl 0x71032651b0
7101a4f930  tbz w0,#0x0,0x7101a4f9e0
7101a4f934  ldr x23,[x25, #0x208]
7101a4f938  cmp w21,#0x2
7101a4f93c  b.eq 0x7101a4f98c
7101a4f940  ldr x0,[x25, #0x5e8]
7101a4f944  bl 0x7101a00c90
7101a4f948  ldr x8,[x25, #0x5e8]
7101a4f94c  ldr x1,[x8, #0x228]
7101a4f950  str x1,[x25, #0x200]
7101a4f954  ldr x9,[x8, #0x230]
7101a4f958  str x9,[x25, #0x208]
7101a4f95c  ldr w8,[x8, #0x238]
7101a4f960  strb w8,[x25, #0x210]
7101a4f964  adrp x8,0x710532f000
7101a4f968  ldr x8,[x8, #0x730]
7101a4f96c  ldr x8,[x8, #0x8]
7101a4f970  add x0,x8,#0x160
7101a4f974  bl 0x71032652a0
7101a4f978  and w8,w0,#0x1
7101a4f97c  strb w8,[x25, #0x6be]
7101a4f980  mov w8,#0x1
7101a4f984  strb wzr,[x25, #0x6bf]
7101a4f988  strb w8,[x25, #0x6ba]
7101a4f98c  ldr x1,[sp, #0x88]
7101a4f990  mov x0,x19
7101a4f994  bl 0x7101a55da0
7101a4f998  ldr x8,[x24]
7101a4f99c  ldr x12,[x8, #0x208]
7101a4f9a0  and x10,x23,#-0x100000000000000
7101a4f9a4  mov x13,#-0x3f00000000000000
7101a4f9a8  and x9,x23,#0xffffffffff
7101a4f9ac  cmp x10,x13
7101a4f9b0  and x8,x12,#0xffffffffff
7101a4f9b4  b.ne 0x7101a501a0
7101a4f9b8  cbz x9,0x7101a501a0
7101a4f9bc  and x11,x12,#-0x100000000000000
7101a4f9c0  cmp x11,x13
7101a4f9c4  mov w16,#0x130
7101a4f9c8  b.ne 0x7101a501a8
7101a4f9cc  cbz x8,0x7101a501a8
7101a4f9d0  eor x8,x12,x23
7101a4f9d4  tst x8,#0xffffffffff
7101a4f9d8  b.ne 0x7101a501dc
7101a4f9dc  b 0x7101a4fbf8
7101a4f9e0  cmp w21,#0x3
7101a4f9e4  mov w16,#0x130
7101a4f9e8  b.eq 0x7101a4fbf8
7101a4f9ec  ldr x0,[sp, #0x78]
7101a4f9f0  mov x1,x28
7101a4f9f4  bl 0x7103263a30
7101a4f9f8  mov w16,#0x130
7101a4f9fc  tbz w0,#0x1,0x7101a4fbf8
7101a4fa00  ldr x21,[x25, #0x208]
7101a4fa04  mov x0,x25
7101a4fa08  bl 0x7101a074b0
7101a4fa0c  ldr x1,[sp, #0x88]
7101a4fa10  mov x0,x19
7101a4fa14  bl 0x7101a55ec0
7101a4fa18  ldr x8,[x24]
7101a4fa1c  ldr x12,[x8, #0x208]
7101a4fa20  and x10,x21,#-0x100000000000000
7101a4fa24  mov x13,#-0x3f00000000000000
7101a4fa28  and x9,x21,#0xffffffffff
7101a4fa2c  cmp x10,x13
7101a4fa30  and x8,x12,#0xffffffffff
7101a4fa34  b.ne 0x7101a5013c
7101a4fa38  cbz x9,0x7101a5013c
7101a4fa3c  and x11,x12,#-0x100000000000000
7101a4fa40  mov w16,#0x130
7101a4fa44  cmp x11,x13
7101a4fa48  b.ne 0x7101a50144
7101a4fa4c  cbz x8,0x7101a50144
7101a4fa50  eor x8,x12,x21
7101a4fa54  tst x8,#0xffffffffff
7101a4fa58  b.ne 0x7101a50178
7101a4fa5c  b 0x7101a4fbf8
7101a4fa60  cbz w22,0x7101a514d4
7101a4fa64  ldr x8,[x20, #0x8]
7101a4fa68  ldr x8,[x8, #0x20]
7101a4fa6c  ldr x0,[x8, #0x110]
7101a4fa70  mov v0.16B,v9.16B
7101a4fa74  adrp x23,0x7104317000
7101a4fa78  add x23,x23,#0x593
7101a4fa7c  mov x1,x23
7101a4fa80  mov x21,x16
7101a4fa84  bl 0x7103778300
7101a4fa88  mul x9,x24,x21
7101a4fa8c  ldr x8,[x19, #0x260]
7101a4fa90  add x8,x8,x9
7101a4fa94  ldr x0,[x8, #0x28]
7101a4fa98  mov v0.16B,v9.16B
7101a4fa9c  mov x1,x23
7101a4faa0  bl 0x7103778300
7101a4faa4  adrp x8,0x710532f000
7101a4faa8  ldr x8,[x8, #0x8d0]
7101a4faac  ldr x0,[x8, #0x8]
7101a4fab0  ldp x8,x9,[x0, #0x40]
7101a4fab4  sub x9,x9,x8
7101a4fab8  asr x9,x9,#0x3
7101a4fabc  cmp x9,#0x5
7101a4fac0  b.cc 0x7101a4fe28
7101a4fac4  ldr x22,[x8, #0x20]
7101a4fac8  ldrb w8,[x0, #0x191]
7101a4facc  cbnz w8,0x7101a4fea4
7101a4fad0  b 0x7101a4fe34
7101a4fad4  mov w8,wzr
7101a4fad8  ldr x2,[x21, #0x208]
7101a4fadc  ldrb w4,[x21, #0x6c2]
7101a4fae0  and w3,w8,#0xff
7101a4fae4  ldr x0,[x21, #0x5e8]
7101a4fae8  mov x1,x23
7101a4faec  mov w5,wzr
7101a4faf0  ldr x22,[sp, #0x88]
7101a4faf4  strb w8,[x21, #0x210]
7101a4faf8  bl 0x71019fd290
7101a4fafc  mov x0,x19
7101a4fb00  mov x1,x22
7101a4fb04  bl 0x7101a55b60
7101a4fb08  adrp x8,0x710532f000
7101a4fb0c  ldr x8,[x8, #0x8d0]
7101a4fb10  ldr x0,[x8, #0x8]
7101a4fb14  ldp x8,x9,[x0, #0x40]
7101a4fb18  sub x9,x9,x8
7101a4fb1c  asr x9,x9,#0x3
7101a4fb20  cmp x9,#0x2
7101a4fb24  mov w21,#0x6500
7101a4fb28  movk w21,#0x87, LSL #16
7101a4fb2c  b.cc 0x7101a4fb40
7101a4fb30  ldr x22,[x8, #0x8]
7101a4fb34  ldrb w8,[x0, #0x191]
7101a4fb38  cbnz w8,0x7101a4fbb8
7101a4fb3c  b 0x7101a4fb4c
7101a4fb40  mov x22,xzr
7101a4fb44  ldrb w8,[x0, #0x191]
7101a4fb48  cbnz w8,0x7101a4fbb8
7101a4fb4c  mov w2,#0x4
7101a4fb50  mov x1,x22
7101a4fb54  bl 0x7103313f20
7101a4fb58  tbz w0,#0x0,0x7101a4fbb8
7101a4fb5c  sub x0,x29,#0xb8
7101a4fb60  mov x1,x22
7101a4fb64  bl 0x71024076d0
7101a4fb68  ldur x8,[x29, #-0xa8]
7101a4fb6c  adrp x9,0x7104f73000
7101a4fb70  add x9,x9,#0xd50
7101a4fb74  stur x9,[x29, #-0xb0]
7101a4fb78  cbz x8,0x7101a4fbec
7101a4fb7c  adrp x9,0x7106dd5000
7101a4fb80  ldrb w9,[x9, #0x3a8]
7101a4fb84  cmp w9,#0x1
7101a4fb88  b.ne 0x7101a4fbec
7101a4fb8c  adrp x10,0x7106dd5000
7101a4fb90  ldur w9,[x29, #-0xa0]
7101a4fb94  ldr w10,[x10, #0x3ac]
7101a4fb98  cmp w9,w10
7101a4fb9c  b.ne 0x7101a4fbec
7101a4fba0  ldr wzr,[x8, #0x38]!
7101a4fba4  ldaxr w9,[x8]
7101a4fba8  sub w9,w9,#0x1
7101a4fbac  stlxr w10,w9,[x8]
7101a4fbb0  cbnz w10,0x7101a4fba4
7101a4fbb4  b 0x7101a4fbec
7101a4fbb8  adrp x8,0x7104f73000
7101a4fbbc  add x8,x8,#0xd30
7101a4fbc0  stp wzr,w21,[x29, #-0xa0]
7101a4fbc4  stp x8,xzr,[x29, #-0xb0]
7101a4fbc8  mov x8,#-0x1
7101a4fbcc  stur x8,[x29, #-0x90]
7101a4fbd0  ldr x8,[sp, #0x70]
7101a4fbd4  sturb wzr,[x29, #-0x98]
7101a4fbd8  stur wzr,[x29, #-0xb8]
7101a4fbdc  stp xzr,xzr,[x8]
7101a4fbe0  adrp x8,0x7104f73000
7101a4fbe4  add x8,x8,#0xd50
7101a4fbe8  stur x8,[x29, #-0xb0]
7101a4fbec  stur xzr,[x29, #-0xa8]
7101a4fbf0  sturb wzr,[x29, #-0x98]
7101a4fbf4  mov w16,#0x130
7101a4fbf8  ldr x8,[x24]
7101a4fbfc  mov w9,#0x1
7101a4fc00  strb w9,[x8, #0x6ba]
7101a4fc04  b 0x7101a51aa0
7101a4fc08  cmn w13,#0x1
7101a4fc0c  b.ne 0x7101a50fd0
7101a4fc10  b 0x7101a50ed0
7101a4fc14  ldr w21,[x9, #0x28]
7101a4fc18  add x10,x23,#0xc
7101a4fc1c  add x9,x23,#0x8
7101a4fc20  add x8,x23,#0x4
7101a4fc24  cmn w21,#0x1
7101a4fc28  b.eq 0x7101a51160
7101a4fc2c  ldp x11,x12,[x0]
7101a4fc30  sub x12,x12,x11
7101a4fc34  mov x14,#0x8ba3
7101a4fc38  movk x14,#0xba2e, LSL #16
7101a4fc3c  movk x14,#0xa2e8, LSL #32
7101a4fc40  movk x14,#0x2e8b, LSL #48
7101a4fc44  asr x12,x12,#0x4
7101a4fc48  mul x12,x12,x14
7101a4fc4c  cmp w21,w12
7101a4fc50  b.ge 0x7101a51164
7101a4fc54  sxtw x8,w21
7101a4fc58  cmp x12,x8
7101a4fc5c  b.ls 0x7101a5364c
7101a4fc60  mov w9,#0xb0
7101a4fc64  madd x10,x8,x9,x11
7101a4fc68  add x11,x10,#0x48
7101a4fc6c  add x8,x10,#0x4c
7101a4fc70  add x9,x10,#0x50
7101a4fc74  add x10,x10,#0x54
7101a4fc78  b 0x7101a51168
7101a4fc7c  ldrb w1,[x23, #0x210]
7101a4fc80  mov x0,x21
7101a4fc84  mov w2,wzr
7101a4fc88  str x21,[sp]
7101a4fc8c  bl 0x7101a55970
7101a4fc90  ldr x8,[x24, #0x730]
7101a4fc94  ldr x8,[x8, #0x8]
7101a4fc98  ldr x23,[x8, #0x168]
7101a4fc9c  mov x1,#0xb807
7101a4fca0  movk x1,#0xb1cc, LSL #16
7101a4fca4  mov w21,w0
7101a4fca8  mov x0,x23
7101a4fcac  movk x1,#0x11, LSL #32
7101a4fcb0  bl 0x71032631a0
7101a4fcb4  and x8,x0,#0xffffffffff
7101a4fcb8  cbz w22,0x7101a4fef4
7101a4fcbc  ldr x24,[sp, #0x78]
7101a4fcc0  and x9,x0,#-0x100000000000000
7101a4fcc4  mov x10,#-0x3f00000000000000
7101a4fcc8  cmp x9,x10
7101a4fccc  b.ne 0x7101a50204
7101a4fcd0  cbz x8,0x7101a50204
7101a4fcd4  eor x8,x0,x27
7101a4fcd8  tst x8,#0xffffffffff
7101a4fcdc  mov x2,x27
7101a4fce0  b.ne 0x7101a5023c
7101a4fce4  b 0x7101a5022c
7101a4fce8  mov x22,xzr
7101a4fcec  ldrb w8,[x0, #0x191]
7101a4fcf0  mov w16,#0x130
7101a4fcf4  cbnz w8,0x7101a4fd6c
7101a4fcf8  mov w2,#0x4
7101a4fcfc  mov x1,x22
7101a4fd00  bl 0x7103313f20
7101a4fd04  mov w16,#0x130
7101a4fd08  tbz w0,#0x0,0x7101a4fd6c
7101a4fd0c  add x0,sp,#0x188
7101a4fd10  mov x1,x22
7101a4fd14  bl 0x71024076d0
7101a4fd18  ldr x8,[sp, #0x198]
7101a4fd1c  mov w16,#0x130
7101a4fd20  adrp x9,0x7104f73000
7101a4fd24  add x9,x9,#0xd50
7101a4fd28  str x9,[sp, #0x190]
7101a4fd2c  cbz x8,0x7101a4fdac
7101a4fd30  adrp x9,0x7106dd5000
7101a4fd34  ldrb w9,[x9, #0x3a8]
7101a4fd38  cmp w9,#0x1
7101a4fd3c  b.ne 0x7101a4fdac
7101a4fd40  adrp x10,0x7106dd5000
7101a4fd44  ldr w9,[sp, #0x1a0]
7101a4fd48  ldr w10,[x10, #0x3ac]
7101a4fd4c  cmp w9,w10
7101a4fd50  b.ne 0x7101a4fdac
7101a4fd54  ldr wzr,[x8, #0x38]!
7101a4fd58  ldaxr w9,[x8]
7101a4fd5c  sub w9,w9,#0x1
7101a4fd60  stlxr w10,w9,[x8]
7101a4fd64  cbnz w10,0x7101a4fd58
7101a4fd68  b 0x7101a4fdac
7101a4fd6c  mov w8,#0x6500
7101a4fd70  movk w8,#0x87, LSL #16
7101a4fd74  str w8,[sp, #0x1a4]
7101a4fd78  adrp x8,0x7104f73000
7101a4fd7c  add x8,x8,#0xd30
7101a4fd80  str wzr,[sp, #0x1a0]
7101a4fd84  stp x8,xzr,[sp, #0x190]
7101a4fd88  mov x8,#-0x1
7101a4fd8c  str x8,[sp, #0x1b0]
7101a4fd90  ldr x8,[sp, #0x10]
7101a4fd94  strb wzr,[sp, #0x1a8]
7101a4fd98  str wzr,[sp, #0x188]
7101a4fd9c  stp xzr,xzr,[x8]
7101a4fda0  adrp x8,0x7104f73000
7101a4fda4  add x8,x8,#0xd50
7101a4fda8  str x8,[sp, #0x190]
7101a4fdac  str xzr,[sp, #0x198]
7101a4fdb0  strb wzr,[sp, #0x1a8]
7101a4fdb4  ldr x22,[x26]
7101a4fdb8  ldr w8,[x22, #0x138]
7101a4fdbc  cmp w8,#0x3
7101a4fdc0  b.ne 0x7101a4fe1c
7101a4fdc4  ldrb w8,[x22, #0x6bc]
7101a4fdc8  cbz w8,0x7101a4fe1c
7101a4fdcc  ldr x8,[x22, #0x678]
7101a4fdd0  cbnz x8,0x7101a4fddc
7101a4fdd4  ldr x8,[x22, #0x680]
7101a4fdd8  cbz x8,0x7101a4fe1c
7101a4fddc  ldr x8,[x8, #0x8]
7101a4fde0  ldrb w8,[x8, #0x36]
7101a4fde4  cbz w8,0x7101a4fe1c
7101a4fde8  mov x0,x22
7101a4fdec  bl 0x7101a036e0
7101a4fdf0  mov x0,x21
7101a4fdf4  bl 0x710327ac80
7101a4fdf8  ldrsw x8,[x22, #0x134]
7101a4fdfc  cmp w8,#0x13
7101a4fe00  str w0,[x22, #0x69c]
7101a4fe04  b.cs 0x7101a53644
7101a4fe08  add x8,x22,x8, LSL #0x2
7101a4fe0c  mov w9,#0xa
7101a4fe10  str w9,[x8, #0xe8]
7101a4fe14  ldr x22,[x26]
7101a4fe18  mov w16,#0x130
7101a4fe1c  mov w8,#0x1
7101a4fe20  strb w8,[x22, #0x6c0]
7101a4fe24  b 0x7101a514d4
7101a4fe28  mov x22,xzr
7101a4fe2c  ldrb w8,[x0, #0x191]
7101a4fe30  cbnz w8,0x7101a4fea4
7101a4fe34  mov w2,#0x4
7101a4fe38  mov x1,x22
7101a4fe3c  bl 0x7103313f20
7101a4fe40  tbz w0,#0x0,0x7101a4fea4
7101a4fe44  add x0,sp,#0x1c8
7101a4fe48  mov x1,x22
7101a4fe4c  bl 0x71024076d0
7101a4fe50  ldr x8,[sp, #0x1d8]
7101a4fe54  adrp x9,0x7104f73000
7101a4fe58  add x9,x9,#0xd50
7101a4fe5c  mov w16,#0x130
7101a4fe60  str x9,[sp, #0x1d0]
7101a4fe64  cbz x8,0x7101a4fee8
7101a4fe68  adrp x9,0x7106dd5000
7101a4fe6c  ldrb w9,[x9, #0x3a8]
7101a4fe70  cmp w9,#0x1
7101a4fe74  b.ne 0x7101a4fee8
7101a4fe78  adrp x10,0x7106dd5000
7101a4fe7c  ldr w9,[sp, #0x1e0]
7101a4fe80  ldr w10,[x10, #0x3ac]
7101a4fe84  cmp w9,w10
7101a4fe88  b.ne 0x7101a4fee8
7101a4fe8c  ldr wzr,[x8, #0x38]!
7101a4fe90  ldaxr w9,[x8]
7101a4fe94  sub w9,w9,#0x1
7101a4fe98  stlxr w10,w9,[x8]
7101a4fe9c  cbnz w10,0x7101a4fe90
7101a4fea0  b 0x7101a4fee8
7101a4fea4  mov w8,#0x6500
7101a4fea8  movk w8,#0x87, LSL #16
7101a4feac  str w8,[sp, #0x1e4]
7101a4feb0  adrp x8,0x7104f73000
7101a4feb4  add x8,x8,#0xd30
7101a4feb8  str wzr,[sp, #0x1e0]
7101a4febc  stp x8,xzr,[sp, #0x1d0]
7101a4fec0  mov x8,#-0x1
7101a4fec4  str x8,[sp, #0x1f0]
7101a4fec8  ldr x8,[sp, #0x20]
7101a4fecc  mov w16,#0x130
7101a4fed0  strb wzr,[sp, #0x1e8]
7101a4fed4  str wzr,[sp, #0x1c8]
7101a4fed8  stp xzr,xzr,[x8]
7101a4fedc  adrp x8,0x7104f73000
7101a4fee0  add x8,x8,#0xd50
7101a4fee4  str x8,[sp, #0x1d0]
7101a4fee8  str xzr,[sp, #0x1d8]
7101a4feec  strb wzr,[sp, #0x1e8]
7101a4fef0  b 0x7101a514d4
7101a4fef4  and x9,x0,#-0x100000000000000
7101a4fef8  cmp x8,#0x0
7101a4fefc  mov x10,#-0x3f00000000000000
7101a4ff00  cset w8,ne
7101a4ff04  cmp x9,x10
7101a4ff08  ldr x24,[sp, #0x78]
7101a4ff0c  b 0x7101a50214
7101a4ff10  and x11,x0,#-0x100000000000000
7101a4ff14  mov x12,#-0x3f00000000000000
7101a4ff18  cmp x10,x12
7101a4ff1c  cset w10,eq
7101a4ff20  cmp x9,#0x0
7101a4ff24  cset w9,ne
7101a4ff28  cmp x8,#0x0
7101a4ff2c  cset w8,ne
7101a4ff30  cmp x11,x12
7101a4ff34  and w9,w10,w9
7101a4ff38  cset w10,eq
7101a4ff3c  and w8,w8,w10
7101a4ff40  eor w8,w8,w9
7101a4ff44  cmp w8,#0x1
7101a4ff48  b.eq 0x7101a4ff9c
7101a4ff4c  ldrb w8,[x28, #0x25f]
7101a4ff50  cbnz w8,0x7101a4ff9c
7101a4ff54  ldr x1,[x28, #0x230]
7101a4ff58  ldr x0,[sp, #0x78]
7101a4ff5c  bl 0x7103263030
7101a4ff60  and x8,x0,#-0x100000000000000
7101a4ff64  mov x9,#-0x3f00000000000000
7101a4ff68  cmp x8,x9
7101a4ff6c  b.ne 0x7101a4ff9c
7101a4ff70  mov x2,x0
7101a4ff74  and x8,x0,#0xffffffffff
7101a4ff78  cbz x8,0x7101a4ff9c
7101a4ff7c  ldr w3,[x28, #0x238]
7101a4ff80  mov x0,x28
7101a4ff84  mov x1,x22
7101a4ff88  mov w4,wzr
7101a4ff8c  mov w5,wzr
7101a4ff90  bl 0x71019fd290
7101a4ff94  ldr x28,[x25, #0x5e8]
7101a4ff98  ldr x22,[x28, #0x228]
7101a4ff9c  str x22,[x25, #0x200]
7101a4ffa0  ldr x8,[x28, #0x230]
7101a4ffa4  str x8,[x25, #0x208]
7101a4ffa8  ldr w8,[x28, #0x238]
7101a4ffac  strb w8,[x25, #0x210]
7101a4ffb0  mov w8,#0x1
7101a4ffb4  strh wzr,[x25, #0x6be]
7101a4ffb8  strb w8,[x25, #0x6ba]
7101a4ffbc  mov x0,x19
7101a4ffc0  mov x1,x21
7101a4ffc4  bl 0x7101a55c80
7101a4ffc8  ldr x8,[x24]
7101a4ffcc  ldr x12,[x8, #0x208]
7101a4ffd0  and x10,x23,#-0x100000000000000
7101a4ffd4  mov x13,#-0x3f00000000000000
7101a4ffd8  and x9,x23,#0xffffffffff
7101a4ffdc  cmp x10,x13
7101a4ffe0  and x8,x12,#0xffffffffff
7101a4ffe4  b.ne 0x7101a50010
7101a4ffe8  cbz x9,0x7101a50010
7101a4ffec  and x11,x12,#-0x100000000000000
7101a4fff0  cmp x11,x13
7101a4fff4  mov w16,#0x130
7101a4fff8  b.ne 0x7101a50018
7101a4fffc  cbz x8,0x7101a50018
7101a50000  eor x8,x12,x23
7101a50004  tst x8,#0xffffffffff
7101a50008  b.ne 0x7101a5004c
7101a5000c  b 0x7101a4fbf8
7101a50010  and x11,x12,#-0x100000000000000
7101a50014  mov w16,#0x130
7101a50018  cmp x10,x13
7101a5001c  cset w10,eq
7101a50020  cmp x9,#0x0
7101a50024  cset w9,ne
7101a50028  cmp x8,#0x0
7101a5002c  cset w8,ne
7101a50030  cmp x11,x13
7101a50034  and w9,w10,w9
7101a50038  cset w10,eq
7101a5003c  and w8,w8,w10
7101a50040  eor w8,w8,w9
7101a50044  cmp w8,#0x1
7101a50048  b.ne 0x7101a4fbf8
7101a5004c  adrp x8,0x710532f000
7101a50050  ldr x8,[x8, #0x8d0]
7101a50054  ldr x0,[x8, #0x8]
7101a50058  ldp x8,x9,[x0, #0x40]
7101a5005c  sub x9,x9,x8
7101a50060  asr x9,x9,#0x3
7101a50064  cmp x9,#0x2
7101a50068  b.cc 0x7101a50074
7101a5006c  ldr x22,[x8, #0x8]
7101a50070  b 0x7101a50078
7101a50074  mov x22,xzr
7101a50078  ldrb w8,[x0, #0x191]
7101a5007c  mov w21,#0x6500
7101a50080  movk w21,#0x87, LSL #16
7101a50084  cbnz w8,0x7101a500fc
7101a50088  mov w2,#0x4
7101a5008c  mov x1,x22
7101a50090  bl 0x7103313f20
7101a50094  mov w16,#0x130
7101a50098  tbz w0,#0x0,0x7101a500fc
7101a5009c  sub x0,x29,#0xf8
7101a500a0  mov x1,x22
7101a500a4  bl 0x71024076d0
7101a500a8  ldur x8,[x29, #-0xe8]
7101a500ac  mov w16,#0x130
7101a500b0  adrp x9,0x7104f73000
7101a500b4  add x9,x9,#0xd50
7101a500b8  stur x9,[x29, #-0xf0]
7101a500bc  cbz x8,0x7101a50130
7101a500c0  adrp x9,0x7106dd5000
7101a500c4  ldrb w9,[x9, #0x3a8]
7101a500c8  cmp w9,#0x1
7101a500cc  b.ne 0x7101a50130
7101a500d0  adrp x10,0x7106dd5000
7101a500d4  ldur w9,[x29, #-0xe0]
7101a500d8  ldr w10,[x10, #0x3ac]
7101a500dc  cmp w9,w10
7101a500e0  b.ne 0x7101a50130
7101a500e4  ldr wzr,[x8, #0x38]!
7101a500e8  ldaxr w9,[x8]
7101a500ec  sub w9,w9,#0x1
7101a500f0  stlxr w10,w9,[x8]
7101a500f4  cbnz w10,0x7101a500e8
7101a500f8  b 0x7101a50130
7101a500fc  adrp x8,0x7104f73000
7101a50100  add x8,x8,#0xd30
7101a50104  stp wzr,w21,[x29, #-0xe0]
7101a50108  stp x8,xzr,[x29, #-0xf0]
7101a5010c  mov x8,#-0x1
7101a50110  stur x8,[x29, #-0xd0]
7101a50114  ldr x8,[sp, #0x60]
7101a50118  sturb wzr,[x29, #-0xd8]
7101a5011c  stur wzr,[x29, #-0xf8]
7101a50120  stp xzr,xzr,[x8]
7101a50124  adrp x8,0x7104f73000
7101a50128  add x8,x8,#0xd50
7101a5012c  stur x8,[x29, #-0xf0]
7101a50130  stur xzr,[x29, #-0xe8]
7101a50134  sturb wzr,[x29, #-0xd8]
7101a50138  b 0x7101a4fbf8
7101a5013c  and x11,x12,#-0x100000000000000
7101a50140  mov w16,#0x130
7101a50144  cmp x10,x13
7101a50148  cset w10,eq
7101a5014c  cmp x9,#0x0
7101a50150  cset w9,ne
7101a50154  cmp x8,#0x0
7101a50158  cset w8,ne
7101a5015c  cmp x11,x13
7101a50160  and w9,w10,w9
7101a50164  cset w10,eq
7101a50168  and w8,w8,w10
7101a5016c  eor w8,w8,w9
7101a50170  cmp w8,#0x1
7101a50174  b.ne 0x7101a4fbf8
7101a50178  adrp x8,0x710532f000
7101a5017c  ldr x8,[x8, #0x8d0]
7101a50180  ldr x0,[x8, #0x8]
7101a50184  ldp x8,x9,[x0, #0x40]
7101a50188  sub x9,x9,x8
7101a5018c  asr x9,x9,#0x3
7101a50190  cmp x9,#0x2
7101a50194  b.cc 0x7101a5079c
7101a50198  ldr x22,[x8, #0x8]
7101a5019c  b 0x7101a507a0
7101a501a0  and x11,x12,#-0x100000000000000
7101a501a4  mov w16,#0x130
7101a501a8  cmp x10,x13
7101a501ac  cset w10,eq
7101a501b0  cmp x9,#0x0
7101a501b4  cset w9,ne
7101a501b8  cmp x8,#0x0
7101a501bc  cset w8,ne
7101a501c0  cmp x11,x13
7101a501c4  and w9,w10,w9
7101a501c8  cset w10,eq
7101a501cc  and w8,w8,w10
7101a501d0  eor w8,w8,w9
7101a501d4  cmp w8,#0x1
7101a501d8  b.ne 0x7101a4fbf8
7101a501dc  adrp x8,0x710532f000
7101a501e0  ldr x8,[x8, #0x8d0]
7101a501e4  ldr x0,[x8, #0x8]
7101a501e8  ldp x8,x9,[x0, #0x40]
7101a501ec  sub x9,x9,x8
7101a501f0  asr x9,x9,#0x3
7101a501f4  cmp x9,#0x2
7101a501f8  b.cc 0x7101a50868
7101a501fc  ldr x22,[x8, #0x8]
7101a50200  b 0x7101a5086c
7101a50204  cmp x8,#0x0
7101a50208  mov x10,#-0x3f00000000000000
7101a5020c  cset w8,ne
7101a50210  cmp x9,x10
7101a50214  cset w9,eq
7101a50218  and w8,w8,w9
7101a5021c  eor w8,w8,w22
7101a50220  cmp w8,#0x1
7101a50224  mov x2,x27
7101a50228  b.eq 0x7101a5023c
7101a5022c  mov x0,x23
7101a50230  mov x1,x27
7101a50234  bl 0x7103263030
7101a50238  mov x2,x0
7101a5023c  ldr x0,[x26]
7101a50240  mov x1,x27
7101a50244  mov w3,w21
7101a50248  mov w22,w21
7101a5024c  bl 0x7101a029b0
7101a50250  ldr x8,[x26]
7101a50254  mov w9,#0x1
7101a50258  strb w9,[x8, #0x6bd]
7101a5025c  ldr x8,[x26]
7101a50260  ldr x21,[x8, #0x5e8]
7101a50264  ldr x0,[x21, #0x10]
7101a50268  mov v0.16B,v9.16B
7101a5026c  adrp x23,0x710433a000
7101a50270  add x23,x23,#0x9c5
7101a50274  mov x1,x23
7101a50278  bl 0x7103778300
7101a5027c  ldr x0,[x21, #0xf0]
7101a50280  mov v0.16B,v9.16B
7101a50284  mov x1,x23
7101a50288  bl 0x7103778300
7101a5028c  ldr x0,[x21, #0x100]
7101a50290  mov v0.16B,v9.16B
7101a50294  mov x1,x23
7101a50298  bl 0x7103778300
7101a5029c  ldr x8,[x19, #0x250]
7101a502a0  ldr w1,[x8, #0x4d8]
7101a502a4  ldr x0,[sp, #0xa0]
7101a502a8  ldr x2,[sp, #0x88]
7101a502ac  bl 0x7101a5fdf0
7101a502b0  ldr x8,[x20, #0x8]
7101a502b4  ldr w8,[x8, #0x28]
7101a502b8  cmp w25,w8
7101a502bc  b.ne 0x7101a502c8
7101a502c0  str w25,[x19, #0x26c]
7101a502c4  b 0x7101a502d4
7101a502c8  ldr x0,[x26]
7101a502cc  mov x1,xzr
7101a502d0  bl 0x7101a06920
7101a502d4  ldr x8,[x20, #0x8]
7101a502d8  ldr x8,[x8, #0x20]
7101a502dc  strb wzr,[x8, #0x167]
7101a502e0  ldr x8,[x20, #0x8]
7101a502e4  mov w9,#0xffffffff
7101a502e8  str w9,[x8, #0x30]
7101a502ec  ldr x8,[x20, #0x8]
7101a502f0  ldr x8,[x8, #0x10]
7101a502f4  ldr x21,[x8, #0x8]
7101a502f8  add x0,x21,#0x198
7101a502fc  mov w1,wzr
7101a50300  mov w2,#0x264
7101a50304  bl 0x71039c02a0
7101a50308  add x8,x21,#0x40c
7101a5030c  str xzr,[x8]
7101a50310  add x8,x21,#0x424
7101a50314  str xzr,[x8]
7101a50318  str wzr,[x21, #0x480]
7101a5031c  adrp x8,0x71052a8000
7101a50320  ldr x8,[x8, #0xa80]
7101a50324  ldr q0,[x8]
7101a50328  str xzr,[x21, #0x4a0]
7101a5032c  str q0,[x21, #0x460]
7101a50330  str q0,[x21, #0x430]
7101a50334  str q0,[x21, #0x440]
7101a50338  str q0,[x21, #0x450]
7101a5033c  str xzr,[x21, #0x498]
7101a50340  ldr x0,[x19, #0x210]
7101a50344  mov x8,x0
7101a50348  ldr x10,[x8, #0x20]!
7101a5034c  mov w13,#0x130
7101a50350  cbz x10,0x7101a50398
7101a50354  ldr x9,[x26]
7101a50358  ldr x9,[x9, #0x200]
7101a5035c  and x11,x9,#-0xffff0000000001
7101a50360  mov x9,x8
7101a50364  ldr x12,[x10, #0x20]
7101a50368  and x12,x12,#-0xffff0000000001
7101a5036c  cmp x12,x11
7101a50370  cset w12,cc
7101a50374  csel x9,x9,x10,cc
7101a50378  ldr x10,[x10, w12, UXTW #0x3]
7101a5037c  cbnz x10,0x7101a50364
7101a50380  cmp x9,x8
7101a50384  b.eq 0x7101a50398
7101a50388  ldr x8,[x9, #0x20]
7101a5038c  and x8,x8,#-0xffff0000000001
7101a50390  cmp x11,x8
7101a50394  b.cs 0x7101a50724
7101a50398  adrp x11,0x7104465000
7101a5039c  add x11,x11,#0xf50
7101a503a0  mov w21,#0xffffffff
7101a503a4  add x10,x11,#0xc
7101a503a8  add x9,x11,#0x8
7101a503ac  add x8,x11,#0x4
7101a503b0  ldr w10,[x10]
7101a503b4  ldr w9,[x9]
7101a503b8  ldr w11,[x11]
7101a503bc  ldr w8,[x8]
7101a503c0  str w11,[sp, #0x208]
7101a503c4  str w8,[sp, #0x20c]
7101a503c8  str w9,[sp, #0x210]
7101a503cc  str w10,[sp, #0x214]
7101a503d0  mul x9,x24,x13
7101a503d4  ldr x8,[x19, #0x260]
7101a503d8  ldr x10,[sp, #0x208]
7101a503dc  ldr x11,[sp, #0x210]
7101a503e0  add x8,x8,x9
7101a503e4  stp x10,x11,[x8, #0xd0]
7101a503e8  ldr x23,[x19, #0x260]
7101a503ec  add x8,x23,x9
7101a503f0  ldrb w9,[x8, #0x11f]
7101a503f4  cbz w9,0x7101a504b8
7101a503f8  add x8,x8,#0x11f
7101a503fc  strb wzr,[x8]
7101a50400  mul x8,x24,x13
7101a50404  add x8,x23,x8
7101a50408  ldr w8,[x8, #0x10]
7101a5040c  cmp w8,#0x1
7101a50410  b.ne 0x7101a50440
7101a50414  mul x8,x24,x13
7101a50418  add x8,x23,x8
7101a5041c  ldrb w8,[x8, #0x11e]
7101a50420  cbz w8,0x7101a50440
7101a50424  mul x8,x24,x13
7101a50428  add x8,x23,x8
7101a5042c  ldrb w8,[x8, #0x126]
7101a50430  cbz w8,0x7101a50440
7101a50434  adrp x8,0x7104472000
7101a50438  ldr s0,[x8, #0xb54]
7101a5043c  b 0x7101a50448
7101a50440  adrp x8,0x7104472000
7101a50444  ldr s0,[x8, #0x398]
7101a50448  mul x8,x24,x13
7101a5044c  add x8,x23,x8
7101a50450  ldr s1,[x8, #0x100]
7101a50454  str s0,[x8, #0x104]
7101a50458  fmul s0,s0,s1
7101a5045c  ldr x9,[x8, #0x88]
7101a50460  str s0,[x8, #0x10c]
7101a50464  ldr x10,[x9]
7101a50468  cbz x10,0x7101a50484
7101a5046c  ldr x9,[x9, #0x8]
7101a50470  cbz x9,0x7101a50484
7101a50474  mov v0.16B,v9.16B
7101a50478  add x0,x8,#0x80
7101a5047c  bl 0x710377aee0
7101a50480  mov w13,#0x130
7101a50484  mul x8,x24,x13
7101a50488  add x8,x23,x8
7101a5048c  ldr w8,[x8, #0x14]
7101a50490  cmp w8,#0x2
7101a50494  b.ne 0x7101a504b8
7101a50498  mul x8,x24,x13
7101a5049c  add x8,x23,x8
7101a504a0  ldr x0,[x8, #0x28]
7101a504a4  mov v0.16B,v9.16B
7101a504a8  adrp x1,0x7104441000
7101a504ac  add x1,x1,#0xf72
7101a504b0  bl 0x7103778300
7101a504b4  mov w13,#0x130
7101a504b8  ldr x8,[x19, #0x260]
7101a504bc  madd x8,x24,x13,x8
7101a504c0  str w21,[x8, #0x1c]
7101a504c4  ldr x0,[x19, #0x260]
7101a504c8  mov w1,w24
7101a504cc  mov w2,w24
7101a504d0  bl 0x71032d0e00
7101a504d4  ldr x0,[x19, #0x260]
7101a504d8  mov w1,w24
7101a504dc  mov x2,xzr
7101a504e0  bl 0x71032d0b50
7101a504e4  ldr x8,[x26]
7101a504e8  mov w9,#0x1
7101a504ec  strb w9,[x8, #0x6ba]
7101a504f0  adrp x8,0x710532f000
7101a504f4  ldr x8,[x8, #0x730]
7101a504f8  ldr x8,[x8, #0x8]
7101a504fc  ldr x0,[x8, #0x168]
7101a50500  ldr x2,[sp]
7101a50504  mov w1,wzr
7101a50508  mov w3,w22
7101a5050c  bl 0x7103266830
7101a50510  tst x0,#0xffffffffff
7101a50514  b.eq 0x7101a5059c
7101a50518  adrp x8,0x710532f000
7101a5051c  ldr x8,[x8, #0x8d0]
7101a50520  mov x22,x0
7101a50524  ldr x0,[x8, #0x8]
7101a50528  ldrb w8,[x0, #0x191]
7101a5052c  cbnz w8,0x7101a5059c
7101a50530  mov w2,#0x4
7101a50534  mov x1,x22
7101a50538  bl 0x7103313f20
7101a5053c  tbz w0,#0x0,0x7101a5059c
7101a50540  add x0,sp,#0x148
7101a50544  mov x1,x22
7101a50548  bl 0x71024076d0
7101a5054c  ldr x8,[sp, #0x158]
7101a50550  adrp x9,0x7104f73000
7101a50554  add x9,x9,#0xd50
7101a50558  str x9,[sp, #0x150]
7101a5055c  cbz x8,0x7101a505dc
7101a50560  adrp x9,0x7106dd5000
7101a50564  ldrb w9,[x9, #0x3a8]
7101a50568  cmp w9,#0x1
7101a5056c  b.ne 0x7101a505dc
7101a50570  adrp x10,0x7106dd5000
7101a50574  ldr w9,[sp, #0x160]
7101a50578  ldr w10,[x10, #0x3ac]
7101a5057c  cmp w9,w10
7101a50580  b.ne 0x7101a505dc
7101a50584  ldr wzr,[x8, #0x38]!
7101a50588  ldaxr w9,[x8]
7101a5058c  sub w9,w9,#0x1
7101a50590  stlxr w10,w9,[x8]
7101a50594  cbnz w10,0x7101a50588
7101a50598  b 0x7101a505dc
7101a5059c  mov w8,#0x6500
7101a505a0  movk w8,#0x87, LSL #16
7101a505a4  str w8,[sp, #0x164]
7101a505a8  adrp x8,0x7104f73000
7101a505ac  add x8,x8,#0xd30
7101a505b0  str wzr,[sp, #0x160]
7101a505b4  stp x8,xzr,[sp, #0x150]
7101a505b8  mov x8,#-0x1
7101a505bc  str x8,[sp, #0x170]
7101a505c0  ldr x8,[sp, #0x18]
7101a505c4  strb wzr,[sp, #0x168]
7101a505c8  str wzr,[sp, #0x148]
7101a505cc  stp xzr,xzr,[x8]
7101a505d0  adrp x8,0x7104f73000
7101a505d4  add x8,x8,#0xd50
7101a505d8  str x8,[sp, #0x150]
7101a505dc  adrp x8,0x710532f000
7101a505e0  ldr x8,[x8, #0x8d0]
7101a505e4  str xzr,[sp, #0x158]
7101a505e8  strb wzr,[sp, #0x168]
7101a505ec  ldr x0,[x8, #0x8]
7101a505f0  ldrb w8,[x0, #0x191]
7101a505f4  cbnz w8,0x7101a50674
7101a505f8  mov x1,#0xc262
7101a505fc  movk x1,#0x5b8d, LSL #16
7101a50600  mov w2,#0x4
7101a50604  movk x1,#0x13, LSL #32
7101a50608  bl 0x7103313f20
7101a5060c  tbz w0,#0x0,0x7101a50674
7101a50610  mov x1,#0xc262
7101a50614  movk x1,#0x5b8d, LSL #16
7101a50618  add x0,sp,#0x108
7101a5061c  movk x1,#0x13, LSL #32
7101a50620  bl 0x71024076d0
7101a50624  ldr x8,[sp, #0x118]
7101a50628  adrp x9,0x7104f73000
7101a5062c  add x9,x9,#0xd50
7101a50630  str x9,[sp, #0x110]
7101a50634  cbz x8,0x7101a506b4
7101a50638  adrp x9,0x7106dd5000
7101a5063c  ldrb w9,[x9, #0x3a8]
7101a50640  cmp w9,#0x1
7101a50644  b.ne 0x7101a506b4
7101a50648  adrp x10,0x7106dd5000
7101a5064c  ldr w9,[sp, #0x120]
7101a50650  ldr w10,[x10, #0x3ac]
7101a50654  cmp w9,w10
7101a50658  b.ne 0x7101a506b4
7101a5065c  ldr wzr,[x8, #0x38]!
7101a50660  ldaxr w9,[x8]
7101a50664  sub w9,w9,#0x1
7101a50668  stlxr w10,w9,[x8]
7101a5066c  cbnz w10,0x7101a50660
7101a50670  b 0x7101a506b4
7101a50674  mov w8,#0x6500
7101a50678  movk w8,#0x87, LSL #16
7101a5067c  str w8,[sp, #0x124]
7101a50680  adrp x8,0x7104f73000
7101a50684  add x8,x8,#0xd30
7101a50688  str wzr,[sp, #0x120]
7101a5068c  stp x8,xzr,[sp, #0x110]
7101a50690  mov x8,#-0x1
7101a50694  str x8,[sp, #0x130]
7101a50698  ldr x8,[sp, #0x8]
7101a5069c  strb wzr,[sp, #0x128]
7101a506a0  str wzr,[sp, #0x108]
7101a506a4  stp xzr,xzr,[x8]
7101a506a8  adrp x8,0x7104f73000
7101a506ac  add x8,x8,#0xd50
7101a506b0  str x8,[sp, #0x110]
7101a506b4  str xzr,[sp, #0x118]
7101a506b8  strb wzr,[sp, #0x128]
7101a506bc  ldr x8,[x20, #0x8]
7101a506c0  ldr x8,[x8, #0x10]
7101a506c4  ldr x8,[x8, #0x8]
7101a506c8  ldr w9,[x8, #0x484]
7101a506cc  cmp w9,#0x2
7101a506d0  mov w9,#0x488
7101a506d4  mov w10,#0x48c
7101a506d8  csel x9,x10,x9,eq
7101a506dc  ldr w1,[x8, x9, LSL #0x0]
7101a506e0  cmn w1,#0x1
7101a506e4  b.eq 0x7101a514d0
7101a506e8  adrp x8,0x71052c5000
7101a506ec  ldr x8,[x8, #0x120]
7101a506f0  ldr x0,[x8, #0x8]
7101a506f4  mov v0.16B,v9.16B
7101a506f8  mov v1.16B,v9.16B
7101a506fc  mov x2,#0x9266
7101a50700  movk x2,#0x6093, LSL #16
7101a50704  mov w4,#0x1
7101a50708  movk x2,#0xf, LSL #32
7101a5070c  mov w3,wzr
7101a50710  mov w5,wzr
7101a50714  mov w6,wzr
7101a50718  mov w7,wzr
7101a5071c  bl 0x710175dfc0
7101a50720  b 0x7101a514d0
7101a50724  ldr w21,[x9, #0x28]
7101a50728  adrp x8,0x7104465000
7101a5072c  add x8,x8,#0xf50
7101a50730  add x10,x8,#0xc
7101a50734  add x9,x8,#0x8
7101a50738  add x8,x8,#0x4
7101a5073c  cmn w21,#0x1
7101a50740  b.eq 0x7101a50938
7101a50744  ldp x11,x12,[x0]
7101a50748  sub x12,x12,x11
7101a5074c  mov x14,#0x8ba3
7101a50750  movk x14,#0xba2e, LSL #16
7101a50754  movk x14,#0xa2e8, LSL #32
7101a50758  movk x14,#0x2e8b, LSL #48
7101a5075c  asr x12,x12,#0x4
7101a50760  mul x12,x12,x14
7101a50764  cmp w21,w12
7101a50768  b.ge 0x7101a5093c
7101a5076c  sxtw x8,w21
7101a50770  cmp x12,x8
7101a50774  b.ls 0x7101a5364c
7101a50778  mov w9,#0xb0
7101a5077c  madd x10,x8,x9,x11
7101a50780  ldr x24,[sp, #0x78]
7101a50784  add x8,x10,#0x4c
7101a50788  add x11,x10,#0x48
7101a5078c  add x9,x10,#0x50
7101a50790  add x10,x10,#0x54
7101a50794  mov w13,#0x130
7101a50798  b 0x7101a503b0
7101a5079c  mov x22,xzr
7101a507a0  ldrb w8,[x0, #0x191]
7101a507a4  mov w21,#0x6500
7101a507a8  movk w21,#0x87, LSL #16
7101a507ac  cbnz w8,0x7101a50824
7101a507b0  mov w2,#0x4
7101a507b4  mov x1,x22
7101a507b8  bl 0x7103313f20
7101a507bc  mov w16,#0x130
7101a507c0  tbz w0,#0x0,0x7101a50824
7101a507c4  add x0,sp,#0x1c8
7101a507c8  mov x1,x22
7101a507cc  bl 0x71024076d0
7101a507d0  ldr x8,[sp, #0x1d8]
7101a507d4  mov w16,#0x130
7101a507d8  adrp x9,0x7104f73000
7101a507dc  add x9,x9,#0xd50
7101a507e0  str x9,[sp, #0x1d0]
7101a507e4  cbz x8,0x7101a5085c
7101a507e8  adrp x9,0x7106dd5000
7101a507ec  ldrb w9,[x9, #0x3a8]
7101a507f0  cmp w9,#0x1
7101a507f4  b.ne 0x7101a5085c
7101a507f8  adrp x10,0x7106dd5000
7101a507fc  ldr w9,[sp, #0x1e0]
7101a50800  ldr w10,[x10, #0x3ac]
7101a50804  cmp w9,w10
7101a50808  b.ne 0x7101a5085c
7101a5080c  ldr wzr,[x8, #0x38]!
7101a50810  ldaxr w9,[x8]
7101a50814  sub w9,w9,#0x1
7101a50818  stlxr w10,w9,[x8]
7101a5081c  cbnz w10,0x7101a50810
7101a50820  b 0x7101a5085c
7101a50824  adrp x8,0x7104f73000
7101a50828  add x8,x8,#0xd30
7101a5082c  str wzr,[sp, #0x1e0]
7101a50830  stp x8,xzr,[sp, #0x1d0]
7101a50834  mov x8,#-0x1
7101a50838  str x8,[sp, #0x1f0]
7101a5083c  ldr x8,[sp, #0x20]
7101a50840  str w21,[sp, #0x1e4]
7101a50844  strb wzr,[sp, #0x1e8]
7101a50848  str wzr,[sp, #0x1c8]
7101a5084c  stp xzr,xzr,[x8]
7101a50850  adrp x8,0x7104f73000
7101a50854  add x8,x8,#0xd50
7101a50858  str x8,[sp, #0x1d0]
7101a5085c  str xzr,[sp, #0x1d8]
7101a50860  strb wzr,[sp, #0x1e8]
7101a50864  b 0x7101a4fbf8
7101a50868  mov x22,xzr
7101a5086c  ldrb w8,[x0, #0x191]
7101a50870  mov w21,#0x6500
7101a50874  movk w21,#0x87, LSL #16
7101a50878  cbnz w8,0x7101a508f0
7101a5087c  mov w2,#0x4
7101a50880  mov x1,x22
7101a50884  bl 0x7103313f20
7101a50888  mov w16,#0x130
7101a5088c  tbz w0,#0x0,0x7101a508f0
7101a50890  add x0,sp,#0x448
7101a50894  mov x1,x22
7101a50898  bl 0x71024076d0
7101a5089c  ldr x8,[sp, #0x458]
7101a508a0  mov w16,#0x130
7101a508a4  adrp x9,0x7104f73000
7101a508a8  add x9,x9,#0xd50
7101a508ac  str x9,[sp, #0x450]
7101a508b0  cbz x8,0x7101a5092c
7101a508b4  adrp x9,0x7106dd5000
7101a508b8  ldrb w9,[x9, #0x3a8]
7101a508bc  cmp w9,#0x1
7101a508c0  b.ne 0x7101a5092c
7101a508c4  adrp x10,0x7106dd5000
7101a508c8  ldr w9,[sp, #0x460]
7101a508cc  ldr w10,[x10, #0x3ac]
7101a508d0  cmp w9,w10
7101a508d4  b.ne 0x7101a5092c
7101a508d8  ldr wzr,[x8, #0x38]!
7101a508dc  ldaxr w9,[x8]
7101a508e0  sub w9,w9,#0x1
7101a508e4  stlxr w10,w9,[x8]
7101a508e8  cbnz w10,0x7101a508dc
7101a508ec  b 0x7101a5092c
7101a508f0  adrp x8,0x7104f73000
7101a508f4  add x8,x8,#0xd30
7101a508f8  str x8,[sp, #0x450]
7101a508fc  mov x8,#-0x1
7101a50900  str x8,[sp, #0x470]
7101a50904  ldr x8,[sp, #0x28]
7101a50908  str xzr,[sp, #0x458]
7101a5090c  str wzr,[sp, #0x460]
7101a50910  str w21,[sp, #0x464]
7101a50914  strb wzr,[sp, #0x468]
7101a50918  str wzr,[sp, #0x448]
7101a5091c  stp xzr,xzr,[x8]
7101a50920  adrp x8,0x7104f73000
7101a50924  add x8,x8,#0xd50
7101a50928  str x8,[sp, #0x450]
7101a5092c  str xzr,[sp, #0x458]
7101a50930  strb wzr,[sp, #0x468]
7101a50934  b 0x7101a4fbf8
7101a50938  mov w21,#0xffffffff
7101a5093c  adrp x11,0x7104465000
7101a50940  add x11,x11,#0xf50
7101a50944  b 0x7101a503b0
7101a50948  ldr x8,[x20, #0x8]
7101a5094c  ldr w25,[x8, #0x30]
7101a50950  ldr x28,[x8, #0x10]
7101a50954  ldrb w9,[x8, #0x36]
7101a50958  cbz w9,0x7101a514d4
7101a5095c  ldr x8,[x8, #0x20]
7101a50960  ldr x8,[x8, #0x100]
7101a50964  ldr x9,[x19, #0x260]
7101a50968  ldr s1,[x9, #0xbf0]
7101a5096c  ldr q0,[x8, #0x60]
7101a50970  fcmp s1,s0
7101a50974  b.lt 0x7101a514d4
7101a50978  ldr s1,[x9, #0xbec]
7101a5097c  fcmp s1,s0
7101a50980  b.hi 0x7101a514d4
7101a50984  dup s1,v0.S[0x1]
7101a50988  ldr s2,[x9, #0xbf8]
7101a5098c  fcmp s2,s1
7101a50990  b.lt 0x7101a514d4
7101a50994  ldr s2,[x9, #0xbf4]
7101a50998  fcmp s2,s1
7101a5099c  b.hi 0x7101a514d4
7101a509a0  ldr x9,[x28, #0x8]
7101a509a4  ldr w10,[x9, #0x484]
7101a509a8  sxtw x21,w25
7101a509ac  cbnz w10,0x7101a509bc
7101a509b0  ldr w9,[x9, #0x488]
7101a509b4  cmn w9,#0x1
7101a509b8  b.eq 0x7101a50abc
7101a509bc  ldr q2,[x8, #0x70]
7101a509c0  fcmeq v2.4S,v0.4S,v2.4S
7101a509c4  ext v3.16B,v2.16B,v2.16B,0x8
7101a509c8  and v2.8B,v2.8B,v3.8B
7101a509cc  fmov w8,s2
7101a509d0  mov w9,v2.S[0x1]
7101a509d4  tst w8,w9
7101a509d8  b.eq 0x7101a50acc
7101a509dc  ldr x0,[x19, #0x210]
7101a509e0  ldp x9,x8,[x0]
7101a509e4  subs x8,x8,x9
7101a509e8  mov w27,#0xffffffff
7101a509ec  b.eq 0x7101a50a54
7101a509f0  mov x10,#0x8ba3
7101a509f4  movk x10,#0xba2e, LSL #16
7101a509f8  asr x8,x8,#0x4
7101a509fc  movk x10,#0xa2e8, LSL #32
7101a50a00  movk x10,#0x2e8b, LSL #48
7101a50a04  mul x8,x8,x10
7101a50a08  mov x27,xzr
7101a50a0c  add x9,x9,#0x54
7101a50a10  ldur s2,[x9, #-0x8]
7101a50a14  fcmp s2,s0
7101a50a18  b.lt 0x7101a50a40
7101a50a1c  ldur s2,[x9, #-0xc]
7101a50a20  fcmp s2,s0
7101a50a24  b.hi 0x7101a50a40
7101a50a28  ldr s2,[x9]
7101a50a2c  fcmp s2,s1
7101a50a30  b.lt 0x7101a50a40
7101a50a34  ldur s2,[x9, #-0x4]
7101a50a38  fcmp s2,s1
7101a50a3c  b.ls 0x7101a50a54
7101a50a40  add x27,x27,#0x1
7101a50a44  add x9,x9,#0xb0
7101a50a48  cmp x8,x27
7101a50a4c  b.hi 0x7101a50a10
7101a50a50  mov w27,#0xffffffff
7101a50a54  cmn w25,#0x1
7101a50a58  b.eq 0x7101a50acc
7101a50a5c  cmp w25,#0x8
7101a50a60  b.cs 0x7101a53644
7101a50a64  orr w8,wzr,#0x18
7101a50a68  mul x8,x21,x8
7101a50a6c  add x8,x0,x8
7101a50a70  ldr w8,[x8, #0xe0]
7101a50a74  cmp w27,w8
7101a50a78  b.eq 0x7101a50bd8
7101a50a7c  ldur x8,[x29, #-0x68]
7101a50a80  ldr x9,[x8]
7101a50a84  ldr x8,[sp, #0xa8]
7101a50a88  ldr x8,[x8]
7101a50a8c  sub x9,x9,x8
7101a50a90  asr x9,x9,#0x4
7101a50a94  cmp x9,x21
7101a50a98  b.ls 0x7101a53650
7101a50a9c  add x8,x8,x21, LSL #0x4
7101a50aa0  ldr x8,[x8, #0x8]
7101a50aa4  ldr w3,[x8, #0x154]
7101a50aa8  ldr w4,[x8, #0x1f8]
7101a50aac  ldrb w9,[x8, #0x6bb]
7101a50ab0  cbz w9,0x7101a50ad4
7101a50ab4  ldr w5,[x8, #0x1fc]
7101a50ab8  b 0x7101a50adc
7101a50abc  cmn w25,#0x1
7101a50ac0  b.eq 0x7101a50acc
7101a50ac4  mov w27,#0xffffffff
7101a50ac8  b 0x7101a50bd8
7101a50acc  mov w25,#0xffffffff
7101a50ad0  b 0x7101a514d4
7101a50ad4  mov w8,#0xffffffff
7101a50ad8  mov w5,w8
7101a50adc  mov w1,w27
7101a50ae0  mov w2,w25
7101a50ae4  bl 0x71019f11d0
7101a50ae8  adrp x8,0x710532f000
7101a50aec  ldr x8,[x8, #0x8d0]
7101a50af0  ldr x0,[x8, #0x8]
7101a50af4  ldp x8,x9,[x0, #0x40]
7101a50af8  sub x9,x9,x8
7101a50afc  asr x9,x9,#0x3
7101a50b00  cmp x9,#0x2
7101a50b04  b.cc 0x7101a50b10
7101a50b08  ldr x22,[x8, #0x8]
7101a50b0c  b 0x7101a50b14
7101a50b10  mov x22,xzr
7101a50b14  ldrb w8,[x0, #0x191]
7101a50b18  mov w16,#0x130
7101a50b1c  cbnz w8,0x7101a50b94
7101a50b20  mov w2,#0x4
7101a50b24  mov x1,x22
7101a50b28  bl 0x7103313f20
7101a50b2c  mov w16,#0x130
7101a50b30  tbz w0,#0x0,0x7101a50b94
7101a50b34  sub x0,x29,#0xb8
7101a50b38  mov x1,x22
7101a50b3c  bl 0x71024076d0
7101a50b40  ldur x8,[x29, #-0xa8]
7101a50b44  mov w16,#0x130
7101a50b48  adrp x9,0x7104f73000
7101a50b4c  add x9,x9,#0xd50
7101a50b50  stur x9,[x29, #-0xb0]
7101a50b54  cbz x8,0x7101a50bd0
7101a50b58  adrp x9,0x7106dd5000
7101a50b5c  ldrb w9,[x9, #0x3a8]
7101a50b60  cmp w9,#0x1
7101a50b64  b.ne 0x7101a50bd0
7101a50b68  adrp x10,0x7106dd5000
7101a50b6c  ldur w9,[x29, #-0xa0]
7101a50b70  ldr w10,[x10, #0x3ac]
7101a50b74  cmp w9,w10
7101a50b78  b.ne 0x7101a50bd0
7101a50b7c  ldr wzr,[x8, #0x38]!
7101a50b80  ldaxr w9,[x8]
7101a50b84  sub w9,w9,#0x1
7101a50b88  stlxr w10,w9,[x8]
7101a50b8c  cbnz w10,0x7101a50b80
7101a50b90  b 0x7101a50bd0
7101a50b94  mov w8,#0x6500
7101a50b98  movk w8,#0x87, LSL #16
7101a50b9c  stp wzr,w8,[x29, #-0xa0]
7101a50ba0  adrp x8,0x7104f73000
7101a50ba4  add x8,x8,#0xd30
7101a50ba8  sturb wzr,[x29, #-0x98]
7101a50bac  stp x8,xzr,[x29, #-0xb0]
7101a50bb0  mov x8,#-0x1
7101a50bb4  stur x8,[x29, #-0x90]
7101a50bb8  ldr x8,[sp, #0x70]
7101a50bbc  stur wzr,[x29, #-0xb8]
7101a50bc0  stp xzr,xzr,[x8]
7101a50bc4  adrp x8,0x7104f73000
7101a50bc8  add x8,x8,#0xd50
7101a50bcc  stur x8,[x29, #-0xb0]
7101a50bd0  stur xzr,[x29, #-0xa8]
7101a50bd4  sturb wzr,[x29, #-0x98]
7101a50bd8  ldur x8,[x29, #-0x68]
7101a50bdc  ldr x9,[x8]
7101a50be0  ldr x8,[sp, #0xa8]
7101a50be4  ldr x8,[x8]
7101a50be8  sub x9,x9,x8
7101a50bec  asr x9,x9,#0x4
7101a50bf0  cmp x9,x21
7101a50bf4  b.ls 0x7101a53650
7101a50bf8  add x21,x8,x21, LSL #0x4
7101a50bfc  mov x26,x21
7101a50c00  ldr x8,[x26, #0x8]!
7101a50c04  ldrb w9,[x8, #0x6c0]
7101a50c08  cbz w9,0x7101a50c88
7101a50c0c  ldr x9,[x8, #0x658]
7101a50c10  ldr w9,[x9, #0x60]
7101a50c14  cmp w9,#0x2
7101a50c18  b.ne 0x7101a50c88
7101a50c1c  mov w9,#0x1
7101a50c20  strb w9,[x8, #0x6bd]
7101a50c24  ldrsw x22,[x8, #0x150]
7101a50c28  ldr x8,[x26]
7101a50c2c  strb wzr,[x8, #0x6c0]
7101a50c30  ldr x8,[x26]
7101a50c34  ldr x21,[x8, #0x5e8]
7101a50c38  ldr x0,[x21, #0x10]
7101a50c3c  mov v0.16B,v9.16B
7101a50c40  adrp x23,0x710433a000
7101a50c44  add x23,x23,#0x9c5
7101a50c48  mov x1,x23
7101a50c4c  bl 0x7103778300
7101a50c50  ldr x0,[x21, #0xf0]
7101a50c54  mov v0.16B,v9.16B
7101a50c58  mov x1,x23
7101a50c5c  bl 0x7103778300
7101a50c60  ldr x0,[x21, #0x100]
7101a50c64  mov v0.16B,v9.16B
7101a50c68  mov x1,x23
7101a50c6c  bl 0x7103778300
7101a50c70  ldr x8,[x20, #0x8]
7101a50c74  ldr w8,[x8, #0x28]
7101a50c78  cmp w25,w8
7101a50c7c  b.ne 0x7101a51078
7101a50c80  str w25,[x19, #0x26c]
7101a50c84  b 0x7101a51084
7101a50c88  ldrsw x24,[x8, #0x150]
7101a50c8c  cmp w24,#0xa
7101a50c90  b.cs 0x7101a53644
7101a50c94  ldr x9,[x19, #0x260]
7101a50c98  madd x9,x24,x16,x9
7101a50c9c  ldp q0,q1,[x9, #0xe0]
7101a50ca0  fcmeq v0.4S,v0.4S,v1.4S
7101a50ca4  ext v1.16B,v0.16B,v0.16B,0x8
7101a50ca8  and v0.8B,v0.8B,v1.8B
7101a50cac  mov w9,v0.S[0x1]
7101a50cb0  fmov w10,s0
7101a50cb4  tst w10,w9
7101a50cb8  b.eq 0x7101a50d78
7101a50cbc  cmn w27,#0x1
7101a50cc0  b.eq 0x7101a50d84
7101a50cc4  ldr x0,[x19, #0x210]
7101a50cc8  ldp x9,x10,[x0]
7101a50ccc  sub x10,x10,x9
7101a50cd0  mov x11,#0x8ba3
7101a50cd4  movk x11,#0xba2e, LSL #16
7101a50cd8  movk x11,#0xa2e8, LSL #32
7101a50cdc  movk x11,#0x2e8b, LSL #48
7101a50ce0  asr x10,x10,#0x4
7101a50ce4  mul x10,x10,x11
7101a50ce8  cmp w27,w10
7101a50cec  b.ge 0x7101a50d28
7101a50cf0  sxtw x11,w27
7101a50cf4  cmp x10,x11
7101a50cf8  b.ls 0x7101a5364c
7101a50cfc  mov w10,#0xb0
7101a50d00  madd x9,x11,x10,x9
7101a50d04  ldrb w10,[x9, #0xa1]
7101a50d08  cbnz w10,0x7101a50d28
7101a50d0c  ldr x9,[x9, #0x8]
7101a50d10  and x10,x9,#-0x100000000000000
7101a50d14  mov x11,#-0x3f00000000000000
7101a50d18  cmp x10,x11
7101a50d1c  b.ne 0x7101a50d28
7101a50d20  and x9,x9,#0xffffffffff
7101a50d24  cbnz x9,0x7101a50d2c
7101a50d28  strb wzr,[x8, #0x6be]
7101a50d2c  ldr x0,[x19, #0x210]
7101a50d30  ldp x8,x9,[x0]
7101a50d34  sub x9,x9,x8
7101a50d38  mov x10,#0x8ba3
7101a50d3c  movk x10,#0xba2e, LSL #16
7101a50d40  movk x10,#0xa2e8, LSL #32
7101a50d44  movk x10,#0x2e8b, LSL #48
7101a50d48  asr x9,x9,#0x4
7101a50d4c  mul x9,x9,x10
7101a50d50  cmp w27,w9
7101a50d54  b.ge 0x7101a50d88
7101a50d58  sxtw x10,w27
7101a50d5c  cmp x9,x10
7101a50d60  b.ls 0x7101a5364c
7101a50d64  mov w9,#0xb0
7101a50d68  madd x8,x10,x9,x8
7101a50d6c  ldrb w8,[x8, #0xa1]
7101a50d70  cbnz w8,0x7101a50d90
7101a50d74  b 0x7101a50d88
7101a50d78  mov x27,#0xff0000000000
7101a50d7c  movk x27,#0xc1ff, LSL #48
7101a50d80  b 0x7101a50dc8
7101a50d84  strb wzr,[x8, #0x6be]
7101a50d88  ldr x8,[x26]
7101a50d8c  strb wzr,[x8, #0x6bf]
7101a50d90  ldr x8,[x26]
7101a50d94  ldrb w9,[x8, #0x6be]
7101a50d98  cbz w9,0x7101a50da4
7101a50d9c  mov w2,#0x1
7101a50da0  b 0x7101a50db0
7101a50da4  ldrb w8,[x8, #0x6bf]
7101a50da8  cmp w8,#0x0
7101a50dac  cset w2,ne
7101a50db0  ldr x0,[sp, #0x68]
7101a50db4  mov w1,w27
7101a50db8  bl 0x71019f1fa0
7101a50dbc  ldr x8,[x26]
7101a50dc0  mov x27,x0
7101a50dc4  mov w16,#0x130
7101a50dc8  ldr x11,[x8, #0x200]
7101a50dcc  tst x27,#0xffffffffff
7101a50dd0  and x9,x27,#-0x100000000000000
7101a50dd4  mov x12,#-0x3f00000000000000
7101a50dd8  cset w8,ne
7101a50ddc  cmp x9,x12
7101a50de0  cset w10,eq
7101a50de4  and w22,w10,w8
7101a50de8  and x8,x11,#0xffffffffff
7101a50dec  tbz w22,#0x0,0x7101a50e10
7101a50df0  and x10,x11,#-0x100000000000000
7101a50df4  cmp x10,x12
7101a50df8  b.ne 0x7101a50e14
7101a50dfc  cbz x8,0x7101a50e14
7101a50e00  eor x8,x11,x27
7101a50e04  tst x8,#0xffffffffff
7101a50e08  b.ne 0x7101a50e50
7101a50e0c  b 0x7101a50fd0
7101a50e10  and x10,x11,#-0x100000000000000
7101a50e14  mov x12,#-0x3f00000000000000
7101a50e18  and x11,x27,#0xffffffffff
7101a50e1c  cmp x9,x12
7101a50e20  cset w9,eq
7101a50e24  cmp x11,#0x0
7101a50e28  cset w11,ne
7101a50e2c  cmp x8,#0x0
7101a50e30  cset w8,ne
7101a50e34  cmp x10,x12
7101a50e38  cset w10,eq
7101a50e3c  and w9,w9,w11
7101a50e40  and w8,w8,w10
7101a50e44  eor w8,w8,w9
7101a50e48  cmp w8,#0x1
7101a50e4c  b.ne 0x7101a50fd0
7101a50e50  ldr x8,[x19, #0x250]
7101a50e54  ldp x9,x10,[x8, #0xc0]
7101a50e58  cmp x9,x10
7101a50e5c  b.eq 0x7101a50ed0
7101a50e60  mov x0,x8
7101a50e64  ldr x11,[x0, #0xa8]!
7101a50e68  ldr x12,[x0, #0x8]
7101a50e6c  sub x12,x12,x11
7101a50e70  mov x13,#0xefbf
7101a50e74  movk x13,#0xbefb, LSL #16
7101a50e78  movk x13,#0xfbef, LSL #32
7101a50e7c  movk x13,#0xefbe, LSL #48
7101a50e80  asr x12,x12,#0x4
7101a50e84  mul x12,x12,x13
7101a50e88  ldr x14,[x9, #0x8]
7101a50e8c  ldrsw x13,[x14, #0x8]
7101a50e90  cmp x12,x13
7101a50e94  b.ls 0x7101a5364c
7101a50e98  orr w15,wzr,#0x3f0
7101a50e9c  madd x15,x13,x15,x11
7101a50ea0  ldrb w15,[x15, #0x3ed]
7101a50ea4  cbz w15,0x7101a50ec4
7101a50ea8  ldr x14,[x14, #0xa0]
7101a50eac  ldr w14,[x14, #0x254]
7101a50eb0  cmn w14,#0x1
7101a50eb4  b.eq 0x7101a50ec4
7101a50eb8  ldr w14,[x8, #0x4d8]
7101a50ebc  cmp w13,w14
7101a50ec0  b.ne 0x7101a4fc08
7101a50ec4  add x9,x9,#0x10
7101a50ec8  cmp x10,x9
7101a50ecc  b.ne 0x7101a50e88
7101a50ed0  mov x0,x19
7101a50ed4  mov x1,x27
7101a50ed8  mov w2,wzr
7101a50edc  mov w4,wzr
7101a50ee0  bl 0x7101a55fe0
7101a50ee4  mov w3,w0
7101a50ee8  ldr x0,[x26]
7101a50eec  mov x2,#0xff0000000000
7101a50ef0  mov x1,x27
7101a50ef4  movk x2,#0xc1ff, LSL #48
7101a50ef8  bl 0x7101a029b0
7101a50efc  ldr x23,[x26]
7101a50f00  ldr x8,[x23, #0x390]
7101a50f04  ldr x9,[x23, #0x398]
7101a50f08  ldr x10,[x23, #0x3a0]
7101a50f0c  ldrh w11,[x23, #0x3a8]
7101a50f10  strh w11,[sp, #0x220]
7101a50f14  add x11,x23,#0x3ac
7101a50f18  str x10,[sp, #0x218]
7101a50f1c  str x9,[sp, #0x210]
7101a50f20  str x8,[sp, #0x208]
7101a50f24  ldr x8,[x11]
7101a50f28  ldrh w9,[x23, #0x3b4]
7101a50f2c  ldp x0,x10,[sp, #0x50]
7101a50f30  add x1,x23,#0x3c0
7101a50f34  strh w9,[x10, #0x8]
7101a50f38  str x8,[x10]
7101a50f3c  str wzr,[sp, #0x230]
7101a50f40  bl 0x7101696040
7101a50f44  add x9,x23,#0x3f5
7101a50f48  ldr x8,[x23, #0x3f0]
7101a50f4c  add x1,x23,#0x418
7101a50f50  ldr x9,[x9]
7101a50f54  ldp x11,x10,[sp, #0x40]
7101a50f58  stur x9,[x10, #0x5]
7101a50f5c  str x8,[x10]
7101a50f60  ldr x8,[x23, #0x400]
7101a50f64  ldr x9,[x23, #0x408]
7101a50f68  ldrh w10,[x23, #0x410]
7101a50f6c  strh w10,[x11, #0x10]
7101a50f70  stp x8,x9,[x11]
7101a50f74  ldr x0,[sp, #0x38]
7101a50f78  bl 0x71015547e0
7101a50f7c  ldr x8,[x23, #0x5b8]
7101a50f80  ldr x9,[x23, #0x5c0]
7101a50f84  add x1,sp,#0x208
7101a50f88  ldrb w10,[x23, #0x5c8]
7101a50f8c  ldr x11,[sp, #0x30]
7101a50f90  strb w10,[x11, #0x10]
7101a50f94  stp x8,x9,[x11]
7101a50f98  str wzr,[sp, #0x210]
7101a50f9c  ldr x0,[x26]
7101a50fa0  bl 0x7101a07110
7101a50fa4  mov x0,x19
7101a50fa8  mov x1,x21
7101a50fac  bl 0x7101a563c0
7101a50fb0  ldr x8,[x26]
7101a50fb4  ldr x8,[x8, #0x5e8]
7101a50fb8  ldr x0,[x8, #0x10]
7101a50fbc  mov v0.16B,v9.16B
7101a50fc0  adrp x1,0x710425e000
7101a50fc4  add x1,x1,#0xd91
7101a50fc8  bl 0x7103778300
7101a50fcc  mov w16,#0x130
7101a50fd0  ldr x8,[x28, #0x8]
7101a50fd4  ldrb w9,[x8, #0x4aa]
7101a50fd8  cbz w9,0x7101a514d4
7101a50fdc  ldrb w8,[x8, #0x1a8]
7101a50fe0  tbz w8,#0x1,0x7101a514d4
7101a50fe4  ldr x23,[x26]
7101a50fe8  str x21,[sp, #0x88]
7101a50fec  ldr x21,[x23, #0x200]
7101a50ff0  and x8,x21,#-0x100000000000000
7101a50ff4  mov x9,#-0x3f00000000000000
7101a50ff8  cmp x8,x9
7101a50ffc  b.ne 0x7101a4fa60
7101a51000  and x8,x21,#0xffffffffff
7101a51004  cbz x8,0x7101a4fa60
7101a51008  str x24,[sp, #0x78]
7101a5100c  adrp x24,0x710532f000
7101a51010  ldr x8,[x24, #0x730]
7101a51014  ldr x8,[x8, #0x8]
7101a51018  add x0,x8,#0x160
7101a5101c  mov x1,x21
7101a51020  bl 0x7103265e70
7101a51024  tbz w0,#0x0,0x7101a4fc7c
7101a51028  ldr x8,[x23, #0x678]
7101a5102c  cbnz x8,0x7101a51050
7101a51030  ldr x8,[x23, #0x680]
7101a51034  cbnz x8,0x7101a51050
7101a51038  mov x0,x23
7101a5103c  bl 0x7101a03490
7101a51040  ldr x8,[x23, #0x5e8]
7101a51044  str x20,[x23, #0x680]
7101a51048  str x20,[x23, #0x690]
7101a5104c  strb wzr,[x8, #0x261]
7101a51050  adrp x8,0x710532f000
7101a51054  ldr x8,[x8, #0x8d0]
7101a51058  ldr x0,[x8, #0x8]
7101a5105c  ldp x8,x9,[x0, #0x40]
7101a51060  sub x9,x9,x8
7101a51064  asr x9,x9,#0x3
7101a51068  cmp x9,#0x3
7101a5106c  b.cc 0x7101a4fce8
7101a51070  ldr x22,[x8, #0x10]
7101a51074  b 0x7101a4fcec
7101a51078  ldr x0,[x26]
7101a5107c  mov x1,xzr
7101a51080  bl 0x7101a06920
7101a51084  ldr x8,[x20, #0x8]
7101a51088  ldr x8,[x8, #0x20]
7101a5108c  strb wzr,[x8, #0x167]
7101a51090  ldr x8,[x20, #0x8]
7101a51094  mov w9,#0xffffffff
7101a51098  str w9,[x8, #0x30]
7101a5109c  ldr x8,[x20, #0x8]
7101a510a0  ldr x8,[x8, #0x10]
7101a510a4  ldr x21,[x8, #0x8]
7101a510a8  add x0,x21,#0x198
7101a510ac  mov w1,wzr
7101a510b0  mov w2,#0x264
7101a510b4  adrp x24,0x710532f000
7101a510b8  adrp x23,0x7104465000
7101a510bc  add x23,x23,#0xf50
7101a510c0  bl 0x71039c02a0
7101a510c4  add x8,x21,#0x40c
7101a510c8  str xzr,[x8]
7101a510cc  add x8,x21,#0x424
7101a510d0  str xzr,[x8]
7101a510d4  str wzr,[x21, #0x480]
7101a510d8  adrp x8,0x71052a8000
7101a510dc  ldr x8,[x8, #0xa80]
7101a510e0  ldr q0,[x8]
7101a510e4  str xzr,[x21, #0x4a0]
7101a510e8  str q0,[x21, #0x460]
7101a510ec  str q0,[x21, #0x430]
7101a510f0  str q0,[x21, #0x440]
7101a510f4  str q0,[x21, #0x450]
7101a510f8  str xzr,[x21, #0x498]
7101a510fc  ldr x0,[x19, #0x210]
7101a51100  mov x8,x0
7101a51104  ldr x10,[x8, #0x20]!
7101a51108  mov w13,#0x130
7101a5110c  cbz x10,0x7101a51154
7101a51110  ldr x9,[x26]
7101a51114  ldr x9,[x9, #0x200]
7101a51118  and x11,x9,#-0xffff0000000001
7101a5111c  mov x9,x8
7101a51120  ldr x12,[x10, #0x20]
7101a51124  and x12,x12,#-0xffff0000000001
7101a51128  cmp x12,x11
7101a5112c  cset w12,cc
7101a51130  csel x9,x9,x10,cc
7101a51134  ldr x10,[x10, w12, UXTW #0x3]
7101a51138  cbnz x10,0x7101a51120
7101a5113c  cmp x9,x8
7101a51140  b.eq 0x7101a51154
7101a51144  ldr x8,[x9, #0x20]
7101a51148  and x8,x8,#-0xffff0000000001
7101a5114c  cmp x11,x8
7101a51150  b.cs 0x7101a4fc14
7101a51154  add x10,x23,#0xc
7101a51158  add x9,x23,#0x8
7101a5115c  add x8,x23,#0x4
7101a51160  mov w21,#0xffffffff
7101a51164  mov x11,x23
7101a51168  ldr w10,[x10]
7101a5116c  ldr w9,[x9]
7101a51170  cmp w22,#0xa
7101a51174  ldr w11,[x11]
7101a51178  ldr w8,[x8]
7101a5117c  str w11,[sp, #0x208]
7101a51180  str w8,[sp, #0x20c]
7101a51184  str w9,[sp, #0x210]
7101a51188  str w10,[sp, #0x214]
7101a5118c  b.cs 0x7101a53644
7101a51190  mul x9,x22,x13
7101a51194  ldr x8,[x19, #0x260]
7101a51198  ldr x10,[sp, #0x208]
7101a5119c  ldr x11,[sp, #0x210]
7101a511a0  add x8,x8,x9
7101a511a4  stp x10,x11,[x8, #0xd0]
7101a511a8  ldr x23,[x19, #0x260]
7101a511ac  add x8,x23,x9
7101a511b0  ldrb w9,[x8, #0x11f]
7101a511b4  cbz w9,0x7101a51260
7101a511b8  add x8,x8,#0x11f
7101a511bc  strb wzr,[x8]
7101a511c0  madd x8,x22,x13,x23
7101a511c4  ldr w8,[x8, #0x10]
7101a511c8  cmp w8,#0x1
7101a511cc  b.ne 0x7101a511f4
7101a511d0  madd x8,x22,x13,x23
7101a511d4  ldrb w8,[x8, #0x11e]
7101a511d8  cbz w8,0x7101a511f4
7101a511dc  madd x8,x22,x13,x23
7101a511e0  ldrb w8,[x8, #0x126]
7101a511e4  cbz w8,0x7101a511f4
7101a511e8  adrp x8,0x7104472000
7101a511ec  ldr s0,[x8, #0xb54]
7101a511f0  b 0x7101a511fc
7101a511f4  adrp x8,0x7104472000
7101a511f8  ldr s0,[x8, #0x398]
7101a511fc  madd x8,x22,x13,x23
7101a51200  ldr s1,[x8, #0x100]
7101a51204  str s0,[x8, #0x104]
7101a51208  fmul s0,s0,s1
7101a5120c  ldr x9,[x8, #0x88]
7101a51210  str s0,[x8, #0x10c]
7101a51214  ldr x10,[x9]
7101a51218  cbz x10,0x7101a51234
7101a5121c  ldr x9,[x9, #0x8]
7101a51220  cbz x9,0x7101a51234
7101a51224  mov v0.16B,v9.16B
7101a51228  add x0,x8,#0x80
7101a5122c  bl 0x710377aee0
7101a51230  mov w13,#0x130
7101a51234  madd x8,x22,x13,x23
7101a51238  ldr w8,[x8, #0x14]
7101a5123c  cmp w8,#0x2
7101a51240  b.ne 0x7101a51260
7101a51244  madd x8,x22,x13,x23
7101a51248  ldr x0,[x8, #0x28]
7101a5124c  mov v0.16B,v9.16B
7101a51250  adrp x1,0x7104441000
7101a51254  add x1,x1,#0xf72
7101a51258  bl 0x7103778300
7101a5125c  mov w13,#0x130
7101a51260  ldr x8,[x19, #0x260]
7101a51264  madd x8,x22,x13,x8
7101a51268  str w21,[x8, #0x1c]
7101a5126c  ldr x0,[x19, #0x260]
7101a51270  mov w1,w22
7101a51274  mov w2,w22
7101a51278  bl 0x71032d0e00
7101a5127c  ldr x0,[x19, #0x260]
7101a51280  mov w1,w22
7101a51284  mov x2,xzr
7101a51288  bl 0x71032d0b50
7101a5128c  ldr x8,[x26]
7101a51290  add x0,x8,#0x1f0
7101a51294  bl 0x7101a105b0
7101a51298  ldr x8,[x26]
7101a5129c  ldr x2,[x8, #0x200]
7101a512a0  ldr x8,[x24, #0x730]
7101a512a4  ldr x8,[x8, #0x8]
7101a512a8  cmp w0,#0x2
7101a512ac  ldr x0,[x8, #0x168]
7101a512b0  cset w3,eq
7101a512b4  mov w1,wzr
7101a512b8  bl 0x7103266830
7101a512bc  tst x0,#0xffffffffff
7101a512c0  b.eq 0x7101a51348
7101a512c4  adrp x8,0x710532f000
7101a512c8  ldr x8,[x8, #0x8d0]
7101a512cc  mov x22,x0
7101a512d0  ldr x0,[x8, #0x8]
7101a512d4  ldrb w8,[x0, #0x191]
7101a512d8  cbnz w8,0x7101a51348
7101a512dc  mov w2,#0x4
7101a512e0  mov x1,x22
7101a512e4  bl 0x7103313f20
7101a512e8  tbz w0,#0x0,0x7101a51348
7101a512ec  sub x0,x29,#0xf8
7101a512f0  mov x1,x22
7101a512f4  bl 0x71024076d0
7101a512f8  ldur x8,[x29, #-0xe8]
7101a512fc  adrp x9,0x7104f73000
7101a51300  add x9,x9,#0xd50
7101a51304  stur x9,[x29, #-0xf0]
7101a51308  cbz x8,0x7101a51384
7101a5130c  adrp x9,0x7106dd5000
7101a51310  ldrb w9,[x9, #0x3a8]
7101a51314  cmp w9,#0x1
7101a51318  b.ne 0x7101a51384
7101a5131c  adrp x10,0x7106dd5000
7101a51320  ldur w9,[x29, #-0xe0]
7101a51324  ldr w10,[x10, #0x3ac]
7101a51328  cmp w9,w10
7101a5132c  b.ne 0x7101a51384
7101a51330  ldr wzr,[x8, #0x38]!
7101a51334  ldaxr w9,[x8]
7101a51338  sub w9,w9,#0x1
7101a5133c  stlxr w10,w9,[x8]
7101a51340  cbnz w10,0x7101a51334
7101a51344  b 0x7101a51384
7101a51348  mov w8,#0x6500
7101a5134c  movk w8,#0x87, LSL #16
7101a51350  stp wzr,w8,[x29, #-0xe0]
7101a51354  adrp x8,0x7104f73000
7101a51358  add x8,x8,#0xd30
7101a5135c  sturb wzr,[x29, #-0xd8]
7101a51360  stp x8,xzr,[x29, #-0xf0]
7101a51364  mov x8,#-0x1
7101a51368  stur wzr,[x29, #-0xf8]
7101a5136c  stur x8,[x29, #-0xd0]
7101a51370  ldr x8,[sp, #0x60]
7101a51374  stp xzr,xzr,[x8]
7101a51378  adrp x8,0x7104f73000
7101a5137c  add x8,x8,#0xd50
7101a51380  stur x8,[x29, #-0xf0]
7101a51384  adrp x8,0x710532f000
7101a51388  ldr x8,[x8, #0x8d0]
7101a5138c  stur xzr,[x29, #-0xe8]
7101a51390  sturb wzr,[x29, #-0xd8]
7101a51394  ldr x0,[x8, #0x8]
7101a51398  ldrb w8,[x0, #0x191]
7101a5139c  cbnz w8,0x7101a5141c
7101a513a0  mov x1,#0xc262
7101a513a4  movk x1,#0x5b8d, LSL #16
7101a513a8  mov w2,#0x4
7101a513ac  movk x1,#0x13, LSL #32
7101a513b0  bl 0x7103313f20
7101a513b4  tbz w0,#0x0,0x7101a5141c
7101a513b8  mov x1,#0xc262
7101a513bc  movk x1,#0x5b8d, LSL #16
7101a513c0  add x0,sp,#0x448
7101a513c4  movk x1,#0x13, LSL #32
7101a513c8  bl 0x71024076d0
7101a513cc  ldr x8,[sp, #0x458]
7101a513d0  adrp x9,0x7104f73000
7101a513d4  add x9,x9,#0xd50
7101a513d8  str x9,[sp, #0x450]
7101a513dc  cbz x8,0x7101a51460
7101a513e0  adrp x9,0x7106dd5000
7101a513e4  ldrb w9,[x9, #0x3a8]
7101a513e8  cmp w9,#0x1
7101a513ec  b.ne 0x7101a51460
7101a513f0  adrp x10,0x7106dd5000
7101a513f4  ldr w9,[sp, #0x460]
7101a513f8  ldr w10,[x10, #0x3ac]
7101a513fc  cmp w9,w10
7101a51400  b.ne 0x7101a51460
7101a51404  ldr wzr,[x8, #0x38]!
7101a51408  ldaxr w9,[x8]
7101a5140c  sub w9,w9,#0x1
7101a51410  stlxr w10,w9,[x8]
7101a51414  cbnz w10,0x7101a51408
7101a51418  b 0x7101a51460
7101a5141c  mov w8,#0x6500
7101a51420  movk w8,#0x87, LSL #16
7101a51424  str w8,[sp, #0x464]
7101a51428  adrp x8,0x7104f73000
7101a5142c  add x8,x8,#0xd30
7101a51430  str x8,[sp, #0x450]
7101a51434  mov x8,#-0x1
7101a51438  str x8,[sp, #0x470]
7101a5143c  ldr x8,[sp, #0x28]
7101a51440  str xzr,[sp, #0x458]
7101a51444  str wzr,[sp, #0x460]
7101a51448  strb wzr,[sp, #0x468]
7101a5144c  str wzr,[sp, #0x448]
7101a51450  stp xzr,xzr,[x8]
7101a51454  adrp x8,0x7104f73000
7101a51458  add x8,x8,#0xd50
7101a5145c  str x8,[sp, #0x450]
7101a51460  str xzr,[sp, #0x458]
7101a51464  strb wzr,[sp, #0x468]
7101a51468  ldr x8,[x20, #0x8]
7101a5146c  ldr x8,[x8, #0x10]
7101a51470  ldr x8,[x8, #0x8]
7101a51474  ldr w9,[x8, #0x484]
7101a51478  cmp w9,#0x2
7101a5147c  mov w9,#0x488
7101a51480  mov w10,#0x48c
7101a51484  csel x9,x10,x9,eq
7101a51488  ldr w1,[x8, x9, LSL #0x0]
7101a5148c  cmn w1,#0x1
7101a51490  b.eq 0x7101a514cc
7101a51494  adrp x8,0x71052c5000
7101a51498  ldr x8,[x8, #0x120]
7101a5149c  ldr x0,[x8, #0x8]
7101a514a0  mov v0.16B,v9.16B
7101a514a4  mov v1.16B,v9.16B
7101a514a8  mov x2,#0x9266
7101a514ac  movk x2,#0x6093, LSL #16
7101a514b0  mov w4,#0x1
7101a514b4  movk x2,#0xf, LSL #32
7101a514b8  mov w3,wzr
7101a514bc  mov w5,wzr
7101a514c0  mov w6,wzr
7101a514c4  mov w7,wzr
7101a514c8  bl 0x710175dfc0
7101a514cc  mov w25,#0xffffffff
7101a514d0  mov w16,#0x130
7101a514d4  ldr x9,[x20, #0x8]
7101a514d8  ldr w8,[x9, #0x28]
7101a514dc  cmp w8,#0xa
7101a514e0  b.cs 0x7101a53644
7101a514e4  ldr x11,[x19, #0x260]
7101a514e8  sxtw x10,w8
7101a514ec  madd x10,x10,x16,x11
7101a514f0  ldrb w10,[x10, #0x11b]
7101a514f4  ldrb w12,[x9, #0x36]
7101a514f8  cmp w10,#0x0
7101a514fc  cset w10,ne
7101a51500  cmn w25,#0x1
7101a51504  cset w11,eq
7101a51508  cmp w12,#0x0
7101a5150c  cset w12,ne
7101a51510  and w12,w11,w12
7101a51514  cmp w12,#0x1
7101a51518  b.ne 0x7101a51540
7101a5151c  ldr x13,[x28, #0x8]
7101a51520  ldrb w14,[x13, #0x4aa]
7101a51524  cbz w14,0x7101a51a60
7101a51528  ldr w21,[x9, #0x2c]
7101a5152c  cmn w21,#0x1
7101a51530  b.eq 0x7101a5154c
7101a51534  ldr w14,[x13, #0x1a8]
7101a51538  tbnz w14,#0x1,0x7101a51578
7101a5153c  b 0x7101a5154c
7101a51540  ldr x13,[x28, #0x8]
7101a51544  ldrb w14,[x13, #0x4aa]
7101a51548  cbz w14,0x7101a51a60
7101a5154c  and w10,w11,w10
7101a51550  orr w11,w10,w12
7101a51554  ldrb w12,[x13, #0x1ac]
7101a51558  eor w11,w11,#0x1
7101a5155c  tst w12,#0x2
7101a51560  cset w12,eq
7101a51564  orr w11,w11,w12
7101a51568  tbnz w11,#0x0,0x7101a51a60
7101a5156c  ldr w21,[x9, #0x2c]
7101a51570  cmn w21,#0x1
7101a51574  b.eq 0x7101a517e4
7101a51578  adrp x8,0x710532f000
7101a5157c  ldr x8,[x8, #0x8d0]
7101a51580  ldr x0,[x8, #0x8]
7101a51584  ldrb w8,[x0, #0x191]
7101a51588  cbnz w8,0x7101a51610
7101a5158c  mov x1,#0x9063
7101a51590  movk x1,#0x2944, LSL #16
7101a51594  mov w2,#0x4
7101a51598  movk x1,#0x15, LSL #32
7101a5159c  bl 0x7103313f20
7101a515a0  tbz w0,#0x0,0x7101a51610
7101a515a4  mov x1,#0x9063
7101a515a8  movk x1,#0x2944, LSL #16
7101a515ac  add x0,sp,#0xc8
7101a515b0  movk x1,#0x15, LSL #32
7101a515b4  bl 0x71024076d0
7101a515b8  ldr x8,[sp, #0xd8]
7101a515bc  adrp x9,0x7104f73000
7101a515c0  add x9,x9,#0xd50
7101a515c4  mov w24,#0x6500
7101a515c8  movk w24,#0x87, LSL #16
7101a515cc  str x9,[sp, #0xd0]
7101a515d0  cbz x8,0x7101a5164c
7101a515d4  adrp x9,0x7106dd5000
7101a515d8  ldrb w9,[x9, #0x3a8]
7101a515dc  cmp w9,#0x1
7101a515e0  b.ne 0x7101a5164c
7101a515e4  adrp x10,0x7106dd5000
7101a515e8  ldr w9,[sp, #0xe0]
7101a515ec  ldr w10,[x10, #0x3ac]
7101a515f0  cmp w9,w10
7101a515f4  b.ne 0x7101a5164c
7101a515f8  ldr wzr,[x8, #0x38]!
7101a515fc  ldaxr w9,[x8]
7101a51600  sub w9,w9,#0x1
7101a51604  stlxr w10,w9,[x8]
7101a51608  cbnz w10,0x7101a515fc
7101a5160c  b 0x7101a5164c
7101a51610  adrp x8,0x7104f73000
7101a51614  add x8,x8,#0xd30
7101a51618  mov w24,#0x6500
7101a5161c  movk w24,#0x87, LSL #16
7101a51620  stp x8,xzr,[sp, #0xd0]
7101a51624  mov x8,#-0x1
7101a51628  str x8,[sp, #0xf0]
7101a5162c  ldr x8,[sp, #0x90]
7101a51630  stp wzr,w24,[sp, #0xe0]
7101a51634  strb wzr,[sp, #0xe8]
7101a51638  str wzr,[sp, #0xc8]
7101a5163c  stp xzr,xzr,[x8]
7101a51640  adrp x8,0x7104f73000
7101a51644  add x8,x8,#0xd50
7101a51648  str x8,[sp, #0xd0]
7101a5164c  str xzr,[sp, #0xd8]
7101a51650  strb wzr,[sp, #0xe8]
7101a51654  ldr x8,[x20, #0x8]
7101a51658  ldr x8,[x8, #0x20]
7101a5165c  mov w9,#0x1
7101a51660  strb w9,[x8, #0x167]
7101a51664  ldr x8,[x20, #0x8]
7101a51668  str w21,[x8, #0x30]
7101a5166c  ldr x8,[x20, #0x8]
7101a51670  ldr x8,[x8, #0x10]
7101a51674  ldr x22,[x8, #0x8]
7101a51678  add x0,x22,#0x198
7101a5167c  mov w1,wzr
7101a51680  mov w2,#0x264
7101a51684  bl 0x71039c02a0
7101a51688  add x8,x22,#0x40c
7101a5168c  str xzr,[x8]
7101a51690  add x8,x22,#0x424
7101a51694  str xzr,[x8]
7101a51698  str wzr,[x22, #0x480]
7101a5169c  adrp x8,0x71052a8000
7101a516a0  ldr x8,[x8, #0xa80]
7101a516a4  ldr q0,[x8]
7101a516a8  ldur x9,[x29, #-0x68]
7101a516ac  str q0,[x22, #0x460]
7101a516b0  str q0,[x22, #0x430]
7101a516b4  str q0,[x22, #0x440]
7101a516b8  str q0,[x22, #0x450]
7101a516bc  str xzr,[x22, #0x4a0]
7101a516c0  str xzr,[x22, #0x498]
7101a516c4  ldr x10,[x9]
7101a516c8  ldr x9,[sp, #0xa8]
7101a516cc  ldr x9,[x9]
7101a516d0  sub x10,x10,x9
7101a516d4  sxtw x8,w21
7101a516d8  asr x10,x10,#0x4
7101a516dc  cmp x10,x8
7101a516e0  b.ls 0x7101a53650
7101a516e4  add x22,x9,x8, LSL #0x4
7101a516e8  mov x21,x22
7101a516ec  mov v0.16B,v8.16B
7101a516f0  ldr x8,[x21, #0x8]!
7101a516f4  strb wzr,[x8, #0x6bd]
7101a516f8  ldr x8,[x21]
7101a516fc  ldr x23,[x8, #0x5e8]
7101a51700  ldr x0,[x23, #0x10]
7101a51704  adrp x25,0x710433a000
7101a51708  add x25,x25,#0x9c5
7101a5170c  mov x1,x25
7101a51710  bl 0x7103778630
7101a51714  ldr x0,[x23, #0xf0]
7101a51718  mov v0.16B,v8.16B
7101a5171c  mov x1,x25
7101a51720  bl 0x7103778630
7101a51724  ldr x0,[x23, #0x100]
7101a51728  mov v0.16B,v8.16B
7101a5172c  mov x1,x25
7101a51730  bl 0x7103778630
7101a51734  ldr x0,[x21]
7101a51738  ldr x8,[x0, #0x678]
7101a5173c  cbnz x8,0x7101a51748
7101a51740  mov x1,x20
7101a51744  bl 0x7101a06920
7101a51748  ldr x25,[x19, #0x250]
7101a5174c  ldrb w8,[x25, #0x4f9]
7101a51750  cbz w8,0x7101a51920
7101a51754  ldr w8,[x25, #0x10]
7101a51758  cmp w8,#0x1
7101a5175c  b.lt 0x7101a517b4
7101a51760  mov x0,x25
7101a51764  ldr x11,[x0, #0xa8]!
7101a51768  ldr x10,[x0, #0x8]
7101a5176c  sub x10,x10,x11
7101a51770  mov x12,#0xefbf
7101a51774  movk x12,#0xbefb, LSL #16
7101a51778  movk x12,#0xfbef, LSL #32
7101a5177c  movk x12,#0xefbe, LSL #48
7101a51780  asr x10,x10,#0x4
7101a51784  mov x9,xzr
7101a51788  add x11,x11,#0x3ed
7101a5178c  mul x10,x10,x12
7101a51790  cmp x10,x9
7101a51794  b.ls 0x7101a5364c
7101a51798  ldrb w12,[x11]
7101a5179c  cmp w12,#0x1
7101a517a0  b.ne 0x7101a51920
7101a517a4  add x9,x9,#0x1
7101a517a8  add x11,x11,#0x3f0
7101a517ac  cmp w8,w9
7101a517b0  b.gt 0x7101a51790
7101a517b4  adrp x8,0x710532f000
7101a517b8  ldr x8,[x8, #0x8d0]
7101a517bc  ldr x0,[x8, #0x8]
7101a517c0  ldp x8,x9,[x0, #0x40]
7101a517c4  sub x9,x9,x8
7101a517c8  asr x9,x9,#0x3
7101a517cc  cmp x9,#0x4
7101a517d0  b.cc 0x7101a51850
7101a517d4  ldr x23,[x8, #0x18]
7101a517d8  ldrb w8,[x0, #0x191]
7101a517dc  cbnz w8,0x7101a518c8
7101a517e0  b 0x7101a5185c
7101a517e4  cbz w10,0x7101a51a60
7101a517e8  ldrb w9,[x19, #0x2dc]
7101a517ec  cbnz w9,0x7101a51a60
7101a517f0  ldr x0,[x19, #0x250]
7101a517f4  ldrsw x9,[x0, #0x4d8]
7101a517f8  ldr w10,[x0, #0xc]
7101a517fc  cmp w10,w9
7101a51800  b.le 0x7101a51844
7101a51804  ldr x10,[x0, #0xa8]!
7101a51808  ldr x11,[x0, #0x8]
7101a5180c  sub x11,x11,x10
7101a51810  mov x12,#0xefbf
7101a51814  movk x12,#0xbefb, LSL #16
7101a51818  movk x12,#0xfbef, LSL #32
7101a5181c  movk x12,#0xefbe, LSL #48
7101a51820  asr x11,x11,#0x4
7101a51824  mul x11,x11,x12
7101a51828  cmp x11,x9
7101a5182c  b.ls 0x7101a5364c
7101a51830  orr w11,wzr,#0x3f0
7101a51834  madd x9,x9,x11,x10
7101a51838  ldr w9,[x9, #0x3e8]
7101a5183c  cmp w9,#0x6
7101a51840  b.eq 0x7101a51a60
7101a51844  mov w21,w8
7101a51848  str w8,[x19, #0x26c]
7101a5184c  b 0x7101a51578
7101a51850  mov x23,xzr
7101a51854  ldrb w8,[x0, #0x191]
7101a51858  cbnz w8,0x7101a518c8
7101a5185c  mov w2,#0x4
7101a51860  mov x1,x23
7101a51864  bl 0x7103313f20
7101a51868  tbz w0,#0x0,0x7101a518c8
7101a5186c  add x0,sp,#0x208
7101a51870  mov x1,x23
7101a51874  bl 0x71024076d0
7101a51878  ldr x8,[sp, #0x218]
7101a5187c  adrp x9,0x7104f73000
7101a51880  add x9,x9,#0xd50
7101a51884  str x9,[sp, #0x210]
7101a51888  cbz x8,0x7101a51904
7101a5188c  adrp x9,0x7106dd5000
7101a51890  ldrb w9,[x9, #0x3a8]
7101a51894  cmp w9,#0x1
7101a51898  b.ne 0x7101a51904
7101a5189c  adrp x10,0x7106dd5000
7101a518a0  ldr w9,[sp, #0x220]
7101a518a4  ldr w10,[x10, #0x3ac]
7101a518a8  cmp w9,w10
7101a518ac  b.ne 0x7101a51904
7101a518b0  ldr wzr,[x8, #0x38]!
7101a518b4  ldaxr w9,[x8]
7101a518b8  sub w9,w9,#0x1
7101a518bc  stlxr w10,w9,[x8]
7101a518c0  cbnz w10,0x7101a518b4
7101a518c4  b 0x7101a51904
7101a518c8  adrp x8,0x7104f73000
7101a518cc  add x8,x8,#0xd30
7101a518d0  str x8,[sp, #0x210]
7101a518d4  mov x8,#-0x1
7101a518d8  str x8,[sp, #0x230]
7101a518dc  ldr x8,[sp, #0x80]
7101a518e0  str xzr,[sp, #0x218]
7101a518e4  str wzr,[sp, #0x220]
7101a518e8  str w24,[sp, #0x224]
7101a518ec  strb wzr,[sp, #0x228]
7101a518f0  str wzr,[sp, #0x208]
7101a518f4  stp xzr,xzr,[x8]
7101a518f8  adrp x8,0x7104f73000
7101a518fc  add x8,x8,#0xd50
7101a51900  str x8,[sp, #0x210]
7101a51904  mov w1,#0x1
7101a51908  mov x0,x25
7101a5190c  strb wzr,[x25, #0x4f9]
7101a51910  bl 0x7101a5ba50
7101a51914  mov x0,x25
7101a51918  bl 0x7101a59de0
7101a5191c  ldr x25,[x19, #0x250]
7101a51920  ldr w1,[x25, #0x4d8]
7101a51924  ldr x0,[sp, #0xa0]
7101a51928  mov x2,x22
7101a5192c  bl 0x7101a5fb40
7101a51930  mov x0,x19
7101a51934  mov x1,x22
7101a51938  bl 0x7101a54360
7101a5193c  ldr x8,[x21]
7101a51940  ldrsw x22,[x8, #0x150]
7101a51944  cmp w22,#0xa
7101a51948  b.cs 0x7101a53644
7101a5194c  ldr x9,[x20, #0x8]
7101a51950  ldr x8,[x19, #0x260]
7101a51954  mov w2,#0x1
7101a51958  ldr x0,[sp, #0x98]
7101a5195c  mov w1,w22
7101a51960  mov w3,wzr
7101a51964  add x10,x9,#0x18
7101a51968  ldr w23,[x9, #0x28]
7101a5196c  mov w9,#0x130
7101a51970  madd x8,x22,x9,x8
7101a51974  str x10,[x8, #0x110]
7101a51978  bl 0x71032d0c60
7101a5197c  ldr x0,[x19, #0x260]
7101a51980  mov w1,w22
7101a51984  mov w2,w23
7101a51988  bl 0x71032d0e00
7101a5198c  ldr x8,[x20, #0x8]
7101a51990  ldr x8,[x8, #0x20]
7101a51994  ldr x8,[x8, #0x100]
7101a51998  ldr x9,[x19, #0x260]
7101a5199c  ldr s1,[x9, #0xbf0]
7101a519a0  ldr q0,[x8, #0x60]
7101a519a4  fcmp s1,s0
7101a519a8  b.lt 0x7101a519d4
7101a519ac  ldr s1,[x9, #0xbec]
7101a519b0  fcmp s1,s0
7101a519b4  b.hi 0x7101a519d4
7101a519b8  dup s1,v0.S[0x1]
7101a519bc  ldr s2,[x9, #0xbf8]
7101a519c0  fcmp s2,s1
7101a519c4  b.lt 0x7101a519d4
7101a519c8  ldr s2,[x9, #0xbf4]
7101a519cc  fcmp s2,s1
7101a519d0  b.ls 0x7101a4f5ec
7101a519d4  mov w16,#0x130
7101a519d8  madd x9,x22,x16,x9
7101a519dc  ldr x9,[x9, #0x28]
7101a519e0  ldr x9,[x9, #0x18]
7101a519e4  ldr x9,[x9]
7101a519e8  movi v4.2D,#0x0
7101a519ec  cbz x9,0x7101a51a08
7101a519f0  mov v0.16B,v4.16B
7101a519f4  add x10,x9,#0x30
7101a519f8  add x9,x9,#0x34
7101a519fc  ld1 {v0.S}[0],[x10]
7101a51a00  ld1 {v0.S}[1],[x9]
7101a51a04  b 0x7101a51a14
7101a51a08  adrp x9,0x71052a8000
7101a51a0c  ldr x9,[x9, #0xa80]
7101a51a10  ldr q0,[x9]
7101a51a14  ldp s1,s2,[x8, #0x90]
7101a51a18  fcmp s0,s1
7101a51a1c  fcsel s1,s1,s0,mi
7101a51a20  fcmp s2,s1
7101a51a24  fcsel s1,s2,s1,mi
7101a51a28  dup s0,v0.S[0x1]
7101a51a2c  ldp s2,s3,[x8, #0x98]
7101a51a30  fcmp s0,s2
7101a51a34  fcsel s0,s2,s0,mi
7101a51a38  mov v2.16B,v4.16B
7101a51a3c  fcmp s3,s0
7101a51a40  mov v2.S[0x0],v1.S[0x0]
7101a51a44  fcsel s0,s3,s0,mi
7101a51a48  mov v2.S[0x1],v0.S[0x0]
7101a51a4c  str q2,[x8, #0x70]
7101a51a50  ldr x8,[x19, #0x260]
7101a51a54  madd x8,x22,x16,x8
7101a51a58  add x8,x8,#0x123
7101a51a5c  strh wzr,[x8]
7101a51a60  ldr x8,[x20, #0x8]
7101a51a64  ldrb w9,[x8, #0x36]
7101a51a68  cbz w9,0x7101a51aa0
7101a51a6c  ldr x9,[x8, #0x10]
7101a51a70  ldr x9,[x9, #0x8]
7101a51a74  ldrb w10,[x9, #0x4aa]
7101a51a78  cbz w10,0x7101a4f46c
7101a51a7c  ldrb w10,[x9, #0x1b8]
7101a51a80  ldrb w11,[x9, #0x1bc]
7101a51a84  ubfx w24,w10,#0x1,#0x1
7101a51a88  ldrb w9,[x9, #0x1b4]
7101a51a8c  ubfx w27,w11,#0x1,#0x1
7101a51a90  ubfx w26,w9,#0x1,#0x1
7101a51a94  tbnz w24,#0x0,0x7101a4f47c
7101a51a98  tbnz w27,#0x0,0x7101a4f47c
7101a51a9c  cbnz w26,0x7101a4f47c
7101a51aa0  ldr x8,[sp, #0xb0]
7101a51aa4  add x20,x20,#0x10
7101a51aa8  cmp x20,x8
7101a51aac  b.ne 0x7101a50948
7101a51ab0  b 0x7101a51d34
7101a51ab4  mov x20,xzr
7101a51ab8  ldrb w8,[x0, #0x191]
7101a51abc  cbnz w8,0x7101a51b30
7101a51ac0  mov w2,#0x4
7101a51ac4  mov x1,x20
7101a51ac8  bl 0x7103313f20
7101a51acc  tbz w0,#0x0,0x7101a51b30
7101a51ad0  sub x0,x29,#0xb8
7101a51ad4  mov x1,x20
7101a51ad8  bl 0x71024076d0
7101a51adc  ldur x8,[x29, #-0xa8]
7101a51ae0  adrp x9,0x7104f73000
7101a51ae4  add x9,x9,#0xd50
7101a51ae8  stur x9,[x29, #-0xb0]
7101a51aec  cbz x8,0x7101a51b54
7101a51af0  adrp x8,0x7106dd5000
7101a51af4  ldrb w8,[x8, #0x3a8]
7101a51af8  cmp w8,#0x1
7101a51afc  b.ne 0x7101a51b54
7101a51b00  adrp x9,0x7106dd5000
7101a51b04  ldur w8,[x29, #-0xa0]
7101a51b08  ldr w9,[x9, #0x3ac]
7101a51b0c  cmp w8,w9
7101a51b10  b.ne 0x7101a51b54
7101a51b14  ldur x8,[x29, #-0xa8]
7101a51b18  ldr wzr,[x8, #0x38]!
7101a51b1c  ldaxr w9,[x8]
7101a51b20  sub w9,w9,#0x1
7101a51b24  stlxr w10,w9,[x8]
7101a51b28  cbnz w10,0x7101a51b1c
7101a51b2c  b 0x7101a51b54
7101a51b30  mov x8,#-0x1
7101a51b34  stp x8,xzr,[x29, #-0x90]
7101a51b38  adrp x8,0x7104f73000
7101a51b3c  add x8,x8,#0xd50
7101a51b40  stp wzr,w23,[x29, #-0xa0]
7101a51b44  sturb wzr,[x29, #-0x98]
7101a51b48  stur wzr,[x29, #-0xb8]
7101a51b4c  stur xzr,[x29, #-0x80]
7101a51b50  stp x8,xzr,[x29, #-0xb0]
7101a51b54  mov w8,#0x2
7101a51b58  stur xzr,[x29, #-0xa8]
7101a51b5c  sturb wzr,[x29, #-0x98]
7101a51b60  str w8,[x19, #0xf0]
7101a51b64  ldrsw x8,[x19, #0xd4]
7101a51b68  cmp w8,#0x13
7101a51b6c  b.cs 0x7101a53644
7101a51b70  add x8,x19,x8, LSL #0x2
7101a51b74  mov w9,#0x5
7101a51b78  str w9,[x8, #0x88]
7101a51b7c  add sp,sp,#0x510
7101a51b80  ldp d9,d8,[sp, #0x10]
7101a51b84  ldp x29,x30,[sp, #0x70]
7101a51b88  ldp x20,x19,[sp, #0x60]
7101a51b8c  ldp x22,x21,[sp, #0x50]
7101a51b90  ldp x24,x23,[sp, #0x40]
7101a51b94  ldp x26,x25,[sp, #0x30]
7101a51b98  ldp x28,x27,[sp, #0x20]
7101a51b9c  ldr d10,[sp], #0x80
7101a51ba0  ret
7101a51ba4  mov x8,#-0x1
7101a51ba8  str x8,[sp, #0x230]
7101a51bac  adrp x8,0x7104f73000
7101a51bb0  add x8,x8,#0xd50
7101a51bb4  str xzr,[sp, #0x218]
7101a51bb8  str wzr,[sp, #0x220]
7101a51bbc  str w21,[sp, #0x224]
7101a51bc0  strb wzr,[sp, #0x228]
7101a51bc4  str wzr,[sp, #0x208]
7101a51bc8  str xzr,[sp, #0x240]
7101a51bcc  str xzr,[sp, #0x238]
7101a51bd0  str x8,[sp, #0x210]
7101a51bd4  ldr x8,[x22, #0x8d0]
7101a51bd8  str xzr,[sp, #0x218]
7101a51bdc  strb wzr,[sp, #0x228]
7101a51be0  ldr x0,[x8, #0x8]
7101a51be4  ldrb w8,[x0, #0x191]
7101a51be8  cbnz w8,0x7101a51c68
7101a51bec  mov x20,#0x1361
7101a51bf0  movk x20,#0xa306, LSL #16
7101a51bf4  movk x20,#0x17, LSL #32
7101a51bf8  mov w2,#0x4
7101a51bfc  mov x1,x20
7101a51c00  bl 0x7103313f20
7101a51c04  tbz w0,#0x0,0x7101a51c68
7101a51c08  sub x0,x29,#0xb8
7101a51c0c  mov x1,x20
7101a51c10  bl 0x71024076d0
7101a51c14  ldur x8,[x29, #-0xa8]
7101a51c18  adrp x9,0x7104f73000
7101a51c1c  add x9,x9,#0xd50
7101a51c20  stur x9,[x29, #-0xb0]
7101a51c24  cbz x8,0x7101a51c8c
7101a51c28  adrp x8,0x7106dd5000
7101a51c2c  ldrb w8,[x8, #0x3a8]
7101a51c30  cmp w8,#0x1
7101a51c34  b.ne 0x7101a51c8c
7101a51c38  adrp x9,0x7106dd5000
7101a51c3c  ldur w8,[x29, #-0xa0]
7101a51c40  ldr w9,[x9, #0x3ac]
7101a51c44  cmp w8,w9
7101a51c48  b.ne 0x7101a51c8c
7101a51c4c  ldur x8,[x29, #-0xa8]
7101a51c50  ldr wzr,[x8, #0x38]!
7101a51c54  ldaxr w9,[x8]
7101a51c58  sub w9,w9,#0x1
7101a51c5c  stlxr w10,w9,[x8]
7101a51c60  cbnz w10,0x7101a51c54
7101a51c64  b 0x7101a51c8c
7101a51c68  mov x8,#-0x1
7101a51c6c  stp x8,xzr,[x29, #-0x90]
7101a51c70  adrp x8,0x7104f73000
7101a51c74  add x8,x8,#0xd50
7101a51c78  stp wzr,w21,[x29, #-0xa0]
7101a51c7c  sturb wzr,[x29, #-0x98]
7101a51c80  stur wzr,[x29, #-0xb8]
7101a51c84  stur xzr,[x29, #-0x80]
7101a51c88  stp x8,xzr,[x29, #-0xb0]
7101a51c8c  stur xzr,[x29, #-0xa8]
7101a51c90  sturb wzr,[x29, #-0x98]
7101a51c94  ldr x21,[x19, #0x218]
7101a51c98  ldr x22,[x19, #0x220]
7101a51c9c  cmp x21,x22
7101a51ca0  b.eq 0x7101a51d1c
7101a51ca4  fmov s8,0x3f800000
7101a51ca8  mov x20,#0x1026
7101a51cac  movk x20,#0xf795, LSL #16
7101a51cb0  mov w23,#0x488
7101a51cb4  mov w24,#0x48c
7101a51cb8  adrp x25,0x71052c5000
7101a51cbc  movk x20,#0x18, LSL #32
7101a51cc0  ldr x8,[x21, #0x8]
7101a51cc4  ldr x8,[x8, #0x10]
7101a51cc8  ldr x8,[x8, #0x8]
7101a51ccc  ldr w9,[x8, #0x484]
7101a51cd0  cmp w9,#0x2
7101a51cd4  csel x9,x24,x23,eq
7101a51cd8  ldr w1,[x8, x9, LSL #0x0]
7101a51cdc  cmn w1,#0x1
7101a51ce0  b.eq 0x7101a51d10
7101a51ce4  ldr x8,[x25, #0x120]
7101a51ce8  ldr x0,[x8, #0x8]
7101a51cec  mov v0.16B,v8.16B
7101a51cf0  mov v1.16B,v8.16B
7101a51cf4  mov w4,#0x1
7101a51cf8  mov x2,x20
7101a51cfc  mov w3,wzr
7101a51d00  mov w5,wzr
7101a51d04  mov w6,wzr
7101a51d08  mov w7,wzr
7101a51d0c  bl 0x710175dfc0
7101a51d10  add x21,x21,#0x10
7101a51d14  cmp x22,x21
7101a51d18  b.ne 0x7101a51cc0
7101a51d1c  mov w8,#0x1
7101a51d20  str w8,[x19, #0xf0]
7101a51d24  cbnz w8,0x7101a51b64
7101a51d28  b 0x7101a4e8c8
7101a51d2c  add x8,x19,#0x238
7101a51d30  stur x8,[x29, #-0x68]
7101a51d34  ldr x20,[x19, #0x230]
7101a51d38  ldr x25,[x19, #0x238]
7101a51d3c  cmp x20,x25
7101a51d40  b.eq 0x7101a52504
7101a51d44  add x8,x19,#0x1d8
7101a51d48  str x8,[sp, #0xa0]
7101a51d4c  sub x8,x29,#0xb8
7101a51d50  add x22,x19,#0x250
7101a51d54  adrp x24,0x71044f7000
7101a51d58  add x24,x24,#0x794
7101a51d5c  add x8,x8,#0x30
7101a51d60  fmov s8,0x3f800000
7101a51d64  stp x8,x22,[sp, #0xa8]
7101a51d68  add x8,sp,#0x208
7101a51d6c  add x26,x8,#0x8
7101a51d70  b 0x7101a524a0
7101a51d74  mov x0,x19
7101a51d78  mov x1,x20
7101a51d7c  bl 0x7101a563c0
7101a51d80  b 0x7101a524f4
7101a51d84  mov x0,x19
7101a51d88  mov x1,x20
7101a51d8c  bl 0x7101a55ec0
7101a51d90  b 0x7101a524f4
7101a51d94  ldr w9,[x8, #0x6a0]
7101a51d98  ldr w8,[x8, #0x5d0]
7101a51d9c  orr w8,w8,w9
7101a51da0  cmp w8,#0x0
7101a51da4  csinc w2,w9,wzr,ne
7101a51da8  mov x0,x19
7101a51dac  mov x1,x20
7101a51db0  bl 0x7101a568e0
7101a51db4  ldr x0,[x19, #0x250]
7101a51db8  ldrsw x9,[x0, #0x4d8]
7101a51dbc  cmn w9,#0x1
7101a51dc0  b.eq 0x7101a51e48
7101a51dc4  ldr x8,[x20, #0x8]
7101a51dc8  ldr w1,[x8, #0x1f8]
7101a51dcc  mov x8,x0
7101a51dd0  ldr x10,[x8, #0xa8]!
7101a51dd4  ldr x11,[x8, #0x8]
7101a51dd8  sub x11,x11,x10
7101a51ddc  mov x12,#0xefbf
7101a51de0  movk x12,#0xbefb, LSL #16
7101a51de4  movk x12,#0xfbef, LSL #32
7101a51de8  movk x12,#0xefbe, LSL #48
7101a51dec  asr x11,x11,#0x4
7101a51df0  mul x11,x11,x12
7101a51df4  cmp x11,x9
7101a51df8  b.ls 0x7101a53648
7101a51dfc  orr w8,wzr,#0x3f0
7101a51e00  madd x8,x9,x8,x10
7101a51e04  str w1,[x8, #0x10]
7101a51e08  ldr x8,[x0, #0xc0]!
7101a51e0c  ldr x10,[x0, #0x8]
7101a51e10  sub x10,x10,x8
7101a51e14  asr x10,x10,#0x4
7101a51e18  cmp x10,x9
7101a51e1c  b.ls 0x7101a5364c
7101a51e20  add x8,x8,x9, LSL #0x4
7101a51e24  ldr x0,[x8, #0x8]
7101a51e28  mov x21,x26
7101a51e2c  bl 0x7101a58f40
7101a51e30  ldr x23,[x20, #0x8]
7101a51e34  ldr w8,[x23, #0x1f8]
7101a51e38  cbz w8,0x7101a52258
7101a51e3c  ldr x8,[x22]
7101a51e40  mov x26,x21
7101a51e44  strb wzr,[x8, #0x4f9]
7101a51e48  ldr x8,[x20, #0x8]
7101a51e4c  ldr w27,[x8, #0x1f8]
7101a51e50  ldrb w9,[x8, #0x6bb]
7101a51e54  cbz w9,0x7101a51e60
7101a51e58  ldr w28,[x8, #0x1fc]
7101a51e5c  b 0x7101a51e68
7101a51e60  mov w8,#0xffffffff
7101a51e64  mov w28,w8
7101a51e68  mov x0,x19
7101a51e6c  mov x1,x20
7101a51e70  bl 0x7101a54360
7101a51e74  ldr x8,[x20, #0x8]
7101a51e78  ldrsw x9,[x8, #0x150]
7101a51e7c  cmp w9,#0x8
7101a51e80  b.cs 0x7101a53644
7101a51e84  ldr x23,[x19, #0x210]
7101a51e88  orr w10,wzr,#0x18
7101a51e8c  madd x21,x9,x10,x23
7101a51e90  ldr w8,[x8, #0x154]
7101a51e94  ldr w2,[x21, #0xe0]!
7101a51e98  cmn w2,#0x1
7101a51e9c  stp w8,w27,[x21, #0x8]
7101a51ea0  str w28,[x21, #0x10]
7101a51ea4  b.eq 0x7101a51ef8
7101a51ea8  add x0,sp,#0x208
7101a51eac  mov x1,x23
7101a51eb0  bl 0x71019f08a0
7101a51eb4  ldp x9,x10,[x23]
7101a51eb8  sub x10,x10,x9
7101a51ebc  mov x11,#0x8ba3
7101a51ec0  movk x11,#0xba2e, LSL #16
7101a51ec4  movk x11,#0xa2e8, LSL #32
7101a51ec8  movk x11,#0x2e8b, LSL #48
7101a51ecc  asr x10,x10,#0x4
7101a51ed0  mul x10,x10,x11
7101a51ed4  ldrsw x8,[x21]
7101a51ed8  cmp x10,x8
7101a51edc  b.ls 0x7101a53670
7101a51ee0  mov w10,#0xb0
7101a51ee4  madd x8,x8,x10,x9
7101a51ee8  ldr x0,[x8, #0x20]
7101a51eec  mov v0.16B,v8.16B
7101a51ef0  mov x1,x26
7101a51ef4  bl 0x7103778300
7101a51ef8  ldr x8,[x20, #0x8]
7101a51efc  ldr x9,[x8, #0x678]
7101a51f00  cbz x9,0x7101a524c0
7101a51f04  ldr x9,[x9, #0x8]
7101a51f08  ldr w1,[x9, #0x28]
7101a51f0c  ldr w8,[x8, #0x150]
7101a51f10  cmp w1,w8
7101a51f14  b.ne 0x7101a524c0
7101a51f18  ldr x0,[x9, #0x20]
7101a51f1c  mov w2,w27
7101a51f20  mov w3,w28
7101a51f24  bl 0x71032d2e70
7101a51f28  b 0x7101a524c0
7101a51f2c  mov x0,x19
7101a51f30  mov x1,x20
7101a51f34  bl 0x7101a55da0
7101a51f38  b 0x7101a524f4
7101a51f3c  mov x0,x19
7101a51f40  mov x1,x20
7101a51f44  bl 0x7101a55b60
7101a51f48  b 0x7101a524f4
7101a51f4c  ldp x9,x8,[x19, #0x1e0]
7101a51f50  cmp x9,x8
7101a51f54  b.cs 0x7101a5200c
7101a51f58  mov w8,#0x2
7101a51f5c  str w8,[x9]
7101a51f60  ldr x8,[x19, #0x1e0]
7101a51f64  add x8,x8,#0x4
7101a51f68  str x8,[x19, #0x1e0]
7101a51f6c  b 0x7101a524f4
7101a51f70  mov x0,x19
7101a51f74  mov x1,x20
7101a51f78  bl 0x7101a55c80
7101a51f7c  b 0x7101a524f4
7101a51f80  mov x0,x19
7101a51f84  mov x1,x20
7101a51f88  bl 0x7101a563c0
7101a51f8c  adrp x8,0x710532f000
7101a51f90  ldr x8,[x8, #0x730]
7101a51f94  ldr x22,[x20, #0x8]
7101a51f98  ldr x27,[x22, #0x200]
7101a51f9c  ldr x21,[x8, #0x8]
7101a51fa0  mov x1,x27
7101a51fa4  add x0,x21,#0x160
7101a51fa8  bl 0x7103265e70
7101a51fac  tbz w0,#0x0,0x7101a5205c
7101a51fb0  ldr x28,[x21, #0x168]
7101a51fb4  mov x1,#0x1d87
7101a51fb8  movk x1,#0x57ab, LSL #16
7101a51fbc  movk x1,#0x12, LSL #32
7101a51fc0  mov x0,x28
7101a51fc4  bl 0x71032631a0
7101a51fc8  and x10,x27,#-0x100000000000000
7101a51fcc  mov x11,#-0x3f00000000000000
7101a51fd0  and x9,x27,#0xffffffffff
7101a51fd4  and x8,x0,#0xffffffffff
7101a51fd8  cmp x10,x11
7101a51fdc  b.ne 0x7101a52120
7101a51fe0  cbz x9,0x7101a52120
7101a51fe4  ldr x22,[sp, #0xb0]
7101a51fe8  and x11,x0,#-0x100000000000000
7101a51fec  mov x12,#-0x3f00000000000000
7101a51ff0  cmp x11,x12
7101a51ff4  ccmp x8,#0x0,#0x4,eq
7101a51ff8  b.eq 0x7101a52128
7101a51ffc  eor x8,x0,x27
7101a52000  tst x8,#0xffffffffff
7101a52004  cset w3,eq
7101a52008  b 0x7101a5215c
7101a5200c  ldr x10,[sp, #0xa0]
7101a52010  ldr x27,[x10]
7101a52014  sub x28,x9,x27
7101a52018  asr x22,x28,#0x2
7101a5201c  add x9,x22,#0x1
7101a52020  lsr x10,x9,#0x3e
7101a52024  cbnz x10,0x7101a53680
7101a52028  sub x8,x8,x27
7101a5202c  asr x10,x8,#0x2
7101a52030  orr x11,xzr,#0x1ffffffffffffffe
7101a52034  cmp x10,x11
7101a52038  b.hi 0x7101a5206c
7101a5203c  asr x8,x8,#0x1
7101a52040  cmp x8,x9
7101a52044  csel x21,x9,x8,cc
7101a52048  cbz x21,0x7101a52280
7101a5204c  lsr x8,x21,#0x3e
7101a52050  str x26,[sp, #0x98]
7101a52054  cbz x8,0x7101a52074
7101a52058  b 0x7101a53644
7101a5205c  ldrb w3,[x22, #0x210]
7101a52060  ldr x28,[x21, #0x168]
7101a52064  ldr x22,[sp, #0xb0]
7101a52068  b 0x7101a5215c
7101a5206c  str x26,[sp, #0x98]
7101a52070  orr x21,xzr,#0x3fffffffffffffff
7101a52074  lsl x8,x21,#0x2
7101a52078  cmp x8,#0x0
7101a5207c  csinc x26,x8,xzr,ne
7101a52080  mov w0,#0x10
7101a52084  mov x1,x26
7101a52088  bl 0x710392e290
7101a5208c  mov x23,x0
7101a52090  cbnz x0,0x7101a520d8
7101a52094  adrp x8,0x7105332000
7101a52098  ldr x0,[x8, #0xf00]
7101a5209c  cbz x0,0x7101a520d4
7101a520a0  stur wzr,[x29, #-0xf8]
7101a520a4  str x26,[sp, #0x208]
7101a520a8  ldr x8,[x0]
7101a520ac  ldr x8,[x8, #0x30]
7101a520b0  sub x1,x29,#0xf8
7101a520b4  add x2,sp,#0x208
7101a520b8  blr x8
7101a520bc  tbz w0,#0x0,0x7101a520d4
7101a520c0  mov w0,#0x10
7101a520c4  mov x1,x26
7101a520c8  bl 0x710392e290
7101a520cc  mov x23,x0
7101a520d0  cbnz x0,0x7101a520d8
7101a520d4  mov x23,xzr
7101a520d8  ldr x26,[sp, #0x98]
7101a520dc  add x22,x23,x22, LSL #0x2
7101a520e0  mov w8,#0x2
7101a520e4  add x21,x23,x21, LSL #0x2
7101a520e8  str w8,[x22], #0x4
7101a520ec  cmp x28,#0x1
7101a520f0  b.lt 0x7101a52104
7101a520f4  mov x0,x23
7101a520f8  mov x1,x27
7101a520fc  mov x2,x28
7101a52100  bl 0x71039c00e0
7101a52104  stp x23,x22,[x19, #0x1d8]
7101a52108  ldr x22,[sp, #0xb0]
7101a5210c  str x21,[x19, #0x1e8]
7101a52110  cbz x27,0x7101a524f4
7101a52114  mov x0,x27
7101a52118  bl 0x710392eb40
7101a5211c  b 0x7101a524f4
7101a52120  ldr x22,[sp, #0xb0]
7101a52124  and x11,x0,#-0x100000000000000
7101a52128  mov x12,#-0x3f00000000000000
7101a5212c  cmp x10,x12
7101a52130  cset w10,eq
7101a52134  cmp x9,#0x0
7101a52138  cset w9,ne
7101a5213c  cmp x8,#0x0
7101a52140  cset w8,ne
7101a52144  cmp x11,x12
7101a52148  and w9,w10,w9
7101a5214c  cset w10,eq
7101a52150  and w8,w8,w10
7101a52154  eor w8,w8,w9
7101a52158  eor w3,w8,#0x1
7101a5215c  mov x0,x28
7101a52160  mov w1,wzr
7101a52164  mov x2,x27
7101a52168  bl 0x7103266830
7101a5216c  tst x0,#0xffffffffff
7101a52170  b.eq 0x7101a5220c
7101a52174  adrp x8,0x710532f000
7101a52178  ldr x8,[x8, #0x8d0]
7101a5217c  mov x23,x0
7101a52180  ldr x0,[x8, #0x8]
7101a52184  ldrb w8,[x0, #0x191]
7101a52188  mov w21,#0x6500
7101a5218c  movk w21,#0x87, LSL #16
7101a52190  cbnz w8,0x7101a52200
7101a52194  mov w2,#0x4
7101a52198  mov x1,x23
7101a5219c  bl 0x7103313f20
7101a521a0  tbz w0,#0x0,0x7101a52200
7101a521a4  sub x0,x29,#0xb8
7101a521a8  mov x1,x23
7101a521ac  bl 0x71024076d0
7101a521b0  ldur x8,[x29, #-0xa8]
7101a521b4  adrp x9,0x7104f73000
7101a521b8  add x9,x9,#0xd50
7101a521bc  stur x9,[x29, #-0xb0]
7101a521c0  cbz x8,0x7101a5224c
7101a521c4  adrp x9,0x7106dd5000
7101a521c8  ldrb w9,[x9, #0x3a8]
7101a521cc  cmp w9,#0x1
7101a521d0  b.ne 0x7101a5224c
7101a521d4  adrp x10,0x7106dd5000
7101a521d8  ldur w9,[x29, #-0xa0]
7101a521dc  ldr w10,[x10, #0x3ac]
7101a521e0  cmp w9,w10
7101a521e4  b.ne 0x7101a5224c
7101a521e8  ldr wzr,[x8, #0x38]!
7101a521ec  ldaxr w9,[x8]
7101a521f0  sub w9,w9,#0x1
7101a521f4  stlxr w10,w9,[x8]
7101a521f8  cbnz w10,0x7101a521ec
7101a521fc  b 0x7101a5224c
7101a52200  stur xzr,[x29, #-0xa8]
7101a52204  stp wzr,w21,[x29, #-0xa0]
7101a52208  b 0x7101a5221c
7101a5220c  mov w8,#0x6500
7101a52210  movk w8,#0x87, LSL #16
7101a52214  stur xzr,[x29, #-0xa8]
7101a52218  stp wzr,w8,[x29, #-0xa0]
7101a5221c  adrp x8,0x7104f73000
7101a52220  add x8,x8,#0xd30
7101a52224  stur x8,[x29, #-0xb0]
7101a52228  mov x8,#-0x1
7101a5222c  sturb wzr,[x29, #-0x98]
7101a52230  stur wzr,[x29, #-0xb8]
7101a52234  stur x8,[x29, #-0x90]
7101a52238  ldr x8,[sp, #0xa8]
7101a5223c  stp xzr,xzr,[x8]
7101a52240  adrp x8,0x7104f73000
7101a52244  add x8,x8,#0xd50
7101a52248  stur x8,[x29, #-0xb0]
7101a5224c  stur xzr,[x29, #-0xa8]
7101a52250  sturb wzr,[x29, #-0x98]
7101a52254  b 0x7101a524f4
7101a52258  ldr w8,[x23, #0x394]
7101a5225c  cbz w8,0x7101a51e3c
7101a52260  ldr w8,[x19, #0x2bc]
7101a52264  cmp w8,#0x1
7101a52268  b.lt 0x7101a51e3c
7101a5226c  ldr x8,[x22]
7101a52270  ldr w27,[x8, #0x4d8]
7101a52274  mov x26,xzr
7101a52278  mov w28,#0x1a8
7101a5227c  b 0x7101a52388
7101a52280  mov x23,xzr
7101a52284  b 0x7101a520dc
7101a52288  adrp x0,0x7105324000
7101a5228c  add x0,x0,#0xed0
7101a52290  bl 0x71039c06b0
7101a52294  cbz w0,0x7101a52360
7101a52298  adrp x22,0x7105324000
7101a5229c  add x22,x22,#0xaf0
7101a522a0  mov x0,x22
7101a522a4  bl 0x71017abd00
7101a522a8  adrp x0,0x7105324000
7101a522ac  add x0,x0,#0xed0
7101a522b0  bl 0x71039c06c0
7101a522b4  mov x8,x22
7101a522b8  ldr x22,[sp, #0xb0]
7101a522bc  ldr w8,[x8, #0x8]
7101a522c0  cbnz w8,0x7101a5246c
7101a522c4  b 0x7101a52400
7101a522c8  adrp x0,0x7105324000
7101a522cc  add x0,x0,#0xed8
7101a522d0  bl 0x71039c06b0
7101a522d4  cbz w0,0x7101a52378
7101a522d8  mov w8,#0xffffffff
7101a522dc  adrp x22,0x7105324000
7101a522e0  add x22,x22,#0xc90
7101a522e4  stp x8,xzr,[x22]
7101a522e8  mov x9,#-0x1
7101a522ec  orr w10,wzr,#0xffff
7101a522f0  str w8,[x22, #0x60]
7101a522f4  orr x8,xzr,#0x3f8000003f800000
7101a522f8  add x0,x22,#0x88
7101a522fc  str x9,[x22, #0x10]
7101a52300  strh wzr,[x22, #0x18]
7101a52304  strh w10,[x22, #0x24]
7101a52308  stur x9,[x22, #0x1c]
7101a5230c  str xzr,[x22, #0x28]
7101a52310  strh wzr,[x22, #0x30]
7101a52314  strb wzr,[x22, #0x64]
7101a52318  str wzr,[x22, #0x68]
7101a5231c  strb wzr,[x22, #0x6c]
7101a52320  strh wzr,[x22, #0x80]
7101a52324  stp x8,x8,[x22, #0x70]
7101a52328  bl 0x71017abd00
7101a5232c  mov x8,#0x753f
7101a52330  movk x8,#0x95d0, LSL #16
7101a52334  movk x8,#0xb, LSL #32
7101a52338  str x8,[x22, #0x230]
7101a5233c  orr w8,wzr,#0xff
7101a52340  adrp x0,0x7105324000
7101a52344  add x0,x0,#0xed8
7101a52348  strb wzr,[x22, #0x228]
7101a5234c  strb w8,[x22, #0x238]
7101a52350  bl 0x71039c06c0
7101a52354  mov x8,x22
7101a52358  ldr x22,[sp, #0xb0]
7101a5235c  b 0x7101a5245c
7101a52360  ldr x22,[sp, #0xb0]
7101a52364  adrp x8,0x7105324000
7101a52368  add x8,x8,#0xaf0
7101a5236c  ldr w8,[x8, #0x8]
7101a52370  cbnz w8,0x7101a5246c
7101a52374  b 0x7101a52400
7101a52378  ldr x22,[sp, #0xb0]
7101a5237c  adrp x8,0x7105324000
7101a52380  add x8,x8,#0xc90
7101a52384  b 0x7101a5245c
7101a52388  cmp x27,x26
7101a5238c  b.eq 0x7101a5246c
7101a52390  ldr x0,[x22]
7101a52394  ldrsw x8,[x0, #0xc]
7101a52398  cmp x26,x8
7101a5239c  b.ge 0x7101a523e0
7101a523a0  ldr x8,[x0, #0xa8]!
7101a523a4  ldr x9,[x0, #0x8]
7101a523a8  sub x9,x9,x8
7101a523ac  mov x10,#0xefbf
7101a523b0  movk x10,#0xbefb, LSL #16
7101a523b4  movk x10,#0xfbef, LSL #32
7101a523b8  movk x10,#0xefbe, LSL #48
7101a523bc  asr x9,x9,#0x4
7101a523c0  mul x9,x9,x10
7101a523c4  cmp x9,x26
7101a523c8  b.ls 0x7101a5364c
7101a523cc  add x8,x8,x28
7101a523d0  sub x8,x8,#0x1a0
7101a523d4  ldr w8,[x8, #0x8]
7101a523d8  cbnz w8,0x7101a5246c
7101a523dc  b 0x7101a52400
7101a523e0  adrp x8,0x7105324000
7101a523e4  add x8,x8,#0xed0
7101a523e8  ldarb w9,[x8]
7101a523ec  adrp x8,0x7105324000
7101a523f0  add x8,x8,#0xaf0
7101a523f4  tbz w9,#0x0,0x7101a52288
7101a523f8  ldr w8,[x8, #0x8]
7101a523fc  cbnz w8,0x7101a5246c
7101a52400  ldr x0,[x22]
7101a52404  ldrsw x8,[x0, #0xc]
7101a52408  cmp x26,x8
7101a5240c  b.ge 0x7101a52444
7101a52410  ldr x8,[x0, #0xa8]!
7101a52414  ldr x9,[x0, #0x8]
7101a52418  sub x9,x9,x8
7101a5241c  mov x10,#0xefbf
7101a52420  movk x10,#0xbefb, LSL #16
7101a52424  movk x10,#0xfbef, LSL #32
7101a52428  movk x10,#0xefbe, LSL #48
7101a5242c  asr x9,x9,#0x4
7101a52430  mul x9,x9,x10
7101a52434  cmp x9,x26
7101a52438  b.ls 0x7101a5364c
7101a5243c  add x8,x8,x28
7101a52440  b 0x7101a5245c
7101a52444  adrp x8,0x7105324000
7101a52448  add x8,x8,#0xed8
7101a5244c  ldarb w9,[x8]
7101a52450  adrp x8,0x7105324000
7101a52454  add x8,x8,#0xc90
7101a52458  tbz w9,#0x0,0x7101a522c8
7101a5245c  ldr w8,[x8, #0x4]
7101a52460  ldr w9,[x23, #0x394]
7101a52464  cmp w8,w9
7101a52468  b.eq 0x7101a52484
7101a5246c  ldrsw x8,[x19, #0x2bc]
7101a52470  add x26,x26,#0x1
7101a52474  add x28,x28,#0x3f0
7101a52478  cmp x26,x8
7101a5247c  b.lt 0x7101a52388
7101a52480  b 0x7101a51e3c
7101a52484  str wzr,[sp, #0x208]
7101a52488  ldr x8,[x20, #0x8]
7101a5248c  ldr x0,[x8, #0x5e8]
7101a52490  add x1,sp,#0x208
7101a52494  str wzr,[x8, #0x394]
7101a52498  bl 0x71019fd0b0
7101a5249c  b 0x7101a51e3c
7101a524a0  ldr x8,[x20, #0x8]
7101a524a4  ldr w9,[x8, #0x698]
7101a524a8  sub w9,w9,#0x1
7101a524ac  cmp w9,#0xf
7101a524b0  b.hi 0x7101a524f4
7101a524b4  ldrsw x9,[x24, x9, LSL #0x2]
7101a524b8  add x9,x9,x24
7101a524bc  br x9
7101a524c0  ldr x0,[x22]
7101a524c4  ldr w23,[x0, #0x4d8]
7101a524c8  cmn w23,#0x1
7101a524cc  b.eq 0x7101a524f4
7101a524d0  ldr x8,[x20, #0x8]
7101a524d4  add x2,x8,#0x1f0
7101a524d8  mov w1,w23
7101a524dc  bl 0x7101a5a480
7101a524e0  ldr x8,[x20, #0x8]
7101a524e4  ldr x0,[x22]
7101a524e8  add x2,x8,#0x390
7101a524ec  mov w1,w23
7101a524f0  bl 0x7101a5b580
7101a524f4  add x20,x20,#0x10
7101a524f8  cmp x20,x25
7101a524fc  b.ne 0x7101a524a0
7101a52500  b 0x7101a5250c
7101a52504  add x8,x19,#0x250
7101a52508  str x8,[sp, #0xb0]
7101a5250c  ldr x0,[x19, #0x250]
7101a52510  bl 0x7101a5e8a0
7101a52514  ldr x23,[x19, #0x218]
7101a52518  ldr x8,[x19, #0x220]
7101a5251c  cmp x23,x8
7101a52520  str x8,[sp, #0xa8]
7101a52524  b.eq 0x7101a535c4
7101a52528  add x8,x19,#0x248
7101a5252c  str x8,[sp, #0xa0]
7101a52530  add x8,x19,#0x230
7101a52534  str x8,[sp, #0x98]
7101a52538  add x8,x19,#0x258
7101a5253c  fmov s8,0x3f800000
7101a52540  str x8,[sp, #0x88]
7101a52544  add x8,sp,#0x208
7101a52548  add x8,x8,#0x8
7101a5254c  orr w20,wzr,#0x3f0
7101a52550  str x8,[sp, #0x90]
7101a52554  b 0x7101a5294c
7101a52558  adrp x8,0x7104f73000
7101a5255c  add x8,x8,#0xd30
7101a52560  str x8,[sp, #0x210]
7101a52564  mov x8,#-0x1
7101a52568  str xzr,[sp, #0x218]
7101a5256c  str wzr,[sp, #0x220]
7101a52570  str w23,[sp, #0x224]
7101a52574  strb wzr,[sp, #0x228]
7101a52578  str wzr,[sp, #0x208]
7101a5257c  str x8,[sp, #0x230]
7101a52580  str xzr,[sp, #0x240]
7101a52584  str xzr,[sp, #0x238]
7101a52588  str wzr,[x19, #0x278]
7101a5258c  ldr x8,[x19, #0x288]
7101a52590  cbz x8,0x7101a525cc
7101a52594  adrp x9,0x7106dd5000
7101a52598  ldrb w9,[x9, #0x3a8]
7101a5259c  cmp w9,#0x1
7101a525a0  b.ne 0x7101a525cc
7101a525a4  adrp x10,0x7106dd5000
7101a525a8  ldr w9,[x19, #0x290]
7101a525ac  ldr w10,[x10, #0x3ac]
7101a525b0  cmp w9,w10
7101a525b4  b.ne 0x7101a525cc
7101a525b8  ldr wzr,[x8, #0x38]!
7101a525bc  ldaxr w9,[x8]
7101a525c0  sub w9,w9,#0x1
7101a525c4  stlxr w10,w9,[x8]
7101a525c8  cbnz w10,0x7101a525bc
7101a525cc  str xzr,[x19, #0x288]
7101a525d0  add x10,x19,#0x298
7101a525d4  strb wzr,[x10]
7101a525d8  ldr x9,[sp, #0x230]
7101a525dc  ldr x8,[sp, #0x218]
7101a525e0  ldr x10,[sp, #0x238]
7101a525e4  ldr x11,[sp, #0x240]
7101a525e8  str x9,[x22]
7101a525ec  adrp x9,0x7104f73000
7101a525f0  add x9,x9,#0xd50
7101a525f4  stp x10,x11,[x22, #0x8]
7101a525f8  str x9,[sp, #0x210]
7101a525fc  cbz x8,0x7101a52638
7101a52600  adrp x9,0x7106dd5000
7101a52604  ldrb w9,[x9, #0x3a8]
7101a52608  cmp w9,#0x1
7101a5260c  b.ne 0x7101a52638
7101a52610  adrp x10,0x7106dd5000
7101a52614  ldr w9,[sp, #0x220]
7101a52618  ldr w10,[x10, #0x3ac]
7101a5261c  cmp w9,w10
7101a52620  b.ne 0x7101a52638
7101a52624  ldr wzr,[x8, #0x38]!
7101a52628  ldaxr w9,[x8]
7101a5262c  sub w9,w9,#0x1
7101a52630  stlxr w10,w9,[x8]
7101a52634  cbnz w10,0x7101a52628
7101a52638  str xzr,[sp, #0x218]
7101a5263c  b 0x7101a4f258
7101a52640  adrp x10,0x7105324000
7101a52644  ldr x9,[x28]
7101a52648  cmp w2,#0x3
7101a5264c  ldrb w10,[x10, #0xae1]
7101a52650  csinc w8,wzr,w2,eq
7101a52654  cmp w8,#0x2
7101a52658  b.eq 0x7101a52688
7101a5265c  cbnz w8,0x7101a52690
7101a52660  ldrb w11,[x9, #0x6b5]
7101a52664  cbnz w11,0x7101a52698
7101a52668  ldr x11,[x9, #0x678]
7101a5266c  cbz x11,0x7101a526a4
7101a52670  ldr x11,[x11, #0x8]
7101a52674  ldr w11,[x11, #0x28]
7101a52678  ldr w12,[x9, #0x150]
7101a5267c  cmp w11,w12
7101a52680  b.eq 0x7101a52698
7101a52684  b 0x7101a526a4
7101a52688  tbnz w10,#0x0,0x7101a52698
7101a5268c  b 0x7101a526a4
7101a52690  cmp w8,#0x4
7101a52694  b.cs 0x7101a53644
7101a52698  add x11,x9,w8, SXTW 
7101a5269c  ldrb w11,[x11, #0x1c0]
7101a526a0  cbnz w11,0x7101a526b8
7101a526a4  cmp w8,#0x3
7101a526a8  csinc w8,wzr,w8,eq
7101a526ac  cmp w8,w2
7101a526b0  b.ne 0x7101a52654
7101a526b4  mov w8,w2
7101a526b8  mov x0,x19
7101a526bc  mov x1,x25
7101a526c0  mov w2,w8
7101a526c4  bl 0x7101a568e0
7101a526c8  mov x0,x19
7101a526cc  mov x1,x25
7101a526d0  bl 0x7101a57400
7101a526d4  ldr x0,[sp, #0xa0]
7101a526d8  mov w1,w26
7101a526dc  mov x2,x25
7101a526e0  bl 0x7101a5fdf0
7101a526e4  ldr x8,[x19, #0x250]
7101a526e8  ldr w9,[x8, #0xc]
7101a526ec  mov x0,x8
7101a526f0  cmp w9,w26
7101a526f4  b.le 0x7101a527b8
7101a526f8  ldr x9,[x0, #0xa8]!
7101a526fc  ldr x10,[x0, #0x8]
7101a52700  sub x10,x10,x9
7101a52704  mov x11,#0xefbf
7101a52708  movk x11,#0xbefb, LSL #16
7101a5270c  movk x11,#0xfbef, LSL #32
7101a52710  movk x11,#0xefbe, LSL #48
7101a52714  asr x10,x10,#0x4
7101a52718  mul x10,x10,x11
7101a5271c  cmp x10,x26
7101a52720  b.ls 0x7101a5364c
7101a52724  madd x11,x26,x20,x9
7101a52728  ldrb w11,[x11, #0x3ed]
7101a5272c  cbz w11,0x7101a527dc
7101a52730  madd x8,x26,x20,x9
7101a52734  ldr x21,[sp, #0xb0]
7101a52738  orr w9,wzr,#0x6
7101a5273c  str w9,[x8, #0x3e8]
7101a52740  ldr x0,[x21]
7101a52744  bl 0x7101a5f550
7101a52748  ldr x0,[x21]
7101a5274c  ldrb w8,[x0, #0x4f9]
7101a52750  cbz w8,0x7101a52838
7101a52754  ldr w9,[x0, #0x10]
7101a52758  cmp w9,#0x1
7101a5275c  b.lt 0x7101a52880
7101a52760  mov x8,x0
7101a52764  ldr x12,[x8, #0xa8]!
7101a52768  ldr x11,[x8, #0x8]
7101a5276c  sub x11,x11,x12
7101a52770  mov x13,#0xefbf
7101a52774  movk x13,#0xbefb, LSL #16
7101a52778  movk x13,#0xfbef, LSL #32
7101a5277c  movk x13,#0xefbe, LSL #48
7101a52780  asr x11,x11,#0x4
7101a52784  mov x10,xzr
7101a52788  add x12,x12,#0x3ed
7101a5278c  mul x11,x11,x13
7101a52790  cmp x11,x10
7101a52794  b.ls 0x7101a53648
7101a52798  ldrb w13,[x12]
7101a5279c  cmp w13,#0x1
7101a527a0  b.ne 0x7101a52838
7101a527a4  add x10,x10,#0x1
7101a527a8  add x12,x12,#0x3f0
7101a527ac  cmp w9,w10
7101a527b0  b.gt 0x7101a52790
7101a527b4  b 0x7101a52880
7101a527b8  ldr x9,[x0, #0xa8]!
7101a527bc  ldr x10,[x0, #0x8]
7101a527c0  sub x10,x10,x9
7101a527c4  mov x11,#0xefbf
7101a527c8  movk x11,#0xbefb, LSL #16
7101a527cc  movk x11,#0xfbef, LSL #32
7101a527d0  movk x11,#0xefbe, LSL #48
7101a527d4  asr x10,x10,#0x4
7101a527d8  mul x10,x10,x11
7101a527dc  cmp x10,x26
7101a527e0  b.ls 0x7101a5364c
7101a527e4  madd x9,x26,x20,x9
7101a527e8  ldr w9,[x9, #0x10]
7101a527ec  cmp w9,#0x2
7101a527f0  b.ne 0x7101a52880
7101a527f4  strb wzr,[x8, #0x4f9]
7101a527f8  b 0x7101a52880
7101a527fc  ldr w9,[x9, #0x150]
7101a52800  ldr x8,[x8, #0x20]
7101a52804  mov x0,x19
7101a52808  cmn w9,#0x1
7101a5280c  cset w10,ne
7101a52810  strb w10,[x8, #0x167]
7101a52814  ldr x8,[x22]
7101a52818  mov x1,x25
7101a5281c  str w9,[x8, #0x30]
7101a52820  bl 0x7101a54360
7101a52824  b 0x7101a53598
7101a52828  mov x1,x27
7101a5282c  cmp w1,#0x9
7101a52830  b.ls 0x7101a528e4
7101a52834  b 0x7101a53644
7101a52838  ldr w24,[x0, #0x4dc]
7101a5283c  cmn w24,#0x1
7101a52840  b.eq 0x7101a52880
7101a52844  mov w1,w24
7101a52848  bl 0x7101a5a2a0
7101a5284c  ldr x0,[sp, #0xa0]
7101a52850  mov w1,w24
7101a52854  mov x2,x25
7101a52858  bl 0x7101a5fb40
7101a5285c  ldr x8,[x28]
7101a52860  ldr x9,[x22]
7101a52864  ldr w8,[x8, #0x150]
7101a52868  ldr x9,[x9, #0x20]
7101a5286c  cmn w8,#0x1
7101a52870  cset w10,ne
7101a52874  strb w10,[x9, #0x167]
7101a52878  ldr x9,[x22]
7101a5287c  str w8,[x9, #0x30]
7101a52880  mov x0,x19
7101a52884  mov x1,x25
7101a52888  bl 0x7101a54360
7101a5288c  ldr x8,[x28]
7101a52890  b 0x7101a52f70
7101a52894  adrp x9,0x71052a8000
7101a52898  ldr x9,[x9, #0xa80]
7101a5289c  ldr q0,[x9]
7101a528a0  ldr x8,[x8, #0x20]
7101a528a4  ldr x8,[x8, #0x100]
7101a528a8  ldp s1,s2,[x8, #0x90]
7101a528ac  fcmp s0,s1
7101a528b0  fcsel s1,s1,s0,mi
7101a528b4  fcmp s2,s1
7101a528b8  fcsel s1,s2,s1,mi
7101a528bc  dup s0,v0.S[0x1]
7101a528c0  ldp s2,s3,[x8, #0x98]
7101a528c4  fcmp s0,s2
7101a528c8  fcsel s0,s2,s0,mi
7101a528cc  mov v2.16B,v4.16B
7101a528d0  fcmp s3,s0
7101a528d4  mov v2.S[0x0],v1.S[0x0]
7101a528d8  fcsel s0,s3,s0,mi
7101a528dc  mov v2.S[0x1],v0.S[0x0]
7101a528e0  str q2,[x8, #0x70]
7101a528e4  ldr x8,[x19, #0x260]
7101a528e8  mov w9,#0x130
7101a528ec  madd x8,x1,x9,x8
7101a528f0  add x8,x8,#0x123
7101a528f4  strh wzr,[x8]
7101a528f8  ldr x8,[x28]
7101a528fc  ldr w2,[x8, #0x150]
7101a52900  ldr w3,[x8, #0x1f8]
7101a52904  ldr w4,[x8, #0x1fc]
7101a52908  ldr x0,[sp, #0x88]
7101a5290c  add w5,w26,#0x1
7101a52910  bl 0x71032d0830
7101a52914  cmn w26,#0x1
7101a52918  b.eq 0x7101a53598
7101a5291c  ldr x21,[sp, #0xb0]
7101a52920  ldr x8,[x28]
7101a52924  add x2,x8,#0x1f0
7101a52928  ldr x0,[x21]
7101a5292c  mov w1,w26
7101a52930  bl 0x7101a5a480
7101a52934  ldr x8,[x28]
7101a52938  ldr x0,[x21]
7101a5293c  add x2,x8,#0x390
7101a52940  mov w1,w26
7101a52944  bl 0x7101a5b580
7101a52948  b 0x7101a53598
7101a5294c  mov x22,x23
7101a52950  ldr x8,[x22, #0x8]!
7101a52954  ldrb w9,[x8, #0x36]
7101a52958  cbz w9,0x7101a52bb4
7101a5295c  ldur x9,[x29, #-0x68]
7101a52960  ldr x10,[x9]
7101a52964  ldr x9,[sp, #0x98]
7101a52968  ldr x9,[x9]
7101a5296c  ldrsw x8,[x8, #0x28]
7101a52970  sub x10,x10,x9
7101a52974  asr x10,x10,#0x4
7101a52978  cmp x10,x8
7101a5297c  b.ls 0x7101a53660
7101a52980  ldr x10,[sp, #0xb0]
7101a52984  ldr x0,[x10]
7101a52988  ldr w27,[x0, #0x4d8]
7101a5298c  ldp x10,x11,[x0, #0xc0]
7101a52990  cmp x10,x11
7101a52994  mov x28,#-0x3f00000000000000
7101a52998  b.eq 0x7101a52a00
7101a5299c  ldr x12,[x0, #0xa8]!
7101a529a0  ldr x13,[x0, #0x8]
7101a529a4  sub x13,x13,x12
7101a529a8  mov x14,#0xefbf
7101a529ac  movk x14,#0xbefb, LSL #16
7101a529b0  movk x14,#0xfbef, LSL #32
7101a529b4  movk x14,#0xefbe, LSL #48
7101a529b8  asr x13,x13,#0x4
7101a529bc  mul x13,x13,x14
7101a529c0  ldr x14,[x10, #0x8]
7101a529c4  ldr w26,[x14, #0x8]
7101a529c8  sxtw x15,w26
7101a529cc  cmp x13,x15
7101a529d0  b.ls 0x7101a5364c
7101a529d4  madd x15,x15,x20,x12
7101a529d8  ldrb w15,[x15, #0x3ed]
7101a529dc  cbz w15,0x7101a529f4
7101a529e0  ldr x14,[x14, #0xa0]
7101a529e4  ldr w14,[x14, #0x254]
7101a529e8  cmn w14,#0x1
7101a529ec  ccmp w26,w27,#0x4,ne
7101a529f0  b.ne 0x7101a52a04
7101a529f4  add x10,x10,#0x10
7101a529f8  cmp x11,x10
7101a529fc  b.ne 0x7101a529c0
7101a52a00  mov w26,#0xffffffff
7101a52a04  add x25,x9,x8, LSL #0x4
7101a52a08  ldr w8,[x19, #0x274]
7101a52a0c  cmp w26,w8
7101a52a10  b.ne 0x7101a52bc4
7101a52a14  ldr x0,[x19, #0x250]
7101a52a18  str w26,[x19, #0x274]
7101a52a1c  ldr w8,[x0, #0x4dc]
7101a52a20  cmp w27,w8
7101a52a24  b.eq 0x7101a52e8c
7101a52a28  ldrb w9,[x0, #0x4f9]
7101a52a2c  cbz w9,0x7101a52ad4
7101a52a30  ldr w10,[x0, #0x10]
7101a52a34  cmp w10,#0x1
7101a52a38  b.lt 0x7101a52a90
7101a52a3c  mov x8,x0
7101a52a40  ldr x13,[x8, #0xa8]!
7101a52a44  ldr x12,[x8, #0x8]
7101a52a48  sub x12,x12,x13
7101a52a4c  mov x14,#0xefbf
7101a52a50  movk x14,#0xbefb, LSL #16
7101a52a54  movk x14,#0xfbef, LSL #32
7101a52a58  movk x14,#0xefbe, LSL #48
7101a52a5c  asr x12,x12,#0x4
7101a52a60  mov x11,xzr
7101a52a64  add x13,x13,#0x3ed
7101a52a68  mul x12,x12,x14
7101a52a6c  cmp x12,x11
7101a52a70  b.ls 0x7101a53648
7101a52a74  ldrb w14,[x13]
7101a52a78  cmp w14,#0x1
7101a52a7c  b.ne 0x7101a52ad4
7101a52a80  add x11,x11,#0x1
7101a52a84  add x13,x13,#0x3f0
7101a52a88  cmp w10,w11
7101a52a8c  b.gt 0x7101a52a6c
7101a52a90  ldp x8,x10,[x0, #0xa8]
7101a52a94  cmp x8,x10
7101a52a98  b.eq 0x7101a52ad4
7101a52a9c  ldrb w11,[x8, #0x3ed]
7101a52aa0  cbz w11,0x7101a535ac
7101a52aa4  ldr x11,[x8, #0x20]
7101a52aa8  and x12,x11,#0xffffffffff
7101a52aac  and x11,x11,#-0x100000000000000
7101a52ab0  cmp x11,x28
7101a52ab4  ccmp x12,#0x0,#0x4,eq
7101a52ab8  b.eq 0x7101a535ac
7101a52abc  ldr w11,[x8, #0x3e8]
7101a52ac0  cmp w11,#0x6
7101a52ac4  b.ne 0x7101a535ac
7101a52ac8  add x8,x8,#0x3f0
7101a52acc  cmp x10,x8
7101a52ad0  b.ne 0x7101a52a9c
7101a52ad4  ldr w8,[x0, #0xc]
7101a52ad8  cmp w8,w27
7101a52adc  b.le 0x7101a52e8c
7101a52ae0  mov x8,x0
7101a52ae4  ldr x11,[x8, #0xa8]!
7101a52ae8  ldr x10,[x8, #0x8]
7101a52aec  sub x10,x10,x11
7101a52af0  mov x13,#0xefbf
7101a52af4  movk x13,#0xbefb, LSL #16
7101a52af8  movk x13,#0xfbef, LSL #32
7101a52afc  movk x13,#0xefbe, LSL #48
7101a52b00  sxtw x12,w27
7101a52b04  asr x10,x10,#0x4
7101a52b08  mul x10,x10,x13
7101a52b0c  cmp x10,x12
7101a52b10  b.ls 0x7101a53648
7101a52b14  madd x13,x12,x20,x11
7101a52b18  ldr w13,[x13, #0x3e8]
7101a52b1c  sub w13,w13,#0x1
7101a52b20  cmp w13,#0x5
7101a52b24  b.hi 0x7101a52e8c
7101a52b28  adrp x14,0x71044f7000
7101a52b2c  add x14,x14,#0x7d4
7101a52b30  ldrsw x13,[x14, x13, LSL #0x2]
7101a52b34  add x13,x13,x14
7101a52b38  br x13
7101a52b3c  madd x12,x12,x20,x11
7101a52b40  ldrb w12,[x12, #0x3ed]
7101a52b44  cbz w12,0x7101a52b58
7101a52b48  ldr x12,[x22]
7101a52b4c  ldr w12,[x12, #0x30]
7101a52b50  cmn w12,#0x1
7101a52b54  b.eq 0x7101a52e54
7101a52b58  ldr x12,[x22]
7101a52b5c  ldr x12,[x12, #0x10]
7101a52b60  ldr x12,[x12, #0x8]
7101a52b64  ldrb w13,[x12, #0x4aa]
7101a52b68  cbz w13,0x7101a52e8c
7101a52b6c  ldrb w12,[x12, #0x1ac]
7101a52b70  tbz w12,#0x1,0x7101a52e8c
7101a52b74  cbz w9,0x7101a52e68
7101a52b78  ldr w9,[x0, #0x10]
7101a52b7c  cmp w9,#0x1
7101a52b80  b.lt 0x7101a52e8c
7101a52b84  mov x12,xzr
7101a52b88  add x11,x11,#0x3ed
7101a52b8c  cmp x10,x12
7101a52b90  b.ls 0x7101a53648
7101a52b94  ldrb w13,[x11]
7101a52b98  cmp w13,#0x1
7101a52b9c  b.ne 0x7101a52e68
7101a52ba0  add x12,x12,#0x1
7101a52ba4  add x11,x11,#0x3f0
7101a52ba8  cmp w9,w12
7101a52bac  b.gt 0x7101a52b8c
7101a52bb0  b 0x7101a52e8c
7101a52bb4  ldr x8,[sp, #0xb0]
7101a52bb8  ldr x8,[x8]
7101a52bbc  strb wzr,[x8, #0x4f9]
7101a52bc0  b 0x7101a53598
7101a52bc4  cmn w26,#0x1
7101a52bc8  b.eq 0x7101a52d2c
7101a52bcc  mov x24,x25
7101a52bd0  ldr x0,[x24, #0x8]!
7101a52bd4  ldr w8,[x0, #0x1f8]
7101a52bd8  cmp w8,#0x2
7101a52bdc  b.ne 0x7101a52bfc
7101a52be0  ldr x8,[x0, #0x200]
7101a52be4  and x9,x8,#-0x100000000000000
7101a52be8  cmp x9,x28
7101a52bec  b.ne 0x7101a52bf8
7101a52bf0  and x8,x8,#0xffffffffff
7101a52bf4  cbnz x8,0x7101a52bfc
7101a52bf8  bl 0x7101a02cb0
7101a52bfc  ldr x0,[sp, #0xa0]
7101a52c00  mov w1,w26
7101a52c04  mov x2,x25
7101a52c08  bl 0x7101a5fb40
7101a52c0c  ldr x8,[sp, #0xb0]
7101a52c10  ldr x0,[x8]
7101a52c14  ldrb w8,[x0, #0x4f9]
7101a52c18  mov w27,w26
7101a52c1c  cbz w8,0x7101a52a14
7101a52c20  ldr w9,[x0, #0x10]
7101a52c24  cmp w9,#0x1
7101a52c28  b.lt 0x7101a52c80
7101a52c2c  mov x8,x0
7101a52c30  ldr x12,[x8, #0xa8]!
7101a52c34  ldr x11,[x8, #0x8]
7101a52c38  sub x11,x11,x12
7101a52c3c  mov x13,#0xefbf
7101a52c40  movk x13,#0xbefb, LSL #16
7101a52c44  movk x13,#0xfbef, LSL #32
7101a52c48  movk x13,#0xefbe, LSL #48
7101a52c4c  asr x11,x11,#0x4
7101a52c50  mov x10,xzr
7101a52c54  add x12,x12,#0x3ed
7101a52c58  mul x11,x11,x13
7101a52c5c  cmp x11,x10
7101a52c60  b.ls 0x7101a53648
7101a52c64  ldrb w13,[x12]
7101a52c68  cmp w13,#0x1
7101a52c6c  b.ne 0x7101a52dd4
7101a52c70  add x10,x10,#0x1
7101a52c74  add x12,x12,#0x3f0
7101a52c78  cmp w9,w10
7101a52c7c  b.gt 0x7101a52c5c
7101a52c80  mov w1,w26
7101a52c84  bl 0x7101a5a2a0
7101a52c88  mov x0,x19
7101a52c8c  mov x1,x25
7101a52c90  bl 0x7101a54360
7101a52c94  ldr x8,[x24]
7101a52c98  ldrsw x9,[x8, #0x150]
7101a52c9c  cmp w9,#0x8
7101a52ca0  b.cs 0x7101a53644
7101a52ca4  ldr x24,[x19, #0x210]
7101a52ca8  orr w10,wzr,#0x18
7101a52cac  madd x21,x9,x10,x24
7101a52cb0  ldr w9,[x8, #0x1fc]
7101a52cb4  ldr w10,[x8, #0x1f8]
7101a52cb8  ldr w8,[x8, #0x154]
7101a52cbc  ldr w2,[x21, #0xe0]!
7101a52cc0  cmn w2,#0x1
7101a52cc4  mov w27,w26
7101a52cc8  stp w8,w10,[x21, #0x8]
7101a52ccc  str w9,[x21, #0x10]
7101a52cd0  b.eq 0x7101a52a14
7101a52cd4  add x0,sp,#0x208
7101a52cd8  mov x1,x24
7101a52cdc  bl 0x71019f08a0
7101a52ce0  ldp x9,x10,[x24]
7101a52ce4  sub x10,x10,x9
7101a52ce8  mov x11,#0x8ba3
7101a52cec  movk x11,#0xba2e, LSL #16
7101a52cf0  movk x11,#0xa2e8, LSL #32
7101a52cf4  movk x11,#0x2e8b, LSL #48
7101a52cf8  asr x10,x10,#0x4
7101a52cfc  mul x10,x10,x11
7101a52d00  ldrsw x8,[x21]
7101a52d04  cmp x10,x8
7101a52d08  b.ls 0x7101a53678
7101a52d0c  mov w10,#0xb0
7101a52d10  madd x8,x8,x10,x9
7101a52d14  ldr x0,[x8, #0x20]
7101a52d18  ldr x1,[sp, #0x90]
7101a52d1c  mov v0.16B,v8.16B
7101a52d20  bl 0x7103778300
7101a52d24  mov w27,w26
7101a52d28  b 0x7101a52a14
7101a52d2c  ldr x0,[sp, #0xa0]
7101a52d30  mov w1,w27
7101a52d34  mov x2,x25
7101a52d38  bl 0x7101a5fb40
7101a52d3c  mov x21,x25
7101a52d40  ldr x24,[x21, #0x8]!
7101a52d44  ldr w8,[x24, #0x1f8]
7101a52d48  cmp w8,#0x2
7101a52d4c  b.ne 0x7101a52a14
7101a52d50  ldr x8,[x24, #0x200]
7101a52d54  and x9,x8,#-0x100000000000000
7101a52d58  cmp x9,x28
7101a52d5c  b.ne 0x7101a52d68
7101a52d60  and x8,x8,#0xffffffffff
7101a52d64  cbnz x8,0x7101a52a14
7101a52d68  ldr w8,[x24, #0x138]
7101a52d6c  cmp w8,#0xb
7101a52d70  b.ne 0x7101a52dc8
7101a52d74  ldr x0,[x24, #0x668]
7101a52d78  bl 0x71019e69d0
7101a52d7c  ldr x0,[x24, #0x668]
7101a52d80  bl 0x71019e66d0
7101a52d84  ldr x8,[x24, #0x5e8]
7101a52d88  ldr x0,[x8, #0x10]
7101a52d8c  mov v0.16B,v8.16B
7101a52d90  adrp x1,0x710437b000
7101a52d94  add x1,x1,#0xfe8
7101a52d98  strb wzr,[x8, #0x266]
7101a52d9c  bl 0x7103778300
7101a52da0  mov w8,#0xffffffff
7101a52da4  adrp x9,0x71050a8000
7101a52da8  str w8,[x9, #0x78]
7101a52dac  ldrsw x8,[x24, #0x134]
7101a52db0  cmp w8,#0x13
7101a52db4  b.cs 0x7101a53644
7101a52db8  add x8,x24,x8, LSL #0x2
7101a52dbc  orr w9,wzr,#0x3
7101a52dc0  str w9,[x8, #0xe8]
7101a52dc4  ldr x24,[x21]
7101a52dc8  mov x0,x24
7101a52dcc  bl 0x7101a07770
7101a52dd0  b 0x7101a52a14
7101a52dd4  mov w27,w26
7101a52dd8  b 0x7101a52a14
7101a52ddc  ldr x8,[x25, #0x8]
7101a52de0  ldr x8,[x8, #0x618]
7101a52de4  ldr w8,[x8, #0x4c]
7101a52de8  cmp w8,#0x2
7101a52dec  b.eq 0x7101a52e4c
7101a52df0  b 0x7101a52e84
7101a52df4  ldr x8,[x25, #0x8]
7101a52df8  ldr x8,[x8, #0x608]
7101a52dfc  ldr w8,[x8, #0xd8]
7101a52e00  cmp w8,#0x2
7101a52e04  b.eq 0x7101a52e4c
7101a52e08  b 0x7101a52e84
7101a52e0c  ldr x8,[x25, #0x8]
7101a52e10  ldr x8,[x8, #0x648]
7101a52e14  ldr w8,[x8, #0xb8]
7101a52e18  cmp w8,#0x2
7101a52e1c  b.eq 0x7101a52e4c
7101a52e20  b 0x7101a52e84
7101a52e24  ldrb w9,[x19, #0x2b8]
7101a52e28  ldr x8,[x25, #0x8]
7101a52e2c  cmp w9,#0x2
7101a52e30  b.ne 0x7101a52e3c
7101a52e34  ldr x8,[x8, #0x638]
7101a52e38  b 0x7101a52e40
7101a52e3c  ldr x8,[x8, #0x628]
7101a52e40  ldr w8,[x8, #0x44]
7101a52e44  cmp w8,#0x2
7101a52e48  b.ne 0x7101a52e84
7101a52e4c  bl 0x7101a5f550
7101a52e50  b 0x7101a52e8c
7101a52e54  bl 0x7101a5f550
7101a52e58  tbz w0,#0x0,0x7101a52e8c
7101a52e5c  mov w8,#0xffffffff
7101a52e60  str w8,[x19, #0x274]
7101a52e64  b 0x7101a52e8c
7101a52e68  ldr x8,[x25, #0x8]
7101a52e6c  ldr w9,[x8, #0x1f8]
7101a52e70  cmp w9,#0x2
7101a52e74  b.ne 0x7101a52e84
7101a52e78  ldr w8,[x8, #0x138]
7101a52e7c  cmp w8,#0xb
7101a52e80  b.eq 0x7101a52e8c
7101a52e84  mov w1,wzr
7101a52e88  bl 0x7101a5ba50
7101a52e8c  ldr x8,[sp, #0xb0]
7101a52e90  ldr x24,[x8]
7101a52e94  ldr w8,[x24, #0x4e0]
7101a52e98  cbz w8,0x7101a53598
7101a52e9c  cmp w8,#0xd
7101a52ea0  b.ne 0x7101a52ffc
7101a52ea4  ldr w8,[x24, #0x10]
7101a52ea8  cmp w8,#0x1
7101a52eac  b.lt 0x7101a52ed8
7101a52eb0  mov w27,wzr
7101a52eb4  mov x0,x24
7101a52eb8  mov w1,w27
7101a52ebc  bl 0x7101a5f920
7101a52ec0  ldr w8,[x24, #0x10]
7101a52ec4  add w27,w27,#0x1
7101a52ec8  cmp w27,w8
7101a52ecc  b.lt 0x7101a52eb4
7101a52ed0  cmp w8,#0x0
7101a52ed4  b.gt 0x7101a52ee8
7101a52ed8  ldr w1,[x24, #0x4d8]
7101a52edc  mov x0,x24
7101a52ee0  bl 0x7101a5f920
7101a52ee4  ldr w8,[x24, #0xc]
7101a52ee8  sub w1,w8,#0x1
7101a52eec  mov x0,x24
7101a52ef0  bl 0x7101a5a2a0
7101a52ef4  mov w8,#0x1
7101a52ef8  mov x0,x24
7101a52efc  strb w8,[x24, #0x4f9]
7101a52f00  bl 0x7101a59de0
7101a52f04  cmn w26,#0x1
7101a52f08  b.eq 0x7101a52f1c
7101a52f0c  ldr x8,[sp, #0xb0]
7101a52f10  ldr x0,[x8]
7101a52f14  mov w1,w26
7101a52f18  bl 0x7101a5a2a0
7101a52f1c  ldr x8,[x19, #0x250]
7101a52f20  ldr w24,[x8, #0x4d8]
7101a52f24  ldr x21,[sp, #0xa0]
7101a52f28  mov x0,x21
7101a52f2c  mov w1,w24
7101a52f30  mov x2,x25
7101a52f34  bl 0x7101a5fb40
7101a52f38  mov x0,x21
7101a52f3c  mov w1,w24
7101a52f40  mov x2,x25
7101a52f44  bl 0x7101a5fdf0
7101a52f48  ldr x8,[x22]
7101a52f4c  ldr x8,[x8, #0x20]
7101a52f50  strb wzr,[x8, #0x167]
7101a52f54  ldr x8,[x22]
7101a52f58  mov w9,#0xffffffff
7101a52f5c  mov x0,x19
7101a52f60  mov x1,x25
7101a52f64  str w9,[x8, #0x30]
7101a52f68  bl 0x7101a54360
7101a52f6c  ldr x8,[x25, #0x8]
7101a52f70  ldrsw x9,[x8, #0x150]
7101a52f74  cmp w9,#0x8
7101a52f78  b.cs 0x7101a53644
7101a52f7c  ldr x24,[x19, #0x210]
7101a52f80  orr w10,wzr,#0x18
7101a52f84  madd x21,x9,x10,x24
7101a52f88  ldr w9,[x8, #0x1fc]
7101a52f8c  ldr w10,[x8, #0x1f8]
7101a52f90  ldr w8,[x8, #0x154]
7101a52f94  ldr w2,[x21, #0xe0]!
7101a52f98  cmn w2,#0x1
7101a52f9c  stp w8,w10,[x21, #0x8]
7101a52fa0  str w9,[x21, #0x10]
7101a52fa4  b.eq 0x7101a53598
7101a52fa8  add x0,sp,#0x208
7101a52fac  mov x1,x24
7101a52fb0  bl 0x71019f08a0
7101a52fb4  ldp x9,x10,[x24]
7101a52fb8  sub x10,x10,x9
7101a52fbc  mov x11,#0x8ba3
7101a52fc0  movk x11,#0xba2e, LSL #16
7101a52fc4  movk x11,#0xa2e8, LSL #32
7101a52fc8  movk x11,#0x2e8b, LSL #48
7101a52fcc  asr x10,x10,#0x4
7101a52fd0  mul x10,x10,x11
7101a52fd4  ldrsw x8,[x21]
7101a52fd8  cmp x10,x8
7101a52fdc  b.ls 0x7101a53678
7101a52fe0  mov w10,#0xb0
7101a52fe4  madd x8,x8,x10,x9
7101a52fe8  ldr x0,[x8, #0x20]
7101a52fec  ldr x1,[sp, #0x90]
7101a52ff0  mov v0.16B,v8.16B
7101a52ff4  bl 0x7103778300
7101a52ff8  b 0x7101a53598
7101a52ffc  mov x28,x25
7101a53000  ldr w26,[x24, #0x4dc]
7101a53004  cmn w26,#0x1
7101a53008  ldr x9,[x28, #0x8]!
7101a5300c  ldrsw x21,[x9, #0x150]
7101a53010  b.eq 0x7101a530d0
7101a53014  cmp w27,w26
7101a53018  b.eq 0x7101a530d0
7101a5301c  b.ge 0x7101a53044
7101a53020  ldr w8,[x9, #0x698]
7101a53024  cmp w8,#0x1
7101a53028  b.eq 0x7101a53044
7101a5302c  ldr x0,[sp, #0xa0]
7101a53030  mov w1,w27
7101a53034  mov x2,x25
7101a53038  bl 0x7101a5fdf0
7101a5303c  ldr x8,[sp, #0xb0]
7101a53040  ldr x24,[x8]
7101a53044  mov x0,x24
7101a53048  mov w1,w26
7101a5304c  bl 0x7101a5a2a0
7101a53050  tbnz w26,#0x1f,0x7101a53128
7101a53054  ldr x8,[sp, #0xb0]
7101a53058  ldr x0,[x8]
7101a5305c  lsr w8,w26,#0x2
7101a53060  ldr w9,[x0, #0x4cc]
7101a53064  cmp w9,w8
7101a53068  b.gt 0x7101a53078
7101a5306c  add w10,w9,#0x2
7101a53070  cmp w8,w10
7101a53074  b.lt 0x7101a53128
7101a53078  cmp w9,w8
7101a5307c  cset w9,le
7101a53080  sub w10,w8,w9
7101a53084  mov x8,x0
7101a53088  ldr x9,[x8, #0x68]!
7101a5308c  ldr x11,[x8, #0x8]
7101a53090  sub x11,x11,x9
7101a53094  str w10,[x8, #0x464]
7101a53098  sxtw x10,w10
7101a5309c  asr x11,x11,#0x4
7101a530a0  cmp x11,x10
7101a530a4  b.ls 0x7101a53648
7101a530a8  add x8,x9,x10, LSL #0x4
7101a530ac  ldr x8,[x8, #0x8]
7101a530b0  ldr x8,[x8]
7101a530b4  movi v0.2D,#0x0
7101a530b8  cbz x8,0x7101a53110
7101a530bc  add x9,x8,#0x30
7101a530c0  add x8,x8,#0x34
7101a530c4  ld1 {v0.S}[0],[x9]
7101a530c8  ld1 {v0.S}[1],[x8]
7101a530cc  b 0x7101a5311c
7101a530d0  cmp w8,#0x6
7101a530d4  b.eq 0x7101a53104
7101a530d8  mov x24,x21
7101a530dc  ldr x21,[sp, #0xa0]
7101a530e0  mov x0,x21
7101a530e4  mov w1,w27
7101a530e8  mov x2,x25
7101a530ec  bl 0x7101a5fb40
7101a530f0  mov x0,x21
7101a530f4  mov w1,w27
7101a530f8  mov x2,x25
7101a530fc  mov x21,x24
7101a53100  bl 0x7101a5fdf0
7101a53104  mov w10,wzr
7101a53108  mov w26,w27
7101a5310c  b 0x7101a53154
7101a53110  adrp x8,0x71052a8000
7101a53114  ldr x8,[x8, #0xa80]
7101a53118  ldr q0,[x8]
7101a5311c  fneg s0,s0
7101a53120  str s0,[x0, #0x4d4]
7101a53124  bl 0x7101a59de0
7101a53128  ldr x8,[x22]
7101a5312c  ldr x8,[x8, #0x20]
7101a53130  strb wzr,[x8, #0x167]
7101a53134  ldr x8,[x22]
7101a53138  mov w9,#0xffffffff
7101a5313c  str w9,[x8, #0x30]
7101a53140  ldr x0,[x19, #0x260]
7101a53144  mov w1,w21
7101a53148  mov x2,xzr
7101a5314c  bl 0x71032d0b50
7101a53150  mov w10,#0x1
7101a53154  ldr x8,[sp, #0xb0]
7101a53158  ldr x0,[x8]
7101a5315c  mov x8,x0
7101a53160  ldr x11,[x8, #0xa8]!
7101a53164  ldr x9,[x0, #0xb0]
7101a53168  sub x9,x9,x11
7101a5316c  mov x12,#0xefbf
7101a53170  movk x12,#0xbefb, LSL #16
7101a53174  movk x12,#0xfbef, LSL #32
7101a53178  movk x12,#0xefbe, LSL #48
7101a5317c  sxtw x26,w26
7101a53180  asr x9,x9,#0x4
7101a53184  mul x9,x9,x12
7101a53188  cmp x9,x26
7101a5318c  b.ls 0x7101a53648
7101a53190  ldr w12,[x0, #0x4e0]
7101a53194  sub w12,w12,#0x1
7101a53198  cmp w12,#0x9
7101a5319c  b.hi 0x7101a53598
7101a531a0  adrp x13,0x71044f7000
7101a531a4  add x13,x13,#0x7ec
7101a531a8  ldrsw x12,[x13, x12, LSL #0x2]
7101a531ac  add x12,x12,x13
7101a531b0  br x12
7101a531b4  madd x8,x26,x20,x11
7101a531b8  ldr w2,[x8, #0x10]
7101a531bc  cbz w10,0x7101a52640
7101a531c0  mov x0,x19
7101a531c4  mov x1,x25
7101a531c8  b 0x7101a526c4
7101a531cc  ldr x24,[x28]
7101a531d0  ldr w8,[x24, #0x138]
7101a531d4  cmp w8,#0x3
7101a531d8  b.ne 0x7101a53538
7101a531dc  ldrb w8,[x24, #0x6bc]
7101a531e0  cbz w8,0x7101a53538
7101a531e4  ldr x8,[x24, #0x678]
7101a531e8  cbnz x8,0x7101a531f4
7101a531ec  ldr x8,[x24, #0x680]
7101a531f0  cbz x8,0x7101a53538
7101a531f4  ldr x8,[x8, #0x8]
7101a531f8  ldrb w8,[x8, #0x36]
7101a531fc  cbz w8,0x7101a53538
7101a53200  mov x0,x24
7101a53204  bl 0x7101a036e0
7101a53208  ldrsw x8,[x24, #0x134]
7101a5320c  cmp w8,#0x13
7101a53210  b.cs 0x7101a53644
7101a53214  add x8,x24,x8, LSL #0x2
7101a53218  mov w9,#0x5
7101a5321c  b 0x7101a5352c
7101a53220  ldr x24,[x28]
7101a53224  ldrb w9,[x19, #0x2b8]
7101a53228  cmp w9,#0x2
7101a5322c  ldr w8,[x24, #0x138]
7101a53230  b.ne 0x7101a534e4
7101a53234  cmp w8,#0x3
7101a53238  b.ne 0x7101a53530
7101a5323c  ldrb w8,[x24, #0x6bc]
7101a53240  cbz w8,0x7101a53530
7101a53244  ldr x8,[x24, #0x678]
7101a53248  cbnz x8,0x7101a53254
7101a5324c  ldr x8,[x24, #0x680]
7101a53250  cbz x8,0x7101a53530
7101a53254  ldr x8,[x8, #0x8]
7101a53258  ldrb w8,[x8, #0x36]
7101a5325c  cbz w8,0x7101a53530
7101a53260  mov x0,x24
7101a53264  bl 0x7101a036e0
7101a53268  ldrsw x8,[x24, #0x134]
7101a5326c  cmp w8,#0x13
7101a53270  b.cs 0x7101a53644
7101a53274  add x8,x24,x8, LSL #0x2
7101a53278  mov w9,#0x8
7101a5327c  b 0x7101a5352c
7101a53280  ldrb w10,[x0, #0x4f9]
7101a53284  cbz w10,0x7101a533a0
7101a53288  ldr w10,[x0, #0x10]
7101a5328c  cmp w10,#0x1
7101a53290  b.lt 0x7101a532c0
7101a53294  mov x12,xzr
7101a53298  add x11,x11,#0x3ed
7101a5329c  cmp x9,x12
7101a532a0  b.ls 0x7101a53648
7101a532a4  ldrb w13,[x11]
7101a532a8  cmp w13,#0x1
7101a532ac  b.ne 0x7101a533a0
7101a532b0  add x12,x12,#0x1
7101a532b4  add x11,x11,#0x3f0
7101a532b8  cmp w10,w12
7101a532bc  b.gt 0x7101a5329c
7101a532c0  ldr x8,[x22]
7101a532c4  ldr x8,[x8, #0x20]
7101a532c8  strb wzr,[x8, #0x167]
7101a532cc  ldr x8,[x22]
7101a532d0  ldr x0,[sp, #0xa0]
7101a532d4  mov w9,#0xffffffff
7101a532d8  mov w1,w26
7101a532dc  mov x2,x25
7101a532e0  str w9,[x8, #0x30]
7101a532e4  bl 0x7101a5fb40
7101a532e8  mov x0,x19
7101a532ec  mov x1,x25
7101a532f0  bl 0x7101a54a30
7101a532f4  b 0x7101a53598
7101a532f8  ldr x24,[x28]
7101a532fc  ldr w8,[x24, #0x138]
7101a53300  cmp w8,#0x3
7101a53304  b.ne 0x7101a53538
7101a53308  ldrb w8,[x24, #0x6bc]
7101a5330c  cbz w8,0x7101a53538
7101a53310  ldr x8,[x24, #0x678]
7101a53314  cbnz x8,0x7101a53320
7101a53318  ldr x8,[x24, #0x680]
7101a5331c  cbz x8,0x7101a53538
7101a53320  ldr x8,[x8, #0x8]
7101a53324  ldrb w8,[x8, #0x36]
7101a53328  cbz w8,0x7101a53538
7101a5332c  mov x0,x24
7101a53330  bl 0x7101a036e0
7101a53334  ldrsw x8,[x24, #0x134]
7101a53338  cmp w8,#0x13
7101a5333c  b.cs 0x7101a53644
7101a53340  add x8,x24,x8, LSL #0x2
7101a53344  orr w9,wzr,#0x6
7101a53348  b 0x7101a5352c
7101a5334c  ldr x24,[x28]
7101a53350  ldr w8,[x24, #0x138]
7101a53354  cmp w8,#0x3
7101a53358  b.ne 0x7101a53538
7101a5335c  ldrb w8,[x24, #0x6bc]
7101a53360  cbz w8,0x7101a53538
7101a53364  ldr x8,[x24, #0x678]
7101a53368  cbnz x8,0x7101a53374
7101a5336c  ldr x8,[x24, #0x680]
7101a53370  cbz x8,0x7101a53538
7101a53374  ldr x8,[x8, #0x8]
7101a53378  ldrb w8,[x8, #0x36]
7101a5337c  cbz w8,0x7101a53538
7101a53380  mov x0,x24
7101a53384  bl 0x7101a036e0
7101a53388  ldrsw x8,[x24, #0x134]
7101a5338c  cmp w8,#0x13
7101a53390  b.cs 0x7101a53644
7101a53394  add x8,x24,x8, LSL #0x2
7101a53398  mov w9,#0x9
7101a5339c  b 0x7101a5352c
7101a533a0  ldr x8,[x28]
7101a533a4  ldr x9,[x22]
7101a533a8  mov w1,w26
7101a533ac  ldr x9,[x9, #0x20]
7101a533b0  ldr w8,[x8, #0x150]
7101a533b4  cmn w8,#0x1
7101a533b8  cset w10,ne
7101a533bc  strb w10,[x9, #0x167]
7101a533c0  ldr x9,[x22]
7101a533c4  ldr x0,[sp, #0xa0]
7101a533c8  mov x2,x25
7101a533cc  mov x27,x21
7101a533d0  str w8,[x9, #0x30]
7101a533d4  bl 0x7101a5fb40
7101a533d8  mov x0,x19
7101a533dc  mov x1,x25
7101a533e0  bl 0x7101a54360
7101a533e4  ldr x8,[x28]
7101a533e8  ldrsw x9,[x8, #0x150]
7101a533ec  cmp w9,#0x8
7101a533f0  b.cs 0x7101a53644
7101a533f4  ldr x24,[x19, #0x210]
7101a533f8  orr w10,wzr,#0x18
7101a533fc  madd x21,x9,x10,x24
7101a53400  ldr w9,[x8, #0x1fc]
7101a53404  ldr w10,[x8, #0x1f8]
7101a53408  ldr w8,[x8, #0x154]
7101a5340c  ldr w2,[x21, #0xe0]!
7101a53410  cmn w2,#0x1
7101a53414  stp w8,w10,[x21, #0x8]
7101a53418  str w9,[x21, #0x10]
7101a5341c  b.eq 0x7101a53470
7101a53420  add x0,sp,#0x208
7101a53424  mov x1,x24
7101a53428  bl 0x71019f08a0
7101a5342c  ldp x9,x10,[x24]
7101a53430  sub x10,x10,x9
7101a53434  mov x11,#0x8ba3
7101a53438  movk x11,#0xba2e, LSL #16
7101a5343c  movk x11,#0xa2e8, LSL #32
7101a53440  movk x11,#0x2e8b, LSL #48
7101a53444  asr x10,x10,#0x4
7101a53448  mul x10,x10,x11
7101a5344c  ldrsw x8,[x21]
7101a53450  cmp x10,x8
7101a53454  b.ls 0x7101a53678
7101a53458  mov w10,#0xb0
7101a5345c  madd x8,x8,x10,x9
7101a53460  ldr x0,[x8, #0x20]
7101a53464  ldr x1,[sp, #0x90]
7101a53468  mov v0.16B,v8.16B
7101a5346c  bl 0x7103778300
7101a53470  ldr x8,[x22]
7101a53474  ldr w10,[x8, #0x30]
7101a53478  ldr x9,[x28]
7101a5347c  cmn w10,#0x1
7101a53480  b.eq 0x7101a527fc
7101a53484  ldr x9,[x9, #0x200]
7101a53488  and x10,x9,#-0x100000000000000
7101a5348c  mov x11,#-0x3f00000000000000
7101a53490  cmp x10,x11
7101a53494  b.ne 0x7101a52828
7101a53498  and x9,x9,#0xffffffffff
7101a5349c  cbz x9,0x7101a52828
7101a534a0  mov x1,x27
7101a534a4  cmp w1,#0xa
7101a534a8  b.cs 0x7101a53644
7101a534ac  ldr x9,[x19, #0x260]
7101a534b0  mov w10,#0x130
7101a534b4  madd x9,x1,x10,x9
7101a534b8  ldr x9,[x9, #0x28]
7101a534bc  ldr x9,[x9, #0x18]
7101a534c0  ldr x9,[x9]
7101a534c4  movi v4.2D,#0x0
7101a534c8  cbz x9,0x7101a52894
7101a534cc  mov v0.16B,v4.16B
7101a534d0  add x10,x9,#0x30
7101a534d4  add x9,x9,#0x34
7101a534d8  ld1 {v0.S}[0],[x10]
7101a534dc  ld1 {v0.S}[1],[x9]
7101a534e0  b 0x7101a528a0
7101a534e4  cmp w8,#0x3
7101a534e8  b.ne 0x7101a53530
7101a534ec  ldrb w8,[x24, #0x6bc]
7101a534f0  cbz w8,0x7101a53530
7101a534f4  ldr x8,[x24, #0x678]
7101a534f8  cbnz x8,0x7101a53504
7101a534fc  ldr x8,[x24, #0x680]
7101a53500  cbz x8,0x7101a53530
7101a53504  ldr x8,[x8, #0x8]
7101a53508  ldrb w8,[x8, #0x36]
7101a5350c  cbz w8,0x7101a53530
7101a53510  mov x0,x24
7101a53514  bl 0x7101a036e0
7101a53518  ldrsw x8,[x24, #0x134]
7101a5351c  cmp w8,#0x13
7101a53520  b.cs 0x7101a53644
7101a53524  add x8,x24,x8, LSL #0x2
7101a53528  orr w9,wzr,#0x7
7101a5352c  str w9,[x8, #0xe8]
7101a53530  ldr x8,[sp, #0xb0]
7101a53534  ldr x0,[x8]
7101a53538  ldr w8,[x0, #0xc]
7101a5353c  cmp w8,w26
7101a53540  b.le 0x7101a53598
7101a53544  ldr x8,[x0, #0xa8]!
7101a53548  ldr x9,[x0, #0x8]
7101a5354c  sub x9,x9,x8
7101a53550  mov x10,#0xefbf
7101a53554  movk x10,#0xbefb, LSL #16
7101a53558  movk x10,#0xfbef, LSL #32
7101a5355c  movk x10,#0xefbe, LSL #48
7101a53560  asr x9,x9,#0x4
7101a53564  mul x9,x9,x10
7101a53568  cmp x9,x26
7101a5356c  b.ls 0x7101a5364c
7101a53570  madd x8,x26,x20,x8
7101a53574  ldr w8,[x8, #0x3e8]
7101a53578  cmp w8,#0x6
7101a5357c  b.ne 0x7101a53598
7101a53580  ldr x8,[x22]
7101a53584  ldr x8,[x8, #0x20]
7101a53588  strb wzr,[x8, #0x167]
7101a5358c  ldr x8,[x22]
7101a53590  mov w9,#0xffffffff
7101a53594  str w9,[x8, #0x30]
7101a53598  ldr x8,[sp, #0xa8]
7101a5359c  add x23,x23,#0x10
7101a535a0  cmp x23,x8
7101a535a4  b.ne 0x7101a5294c
7101a535a8  b 0x7101a535c4
7101a535ac  ldrsw x8,[x19, #0xd4]
7101a535b0  cmp w8,#0x13
7101a535b4  b.cs 0x7101a53644
7101a535b8  add x8,x19,x8, LSL #0x2
7101a535bc  orr w9,wzr,#0x3
7101a535c0  str w9,[x8, #0x88]
7101a535c4  mov x0,x19
7101a535c8  add sp,sp,#0x510
7101a535cc  ldp d9,d8,[sp, #0x10]
7101a535d0  ldp x29,x30,[sp, #0x70]
7101a535d4  ldp x20,x19,[sp, #0x60]
7101a535d8  ldp x22,x21,[sp, #0x50]
7101a535dc  ldp x24,x23,[sp, #0x40]
7101a535e0  ldp x26,x25,[sp, #0x30]
7101a535e4  ldp x28,x27,[sp, #0x20]
7101a535e8  ldr d10,[sp], #0x80
7101a535ec  b 0x7101a55310
7101a535f0  ldr x9,[sp, #0x230]
7101a535f4  ldr x10,[sp, #0x238]
7101a535f8  ldr x11,[sp, #0x240]
7101a535fc  str x9,[x22]
7101a53600  adrp x9,0x7104f73000
7101a53604  add x9,x9,#0xd50
7101a53608  stp x10,x11,[x22, #0x8]
7101a5360c  str x9,[sp, #0x210]
7101a53610  b 0x7101a52600
7101a53614  str w9,[x19, #0x290]
7101a53618  add x9,x19,#0x288
7101a5361c  add x10,x19,#0x298
7101a53620  str x8,[x9]
7101a53624  add x8,x8,#0x38
7101a53628  ldaxr w9,[x8]
7101a5362c  add w9,w9,#0x1
7101a53630  stlxr w11,w9,[x8]
7101a53634  cbnz w11,0x7101a53628
7101a53638  b 0x7101a525d4
7101a5363c  mov x0,x22
7101a53640  bl 0x71039c1330
7101a53644  bl 0x71039c2650
7101a53648  mov x0,x8
7101a5364c  bl 0x71039c1330
7101a53650  ldr x0,[sp, #0xa8]
7101a53654  bl 0x71039c1330
7101a53658  add x0,sp,#0x208
7101a5365c  bl 0x71039c0c00
7101a53660  ldr x0,[sp, #0x98]
7101a53664  bl 0x71039c1330
7101a53668  add x0,x19,#0x230
7101a5366c  bl 0x71039c1330
7101a53670  mov x0,x23
7101a53674  bl 0x71039c1330
7101a53678  mov x0,x24
7101a5367c  bl 0x71039c1330
7101a53680  ldr x0,[sp, #0xa0]
7101a53684  bl 0x71039c0c00
