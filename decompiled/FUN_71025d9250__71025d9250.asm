// addr:      71025d9250
// offset:    0x25d9250
// name:      FUN_71025d9250
// mangled:   
// size:      17068

71025d9250  stp d13,d12,[sp, #-0x90]!
71025d9254  stp d11,d10,[sp, #0x10]
71025d9258  stp d9,d8,[sp, #0x20]
71025d925c  stp x28,x27,[sp, #0x30]
71025d9260  stp x26,x25,[sp, #0x40]
71025d9264  stp x24,x23,[sp, #0x50]
71025d9268  stp x22,x21,[sp, #0x60]
71025d926c  stp x20,x19,[sp, #0x70]
71025d9270  stp x29,x30,[sp, #0x80]
71025d9274  add x29,sp,#0x80
71025d9278  sub sp,sp,#0x200
71025d927c  ldr x8,[x0]
71025d9280  ldr x9,[x8, #0x540]
71025d9284  add x8,sp,#0xf0
71025d9288  mov x24,x0
71025d928c  blr x9
71025d9290  ldr x22,[x24, #0x1c0]
71025d9294  cbz x22,0x71025d9318
71025d9298  ldr x23,[x24, #0x1c8]
71025d929c  add x21,x24,#0x1c0
71025d92a0  add x19,x24,#0x1c8
71025d92a4  cmp x23,x22
71025d92a8  b.eq 0x71025da644
71025d92ac  ldur x20,[x23, #-0x8]
71025d92b0  sub x23,x23,#0x10
71025d92b4  cbz x20,0x71025d92d0
71025d92b8  add x8,x20,#0x8
71025d92bc  ldaxr x9,[x8]
71025d92c0  sub x10,x9,#0x1
71025d92c4  stlxr w11,x10,[x8]
71025d92c8  cbnz w11,0x71025d92bc
71025d92cc  cbz x9,0x71025d92dc
71025d92d0  cmp x23,x22
71025d92d4  b.ne 0x71025d92ac
71025d92d8  b 0x71025d92fc
71025d92dc  ldr x8,[x20]
71025d92e0  ldr x8,[x8, #0x10]
71025d92e4  mov x0,x20
71025d92e8  blr x8
71025d92ec  mov x0,x20
71025d92f0  bl 0x71039c2670
71025d92f4  cmp x23,x22
71025d92f8  b.ne 0x71025d92ac
71025d92fc  ldr x0,[x21]
71025d9300  str x22,[x19]
71025d9304  cbz x0,0x71025d930c
71025d9308  bl 0x710392eb40
71025d930c  stp xzr,xzr,[x21, #0x8]
71025d9310  str xzr,[x21]
71025d9314  b 0x71025d931c
71025d9318  add x19,x24,#0x1c8
71025d931c  ldp x8,x9,[sp, #0xf0]
71025d9320  str x8,[x24, #0x1c0]
71025d9324  str x9,[x19]
71025d9328  ldr x10,[sp, #0x100]
71025d932c  cmp x8,x9
71025d9330  str x10,[x24, #0x1d0]
71025d9334  b.eq 0x71025d9398
71025d9338  ldp x9,x8,[x8]
71025d933c  add x19,x24,#0x198
71025d9340  cbz x8,0x71025d9358
71025d9344  add x10,x8,#0x8
71025d9348  ldxr x11,[x10]
71025d934c  add x11,x11,#0x1
71025d9350  stxr w12,x11,[x10]
71025d9354  cbnz w12,0x71025d9348
71025d9358  ldr x20,[x24, #0x1a0]
71025d935c  stp x9,x8,[x24, #0x198]
71025d9360  cbz x20,0x71025d93e0
71025d9364  add x8,x20,#0x8
71025d9368  ldaxr x9,[x8]
71025d936c  sub x10,x9,#0x1
71025d9370  stlxr w11,x10,[x8]
71025d9374  cbnz w11,0x71025d9368
71025d9378  cbnz x9,0x71025d93e0
71025d937c  ldr x8,[x20]
71025d9380  ldr x8,[x8, #0x10]
71025d9384  mov x0,x20
71025d9388  blr x8
71025d938c  mov x0,x20
71025d9390  bl 0x71039c2670
71025d9394  b 0x71025d93e0
71025d9398  mov x1,#0xab3a
71025d939c  movk x1,#0x887d, LSL #16
71025d93a0  movk x1,#0x32, LSL #32
71025d93a4  add x0,sp,#0xf0
71025d93a8  bl 0x710353da30
71025d93ac  ldr w20,[sp, #0xf0]
71025d93b0  orr w19,wzr,#0xffffff
71025d93b4  cmp w20,w19
71025d93b8  b.eq 0x71025d93dc
71025d93bc  add x0,x24,#0x198
71025d93c0  add x1,sp,#0xf0
71025d93c4  bl 0x7102610650
71025d93c8  adrp x8,0x7105332000
71025d93cc  ldr x0,[x8, #0xf20]
71025d93d0  mov w1,w20
71025d93d4  bl 0x7103540b10
71025d93d8  str w19,[sp, #0xf0]
71025d93dc  add x19,x24,#0x198
71025d93e0  mov x0,x24
71025d93e4  mov w1,wzr
71025d93e8  bl 0x71025e46e0
71025d93ec  ldr x8,[x24]
71025d93f0  ldr x8,[x8, #0x548]
71025d93f4  mov x0,x24
71025d93f8  blr x8
71025d93fc  ldr x8,[x24]
71025d9400  ldr x8,[x8, #0x558]
71025d9404  mov x0,x24
71025d9408  blr x8
71025d940c  add x8,x24,#0x8
71025d9410  stp xzr,xzr,[sp, #0xf8]
71025d9414  str xzr,[sp, #0xf0]
71025d9418  str x19,[sp, #0x30]
71025d941c  stp x8,x19,[sp, #0x108]
71025d9420  ldp x9,x19,[x24, #0x1a8]
71025d9424  cmp x9,x19
71025d9428  str x24,[sp, #0xa0]
71025d942c  b.eq 0x71025d9564
71025d9430  mov x20,xzr
71025d9434  mov x8,xzr
71025d9438  mov x23,xzr
71025d943c  add x24,x9,#0x8
71025d9440  orr x25,xzr,#0xffffffffffffffe
71025d9444  b 0x71025d9450
71025d9448  ldr x8,[sp, #0x100]
71025d944c  add x24,x24,#0x8
71025d9450  ldur x27,[x24, #-0x8]
71025d9454  cmp x23,x8
71025d9458  b.cs 0x71025d9478
71025d945c  str x27,[x23]
71025d9460  ldr x8,[sp, #0xf8]
71025d9464  add x23,x8,#0x8
71025d9468  str x23,[sp, #0xf8]
71025d946c  cmp x19,x24
71025d9470  b.ne 0x71025d9448
71025d9474  b 0x71025d9564
71025d9478  sub x21,x23,x20
71025d947c  asr x28,x21,#0x3
71025d9480  add x9,x28,#0x1
71025d9484  lsr x10,x9,#0x3d
71025d9488  cbnz x10,0x71025dd4f0
71025d948c  sub x8,x8,x20
71025d9490  asr x10,x8,#0x3
71025d9494  cmp x10,x25
71025d9498  b.hi 0x71025d94b8
71025d949c  asr x8,x8,#0x2
71025d94a0  cmp x8,x9
71025d94a4  csel x26,x9,x8,cc
71025d94a8  cbz x26,0x71025d951c
71025d94ac  lsr x8,x26,#0x3d
71025d94b0  cbz x8,0x71025d94bc
71025d94b4  b 0x71025dd4f8
71025d94b8  orr x26,xzr,#0x1fffffffffffffff
71025d94bc  lsl x8,x26,#0x3
71025d94c0  cmp x8,#0x0
71025d94c4  csinc x23,x8,xzr,ne
71025d94c8  mov w0,#0x10
71025d94cc  mov x1,x23
71025d94d0  bl 0x710392e290
71025d94d4  mov x22,x0
71025d94d8  cbnz x0,0x71025d9520
71025d94dc  adrp x8,0x7105332000
71025d94e0  ldr x0,[x8, #0xf00]
71025d94e4  cbz x0,0x71025d951c
71025d94e8  str wzr,[sp, #0xc0]
71025d94ec  str x23,[sp, #0xd0]
71025d94f0  ldr x8,[x0]
71025d94f4  ldr x8,[x8, #0x30]
71025d94f8  add x1,sp,#0xc0
71025d94fc  add x2,sp,#0xd0
71025d9500  blr x8
71025d9504  tbz w0,#0x0,0x71025d951c
71025d9508  mov w0,#0x10
71025d950c  mov x1,x23
71025d9510  bl 0x710392e290
71025d9514  mov x22,x0
71025d9518  cbnz x0,0x71025d9520
71025d951c  mov x22,xzr
71025d9520  add x23,x22,x28, LSL #0x3
71025d9524  add x26,x22,x26, LSL #0x3
71025d9528  cmp x21,#0x1
71025d952c  str x27,[x23], #0x8
71025d9530  b.lt 0x71025d9544
71025d9534  mov x0,x22
71025d9538  mov x1,x20
71025d953c  mov x2,x21
71025d9540  bl 0x71039c00e0
71025d9544  stp x22,x23,[sp, #0xf0]
71025d9548  str x26,[sp, #0x100]
71025d954c  cbz x20,0x71025d9558
71025d9550  mov x0,x20
71025d9554  bl 0x710392eb40
71025d9558  mov x20,x22
71025d955c  cmp x19,x24
71025d9560  b.ne 0x71025d9448
71025d9564  ldr x24,[sp, #0xa0]
71025d9568  ldr x0,[x24, #0x308]
71025d956c  ldr x8,[x0]
71025d9570  ldr x8,[x8, #0x10]
71025d9574  add x1,sp,#0xf0
71025d9578  blr x8
71025d957c  ldr x0,[sp, #0xf0]
71025d9580  cbz x0,0x71025d958c
71025d9584  str x0,[sp, #0xf8]
71025d9588  bl 0x710392eb40
71025d958c  ldr x8,[x24]
71025d9590  ldr x8,[x8, #0x560]
71025d9594  mov x0,x24
71025d9598  blr x8
71025d959c  ldr x8,[x24]
71025d95a0  ldr x8,[x8, #0x568]
71025d95a4  mov x0,x24
71025d95a8  blr x8
71025d95ac  ldr x8,[x24]
71025d95b0  ldr x8,[x8, #0x570]
71025d95b4  mov x0,x24
71025d95b8  blr x8
71025d95bc  ldr x8,[x24]
71025d95c0  ldr x8,[x8, #0x578]
71025d95c4  mov x0,x24
71025d95c8  blr x8
71025d95cc  ldr x8,[x24]
71025d95d0  ldr x8,[x8, #0x580]
71025d95d4  mov x0,x24
71025d95d8  blr x8
71025d95dc  mov x1,#0xd7b2
71025d95e0  movk x1,#0x2741, LSL #16
71025d95e4  movk x1,#0x30, LSL #32
71025d95e8  add x0,sp,#0xa8
71025d95ec  bl 0x710353da30
71025d95f0  ldr w8,[sp, #0xa8]
71025d95f4  orr w9,wzr,#0xffffff
71025d95f8  cmp w8,w9
71025d95fc  b.eq 0x71025da6c8
71025d9600  ldr x0,[x24, #0x180]
71025d9604  add x22,x24,#0x180
71025d9608  cbz x0,0x71025d9610
71025d960c  bl 0x710392eb40
71025d9610  mov w1,#0x1b80
71025d9614  mov w0,#0x10
71025d9618  mov w20,#0x10
71025d961c  stp xzr,xzr,[x22]
71025d9620  bl 0x710392e290
71025d9624  cbnz x0,0x71025d966c
71025d9628  adrp x8,0x7105332000
71025d962c  ldr x0,[x8, #0xf00]
71025d9630  cbz x0,0x71025d9668
71025d9634  mov w8,#0x1b80
71025d9638  str wzr,[sp, #0xd0]
71025d963c  add x1,sp,#0xd0
71025d9640  str x8,[sp, #0xf0]
71025d9644  ldr x8,[x0]
71025d9648  ldr x8,[x8, #0x30]
71025d964c  add x2,sp,#0xf0
71025d9650  blr x8
71025d9654  tbz w0,#0x0,0x71025d9668
71025d9658  mov w1,#0x1b80
71025d965c  mov w0,#0x10
71025d9660  bl 0x710392e290
71025d9664  cbnz x0,0x71025d966c
71025d9668  mov x0,xzr
71025d966c  mov x9,#0x7a80
71025d9670  movk x9,#0xfb99, LSL #16
71025d9674  orr x10,xzr,#0x3f80000000000000
71025d9678  mov x8,#0x2b32
71025d967c  movk x8,#0x2483, LSL #16
71025d9680  str x10,[x0]
71025d9684  movk x9,#0x7, LSL #32
71025d9688  movk x8,#0x7, LSL #32
71025d968c  str x10,[x0, #0x280]
71025d9690  str x10,[x0, #0x320]
71025d9694  str x10,[x0, #0x3c0]
71025d9698  str x10,[x0, #0x460]
71025d969c  str x10,[x0, #0x500]
71025d96a0  orr w11,wzr,#0x3f800000
71025d96a4  orr w23,wzr,#0xffffff
71025d96a8  str x10,[x0, #0x5a0]
71025d96ac  str x10,[x0, #0x640]
71025d96b0  str x10,[x0, #0x6e0]
71025d96b4  str x10,[x0, #0x780]
71025d96b8  str x10,[x0, #0x12c0]
71025d96bc  str x10,[x0, #0x1220]
71025d96c0  str x10,[x0, #0x1180]
71025d96c4  str x10,[x0, #0x10e0]
71025d96c8  str x10,[x0, #0x1040]
71025d96cc  str x10,[x0, #0xfa0]
71025d96d0  str x10,[x0, #0xf00]
71025d96d4  str x10,[x0, #0xe60]
71025d96d8  str x10,[x0, #0xdc0]
71025d96dc  str x10,[x0, #0xd20]
71025d96e0  str x10,[x0, #0xc80]
71025d96e4  str x10,[x0, #0xbe0]
71025d96e8  str x10,[x0, #0xb40]
71025d96ec  str x10,[x0, #0xaa0]
71025d96f0  str x10,[x0, #0xa00]
71025d96f4  str x10,[x0, #0x960]
71025d96f8  str x10,[x0, #0x8c0]
71025d96fc  str x10,[x0, #0x820]
71025d9700  str x10,[x0, #0x1360]
71025d9704  str x10,[x0, #0x1400]
71025d9708  str x10,[x0, #0x14a0]
71025d970c  str x10,[x0, #0x1540]
71025d9710  str x10,[x0, #0x15e0]
71025d9714  str x10,[x0, #0x1680]
71025d9718  str x10,[x0, #0x1720]
71025d971c  str x10,[x0, #0x17c0]
71025d9720  str x10,[x0, #0x1860]
71025d9724  str x10,[x0, #0x1900]
71025d9728  str x10,[x0, #0x19a0]
71025d972c  str x10,[x0, #0x1a40]
71025d9730  str wzr,[x0, #0x8]
71025d9734  strh wzr,[x0, #0x10]
71025d9738  strh wzr,[x0, #0x40]
71025d973c  strh wzr,[x0, #0x70]
71025d9740  str wzr,[x0, #0xa8]
71025d9744  strh wzr,[x0, #0xb0]
71025d9748  strh wzr,[x0, #0xe0]
71025d974c  strh wzr,[x0, #0x110]
71025d9750  str wzr,[x0, #0x148]
71025d9754  strh wzr,[x0, #0x150]
71025d9758  strh wzr,[x0, #0x180]
71025d975c  strh wzr,[x0, #0x1b0]
71025d9760  str wzr,[x0, #0x1e8]
71025d9764  strh wzr,[x0, #0x1f0]
71025d9768  strh wzr,[x0, #0x220]
71025d976c  str x8,[x0, #0x228]
71025d9770  strh wzr,[x0, #0x250]
71025d9774  str x8,[x0, #0x258]
71025d9778  str wzr,[x0, #0x288]
71025d977c  strh wzr,[x0, #0x290]
71025d9780  str x8,[x0, #0x298]
71025d9784  strh wzr,[x0, #0x2c0]
71025d9788  str x8,[x0, #0x2c8]
71025d978c  strh wzr,[x0, #0x2f0]
71025d9790  str x8,[x0, #0x2f8]
71025d9794  str wzr,[x0, #0x328]
71025d9798  strh wzr,[x0, #0x330]
71025d979c  str x8,[x0, #0x338]
71025d97a0  strh wzr,[x0, #0x360]
71025d97a4  str x8,[x0, #0x368]
71025d97a8  strh wzr,[x0, #0x390]
71025d97ac  str x8,[x0, #0x398]
71025d97b0  str wzr,[x0, #0x3c8]
71025d97b4  strh wzr,[x0, #0x3d0]
71025d97b8  str x8,[x0, #0x3d8]
71025d97bc  strh wzr,[x0, #0x400]
71025d97c0  str x8,[x0, #0x408]
71025d97c4  strh wzr,[x0, #0x430]
71025d97c8  str x8,[x0, #0x438]
71025d97cc  str wzr,[x0, #0x468]
71025d97d0  strh wzr,[x0, #0x470]
71025d97d4  str x8,[x0, #0x478]
71025d97d8  strh wzr,[x0, #0x4a0]
71025d97dc  str x8,[x0, #0x4a8]
71025d97e0  strh wzr,[x0, #0x4d0]
71025d97e4  str x8,[x0, #0x4d8]
71025d97e8  str wzr,[x0, #0x508]
71025d97ec  strh wzr,[x0, #0x510]
71025d97f0  str x8,[x0, #0x518]
71025d97f4  strh wzr,[x0, #0x540]
71025d97f8  str x8,[x0, #0x548]
71025d97fc  strh wzr,[x0, #0x570]
71025d9800  str x8,[x0, #0x578]
71025d9804  str wzr,[x0, #0x5a8]
71025d9808  strh wzr,[x0, #0x5b0]
71025d980c  str x8,[x0, #0x5b8]
71025d9810  strh wzr,[x0, #0x5e0]
71025d9814  str x8,[x0, #0x5e8]
71025d9818  strh wzr,[x0, #0x610]
71025d981c  str x8,[x0, #0x618]
71025d9820  str wzr,[x0, #0x648]
71025d9824  strh wzr,[x0, #0x650]
71025d9828  str x8,[x0, #0x658]
71025d982c  strh wzr,[x0, #0x680]
71025d9830  str x8,[x0, #0x688]
71025d9834  strh wzr,[x0, #0x6b0]
71025d9838  str x8,[x0, #0x6b8]
71025d983c  str wzr,[x0, #0x6e8]
71025d9840  strh wzr,[x0, #0x6f0]
71025d9844  str x8,[x0, #0x6f8]
71025d9848  strh wzr,[x0, #0x720]
71025d984c  str x8,[x0, #0x728]
71025d9850  strh wzr,[x0, #0x750]
71025d9854  str x8,[x0, #0x758]
71025d9858  str wzr,[x0, #0x788]
71025d985c  strh wzr,[x0, #0x790]
71025d9860  str x8,[x0, #0x798]
71025d9864  strh wzr,[x0, #0x7c0]
71025d9868  str x8,[x0, #0x7c8]
71025d986c  str x8,[x0, #0x12d8]
71025d9870  str wzr,[x0, #0x12c8]
71025d9874  strh wzr,[x0, #0x12d0]
71025d9878  strh wzr,[x0, #0x1290]
71025d987c  str x8,[x0, #0x1298]
71025d9880  strh wzr,[x0, #0x1260]
71025d9884  str x8,[x0, #0x1268]
71025d9888  strh wzr,[x0, #0x1230]
71025d988c  str x8,[x0, #0x1238]
71025d9890  str wzr,[x0, #0x1228]
71025d9894  strh wzr,[x0, #0x11f0]
71025d9898  str x8,[x0, #0x11f8]
71025d989c  strh wzr,[x0, #0x11c0]
71025d98a0  str x9,[x0, #0x38]
71025d98a4  str x9,[x0, #0x68]
71025d98a8  str x8,[x0, #0x11c8]
71025d98ac  str wzr,[x0, #0x1188]
71025d98b0  strh wzr,[x0, #0x1190]
71025d98b4  str x8,[x0, #0x1198]
71025d98b8  str x9,[x0, #0xd8]
71025d98bc  str x9,[x0, #0x108]
71025d98c0  str x8,[x0, #0x1158]
71025d98c4  strh wzr,[x0, #0x1150]
71025d98c8  str x8,[x0, #0x1128]
71025d98cc  strh wzr,[x0, #0x1120]
71025d98d0  str x9,[x0, #0x178]
71025d98d4  str x9,[x0, #0x1a8]
71025d98d8  str x8,[x0, #0x10f8]
71025d98dc  str x9,[x0, #0x208]
71025d98e0  str wzr,[x0, #0x10e8]
71025d98e4  strh wzr,[x0, #0x10f0]
71025d98e8  str x9,[x0, #0x210]
71025d98ec  str x9,[x0, #0x218]
71025d98f0  str x9,[x0, #0x230]
71025d98f4  str x9,[x0, #0x238]
71025d98f8  str x9,[x0, #0x240]
71025d98fc  str x9,[x0, #0x248]
71025d9900  str x9,[x0, #0x260]
71025d9904  str x9,[x0, #0x268]
71025d9908  str x9,[x0, #0x270]
71025d990c  str x9,[x0, #0x278]
71025d9910  str x9,[x0, #0x2a0]
71025d9914  str x9,[x0, #0x2a8]
71025d9918  str x9,[x0, #0x2b0]
71025d991c  str x9,[x0, #0x2b8]
71025d9920  str x9,[x0, #0x2d0]
71025d9924  str x9,[x0, #0x2d8]
71025d9928  str x9,[x0, #0x2e0]
71025d992c  str x9,[x0, #0x2e8]
71025d9930  str x9,[x0, #0x300]
71025d9934  str x9,[x0, #0x308]
71025d9938  str x9,[x0, #0x310]
71025d993c  str x9,[x0, #0x318]
71025d9940  str x9,[x0, #0x340]
71025d9944  str x9,[x0, #0x348]
71025d9948  str x9,[x0, #0x350]
71025d994c  str x9,[x0, #0x358]
71025d9950  str x9,[x0, #0x370]
71025d9954  str x9,[x0, #0x378]
71025d9958  str x9,[x0, #0x380]
71025d995c  str x9,[x0, #0x388]
71025d9960  str x9,[x0, #0x3a0]
71025d9964  str x9,[x0, #0x3a8]
71025d9968  str x9,[x0, #0x3b0]
71025d996c  str x9,[x0, #0x3b8]
71025d9970  str x9,[x0, #0x3e0]
71025d9974  str x9,[x0, #0x3e8]
71025d9978  str x9,[x0, #0x3f0]
71025d997c  str x9,[x0, #0x3f8]
71025d9980  str x9,[x0, #0x410]
71025d9984  str x9,[x0, #0x418]
71025d9988  str x9,[x0, #0x420]
71025d998c  str x9,[x0, #0x428]
71025d9990  str x9,[x0, #0x440]
71025d9994  str x9,[x0, #0x448]
71025d9998  str x9,[x0, #0x450]
71025d999c  str x9,[x0, #0x458]
71025d99a0  str x9,[x0, #0x480]
71025d99a4  str x9,[x0, #0x488]
71025d99a8  str x9,[x0, #0x490]
71025d99ac  str x9,[x0, #0x498]
71025d99b0  str x9,[x0, #0x4b0]
71025d99b4  str x9,[x0, #0x4b8]
71025d99b8  str x9,[x0, #0x4c0]
71025d99bc  str x9,[x0, #0x4c8]
71025d99c0  str x9,[x0, #0x4e0]
71025d99c4  str x9,[x0, #0x4e8]
71025d99c8  str x9,[x0, #0x4f0]
71025d99cc  str x9,[x0, #0x4f8]
71025d99d0  str x9,[x0, #0x520]
71025d99d4  str x9,[x0, #0x528]
71025d99d8  str x9,[x0, #0x530]
71025d99dc  str x9,[x0, #0x538]
71025d99e0  str x9,[x0, #0x550]
71025d99e4  str x9,[x0, #0x558]
71025d99e8  str x9,[x0, #0x560]
71025d99ec  str x9,[x0, #0x568]
71025d99f0  str x9,[x0, #0x580]
71025d99f4  str x9,[x0, #0x588]
71025d99f8  str x9,[x0, #0x590]
71025d99fc  str x9,[x0, #0x598]
71025d9a00  str x9,[x0, #0x5c0]
71025d9a04  str x9,[x0, #0x5c8]
71025d9a08  str x9,[x0, #0x5d0]
71025d9a0c  str x9,[x0, #0x5d8]
71025d9a10  str x9,[x0, #0x5f0]
71025d9a14  str x9,[x0, #0x5f8]
71025d9a18  str x9,[x0, #0x600]
71025d9a1c  str x9,[x0, #0x608]
71025d9a20  str x9,[x0, #0x620]
71025d9a24  str x9,[x0, #0x628]
71025d9a28  str x9,[x0, #0x630]
71025d9a2c  str x9,[x0, #0x638]
71025d9a30  str x9,[x0, #0x660]
71025d9a34  str x9,[x0, #0x668]
71025d9a38  str x9,[x0, #0x670]
71025d9a3c  str x9,[x0, #0x678]
71025d9a40  str x9,[x0, #0x690]
71025d9a44  str x9,[x0, #0x698]
71025d9a48  str x9,[x0, #0x6a0]
71025d9a4c  str x9,[x0, #0x6a8]
71025d9a50  str x9,[x0, #0x6c0]
71025d9a54  str x9,[x0, #0x6c8]
71025d9a58  str x9,[x0, #0x6d0]
71025d9a5c  str x9,[x0, #0x6d8]
71025d9a60  str x9,[x0, #0x700]
71025d9a64  str x9,[x0, #0x708]
71025d9a68  str x9,[x0, #0x710]
71025d9a6c  str x9,[x0, #0x718]
71025d9a70  str x9,[x0, #0x730]
71025d9a74  str x9,[x0, #0x738]
71025d9a78  str x9,[x0, #0x740]
71025d9a7c  str x9,[x0, #0x748]
71025d9a80  str x9,[x0, #0x760]
71025d9a84  str x9,[x0, #0x768]
71025d9a88  str x9,[x0, #0x770]
71025d9a8c  str x9,[x0, #0x778]
71025d9a90  str x9,[x0, #0x7a0]
71025d9a94  str x9,[x0, #0x7a8]
71025d9a98  str x9,[x0, #0x7b0]
71025d9a9c  str x9,[x0, #0x7b8]
71025d9aa0  str x9,[x0, #0x7d0]
71025d9aa4  str x9,[x0, #0x7d8]
71025d9aa8  str x9,[x0, #0x7e0]
71025d9aac  str x9,[x0, #0x12e0]
71025d9ab0  str x9,[x0, #0x12a8]
71025d9ab4  str x9,[x0, #0x12b0]
71025d9ab8  str x9,[x0, #0x12b8]
71025d9abc  str x9,[x0, #0x12a0]
71025d9ac0  str x9,[x0, #0x1278]
71025d9ac4  str x9,[x0, #0x1280]
71025d9ac8  str x9,[x0, #0x1288]
71025d9acc  str x9,[x0, #0x1270]
71025d9ad0  str x9,[x0, #0x1248]
71025d9ad4  str x9,[x0, #0x1250]
71025d9ad8  str x9,[x0, #0x1258]
71025d9adc  str x9,[x0, #0x1240]
71025d9ae0  str x9,[x0, #0x1218]
71025d9ae4  str x9,[x0, #0x1200]
71025d9ae8  str x9,[x0, #0x1208]
71025d9aec  str x9,[x0, #0x1210]
71025d9af0  str x9,[x0, #0x11e8]
71025d9af4  str x9,[x0, #0x11d0]
71025d9af8  str x9,[x0, #0x11d8]
71025d9afc  str x9,[x0, #0x11e0]
71025d9b00  str x9,[x0, #0x11b8]
71025d9b04  str x9,[x0, #0x11a0]
71025d9b08  str x9,[x0, #0x11a8]
71025d9b0c  str x9,[x0, #0x11b0]
71025d9b10  str x9,[x0, #0x1170]
71025d9b14  str x9,[x0, #0x1178]
71025d9b18  str x9,[x0, #0x1160]
71025d9b1c  str x9,[x0, #0x1168]
71025d9b20  str x9,[x0, #0x1140]
71025d9b24  str x9,[x0, #0x1148]
71025d9b28  str x9,[x0, #0x1130]
71025d9b2c  str x9,[x0, #0x1138]
71025d9b30  str x9,[x0, #0x1110]
71025d9b34  str x9,[x0, #0x1118]
71025d9b38  str x9,[x0, #0x1100]
71025d9b3c  str x9,[x0, #0x1108]
71025d9b40  str x9,[x0, #0x10c8]
71025d9b44  str x9,[x0, #0x10d0]
71025d9b48  str x9,[x0, #0x10d8]
71025d9b4c  strh wzr,[x0, #0x10b0]
71025d9b50  str x8,[x0, #0x10b8]
71025d9b54  str x9,[x0, #0x10c0]
71025d9b58  str x9,[x0, #0x1098]
71025d9b5c  str x9,[x0, #0x10a0]
71025d9b60  str x9,[x0, #0x10a8]
71025d9b64  strh wzr,[x0, #0x1080]
71025d9b68  str x8,[x0, #0x1088]
71025d9b6c  str x9,[x0, #0x1090]
71025d9b70  str x9,[x0, #0x1068]
71025d9b74  str x9,[x0, #0x1070]
71025d9b78  str x9,[x0, #0x1078]
71025d9b7c  strh wzr,[x0, #0x1050]
71025d9b80  str x8,[x0, #0x1058]
71025d9b84  str x9,[x0, #0x1060]
71025d9b88  str x9,[x0, #0x1038]
71025d9b8c  str wzr,[x0, #0x1048]
71025d9b90  str x9,[x0, #0x1020]
71025d9b94  str x9,[x0, #0x1028]
71025d9b98  str x9,[x0, #0x1030]
71025d9b9c  str x9,[x0, #0x1008]
71025d9ba0  strh wzr,[x0, #0x1010]
71025d9ba4  str x8,[x0, #0x1018]
71025d9ba8  str x9,[x0, #0xff0]
71025d9bac  str x9,[x0, #0xff8]
71025d9bb0  str x9,[x0, #0x1000]
71025d9bb4  str x9,[x0, #0xfd8]
71025d9bb8  strh wzr,[x0, #0xfe0]
71025d9bbc  str x8,[x0, #0xfe8]
71025d9bc0  str x9,[x0, #0xfc0]
71025d9bc4  str x9,[x0, #0xfc8]
71025d9bc8  str x9,[x0, #0xfd0]
71025d9bcc  str wzr,[x0, #0xfa8]
71025d9bd0  strh wzr,[x0, #0xfb0]
71025d9bd4  str x8,[x0, #0xfb8]
71025d9bd8  str x9,[x0, #0xf90]
71025d9bdc  str x9,[x0, #0xf98]
71025d9be0  str x8,[x0, #0xf78]
71025d9be4  str x9,[x0, #0xf80]
71025d9be8  str x9,[x0, #0xf88]
71025d9bec  str x9,[x0, #0xf60]
71025d9bf0  str x9,[x0, #0xf68]
71025d9bf4  strh wzr,[x0, #0xf70]
71025d9bf8  str x8,[x0, #0xf48]
71025d9bfc  str x9,[x0, #0xf50]
71025d9c00  str x9,[x0, #0xf58]
71025d9c04  str x9,[x0, #0xf30]
71025d9c08  str x9,[x0, #0xf38]
71025d9c0c  strh wzr,[x0, #0xf40]
71025d9c10  str x8,[x0, #0xf18]
71025d9c14  str x9,[x0, #0xf20]
71025d9c18  str x9,[x0, #0xf28]
71025d9c1c  str wzr,[x0, #0xf08]
71025d9c20  strh wzr,[x0, #0xf10]
71025d9c24  str x9,[x0, #0xee8]
71025d9c28  str x9,[x0, #0xef0]
71025d9c2c  str x9,[x0, #0xef8]
71025d9c30  strh wzr,[x0, #0xed0]
71025d9c34  str x8,[x0, #0xed8]
71025d9c38  str x9,[x0, #0xee0]
71025d9c3c  str x9,[x0, #0xeb8]
71025d9c40  str x9,[x0, #0xec0]
71025d9c44  str x9,[x0, #0xec8]
71025d9c48  strh wzr,[x0, #0xea0]
71025d9c4c  str x8,[x0, #0xea8]
71025d9c50  str x9,[x0, #0xeb0]
71025d9c54  str x9,[x0, #0xe88]
71025d9c58  str x9,[x0, #0xe90]
71025d9c5c  str x9,[x0, #0xe98]
71025d9c60  strh wzr,[x0, #0xe70]
71025d9c64  str x8,[x0, #0xe78]
71025d9c68  str x9,[x0, #0xe80]
71025d9c6c  str x9,[x0, #0xe58]
71025d9c70  str wzr,[x0, #0xe68]
71025d9c74  str x9,[x0, #0xe40]
71025d9c78  str x9,[x0, #0xe48]
71025d9c7c  str x9,[x0, #0xe50]
71025d9c80  str x9,[x0, #0xe28]
71025d9c84  strh wzr,[x0, #0xe30]
71025d9c88  str x8,[x0, #0xe38]
71025d9c8c  str x9,[x0, #0xe10]
71025d9c90  str x9,[x0, #0xe18]
71025d9c94  str x9,[x0, #0xe20]
71025d9c98  str x9,[x0, #0xdf8]
71025d9c9c  strh wzr,[x0, #0xe00]
71025d9ca0  str x8,[x0, #0xe08]
71025d9ca4  str x9,[x0, #0xde0]
71025d9ca8  str x9,[x0, #0xde8]
71025d9cac  str x9,[x0, #0xdf0]
71025d9cb0  str wzr,[x0, #0xdc8]
71025d9cb4  strh wzr,[x0, #0xdd0]
71025d9cb8  str x8,[x0, #0xdd8]
71025d9cbc  str x9,[x0, #0xdb0]
71025d9cc0  str x9,[x0, #0xdb8]
71025d9cc4  str x8,[x0, #0xd98]
71025d9cc8  str x9,[x0, #0xda0]
71025d9ccc  str x9,[x0, #0xda8]
71025d9cd0  str x9,[x0, #0xd80]
71025d9cd4  str x9,[x0, #0xd88]
71025d9cd8  strh wzr,[x0, #0xd90]
71025d9cdc  str x8,[x0, #0xd68]
71025d9ce0  str x9,[x0, #0xd70]
71025d9ce4  str x9,[x0, #0xd78]
71025d9ce8  str x9,[x0, #0xd50]
71025d9cec  str x9,[x0, #0xd58]
71025d9cf0  strh wzr,[x0, #0xd60]
71025d9cf4  str x8,[x0, #0xd38]
71025d9cf8  str x9,[x0, #0xd40]
71025d9cfc  str x9,[x0, #0xd48]
71025d9d00  str wzr,[x0, #0xd28]
71025d9d04  strh wzr,[x0, #0xd30]
71025d9d08  str x9,[x0, #0xd08]
71025d9d0c  str x9,[x0, #0xd10]
71025d9d10  str x9,[x0, #0xd18]
71025d9d14  strh wzr,[x0, #0xcf0]
71025d9d18  str x8,[x0, #0xcf8]
71025d9d1c  str x9,[x0, #0xd00]
71025d9d20  str x9,[x0, #0xcd8]
71025d9d24  str x9,[x0, #0xce0]
71025d9d28  str x9,[x0, #0xce8]
71025d9d2c  strh wzr,[x0, #0xcc0]
71025d9d30  str x8,[x0, #0xcc8]
71025d9d34  str x9,[x0, #0xcd0]
71025d9d38  str x9,[x0, #0xca8]
71025d9d3c  str x9,[x0, #0xcb0]
71025d9d40  str x9,[x0, #0xcb8]
71025d9d44  strh wzr,[x0, #0xc90]
71025d9d48  str x8,[x0, #0xc98]
71025d9d4c  str x9,[x0, #0xca0]
71025d9d50  str x9,[x0, #0xc78]
71025d9d54  str wzr,[x0, #0xc88]
71025d9d58  str x9,[x0, #0xc60]
71025d9d5c  str x9,[x0, #0xc68]
71025d9d60  str x9,[x0, #0xc70]
71025d9d64  str x9,[x0, #0xc48]
71025d9d68  strh wzr,[x0, #0xc50]
71025d9d6c  str x8,[x0, #0xc58]
71025d9d70  str x9,[x0, #0xc30]
71025d9d74  str x9,[x0, #0xc38]
71025d9d78  str x9,[x0, #0xc40]
71025d9d7c  str x9,[x0, #0xc18]
71025d9d80  strh wzr,[x0, #0xc20]
71025d9d84  str x8,[x0, #0xc28]
71025d9d88  str x9,[x0, #0xc00]
71025d9d8c  str x9,[x0, #0xc08]
71025d9d90  str x9,[x0, #0xc10]
71025d9d94  str wzr,[x0, #0xbe8]
71025d9d98  strh wzr,[x0, #0xbf0]
71025d9d9c  str x8,[x0, #0xbf8]
71025d9da0  str x9,[x0, #0xbd0]
71025d9da4  str x9,[x0, #0xbd8]
71025d9da8  str x8,[x0, #0xbb8]
71025d9dac  str x9,[x0, #0xbc0]
71025d9db0  str x9,[x0, #0xbc8]
71025d9db4  str x9,[x0, #0xba0]
71025d9db8  str x9,[x0, #0xba8]
71025d9dbc  strh wzr,[x0, #0xbb0]
71025d9dc0  str x8,[x0, #0xb88]
71025d9dc4  str x9,[x0, #0xb90]
71025d9dc8  str x9,[x0, #0xb98]
71025d9dcc  str x9,[x0, #0xb70]
71025d9dd0  str x9,[x0, #0xb78]
71025d9dd4  strh wzr,[x0, #0xb80]
71025d9dd8  str x8,[x0, #0xb58]
71025d9ddc  str x9,[x0, #0xb60]
71025d9de0  str x9,[x0, #0xb68]
71025d9de4  str wzr,[x0, #0xb48]
71025d9de8  strh wzr,[x0, #0xb50]
71025d9dec  str x9,[x0, #0xb28]
71025d9df0  str x9,[x0, #0xb30]
71025d9df4  str x9,[x0, #0xb38]
71025d9df8  strh wzr,[x0, #0xb10]
71025d9dfc  str x8,[x0, #0xb18]
71025d9e00  str x9,[x0, #0xb20]
71025d9e04  str x9,[x0, #0xaf8]
71025d9e08  str x9,[x0, #0xb00]
71025d9e0c  str x9,[x0, #0xb08]
71025d9e10  strh wzr,[x0, #0xae0]
71025d9e14  str x8,[x0, #0xae8]
71025d9e18  str x9,[x0, #0xaf0]
71025d9e1c  str x9,[x0, #0xac8]
71025d9e20  str x9,[x0, #0xad0]
71025d9e24  str x9,[x0, #0xad8]
71025d9e28  strh wzr,[x0, #0xab0]
71025d9e2c  str x8,[x0, #0xab8]
71025d9e30  str x9,[x0, #0xac0]
71025d9e34  str x9,[x0, #0xa98]
71025d9e38  str wzr,[x0, #0xaa8]
71025d9e3c  str x9,[x0, #0xa80]
71025d9e40  str x9,[x0, #0xa88]
71025d9e44  str x9,[x0, #0xa90]
71025d9e48  str x9,[x0, #0xa68]
71025d9e4c  strh wzr,[x0, #0xa70]
71025d9e50  str x8,[x0, #0xa78]
71025d9e54  str x9,[x0, #0xa50]
71025d9e58  str x9,[x0, #0xa58]
71025d9e5c  str x9,[x0, #0xa60]
71025d9e60  str x9,[x0, #0xa38]
71025d9e64  strh wzr,[x0, #0xa40]
71025d9e68  str x8,[x0, #0xa48]
71025d9e6c  str x9,[x0, #0xa20]
71025d9e70  str x9,[x0, #0xa28]
71025d9e74  str x9,[x0, #0xa30]
71025d9e78  str wzr,[x0, #0xa08]
71025d9e7c  strh wzr,[x0, #0xa10]
71025d9e80  str x8,[x0, #0xa18]
71025d9e84  str x9,[x0, #0x9f0]
71025d9e88  str x9,[x0, #0x9f8]
71025d9e8c  str x8,[x0, #0x9d8]
71025d9e90  str x9,[x0, #0x9e0]
71025d9e94  str x9,[x0, #0x9e8]
71025d9e98  str x9,[x0, #0x9c0]
71025d9e9c  str x9,[x0, #0x9c8]
71025d9ea0  strh wzr,[x0, #0x9d0]
71025d9ea4  str x8,[x0, #0x9a8]
71025d9ea8  str x9,[x0, #0x9b0]
71025d9eac  str x9,[x0, #0x9b8]
71025d9eb0  str x9,[x0, #0x990]
71025d9eb4  str x9,[x0, #0x998]
71025d9eb8  strh wzr,[x0, #0x9a0]
71025d9ebc  str x8,[x0, #0x978]
71025d9ec0  str x9,[x0, #0x980]
71025d9ec4  str x9,[x0, #0x988]
71025d9ec8  str wzr,[x0, #0x968]
71025d9ecc  strh wzr,[x0, #0x970]
71025d9ed0  str x9,[x0, #0x948]
71025d9ed4  str x9,[x0, #0x950]
71025d9ed8  str x9,[x0, #0x958]
71025d9edc  strh wzr,[x0, #0x930]
71025d9ee0  str x8,[x0, #0x938]
71025d9ee4  str x9,[x0, #0x940]
71025d9ee8  str x9,[x0, #0x918]
71025d9eec  str x9,[x0, #0x920]
71025d9ef0  str x9,[x0, #0x928]
71025d9ef4  strh wzr,[x0, #0x900]
71025d9ef8  str x8,[x0, #0x908]
71025d9efc  str x9,[x0, #0x910]
71025d9f00  str x9,[x0, #0x8e8]
71025d9f04  str x9,[x0, #0x8f0]
71025d9f08  str x9,[x0, #0x8f8]
71025d9f0c  strh wzr,[x0, #0x8d0]
71025d9f10  str x8,[x0, #0x8d8]
71025d9f14  str x9,[x0, #0x8e0]
71025d9f18  str x9,[x0, #0x8b8]
71025d9f1c  str wzr,[x0, #0x8c8]
71025d9f20  str x9,[x0, #0x8a0]
71025d9f24  str x9,[x0, #0x8a8]
71025d9f28  str x9,[x0, #0x8b0]
71025d9f2c  str x9,[x0, #0x888]
71025d9f30  strh wzr,[x0, #0x890]
71025d9f34  str x8,[x0, #0x898]
71025d9f38  str x9,[x0, #0x870]
71025d9f3c  str x9,[x0, #0x878]
71025d9f40  str x9,[x0, #0x880]
71025d9f44  str x9,[x0, #0x858]
71025d9f48  strh wzr,[x0, #0x860]
71025d9f4c  str x8,[x0, #0x868]
71025d9f50  str x9,[x0, #0x840]
71025d9f54  str x9,[x0, #0x848]
71025d9f58  str x9,[x0, #0x850]
71025d9f5c  str wzr,[x0, #0x828]
71025d9f60  strh wzr,[x0, #0x830]
71025d9f64  str x8,[x0, #0x838]
71025d9f68  str x9,[x0, #0x810]
71025d9f6c  str x9,[x0, #0x818]
71025d9f70  str x8,[x0, #0x7f8]
71025d9f74  str x9,[x0, #0x800]
71025d9f78  str x9,[x0, #0x808]
71025d9f7c  str x9,[x0, #0x7e8]
71025d9f80  strh wzr,[x0, #0x7f0]
71025d9f84  str x9,[x0, #0x12e8]
71025d9f88  str x9,[x0, #0x12f0]
71025d9f8c  str x9,[x0, #0x12f8]
71025d9f90  strh wzr,[x0, #0x1300]
71025d9f94  str x8,[x0, #0x1308]
71025d9f98  str x9,[x0, #0x1310]
71025d9f9c  str x9,[x0, #0x1318]
71025d9fa0  str x9,[x0, #0x1320]
71025d9fa4  str x9,[x0, #0x1328]
71025d9fa8  strh wzr,[x0, #0x1330]
71025d9fac  str x8,[x0, #0x1338]
71025d9fb0  str x9,[x0, #0x1340]
71025d9fb4  str x9,[x0, #0x1348]
71025d9fb8  str x9,[x0, #0x1350]
71025d9fbc  str x9,[x0, #0x1358]
71025d9fc0  str wzr,[x0, #0x1368]
71025d9fc4  strh wzr,[x0, #0x1370]
71025d9fc8  str x8,[x0, #0x1378]
71025d9fcc  str x9,[x0, #0x1380]
71025d9fd0  str x9,[x0, #0x1388]
71025d9fd4  str x9,[x0, #0x1390]
71025d9fd8  str x9,[x0, #0x1398]
71025d9fdc  strh wzr,[x0, #0x13a0]
71025d9fe0  str x8,[x0, #0x13a8]
71025d9fe4  str x9,[x0, #0x13b0]
71025d9fe8  str x9,[x0, #0x13b8]
71025d9fec  str x9,[x0, #0x13c0]
71025d9ff0  str x9,[x0, #0x13c8]
71025d9ff4  strh wzr,[x0, #0x13d0]
71025d9ff8  str x8,[x0, #0x13d8]
71025d9ffc  str x9,[x0, #0x13e0]
71025da000  str x9,[x0, #0x13e8]
71025da004  str x9,[x0, #0x13f0]
71025da008  str x9,[x0, #0x13f8]
71025da00c  str wzr,[x0, #0x1408]
71025da010  strh wzr,[x0, #0x1410]
71025da014  str x8,[x0, #0x1418]
71025da018  str x9,[x0, #0x1420]
71025da01c  str x9,[x0, #0x1428]
71025da020  str x9,[x0, #0x1430]
71025da024  str x9,[x0, #0x1438]
71025da028  strh wzr,[x0, #0x1440]
71025da02c  str x8,[x0, #0x1448]
71025da030  str x9,[x0, #0x1450]
71025da034  str x9,[x0, #0x1458]
71025da038  str x9,[x0, #0x1460]
71025da03c  str x9,[x0, #0x1468]
71025da040  strh wzr,[x0, #0x1470]
71025da044  str x8,[x0, #0x1478]
71025da048  str x9,[x0, #0x1480]
71025da04c  str x9,[x0, #0x1488]
71025da050  str x9,[x0, #0x1490]
71025da054  str x9,[x0, #0x1498]
71025da058  str wzr,[x0, #0x14a8]
71025da05c  strh wzr,[x0, #0x14b0]
71025da060  str x8,[x0, #0x14b8]
71025da064  str x9,[x0, #0x14c0]
71025da068  str x9,[x0, #0x14c8]
71025da06c  str x9,[x0, #0x14d0]
71025da070  str x9,[x0, #0x14d8]
71025da074  strh wzr,[x0, #0x14e0]
71025da078  str x8,[x0, #0x14e8]
71025da07c  str x9,[x0, #0x14f0]
71025da080  str x9,[x0, #0x14f8]
71025da084  str x9,[x0, #0x1500]
71025da088  str x9,[x0, #0x1508]
71025da08c  strh wzr,[x0, #0x1510]
71025da090  str x8,[x0, #0x1518]
71025da094  str x9,[x0, #0x1520]
71025da098  str x9,[x0, #0x1528]
71025da09c  str x9,[x0, #0x1530]
71025da0a0  str x9,[x0, #0x1538]
71025da0a4  str wzr,[x0, #0x1548]
71025da0a8  strh wzr,[x0, #0x1550]
71025da0ac  str x8,[x0, #0x1558]
71025da0b0  str x9,[x0, #0x1560]
71025da0b4  str x9,[x0, #0x1568]
71025da0b8  str x9,[x0, #0x1570]
71025da0bc  str x9,[x0, #0x1578]
71025da0c0  strh wzr,[x0, #0x1580]
71025da0c4  str x8,[x0, #0x1588]
71025da0c8  str x9,[x0, #0x1590]
71025da0cc  str x9,[x0, #0x1598]
71025da0d0  str x9,[x0, #0x15a0]
71025da0d4  str x9,[x0, #0x15a8]
71025da0d8  strh wzr,[x0, #0x15b0]
71025da0dc  str x8,[x0, #0x15b8]
71025da0e0  str x9,[x0, #0x15c0]
71025da0e4  str x9,[x0, #0x15c8]
71025da0e8  str x9,[x0, #0x15d0]
71025da0ec  str x9,[x0, #0x15d8]
71025da0f0  str wzr,[x0, #0x15e8]
71025da0f4  strh wzr,[x0, #0x15f0]
71025da0f8  str x8,[x0, #0x15f8]
71025da0fc  str x9,[x0, #0x1600]
71025da100  str x9,[x0, #0x1608]
71025da104  str x9,[x0, #0x1610]
71025da108  str x9,[x0, #0x1618]
71025da10c  strh wzr,[x0, #0x1620]
71025da110  str x8,[x0, #0x1628]
71025da114  str x9,[x0, #0x1630]
71025da118  str x9,[x0, #0x1638]
71025da11c  str x9,[x0, #0x1640]
71025da120  str x9,[x0, #0x1648]
71025da124  strh wzr,[x0, #0x1650]
71025da128  str x8,[x0, #0x1658]
71025da12c  str x9,[x0, #0x1660]
71025da130  str x9,[x0, #0x1668]
71025da134  str x9,[x0, #0x1670]
71025da138  str x9,[x0, #0x1678]
71025da13c  str wzr,[x0, #0x1688]
71025da140  strh wzr,[x0, #0x1690]
71025da144  str x8,[x0, #0x1698]
71025da148  str x9,[x0, #0x16a0]
71025da14c  str x9,[x0, #0x16a8]
71025da150  str x9,[x0, #0x16b0]
71025da154  str x9,[x0, #0x16b8]
71025da158  strh wzr,[x0, #0x16c0]
71025da15c  str x8,[x0, #0x16c8]
71025da160  str x9,[x0, #0x16d0]
71025da164  str x9,[x0, #0x16d8]
71025da168  str x9,[x0, #0x16e0]
71025da16c  str x9,[x0, #0x16e8]
71025da170  strh wzr,[x0, #0x16f0]
71025da174  str x8,[x0, #0x16f8]
71025da178  str x9,[x0, #0x1700]
71025da17c  str x9,[x0, #0x1708]
71025da180  str x9,[x0, #0x1710]
71025da184  str x9,[x0, #0x1718]
71025da188  str wzr,[x0, #0x1728]
71025da18c  strh wzr,[x0, #0x1730]
71025da190  str x8,[x0, #0x1738]
71025da194  str x9,[x0, #0x1740]
71025da198  str x9,[x0, #0x1748]
71025da19c  str x9,[x0, #0x1750]
71025da1a0  str x9,[x0, #0x1758]
71025da1a4  strh wzr,[x0, #0x1760]
71025da1a8  str x8,[x0, #0x1768]
71025da1ac  str x9,[x0, #0x1770]
71025da1b0  str x9,[x0, #0x1778]
71025da1b4  str x9,[x0, #0x1780]
71025da1b8  str x9,[x0, #0x1788]
71025da1bc  strh wzr,[x0, #0x1790]
71025da1c0  str x8,[x0, #0x1798]
71025da1c4  str x9,[x0, #0x17a0]
71025da1c8  str x9,[x0, #0x17a8]
71025da1cc  str x9,[x0, #0x17b0]
71025da1d0  str x9,[x0, #0x17b8]
71025da1d4  str wzr,[x0, #0x17c8]
71025da1d8  strh wzr,[x0, #0x17d0]
71025da1dc  str x8,[x0, #0x17d8]
71025da1e0  str x9,[x0, #0x17e0]
71025da1e4  str x9,[x0, #0x17e8]
71025da1e8  str x9,[x0, #0x17f0]
71025da1ec  str x9,[x0, #0x17f8]
71025da1f0  strh wzr,[x0, #0x1800]
71025da1f4  str x8,[x0, #0x1808]
71025da1f8  str x9,[x0, #0x1810]
71025da1fc  str x9,[x0, #0x1818]
71025da200  str x9,[x0, #0x1820]
71025da204  str x9,[x0, #0x1828]
71025da208  strh wzr,[x0, #0x1830]
71025da20c  str x8,[x0, #0x1838]
71025da210  str x9,[x0, #0x1840]
71025da214  str x9,[x0, #0x1848]
71025da218  str x9,[x0, #0x1850]
71025da21c  str x9,[x0, #0x1858]
71025da220  str wzr,[x0, #0x1868]
71025da224  strh wzr,[x0, #0x1870]
71025da228  str x8,[x0, #0x1878]
71025da22c  str x9,[x0, #0x1880]
71025da230  str x9,[x0, #0x1888]
71025da234  str x9,[x0, #0x1890]
71025da238  str x9,[x0, #0x1898]
71025da23c  strh wzr,[x0, #0x18a0]
71025da240  str x8,[x0, #0x18a8]
71025da244  str x9,[x0, #0x18b0]
71025da248  str x9,[x0, #0x18b8]
71025da24c  str x9,[x0, #0x18c0]
71025da250  str x9,[x0, #0x18c8]
71025da254  strh wzr,[x0, #0x18d0]
71025da258  str x8,[x0, #0x18d8]
71025da25c  str x9,[x0, #0x18e0]
71025da260  str x9,[x0, #0x18e8]
71025da264  str x9,[x0, #0x18f0]
71025da268  str x9,[x0, #0x18f8]
71025da26c  str wzr,[x0, #0x1908]
71025da270  strh wzr,[x0, #0x1910]
71025da274  str x8,[x0, #0x1918]
71025da278  str x9,[x0, #0x1920]
71025da27c  str x9,[x0, #0x1928]
71025da280  str x9,[x0, #0x1930]
71025da284  str x9,[x0, #0x1938]
71025da288  strh wzr,[x0, #0x1940]
71025da28c  str x8,[x0, #0x1948]
71025da290  str x9,[x0, #0x1950]
71025da294  str x9,[x0, #0x1958]
71025da298  str x9,[x0, #0x1960]
71025da29c  str x9,[x0, #0x1968]
71025da2a0  strh wzr,[x0, #0x1970]
71025da2a4  str x8,[x0, #0x1978]
71025da2a8  str x9,[x0, #0x1980]
71025da2ac  str x9,[x0, #0x1988]
71025da2b0  str x9,[x0, #0x1990]
71025da2b4  str x9,[x0, #0x1998]
71025da2b8  str wzr,[x0, #0x19a8]
71025da2bc  strh wzr,[x0, #0x19b0]
71025da2c0  str x8,[x0, #0x19b8]
71025da2c4  str x9,[x0, #0x19c0]
71025da2c8  str x9,[x0, #0x19c8]
71025da2cc  str x9,[x0, #0x19d0]
71025da2d0  str x9,[x0, #0x19d8]
71025da2d4  strh wzr,[x0, #0x19e0]
71025da2d8  str x8,[x0, #0x19e8]
71025da2dc  str x9,[x0, #0x19f0]
71025da2e0  str x9,[x0, #0x19f8]
71025da2e4  str x9,[x0, #0x1a00]
71025da2e8  str x9,[x0, #0x1a08]
71025da2ec  strh wzr,[x0, #0x1a10]
71025da2f0  str x8,[x0, #0x1a18]
71025da2f4  str x9,[x0, #0x1a20]
71025da2f8  str x9,[x0, #0x1a28]
71025da2fc  str x9,[x0, #0x1a30]
71025da300  str x9,[x0, #0x1a38]
71025da304  str wzr,[x0, #0x1a48]
71025da308  strh wzr,[x0, #0x1a50]
71025da30c  str x8,[x0, #0x1a58]
71025da310  str x9,[x0, #0x1a60]
71025da314  str x9,[x0, #0x1a68]
71025da318  str x9,[x0, #0x1a70]
71025da31c  str x9,[x0, #0x1a78]
71025da320  strh wzr,[x0, #0x1a80]
71025da324  str x8,[x0, #0x1a88]
71025da328  str x9,[x0, #0x1a90]
71025da32c  str x9,[x0, #0x1a98]
71025da330  str x9,[x0, #0x1aa0]
71025da334  str x9,[x0, #0x1aa8]
71025da338  strh wzr,[x0, #0x1ab0]
71025da33c  str x8,[x0, #0x1ab8]
71025da340  str x9,[x0, #0x1ac0]
71025da344  str x9,[x0, #0x1ac8]
71025da348  str x9,[x0, #0x1ad0]
71025da34c  str x9,[x0, #0x1ad8]
71025da350  stp x9,x10,[x0, #0x98]
71025da354  stp x9,x10,[x0, #0x138]
71025da358  stp x9,x10,[x0, #0x1d8]
71025da35c  mov w10,#0x1ae4
71025da360  stp x8,x9,[x0, #0x18]
71025da364  stp x9,x9,[x0, #0x28]
71025da368  stp x8,x9,[x0, #0x48]
71025da36c  stp x9,x9,[x0, #0x58]
71025da370  stp x8,x9,[x0, #0x78]
71025da374  stp x9,x9,[x0, #0x88]
71025da378  stp x8,x9,[x0, #0xb8]
71025da37c  stp x9,x9,[x0, #0xc8]
71025da380  stp x8,x9,[x0, #0xe8]
71025da384  stp x9,x9,[x0, #0xf8]
71025da388  stp x8,x9,[x0, #0x118]
71025da38c  stp x9,x9,[x0, #0x128]
71025da390  stp x8,x9,[x0, #0x158]
71025da394  stp x9,x9,[x0, #0x168]
71025da398  stp x8,x9,[x0, #0x188]
71025da39c  stp x9,x9,[x0, #0x198]
71025da3a0  stp x8,x9,[x0, #0x1b8]
71025da3a4  stp x9,x9,[x0, #0x1c8]
71025da3a8  stp x8,x9,[x0, #0x1f8]
71025da3ac  str x11,[x0, x10, LSL #0x0]
71025da3b0  str x8,[x0, #0x1af8]
71025da3b4  str x8,[x0, #0x1b28]
71025da3b8  str x8,[x0, #0x1b58]
71025da3bc  mov w8,#0x2c
71025da3c0  strh wzr,[x0, #0x1af0]
71025da3c4  str x9,[x0, #0x1b00]
71025da3c8  str x9,[x0, #0x1b08]
71025da3cc  str x9,[x0, #0x1b10]
71025da3d0  str x9,[x0, #0x1b18]
71025da3d4  strh wzr,[x0, #0x1b20]
71025da3d8  str x9,[x0, #0x1b30]
71025da3dc  str x9,[x0, #0x1b38]
71025da3e0  str x9,[x0, #0x1b40]
71025da3e4  str x9,[x0, #0x1b48]
71025da3e8  strh wzr,[x0, #0x1b50]
71025da3ec  str x9,[x0, #0x1b60]
71025da3f0  str x9,[x0, #0x1b68]
71025da3f4  str x9,[x0, #0x1b70]
71025da3f8  str x9,[x0, #0x1b78]
71025da3fc  mov w9,#0x2b
71025da400  stp x0,x8,[x24, #0x180]
71025da404  mov w8,#0x1
71025da408  str w8,[x0, #0xa0]
71025da40c  mov w8,#0x2
71025da410  str w8,[x0, #0x140]
71025da414  orr w8,wzr,#0x3
71025da418  str w8,[x0, #0x1e0]
71025da41c  mov w8,#0x4
71025da420  str w8,[x0, #0x280]
71025da424  mov w8,#0x5
71025da428  str w8,[x0, #0x320]
71025da42c  orr w8,wzr,#0x6
71025da430  str w8,[x0, #0x3c0]
71025da434  orr w8,wzr,#0x7
71025da438  str w8,[x0, #0x460]
71025da43c  mov w8,#0x8
71025da440  str w8,[x0, #0x500]
71025da444  mov w8,#0x9
71025da448  str w8,[x0, #0x5a0]
71025da44c  mov w8,#0xa
71025da450  str w8,[x0, #0x640]
71025da454  mov w8,#0xb
71025da458  str w8,[x0, #0x6e0]
71025da45c  orr w8,wzr,#0xc
71025da460  str w8,[x0, #0x780]
71025da464  mov w8,#0xd
71025da468  str w8,[x0, #0x820]
71025da46c  orr w8,wzr,#0xe
71025da470  str w8,[x0, #0x8c0]
71025da474  orr w8,wzr,#0xf
71025da478  str w8,[x0, #0x960]
71025da47c  mov w8,#0x11
71025da480  str w8,[x0, #0xaa0]
71025da484  mov w8,#0x12
71025da488  str w8,[x0, #0xb40]
71025da48c  mov w8,#0x13
71025da490  str w8,[x0, #0xbe0]
71025da494  mov w8,#0x14
71025da498  str w8,[x0, #0xc80]
71025da49c  mov w8,#0x15
71025da4a0  str w8,[x0, #0xd20]
71025da4a4  mov w8,#0x16
71025da4a8  str w8,[x0, #0xdc0]
71025da4ac  mov w8,#0x17
71025da4b0  str w8,[x0, #0xe60]
71025da4b4  orr w8,wzr,#0x18
71025da4b8  str w8,[x0, #0xf00]
71025da4bc  mov w8,#0x19
71025da4c0  str w8,[x0, #0xfa0]
71025da4c4  mov w8,#0x1a
71025da4c8  str w8,[x0, #0x1040]
71025da4cc  mov w8,#0x1b
71025da4d0  str w8,[x0, #0x10e0]
71025da4d4  orr w8,wzr,#0x1c
71025da4d8  str w8,[x0, #0x1180]
71025da4dc  mov w8,#0x1d
71025da4e0  str w8,[x0, #0x1220]
71025da4e4  orr w8,wzr,#0x1e
71025da4e8  str w8,[x0, #0x12c0]
71025da4ec  orr w8,wzr,#0x1f
71025da4f0  str w8,[x0, #0x1360]
71025da4f4  mov w8,#0x20
71025da4f8  str w8,[x0, #0x1400]
71025da4fc  mov w8,#0x21
71025da500  str w8,[x0, #0x14a0]
71025da504  mov w8,#0x22
71025da508  str w8,[x0, #0x1540]
71025da50c  mov w8,#0x23
71025da510  str w8,[x0, #0x15e0]
71025da514  mov w8,#0x24
71025da518  str w8,[x0, #0x1680]
71025da51c  mov w8,#0x25
71025da520  str w8,[x0, #0x1720]
71025da524  mov w8,#0x26
71025da528  str w8,[x0, #0x17c0]
71025da52c  mov w8,#0x27
71025da530  str w8,[x0, #0x1860]
71025da534  mov w8,#0x28
71025da538  str w8,[x0, #0x1900]
71025da53c  mov w8,#0x29
71025da540  str w8,[x0, #0x19a0]
71025da544  mov w8,#0x2a
71025da548  str wzr,[x0]
71025da54c  str w20,[x0, #0xa00]
71025da550  str w8,[x0, #0x1a40]
71025da554  str w9,[x0, #0x1ae0]
71025da558  ldr w21,[sp, #0xa8]
71025da55c  cmp w21,w23
71025da560  b.eq 0x71025da6a8
71025da564  adrp x24,0x7105332000
71025da568  ldr x0,[x24, #0xf20]
71025da56c  adrp x8,0x7104742000
71025da570  add x8,x8,#0xdbb
71025da574  str x8,[sp, #0xf8]
71025da578  add x8,sp,#0xf0
71025da57c  mov w1,w21
71025da580  str w23,[sp, #0x100]
71025da584  str x8,[sp, #0xf0]
71025da588  stp xzr,xzr,[sp, #0x110]
71025da58c  str xzr,[sp, #0x108]
71025da590  str w21,[sp, #0xe8]
71025da594  bl 0x7103540a00
71025da598  add x0,sp,#0xf0
71025da59c  add x1,sp,#0xe8
71025da5a0  bl 0x7103720c30
71025da5a4  mov w20,w0
71025da5a8  ldr x0,[x24, #0xf20]
71025da5ac  mov w1,w21
71025da5b0  bl 0x7103540b10
71025da5b4  str w23,[sp, #0xe8]
71025da5b8  tbz w20,#0x0,0x71025da688
71025da5bc  ldr x8,[sp, #0xf8]
71025da5c0  ldrb w11,[x8]
71025da5c4  cmp w11,#0xc
71025da5c8  b.ne 0x71025da664
71025da5cc  ldur w9,[x8, #0x1]
71025da5d0  subs w12,w9,#0x1
71025da5d4  b.lt 0x71025da664
71025da5d8  ldr x9,[sp, #0xf0]
71025da5dc  ldursw x10,[x8, #0x5]
71025da5e0  mov x16,#0xfe61
71025da5e4  movk x16,#0xc0b4, LSL #16
71025da5e8  movk x16,#0x4, LSL #32
71025da5ec  mov w13,wzr
71025da5f0  ldp x14,x15,[x9, #0x20]
71025da5f4  add x15,x15,x10
71025da5f8  adrp x10,0x7104742000
71025da5fc  add x10,x10,#0xdbb
71025da600  add w17,w12,w13
71025da604  cmp w17,#0x0
71025da608  cinc w17,w17,lt
71025da60c  asr w17,w17,#0x1
71025da610  add x18,x15,w17, SXTW  #0x3
71025da614  ldr w0,[x18]
71025da618  ldr x0,[x14, x0, LSL #0x3]
71025da61c  cmp x0,x16
71025da620  b.eq 0x71025da654
71025da624  sub w18,w17,#0x1
71025da628  cmp x0,x16
71025da62c  csel w12,w18,w12,hi
71025da630  csinc w13,w13,w17,hi
71025da634  cmp w13,w12
71025da638  b.le 0x71025da600
71025da63c  mov x9,xzr
71025da640  b 0x71025da670
71025da644  mov x0,x22
71025da648  str x22,[x19]
71025da64c  cbnz x0,0x71025d9308
71025da650  b 0x71025d930c
71025da654  ldrsw x10,[x18, #0x4]
71025da658  tbnz w10,#0x1f,0x71025da664
71025da65c  add x10,x8,x10
71025da660  b 0x71025da670
71025da664  mov x9,xzr
71025da668  adrp x10,0x7104742000
71025da66c  add x10,x10,#0xdbb
71025da670  ldrb w12,[x10]
71025da674  cmp w12,#0xb
71025da678  b.ne 0x71025da688
71025da67c  ldur w12,[x10, #0x1]
71025da680  cmp w12,#0x2c
71025da684  b.le 0x71025dabac
71025da688  ldr w1,[sp, #0x100]
71025da68c  orr w19,wzr,#0xffffff
71025da690  cmp w1,w19
71025da694  b.eq 0x71025da6a4
71025da698  ldr x0,[x24, #0xf20]
71025da69c  bl 0x7103540b10
71025da6a0  str w19,[sp, #0x100]
71025da6a4  ldr x24,[sp, #0xa0]
71025da6a8  cmp w21,w23
71025da6ac  b.eq 0x71025da6c8
71025da6b0  adrp x8,0x7105332000
71025da6b4  ldr x0,[x8, #0xf20]
71025da6b8  mov w1,w21
71025da6bc  bl 0x7103540b10
71025da6c0  orr w8,wzr,#0xffffff
71025da6c4  str w8,[sp, #0xa8]
71025da6c8  ldr w8,[x24, #0x400]
71025da6cc  sub w11,w8,#0x1
71025da6d0  add x21,x24,#0x3d0
71025da6d4  cmp w11,#0x6
71025da6d8  b.cs 0x71025da7fc
71025da6dc  add w9,w8,#0x22
71025da6e0  csel w9,w9,wzr,cc
71025da6e4  str w9,[x24, #0x4c8]
71025da6e8  ldr x9,[x24, #0x3f8]
71025da6ec  str x9,[x24, #0x4c0]
71025da6f0  add x9,x24,#0x4cc
71025da6f4  orr x10,xzr,#0x100000000
71025da6f8  str x10,[x9]
71025da6fc  ldr x9,[x24, #0x3d8]
71025da700  ldr x10,[x9, #0x310]
71025da704  ldp x9,x10,[x10, #0xd0]
71025da708  cmp x9,x10
71025da70c  b.eq 0x71025da754
71025da710  sub w8,w8,#0x2
71025da714  cmp w8,#0x5
71025da718  csel w8,w11,wzr,cc
71025da71c  adrp x11,0x7104550000
71025da720  add x11,x11,#0xe48
71025da724  ldr x8,[x11, w8, SXTW #0x3]
71025da728  and x11,x8,#0xffffffffff
71025da72c  ldr w8,[x9, #0x8]
71025da730  cmp w8,#0x4
71025da734  b.ne 0x71025da748
71025da738  ldr x8,[x9]
71025da73c  ldr x12,[x8, #0x68]
71025da740  cmp x11,x12
71025da744  b.eq 0x71025da92c
71025da748  add x9,x9,#0x10
71025da74c  cmp x10,x9
71025da750  b.ne 0x71025da72c
71025da754  str xzr,[x24, #0x6d0]
71025da758  ldr x0,[x24, #0x490]
71025da75c  cbz x0,0x71025da77c
71025da760  str xzr,[x24, #0x490]
71025da764  bl 0x710392eb40
71025da768  ldr x0,[x24, #0x490]
71025da76c  str xzr,[x24, #0x490]
71025da770  cbz x0,0x71025da778
71025da774  bl 0x710392eb40
71025da778  str wzr,[x24, #0x498]
71025da77c  ldr x8,[x24, #0x3d8]
71025da780  ldrsw x9,[x8, #0x8]
71025da784  cmp w9,#0x3
71025da788  b.eq 0x71025da7ac
71025da78c  cmp w9,#0x16b
71025da790  b.hi 0x71025da828
71025da794  adrp x10,0x710454a000
71025da798  add x10,x10,#0x7e8
71025da79c  mov w11,#0x48
71025da7a0  madd x9,x9,x11,x10
71025da7a4  ldr w9,[x9, #0x8]
71025da7a8  cbz w9,0x71025da828
71025da7ac  mov x1,#0x2863
71025da7b0  movk x1,#0xd5e5, LSL #16
71025da7b4  movk x1,#0x29, LSL #32
71025da7b8  add x0,sp,#0xf0
71025da7bc  bl 0x710353da30
71025da7c0  ldr w20,[sp, #0xf0]
71025da7c4  add x0,x24,#0x4a0
71025da7c8  mov w1,w20
71025da7cc  bl 0x7103720ec0
71025da7d0  orr w19,wzr,#0xffffff
71025da7d4  mov w22,w0
71025da7d8  cmp w20,w19
71025da7dc  b.eq 0x71025da7f4
71025da7e0  adrp x8,0x7105332000
71025da7e4  ldr x0,[x8, #0xf20]
71025da7e8  mov w1,w20
71025da7ec  bl 0x7103540b10
71025da7f0  str w19,[sp, #0xf0]
71025da7f4  tbnz w22,#0x0,0x71025da8c0
71025da7f8  b 0x71025db49c
71025da7fc  sub w9,w8,#0x7
71025da800  cmp w9,#0x3
71025da804  b.cs 0x71025dab00
71025da808  mov w9,#0x2
71025da80c  mov x0,x21
71025da810  str wzr,[x24, #0x4c8]
71025da814  str w9,[x24, #0x4d0]
71025da818  str xzr,[x24, #0x4c0]
71025da81c  str w8,[x24, #0x4cc]
71025da820  bl 0x7102619ee0
71025da824  b 0x71025db49c
71025da828  ldr w8,[x8, #0xb8]
71025da82c  cmp w8,#0x3
71025da830  b.cs 0x71025dd4f8
71025da834  adrp x9,0x710532a000
71025da838  ldr x9,[x9, #0x9d0]
71025da83c  add x20,x24,#0x4a0
71025da840  ldr x9,[x9, x8, LSL #0x3]
71025da844  ldr x8,[x9, #0x228]
71025da848  ldr x9,[x9, #0x230]
71025da84c  cmp x8,x9
71025da850  b.eq 0x71025da8b0
71025da854  adrp x19,0x7105332000
71025da858  ldr x0,[x19, #0xf20]
71025da85c  mov x10,#0xc066
71025da860  movk x10,#0xb5ff, LSL #16
71025da864  movk x10,#0xf, LSL #32
71025da868  orr w11,wzr,#0xffffff
71025da86c  ldr w22,[x8]
71025da870  cmp w22,w11
71025da874  b.eq 0x71025da8a4
71025da878  ldr x12,[x0, #0x78]
71025da87c  ldr x12,[x12]
71025da880  ldr x13,[x12, #0x40]
71025da884  ldr w13,[x13, #0x4]
71025da888  cmp w13,w22
71025da88c  b.ls 0x71025da8a4
71025da890  ldr x12,[x12, #0x60]
71025da894  add x12,x12,x22, LSL #0x5
71025da898  ldr x12,[x12, #0x18]
71025da89c  cmp x12,x10
71025da8a0  b.eq 0x71025daf58
71025da8a4  add x8,x8,#0x4
71025da8a8  cmp x9,x8
71025da8ac  b.ne 0x71025da86c
71025da8b0  orr w1,wzr,#0xffffff
71025da8b4  mov x0,x20
71025da8b8  bl 0x7103720ec0
71025da8bc  tbz w0,#0x0,0x71025db49c
71025da8c0  ldr x8,[sp, #0xa0]
71025da8c4  ldr x8,[x8, #0x3d8]
71025da8c8  ldr x8,[x8, #0x300]
71025da8cc  ldp x9,x8,[x8, #0x30]
71025da8d0  sub x8,x8,x9
71025da8d4  lsr x8,x8,#0x3
71025da8d8  cbz w8,0x71025db49c
71025da8dc  ldr x8,[sp, #0xa0]
71025da8e0  ldr x9,[x8, #0x4b0]
71025da8e4  ldr x8,[x8, #0x4a8]
71025da8e8  subs x9,x9,x8
71025da8ec  b.eq 0x71025db49c
71025da8f0  asr x10,x9,#0x5
71025da8f4  ldr x9,[sp, #0xa0]
71025da8f8  ldr x11,[x9, #0x4c0]
71025da8fc  mov x12,xzr
71025da900  mov w9,#0x1
71025da904  lsl x12,x12,#0x5
71025da908  ldr x12,[x8, x12, LSL #0x0]
71025da90c  eor x12,x11,x12
71025da910  tst x12,#0xffffffffff
71025da914  b.eq 0x71025dab10
71025da918  mov w12,w9
71025da91c  add w9,w9,#0x1
71025da920  cmp x10,x12
71025da924  b.hi 0x71025da904
71025da928  b 0x71025db49c
71025da92c  str x8,[x24, #0x6d0]
71025da930  cbz x8,0x71025da758
71025da934  ldrb w9,[x8, #0xe0]
71025da938  cbz w9,0x71025da948
71025da93c  ldr x9,[x8, #0xc8]
71025da940  cbz x9,0x71025da948
71025da944  strh wzr,[x9, #0x30]
71025da948  ldr x9,[x8, #0xd8]
71025da94c  cbz x9,0x71025da954
71025da950  strb wzr,[x9, #0x21]
71025da954  ldrb w9,[x8, #0xe0]
71025da958  cbz w9,0x71025da968
71025da95c  ldr x8,[x8, #0xb0]
71025da960  mov w9,#0x1
71025da964  strb w9,[x8, #0x10]
71025da968  ldr x8,[x24, #0x6d0]
71025da96c  cbz x8,0x71025daa7c
71025da970  add x0,x8,#0x108
71025da974  mov w9,#0x1
71025da978  strb w9,[x8, #0x110]
71025da97c  bl 0x71025e9d50
71025da980  ldr x8,[sp, #0xa0]
71025da984  ldr x8,[x8, #0x6d0]
71025da988  cbz x8,0x71025daa7c
71025da98c  ldrb w9,[x8, #0xe0]
71025da990  cbz w9,0x71025daa7c
71025da994  ldr x0,[x8, #0x90]
71025da998  ldr x8,[x0]
71025da99c  ldr x8,[x8, #0x220]
71025da9a0  blr x8
71025da9a4  cbz w0,0x71025daa7c
71025da9a8  mov w20,w0
71025da9ac  mov w22,wzr
71025da9b0  mov w19,#0xffffffff
71025da9b4  orr x23,xzr,#0x100000000
71025da9b8  adrp x24,0x7104754000
71025da9bc  add x24,x24,#0x84
71025da9c0  ldr x8,[sp, #0xa0]
71025da9c4  ldr x25,[x8, #0x6d0]
71025da9c8  cbz x25,0x71025daa70
71025da9cc  ldrb w8,[x25, #0xe0]
71025da9d0  cbz w8,0x71025daa70
71025da9d4  ldr x0,[x25, #0x90]
71025da9d8  ldr x8,[x0]
71025da9dc  ldr x8,[x8, #0x220]
71025da9e0  blr x8
71025da9e4  cmp w0,w22
71025da9e8  b.ls 0x71025daa70
71025da9ec  ldr x0,[x25, #0x90]
71025da9f0  ldr x8,[x0]
71025da9f4  ldr x8,[x8, #0x228]
71025da9f8  mov w1,w22
71025da9fc  blr x8
71025daa00  ldrb w11,[x0]
71025daa04  cbz w11,0x71025daa50
71025daa08  mov x8,xzr
71025daa0c  add x9,x0,#0x1
71025daa10  mov w10,w19
71025daa14  and w11,w11,#0xff
71025daa18  sub w12,w11,#0x41
71025daa1c  add w13,w11,#0x20
71025daa20  cmp w12,#0x1a
71025daa24  csel w11,w13,w11,cc
71025daa28  eor w11,w11,w10
71025daa2c  and w11,w11,#0xff
71025daa30  ldr w11,[x24, w11, UXTW #0x2]
71025daa34  eor w10,w11,w10, LSR #0x8
71025daa38  ldrb w11,[x9], #0x1
71025daa3c  add x8,x8,x23
71025daa40  cbnz w11,0x71025daa14
71025daa44  mvn w9,w10
71025daa48  and x8,x8,#0xff00000000
71025daa4c  b 0x71025daa58
71025daa50  mov x9,xzr
71025daa54  mov x8,xzr
71025daa58  ldr x0,[x25, #0x90]
71025daa5c  orr x1,x8,x9
71025daa60  ldr x8,[x0]
71025daa64  ldr x8,[x8, #0x180]
71025daa68  mov w2,wzr
71025daa6c  blr x8
71025daa70  add w22,w22,#0x1
71025daa74  cmp w22,w20
71025daa78  b.ne 0x71025da9c0
71025daa7c  ldr x24,[sp, #0xa0]
71025daa80  ldr x8,[x24, #0x3d8]
71025daa84  ldrsw x9,[x8, #0x8]
71025daa88  cmp w9,#0x3
71025daa8c  b.eq 0x71025daab0
71025daa90  cmp w9,#0x16b
71025daa94  b.hi 0x71025dae78
71025daa98  adrp x10,0x710454a000
71025daa9c  add x10,x10,#0x7e8
71025daaa0  mov w11,#0x48
71025daaa4  madd x9,x9,x11,x10
71025daaa8  ldr w9,[x9, #0x8]
71025daaac  cbz w9,0x71025dae78
71025daab0  mov x1,#0x2863
71025daab4  movk x1,#0xd5e5, LSL #16
71025daab8  movk x1,#0x29, LSL #32
71025daabc  add x0,sp,#0xf0
71025daac0  bl 0x710353da30
71025daac4  ldr w20,[sp, #0xf0]
71025daac8  add x0,x24,#0x4a0
71025daacc  mov w1,w20
71025daad0  bl 0x7103720ec0
71025daad4  orr w19,wzr,#0xffffff
71025daad8  mov w22,w0
71025daadc  cmp w20,w19
71025daae0  b.eq 0x71025daaf8
71025daae4  adrp x8,0x7105332000
71025daae8  ldr x0,[x8, #0xf20]
71025daaec  mov w1,w20
71025daaf0  bl 0x7103540b10
71025daaf4  str w19,[sp, #0xf0]
71025daaf8  tbz w22,#0x0,0x71025da758
71025daafc  b 0x71025daf10
71025dab00  str wzr,[x24, #0x4d0]
71025dab04  str xzr,[x24, #0x4c8]
71025dab08  str xzr,[x24, #0x4c0]
71025dab0c  b 0x71025db49c
71025dab10  cbz w9,0x71025db49c
71025dab14  sub w20,w9,#0x1
71025dab18  mov x0,x21
71025dab1c  mov w1,w20
71025dab20  bl 0x710261c720
71025dab24  ldr x11,[sp, #0xa0]
71025dab28  ldr x8,[x11, #0x4a8]
71025dab2c  mov w9,w20
71025dab30  str x9,[sp, #0x40]
71025dab34  add x8,x8,x9, LSL #0x5
71025dab38  ldp x9,x8,[x8, #0x8]
71025dab3c  subs x19,x8,x9
71025dab40  asr x26,x19,#0x3
71025dab44  b.eq 0x71025daf94
71025dab48  ldr x11,[x11, #0x3d8]
71025dab4c  ldr x12,[x11, #0x300]
71025dab50  mov x10,xzr
71025dab54  ldp x11,x12,[x12, #0x30]
71025dab58  mov x8,xzr
71025dab5c  cmp x11,x12
71025dab60  b.eq 0x71025dab9c
71025dab64  ldr x13,[x9, x10, LSL #0x3]
71025dab68  mov x14,x11
71025dab6c  ldr x15,[x14], #0x8
71025dab70  ldr x16,[x15, #0x18]
71025dab74  eor x16,x16,x13
71025dab78  tst x16,#0xffffffffff
71025dab7c  b.eq 0x71025dab8c
71025dab80  cmp x12,x14
71025dab84  b.ne 0x71025dab6c
71025dab88  b 0x71025dab9c
71025dab8c  cbz x15,0x71025dab9c
71025dab90  ldp x13,x14,[x15, #0x20]
71025dab94  sub x13,x14,x13
71025dab98  add x8,x8,x13, ASR #0x4
71025dab9c  add w10,w10,#0x1
71025daba0  cmp x26,x10
71025daba4  b.hi 0x71025dab5c
71025daba8  b 0x71025daf98
71025dabac  ldur w12,[x10, #0x1]
71025dabb0  cmp w12,#0x1
71025dabb4  b.lt 0x71025dadf8
71025dabb8  mov x11,#0x25b7
71025dabbc  movk x11,#0x6ce4, LSL #16
71025dabc0  mov x12,#0x180b
71025dabc4  movk x12,#0x120c, LSL #16
71025dabc8  mov x8,xzr
71025dabcc  movk x11,#0x9, LSL #32
71025dabd0  movk x12,#0x8, LSL #32
71025dabd4  add x13,x10,#0x5
71025dabd8  mov w17,#0xb
71025dabdc  adrp x14,0x7104742000
71025dabe0  add x14,x14,#0xdbb
71025dabe4  mov w15,#0xa0
71025dabe8  adrp x16,0x7104506000
71025dabec  add x16,x16,#0x824
71025dabf0  mov x18,xzr
71025dabf4  tbnz w8,#0x1f,0x71025dac28
71025dabf8  and w17,w17,#0xff
71025dabfc  cmp w17,#0xb
71025dac00  mov x17,x14
71025dac04  b.ne 0x71025dac2c
71025dac08  ldur w17,[x10, #0x1]
71025dac0c  cmp w17,w8
71025dac10  b.le 0x71025dac24
71025dac14  ldrsw x17,[x13, w8, SXTW #0x2]
71025dac18  add x17,x10,x17
71025dac1c  mov x18,x9
71025dac20  b 0x71025dac2c
71025dac24  mov x18,xzr
71025dac28  mov x17,x14
71025dac2c  ldrb w0,[x17]
71025dac30  cmp w0,#0xc
71025dac34  b.ne 0x71025da688
71025dac38  ldur w0,[x17, #0x1]
71025dac3c  cmp w0,#0x2
71025dac40  b.ne 0x71025da688
71025dac44  ldursw x2,[x17, #0x5]
71025dac48  ldp x1,x3,[x18, #0x20]
71025dac4c  mov w0,wzr
71025dac50  add x2,x3,x2
71025dac54  mov w3,#0x1
71025dac58  add w4,w3,w0
71025dac5c  cmp w4,#0x0
71025dac60  cinc w4,w4,lt
71025dac64  asr w4,w4,#0x1
71025dac68  add x5,x2,w4, SXTW  #0x3
71025dac6c  ldr w6,[x5]
71025dac70  ldr x6,[x1, x6, LSL #0x3]
71025dac74  cmp x6,x12
71025dac78  b.eq 0x71025dac98
71025dac7c  sub w5,w4,#0x1
71025dac80  cmp x6,x12
71025dac84  csel w3,w5,w3,hi
71025dac88  csinc w0,w0,w4,hi
71025dac8c  cmp w0,w3
71025dac90  b.le 0x71025dac58
71025dac94  b 0x71025daca8
71025dac98  ldrsw x0,[x5, #0x4]
71025dac9c  tbnz w0,#0x1f,0x71025daca8
71025daca0  add x0,x17,x0
71025daca4  b 0x71025dacac
71025daca8  mov x0,x14
71025dacac  ldrb w1,[x0]
71025dacb0  cmp w1,#0x8
71025dacb4  b.ne 0x71025da688
71025dacb8  ldr x1,[x22]
71025dacbc  madd x1,x8,x15,x1
71025dacc0  ldur w0,[x0, #0x1]
71025dacc4  str w0,[x1, #0x4]
71025dacc8  ldrb w0,[x17]
71025daccc  cmp w0,#0xc
71025dacd0  mov x0,x14
71025dacd4  b.ne 0x71025dad5c
71025dacd8  ldur w0,[x17, #0x1]
71025dacdc  subs w0,w0,#0x1
71025dace0  b.lt 0x71025dad30
71025dace4  ldursw x3,[x17, #0x5]
71025dace8  ldp x2,x18,[x18, #0x20]
71025dacec  mov w1,wzr
71025dacf0  add x18,x18,x3
71025dacf4  add w3,w0,w1
71025dacf8  cmp w3,#0x0
71025dacfc  cinc w3,w3,lt
71025dad00  asr w3,w3,#0x1
71025dad04  add x4,x18,w3, SXTW  #0x3
71025dad08  ldr w5,[x4]
71025dad0c  ldr x5,[x2, x5, LSL #0x3]
71025dad10  cmp x5,x11
71025dad14  b.eq 0x71025dad40
71025dad18  sub w4,w3,#0x1
71025dad1c  cmp x5,x11
71025dad20  csel w0,w4,w0,hi
71025dad24  csinc w1,w1,w3,hi
71025dad28  cmp w1,w0
71025dad2c  b.le 0x71025dacf4
71025dad30  mov x0,x14
71025dad34  ldrb w17,[x0]
71025dad38  cbnz w17,0x71025dad64
71025dad3c  b 0x71025da688
71025dad40  ldrsw x18,[x4, #0x4]
71025dad44  tbnz w18,#0x1f,0x71025dad58
71025dad48  add x0,x17,x18
71025dad4c  ldrb w17,[x0]
71025dad50  cbnz w17,0x71025dad64
71025dad54  b 0x71025da688
71025dad58  mov x0,x14
71025dad5c  ldrb w17,[x0]
71025dad60  cbz w17,0x71025da688
71025dad64  sub w17,w17,#0x1
71025dad68  and w18,w17,#0xff
71025dad6c  cmp w18,#0x6
71025dad70  b.hi 0x71025da688
71025dad74  cmp w17,#0x6
71025dad78  b.hi 0x71025dad98
71025dad7c  ldrsw x17,[x16, x17, LSL #0x2]
71025dad80  add x17,x17,x16
71025dad84  br x17
71025dad88  ldrb w17,[x0, #0x1]
71025dad8c  b 0x71025dadb4
71025dad90  ldur w17,[x0, #0x1]
71025dad94  b 0x71025dadb4
71025dad98  mov w17,wzr
71025dad9c  b 0x71025dadb4
71025dada0  ldrsb w17,[x0, #0x1]
71025dada4  b 0x71025dadb4
71025dada8  ldursh w17,[x0, #0x1]
71025dadac  b 0x71025dadb4
71025dadb0  ldurh w17,[x0, #0x1]
71025dadb4  ldr x18,[x22]
71025dadb8  madd x18,x8,x15,x18
71025dadbc  add x8,x8,#0x1
71025dadc0  str w17,[x18, #0x8]
71025dadc4  ldrb w17,[x10]
71025dadc8  sub w18,w17,#0xb
71025dadcc  cmp w18,#0x1
71025dadd0  b.hi 0x71025dade4
71025dadd4  ldur w18,[x10, #0x1]
71025dadd8  cmp x8,w18, SXTW 
71025daddc  b.lt 0x71025dabf0
71025dade0  b 0x71025dadf0
71025dade4  mov w18,wzr
71025dade8  cmp x8,w18, SXTW 
71025dadec  b.lt 0x71025dabf0
71025dadf0  ldr x8,[sp, #0xf8]
71025dadf4  ldrb w11,[x8]
71025dadf8  cmp w11,#0xc
71025dadfc  b.ne 0x71025dd134
71025dae00  ldur w9,[x8, #0x1]
71025dae04  subs w9,w9,#0x1
71025dae08  b.lt 0x71025dd134
71025dae0c  ldr x19,[sp, #0xf0]
71025dae10  ldursw x13,[x8, #0x5]
71025dae14  mov w10,wzr
71025dae18  ldp x12,x14,[x19, #0x20]
71025dae1c  add x13,x14,x13
71025dae20  mov x14,#0x7a55
71025dae24  movk x14,#0x8d91, LSL #16
71025dae28  movk x14,#0x4, LSL #32
71025dae2c  adrp x20,0x7104742000
71025dae30  add x20,x20,#0xdbb
71025dae34  add w15,w9,w10
71025dae38  cmp w15,#0x0
71025dae3c  cinc w15,w15,lt
71025dae40  asr w15,w15,#0x1
71025dae44  add x16,x13,w15, SXTW  #0x3
71025dae48  ldr w17,[x16]
71025dae4c  ldr x17,[x12, x17, LSL #0x3]
71025dae50  cmp x17,x14
71025dae54  b.eq 0x71025dd124
71025dae58  sub w16,w15,#0x1
71025dae5c  cmp x17,x14
71025dae60  csel w9,w16,w9,hi
71025dae64  csinc w10,w10,w15,hi
71025dae68  cmp w10,w9
71025dae6c  b.le 0x71025dae34
71025dae70  mov x19,xzr
71025dae74  b 0x71025dd140
71025dae78  ldr w8,[x8, #0xb8]
71025dae7c  cmp w8,#0x3
71025dae80  b.cs 0x71025dd4f8
71025dae84  adrp x9,0x710532a000
71025dae88  ldr x9,[x9, #0x9d0]
71025dae8c  add x20,x24,#0x4a0
71025dae90  ldr x9,[x9, x8, LSL #0x3]
71025dae94  ldr x8,[x9, #0x228]
71025dae98  ldr x9,[x9, #0x230]
71025dae9c  cmp x8,x9
71025daea0  b.eq 0x71025daf00
71025daea4  adrp x19,0x7105332000
71025daea8  ldr x0,[x19, #0xf20]
71025daeac  mov x10,#0xc066
71025daeb0  movk x10,#0xb5ff, LSL #16
71025daeb4  movk x10,#0xf, LSL #32
71025daeb8  orr w11,wzr,#0xffffff
71025daebc  ldr w22,[x8]
71025daec0  cmp w22,w11
71025daec4  b.eq 0x71025daef4
71025daec8  ldr x12,[x0, #0x78]
71025daecc  ldr x12,[x12]
71025daed0  ldr x13,[x12, #0x40]
71025daed4  ldr w13,[x13, #0x4]
71025daed8  cmp w13,w22
71025daedc  b.ls 0x71025daef4
71025daee0  ldr x12,[x12, #0x60]
71025daee4  add x12,x12,x22, LSL #0x5
71025daee8  ldr x12,[x12, #0x18]
71025daeec  cmp x12,x10
71025daef0  b.eq 0x71025dd0f8
71025daef4  add x8,x8,#0x4
71025daef8  cmp x9,x8
71025daefc  b.ne 0x71025daebc
71025daf00  orr w1,wzr,#0xffffff
71025daf04  mov x0,x20
71025daf08  bl 0x7103720ec0
71025daf0c  tbz w0,#0x0,0x71025da758
71025daf10  ldr x9,[x24, #0x4b0]
71025daf14  ldr x8,[x24, #0x4a8]
71025daf18  subs x9,x9,x8
71025daf1c  b.eq 0x71025daf84
71025daf20  ldr x10,[x24, #0x4c0]
71025daf24  mov x1,xzr
71025daf28  asr x9,x9,#0x5
71025daf2c  mov w11,#0xffffffff
71025daf30  lsl x12,x1,#0x5
71025daf34  ldr x12,[x8, x12, LSL #0x0]
71025daf38  eor x12,x10,x12
71025daf3c  tst x12,#0xffffffffff
71025daf40  b.eq 0x71025daf88
71025daf44  add w1,w1,#0x1
71025daf48  cmp x9,x1
71025daf4c  b.hi 0x71025daf30
71025daf50  mov w1,w11
71025daf54  b 0x71025daf88
71025daf58  mov w1,w22
71025daf5c  bl 0x7103540a00
71025daf60  mov x0,x20
71025daf64  mov w1,w22
71025daf68  bl 0x7103720ec0
71025daf6c  mov w20,w0
71025daf70  ldr x0,[x19, #0xf20]
71025daf74  mov w1,w22
71025daf78  bl 0x7103540b10
71025daf7c  tbnz w20,#0x0,0x71025da8c0
71025daf80  b 0x71025db49c
71025daf84  mov w1,#0xffffffff
71025daf88  mov x0,x21
71025daf8c  bl 0x710261c720
71025daf90  b 0x71025db49c
71025daf94  mov x8,xzr
71025daf98  lsr x9,x19,#0x1
71025daf9c  adds w8,w9,w8, LSL #0x3
71025dafa0  b.eq 0x71025db49c
71025dafa4  add w21,w8,w8, LSL #0x1
71025dafa8  ldr x23,[sp, #0xa0]
71025dafac  lsl x22,x21,#0x6
71025dafb0  cmp w21,#0x0
71025dafb4  csinc x20,x22,xzr,ne
71025dafb8  mov w0,#0x10
71025dafbc  mov x1,x20
71025dafc0  str w21,[x23, #0x498]
71025dafc4  bl 0x710392e290
71025dafc8  cbnz x0,0x71025db00c
71025dafcc  adrp x8,0x7105332000
71025dafd0  ldr x0,[x8, #0xf00]
71025dafd4  cbz x0,0x71025db008
71025dafd8  str wzr,[sp, #0xd0]
71025dafdc  str x20,[sp, #0xf0]
71025dafe0  ldr x8,[x0]
71025dafe4  ldr x8,[x8, #0x30]
71025dafe8  add x1,sp,#0xd0
71025dafec  add x2,sp,#0xf0
71025daff0  blr x8
71025daff4  tbz w0,#0x0,0x71025db008
71025daff8  mov w0,#0x10
71025daffc  mov x1,x20
71025db000  bl 0x710392e290
71025db004  cbnz x0,0x71025db00c
71025db008  mov x0,xzr
71025db00c  cbz w21,0x71025db080
71025db010  sub x9,x22,#0x40
71025db014  ubfx x8,x9,#0x6,#0x1a
71025db018  add w8,w8,#0x1
71025db01c  ands x10,x8,#0x7
71025db020  b.eq 0x71025db040
71025db024  add x8,x0,x10, LSL #0x6
71025db028  neg x10,x10
71025db02c  mov x11,x0
71025db030  stp xzr,xzr,[x11], #0x40
71025db034  adds x10,x10,#0x1
71025db038  b.ne 0x71025db030
71025db03c  b 0x71025db044
71025db040  mov x8,x0
71025db044  cmp x9,#0x1c0
71025db048  b.cc 0x71025db080
71025db04c  movi v0.2D,#0x0
71025db050  add x9,x0,x21, LSL #0x6
71025db054  str q0,[x8]
71025db058  str q0,[x8, #0x40]
71025db05c  str q0,[x8, #0x80]
71025db060  str q0,[x8, #0xc0]
71025db064  str q0,[x8, #0x100]
71025db068  str q0,[x8, #0x140]
71025db06c  str q0,[x8, #0x180]
71025db070  str q0,[x8, #0x1c0]
71025db074  add x8,x8,#0x200
71025db078  cmp x8,x9
71025db07c  b.ne 0x71025db054
71025db080  ldr x8,[x23, #0x490]
71025db084  str x0,[x23, #0x490]
71025db088  cbz x8,0x71025db094
71025db08c  mov x0,x8
71025db090  bl 0x710392eb40
71025db094  ldr w8,[x23, #0x4c8]
71025db098  sub w8,w8,#0x23
71025db09c  cmp w8,#0x6
71025db0a0  csinv w8,w8,wzr,cc
71025db0a4  str x8,[sp, #0x90]
71025db0a8  cbz x19,0x71025db49c
71025db0ac  ldr x8,[sp, #0xa0]
71025db0b0  adrp x10,0x7104472000
71025db0b4  adrp x11,0x7104465000
71025db0b8  ldr s10,[x10, #0x6c0]
71025db0bc  ldr x10,[sp, #0x90]
71025db0c0  mov w9,#0x14
71025db0c4  ldr d1,[x11, #0x610]
71025db0c8  adrp x12,0x7104465000
71025db0cc  fmov s8,0x41200000
71025db0d0  str q1,[sp, #0x80]
71025db0d4  ldr x23,[x8, #0x490]
71025db0d8  adrp x8,0x7104549000
71025db0dc  add x8,x8,#0x184
71025db0e0  madd x25,x10,x9,x8
71025db0e4  ldr d1,[x12, #0x2e8]
71025db0e8  fmov s9,0x40c00000
71025db0ec  fmov s11,0xc1200000
71025db0f0  fmov s12,0x40400000
71025db0f4  fmov s13,0x41100000
71025db0f8  add x8,x25,#0x4
71025db0fc  mov x24,xzr
71025db100  add x28,x25,#0x10
71025db104  stp x26,x8,[sp, #0x48]
71025db108  add x8,x25,#0xc
71025db10c  add x19,x25,#0x8
71025db110  str x8,[sp, #0x68]
71025db114  str q1,[sp, #0x70]
71025db118  ldr x10,[sp, #0xa0]
71025db11c  ldr x8,[x10, #0x3d8]
71025db120  ldr x9,[x8, #0x300]
71025db124  ldp x8,x9,[x9, #0x30]
71025db128  cmp x8,x9
71025db12c  b.eq 0x71025db48c
71025db130  ldr x10,[x10, #0x4a8]
71025db134  ldr x11,[sp, #0x40]
71025db138  add x10,x10,x11, LSL #0x5
71025db13c  ldr x10,[x10, #0x8]
71025db140  ldr x10,[x10, x24, LSL #0x3]
71025db144  ldr x20,[x8], #0x8
71025db148  ldr x11,[x20, #0x18]
71025db14c  eor x11,x11,x10
71025db150  tst x11,#0xffffffffff
71025db154  b.eq 0x71025db164
71025db158  cmp x9,x8
71025db15c  b.ne 0x71025db144
71025db160  b 0x71025db48c
71025db164  cbz x20,0x71025db48c
71025db168  ldp x8,x9,[x20, #0x20]
71025db16c  subs x8,x9,x8
71025db170  b.eq 0x71025db48c
71025db174  asr x22,x8,#0x4
71025db178  mov x21,xzr
71025db17c  sub x26,x22,#0x1
71025db180  b 0x71025db1e8
71025db184  mov v2.16B,v0.16B
71025db188  mov v0.D[0x1],v4.D[0x0]
71025db18c  ldr q1,[sp, #0x110]
71025db190  ldr x8,[sp, #0x50]
71025db194  add x27,x23,#0x300
71025db198  mov v2.D[0x1],v3.D[0x0]
71025db19c  ldr w8,[x8]
71025db1a0  str q0,[x23, #0x180]
71025db1a4  mov v0.16B,v1.16B
71025db1a8  mov v1.D[0x1],v4.D[0x0]
71025db1ac  str w8,[x23, #0x190]
71025db1b0  str w8,[x23, #0x210]
71025db1b4  str w8,[x23, #0x1d0]
71025db1b8  mov v0.D[0x1],v3.D[0x0]
71025db1bc  str w8,[x23, #0x250]
71025db1c0  str q2,[x23, #0x200]
71025db1c4  str q2,[x23, #0x240]
71025db1c8  str q1,[x23, #0x1c0]
71025db1cc  str q1,[x23, #0x280]
71025db1d0  str w8,[x23, #0x290]
71025db1d4  str w8,[x23, #0x2d0]
71025db1d8  str q0,[x23, #0x2c0]
71025db1dc  cmp x26,x21
71025db1e0  b.eq 0x71025db2ac
71025db1e4  b 0x71025db308
71025db1e8  mov v0.16B,v10.16B
71025db1ec  mov v1.16B,v8.16B
71025db1f0  add x2,sp,#0xf0
71025db1f4  mov x0,x20
71025db1f8  mov w1,w21
71025db1fc  stp xzr,xzr,[sp, #0x120]
71025db200  stp xzr,xzr,[sp, #0x110]
71025db204  stp xzr,xzr,[sp, #0x100]
71025db208  stp xzr,xzr,[sp, #0xf0]
71025db20c  bl 0x710261ce40
71025db210  movi d4,#0x0
71025db214  ldr q1,[sp, #0x120]
71025db218  mov v2.16B,v4.16B
71025db21c  mov v0.16B,v4.16B
71025db220  mov v0.S[0x0],v1.S[0x2]
71025db224  mov v1.D[0x1],v0.D[0x0]
71025db228  ldr x8,[sp, #0x90]
71025db22c  str q1,[x23]
71025db230  ldr q0,[sp, #0x100]
71025db234  mov v2.S[0x0],v0.S[0x2]
71025db238  mov v0.D[0x1],v2.D[0x0]
71025db23c  mov v2.16B,v4.16B
71025db240  str q0,[x23, #0x40]
71025db244  ldr q0,[sp, #0xf0]
71025db248  mov v2.S[0x0],v0.S[0x2]
71025db24c  mov v3.16B,v0.16B
71025db250  mov v3.D[0x1],v2.D[0x0]
71025db254  str q3,[x23, #0x80]
71025db258  str q3,[x23, #0xc0]
71025db25c  ldr q2,[sp, #0x110]
71025db260  mov v3.16B,v4.16B
71025db264  cmp w8,#0x6
71025db268  mov v3.S[0x0],v2.S[0x2]
71025db26c  str q1,[x23, #0x140]
71025db270  mov v2.D[0x1],v3.D[0x0]
71025db274  str q2,[x23, #0x100]
71025db278  b.cs 0x71025dd4f8
71025db27c  ldr w8,[x25]
71025db280  str w8,[x23, #0x10]
71025db284  str w8,[x23, #0x50]
71025db288  str w8,[x23, #0x90]
71025db28c  str w8,[x23, #0xd0]
71025db290  str w8,[x23, #0x110]
71025db294  str w8,[x23, #0x150]
71025db298  ldp q4,q3,[sp, #0x70]
71025db29c  cbz w21,0x71025db184
71025db2a0  add x27,x23,#0x180
71025db2a4  cmp x26,x21
71025db2a8  b.ne 0x71025db308
71025db2ac  ldr q0,[sp, #0x100]
71025db2b0  mov v2.16B,v0.16B
71025db2b4  ldr q1,[sp, #0x120]
71025db2b8  mov v0.D[0x1],v3.D[0x0]
71025db2bc  ldr x8,[sp, #0x50]
71025db2c0  mov v2.D[0x1],v4.D[0x0]
71025db2c4  str q0,[x27]
71025db2c8  mov v0.16B,v1.16B
71025db2cc  mov v1.D[0x1],v3.D[0x0]
71025db2d0  mov v0.D[0x1],v4.D[0x0]
71025db2d4  str q1,[x27, #0x40]
71025db2d8  str q1,[x27, #0x100]
71025db2dc  ldr w8,[x8]
71025db2e0  str w8,[x27, #0x10]
71025db2e4  str w8,[x27, #0x50]
71025db2e8  str q2,[x27, #0x80]
71025db2ec  str q2,[x27, #0xc0]
71025db2f0  str q0,[x27, #0x140]
71025db2f4  str w8,[x27, #0x90]
71025db2f8  str w8,[x27, #0xd0]
71025db2fc  str w8,[x27, #0x110]
71025db300  str w8,[x27, #0x150]
71025db304  add x27,x27,#0x180
71025db308  ldp q0,q1,[sp, #0x110]
71025db30c  mov v2.16B,v1.16B
71025db310  mov v1.D[0x1],v4.D[0x0]
71025db314  ldr x8,[sp, #0x68]
71025db318  add x2,sp,#0xf0
71025db31c  mov x0,x20
71025db320  mov v2.D[0x1],v3.D[0x0]
71025db324  mov w1,w21
71025db328  str q1,[x27, #0x40]
71025db32c  ldr w8,[x8]
71025db330  str w8,[x27, #0x10]
71025db334  str w8,[x27, #0x50]
71025db338  str q1,[x27, #0x100]
71025db33c  mov v1.16B,v0.16B
71025db340  mov v0.D[0x1],v4.D[0x0]
71025db344  mov v1.D[0x1],v3.D[0x0]
71025db348  str w8,[x27, #0x90]
71025db34c  str q1,[x27, #0x80]
71025db350  str q1,[x27, #0xc0]
71025db354  str q0,[x27, #0x140]
71025db358  mov v0.16B,v9.16B
71025db35c  mov v1.16B,v11.16B
71025db360  str w8,[x27, #0xd0]
71025db364  str q2,[x27]
71025db368  str w8,[x27, #0x110]
71025db36c  str w8,[x27, #0x150]
71025db370  bl 0x710261ce40
71025db374  ldr q0,[sp, #0x120]
71025db378  movi d1,#0x0
71025db37c  mov v3.16B,v1.16B
71025db380  mov v1.S[0x0],v0.S[0x2]
71025db384  mov v2.16B,v3.16B
71025db388  mov v0.D[0x1],v1.D[0x0]
71025db38c  add x2,sp,#0xf0
71025db390  str q0,[x27, #0x180]
71025db394  ldr q1,[sp, #0x100]
71025db398  mov v2.S[0x0],v1.S[0x2]
71025db39c  mov v1.D[0x1],v2.D[0x0]
71025db3a0  mov v2.16B,v3.16B
71025db3a4  str q1,[x27, #0x1c0]
71025db3a8  ldr q1,[sp, #0xf0]
71025db3ac  mov v2.S[0x0],v1.S[0x2]
71025db3b0  mov v1.D[0x1],v2.D[0x0]
71025db3b4  mov v2.16B,v3.16B
71025db3b8  str q1,[x27, #0x200]
71025db3bc  str q1,[x27, #0x240]
71025db3c0  ldr q1,[sp, #0x110]
71025db3c4  mov v2.S[0x0],v1.S[0x2]
71025db3c8  str q0,[x27, #0x2c0]
71025db3cc  mov v0.16B,v12.16B
71025db3d0  mov v1.D[0x1],v2.D[0x0]
71025db3d4  str q1,[x27, #0x280]
71025db3d8  ldr w8,[x28]
71025db3dc  mov v1.16B,v13.16B
71025db3e0  mov x0,x20
71025db3e4  mov w1,w21
71025db3e8  str w8,[x27, #0x190]
71025db3ec  str w8,[x27, #0x1d0]
71025db3f0  str w8,[x27, #0x210]
71025db3f4  str w8,[x27, #0x250]
71025db3f8  str w8,[x27, #0x290]
71025db3fc  str w8,[x27, #0x2d0]
71025db400  bl 0x710261ce40
71025db404  movi d3,#0x0
71025db408  ldr q0,[sp, #0x120]
71025db40c  mov v2.16B,v3.16B
71025db410  mov v1.16B,v3.16B
71025db414  mov v1.S[0x0],v0.S[0x2]
71025db418  mov v0.D[0x1],v1.D[0x0]
71025db41c  add w21,w21,#0x1
71025db420  str q0,[x27, #0x300]
71025db424  ldr q1,[sp, #0x100]
71025db428  mov v2.S[0x0],v1.S[0x2]
71025db42c  mov v1.D[0x1],v2.D[0x0]
71025db430  mov v2.16B,v3.16B
71025db434  str q1,[x27, #0x340]
71025db438  ldr q1,[sp, #0xf0]
71025db43c  mov v2.S[0x0],v1.S[0x2]
71025db440  mov v1.D[0x1],v2.D[0x0]
71025db444  mov v2.16B,v3.16B
71025db448  str q1,[x27, #0x380]
71025db44c  str q1,[x27, #0x3c0]
71025db450  ldr q1,[sp, #0x110]
71025db454  mov v2.S[0x0],v1.S[0x2]
71025db458  mov v1.D[0x1],v2.D[0x0]
71025db45c  ldr w8,[x19]
71025db460  add x23,x27,#0x480
71025db464  cmp x22,x21
71025db468  str w8,[x27, #0x310]
71025db46c  str w8,[x27, #0x350]
71025db470  str w8,[x27, #0x390]
71025db474  str w8,[x27, #0x3d0]
71025db478  str w8,[x27, #0x410]
71025db47c  str w8,[x27, #0x450]
71025db480  str q0,[x27, #0x440]
71025db484  str q1,[x27, #0x400]
71025db488  b.hi 0x71025db1e8
71025db48c  ldr x8,[sp, #0x48]
71025db490  add w24,w24,#0x1
71025db494  cmp x8,x24
71025db498  b.hi 0x71025db118
71025db49c  ldr x9,[sp, #0xa0]
71025db4a0  ldr w8,[x9, #0xb8]
71025db4a4  ldr x22,[x9, #0x318]
71025db4a8  cmp w8,#0x3
71025db4ac  str w8,[x22, #0xb4]
71025db4b0  b.cs 0x71025dd4f8
71025db4b4  adrp x9,0x710532a000
71025db4b8  ldr x9,[x9, #0x9d8]
71025db4bc  ldr x9,[x9]
71025db4c0  ldr x9,[x9, #0x1d0]
71025db4c4  str x9,[sp, #0x70]
71025db4c8  adrp x9,0x710532a000
71025db4cc  ldr x9,[x9, #0x9d0]
71025db4d0  ldr x8,[x9, x8, LSL #0x3]
71025db4d4  add x1,x8,#0xd0
71025db4d8  adrp x2,0x7104441000
71025db4dc  add x2,x2,#0xe80
71025db4e0  adrp x3,0x71043ee000
71025db4e4  add x3,x3,#0x93a
71025db4e8  add x0,sp,#0xf0
71025db4ec  str x8,[sp, #0x80]
71025db4f0  str x1,[sp, #0x40]
71025db4f4  bl 0x7102618630
71025db4f8  mov x20,x22
71025db4fc  ldr w1,[x20, #0x20]!
71025db500  ldr w19,[sp, #0xf0]
71025db504  orr w21,wzr,#0xffffff
71025db508  cmp w1,w21
71025db50c  b.eq 0x71025db51c
71025db510  adrp x8,0x7105332000
71025db514  ldr x0,[x8, #0xf20]
71025db518  bl 0x7103540b10
71025db51c  cmp w19,w21
71025db520  str w19,[x20]
71025db524  b.eq 0x71025db538
71025db528  ldr x1,[x22, #0x8]
71025db52c  ldr x0,[sp, #0x70]
71025db530  mov x2,x20
71025db534  bl 0x71031768a0
71025db538  ldr x1,[sp, #0x40]
71025db53c  adrp x2,0x7104410000
71025db540  add x2,x2,#0xcd4
71025db544  adrp x3,0x7104452000
71025db548  add x3,x3,#0x722
71025db54c  add x0,sp,#0xf0
71025db550  bl 0x7102618630
71025db554  mov x20,x22
71025db558  ldr w1,[x20, #0x24]!
71025db55c  ldr w19,[sp, #0xf0]
71025db560  orr w21,wzr,#0xffffff
71025db564  cmp w1,w21
71025db568  b.eq 0x71025db578
71025db56c  adrp x8,0x7105332000
71025db570  ldr x0,[x8, #0xf20]
71025db574  bl 0x7103540b10
71025db578  cmp w19,w21
71025db57c  str w19,[x20]
71025db580  b.ne 0x71025db5d0
71025db584  mov x1,#0x6e19
71025db588  movk x1,#0xdb22, LSL #16
71025db58c  movk x1,#0x24, LSL #32
71025db590  add x0,sp,#0xf0
71025db594  bl 0x710353da30
71025db598  mov x25,x22
71025db59c  ldr x1,[x25, #0x8]!
71025db5a0  ldr x0,[sp, #0x70]
71025db5a4  add x2,sp,#0xf0
71025db5a8  bl 0x7103176ba0
71025db5ac  ldr w1,[sp, #0xf0]
71025db5b0  orr w19,wzr,#0xffffff
71025db5b4  cmp w1,w19
71025db5b8  b.eq 0x71025db5e4
71025db5bc  adrp x8,0x7105332000
71025db5c0  ldr x0,[x8, #0xf20]
71025db5c4  bl 0x7103540b10
71025db5c8  str w19,[sp, #0xf0]
71025db5cc  b 0x71025db5e4
71025db5d0  mov x25,x22
71025db5d4  ldr x1,[x25, #0x8]!
71025db5d8  ldr x0,[sp, #0x70]
71025db5dc  mov x2,x20
71025db5e0  bl 0x7103176ba0
71025db5e4  ldr x19,[x25]
71025db5e8  mov w1,#0x140
71025db5ec  mov w0,#0x10
71025db5f0  str x22,[sp, #0x28]
71025db5f4  bl 0x710392e290
71025db5f8  mov x24,x0
71025db5fc  cbnz x0,0x71025db648
71025db600  adrp x8,0x7105332000
71025db604  ldr x0,[x8, #0xf00]
71025db608  cbz x0,0x71025db644
71025db60c  mov w8,#0x140
71025db610  str wzr,[sp, #0xd0]
71025db614  add x1,sp,#0xd0
71025db618  str x8,[sp, #0xf0]
71025db61c  ldr x8,[x0]
71025db620  ldr x8,[x8, #0x30]
71025db624  add x2,sp,#0xf0
71025db628  blr x8
71025db62c  tbz w0,#0x0,0x71025db644
71025db630  mov w1,#0x140
71025db634  mov w0,#0x10
71025db638  bl 0x710392e290
71025db63c  mov x24,x0
71025db640  cbnz x0,0x71025db648
71025db644  mov x24,xzr
71025db648  adrp x9,0x7104468000
71025db64c  ldr q0,[x9, #0xca0]
71025db650  adrp x9,0x710446a000
71025db654  ldr q1,[x9, #0x360]
71025db658  mov x21,x24
71025db65c  mov w8,#0x1
71025db660  str xzr,[x21, #0x10]!
71025db664  strb w8,[x24, #0x3c]
71025db668  strb w8,[x24, #0x4c]
71025db66c  adrp x8,0x7104465000
71025db670  stp x19,x21,[x24]
71025db674  str xzr,[x24, #0x18]
71025db678  stp xzr,xzr,[x24, #0x28]
71025db67c  str wzr,[x24, #0x20]
71025db680  strh wzr,[x24, #0x24]
71025db684  str wzr,[x24, #0x38]
71025db688  str xzr,[x24, #0x40]
71025db68c  str wzr,[x24, #0x48]
71025db690  strb wzr,[x24, #0xa0]
71025db694  strb wzr,[x24, #0xd0]
71025db698  strb wzr,[x24, #0xf0]
71025db69c  strb wzr,[x24, #0x110]
71025db6a0  str q0,[sp, #0x90]
71025db6a4  stp q0,q1,[x24, #0x50]
71025db6a8  ldr q0,[x8, #0x6b0]
71025db6ac  adrp x8,0x710446a000
71025db6b0  str q1,[sp, #0x50]
71025db6b4  ldr q1,[x8, #0x350]
71025db6b8  orr w8,wzr,#0x3f800000
71025db6bc  str w8,[x24, #0x90]
71025db6c0  stp q0,q1,[x24, #0x70]
71025db6c4  ldr x8,[sp, #0x80]
71025db6c8  str x25,[sp, #0x38]
71025db6cc  stp q1,q0,[sp]
71025db6d0  ldr x20,[x8, #0x3d8]
71025db6d4  ldr x27,[x8, #0x3e0]
71025db6d8  cmp x20,x27
71025db6dc  b.eq 0x71025db924
71025db6e0  add x8,x24,#0x18
71025db6e4  mov w25,#0x3b0
71025db6e8  orr w23,wzr,#0xffffff
71025db6ec  str x8,[sp, #0x68]
71025db6f0  mov w0,#0x10
71025db6f4  mov x1,x25
71025db6f8  bl 0x710392e290
71025db6fc  mov x26,x0
71025db700  cbnz x0,0x71025db748
71025db704  adrp x8,0x7105332000
71025db708  ldr x0,[x8, #0xf00]
71025db70c  cbz x0,0x71025db744
71025db710  str wzr,[sp, #0xd0]
71025db714  str x25,[sp, #0xf0]
71025db718  ldr x8,[x0]
71025db71c  ldr x8,[x8, #0x30]
71025db720  add x1,sp,#0xd0
71025db724  add x2,sp,#0xf0
71025db728  blr x8
71025db72c  tbz w0,#0x0,0x71025db744
71025db730  mov w0,#0x10
71025db734  mov x1,x25
71025db738  bl 0x710392e290
71025db73c  mov x26,x0
71025db740  cbnz x0,0x71025db748
71025db744  mov x26,xzr
71025db748  mov x0,x26
71025db74c  mov x1,x20
71025db750  bl 0x710132e020
71025db754  ldr w8,[x20]
71025db758  cmp w8,w23
71025db75c  b.eq 0x71025db7a0
71025db760  adrp x9,0x7105332000
71025db764  ldr x9,[x9, #0xf20]
71025db768  ldr x9,[x9, #0x78]
71025db76c  ldr x9,[x9]
71025db770  ldr x10,[x9, #0x40]
71025db774  ldr w10,[x10, #0x4]
71025db778  cmp w10,w8
71025db77c  b.ls 0x71025db7a0
71025db780  ldr x9,[x9, #0x60]
71025db784  add x8,x9,x8, LSL #0x5
71025db788  ldr x22,[x8, #0x18]
71025db78c  ldr x28,[x21]
71025db790  cbnz x28,0x71025db7ac
71025db794  mov x28,x21
71025db798  mov x19,x21
71025db79c  b 0x71025db7f8
71025db7a0  mov x22,xzr
71025db7a4  ldr x28,[x21]
71025db7a8  cbz x28,0x71025db794
71025db7ac  and x8,x22,#0xffffffffff
71025db7b0  mov x19,x21
71025db7b4  b 0x71025db7c0
71025db7b8  mov x19,x28
71025db7bc  mov x28,x9
71025db7c0  ldr x9,[x28, #0x20]
71025db7c4  and x9,x9,#0xffffffffff
71025db7c8  cmp x8,x9
71025db7cc  b.cs 0x71025db7dc
71025db7d0  ldr x9,[x28]
71025db7d4  cbnz x9,0x71025db7b8
71025db7d8  b 0x71025db84c
71025db7dc  cmp x9,x8
71025db7e0  b.cs 0x71025db7f8
71025db7e4  mov x19,x28
71025db7e8  ldr x9,[x19, #0x8]!
71025db7ec  cbz x9,0x71025db7f8
71025db7f0  mov x28,x9
71025db7f4  b 0x71025db7c0
71025db7f8  ldr x8,[x19]
71025db7fc  cbz x8,0x71025db858
71025db800  ldr x8,[x8, #0x28]
71025db804  str x8,[x24, #0x40]
71025db808  ldr x22,[x26, #0x10]
71025db80c  cbz x22,0x71025db840
71025db810  add x8,x22,#0x8
71025db814  ldaxr x9,[x8]
71025db818  sub x10,x9,#0x1
71025db81c  stlxr w11,x10,[x8]
71025db820  cbnz w11,0x71025db814
71025db824  cbnz x9,0x71025db840
71025db828  ldr x8,[x22]
71025db82c  ldr x8,[x8, #0x10]
71025db830  mov x0,x22
71025db834  blr x8
71025db838  mov x0,x22
71025db83c  bl 0x71039c2670
71025db840  mov x0,x26
71025db844  bl 0x710392eb40
71025db848  b 0x71025db900
71025db84c  mov x19,x28
71025db850  ldr x8,[x19]
71025db854  cbnz x8,0x71025db800
71025db858  mov w0,#0x10
71025db85c  orr w1,wzr,#0x30
71025db860  bl 0x710392e290
71025db864  mov x23,x0
71025db868  cbnz x0,0x71025db8b4
71025db86c  adrp x8,0x7105332000
71025db870  ldr x0,[x8, #0xf00]
71025db874  cbz x0,0x71025db8b0
71025db878  orr w8,wzr,#0x30
71025db87c  str wzr,[sp, #0xd0]
71025db880  add x1,sp,#0xd0
71025db884  str x8,[sp, #0xf0]
71025db888  ldr x8,[x0]
71025db88c  ldr x8,[x8, #0x30]
71025db890  add x2,sp,#0xf0
71025db894  blr x8
71025db898  tbz w0,#0x0,0x71025db8b0
71025db89c  mov w0,#0x10
71025db8a0  orr w1,wzr,#0x30
71025db8a4  bl 0x710392e290
71025db8a8  mov x23,x0
71025db8ac  cbnz x0,0x71025db8b4
71025db8b0  mov x23,xzr
71025db8b4  stp x22,x26,[x23, #0x20]
71025db8b8  str x28,[x23, #0x10]
71025db8bc  stp xzr,xzr,[x23]
71025db8c0  str x23,[x19]
71025db8c4  ldr x8,[x24, #0x8]
71025db8c8  ldr x8,[x8]
71025db8cc  cbz x8,0x71025db8dc
71025db8d0  str x8,[x24, #0x8]
71025db8d4  ldr x1,[x19]
71025db8d8  b 0x71025db8e0
71025db8dc  mov x1,x23
71025db8e0  ldr x0,[x24, #0x10]
71025db8e4  bl 0x71003e59f0
71025db8e8  ldr x8,[x24, #0x18]
71025db8ec  add x8,x8,#0x1
71025db8f0  str x8,[x24, #0x18]
71025db8f4  ldr x8,[x23, #0x28]
71025db8f8  str x8,[x24, #0x40]
71025db8fc  orr w23,wzr,#0xffffff
71025db900  add x20,x20,#0x4
71025db904  cmp x20,x27
71025db908  b.ne 0x71025db6f0
71025db90c  ldr x27,[sp, #0x68]
71025db910  ldr x8,[x27]
71025db914  ldr x26,[sp, #0x28]
71025db918  ldr x25,[sp, #0x38]
71025db91c  cbnz x8,0x71025dbb20
71025db920  b 0x71025db92c
71025db924  ldr x26,[sp, #0x28]
71025db928  add x27,x24,#0x18
71025db92c  mov x1,#0x28ac
71025db930  movk x1,#0xd537, LSL #16
71025db934  movk x1,#0x2f, LSL #32
71025db938  add x0,sp,#0xc0
71025db93c  bl 0x710353da30
71025db940  mov w1,#0x3b0
71025db944  mov w0,#0x10
71025db948  bl 0x710392e290
71025db94c  mov x20,x0
71025db950  cbnz x0,0x71025db99c
71025db954  adrp x8,0x7105332000
71025db958  ldr x0,[x8, #0xf00]
71025db95c  cbz x0,0x71025db998
71025db960  mov w8,#0x3b0
71025db964  str wzr,[sp, #0xd0]
71025db968  add x1,sp,#0xd0
71025db96c  str x8,[sp, #0xf0]
71025db970  ldr x8,[x0]
71025db974  ldr x8,[x8, #0x30]
71025db978  add x2,sp,#0xf0
71025db97c  blr x8
71025db980  tbz w0,#0x0,0x71025db998
71025db984  mov w1,#0x3b0
71025db988  mov w0,#0x10
71025db98c  bl 0x710392e290
71025db990  mov x20,x0
71025db994  cbnz x0,0x71025db99c
71025db998  mov x20,xzr
71025db99c  add x1,sp,#0xc0
71025db9a0  mov x0,x20
71025db9a4  bl 0x710132e020
71025db9a8  ldr x8,[x20, #0x8]
71025db9ac  cbz x8,0x71025dba1c
71025db9b0  ldr x22,[x24, #0x10]
71025db9b4  mov x19,#0xdf
71025db9b8  movk x19,#0xe35e, LSL #16
71025db9bc  movk x19,#0x7, LSL #32
71025db9c0  str x20,[x24, #0x40]
71025db9c4  cbz x22,0x71025dba0c
71025db9c8  mov x23,x21
71025db9cc  b 0x71025db9d8
71025db9d0  mov x23,x22
71025db9d4  mov x22,x8
71025db9d8  ldr x8,[x22, #0x20]
71025db9dc  and x8,x8,#0xffffffffff
71025db9e0  cmp x8,x19
71025db9e4  b.ls 0x71025db9f4
71025db9e8  ldr x8,[x22]
71025db9ec  cbnz x8,0x71025db9d0
71025db9f0  b 0x71025dba60
71025db9f4  b.eq 0x71025dba14
71025db9f8  mov x23,x22
71025db9fc  ldr x8,[x23, #0x8]!
71025dba00  cbz x8,0x71025dba14
71025dba04  mov x22,x8
71025dba08  b 0x71025db9d8
71025dba0c  mov x22,x21
71025dba10  mov x23,x21
71025dba14  ldr x8,[x23]
71025dba18  cbz x8,0x71025dba6c
71025dba1c  ldr x22,[x20, #0x10]
71025dba20  cbz x22,0x71025dba54
71025dba24  add x8,x22,#0x8
71025dba28  ldaxr x9,[x8]
71025dba2c  sub x10,x9,#0x1
71025dba30  stlxr w11,x10,[x8]
71025dba34  cbnz w11,0x71025dba28
71025dba38  cbnz x9,0x71025dba54
71025dba3c  ldr x8,[x22]
71025dba40  ldr x8,[x8, #0x10]
71025dba44  mov x0,x22
71025dba48  blr x8
71025dba4c  mov x0,x22
71025dba50  bl 0x71039c2670
71025dba54  mov x0,x20
71025dba58  bl 0x710392eb40
71025dba5c  b 0x71025dbb00
71025dba60  mov x23,x22
71025dba64  ldr x8,[x23]
71025dba68  cbnz x8,0x71025dba1c
71025dba6c  mov w0,#0x10
71025dba70  orr w1,wzr,#0x30
71025dba74  bl 0x710392e290
71025dba78  mov x1,x0
71025dba7c  cbnz x0,0x71025dbac8
71025dba80  adrp x8,0x7105332000
71025dba84  ldr x0,[x8, #0xf00]
71025dba88  cbz x0,0x71025dbac4
71025dba8c  orr w8,wzr,#0x30
71025dba90  str wzr,[sp, #0xd0]
71025dba94  add x1,sp,#0xd0
71025dba98  str x8,[sp, #0xf0]
71025dba9c  ldr x8,[x0]
71025dbaa0  ldr x8,[x8, #0x30]
71025dbaa4  add x2,sp,#0xf0
71025dbaa8  blr x8
71025dbaac  tbz w0,#0x0,0x71025dbac4
71025dbab0  mov w0,#0x10
71025dbab4  orr w1,wzr,#0x30
71025dbab8  bl 0x710392e290
71025dbabc  mov x1,x0
71025dbac0  cbnz x0,0x71025dbac8
71025dbac4  mov x1,xzr
71025dbac8  stp x19,x20,[x1, #0x20]
71025dbacc  str x22,[x1, #0x10]
71025dbad0  stp xzr,xzr,[x1]
71025dbad4  str x1,[x23]
71025dbad8  ldr x8,[x24, #0x8]
71025dbadc  ldr x8,[x8]
71025dbae0  cbz x8,0x71025dbaec
71025dbae4  str x8,[x24, #0x8]
71025dbae8  ldr x1,[x23]
71025dbaec  ldr x0,[x21]
71025dbaf0  bl 0x71003e59f0
71025dbaf4  ldr x8,[x27]
71025dbaf8  add x8,x8,#0x1
71025dbafc  str x8,[x27]
71025dbb00  ldr w1,[sp, #0xc0]
71025dbb04  orr w19,wzr,#0xffffff
71025dbb08  cmp w1,w19
71025dbb0c  b.eq 0x71025dbb20
71025dbb10  adrp x8,0x7105332000
71025dbb14  ldr x0,[x8, #0xf20]
71025dbb18  bl 0x7103540b10
71025dbb1c  str w19,[sp, #0xc0]
71025dbb20  ldr x20,[x26, #0x10]
71025dbb24  str x24,[x26, #0x10]
71025dbb28  cbz x20,0x71025dbb6c
71025dbb2c  ldrb w8,[x20, #0x110]
71025dbb30  cbz w8,0x71025dbb38
71025dbb34  strb wzr,[x20, #0x110]
71025dbb38  ldrb w8,[x20, #0xf0]
71025dbb3c  cbz w8,0x71025dbb44
71025dbb40  strb wzr,[x20, #0xf0]
71025dbb44  ldrb w8,[x20, #0xd0]
71025dbb48  cbz w8,0x71025dbb50
71025dbb4c  strb wzr,[x20, #0xd0]
71025dbb50  ldrb w8,[x20, #0xa0]
71025dbb54  cbz w8,0x71025dbb5c
71025dbb58  strb wzr,[x20, #0xa0]
71025dbb5c  ldr x0,[x20, #0x10]
71025dbb60  bl 0x71025f72c0
71025dbb64  mov x0,x20
71025dbb68  bl 0x710392eb40
71025dbb6c  ldr x19,[x25]
71025dbb70  mov w0,#0x10
71025dbb74  orr w1,wzr,#0x70
71025dbb78  bl 0x710392e290
71025dbb7c  cbnz x0,0x71025dbbc4
71025dbb80  adrp x8,0x7105332000
71025dbb84  ldr x0,[x8, #0xf00]
71025dbb88  cbz x0,0x71025dbbc0
71025dbb8c  orr w8,wzr,#0x70
71025dbb90  str wzr,[sp, #0xd0]
71025dbb94  add x1,sp,#0xd0
71025dbb98  str x8,[sp, #0xf0]
71025dbb9c  ldr x8,[x0]
71025dbba0  ldr x8,[x8, #0x30]
71025dbba4  add x2,sp,#0xf0
71025dbba8  blr x8
71025dbbac  tbz w0,#0x0,0x71025dbbc0
71025dbbb0  mov w0,#0x10
71025dbbb4  orr w1,wzr,#0x70
71025dbbb8  bl 0x710392e290
71025dbbbc  cbnz x0,0x71025dbbc4
71025dbbc0  mov x0,xzr
71025dbbc4  mov x24,x0
71025dbbc8  mov w8,#0x101
71025dbbcc  str xzr,[x24, #0x10]!
71025dbbd0  stp xzr,xzr,[x0, #0x18]
71025dbbd4  strh w8,[x0, #0x28]
71025dbbd8  stp x19,x24,[x0]
71025dbbdc  ldr q0,[sp, #0x90]
71025dbbe0  ldr x8,[sp, #0x80]
71025dbbe4  mov x19,x0
71025dbbe8  str wzr,[x0, #0x2c]
71025dbbec  str q0,[x0, #0x30]
71025dbbf0  ldr q0,[sp, #0x50]
71025dbbf4  str q0,[x0, #0x40]
71025dbbf8  ldr q0,[sp, #0x10]
71025dbbfc  str q0,[x0, #0x50]
71025dbc00  ldr q0,[sp]
71025dbc04  str q0,[x0, #0x60]
71025dbc08  ldr x25,[x8, #0x3f0]
71025dbc0c  ldr x27,[x8, #0x3f8]
71025dbc10  cmp x25,x27
71025dbc14  b.eq 0x71025dc190
71025dbc18  adrp x21,0x7104337000
71025dbc1c  add x21,x21,#0xfdd
71025dbc20  orr w26,wzr,#0xffffff
71025dbc24  adrp x28,0x71043ce000
71025dbc28  add x28,x28,#0x119
71025dbc2c  str x24,[sp, #0x68]
71025dbc30  stp x19,x27,[sp, #0x48]
71025dbc34  ldr w0,[x25]
71025dbc38  mov x1,x21
71025dbc3c  bl 0x710353d910
71025dbc40  tbz w0,#0x0,0x71025dc128
71025dbc44  ldr w8,[x25]
71025dbc48  cmp w8,w26
71025dbc4c  b.eq 0x71025dbc84
71025dbc50  adrp x9,0x7105332000
71025dbc54  ldr x9,[x9, #0xf20]
71025dbc58  ldr x9,[x9, #0x78]
71025dbc5c  ldr x9,[x9]
71025dbc60  ldr x10,[x9, #0x40]
71025dbc64  ldr w10,[x10, #0x4]
71025dbc68  cmp w10,w8
71025dbc6c  b.ls 0x71025dbc84
71025dbc70  ldr x9,[x9, #0x60]
71025dbc74  add x8,x9,x8, LSL #0x5
71025dbc78  ldr x8,[x8, #0x18]
71025dbc7c  str x8,[sp, #0x90]
71025dbc80  b 0x71025dbc88
71025dbc84  str xzr,[sp, #0x90]
71025dbc88  mov w0,#0x10
71025dbc8c  orr w1,wzr,#0x18
71025dbc90  bl 0x710392e290
71025dbc94  mov x20,x0
71025dbc98  cbnz x0,0x71025dbce4
71025dbc9c  adrp x8,0x7105332000
71025dbca0  ldr x0,[x8, #0xf00]
71025dbca4  cbz x0,0x71025dbce0
71025dbca8  orr w8,wzr,#0x18
71025dbcac  str wzr,[sp, #0xd0]
71025dbcb0  add x1,sp,#0xd0
71025dbcb4  str x8,[sp, #0xf0]
71025dbcb8  ldr x8,[x0]
71025dbcbc  ldr x8,[x8, #0x30]
71025dbcc0  add x2,sp,#0xf0
71025dbcc4  blr x8
71025dbcc8  tbz w0,#0x0,0x71025dbce0
71025dbccc  mov w0,#0x10
71025dbcd0  orr w1,wzr,#0x18
71025dbcd4  bl 0x710392e290
71025dbcd8  mov x20,x0
71025dbcdc  cbnz x0,0x71025dbce4
71025dbce0  mov x20,xzr
71025dbce4  str w26,[x20]
71025dbce8  ldr w1,[x25]
71025dbcec  cmp w1,w26
71025dbcf0  str w1,[x20]
71025dbcf4  b.eq 0x71025dbd04
71025dbcf8  adrp x8,0x7105332000
71025dbcfc  ldr x0,[x8, #0xf20]
71025dbd00  bl 0x7103540a00
71025dbd04  add x0,sp,#0xf0
71025dbd08  stp xzr,xzr,[x20, #0x8]
71025dbd0c  stp xzr,xzr,[sp, #0xf8]
71025dbd10  str xzr,[sp, #0xf0]
71025dbd14  bl 0x710132e5f0
71025dbd18  ldr x22,[sp, #0xf8]
71025dbd1c  sub x0,x22,#0x18
71025dbd20  adrp x1,0x7104359000
71025dbd24  add x1,x1,#0x1e9
71025dbd28  sub x23,x22,#0x30
71025dbd2c  bl 0x71039c2720
71025dbd30  ldp x8,x9,[x22, #-0x28]
71025dbd34  cmp x8,x9
71025dbd38  b.cs 0x71025dbd58
71025dbd3c  str wzr,[x8, #0x18]
71025dbd40  stp xzr,xzr,[x8, #0x8]
71025dbd44  str xzr,[x8]
71025dbd48  ldur x8,[x22, #-0x28]
71025dbd4c  add x8,x8,#0x20
71025dbd50  stur x8,[x22, #-0x28]
71025dbd54  b 0x71025dbd64
71025dbd58  mov x0,x23
71025dbd5c  bl 0x710132e830
71025dbd60  ldur x8,[x22, #-0x28]
71025dbd64  sub x0,x8,#0x20
71025dbd68  mov x1,x28
71025dbd6c  bl 0x71039c2720
71025dbd70  ldur x8,[x22, #-0x28]
71025dbd74  orr w9,wzr,#0x3
71025dbd78  stur w9,[x8, #-0x8]
71025dbd7c  ldp x8,x9,[x22, #-0x28]
71025dbd80  cmp x8,x9
71025dbd84  b.cs 0x71025dbda4
71025dbd88  str wzr,[x8, #0x18]
71025dbd8c  stp xzr,xzr,[x8, #0x8]
71025dbd90  str xzr,[x8]
71025dbd94  ldur x8,[x22, #-0x28]
71025dbd98  add x8,x8,#0x20
71025dbd9c  stur x8,[x22, #-0x28]
71025dbda0  b 0x71025dbdb0
71025dbda4  mov x0,x23
71025dbda8  bl 0x710132e830
71025dbdac  ldur x8,[x22, #-0x28]
71025dbdb0  sub x0,x8,#0x20
71025dbdb4  mov x1,x28
71025dbdb8  bl 0x71039c2720
71025dbdbc  ldur x8,[x22, #-0x28]
71025dbdc0  mov w9,#0x2
71025dbdc4  stur w9,[x8, #-0x8]
71025dbdc8  ldp x8,x9,[x22, #-0x28]
71025dbdcc  cmp x8,x9
71025dbdd0  b.cs 0x71025dbdf0
71025dbdd4  str wzr,[x8, #0x18]
71025dbdd8  stp xzr,xzr,[x8, #0x8]
71025dbddc  str xzr,[x8]
71025dbde0  ldur x8,[x22, #-0x28]
71025dbde4  add x8,x8,#0x20
71025dbde8  stur x8,[x22, #-0x28]
71025dbdec  b 0x71025dbdfc
71025dbdf0  mov x0,x23
71025dbdf4  bl 0x710132e830
71025dbdf8  ldur x8,[x22, #-0x28]
71025dbdfc  sub x0,x8,#0x20
71025dbe00  mov x1,x28
71025dbe04  bl 0x71039c2720
71025dbe08  ldur x8,[x22, #-0x28]
71025dbe0c  mov w9,#0x1
71025dbe10  add x0,sp,#0xc0
71025dbe14  add x1,sp,#0xf0
71025dbe18  mov x2,x25
71025dbe1c  stur w9,[x8, #-0x8]
71025dbe20  bl 0x710367a9f0
71025dbe24  ldr x22,[sp, #0xc0]
71025dbe28  cbz x22,0x71025dbea4
71025dbe2c  mov w0,#0x10
71025dbe30  mov w1,#0x20
71025dbe34  bl 0x710392e290
71025dbe38  mov x23,x0
71025dbe3c  cbnz x0,0x71025dbe88
71025dbe40  adrp x8,0x7105332000
71025dbe44  ldr x0,[x8, #0xf00]
71025dbe48  cbz x0,0x71025dbe84
71025dbe4c  mov w8,#0x20
71025dbe50  str wzr,[sp, #0xb0]
71025dbe54  add x1,sp,#0xb0
71025dbe58  str x8,[sp, #0xd0]
71025dbe5c  ldr x8,[x0]
71025dbe60  ldr x8,[x8, #0x30]
71025dbe64  add x2,sp,#0xd0
71025dbe68  blr x8
71025dbe6c  tbz w0,#0x0,0x71025dbe84
71025dbe70  mov w0,#0x10
71025dbe74  mov w1,#0x20
71025dbe78  bl 0x710392e290
71025dbe7c  mov x23,x0
71025dbe80  cbnz x0,0x71025dbe88
71025dbe84  mov x23,xzr
71025dbe88  adrp x8,0x7105060000
71025dbe8c  add x8,x8,#0x348
71025dbe90  stp x8,xzr,[x23]
71025dbe94  stp xzr,x22,[x23, #0x10]
71025dbe98  ldr x28,[sp, #0xf0]
71025dbe9c  cbnz x28,0x71025dbeb0
71025dbea0  b 0x71025dbf64
71025dbea4  mov x23,xzr
71025dbea8  ldr x28,[sp, #0xf0]
71025dbeac  cbz x28,0x71025dbf64
71025dbeb0  mov x26,x21
71025dbeb4  ldr x21,[sp, #0xf8]
71025dbeb8  cmp x21,x28
71025dbebc  b.ne 0x71025dbed8
71025dbec0  mov x0,x28
71025dbec4  b 0x71025dbf50
71025dbec8  mov x0,x27
71025dbecc  stur x27,[x19, #-0x28]
71025dbed0  cbnz x0,0x71025dbf38
71025dbed4  b 0x71025dbf3c
71025dbed8  mov x19,x21
71025dbedc  sub x21,x21,#0x30
71025dbee0  ldurb w8,[x19, #-0x18]
71025dbee4  tbz w8,#0x0,0x71025dbef4
71025dbee8  ldur x0,[x19, #-0x8]
71025dbeec  cbz x0,0x71025dbef4
71025dbef0  bl 0x710392eb40
71025dbef4  ldr x27,[x21]
71025dbef8  cbz x27,0x71025dbf3c
71025dbefc  ldur x8,[x19, #-0x28]
71025dbf00  cmp x8,x27
71025dbf04  b.eq 0x71025dbec8
71025dbf08  mov x24,x8
71025dbf0c  ldrb w9,[x24, #-0x20]!
71025dbf10  tbz w9,#0x0,0x71025dbf20
71025dbf14  ldur x0,[x8, #-0x10]
71025dbf18  cbz x0,0x71025dbf20
71025dbf1c  bl 0x710392eb40
71025dbf20  cmp x27,x24
71025dbf24  mov x8,x24
71025dbf28  b.ne 0x71025dbf0c
71025dbf2c  ldr x0,[x21]
71025dbf30  stur x27,[x19, #-0x28]
71025dbf34  cbz x0,0x71025dbf3c
71025dbf38  bl 0x710392eb40
71025dbf3c  cmp x21,x28
71025dbf40  b.ne 0x71025dbed8
71025dbf44  ldr x0,[sp, #0xf0]
71025dbf48  ldp x19,x27,[sp, #0x48]
71025dbf4c  ldr x24,[sp, #0x68]
71025dbf50  mov x21,x26
71025dbf54  orr w26,wzr,#0xffffff
71025dbf58  str x28,[sp, #0xf8]
71025dbf5c  cbz x0,0x71025dbf64
71025dbf60  bl 0x710392eb40
71025dbf64  str x22,[x20, #0x8]
71025dbf68  ldr x22,[x20, #0x10]
71025dbf6c  adrp x28,0x71043ce000
71025dbf70  add x28,x28,#0x119
71025dbf74  str x23,[x20, #0x10]
71025dbf78  cbz x22,0x71025dbfac
71025dbf7c  add x8,x22,#0x8
71025dbf80  ldaxr x9,[x8]
71025dbf84  sub x10,x9,#0x1
71025dbf88  stlxr w11,x10,[x8]
71025dbf8c  cbnz w11,0x71025dbf80
71025dbf90  cbnz x9,0x71025dbfac
71025dbf94  ldr x8,[x22]
71025dbf98  ldr x8,[x8, #0x10]
71025dbf9c  mov x0,x22
71025dbfa0  blr x8
71025dbfa4  mov x0,x22
71025dbfa8  bl 0x71039c2670
71025dbfac  mov w0,#0x10
71025dbfb0  orr w1,wzr,#0x30
71025dbfb4  bl 0x710392e290
71025dbfb8  mov x23,x0
71025dbfbc  cbnz x0,0x71025dc008
71025dbfc0  adrp x8,0x7105332000
71025dbfc4  ldr x0,[x8, #0xf00]
71025dbfc8  cbz x0,0x71025dc004
71025dbfcc  orr w8,wzr,#0x30
71025dbfd0  str wzr,[sp, #0xd0]
71025dbfd4  add x1,sp,#0xd0
71025dbfd8  str x8,[sp, #0xf0]
71025dbfdc  ldr x8,[x0]
71025dbfe0  ldr x8,[x8, #0x30]
71025dbfe4  add x2,sp,#0xf0
71025dbfe8  blr x8
71025dbfec  tbz w0,#0x0,0x71025dc004
71025dbff0  mov w0,#0x10
71025dbff4  orr w1,wzr,#0x30
71025dbff8  bl 0x710392e290
71025dbffc  mov x23,x0
71025dc000  cbnz x0,0x71025dc008
71025dc004  mov x23,xzr
71025dc008  ldr x9,[sp, #0x90]
71025dc00c  stp x9,x20,[x23, #0x20]
71025dc010  ldr x8,[x24]
71025dc014  cbz x8,0x71025dc064
71025dc018  and x10,x9,#0xffffffffff
71025dc01c  mov x9,x24
71025dc020  b 0x71025dc02c
71025dc024  mov x9,x8
71025dc028  mov x8,x11
71025dc02c  ldr x11,[x8, #0x20]
71025dc030  and x11,x11,#0xffffffffff
71025dc034  cmp x10,x11
71025dc038  b.cs 0x71025dc048
71025dc03c  ldr x11,[x8]
71025dc040  cbnz x11,0x71025dc024
71025dc044  b 0x71025dc0e4
71025dc048  cmp x11,x10
71025dc04c  b.cs 0x71025dc06c
71025dc050  mov x9,x8
71025dc054  ldr x11,[x9, #0x8]!
71025dc058  cbz x11,0x71025dc06c
71025dc05c  mov x8,x11
71025dc060  b 0x71025dc02c
71025dc064  mov x8,x24
71025dc068  mov x9,x24
71025dc06c  ldr x10,[x9]
71025dc070  cbz x10,0x71025dc0f0
71025dc074  str xzr,[x23, #0x28]
71025dc078  cbz x20,0x71025dc0d8
71025dc07c  ldr x22,[x20, #0x10]
71025dc080  cbz x22,0x71025dc0b4
71025dc084  add x8,x22,#0x8
71025dc088  ldaxr x9,[x8]
71025dc08c  sub x10,x9,#0x1
71025dc090  stlxr w11,x10,[x8]
71025dc094  cbnz w11,0x71025dc088
71025dc098  cbnz x9,0x71025dc0b4
71025dc09c  ldr x8,[x22]
71025dc0a0  ldr x8,[x8, #0x10]
71025dc0a4  mov x0,x22
71025dc0a8  blr x8
71025dc0ac  mov x0,x22
71025dc0b0  bl 0x71039c2670
71025dc0b4  ldr w1,[x20]
71025dc0b8  cmp w1,w26
71025dc0bc  b.eq 0x71025dc0d0
71025dc0c0  adrp x8,0x7105332000
71025dc0c4  ldr x0,[x8, #0xf20]
71025dc0c8  bl 0x7103540b10
71025dc0cc  str w26,[x20]
71025dc0d0  mov x0,x20
71025dc0d4  bl 0x710392eb40
71025dc0d8  mov x0,x23
71025dc0dc  bl 0x710392eb40
71025dc0e0  b 0x71025dc128
71025dc0e4  mov x9,x8
71025dc0e8  ldr x10,[x9]
71025dc0ec  cbnz x10,0x71025dc074
71025dc0f0  stp xzr,xzr,[x23]
71025dc0f4  str x8,[x23, #0x10]
71025dc0f8  str x23,[x9]
71025dc0fc  ldr x8,[x19, #0x8]
71025dc100  ldr x8,[x8]
71025dc104  cbz x8,0x71025dc110
71025dc108  str x8,[x19, #0x8]
71025dc10c  ldr x23,[x9]
71025dc110  ldr x0,[x19, #0x10]
71025dc114  mov x1,x23
71025dc118  bl 0x71003e59f0
71025dc11c  ldr x8,[x19, #0x18]
71025dc120  add x8,x8,#0x1
71025dc124  str x8,[x19, #0x18]
71025dc128  add x25,x25,#0x4
71025dc12c  cmp x25,x27
71025dc130  b.ne 0x71025dbc34
71025dc134  ldr x8,[x19, #0x18]
71025dc138  cbz x8,0x71025dc190
71025dc13c  ldr x10,[x24]
71025dc140  cbz x10,0x71025dc190
71025dc144  mov x9,#0x7f7c
71025dc148  movk x9,#0xfa11, LSL #16
71025dc14c  movk x9,#0x11, LSL #32
71025dc150  mov x8,x24
71025dc154  ldr x11,[x10, #0x20]
71025dc158  and x11,x11,#0xfffffffffc
71025dc15c  cmp x11,x9
71025dc160  cset w11,cc
71025dc164  csel x8,x8,x10,cc
71025dc168  ldr x10,[x10, w11, UXTW #0x3]
71025dc16c  cbnz x10,0x71025dc154
71025dc170  cmp x8,x24
71025dc174  b.eq 0x71025dc190
71025dc178  ldr x10,[x8, #0x20]
71025dc17c  and x10,x10,#0xffffffffff
71025dc180  cmp x10,x9
71025dc184  b.hi 0x71025dc190
71025dc188  ldr x8,[x8, #0x28]
71025dc18c  str x8,[x19, #0x20]
71025dc190  ldr x26,[sp, #0x28]
71025dc194  ldr x20,[x26, #0x18]
71025dc198  str x19,[x26, #0x18]
71025dc19c  cbz x20,0x71025dc1b0
71025dc1a0  ldr x0,[x20, #0x10]
71025dc1a4  bl 0x7102650860
71025dc1a8  mov x0,x20
71025dc1ac  bl 0x710392eb40
71025dc1b0  ldr x19,[sp, #0x40]
71025dc1b4  adrp x2,0x7104317000
71025dc1b8  add x2,x2,#0x4bd
71025dc1bc  adrp x3,0x71043ab000
71025dc1c0  add x3,x3,#0x87b
71025dc1c4  add x0,sp,#0xf0
71025dc1c8  mov x1,x19
71025dc1cc  bl 0x7102618630
71025dc1d0  ldr w8,[sp, #0xf0]
71025dc1d4  ldr x25,[sp, #0x30]
71025dc1d8  orr w9,wzr,#0xffffff
71025dc1dc  cmp w8,w9
71025dc1e0  b.ne 0x71025dc204
71025dc1e4  adrp x2,0x7104317000
71025dc1e8  add x2,x2,#0x4bd
71025dc1ec  adrp x3,0x7104306000
71025dc1f0  add x3,x3,#0x3af
71025dc1f4  add x0,sp,#0xd0
71025dc1f8  mov x1,x19
71025dc1fc  bl 0x7102618630
71025dc200  b 0x71025dc20c
71025dc204  str w8,[sp, #0xd0]
71025dc208  str w9,[sp, #0xf0]
71025dc20c  ldr w20,[sp, #0xd0]
71025dc210  orr w19,wzr,#0xffffff
71025dc214  cmp w20,w19
71025dc218  b.eq 0x71025dc278
71025dc21c  ldr x2,[x26, #0x8]
71025dc220  ldr x1,[sp, #0x70]
71025dc224  add x0,sp,#0xf0
71025dc228  add x3,sp,#0xd0
71025dc22c  mov w5,#0x1
71025dc230  mov w4,wzr
71025dc234  bl 0x7103176db0
71025dc238  ldr x8,[sp, #0xf0]
71025dc23c  str xzr,[sp, #0xf0]
71025dc240  ldr x22,[x26, #0x40]
71025dc244  str x8,[x26, #0x40]
71025dc248  cbz x22,0x71025dc25c
71025dc24c  mov x0,x22
71025dc250  bl 0x7102619a80
71025dc254  mov x0,x22
71025dc258  bl 0x710392eb40
71025dc25c  adrp x8,0x7105332000
71025dc260  ldr x0,[x8, #0xf20]
71025dc264  mov w1,w20
71025dc268  str xzr,[sp, #0xf0]
71025dc26c  bl 0x7103540b10
71025dc270  orr w8,wzr,#0xffffff
71025dc274  str w8,[sp, #0xd0]
71025dc278  ldr x20,[sp, #0x40]
71025dc27c  adrp x2,0x710437a000
71025dc280  add x2,x2,#0xfdd
71025dc284  adrp x3,0x71043ab000
71025dc288  add x3,x3,#0x87b
71025dc28c  add x0,sp,#0xf0
71025dc290  mov x1,x20
71025dc294  bl 0x7102618630
71025dc298  ldr w8,[sp, #0xf0]
71025dc29c  cmp w8,w19
71025dc2a0  b.ne 0x71025dc2c4
71025dc2a4  adrp x2,0x710437a000
71025dc2a8  add x2,x2,#0xfdd
71025dc2ac  adrp x3,0x7104306000
71025dc2b0  add x3,x3,#0x3af
71025dc2b4  add x0,sp,#0xd0
71025dc2b8  mov x1,x20
71025dc2bc  bl 0x7102618630
71025dc2c0  b 0x71025dc2d0
71025dc2c4  str w8,[sp, #0xd0]
71025dc2c8  orr w8,wzr,#0xffffff
71025dc2cc  str w8,[sp, #0xf0]
71025dc2d0  ldr w20,[sp, #0xd0]
71025dc2d4  orr w8,wzr,#0xffffff
71025dc2d8  cmp w20,w8
71025dc2dc  b.eq 0x71025dc33c
71025dc2e0  ldr x2,[x26, #0x8]
71025dc2e4  ldr x1,[sp, #0x70]
71025dc2e8  add x0,sp,#0xf0
71025dc2ec  add x3,sp,#0xd0
71025dc2f0  mov w4,#0x4
71025dc2f4  mov w5,#0x1
71025dc2f8  bl 0x7103176db0
71025dc2fc  ldr x8,[sp, #0xf0]
71025dc300  str xzr,[sp, #0xf0]
71025dc304  ldr x22,[x26, #0x48]
71025dc308  str x8,[x26, #0x48]
71025dc30c  cbz x22,0x71025dc320
71025dc310  mov x0,x22
71025dc314  bl 0x7102619a80
71025dc318  mov x0,x22
71025dc31c  bl 0x710392eb40
71025dc320  adrp x8,0x7105332000
71025dc324  ldr x0,[x8, #0xf20]
71025dc328  mov w1,w20
71025dc32c  str xzr,[sp, #0xf0]
71025dc330  bl 0x7103540b10
71025dc334  orr w8,wzr,#0xffffff
71025dc338  str w8,[sp, #0xd0]
71025dc33c  ldr x9,[sp, #0x80]
71025dc340  ldr x8,[x9, #0x408]
71025dc344  ldr x9,[x9, #0x410]
71025dc348  orr w19,wzr,#0xffffff
71025dc34c  cmp x8,x9
71025dc350  b.eq 0x71025dc39c
71025dc354  adrp x10,0x7105332000
71025dc358  ldr x23,[x10, #0xf20]
71025dc35c  ldr x10,[x23, #0x78]
71025dc360  ldr x10,[x10]
71025dc364  ldr x10,[x10, #0x78]
71025dc368  mov x12,#0x4e8a
71025dc36c  movk x12,#0x172b, LSL #16
71025dc370  mov w11,#0x34
71025dc374  movk x12,#0xb, LSL #32
71025dc378  ldr w20,[x8]
71025dc37c  umaddl x13,w20,w11,x10
71025dc380  ldr x13,[x13, #0x8]
71025dc384  and x13,x13,#0xffffffffff
71025dc388  eor x13,x13,x12
71025dc38c  cbz x13,0x71025dc538
71025dc390  add x8,x8,#0x4
71025dc394  cmp x9,x8
71025dc398  b.ne 0x71025dc378
71025dc39c  orr w21,wzr,#0xffffff
71025dc3a0  mov x20,x26
71025dc3a4  ldr w24,[x20, #0x28]!
71025dc3a8  cmp w24,w19
71025dc3ac  b.eq 0x71025dc3fc
71025dc3b0  adrp x8,0x7105332000
71025dc3b4  ldr x22,[x8, #0xf20]
71025dc3b8  ldr w8,[x22, #0x48]
71025dc3bc  cmp w8,w24
71025dc3c0  b.ls 0x71025dc3fc
71025dc3c4  ldr x23,[x22]
71025dc3c8  mov x0,x23
71025dc3cc  bl 0x71039c1a40
71025dc3d0  ldr x8,[x22, #0x40]
71025dc3d4  mov w9,#0x48
71025dc3d8  madd x9,x24,x9,x8
71025dc3dc  ldrb w9,[x9, #0x8]
71025dc3e0  tbz w9,#0x0,0x71025dc3f4
71025dc3e4  mov w9,#0x48
71025dc3e8  madd x1,x24,x9,x8
71025dc3ec  mov x0,x22
71025dc3f0  bl 0x710353f5a0
71025dc3f4  mov x0,x23
71025dc3f8  bl 0x71039c1a50
71025dc3fc  orr w8,wzr,#0xffffff
71025dc400  cmp w21,w8
71025dc404  str w21,[x20]
71025dc408  b.eq 0x71025dc420
71025dc40c  ldr x8,[sp, #0x38]
71025dc410  ldr x1,[x8]
71025dc414  ldr x0,[sp, #0x70]
71025dc418  mov x2,x20
71025dc41c  bl 0x7103177110
71025dc420  ldr x8,[sp, #0x80]
71025dc424  ldr x23,[x8, #0x420]
71025dc428  ldr x19,[x8, #0x428]
71025dc42c  ldr x24,[sp, #0xa0]
71025dc430  cmp x23,x19
71025dc434  add x20,x26,#0x68
71025dc438  b.eq 0x71025dc478
71025dc43c  orr w21,wzr,#0xffffff
71025dc440  adrp x22,0x7105332000
71025dc444  add x0,sp,#0xf0
71025dc448  mov x1,x20
71025dc44c  mov x2,x23
71025dc450  bl 0x7102653aa0
71025dc454  ldr w1,[sp, #0xf4]
71025dc458  cmp w1,w21
71025dc45c  b.eq 0x71025dc46c
71025dc460  ldr x0,[x22, #0xf20]
71025dc464  bl 0x7103540b10
71025dc468  str w21,[sp, #0xf4]
71025dc46c  add x23,x23,#0x4
71025dc470  cmp x19,x23
71025dc474  b.ne 0x71025dc444
71025dc478  adrp x2,0x7104316000
71025dc47c  add x2,x2,#0xe16
71025dc480  add x0,sp,#0xf0
71025dc484  mov x1,x20
71025dc488  bl 0x7102653da0
71025dc48c  ldr w19,[sp, #0xf0]
71025dc490  cmn w19,#0x1
71025dc494  b.eq 0x71025dc530
71025dc498  ldr w20,[sp, #0xf4]
71025dc49c  ldr w22,[x26, #0x2c]
71025dc4a0  orr w21,wzr,#0xffffff
71025dc4a4  cmp w20,w21
71025dc4a8  str w20,[x26, #0x2c]
71025dc4ac  b.eq 0x71025dc4c0
71025dc4b0  adrp x8,0x7105332000
71025dc4b4  ldr x0,[x8, #0xf20]
71025dc4b8  mov w1,w20
71025dc4bc  bl 0x7103540a00
71025dc4c0  cmp w22,w21
71025dc4c4  b.eq 0x71025dc4d8
71025dc4c8  adrp x8,0x7105332000
71025dc4cc  ldr x0,[x8, #0xf20]
71025dc4d0  mov w1,w22
71025dc4d4  bl 0x7103540b10
71025dc4d8  ldr x13,[sp, #0x70]
71025dc4dc  ldr x8,[sp, #0x38]
71025dc4e0  mov x9,x13
71025dc4e4  ldr x8,[x8]
71025dc4e8  ldr x10,[x9, #0x58]!
71025dc4ec  cbz x10,0x71025dc588
71025dc4f0  add x11,x13,#0x58
71025dc4f4  b 0x71025dc500
71025dc4f8  mov x11,x10
71025dc4fc  mov x10,x12
71025dc500  ldr x12,[x10, #0x20]
71025dc504  cmp x12,x8
71025dc508  b.ls 0x71025dc51c
71025dc50c  ldr x12,[x10]
71025dc510  mov x11,x10
71025dc514  cbnz x12,0x71025dc4f8
71025dc518  b 0x71025dc58c
71025dc51c  b.cs 0x71025dc58c
71025dc520  ldr x12,[x10, #0x8]!
71025dc524  mov x11,x10
71025dc528  cbnz x12,0x71025dc4f8
71025dc52c  b 0x71025dc58c
71025dc530  ldr w20,[sp, #0xf4]
71025dc534  b 0x71025dc614
71025dc538  orr w21,wzr,#0xffffff
71025dc53c  cmp w20,w21
71025dc540  b.eq 0x71025dc3a0
71025dc544  ldr w8,[x23, #0x48]
71025dc548  cmp w8,w20
71025dc54c  b.ls 0x71025dd0f0
71025dc550  ldr x22,[x23]
71025dc554  mov x0,x22
71025dc558  bl 0x71039c1a40
71025dc55c  ldr x8,[x23, #0x40]
71025dc560  mov w9,#0x48
71025dc564  madd x9,x20,x9,x8
71025dc568  ldrb w9,[x9, #0x8]
71025dc56c  tbnz w9,#0x0,0x71025dd0dc
71025dc570  mov x0,x22
71025dc574  bl 0x71039c1a50
71025dc578  mov x0,x23
71025dc57c  mov w1,w20
71025dc580  bl 0x7103540d50
71025dc584  b 0x71025dd0f0
71025dc588  mov x11,x9
71025dc58c  ldr x10,[x11]
71025dc590  ldr x10,[x10, #0x28]
71025dc594  str w19,[x10, #0x210]
71025dc598  ldr x10,[x13, #0x20]
71025dc59c  cmp x10,x8
71025dc5a0  b.ne 0x71025dc614
71025dc5a4  ldr w10,[x13, #0x38]
71025dc5a8  cmp w10,#0x2
71025dc5ac  b.gt 0x71025dc614
71025dc5b0  ldr x10,[x9]
71025dc5b4  cbz x10,0x71025dc5f4
71025dc5b8  add x9,x13,#0x58
71025dc5bc  b 0x71025dc5c8
71025dc5c0  mov x9,x10
71025dc5c4  mov x10,x11
71025dc5c8  ldr x11,[x10, #0x20]
71025dc5cc  cmp x11,x8
71025dc5d0  b.ls 0x71025dc5e4
71025dc5d4  ldr x11,[x10]
71025dc5d8  mov x9,x10
71025dc5dc  cbnz x11,0x71025dc5c0
71025dc5e0  b 0x71025dc5f4
71025dc5e4  b.cs 0x71025dc5f4
71025dc5e8  ldr x11,[x10, #0x8]!
71025dc5ec  mov x9,x10
71025dc5f0  cbnz x11,0x71025dc5c0
71025dc5f4  ldr x8,[x9]
71025dc5f8  ldr x8,[x8, #0x28]
71025dc5fc  ldr x0,[x8, #0x240]
71025dc600  cbz x0,0x71025dd4f8
71025dc604  add x1,x8,#0x210
71025dc608  ldr x8,[x0]
71025dc60c  ldr x8,[x8, #0x30]
71025dc610  blr x8
71025dc614  orr w19,wzr,#0xffffff
71025dc618  cmp w20,w19
71025dc61c  b.eq 0x71025dc634
71025dc620  adrp x8,0x7105332000
71025dc624  ldr x0,[x8, #0xf20]
71025dc628  mov w1,w20
71025dc62c  bl 0x7103540b10
71025dc630  str w19,[sp, #0xf4]
71025dc634  ldr x8,[sp, #0x80]
71025dc638  ldr x20,[x8, #0x438]
71025dc63c  ldr x19,[x8, #0x440]
71025dc640  cmp x20,x19
71025dc644  b.eq 0x71025dc688
71025dc648  add x23,x26,#0x98
71025dc64c  orr w21,wzr,#0xffffff
71025dc650  adrp x22,0x7105332000
71025dc654  add x0,sp,#0xf0
71025dc658  mov x1,x23
71025dc65c  mov x2,x20
71025dc660  bl 0x7102653aa0
71025dc664  ldr w1,[sp, #0xf4]
71025dc668  cmp w1,w21
71025dc66c  b.eq 0x71025dc67c
71025dc670  ldr x0,[x22, #0xf20]
71025dc674  bl 0x7103540b10
71025dc678  str w21,[sp, #0xf4]
71025dc67c  add x20,x20,#0x4
71025dc680  cmp x19,x20
71025dc684  b.ne 0x71025dc654
71025dc688  ldrb w8,[x26, #0xb8]
71025dc68c  cbz w8,0x71025dc7fc
71025dc690  add x1,x26,#0x98
71025dc694  adrp x2,0x710436a000
71025dc698  add x2,x2,#0x285
71025dc69c  add x0,sp,#0xf0
71025dc6a0  bl 0x7102653da0
71025dc6a4  ldr w19,[sp, #0xf0]
71025dc6a8  cmn w19,#0x1
71025dc6ac  b.eq 0x71025dc748
71025dc6b0  ldr w20,[sp, #0xf4]
71025dc6b4  ldr w23,[x26, #0x30]
71025dc6b8  orr w21,wzr,#0xffffff
71025dc6bc  cmp w20,w21
71025dc6c0  str w20,[x26, #0x30]
71025dc6c4  b.eq 0x71025dc6d8
71025dc6c8  adrp x8,0x7105332000
71025dc6cc  ldr x0,[x8, #0xf20]
71025dc6d0  mov w1,w20
71025dc6d4  bl 0x7103540a00
71025dc6d8  cmp w23,w21
71025dc6dc  b.eq 0x71025dc6f0
71025dc6e0  adrp x8,0x7105332000
71025dc6e4  ldr x0,[x8, #0xf20]
71025dc6e8  mov w1,w23
71025dc6ec  bl 0x7103540b10
71025dc6f0  ldr x13,[sp, #0x70]
71025dc6f4  str w19,[x26, #0x34]
71025dc6f8  ldr x8,[x26, #0x8]
71025dc6fc  mov x9,x13
71025dc700  ldr x10,[x9, #0x58]!
71025dc704  cbz x10,0x71025dc750
71025dc708  add x11,x13,#0x58
71025dc70c  b 0x71025dc718
71025dc710  mov x11,x10
71025dc714  mov x10,x12
71025dc718  ldr x12,[x10, #0x20]
71025dc71c  cmp x12,x8
71025dc720  b.ls 0x71025dc734
71025dc724  ldr x12,[x10]
71025dc728  mov x11,x10
71025dc72c  cbnz x12,0x71025dc710
71025dc730  b 0x71025dc754
71025dc734  b.cs 0x71025dc754
71025dc738  ldr x12,[x10, #0x8]!
71025dc73c  mov x11,x10
71025dc740  cbnz x12,0x71025dc710
71025dc744  b 0x71025dc754
71025dc748  ldr w20,[sp, #0xf4]
71025dc74c  b 0x71025dc7dc
71025dc750  mov x11,x9
71025dc754  ldr x10,[x11]
71025dc758  ldr x10,[x10, #0x28]
71025dc75c  str w19,[x10, #0x290]
71025dc760  ldr x10,[x13, #0x20]
71025dc764  cmp x10,x8
71025dc768  b.ne 0x71025dc7dc
71025dc76c  ldr w10,[x13, #0x38]
71025dc770  cmp w10,#0x2
71025dc774  b.gt 0x71025dc7dc
71025dc778  ldr x10,[x9]
71025dc77c  cbz x10,0x71025dc7bc
71025dc780  add x9,x13,#0x58
71025dc784  b 0x71025dc790
71025dc788  mov x9,x10
71025dc78c  mov x10,x11
71025dc790  ldr x11,[x10, #0x20]
71025dc794  cmp x11,x8
71025dc798  b.ls 0x71025dc7ac
71025dc79c  ldr x11,[x10]
71025dc7a0  mov x9,x10
71025dc7a4  cbnz x11,0x71025dc788
71025dc7a8  b 0x71025dc7bc
71025dc7ac  b.cs 0x71025dc7bc
71025dc7b0  ldr x11,[x10, #0x8]!
71025dc7b4  mov x9,x10
71025dc7b8  cbnz x11,0x71025dc788
71025dc7bc  ldr x8,[x9]
71025dc7c0  ldr x8,[x8, #0x28]
71025dc7c4  ldr x0,[x8, #0x2c0]
71025dc7c8  cbz x0,0x71025dd4f8
71025dc7cc  add x1,x8,#0x290
71025dc7d0  ldr x8,[x0]
71025dc7d4  ldr x8,[x8, #0x30]
71025dc7d8  blr x8
71025dc7dc  orr w19,wzr,#0xffffff
71025dc7e0  cmp w20,w19
71025dc7e4  b.eq 0x71025dc7fc
71025dc7e8  adrp x8,0x7105332000
71025dc7ec  ldr x0,[x8, #0xf20]
71025dc7f0  mov w1,w20
71025dc7f4  bl 0x7103540b10
71025dc7f8  str w19,[sp, #0xf4]
71025dc7fc  ldr x8,[sp, #0x80]
71025dc800  ldr x23,[x8, #0x450]
71025dc804  ldr x19,[x8, #0x458]
71025dc808  add x20,x26,#0x80
71025dc80c  cmp x23,x19
71025dc810  b.eq 0x71025dc850
71025dc814  orr w21,wzr,#0xffffff
71025dc818  adrp x22,0x7105332000
71025dc81c  add x0,sp,#0xf0
71025dc820  mov x1,x20
71025dc824  mov x2,x23
71025dc828  bl 0x7102653aa0
71025dc82c  ldr w1,[sp, #0xf4]
71025dc830  cmp w1,w21
71025dc834  b.eq 0x71025dc844
71025dc838  ldr x0,[x22, #0xf20]
71025dc83c  bl 0x7103540b10
71025dc840  str w21,[sp, #0xf4]
71025dc844  add x23,x23,#0x4
71025dc848  cmp x19,x23
71025dc84c  b.ne 0x71025dc81c
71025dc850  adrp x2,0x71043ab000
71025dc854  add x2,x2,#0x875
71025dc858  add x0,sp,#0xf0
71025dc85c  mov x1,x20
71025dc860  bl 0x7102653da0
71025dc864  ldr w19,[sp, #0xf0]
71025dc868  cmn w19,#0x1
71025dc86c  b.eq 0x71025dc908
71025dc870  ldr w20,[sp, #0xf4]
71025dc874  ldr w22,[x26, #0x38]
71025dc878  orr w21,wzr,#0xffffff
71025dc87c  cmp w20,w21
71025dc880  str w20,[x26, #0x38]
71025dc884  b.eq 0x71025dc898
71025dc888  adrp x8,0x7105332000
71025dc88c  ldr x0,[x8, #0xf20]
71025dc890  mov w1,w20
71025dc894  bl 0x7103540a00
71025dc898  cmp w22,w21
71025dc89c  b.eq 0x71025dc8b0
71025dc8a0  adrp x8,0x7105332000
71025dc8a4  ldr x0,[x8, #0xf20]
71025dc8a8  mov w1,w22
71025dc8ac  bl 0x7103540b10
71025dc8b0  ldr x13,[sp, #0x70]
71025dc8b4  ldr x8,[sp, #0x38]
71025dc8b8  mov x9,x13
71025dc8bc  ldr x8,[x8]
71025dc8c0  ldr x10,[x9, #0x58]!
71025dc8c4  cbz x10,0x71025dc910
71025dc8c8  add x11,x13,#0x58
71025dc8cc  b 0x71025dc8d8
71025dc8d0  mov x11,x10
71025dc8d4  mov x10,x12
71025dc8d8  ldr x12,[x10, #0x20]
71025dc8dc  cmp x12,x8
71025dc8e0  b.ls 0x71025dc8f4
71025dc8e4  ldr x12,[x10]
71025dc8e8  mov x11,x10
71025dc8ec  cbnz x12,0x71025dc8d0
71025dc8f0  b 0x71025dc914
71025dc8f4  b.cs 0x71025dc914
71025dc8f8  ldr x12,[x10, #0x8]!
71025dc8fc  mov x11,x10
71025dc900  cbnz x12,0x71025dc8d0
71025dc904  b 0x71025dc914
71025dc908  ldr w20,[sp, #0xf4]
71025dc90c  b 0x71025dc99c
71025dc910  mov x11,x9
71025dc914  ldr x10,[x11]
71025dc918  ldr x10,[x10, #0x28]
71025dc91c  str w19,[x10, #0x2d0]
71025dc920  ldr x10,[x13, #0x20]
71025dc924  cmp x10,x8
71025dc928  b.ne 0x71025dc99c
71025dc92c  ldr w10,[x13, #0x38]
71025dc930  cmp w10,#0x2
71025dc934  b.gt 0x71025dc99c
71025dc938  ldr x10,[x9]
71025dc93c  cbz x10,0x71025dc97c
71025dc940  add x9,x13,#0x58
71025dc944  b 0x71025dc950
71025dc948  mov x9,x10
71025dc94c  mov x10,x11
71025dc950  ldr x11,[x10, #0x20]
71025dc954  cmp x11,x8
71025dc958  b.ls 0x71025dc96c
71025dc95c  ldr x11,[x10]
71025dc960  mov x9,x10
71025dc964  cbnz x11,0x71025dc948
71025dc968  b 0x71025dc97c
71025dc96c  b.cs 0x71025dc97c
71025dc970  ldr x11,[x10, #0x8]!
71025dc974  mov x9,x10
71025dc978  cbnz x11,0x71025dc948
71025dc97c  ldr x8,[x9]
71025dc980  ldr x8,[x8, #0x28]
71025dc984  ldr x0,[x8, #0x300]
71025dc988  cbz x0,0x71025dd4f8
71025dc98c  add x1,x8,#0x2d0
71025dc990  ldr x8,[x0]
71025dc994  ldr x8,[x8, #0x30]
71025dc998  blr x8
71025dc99c  orr w19,wzr,#0xffffff
71025dc9a0  cmp w20,w19
71025dc9a4  b.eq 0x71025dc9bc
71025dc9a8  adrp x8,0x7105332000
71025dc9ac  ldr x0,[x8, #0xf20]
71025dc9b0  mov w1,w20
71025dc9b4  bl 0x7103540b10
71025dc9b8  str w19,[sp, #0xf4]
71025dc9bc  adrp x2,0x710427e000
71025dc9c0  add x2,x2,#0x8f3
71025dc9c4  adrp x3,0x71042f6000
71025dc9c8  add x3,x3,#0x29
71025dc9cc  add x0,sp,#0xf0
71025dc9d0  add x20,sp,#0xf0
71025dc9d4  bl 0x7101ea04d0
71025dc9d8  ldr x9,[sp, #0x80]
71025dc9dc  ldr x8,[x9, #0x3f0]
71025dc9e0  ldr x9,[x9, #0x3f8]
71025dc9e4  orr w19,wzr,#0xffffff
71025dc9e8  cmp x8,x9
71025dc9ec  b.eq 0x71025dcaa8
71025dc9f0  ldrh w11,[sp, #0x1f0]
71025dc9f4  cbz x11,0x71025dca40
71025dc9f8  add x12,x20,x11
71025dc9fc  mov w10,#0xffffffff
71025dca00  add x13,sp,#0xf0
71025dca04  adrp x14,0x7104754000
71025dca08  add x14,x14,#0x84
71025dca0c  ldrb w15,[x13], #0x1
71025dca10  sub w16,w15,#0x41
71025dca14  add w17,w15,#0x20
71025dca18  cmp w16,#0x1a
71025dca1c  csel w15,w17,w15,cc
71025dca20  eor w15,w15,w10
71025dca24  and w15,w15,#0xff
71025dca28  cmp x13,x12
71025dca2c  ldr w15,[x14, w15, UXTW #0x2]
71025dca30  eor w10,w15,w10, LSR #0x8
71025dca34  b.cc 0x71025dca0c
71025dca38  mvn w10,w10
71025dca3c  b 0x71025dca44
71025dca40  mov x10,xzr
71025dca44  bfm x10,x11,#0x20,#0x7
71025dca48  adrp x11,0x7105332000
71025dca4c  ldr x0,[x11, #0xf20]
71025dca50  orr w11,wzr,#0xffffff
71025dca54  ldr w20,[x8]
71025dca58  cmp w20,w11
71025dca5c  b.eq 0x71025dca90
71025dca60  ldr x12,[x0, #0x78]
71025dca64  ldr x12,[x12]
71025dca68  ldr x13,[x12, #0x40]
71025dca6c  ldr w13,[x13, #0x4]
71025dca70  cmp w13,w20
71025dca74  b.ls 0x71025dca90
71025dca78  ldr x12,[x12, #0x60]
71025dca7c  add x12,x12,x20, LSL #0x5
71025dca80  ldr x12,[x12, #0x18]
71025dca84  cmp x12,x10
71025dca88  b.ne 0x71025dca9c
71025dca8c  b 0x71025dcb94
71025dca90  mov x12,xzr
71025dca94  cmp x12,x10
71025dca98  b.eq 0x71025dcb94
71025dca9c  add x8,x8,#0x4
71025dcaa0  cmp x9,x8
71025dcaa4  b.ne 0x71025dca54
71025dcaa8  orr w21,wzr,#0xffffff
71025dcaac  mov x20,x26
71025dcab0  ldr w1,[x20, #0x3c]!
71025dcab4  cmp w1,w19
71025dcab8  b.eq 0x71025dcac8
71025dcabc  adrp x8,0x7105332000
71025dcac0  ldr x0,[x8, #0xf20]
71025dcac4  bl 0x7103540b10
71025dcac8  orr w19,wzr,#0xffffff
71025dcacc  cmp w21,w19
71025dcad0  str w21,[x20]
71025dcad4  b.eq 0x71025dcaec
71025dcad8  ldr x8,[sp, #0x38]
71025dcadc  ldr x1,[x8]
71025dcae0  ldr x0,[sp, #0x70]
71025dcae4  mov x2,x20
71025dcae8  bl 0x7103176a40
71025dcaec  mov x1,#0x1367
71025dcaf0  movk x1,#0xa7b9, LSL #16
71025dcaf4  movk x1,#0x3f, LSL #32
71025dcaf8  add x0,sp,#0xf0
71025dcafc  bl 0x710353da30
71025dcb00  ldr w1,[x26, #0xbc]
71025dcb04  ldr w20,[sp, #0xf0]
71025dcb08  cmp w1,w19
71025dcb0c  b.eq 0x71025dcb1c
71025dcb10  adrp x8,0x7105332000
71025dcb14  ldr x0,[x8, #0xf20]
71025dcb18  bl 0x7103540b10
71025dcb1c  mov x1,#0x365f
71025dcb20  movk x1,#0x5abf, LSL #16
71025dcb24  movk x1,#0x34, LSL #32
71025dcb28  add x0,sp,#0xd0
71025dcb2c  str w20,[x26, #0xbc]
71025dcb30  bl 0x710353da30
71025dcb34  ldr w20,[sp, #0xd0]
71025dcb38  orr w19,wzr,#0xffffff
71025dcb3c  cmp w20,w19
71025dcb40  b.eq 0x71025dcbec
71025dcb44  ldr x2,[x26, #0x8]
71025dcb48  ldr x1,[sp, #0x70]
71025dcb4c  add x0,sp,#0xf0
71025dcb50  add x3,sp,#0xd0
71025dcb54  mov w5,#0x1
71025dcb58  mov w4,wzr
71025dcb5c  bl 0x7103176db0
71025dcb60  ldr x8,[sp, #0xf0]
71025dcb64  str xzr,[sp, #0xf0]
71025dcb68  ldr x22,[x26, #0xc0]
71025dcb6c  str x8,[x26, #0xc0]
71025dcb70  cbz x22,0x71025dcbb0
71025dcb74  mov x0,x22
71025dcb78  bl 0x7102619a80
71025dcb7c  mov x0,x22
71025dcb80  bl 0x710392eb40
71025dcb84  str xzr,[sp, #0xf0]
71025dcb88  ldr x8,[x26, #0xc0]
71025dcb8c  cbnz x8,0x71025dcbb8
71025dcb90  b 0x71025dcbd4
71025dcb94  orr w21,wzr,#0xffffff
71025dcb98  cmp w20,w21
71025dcb9c  b.eq 0x71025dcaac
71025dcba0  mov w1,w20
71025dcba4  bl 0x7103540a00
71025dcba8  mov w21,w20
71025dcbac  b 0x71025dcaac
71025dcbb0  str xzr,[sp, #0xf0]
71025dcbb4  cbz x8,0x71025dcbd4
71025dcbb8  strb wzr,[x8, #0x18]
71025dcbbc  ldr x8,[x8, #0x10]
71025dcbc0  cbz x8,0x71025dcbd4
71025dcbc4  ldr x8,[x8]
71025dcbc8  ldrb w9,[x8]
71025dcbcc  cbz w9,0x71025dcbd4
71025dcbd0  strb wzr,[x8]
71025dcbd4  adrp x8,0x7105332000
71025dcbd8  ldr x0,[x8, #0xf20]
71025dcbdc  mov w1,w20
71025dcbe0  bl 0x7103540b10
71025dcbe4  orr w8,wzr,#0xffffff
71025dcbe8  str w8,[sp, #0xd0]
71025dcbec  mov x1,#0xdb62
71025dcbf0  movk x1,#0xc5de, LSL #16
71025dcbf4  movk x1,#0x3f, LSL #32
71025dcbf8  add x0,sp,#0xf0
71025dcbfc  bl 0x710353da30
71025dcc00  ldr w1,[x26, #0xc8]
71025dcc04  ldr w20,[sp, #0xf0]
71025dcc08  cmp w1,w19
71025dcc0c  b.eq 0x71025dcc1c
71025dcc10  adrp x8,0x7105332000
71025dcc14  ldr x0,[x8, #0xf20]
71025dcc18  bl 0x7103540b10
71025dcc1c  mov x0,x26
71025dcc20  mov x1,x25
71025dcc24  str w20,[x26, #0xc8]
71025dcc28  bl 0x7102633260
71025dcc2c  ldr x8,[x24, #0x328]
71025dcc30  ldrb w9,[x8, #0x8]
71025dcc34  cbz w9,0x71025dcc50
71025dcc38  adrp x9,0x710532a000
71025dcc3c  ldr x9,[x9, #0x9d8]
71025dcc40  ldr x9,[x9]
71025dcc44  ldr x0,[x9, #0x1f0]
71025dcc48  ldr x1,[x8]
71025dcc4c  bl 0x7103169c70
71025dcc50  stp xzr,xzr,[sp, #0x108]
71025dcc54  str xzr,[sp, #0xf0]
71025dcc58  stp xzr,xzr,[sp, #0xf8]
71025dcc5c  ldp x21,x19,[x24, #0x1a8]
71025dcc60  subs x20,x19,x21
71025dcc64  b.eq 0x71025dccdc
71025dcc68  asr x22,x20,#0x3
71025dcc6c  lsr x8,x22,#0x3d
71025dcc70  cbnz x8,0x71025dd4f8
71025dcc74  mov w0,#0x10
71025dcc78  mov x1,x20
71025dcc7c  bl 0x710392e290
71025dcc80  cbnz x0,0x71025dccc4
71025dcc84  adrp x8,0x7105332000
71025dcc88  ldr x0,[x8, #0xf00]
71025dcc8c  cbz x0,0x71025dccc0
71025dcc90  str wzr,[sp, #0xc0]
71025dcc94  str x20,[sp, #0xd0]
71025dcc98  ldr x8,[x0]
71025dcc9c  ldr x8,[x8, #0x30]
71025dcca0  add x1,sp,#0xc0
71025dcca4  add x2,sp,#0xd0
71025dcca8  blr x8
71025dccac  tbz w0,#0x0,0x71025dccc0
71025dccb0  mov w0,#0x10
71025dccb4  mov x1,x20
71025dccb8  bl 0x710392e290
71025dccbc  cbnz x0,0x71025dccc4
71025dccc0  mov x0,xzr
71025dccc4  add x8,x0,x22, LSL #0x3
71025dccc8  stp x0,x0,[sp, #0xf0]
71025dcccc  str x8,[sp, #0x100]
71025dccd0  cmp x19,x21
71025dccd4  b.ne 0x71025dccec
71025dccd8  b 0x71025dce1c
71025dccdc  mov x8,xzr
71025dcce0  mov x0,xzr
71025dcce4  cmp x19,x21
71025dcce8  b.eq 0x71025dce1c
71025dccec  mov x19,xzr
71025dccf0  orr x24,xzr,#0xffffffffffffffe
71025dccf4  adrp x25,0x7105332000
71025dccf8  b 0x71025dcd00
71025dccfc  ldp x0,x8,[sp, #0xf8]
71025dcd00  ldr x26,[x21, x19, LSL #0x3]
71025dcd04  cmp x0,x8
71025dcd08  b.cs 0x71025dcd20
71025dcd0c  str x26,[x0]
71025dcd10  ldr x8,[sp, #0xf8]
71025dcd14  add x8,x8,#0x8
71025dcd18  str x8,[sp, #0xf8]
71025dcd1c  b 0x71025dce00
71025dcd20  ldr x20,[sp, #0xf0]
71025dcd24  sub x21,x0,x20
71025dcd28  asr x27,x21,#0x3
71025dcd2c  add x9,x27,#0x1
71025dcd30  lsr x10,x9,#0x3d
71025dcd34  cbnz x10,0x71025dd4f0
71025dcd38  sub x8,x8,x20
71025dcd3c  asr x10,x8,#0x3
71025dcd40  cmp x10,x24
71025dcd44  b.hi 0x71025dcd64
71025dcd48  asr x8,x8,#0x2
71025dcd4c  cmp x8,x9
71025dcd50  csel x28,x9,x8,cc
71025dcd54  cbz x28,0x71025dcdc4
71025dcd58  lsr x8,x28,#0x3d
71025dcd5c  cbz x8,0x71025dcd68
71025dcd60  b 0x71025dd4f8
71025dcd64  orr x28,xzr,#0x1fffffffffffffff
71025dcd68  lsl x8,x28,#0x3
71025dcd6c  cmp x8,#0x0
71025dcd70  csinc x23,x8,xzr,ne
71025dcd74  mov w0,#0x10
71025dcd78  mov x1,x23
71025dcd7c  bl 0x710392e290
71025dcd80  mov x22,x0
71025dcd84  cbnz x0,0x71025dcdc8
71025dcd88  ldr x0,[x25, #0xf00]
71025dcd8c  cbz x0,0x71025dcdc4
71025dcd90  str wzr,[sp, #0xc0]
71025dcd94  str x23,[sp, #0xd0]
71025dcd98  ldr x8,[x0]
71025dcd9c  ldr x8,[x8, #0x30]
71025dcda0  add x1,sp,#0xc0
71025dcda4  add x2,sp,#0xd0
71025dcda8  blr x8
71025dcdac  tbz w0,#0x0,0x71025dcdc4
71025dcdb0  mov w0,#0x10
71025dcdb4  mov x1,x23
71025dcdb8  bl 0x710392e290
71025dcdbc  mov x22,x0
71025dcdc0  cbnz x0,0x71025dcdc8
71025dcdc4  mov x22,xzr
71025dcdc8  add x23,x22,x27, LSL #0x3
71025dcdcc  cmp x21,#0x1
71025dcdd0  str x26,[x23], #0x8
71025dcdd4  add x26,x22,x28, LSL #0x3
71025dcdd8  b.lt 0x71025dcdec
71025dcddc  mov x0,x22
71025dcde0  mov x1,x20
71025dcde4  mov x2,x21
71025dcde8  bl 0x71039c00e0
71025dcdec  stp x22,x23,[sp, #0xf0]
71025dcdf0  str x26,[sp, #0x100]
71025dcdf4  cbz x20,0x71025dce00
71025dcdf8  mov x0,x20
71025dcdfc  bl 0x710392eb40
71025dce00  ldr x8,[sp, #0xa0]
71025dce04  ldp x21,x8,[x8, #0x1a8]
71025dce08  sub x8,x8,x21
71025dce0c  add x19,x19,#0x1
71025dce10  asr x8,x8,#0x3
71025dce14  cmp x8,x19
71025dce18  b.hi 0x71025dccfc
71025dce1c  ldr x20,[sp, #0xa0]
71025dce20  ldr x8,[x20, #0x300]
71025dce24  str x8,[sp, #0x108]
71025dce28  ldr x8,[x20, #0x310]
71025dce2c  str x8,[sp, #0x110]
71025dce30  ldr x8,[x20, #0x330]
71025dce34  ldr x0,[x8]
71025dce38  add x1,sp,#0xf0
71025dce3c  bl 0x71026313b0
71025dce40  ldr x0,[sp, #0xf0]
71025dce44  cbz x0,0x71025dce50
71025dce48  str x0,[sp, #0xf8]
71025dce4c  bl 0x710392eb40
71025dce50  adrp x22,0x710532a000
71025dce54  ldr x8,[x22, #0x9d8]
71025dce58  ldr x8,[x8]
71025dce5c  ldr x21,[sp, #0x30]
71025dce60  ldr x19,[x8, #0x1b8]
71025dce64  ldr x8,[x21]
71025dce68  ldr x1,[x8]
71025dce6c  add x0,sp,#0xd0
71025dce70  bl 0x7102615650
71025dce74  ldr x8,[x21]
71025dce78  ldr x9,[x8]
71025dce7c  fmov s0,wzr
71025dce80  cbz x9,0x71025dcf30
71025dce84  ldr x8,[x9, #0x8]
71025dce88  ldrb w10,[x8]
71025dce8c  cmp w10,#0xc
71025dce90  b.ne 0x71025dcf18
71025dce94  ldur w10,[x8, #0x1]
71025dce98  subs w10,w10,#0x1
71025dce9c  b.lt 0x71025dcf18
71025dcea0  ldr x9,[x9]
71025dcea4  ldursw x13,[x8, #0x5]
71025dcea8  mov x14,#0xbe16
71025dceac  movk x14,#0xf223, LSL #16
71025dceb0  movk x14,#0x1c, LSL #32
71025dceb4  mov w11,wzr
71025dceb8  ldp x12,x9,[x9, #0x20]
71025dcebc  add x13,x9,x13
71025dcec0  adrp x9,0x7104742000
71025dcec4  add x9,x9,#0xdbb
71025dcec8  add w15,w10,w11
71025dcecc  cmp w15,#0x0
71025dced0  cinc w15,w15,lt
71025dced4  asr w15,w15,#0x1
71025dced8  add x16,x13,w15, SXTW  #0x3
71025dcedc  ldr w17,[x16]
71025dcee0  ldr x17,[x12, x17, LSL #0x3]
71025dcee4  cmp x17,x14
71025dcee8  b.eq 0x71025dcf08
71025dceec  sub w16,w15,#0x1
71025dcef0  cmp x17,x14
71025dcef4  csel w10,w16,w10,hi
71025dcef8  csinc w11,w11,w15,hi
71025dcefc  cmp w11,w10
71025dcf00  b.le 0x71025dcec8
71025dcf04  b 0x71025dcf20
71025dcf08  ldrsw x9,[x16, #0x4]
71025dcf0c  tbnz w9,#0x1f,0x71025dcf18
71025dcf10  add x9,x8,x9
71025dcf14  b 0x71025dcf20
71025dcf18  adrp x9,0x7104742000
71025dcf1c  add x9,x9,#0xdbb
71025dcf20  ldrb w8,[x9]
71025dcf24  cmp w8,#0x8
71025dcf28  b.ne 0x71025dcf30
71025dcf2c  ldur s0,[x9, #0x1]
71025dcf30  ldr x8,[sp, #0xd8]
71025dcf34  str x8,[sp, #0xf8]
71025dcf38  ldr x8,[sp, #0xd0]
71025dcf3c  str x8,[sp, #0xf0]
71025dcf40  mov x8,x19
71025dcf44  ldr x9,[x8, #0x50]!
71025dcf48  cbz x9,0x71025dcf8c
71025dcf4c  add x10,x19,#0x50
71025dcf50  b 0x71025dcf5c
71025dcf54  mov x10,x9
71025dcf58  mov x9,x11
71025dcf5c  ldr x11,[x9, #0x20]
71025dcf60  cmp x11,x20
71025dcf64  b.ls 0x71025dcf78
71025dcf68  ldr x11,[x9]
71025dcf6c  mov x10,x9
71025dcf70  cbnz x11,0x71025dcf54
71025dcf74  b 0x71025dcf90
71025dcf78  b.cs 0x71025dcf90
71025dcf7c  ldr x11,[x9, #0x8]!
71025dcf80  mov x10,x9
71025dcf84  cbnz x11,0x71025dcf54
71025dcf88  b 0x71025dcf90
71025dcf8c  mov x10,x8
71025dcf90  ldr x9,[x10]
71025dcf94  ldr x10,[sp, #0xf8]
71025dcf98  ldr x9,[x9, #0x28]
71025dcf9c  str x10,[x9, #0x48]
71025dcfa0  ldr x10,[sp, #0xf0]
71025dcfa4  str x10,[x9, #0x40]
71025dcfa8  str s0,[x9, #0x50]
71025dcfac  ldr x9,[x19, #0x20]
71025dcfb0  cmp x9,x20
71025dcfb4  b.ne 0x71025dd01c
71025dcfb8  ldr x9,[x8]
71025dcfbc  cbz x9,0x71025dcffc
71025dcfc0  add x8,x19,#0x50
71025dcfc4  b 0x71025dcfd0
71025dcfc8  mov x8,x9
71025dcfcc  mov x9,x10
71025dcfd0  ldr x10,[x9, #0x20]
71025dcfd4  cmp x10,x20
71025dcfd8  b.ls 0x71025dcfec
71025dcfdc  ldr x10,[x9]
71025dcfe0  mov x8,x9
71025dcfe4  cbnz x10,0x71025dcfc8
71025dcfe8  b 0x71025dcffc
71025dcfec  b.cs 0x71025dcffc
71025dcff0  ldr x10,[x9, #0x8]!
71025dcff4  mov x8,x9
71025dcff8  cbnz x10,0x71025dcfc8
71025dcffc  ldr x8,[x8]
71025dd000  ldr x8,[x8, #0x28]
71025dd004  ldr x0,[x8, #0x80]
71025dd008  cbz x0,0x71025dd4f8
71025dd00c  add x1,x8,#0x40
71025dd010  ldr x8,[x0]
71025dd014  ldr x8,[x8, #0x30]
71025dd018  blr x8
71025dd01c  ldr w8,[x20, #0x8]
71025dd020  sub w8,w8,#0x116
71025dd024  cmp w8,#0xa
71025dd028  b.hi 0x71025dd0b0
71025dd02c  adrp x9,0x7104506000
71025dd030  add x9,x9,#0x840
71025dd034  ldrsw x8,[x9, x8, LSL #0x2]
71025dd038  add x8,x8,x9
71025dd03c  br x8
71025dd040  ldr x8,[x20, #0x308]
71025dd044  adrp x9,0x7104469000
71025dd048  adrp x10,0x7104469000
71025dd04c  ldr q0,[x9, #0x5c0]
71025dd050  ldr q1,[x10, #0xe30]
71025dd054  b 0x71025dd084
71025dd058  ldr x8,[x20, #0x308]
71025dd05c  adrp x9,0x7104469000
71025dd060  ldr q0,[x9, #0xe40]
71025dd064  adrp x10,0x7104467000
71025dd068  ldr q1,[x10, #0x440]
71025dd06c  b 0x71025dd084
71025dd070  ldr x8,[x20, #0x308]
71025dd074  adrp x9,0x7104468000
71025dd078  ldr q0,[x9, #0x4c0]
71025dd07c  adrp x10,0x7104468000
71025dd080  ldr q1,[x10, #0xd30]
71025dd084  ldrb w9,[x8, #0x400]
71025dd088  str q0,[x8, #0x410]
71025dd08c  str q1,[x8, #0x420]
71025dd090  cbnz w9,0x71025dd09c
71025dd094  mov w9,#0x1
71025dd098  strb w9,[x8, #0x400]
71025dd09c  ldr x9,[x22, #0x9d8]
71025dd0a0  ldr x9,[x9]
71025dd0a4  ldr x0,[x9, #0x1c0]
71025dd0a8  ldr x1,[x8, #0x8]
71025dd0ac  bl 0x7103159b70
71025dd0b0  add sp,sp,#0x200
71025dd0b4  ldp d9,d8,[sp, #0x20]
71025dd0b8  ldp d11,d10,[sp, #0x10]
71025dd0bc  ldp x29,x30,[sp, #0x80]
71025dd0c0  ldp x20,x19,[sp, #0x70]
71025dd0c4  ldp x22,x21,[sp, #0x60]
71025dd0c8  ldp x24,x23,[sp, #0x50]
71025dd0cc  ldp x26,x25,[sp, #0x40]
71025dd0d0  ldp x28,x27,[sp, #0x30]
71025dd0d4  ldp d13,d12,[sp], #0x90
71025dd0d8  ret
71025dd0dc  mov w9,#0x48
71025dd0e0  madd x0,x20,x9,x8
71025dd0e4  bl 0x71035432d0
71025dd0e8  mov x0,x22
71025dd0ec  bl 0x71039c1a50
71025dd0f0  mov w21,w20
71025dd0f4  b 0x71025dc3a0
71025dd0f8  mov w1,w22
71025dd0fc  bl 0x7103540a00
71025dd100  mov x0,x20
71025dd104  mov w1,w22
71025dd108  bl 0x7103720ec0
71025dd10c  mov w20,w0
71025dd110  ldr x0,[x19, #0xf20]
71025dd114  mov w1,w22
71025dd118  bl 0x7103540b10
71025dd11c  tbz w20,#0x0,0x71025da758
71025dd120  b 0x71025daf10
71025dd124  ldrsw x9,[x16, #0x4]
71025dd128  tbnz w9,#0x1f,0x71025dd134
71025dd12c  add x20,x8,x9
71025dd130  b 0x71025dd140
71025dd134  mov x19,xzr
71025dd138  adrp x20,0x7104742000
71025dd13c  add x20,x20,#0xdbb
71025dd140  ldrb w9,[x20]
71025dd144  cmp w9,#0xb
71025dd148  b.ne 0x71025da688
71025dd14c  ldur w9,[x20, #0x1]
71025dd150  cmp w9,#0x2c
71025dd154  b.gt 0x71025da688
71025dd158  ldur w9,[x20, #0x1]
71025dd15c  cmp w9,#0x1
71025dd160  b.lt 0x71025dd214
71025dd164  add x8,x20,#0x5
71025dd168  mov w25,wzr
71025dd16c  mov x26,xzr
71025dd170  str x8,[sp, #0x90]
71025dd174  mov w8,#0xb
71025dd178  mov w28,#0x10
71025dd17c  adrp x27,0x7104742000
71025dd180  add x27,x27,#0xdbb
71025dd184  mov x9,xzr
71025dd188  tbnz w26,#0x1f,0x71025dd1c0
71025dd18c  and w8,w8,#0xff
71025dd190  cmp w8,#0xb
71025dd194  mov x8,x27
71025dd198  b.ne 0x71025dd1c4
71025dd19c  ldur w8,[x20, #0x1]
71025dd1a0  cmp w8,w26
71025dd1a4  b.le 0x71025dd1bc
71025dd1a8  ldr x8,[sp, #0x90]
71025dd1ac  ldrsw x8,[x8, w25, SXTW #0x0]
71025dd1b0  add x8,x20,x8
71025dd1b4  mov x9,x19
71025dd1b8  b 0x71025dd1c4
71025dd1bc  mov x9,xzr
71025dd1c0  mov x8,x27
71025dd1c4  stp x9,x8,[sp, #0xd0]
71025dd1c8  ldr x8,[x22]
71025dd1cc  add x1,x8,x28
71025dd1d0  add x0,sp,#0xd0
71025dd1d4  bl 0x71025e84d0
71025dd1d8  tbz w0,#0x0,0x71025da688
71025dd1dc  ldrb w8,[x20]
71025dd1e0  sub w9,w8,#0xb
71025dd1e4  add x26,x26,#0x1
71025dd1e8  cmp w9,#0x1
71025dd1ec  b.hi 0x71025dd1f8
71025dd1f0  ldur w9,[x20, #0x1]
71025dd1f4  b 0x71025dd1fc
71025dd1f8  mov w9,wzr
71025dd1fc  add x28,x28,#0xa0
71025dd200  add w25,w25,#0x4
71025dd204  cmp x26,w9, SXTW 
71025dd208  b.lt 0x71025dd184
71025dd20c  ldr x8,[sp, #0xf8]
71025dd210  ldrb w11,[x8]
71025dd214  cmp w11,#0xc
71025dd218  b.ne 0x71025dd2a4
71025dd21c  ldur w9,[x8, #0x1]
71025dd220  subs w9,w9,#0x1
71025dd224  b.lt 0x71025dd2a4
71025dd228  ldr x19,[sp, #0xf0]
71025dd22c  ldursw x13,[x8, #0x5]
71025dd230  mov w10,wzr
71025dd234  ldp x12,x14,[x19, #0x20]
71025dd238  add x13,x14,x13
71025dd23c  mov x14,#0xce15
71025dd240  movk x14,#0xef3a, LSL #16
71025dd244  movk x14,#0x7, LSL #32
71025dd248  adrp x20,0x7104742000
71025dd24c  add x20,x20,#0xdbb
71025dd250  add w15,w9,w10
71025dd254  cmp w15,#0x0
71025dd258  cinc w15,w15,lt
71025dd25c  asr w15,w15,#0x1
71025dd260  add x16,x13,w15, SXTW  #0x3
71025dd264  ldr w17,[x16]
71025dd268  ldr x17,[x12, x17, LSL #0x3]
71025dd26c  cmp x17,x14
71025dd270  b.eq 0x71025dd294
71025dd274  sub w16,w15,#0x1
71025dd278  cmp x17,x14
71025dd27c  csel w9,w16,w9,hi
71025dd280  csinc w10,w10,w15,hi
71025dd284  cmp w10,w9
71025dd288  b.le 0x71025dd250
71025dd28c  mov x19,xzr
71025dd290  b 0x71025dd2b0
71025dd294  ldrsw x9,[x16, #0x4]
71025dd298  tbnz w9,#0x1f,0x71025dd2a4
71025dd29c  add x20,x8,x9
71025dd2a0  b 0x71025dd2b0
71025dd2a4  mov x19,xzr
71025dd2a8  adrp x20,0x7104742000
71025dd2ac  add x20,x20,#0xdbb
71025dd2b0  ldrb w9,[x20]
71025dd2b4  cmp w9,#0xb
71025dd2b8  b.ne 0x71025da688
71025dd2bc  ldur w9,[x20, #0x1]
71025dd2c0  cmp w9,#0x2c
71025dd2c4  b.gt 0x71025da688
71025dd2c8  ldur w9,[x20, #0x1]
71025dd2cc  cmp w9,#0x1
71025dd2d0  b.lt 0x71025dd384
71025dd2d4  add x8,x20,#0x5
71025dd2d8  mov w25,wzr
71025dd2dc  mov x26,xzr
71025dd2e0  str x8,[sp, #0x90]
71025dd2e4  mov w8,#0xb
71025dd2e8  mov w28,#0x40
71025dd2ec  adrp x27,0x7104742000
71025dd2f0  add x27,x27,#0xdbb
71025dd2f4  mov x9,xzr
71025dd2f8  tbnz w26,#0x1f,0x71025dd330
71025dd2fc  and w8,w8,#0xff
71025dd300  cmp w8,#0xb
71025dd304  mov x8,x27
71025dd308  b.ne 0x71025dd334
71025dd30c  ldur w8,[x20, #0x1]
71025dd310  cmp w8,w26
71025dd314  b.le 0x71025dd32c
71025dd318  ldr x8,[sp, #0x90]
71025dd31c  ldrsw x8,[x8, w25, SXTW #0x0]
71025dd320  add x8,x20,x8
71025dd324  mov x9,x19
71025dd328  b 0x71025dd334
71025dd32c  mov x9,xzr
71025dd330  mov x8,x27
71025dd334  stp x9,x8,[sp, #0xc0]
71025dd338  ldr x8,[x22]
71025dd33c  add x1,x8,x28
71025dd340  add x0,sp,#0xc0
71025dd344  bl 0x71025e84d0
71025dd348  tbz w0,#0x0,0x71025da688
71025dd34c  ldrb w8,[x20]
71025dd350  sub w9,w8,#0xb
71025dd354  add x26,x26,#0x1
71025dd358  cmp w9,#0x1
71025dd35c  b.hi 0x71025dd368
71025dd360  ldur w9,[x20, #0x1]
71025dd364  b 0x71025dd36c
71025dd368  mov w9,wzr
71025dd36c  add x28,x28,#0xa0
71025dd370  add w25,w25,#0x4
71025dd374  cmp x26,w9, SXTW 
71025dd378  b.lt 0x71025dd2f4
71025dd37c  ldr x8,[sp, #0xf8]
71025dd380  ldrb w11,[x8]
71025dd384  cmp w11,#0xc
71025dd388  b.ne 0x71025dd414
71025dd38c  ldur w9,[x8, #0x1]
71025dd390  subs w9,w9,#0x1
71025dd394  b.lt 0x71025dd414
71025dd398  ldr x19,[sp, #0xf0]
71025dd39c  ldursw x12,[x8, #0x5]
71025dd3a0  mov w10,wzr
71025dd3a4  ldp x11,x13,[x19, #0x20]
71025dd3a8  add x12,x13,x12
71025dd3ac  mov x13,#0x903b
71025dd3b0  movk x13,#0x1cff, LSL #16
71025dd3b4  movk x13,#0x4, LSL #32
71025dd3b8  adrp x20,0x7104742000
71025dd3bc  add x20,x20,#0xdbb
71025dd3c0  add w14,w9,w10
71025dd3c4  cmp w14,#0x0
71025dd3c8  cinc w14,w14,lt
71025dd3cc  asr w14,w14,#0x1
71025dd3d0  add x15,x12,w14, SXTW  #0x3
71025dd3d4  ldr w16,[x15]
71025dd3d8  ldr x16,[x11, x16, LSL #0x3]
71025dd3dc  cmp x16,x13
71025dd3e0  b.eq 0x71025dd404
71025dd3e4  sub w15,w14,#0x1
71025dd3e8  cmp x16,x13
71025dd3ec  csel w9,w15,w9,hi
71025dd3f0  csinc w10,w10,w14,hi
71025dd3f4  cmp w10,w9
71025dd3f8  b.le 0x71025dd3c0
71025dd3fc  mov x19,xzr
71025dd400  b 0x71025dd420
71025dd404  ldrsw x9,[x15, #0x4]
71025dd408  tbnz w9,#0x1f,0x71025dd414
71025dd40c  add x20,x8,x9
71025dd410  b 0x71025dd420
71025dd414  mov x19,xzr
71025dd418  adrp x20,0x7104742000
71025dd41c  add x20,x20,#0xdbb
71025dd420  ldrb w8,[x20]
71025dd424  cmp w8,#0xb
71025dd428  b.ne 0x71025da688
71025dd42c  ldur w8,[x20, #0x1]
71025dd430  cmp w8,#0x2c
71025dd434  b.gt 0x71025da688
71025dd438  ldur w8,[x20, #0x1]
71025dd43c  cmp w8,#0x1
71025dd440  b.lt 0x71025da688
71025dd444  add x8,x20,#0x5
71025dd448  mov w25,wzr
71025dd44c  mov x26,xzr
71025dd450  str x8,[sp, #0x90]
71025dd454  mov w8,#0xb
71025dd458  orr w28,wzr,#0x70
71025dd45c  adrp x27,0x7104742000
71025dd460  add x27,x27,#0xdbb
71025dd464  mov x9,xzr
71025dd468  tbnz w26,#0x1f,0x71025dd4a0
71025dd46c  and w8,w8,#0xff
71025dd470  cmp w8,#0xb
71025dd474  mov x8,x27
71025dd478  b.ne 0x71025dd4a4
71025dd47c  ldur w8,[x20, #0x1]
71025dd480  cmp w8,w26
71025dd484  b.le 0x71025dd49c
71025dd488  ldr x8,[sp, #0x90]
71025dd48c  ldrsw x8,[x8, w25, SXTW #0x0]
71025dd490  add x8,x20,x8
71025dd494  mov x9,x19
71025dd498  b 0x71025dd4a4
71025dd49c  mov x9,xzr
71025dd4a0  mov x8,x27
71025dd4a4  stp x9,x8,[sp, #0xb0]
71025dd4a8  ldr x8,[x22]
71025dd4ac  add x1,x8,x28
71025dd4b0  add x0,sp,#0xb0
71025dd4b4  bl 0x71025e84d0
71025dd4b8  tbz w0,#0x0,0x71025da688
71025dd4bc  ldrb w8,[x20]
71025dd4c0  sub w9,w8,#0xb
71025dd4c4  add x26,x26,#0x1
71025dd4c8  cmp w9,#0x1
71025dd4cc  b.hi 0x71025dd4d8
71025dd4d0  ldur w9,[x20, #0x1]
71025dd4d4  b 0x71025dd4dc
71025dd4d8  mov w9,wzr
71025dd4dc  add x28,x28,#0xa0
71025dd4e0  add w25,w25,#0x4
71025dd4e4  cmp x26,w9, SXTW 
71025dd4e8  b.lt 0x71025dd464
71025dd4ec  b 0x71025da688
71025dd4f0  add x0,sp,#0xf0
71025dd4f4  bl 0x71039c0c00
71025dd4f8  bl 0x71039c2650
