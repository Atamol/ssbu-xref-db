// addr:      7102b5f110
// offset:    0x2b5f110
// name:      FUN_7102b5f110
// mangled:   
// size:      168

7102b5f110  sub sp,sp,#0x110
7102b5f114  stp x28,x19,[sp, #0xf0]
7102b5f118  stp x29,x30,[sp, #0x100]
7102b5f11c  add x29,sp,#0x100
7102b5f120  mov x8,#-0x28
7102b5f124  adrp x2,0x710439b000
7102b5f128  add x2,x2,#0x3ae
7102b5f12c  movk x8,#0xff80, LSL #32
7102b5f130  mov x19,x0
7102b5f134  orr w1,wzr,#0x3f
7102b5f138  stp q6,q7,[sp, #0x60]
7102b5f13c  stp q4,q5,[sp, #0x40]
7102b5f140  stp q2,q3,[sp, #0x20]
7102b5f144  stp q0,q1,[sp]
7102b5f148  stur x3,[x29, #-0x78]
7102b5f14c  sub x3,x29,#0x30
7102b5f150  stp x6,x7,[x29, #-0x60]
7102b5f154  stp x4,x5,[x29, #-0x70]
7102b5f158  str wzr,[x0], #0x4
7102b5f15c  stur x8,[x29, #-0x38]
7102b5f160  mov x8,sp
7102b5f164  add x8,x8,#0x80
7102b5f168  stur x8,[x29, #-0x40]
7102b5f16c  sub x8,x29,#0x78
7102b5f170  add x8,x8,#0x28
7102b5f174  stur x8,[x29, #-0x48]
7102b5f178  add x8,x29,#0x10
7102b5f17c  stur x8,[x29, #-0x50]
7102b5f180  ldur x8,[x29, #-0x38]
7102b5f184  stur x8,[x29, #-0x18]
7102b5f188  ldur x8,[x29, #-0x40]
7102b5f18c  stur x8,[x29, #-0x20]
7102b5f190  ldur x8,[x29, #-0x48]
7102b5f194  stur x8,[x29, #-0x28]
7102b5f198  ldur x8,[x29, #-0x50]
7102b5f19c  stur x8,[x29, #-0x30]
7102b5f1a0  bl 0x71039c1060
7102b5f1a4  str w0,[x19]
7102b5f1a8  ldp x29,x30,[sp, #0x100]
7102b5f1ac  ldp x28,x19,[sp, #0xf0]
7102b5f1b0  add sp,sp,#0x110
7102b5f1b4  ret
