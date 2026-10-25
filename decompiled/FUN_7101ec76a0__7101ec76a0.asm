// addr:      7101ec76a0
// offset:    0x1ec76a0
// name:      FUN_7101ec76a0
// mangled:   
// size:      896

7101ec76a0  sub sp,sp,#0xb0
7101ec76a4  stp x22,x21,[sp, #0x80]
7101ec76a8  stp x20,x19,[sp, #0x90]
7101ec76ac  stp x29,x30,[sp, #0xa0]
7101ec76b0  add x29,sp,#0xa0
7101ec76b4  mov x19,x0
7101ec76b8  mov w1,#0x90
7101ec76bc  mov w0,#0x10
7101ec76c0  bl 0x710392e290
7101ec76c4  cbnz x0,0x7101ec770c
7101ec76c8  adrp x8,0x7105332000
7101ec76cc  ldr x0,[x8, #0xf00]
7101ec76d0  cbz x0,0x7101ec7708
7101ec76d4  mov w8,#0x90
7101ec76d8  stur wzr,[x29, #-0x38]
7101ec76dc  sub x1,x29,#0x38
7101ec76e0  str x8,[sp, #0x20]
7101ec76e4  ldr x8,[x0]
7101ec76e8  ldr x8,[x8, #0x30]
7101ec76ec  add x2,sp,#0x20
7101ec76f0  blr x8
7101ec76f4  tbz w0,#0x0,0x7101ec7708
7101ec76f8  mov w1,#0x90
7101ec76fc  mov w0,#0x10
7101ec7700  bl 0x710392e290
7101ec7704  cbnz x0,0x7101ec770c
7101ec7708  mov x0,xzr
7101ec770c  add x9,x0,#0x90
7101ec7710  mov x10,#0x6573
7101ec7714  movk x10,#0x5f74, LSL #16
7101ec7718  mov x13,#0x3131
7101ec771c  movk x13,#0x735f, LSL #16
7101ec7720  stur x9,[x29, #-0x28]
7101ec7724  mov w8,#0x9dc5
7101ec7728  movk w8,#0x811c, LSL #16
7101ec772c  orr x11,xzr,#0xf00000000
7101ec7730  movk x10,#0x7462, LSL #32
7101ec7734  movk x10,#0x5f6e, LSL #48
7101ec7738  add x9,sp,#0x20
7101ec773c  stp x11,x10,[sp, #0x20]
7101ec7740  movk x13,#0x6f74, LSL #32
7101ec7744  movk x13,#0x70, LSL #48
7101ec7748  str x13,[sp, #0x30]
7101ec774c  add x11,x9,#0x9
7101ec7750  mov w12,#0x73
7101ec7754  stp x0,x0,[x29, #-0x38]
7101ec7758  mov w9,#0x89
7101ec775c  mov w13,w8
7101ec7760  mul w13,w13,w9
7101ec7764  and w12,w12,#0xff
7101ec7768  eor w13,w13,w12
7101ec776c  ldrb w12,[x11], #0x1
7101ec7770  cbnz w12,0x7101ec7760
7101ec7774  str w13,[sp, #0x20]
7101ec7778  mov x12,x0
7101ec777c  add x13,sp,#0x20
7101ec7780  mov x11,xzr
7101ec7784  add x13,x13,#0x9
7101ec7788  mov w15,#0x73
7101ec778c  str wzr,[x12], #0x8
7101ec7790  add w14,w11,#0x1
7101ec7794  cmp w14,#0x3e
7101ec7798  strb w15,[x12, x11, LSL ]
7101ec779c  b.hi 0x7101ec77b4
7101ec77a0  ldrb w15,[x13, x11, LSL ]
7101ec77a4  add x14,x11,#0x1
7101ec77a8  mov x11,x14
7101ec77ac  cbnz w15,0x7101ec7790
7101ec77b0  b 0x7101ec77b8
7101ec77b4  add w14,w11,#0x1
7101ec77b8  add x11,x0,#0x8
7101ec77bc  strb wzr,[x11, w14, UXTW ]
7101ec77c0  ldrb w11,[x0, #0x8]
7101ec77c4  mov w12,w8
7101ec77c8  str w14,[x0, #0x4]
7101ec77cc  cbz w11,0x7101ec77ec
7101ec77d0  add x13,x0,#0x9
7101ec77d4  mov w12,w8
7101ec77d8  mul w12,w12,w9
7101ec77dc  and w11,w11,#0xff
7101ec77e0  eor w12,w12,w11
7101ec77e4  ldrb w11,[x13], #0x1
7101ec77e8  cbnz w11,0x7101ec77d8
7101ec77ec  mov x11,x0
7101ec77f0  mov w13,w8
7101ec77f4  str w12,[x11], #0x48
7101ec77f8  orr x12,xzr,#0x1000000000
7101ec77fc  stp x12,x10,[sp, #0x20]
7101ec7800  mov x12,#0x3231
7101ec7804  movk x12,#0x725f, LSL #16
7101ec7808  add x10,sp,#0x20
7101ec780c  movk x12,#0x7365, LSL #32
7101ec7810  movk x12,#0x7465, LSL #48
7101ec7814  add x10,x10,#0x9
7101ec7818  str x12,[sp, #0x30]
7101ec781c  mov w12,#0x73
7101ec7820  stur x11,[x29, #-0x30]
7101ec7824  strb wzr,[sp, #0x38]
7101ec7828  mul w13,w13,w9
7101ec782c  and w12,w12,#0xff
7101ec7830  eor w13,w13,w12
7101ec7834  ldrb w12,[x10], #0x1
7101ec7838  cbnz w12,0x7101ec7828
7101ec783c  add x12,sp,#0x20
7101ec7840  mov x10,xzr
7101ec7844  str w13,[sp, #0x20]
7101ec7848  add x12,x12,#0x9
7101ec784c  mov w13,#0x73
7101ec7850  str wzr,[x11]
7101ec7854  tst w13,#0xff
7101ec7858  b.ne 0x7101ec7878
7101ec785c  b 0x7101ec78a0
7101ec7860  add x15,x12,x10
7101ec7864  strb w13,[x14, #0x51]
7101ec7868  ldrb w13,[x15, #0x1]
7101ec786c  add x10,x10,#0x2
7101ec7870  tst w13,#0xff
7101ec7874  b.eq 0x7101ec78a0
7101ec7878  add w15,w10,#0x1
7101ec787c  add x14,x0,x10
7101ec7880  cmp w15,#0x3f
7101ec7884  strb w13,[x14, #0x50]
7101ec7888  b.cs 0x7101ec789c
7101ec788c  ldrb w13,[x12, x10, LSL ]
7101ec7890  cbnz w13,0x7101ec7860
7101ec7894  add x10,x10,#0x1
7101ec7898  b 0x7101ec78a0
7101ec789c  add w10,w10,#0x1
7101ec78a0  add x11,x11,w10, UXTW 
7101ec78a4  strb wzr,[x11, #0x8]
7101ec78a8  ldrb w11,[x0, #0x50]
7101ec78ac  str w10,[x0, #0x4c]
7101ec78b0  cbz w11,0x7101ec78cc
7101ec78b4  add x10,x0,#0x51
7101ec78b8  mul w8,w8,w9
7101ec78bc  and w11,w11,#0xff
7101ec78c0  eor w8,w8,w11
7101ec78c4  ldrb w11,[x10], #0x1
7101ec78c8  cbnz w11,0x7101ec78b8
7101ec78cc  str w8,[x0, #0x48]
7101ec78d0  add x8,x0,#0x90
7101ec78d4  adrp x1,0x71042b4000
7101ec78d8  add x1,x1,#0xb6b
7101ec78dc  sub x2,x29,#0x38
7101ec78e0  mov x0,x19
7101ec78e4  stur x8,[x29, #-0x30]
7101ec78e8  bl 0x7101ec4640
7101ec78ec  mov x0,x19
7101ec78f0  mov w1,wzr
7101ec78f4  bl 0x7101ec7250
7101ec78f8  mov w1,#0x1
7101ec78fc  mov x0,x19
7101ec7900  bl 0x7101ec7250
7101ec7904  ldr x0,[x19, #0x8]
7101ec7908  adrp x1,0x7104281000
7101ec790c  add x1,x1,#0x265
7101ec7910  add x8,sp,#0x20
7101ec7914  bl 0x7103776640
7101ec7918  adrp x1,0x710425f000
7101ec791c  add x1,x1,#0xc8a
7101ec7920  add x8,sp,#0x10
7101ec7924  add x0,sp,#0x20
7101ec7928  bl 0x7103776910
7101ec792c  adrp x1,0x7104413000
7101ec7930  add x1,x1,#0xee
7101ec7934  add x0,sp,#0x10
7101ec7938  bl 0x710377a120
7101ec793c  ldr x0,[sp, #0x18]
7101ec7940  adrp x21,0x710523d000
7101ec7944  add x21,x21,#0x9a8
7101ec7948  stp x21,xzr,[sp, #0x10]
7101ec794c  cbz x0,0x7101ec7954
7101ec7950  bl 0x710392eb40
7101ec7954  ldr x0,[x19, #0x8]
7101ec7958  adrp x1,0x710436c000
7101ec795c  add x1,x1,#0xb2e
7101ec7960  mov x8,sp
7101ec7964  bl 0x7103776640
7101ec7968  adrp x1,0x710425f000
7101ec796c  add x1,x1,#0xc8a
7101ec7970  add x8,sp,#0x10
7101ec7974  mov x0,sp
7101ec7978  bl 0x7103776910
7101ec797c  adrp x1,0x710434a000
7101ec7980  add x1,x1,#0xb51
7101ec7984  add x0,sp,#0x10
7101ec7988  bl 0x710377a120
7101ec798c  ldr x0,[sp, #0x18]
7101ec7990  stp x21,xzr,[sp, #0x10]
7101ec7994  cbz x0,0x7101ec799c
7101ec7998  bl 0x710392eb40
7101ec799c  ldr x20,[sp, #0x8]
7101ec79a0  adrp x22,0x710523d000
7101ec79a4  add x22,x22,#0x988
7101ec79a8  stp x22,xzr,[sp]
7101ec79ac  cbz x20,0x7101ec79c8
7101ec79b0  ldr x0,[x20, #0x18]
7101ec79b4  stp x21,xzr,[x20, #0x10]
7101ec79b8  cbz x0,0x7101ec79c0
7101ec79bc  bl 0x710392eb40
7101ec79c0  mov x0,x20
7101ec79c4  bl 0x710392eb40
7101ec79c8  ldr x8,[x19]
7101ec79cc  ldr x8,[x8, #0x18]
7101ec79d0  mov x0,x19
7101ec79d4  blr x8
7101ec79d8  ldr x19,[sp, #0x28]
7101ec79dc  stp x22,xzr,[sp, #0x20]
7101ec79e0  cbz x19,0x7101ec79fc
7101ec79e4  ldr x0,[x19, #0x18]
7101ec79e8  stp x21,xzr,[x19, #0x10]
7101ec79ec  cbz x0,0x7101ec79f4
7101ec79f0  bl 0x710392eb40
7101ec79f4  mov x0,x19
7101ec79f8  bl 0x710392eb40
7101ec79fc  ldur x0,[x29, #-0x38]
7101ec7a00  cbz x0,0x7101ec7a0c
7101ec7a04  stur x0,[x29, #-0x30]
7101ec7a08  bl 0x710392eb40
7101ec7a0c  ldp x29,x30,[sp, #0xa0]
7101ec7a10  ldp x20,x19,[sp, #0x90]
7101ec7a14  ldp x22,x21,[sp, #0x80]
7101ec7a18  add sp,sp,#0xb0
7101ec7a1c  ret
