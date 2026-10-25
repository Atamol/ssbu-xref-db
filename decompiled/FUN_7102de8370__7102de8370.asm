// addr:      7102de8370
// offset:    0x2de8370
// name:      FUN_7102de8370
// mangled:   
// size:      832

7102de8370  str x21,[sp, #-0x30]!
7102de8374  stp x20,x19,[sp, #0x10]
7102de8378  stp x29,x30,[sp, #0x20]
7102de837c  add x29,sp,#0x20
7102de8380  ldr x20,[x0, #0x300]
7102de8384  mov w8,#0x1
7102de8388  lsl w21,w8,w1
7102de838c  mov x19,x0
7102de8390  str w1,[x0, #0x780]
7102de8394  mov w1,w21
7102de8398  mov x0,x20
7102de839c  bl 0x710262bb40
7102de83a0  mvn w1,w21
7102de83a4  mov x0,x20
7102de83a8  bl 0x710262beb0
7102de83ac  ldr x9,[x19, #0x300]
7102de83b0  ldr w1,[x19, #0x780]
7102de83b4  ldr x8,[x9, #0x48]
7102de83b8  ldr x8,[x8, x1, LSL #0x3]
7102de83bc  ldr x0,[x9, #0x60]
7102de83c0  add x10,x8,#0x8
7102de83c4  cmp x0,x10
7102de83c8  b.eq 0x7102de83e8
7102de83cc  ldp x1,x2,[x8, #0x8]
7102de83d0  bl 0x7102616cf0
7102de83d4  ldr x9,[x19, #0x300]
7102de83d8  ldr w1,[x19, #0x780]
7102de83dc  ldr x8,[x9, #0x48]
7102de83e0  ldr x8,[x8, x1, LSL #0x3]
7102de83e4  ldr x0,[x9, #0x60]
7102de83e8  add x9,x8,#0x20
7102de83ec  add x0,x0,#0x18
7102de83f0  cmp x0,x9
7102de83f4  b.eq 0x7102de8404
7102de83f8  ldp x1,x2,[x8, #0x20]
7102de83fc  bl 0x7102616cf0
7102de8400  ldr w1,[x19, #0x780]
7102de8404  ldr x0,[x19, #0x308]
7102de8408  bl 0x7102624870
7102de840c  ldr x0,[x19, #0x308]
7102de8410  ldr w1,[x19, #0x780]
7102de8414  bl 0x7102624740
7102de8418  ldrsw x12,[x19, #0x780]
7102de841c  cmp w12,#0x1
7102de8420  b.hi 0x7102de86a0
7102de8424  ldr x8,[x19, #0x300]
7102de8428  ldr x9,[x8, #0x18]
7102de842c  ldp x8,x9,[x9]
7102de8430  cmp x8,x9
7102de8434  b.eq 0x7102de86a0
7102de8438  adrp x13,0x710513d000
7102de843c  add x13,x13,#0x730
7102de8440  lsl x10,x12,#0x4
7102de8444  ldr x14,[x13, x10, LSL #0x0]
7102de8448  adrp x10,0x7104754000
7102de844c  add x10,x10,#0x84
7102de8450  ldrb w15,[x14], #0x1
7102de8454  mov w16,#0xffffffff
7102de8458  orr x17,xzr,#0x100000000
7102de845c  mov x18,x8
7102de8460  ldr x11,[x18]
7102de8464  cbz w15,0x7102de84b4
7102de8468  mov x0,xzr
7102de846c  mov x1,x14
7102de8470  mov w3,w15
7102de8474  mov w2,w16
7102de8478  and w3,w3,#0xff
7102de847c  sub w4,w3,#0x41
7102de8480  add w5,w3,#0x20
7102de8484  cmp w4,#0x1a
7102de8488  csel w3,w5,w3,cc
7102de848c  eor w3,w3,w2
7102de8490  and w3,w3,#0xff
7102de8494  ldr w3,[x10, w3, UXTW #0x2]
7102de8498  eor w2,w3,w2, LSR #0x8
7102de849c  ldrb w3,[x1], #0x1
7102de84a0  add x0,x0,x17
7102de84a4  cbnz w3,0x7102de8478
7102de84a8  mvn w1,w2
7102de84ac  and x0,x0,#0xff00000000
7102de84b0  b 0x7102de84bc
7102de84b4  mov x1,xzr
7102de84b8  mov x0,xzr
7102de84bc  orr x0,x0,x1
7102de84c0  ldr x1,[x11, #0xa0]
7102de84c4  and x1,x1,#0xffffffffff
7102de84c8  cmp x1,x0
7102de84cc  b.eq 0x7102de84e0
7102de84d0  add x18,x18,#0x8
7102de84d4  cmp x18,x9
7102de84d8  b.ne 0x7102de8460
7102de84dc  mov x11,xzr
7102de84e0  cmp x8,x9
7102de84e4  b.eq 0x7102de86a0
7102de84e8  mov w14,#0x1
7102de84ec  sub x12,x14,x12
7102de84f0  mov w14,#0xffffffff
7102de84f4  lsl x12,x12,#0x4
7102de84f8  ldr x12,[x13, x12, LSL #0x0]
7102de84fc  ldrb w13,[x12], #0x1
7102de8500  orr x15,xzr,#0x100000000
7102de8504  ldr x16,[x8]
7102de8508  cbz w13,0x7102de8558
7102de850c  mov x17,xzr
7102de8510  mov x18,x12
7102de8514  mov w1,w13
7102de8518  mov w0,w14
7102de851c  and w1,w1,#0xff
7102de8520  sub w2,w1,#0x41
7102de8524  add w3,w1,#0x20
7102de8528  cmp w2,#0x1a
7102de852c  csel w1,w3,w1,cc
7102de8530  eor w1,w1,w0
7102de8534  and w1,w1,#0xff
7102de8538  ldr w1,[x10, w1, UXTW #0x2]
7102de853c  eor w0,w1,w0, LSR #0x8
7102de8540  ldrb w1,[x18], #0x1
7102de8544  add x17,x17,x15
7102de8548  cbnz w1,0x7102de851c
7102de854c  mvn w18,w0
7102de8550  and x17,x17,#0xff00000000
7102de8554  b 0x7102de8560
7102de8558  mov x18,xzr
7102de855c  mov x17,xzr
7102de8560  orr x17,x17,x18
7102de8564  ldr x18,[x16, #0xa0]
7102de8568  and x18,x18,#0xffffffffff
7102de856c  cmp x18,x17
7102de8570  b.eq 0x7102de8584
7102de8574  add x8,x8,#0x8
7102de8578  cmp x8,x9
7102de857c  b.ne 0x7102de8504
7102de8580  b 0x7102de86a0
7102de8584  cbz x11,0x7102de86a0
7102de8588  cbz x16,0x7102de86a0
7102de858c  ldr x10,[x11, #0x130]
7102de8590  cbz x10,0x7102de86a0
7102de8594  ldr x8,[x16, #0x130]
7102de8598  cbz x8,0x7102de86a0
7102de859c  ldp x9,x10,[x10]
7102de85a0  cmp x9,x10
7102de85a4  b.eq 0x7102de8620
7102de85a8  mov w11,#0x1
7102de85ac  ldr x13,[x9]
7102de85b0  ldrb w12,[x13, #0x20]
7102de85b4  cbnz w12,0x7102de8614
7102de85b8  ldp x15,x12,[x13, #0x8]
7102de85bc  ldr x14,[x13]
7102de85c0  strb w11,[x13, #0x20]
7102de85c4  str x14,[x15]
7102de85c8  str x15,[x14, #0x8]
7102de85cc  ldr x14,[x12, #0x30]
7102de85d0  sub x14,x14,#0x1
7102de85d4  str x14,[x12, #0x30]
7102de85d8  stp xzr,xzr,[x13]
7102de85dc  ldr x15,[x12, #0x28]
7102de85e0  add x14,x12,#0x20
7102de85e4  stp x14,x15,[x13]
7102de85e8  str x13,[x12, #0x28]
7102de85ec  str x13,[x15]
7102de85f0  ldr x14,[x12, #0x18]
7102de85f4  add x14,x14,#0x1
7102de85f8  str x14,[x12, #0x18]
7102de85fc  ldr x13,[x13, #0x18]
7102de8600  cbz x13,0x7102de8608
7102de8604  ldr w13,[x13, #0x110]
7102de8608  ldr w14,[x12, #0x48]
7102de860c  add w13,w14,w13
7102de8610  str w13,[x12, #0x48]
7102de8614  add x9,x9,#0x8
7102de8618  cmp x10,x9
7102de861c  b.ne 0x7102de85ac
7102de8620  ldp x9,x8,[x8]
7102de8624  cmp x9,x8
7102de8628  b.eq 0x7102de86a0
7102de862c  ldr x11,[x9]
7102de8630  ldrb w10,[x11, #0x20]
7102de8634  cbz w10,0x7102de8694
7102de8638  ldp x13,x10,[x11, #0x8]
7102de863c  ldr x12,[x11]
7102de8640  strb wzr,[x11, #0x20]
7102de8644  str x12,[x13]
7102de8648  str x13,[x12, #0x8]
7102de864c  ldr x12,[x10, #0x18]
7102de8650  sub x12,x12,#0x1
7102de8654  str x12,[x10, #0x18]
7102de8658  stp xzr,xzr,[x11]
7102de865c  ldr x13,[x10, #0x40]
7102de8660  add x12,x10,#0x38
7102de8664  stp x12,x13,[x11]
7102de8668  str x11,[x10, #0x40]
7102de866c  str x11,[x13]
7102de8670  ldr x12,[x10, #0x30]
7102de8674  add x12,x12,#0x1
7102de8678  str x12,[x10, #0x30]
7102de867c  ldr x11,[x11, #0x18]
7102de8680  cbz x11,0x7102de8688
7102de8684  ldr w11,[x11, #0x110]
7102de8688  ldr w12,[x10, #0x48]
7102de868c  sub w11,w12,w11
7102de8690  str w11,[x10, #0x48]
7102de8694  add x9,x9,#0x8
7102de8698  cmp x8,x9
7102de869c  b.ne 0x7102de862c
7102de86a0  ldp x29,x30,[sp, #0x20]
7102de86a4  ldp x20,x19,[sp, #0x10]
7102de86a8  ldr x21,[sp], #0x30
7102de86ac  ret
