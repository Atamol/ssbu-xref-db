// addr:      7101cfbe40
// offset:    0x1cfbe40
// name:      FUN_7101cfbe40
// mangled:   
// size:      2704

7101cfbe40  str d8,[sp, #-0x70]!
7101cfbe44  stp x28,x27,[sp, #0x10]
7101cfbe48  stp x26,x25,[sp, #0x20]
7101cfbe4c  stp x24,x23,[sp, #0x30]
7101cfbe50  stp x22,x21,[sp, #0x40]
7101cfbe54  stp x20,x19,[sp, #0x50]
7101cfbe58  stp x29,x30,[sp, #0x60]
7101cfbe5c  add x29,sp,#0x60
7101cfbe60  sub sp,sp,#0x1, LSL #12
7101cfbe64  sub sp,sp,#0x120
7101cfbe68  adrp x8,0x71050ae000
7101cfbe6c  add x8,x8,#0x800
7101cfbe70  mov x19,x1
7101cfbe74  stp x8,xzr,[x0]
7101cfbe78  orr x8,xzr,#0x1ffffffff
7101cfbe7c  stp xzr,x8,[x0, #0x60]
7101cfbe80  mov w8,#0x1
7101cfbe84  mov x23,x0
7101cfbe88  stp xzr,xzr,[x0, #0x10]
7101cfbe8c  add x21,x0,#0x80
7101cfbe90  mov w26,w3
7101cfbe94  mov x24,x2
7101cfbe98  strb wzr,[x0, #0x58]
7101cfbe9c  strb w8,[x0, #0x70]
7101cfbea0  str x1,[x0, #0x78]
7101cfbea4  mov w1,#0x8
7101cfbea8  stp xzr,xzr,[x0, #0x48]
7101cfbeac  mov w0,#0x10
7101cfbeb0  bl 0x710392e290
7101cfbeb4  mov x20,x0
7101cfbeb8  cbnz x0,0x7101cfbf08
7101cfbebc  adrp x8,0x7105332000
7101cfbec0  ldr x0,[x8, #0xf00]
7101cfbec4  cbz x0,0x7101cfbf04
7101cfbec8  mov w8,#0x8
7101cfbecc  str wzr,[sp, #0x1038]
7101cfbed0  add x1,sp,#0x1, LSL #12
7101cfbed4  str x8,[sp, #0x38]
7101cfbed8  ldr x8,[x0]
7101cfbedc  ldr x8,[x8, #0x30]
7101cfbee0  add x1,x1,#0x38
7101cfbee4  add x2,sp,#0x38
7101cfbee8  blr x8
7101cfbeec  tbz w0,#0x0,0x7101cfbf04
7101cfbef0  mov w0,#0x10
7101cfbef4  mov w1,#0x8
7101cfbef8  bl 0x710392e290
7101cfbefc  mov x20,x0
7101cfbf00  cbnz x0,0x7101cfbf08
7101cfbf04  mov x20,xzr
7101cfbf08  mov x0,x20
7101cfbf0c  bl 0x7103773200
7101cfbf10  str x20,[x23, #0x80]
7101cfbf14  add x20,x23,#0x88
7101cfbf18  mov x0,x20
7101cfbf1c  bl 0x7103776290
7101cfbf20  add x25,x23,#0x98
7101cfbf24  mov x0,x25
7101cfbf28  bl 0x7103776290
7101cfbf2c  str wzr,[x23, #0xc0]
7101cfbf30  stp xzr,xzr,[x23, #0xb0]
7101cfbf34  ldr x1,[x19]
7101cfbf38  adrp x2,0x7104545000
7101cfbf3c  add x2,x2,#0x4d8
7101cfbf40  mov w3,#0x1
7101cfbf44  mov x0,x21
7101cfbf48  bl 0x71032cbf30
7101cfbf4c  adrp x8,0x7105329000
7101cfbf50  ldr x8,[x8, #0x740]
7101cfbf54  ldr x0,[x8, #0x8]
7101cfbf58  ldr x8,[x0, #0x80]!
7101cfbf5c  ldr x9,[x0, #0x8]
7101cfbf60  cmp x9,x8
7101cfbf64  b.eq 0x7101cfc8c4
7101cfbf68  ldr x9,[x23, #0x80]
7101cfbf6c  ldr w8,[x8, #0x814]
7101cfbf70  cmp w8,#0x2
7101cfbf74  ldr x9,[x9]
7101cfbf78  add x0,x9,#0x8
7101cfbf7c  b.cc 0x7101cfc058
7101cfbf80  adrp x1,0x71042a3000
7101cfbf84  add x1,x1,#0x23e
7101cfbf88  add x8,sp,#0x18
7101cfbf8c  add x22,sp,#0x18
7101cfbf90  bl 0x7103776640
7101cfbf94  cmp x25,x22
7101cfbf98  b.eq 0x7101cfc00c
7101cfbf9c  ldr x8,[sp, #0x20]
7101cfbfa0  ldr x8,[x8]
7101cfbfa4  ldr x9,[x23, #0xa0]
7101cfbfa8  str x8,[x9]
7101cfbfac  ldr x8,[sp, #0x20]
7101cfbfb0  ldr x8,[x8, #0x8]
7101cfbfb4  ldr x9,[x23, #0xa0]
7101cfbfb8  str x8,[x9, #0x8]
7101cfbfbc  ldr x25,[sp, #0x20]
7101cfbfc0  ldr x8,[x23, #0xa0]
7101cfbfc4  cmp x8,x25
7101cfbfc8  b.eq 0x7101cfc010
7101cfbfcc  ldr x9,[x25, #0x18]
7101cfbfd0  ldr x9,[x9]
7101cfbfd4  ldr x10,[x8, #0x18]
7101cfbfd8  str x9,[x10]
7101cfbfdc  ldr x9,[x25, #0x18]
7101cfbfe0  ldr x9,[x9, #0x8]
7101cfbfe4  ldr x10,[x8, #0x18]
7101cfbfe8  str x9,[x10, #0x8]
7101cfbfec  ldr x9,[x25, #0x18]
7101cfbff0  ldr x9,[x9, #0x10]
7101cfbff4  ldr x10,[x8, #0x18]
7101cfbff8  str x9,[x10, #0x10]
7101cfbffc  ldr x9,[x25, #0x18]
7101cfc000  ldr x9,[x9, #0x18]
7101cfc004  ldr x8,[x8, #0x18]
7101cfc008  str x9,[x8, #0x18]
7101cfc00c  ldr x25,[sp, #0x20]
7101cfc010  adrp x8,0x710523d000
7101cfc014  add x8,x8,#0x988
7101cfc018  stp x8,xzr,[sp, #0x18]
7101cfc01c  cbz x25,0x7101cfc040
7101cfc020  ldr x0,[x25, #0x18]
7101cfc024  adrp x8,0x710523d000
7101cfc028  add x8,x8,#0x9a8
7101cfc02c  stp x8,xzr,[x25, #0x10]
7101cfc030  cbz x0,0x7101cfc038
7101cfc034  bl 0x710392eb40
7101cfc038  mov x0,x25
7101cfc03c  bl 0x710392eb40
7101cfc040  ldr x8,[x21]
7101cfc044  ldr x8,[x8]
7101cfc048  ldr x0,[x8, #0x10]
7101cfc04c  adrp x1,0x71043cf000
7101cfc050  add x1,x1,#0x68d
7101cfc054  b 0x7101cfc12c
7101cfc058  adrp x1,0x710432a000
7101cfc05c  add x1,x1,#0x1ee
7101cfc060  add x8,sp,#0x18
7101cfc064  add x22,sp,#0x18
7101cfc068  bl 0x7103776640
7101cfc06c  cmp x25,x22
7101cfc070  b.eq 0x7101cfc0e4
7101cfc074  ldr x8,[sp, #0x20]
7101cfc078  ldr x8,[x8]
7101cfc07c  ldr x9,[x23, #0xa0]
7101cfc080  str x8,[x9]
7101cfc084  ldr x8,[sp, #0x20]
7101cfc088  ldr x8,[x8, #0x8]
7101cfc08c  ldr x9,[x23, #0xa0]
7101cfc090  str x8,[x9, #0x8]
7101cfc094  ldr x25,[sp, #0x20]
7101cfc098  ldr x8,[x23, #0xa0]
7101cfc09c  cmp x8,x25
7101cfc0a0  b.eq 0x7101cfc0e8
7101cfc0a4  ldr x9,[x25, #0x18]
7101cfc0a8  ldr x9,[x9]
7101cfc0ac  ldr x10,[x8, #0x18]
7101cfc0b0  str x9,[x10]
7101cfc0b4  ldr x9,[x25, #0x18]
7101cfc0b8  ldr x9,[x9, #0x8]
7101cfc0bc  ldr x10,[x8, #0x18]
7101cfc0c0  str x9,[x10, #0x8]
7101cfc0c4  ldr x9,[x25, #0x18]
7101cfc0c8  ldr x9,[x9, #0x10]
7101cfc0cc  ldr x10,[x8, #0x18]
7101cfc0d0  str x9,[x10, #0x10]
7101cfc0d4  ldr x9,[x25, #0x18]
7101cfc0d8  ldr x9,[x9, #0x18]
7101cfc0dc  ldr x8,[x8, #0x18]
7101cfc0e0  str x9,[x8, #0x18]
7101cfc0e4  ldr x25,[sp, #0x20]
7101cfc0e8  adrp x8,0x710523d000
7101cfc0ec  add x8,x8,#0x988
7101cfc0f0  stp x8,xzr,[sp, #0x18]
7101cfc0f4  cbz x25,0x7101cfc118
7101cfc0f8  ldr x0,[x25, #0x18]
7101cfc0fc  adrp x8,0x710523d000
7101cfc100  add x8,x8,#0x9a8
7101cfc104  stp x8,xzr,[x25, #0x10]
7101cfc108  cbz x0,0x7101cfc110
7101cfc10c  bl 0x710392eb40
7101cfc110  mov x0,x25
7101cfc114  bl 0x710392eb40
7101cfc118  ldr x8,[x21]
7101cfc11c  ldr x8,[x8]
7101cfc120  ldr x0,[x8, #0x10]
7101cfc124  adrp x1,0x7104270000
7101cfc128  add x1,x1,#0x147
7101cfc12c  fmov s0,0x3f800000
7101cfc130  bl 0x7103778300
7101cfc134  ldr x8,[x21]
7101cfc138  ldr x8,[x8]
7101cfc13c  add x0,x8,#0x8
7101cfc140  adrp x1,0x71043cf000
7101cfc144  add x1,x1,#0x646
7101cfc148  add x8,sp,#0x8
7101cfc14c  add x22,sp,#0x8
7101cfc150  bl 0x7103776640
7101cfc154  cmp x20,x22
7101cfc158  b.eq 0x7101cfc1cc
7101cfc15c  ldr x8,[sp, #0x10]
7101cfc160  ldr x8,[x8]
7101cfc164  ldr x9,[x23, #0x90]
7101cfc168  str x8,[x9]
7101cfc16c  ldr x8,[sp, #0x10]
7101cfc170  ldr x8,[x8, #0x8]
7101cfc174  ldr x9,[x23, #0x90]
7101cfc178  str x8,[x9, #0x8]
7101cfc17c  ldr x9,[sp, #0x10]
7101cfc180  ldr x8,[x23, #0x90]
7101cfc184  cmp x8,x9
7101cfc188  b.eq 0x7101cfc1cc
7101cfc18c  ldr x10,[x9, #0x18]
7101cfc190  ldr x10,[x10]
7101cfc194  ldr x11,[x8, #0x18]
7101cfc198  str x10,[x11]
7101cfc19c  ldr x10,[x9, #0x18]
7101cfc1a0  ldr x10,[x10, #0x8]
7101cfc1a4  ldr x11,[x8, #0x18]
7101cfc1a8  str x10,[x11, #0x8]
7101cfc1ac  ldr x10,[x9, #0x18]
7101cfc1b0  ldr x10,[x10, #0x10]
7101cfc1b4  ldr x11,[x8, #0x18]
7101cfc1b8  str x10,[x11, #0x10]
7101cfc1bc  ldr x9,[x9, #0x18]
7101cfc1c0  ldr x9,[x9, #0x18]
7101cfc1c4  ldr x8,[x8, #0x18]
7101cfc1c8  str x9,[x8, #0x18]
7101cfc1cc  adrp x1,0x710437c000
7101cfc1d0  add x1,x1,#0x772
7101cfc1d4  add x8,sp,#0x38
7101cfc1d8  mov x0,x20
7101cfc1dc  stur x19,[x29, #-0x58]
7101cfc1e0  bl 0x7103776910
7101cfc1e4  ldr x25,[sp, #0x40]
7101cfc1e8  ldr x0,[x25, #0x10]
7101cfc1ec  cbz x0,0x7101cfc200
7101cfc1f0  add x1,x24,#0x8
7101cfc1f4  mov w2,#0xffffffff
7101cfc1f8  mov w3,#0x1
7101cfc1fc  bl 0x71037a2270
7101cfc200  adrp x28,0x710523d000
7101cfc204  add x28,x28,#0x9a8
7101cfc208  stp x28,xzr,[sp, #0x38]
7101cfc20c  cbz x25,0x7101cfc218
7101cfc210  mov x0,x25
7101cfc214  bl 0x710392eb40
7101cfc218  adrp x1,0x710433a000
7101cfc21c  add x1,x1,#0x373
7101cfc220  add x8,sp,#0x28
7101cfc224  mov x0,x20
7101cfc228  mov w19,w26
7101cfc22c  bl 0x7103776910
7101cfc230  adrp x8,0x7105314000
7101cfc234  add x8,x8,#0x4d8
7101cfc238  ldarb w8,[x8]
7101cfc23c  tbz w8,#0x0,0x7101cfc884
7101cfc240  adrp x9,0x710530a000
7101cfc244  add x9,x9,#0x974
7101cfc248  ldrh w25,[x9, #0x4]
7101cfc24c  ldrb w2,[x9, #0x1]
7101cfc250  ldrb w1,[x9]
7101cfc254  add x8,sp,#0x1, LSL #12
7101cfc258  ldrb w24,[x9, #0x6]
7101cfc25c  add x8,x8,#0x38
7101cfc260  sub x0,x29,#0xb0
7101cfc264  ldrb w26,[x9, #0x7]
7101cfc268  mov w3,w25
7101cfc26c  ldrb w22,[x9, #0x2]
7101cfc270  str xzr,[sp, #0x1070]
7101cfc274  str xzr,[sp, #0x1068]
7101cfc278  str xzr,[sp, #0x1060]
7101cfc27c  str xzr,[sp, #0x1058]
7101cfc280  str xzr,[sp, #0x1050]
7101cfc284  str xzr,[sp, #0x1048]
7101cfc288  str xzr,[sp, #0x1040]
7101cfc28c  str xzr,[sp, #0x1038]
7101cfc290  sub x27,x29,#0xb0
7101cfc294  str x8,[sp, #0x1078]
7101cfc298  str wzr,[sp, #0x1080]
7101cfc29c  bl 0x7103397500
7101cfc2a0  mov w9,#0xb3c5
7101cfc2a4  movk w9,#0x91a2, LSL #16
7101cfc2a8  mov w8,#0x8889
7101cfc2ac  movk w8,#0x8888, LSL #16
7101cfc2b0  umull x9,w25,w9
7101cfc2b4  umull x8,w25,w8
7101cfc2b8  mov w12,#0x4240
7101cfc2bc  movk w12,#0xf, LSL #16
7101cfc2c0  mov w13,#0x3e8
7101cfc2c4  lsr x8,x8,#0x25
7101cfc2c8  lsr x9,x9,#0x2b
7101cfc2cc  mul x9,x9,x12
7101cfc2d0  mov w10,#0xffffffc4
7101cfc2d4  cmp w8,#0x3e7
7101cfc2d8  mov w12,#0x3e7
7101cfc2dc  madd w10,w8,w10,w25
7101cfc2e0  csel x8,x8,x12,cc
7101cfc2e4  madd x8,x8,x13,x9
7101cfc2e8  and w11,w10,#0xffff
7101cfc2ec  and x9,x10,#0xffff
7101cfc2f0  cmp w11,#0x3e7
7101cfc2f4  csel x9,x9,x12,cc
7101cfc2f8  cmp w26,#0xb
7101cfc2fc  add x4,x8,x9
7101cfc300  add x2,x27,#0x8
7101cfc304  b.hi 0x7101cfc31c
7101cfc308  adrp x8,0x7104ada000
7101cfc30c  add x8,x8,#0x9c0
7101cfc310  sxtb x9,w26
7101cfc314  ldr w6,[x8, x9, LSL #0x2]
7101cfc318  b 0x7101cfc320
7101cfc31c  mov w6,#0x96
7101cfc320  sub x9,x29,#0xf8
7101cfc324  mov w8,#0x9dc5
7101cfc328  movk w8,#0x811c, LSL #16
7101cfc32c  cmp w22,#0x2
7101cfc330  b.eq 0x7101cfc428
7101cfc334  cmp w22,#0x1
7101cfc338  b.eq 0x7101cfc3b4
7101cfc33c  cbnz w22,0x7101cfc49c
7101cfc340  mov x12,#0x656d
7101cfc344  movk x12,#0x5f6c, LSL #16
7101cfc348  mov x10,#0x1700000000
7101cfc34c  sub x11,x29,#0xf8
7101cfc350  movk x12,#0x7572, LSL #32
7101cfc354  movk x12,#0x656c, LSL #48
7101cfc358  stp x10,x12,[x29, #-0xf8]
7101cfc35c  add x7,x11,#0x8
7101cfc360  add x10,x11,#0x9
7101cfc364  mov x11,#0x745f
7101cfc368  movk x11,#0x6165, LSL #16
7101cfc36c  movk x11,#0x5f6d, LSL #32
7101cfc370  movk x11,#0x6f66, LSL #48
7101cfc374  stur x11,[x29, #-0xe8]
7101cfc378  mov w11,#0x6d72
7101cfc37c  sturh w11,[x29, #-0xe0]
7101cfc380  mov w11,#0x7461
7101cfc384  movk w11,#0x305f, LSL #16
7101cfc388  stur w11,[x9, #0x1a]
7101cfc38c  orr w9,wzr,#0x30
7101cfc390  mov w11,#0x6d
7101cfc394  sturh w9,[x29, #-0xda]
7101cfc398  mov w9,#0x89
7101cfc39c  mul w8,w8,w9
7101cfc3a0  and w11,w11,#0xff
7101cfc3a4  eor w8,w8,w11
7101cfc3a8  ldrb w11,[x10], #0x1
7101cfc3ac  cbnz w11,0x7101cfc39c
7101cfc3b0  b 0x7101cfc4ac
7101cfc3b4  mov x12,#0x656d
7101cfc3b8  movk x12,#0x5f6c, LSL #16
7101cfc3bc  mov x10,#0x1700000000
7101cfc3c0  sub x11,x29,#0xf8
7101cfc3c4  movk x12,#0x7572, LSL #32
7101cfc3c8  movk x12,#0x656c, LSL #48
7101cfc3cc  stp x10,x12,[x29, #-0xf8]
7101cfc3d0  add x7,x11,#0x8
7101cfc3d4  add x10,x11,#0x9
7101cfc3d8  mov x11,#0x745f
7101cfc3dc  movk x11,#0x6165, LSL #16
7101cfc3e0  movk x11,#0x5f6d, LSL #32
7101cfc3e4  movk x11,#0x6f66, LSL #48
7101cfc3e8  stur x11,[x29, #-0xe8]
7101cfc3ec  mov w11,#0x6d72
7101cfc3f0  sturh w11,[x29, #-0xe0]
7101cfc3f4  mov w11,#0x7461
7101cfc3f8  movk w11,#0x305f, LSL #16
7101cfc3fc  stur w11,[x9, #0x1a]
7101cfc400  mov w9,#0x31
7101cfc404  mov w11,#0x6d
7101cfc408  sturh w9,[x29, #-0xda]
7101cfc40c  mov w9,#0x89
7101cfc410  mul w8,w8,w9
7101cfc414  and w11,w11,#0xff
7101cfc418  eor w8,w8,w11
7101cfc41c  ldrb w11,[x10], #0x1
7101cfc420  cbnz w11,0x7101cfc410
7101cfc424  b 0x7101cfc4ac
7101cfc428  mov x12,#0x656d
7101cfc42c  movk x12,#0x5f6c, LSL #16
7101cfc430  mov x10,#0x1700000000
7101cfc434  sub x11,x29,#0xf8
7101cfc438  movk x12,#0x7572, LSL #32
7101cfc43c  movk x12,#0x656c, LSL #48
7101cfc440  stp x10,x12,[x29, #-0xf8]
7101cfc444  add x7,x11,#0x8
7101cfc448  add x10,x11,#0x9
7101cfc44c  mov x11,#0x745f
7101cfc450  movk x11,#0x6165, LSL #16
7101cfc454  movk x11,#0x5f6d, LSL #32
7101cfc458  movk x11,#0x6f66, LSL #48
7101cfc45c  stur x11,[x29, #-0xe8]
7101cfc460  mov w11,#0x6d72
7101cfc464  sturh w11,[x29, #-0xe0]
7101cfc468  mov w11,#0x7461
7101cfc46c  movk w11,#0x305f, LSL #16
7101cfc470  stur w11,[x9, #0x1a]
7101cfc474  mov w9,#0x32
7101cfc478  mov w11,#0x6d
7101cfc47c  sturh w9,[x29, #-0xda]
7101cfc480  mov w9,#0x89
7101cfc484  mul w8,w8,w9
7101cfc488  and w11,w11,#0xff
7101cfc48c  eor w8,w8,w11
7101cfc490  ldrb w11,[x10], #0x1
7101cfc494  cbnz w11,0x7101cfc484
7101cfc498  b 0x7101cfc4ac
7101cfc49c  sub x10,x29,#0xf8
7101cfc4a0  add x7,x10,#0x8
7101cfc4a4  strb wzr,[x9, #0x8]
7101cfc4a8  stur wzr,[x29, #-0xf4]
7101cfc4ac  add x0,sp,#0x38
7101cfc4b0  mov w1,#0x800
7101cfc4b4  mov w3,#0x4
7101cfc4b8  mov w5,w24
7101cfc4bc  stur w8,[x29, #-0xf8]
7101cfc4c0  add x25,sp,#0x38
7101cfc4c4  bl 0x71037ab600
7101cfc4c8  ldrh w11,[sp, #0x38]
7101cfc4cc  cbz w11,0x7101cfc538
7101cfc4d0  mov x10,xzr
7101cfc4d4  mov w9,wzr
7101cfc4d8  mov w22,wzr
7101cfc4dc  orr w8,wzr,#0x3
7101cfc4e0  orr w12,w11,#0x1
7101cfc4e4  and w12,w12,#0xffff
7101cfc4e8  cmp w12,#0xf
7101cfc4ec  b.ne 0x7101cfc510
7101cfc4f0  and w11,w11,#0xffff
7101cfc4f4  cmp w11,#0xe
7101cfc4f8  b.ne 0x7101cfc518
7101cfc4fc  add x10,x25,x10, LSL #0x1
7101cfc500  ldrh w10,[x10, #0x6]
7101cfc504  lsr w10,w10,#0x1
7101cfc508  add w11,w10,#0x4
7101cfc50c  b 0x7101cfc520
7101cfc510  mov w11,#0x1
7101cfc514  b 0x7101cfc520
7101cfc518  cmp w11,#0xf
7101cfc51c  csel w11,w8,wzr,eq
7101cfc520  add w10,w11,w9
7101cfc524  add w22,w11,w22
7101cfc528  mov w9,w10
7101cfc52c  ldrh w11,[x25, w10, UXTW #0x1]
7101cfc530  cbnz w11,0x7101cfc4e0
7101cfc534  b 0x7101cfc53c
7101cfc538  mov w22,wzr
7101cfc53c  ldrsw x26,[sp, #0x1080]
7101cfc540  add x27,x26,w22, SXTW 
7101cfc544  cmp w27,#0x20
7101cfc548  b.lt 0x7101cfc60c
7101cfc54c  add x8,x27,#0x1
7101cfc550  adds x8,x8,x8
7101cfc554  csinv x8,x8,xzr,cc
7101cfc558  cmp x8,#0x0
7101cfc55c  csinc x25,x8,xzr,ne
7101cfc560  mov w0,#0x10
7101cfc564  mov x1,x25
7101cfc568  bl 0x710392e290
7101cfc56c  mov x24,x0
7101cfc570  cbnz x0,0x7101cfc5b8
7101cfc574  adrp x8,0x7105332000
7101cfc578  ldr x0,[x8, #0xf00]
7101cfc57c  cbz x0,0x7101cfc5b4
7101cfc580  stur wzr,[x29, #-0xf8]
7101cfc584  stur x25,[x29, #-0xb0]
7101cfc588  ldr x8,[x0]
7101cfc58c  ldr x8,[x8, #0x30]
7101cfc590  sub x1,x29,#0xf8
7101cfc594  sub x2,x29,#0xb0
7101cfc598  blr x8
7101cfc59c  tbz w0,#0x0,0x7101cfc5b4
7101cfc5a0  mov w0,#0x10
7101cfc5a4  mov x1,x25
7101cfc5a8  bl 0x710392e290
7101cfc5ac  mov x24,x0
7101cfc5b0  cbnz x0,0x7101cfc5b8
7101cfc5b4  mov x24,xzr
7101cfc5b8  ldr x25,[sp, #0x1078]
7101cfc5bc  lsl x26,x26,#0x1
7101cfc5c0  mov x0,x24
7101cfc5c4  mov x1,x25
7101cfc5c8  mov x2,x26
7101cfc5cc  bl 0x71039c00e0
7101cfc5d0  add x0,x24,x26
7101cfc5d4  sbfiz x2,x22,#0x1,#0x20
7101cfc5d8  add x1,sp,#0x38
7101cfc5dc  bl 0x71039c00e0
7101cfc5e0  add x8,sp,#0x1, LSL #12
7101cfc5e4  add x8,x8,#0x38
7101cfc5e8  cmp x8,x25
7101cfc5ec  b.eq 0x7101cfc5fc
7101cfc5f0  cbz x25,0x7101cfc5fc
7101cfc5f4  mov x0,x25
7101cfc5f8  bl 0x710392eb40
7101cfc5fc  strh wzr,[sp, #0x1038]
7101cfc600  str wzr,[sp, #0x1080]
7101cfc604  str x24,[sp, #0x1078]
7101cfc608  b 0x7101cfc62c
7101cfc60c  add x8,sp,#0x1, LSL #12
7101cfc610  add x8,x8,#0x38
7101cfc614  add x0,x8,x26, LSL #0x1
7101cfc618  sbfiz x2,x22,#0x1,#0x20
7101cfc61c  add x1,sp,#0x38
7101cfc620  str x8,[sp, #0x1078]
7101cfc624  bl 0x71039c00e0
7101cfc628  ldr x24,[sp, #0x1078]
7101cfc62c  adrp x22,0x7105329000
7101cfc630  strh wzr,[x24, w27, SXTW #0x1]
7101cfc634  ldr x8,[x22, #0x740]
7101cfc638  str w27,[sp, #0x1080]
7101cfc63c  ldr x0,[x8, #0x8]
7101cfc640  ldr x8,[x0, #0x80]!
7101cfc644  ldr x9,[x0, #0x8]
7101cfc648  subs x9,x9,x8
7101cfc64c  b.eq 0x7101cfc8c4
7101cfc650  ldr w8,[x8, #0x814]
7101cfc654  lsr x9,x9,#0x5
7101cfc658  mov w10,#0xfc1
7101cfc65c  movk w10,#0xc0fc, LSL #16
7101cfc660  mul w9,w9,w10
7101cfc664  ldr x4,[sp, #0x1078]
7101cfc668  adrp x1,0x71043ad000
7101cfc66c  add x1,x1,#0x9a0
7101cfc670  add x0,sp,#0x28
7101cfc674  mov w2,#0x2
7101cfc678  cmp w8,#0x1
7101cfc67c  cset w8,hi
7101cfc680  lsl w3,w9,w8
7101cfc684  bl 0x710377a280
7101cfc688  ldr x0,[sp, #0x1078]
7101cfc68c  add x8,sp,#0x1, LSL #12
7101cfc690  add x8,x8,#0x38
7101cfc694  cmp x8,x0
7101cfc698  b.eq 0x7101cfc6a4
7101cfc69c  cbz x0,0x7101cfc6a4
7101cfc6a0  bl 0x710392eb40
7101cfc6a4  ldr x0,[sp, #0x30]
7101cfc6a8  stp x28,xzr,[sp, #0x28]
7101cfc6ac  cbz x0,0x7101cfc6b4
7101cfc6b0  bl 0x710392eb40
7101cfc6b4  ldr x24,[sp, #0x10]
7101cfc6b8  adrp x8,0x710523d000
7101cfc6bc  add x8,x8,#0x988
7101cfc6c0  stp x8,xzr,[sp, #0x8]
7101cfc6c4  cbz x24,0x7101cfc6e0
7101cfc6c8  ldr x0,[x24, #0x18]
7101cfc6cc  stp x28,xzr,[x24, #0x10]
7101cfc6d0  cbz x0,0x7101cfc6d8
7101cfc6d4  bl 0x710392eb40
7101cfc6d8  mov x0,x24
7101cfc6dc  bl 0x710392eb40
7101cfc6e0  fmov s8,0x3f800000
7101cfc6e4  ldr x0,[x23, #0x90]
7101cfc6e8  adrp x1,0x7104348000
7101cfc6ec  add x1,x1,#0x100
7101cfc6f0  mov v0.16B,v8.16B
7101cfc6f4  bl 0x7103778300
7101cfc6f8  ldr x8,[x23, #0x80]
7101cfc6fc  ldr x8,[x8]
7101cfc700  ldr x0,[x8, #0x10]
7101cfc704  mov v0.16B,v8.16B
7101cfc708  adrp x1,0x710435b000
7101cfc70c  add x1,x1,#0x9a9
7101cfc710  bl 0x7103778300
7101cfc714  ldr x8,[x23, #0x80]
7101cfc718  ldr x8,[x8]
7101cfc71c  ldr x0,[x8, #0x10]
7101cfc720  tbz w19,#0x0,0x7101cfc730
7101cfc724  adrp x1,0x710435b000
7101cfc728  add x1,x1,#0x9b6
7101cfc72c  b 0x7101cfc738
7101cfc730  adrp x1,0x71043be000
7101cfc734  add x1,x1,#0x863
7101cfc738  fmov s0,0x3f800000
7101cfc73c  bl 0x7103778300
7101cfc740  ldr x8,[x22, #0x740]
7101cfc744  ldr x8,[x8, #0x8]
7101cfc748  ldr w9,[x8, #0x4d8]
7101cfc74c  cmp w9,#0x1
7101cfc750  b.eq 0x7101cfc76c
7101cfc754  cmp w9,#0x2
7101cfc758  b.ne 0x7101cfc780
7101cfc75c  ldrb w9,[x8, #0x568]
7101cfc760  cbz w9,0x7101cfc880
7101cfc764  add x9,x8,#0x738
7101cfc768  b 0x7101cfc78c
7101cfc76c  ldp x9,x10,[x8, #0x1b8]
7101cfc770  cmp x10,x9
7101cfc774  b.ne 0x7101cfc78c
7101cfc778  add x0,x8,#0x1b8
7101cfc77c  bl 0x71039c1330
7101cfc780  ldp x9,x10,[x8, #0x1a0]
7101cfc784  cmp x10,x9
7101cfc788  b.eq 0x7101cfc8c8
7101cfc78c  ldr w8,[x9]
7101cfc790  stur w8,[x29, #-0xf8]
7101cfc794  ldr x8,[x21]
7101cfc798  ldr x8,[x8]
7101cfc79c  add x0,x8,#0x8
7101cfc7a0  adrp x1,0x710436c000
7101cfc7a4  add x1,x1,#0x5ce
7101cfc7a8  sub x8,x29,#0xb0
7101cfc7ac  bl 0x7103776910
7101cfc7b0  sub x0,x29,#0xb0
7101cfc7b4  mov w1,#0x1
7101cfc7b8  sub x2,x29,#0xf8
7101cfc7bc  bl 0x7103779d90
7101cfc7c0  ldur x0,[x29, #-0xa8]
7101cfc7c4  stp x28,xzr,[x29, #-0xb0]
7101cfc7c8  cbz x0,0x7101cfc7d0
7101cfc7cc  bl 0x710392eb40
7101cfc7d0  adrp x1,0x710424f000
7101cfc7d4  add x1,x1,#0x713
7101cfc7d8  add x8,sp,#0x38
7101cfc7dc  mov x0,x20
7101cfc7e0  bl 0x7103776910
7101cfc7e4  add x0,sp,#0x38
7101cfc7e8  mov w1,#0x1
7101cfc7ec  sub x2,x29,#0xf8
7101cfc7f0  bl 0x7103779d90
7101cfc7f4  ldr x0,[sp, #0x40]
7101cfc7f8  stp x28,xzr,[sp, #0x38]
7101cfc7fc  cbz x0,0x7101cfc804
7101cfc800  bl 0x710392eb40
7101cfc804  add x8,sp,#0x1, LSL #12
7101cfc808  adrp x1,0x7104433000
7101cfc80c  add x1,x1,#0x34b
7101cfc810  add x8,x8,#0x38
7101cfc814  mov x0,x20
7101cfc818  bl 0x7103776910
7101cfc81c  add x0,sp,#0x1, LSL #12
7101cfc820  add x0,x0,#0x38
7101cfc824  mov w1,#0x1
7101cfc828  sub x2,x29,#0xf8
7101cfc82c  bl 0x7103779d90
7101cfc830  ldr x0,[sp, #0x1040]
7101cfc834  str x28,[sp, #0x1038]
7101cfc838  str xzr,[sp, #0x1040]
7101cfc83c  cbz x0,0x7101cfc844
7101cfc840  bl 0x710392eb40
7101cfc844  ldur x8,[x29, #-0x58]
7101cfc848  ldr x8,[x8]
7101cfc84c  adrp x1,0x7104545000
7101cfc850  add x1,x1,#0x4d8
7101cfc854  add x0,x8,#0x8
7101cfc858  add sp,sp,#0x1, LSL #12
7101cfc85c  add sp,sp,#0x120
7101cfc860  ldp x29,x30,[sp, #0x60]
7101cfc864  ldp x20,x19,[sp, #0x50]
7101cfc868  ldp x22,x21,[sp, #0x40]
7101cfc86c  ldp x24,x23,[sp, #0x30]
7101cfc870  ldp x26,x25,[sp, #0x20]
7101cfc874  ldp x28,x27,[sp, #0x10]
7101cfc878  ldr d8,[sp], #0x70
7101cfc87c  b 0x710323eba0
7101cfc880  b 0x7101cfc790
7101cfc884  adrp x0,0x7105314000
7101cfc888  add x0,x0,#0x4d8
7101cfc88c  bl 0x71039c06b0
7101cfc890  cbz w0,0x7101cfc240
7101cfc894  bl 0x7101764000
7101cfc898  adrp x0,0x7101763000
7101cfc89c  add x0,x0,#0xc40
7101cfc8a0  adrp x1,0x71052c5000
7101cfc8a4  add x1,x1,#0x180
7101cfc8a8  adrp x2,0x7104f17000
7101cfc8ac  add x2,x2,#0x0
7101cfc8b0  bl 0x71000001c0
7101cfc8b4  adrp x0,0x7105314000
7101cfc8b8  add x0,x0,#0x4d8
7101cfc8bc  bl 0x71039c06c0
7101cfc8c0  b 0x7101cfc240
7101cfc8c4  bl 0x71039c1330
7101cfc8c8  add x0,x8,#0x1a0
7101cfc8cc  bl 0x71039c1330
