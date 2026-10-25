// addr:      7101bb9290
// offset:    0x1bb9290
// name:      FUN_7101bb9290
// mangled:   
// size:      2416

7101bb9290  sub sp,sp,#0x1b0
7101bb9294  stp x28,x25,[sp, #0x160]
7101bb9298  stp x24,x23,[sp, #0x170]
7101bb929c  stp x22,x21,[sp, #0x180]
7101bb92a0  stp x20,x19,[sp, #0x190]
7101bb92a4  stp x29,x30,[sp, #0x1a0]
7101bb92a8  add x29,sp,#0x1a0
7101bb92ac  mov x8,#0x41800000
7101bb92b0  movk x8,#0x4248, LSL #48
7101bb92b4  mov x19,x0
7101bb92b8  stp xzr,x8,[sp]
7101bb92bc  mov x8,#0x3f800000
7101bb92c0  movk x8,#0x101, LSL #32
7101bb92c4  movk x8,#0x1, LSL #48
7101bb92c8  str x8,[sp, #0x10]
7101bb92cc  mov w22,#0x1
7101bb92d0  mov x8,sp
7101bb92d4  mov x0,sp
7101bb92d8  mov w20,w1
7101bb92dc  strh wzr,[sp, #0x18]
7101bb92e0  strb w22,[sp, #0x1a]
7101bb92e4  str xzr,[sp, #0x50]
7101bb92e8  add x21,x8,#0x60
7101bb92ec  str xzr,[sp, #0x80]
7101bb92f0  str xzr,[sp, #0xb0]
7101bb92f4  str xzr,[sp, #0xe0]
7101bb92f8  str xzr,[sp, #0x110]
7101bb92fc  strb wzr,[sp, #0x21]
7101bb9300  sturh wzr,[sp, #0x1f]
7101bb9304  stur wzr,[sp, #0x1b]
7101bb9308  bl 0x710337e790
7101bb930c  mov w8,#0x101
7101bb9310  strh w8,[sp, #0x1c]
7101bb9314  strb w22,[sp, #0x16]
7101bb9318  strb w22,[sp, #0x18]
7101bb931c  adrp x8,0x71050ab000
7101bb9320  add x8,x8,#0xcc8
7101bb9324  sub x22,x29,#0x80
7101bb9328  sub x0,x29,#0x80
7101bb932c  mov x1,x21
7101bb9330  stur x8,[x29, #-0x80]
7101bb9334  stur x22,[x29, #-0x60]
7101bb9338  bl 0x71003cb050
7101bb933c  ldur x0,[x29, #-0x60]
7101bb9340  cmp x22,x0
7101bb9344  b.eq 0x7101bb9358
7101bb9348  cbz x0,0x7101bb9364
7101bb934c  ldr x8,[x0]
7101bb9350  ldr x8,[x8, #0x28]
7101bb9354  b 0x7101bb9360
7101bb9358  ldr x8,[x0]
7101bb935c  ldr x8,[x8, #0x20]
7101bb9360  blr x8
7101bb9364  adrp x8,0x710532f000
7101bb9368  ldr x8,[x8, #0x730]
7101bb936c  ldr x21,[x8, #0x8]
7101bb9370  cmp w20,#0x1
7101bb9374  b.eq 0x7101bb95e8
7101bb9378  cmp w20,#0x2
7101bb937c  b.eq 0x7101bb94b8
7101bb9380  cmp w20,#0x3
7101bb9384  b.ne 0x7101bb9718
7101bb9388  ldr x8,[x19, #0xaa8]
7101bb938c  ldr x9,[x19, #0xaa0]
7101bb9390  fmov s0,0x3f800000
7101bb9394  add x0,x19,#0x118
7101bb9398  sub x8,x8,x9
7101bb939c  lsr x8,x8,#0x3
7101bb93a0  add x24,x19,#0xaa0
7101bb93a4  str w8,[sp, #0x4]
7101bb93a8  bl 0x710377aee0
7101bb93ac  ldr x8,[x19, #0x3a0]
7101bb93b0  ldr x8,[x8]
7101bb93b4  cbz x8,0x7101bb98c8
7101bb93b8  ldr x8,[x21, #0x268]
7101bb93bc  ldr x0,[x8, #0x8]
7101bb93c0  mov x1,#0xc799
7101bb93c4  movk x1,#0x4c25, LSL #16
7101bb93c8  movk x1,#0x12, LSL #32
7101bb93cc  bl 0x710327fb30
7101bb93d0  mov x1,x0
7101bb93d4  ldr x0,[x19, #0x8]
7101bb93d8  mov w2,#0x15
7101bb93dc  bl 0x710323f8d0
7101bb93e0  mov x21,x0
7101bb93e4  adrp x22,0x710523d000
7101bb93e8  add x22,x22,#0xa08
7101bb93ec  mov w0,#0x10
7101bb93f0  mov w1,#0x10
7101bb93f4  stur x22,[x29, #-0x80]
7101bb93f8  bl 0x710392e290
7101bb93fc  cbnz x0,0x7101bb9444
7101bb9400  adrp x8,0x7105332000
7101bb9404  ldr x0,[x8, #0xf00]
7101bb9408  cbz x0,0x7101bb9440
7101bb940c  mov w8,#0x10
7101bb9410  stur wzr,[x29, #-0x44]
7101bb9414  sub x1,x29,#0x44
7101bb9418  stur x8,[x29, #-0x50]
7101bb941c  ldr x8,[x0]
7101bb9420  ldr x8,[x8, #0x30]
7101bb9424  sub x2,x29,#0x50
7101bb9428  blr x8
7101bb942c  tbz w0,#0x0,0x7101bb9440
7101bb9430  mov w0,#0x10
7101bb9434  mov w1,#0x10
7101bb9438  bl 0x710392e290
7101bb943c  cbnz x0,0x7101bb9444
7101bb9440  mov x0,xzr
7101bb9444  sub x8,x29,#0x80
7101bb9448  cmp x8,x21
7101bb944c  stp xzr,xzr,[x0]
7101bb9450  stur x0,[x29, #-0x78]
7101bb9454  b.eq 0x7101bb9834
7101bb9458  ldr x8,[x21, #0x8]
7101bb945c  ldp x9,x8,[x8]
7101bb9460  cbz x8,0x7101bb9830
7101bb9464  add x10,x8,#0x8
7101bb9468  ldxr x11,[x10]
7101bb946c  add x11,x11,#0x1
7101bb9470  stxr w12,x11,[x10]
7101bb9474  cbnz w12,0x7101bb9468
7101bb9478  ldr x21,[x0, #0x8]
7101bb947c  stp x9,x8,[x0]
7101bb9480  cbz x21,0x7101bb9834
7101bb9484  add x8,x21,#0x8
7101bb9488  ldaxr x9,[x8]
7101bb948c  sub x10,x9,#0x1
7101bb9490  stlxr w11,x10,[x8]
7101bb9494  cbnz w11,0x7101bb9488
7101bb9498  cbnz x9,0x7101bb9834
7101bb949c  ldr x8,[x21]
7101bb94a0  ldr x8,[x8, #0x10]
7101bb94a4  mov x0,x21
7101bb94a8  blr x8
7101bb94ac  mov x0,x21
7101bb94b0  bl 0x71039c2670
7101bb94b4  b 0x7101bb9834
7101bb94b8  ldr x8,[x19, #0xa90]
7101bb94bc  ldr x9,[x19, #0xa88]
7101bb94c0  fmov s0,0x3f800000
7101bb94c4  add x0,x19,#0x108
7101bb94c8  sub x8,x8,x9
7101bb94cc  lsr x8,x8,#0x3
7101bb94d0  add x24,x19,#0xa88
7101bb94d4  str w8,[sp, #0x4]
7101bb94d8  bl 0x710377aee0
7101bb94dc  ldr x8,[x19, #0x3a0]
7101bb94e0  ldr x8,[x8]
7101bb94e4  cbz x8,0x7101bb98c8
7101bb94e8  ldr x8,[x21, #0x268]
7101bb94ec  ldr x0,[x8, #0x8]
7101bb94f0  mov x1,#0xf289
7101bb94f4  movk x1,#0x346e, LSL #16
7101bb94f8  movk x1,#0xe, LSL #32
7101bb94fc  bl 0x710327fb30
7101bb9500  mov x1,x0
7101bb9504  ldr x0,[x19, #0x8]
7101bb9508  mov w2,#0x15
7101bb950c  bl 0x710323f8d0
7101bb9510  mov x21,x0
7101bb9514  adrp x22,0x710523d000
7101bb9518  add x22,x22,#0xa08
7101bb951c  mov w0,#0x10
7101bb9520  mov w1,#0x10
7101bb9524  stur x22,[x29, #-0x80]
7101bb9528  bl 0x710392e290
7101bb952c  cbnz x0,0x7101bb9574
7101bb9530  adrp x8,0x7105332000
7101bb9534  ldr x0,[x8, #0xf00]
7101bb9538  cbz x0,0x7101bb9570
7101bb953c  mov w8,#0x10
7101bb9540  stur wzr,[x29, #-0x44]
7101bb9544  sub x1,x29,#0x44
7101bb9548  stur x8,[x29, #-0x50]
7101bb954c  ldr x8,[x0]
7101bb9550  ldr x8,[x8, #0x30]
7101bb9554  sub x2,x29,#0x50
7101bb9558  blr x8
7101bb955c  tbz w0,#0x0,0x7101bb9570
7101bb9560  mov w0,#0x10
7101bb9564  mov w1,#0x10
7101bb9568  bl 0x710392e290
7101bb956c  cbnz x0,0x7101bb9574
7101bb9570  mov x0,xzr
7101bb9574  sub x8,x29,#0x80
7101bb9578  cmp x8,x21
7101bb957c  stp xzr,xzr,[x0]
7101bb9580  stur x0,[x29, #-0x78]
7101bb9584  b.eq 0x7101bb9744
7101bb9588  ldr x8,[x21, #0x8]
7101bb958c  ldp x9,x8,[x8]
7101bb9590  cbz x8,0x7101bb9740
7101bb9594  add x10,x8,#0x8
7101bb9598  ldxr x11,[x10]
7101bb959c  add x11,x11,#0x1
7101bb95a0  stxr w12,x11,[x10]
7101bb95a4  cbnz w12,0x7101bb9598
7101bb95a8  ldr x21,[x0, #0x8]
7101bb95ac  stp x9,x8,[x0]
7101bb95b0  cbz x21,0x7101bb9744
7101bb95b4  add x8,x21,#0x8
7101bb95b8  ldaxr x9,[x8]
7101bb95bc  sub x10,x9,#0x1
7101bb95c0  stlxr w11,x10,[x8]
7101bb95c4  cbnz w11,0x7101bb95b8
7101bb95c8  cbnz x9,0x7101bb9744
7101bb95cc  ldr x8,[x21]
7101bb95d0  ldr x8,[x8, #0x10]
7101bb95d4  mov x0,x21
7101bb95d8  blr x8
7101bb95dc  mov x0,x21
7101bb95e0  bl 0x71039c2670
7101bb95e4  b 0x7101bb9744
7101bb95e8  ldr x8,[x19, #0xa78]
7101bb95ec  ldr x9,[x19, #0xa70]
7101bb95f0  fmov s0,0x3f800000
7101bb95f4  add x0,x19,#0xf8
7101bb95f8  sub x8,x8,x9
7101bb95fc  lsr x8,x8,#0x3
7101bb9600  add x24,x19,#0xa70
7101bb9604  str w8,[sp, #0x4]
7101bb9608  bl 0x710377aee0
7101bb960c  ldr x8,[x19, #0x3a0]
7101bb9610  ldr x8,[x8]
7101bb9614  cbz x8,0x7101bb98c8
7101bb9618  ldr x8,[x21, #0x268]
7101bb961c  ldr x0,[x8, #0x8]
7101bb9620  mov x1,#0x64e2
7101bb9624  movk x1,#0xbd35, LSL #16
7101bb9628  movk x1,#0x10, LSL #32
7101bb962c  bl 0x710327fb30
7101bb9630  mov x1,x0
7101bb9634  ldr x0,[x19, #0x8]
7101bb9638  mov w2,#0x15
7101bb963c  bl 0x710323f8d0
7101bb9640  mov x21,x0
7101bb9644  adrp x22,0x710523d000
7101bb9648  add x22,x22,#0xa08
7101bb964c  mov w0,#0x10
7101bb9650  mov w1,#0x10
7101bb9654  stur x22,[x29, #-0x80]
7101bb9658  bl 0x710392e290
7101bb965c  cbnz x0,0x7101bb96a4
7101bb9660  adrp x8,0x7105332000
7101bb9664  ldr x0,[x8, #0xf00]
7101bb9668  cbz x0,0x7101bb96a0
7101bb966c  mov w8,#0x10
7101bb9670  stur wzr,[x29, #-0x44]
7101bb9674  sub x1,x29,#0x44
7101bb9678  stur x8,[x29, #-0x50]
7101bb967c  ldr x8,[x0]
7101bb9680  ldr x8,[x8, #0x30]
7101bb9684  sub x2,x29,#0x50
7101bb9688  blr x8
7101bb968c  tbz w0,#0x0,0x7101bb96a0
7101bb9690  mov w0,#0x10
7101bb9694  mov w1,#0x10
7101bb9698  bl 0x710392e290
7101bb969c  cbnz x0,0x7101bb96a4
7101bb96a0  mov x0,xzr
7101bb96a4  sub x8,x29,#0x80
7101bb96a8  cmp x8,x21
7101bb96ac  stp xzr,xzr,[x0]
7101bb96b0  stur x0,[x29, #-0x78]
7101bb96b4  b.eq 0x7101bb97bc
7101bb96b8  ldr x8,[x21, #0x8]
7101bb96bc  ldp x9,x8,[x8]
7101bb96c0  cbz x8,0x7101bb97b8
7101bb96c4  add x10,x8,#0x8
7101bb96c8  ldxr x11,[x10]
7101bb96cc  add x11,x11,#0x1
7101bb96d0  stxr w12,x11,[x10]
7101bb96d4  cbnz w12,0x7101bb96c8
7101bb96d8  ldr x21,[x0, #0x8]
7101bb96dc  stp x9,x8,[x0]
7101bb96e0  cbz x21,0x7101bb97bc
7101bb96e4  add x8,x21,#0x8
7101bb96e8  ldaxr x9,[x8]
7101bb96ec  sub x10,x9,#0x1
7101bb96f0  stlxr w11,x10,[x8]
7101bb96f4  cbnz w11,0x7101bb96e8
7101bb96f8  cbnz x9,0x7101bb97bc
7101bb96fc  ldr x8,[x21]
7101bb9700  ldr x8,[x8, #0x10]
7101bb9704  mov x0,x21
7101bb9708  blr x8
7101bb970c  mov x0,x21
7101bb9710  bl 0x71039c2670
7101bb9714  b 0x7101bb97bc
7101bb9718  ldr x8,[x19, #0xa60]
7101bb971c  ldr x9,[x19, #0xa58]
7101bb9720  fmov s0,0x3f800000
7101bb9724  add x0,x19,#0xe8
7101bb9728  sub x8,x8,x9
7101bb972c  lsr x8,x8,#0x3
7101bb9730  add x24,x19,#0xa58
7101bb9734  str w8,[sp, #0x4]
7101bb9738  bl 0x710377aee0
7101bb973c  b 0x7101bb98c8
7101bb9740  stp x9,x8,[x0]
7101bb9744  ldr x0,[x19, #0x3a0]
7101bb9748  sub x1,x29,#0x80
7101bb974c  bl 0x7103778b80
7101bb9750  ldur x21,[x29, #-0x78]
7101bb9754  stp x22,xzr,[x29, #-0x80]
7101bb9758  cbz x21,0x7101bb98c8
7101bb975c  ldr x22,[x21, #0x8]
7101bb9760  stp xzr,xzr,[x21]
7101bb9764  cbz x22,0x7101bb98c0
7101bb9768  add x8,x22,#0x8
7101bb976c  ldaxr x9,[x8]
7101bb9770  sub x10,x9,#0x1
7101bb9774  stlxr w11,x10,[x8]
7101bb9778  cbnz w11,0x7101bb976c
7101bb977c  cbnz x9,0x7101bb9798
7101bb9780  ldr x8,[x22]
7101bb9784  ldr x8,[x8, #0x10]
7101bb9788  mov x0,x22
7101bb978c  blr x8
7101bb9790  mov x0,x22
7101bb9794  bl 0x71039c2670
7101bb9798  ldr x22,[x21, #0x8]
7101bb979c  cbz x22,0x7101bb98c0
7101bb97a0  add x8,x22,#0x8
7101bb97a4  ldaxr x9,[x8]
7101bb97a8  sub x10,x9,#0x1
7101bb97ac  stlxr w11,x10,[x8]
7101bb97b0  cbnz w11,0x7101bb97a4
7101bb97b4  b 0x7101bb98a4
7101bb97b8  stp x9,x8,[x0]
7101bb97bc  ldr x0,[x19, #0x3a0]
7101bb97c0  sub x1,x29,#0x80
7101bb97c4  bl 0x7103778b80
7101bb97c8  ldur x21,[x29, #-0x78]
7101bb97cc  stp x22,xzr,[x29, #-0x80]
7101bb97d0  cbz x21,0x7101bb98c8
7101bb97d4  ldr x22,[x21, #0x8]
7101bb97d8  stp xzr,xzr,[x21]
7101bb97dc  cbz x22,0x7101bb98c0
7101bb97e0  add x8,x22,#0x8
7101bb97e4  ldaxr x9,[x8]
7101bb97e8  sub x10,x9,#0x1
7101bb97ec  stlxr w11,x10,[x8]
7101bb97f0  cbnz w11,0x7101bb97e4
7101bb97f4  cbnz x9,0x7101bb9810
7101bb97f8  ldr x8,[x22]
7101bb97fc  ldr x8,[x8, #0x10]
7101bb9800  mov x0,x22
7101bb9804  blr x8
7101bb9808  mov x0,x22
7101bb980c  bl 0x71039c2670
7101bb9810  ldr x22,[x21, #0x8]
7101bb9814  cbz x22,0x7101bb98c0
7101bb9818  add x8,x22,#0x8
7101bb981c  ldaxr x9,[x8]
7101bb9820  sub x10,x9,#0x1
7101bb9824  stlxr w11,x10,[x8]
7101bb9828  cbnz w11,0x7101bb981c
7101bb982c  b 0x7101bb98a4
7101bb9830  stp x9,x8,[x0]
7101bb9834  ldr x0,[x19, #0x3a0]
7101bb9838  sub x1,x29,#0x80
7101bb983c  bl 0x7103778b80
7101bb9840  ldur x21,[x29, #-0x78]
7101bb9844  stp x22,xzr,[x29, #-0x80]
7101bb9848  cbz x21,0x7101bb98c8
7101bb984c  ldr x22,[x21, #0x8]
7101bb9850  stp xzr,xzr,[x21]
7101bb9854  cbz x22,0x7101bb98c0
7101bb9858  add x8,x22,#0x8
7101bb985c  ldaxr x9,[x8]
7101bb9860  sub x10,x9,#0x1
7101bb9864  stlxr w11,x10,[x8]
7101bb9868  cbnz w11,0x7101bb985c
7101bb986c  cbnz x9,0x7101bb9888
7101bb9870  ldr x8,[x22]
7101bb9874  ldr x8,[x8, #0x10]
7101bb9878  mov x0,x22
7101bb987c  blr x8
7101bb9880  mov x0,x22
7101bb9884  bl 0x71039c2670
7101bb9888  ldr x22,[x21, #0x8]
7101bb988c  cbz x22,0x7101bb98c0
7101bb9890  add x8,x22,#0x8
7101bb9894  ldaxr x9,[x8]
7101bb9898  sub x10,x9,#0x1
7101bb989c  stlxr w11,x10,[x8]
7101bb98a0  cbnz w11,0x7101bb9894
7101bb98a4  cbnz x9,0x7101bb98c0
7101bb98a8  ldr x8,[x22]
7101bb98ac  ldr x8,[x8, #0x10]
7101bb98b0  mov x0,x22
7101bb98b4  blr x8
7101bb98b8  mov x0,x22
7101bb98bc  bl 0x71039c2670
7101bb98c0  mov x0,x21
7101bb98c4  bl 0x710392eb40
7101bb98c8  mov x9,sp
7101bb98cc  adrp x8,0x71050ab000
7101bb98d0  add x8,x8,#0xd10
7101bb98d4  add x1,x9,#0x30
7101bb98d8  sub x21,x29,#0x80
7101bb98dc  stur x21,[x29, #-0x60]
7101bb98e0  sub x0,x29,#0x80
7101bb98e4  stp x8,x19,[x29, #-0x80]
7101bb98e8  bl 0x71003cb050
7101bb98ec  ldur x0,[x29, #-0x60]
7101bb98f0  cmp x21,x0
7101bb98f4  b.eq 0x7101bb9908
7101bb98f8  cbz x0,0x7101bb9914
7101bb98fc  ldr x8,[x0]
7101bb9900  ldr x8,[x8, #0x28]
7101bb9904  b 0x7101bb9910
7101bb9908  ldr x8,[x0]
7101bb990c  ldr x8,[x8, #0x20]
7101bb9910  blr x8
7101bb9914  ldr x21,[x19, #0xab8]
7101bb9918  ldr x23,[x19, #0xac0]
7101bb991c  add x22,x19,#0xab8
7101bb9920  ldrsw x25,[sp, #0x4]
7101bb9924  cmp x23,x21
7101bb9928  b.eq 0x7101bb994c
7101bb992c  ldr x8,[x23, #-0x10]!
7101bb9930  ldr x8,[x8]
7101bb9934  mov x0,x23
7101bb9938  blr x8
7101bb993c  cmp x21,x23
7101bb9940  b.ne 0x7101bb992c
7101bb9944  ldr x8,[x22]
7101bb9948  b 0x7101bb9950
7101bb994c  mov x8,x21
7101bb9950  sub x9,x21,x8
7101bb9954  asr x9,x9,#0x4
7101bb9958  cmp x9,x25
7101bb995c  str x21,[x19, #0xac0]
7101bb9960  b.cs 0x7101bb9974
7101bb9964  sub x1,x25,x9
7101bb9968  mov x0,x22
7101bb996c  bl 0x7101bb9cd0
7101bb9970  b 0x7101bb99a0
7101bb9974  b.ls 0x7101bb99a0
7101bb9978  add x22,x8,x25, LSL #0x4
7101bb997c  cmp x22,x21
7101bb9980  b.eq 0x7101bb999c
7101bb9984  ldr x8,[x21, #-0x10]!
7101bb9988  ldr x8,[x8]
7101bb998c  mov x0,x21
7101bb9990  blr x8
7101bb9994  cmp x22,x21
7101bb9998  b.ne 0x7101bb9984
7101bb999c  str x22,[x19, #0xac0]
7101bb99a0  mov w8,#0x1
7101bb99a4  strb w8,[x19, #0xad4]
7101bb99a8  ldr x8,[x19, #0x18]
7101bb99ac  str w20,[x19, #0xad0]
7101bb99b0  str w20,[x19, #0xb74]
7101bb99b4  ldr x8,[x8]
7101bb99b8  add x21,x19,#0x7c0
7101bb99bc  mov x0,x21
7101bb99c0  add x1,x8,#0x8
7101bb99c4  adrp x2,0x710424f000
7101bb99c8  add x2,x2,#0x2e1
7101bb99cc  mov x3,sp
7101bb99d0  mov x4,x19
7101bb99d4  bl 0x7103781a20
7101bb99d8  ldr w8,[x19, #0xba8]
7101bb99dc  cmp w8,w20
7101bb99e0  strb wzr,[x19, #0xad4]
7101bb99e4  b.ne 0x7101bb99f8
7101bb99e8  cmp w20,#0x3
7101bb99ec  b.hi 0x7101bb9bfc
7101bb99f0  mov w8,w20
7101bb99f4  b 0x7101bb9a30
7101bb99f8  cmp w20,#0x4
7101bb99fc  b.cs 0x7101bb9bfc
7101bb9a00  orr w8,wzr,#0xc
7101bb9a04  umaddl x8,w20,w8,x19
7101bb9a08  mov w9,#0x1
7101bb9a0c  strb w9,[x8, #0xb80]
7101bb9a10  ldr w10,[x19, #0xba8]
7101bb9a14  cmp w10,#0x4
7101bb9a18  b.cs 0x7101bb9bfc
7101bb9a1c  orr w11,wzr,#0xc
7101bb9a20  madd x10,x10,x11,x19
7101bb9a24  mov w8,w20
7101bb9a28  strb w9,[x10, #0xb80]
7101bb9a2c  str w20,[x19, #0xba8]
7101bb9a30  orr w9,wzr,#0xc
7101bb9a34  madd x8,x8,x9,x19
7101bb9a38  ldrsw x20,[x8, #0xb78]
7101bb9a3c  cmn w20,#0x1
7101bb9a40  b.eq 0x7101bb9a64
7101bb9a44  ldrb w8,[x19, #0xbac]
7101bb9a48  cbz w8,0x7101bb9aa0
7101bb9a4c  ldr x0,[x21]
7101bb9a50  ldr x8,[x0]
7101bb9a54  ldr x8,[x8, #0x70]
7101bb9a58  mov w1,wzr
7101bb9a5c  blr x8
7101bb9a60  b 0x7101bb9af0
7101bb9a64  add x8,x8,#0xb78
7101bb9a68  mov w3,#0x1
7101bb9a6c  mov x0,x21
7101bb9a70  mov w1,wzr
7101bb9a74  mov w2,wzr
7101bb9a78  str wzr,[x8]
7101bb9a7c  strb wzr,[x19, #0xbac]
7101bb9a80  bl 0x7103783c10
7101bb9a84  ldp x8,x9,[x24]
7101bb9a88  cmp x9,x8
7101bb9a8c  b.eq 0x7101bb9ae4
7101bb9a90  ldr x8,[x8]
7101bb9a94  tst x8,#0xffffffffff
7101bb9a98  b.ne 0x7101bb9ad4
7101bb9a9c  b 0x7101bb9af0
7101bb9aa0  mov w3,#0x1
7101bb9aa4  mov x0,x21
7101bb9aa8  mov w1,w20
7101bb9aac  mov w2,wzr
7101bb9ab0  bl 0x7103783c10
7101bb9ab4  ldp x8,x9,[x24]
7101bb9ab8  sub x9,x9,x8
7101bb9abc  asr x9,x9,#0x3
7101bb9ac0  cmp x9,x20
7101bb9ac4  b.ls 0x7101bb9ae4
7101bb9ac8  ldr x8,[x8, x20, LSL #0x3]
7101bb9acc  tst x8,#0xffffffffff
7101bb9ad0  b.eq 0x7101bb9af0
7101bb9ad4  and x8,x8,#-0x100000000000000
7101bb9ad8  orr x9,xzr,#0x1e00000000000000
7101bb9adc  cmp x8,x9
7101bb9ae0  b.ne 0x7101bb9af0
7101bb9ae4  fmov s0,0x3f800000
7101bb9ae8  add x0,x19,#0x198
7101bb9aec  bl 0x710377aee0
7101bb9af0  ldr x0,[sp, #0x110]
7101bb9af4  mov x8,sp
7101bb9af8  add x8,x8,#0xf0
7101bb9afc  cmp x8,x0
7101bb9b00  b.eq 0x7101bb9b14
7101bb9b04  cbz x0,0x7101bb9b20
7101bb9b08  ldr x8,[x0]
7101bb9b0c  ldr x8,[x8, #0x28]
7101bb9b10  b 0x7101bb9b1c
7101bb9b14  ldr x8,[x0]
7101bb9b18  ldr x8,[x8, #0x20]
7101bb9b1c  blr x8
7101bb9b20  ldr x0,[sp, #0xe0]
7101bb9b24  mov x8,sp
7101bb9b28  add x8,x8,#0xc0
7101bb9b2c  cmp x8,x0
7101bb9b30  b.eq 0x7101bb9b44
7101bb9b34  cbz x0,0x7101bb9b50
7101bb9b38  ldr x8,[x0]
7101bb9b3c  ldr x8,[x8, #0x28]
7101bb9b40  b 0x7101bb9b4c
7101bb9b44  ldr x8,[x0]
7101bb9b48  ldr x8,[x8, #0x20]
7101bb9b4c  blr x8
7101bb9b50  ldr x0,[sp, #0xb0]
7101bb9b54  mov x8,sp
7101bb9b58  add x8,x8,#0x90
7101bb9b5c  cmp x8,x0
7101bb9b60  b.eq 0x7101bb9b74
7101bb9b64  cbz x0,0x7101bb9b80
7101bb9b68  ldr x8,[x0]
7101bb9b6c  ldr x8,[x8, #0x28]
7101bb9b70  b 0x7101bb9b7c
7101bb9b74  ldr x8,[x0]
7101bb9b78  ldr x8,[x8, #0x20]
7101bb9b7c  blr x8
7101bb9b80  ldr x0,[sp, #0x80]
7101bb9b84  mov x8,sp
7101bb9b88  add x8,x8,#0x60
7101bb9b8c  cmp x8,x0
7101bb9b90  b.eq 0x7101bb9ba4
7101bb9b94  cbz x0,0x7101bb9bb0
7101bb9b98  ldr x8,[x0]
7101bb9b9c  ldr x8,[x8, #0x28]
7101bb9ba0  b 0x7101bb9bac
7101bb9ba4  ldr x8,[x0]
7101bb9ba8  ldr x8,[x8, #0x20]
7101bb9bac  blr x8
7101bb9bb0  ldr x0,[sp, #0x50]
7101bb9bb4  mov x8,sp
7101bb9bb8  add x8,x8,#0x30
7101bb9bbc  cmp x8,x0
7101bb9bc0  b.eq 0x7101bb9bd4
7101bb9bc4  cbz x0,0x7101bb9be0
7101bb9bc8  ldr x8,[x0]
7101bb9bcc  ldr x8,[x8, #0x28]
7101bb9bd0  b 0x7101bb9bdc
7101bb9bd4  ldr x8,[x0]
7101bb9bd8  ldr x8,[x8, #0x20]
7101bb9bdc  blr x8
7101bb9be0  ldp x29,x30,[sp, #0x1a0]
7101bb9be4  ldp x20,x19,[sp, #0x190]
7101bb9be8  ldp x22,x21,[sp, #0x180]
7101bb9bec  ldp x24,x23,[sp, #0x170]
7101bb9bf0  ldp x28,x25,[sp, #0x160]
7101bb9bf4  add sp,sp,#0x1b0
7101bb9bf8  ret
7101bb9bfc  bl 0x71039c2650
