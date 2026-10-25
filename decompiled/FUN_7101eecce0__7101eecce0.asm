// addr:      7101eecce0
// offset:    0x1eecce0
// name:      FUN_7101eecce0
// mangled:   
// size:      1452

7101eecce0  sub sp,sp,#0x100
7101eecce4  str d8,[sp, #0x90]
7101eecce8  stp x28,x27,[sp, #0xa0]
7101eeccec  stp x26,x25,[sp, #0xb0]
7101eeccf0  stp x24,x23,[sp, #0xc0]
7101eeccf4  stp x22,x21,[sp, #0xd0]
7101eeccf8  stp x20,x19,[sp, #0xe0]
7101eeccfc  stp x29,x30,[sp, #0xf0]
7101eecd00  add x29,sp,#0xf0
7101eecd04  ldr x8,[x0, #0xf68]
7101eecd08  ldr x21,[x8]
7101eecd0c  ldr x20,[x21, #0x10]
7101eecd10  mov x19,x0
7101eecd14  ldr x0,[x20, #0x8]
7101eecd18  cbz x0,0x7101eecd40
7101eecd1c  adrp x1,0x7104455000
7101eecd20  add x1,x1,#0x299
7101eecd24  bl 0x71037964b0
7101eecd28  cbz x0,0x7101eecd40
7101eecd2c  ldr x8,[x0]
7101eecd30  ldr x8,[x8, #0x138]
7101eecd34  blr x8
7101eecd38  tbz w0,#0x0,0x7101eed1fc
7101eecd3c  ldr x20,[x21, #0x10]
7101eecd40  fmov s0,0x3f800000
7101eecd44  adrp x1,0x71043be000
7101eecd48  add x1,x1,#0xe07
7101eecd4c  mov x0,x20
7101eecd50  bl 0x7103778300
7101eecd54  adrp x8,0x7105314000
7101eecd58  add x8,x8,#0x4d8
7101eecd5c  ldarb w8,[x8]
7101eecd60  tbz w8,#0x0,0x7101eed248
7101eecd64  mov x8,#-0x1
7101eecd68  stur x8,[x29, #-0x58]
7101eecd6c  stur x8,[x29, #-0x68]
7101eecd70  ldp x25,x27,[x19, #0xf0]
7101eecd74  cmp x25,x27
7101eecd78  b.eq 0x7101eecefc
7101eecd7c  fmov s8,0x3f800000
7101eecd80  adrp x20,0x71042c5000
7101eecd84  add x20,x20,#0x5d6
7101eecd88  adrp x21,0x71042f8000
7101eecd8c  add x21,x21,#0xb9e
7101eecd90  adrp x22,0x7104270000
7101eecd94  add x22,x22,#0x750
7101eecd98  adrp x24,0x710593b000
7101eecd9c  orr x28,xzr,#0x7f00000000000000
7101eecda0  ldr x0,[x25, #0xa8]
7101eecda4  mov v0.16B,v8.16B
7101eecda8  mov x1,x20
7101eecdac  add x26,x25,#0xa0
7101eecdb0  bl 0x7103778300
7101eecdb4  ldrb w8,[x19, #0xfbb]
7101eecdb8  cbz w8,0x7101eece58
7101eecdbc  ldr x8,[x25, #0x20]
7101eecdc0  and x9,x8,#-0x100000000000000
7101eecdc4  cmp x9,x28
7101eecdc8  b.ne 0x7101eece58
7101eecdcc  and x8,x8,#0xffffffffff
7101eecdd0  cbz x8,0x7101eece58
7101eecdd4  ldr x0,[x25, #0xa8]
7101eecdd8  mov v0.16B,v8.16B
7101eecddc  adrp x1,0x71042d6000
7101eecde0  add x1,x1,#0xb5d
7101eecde4  bl 0x7103778300
7101eecde8  ldr x0,[x25, #0xa8]
7101eecdec  mov v0.16B,v8.16B
7101eecdf0  adrp x1,0x7104270000
7101eecdf4  add x1,x1,#0x745
7101eecdf8  bl 0x7103778300
7101eecdfc  add x8,sp,#0x8
7101eece00  mov x0,x26
7101eece04  adrp x1,0x71042c5000
7101eece08  add x1,x1,#0x5e8
7101eece0c  bl 0x7103776640
7101eece10  ldr x23,[sp, #0x10]
7101eece14  mov v0.16B,v8.16B
7101eece18  adrp x1,0x7104337000
7101eece1c  add x1,x1,#0xfc4
7101eece20  mov x0,x23
7101eece24  bl 0x7103778300
7101eece28  adrp x8,0x710523d000
7101eece2c  add x8,x8,#0x988
7101eece30  stp x8,xzr,[sp, #0x8]
7101eece34  cbz x23,0x7101eece58
7101eece38  ldr x0,[x23, #0x18]
7101eece3c  adrp x8,0x710523d000
7101eece40  add x8,x8,#0x9a8
7101eece44  stp x8,xzr,[x23, #0x10]
7101eece48  cbz x0,0x7101eece50
7101eece4c  bl 0x710392eb40
7101eece50  mov x0,x23
7101eece54  bl 0x710392eb40
7101eece58  sub x0,x29,#0x58
7101eece5c  bl 0x7101eed970
7101eece60  mov w2,w0
7101eece64  mov x0,x26
7101eece68  mov x1,x21
7101eece6c  bl 0x7103778430
7101eece70  sub x0,x29,#0x68
7101eece74  bl 0x7101eed970
7101eece78  mov w2,w0
7101eece7c  mov x0,x26
7101eece80  mov x1,x22
7101eece84  bl 0x7103778430
7101eece88  ldr x8,[x24, #0x990]
7101eece8c  cbz x8,0x7101eecef0
7101eece90  ldrsw x9,[x25]
7101eece94  cmp w9,#0x8
7101eece98  b.cs 0x7101eed288
7101eece9c  ldr x8,[x8, #0x8]
7101eecea0  ldr w1,[x8, x9, LSL #0x2]
7101eecea4  cmn w1,#0x1
7101eecea8  b.eq 0x7101eecef0
7101eeceac  adrp x8,0x71052c5000
7101eeceb0  ldr x8,[x8, #0x120]
7101eeceb4  cbz x8,0x7101eecef0
7101eeceb8  ldr x0,[x8, #0x8]
7101eecebc  mov v0.16B,v8.16B
7101eecec0  mov v1.16B,v8.16B
7101eecec4  mov x2,#0xf21
7101eecec8  movk x2,#0x59b3, LSL #16
7101eececc  mov w5,#0xa
7101eeced0  movk x2,#0x13, LSL #32
7101eeced4  mov w3,wzr
7101eeced8  mov w4,#0xffffffff
7101eecedc  mov w6,w5
7101eecee0  mov w7,wzr
7101eecee4  bl 0x710175dfc0
7101eecee8  mov w8,#0x1
7101eeceec  strb w8,[x19, #0xfd3]
7101eecef0  add x25,x25,#0xd8
7101eecef4  cmp x27,x25
7101eecef8  b.ne 0x7101eecda0
7101eecefc  adrp x8,0x710532f000
7101eecf00  ldr x22,[x8, #0x8d0]
7101eecf04  ldr x0,[x22, #0x8]
7101eecf08  ldrb w8,[x0, #0x191]
7101eecf0c  mov w21,#0x6500
7101eecf10  movk w21,#0x87, LSL #16
7101eecf14  cbnz w8,0x7101eecf98
7101eecf18  mov x20,#0xd522
7101eecf1c  movk x20,#0x1801, LSL #16
7101eecf20  movk x20,#0x12, LSL #32
7101eecf24  mov w2,#0x4
7101eecf28  mov x1,x20
7101eecf2c  bl 0x7103313f20
7101eecf30  tbz w0,#0x0,0x7101eecf98
7101eecf34  add x0,sp,#0x48
7101eecf38  mov x1,x20
7101eecf3c  bl 0x71024076d0
7101eecf40  ldr x8,[sp, #0x58]
7101eecf44  adrp x9,0x7104f73000
7101eecf48  add x9,x9,#0xd50
7101eecf4c  mov x23,#-0x1
7101eecf50  str x9,[sp, #0x50]
7101eecf54  cbz x8,0x7101eecfbc
7101eecf58  adrp x8,0x7106dd5000
7101eecf5c  ldrb w8,[x8, #0x3a8]
7101eecf60  cmp w8,#0x1
7101eecf64  b.ne 0x7101eecfbc
7101eecf68  adrp x9,0x7106dd5000
7101eecf6c  ldr w8,[sp, #0x60]
7101eecf70  ldr w9,[x9, #0x3ac]
7101eecf74  cmp w8,w9
7101eecf78  b.ne 0x7101eecfbc
7101eecf7c  ldr x8,[sp, #0x58]
7101eecf80  ldr wzr,[x8, #0x38]!
7101eecf84  ldaxr w9,[x8]
7101eecf88  sub w9,w9,#0x1
7101eecf8c  stlxr w10,w9,[x8]
7101eecf90  cbnz w10,0x7101eecf84
7101eecf94  b 0x7101eecfbc
7101eecf98  mov x23,#-0x1
7101eecf9c  adrp x8,0x7104f73000
7101eecfa0  add x8,x8,#0xd50
7101eecfa4  stp wzr,w21,[sp, #0x60]
7101eecfa8  strb wzr,[sp, #0x68]
7101eecfac  str wzr,[sp, #0x48]
7101eecfb0  stp x23,xzr,[sp, #0x70]
7101eecfb4  str xzr,[sp, #0x80]
7101eecfb8  stp x8,xzr,[sp, #0x50]
7101eecfbc  str xzr,[sp, #0x58]
7101eecfc0  strb wzr,[sp, #0x68]
7101eecfc4  ldr x0,[x22, #0x8]
7101eecfc8  ldrb w8,[x0, #0x191]
7101eecfcc  cbnz w8,0x7101eed068
7101eecfd0  mov x20,#0xfb61
7101eecfd4  movk x20,#0x5418, LSL #16
7101eecfd8  movk x20,#0xf, LSL #32
7101eecfdc  mov w2,#0x4
7101eecfe0  mov x1,x20
7101eecfe4  bl 0x7103313f20
7101eecfe8  tbz w0,#0x0,0x7101eed068
7101eecfec  add x0,sp,#0x8
7101eecff0  mov x1,x20
7101eecff4  bl 0x71024076d0
7101eecff8  ldr w9,[sp, #0x8]
7101eecffc  ldr x8,[sp, #0x18]
7101eed000  str w9,[x19, #0xf78]
7101eed004  cbz x8,0x7101eed08c
7101eed008  ldr w9,[x19, #0xf94]
7101eed00c  cmp w9,w21
7101eed010  b.ne 0x7101eed0dc
7101eed014  adrp x9,0x7106dd5000
7101eed018  ldr w9,[x9, #0x3ac]
7101eed01c  ldr w10,[x19, #0xf90]
7101eed020  cmp w10,w9
7101eed024  b.ne 0x7101eed220
7101eed028  ldr x10,[x19, #0xf88]
7101eed02c  add x9,x19,#0xf88
7101eed030  cbz x10,0x7101eed058
7101eed034  adrp x11,0x7106dd5000
7101eed038  ldrb w11,[x11, #0x3a8]
7101eed03c  cmp w11,#0x1
7101eed040  b.ne 0x7101eed058
7101eed044  ldr wzr,[x10, #0x38]!
7101eed048  ldaxr w11,[x10]
7101eed04c  sub w11,w11,#0x1
7101eed050  stlxr w12,w11,[x10]
7101eed054  cbnz w12,0x7101eed048
7101eed058  str xzr,[x19, #0xf88]
7101eed05c  add x10,x19,#0xf98
7101eed060  strb wzr,[x19, #0xf98]
7101eed064  b 0x7101eed22c
7101eed068  adrp x8,0x7104f73000
7101eed06c  add x8,x8,#0xd30
7101eed070  stp wzr,w21,[sp, #0x20]
7101eed074  strb wzr,[sp, #0x28]
7101eed078  stp x8,xzr,[sp, #0x10]
7101eed07c  str wzr,[sp, #0x8]
7101eed080  str xzr,[sp, #0x40]
7101eed084  stp x23,xzr,[sp, #0x30]
7101eed088  str wzr,[x19, #0xf78]
7101eed08c  ldr x8,[x19, #0xf88]
7101eed090  cbz x8,0x7101eed0cc
7101eed094  adrp x9,0x7106dd5000
7101eed098  ldrb w9,[x9, #0x3a8]
7101eed09c  cmp w9,#0x1
7101eed0a0  b.ne 0x7101eed0cc
7101eed0a4  adrp x10,0x7106dd5000
7101eed0a8  ldr w9,[x19, #0xf90]
7101eed0ac  ldr w10,[x10, #0x3ac]
7101eed0b0  cmp w9,w10
7101eed0b4  b.ne 0x7101eed0cc
7101eed0b8  ldr wzr,[x8, #0x38]!
7101eed0bc  ldaxr w9,[x8]
7101eed0c0  sub w9,w9,#0x1
7101eed0c4  stlxr w10,w9,[x8]
7101eed0c8  cbnz w10,0x7101eed0bc
7101eed0cc  str xzr,[x19, #0xf88]
7101eed0d0  add x10,x19,#0xf98
7101eed0d4  strb wzr,[x10]
7101eed0d8  ldr x8,[sp, #0x18]
7101eed0dc  ldp x9,x10,[sp, #0x30]
7101eed0e0  ldr x11,[sp, #0x40]
7101eed0e4  str x9,[x19, #0xfa0]
7101eed0e8  adrp x9,0x7104f73000
7101eed0ec  add x9,x9,#0xd50
7101eed0f0  str x11,[x19, #0xfb0]
7101eed0f4  str x10,[x19, #0xfa8]
7101eed0f8  str x9,[sp, #0x10]
7101eed0fc  cbz x8,0x7101eed138
7101eed100  adrp x9,0x7106dd5000
7101eed104  ldrb w9,[x9, #0x3a8]
7101eed108  cmp w9,#0x1
7101eed10c  b.ne 0x7101eed138
7101eed110  adrp x10,0x7106dd5000
7101eed114  ldr w9,[sp, #0x20]
7101eed118  ldr w10,[x10, #0x3ac]
7101eed11c  cmp w9,w10
7101eed120  b.ne 0x7101eed138
7101eed124  ldr wzr,[x8, #0x38]!
7101eed128  ldaxr w9,[x8]
7101eed12c  sub w9,w9,#0x1
7101eed130  stlxr w10,w9,[x8]
7101eed134  cbnz w10,0x7101eed128
7101eed138  str xzr,[sp, #0x18]
7101eed13c  ldrb w8,[x19, #0xfbc]
7101eed140  cbz w8,0x7101eed1e4
7101eed144  ldp x8,x9,[x19, #0xf0]
7101eed148  sub x8,x9,x8
7101eed14c  mov x9,#0xda13
7101eed150  movk x9,#0x684b, LSL #16
7101eed154  asr x8,x8,#0x3
7101eed158  movk x9,#0xa12f, LSL #32
7101eed15c  movk x9,#0x84bd, LSL #48
7101eed160  mul x8,x8,x9
7101eed164  cmp x8,#0x3
7101eed168  b.hi 0x7101eed1e4
7101eed16c  ldr x8,[x19, #0xf70]
7101eed170  ldr x8,[x8]
7101eed174  add x0,x8,#0x8
7101eed178  adrp x1,0x7104421000
7101eed17c  add x1,x1,#0x55
7101eed180  add x8,sp,#0x8
7101eed184  bl 0x71037780e0
7101eed188  ldr x20,[sp, #0x10]
7101eed18c  ldr x0,[x20, #0x8]
7101eed190  cbz x0,0x7101eed1a4
7101eed194  ldr x8,[x0]
7101eed198  ldr x8,[x8, #0x138]
7101eed19c  blr x8
7101eed1a0  tbz w0,#0x0,0x7101eed1b8
7101eed1a4  adrp x8,0x710523d000
7101eed1a8  add x8,x8,#0x9e8
7101eed1ac  stp x8,xzr,[sp, #0x8]
7101eed1b0  cbnz x20,0x7101eed1dc
7101eed1b4  b 0x7101eed1e4
7101eed1b8  ldr x0,[x20, #0x8]
7101eed1bc  cbz x0,0x7101eed1d0
7101eed1c0  ldr x8,[x0]
7101eed1c4  ldr x8,[x8, #0x1b8]
7101eed1c8  fmov s0,0x3f800000
7101eed1cc  blr x8
7101eed1d0  adrp x8,0x710523d000
7101eed1d4  add x8,x8,#0x9e8
7101eed1d8  stp x8,xzr,[sp, #0x8]
7101eed1dc  mov x0,x20
7101eed1e0  bl 0x710392eb40
7101eed1e4  ldrsw x8,[x19, #0xdc]
7101eed1e8  cmp w8,#0x13
7101eed1ec  b.cs 0x7101eed288
7101eed1f0  add x8,x19,x8, LSL #0x2
7101eed1f4  mov w9,#0x5
7101eed1f8  str w9,[x8, #0x90]
7101eed1fc  ldr d8,[sp, #0x90]
7101eed200  ldp x29,x30,[sp, #0xf0]
7101eed204  ldp x20,x19,[sp, #0xe0]
7101eed208  ldp x22,x21,[sp, #0xd0]
7101eed20c  ldp x24,x23,[sp, #0xc0]
7101eed210  ldp x26,x25,[sp, #0xb0]
7101eed214  ldp x28,x27,[sp, #0xa0]
7101eed218  add sp,sp,#0x100
7101eed21c  ret
7101eed220  str w9,[x19, #0xf90]
7101eed224  add x9,x19,#0xf88
7101eed228  add x10,x19,#0xf98
7101eed22c  str x8,[x9]
7101eed230  add x8,x8,#0x38
7101eed234  ldaxr w9,[x8]
7101eed238  add w9,w9,#0x1
7101eed23c  stlxr w11,w9,[x8]
7101eed240  cbnz w11,0x7101eed234
7101eed244  b 0x7101eed0d4
7101eed248  adrp x0,0x7105314000
7101eed24c  add x0,x0,#0x4d8
7101eed250  bl 0x71039c06b0
7101eed254  cbz w0,0x7101eecd64
7101eed258  bl 0x7101764000
7101eed25c  adrp x0,0x7101763000
7101eed260  add x0,x0,#0xc40
7101eed264  adrp x1,0x71052c5000
7101eed268  add x1,x1,#0x180
7101eed26c  adrp x2,0x7104f17000
7101eed270  add x2,x2,#0x0
7101eed274  bl 0x71000001c0
7101eed278  adrp x0,0x7105314000
7101eed27c  add x0,x0,#0x4d8
7101eed280  bl 0x71039c06c0
7101eed284  b 0x7101eecd64
7101eed288  bl 0x71039c2650
