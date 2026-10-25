// addr:      7101c7ebd0
// offset:    0x1c7ebd0
// name:      FUN_7101c7ebd0
// mangled:   
// size:      2400

7101c7ebd0  sub sp,sp,#0x120
7101c7ebd4  str d8,[sp, #0xc0]
7101c7ebd8  str x28,[sp, #0xc8]
7101c7ebdc  stp x26,x25,[sp, #0xd0]
7101c7ebe0  stp x24,x23,[sp, #0xe0]
7101c7ebe4  stp x22,x21,[sp, #0xf0]
7101c7ebe8  stp x20,x19,[sp, #0x100]
7101c7ebec  stp x29,x30,[sp, #0x110]
7101c7ebf0  add x29,sp,#0x110
7101c7ebf4  mov x20,x1
7101c7ebf8  adrp x1,0x7104318000
7101c7ebfc  add x1,x1,#0xf0b
7101c7ec00  sub x8,x29,#0x80
7101c7ec04  mov x24,x4
7101c7ec08  mov w21,w3
7101c7ec0c  mov w22,w2
7101c7ec10  mov x19,x0
7101c7ec14  bl 0x7103776640
7101c7ec18  adrp x8,0x710532f000
7101c7ec1c  ldr x8,[x8, #0x730]
7101c7ec20  ldr x9,[x8, #0x8]
7101c7ec24  ldrh w8,[x20, #0x9c]
7101c7ec28  ldr x10,[x9, #0x2e8]
7101c7ec2c  ldr x11,[x10, #0x18]!
7101c7ec30  cbz x11,0x7101c7ec80
7101c7ec34  mov x9,x10
7101c7ec38  ldrh w12,[x11, #0x20]
7101c7ec3c  cmp w12,w8
7101c7ec40  cset w12,cc
7101c7ec44  csel x9,x9,x11,cc
7101c7ec48  ldr x11,[x11, w12, UXTW #0x3]
7101c7ec4c  cbnz x11,0x7101c7ec38
7101c7ec50  cmp x9,x10
7101c7ec54  b.eq 0x7101c7ec80
7101c7ec58  ldrh w10,[x9, #0x20]
7101c7ec5c  cmp w10,w8
7101c7ec60  b.hi 0x7101c7ec80
7101c7ec64  ldr x23,[x9, #0x28]
7101c7ec68  and x9,x23,#-0x100000000000000
7101c7ec6c  orr x10,xzr,#0x1e00000000000000
7101c7ec70  and x8,x23,#0xffffffffff
7101c7ec74  cmp x9,x10
7101c7ec78  ccmp x8,#0x0,#0x4,eq
7101c7ec7c  b.ne 0x7101c7f39c
7101c7ec80  adrp x1,0x71043ad000
7101c7ec84  add x1,x1,#0xa80
7101c7ec88  add x8,sp,#0x48
7101c7ec8c  sub x0,x29,#0x80
7101c7ec90  bl 0x7103776910
7101c7ec94  adrp x1,0x710434a000
7101c7ec98  add x1,x1,#0x68e
7101c7ec9c  mov x8,sp
7101c7eca0  sub x0,x29,#0x80
7101c7eca4  bl 0x7103776910
7101c7eca8  ldr x23,[sp, #0x50]
7101c7ecac  mov w1,#0x1
7101c7ecb0  mov x0,x23
7101c7ecb4  bl 0x71037790a0
7101c7ecb8  ldr x0,[sp, #0x8]
7101c7ecbc  adrp x24,0x710523d000
7101c7ecc0  add x24,x24,#0x9a8
7101c7ecc4  stp x24,xzr,[sp]
7101c7ecc8  cbz x0,0x7101c7ecd0
7101c7eccc  bl 0x710392eb40
7101c7ecd0  stp x24,xzr,[sp, #0x48]
7101c7ecd4  cbz x23,0x7101c7ece0
7101c7ecd8  mov x0,x23
7101c7ecdc  bl 0x710392eb40
7101c7ece0  ldur x23,[x29, #-0x78]
7101c7ece4  adrp x8,0x710523d000
7101c7ece8  add x8,x8,#0x988
7101c7ecec  stp x8,xzr,[x29, #-0x80]
7101c7ecf0  cbz x23,0x7101c7ed14
7101c7ecf4  ldr x0,[x23, #0x18]
7101c7ecf8  adrp x8,0x710523d000
7101c7ecfc  add x8,x8,#0x9a8
7101c7ed00  stp x8,xzr,[x23, #0x10]
7101c7ed04  cbz x0,0x7101c7ed0c
7101c7ed08  bl 0x710392eb40
7101c7ed0c  mov x0,x23
7101c7ed10  bl 0x710392eb40
7101c7ed14  adrp x1,0x710433a000
7101c7ed18  add x1,x1,#0x953
7101c7ed1c  mov x8,sp
7101c7ed20  mov x0,x19
7101c7ed24  bl 0x7103776910
7101c7ed28  mov w0,#0x10
7101c7ed2c  mov w1,#0x8
7101c7ed30  add x23,x20,#0x80
7101c7ed34  bl 0x710392e290
7101c7ed38  cbnz x0,0x7101c7ed70
7101c7ed3c  adrp x8,0x7105332000
7101c7ed40  ldr x0,[x8, #0xf00]
7101c7ed44  mov w8,#0x8
7101c7ed48  stur wzr,[x29, #-0x70]
7101c7ed4c  sub x1,x29,#0x70
7101c7ed50  str x8,[sp, #0x48]
7101c7ed54  ldr x8,[x0]
7101c7ed58  ldr x8,[x8, #0x30]
7101c7ed5c  add x2,sp,#0x48
7101c7ed60  blr x8
7101c7ed64  mov w0,#0x10
7101c7ed68  mov w1,#0x8
7101c7ed6c  bl 0x710392e290
7101c7ed70  mov x8,x0
7101c7ed74  str x23,[x8], #0x8
7101c7ed78  ldr x23,[sp, #0x8]
7101c7ed7c  stp x0,x8,[sp, #0x48]
7101c7ed80  str x8,[sp, #0x58]
7101c7ed84  ldr x0,[x23, #0x10]
7101c7ed88  cbz x0,0x7101c7ed9c
7101c7ed8c  adrp x1,0x710437c000
7101c7ed90  add x1,x1,#0x61c
7101c7ed94  add x2,sp,#0x48
7101c7ed98  bl 0x71037a2660
7101c7ed9c  adrp x1,0x710433a000
7101c7eda0  add x1,x1,#0x72c
7101c7eda4  sub x8,x29,#0x70
7101c7eda8  mov x0,x19
7101c7edac  bl 0x7103776910
7101c7edb0  ldur x24,[x29, #-0x68]
7101c7edb4  ldr x0,[x24, #0x10]
7101c7edb8  cbz x0,0x7101c7edcc
7101c7edbc  adrp x1,0x710437c000
7101c7edc0  add x1,x1,#0x61c
7101c7edc4  add x2,sp,#0x48
7101c7edc8  bl 0x71037a2660
7101c7edcc  adrp x25,0x710523d000
7101c7edd0  add x25,x25,#0x9a8
7101c7edd4  stp x25,xzr,[x29, #-0x70]
7101c7edd8  cbz x24,0x7101c7ede4
7101c7eddc  mov x0,x24
7101c7ede0  bl 0x710392eb40
7101c7ede4  ldr x0,[sp, #0x48]
7101c7ede8  cbz x0,0x7101c7edf4
7101c7edec  str x0,[sp, #0x50]
7101c7edf0  bl 0x710392eb40
7101c7edf4  stp x25,xzr,[sp]
7101c7edf8  cbz x23,0x7101c7ee04
7101c7edfc  mov x0,x23
7101c7ee00  bl 0x710392eb40
7101c7ee04  ldrb w1,[x20, #0xfe]
7101c7ee08  add x0,sp,#0x48
7101c7ee0c  add x23,sp,#0x48
7101c7ee10  bl 0x7101c6ee80
7101c7ee14  adrp x1,0x710425f000
7101c7ee18  add x1,x1,#0x4f9
7101c7ee1c  mov x8,sp
7101c7ee20  mov x0,x19
7101c7ee24  bl 0x7103776910
7101c7ee28  add x23,x23,#0x8
7101c7ee2c  mov x0,sp
7101c7ee30  mov x1,x23
7101c7ee34  bl 0x710377a120
7101c7ee38  ldr x0,[sp, #0x8]
7101c7ee3c  stp x25,xzr,[sp]
7101c7ee40  cbz x0,0x7101c7ee48
7101c7ee44  bl 0x710392eb40
7101c7ee48  adrp x1,0x710433a000
7101c7ee4c  add x1,x1,#0x20c
7101c7ee50  mov x8,sp
7101c7ee54  mov x0,x19
7101c7ee58  mov x24,sp
7101c7ee5c  bl 0x7103776910
7101c7ee60  mov x0,sp
7101c7ee64  mov x1,x23
7101c7ee68  bl 0x710377a120
7101c7ee6c  ldr x0,[sp, #0x8]
7101c7ee70  stp x25,xzr,[sp]
7101c7ee74  cbz x0,0x7101c7ee7c
7101c7ee78  bl 0x710392eb40
7101c7ee7c  ldrb w1,[x20, #0xfe]
7101c7ee80  mov x0,sp
7101c7ee84  bl 0x7101c6ec50
7101c7ee88  ldr x0,[x19, #0x8]
7101c7ee8c  fmov s0,0x3f800000
7101c7ee90  add x1,x24,#0x8
7101c7ee94  bl 0x7103778300
7101c7ee98  ldrb w8,[x20, #0xff]
7101c7ee9c  cmp w8,#0x4
7101c7eea0  b.hi 0x7101c7ef3c
7101c7eea4  adrp x9,0x71044f9000
7101c7eea8  add x9,x9,#0x814
7101c7eeac  ldrsw x8,[x9, x8, LSL #0x2]
7101c7eeb0  add x8,x8,x9
7101c7eeb4  br x8
7101c7eeb8  orr x9,xzr,#0x1800000000
7101c7eebc  str x9,[sp, #0x48]
7101c7eec0  mov x9,#0x6e6d
7101c7eec4  movk x9,#0x5f75, LSL #16
7101c7eec8  movk x9,#0x6e6f, LSL #32
7101c7eecc  movk x9,#0x696c, LSL #48
7101c7eed0  str x9,[sp, #0x50]
7101c7eed4  mov x9,#0x656e
7101c7eed8  movk x9,#0x725f, LSL #16
7101c7eedc  add x10,sp,#0x48
7101c7eee0  add x23,x10,#0x8
7101c7eee4  strb wzr,[sp, #0x68]
7101c7eee8  movk x9,#0x6f6f, LSL #32
7101c7eeec  movk x9,#0x5f6d, LSL #48
7101c7eef0  str x9,[sp, #0x58]
7101c7eef4  add x9,x10,#0x9
7101c7eef8  mov w10,#0x6f66
7101c7eefc  strh w10,[sp, #0x60]
7101c7ef00  mov w10,#0x6d72
7101c7ef04  movk w10,#0x615f, LSL #16
7101c7ef08  stur w10,[sp, #0x62]
7101c7ef0c  mov w10,#0x6c6c
7101c7ef10  mov w8,#0x9dc5
7101c7ef14  movk w8,#0x811c, LSL #16
7101c7ef18  strh w10,[sp, #0x66]
7101c7ef1c  mov w11,#0x6d
7101c7ef20  mov w10,#0x89
7101c7ef24  mul w8,w8,w10
7101c7ef28  and w11,w11,#0xff
7101c7ef2c  eor w8,w8,w11
7101c7ef30  ldrb w11,[x9], #0x1
7101c7ef34  cbnz w11,0x7101c7ef24
7101c7ef38  b 0x7101c7f13c
7101c7ef3c  mov x11,#0x6e6d
7101c7ef40  movk x11,#0x5f75, LSL #16
7101c7ef44  mov x9,#0x1900000000
7101c7ef48  movk x11,#0x6e6f, LSL #32
7101c7ef4c  movk x11,#0x696c, LSL #48
7101c7ef50  add x10,sp,#0x48
7101c7ef54  stp x9,x11,[sp, #0x48]
7101c7ef58  mov x9,#0x656e
7101c7ef5c  movk x9,#0x725f, LSL #16
7101c7ef60  movk x9,#0x6f6f, LSL #32
7101c7ef64  movk x9,#0x5f6d, LSL #48
7101c7ef68  add x23,x10,#0x8
7101c7ef6c  str x9,[sp, #0x58]
7101c7ef70  add x9,x10,#0x9
7101c7ef74  mov w10,#0x6f66
7101c7ef78  strh w10,[sp, #0x60]
7101c7ef7c  mov x10,#0x6d72
7101c7ef80  movk x10,#0x665f, LSL #16
7101c7ef84  movk x10,#0x756f, LSL #32
7101c7ef88  movk x10,#0x72, LSL #48
7101c7ef8c  stur x10,[sp, #0x62]
7101c7ef90  mov w8,#0x9dc5
7101c7ef94  movk w8,#0x811c, LSL #16
7101c7ef98  mov w11,#0x6d
7101c7ef9c  mov w10,#0x89
7101c7efa0  mul w8,w8,w10
7101c7efa4  and w11,w11,#0xff
7101c7efa8  eor w8,w8,w11
7101c7efac  ldrb w11,[x9], #0x1
7101c7efb0  cbnz w11,0x7101c7efa0
7101c7efb4  b 0x7101c7f13c
7101c7efb8  mov x11,#0x6e6d
7101c7efbc  movk x11,#0x5f75, LSL #16
7101c7efc0  mov x9,#0x1a00000000
7101c7efc4  movk x11,#0x6e6f, LSL #32
7101c7efc8  movk x11,#0x696c, LSL #48
7101c7efcc  strb wzr,[sp, #0x6a]
7101c7efd0  stp x9,x11,[sp, #0x48]
7101c7efd4  mov x9,#0x656e
7101c7efd8  movk x9,#0x725f, LSL #16
7101c7efdc  add x10,sp,#0x48
7101c7efe0  movk x9,#0x6f6f, LSL #32
7101c7efe4  movk x9,#0x5f6d, LSL #48
7101c7efe8  add x23,x10,#0x8
7101c7efec  str x9,[sp, #0x58]
7101c7eff0  add x9,x10,#0x9
7101c7eff4  mov w10,#0x6f66
7101c7eff8  strh w10,[sp, #0x60]
7101c7effc  mov x10,#0x6d72
7101c7f000  movk x10,#0x745f, LSL #16
7101c7f004  movk x10,#0x7268, LSL #32
7101c7f008  movk x10,#0x6565, LSL #48
7101c7f00c  stur x10,[sp, #0x62]
7101c7f010  mov w8,#0x9dc5
7101c7f014  movk w8,#0x811c, LSL #16
7101c7f018  mov w11,#0x6d
7101c7f01c  mov w10,#0x89
7101c7f020  mul w8,w8,w10
7101c7f024  and w11,w11,#0xff
7101c7f028  eor w8,w8,w11
7101c7f02c  ldrb w11,[x9], #0x1
7101c7f030  cbnz w11,0x7101c7f020
7101c7f034  b 0x7101c7f13c
7101c7f038  orr x9,xzr,#0x1c00000000
7101c7f03c  str x9,[sp, #0x48]
7101c7f040  mov x9,#0x6e6d
7101c7f044  movk x9,#0x5f75, LSL #16
7101c7f048  movk x9,#0x6e6f, LSL #32
7101c7f04c  movk x9,#0x696c, LSL #48
7101c7f050  str x9,[sp, #0x50]
7101c7f054  mov x9,#0x656e
7101c7f058  movk x9,#0x725f, LSL #16
7101c7f05c  add x10,sp,#0x48
7101c7f060  add x23,x10,#0x8
7101c7f064  strb wzr,[sp, #0x6c]
7101c7f068  movk x9,#0x6f6f, LSL #32
7101c7f06c  movk x9,#0x5f6d, LSL #48
7101c7f070  str x9,[sp, #0x58]
7101c7f074  add x9,x10,#0x9
7101c7f078  mov w10,#0x6f66
7101c7f07c  strh w10,[sp, #0x60]
7101c7f080  mov x10,#0x6d72
7101c7f084  movk x10,#0x6f5f, LSL #16
7101c7f088  movk x10,#0x656e, LSL #32
7101c7f08c  movk x10,#0x6f5f, LSL #48
7101c7f090  stur x10,[sp, #0x62]
7101c7f094  mov w10,#0x656e
7101c7f098  mov w8,#0x9dc5
7101c7f09c  movk w8,#0x811c, LSL #16
7101c7f0a0  strh w10,[sp, #0x6a]
7101c7f0a4  mov w11,#0x6d
7101c7f0a8  mov w10,#0x89
7101c7f0ac  mul w8,w8,w10
7101c7f0b0  and w11,w11,#0xff
7101c7f0b4  eor w8,w8,w11
7101c7f0b8  ldrb w11,[x9], #0x1
7101c7f0bc  cbnz w11,0x7101c7f0ac
7101c7f0c0  b 0x7101c7f13c
7101c7f0c4  mov x11,#0x6e6d
7101c7f0c8  movk x11,#0x5f75, LSL #16
7101c7f0cc  mov x9,#0x1900000000
7101c7f0d0  movk x11,#0x6e6f, LSL #32
7101c7f0d4  movk x11,#0x696c, LSL #48
7101c7f0d8  add x10,sp,#0x48
7101c7f0dc  stp x9,x11,[sp, #0x48]
7101c7f0e0  mov x9,#0x656e
7101c7f0e4  movk x9,#0x725f, LSL #16
7101c7f0e8  movk x9,#0x6f6f, LSL #32
7101c7f0ec  movk x9,#0x5f6d, LSL #48
7101c7f0f0  add x23,x10,#0x8
7101c7f0f4  str x9,[sp, #0x58]
7101c7f0f8  add x9,x10,#0x9
7101c7f0fc  mov w10,#0x6f66
7101c7f100  strh w10,[sp, #0x60]
7101c7f104  mov x10,#0x6d72
7101c7f108  movk x10,#0x745f, LSL #16
7101c7f10c  movk x10,#0x6165, LSL #32
7101c7f110  movk x10,#0x6d, LSL #48
7101c7f114  stur x10,[sp, #0x62]
7101c7f118  mov w8,#0x9dc5
7101c7f11c  movk w8,#0x811c, LSL #16
7101c7f120  mov w11,#0x6d
7101c7f124  mov w10,#0x89
7101c7f128  mul w8,w8,w10
7101c7f12c  and w11,w11,#0xff
7101c7f130  eor w8,w8,w11
7101c7f134  ldrb w11,[x9], #0x1
7101c7f138  cbnz w11,0x7101c7f128
7101c7f13c  str w8,[sp, #0x48]
7101c7f140  adrp x1,0x710433a000
7101c7f144  add x1,x1,#0x373
7101c7f148  mov x8,sp
7101c7f14c  mov x0,x19
7101c7f150  bl 0x7103776910
7101c7f154  mov x0,sp
7101c7f158  mov x1,x23
7101c7f15c  bl 0x710377a120
7101c7f160  ldr x0,[sp, #0x8]
7101c7f164  stp x25,xzr,[sp]
7101c7f168  cbz x0,0x7101c7f170
7101c7f16c  bl 0x710392eb40
7101c7f170  adrp x1,0x71042a3000
7101c7f174  add x1,x1,#0x163
7101c7f178  mov x8,sp
7101c7f17c  mov x0,x19
7101c7f180  bl 0x7103776910
7101c7f184  mov x0,sp
7101c7f188  mov x1,x23
7101c7f18c  bl 0x710377a120
7101c7f190  ldr x0,[sp, #0x8]
7101c7f194  stp x25,xzr,[sp]
7101c7f198  cbz x0,0x7101c7f1a0
7101c7f19c  bl 0x710392eb40
7101c7f1a0  cmp w22,#0x2
7101c7f1a4  b.eq 0x7101c7f244
7101c7f1a8  cmp w22,#0x1
7101c7f1ac  b.ne 0x7101c7f50c
7101c7f1b0  adrp x1,0x71042e7000
7101c7f1b4  add x1,x1,#0x279
7101c7f1b8  add x8,sp,#0x48
7101c7f1bc  mov x0,x19
7101c7f1c0  bl 0x7103776910
7101c7f1c4  ldrb w8,[x20, #0x5]
7101c7f1c8  and w3,w8,#0x3f
7101c7f1cc  adrp x1,0x710438c000
7101c7f1d0  add x1,x1,#0xb70
7101c7f1d4  add x0,sp,#0x48
7101c7f1d8  mov w2,#0x1
7101c7f1dc  bl 0x710377a280
7101c7f1e0  ldr x0,[sp, #0x50]
7101c7f1e4  stp x25,xzr,[sp, #0x48]
7101c7f1e8  cbz x0,0x7101c7f1f0
7101c7f1ec  bl 0x710392eb40
7101c7f1f0  fmov s8,0x3f800000
7101c7f1f4  ldr x0,[x19, #0x8]
7101c7f1f8  adrp x1,0x710434a000
7101c7f1fc  add x1,x1,#0x3e5
7101c7f200  mov v0.16B,v8.16B
7101c7f204  bl 0x7103778300
7101c7f208  ldr x0,[x19, #0x8]
7101c7f20c  mov v0.16B,v8.16B
7101c7f210  adrp x1,0x710424f000
7101c7f214  add x1,x1,#0x5db
7101c7f218  bl 0x7103778300
7101c7f21c  ldr x0,[x19, #0x8]
7101c7f220  mov v0.16B,v8.16B
7101c7f224  adrp x1,0x71042d6000
7101c7f228  add x1,x1,#0x312
7101c7f22c  bl 0x7103778300
7101c7f230  ldr x0,[x19, #0x8]
7101c7f234  adrp x1,0x7104319000
7101c7f238  add x1,x1,#0x6af
7101c7f23c  mov v0.16B,v8.16B
7101c7f240  b 0x7101c7f508
7101c7f244  adrp x1,0x710435b000
7101c7f248  add x1,x1,#0x89c
7101c7f24c  add x8,sp,#0x48
7101c7f250  mov x0,x19
7101c7f254  bl 0x7103776910
7101c7f258  ldrb w8,[x20, #0x4]
7101c7f25c  and w3,w8,#0x3f
7101c7f260  adrp x1,0x710434a000
7101c7f264  add x1,x1,#0x3f5
7101c7f268  add x0,sp,#0x48
7101c7f26c  mov w2,#0x1
7101c7f270  bl 0x710377a280
7101c7f274  ldr x0,[sp, #0x50]
7101c7f278  stp x25,xzr,[sp, #0x48]
7101c7f27c  cbz x0,0x7101c7f284
7101c7f280  bl 0x710392eb40
7101c7f284  adrp x1,0x71043cf000
7101c7f288  add x1,x1,#0x511
7101c7f28c  add x8,sp,#0x48
7101c7f290  mov x0,x19
7101c7f294  bl 0x7103776910
7101c7f298  ldrb w8,[x20, #0x5]
7101c7f29c  and w3,w8,#0x3f
7101c7f2a0  adrp x1,0x7104401000
7101c7f2a4  add x1,x1,#0x6bd
7101c7f2a8  add x0,sp,#0x48
7101c7f2ac  mov w2,#0x1
7101c7f2b0  bl 0x710377a280
7101c7f2b4  ldr x0,[sp, #0x50]
7101c7f2b8  stp x25,xzr,[sp, #0x48]
7101c7f2bc  cbz x0,0x7101c7f2c4
7101c7f2c0  bl 0x710392eb40
7101c7f2c4  adrp x1,0x710432a000
7101c7f2c8  add x1,x1,#0x61
7101c7f2cc  add x8,sp,#0x48
7101c7f2d0  mov x0,x19
7101c7f2d4  bl 0x7103776910
7101c7f2d8  ldr x0,[sp, #0x50]
7101c7f2dc  ldr x8,[x0, #0x10]
7101c7f2e0  cbz x8,0x7101c7f2f4
7101c7f2e4  mov w9,#0x101
7101c7f2e8  strh w9,[x8, #0x27e]
7101c7f2ec  mov w9,#0x1
7101c7f2f0  strb w9,[x8, #0x280]
7101c7f2f4  stp x25,xzr,[sp, #0x48]
7101c7f2f8  cbz x0,0x7101c7f300
7101c7f2fc  bl 0x710392eb40
7101c7f300  ldr x0,[x19, #0x8]
7101c7f304  fmov s0,0x3f800000
7101c7f308  adrp x1,0x710438c000
7101c7f30c  add x1,x1,#0xb54
7101c7f310  bl 0x7103778300
7101c7f314  ldrb w8,[x20, #0x4]
7101c7f318  ldrb w9,[x20, #0x5]
7101c7f31c  and w8,w8,#0x3f
7101c7f320  and w9,w9,#0x3f
7101c7f324  cmp w8,w9
7101c7f328  b.cs 0x7101c7f374
7101c7f32c  adrp x8,0x71052c4000
7101c7f330  ldr x8,[x8, #0xc58]
7101c7f334  ldr x8,[x8, #0x8]
7101c7f338  add x0,x8,#0xa0
7101c7f33c  bl 0x7101704ba0
7101c7f340  tbnz w0,#0x0,0x7101c7f350
7101c7f344  ldrb w8,[x20, #0xfe]
7101c7f348  cmp w8,#0x3
7101c7f34c  b.eq 0x7101c7f368
7101c7f350  mov w0,wzr
7101c7f354  bl 0x7101797350
7101c7f358  tbnz w0,#0x0,0x7101c7f4b0
7101c7f35c  ldrb w8,[x20, #0xfe]
7101c7f360  cmp w8,#0x8
7101c7f364  b.ne 0x7101c7f4b0
7101c7f368  adrp x1,0x71043be000
7101c7f36c  add x1,x1,#0xdce
7101c7f370  b 0x7101c7f4b8
7101c7f374  fmov s8,0x3f800000
7101c7f378  ldr x0,[x19, #0x8]
7101c7f37c  adrp x1,0x71043be000
7101c7f380  add x1,x1,#0xdce
7101c7f384  mov v0.16B,v8.16B
7101c7f388  bl 0x7103778300
7101c7f38c  ldr x0,[x19, #0x8]
7101c7f390  adrp x1,0x71042f8000
7101c7f394  add x1,x1,#0x3a3
7101c7f398  b 0x7101c7f4d4
7101c7f39c  adrp x1,0x71043ad000
7101c7f3a0  add x1,x1,#0xa80
7101c7f3a4  add x8,sp,#0x48
7101c7f3a8  sub x0,x29,#0x80
7101c7f3ac  bl 0x7103776910
7101c7f3b0  adrp x1,0x710434a000
7101c7f3b4  add x1,x1,#0x68e
7101c7f3b8  mov x8,sp
7101c7f3bc  sub x0,x29,#0x80
7101c7f3c0  bl 0x7103776910
7101c7f3c4  mov x0,x24
7101c7f3c8  mov x1,x23
7101c7f3cc  bl 0x7103240430
7101c7f3d0  mov x1,x0
7101c7f3d4  ldr x0,[sp, #0x50]
7101c7f3d8  bl 0x7103778b80
7101c7f3dc  adrp x26,0x710523d000
7101c7f3e0  add x26,x26,#0x9a8
7101c7f3e4  mov w0,#0x10
7101c7f3e8  mov w1,#0x20
7101c7f3ec  stur x26,[x29, #-0x70]
7101c7f3f0  bl 0x710392e290
7101c7f3f4  cbnz x0,0x7101c7f43c
7101c7f3f8  adrp x8,0x7105332000
7101c7f3fc  ldr x0,[x8, #0xf00]
7101c7f400  cbz x0,0x7101c7f438
7101c7f404  mov w8,#0x20
7101c7f408  stur wzr,[x29, #-0x54]
7101c7f40c  sub x1,x29,#0x54
7101c7f410  stur x8,[x29, #-0x60]
7101c7f414  ldr x8,[x0]
7101c7f418  ldr x8,[x8, #0x30]
7101c7f41c  sub x2,x29,#0x60
7101c7f420  blr x8
7101c7f424  tbz w0,#0x0,0x7101c7f438
7101c7f428  mov w0,#0x10
7101c7f42c  mov w1,#0x20
7101c7f430  bl 0x710392e290
7101c7f434  cbnz x0,0x7101c7f43c
7101c7f438  mov x0,xzr
7101c7f43c  stp xzr,xzr,[x0, #0x10]
7101c7f440  mov x25,x0
7101c7f444  stp xzr,xzr,[x0]
7101c7f448  ldr x8,[sp, #0x8]
7101c7f44c  mov x1,x23
7101c7f450  stur x0,[x29, #-0x68]
7101c7f454  ldr x9,[x8]
7101c7f458  str x9,[x0]
7101c7f45c  ldr x8,[x8, #0x8]
7101c7f460  str x8,[x0, #0x8]
7101c7f464  ldr x24,[sp, #0x8]
7101c7f468  ldr x8,[x24, #0x10]
7101c7f46c  str x8,[x25, #0x10]
7101c7f470  ldr x8,[x24, #0x18]
7101c7f474  sub x0,x29,#0x70
7101c7f478  str x8,[x25, #0x18]
7101c7f47c  bl 0x710337d450
7101c7f480  stp x26,xzr,[x29, #-0x70]
7101c7f484  cbz x25,0x7101c7f490
7101c7f488  mov x0,x25
7101c7f48c  bl 0x710392eb40
7101c7f490  stp x26,xzr,[sp]
7101c7f494  cbz x24,0x7101c7f4a0
7101c7f498  mov x0,x24
7101c7f49c  bl 0x710392eb40
7101c7f4a0  ldr x0,[sp, #0x50]
7101c7f4a4  stp x26,xzr,[sp, #0x48]
7101c7f4a8  cbnz x0,0x7101c7ecdc
7101c7f4ac  b 0x7101c7ece0
7101c7f4b0  adrp x1,0x7104319000
7101c7f4b4  add x1,x1,#0x6af
7101c7f4b8  fmov s8,0x3f800000
7101c7f4bc  ldr x0,[x19, #0x8]
7101c7f4c0  mov v0.16B,v8.16B
7101c7f4c4  bl 0x7103778300
7101c7f4c8  ldr x0,[x19, #0x8]
7101c7f4cc  adrp x1,0x71042d6000
7101c7f4d0  add x1,x1,#0x312
7101c7f4d4  mov v0.16B,v8.16B
7101c7f4d8  bl 0x7103778300
7101c7f4dc  tbz w21,#0x0,0x7101c7f4f8
7101c7f4e0  ldrb w8,[x20, #0x7]
7101c7f4e4  ldr x0,[x19, #0x8]
7101c7f4e8  cbz w8,0x7101c7f4fc
7101c7f4ec  adrp x1,0x710438c000
7101c7f4f0  add x1,x1,#0xb61
7101c7f4f4  b 0x7101c7f504
7101c7f4f8  ldr x0,[x19, #0x8]
7101c7f4fc  adrp x1,0x710424f000
7101c7f500  add x1,x1,#0x5db
7101c7f504  fmov s0,0x3f800000
7101c7f508  bl 0x7103778300
7101c7f50c  ldr d8,[sp, #0xc0]
7101c7f510  ldp x29,x30,[sp, #0x110]
7101c7f514  ldp x20,x19,[sp, #0x100]
7101c7f518  ldr x28,[sp, #0xc8]
7101c7f51c  ldp x22,x21,[sp, #0xf0]
7101c7f520  ldp x24,x23,[sp, #0xe0]
7101c7f524  ldp x26,x25,[sp, #0xd0]
7101c7f528  add sp,sp,#0x120
7101c7f52c  ret
