// addr:      7102fdcb20
// offset:    0x2fdcb20
// name:      FUN_7102fdcb20
// mangled:   
// size:      5308

7102fdcb20  sub sp,sp,#0xc0
7102fdcb24  str x23,[sp, #0x80]
7102fdcb28  stp x22,x21,[sp, #0x90]
7102fdcb2c  stp x20,x19,[sp, #0xa0]
7102fdcb30  stp x29,x30,[sp, #0xb0]
7102fdcb34  add x29,sp,#0xb0
7102fdcb38  mov x19,x0
7102fdcb3c  bl 0x71025d9250
7102fdcb40  ldr x21,[x19, #0x340]
7102fdcb44  mov w1,#0x50
7102fdcb48  mov w0,#0x10
7102fdcb4c  bl 0x710392e290
7102fdcb50  cbnz x0,0x7102fdcb88
7102fdcb54  adrp x8,0x7105332000
7102fdcb58  ldr x0,[x8, #0xf00]
7102fdcb5c  mov w20,#0x50
7102fdcb60  str wzr,[sp]
7102fdcb64  str x20,[sp, #0x40]
7102fdcb68  ldr x8,[x0]
7102fdcb6c  ldr x8,[x8, #0x30]
7102fdcb70  mov x1,sp
7102fdcb74  add x2,sp,#0x40
7102fdcb78  blr x8
7102fdcb7c  mov w0,#0x10
7102fdcb80  mov x1,x20
7102fdcb84  bl 0x710392e290
7102fdcb88  mov w8,#0xffffffff
7102fdcb8c  str w8,[x0, #0x20]
7102fdcb90  mov x8,#-0x1
7102fdcb94  strb wzr,[x0, #0x24]
7102fdcb98  stp x8,x8,[x0, #0x10]
7102fdcb9c  str wzr,[x0, #0x48]
7102fdcba0  str xzr,[x0, #0x30]
7102fdcba4  stp x21,x8,[x0]
7102fdcba8  stp xzr,xzr,[x0, #0x38]
7102fdcbac  ldr x8,[x19, #0x900]
7102fdcbb0  str x0,[x19, #0x900]
7102fdcbb4  cbz x8,0x7102fdcbc4
7102fdcbb8  mov x0,x8
7102fdcbbc  bl 0x710392eb40
7102fdcbc0  ldr x0,[x19, #0x900]
7102fdcbc4  str wzr,[x0, #0x30]
7102fdcbc8  ldr x8,[x19, #0x900]
7102fdcbcc  mov w9,#0x1
7102fdcbd0  str w9,[x8, #0x34]
7102fdcbd4  ldr x8,[x19, #0x900]
7102fdcbd8  mov w9,#0x2
7102fdcbdc  str w9,[x8, #0x38]
7102fdcbe0  ldr x8,[x19, #0x900]
7102fdcbe4  orr w9,wzr,#0x3
7102fdcbe8  str w9,[x8, #0x3c]
7102fdcbec  ldr x8,[x19, #0x900]
7102fdcbf0  mov w9,#0x4
7102fdcbf4  str w9,[x8, #0x40]
7102fdcbf8  ldr x8,[x19, #0x900]
7102fdcbfc  mov w9,#0x5
7102fdcc00  str w9,[x8, #0x44]
7102fdcc04  ldr x8,[x19, #0x900]
7102fdcc08  orr w9,wzr,#0x6
7102fdcc0c  str w9,[x8, #0x48]
7102fdcc10  ldr x8,[x19, #0x768]
7102fdcc14  add x9,x19,#0x884
7102fdcc18  str x8,[x9]
7102fdcc1c  ldr x8,[x19, #0x770]
7102fdcc20  add x9,x19,#0x88c
7102fdcc24  str x8,[x9]
7102fdcc28  ldr w8,[x19, #0x778]
7102fdcc2c  str w8,[x19, #0x894]
7102fdcc30  ldr w8,[x19, #0x77c]
7102fdcc34  str w8,[x19, #0x898]
7102fdcc38  ldr w8,[x19, #0x780]
7102fdcc3c  ldr w9,[x19, #0x784]
7102fdcc40  str w9,[x19, #0x8a0]
7102fdcc44  str w8,[x19, #0x89c]
7102fdcc48  str w8,[x19, #0x8a4]
7102fdcc4c  strb wzr,[x19, #0x8b8]
7102fdcc50  adrp x20,0x710532a000
7102fdcc54  ldr x8,[x20, #0x9d8]
7102fdcc58  ldr x8,[x8]
7102fdcc5c  ldr s0,[x19, #0x740]
7102fdcc60  ldr s1,[x19, #0x744]
7102fdcc64  ldr s2,[x19, #0x748]
7102fdcc68  ldr s3,[x19, #0x74c]
7102fdcc6c  ldr s4,[x19, #0x750]
7102fdcc70  ldr x0,[x8, #0x1d0]
7102fdcc74  mov x1,x19
7102fdcc78  bl 0x7103177310
7102fdcc7c  ldr x8,[x20, #0x9d8]
7102fdcc80  ldr x8,[x8]
7102fdcc84  ldr x9,[x8, #0x1d0]
7102fdcc88  mov x8,x9
7102fdcc8c  ldrb w11,[x19, #0x8b8]
7102fdcc90  ldr x10,[x8, #0x58]!
7102fdcc94  cbz w11,0x7102fdccdc
7102fdcc98  cbz x10,0x7102fdcd20
7102fdcc9c  add x11,x9,#0x58
7102fdcca0  b 0x7102fdccac
7102fdcca4  mov x11,x10
7102fdcca8  mov x10,x12
7102fdccac  ldr x12,[x10, #0x20]
7102fdccb0  cmp x12,x19
7102fdccb4  b.ls 0x7102fdccc8
7102fdccb8  ldr x12,[x10]
7102fdccbc  mov x11,x10
7102fdccc0  cbnz x12,0x7102fdcca4
7102fdccc4  b 0x7102fdcd24
7102fdccc8  b.cs 0x7102fdcd24
7102fdcccc  ldr x12,[x10, #0x8]!
7102fdccd0  mov x11,x10
7102fdccd4  cbnz x12,0x7102fdcca4
7102fdccd8  b 0x7102fdcd24
7102fdccdc  cbz x10,0x7102fdcd94
7102fdcce0  add x11,x9,#0x58
7102fdcce4  b 0x7102fdccf0
7102fdcce8  mov x11,x10
7102fdccec  mov x10,x12
7102fdccf0  ldr x12,[x10, #0x20]
7102fdccf4  cmp x12,x19
7102fdccf8  b.ls 0x7102fdcd0c
7102fdccfc  ldr x12,[x10]
7102fdcd00  mov x11,x10
7102fdcd04  cbnz x12,0x7102fdcce8
7102fdcd08  b 0x7102fdcd98
7102fdcd0c  b.cs 0x7102fdcd98
7102fdcd10  ldr x12,[x10, #0x8]!
7102fdcd14  mov x11,x10
7102fdcd18  cbnz x12,0x7102fdcce8
7102fdcd1c  b 0x7102fdcd98
7102fdcd20  mov x11,x8
7102fdcd24  ldr x10,[x11]
7102fdcd28  mov w11,#0x1
7102fdcd2c  ldr x10,[x10, #0x28]
7102fdcd30  str w11,[x10, #0x380]
7102fdcd34  ldr x10,[x9, #0x20]
7102fdcd38  cmp x10,x19
7102fdcd3c  b.ne 0x7102fdce20
7102fdcd40  ldr w10,[x9, #0x38]
7102fdcd44  cmp w10,#0x2
7102fdcd48  b.gt 0x7102fdce20
7102fdcd4c  ldr x10,[x8]
7102fdcd50  cbz x10,0x7102fdce00
7102fdcd54  add x8,x9,#0x58
7102fdcd58  b 0x7102fdcd64
7102fdcd5c  mov x8,x10
7102fdcd60  mov x10,x9
7102fdcd64  ldr x9,[x10, #0x20]
7102fdcd68  cmp x9,x19
7102fdcd6c  b.ls 0x7102fdcd80
7102fdcd70  ldr x9,[x10]
7102fdcd74  mov x8,x10
7102fdcd78  cbnz x9,0x7102fdcd5c
7102fdcd7c  b 0x7102fdce00
7102fdcd80  b.cs 0x7102fdce00
7102fdcd84  ldr x9,[x10, #0x8]!
7102fdcd88  mov x8,x10
7102fdcd8c  cbnz x9,0x7102fdcd5c
7102fdcd90  b 0x7102fdce00
7102fdcd94  mov x11,x8
7102fdcd98  ldr x10,[x11]
7102fdcd9c  ldr x10,[x10, #0x28]
7102fdcda0  str wzr,[x10, #0x380]
7102fdcda4  ldr x10,[x9, #0x20]
7102fdcda8  cmp x10,x19
7102fdcdac  b.ne 0x7102fdce20
7102fdcdb0  ldr w10,[x9, #0x38]
7102fdcdb4  cmp w10,#0x2
7102fdcdb8  b.gt 0x7102fdce20
7102fdcdbc  ldr x10,[x8]
7102fdcdc0  cbz x10,0x7102fdce00
7102fdcdc4  add x8,x9,#0x58
7102fdcdc8  b 0x7102fdcdd4
7102fdcdcc  mov x8,x10
7102fdcdd0  mov x10,x9
7102fdcdd4  ldr x9,[x10, #0x20]
7102fdcdd8  cmp x9,x19
7102fdcddc  b.ls 0x7102fdcdf0
7102fdcde0  ldr x9,[x10]
7102fdcde4  mov x8,x10
7102fdcde8  cbnz x9,0x7102fdcdcc
7102fdcdec  b 0x7102fdce00
7102fdcdf0  b.cs 0x7102fdce00
7102fdcdf4  ldr x9,[x10, #0x8]!
7102fdcdf8  mov x8,x10
7102fdcdfc  cbnz x9,0x7102fdcdcc
7102fdce00  ldr x8,[x8]
7102fdce04  ldr x8,[x8, #0x28]
7102fdce08  ldr x0,[x8, #0x3b0]
7102fdce0c  cbz x0,0x7102fddfd8
7102fdce10  add x1,x8,#0x380
7102fdce14  ldr x8,[x0]
7102fdce18  ldr x8,[x8, #0x30]
7102fdce1c  blr x8
7102fdce20  ldr x8,[x19, #0x310]
7102fdce24  ldp x9,x11,[x8, #0xd0]
7102fdce28  cmp x9,x11
7102fdce2c  b.eq 0x7102fdce68
7102fdce30  mov x12,#0xc266
7102fdce34  movk x12,#0x7071, LSL #16
7102fdce38  movk x12,#0xc, LSL #32
7102fdce3c  mov x13,x9
7102fdce40  ldr w10,[x13, #0x8]
7102fdce44  cmp w10,#0x1
7102fdce48  b.hi 0x7102fdce5c
7102fdce4c  ldr x10,[x13]
7102fdce50  ldr x14,[x10, #0x68]
7102fdce54  cmp x14,x12
7102fdce58  b.eq 0x7102fdce6c
7102fdce5c  add x13,x13,#0x10
7102fdce60  cmp x11,x13
7102fdce64  b.ne 0x7102fdce40
7102fdce68  mov x10,xzr
7102fdce6c  sub x12,x11,x9
7102fdce70  lsr x11,x12,#0x4
7102fdce74  cbz w11,0x7102fdcea8
7102fdce78  mov x11,xzr
7102fdce7c  ubfx x12,x12,#0x4,#0x20
7102fdce80  mov w13,#0xffffffff
7102fdce84  ldr x14,[x9]
7102fdce88  cmp x14,x10
7102fdce8c  b.eq 0x7102fdceac
7102fdce90  add x11,x11,#0x1
7102fdce94  add x9,x9,#0x10
7102fdce98  cmp x11,x12
7102fdce9c  b.cc 0x7102fdce84
7102fdcea0  mov w11,w13
7102fdcea4  b 0x7102fdceac
7102fdcea8  mov w11,#0xffffffff
7102fdceac  str w11,[x19, #0x838]
7102fdceb0  ldp x9,x11,[x8, #0xd0]
7102fdceb4  cmp x9,x11
7102fdceb8  b.eq 0x7102fdcef4
7102fdcebc  mov x12,#0x5d73
7102fdcec0  movk x12,#0x8b67, LSL #16
7102fdcec4  movk x12,#0xd, LSL #32
7102fdcec8  mov x13,x9
7102fdcecc  ldr w10,[x13, #0x8]
7102fdced0  cmp w10,#0x1
7102fdced4  b.hi 0x7102fdcee8
7102fdced8  ldr x10,[x13]
7102fdcedc  ldr x14,[x10, #0x68]
7102fdcee0  cmp x14,x12
7102fdcee4  b.eq 0x7102fdcef8
7102fdcee8  add x13,x13,#0x10
7102fdceec  cmp x11,x13
7102fdcef0  b.ne 0x7102fdcecc
7102fdcef4  mov x10,xzr
7102fdcef8  sub x12,x11,x9
7102fdcefc  lsr x11,x12,#0x4
7102fdcf00  cbz w11,0x7102fdcf34
7102fdcf04  mov x11,xzr
7102fdcf08  ubfx x12,x12,#0x4,#0x20
7102fdcf0c  mov w13,#0xffffffff
7102fdcf10  ldr x14,[x9]
7102fdcf14  cmp x14,x10
7102fdcf18  b.eq 0x7102fdcf38
7102fdcf1c  add x11,x11,#0x1
7102fdcf20  add x9,x9,#0x10
7102fdcf24  cmp x11,x12
7102fdcf28  b.cc 0x7102fdcf10
7102fdcf2c  mov w11,w13
7102fdcf30  b 0x7102fdcf38
7102fdcf34  mov w11,#0xffffffff
7102fdcf38  str w11,[x19, #0x83c]
7102fdcf3c  ldp x9,x11,[x8, #0xd0]
7102fdcf40  cmp x9,x11
7102fdcf44  b.eq 0x7102fdcf80
7102fdcf48  mov x12,#0xec41
7102fdcf4c  movk x12,#0xd35a, LSL #16
7102fdcf50  movk x12,#0xc, LSL #32
7102fdcf54  mov x13,x9
7102fdcf58  ldr w10,[x13, #0x8]
7102fdcf5c  cmp w10,#0x1
7102fdcf60  b.hi 0x7102fdcf74
7102fdcf64  ldr x10,[x13]
7102fdcf68  ldr x14,[x10, #0x68]
7102fdcf6c  cmp x14,x12
7102fdcf70  b.eq 0x7102fdcf84
7102fdcf74  add x13,x13,#0x10
7102fdcf78  cmp x11,x13
7102fdcf7c  b.ne 0x7102fdcf58
7102fdcf80  mov x10,xzr
7102fdcf84  sub x12,x11,x9
7102fdcf88  lsr x11,x12,#0x4
7102fdcf8c  cbz w11,0x7102fdcfc0
7102fdcf90  mov x11,xzr
7102fdcf94  ubfx x12,x12,#0x4,#0x20
7102fdcf98  mov w13,#0xffffffff
7102fdcf9c  ldr x14,[x9]
7102fdcfa0  cmp x14,x10
7102fdcfa4  b.eq 0x7102fdcfc4
7102fdcfa8  add x11,x11,#0x1
7102fdcfac  add x9,x9,#0x10
7102fdcfb0  cmp x11,x12
7102fdcfb4  b.cc 0x7102fdcf9c
7102fdcfb8  mov w11,w13
7102fdcfbc  b 0x7102fdcfc4
7102fdcfc0  mov w11,#0xffffffff
7102fdcfc4  str w11,[x19, #0x840]
7102fdcfc8  ldp x9,x11,[x8, #0xd0]
7102fdcfcc  cmp x9,x11
7102fdcfd0  b.eq 0x7102fdd00c
7102fdcfd4  mov x12,#0xe5a4
7102fdcfd8  movk x12,#0x1ca2, LSL #16
7102fdcfdc  movk x12,#0xd, LSL #32
7102fdcfe0  mov x13,x9
7102fdcfe4  ldr w10,[x13, #0x8]
7102fdcfe8  cmp w10,#0x1
7102fdcfec  b.hi 0x7102fdd000
7102fdcff0  ldr x10,[x13]
7102fdcff4  ldr x14,[x10, #0x68]
7102fdcff8  cmp x14,x12
7102fdcffc  b.eq 0x7102fdd010
7102fdd000  add x13,x13,#0x10
7102fdd004  cmp x11,x13
7102fdd008  b.ne 0x7102fdcfe4
7102fdd00c  mov x10,xzr
7102fdd010  sub x12,x11,x9
7102fdd014  lsr x11,x12,#0x4
7102fdd018  cbz w11,0x7102fdd04c
7102fdd01c  mov x11,xzr
7102fdd020  ubfx x12,x12,#0x4,#0x20
7102fdd024  mov w13,#0xffffffff
7102fdd028  ldr x14,[x9]
7102fdd02c  cmp x14,x10
7102fdd030  b.eq 0x7102fdd050
7102fdd034  add x11,x11,#0x1
7102fdd038  add x9,x9,#0x10
7102fdd03c  cmp x11,x12
7102fdd040  b.cc 0x7102fdd028
7102fdd044  mov w11,w13
7102fdd048  b 0x7102fdd050
7102fdd04c  mov w11,#0xffffffff
7102fdd050  str w11,[x19, #0x844]
7102fdd054  ldp x9,x11,[x8, #0xd0]
7102fdd058  cmp x9,x11
7102fdd05c  b.eq 0x7102fdd098
7102fdd060  mov x12,#0x1225
7102fdd064  movk x12,#0x8167, LSL #16
7102fdd068  movk x12,#0xb, LSL #32
7102fdd06c  mov x13,x9
7102fdd070  ldr w10,[x13, #0x8]
7102fdd074  cmp w10,#0x1
7102fdd078  b.hi 0x7102fdd08c
7102fdd07c  ldr x10,[x13]
7102fdd080  ldr x14,[x10, #0x68]
7102fdd084  cmp x14,x12
7102fdd088  b.eq 0x7102fdd09c
7102fdd08c  add x13,x13,#0x10
7102fdd090  cmp x11,x13
7102fdd094  b.ne 0x7102fdd070
7102fdd098  mov x10,xzr
7102fdd09c  sub x12,x11,x9
7102fdd0a0  lsr x11,x12,#0x4
7102fdd0a4  cbz w11,0x7102fdd0d8
7102fdd0a8  mov x11,xzr
7102fdd0ac  ubfx x12,x12,#0x4,#0x20
7102fdd0b0  mov w13,#0xffffffff
7102fdd0b4  ldr x14,[x9]
7102fdd0b8  cmp x14,x10
7102fdd0bc  b.eq 0x7102fdd0dc
7102fdd0c0  add x11,x11,#0x1
7102fdd0c4  add x9,x9,#0x10
7102fdd0c8  cmp x11,x12
7102fdd0cc  b.cc 0x7102fdd0b4
7102fdd0d0  mov w11,w13
7102fdd0d4  b 0x7102fdd0dc
7102fdd0d8  mov w11,#0xffffffff
7102fdd0dc  str w11,[x19, #0x848]
7102fdd0e0  ldp x9,x11,[x8, #0xd0]
7102fdd0e4  cmp x9,x11
7102fdd0e8  b.eq 0x7102fdd124
7102fdd0ec  mov x12,#0xd3b7
7102fdd0f0  movk x12,#0x32ce, LSL #16
7102fdd0f4  movk x12,#0x10, LSL #32
7102fdd0f8  mov x13,x9
7102fdd0fc  ldr w10,[x13, #0x8]
7102fdd100  cmp w10,#0x1
7102fdd104  b.hi 0x7102fdd118
7102fdd108  ldr x10,[x13]
7102fdd10c  ldr x14,[x10, #0x68]
7102fdd110  cmp x14,x12
7102fdd114  b.eq 0x7102fdd128
7102fdd118  add x13,x13,#0x10
7102fdd11c  cmp x11,x13
7102fdd120  b.ne 0x7102fdd0fc
7102fdd124  mov x10,xzr
7102fdd128  sub x12,x11,x9
7102fdd12c  lsr x11,x12,#0x4
7102fdd130  cbz w11,0x7102fdd164
7102fdd134  mov x11,xzr
7102fdd138  ubfx x12,x12,#0x4,#0x20
7102fdd13c  mov w13,#0xffffffff
7102fdd140  ldr x14,[x9]
7102fdd144  cmp x14,x10
7102fdd148  b.eq 0x7102fdd168
7102fdd14c  add x11,x11,#0x1
7102fdd150  add x9,x9,#0x10
7102fdd154  cmp x11,x12
7102fdd158  b.cc 0x7102fdd140
7102fdd15c  mov w11,w13
7102fdd160  b 0x7102fdd168
7102fdd164  mov w11,#0xffffffff
7102fdd168  str w11,[x19, #0x84c]
7102fdd16c  ldp x9,x11,[x8, #0xd0]
7102fdd170  cmp x9,x11
7102fdd174  b.eq 0x7102fdd1b0
7102fdd178  mov x12,#0x3284
7102fdd17c  movk x12,#0xfa5b, LSL #16
7102fdd180  movk x12,#0xf, LSL #32
7102fdd184  mov x13,x9
7102fdd188  ldr w10,[x13, #0x8]
7102fdd18c  cmp w10,#0x1
7102fdd190  b.hi 0x7102fdd1a4
7102fdd194  ldr x10,[x13]
7102fdd198  ldr x14,[x10, #0x68]
7102fdd19c  cmp x14,x12
7102fdd1a0  b.eq 0x7102fdd1b4
7102fdd1a4  add x13,x13,#0x10
7102fdd1a8  cmp x11,x13
7102fdd1ac  b.ne 0x7102fdd188
7102fdd1b0  mov x10,xzr
7102fdd1b4  sub x12,x11,x9
7102fdd1b8  lsr x11,x12,#0x4
7102fdd1bc  cbz w11,0x7102fdd1f0
7102fdd1c0  mov x11,xzr
7102fdd1c4  ubfx x12,x12,#0x4,#0x20
7102fdd1c8  mov w13,#0xffffffff
7102fdd1cc  ldr x14,[x9]
7102fdd1d0  cmp x14,x10
7102fdd1d4  b.eq 0x7102fdd1f4
7102fdd1d8  add x11,x11,#0x1
7102fdd1dc  add x9,x9,#0x10
7102fdd1e0  cmp x11,x12
7102fdd1e4  b.cc 0x7102fdd1cc
7102fdd1e8  mov w11,w13
7102fdd1ec  b 0x7102fdd1f4
7102fdd1f0  mov w11,#0xffffffff
7102fdd1f4  str w11,[x19, #0x850]
7102fdd1f8  ldp x10,x9,[x8, #0xd0]
7102fdd1fc  cmp x10,x9
7102fdd200  b.eq 0x7102fdd23c
7102fdd204  mov x12,#0x1932
7102fdd208  movk x12,#0xa01b, LSL #16
7102fdd20c  movk x12,#0xf, LSL #32
7102fdd210  mov x13,x10
7102fdd214  ldr w11,[x13, #0x8]
7102fdd218  cmp w11,#0x1
7102fdd21c  b.hi 0x7102fdd230
7102fdd220  ldr x11,[x13]
7102fdd224  ldr x14,[x11, #0x68]
7102fdd228  cmp x14,x12
7102fdd22c  b.eq 0x7102fdd240
7102fdd230  add x13,x13,#0x10
7102fdd234  cmp x9,x13
7102fdd238  b.ne 0x7102fdd214
7102fdd23c  mov x11,xzr
7102fdd240  sub x12,x9,x10
7102fdd244  lsr x9,x12,#0x4
7102fdd248  cbz w9,0x7102fdd27c
7102fdd24c  mov x9,xzr
7102fdd250  ubfx x12,x12,#0x4,#0x20
7102fdd254  mov w13,#0xffffffff
7102fdd258  ldr x14,[x10]
7102fdd25c  cmp x14,x11
7102fdd260  b.eq 0x7102fdd280
7102fdd264  add x9,x9,#0x1
7102fdd268  add x10,x10,#0x10
7102fdd26c  cmp x9,x12
7102fdd270  b.cc 0x7102fdd258
7102fdd274  mov w9,w13
7102fdd278  b 0x7102fdd280
7102fdd27c  mov w9,#0xffffffff
7102fdd280  str w9,[x19, #0x854]
7102fdd284  ldp x11,x10,[x8, #0xd0]
7102fdd288  cmp x11,x10
7102fdd28c  b.eq 0x7102fdd2c8
7102fdd290  mov x13,#0x1783
7102fdd294  movk x13,#0x376a, LSL #16
7102fdd298  movk x13,#0x10, LSL #32
7102fdd29c  mov x14,x11
7102fdd2a0  ldr w12,[x14, #0x8]
7102fdd2a4  cmp w12,#0x1
7102fdd2a8  b.hi 0x7102fdd2bc
7102fdd2ac  ldr x12,[x14]
7102fdd2b0  ldr x15,[x12, #0x68]
7102fdd2b4  cmp x15,x13
7102fdd2b8  b.eq 0x7102fdd2cc
7102fdd2bc  add x14,x14,#0x10
7102fdd2c0  cmp x10,x14
7102fdd2c4  b.ne 0x7102fdd2a0
7102fdd2c8  mov x12,xzr
7102fdd2cc  sub x10,x10,x11
7102fdd2d0  lsr x13,x10,#0x4
7102fdd2d4  cbz w13,0x7102fdd304
7102fdd2d8  mov x13,xzr
7102fdd2dc  ubfx x14,x10,#0x4,#0x20
7102fdd2e0  mov w10,#0xffffffff
7102fdd2e4  ldr x15,[x11]
7102fdd2e8  cmp x15,x12
7102fdd2ec  b.eq 0x7102fdd30c
7102fdd2f0  add x13,x13,#0x1
7102fdd2f4  add x11,x11,#0x10
7102fdd2f8  cmp x13,x14
7102fdd2fc  b.cc 0x7102fdd2e4
7102fdd300  b 0x7102fdd310
7102fdd304  mov w10,#0xffffffff
7102fdd308  b 0x7102fdd310
7102fdd30c  mov w10,w13
7102fdd310  str w10,[x19, #0x858]
7102fdd314  ldp x11,x12,[x8, #0x100]
7102fdd318  cmp x11,x12
7102fdd31c  b.eq 0x7102fdd350
7102fdd320  mov x13,#0xe9d3
7102fdd324  movk x13,#0xa5dc, LSL #16
7102fdd328  movk x13,#0x12, LSL #32
7102fdd32c  ldr w14,[x11, #0x8]
7102fdd330  cbnz w14,0x7102fdd344
7102fdd334  ldr x20,[x11]
7102fdd338  ldr x14,[x20, #0x8]
7102fdd33c  cmp x14,x13
7102fdd340  b.eq 0x7102fdd3cc
7102fdd344  add x11,x11,#0x10
7102fdd348  cmp x12,x11
7102fdd34c  b.ne 0x7102fdd32c
7102fdd350  mov x20,xzr
7102fdd354  mov x11,xzr
7102fdd358  cbz x11,0x7102fdd3d4
7102fdd35c  tbnz w9,#0x1f,0x7102fdd51c
7102fdd360  ldr x8,[x8, #0xd0]
7102fdd364  mov w9,w9
7102fdd368  lsl x9,x9,#0x4
7102fdd36c  ldr x21,[x8, x9, LSL #0x0]
7102fdd370  cbz x21,0x7102fdd438
7102fdd374  add x0,x21,#0x60
7102fdd378  mov x1,x20
7102fdd37c  bl 0x71025eaba0
7102fdd380  add x0,x21,#0x108
7102fdd384  strb wzr,[x21, #0x110]
7102fdd388  bl 0x71025e9d50
7102fdd38c  ldrb w8,[x21, #0xe0]
7102fdd390  cbz w8,0x7102fdd3a4
7102fdd394  ldr x8,[x21, #0xc8]
7102fdd398  cbz x8,0x7102fdd3a4
7102fdd39c  mov w9,#0x101
7102fdd3a0  strh w9,[x8, #0x30]
7102fdd3a4  ldr x8,[x21, #0xd8]
7102fdd3a8  cbz x8,0x7102fdd3b4
7102fdd3ac  mov w9,#0x1
7102fdd3b0  strb w9,[x8, #0x21]
7102fdd3b4  ldrb w8,[x21, #0xe0]
7102fdd3b8  cbz w8,0x7102fdd440
7102fdd3bc  ldr x9,[x21, #0xb0]
7102fdd3c0  mov w8,wzr
7102fdd3c4  strb wzr,[x9, #0x10]
7102fdd3c8  b 0x7102fdd440
7102fdd3cc  mov x11,x20
7102fdd3d0  cbnz x11,0x7102fdd35c
7102fdd3d4  tbnz w9,#0x1f,0x7102fdd6f0
7102fdd3d8  ldr x8,[x8, #0xd0]
7102fdd3dc  mov w9,w9
7102fdd3e0  lsl x9,x9,#0x4
7102fdd3e4  ldr x20,[x8, x9, LSL #0x0]
7102fdd3e8  cbz x20,0x7102fdd60c
7102fdd3ec  add x0,x20,#0x108
7102fdd3f0  strb wzr,[x20, #0x110]
7102fdd3f4  bl 0x71025e9d50
7102fdd3f8  ldrb w8,[x20, #0xe0]
7102fdd3fc  cbz w8,0x7102fdd410
7102fdd400  ldr x8,[x20, #0xc8]
7102fdd404  cbz x8,0x7102fdd410
7102fdd408  mov w9,#0x101
7102fdd40c  strh w9,[x8, #0x30]
7102fdd410  ldr x8,[x20, #0xd8]
7102fdd414  cbz x8,0x7102fdd420
7102fdd418  mov w9,#0x1
7102fdd41c  strb w9,[x8, #0x21]
7102fdd420  ldrb w8,[x20, #0xe0]
7102fdd424  cbz w8,0x7102fdd614
7102fdd428  ldr x9,[x20, #0xb0]
7102fdd42c  mov w8,wzr
7102fdd430  strb wzr,[x9, #0x10]
7102fdd434  b 0x7102fdd614
7102fdd438  cmp x21,#0x0
7102fdd43c  cset w8,eq
7102fdd440  fmov s0,0x41400000
7102fdd444  fmov s1,wzr
7102fdd448  adrp x9,0x7104468000
7102fdd44c  mov v1.S[0x1],v0.S[0x0]
7102fdd450  ldr q2,[x9, #0xca0]
7102fdd454  add x9,x19,#0x7b0
7102fdd458  ld1 {v1.S}[2],[x9]
7102fdd45c  fmov s0,0x3f800000
7102fdd460  mov v1.S[0x3],v0.S[0x0]
7102fdd464  adrp x9,0x710446a000
7102fdd468  ldr q0,[x9, #0x360]
7102fdd46c  movi v4.2D,#0x0
7102fdd470  adrp x9,0x7104468000
7102fdd474  ldr q3,[x9, #0xe90]
7102fdd478  fmla v2.4S,v4.4S,v1.4S
7102fdd47c  fmla v0.4S,v4.4S,v1.4S
7102fdd480  fmla v3.4S,v4.4S,v1.4S
7102fdd484  stp q2,q0,[sp]
7102fdd488  fadd v0.4S,v1.4S,v4.4S
7102fdd48c  stp q3,q0,[sp, #0x20]
7102fdd490  tbnz w8,#0x0,0x7102fdd518
7102fdd494  ldr x0,[x21, #0x90]
7102fdd498  ldr x8,[x0]
7102fdd49c  ldr x8,[x8, #0x148]
7102fdd4a0  mov x1,sp
7102fdd4a4  blr x8
7102fdd4a8  ldr x21,[x21, #0xd8]
7102fdd4ac  cbz x21,0x7102fdd518
7102fdd4b0  ldr x8,[sp, #0x18]
7102fdd4b4  str x8,[sp, #0x58]
7102fdd4b8  ldr x8,[sp, #0x10]
7102fdd4bc  str x8,[sp, #0x50]
7102fdd4c0  ldr x8,[sp, #0x8]
7102fdd4c4  str x8,[sp, #0x48]
7102fdd4c8  ldr x8,[sp]
7102fdd4cc  str x8,[sp, #0x40]
7102fdd4d0  ldr x8,[sp, #0x38]
7102fdd4d4  str x8,[sp, #0x78]
7102fdd4d8  ldr x8,[sp, #0x30]
7102fdd4dc  str x8,[sp, #0x70]
7102fdd4e0  ldr x8,[sp, #0x28]
7102fdd4e4  str x8,[sp, #0x68]
7102fdd4e8  ldr x8,[sp, #0x20]
7102fdd4ec  str x8,[sp, #0x60]
7102fdd4f0  ldr x8,[x21, #0x8]
7102fdd4f4  ldrb w9,[x8, #0xa8]
7102fdd4f8  cbz w9,0x7102fdd510
7102fdd4fc  ldr x0,[x8, #0x48]
7102fdd500  ldr x8,[x0]
7102fdd504  ldr x8,[x8, #0x20]
7102fdd508  add x1,sp,#0x40
7102fdd50c  blr x8
7102fdd510  mov w8,#0x1
7102fdd514  strb w8,[x21, #0x20]
7102fdd518  ldr w10,[x19, #0x858]
7102fdd51c  tbnz w10,#0x1f,0x7102fdd838
7102fdd520  ldr x8,[x19, #0x310]
7102fdd524  ldr x8,[x8, #0xd0]
7102fdd528  mov w9,w10
7102fdd52c  lsl x9,x9,#0x4
7102fdd530  ldr x21,[x8, x9, LSL #0x0]
7102fdd534  cbz x21,0x7102fdd590
7102fdd538  add x0,x21,#0x60
7102fdd53c  mov x1,x20
7102fdd540  bl 0x71025eaba0
7102fdd544  add x0,x21,#0x108
7102fdd548  strb wzr,[x21, #0x110]
7102fdd54c  bl 0x71025e9d50
7102fdd550  ldrb w8,[x21, #0xe0]
7102fdd554  cbz w8,0x7102fdd568
7102fdd558  ldr x8,[x21, #0xc8]
7102fdd55c  cbz x8,0x7102fdd568
7102fdd560  mov w9,#0x101
7102fdd564  strh w9,[x8, #0x30]
7102fdd568  ldr x8,[x21, #0xd8]
7102fdd56c  cbz x8,0x7102fdd578
7102fdd570  mov w9,#0x1
7102fdd574  strb w9,[x8, #0x21]
7102fdd578  ldrb w8,[x21, #0xe0]
7102fdd57c  cbz w8,0x7102fdd598
7102fdd580  ldr x9,[x21, #0xb0]
7102fdd584  mov w8,wzr
7102fdd588  strb wzr,[x9, #0x10]
7102fdd58c  b 0x7102fdd598
7102fdd590  cmp x21,#0x0
7102fdd594  cset w8,eq
7102fdd598  fmov s0,0x41400000
7102fdd59c  fmov s1,wzr
7102fdd5a0  adrp x9,0x7104468000
7102fdd5a4  mov v1.S[0x1],v0.S[0x0]
7102fdd5a8  ldr q2,[x9, #0xca0]
7102fdd5ac  add x9,x19,#0x7b0
7102fdd5b0  ld1 {v1.S}[2],[x9]
7102fdd5b4  fmov s0,0x3f800000
7102fdd5b8  mov v1.S[0x3],v0.S[0x0]
7102fdd5bc  adrp x9,0x710446a000
7102fdd5c0  ldr q0,[x9, #0x360]
7102fdd5c4  movi v4.2D,#0x0
7102fdd5c8  adrp x9,0x7104468000
7102fdd5cc  ldr q3,[x9, #0xe90]
7102fdd5d0  fmla v2.4S,v4.4S,v1.4S
7102fdd5d4  fmla v0.4S,v4.4S,v1.4S
7102fdd5d8  fmla v3.4S,v4.4S,v1.4S
7102fdd5dc  stp q2,q0,[sp]
7102fdd5e0  fadd v0.4S,v1.4S,v4.4S
7102fdd5e4  stp q3,q0,[sp, #0x20]
7102fdd5e8  tbnz w8,#0x0,0x7102fdd838
7102fdd5ec  ldr x0,[x21, #0x90]
7102fdd5f0  ldr x8,[x0]
7102fdd5f4  ldr x8,[x8, #0x148]
7102fdd5f8  mov x1,sp
7102fdd5fc  blr x8
7102fdd600  ldr x20,[x21, #0xd8]
7102fdd604  cbnz x20,0x7102fdd7d0
7102fdd608  b 0x7102fdd838
7102fdd60c  cmp x20,#0x0
7102fdd610  cset w8,eq
7102fdd614  fmov s0,0x41400000
7102fdd618  fmov s1,wzr
7102fdd61c  adrp x9,0x7104468000
7102fdd620  mov v1.S[0x1],v0.S[0x0]
7102fdd624  ldr q2,[x9, #0xca0]
7102fdd628  add x9,x19,#0x7b0
7102fdd62c  ld1 {v1.S}[2],[x9]
7102fdd630  fmov s0,0x3f800000
7102fdd634  mov v1.S[0x3],v0.S[0x0]
7102fdd638  adrp x9,0x710446a000
7102fdd63c  ldr q0,[x9, #0x360]
7102fdd640  movi v4.2D,#0x0
7102fdd644  adrp x9,0x7104468000
7102fdd648  ldr q3,[x9, #0xe90]
7102fdd64c  fmla v2.4S,v4.4S,v1.4S
7102fdd650  fmla v0.4S,v4.4S,v1.4S
7102fdd654  fmla v3.4S,v4.4S,v1.4S
7102fdd658  stp q2,q0,[sp]
7102fdd65c  fadd v0.4S,v1.4S,v4.4S
7102fdd660  stp q3,q0,[sp, #0x20]
7102fdd664  tbnz w8,#0x0,0x7102fdd6ec
7102fdd668  ldr x0,[x20, #0x90]
7102fdd66c  ldr x8,[x0]
7102fdd670  ldr x8,[x8, #0x148]
7102fdd674  mov x1,sp
7102fdd678  blr x8
7102fdd67c  ldr x20,[x20, #0xd8]
7102fdd680  cbz x20,0x7102fdd6ec
7102fdd684  ldr x8,[sp, #0x18]
7102fdd688  str x8,[sp, #0x58]
7102fdd68c  ldr x8,[sp, #0x10]
7102fdd690  str x8,[sp, #0x50]
7102fdd694  ldr x8,[sp, #0x8]
7102fdd698  str x8,[sp, #0x48]
7102fdd69c  ldr x8,[sp]
7102fdd6a0  str x8,[sp, #0x40]
7102fdd6a4  ldr x8,[sp, #0x38]
7102fdd6a8  str x8,[sp, #0x78]
7102fdd6ac  ldr x8,[sp, #0x30]
7102fdd6b0  str x8,[sp, #0x70]
7102fdd6b4  ldr x8,[sp, #0x28]
7102fdd6b8  str x8,[sp, #0x68]
7102fdd6bc  ldr x8,[sp, #0x20]
7102fdd6c0  str x8,[sp, #0x60]
7102fdd6c4  ldr x8,[x20, #0x8]
7102fdd6c8  ldrb w9,[x8, #0xa8]
7102fdd6cc  cbz w9,0x7102fdd6e4
7102fdd6d0  ldr x0,[x8, #0x48]
7102fdd6d4  ldr x8,[x0]
7102fdd6d8  ldr x8,[x8, #0x20]
7102fdd6dc  add x1,sp,#0x40
7102fdd6e0  blr x8
7102fdd6e4  mov w8,#0x1
7102fdd6e8  strb w8,[x20, #0x20]
7102fdd6ec  ldr w10,[x19, #0x858]
7102fdd6f0  tbnz w10,#0x1f,0x7102fdd838
7102fdd6f4  ldr x8,[x19, #0x310]
7102fdd6f8  ldr x8,[x8, #0xd0]
7102fdd6fc  mov w9,w10
7102fdd700  lsl x9,x9,#0x4
7102fdd704  ldr x20,[x8, x9, LSL #0x0]
7102fdd708  cbz x20,0x7102fdd758
7102fdd70c  add x0,x20,#0x108
7102fdd710  strb wzr,[x20, #0x110]
7102fdd714  bl 0x71025e9d50
7102fdd718  ldrb w8,[x20, #0xe0]
7102fdd71c  cbz w8,0x7102fdd730
7102fdd720  ldr x8,[x20, #0xc8]
7102fdd724  cbz x8,0x7102fdd730
7102fdd728  mov w9,#0x101
7102fdd72c  strh w9,[x8, #0x30]
7102fdd730  ldr x8,[x20, #0xd8]
7102fdd734  cbz x8,0x7102fdd740
7102fdd738  mov w9,#0x1
7102fdd73c  strb w9,[x8, #0x21]
7102fdd740  ldrb w8,[x20, #0xe0]
7102fdd744  cbz w8,0x7102fdd760
7102fdd748  ldr x9,[x20, #0xb0]
7102fdd74c  mov w8,wzr
7102fdd750  strb wzr,[x9, #0x10]
7102fdd754  b 0x7102fdd760
7102fdd758  cmp x20,#0x0
7102fdd75c  cset w8,eq
7102fdd760  fmov s0,0x41400000
7102fdd764  fmov s1,wzr
7102fdd768  adrp x9,0x7104468000
7102fdd76c  mov v1.S[0x1],v0.S[0x0]
7102fdd770  ldr q2,[x9, #0xca0]
7102fdd774  add x9,x19,#0x7b0
7102fdd778  ld1 {v1.S}[2],[x9]
7102fdd77c  fmov s0,0x3f800000
7102fdd780  mov v1.S[0x3],v0.S[0x0]
7102fdd784  adrp x9,0x710446a000
7102fdd788  ldr q0,[x9, #0x360]
7102fdd78c  movi v4.2D,#0x0
7102fdd790  adrp x9,0x7104468000
7102fdd794  ldr q3,[x9, #0xe90]
7102fdd798  fmla v2.4S,v4.4S,v1.4S
7102fdd79c  fmla v0.4S,v4.4S,v1.4S
7102fdd7a0  fmla v3.4S,v4.4S,v1.4S
7102fdd7a4  stp q2,q0,[sp]
7102fdd7a8  fadd v0.4S,v1.4S,v4.4S
7102fdd7ac  stp q3,q0,[sp, #0x20]
7102fdd7b0  tbnz w8,#0x0,0x7102fdd838
7102fdd7b4  ldr x0,[x20, #0x90]
7102fdd7b8  ldr x8,[x0]
7102fdd7bc  ldr x8,[x8, #0x148]
7102fdd7c0  mov x1,sp
7102fdd7c4  blr x8
7102fdd7c8  ldr x20,[x20, #0xd8]
7102fdd7cc  cbz x20,0x7102fdd838
7102fdd7d0  ldr x8,[sp, #0x18]
7102fdd7d4  str x8,[sp, #0x58]
7102fdd7d8  ldr x8,[sp, #0x10]
7102fdd7dc  str x8,[sp, #0x50]
7102fdd7e0  ldr x8,[sp, #0x8]
7102fdd7e4  str x8,[sp, #0x48]
7102fdd7e8  ldr x8,[sp]
7102fdd7ec  str x8,[sp, #0x40]
7102fdd7f0  ldr x8,[sp, #0x38]
7102fdd7f4  str x8,[sp, #0x78]
7102fdd7f8  ldr x8,[sp, #0x30]
7102fdd7fc  str x8,[sp, #0x70]
7102fdd800  ldr x8,[sp, #0x28]
7102fdd804  str x8,[sp, #0x68]
7102fdd808  ldr x8,[sp, #0x20]
7102fdd80c  str x8,[sp, #0x60]
7102fdd810  ldr x8,[x20, #0x8]
7102fdd814  ldrb w9,[x8, #0xa8]
7102fdd818  cbz w9,0x7102fdd830
7102fdd81c  ldr x0,[x8, #0x48]
7102fdd820  ldr x8,[x0]
7102fdd824  ldr x8,[x8, #0x20]
7102fdd828  add x1,sp,#0x40
7102fdd82c  blr x8
7102fdd830  mov w8,#0x1
7102fdd834  strb w8,[x20, #0x20]
7102fdd838  ldr w8,[x19, #0x844]
7102fdd83c  tbnz w8,#0x1f,0x7102fdd860
7102fdd840  ldr x9,[x19, #0x310]
7102fdd844  ldr x9,[x9, #0xd0]
7102fdd848  lsl x8,x8,#0x4
7102fdd84c  ldr x8,[x9, x8, LSL #0x0]
7102fdd850  cbz x8,0x7102fdd860
7102fdd854  add x0,x8,#0x108
7102fdd858  strb wzr,[x8, #0x110]
7102fdd85c  bl 0x71025e9d50
7102fdd860  ldr w8,[x19, #0x848]
7102fdd864  tbnz w8,#0x1f,0x7102fdd8c0
7102fdd868  ldr x9,[x19, #0x310]
7102fdd86c  ldr x9,[x9, #0xd0]
7102fdd870  lsl x8,x8,#0x4
7102fdd874  ldr x20,[x9, x8, LSL #0x0]
7102fdd878  cbz x20,0x7102fdd8c0
7102fdd87c  add x0,x20,#0x108
7102fdd880  strb wzr,[x20, #0x110]
7102fdd884  bl 0x71025e9d50
7102fdd888  ldrb w8,[x20, #0xe0]
7102fdd88c  cbz w8,0x7102fdd8a0
7102fdd890  ldr x8,[x20, #0xc8]
7102fdd894  cbz x8,0x7102fdd8a0
7102fdd898  mov w9,#0x101
7102fdd89c  strh w9,[x8, #0x30]
7102fdd8a0  ldr x8,[x20, #0xd8]
7102fdd8a4  cbz x8,0x7102fdd8b0
7102fdd8a8  mov w9,#0x1
7102fdd8ac  strb w9,[x8, #0x21]
7102fdd8b0  ldrb w8,[x20, #0xe0]
7102fdd8b4  cbz w8,0x7102fdd8c0
7102fdd8b8  ldr x8,[x20, #0xb0]
7102fdd8bc  strb wzr,[x8, #0x10]
7102fdd8c0  ldr x9,[x19, #0x310]
7102fdd8c4  ldp x8,x10,[x9, #0xd0]
7102fdd8c8  mov x21,#0xdc64
7102fdd8cc  movk x21,#0x6ea2, LSL #16
7102fdd8d0  movk x21,#0x14, LSL #32
7102fdd8d4  cmp x8,x10
7102fdd8d8  b.eq 0x7102fdd908
7102fdd8dc  mov x11,x8
7102fdd8e0  ldr w9,[x11, #0x8]
7102fdd8e4  cmp w9,#0x1
7102fdd8e8  b.hi 0x7102fdd8fc
7102fdd8ec  ldr x9,[x11]
7102fdd8f0  ldr x12,[x9, #0x68]
7102fdd8f4  cmp x12,x21
7102fdd8f8  b.eq 0x7102fdd90c
7102fdd8fc  add x11,x11,#0x10
7102fdd900  cmp x10,x11
7102fdd904  b.ne 0x7102fdd8e0
7102fdd908  mov x9,xzr
7102fdd90c  sub x10,x10,x8
7102fdd910  lsr x11,x10,#0x4
7102fdd914  cbz w11,0x7102fdd944
7102fdd918  mov x11,xzr
7102fdd91c  ubfx x12,x10,#0x4,#0x20
7102fdd920  mov w10,#0xffffffff
7102fdd924  ldr x13,[x8]
7102fdd928  cmp x13,x9
7102fdd92c  b.eq 0x7102fdd94c
7102fdd930  add x11,x11,#0x1
7102fdd934  add x8,x8,#0x10
7102fdd938  cmp x11,x12
7102fdd93c  b.cc 0x7102fdd924
7102fdd940  b 0x7102fdd950
7102fdd944  mov w10,#0xffffffff
7102fdd948  b 0x7102fdd950
7102fdd94c  mov w10,w11
7102fdd950  str w10,[x19, #0x7f0]
7102fdd954  ldr x10,[x19, #0x340]
7102fdd958  ldrb w9,[x19, #0x18]
7102fdd95c  ldp w8,w11,[x10]
7102fdd960  eor w8,w8,w8, LSL #0xb
7102fdd964  str w11,[x10]
7102fdd968  ldp w11,w12,[x10, #0x8]
7102fdd96c  eor w8,w8,w8, LSR #0x8
7102fdd970  eor w8,w8,w12
7102fdd974  eor w8,w8,w12, LSR #0x13
7102fdd978  stp w11,w12,[x10, #0x4]
7102fdd97c  str w8,[x10, #0xc]
7102fdd980  cbz w9,0x7102fdd9fc
7102fdd984  and w8,w8,#0x3
7102fdd988  str w8,[x19, #0x7f4]
7102fdd98c  ldr x8,[x19, #0x340]
7102fdd990  str wzr,[x19, #0x7f8]
7102fdd994  ldp w9,w10,[x8]
7102fdd998  eor w9,w9,w9, LSL #0xb
7102fdd99c  str w10,[x8]
7102fdd9a0  eor w9,w9,w9, LSR #0x8
7102fdd9a4  ldp w10,w11,[x8, #0x8]
7102fdd9a8  eor w9,w9,w11
7102fdd9ac  eor w9,w9,w11, LSR #0x13
7102fdd9b0  stp w10,w11,[x8, #0x4]
7102fdd9b4  str w9,[x8, #0xc]
7102fdd9b8  and w8,w9,#0x3
7102fdd9bc  str w8,[x19, #0x80c]
7102fdd9c0  ldr x8,[x19, #0x340]
7102fdd9c4  str wzr,[x19, #0x810]
7102fdd9c8  ldp w9,w10,[x8]
7102fdd9cc  str w10,[x8]
7102fdd9d0  ldp w10,w11,[x8, #0x8]
7102fdd9d4  eor w9,w9,w9, LSL #0xb
7102fdd9d8  eor w9,w9,w9, LSR #0x8
7102fdd9dc  eor w9,w9,w11
7102fdd9e0  eor w9,w9,w11, LSR #0x13
7102fdd9e4  stp w10,w11,[x8, #0x4]
7102fdd9e8  str w9,[x8, #0xc]
7102fdd9ec  and w8,w9,#0x3
7102fdd9f0  str w8,[x19, #0x824]
7102fdd9f4  str wzr,[x19, #0x828]
7102fdd9f8  b 0x7102fddb90
7102fdd9fc  adrp x9,0x710455c000
7102fdda00  add x9,x9,#0x334
7102fdda04  ldr w10,[x9, #0x8]
7102fdda08  ldr x9,[x9]
7102fdda0c  str w10,[sp, #0x48]
7102fdda10  str x9,[sp, #0x40]
7102fdda14  ldr x9,[x19, #0x340]
7102fdda18  ldp w10,w11,[x9]
7102fdda1c  eor w10,w10,w10, LSL #0xb
7102fdda20  str w11,[x9]
7102fdda24  eor w10,w10,w10, LSR #0x8
7102fdda28  ldp w11,w12,[x9, #0x8]
7102fdda2c  eor w10,w10,w12
7102fdda30  eor w10,w10,w12, LSR #0x13
7102fdda34  stp w11,w12,[x9, #0x4]
7102fdda38  str w10,[x9, #0xc]
7102fdda3c  mov w9,#0xaaab
7102fdda40  movk w9,#0xaaaa, LSL #16
7102fdda44  umull x9,w10,w9
7102fdda48  lsr x9,x9,#0x21
7102fdda4c  add w9,w9,w9, LSL #0x1
7102fdda50  sub w9,w10,w9
7102fdda54  add x10,sp,#0x40
7102fdda58  lsl x9,x9,#0x2
7102fdda5c  ldr w11,[x10, x9, LSL #0x0]
7102fdda60  str w11,[sp, #0x40]
7102fdda64  str wzr,[x10, x9, LSL #0x0]
7102fdda68  orr x9,x10,#0x4
7102fdda6c  ldr x10,[x19, #0x340]
7102fdda70  ldp w11,w12,[x10]
7102fdda74  eor w11,w11,w11, LSL #0xb
7102fdda78  str w12,[x10]
7102fdda7c  eor w11,w11,w11, LSR #0x8
7102fdda80  ldp w12,w13,[x10, #0x8]
7102fdda84  eor w11,w11,w13
7102fdda88  eor w11,w11,w13, LSR #0x13
7102fdda8c  stp w12,w13,[x10, #0x4]
7102fdda90  str w11,[x10, #0xc]
7102fdda94  and w10,w11,#0x1
7102fdda98  lsl x10,x10,#0x2
7102fdda9c  ldr w11,[sp, #0x44]
7102fddaa0  ldr w12,[x9, x10, LSL #0x0]
7102fddaa4  str w12,[sp, #0x44]
7102fddaa8  str w11,[x9, x10, LSL #0x0]
7102fddaac  ldr x10,[x19, #0x340]
7102fddab0  ldp w11,w12,[x10]
7102fddab4  mov w9,#0x2
7102fddab8  bfxil w9,w8,#0x0,#0x1
7102fddabc  ldr w8,[sp, #0x40]
7102fddac0  str w12,[x10]
7102fddac4  eor w11,w11,w11, LSL #0xb
7102fddac8  ldp w12,w13,[x10, #0x8]
7102fddacc  stp w12,w13,[x10, #0x4]
7102fddad0  eor w11,w11,w11, LSR #0x8
7102fddad4  eor w11,w11,w13
7102fddad8  eor w11,w11,w13, LSR #0x13
7102fddadc  str w11,[x10, #0xc]
7102fddae0  and w10,w11,#0x3
7102fddae4  orr w11,wzr,#0x18
7102fddae8  add x12,x19,#0x7f0
7102fddaec  madd x8,x8,x11,x12
7102fddaf0  stp w10,wzr,[x8, #0x4]
7102fddaf4  ldr x10,[x19, #0x340]
7102fddaf8  ldr w8,[sp, #0x44]
7102fddafc  ldp w13,w14,[x10]
7102fddb00  str w14,[x10]
7102fddb04  ldp w14,w15,[x10, #0x8]
7102fddb08  eor w13,w13,w13, LSL #0xb
7102fddb0c  eor w13,w13,w13, LSR #0x8
7102fddb10  madd x8,x8,x11,x12
7102fddb14  eor w13,w13,w15
7102fddb18  eor w13,w13,w15, LSR #0x13
7102fddb1c  stp w14,w15,[x10, #0x4]
7102fddb20  str w13,[x10, #0xc]
7102fddb24  and w10,w13,#0x3
7102fddb28  stp w10,wzr,[x8, #0x4]
7102fddb2c  ldr w8,[sp, #0x48]
7102fddb30  cmp w9,#0x2
7102fddb34  b.ne 0x7102fddb54
7102fddb38  orr w9,wzr,#0x18
7102fddb3c  madd x8,x8,x9,x19
7102fddb40  mov w9,#0x4
7102fddb44  str w9,[x8, #0x7f4]
7102fddb48  ldr w9,[x19, #0x75c]
7102fddb4c  str w9,[x8, #0x7f8]
7102fddb50  b 0x7102fddb90
7102fddb54  ldr x9,[x19, #0x340]
7102fddb58  ldp w10,w11,[x9]
7102fddb5c  str w11,[x9]
7102fddb60  ldp w11,w12,[x9, #0x8]
7102fddb64  eor w10,w10,w10, LSL #0xb
7102fddb68  eor w10,w10,w10, LSR #0x8
7102fddb6c  eor w10,w10,w12
7102fddb70  eor w10,w10,w12, LSR #0x13
7102fddb74  stp w11,w12,[x9, #0x4]
7102fddb78  str w10,[x9, #0xc]
7102fddb7c  and w9,w10,#0x3
7102fddb80  orr w10,wzr,#0x18
7102fddb84  madd x8,x8,x10,x19
7102fddb88  str w9,[x8, #0x7f4]
7102fddb8c  str wzr,[x8, #0x7f8]
7102fddb90  ldr s0,[x19, #0x764]
7102fddb94  ucvtf s0,s0
7102fddb98  orr w8,wzr,#0x3
7102fddb9c  str w8,[x19, #0x8a8]
7102fddba0  ldrb w8,[x19, #0xc8]
7102fddba4  str s0,[x19, #0x8ac]
7102fddba8  cbz w8,0x7102fddd88
7102fddbac  ldr x8,[x19, #0x310]
7102fddbb0  ldr x20,[x8, #0x118]
7102fddbb4  cbz x20,0x7102fddd88
7102fddbb8  ldr w8,[x19, #0x7f4]
7102fddbbc  cmp w8,#0x3
7102fddbc0  b.hi 0x7102fddc2c
7102fddbc4  adrp x9,0x710455c000
7102fddbc8  add x9,x9,#0x2e8
7102fddbcc  add x8,x9,x8, LSL #0x2
7102fddbd0  adrp x9,0x7104472000
7102fddbd4  ldr s0,[x9, #0x2c8]
7102fddbd8  fmov s1,wzr
7102fddbdc  ld1 {v0.S}[1],[x8]
7102fddbe0  adrp x1,0x71043ee000
7102fddbe4  add x1,x1,#0xf24
7102fddbe8  mov v0.S[0x2],v1.S[0x0]
7102fddbec  mov v0.S[0x3],v1.S[0x0]
7102fddbf0  add x2,sp,#0x40
7102fddbf4  mov x0,x20
7102fddbf8  str q0,[sp, #0x40]
7102fddbfc  bl 0x710261f570
7102fddc00  ldr x8,[x20]
7102fddc04  ldrb w9,[x8, #0x80]
7102fddc08  cbz w9,0x7102fddc58
7102fddc0c  ldr x0,[x8, #0x30]
7102fddc10  ldr x8,[x0]
7102fddc14  ldr x8,[x8, #0x180]
7102fddc18  mov x1,#0xf8ed
7102fddc1c  movk x1,#0xb63a, LSL #16
7102fddc20  movk x1,#0xc, LSL #32
7102fddc24  mov w2,#0x1
7102fddc28  b 0x7102fddc54
7102fddc2c  ldr x8,[x20]
7102fddc30  ldrb w9,[x8, #0x80]
7102fddc34  cbz w9,0x7102fddc58
7102fddc38  ldr x0,[x8, #0x30]
7102fddc3c  ldr x8,[x0]
7102fddc40  ldr x8,[x8, #0x180]
7102fddc44  mov x1,#0xf8ed
7102fddc48  movk x1,#0xb63a, LSL #16
7102fddc4c  movk x1,#0xc, LSL #32
7102fddc50  mov w2,wzr
7102fddc54  blr x8
7102fddc58  ldr w8,[x19, #0x80c]
7102fddc5c  cmp w8,#0x4
7102fddc60  b.cs 0x7102fddcbc
7102fddc64  adrp x9,0x710455c000
7102fddc68  add x9,x9,#0x2e8
7102fddc6c  movi v0.2D,#0x0
7102fddc70  add x8,x9,x8, LSL #0x2
7102fddc74  ld1 {v0.S}[1],[x8]
7102fddc78  adrp x1,0x71042f6000
7102fddc7c  add x1,x1,#0x317
7102fddc80  add x2,sp,#0x40
7102fddc84  mov x0,x20
7102fddc88  str q0,[sp, #0x40]
7102fddc8c  bl 0x710261f570
7102fddc90  ldr x8,[x20]
7102fddc94  ldrb w9,[x8, #0x80]
7102fddc98  cbz w9,0x7102fddce8
7102fddc9c  ldr x0,[x8, #0x30]
7102fddca0  ldr x8,[x0]
7102fddca4  ldr x8,[x8, #0x180]
7102fddca8  mov x1,#0x4b8a
7102fddcac  movk x1,#0x5dd1, LSL #16
7102fddcb0  movk x1,#0xd, LSL #32
7102fddcb4  mov w2,#0x1
7102fddcb8  b 0x7102fddce4
7102fddcbc  ldr x8,[x20]
7102fddcc0  ldrb w9,[x8, #0x80]
7102fddcc4  cbz w9,0x7102fddce8
7102fddcc8  ldr x0,[x8, #0x30]
7102fddccc  ldr x8,[x0]
7102fddcd0  ldr x8,[x8, #0x180]
7102fddcd4  mov x1,#0x4b8a
7102fddcd8  movk x1,#0x5dd1, LSL #16
7102fddcdc  movk x1,#0xd, LSL #32
7102fddce0  mov w2,wzr
7102fddce4  blr x8
7102fddce8  ldr w8,[x19, #0x824]
7102fddcec  cmp w8,#0x4
7102fddcf0  b.cs 0x7102fddd5c
7102fddcf4  adrp x9,0x710455c000
7102fddcf8  add x9,x9,#0x2e8
7102fddcfc  add x8,x9,x8, LSL #0x2
7102fddd00  adrp x9,0x7104472000
7102fddd04  ldr s0,[x9, #0x4a4]
7102fddd08  fmov s1,wzr
7102fddd0c  ld1 {v0.S}[1],[x8]
7102fddd10  adrp x1,0x7104420000
7102fddd14  add x1,x1,#0x8e1
7102fddd18  mov v0.S[0x2],v1.S[0x0]
7102fddd1c  mov v0.S[0x3],v1.S[0x0]
7102fddd20  add x2,sp,#0x40
7102fddd24  mov x0,x20
7102fddd28  str q0,[sp, #0x40]
7102fddd2c  bl 0x710261f570
7102fddd30  ldr x8,[x20]
7102fddd34  ldrb w9,[x8, #0x80]
7102fddd38  cbz w9,0x7102fddd88
7102fddd3c  ldr x0,[x8, #0x30]
7102fddd40  ldr x8,[x0]
7102fddd44  ldr x8,[x8, #0x180]
7102fddd48  mov x1,#0x1a30
7102fddd4c  movk x1,#0xc4d8, LSL #16
7102fddd50  movk x1,#0xd, LSL #32
7102fddd54  mov w2,#0x1
7102fddd58  b 0x7102fddd84
7102fddd5c  ldr x8,[x20]
7102fddd60  ldrb w9,[x8, #0x80]
7102fddd64  cbz w9,0x7102fddd88
7102fddd68  ldr x0,[x8, #0x30]
7102fddd6c  ldr x8,[x0]
7102fddd70  ldr x8,[x8, #0x180]
7102fddd74  mov x1,#0x1a30
7102fddd78  movk x1,#0xc4d8, LSL #16
7102fddd7c  movk x1,#0xd, LSL #32
7102fddd80  mov w2,wzr
7102fddd84  blr x8
7102fddd88  mov w8,#0x1
7102fddd8c  str w8,[x19, #0x8b0]
7102fddd90  str xzr,[sp, #0x40]
7102fddd94  ldr x8,[x19, #0x338]
7102fddd98  ldr x8,[x8]
7102fddd9c  ldr x0,[x8, #0x8]
7102fddda0  cbz x0,0x7102fdddb4
7102fddda4  add x1,sp,#0x40
7102fddda8  mov w2,wzr
7102fdddac  bl 0x7102405040
7102fdddb0  b 0x7102fdddb8
7102fdddb4  mov w0,#0xffffffff
7102fdddb8  str w0,[x19, #0x8c8]
7102fdddbc  ldr x0,[x19, #0x310]
7102fdddc0  str wzr,[x19, #0x8bc]
7102fdddc4  ldp x1,x8,[x0, #0xd0]
7102fdddc8  sub x9,x8,x1
7102fdddcc  lsr x20,x9,#0x4
7102fdddd0  cmp x1,x8
7102fdddd4  b.eq 0x7102fdde0c
7102fdddd8  ldr w9,[x1, #0x8]
7102fddddc  cmp w9,#0x1
7102fddde0  b.hi 0x7102fdddf4
7102fddde4  ldr x9,[x1]
7102fddde8  ldr x9,[x9, #0x68]
7102fdddec  cmp x9,x21
7102fdddf0  b.eq 0x7102fdde04
7102fdddf4  add x1,x1,#0x10
7102fdddf8  cmp x8,x1
7102fdddfc  b.ne 0x7102fdddd8
7102fdde00  b 0x7102fdde0c
7102fdde04  bl 0x710262fb80
7102fdde08  ldr x0,[x19, #0x310]
7102fdde0c  str w20,[x19, #0x808]
7102fdde10  ldp x1,x8,[x0, #0xd0]
7102fdde14  add w22,w20,#0x1
7102fdde18  cmp x1,x8
7102fdde1c  b.eq 0x7102fdde50
7102fdde20  ldr w9,[x1, #0x8]
7102fdde24  cmp w9,#0x1
7102fdde28  b.hi 0x7102fdde3c
7102fdde2c  ldr x9,[x1]
7102fdde30  ldr x9,[x9, #0x68]
7102fdde34  cmp x9,x21
7102fdde38  b.eq 0x7102fdde4c
7102fdde3c  add x1,x1,#0x10
7102fdde40  cmp x8,x1
7102fdde44  b.ne 0x7102fdde20
7102fdde48  b 0x7102fdde50
7102fdde4c  bl 0x710262fb80
7102fdde50  ldr x8,[x19, #0x300]
7102fdde54  str w22,[x19, #0x820]
7102fdde58  ldr x9,[x8, #0x18]
7102fdde5c  ldp x8,x9,[x9]
7102fdde60  cmp x8,x9
7102fdde64  b.eq 0x7102fdded4
7102fdde68  mov x10,#0xdf99
7102fdde6c  movk x10,#0xb569, LSL #16
7102fdde70  movk x10,#0x7, LSL #32
7102fdde74  ldr x11,[x8], #0x8
7102fdde78  ldr x12,[x11, #0xa0]
7102fdde7c  and x12,x12,#0xffffffffff
7102fdde80  cmp x12,x10
7102fdde84  b.eq 0x7102fdde94
7102fdde88  cmp x9,x8
7102fdde8c  b.ne 0x7102fdde74
7102fdde90  b 0x7102fdded4
7102fdde94  cbz x11,0x7102fdded4
7102fdde98  ldr x20,[x11, #0x130]
7102fdde9c  cbz x20,0x7102fdded4
7102fddea0  adrp x8,0x7105314000
7102fddea4  add x8,x8,#0x4d8
7102fddea8  ldarb w8,[x8]
7102fddeac  tbz w8,#0x0,0x7102fddf98
7102fddeb0  adrp x8,0x71052c5000
7102fddeb4  ldrb w8,[x8, #0x1ba]
7102fddeb8  adrp x2,0x71043bc000
7102fddebc  add x2,x2,#0xb6c
7102fddec0  ldp x0,x1,[x20]
7102fddec4  cbz w8,0x7102fdded0
7102fddec8  bl 0x71025f5420
7102fddecc  b 0x7102fdded4
7102fdded0  bl 0x71025f55b0
7102fdded4  ldr x8,[x19, #0x308]
7102fdded8  ldp w21,w22,[x8, #0xf8]
7102fddedc  ldr w23,[x8, #0x100]
7102fddee0  mov w1,#0x24
7102fddee4  mov w0,#0x10
7102fddee8  bl 0x710392e290
7102fddeec  mov x20,x0
7102fddef0  cbnz x0,0x7102fddf3c
7102fddef4  adrp x8,0x7105332000
7102fddef8  ldr x0,[x8, #0xf00]
7102fddefc  cbz x0,0x7102fddf38
7102fddf00  mov w8,#0x24
7102fddf04  str wzr,[sp]
7102fddf08  mov x1,sp
7102fddf0c  str x8,[sp, #0x40]
7102fddf10  ldr x8,[x0]
7102fddf14  ldr x8,[x8, #0x30]
7102fddf18  add x2,sp,#0x40
7102fddf1c  blr x8
7102fddf20  tbz w0,#0x0,0x7102fddf38
7102fddf24  mov w1,#0x24
7102fddf28  mov w0,#0x10
7102fddf2c  bl 0x710392e290
7102fddf30  mov x20,x0
7102fddf34  cbnz x0,0x7102fddf3c
7102fddf38  mov x20,xzr
7102fddf3c  mov w8,#0xc1800000
7102fddf40  add x1,sp,#0x40
7102fddf44  mov x0,x20
7102fddf48  stur xzr,[x20, #0x1c]
7102fddf4c  stur xzr,[x20, #0x14]
7102fddf50  stur xzr,[x20, #0xc]
7102fddf54  stur xzr,[x20, #0x4]
7102fddf58  stp w21,w22,[sp, #0x40]
7102fddf5c  stp w23,w8,[sp, #0x48]
7102fddf60  bl 0x710318b620
7102fddf64  ldr x21,[x19, #0x8f0]
7102fddf68  str x20,[x19, #0x8f0]
7102fddf6c  cbz x21,0x7102fddf80
7102fddf70  mov x0,x21
7102fddf74  bl 0x710318b9b0
7102fddf78  mov x0,x21
7102fddf7c  bl 0x710392eb40
7102fddf80  ldp x29,x30,[sp, #0xb0]
7102fddf84  ldr x23,[sp, #0x80]
7102fddf88  ldp x20,x19,[sp, #0xa0]
7102fddf8c  ldp x22,x21,[sp, #0x90]
7102fddf90  add sp,sp,#0xc0
7102fddf94  ret
7102fddf98  adrp x0,0x7105314000
7102fddf9c  add x0,x0,#0x4d8
7102fddfa0  bl 0x71039c06b0
7102fddfa4  cbz w0,0x7102fddeb0
7102fddfa8  bl 0x7101764000
7102fddfac  adrp x0,0x7101763000
7102fddfb0  add x0,x0,#0xc40
7102fddfb4  adrp x1,0x71052c5000
7102fddfb8  add x1,x1,#0x180
7102fddfbc  adrp x2,0x7104f17000
7102fddfc0  add x2,x2,#0x0
7102fddfc4  bl 0x71000001c0
7102fddfc8  adrp x0,0x7105314000
7102fddfcc  add x0,x0,#0x4d8
7102fddfd0  bl 0x71039c06c0
7102fddfd4  b 0x7102fddeb0
7102fddfd8  bl 0x71039c2650
