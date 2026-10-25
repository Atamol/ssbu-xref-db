// addr:      7101ad9e90
// offset:    0x1ad9e90
// name:      FUN_7101ad9e90
// mangled:   
// size:      10668

7101ad9e90  stp x28,x27,[sp, #-0x60]!
7101ad9e94  stp x26,x25,[sp, #0x10]
7101ad9e98  stp x24,x23,[sp, #0x20]
7101ad9e9c  stp x22,x21,[sp, #0x30]
7101ad9ea0  stp x20,x19,[sp, #0x40]
7101ad9ea4  stp x29,x30,[sp, #0x50]
7101ad9ea8  add x29,sp,#0x50
7101ad9eac  sub sp,sp,#0x1f0
7101ad9eb0  ldr w8,[x0, #0x114]
7101ad9eb4  mov x19,x0
7101ad9eb8  cbz w8,0x7101ad9f04
7101ad9ebc  adrp x8,0x7105329000
7101ad9ec0  ldr x8,[x8, #0xf98]
7101ad9ec4  ldr x8,[x8]
7101ad9ec8  ldr x0,[x8, #0x20]
7101ad9ecc  mov w1,#0x1
7101ad9ed0  bl 0x710259d3a0
7101ad9ed4  tbz w0,#0x0,0x7101adc75c
7101ad9ed8  ldr x8,[x19, #0x130]
7101ad9edc  ldr x0,[x8]
7101ad9ee0  bl 0x710323cb80
7101ad9ee4  tbz w0,#0x0,0x7101adc75c
7101ad9ee8  mov x0,x19
7101ad9eec  bl 0x7101adc840
7101ad9ef0  ldr w8,[x19, #0x10c]
7101ad9ef4  subs w8,w8,#0x1
7101ad9ef8  b.lt 0x7101adc75c
7101ad9efc  str w8,[x19, #0x10c]
7101ad9f00  b 0x7101adc75c
7101ad9f04  adrp x8,0x7105314000
7101ad9f08  add x8,x8,#0x4d8
7101ad9f0c  ldarb w8,[x8]
7101ad9f10  tbz w8,#0x0,0x7101adc77c
7101ad9f14  mov w8,#0x1
7101ad9f18  str w8,[x19, #0x150]
7101ad9f1c  adrp x8,0x7105308000
7101ad9f20  ldr w8,[x8, #0x300]
7101ad9f24  mov x28,#0x6900000000000000
7101ad9f28  cmp w8,#0x5
7101ad9f2c  b.hi 0x7101ada1a0
7101ad9f30  adrp x9,0x71044f8000
7101ad9f34  add x9,x9,#0x378
7101ad9f38  add x21,x19,#0x150
7101ad9f3c  ldrsw x8,[x9, x8, LSL #0x2]
7101ad9f40  add x8,x8,x9
7101ad9f44  br x8
7101ad9f48  adrp x8,0x710532f000
7101ad9f4c  ldr x0,[x8, #0x8e0]
7101ad9f50  adrp x8,0x7105308000
7101ad9f54  ldr x1,[x8, #0x308]
7101ad9f58  ldrb w2,[x19, #0x1bc]
7101ad9f5c  add x20,x19,#0x138
7101ad9f60  b 0x7101ada120
7101ad9f64  adrp x8,0x710532f000
7101ad9f68  ldr x24,[x8, #0x8e0]
7101ad9f6c  adrp x8,0x7105308000
7101ad9f70  ldr x22,[x8, #0x318]
7101ad9f74  adrp x8,0x710532f000
7101ad9f78  ldr x25,[x8, #0x730]
7101ad9f7c  ldr x8,[x25, #0x8]
7101ad9f80  str wzr,[x19, #0x150]
7101ad9f84  ldr x8,[x8, #0x178]
7101ad9f88  ldr x20,[x8, #0x8]
7101ad9f8c  mov x23,#0x6a0c
7101ad9f90  movk x23,#0xbebd, LSL #16
7101ad9f94  movk x23,#0x14, LSL #32
7101ad9f98  mov x1,x23
7101ad9f9c  mov x0,x20
7101ad9fa0  bl 0x71032b23e0
7101ad9fa4  tst x22,#0xffffffffff
7101ad9fa8  and x27,x22,#-0x100000000000000
7101ad9fac  cset w8,ne
7101ad9fb0  cmp x27,x28
7101ad9fb4  cset w9,eq
7101ad9fb8  and w26,w9,w8
7101ad9fbc  and x8,x0,#0xffffffffff
7101ad9fc0  cmp w26,#0x1
7101ad9fc4  b.ne 0x7101ada1b0
7101ad9fc8  and x9,x0,#-0x100000000000000
7101ad9fcc  cmp x9,x28
7101ad9fd0  ccmp x8,#0x0,#0x4,eq
7101ad9fd4  eor x8,x0,x22
7101ad9fd8  and x8,x8,#0xffffffffff
7101ad9fdc  ccmp x8,#0x0,#0x0,ne
7101ad9fe0  b.eq 0x7101ada21c
7101ad9fe4  mov x1,#0x484c
7101ad9fe8  movk x1,#0x1f1e, LSL #16
7101ad9fec  movk x1,#0xf, LSL #32
7101ad9ff0  mov x0,x20
7101ad9ff4  bl 0x71032b23e0
7101ad9ff8  and x9,x0,#-0x100000000000000
7101ad9ffc  mov x10,#0x6900000000000000
7101ada000  and x8,x0,#0xffffffffff
7101ada004  cmp x9,x10
7101ada008  b.ne 0x7101ada1dc
7101ada00c  cbz x8,0x7101ada1dc
7101ada010  eor x8,x0,x22
7101ada014  tst x8,#0xffffffffff
7101ada018  b.ne 0x7101ada224
7101ada01c  b 0x7101ada21c
7101ada020  adrp x8,0x710532f000
7101ada024  ldr x8,[x8, #0x8e0]
7101ada028  ldr x8,[x8, #0x8]
7101ada02c  ldr w21,[x19, #0x238]
7101ada030  add x20,x19,#0x138
7101ada034  add x9,x8,#0x1d0
7101ada038  cmp x9,x20
7101ada03c  b.eq 0x7101ada04c
7101ada040  ldp x1,x2,[x8, #0x1d0]
7101ada044  mov x0,x20
7101ada048  bl 0x710333c860
7101ada04c  cmp w21,#0x2
7101ada050  b.eq 0x7101ada2d0
7101ada054  cmp w21,#0x1
7101ada058  b.ne 0x7101ada3a0
7101ada05c  ldp x21,x8,[x19, #0x138]
7101ada060  cmp x21,x8
7101ada064  b.eq 0x7101ada094
7101ada068  ldr w9,[x21, #0x14]
7101ada06c  cmp w9,#0x1
7101ada070  b.ne 0x7101ada094
7101ada074  add x9,x21,#0x30
7101ada078  cmp x8,x9
7101ada07c  b.eq 0x7101adc30c
7101ada080  ldr w10,[x9, #0x14]
7101ada084  add x9,x9,#0x30
7101ada088  cmp w10,#0x1
7101ada08c  b.eq 0x7101ada078
7101ada090  sub x21,x9,#0x30
7101ada094  cmp x21,x8
7101ada098  b.eq 0x7101adc310
7101ada09c  add x9,x21,#0x30
7101ada0a0  cmp x9,x8
7101ada0a4  b.eq 0x7101adc310
7101ada0a8  ldr w10,[x9, #0x14]
7101ada0ac  cmp w10,#0x1
7101ada0b0  b.ne 0x7101ada0d8
7101ada0b4  ldp x10,x11,[x9]
7101ada0b8  stp x10,x11,[x21]
7101ada0bc  ldr x12,[x9, #0x20]
7101ada0c0  ldp x10,x11,[x9, #0x10]
7101ada0c4  ldrh w13,[x9, #0x28]
7101ada0c8  strh w13,[x21, #0x28]
7101ada0cc  stp x11,x12,[x21, #0x18]
7101ada0d0  str x10,[x21, #0x10]
7101ada0d4  add x21,x21,#0x30
7101ada0d8  add x9,x9,#0x30
7101ada0dc  cmp x8,x9
7101ada0e0  b.ne 0x7101ada0a8
7101ada0e4  b 0x7101ada358
7101ada0e8  adrp x8,0x710532f000
7101ada0ec  ldr x8,[x8, #0x730]
7101ada0f0  ldr x8,[x8, #0x8]
7101ada0f4  adrp x9,0x710532f000
7101ada0f8  ldr x22,[x9, #0x8e0]
7101ada0fc  ldr x0,[x8, #0x168]
7101ada100  mov x1,#0xfa78
7101ada104  movk x1,#0xd5f7, LSL #16
7101ada108  movk x1,#0xf, LSL #32
7101ada10c  bl 0x71032631a0
7101ada110  mov x1,x0
7101ada114  add x20,x19,#0x138
7101ada118  mov x0,x22
7101ada11c  mov w2,wzr
7101ada120  mov x3,x20
7101ada124  mov x4,x21
7101ada128  bl 0x710333dea0
7101ada12c  b 0x7101ada3a0
7101ada130  ldr w9,[x19, #0x238]
7101ada134  adrp x8,0x710532f000
7101ada138  ldr x8,[x8, #0x8e0]
7101ada13c  add x20,x19,#0x138
7101ada140  cmp x9,#0x2
7101ada144  cset w10,cc
7101ada148  cmp w9,#0x3
7101ada14c  str w10,[x19, #0x150]
7101ada150  ldr x8,[x8, #0x8]
7101ada154  b.hi 0x7101ada38c
7101ada158  adrp x10,0x71044f8000
7101ada15c  add x10,x10,#0x390
7101ada160  ldrsw x9,[x10, x9, LSL #0x2]
7101ada164  add x9,x9,x10
7101ada168  br x9
7101ada16c  add x8,x8,#0x1b8
7101ada170  cmp x8,x20
7101ada174  b.ne 0x7101ada394
7101ada178  b 0x7101ada3a0
7101ada17c  adrp x8,0x710532f000
7101ada180  ldr x8,[x8, #0x8e0]
7101ada184  ldr x8,[x8, #0x8]
7101ada188  add x20,x19,#0x138
7101ada18c  add x9,x8,#0x170
7101ada190  cmp x9,x20
7101ada194  b.eq 0x7101ada3a0
7101ada198  ldp x1,x2,[x8, #0x170]
7101ada19c  b 0x7101ada398
7101ada1a0  ldr x8,[x19, #0x138]
7101ada1a4  add x20,x19,#0x138
7101ada1a8  str x8,[x19, #0x140]
7101ada1ac  b 0x7101ada3a0
7101ada1b0  and x9,x0,#-0x100000000000000
7101ada1b4  cmp x9,x28
7101ada1b8  ccmp x8,#0x0,#0x4,eq
7101ada1bc  b.eq 0x7101ada21c
7101ada1c0  mov x1,#0x484c
7101ada1c4  movk x1,#0x1f1e, LSL #16
7101ada1c8  movk x1,#0xf, LSL #32
7101ada1cc  mov x0,x20
7101ada1d0  bl 0x71032b23e0
7101ada1d4  and x8,x0,#0xffffffffff
7101ada1d8  and x9,x0,#-0x100000000000000
7101ada1dc  mov x11,#0x6900000000000000
7101ada1e0  and x10,x22,#0xffffffffff
7101ada1e4  cmp x27,x11
7101ada1e8  mov x12,x11
7101ada1ec  cset w11,eq
7101ada1f0  cmp x10,#0x0
7101ada1f4  cset w10,ne
7101ada1f8  cmp x8,#0x0
7101ada1fc  cset w8,ne
7101ada200  cmp x9,x12
7101ada204  cset w9,eq
7101ada208  and w10,w11,w10
7101ada20c  and w8,w8,w9
7101ada210  eor w8,w8,w10
7101ada214  cmp w8,#0x1
7101ada218  b.eq 0x7101ada224
7101ada21c  mov w8,#0x1
7101ada220  str w8,[x21]
7101ada224  ldr x8,[x25, #0x8]
7101ada228  ldr x8,[x8, #0x178]
7101ada22c  ldr x0,[x8, #0x8]
7101ada230  ldr x21,[x24, #0x8]
7101ada234  mov x1,x23
7101ada238  add x20,x19,#0x138
7101ada23c  bl 0x71032b23e0
7101ada240  and x8,x0,#0xffffffffff
7101ada244  cbz w26,0x7101ada26c
7101ada248  and x9,x0,#-0x100000000000000
7101ada24c  mov x10,#0x6900000000000000
7101ada250  cmp x9,x10
7101ada254  b.ne 0x7101ada280
7101ada258  cbz x8,0x7101ada280
7101ada25c  eor x8,x0,x22
7101ada260  tst x8,#0xffffffffff
7101ada264  b.ne 0x7101ada280
7101ada268  b 0x7101ada2bc
7101ada26c  and x9,x0,#-0x100000000000000
7101ada270  mov x10,#0x6900000000000000
7101ada274  cmp x9,x10
7101ada278  b.ne 0x7101ada2bc
7101ada27c  cbz x8,0x7101ada2bc
7101ada280  add x0,x21,#0xf8
7101ada284  mov x1,x22
7101ada288  bl 0x710332a6b0
7101ada28c  tbnz w0,#0x1f,0x7101ada2c0
7101ada290  ldp x8,x9,[x21, #0xf8]
7101ada294  sub x9,x9,x8
7101ada298  asr x10,x9,#0x5
7101ada29c  sxtw x9,w0
7101ada2a0  cmp x10,x9
7101ada2a4  b.ls 0x7101ada2c0
7101ada2a8  add x8,x8,x9, LSL #0x5
7101ada2ac  add x21,x8,#0x8
7101ada2b0  cmp x21,x20
7101ada2b4  b.ne 0x7101ada2c8
7101ada2b8  b 0x7101ada3a0
7101ada2bc  add x21,x21,#0x1a0
7101ada2c0  cmp x21,x20
7101ada2c4  b.eq 0x7101ada3a0
7101ada2c8  ldp x1,x2,[x21]
7101ada2cc  b 0x7101ada398
7101ada2d0  ldp x21,x8,[x19, #0x138]
7101ada2d4  cmp x21,x8
7101ada2d8  b.eq 0x7101ada308
7101ada2dc  ldr w9,[x21, #0x14]
7101ada2e0  cmp w9,#0x2
7101ada2e4  b.ne 0x7101ada308
7101ada2e8  add x9,x21,#0x30
7101ada2ec  cmp x8,x9
7101ada2f0  b.eq 0x7101adc30c
7101ada2f4  ldr w10,[x9, #0x14]
7101ada2f8  add x9,x9,#0x30
7101ada2fc  cmp w10,#0x2
7101ada300  b.eq 0x7101ada2ec
7101ada304  sub x21,x9,#0x30
7101ada308  cmp x21,x8
7101ada30c  b.eq 0x7101adc310
7101ada310  add x9,x21,#0x30
7101ada314  cmp x9,x8
7101ada318  b.eq 0x7101adc310
7101ada31c  ldr w10,[x9, #0x14]
7101ada320  cmp w10,#0x2
7101ada324  b.ne 0x7101ada34c
7101ada328  ldp x10,x11,[x9]
7101ada32c  stp x10,x11,[x21]
7101ada330  ldr x12,[x9, #0x20]
7101ada334  ldp x10,x11,[x9, #0x10]
7101ada338  ldrh w13,[x9, #0x28]
7101ada33c  strh w13,[x21, #0x28]
7101ada340  stp x11,x12,[x21, #0x18]
7101ada344  str x10,[x21, #0x10]
7101ada348  add x21,x21,#0x30
7101ada34c  add x9,x9,#0x30
7101ada350  cmp x8,x9
7101ada354  b.ne 0x7101ada31c
7101ada358  ldr x8,[x19, #0x140]
7101ada35c  cmp x8,x21
7101ada360  b.ne 0x7101adc318
7101ada364  b 0x7101ada3a0
7101ada368  add x8,x8,#0x158
7101ada36c  cmp x8,x20
7101ada370  b.ne 0x7101ada394
7101ada374  b 0x7101ada3a0
7101ada378  add x8,x8,#0x140
7101ada37c  cmp x8,x20
7101ada380  b.ne 0x7101ada394
7101ada384  b 0x7101ada3a0
7101ada388  add x8,x8,#0x128
7101ada38c  cmp x8,x20
7101ada390  b.eq 0x7101ada3a0
7101ada394  ldp x1,x2,[x8]
7101ada398  mov x0,x20
7101ada39c  bl 0x710333c860
7101ada3a0  ldp x9,x8,[x19, #0x138]
7101ada3a4  cmp x9,x8
7101ada3a8  b.eq 0x7101ada55c
7101ada3ac  adrp x9,0x710532f000
7101ada3b0  ldr x9,[x9, #0x730]
7101ada3b4  ldr x25,[x9, #0x8]
7101ada3b8  ldr x9,[x20]
7101ada3bc  sub x8,x8,x9
7101ada3c0  mov w9,#0xaaab
7101ada3c4  movk w9,#0xaaaa, LSL #16
7101ada3c8  lsr x8,x8,#0x4
7101ada3cc  mov x0,x19
7101ada3d0  mul w20,w8,w9
7101ada3d4  ldr x8,[x0, #0x10]!
7101ada3d8  orr w9,wzr,#0x1e
7101ada3dc  cmp w20,#0x1e
7101ada3e0  csel w26,w20,w9,lt
7101ada3e4  ldr x9,[x0, #0x8]
7101ada3e8  cmp x9,x8
7101ada3ec  b.eq 0x7101adc838
7101ada3f0  ldr x8,[x8]
7101ada3f4  ldr x8,[x8]
7101ada3f8  ldr x8,[x8]
7101ada3fc  add x0,x8,#0x8
7101ada400  adrp x1,0x71042f8000
7101ada404  add x1,x1,#0xe2
7101ada408  sub x8,x29,#0xa0
7101ada40c  bl 0x7103776640
7101ada410  adrp x1,0x71043cd000
7101ada414  add x1,x1,#0xab4
7101ada418  add x8,sp,#0x70
7101ada41c  sub x0,x29,#0xa0
7101ada420  bl 0x7103776910
7101ada424  adrp x1,0x7104319000
7101ada428  add x1,x1,#0x6c3
7101ada42c  add x8,sp,#0x58
7101ada430  sub x0,x29,#0xa0
7101ada434  bl 0x7103776910
7101ada438  cmp w20,#0x1
7101ada43c  b.lt 0x7101ada508
7101ada440  add x8,sp,#0x90
7101ada444  mov w20,wzr
7101ada448  adrp x21,0x710426e000
7101ada44c  add x21,x21,#0x471
7101ada450  add x22,x8,#0x8
7101ada454  adrp x23,0x71042b2000
7101ada458  add x23,x23,#0x794
7101ada45c  ldr x24,[x25, #0x1b8]
7101ada460  mov x0,x24
7101ada464  mov w1,w20
7101ada468  bl 0x71032b70b0
7101ada46c  mov x1,x0
7101ada470  mov x0,x24
7101ada474  bl 0x71032b6c10
7101ada478  cmn w0,#0x1
7101ada47c  b.eq 0x7101ada494
7101ada480  mov w1,w0
7101ada484  add x8,sp,#0x90
7101ada488  mov x0,x23
7101ada48c  bl 0x71003a4ca0
7101ada490  b 0x7101ada49c
7101ada494  strb wzr,[sp, #0x98]
7101ada498  str xzr,[sp, #0x90]
7101ada49c  add x0,sp,#0x70
7101ada4a0  mov x1,x22
7101ada4a4  mov w2,wzr
7101ada4a8  bl 0x710377a750
7101ada4ac  ldr x24,[x25, #0x1b8]
7101ada4b0  mov x0,x24
7101ada4b4  mov w1,w20
7101ada4b8  bl 0x71032b70b0
7101ada4bc  mov x1,x0
7101ada4c0  mov x0,x24
7101ada4c4  bl 0x71032b6c10
7101ada4c8  cmn w0,#0x1
7101ada4cc  b.eq 0x7101ada4e4
7101ada4d0  mov w1,w0
7101ada4d4  add x8,sp,#0x90
7101ada4d8  mov x0,x21
7101ada4dc  bl 0x71003a4ca0
7101ada4e0  b 0x7101ada4ec
7101ada4e4  strb wzr,[sp, #0x98]
7101ada4e8  str xzr,[sp, #0x90]
7101ada4ec  add x0,sp,#0x58
7101ada4f0  mov x1,x22
7101ada4f4  mov w2,wzr
7101ada4f8  bl 0x710377a750
7101ada4fc  add w20,w20,#0x1
7101ada500  cmp w20,w26
7101ada504  b.lt 0x7101ada45c
7101ada508  ldr x0,[sp, #0x60]
7101ada50c  adrp x21,0x710523d000
7101ada510  add x21,x21,#0x9a8
7101ada514  stp x21,xzr,[sp, #0x58]
7101ada518  cbz x0,0x7101ada520
7101ada51c  bl 0x710392eb40
7101ada520  ldr x0,[sp, #0x78]
7101ada524  stp x21,xzr,[sp, #0x70]
7101ada528  cbz x0,0x7101ada530
7101ada52c  bl 0x710392eb40
7101ada530  ldur x20,[x29, #-0x98]
7101ada534  adrp x8,0x710523d000
7101ada538  add x8,x8,#0x988
7101ada53c  stp x8,xzr,[x29, #-0xa0]
7101ada540  cbz x20,0x7101ada55c
7101ada544  ldr x0,[x20, #0x18]
7101ada548  stp x21,xzr,[x20, #0x10]
7101ada54c  cbz x0,0x7101ada554
7101ada550  bl 0x710392eb40
7101ada554  mov x0,x20
7101ada558  bl 0x710392eb40
7101ada55c  mov x0,x19
7101ada560  mov x28,#-0x3f00000000000000
7101ada564  bl 0x7101adc840
7101ada568  stp xzr,xzr,[sp, #0x78]
7101ada56c  stp xzr,xzr,[sp, #0x68]
7101ada570  stp xzr,xzr,[sp, #0x58]
7101ada574  stp xzr,xzr,[sp, #0x48]
7101ada578  stp xzr,xzr,[sp, #0x38]
7101ada57c  stp xzr,xzr,[sp, #0x28]
7101ada580  ldp x25,x26,[x19, #0x138]
7101ada584  cmp x25,x26
7101ada588  b.eq 0x7101adb2b0
7101ada58c  adrp x23,0x710532f000
7101ada590  orr x28,xzr,#0x1e00000000000000
7101ada594  adrp x27,0x71044f8000
7101ada598  add x27,x27,#0x3a0
7101ada59c  mov x22,#0x6900000000000000
7101ada5a0  b 0x7101ada5c8
7101ada5a4  mov x8,xzr
7101ada5a8  mov x23,xzr
7101ada5ac  b 0x7101adaad0
7101ada5b0  mov x8,xzr
7101ada5b4  mov x23,xzr
7101ada5b8  b 0x7101adab70
7101ada5bc  mov x8,xzr
7101ada5c0  mov x23,xzr
7101ada5c4  b 0x7101adac10
7101ada5c8  ldr w8,[x25, #0x18]
7101ada5cc  sub w8,w8,#0x1
7101ada5d0  cmp w8,#0x4
7101ada5d4  b.hi 0x7101adac84
7101ada5d8  ldrsw x8,[x27, x8, LSL #0x2]
7101ada5dc  add x8,x8,x27
7101ada5e0  br x8
7101ada5e4  ldr x8,[x23, #0x730]
7101ada5e8  ldr x8,[x8, #0x8]
7101ada5ec  ldr x1,[x25, #0x20]
7101ada5f0  ldr x0,[x8, #0x168]
7101ada5f4  bl 0x71032631a0
7101ada5f8  mov x21,x0
7101ada5fc  bl 0x7101addc30
7101ada600  tbz w0,#0x0,0x7101adac84
7101ada604  ldp x20,x8,[sp, #0x70]
7101ada608  cmp x20,x8
7101ada60c  mov x9,x20
7101ada610  b.eq 0x7101ada8cc
7101ada614  tst x21,#0xffffffffff
7101ada618  and x11,x21,#-0x100000000000000
7101ada61c  mov x12,#-0x3f00000000000000
7101ada620  cset w10,ne
7101ada624  cmp x11,x12
7101ada628  and x9,x21,#0xffffffffff
7101ada62c  cset w11,eq
7101ada630  ccmp x9,#0x0,#0x4,eq
7101ada634  and w10,w11,w10
7101ada638  b.ne 0x7101ada888
7101ada63c  ldr x11,[x20]
7101ada640  and x9,x11,#-0x100000000000000
7101ada644  cmp x9,x12
7101ada648  mov x9,x20
7101ada64c  b.ne 0x7101ada8cc
7101ada650  and x12,x11,#0xffffffffff
7101ada654  mov x9,x20
7101ada658  cbz x12,0x7101ada8cc
7101ada65c  add x12,x20,#0x8
7101ada660  mov x9,x20
7101ada664  cbz w10,0x7101ada674
7101ada668  eor x11,x21,x11
7101ada66c  tst x11,#0xffffffffff
7101ada670  b.eq 0x7101ada8cc
7101ada674  cmp x8,x12
7101ada678  b.eq 0x7101ada8c8
7101ada67c  mov x9,x12
7101ada680  ldr x11,[x12], #0x8
7101ada684  and x13,x11,#-0x100000000000000
7101ada688  mov x14,#-0x3f00000000000000
7101ada68c  cmp x13,x14
7101ada690  b.ne 0x7101ada8cc
7101ada694  and x13,x11,#0xffffffffff
7101ada698  cbnz x13,0x7101ada664
7101ada69c  b 0x7101ada8cc
7101ada6a0  ldr x8,[x23, #0x730]
7101ada6a4  ldr x8,[x8, #0x8]
7101ada6a8  ldr x8,[x8, #0x268]
7101ada6ac  ldr x1,[x25, #0x20]
7101ada6b0  ldr x0,[x8, #0x8]
7101ada6b4  bl 0x710327fb30
7101ada6b8  and x9,x0,#-0x100000000000000
7101ada6bc  and x8,x0,#0xffffffffff
7101ada6c0  cmp x9,x28
7101ada6c4  ccmp x8,#0x0,#0x4,eq
7101ada6c8  b.eq 0x7101adac84
7101ada6cc  ldp x20,x8,[sp, #0x40]
7101ada6d0  mov x21,x0
7101ada6d4  mov x9,x20
7101ada6d8  cmp x20,x8
7101ada6dc  b.eq 0x7101ada838
7101ada6e0  ldr x10,[x9]
7101ada6e4  and x12,x10,#-0x100000000000000
7101ada6e8  and x11,x10,#0xffffffffff
7101ada6ec  eor x10,x21,x10
7101ada6f0  cmp x12,x28
7101ada6f4  ccmp x11,#0x0,#0x4,eq
7101ada6f8  and x10,x10,#0xffffffffff
7101ada6fc  ccmp x10,#0x0,#0x0,ne
7101ada700  b.eq 0x7101ada838
7101ada704  add x9,x9,#0x8
7101ada708  cmp x8,x9
7101ada70c  b.ne 0x7101ada6e0
7101ada710  b 0x7101ada840
7101ada714  ldr x8,[x23, #0x730]
7101ada718  ldr x8,[x8, #0x8]
7101ada71c  ldr x8,[x8, #0x178]
7101ada720  ldr x1,[x25, #0x20]
7101ada724  ldr x0,[x8, #0x8]
7101ada728  bl 0x71032b23e0
7101ada72c  and x9,x0,#-0x100000000000000
7101ada730  and x8,x0,#0xffffffffff
7101ada734  cmp x9,x22
7101ada738  ccmp x8,#0x0,#0x4,eq
7101ada73c  b.eq 0x7101adac84
7101ada740  ldp x20,x8,[sp, #0x58]
7101ada744  mov x21,x0
7101ada748  mov x9,x20
7101ada74c  cmp x20,x8
7101ada750  b.eq 0x7101ada860
7101ada754  ldr x10,[x9]
7101ada758  and x12,x10,#-0x100000000000000
7101ada75c  and x11,x10,#0xffffffffff
7101ada760  eor x10,x21,x10
7101ada764  cmp x12,x22
7101ada768  ccmp x11,#0x0,#0x4,eq
7101ada76c  and x10,x10,#0xffffffffff
7101ada770  ccmp x10,#0x0,#0x0,ne
7101ada774  b.eq 0x7101ada860
7101ada778  add x9,x9,#0x8
7101ada77c  cmp x8,x9
7101ada780  b.ne 0x7101ada754
7101ada784  b 0x7101ada868
7101ada788  ldr x8,[x23, #0x730]
7101ada78c  ldr x8,[x8, #0x8]
7101ada790  ldr x20,[x8, #0x1d8]
7101ada794  ldr x1,[x25, #0x20]
7101ada798  mov x0,x20
7101ada79c  bl 0x71032a7800
7101ada7a0  ldp x8,x9,[x20, #0x20]
7101ada7a4  sub x9,x9,x8
7101ada7a8  lsr x9,x9,#0x6
7101ada7ac  mov w10,#0xcccd
7101ada7b0  movk w10,#0xcccc, LSL #16
7101ada7b4  mul w9,w9,w10
7101ada7b8  cmp w0,w9
7101ada7bc  b.cs 0x7101adac84
7101ada7c0  mov w9,#0x140
7101ada7c4  umull x9,w0,w9
7101ada7c8  ldrh w24,[x8, x9, LSL #0x0]
7101ada7cc  orr w8,wzr,#0xffff
7101ada7d0  cmp w24,w8
7101ada7d4  b.eq 0x7101adac84
7101ada7d8  ldp x20,x8,[sp, #0x28]
7101ada7dc  cmp x20,x8
7101ada7e0  b.eq 0x7101ada818
7101ada7e4  ldrh w9,[x20]
7101ada7e8  cmp w9,w24
7101ada7ec  mov x9,x20
7101ada7f0  b.eq 0x7101ada810
7101ada7f4  add x9,x20,#0x2
7101ada7f8  cmp x8,x9
7101ada7fc  b.eq 0x7101ada818
7101ada800  ldrh w10,[x9], #0x2
7101ada804  cmp w10,w24
7101ada808  b.ne 0x7101ada7f8
7101ada80c  sub x9,x9,#0x2
7101ada810  cmp x9,x8
7101ada814  b.ne 0x7101adac84
7101ada818  ldr x9,[sp, #0x38]
7101ada81c  cmp x9,x8
7101ada820  b.eq 0x7101ada96c
7101ada824  strh w24,[x8]
7101ada828  ldr x8,[sp, #0x30]
7101ada82c  add x8,x8,#0x2
7101ada830  str x8,[sp, #0x30]
7101ada834  b 0x7101adac84
7101ada838  cmp x9,x8
7101ada83c  b.ne 0x7101adac84
7101ada840  ldr x9,[sp, #0x50]
7101ada844  cmp x9,x8
7101ada848  b.eq 0x7101ada8f4
7101ada84c  str x21,[x8]
7101ada850  ldr x8,[sp, #0x48]
7101ada854  add x8,x8,#0x8
7101ada858  str x8,[sp, #0x48]
7101ada85c  b 0x7101adac84
7101ada860  cmp x9,x8
7101ada864  b.ne 0x7101adac84
7101ada868  ldr x9,[sp, #0x68]
7101ada86c  cmp x9,x8
7101ada870  b.eq 0x7101ada930
7101ada874  str x21,[x8]
7101ada878  ldr x8,[sp, #0x60]
7101ada87c  add x8,x8,#0x8
7101ada880  str x8,[sp, #0x60]
7101ada884  b 0x7101adac84
7101ada888  mov x9,x8
7101ada88c  cbz w10,0x7101ada8cc
7101ada890  mov x9,x20
7101ada894  ldr x10,[x9]
7101ada898  and x12,x10,#-0x100000000000000
7101ada89c  mov x13,#-0x3f00000000000000
7101ada8a0  and x11,x10,#0xffffffffff
7101ada8a4  eor x10,x21,x10
7101ada8a8  cmp x12,x13
7101ada8ac  ccmp x11,#0x0,#0x4,eq
7101ada8b0  and x10,x10,#0xffffffffff
7101ada8b4  ccmp x10,#0x0,#0x0,ne
7101ada8b8  b.eq 0x7101ada8cc
7101ada8bc  add x9,x9,#0x8
7101ada8c0  cmp x8,x9
7101ada8c4  b.ne 0x7101ada894
7101ada8c8  mov x9,x8
7101ada8cc  cmp x8,x9
7101ada8d0  b.ne 0x7101adac84
7101ada8d4  ldr x10,[sp, #0x80]
7101ada8d8  cmp x10,x8
7101ada8dc  b.eq 0x7101adaa1c
7101ada8e0  str x21,[x8]
7101ada8e4  ldr x8,[sp, #0x78]
7101ada8e8  add x8,x8,#0x8
7101ada8ec  str x8,[sp, #0x78]
7101ada8f0  b 0x7101adac84
7101ada8f4  sub x22,x8,x20
7101ada8f8  asr x24,x22,#0x3
7101ada8fc  add x8,x24,#0x1
7101ada900  lsr x9,x8,#0x3d
7101ada904  cbnz x9,0x7101adc818
7101ada908  orr x9,xzr,#0xffffffffffffffe
7101ada90c  cmp x24,x9
7101ada910  b.hi 0x7101adaa60
7101ada914  asr x9,x22,#0x2
7101ada918  cmp x9,x8
7101ada91c  csel x9,x8,x9,cc
7101ada920  cbz x9,0x7101ada5a4
7101ada924  lsr x8,x9,#0x3d
7101ada928  cbz x8,0x7101adaa64
7101ada92c  b 0x7101adc7fc
7101ada930  sub x22,x8,x20
7101ada934  asr x24,x22,#0x3
7101ada938  add x8,x24,#0x1
7101ada93c  lsr x9,x8,#0x3d
7101ada940  cbnz x9,0x7101adc820
7101ada944  orr x9,xzr,#0xffffffffffffffe
7101ada948  cmp x24,x9
7101ada94c  b.hi 0x7101adab00
7101ada950  asr x9,x22,#0x2
7101ada954  cmp x9,x8
7101ada958  csel x9,x8,x9,cc
7101ada95c  cbz x9,0x7101ada5b0
7101ada960  lsr x8,x9,#0x3d
7101ada964  cbz x8,0x7101adab04
7101ada968  b 0x7101adc7fc
7101ada96c  sub x21,x8,x20
7101ada970  cmn x21,#0x3
7101ada974  b.le 0x7101adc828
7101ada978  asr x23,x21,#0x1
7101ada97c  add x8,x23,#0x1
7101ada980  sub x9,x9,x20
7101ada984  asr x10,x9,#0x1
7101ada988  cmp x9,x8
7101ada98c  csel x8,x8,x9,cc
7101ada990  orr x9,xzr,#0x3fffffffffffffff
7101ada994  cmp x10,x9
7101ada998  orr x9,xzr,#0x7fffffffffffffff
7101ada99c  csel x8,x8,x9,cc
7101ada9a0  cbz x8,0x7101adac40
7101ada9a4  tbnz x8,#0x3f,0x7101adc7fc
7101ada9a8  str x8,[sp, #0x20]
7101ada9ac  lsl x8,x8,#0x1
7101ada9b0  cmp x8,#0x0
7101ada9b4  csinc x1,x8,xzr,ne
7101ada9b8  mov w0,#0x10
7101ada9bc  str x1,[sp, #0x18]
7101ada9c0  bl 0x710392e290
7101ada9c4  mov x22,x0
7101ada9c8  cbnz x0,0x7101adaa14
7101ada9cc  adrp x8,0x7105332000
7101ada9d0  ldr x0,[x8, #0xf00]
7101ada9d4  cbz x0,0x7101adaa10
7101ada9d8  ldr x8,[sp, #0x18]
7101ada9dc  stur wzr,[x29, #-0xa0]
7101ada9e0  sub x1,x29,#0xa0
7101ada9e4  add x2,sp,#0x90
7101ada9e8  str x8,[sp, #0x90]
7101ada9ec  ldr x8,[x0]
7101ada9f0  ldr x8,[x8, #0x30]
7101ada9f4  blr x8
7101ada9f8  tbz w0,#0x0,0x7101adaa10
7101ada9fc  ldr x1,[sp, #0x18]
7101adaa00  mov w0,#0x10
7101adaa04  bl 0x710392e290
7101adaa08  mov x22,x0
7101adaa0c  cbnz x0,0x7101adaa14
7101adaa10  mov x22,xzr
7101adaa14  ldr x8,[sp, #0x20]
7101adaa18  b 0x7101adac44
7101adaa1c  sub x22,x9,x20
7101adaa20  asr x24,x22,#0x3
7101adaa24  add x8,x24,#0x1
7101adaa28  lsr x9,x8,#0x3d
7101adaa2c  cbnz x9,0x7101adc830
7101adaa30  sub x9,x10,x20
7101adaa34  asr x10,x9,#0x3
7101adaa38  orr x11,xzr,#0xffffffffffffffe
7101adaa3c  cmp x10,x11
7101adaa40  b.hi 0x7101adaba0
7101adaa44  asr x9,x9,#0x2
7101adaa48  cmp x9,x8
7101adaa4c  csel x9,x8,x9,cc
7101adaa50  cbz x9,0x7101ada5bc
7101adaa54  lsr x8,x9,#0x3d
7101adaa58  cbz x8,0x7101adaba4
7101adaa5c  b 0x7101adc7fc
7101adaa60  orr x9,xzr,#0x1fffffffffffffff
7101adaa64  lsl x8,x9,#0x3
7101adaa68  cmp x8,#0x0
7101adaa6c  csinc x1,x8,xzr,ne
7101adaa70  mov w0,#0x10
7101adaa74  stp x1,x9,[sp, #0x18]
7101adaa78  bl 0x710392e290
7101adaa7c  mov x23,x0
7101adaa80  cbnz x0,0x7101adaacc
7101adaa84  adrp x8,0x7105332000
7101adaa88  ldr x0,[x8, #0xf00]
7101adaa8c  cbz x0,0x7101adaac8
7101adaa90  ldr x8,[sp, #0x18]
7101adaa94  stur wzr,[x29, #-0xa0]
7101adaa98  sub x1,x29,#0xa0
7101adaa9c  add x2,sp,#0x90
7101adaaa0  str x8,[sp, #0x90]
7101adaaa4  ldr x8,[x0]
7101adaaa8  ldr x8,[x8, #0x30]
7101adaaac  blr x8
7101adaab0  tbz w0,#0x0,0x7101adaac8
7101adaab4  ldr x1,[sp, #0x18]
7101adaab8  mov w0,#0x10
7101adaabc  bl 0x710392e290
7101adaac0  mov x23,x0
7101adaac4  cbnz x0,0x7101adaacc
7101adaac8  mov x23,xzr
7101adaacc  ldr x8,[sp, #0x20]
7101adaad0  add x24,x23,x24, LSL #0x3
7101adaad4  cmp x22,#0x1
7101adaad8  str x21,[x24], #0x8
7101adaadc  add x21,x23,x8, LSL #0x3
7101adaae0  b.lt 0x7101adaaf4
7101adaae4  mov x0,x23
7101adaae8  mov x1,x20
7101adaaec  mov x2,x22
7101adaaf0  bl 0x71039c00e0
7101adaaf4  stp x23,x24,[sp, #0x40]
7101adaaf8  str x21,[sp, #0x50]
7101adaafc  b 0x7101adac70
7101adab00  orr x9,xzr,#0x1fffffffffffffff
7101adab04  lsl x8,x9,#0x3
7101adab08  cmp x8,#0x0
7101adab0c  csinc x1,x8,xzr,ne
7101adab10  mov w0,#0x10
7101adab14  stp x1,x9,[sp, #0x18]
7101adab18  bl 0x710392e290
7101adab1c  mov x23,x0
7101adab20  cbnz x0,0x7101adab6c
7101adab24  adrp x8,0x7105332000
7101adab28  ldr x0,[x8, #0xf00]
7101adab2c  cbz x0,0x7101adab68
7101adab30  ldr x8,[sp, #0x18]
7101adab34  stur wzr,[x29, #-0xa0]
7101adab38  sub x1,x29,#0xa0
7101adab3c  add x2,sp,#0x90
7101adab40  str x8,[sp, #0x90]
7101adab44  ldr x8,[x0]
7101adab48  ldr x8,[x8, #0x30]
7101adab4c  blr x8
7101adab50  tbz w0,#0x0,0x7101adab68
7101adab54  ldr x1,[sp, #0x18]
7101adab58  mov w0,#0x10
7101adab5c  bl 0x710392e290
7101adab60  mov x23,x0
7101adab64  cbnz x0,0x7101adab6c
7101adab68  mov x23,xzr
7101adab6c  ldr x8,[sp, #0x20]
7101adab70  add x24,x23,x24, LSL #0x3
7101adab74  cmp x22,#0x1
7101adab78  str x21,[x24], #0x8
7101adab7c  add x21,x23,x8, LSL #0x3
7101adab80  b.lt 0x7101adab94
7101adab84  mov x0,x23
7101adab88  mov x1,x20
7101adab8c  mov x2,x22
7101adab90  bl 0x71039c00e0
7101adab94  stp x23,x24,[sp, #0x58]
7101adab98  str x21,[sp, #0x68]
7101adab9c  b 0x7101adac70
7101adaba0  orr x9,xzr,#0x1fffffffffffffff
7101adaba4  lsl x8,x9,#0x3
7101adaba8  cmp x8,#0x0
7101adabac  csinc x1,x8,xzr,ne
7101adabb0  mov w0,#0x10
7101adabb4  stp x1,x9,[sp, #0x18]
7101adabb8  bl 0x710392e290
7101adabbc  mov x23,x0
7101adabc0  cbnz x0,0x7101adac0c
7101adabc4  adrp x8,0x7105332000
7101adabc8  ldr x0,[x8, #0xf00]
7101adabcc  cbz x0,0x7101adac08
7101adabd0  ldr x8,[sp, #0x18]
7101adabd4  stur wzr,[x29, #-0xa0]
7101adabd8  sub x1,x29,#0xa0
7101adabdc  add x2,sp,#0x90
7101adabe0  str x8,[sp, #0x90]
7101adabe4  ldr x8,[x0]
7101adabe8  ldr x8,[x8, #0x30]
7101adabec  blr x8
7101adabf0  tbz w0,#0x0,0x7101adac08
7101adabf4  ldr x1,[sp, #0x18]
7101adabf8  mov w0,#0x10
7101adabfc  bl 0x710392e290
7101adac00  mov x23,x0
7101adac04  cbnz x0,0x7101adac0c
7101adac08  mov x23,xzr
7101adac0c  ldr x8,[sp, #0x20]
7101adac10  add x24,x23,x24, LSL #0x3
7101adac14  cmp x22,#0x1
7101adac18  str x21,[x24], #0x8
7101adac1c  add x21,x23,x8, LSL #0x3
7101adac20  b.lt 0x7101adac34
7101adac24  mov x0,x23
7101adac28  mov x1,x20
7101adac2c  mov x2,x22
7101adac30  bl 0x71039c00e0
7101adac34  stp x23,x24,[sp, #0x70]
7101adac38  str x21,[sp, #0x80]
7101adac3c  b 0x7101adac70
7101adac40  mov x22,xzr
7101adac44  add x23,x22,x23, LSL #0x1
7101adac48  cmp x21,#0x1
7101adac4c  strh w24,[x23], #0x2
7101adac50  add x24,x22,x8, LSL #0x1
7101adac54  b.lt 0x7101adac68
7101adac58  mov x0,x22
7101adac5c  mov x1,x20
7101adac60  mov x2,x21
7101adac64  bl 0x71039c00e0
7101adac68  stp x22,x23,[sp, #0x28]
7101adac6c  str x24,[sp, #0x38]
7101adac70  mov x22,#0x6900000000000000
7101adac74  adrp x23,0x710532f000
7101adac78  cbz x20,0x7101adac84
7101adac7c  mov x0,x20
7101adac80  bl 0x710392eb40
7101adac84  add x25,x25,#0x30
7101adac88  cmp x25,x26
7101adac8c  b.ne 0x7101ada5c8
7101adac90  ldr x8,[x23, #0x730]
7101adac94  ldp x22,x24,[sp, #0x70]
7101adac98  ldr x21,[x8, #0x8]
7101adac9c  cmp x22,x24
7101adaca0  b.eq 0x7101adb2c0
7101adaca4  add x20,x21,#0x160
7101adaca8  add x8,x19,#0x158
7101adacac  mov w25,#0x24
7101adacb0  mov x28,#-0x3f00000000000000
7101adacb4  stp x8,x24,[sp, #0x18]
7101adacb8  ldp x9,x8,[x19, #0x158]
7101adacbc  cmp x9,x8
7101adacc0  b.eq 0x7101adad34
7101adacc4  ldr x10,[x22]
7101adacc8  tst x10,#0xffffffffff
7101adaccc  and x12,x10,#-0x100000000000000
7101adacd0  cset w11,ne
7101adacd4  cset w13,eq
7101adacd8  cmp x12,x28
7101adacdc  cset w12,eq
7101adace0  and w11,w12,w11
7101adace4  cset w12,ne
7101adace8  orr w12,w12,w13
7101adacec  ldr x13,[x9]
7101adacf0  and x15,x13,#-0x100000000000000
7101adacf4  and x14,x13,#0xffffffffff
7101adacf8  cmp x15,x28
7101adacfc  ccmp x14,#0x0,#0x4,eq
7101adad00  b.ne 0x7101adad0c
7101adad04  tbz w12,#0x0,0x7101adad1c
7101adad08  b 0x7101adad2c
7101adad0c  cbz w11,0x7101adad1c
7101adad10  eor x13,x10,x13
7101adad14  tst x13,#0xffffffffff
7101adad18  b.eq 0x7101adad2c
7101adad1c  add x9,x9,#0x8
7101adad20  cmp x8,x9
7101adad24  b.ne 0x7101adacec
7101adad28  mov x9,x8
7101adad2c  cmp x9,x8
7101adad30  b.ne 0x7101adb2a4
7101adad34  ldr x27,[x21, #0x168]
7101adad38  ldr x26,[x22]
7101adad3c  mov x1,#0xfa78
7101adad40  movk x1,#0xd5f7, LSL #16
7101adad44  movk x1,#0xf, LSL #32
7101adad48  mov x0,x27
7101adad4c  bl 0x71032631a0
7101adad50  tst x26,#0xffffffffff
7101adad54  and x9,x26,#-0x100000000000000
7101adad58  cset w8,ne
7101adad5c  cmp x9,x28
7101adad60  cset w10,eq
7101adad64  and w23,w10,w8
7101adad68  and x8,x0,#0xffffffffff
7101adad6c  tbz w23,#0x0,0x7101adad90
7101adad70  and x10,x0,#-0x100000000000000
7101adad74  cmp x10,x28
7101adad78  b.ne 0x7101adad94
7101adad7c  cbz x8,0x7101adad94
7101adad80  eor x8,x0,x26
7101adad84  tst x8,#0xffffffffff
7101adad88  b.ne 0x7101adadcc
7101adad8c  b 0x7101adb2a4
7101adad90  and x10,x0,#-0x100000000000000
7101adad94  and x11,x26,#0xffffffffff
7101adad98  cmp x9,x28
7101adad9c  cset w9,eq
7101adada0  cmp x11,#0x0
7101adada4  cset w11,ne
7101adada8  cmp x8,#0x0
7101adadac  cset w8,ne
7101adadb0  cmp x10,x28
7101adadb4  cset w10,eq
7101adadb8  and w9,w9,w11
7101adadbc  and w8,w8,w10
7101adadc0  eor w8,w8,w9
7101adadc4  cmp w8,#0x1
7101adadc8  b.ne 0x7101adb2a4
7101adadcc  mov x1,#0x26b0
7101adadd0  movk x1,#0xca41, LSL #16
7101adadd4  mov x0,x27
7101adadd8  movk x1,#0x14, LSL #32
7101adaddc  bl 0x71032631a0
7101adade0  tst x0,#0xffffffffff
7101adade4  and x8,x0,#-0x100000000000000
7101adade8  cset w9,ne
7101adadec  cmp x8,x28
7101adadf0  cset w10,eq
7101adadf4  and w9,w10,w9
7101adadf8  and w9,w9,w23
7101adadfc  cmp w9,#0x1
7101adae00  b.ne 0x7101adae14
7101adae04  eor x8,x26,x0
7101adae08  tst x8,#0xffffffffff
7101adae0c  b.ne 0x7101adae38
7101adae10  b 0x7101adb2a4
7101adae14  and x9,x0,#0xffffffffff
7101adae18  cmp x8,x28
7101adae1c  cset w8,eq
7101adae20  cmp x9,#0x0
7101adae24  cset w9,ne
7101adae28  and w8,w8,w9
7101adae2c  eor w8,w23,w8
7101adae30  cmp w8,#0x1
7101adae34  b.ne 0x7101adb2a4
7101adae38  ldr x23,[x19, #0x130]
7101adae3c  mov w2,#0x1
7101adae40  mov x0,x26
7101adae44  mov w1,wzr
7101adae48  bl 0x7103238a70
7101adae4c  tst x0,#0xffffffffff
7101adae50  str x0,[sp, #0x90]
7101adae54  b.eq 0x7101adae6c
7101adae58  ldr x0,[x23]
7101adae5c  ldrsw x2,[x0, #0x70]
7101adae60  ldr w3,[x0, #0x68]
7101adae64  add x1,sp,#0x90
7101adae68  bl 0x710323c4e0
7101adae6c  ldp x9,x8,[x19, #0x160]
7101adae70  mov x24,#0x98f0
7101adae74  movk x24,#0xd031, LSL #16
7101adae78  movk x24,#0xf, LSL #32
7101adae7c  cmp x9,x8
7101adae80  b.eq 0x7101adae9c
7101adae84  ldr x8,[x22]
7101adae88  str x8,[x9]
7101adae8c  ldr x8,[x19, #0x160]
7101adae90  add x8,x8,#0x8
7101adae94  str x8,[x19, #0x160]
7101adae98  b 0x7101adafa0
7101adae9c  ldr x10,[sp, #0x18]
7101adaea0  ldr x26,[x10]
7101adaea4  sub x27,x9,x26
7101adaea8  asr x24,x27,#0x3
7101adaeac  add x9,x24,#0x1
7101adaeb0  lsr x10,x9,#0x3d
7101adaeb4  cbnz x10,0x7101adc808
7101adaeb8  sub x8,x8,x26
7101adaebc  asr x10,x8,#0x3
7101adaec0  orr x11,xzr,#0xffffffffffffffe
7101adaec4  cmp x10,x11
7101adaec8  b.hi 0x7101adaee8
7101adaecc  asr x8,x8,#0x2
7101adaed0  cmp x8,x9
7101adaed4  csel x23,x9,x8,cc
7101adaed8  cbz x23,0x7101adaf50
7101adaedc  lsr x8,x23,#0x3d
7101adaee0  cbz x8,0x7101adaeec
7101adaee4  b 0x7101adc7fc
7101adaee8  orr x23,xzr,#0x1fffffffffffffff
7101adaeec  lsl x8,x23,#0x3
7101adaef0  cmp x8,#0x0
7101adaef4  csinc x1,x8,xzr,ne
7101adaef8  mov w0,#0x10
7101adaefc  str x1,[sp, #0x10]
7101adaf00  bl 0x710392e290
7101adaf04  mov x28,x0
7101adaf08  cbnz x0,0x7101adaf54
7101adaf0c  adrp x8,0x7105332000
7101adaf10  ldr x0,[x8, #0xf00]
7101adaf14  cbz x0,0x7101adaf50
7101adaf18  ldr x8,[sp, #0x10]
7101adaf1c  stur wzr,[x29, #-0xa0]
7101adaf20  sub x1,x29,#0xa0
7101adaf24  add x2,sp,#0x90
7101adaf28  str x8,[sp, #0x90]
7101adaf2c  ldr x8,[x0]
7101adaf30  ldr x8,[x8, #0x30]
7101adaf34  blr x8
7101adaf38  tbz w0,#0x0,0x7101adaf50
7101adaf3c  ldr x1,[sp, #0x10]
7101adaf40  mov w0,#0x10
7101adaf44  bl 0x710392e290
7101adaf48  mov x28,x0
7101adaf4c  cbnz x0,0x7101adaf54
7101adaf50  mov x28,xzr
7101adaf54  ldr x8,[x22]
7101adaf58  add x24,x28,x24, LSL #0x3
7101adaf5c  add x23,x28,x23, LSL #0x3
7101adaf60  str x8,[x24], #0x8
7101adaf64  cmp x27,#0x1
7101adaf68  b.lt 0x7101adaf7c
7101adaf6c  mov x0,x28
7101adaf70  mov x1,x26
7101adaf74  mov x2,x27
7101adaf78  bl 0x71039c00e0
7101adaf7c  stp x28,x24,[x19, #0x158]
7101adaf80  mov x24,#0x98f0
7101adaf84  movk x24,#0xd031, LSL #16
7101adaf88  mov x28,#-0x3f00000000000000
7101adaf8c  movk x24,#0xf, LSL #32
7101adaf90  str x23,[x19, #0x168]
7101adaf94  cbz x26,0x7101adafa0
7101adaf98  mov x0,x26
7101adaf9c  bl 0x710392eb40
7101adafa0  mov w26,wzr
7101adafa4  ldr x27,[x22]
7101adafa8  mov x0,x20
7101adafac  mov x1,x27
7101adafb0  bl 0x7103265e70
7101adafb4  tbz w0,#0x0,0x7101adb0b8
7101adafb8  ldr x0,[x21, #0x168]
7101adafbc  mov x1,x24
7101adafc0  bl 0x71032631a0
7101adafc4  and x10,x27,#-0x100000000000000
7101adafc8  and x9,x27,#0xffffffffff
7101adafcc  and x8,x0,#0xffffffffff
7101adafd0  cmp x10,x28
7101adafd4  b.ne 0x7101adb080
7101adafd8  cbz x9,0x7101adb080
7101adafdc  and x11,x0,#-0x100000000000000
7101adafe0  cmp x11,x28
7101adafe4  b.ne 0x7101adb084
7101adafe8  cbz x8,0x7101adb084
7101adafec  eor x8,x0,x27
7101adaff0  tst x8,#0xffffffffff
7101adaff4  b.eq 0x7101adb0b8
7101adaff8  ldr x23,[x19, #0x130]
7101adaffc  mov x0,x27
7101adb000  mov w1,w26
7101adb004  mov w2,w25
7101adb008  mov w3,wzr
7101adb00c  bl 0x710323a000
7101adb010  tst x0,#0xffffffffff
7101adb014  str x0,[sp, #0x90]
7101adb018  b.eq 0x7101adb030
7101adb01c  ldr x0,[x23]
7101adb020  ldrsw x2,[x0, #0x70]
7101adb024  ldr w3,[x0, #0x68]
7101adb028  add x1,sp,#0x90
7101adb02c  bl 0x710323c4e0
7101adb030  ldr x0,[x22]
7101adb034  ldr x23,[x19, #0x130]
7101adb038  mov w3,#0x1
7101adb03c  mov w1,w26
7101adb040  mov w2,w25
7101adb044  bl 0x710323a000
7101adb048  tst x0,#0xffffffffff
7101adb04c  str x0,[sp, #0x90]
7101adb050  b.eq 0x7101adb068
7101adb054  ldr x0,[x23]
7101adb058  ldrsw x2,[x0, #0x70]
7101adb05c  ldr w3,[x0, #0x68]
7101adb060  add x1,sp,#0x90
7101adb064  bl 0x710323c4e0
7101adb068  ldr x23,[x19, #0x130]
7101adb06c  ldr x0,[x22]
7101adb070  mov w3,#0x2
7101adb074  mov w1,w26
7101adb078  mov w2,w25
7101adb07c  b 0x7101adb0cc
7101adb080  and x11,x0,#-0x100000000000000
7101adb084  cmp x10,x28
7101adb088  cset w10,eq
7101adb08c  cmp x9,#0x0
7101adb090  cset w9,ne
7101adb094  cmp x8,#0x0
7101adb098  cset w8,ne
7101adb09c  cmp x11,x28
7101adb0a0  and w9,w10,w9
7101adb0a4  cset w10,eq
7101adb0a8  and w8,w8,w10
7101adb0ac  eor w8,w8,w9
7101adb0b0  cmp w8,#0x1
7101adb0b4  b.eq 0x7101adaff8
7101adb0b8  ldr x23,[x19, #0x130]
7101adb0bc  mov x0,x27
7101adb0c0  mov w1,w26
7101adb0c4  mov w2,w25
7101adb0c8  mov w3,wzr
7101adb0cc  bl 0x710323a000
7101adb0d0  tst x0,#0xffffffffff
7101adb0d4  str x0,[sp, #0x90]
7101adb0d8  b.eq 0x7101adb0f0
7101adb0dc  ldr x0,[x23]
7101adb0e0  ldrsw x2,[x0, #0x70]
7101adb0e4  ldr w3,[x0, #0x68]
7101adb0e8  add x1,sp,#0x90
7101adb0ec  bl 0x710323c4e0
7101adb0f0  add w26,w26,#0x1
7101adb0f4  cmp w26,#0x5
7101adb0f8  b.ne 0x7101adafa4
7101adb0fc  ldr x26,[x22]
7101adb100  ldr x24,[x19, #0x130]
7101adb104  orr w1,wzr,#0x6
7101adb108  mov w2,w25
7101adb10c  mov w3,wzr
7101adb110  mov x0,x26
7101adb114  bl 0x710323a000
7101adb118  tst x0,#0xffffffffff
7101adb11c  b.eq 0x7101adb180
7101adb120  mov x1,x0
7101adb124  sub x0,x29,#0xa0
7101adb128  bl 0x710353da30
7101adb12c  ldur w23,[x29, #-0xa0]
7101adb130  orr w8,wzr,#0xffffff
7101adb134  cmp w23,w8
7101adb138  b.eq 0x7101adb188
7101adb13c  orr w1,wzr,#0x6
7101adb140  mov x0,x26
7101adb144  mov w2,w25
7101adb148  mov w3,wzr
7101adb14c  bl 0x710323a000
7101adb150  tst x0,#0xffffffffff
7101adb154  str x0,[sp, #0x90]
7101adb158  b.eq 0x7101adb170
7101adb15c  ldr x0,[x24]
7101adb160  ldrsw x2,[x0, #0x70]
7101adb164  ldr w3,[x0, #0x68]
7101adb168  add x1,sp,#0x90
7101adb16c  bl 0x710323c4e0
7101adb170  adrp x8,0x7105332000
7101adb174  ldr x0,[x8, #0xf20]
7101adb178  mov w1,w23
7101adb17c  bl 0x7103540b10
7101adb180  orr w8,wzr,#0xffffff
7101adb184  stur w8,[x29, #-0xa0]
7101adb188  ldr x26,[x22]
7101adb18c  ldr x24,[x19, #0x130]
7101adb190  orr w1,wzr,#0x6
7101adb194  mov w3,#0x1
7101adb198  mov w2,w25
7101adb19c  mov x0,x26
7101adb1a0  bl 0x710323a000
7101adb1a4  tst x0,#0xffffffffff
7101adb1a8  b.eq 0x7101adb20c
7101adb1ac  mov x1,x0
7101adb1b0  sub x0,x29,#0xa0
7101adb1b4  bl 0x710353da30
7101adb1b8  ldur w23,[x29, #-0xa0]
7101adb1bc  orr w8,wzr,#0xffffff
7101adb1c0  cmp w23,w8
7101adb1c4  b.eq 0x7101adb214
7101adb1c8  orr w1,wzr,#0x6
7101adb1cc  mov w3,#0x1
7101adb1d0  mov x0,x26
7101adb1d4  mov w2,w25
7101adb1d8  bl 0x710323a000
7101adb1dc  tst x0,#0xffffffffff
7101adb1e0  str x0,[sp, #0x90]
7101adb1e4  b.eq 0x7101adb1fc
7101adb1e8  ldr x0,[x24]
7101adb1ec  ldrsw x2,[x0, #0x70]
7101adb1f0  ldr w3,[x0, #0x68]
7101adb1f4  add x1,sp,#0x90
7101adb1f8  bl 0x710323c4e0
7101adb1fc  adrp x8,0x7105332000
7101adb200  ldr x0,[x8, #0xf20]
7101adb204  mov w1,w23
7101adb208  bl 0x7103540b10
7101adb20c  orr w8,wzr,#0xffffff
7101adb210  stur w8,[x29, #-0xa0]
7101adb214  ldr x26,[x22]
7101adb218  ldr x24,[x19, #0x130]
7101adb21c  orr w1,wzr,#0x6
7101adb220  mov w3,#0x2
7101adb224  mov w2,w25
7101adb228  mov x0,x26
7101adb22c  bl 0x710323a000
7101adb230  tst x0,#0xffffffffff
7101adb234  b.eq 0x7101adb298
7101adb238  mov x1,x0
7101adb23c  sub x0,x29,#0xa0
7101adb240  bl 0x710353da30
7101adb244  ldur w23,[x29, #-0xa0]
7101adb248  orr w8,wzr,#0xffffff
7101adb24c  cmp w23,w8
7101adb250  b.eq 0x7101adb2a0
7101adb254  orr w1,wzr,#0x6
7101adb258  mov w3,#0x2
7101adb25c  mov x0,x26
7101adb260  mov w2,w25
7101adb264  bl 0x710323a000
7101adb268  tst x0,#0xffffffffff
7101adb26c  str x0,[sp, #0x90]
7101adb270  b.eq 0x7101adb288
7101adb274  ldr x0,[x24]
7101adb278  ldrsw x2,[x0, #0x70]
7101adb27c  ldr w3,[x0, #0x68]
7101adb280  add x1,sp,#0x90
7101adb284  bl 0x710323c4e0
7101adb288  adrp x8,0x7105332000
7101adb28c  ldr x0,[x8, #0xf20]
7101adb290  mov w1,w23
7101adb294  bl 0x7103540b10
7101adb298  orr w8,wzr,#0xffffff
7101adb29c  stur w8,[x29, #-0xa0]
7101adb2a0  ldr x24,[sp, #0x20]
7101adb2a4  add x22,x22,#0x8
7101adb2a8  cmp x22,x24
7101adb2ac  b.ne 0x7101adacb8
7101adb2b0  adrp x8,0x710532f000
7101adb2b4  ldr x8,[x8, #0x730]
7101adb2b8  ldr x21,[x8, #0x8]
7101adb2bc  b 0x7101adb2c4
7101adb2c0  mov x28,#-0x3f00000000000000
7101adb2c4  stur xzr,[x29, #-0xa0]
7101adb2c8  ldr x0,[x21, #0x1b8]
7101adb2cc  ldr x9,[x0, #0x8]
7101adb2d0  ldr x8,[x9, #0x20]
7101adb2d4  ldrb w10,[x8]
7101adb2d8  cmp w10,#0xc
7101adb2dc  b.ne 0x7101adb364
7101adb2e0  ldur w10,[x8, #0x1]
7101adb2e4  subs w10,w10,#0x1
7101adb2e8  b.lt 0x7101adb364
7101adb2ec  ldr x9,[x9, #0x18]
7101adb2f0  ldursw x13,[x8, #0x5]
7101adb2f4  mov x14,#0xc827
7101adb2f8  movk x14,#0xd024, LSL #16
7101adb2fc  movk x14,#0xa, LSL #32
7101adb300  mov w11,wzr
7101adb304  ldp x12,x9,[x9, #0x20]
7101adb308  add x13,x9,x13
7101adb30c  adrp x9,0x7104742000
7101adb310  add x9,x9,#0xdbb
7101adb314  add w15,w10,w11
7101adb318  cmp w15,#0x0
7101adb31c  cinc w15,w15,lt
7101adb320  asr w15,w15,#0x1
7101adb324  add x16,x13,w15, SXTW  #0x3
7101adb328  ldr w17,[x16]
7101adb32c  ldr x17,[x12, x17, LSL #0x3]
7101adb330  cmp x17,x14
7101adb334  b.eq 0x7101adb354
7101adb338  sub w16,w15,#0x1
7101adb33c  cmp x17,x14
7101adb340  csel w10,w16,w10,hi
7101adb344  csinc w11,w11,w15,hi
7101adb348  cmp w11,w10
7101adb34c  b.le 0x7101adb314
7101adb350  b 0x7101adb36c
7101adb354  ldrsw x9,[x16, #0x4]
7101adb358  tbnz w9,#0x1f,0x7101adb364
7101adb35c  add x9,x8,x9
7101adb360  b 0x7101adb36c
7101adb364  adrp x9,0x7104742000
7101adb368  add x9,x9,#0xdbb
7101adb36c  ldrb w8,[x9]
7101adb370  sub w8,w8,#0xb
7101adb374  cmp w8,#0x1
7101adb378  b.hi 0x7101adb538
7101adb37c  ldur w8,[x9, #0x1]
7101adb380  cbz w8,0x7101adb538
7101adb384  mov x22,#0xc827
7101adb388  movk x22,#0xd024, LSL #16
7101adb38c  mov x23,#0xff0000000000
7101adb390  mov w20,wzr
7101adb394  movk x22,#0xa, LSL #32
7101adb398  movk x23,#0xc1ff, LSL #48
7101adb39c  adrp x24,0x7104742000
7101adb3a0  add x24,x24,#0xdbb
7101adb3a4  sub x2,x29,#0xa0
7101adb3a8  add x3,sp,#0x8c
7101adb3ac  mov w1,w20
7101adb3b0  bl 0x71032b9960
7101adb3b4  ldp x10,x9,[sp, #0x70]
7101adb3b8  ldur x8,[x29, #-0xa0]
7101adb3bc  cmp x10,x9
7101adb3c0  b.eq 0x7101adb438
7101adb3c4  and x11,x8,#0xffffffffff
7101adb3c8  cbz x11,0x7101adb3f8
7101adb3cc  ldr x12,[x10]
7101adb3d0  and x13,x12,#0xffffffffff
7101adb3d4  and x12,x12,#-0x100000000000000
7101adb3d8  cmp x12,x28
7101adb3dc  ccmp x13,#0x0,#0x4,eq
7101adb3e0  ccmp x11,x13,#0x0,ne
7101adb3e4  b.eq 0x7101adb438
7101adb3e8  add x10,x10,#0x8
7101adb3ec  cmp x9,x10
7101adb3f0  b.ne 0x7101adb3cc
7101adb3f4  b 0x7101adb444
7101adb3f8  ldr x11,[x10]
7101adb3fc  and x12,x11,#0xffffffffff
7101adb400  and x11,x11,#-0x100000000000000
7101adb404  cmp x11,x28
7101adb408  ccmp x12,#0x0,#0x4,eq
7101adb40c  b.eq 0x7101adb438
7101adb410  add x10,x10,#0x8
7101adb414  cmp x9,x10
7101adb418  b.eq 0x7101adb444
7101adb41c  ldr x11,[x10], #0x8
7101adb420  and x12,x11,#-0x100000000000000
7101adb424  cmp x12,x28
7101adb428  b.ne 0x7101adb434
7101adb42c  and x11,x11,#0xffffffffff
7101adb430  cbnz x11,0x7101adb414
7101adb434  sub x10,x10,#0x8
7101adb438  cmp x9,x10
7101adb43c  b.ne 0x7101adb450
7101adb440  b 0x7101adb488
7101adb444  mov x10,x9
7101adb448  cmp x9,x10
7101adb44c  b.eq 0x7101adb488
7101adb450  ldrsb w1,[sp, #0x8c]
7101adb454  mov x0,x23
7101adb458  ldr x25,[x19, #0x130]
7101adb45c  bfxil x0,x8,#0x0,#0x28
7101adb460  mov w2,#0x1
7101adb464  bl 0x7103238a70
7101adb468  tst x0,#0xffffffffff
7101adb46c  str x0,[sp, #0x90]
7101adb470  b.eq 0x7101adb488
7101adb474  ldr x0,[x25]
7101adb478  ldrsw x2,[x0, #0x70]
7101adb47c  ldr w3,[x0, #0x68]
7101adb480  add x1,sp,#0x90
7101adb484  bl 0x710323c4e0
7101adb488  ldr x0,[x21, #0x1b8]
7101adb48c  ldr x11,[x0, #0x8]
7101adb490  ldr x8,[x11, #0x20]
7101adb494  ldrb w9,[x8]
7101adb498  cmp w9,#0xc
7101adb49c  mov x9,x24
7101adb4a0  b.ne 0x7101adb518
7101adb4a4  ldur w9,[x8, #0x1]
7101adb4a8  subs w9,w9,#0x1
7101adb4ac  b.lt 0x7101adb514
7101adb4b0  ldr x13,[x11, #0x18]
7101adb4b4  ldursw x12,[x8, #0x5]
7101adb4b8  mov w10,wzr
7101adb4bc  ldp x11,x13,[x13, #0x20]
7101adb4c0  add x12,x13,x12
7101adb4c4  add w13,w9,w10
7101adb4c8  cmp w13,#0x0
7101adb4cc  cinc w13,w13,lt
7101adb4d0  asr w13,w13,#0x1
7101adb4d4  add x14,x12,w13, SXTW  #0x3
7101adb4d8  ldr w15,[x14]
7101adb4dc  ldr x15,[x11, x15, LSL #0x3]
7101adb4e0  cmp x15,x22
7101adb4e4  b.eq 0x7101adb504
7101adb4e8  sub w14,w13,#0x1
7101adb4ec  cmp x15,x22
7101adb4f0  csel w9,w14,w9,hi
7101adb4f4  csinc w10,w10,w13,hi
7101adb4f8  cmp w10,w9
7101adb4fc  b.le 0x7101adb4c4
7101adb500  b 0x7101adb514
7101adb504  ldrsw x9,[x14, #0x4]
7101adb508  tbnz w9,#0x1f,0x7101adb514
7101adb50c  add x9,x8,x9
7101adb510  b 0x7101adb518
7101adb514  mov x9,x24
7101adb518  ldrb w8,[x9]
7101adb51c  sub w8,w8,#0xb
7101adb520  cmp w8,#0x1
7101adb524  b.hi 0x7101adb538
7101adb528  ldur w8,[x9, #0x1]
7101adb52c  add w20,w20,#0x1
7101adb530  cmp w20,w8
7101adb534  b.cc 0x7101adb3a4
7101adb538  ldp x25,x26,[sp, #0x58]
7101adb53c  cmp x25,x26
7101adb540  mov x22,#0x6900000000000000
7101adb544  b.eq 0x7101adb718
7101adb548  add x20,x19,#0x170
7101adb54c  ldp x9,x8,[x19, #0x170]
7101adb550  cmp x9,x8
7101adb554  b.eq 0x7101adb5c8
7101adb558  ldr x10,[x25]
7101adb55c  tst x10,#0xffffffffff
7101adb560  and x12,x10,#-0x100000000000000
7101adb564  cset w11,ne
7101adb568  cset w13,eq
7101adb56c  cmp x12,x22
7101adb570  cset w12,eq
7101adb574  and w11,w12,w11
7101adb578  cset w12,ne
7101adb57c  orr w12,w12,w13
7101adb580  ldr x13,[x9]
7101adb584  and x15,x13,#-0x100000000000000
7101adb588  and x14,x13,#0xffffffffff
7101adb58c  cmp x15,x22
7101adb590  ccmp x14,#0x0,#0x4,eq
7101adb594  b.ne 0x7101adb5a0
7101adb598  tbz w12,#0x0,0x7101adb5b0
7101adb59c  b 0x7101adb5c0
7101adb5a0  cbz w11,0x7101adb5b0
7101adb5a4  eor x13,x10,x13
7101adb5a8  tst x13,#0xffffffffff
7101adb5ac  b.eq 0x7101adb5c0
7101adb5b0  add x9,x9,#0x8
7101adb5b4  cmp x8,x9
7101adb5b8  b.ne 0x7101adb580
7101adb5bc  mov x9,x8
7101adb5c0  cmp x9,x8
7101adb5c4  b.ne 0x7101adb70c
7101adb5c8  ldr x0,[x25]
7101adb5cc  ldr x21,[x19, #0x130]
7101adb5d0  orr w1,wzr,#0xe
7101adb5d4  bl 0x7103238c50
7101adb5d8  tst x0,#0xffffffffff
7101adb5dc  str x0,[sp, #0x90]
7101adb5e0  b.eq 0x7101adb5f8
7101adb5e4  ldr x0,[x21]
7101adb5e8  ldrsw x2,[x0, #0x70]
7101adb5ec  ldr w3,[x0, #0x68]
7101adb5f0  add x1,sp,#0x90
7101adb5f4  bl 0x710323c4e0
7101adb5f8  ldp x9,x8,[x19, #0x178]
7101adb5fc  cmp x9,x8
7101adb600  b.eq 0x7101adb61c
7101adb604  ldr x8,[x25]
7101adb608  str x8,[x9]
7101adb60c  ldr x8,[x19, #0x178]
7101adb610  add x8,x8,#0x8
7101adb614  str x8,[x19, #0x178]
7101adb618  b 0x7101adb70c
7101adb61c  ldr x21,[x20]
7101adb620  sub x22,x9,x21
7101adb624  asr x28,x22,#0x3
7101adb628  add x9,x28,#0x1
7101adb62c  lsr x10,x9,#0x3d
7101adb630  cbnz x10,0x7101adc800
7101adb634  sub x8,x8,x21
7101adb638  asr x10,x8,#0x3
7101adb63c  orr x11,xzr,#0xffffffffffffffe
7101adb640  cmp x10,x11
7101adb644  b.hi 0x7101adb664
7101adb648  asr x8,x8,#0x2
7101adb64c  cmp x8,x9
7101adb650  csel x27,x9,x8,cc
7101adb654  cbz x27,0x7101adb6c8
7101adb658  lsr x8,x27,#0x3d
7101adb65c  cbz x8,0x7101adb668
7101adb660  b 0x7101adc7fc
7101adb664  orr x27,xzr,#0x1fffffffffffffff
7101adb668  lsl x8,x27,#0x3
7101adb66c  cmp x8,#0x0
7101adb670  csinc x24,x8,xzr,ne
7101adb674  mov w0,#0x10
7101adb678  mov x1,x24
7101adb67c  bl 0x710392e290
7101adb680  mov x23,x0
7101adb684  cbnz x0,0x7101adb6cc
7101adb688  adrp x8,0x7105332000
7101adb68c  ldr x0,[x8, #0xf00]
7101adb690  cbz x0,0x7101adb6c8
7101adb694  stur wzr,[x29, #-0xa0]
7101adb698  str x24,[sp, #0x90]
7101adb69c  ldr x8,[x0]
7101adb6a0  ldr x8,[x8, #0x30]
7101adb6a4  sub x1,x29,#0xa0
7101adb6a8  add x2,sp,#0x90
7101adb6ac  blr x8
7101adb6b0  tbz w0,#0x0,0x7101adb6c8
7101adb6b4  mov w0,#0x10
7101adb6b8  mov x1,x24
7101adb6bc  bl 0x710392e290
7101adb6c0  mov x23,x0
7101adb6c4  cbnz x0,0x7101adb6cc
7101adb6c8  mov x23,xzr
7101adb6cc  ldr x8,[x25]
7101adb6d0  add x24,x23,x28, LSL #0x3
7101adb6d4  add x27,x23,x27, LSL #0x3
7101adb6d8  str x8,[x24], #0x8
7101adb6dc  cmp x22,#0x1
7101adb6e0  b.lt 0x7101adb6f4
7101adb6e4  mov x0,x23
7101adb6e8  mov x1,x21
7101adb6ec  mov x2,x22
7101adb6f0  bl 0x71039c00e0
7101adb6f4  mov x22,#0x6900000000000000
7101adb6f8  stp x23,x24,[x19, #0x170]
7101adb6fc  str x27,[x19, #0x180]
7101adb700  cbz x21,0x7101adb70c
7101adb704  mov x0,x21
7101adb708  bl 0x710392eb40
7101adb70c  add x25,x25,#0x8
7101adb710  cmp x25,x26
7101adb714  b.ne 0x7101adb54c
7101adb718  ldp x28,x27,[sp, #0x40]
7101adb71c  cmp x28,x27
7101adb720  b.eq 0x7101adb9d0
7101adb724  add x8,x19,#0x188
7101adb728  str x8,[sp, #0x18]
7101adb72c  sub x8,x29,#0xa0
7101adb730  add x9,sp,#0x90
7101adb734  orr x23,xzr,#0x1e00000000000000
7101adb738  add x8,x8,#0x8
7101adb73c  str x8,[sp, #0x20]
7101adb740  add x8,x9,#0x8
7101adb744  adrp x20,0x7104754000
7101adb748  add x20,x20,#0x84
7101adb74c  stp x27,x8,[sp, #0x8]
7101adb750  b 0x7101adb75c
7101adb754  mov x26,xzr
7101adb758  b 0x7101adb988
7101adb75c  ldp x9,x8,[x19, #0x188]
7101adb760  cmp x9,x8
7101adb764  b.eq 0x7101adb7d8
7101adb768  ldr x10,[x28]
7101adb76c  tst x10,#0xffffffffff
7101adb770  and x12,x10,#-0x100000000000000
7101adb774  cset w11,ne
7101adb778  cset w13,eq
7101adb77c  cmp x12,x23
7101adb780  cset w12,eq
7101adb784  and w11,w12,w11
7101adb788  cset w12,ne
7101adb78c  orr w12,w12,w13
7101adb790  ldr x13,[x9]
7101adb794  and x15,x13,#-0x100000000000000
7101adb798  and x14,x13,#0xffffffffff
7101adb79c  cmp x15,x23
7101adb7a0  ccmp x14,#0x0,#0x4,eq
7101adb7a4  b.ne 0x7101adb7b0
7101adb7a8  tbz w12,#0x0,0x7101adb7c0
7101adb7ac  b 0x7101adb7d0
7101adb7b0  cbz w11,0x7101adb7c0
7101adb7b4  eor x13,x10,x13
7101adb7b8  tst x13,#0xffffffffff
7101adb7bc  b.eq 0x7101adb7d0
7101adb7c0  add x9,x9,#0x8
7101adb7c4  cmp x8,x9
7101adb7c8  b.ne 0x7101adb790
7101adb7cc  mov x9,x8
7101adb7d0  cmp x9,x8
7101adb7d4  b.ne 0x7101adb9c4
7101adb7d8  ldr x2,[x28]
7101adb7dc  tst x2,#0xffffffffff
7101adb7e0  b.eq 0x7101adb880
7101adb7e4  and x8,x2,#-0x100000000000000
7101adb7e8  cmp x8,x23
7101adb7ec  b.ne 0x7101adb880
7101adb7f0  adrp x8,0x710532f000
7101adb7f4  ldr x8,[x8, #0x730]
7101adb7f8  ldr x8,[x8, #0x8]
7101adb7fc  ldr x1,[x8, #0x268]
7101adb800  ldr x21,[x19, #0x130]
7101adb804  sub x0,x29,#0xa0
7101adb808  bl 0x710327fc30
7101adb80c  add x0,sp,#0x90
7101adb810  mov w1,#0x15
7101adb814  mov w2,wzr
7101adb818  bl 0x7103239920
7101adb81c  ldr x2,[sp, #0x20]
7101adb820  add x0,sp,#0x90
7101adb824  adrp x1,0x7104420000
7101adb828  add x1,x1,#0xa16
7101adb82c  bl 0x7103239d20
7101adb830  ldrsw x8,[sp, #0x94]
7101adb834  cbz w8,0x7101adb888
7101adb838  add x9,sp,#0x90
7101adb83c  ldr x11,[sp, #0x10]
7101adb840  mov w10,#0xffffffff
7101adb844  add x9,x9,w8, UXTW 
7101adb848  add x9,x9,#0x8
7101adb84c  ldrb w12,[x11], #0x1
7101adb850  sub w13,w12,#0x41
7101adb854  add w14,w12,#0x20
7101adb858  cmp w13,#0x1a
7101adb85c  csel w12,w14,w12,cc
7101adb860  eor w12,w12,w10
7101adb864  and w12,w12,#0xff
7101adb868  cmp x11,x9
7101adb86c  ldr w12,[x20, w12, UXTW #0x2]
7101adb870  eor w10,w12,w10, LSR #0x8
7101adb874  b.cc 0x7101adb84c
7101adb878  mvn w9,w10
7101adb87c  b 0x7101adb88c
7101adb880  str xzr,[sp, #0x90]
7101adb884  b 0x7101adb8ac
7101adb888  mov x9,xzr
7101adb88c  bfm x9,x8,#0x20,#0x7
7101adb890  str x9,[sp, #0x90]
7101adb894  cbz x9,0x7101adb8ac
7101adb898  ldr x0,[x21]
7101adb89c  ldrsw x2,[x0, #0x70]
7101adb8a0  ldr w3,[x0, #0x68]
7101adb8a4  add x1,sp,#0x90
7101adb8a8  bl 0x710323c4e0
7101adb8ac  ldp x9,x8,[x19, #0x190]
7101adb8b0  cmp x9,x8
7101adb8b4  b.eq 0x7101adb8d0
7101adb8b8  ldr x8,[x28]
7101adb8bc  str x8,[x9]
7101adb8c0  ldr x8,[x19, #0x190]
7101adb8c4  add x8,x8,#0x8
7101adb8c8  str x8,[x19, #0x190]
7101adb8cc  b 0x7101adb9c4
7101adb8d0  ldr x10,[sp, #0x18]
7101adb8d4  ldr x24,[x10]
7101adb8d8  sub x25,x9,x24
7101adb8dc  asr x21,x25,#0x3
7101adb8e0  add x9,x21,#0x1
7101adb8e4  lsr x10,x9,#0x3d
7101adb8e8  cbnz x10,0x7101adc808
7101adb8ec  sub x8,x8,x24
7101adb8f0  asr x10,x8,#0x3
7101adb8f4  orr x11,xzr,#0xffffffffffffffe
7101adb8f8  cmp x10,x11
7101adb8fc  b.hi 0x7101adb91c
7101adb900  asr x8,x8,#0x2
7101adb904  cmp x8,x9
7101adb908  csel x22,x9,x8,cc
7101adb90c  cbz x22,0x7101adb754
7101adb910  lsr x8,x22,#0x3d
7101adb914  cbz x8,0x7101adb920
7101adb918  b 0x7101adc7fc
7101adb91c  orr x22,xzr,#0x1fffffffffffffff
7101adb920  lsl x8,x22,#0x3
7101adb924  cmp x8,#0x0
7101adb928  csinc x27,x8,xzr,ne
7101adb92c  mov w0,#0x10
7101adb930  mov x1,x27
7101adb934  bl 0x710392e290
7101adb938  mov x26,x0
7101adb93c  cbnz x0,0x7101adb984
7101adb940  adrp x8,0x7105332000
7101adb944  ldr x0,[x8, #0xf00]
7101adb948  cbz x0,0x7101adb980
7101adb94c  stur wzr,[x29, #-0xa0]
7101adb950  str x27,[sp, #0x90]
7101adb954  ldr x8,[x0]
7101adb958  ldr x8,[x8, #0x30]
7101adb95c  sub x1,x29,#0xa0
7101adb960  add x2,sp,#0x90
7101adb964  blr x8
7101adb968  tbz w0,#0x0,0x7101adb980
7101adb96c  mov w0,#0x10
7101adb970  mov x1,x27
7101adb974  bl 0x710392e290
7101adb978  mov x26,x0
7101adb97c  cbnz x0,0x7101adb984
7101adb980  mov x26,xzr
7101adb984  ldr x27,[sp, #0x8]
7101adb988  ldr x8,[x28]
7101adb98c  add x21,x26,x21, LSL #0x3
7101adb990  add x22,x26,x22, LSL #0x3
7101adb994  str x8,[x21], #0x8
7101adb998  cmp x25,#0x1
7101adb99c  b.lt 0x7101adb9b0
7101adb9a0  mov x0,x26
7101adb9a4  mov x1,x24
7101adb9a8  mov x2,x25
7101adb9ac  bl 0x71039c00e0
7101adb9b0  stp x26,x21,[x19, #0x188]
7101adb9b4  str x22,[x19, #0x198]
7101adb9b8  cbz x24,0x7101adb9c4
7101adb9bc  mov x0,x24
7101adb9c0  bl 0x710392eb40
7101adb9c4  add x28,x28,#0x8
7101adb9c8  cmp x28,x27
7101adb9cc  b.ne 0x7101adb75c
7101adb9d0  ldp x20,x26,[sp, #0x28]
7101adb9d4  cmp x20,x26
7101adb9d8  b.eq 0x7101adbe98
7101adb9dc  add x8,x19,#0x1a0
7101adb9e0  orr w27,wzr,#0xffff
7101adb9e4  mov x28,#-0x3f00000000000000
7101adb9e8  str x8,[sp, #0x20]
7101adb9ec  ldp x9,x8,[x19, #0x1a0]
7101adb9f0  cmp x9,x8
7101adb9f4  b.eq 0x7101adba24
7101adb9f8  ldrh w2,[x20]
7101adb9fc  ldrh w10,[x9]
7101adba00  cmp w2,w10
7101adba04  b.eq 0x7101adba24
7101adba08  add x9,x9,#0x2
7101adba0c  cmp x8,x9
7101adba10  b.eq 0x7101adba30
7101adba14  ldrh w10,[x9], #0x2
7101adba18  cmp w2,w10
7101adba1c  b.ne 0x7101adba0c
7101adba20  sub x9,x9,#0x2
7101adba24  cmp x9,x8
7101adba28  b.ne 0x7101adbb5c
7101adba2c  ldrh w2,[x20]
7101adba30  cmp w2,w27
7101adba34  b.eq 0x7101adba58
7101adba38  adrp x8,0x7105329000
7101adba3c  ldr x8,[x8, #0xf98]
7101adba40  ldr x8,[x8]
7101adba44  ldr x0,[x8, #0x20]
7101adba48  mov w1,#0x1
7101adba4c  mov w3,#0x1
7101adba50  bl 0x710259c150
7101adba54  ldr x8,[x19, #0x1a8]
7101adba58  ldr x9,[x19, #0x1b0]
7101adba5c  cmp x8,x9
7101adba60  b.eq 0x7101adba7c
7101adba64  ldrh w9,[x20]
7101adba68  strh w9,[x8]
7101adba6c  ldr x8,[x19, #0x1a8]
7101adba70  add x8,x8,#0x2
7101adba74  str x8,[x19, #0x1a8]
7101adba78  b 0x7101adbb5c
7101adba7c  ldr x8,[sp, #0x20]
7101adba80  ldr x22,[x8]
7101adba84  sub x23,x9,x22
7101adba88  cmn x23,#0x3
7101adba8c  b.le 0x7101adc810
7101adba90  asr x28,x23,#0x1
7101adba94  add x8,x28,#0x1
7101adba98  cmp x23,x8
7101adba9c  orr x9,xzr,#0x3fffffffffffffff
7101adbaa0  csel x8,x8,x23,cc
7101adbaa4  cmp x28,x9
7101adbaa8  orr x9,xzr,#0x7fffffffffffffff
7101adbaac  csel x21,x8,x9,cc
7101adbab0  cbz x21,0x7101adbb18
7101adbab4  tbnz x21,#0x3f,0x7101adc7fc
7101adbab8  lsl x8,x21,#0x1
7101adbabc  cmp x8,#0x0
7101adbac0  csinc x25,x8,xzr,ne
7101adbac4  mov w0,#0x10
7101adbac8  mov x1,x25
7101adbacc  bl 0x710392e290
7101adbad0  mov x24,x0
7101adbad4  cbnz x0,0x7101adbb1c
7101adbad8  adrp x8,0x7105332000
7101adbadc  ldr x0,[x8, #0xf00]
7101adbae0  cbz x0,0x7101adbb18
7101adbae4  stur wzr,[x29, #-0xa0]
7101adbae8  str x25,[sp, #0x90]
7101adbaec  ldr x8,[x0]
7101adbaf0  ldr x8,[x8, #0x30]
7101adbaf4  sub x1,x29,#0xa0
7101adbaf8  add x2,sp,#0x90
7101adbafc  blr x8
7101adbb00  tbz w0,#0x0,0x7101adbb18
7101adbb04  mov w0,#0x10
7101adbb08  mov x1,x25
7101adbb0c  bl 0x710392e290
7101adbb10  mov x24,x0
7101adbb14  cbnz x0,0x7101adbb1c
7101adbb18  mov x24,xzr
7101adbb1c  ldrh w8,[x20]
7101adbb20  add x25,x24,x28, LSL #0x1
7101adbb24  add x21,x24,x21, LSL #0x1
7101adbb28  strh w8,[x25], #0x2
7101adbb2c  cmp x23,#0x1
7101adbb30  b.lt 0x7101adbb44
7101adbb34  mov x0,x24
7101adbb38  mov x1,x22
7101adbb3c  mov x2,x23
7101adbb40  bl 0x71039c00e0
7101adbb44  mov x28,#-0x3f00000000000000
7101adbb48  stp x24,x25,[x19, #0x1a0]
7101adbb4c  str x21,[x19, #0x1b0]
7101adbb50  cbz x22,0x7101adbb5c
7101adbb54  mov x0,x22
7101adbb58  bl 0x710392eb40
7101adbb5c  add x20,x20,#0x2
7101adbb60  cmp x20,x26
7101adbb64  b.ne 0x7101adb9ec
7101adbb68  ldr x20,[sp, #0x28]
7101adbb6c  cbz x20,0x7101adbb7c
7101adbb70  mov x0,x20
7101adbb74  str x20,[sp, #0x30]
7101adbb78  bl 0x710392eb40
7101adbb7c  ldr x0,[sp, #0x40]
7101adbb80  cbz x0,0x7101adbb8c
7101adbb84  str x0,[sp, #0x48]
7101adbb88  bl 0x710392eb40
7101adbb8c  ldr x0,[sp, #0x58]
7101adbb90  cbz x0,0x7101adbb9c
7101adbb94  str x0,[sp, #0x60]
7101adbb98  bl 0x710392eb40
7101adbb9c  ldr x0,[sp, #0x70]
7101adbba0  cbz x0,0x7101adbbac
7101adbba4  str x0,[sp, #0x78]
7101adbba8  bl 0x710392eb40
7101adbbac  ldr w8,[x19, #0x1b8]
7101adbbb0  cbnz w8,0x7101adbd94
7101adbbb4  ldp x25,x26,[x19, #0x1c0]
7101adbbb8  cmp x25,x26
7101adbbbc  b.eq 0x7101adbd94
7101adbbc0  add x20,x19,#0x1d8
7101adbbc4  ldp x9,x8,[x19, #0x1d8]
7101adbbc8  cmp x9,x8
7101adbbcc  b.eq 0x7101adbc40
7101adbbd0  ldr x10,[x25]
7101adbbd4  tst x10,#0xffffffffff
7101adbbd8  and x12,x10,#-0x100000000000000
7101adbbdc  cset w11,ne
7101adbbe0  cset w13,eq
7101adbbe4  cmp x12,x28
7101adbbe8  cset w12,eq
7101adbbec  and w11,w12,w11
7101adbbf0  cset w12,ne
7101adbbf4  orr w12,w12,w13
7101adbbf8  ldr x13,[x9]
7101adbbfc  and x15,x13,#-0x100000000000000
7101adbc00  and x14,x13,#0xffffffffff
7101adbc04  cmp x15,x28
7101adbc08  ccmp x14,#0x0,#0x4,eq
7101adbc0c  b.ne 0x7101adbc18
7101adbc10  tbz w12,#0x0,0x7101adbc28
7101adbc14  b 0x7101adbc38
7101adbc18  cbz w11,0x7101adbc28
7101adbc1c  eor x13,x10,x13
7101adbc20  tst x13,#0xffffffffff
7101adbc24  b.eq 0x7101adbc38
7101adbc28  add x9,x9,#0x8
7101adbc2c  cmp x8,x9
7101adbc30  b.ne 0x7101adbbf8
7101adbc34  mov x9,x8
7101adbc38  cmp x9,x8
7101adbc3c  b.ne 0x7101adbd88
7101adbc40  ldr x0,[x25]
7101adbc44  ldr x21,[x19, #0x130]
7101adbc48  mov w2,#0x2
7101adbc4c  mov w1,wzr
7101adbc50  bl 0x7103238a70
7101adbc54  tst x0,#0xffffffffff
7101adbc58  str x0,[sp, #0x90]
7101adbc5c  b.eq 0x7101adbc74
7101adbc60  ldr x0,[x21]
7101adbc64  ldrsw x2,[x0, #0x70]
7101adbc68  ldr w3,[x0, #0x68]
7101adbc6c  add x1,sp,#0x90
7101adbc70  bl 0x710323c4e0
7101adbc74  ldp x9,x8,[x19, #0x1e0]
7101adbc78  cmp x9,x8
7101adbc7c  b.eq 0x7101adbc98
7101adbc80  ldr x8,[x25]
7101adbc84  str x8,[x9]
7101adbc88  ldr x8,[x19, #0x1e0]
7101adbc8c  add x8,x8,#0x8
7101adbc90  str x8,[x19, #0x1e0]
7101adbc94  b 0x7101adbd88
7101adbc98  ldr x21,[x20]
7101adbc9c  sub x22,x9,x21
7101adbca0  asr x28,x22,#0x3
7101adbca4  add x9,x28,#0x1
7101adbca8  lsr x10,x9,#0x3d
7101adbcac  cbnz x10,0x7101adc800
7101adbcb0  sub x8,x8,x21
7101adbcb4  asr x10,x8,#0x3
7101adbcb8  orr x11,xzr,#0xffffffffffffffe
7101adbcbc  cmp x10,x11
7101adbcc0  b.hi 0x7101adbce0
7101adbcc4  asr x8,x8,#0x2
7101adbcc8  cmp x8,x9
7101adbccc  csel x27,x9,x8,cc
7101adbcd0  cbz x27,0x7101adbd44
7101adbcd4  lsr x8,x27,#0x3d
7101adbcd8  cbz x8,0x7101adbce4
7101adbcdc  b 0x7101adc7fc
7101adbce0  orr x27,xzr,#0x1fffffffffffffff
7101adbce4  lsl x8,x27,#0x3
7101adbce8  cmp x8,#0x0
7101adbcec  csinc x24,x8,xzr,ne
7101adbcf0  mov w0,#0x10
7101adbcf4  mov x1,x24
7101adbcf8  bl 0x710392e290
7101adbcfc  mov x23,x0
7101adbd00  cbnz x0,0x7101adbd48
7101adbd04  adrp x8,0x7105332000
7101adbd08  ldr x0,[x8, #0xf00]
7101adbd0c  cbz x0,0x7101adbd44
7101adbd10  stur wzr,[x29, #-0xa0]
7101adbd14  str x24,[sp, #0x90]
7101adbd18  ldr x8,[x0]
7101adbd1c  ldr x8,[x8, #0x30]
7101adbd20  sub x1,x29,#0xa0
7101adbd24  add x2,sp,#0x90
7101adbd28  blr x8
7101adbd2c  tbz w0,#0x0,0x7101adbd44
7101adbd30  mov w0,#0x10
7101adbd34  mov x1,x24
7101adbd38  bl 0x710392e290
7101adbd3c  mov x23,x0
7101adbd40  cbnz x0,0x7101adbd48
7101adbd44  mov x23,xzr
7101adbd48  ldr x8,[x25]
7101adbd4c  add x24,x23,x28, LSL #0x3
7101adbd50  add x27,x23,x27, LSL #0x3
7101adbd54  str x8,[x24], #0x8
7101adbd58  cmp x22,#0x1
7101adbd5c  b.lt 0x7101adbd70
7101adbd60  mov x0,x23
7101adbd64  mov x1,x21
7101adbd68  mov x2,x22
7101adbd6c  bl 0x71039c00e0
7101adbd70  mov x28,#-0x3f00000000000000
7101adbd74  stp x23,x24,[x19, #0x1d8]
7101adbd78  str x27,[x19, #0x1e8]
7101adbd7c  cbz x21,0x7101adbd88
7101adbd80  mov x0,x21
7101adbd84  bl 0x710392eb40
7101adbd88  add x25,x25,#0x8
7101adbd8c  cmp x25,x26
7101adbd90  b.ne 0x7101adbbc4
7101adbd94  ldrsw x23,[x19, #0x238]
7101adbd98  tbnz w23,#0x1f,0x7101adc75c
7101adbd9c  adrp x8,0x7105314000
7101adbda0  add x8,x8,#0x4d8
7101adbda4  ldarb w8,[x8]
7101adbda8  tbz w8,#0x0,0x7101adc7bc
7101adbdac  mov x0,x19
7101adbdb0  ldr x8,[x0, #0x10]!
7101adbdb4  ldr x9,[x0, #0x8]
7101adbdb8  cmp x9,x8
7101adbdbc  adrp x26,0x7105308000
7101adbdc0  b.eq 0x7101adc838
7101adbdc4  ldr x8,[x8]
7101adbdc8  ldr x8,[x8]
7101adbdcc  ldr x8,[x8]
7101adbdd0  add x20,x8,#0x8
7101adbdd4  adrp x1,0x710424e000
7101adbdd8  add x1,x1,#0xfe5
7101adbddc  add x8,sp,#0x70
7101adbde0  mov x0,x20
7101adbde4  bl 0x7103776910
7101adbde8  ldr w8,[x26, #0x300]
7101adbdec  cmp w8,#0x4
7101adbdf0  b.hi 0x7101adbedc
7101adbdf4  adrp x9,0x71044f8000
7101adbdf8  add x9,x9,#0x3b4
7101adbdfc  ldrsw x8,[x9, x8, LSL #0x2]
7101adbe00  add x8,x8,x9
7101adbe04  br x8
7101adbe08  ldp x8,x9,[x19, #0x1c0]
7101adbe0c  sub x9,x9,x8
7101adbe10  asr x9,x9,#0x3
7101adbe14  cmp x9,x23
7101adbe18  b.ls 0x7101adbedc
7101adbe1c  ldr x21,[x8, x23, LSL #0x3]
7101adbe20  and x8,x21,#-0x100000000000000
7101adbe24  mov w24,#0x9dc5
7101adbe28  movk w24,#0x811c, LSL #16
7101adbe2c  cmp x8,x28
7101adbe30  b.ne 0x7101adc250
7101adbe34  and x8,x21,#0xffffffffff
7101adbe38  cbz x8,0x7101adc250
7101adbe3c  adrp x8,0x710532f000
7101adbe40  ldr x8,[x8, #0x730]
7101adbe44  ldr x25,[x8, #0x8]
7101adbe48  ldr x0,[x25, #0x168]
7101adbe4c  mov x1,x21
7101adbe50  mov w2,wzr
7101adbe54  bl 0x7103263540
7101adbe58  ldr x1,[x25, #0x168]
7101adbe5c  mov w22,w0
7101adbe60  add x0,sp,#0x90
7101adbe64  mov x2,x21
7101adbe68  add x25,sp,#0x90
7101adbe6c  bl 0x7103262310
7101adbe70  add x2,x25,#0x8
7101adbe74  adrp x0,0x710439b000
7101adbe78  add x0,x0,#0x815
7101adbe7c  sub x8,x29,#0xa0
7101adbe80  mov w1,w22
7101adbe84  sub x21,x29,#0xa0
7101adbe88  bl 0x71003a4ca0
7101adbe8c  mov x8,xzr
7101adbe90  add x9,x21,#0x8
7101adbe94  b 0x7101adbeac
7101adbe98  mov x28,#-0x3f00000000000000
7101adbe9c  cbnz x20,0x7101adbb70
7101adbea0  b 0x7101adbb7c
7101adbea4  add x8,x8,#0x2
7101adbea8  strb w10,[x11, #0x1f9]
7101adbeac  add x10,x9,x8
7101adbeb0  ldrb w12,[x10]
7101adbeb4  cbz w12,0x7101adc354
7101adbeb8  add w13,w8,#0x1
7101adbebc  add x11,x19,x8
7101adbec0  cmp w13,#0x3f
7101adbec4  strb w12,[x11, #0x1f8]
7101adbec8  b.cs 0x7101adc350
7101adbecc  ldrb w10,[x10, #0x1]
7101adbed0  cbnz w10,0x7101adbea4
7101adbed4  add x8,x8,#0x1
7101adbed8  b 0x7101adc354
7101adbedc  mov w8,#0x9dc5
7101adbee0  movk w8,#0x811c, LSL #16
7101adbee4  strb wzr,[x19, #0x1f8]
7101adbee8  str x8,[x19, #0x1f0]
7101adbeec  ldr w8,[x26, #0x300]
7101adbef0  cbnz w8,0x7101adc6b8
7101adbef4  b 0x7101adc144
7101adbef8  cmp w23,#0x3
7101adbefc  b.gt 0x7101adc6b8
7101adbf00  ldr x8,[x19, #0x40]
7101adbf04  cbz x8,0x7101adc13c
7101adbf08  cmp w23,#0x3
7101adbf0c  b.hi 0x7101adc4ec
7101adbf10  and x8,x23,#0xffffffff
7101adbf14  adrp x9,0x71044f8000
7101adbf18  add x9,x9,#0x3c8
7101adbf1c  ldrsw x8,[x9, x8, LSL #0x2]
7101adbf20  add x8,x8,x9
7101adbf24  br x8
7101adbf28  mov x10,#0x6e6d
7101adbf2c  movk x10,#0x5f75, LSL #16
7101adbf30  mov x11,#0x6f6e
7101adbf34  movk x11,#0x6c77, LSL #16
7101adbf38  movk x10,#0x6d73, LSL #32
7101adbf3c  movk x10,#0x6b61, LSL #48
7101adbf40  movk x11,#0x6465, LSL #32
7101adbf44  movk x11,#0x6567, LSL #48
7101adbf48  mov w8,#0x9dc5
7101adbf4c  movk w8,#0x811c, LSL #16
7101adbf50  stp x10,x11,[x19, #0x1f8]
7101adbf54  mov w10,#0x6c5f
7101adbf58  strh w10,[x19, #0x208]
7101adbf5c  mov x11,#0x7369
7101adbf60  movk x11,#0x5f74, LSL #16
7101adbf64  add x10,x19,#0x20a
7101adbf68  movk x11,#0x6163, LSL #32
7101adbf6c  movk x11,#0x5f74, LSL #48
7101adbf70  str x11,[x10]
7101adbf74  strb wzr,[x19, #0x214]
7101adbf78  mov w10,#0x3030
7101adbf7c  strh w10,[x19, #0x212]
7101adbf80  orr w10,wzr,#0x1c
7101adbf84  add x9,x19,#0x1f9
7101adbf88  str w10,[x19, #0x1f4]
7101adbf8c  mov w11,#0x6d
7101adbf90  mov w10,#0x89
7101adbf94  mul w8,w8,w10
7101adbf98  and w11,w11,#0xff
7101adbf9c  eor w8,w8,w11
7101adbfa0  ldrb w11,[x9], #0x1
7101adbfa4  cbnz w11,0x7101adbf94
7101adbfa8  b 0x7101adc6ac
7101adbfac  cmp w23,#0x2
7101adbfb0  b.gt 0x7101adc6b8
7101adbfb4  ldr x8,[x19, #0x40]
7101adbfb8  cbz x8,0x7101adc13c
7101adbfbc  mov w8,#0x9dc5
7101adbfc0  movk w8,#0x811c, LSL #16
7101adbfc4  cbz w23,0x7101adc3d8
7101adbfc8  cmp w23,#0x1
7101adbfcc  b.eq 0x7101adc454
7101adbfd0  cmp w23,#0x2
7101adbfd4  b.ne 0x7101adc4f4
7101adbfd8  mov x9,#0x6e6d
7101adbfdc  movk x9,#0x5f75, LSL #16
7101adbfe0  mov x10,#0x6f6e
7101adbfe4  movk x10,#0x6c77, LSL #16
7101adbfe8  movk x9,#0x6d73, LSL #32
7101adbfec  movk x9,#0x6b61, LSL #48
7101adbff0  movk x10,#0x6465, LSL #32
7101adbff4  movk x10,#0x6567, LSL #48
7101adbff8  mov x11,#0x7369
7101adbffc  movk x11,#0x5f74, LSL #16
7101adc000  stp x9,x10,[x19, #0x1f8]
7101adc004  mov w10,#0x6c5f
7101adc008  strh w10,[x19, #0x208]
7101adc00c  add x10,x19,#0x20a
7101adc010  movk x11,#0x6163, LSL #32
7101adc014  movk x11,#0x5f74, LSL #48
7101adc018  str x11,[x10]
7101adc01c  add x10,x19,#0x212
7101adc020  mov w11,#0x7073
7101adc024  movk w11,#0x7269, LSL #16
7101adc028  str w11,[x10]
7101adc02c  strb wzr,[x19, #0x21c]
7101adc030  mov w10,#0x7469
7101adc034  strh w10,[x19, #0x216]
7101adc038  mov w10,#0x5f73
7101adc03c  movk w10,#0x3130, LSL #16
7101adc040  str w10,[x19, #0x218]
7101adc044  mov w10,#0x24
7101adc048  str w10,[x19, #0x1f4]
7101adc04c  add x9,x19,#0x1f9
7101adc050  mov w11,#0x6d
7101adc054  mov w10,#0x89
7101adc058  mul w8,w8,w10
7101adc05c  and w11,w11,#0xff
7101adc060  eor w8,w8,w11
7101adc064  ldrb w11,[x9], #0x1
7101adc068  cbnz w11,0x7101adc058
7101adc06c  b 0x7101adc6ac
7101adc070  adrp x8,0x710532f000
7101adc074  ldr x8,[x8, #0x8e0]
7101adc078  ldr x8,[x8, #0x8]
7101adc07c  ldr x9,[x8, #0x208]
7101adc080  ldr x8,[x8, #0x200]
7101adc084  sub x9,x9,x8
7101adc088  asr x9,x9,#0x3
7101adc08c  mov w21,#0x9dc5
7101adc090  movk w21,#0x811c, LSL #16
7101adc094  cmp x9,x23
7101adc098  b.ls 0x7101adc130
7101adc09c  ldr x2,[x8, x23, LSL #0x3]
7101adc0a0  and x8,x2,#-0x100000000000000
7101adc0a4  mov x9,#0x6900000000000000
7101adc0a8  cmp x8,x9
7101adc0ac  b.ne 0x7101adc130
7101adc0b0  and x8,x2,#0xffffffffff
7101adc0b4  cbz x8,0x7101adc130
7101adc0b8  adrp x8,0x710532f000
7101adc0bc  ldr x8,[x8, #0x730]
7101adc0c0  ldr x8,[x8, #0x8]
7101adc0c4  ldr x1,[x8, #0x178]
7101adc0c8  add x0,sp,#0x90
7101adc0cc  add x22,sp,#0x90
7101adc0d0  bl 0x71032b1a60
7101adc0d4  add x1,x22,#0x8
7101adc0d8  adrp x0,0x7104452000
7101adc0dc  add x0,x0,#0xf57
7101adc0e0  sub x8,x29,#0xa0
7101adc0e4  sub x22,x29,#0xa0
7101adc0e8  bl 0x71003a4ca0
7101adc0ec  mov x8,xzr
7101adc0f0  add x9,x22,#0x8
7101adc0f4  b 0x7101adc100
7101adc0f8  add x8,x8,#0x2
7101adc0fc  strb w10,[x11, #0x1f9]
7101adc100  add x10,x9,x8
7101adc104  ldrb w12,[x10]
7101adc108  cbz w12,0x7101adc398
7101adc10c  add w13,w8,#0x1
7101adc110  add x11,x19,x8
7101adc114  cmp w13,#0x3f
7101adc118  strb w12,[x11, #0x1f8]
7101adc11c  b.cs 0x7101adc394
7101adc120  ldrb w10,[x10, #0x1]
7101adc124  cbnz w10,0x7101adc0f8
7101adc128  add x8,x8,#0x1
7101adc12c  b 0x7101adc398
7101adc130  strb wzr,[x19, #0x1f8]
7101adc134  str wzr,[x19, #0x1f4]
7101adc138  str w21,[x19, #0x1f0]
7101adc13c  ldr w8,[x26, #0x300]
7101adc140  cbnz w8,0x7101adc6b8
7101adc144  ldp x8,x9,[x19, #0x1c0]
7101adc148  sub x9,x9,x8
7101adc14c  asr x9,x9,#0x3
7101adc150  cmp x9,x23
7101adc154  b.ls 0x7101adc6b8
7101adc158  adrp x9,0x710532f000
7101adc15c  ldr x9,[x9, #0x730]
7101adc160  ldr x9,[x9, #0x8]
7101adc164  ldr x21,[x8, x23, LSL #0x3]
7101adc168  ldr x22,[x9, #0x168]
7101adc16c  mov x1,#0x26b0
7101adc170  movk x1,#0xca41, LSL #16
7101adc174  movk x1,#0x14, LSL #32
7101adc178  mov x0,x22
7101adc17c  bl 0x71032631a0
7101adc180  tst x21,#0xffffffffff
7101adc184  and x9,x21,#-0x100000000000000
7101adc188  cset w8,ne
7101adc18c  cmp x9,x28
7101adc190  cset w10,eq
7101adc194  and w23,w10,w8
7101adc198  and x8,x0,#0xffffffffff
7101adc19c  tbz w23,#0x0,0x7101adc1d8
7101adc1a0  and x10,x0,#-0x100000000000000
7101adc1a4  cmp x10,x28
7101adc1a8  ccmp x8,#0x0,#0x4,eq
7101adc1ac  b.eq 0x7101adc1dc
7101adc1b0  eor x8,x0,x21
7101adc1b4  tst x8,#0xffffffffff
7101adc1b8  b.eq 0x7101adc6b8
7101adc1bc  mov x1,#0x98f0
7101adc1c0  movk x1,#0xd031, LSL #16
7101adc1c4  movk x1,#0xf, LSL #32
7101adc1c8  mov x0,x22
7101adc1cc  bl 0x71032631a0
7101adc1d0  and x8,x0,#0xffffffffff
7101adc1d4  b 0x7101adc230
7101adc1d8  and x10,x0,#-0x100000000000000
7101adc1dc  and x11,x21,#0xffffffffff
7101adc1e0  cmp x9,x28
7101adc1e4  cset w9,eq
7101adc1e8  cmp x11,#0x0
7101adc1ec  cset w11,ne
7101adc1f0  cmp x8,#0x0
7101adc1f4  cset w8,ne
7101adc1f8  cmp x10,x28
7101adc1fc  cset w10,eq
7101adc200  and w9,w9,w11
7101adc204  and w8,w8,w10
7101adc208  eor w8,w8,w9
7101adc20c  cmp w8,#0x1
7101adc210  b.ne 0x7101adc6b8
7101adc214  mov x1,#0x98f0
7101adc218  movk x1,#0xd031, LSL #16
7101adc21c  movk x1,#0xf, LSL #32
7101adc220  mov x0,x22
7101adc224  bl 0x71032631a0
7101adc228  and x8,x0,#0xffffffffff
7101adc22c  cbz w23,0x7101adc25c
7101adc230  and x9,x0,#-0x100000000000000
7101adc234  cmp x9,x28
7101adc238  b.ne 0x7101adc26c
7101adc23c  cbz x8,0x7101adc26c
7101adc240  eor x8,x0,x21
7101adc244  tst x8,#0xffffffffff
7101adc248  b.ne 0x7101adc26c
7101adc24c  b 0x7101adc6b8
7101adc250  strb wzr,[x19, #0x1f8]
7101adc254  str wzr,[x19, #0x1f4]
7101adc258  b 0x7101adc384
7101adc25c  and x9,x0,#-0x100000000000000
7101adc260  cmp x9,x28
7101adc264  b.ne 0x7101adc6b8
7101adc268  cbz x8,0x7101adc6b8
7101adc26c  ldr x0,[x19, #0x130]
7101adc270  mov w3,#0x2
7101adc274  mov x1,x21
7101adc278  mov w2,wzr
7101adc27c  bl 0x710323f330
7101adc280  ldr x21,[sp, #0x78]
7101adc284  mov x1,x0
7101adc288  mov x0,x21
7101adc28c  bl 0x7103778b80
7101adc290  adrp x1,0x71042d5000
7101adc294  add x1,x1,#0xdb4
7101adc298  add x8,sp,#0x90
7101adc29c  mov x0,x20
7101adc2a0  bl 0x7103776910
7101adc2a4  add x1,x19,#0x1f8
7101adc2a8  add x0,sp,#0x90
7101adc2ac  bl 0x710377a120
7101adc2b0  ldr x0,[sp, #0x98]
7101adc2b4  adrp x22,0x710523d000
7101adc2b8  add x22,x22,#0x9a8
7101adc2bc  stp x22,xzr,[sp, #0x90]
7101adc2c0  cbz x0,0x7101adc2c8
7101adc2c4  bl 0x710392eb40
7101adc2c8  adrp x1,0x7104412000
7101adc2cc  add x1,x1,#0x4ae
7101adc2d0  add x8,sp,#0x90
7101adc2d4  mov x0,x20
7101adc2d8  bl 0x7103776910
7101adc2dc  ldr x19,[sp, #0x98]
7101adc2e0  ldr x0,[x19, #0x10]
7101adc2e4  cbz x0,0x7101adc2fc
7101adc2e8  sub x1,x29,#0xa0
7101adc2ec  mov w2,wzr
7101adc2f0  mov w3,wzr
7101adc2f4  stur wzr,[x29, #-0xa0]
7101adc2f8  bl 0x71037a2270
7101adc2fc  stp x22,xzr,[sp, #0x90]
7101adc300  cbz x19,0x7101adc744
7101adc304  mov x0,x19
7101adc308  b 0x7101adc740
7101adc30c  mov x21,x8
7101adc310  cmp x8,x21
7101adc314  b.eq 0x7101ada3a0
7101adc318  sub x9,x8,x21
7101adc31c  add x1,x21,x9
7101adc320  orr x9,xzr,#-0x5555555555555556
7101adc324  subs x2,x8,x1
7101adc328  asr x8,x2,#0x4
7101adc32c  movk x9,#0xaaab
7101adc330  mul x22,x8,x9
7101adc334  b.eq 0x7101adc340
7101adc338  mov x0,x21
7101adc33c  bl 0x71039c00a0
7101adc340  orr w8,wzr,#0x30
7101adc344  madd x8,x22,x8,x21
7101adc348  str x8,[x19, #0x140]
7101adc34c  b 0x7101ada3a0
7101adc350  add w8,w8,#0x1
7101adc354  add x9,x19,#0x1f8
7101adc358  strb wzr,[x9, w8, UXTW ]
7101adc35c  ldrb w9,[x19, #0x1f8]
7101adc360  str w8,[x19, #0x1f4]
7101adc364  cbz w9,0x7101adc384
7101adc368  add x8,x19,#0x1f9
7101adc36c  mov w10,#0x89
7101adc370  mul w11,w24,w10
7101adc374  and w9,w9,#0xff
7101adc378  eor w24,w11,w9
7101adc37c  ldrb w9,[x8], #0x1
7101adc380  cbnz w9,0x7101adc370
7101adc384  str w24,[x19, #0x1f0]
7101adc388  ldr w8,[x26, #0x300]
7101adc38c  cbnz w8,0x7101adc6b8
7101adc390  b 0x7101adc144
7101adc394  add w8,w8,#0x1
7101adc398  add x9,x19,#0x1f8
7101adc39c  strb wzr,[x9, w8, UXTW ]
7101adc3a0  ldrb w9,[x19, #0x1f8]
7101adc3a4  str w8,[x19, #0x1f4]
7101adc3a8  cbz w9,0x7101adc3c8
7101adc3ac  add x8,x19,#0x1f9
7101adc3b0  mov w10,#0x89
7101adc3b4  mul w11,w21,w10
7101adc3b8  and w9,w9,#0xff
7101adc3bc  eor w21,w11,w9
7101adc3c0  ldrb w9,[x8], #0x1
7101adc3c4  cbnz w9,0x7101adc3b4
7101adc3c8  str w21,[x19, #0x1f0]
7101adc3cc  ldr w8,[x26, #0x300]
7101adc3d0  cbnz w8,0x7101adc6b8
7101adc3d4  b 0x7101adc144
7101adc3d8  mov x10,#0x6e6d
7101adc3dc  movk x10,#0x5f75, LSL #16
7101adc3e0  mov x11,#0x6f6e
7101adc3e4  movk x11,#0x6c77, LSL #16
7101adc3e8  movk x10,#0x6d73, LSL #32
7101adc3ec  movk x10,#0x6b61, LSL #48
7101adc3f0  movk x11,#0x6465, LSL #32
7101adc3f4  movk x11,#0x6567, LSL #48
7101adc3f8  add x9,x19,#0x1f9
7101adc3fc  stp x10,x11,[x19, #0x1f8]
7101adc400  mov w10,#0x6c5f
7101adc404  mov x11,#0x7369
7101adc408  movk x11,#0x5f74, LSL #16
7101adc40c  strh w10,[x19, #0x208]
7101adc410  add x10,x19,#0x20a
7101adc414  movk x11,#0x6163, LSL #32
7101adc418  movk x11,#0x5f74, LSL #48
7101adc41c  str x11,[x10]
7101adc420  strb wzr,[x19, #0x214]
7101adc424  mov w10,#0x3030
7101adc428  strh w10,[x19, #0x212]
7101adc42c  orr w10,wzr,#0x1c
7101adc430  str w10,[x19, #0x1f4]
7101adc434  mov w11,#0x6d
7101adc438  mov w10,#0x89
7101adc43c  mul w8,w8,w10
7101adc440  and w11,w11,#0xff
7101adc444  eor w8,w8,w11
7101adc448  ldrb w11,[x9], #0x1
7101adc44c  cbnz w11,0x7101adc43c
7101adc450  b 0x7101adc6ac
7101adc454  mov x9,#0x6e6d
7101adc458  movk x9,#0x5f75, LSL #16
7101adc45c  mov x10,#0x6f6e
7101adc460  movk x10,#0x6c77, LSL #16
7101adc464  movk x9,#0x6d73, LSL #32
7101adc468  movk x9,#0x6b61, LSL #48
7101adc46c  movk x10,#0x6465, LSL #32
7101adc470  movk x10,#0x6567, LSL #48
7101adc474  mov x11,#0x7369
7101adc478  movk x11,#0x5f74, LSL #16
7101adc47c  stp x9,x10,[x19, #0x1f8]
7101adc480  mov w10,#0x6c5f
7101adc484  strh w10,[x19, #0x208]
7101adc488  add x10,x19,#0x20a
7101adc48c  movk x11,#0x6163, LSL #32
7101adc490  movk x11,#0x5f74, LSL #48
7101adc494  str x11,[x10]
7101adc498  add x10,x19,#0x212
7101adc49c  mov w11,#0x7073
7101adc4a0  movk w11,#0x7269, LSL #16
7101adc4a4  str w11,[x10]
7101adc4a8  strb wzr,[x19, #0x21c]
7101adc4ac  mov w10,#0x7469
7101adc4b0  strh w10,[x19, #0x216]
7101adc4b4  mov w10,#0x5f73
7101adc4b8  movk w10,#0x3030, LSL #16
7101adc4bc  str w10,[x19, #0x218]
7101adc4c0  mov w10,#0x24
7101adc4c4  str w10,[x19, #0x1f4]
7101adc4c8  add x9,x19,#0x1f9
7101adc4cc  mov w11,#0x6d
7101adc4d0  mov w10,#0x89
7101adc4d4  mul w8,w8,w10
7101adc4d8  and w11,w11,#0xff
7101adc4dc  eor w8,w8,w11
7101adc4e0  ldrb w11,[x9], #0x1
7101adc4e4  cbnz w11,0x7101adc4d4
7101adc4e8  b 0x7101adc6ac
7101adc4ec  mov w8,#0x9dc5
7101adc4f0  movk w8,#0x811c, LSL #16
7101adc4f4  strb wzr,[x19, #0x1f8]
7101adc4f8  str wzr,[x19, #0x1f4]
7101adc4fc  b 0x7101adc6ac
7101adc500  mov x10,#0x6e6d
7101adc504  movk x10,#0x5f75, LSL #16
7101adc508  mov x11,#0x6f6e
7101adc50c  movk x11,#0x6c77, LSL #16
7101adc510  movk x10,#0x6d73, LSL #32
7101adc514  movk x10,#0x6b61, LSL #48
7101adc518  movk x11,#0x6465, LSL #32
7101adc51c  movk x11,#0x6567, LSL #48
7101adc520  mov w8,#0x9dc5
7101adc524  movk w8,#0x811c, LSL #16
7101adc528  stp x10,x11,[x19, #0x1f8]
7101adc52c  mov w10,#0x6c5f
7101adc530  strh w10,[x19, #0x208]
7101adc534  mov x11,#0x7369
7101adc538  movk x11,#0x5f74, LSL #16
7101adc53c  add x10,x19,#0x20a
7101adc540  movk x11,#0x6163, LSL #32
7101adc544  movk x11,#0x5f74, LSL #48
7101adc548  str x11,[x10]
7101adc54c  mov x11,#0x7469
7101adc550  movk x11,#0x6d65, LSL #16
7101adc554  add x10,x19,#0x212
7101adc558  movk x11,#0x305f, LSL #32
7101adc55c  movk x11,#0x31, LSL #48
7101adc560  str x11,[x10]
7101adc564  mov w10,#0x21
7101adc568  str w10,[x19, #0x1f4]
7101adc56c  add x9,x19,#0x1f9
7101adc570  mov w11,#0x6d
7101adc574  mov w10,#0x89
7101adc578  mul w8,w8,w10
7101adc57c  and w11,w11,#0xff
7101adc580  eor w8,w8,w11
7101adc584  ldrb w11,[x9], #0x1
7101adc588  cbnz w11,0x7101adc578
7101adc58c  b 0x7101adc6ac
7101adc590  mov x10,#0x6e6d
7101adc594  movk x10,#0x5f75, LSL #16
7101adc598  mov x11,#0x6f6e
7101adc59c  movk x11,#0x6c77, LSL #16
7101adc5a0  movk x10,#0x6d73, LSL #32
7101adc5a4  movk x10,#0x6b61, LSL #48
7101adc5a8  movk x11,#0x6465, LSL #32
7101adc5ac  movk x11,#0x6567, LSL #48
7101adc5b0  mov w8,#0x9dc5
7101adc5b4  movk w8,#0x811c, LSL #16
7101adc5b8  stp x10,x11,[x19, #0x1f8]
7101adc5bc  mov w10,#0x6c5f
7101adc5c0  strh w10,[x19, #0x208]
7101adc5c4  mov x11,#0x7369
7101adc5c8  movk x11,#0x5f74, LSL #16
7101adc5cc  add x10,x19,#0x20a
7101adc5d0  movk x11,#0x6163, LSL #32
7101adc5d4  movk x11,#0x5f74, LSL #48
7101adc5d8  str x11,[x10]
7101adc5dc  mov x11,#0x7469
7101adc5e0  movk x11,#0x6d65, LSL #16
7101adc5e4  add x10,x19,#0x212
7101adc5e8  movk x11,#0x305f, LSL #32
7101adc5ec  movk x11,#0x32, LSL #48
7101adc5f0  str x11,[x10]
7101adc5f4  mov w10,#0x21
7101adc5f8  str w10,[x19, #0x1f4]
7101adc5fc  add x9,x19,#0x1f9
7101adc600  mov w11,#0x6d
7101adc604  mov w10,#0x89
7101adc608  mul w8,w8,w10
7101adc60c  and w11,w11,#0xff
7101adc610  eor w8,w8,w11
7101adc614  ldrb w11,[x9], #0x1
7101adc618  cbnz w11,0x7101adc608
7101adc61c  b 0x7101adc6ac
7101adc620  mov x10,#0x6e6d
7101adc624  movk x10,#0x5f75, LSL #16
7101adc628  mov x11,#0x6f6e
7101adc62c  movk x11,#0x6c77, LSL #16
7101adc630  movk x10,#0x6d73, LSL #32
7101adc634  movk x10,#0x6b61, LSL #48
7101adc638  movk x11,#0x6465, LSL #32
7101adc63c  movk x11,#0x6567, LSL #48
7101adc640  mov w8,#0x9dc5
7101adc644  movk w8,#0x811c, LSL #16
7101adc648  stp x10,x11,[x19, #0x1f8]
7101adc64c  mov w10,#0x6c5f
7101adc650  strh w10,[x19, #0x208]
7101adc654  mov x11,#0x7369
7101adc658  movk x11,#0x5f74, LSL #16
7101adc65c  add x10,x19,#0x20a
7101adc660  movk x11,#0x6163, LSL #32
7101adc664  movk x11,#0x5f74, LSL #48
7101adc668  str x11,[x10]
7101adc66c  mov x11,#0x7469
7101adc670  movk x11,#0x6d65, LSL #16
7101adc674  add x10,x19,#0x212
7101adc678  movk x11,#0x305f, LSL #32
7101adc67c  movk x11,#0x33, LSL #48
7101adc680  str x11,[x10]
7101adc684  mov w10,#0x21
7101adc688  str w10,[x19, #0x1f4]
7101adc68c  add x9,x19,#0x1f9
7101adc690  mov w11,#0x6d
7101adc694  mov w10,#0x89
7101adc698  mul w8,w8,w10
7101adc69c  and w11,w11,#0xff
7101adc6a0  eor w8,w8,w11
7101adc6a4  ldrb w11,[x9], #0x1
7101adc6a8  cbnz w11,0x7101adc698
7101adc6ac  str w8,[x19, #0x1f0]
7101adc6b0  ldr w8,[x26, #0x300]
7101adc6b4  cbz w8,0x7101adc144
7101adc6b8  ldr x21,[sp, #0x78]
7101adc6bc  mov w1,#0x1
7101adc6c0  mov x0,x21
7101adc6c4  bl 0x71037790a0
7101adc6c8  adrp x1,0x71042d5000
7101adc6cc  add x1,x1,#0xdb4
7101adc6d0  add x8,sp,#0x90
7101adc6d4  mov x0,x20
7101adc6d8  bl 0x7103776910
7101adc6dc  ldr x22,[sp, #0x98]
7101adc6e0  ldr x0,[x22, #0x10]
7101adc6e4  cbz x0,0x7101adc6fc
7101adc6e8  sub x1,x29,#0xa0
7101adc6ec  mov w2,wzr
7101adc6f0  mov w3,wzr
7101adc6f4  stur wzr,[x29, #-0xa0]
7101adc6f8  bl 0x71037a2270
7101adc6fc  adrp x23,0x710523d000
7101adc700  add x23,x23,#0x9a8
7101adc704  stp x23,xzr,[sp, #0x90]
7101adc708  cbz x22,0x7101adc714
7101adc70c  mov x0,x22
7101adc710  bl 0x710392eb40
7101adc714  adrp x1,0x7104412000
7101adc718  add x1,x1,#0x4ae
7101adc71c  add x8,sp,#0x90
7101adc720  mov x0,x20
7101adc724  bl 0x7103776910
7101adc728  add x1,x19,#0x1f8
7101adc72c  add x0,sp,#0x90
7101adc730  bl 0x710377a120
7101adc734  ldr x0,[sp, #0x98]
7101adc738  stp x23,xzr,[sp, #0x90]
7101adc73c  cbz x0,0x7101adc744
7101adc740  bl 0x710392eb40
7101adc744  adrp x8,0x710523d000
7101adc748  add x8,x8,#0x9a8
7101adc74c  stp x8,xzr,[sp, #0x70]
7101adc750  cbz x21,0x7101adc75c
7101adc754  mov x0,x21
7101adc758  bl 0x710392eb40
7101adc75c  add sp,sp,#0x1f0
7101adc760  ldp x29,x30,[sp, #0x50]
7101adc764  ldp x20,x19,[sp, #0x40]
7101adc768  ldp x22,x21,[sp, #0x30]
7101adc76c  ldp x24,x23,[sp, #0x20]
7101adc770  ldp x26,x25,[sp, #0x10]
7101adc774  ldp x28,x27,[sp], #0x60
7101adc778  ret
7101adc77c  adrp x0,0x7105314000
7101adc780  add x0,x0,#0x4d8
7101adc784  bl 0x71039c06b0
7101adc788  cbz w0,0x7101ad9f14
7101adc78c  bl 0x7101764000
7101adc790  adrp x0,0x7101763000
7101adc794  add x0,x0,#0xc40
7101adc798  adrp x1,0x71052c5000
7101adc79c  add x1,x1,#0x180
7101adc7a0  adrp x2,0x7104f17000
7101adc7a4  add x2,x2,#0x0
7101adc7a8  bl 0x71000001c0
7101adc7ac  adrp x0,0x7105314000
7101adc7b0  add x0,x0,#0x4d8
7101adc7b4  bl 0x71039c06c0
7101adc7b8  b 0x7101ad9f14
7101adc7bc  adrp x0,0x7105314000
7101adc7c0  add x0,x0,#0x4d8
7101adc7c4  bl 0x71039c06b0
7101adc7c8  cbz w0,0x7101adbdac
7101adc7cc  bl 0x7101764000
7101adc7d0  adrp x0,0x7101763000
7101adc7d4  add x0,x0,#0xc40
7101adc7d8  adrp x1,0x71052c5000
7101adc7dc  add x1,x1,#0x180
7101adc7e0  adrp x2,0x7104f17000
7101adc7e4  add x2,x2,#0x0
7101adc7e8  bl 0x71000001c0
7101adc7ec  adrp x0,0x7105314000
7101adc7f0  add x0,x0,#0x4d8
7101adc7f4  bl 0x71039c06c0
7101adc7f8  b 0x7101adbdac
7101adc7fc  bl 0x71039c2650
7101adc800  mov x0,x20
7101adc804  bl 0x71039c0c00
7101adc808  ldr x0,[sp, #0x18]
7101adc80c  bl 0x71039c0c00
7101adc810  ldr x0,[sp, #0x20]
7101adc814  bl 0x71039c0c00
7101adc818  add x0,sp,#0x40
7101adc81c  bl 0x71039c0c00
7101adc820  add x0,sp,#0x58
7101adc824  bl 0x71039c0c00
7101adc828  add x0,sp,#0x28
7101adc82c  bl 0x71039c0c00
7101adc830  add x0,sp,#0x70
7101adc834  bl 0x71039c0c00
7101adc838  bl 0x71039c1330
