// addr:      7102ea9120
// offset:    0x2ea9120
// name:      FUN_7102ea9120
// mangled:   
// size:      2040

7102ea9120  str d8,[sp, #-0x40]!
7102ea9124  str x23,[sp, #0x8]
7102ea9128  stp x22,x21,[sp, #0x10]
7102ea912c  stp x20,x19,[sp, #0x20]
7102ea9130  stp x29,x30,[sp, #0x30]
7102ea9134  add x29,sp,#0x30
7102ea9138  ldr w8,[x0, #0x2f4]
7102ea913c  cmp w8,#0xa
7102ea9140  b.hi 0x7102ea9900
7102ea9144  adrp x9,0x710451f000
7102ea9148  add x9,x9,#0x604
7102ea914c  mov v8.16B,v0.16B
7102ea9150  ldrsw x8,[x9, x8, LSL #0x2]
7102ea9154  add x8,x8,x9
7102ea9158  mov x19,x0
7102ea915c  br x8
7102ea9160  ldr x9,[x19, #0x80]
7102ea9164  ldr x8,[x19]
7102ea9168  ldr x8,[x8, #0x340]
7102ea916c  ldp s0,s1,[x9]
7102ea9170  b 0x7102ea9334
7102ea9174  ldr s0,[x19, #0x2f8]
7102ea9178  fsub s0,s0,s8
7102ea917c  fcmp s0,#0.0
7102ea9180  str s0,[x19, #0x2f8]
7102ea9184  b.hi 0x7102ea9900
7102ea9188  ldr w8,[x19, #0x340]
7102ea918c  cmn w8,#0x1
7102ea9190  b.ne 0x7102ea91a0
7102ea9194  add x0,x19,#0x338
7102ea9198  bl 0x7102c2f880
7102ea919c  ldr w8,[x19, #0x340]
7102ea91a0  ldr w9,[x19, #0x344]
7102ea91a4  ldr x10,[x19, #0x348]
7102ea91a8  add x11,x19,#0x344
7102ea91ac  str w9,[x19, #0x340]
7102ea91b0  str x10,[x11]
7102ea91b4  ldr w9,[x19, #0x350]
7102ea91b8  mov w12,#0xffffffff
7102ea91bc  str w12,[x19, #0x350]
7102ea91c0  str w8,[x19, #0x358]
7102ea91c4  str w9,[x19, #0x34c]
7102ea91c8  mov w9,#0x1
7102ea91cc  strb w9,[x19, #0x354]
7102ea91d0  cbz w8,0x7102ea9610
7102ea91d4  mvn w8,w8
7102ea91d8  and w8,w8,#0x1
7102ea91dc  strb wzr,[x19, #0x300]
7102ea91e0  b 0x7102ea9618
7102ea91e4  ldrb w8,[x19, #0x300]
7102ea91e8  add x20,x19,#0x300
7102ea91ec  cbz w8,0x7102ea939c
7102ea91f0  ldr x0,[x19, #0x2e0]
7102ea91f4  ldr x8,[x0]
7102ea91f8  ldr x8,[x8, #0x20]
7102ea91fc  mov w1,#0x1
7102ea9200  blr x8
7102ea9204  b 0x7102ea988c
7102ea9208  add x20,x19,#0x300
7102ea920c  ldrb w8,[x20]
7102ea9210  cbz w8,0x7102ea989c
7102ea9214  ldr x8,[x19, #0x2e0]
7102ea9218  ldr w8,[x8, #0x40]
7102ea921c  cmn w8,#0x1
7102ea9220  b.ne 0x7102ea9900
7102ea9224  b 0x7102ea9560
7102ea9228  ldp x8,x9,[x19, #0x158]
7102ea922c  sub x8,x9,x8
7102ea9230  mov w9,#0x6db7
7102ea9234  movk w9,#0xb6db, LSL #16
7102ea9238  lsr x8,x8,#0x2
7102ea923c  mul w8,w8,w9
7102ea9240  ldr x9,[x19]
7102ea9244  ldr x9,[x9, #0x340]
7102ea9248  ldp w10,w11,[x9]
7102ea924c  str w11,[x9]
7102ea9250  ldp w11,w12,[x9, #0x8]
7102ea9254  eor w10,w10,w10, LSL #0xb
7102ea9258  eor w10,w10,w10, LSR #0x8
7102ea925c  eor w10,w10,w12
7102ea9260  eor w10,w10,w12, LSR #0x13
7102ea9264  stp w11,w12,[x9, #0x4]
7102ea9268  str w10,[x9, #0xc]
7102ea926c  udiv w9,w10,w8
7102ea9270  ldr x0,[x19, #0x2d0]
7102ea9274  msub w1,w9,w8,w10
7102ea9278  str w1,[x19, #0x304]
7102ea927c  ldr x8,[x0]
7102ea9280  ldr x8,[x8, #0x40]
7102ea9284  blr x8
7102ea9288  ldr x8,[x19, #0x380]
7102ea928c  ldr x8,[x8, #0x8]
7102ea9290  str wzr,[x8, #0x10]
7102ea9294  ldr x8,[x19, #0x388]
7102ea9298  ldr x8,[x8, #0x8]
7102ea929c  str wzr,[x8, #0x10]
7102ea92a0  ldrsw x8,[x19, #0x304]
7102ea92a4  ldr x9,[x19, #0x158]
7102ea92a8  orr w10,wzr,#0x1c
7102ea92ac  madd x10,x8,x10,x9
7102ea92b0  ldr s0,[x10, #0x8]
7102ea92b4  fcmp s0,#0.0
7102ea92b8  b.eq 0x7102ea93d4
7102ea92bc  fmov s1,0x40a00000
7102ea92c0  fdiv s1,s0,s1
7102ea92c4  movi v0.2D,#0x0
7102ea92c8  mov v0.S[0x0],v1.S[0x0]
7102ea92cc  b 0x7102ea93d8
7102ea92d0  add x20,x19,#0x2d0
7102ea92d4  b 0x7102ea9474
7102ea92d8  ldr x8,[x19, #0x2c8]
7102ea92dc  str wzr,[x19, #0x308]
7102ea92e0  ldr w9,[x8, #0x20]
7102ea92e4  cmp w9,#0x5
7102ea92e8  ccmp w9,#0x0,#0x4,ne
7102ea92ec  b.ne 0x7102ea9570
7102ea92f0  mov w22,#0x5
7102ea92f4  b 0x7102ea9574
7102ea92f8  add x22,x19,#0x2d8
7102ea92fc  b 0x7102ea96d8
7102ea9300  ldrb w8,[x19, #0x2f1]
7102ea9304  cbz w8,0x7102ea9548
7102ea9308  ldr x0,[x19, #0x2d8]
7102ea930c  strb wzr,[x19, #0x2f1]
7102ea9310  ldr x8,[x0]
7102ea9314  ldr x8,[x8, #0x28]
7102ea9318  add x20,x19,#0x2d8
7102ea931c  blr x8
7102ea9320  b 0x7102ea954c
7102ea9324  ldr x9,[x19, #0x80]
7102ea9328  ldr x8,[x19]
7102ea932c  ldr x8,[x8, #0x340]
7102ea9330  ldp s0,s1,[x9, #0x10]
7102ea9334  ldp w9,w10,[x8]
7102ea9338  str w10,[x8]
7102ea933c  ldp w10,w11,[x8, #0x8]
7102ea9340  eor w9,w9,w9, LSL #0xb
7102ea9344  eor w9,w9,w9, LSR #0x8
7102ea9348  eor w9,w9,w11
7102ea934c  eor w9,w9,w11, LSR #0x13
7102ea9350  ucvtf s2,w9
7102ea9354  fsub s1,s1,s0
7102ea9358  stp w10,w11,[x8, #0x4]
7102ea935c  str w9,[x8, #0xc]
7102ea9360  adrp x8,0x7104473000
7102ea9364  fmul s1,s1,s2
7102ea9368  ldr s2,[x8, #0x710]
7102ea936c  mov w8,#0xffffffff
7102ea9370  str w8,[x19, #0x2fc]
7102ea9374  mov w8,#0x1
7102ea9378  fmul s4,s1,s2
7102ea937c  fadd s0,s0,s4
7102ea9380  fsub s0,s0,s8
7102ea9384  str s0,[x19, #0x2f8]
7102ea9388  b 0x7102ea98fc
7102ea938c  ldrb w8,[x19, #0x2e8]
7102ea9390  cbz w8,0x7102ea9568
7102ea9394  mov w8,#0x9
7102ea9398  b 0x7102ea98fc
7102ea939c  ldr x8,[x19, #0x2c0]
7102ea93a0  ldrb w21,[x8, #0x8]
7102ea93a4  ldr w8,[x19, #0x2fc]
7102ea93a8  cbz w8,0x7102ea985c
7102ea93ac  cmp w8,#0x1
7102ea93b0  b.ne 0x7102ea9880
7102ea93b4  ldr x0,[x19, #0x2d0]
7102ea93b8  ldr x8,[x0]
7102ea93bc  ldr x8,[x8, #0x20]
7102ea93c0  cmp w21,#0x0
7102ea93c4  cset w1,ne
7102ea93c8  blr x8
7102ea93cc  cbnz w21,0x7102ea9884
7102ea93d0  b 0x7102ea988c
7102ea93d4  movi v0.2D,#0x0
7102ea93d8  orr w10,wzr,#0x1c
7102ea93dc  madd x8,x8,x10,x9
7102ea93e0  ldr s1,[x8, #0xc]
7102ea93e4  fcmp s1,#0.0
7102ea93e8  add x20,x19,#0x2d0
7102ea93ec  b.eq 0x7102ea93fc
7102ea93f0  fmov s2,0x40a00000
7102ea93f4  fdiv s1,s1,s2
7102ea93f8  mov v0.S[0x1],v1.S[0x0]
7102ea93fc  dup s1,v0.S[0x1]
7102ea9400  ldr x9,[x19, #0xc8]
7102ea9404  ldp s2,s3,[x9], #0x8
7102ea9408  fadd s2,s0,s2
7102ea940c  fadd s3,s1,s3
7102ea9410  movi d4,#0x0
7102ea9414  mov v2.S[0x1],v3.S[0x0]
7102ea9418  mov v3.16B,v4.16B
7102ea941c  ld1 {v3.S}[0],[x9]
7102ea9420  ldr x8,[x19, #0x380]
7102ea9424  mov v2.D[0x1],v3.D[0x0]
7102ea9428  ldr x8,[x8, #0x8]
7102ea942c  str q2,[x8, #0x30]
7102ea9430  ldr x9,[x19, #0xc8]
7102ea9434  ldp s2,s3,[x9, #0xc]
7102ea9438  add x9,x9,#0x14
7102ea943c  ld1 {v4.S}[0],[x9]
7102ea9440  mov x9,#0x5
7102ea9444  movk x9,#0x4270, LSL #48
7102ea9448  fadd s1,s1,s3
7102ea944c  fadd s0,s0,s2
7102ea9450  mov v0.S[0x1],v1.S[0x0]
7102ea9454  ldr x8,[x19, #0x388]
7102ea9458  ldr x8,[x8, #0x8]
7102ea945c  mov v0.D[0x1],v4.D[0x0]
7102ea9460  str q0,[x8, #0x30]
7102ea9464  mov w8,#0x1
7102ea9468  strb w8,[x19, #0x398]
7102ea946c  add x8,x19,#0x2f4
7102ea9470  str x9,[x8]
7102ea9474  ldr x0,[x19, #0x2d0]
7102ea9478  ldr x8,[x0]
7102ea947c  ldr x8,[x8, #0x48]
7102ea9480  blr x8
7102ea9484  tbz w0,#0x0,0x7102ea94b0
7102ea9488  ldr x8,[x19, #0x2c8]
7102ea948c  ldr w9,[x19, #0x304]
7102ea9490  str w9,[x8, #0x100]
7102ea9494  mov w9,#0x1
7102ea9498  strb w9,[x8, #0x15c]
7102ea949c  str w9,[x8, #0x154]
7102ea94a0  ldr x0,[x19, #0x2c8]
7102ea94a4  bl 0x7102eadc80
7102ea94a8  ldr x0,[x19, #0x2c0]
7102ea94ac  bl 0x7102eafaa0
7102ea94b0  ldr x8,[x19, #0x2c8]
7102ea94b4  ldr w8,[x8, #0x154]
7102ea94b8  cmp w8,#0x3
7102ea94bc  b.ne 0x7102ea94fc
7102ea94c0  ldrb w8,[x19, #0x398]
7102ea94c4  cbz w8,0x7102ea94fc
7102ea94c8  ldr s0,[x19, #0x2f8]
7102ea94cc  fsub s0,s0,s8
7102ea94d0  fcmp s0,#0.0
7102ea94d4  str s0,[x19, #0x2f8]
7102ea94d8  b.pl 0x7102ea94fc
7102ea94dc  ldr x8,[x19, #0x380]
7102ea94e0  ldr x8,[x8, #0x8]
7102ea94e4  mov w9,#0x1
7102ea94e8  str w9,[x8, #0x10]
7102ea94ec  ldr x8,[x19, #0x388]
7102ea94f0  ldr x8,[x8, #0x8]
7102ea94f4  str w9,[x8, #0x10]
7102ea94f8  strb wzr,[x19, #0x398]
7102ea94fc  ldr x0,[x20]
7102ea9500  ldr x8,[x0]
7102ea9504  ldr x8,[x8, #0x50]
7102ea9508  blr x8
7102ea950c  tbz w0,#0x0,0x7102ea9900
7102ea9510  ldr x8,[x19, #0x2c8]
7102ea9514  ldr w8,[x8, #0x154]
7102ea9518  sub w8,w8,#0x5
7102ea951c  cmp w8,#0x1
7102ea9520  b.hi 0x7102ea9900
7102ea9524  ldr x8,[x19, #0x380]
7102ea9528  ldr x8,[x8, #0x8]
7102ea952c  mov w9,#0x1
7102ea9530  str w9,[x8, #0x10]
7102ea9534  ldr x8,[x19, #0x388]
7102ea9538  ldr x8,[x8, #0x8]
7102ea953c  str w9,[x8, #0x10]
7102ea9540  mov w8,#0xa
7102ea9544  b 0x7102ea98fc
7102ea9548  add x20,x19,#0x2d8
7102ea954c  ldr x0,[x20]
7102ea9550  ldr x8,[x0]
7102ea9554  ldr x8,[x8, #0x38]
7102ea9558  blr x8
7102ea955c  tbz w0,#0x0,0x7102ea9900
7102ea9560  mov w8,#0xa
7102ea9564  b 0x7102ea98fc
7102ea9568  mov w8,#0xb
7102ea956c  b 0x7102ea98fc
7102ea9570  orr w22,wzr,#0x3
7102ea9574  ldr w8,[x8, #0xa0]
7102ea9578  cmp w8,#0x5
7102ea957c  ccmp w8,#0x0,#0x4,ne
7102ea9580  b.ne 0x7102ea958c
7102ea9584  mov w23,#0x4
7102ea9588  b 0x7102ea9590
7102ea958c  mov w23,#0x2
7102ea9590  ldr w8,[x19, #0x318]
7102ea9594  cmn w8,#0x1
7102ea9598  b.ne 0x7102ea95a8
7102ea959c  add x0,x19,#0x310
7102ea95a0  bl 0x7102c2f880
7102ea95a4  ldr w8,[x19, #0x318]
7102ea95a8  ldr w9,[x19, #0x31c]
7102ea95ac  ldr x10,[x19, #0x320]
7102ea95b0  add x11,x19,#0x31c
7102ea95b4  mov w12,#0xffffffff
7102ea95b8  mov w20,#0x1
7102ea95bc  str w9,[x19, #0x318]
7102ea95c0  str x10,[x11]
7102ea95c4  ldr w9,[x19, #0x328]
7102ea95c8  cmp w8,#0x4
7102ea95cc  str w8,[x19, #0x330]
7102ea95d0  str w12,[x19, #0x328]
7102ea95d4  strb w20,[x19, #0x32c]
7102ea95d8  str w9,[x19, #0x324]
7102ea95dc  b.hi 0x7102ea9604
7102ea95e0  adrp x9,0x710451f000
7102ea95e4  add x9,x9,#0x630
7102ea95e8  mov w8,w8
7102ea95ec  ldrsw x8,[x9, x8, LSL #0x2]
7102ea95f0  add x8,x8,x9
7102ea95f4  mov w21,w22
7102ea95f8  br x8
7102ea95fc  mov w20,#0x1
7102ea9600  b 0x7102ea9660
7102ea9604  mov w21,w23
7102ea9608  mov w20,w22
7102ea960c  b 0x7102ea9664
7102ea9610  strb w9,[x19, #0x300]
7102ea9614  mov w8,#0x2
7102ea9618  ldr x9,[x19]
7102ea961c  ldrb w10,[x9, #0x18]
7102ea9620  cbz w10,0x7102ea9644
7102ea9624  ldrb w9,[x9, #0x61]
7102ea9628  cmp w9,#0x1
7102ea962c  b.eq 0x7102ea98e8
7102ea9630  cmp w9,#0x2
7102ea9634  b.ne 0x7102ea98f4
7102ea9638  mov w9,wzr
7102ea963c  mov w8,#0x1
7102ea9640  b 0x7102ea98f0
7102ea9644  mov w8,#0x2
7102ea9648  mov w9,#0x1
7102ea964c  b 0x7102ea98f0
7102ea9650  mov w20,wzr
7102ea9654  mov w21,w22
7102ea9658  b 0x7102ea9664
7102ea965c  mov w20,wzr
7102ea9660  mov w21,w23
7102ea9664  ldr x8,[x19, #0x2c8]
7102ea9668  ldr w9,[x8, #0x20]
7102ea966c  cbz w9,0x7102ea9690
7102ea9670  cmp w9,#0x5
7102ea9674  b.eq 0x7102ea9690
7102ea9678  ldr x8,[x19, #0x390]
7102ea967c  ldp x0,x1,[x8]
7102ea9680  adrp x2,0x71043bc000
7102ea9684  add x2,x2,#0xb6c
7102ea9688  bl 0x71025f55b0
7102ea968c  ldr x8,[x19, #0x2c8]
7102ea9690  ldr w8,[x8, #0xa0]
7102ea9694  cbz w8,0x7102ea96b4
7102ea9698  cmp w8,#0x5
7102ea969c  b.eq 0x7102ea96b4
7102ea96a0  ldr x8,[x19, #0x390]
7102ea96a4  ldp x0,x1,[x8]
7102ea96a8  adrp x2,0x710436a000
7102ea96ac  add x2,x2,#0x9e7
7102ea96b0  bl 0x71025f55b0
7102ea96b4  ldr x0,[x19, #0x2d8]
7102ea96b8  ldr x8,[x0]
7102ea96bc  ldr x8,[x8, #0x60]
7102ea96c0  mov w1,w20
7102ea96c4  mov w2,w21
7102ea96c8  add x22,x19,#0x2d8
7102ea96cc  blr x8
7102ea96d0  orr w8,wzr,#0x7
7102ea96d4  str w8,[x19, #0x2f4]
7102ea96d8  ldr x0,[x22]
7102ea96dc  ldr x8,[x0]
7102ea96e0  ldr x8,[x8, #0x48]
7102ea96e4  blr x8
7102ea96e8  tbz w0,#0x0,0x7102ea9834
7102ea96ec  ldr x0,[x22]
7102ea96f0  ldr x8,[x0]
7102ea96f4  ldr x8,[x8, #0x70]
7102ea96f8  mov w1,wzr
7102ea96fc  blr x8
7102ea9700  tbnz w0,#0x1f,0x7102ea9790
7102ea9704  ldr x8,[x19]
7102ea9708  ldr x8,[x8, #0x340]
7102ea970c  ldr x9,[x19, #0x80]
7102ea9710  ldp s0,s1,[x9, #0x18]
7102ea9714  fsub s1,s1,s0
7102ea9718  ldp w9,w10,[x8]
7102ea971c  str w10,[x8]
7102ea9720  ldp w10,w11,[x8, #0x8]
7102ea9724  eor w9,w9,w9, LSL #0xb
7102ea9728  eor w9,w9,w9, LSR #0x8
7102ea972c  eor w9,w9,w11
7102ea9730  eor w9,w9,w11, LSR #0x13
7102ea9734  ucvtf s2,w9
7102ea9738  stp w10,w11,[x8, #0x4]
7102ea973c  str w9,[x8, #0xc]
7102ea9740  adrp x8,0x7104473000
7102ea9744  sxtw x9,w0
7102ea9748  fmul s1,s1,s2
7102ea974c  ldr s2,[x8, #0x710]
7102ea9750  ldr x8,[x19, #0x2c8]
7102ea9754  add x8,x8,x9, LSL #0x7
7102ea9758  fmul s4,s1,s2
7102ea975c  mov x9,x8
7102ea9760  ldr w10,[x9, #0x20]!
7102ea9764  cmp w10,#0x1
7102ea9768  fadd s0,s0,s4
7102ea976c  b.ne 0x7102ea977c
7102ea9770  orr w10,wzr,#0x3
7102ea9774  str w10,[x9]
7102ea9778  str s0,[x8, #0x24]
7102ea977c  ldr x0,[x22]
7102ea9780  ldr x8,[x0]
7102ea9784  ldr x8,[x8, #0x78]
7102ea9788  mov w1,wzr
7102ea978c  blr x8
7102ea9790  ldr x0,[x22]
7102ea9794  ldr x8,[x0]
7102ea9798  ldr x8,[x8, #0x70]
7102ea979c  mov w1,#0x1
7102ea97a0  blr x8
7102ea97a4  tbnz w0,#0x1f,0x7102ea9834
7102ea97a8  ldr x8,[x19]
7102ea97ac  ldr x8,[x8, #0x340]
7102ea97b0  ldr x9,[x19, #0x80]
7102ea97b4  ldp s0,s1,[x9, #0x18]
7102ea97b8  fsub s1,s1,s0
7102ea97bc  ldp w9,w10,[x8]
7102ea97c0  str w10,[x8]
7102ea97c4  ldp w10,w11,[x8, #0x8]
7102ea97c8  eor w9,w9,w9, LSL #0xb
7102ea97cc  eor w9,w9,w9, LSR #0x8
7102ea97d0  eor w9,w9,w11
7102ea97d4  eor w9,w9,w11, LSR #0x13
7102ea97d8  ucvtf s2,w9
7102ea97dc  stp w10,w11,[x8, #0x4]
7102ea97e0  str w9,[x8, #0xc]
7102ea97e4  adrp x8,0x7104473000
7102ea97e8  sxtw x9,w0
7102ea97ec  fmul s1,s1,s2
7102ea97f0  ldr s2,[x8, #0x710]
7102ea97f4  ldr x8,[x19, #0x2c8]
7102ea97f8  add x8,x8,x9, LSL #0x7
7102ea97fc  fmul s4,s1,s2
7102ea9800  mov x9,x8
7102ea9804  ldr w10,[x9, #0x20]!
7102ea9808  cmp w10,#0x1
7102ea980c  fadd s0,s0,s4
7102ea9810  b.ne 0x7102ea9820
7102ea9814  orr w10,wzr,#0x3
7102ea9818  str w10,[x9]
7102ea981c  str s0,[x8, #0x24]
7102ea9820  ldr x0,[x22]
7102ea9824  ldr x8,[x0]
7102ea9828  ldr x8,[x8, #0x78]
7102ea982c  mov w1,#0x1
7102ea9830  blr x8
7102ea9834  ldr x0,[x22]
7102ea9838  ldr x8,[x0]
7102ea983c  ldr x8,[x8, #0x50]
7102ea9840  blr x8
7102ea9844  tbz w0,#0x0,0x7102ea9900
7102ea9848  mov w8,#0x8
7102ea984c  str w8,[x19, #0x2f4]
7102ea9850  mov w8,#0x1
7102ea9854  strb w8,[x19, #0x2f1]
7102ea9858  b 0x7102ea9900
7102ea985c  ldr x0,[x19, #0x2d8]
7102ea9860  ldr x8,[x0]
7102ea9864  ldr x8,[x8, #0x20]
7102ea9868  cmp w21,#0x0
7102ea986c  cset w1,ne
7102ea9870  blr x8
7102ea9874  ldr w8,[x19, #0x2fc]
7102ea9878  cmp w8,#0x1
7102ea987c  b.eq 0x7102ea93b4
7102ea9880  cbz w21,0x7102ea988c
7102ea9884  ldr x0,[x19, #0x2c0]
7102ea9888  bl 0x7102eafbe0
7102ea988c  orr w8,wzr,#0x3
7102ea9890  str w8,[x19, #0x2f4]
7102ea9894  ldrb w8,[x20]
7102ea9898  cbnz w8,0x7102ea9214
7102ea989c  ldr w8,[x19, #0x2fc]
7102ea98a0  cbnz w8,0x7102ea98c4
7102ea98a4  ldr x0,[x19, #0x2d8]
7102ea98a8  ldr x8,[x0]
7102ea98ac  ldr x8,[x8, #0x30]
7102ea98b0  blr x8
7102ea98b4  tbz w0,#0x0,0x7102ea98c0
7102ea98b8  orr w8,wzr,#0x6
7102ea98bc  str w8,[x19, #0x2f4]
7102ea98c0  ldr w8,[x19, #0x2fc]
7102ea98c4  cmp w8,#0x1
7102ea98c8  b.ne 0x7102ea9900
7102ea98cc  ldr x0,[x19, #0x2d0]
7102ea98d0  ldr x8,[x0]
7102ea98d4  ldr x8,[x8, #0x30]
7102ea98d8  blr x8
7102ea98dc  tbz w0,#0x0,0x7102ea9900
7102ea98e0  mov w8,#0x4
7102ea98e4  b 0x7102ea98fc
7102ea98e8  mov w9,wzr
7102ea98ec  mov w8,wzr
7102ea98f0  strb w9,[x19, #0x300]
7102ea98f4  str w8,[x19, #0x2fc]
7102ea98f8  mov w8,#0x2
7102ea98fc  str w8,[x19, #0x2f4]
7102ea9900  ldp x29,x30,[sp, #0x30]
7102ea9904  ldr x23,[sp, #0x8]
7102ea9908  ldp x20,x19,[sp, #0x20]
7102ea990c  ldp x22,x21,[sp, #0x10]
7102ea9910  ldr d8,[sp], #0x40
7102ea9914  ret
