// addr:      7101ab9340
// offset:    0x1ab9340
// name:      FUN_7101ab9340
// mangled:   
// size:      5072

7101ab9340  sub sp,sp,#0x160
7101ab9344  stp x28,x27,[sp, #0x100]
7101ab9348  stp x26,x25,[sp, #0x110]
7101ab934c  stp x24,x23,[sp, #0x120]
7101ab9350  stp x22,x21,[sp, #0x130]
7101ab9354  stp x20,x19,[sp, #0x140]
7101ab9358  stp x29,x30,[sp, #0x150]
7101ab935c  add x29,sp,#0x150
7101ab9360  ldr w8,[x0, #0x160]
7101ab9364  mov x21,x2
7101ab9368  cmp w8,#0xd
7101ab936c  b.ne 0x7101ab93ac
7101ab9370  adrp x1,0x7104443000
7101ab9374  add x1,x1,#0x93d
7101ab9378  add x8,sp,#0x60
7101ab937c  mov x0,x21
7101ab9380  bl 0x7103776910
7101ab9384  ldr x19,[sp, #0x68]
7101ab9388  mov x0,x19
7101ab938c  bl 0x7103779650
7101ab9390  adrp x8,0x710523d000
7101ab9394  add x8,x8,#0x9a8
7101ab9398  stp x8,xzr,[sp, #0x60]
7101ab939c  cbz x19,0x7101aba64c
7101ab93a0  mov x0,x19
7101ab93a4  bl 0x710392eb40
7101ab93a8  b 0x7101aba64c
7101ab93ac  tbnz w1,#0x1f,0x7101aba64c
7101ab93b0  ldr x8,[x0, #0x280]
7101ab93b4  ldr x28,[x0, #0x278]
7101ab93b8  sub x8,x8,x28
7101ab93bc  orr x9,xzr,#-0x1111111111111112
7101ab93c0  movk x9,#0xeeef
7101ab93c4  asr x8,x8,#0x6
7101ab93c8  mul x8,x8,x9
7101ab93cc  sxtw x22,w1
7101ab93d0  cmp x8,x22
7101ab93d4  b.ls 0x7101aba64c
7101ab93d8  orr w8,wzr,#0x3c0
7101ab93dc  madd x8,x22,x8,x28
7101ab93e0  ldrb w8,[x8, #0x6c]
7101ab93e4  sub w8,w8,#0x1
7101ab93e8  adrp x9,0x71043be000
7101ab93ec  add x9,x9,#0x1b1
7101ab93f0  str x9,[sp, #0x8]
7101ab93f4  cmp w8,#0x11
7101ab93f8  str wzr,[sp, #0x14]
7101ab93fc  str x0,[sp, #0x38]
7101ab9400  b.hi 0x7101ab94ac
7101ab9404  adrp x9,0x71044f8000
7101ab9408  add x9,x9,#0xf8
7101ab940c  ldrsw x8,[x9, x8, LSL #0x2]
7101ab9410  add x8,x8,x9
7101ab9414  br x8
7101ab9418  str wzr,[sp, #0x14]
7101ab941c  adrp x8,0x7104349000
7101ab9420  add x8,x8,#0xdfd
7101ab9424  b 0x7101ab94a8
7101ab9428  mov w8,#0x1
7101ab942c  str w8,[sp, #0x14]
7101ab9430  adrp x8,0x710437c000
7101ab9434  add x8,x8,#0xbd
7101ab9438  b 0x7101ab94a8
7101ab943c  str wzr,[sp, #0x14]
7101ab9440  adrp x8,0x71042d5000
7101ab9444  add x8,x8,#0xd68
7101ab9448  b 0x7101ab94a8
7101ab944c  str wzr,[sp, #0x14]
7101ab9450  adrp x8,0x7104308000
7101ab9454  add x8,x8,#0x3d
7101ab9458  b 0x7101ab94a8
7101ab945c  str wzr,[sp, #0x14]
7101ab9460  adrp x8,0x71043ad000
7101ab9464  add x8,x8,#0x282
7101ab9468  b 0x7101ab94a8
7101ab946c  str wzr,[sp, #0x14]
7101ab9470  adrp x8,0x71042d5000
7101ab9474  add x8,x8,#0xd44
7101ab9478  b 0x7101ab94a8
7101ab947c  str wzr,[sp, #0x14]
7101ab9480  adrp x8,0x71042b3000
7101ab9484  add x8,x8,#0xe4d
7101ab9488  b 0x7101ab94a8
7101ab948c  str wzr,[sp, #0x14]
7101ab9490  adrp x8,0x71043ce000
7101ab9494  add x8,x8,#0xf35
7101ab9498  b 0x7101ab94a8
7101ab949c  adrp x8,0x7104400000
7101ab94a0  add x8,x8,#0xf54
7101ab94a4  str wzr,[sp, #0x14]
7101ab94a8  str x8,[sp, #0x8]
7101ab94ac  orr w9,wzr,#0x3c0
7101ab94b0  adrp x19,0x7105324000
7101ab94b4  madd x25,x22,x9,x28
7101ab94b8  ldr x8,[x19, #0xee8]
7101ab94bc  ldr x0,[x8, #0x8]
7101ab94c0  ldr w1,[x25]
7101ab94c4  bl 0x7101af0cc0
7101ab94c8  add x20,x25,#0x3b9
7101ab94cc  mov w8,#0x1
7101ab94d0  strb w8,[x25, #0x3b9]
7101ab94d4  str x22,[sp, #0x20]
7101ab94d8  cbz w0,0x7101ab95e8
7101ab94dc  adrp x1,0x7104443000
7101ab94e0  add x1,x1,#0x93d
7101ab94e4  add x8,sp,#0x60
7101ab94e8  mov x0,x21
7101ab94ec  bl 0x7103776910
7101ab94f0  ldr x0,[x21, #0x8]
7101ab94f4  fmov s0,0x3f800000
7101ab94f8  adrp x1,0x71042e7000
7101ab94fc  add x1,x1,#0x3fa
7101ab9500  bl 0x7103778300
7101ab9504  ldr x19,[sp, #0x38]
7101ab9508  ldr x22,[x19, #0x170]
7101ab950c  adrp x26,0x710523d000
7101ab9510  add x26,x26,#0x9a8
7101ab9514  mov w0,#0x10
7101ab9518  mov w1,#0x20
7101ab951c  stur x26,[x29, #-0x68]
7101ab9520  bl 0x710392e290
7101ab9524  cbnz x0,0x7101ab956c
7101ab9528  adrp x8,0x7105332000
7101ab952c  ldr x0,[x8, #0xf00]
7101ab9530  cbz x0,0x7101ab9568
7101ab9534  mov w8,#0x20
7101ab9538  str wzr,[sp, #0xa8]
7101ab953c  add x1,sp,#0xa8
7101ab9540  stur x8,[x29, #-0x98]
7101ab9544  ldr x8,[x0]
7101ab9548  ldr x8,[x8, #0x30]
7101ab954c  sub x2,x29,#0x98
7101ab9550  blr x8
7101ab9554  tbz w0,#0x0,0x7101ab9568
7101ab9558  mov w0,#0x10
7101ab955c  mov w1,#0x20
7101ab9560  bl 0x710392e290
7101ab9564  cbnz x0,0x7101ab956c
7101ab9568  mov x0,xzr
7101ab956c  stp xzr,xzr,[x0, #0x10]
7101ab9570  mov x24,x0
7101ab9574  stp xzr,xzr,[x0]
7101ab9578  ldr x8,[sp, #0x68]
7101ab957c  sub x1,x29,#0x68
7101ab9580  mov w4,wzr
7101ab9584  stur x0,[x29, #-0x60]
7101ab9588  ldr x9,[x8]
7101ab958c  str x9,[x0]
7101ab9590  ldr x8,[x8, #0x8]
7101ab9594  str x8,[x0, #0x8]
7101ab9598  ldr x23,[sp, #0x68]
7101ab959c  ldr x8,[x23, #0x10]
7101ab95a0  str x8,[x24, #0x10]
7101ab95a4  ldr x8,[x23, #0x18]
7101ab95a8  ldr x9,[sp, #0x20]
7101ab95ac  mov x0,x22
7101ab95b0  str x8,[x24, #0x18]
7101ab95b4  orr w8,wzr,#0x3c0
7101ab95b8  madd x8,x9,x8,x28
7101ab95bc  ldr w2,[x8, #0x300]
7101ab95c0  ldr w3,[x25]
7101ab95c4  bl 0x7101ad2060
7101ab95c8  stp x26,xzr,[x29, #-0x68]
7101ab95cc  cbz x24,0x7101ab95d8
7101ab95d0  mov x0,x24
7101ab95d4  bl 0x710392eb40
7101ab95d8  stp x26,xzr,[sp, #0x60]
7101ab95dc  cbz x23,0x7101ab9708
7101ab95e0  mov x0,x23
7101ab95e4  b 0x7101ab9704
7101ab95e8  orr w8,wzr,#0x3c0
7101ab95ec  madd x8,x22,x8,x28
7101ab95f0  ldr w9,[x8, #0x300]
7101ab95f4  cmp w9,#0x145
7101ab95f8  b.ne 0x7101ab964c
7101ab95fc  ldr x9,[x19, #0xee8]
7101ab9600  ldr x9,[x9, #0x8]
7101ab9604  ldr w8,[x25]
7101ab9608  ldr x10,[x9, #0xe8]!
7101ab960c  ldr x19,[sp, #0x38]
7101ab9610  cbz x10,0x7101ab9644
7101ab9614  mov x11,x9
7101ab9618  ldr w12,[x10, #0x1c]
7101ab961c  cmp w12,w8
7101ab9620  cset w12,cc
7101ab9624  csel x11,x11,x10,cc
7101ab9628  ldr x10,[x10, w12, UXTW #0x3]
7101ab962c  cbnz x10,0x7101ab9618
7101ab9630  cmp x11,x9
7101ab9634  b.eq 0x7101ab9644
7101ab9638  ldr w9,[x11, #0x1c]
7101ab963c  cmp w9,w8
7101ab9640  b.ls 0x7101aba67c
7101ab9644  strb wzr,[x20]
7101ab9648  b 0x7101ab9708
7101ab964c  add x19,x8,#0x300
7101ab9650  adrp x1,0x7104329000
7101ab9654  add x1,x1,#0xac1
7101ab9658  add x8,sp,#0x60
7101ab965c  mov x0,x21
7101ab9660  bl 0x7103776640
7101ab9664  ldr x0,[x21, #0x8]
7101ab9668  fmov s0,0x3f800000
7101ab966c  adrp x1,0x710433a000
7101ab9670  add x1,x1,#0x322
7101ab9674  bl 0x7103778300
7101ab9678  ldr x8,[sp, #0x38]
7101ab967c  ldr x22,[x8, #0x170]
7101ab9680  sub x0,x29,#0x78
7101ab9684  add x1,sp,#0x60
7101ab9688  bl 0x7103776390
7101ab968c  ldr w2,[x19]
7101ab9690  ldr w3,[x25]
7101ab9694  sub x1,x29,#0x78
7101ab9698  mov x0,x22
7101ab969c  mov w4,wzr
7101ab96a0  bl 0x7101ad1f10
7101ab96a4  ldur x22,[x29, #-0x70]
7101ab96a8  adrp x19,0x710523d000
7101ab96ac  add x19,x19,#0x988
7101ab96b0  stp x19,xzr,[x29, #-0x78]
7101ab96b4  cbz x22,0x7101ab96d8
7101ab96b8  ldr x0,[x22, #0x18]
7101ab96bc  adrp x8,0x710523d000
7101ab96c0  add x8,x8,#0x9a8
7101ab96c4  stp x8,xzr,[x22, #0x10]
7101ab96c8  cbz x0,0x7101ab96d0
7101ab96cc  bl 0x710392eb40
7101ab96d0  mov x0,x22
7101ab96d4  bl 0x710392eb40
7101ab96d8  ldr x22,[sp, #0x68]
7101ab96dc  stp x19,xzr,[sp, #0x60]
7101ab96e0  ldr x19,[sp, #0x38]
7101ab96e4  cbz x22,0x7101ab9708
7101ab96e8  ldr x0,[x22, #0x18]
7101ab96ec  adrp x8,0x710523d000
7101ab96f0  add x8,x8,#0x9a8
7101ab96f4  stp x8,xzr,[x22, #0x10]
7101ab96f8  cbz x0,0x7101ab9700
7101ab96fc  bl 0x710392eb40
7101ab9700  mov x0,x22
7101ab9704  bl 0x710392eb40
7101ab9708  ldr w8,[x19, #0x6c0]
7101ab970c  cmp w8,#0xc
7101ab9710  b.ge 0x7101ab9724
7101ab9714  mov w23,wzr
7101ab9718  ldrb w8,[x20]
7101ab971c  cbnz w8,0x7101ab977c
7101ab9720  b 0x7101ab9740
7101ab9724  ldr x0,[x19, #0x190]
7101ab9728  ldr x8,[x0]
7101ab972c  ldr x8,[x8, #0x80]
7101ab9730  blr x8
7101ab9734  eor w23,w0,#0x1
7101ab9738  ldrb w8,[x20]
7101ab973c  cbnz w8,0x7101ab977c
7101ab9740  adrp x1,0x7104443000
7101ab9744  add x1,x1,#0x93d
7101ab9748  add x8,sp,#0x60
7101ab974c  mov x0,x21
7101ab9750  bl 0x7103776910
7101ab9754  ldr x22,[sp, #0x68]
7101ab9758  mov x0,x22
7101ab975c  mov w1,wzr
7101ab9760  bl 0x71037790a0
7101ab9764  adrp x8,0x710523d000
7101ab9768  add x8,x8,#0x9a8
7101ab976c  stp x8,xzr,[sp, #0x60]
7101ab9770  cbz x22,0x7101ab977c
7101ab9774  mov x0,x22
7101ab9778  bl 0x710392eb40
7101ab977c  sub x0,x29,#0x88
7101ab9780  mov x1,x21
7101ab9784  bl 0x7103776390
7101ab9788  ldrb w8,[x20]
7101ab978c  cbz w8,0x7101ab97f0
7101ab9790  adrp x1,0x71043be000
7101ab9794  add x1,x1,#0xebf
7101ab9798  add x8,sp,#0x60
7101ab979c  sub x0,x29,#0x88
7101ab97a0  bl 0x71037780e0
7101ab97a4  ldr x22,[sp, #0x68]
7101ab97a8  ldr x0,[x22, #0x8]
7101ab97ac  cbz x0,0x7101ab97d8
7101ab97b0  ldr x8,[x0]
7101ab97b4  ldr x8,[x8, #0x130]
7101ab97b8  blr x8
7101ab97bc  tbnz w0,#0x0,0x7101ab97d8
7101ab97c0  ldr x0,[x22, #0x8]
7101ab97c4  cbz x0,0x7101ab97d8
7101ab97c8  ldr x8,[x0]
7101ab97cc  ldr x8,[x8, #0x138]
7101ab97d0  blr x8
7101ab97d4  tbz w0,#0x0,0x7101aba66c
7101ab97d8  ldur x0,[x29, #-0x80]
7101ab97dc  adrp x1,0x7104433000
7101ab97e0  add x1,x1,#0x949
7101ab97e4  tbnz w23,#0x0,0x7101ab9844
7101ab97e8  bl 0x7103778760
7101ab97ec  b 0x7101ab984c
7101ab97f0  adrp x1,0x7104433000
7101ab97f4  add x1,x1,#0x949
7101ab97f8  add x8,sp,#0x60
7101ab97fc  sub x0,x29,#0x88
7101ab9800  bl 0x71037780e0
7101ab9804  ldr x22,[sp, #0x68]
7101ab9808  ldr x0,[x22, #0x8]
7101ab980c  cbz x0,0x7101ab9838
7101ab9810  ldr x8,[x0]
7101ab9814  ldr x8,[x8, #0x130]
7101ab9818  blr x8
7101ab981c  tbnz w0,#0x0,0x7101ab9838
7101ab9820  ldr x0,[x22, #0x8]
7101ab9824  cbz x0,0x7101ab9838
7101ab9828  ldr x8,[x0]
7101ab982c  ldr x8,[x8, #0x138]
7101ab9830  blr x8
7101ab9834  tbz w0,#0x0,0x7101aba66c
7101ab9838  ldur x0,[x29, #-0x80]
7101ab983c  adrp x1,0x71043be000
7101ab9840  add x1,x1,#0xebf
7101ab9844  fmov s0,0x3f800000
7101ab9848  bl 0x7103778300
7101ab984c  adrp x8,0x710523d000
7101ab9850  add x8,x8,#0x9e8
7101ab9854  stp x8,xzr,[sp, #0x60]
7101ab9858  cbz x22,0x7101ab9864
7101ab985c  mov x0,x22
7101ab9860  bl 0x710392eb40
7101ab9864  adrp x1,0x710432a000
7101ab9868  add x1,x1,#0x87b
7101ab986c  add x8,sp,#0x60
7101ab9870  sub x0,x29,#0x88
7101ab9874  bl 0x71037780e0
7101ab9878  ldr x22,[sp, #0x68]
7101ab987c  ldr x0,[x22, #0x8]
7101ab9880  cbz x0,0x7101ab9898
7101ab9884  ldr x8,[x0]
7101ab9888  ldr x8,[x8, #0x148]
7101ab988c  blr x8
7101ab9890  mov w23,w0
7101ab9894  b 0x7101ab989c
7101ab9898  mov w23,wzr
7101ab989c  adrp x8,0x710523d000
7101ab98a0  add x8,x8,#0x9e8
7101ab98a4  stp x8,xzr,[sp, #0x60]
7101ab98a8  cbz x22,0x7101ab98b4
7101ab98ac  mov x0,x22
7101ab98b0  bl 0x710392eb40
7101ab98b4  tbnz w23,#0x0,0x7101ab98cc
7101ab98b8  ldur x0,[x29, #-0x80]
7101ab98bc  fmov s0,0x3f800000
7101ab98c0  adrp x1,0x710432a000
7101ab98c4  add x1,x1,#0x87b
7101ab98c8  bl 0x7103778300
7101ab98cc  ldur x22,[x29, #-0x80]
7101ab98d0  ldr x19,[sp, #0x20]
7101ab98d4  adrp x8,0x710523d000
7101ab98d8  add x8,x8,#0x988
7101ab98dc  stp x8,xzr,[x29, #-0x88]
7101ab98e0  cbz x22,0x7101ab9904
7101ab98e4  ldr x0,[x22, #0x18]
7101ab98e8  adrp x8,0x710523d000
7101ab98ec  add x8,x8,#0x9a8
7101ab98f0  stp x8,xzr,[x22, #0x10]
7101ab98f4  cbz x0,0x7101ab98fc
7101ab98f8  bl 0x710392eb40
7101ab98fc  mov x0,x22
7101ab9900  bl 0x710392eb40
7101ab9904  ldr w8,[sp, #0x14]
7101ab9908  str x21,[sp, #0x18]
7101ab990c  str x28,[sp]
7101ab9910  cbz w8,0x7101ab9f94
7101ab9914  mov x9,x28
7101ab9918  orr w8,wzr,#0x3c0
7101ab991c  madd x8,x19,x8,x9
7101ab9920  add x9,x8,#0x3b8
7101ab9924  mov w22,wzr
7101ab9928  mov x28,#-0x3f00000000000000
7101ab992c  add x20,x8,#0x360
7101ab9930  adrp x24,0x710523d000
7101ab9934  add x24,x24,#0x9a8
7101ab9938  str x9,[sp, #0x28]
7101ab993c  add x9,x8,#0x311
7101ab9940  str x9,[sp, #0x30]
7101ab9944  b 0x7101ab9a24
7101ab9948  ldr x25,[sp, #0x68]
7101ab994c  mov w1,#0x1
7101ab9950  mov x0,x25
7101ab9954  bl 0x71037790a0
7101ab9958  ldur x26,[x29, #-0x90]
7101ab995c  mov w1,#0x1
7101ab9960  mov x0,x26
7101ab9964  bl 0x71037790a0
7101ab9968  stp x24,xzr,[x29, #-0x98]
7101ab996c  cbnz x26,0x7101ab9c24
7101ab9970  b 0x7101ab9c2c
7101ab9974  ldr x25,[sp, #0x68]
7101ab9978  mov w1,#0x1
7101ab997c  mov x0,x25
7101ab9980  bl 0x71037790a0
7101ab9984  ldur x26,[x29, #-0x90]
7101ab9988  mov w1,#0x1
7101ab998c  mov x0,x26
7101ab9990  bl 0x71037790a0
7101ab9994  stp x24,xzr,[x29, #-0x98]
7101ab9998  cbnz x26,0x7101ab9d30
7101ab999c  b 0x7101ab9d38
7101ab99a0  ldr x25,[sp, #0x68]
7101ab99a4  mov w1,#0x1
7101ab99a8  mov x0,x25
7101ab99ac  bl 0x71037790a0
7101ab99b0  ldur x26,[x29, #-0x90]
7101ab99b4  mov w1,#0x1
7101ab99b8  mov x0,x26
7101ab99bc  bl 0x71037790a0
7101ab99c0  stp x24,xzr,[x29, #-0x98]
7101ab99c4  cbnz x26,0x7101ab9b18
7101ab99c8  b 0x7101ab9b20
7101ab99cc  ldr x25,[sp, #0x68]
7101ab99d0  mov w1,#0x1
7101ab99d4  mov x0,x25
7101ab99d8  bl 0x71037790a0
7101ab99dc  ldur x26,[x29, #-0x90]
7101ab99e0  mov w1,#0x1
7101ab99e4  mov x0,x26
7101ab99e8  bl 0x71037790a0
7101ab99ec  stp x24,xzr,[x29, #-0x98]
7101ab99f0  cbnz x26,0x7101ab9e48
7101ab99f4  b 0x7101ab9e50
7101ab99f8  ldr x25,[sp, #0x68]
7101ab99fc  mov w1,#0x1
7101ab9a00  mov x0,x25
7101ab9a04  bl 0x71037790a0
7101ab9a08  ldur x26,[x29, #-0x90]
7101ab9a0c  mov w1,#0x1
7101ab9a10  mov x0,x26
7101ab9a14  bl 0x71037790a0
7101ab9a18  stp x24,xzr,[x29, #-0x98]
7101ab9a1c  cbnz x26,0x7101ab9f60
7101ab9a20  b 0x7101ab9f68
7101ab9a24  mov x23,x20
7101ab9a28  ldr x25,[x23, #-0x48]!
7101ab9a2c  and x8,x25,#-0x100000000000000
7101ab9a30  cmp x8,x28
7101ab9a34  b.ne 0x7101ab9b34
7101ab9a38  and x8,x25,#0xffffffffff
7101ab9a3c  cbz x8,0x7101ab9b34
7101ab9a40  adrp x8,0x710532f000
7101ab9a44  ldr x8,[x8, #0x730]
7101ab9a48  ldr x19,[x8, #0x8]
7101ab9a4c  ldr x27,[x19, #0x168]
7101ab9a50  ldr w26,[x23, #0x8]
7101ab9a54  mov x1,x25
7101ab9a58  mov x0,x27
7101ab9a5c  bl 0x71032632a0
7101ab9a60  mov x1,#0xb807
7101ab9a64  movk x1,#0xb1cc, LSL #16
7101ab9a68  movk x1,#0x11, LSL #32
7101ab9a6c  tbnz w0,#0x0,0x7101ab9a8c
7101ab9a70  add x0,x19,#0x160
7101ab9a74  mov x1,x25
7101ab9a78  bl 0x71032648e0
7101ab9a7c  mov x1,#0xf67e
7101ab9a80  movk x1,#0x3829, LSL #16
7101ab9a84  movk x1,#0x14, LSL #32
7101ab9a88  tbz w0,#0x0,0x7101ab9a98
7101ab9a8c  mov x0,x27
7101ab9a90  bl 0x71032631a0
7101ab9a94  mov x25,x0
7101ab9a98  add x8,sp,#0x60
7101ab9a9c  mov x0,x21
7101ab9aa0  adrp x1,0x710424f000
7101ab9aa4  add x1,x1,#0x6d5
7101ab9aa8  mov w2,w22
7101ab9aac  bl 0x7103776910
7101ab9ab0  sub x8,x29,#0x98
7101ab9ab4  mov x0,x21
7101ab9ab8  adrp x1,0x710434a000
7101ab9abc  add x1,x1,#0x556
7101ab9ac0  mov w2,w22
7101ab9ac4  bl 0x7103776910
7101ab9ac8  ldr x8,[sp, #0x38]
7101ab9acc  ldr x0,[x8, #0x170]
7101ab9ad0  mov w3,#0x2
7101ab9ad4  mov x1,x25
7101ab9ad8  mov w2,w26
7101ab9adc  bl 0x710323f330
7101ab9ae0  ldr x8,[x0, #0x8]
7101ab9ae4  ldr x8,[x8]
7101ab9ae8  cbz x8,0x7101ab99a0
7101ab9aec  ldur x26,[x29, #-0x90]
7101ab9af0  mov x27,x0
7101ab9af4  mov x1,x27
7101ab9af8  mov x0,x26
7101ab9afc  bl 0x7103778b80
7101ab9b00  ldr x25,[sp, #0x68]
7101ab9b04  mov x0,x25
7101ab9b08  mov x1,x27
7101ab9b0c  bl 0x7103778b80
7101ab9b10  stp x24,xzr,[x29, #-0x98]
7101ab9b14  cbz x26,0x7101ab9b20
7101ab9b18  mov x0,x26
7101ab9b1c  bl 0x710392eb40
7101ab9b20  add w22,w22,#0x1
7101ab9b24  stp x24,xzr,[sp, #0x60]
7101ab9b28  cbz x25,0x7101ab9b34
7101ab9b2c  mov x0,x25
7101ab9b30  bl 0x710392eb40
7101ab9b34  ldr x26,[x23, #0x10]
7101ab9b38  and x9,x26,#-0x100000000000000
7101ab9b3c  and x8,x26,#0xffffffffff
7101ab9b40  cmp x9,x28
7101ab9b44  ccmp x8,#0x0,#0x4,eq
7101ab9b48  b.eq 0x7101ab9c40
7101ab9b4c  adrp x8,0x710532f000
7101ab9b50  ldr x8,[x8, #0x730]
7101ab9b54  ldr x19,[x8, #0x8]
7101ab9b58  ldr x27,[x19, #0x168]
7101ab9b5c  ldr w25,[x23, #0x18]
7101ab9b60  mov x1,x26
7101ab9b64  mov x0,x27
7101ab9b68  bl 0x71032632a0
7101ab9b6c  mov x1,#0xb807
7101ab9b70  movk x1,#0xb1cc, LSL #16
7101ab9b74  movk x1,#0x11, LSL #32
7101ab9b78  tbnz w0,#0x0,0x7101ab9b98
7101ab9b7c  add x0,x19,#0x160
7101ab9b80  mov x1,x26
7101ab9b84  bl 0x71032648e0
7101ab9b88  mov x1,#0xf67e
7101ab9b8c  movk x1,#0x3829, LSL #16
7101ab9b90  movk x1,#0x14, LSL #32
7101ab9b94  tbz w0,#0x0,0x7101ab9ba4
7101ab9b98  mov x0,x27
7101ab9b9c  bl 0x71032631a0
7101ab9ba0  mov x26,x0
7101ab9ba4  add x8,sp,#0x60
7101ab9ba8  mov x0,x21
7101ab9bac  adrp x1,0x710424f000
7101ab9bb0  add x1,x1,#0x6d5
7101ab9bb4  mov w2,w22
7101ab9bb8  bl 0x7103776910
7101ab9bbc  sub x8,x29,#0x98
7101ab9bc0  mov x0,x21
7101ab9bc4  adrp x1,0x710434a000
7101ab9bc8  add x1,x1,#0x556
7101ab9bcc  mov w2,w22
7101ab9bd0  bl 0x7103776910
7101ab9bd4  ldr x8,[sp, #0x38]
7101ab9bd8  ldr x0,[x8, #0x170]
7101ab9bdc  mov w3,#0x2
7101ab9be0  mov x1,x26
7101ab9be4  mov w2,w25
7101ab9be8  bl 0x710323f330
7101ab9bec  ldr x8,[x0, #0x8]
7101ab9bf0  ldr x8,[x8]
7101ab9bf4  cbz x8,0x7101ab9948
7101ab9bf8  ldur x26,[x29, #-0x90]
7101ab9bfc  mov x27,x0
7101ab9c00  mov x1,x27
7101ab9c04  mov x0,x26
7101ab9c08  bl 0x7103778b80
7101ab9c0c  ldr x25,[sp, #0x68]
7101ab9c10  mov x0,x25
7101ab9c14  mov x1,x27
7101ab9c18  bl 0x7103778b80
7101ab9c1c  stp x24,xzr,[x29, #-0x98]
7101ab9c20  cbz x26,0x7101ab9c2c
7101ab9c24  mov x0,x26
7101ab9c28  bl 0x710392eb40
7101ab9c2c  add w22,w22,#0x1
7101ab9c30  stp x24,xzr,[sp, #0x60]
7101ab9c34  cbz x25,0x7101ab9c40
7101ab9c38  mov x0,x25
7101ab9c3c  bl 0x710392eb40
7101ab9c40  ldr x26,[x23, #0x20]
7101ab9c44  and x9,x26,#-0x100000000000000
7101ab9c48  and x8,x26,#0xffffffffff
7101ab9c4c  cmp x9,x28
7101ab9c50  ccmp x8,#0x0,#0x4,eq
7101ab9c54  b.eq 0x7101ab9d4c
7101ab9c58  adrp x8,0x710532f000
7101ab9c5c  ldr x8,[x8, #0x730]
7101ab9c60  ldr x19,[x8, #0x8]
7101ab9c64  ldr x27,[x19, #0x168]
7101ab9c68  ldr w25,[x23, #0x28]
7101ab9c6c  mov x1,x26
7101ab9c70  mov x0,x27
7101ab9c74  bl 0x71032632a0
7101ab9c78  mov x1,#0xb807
7101ab9c7c  movk x1,#0xb1cc, LSL #16
7101ab9c80  movk x1,#0x11, LSL #32
7101ab9c84  tbnz w0,#0x0,0x7101ab9ca4
7101ab9c88  add x0,x19,#0x160
7101ab9c8c  mov x1,x26
7101ab9c90  bl 0x71032648e0
7101ab9c94  mov x1,#0xf67e
7101ab9c98  movk x1,#0x3829, LSL #16
7101ab9c9c  movk x1,#0x14, LSL #32
7101ab9ca0  tbz w0,#0x0,0x7101ab9cb0
7101ab9ca4  mov x0,x27
7101ab9ca8  bl 0x71032631a0
7101ab9cac  mov x26,x0
7101ab9cb0  add x8,sp,#0x60
7101ab9cb4  mov x0,x21
7101ab9cb8  adrp x1,0x710424f000
7101ab9cbc  add x1,x1,#0x6d5
7101ab9cc0  mov w2,w22
7101ab9cc4  bl 0x7103776910
7101ab9cc8  sub x8,x29,#0x98
7101ab9ccc  mov x0,x21
7101ab9cd0  adrp x1,0x710434a000
7101ab9cd4  add x1,x1,#0x556
7101ab9cd8  mov w2,w22
7101ab9cdc  bl 0x7103776910
7101ab9ce0  ldr x8,[sp, #0x38]
7101ab9ce4  ldr x0,[x8, #0x170]
7101ab9ce8  mov w3,#0x2
7101ab9cec  mov x1,x26
7101ab9cf0  mov w2,w25
7101ab9cf4  bl 0x710323f330
7101ab9cf8  ldr x8,[x0, #0x8]
7101ab9cfc  ldr x8,[x8]
7101ab9d00  cbz x8,0x7101ab9974
7101ab9d04  ldur x26,[x29, #-0x90]
7101ab9d08  mov x27,x0
7101ab9d0c  mov x1,x27
7101ab9d10  mov x0,x26
7101ab9d14  bl 0x7103778b80
7101ab9d18  ldr x25,[sp, #0x68]
7101ab9d1c  mov x0,x25
7101ab9d20  mov x1,x27
7101ab9d24  bl 0x7103778b80
7101ab9d28  stp x24,xzr,[x29, #-0x98]
7101ab9d2c  cbz x26,0x7101ab9d38
7101ab9d30  mov x0,x26
7101ab9d34  bl 0x710392eb40
7101ab9d38  add w22,w22,#0x1
7101ab9d3c  stp x24,xzr,[sp, #0x60]
7101ab9d40  cbz x25,0x7101ab9d4c
7101ab9d44  mov x0,x25
7101ab9d48  bl 0x710392eb40
7101ab9d4c  ldr x8,[sp, #0x30]
7101ab9d50  ldrb w8,[x8]
7101ab9d54  cbz w8,0x7101ab9f7c
7101ab9d58  ldr x25,[x23, #0x30]
7101ab9d5c  and x8,x25,#-0x100000000000000
7101ab9d60  cmp x8,x28
7101ab9d64  b.ne 0x7101ab9e70
7101ab9d68  and x8,x25,#0xffffffffff
7101ab9d6c  cbz x8,0x7101ab9e70
7101ab9d70  adrp x8,0x710532f000
7101ab9d74  ldr x8,[x8, #0x730]
7101ab9d78  ldr x19,[x8, #0x8]
7101ab9d7c  ldr x27,[x19, #0x168]
7101ab9d80  ldr w26,[x23, #0x38]
7101ab9d84  mov x1,x25
7101ab9d88  mov x0,x27
7101ab9d8c  bl 0x71032632a0
7101ab9d90  mov x1,#0xb807
7101ab9d94  movk x1,#0xb1cc, LSL #16
7101ab9d98  movk x1,#0x11, LSL #32
7101ab9d9c  tbnz w0,#0x0,0x7101ab9dbc
7101ab9da0  add x0,x19,#0x160
7101ab9da4  mov x1,x25
7101ab9da8  bl 0x71032648e0
7101ab9dac  mov x1,#0xf67e
7101ab9db0  movk x1,#0x3829, LSL #16
7101ab9db4  movk x1,#0x14, LSL #32
7101ab9db8  tbz w0,#0x0,0x7101ab9dc8
7101ab9dbc  mov x0,x27
7101ab9dc0  bl 0x71032631a0
7101ab9dc4  mov x25,x0
7101ab9dc8  add x8,sp,#0x60
7101ab9dcc  mov x0,x21
7101ab9dd0  adrp x1,0x710424f000
7101ab9dd4  add x1,x1,#0x6d5
7101ab9dd8  mov w2,w22
7101ab9ddc  bl 0x7103776910
7101ab9de0  sub x8,x29,#0x98
7101ab9de4  mov x0,x21
7101ab9de8  adrp x1,0x710434a000
7101ab9dec  add x1,x1,#0x556
7101ab9df0  mov w2,w22
7101ab9df4  bl 0x7103776910
7101ab9df8  ldr x8,[sp, #0x38]
7101ab9dfc  ldr x0,[x8, #0x170]
7101ab9e00  mov w3,#0x2
7101ab9e04  mov x1,x25
7101ab9e08  mov w2,w26
7101ab9e0c  bl 0x710323f330
7101ab9e10  ldr x8,[x0, #0x8]
7101ab9e14  ldr x8,[x8]
7101ab9e18  cbz x8,0x7101ab99cc
7101ab9e1c  ldur x26,[x29, #-0x90]
7101ab9e20  mov x27,x0
7101ab9e24  mov x1,x27
7101ab9e28  mov x0,x26
7101ab9e2c  bl 0x7103778b80
7101ab9e30  ldr x25,[sp, #0x68]
7101ab9e34  mov x0,x25
7101ab9e38  mov x1,x27
7101ab9e3c  bl 0x7103778b80
7101ab9e40  stp x24,xzr,[x29, #-0x98]
7101ab9e44  cbz x26,0x7101ab9e50
7101ab9e48  mov x0,x26
7101ab9e4c  bl 0x710392eb40
7101ab9e50  add w22,w22,#0x1
7101ab9e54  stp x24,xzr,[sp, #0x60]
7101ab9e58  cbz x25,0x7101ab9e64
7101ab9e5c  mov x0,x25
7101ab9e60  bl 0x710392eb40
7101ab9e64  ldr x8,[sp, #0x30]
7101ab9e68  ldrb w8,[x8]
7101ab9e6c  cbz w8,0x7101ab9f7c
7101ab9e70  ldur x26,[x20, #-0x8]
7101ab9e74  ldr w25,[x20]
7101ab9e78  and x8,x26,#-0x100000000000000
7101ab9e7c  cmp x8,x28
7101ab9e80  b.ne 0x7101ab9f7c
7101ab9e84  and x8,x26,#0xffffffffff
7101ab9e88  cbz x8,0x7101ab9f7c
7101ab9e8c  adrp x8,0x710532f000
7101ab9e90  ldr x8,[x8, #0x730]
7101ab9e94  ldr x19,[x8, #0x8]
7101ab9e98  ldr x27,[x19, #0x168]
7101ab9e9c  mov x0,x27
7101ab9ea0  mov x1,x26
7101ab9ea4  bl 0x71032632a0
7101ab9ea8  mov x1,#0xb807
7101ab9eac  movk x1,#0xb1cc, LSL #16
7101ab9eb0  movk x1,#0x11, LSL #32
7101ab9eb4  tbnz w0,#0x0,0x7101ab9ed4
7101ab9eb8  add x0,x19,#0x160
7101ab9ebc  mov x1,x26
7101ab9ec0  bl 0x71032648e0
7101ab9ec4  mov x1,#0xf67e
7101ab9ec8  movk x1,#0x3829, LSL #16
7101ab9ecc  movk x1,#0x14, LSL #32
7101ab9ed0  tbz w0,#0x0,0x7101ab9ee0
7101ab9ed4  mov x0,x27
7101ab9ed8  bl 0x71032631a0
7101ab9edc  mov x26,x0
7101ab9ee0  add x8,sp,#0x60
7101ab9ee4  mov x0,x21
7101ab9ee8  adrp x1,0x710424f000
7101ab9eec  add x1,x1,#0x6d5
7101ab9ef0  mov w2,w22
7101ab9ef4  bl 0x7103776910
7101ab9ef8  sub x8,x29,#0x98
7101ab9efc  mov x0,x21
7101ab9f00  adrp x1,0x710434a000
7101ab9f04  add x1,x1,#0x556
7101ab9f08  mov w2,w22
7101ab9f0c  bl 0x7103776910
7101ab9f10  ldr x8,[sp, #0x38]
7101ab9f14  ldr x0,[x8, #0x170]
7101ab9f18  mov w3,#0x2
7101ab9f1c  mov x1,x26
7101ab9f20  mov w2,w25
7101ab9f24  bl 0x710323f330
7101ab9f28  ldr x8,[x0, #0x8]
7101ab9f2c  ldr x8,[x8]
7101ab9f30  cbz x8,0x7101ab99f8
7101ab9f34  ldur x26,[x29, #-0x90]
7101ab9f38  mov x27,x0
7101ab9f3c  mov x1,x27
7101ab9f40  mov x0,x26
7101ab9f44  bl 0x7103778b80
7101ab9f48  ldr x25,[sp, #0x68]
7101ab9f4c  mov x0,x25
7101ab9f50  mov x1,x27
7101ab9f54  bl 0x7103778b80
7101ab9f58  stp x24,xzr,[x29, #-0x98]
7101ab9f5c  cbz x26,0x7101ab9f68
7101ab9f60  mov x0,x26
7101ab9f64  bl 0x710392eb40
7101ab9f68  add w22,w22,#0x1
7101ab9f6c  stp x24,xzr,[sp, #0x60]
7101ab9f70  cbz x25,0x7101ab9f7c
7101ab9f74  mov x0,x25
7101ab9f78  bl 0x710392eb40
7101ab9f7c  ldr x9,[sp, #0x28]
7101ab9f80  add x8,x23,#0x50
7101ab9f84  add x20,x20,#0x50
7101ab9f88  cmp x8,x9
7101ab9f8c  b.ne 0x7101ab9a24
7101ab9f90  b 0x7101aba374
7101ab9f94  orr w8,wzr,#0x3c0
7101ab9f98  madd x28,x19,x8,x28
7101ab9f9c  orr x25,xzr,#-0x5555555555555556
7101ab9fa0  mov x27,xzr
7101ab9fa4  mov x24,#-0x3f00000000000000
7101ab9fa8  movk x25,#0xaaab
7101ab9fac  stp xzr,xzr,[sp, #0x68]
7101ab9fb0  str xzr,[sp, #0x60]
7101ab9fb4  str x28,[sp, #0x30]
7101ab9fb8  b 0x7101ab9fc4
7101ab9fbc  mov x0,xzr
7101ab9fc0  b 0x7101aba128
7101ab9fc4  add x19,x28,x27
7101ab9fc8  ldrb w8,[x19, #0x90]
7101ab9fcc  cbz w8,0x7101aba194
7101ab9fd0  ldr x22,[x19, #0x80]
7101ab9fd4  and x9,x22,#-0x100000000000000
7101ab9fd8  and x8,x22,#0xffffffffff
7101ab9fdc  cmp x9,x24
7101ab9fe0  ccmp x8,#0x0,#0x4,eq
7101ab9fe4  b.eq 0x7101aba194
7101ab9fe8  adrp x8,0x710532f000
7101ab9fec  ldr x8,[x8, #0x730]
7101ab9ff0  ldr x20,[x8, #0x8]
7101ab9ff4  ldr x23,[x20, #0x168]
7101ab9ff8  mov x0,x23
7101ab9ffc  mov x1,x22
7101aba000  bl 0x71032632a0
7101aba004  mov x1,#0xb807
7101aba008  movk x1,#0xb1cc, LSL #16
7101aba00c  movk x1,#0x11, LSL #32
7101aba010  tbnz w0,#0x0,0x7101aba030
7101aba014  add x0,x20,#0x160
7101aba018  mov x1,x22
7101aba01c  bl 0x71032648e0
7101aba020  mov x1,#0xf67e
7101aba024  movk x1,#0x3829, LSL #16
7101aba028  movk x1,#0x14, LSL #32
7101aba02c  tbz w0,#0x0,0x7101aba03c
7101aba030  mov x0,x23
7101aba034  bl 0x71032631a0
7101aba038  mov x22,x0
7101aba03c  ldp x8,x9,[sp, #0x68]
7101aba040  ldrb w20,[x19, #0x92]
7101aba044  ldr w26,[x19, #0x98]
7101aba048  cmp x8,x9
7101aba04c  b.cs 0x7101aba06c
7101aba050  str w26,[x8]
7101aba054  str x22,[x8, #0x8]
7101aba058  str w20,[x8, #0x10]
7101aba05c  ldr x8,[sp, #0x68]
7101aba060  add x8,x8,#0x18
7101aba064  str x8,[sp, #0x68]
7101aba068  b 0x7101aba194
7101aba06c  ldr x23,[sp, #0x60]
7101aba070  mov x28,x24
7101aba074  sub x24,x8,x23
7101aba078  asr x8,x24,#0x3
7101aba07c  mul x21,x8,x25
7101aba080  orr x19,xzr,#-0x5555555555555556
7101aba084  movk x19,#0xaaa, LSL #48
7101aba088  add x8,x21,#0x1
7101aba08c  cmp x8,x19
7101aba090  b.hi 0x7101aba6e0
7101aba094  sub x9,x9,x23
7101aba098  asr x9,x9,#0x3
7101aba09c  mul x9,x9,x25
7101aba0a0  orr x10,xzr,#0x5555555555555555
7101aba0a4  movk x10,#0x555, LSL #48
7101aba0a8  cmp x9,x10
7101aba0ac  b.cs 0x7101aba0c0
7101aba0b0  lsl x9,x9,#0x1
7101aba0b4  cmp x9,x8
7101aba0b8  csel x19,x8,x9,cc
7101aba0bc  cbz x19,0x7101ab9fbc
7101aba0c0  add x8,x19,x19, LSL #0x1
7101aba0c4  lsl x8,x8,#0x3
7101aba0c8  cmp x8,#0x0
7101aba0cc  csinc x25,x8,xzr,ne
7101aba0d0  mov w0,#0x10
7101aba0d4  mov x1,x25
7101aba0d8  bl 0x710392e290
7101aba0dc  cbnz x0,0x7101aba120
7101aba0e0  adrp x8,0x7105332000
7101aba0e4  ldr x0,[x8, #0xf00]
7101aba0e8  cbz x0,0x7101aba11c
7101aba0ec  str wzr,[sp, #0xa8]
7101aba0f0  stur x25,[x29, #-0x98]
7101aba0f4  ldr x8,[x0]
7101aba0f8  ldr x8,[x8, #0x30]
7101aba0fc  add x1,sp,#0xa8
7101aba100  sub x2,x29,#0x98
7101aba104  blr x8
7101aba108  tbz w0,#0x0,0x7101aba11c
7101aba10c  mov w0,#0x10
7101aba110  mov x1,x25
7101aba114  bl 0x710392e290
7101aba118  cbnz x0,0x7101aba120
7101aba11c  mov x0,xzr
7101aba120  orr x25,xzr,#-0x5555555555555556
7101aba124  movk x25,#0xaaab
7101aba128  orr x9,xzr,#0x5555555555555555
7101aba12c  movk x9,#0xd555, LSL #48
7101aba130  smulh x9,x24,x9
7101aba134  orr w11,wzr,#0x18
7101aba138  madd x8,x21,x11,x0
7101aba13c  madd x19,x19,x11,x0
7101aba140  str x22,[x8, #0x8]
7101aba144  str w20,[x8, #0x10]
7101aba148  add x20,x8,#0x18
7101aba14c  cmp x24,#0x1
7101aba150  str w26,[x8]
7101aba154  asr x10,x9,#0x2
7101aba158  add x9,x10,x9, LSR #0x3f
7101aba15c  madd x22,x9,x11,x8
7101aba160  b.lt 0x7101aba174
7101aba164  mov x0,x22
7101aba168  mov x1,x23
7101aba16c  mov x2,x24
7101aba170  bl 0x71039c00e0
7101aba174  ldr x21,[sp, #0x18]
7101aba178  mov x24,x28
7101aba17c  ldr x28,[sp, #0x30]
7101aba180  stp x22,x20,[sp, #0x60]
7101aba184  str x19,[sp, #0x70]
7101aba188  cbz x23,0x7101aba194
7101aba18c  mov x0,x23
7101aba190  bl 0x710392eb40
7101aba194  add x27,x27,#0x50
7101aba198  cmp x27,#0x280
7101aba19c  b.ne 0x7101ab9fc4
7101aba1a0  ldp x22,x23,[sp, #0x60]
7101aba1a4  sub x8,x23,x22
7101aba1a8  asr x9,x8,#0x3
7101aba1ac  mul x24,x9,x25
7101aba1b0  ldr x19,[sp, #0x38]
7101aba1b4  cmp x8,#0x1
7101aba1b8  adrp x20,0x7105332000
7101aba1bc  b.lt 0x7101aba230
7101aba1c0  orr x8,xzr,#0x5555555555555555
7101aba1c4  movk x8,#0x555, LSL #48
7101aba1c8  cmp x24,x8
7101aba1cc  csel x25,x24,x8,lt
7101aba1d0  add x8,x25,x25, LSL #0x1
7101aba1d4  lsl x8,x8,#0x3
7101aba1d8  cmp x8,#0x0
7101aba1dc  csinc x26,x8,xzr,ne
7101aba1e0  mov w0,#0x10
7101aba1e4  mov x1,x26
7101aba1e8  bl 0x710392e290
7101aba1ec  cbnz x0,0x7101aba24c
7101aba1f0  ldr x0,[x20, #0xf00]
7101aba1f4  cbz x0,0x7101aba228
7101aba1f8  str wzr,[sp, #0xa8]
7101aba1fc  stur x26,[x29, #-0x98]
7101aba200  ldr x8,[x0]
7101aba204  ldr x8,[x8, #0x30]
7101aba208  add x1,sp,#0xa8
7101aba20c  sub x2,x29,#0x98
7101aba210  blr x8
7101aba214  tbz w0,#0x0,0x7101aba228
7101aba218  mov w0,#0x10
7101aba21c  mov x1,x26
7101aba220  bl 0x710392e290
7101aba224  cbnz x0,0x7101aba24c
7101aba228  lsr x25,x25,#0x1
7101aba22c  cbnz x25,0x7101aba1d0
7101aba230  mov x0,x22
7101aba234  mov x1,x23
7101aba238  mov x2,x24
7101aba23c  mov x3,xzr
7101aba240  mov x4,xzr
7101aba244  bl 0x7101aba710
7101aba248  b 0x7101aba270
7101aba24c  mov x27,x0
7101aba250  mov x0,x22
7101aba254  mov x1,x23
7101aba258  mov x2,x24
7101aba25c  mov x3,x27
7101aba260  mov x4,x25
7101aba264  bl 0x7101aba710
7101aba268  mov x0,x27
7101aba26c  bl 0x710392eb40
7101aba270  ldp x8,x0,[sp, #0x60]
7101aba274  cmp x0,x8
7101aba278  b.ne 0x7101aba288
7101aba27c  mov w22,wzr
7101aba280  cbnz x0,0x7101aba36c
7101aba284  b 0x7101aba374
7101aba288  mov x20,xzr
7101aba28c  mov x23,xzr
7101aba290  mov x0,x8
7101aba294  adrp x24,0x710434a000
7101aba298  add x24,x24,#0x556
7101aba29c  adrp x25,0x710424f000
7101aba2a0  add x25,x25,#0x6d5
7101aba2a4  adrp x28,0x710523d000
7101aba2a8  add x28,x28,#0x9a8
7101aba2ac  ldr x8,[x19, #0x170]
7101aba2b0  add x9,x0,x20
7101aba2b4  ldr x1,[x9, #0x8]
7101aba2b8  ldr w2,[x9, #0x10]
7101aba2bc  mov w3,#0x2
7101aba2c0  mov x0,x8
7101aba2c4  bl 0x710323f330
7101aba2c8  ldr x8,[x0, #0x8]
7101aba2cc  ldr x8,[x8]
7101aba2d0  cbz x8,0x7101aba340
7101aba2d4  mov x22,x0
7101aba2d8  sub x8,x29,#0x98
7101aba2dc  mov x0,x21
7101aba2e0  mov x1,x24
7101aba2e4  mov w2,w23
7101aba2e8  bl 0x7103776910
7101aba2ec  add x8,sp,#0xa8
7101aba2f0  mov x0,x21
7101aba2f4  mov x1,x25
7101aba2f8  mov w2,w23
7101aba2fc  bl 0x7103776910
7101aba300  ldur x26,[x29, #-0x90]
7101aba304  mov x0,x26
7101aba308  mov x1,x22
7101aba30c  bl 0x7103778b80
7101aba310  ldr x27,[sp, #0xb0]
7101aba314  mov x0,x27
7101aba318  mov x1,x22
7101aba31c  bl 0x7103778b80
7101aba320  stp x28,xzr,[sp, #0xa8]
7101aba324  cbz x27,0x7101aba330
7101aba328  mov x0,x27
7101aba32c  bl 0x710392eb40
7101aba330  stp x28,xzr,[x29, #-0x98]
7101aba334  cbz x26,0x7101aba340
7101aba338  mov x0,x26
7101aba33c  bl 0x710392eb40
7101aba340  ldp x0,x8,[sp, #0x60]
7101aba344  sub x8,x8,x0
7101aba348  orr x9,xzr,#-0x5555555555555556
7101aba34c  movk x9,#0xaaab
7101aba350  asr x8,x8,#0x3
7101aba354  mul x22,x8,x9
7101aba358  add x23,x23,#0x1
7101aba35c  add x20,x20,#0x18
7101aba360  cmp x22,x23
7101aba364  b.hi 0x7101aba2ac
7101aba368  cbz x0,0x7101aba374
7101aba36c  str x0,[sp, #0x68]
7101aba370  bl 0x710392eb40
7101aba374  ldr w8,[sp, #0x14]
7101aba378  cbz w8,0x7101aba3a8
7101aba37c  ldr x20,[sp]
7101aba380  ldr x19,[sp, #0x20]
7101aba384  orr w8,wzr,#0x3c0
7101aba388  madd x8,x19,x8,x20
7101aba38c  ldrb w8,[x8, #0x311]
7101aba390  ldr x0,[x21, #0x8]
7101aba394  cmp w8,#0x1
7101aba398  b.ne 0x7101aba3dc
7101aba39c  adrp x1,0x71042f7000
7101aba3a0  add x1,x1,#0xd1c
7101aba3a4  b 0x7101aba3e4
7101aba3a8  adrp x0,0x71043ad000
7101aba3ac  add x0,x0,#0x94d
7101aba3b0  add x8,sp,#0x60
7101aba3b4  mov w1,w22
7101aba3b8  add x19,sp,#0x60
7101aba3bc  bl 0x71003a4ca0
7101aba3c0  ldr x0,[x21, #0x8]
7101aba3c4  fmov s0,0x3f800000
7101aba3c8  add x1,x19,#0x8
7101aba3cc  bl 0x7103778300
7101aba3d0  ldr x20,[sp]
7101aba3d4  ldr x19,[sp, #0x20]
7101aba3d8  b 0x7101aba3ec
7101aba3dc  adrp x1,0x71042a2000
7101aba3e0  add x1,x1,#0xa64
7101aba3e4  fmov s0,0x3f800000
7101aba3e8  bl 0x7103778300
7101aba3ec  mov x0,x21
7101aba3f0  orr w8,wzr,#0x3c0
7101aba3f4  madd x8,x19,x8,x20
7101aba3f8  add x21,x8,#0x14
7101aba3fc  adrp x1,0x7104411000
7101aba400  add x1,x1,#0x1db
7101aba404  add x8,sp,#0x60
7101aba408  bl 0x7103776640
7101aba40c  ldr x8,[sp, #0x68]
7101aba410  ldr x8,[x8, #0x8]
7101aba414  cbz x8,0x7101aba468
7101aba418  ldr x22,[x8, #0x78]
7101aba41c  adrp x8,0x710593b000
7101aba420  add x8,x8,#0xa40
7101aba424  ldarb w8,[x8]
7101aba428  tbz w8,#0x0,0x7101aba69c
7101aba42c  cbz x22,0x7101aba468
7101aba430  ldr x8,[x22]
7101aba434  ldr x8,[x8]
7101aba438  mov x0,x22
7101aba43c  blr x8
7101aba440  cbz x0,0x7101aba468
7101aba444  adrp x8,0x710593b000
7101aba448  add x8,x8,#0xa58
7101aba44c  cmp x0,x8
7101aba450  b.eq 0x7101aba460
7101aba454  ldr x0,[x0]
7101aba458  cbnz x0,0x7101aba44c
7101aba45c  b 0x7101aba468
7101aba460  mov w8,#0x1
7101aba464  strb w8,[x22, #0x60]
7101aba468  adrp x1,0x710437a000
7101aba46c  add x1,x1,#0xe67
7101aba470  add x8,sp,#0x50
7101aba474  add x0,sp,#0x60
7101aba478  bl 0x7103776910
7101aba47c  ldrh w8,[x21]
7101aba480  cbz w8,0x7101aba4a4
7101aba484  ldr x22,[sp, #0x58]
7101aba488  ldr x0,[x22, #0x10]
7101aba48c  cbz x0,0x7101aba4b8
7101aba490  mov w2,#0xffffffff
7101aba494  mov w3,#0x1
7101aba498  mov x1,x21
7101aba49c  bl 0x71037a2270
7101aba4a0  b 0x7101aba4b8
7101aba4a4  adrp x1,0x71043df000
7101aba4a8  add x1,x1,#0xbed
7101aba4ac  add x0,sp,#0x50
7101aba4b0  bl 0x710377a120
7101aba4b4  ldr x22,[sp, #0x58]
7101aba4b8  adrp x23,0x710523d000
7101aba4bc  add x23,x23,#0x9a8
7101aba4c0  stp x23,xzr,[sp, #0x50]
7101aba4c4  cbz x22,0x7101aba4d0
7101aba4c8  mov x0,x22
7101aba4cc  bl 0x710392eb40
7101aba4d0  adrp x1,0x71042c3000
7101aba4d4  add x1,x1,#0x645
7101aba4d8  add x8,sp,#0x40
7101aba4dc  add x0,sp,#0x60
7101aba4e0  bl 0x7103776910
7101aba4e4  ldrh w8,[x21]
7101aba4e8  cbz w8,0x7101aba50c
7101aba4ec  ldr x22,[sp, #0x48]
7101aba4f0  ldr x0,[x22, #0x10]
7101aba4f4  cbz x0,0x7101aba520
7101aba4f8  mov w2,#0xffffffff
7101aba4fc  mov w3,#0x1
7101aba500  mov x1,x21
7101aba504  bl 0x71037a2270
7101aba508  b 0x7101aba520
7101aba50c  adrp x1,0x71043df000
7101aba510  add x1,x1,#0xbed
7101aba514  add x0,sp,#0x40
7101aba518  bl 0x710377a120
7101aba51c  ldr x22,[sp, #0x48]
7101aba520  ldr x19,[sp, #0x18]
7101aba524  ldr x21,[sp, #0x8]
7101aba528  stp x23,xzr,[sp, #0x40]
7101aba52c  cbz x22,0x7101aba538
7101aba530  mov x0,x22
7101aba534  bl 0x710392eb40
7101aba538  adrp x1,0x710438c000
7101aba53c  add x1,x1,#0xc80
7101aba540  sub x8,x29,#0x98
7101aba544  mov x0,x19
7101aba548  bl 0x7103776910
7101aba54c  sub x0,x29,#0x98
7101aba550  mov x1,x21
7101aba554  bl 0x710377a120
7101aba558  ldur x0,[x29, #-0x90]
7101aba55c  stp x23,xzr,[x29, #-0x98]
7101aba560  cbz x0,0x7101aba568
7101aba564  bl 0x710392eb40
7101aba568  adrp x1,0x710436c000
7101aba56c  add x1,x1,#0x590
7101aba570  sub x8,x29,#0x98
7101aba574  mov x0,x19
7101aba578  bl 0x7103776910
7101aba57c  sub x0,x29,#0x98
7101aba580  mov x1,x21
7101aba584  bl 0x710377a120
7101aba588  ldur x0,[x29, #-0x90]
7101aba58c  stp x23,xzr,[x29, #-0x98]
7101aba590  cbz x0,0x7101aba598
7101aba594  bl 0x710392eb40
7101aba598  ldr x9,[sp, #0x20]
7101aba59c  orr w8,wzr,#0x3c0
7101aba5a0  madd x8,x9,x8,x20
7101aba5a4  mov x9,#-0x7777
7101aba5a8  movk x9,#0x8888, LSL #16
7101aba5ac  ldrsw x8,[x8, #0x68]
7101aba5b0  mul x9,x8,x9
7101aba5b4  lsr x9,x9,#0x20
7101aba5b8  add w9,w9,w8
7101aba5bc  asr w10,w9,#0x5
7101aba5c0  add w9,w10,w9, LSR #0x1f
7101aba5c4  mov w10,#0xffffffc4
7101aba5c8  madd w8,w9,w10,w8
7101aba5cc  cmp w9,#0x3e7
7101aba5d0  mov w10,#0x3e7
7101aba5d4  csel w9,w9,w10,lt
7101aba5d8  cmp w8,#0x3e7
7101aba5dc  mov w11,#0x3e8
7101aba5e0  csel w8,w8,w10,lt
7101aba5e4  madd w20,w9,w11,w8
7101aba5e8  adrp x1,0x71043ae000
7101aba5ec  add x1,x1,#0x1be
7101aba5f0  sub x8,x29,#0x98
7101aba5f4  mov x0,x19
7101aba5f8  bl 0x7103776910
7101aba5fc  adrp x1,0x7104421000
7101aba600  add x1,x1,#0xe2f
7101aba604  sub x0,x29,#0x98
7101aba608  mov w2,#0x1
7101aba60c  mov w3,w20
7101aba610  bl 0x710377a280
7101aba614  ldur x0,[x29, #-0x90]
7101aba618  stp x23,xzr,[x29, #-0x98]
7101aba61c  cbz x0,0x7101aba624
7101aba620  bl 0x710392eb40
7101aba624  ldr x19,[sp, #0x68]
7101aba628  adrp x8,0x710523d000
7101aba62c  add x8,x8,#0x988
7101aba630  stp x8,xzr,[sp, #0x60]
7101aba634  cbz x19,0x7101aba64c
7101aba638  ldr x0,[x19, #0x18]
7101aba63c  stp x23,xzr,[x19, #0x10]
7101aba640  cbz x0,0x7101ab93a0
7101aba644  bl 0x710392eb40
7101aba648  b 0x7101ab93a0
7101aba64c  ldp x29,x30,[sp, #0x150]
7101aba650  ldp x20,x19,[sp, #0x140]
7101aba654  ldp x22,x21,[sp, #0x130]
7101aba658  ldp x24,x23,[sp, #0x120]
7101aba65c  ldp x26,x25,[sp, #0x110]
7101aba660  ldp x28,x27,[sp, #0x100]
7101aba664  add sp,sp,#0x160
7101aba668  ret
7101aba66c  adrp x8,0x710523d000
7101aba670  add x8,x8,#0x9e8
7101aba674  stp x8,xzr,[sp, #0x60]
7101aba678  b 0x7101ab985c
7101aba67c  mov w8,#0x1
7101aba680  strb w8,[x20]
7101aba684  ldr x0,[x21, #0x8]
7101aba688  fmov s0,0x3f800000
7101aba68c  adrp x1,0x71042a2000
7101aba690  add x1,x1,#0xa58
7101aba694  bl 0x7103778300
7101aba698  b 0x7101ab9708
7101aba69c  adrp x0,0x710593b000
7101aba6a0  add x0,x0,#0xa40
7101aba6a4  bl 0x71039c06b0
7101aba6a8  cbz w0,0x7101aba42c
7101aba6ac  adrp x8,0x710593b000
7101aba6b0  add x8,x8,#0xa48
7101aba6b4  ldarb w8,[x8]
7101aba6b8  tbz w8,#0x0,0x7101aba6e8
7101aba6bc  adrp x8,0x710593b000
7101aba6c0  adrp x9,0x710593b000
7101aba6c4  add x9,x9,#0xa50
7101aba6c8  adrp x0,0x710593b000
7101aba6cc  add x0,x0,#0xa40
7101aba6d0  str x9,[x8, #0xa58]
7101aba6d4  bl 0x71039c06c0
7101aba6d8  cbnz x22,0x7101aba430
7101aba6dc  b 0x7101aba468
7101aba6e0  add x0,sp,#0x60
7101aba6e4  bl 0x71039c0c00
7101aba6e8  adrp x0,0x710593b000
7101aba6ec  add x0,x0,#0xa48
7101aba6f0  bl 0x71039c06b0
7101aba6f4  cbz w0,0x7101aba6bc
7101aba6f8  adrp x8,0x710593b000
7101aba6fc  adrp x0,0x710593b000
7101aba700  add x0,x0,#0xa48
7101aba704  str xzr,[x8, #0xa50]
7101aba708  bl 0x71039c06c0
7101aba70c  b 0x7101aba6bc
