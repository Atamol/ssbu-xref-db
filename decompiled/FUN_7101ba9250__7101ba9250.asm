// addr:      7101ba9250
// offset:    0x1ba9250
// name:      FUN_7101ba9250
// mangled:   
// size:      596

7101ba9250  sub sp,sp,#0x80
7101ba9254  str x23,[sp, #0x40]
7101ba9258  stp x22,x21,[sp, #0x50]
7101ba925c  stp x20,x19,[sp, #0x60]
7101ba9260  stp x29,x30,[sp, #0x70]
7101ba9264  add x29,sp,#0x70
7101ba9268  ldr w23,[x0, #0x1538]
7101ba926c  ldr w8,[x0, #0x153c]
7101ba9270  add w22,w23,#0x1
7101ba9274  cmp w22,w8
7101ba9278  b.ge 0x7101ba9488
7101ba927c  adrp x8,0x710532f000
7101ba9280  ldr x8,[x8, #0x8d0]
7101ba9284  mov x19,x0
7101ba9288  ldr x0,[x8, #0x8]
7101ba928c  ldp x8,x9,[x0, #0x40]
7101ba9290  sub x9,x9,x8
7101ba9294  asr x9,x9,#0x3
7101ba9298  mov w20,w1
7101ba929c  cmp x9,#0x9
7101ba92a0  b.cc 0x7101ba92b4
7101ba92a4  ldr x21,[x8, #0x40]
7101ba92a8  ldrb w8,[x0, #0x191]
7101ba92ac  cbnz w8,0x7101ba9330
7101ba92b0  b 0x7101ba92c0
7101ba92b4  mov x21,xzr
7101ba92b8  ldrb w8,[x0, #0x191]
7101ba92bc  cbnz w8,0x7101ba9330
7101ba92c0  mov w2,#0x4
7101ba92c4  mov x1,x21
7101ba92c8  bl 0x7103313f20
7101ba92cc  tbz w0,#0x0,0x7101ba9330
7101ba92d0  mov x0,sp
7101ba92d4  mov x1,x21
7101ba92d8  bl 0x71024076d0
7101ba92dc  ldr x8,[sp, #0x10]
7101ba92e0  adrp x9,0x7104f73000
7101ba92e4  add x9,x9,#0xd50
7101ba92e8  str x9,[sp, #0x8]
7101ba92ec  cbz x8,0x7101ba935c
7101ba92f0  adrp x8,0x7106dd5000
7101ba92f4  ldrb w8,[x8, #0x3a8]
7101ba92f8  cmp w8,#0x1
7101ba92fc  b.ne 0x7101ba935c
7101ba9300  adrp x9,0x7106dd5000
7101ba9304  ldr w8,[sp, #0x18]
7101ba9308  ldr w9,[x9, #0x3ac]
7101ba930c  cmp w8,w9
7101ba9310  b.ne 0x7101ba935c
7101ba9314  ldr x8,[sp, #0x10]
7101ba9318  ldr wzr,[x8, #0x38]!
7101ba931c  ldaxr w9,[x8]
7101ba9320  sub w9,w9,#0x1
7101ba9324  stlxr w10,w9,[x8]
7101ba9328  cbnz w10,0x7101ba931c
7101ba932c  b 0x7101ba935c
7101ba9330  mov x8,#0x650000000000
7101ba9334  movk x8,#0x87, LSL #48
7101ba9338  strb wzr,[sp, #0x20]
7101ba933c  stp xzr,x8,[sp, #0x10]
7101ba9340  mov x8,#-0x1
7101ba9344  stp x8,xzr,[sp, #0x28]
7101ba9348  adrp x8,0x7104f73000
7101ba934c  add x8,x8,#0xd50
7101ba9350  str wzr,[sp]
7101ba9354  str xzr,[sp, #0x38]
7101ba9358  str x8,[sp, #0x8]
7101ba935c  str xzr,[sp, #0x10]
7101ba9360  strb wzr,[sp, #0x20]
7101ba9364  ldr w8,[x19, #0x1538]
7101ba9368  cmp w8,#0x1
7101ba936c  b.eq 0x7101ba937c
7101ba9370  cbnz w8,0x7101ba938c
7101ba9374  add x0,x19,#0x738
7101ba9378  b 0x7101ba9380
7101ba937c  add x0,x19,#0x748
7101ba9380  fmov s0,0x3f800000
7101ba9384  bl 0x710377aee0
7101ba9388  ldr w8,[x19, #0x1538]
7101ba938c  cmp w8,#0x3
7101ba9390  b.cs 0x7101ba94a0
7101ba9394  add x8,x19,w8, SXTW  #0x3
7101ba9398  ldr x8,[x8, #0x1500]
7101ba939c  ldr w8,[x8, #0x254]
7101ba93a0  tst w20,#0x1
7101ba93a4  orr w9,wzr,#0xc
7101ba93a8  mov w10,#0x24
7101ba93ac  csel w9,w10,w9,ne
7101ba93b0  add w8,w8,w9
7101ba93b4  str w8,[x19, #0x1548]
7101ba93b8  tbnz w23,#0x1f,0x7101ba93f0
7101ba93bc  ldr w10,[x19, #0x153c]
7101ba93c0  cmp w10,w22
7101ba93c4  csel w9,w22,w10,gt
7101ba93c8  sub w9,w9,#0x1
7101ba93cc  add w11,w9,w9, LSL #0x3
7101ba93d0  lsl w11,w11,#0x2
7101ba93d4  cmp w9,#0x0
7101ba93d8  csel w9,w11,wzr,gt
7101ba93dc  cmp w10,w22
7101ba93e0  b.le 0x7101ba9404
7101ba93e4  mov w11,#0x24
7101ba93e8  add w9,w11,w9
7101ba93ec  b 0x7101ba9418
7101ba93f0  cmn w23,#0x1
7101ba93f4  b.eq 0x7101ba9410
7101ba93f8  mov w9,wzr
7101ba93fc  mov w10,#0xffffffff
7101ba9400  b 0x7101ba944c
7101ba9404  ldr w11,[x19, #0x1544]
7101ba9408  add w9,w11,w9
7101ba940c  b 0x7101ba9418
7101ba9410  ldr w10,[x19, #0x153c]
7101ba9414  mov w9,wzr
7101ba9418  sub w10,w10,#0x1
7101ba941c  cmp w10,w22
7101ba9420  csel w10,w22,w10,gt
7101ba9424  add w11,w10,w10, LSL #0x3
7101ba9428  lsl w11,w11,#0x2
7101ba942c  b.le 0x7101ba9438
7101ba9430  mov w12,#0x24
7101ba9434  b 0x7101ba943c
7101ba9438  ldr w12,[x19, #0x1544]
7101ba943c  sub w11,w11,#0x1
7101ba9440  cmp w10,#0x0
7101ba9444  csinv w10,w11,wzr,gt
7101ba9448  add w10,w12,w10
7101ba944c  cmp w10,w8
7101ba9450  csel w10,w10,w8,lt
7101ba9454  cmp w9,w8
7101ba9458  csel w8,w9,w10,gt
7101ba945c  cmp w22,#0x2
7101ba9460  mov w9,#0x1518
7101ba9464  str w8,[x19, #0x1548]
7101ba9468  csel w8,wzr,w22,hi
7101ba946c  add x0,x19,x9
7101ba9470  add w3,w8,#0x1
7101ba9474  adrp x1,0x710434a000
7101ba9478  add x1,x1,#0x131
7101ba947c  str w8,[x19, #0x1538]
7101ba9480  mov w2,#0x1
7101ba9484  bl 0x710377a280
7101ba9488  ldp x29,x30,[sp, #0x70]
7101ba948c  ldr x23,[sp, #0x40]
7101ba9490  ldp x20,x19,[sp, #0x60]
7101ba9494  ldp x22,x21,[sp, #0x50]
7101ba9498  add sp,sp,#0x80
7101ba949c  ret
7101ba94a0  bl 0x71039c2650
