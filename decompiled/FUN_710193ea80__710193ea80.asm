// addr:      710193ea80
// offset:    0x193ea80
// name:      FUN_710193ea80
// mangled:   
// size:      1196

710193ea80  sub sp,sp,#0xa0
710193ea84  str d8,[sp, #0x50]
710193ea88  stp x24,x23,[sp, #0x60]
710193ea8c  stp x22,x21,[sp, #0x70]
710193ea90  stp x20,x19,[sp, #0x80]
710193ea94  stp x29,x30,[sp, #0x90]
710193ea98  add x29,sp,#0x90
710193ea9c  ldr x9,[x0, #0x1c0]
710193eaa0  ldr w8,[x0, #0x1ac]
710193eaa4  ldr x22,[x9, #0x80]
710193eaa8  cbz w8,0x710193eaf0
710193eaac  ldr w8,[x22, #0x1e0]
710193eab0  cmp w8,#0x15
710193eab4  b.ne 0x710193edc0
710193eab8  ldrb w8,[x22, #0x380]
710193eabc  mov x19,x0
710193eac0  cmp w8,#0x5
710193eac4  b.eq 0x710193eda8
710193eac8  cmp w8,#0x4
710193eacc  b.eq 0x710193ec48
710193ead0  cmp w8,#0x1
710193ead4  b.ne 0x710193edc0
710193ead8  ldrsw x8,[x19, #0x1a4]
710193eadc  cmp w8,#0x13
710193eae0  b.cs 0x710193ef28
710193eae4  add x8,x19,x8, LSL #0x2
710193eae8  mov w9,#0x5
710193eaec  b 0x710193edbc
710193eaf0  ldr x19,[x22, #0x208]
710193eaf4  ldr x0,[x19]
710193eaf8  ldr x8,[x0]
710193eafc  ldr x8,[x8, #0x60]
710193eb00  mov w1,wzr
710193eb04  blr x8
710193eb08  ldr x0,[x19]
710193eb0c  ldr x8,[x0]
710193eb10  ldr x8,[x8, #0x70]
710193eb14  mov w1,wzr
710193eb18  blr x8
710193eb1c  ldr x8,[x22, #0x378]
710193eb20  mov w9,#0x1
710193eb24  strb w9,[x8, #0x80]
710193eb28  add x0,x22,#0x1f8
710193eb2c  adrp x1,0x71043e0000
710193eb30  add x1,x1,#0x83a
710193eb34  add x8,sp,#0x8
710193eb38  add x19,sp,#0x8
710193eb3c  bl 0x71037780e0
710193eb40  mov w0,#0x10
710193eb44  mov w1,#0x10
710193eb48  bl 0x710392e290
710193eb4c  cbnz x0,0x710193eb94
710193eb50  adrp x8,0x7105332000
710193eb54  ldr x0,[x8, #0xf00]
710193eb58  cbz x0,0x710193eb90
710193eb5c  mov w8,#0x10
710193eb60  stur wzr,[x29, #-0x34]
710193eb64  sub x1,x29,#0x34
710193eb68  str x8,[sp]
710193eb6c  ldr x8,[x0]
710193eb70  ldr x8,[x8, #0x30]
710193eb74  mov x2,sp
710193eb78  blr x8
710193eb7c  tbz w0,#0x0,0x710193eb90
710193eb80  mov w0,#0x10
710193eb84  mov w1,#0x10
710193eb88  bl 0x710392e290
710193eb8c  cbnz x0,0x710193eb94
710193eb90  mov x0,xzr
710193eb94  adrp x20,0x710523d000
710193eb98  add x20,x20,#0x9e8
710193eb9c  cmp x19,x0
710193eba0  stp x20,xzr,[x0]
710193eba4  b.eq 0x710193ebb4
710193eba8  ldr x8,[sp, #0x10]
710193ebac  str xzr,[sp, #0x10]
710193ebb0  str x8,[x0, #0x8]
710193ebb4  ldr x8,[x22, #0x368]
710193ebb8  str x0,[x22, #0x368]
710193ebbc  cbz x8,0x710193ebd0
710193ebc0  ldr x9,[x8]
710193ebc4  ldr x9,[x9, #0x8]
710193ebc8  mov x0,x8
710193ebcc  blr x9
710193ebd0  ldr x0,[sp, #0x10]
710193ebd4  stp x20,xzr,[sp, #0x8]
710193ebd8  cbz x0,0x710193ebe0
710193ebdc  bl 0x710392eb40
710193ebe0  fmov s8,0x3f800000
710193ebe4  ldr x0,[x22, #0x368]
710193ebe8  mov v0.16B,v8.16B
710193ebec  bl 0x710377aee0
710193ebf0  ldr x8,[x22, #0x308]
710193ebf4  ldr x0,[x8, #0x8]
710193ebf8  mov v0.16B,v8.16B
710193ebfc  adrp x1,0x71042b4000
710193ec00  add x1,x1,#0xa73
710193ec04  bl 0x7103778300
710193ec08  mov w8,#0x1
710193ec0c  strb w8,[x22, #0x313]
710193ec10  mov x8,#0xc
710193ec14  stp xzr,xzr,[x22, #0x10]
710193ec18  movk x8,#0x14, LSL #32
710193ec1c  stp xzr,xzr,[x22, #0x1c0]
710193ec20  strb wzr,[x22, #0x1ec]
710193ec24  stp x8,xzr,[x22, #0x190]
710193ec28  orr x8,xzr,#0x100000000
710193ec2c  stp xzr,x8,[x22, #0x1d0]
710193ec30  mov w8,#0xffffffff
710193ec34  str x8,[x22, #0x1e0]
710193ec38  str w8,[x22, #0x1e8]
710193ec3c  stp xzr,xzr,[x22, #0x1b0]
710193ec40  stp xzr,xzr,[x22, #0x1a0]
710193ec44  b 0x710193edc0
710193ec48  ldr x21,[x19, #0x1e8]
710193ec4c  ldr x8,[x21, #0x8]
710193ec50  ldr x8,[x8, #0x8]
710193ec54  ldrb w20,[x19, #0x1e0]
710193ec58  ldrb w9,[x8, #0x388]
710193ec5c  cbz w9,0x710193ec6c
710193ec60  ldrb w9,[x21, #0x10]
710193ec64  cmp x9,#0xd
710193ec68  b.ls 0x710193ee38
710193ec6c  mov w0,wzr
710193ec70  adrp x8,0x7105314000
710193ec74  ldr x8,[x8, #0x510]
710193ec78  ldr x8,[x8]
710193ec7c  ldr x8,[x8, #0xd8]
710193ec80  ldr x8,[x8]
710193ec84  ldr x23,[x8]
710193ec88  ldr w24,[x23, #0x24]
710193ec8c  cmp w24,w0
710193ec90  b.cs 0x710193eddc
710193ec94  ldr x20,[x22, #0x208]
710193ec98  ldr x0,[x20]
710193ec9c  ldr x8,[x0]
710193eca0  ldr x8,[x8, #0x60]
710193eca4  mov w1,wzr
710193eca8  blr x8
710193ecac  ldr x0,[x20]
710193ecb0  ldr x8,[x0]
710193ecb4  ldr x8,[x8, #0x70]
710193ecb8  mov w1,wzr
710193ecbc  blr x8
710193ecc0  ldr x8,[x22, #0x3b0]
710193ecc4  ldrb w8,[x8, #0x8]
710193ecc8  add w1,w8,#0x1
710193eccc  adrp x0,0x7104422000
710193ecd0  add x0,x0,#0x97b
710193ecd4  add x8,sp,#0x8
710193ecd8  add x20,x22,#0x2e8
710193ecdc  add x21,sp,#0x8
710193ece0  bl 0x71003a4ca0
710193ece4  ldr x9,[x22, #0x3b0]
710193ece8  ldr x8,[x9]
710193ecec  ldr x8,[x8, #0x8]
710193ecf0  ldrb w10,[x8, #0x388]
710193ecf4  add x21,x21,#0x8
710193ecf8  cbz w10,0x710193ed08
710193ecfc  ldrb w10,[x9, #0x8]
710193ed00  cmp x10,#0xd
710193ed04  b.ls 0x710193ee64
710193ed08  mov w3,wzr
710193ed0c  mov w2,#0x1
710193ed10  mov x0,x20
710193ed14  mov x1,x21
710193ed18  bl 0x7101e94890
710193ed1c  mov w1,#0x1
710193ed20  mov x0,x20
710193ed24  bl 0x7101e94ba0
710193ed28  add x8,x22,#0x1e4
710193ed2c  orr x9,xzr,#-0x100000000
710193ed30  str wzr,[x22, #0x1d8]
710193ed34  stp xzr,xzr,[x22, #0x10]
710193ed38  stp xzr,xzr,[x22, #0x1c8]
710193ed3c  stp xzr,xzr,[x22, #0x1b8]
710193ed40  stp xzr,xzr,[x22, #0x1a8]
710193ed44  stp xzr,xzr,[x22, #0x198]
710193ed48  str x9,[x8]
710193ed4c  mov x8,#0x15
710193ed50  movk x8,#0x13, LSL #32
710193ed54  orr x9,xzr,#-0xffffffff
710193ed58  str x8,[x22, #0x190]
710193ed5c  add x8,x22,#0x1dc
710193ed60  strb wzr,[x22, #0x1ec]
710193ed64  str x9,[x8]
710193ed68  ldrsw x8,[x19, #0x1a4]
710193ed6c  cmp w8,#0x13
710193ed70  b.cs 0x710193ef28
710193ed74  add x8,x19,x8, LSL #0x2
710193ed78  mov w9,#0x5
710193ed7c  str w9,[x8, #0x158]
710193ed80  ldr w8,[x19, #0x1a4]
710193ed84  cmp w8,#0x11
710193ed88  b.gt 0x710193edc0
710193ed8c  add w8,w8,#0x1
710193ed90  cmp w8,#0x13
710193ed94  str w8,[x19, #0x1a4]
710193ed98  b.cs 0x710193ef28
710193ed9c  add x8,x19,w8, SXTW  #0x2
710193eda0  mov w9,#0x12
710193eda4  b 0x710193edbc
710193eda8  ldrsw x8,[x19, #0x1a4]
710193edac  cmp w8,#0x13
710193edb0  b.cs 0x710193ef28
710193edb4  add x8,x19,x8, LSL #0x2
710193edb8  mov w9,#0xb
710193edbc  str w9,[x8, #0x158]
710193edc0  ldr d8,[sp, #0x50]
710193edc4  ldp x29,x30,[sp, #0x90]
710193edc8  ldp x20,x19,[sp, #0x80]
710193edcc  ldp x22,x21,[sp, #0x70]
710193edd0  ldp x24,x23,[sp, #0x60]
710193edd4  add sp,sp,#0xa0
710193edd8  ret
710193eddc  ldr x8,[x21]
710193ede0  ldr x22,[x8, #0x8]
710193ede4  ldrb w8,[x22, #0x388]
710193ede8  cbz w8,0x710193edf8
710193edec  ldrb w8,[x21, #0x10]
710193edf0  cmp x8,#0xd
710193edf4  b.ls 0x710193ee98
710193edf8  ldrsw x8,[x19, #0x1a4]
710193edfc  cmp w8,#0x13
710193ee00  b.cs 0x710193ef28
710193ee04  add x8,x19,x8, LSL #0x2
710193ee08  mov w9,#0xb
710193ee0c  str w9,[x8, #0x158]
710193ee10  ldr w8,[x19, #0x1a4]
710193ee14  cmp w8,#0x11
710193ee18  b.gt 0x710193edc0
710193ee1c  add w8,w8,#0x1
710193ee20  cmp w8,#0x13
710193ee24  str w8,[x19, #0x1a4]
710193ee28  b.cs 0x710193ef28
710193ee2c  add x8,x19,w8, SXTW  #0x2
710193ee30  mov w9,#0xa
710193ee34  b 0x710193edbc
710193ee38  mov w0,wzr
710193ee3c  cmp w20,#0x3
710193ee40  b.hi 0x710193ec70
710193ee44  add x8,x8,x9, LSL #0x3
710193ee48  ldr x8,[x8, #0x8]
710193ee4c  cbz x8,0x710193ec70
710193ee50  mov w9,#0x1c8
710193ee54  madd x8,x20,x9,x8
710193ee58  ldrh w0,[x8, #0x8]
710193ee5c  bl 0x7102512ab0
710193ee60  b 0x710193ec70
710193ee64  ldrb w9,[x22, #0x382]
710193ee68  mov w3,wzr
710193ee6c  cmp w9,#0x3
710193ee70  b.hi 0x710193ed0c
710193ee74  add x8,x8,x10, LSL #0x3
710193ee78  ldr x8,[x8, #0x8]
710193ee7c  cbz x8,0x710193ed0c
710193ee80  mov w10,#0x1c8
710193ee84  madd x8,x9,x10,x8
710193ee88  ldrh w0,[x8, #0x8]
710193ee8c  bl 0x7102512ab0
710193ee90  mov w3,w0
710193ee94  b 0x710193ed0c
710193ee98  cmp w20,#0x3
710193ee9c  b.hi 0x710193edf8
710193eea0  add x9,x22,x8, LSL #0x3
710193eea4  ldr x9,[x9, #0x8]
710193eea8  cbz x9,0x710193edf8
710193eeac  add w21,w20,w8, LSL #0x2
710193eeb0  and w8,w21,#0xff
710193eeb4  cmp w8,#0x38
710193eeb8  b.cs 0x710193ef28
710193eebc  mov w8,#0x1c8
710193eec0  madd x8,x20,x8,x9
710193eec4  ldrh w0,[x8, #0x8]
710193eec8  bl 0x7102512ab0
710193eecc  cmp w24,w0
710193eed0  b.cc 0x710193edf8
710193eed4  csel w8,w24,w0,hi
710193eed8  sub w8,w8,w0
710193eedc  str w8,[x23, #0x24]
710193eee0  add x8,x22,w21, UXTB  #0x3
710193eee4  ldr x8,[x8, #0xe0]
710193eee8  cbz x8,0x710193edf8
710193eeec  ldr x9,[x8]
710193eef0  orr w10,wzr,#0x3
710193eef4  strb w10,[x9, #0x20]
710193eef8  ldr x23,[x8]
710193eefc  add x20,x22,#0x2b8
710193ef00  mov w21,#0xd0
710193ef04  mov x2,x21
710193ef08  add x0,x23,#0x28
710193ef0c  mov x1,x20
710193ef10  bl 0x71039c00e0
710193ef14  add x0,x23,#0xf8
710193ef18  mov x1,x20
710193ef1c  mov x2,x21
710193ef20  bl 0x71039c00e0
710193ef24  b 0x710193edf8
710193ef28  bl 0x71039c2650
