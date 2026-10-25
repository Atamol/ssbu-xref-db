// addr:      7102ec8fc0
// offset:    0x2ec8fc0
// name:      FUN_7102ec8fc0
// mangled:   
// size:      2296

7102ec8fc0  sub sp,sp,#0xb0
7102ec8fc4  str x25,[sp, #0x60]
7102ec8fc8  stp x24,x23,[sp, #0x70]
7102ec8fcc  stp x22,x21,[sp, #0x80]
7102ec8fd0  stp x20,x19,[sp, #0x90]
7102ec8fd4  stp x29,x30,[sp, #0xa0]
7102ec8fd8  add x29,sp,#0xa0
7102ec8fdc  adrp x8,0x7105147000
7102ec8fe0  add x8,x8,#0xf50
7102ec8fe4  adrp x9,0x7104468000
7102ec8fe8  stp x2,xzr,[x0, #0x10]
7102ec8fec  ldr q2,[x9, #0xca0]
7102ec8ff0  stp x8,x1,[x0]
7102ec8ff4  ldr x8,[x1, #0x338]
7102ec8ff8  str x8,[x0, #0x20]
7102ec8ffc  adrp x8,0x710446a000
7102ec9000  str w3,[x0, #0x28]
7102ec9004  str xzr,[x0, #0x40]
7102ec9008  stur xzr,[x0, #0x32]
7102ec900c  ldr q1,[x8, #0x360]
7102ec9010  adrp x8,0x7104465000
7102ec9014  stp xzr,xzr,[x0, #0x170]
7102ec9018  ldr q3,[x8, #0x6b0]
7102ec901c  adrp x8,0x710446a000
7102ec9020  ldr q4,[x8, #0x350]
7102ec9024  stp q2,q1,[x0, #0x50]
7102ec9028  adrp x8,0x71052a8000
7102ec902c  mov x23,#0xcf71
7102ec9030  movk x23,#0xda78, LSL #16
7102ec9034  mov x21,x2
7102ec9038  mov x20,x1
7102ec903c  mov x19,x0
7102ec9040  movk x23,#0xe, LSL #32
7102ec9044  stur xzr,[x0, #0x2c]
7102ec9048  str xzr,[x0, #0x90]
7102ec904c  str wzr,[x0, #0xe0]
7102ec9050  str xzr,[x0, #0x1d8]
7102ec9054  strb wzr,[x0, #0x1d0]
7102ec9058  stp xzr,xzr,[x0, #0x1c0]
7102ec905c  stp q3,q4,[x0, #0x70]
7102ec9060  stp q2,q1,[x0, #0xa0]
7102ec9064  stp q3,q4,[x0, #0xc0]
7102ec9068  stp q2,q1,[x0, #0xf0]
7102ec906c  stp q3,q4,[x0, #0x110]
7102ec9070  stp q2,q1,[x0, #0x130]
7102ec9074  stp q3,q4,[x0, #0x150]
7102ec9078  stp q2,q1,[x0, #0x180]
7102ec907c  stp q3,q4,[x0, #0x1a0]
7102ec9080  ldr x8,[x8, #0xa88]
7102ec9084  ldr q0,[x8]
7102ec9088  mov w8,#0xffffffff
7102ec908c  str w8,[x0, #0x270]
7102ec9090  add x8,x0,#0x274
7102ec9094  str xzr,[x0, #0x268]
7102ec9098  str xzr,[x0, #0x260]
7102ec909c  str xzr,[x0, #0x258]
7102ec90a0  str xzr,[x0, #0x250]
7102ec90a4  str xzr,[x0, #0x248]
7102ec90a8  str xzr,[x0, #0x240]
7102ec90ac  strh wzr,[x0, #0x27c]
7102ec90b0  stp q0,q0,[x0, #0x1e0]
7102ec90b4  stp q2,q1,[x0, #0x200]
7102ec90b8  stp q3,q4,[x0, #0x220]
7102ec90bc  str xzr,[x8]
7102ec90c0  strh wzr,[x0, #0x288]
7102ec90c4  str xzr,[x0, #0x280]
7102ec90c8  ldr x8,[x1, #0x310]
7102ec90cc  ldp x9,x10,[x8, #0xd0]
7102ec90d0  cmp x9,x10
7102ec90d4  stp q2,q1,[sp, #0x20]
7102ec90d8  stp q4,q3,[sp]
7102ec90dc  b.eq 0x7102ec9108
7102ec90e0  ldr w8,[x9, #0x8]
7102ec90e4  cmp w8,#0x1
7102ec90e8  b.hi 0x7102ec90fc
7102ec90ec  ldr x8,[x9]
7102ec90f0  ldr x11,[x8, #0x68]
7102ec90f4  cmp x11,x23
7102ec90f8  b.eq 0x7102ec922c
7102ec90fc  add x9,x9,#0x10
7102ec9100  cmp x10,x9
7102ec9104  b.ne 0x7102ec90e0
7102ec9108  mov x0,xzr
7102ec910c  str xzr,[x19, #0x18]
7102ec9110  fmov s0,wzr
7102ec9114  mov w1,#0x1
7102ec9118  bl 0x710260fdd0
7102ec911c  ldr x22,[x19, #0x18]
7102ec9120  cbz x22,0x7102ec9154
7102ec9124  ldr x8,[x22, #0xd8]
7102ec9128  cbnz x8,0x7102ec9154
7102ec912c  add x0,x22,#0x90
7102ec9130  mov x1,xzr
7102ec9134  bl 0x71026533a0
7102ec9138  mov x8,x0
7102ec913c  ldr x0,[x22, #0xd8]
7102ec9140  str x8,[x22, #0xd8]
7102ec9144  cbz x0,0x7102ec9154
7102ec9148  ldr x8,[x0]
7102ec914c  ldr x8,[x8, #0x8]
7102ec9150  blr x8
7102ec9154  ldr x8,[x19, #0x8]
7102ec9158  ldr x9,[x8, #0x310]
7102ec915c  ldp x8,x9,[x9, #0xd0]
7102ec9160  cmp x8,x9
7102ec9164  b.eq 0x7102ec91a8
7102ec9168  ldp q6,q5,[sp, #0x20]
7102ec916c  ldp q16,q7,[sp]
7102ec9170  mov x10,#0x778a
7102ec9174  movk x10,#0xdf8c, LSL #16
7102ec9178  movk x10,#0xd, LSL #32
7102ec917c  ldr w11,[x8, #0x8]
7102ec9180  cmp w11,#0x1
7102ec9184  b.hi 0x7102ec9198
7102ec9188  ldr x24,[x8]
7102ec918c  ldr x11,[x24, #0x68]
7102ec9190  cmp x11,x10
7102ec9194  b.eq 0x7102ec92c4
7102ec9198  add x8,x8,#0x10
7102ec919c  cmp x9,x8
7102ec91a0  b.ne 0x7102ec917c
7102ec91a4  b 0x7102ec91b0
7102ec91a8  ldp q6,q5,[sp, #0x20]
7102ec91ac  ldp q16,q7,[sp]
7102ec91b0  mov x24,xzr
7102ec91b4  mov w25,#0x1
7102ec91b8  mov v0.16B,v5.16B
7102ec91bc  mov v1.16B,v6.16B
7102ec91c0  mov v3.16B,v7.16B
7102ec91c4  mov v2.16B,v16.16B
7102ec91c8  ext v4.16B,v2.16B,v2.16B,0x8
7102ec91cc  fmov s17,wzr
7102ec91d0  stp q1,q0,[x19, #0x130]
7102ec91d4  mov v1.16B,v7.16B
7102ec91d8  mov v4.S[0x1],v17.S[0x0]
7102ec91dc  mov v0.16B,v16.16B
7102ec91e0  stp q3,q2,[x19, #0x150]
7102ec91e4  mov v3.16B,v5.16B
7102ec91e8  mov v2.D[0x1],v4.D[0x0]
7102ec91ec  str q2,[x19, #0x170]
7102ec91f0  mov v2.16B,v6.16B
7102ec91f4  tbnz w25,#0x0,0x7102ec9378
7102ec91f8  ldr x8,[x24, #0xd8]
7102ec91fc  cbz x8,0x7102ec92f4
7102ec9200  ldr x8,[x8, #0x8]
7102ec9204  ldr x0,[x8, #0x8]
7102ec9208  ldr x8,[x0]
7102ec920c  ldr x8,[x8, #0x18]
7102ec9210  adrp x1,0x7104410000
7102ec9214  add x1,x1,#0xb5b
7102ec9218  blr x8
7102ec921c  mov w22,w0
7102ec9220  ldr x8,[x24, #0xd8]
7102ec9224  cbnz x8,0x7102ec9300
7102ec9228  b 0x7102ec9344
7102ec922c  str x8,[x19, #0x18]
7102ec9230  cbz x8,0x7102ec9284
7102ec9234  add x0,x8,#0x108
7102ec9238  strb wzr,[x8, #0x110]
7102ec923c  bl 0x71025e9d50
7102ec9240  ldr x8,[x19, #0x18]
7102ec9244  cbz x8,0x7102ec9594
7102ec9248  ldrb w9,[x8, #0xe0]
7102ec924c  cbz w9,0x7102ec9260
7102ec9250  ldr x9,[x8, #0xc8]
7102ec9254  cbz x9,0x7102ec9260
7102ec9258  mov w10,#0x101
7102ec925c  strh w10,[x9, #0x30]
7102ec9260  ldr x9,[x8, #0xd8]
7102ec9264  cbz x9,0x7102ec9270
7102ec9268  mov w10,#0x1
7102ec926c  strb w10,[x9, #0x21]
7102ec9270  ldrb w9,[x8, #0xe0]
7102ec9274  cbz w9,0x7102ec9280
7102ec9278  ldr x8,[x8, #0xb0]
7102ec927c  strb wzr,[x8, #0x10]
7102ec9280  ldr x8,[x19, #0x18]
7102ec9284  cbz x8,0x7102ec9594
7102ec9288  ldrb w9,[x8, #0xe0]
7102ec928c  cbz w9,0x7102ec929c
7102ec9290  ldr x9,[x8, #0xc8]
7102ec9294  cbz x9,0x7102ec929c
7102ec9298  strh wzr,[x9, #0x32]
7102ec929c  ldr x8,[x8, #0xd8]
7102ec92a0  cbz x8,0x7102ec92a8
7102ec92a4  strb wzr,[x8, #0x22]
7102ec92a8  ldr x8,[x19, #0x18]
7102ec92ac  cbz x8,0x7102ec9594
7102ec92b0  ldrb w9,[x8, #0x118]
7102ec92b4  orr w9,w9,#0x1
7102ec92b8  strb w9,[x8, #0x118]
7102ec92bc  ldr x0,[x19, #0x18]
7102ec92c0  b 0x7102ec9110
7102ec92c4  cbz x24,0x7102ec980c
7102ec92c8  ldr x8,[x24, #0xd8]
7102ec92cc  cbz x8,0x7102ec9828
7102ec92d0  ldr x8,[x8, #0x8]
7102ec92d4  ldr x0,[x8, #0x8]
7102ec92d8  ldr x8,[x0]
7102ec92dc  ldr x8,[x8, #0x18]
7102ec92e0  adrp x1,0x71042b2000
7102ec92e4  add x1,x1,#0x5a9
7102ec92e8  blr x8
7102ec92ec  mov w22,w0
7102ec92f0  b 0x7102ec982c
7102ec92f4  mov w22,#0xffffffff
7102ec92f8  ldr x8,[x24, #0xd8]
7102ec92fc  cbz x8,0x7102ec9344
7102ec9300  ldr x8,[x8, #0x8]
7102ec9304  ldr x0,[x8, #0x8]
7102ec9308  ldr x8,[x0]
7102ec930c  ldr x8,[x8, #0x10]
7102ec9310  blr x8
7102ec9314  cmp w0,w22
7102ec9318  b.ls 0x7102ec9344
7102ec931c  ldr x8,[x24, #0xd8]
7102ec9320  ldr x8,[x8, #0x8]
7102ec9324  ldr x0,[x8, #0x48]
7102ec9328  ldr x8,[x0]
7102ec932c  ldr x8,[x8, #0x38]
7102ec9330  mov w1,wzr
7102ec9334  blr x8
7102ec9338  mov w8,w22
7102ec933c  add x0,x1,x8, LSL #0x6
7102ec9340  b 0x7102ec9354
7102ec9344  ldr x0,[x24, #0x90]
7102ec9348  ldr x8,[x0]
7102ec934c  ldr x8,[x8, #0x158]
7102ec9350  blr x8
7102ec9354  add x8,x0,#0x10
7102ec9358  add x9,x0,#0x20
7102ec935c  add x10,x0,#0x30
7102ec9360  ldp q6,q5,[sp, #0x20]
7102ec9364  ldp q16,q7,[sp]
7102ec9368  ldr q1,[x9]
7102ec936c  ldr q2,[x0]
7102ec9370  ldr q3,[x8]
7102ec9374  ldr q0,[x10]
7102ec9378  ext v4.16B,v0.16B,v0.16B,0x8
7102ec937c  fmov s17,wzr
7102ec9380  mov w0,#0x10
7102ec9384  stp q1,q0,[x19, #0x1a0]
7102ec9388  orr w1,wzr,#0x30
7102ec938c  mov v4.S[0x1],v17.S[0x0]
7102ec9390  stp q2,q3,[x19, #0x180]
7102ec9394  mov v0.D[0x1],v4.D[0x0]
7102ec9398  stp q6,q5,[x19, #0xf0]
7102ec939c  stp q7,q16,[x19, #0x110]
7102ec93a0  str q0,[x19, #0x1c0]
7102ec93a4  bl 0x710392e290
7102ec93a8  mov x22,x0
7102ec93ac  cbnz x0,0x7102ec93f8
7102ec93b0  adrp x8,0x7105332000
7102ec93b4  ldr x0,[x8, #0xf00]
7102ec93b8  cbz x0,0x7102ec93f4
7102ec93bc  orr w8,wzr,#0x30
7102ec93c0  stur wzr,[x29, #-0x34]
7102ec93c4  sub x1,x29,#0x34
7102ec93c8  str x8,[sp, #0x48]
7102ec93cc  ldr x8,[x0]
7102ec93d0  ldr x8,[x8, #0x30]
7102ec93d4  add x2,sp,#0x48
7102ec93d8  blr x8
7102ec93dc  tbz w0,#0x0,0x7102ec93f4
7102ec93e0  mov w0,#0x10
7102ec93e4  orr w1,wzr,#0x30
7102ec93e8  bl 0x710392e290
7102ec93ec  mov x22,x0
7102ec93f0  cbnz x0,0x7102ec93f8
7102ec93f4  mov x22,xzr
7102ec93f8  mov w8,#0x50000000
7102ec93fc  stp x20,x21,[x22]
7102ec9400  str xzr,[x22, #0x20]
7102ec9404  stur xzr,[x22, #0x16]
7102ec9408  str xzr,[x22, #0x10]
7102ec940c  str w8,[x22, #0x28]
7102ec9410  ldr x0,[x20, #0x310]
7102ec9414  ldp x1,x8,[x0, #0xd0]
7102ec9418  cmp x1,x8
7102ec941c  b.eq 0x7102ec9448
7102ec9420  ldr w9,[x1, #0x8]
7102ec9424  cmp w9,#0x1
7102ec9428  b.hi 0x7102ec943c
7102ec942c  ldr x9,[x1]
7102ec9430  ldr x9,[x9, #0x68]
7102ec9434  cmp x9,x23
7102ec9438  b.eq 0x7102ec950c
7102ec943c  add x1,x1,#0x10
7102ec9440  cmp x8,x1
7102ec9444  b.ne 0x7102ec9420
7102ec9448  str xzr,[x22, #0x20]
7102ec944c  ldr x0,[x22, #0x20]
7102ec9450  fmov s0,wzr
7102ec9454  mov w1,#0x1
7102ec9458  add x20,x19,#0x240
7102ec945c  mov w21,#0x1
7102ec9460  bl 0x710260fdd0
7102ec9464  stur xzr,[x22, #0x14]
7102ec9468  strh w21,[x22, #0x1c]
7102ec946c  ldr x0,[x19, #0x1d8]
7102ec9470  str x22,[x19, #0x1d8]
7102ec9474  cbz x0,0x7102ec947c
7102ec9478  bl 0x710392eb40
7102ec947c  ldr x8,[x19, #0x8]
7102ec9480  ldr x1,[x8, #0x320]
7102ec9484  mov x2,#0x9e7d
7102ec9488  movk x2,#0x4ebb, LSL #16
7102ec948c  movk x2,#0x1a, LSL #32
7102ec9490  add x0,sp,#0x48
7102ec9494  add x21,sp,#0x48
7102ec9498  bl 0x7102626be0
7102ec949c  cmp x20,x21
7102ec94a0  b.eq 0x7102ec95c4
7102ec94a4  ldr x9,[x19, #0x250]
7102ec94a8  ldr x8,[sp, #0x58]
7102ec94ac  cmp x9,x8
7102ec94b0  b.eq 0x7102ec95c8
7102ec94b4  cbz x8,0x7102ec959c
7102ec94b8  cbz x9,0x7102ec94e0
7102ec94bc  ldr x10,[x20]
7102ec94c0  ldr x11,[x19, #0x248]
7102ec94c4  str x10,[x11]
7102ec94c8  str x11,[x10, #0x8]
7102ec94cc  ldr x10,[x9, #0x10]
7102ec94d0  sub x10,x10,#0x1
7102ec94d4  str x10,[x9, #0x10]
7102ec94d8  stp xzr,xzr,[x20, #0x8]
7102ec94dc  str xzr,[x20]
7102ec94e0  ldr x10,[x8, #0x20]
7102ec94e4  add x9,x8,#0x18
7102ec94e8  str x9,[x19, #0x240]
7102ec94ec  str x10,[x19, #0x248]
7102ec94f0  str x20,[x8, #0x20]
7102ec94f4  str x20,[x10]
7102ec94f8  ldr x9,[x8, #0x10]
7102ec94fc  add x9,x9,#0x1
7102ec9500  str x9,[x8, #0x10]
7102ec9504  str x8,[x19, #0x250]
7102ec9508  b 0x7102ec95c4
7102ec950c  bl 0x710262fb80
7102ec9510  str x0,[x22, #0x20]
7102ec9514  cbz x0,0x7102ec952c
7102ec9518  add x8,x0,#0x108
7102ec951c  strb wzr,[x0, #0x110]
7102ec9520  mov x0,x8
7102ec9524  bl 0x71025e9d50
7102ec9528  ldr x0,[x22, #0x20]
7102ec952c  cbz x0,0x7102ec9568
7102ec9530  ldrb w8,[x0, #0xe0]
7102ec9534  cbz w8,0x7102ec9548
7102ec9538  ldr x8,[x0, #0xc8]
7102ec953c  cbz x8,0x7102ec9548
7102ec9540  mov w9,#0x101
7102ec9544  strh w9,[x8, #0x30]
7102ec9548  ldr x8,[x0, #0xd8]
7102ec954c  cbz x8,0x7102ec9558
7102ec9550  mov w9,#0x1
7102ec9554  strb w9,[x8, #0x21]
7102ec9558  ldrb w8,[x0, #0xe0]
7102ec955c  cbz w8,0x7102ec9568
7102ec9560  ldr x8,[x0, #0xb0]
7102ec9564  strb wzr,[x8, #0x10]
7102ec9568  ldr x8,[x22, #0x20]
7102ec956c  cbz x8,0x7102ec944c
7102ec9570  ldrb w9,[x8, #0xe0]
7102ec9574  cbz w9,0x7102ec9584
7102ec9578  ldr x9,[x8, #0xc8]
7102ec957c  cbz x9,0x7102ec9584
7102ec9580  strh wzr,[x9, #0x32]
7102ec9584  ldr x8,[x8, #0xd8]
7102ec9588  cbz x8,0x7102ec944c
7102ec958c  strb wzr,[x8, #0x22]
7102ec9590  b 0x7102ec944c
7102ec9594  mov x0,xzr
7102ec9598  b 0x7102ec9110
7102ec959c  cbz x9,0x7102ec95c4
7102ec95a0  ldr x8,[x19, #0x240]
7102ec95a4  ldr x10,[x19, #0x248]
7102ec95a8  str x8,[x10]
7102ec95ac  str x10,[x8, #0x8]
7102ec95b0  ldr x8,[x9, #0x10]
7102ec95b4  sub x8,x8,#0x1
7102ec95b8  str x8,[x9, #0x10]
7102ec95bc  stp xzr,xzr,[x20, #0x8]
7102ec95c0  str xzr,[x20]
7102ec95c4  ldr x8,[sp, #0x58]
7102ec95c8  cbz x8,0x7102ec95ec
7102ec95cc  ldp x9,x10,[sp, #0x48]
7102ec95d0  str x9,[x10]
7102ec95d4  str x10,[x9, #0x8]
7102ec95d8  ldr x9,[x8, #0x10]
7102ec95dc  sub x9,x9,#0x1
7102ec95e0  str x9,[x8, #0x10]
7102ec95e4  stp xzr,xzr,[sp, #0x50]
7102ec95e8  str xzr,[sp, #0x48]
7102ec95ec  ldr x8,[x19, #0x250]
7102ec95f0  add x20,x19,#0x258
7102ec95f4  cbz x8,0x7102ec965c
7102ec95f8  ldr x9,[x8, #0xa8]
7102ec95fc  and x9,x9,#-0x2
7102ec9600  str x9,[x8, #0xa8]
7102ec9604  ldrb w9,[x8, #0x35]
7102ec9608  cbz w9,0x7102ec9650
7102ec960c  ldr w8,[x8, #0x3c]
7102ec9610  cmp w8,#0x1
7102ec9614  b.lt 0x7102ec965c
7102ec9618  adrp x9,0x7105334000
7102ec961c  ldr x9,[x9, #0x920]
7102ec9620  ldr x9,[x9]
7102ec9624  lsr x10,x8,#0x18
7102ec9628  orr w11,wzr,#0x300
7102ec962c  madd x11,x10,x11,x9
7102ec9630  cbz x11,0x7102ec965c
7102ec9634  ldr w11,[x11, #0x4]
7102ec9638  cmp w11,w8
7102ec963c  b.ne 0x7102ec965c
7102ec9640  orr w8,wzr,#0x300
7102ec9644  madd x8,x10,x8,x9
7102ec9648  strb wzr,[x8, #0x2d4]
7102ec964c  b 0x7102ec965c
7102ec9650  ldr x9,[x8, #0x48]
7102ec9654  orr x9,x9,#0x40
7102ec9658  str x9,[x8, #0x48]
7102ec965c  ldr x8,[x19, #0x8]
7102ec9660  ldr x1,[x8, #0x320]
7102ec9664  mov x2,#0xbd43
7102ec9668  movk x2,#0x793f, LSL #16
7102ec966c  movk x2,#0x1b, LSL #32
7102ec9670  add x0,sp,#0x48
7102ec9674  add x21,sp,#0x48
7102ec9678  bl 0x7102626be0
7102ec967c  cmp x20,x21
7102ec9680  b.eq 0x7102ec9714
7102ec9684  ldr x9,[x19, #0x268]
7102ec9688  ldr x8,[sp, #0x58]
7102ec968c  cmp x9,x8
7102ec9690  b.eq 0x7102ec9718
7102ec9694  cbz x8,0x7102ec96ec
7102ec9698  cbz x9,0x7102ec96c0
7102ec969c  ldr x10,[x20]
7102ec96a0  ldr x11,[x19, #0x260]
7102ec96a4  str x10,[x11]
7102ec96a8  str x11,[x10, #0x8]
7102ec96ac  ldr x10,[x9, #0x10]
7102ec96b0  sub x10,x10,#0x1
7102ec96b4  str x10,[x9, #0x10]
7102ec96b8  stp xzr,xzr,[x20, #0x8]
7102ec96bc  str xzr,[x20]
7102ec96c0  ldr x10,[x8, #0x20]
7102ec96c4  add x9,x8,#0x18
7102ec96c8  str x9,[x19, #0x258]
7102ec96cc  str x10,[x19, #0x260]
7102ec96d0  str x20,[x8, #0x20]
7102ec96d4  str x20,[x10]
7102ec96d8  ldr x9,[x8, #0x10]
7102ec96dc  add x9,x9,#0x1
7102ec96e0  str x9,[x8, #0x10]
7102ec96e4  str x8,[x19, #0x268]
7102ec96e8  b 0x7102ec9714
7102ec96ec  cbz x9,0x7102ec9714
7102ec96f0  ldr x8,[x19, #0x258]
7102ec96f4  ldr x10,[x19, #0x260]
7102ec96f8  str x8,[x10]
7102ec96fc  str x10,[x8, #0x8]
7102ec9700  ldr x8,[x9, #0x10]
7102ec9704  sub x8,x8,#0x1
7102ec9708  str x8,[x9, #0x10]
7102ec970c  stp xzr,xzr,[x20, #0x8]
7102ec9710  str xzr,[x20]
7102ec9714  ldr x8,[sp, #0x58]
7102ec9718  cbz x8,0x7102ec973c
7102ec971c  ldp x9,x10,[sp, #0x48]
7102ec9720  str x9,[x10]
7102ec9724  str x10,[x9, #0x8]
7102ec9728  ldr x9,[x8, #0x10]
7102ec972c  sub x9,x9,#0x1
7102ec9730  str x9,[x8, #0x10]
7102ec9734  stp xzr,xzr,[sp, #0x50]
7102ec9738  str xzr,[sp, #0x48]
7102ec973c  ldr x8,[x19, #0x268]
7102ec9740  cbz x8,0x7102ec9798
7102ec9744  ldr x9,[x8, #0xa8]
7102ec9748  and x9,x9,#-0x2
7102ec974c  str x9,[x8, #0xa8]
7102ec9750  ldrb w9,[x8, #0x35]
7102ec9754  cbz w9,0x7102ec97c8
7102ec9758  ldr w8,[x8, #0x3c]
7102ec975c  cmp w8,#0x1
7102ec9760  b.lt 0x7102ec9798
7102ec9764  adrp x9,0x7105334000
7102ec9768  ldr x9,[x9, #0x920]
7102ec976c  ldr x9,[x9]
7102ec9770  lsr x10,x8,#0x18
7102ec9774  orr w11,wzr,#0x300
7102ec9778  madd x11,x10,x11,x9
7102ec977c  cbz x11,0x7102ec9798
7102ec9780  ldr w11,[x11, #0x4]
7102ec9784  cmp w11,w8
7102ec9788  b.ne 0x7102ec9798
7102ec978c  orr w8,wzr,#0x300
7102ec9790  madd x8,x10,x8,x9
7102ec9794  strb wzr,[x8, #0x2d4]
7102ec9798  ldr x8,[x19, #0x18]
7102ec979c  cbz x8,0x7102ec97dc
7102ec97a0  ldr x8,[x8, #0xd8]
7102ec97a4  cbz x8,0x7102ec97dc
7102ec97a8  ldr x8,[x8, #0x8]
7102ec97ac  ldr x0,[x8, #0x8]
7102ec97b0  ldr x8,[x0]
7102ec97b4  ldr x8,[x8, #0x18]
7102ec97b8  adrp x1,0x710428f000
7102ec97bc  add x1,x1,#0xc23
7102ec97c0  blr x8
7102ec97c4  b 0x7102ec97e0
7102ec97c8  ldr x9,[x8, #0x48]
7102ec97cc  orr x9,x9,#0x40
7102ec97d0  str x9,[x8, #0x48]
7102ec97d4  ldr x8,[x19, #0x18]
7102ec97d8  cbnz x8,0x7102ec97a0
7102ec97dc  mov w0,#0xffffffff
7102ec97e0  mov w8,#0x1
7102ec97e4  str w0,[x19, #0x270]
7102ec97e8  str xzr,[x19, #0x280]
7102ec97ec  strh w8,[x19, #0x288]
7102ec97f0  ldp x29,x30,[sp, #0xa0]
7102ec97f4  ldp x20,x19,[sp, #0x90]
7102ec97f8  ldr x25,[sp, #0x60]
7102ec97fc  ldp x22,x21,[sp, #0x80]
7102ec9800  ldp x24,x23,[sp, #0x70]
7102ec9804  add sp,sp,#0xb0
7102ec9808  ret
7102ec980c  cmp x24,#0x0
7102ec9810  cset w25,eq
7102ec9814  cbz x24,0x7102ec91b8
7102ec9818  mov w22,#0xffffffff
7102ec981c  ldr x8,[x24, #0xd8]
7102ec9820  cbnz x8,0x7102ec983c
7102ec9824  b 0x7102ec9880
7102ec9828  mov w22,#0xffffffff
7102ec982c  cmp x24,#0x0
7102ec9830  cset w25,eq
7102ec9834  ldr x8,[x24, #0xd8]
7102ec9838  cbz x8,0x7102ec9880
7102ec983c  ldr x8,[x8, #0x8]
7102ec9840  ldr x0,[x8, #0x8]
7102ec9844  ldr x8,[x0]
7102ec9848  ldr x8,[x8, #0x10]
7102ec984c  blr x8
7102ec9850  cmp w0,w22
7102ec9854  b.ls 0x7102ec9880
7102ec9858  ldr x8,[x24, #0xd8]
7102ec985c  ldr x8,[x8, #0x8]
7102ec9860  ldr x0,[x8, #0x48]
7102ec9864  ldr x8,[x0]
7102ec9868  ldr x8,[x8, #0x38]
7102ec986c  mov w1,wzr
7102ec9870  blr x8
7102ec9874  mov w8,w22
7102ec9878  add x0,x1,x8, LSL #0x6
7102ec987c  b 0x7102ec9890
7102ec9880  ldr x0,[x24, #0x90]
7102ec9884  ldr x8,[x0]
7102ec9888  ldr x8,[x8, #0x158]
7102ec988c  blr x8
7102ec9890  add x8,x0,#0x10
7102ec9894  add x9,x0,#0x20
7102ec9898  add x10,x0,#0x30
7102ec989c  ldp q6,q5,[sp, #0x20]
7102ec98a0  ldp q16,q7,[sp]
7102ec98a4  ldr q3,[x9]
7102ec98a8  ldr q1,[x0]
7102ec98ac  ldr q0,[x8]
7102ec98b0  ldr q2,[x10]
7102ec98b4  b 0x7102ec91c8
