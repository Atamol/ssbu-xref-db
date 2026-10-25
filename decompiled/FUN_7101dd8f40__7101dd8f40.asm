// addr:      7101dd8f40
// offset:    0x1dd8f40
// name:      FUN_7101dd8f40
// mangled:   
// size:      1468

7101dd8f40  sub sp,sp,#0x90
7101dd8f44  stp x22,x21,[sp, #0x60]
7101dd8f48  stp x20,x19,[sp, #0x70]
7101dd8f4c  stp x29,x30,[sp, #0x80]
7101dd8f50  add x29,sp,#0x80
7101dd8f54  ldr w8,[x0, #0x80]
7101dd8f58  mov x19,x0
7101dd8f5c  cmp w8,#0x2
7101dd8f60  b.eq 0x7101dd90b8
7101dd8f64  cmp w8,#0x1
7101dd8f68  b.ne 0x7101dd9458
7101dd8f6c  adrp x8,0x7105329000
7101dd8f70  ldr x8,[x8, #0xf98]
7101dd8f74  ldr x8,[x8]
7101dd8f78  ldr x0,[x8, #0x20]
7101dd8f7c  mov w1,wzr
7101dd8f80  bl 0x710259d3a0
7101dd8f84  tbz w0,#0x0,0x7101dd9454
7101dd8f88  add x20,x19,#0x60
7101dd8f8c  adrp x1,0x71043e0000
7101dd8f90  add x1,x1,#0x732
7101dd8f94  sub x8,x29,#0x30
7101dd8f98  mov x0,x20
7101dd8f9c  bl 0x7103776910
7101dd8fa0  ldur x21,[x29, #-0x28]
7101dd8fa4  ldr x0,[x21]
7101dd8fa8  bl 0x710377aae0
7101dd8fac  cbz x0,0x7101dd8fb8
7101dd8fb0  mov w8,#0x1
7101dd8fb4  strb w8,[x0, #0x13a]
7101dd8fb8  adrp x22,0x710523d000
7101dd8fbc  add x22,x22,#0x9a8
7101dd8fc0  stp x22,xzr,[x29, #-0x30]
7101dd8fc4  cbz x21,0x7101dd8fd0
7101dd8fc8  mov x0,x21
7101dd8fcc  bl 0x710392eb40
7101dd8fd0  adrp x1,0x7104422000
7101dd8fd4  add x1,x1,#0x881
7101dd8fd8  sub x8,x29,#0x30
7101dd8fdc  mov x0,x20
7101dd8fe0  bl 0x7103776640
7101dd8fe4  adrp x1,0x7104441000
7101dd8fe8  add x1,x1,#0x875
7101dd8fec  add x8,sp,#0x40
7101dd8ff0  sub x0,x29,#0x30
7101dd8ff4  bl 0x7103776910
7101dd8ff8  ldr x20,[sp, #0x48]
7101dd8ffc  mov w1,#0x1
7101dd9000  mov x0,x20
7101dd9004  bl 0x71037790a0
7101dd9008  stp x22,xzr,[sp, #0x40]
7101dd900c  cbz x20,0x7101dd9018
7101dd9010  mov x0,x20
7101dd9014  bl 0x710392eb40
7101dd9018  ldrh w1,[x19, #0x86]
7101dd901c  sub x0,x29,#0x30
7101dd9020  mov w3,#0x1
7101dd9024  mov w4,#0x1
7101dd9028  mov w2,wzr
7101dd902c  bl 0x71025ae6d0
7101dd9030  ldrh w1,[x19, #0x86]
7101dd9034  sub x0,x29,#0x30
7101dd9038  mov w2,#0x1
7101dd903c  bl 0x71025af7f0
7101dd9040  ldur x8,[x29, #-0x28]
7101dd9044  ldr x8,[x8, #0x8]
7101dd9048  cbz x8,0x7101dd9060
7101dd904c  ldr x8,[x8, #0x18]
7101dd9050  cbz x8,0x7101dd9060
7101dd9054  ldrb w9,[x8, #0x58]
7101dd9058  orr w9,w9,#0x1
7101dd905c  strb w9,[x8, #0x58]
7101dd9060  ldr x20,[x19, #0x40]
7101dd9064  mov w8,#0x2
7101dd9068  str w8,[x19, #0x80]
7101dd906c  cbz x20,0x7101dd9414
7101dd9070  ldr x8,[x19, #0x50]
7101dd9074  ldr x8,[x8]
7101dd9078  ldr x8,[x8, #0x10]
7101dd907c  ldr x0,[x8, #0x8]
7101dd9080  cbz x0,0x7101dd90a8
7101dd9084  adrp x1,0x71042e7000
7101dd9088  add x1,x1,#0x6f0
7101dd908c  bl 0x71037964b0
7101dd9090  cbz x0,0x7101dd90a8
7101dd9094  ldr x8,[x0]
7101dd9098  ldr x8,[x8, #0x1a0]
7101dd909c  fmov s0,wzr
7101dd90a0  blr x8
7101dd90a4  ldr x20,[x19, #0x40]
7101dd90a8  ldr x8,[x20]
7101dd90ac  cbz x8,0x7101dd9298
7101dd90b0  ldr x0,[x8]
7101dd90b4  b 0x7101dd929c
7101dd90b8  ldr x8,[x19, #0x40]
7101dd90bc  ldr x0,[x8]
7101dd90c0  bl 0x7103376860
7101dd90c4  ldr x8,[x19, #0x40]
7101dd90c8  ldr x8,[x8]
7101dd90cc  cbz x8,0x7101dd90d8
7101dd90d0  ldr x8,[x8, #0x8]
7101dd90d4  cbnz x8,0x7101dd90e0
7101dd90d8  orr w8,wzr,#0x3
7101dd90dc  str w8,[x19, #0x80]
7101dd90e0  ldr x8,[x19, #0x50]
7101dd90e4  ldr x8,[x8]
7101dd90e8  ldr x8,[x8]
7101dd90ec  ldr x8,[x8, #0x600]
7101dd90f0  ldrb w9,[x8, #0x4aa]
7101dd90f4  cbz w9,0x7101dd9454
7101dd90f8  ldrb w9,[x8, #0x1ac]
7101dd90fc  tbnz w9,#0x1,0x7101dd9108
7101dd9100  ldrb w8,[x8, #0x1a8]
7101dd9104  tbz w8,#0x1,0x7101dd9454
7101dd9108  ldr x0,[x19, #0xb8]
7101dd910c  mov w21,#0x6500
7101dd9110  movk w21,#0x87, LSL #16
7101dd9114  cbz x0,0x7101dd9174
7101dd9118  ldr x8,[x0]
7101dd911c  ldr x8,[x8, #0x20]
7101dd9120  blr x8
7101dd9124  tbnz w0,#0x0,0x7101dd9174
7101dd9128  adrp x8,0x710593b000
7101dd912c  ldr x8,[x8, #0x438]
7101dd9130  ldr x8,[x8]
7101dd9134  ldrb w8,[x8, #0x1]
7101dd9138  cbz w8,0x7101dd9174
7101dd913c  ldr w8,[x19, #0xc4]
7101dd9140  cmp w8,w21
7101dd9144  b.ne 0x7101dd9174
7101dd9148  adrp x8,0x7106dd5000
7101dd914c  ldrb w8,[x8, #0x3a8]
7101dd9150  cmp w8,#0x1
7101dd9154  b.ne 0x7101dd9174
7101dd9158  adrp x9,0x7106dd5000
7101dd915c  ldr w8,[x19, #0xc0]
7101dd9160  ldr w9,[x9, #0x3ac]
7101dd9164  cmp w8,w9
7101dd9168  b.ne 0x7101dd9174
7101dd916c  ldrb w8,[x19, #0xc8]
7101dd9170  cbz w8,0x7101dd94bc
7101dd9174  ldrsw x8,[x19, #0xa0]
7101dd9178  cmn w8,#0x1
7101dd917c  b.eq 0x7101dd91d0
7101dd9180  cmp w8,#0xa
7101dd9184  b.cs 0x7101dd94f8
7101dd9188  adrp x9,0x7105339000
7101dd918c  ldr x9,[x9, #0x8d8]
7101dd9190  ldr x9,[x9, #0x8]
7101dd9194  add x8,x9,x8, LSL #0x3
7101dd9198  ldr x8,[x8, #0x8]
7101dd919c  ldr w9,[x8, #0xa8]
7101dd91a0  cmp w9,#0x1
7101dd91a4  b.eq 0x7101dd91b0
7101dd91a8  ldrb w9,[x8, #0xdd]
7101dd91ac  cbz w9,0x7101dd91d0
7101dd91b0  mov w9,#0x100
7101dd91b4  sturh w9,[x8, #0xdd]
7101dd91b8  ldrsw x9,[x8, #0xa4]
7101dd91bc  cmp w9,#0x13
7101dd91c0  b.cs 0x7101dd94f8
7101dd91c4  add x8,x8,x9, LSL #0x2
7101dd91c8  mov w9,#0x2
7101dd91cc  str w9,[x8, #0x58]
7101dd91d0  adrp x8,0x710532f000
7101dd91d4  ldr x8,[x8, #0x8d0]
7101dd91d8  ldr x0,[x8, #0x8]
7101dd91dc  ldrb w8,[x0, #0x191]
7101dd91e0  cbnz w8,0x7101dd9260
7101dd91e4  mov x20,#0x23f5
7101dd91e8  movk x20,#0x57a5, LSL #16
7101dd91ec  movk x20,#0xf, LSL #32
7101dd91f0  mov w2,#0x4
7101dd91f4  mov x1,x20
7101dd91f8  bl 0x7103313f20
7101dd91fc  tbz w0,#0x0,0x7101dd9260
7101dd9200  mov x0,sp
7101dd9204  mov x1,x20
7101dd9208  bl 0x71024076d0
7101dd920c  ldr x8,[sp, #0x10]
7101dd9210  adrp x9,0x7104f73000
7101dd9214  add x9,x9,#0xd50
7101dd9218  str x9,[sp, #0x8]
7101dd921c  cbz x8,0x7101dd9284
7101dd9220  adrp x8,0x7106dd5000
7101dd9224  ldrb w8,[x8, #0x3a8]
7101dd9228  cmp w8,#0x1
7101dd922c  b.ne 0x7101dd9284
7101dd9230  adrp x9,0x7106dd5000
7101dd9234  ldr w8,[sp, #0x18]
7101dd9238  ldr w9,[x9, #0x3ac]
7101dd923c  cmp w8,w9
7101dd9240  b.ne 0x7101dd9284
7101dd9244  ldr x8,[sp, #0x10]
7101dd9248  ldr wzr,[x8, #0x38]!
7101dd924c  ldaxr w9,[x8]
7101dd9250  sub w9,w9,#0x1
7101dd9254  stlxr w10,w9,[x8]
7101dd9258  cbnz w10,0x7101dd924c
7101dd925c  b 0x7101dd9284
7101dd9260  mov x8,#-0x1
7101dd9264  stp x8,xzr,[sp, #0x28]
7101dd9268  adrp x8,0x7104f73000
7101dd926c  add x8,x8,#0xd50
7101dd9270  stp wzr,w21,[sp, #0x18]
7101dd9274  strb wzr,[sp, #0x20]
7101dd9278  str wzr,[sp]
7101dd927c  str xzr,[sp, #0x38]
7101dd9280  stp x8,xzr,[sp, #0x8]
7101dd9284  orr w8,wzr,#0x3
7101dd9288  str xzr,[sp, #0x10]
7101dd928c  strb wzr,[sp, #0x20]
7101dd9290  str w8,[x19, #0x80]
7101dd9294  b 0x7101dd94a8
7101dd9298  mov x0,xzr
7101dd929c  ldr x2,[x19, #0x50]
7101dd92a0  adrp x1,0x7104270000
7101dd92a4  add x1,x1,#0x556
7101dd92a8  bl 0x71033743c0
7101dd92ac  ldr x8,[x19, #0x40]
7101dd92b0  ldr x0,[x8]
7101dd92b4  cbz x0,0x7101dd92e0
7101dd92b8  ldp x8,x9,[x19, #0x88]
7101dd92bc  sub x8,x9,x8
7101dd92c0  lsr x3,x8,#0x3
7101dd92c4  adrp x1,0x710438d000
7101dd92c8  add x1,x1,#0x81
7101dd92cc  adrp x2,0x71042b2000
7101dd92d0  add x2,x2,#0xa84
7101dd92d4  bl 0x7103375650
7101dd92d8  ldr x8,[x19, #0x40]
7101dd92dc  ldr x0,[x8]
7101dd92e0  adrp x1,0x710424f000
7101dd92e4  add x1,x1,#0xad9
7101dd92e8  adrp x2,0x71043cd000
7101dd92ec  add x2,x2,#0xb7b
7101dd92f0  mov w3,#0x1
7101dd92f4  bl 0x7103375650
7101dd92f8  ldr x20,[x19, #0x40]
7101dd92fc  ldr x8,[x20]
7101dd9300  ldr x21,[x8]
7101dd9304  str wzr,[x8, #0x10]
7101dd9308  ldr x8,[x21, #0x10]
7101dd930c  mov w9,#0x48
7101dd9310  str x21,[x8]
7101dd9314  str w9,[x8, #0x8]
7101dd9318  ldp x9,x8,[x21, #0x10]
7101dd931c  add x10,x9,#0x10
7101dd9320  str x10,[x21, #0x10]
7101dd9324  ldr x10,[x8, #0xc8]
7101dd9328  str x9,[x21, #0x10]
7101dd932c  cmp x10,x21
7101dd9330  b.eq 0x7101dd9354
7101dd9334  adrp x1,0x71042d6000
7101dd9338  add x1,x1,#0x896
7101dd933c  mov x0,x21
7101dd9340  bl 0x71038f4b20
7101dd9344  orr w1,wzr,#0xfffffffe
7101dd9348  mov x0,x21
7101dd934c  bl 0x71038f4fc0
7101dd9350  b 0x7101dd93cc
7101dd9354  ldr x8,[x8, #0x40]
7101dd9358  ldr w9,[x8, #0xc]
7101dd935c  cmp w9,#0x2
7101dd9360  b.cc 0x7101dd9370
7101dd9364  ldr x8,[x8, #0x10]
7101dd9368  add x1,x8,#0x10
7101dd936c  b 0x7101dd93bc
7101dd9370  ldr x9,[x8, #0x18]
7101dd9374  ldrb w8,[x8, #0xb]
7101dd9378  mov w10,#0xffffffff
7101dd937c  lsl x8,x10,x8
7101dd9380  mvn w8,w8
7101dd9384  and x8,x8,#0x2
7101dd9388  add x1,x9,x8, LSL #0x5
7101dd938c  adrp x8,0x7104862000
7101dd9390  add x8,x8,#0x960
7101dd9394  ldr w9,[x1, #0x18]
7101dd9398  cmp w9,#0x13
7101dd939c  b.ne 0x7101dd93ac
7101dd93a0  ldr x9,[x1, #0x10]
7101dd93a4  cmp x9,#0x2
7101dd93a8  b.eq 0x7101dd93bc
7101dd93ac  ldrsw x9,[x1, #0x1c]
7101dd93b0  add x1,x1,x9, LSL #0x5
7101dd93b4  cbnz w9,0x7101dd9394
7101dd93b8  mov x1,x8
7101dd93bc  adrp x2,0x71042d6000
7101dd93c0  add x2,x2,#0x896
7101dd93c4  mov x0,x21
7101dd93c8  bl 0x71038f4d40
7101dd93cc  ldr x9,[x21, #0x10]
7101dd93d0  sub x8,x9,#0x10
7101dd93d4  adrp x10,0x7104862000
7101dd93d8  add x10,x10,#0x960
7101dd93dc  cmp x8,x10
7101dd93e0  b.eq 0x7101dd9404
7101dd93e4  ldur w9,[x9, #-0x8]
7101dd93e8  and w9,w9,#0xf
7101dd93ec  cmp w9,#0x6
7101dd93f0  b.ne 0x7101dd9404
7101dd93f4  mov x0,x20
7101dd93f8  mov w1,wzr
7101dd93fc  bl 0x7103377130
7101dd9400  b 0x7101dd9408
7101dd9404  str x8,[x21, #0x10]
7101dd9408  ldr x8,[x19, #0x40]
7101dd940c  ldr x0,[x8]
7101dd9410  bl 0x7103376980
7101dd9414  adrp x8,0x710532f000
7101dd9418  ldr x8,[x8, #0x8d0]
7101dd941c  ldr x0,[x8, #0x8]
7101dd9420  mov w1,wzr
7101dd9424  bl 0x7103313da0
7101dd9428  ldur x20,[x29, #-0x28]
7101dd942c  adrp x8,0x710523d000
7101dd9430  add x8,x8,#0x988
7101dd9434  stp x8,xzr,[x29, #-0x30]
7101dd9438  cbz x20,0x7101dd9454
7101dd943c  ldr x0,[x20, #0x18]
7101dd9440  stp x22,xzr,[x20, #0x10]
7101dd9444  cbz x0,0x7101dd944c
7101dd9448  bl 0x710392eb40
7101dd944c  mov x0,x20
7101dd9450  bl 0x710392eb40
7101dd9454  ldr w8,[x19, #0x80]
7101dd9458  cmp w8,#0x4
7101dd945c  b.ne 0x7101dd94a8
7101dd9460  ldr x8,[x19, #0x68]
7101dd9464  ldr x0,[x8, #0x8]
7101dd9468  cbz x0,0x7101dd948c
7101dd946c  adrp x1,0x710428f000
7101dd9470  add x1,x1,#0xf7d
7101dd9474  bl 0x71037964b0
7101dd9478  cbz x0,0x7101dd948c
7101dd947c  ldr x8,[x0]
7101dd9480  ldr x8,[x8, #0x138]
7101dd9484  blr x8
7101dd9488  tbz w0,#0x0,0x7101dd94a8
7101dd948c  ldr x8,[x19, #0x50]
7101dd9490  ldr x0,[x8]
7101dd9494  bl 0x7103775fa0
7101dd9498  ldr x8,[x19, #0x58]
7101dd949c  ldr x0,[x8]
7101dd94a0  bl 0x7103775fa0
7101dd94a4  str wzr,[x19, #0x80]
7101dd94a8  ldp x29,x30,[sp, #0x80]
7101dd94ac  ldp x20,x19,[sp, #0x70]
7101dd94b0  ldp x22,x21,[sp, #0x60]
7101dd94b4  add sp,sp,#0x90
7101dd94b8  ret
7101dd94bc  ldr x0,[x19, #0xb8]
7101dd94c0  cbz x0,0x7101dd9174
7101dd94c4  ldr x8,[x0]
7101dd94c8  ldr x8,[x8, #0x20]
7101dd94cc  blr x8
7101dd94d0  tbnz w0,#0x0,0x7101dd9174
7101dd94d4  ldr x0,[x19, #0xb8]
7101dd94d8  ldr x8,[x0]
7101dd94dc  ldr x8,[x8, #0x68]
7101dd94e0  blr x8
7101dd94e4  tbnz w0,#0x0,0x7101dd9174
7101dd94e8  add x0,x19,#0xa8
7101dd94ec  mov w1,wzr
7101dd94f0  bl 0x710373b540
7101dd94f4  b 0x7101dd9174
7101dd94f8  bl 0x71039c2650
