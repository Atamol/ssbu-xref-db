// addr:      7101ec80b0
// offset:    0x1ec80b0
// name:      FUN_7101ec80b0
// mangled:   
// size:      7908

7101ec80b0  sub sp,sp,#0x1d0
7101ec80b4  stp x28,x27,[sp, #0x170]
7101ec80b8  stp x26,x25,[sp, #0x180]
7101ec80bc  stp x24,x23,[sp, #0x190]
7101ec80c0  stp x22,x21,[sp, #0x1a0]
7101ec80c4  stp x20,x19,[sp, #0x1b0]
7101ec80c8  stp x29,x30,[sp, #0x1c0]
7101ec80cc  add x29,sp,#0x1c0
7101ec80d0  mov x19,x0
7101ec80d4  mov w1,#0x240
7101ec80d8  mov w0,#0x10
7101ec80dc  bl 0x710392e290
7101ec80e0  cbnz x0,0x7101ec8128
7101ec80e4  adrp x8,0x7105332000
7101ec80e8  ldr x0,[x8, #0xf00]
7101ec80ec  cbz x0,0x7101ec8124
7101ec80f0  mov w8,#0x240
7101ec80f4  str wzr,[sp, #0x58]
7101ec80f8  add x1,sp,#0x58
7101ec80fc  str x8,[sp, #0xd0]
7101ec8100  ldr x8,[x0]
7101ec8104  ldr x8,[x8, #0x30]
7101ec8108  add x2,sp,#0xd0
7101ec810c  blr x8
7101ec8110  tbz w0,#0x0,0x7101ec8124
7101ec8114  mov w1,#0x240
7101ec8118  mov w0,#0x10
7101ec811c  bl 0x710392e290
7101ec8120  cbnz x0,0x7101ec8128
7101ec8124  mov x0,xzr
7101ec8128  add x8,x0,#0x240
7101ec812c  mov x10,#0x6573
7101ec8130  movk x10,#0x5f74, LSL #16
7101ec8134  mov w24,#0x9dc5
7101ec8138  movk w24,#0x811c, LSL #16
7101ec813c  stur x8,[x29, #-0x68]
7101ec8140  orr x9,xzr,#0xf00000000
7101ec8144  movk x10,#0x3030, LSL #32
7101ec8148  movk x10,#0x6d5f, LSL #48
7101ec814c  add x8,sp,#0xd0
7101ec8150  stp x9,x10,[sp, #0xd0]
7101ec8154  mov x11,#0x7461
7101ec8158  movk x11,#0x7265, LSL #16
7101ec815c  add x8,x8,#0x9
7101ec8160  movk x11,#0x6169, LSL #32
7101ec8164  movk x11,#0x6c, LSL #48
7101ec8168  str x11,[sp, #0xe0]
7101ec816c  mov w9,#0x73
7101ec8170  stp x0,x0,[x29, #-0x78]
7101ec8174  mov w25,#0x89
7101ec8178  mov w10,w24
7101ec817c  mul w10,w10,w25
7101ec8180  and w9,w9,#0xff
7101ec8184  eor w10,w10,w9
7101ec8188  ldrb w9,[x8], #0x1
7101ec818c  cbnz w9,0x7101ec817c
7101ec8190  str w10,[sp, #0xd0]
7101ec8194  mov x9,x0
7101ec8198  add x10,sp,#0xd0
7101ec819c  mov x8,xzr
7101ec81a0  add x10,x10,#0x9
7101ec81a4  mov w12,#0x73
7101ec81a8  str wzr,[x9], #0x8
7101ec81ac  add w11,w8,#0x1
7101ec81b0  cmp w11,#0x3e
7101ec81b4  strb w12,[x9, x8, LSL ]
7101ec81b8  b.hi 0x7101ec81d0
7101ec81bc  ldrb w12,[x10, x8, LSL ]
7101ec81c0  add x11,x8,#0x1
7101ec81c4  mov x8,x11
7101ec81c8  cbnz w12,0x7101ec81ac
7101ec81cc  b 0x7101ec81d4
7101ec81d0  add w11,w8,#0x1
7101ec81d4  add x8,x0,#0x8
7101ec81d8  strb wzr,[x8, w11, UXTW ]
7101ec81dc  ldrb w8,[x0, #0x8]
7101ec81e0  mov w9,w24
7101ec81e4  str w11,[x0, #0x4]
7101ec81e8  cbz w8,0x7101ec8208
7101ec81ec  add x10,x0,#0x9
7101ec81f0  mov w9,w24
7101ec81f4  mul w9,w9,w25
7101ec81f8  and w8,w8,#0xff
7101ec81fc  eor w9,w9,w8
7101ec8200  ldrb w8,[x10], #0x1
7101ec8204  cbnz w8,0x7101ec81f4
7101ec8208  mov x8,x0
7101ec820c  mov x10,#0x6573
7101ec8210  movk x10,#0x5f74, LSL #16
7101ec8214  mov x20,#0xb00000000
7101ec8218  movk x10,#0x3130, LSL #32
7101ec821c  movk x10,#0x645f, LSL #48
7101ec8220  str w9,[x8], #0x48
7101ec8224  add x9,sp,#0xd0
7101ec8228  stp x20,x10,[sp, #0xd0]
7101ec822c  mov w11,#0x6172
7101ec8230  movk w11,#0x77, LSL #16
7101ec8234  str w11,[sp, #0xe0]
7101ec8238  add x9,x9,#0x9
7101ec823c  mov w10,#0x73
7101ec8240  stur x8,[x29, #-0x70]
7101ec8244  mov w11,w24
7101ec8248  mul w11,w11,w25
7101ec824c  and w10,w10,#0xff
7101ec8250  eor w11,w11,w10
7101ec8254  ldrb w10,[x9], #0x1
7101ec8258  cbnz w10,0x7101ec8248
7101ec825c  add x10,sp,#0xd0
7101ec8260  mov x9,xzr
7101ec8264  str w11,[sp, #0xd0]
7101ec8268  add x10,x10,#0x9
7101ec826c  add x11,x0,#0x50
7101ec8270  mov w13,#0x73
7101ec8274  str wzr,[x0, #0x48]
7101ec8278  add w12,w9,#0x1
7101ec827c  cmp w12,#0x3e
7101ec8280  strb w13,[x11, x9, LSL ]
7101ec8284  b.hi 0x7101ec829c
7101ec8288  ldrb w13,[x10, x9, LSL ]
7101ec828c  add x12,x9,#0x1
7101ec8290  mov x9,x12
7101ec8294  cbnz w13,0x7101ec8278
7101ec8298  b 0x7101ec82a0
7101ec829c  add w12,w9,#0x1
7101ec82a0  add x8,x8,w12, UXTW 
7101ec82a4  strb wzr,[x8, #0x8]
7101ec82a8  ldrb w8,[x0, #0x50]
7101ec82ac  mov w10,w24
7101ec82b0  str w12,[x0, #0x4c]
7101ec82b4  cbz w8,0x7101ec82d4
7101ec82b8  add x9,x0,#0x51
7101ec82bc  mov w10,w24
7101ec82c0  mul w10,w10,w25
7101ec82c4  and w8,w8,#0xff
7101ec82c8  eor w10,w10,w8
7101ec82cc  ldrb w8,[x9], #0x1
7101ec82d0  cbnz w8,0x7101ec82c0
7101ec82d4  str w10,[x0, #0x48]
7101ec82d8  mov x10,#0x6573
7101ec82dc  movk x10,#0x5f74, LSL #16
7101ec82e0  movk x10,#0x3230, LSL #32
7101ec82e4  movk x10,#0x655f, LSL #48
7101ec82e8  add x9,sp,#0xd0
7101ec82ec  add x8,x0,#0x90
7101ec82f0  stp x20,x10,[sp, #0xd0]
7101ec82f4  add x9,x9,#0x9
7101ec82f8  mov w12,#0x6964
7101ec82fc  movk w12,#0x74, LSL #16
7101ec8300  mov w10,#0x73
7101ec8304  mov w11,w24
7101ec8308  stur x8,[x29, #-0x70]
7101ec830c  str w12,[sp, #0xe0]
7101ec8310  mul w11,w11,w25
7101ec8314  and w10,w10,#0xff
7101ec8318  eor w11,w11,w10
7101ec831c  ldrb w10,[x9], #0x1
7101ec8320  cbnz w10,0x7101ec8310
7101ec8324  add x10,sp,#0xd0
7101ec8328  mov x9,xzr
7101ec832c  str w11,[sp, #0xd0]
7101ec8330  add x10,x10,#0x9
7101ec8334  mov w11,#0x73
7101ec8338  str wzr,[x8]
7101ec833c  tst w11,#0xff
7101ec8340  b.ne 0x7101ec8360
7101ec8344  b 0x7101ec8388
7101ec8348  add x13,x10,x9
7101ec834c  strb w11,[x12, #0x99]
7101ec8350  ldrb w11,[x13, #0x1]
7101ec8354  add x9,x9,#0x2
7101ec8358  tst w11,#0xff
7101ec835c  b.eq 0x7101ec8388
7101ec8360  add w13,w9,#0x1
7101ec8364  add x12,x0,x9
7101ec8368  cmp w13,#0x3f
7101ec836c  strb w11,[x12, #0x98]
7101ec8370  b.cs 0x7101ec8384
7101ec8374  ldrb w11,[x10, x9, LSL ]
7101ec8378  cbnz w11,0x7101ec8348
7101ec837c  add x9,x9,#0x1
7101ec8380  b 0x7101ec8388
7101ec8384  add w9,w9,#0x1
7101ec8388  add x8,x8,w9, UXTW 
7101ec838c  strb wzr,[x8, #0x8]
7101ec8390  ldrb w8,[x0, #0x98]
7101ec8394  mov w10,w24
7101ec8398  str w9,[x0, #0x94]
7101ec839c  cbz w8,0x7101ec83bc
7101ec83a0  add x9,x0,#0x99
7101ec83a4  mov w10,w24
7101ec83a8  mul w10,w10,w25
7101ec83ac  and w8,w8,#0xff
7101ec83b0  eor w10,w10,w8
7101ec83b4  ldrb w8,[x9], #0x1
7101ec83b8  cbnz w8,0x7101ec83a8
7101ec83bc  add x8,x0,#0xd8
7101ec83c0  str w10,[x0, #0x90]
7101ec83c4  stur x8,[x29, #-0x70]
7101ec83c8  mov x8,#0x6573
7101ec83cc  movk x8,#0x5f74, LSL #16
7101ec83d0  mov x21,#0xd00000000
7101ec83d4  movk x8,#0x3330, LSL #32
7101ec83d8  movk x8,#0x655f, LSL #48
7101ec83dc  mov w10,#0x6172
7101ec83e0  movk w10,#0x6573, LSL #16
7101ec83e4  stp x21,x8,[sp, #0xd0]
7101ec83e8  mov w12,#0x72
7101ec83ec  mov w9,#0x73
7101ec83f0  str w10,[sp, #0xe0]
7101ec83f4  mov w8,#0x9
7101ec83f8  add x10,sp,#0xd0
7101ec83fc  mov w11,w24
7101ec8400  strh w12,[sp, #0xe4]
7101ec8404  mul w11,w11,w25
7101ec8408  and w9,w9,#0xff
7101ec840c  eor w11,w11,w9
7101ec8410  ldrb w9,[x10, x8, LSL ]
7101ec8414  add x8,x8,#0x1
7101ec8418  cbnz w9,0x7101ec8404
7101ec841c  ldp x8,x9,[x29, #-0x70]
7101ec8420  cmp x8,x9
7101ec8424  str w11,[sp, #0xd0]
7101ec8428  b.cs 0x7101ec848c
7101ec842c  mov x10,x8
7101ec8430  add x11,sp,#0xd0
7101ec8434  mov x9,xzr
7101ec8438  add x11,x11,#0x9
7101ec843c  mov w12,#0x73
7101ec8440  str wzr,[x10], #0x9
7101ec8444  tst w12,#0xff
7101ec8448  b.ne 0x7101ec8468
7101ec844c  b 0x7101ec84a0
7101ec8450  add x13,x11,x9
7101ec8454  strb w12,[x10, x9, LSL ]
7101ec8458  ldrb w12,[x13, #0x1]
7101ec845c  add x9,x9,#0x2
7101ec8460  tst w12,#0xff
7101ec8464  b.eq 0x7101ec84a0
7101ec8468  add w13,w9,#0x1
7101ec846c  add x14,x10,x9
7101ec8470  cmp w13,#0x3f
7101ec8474  sturb w12,[x14, #-0x1]
7101ec8478  b.cs 0x7101ec849c
7101ec847c  ldrb w12,[x11, x9, LSL ]
7101ec8480  cbnz w12,0x7101ec8450
7101ec8484  add x9,x9,#0x1
7101ec8488  b 0x7101ec84a0
7101ec848c  sub x0,x29,#0x78
7101ec8490  add x1,sp,#0xd0
7101ec8494  bl 0x71019c1c50
7101ec8498  b 0x7101ec84e4
7101ec849c  add w9,w9,#0x1
7101ec84a0  add x10,x8,#0x8
7101ec84a4  strb wzr,[x10, w9, UXTW ]
7101ec84a8  str w9,[x8, #0x4]
7101ec84ac  ldrb w9,[x8, #0x8]
7101ec84b0  mov w11,w24
7101ec84b4  cbz w9,0x7101ec84d4
7101ec84b8  add x10,x8,#0x9
7101ec84bc  mov w11,w24
7101ec84c0  mul w11,w11,w25
7101ec84c4  and w9,w9,#0xff
7101ec84c8  eor w11,w11,w9
7101ec84cc  ldrb w9,[x10], #0x1
7101ec84d0  cbnz w9,0x7101ec84c0
7101ec84d4  str w11,[x8]
7101ec84d8  ldur x8,[x29, #-0x70]
7101ec84dc  add x8,x8,#0x48
7101ec84e0  stur x8,[x29, #-0x70]
7101ec84e4  mov x10,#0x6573
7101ec84e8  movk x10,#0x5f74, LSL #16
7101ec84ec  movk x10,#0x3430, LSL #32
7101ec84f0  movk x10,#0x675f, LSL #48
7101ec84f4  mov w11,#0x6165
7101ec84f8  movk w11,#0x72, LSL #16
7101ec84fc  mov w9,#0x73
7101ec8500  stp x20,x10,[sp, #0xd0]
7101ec8504  mov w8,#0x9
7101ec8508  add x10,sp,#0xd0
7101ec850c  str w11,[sp, #0xe0]
7101ec8510  mov w11,w24
7101ec8514  mul w11,w11,w25
7101ec8518  and w9,w9,#0xff
7101ec851c  eor w11,w11,w9
7101ec8520  ldrb w9,[x10, x8, LSL ]
7101ec8524  add x8,x8,#0x1
7101ec8528  cbnz w9,0x7101ec8514
7101ec852c  ldp x8,x9,[x29, #-0x70]
7101ec8530  cmp x8,x9
7101ec8534  str w11,[sp, #0xd0]
7101ec8538  b.cs 0x7101ec859c
7101ec853c  mov x10,x8
7101ec8540  add x11,sp,#0xd0
7101ec8544  mov x9,xzr
7101ec8548  add x11,x11,#0x9
7101ec854c  mov w12,#0x73
7101ec8550  str wzr,[x10], #0x9
7101ec8554  tst w12,#0xff
7101ec8558  b.ne 0x7101ec8578
7101ec855c  b 0x7101ec85b0
7101ec8560  add x13,x11,x9
7101ec8564  strb w12,[x10, x9, LSL ]
7101ec8568  ldrb w12,[x13, #0x1]
7101ec856c  add x9,x9,#0x2
7101ec8570  tst w12,#0xff
7101ec8574  b.eq 0x7101ec85b0
7101ec8578  add w13,w9,#0x1
7101ec857c  add x14,x10,x9
7101ec8580  cmp w13,#0x3f
7101ec8584  sturb w12,[x14, #-0x1]
7101ec8588  b.cs 0x7101ec85ac
7101ec858c  ldrb w12,[x11, x9, LSL ]
7101ec8590  cbnz w12,0x7101ec8560
7101ec8594  add x9,x9,#0x1
7101ec8598  b 0x7101ec85b0
7101ec859c  sub x0,x29,#0x78
7101ec85a0  add x1,sp,#0xd0
7101ec85a4  bl 0x71019c1c50
7101ec85a8  b 0x7101ec85f4
7101ec85ac  add w9,w9,#0x1
7101ec85b0  add x10,x8,#0x8
7101ec85b4  strb wzr,[x10, w9, UXTW ]
7101ec85b8  str w9,[x8, #0x4]
7101ec85bc  ldrb w9,[x8, #0x8]
7101ec85c0  mov w11,w24
7101ec85c4  cbz w9,0x7101ec85e4
7101ec85c8  add x10,x8,#0x9
7101ec85cc  mov w11,w24
7101ec85d0  mul w11,w11,w25
7101ec85d4  and w9,w9,#0xff
7101ec85d8  eor w11,w11,w9
7101ec85dc  ldrb w9,[x10], #0x1
7101ec85e0  cbnz w9,0x7101ec85d0
7101ec85e4  str w11,[x8]
7101ec85e8  ldur x8,[x29, #-0x70]
7101ec85ec  add x8,x8,#0x48
7101ec85f0  stur x8,[x29, #-0x70]
7101ec85f4  mov x10,#0x6573
7101ec85f8  movk x10,#0x5f74, LSL #16
7101ec85fc  movk x10,#0x3530, LSL #32
7101ec8600  movk x10,#0x725f, LSL #48
7101ec8604  mov w11,#0x6961
7101ec8608  movk w11,#0x6c, LSL #16
7101ec860c  mov w9,#0x73
7101ec8610  stp x20,x10,[sp, #0xd0]
7101ec8614  mov w8,#0x9
7101ec8618  add x10,sp,#0xd0
7101ec861c  str w11,[sp, #0xe0]
7101ec8620  mov w11,w24
7101ec8624  mul w11,w11,w25
7101ec8628  and w9,w9,#0xff
7101ec862c  eor w11,w11,w9
7101ec8630  ldrb w9,[x10, x8, LSL ]
7101ec8634  add x8,x8,#0x1
7101ec8638  cbnz w9,0x7101ec8624
7101ec863c  ldp x8,x9,[x29, #-0x70]
7101ec8640  cmp x8,x9
7101ec8644  str w11,[sp, #0xd0]
7101ec8648  b.cs 0x7101ec86ac
7101ec864c  mov x10,x8
7101ec8650  add x11,sp,#0xd0
7101ec8654  mov x9,xzr
7101ec8658  add x11,x11,#0x9
7101ec865c  mov w12,#0x73
7101ec8660  str wzr,[x10], #0x9
7101ec8664  tst w12,#0xff
7101ec8668  b.ne 0x7101ec8688
7101ec866c  b 0x7101ec86c0
7101ec8670  add x13,x11,x9
7101ec8674  strb w12,[x10, x9, LSL ]
7101ec8678  ldrb w12,[x13, #0x1]
7101ec867c  add x9,x9,#0x2
7101ec8680  tst w12,#0xff
7101ec8684  b.eq 0x7101ec86c0
7101ec8688  add w13,w9,#0x1
7101ec868c  add x14,x10,x9
7101ec8690  cmp w13,#0x3f
7101ec8694  sturb w12,[x14, #-0x1]
7101ec8698  b.cs 0x7101ec86bc
7101ec869c  ldrb w12,[x11, x9, LSL ]
7101ec86a0  cbnz w12,0x7101ec8670
7101ec86a4  add x9,x9,#0x1
7101ec86a8  b 0x7101ec86c0
7101ec86ac  sub x0,x29,#0x78
7101ec86b0  add x1,sp,#0xd0
7101ec86b4  bl 0x71019c1c50
7101ec86b8  b 0x7101ec8704
7101ec86bc  add w9,w9,#0x1
7101ec86c0  add x10,x8,#0x8
7101ec86c4  strb wzr,[x10, w9, UXTW ]
7101ec86c8  str w9,[x8, #0x4]
7101ec86cc  ldrb w9,[x8, #0x8]
7101ec86d0  mov w11,w24
7101ec86d4  cbz w9,0x7101ec86f4
7101ec86d8  add x10,x8,#0x9
7101ec86dc  mov w11,w24
7101ec86e0  mul w11,w11,w25
7101ec86e4  and w9,w9,#0xff
7101ec86e8  eor w11,w11,w9
7101ec86ec  ldrb w9,[x10], #0x1
7101ec86f0  cbnz w9,0x7101ec86e0
7101ec86f4  str w11,[x8]
7101ec86f8  ldur x8,[x29, #-0x70]
7101ec86fc  add x8,x8,#0x48
7101ec8700  stur x8,[x29, #-0x70]
7101ec8704  mov x8,#0x6573
7101ec8708  movk x8,#0x5f74, LSL #16
7101ec870c  movk x8,#0x3630, LSL #32
7101ec8710  movk x8,#0x735f, LSL #48
7101ec8714  mov w10,#0x6977
7101ec8718  movk w10,#0x6374, LSL #16
7101ec871c  mov w12,#0x68
7101ec8720  stp x21,x8,[sp, #0xd0]
7101ec8724  mov w9,#0x73
7101ec8728  str w10,[sp, #0xe0]
7101ec872c  mov w8,#0x9
7101ec8730  add x10,sp,#0xd0
7101ec8734  mov w11,w24
7101ec8738  strh w12,[sp, #0xe4]
7101ec873c  mul w11,w11,w25
7101ec8740  and w9,w9,#0xff
7101ec8744  eor w11,w11,w9
7101ec8748  ldrb w9,[x10, x8, LSL ]
7101ec874c  add x8,x8,#0x1
7101ec8750  cbnz w9,0x7101ec873c
7101ec8754  ldp x8,x9,[x29, #-0x70]
7101ec8758  cmp x8,x9
7101ec875c  str w11,[sp, #0xd0]
7101ec8760  b.cs 0x7101ec87c4
7101ec8764  mov x10,x8
7101ec8768  add x11,sp,#0xd0
7101ec876c  mov x9,xzr
7101ec8770  add x11,x11,#0x9
7101ec8774  mov w12,#0x73
7101ec8778  str wzr,[x10], #0x9
7101ec877c  tst w12,#0xff
7101ec8780  b.ne 0x7101ec87a0
7101ec8784  b 0x7101ec87d8
7101ec8788  add x13,x11,x9
7101ec878c  strb w12,[x10, x9, LSL ]
7101ec8790  ldrb w12,[x13, #0x1]
7101ec8794  add x9,x9,#0x2
7101ec8798  tst w12,#0xff
7101ec879c  b.eq 0x7101ec87d8
7101ec87a0  add w13,w9,#0x1
7101ec87a4  add x14,x10,x9
7101ec87a8  cmp w13,#0x3f
7101ec87ac  sturb w12,[x14, #-0x1]
7101ec87b0  b.cs 0x7101ec87d4
7101ec87b4  ldrb w12,[x11, x9, LSL ]
7101ec87b8  cbnz w12,0x7101ec8788
7101ec87bc  add x9,x9,#0x1
7101ec87c0  b 0x7101ec87d8
7101ec87c4  sub x0,x29,#0x78
7101ec87c8  add x1,sp,#0xd0
7101ec87cc  bl 0x71019c1c50
7101ec87d0  b 0x7101ec881c
7101ec87d4  add w9,w9,#0x1
7101ec87d8  add x10,x8,#0x8
7101ec87dc  strb wzr,[x10, w9, UXTW ]
7101ec87e0  str w9,[x8, #0x4]
7101ec87e4  ldrb w9,[x8, #0x8]
7101ec87e8  mov w11,w24
7101ec87ec  cbz w9,0x7101ec880c
7101ec87f0  add x10,x8,#0x9
7101ec87f4  mov w11,w24
7101ec87f8  mul w11,w11,w25
7101ec87fc  and w9,w9,#0xff
7101ec8800  eor w11,w11,w9
7101ec8804  ldrb w9,[x10], #0x1
7101ec8808  cbnz w9,0x7101ec87f8
7101ec880c  str w11,[x8]
7101ec8810  ldur x8,[x29, #-0x70]
7101ec8814  add x8,x8,#0x48
7101ec8818  stur x8,[x29, #-0x70]
7101ec881c  mov x9,#0x6573
7101ec8820  movk x9,#0x5f74, LSL #16
7101ec8824  mov x10,#0x6363
7101ec8828  movk x10,#0x7365, LSL #16
7101ec882c  orr x8,xzr,#0xf00000000
7101ec8830  movk x9,#0x3730, LSL #32
7101ec8834  movk x9,#0x615f, LSL #48
7101ec8838  stp x8,x9,[sp, #0xd0]
7101ec883c  movk x10,#0x726f, LSL #32
7101ec8840  movk x10,#0x79, LSL #48
7101ec8844  str x10,[sp, #0xe0]
7101ec8848  mov w27,#0x73
7101ec884c  mov w8,#0x9
7101ec8850  add x9,sp,#0xd0
7101ec8854  mov w11,w27
7101ec8858  mov w10,w24
7101ec885c  mul w10,w10,w25
7101ec8860  and w11,w11,#0xff
7101ec8864  eor w10,w10,w11
7101ec8868  ldrb w11,[x9, x8, LSL ]
7101ec886c  add x8,x8,#0x1
7101ec8870  cbnz w11,0x7101ec885c
7101ec8874  ldp x8,x9,[x29, #-0x70]
7101ec8878  cmp x8,x9
7101ec887c  str w10,[sp, #0xd0]
7101ec8880  b.cs 0x7101ec88e4
7101ec8884  mov x10,x8
7101ec8888  add x11,sp,#0xd0
7101ec888c  mov x9,xzr
7101ec8890  add x11,x11,#0x9
7101ec8894  mov w12,#0x73
7101ec8898  str wzr,[x10], #0x9
7101ec889c  tst w12,#0xff
7101ec88a0  b.ne 0x7101ec88c0
7101ec88a4  b 0x7101ec88f8
7101ec88a8  add x13,x11,x9
7101ec88ac  strb w12,[x10, x9, LSL ]
7101ec88b0  ldrb w12,[x13, #0x1]
7101ec88b4  add x9,x9,#0x2
7101ec88b8  tst w12,#0xff
7101ec88bc  b.eq 0x7101ec88f8
7101ec88c0  add w13,w9,#0x1
7101ec88c4  add x14,x10,x9
7101ec88c8  cmp w13,#0x3f
7101ec88cc  sturb w12,[x14, #-0x1]
7101ec88d0  b.cs 0x7101ec88f4
7101ec88d4  ldrb w12,[x11, x9, LSL ]
7101ec88d8  cbnz w12,0x7101ec88a8
7101ec88dc  add x9,x9,#0x1
7101ec88e0  b 0x7101ec88f8
7101ec88e4  sub x0,x29,#0x78
7101ec88e8  add x1,sp,#0xd0
7101ec88ec  bl 0x71019c1c50
7101ec88f0  b 0x7101ec893c
7101ec88f4  add w9,w9,#0x1
7101ec88f8  add x10,x8,#0x8
7101ec88fc  strb wzr,[x10, w9, UXTW ]
7101ec8900  str w9,[x8, #0x4]
7101ec8904  ldrb w9,[x8, #0x8]
7101ec8908  mov w11,w24
7101ec890c  cbz w9,0x7101ec892c
7101ec8910  add x10,x8,#0x9
7101ec8914  mov w11,w24
7101ec8918  mul w11,w11,w25
7101ec891c  and w9,w9,#0xff
7101ec8920  eor w11,w11,w9
7101ec8924  ldrb w9,[x10], #0x1
7101ec8928  cbnz w9,0x7101ec8918
7101ec892c  str w11,[x8]
7101ec8930  ldur x8,[x29, #-0x70]
7101ec8934  add x8,x8,#0x48
7101ec8938  stur x8,[x29, #-0x70]
7101ec893c  adrp x1,0x7104270000
7101ec8940  add x1,x1,#0x714
7101ec8944  sub x2,x29,#0x78
7101ec8948  mov x0,x19
7101ec894c  bl 0x7101ec4640
7101ec8950  mov x9,#0x6500
7101ec8954  movk x9,#0x5f74, LSL #16
7101ec8958  mov w10,#0x10
7101ec895c  movk x9,#0x6572, LSL #32
7101ec8960  movk x9,#0x5f70, LSL #48
7101ec8964  strb wzr,[sp, #0xe8]
7101ec8968  stp xzr,x9,[sp, #0xd0]
7101ec896c  mov x9,#0x616d
7101ec8970  movk x9,#0x6574, LSL #16
7101ec8974  add x8,sp,#0xd0
7101ec8978  movk x9,#0x6972, LSL #32
7101ec897c  movk x9,#0x6c61, LSL #48
7101ec8980  add x20,x8,#0x48
7101ec8984  str x9,[sp, #0xe0]
7101ec8988  mov w9,#0x9
7101ec898c  mov w11,w27
7101ec8990  str w10,[sp, #0xd4]
7101ec8994  mov w10,w24
7101ec8998  stp xzr,xzr,[sp, #0x138]
7101ec899c  stp xzr,xzr,[sp, #0x128]
7101ec89a0  strb w27,[sp, #0xd8]
7101ec89a4  stp xzr,xzr,[sp, #0x118]
7101ec89a8  mul w10,w10,w25
7101ec89ac  and w11,w11,#0xff
7101ec89b0  eor w10,w10,w11
7101ec89b4  ldrb w11,[x8, x9, LSL ]
7101ec89b8  add x9,x9,#0x1
7101ec89bc  cbnz w11,0x7101ec89a8
7101ec89c0  mov w1,#0x438
7101ec89c4  mov w0,#0x10
7101ec89c8  str w10,[sp, #0xd0]
7101ec89cc  bl 0x710392e290
7101ec89d0  cbnz x0,0x7101ec8a18
7101ec89d4  adrp x8,0x7105332000
7101ec89d8  ldr x0,[x8, #0xf00]
7101ec89dc  cbz x0,0x7101ec8a14
7101ec89e0  mov w8,#0x438
7101ec89e4  str wzr,[sp, #0x10]
7101ec89e8  add x1,sp,#0x10
7101ec89ec  str x8,[sp, #0x58]
7101ec89f0  ldr x8,[x0]
7101ec89f4  ldr x8,[x8, #0x30]
7101ec89f8  add x2,sp,#0x58
7101ec89fc  blr x8
7101ec8a00  tbz w0,#0x0,0x7101ec8a14
7101ec8a04  mov w1,#0x438
7101ec8a08  mov w0,#0x10
7101ec8a0c  bl 0x710392e290
7101ec8a10  cbnz x0,0x7101ec8a18
7101ec8a14  mov x0,xzr
7101ec8a18  add x8,x0,#0x438
7101ec8a1c  stp x0,x0,[sp, #0x118]
7101ec8a20  add x9,sp,#0xd0
7101ec8a24  mov w1,#0x438
7101ec8a28  mov w0,#0x10
7101ec8a2c  str x19,[sp, #0x8]
7101ec8a30  add x21,x9,#0x60
7101ec8a34  str x8,[sp, #0x128]
7101ec8a38  bl 0x710392e290
7101ec8a3c  cbnz x0,0x7101ec8a84
7101ec8a40  adrp x8,0x7105332000
7101ec8a44  ldr x0,[x8, #0xf00]
7101ec8a48  cbz x0,0x7101ec8a80
7101ec8a4c  mov w8,#0x438
7101ec8a50  str wzr,[sp, #0x10]
7101ec8a54  add x1,sp,#0x10
7101ec8a58  str x8,[sp, #0x58]
7101ec8a5c  ldr x8,[x0]
7101ec8a60  ldr x8,[x8, #0x30]
7101ec8a64  add x2,sp,#0x58
7101ec8a68  blr x8
7101ec8a6c  tbz w0,#0x0,0x7101ec8a80
7101ec8a70  mov w1,#0x438
7101ec8a74  mov w0,#0x10
7101ec8a78  bl 0x710392e290
7101ec8a7c  cbnz x0,0x7101ec8a84
7101ec8a80  mov x0,xzr
7101ec8a84  add x28,sp,#0x58
7101ec8a88  mov x22,xzr
7101ec8a8c  add x8,x0,#0x438
7101ec8a90  add x19,x28,#0x9
7101ec8a94  add x26,x28,#0x8
7101ec8a98  str x8,[sp, #0x140]
7101ec8a9c  adrp x23,0x7104308000
7101ec8aa0  add x23,x23,#0xb9a
7101ec8aa4  stp x0,x0,[sp, #0x130]
7101ec8aa8  adrp x9,0x71050b2000
7101ec8aac  add x9,x9,#0xa68
7101ec8ab0  mov x8,xzr
7101ec8ab4  ldr x9,[x9, x22, LSL #0x3]
7101ec8ab8  str xzr,[sp, #0x58]
7101ec8abc  add x11,x9,x8
7101ec8ac0  ldrb w12,[x11]
7101ec8ac4  cbz w12,0x7101ec8b04
7101ec8ac8  add x10,x28,x8
7101ec8acc  strb w12,[x10, #0x8]
7101ec8ad0  ldrb w12,[x11, #0x1]
7101ec8ad4  cbz w12,0x7101ec8af8
7101ec8ad8  strb w12,[x10, #0x9]
7101ec8adc  ldrb w11,[x11, #0x2]
7101ec8ae0  cbz w11,0x7101ec8b00
7101ec8ae4  add x8,x8,#0x3
7101ec8ae8  cmp w8,#0x3f
7101ec8aec  strb w11,[x10, #0xa]
7101ec8af0  b.cc 0x7101ec8abc
7101ec8af4  b 0x7101ec8b04
7101ec8af8  add x8,x8,#0x1
7101ec8afc  b 0x7101ec8b04
7101ec8b00  add x8,x8,#0x2
7101ec8b04  add x9,x28,#0x8
7101ec8b08  strb wzr,[x9, w8, UXTW ]
7101ec8b0c  ldrb w10,[sp, #0x60]
7101ec8b10  str w8,[sp, #0x5c]
7101ec8b14  mov w8,w24
7101ec8b18  cbz w10,0x7101ec8b3c
7101ec8b1c  mov x9,x19
7101ec8b20  mov w11,w10
7101ec8b24  mov w8,w24
7101ec8b28  mul w8,w8,w25
7101ec8b2c  and w11,w11,#0xff
7101ec8b30  eor w8,w8,w11
7101ec8b34  ldrb w11,[x9], #0x1
7101ec8b38  cbnz w11,0x7101ec8b28
7101ec8b3c  str w8,[sp, #0x58]
7101ec8b40  ldp x8,x9,[sp, #0x120]
7101ec8b44  cmp x8,x9
7101ec8b48  b.cs 0x7101ec8bac
7101ec8b4c  mov x11,x8
7101ec8b50  mov x9,xzr
7101ec8b54  str wzr,[x11], #0x8
7101ec8b58  tst w10,#0xff
7101ec8b5c  b.ne 0x7101ec8b74
7101ec8b60  b 0x7101ec8bc8
7101ec8b64  ldrb w10,[x10, #0x2]
7101ec8b68  add x9,x9,#0x3
7101ec8b6c  tst w10,#0xff
7101ec8b70  b.eq 0x7101ec8bc8
7101ec8b74  strb w10,[x11, x9, LSL ]
7101ec8b78  ldrb w13,[x19, x9, LSL ]
7101ec8b7c  cbz w13,0x7101ec8bbc
7101ec8b80  add x12,x11,x9
7101ec8b84  add x10,x19,x9
7101ec8b88  strb w13,[x12, #0x1]
7101ec8b8c  ldrb w13,[x10, #0x1]
7101ec8b90  cbz w13,0x7101ec8bc4
7101ec8b94  add w14,w9,#0x3
7101ec8b98  cmp w14,#0x3e
7101ec8b9c  strb w13,[x12, #0x2]
7101ec8ba0  b.ls 0x7101ec8b64
7101ec8ba4  add w9,w9,#0x3
7101ec8ba8  b 0x7101ec8bc8
7101ec8bac  add x1,sp,#0x58
7101ec8bb0  mov x0,x20
7101ec8bb4  bl 0x71019c1c50
7101ec8bb8  b 0x7101ec8c0c
7101ec8bbc  add x9,x9,#0x1
7101ec8bc0  b 0x7101ec8bc8
7101ec8bc4  add x9,x9,#0x2
7101ec8bc8  add x10,x8,#0x8
7101ec8bcc  strb wzr,[x10, w9, UXTW ]
7101ec8bd0  str w9,[x8, #0x4]
7101ec8bd4  ldrb w9,[x8, #0x8]
7101ec8bd8  mov w11,w24
7101ec8bdc  cbz w9,0x7101ec8bfc
7101ec8be0  add x10,x8,#0x9
7101ec8be4  mov w11,w24
7101ec8be8  mul w11,w11,w25
7101ec8bec  and w9,w9,#0xff
7101ec8bf0  eor w11,w11,w9
7101ec8bf4  ldrb w9,[x10], #0x1
7101ec8bf8  cbnz w9,0x7101ec8be8
7101ec8bfc  str w11,[x8]
7101ec8c00  ldr x8,[sp, #0x120]
7101ec8c04  add x8,x8,#0x48
7101ec8c08  str x8,[sp, #0x120]
7101ec8c0c  add x8,sp,#0x58
7101ec8c10  mov x0,x23
7101ec8c14  mov w1,w22
7101ec8c18  bl 0x71003a4ca0
7101ec8c1c  ldp x8,x9,[sp, #0x138]
7101ec8c20  cmp x8,x9
7101ec8c24  b.cs 0x7101ec8c70
7101ec8c28  mov x10,x8
7101ec8c2c  mov x9,xzr
7101ec8c30  str wzr,[x10], #0x8
7101ec8c34  add x11,x26,x9
7101ec8c38  ldrb w12,[x11]
7101ec8c3c  cbz w12,0x7101ec8c8c
7101ec8c40  strb w12,[x10, x9, LSL ]
7101ec8c44  ldrb w13,[x11, #0x1]
7101ec8c48  cbz w13,0x7101ec8c80
7101ec8c4c  add x12,x10,x9
7101ec8c50  strb w13,[x12, #0x1]
7101ec8c54  ldrb w11,[x11, #0x2]
7101ec8c58  cbz w11,0x7101ec8c88
7101ec8c5c  add x9,x9,#0x3
7101ec8c60  cmp w9,#0x3f
7101ec8c64  strb w11,[x12, #0x2]
7101ec8c68  b.cc 0x7101ec8c34
7101ec8c6c  b 0x7101ec8c8c
7101ec8c70  add x1,sp,#0x58
7101ec8c74  mov x0,x21
7101ec8c78  bl 0x71019c1c50
7101ec8c7c  b 0x7101ec8cd0
7101ec8c80  add x9,x9,#0x1
7101ec8c84  b 0x7101ec8c8c
7101ec8c88  add x9,x9,#0x2
7101ec8c8c  add x10,x8,#0x8
7101ec8c90  strb wzr,[x10, w9, UXTW ]
7101ec8c94  str w9,[x8, #0x4]
7101ec8c98  ldrb w9,[x8, #0x8]
7101ec8c9c  mov w11,w24
7101ec8ca0  cbz w9,0x7101ec8cc0
7101ec8ca4  add x10,x8,#0x9
7101ec8ca8  mov w11,w24
7101ec8cac  mul w11,w11,w25
7101ec8cb0  and w9,w9,#0xff
7101ec8cb4  eor w11,w11,w9
7101ec8cb8  ldrb w9,[x10], #0x1
7101ec8cbc  cbnz w9,0x7101ec8cac
7101ec8cc0  str w11,[x8]
7101ec8cc4  ldr x8,[sp, #0x138]
7101ec8cc8  add x8,x8,#0x48
7101ec8ccc  str x8,[sp, #0x138]
7101ec8cd0  add x22,x22,#0x1
7101ec8cd4  cmp x22,#0xf
7101ec8cd8  b.ne 0x7101ec8aa8
7101ec8cdc  ldr x28,[sp, #0x8]
7101ec8ce0  add x2,sp,#0xd0
7101ec8ce4  mov w1,wzr
7101ec8ce8  mov x0,x28
7101ec8cec  bl 0x7101ec9fa0
7101ec8cf0  mov x8,#0x6500
7101ec8cf4  movk x8,#0x5f74, LSL #16
7101ec8cf8  mov w9,#0x6369
7101ec8cfc  movk w9,#0x5f6e, LSL #16
7101ec8d00  movk x8,#0x6572, LSL #32
7101ec8d04  movk x8,#0x5f70, LSL #48
7101ec8d08  stp xzr,x8,[sp, #0x58]
7101ec8d0c  add x8,sp,#0x58
7101ec8d10  str w9,[sp, #0x68]
7101ec8d14  mov w9,#0x3030
7101ec8d18  orr w10,wzr,#0xe
7101ec8d1c  add x20,x8,#0x48
7101ec8d20  strh w9,[sp, #0x6c]
7101ec8d24  mov w9,#0x9
7101ec8d28  str w10,[sp, #0x5c]
7101ec8d2c  mov w10,w24
7101ec8d30  strb w27,[sp, #0x60]
7101ec8d34  stp xzr,xzr,[sp, #0xc0]
7101ec8d38  strb wzr,[sp, #0x6e]
7101ec8d3c  stp xzr,xzr,[sp, #0xb0]
7101ec8d40  stp xzr,xzr,[sp, #0xa0]
7101ec8d44  and w11,w27,#0xff
7101ec8d48  mul w10,w10,w25
7101ec8d4c  eor w10,w10,w11
7101ec8d50  ldrb w27,[x8, x9, LSL ]
7101ec8d54  add x9,x9,#0x1
7101ec8d58  cbnz w27,0x7101ec8d44
7101ec8d5c  mov w1,#0x2
7101ec8d60  add x2,sp,#0x58
7101ec8d64  mov x0,x28
7101ec8d68  str w10,[sp, #0x58]
7101ec8d6c  add x19,sp,#0x58
7101ec8d70  bl 0x7101ec9fa0
7101ec8d74  orr w1,wzr,#0x3
7101ec8d78  add x2,sp,#0x58
7101ec8d7c  mov x0,x28
7101ec8d80  bl 0x7101ec9fa0
7101ec8d84  mov w1,#0x4
7101ec8d88  add x2,sp,#0x58
7101ec8d8c  mov x0,x28
7101ec8d90  bl 0x7101ec9fa0
7101ec8d94  orr w1,wzr,#0x6
7101ec8d98  add x2,sp,#0x58
7101ec8d9c  mov x0,x28
7101ec8da0  bl 0x7101ec9fa0
7101ec8da4  ldr x8,[sp, #0xa0]
7101ec8da8  mov x0,x20
7101ec8dac  str x8,[sp, #0xa8]
7101ec8db0  bl 0x7101ec36d0
7101ec8db4  ldr x8,[sp, #0xb8]
7101ec8db8  add x21,x19,#0x60
7101ec8dbc  mov x0,x21
7101ec8dc0  str x8,[sp, #0xc0]
7101ec8dc4  bl 0x7101ec36d0
7101ec8dc8  ldr x8,[sp, #0xb0]
7101ec8dcc  ldr x22,[sp, #0xa0]
7101ec8dd0  sub x8,x8,x22
7101ec8dd4  mov x23,#0x8e39
7101ec8dd8  movk x23,#0x38e3, LSL #16
7101ec8ddc  movk x23,#0xe38e, LSL #32
7101ec8de0  movk x23,#0x8e38, LSL #48
7101ec8de4  asr x8,x8,#0x3
7101ec8de8  mul x8,x8,x23
7101ec8dec  cmp x8,#0x3
7101ec8df0  b.hi 0x7101ec8f24
7101ec8df4  ldr x19,[sp, #0xa8]
7101ec8df8  sub x8,x19,x22
7101ec8dfc  asr x8,x8,#0x3
7101ec8e00  mov w1,#0x120
7101ec8e04  mov w0,#0x10
7101ec8e08  mul x26,x8,x23
7101ec8e0c  bl 0x710392e290
7101ec8e10  cbnz x0,0x7101ec8e58
7101ec8e14  adrp x8,0x7105332000
7101ec8e18  ldr x0,[x8, #0xf00]
7101ec8e1c  cbz x0,0x7101ec8e54
7101ec8e20  mov w8,#0x120
7101ec8e24  stur wzr,[x29, #-0x5c]
7101ec8e28  sub x1,x29,#0x5c
7101ec8e2c  str x8,[sp, #0x10]
7101ec8e30  ldr x8,[x0]
7101ec8e34  ldr x8,[x8, #0x30]
7101ec8e38  add x2,sp,#0x10
7101ec8e3c  blr x8
7101ec8e40  tbz w0,#0x0,0x7101ec8e54
7101ec8e44  mov w1,#0x120
7101ec8e48  mov w0,#0x10
7101ec8e4c  bl 0x710392e290
7101ec8e50  cbnz x0,0x7101ec8e58
7101ec8e54  mov x0,xzr
7101ec8e58  mov w8,#0x48
7101ec8e5c  madd x8,x26,x8,x0
7101ec8e60  add x9,x0,#0x120
7101ec8e64  mov x10,x8
7101ec8e68  cmp x19,x22
7101ec8e6c  b.eq 0x7101ec8f10
7101ec8e70  mov x11,xzr
7101ec8e74  mov x12,x19
7101ec8e78  sub x19,x19,#0x48
7101ec8e7c  stur wzr,[x10, #-0x48]
7101ec8e80  add x14,x12,x11
7101ec8e84  ldurb w15,[x14, #-0x40]
7101ec8e88  cbz w15,0x7101ec8ec8
7101ec8e8c  add x13,x10,x11
7101ec8e90  sturb w15,[x13, #-0x40]
7101ec8e94  ldurb w15,[x14, #-0x3f]
7101ec8e98  cbz w15,0x7101ec8ebc
7101ec8e9c  sturb w15,[x13, #-0x3f]
7101ec8ea0  ldurb w14,[x14, #-0x3e]
7101ec8ea4  cbz w14,0x7101ec8ec4
7101ec8ea8  add x11,x11,#0x3
7101ec8eac  cmp w11,#0x3f
7101ec8eb0  sturb w14,[x13, #-0x3e]
7101ec8eb4  b.cc 0x7101ec8e80
7101ec8eb8  b 0x7101ec8ec8
7101ec8ebc  add x11,x11,#0x1
7101ec8ec0  b 0x7101ec8ec8
7101ec8ec4  add x11,x11,#0x2
7101ec8ec8  sub x12,x10,#0x40
7101ec8ecc  strb wzr,[x12, w11, UXTW ]
7101ec8ed0  ldurb w12,[x10, #-0x40]
7101ec8ed4  stur w11,[x10, #-0x44]
7101ec8ed8  mov w11,w24
7101ec8edc  cbz w12,0x7101ec8f00
7101ec8ee0  orr x13,xzr,#-0x3f
7101ec8ee4  mov w11,w24
7101ec8ee8  mul w11,w11,w25
7101ec8eec  and w12,w12,#0xff
7101ec8ef0  eor w11,w11,w12
7101ec8ef4  ldrb w12,[x10, x13, LSL ]
7101ec8ef8  add x13,x13,#0x1
7101ec8efc  cbnz w12,0x7101ec8ee8
7101ec8f00  cmp x19,x22
7101ec8f04  str w11,[x10, #-0x48]!
7101ec8f08  b.ne 0x7101ec8e70
7101ec8f0c  ldr x22,[sp, #0xa0]
7101ec8f10  stp x10,x8,[sp, #0xa0]
7101ec8f14  str x9,[sp, #0xb0]
7101ec8f18  cbz x22,0x7101ec8f24
7101ec8f1c  mov x0,x22
7101ec8f20  bl 0x710392eb40
7101ec8f24  mov x8,xzr
7101ec8f28  add x9,sp,#0x10
7101ec8f2c  adrp x10,0x71042e7000
7101ec8f30  add x10,x10,#0x9e2
7101ec8f34  str xzr,[sp, #0x10]
7101ec8f38  b 0x7101ec8f44
7101ec8f3c  add x8,x8,#0x2
7101ec8f40  strb w12,[x11, #0x9]
7101ec8f44  add x12,x10,x8
7101ec8f48  ldrb w13,[x12]
7101ec8f4c  cbz w13,0x7101ec8f64
7101ec8f50  ldrb w12,[x12, #0x1]
7101ec8f54  add x11,x9,x8
7101ec8f58  strb w13,[x11, #0x8]
7101ec8f5c  cbnz w12,0x7101ec8f3c
7101ec8f60  add x8,x8,#0x1
7101ec8f64  add x11,sp,#0x10
7101ec8f68  add x9,x11,#0x8
7101ec8f6c  mov w10,w24
7101ec8f70  strb wzr,[x9, w8, UXTW ]
7101ec8f74  ldrb w9,[sp, #0x18]
7101ec8f78  str w8,[sp, #0x14]
7101ec8f7c  cbz w9,0x7101ec8fa0
7101ec8f80  add x8,x11,#0x9
7101ec8f84  mov w11,w9
7101ec8f88  mov w10,w24
7101ec8f8c  mul w10,w10,w25
7101ec8f90  and w11,w11,#0xff
7101ec8f94  eor w10,w10,w11
7101ec8f98  ldrb w11,[x8], #0x1
7101ec8f9c  cbnz w11,0x7101ec8f8c
7101ec8fa0  str w10,[sp, #0x10]
7101ec8fa4  ldp x8,x10,[sp, #0xa8]
7101ec8fa8  cmp x8,x10
7101ec8fac  b.cs 0x7101ec900c
7101ec8fb0  mov x11,x8
7101ec8fb4  add x12,sp,#0x10
7101ec8fb8  mov x10,xzr
7101ec8fbc  add x12,x12,#0x9
7101ec8fc0  str wzr,[x11], #0x9
7101ec8fc4  tst w9,#0xff
7101ec8fc8  b.ne 0x7101ec8fe8
7101ec8fcc  b 0x7101ec9020
7101ec8fd0  add x13,x12,x10
7101ec8fd4  strb w9,[x11, x10, LSL ]
7101ec8fd8  ldrb w9,[x13, #0x1]
7101ec8fdc  add x10,x10,#0x2
7101ec8fe0  tst w9,#0xff
7101ec8fe4  b.eq 0x7101ec9020
7101ec8fe8  add w13,w10,#0x1
7101ec8fec  add x14,x11,x10
7101ec8ff0  cmp w13,#0x3f
7101ec8ff4  sturb w9,[x14, #-0x1]
7101ec8ff8  b.cs 0x7101ec901c
7101ec8ffc  ldrb w9,[x12, x10, LSL ]
7101ec9000  cbnz w9,0x7101ec8fd0
7101ec9004  add x10,x10,#0x1
7101ec9008  b 0x7101ec9020
7101ec900c  add x1,sp,#0x10
7101ec9010  mov x0,x20
7101ec9014  bl 0x71019c1c50
7101ec9018  b 0x7101ec9064
7101ec901c  add w10,w10,#0x1
7101ec9020  add x9,x8,#0x8
7101ec9024  strb wzr,[x9, w10, UXTW ]
7101ec9028  ldrb w9,[x8, #0x8]
7101ec902c  mov w11,w24
7101ec9030  str w10,[x8, #0x4]
7101ec9034  cbz w9,0x7101ec9054
7101ec9038  add x10,x8,#0x9
7101ec903c  mov w11,w24
7101ec9040  mul w11,w11,w25
7101ec9044  and w9,w9,#0xff
7101ec9048  eor w11,w11,w9
7101ec904c  ldrb w9,[x10], #0x1
7101ec9050  cbnz w9,0x7101ec9040
7101ec9054  str w11,[x8]
7101ec9058  ldr x8,[sp, #0xa8]
7101ec905c  add x8,x8,#0x48
7101ec9060  str x8,[sp, #0xa8]
7101ec9064  mov x8,xzr
7101ec9068  add x9,sp,#0x10
7101ec906c  adrp x10,0x71042d6000
7101ec9070  add x10,x10,#0xa2e
7101ec9074  str xzr,[sp, #0x10]
7101ec9078  b 0x7101ec9084
7101ec907c  add x8,x8,#0x2
7101ec9080  strb w12,[x11, #0x9]
7101ec9084  add x12,x10,x8
7101ec9088  ldrb w13,[x12]
7101ec908c  cbz w13,0x7101ec90a4
7101ec9090  ldrb w12,[x12, #0x1]
7101ec9094  add x11,x9,x8
7101ec9098  strb w13,[x11, #0x8]
7101ec909c  cbnz w12,0x7101ec907c
7101ec90a0  add x8,x8,#0x1
7101ec90a4  add x11,sp,#0x10
7101ec90a8  add x9,x11,#0x8
7101ec90ac  mov w10,w24
7101ec90b0  strb wzr,[x9, w8, UXTW ]
7101ec90b4  ldrb w9,[sp, #0x18]
7101ec90b8  str w8,[sp, #0x14]
7101ec90bc  cbz w9,0x7101ec90e0
7101ec90c0  add x8,x11,#0x9
7101ec90c4  mov w11,w9
7101ec90c8  mov w10,w24
7101ec90cc  mul w10,w10,w25
7101ec90d0  and w11,w11,#0xff
7101ec90d4  eor w10,w10,w11
7101ec90d8  ldrb w11,[x8], #0x1
7101ec90dc  cbnz w11,0x7101ec90cc
7101ec90e0  str w10,[sp, #0x10]
7101ec90e4  ldp x8,x10,[sp, #0xa8]
7101ec90e8  cmp x8,x10
7101ec90ec  b.cs 0x7101ec914c
7101ec90f0  mov x11,x8
7101ec90f4  add x12,sp,#0x10
7101ec90f8  mov x10,xzr
7101ec90fc  add x12,x12,#0x9
7101ec9100  str wzr,[x11], #0x9
7101ec9104  tst w9,#0xff
7101ec9108  b.ne 0x7101ec9128
7101ec910c  b 0x7101ec9160
7101ec9110  add x13,x12,x10
7101ec9114  strb w9,[x11, x10, LSL ]
7101ec9118  ldrb w9,[x13, #0x1]
7101ec911c  add x10,x10,#0x2
7101ec9120  tst w9,#0xff
7101ec9124  b.eq 0x7101ec9160
7101ec9128  add w13,w10,#0x1
7101ec912c  add x14,x11,x10
7101ec9130  cmp w13,#0x3f
7101ec9134  sturb w9,[x14, #-0x1]
7101ec9138  b.cs 0x7101ec915c
7101ec913c  ldrb w9,[x12, x10, LSL ]
7101ec9140  cbnz w9,0x7101ec9110
7101ec9144  add x10,x10,#0x1
7101ec9148  b 0x7101ec9160
7101ec914c  add x1,sp,#0x10
7101ec9150  mov x0,x20
7101ec9154  bl 0x71019c1c50
7101ec9158  b 0x7101ec91a4
7101ec915c  add w10,w10,#0x1
7101ec9160  add x9,x8,#0x8
7101ec9164  strb wzr,[x9, w10, UXTW ]
7101ec9168  ldrb w9,[x8, #0x8]
7101ec916c  mov w11,w24
7101ec9170  str w10,[x8, #0x4]
7101ec9174  cbz w9,0x7101ec9194
7101ec9178  add x10,x8,#0x9
7101ec917c  mov w11,w24
7101ec9180  mul w11,w11,w25
7101ec9184  and w9,w9,#0xff
7101ec9188  eor w11,w11,w9
7101ec918c  ldrb w9,[x10], #0x1
7101ec9190  cbnz w9,0x7101ec9180
7101ec9194  str w11,[x8]
7101ec9198  ldr x8,[sp, #0xa8]
7101ec919c  add x8,x8,#0x48
7101ec91a0  str x8,[sp, #0xa8]
7101ec91a4  mov x8,xzr
7101ec91a8  add x9,sp,#0x10
7101ec91ac  adrp x10,0x7104270000
7101ec91b0  add x10,x10,#0x6c1
7101ec91b4  str xzr,[sp, #0x10]
7101ec91b8  b 0x7101ec91c4
7101ec91bc  add x8,x8,#0x2
7101ec91c0  strb w12,[x11, #0x9]
7101ec91c4  add x12,x10,x8
7101ec91c8  ldrb w13,[x12]
7101ec91cc  cbz w13,0x7101ec91e4
7101ec91d0  ldrb w12,[x12, #0x1]
7101ec91d4  add x11,x9,x8
7101ec91d8  strb w13,[x11, #0x8]
7101ec91dc  cbnz w12,0x7101ec91bc
7101ec91e0  add x8,x8,#0x1
7101ec91e4  add x11,sp,#0x10
7101ec91e8  add x9,x11,#0x8
7101ec91ec  mov w10,w24
7101ec91f0  strb wzr,[x9, w8, UXTW ]
7101ec91f4  ldrb w9,[sp, #0x18]
7101ec91f8  str w8,[sp, #0x14]
7101ec91fc  cbz w9,0x7101ec9220
7101ec9200  add x8,x11,#0x9
7101ec9204  mov w11,w9
7101ec9208  mov w10,w24
7101ec920c  mul w10,w10,w25
7101ec9210  and w11,w11,#0xff
7101ec9214  eor w10,w10,w11
7101ec9218  ldrb w11,[x8], #0x1
7101ec921c  cbnz w11,0x7101ec920c
7101ec9220  str w10,[sp, #0x10]
7101ec9224  ldp x8,x10,[sp, #0xa8]
7101ec9228  cmp x8,x10
7101ec922c  b.cs 0x7101ec928c
7101ec9230  mov x11,x8
7101ec9234  add x12,sp,#0x10
7101ec9238  mov x10,xzr
7101ec923c  add x12,x12,#0x9
7101ec9240  str wzr,[x11], #0x9
7101ec9244  tst w9,#0xff
7101ec9248  b.ne 0x7101ec9268
7101ec924c  b 0x7101ec92a0
7101ec9250  add x13,x12,x10
7101ec9254  strb w9,[x11, x10, LSL ]
7101ec9258  ldrb w9,[x13, #0x1]
7101ec925c  add x10,x10,#0x2
7101ec9260  tst w9,#0xff
7101ec9264  b.eq 0x7101ec92a0
7101ec9268  add w13,w10,#0x1
7101ec926c  add x14,x11,x10
7101ec9270  cmp w13,#0x3f
7101ec9274  sturb w9,[x14, #-0x1]
7101ec9278  b.cs 0x7101ec929c
7101ec927c  ldrb w9,[x12, x10, LSL ]
7101ec9280  cbnz w9,0x7101ec9250
7101ec9284  add x10,x10,#0x1
7101ec9288  b 0x7101ec92a0
7101ec928c  add x1,sp,#0x10
7101ec9290  mov x0,x20
7101ec9294  bl 0x71019c1c50
7101ec9298  b 0x7101ec92e4
7101ec929c  add w10,w10,#0x1
7101ec92a0  add x9,x8,#0x8
7101ec92a4  strb wzr,[x9, w10, UXTW ]
7101ec92a8  ldrb w9,[x8, #0x8]
7101ec92ac  mov w11,w24
7101ec92b0  str w10,[x8, #0x4]
7101ec92b4  cbz w9,0x7101ec92d4
7101ec92b8  add x10,x8,#0x9
7101ec92bc  mov w11,w24
7101ec92c0  mul w11,w11,w25
7101ec92c4  and w9,w9,#0xff
7101ec92c8  eor w11,w11,w9
7101ec92cc  ldrb w9,[x10], #0x1
7101ec92d0  cbnz w9,0x7101ec92c0
7101ec92d4  str w11,[x8]
7101ec92d8  ldr x8,[sp, #0xa8]
7101ec92dc  add x8,x8,#0x48
7101ec92e0  str x8,[sp, #0xa8]
7101ec92e4  mov x8,xzr
7101ec92e8  add x9,sp,#0x10
7101ec92ec  adrp x10,0x71042d6000
7101ec92f0  add x10,x10,#0xa43
7101ec92f4  str xzr,[sp, #0x10]
7101ec92f8  b 0x7101ec9304
7101ec92fc  add x8,x8,#0x2
7101ec9300  strb w12,[x11, #0x9]
7101ec9304  add x12,x10,x8
7101ec9308  ldrb w13,[x12]
7101ec930c  cbz w13,0x7101ec9324
7101ec9310  ldrb w12,[x12, #0x1]
7101ec9314  add x11,x9,x8
7101ec9318  strb w13,[x11, #0x8]
7101ec931c  cbnz w12,0x7101ec92fc
7101ec9320  add x8,x8,#0x1
7101ec9324  add x11,sp,#0x10
7101ec9328  add x9,x11,#0x8
7101ec932c  mov w10,w24
7101ec9330  strb wzr,[x9, w8, UXTW ]
7101ec9334  ldrb w9,[sp, #0x18]
7101ec9338  str w8,[sp, #0x14]
7101ec933c  cbz w9,0x7101ec9360
7101ec9340  add x8,x11,#0x9
7101ec9344  mov w11,w9
7101ec9348  mov w10,w24
7101ec934c  mul w10,w10,w25
7101ec9350  and w11,w11,#0xff
7101ec9354  eor w10,w10,w11
7101ec9358  ldrb w11,[x8], #0x1
7101ec935c  cbnz w11,0x7101ec934c
7101ec9360  str w10,[sp, #0x10]
7101ec9364  ldp x8,x10,[sp, #0xa8]
7101ec9368  cmp x8,x10
7101ec936c  b.cs 0x7101ec93cc
7101ec9370  mov x11,x8
7101ec9374  add x12,sp,#0x10
7101ec9378  mov x10,xzr
7101ec937c  add x12,x12,#0x9
7101ec9380  str wzr,[x11], #0x9
7101ec9384  tst w9,#0xff
7101ec9388  b.ne 0x7101ec93a8
7101ec938c  b 0x7101ec93e0
7101ec9390  add x13,x12,x10
7101ec9394  strb w9,[x11, x10, LSL ]
7101ec9398  ldrb w9,[x13, #0x1]
7101ec939c  add x10,x10,#0x2
7101ec93a0  tst w9,#0xff
7101ec93a4  b.eq 0x7101ec93e0
7101ec93a8  add w13,w10,#0x1
7101ec93ac  add x14,x11,x10
7101ec93b0  cmp w13,#0x3f
7101ec93b4  sturb w9,[x14, #-0x1]
7101ec93b8  b.cs 0x7101ec93dc
7101ec93bc  ldrb w9,[x12, x10, LSL ]
7101ec93c0  cbnz w9,0x7101ec9390
7101ec93c4  add x10,x10,#0x1
7101ec93c8  b 0x7101ec93e0
7101ec93cc  add x1,sp,#0x10
7101ec93d0  mov x0,x20
7101ec93d4  bl 0x71019c1c50
7101ec93d8  b 0x7101ec9424
7101ec93dc  add w10,w10,#0x1
7101ec93e0  add x9,x8,#0x8
7101ec93e4  strb wzr,[x9, w10, UXTW ]
7101ec93e8  ldrb w9,[x8, #0x8]
7101ec93ec  mov w11,w24
7101ec93f0  str w10,[x8, #0x4]
7101ec93f4  cbz w9,0x7101ec9414
7101ec93f8  add x10,x8,#0x9
7101ec93fc  mov w11,w24
7101ec9400  mul w11,w11,w25
7101ec9404  and w9,w9,#0xff
7101ec9408  eor w11,w11,w9
7101ec940c  ldrb w9,[x10], #0x1
7101ec9410  cbnz w9,0x7101ec9400
7101ec9414  str w11,[x8]
7101ec9418  ldr x8,[sp, #0xa8]
7101ec941c  add x8,x8,#0x48
7101ec9420  str x8,[sp, #0xa8]
7101ec9424  mov w1,#0x1
7101ec9428  add x2,sp,#0x58
7101ec942c  mov x0,x28
7101ec9430  bl 0x7101ec9fa0
7101ec9434  ldr x8,[sp, #0xa0]
7101ec9438  mov x0,x20
7101ec943c  str x8,[sp, #0xa8]
7101ec9440  bl 0x7101ec36d0
7101ec9444  ldr x8,[sp, #0xb8]
7101ec9448  mov x0,x21
7101ec944c  str x8,[sp, #0xc0]
7101ec9450  bl 0x7101ec36d0
7101ec9454  ldr x8,[sp, #0xb0]
7101ec9458  ldr x22,[sp, #0xa0]
7101ec945c  sub x8,x8,x22
7101ec9460  asr x8,x8,#0x3
7101ec9464  mul x8,x8,x23
7101ec9468  cmp x8,#0x3
7101ec946c  b.cs 0x7101ec95a0
7101ec9470  ldr x19,[sp, #0xa8]
7101ec9474  sub x8,x19,x22
7101ec9478  asr x8,x8,#0x3
7101ec947c  mov w1,#0xd8
7101ec9480  mov w0,#0x10
7101ec9484  mul x26,x8,x23
7101ec9488  bl 0x710392e290
7101ec948c  cbnz x0,0x7101ec94d4
7101ec9490  adrp x8,0x7105332000
7101ec9494  ldr x0,[x8, #0xf00]
7101ec9498  cbz x0,0x7101ec94d0
7101ec949c  mov w8,#0xd8
7101ec94a0  stur wzr,[x29, #-0x5c]
7101ec94a4  sub x1,x29,#0x5c
7101ec94a8  str x8,[sp, #0x10]
7101ec94ac  ldr x8,[x0]
7101ec94b0  ldr x8,[x8, #0x30]
7101ec94b4  add x2,sp,#0x10
7101ec94b8  blr x8
7101ec94bc  tbz w0,#0x0,0x7101ec94d0
7101ec94c0  mov w1,#0xd8
7101ec94c4  mov w0,#0x10
7101ec94c8  bl 0x710392e290
7101ec94cc  cbnz x0,0x7101ec94d4
7101ec94d0  mov x0,xzr
7101ec94d4  mov w8,#0x48
7101ec94d8  madd x8,x26,x8,x0
7101ec94dc  add x9,x0,#0xd8
7101ec94e0  mov x10,x8
7101ec94e4  cmp x19,x22
7101ec94e8  b.eq 0x7101ec958c
7101ec94ec  mov x11,xzr
7101ec94f0  mov x12,x19
7101ec94f4  sub x19,x19,#0x48
7101ec94f8  stur wzr,[x10, #-0x48]
7101ec94fc  add x14,x12,x11
7101ec9500  ldurb w15,[x14, #-0x40]
7101ec9504  cbz w15,0x7101ec9544
7101ec9508  add x13,x10,x11
7101ec950c  sturb w15,[x13, #-0x40]
7101ec9510  ldurb w15,[x14, #-0x3f]
7101ec9514  cbz w15,0x7101ec9538
7101ec9518  sturb w15,[x13, #-0x3f]
7101ec951c  ldurb w14,[x14, #-0x3e]
7101ec9520  cbz w14,0x7101ec9540
7101ec9524  add x11,x11,#0x3
7101ec9528  cmp w11,#0x3f
7101ec952c  sturb w14,[x13, #-0x3e]
7101ec9530  b.cc 0x7101ec94fc
7101ec9534  b 0x7101ec9544
7101ec9538  add x11,x11,#0x1
7101ec953c  b 0x7101ec9544
7101ec9540  add x11,x11,#0x2
7101ec9544  sub x12,x10,#0x40
7101ec9548  strb wzr,[x12, w11, UXTW ]
7101ec954c  ldurb w12,[x10, #-0x40]
7101ec9550  stur w11,[x10, #-0x44]
7101ec9554  mov w11,w24
7101ec9558  cbz w12,0x7101ec957c
7101ec955c  orr x13,xzr,#-0x3f
7101ec9560  mov w11,w24
7101ec9564  mul w11,w11,w25
7101ec9568  and w12,w12,#0xff
7101ec956c  eor w11,w11,w12
7101ec9570  ldrb w12,[x10, x13, LSL ]
7101ec9574  add x13,x13,#0x1
7101ec9578  cbnz w12,0x7101ec9564
7101ec957c  cmp x19,x22
7101ec9580  str w11,[x10, #-0x48]!
7101ec9584  b.ne 0x7101ec94ec
7101ec9588  ldr x22,[sp, #0xa0]
7101ec958c  stp x10,x8,[sp, #0xa0]
7101ec9590  str x9,[sp, #0xb0]
7101ec9594  cbz x22,0x7101ec95a0
7101ec9598  mov x0,x22
7101ec959c  bl 0x710392eb40
7101ec95a0  mov x8,xzr
7101ec95a4  add x9,sp,#0x10
7101ec95a8  adrp x10,0x7104270000
7101ec95ac  add x10,x10,#0x6dc
7101ec95b0  str xzr,[sp, #0x10]
7101ec95b4  b 0x7101ec95c0
7101ec95b8  add x8,x8,#0x2
7101ec95bc  strb w12,[x11, #0x9]
7101ec95c0  add x12,x10,x8
7101ec95c4  ldrb w13,[x12]
7101ec95c8  cbz w13,0x7101ec95e0
7101ec95cc  ldrb w12,[x12, #0x1]
7101ec95d0  add x11,x9,x8
7101ec95d4  strb w13,[x11, #0x8]
7101ec95d8  cbnz w12,0x7101ec95b8
7101ec95dc  add x8,x8,#0x1
7101ec95e0  add x11,sp,#0x10
7101ec95e4  add x9,x11,#0x8
7101ec95e8  mov w10,w24
7101ec95ec  strb wzr,[x9, w8, UXTW ]
7101ec95f0  ldrb w9,[sp, #0x18]
7101ec95f4  str w8,[sp, #0x14]
7101ec95f8  cbz w9,0x7101ec961c
7101ec95fc  add x8,x11,#0x9
7101ec9600  mov w11,w9
7101ec9604  mov w10,w24
7101ec9608  mul w10,w10,w25
7101ec960c  and w11,w11,#0xff
7101ec9610  eor w10,w10,w11
7101ec9614  ldrb w11,[x8], #0x1
7101ec9618  cbnz w11,0x7101ec9608
7101ec961c  str w10,[sp, #0x10]
7101ec9620  ldp x8,x10,[sp, #0xa8]
7101ec9624  cmp x8,x10
7101ec9628  b.cs 0x7101ec9688
7101ec962c  mov x11,x8
7101ec9630  add x12,sp,#0x10
7101ec9634  mov x10,xzr
7101ec9638  add x12,x12,#0x9
7101ec963c  str wzr,[x11], #0x9
7101ec9640  tst w9,#0xff
7101ec9644  b.ne 0x7101ec9664
7101ec9648  b 0x7101ec969c
7101ec964c  add x13,x12,x10
7101ec9650  strb w9,[x11, x10, LSL ]
7101ec9654  ldrb w9,[x13, #0x1]
7101ec9658  add x10,x10,#0x2
7101ec965c  tst w9,#0xff
7101ec9660  b.eq 0x7101ec969c
7101ec9664  add w13,w10,#0x1
7101ec9668  add x14,x11,x10
7101ec966c  cmp w13,#0x3f
7101ec9670  sturb w9,[x14, #-0x1]
7101ec9674  b.cs 0x7101ec9698
7101ec9678  ldrb w9,[x12, x10, LSL ]
7101ec967c  cbnz w9,0x7101ec964c
7101ec9680  add x10,x10,#0x1
7101ec9684  b 0x7101ec969c
7101ec9688  add x1,sp,#0x10
7101ec968c  mov x0,x20
7101ec9690  bl 0x71019c1c50
7101ec9694  b 0x7101ec96e0
7101ec9698  add w10,w10,#0x1
7101ec969c  add x9,x8,#0x8
7101ec96a0  strb wzr,[x9, w10, UXTW ]
7101ec96a4  ldrb w9,[x8, #0x8]
7101ec96a8  mov w11,w24
7101ec96ac  str w10,[x8, #0x4]
7101ec96b0  cbz w9,0x7101ec96d0
7101ec96b4  add x10,x8,#0x9
7101ec96b8  mov w11,w24
7101ec96bc  mul w11,w11,w25
7101ec96c0  and w9,w9,#0xff
7101ec96c4  eor w11,w11,w9
7101ec96c8  ldrb w9,[x10], #0x1
7101ec96cc  cbnz w9,0x7101ec96bc
7101ec96d0  str w11,[x8]
7101ec96d4  ldr x8,[sp, #0xa8]
7101ec96d8  add x8,x8,#0x48
7101ec96dc  str x8,[sp, #0xa8]
7101ec96e0  mov x8,xzr
7101ec96e4  add x9,sp,#0x10
7101ec96e8  adrp x10,0x7104413000
7101ec96ec  add x10,x10,#0x72
7101ec96f0  str xzr,[sp, #0x10]
7101ec96f4  b 0x7101ec9700
7101ec96f8  add x8,x8,#0x2
7101ec96fc  strb w12,[x11, #0x9]
7101ec9700  add x12,x10,x8
7101ec9704  ldrb w13,[x12]
7101ec9708  cbz w13,0x7101ec9720
7101ec970c  ldrb w12,[x12, #0x1]
7101ec9710  add x11,x9,x8
7101ec9714  strb w13,[x11, #0x8]
7101ec9718  cbnz w12,0x7101ec96f8
7101ec971c  add x8,x8,#0x1
7101ec9720  add x11,sp,#0x10
7101ec9724  add x9,x11,#0x8
7101ec9728  mov w10,w24
7101ec972c  strb wzr,[x9, w8, UXTW ]
7101ec9730  ldrb w9,[sp, #0x18]
7101ec9734  str w8,[sp, #0x14]
7101ec9738  cbz w9,0x7101ec975c
7101ec973c  add x8,x11,#0x9
7101ec9740  mov w11,w9
7101ec9744  mov w10,w24
7101ec9748  mul w10,w10,w25
7101ec974c  and w11,w11,#0xff
7101ec9750  eor w10,w10,w11
7101ec9754  ldrb w11,[x8], #0x1
7101ec9758  cbnz w11,0x7101ec9748
7101ec975c  str w10,[sp, #0x10]
7101ec9760  ldp x8,x10,[sp, #0xa8]
7101ec9764  cmp x8,x10
7101ec9768  b.cs 0x7101ec97c8
7101ec976c  mov x11,x8
7101ec9770  add x12,sp,#0x10
7101ec9774  mov x10,xzr
7101ec9778  add x12,x12,#0x9
7101ec977c  str wzr,[x11], #0x9
7101ec9780  tst w9,#0xff
7101ec9784  b.ne 0x7101ec97a4
7101ec9788  b 0x7101ec97dc
7101ec978c  add x13,x12,x10
7101ec9790  strb w9,[x11, x10, LSL ]
7101ec9794  ldrb w9,[x13, #0x1]
7101ec9798  add x10,x10,#0x2
7101ec979c  tst w9,#0xff
7101ec97a0  b.eq 0x7101ec97dc
7101ec97a4  add w13,w10,#0x1
7101ec97a8  add x14,x11,x10
7101ec97ac  cmp w13,#0x3f
7101ec97b0  sturb w9,[x14, #-0x1]
7101ec97b4  b.cs 0x7101ec97d8
7101ec97b8  ldrb w9,[x12, x10, LSL ]
7101ec97bc  cbnz w9,0x7101ec978c
7101ec97c0  add x10,x10,#0x1
7101ec97c4  b 0x7101ec97dc
7101ec97c8  add x1,sp,#0x10
7101ec97cc  mov x0,x20
7101ec97d0  bl 0x71019c1c50
7101ec97d4  b 0x7101ec9820
7101ec97d8  add w10,w10,#0x1
7101ec97dc  add x9,x8,#0x8
7101ec97e0  strb wzr,[x9, w10, UXTW ]
7101ec97e4  ldrb w9,[x8, #0x8]
7101ec97e8  mov w11,w24
7101ec97ec  str w10,[x8, #0x4]
7101ec97f0  cbz w9,0x7101ec9810
7101ec97f4  add x10,x8,#0x9
7101ec97f8  mov w11,w24
7101ec97fc  mul w11,w11,w25
7101ec9800  and w9,w9,#0xff
7101ec9804  eor w11,w11,w9
7101ec9808  ldrb w9,[x10], #0x1
7101ec980c  cbnz w9,0x7101ec97fc
7101ec9810  str w11,[x8]
7101ec9814  ldr x8,[sp, #0xa8]
7101ec9818  add x8,x8,#0x48
7101ec981c  str x8,[sp, #0xa8]
7101ec9820  mov x8,xzr
7101ec9824  add x9,sp,#0x10
7101ec9828  adrp x10,0x710434a000
7101ec982c  add x10,x10,#0xafa
7101ec9830  str xzr,[sp, #0x10]
7101ec9834  b 0x7101ec9840
7101ec9838  add x8,x8,#0x2
7101ec983c  strb w12,[x11, #0x9]
7101ec9840  add x12,x10,x8
7101ec9844  ldrb w13,[x12]
7101ec9848  cbz w13,0x7101ec9860
7101ec984c  ldrb w12,[x12, #0x1]
7101ec9850  add x11,x9,x8
7101ec9854  strb w13,[x11, #0x8]
7101ec9858  cbnz w12,0x7101ec9838
7101ec985c  add x8,x8,#0x1
7101ec9860  add x11,sp,#0x10
7101ec9864  add x9,x11,#0x8
7101ec9868  mov w10,w24
7101ec986c  strb wzr,[x9, w8, UXTW ]
7101ec9870  ldrb w9,[sp, #0x18]
7101ec9874  str w8,[sp, #0x14]
7101ec9878  cbz w9,0x7101ec989c
7101ec987c  add x8,x11,#0x9
7101ec9880  mov w11,w9
7101ec9884  mov w10,w24
7101ec9888  mul w10,w10,w25
7101ec988c  and w11,w11,#0xff
7101ec9890  eor w10,w10,w11
7101ec9894  ldrb w11,[x8], #0x1
7101ec9898  cbnz w11,0x7101ec9888
7101ec989c  str w10,[sp, #0x10]
7101ec98a0  ldp x8,x10,[sp, #0xa8]
7101ec98a4  cmp x8,x10
7101ec98a8  b.cs 0x7101ec9908
7101ec98ac  mov x11,x8
7101ec98b0  add x12,sp,#0x10
7101ec98b4  mov x10,xzr
7101ec98b8  add x12,x12,#0x9
7101ec98bc  str wzr,[x11], #0x9
7101ec98c0  tst w9,#0xff
7101ec98c4  b.ne 0x7101ec98e4
7101ec98c8  b 0x7101ec991c
7101ec98cc  add x13,x12,x10
7101ec98d0  strb w9,[x11, x10, LSL ]
7101ec98d4  ldrb w9,[x13, #0x1]
7101ec98d8  add x10,x10,#0x2
7101ec98dc  tst w9,#0xff
7101ec98e0  b.eq 0x7101ec991c
7101ec98e4  add w13,w10,#0x1
7101ec98e8  add x14,x11,x10
7101ec98ec  cmp w13,#0x3f
7101ec98f0  sturb w9,[x14, #-0x1]
7101ec98f4  b.cs 0x7101ec9918
7101ec98f8  ldrb w9,[x12, x10, LSL ]
7101ec98fc  cbnz w9,0x7101ec98cc
7101ec9900  add x10,x10,#0x1
7101ec9904  b 0x7101ec991c
7101ec9908  add x1,sp,#0x10
7101ec990c  mov x0,x20
7101ec9910  bl 0x71019c1c50
7101ec9914  b 0x7101ec9960
7101ec9918  add w10,w10,#0x1
7101ec991c  add x9,x8,#0x8
7101ec9920  strb wzr,[x9, w10, UXTW ]
7101ec9924  ldrb w9,[x8, #0x8]
7101ec9928  mov w11,w24
7101ec992c  str w10,[x8, #0x4]
7101ec9930  cbz w9,0x7101ec9950
7101ec9934  add x10,x8,#0x9
7101ec9938  mov w11,w24
7101ec993c  mul w11,w11,w25
7101ec9940  and w9,w9,#0xff
7101ec9944  eor w11,w11,w9
7101ec9948  ldrb w9,[x10], #0x1
7101ec994c  cbnz w9,0x7101ec993c
7101ec9950  str w11,[x8]
7101ec9954  ldr x8,[sp, #0xa8]
7101ec9958  add x8,x8,#0x48
7101ec995c  str x8,[sp, #0xa8]
7101ec9960  mov w1,#0x5
7101ec9964  add x2,sp,#0x58
7101ec9968  mov x0,x28
7101ec996c  bl 0x7101ec9fa0
7101ec9970  ldr x8,[sp, #0xa0]
7101ec9974  mov x0,x20
7101ec9978  str x8,[sp, #0xa8]
7101ec997c  bl 0x7101ec36d0
7101ec9980  ldr x8,[sp, #0xb8]
7101ec9984  mov x0,x21
7101ec9988  str x8,[sp, #0xc0]
7101ec998c  bl 0x7101ec36d0
7101ec9990  ldr x8,[sp, #0xb0]
7101ec9994  ldr x22,[sp, #0xa0]
7101ec9998  sub x8,x8,x22
7101ec999c  asr x8,x8,#0x3
7101ec99a0  mul x8,x8,x23
7101ec99a4  cmp x8,#0x8
7101ec99a8  b.cs 0x7101ec9adc
7101ec99ac  ldr x19,[sp, #0xa8]
7101ec99b0  sub x8,x19,x22
7101ec99b4  asr x8,x8,#0x3
7101ec99b8  mov w1,#0x240
7101ec99bc  mov w0,#0x10
7101ec99c0  mul x26,x8,x23
7101ec99c4  bl 0x710392e290
7101ec99c8  cbnz x0,0x7101ec9a10
7101ec99cc  adrp x8,0x7105332000
7101ec99d0  ldr x0,[x8, #0xf00]
7101ec99d4  cbz x0,0x7101ec9a0c
7101ec99d8  mov w8,#0x240
7101ec99dc  stur wzr,[x29, #-0x5c]
7101ec99e0  sub x1,x29,#0x5c
7101ec99e4  str x8,[sp, #0x10]
7101ec99e8  ldr x8,[x0]
7101ec99ec  ldr x8,[x8, #0x30]
7101ec99f0  add x2,sp,#0x10
7101ec99f4  blr x8
7101ec99f8  tbz w0,#0x0,0x7101ec9a0c
7101ec99fc  mov w1,#0x240
7101ec9a00  mov w0,#0x10
7101ec9a04  bl 0x710392e290
7101ec9a08  cbnz x0,0x7101ec9a10
7101ec9a0c  mov x0,xzr
7101ec9a10  mov w8,#0x48
7101ec9a14  madd x8,x26,x8,x0
7101ec9a18  add x9,x0,#0x240
7101ec9a1c  mov x10,x8
7101ec9a20  cmp x19,x22
7101ec9a24  b.eq 0x7101ec9ac8
7101ec9a28  mov x11,xzr
7101ec9a2c  mov x12,x19
7101ec9a30  sub x19,x19,#0x48
7101ec9a34  stur wzr,[x10, #-0x48]
7101ec9a38  add x14,x12,x11
7101ec9a3c  ldurb w15,[x14, #-0x40]
7101ec9a40  cbz w15,0x7101ec9a80
7101ec9a44  add x13,x10,x11
7101ec9a48  sturb w15,[x13, #-0x40]
7101ec9a4c  ldurb w15,[x14, #-0x3f]
7101ec9a50  cbz w15,0x7101ec9a74
7101ec9a54  sturb w15,[x13, #-0x3f]
7101ec9a58  ldurb w14,[x14, #-0x3e]
7101ec9a5c  cbz w14,0x7101ec9a7c
7101ec9a60  add x11,x11,#0x3
7101ec9a64  cmp w11,#0x3f
7101ec9a68  sturb w14,[x13, #-0x3e]
7101ec9a6c  b.cc 0x7101ec9a38
7101ec9a70  b 0x7101ec9a80
7101ec9a74  add x11,x11,#0x1
7101ec9a78  b 0x7101ec9a80
7101ec9a7c  add x11,x11,#0x2
7101ec9a80  sub x12,x10,#0x40
7101ec9a84  strb wzr,[x12, w11, UXTW ]
7101ec9a88  ldurb w12,[x10, #-0x40]
7101ec9a8c  stur w11,[x10, #-0x44]
7101ec9a90  mov w11,w24
7101ec9a94  cbz w12,0x7101ec9ab8
7101ec9a98  orr x13,xzr,#-0x3f
7101ec9a9c  mov w11,w24
7101ec9aa0  mul w11,w11,w25
7101ec9aa4  and w12,w12,#0xff
7101ec9aa8  eor w11,w11,w12
7101ec9aac  ldrb w12,[x10, x13, LSL ]
7101ec9ab0  add x13,x13,#0x1
7101ec9ab4  cbnz w12,0x7101ec9aa0
7101ec9ab8  cmp x19,x22
7101ec9abc  str w11,[x10, #-0x48]!
7101ec9ac0  b.ne 0x7101ec9a28
7101ec9ac4  ldr x22,[sp, #0xa0]
7101ec9ac8  stp x10,x8,[sp, #0xa0]
7101ec9acc  str x9,[sp, #0xb0]
7101ec9ad0  cbz x22,0x7101ec9adc
7101ec9ad4  mov x0,x22
7101ec9ad8  bl 0x710392eb40
7101ec9adc  ldr x8,[sp, #0xc8]
7101ec9ae0  ldr x22,[sp, #0xb8]
7101ec9ae4  sub x8,x8,x22
7101ec9ae8  asr x8,x8,#0x3
7101ec9aec  mul x8,x8,x23
7101ec9af0  cmp x8,#0x7
7101ec9af4  b.hi 0x7101ec9c28
7101ec9af8  ldr x19,[sp, #0xc0]
7101ec9afc  sub x8,x19,x22
7101ec9b00  asr x8,x8,#0x3
7101ec9b04  mov w1,#0x240
7101ec9b08  mov w0,#0x10
7101ec9b0c  mul x23,x8,x23
7101ec9b10  bl 0x710392e290
7101ec9b14  cbnz x0,0x7101ec9b5c
7101ec9b18  adrp x8,0x7105332000
7101ec9b1c  ldr x0,[x8, #0xf00]
7101ec9b20  cbz x0,0x7101ec9b58
7101ec9b24  mov w8,#0x240
7101ec9b28  stur wzr,[x29, #-0x5c]
7101ec9b2c  sub x1,x29,#0x5c
7101ec9b30  str x8,[sp, #0x10]
7101ec9b34  ldr x8,[x0]
7101ec9b38  ldr x8,[x8, #0x30]
7101ec9b3c  add x2,sp,#0x10
7101ec9b40  blr x8
7101ec9b44  tbz w0,#0x0,0x7101ec9b58
7101ec9b48  mov w1,#0x240
7101ec9b4c  mov w0,#0x10
7101ec9b50  bl 0x710392e290
7101ec9b54  cbnz x0,0x7101ec9b5c
7101ec9b58  mov x0,xzr
7101ec9b5c  mov w8,#0x48
7101ec9b60  madd x8,x23,x8,x0
7101ec9b64  add x9,x0,#0x240
7101ec9b68  mov x10,x8
7101ec9b6c  cmp x19,x22
7101ec9b70  b.eq 0x7101ec9c14
7101ec9b74  mov x11,xzr
7101ec9b78  mov x12,x19
7101ec9b7c  sub x19,x19,#0x48
7101ec9b80  stur wzr,[x10, #-0x48]
7101ec9b84  add x14,x12,x11
7101ec9b88  ldurb w15,[x14, #-0x40]
7101ec9b8c  cbz w15,0x7101ec9bcc
7101ec9b90  add x13,x10,x11
7101ec9b94  sturb w15,[x13, #-0x40]
7101ec9b98  ldurb w15,[x14, #-0x3f]
7101ec9b9c  cbz w15,0x7101ec9bc0
7101ec9ba0  sturb w15,[x13, #-0x3f]
7101ec9ba4  ldurb w14,[x14, #-0x3e]
7101ec9ba8  cbz w14,0x7101ec9bc8
7101ec9bac  add x11,x11,#0x3
7101ec9bb0  cmp w11,#0x3f
7101ec9bb4  sturb w14,[x13, #-0x3e]
7101ec9bb8  b.cc 0x7101ec9b84
7101ec9bbc  b 0x7101ec9bcc
7101ec9bc0  add x11,x11,#0x1
7101ec9bc4  b 0x7101ec9bcc
7101ec9bc8  add x11,x11,#0x2
7101ec9bcc  sub x12,x10,#0x40
7101ec9bd0  strb wzr,[x12, w11, UXTW ]
7101ec9bd4  ldurb w12,[x10, #-0x40]
7101ec9bd8  stur w11,[x10, #-0x44]
7101ec9bdc  mov w11,w24
7101ec9be0  cbz w12,0x7101ec9c04
7101ec9be4  orr x13,xzr,#-0x3f
7101ec9be8  mov w11,w24
7101ec9bec  mul w11,w11,w25
7101ec9bf0  and w12,w12,#0xff
7101ec9bf4  eor w11,w11,w12
7101ec9bf8  ldrb w12,[x10, x13, LSL ]
7101ec9bfc  add x13,x13,#0x1
7101ec9c00  cbnz w12,0x7101ec9bec
7101ec9c04  cmp x19,x22
7101ec9c08  str w11,[x10, #-0x48]!
7101ec9c0c  b.ne 0x7101ec9b74
7101ec9c10  ldr x22,[sp, #0xb8]
7101ec9c14  stp x10,x8,[sp, #0xb8]
7101ec9c18  str x9,[sp, #0xc8]
7101ec9c1c  cbz x22,0x7101ec9c28
7101ec9c20  mov x0,x22
7101ec9c24  bl 0x710392eb40
7101ec9c28  add x27,sp,#0x10
7101ec9c2c  mov x22,xzr
7101ec9c30  add x28,x27,#0x8
7101ec9c34  add x19,x27,#0x9
7101ec9c38  adrp x23,0x7104433000
7101ec9c3c  add x23,x23,#0x825
7101ec9c40  adrp x9,0x71050b2000
7101ec9c44  add x9,x9,#0xa68
7101ec9c48  add x9,x9,x22, LSL #0x3
7101ec9c4c  ldr x9,[x9, #0xb0]
7101ec9c50  mov x8,xzr
7101ec9c54  str xzr,[sp, #0x10]
7101ec9c58  add x11,x9,x8
7101ec9c5c  ldrb w12,[x11]
7101ec9c60  cbz w12,0x7101ec9ca0
7101ec9c64  add x10,x27,x8
7101ec9c68  strb w12,[x10, #0x8]
7101ec9c6c  ldrb w12,[x11, #0x1]
7101ec9c70  cbz w12,0x7101ec9c94
7101ec9c74  strb w12,[x10, #0x9]
7101ec9c78  ldrb w11,[x11, #0x2]
7101ec9c7c  cbz w11,0x7101ec9c9c
7101ec9c80  add x8,x8,#0x3
7101ec9c84  cmp w8,#0x3f
7101ec9c88  strb w11,[x10, #0xa]
7101ec9c8c  b.cc 0x7101ec9c58
7101ec9c90  b 0x7101ec9ca0
7101ec9c94  add x8,x8,#0x1
7101ec9c98  b 0x7101ec9ca0
7101ec9c9c  add x8,x8,#0x2
7101ec9ca0  add x9,x27,#0x8
7101ec9ca4  strb wzr,[x9, w8, UXTW ]
7101ec9ca8  ldrb w10,[sp, #0x18]
7101ec9cac  str w8,[sp, #0x14]
7101ec9cb0  mov w8,w24
7101ec9cb4  cbz w10,0x7101ec9cd8
7101ec9cb8  mov x9,x19
7101ec9cbc  mov w11,w10
7101ec9cc0  mov w8,w24
7101ec9cc4  mul w8,w8,w25
7101ec9cc8  and w11,w11,#0xff
7101ec9ccc  eor w8,w8,w11
7101ec9cd0  ldrb w11,[x9], #0x1
7101ec9cd4  cbnz w11,0x7101ec9cc4
7101ec9cd8  str w8,[sp, #0x10]
7101ec9cdc  ldp x8,x9,[sp, #0xa8]
7101ec9ce0  cmp x8,x9
7101ec9ce4  b.cs 0x7101ec9d48
7101ec9ce8  mov x11,x8
7101ec9cec  mov x9,xzr
7101ec9cf0  str wzr,[x11], #0x8
7101ec9cf4  tst w10,#0xff
7101ec9cf8  b.ne 0x7101ec9d10
7101ec9cfc  b 0x7101ec9d64
7101ec9d00  ldrb w10,[x10, #0x2]
7101ec9d04  add x9,x9,#0x3
7101ec9d08  tst w10,#0xff
7101ec9d0c  b.eq 0x7101ec9d64
7101ec9d10  strb w10,[x11, x9, LSL ]
7101ec9d14  ldrb w13,[x19, x9, LSL ]
7101ec9d18  cbz w13,0x7101ec9d58
7101ec9d1c  add x12,x11,x9
7101ec9d20  add x10,x19,x9
7101ec9d24  strb w13,[x12, #0x1]
7101ec9d28  ldrb w13,[x10, #0x1]
7101ec9d2c  cbz w13,0x7101ec9d60
7101ec9d30  add w14,w9,#0x3
7101ec9d34  cmp w14,#0x3e
7101ec9d38  strb w13,[x12, #0x2]
7101ec9d3c  b.ls 0x7101ec9d00
7101ec9d40  add w9,w9,#0x3
7101ec9d44  b 0x7101ec9d64
7101ec9d48  add x1,sp,#0x10
7101ec9d4c  mov x0,x20
7101ec9d50  bl 0x71019c1c50
7101ec9d54  b 0x7101ec9da8
7101ec9d58  add x9,x9,#0x1
7101ec9d5c  b 0x7101ec9d64
7101ec9d60  add x9,x9,#0x2
7101ec9d64  add x10,x8,#0x8
7101ec9d68  strb wzr,[x10, w9, UXTW ]
7101ec9d6c  str w9,[x8, #0x4]
7101ec9d70  ldrb w9,[x8, #0x8]
7101ec9d74  mov w11,w24
7101ec9d78  cbz w9,0x7101ec9d98
7101ec9d7c  add x10,x8,#0x9
7101ec9d80  mov w11,w24
7101ec9d84  mul w11,w11,w25
7101ec9d88  and w9,w9,#0xff
7101ec9d8c  eor w11,w11,w9
7101ec9d90  ldrb w9,[x10], #0x1
7101ec9d94  cbnz w9,0x7101ec9d84
7101ec9d98  str w11,[x8]
7101ec9d9c  ldr x8,[sp, #0xa8]
7101ec9da0  add x8,x8,#0x48
7101ec9da4  str x8,[sp, #0xa8]
7101ec9da8  add x8,sp,#0x10
7101ec9dac  mov x0,x23
7101ec9db0  mov w1,w22
7101ec9db4  bl 0x71003a4ca0
7101ec9db8  ldp x8,x9,[sp, #0xc0]
7101ec9dbc  cmp x8,x9
7101ec9dc0  b.cs 0x7101ec9e0c
7101ec9dc4  mov x10,x8
7101ec9dc8  mov x9,xzr
7101ec9dcc  str wzr,[x10], #0x8
7101ec9dd0  add x11,x28,x9
7101ec9dd4  ldrb w12,[x11]
7101ec9dd8  cbz w12,0x7101ec9e28
7101ec9ddc  strb w12,[x10, x9, LSL ]
7101ec9de0  ldrb w13,[x11, #0x1]
7101ec9de4  cbz w13,0x7101ec9e1c
7101ec9de8  add x12,x10,x9
7101ec9dec  strb w13,[x12, #0x1]
7101ec9df0  ldrb w11,[x11, #0x2]
7101ec9df4  cbz w11,0x7101ec9e24
7101ec9df8  add x9,x9,#0x3
7101ec9dfc  cmp w9,#0x3f
7101ec9e00  strb w11,[x12, #0x2]
7101ec9e04  b.cc 0x7101ec9dd0
7101ec9e08  b 0x7101ec9e28
7101ec9e0c  add x1,sp,#0x10
7101ec9e10  mov x0,x21
7101ec9e14  bl 0x71019c1c50
7101ec9e18  b 0x7101ec9e6c
7101ec9e1c  add x9,x9,#0x1
7101ec9e20  b 0x7101ec9e28
7101ec9e24  add x9,x9,#0x2
7101ec9e28  add x10,x8,#0x8
7101ec9e2c  strb wzr,[x10, w9, UXTW ]
7101ec9e30  str w9,[x8, #0x4]
7101ec9e34  ldrb w9,[x8, #0x8]
7101ec9e38  mov w11,w24
7101ec9e3c  cbz w9,0x7101ec9e5c
7101ec9e40  add x10,x8,#0x9
7101ec9e44  mov w11,w24
7101ec9e48  mul w11,w11,w25
7101ec9e4c  and w9,w9,#0xff
7101ec9e50  eor w11,w11,w9
7101ec9e54  ldrb w9,[x10], #0x1
7101ec9e58  cbnz w9,0x7101ec9e48
7101ec9e5c  str w11,[x8]
7101ec9e60  ldr x8,[sp, #0xc0]
7101ec9e64  add x8,x8,#0x48
7101ec9e68  str x8,[sp, #0xc0]
7101ec9e6c  add x22,x22,#0x1
7101ec9e70  cmp x22,#0x8
7101ec9e74  b.ne 0x7101ec9c40
7101ec9e78  ldr x19,[sp, #0x8]
7101ec9e7c  orr w1,wzr,#0x7
7101ec9e80  add x2,sp,#0x58
7101ec9e84  mov x0,x19
7101ec9e88  bl 0x7101ec9fa0
7101ec9e8c  mov x8,x19
7101ec9e90  ldr x10,[x8, #0x20]!
7101ec9e94  cbz x10,0x7101ec9ec8
7101ec9e98  mov x9,x8
7101ec9e9c  ldr w11,[x10, #0x20]
7101ec9ea0  cmp w11,#0x3
7101ec9ea4  cset w11,lt
7101ec9ea8  csel x9,x9,x10,lt
7101ec9eac  ldr x10,[x10, w11, UXTW #0x3]
7101ec9eb0  cbnz x10,0x7101ec9e9c
7101ec9eb4  cmp x9,x8
7101ec9eb8  b.eq 0x7101ec9ec8
7101ec9ebc  ldr w10,[x9, #0x20]
7101ec9ec0  cmp w10,#0x4
7101ec9ec4  b.lt 0x7101ec9ecc
7101ec9ec8  mov x9,x8
7101ec9ecc  ldp x10,x8,[x9, #0x28]
7101ec9ed0  cbz x8,0x7101ec9ee8
7101ec9ed4  add x9,x8,#0x8
7101ec9ed8  ldxr x11,[x9]
7101ec9edc  add x11,x11,#0x1
7101ec9ee0  stxr w12,x11,[x9]
7101ec9ee4  cbnz w12,0x7101ec9ed8
7101ec9ee8  ldr x20,[x19, #0x50]
7101ec9eec  stp x10,x8,[x19, #0x48]
7101ec9ef0  cbz x20,0x7101ec9f24
7101ec9ef4  add x8,x20,#0x8
7101ec9ef8  ldaxr x9,[x8]
7101ec9efc  sub x10,x9,#0x1
7101ec9f00  stlxr w11,x10,[x8]
7101ec9f04  cbnz w11,0x7101ec9ef8
7101ec9f08  cbnz x9,0x7101ec9f24
7101ec9f0c  ldr x8,[x20]
7101ec9f10  ldr x8,[x8, #0x10]
7101ec9f14  mov x0,x20
7101ec9f18  blr x8
7101ec9f1c  mov x0,x20
7101ec9f20  bl 0x71039c2670
7101ec9f24  ldr x0,[sp, #0xb8]
7101ec9f28  cbz x0,0x7101ec9f34
7101ec9f2c  str x0,[sp, #0xc0]
7101ec9f30  bl 0x710392eb40
7101ec9f34  ldr x0,[sp, #0xa0]
7101ec9f38  cbz x0,0x7101ec9f44
7101ec9f3c  str x0,[sp, #0xa8]
7101ec9f40  bl 0x710392eb40
7101ec9f44  ldr x0,[sp, #0x130]
7101ec9f48  cbz x0,0x7101ec9f54
7101ec9f4c  str x0,[sp, #0x138]
7101ec9f50  bl 0x710392eb40
7101ec9f54  ldr x0,[sp, #0x118]
7101ec9f58  cbz x0,0x7101ec9f64
7101ec9f5c  str x0,[sp, #0x120]
7101ec9f60  bl 0x710392eb40
7101ec9f64  ldur x0,[x29, #-0x78]
7101ec9f68  cbz x0,0x7101ec9f74
7101ec9f6c  stur x0,[x29, #-0x70]
7101ec9f70  bl 0x710392eb40
7101ec9f74  ldp x29,x30,[sp, #0x1c0]
7101ec9f78  ldp x20,x19,[sp, #0x1b0]
7101ec9f7c  ldp x22,x21,[sp, #0x1a0]
7101ec9f80  ldp x24,x23,[sp, #0x190]
7101ec9f84  ldp x26,x25,[sp, #0x180]
7101ec9f88  ldp x28,x27,[sp, #0x170]
7101ec9f8c  add sp,sp,#0x1d0
7101ec9f90  ret
