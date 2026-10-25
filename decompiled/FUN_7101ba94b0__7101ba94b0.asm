// addr:      7101ba94b0
// offset:    0x1ba94b0
// name:      FUN_7101ba94b0
// mangled:   
// size:      568

7101ba94b0  sub sp,sp,#0x80
7101ba94b4  str x23,[sp, #0x40]
7101ba94b8  stp x22,x21,[sp, #0x50]
7101ba94bc  stp x20,x19,[sp, #0x60]
7101ba94c0  stp x29,x30,[sp, #0x70]
7101ba94c4  add x29,sp,#0x70
7101ba94c8  ldr w23,[x0, #0x1538]
7101ba94cc  subs w22,w23,#0x1
7101ba94d0  b.lt 0x7101ba96cc
7101ba94d4  adrp x8,0x710532f000
7101ba94d8  ldr x8,[x8, #0x8d0]
7101ba94dc  mov x19,x0
7101ba94e0  ldr x0,[x8, #0x8]
7101ba94e4  ldp x8,x9,[x0, #0x40]
7101ba94e8  sub x9,x9,x8
7101ba94ec  asr x9,x9,#0x3
7101ba94f0  mov w20,w1
7101ba94f4  cmp x9,#0x9
7101ba94f8  b.cc 0x7101ba950c
7101ba94fc  ldr x21,[x8, #0x40]
7101ba9500  ldrb w8,[x0, #0x191]
7101ba9504  cbnz w8,0x7101ba9588
7101ba9508  b 0x7101ba9518
7101ba950c  mov x21,xzr
7101ba9510  ldrb w8,[x0, #0x191]
7101ba9514  cbnz w8,0x7101ba9588
7101ba9518  mov w2,#0x4
7101ba951c  mov x1,x21
7101ba9520  bl 0x7103313f20
7101ba9524  tbz w0,#0x0,0x7101ba9588
7101ba9528  mov x0,sp
7101ba952c  mov x1,x21
7101ba9530  bl 0x71024076d0
7101ba9534  ldr x8,[sp, #0x10]
7101ba9538  adrp x9,0x7104f73000
7101ba953c  add x9,x9,#0xd50
7101ba9540  str x9,[sp, #0x8]
7101ba9544  cbz x8,0x7101ba95b4
7101ba9548  adrp x8,0x7106dd5000
7101ba954c  ldrb w8,[x8, #0x3a8]
7101ba9550  cmp w8,#0x1
7101ba9554  b.ne 0x7101ba95b4
7101ba9558  adrp x9,0x7106dd5000
7101ba955c  ldr w8,[sp, #0x18]
7101ba9560  ldr w9,[x9, #0x3ac]
7101ba9564  cmp w8,w9
7101ba9568  b.ne 0x7101ba95b4
7101ba956c  ldr x8,[sp, #0x10]
7101ba9570  ldr wzr,[x8, #0x38]!
7101ba9574  ldaxr w9,[x8]
7101ba9578  sub w9,w9,#0x1
7101ba957c  stlxr w10,w9,[x8]
7101ba9580  cbnz w10,0x7101ba9574
7101ba9584  b 0x7101ba95b4
7101ba9588  mov x8,#0x650000000000
7101ba958c  movk x8,#0x87, LSL #48
7101ba9590  strb wzr,[sp, #0x20]
7101ba9594  stp xzr,x8,[sp, #0x10]
7101ba9598  mov x8,#-0x1
7101ba959c  stp x8,xzr,[sp, #0x28]
7101ba95a0  adrp x8,0x7104f73000
7101ba95a4  add x8,x8,#0xd50
7101ba95a8  str wzr,[sp]
7101ba95ac  str xzr,[sp, #0x38]
7101ba95b0  str x8,[sp, #0x8]
7101ba95b4  str xzr,[sp, #0x10]
7101ba95b8  strb wzr,[sp, #0x20]
7101ba95bc  ldr w8,[x19, #0x1538]
7101ba95c0  cmp w8,#0x2
7101ba95c4  b.eq 0x7101ba95d8
7101ba95c8  cmp w8,#0x1
7101ba95cc  b.ne 0x7101ba95e8
7101ba95d0  add x0,x19,#0x758
7101ba95d4  b 0x7101ba95dc
7101ba95d8  add x0,x19,#0x768
7101ba95dc  fmov s0,0x3f800000
7101ba95e0  bl 0x710377aee0
7101ba95e4  ldr w8,[x19, #0x1538]
7101ba95e8  cmp w8,#0x3
7101ba95ec  b.cs 0x7101ba96e4
7101ba95f0  add x8,x19,w8, SXTW  #0x3
7101ba95f4  ldr x8,[x8, #0x1500]
7101ba95f8  ldr w8,[x8, #0x254]
7101ba95fc  tst w20,#0x1
7101ba9600  mov w9,#0xfffffff4
7101ba9604  mov w10,#0xffffffdc
7101ba9608  csel w9,w10,w9,ne
7101ba960c  cmp w23,#0x2
7101ba9610  add w8,w8,w9
7101ba9614  ldr w9,[x19, #0x153c]
7101ba9618  str w8,[x19, #0x1548]
7101ba961c  b.ge 0x7101ba9628
7101ba9620  mov w10,wzr
7101ba9624  b 0x7101ba965c
7101ba9628  cmp w9,w23
7101ba962c  csel w10,w22,w9,ge
7101ba9630  sub w10,w10,#0x1
7101ba9634  add w11,w10,w10, LSL #0x3
7101ba9638  lsl w11,w11,#0x2
7101ba963c  cmp w10,#0x0
7101ba9640  csel w10,w11,wzr,gt
7101ba9644  cmp w9,w23
7101ba9648  b.lt 0x7101ba9654
7101ba964c  mov w11,#0x24
7101ba9650  b 0x7101ba9658
7101ba9654  ldr w11,[x19, #0x1544]
7101ba9658  add w10,w11,w10
7101ba965c  sub w11,w9,#0x1
7101ba9660  cmp w9,w23
7101ba9664  csel w9,w22,w11,gt
7101ba9668  add w11,w9,w9, LSL #0x3
7101ba966c  lsl w11,w11,#0x2
7101ba9670  b.le 0x7101ba967c
7101ba9674  mov w12,#0x24
7101ba9678  b 0x7101ba9680
7101ba967c  ldr w12,[x19, #0x1544]
7101ba9680  sub w11,w11,#0x1
7101ba9684  cmp w9,#0x0
7101ba9688  csinv w9,w11,wzr,gt
7101ba968c  add w9,w12,w9
7101ba9690  cmp w9,w8
7101ba9694  csel w9,w9,w8,lt
7101ba9698  cmp w10,w8
7101ba969c  csel w8,w10,w9,gt
7101ba96a0  cmp w22,#0x2
7101ba96a4  mov w9,#0x1518
7101ba96a8  str w8,[x19, #0x1548]
7101ba96ac  csel w8,wzr,w22,hi
7101ba96b0  add x0,x19,x9
7101ba96b4  add w3,w8,#0x1
7101ba96b8  adrp x1,0x710434a000
7101ba96bc  add x1,x1,#0x131
7101ba96c0  mov w2,#0x1
7101ba96c4  str w8,[x19, #0x1538]
7101ba96c8  bl 0x710377a280
7101ba96cc  ldp x29,x30,[sp, #0x70]
7101ba96d0  ldr x23,[sp, #0x40]
7101ba96d4  ldp x20,x19,[sp, #0x60]
7101ba96d8  ldp x22,x21,[sp, #0x50]
7101ba96dc  add sp,sp,#0x80
7101ba96e0  ret
7101ba96e4  bl 0x71039c2650
