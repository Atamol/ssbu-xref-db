// addr:      71026abc90
// offset:    0x26abc90
// name:      FUN_71026abc90
// mangled:   
// size:      5440

71026abc90  sub sp,sp,#0x160
71026abc94  stp x28,x27,[sp, #0x100]
71026abc98  stp x26,x25,[sp, #0x110]
71026abc9c  stp x24,x23,[sp, #0x120]
71026abca0  stp x22,x21,[sp, #0x130]
71026abca4  stp x20,x19,[sp, #0x140]
71026abca8  stp x29,x30,[sp, #0x150]
71026abcac  add x29,sp,#0x150
71026abcb0  mov x19,x0
71026abcb4  bl 0x71025d9250
71026abcb8  ldrb w9,[x19, #0x9d]
71026abcbc  ldrb w10,[x19, #0x9e]
71026abcc0  sub w8,w9,#0x4
71026abcc4  ldrb w11,[x19, #0x9f]
71026abcc8  str w9,[x19, #0x874]
71026abccc  str w10,[x19, #0x878]
71026abcd0  str w11,[x19, #0x87c]
71026abcd4  cmp w8,#0x13
71026abcd8  b.cc 0x71026abce4
71026abcdc  orr w8,wzr,#0x6
71026abce0  b 0x71026abd64
71026abce4  cmp w9,#0x7
71026abce8  b.hi 0x71026abd1c
71026abcec  mov w8,wzr
71026abcf0  strb wzr,[x19, #0x871]
71026abcf4  cmp w11,#0x6
71026abcf8  b.ne 0x71026abd70
71026abcfc  cmp w9,#0x13
71026abd00  b.ne 0x71026abd2c
71026abd04  cmp w10,#0x1e
71026abd08  b.cc 0x71026abd70
71026abd0c  mov w8,#0x4
71026abd10  strb w8,[x19, #0x871]
71026abd14  orr w9,wzr,#0x3
71026abd18  b 0x71026abd88
71026abd1c  cmp w9,#0xf
71026abd20  b.hi 0x71026abd50
71026abd24  mov w8,#0x1
71026abd28  b 0x71026abd64
71026abd2c  sub w10,w9,#0x14
71026abd30  cmp w10,#0x4
71026abd34  b.hi 0x71026abd70
71026abd38  cmp w9,#0x17
71026abd3c  orr w8,wzr,#0x7
71026abd40  mov w9,#0x5
71026abd44  csel w8,w9,w8,cc
71026abd48  strb w8,[x19, #0x871]
71026abd4c  b 0x71026abd70
71026abd50  cmp w9,#0x12
71026abd54  b.hi 0x71026abd60
71026abd58  mov w8,#0x2
71026abd5c  b 0x71026abd64
71026abd60  orr w8,wzr,#0x3
71026abd64  strb w8,[x19, #0x871]
71026abd68  cmp w11,#0x6
71026abd6c  b.eq 0x71026abcfc
71026abd70  mov x10,#0x100
71026abd74  movk x10,#0x302, LSL #16
71026abd78  lsl x9,x8,#0x3
71026abd7c  movk x10,#0x303, LSL #32
71026abd80  movk x10,#0x404, LSL #48
71026abd84  lsr x9,x10,x9
71026abd88  strb w9,[x19, #0x870]
71026abd8c  ldrb w9,[x19, #0x880]
71026abd90  cbz w9,0x71026abf2c
71026abd94  mov w8,#0x2
71026abd98  strb w8,[x19, #0x872]
71026abd9c  ldr x8,[x19, #0x310]
71026abda0  ldp x9,x10,[x8, #0xd0]
71026abda4  sub x9,x10,x9
71026abda8  lsr x10,x9,#0x4
71026abdac  cmp w10,#0x1
71026abdb0  b.lt 0x71026abe20
71026abdb4  ubfx x9,x9,#0x4,#0x20
71026abdb8  mov x20,xzr
71026abdbc  mov w22,#0x101
71026abdc0  sub x21,x9,#0x1
71026abdc4  mov w23,#0x1
71026abdc8  b 0x71026abdd8
71026abdcc  ldr x8,[x19, #0x310]
71026abdd0  add x20,x20,#0x10
71026abdd4  sub x21,x21,#0x1
71026abdd8  ldr x8,[x8, #0xd0]
71026abddc  ldr x24,[x8, x20, LSL #0x0]
71026abde0  cbz x24,0x71026abe1c
71026abde4  add x0,x24,#0x108
71026abde8  strb wzr,[x24, #0x110]
71026abdec  bl 0x71025e9d50
71026abdf0  ldrb w8,[x24, #0x118]
71026abdf4  orr w8,w8,#0x1
71026abdf8  strb w8,[x24, #0x118]
71026abdfc  ldr x8,[x24, #0xd8]
71026abe00  cbz x8,0x71026abe08
71026abe04  strb w23,[x8, #0x21]
71026abe08  ldrb w8,[x24, #0xe0]
71026abe0c  cbz w8,0x71026abe1c
71026abe10  ldr x8,[x24, #0xc8]
71026abe14  cbz x8,0x71026abe1c
71026abe18  strh w22,[x8, #0x30]
71026abe1c  cbnz x21,0x71026abdcc
71026abe20  mov w0,#0x10
71026abe24  mov w1,#0x10
71026abe28  bl 0x710392e290
71026abe2c  mov x20,x0
71026abe30  cbnz x0,0x71026abe7c
71026abe34  adrp x8,0x7105332000
71026abe38  ldr x0,[x8, #0xf00]
71026abe3c  cbz x0,0x71026abe78
71026abe40  mov w8,#0x10
71026abe44  str wzr,[sp, #0x40]
71026abe48  add x1,sp,#0x40
71026abe4c  stur x8,[x29, #-0xa0]
71026abe50  ldr x8,[x0]
71026abe54  ldr x8,[x8, #0x30]
71026abe58  sub x2,x29,#0xa0
71026abe5c  blr x8
71026abe60  tbz w0,#0x0,0x71026abe78
71026abe64  mov w0,#0x10
71026abe68  mov w1,#0x10
71026abe6c  bl 0x710392e290
71026abe70  mov x20,x0
71026abe74  cbnz x0,0x71026abe7c
71026abe78  mov x20,xzr
71026abe7c  adrp x8,0x71050ce000
71026abe80  add x8,x8,#0xa8
71026abe84  mov w0,#0x10
71026abe88  mov w1,#0x10
71026abe8c  str x8,[x20]
71026abe90  bl 0x710392e290
71026abe94  cbnz x0,0x71026abecc
71026abe98  adrp x8,0x7105332000
71026abe9c  ldr x0,[x8, #0xf00]
71026abea0  mov w8,#0x10
71026abea4  str wzr,[sp, #0x40]
71026abea8  add x1,sp,#0x40
71026abeac  stur x8,[x29, #-0xa0]
71026abeb0  ldr x8,[x0]
71026abeb4  ldr x8,[x8, #0x30]
71026abeb8  sub x2,x29,#0xa0
71026abebc  blr x8
71026abec0  mov w0,#0x10
71026abec4  mov w1,#0x10
71026abec8  bl 0x710392e290
71026abecc  str x19,[x0]
71026abed0  strb wzr,[x0, #0x8]
71026abed4  str x0,[x20, #0x8]
71026abed8  ldr x0,[x19, #0x860]
71026abedc  str x20,[x19, #0x860]
71026abee0  cbz x0,0x71026abef4
71026abee4  ldr x8,[x0]
71026abee8  ldr x8,[x8, #0x8]
71026abeec  blr x8
71026abef0  ldr x20,[x19, #0x860]
71026abef4  ldr x8,[x20, #0x8]
71026abef8  cbz x8,0x71026abfb8
71026abefc  ldr w9,[x19, #0x28]
71026abf00  strb wzr,[x8, #0x8]
71026abf04  sub w9,w9,#0x1
71026abf08  cmp w9,#0x5
71026abf0c  b.hi 0x71026abfb8
71026abf10  adrp x10,0x7104507000
71026abf14  add x10,x10,#0xf50
71026abf18  ldrsw x9,[x10, x9, LSL #0x2]
71026abf1c  add x9,x9,x10
71026abf20  br x9
71026abf24  str wzr,[x8, #0xc]
71026abf28  b 0x71026abfb0
71026abf2c  sub w8,w8,#0x4
71026abf30  and w9,w8,#0xff
71026abf34  and x8,x8,#0xff
71026abf38  lsl x8,x8,#0x3
71026abf3c  mov w10,#0x100
71026abf40  movk w10,#0x102, LSL #16
71026abf44  lsr w8,w10,w8
71026abf48  cmp w9,#0x4
71026abf4c  mov w9,#0x2
71026abf50  csel w8,w8,w9,cc
71026abf54  ldrb w9,[x19, #0x4b]
71026abf58  strb w8,[x19, #0x872]
71026abf5c  cmp w9,#0x2
71026abf60  b.eq 0x71026abf7c
71026abf64  cmp w9,#0x1
71026abf68  b.ne 0x71026abd9c
71026abf6c  and w8,w8,#0xff
71026abf70  cmp w8,#0x2
71026abf74  b.ne 0x71026abd94
71026abf78  b 0x71026abd9c
71026abf7c  mov w8,#0x1
71026abf80  b 0x71026abd98
71026abf84  mov w9,#0x1
71026abf88  str w9,[x8, #0xc]
71026abf8c  b 0x71026abfb4
71026abf90  mov w9,#0x2
71026abf94  b 0x71026abfac
71026abf98  orr w9,wzr,#0x3
71026abf9c  b 0x71026abfac
71026abfa0  mov w9,#0x4
71026abfa4  b 0x71026abfac
71026abfa8  mov w9,#0x5
71026abfac  str w9,[x8, #0xc]
71026abfb0  mov w9,#0x1
71026abfb4  strb w9,[x8, #0x8]
71026abfb8  ldr x9,[x19, #0x310]
71026abfbc  ldp x8,x9,[x9, #0xd0]
71026abfc0  mov x23,#0x18c0
71026abfc4  movk x23,#0x24f9, LSL #16
71026abfc8  movk x23,#0x13, LSL #32
71026abfcc  cmp x8,x9
71026abfd0  b.eq 0x71026ac0b0
71026abfd4  mov x10,x8
71026abfd8  ldr w11,[x10, #0x8]
71026abfdc  cmp w11,#0x1
71026abfe0  b.hi 0x71026abff4
71026abfe4  ldr x0,[x10]
71026abfe8  ldr x11,[x0, #0x68]
71026abfec  cmp x11,x23
71026abff0  b.eq 0x71026ac004
71026abff4  add x10,x10,#0x10
71026abff8  cmp x9,x10
71026abffc  b.ne 0x71026abfd8
71026ac000  b 0x71026ac014
71026ac004  cbz x0,0x71026ac014
71026ac008  bl 0x71026aea50
71026ac00c  ldr x9,[x19, #0x310]
71026ac010  ldp x8,x9,[x9, #0xd0]
71026ac014  cmp x8,x9
71026ac018  b.eq 0x71026ac0b0
71026ac01c  mov x10,#0x1c04
71026ac020  movk x10,#0x3c57, LSL #16
71026ac024  movk x10,#0xa, LSL #32
71026ac028  mov x11,x8
71026ac02c  ldr w12,[x11, #0x8]
71026ac030  cmp w12,#0x1
71026ac034  b.hi 0x71026ac048
71026ac038  ldr x0,[x11]
71026ac03c  ldr x12,[x0, #0x68]
71026ac040  cmp x12,x10
71026ac044  b.eq 0x71026ac058
71026ac048  add x11,x11,#0x10
71026ac04c  cmp x9,x11
71026ac050  b.ne 0x71026ac02c
71026ac054  b 0x71026ac068
71026ac058  cbz x0,0x71026ac068
71026ac05c  bl 0x71026aea50
71026ac060  ldr x9,[x19, #0x310]
71026ac064  ldp x8,x9,[x9, #0xd0]
71026ac068  cmp x8,x9
71026ac06c  b.eq 0x71026ac0b0
71026ac070  mov x10,#0xced2
71026ac074  movk x10,#0xcb38, LSL #16
71026ac078  movk x10,#0x11, LSL #32
71026ac07c  ldr w11,[x8, #0x8]
71026ac080  cmp w11,#0x1
71026ac084  b.hi 0x71026ac098
71026ac088  ldr x0,[x8]
71026ac08c  ldr x11,[x0, #0x68]
71026ac090  cmp x11,x10
71026ac094  b.eq 0x71026ac0a8
71026ac098  add x8,x8,#0x10
71026ac09c  cmp x9,x8
71026ac0a0  b.ne 0x71026ac07c
71026ac0a4  b 0x71026ac0b0
71026ac0a8  cbz x0,0x71026ac0b0
71026ac0ac  bl 0x71026aea50
71026ac0b0  ldrb w8,[x19, #0x870]
71026ac0b4  adrp x9,0x7104551000
71026ac0b8  add x9,x9,#0x494
71026ac0bc  ldrsw x21,[x9, x8, LSL #0x2]
71026ac0c0  mov x20,xzr
71026ac0c4  adrp x22,0x71050cd000
71026ac0c8  add x22,x22,#0x900
71026ac0cc  mov w24,#0xffffffff
71026ac0d0  adrp x25,0x7104754000
71026ac0d4  add x25,x25,#0x84
71026ac0d8  orr x26,xzr,#0x100000000
71026ac0dc  b 0x71026ac0e4
71026ac0e0  ldrb w8,[x19, #0x870]
71026ac0e4  and x8,x8,#0xff
71026ac0e8  ldr x8,[x22, x8, LSL #0x3]
71026ac0ec  ldr x12,[x8, x20, LSL #0x3]
71026ac0f0  cbz x12,0x71026ac188
71026ac0f4  ldrb w11,[x12]
71026ac0f8  cbz w11,0x71026ac188
71026ac0fc  ldr x9,[x19, #0x310]
71026ac100  ldp x8,x9,[x9, #0xd0]
71026ac104  cmp x8,x9
71026ac108  b.eq 0x71026ac188
71026ac10c  mov x10,xzr
71026ac110  add x12,x12,#0x1
71026ac114  mov w13,w24
71026ac118  and w11,w11,#0xff
71026ac11c  sub w14,w11,#0x41
71026ac120  add w15,w11,#0x20
71026ac124  cmp w14,#0x1a
71026ac128  csel w11,w15,w11,cc
71026ac12c  eor w11,w11,w13
71026ac130  and w11,w11,#0xff
71026ac134  ldr w11,[x25, w11, UXTW #0x2]
71026ac138  eor w13,w11,w13, LSR #0x8
71026ac13c  ldrb w11,[x12], #0x1
71026ac140  add x10,x10,x26
71026ac144  cbnz w11,0x71026ac118
71026ac148  mvn w11,w13
71026ac14c  and x10,x10,#0xff00000000
71026ac150  orr x10,x10,x11
71026ac154  ldr w11,[x8, #0x8]
71026ac158  cmp w11,#0x1
71026ac15c  b.hi 0x71026ac170
71026ac160  ldr x0,[x8]
71026ac164  ldr x11,[x0, #0x68]
71026ac168  cmp x10,x11
71026ac16c  b.eq 0x71026ac180
71026ac170  add x8,x8,#0x10
71026ac174  cmp x9,x8
71026ac178  b.ne 0x71026ac154
71026ac17c  b 0x71026ac188
71026ac180  cbz x0,0x71026ac188
71026ac184  bl 0x71026aea50
71026ac188  add x20,x20,#0x1
71026ac18c  cmp x20,x21
71026ac190  b.lt 0x71026ac0e0
71026ac194  ldr x9,[x19, #0x310]
71026ac198  ldp x8,x9,[x9, #0xd0]
71026ac19c  cmp x8,x9
71026ac1a0  b.eq 0x71026ac1d8
71026ac1a4  mov x10,#0x978
71026ac1a8  movk x10,#0xc4e2, LSL #16
71026ac1ac  movk x10,#0x16, LSL #32
71026ac1b0  ldr w11,[x8, #0x8]
71026ac1b4  cmp w11,#0x1
71026ac1b8  b.hi 0x71026ac1cc
71026ac1bc  ldr x20,[x8]
71026ac1c0  ldr x11,[x20, #0x68]
71026ac1c4  cmp x11,x10
71026ac1c8  b.eq 0x71026ac5fc
71026ac1cc  add x8,x8,#0x10
71026ac1d0  cmp x9,x8
71026ac1d4  b.ne 0x71026ac1b0
71026ac1d8  ldr x8,[x19, #0x860]
71026ac1dc  cbz x8,0x71026ac240
71026ac1e0  ldr x10,[x8, #0x8]
71026ac1e4  cbz x10,0x71026ac240
71026ac1e8  ldrb w8,[x10, #0x8]
71026ac1ec  cbz w8,0x71026ac240
71026ac1f0  ldr x8,[x10]
71026ac1f4  ldr x9,[x8, #0x310]
71026ac1f8  ldp x8,x9,[x9, #0xd0]
71026ac1fc  cmp x8,x9
71026ac200  b.eq 0x71026ac240
71026ac204  ldrsw x10,[x10, #0xc]
71026ac208  adrp x11,0x7104550000
71026ac20c  add x11,x11,#0xe48
71026ac210  ldr x10,[x11, x10, LSL #0x3]
71026ac214  and x10,x10,#0xffffffffff
71026ac218  ldr w11,[x8, #0x8]
71026ac21c  cmp w11,#0x4
71026ac220  b.ne 0x71026ac234
71026ac224  ldr x20,[x8]
71026ac228  ldr x11,[x20, #0x68]
71026ac22c  cmp x10,x11
71026ac230  b.eq 0x71026acda0
71026ac234  add x8,x8,#0x10
71026ac238  cmp x9,x8
71026ac23c  b.ne 0x71026ac218
71026ac240  ldrb w20,[x19, #0x880]
71026ac244  mov w0,#0x10
71026ac248  orr w1,wzr,#0x38
71026ac24c  bl 0x710392e290
71026ac250  cbnz x0,0x71026ac298
71026ac254  adrp x8,0x7105332000
71026ac258  ldr x0,[x8, #0xf00]
71026ac25c  cbz x0,0x71026ac294
71026ac260  orr w8,wzr,#0x38
71026ac264  str wzr,[sp, #0x40]
71026ac268  add x1,sp,#0x40
71026ac26c  stur x8,[x29, #-0xa0]
71026ac270  ldr x8,[x0]
71026ac274  ldr x8,[x8, #0x30]
71026ac278  sub x2,x29,#0xa0
71026ac27c  blr x8
71026ac280  tbz w0,#0x0,0x71026ac294
71026ac284  mov w0,#0x10
71026ac288  orr w1,wzr,#0x38
71026ac28c  bl 0x710392e290
71026ac290  cbnz x0,0x71026ac298
71026ac294  mov x0,xzr
71026ac298  ldrb w8,[x19, #0x870]
71026ac29c  ldrb w9,[x19, #0x872]
71026ac2a0  adrp x10,0x71050cd000
71026ac2a4  add x10,x10,#0xf00
71026ac2a8  add x25,x19,#0x738
71026ac2ac  strb wzr,[x0, #0x33]
71026ac2b0  stp x10,x19,[x0]
71026ac2b4  strb w20,[x0, #0x34]
71026ac2b8  stp xzr,xzr,[x0, #0x20]
71026ac2bc  strb w8,[x0, #0x30]
71026ac2c0  mov w8,#0x5
71026ac2c4  strb w8,[x0, #0x31]
71026ac2c8  strb w9,[x0, #0x32]
71026ac2cc  stp x25,xzr,[x0, #0x10]
71026ac2d0  ldrb w1,[x19, #0x9b]
71026ac2d4  str x0,[x19, #0x830]
71026ac2d8  bl 0x71026b3e10
71026ac2dc  mov w0,#0x10
71026ac2e0  mov w1,#0x80
71026ac2e4  bl 0x710392e290
71026ac2e8  cbnz x0,0x71026ac330
71026ac2ec  adrp x8,0x7105332000
71026ac2f0  ldr x0,[x8, #0xf00]
71026ac2f4  cbz x0,0x71026ac32c
71026ac2f8  mov w8,#0x80
71026ac2fc  str wzr,[sp, #0x40]
71026ac300  add x1,sp,#0x40
71026ac304  stur x8,[x29, #-0xa0]
71026ac308  ldr x8,[x0]
71026ac30c  ldr x8,[x8, #0x30]
71026ac310  sub x2,x29,#0xa0
71026ac314  blr x8
71026ac318  tbz w0,#0x0,0x71026ac32c
71026ac31c  mov w0,#0x10
71026ac320  mov w1,#0x80
71026ac324  bl 0x710392e290
71026ac328  cbnz x0,0x71026ac330
71026ac32c  mov x0,xzr
71026ac330  adrp x8,0x7104468000
71026ac334  ldr q0,[x8, #0xca0]
71026ac338  adrp x8,0x710446a000
71026ac33c  ldr q1,[x8, #0x360]
71026ac340  adrp x8,0x7104465000
71026ac344  stp q1,q0,[sp, #0x20]
71026ac348  stp q0,q1,[x0, #0x20]
71026ac34c  ldr q0,[x8, #0x6b0]
71026ac350  adrp x8,0x710446a000
71026ac354  ldr q1,[x8, #0x350]
71026ac358  adrp x8,0x71050cd000
71026ac35c  add x8,x8,#0xa20
71026ac360  stp q1,q0,[sp]
71026ac364  strb wzr,[x0, #0x68]
71026ac368  stp q0,q1,[x0, #0x40]
71026ac36c  str xzr,[x0, #0x60]
71026ac370  stp x8,x19,[x0]
71026ac374  stp xzr,xzr,[x0, #0x10]
71026ac378  stp xzr,xzr,[x0, #0x70]
71026ac37c  str x0,[x19, #0x838]
71026ac380  bl 0x71026aef60
71026ac384  adrp x8,0x710532a000
71026ac388  ldr x8,[x8, #0x9d8]
71026ac38c  ldr x8,[x8]
71026ac390  ldrb w8,[x8, #0x188]
71026ac394  cbz w8,0x71026ac430
71026ac398  ldr x22,[x19, #0x838]
71026ac39c  ldrb w20,[x19, #0x9d]
71026ac3a0  mov w8,#0x1
71026ac3a4  ldrb w21,[x19, #0x9e]
71026ac3a8  strb w8,[x22, #0x68]
71026ac3ac  bl 0x71039c07b0
71026ac3b0  adrp x8,0x7107447000
71026ac3b4  ldr x8,[x8, #0xe8]
71026ac3b8  sub x0,x0,x8
71026ac3bc  bl 0x71039c0c80
71026ac3c0  and x8,x0,#0xffffffff
71026ac3c4  asr x9,x0,#0x20
71026ac3c8  mov w10,#0xf7cf
71026ac3cc  movk w10,#0xe353, LSL #16
71026ac3d0  mul x11,x9,x10
71026ac3d4  mul x10,x8,x10
71026ac3d8  add x10,x11,x10, LSR #0x20
71026ac3dc  mov w11,#0x9ba5
71026ac3e0  movk w11,#0x20c4, LSL #16
71026ac3e4  mul x9,x9,x11
71026ac3e8  mul x8,x8,x11
71026ac3ec  add x8,x8,w10, UXTW 
71026ac3f0  add x9,x9,x10, ASR #0x20
71026ac3f4  add x8,x9,x8, LSR #0x20
71026ac3f8  mov w9,#0x3e8
71026ac3fc  asr x8,x8,#0x7
71026ac400  add x8,x8,x0, LSR #0x3f
71026ac404  mul x8,x8,x9
71026ac408  mov x9,#0x5a53
71026ac40c  movk x9,#0xa09b, LSL #16
71026ac410  movk x9,#0xb82f, LSL #32
71026ac414  movk x9,#0x44, LSL #48
71026ac418  lsr x8,x8,#0x9
71026ac41c  umulh x8,x8,x9
71026ac420  lsr x8,x8,#0xb
71026ac424  str x8,[x22, #0x70]
71026ac428  stp w20,w21,[x22, #0x78]
71026ac42c  b 0x71026ac464
71026ac430  adrp x8,0x7105314000
71026ac434  add x8,x8,#0x4d8
71026ac438  ldarb w8,[x8]
71026ac43c  tbz w8,#0x0,0x71026ad190
71026ac440  adrp x8,0x71052c5000
71026ac444  ldrb w8,[x8, #0x1b0]
71026ac448  sub w8,w8,#0xd
71026ac44c  cmp w8,#0x18
71026ac450  b.hi 0x71026ac464
71026ac454  mov w9,#0x1fef
71026ac458  movk w9,#0x100, LSL #16
71026ac45c  lsr w8,w9,w8
71026ac460  tbnz w8,#0x0,0x71026ac398
71026ac464  adrp x8,0x7105314000
71026ac468  add x8,x8,#0x4d8
71026ac46c  ldarb w8,[x8]
71026ac470  tbz w8,#0x0,0x71026ad150
71026ac474  adrp x8,0x71052c5000
71026ac478  ldrb w8,[x8, #0x1ba]
71026ac47c  cbnz w8,0x71026aca20
71026ac480  ldrb w8,[x19, #0x18]
71026ac484  cbz w8,0x71026aca20
71026ac488  ldr x21,[x19, #0x338]
71026ac48c  mov w0,#0x10
71026ac490  orr w1,wzr,#0xc0
71026ac494  bl 0x710392e290
71026ac498  mov x20,x0
71026ac49c  cbnz x0,0x71026ac4e8
71026ac4a0  adrp x8,0x7105332000
71026ac4a4  ldr x0,[x8, #0xf00]
71026ac4a8  cbz x0,0x71026ac4e4
71026ac4ac  orr w8,wzr,#0xc0
71026ac4b0  str wzr,[sp, #0x40]
71026ac4b4  add x1,sp,#0x40
71026ac4b8  stur x8,[x29, #-0xa0]
71026ac4bc  ldr x8,[x0]
71026ac4c0  ldr x8,[x8, #0x30]
71026ac4c4  sub x2,x29,#0xa0
71026ac4c8  blr x8
71026ac4cc  tbz w0,#0x0,0x71026ac4e4
71026ac4d0  mov w0,#0x10
71026ac4d4  orr w1,wzr,#0xc0
71026ac4d8  bl 0x710392e290
71026ac4dc  mov x20,x0
71026ac4e0  cbnz x0,0x71026ac4e8
71026ac4e4  mov x20,xzr
71026ac4e8  adrp x8,0x71050cd000
71026ac4ec  add x8,x8,#0x9e0
71026ac4f0  orr w9,wzr,#0x3f800000
71026ac4f4  stp x8,x19,[x20]
71026ac4f8  mov w8,#0x301
71026ac4fc  strh w8,[x20, #0x38]
71026ac500  mov w8,#0x1
71026ac504  strb wzr,[x20, #0x3a]
71026ac508  stp x25,xzr,[x20, #0x28]
71026ac50c  mov x10,#-0x1
71026ac510  adrp x26,0x71052a8000
71026ac514  str wzr,[x20, #0x4c]
71026ac518  stur xzr,[x20, #0x42]
71026ac51c  stur xzr,[x20, #0x3c]
71026ac520  strh w8,[x20, #0x50]
71026ac524  stur x9,[x20, #0x54]
71026ac528  ldr x9,[x19, #0x340]
71026ac52c  strb wzr,[x20, #0x74]
71026ac530  str w24,[x20, #0x70]
71026ac534  stp x9,x10,[x20, #0x60]
71026ac538  ldr x26,[x26, #0xa88]
71026ac53c  ldr q0,[x26]
71026ac540  str wzr,[x20, #0x90]
71026ac544  str xzr,[x20, #0xa0]
71026ac548  strb w8,[x20, #0xa8]
71026ac54c  str x21,[x20, #0xb0]
71026ac550  str w24,[x20, #0xb8]
71026ac554  strb wzr,[x20, #0xbc]
71026ac558  str xzr,[x20, #0x10]
71026ac55c  str w24,[x20, #0x9c]
71026ac560  stur x10,[x20, #0x94]
71026ac564  stp xzr,xzr,[x20, #0x18]
71026ac568  str q0,[x20, #0x80]
71026ac56c  ldr x0,[x19, #0x858]
71026ac570  str x20,[x19, #0x858]
71026ac574  cbz x0,0x71026ac588
71026ac578  ldr x8,[x0]
71026ac57c  ldr x8,[x8, #0x8]
71026ac580  blr x8
71026ac584  ldr x20,[x19, #0x858]
71026ac588  ldr q0,[sp, #0x30]
71026ac58c  str q0,[sp, #0x40]
71026ac590  ldr q0,[sp, #0x20]
71026ac594  str q0,[sp, #0x50]
71026ac598  ldr q0,[sp, #0x10]
71026ac59c  str q0,[sp, #0x60]
71026ac5a0  ldr q0,[sp]
71026ac5a4  str q0,[sp, #0x70]
71026ac5a8  ldr x8,[x20, #0x8]
71026ac5ac  ldr x9,[x8, #0x310]
71026ac5b0  ldp x8,x9,[x9, #0xd0]
71026ac5b4  cmp x8,x9
71026ac5b8  b.eq 0x71026ac64c
71026ac5bc  mov x10,#0xa2ed
71026ac5c0  movk x10,#0x1803, LSL #16
71026ac5c4  movk x10,#0x10, LSL #32
71026ac5c8  mov w0,#0xffffffff
71026ac5cc  ldr w11,[x8, #0x8]
71026ac5d0  cmp w11,#0x1
71026ac5d4  b.hi 0x71026ac5e8
71026ac5d8  ldr x21,[x8]
71026ac5dc  ldr x11,[x21, #0x68]
71026ac5e0  cmp x11,x10
71026ac5e4  b.eq 0x71026ace20
71026ac5e8  add x8,x8,#0x10
71026ac5ec  cmp x9,x8
71026ac5f0  b.ne 0x71026ac5cc
71026ac5f4  mov x21,xzr
71026ac5f8  b 0x71026ac654
71026ac5fc  cbz x20,0x71026ac1d8
71026ac600  add x0,x20,#0x108
71026ac604  strb wzr,[x20, #0x110]
71026ac608  bl 0x71025e9d50
71026ac60c  ldrb w8,[x20, #0x118]
71026ac610  orr w8,w8,#0x1
71026ac614  strb w8,[x20, #0x118]
71026ac618  ldr x8,[x20, #0xd8]
71026ac61c  cbz x8,0x71026ac628
71026ac620  mov w9,#0x1
71026ac624  strb w9,[x8, #0x21]
71026ac628  ldrb w8,[x20, #0xe0]
71026ac62c  cbz w8,0x71026ac1d8
71026ac630  ldr x8,[x20, #0xc8]
71026ac634  cbz x8,0x71026ac1d8
71026ac638  mov w9,#0x101
71026ac63c  strh w9,[x8, #0x30]
71026ac640  ldr x8,[x19, #0x860]
71026ac644  cbnz x8,0x71026ac1e0
71026ac648  b 0x71026ac240
71026ac64c  mov x21,xzr
71026ac650  mov w0,#0xffffffff
71026ac654  ldr x8,[x20, #0x8]
71026ac658  str w0,[x20, #0x94]
71026ac65c  str x21,[x20, #0x10]
71026ac660  ldr x9,[x8, #0x310]
71026ac664  ldp x8,x9,[x9, #0xd0]
71026ac668  cmp x8,x9
71026ac66c  b.eq 0x71026ac6b0
71026ac670  mov x10,#0xd83d
71026ac674  movk x10,#0x5fa3, LSL #16
71026ac678  movk x10,#0x10, LSL #32
71026ac67c  mov w0,#0xffffffff
71026ac680  ldr w11,[x8, #0x8]
71026ac684  cmp w11,#0x1
71026ac688  b.hi 0x71026ac69c
71026ac68c  ldr x21,[x8]
71026ac690  ldr x11,[x21, #0x68]
71026ac694  cmp x11,x10
71026ac698  b.eq 0x71026acf30
71026ac69c  add x8,x8,#0x10
71026ac6a0  cmp x9,x8
71026ac6a4  b.ne 0x71026ac680
71026ac6a8  mov x21,xzr
71026ac6ac  b 0x71026ac6b8
71026ac6b0  mov x21,xzr
71026ac6b4  mov w0,#0xffffffff
71026ac6b8  ldr x8,[x20, #0x8]
71026ac6bc  str w0,[x20, #0x98]
71026ac6c0  str x21,[x20, #0x18]
71026ac6c4  ldr x9,[x8, #0x310]
71026ac6c8  ldp x8,x9,[x9, #0xd0]
71026ac6cc  cmp x8,x9
71026ac6d0  b.eq 0x71026ac714
71026ac6d4  mov x10,#0xf18d
71026ac6d8  movk x10,#0x62c3, LSL #16
71026ac6dc  movk x10,#0x10, LSL #32
71026ac6e0  mov w0,#0xffffffff
71026ac6e4  ldr w11,[x8, #0x8]
71026ac6e8  cmp w11,#0x1
71026ac6ec  b.hi 0x71026ac700
71026ac6f0  ldr x21,[x8]
71026ac6f4  ldr x11,[x21, #0x68]
71026ac6f8  cmp x11,x10
71026ac6fc  b.eq 0x71026ad040
71026ac700  add x8,x8,#0x10
71026ac704  cmp x9,x8
71026ac708  b.ne 0x71026ac6e4
71026ac70c  mov x21,xzr
71026ac710  b 0x71026ac71c
71026ac714  mov x21,xzr
71026ac718  mov w0,#0xffffffff
71026ac71c  ldr x27,[x20, #0x8]
71026ac720  str w0,[x20, #0x9c]
71026ac724  mov w0,#0x10
71026ac728  mov w1,#0x10
71026ac72c  str x21,[x20, #0x20]
71026ac730  bl 0x710392e290
71026ac734  mov x21,x0
71026ac738  cbnz x0,0x71026ac784
71026ac73c  adrp x8,0x7105332000
71026ac740  ldr x0,[x8, #0xf00]
71026ac744  cbz x0,0x71026ac780
71026ac748  mov w8,#0x10
71026ac74c  str wzr,[sp, #0x80]
71026ac750  add x1,sp,#0x80
71026ac754  stur x8,[x29, #-0xa0]
71026ac758  ldr x8,[x0]
71026ac75c  ldr x8,[x8, #0x30]
71026ac760  sub x2,x29,#0xa0
71026ac764  blr x8
71026ac768  tbz w0,#0x0,0x71026ac780
71026ac76c  mov w0,#0x10
71026ac770  mov w1,#0x10
71026ac774  bl 0x710392e290
71026ac778  mov x21,x0
71026ac77c  cbnz x0,0x71026ac784
71026ac780  mov x21,xzr
71026ac784  ldr x28,[x20, #0x28]
71026ac788  adrp x8,0x71050cd000
71026ac78c  add x8,x8,#0xa00
71026ac790  mov w1,#0x50
71026ac794  mov w0,#0x10
71026ac798  str x8,[x21]
71026ac79c  bl 0x710392e290
71026ac7a0  cbnz x0,0x71026ac7d8
71026ac7a4  adrp x8,0x7105332000
71026ac7a8  ldr x0,[x8, #0xf00]
71026ac7ac  mov w22,#0x50
71026ac7b0  str wzr,[sp, #0x80]
71026ac7b4  stur x22,[x29, #-0xa0]
71026ac7b8  ldr x8,[x0]
71026ac7bc  ldr x8,[x8, #0x30]
71026ac7c0  add x1,sp,#0x80
71026ac7c4  sub x2,x29,#0xa0
71026ac7c8  blr x8
71026ac7cc  mov w0,#0x10
71026ac7d0  mov x1,x22
71026ac7d4  bl 0x710392e290
71026ac7d8  ldr q0,[x26]
71026ac7dc  mov w8,#0x50000000
71026ac7e0  strb wzr,[x0, #0x10]
71026ac7e4  stp x27,x28,[x0]
71026ac7e8  str w8,[x0, #0x14]
71026ac7ec  str xzr,[x0, #0x18]
71026ac7f0  stp xzr,xzr,[x0, #0x20]
71026ac7f4  stp q0,q0,[x0, #0x30]
71026ac7f8  str x0,[x21, #0x8]
71026ac7fc  ldr x0,[x20, #0xa0]
71026ac800  str x21,[x20, #0xa0]
71026ac804  cbz x0,0x71026ac814
71026ac808  ldr x8,[x0]
71026ac80c  ldr x8,[x8, #0x8]
71026ac810  blr x8
71026ac814  ldr x22,[x20, #0x8]
71026ac818  mov w1,#0x68
71026ac81c  mov w0,#0x10
71026ac820  bl 0x710392e290
71026ac824  mov x21,x0
71026ac828  cbnz x0,0x71026ac874
71026ac82c  adrp x8,0x7105332000
71026ac830  ldr x0,[x8, #0xf00]
71026ac834  cbz x0,0x71026ac870
71026ac838  mov w8,#0x68
71026ac83c  str wzr,[sp, #0x80]
71026ac840  add x1,sp,#0x80
71026ac844  stur x8,[x29, #-0xa0]
71026ac848  ldr x8,[x0]
71026ac84c  ldr x8,[x8, #0x30]
71026ac850  sub x2,x29,#0xa0
71026ac854  blr x8
71026ac858  tbz w0,#0x0,0x71026ac870
71026ac85c  mov w1,#0x68
71026ac860  mov w0,#0x10
71026ac864  bl 0x710392e290
71026ac868  mov x21,x0
71026ac86c  cbnz x0,0x71026ac874
71026ac870  mov x21,xzr
71026ac874  mov w27,#0x1
71026ac878  mov x8,#0x100000001
71026ac87c  sub x2,x29,#0xa0
71026ac880  stp x27,x8,[x29, #-0xa0]
71026ac884  mov x8,#0x1
71026ac888  movk x8,#0x10, LSL #32
71026ac88c  mov x0,x21
71026ac890  mov x1,x22
71026ac894  stur x8,[x29, #-0x90]
71026ac898  bl 0x710313e6a0
71026ac89c  adrp x8,0x7105178000
71026ac8a0  add x8,x8,#0xa88
71026ac8a4  str x8,[x21]
71026ac8a8  str w27,[x21, #0x44]
71026ac8ac  strh wzr,[x21, #0x48]
71026ac8b0  movi v1.2D,#0x0
71026ac8b4  strb w27,[x21, #0x5c]
71026ac8b8  stur xzr,[x21, #0x54]
71026ac8bc  stur xzr,[x21, #0x4c]
71026ac8c0  strb wzr,[x21, #0x60]
71026ac8c4  ldr x8,[x20, #0x28]
71026ac8c8  add x9,x8,#0x40
71026ac8cc  str x21,[x20, #0x30]
71026ac8d0  ldr w22,[x8, #0x44]
71026ac8d4  mov w8,#0x2
71026ac8d8  ld1 {v1.S}[1],[x9]
71026ac8dc  stp w22,w8,[x29, #-0x80]
71026ac8e0  stp xzr,xzr,[x29, #-0xa0]
71026ac8e4  stur q1,[x29, #-0x90]
71026ac8e8  ldr x8,[x21, #0x38]
71026ac8ec  cbz x8,0x71026ac920
71026ac8f0  ldr x0,[x8, #0x130]
71026ac8f4  sub x2,x29,#0xa0
71026ac8f8  mov w1,wzr
71026ac8fc  mov w3,wzr
71026ac900  mov w4,wzr
71026ac904  mov w5,wzr
71026ac908  str q1,[sp, #0x30]
71026ac90c  ldr x8,[x0]
71026ac910  ldr x8,[x8, #0x58]
71026ac914  blr x8
71026ac918  ldr q1,[sp, #0x30]
71026ac91c  ldr x21,[x20, #0x30]
71026ac920  ldr q0,[x26]
71026ac924  stp w22,wzr,[sp, #0xa0]
71026ac928  stp q1,q0,[sp, #0x80]
71026ac92c  ldr x8,[x21, #0x38]
71026ac930  cbz x8,0x71026ac95c
71026ac934  ldr x0,[x8, #0x130]
71026ac938  ldr x8,[x0]
71026ac93c  ldr x8,[x8, #0x58]
71026ac940  add x2,sp,#0x80
71026ac944  mov w3,#0x1
71026ac948  mov w1,wzr
71026ac94c  mov w4,wzr
71026ac950  mov w5,wzr
71026ac954  blr x8
71026ac958  ldr x21,[x20, #0x30]
71026ac95c  cbz x21,0x71026ac9e4
71026ac960  ldr x8,[x21, #0x38]
71026ac964  cbz x8,0x71026ac980
71026ac968  ldr x0,[x8, #0x130]
71026ac96c  ldr x8,[x0]
71026ac970  ldr x8,[x8, #0x78]
71026ac974  mov w1,wzr
71026ac978  blr x8
71026ac97c  ldr x21,[x20, #0x30]
71026ac980  ldrb w8,[x21, #0x40]
71026ac984  cbz w8,0x71026ac9d4
71026ac988  ldr x22,[x21, #0x30]
71026ac98c  cbz x22,0x71026ac9c4
71026ac990  ldrb w8,[x22, #0x10]
71026ac994  cbz w8,0x71026ac9c4
71026ac998  ldrb w8,[x22, #0x50]
71026ac99c  strb wzr,[x22, #0x10]
71026ac9a0  cbz w8,0x71026ac9c4
71026ac9a4  ldr x8,[x22]
71026ac9a8  ldr w0,[x8, #0x8]
71026ac9ac  bl 0x71003ac560
71026ac9b0  ldr x8,[x0]
71026ac9b4  ldr x8,[x8, #0x48]
71026ac9b8  mov w1,wzr
71026ac9bc  blr x8
71026ac9c0  strb wzr,[x22, #0x50]
71026ac9c4  ldr x8,[x21]
71026ac9c8  ldr x8,[x8, #0x30]
71026ac9cc  mov x0,x21
71026ac9d0  blr x8
71026ac9d4  strb wzr,[x21, #0x40]
71026ac9d8  ldr x8,[x20, #0x30]
71026ac9dc  mov w9,#0x1
71026ac9e0  strb w9,[x8, #0x60]
71026ac9e4  stur xzr,[x29, #-0xa0]
71026ac9e8  ldr x8,[x20, #0xb0]
71026ac9ec  ldr x8,[x8]
71026ac9f0  ldr x0,[x8, #0x8]
71026ac9f4  cbz x0,0x71026aca08
71026ac9f8  sub x1,x29,#0xa0
71026ac9fc  mov w2,wzr
71026aca00  bl 0x7102405040
71026aca04  b 0x71026aca0c
71026aca08  mov w0,#0xffffffff
71026aca0c  mov w8,#0x1
71026aca10  str w0,[x20, #0xb8]
71026aca14  strb w8,[x20, #0x38]
71026aca18  ldr x0,[x19, #0x858]
71026aca1c  bl 0x71026aec40
71026aca20  mov w0,#0x10
71026aca24  orr w1,wzr,#0x38
71026aca28  bl 0x710392e290
71026aca2c  mov x20,x0
71026aca30  cbnz x0,0x71026aca7c
71026aca34  adrp x8,0x7105332000
71026aca38  ldr x0,[x8, #0xf00]
71026aca3c  cbz x0,0x71026aca78
71026aca40  orr w8,wzr,#0x38
71026aca44  str wzr,[sp, #0x40]
71026aca48  add x1,sp,#0x40
71026aca4c  stur x8,[x29, #-0xa0]
71026aca50  ldr x8,[x0]
71026aca54  ldr x8,[x8, #0x30]
71026aca58  sub x2,x29,#0xa0
71026aca5c  blr x8
71026aca60  tbz w0,#0x0,0x71026aca78
71026aca64  mov w0,#0x10
71026aca68  orr w1,wzr,#0x38
71026aca6c  bl 0x710392e290
71026aca70  mov x20,x0
71026aca74  cbnz x0,0x71026aca7c
71026aca78  mov x20,xzr
71026aca7c  adrp x8,0x71050cd000
71026aca80  add x8,x8,#0xf20
71026aca84  mov w21,#0x20
71026aca88  mov w22,#0x1
71026aca8c  stp x8,x19,[x20]
71026aca90  stp xzr,x25,[x20, #0x10]
71026aca94  mov x0,x20
71026aca98  strh w21,[x20, #0x20]
71026aca9c  strb wzr,[x20, #0x22]
71026acaa0  str wzr,[x20, #0x24]
71026acaa4  strh wzr,[x20, #0x28]
71026acaa8  strb w22,[x20, #0x2a]
71026acaac  stur xzr,[x20, #0x2c]
71026acab0  str wzr,[x20, #0x34]
71026acab4  ldrb w1,[x19, #0x870]
71026acab8  bl 0x71026b5be0
71026acabc  mov w0,#0x10
71026acac0  orr w1,wzr,#0x38
71026acac4  str x20,[x19, #0x840]
71026acac8  bl 0x710392e290
71026acacc  mov x20,x0
71026acad0  cbnz x0,0x71026acb1c
71026acad4  adrp x8,0x7105332000
71026acad8  ldr x0,[x8, #0xf00]
71026acadc  cbz x0,0x71026acb18
71026acae0  orr w8,wzr,#0x38
71026acae4  str wzr,[sp, #0x40]
71026acae8  add x1,sp,#0x40
71026acaec  stur x8,[x29, #-0xa0]
71026acaf0  ldr x8,[x0]
71026acaf4  ldr x8,[x8, #0x30]
71026acaf8  sub x2,x29,#0xa0
71026acafc  blr x8
71026acb00  tbz w0,#0x0,0x71026acb18
71026acb04  mov w0,#0x10
71026acb08  orr w1,wzr,#0x38
71026acb0c  bl 0x710392e290
71026acb10  mov x20,x0
71026acb14  cbnz x0,0x71026acb1c
71026acb18  mov x20,xzr
71026acb1c  adrp x8,0x71050cd000
71026acb20  add x8,x8,#0xf70
71026acb24  strh w21,[x20, #0x20]
71026acb28  stp x8,x19,[x20]
71026acb2c  mov x0,x20
71026acb30  stp xzr,x25,[x20, #0x10]
71026acb34  strb wzr,[x20, #0x22]
71026acb38  str wzr,[x20, #0x24]
71026acb3c  strh wzr,[x20, #0x28]
71026acb40  strb w22,[x20, #0x2a]
71026acb44  stur xzr,[x20, #0x2c]
71026acb48  str wzr,[x20, #0x34]
71026acb4c  ldrb w1,[x19, #0x870]
71026acb50  bl 0x71026b5d70
71026acb54  mov w0,#0x10
71026acb58  orr w1,wzr,#0x60
71026acb5c  str x20,[x19, #0x848]
71026acb60  bl 0x710392e290
71026acb64  mov x20,x0
71026acb68  cbnz x0,0x71026acbb4
71026acb6c  adrp x8,0x7105332000
71026acb70  ldr x0,[x8, #0xf00]
71026acb74  cbz x0,0x71026acbb0
71026acb78  orr w8,wzr,#0x60
71026acb7c  str wzr,[sp, #0x40]
71026acb80  add x1,sp,#0x40
71026acb84  stur x8,[x29, #-0xa0]
71026acb88  ldr x8,[x0]
71026acb8c  ldr x8,[x8, #0x30]
71026acb90  sub x2,x29,#0xa0
71026acb94  blr x8
71026acb98  tbz w0,#0x0,0x71026acbb0
71026acb9c  mov w0,#0x10
71026acba0  orr w1,wzr,#0x60
71026acba4  bl 0x710392e290
71026acba8  mov x20,x0
71026acbac  cbnz x0,0x71026acbb4
71026acbb0  mov x20,xzr
71026acbb4  adrp x9,0x71050cd000
71026acbb8  add x9,x9,#0xfc0
71026acbbc  ldr x8,[x19, #0x338]
71026acbc0  stp x9,x19,[x20]
71026acbc4  mov w9,#0x20
71026acbc8  mov w21,#0x1
71026acbcc  stp xzr,x25,[x20, #0x10]
71026acbd0  strh w9,[x20, #0x20]
71026acbd4  adrp x9,0x71052a8000
71026acbd8  mov x0,x20
71026acbdc  strb wzr,[x20, #0x22]
71026acbe0  str wzr,[x20, #0x24]
71026acbe4  strh wzr,[x20, #0x28]
71026acbe8  strb w21,[x20, #0x2a]
71026acbec  stur xzr,[x20, #0x2c]
71026acbf0  stur xzr,[x20, #0x34]
71026acbf4  ldr x9,[x9, #0xa88]
71026acbf8  ldr q0,[x9]
71026acbfc  str x8,[x20, #0x50]
71026acc00  str w24,[x20, #0x58]
71026acc04  strb wzr,[x20, #0x5c]
71026acc08  str q0,[x20, #0x40]
71026acc0c  ldrb w1,[x19, #0x870]
71026acc10  bl 0x71026b6120
71026acc14  ldrb w8,[x19, #0x872]
71026acc18  cmp w8,#0x1
71026acc1c  b.hi 0x71026acc24
71026acc20  strb w21,[x20, #0x29]
71026acc24  ldrb w8,[x19, #0x18]
71026acc28  str x20,[x19, #0x850]
71026acc2c  cbnz w8,0x71026acc70
71026acc30  ldr x9,[x19, #0x310]
71026acc34  ldp x8,x9,[x9, #0xd0]
71026acc38  cmp x8,x9
71026acc3c  b.eq 0x71026acc68
71026acc40  ldr w10,[x8, #0x8]
71026acc44  cmp w10,#0x1
71026acc48  b.hi 0x71026acc5c
71026acc4c  ldr x10,[x8]
71026acc50  ldr x11,[x10, #0x68]
71026acc54  cmp x11,x23
71026acc58  b.eq 0x71026acc6c
71026acc5c  add x8,x8,#0x10
71026acc60  cmp x9,x8
71026acc64  b.ne 0x71026acc40
71026acc68  mov x10,xzr
71026acc6c  str x10,[x19, #0x868]
71026acc70  mov w0,#0x10
71026acc74  mov w1,#0x10
71026acc78  bl 0x710392e290
71026acc7c  mov x20,x0
71026acc80  cbnz x0,0x71026acccc
71026acc84  adrp x8,0x7105332000
71026acc88  ldr x0,[x8, #0xf00]
71026acc8c  cbz x0,0x71026accc8
71026acc90  mov w8,#0x10
71026acc94  str wzr,[sp, #0x40]
71026acc98  add x1,sp,#0x40
71026acc9c  stur x8,[x29, #-0xa0]
71026acca0  ldr x8,[x0]
71026acca4  ldr x8,[x8, #0x30]
71026acca8  sub x2,x29,#0xa0
71026accac  blr x8
71026accb0  tbz w0,#0x0,0x71026accc8
71026accb4  mov w0,#0x10
71026accb8  mov w1,#0x10
71026accbc  bl 0x710392e290
71026accc0  mov x20,x0
71026accc4  cbnz x0,0x71026acccc
71026accc8  mov x20,xzr
71026acccc  ldrb w2,[x19, #0x870]
71026accd0  mov x0,x20
71026accd4  mov x1,x19
71026accd8  bl 0x71026afeb0
71026accdc  ldr x9,[x19, #0x310]
71026acce0  ldp x8,x9,[x9, #0xd0]
71026acce4  cmp x8,x9
71026acce8  b.eq 0x71026acd24
71026accec  ldr w10,[x8, #0x8]
71026accf0  cmp w10,#0x1
71026accf4  b.hi 0x71026acd08
71026accf8  ldr x1,[x8]
71026accfc  ldr x10,[x1, #0x68]
71026acd00  cmp x10,x23
71026acd04  b.eq 0x71026acd18
71026acd08  add x8,x8,#0x10
71026acd0c  cmp x9,x8
71026acd10  b.ne 0x71026accec
71026acd14  b 0x71026acd24
71026acd18  cbz x1,0x71026acd24
71026acd1c  ldr x0,[x20, #0x8]
71026acd20  bl 0x71026b0370
71026acd24  ldr x8,[x20]
71026acd28  ldr x8,[x8, #0x8]
71026acd2c  mov x0,x20
71026acd30  blr x8
71026acd34  ldrb w8,[x19, #0x872]
71026acd38  cmp w8,#0x1
71026acd3c  b.ne 0x71026acd80
71026acd40  ldr x8,[x19, #0x338]
71026acd44  ldr x8,[x8]
71026acd48  ldr x0,[x8, #0x8]
71026acd4c  cbz x0,0x71026acd80
71026acd50  ldr x8,[x0]
71026acd54  ldr x3,[x8, #0x58]
71026acd58  mov w1,#0x9
71026acd5c  ldp x29,x30,[sp, #0x150]
71026acd60  mov w2,#0xffffffff
71026acd64  ldp x20,x19,[sp, #0x140]
71026acd68  ldp x22,x21,[sp, #0x130]
71026acd6c  ldp x24,x23,[sp, #0x120]
71026acd70  ldp x26,x25,[sp, #0x110]
71026acd74  ldp x28,x27,[sp, #0x100]
71026acd78  add sp,sp,#0x160
71026acd7c  br x3
71026acd80  ldp x29,x30,[sp, #0x150]
71026acd84  ldp x20,x19,[sp, #0x140]
71026acd88  ldp x22,x21,[sp, #0x130]
71026acd8c  ldp x24,x23,[sp, #0x120]
71026acd90  ldp x26,x25,[sp, #0x110]
71026acd94  ldp x28,x27,[sp, #0x100]
71026acd98  add sp,sp,#0x160
71026acd9c  ret
71026acda0  cbz x20,0x71026ac240
71026acda4  add x0,x20,#0x108
71026acda8  mov w8,#0x1
71026acdac  strb w8,[x20, #0x110]
71026acdb0  bl 0x71025e9d50
71026acdb4  ldrb w8,[x20, #0x118]
71026acdb8  and w8,w8,#0xfe
71026acdbc  strb w8,[x20, #0x118]
71026acdc0  ldrb w8,[x20, #0xe0]
71026acdc4  cbz w8,0x71026acdd4
71026acdc8  ldr x8,[x20, #0xc8]
71026acdcc  cbz x8,0x71026acdd4
71026acdd0  strh wzr,[x8, #0x30]
71026acdd4  ldr x8,[x20, #0xd8]
71026acdd8  cbz x8,0x71026acde0
71026acddc  strb wzr,[x8, #0x21]
71026acde0  ldrb w8,[x20, #0xe0]
71026acde4  cbz w8,0x71026ace0c
71026acde8  ldr x8,[x20, #0xb0]
71026acdec  mov w9,#0x1
71026acdf0  strb w9,[x8, #0x10]
71026acdf4  ldrb w8,[x20, #0xe0]
71026acdf8  cbz w8,0x71026ace0c
71026acdfc  ldr x8,[x20, #0xc8]
71026ace00  cbz x8,0x71026ace0c
71026ace04  mov w9,#0x101
71026ace08  strh w9,[x8, #0x32]
71026ace0c  ldr x8,[x20, #0xd8]
71026ace10  cbz x8,0x71026ac240
71026ace14  mov w9,#0x1
71026ace18  strb w9,[x8, #0x22]
71026ace1c  b 0x71026ac240
71026ace20  cbz x21,0x71026ac650
71026ace24  ldr x0,[x21, #0x90]
71026ace28  ldr x8,[x0]
71026ace2c  ldr x8,[x8, #0x148]
71026ace30  add x1,sp,#0x40
71026ace34  blr x8
71026ace38  ldr x22,[x21, #0xd8]
71026ace3c  cbz x22,0x71026acea8
71026ace40  ldr x8,[sp, #0x58]
71026ace44  stur x8,[x29, #-0x88]
71026ace48  ldr x8,[sp, #0x50]
71026ace4c  stur x8,[x29, #-0x90]
71026ace50  ldr x8,[sp, #0x48]
71026ace54  stur x8,[x29, #-0x98]
71026ace58  ldr x8,[sp, #0x40]
71026ace5c  stur x8,[x29, #-0xa0]
71026ace60  ldr x8,[sp, #0x78]
71026ace64  stur x8,[x29, #-0x68]
71026ace68  ldr x8,[sp, #0x70]
71026ace6c  stur x8,[x29, #-0x70]
71026ace70  ldr x8,[sp, #0x68]
71026ace74  stur x8,[x29, #-0x78]
71026ace78  ldr x8,[sp, #0x60]
71026ace7c  stur x8,[x29, #-0x80]
71026ace80  ldr x8,[x22, #0x8]
71026ace84  ldrb w9,[x8, #0xa8]
71026ace88  cbz w9,0x71026acea0
71026ace8c  ldr x0,[x8, #0x48]
71026ace90  ldr x8,[x0]
71026ace94  ldr x8,[x8, #0x20]
71026ace98  sub x1,x29,#0xa0
71026ace9c  blr x8
71026acea0  mov w8,#0x1
71026acea4  strb w8,[x22, #0x20]
71026acea8  add x0,x21,#0x108
71026aceac  strb wzr,[x21, #0x110]
71026aceb0  bl 0x71025e9d50
71026aceb4  ldrb w8,[x21, #0x118]
71026aceb8  orr w8,w8,#0x1
71026acebc  strb w8,[x21, #0x118]
71026acec0  ldr x8,[x21, #0xd8]
71026acec4  cbz x8,0x71026aced0
71026acec8  mov w9,#0x1
71026acecc  strb w9,[x8, #0x21]
71026aced0  ldrb w8,[x21, #0xe0]
71026aced4  cbz w8,0x71026acefc
71026aced8  ldr x8,[x21, #0xc8]
71026acedc  cbz x8,0x71026acef0
71026acee0  mov w9,#0x101
71026acee4  strh w9,[x8, #0x30]
71026acee8  ldrb w8,[x21, #0xe0]
71026aceec  cbz w8,0x71026acefc
71026acef0  ldr x8,[x21, #0xc8]
71026acef4  cbz x8,0x71026acefc
71026acef8  strh wzr,[x8, #0x32]
71026acefc  ldr x8,[x21, #0xd8]
71026acf00  cbz x8,0x71026ac650
71026acf04  strb wzr,[x8, #0x22]
71026acf08  ldr x8,[x21, #0xd8]
71026acf0c  cbz x8,0x71026ac650
71026acf10  ldr x8,[x8, #0x8]
71026acf14  ldr x0,[x8, #0x8]
71026acf18  ldr x8,[x0]
71026acf1c  ldr x8,[x8, #0x18]
71026acf20  adrp x1,0x7104316000
71026acf24  add x1,x1,#0xd7c
71026acf28  blr x8
71026acf2c  b 0x71026ac654
71026acf30  cbz x21,0x71026ac6b4
71026acf34  ldr x0,[x21, #0x90]
71026acf38  ldr x8,[x0]
71026acf3c  ldr x8,[x8, #0x148]
71026acf40  add x1,sp,#0x40
71026acf44  blr x8
71026acf48  ldr x22,[x21, #0xd8]
71026acf4c  cbz x22,0x71026acfb8
71026acf50  ldr x8,[sp, #0x58]
71026acf54  stur x8,[x29, #-0x88]
71026acf58  ldr x8,[sp, #0x50]
71026acf5c  stur x8,[x29, #-0x90]
71026acf60  ldr x8,[sp, #0x48]
71026acf64  stur x8,[x29, #-0x98]
71026acf68  ldr x8,[sp, #0x40]
71026acf6c  stur x8,[x29, #-0xa0]
71026acf70  ldr x8,[sp, #0x78]
71026acf74  stur x8,[x29, #-0x68]
71026acf78  ldr x8,[sp, #0x70]
71026acf7c  stur x8,[x29, #-0x70]
71026acf80  ldr x8,[sp, #0x68]
71026acf84  stur x8,[x29, #-0x78]
71026acf88  ldr x8,[sp, #0x60]
71026acf8c  stur x8,[x29, #-0x80]
71026acf90  ldr x8,[x22, #0x8]
71026acf94  ldrb w9,[x8, #0xa8]
71026acf98  cbz w9,0x71026acfb0
71026acf9c  ldr x0,[x8, #0x48]
71026acfa0  ldr x8,[x0]
71026acfa4  ldr x8,[x8, #0x20]
71026acfa8  sub x1,x29,#0xa0
71026acfac  blr x8
71026acfb0  mov w8,#0x1
71026acfb4  strb w8,[x22, #0x20]
71026acfb8  add x0,x21,#0x108
71026acfbc  strb wzr,[x21, #0x110]
71026acfc0  bl 0x71025e9d50
71026acfc4  ldrb w8,[x21, #0x118]
71026acfc8  orr w8,w8,#0x1
71026acfcc  strb w8,[x21, #0x118]
71026acfd0  ldr x8,[x21, #0xd8]
71026acfd4  cbz x8,0x71026acfe0
71026acfd8  mov w9,#0x1
71026acfdc  strb w9,[x8, #0x21]
71026acfe0  ldrb w8,[x21, #0xe0]
71026acfe4  cbz w8,0x71026ad00c
71026acfe8  ldr x8,[x21, #0xc8]
71026acfec  cbz x8,0x71026ad000
71026acff0  mov w9,#0x101
71026acff4  strh w9,[x8, #0x30]
71026acff8  ldrb w8,[x21, #0xe0]
71026acffc  cbz w8,0x71026ad00c
71026ad000  ldr x8,[x21, #0xc8]
71026ad004  cbz x8,0x71026ad00c
71026ad008  strh wzr,[x8, #0x32]
71026ad00c  ldr x8,[x21, #0xd8]
71026ad010  cbz x8,0x71026ac6b4
71026ad014  strb wzr,[x8, #0x22]
71026ad018  ldr x8,[x21, #0xd8]
71026ad01c  cbz x8,0x71026ac6b4
71026ad020  ldr x8,[x8, #0x8]
71026ad024  ldr x0,[x8, #0x8]
71026ad028  ldr x8,[x0]
71026ad02c  ldr x8,[x8, #0x18]
71026ad030  adrp x1,0x7104316000
71026ad034  add x1,x1,#0xd7c
71026ad038  blr x8
71026ad03c  b 0x71026ac6b8
71026ad040  cbz x21,0x71026ac718
71026ad044  ldr x0,[x21, #0x90]
71026ad048  ldr x8,[x0]
71026ad04c  ldr x8,[x8, #0x148]
71026ad050  add x1,sp,#0x40
71026ad054  blr x8
71026ad058  ldr x22,[x21, #0xd8]
71026ad05c  cbz x22,0x71026ad0c8
71026ad060  ldr x8,[sp, #0x58]
71026ad064  stur x8,[x29, #-0x88]
71026ad068  ldr x8,[sp, #0x50]
71026ad06c  stur x8,[x29, #-0x90]
71026ad070  ldr x8,[sp, #0x48]
71026ad074  stur x8,[x29, #-0x98]
71026ad078  ldr x8,[sp, #0x40]
71026ad07c  stur x8,[x29, #-0xa0]
71026ad080  ldr x8,[sp, #0x78]
71026ad084  stur x8,[x29, #-0x68]
71026ad088  ldr x8,[sp, #0x70]
71026ad08c  stur x8,[x29, #-0x70]
71026ad090  ldr x8,[sp, #0x68]
71026ad094  stur x8,[x29, #-0x78]
71026ad098  ldr x8,[sp, #0x60]
71026ad09c  stur x8,[x29, #-0x80]
71026ad0a0  ldr x8,[x22, #0x8]
71026ad0a4  ldrb w9,[x8, #0xa8]
71026ad0a8  cbz w9,0x71026ad0c0
71026ad0ac  ldr x0,[x8, #0x48]
71026ad0b0  ldr x8,[x0]
71026ad0b4  ldr x8,[x8, #0x20]
71026ad0b8  sub x1,x29,#0xa0
71026ad0bc  blr x8
71026ad0c0  mov w8,#0x1
71026ad0c4  strb w8,[x22, #0x20]
71026ad0c8  add x0,x21,#0x108
71026ad0cc  strb wzr,[x21, #0x110]
71026ad0d0  bl 0x71025e9d50
71026ad0d4  ldrb w8,[x21, #0x118]
71026ad0d8  orr w8,w8,#0x1
71026ad0dc  strb w8,[x21, #0x118]
71026ad0e0  ldr x8,[x21, #0xd8]
71026ad0e4  cbz x8,0x71026ad0f0
71026ad0e8  mov w9,#0x1
71026ad0ec  strb w9,[x8, #0x21]
71026ad0f0  ldrb w8,[x21, #0xe0]
71026ad0f4  cbz w8,0x71026ad11c
71026ad0f8  ldr x8,[x21, #0xc8]
71026ad0fc  cbz x8,0x71026ad110
71026ad100  mov w9,#0x101
71026ad104  strh w9,[x8, #0x30]
71026ad108  ldrb w8,[x21, #0xe0]
71026ad10c  cbz w8,0x71026ad11c
71026ad110  ldr x8,[x21, #0xc8]
71026ad114  cbz x8,0x71026ad11c
71026ad118  strh wzr,[x8, #0x32]
71026ad11c  ldr x8,[x21, #0xd8]
71026ad120  cbz x8,0x71026ac718
71026ad124  strb wzr,[x8, #0x22]
71026ad128  ldr x8,[x21, #0xd8]
71026ad12c  cbz x8,0x71026ac718
71026ad130  ldr x8,[x8, #0x8]
71026ad134  ldr x0,[x8, #0x8]
71026ad138  ldr x8,[x0]
71026ad13c  ldr x8,[x8, #0x18]
71026ad140  adrp x1,0x7104316000
71026ad144  add x1,x1,#0xd7c
71026ad148  blr x8
71026ad14c  b 0x71026ac71c
71026ad150  adrp x0,0x7105314000
71026ad154  add x0,x0,#0x4d8
71026ad158  bl 0x71039c06b0
71026ad15c  cbz w0,0x71026ac474
71026ad160  bl 0x7101764000
71026ad164  adrp x0,0x7101763000
71026ad168  add x0,x0,#0xc40
71026ad16c  adrp x1,0x71052c5000
71026ad170  add x1,x1,#0x180
71026ad174  adrp x2,0x7104f17000
71026ad178  add x2,x2,#0x0
71026ad17c  bl 0x71000001c0
71026ad180  adrp x0,0x7105314000
71026ad184  add x0,x0,#0x4d8
71026ad188  bl 0x71039c06c0
71026ad18c  b 0x71026ac474
71026ad190  adrp x0,0x7105314000
71026ad194  add x0,x0,#0x4d8
71026ad198  bl 0x71039c06b0
71026ad19c  cbz w0,0x71026ac440
71026ad1a0  bl 0x7101764000
71026ad1a4  adrp x0,0x7101763000
71026ad1a8  add x0,x0,#0xc40
71026ad1ac  adrp x1,0x71052c5000
71026ad1b0  add x1,x1,#0x180
71026ad1b4  adrp x2,0x7104f17000
71026ad1b8  add x2,x2,#0x0
71026ad1bc  bl 0x71000001c0
71026ad1c0  adrp x0,0x7105314000
71026ad1c4  add x0,x0,#0x4d8
71026ad1c8  bl 0x71039c06c0
71026ad1cc  b 0x71026ac440
