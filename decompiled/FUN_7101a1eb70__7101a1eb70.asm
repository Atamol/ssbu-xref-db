// addr:      7101a1eb70
// offset:    0x1a1eb70
// name:      FUN_7101a1eb70
// mangled:   
// size:      868

7101a1eb70  sub sp,sp,#0x50
7101a1eb74  stp x24,x23,[sp, #0x10]
7101a1eb78  stp x22,x21,[sp, #0x20]
7101a1eb7c  stp x20,x19,[sp, #0x30]
7101a1eb80  stp x29,x30,[sp, #0x40]
7101a1eb84  add x29,sp,#0x40
7101a1eb88  mov x21,x0
7101a1eb8c  ldr x0,[x1, #0x8]
7101a1eb90  mov x19,x1
7101a1eb94  mov x1,xzr
7101a1eb98  mov w20,w2
7101a1eb9c  bl 0x7101a06920
7101a1eba0  ldr x8,[x19, #0x8]
7101a1eba4  orr w9,wzr,#0x3
7101a1eba8  str w9,[x8, #0x1f4]
7101a1ebac  ldr x8,[x19, #0x8]
7101a1ebb0  ldr w9,[x8, #0x150]
7101a1ebb4  add w9,w9,#0x1
7101a1ebb8  str w9,[x8, #0x1f0]
7101a1ebbc  ldr x22,[x19, #0x8]
7101a1ebc0  ldr w2,[x22, #0x1fc]
7101a1ebc4  ldrb w3,[x22, #0x6bb]
7101a1ebc8  ldr x0,[x22, #0x5e8]
7101a1ebcc  mov w8,#0x1
7101a1ebd0  mov w1,#0x1
7101a1ebd4  str w8,[x22, #0x1f8]
7101a1ebd8  bl 0x7101a000c0
7101a1ebdc  mov x0,x22
7101a1ebe0  bl 0x7101a02cb0
7101a1ebe4  ldrb w8,[x22, #0x1c4]
7101a1ebe8  cmp w8,#0xff
7101a1ebec  b.eq 0x7101a1ec20
7101a1ebf0  ldr w8,[x22, #0x1f8]
7101a1ebf4  cbnz w8,0x7101a1ec20
7101a1ebf8  ldr w8,[x22, #0x394]
7101a1ebfc  cbnz w8,0x7101a1ec20
7101a1ec00  ldr x8,[x22, #0x5e8]
7101a1ec04  ldr x8,[x8, #0x80]
7101a1ec08  ldr x0,[x8, #0x10]
7101a1ec0c  cbz x0,0x7101a1ec20
7101a1ec10  add x1,x22,#0x1d0
7101a1ec14  mov w2,#0xffffffff
7101a1ec18  mov w3,#0x1
7101a1ec1c  bl 0x71037a2270
7101a1ec20  ldr x8,[x19, #0x8]
7101a1ec24  ldr x22,[x8, #0x5e8]
7101a1ec28  strb wzr,[x8, #0x2e0]
7101a1ec2c  ldr x0,[x22, #0x40]
7101a1ec30  fmov s0,0x3f800000
7101a1ec34  adrp x1,0x7104349000
7101a1ec38  add x1,x1,#0xd11
7101a1ec3c  str wzr,[x22, #0x254]
7101a1ec40  bl 0x7103778300
7101a1ec44  ldr x8,[x22, #0xa0]
7101a1ec48  ldr x0,[x8, #0x10]
7101a1ec4c  cbz x0,0x7101a1ec64
7101a1ec50  add x1,sp,#0xc
7101a1ec54  mov w2,wzr
7101a1ec58  mov w3,wzr
7101a1ec5c  str wzr,[sp, #0xc]
7101a1ec60  bl 0x71037a2270
7101a1ec64  ldr x8,[x19, #0x8]
7101a1ec68  mov w9,#0x1
7101a1ec6c  strb w9,[x8, #0x6bd]
7101a1ec70  ldr x8,[x19, #0x8]
7101a1ec74  ldr x8,[x8, #0x5e8]
7101a1ec78  ldr x0,[x8, #0x10]
7101a1ec7c  adrp x1,0x710425e000
7101a1ec80  add x1,x1,#0xd91
7101a1ec84  mov x24,#-0x3f00000000000000
7101a1ec88  bl 0x7103778760
7101a1ec8c  ldr x8,[x19, #0x8]
7101a1ec90  ldr x23,[x8, #0x5e8]
7101a1ec94  ldr x0,[x23, #0x10]
7101a1ec98  adrp x22,0x710433a000
7101a1ec9c  add x22,x22,#0x9c5
7101a1eca0  mov x1,x22
7101a1eca4  bl 0x7103778760
7101a1eca8  ldr x0,[x23, #0xf0]
7101a1ecac  mov x1,x22
7101a1ecb0  bl 0x7103778760
7101a1ecb4  ldr x0,[x23, #0x100]
7101a1ecb8  mov x1,x22
7101a1ecbc  bl 0x7103778760
7101a1ecc0  mov x0,x21
7101a1ecc4  mov x1,x19
7101a1ecc8  bl 0x7101a1f530
7101a1eccc  ldr w8,[x21, #0x16c]
7101a1ecd0  cmp w8,#0x5
7101a1ecd4  b.ne 0x7101a1ed98
7101a1ecd8  adrp x8,0x710532f000
7101a1ecdc  ldr x8,[x8, #0x730]
7101a1ece0  ldr x8,[x8, #0x8]
7101a1ece4  ldr x23,[x8, #0x168]
7101a1ece8  ldr x22,[x21, #0xd90]
7101a1ecec  mov x1,#0xb807
7101a1ecf0  movk x1,#0xb1cc, LSL #16
7101a1ecf4  movk x1,#0x11, LSL #32
7101a1ecf8  mov x0,x23
7101a1ecfc  bl 0x71032631a0
7101a1ed00  and x10,x22,#-0x100000000000000
7101a1ed04  and x9,x22,#0xffffffffff
7101a1ed08  and x8,x0,#0xffffffffff
7101a1ed0c  cmp x10,x24
7101a1ed10  b.ne 0x7101a1ed3c
7101a1ed14  cbz x9,0x7101a1ed3c
7101a1ed18  and x11,x0,#-0x100000000000000
7101a1ed1c  cmp x11,x24
7101a1ed20  b.ne 0x7101a1ed40
7101a1ed24  cbz x8,0x7101a1ed40
7101a1ed28  eor x8,x0,x22
7101a1ed2c  tst x8,#0xffffffffff
7101a1ed30  mov x2,x22
7101a1ed34  b.ne 0x7101a1ed88
7101a1ed38  b 0x7101a1ed78
7101a1ed3c  and x11,x0,#-0x100000000000000
7101a1ed40  cmp x10,x24
7101a1ed44  cset w10,eq
7101a1ed48  cmp x9,#0x0
7101a1ed4c  cset w9,ne
7101a1ed50  cmp x8,#0x0
7101a1ed54  cset w8,ne
7101a1ed58  cmp x11,x24
7101a1ed5c  and w9,w10,w9
7101a1ed60  cset w10,eq
7101a1ed64  and w8,w8,w10
7101a1ed68  eor w8,w8,w9
7101a1ed6c  cmp w8,#0x1
7101a1ed70  mov x2,x22
7101a1ed74  b.eq 0x7101a1ed88
7101a1ed78  mov x0,x23
7101a1ed7c  mov x1,x22
7101a1ed80  bl 0x7103263030
7101a1ed84  mov x2,x0
7101a1ed88  ldr x0,[x19, #0x8]
7101a1ed8c  mov x1,x22
7101a1ed90  mov w3,wzr
7101a1ed94  bl 0x7101a029b0
7101a1ed98  ldr x22,[x19, #0x8]
7101a1ed9c  ldr x8,[x22, #0x200]
7101a1eda0  and x9,x8,#-0x100000000000000
7101a1eda4  cmp x9,x24
7101a1eda8  b.ne 0x7101a1edb4
7101a1edac  and x8,x8,#0xffffffffff
7101a1edb0  cbnz x8,0x7101a1ee78
7101a1edb4  adrp x8,0x710532f000
7101a1edb8  ldr x8,[x8, #0x730]
7101a1edbc  ldr x8,[x8, #0x8]
7101a1edc0  ldr x23,[x8, #0x168]
7101a1edc4  ldr x21,[x21, #0xd90]
7101a1edc8  mov x1,#0xb807
7101a1edcc  movk x1,#0xb1cc, LSL #16
7101a1edd0  movk x1,#0x11, LSL #32
7101a1edd4  mov x0,x23
7101a1edd8  bl 0x71032631a0
7101a1eddc  and x10,x21,#-0x100000000000000
7101a1ede0  and x9,x21,#0xffffffffff
7101a1ede4  and x8,x0,#0xffffffffff
7101a1ede8  cmp x10,x24
7101a1edec  b.ne 0x7101a1ee18
7101a1edf0  cbz x9,0x7101a1ee18
7101a1edf4  and x11,x0,#-0x100000000000000
7101a1edf8  cmp x11,x24
7101a1edfc  b.ne 0x7101a1ee1c
7101a1ee00  cbz x8,0x7101a1ee1c
7101a1ee04  eor x8,x0,x21
7101a1ee08  tst x8,#0xffffffffff
7101a1ee0c  mov x2,x21
7101a1ee10  b.ne 0x7101a1ee64
7101a1ee14  b 0x7101a1ee54
7101a1ee18  and x11,x0,#-0x100000000000000
7101a1ee1c  cmp x10,x24
7101a1ee20  cset w10,eq
7101a1ee24  cmp x9,#0x0
7101a1ee28  cset w9,ne
7101a1ee2c  cmp x8,#0x0
7101a1ee30  cset w8,ne
7101a1ee34  cmp x11,x24
7101a1ee38  and w9,w10,w9
7101a1ee3c  cset w10,eq
7101a1ee40  and w8,w8,w10
7101a1ee44  eor w8,w8,w9
7101a1ee48  cmp w8,#0x1
7101a1ee4c  mov x2,x21
7101a1ee50  b.eq 0x7101a1ee64
7101a1ee54  mov x0,x23
7101a1ee58  mov x1,x21
7101a1ee5c  bl 0x7103263030
7101a1ee60  mov x2,x0
7101a1ee64  mov x0,x22
7101a1ee68  mov x1,x21
7101a1ee6c  mov w3,wzr
7101a1ee70  bl 0x7101a029b0
7101a1ee74  ldr x22,[x19, #0x8]
7101a1ee78  mov w8,#0x1
7101a1ee7c  str w8,[x22, #0x5d0]
7101a1ee80  ldrb w8,[x22, #0x6b9]
7101a1ee84  cbnz w8,0x7101a1ee90
7101a1ee88  ldr w8,[x22, #0x1f8]
7101a1ee8c  cbz w8,0x7101a1eea0
7101a1ee90  ldr x8,[x22, #0x678]
7101a1ee94  cmp x8,#0x0
7101a1ee98  cset w8,ne
7101a1ee9c  and w20,w8,w20
7101a1eea0  ldr x0,[x22, #0x5e8]
7101a1eea4  and w2,w20,#0x1
7101a1eea8  mov w1,#0x1
7101a1eeac  mov w20,#0x1
7101a1eeb0  bl 0x71019fff00
7101a1eeb4  ldr x8,[x19, #0x8]
7101a1eeb8  strb w20,[x8, #0x6ba]
7101a1eebc  ldp x29,x30,[sp, #0x40]
7101a1eec0  ldp x20,x19,[sp, #0x30]
7101a1eec4  ldp x22,x21,[sp, #0x20]
7101a1eec8  ldp x24,x23,[sp, #0x10]
7101a1eecc  add sp,sp,#0x50
7101a1eed0  ret
