// addr:      7101eacc60
// offset:    0x1eacc60
// name:      FUN_7101eacc60
// mangled:   
// size:      9288

7101eacc60  stp x28,x27,[sp, #-0x60]!
7101eacc64  stp x26,x25,[sp, #0x10]
7101eacc68  stp x24,x23,[sp, #0x20]
7101eacc6c  stp x22,x21,[sp, #0x30]
7101eacc70  stp x20,x19,[sp, #0x40]
7101eacc74  stp x29,x30,[sp, #0x50]
7101eacc78  add x29,sp,#0x50
7101eacc7c  sub sp,sp,#0x2f0
7101eacc80  adrp x8,0x71050b2000
7101eacc84  add x8,x8,#0x808
7101eacc88  mov x27,x0
7101eacc8c  stp x8,xzr,[x0]
7101eacc90  orr x8,xzr,#0x1ffffffff
7101eacc94  stp xzr,x8,[x0, #0x60]
7101eacc98  mov w8,#0x1
7101eacc9c  stp xzr,xzr,[x0, #0x10]
7101eacca0  strb wzr,[x0, #0x58]
7101eacca4  str x1,[x0, #0x78]
7101eacca8  strb w8,[x0, #0x70]
7101eaccac  stp xzr,xzr,[x0, #0x48]
7101eaccb0  mov w0,#0x10
7101eaccb4  str x1,[sp, #0x50]
7101eaccb8  mov w1,#0x188
7101eaccbc  bl 0x710392e290
7101eaccc0  mov x25,x0
7101eaccc4  cbnz x0,0x7101eacd10
7101eaccc8  adrp x8,0x7105332000
7101eacccc  ldr x0,[x8, #0xf00]
7101eaccd0  cbz x0,0x7101eacd0c
7101eaccd4  mov w8,#0x188
7101eaccd8  str wzr,[sp, #0x150]
7101eaccdc  add x1,sp,#0x150
7101eacce0  str x8,[sp, #0x1b0]
7101eacce4  ldr x8,[x0]
7101eacce8  ldr x8,[x8, #0x30]
7101eaccec  add x2,sp,#0x1b0
7101eaccf0  blr x8
7101eaccf4  tbz w0,#0x0,0x7101eacd0c
7101eaccf8  mov w1,#0x188
7101eaccfc  mov w0,#0x10
7101eacd00  bl 0x710392e290
7101eacd04  mov x25,x0
7101eacd08  cbnz x0,0x7101eacd10
7101eacd0c  mov x25,xzr
7101eacd10  mov w8,#0x1000
7101eacd14  str w8,[x25, #0x8]
7101eacd18  mov x8,x25
7101eacd1c  str xzr,[x8, #0x10]!
7101eacd20  str xzr,[x25, #0x38]
7101eacd24  str x8,[sp, #0x18]
7101eacd28  mov x8,x25
7101eacd2c  stp xzr,xzr,[x25, #0x18]
7101eacd30  mov x10,x25
7101eacd34  mov x19,x25
7101eacd38  orr x24,xzr,#-0x100000000
7101eacd3c  mov x21,x25
7101eacd40  str xzr,[x8, #0x30]!
7101eacd44  str x8,[x25, #0x28]
7101eacd48  mov x8,x25
7101eacd4c  mov w22,#0x2198
7101eacd50  movk w22,#0x3, LSL #16
7101eacd54  add x28,x25,#0x50
7101eacd58  str xzr,[x8, #0x40]!
7101eacd5c  str x8,[sp, #0x48]
7101eacd60  adrp x8,0x71050b2000
7101eacd64  add x8,x8,#0x6a0
7101eacd68  add x9,x8,#0x50
7101eacd6c  str x9,[x10, #0x48]!
7101eacd70  str x10,[sp, #0x28]
7101eacd74  str x8,[x25]
7101eacd78  str x25,[x25, #0x50]
7101eacd7c  str xzr,[x19, #0x58]!
7101eacd80  stur x24,[x25, #0xe4]
7101eacd84  mov w8,#0xffffffff
7101eacd88  str xzr,[x25, #0x60]
7101eacd8c  str wzr,[x25, #0xec]
7101eacd90  stp xzr,xzr,[x25, #0x68]
7101eacd94  str xzr,[x21, #0xf8]!
7101eacd98  add x0,x21,#0x8
7101eacd9c  stur w8,[x21, #-0x8]
7101eacda0  sturb wzr,[x21, #-0x4]
7101eacda4  stur wzr,[x21, #-0x18]
7101eacda8  stur xzr,[x21, #-0x80]
7101eacdac  stp xzr,xzr,[x21, #-0x28]
7101eacdb0  stp xzr,xzr,[x21, #-0x38]
7101eacdb4  stp xzr,xzr,[x21, #-0x48]
7101eacdb8  stp xzr,xzr,[x21, #-0x58]
7101eacdbc  stp xzr,xzr,[x21, #-0x68]
7101eacdc0  stp xzr,xzr,[x21, #-0x78]
7101eacdc4  str x0,[sp, #0x38]
7101eacdc8  bl 0x71032d6000
7101eacdcc  add x0,x21,#0x18
7101eacdd0  str x0,[sp, #0x40]
7101eacdd4  bl 0x71032cc410
7101eacdd8  add x8,x21,#0x68
7101eacddc  mov w0,#0x10
7101eacde0  mov x1,x22
7101eacde4  stp xzr,xzr,[x21, #0x68]
7101eacde8  str x8,[sp, #0x20]
7101eacdec  str x8,[x21, #0x60]
7101eacdf0  str wzr,[x21, #0x58]
7101eacdf4  str xzr,[x21, #0x40]
7101eacdf8  stp xzr,xzr,[x21, #0x48]
7101eacdfc  bl 0x710392e290
7101eace00  mov x22,x0
7101eace04  cbnz x0,0x7101eace58
7101eace08  adrp x8,0x7105332000
7101eace0c  ldr x0,[x8, #0xf00]
7101eace10  cbz x0,0x7101eace54
7101eace14  mov w8,#0x2198
7101eace18  movk w8,#0x3, LSL #16
7101eace1c  str wzr,[sp, #0x150]
7101eace20  str x8,[sp, #0x1b0]
7101eace24  ldr x8,[x0]
7101eace28  ldr x8,[x8, #0x30]
7101eace2c  add x1,sp,#0x150
7101eace30  add x2,sp,#0x1b0
7101eace34  blr x8
7101eace38  tbz w0,#0x0,0x7101eace54
7101eace3c  mov w0,#0x10
7101eace40  mov w1,#0x2198
7101eace44  movk w1,#0x3, LSL #16
7101eace48  bl 0x710392e290
7101eace4c  mov x22,x0
7101eace50  cbnz x0,0x7101eace58
7101eace54  mov x22,xzr
7101eace58  add x8,x21,#0x40
7101eace5c  str x8,[sp, #0x30]
7101eace60  mov x20,#0xff0000000000
7101eace64  orr x8,xzr,#0x200000000
7101eace68  add x0,x22,#0x8
7101eace6c  mov w2,#0x10a
7101eace70  mov w1,wzr
7101eace74  movk x20,#0xd9ff, LSL #48
7101eace78  str x8,[x22]
7101eace7c  add x26,x22,#0x134
7101eace80  bl 0x71039c02a0
7101eace84  mov w23,#0x1
7101eace88  add x0,x22,#0x158
7101eace8c  add x8,x22,#0x14f
7101eace90  mov w2,#0x2040
7101eace94  movk w2,#0x3, LSL #16
7101eace98  str x23,[x26]
7101eace9c  mov w1,wzr
7101eacea0  str xzr,[x8]
7101eacea4  stp x20,xzr,[x22, #0x140]
7101eacea8  bl 0x71039c02a0
7101eaceac  add x0,x25,#0x180
7101eaceb0  str x22,[x25, #0x170]
7101eaceb4  strb w23,[x25, #0x178]
7101eaceb8  bl 0x71033841c0
7101eacebc  adrp x8,0x7101eaa000
7101eacec0  add x8,x8,#0x430
7101eacec4  adrp x9,0x7101eaa000
7101eacec8  add x9,x9,#0x440
7101eacecc  mov x0,x28
7101eaced0  stp x8,xzr,[x25, #0x78]
7101eaced4  stp x9,xzr,[x25, #0x88]
7101eaced8  stp xzr,xzr,[x19]
7101eacedc  stur xzr,[x25, #0xdc]
7101eacee0  stur xzr,[x25, #0xd4]
7101eacee4  stur xzr,[x25, #0xcc]
7101eacee8  stur xzr,[x25, #0xc4]
7101eaceec  stur xzr,[x25, #0xbc]
7101eacef0  stur xzr,[x25, #0xb4]
7101eacef4  stur xzr,[x25, #0xac]
7101eacef8  stur xzr,[x25, #0xa4]
7101eacefc  stur xzr,[x25, #0x9c]
7101eacf00  stur x24,[x25, #0xe4]
7101eacf04  stur x24,[x25, #0xec]
7101eacf08  strb wzr,[x25, #0xf4]
7101eacf0c  str wzr,[x25, #0x98]
7101eacf10  bl 0x7101eaa4a0
7101eacf14  mov w8,#0x1000
7101eacf18  str w8,[x25, #0x8]
7101eacf1c  adrp x28,0x710532f000
7101eacf20  ldr x8,[x28, #0x860]
7101eacf24  cbnz x8,0x7101eacff8
7101eacf28  mov w0,#0x10
7101eacf2c  mov w1,#0x8
7101eacf30  bl 0x710392e290
7101eacf34  mov x22,x0
7101eacf38  cbnz x0,0x7101eacf84
7101eacf3c  adrp x8,0x7105332000
7101eacf40  ldr x0,[x8, #0xf00]
7101eacf44  cbz x0,0x7101eacf80
7101eacf48  mov w8,#0x8
7101eacf4c  str wzr,[sp, #0x150]
7101eacf50  add x1,sp,#0x150
7101eacf54  str x8,[sp, #0x1b0]
7101eacf58  ldr x8,[x0]
7101eacf5c  ldr x8,[x8, #0x30]
7101eacf60  add x2,sp,#0x1b0
7101eacf64  blr x8
7101eacf68  tbz w0,#0x0,0x7101eacf80
7101eacf6c  mov w0,#0x10
7101eacf70  mov w1,#0x8
7101eacf74  bl 0x710392e290
7101eacf78  mov x22,x0
7101eacf7c  cbnz x0,0x7101eacf84
7101eacf80  mov x22,xzr
7101eacf84  mov w0,#0x10
7101eacf88  mov w1,#0x20
7101eacf8c  bl 0x710392e290
7101eacf90  cbnz x0,0x7101eacfd8
7101eacf94  adrp x8,0x7105332000
7101eacf98  ldr x0,[x8, #0xf00]
7101eacf9c  cbz x0,0x7101eacfd4
7101eacfa0  mov w8,#0x20
7101eacfa4  str wzr,[sp, #0x150]
7101eacfa8  add x1,sp,#0x150
7101eacfac  str x8,[sp, #0x1b0]
7101eacfb0  ldr x8,[x0]
7101eacfb4  ldr x8,[x8, #0x30]
7101eacfb8  add x2,sp,#0x1b0
7101eacfbc  blr x8
7101eacfc0  tbz w0,#0x0,0x7101eacfd4
7101eacfc4  mov w0,#0x10
7101eacfc8  mov w1,#0x20
7101eacfcc  bl 0x710392e290
7101eacfd0  cbnz x0,0x7101eacfd8
7101eacfd4  mov x0,xzr
7101eacfd8  mov x8,x0
7101eacfdc  mov w9,#0x1
7101eacfe0  str xzr,[x0, #0x10]
7101eacfe4  str xzr,[x8, #0x8]!
7101eacfe8  str x8,[x0]
7101eacfec  str w9,[x0, #0x18]
7101eacff0  str x0,[x22]
7101eacff4  str x22,[x28, #0x860]
7101eacff8  adrp x19,0x7105325000
7101eacffc  ldr x8,[x19, #0xca8]
7101ead000  cbnz x8,0x7101ead06c
7101ead004  mov w0,#0x10
7101ead008  mov w1,#0x10
7101ead00c  bl 0x710392e290
7101ead010  mov x22,x0
7101ead014  cbnz x0,0x7101ead060
7101ead018  adrp x8,0x7105332000
7101ead01c  ldr x0,[x8, #0xf00]
7101ead020  cbz x0,0x7101ead05c
7101ead024  mov w8,#0x10
7101ead028  str wzr,[sp, #0x150]
7101ead02c  add x1,sp,#0x150
7101ead030  str x8,[sp, #0x1b0]
7101ead034  ldr x8,[x0]
7101ead038  ldr x8,[x8, #0x30]
7101ead03c  add x2,sp,#0x1b0
7101ead040  blr x8
7101ead044  tbz w0,#0x0,0x7101ead05c
7101ead048  mov w0,#0x10
7101ead04c  mov w1,#0x10
7101ead050  bl 0x710392e290
7101ead054  mov x22,x0
7101ead058  cbnz x0,0x7101ead060
7101ead05c  mov x22,xzr
7101ead060  mov x0,x22
7101ead064  bl 0x7101ccc7b0
7101ead068  str x22,[x19, #0xca8]
7101ead06c  ldr x0,[sp, #0x30]
7101ead070  str x25,[x27, #0x80]
7101ead074  bl 0x7101ebc290
7101ead078  ldr x8,[x28, #0x860]
7101ead07c  mov w0,#0x10
7101ead080  mov w1,#0x2198
7101ead084  movk w1,#0x3, LSL #16
7101ead088  str x8,[sp, #0x30]
7101ead08c  bl 0x710392e290
7101ead090  mov x27,x0
7101ead094  cbnz x0,0x7101ead0e8
7101ead098  adrp x8,0x7105332000
7101ead09c  ldr x0,[x8, #0xf00]
7101ead0a0  cbz x0,0x7101ead0e4
7101ead0a4  mov w8,#0x2198
7101ead0a8  movk w8,#0x3, LSL #16
7101ead0ac  str wzr,[sp, #0x150]
7101ead0b0  str x8,[sp, #0x1b0]
7101ead0b4  ldr x8,[x0]
7101ead0b8  ldr x8,[x8, #0x30]
7101ead0bc  add x1,sp,#0x150
7101ead0c0  add x2,sp,#0x1b0
7101ead0c4  blr x8
7101ead0c8  tbz w0,#0x0,0x7101ead0e4
7101ead0cc  mov w0,#0x10
7101ead0d0  mov w1,#0x2198
7101ead0d4  movk w1,#0x3, LSL #16
7101ead0d8  bl 0x710392e290
7101ead0dc  mov x27,x0
7101ead0e0  cbnz x0,0x7101ead0e8
7101ead0e4  mov x27,xzr
7101ead0e8  orr x8,xzr,#0x200000000
7101ead0ec  add x0,x27,#0x8
7101ead0f0  mov w2,#0x10a
7101ead0f4  mov w1,wzr
7101ead0f8  str x8,[x27]
7101ead0fc  add x19,x27,#0x134
7101ead100  bl 0x71039c02a0
7101ead104  mov w8,#0x1
7101ead108  str x8,[x19]
7101ead10c  add x0,x27,#0x158
7101ead110  add x8,x27,#0x14f
7101ead114  mov w2,#0x2040
7101ead118  movk w2,#0x3, LSL #16
7101ead11c  mov w1,wzr
7101ead120  str xzr,[x8]
7101ead124  stp x20,xzr,[x27, #0x140]
7101ead128  bl 0x71039c02a0
7101ead12c  ldp x24,x28,[x25, #0x138]
7101ead130  cmp x24,x28
7101ead134  b.eq 0x7101ead358
7101ead138  adrp x23,0x7105314000
7101ead13c  ldr x8,[x23, #0x510]
7101ead140  ldr x8,[x8]
7101ead144  ldr x22,[x8, #0x298]
7101ead148  mov w9,#0xc998
7101ead14c  add x9,x27,x9
7101ead150  mov w15,#0x2198
7101ead154  movk w15,#0x3, LSL #16
7101ead158  str x9,[sp, #0x10]
7101ead15c  b 0x7101ead168
7101ead160  ldr x8,[x23, #0x510]
7101ead164  ldr x8,[x8]
7101ead168  ldr w10,[x24]
7101ead16c  ldrb w8,[x8]
7101ead170  cmp w10,#0x0
7101ead174  ccmp w8,#0x0,#0x0,ne
7101ead178  b.ne 0x7101ead34c
7101ead17c  ldr x0,[x22]
7101ead180  ldp x8,x9,[x0]
7101ead184  cmp x8,x9
7101ead188  b.eq 0x7101ead34c
7101ead18c  ldr x11,[x0, #0x58]
7101ead190  cbz x11,0x7101ead34c
7101ead194  mov x12,x0
7101ead198  ldr x13,[x12, #0x50]!
7101ead19c  cbz x13,0x7101ead34c
7101ead1a0  mov x11,x12
7101ead1a4  ldr w14,[x13, #0x1c]
7101ead1a8  cmp w14,w10
7101ead1ac  cset w14,cc
7101ead1b0  csel x11,x11,x13,cc
7101ead1b4  ldr x13,[x13, w14, UXTW #0x3]
7101ead1b8  cbnz x13,0x7101ead1a4
7101ead1bc  cmp x11,x12
7101ead1c0  b.eq 0x7101ead34c
7101ead1c4  ldr w12,[x11, #0x1c]
7101ead1c8  cmp w12,w10
7101ead1cc  b.hi 0x7101ead34c
7101ead1d0  ldrsw x10,[x11, #0x20]
7101ead1d4  cmn w10,#0x1
7101ead1d8  b.eq 0x7101ead34c
7101ead1dc  sub x9,x9,x8
7101ead1e0  mov w11,#0x2198
7101ead1e4  movk w11,#0x3, LSL #16
7101ead1e8  sdiv x9,x9,x11
7101ead1ec  cmp x9,x10
7101ead1f0  b.ls 0x7101eaf094
7101ead1f4  madd x9,x10,x15,x8
7101ead1f8  ldrh w9,[x9, #0x4]
7101ead1fc  cmp w9,#0x2
7101ead200  b.ne 0x7101ead34c
7101ead204  madd x1,x10,x15,x8
7101ead208  mov x0,x27
7101ead20c  mov x2,x15
7101ead210  bl 0x71039c00e0
7101ead214  ldr w2,[x27, #0x160]
7101ead218  mov w15,#0x2198
7101ead21c  movk w15,#0x3, LSL #16
7101ead220  cbz w2,0x7101ead34c
7101ead224  ldr x8,[sp, #0x30]
7101ead228  ldr x0,[x8]
7101ead22c  ldr x1,[sp, #0x10]
7101ead230  bl 0x7103301380
7101ead234  mov w15,#0x2198
7101ead238  movk w15,#0x3, LSL #16
7101ead23c  cbz w0,0x7101ead34c
7101ead240  ldr x20,[sp, #0x20]
7101ead244  ldr w19,[x24]
7101ead248  ldr x26,[x20]
7101ead24c  cbnz x26,0x7101ead268
7101ead250  mov x26,x20
7101ead254  ldr x8,[x20]
7101ead258  cbnz x8,0x7101ead34c
7101ead25c  b 0x7101ead2a8
7101ead260  mov x20,x26
7101ead264  mov x26,x8
7101ead268  ldr w8,[x26, #0x1c]
7101ead26c  cmp w19,w8
7101ead270  b.cs 0x7101ead280
7101ead274  ldr x8,[x26]
7101ead278  cbnz x8,0x7101ead260
7101ead27c  b 0x7101ead29c
7101ead280  cmp w8,w19
7101ead284  b.cs 0x7101ead2a0
7101ead288  mov x20,x26
7101ead28c  ldr x8,[x20, #0x8]!
7101ead290  cbz x8,0x7101ead2a0
7101ead294  mov x26,x8
7101ead298  b 0x7101ead268
7101ead29c  mov x20,x26
7101ead2a0  ldr x8,[x20]
7101ead2a4  cbnz x8,0x7101ead34c
7101ead2a8  str x0,[sp, #0x8]
7101ead2ac  mov w0,#0x10
7101ead2b0  mov w1,#0x28
7101ead2b4  bl 0x710392e290
7101ead2b8  mov x1,x0
7101ead2bc  cbnz x0,0x7101ead308
7101ead2c0  adrp x8,0x7105332000
7101ead2c4  ldr x0,[x8, #0xf00]
7101ead2c8  cbz x0,0x7101ead304
7101ead2cc  mov w8,#0x28
7101ead2d0  str wzr,[sp, #0x150]
7101ead2d4  add x1,sp,#0x150
7101ead2d8  str x8,[sp, #0x1b0]
7101ead2dc  ldr x8,[x0]
7101ead2e0  ldr x8,[x8, #0x30]
7101ead2e4  add x2,sp,#0x1b0
7101ead2e8  blr x8
7101ead2ec  tbz w0,#0x0,0x7101ead304
7101ead2f0  mov w0,#0x10
7101ead2f4  mov w1,#0x28
7101ead2f8  bl 0x710392e290
7101ead2fc  mov x1,x0
7101ead300  cbnz x0,0x7101ead308
7101ead304  mov x1,xzr
7101ead308  ldr x8,[sp, #0x8]
7101ead30c  stp w19,w8,[x1, #0x1c]
7101ead310  str x26,[x1, #0x10]
7101ead314  stp xzr,xzr,[x1]
7101ead318  str x1,[x20]
7101ead31c  ldr x8,[x25, #0x158]
7101ead320  ldr x8,[x8]
7101ead324  cbz x8,0x7101ead330
7101ead328  str x8,[x25, #0x158]
7101ead32c  ldr x1,[x20]
7101ead330  ldr x0,[x25, #0x160]
7101ead334  bl 0x71003e59f0
7101ead338  ldr x8,[x25, #0x168]
7101ead33c  add x8,x8,#0x1
7101ead340  mov w15,#0x2198
7101ead344  movk w15,#0x3, LSL #16
7101ead348  str x8,[x25, #0x168]
7101ead34c  add x24,x24,#0x4
7101ead350  cmp x24,x28
7101ead354  b.ne 0x7101ead160
7101ead358  cbz x27,0x7101ead364
7101ead35c  mov x0,x27
7101ead360  bl 0x710392eb40
7101ead364  ldr x1,[sp, #0x50]
7101ead368  mov x3,#0x91bf
7101ead36c  movk x3,#0x5f0f, LSL #16
7101ead370  adrp x2,0x71050b2000
7101ead374  add x2,x2,#0x720
7101ead378  movk x3,#0x35, LSL #32
7101ead37c  mov w4,#0x1
7101ead380  mov x0,x25
7101ead384  bl 0x71032cb040
7101ead388  ldp x8,x9,[x25, #0x10]
7101ead38c  cmp x9,x8
7101ead390  b.eq 0x7101eaf08c
7101ead394  ldr x8,[x8]
7101ead398  str x8,[sp, #0x20]
7101ead39c  ldr x8,[x8]
7101ead3a0  ldr x8,[x8]
7101ead3a4  add x19,x8,#0x8
7101ead3a8  adrp x8,0x710523d000
7101ead3ac  ldr w8,[x8, #0xc]
7101ead3b0  add x22,sp,#0x150
7101ead3b4  cmp w8,#0xd
7101ead3b8  b.hi 0x7101ead3d0
7101ead3bc  mov w9,#0x3801
7101ead3c0  lsr w8,w9,w8
7101ead3c4  and w8,w8,#0x1
7101ead3c8  str w8,[sp, #0x50]
7101ead3cc  b 0x7101ead3d4
7101ead3d0  str wzr,[sp, #0x50]
7101ead3d4  mov x8,#0x41800000
7101ead3d8  movk x8,#0x4248, LSL #48
7101ead3dc  add x0,sp,#0x1b0
7101ead3e0  stp xzr,x8,[sp, #0x1b0]
7101ead3e4  mov x8,#0x3f800000
7101ead3e8  movk x8,#0x101, LSL #32
7101ead3ec  movk x8,#0x1, LSL #48
7101ead3f0  str x8,[sp, #0x1c0]
7101ead3f4  mov w8,#0x1
7101ead3f8  mov w28,#0x9dc5
7101ead3fc  movk w28,#0x811c, LSL #16
7101ead400  strh wzr,[sp, #0x1c8]
7101ead404  str xzr,[sp, #0x200]
7101ead408  str xzr,[sp, #0x230]
7101ead40c  strb w8,[sp, #0x1ca]
7101ead410  str xzr,[sp, #0x260]
7101ead414  str xzr,[sp, #0x290]
7101ead418  str xzr,[sp, #0x2c0]
7101ead41c  strb wzr,[sp, #0x1d1]
7101ead420  sturh wzr,[x22, #0x7f]
7101ead424  stur wzr,[x22, #0x7b]
7101ead428  bl 0x710337e790
7101ead42c  ldp x8,x9,[x25, #0x138]
7101ead430  ldr x4,[sp, #0x28]
7101ead434  sub x8,x9,x8
7101ead438  lsr x8,x8,#0x2
7101ead43c  str w8,[sp, #0x1b4]
7101ead440  mov w8,#0x101
7101ead444  adrp x2,0x710424f000
7101ead448  add x2,x2,#0xc05
7101ead44c  add x3,sp,#0x1b0
7101ead450  mov x0,x21
7101ead454  mov x1,x19
7101ead458  strh w8,[sp, #0x1cc]
7101ead45c  str x19,[sp, #0x30]
7101ead460  bl 0x7103781a20
7101ead464  ldr x0,[x25, #0xf8]
7101ead468  ldr x8,[x0]
7101ead46c  ldr x8,[x8, #0x60]
7101ead470  mov w1,wzr
7101ead474  blr x8
7101ead478  ldr x0,[x25, #0xf8]
7101ead47c  ldr x8,[x0]
7101ead480  ldr x8,[x8, #0x70]
7101ead484  mov w1,wzr
7101ead488  blr x8
7101ead48c  mov x20,#0x6e6d
7101ead490  movk x20,#0x5f75, LSL #16
7101ead494  orr x8,xzr,#0x1e00000000
7101ead498  movk x20,#0x7473, LSL #32
7101ead49c  movk x20,#0x6367, LSL #48
7101ead4a0  str xzr,[sp, #0x198]
7101ead4a4  stp x8,x20,[sp, #0x150]
7101ead4a8  mov x8,#0x6572
7101ead4ac  movk x8,#0x7461, LSL #16
7101ead4b0  movk x8,#0x5f65, LSL #32
7101ead4b4  movk x8,#0x6f74, LSL #48
7101ead4b8  str x8,[sp, #0x160]
7101ead4bc  mov x8,#0x7573
7101ead4c0  movk x8,#0x5f62, LSL #16
7101ead4c4  mov w27,#0x5f70
7101ead4c8  movk x8,#0x6166, LSL #32
7101ead4cc  movk x8,#0x6f76, LSL #48
7101ead4d0  mov w10,#0x6972
7101ead4d4  movk w10,#0x6574, LSL #16
7101ead4d8  strh w27,[sp, #0x168]
7101ead4dc  stur x8,[x22, #0x1a]
7101ead4e0  mov w9,#0x6d
7101ead4e4  stur w10,[x22, #0x22]
7101ead4e8  mov w8,#0x9
7101ead4ec  mov w26,#0x89
7101ead4f0  strb wzr,[sp, #0x176]
7101ead4f4  add x10,sp,#0x150
7101ead4f8  mov w11,w28
7101ead4fc  stp xzr,xzr,[sp, #0x1a0]
7101ead500  mul w11,w11,w26
7101ead504  and w9,w9,#0xff
7101ead508  eor w11,w11,w9
7101ead50c  ldrb w9,[x10, x8, LSL ]
7101ead510  add x8,x8,#0x1
7101ead514  cbnz w9,0x7101ead500
7101ead518  add x0,sp,#0x198
7101ead51c  add x1,sp,#0x150
7101ead520  str w11,[sp, #0x150]
7101ead524  add x19,sp,#0x150
7101ead528  bl 0x71019c1c50
7101ead52c  mov x8,#0x1a00000000
7101ead530  stp x8,x20,[sp, #0x150]
7101ead534  mov x8,#0x6572
7101ead538  movk x8,#0x7461, LSL #16
7101ead53c  movk x8,#0x5f65, LSL #32
7101ead540  movk x8,#0x6f74, LSL #48
7101ead544  str x8,[sp, #0x160]
7101ead548  mov x8,#0x7573
7101ead54c  movk x8,#0x5f62, LSL #16
7101ead550  movk x8,#0x6f70, LSL #32
7101ead554  movk x8,#0x7473, LSL #48
7101ead558  strh w27,[sp, #0x168]
7101ead55c  stur x8,[x22, #0x1a]
7101ead560  mov w9,#0x6d
7101ead564  mov w8,#0x9
7101ead568  mov w10,w28
7101ead56c  strb wzr,[sp, #0x172]
7101ead570  mul w10,w10,w26
7101ead574  and w9,w9,#0xff
7101ead578  eor w10,w10,w9
7101ead57c  ldrb w9,[x19, x8, LSL ]
7101ead580  add x8,x8,#0x1
7101ead584  cbnz w9,0x7101ead570
7101ead588  ldp x8,x9,[sp, #0x1a0]
7101ead58c  cmp x8,x9
7101ead590  str w10,[sp, #0x150]
7101ead594  b.cs 0x7101ead5e4
7101ead598  add x10,sp,#0x150
7101ead59c  mov x9,xzr
7101ead5a0  str wzr,[x8]
7101ead5a4  add x10,x10,#0x8
7101ead5a8  b 0x7101ead5b4
7101ead5ac  add x9,x9,#0x2
7101ead5b0  strb w11,[x12, #0x9]
7101ead5b4  add x11,x10,x9
7101ead5b8  ldrb w13,[x11]
7101ead5bc  cbz w13,0x7101ead5f8
7101ead5c0  add w14,w9,#0x1
7101ead5c4  add x12,x8,x9
7101ead5c8  cmp w14,#0x3f
7101ead5cc  strb w13,[x12, #0x8]
7101ead5d0  b.cs 0x7101ead5f4
7101ead5d4  ldrb w11,[x11, #0x1]
7101ead5d8  cbnz w11,0x7101ead5ac
7101ead5dc  add x9,x9,#0x1
7101ead5e0  b 0x7101ead5f8
7101ead5e4  add x0,sp,#0x198
7101ead5e8  add x1,sp,#0x150
7101ead5ec  bl 0x71019c1c50
7101ead5f0  b 0x7101ead63c
7101ead5f4  add w9,w9,#0x1
7101ead5f8  add x10,x8,#0x8
7101ead5fc  strb wzr,[x10, w9, UXTW ]
7101ead600  str w9,[x8, #0x4]
7101ead604  ldrb w9,[x8, #0x8]
7101ead608  mov w11,w28
7101ead60c  cbz w9,0x7101ead62c
7101ead610  add x10,x8,#0x9
7101ead614  mov w11,w28
7101ead618  mul w11,w11,w26
7101ead61c  and w9,w9,#0xff
7101ead620  eor w11,w11,w9
7101ead624  ldrb w9,[x10], #0x1
7101ead628  cbnz w9,0x7101ead618
7101ead62c  str w11,[x8]
7101ead630  ldr x8,[sp, #0x1a0]
7101ead634  add x8,x8,#0x48
7101ead638  str x8,[sp, #0x1a0]
7101ead63c  orr x8,xzr,#0x1c00000000
7101ead640  stp x8,x20,[sp, #0x150]
7101ead644  mov x8,#0x6572
7101ead648  movk x8,#0x7461, LSL #16
7101ead64c  movk x8,#0x5f65, LSL #32
7101ead650  movk x8,#0x6f74, LSL #48
7101ead654  str x8,[sp, #0x160]
7101ead658  mov x8,#0x7573
7101ead65c  movk x8,#0x5f62, LSL #16
7101ead660  movk x8,#0x6564, LSL #32
7101ead664  movk x8,#0x656c, LSL #48
7101ead668  strh w27,[sp, #0x168]
7101ead66c  stur x8,[x22, #0x1a]
7101ead670  mov w8,#0x6574
7101ead674  mov w9,#0x6d
7101ead678  strb wzr,[sp, #0x174]
7101ead67c  strh w8,[sp, #0x172]
7101ead680  mov w8,#0x9
7101ead684  add x10,sp,#0x150
7101ead688  mov w11,w28
7101ead68c  mul w11,w11,w26
7101ead690  and w9,w9,#0xff
7101ead694  eor w11,w11,w9
7101ead698  ldrb w9,[x10, x8, LSL ]
7101ead69c  add x8,x8,#0x1
7101ead6a0  cbnz w9,0x7101ead68c
7101ead6a4  ldp x8,x9,[sp, #0x1a0]
7101ead6a8  cmp x8,x9
7101ead6ac  str w11,[sp, #0x150]
7101ead6b0  b.cs 0x7101ead700
7101ead6b4  add x10,sp,#0x150
7101ead6b8  mov x9,xzr
7101ead6bc  str wzr,[x8]
7101ead6c0  add x10,x10,#0x8
7101ead6c4  b 0x7101ead6d0
7101ead6c8  add x9,x9,#0x2
7101ead6cc  strb w11,[x12, #0x9]
7101ead6d0  add x11,x10,x9
7101ead6d4  ldrb w13,[x11]
7101ead6d8  cbz w13,0x7101ead718
7101ead6dc  add w14,w9,#0x1
7101ead6e0  add x12,x8,x9
7101ead6e4  cmp w14,#0x3f
7101ead6e8  strb w13,[x12, #0x8]
7101ead6ec  b.cs 0x7101ead714
7101ead6f0  ldrb w11,[x11, #0x1]
7101ead6f4  cbnz w11,0x7101ead6c8
7101ead6f8  add x9,x9,#0x1
7101ead6fc  b 0x7101ead718
7101ead700  add x0,sp,#0x198
7101ead704  add x1,sp,#0x150
7101ead708  bl 0x71019c1c50
7101ead70c  ldr x24,[sp, #0x1a0]
7101ead710  b 0x7101ead75c
7101ead714  add w9,w9,#0x1
7101ead718  add x10,x8,#0x8
7101ead71c  strb wzr,[x10, w9, UXTW ]
7101ead720  str w9,[x8, #0x4]
7101ead724  ldrb w9,[x8, #0x8]
7101ead728  mov w11,w28
7101ead72c  cbz w9,0x7101ead74c
7101ead730  add x10,x8,#0x9
7101ead734  mov w11,w28
7101ead738  mul w11,w11,w26
7101ead73c  and w9,w9,#0xff
7101ead740  eor w11,w11,w9
7101ead744  ldrb w9,[x10], #0x1
7101ead748  cbnz w9,0x7101ead738
7101ead74c  str w11,[x8]
7101ead750  ldr x8,[sp, #0x1a0]
7101ead754  add x24,x8,#0x48
7101ead758  str x24,[sp, #0x1a0]
7101ead75c  ldr x23,[sp, #0x198]
7101ead760  subs x22,x24,x23
7101ead764  strb wzr,[sp, #0x158]
7101ead768  stp xzr,xzr,[sp, #0x148]
7101ead76c  stp xzr,xzr,[sp, #0x138]
7101ead770  b.eq 0x7101ead8ac
7101ead774  mov x9,#0x8e39
7101ead778  movk x9,#0x38e3, LSL #16
7101ead77c  asr x8,x22,#0x3
7101ead780  movk x9,#0xe38e, LSL #32
7101ead784  movk x9,#0x8e38, LSL #48
7101ead788  mul x19,x8,x9
7101ead78c  mov x8,#0xe38e
7101ead790  movk x8,#0x8e38, LSL #16
7101ead794  movk x8,#0x38e3, LSL #32
7101ead798  movk x8,#0x38e, LSL #48
7101ead79c  cmp x19,x8
7101ead7a0  b.hi 0x7101eaf098
7101ead7a4  mov w0,#0x10
7101ead7a8  mov x1,x22
7101ead7ac  bl 0x710392e290
7101ead7b0  cbnz x0,0x7101ead7f4
7101ead7b4  adrp x8,0x7105332000
7101ead7b8  ldr x0,[x8, #0xf00]
7101ead7bc  cbz x0,0x7101ead7f0
7101ead7c0  str wzr,[sp, #0x108]
7101ead7c4  str x22,[sp, #0x120]
7101ead7c8  ldr x8,[x0]
7101ead7cc  ldr x8,[x8, #0x30]
7101ead7d0  add x1,sp,#0x108
7101ead7d4  add x2,sp,#0x120
7101ead7d8  blr x8
7101ead7dc  tbz w0,#0x0,0x7101ead7f0
7101ead7e0  mov w0,#0x10
7101ead7e4  mov x1,x22
7101ead7e8  bl 0x710392e290
7101ead7ec  cbnz x0,0x7101ead7f4
7101ead7f0  mov x0,xzr
7101ead7f4  mov w8,#0x48
7101ead7f8  madd x8,x19,x8,x0
7101ead7fc  cmp x24,x23
7101ead800  stp x0,x0,[sp, #0x138]
7101ead804  str x8,[sp, #0x148]
7101ead808  b.eq 0x7101ead8ac
7101ead80c  mov x8,xzr
7101ead810  str wzr,[x0]
7101ead814  add x9,x23,x8
7101ead818  ldrb w11,[x9, #0x8]
7101ead81c  cbz w11,0x7101ead85c
7101ead820  add x10,x0,x8
7101ead824  strb w11,[x10, #0x8]
7101ead828  ldrb w11,[x9, #0x9]
7101ead82c  cbz w11,0x7101ead850
7101ead830  strb w11,[x10, #0x9]
7101ead834  ldrb w9,[x9, #0xa]
7101ead838  cbz w9,0x7101ead858
7101ead83c  add x8,x8,#0x3
7101ead840  cmp w8,#0x3f
7101ead844  strb w9,[x10, #0xa]
7101ead848  b.cc 0x7101ead814
7101ead84c  b 0x7101ead85c
7101ead850  add x8,x8,#0x1
7101ead854  b 0x7101ead85c
7101ead858  add x8,x8,#0x2
7101ead85c  add x9,x0,#0x8
7101ead860  strb wzr,[x9, w8, UXTW ]
7101ead864  str w8,[x0, #0x4]
7101ead868  ldrb w8,[x0, #0x8]
7101ead86c  mov w10,w28
7101ead870  cbz w8,0x7101ead890
7101ead874  add x9,x0,#0x9
7101ead878  mov w10,w28
7101ead87c  mul w10,w10,w26
7101ead880  and w8,w8,#0xff
7101ead884  eor w10,w10,w8
7101ead888  ldrb w8,[x9], #0x1
7101ead88c  cbnz w8,0x7101ead87c
7101ead890  str w10,[x0]
7101ead894  ldr x8,[sp, #0x140]
7101ead898  add x23,x23,#0x48
7101ead89c  cmp x23,x24
7101ead8a0  add x0,x8,#0x48
7101ead8a4  str x0,[sp, #0x140]
7101ead8a8  b.ne 0x7101ead80c
7101ead8ac  ldr x0,[x25, #0x108]
7101ead8b0  ldr x1,[sp, #0x20]
7101ead8b4  add x2,sp,#0x150
7101ead8b8  add x3,sp,#0x138
7101ead8bc  mov w6,#0x1
7101ead8c0  mov w4,wzr
7101ead8c4  mov w5,wzr
7101ead8c8  bl 0x71032d6470
7101ead8cc  ldr x0,[sp, #0x138]
7101ead8d0  cbz x0,0x7101ead8dc
7101ead8d4  str x0,[sp, #0x140]
7101ead8d8  bl 0x710392eb40
7101ead8dc  ldp x8,x9,[x25, #0x10]
7101ead8e0  sub x9,x9,x8
7101ead8e4  asr x9,x9,#0x3
7101ead8e8  cmp x9,#0x1
7101ead8ec  b.ls 0x7101eaf08c
7101ead8f0  mov w23,w27
7101ead8f4  ldr x27,[x8, #0x8]
7101ead8f8  mov x22,#0x1900000000
7101ead8fc  mov x24,x20
7101ead900  stp x22,x20,[sp, #0x150]
7101ead904  mov x20,#0x6572
7101ead908  movk x20,#0x7461, LSL #16
7101ead90c  mov x12,#0x6f73
7101ead910  movk x12,#0x7472, LSL #16
7101ead914  movk x20,#0x5f65, LSL #32
7101ead918  movk x20,#0x6f74, LSL #48
7101ead91c  movk x12,#0x305f, LSL #32
7101ead920  movk x12,#0x30, LSL #48
7101ead924  str xzr,[sp, #0x120]
7101ead928  mov w9,#0x6d
7101ead92c  mov w8,#0x9
7101ead930  str x20,[sp, #0x160]
7101ead934  add x10,sp,#0x150
7101ead938  mov w11,w28
7101ead93c  strh w23,[sp, #0x168]
7101ead940  add x13,sp,#0x150
7101ead944  stp xzr,xzr,[sp, #0x128]
7101ead948  stur x12,[x13, #0x1a]
7101ead94c  mul w11,w11,w26
7101ead950  and w9,w9,#0xff
7101ead954  eor w11,w11,w9
7101ead958  ldrb w9,[x10, x8, LSL ]
7101ead95c  add x8,x8,#0x1
7101ead960  cbnz w9,0x7101ead94c
7101ead964  add x0,sp,#0x120
7101ead968  add x1,sp,#0x150
7101ead96c  str w11,[sp, #0x150]
7101ead970  add x19,sp,#0x150
7101ead974  bl 0x71019c1c50
7101ead978  mov x11,#0x6f73
7101ead97c  movk x11,#0x7472, LSL #16
7101ead980  mov w9,#0x6d
7101ead984  movk x11,#0x305f, LSL #32
7101ead988  movk x11,#0x31, LSL #48
7101ead98c  str x20,[sp, #0x160]
7101ead990  mov w8,#0x9
7101ead994  mov w10,w28
7101ead998  strh w23,[sp, #0x168]
7101ead99c  add x12,sp,#0x150
7101ead9a0  stp x22,x24,[sp, #0x150]
7101ead9a4  stur x11,[x12, #0x1a]
7101ead9a8  mul w10,w10,w26
7101ead9ac  and w9,w9,#0xff
7101ead9b0  eor w10,w10,w9
7101ead9b4  ldrb w9,[x19, x8, LSL ]
7101ead9b8  add x8,x8,#0x1
7101ead9bc  cbnz w9,0x7101ead9a8
7101ead9c0  ldp x8,x9,[sp, #0x128]
7101ead9c4  cmp x8,x9
7101ead9c8  str w10,[sp, #0x150]
7101ead9cc  b.cs 0x7101eada1c
7101ead9d0  add x10,sp,#0x150
7101ead9d4  mov x9,xzr
7101ead9d8  str wzr,[x8]
7101ead9dc  add x10,x10,#0x8
7101ead9e0  b 0x7101ead9ec
7101ead9e4  add x9,x9,#0x2
7101ead9e8  strb w11,[x12, #0x9]
7101ead9ec  add x11,x10,x9
7101ead9f0  ldrb w13,[x11]
7101ead9f4  cbz w13,0x7101eada38
7101ead9f8  add w14,w9,#0x1
7101ead9fc  add x12,x8,x9
7101eada00  cmp w14,#0x3f
7101eada04  strb w13,[x12, #0x8]
7101eada08  b.cs 0x7101eada34
7101eada0c  ldrb w11,[x11, #0x1]
7101eada10  cbnz w11,0x7101ead9e4
7101eada14  add x9,x9,#0x1
7101eada18  b 0x7101eada38
7101eada1c  add x0,sp,#0x120
7101eada20  add x1,sp,#0x150
7101eada24  bl 0x71019c1c50
7101eada28  ldr w8,[sp, #0x50]
7101eada2c  tbnz w8,#0x0,0x7101eada84
7101eada30  b 0x7101eadb84
7101eada34  add w9,w9,#0x1
7101eada38  add x10,x8,#0x8
7101eada3c  strb wzr,[x10, w9, UXTW ]
7101eada40  str w9,[x8, #0x4]
7101eada44  ldrb w9,[x8, #0x8]
7101eada48  mov w11,w28
7101eada4c  cbz w9,0x7101eada6c
7101eada50  add x10,x8,#0x9
7101eada54  mov w11,w28
7101eada58  mul w11,w11,w26
7101eada5c  and w9,w9,#0xff
7101eada60  eor w11,w11,w9
7101eada64  ldrb w9,[x10], #0x1
7101eada68  cbnz w9,0x7101eada58
7101eada6c  str w11,[x8]
7101eada70  ldr x8,[sp, #0x128]
7101eada74  add x8,x8,#0x48
7101eada78  str x8,[sp, #0x128]
7101eada7c  ldr w8,[sp, #0x50]
7101eada80  tbz w8,#0x0,0x7101eadb84
7101eada84  mov x12,#0x6f73
7101eada88  movk x12,#0x7472, LSL #16
7101eada8c  mov w9,#0x6d
7101eada90  movk x12,#0x305f, LSL #32
7101eada94  movk x12,#0x32, LSL #48
7101eada98  str x20,[sp, #0x160]
7101eada9c  mov w8,#0x9
7101eadaa0  add x10,sp,#0x150
7101eadaa4  strh w23,[sp, #0x168]
7101eadaa8  mov w11,w28
7101eadaac  add x13,sp,#0x150
7101eadab0  stp x22,x24,[sp, #0x150]
7101eadab4  stur x12,[x13, #0x1a]
7101eadab8  mul w11,w11,w26
7101eadabc  and w9,w9,#0xff
7101eadac0  eor w11,w11,w9
7101eadac4  ldrb w9,[x10, x8, LSL ]
7101eadac8  add x8,x8,#0x1
7101eadacc  cbnz w9,0x7101eadab8
7101eadad0  ldp x8,x9,[sp, #0x128]
7101eadad4  cmp x8,x9
7101eadad8  str w11,[sp, #0x150]
7101eadadc  b.cs 0x7101eadb2c
7101eadae0  add x10,sp,#0x150
7101eadae4  mov x9,xzr
7101eadae8  str wzr,[x8]
7101eadaec  add x10,x10,#0x8
7101eadaf0  b 0x7101eadafc
7101eadaf4  add x9,x9,#0x2
7101eadaf8  strb w11,[x12, #0x9]
7101eadafc  add x11,x10,x9
7101eadb00  ldrb w13,[x11]
7101eadb04  cbz w13,0x7101eadb40
7101eadb08  add w14,w9,#0x1
7101eadb0c  add x12,x8,x9
7101eadb10  cmp w14,#0x3f
7101eadb14  strb w13,[x12, #0x8]
7101eadb18  b.cs 0x7101eadb3c
7101eadb1c  ldrb w11,[x11, #0x1]
7101eadb20  cbnz w11,0x7101eadaf4
7101eadb24  add x9,x9,#0x1
7101eadb28  b 0x7101eadb40
7101eadb2c  add x0,sp,#0x120
7101eadb30  add x1,sp,#0x150
7101eadb34  bl 0x71019c1c50
7101eadb38  b 0x7101eadb84
7101eadb3c  add w9,w9,#0x1
7101eadb40  add x10,x8,#0x8
7101eadb44  strb wzr,[x10, w9, UXTW ]
7101eadb48  str w9,[x8, #0x4]
7101eadb4c  ldrb w9,[x8, #0x8]
7101eadb50  mov w11,w28
7101eadb54  cbz w9,0x7101eadb74
7101eadb58  add x10,x8,#0x9
7101eadb5c  mov w11,w28
7101eadb60  mul w11,w11,w26
7101eadb64  and w9,w9,#0xff
7101eadb68  eor w11,w11,w9
7101eadb6c  ldrb w9,[x10], #0x1
7101eadb70  cbnz w9,0x7101eadb60
7101eadb74  str w11,[x8]
7101eadb78  ldr x8,[sp, #0x128]
7101eadb7c  add x8,x8,#0x48
7101eadb80  str x8,[sp, #0x128]
7101eadb84  mov x12,#0x6f73
7101eadb88  movk x12,#0x7472, LSL #16
7101eadb8c  str x20,[sp, #0x160]
7101eadb90  movk x12,#0x305f, LSL #32
7101eadb94  movk x12,#0x33, LSL #48
7101eadb98  mov w9,#0x6d
7101eadb9c  mov w8,#0x9
7101eadba0  add x10,sp,#0x150
7101eadba4  strh w23,[sp, #0x168]
7101eadba8  mov w11,w28
7101eadbac  add x20,sp,#0x150
7101eadbb0  stp x22,x24,[sp, #0x150]
7101eadbb4  stur x12,[x20, #0x1a]
7101eadbb8  mul w11,w11,w26
7101eadbbc  and w9,w9,#0xff
7101eadbc0  eor w11,w11,w9
7101eadbc4  ldrb w9,[x10, x8, LSL ]
7101eadbc8  add x8,x8,#0x1
7101eadbcc  cbnz w9,0x7101eadbb8
7101eadbd0  ldp x8,x9,[sp, #0x128]
7101eadbd4  cmp x8,x9
7101eadbd8  str w11,[sp, #0x150]
7101eadbdc  b.cs 0x7101eadc2c
7101eadbe0  add x10,sp,#0x150
7101eadbe4  mov x9,xzr
7101eadbe8  str wzr,[x8]
7101eadbec  add x10,x10,#0x8
7101eadbf0  b 0x7101eadbfc
7101eadbf4  add x9,x9,#0x2
7101eadbf8  strb w11,[x12, #0x9]
7101eadbfc  add x11,x10,x9
7101eadc00  ldrb w13,[x11]
7101eadc04  cbz w13,0x7101eadc40
7101eadc08  add w14,w9,#0x1
7101eadc0c  add x12,x8,x9
7101eadc10  cmp w14,#0x3f
7101eadc14  strb w13,[x12, #0x8]
7101eadc18  b.cs 0x7101eadc3c
7101eadc1c  ldrb w11,[x11, #0x1]
7101eadc20  cbnz w11,0x7101eadbf4
7101eadc24  add x9,x9,#0x1
7101eadc28  b 0x7101eadc40
7101eadc2c  add x0,sp,#0x120
7101eadc30  add x1,sp,#0x150
7101eadc34  bl 0x71019c1c50
7101eadc38  b 0x7101eadc84
7101eadc3c  add w9,w9,#0x1
7101eadc40  add x10,x8,#0x8
7101eadc44  strb wzr,[x10, w9, UXTW ]
7101eadc48  str w9,[x8, #0x4]
7101eadc4c  ldrb w9,[x8, #0x8]
7101eadc50  mov w11,w28
7101eadc54  cbz w9,0x7101eadc74
7101eadc58  add x10,x8,#0x9
7101eadc5c  mov w11,w28
7101eadc60  mul w11,w11,w26
7101eadc64  and w9,w9,#0xff
7101eadc68  eor w11,w11,w9
7101eadc6c  ldrb w9,[x10], #0x1
7101eadc70  cbnz w9,0x7101eadc60
7101eadc74  str w11,[x8]
7101eadc78  ldr x8,[sp, #0x128]
7101eadc7c  add x8,x8,#0x48
7101eadc80  str x8,[sp, #0x128]
7101eadc84  add x8,sp,#0x150
7101eadc88  add x0,x8,#0x20
7101eadc8c  stp xzr,xzr,[sp, #0x160]
7101eadc90  bl 0x7103776290
7101eadc94  adrp x19,0x71052a8000
7101eadc98  ldr x19,[x19, #0xa80]
7101eadc9c  ldr x0,[sp, #0x30]
7101eadca0  ldr q0,[x19]
7101eadca4  stur xzr,[x20, #0x4]
7101eadca8  adrp x1,0x7104281000
7101eadcac  add x1,x1,#0x205
7101eadcb0  str q0,[x20, #0x10]
7101eadcb4  ldr x8,[sp, #0x178]
7101eadcb8  str xzr,[x8, #0x8]
7101eadcbc  mov w8,#0x8
7101eadcc0  str w8,[sp, #0x150]
7101eadcc4  add x8,sp,#0x108
7101eadcc8  bl 0x7103776640
7101eadccc  ldr x8,[sp, #0x110]
7101eadcd0  ldr x22,[sp, #0x178]
7101eadcd4  str xzr,[sp, #0x110]
7101eadcd8  str x8,[sp, #0x178]
7101eadcdc  cbz x22,0x7101eadd00
7101eadce0  ldr x0,[x22, #0x18]
7101eadce4  adrp x8,0x710523d000
7101eadce8  add x8,x8,#0x9a8
7101eadcec  stp x8,xzr,[x22, #0x10]
7101eadcf0  cbz x0,0x7101eadcf8
7101eadcf4  bl 0x710392eb40
7101eadcf8  mov x0,x22
7101eadcfc  bl 0x710392eb40
7101eadd00  ldr x8,[sp, #0x178]
7101eadd04  adrp x23,0x710523d000
7101eadd08  add x23,x23,#0x988
7101eadd0c  stp x23,xzr,[sp, #0x108]
7101eadd10  ldr x8,[x8, #0x18]
7101eadd14  ldr x8,[x8]
7101eadd18  cbz x8,0x7101eadd34
7101eadd1c  movi v0.2D,#0x0
7101eadd20  add x9,x8,#0x30
7101eadd24  add x8,x8,#0x34
7101eadd28  ld1 {v0.S}[0],[x9]
7101eadd2c  ld1 {v0.S}[1],[x8]
7101eadd30  b 0x7101eadd38
7101eadd34  ldr q0,[x19]
7101eadd38  str q0,[x20, #0x10]
7101eadd3c  ldp x24,x20,[sp, #0x120]
7101eadd40  str xzr,[sp, #0x108]
7101eadd44  stp xzr,xzr,[sp, #0x110]
7101eadd48  subs x22,x20,x24
7101eadd4c  b.eq 0x7101eade90
7101eadd50  mov x9,#0x8e39
7101eadd54  movk x9,#0x38e3, LSL #16
7101eadd58  asr x8,x22,#0x3
7101eadd5c  movk x9,#0xe38e, LSL #32
7101eadd60  movk x9,#0x8e38, LSL #48
7101eadd64  mul x19,x8,x9
7101eadd68  mov x8,#0xe38e
7101eadd6c  movk x8,#0x8e38, LSL #16
7101eadd70  movk x8,#0x38e3, LSL #32
7101eadd74  movk x8,#0x38e, LSL #48
7101eadd78  cmp x19,x8
7101eadd7c  b.hi 0x7101eaf0a0
7101eadd80  mov w0,#0x10
7101eadd84  mov x1,x22
7101eadd88  bl 0x710392e290
7101eadd8c  cbnz x0,0x7101eaddd0
7101eadd90  adrp x8,0x7105332000
7101eadd94  ldr x0,[x8, #0xf00]
7101eadd98  cbz x0,0x7101eaddcc
7101eadd9c  str wzr,[sp, #0xf0]
7101eadda0  str x22,[sp, #0xf8]
7101eadda4  ldr x8,[x0]
7101eadda8  ldr x8,[x8, #0x30]
7101eaddac  add x1,sp,#0xf0
7101eaddb0  add x2,sp,#0xf8
7101eaddb4  blr x8
7101eaddb8  tbz w0,#0x0,0x7101eaddcc
7101eaddbc  mov w0,#0x10
7101eaddc0  mov x1,x22
7101eaddc4  bl 0x710392e290
7101eaddc8  cbnz x0,0x7101eaddd0
7101eaddcc  mov x0,xzr
7101eaddd0  mov w8,#0x48
7101eaddd4  madd x8,x19,x8,x0
7101eaddd8  str x8,[sp, #0x118]
7101eadddc  stp x0,x0,[sp, #0x108]
7101eadde0  cmp x24,x20
7101eadde4  b.ne 0x7101eade08
7101eadde8  b 0x7101eade90
7101eaddec  str w10,[x0]
7101eaddf0  ldr x8,[sp, #0x110]
7101eaddf4  add x0,x8,#0x48
7101eaddf8  add x24,x24,#0x48
7101eaddfc  str x0,[sp, #0x110]
7101eade00  cmp x24,x20
7101eade04  b.eq 0x7101eade90
7101eade08  mov x8,xzr
7101eade0c  str wzr,[x0]
7101eade10  add x9,x24,x8
7101eade14  ldrb w11,[x9, #0x8]
7101eade18  cbz w11,0x7101eade58
7101eade1c  add x10,x0,x8
7101eade20  strb w11,[x10, #0x8]
7101eade24  ldrb w11,[x9, #0x9]
7101eade28  cbz w11,0x7101eade4c
7101eade2c  strb w11,[x10, #0x9]
7101eade30  ldrb w9,[x9, #0xa]
7101eade34  cbz w9,0x7101eade54
7101eade38  add x8,x8,#0x3
7101eade3c  cmp w8,#0x3f
7101eade40  strb w9,[x10, #0xa]
7101eade44  b.cc 0x7101eade10
7101eade48  b 0x7101eade58
7101eade4c  add x8,x8,#0x1
7101eade50  b 0x7101eade58
7101eade54  add x8,x8,#0x2
7101eade58  add x9,x0,#0x8
7101eade5c  strb wzr,[x9, w8, UXTW ]
7101eade60  str w8,[x0, #0x4]
7101eade64  ldrb w8,[x0, #0x8]
7101eade68  mov w10,w28
7101eade6c  cbz w8,0x7101eaddec
7101eade70  add x9,x0,#0x9
7101eade74  mov w10,w28
7101eade78  mul w10,w10,w26
7101eade7c  and w8,w8,#0xff
7101eade80  eor w10,w10,w8
7101eade84  ldrb w8,[x9], #0x1
7101eade88  cbnz w8,0x7101eade78
7101eade8c  b 0x7101eaddec
7101eade90  add x0,sp,#0xf8
7101eade94  bl 0x7103776290
7101eade98  ldr x20,[sp, #0x40]
7101eade9c  add x2,sp,#0x108
7101eadea0  add x3,sp,#0x150
7101eadea4  add x4,sp,#0xf8
7101eadea8  mov x1,x27
7101eadeac  mov x0,x20
7101eadeb0  bl 0x71032ccb70
7101eadeb4  ldr x22,[sp, #0x100]
7101eadeb8  ldr x19,[sp, #0x48]
7101eadebc  stp x23,xzr,[sp, #0xf8]
7101eadec0  cbz x22,0x7101eadee4
7101eadec4  ldr x0,[x22, #0x18]
7101eadec8  adrp x8,0x710523d000
7101eadecc  add x8,x8,#0x9a8
7101eaded0  stp x8,xzr,[x22, #0x10]
7101eaded4  cbz x0,0x7101eadedc
7101eaded8  bl 0x710392eb40
7101eadedc  mov x0,x22
7101eadee0  bl 0x710392eb40
7101eadee4  ldr x0,[sp, #0x108]
7101eadee8  cbz x0,0x7101eadef4
7101eadeec  str x0,[sp, #0x110]
7101eadef0  bl 0x710392eb40
7101eadef4  ldr x8,[x19]
7101eadef8  ldr x8,[x8]
7101eadefc  cbz x8,0x7101eadf08
7101eadf00  ldr x22,[x8]
7101eadf04  b 0x7101eadf0c
7101eadf08  mov x22,xzr
7101eadf0c  adrp x1,0x71043be000
7101eadf10  add x1,x1,#0xd2b
7101eadf14  mov x0,x22
7101eadf18  mov x2,x21
7101eadf1c  bl 0x71033744b0
7101eadf20  ldr x2,[sp, #0x38]
7101eadf24  adrp x1,0x710432a000
7101eadf28  add x1,x1,#0x750
7101eadf2c  mov x0,x22
7101eadf30  bl 0x7103374690
7101eadf34  adrp x1,0x71042d6000
7101eadf38  add x1,x1,#0xa21
7101eadf3c  mov x0,x22
7101eadf40  mov x2,x20
7101eadf44  bl 0x71033745a0
7101eadf48  ldr x21,[x19]
7101eadf4c  ldr x0,[x21]
7101eadf50  cbz x0,0x7101eadf70
7101eadf54  adrp x1,0x71042c5000
7101eadf58  add x1,x1,#0x564
7101eadf5c  adrp x2,0x710439b000
7101eadf60  add x2,x2,#0x9ac
7101eadf64  mov x3,x27
7101eadf68  bl 0x7103375650
7101eadf6c  ldr x21,[x19]
7101eadf70  mov w0,#0x10
7101eadf74  orr w1,wzr,#0x38
7101eadf78  bl 0x710392e290
7101eadf7c  cbnz x0,0x7101eadfc4
7101eadf80  adrp x8,0x7105332000
7101eadf84  ldr x0,[x8, #0xf00]
7101eadf88  cbz x0,0x7101eadfc0
7101eadf8c  orr w8,wzr,#0x38
7101eadf90  str wzr,[sp, #0xf0]
7101eadf94  add x1,sp,#0xf0
7101eadf98  str x8,[sp, #0xf8]
7101eadf9c  ldr x8,[x0]
7101eadfa0  ldr x8,[x8, #0x30]
7101eadfa4  add x2,sp,#0xf8
7101eadfa8  blr x8
7101eadfac  tbz w0,#0x0,0x7101eadfc0
7101eadfb0  mov w0,#0x10
7101eadfb4  orr w1,wzr,#0x38
7101eadfb8  bl 0x710392e290
7101eadfbc  cbnz x0,0x7101eadfc4
7101eadfc0  mov x0,xzr
7101eadfc4  adrp x24,0x71050b2000
7101eadfc8  add x24,x24,#0x740
7101eadfcc  adrp x8,0x7101eaa000
7101eadfd0  add x8,x8,#0xc40
7101eadfd4  stp xzr,xzr,[x0, #0x28]
7101eadfd8  str x24,[x0]
7101eadfdc  str x25,[x0, #0x10]
7101eadfe0  adrp x1,0x7104319000
7101eadfe4  add x1,x1,#0x56f
7101eadfe8  stp x8,xzr,[x0, #0x18]
7101eadfec  add x2,sp,#0xf0
7101eadff0  str wzr,[x0, #0x8]
7101eadff4  str x0,[sp, #0xf0]
7101eadff8  mov x0,x21
7101eadffc  bl 0x7103376af0
7101eae000  ldr x0,[sp, #0xf0]
7101eae004  str xzr,[sp, #0xf0]
7101eae008  cbz x0,0x7101eae018
7101eae00c  ldr x8,[x0]
7101eae010  ldr x8,[x8, #0x8]
7101eae014  blr x8
7101eae018  ldr x21,[x19]
7101eae01c  mov w0,#0x10
7101eae020  orr w1,wzr,#0x38
7101eae024  bl 0x710392e290
7101eae028  cbnz x0,0x7101eae070
7101eae02c  adrp x8,0x7105332000
7101eae030  ldr x0,[x8, #0xf00]
7101eae034  cbz x0,0x7101eae06c
7101eae038  orr w8,wzr,#0x38
7101eae03c  str wzr,[sp, #0xe8]
7101eae040  add x1,sp,#0xe8
7101eae044  str x8,[sp, #0xf8]
7101eae048  ldr x8,[x0]
7101eae04c  ldr x8,[x8, #0x30]
7101eae050  add x2,sp,#0xf8
7101eae054  blr x8
7101eae058  tbz w0,#0x0,0x7101eae06c
7101eae05c  mov w0,#0x10
7101eae060  orr w1,wzr,#0x38
7101eae064  bl 0x710392e290
7101eae068  cbnz x0,0x7101eae070
7101eae06c  mov x0,xzr
7101eae070  adrp x8,0x7101eaa000
7101eae074  add x8,x8,#0xc60
7101eae078  str x24,[x0]
7101eae07c  stp xzr,xzr,[x0, #0x28]
7101eae080  adrp x1,0x71042c5000
7101eae084  add x1,x1,#0x578
7101eae088  str x25,[x0, #0x10]
7101eae08c  add x2,sp,#0xe8
7101eae090  stp x8,xzr,[x0, #0x18]
7101eae094  str wzr,[x0, #0x8]
7101eae098  str x0,[sp, #0xe8]
7101eae09c  mov x0,x21
7101eae0a0  bl 0x7103376af0
7101eae0a4  ldr x0,[sp, #0xe8]
7101eae0a8  str xzr,[sp, #0xe8]
7101eae0ac  cbz x0,0x7101eae0bc
7101eae0b0  ldr x8,[x0]
7101eae0b4  ldr x8,[x8, #0x8]
7101eae0b8  blr x8
7101eae0bc  ldr x21,[x19]
7101eae0c0  mov w0,#0x10
7101eae0c4  orr w1,wzr,#0x38
7101eae0c8  bl 0x710392e290
7101eae0cc  cbnz x0,0x7101eae114
7101eae0d0  adrp x8,0x7105332000
7101eae0d4  ldr x0,[x8, #0xf00]
7101eae0d8  cbz x0,0x7101eae110
7101eae0dc  orr w8,wzr,#0x38
7101eae0e0  str wzr,[sp, #0xe0]
7101eae0e4  add x1,sp,#0xe0
7101eae0e8  str x8,[sp, #0xf8]
7101eae0ec  ldr x8,[x0]
7101eae0f0  ldr x8,[x8, #0x30]
7101eae0f4  add x2,sp,#0xf8
7101eae0f8  blr x8
7101eae0fc  tbz w0,#0x0,0x7101eae110
7101eae100  mov w0,#0x10
7101eae104  orr w1,wzr,#0x38
7101eae108  bl 0x710392e290
7101eae10c  cbnz x0,0x7101eae114
7101eae110  mov x0,xzr
7101eae114  adrp x8,0x7101eaa000
7101eae118  add x8,x8,#0xc80
7101eae11c  adrp x22,0x71050b2000
7101eae120  add x22,x22,#0x768
7101eae124  stp xzr,x8,[x0, #0x20]
7101eae128  mov w8,#0x1
7101eae12c  stp x25,xzr,[x0, #0x10]
7101eae130  str x22,[x0]
7101eae134  adrp x1,0x710434a000
7101eae138  add x1,x1,#0xaf2
7101eae13c  str xzr,[x0, #0x30]
7101eae140  add x2,sp,#0xe0
7101eae144  str w8,[x0, #0x8]
7101eae148  str x0,[sp, #0xe0]
7101eae14c  mov x0,x21
7101eae150  bl 0x7103376af0
7101eae154  ldr x0,[sp, #0xe0]
7101eae158  str xzr,[sp, #0xe0]
7101eae15c  cbz x0,0x7101eae16c
7101eae160  ldr x8,[x0]
7101eae164  ldr x8,[x8, #0x8]
7101eae168  blr x8
7101eae16c  ldr x21,[x19]
7101eae170  mov w0,#0x10
7101eae174  orr w1,wzr,#0x38
7101eae178  bl 0x710392e290
7101eae17c  cbnz x0,0x7101eae1c4
7101eae180  adrp x8,0x7105332000
7101eae184  ldr x0,[x8, #0xf00]
7101eae188  cbz x0,0x7101eae1c0
7101eae18c  orr w8,wzr,#0x38
7101eae190  str wzr,[sp, #0xd8]
7101eae194  add x1,sp,#0xd8
7101eae198  str x8,[sp, #0xf8]
7101eae19c  ldr x8,[x0]
7101eae1a0  ldr x8,[x8, #0x30]
7101eae1a4  add x2,sp,#0xf8
7101eae1a8  blr x8
7101eae1ac  tbz w0,#0x0,0x7101eae1c0
7101eae1b0  mov w0,#0x10
7101eae1b4  orr w1,wzr,#0x38
7101eae1b8  bl 0x710392e290
7101eae1bc  cbnz x0,0x7101eae1c4
7101eae1c0  mov x0,xzr
7101eae1c4  adrp x8,0x7101eaa000
7101eae1c8  add x8,x8,#0xd40
7101eae1cc  str x22,[x0]
7101eae1d0  stp xzr,x8,[x0, #0x20]
7101eae1d4  mov w8,#0x1
7101eae1d8  stp x25,xzr,[x0, #0x10]
7101eae1dc  adrp x1,0x710433a000
7101eae1e0  add x1,x1,#0x8db
7101eae1e4  add x2,sp,#0xd8
7101eae1e8  str xzr,[x0, #0x30]
7101eae1ec  str w8,[x0, #0x8]
7101eae1f0  str x0,[sp, #0xd8]
7101eae1f4  mov x0,x21
7101eae1f8  bl 0x7103376af0
7101eae1fc  ldr x0,[sp, #0xd8]
7101eae200  str xzr,[sp, #0xd8]
7101eae204  cbz x0,0x7101eae214
7101eae208  ldr x8,[x0]
7101eae20c  ldr x8,[x8, #0x8]
7101eae210  blr x8
7101eae214  ldr x21,[x19]
7101eae218  mov w0,#0x10
7101eae21c  orr w1,wzr,#0x38
7101eae220  bl 0x710392e290
7101eae224  cbnz x0,0x7101eae26c
7101eae228  adrp x8,0x7105332000
7101eae22c  ldr x0,[x8, #0xf00]
7101eae230  cbz x0,0x7101eae268
7101eae234  orr w8,wzr,#0x38
7101eae238  str wzr,[sp, #0xd0]
7101eae23c  add x1,sp,#0xd0
7101eae240  str x8,[sp, #0xf8]
7101eae244  ldr x8,[x0]
7101eae248  ldr x8,[x8, #0x30]
7101eae24c  add x2,sp,#0xf8
7101eae250  blr x8
7101eae254  tbz w0,#0x0,0x7101eae268
7101eae258  mov w0,#0x10
7101eae25c  orr w1,wzr,#0x38
7101eae260  bl 0x710392e290
7101eae264  cbnz x0,0x7101eae26c
7101eae268  mov x0,xzr
7101eae26c  adrp x8,0x7101eaa000
7101eae270  add x8,x8,#0xdb0
7101eae274  str x22,[x0]
7101eae278  stp xzr,x8,[x0, #0x20]
7101eae27c  mov w8,#0x1
7101eae280  stp x25,xzr,[x0, #0x10]
7101eae284  adrp x1,0x7104319000
7101eae288  add x1,x1,#0x61e
7101eae28c  add x2,sp,#0xd0
7101eae290  str xzr,[x0, #0x30]
7101eae294  str w8,[x0, #0x8]
7101eae298  str x0,[sp, #0xd0]
7101eae29c  mov x0,x21
7101eae2a0  bl 0x7103376af0
7101eae2a4  ldr x0,[sp, #0xd0]
7101eae2a8  str xzr,[sp, #0xd0]
7101eae2ac  cbz x0,0x7101eae2bc
7101eae2b0  ldr x8,[x0]
7101eae2b4  ldr x8,[x8, #0x8]
7101eae2b8  blr x8
7101eae2bc  ldr x21,[x19]
7101eae2c0  mov w0,#0x10
7101eae2c4  orr w1,wzr,#0x38
7101eae2c8  bl 0x710392e290
7101eae2cc  cbnz x0,0x7101eae314
7101eae2d0  adrp x8,0x7105332000
7101eae2d4  ldr x0,[x8, #0xf00]
7101eae2d8  cbz x0,0x7101eae310
7101eae2dc  orr w8,wzr,#0x38
7101eae2e0  str wzr,[sp, #0xc8]
7101eae2e4  add x1,sp,#0xc8
7101eae2e8  str x8,[sp, #0xf8]
7101eae2ec  ldr x8,[x0]
7101eae2f0  ldr x8,[x8, #0x30]
7101eae2f4  add x2,sp,#0xf8
7101eae2f8  blr x8
7101eae2fc  tbz w0,#0x0,0x7101eae310
7101eae300  mov w0,#0x10
7101eae304  orr w1,wzr,#0x38
7101eae308  bl 0x710392e290
7101eae30c  cbnz x0,0x7101eae314
7101eae310  mov x0,xzr
7101eae314  adrp x8,0x7101eaa000
7101eae318  add x8,x8,#0xe70
7101eae31c  adrp x26,0x71050b2000
7101eae320  add x26,x26,#0x790
7101eae324  stp xzr,x8,[x0, #0x20]
7101eae328  mov w8,#0x1
7101eae32c  stp x25,xzr,[x0, #0x10]
7101eae330  str x26,[x0]
7101eae334  adrp x1,0x7104292000
7101eae338  add x1,x1,#0x452
7101eae33c  str xzr,[x0, #0x30]
7101eae340  add x2,sp,#0xc8
7101eae344  str w8,[x0, #0x8]
7101eae348  str x0,[sp, #0xc8]
7101eae34c  mov x0,x21
7101eae350  bl 0x7103376af0
7101eae354  ldr x0,[sp, #0xc8]
7101eae358  str xzr,[sp, #0xc8]
7101eae35c  cbz x0,0x7101eae36c
7101eae360  ldr x8,[x0]
7101eae364  ldr x8,[x8, #0x8]
7101eae368  blr x8
7101eae36c  ldr x21,[x19]
7101eae370  mov w1,#0x28
7101eae374  mov w0,#0x10
7101eae378  bl 0x710392e290
7101eae37c  cbnz x0,0x7101eae3c4
7101eae380  adrp x8,0x7105332000
7101eae384  ldr x0,[x8, #0xf00]
7101eae388  cbz x0,0x7101eae3c0
7101eae38c  mov w8,#0x28
7101eae390  str wzr,[sp, #0xc0]
7101eae394  add x1,sp,#0xc0
7101eae398  str x8,[sp, #0xf8]
7101eae39c  ldr x8,[x0]
7101eae3a0  ldr x8,[x8, #0x30]
7101eae3a4  add x2,sp,#0xf8
7101eae3a8  blr x8
7101eae3ac  tbz w0,#0x0,0x7101eae3c0
7101eae3b0  mov w1,#0x28
7101eae3b4  mov w0,#0x10
7101eae3b8  bl 0x710392e290
7101eae3bc  cbnz x0,0x7101eae3c4
7101eae3c0  mov x0,xzr
7101eae3c4  adrp x20,0x71050b2000
7101eae3c8  add x20,x20,#0x7b8
7101eae3cc  adrp x8,0x7101eaa000
7101eae3d0  add x8,x8,#0xf10
7101eae3d4  str x20,[x0]
7101eae3d8  str xzr,[x0, #0x20]
7101eae3dc  stp x25,x8,[x0, #0x10]
7101eae3e0  adrp x1,0x7104308000
7101eae3e4  add x1,x1,#0xb4a
7101eae3e8  str wzr,[x0, #0x8]
7101eae3ec  add x2,sp,#0xc0
7101eae3f0  str x0,[sp, #0xc0]
7101eae3f4  mov x0,x21
7101eae3f8  bl 0x7103376af0
7101eae3fc  ldr x0,[sp, #0xc0]
7101eae400  str xzr,[sp, #0xc0]
7101eae404  cbz x0,0x7101eae414
7101eae408  ldr x8,[x0]
7101eae40c  ldr x8,[x8, #0x8]
7101eae410  blr x8
7101eae414  ldr x21,[x19]
7101eae418  mov w0,#0x10
7101eae41c  orr w1,wzr,#0x38
7101eae420  bl 0x710392e290
7101eae424  cbnz x0,0x7101eae46c
7101eae428  adrp x8,0x7105332000
7101eae42c  ldr x0,[x8, #0xf00]
7101eae430  cbz x0,0x7101eae468
7101eae434  orr w8,wzr,#0x38
7101eae438  str wzr,[sp, #0xb8]
7101eae43c  add x1,sp,#0xb8
7101eae440  str x8,[sp, #0xf8]
7101eae444  ldr x8,[x0]
7101eae448  ldr x8,[x8, #0x30]
7101eae44c  add x2,sp,#0xf8
7101eae450  blr x8
7101eae454  tbz w0,#0x0,0x7101eae468
7101eae458  mov w0,#0x10
7101eae45c  orr w1,wzr,#0x38
7101eae460  bl 0x710392e290
7101eae464  cbnz x0,0x7101eae46c
7101eae468  mov x0,xzr
7101eae46c  adrp x8,0x7101eab000
7101eae470  add x8,x8,#0x80
7101eae474  str x22,[x0]
7101eae478  stp xzr,x8,[x0, #0x20]
7101eae47c  mov w8,#0x1
7101eae480  stp x25,xzr,[x0, #0x10]
7101eae484  adrp x1,0x71042f8000
7101eae488  add x1,x1,#0xaa0
7101eae48c  add x2,sp,#0xb8
7101eae490  str xzr,[x0, #0x30]
7101eae494  str w8,[x0, #0x8]
7101eae498  str x0,[sp, #0xb8]
7101eae49c  mov x0,x21
7101eae4a0  bl 0x7103376af0
7101eae4a4  ldr x0,[sp, #0xb8]
7101eae4a8  str xzr,[sp, #0xb8]
7101eae4ac  cbz x0,0x7101eae4bc
7101eae4b0  ldr x8,[x0]
7101eae4b4  ldr x8,[x8, #0x8]
7101eae4b8  blr x8
7101eae4bc  ldr x21,[x19]
7101eae4c0  mov w0,#0x10
7101eae4c4  orr w1,wzr,#0x38
7101eae4c8  bl 0x710392e290
7101eae4cc  cbnz x0,0x7101eae514
7101eae4d0  adrp x8,0x7105332000
7101eae4d4  ldr x0,[x8, #0xf00]
7101eae4d8  cbz x0,0x7101eae510
7101eae4dc  orr w8,wzr,#0x38
7101eae4e0  str wzr,[sp, #0xb0]
7101eae4e4  add x1,sp,#0xb0
7101eae4e8  str x8,[sp, #0xf8]
7101eae4ec  ldr x8,[x0]
7101eae4f0  ldr x8,[x8, #0x30]
7101eae4f4  add x2,sp,#0xf8
7101eae4f8  blr x8
7101eae4fc  tbz w0,#0x0,0x7101eae510
7101eae500  mov w0,#0x10
7101eae504  orr w1,wzr,#0x38
7101eae508  bl 0x710392e290
7101eae50c  cbnz x0,0x7101eae514
7101eae510  mov x0,xzr
7101eae514  adrp x8,0x7101eab000
7101eae518  add x8,x8,#0xa0
7101eae51c  str x22,[x0]
7101eae520  stp xzr,x8,[x0, #0x20]
7101eae524  mov w8,#0x1
7101eae528  stp x25,xzr,[x0, #0x10]
7101eae52c  adrp x1,0x7104270000
7101eae530  add x1,x1,#0x64c
7101eae534  add x2,sp,#0xb0
7101eae538  str xzr,[x0, #0x30]
7101eae53c  str w8,[x0, #0x8]
7101eae540  str x0,[sp, #0xb0]
7101eae544  mov x0,x21
7101eae548  bl 0x7103376af0
7101eae54c  ldr x0,[sp, #0xb0]
7101eae550  str xzr,[sp, #0xb0]
7101eae554  cbz x0,0x7101eae564
7101eae558  ldr x8,[x0]
7101eae55c  ldr x8,[x8, #0x8]
7101eae560  blr x8
7101eae564  ldr x21,[x19]
7101eae568  mov w1,#0x28
7101eae56c  mov w0,#0x10
7101eae570  bl 0x710392e290
7101eae574  cbnz x0,0x7101eae5bc
7101eae578  adrp x8,0x7105332000
7101eae57c  ldr x0,[x8, #0xf00]
7101eae580  cbz x0,0x7101eae5b8
7101eae584  mov w8,#0x28
7101eae588  str wzr,[sp, #0xa8]
7101eae58c  add x1,sp,#0xa8
7101eae590  str x8,[sp, #0xf8]
7101eae594  ldr x8,[x0]
7101eae598  ldr x8,[x8, #0x30]
7101eae59c  add x2,sp,#0xf8
7101eae5a0  blr x8
7101eae5a4  tbz w0,#0x0,0x7101eae5b8
7101eae5a8  mov w1,#0x28
7101eae5ac  mov w0,#0x10
7101eae5b0  bl 0x710392e290
7101eae5b4  cbnz x0,0x7101eae5bc
7101eae5b8  mov x0,xzr
7101eae5bc  adrp x8,0x7101eab000
7101eae5c0  add x8,x8,#0xb0
7101eae5c4  str x20,[x0]
7101eae5c8  stp x25,x8,[x0, #0x10]
7101eae5cc  adrp x1,0x71042f8000
7101eae5d0  add x1,x1,#0xabc
7101eae5d4  str xzr,[x0, #0x20]
7101eae5d8  add x2,sp,#0xa8
7101eae5dc  str wzr,[x0, #0x8]
7101eae5e0  str x0,[sp, #0xa8]
7101eae5e4  mov x0,x21
7101eae5e8  bl 0x7103376af0
7101eae5ec  ldr x0,[sp, #0xa8]
7101eae5f0  str xzr,[sp, #0xa8]
7101eae5f4  cbz x0,0x7101eae604
7101eae5f8  ldr x8,[x0]
7101eae5fc  ldr x8,[x8, #0x8]
7101eae600  blr x8
7101eae604  ldr x21,[x19]
7101eae608  mov w1,#0x28
7101eae60c  mov w0,#0x10
7101eae610  bl 0x710392e290
7101eae614  cbnz x0,0x7101eae65c
7101eae618  adrp x8,0x7105332000
7101eae61c  ldr x0,[x8, #0xf00]
7101eae620  cbz x0,0x7101eae658
7101eae624  mov w8,#0x28
7101eae628  str wzr,[sp, #0xa0]
7101eae62c  add x1,sp,#0xa0
7101eae630  str x8,[sp, #0xf8]
7101eae634  ldr x8,[x0]
7101eae638  ldr x8,[x8, #0x30]
7101eae63c  add x2,sp,#0xf8
7101eae640  blr x8
7101eae644  tbz w0,#0x0,0x7101eae658
7101eae648  mov w1,#0x28
7101eae64c  mov w0,#0x10
7101eae650  bl 0x710392e290
7101eae654  cbnz x0,0x7101eae65c
7101eae658  mov x0,xzr
7101eae65c  adrp x8,0x7101eab000
7101eae660  add x8,x8,#0x610
7101eae664  str x20,[x0]
7101eae668  stp x25,x8,[x0, #0x10]
7101eae66c  adrp x1,0x710433a000
7101eae670  add x1,x1,#0x8e6
7101eae674  str xzr,[x0, #0x20]
7101eae678  add x2,sp,#0xa0
7101eae67c  str wzr,[x0, #0x8]
7101eae680  str x0,[sp, #0xa0]
7101eae684  mov x0,x21
7101eae688  bl 0x7103376af0
7101eae68c  ldr x0,[sp, #0xa0]
7101eae690  str xzr,[sp, #0xa0]
7101eae694  cbz x0,0x7101eae6a4
7101eae698  ldr x8,[x0]
7101eae69c  ldr x8,[x8, #0x8]
7101eae6a0  blr x8
7101eae6a4  ldr x21,[x19]
7101eae6a8  mov w0,#0x10
7101eae6ac  orr w1,wzr,#0x38
7101eae6b0  bl 0x710392e290
7101eae6b4  cbnz x0,0x7101eae6fc
7101eae6b8  adrp x8,0x7105332000
7101eae6bc  ldr x0,[x8, #0xf00]
7101eae6c0  cbz x0,0x7101eae6f8
7101eae6c4  orr w8,wzr,#0x38
7101eae6c8  str wzr,[sp, #0x98]
7101eae6cc  add x1,sp,#0x98
7101eae6d0  str x8,[sp, #0xf8]
7101eae6d4  ldr x8,[x0]
7101eae6d8  ldr x8,[x8, #0x30]
7101eae6dc  add x2,sp,#0xf8
7101eae6e0  blr x8
7101eae6e4  tbz w0,#0x0,0x7101eae6f8
7101eae6e8  mov w0,#0x10
7101eae6ec  orr w1,wzr,#0x38
7101eae6f0  bl 0x710392e290
7101eae6f4  cbnz x0,0x7101eae6fc
7101eae6f8  mov x0,xzr
7101eae6fc  adrp x8,0x7101eab000
7101eae700  add x8,x8,#0x660
7101eae704  str x24,[x0]
7101eae708  stp xzr,xzr,[x0, #0x28]
7101eae70c  adrp x1,0x7104455000
7101eae710  add x1,x1,#0x1fe
7101eae714  str x25,[x0, #0x10]
7101eae718  add x2,sp,#0x98
7101eae71c  stp x8,xzr,[x0, #0x18]
7101eae720  str wzr,[x0, #0x8]
7101eae724  str x0,[sp, #0x98]
7101eae728  mov x0,x21
7101eae72c  bl 0x7103376af0
7101eae730  ldr x0,[sp, #0x98]
7101eae734  str xzr,[sp, #0x98]
7101eae738  cbz x0,0x7101eae748
7101eae73c  ldr x8,[x0]
7101eae740  ldr x8,[x8, #0x8]
7101eae744  blr x8
7101eae748  ldr x21,[x19]
7101eae74c  mov w0,#0x10
7101eae750  orr w1,wzr,#0x38
7101eae754  bl 0x710392e290
7101eae758  cbnz x0,0x7101eae7a0
7101eae75c  adrp x8,0x7105332000
7101eae760  ldr x0,[x8, #0xf00]
7101eae764  cbz x0,0x7101eae79c
7101eae768  orr w8,wzr,#0x38
7101eae76c  str wzr,[sp, #0x90]
7101eae770  add x1,sp,#0x90
7101eae774  str x8,[sp, #0xf8]
7101eae778  ldr x8,[x0]
7101eae77c  ldr x8,[x8, #0x30]
7101eae780  add x2,sp,#0xf8
7101eae784  blr x8
7101eae788  tbz w0,#0x0,0x7101eae79c
7101eae78c  mov w0,#0x10
7101eae790  orr w1,wzr,#0x38
7101eae794  bl 0x710392e290
7101eae798  cbnz x0,0x7101eae7a0
7101eae79c  mov x0,xzr
7101eae7a0  adrp x8,0x7101eab000
7101eae7a4  add x8,x8,#0x6b0
7101eae7a8  str x24,[x0]
7101eae7ac  stp xzr,xzr,[x0, #0x28]
7101eae7b0  adrp x1,0x7104413000
7101eae7b4  add x1,x1,#0x4c
7101eae7b8  str x25,[x0, #0x10]
7101eae7bc  add x2,sp,#0x90
7101eae7c0  stp x8,xzr,[x0, #0x18]
7101eae7c4  str wzr,[x0, #0x8]
7101eae7c8  str x0,[sp, #0x90]
7101eae7cc  mov x0,x21
7101eae7d0  bl 0x7103376af0
7101eae7d4  ldr x0,[sp, #0x90]
7101eae7d8  str xzr,[sp, #0x90]
7101eae7dc  cbz x0,0x7101eae7ec
7101eae7e0  ldr x8,[x0]
7101eae7e4  ldr x8,[x8, #0x8]
7101eae7e8  blr x8
7101eae7ec  ldr x21,[x19]
7101eae7f0  mov w0,#0x10
7101eae7f4  orr w1,wzr,#0x38
7101eae7f8  bl 0x710392e290
7101eae7fc  cbnz x0,0x7101eae844
7101eae800  adrp x8,0x7105332000
7101eae804  ldr x0,[x8, #0xf00]
7101eae808  cbz x0,0x7101eae840
7101eae80c  orr w8,wzr,#0x38
7101eae810  str wzr,[sp, #0x88]
7101eae814  add x1,sp,#0x88
7101eae818  str x8,[sp, #0xf8]
7101eae81c  ldr x8,[x0]
7101eae820  ldr x8,[x8, #0x30]
7101eae824  add x2,sp,#0xf8
7101eae828  blr x8
7101eae82c  tbz w0,#0x0,0x7101eae840
7101eae830  mov w0,#0x10
7101eae834  orr w1,wzr,#0x38
7101eae838  bl 0x710392e290
7101eae83c  cbnz x0,0x7101eae844
7101eae840  mov x0,xzr
7101eae844  adrp x8,0x7101eab000
7101eae848  add x8,x8,#0x720
7101eae84c  str x26,[x0]
7101eae850  stp xzr,x8,[x0, #0x20]
7101eae854  mov w8,#0x1
7101eae858  stp x25,xzr,[x0, #0x10]
7101eae85c  adrp x1,0x71042e7000
7101eae860  add x1,x1,#0x96e
7101eae864  add x2,sp,#0x88
7101eae868  str xzr,[x0, #0x30]
7101eae86c  str w8,[x0, #0x8]
7101eae870  str x0,[sp, #0x88]
7101eae874  mov x0,x21
7101eae878  bl 0x7103376af0
7101eae87c  ldr x0,[sp, #0x88]
7101eae880  str xzr,[sp, #0x88]
7101eae884  cbz x0,0x7101eae894
7101eae888  ldr x8,[x0]
7101eae88c  ldr x8,[x8, #0x8]
7101eae890  blr x8
7101eae894  ldr x21,[x19]
7101eae898  mov w1,#0x28
7101eae89c  mov w0,#0x10
7101eae8a0  bl 0x710392e290
7101eae8a4  cbnz x0,0x7101eae8ec
7101eae8a8  adrp x8,0x7105332000
7101eae8ac  ldr x0,[x8, #0xf00]
7101eae8b0  cbz x0,0x7101eae8e8
7101eae8b4  mov w8,#0x28
7101eae8b8  str wzr,[sp, #0x80]
7101eae8bc  add x1,sp,#0x80
7101eae8c0  str x8,[sp, #0xf8]
7101eae8c4  ldr x8,[x0]
7101eae8c8  ldr x8,[x8, #0x30]
7101eae8cc  add x2,sp,#0xf8
7101eae8d0  blr x8
7101eae8d4  tbz w0,#0x0,0x7101eae8e8
7101eae8d8  mov w1,#0x28
7101eae8dc  mov w0,#0x10
7101eae8e0  bl 0x710392e290
7101eae8e4  cbnz x0,0x7101eae8ec
7101eae8e8  mov x0,xzr
7101eae8ec  adrp x8,0x7101eab000
7101eae8f0  add x8,x8,#0x7b0
7101eae8f4  str x20,[x0]
7101eae8f8  stp x25,x8,[x0, #0x10]
7101eae8fc  adrp x1,0x7104455000
7101eae900  add x1,x1,#0x216
7101eae904  str xzr,[x0, #0x20]
7101eae908  add x2,sp,#0x80
7101eae90c  str wzr,[x0, #0x8]
7101eae910  str x0,[sp, #0x80]
7101eae914  mov x0,x21
7101eae918  bl 0x7103376af0
7101eae91c  ldr x0,[sp, #0x80]
7101eae920  str xzr,[sp, #0x80]
7101eae924  cbz x0,0x7101eae934
7101eae928  ldr x8,[x0]
7101eae92c  ldr x8,[x8, #0x8]
7101eae930  blr x8
7101eae934  ldr x21,[x19]
7101eae938  mov w1,#0x28
7101eae93c  mov w0,#0x10
7101eae940  bl 0x710392e290
7101eae944  cbnz x0,0x7101eae98c
7101eae948  adrp x8,0x7105332000
7101eae94c  ldr x0,[x8, #0xf00]
7101eae950  cbz x0,0x7101eae988
7101eae954  mov w8,#0x28
7101eae958  str wzr,[sp, #0x78]
7101eae95c  add x1,sp,#0x78
7101eae960  str x8,[sp, #0xf8]
7101eae964  ldr x8,[x0]
7101eae968  ldr x8,[x8, #0x30]
7101eae96c  add x2,sp,#0xf8
7101eae970  blr x8
7101eae974  tbz w0,#0x0,0x7101eae988
7101eae978  mov w1,#0x28
7101eae97c  mov w0,#0x10
7101eae980  bl 0x710392e290
7101eae984  cbnz x0,0x7101eae98c
7101eae988  mov x0,xzr
7101eae98c  adrp x8,0x7101eab000
7101eae990  add x8,x8,#0xb80
7101eae994  str x20,[x0]
7101eae998  stp x25,x8,[x0, #0x10]
7101eae99c  adrp x1,0x7104413000
7101eae9a0  add x1,x1,#0x67
7101eae9a4  str xzr,[x0, #0x20]
7101eae9a8  add x2,sp,#0x78
7101eae9ac  str wzr,[x0, #0x8]
7101eae9b0  str x0,[sp, #0x78]
7101eae9b4  mov x0,x21
7101eae9b8  bl 0x7103376af0
7101eae9bc  ldr x0,[sp, #0x78]
7101eae9c0  str xzr,[sp, #0x78]
7101eae9c4  cbz x0,0x7101eae9d4
7101eae9c8  ldr x8,[x0]
7101eae9cc  ldr x8,[x8, #0x8]
7101eae9d0  blr x8
7101eae9d4  ldr x21,[x19]
7101eae9d8  mov w0,#0x10
7101eae9dc  orr w1,wzr,#0x38
7101eae9e0  bl 0x710392e290
7101eae9e4  cbnz x0,0x7101eaea2c
7101eae9e8  adrp x8,0x7105332000
7101eae9ec  ldr x0,[x8, #0xf00]
7101eae9f0  cbz x0,0x7101eaea28
7101eae9f4  orr w8,wzr,#0x38
7101eae9f8  str wzr,[sp, #0x70]
7101eae9fc  add x1,sp,#0x70
7101eaea00  str x8,[sp, #0xf8]
7101eaea04  ldr x8,[x0]
7101eaea08  ldr x8,[x8, #0x30]
7101eaea0c  add x2,sp,#0xf8
7101eaea10  blr x8
7101eaea14  tbz w0,#0x0,0x7101eaea28
7101eaea18  mov w0,#0x10
7101eaea1c  orr w1,wzr,#0x38
7101eaea20  bl 0x710392e290
7101eaea24  cbnz x0,0x7101eaea2c
7101eaea28  mov x0,xzr
7101eaea2c  adrp x8,0x7101eab000
7101eaea30  add x8,x8,#0xdb0
7101eaea34  str x22,[x0]
7101eaea38  stp xzr,x8,[x0, #0x20]
7101eaea3c  mov w8,#0x1
7101eaea40  stp x25,xzr,[x0, #0x10]
7101eaea44  adrp x1,0x71042f8000
7101eaea48  add x1,x1,#0xac8
7101eaea4c  add x2,sp,#0x70
7101eaea50  str xzr,[x0, #0x30]
7101eaea54  str w8,[x0, #0x8]
7101eaea58  str x0,[sp, #0x70]
7101eaea5c  mov x0,x21
7101eaea60  bl 0x7103376af0
7101eaea64  ldr x0,[sp, #0x70]
7101eaea68  str xzr,[sp, #0x70]
7101eaea6c  cbz x0,0x7101eaea7c
7101eaea70  ldr x8,[x0]
7101eaea74  ldr x8,[x8, #0x8]
7101eaea78  blr x8
7101eaea7c  ldr x21,[x19]
7101eaea80  mov w0,#0x10
7101eaea84  orr w1,wzr,#0x38
7101eaea88  bl 0x710392e290
7101eaea8c  cbnz x0,0x7101eaead4
7101eaea90  adrp x8,0x7105332000
7101eaea94  ldr x0,[x8, #0xf00]
7101eaea98  cbz x0,0x7101eaead0
7101eaea9c  orr w8,wzr,#0x38
7101eaeaa0  str wzr,[sp, #0x68]
7101eaeaa4  add x1,sp,#0x68
7101eaeaa8  str x8,[sp, #0xf8]
7101eaeaac  ldr x8,[x0]
7101eaeab0  ldr x8,[x8, #0x30]
7101eaeab4  add x2,sp,#0xf8
7101eaeab8  blr x8
7101eaeabc  tbz w0,#0x0,0x7101eaead0
7101eaeac0  mov w0,#0x10
7101eaeac4  orr w1,wzr,#0x38
7101eaeac8  bl 0x710392e290
7101eaeacc  cbnz x0,0x7101eaead4
7101eaead0  mov x0,xzr
7101eaead4  adrp x8,0x7101eab000
7101eaead8  add x8,x8,#0xdd0
7101eaeadc  str x22,[x0]
7101eaeae0  stp xzr,x8,[x0, #0x20]
7101eaeae4  mov w8,#0x1
7101eaeae8  stp x25,xzr,[x0, #0x10]
7101eaeaec  adrp x1,0x710424f000
7101eaeaf0  add x1,x1,#0xc0c
7101eaeaf4  add x2,sp,#0x68
7101eaeaf8  str xzr,[x0, #0x30]
7101eaeafc  str w8,[x0, #0x8]
7101eaeb00  str x0,[sp, #0x68]
7101eaeb04  mov x0,x21
7101eaeb08  bl 0x7103376af0
7101eaeb0c  ldr x0,[sp, #0x68]
7101eaeb10  str xzr,[sp, #0x68]
7101eaeb14  cbz x0,0x7101eaeb24
7101eaeb18  ldr x8,[x0]
7101eaeb1c  ldr x8,[x8, #0x8]
7101eaeb20  blr x8
7101eaeb24  ldr x21,[x19]
7101eaeb28  mov w1,#0x28
7101eaeb2c  mov w0,#0x10
7101eaeb30  bl 0x710392e290
7101eaeb34  cbnz x0,0x7101eaeb7c
7101eaeb38  adrp x8,0x7105332000
7101eaeb3c  ldr x0,[x8, #0xf00]
7101eaeb40  cbz x0,0x7101eaeb78
7101eaeb44  mov w8,#0x28
7101eaeb48  str wzr,[sp, #0x60]
7101eaeb4c  add x1,sp,#0x60
7101eaeb50  str x8,[sp, #0xf8]
7101eaeb54  ldr x8,[x0]
7101eaeb58  ldr x8,[x8, #0x30]
7101eaeb5c  add x2,sp,#0xf8
7101eaeb60  blr x8
7101eaeb64  tbz w0,#0x0,0x7101eaeb78
7101eaeb68  mov w1,#0x28
7101eaeb6c  mov w0,#0x10
7101eaeb70  bl 0x710392e290
7101eaeb74  cbnz x0,0x7101eaeb7c
7101eaeb78  mov x0,xzr
7101eaeb7c  adrp x8,0x7101eab000
7101eaeb80  add x8,x8,#0xde0
7101eaeb84  str x20,[x0]
7101eaeb88  stp x25,x8,[x0, #0x10]
7101eaeb8c  adrp x1,0x71042a3000
7101eaeb90  add x1,x1,#0x71b
7101eaeb94  str xzr,[x0, #0x20]
7101eaeb98  add x2,sp,#0x60
7101eaeb9c  str wzr,[x0, #0x8]
7101eaeba0  str x0,[sp, #0x60]
7101eaeba4  mov x0,x21
7101eaeba8  bl 0x7103376af0
7101eaebac  ldr x0,[sp, #0x60]
7101eaebb0  str xzr,[sp, #0x60]
7101eaebb4  cbz x0,0x7101eaebc4
7101eaebb8  ldr x8,[x0]
7101eaebbc  ldr x8,[x8, #0x8]
7101eaebc0  blr x8
7101eaebc4  ldr x21,[x19]
7101eaebc8  mov w1,#0x28
7101eaebcc  mov w0,#0x10
7101eaebd0  bl 0x710392e290
7101eaebd4  cbnz x0,0x7101eaec1c
7101eaebd8  adrp x8,0x7105332000
7101eaebdc  ldr x0,[x8, #0xf00]
7101eaebe0  cbz x0,0x7101eaec18
7101eaebe4  mov w8,#0x28
7101eaebe8  str wzr,[sp, #0x58]
7101eaebec  add x1,sp,#0x58
7101eaebf0  str x8,[sp, #0xf8]
7101eaebf4  ldr x8,[x0]
7101eaebf8  ldr x8,[x8, #0x30]
7101eaebfc  add x2,sp,#0xf8
7101eaec00  blr x8
7101eaec04  tbz w0,#0x0,0x7101eaec18
7101eaec08  mov w1,#0x28
7101eaec0c  mov w0,#0x10
7101eaec10  bl 0x710392e290
7101eaec14  cbnz x0,0x7101eaec1c
7101eaec18  mov x0,xzr
7101eaec1c  adrp x8,0x7101eac000
7101eaec20  add x8,x8,#0x1a0
7101eaec24  str x20,[x0]
7101eaec28  stp x25,x8,[x0, #0x10]
7101eaec2c  adrp x1,0x7104443000
7101eaec30  add x1,x1,#0xe57
7101eaec34  str xzr,[x0, #0x20]
7101eaec38  add x2,sp,#0x58
7101eaec3c  str wzr,[x0, #0x8]
7101eaec40  str x0,[sp, #0x58]
7101eaec44  mov x0,x21
7101eaec48  bl 0x7103376af0
7101eaec4c  ldr x0,[sp, #0x58]
7101eaec50  str xzr,[sp, #0x58]
7101eaec54  cbz x0,0x7101eaec64
7101eaec58  ldr x8,[x0]
7101eaec5c  ldr x8,[x8, #0x8]
7101eaec60  blr x8
7101eaec64  ldr x21,[x19]
7101eaec68  mov w0,#0x10
7101eaec6c  orr w1,wzr,#0x38
7101eaec70  bl 0x710392e290
7101eaec74  cbnz x0,0x7101eaecbc
7101eaec78  adrp x8,0x7105332000
7101eaec7c  ldr x0,[x8, #0xf00]
7101eaec80  cbz x0,0x7101eaecb8
7101eaec84  orr w8,wzr,#0x38
7101eaec88  stur wzr,[x29, #-0x64]
7101eaec8c  sub x1,x29,#0x64
7101eaec90  str x8,[sp, #0xf8]
7101eaec94  ldr x8,[x0]
7101eaec98  ldr x8,[x8, #0x30]
7101eaec9c  add x2,sp,#0xf8
7101eaeca0  blr x8
7101eaeca4  tbz w0,#0x0,0x7101eaecb8
7101eaeca8  mov w0,#0x10
7101eaecac  orr w1,wzr,#0x38
7101eaecb0  bl 0x710392e290
7101eaecb4  cbnz x0,0x7101eaecbc
7101eaecb8  mov x0,xzr
7101eaecbc  adrp x8,0x71050b2000
7101eaecc0  add x8,x8,#0x7e0
7101eaecc4  adrp x9,0x7101eac000
7101eaecc8  add x9,x9,#0x6a0
7101eaeccc  str x8,[x0]
7101eaecd0  mov w8,#0x1
7101eaecd4  stp x25,xzr,[x0, #0x10]
7101eaecd8  str xzr,[x0, #0x30]
7101eaecdc  stp xzr,x9,[x0, #0x20]
7101eaece0  adrp x1,0x710438d000
7101eaece4  add x1,x1,#0x26a
7101eaece8  add x2,sp,#0xf8
7101eaecec  str w8,[x0, #0x8]
7101eaecf0  str x0,[sp, #0xf8]
7101eaecf4  mov x0,x21
7101eaecf8  bl 0x7103376af0
7101eaecfc  ldr x0,[sp, #0xf8]
7101eaed00  str xzr,[sp, #0xf8]
7101eaed04  cbz x0,0x7101eaed14
7101eaed08  ldr x8,[x0]
7101eaed0c  ldr x8,[x8, #0x8]
7101eaed10  blr x8
7101eaed14  ldr x8,[x19]
7101eaed18  ldr x0,[x8]
7101eaed1c  cbz x0,0x7101eaedfc
7101eaed20  adrp x1,0x7104443000
7101eaed24  add x1,x1,#0xe65
7101eaed28  adrp x2,0x71042b2000
7101eaed2c  add x2,x2,#0xa84
7101eaed30  mov w3,wzr
7101eaed34  bl 0x7103375650
7101eaed38  ldr x8,[x19]
7101eaed3c  ldr x0,[x8]
7101eaed40  cbz x0,0x7101eaedfc
7101eaed44  ldp x8,x9,[x25, #0x138]
7101eaed48  sub x8,x9,x8
7101eaed4c  lsr x3,x8,#0x2
7101eaed50  adrp x1,0x71043f1000
7101eaed54  add x1,x1,#0x4
7101eaed58  adrp x2,0x71042b2000
7101eaed5c  add x2,x2,#0xa84
7101eaed60  bl 0x7103375650
7101eaed64  ldr x8,[x25, #0x40]
7101eaed68  ldr x0,[x8]
7101eaed6c  cbz x0,0x7101eaedfc
7101eaed70  adrp x1,0x71043ad000
7101eaed74  add x1,x1,#0xf12
7101eaed78  adrp x2,0x71042b2000
7101eaed7c  add x2,x2,#0xa84
7101eaed80  mov w3,wzr
7101eaed84  bl 0x7103375650
7101eaed88  ldr x8,[x19]
7101eaed8c  ldr x0,[x8]
7101eaed90  cbz x0,0x7101eaedfc
7101eaed94  adrp x1,0x71043ad000
7101eaed98  add x1,x1,#0xf22
7101eaed9c  adrp x2,0x71042b2000
7101eaeda0  add x2,x2,#0xa84
7101eaeda4  mov w3,#0x1
7101eaeda8  bl 0x7103375650
7101eaedac  ldr x8,[x19]
7101eaedb0  ldr x0,[x8]
7101eaedb4  cbz x0,0x7101eaedfc
7101eaedb8  adrp x1,0x71043ad000
7101eaedbc  add x1,x1,#0xf2f
7101eaedc0  adrp x2,0x71042b2000
7101eaedc4  add x2,x2,#0xa84
7101eaedc8  mov w3,#0x2
7101eaedcc  bl 0x7103375650
7101eaedd0  ldr x8,[x19]
7101eaedd4  ldr x0,[x8]
7101eaedd8  cbz x0,0x7101eaedfc
7101eaeddc  adrp x1,0x710436c000
7101eaede0  add x1,x1,#0xa9a
7101eaede4  adrp x2,0x71042b2000
7101eaede8  add x2,x2,#0xa84
7101eaedec  orr w3,wzr,#0x3
7101eaedf0  bl 0x7103375650
7101eaedf4  ldr x8,[x19]
7101eaedf8  ldr x0,[x8]
7101eaedfc  ldr w3,[sp, #0x50]
7101eaee00  adrp x1,0x7104270000
7101eaee04  add x1,x1,#0x66a
7101eaee08  adrp x2,0x71043cd000
7101eaee0c  add x2,x2,#0xb7b
7101eaee10  bl 0x7103375650
7101eaee14  ldr x19,[x19]
7101eaee18  ldr x8,[x19]
7101eaee1c  ldr x20,[x8]
7101eaee20  str wzr,[x8, #0x10]
7101eaee24  ldr x8,[x20, #0x10]
7101eaee28  mov w9,#0x48
7101eaee2c  str x20,[x8]
7101eaee30  str w9,[x8, #0x8]
7101eaee34  ldp x9,x8,[x20, #0x10]
7101eaee38  add x10,x9,#0x10
7101eaee3c  str x10,[x20, #0x10]
7101eaee40  ldr x10,[x8, #0xc8]
7101eaee44  str x9,[x20, #0x10]
7101eaee48  cmp x10,x20
7101eaee4c  b.eq 0x7101eaee70
7101eaee50  adrp x1,0x71042b1000
7101eaee54  add x1,x1,#0xd8c
7101eaee58  mov x0,x20
7101eaee5c  bl 0x71038f4b20
7101eaee60  orr w1,wzr,#0xfffffffe
7101eaee64  mov x0,x20
7101eaee68  bl 0x71038f4fc0
7101eaee6c  b 0x7101eaeee8
7101eaee70  ldr x8,[x8, #0x40]
7101eaee74  ldr w9,[x8, #0xc]
7101eaee78  cmp w9,#0x2
7101eaee7c  b.cc 0x7101eaee8c
7101eaee80  ldr x8,[x8, #0x10]
7101eaee84  add x1,x8,#0x10
7101eaee88  b 0x7101eaeed8
7101eaee8c  ldr x9,[x8, #0x18]
7101eaee90  ldrb w8,[x8, #0xb]
7101eaee94  mov w10,#0xffffffff
7101eaee98  lsl x8,x10,x8
7101eaee9c  mvn w8,w8
7101eaeea0  and x8,x8,#0x2
7101eaeea4  add x1,x9,x8, LSL #0x5
7101eaeea8  adrp x8,0x7104862000
7101eaeeac  add x8,x8,#0x960
7101eaeeb0  ldr w9,[x1, #0x18]
7101eaeeb4  cmp w9,#0x13
7101eaeeb8  b.ne 0x7101eaeec8
7101eaeebc  ldr x9,[x1, #0x10]
7101eaeec0  cmp x9,#0x2
7101eaeec4  b.eq 0x7101eaeed8
7101eaeec8  ldrsw x9,[x1, #0x1c]
7101eaeecc  add x1,x1,x9, LSL #0x5
7101eaeed0  cbnz w9,0x7101eaeeb0
7101eaeed4  mov x1,x8
7101eaeed8  adrp x2,0x71042b1000
7101eaeedc  add x2,x2,#0xd8c
7101eaeee0  mov x0,x20
7101eaeee4  bl 0x71038f4d40
7101eaeee8  ldr x9,[x20, #0x10]
7101eaeeec  sub x8,x9,#0x10
7101eaeef0  adrp x10,0x7104862000
7101eaeef4  add x10,x10,#0x960
7101eaeef8  cmp x8,x10
7101eaeefc  b.eq 0x7101eaef20
7101eaef00  ldur w9,[x9, #-0x8]
7101eaef04  and w9,w9,#0xf
7101eaef08  cmp w9,#0x6
7101eaef0c  b.ne 0x7101eaef20
7101eaef10  mov x0,x19
7101eaef14  mov w1,wzr
7101eaef18  bl 0x7103377130
7101eaef1c  b 0x7101eaef24
7101eaef20  str x8,[x20, #0x10]
7101eaef24  adrp x8,0x7105325000
7101eaef28  ldr x0,[x8, #0xca8]
7101eaef2c  bl 0x7101ccce30
7101eaef30  ldr x19,[sp, #0x178]
7101eaef34  stp x23,xzr,[sp, #0x170]
7101eaef38  cbz x19,0x7101eaef5c
7101eaef3c  ldr x0,[x19, #0x18]
7101eaef40  adrp x8,0x710523d000
7101eaef44  add x8,x8,#0x9a8
7101eaef48  stp x8,xzr,[x19, #0x10]
7101eaef4c  cbz x0,0x7101eaef54
7101eaef50  bl 0x710392eb40
7101eaef54  mov x0,x19
7101eaef58  bl 0x710392eb40
7101eaef5c  ldr x0,[sp, #0x120]
7101eaef60  cbz x0,0x7101eaef6c
7101eaef64  str x0,[sp, #0x128]
7101eaef68  bl 0x710392eb40
7101eaef6c  ldr x0,[sp, #0x198]
7101eaef70  cbz x0,0x7101eaef7c
7101eaef74  str x0,[sp, #0x1a0]
7101eaef78  bl 0x710392eb40
7101eaef7c  ldr x0,[sp, #0x2c0]
7101eaef80  add x8,sp,#0x1b0
7101eaef84  add x8,x8,#0xf0
7101eaef88  cmp x8,x0
7101eaef8c  b.eq 0x7101eaefa0
7101eaef90  cbz x0,0x7101eaefac
7101eaef94  ldr x8,[x0]
7101eaef98  ldr x8,[x8, #0x28]
7101eaef9c  b 0x7101eaefa8
7101eaefa0  ldr x8,[x0]
7101eaefa4  ldr x8,[x8, #0x20]
7101eaefa8  blr x8
7101eaefac  ldr x0,[sp, #0x290]
7101eaefb0  add x8,sp,#0x1b0
7101eaefb4  add x8,x8,#0xc0
7101eaefb8  cmp x8,x0
7101eaefbc  b.eq 0x7101eaefd0
7101eaefc0  cbz x0,0x7101eaefdc
7101eaefc4  ldr x8,[x0]
7101eaefc8  ldr x8,[x8, #0x28]
7101eaefcc  b 0x7101eaefd8
7101eaefd0  ldr x8,[x0]
7101eaefd4  ldr x8,[x8, #0x20]
7101eaefd8  blr x8
7101eaefdc  ldr x0,[sp, #0x260]
7101eaefe0  add x8,sp,#0x1b0
7101eaefe4  add x8,x8,#0x90
7101eaefe8  cmp x8,x0
7101eaefec  b.eq 0x7101eaf000
7101eaeff0  cbz x0,0x7101eaf00c
7101eaeff4  ldr x8,[x0]
7101eaeff8  ldr x8,[x8, #0x28]
7101eaeffc  b 0x7101eaf008
7101eaf000  ldr x8,[x0]
7101eaf004  ldr x8,[x8, #0x20]
7101eaf008  blr x8
7101eaf00c  ldr x0,[sp, #0x230]
7101eaf010  add x8,sp,#0x1b0
7101eaf014  add x8,x8,#0x60
7101eaf018  cmp x8,x0
7101eaf01c  b.eq 0x7101eaf030
7101eaf020  cbz x0,0x7101eaf03c
7101eaf024  ldr x8,[x0]
7101eaf028  ldr x8,[x8, #0x28]
7101eaf02c  b 0x7101eaf038
7101eaf030  ldr x8,[x0]
7101eaf034  ldr x8,[x8, #0x20]
7101eaf038  blr x8
7101eaf03c  ldr x0,[sp, #0x200]
7101eaf040  add x8,sp,#0x1b0
7101eaf044  add x8,x8,#0x30
7101eaf048  cmp x8,x0
7101eaf04c  b.eq 0x7101eaf060
7101eaf050  cbz x0,0x7101eaf06c
7101eaf054  ldr x8,[x0]
7101eaf058  ldr x8,[x8, #0x28]
7101eaf05c  b 0x7101eaf068
7101eaf060  ldr x8,[x0]
7101eaf064  ldr x8,[x8, #0x20]
7101eaf068  blr x8
7101eaf06c  add sp,sp,#0x2f0
7101eaf070  ldp x29,x30,[sp, #0x50]
7101eaf074  ldp x20,x19,[sp, #0x40]
7101eaf078  ldp x22,x21,[sp, #0x30]
7101eaf07c  ldp x24,x23,[sp, #0x20]
7101eaf080  ldp x26,x25,[sp, #0x10]
7101eaf084  ldp x28,x27,[sp], #0x60
7101eaf088  ret
7101eaf08c  ldr x0,[sp, #0x18]
7101eaf090  bl 0x71039c1330
7101eaf094  bl 0x71039c1330
7101eaf098  add x0,sp,#0x138
7101eaf09c  bl 0x71039c0c00
7101eaf0a0  add x0,sp,#0x108
7101eaf0a4  bl 0x71039c0c00
