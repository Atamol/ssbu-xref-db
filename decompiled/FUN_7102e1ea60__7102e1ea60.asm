// addr:      7102e1ea60
// offset:    0x2e1ea60
// name:      FUN_7102e1ea60
// mangled:   
// size:      8772

7102e1ea60  sub sp,sp,#0x150
7102e1ea64  str d8,[sp, #0xe0]
7102e1ea68  stp x28,x27,[sp, #0xf0]
7102e1ea6c  stp x26,x25,[sp, #0x100]
7102e1ea70  stp x24,x23,[sp, #0x110]
7102e1ea74  stp x22,x21,[sp, #0x120]
7102e1ea78  stp x20,x19,[sp, #0x130]
7102e1ea7c  stp x29,x30,[sp, #0x140]
7102e1ea80  add x29,sp,#0x140
7102e1ea84  ldr x8,[x0, #0x8]
7102e1ea88  ldr x9,[x8, #0x310]
7102e1ea8c  mov x23,#0x87d1
7102e1ea90  movk x23,#0x87ac, LSL #16
7102e1ea94  movk x23,#0x15, LSL #32
7102e1ea98  mov x19,x0
7102e1ea9c  ldp x8,x9,[x9, #0xd0]
7102e1eaa0  cmp x8,x9
7102e1eaa4  b.eq 0x7102e1ead0
7102e1eaa8  ldr w10,[x8, #0x8]
7102e1eaac  cmp w10,#0x1
7102e1eab0  b.hi 0x7102e1eac4
7102e1eab4  ldr x10,[x8]
7102e1eab8  ldr x11,[x10, #0x68]
7102e1eabc  cmp x11,x23
7102e1eac0  b.eq 0x7102e1ed94
7102e1eac4  add x8,x8,#0x10
7102e1eac8  cmp x9,x8
7102e1eacc  b.ne 0x7102e1eaa8
7102e1ead0  mov x20,x19
7102e1ead4  str xzr,[x20, #0x50]!
7102e1ead8  ldr x8,[x20]
7102e1eadc  cbz x8,0x7102e1eaec
7102e1eae0  ldrb w9,[x8, #0x118]
7102e1eae4  orr w9,w9,#0x1
7102e1eae8  strb w9,[x8, #0x118]
7102e1eaec  ldr x8,[x19, #0x8]
7102e1eaf0  ldr x9,[x8, #0x310]
7102e1eaf4  ldp x8,x9,[x9, #0xd0]
7102e1eaf8  cmp x8,x9
7102e1eafc  b.eq 0x7102e1eb34
7102e1eb00  mov x10,#0x8564
7102e1eb04  movk x10,#0xfba, LSL #16
7102e1eb08  movk x10,#0x23, LSL #32
7102e1eb0c  ldr w11,[x8, #0x8]
7102e1eb10  cmp w11,#0x1
7102e1eb14  b.hi 0x7102e1eb28
7102e1eb18  ldr x11,[x8]
7102e1eb1c  ldr x12,[x11, #0x68]
7102e1eb20  cmp x12,x10
7102e1eb24  b.eq 0x7102e1edb8
7102e1eb28  add x8,x8,#0x10
7102e1eb2c  cmp x9,x8
7102e1eb30  b.ne 0x7102e1eb0c
7102e1eb34  mov x20,x19
7102e1eb38  str xzr,[x20, #0x58]!
7102e1eb3c  ldr x8,[x20]
7102e1eb40  cbz x8,0x7102e1eb50
7102e1eb44  ldrb w9,[x8, #0x118]
7102e1eb48  orr w9,w9,#0x1
7102e1eb4c  strb w9,[x8, #0x118]
7102e1eb50  ldr x8,[x19, #0x8]
7102e1eb54  ldr x9,[x8, #0x310]
7102e1eb58  ldp x8,x9,[x9, #0xd0]
7102e1eb5c  cmp x8,x9
7102e1eb60  b.eq 0x7102e1eb98
7102e1eb64  mov x10,#0x34b4
7102e1eb68  movk x10,#0xec0a, LSL #16
7102e1eb6c  movk x10,#0x18, LSL #32
7102e1eb70  ldr w11,[x8, #0x8]
7102e1eb74  cmp w11,#0x1
7102e1eb78  b.hi 0x7102e1eb8c
7102e1eb7c  ldr x11,[x8]
7102e1eb80  ldr x12,[x11, #0x68]
7102e1eb84  cmp x12,x10
7102e1eb88  b.eq 0x7102e1eddc
7102e1eb8c  add x8,x8,#0x10
7102e1eb90  cmp x9,x8
7102e1eb94  b.ne 0x7102e1eb70
7102e1eb98  mov x20,x19
7102e1eb9c  str xzr,[x20, #0x60]!
7102e1eba0  ldr x8,[x20]
7102e1eba4  cbz x8,0x7102e1ebb4
7102e1eba8  ldrb w9,[x8, #0x118]
7102e1ebac  orr w9,w9,#0x1
7102e1ebb0  strb w9,[x8, #0x118]
7102e1ebb4  ldr x8,[x19, #0x8]
7102e1ebb8  ldr x9,[x8, #0x310]
7102e1ebbc  ldp x8,x9,[x9, #0xd0]
7102e1ebc0  cmp x8,x9
7102e1ebc4  b.eq 0x7102e1ebfc
7102e1ebc8  mov x10,#0x4e52
7102e1ebcc  movk x10,#0x17cc, LSL #16
7102e1ebd0  movk x10,#0x1a, LSL #32
7102e1ebd4  ldr w11,[x8, #0x8]
7102e1ebd8  cmp w11,#0x1
7102e1ebdc  b.hi 0x7102e1ebf0
7102e1ebe0  ldr x11,[x8]
7102e1ebe4  ldr x12,[x11, #0x68]
7102e1ebe8  cmp x12,x10
7102e1ebec  b.eq 0x7102e1ee00
7102e1ebf0  add x8,x8,#0x10
7102e1ebf4  cmp x9,x8
7102e1ebf8  b.ne 0x7102e1ebd4
7102e1ebfc  mov x20,x19
7102e1ec00  str xzr,[x20, #0x68]!
7102e1ec04  ldr x8,[x20]
7102e1ec08  cbz x8,0x7102e1ec18
7102e1ec0c  ldrb w9,[x8, #0x118]
7102e1ec10  orr w9,w9,#0x1
7102e1ec14  strb w9,[x8, #0x118]
7102e1ec18  ldr x8,[x19, #0x8]
7102e1ec1c  ldr x9,[x8, #0x310]
7102e1ec20  ldp x8,x9,[x9, #0xd0]
7102e1ec24  cmp x8,x9
7102e1ec28  b.eq 0x7102e1ec60
7102e1ec2c  mov x10,#0xaa3b
7102e1ec30  movk x10,#0x59b1, LSL #16
7102e1ec34  movk x10,#0x20, LSL #32
7102e1ec38  ldr w11,[x8, #0x8]
7102e1ec3c  cmp w11,#0x1
7102e1ec40  b.hi 0x7102e1ec54
7102e1ec44  ldr x11,[x8]
7102e1ec48  ldr x12,[x11, #0x68]
7102e1ec4c  cmp x12,x10
7102e1ec50  b.eq 0x7102e1ee24
7102e1ec54  add x8,x8,#0x10
7102e1ec58  cmp x9,x8
7102e1ec5c  b.ne 0x7102e1ec38
7102e1ec60  mov x24,x19
7102e1ec64  str xzr,[x24, #0x70]!
7102e1ec68  ldr x8,[x24]
7102e1ec6c  cbz x8,0x7102e1ec7c
7102e1ec70  ldrb w9,[x8, #0x118]
7102e1ec74  orr w9,w9,#0x1
7102e1ec78  strb w9,[x8, #0x118]
7102e1ec7c  ldr x8,[x19, #0x8]
7102e1ec80  ldr x9,[x8, #0x310]
7102e1ec84  ldp x8,x9,[x9, #0xd0]
7102e1ec88  cmp x8,x9
7102e1ec8c  b.eq 0x7102e1ecc4
7102e1ec90  mov x10,#0x91f3
7102e1ec94  movk x10,#0x2b65, LSL #16
7102e1ec98  movk x10,#0x21, LSL #32
7102e1ec9c  ldr w11,[x8, #0x8]
7102e1eca0  cmp w11,#0x1
7102e1eca4  b.hi 0x7102e1ecb8
7102e1eca8  ldr x11,[x8]
7102e1ecac  ldr x12,[x11, #0x68]
7102e1ecb0  cmp x12,x10
7102e1ecb4  b.eq 0x7102e1ee48
7102e1ecb8  add x8,x8,#0x10
7102e1ecbc  cmp x9,x8
7102e1ecc0  b.ne 0x7102e1ec9c
7102e1ecc4  mov x20,x19
7102e1ecc8  str xzr,[x20, #0x78]!
7102e1eccc  ldr x8,[x20]
7102e1ecd0  cbz x8,0x7102e1ece0
7102e1ecd4  ldrb w9,[x8, #0x118]
7102e1ecd8  orr w9,w9,#0x1
7102e1ecdc  strb w9,[x8, #0x118]
7102e1ece0  ldr x8,[x19, #0x8]
7102e1ece4  ldr x9,[x8, #0x310]
7102e1ece8  ldp x8,x9,[x9, #0xd0]
7102e1ecec  cmp x8,x9
7102e1ecf0  b.eq 0x7102e1ed28
7102e1ecf4  mov x10,#0x1bc5
7102e1ecf8  movk x10,#0x37d1, LSL #16
7102e1ecfc  movk x10,#0x1e, LSL #32
7102e1ed00  ldr w11,[x8, #0x8]
7102e1ed04  cmp w11,#0x1
7102e1ed08  b.hi 0x7102e1ed1c
7102e1ed0c  ldr x11,[x8]
7102e1ed10  ldr x12,[x11, #0x68]
7102e1ed14  cmp x12,x10
7102e1ed18  b.eq 0x7102e1ee6c
7102e1ed1c  add x8,x8,#0x10
7102e1ed20  cmp x9,x8
7102e1ed24  b.ne 0x7102e1ed00
7102e1ed28  mov x21,x19
7102e1ed2c  str xzr,[x21, #0x80]!
7102e1ed30  ldr x8,[x21]
7102e1ed34  str x20,[sp, #0x40]
7102e1ed38  cbz x8,0x7102e1ed48
7102e1ed3c  ldrb w9,[x8, #0x118]
7102e1ed40  orr w9,w9,#0x1
7102e1ed44  strb w9,[x8, #0x118]
7102e1ed48  ldr x8,[x19, #0x8]
7102e1ed4c  ldr x9,[x8, #0x310]
7102e1ed50  ldp x8,x9,[x9, #0xd0]
7102e1ed54  cmp x8,x9
7102e1ed58  b.eq 0x7102e1eea4
7102e1ed5c  mov x10,#0xff40
7102e1ed60  movk x10,#0x7bc9, LSL #16
7102e1ed64  movk x10,#0x17, LSL #32
7102e1ed68  ldr w11,[x8, #0x8]
7102e1ed6c  cmp w11,#0x1
7102e1ed70  b.hi 0x7102e1ed84
7102e1ed74  ldr x20,[x8]
7102e1ed78  ldr x11,[x20, #0x68]
7102e1ed7c  cmp x11,x10
7102e1ed80  b.eq 0x7102e1ee88
7102e1ed84  add x8,x8,#0x10
7102e1ed88  cmp x9,x8
7102e1ed8c  b.ne 0x7102e1ed68
7102e1ed90  b 0x7102e1eea4
7102e1ed94  mov x20,x19
7102e1ed98  str x10,[x20, #0x50]!
7102e1ed9c  cbz x10,0x7102e1ead8
7102e1eda0  add x0,x10,#0x108
7102e1eda4  strb wzr,[x10, #0x110]
7102e1eda8  bl 0x71025e9d50
7102e1edac  ldr x8,[x20]
7102e1edb0  cbnz x8,0x7102e1eae0
7102e1edb4  b 0x7102e1eaec
7102e1edb8  mov x20,x19
7102e1edbc  str x11,[x20, #0x58]!
7102e1edc0  cbz x11,0x7102e1eb3c
7102e1edc4  add x0,x11,#0x108
7102e1edc8  strb wzr,[x11, #0x110]
7102e1edcc  bl 0x71025e9d50
7102e1edd0  ldr x8,[x20]
7102e1edd4  cbnz x8,0x7102e1eb44
7102e1edd8  b 0x7102e1eb50
7102e1eddc  mov x20,x19
7102e1ede0  str x11,[x20, #0x60]!
7102e1ede4  cbz x11,0x7102e1eba0
7102e1ede8  add x0,x11,#0x108
7102e1edec  strb wzr,[x11, #0x110]
7102e1edf0  bl 0x71025e9d50
7102e1edf4  ldr x8,[x20]
7102e1edf8  cbnz x8,0x7102e1eba8
7102e1edfc  b 0x7102e1ebb4
7102e1ee00  mov x20,x19
7102e1ee04  str x11,[x20, #0x68]!
7102e1ee08  cbz x11,0x7102e1ec04
7102e1ee0c  add x0,x11,#0x108
7102e1ee10  strb wzr,[x11, #0x110]
7102e1ee14  bl 0x71025e9d50
7102e1ee18  ldr x8,[x20]
7102e1ee1c  cbnz x8,0x7102e1ec0c
7102e1ee20  b 0x7102e1ec18
7102e1ee24  mov x24,x19
7102e1ee28  str x11,[x24, #0x70]!
7102e1ee2c  cbz x11,0x7102e1ec68
7102e1ee30  add x0,x11,#0x108
7102e1ee34  strb wzr,[x11, #0x110]
7102e1ee38  bl 0x71025e9d50
7102e1ee3c  ldr x8,[x24]
7102e1ee40  cbnz x8,0x7102e1ec70
7102e1ee44  b 0x7102e1ec7c
7102e1ee48  mov x20,x19
7102e1ee4c  str x11,[x20, #0x78]!
7102e1ee50  cbz x11,0x7102e1eccc
7102e1ee54  add x0,x11,#0x108
7102e1ee58  strb wzr,[x11, #0x110]
7102e1ee5c  bl 0x71025e9d50
7102e1ee60  ldr x8,[x20]
7102e1ee64  cbnz x8,0x7102e1ecd4
7102e1ee68  b 0x7102e1ece0
7102e1ee6c  mov x21,x19
7102e1ee70  str x11,[x21, #0x80]!
7102e1ee74  cbz x11,0x7102e1ed30
7102e1ee78  add x0,x11,#0x108
7102e1ee7c  strb wzr,[x11, #0x110]
7102e1ee80  bl 0x71025e9d50
7102e1ee84  b 0x7102e1ed30
7102e1ee88  cbz x20,0x7102e1eea4
7102e1ee8c  add x0,x20,#0x108
7102e1ee90  strb wzr,[x20, #0x110]
7102e1ee94  bl 0x71025e9d50
7102e1ee98  ldrb w8,[x20, #0x118]
7102e1ee9c  orr w8,w8,#0x1
7102e1eea0  strb w8,[x20, #0x118]
7102e1eea4  mov w0,#0x10
7102e1eea8  mov w1,#0x10
7102e1eeac  str x21,[sp, #0x30]
7102e1eeb0  bl 0x710392e290
7102e1eeb4  mov x20,x0
7102e1eeb8  cbnz x0,0x7102e1ef04
7102e1eebc  adrp x8,0x7105332000
7102e1eec0  ldr x0,[x8, #0xf00]
7102e1eec4  cbz x0,0x7102e1ef00
7102e1eec8  mov w8,#0x10
7102e1eecc  str wzr,[sp, #0x50]
7102e1eed0  add x1,sp,#0x50
7102e1eed4  str x8,[sp, #0x90]
7102e1eed8  ldr x8,[x0]
7102e1eedc  ldr x8,[x8, #0x30]
7102e1eee0  add x2,sp,#0x90
7102e1eee4  blr x8
7102e1eee8  tbz w0,#0x0,0x7102e1ef00
7102e1eeec  mov w0,#0x10
7102e1eef0  mov w1,#0x10
7102e1eef4  bl 0x710392e290
7102e1eef8  mov x20,x0
7102e1eefc  cbnz x0,0x7102e1ef04
7102e1ef00  mov x20,xzr
7102e1ef04  ldr x21,[x19, #0x8]
7102e1ef08  adrp x8,0x710513f000
7102e1ef0c  add x8,x8,#0x810
7102e1ef10  mov w0,#0x10
7102e1ef14  mov w1,#0x20
7102e1ef18  str x8,[x20]
7102e1ef1c  bl 0x710392e290
7102e1ef20  cbnz x0,0x7102e1ef68
7102e1ef24  adrp x8,0x7105332000
7102e1ef28  ldr x0,[x8, #0xf00]
7102e1ef2c  cbz x0,0x7102e1ef64
7102e1ef30  mov w8,#0x20
7102e1ef34  str wzr,[sp, #0x50]
7102e1ef38  add x1,sp,#0x50
7102e1ef3c  str x8,[sp, #0x90]
7102e1ef40  ldr x8,[x0]
7102e1ef44  ldr x8,[x8, #0x30]
7102e1ef48  add x2,sp,#0x90
7102e1ef4c  blr x8
7102e1ef50  tbz w0,#0x0,0x7102e1ef64
7102e1ef54  mov w0,#0x10
7102e1ef58  mov w1,#0x20
7102e1ef5c  bl 0x710392e290
7102e1ef60  cbnz x0,0x7102e1ef68
7102e1ef64  mov x0,xzr
7102e1ef68  stp xzr,xzr,[x0, #0x10]
7102e1ef6c  stp x21,xzr,[x0]
7102e1ef70  str x0,[x20, #0x8]
7102e1ef74  ldr x0,[x19, #0x310]
7102e1ef78  str x20,[x19, #0x310]
7102e1ef7c  cbz x0,0x7102e1ef90
7102e1ef80  ldr x8,[x0]
7102e1ef84  ldr x8,[x8, #0x8]
7102e1ef88  blr x8
7102e1ef8c  ldr x20,[x19, #0x310]
7102e1ef90  ldr x0,[x20, #0x8]
7102e1ef94  adrp x1,0x710438a000
7102e1ef98  add x1,x1,#0xfa4
7102e1ef9c  bl 0x7102dfe700
7102e1efa0  ldr x8,[x19, #0x310]
7102e1efa4  ldr x0,[x8, #0x8]
7102e1efa8  adrp x1,0x710428f000
7102e1efac  add x1,x1,#0xb8d
7102e1efb0  bl 0x7102dfe700
7102e1efb4  ldr x8,[x19, #0x310]
7102e1efb8  ldr x8,[x8, #0x8]
7102e1efbc  cbz x8,0x7102e1f000
7102e1efc0  ldp x20,x21,[x8, #0x8]
7102e1efc4  cmp x20,x21
7102e1efc8  b.eq 0x7102e1f000
7102e1efcc  ldr x8,[x20]
7102e1efd0  cbz x8,0x7102e1eff4
7102e1efd4  add x0,x8,#0x108
7102e1efd8  strb wzr,[x8, #0x110]
7102e1efdc  bl 0x71025e9d50
7102e1efe0  ldr x8,[x20]
7102e1efe4  cbz x8,0x7102e1eff4
7102e1efe8  ldrb w9,[x8, #0x118]
7102e1efec  orr w9,w9,#0x1
7102e1eff0  strb w9,[x8, #0x118]
7102e1eff4  add x20,x20,#0x8
7102e1eff8  cmp x21,x20
7102e1effc  b.ne 0x7102e1efcc
7102e1f000  mov w0,#0x10
7102e1f004  mov w1,#0x10
7102e1f008  bl 0x710392e290
7102e1f00c  mov x20,x0
7102e1f010  cbnz x0,0x7102e1f05c
7102e1f014  adrp x8,0x7105332000
7102e1f018  ldr x0,[x8, #0xf00]
7102e1f01c  cbz x0,0x7102e1f058
7102e1f020  mov w8,#0x10
7102e1f024  str wzr,[sp, #0x50]
7102e1f028  add x1,sp,#0x50
7102e1f02c  str x8,[sp, #0x90]
7102e1f030  ldr x8,[x0]
7102e1f034  ldr x8,[x8, #0x30]
7102e1f038  add x2,sp,#0x90
7102e1f03c  blr x8
7102e1f040  tbz w0,#0x0,0x7102e1f058
7102e1f044  mov w0,#0x10
7102e1f048  mov w1,#0x10
7102e1f04c  bl 0x710392e290
7102e1f050  mov x20,x0
7102e1f054  cbnz x0,0x7102e1f05c
7102e1f058  mov x20,xzr
7102e1f05c  ldr x1,[x19, #0x8]
7102e1f060  ldr x2,[x19, #0x18]
7102e1f064  adrp x3,0x710437a000
7102e1f068  add x3,x3,#0xa71
7102e1f06c  mov w4,#0x1
7102e1f070  mov x0,x20
7102e1f074  bl 0x7102e1d840
7102e1f078  ldr x0,[x19, #0x318]
7102e1f07c  str x20,[x19, #0x318]
7102e1f080  cbz x0,0x7102e1f094
7102e1f084  ldr x8,[x0]
7102e1f088  ldr x8,[x8, #0x8]
7102e1f08c  blr x8
7102e1f090  ldr x20,[x19, #0x318]
7102e1f094  ldr x20,[x20, #0x8]
7102e1f098  ldr x8,[x20]
7102e1f09c  cbz x8,0x7102e1f0c0
7102e1f0a0  add x0,x8,#0x108
7102e1f0a4  strb wzr,[x8, #0x110]
7102e1f0a8  bl 0x71025e9d50
7102e1f0ac  ldr x8,[x20]
7102e1f0b0  cbz x8,0x7102e1f0c0
7102e1f0b4  ldrb w9,[x8, #0x118]
7102e1f0b8  orr w9,w9,#0x1
7102e1f0bc  strb w9,[x8, #0x118]
7102e1f0c0  ldr x8,[x20, #0x8]
7102e1f0c4  cbz x8,0x7102e1f0dc
7102e1f0c8  ldp x0,x1,[x8]
7102e1f0cc  mov w2,#0x1
7102e1f0d0  mov w21,#0x1
7102e1f0d4  bl 0x71025f4d80
7102e1f0d8  strb w21,[x20, #0x10]
7102e1f0dc  ldr x22,[x19, #0x18]
7102e1f0e0  ldr w8,[x22, #0x900]
7102e1f0e4  str w8,[x19, #0x2b8]
7102e1f0e8  ldr w8,[x22, #0x914]
7102e1f0ec  str w8,[x19, #0x2bc]
7102e1f0f0  ldr w8,[x22, #0x918]
7102e1f0f4  str w8,[x19, #0x2c0]
7102e1f0f8  ldr w8,[x22, #0x91c]
7102e1f0fc  str w8,[x19, #0x2c4]
7102e1f100  ldr w8,[x22, #0x904]
7102e1f104  str w8,[x19, #0x2c8]
7102e1f108  ldr w8,[x22, #0x908]
7102e1f10c  str w8,[x19, #0x2cc]
7102e1f110  ldr w8,[x22, #0x90c]
7102e1f114  str w8,[x19, #0x2d0]
7102e1f118  ldr w8,[x22, #0x910]
7102e1f11c  mov w1,#0x110
7102e1f120  mov w0,#0x10
7102e1f124  add x20,x19,#0x2b8
7102e1f128  str w8,[x19, #0x2d4]
7102e1f12c  bl 0x710392e290
7102e1f130  mov x21,x0
7102e1f134  cbnz x0,0x7102e1f180
7102e1f138  adrp x8,0x7105332000
7102e1f13c  ldr x0,[x8, #0xf00]
7102e1f140  cbz x0,0x7102e1f17c
7102e1f144  mov w8,#0x110
7102e1f148  str wzr,[sp, #0x50]
7102e1f14c  add x1,sp,#0x50
7102e1f150  str x8,[sp, #0x90]
7102e1f154  ldr x8,[x0]
7102e1f158  ldr x8,[x8, #0x30]
7102e1f15c  add x2,sp,#0x90
7102e1f160  blr x8
7102e1f164  tbz w0,#0x0,0x7102e1f17c
7102e1f168  mov w1,#0x110
7102e1f16c  mov w0,#0x10
7102e1f170  bl 0x710392e290
7102e1f174  mov x21,x0
7102e1f178  cbnz x0,0x7102e1f180
7102e1f17c  mov x21,xzr
7102e1f180  ldr s0,[x22, #0x924]
7102e1f184  ldr x1,[x19, #0x8]
7102e1f188  adrp x3,0x710428f000
7102e1f18c  add x3,x3,#0xba8
7102e1f190  ldrb w4,[x22, #0x920]
7102e1f194  mov x0,x21
7102e1f198  mov x2,x20
7102e1f19c  bl 0x7102e28740
7102e1f1a0  ldr x0,[x19, #0x2d8]
7102e1f1a4  str x21,[x19, #0x2d8]
7102e1f1a8  cbz x0,0x7102e1f1bc
7102e1f1ac  ldr x8,[x0]
7102e1f1b0  ldr x8,[x8, #0x8]
7102e1f1b4  blr x8
7102e1f1b8  ldr x21,[x19, #0x2d8]
7102e1f1bc  ldr x8,[x19, #0x18]
7102e1f1c0  ldr x9,[x8, #0x9a8]
7102e1f1c4  ldr s0,[x9, #0xc]
7102e1f1c8  ldr x9,[x8, #0x748]
7102e1f1cc  add x1,x9,#0x24
7102e1f1d0  ldr x9,[x8, #0x6e8]
7102e1f1d4  add x2,x9,#0x30
7102e1f1d8  ldr x9,[x8, #0x948]
7102e1f1dc  mov w4,#0x19
7102e1f1e0  ldp s1,s2,[x9]
7102e1f1e4  ldr x9,[x8, #0x960]
7102e1f1e8  ldr x8,[x8, #0xa08]
7102e1f1ec  ldp s3,s4,[x9]
7102e1f1f0  ldp s5,s6,[x8, #0x18]
7102e1f1f4  orr w3,wzr,#0x18
7102e1f1f8  mov x0,x21
7102e1f1fc  bl 0x7102e12e40
7102e1f200  ldr x0,[x19, #0x2d8]
7102e1f204  ldr x8,[x0]
7102e1f208  ldr x8,[x8, #0x18]
7102e1f20c  mov w1,wzr
7102e1f210  blr x8
7102e1f214  ldr x8,[x19, #0x2d8]
7102e1f218  ldr x8,[x8, #0x10]
7102e1f21c  cbz x8,0x7102e1f22c
7102e1f220  ldrb w9,[x8, #0x118]
7102e1f224  orr w9,w9,#0x1
7102e1f228  strb w9,[x8, #0x118]
7102e1f22c  ldr x8,[x19, #0x18]
7102e1f230  ldr w9,[x8, #0x928]
7102e1f234  str w9,[x19, #0x2e0]
7102e1f238  ldr w9,[x8, #0x93c]
7102e1f23c  str w9,[x19, #0x2e4]
7102e1f240  ldr w9,[x8, #0x940]
7102e1f244  str w9,[x19, #0x2e8]
7102e1f248  ldr w9,[x8, #0x944]
7102e1f24c  str w9,[x19, #0x2ec]
7102e1f250  ldr w9,[x8, #0x92c]
7102e1f254  str w9,[x19, #0x2f0]
7102e1f258  ldr w9,[x8, #0x930]
7102e1f25c  str w9,[x19, #0x2f4]
7102e1f260  ldr w9,[x8, #0x934]
7102e1f264  str w9,[x19, #0x2f8]
7102e1f268  ldr w9,[x8, #0x938]
7102e1f26c  str w9,[x19, #0x2fc]
7102e1f270  ldr x8,[x8, #0x6e8]
7102e1f274  mov w1,#0x98
7102e1f278  mov w0,#0x10
7102e1f27c  add x20,x19,#0x2e0
7102e1f280  add x21,x8,#0x40
7102e1f284  bl 0x710392e290
7102e1f288  mov x22,x0
7102e1f28c  cbnz x0,0x7102e1f2d8
7102e1f290  adrp x8,0x7105332000
7102e1f294  ldr x0,[x8, #0xf00]
7102e1f298  cbz x0,0x7102e1f2d4
7102e1f29c  mov w8,#0x98
7102e1f2a0  str wzr,[sp, #0x50]
7102e1f2a4  add x1,sp,#0x50
7102e1f2a8  str x8,[sp, #0x90]
7102e1f2ac  ldr x8,[x0]
7102e1f2b0  ldr x8,[x8, #0x30]
7102e1f2b4  add x2,sp,#0x90
7102e1f2b8  blr x8
7102e1f2bc  tbz w0,#0x0,0x7102e1f2d4
7102e1f2c0  mov w1,#0x98
7102e1f2c4  mov w0,#0x10
7102e1f2c8  bl 0x710392e290
7102e1f2cc  mov x22,x0
7102e1f2d0  cbnz x0,0x7102e1f2d8
7102e1f2d4  mov x22,xzr
7102e1f2d8  ldr x1,[x19, #0x8]
7102e1f2dc  adrp x4,0x71043ff000
7102e1f2e0  add x4,x4,#0x717
7102e1f2e4  mov x0,x22
7102e1f2e8  mov x2,x20
7102e1f2ec  mov x3,x21
7102e1f2f0  bl 0x7102e27910
7102e1f2f4  ldr x0,[x19, #0x300]
7102e1f2f8  str x22,[x19, #0x300]
7102e1f2fc  cbz x0,0x7102e1f30c
7102e1f300  ldr x8,[x0]
7102e1f304  ldr x8,[x8, #0x8]
7102e1f308  blr x8
7102e1f30c  mov w0,#0x10
7102e1f310  orr w1,wzr,#0x38
7102e1f314  bl 0x710392e290
7102e1f318  cbnz x0,0x7102e1f360
7102e1f31c  adrp x8,0x7105332000
7102e1f320  ldr x0,[x8, #0xf00]
7102e1f324  cbz x0,0x7102e1f35c
7102e1f328  orr w8,wzr,#0x38
7102e1f32c  str wzr,[sp, #0x50]
7102e1f330  add x1,sp,#0x50
7102e1f334  str x8,[sp, #0x90]
7102e1f338  ldr x8,[x0]
7102e1f33c  ldr x8,[x8, #0x30]
7102e1f340  add x2,sp,#0x90
7102e1f344  blr x8
7102e1f348  tbz w0,#0x0,0x7102e1f35c
7102e1f34c  mov w0,#0x10
7102e1f350  orr w1,wzr,#0x38
7102e1f354  bl 0x710392e290
7102e1f358  cbnz x0,0x7102e1f360
7102e1f35c  mov x0,xzr
7102e1f360  ldp x8,x10,[x19, #0x8]
7102e1f364  ldr x9,[x19, #0x18]
7102e1f368  adrp x11,0x710513f000
7102e1f36c  add x11,x11,#0xa70
7102e1f370  str xzr,[x0, #0x20]
7102e1f374  stp x10,x9,[x0, #0x10]
7102e1f378  stp x11,x8,[x0]
7102e1f37c  stp xzr,xzr,[x0, #0x28]
7102e1f380  ldr x8,[x19, #0x308]
7102e1f384  str x0,[x19, #0x308]
7102e1f388  cbz x8,0x7102e1f3a4
7102e1f38c  ldr x9,[x8]
7102e1f390  ldr x9,[x9, #0x8]
7102e1f394  mov x0,x8
7102e1f398  blr x9
7102e1f39c  ldr x0,[x19, #0x308]
7102e1f3a0  ldr x9,[x19, #0x18]
7102e1f3a4  ldr x8,[x9, #0x9a8]
7102e1f3a8  ldr s0,[x8]
7102e1f3ac  ldr x8,[x9, #0x948]
7102e1f3b0  ldp s1,s2,[x8]
7102e1f3b4  ldr x8,[x9, #0x960]
7102e1f3b8  ldp s3,s4,[x8]
7102e1f3bc  ldr x8,[x9, #0xa08]
7102e1f3c0  ldp s5,s6,[x8]
7102e1f3c4  ldr x2,[x9, #0x748]
7102e1f3c8  ldr x3,[x9, #0x6e8]
7102e1f3cc  mov w20,#0x19
7102e1f3d0  adrp x1,0x710438a000
7102e1f3d4  add x1,x1,#0xfbd
7102e1f3d8  orr w4,wzr,#0x18
7102e1f3dc  mov w5,w20
7102e1f3e0  bl 0x7102e14260
7102e1f3e4  ldr x8,[x19, #0x18]
7102e1f3e8  ldr x9,[x8, #0x9a8]
7102e1f3ec  ldr s0,[x9, #0x4]
7102e1f3f0  ldr x9,[x8, #0x748]
7102e1f3f4  add x2,x9,#0xc
7102e1f3f8  ldr x9,[x8, #0x6e8]
7102e1f3fc  add x3,x9,#0x10
7102e1f400  ldr x9,[x8, #0x948]
7102e1f404  ldr x0,[x19, #0x308]
7102e1f408  ldp s1,s2,[x9]
7102e1f40c  ldr x9,[x8, #0x960]
7102e1f410  ldr x8,[x8, #0xa08]
7102e1f414  ldp s3,s4,[x9]
7102e1f418  ldp s5,s6,[x8, #0x8]
7102e1f41c  adrp x1,0x71043de000
7102e1f420  add x1,x1,#0x3f1
7102e1f424  orr w4,wzr,#0x18
7102e1f428  mov w5,w20
7102e1f42c  bl 0x7102e14260
7102e1f430  ldr x8,[x19, #0x18]
7102e1f434  ldr x9,[x8, #0x9a8]
7102e1f438  ldr s0,[x9, #0x8]
7102e1f43c  ldr x9,[x8, #0x748]
7102e1f440  add x2,x9,#0x18
7102e1f444  ldr x9,[x8, #0x6e8]
7102e1f448  add x3,x9,#0x20
7102e1f44c  ldr x9,[x8, #0x948]
7102e1f450  ldr x0,[x19, #0x308]
7102e1f454  ldp s1,s2,[x9]
7102e1f458  ldr x9,[x8, #0x960]
7102e1f45c  ldr x8,[x8, #0xa08]
7102e1f460  ldp s3,s4,[x9]
7102e1f464  ldp s5,s6,[x8, #0x10]
7102e1f468  adrp x1,0x7104452000
7102e1f46c  add x1,x1,#0xbf0
7102e1f470  orr w4,wzr,#0x18
7102e1f474  mov w5,w20
7102e1f478  bl 0x7102e14260
7102e1f47c  ldr x8,[x19, #0x308]
7102e1f480  ldp x21,x22,[x8, #0x20]
7102e1f484  cmp x21,x22
7102e1f488  b.eq 0x7102e1f584
7102e1f48c  ldp x0,x20,[x21]
7102e1f490  cbz x20,0x7102e1f4e8
7102e1f494  add x25,x20,#0x8
7102e1f498  ldxr x8,[x25]
7102e1f49c  add x8,x8,#0x1
7102e1f4a0  stxr w9,x8,[x25]
7102e1f4a4  cbnz w9,0x7102e1f498
7102e1f4a8  ldr x8,[x0]
7102e1f4ac  ldr x8,[x8, #0x18]
7102e1f4b0  mov w1,wzr
7102e1f4b4  blr x8
7102e1f4b8  ldaxr x8,[x25]
7102e1f4bc  sub x9,x8,#0x1
7102e1f4c0  stlxr w10,x9,[x25]
7102e1f4c4  cbnz w10,0x7102e1f4b8
7102e1f4c8  cbnz x8,0x7102e1f4f8
7102e1f4cc  ldr x8,[x20]
7102e1f4d0  ldr x8,[x8, #0x10]
7102e1f4d4  mov x0,x20
7102e1f4d8  blr x8
7102e1f4dc  mov x0,x20
7102e1f4e0  bl 0x71039c2670
7102e1f4e4  b 0x7102e1f4f8
7102e1f4e8  ldr x8,[x0]
7102e1f4ec  ldr x8,[x8, #0x18]
7102e1f4f0  mov w1,wzr
7102e1f4f4  blr x8
7102e1f4f8  add x21,x21,#0x10
7102e1f4fc  cmp x21,x22
7102e1f500  b.ne 0x7102e1f48c
7102e1f504  ldr x8,[x19, #0x308]
7102e1f508  ldp x21,x22,[x8, #0x20]
7102e1f50c  cmp x21,x22
7102e1f510  b.eq 0x7102e1f584
7102e1f514  ldp x8,x20,[x21]
7102e1f518  cbz x20,0x7102e1f530
7102e1f51c  add x9,x20,#0x8
7102e1f520  ldxr x10,[x9]
7102e1f524  add x10,x10,#0x1
7102e1f528  stxr w11,x10,[x9]
7102e1f52c  cbnz w11,0x7102e1f520
7102e1f530  ldr x8,[x8, #0x10]
7102e1f534  cbz x8,0x7102e1f544
7102e1f538  ldrb w9,[x8, #0x118]
7102e1f53c  orr w9,w9,#0x1
7102e1f540  strb w9,[x8, #0x118]
7102e1f544  cbz x20,0x7102e1f578
7102e1f548  add x8,x20,#0x8
7102e1f54c  ldaxr x9,[x8]
7102e1f550  sub x10,x9,#0x1
7102e1f554  stlxr w11,x10,[x8]
7102e1f558  cbnz w11,0x7102e1f54c
7102e1f55c  cbnz x9,0x7102e1f578
7102e1f560  ldr x8,[x20]
7102e1f564  ldr x8,[x8, #0x10]
7102e1f568  mov x0,x20
7102e1f56c  blr x8
7102e1f570  mov x0,x20
7102e1f574  bl 0x71039c2670
7102e1f578  add x21,x21,#0x10
7102e1f57c  cmp x21,x22
7102e1f580  b.ne 0x7102e1f514
7102e1f584  ldr x8,[x19, #0x8]
7102e1f588  ldr x9,[x8, #0x300]
7102e1f58c  ldr x10,[x9, #0x18]
7102e1f590  ldp x9,x10,[x10]
7102e1f594  cmp x9,x10
7102e1f598  b.eq 0x7102e1f5c4
7102e1f59c  mov x11,#0xfbad
7102e1f5a0  movk x11,#0x9eb4, LSL #16
7102e1f5a4  movk x11,#0x17, LSL #32
7102e1f5a8  ldr x12,[x9], #0x8
7102e1f5ac  ldr x13,[x12, #0xa0]
7102e1f5b0  and x13,x13,#0xffffffffff
7102e1f5b4  cmp x13,x11
7102e1f5b8  b.eq 0x7102e1f5cc
7102e1f5bc  cmp x10,x9
7102e1f5c0  b.ne 0x7102e1f5a8
7102e1f5c4  mov x9,xzr
7102e1f5c8  b 0x7102e1f5e0
7102e1f5cc  ldr x9,[x12, #0x110]
7102e1f5d0  cbz x9,0x7102e1f5e0
7102e1f5d4  ldp x10,x11,[x9]
7102e1f5d8  cmp x10,x11
7102e1f5dc  csel x9,xzr,x9,eq
7102e1f5e0  str x9,[x19, #0x1d0]
7102e1f5e4  ldr x9,[x8, #0x300]
7102e1f5e8  ldr x10,[x9, #0x18]
7102e1f5ec  ldp x9,x10,[x10]
7102e1f5f0  cmp x9,x10
7102e1f5f4  b.eq 0x7102e1f620
7102e1f5f8  mov x11,#0xc6ce
7102e1f5fc  movk x11,#0x64bb, LSL #16
7102e1f600  movk x11,#0x17, LSL #32
7102e1f604  ldr x12,[x9], #0x8
7102e1f608  ldr x13,[x12, #0xa0]
7102e1f60c  and x13,x13,#0xffffffffff
7102e1f610  cmp x13,x11
7102e1f614  b.eq 0x7102e1f628
7102e1f618  cmp x10,x9
7102e1f61c  b.ne 0x7102e1f604
7102e1f620  mov x9,xzr
7102e1f624  b 0x7102e1f63c
7102e1f628  ldr x9,[x12, #0x110]
7102e1f62c  cbz x9,0x7102e1f63c
7102e1f630  ldp x10,x11,[x9]
7102e1f634  cmp x10,x11
7102e1f638  csel x9,xzr,x9,eq
7102e1f63c  str x9,[x19, #0x1d8]
7102e1f640  ldr x9,[x8, #0x300]
7102e1f644  ldr x10,[x9, #0x18]
7102e1f648  ldp x9,x10,[x10]
7102e1f64c  cmp x9,x10
7102e1f650  b.eq 0x7102e1f67c
7102e1f654  mov x11,#0xa86e
7102e1f658  movk x11,#0xb599, LSL #16
7102e1f65c  movk x11,#0x17, LSL #32
7102e1f660  ldr x12,[x9], #0x8
7102e1f664  ldr x13,[x12, #0xa0]
7102e1f668  and x13,x13,#0xffffffffff
7102e1f66c  cmp x13,x11
7102e1f670  b.eq 0x7102e1f684
7102e1f674  cmp x10,x9
7102e1f678  b.ne 0x7102e1f660
7102e1f67c  mov x9,xzr
7102e1f680  b 0x7102e1f698
7102e1f684  ldr x9,[x12, #0x110]
7102e1f688  cbz x9,0x7102e1f698
7102e1f68c  ldp x10,x11,[x9]
7102e1f690  cmp x10,x11
7102e1f694  csel x9,xzr,x9,eq
7102e1f698  str x9,[x19, #0x1e0]
7102e1f69c  ldr x9,[x8, #0x300]
7102e1f6a0  ldr x10,[x9, #0x18]
7102e1f6a4  ldp x9,x10,[x10]
7102e1f6a8  cmp x9,x10
7102e1f6ac  b.eq 0x7102e1f6d8
7102e1f6b0  mov x11,#0x950d
7102e1f6b4  movk x11,#0x4f96, LSL #16
7102e1f6b8  movk x11,#0x17, LSL #32
7102e1f6bc  ldr x12,[x9], #0x8
7102e1f6c0  ldr x13,[x12, #0xa0]
7102e1f6c4  and x13,x13,#0xffffffffff
7102e1f6c8  cmp x13,x11
7102e1f6cc  b.eq 0x7102e1f6e0
7102e1f6d0  cmp x10,x9
7102e1f6d4  b.ne 0x7102e1f6bc
7102e1f6d8  mov x9,xzr
7102e1f6dc  b 0x7102e1f6f4
7102e1f6e0  ldr x9,[x12, #0x110]
7102e1f6e4  cbz x9,0x7102e1f6f4
7102e1f6e8  ldp x10,x11,[x9]
7102e1f6ec  cmp x10,x11
7102e1f6f0  csel x9,xzr,x9,eq
7102e1f6f4  str x9,[x19, #0x1e8]
7102e1f6f8  ldr x8,[x8, #0x300]
7102e1f6fc  ldr x9,[x8, #0x18]
7102e1f700  ldp x8,x9,[x9]
7102e1f704  cmp x8,x9
7102e1f708  b.eq 0x7102e1f728
7102e1f70c  ldr x10,[x8], #0x8
7102e1f710  ldr x11,[x10, #0xa0]
7102e1f714  and x11,x11,#0xffffffffff
7102e1f718  cmp x11,x23
7102e1f71c  b.eq 0x7102e1f730
7102e1f720  cmp x9,x8
7102e1f724  b.ne 0x7102e1f70c
7102e1f728  mov x8,xzr
7102e1f72c  b 0x7102e1f744
7102e1f730  ldr x8,[x10, #0x110]
7102e1f734  cbz x8,0x7102e1f744
7102e1f738  ldp x9,x10,[x8]
7102e1f73c  cmp x9,x10
7102e1f740  csel x8,xzr,x8,eq
7102e1f744  str x8,[x19, #0x1f0]
7102e1f748  ldp x0,x1,[x8]
7102e1f74c  mov w2,#0x1
7102e1f750  bl 0x71025f4d80
7102e1f754  adrp x8,0x7104468000
7102e1f758  adrp x9,0x710446a000
7102e1f75c  adrp x10,0x7104465000
7102e1f760  ldr q18,[x8, #0xca0]
7102e1f764  adrp x8,0x7104466000
7102e1f768  ldr q17,[x9, #0x360]
7102e1f76c  ldr q19,[x10, #0x6b0]
7102e1f770  ldr q0,[x8, #0xa70]
7102e1f774  ldr x21,[x19, #0x60]
7102e1f778  ldr x20,[x19, #0x1d0]
7102e1f77c  stp q18,q17,[sp, #0x50]
7102e1f780  stp q19,q0,[sp, #0x70]
7102e1f784  cbz x21,0x7102e1f824
7102e1f788  ldr x0,[x21, #0x90]
7102e1f78c  add x1,sp,#0x50
7102e1f790  ldr x8,[x0]
7102e1f794  str q19,[sp]
7102e1f798  ldr x8,[x8, #0x148]
7102e1f79c  stp q18,q17,[sp, #0x10]
7102e1f7a0  blr x8
7102e1f7a4  ldp q19,q18,[sp]
7102e1f7a8  ldr q17,[sp, #0x20]
7102e1f7ac  ldr x21,[x21, #0xd8]
7102e1f7b0  cbz x21,0x7102e1f824
7102e1f7b4  ldr x8,[sp, #0x68]
7102e1f7b8  str x8,[sp, #0xa8]
7102e1f7bc  ldr x8,[sp, #0x60]
7102e1f7c0  str x8,[sp, #0xa0]
7102e1f7c4  ldr x8,[sp, #0x58]
7102e1f7c8  str x8,[sp, #0x98]
7102e1f7cc  ldr x8,[sp, #0x50]
7102e1f7d0  str x8,[sp, #0x90]
7102e1f7d4  ldr x8,[sp, #0x88]
7102e1f7d8  str x8,[sp, #0xc8]
7102e1f7dc  ldr x8,[sp, #0x80]
7102e1f7e0  str x8,[sp, #0xc0]
7102e1f7e4  ldr x8,[sp, #0x78]
7102e1f7e8  str x8,[sp, #0xb8]
7102e1f7ec  ldr x8,[sp, #0x70]
7102e1f7f0  str x8,[sp, #0xb0]
7102e1f7f4  ldr x8,[x21, #0x8]
7102e1f7f8  ldrb w9,[x8, #0xa8]
7102e1f7fc  cbz w9,0x7102e1f81c
7102e1f800  ldr x0,[x8, #0x48]
7102e1f804  ldr x8,[x0]
7102e1f808  ldr x8,[x8, #0x20]
7102e1f80c  add x1,sp,#0x90
7102e1f810  blr x8
7102e1f814  ldp q19,q18,[sp]
7102e1f818  ldr q17,[sp, #0x20]
7102e1f81c  mov w8,#0x1
7102e1f820  strb w8,[x21, #0x20]
7102e1f824  cbz x20,0x7102e1f918
7102e1f828  ldp x8,x9,[x20]
7102e1f82c  cmp x8,x9
7102e1f830  b.eq 0x7102e1f918
7102e1f834  ldr q0,[sp, #0x80]
7102e1f838  movi d2,#0x0
7102e1f83c  adrp x11,0x7104472000
7102e1f840  ldr s3,[x11, #0x970]
7102e1f844  fmov s4,0xbf800000
7102e1f848  mov w10,#0x1
7102e1f84c  mov v1.16B,v0.16B
7102e1f850  mov v1.D[0x1],v2.D[0x0]
7102e1f854  dup s2,v0.S[0x1]
7102e1f858  fmov s5,0x3f800000
7102e1f85c  ldr x11,[x8]
7102e1f860  ldr x13,[x11, #0x8]
7102e1f864  ldrb w14,[x13, #0xe7]
7102e1f868  ldrb w13,[x13, #0xe8]
7102e1f86c  ldrb w12,[x11, #0x128]
7102e1f870  cmp w12,#0x0
7102e1f874  orr w13,w13,w14
7102e1f878  and w12,w13,#0xff
7102e1f87c  ccmp w12,#0x0,#0x0,ne
7102e1f880  b.eq 0x7102e1f88c
7102e1f884  strb w10,[x11, #0x129]
7102e1f888  b 0x7102e1f8b0
7102e1f88c  ldr q6,[x11, #0x10]
7102e1f890  fabd s7,s6,s0
7102e1f894  fcmp s7,s3
7102e1f898  b.gt 0x7102e1f8ac
7102e1f89c  dup s6,v6.S[0x1]
7102e1f8a0  fabd s6,s6,s2
7102e1f8a4  fcmp s6,s3
7102e1f8a8  b.le 0x7102e1f8b4
7102e1f8ac  strb w10,[x11, #0x12a]
7102e1f8b0  str q1,[x11, #0x10]
7102e1f8b4  ldr s6,[x11, #0x30]
7102e1f8b8  fabs s6,s6
7102e1f8bc  fcmp s6,s3
7102e1f8c0  b.mi 0x7102e1f8cc
7102e1f8c4  str wzr,[x11, #0x30]
7102e1f8c8  strb w10,[x11, #0x129]
7102e1f8cc  ldr q6,[x11, #0x50]
7102e1f8d0  fadd s7,s6,s4
7102e1f8d4  fabs s7,s7
7102e1f8d8  fcmp s7,s3
7102e1f8dc  b.mi 0x7102e1f8ec
7102e1f8e0  mov v6.S[0x0],v5.S[0x0]
7102e1f8e4  strb w10,[x11, #0x129]
7102e1f8e8  str q6,[x11, #0x50]
7102e1f8ec  dup s7,v6.S[0x1]
7102e1f8f0  fadd s7,s7,s4
7102e1f8f4  fabs s7,s7
7102e1f8f8  fcmp s7,s3
7102e1f8fc  b.mi 0x7102e1f90c
7102e1f900  mov v6.S[0x1],v5.S[0x0]
7102e1f904  strb w10,[x11, #0x129]
7102e1f908  str q6,[x11, #0x50]
7102e1f90c  add x8,x8,#0x8
7102e1f910  cmp x9,x8
7102e1f914  b.ne 0x7102e1f85c
7102e1f918  ldr x9,[x19, #0x1e8]
7102e1f91c  ldp x8,x9,[x9]
7102e1f920  movi d16,#0x0
7102e1f924  cmp x8,x9
7102e1f928  b.eq 0x7102e1fa0c
7102e1f92c  ldr q0,[sp, #0x80]
7102e1f930  mov v1.16B,v0.16B
7102e1f934  adrp x11,0x7104472000
7102e1f938  dup s2,v0.S[0x1]
7102e1f93c  ldr s3,[x11, #0x970]
7102e1f940  mov v1.D[0x1],v16.D[0x0]
7102e1f944  fmov s4,0xbf800000
7102e1f948  fmov s5,0x3f800000
7102e1f94c  mov w10,#0x1
7102e1f950  ldr x11,[x8]
7102e1f954  ldr x13,[x11, #0x8]
7102e1f958  ldrb w14,[x13, #0xe7]
7102e1f95c  ldrb w13,[x13, #0xe8]
7102e1f960  ldrb w12,[x11, #0x128]
7102e1f964  cmp w12,#0x0
7102e1f968  orr w13,w13,w14
7102e1f96c  and w12,w13,#0xff
7102e1f970  ccmp w12,#0x0,#0x0,ne
7102e1f974  b.eq 0x7102e1f980
7102e1f978  strb w10,[x11, #0x129]
7102e1f97c  b 0x7102e1f9a4
7102e1f980  ldr q6,[x11, #0x10]
7102e1f984  fabd s7,s6,s0
7102e1f988  fcmp s7,s3
7102e1f98c  b.gt 0x7102e1f9a0
7102e1f990  dup s6,v6.S[0x1]
7102e1f994  fabd s6,s6,s2
7102e1f998  fcmp s6,s3
7102e1f99c  b.le 0x7102e1f9a8
7102e1f9a0  strb w10,[x11, #0x12a]
7102e1f9a4  str q1,[x11, #0x10]
7102e1f9a8  ldr s6,[x11, #0x30]
7102e1f9ac  fabs s6,s6
7102e1f9b0  fcmp s6,s3
7102e1f9b4  b.mi 0x7102e1f9c0
7102e1f9b8  str wzr,[x11, #0x30]
7102e1f9bc  strb w10,[x11, #0x129]
7102e1f9c0  ldr q6,[x11, #0x50]
7102e1f9c4  fadd s7,s6,s4
7102e1f9c8  fabs s7,s7
7102e1f9cc  fcmp s7,s3
7102e1f9d0  b.mi 0x7102e1f9e0
7102e1f9d4  mov v6.S[0x0],v5.S[0x0]
7102e1f9d8  strb w10,[x11, #0x129]
7102e1f9dc  str q6,[x11, #0x50]
7102e1f9e0  dup s7,v6.S[0x1]
7102e1f9e4  fadd s7,s7,s4
7102e1f9e8  fabs s7,s7
7102e1f9ec  fcmp s7,s3
7102e1f9f0  b.mi 0x7102e1fa00
7102e1f9f4  mov v6.S[0x1],v5.S[0x0]
7102e1f9f8  strb w10,[x11, #0x129]
7102e1f9fc  str q6,[x11, #0x50]
7102e1fa00  add x8,x8,#0x8
7102e1fa04  cmp x9,x8
7102e1fa08  b.ne 0x7102e1f950
7102e1fa0c  adrp x8,0x7104469000
7102e1fa10  ldr q0,[x8, #0xa20]
7102e1fa14  ldr x21,[x19, #0x68]
7102e1fa18  ldr x20,[x19, #0x1d8]
7102e1fa1c  stp q18,q17,[sp, #0x50]
7102e1fa20  stp q19,q0,[sp, #0x70]
7102e1fa24  cbz x21,0x7102e1fab4
7102e1fa28  ldr x0,[x21, #0x90]
7102e1fa2c  ldr x8,[x0]
7102e1fa30  ldr x8,[x8, #0x148]
7102e1fa34  add x1,sp,#0x50
7102e1fa38  blr x8
7102e1fa3c  ldr x21,[x21, #0xd8]
7102e1fa40  movi d16,#0x0
7102e1fa44  cbz x21,0x7102e1fab4
7102e1fa48  ldr x8,[sp, #0x68]
7102e1fa4c  str x8,[sp, #0xa8]
7102e1fa50  ldr x8,[sp, #0x60]
7102e1fa54  str x8,[sp, #0xa0]
7102e1fa58  ldr x8,[sp, #0x58]
7102e1fa5c  str x8,[sp, #0x98]
7102e1fa60  ldr x8,[sp, #0x50]
7102e1fa64  str x8,[sp, #0x90]
7102e1fa68  ldr x8,[sp, #0x88]
7102e1fa6c  str x8,[sp, #0xc8]
7102e1fa70  ldr x8,[sp, #0x80]
7102e1fa74  str x8,[sp, #0xc0]
7102e1fa78  ldr x8,[sp, #0x78]
7102e1fa7c  str x8,[sp, #0xb8]
7102e1fa80  ldr x8,[sp, #0x70]
7102e1fa84  str x8,[sp, #0xb0]
7102e1fa88  ldr x8,[x21, #0x8]
7102e1fa8c  ldrb w9,[x8, #0xa8]
7102e1fa90  cbz w9,0x7102e1faac
7102e1fa94  ldr x0,[x8, #0x48]
7102e1fa98  ldr x8,[x0]
7102e1fa9c  ldr x8,[x8, #0x20]
7102e1faa0  add x1,sp,#0x90
7102e1faa4  blr x8
7102e1faa8  movi d16,#0x0
7102e1faac  mov w8,#0x1
7102e1fab0  strb w8,[x21, #0x20]
7102e1fab4  cbz x20,0x7102e1fba4
7102e1fab8  ldp x8,x9,[x20]
7102e1fabc  cmp x8,x9
7102e1fac0  b.eq 0x7102e1fba4
7102e1fac4  ldr q0,[sp, #0x80]
7102e1fac8  mov v1.16B,v0.16B
7102e1facc  adrp x11,0x7104472000
7102e1fad0  dup s2,v0.S[0x1]
7102e1fad4  ldr s3,[x11, #0x970]
7102e1fad8  mov v1.D[0x1],v16.D[0x0]
7102e1fadc  fmov s4,0xbf800000
7102e1fae0  fmov s5,0x3f800000
7102e1fae4  mov w10,#0x1
7102e1fae8  ldr x11,[x8]
7102e1faec  ldr x13,[x11, #0x8]
7102e1faf0  ldrb w14,[x13, #0xe7]
7102e1faf4  ldrb w13,[x13, #0xe8]
7102e1faf8  ldrb w12,[x11, #0x128]
7102e1fafc  cmp w12,#0x0
7102e1fb00  orr w13,w13,w14
7102e1fb04  and w12,w13,#0xff
7102e1fb08  ccmp w12,#0x0,#0x0,ne
7102e1fb0c  b.eq 0x7102e1fb18
7102e1fb10  strb w10,[x11, #0x129]
7102e1fb14  b 0x7102e1fb3c
7102e1fb18  ldr q6,[x11, #0x10]
7102e1fb1c  fabd s7,s6,s0
7102e1fb20  fcmp s7,s3
7102e1fb24  b.gt 0x7102e1fb38
7102e1fb28  dup s6,v6.S[0x1]
7102e1fb2c  fabd s6,s6,s2
7102e1fb30  fcmp s6,s3
7102e1fb34  b.le 0x7102e1fb40
7102e1fb38  strb w10,[x11, #0x12a]
7102e1fb3c  str q1,[x11, #0x10]
7102e1fb40  ldr s6,[x11, #0x30]
7102e1fb44  fabs s6,s6
7102e1fb48  fcmp s6,s3
7102e1fb4c  b.mi 0x7102e1fb58
7102e1fb50  str wzr,[x11, #0x30]
7102e1fb54  strb w10,[x11, #0x129]
7102e1fb58  ldr q6,[x11, #0x50]
7102e1fb5c  fadd s7,s6,s4
7102e1fb60  fabs s7,s7
7102e1fb64  fcmp s7,s3
7102e1fb68  b.mi 0x7102e1fb78
7102e1fb6c  mov v6.S[0x0],v5.S[0x0]
7102e1fb70  strb w10,[x11, #0x129]
7102e1fb74  str q6,[x11, #0x50]
7102e1fb78  dup s7,v6.S[0x1]
7102e1fb7c  fadd s7,s7,s4
7102e1fb80  fabs s7,s7
7102e1fb84  fcmp s7,s3
7102e1fb88  b.mi 0x7102e1fb98
7102e1fb8c  mov v6.S[0x1],v5.S[0x0]
7102e1fb90  strb w10,[x11, #0x129]
7102e1fb94  str q6,[x11, #0x50]
7102e1fb98  add x8,x8,#0x8
7102e1fb9c  cmp x9,x8
7102e1fba0  b.ne 0x7102e1fae8
7102e1fba4  ldr x9,[x19, #0x1e0]
7102e1fba8  ldp x8,x9,[x9]
7102e1fbac  cmp x8,x9
7102e1fbb0  b.eq 0x7102e1fc94
7102e1fbb4  ldr q0,[sp, #0x80]
7102e1fbb8  mov v1.16B,v0.16B
7102e1fbbc  adrp x11,0x7104472000
7102e1fbc0  dup s2,v0.S[0x1]
7102e1fbc4  ldr s3,[x11, #0x970]
7102e1fbc8  mov v1.D[0x1],v16.D[0x0]
7102e1fbcc  fmov s4,0xbf800000
7102e1fbd0  fmov s5,0x3f800000
7102e1fbd4  mov w10,#0x1
7102e1fbd8  ldr x11,[x8]
7102e1fbdc  ldr x13,[x11, #0x8]
7102e1fbe0  ldrb w14,[x13, #0xe7]
7102e1fbe4  ldrb w13,[x13, #0xe8]
7102e1fbe8  ldrb w12,[x11, #0x128]
7102e1fbec  cmp w12,#0x0
7102e1fbf0  orr w13,w13,w14
7102e1fbf4  and w12,w13,#0xff
7102e1fbf8  ccmp w12,#0x0,#0x0,ne
7102e1fbfc  b.eq 0x7102e1fc08
7102e1fc00  strb w10,[x11, #0x129]
7102e1fc04  b 0x7102e1fc2c
7102e1fc08  ldr q6,[x11, #0x10]
7102e1fc0c  fabd s7,s6,s0
7102e1fc10  fcmp s7,s3
7102e1fc14  b.gt 0x7102e1fc28
7102e1fc18  dup s6,v6.S[0x1]
7102e1fc1c  fabd s6,s6,s2
7102e1fc20  fcmp s6,s3
7102e1fc24  b.le 0x7102e1fc30
7102e1fc28  strb w10,[x11, #0x12a]
7102e1fc2c  str q1,[x11, #0x10]
7102e1fc30  ldr s6,[x11, #0x30]
7102e1fc34  fabs s6,s6
7102e1fc38  fcmp s6,s3
7102e1fc3c  b.mi 0x7102e1fc48
7102e1fc40  str wzr,[x11, #0x30]
7102e1fc44  strb w10,[x11, #0x129]
7102e1fc48  ldr q6,[x11, #0x50]
7102e1fc4c  fadd s7,s6,s4
7102e1fc50  fabs s7,s7
7102e1fc54  fcmp s7,s3
7102e1fc58  b.mi 0x7102e1fc68
7102e1fc5c  mov v6.S[0x0],v5.S[0x0]
7102e1fc60  strb w10,[x11, #0x129]
7102e1fc64  str q6,[x11, #0x50]
7102e1fc68  dup s7,v6.S[0x1]
7102e1fc6c  fadd s7,s7,s4
7102e1fc70  fabs s7,s7
7102e1fc74  fcmp s7,s3
7102e1fc78  b.mi 0x7102e1fc88
7102e1fc7c  mov v6.S[0x1],v5.S[0x0]
7102e1fc80  strb w10,[x11, #0x129]
7102e1fc84  str q6,[x11, #0x50]
7102e1fc88  add x8,x8,#0x8
7102e1fc8c  cmp x9,x8
7102e1fc90  b.ne 0x7102e1fbd8
7102e1fc94  mov w0,#0x10
7102e1fc98  mov w1,#0x10
7102e1fc9c  bl 0x710392e290
7102e1fca0  mov x20,x0
7102e1fca4  cbnz x0,0x7102e1fcf0
7102e1fca8  adrp x8,0x7105332000
7102e1fcac  ldr x0,[x8, #0xf00]
7102e1fcb0  cbz x0,0x7102e1fcec
7102e1fcb4  mov w8,#0x10
7102e1fcb8  str wzr,[sp, #0x50]
7102e1fcbc  add x1,sp,#0x50
7102e1fcc0  str x8,[sp, #0x90]
7102e1fcc4  ldr x8,[x0]
7102e1fcc8  ldr x8,[x8, #0x30]
7102e1fccc  add x2,sp,#0x90
7102e1fcd0  blr x8
7102e1fcd4  tbz w0,#0x0,0x7102e1fcec
7102e1fcd8  mov w0,#0x10
7102e1fcdc  mov w1,#0x10
7102e1fce0  bl 0x710392e290
7102e1fce4  mov x20,x0
7102e1fce8  cbnz x0,0x7102e1fcf0
7102e1fcec  mov x20,xzr
7102e1fcf0  ldr x21,[x19, #0x8]
7102e1fcf4  ldr x22,[x19, #0x18]
7102e1fcf8  adrp x8,0x710513f000
7102e1fcfc  add x8,x8,#0xe58
7102e1fd00  mov w1,#0x140
7102e1fd04  mov w0,#0x10
7102e1fd08  str x8,[x20]
7102e1fd0c  bl 0x710392e290
7102e1fd10  mov x23,x0
7102e1fd14  cbnz x0,0x7102e1fd60
7102e1fd18  adrp x8,0x7105332000
7102e1fd1c  ldr x0,[x8, #0xf00]
7102e1fd20  cbz x0,0x7102e1fd5c
7102e1fd24  mov w8,#0x140
7102e1fd28  str wzr,[sp, #0x50]
7102e1fd2c  add x1,sp,#0x50
7102e1fd30  str x8,[sp, #0x90]
7102e1fd34  ldr x8,[x0]
7102e1fd38  ldr x8,[x8, #0x30]
7102e1fd3c  add x2,sp,#0x90
7102e1fd40  blr x8
7102e1fd44  tbz w0,#0x0,0x7102e1fd5c
7102e1fd48  mov w1,#0x140
7102e1fd4c  mov w0,#0x10
7102e1fd50  bl 0x710392e290
7102e1fd54  mov x23,x0
7102e1fd58  cbnz x0,0x7102e1fd60
7102e1fd5c  mov x23,xzr
7102e1fd60  mov x0,x23
7102e1fd64  mov x1,x21
7102e1fd68  mov x2,x22
7102e1fd6c  mov w3,wzr
7102e1fd70  bl 0x7102e296f0
7102e1fd74  add x0,x23,#0xa0
7102e1fd78  mov w3,#0x1
7102e1fd7c  mov x1,x21
7102e1fd80  mov x2,x22
7102e1fd84  bl 0x7102e296f0
7102e1fd88  str x23,[x20, #0x8]
7102e1fd8c  ldr x0,[x19, #0x1f8]
7102e1fd90  str x20,[x19, #0x1f8]
7102e1fd94  cbz x0,0x7102e1fda4
7102e1fd98  ldr x8,[x0]
7102e1fd9c  ldr x8,[x8, #0x8]
7102e1fda0  blr x8
7102e1fda4  ldr x8,[x24]
7102e1fda8  cbz x8,0x7102e1fe0c
7102e1fdac  ldrb w9,[x8, #0xe0]
7102e1fdb0  cbz w9,0x7102e1fdc0
7102e1fdb4  ldr x9,[x8, #0xc8]
7102e1fdb8  cbz x9,0x7102e1fdc0
7102e1fdbc  strh wzr,[x9, #0x32]
7102e1fdc0  ldr x8,[x8, #0xd8]
7102e1fdc4  cbz x8,0x7102e1fdcc
7102e1fdc8  strb wzr,[x8, #0x22]
7102e1fdcc  ldr x8,[x24]
7102e1fdd0  cbz x8,0x7102e1fe0c
7102e1fdd4  ldr x9,[x19, #0x18]
7102e1fdd8  ldr w9,[x9, #0x140]
7102e1fddc  ldrb w10,[x8, #0xe0]
7102e1fde0  cbz w10,0x7102e1fdf0
7102e1fde4  ldr x10,[x8, #0xc8]
7102e1fde8  cbz x10,0x7102e1fdf0
7102e1fdec  str w9,[x10, #0x8]
7102e1fdf0  ldr x10,[x8, #0xd8]
7102e1fdf4  cbz x10,0x7102e1fdfc
7102e1fdf8  str w9,[x10, #0x24]
7102e1fdfc  ldrb w10,[x8, #0xe0]
7102e1fe00  cbz w10,0x7102e1fe0c
7102e1fe04  ldr x8,[x8, #0xb0]
7102e1fe08  str w9,[x8, #0x14]
7102e1fe0c  mov w0,#0x10
7102e1fe10  mov w1,#0x10
7102e1fe14  bl 0x710392e290
7102e1fe18  mov x20,x0
7102e1fe1c  cbnz x0,0x7102e1fe68
7102e1fe20  adrp x8,0x7105332000
7102e1fe24  ldr x0,[x8, #0xf00]
7102e1fe28  cbz x0,0x7102e1fe64
7102e1fe2c  mov w8,#0x10
7102e1fe30  str wzr,[sp, #0x50]
7102e1fe34  add x1,sp,#0x50
7102e1fe38  str x8,[sp, #0x90]
7102e1fe3c  ldr x8,[x0]
7102e1fe40  ldr x8,[x8, #0x30]
7102e1fe44  add x2,sp,#0x90
7102e1fe48  blr x8
7102e1fe4c  tbz w0,#0x0,0x7102e1fe64
7102e1fe50  mov w0,#0x10
7102e1fe54  mov w1,#0x10
7102e1fe58  bl 0x710392e290
7102e1fe5c  mov x20,x0
7102e1fe60  cbnz x0,0x7102e1fe68
7102e1fe64  mov x20,xzr
7102e1fe68  ldr x22,[x19, #0x8]
7102e1fe6c  ldr x27,[x19, #0x18]
7102e1fe70  adrp x8,0x710513f000
7102e1fe74  add x8,x8,#0xce8
7102e1fe78  mov w0,#0x10
7102e1fe7c  orr w1,wzr,#0x1e0
7102e1fe80  str x8,[x20]
7102e1fe84  bl 0x710392e290
7102e1fe88  mov x21,x0
7102e1fe8c  cbnz x0,0x7102e1fed8
7102e1fe90  adrp x8,0x7105332000
7102e1fe94  ldr x0,[x8, #0xf00]
7102e1fe98  cbz x0,0x7102e1fed4
7102e1fe9c  orr w8,wzr,#0x1e0
7102e1fea0  str wzr,[sp, #0x50]
7102e1fea4  add x1,sp,#0x50
7102e1fea8  str x8,[sp, #0x90]
7102e1feac  ldr x8,[x0]
7102e1feb0  ldr x8,[x8, #0x30]
7102e1feb4  add x2,sp,#0x90
7102e1feb8  blr x8
7102e1febc  tbz w0,#0x0,0x7102e1fed4
7102e1fec0  mov w0,#0x10
7102e1fec4  orr w1,wzr,#0x1e0
7102e1fec8  bl 0x710392e290
7102e1fecc  mov x21,x0
7102e1fed0  cbnz x0,0x7102e1fed8
7102e1fed4  mov x21,xzr
7102e1fed8  strb wzr,[x21, #0x54]
7102e1fedc  adrp x25,0x71052a8000
7102e1fee0  ldr x25,[x25, #0xa80]
7102e1fee4  mov x24,x21
7102e1fee8  stp x27,xzr,[x21]
7102e1feec  str wzr,[x24, #0x50]!
7102e1fef0  strb wzr,[x21, #0x60]
7102e1fef4  mov x28,x21
7102e1fef8  mov w8,#0x4
7102e1fefc  str xzr,[x21, #0x58]
7102e1ff00  mov w1,#0x48
7102e1ff04  mov w0,#0x10
7102e1ff08  str xzr,[x21, #0x70]
7102e1ff0c  str wzr,[x21, #0x78]
7102e1ff10  ldr q0,[x25]
7102e1ff14  str xzr,[x28, #0x20]!
7102e1ff18  sturh w8,[x28, #-0x10]
7102e1ff1c  str xzr,[x28, #0x8]
7102e1ff20  stp xzr,xzr,[x28, #0x20]
7102e1ff24  stp xzr,xzr,[x28, #0x10]
7102e1ff28  stp q0,q0,[x28, #0x60]
7102e1ff2c  ldr w8,[x27, #0x144]
7102e1ff30  str w8,[x21, #0x58]
7102e1ff34  mov w8,#0x1
7102e1ff38  str wzr,[x28, #0x3c]
7102e1ff3c  strb w8,[x21, #0x54]
7102e1ff40  strb w8,[x21, #0x60]
7102e1ff44  bl 0x710392e290
7102e1ff48  mov x23,x0
7102e1ff4c  cbnz x0,0x7102e1ff98
7102e1ff50  adrp x8,0x7105332000
7102e1ff54  ldr x0,[x8, #0xf00]
7102e1ff58  cbz x0,0x7102e1ff94
7102e1ff5c  mov w8,#0x48
7102e1ff60  str wzr,[sp, #0x50]
7102e1ff64  add x1,sp,#0x50
7102e1ff68  str x8,[sp, #0x90]
7102e1ff6c  ldr x8,[x0]
7102e1ff70  ldr x8,[x8, #0x30]
7102e1ff74  add x2,sp,#0x90
7102e1ff78  blr x8
7102e1ff7c  tbz w0,#0x0,0x7102e1ff94
7102e1ff80  mov w1,#0x48
7102e1ff84  mov w0,#0x10
7102e1ff88  bl 0x710392e290
7102e1ff8c  mov x23,x0
7102e1ff90  cbnz x0,0x7102e1ff98
7102e1ff94  mov x23,xzr
7102e1ff98  mov x26,#0x1
7102e1ff9c  mov w8,#0x20
7102e1ffa0  mov x9,#0x100000001
7102e1ffa4  movk x26,#0x10, LSL #32
7102e1ffa8  add x2,sp,#0x90
7102e1ffac  str x26,[sp, #0xa0]
7102e1ffb0  mov x0,x23
7102e1ffb4  mov x1,x22
7102e1ffb8  stp x8,x9,[sp, #0x90]
7102e1ffbc  bl 0x710313e6a0
7102e1ffc0  adrp x8,0x710513f000
7102e1ffc4  add x8,x8,#0xd08
7102e1ffc8  str x8,[x23]
7102e1ffcc  ldr x8,[x23, #0x38]
7102e1ffd0  cbz x8,0x7102e200e4
7102e1ffd4  ldr x0,[x8, #0x130]
7102e1ffd8  ldr x8,[x0]
7102e1ffdc  ldr x8,[x8, #0x1c8]
7102e1ffe0  blr x8
7102e1ffe4  mov w8,#0x1a06
7102e1ffe8  movk w8,#0x12, LSL #16
7102e1ffec  str wzr,[x0, #0x68]
7102e1fff0  str x8,[x0, #0x60]
7102e1fff4  mov x8,#0x1fca
7102e1fff8  movk x8,#0x1ed9, LSL #16
7102e1fffc  movk x8,#0x3, LSL #32
7102e20000  stp xzr,xzr,[x0, #0x78]
7102e20004  str x8,[x0, #0x70]
7102e20008  ldrh w8,[x21, #0x10]
7102e2000c  strh w8,[x0, #0x2c0]
7102e20010  ldr x8,[x28, #0x8]
7102e20014  str x8,[x0, #0x2d8]
7102e20018  ldr x8,[x28]
7102e2001c  str x8,[x0, #0x2d0]
7102e20020  ldr x8,[x21, #0x38]
7102e20024  str x8,[x0, #0x2e8]
7102e20028  ldr x8,[x21, #0x30]
7102e2002c  str x8,[x0, #0x2e0]
7102e20030  ldr x8,[x21, #0x48]
7102e20034  str x8,[x0, #0x2f8]
7102e20038  ldr x8,[x21, #0x40]
7102e2003c  str x8,[x0, #0x2f0]
7102e20040  ldr x9,[x24, #0x8]
7102e20044  ldrb w8,[x24, #0x10]
7102e20048  str x9,[x0, #0x308]
7102e2004c  ldr x9,[x24]
7102e20050  strb w8,[x0, #0x310]
7102e20054  str x9,[x0, #0x300]
7102e20058  ldrh w8,[x21, #0x10]
7102e2005c  strh w8,[x0, #0x268]
7102e20060  ldr w8,[x21, #0x58]
7102e20064  str w8,[x0, #0x26c]
7102e20068  ldr w8,[x21, #0x5c]
7102e2006c  str w8,[x0, #0x270]
7102e20070  ldrb w8,[x21, #0x60]
7102e20074  strb w8,[x0, #0x288]
7102e20078  ldr x8,[x23, #0x38]
7102e2007c  cbz x8,0x7102e200e4
7102e20080  ldr x0,[x8, #0x130]
7102e20084  ldr x8,[x0]
7102e20088  ldr x8,[x8, #0x1c8]
7102e2008c  blr x8
7102e20090  bl 0x7103148ab0
7102e20094  ldr x8,[x23, #0x38]
7102e20098  cbz x8,0x7102e200e4
7102e2009c  ldr x0,[x8, #0x130]
7102e200a0  ldr x8,[x0]
7102e200a4  ldr x8,[x8, #0x1c8]
7102e200a8  blr x8
7102e200ac  ldr x8,[x0]
7102e200b0  ldr x8,[x8, #0x108]
7102e200b4  mov w1,wzr
7102e200b8  blr x8
7102e200bc  ldr x8,[x23, #0x38]
7102e200c0  cbz x8,0x7102e200e4
7102e200c4  mov w24,w0
7102e200c8  ldr x0,[x8, #0x130]
7102e200cc  ldr x8,[x0]
7102e200d0  ldr x8,[x8, #0x1c8]
7102e200d4  blr x8
7102e200d8  ldrh w8,[x0, #0x2a0]
7102e200dc  cbz w8,0x7102e200e4
7102e200e0  str w24,[x0, #0x2a4]
7102e200e4  str x23,[x21, #0x8]
7102e200e8  ldrb w8,[x23, #0x40]
7102e200ec  cbz w8,0x7102e2013c
7102e200f0  ldr x24,[x23, #0x30]
7102e200f4  cbz x24,0x7102e2012c
7102e200f8  ldrb w8,[x24, #0x10]
7102e200fc  cbz w8,0x7102e2012c
7102e20100  ldrb w8,[x24, #0x50]
7102e20104  strb wzr,[x24, #0x10]
7102e20108  cbz w8,0x7102e2012c
7102e2010c  ldr x8,[x24]
7102e20110  ldr w0,[x8, #0x8]
7102e20114  bl 0x71003ac560
7102e20118  ldr x8,[x0]
7102e2011c  ldr x8,[x8, #0x48]
7102e20120  mov w1,wzr
7102e20124  blr x8
7102e20128  strb wzr,[x24, #0x50]
7102e2012c  ldr x8,[x23]
7102e20130  ldr x8,[x8, #0x30]
7102e20134  mov x0,x23
7102e20138  blr x8
7102e2013c  strb wzr,[x23, #0x40]
7102e20140  stp x27,xzr,[x21, #0xa0]
7102e20144  ldr q0,[x25]
7102e20148  mov w8,#0x4
7102e2014c  mov w1,#0x48
7102e20150  stp q0,q0,[x21, #0xb0]
7102e20154  strh wzr,[x21, #0xf4]
7102e20158  mov w0,#0x10
7102e2015c  str wzr,[x21, #0xf0]
7102e20160  str xzr,[x21, #0x100]
7102e20164  strh w8,[x21, #0xd0]
7102e20168  stp xzr,xzr,[x21, #0xe0]
7102e2016c  stp q0,q0,[x21, #0x110]
7102e20170  ldr w8,[x27, #0x144]
7102e20174  str w8,[x21, #0xf0]
7102e20178  mov w8,#0x101
7102e2017c  strh w8,[x21, #0xf4]
7102e20180  bl 0x710392e290
7102e20184  mov x23,x0
7102e20188  cbnz x0,0x7102e201d4
7102e2018c  adrp x8,0x7105332000
7102e20190  ldr x0,[x8, #0xf00]
7102e20194  cbz x0,0x7102e201d0
7102e20198  mov w8,#0x48
7102e2019c  str wzr,[sp, #0x50]
7102e201a0  add x1,sp,#0x50
7102e201a4  str x8,[sp, #0x90]
7102e201a8  ldr x8,[x0]
7102e201ac  ldr x8,[x8, #0x30]
7102e201b0  add x2,sp,#0x90
7102e201b4  blr x8
7102e201b8  tbz w0,#0x0,0x7102e201d0
7102e201bc  mov w1,#0x48
7102e201c0  mov w0,#0x10
7102e201c4  bl 0x710392e290
7102e201c8  mov x23,x0
7102e201cc  cbnz x0,0x7102e201d4
7102e201d0  mov x23,xzr
7102e201d4  mov w8,#0x20
7102e201d8  str x8,[sp, #0x90]
7102e201dc  mov x8,#0x100000001
7102e201e0  add x2,sp,#0x90
7102e201e4  mov x0,x23
7102e201e8  mov x1,x22
7102e201ec  stp x8,x26,[sp, #0x98]
7102e201f0  bl 0x710313e6a0
7102e201f4  adrp x8,0x710513f000
7102e201f8  add x8,x8,#0xd88
7102e201fc  str x8,[x23]
7102e20200  ldr x8,[x23, #0x38]
7102e20204  cbz x8,0x7102e20308
7102e20208  ldr x0,[x8, #0x130]
7102e2020c  ldr x8,[x0]
7102e20210  ldr x8,[x8, #0x1c8]
7102e20214  blr x8
7102e20218  ldp q1,q2,[x21, #0xb0]
7102e2021c  ldr q0,[x21, #0xe0]
7102e20220  str wzr,[x0, #0x68]
7102e20224  str d2,[x0, #0x80]
7102e20228  fadd s3,s1,s0
7102e2022c  dup s1,v1.S[0x1]
7102e20230  dup s0,v0.S[0x1]
7102e20234  fadd s0,s1,s0
7102e20238  mov w8,#0x1a00
7102e2023c  movk w8,#0x12, LSL #16
7102e20240  str x8,[x0, #0x60]
7102e20244  mov x8,#0x1fca
7102e20248  movk x8,#0x1ed9, LSL #16
7102e2024c  movk x8,#0x3, LSL #32
7102e20250  str x8,[x0, #0x70]
7102e20254  str s3,[x0, #0x78]
7102e20258  str s0,[x0, #0x7c]
7102e2025c  ldrh w8,[x21, #0xd0]
7102e20260  strh w8,[x0, #0x268]
7102e20264  ldr w8,[x21, #0xf0]
7102e20268  str w8,[x0, #0x26c]
7102e2026c  add x8,x0,#0x274
7102e20270  str xzr,[x8]
7102e20274  ldrb w8,[x21, #0xf4]
7102e20278  str wzr,[x0, #0x284]
7102e2027c  cmp w8,#0x0
7102e20280  adrp x8,0x7104472000
7102e20284  ldr s0,[x8, #0xfbc]
7102e20288  fmov s1,wzr
7102e2028c  fcsel s0,s0,s1,eq
7102e20290  str s0,[x0, #0x270]
7102e20294  ldrb w8,[x21, #0xf5]
7102e20298  strb w8,[x0, #0x288]
7102e2029c  ldr x8,[x23, #0x38]
7102e202a0  cbz x8,0x7102e20308
7102e202a4  ldr x0,[x8, #0x130]
7102e202a8  ldr x8,[x0]
7102e202ac  ldr x8,[x8, #0x1c8]
7102e202b0  blr x8
7102e202b4  bl 0x7103148ab0
7102e202b8  ldr x8,[x23, #0x38]
7102e202bc  cbz x8,0x7102e20308
7102e202c0  ldr x0,[x8, #0x130]
7102e202c4  ldr x8,[x0]
7102e202c8  ldr x8,[x8, #0x1c8]
7102e202cc  blr x8
7102e202d0  ldr x8,[x0]
7102e202d4  ldr x8,[x8, #0x108]
7102e202d8  mov w1,wzr
7102e202dc  blr x8
7102e202e0  ldr x8,[x23, #0x38]
7102e202e4  cbz x8,0x7102e20308
7102e202e8  mov w24,w0
7102e202ec  ldr x0,[x8, #0x130]
7102e202f0  ldr x8,[x0]
7102e202f4  ldr x8,[x8, #0x1c8]
7102e202f8  blr x8
7102e202fc  ldrh w8,[x0, #0x2a0]
7102e20300  cbz w8,0x7102e20308
7102e20304  str w24,[x0, #0x2a4]
7102e20308  str x23,[x21, #0xa8]
7102e2030c  ldrb w8,[x23, #0x40]
7102e20310  cbz w8,0x7102e20360
7102e20314  ldr x24,[x23, #0x30]
7102e20318  cbz x24,0x7102e20350
7102e2031c  ldrb w8,[x24, #0x10]
7102e20320  cbz w8,0x7102e20350
7102e20324  ldrb w8,[x24, #0x50]
7102e20328  strb wzr,[x24, #0x10]
7102e2032c  cbz w8,0x7102e20350
7102e20330  ldr x8,[x24]
7102e20334  ldr w0,[x8, #0x8]
7102e20338  bl 0x71003ac560
7102e2033c  ldr x8,[x0]
7102e20340  ldr x8,[x8, #0x48]
7102e20344  mov w1,wzr
7102e20348  blr x8
7102e2034c  strb wzr,[x24, #0x50]
7102e20350  ldr x8,[x23]
7102e20354  ldr x8,[x8, #0x30]
7102e20358  mov x0,x23
7102e2035c  blr x8
7102e20360  mov w8,#0x1
7102e20364  strb wzr,[x23, #0x40]
7102e20368  strb wzr,[x21, #0x184]
7102e2036c  stp x27,xzr,[x21, #0x130]
7102e20370  mov w9,#0x4
7102e20374  mov w1,#0x48
7102e20378  mov w0,#0x10
7102e2037c  str wzr,[x21, #0x180]
7102e20380  strb wzr,[x21, #0x190]
7102e20384  str xzr,[x21, #0x188]
7102e20388  str x8,[x21, #0x1a0]
7102e2038c  str wzr,[x21, #0x1a8]
7102e20390  ldr q0,[x25]
7102e20394  strh w9,[x21, #0x140]
7102e20398  stp xzr,xzr,[x21, #0x170]
7102e2039c  stp xzr,xzr,[x21, #0x160]
7102e203a0  stp xzr,xzr,[x21, #0x150]
7102e203a4  stp q0,q0,[x21, #0x1b0]
7102e203a8  ldr w9,[x27, #0x144]
7102e203ac  str w9,[x21, #0x188]
7102e203b0  str wzr,[x21, #0x18c]
7102e203b4  strb w8,[x21, #0x184]
7102e203b8  strb w8,[x21, #0x190]
7102e203bc  bl 0x710392e290
7102e203c0  mov x23,x0
7102e203c4  cbnz x0,0x7102e20410
7102e203c8  adrp x8,0x7105332000
7102e203cc  ldr x0,[x8, #0xf00]
7102e203d0  cbz x0,0x7102e2040c
7102e203d4  mov w8,#0x48
7102e203d8  str wzr,[sp, #0x50]
7102e203dc  add x1,sp,#0x50
7102e203e0  str x8,[sp, #0x90]
7102e203e4  ldr x8,[x0]
7102e203e8  ldr x8,[x8, #0x30]
7102e203ec  add x2,sp,#0x90
7102e203f0  blr x8
7102e203f4  tbz w0,#0x0,0x7102e2040c
7102e203f8  mov w1,#0x48
7102e203fc  mov w0,#0x10
7102e20400  bl 0x710392e290
7102e20404  mov x23,x0
7102e20408  cbnz x0,0x7102e20410
7102e2040c  mov x23,xzr
7102e20410  mov w8,#0x20
7102e20414  str x8,[sp, #0x90]
7102e20418  mov x8,#0x100000001
7102e2041c  add x2,sp,#0x90
7102e20420  mov x0,x23
7102e20424  mov x1,x22
7102e20428  stp x8,x26,[sp, #0x98]
7102e2042c  bl 0x710313e6a0
7102e20430  adrp x8,0x710513f000
7102e20434  add x8,x8,#0xd08
7102e20438  str x8,[x23]
7102e2043c  ldr x8,[x23, #0x38]
7102e20440  cbz x8,0x7102e2055c
7102e20444  ldr x0,[x8, #0x130]
7102e20448  ldr x8,[x0]
7102e2044c  ldr x8,[x8, #0x1c8]
7102e20450  add x22,x21,#0x180
7102e20454  add x24,x21,#0x150
7102e20458  blr x8
7102e2045c  mov w8,#0x1a06
7102e20460  movk w8,#0x12, LSL #16
7102e20464  str wzr,[x0, #0x68]
7102e20468  str x8,[x0, #0x60]
7102e2046c  mov x8,#0x1fca
7102e20470  movk x8,#0x1ed9, LSL #16
7102e20474  movk x8,#0x3, LSL #32
7102e20478  stp xzr,xzr,[x0, #0x78]
7102e2047c  str x8,[x0, #0x70]
7102e20480  ldrh w8,[x21, #0x140]
7102e20484  strh w8,[x0, #0x2c0]
7102e20488  ldr x8,[x24, #0x8]
7102e2048c  str x8,[x0, #0x2d8]
7102e20490  ldr x8,[x24]
7102e20494  str x8,[x0, #0x2d0]
7102e20498  ldr x8,[x21, #0x168]
7102e2049c  str x8,[x0, #0x2e8]
7102e204a0  ldr x8,[x21, #0x160]
7102e204a4  str x8,[x0, #0x2e0]
7102e204a8  ldr x8,[x21, #0x178]
7102e204ac  str x8,[x0, #0x2f8]
7102e204b0  ldr x8,[x21, #0x170]
7102e204b4  str x8,[x0, #0x2f0]
7102e204b8  ldr x9,[x22, #0x8]
7102e204bc  ldrb w8,[x22, #0x10]
7102e204c0  str x9,[x0, #0x308]
7102e204c4  ldr x9,[x22]
7102e204c8  strb w8,[x0, #0x310]
7102e204cc  str x9,[x0, #0x300]
7102e204d0  ldrh w8,[x21, #0x140]
7102e204d4  strh w8,[x0, #0x268]
7102e204d8  ldr w8,[x21, #0x188]
7102e204dc  str w8,[x0, #0x26c]
7102e204e0  ldr w8,[x21, #0x18c]
7102e204e4  str w8,[x0, #0x270]
7102e204e8  ldrb w8,[x21, #0x190]
7102e204ec  strb w8,[x0, #0x288]
7102e204f0  ldr x8,[x23, #0x38]
7102e204f4  cbz x8,0x7102e2055c
7102e204f8  ldr x0,[x8, #0x130]
7102e204fc  ldr x8,[x0]
7102e20500  ldr x8,[x8, #0x1c8]
7102e20504  blr x8
7102e20508  bl 0x7103148ab0
7102e2050c  ldr x8,[x23, #0x38]
7102e20510  cbz x8,0x7102e2055c
7102e20514  ldr x0,[x8, #0x130]
7102e20518  ldr x8,[x0]
7102e2051c  ldr x8,[x8, #0x1c8]
7102e20520  blr x8
7102e20524  ldr x8,[x0]
7102e20528  ldr x8,[x8, #0x108]
7102e2052c  mov w1,wzr
7102e20530  blr x8
7102e20534  ldr x8,[x23, #0x38]
7102e20538  cbz x8,0x7102e2055c
7102e2053c  mov w22,w0
7102e20540  ldr x0,[x8, #0x130]
7102e20544  ldr x8,[x0]
7102e20548  ldr x8,[x8, #0x1c8]
7102e2054c  blr x8
7102e20550  ldrh w8,[x0, #0x2a0]
7102e20554  cbz w8,0x7102e2055c
7102e20558  str w22,[x0, #0x2a4]
7102e2055c  str x23,[x21, #0x138]
7102e20560  ldrb w8,[x23, #0x40]
7102e20564  cbz w8,0x7102e205b4
7102e20568  ldr x22,[x23, #0x30]
7102e2056c  cbz x22,0x7102e205a4
7102e20570  ldrb w8,[x22, #0x10]
7102e20574  cbz w8,0x7102e205a4
7102e20578  ldrb w8,[x22, #0x50]
7102e2057c  strb wzr,[x22, #0x10]
7102e20580  cbz w8,0x7102e205a4
7102e20584  ldr x8,[x22]
7102e20588  ldr w0,[x8, #0x8]
7102e2058c  bl 0x71003ac560
7102e20590  ldr x8,[x0]
7102e20594  ldr x8,[x8, #0x48]
7102e20598  mov w1,wzr
7102e2059c  blr x8
7102e205a0  strb wzr,[x22, #0x50]
7102e205a4  ldr x8,[x23]
7102e205a8  ldr x8,[x8, #0x30]
7102e205ac  mov x0,x23
7102e205b0  blr x8
7102e205b4  mov w8,#0x1
7102e205b8  strb wzr,[x23, #0x40]
7102e205bc  strb w8,[x21, #0x1d0]
7102e205c0  mov w8,#0x8000
7102e205c4  movk w8,#0x43a2, LSL #16
7102e205c8  str w8,[x21, #0x1d4]
7102e205cc  str x21,[x20, #0x8]
7102e205d0  ldr x0,[x19, #0x200]
7102e205d4  str x20,[x19, #0x200]
7102e205d8  cbz x0,0x7102e205e8
7102e205dc  ldr x8,[x0]
7102e205e0  ldr x8,[x8, #0x8]
7102e205e4  blr x8
7102e205e8  ldr x8,[sp, #0x40]
7102e205ec  ldr x8,[x8]
7102e205f0  ldr x10,[sp, #0x30]
7102e205f4  cbz x8,0x7102e20618
7102e205f8  ldrb w9,[x8, #0xe0]
7102e205fc  cbz w9,0x7102e2060c
7102e20600  ldr x9,[x8, #0xc8]
7102e20604  cbz x9,0x7102e2060c
7102e20608  strh wzr,[x9, #0x32]
7102e2060c  ldr x8,[x8, #0xd8]
7102e20610  cbz x8,0x7102e20618
7102e20614  strb wzr,[x8, #0x22]
7102e20618  ldr x8,[x10]
7102e2061c  cbz x8,0x7102e20640
7102e20620  ldrb w9,[x8, #0xe0]
7102e20624  cbz w9,0x7102e20634
7102e20628  ldr x9,[x8, #0xc8]
7102e2062c  cbz x9,0x7102e20634
7102e20630  strh wzr,[x9, #0x32]
7102e20634  ldr x8,[x8, #0xd8]
7102e20638  cbz x8,0x7102e20640
7102e2063c  strb wzr,[x8, #0x22]
7102e20640  str xzr,[sp, #0x50]
7102e20644  ldr x8,[x19, #0x8]
7102e20648  ldr x9,[x8, #0x338]
7102e2064c  ldr x9,[x9]
7102e20650  ldr x0,[x9, #0x8]
7102e20654  cbz x0,0x7102e20670
7102e20658  add x1,sp,#0x50
7102e2065c  mov w2,wzr
7102e20660  bl 0x7102405040
7102e20664  ldr x8,[x19, #0x8]
7102e20668  add x8,x8,#0x338
7102e2066c  b 0x7102e20678
7102e20670  add x8,x8,#0x338
7102e20674  mov w0,#0xffffffff
7102e20678  str w0,[x19, #0x20c]
7102e2067c  ldr x9,[x8]
7102e20680  ldr x9,[x9]
7102e20684  ldr x0,[x9, #0x8]
7102e20688  cbz x0,0x7102e206a4
7102e2068c  add x1,sp,#0x50
7102e20690  mov w2,wzr
7102e20694  bl 0x7102405040
7102e20698  ldr x8,[x19, #0x8]
7102e2069c  add x8,x8,#0x338
7102e206a0  b 0x7102e206a8
7102e206a4  mov w0,#0xffffffff
7102e206a8  str w0,[x19, #0x210]
7102e206ac  ldr x9,[x8]
7102e206b0  ldr x9,[x9]
7102e206b4  ldr x0,[x9, #0x8]
7102e206b8  cbz x0,0x7102e206d4
7102e206bc  add x1,sp,#0x50
7102e206c0  mov w2,wzr
7102e206c4  bl 0x7102405040
7102e206c8  ldr x8,[x19, #0x8]
7102e206cc  add x8,x8,#0x338
7102e206d0  b 0x7102e206d8
7102e206d4  mov w0,#0xffffffff
7102e206d8  str w0,[x19, #0x208]
7102e206dc  ldr x8,[x8]
7102e206e0  ldr x8,[x8]
7102e206e4  ldr x0,[x8, #0x8]
7102e206e8  mov w22,#0xffffffff
7102e206ec  cbz x0,0x7102e20700
7102e206f0  add x1,sp,#0x50
7102e206f4  mov w2,wzr
7102e206f8  bl 0x7102405040
7102e206fc  b 0x7102e20704
7102e20700  mov w0,w22
7102e20704  str w0,[x19, #0x214]
7102e20708  mov w1,#0x50
7102e2070c  mov w0,#0x10
7102e20710  str wzr,[x19, #0x24]
7102e20714  bl 0x710392e290
7102e20718  mov x20,x0
7102e2071c  cbnz x0,0x7102e20768
7102e20720  adrp x8,0x7105332000
7102e20724  ldr x0,[x8, #0xf00]
7102e20728  cbz x0,0x7102e20764
7102e2072c  mov w8,#0x50
7102e20730  stur wzr,[x29, #-0x54]
7102e20734  sub x1,x29,#0x54
7102e20738  str x8,[sp, #0x90]
7102e2073c  ldr x8,[x0]
7102e20740  ldr x8,[x8, #0x30]
7102e20744  add x2,sp,#0x90
7102e20748  blr x8
7102e2074c  tbz w0,#0x0,0x7102e20764
7102e20750  mov w1,#0x50
7102e20754  mov w0,#0x10
7102e20758  bl 0x710392e290
7102e2075c  mov x20,x0
7102e20760  cbnz x0,0x7102e20768
7102e20764  mov x20,xzr
7102e20768  mov w8,#0x1
7102e2076c  ldr x1,[x19, #0x8]
7102e20770  strh w8,[x20, #0x8]
7102e20774  adrp x8,0x7104469000
7102e20778  ldr q0,[x8, #0x170]
7102e2077c  adrp x8,0x7104466000
7102e20780  stp xzr,xzr,[x20, #0x30]
7102e20784  ldr q1,[x8, #0xa80]
7102e20788  adrp x8,0x710532a000
7102e2078c  str x1,[x20]
7102e20790  strb wzr,[x20, #0xa]
7102e20794  stp q0,q1,[x20, #0x10]
7102e20798  str w22,[x20, #0xc]
7102e2079c  mov x2,x20
7102e207a0  str wzr,[x20, #0x40]
7102e207a4  ldr x8,[x8, #0x9d8]
7102e207a8  ldr x8,[x8]
7102e207ac  ldr x0,[x8, #0x1c8]
7102e207b0  bl 0x71031675b0
7102e207b4  and w8,w0,#0x1
7102e207b8  strb w8,[x20, #0x8]
7102e207bc  ldr x21,[x19, #0x230]
7102e207c0  str x20,[x19, #0x230]
7102e207c4  cbz x21,0x7102e20850
7102e207c8  adrp x8,0x71052b6000
7102e207cc  ldr x8,[x8, #0xfd8]
7102e207d0  ldrb w9,[x8, #0x9]
7102e207d4  cbz w9,0x7102e20828
7102e207d8  ldrb w9,[x21, #0xa]
7102e207dc  cbz w9,0x7102e20828
7102e207e0  ldrb w9,[x21, #0x9]
7102e207e4  cbz w9,0x7102e20824
7102e207e8  ldrsw x9,[x21, #0xc]
7102e207ec  cmp w9,#0x37
7102e207f0  b.hi 0x7102e2081c
7102e207f4  ldr x8,[x8]
7102e207f8  ldr x8,[x8, #0xc0]
7102e207fc  add x9,x8,x9
7102e20800  ldrb w10,[x9, #0x464]
7102e20804  cbz w10,0x7102e2081c
7102e20808  add x9,x9,#0x464
7102e2080c  strb wzr,[x9]
7102e20810  ldr w9,[x8]
7102e20814  sub w9,w9,#0x1
7102e20818  str w9,[x8]
7102e2081c  str w22,[x21, #0xc]
7102e20820  strb wzr,[x21, #0x9]
7102e20824  strb wzr,[x21, #0xa]
7102e20828  adrp x8,0x710532a000
7102e2082c  ldr x8,[x8, #0x9d8]
7102e20830  ldr x8,[x8]
7102e20834  ldr x0,[x8, #0x1c8]
7102e20838  ldr x1,[x21]
7102e2083c  mov x2,x21
7102e20840  bl 0x71031676c0
7102e20844  mov x0,x21
7102e20848  bl 0x710392eb40
7102e2084c  ldr x20,[x19, #0x230]
7102e20850  ldrb w8,[x20, #0x9]
7102e20854  cbz w8,0x7102e2089c
7102e20858  ldrsw x9,[x20, #0xc]
7102e2085c  cmp w9,#0x37
7102e20860  b.hi 0x7102e20894
7102e20864  adrp x8,0x71052b6000
7102e20868  ldr x8,[x8, #0xfd8]
7102e2086c  ldr x8,[x8]
7102e20870  ldr x8,[x8, #0xc0]
7102e20874  add x9,x8,x9
7102e20878  ldrb w10,[x9, #0x464]
7102e2087c  cbz w10,0x7102e20894
7102e20880  add x9,x9,#0x464
7102e20884  strb wzr,[x9]
7102e20888  ldr w9,[x8]
7102e2088c  sub w9,w9,#0x1
7102e20890  str w9,[x8]
7102e20894  str w22,[x20, #0xc]
7102e20898  strb wzr,[x20, #0x9]
7102e2089c  mov w1,#0x50
7102e208a0  mov w0,#0x10
7102e208a4  strb wzr,[x20, #0xa]
7102e208a8  bl 0x710392e290
7102e208ac  mov x20,x0
7102e208b0  cbnz x0,0x7102e208fc
7102e208b4  adrp x8,0x7105332000
7102e208b8  ldr x0,[x8, #0xf00]
7102e208bc  cbz x0,0x7102e208f8
7102e208c0  mov w8,#0x50
7102e208c4  stur wzr,[x29, #-0x54]
7102e208c8  sub x1,x29,#0x54
7102e208cc  str x8,[sp, #0x90]
7102e208d0  ldr x8,[x0]
7102e208d4  ldr x8,[x8, #0x30]
7102e208d8  add x2,sp,#0x90
7102e208dc  blr x8
7102e208e0  tbz w0,#0x0,0x7102e208f8
7102e208e4  mov w1,#0x50
7102e208e8  mov w0,#0x10
7102e208ec  bl 0x710392e290
7102e208f0  mov x20,x0
7102e208f4  cbnz x0,0x7102e208fc
7102e208f8  mov x20,xzr
7102e208fc  mov w8,#0x1
7102e20900  ldr x1,[x19, #0x8]
7102e20904  strh w8,[x20, #0x8]
7102e20908  adrp x8,0x710446a000
7102e2090c  ldr q0,[x8, #0x4b0]
7102e20910  adrp x8,0x710446a000
7102e20914  stp xzr,xzr,[x20, #0x30]
7102e20918  ldr q1,[x8, #0xa20]
7102e2091c  adrp x8,0x710532a000
7102e20920  str x1,[x20]
7102e20924  strb wzr,[x20, #0xa]
7102e20928  str w22,[x20, #0xc]
7102e2092c  mov x2,x20
7102e20930  str wzr,[x20, #0x40]
7102e20934  stp q0,q1,[x20, #0x10]
7102e20938  ldr x8,[x8, #0x9d8]
7102e2093c  ldr x8,[x8]
7102e20940  ldr x0,[x8, #0x1c8]
7102e20944  bl 0x71031675b0
7102e20948  and w8,w0,#0x1
7102e2094c  strb w8,[x20, #0x8]
7102e20950  ldr x21,[x19, #0x238]
7102e20954  str x20,[x19, #0x238]
7102e20958  cbz x21,0x7102e209e4
7102e2095c  adrp x8,0x71052b6000
7102e20960  ldr x8,[x8, #0xfd8]
7102e20964  ldrb w9,[x8, #0x9]
7102e20968  cbz w9,0x7102e209bc
7102e2096c  ldrb w9,[x21, #0xa]
7102e20970  cbz w9,0x7102e209bc
7102e20974  ldrb w9,[x21, #0x9]
7102e20978  cbz w9,0x7102e209b8
7102e2097c  ldrsw x9,[x21, #0xc]
7102e20980  cmp w9,#0x37
7102e20984  b.hi 0x7102e209b0
7102e20988  ldr x8,[x8]
7102e2098c  ldr x8,[x8, #0xc0]
7102e20990  add x9,x8,x9
7102e20994  ldrb w10,[x9, #0x464]
7102e20998  cbz w10,0x7102e209b0
7102e2099c  add x9,x9,#0x464
7102e209a0  strb wzr,[x9]
7102e209a4  ldr w9,[x8]
7102e209a8  sub w9,w9,#0x1
7102e209ac  str w9,[x8]
7102e209b0  str w22,[x21, #0xc]
7102e209b4  strb wzr,[x21, #0x9]
7102e209b8  strb wzr,[x21, #0xa]
7102e209bc  adrp x8,0x710532a000
7102e209c0  ldr x8,[x8, #0x9d8]
7102e209c4  ldr x8,[x8]
7102e209c8  ldr x0,[x8, #0x1c8]
7102e209cc  ldr x1,[x21]
7102e209d0  mov x2,x21
7102e209d4  bl 0x71031676c0
7102e209d8  mov x0,x21
7102e209dc  bl 0x710392eb40
7102e209e0  ldr x20,[x19, #0x238]
7102e209e4  ldrb w8,[x20, #0x9]
7102e209e8  cbz w8,0x7102e20a30
7102e209ec  ldrsw x9,[x20, #0xc]
7102e209f0  cmp w9,#0x37
7102e209f4  b.hi 0x7102e20a28
7102e209f8  adrp x8,0x71052b6000
7102e209fc  ldr x8,[x8, #0xfd8]
7102e20a00  ldr x8,[x8]
7102e20a04  ldr x8,[x8, #0xc0]
7102e20a08  add x9,x8,x9
7102e20a0c  ldrb w10,[x9, #0x464]
7102e20a10  cbz w10,0x7102e20a28
7102e20a14  add x9,x9,#0x464
7102e20a18  strb wzr,[x9]
7102e20a1c  ldr w9,[x8]
7102e20a20  sub w9,w9,#0x1
7102e20a24  str w9,[x8]
7102e20a28  str w22,[x20, #0xc]
7102e20a2c  strb wzr,[x20, #0x9]
7102e20a30  strb wzr,[x20, #0xa]
7102e20a34  ldr x9,[x19, #0x18]
7102e20a38  ldr x10,[x9, #0xb58]
7102e20a3c  ldr x8,[x9, #0xb50]
7102e20a40  subs x10,x10,x8
7102e20a44  lsr x25,x10,#0x4
7102e20a48  cbz w25,0x7102e20c78
7102e20a4c  b.eq 0x7102e20c9c
7102e20a50  fmov s8,0x3f000000
7102e20a54  mov x26,xzr
7102e20a58  mov w27,#0x43
7102e20a5c  mov w20,#0x50
7102e20a60  mov w28,#0x1
7102e20a64  adrp x23,0x71052b6000
7102e20a68  add x8,x8,x26
7102e20a6c  ldp s2,s3,[x8, #0x8]
7102e20a70  ldp s0,s1,[x8]
7102e20a74  fmul s3,s3,s8
7102e20a78  fmul s2,s2,s8
7102e20a7c  fsub s4,s0,s2
7102e20a80  fadd s0,s0,s2
7102e20a84  str q4,[sp, #0x10]
7102e20a88  fsub s4,s1,s3
7102e20a8c  mov w0,#0x10
7102e20a90  mov x1,x20
7102e20a94  stp q4,q0,[sp, #0x20]
7102e20a98  fadd s0,s1,s3
7102e20a9c  str q0,[sp, #0x40]
7102e20aa0  bl 0x710392e290
7102e20aa4  mov x21,x0
7102e20aa8  cbnz x0,0x7102e20af0
7102e20aac  adrp x8,0x7105332000
7102e20ab0  ldr x0,[x8, #0xf00]
7102e20ab4  cbz x0,0x7102e20aec
7102e20ab8  stur wzr,[x29, #-0x54]
7102e20abc  str x20,[sp, #0x90]
7102e20ac0  ldr x8,[x0]
7102e20ac4  ldr x8,[x8, #0x30]
7102e20ac8  sub x1,x29,#0x54
7102e20acc  add x2,sp,#0x90
7102e20ad0  blr x8
7102e20ad4  tbz w0,#0x0,0x7102e20aec
7102e20ad8  mov w0,#0x10
7102e20adc  mov x1,x20
7102e20ae0  bl 0x710392e290
7102e20ae4  mov x21,x0
7102e20ae8  cbnz x0,0x7102e20af0
7102e20aec  mov x21,xzr
7102e20af0  movi v1.2D,#0x0
7102e20af4  ldr q2,[sp, #0x10]
7102e20af8  ldr x1,[x19, #0x8]
7102e20afc  str x1,[x21]
7102e20b00  mov v0.16B,v1.16B
7102e20b04  strh w28,[x21, #0x8]
7102e20b08  mov v0.S[0x0],v2.S[0x0]
7102e20b0c  ldr q2,[sp, #0x20]
7102e20b10  mov v0.S[0x1],v2.S[0x0]
7102e20b14  ldr q2,[sp, #0x30]
7102e20b18  mov v1.S[0x0],v2.S[0x0]
7102e20b1c  ldr q2,[sp, #0x40]
7102e20b20  stp xzr,xzr,[x21, #0x30]
7102e20b24  strb wzr,[x21, #0xa]
7102e20b28  mov v1.S[0x1],v2.S[0x0]
7102e20b2c  str w22,[x21, #0xc]
7102e20b30  stp q0,q1,[x21, #0x10]
7102e20b34  str wzr,[x21, #0x40]
7102e20b38  adrp x8,0x710532a000
7102e20b3c  ldr x8,[x8, #0x9d8]
7102e20b40  ldr x8,[x8]
7102e20b44  ldr x0,[x8, #0x1c8]
7102e20b48  mov x2,x21
7102e20b4c  mov w24,w22
7102e20b50  bl 0x71031675b0
7102e20b54  and w8,w0,#0x1
7102e20b58  strb w8,[x21, #0x8]
7102e20b5c  lsl x8,x27,#0x3
7102e20b60  ldr x22,[x19, x8, LSL #0x0]
7102e20b64  str x21,[x19, x8, LSL #0x0]
7102e20b68  cbz x22,0x7102e20bf0
7102e20b6c  ldr x8,[x23, #0xfd8]
7102e20b70  ldrb w9,[x8, #0x9]
7102e20b74  cbz w9,0x7102e20bc8
7102e20b78  ldrb w9,[x22, #0xa]
7102e20b7c  cbz w9,0x7102e20bc8
7102e20b80  ldrb w9,[x22, #0x9]
7102e20b84  cbz w9,0x7102e20bc4
7102e20b88  ldrsw x9,[x22, #0xc]
7102e20b8c  cmp w9,#0x37
7102e20b90  b.hi 0x7102e20bbc
7102e20b94  ldr x8,[x8]
7102e20b98  ldr x8,[x8, #0xc0]
7102e20b9c  add x9,x8,x9
7102e20ba0  ldrb w10,[x9, #0x464]
7102e20ba4  cbz w10,0x7102e20bbc
7102e20ba8  add x9,x9,#0x464
7102e20bac  strb wzr,[x9]
7102e20bb0  ldr w9,[x8]
7102e20bb4  sub w9,w9,#0x1
7102e20bb8  str w9,[x8]
7102e20bbc  str w24,[x22, #0xc]
7102e20bc0  strb wzr,[x22, #0x9]
7102e20bc4  strb wzr,[x22, #0xa]
7102e20bc8  adrp x8,0x710532a000
7102e20bcc  ldr x8,[x8, #0x9d8]
7102e20bd0  ldr x8,[x8]
7102e20bd4  ldr x0,[x8, #0x1c8]
7102e20bd8  ldr x1,[x22]
7102e20bdc  mov x2,x22
7102e20be0  bl 0x71031676c0
7102e20be4  mov x0,x22
7102e20be8  bl 0x710392eb40
7102e20bec  ldr x21,[x19, x27, LSL #0x3]
7102e20bf0  ldrb w8,[x21, #0x9]
7102e20bf4  mov w22,w24
7102e20bf8  cbz w8,0x7102e20c3c
7102e20bfc  ldrsw x9,[x21, #0xc]
7102e20c00  cmp w9,#0x37
7102e20c04  b.hi 0x7102e20c34
7102e20c08  ldr x8,[x23, #0xfd8]
7102e20c0c  ldr x8,[x8]
7102e20c10  ldr x8,[x8, #0xc0]
7102e20c14  add x9,x8,x9
7102e20c18  ldrb w10,[x9, #0x464]
7102e20c1c  cbz w10,0x7102e20c34
7102e20c20  add x9,x9,#0x464
7102e20c24  strb wzr,[x9]
7102e20c28  ldr w9,[x8]
7102e20c2c  sub w9,w9,#0x1
7102e20c30  str w9,[x8]
7102e20c34  str w22,[x21, #0xc]
7102e20c38  strb wzr,[x21, #0x9]
7102e20c3c  sub x9,x27,#0x42
7102e20c40  cmp w9,w25
7102e20c44  strb wzr,[x21, #0xa]
7102e20c48  b.cs 0x7102e20c78
7102e20c4c  ldr x10,[x19, #0x18]
7102e20c50  ldr x11,[x10, #0xb58]
7102e20c54  ldr x8,[x10, #0xb50]
7102e20c58  sub x11,x11,x8
7102e20c5c  asr x11,x11,#0x4
7102e20c60  add x26,x26,#0x10
7102e20c64  add x27,x27,#0x1
7102e20c68  cmp x11,w9, UXTW 
7102e20c6c  b.hi 0x7102e20a68
7102e20c70  add x0,x10,#0xb50
7102e20c74  bl 0x71039c1330
7102e20c78  ldr d8,[sp, #0xe0]
7102e20c7c  ldp x29,x30,[sp, #0x140]
7102e20c80  ldp x20,x19,[sp, #0x130]
7102e20c84  ldp x22,x21,[sp, #0x120]
7102e20c88  ldp x24,x23,[sp, #0x110]
7102e20c8c  ldp x26,x25,[sp, #0x100]
7102e20c90  ldp x28,x27,[sp, #0xf0]
7102e20c94  add sp,sp,#0x150
7102e20c98  ret
7102e20c9c  add x0,x9,#0xb50
7102e20ca0  bl 0x71039c1330
