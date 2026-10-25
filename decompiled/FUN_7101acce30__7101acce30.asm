// addr:      7101acce30
// offset:    0x1acce30
// name:      FUN_7101acce30
// mangled:   
// size:      1008

7101acce30  sub sp,sp,#0x50
7101acce34  str d8,[sp, #0x20]
7101acce38  str x21,[sp, #0x28]
7101acce3c  stp x20,x19,[sp, #0x30]
7101acce40  stp x29,x30,[sp, #0x40]
7101acce44  add x29,sp,#0x40
7101acce48  ldr w8,[x0, #0xfc]
7101acce4c  mov x19,x0
7101acce50  cbz w8,0x7101accecc
7101acce54  ldr x8,[x19, #0x128]
7101acce58  ldr x0,[x8, #0x8]
7101acce5c  mov x20,x1
7101acce60  cbz x0,0x7101acce84
7101acce64  adrp x1,0x710437c000
7101acce68  add x1,x1,#0x100
7101acce6c  bl 0x71037964b0
7101acce70  cbz x0,0x7101acce84
7101acce74  ldr x8,[x0]
7101acce78  ldr x8,[x8, #0x138]
7101acce7c  blr x8
7101acce80  tbz w0,#0x0,0x7101acd204
7101acce84  ldr x0,[x19, #0x138]
7101acce88  ldr x8,[x0]
7101acce8c  ldr x8,[x8, #0x68]
7101acce90  blr x8
7101acce94  tbnz w0,#0x0,0x7101acceac
7101acce98  ldr x0,[x19, #0x138]
7101acce9c  ldr x8,[x0]
7101accea0  ldr x8,[x8, #0x60]
7101accea4  mov w1,#0x1
7101accea8  blr x8
7101acceac  ldr x0,[x19, #0x138]
7101acceb0  ldr w8,[x0, #0x25c]
7101acceb4  cmp w8,#0x3
7101acceb8  b.hi 0x7101acd044
7101accebc  ldr x9,[x19, #0x110]
7101accec0  str w8,[x9]
7101accec4  ldr x0,[x19, #0x138]
7101accec8  b 0x7101acd058
7101accecc  ldr x0,[x19, #0x138]
7101acced0  ldr x8,[x0]
7101acced4  ldr x8,[x8, #0x70]
7101acced8  mov w1,#0x1
7101accedc  add x20,x19,#0x138
7101accee0  blr x8
7101accee4  fmov s8,0x3f800000
7101accee8  ldr x0,[x19, #0x128]
7101acceec  adrp x1,0x710437c000
7101accef0  add x1,x1,#0x100
7101accef4  mov v0.16B,v8.16B
7101accef8  bl 0x7103778300
7101accefc  ldr x0,[x19, #0x128]
7101accf00  mov v0.16B,v8.16B
7101accf04  adrp x1,0x710425e000
7101accf08  add x1,x1,#0xe3e
7101accf0c  bl 0x7103778300
7101accf10  ldr x8,[x19, #0x110]
7101accf14  ldr w8,[x8]
7101accf18  sub w9,w8,#0x1
7101accf1c  cmp w9,#0x3
7101accf20  csel w1,w8,wzr,cc
7101accf24  mov w2,#0x1
7101accf28  mov x0,x20
7101accf2c  bl 0x7103771a80
7101accf30  add x0,x19,#0x258
7101accf34  adrp x1,0x71042c4000
7101accf38  add x1,x1,#0x8f4
7101accf3c  bl 0x710377a120
7101accf40  adrp x8,0x710532f000
7101accf44  ldr x8,[x8, #0x730]
7101accf48  ldr x8,[x8, #0x8]
7101accf4c  ldr x0,[x8, #0x198]
7101accf50  mov x1,#0xf56d
7101accf54  movk x1,#0x834d, LSL #16
7101accf58  movk x1,#0x13, LSL #32
7101accf5c  bl 0x71032821b0
7101accf60  mov x1,x0
7101accf64  ldr x0,[x19, #0x108]
7101accf68  bl 0x710323f760
7101accf6c  mov x20,x0
7101accf70  adrp x21,0x710523d000
7101accf74  add x21,x21,#0xa08
7101accf78  mov w0,#0x10
7101accf7c  mov w1,#0x10
7101accf80  str x21,[sp]
7101accf84  bl 0x710392e290
7101accf88  cbnz x0,0x7101accfd0
7101accf8c  adrp x8,0x7105332000
7101accf90  ldr x0,[x8, #0xf00]
7101accf94  cbz x0,0x7101accfcc
7101accf98  mov w8,#0x10
7101accf9c  str wzr,[sp, #0x1c]
7101accfa0  add x1,sp,#0x1c
7101accfa4  str x8,[sp, #0x10]
7101accfa8  ldr x8,[x0]
7101accfac  ldr x8,[x8, #0x30]
7101accfb0  add x2,sp,#0x10
7101accfb4  blr x8
7101accfb8  tbz w0,#0x0,0x7101accfcc
7101accfbc  mov w0,#0x10
7101accfc0  mov w1,#0x10
7101accfc4  bl 0x710392e290
7101accfc8  cbnz x0,0x7101accfd0
7101accfcc  mov x0,xzr
7101accfd0  mov x8,sp
7101accfd4  cmp x8,x20
7101accfd8  stp xzr,xzr,[x0]
7101accfdc  str x0,[sp, #0x8]
7101accfe0  b.eq 0x7101acd134
7101accfe4  ldr x8,[x20, #0x8]
7101accfe8  ldp x9,x8,[x8]
7101accfec  cbz x8,0x7101acd130
7101accff0  add x10,x8,#0x8
7101accff4  ldxr x11,[x10]
7101accff8  add x11,x11,#0x1
7101accffc  stxr w12,x11,[x10]
7101acd000  cbnz w12,0x7101accff4
7101acd004  ldr x20,[x0, #0x8]
7101acd008  stp x9,x8,[x0]
7101acd00c  cbz x20,0x7101acd134
7101acd010  add x8,x20,#0x8
7101acd014  ldaxr x9,[x8]
7101acd018  sub x10,x9,#0x1
7101acd01c  stlxr w11,x10,[x8]
7101acd020  cbnz w11,0x7101acd014
7101acd024  cbnz x9,0x7101acd134
7101acd028  ldr x8,[x20]
7101acd02c  ldr x8,[x8, #0x10]
7101acd030  mov x0,x20
7101acd034  blr x8
7101acd038  mov x0,x20
7101acd03c  bl 0x71039c2670
7101acd040  b 0x7101acd134
7101acd044  ldr x8,[x20, #0x8]
7101acd048  ldrb w9,[x8, #0x4aa]
7101acd04c  cbz w9,0x7101acd0d8
7101acd050  ldrb w8,[x8, #0x1ac]
7101acd054  tbz w8,#0x1,0x7101acd0d8
7101acd058  ldr x8,[x0]
7101acd05c  ldr x8,[x8, #0x70]
7101acd060  mov w1,wzr
7101acd064  blr x8
7101acd068  ldr x0,[x19, #0x138]
7101acd06c  ldr x8,[x0]
7101acd070  ldr x8,[x8, #0x60]
7101acd074  mov w1,wzr
7101acd078  blr x8
7101acd07c  fmov s8,0x3f800000
7101acd080  ldr x0,[x19, #0x128]
7101acd084  adrp x1,0x710438c000
7101acd088  add x1,x1,#0x435
7101acd08c  mov v0.16B,v8.16B
7101acd090  bl 0x7103778300
7101acd094  ldr x0,[x19, #0x128]
7101acd098  mov v0.16B,v8.16B
7101acd09c  adrp x1,0x71042d5000
7101acd0a0  add x1,x1,#0xdac
7101acd0a4  bl 0x7103778300
7101acd0a8  ldr x0,[x19, #0x128]
7101acd0ac  mov v0.16B,v8.16B
7101acd0b0  adrp x1,0x7104318000
7101acd0b4  add x1,x1,#0xa09
7101acd0b8  bl 0x7103778300
7101acd0bc  ldrsw x8,[x19, #0xf4]
7101acd0c0  cmp w8,#0x13
7101acd0c4  b.cs 0x7101acd21c
7101acd0c8  add x8,x19,x8, LSL #0x2
7101acd0cc  mov w9,#0x2
7101acd0d0  str w9,[x8, #0xa8]
7101acd0d4  ldr x0,[x19, #0x138]
7101acd0d8  ldr w9,[x19, #0x290]
7101acd0dc  ldr w8,[x0, #0x254]
7101acd0e0  cmp w9,w8
7101acd0e4  b.eq 0x7101acd204
7101acd0e8  str w8,[x19, #0x290]
7101acd0ec  ldr w8,[x0, #0x254]
7101acd0f0  sub w8,w8,#0x1
7101acd0f4  cmp w8,#0x2
7101acd0f8  b.hi 0x7101acd10c
7101acd0fc  adrp x9,0x71050a9000
7101acd100  add x9,x9,#0x9c0
7101acd104  ldr x1,[x9, w8, SXTW #0x3]
7101acd108  b 0x7101acd114
7101acd10c  adrp x1,0x710437c000
7101acd110  add x1,x1,#0x108
7101acd114  ldr d8,[sp, #0x20]
7101acd118  add x0,x19,#0x238
7101acd11c  ldr x21,[sp, #0x28]
7101acd120  ldp x29,x30,[sp, #0x40]
7101acd124  ldp x20,x19,[sp, #0x30]
7101acd128  add sp,sp,#0x50
7101acd12c  b 0x710377a120
7101acd130  stp x9,x8,[x0]
7101acd134  ldr x0,[x19, #0x270]
7101acd138  mov x1,sp
7101acd13c  bl 0x7103778b80
7101acd140  ldr x8,[x19, #0x138]
7101acd144  ldr w9,[x8, #0x254]
7101acd148  str w9,[x19, #0x290]
7101acd14c  ldr w8,[x8, #0x254]
7101acd150  sub w8,w8,#0x1
7101acd154  cmp w8,#0x2
7101acd158  b.hi 0x7101acd16c
7101acd15c  adrp x9,0x71050a9000
7101acd160  add x9,x9,#0x9c0
7101acd164  ldr x1,[x9, w8, SXTW #0x3]
7101acd168  b 0x7101acd174
7101acd16c  adrp x1,0x710437c000
7101acd170  add x1,x1,#0x108
7101acd174  add x0,x19,#0x238
7101acd178  bl 0x710377a120
7101acd17c  ldr x19,[sp, #0x8]
7101acd180  stp x21,xzr,[sp]
7101acd184  cbz x19,0x7101acd204
7101acd188  ldr x20,[x19, #0x8]
7101acd18c  stp xzr,xzr,[x19]
7101acd190  cbz x20,0x7101acd1fc
7101acd194  add x8,x20,#0x8
7101acd198  ldaxr x9,[x8]
7101acd19c  sub x10,x9,#0x1
7101acd1a0  stlxr w11,x10,[x8]
7101acd1a4  cbnz w11,0x7101acd198
7101acd1a8  cbnz x9,0x7101acd1c4
7101acd1ac  ldr x8,[x20]
7101acd1b0  ldr x8,[x8, #0x10]
7101acd1b4  mov x0,x20
7101acd1b8  blr x8
7101acd1bc  mov x0,x20
7101acd1c0  bl 0x71039c2670
7101acd1c4  ldr x20,[x19, #0x8]
7101acd1c8  cbz x20,0x7101acd1fc
7101acd1cc  add x8,x20,#0x8
7101acd1d0  ldaxr x9,[x8]
7101acd1d4  sub x10,x9,#0x1
7101acd1d8  stlxr w11,x10,[x8]
7101acd1dc  cbnz w11,0x7101acd1d0
7101acd1e0  cbnz x9,0x7101acd1fc
7101acd1e4  ldr x8,[x20]
7101acd1e8  ldr x8,[x8, #0x10]
7101acd1ec  mov x0,x20
7101acd1f0  blr x8
7101acd1f4  mov x0,x20
7101acd1f8  bl 0x71039c2670
7101acd1fc  mov x0,x19
7101acd200  bl 0x710392eb40
7101acd204  ldr d8,[sp, #0x20]
7101acd208  ldp x29,x30,[sp, #0x40]
7101acd20c  ldp x20,x19,[sp, #0x30]
7101acd210  ldr x21,[sp, #0x28]
7101acd214  add sp,sp,#0x50
7101acd218  ret
7101acd21c  bl 0x71039c2650
