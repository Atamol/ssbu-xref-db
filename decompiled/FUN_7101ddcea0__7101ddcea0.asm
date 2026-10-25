// addr:      7101ddcea0
// offset:    0x1ddcea0
// name:      FUN_7101ddcea0
// mangled:   
// size:      1232

7101ddcea0  sub sp,sp,#0x80
7101ddcea4  stp x24,x23,[sp, #0x40]
7101ddcea8  stp x22,x21,[sp, #0x50]
7101ddceac  stp x20,x19,[sp, #0x60]
7101ddceb0  stp x29,x30,[sp, #0x70]
7101ddceb4  add x29,sp,#0x70
7101ddceb8  add x20,x0,#0x18
7101ddcebc  mov x19,x0
7101ddcec0  adrp x1,0x7104401000
7101ddcec4  add x1,x1,#0xdad
7101ddcec8  add x8,sp,#0x30
7101ddcecc  mov x0,x20
7101ddced0  bl 0x7103776640
7101ddced4  adrp x1,0x7104338000
7101ddced8  add x1,x1,#0xd31
7101ddcedc  add x8,sp,#0x20
7101ddcee0  mov x0,x20
7101ddcee4  bl 0x7103776910
7101ddcee8  ldr w8,[x19, #0xb4]
7101ddceec  cmp w8,#0x2
7101ddcef0  b.eq 0x7101ddcf24
7101ddcef4  cmp w8,#0x1
7101ddcef8  b.eq 0x7101ddcf48
7101ddcefc  cbnz w8,0x7101ddd354
7101ddcf00  ldr x19,[sp, #0x28]
7101ddcf04  ldr x8,[x19]
7101ddcf08  cbz x8,0x7101ddcf18
7101ddcf0c  ldrb w9,[x8, #0x58]
7101ddcf10  orr w9,w9,#0x1
7101ddcf14  strb w9,[x8, #0x58]
7101ddcf18  adrp x1,0x71043cf000
7101ddcf1c  add x1,x1,#0x8fb
7101ddcf20  b 0x7101ddcf68
7101ddcf24  ldr x19,[sp, #0x28]
7101ddcf28  ldr x8,[x19]
7101ddcf2c  cbz x8,0x7101ddcf3c
7101ddcf30  ldrb w9,[x8, #0x58]
7101ddcf34  orr w9,w9,#0x1
7101ddcf38  strb w9,[x8, #0x58]
7101ddcf3c  adrp x1,0x710434a000
7101ddcf40  add x1,x1,#0x853
7101ddcf44  b 0x7101ddcf68
7101ddcf48  ldr x19,[sp, #0x28]
7101ddcf4c  ldr x8,[x19]
7101ddcf50  cbz x8,0x7101ddcf60
7101ddcf54  ldrb w9,[x8, #0x58]
7101ddcf58  orr w9,w9,#0x1
7101ddcf5c  strb w9,[x8, #0x58]
7101ddcf60  adrp x1,0x71043e0000
7101ddcf64  add x1,x1,#0x658
7101ddcf68  add x0,sp,#0x20
7101ddcf6c  bl 0x710377a120
7101ddcf70  adrp x24,0x7105314000
7101ddcf74  ldr x8,[x24, #0x510]
7101ddcf78  ldr x8,[x8]
7101ddcf7c  ldr x8,[x8, #0xd8]
7101ddcf80  ldr x8,[x8]
7101ddcf84  ldr x8,[x8]
7101ddcf88  ldrh w21,[x8, #0xe]
7101ddcf8c  adrp x1,0x7104433000
7101ddcf90  add x1,x1,#0x590
7101ddcf94  add x8,sp,#0x10
7101ddcf98  mov x0,x20
7101ddcf9c  bl 0x7103776640
7101ddcfa0  adrp x1,0x7104308000
7101ddcfa4  add x1,x1,#0xa37
7101ddcfa8  mov x8,sp
7101ddcfac  add x0,sp,#0x10
7101ddcfb0  bl 0x7103776910
7101ddcfb4  adrp x1,0x71042a3000
7101ddcfb8  add x1,x1,#0x504
7101ddcfbc  mov x0,sp
7101ddcfc0  mov w2,#0x1
7101ddcfc4  mov w3,w21
7101ddcfc8  bl 0x710377a280
7101ddcfcc  ldr x0,[sp, #0x8]
7101ddcfd0  adrp x22,0x710523d000
7101ddcfd4  add x22,x22,#0x9a8
7101ddcfd8  stp x22,xzr,[sp]
7101ddcfdc  cbz x0,0x7101ddcfe4
7101ddcfe0  bl 0x710392eb40
7101ddcfe4  adrp x1,0x710425f000
7101ddcfe8  add x1,x1,#0x996
7101ddcfec  mov x8,sp
7101ddcff0  add x0,sp,#0x10
7101ddcff4  bl 0x7103776640
7101ddcff8  ldr x21,[sp, #0x8]
7101ddcffc  fmov s0,0x3f800000
7101ddd000  adrp x1,0x710437c000
7101ddd004  add x1,x1,#0xa5d
7101ddd008  mov x0,x21
7101ddd00c  bl 0x7103778300
7101ddd010  adrp x23,0x710523d000
7101ddd014  add x23,x23,#0x988
7101ddd018  stp x23,xzr,[sp]
7101ddd01c  cbz x21,0x7101ddd038
7101ddd020  ldr x0,[x21, #0x18]
7101ddd024  stp x22,xzr,[x21, #0x10]
7101ddd028  cbz x0,0x7101ddd030
7101ddd02c  bl 0x710392eb40
7101ddd030  mov x0,x21
7101ddd034  bl 0x710392eb40
7101ddd038  adrp x1,0x71042c5000
7101ddd03c  add x1,x1,#0x423
7101ddd040  mov x8,sp
7101ddd044  add x0,sp,#0x10
7101ddd048  bl 0x7103776640
7101ddd04c  ldr x21,[sp, #0x8]
7101ddd050  ldr x8,[x21, #0x8]
7101ddd054  cbz x8,0x7101ddd06c
7101ddd058  ldr x8,[x8, #0x18]
7101ddd05c  cbz x8,0x7101ddd06c
7101ddd060  ldrb w9,[x8, #0x58]
7101ddd064  and w9,w9,#0xfe
7101ddd068  strb w9,[x8, #0x58]
7101ddd06c  stp x23,xzr,[sp]
7101ddd070  cbz x21,0x7101ddd08c
7101ddd074  ldr x0,[x21, #0x18]
7101ddd078  stp x22,xzr,[x21, #0x10]
7101ddd07c  cbz x0,0x7101ddd084
7101ddd080  bl 0x710392eb40
7101ddd084  mov x0,x21
7101ddd088  bl 0x710392eb40
7101ddd08c  ldr x21,[sp, #0x18]
7101ddd090  stp x23,xzr,[sp, #0x10]
7101ddd094  cbz x21,0x7101ddd0b0
7101ddd098  ldr x0,[x21, #0x18]
7101ddd09c  stp x22,xzr,[x21, #0x10]
7101ddd0a0  cbz x0,0x7101ddd0a8
7101ddd0a4  bl 0x710392eb40
7101ddd0a8  mov x0,x21
7101ddd0ac  bl 0x710392eb40
7101ddd0b0  ldr x8,[x24, #0x510]
7101ddd0b4  ldr x8,[x8]
7101ddd0b8  ldr x8,[x8, #0xd8]
7101ddd0bc  ldr x8,[x8]
7101ddd0c0  ldr x8,[x8]
7101ddd0c4  ldrh w21,[x8, #0x10]
7101ddd0c8  adrp x1,0x7104280000
7101ddd0cc  add x1,x1,#0xfd4
7101ddd0d0  add x8,sp,#0x10
7101ddd0d4  mov x0,x20
7101ddd0d8  bl 0x7103776640
7101ddd0dc  adrp x1,0x7104308000
7101ddd0e0  add x1,x1,#0xa37
7101ddd0e4  mov x8,sp
7101ddd0e8  add x0,sp,#0x10
7101ddd0ec  bl 0x7103776910
7101ddd0f0  adrp x1,0x7104401000
7101ddd0f4  add x1,x1,#0xa00
7101ddd0f8  mov x0,sp
7101ddd0fc  mov w2,#0x1
7101ddd100  mov w3,w21
7101ddd104  bl 0x710377a280
7101ddd108  ldr x0,[sp, #0x8]
7101ddd10c  stp x22,xzr,[sp]
7101ddd110  cbz x0,0x7101ddd118
7101ddd114  bl 0x710392eb40
7101ddd118  adrp x1,0x710425f000
7101ddd11c  add x1,x1,#0x996
7101ddd120  mov x8,sp
7101ddd124  add x0,sp,#0x10
7101ddd128  bl 0x7103776640
7101ddd12c  ldr x21,[sp, #0x8]
7101ddd130  fmov s0,0x3f800000
7101ddd134  adrp x1,0x710434a000
7101ddd138  add x1,x1,#0x86d
7101ddd13c  mov x0,x21
7101ddd140  bl 0x7103778300
7101ddd144  stp x23,xzr,[sp]
7101ddd148  cbz x21,0x7101ddd164
7101ddd14c  ldr x0,[x21, #0x18]
7101ddd150  stp x22,xzr,[x21, #0x10]
7101ddd154  cbz x0,0x7101ddd15c
7101ddd158  bl 0x710392eb40
7101ddd15c  mov x0,x21
7101ddd160  bl 0x710392eb40
7101ddd164  adrp x1,0x71042c5000
7101ddd168  add x1,x1,#0x423
7101ddd16c  mov x8,sp
7101ddd170  add x0,sp,#0x10
7101ddd174  bl 0x7103776640
7101ddd178  ldr x21,[sp, #0x8]
7101ddd17c  ldr x8,[x21, #0x8]
7101ddd180  cbz x8,0x7101ddd198
7101ddd184  ldr x8,[x8, #0x18]
7101ddd188  cbz x8,0x7101ddd198
7101ddd18c  ldrb w9,[x8, #0x58]
7101ddd190  and w9,w9,#0xfe
7101ddd194  strb w9,[x8, #0x58]
7101ddd198  stp x23,xzr,[sp]
7101ddd19c  cbz x21,0x7101ddd1b8
7101ddd1a0  ldr x0,[x21, #0x18]
7101ddd1a4  stp x22,xzr,[x21, #0x10]
7101ddd1a8  cbz x0,0x7101ddd1b0
7101ddd1ac  bl 0x710392eb40
7101ddd1b0  mov x0,x21
7101ddd1b4  bl 0x710392eb40
7101ddd1b8  ldr x21,[sp, #0x18]
7101ddd1bc  stp x23,xzr,[sp, #0x10]
7101ddd1c0  cbz x21,0x7101ddd1dc
7101ddd1c4  ldr x0,[x21, #0x18]
7101ddd1c8  stp x22,xzr,[x21, #0x10]
7101ddd1cc  cbz x0,0x7101ddd1d4
7101ddd1d0  bl 0x710392eb40
7101ddd1d4  mov x0,x21
7101ddd1d8  bl 0x710392eb40
7101ddd1dc  ldr x8,[x24, #0x510]
7101ddd1e0  ldr x8,[x8]
7101ddd1e4  ldr x8,[x8, #0xd8]
7101ddd1e8  ldr x8,[x8]
7101ddd1ec  ldr x8,[x8]
7101ddd1f0  ldrh w21,[x8, #0x12]
7101ddd1f4  adrp x1,0x71042b4000
7101ddd1f8  add x1,x1,#0x7fe
7101ddd1fc  add x8,sp,#0x10
7101ddd200  mov x0,x20
7101ddd204  bl 0x7103776640
7101ddd208  adrp x1,0x7104308000
7101ddd20c  add x1,x1,#0xa37
7101ddd210  mov x8,sp
7101ddd214  add x0,sp,#0x10
7101ddd218  bl 0x7103776910
7101ddd21c  adrp x1,0x7104292000
7101ddd220  add x1,x1,#0xd0
7101ddd224  mov x0,sp
7101ddd228  mov w2,#0x1
7101ddd22c  mov w3,w21
7101ddd230  bl 0x710377a280
7101ddd234  ldr x0,[sp, #0x8]
7101ddd238  stp x22,xzr,[sp]
7101ddd23c  cbz x0,0x7101ddd244
7101ddd240  bl 0x710392eb40
7101ddd244  adrp x1,0x710425f000
7101ddd248  add x1,x1,#0x996
7101ddd24c  mov x8,sp
7101ddd250  add x0,sp,#0x10
7101ddd254  bl 0x7103776640
7101ddd258  ldr x20,[sp, #0x8]
7101ddd25c  fmov s0,0x3f800000
7101ddd260  adrp x1,0x7104292000
7101ddd264  add x1,x1,#0xc0
7101ddd268  mov x0,x20
7101ddd26c  bl 0x7103778300
7101ddd270  stp x23,xzr,[sp]
7101ddd274  cbz x20,0x7101ddd290
7101ddd278  ldr x0,[x20, #0x18]
7101ddd27c  stp x22,xzr,[x20, #0x10]
7101ddd280  cbz x0,0x7101ddd288
7101ddd284  bl 0x710392eb40
7101ddd288  mov x0,x20
7101ddd28c  bl 0x710392eb40
7101ddd290  adrp x1,0x71042c5000
7101ddd294  add x1,x1,#0x423
7101ddd298  mov x8,sp
7101ddd29c  add x0,sp,#0x10
7101ddd2a0  bl 0x7103776640
7101ddd2a4  ldr x20,[sp, #0x8]
7101ddd2a8  ldr x8,[x20, #0x8]
7101ddd2ac  cbz x8,0x7101ddd2c4
7101ddd2b0  ldr x8,[x8, #0x18]
7101ddd2b4  cbz x8,0x7101ddd2c4
7101ddd2b8  ldrb w9,[x8, #0x58]
7101ddd2bc  and w9,w9,#0xfe
7101ddd2c0  strb w9,[x8, #0x58]
7101ddd2c4  stp x23,xzr,[sp]
7101ddd2c8  cbz x20,0x7101ddd2e4
7101ddd2cc  ldr x0,[x20, #0x18]
7101ddd2d0  stp x22,xzr,[x20, #0x10]
7101ddd2d4  cbz x0,0x7101ddd2dc
7101ddd2d8  bl 0x710392eb40
7101ddd2dc  mov x0,x20
7101ddd2e0  bl 0x710392eb40
7101ddd2e4  ldr x20,[sp, #0x18]
7101ddd2e8  stp x23,xzr,[sp, #0x10]
7101ddd2ec  cbz x20,0x7101ddd308
7101ddd2f0  ldr x0,[x20, #0x18]
7101ddd2f4  stp x22,xzr,[x20, #0x10]
7101ddd2f8  cbz x0,0x7101ddd300
7101ddd2fc  bl 0x710392eb40
7101ddd300  mov x0,x20
7101ddd304  bl 0x710392eb40
7101ddd308  stp x22,xzr,[sp, #0x20]
7101ddd30c  cbz x19,0x7101ddd318
7101ddd310  mov x0,x19
7101ddd314  bl 0x710392eb40
7101ddd318  ldr x19,[sp, #0x38]
7101ddd31c  stp x23,xzr,[sp, #0x30]
7101ddd320  cbz x19,0x7101ddd33c
7101ddd324  ldr x0,[x19, #0x18]
7101ddd328  stp x22,xzr,[x19, #0x10]
7101ddd32c  cbz x0,0x7101ddd334
7101ddd330  bl 0x710392eb40
7101ddd334  mov x0,x19
7101ddd338  bl 0x710392eb40
7101ddd33c  ldp x29,x30,[sp, #0x70]
7101ddd340  ldp x20,x19,[sp, #0x60]
7101ddd344  ldp x22,x21,[sp, #0x50]
7101ddd348  ldp x24,x23,[sp, #0x40]
7101ddd34c  add sp,sp,#0x80
7101ddd350  ret
7101ddd354  ldr x19,[sp, #0x28]
7101ddd358  ldr x8,[x19]
7101ddd35c  cbz x8,0x7101ddcf70
7101ddd360  ldrb w9,[x8, #0x58]
7101ddd364  and w9,w9,#0xfe
7101ddd368  strb w9,[x8, #0x58]
7101ddd36c  b 0x7101ddcf70
