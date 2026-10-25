// addr:      71018ebba0
// offset:    0x18ebba0
// name:      FUN_71018ebba0
// mangled:   
// size:      3352

71018ebba0  sub sp,sp,#0xb0
71018ebba4  stp x26,x25,[sp, #0x60]
71018ebba8  stp x24,x23,[sp, #0x70]
71018ebbac  stp x22,x21,[sp, #0x80]
71018ebbb0  stp x20,x19,[sp, #0x90]
71018ebbb4  stp x29,x30,[sp, #0xa0]
71018ebbb8  add x29,sp,#0xa0
71018ebbbc  ldr w8,[x0, #0x10c]
71018ebbc0  mov x19,x0
71018ebbc4  cbz w8,0x71018ebc8c
71018ebbc8  ldr x8,[x19, #0x128]
71018ebbcc  ldr x8,[x8, #0x80]
71018ebbd0  add x0,x8,#0x20
71018ebbd4  adrp x1,0x710424f000
71018ebbd8  add x1,x1,#0x8fc
71018ebbdc  add x8,sp,#0x20
71018ebbe0  bl 0x7103776640
71018ebbe4  ldr x20,[sp, #0x28]
71018ebbe8  ldr x0,[x20, #0x8]
71018ebbec  cbz x0,0x71018ebc14
71018ebbf0  adrp x1,0x7104421000
71018ebbf4  add x1,x1,#0x55
71018ebbf8  bl 0x71037964b0
71018ebbfc  cbz x0,0x71018ebc14
71018ebc00  ldr x8,[x0]
71018ebc04  ldr x8,[x8, #0x130]
71018ebc08  blr x8
71018ebc0c  mov w21,w0
71018ebc10  b 0x71018ebc18
71018ebc14  mov w21,wzr
71018ebc18  adrp x8,0x710523d000
71018ebc1c  add x8,x8,#0x988
71018ebc20  stp x8,xzr,[sp, #0x20]
71018ebc24  cbz x20,0x71018ebc48
71018ebc28  ldr x0,[x20, #0x18]
71018ebc2c  adrp x8,0x710523d000
71018ebc30  add x8,x8,#0x9a8
71018ebc34  stp x8,xzr,[x20, #0x10]
71018ebc38  cbz x0,0x71018ebc40
71018ebc3c  bl 0x710392eb40
71018ebc40  mov x0,x20
71018ebc44  bl 0x710392eb40
71018ebc48  tbnz w21,#0x0,0x71018ebeec
71018ebc4c  ldrb w8,[x19, #0x11c]
71018ebc50  sub w8,w8,#0x1
71018ebc54  cmp w8,#0x2
71018ebc58  b.hi 0x71018ebc60
71018ebc5c  bl 0x71018ed9a0
71018ebc60  ldr x8,[x19, #0x128]
71018ebc64  ldr x0,[x8, #0x80]
71018ebc68  mov w1,#0x1
71018ebc6c  bl 0x7101d94b00
71018ebc70  ldrsw x8,[x19, #0x104]
71018ebc74  cmp w8,#0x13
71018ebc78  b.cs 0x71018ec8b4
71018ebc7c  add x8,x19,x8, LSL #0x2
71018ebc80  orr w9,wzr,#0x3
71018ebc84  str w9,[x8, #0xb8]
71018ebc88  b 0x71018ebeec
71018ebc8c  ldrb w9,[x19, #0x11c]
71018ebc90  sub w8,w9,#0x1
71018ebc94  cmp w8,#0xf
71018ebc98  b.ls 0x71018ebe1c
71018ebc9c  add x20,x19,#0x138
71018ebca0  adrp x8,0x7105329000
71018ebca4  ldr x8,[x8, #0xf98]
71018ebca8  ldr x8,[x8]
71018ebcac  ldr x8,[x8, #0x10]
71018ebcb0  ldrb w9,[x8, #0x10]
71018ebcb4  cmp w9,#0x2
71018ebcb8  b.eq 0x71018ebd1c
71018ebcbc  ldrb w9,[x8, #0x50]
71018ebcc0  cmp w9,#0x2
71018ebcc4  b.eq 0x71018ebd1c
71018ebcc8  ldrb w9,[x8, #0x90]
71018ebccc  cmp w9,#0x2
71018ebcd0  b.eq 0x71018ebd1c
71018ebcd4  ldrb w9,[x8, #0xd0]
71018ebcd8  cmp w9,#0x2
71018ebcdc  b.eq 0x71018ebd1c
71018ebce0  ldrb w9,[x8, #0x110]
71018ebce4  cmp w9,#0x2
71018ebce8  b.eq 0x71018ebd1c
71018ebcec  ldrb w9,[x8, #0x150]
71018ebcf0  cmp w9,#0x2
71018ebcf4  b.eq 0x71018ebd1c
71018ebcf8  ldrb w9,[x8, #0x190]
71018ebcfc  cmp w9,#0x2
71018ebd00  b.eq 0x71018ebd1c
71018ebd04  ldrb w9,[x8, #0x1d0]
71018ebd08  cmp w9,#0x2
71018ebd0c  b.eq 0x71018ebd1c
71018ebd10  ldrb w9,[x8, #0x210]
71018ebd14  cmp w9,#0x2
71018ebd18  b.ne 0x71018ec8a0
71018ebd1c  mov x9,xzr
71018ebd20  ldrsw x10,[x8, #0x394]
71018ebd24  cmp w10,#0x9
71018ebd28  b.hi 0x71018ebd50
71018ebd2c  ldrsh w11,[x8, #0x398]
71018ebd30  cmn w11,#0x1
71018ebd34  b.eq 0x71018ebd50
71018ebd38  add x8,x8,x10, LSL #0x6
71018ebd3c  ldrb w8,[x8, #0x10]
71018ebd40  cmp w8,#0x2
71018ebd44  cset w8,ne
71018ebd48  lsl x8,x8,#0x28
71018ebd4c  b 0x71018ebd54
71018ebd50  orr x8,xzr,#0x10000000000
71018ebd54  ldr x10,[x20]
71018ebd58  ldr x0,[x10, #0x80]
71018ebd5c  orr x1,x8,x9
71018ebd60  mov x2,xzr
71018ebd64  bl 0x7101d9a010
71018ebd68  ldr x8,[x20]
71018ebd6c  ldr x20,[x8, #0x80]
71018ebd70  ldr x0,[x20, #0x18]
71018ebd74  fmov s0,0x3f800000
71018ebd78  adrp x1,0x710428f000
71018ebd7c  add x1,x1,#0xf7d
71018ebd80  bl 0x7103778300
71018ebd84  ldr w8,[x20, #0x30]
71018ebd88  cbnz w8,0x71018ebed0
71018ebd8c  adrp x8,0x710532f000
71018ebd90  ldr x8,[x8, #0x8d0]
71018ebd94  ldr x0,[x8, #0x8]
71018ebd98  ldrb w8,[x0, #0x191]
71018ebd9c  cbnz w8,0x71018ebe9c
71018ebda0  mov x19,#0x8281
71018ebda4  movk x19,#0xc06f, LSL #16
71018ebda8  movk x19,#0x13, LSL #32
71018ebdac  mov w2,#0x4
71018ebdb0  mov x1,x19
71018ebdb4  bl 0x7103313f20
71018ebdb8  tbz w0,#0x0,0x71018ebe9c
71018ebdbc  add x0,sp,#0x20
71018ebdc0  mov x1,x19
71018ebdc4  bl 0x71024076d0
71018ebdc8  ldr x8,[sp, #0x30]
71018ebdcc  adrp x9,0x7104f73000
71018ebdd0  add x9,x9,#0xd50
71018ebdd4  str x9,[sp, #0x28]
71018ebdd8  cbz x8,0x71018ebec8
71018ebddc  adrp x8,0x7106dd5000
71018ebde0  ldrb w8,[x8, #0x3a8]
71018ebde4  cmp w8,#0x1
71018ebde8  b.ne 0x71018ebec8
71018ebdec  adrp x9,0x7106dd5000
71018ebdf0  ldr w8,[sp, #0x38]
71018ebdf4  ldr w9,[x9, #0x3ac]
71018ebdf8  cmp w8,w9
71018ebdfc  b.ne 0x71018ebec8
71018ebe00  ldr x8,[sp, #0x30]
71018ebe04  ldr wzr,[x8, #0x38]!
71018ebe08  ldaxr w9,[x8]
71018ebe0c  sub w9,w9,#0x1
71018ebe10  stlxr w10,w9,[x8]
71018ebe14  cbnz w10,0x71018ebe08
71018ebe18  b 0x71018ebec8
71018ebe1c  adrp x23,0x7105314000
71018ebe20  ldr x10,[x23, #0x510]
71018ebe24  ldr x10,[x10]
71018ebe28  ldr x10,[x10, #0xd8]
71018ebe2c  ldr x10,[x10]
71018ebe30  subs w11,w9,#0xe
71018ebe34  b.cs 0x71018ebf08
71018ebe38  and w12,w8,#0xff
71018ebe3c  cmp w12,#0xd
71018ebe40  b.cs 0x71018ec8b4
71018ebe44  ldr x10,[x10]
71018ebe48  and x13,x8,#0xff
71018ebe4c  mov w12,wzr
71018ebe50  ldrb w13,[x10, x13, LSL ]
71018ebe54  tst w13,#0xff
71018ebe58  b.eq 0x71018ebc9c
71018ebe5c  cmp w9,#0xe
71018ebe60  b.cc 0x71018ebe74
71018ebe64  mvn w8,w11
71018ebe68  tst w8,#0xff
71018ebe6c  mov w8,w11
71018ebe70  b.eq 0x71018ebf5c
71018ebe74  and w9,w8,#0xff
71018ebe78  tbz w12,#0x0,0x71018ebf40
71018ebe7c  cmp w9,#0x3
71018ebe80  b.cs 0x71018ec8b4
71018ebe84  add x8,x10,w8, UXTB  #0x1
71018ebe88  ldrh w9,[x8, #0xe]!
71018ebe8c  cbz w9,0x71018ebf5c
71018ebe90  sub w9,w9,#0x1
71018ebe94  strh w9,[x8]
71018ebe98  b 0x71018ebf5c
71018ebe9c  mov x8,#0x650000000000
71018ebea0  movk x8,#0x87, LSL #48
71018ebea4  strb wzr,[sp, #0x40]
71018ebea8  stp xzr,x8,[sp, #0x30]
71018ebeac  mov x8,#-0x1
71018ebeb0  stp x8,xzr,[sp, #0x48]
71018ebeb4  adrp x8,0x7104f73000
71018ebeb8  add x8,x8,#0xd50
71018ebebc  str wzr,[sp, #0x20]
71018ebec0  str xzr,[sp, #0x58]
71018ebec4  str x8,[sp, #0x28]
71018ebec8  str xzr,[sp, #0x30]
71018ebecc  strb wzr,[sp, #0x40]
71018ebed0  ldr x0,[x20, #0x20]
71018ebed4  mov w8,#0x2
71018ebed8  str w8,[x20, #0x28]
71018ebedc  ldr x8,[x0]
71018ebee0  ldr x8,[x8, #0x60]
71018ebee4  mov w1,wzr
71018ebee8  blr x8
71018ebeec  ldp x29,x30,[sp, #0xa0]
71018ebef0  ldp x20,x19,[sp, #0x90]
71018ebef4  ldp x22,x21,[sp, #0x80]
71018ebef8  ldp x24,x23,[sp, #0x70]
71018ebefc  ldp x26,x25,[sp, #0x60]
71018ebf00  add sp,sp,#0xb0
71018ebf04  ret
71018ebf08  mvn w12,w11
71018ebf0c  tst w12,#0xff
71018ebf10  b.eq 0x71018ebc9c
71018ebf14  cmp w9,#0xd
71018ebf18  and w13,w11,#0xff
71018ebf1c  cset w12,hi
71018ebf20  cmp w13,#0x3
71018ebf24  b.cs 0x71018ec8b4
71018ebf28  ldr x10,[x10]
71018ebf2c  add x13,x10,w11, UXTB  #0x1
71018ebf30  ldrh w13,[x13, #0xe]
71018ebf34  tst w13,#0xff
71018ebf38  b.ne 0x71018ebe5c
71018ebf3c  b 0x71018ebc9c
71018ebf40  cmp w9,#0xd
71018ebf44  b.cs 0x71018ec8b4
71018ebf48  and x8,x8,#0xff
71018ebf4c  ldrb w9,[x10, x8, LSL ]
71018ebf50  cbz w9,0x71018ebf5c
71018ebf54  sub w9,w9,#0x1
71018ebf58  strb w9,[x10, x8, LSL ]
71018ebf5c  adrp x22,0x710532f000
71018ebf60  ldr x24,[x22, #0x730]
71018ebf64  ldr x25,[x23, #0x510]
71018ebf68  ldr x9,[x25]
71018ebf6c  ldr x8,[x24, #0x8]
71018ebf70  ldr x26,[x9, #0x248]
71018ebf74  ldr x21,[x8, #0x348]
71018ebf78  mov x20,#0xcf8d
71018ebf7c  movk x20,#0x4b6c, LSL #16
71018ebf80  movk x20,#0x14, LSL #32
71018ebf84  mov x1,x20
71018ebf88  mov x0,x21
71018ebf8c  bl 0x71032673c0
71018ebf90  mov x1,x0
71018ebf94  mov x0,x21
71018ebf98  bl 0x7103267ce0
71018ebf9c  ldr x8,[x26]
71018ebfa0  ldr x8,[x8]
71018ebfa4  ldr x9,[x24, #0x8]
71018ebfa8  mov w24,#0x95
71018ebfac  cmp w0,#0x95
71018ebfb0  csel w10,w0,w24,cc
71018ebfb4  add x8,x8,w10, UXTW  #0x2
71018ebfb8  ldr w8,[x8, #0x4c]
71018ebfbc  add w26,w8,#0x1
71018ebfc0  ldr x8,[x25]
71018ebfc4  ldr x21,[x9, #0x348]
71018ebfc8  mov x0,x21
71018ebfcc  ldr x25,[x8, #0x248]
71018ebfd0  mov x1,x20
71018ebfd4  bl 0x71032673c0
71018ebfd8  mov x1,x0
71018ebfdc  mov x0,x21
71018ebfe0  bl 0x7103267ce0
71018ebfe4  ldr x8,[x25]
71018ebfe8  ldr x8,[x8]
71018ebfec  cmp w0,#0x95
71018ebff0  csel w9,w0,w24,cc
71018ebff4  add x8,x8,w9, UXTW  #0x2
71018ebff8  str w26,[x8, #0x4c]
71018ebffc  ldr x8,[x22, #0x730]
71018ec000  ldr x8,[x8, #0x8]
71018ec004  ldr x21,[x8, #0x348]
71018ec008  mov x0,x21
71018ec00c  mov x1,x20
71018ec010  bl 0x71032673c0
71018ec014  mov x1,x0
71018ec018  mov x0,x21
71018ec01c  mov w2,wzr
71018ec020  bl 0x7103267960
71018ec024  ldr x8,[x22, #0x730]
71018ec028  ldr x9,[x23, #0x510]
71018ec02c  mov w21,w0
71018ec030  ldr x8,[x8, #0x8]
71018ec034  ldr x9,[x9]
71018ec038  ldr x25,[x9, #0x248]
71018ec03c  ldr x22,[x8, #0x348]
71018ec040  mov x0,x22
71018ec044  mov x1,x20
71018ec048  bl 0x71032673c0
71018ec04c  mov x1,x0
71018ec050  mov x0,x22
71018ec054  bl 0x7103267ce0
71018ec058  ldr x8,[x25]
71018ec05c  ldr x8,[x8]
71018ec060  cmp w0,#0x95
71018ec064  csel w9,w0,w24,cc
71018ec068  add x8,x8,w9, UXTW  #0x2
71018ec06c  ldr w8,[x8, #0x4c]
71018ec070  cmp w8,w21
71018ec074  b.cc 0x71018ec080
71018ec078  mov w0,#0x2f
71018ec07c  bl 0x710177a5c0
71018ec080  ldr x8,[x19, #0x128]
71018ec084  ldr x21,[x8, #0x80]
71018ec088  ldrb w20,[x19, #0x11c]
71018ec08c  add x0,x21,#0x20
71018ec090  adrp x1,0x710424f000
71018ec094  add x1,x1,#0x8fc
71018ec098  add x8,sp,#0x10
71018ec09c  bl 0x7103776640
71018ec0a0  sub w8,w20,#0x1
71018ec0a4  cmp w8,#0x4
71018ec0a8  b.hi 0x71018ec390
71018ec0ac  adrp x9,0x71044f6000
71018ec0b0  add x9,x9,#0x284
71018ec0b4  ldrsw x8,[x9, x8, LSL #0x2]
71018ec0b8  add x8,x8,x9
71018ec0bc  br x8
71018ec0c0  adrp x8,0x710532f000
71018ec0c4  ldr x8,[x8, #0x8d0]
71018ec0c8  ldr x0,[x8, #0x8]
71018ec0cc  ldrb w8,[x0, #0x191]
71018ec0d0  cbnz w8,0x71018ec398
71018ec0d4  mov x20,#0x8442
71018ec0d8  movk x20,#0x1190, LSL #16
71018ec0dc  movk x20,#0x1e, LSL #32
71018ec0e0  mov w2,#0x4
71018ec0e4  mov x1,x20
71018ec0e8  bl 0x7103313f20
71018ec0ec  tbz w0,#0x0,0x71018ec398
71018ec0f0  add x0,sp,#0x20
71018ec0f4  mov x1,x20
71018ec0f8  bl 0x71024076d0
71018ec0fc  ldr x8,[sp, #0x30]
71018ec100  adrp x9,0x7104f73000
71018ec104  add x9,x9,#0xd50
71018ec108  str x9,[sp, #0x28]
71018ec10c  cbz x8,0x71018ec3c4
71018ec110  adrp x8,0x7106dd5000
71018ec114  ldrb w8,[x8, #0x3a8]
71018ec118  cmp w8,#0x1
71018ec11c  b.ne 0x71018ec3c4
71018ec120  adrp x9,0x7106dd5000
71018ec124  ldr w8,[sp, #0x38]
71018ec128  ldr w9,[x9, #0x3ac]
71018ec12c  cmp w8,w9
71018ec130  b.ne 0x71018ec3c4
71018ec134  ldr x8,[sp, #0x30]
71018ec138  ldr wzr,[x8, #0x38]!
71018ec13c  ldaxr w9,[x8]
71018ec140  sub w9,w9,#0x1
71018ec144  stlxr w10,w9,[x8]
71018ec148  cbnz w10,0x71018ec13c
71018ec14c  b 0x71018ec3c4
71018ec150  adrp x8,0x710532f000
71018ec154  ldr x8,[x8, #0x8d0]
71018ec158  ldr x0,[x8, #0x8]
71018ec15c  ldrb w8,[x0, #0x191]
71018ec160  cbnz w8,0x71018ec430
71018ec164  mov x20,#0x8442
71018ec168  movk x20,#0x1190, LSL #16
71018ec16c  movk x20,#0x1e, LSL #32
71018ec170  mov w2,#0x4
71018ec174  mov x1,x20
71018ec178  bl 0x7103313f20
71018ec17c  tbz w0,#0x0,0x71018ec430
71018ec180  add x0,sp,#0x20
71018ec184  mov x1,x20
71018ec188  bl 0x71024076d0
71018ec18c  ldr x8,[sp, #0x30]
71018ec190  adrp x9,0x7104f73000
71018ec194  add x9,x9,#0xd50
71018ec198  str x9,[sp, #0x28]
71018ec19c  cbz x8,0x71018ec45c
71018ec1a0  adrp x8,0x7106dd5000
71018ec1a4  ldrb w8,[x8, #0x3a8]
71018ec1a8  cmp w8,#0x1
71018ec1ac  b.ne 0x71018ec45c
71018ec1b0  adrp x9,0x7106dd5000
71018ec1b4  ldr w8,[sp, #0x38]
71018ec1b8  ldr w9,[x9, #0x3ac]
71018ec1bc  cmp w8,w9
71018ec1c0  b.ne 0x71018ec45c
71018ec1c4  ldr x8,[sp, #0x30]
71018ec1c8  ldr wzr,[x8, #0x38]!
71018ec1cc  ldaxr w9,[x8]
71018ec1d0  sub w9,w9,#0x1
71018ec1d4  stlxr w10,w9,[x8]
71018ec1d8  cbnz w10,0x71018ec1cc
71018ec1dc  b 0x71018ec45c
71018ec1e0  adrp x8,0x710532f000
71018ec1e4  ldr x8,[x8, #0x8d0]
71018ec1e8  ldr x0,[x8, #0x8]
71018ec1ec  ldrb w8,[x0, #0x191]
71018ec1f0  cbnz w8,0x71018ec4c4
71018ec1f4  mov x20,#0x8442
71018ec1f8  movk x20,#0x1190, LSL #16
71018ec1fc  movk x20,#0x1e, LSL #32
71018ec200  mov w2,#0x4
71018ec204  mov x1,x20
71018ec208  bl 0x7103313f20
71018ec20c  tbz w0,#0x0,0x71018ec4c4
71018ec210  add x0,sp,#0x20
71018ec214  mov x1,x20
71018ec218  bl 0x71024076d0
71018ec21c  ldr x8,[sp, #0x30]
71018ec220  adrp x9,0x7104f73000
71018ec224  add x9,x9,#0xd50
71018ec228  str x9,[sp, #0x28]
71018ec22c  cbz x8,0x71018ec4f0
71018ec230  adrp x8,0x7106dd5000
71018ec234  ldrb w8,[x8, #0x3a8]
71018ec238  cmp w8,#0x1
71018ec23c  b.ne 0x71018ec4f0
71018ec240  adrp x9,0x7106dd5000
71018ec244  ldr w8,[sp, #0x38]
71018ec248  ldr w9,[x9, #0x3ac]
71018ec24c  cmp w8,w9
71018ec250  b.ne 0x71018ec4f0
71018ec254  ldr x8,[sp, #0x30]
71018ec258  ldr wzr,[x8, #0x38]!
71018ec25c  ldaxr w9,[x8]
71018ec260  sub w9,w9,#0x1
71018ec264  stlxr w10,w9,[x8]
71018ec268  cbnz w10,0x71018ec25c
71018ec26c  b 0x71018ec4f0
71018ec270  adrp x8,0x710532f000
71018ec274  ldr x8,[x8, #0x8d0]
71018ec278  ldr x0,[x8, #0x8]
71018ec27c  ldrb w8,[x0, #0x191]
71018ec280  cbnz w8,0x71018ec55c
71018ec284  mov x20,#0x8442
71018ec288  movk x20,#0x1190, LSL #16
71018ec28c  movk x20,#0x1e, LSL #32
71018ec290  mov w2,#0x4
71018ec294  mov x1,x20
71018ec298  bl 0x7103313f20
71018ec29c  tbz w0,#0x0,0x71018ec55c
71018ec2a0  add x0,sp,#0x20
71018ec2a4  mov x1,x20
71018ec2a8  bl 0x71024076d0
71018ec2ac  ldr x8,[sp, #0x30]
71018ec2b0  adrp x9,0x7104f73000
71018ec2b4  add x9,x9,#0xd50
71018ec2b8  str x9,[sp, #0x28]
71018ec2bc  cbz x8,0x71018ec588
71018ec2c0  adrp x8,0x7106dd5000
71018ec2c4  ldrb w8,[x8, #0x3a8]
71018ec2c8  cmp w8,#0x1
71018ec2cc  b.ne 0x71018ec588
71018ec2d0  adrp x9,0x7106dd5000
71018ec2d4  ldr w8,[sp, #0x38]
71018ec2d8  ldr w9,[x9, #0x3ac]
71018ec2dc  cmp w8,w9
71018ec2e0  b.ne 0x71018ec588
71018ec2e4  ldr x8,[sp, #0x30]
71018ec2e8  ldr wzr,[x8, #0x38]!
71018ec2ec  ldaxr w9,[x8]
71018ec2f0  sub w9,w9,#0x1
71018ec2f4  stlxr w10,w9,[x8]
71018ec2f8  cbnz w10,0x71018ec2ec
71018ec2fc  b 0x71018ec588
71018ec300  adrp x8,0x710532f000
71018ec304  ldr x8,[x8, #0x8d0]
71018ec308  ldr x0,[x8, #0x8]
71018ec30c  ldrb w8,[x0, #0x191]
71018ec310  cbnz w8,0x71018ec5f0
71018ec314  mov x20,#0x8442
71018ec318  movk x20,#0x1190, LSL #16
71018ec31c  movk x20,#0x1e, LSL #32
71018ec320  mov w2,#0x4
71018ec324  mov x1,x20
71018ec328  bl 0x7103313f20
71018ec32c  tbz w0,#0x0,0x71018ec5f0
71018ec330  add x0,sp,#0x20
71018ec334  mov x1,x20
71018ec338  bl 0x71024076d0
71018ec33c  ldr x8,[sp, #0x30]
71018ec340  adrp x9,0x7104f73000
71018ec344  add x9,x9,#0xd50
71018ec348  str x9,[sp, #0x28]
71018ec34c  cbz x8,0x71018ec61c
71018ec350  adrp x8,0x7106dd5000
71018ec354  ldrb w8,[x8, #0x3a8]
71018ec358  cmp w8,#0x1
71018ec35c  b.ne 0x71018ec61c
71018ec360  adrp x9,0x7106dd5000
71018ec364  ldr w8,[sp, #0x38]
71018ec368  ldr w9,[x9, #0x3ac]
71018ec36c  cmp w8,w9
71018ec370  b.ne 0x71018ec61c
71018ec374  ldr x8,[sp, #0x30]
71018ec378  ldr wzr,[x8, #0x38]!
71018ec37c  ldaxr w9,[x8]
71018ec380  sub w9,w9,#0x1
71018ec384  stlxr w10,w9,[x8]
71018ec388  cbnz w10,0x71018ec37c
71018ec38c  b 0x71018ec61c
71018ec390  ldr x20,[sp, #0x18]
71018ec394  b 0x71018ec6d0
71018ec398  mov x8,#0x650000000000
71018ec39c  movk x8,#0x87, LSL #48
71018ec3a0  strb wzr,[sp, #0x40]
71018ec3a4  stp xzr,x8,[sp, #0x30]
71018ec3a8  mov x8,#-0x1
71018ec3ac  stp x8,xzr,[sp, #0x48]
71018ec3b0  adrp x8,0x7104f73000
71018ec3b4  add x8,x8,#0xd50
71018ec3b8  str wzr,[sp, #0x20]
71018ec3bc  str xzr,[sp, #0x58]
71018ec3c0  str x8,[sp, #0x28]
71018ec3c4  ldr x20,[sp, #0x18]
71018ec3c8  fmov s0,0x3f800000
71018ec3cc  adrp x1,0x7104421000
71018ec3d0  add x1,x1,#0x55
71018ec3d4  strb wzr,[sp, #0x40]
71018ec3d8  mov x0,x20
71018ec3dc  str xzr,[sp, #0x30]
71018ec3e0  bl 0x7103778300
71018ec3e4  adrp x1,0x710424f000
71018ec3e8  add x1,x1,#0x9b3
71018ec3ec  mov x8,sp
71018ec3f0  add x0,sp,#0x10
71018ec3f4  bl 0x7103776910
71018ec3f8  adrp x1,0x710424f000
71018ec3fc  add x1,x1,#0x919
71018ec400  mov x0,sp
71018ec404  bl 0x710377a120
71018ec408  ldr x0,[sp, #0x8]
71018ec40c  adrp x8,0x710523d000
71018ec410  add x8,x8,#0x9a8
71018ec414  stp x8,xzr,[sp]
71018ec418  cbz x0,0x71018ec420
71018ec41c  bl 0x710392eb40
71018ec420  mov x1,#0xe0d4
71018ec424  movk x1,#0x7e1a, LSL #16
71018ec428  movk x1,#0xff1b, LSL #32
71018ec42c  b 0x71018ec684
71018ec430  mov x8,#0x650000000000
71018ec434  movk x8,#0x87, LSL #48
71018ec438  strb wzr,[sp, #0x40]
71018ec43c  stp xzr,x8,[sp, #0x30]
71018ec440  mov x8,#-0x1
71018ec444  stp x8,xzr,[sp, #0x48]
71018ec448  adrp x8,0x7104f73000
71018ec44c  add x8,x8,#0xd50
71018ec450  str wzr,[sp, #0x20]
71018ec454  str xzr,[sp, #0x58]
71018ec458  str x8,[sp, #0x28]
71018ec45c  ldr x20,[sp, #0x18]
71018ec460  fmov s0,0x3f800000
71018ec464  adrp x1,0x7104421000
71018ec468  add x1,x1,#0x55
71018ec46c  strb wzr,[sp, #0x40]
71018ec470  mov x0,x20
71018ec474  str xzr,[sp, #0x30]
71018ec478  bl 0x7103778300
71018ec47c  adrp x1,0x710424f000
71018ec480  add x1,x1,#0x9b3
71018ec484  mov x8,sp
71018ec488  add x0,sp,#0x10
71018ec48c  bl 0x7103776910
71018ec490  adrp x1,0x7104280000
71018ec494  add x1,x1,#0xe85
71018ec498  mov x0,sp
71018ec49c  bl 0x710377a120
71018ec4a0  ldr x0,[sp, #0x8]
71018ec4a4  adrp x8,0x710523d000
71018ec4a8  add x8,x8,#0x9a8
71018ec4ac  stp x8,xzr,[sp]
71018ec4b0  cbz x0,0x71018ec4b8
71018ec4b4  bl 0x710392eb40
71018ec4b8  mov x1,#0xda5e
71018ec4bc  movk x1,#0x38c4, LSL #16
71018ec4c0  b 0x71018ec680
71018ec4c4  mov x8,#0x650000000000
71018ec4c8  movk x8,#0x87, LSL #48
71018ec4cc  strb wzr,[sp, #0x40]
71018ec4d0  stp xzr,x8,[sp, #0x30]
71018ec4d4  mov x8,#-0x1
71018ec4d8  stp x8,xzr,[sp, #0x48]
71018ec4dc  adrp x8,0x7104f73000
71018ec4e0  add x8,x8,#0xd50
71018ec4e4  str wzr,[sp, #0x20]
71018ec4e8  str xzr,[sp, #0x58]
71018ec4ec  str x8,[sp, #0x28]
71018ec4f0  ldr x20,[sp, #0x18]
71018ec4f4  fmov s0,0x3f800000
71018ec4f8  adrp x1,0x7104421000
71018ec4fc  add x1,x1,#0x55
71018ec500  strb wzr,[sp, #0x40]
71018ec504  mov x0,x20
71018ec508  str xzr,[sp, #0x30]
71018ec50c  bl 0x7103778300
71018ec510  adrp x1,0x710424f000
71018ec514  add x1,x1,#0x9b3
71018ec518  mov x8,sp
71018ec51c  add x0,sp,#0x10
71018ec520  bl 0x7103776910
71018ec524  adrp x1,0x71043cf000
71018ec528  add x1,x1,#0x859
71018ec52c  mov x0,sp
71018ec530  bl 0x710377a120
71018ec534  ldr x0,[sp, #0x8]
71018ec538  adrp x8,0x710523d000
71018ec53c  add x8,x8,#0x9a8
71018ec540  stp x8,xzr,[sp]
71018ec544  cbz x0,0x71018ec54c
71018ec548  bl 0x710392eb40
71018ec54c  mov x1,#0x6035
71018ec550  movk x1,#0x623d, LSL #16
71018ec554  movk x1,#0xff1d, LSL #32
71018ec558  b 0x71018ec684
71018ec55c  mov x8,#0x650000000000
71018ec560  movk x8,#0x87, LSL #48
71018ec564  strb wzr,[sp, #0x40]
71018ec568  stp xzr,x8,[sp, #0x30]
71018ec56c  mov x8,#-0x1
71018ec570  stp x8,xzr,[sp, #0x48]
71018ec574  adrp x8,0x7104f73000
71018ec578  add x8,x8,#0xd50
71018ec57c  str wzr,[sp, #0x20]
71018ec580  str xzr,[sp, #0x58]
71018ec584  str x8,[sp, #0x28]
71018ec588  ldr x20,[sp, #0x18]
71018ec58c  fmov s0,0x3f800000
71018ec590  adrp x1,0x7104421000
71018ec594  add x1,x1,#0x55
71018ec598  strb wzr,[sp, #0x40]
71018ec59c  mov x0,x20
71018ec5a0  str xzr,[sp, #0x30]
71018ec5a4  bl 0x7103778300
71018ec5a8  adrp x1,0x710424f000
71018ec5ac  add x1,x1,#0x9b3
71018ec5b0  mov x8,sp
71018ec5b4  add x0,sp,#0x10
71018ec5b8  bl 0x7103776910
71018ec5bc  adrp x1,0x710425f000
71018ec5c0  add x1,x1,#0x875
71018ec5c4  mov x0,sp
71018ec5c8  bl 0x710377a120
71018ec5cc  ldr x0,[sp, #0x8]
71018ec5d0  adrp x8,0x710523d000
71018ec5d4  add x8,x8,#0x9a8
71018ec5d8  stp x8,xzr,[sp]
71018ec5dc  cbz x0,0x71018ec5e4
71018ec5e0  bl 0x710392eb40
71018ec5e4  mov x1,#0xc9c2
71018ec5e8  movk x1,#0x7f3a, LSL #16
71018ec5ec  b 0x71018ec680
71018ec5f0  mov x8,#0x650000000000
71018ec5f4  movk x8,#0x87, LSL #48
71018ec5f8  strb wzr,[sp, #0x40]
71018ec5fc  stp xzr,x8,[sp, #0x30]
71018ec600  mov x8,#-0x1
71018ec604  stp x8,xzr,[sp, #0x48]
71018ec608  adrp x8,0x7104f73000
71018ec60c  add x8,x8,#0xd50
71018ec610  str wzr,[sp, #0x20]
71018ec614  str xzr,[sp, #0x58]
71018ec618  str x8,[sp, #0x28]
71018ec61c  ldr x20,[sp, #0x18]
71018ec620  fmov s0,0x3f800000
71018ec624  adrp x1,0x7104421000
71018ec628  add x1,x1,#0x55
71018ec62c  strb wzr,[sp, #0x40]
71018ec630  mov x0,x20
71018ec634  str xzr,[sp, #0x30]
71018ec638  bl 0x7103778300
71018ec63c  adrp x1,0x710424f000
71018ec640  add x1,x1,#0x9b3
71018ec644  mov x8,sp
71018ec648  add x0,sp,#0x10
71018ec64c  bl 0x7103776910
71018ec650  adrp x1,0x7104291000
71018ec654  add x1,x1,#0xff1
71018ec658  mov x0,sp
71018ec65c  bl 0x710377a120
71018ec660  ldr x0,[sp, #0x8]
71018ec664  adrp x8,0x710523d000
71018ec668  add x8,x8,#0x9a8
71018ec66c  stp x8,xzr,[sp]
71018ec670  cbz x0,0x71018ec678
71018ec674  bl 0x710392eb40
71018ec678  mov x1,#0xd633
71018ec67c  movk x1,#0xc43f, LSL #16
71018ec680  movk x1,#0xff1c, LSL #32
71018ec684  movk x1,#0x2dff, LSL #48
71018ec688  ldr x0,[x21]
71018ec68c  bl 0x7103240590
71018ec690  mov x22,x0
71018ec694  adrp x1,0x710432a000
71018ec698  add x1,x1,#0x50a
71018ec69c  mov x8,sp
71018ec6a0  add x0,sp,#0x10
71018ec6a4  bl 0x7103776910
71018ec6a8  ldr x21,[sp, #0x8]
71018ec6ac  mov x0,x21
71018ec6b0  mov x1,x22
71018ec6b4  bl 0x7103778b80
71018ec6b8  adrp x8,0x710523d000
71018ec6bc  add x8,x8,#0x9a8
71018ec6c0  stp x8,xzr,[sp]
71018ec6c4  cbz x21,0x71018ec6d0
71018ec6c8  mov x0,x21
71018ec6cc  bl 0x710392eb40
71018ec6d0  adrp x8,0x710523d000
71018ec6d4  add x8,x8,#0x988
71018ec6d8  stp x8,xzr,[sp, #0x10]
71018ec6dc  cbz x20,0x71018ec700
71018ec6e0  ldr x0,[x20, #0x18]
71018ec6e4  adrp x8,0x710523d000
71018ec6e8  add x8,x8,#0x9a8
71018ec6ec  stp x8,xzr,[x20, #0x10]
71018ec6f0  cbz x0,0x71018ec6f8
71018ec6f4  bl 0x710392eb40
71018ec6f8  mov x0,x20
71018ec6fc  bl 0x710392eb40
71018ec700  adrp x8,0x7105329000
71018ec704  ldr x9,[x8, #0xf98]
71018ec708  ldrb w8,[x19, #0x11c]
71018ec70c  ldr x9,[x9]
71018ec710  ldr x0,[x9, #0x10]
71018ec714  sub w9,w8,#0x6
71018ec718  cmp w9,#0x6
71018ec71c  b.cc 0x71018ec748
71018ec720  sub w9,w8,#0x1
71018ec724  cmp w9,#0x5
71018ec728  b.cs 0x71018ec894
71018ec72c  strb w8,[x0, #0x388]
71018ec730  add x8,x0,#0x38c
71018ec734  str xzr,[x8]
71018ec738  mov w8,#0x1
71018ec73c  strb w8,[x0, #0x380]
71018ec740  bl 0x71024a6430
71018ec744  b 0x71018ec74c
71018ec748  strb w8,[x0, #0x290]
71018ec74c  ldrb w8,[x19, #0x11c]
71018ec750  ldr x9,[x19, #0x138]
71018ec754  ldr x0,[x9, #0x80]
71018ec758  ldr w9,[x0, #0x30]
71018ec75c  add x20,x19,#0x138
71018ec760  cmp w9,#0x1
71018ec764  b.eq 0x71018ebca0
71018ec768  ldp x17,x9,[x0, #0x40]
71018ec76c  cmp x9,x17
71018ec770  b.eq 0x71018ebca0
71018ec774  sub w9,w8,#0x1
71018ec778  cmp w8,#0xd
71018ec77c  cset w11,hi
71018ec780  cmp w9,#0xf
71018ec784  mov w14,#0x2
71018ec788  mov x16,#0xb587
71018ec78c  movk x16,#0x586f, LSL #16
71018ec790  mov x12,xzr
71018ec794  mov w13,wzr
71018ec798  sub w10,w8,#0xe
71018ec79c  csel w11,w14,w11,hi
71018ec7a0  mov w14,#0x1
71018ec7a4  mov w15,#0xdc
71018ec7a8  movk x16,#0x86fb, LSL #32
71018ec7ac  movk x16,#0x6fb5, LSL #48
71018ec7b0  b 0x71018ec7e0
71018ec7b4  and w2,w1,#0xff
71018ec7b8  cmp w2,#0x3
71018ec7bc  b.cs 0x71018ec8b4
71018ec7c0  ldr x18,[x18]
71018ec7c4  add x18,x18,w1, UXTB  #0x1
71018ec7c8  ldrh w18,[x18, #0xe]
71018ec7cc  madd x17,x12,x15,x17
71018ec7d0  tst w18,#0xff
71018ec7d4  strb w18,[x17, #0x1]
71018ec7d8  b.ne 0x71018ec868
71018ec7dc  b 0x71018ec858
71018ec7e0  mul x18,x12,x15
71018ec7e4  ldrb w18,[x17, x18, LSL ]
71018ec7e8  cmp w18,w8
71018ec7ec  b.ne 0x71018ec868
71018ec7f0  and w18,w9,#0xff
71018ec7f4  cmp w18,#0xf
71018ec7f8  b.hi 0x71018ec850
71018ec7fc  ldr x18,[x23, #0x510]
71018ec800  ldr x18,[x18]
71018ec804  ldr x18,[x18, #0xd8]
71018ec808  ldr x18,[x18]
71018ec80c  cmp w8,#0xe
71018ec810  mov w1,w9
71018ec814  b.cc 0x71018ec828
71018ec818  mvn w1,w10
71018ec81c  tst w1,#0xff
71018ec820  mov w1,w10
71018ec824  b.eq 0x71018ec850
71018ec828  cmp w11,#0x1
71018ec82c  b.eq 0x71018ec7b4
71018ec830  cbnz w11,0x71018ec850
71018ec834  and w2,w1,#0xff
71018ec838  cmp w2,#0xd
71018ec83c  b.cs 0x71018ec8b4
71018ec840  ldr x18,[x18]
71018ec844  and x1,x1,#0xff
71018ec848  ldrb w18,[x18, x1, LSL ]
71018ec84c  b 0x71018ec7cc
71018ec850  madd x13,x12,x15,x17
71018ec854  strb wzr,[x13, #0x1]
71018ec858  ldr x13,[x0, #0x40]
71018ec85c  madd x12,x12,x15,x13
71018ec860  mov w13,#0x1
71018ec864  strb wzr,[x12, #0x2]
71018ec868  ldp x17,x18,[x0, #0x40]
71018ec86c  sub x18,x18,x17
71018ec870  asr x18,x18,#0x2
71018ec874  mul x18,x18,x16
71018ec878  mov w12,w14
71018ec87c  add w14,w14,#0x1
71018ec880  cmp x18,x12
71018ec884  b.hi 0x71018ec7e0
71018ec888  tbz w13,#0x0,0x71018ebca0
71018ec88c  bl 0x7101d98f30
71018ec890  b 0x71018ebca0
71018ec894  cbnz w8,0x71018ec750
71018ec898  strb wzr,[x0, #0x290]
71018ec89c  b 0x71018ec74c
71018ec8a0  ldrb w9,[x8, #0x250]
71018ec8a4  cmp w9,#0x2
71018ec8a8  cset w9,ne
71018ec8ac  lsl x9,x9,#0x20
71018ec8b0  b 0x71018ebd20
71018ec8b4  bl 0x71039c2650
