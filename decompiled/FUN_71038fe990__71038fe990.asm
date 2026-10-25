// addr:      71038fe990
// offset:    0x38fe990
// name:      FUN_71038fe990
// mangled:   
// size:      500

71038fe990  str x23,[sp, #-0x40]!
71038fe994  stp x22,x21,[sp, #0x10]
71038fe998  stp x20,x19,[sp, #0x20]
71038fe99c  stp x29,x30,[sp, #0x30]
71038fe9a0  add x29,sp,#0x30
71038fe9a4  ldr x21,[x0, #0x18]
71038fe9a8  ldr x8,[x21, #0x98]
71038fe9ac  ldr x9,[x8]
71038fe9b0  str x9,[x21, #0x98]
71038fe9b4  ldr x9,[x21, #0x58]
71038fe9b8  str x9,[x8]
71038fe9bc  str x8,[x21, #0x58]
71038fe9c0  ldrb w9,[x8, #0x9]
71038fe9c4  and w10,w9,#0xfffffff7
71038fe9c8  strb w10,[x8, #0x9]
71038fe9cc  ldrb w10,[x21, #0x55]
71038fe9d0  sub w10,w10,#0x2
71038fe9d4  mov w20,w1
71038fe9d8  mov x19,x0
71038fe9dc  cmp w10,#0x3
71038fe9e0  b.hi 0x71038fe9f4
71038fe9e4  ldrb w10,[x21, #0x54]
71038fe9e8  and w9,w9,#0xf0
71038fe9ec  bfxil w9,w10,#0x0,#0x2
71038fe9f0  strb w9,[x8, #0x9]
71038fe9f4  ldrb w10,[x8, #0x8]
71038fe9f8  orr x9,x10,#0x40
71038fe9fc  and w10,w10,#0xf
71038fea00  cmp w10,#0x7
71038fea04  b.eq 0x71038fea74
71038fea08  cmp w10,#0x5
71038fea0c  b.ne 0x71038fea8c
71038fea10  add x10,x8,#0x28
71038fea14  ldr x10,[x10]
71038fea18  cbz x10,0x71038fea80
71038fea1c  ldr x11,[x19, #0x18]
71038fea20  ldr x11,[x11, #0xf0]
71038fea24  ldr x12,[x10, #0x18]
71038fea28  ldrb w10,[x10, #0xb]
71038fea2c  ldr w13,[x11, #0xc]
71038fea30  mov w14,#0xffffffff
71038fea34  lsl w10,w14,w10
71038fea38  bic w10,w13,w10
71038fea3c  sxtw x10,w10
71038fea40  add x12,x12,x10, LSL #0x5
71038fea44  adrp x10,0x7104862000
71038fea48  add x10,x10,#0x960
71038fea4c  ldr w13,[x12, #0x18]
71038fea50  cmp w13,#0x44
71038fea54  b.ne 0x71038fea64
71038fea58  ldr x13,[x12, #0x10]
71038fea5c  cmp x13,x11
71038fea60  b.eq 0x71038feaa8
71038fea64  ldrsw x13,[x12, #0x1c]
71038fea68  add x12,x12,x13, LSL #0x5
71038fea6c  cbnz w13,0x71038fea4c
71038fea70  b 0x71038feaac
71038fea74  add x10,x8,#0x10
71038fea78  ldr x10,[x10]
71038fea7c  cbnz x10,0x71038fea1c
71038fea80  adrp x10,0x7104862000
71038fea84  add x10,x10,#0x960
71038fea88  b 0x71038feaac
71038fea8c  ldr x11,[x19, #0x18]
71038fea90  and x10,x9,#0xf
71038fea94  add x10,x11,x10, LSL #0x3
71038fea98  add x10,x10,#0x1a0
71038fea9c  ldr x10,[x10]
71038feaa0  cbnz x10,0x71038fea1c
71038feaa4  b 0x71038fea80
71038feaa8  mov x10,x12
71038feaac  ldr w11,[x10, #0x8]
71038feab0  and w11,w11,#0xf
71038feab4  cmp w11,#0x6
71038feab8  b.ne 0x71038feb24
71038feabc  ldrb w22,[x19, #0xc9]
71038feac0  ldrb w23,[x21, #0x57]
71038feac4  strb wzr,[x19, #0xc9]
71038feac8  strb wzr,[x21, #0x57]
71038feacc  ldr x11,[x19, #0x10]
71038fead0  adrp x1,0x71038fe000
71038fead4  add x1,x1,#0xb90
71038fead8  ldp x12,x10,[x10]
71038feadc  stp x12,x10,[x11]
71038feae0  ldr x10,[x19, #0x10]
71038feae4  str x8,[x10, #0x10]
71038feae8  str w9,[x10, #0x18]
71038feaec  ldr x8,[x19, #0x10]
71038feaf0  add x9,x8,#0x20
71038feaf4  str x9,[x19, #0x10]
71038feaf8  ldr x9,[x19, #0x38]
71038feafc  sub x3,x8,x9
71038feb00  mov x0,x19
71038feb04  mov x2,xzr
71038feb08  mov x4,xzr
71038feb0c  bl 0x71038fca90
71038feb10  strb w22,[x19, #0xc9]
71038feb14  strb w23,[x21, #0x57]
71038feb18  cbz w20,0x71038feb24
71038feb1c  mov w1,w0
71038feb20  cbnz w0,0x71038feb38
71038feb24  ldp x29,x30,[sp, #0x30]
71038feb28  ldp x20,x19,[sp, #0x20]
71038feb2c  ldp x22,x21,[sp, #0x10]
71038feb30  ldr x23,[sp], #0x40
71038feb34  ret
71038feb38  cmp w1,#0x2
71038feb3c  b.ne 0x71038feb7c
71038feb40  ldr x8,[x19, #0x10]
71038feb44  ldur w9,[x8, #-0x8]
71038feb48  and w9,w9,#0xf
71038feb4c  cmp w9,#0x4
71038feb50  b.ne 0x71038feb60
71038feb54  ldur x8,[x8, #-0x10]
71038feb58  add x2,x8,#0x18
71038feb5c  b 0x71038feb68
71038feb60  adrp x2,0x71043bd000
71038feb64  add x2,x2,#0x1ef
71038feb68  adrp x1,0x7104411000
71038feb6c  add x1,x1,#0x37f
71038feb70  mov x0,x19
71038feb74  bl 0x7103908660
71038feb78  mov w1,#0x5
71038feb7c  mov x0,x19
71038feb80  bl 0x71038fb3c0
