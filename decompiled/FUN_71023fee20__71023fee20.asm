// addr:      71023fee20
// offset:    0x23fee20
// name:      FUN_71023fee20
// mangled:   
// size:      10036

71023fee20  stp x28,x27,[sp, #-0x60]!
71023fee24  stp x26,x25,[sp, #0x10]
71023fee28  stp x24,x23,[sp, #0x20]
71023fee2c  stp x22,x21,[sp, #0x30]
71023fee30  stp x20,x19,[sp, #0x40]
71023fee34  stp x29,x30,[sp, #0x50]
71023fee38  add x29,sp,#0x50
71023fee3c  sub sp,sp,#0x260
71023fee40  ldrb w8,[x0, #0x99]
71023fee44  mov x22,x1
71023fee48  mov x25,x0
71023fee4c  cbz w8,0x71023fee58
71023fee50  mov x0,x25
71023fee54  bl 0x71023fe4a0
71023fee58  strb wzr,[x25, #0x99]
71023fee5c  adrp x8,0x710532f000
71023fee60  ldr x8,[x8, #0x730]
71023fee64  ldr x26,[x8, #0x8]
71023fee68  ldr x0,[x26, #0x168]
71023fee6c  mov x1,#0x23e6
71023fee70  movk x1,#0xe4b1, LSL #16
71023fee74  movk x1,#0x11, LSL #32
71023fee78  bl 0x71032631a0
71023fee7c  ldr x1,[x26, #0x288]
71023fee80  mov x19,x0
71023fee84  add x0,sp,#0x150
71023fee88  mov x2,x22
71023fee8c  bl 0x71032c1dd0
71023fee90  ldr x0,[x25]
71023fee94  cbz x0,0x71023feea8
71023fee98  str x0,[x25, #0x8]
71023fee9c  bl 0x710392eb40
71023feea0  stp xzr,xzr,[x25, #0x8]
71023feea4  str xzr,[x25]
71023feea8  ldp x8,x9,[sp, #0x150]
71023feeac  cmp x8,x9
71023feeb0  stp x8,x9,[x25]
71023feeb4  ldr x10,[sp, #0x160]
71023feeb8  str x10,[x25, #0x10]
71023feebc  b.eq 0x7102401534
71023feec0  ldr x0,[x26, #0x288]
71023feec4  mov x1,x22
71023feec8  str x19,[sp, #0x38]
71023feecc  bl 0x71032c4780
71023feed0  str x0,[x25, #0x90]
71023feed4  ldr x21,[x26, #0x288]
71023feed8  mov x23,x0
71023feedc  mov x0,x21
71023feee0  mov x1,x22
71023feee4  bl 0x71032ba9a0
71023feee8  ldr x9,[x21, #0x8]
71023feeec  ldr x8,[x9, #0x20]
71023feef0  ldrb w10,[x8]
71023feef4  cmp w10,#0xc
71023feef8  b.ne 0x71023fef7c
71023feefc  ldur w11,[x8, #0x1]
71023fef00  subs w12,w11,#0x1
71023fef04  b.lt 0x71023fef7c
71023fef08  ldr x11,[x21, #0x10]
71023fef0c  ldr x16,[x9, #0x18]
71023fef10  and x14,x11,#0xffffffffff
71023fef14  ldursw x11,[x8, #0x5]
71023fef18  ldp x15,x16,[x16, #0x20]
71023fef1c  mov w13,wzr
71023fef20  add x16,x16,x11
71023fef24  adrp x11,0x7104742000
71023fef28  add x11,x11,#0xdbb
71023fef2c  add w17,w12,w13
71023fef30  cmp w17,#0x0
71023fef34  cinc w17,w17,lt
71023fef38  asr w17,w17,#0x1
71023fef3c  add x18,x16,w17, SXTW  #0x3
71023fef40  ldr w1,[x18]
71023fef44  ldr x1,[x15, x1, LSL #0x3]
71023fef48  cmp x1,x14
71023fef4c  b.eq 0x71023fef6c
71023fef50  sub w18,w17,#0x1
71023fef54  cmp x1,x14
71023fef58  csel w12,w18,w12,hi
71023fef5c  csinc w13,w13,w17,hi
71023fef60  cmp w13,w12
71023fef64  b.le 0x71023fef2c
71023fef68  b 0x71023fef84
71023fef6c  ldrsw x11,[x18, #0x4]
71023fef70  tbnz w11,#0x1f,0x71023fef7c
71023fef74  add x11,x8,x11
71023fef78  b 0x71023fef84
71023fef7c  adrp x11,0x7104742000
71023fef80  add x11,x11,#0xdbb
71023fef84  ldrb w12,[x11]
71023fef88  sub w12,w12,#0xb
71023fef8c  cmp w12,#0x1
71023fef90  b.hi 0x71023ff020
71023fef94  ldur w11,[x11, #0x1]
71023fef98  cmp w11,w0
71023fef9c  b.ls 0x71023ff020
71023fefa0  cmp w10,#0xc
71023fefa4  b.ne 0x71023ff160
71023fefa8  ldur w10,[x8, #0x1]
71023fefac  subs w11,w10,#0x1
71023fefb0  b.lt 0x71023ff160
71023fefb4  ldr x10,[x21, #0x10]
71023fefb8  ldr x21,[sp, #0x38]
71023fefbc  and x13,x10,#0xffffffffff
71023fefc0  ldr x10,[x9, #0x18]
71023fefc4  ldursw x15,[x8, #0x5]
71023fefc8  mov w12,wzr
71023fefcc  ldp x14,x9,[x10, #0x20]
71023fefd0  add x15,x9,x15
71023fefd4  adrp x9,0x7104742000
71023fefd8  add x9,x9,#0xdbb
71023fefdc  add w16,w11,w12
71023fefe0  cmp w16,#0x0
71023fefe4  cinc w16,w16,lt
71023fefe8  asr w16,w16,#0x1
71023fefec  add x17,x15,w16, SXTW  #0x3
71023feff0  ldr w18,[x17]
71023feff4  ldr x18,[x14, x18, LSL #0x3]
71023feff8  cmp x18,x13
71023feffc  b.eq 0x71023ff640
71023ff000  sub w17,w16,#0x1
71023ff004  cmp x18,x13
71023ff008  csel w11,w17,w11,hi
71023ff00c  csinc w12,w12,w16,hi
71023ff010  cmp w12,w11
71023ff014  b.le 0x71023fefdc
71023ff018  mov x10,xzr
71023ff01c  b 0x71023ff170
71023ff020  ldr x21,[sp, #0x38]
71023ff024  mov w19,wzr
71023ff028  strb w19,[x25, #0x98]
71023ff02c  ldr x24,[x26, #0x168]
71023ff030  mov x0,x24
71023ff034  mov x1,x23
71023ff038  mov x20,#-0x3f00000000000000
71023ff03c  bl 0x71032638e0
71023ff040  tst x23,#0xffffffffff
71023ff044  and x8,x23,#-0x100000000000000
71023ff048  and x28,x21,#0xffffffffff
71023ff04c  cset w9,ne
71023ff050  cmp x8,x20
71023ff054  str x25,[sp, #0x30]
71023ff058  cset w10,eq
71023ff05c  mov x12,x20
71023ff060  and w20,w10,w9
71023ff064  mov w27,w0
71023ff068  cmp w20,#0x1
71023ff06c  b.ne 0x71023ff0fc
71023ff070  and x9,x21,#-0x100000000000000
71023ff074  cmp x9,x12
71023ff078  b.ne 0x71023ff08c
71023ff07c  cbz x28,0x71023ff08c
71023ff080  eor x9,x21,x23
71023ff084  tst x9,#0xffffffffff
71023ff088  b.eq 0x71023ff158
71023ff08c  ldr x11,[x25, #0x88]
71023ff090  and x10,x11,#-0x100000000000000
71023ff094  and x9,x11,#0xffffffffff
71023ff098  cmp x10,x12
71023ff09c  b.ne 0x71023ff11c
71023ff0a0  cbz x9,0x71023ff11c
71023ff0a4  eor x8,x11,x23
71023ff0a8  tst x8,#0xffffffffff
71023ff0ac  cset w8,eq
71023ff0b0  orr w8,w27,w8
71023ff0b4  tbnz w8,#0x0,0x71023ff158
71023ff0b8  mov x1,#0xb807
71023ff0bc  movk x1,#0xb1cc, LSL #16
71023ff0c0  movk x1,#0x11, LSL #32
71023ff0c4  mov x0,x24
71023ff0c8  bl 0x71032631a0
71023ff0cc  and x8,x0,#0xffffffffff
71023ff0d0  cbz w20,0x71023ff1ac
71023ff0d4  and x9,x0,#-0x100000000000000
71023ff0d8  mov x10,#-0x3f00000000000000
71023ff0dc  cmp x9,x10
71023ff0e0  b.ne 0x71023ff1c4
71023ff0e4  cbz x8,0x71023ff1c4
71023ff0e8  eor x8,x0,x23
71023ff0ec  tst x8,#0xffffffffff
71023ff0f0  b.ne 0x71023ff1c4
71023ff0f4  mov w22,#0x72
71023ff0f8  b 0x71023ff1e0
71023ff0fc  and x9,x21,#-0x100000000000000
71023ff100  mov w22,#0xffffffff
71023ff104  cmp x9,x12
71023ff108  b.ne 0x710240006c
71023ff10c  cbz x28,0x710240006c
71023ff110  ldr x10,[x25, #0x88]
71023ff114  and x9,x10,#0xffffffffff
71023ff118  and x10,x10,#-0x100000000000000
71023ff11c  and x11,x23,#0xffffffffff
71023ff120  cmp x8,x12
71023ff124  cset w8,eq
71023ff128  cmp x11,#0x0
71023ff12c  cset w11,ne
71023ff130  cmp x9,#0x0
71023ff134  cset w9,ne
71023ff138  cmp x10,x12
71023ff13c  cset w10,eq
71023ff140  and w8,w8,w11
71023ff144  and w9,w9,w10
71023ff148  eor w8,w9,w8
71023ff14c  eor w8,w8,#0x1
71023ff150  orr w8,w27,w8
71023ff154  tbz w8,#0x0,0x71023ff0b8
71023ff158  mov w22,#0xffffffff
71023ff15c  b 0x710240006c
71023ff160  ldr x21,[sp, #0x38]
71023ff164  mov x10,xzr
71023ff168  adrp x9,0x7104742000
71023ff16c  add x9,x9,#0xdbb
71023ff170  mov x11,xzr
71023ff174  adrp x8,0x7104742000
71023ff178  add x8,x8,#0xdbb
71023ff17c  tbnz w0,#0x1f,0x71023ff354
71023ff180  ldrb w12,[x9]
71023ff184  cmp w12,#0xb
71023ff188  b.ne 0x71023ff354
71023ff18c  ldur w8,[x9, #0x1]
71023ff190  cmp w8,w0
71023ff194  b.le 0x71023ff348
71023ff198  add x8,x9,w0, SXTW  #0x2
71023ff19c  ldursw x8,[x8, #0x5]
71023ff1a0  add x8,x9,x8
71023ff1a4  mov x11,x10
71023ff1a8  b 0x71023ff354
71023ff1ac  and x9,x0,#-0x100000000000000
71023ff1b0  mov x10,#-0x3f00000000000000
71023ff1b4  mov w22,#0x72
71023ff1b8  cmp x9,x10
71023ff1bc  b.ne 0x71023ff1e0
71023ff1c0  cbz x8,0x71023ff1e0
71023ff1c4  mov x0,x24
71023ff1c8  mov x1,x23
71023ff1cc  bl 0x71032626e0
71023ff1d0  mov w22,w0
71023ff1d4  cmn w0,#0x1
71023ff1d8  b.eq 0x7102400068
71023ff1dc  ldrb w19,[x25, #0x98]
71023ff1e0  and w3,w19,#0xff
71023ff1e4  mov w2,#0x9
71023ff1e8  add x0,sp,#0x150
71023ff1ec  mov w1,w22
71023ff1f0  bl 0x71017df5b0
71023ff1f4  add x0,sp,#0x48
71023ff1f8  add x1,sp,#0x150
71023ff1fc  bl 0x710353e8e0
71023ff200  ldr w0,[sp, #0x48]
71023ff204  bl 0x710353ea90
71023ff208  mov x23,x0
71023ff20c  orr w19,wzr,#0xffffff
71023ff210  cmp w23,w19
71023ff214  b.eq 0x71023ff228
71023ff218  adrp x8,0x7105332000
71023ff21c  ldr x0,[x8, #0xf20]
71023ff220  mov w1,w23
71023ff224  bl 0x7103540a00
71023ff228  ldr w1,[x25, #0x7c]
71023ff22c  cmp w1,w19
71023ff230  b.eq 0x71023ff240
71023ff234  adrp x8,0x7105332000
71023ff238  ldr x0,[x8, #0xf20]
71023ff23c  bl 0x7103540b10
71023ff240  orr w19,wzr,#0xffffff
71023ff244  cmp w23,w19
71023ff248  str w23,[x25, #0x7c]
71023ff24c  b.ne 0x71023ff258
71023ff250  strb wzr,[x25, #0x78]
71023ff254  b 0x71023ff57c
71023ff258  ldrb w3,[x25, #0x98]
71023ff25c  mov w8,#0x1
71023ff260  mov w2,#0xa
71023ff264  add x0,sp,#0x150
71023ff268  mov w1,w22
71023ff26c  strb w8,[x25, #0x78]
71023ff270  bl 0x71017df5b0
71023ff274  add x0,sp,#0x48
71023ff278  add x1,sp,#0x150
71023ff27c  bl 0x710353e8e0
71023ff280  ldr w0,[sp, #0x48]
71023ff284  bl 0x710353ea90
71023ff288  mov x23,x0
71023ff28c  cmp w23,w19
71023ff290  b.eq 0x71023ff2a4
71023ff294  adrp x8,0x7105332000
71023ff298  ldr x0,[x8, #0xf20]
71023ff29c  mov w1,w23
71023ff2a0  bl 0x7103540a00
71023ff2a4  ldr w1,[x25, #0x80]
71023ff2a8  orr w8,wzr,#0xffffff
71023ff2ac  cmp w1,w8
71023ff2b0  b.eq 0x71023ff2c0
71023ff2b4  adrp x8,0x7105332000
71023ff2b8  ldr x0,[x8, #0xf20]
71023ff2bc  bl 0x7103540b10
71023ff2c0  ldrb w3,[x25, #0x98]
71023ff2c4  mov w2,#0xb
71023ff2c8  add x0,sp,#0x150
71023ff2cc  mov w1,w22
71023ff2d0  str w23,[x25, #0x80]
71023ff2d4  add x20,sp,#0x150
71023ff2d8  bl 0x71017df5b0
71023ff2dc  adrp x19,0x7105332000
71023ff2e0  ldr x8,[x19, #0xf28]
71023ff2e4  ldrb w13,[sp, #0x150]
71023ff2e8  cbz w13,0x71023ff3d0
71023ff2ec  mov x9,xzr
71023ff2f0  orr x11,x20,#0x1
71023ff2f4  mov w10,#0xffffffff
71023ff2f8  orr x12,xzr,#0x100000000
71023ff2fc  adrp x14,0x7104754000
71023ff300  add x14,x14,#0x84
71023ff304  and w13,w13,#0xff
71023ff308  sub w15,w13,#0x41
71023ff30c  add w16,w13,#0x20
71023ff310  cmp w15,#0x1a
71023ff314  csel w13,w16,w13,cc
71023ff318  eor w13,w13,w10
71023ff31c  and w13,w13,#0xff
71023ff320  ldr w13,[x14, w13, UXTW #0x2]
71023ff324  eor w10,w13,w10, LSR #0x8
71023ff328  ldrb w13,[x11], #0x1
71023ff32c  add x9,x9,x12
71023ff330  cbnz w13,0x71023ff304
71023ff334  mvn w10,w10
71023ff338  and x9,x9,#0xff00000000
71023ff33c  orr x9,x9,x10
71023ff340  cbnz x9,0x71023ff3e0
71023ff344  b 0x71023ff460
71023ff348  mov x11,xzr
71023ff34c  adrp x8,0x7104742000
71023ff350  add x8,x8,#0xdbb
71023ff354  ldrb w9,[x8]
71023ff358  cmp w9,#0xc
71023ff35c  b.ne 0x71023ff670
71023ff360  ldur w9,[x8, #0x1]
71023ff364  subs w10,w9,#0x1
71023ff368  b.lt 0x71023ff670
71023ff36c  ldursw x9,[x8, #0x5]
71023ff370  ldp x13,x11,[x11, #0x20]
71023ff374  mov x14,#0x44dc
71023ff378  movk x14,#0xb581, LSL #16
71023ff37c  mov w12,wzr
71023ff380  add x11,x11,x9
71023ff384  movk x14,#0xb, LSL #32
71023ff388  adrp x9,0x7104742000
71023ff38c  add x9,x9,#0xdbb
71023ff390  add w15,w10,w12
71023ff394  cmp w15,#0x0
71023ff398  cinc w15,w15,lt
71023ff39c  asr w15,w15,#0x1
71023ff3a0  add x16,x11,w15, SXTW  #0x3
71023ff3a4  ldr w17,[x16]
71023ff3a8  ldr x17,[x13, x17, LSL #0x3]
71023ff3ac  cmp x17,x14
71023ff3b0  b.eq 0x71023ff660
71023ff3b4  sub w16,w15,#0x1
71023ff3b8  cmp x17,x14
71023ff3bc  csel w10,w16,w10,hi
71023ff3c0  csinc w12,w12,w15,hi
71023ff3c4  cmp w12,w10
71023ff3c8  b.le 0x71023ff390
71023ff3cc  b 0x71023ff678
71023ff3d0  mov x10,xzr
71023ff3d4  mov x9,xzr
71023ff3d8  orr x9,x9,x10
71023ff3dc  cbz x9,0x71023ff460
71023ff3e0  ldr x8,[x8, #0xd0]
71023ff3e4  ldr x8,[x8, #0x78]
71023ff3e8  ldr x8,[x8]
71023ff3ec  ldp x10,x8,[x8, #0x50]
71023ff3f0  ldr w11,[x10, #0x4]
71023ff3f4  udiv x12,x9,x11
71023ff3f8  msub x11,x12,x11,x9
71023ff3fc  add x10,x10,x11, LSL #0x3
71023ff400  ldp w12,w11,[x10, #0x8]
71023ff404  add x8,x8,x12, LSL #0x3
71023ff408  add x10,x8,x11, LSL #0x3
71023ff40c  cbz w11,0x71023ff440
71023ff410  cmp x11,#0x0
71023ff414  cinc x12,x11,lt
71023ff418  asr x12,x12,#0x1
71023ff41c  add x13,x8,x12, LSL #0x3
71023ff420  ldr x14,[x13], #0x8
71023ff424  and x14,x14,#0xffffffffff
71023ff428  mvn x15,x12
71023ff42c  add x11,x11,x15
71023ff430  cmp x14,x9
71023ff434  csel x11,x11,x12,cc
71023ff438  csel x8,x13,x8,cc
71023ff43c  cbnz x11,0x71023ff410
71023ff440  cmp x8,x10
71023ff444  b.eq 0x71023ff460
71023ff448  ldr x8,[x8]
71023ff44c  and x10,x8,#0xffffffffff
71023ff450  cmp x10,x9
71023ff454  orr x9,xzr,#-0x10000000001
71023ff458  ccmp x8,x9,#0x2,eq
71023ff45c  b.ls 0x71023ff468
71023ff460  strh wzr,[sp, #0x250]
71023ff464  strb wzr,[sp, #0x150]
71023ff468  add x0,sp,#0x48
71023ff46c  add x1,sp,#0x150
71023ff470  bl 0x710353e8e0
71023ff474  ldr w0,[sp, #0x48]
71023ff478  bl 0x710353ea90
71023ff47c  mov x23,x0
71023ff480  orr w20,wzr,#0xffffff
71023ff484  cmp w23,w20
71023ff488  b.eq 0x71023ff49c
71023ff48c  adrp x8,0x7105332000
71023ff490  ldr x0,[x8, #0xf20]
71023ff494  mov w1,w23
71023ff498  bl 0x7103540a00
71023ff49c  ldr w1,[x25, #0x84]
71023ff4a0  cmp w1,w20
71023ff4a4  b.eq 0x71023ff4b4
71023ff4a8  adrp x8,0x7105332000
71023ff4ac  ldr x0,[x8, #0xf20]
71023ff4b0  bl 0x7103540b10
71023ff4b4  ldrb w8,[x25, #0x78]
71023ff4b8  mov x12,#-0x3f00000000000000
71023ff4bc  str w23,[x25, #0x84]
71023ff4c0  cbz w8,0x71023ff580
71023ff4c4  ldr w23,[x25, #0x7c]
71023ff4c8  orr w20,wzr,#0xffffff
71023ff4cc  cmp w23,w20
71023ff4d0  b.eq 0x71023ff504
71023ff4d4  ldr x24,[x19, #0xf28]
71023ff4d8  ldr x25,[x24]
71023ff4dc  mov x0,x25
71023ff4e0  bl 0x71039c1a40
71023ff4e4  mov w2,#0x2
71023ff4e8  mov x0,x24
71023ff4ec  mov w1,w23
71023ff4f0  bl 0x71035465b0
71023ff4f4  mov x0,x25
71023ff4f8  ldr x25,[sp, #0x30]
71023ff4fc  bl 0x71039c1a50
71023ff500  mov x12,#-0x3f00000000000000
71023ff504  ldr w23,[x25, #0x80]
71023ff508  cmp w23,w20
71023ff50c  b.eq 0x71023ff540
71023ff510  ldr x24,[x19, #0xf28]
71023ff514  ldr x25,[x24]
71023ff518  mov x0,x25
71023ff51c  bl 0x71039c1a40
71023ff520  mov w2,#0x2
71023ff524  mov x0,x24
71023ff528  mov w1,w23
71023ff52c  bl 0x71035465b0
71023ff530  mov x0,x25
71023ff534  ldr x25,[sp, #0x30]
71023ff538  bl 0x71039c1a50
71023ff53c  mov x12,#-0x3f00000000000000
71023ff540  ldr w23,[x25, #0x84]
71023ff544  orr w8,wzr,#0xffffff
71023ff548  cmp w23,w8
71023ff54c  b.eq 0x71023ff580
71023ff550  ldr x24,[x19, #0xf28]
71023ff554  ldr x25,[x24]
71023ff558  mov x0,x25
71023ff55c  bl 0x71039c1a40
71023ff560  mov w2,#0x2
71023ff564  mov x0,x24
71023ff568  mov w1,w23
71023ff56c  bl 0x71035465b0
71023ff570  mov x0,x25
71023ff574  ldr x25,[sp, #0x30]
71023ff578  bl 0x71039c1a50
71023ff57c  mov x12,#-0x3f00000000000000
71023ff580  cmp w22,#0x52
71023ff584  b.eq 0x71023ff5e8
71023ff588  cmp w22,#0x2b
71023ff58c  b.ne 0x710240006c
71023ff590  ldrb w3,[x25, #0x98]
71023ff594  mov w8,#0x1
71023ff598  adrp x1,0x7104339000
71023ff59c  add x1,x1,#0x9b8
71023ff5a0  adrp x2,0x7104306000
71023ff5a4  add x2,x2,#0x7ad
71023ff5a8  add x0,sp,#0x150
71023ff5ac  strb w8,[x25, #0x9b]
71023ff5b0  strh wzr,[sp, #0x250]
71023ff5b4  strb wzr,[sp, #0x150]
71023ff5b8  bl 0x710147f330
71023ff5bc  ldrh w11,[sp, #0x250]
71023ff5c0  strb wzr,[sp, #0x48]
71023ff5c4  strh wzr,[sp, #0x148]
71023ff5c8  cbz x11,0x71023ff6c4
71023ff5cc  and x8,x11,#0x1
71023ff5d0  cmp w11,#0x1
71023ff5d4  b.ne 0x71023ff6d4
71023ff5d8  mov w9,wzr
71023ff5dc  add x10,sp,#0x150
71023ff5e0  cbnz x8,0x71023ff720
71023ff5e4  b 0x71023ff738
71023ff5e8  ldrb w3,[x25, #0x98]
71023ff5ec  mov w8,#0x1
71023ff5f0  adrp x1,0x710426f000
71023ff5f4  add x1,x1,#0x78c
71023ff5f8  adrp x2,0x710427f000
71023ff5fc  add x2,x2,#0xfdb
71023ff600  add x0,sp,#0x150
71023ff604  strb w8,[x25, #0x9b]
71023ff608  strh wzr,[sp, #0x250]
71023ff60c  strb wzr,[sp, #0x150]
71023ff610  bl 0x710147f330
71023ff614  ldrh w11,[sp, #0x250]
71023ff618  strb wzr,[sp, #0x48]
71023ff61c  strh wzr,[sp, #0x148]
71023ff620  cbz x11,0x71023ff6cc
71023ff624  and x8,x11,#0x1
71023ff628  cmp w11,#0x1
71023ff62c  b.ne 0x71023ff7c8
71023ff630  mov w9,wzr
71023ff634  add x10,sp,#0x150
71023ff638  cbnz x8,0x71023ff814
71023ff63c  b 0x71023ff82c
71023ff640  ldrsw x9,[x17, #0x4]
71023ff644  adrp x11,0x7104742000
71023ff648  add x11,x11,#0xdbb
71023ff64c  add x8,x8,x9
71023ff650  tst w9,#0x80000000
71023ff654  csel x10,xzr,x10,ne
71023ff658  csel x9,x11,x8,ne
71023ff65c  b 0x71023ff170
71023ff660  ldrsw x9,[x16, #0x4]
71023ff664  tbnz w9,#0x1f,0x71023ff670
71023ff668  add x9,x8,x9
71023ff66c  b 0x71023ff678
71023ff670  adrp x9,0x7104742000
71023ff674  add x9,x9,#0xdbb
71023ff678  ldrb w8,[x9]
71023ff67c  sub w8,w8,#0x1
71023ff680  cmp w8,#0x6
71023ff684  b.hi 0x71023ff024
71023ff688  adrp x10,0x71044fe000
71023ff68c  add x10,x10,#0x80c
71023ff690  ldrsw x8,[x10, x8, LSL #0x2]
71023ff694  add x8,x8,x10
71023ff698  br x8
71023ff69c  ldrb w19,[x9, #0x1]
71023ff6a0  b 0x71023ff028
71023ff6a4  ldur w19,[x9, #0x1]
71023ff6a8  b 0x71023ff028
71023ff6ac  ldrsb w19,[x9, #0x1]
71023ff6b0  b 0x71023ff028
71023ff6b4  ldursh w19,[x9, #0x1]
71023ff6b8  b 0x71023ff028
71023ff6bc  ldurh w19,[x9, #0x1]
71023ff6c0  b 0x71023ff028
71023ff6c4  add x8,sp,#0x48
71023ff6c8  b 0x71023ff740
71023ff6cc  add x8,sp,#0x48
71023ff6d0  b 0x71023ff834
71023ff6d4  mov w9,wzr
71023ff6d8  add x10,sp,#0x150
71023ff6dc  sub x11,x8,x11
71023ff6e0  add x12,sp,#0x48
71023ff6e4  ldrb w13,[x10]
71023ff6e8  add w14,w9,#0x1
71023ff6ec  and x9,x9,#0xffff
71023ff6f0  strh w14,[sp, #0x148]
71023ff6f4  strb w13,[x12, x9, LSL ]
71023ff6f8  ldrh w9,[sp, #0x148]
71023ff6fc  ldrb w13,[x10, #0x1]
71023ff700  add x10,x10,#0x2
71023ff704  add w14,w9,#0x1
71023ff708  strh w14,[sp, #0x148]
71023ff70c  adds x11,x11,#0x2
71023ff710  strb w13,[x12, x9, LSL ]
71023ff714  ldrh w9,[sp, #0x148]
71023ff718  b.ne 0x71023ff6e4
71023ff71c  cbz x8,0x71023ff738
71023ff720  ldrb w8,[x10]
71023ff724  add w10,w9,#0x1
71023ff728  strh w10,[sp, #0x148]
71023ff72c  add x10,sp,#0x48
71023ff730  strb w8,[x10, w9, UXTW ]
71023ff734  ldrh w9,[sp, #0x148]
71023ff738  add x8,sp,#0x48
71023ff73c  add x8,x8,w9, UXTH 
71023ff740  add x0,sp,#0x40
71023ff744  add x1,sp,#0x48
71023ff748  strb wzr,[x8]
71023ff74c  bl 0x710353e8e0
71023ff750  ldr w0,[sp, #0x40]
71023ff754  bl 0x710353ea90
71023ff758  mov x22,x0
71023ff75c  orr w8,wzr,#0xffffff
71023ff760  cmp w22,w8
71023ff764  b.eq 0x71023fff10
71023ff768  adrp x19,0x7105332000
71023ff76c  ldr x0,[x19, #0xf20]
71023ff770  mov w1,w22
71023ff774  bl 0x7103540a00
71023ff778  ldrb w3,[x25, #0x98]
71023ff77c  adrp x1,0x71043df000
71023ff780  add x1,x1,#0x871
71023ff784  adrp x2,0x7104306000
71023ff788  add x2,x2,#0x7ad
71023ff78c  add x0,sp,#0x150
71023ff790  strh wzr,[sp, #0x250]
71023ff794  strb wzr,[sp, #0x150]
71023ff798  bl 0x710147f330
71023ff79c  ldrh w11,[sp, #0x250]
71023ff7a0  strb wzr,[sp, #0x48]
71023ff7a4  strh wzr,[sp, #0x148]
71023ff7a8  cbz x11,0x71023ff8bc
71023ff7ac  and x8,x11,#0x1
71023ff7b0  cmp w11,#0x1
71023ff7b4  b.ne 0x71023ff8cc
71023ff7b8  mov w9,wzr
71023ff7bc  add x10,sp,#0x150
71023ff7c0  cbnz x8,0x71023ff918
71023ff7c4  b 0x71023ff930
71023ff7c8  mov w9,wzr
71023ff7cc  add x10,sp,#0x150
71023ff7d0  sub x11,x8,x11
71023ff7d4  add x12,sp,#0x48
71023ff7d8  ldrb w13,[x10]
71023ff7dc  add w14,w9,#0x1
71023ff7e0  and x9,x9,#0xffff
71023ff7e4  strh w14,[sp, #0x148]
71023ff7e8  strb w13,[x12, x9, LSL ]
71023ff7ec  ldrh w9,[sp, #0x148]
71023ff7f0  ldrb w13,[x10, #0x1]
71023ff7f4  add x10,x10,#0x2
71023ff7f8  add w14,w9,#0x1
71023ff7fc  strh w14,[sp, #0x148]
71023ff800  adds x11,x11,#0x2
71023ff804  strb w13,[x12, x9, LSL ]
71023ff808  ldrh w9,[sp, #0x148]
71023ff80c  b.ne 0x71023ff7d8
71023ff810  cbz x8,0x71023ff82c
71023ff814  ldrb w8,[x10]
71023ff818  add w10,w9,#0x1
71023ff81c  strh w10,[sp, #0x148]
71023ff820  add x10,sp,#0x48
71023ff824  strb w8,[x10, w9, UXTW ]
71023ff828  ldrh w9,[sp, #0x148]
71023ff82c  add x8,sp,#0x48
71023ff830  add x8,x8,w9, UXTH 
71023ff834  add x0,sp,#0x40
71023ff838  add x1,sp,#0x48
71023ff83c  strb wzr,[x8]
71023ff840  bl 0x710353e8e0
71023ff844  ldr w0,[sp, #0x40]
71023ff848  bl 0x710353ea90
71023ff84c  mov x22,x0
71023ff850  orr w8,wzr,#0xffffff
71023ff854  cmp w22,w8
71023ff858  b.eq 0x7102400064
71023ff85c  adrp x19,0x7105332000
71023ff860  ldr x0,[x19, #0xf20]
71023ff864  mov w1,w22
71023ff868  bl 0x7103540a00
71023ff86c  ldrb w3,[x25, #0x98]
71023ff870  adrp x1,0x710426f000
71023ff874  add x1,x1,#0x7c1
71023ff878  adrp x2,0x710427f000
71023ff87c  add x2,x2,#0xfdb
71023ff880  add x0,sp,#0x150
71023ff884  strh wzr,[sp, #0x250]
71023ff888  strb wzr,[sp, #0x150]
71023ff88c  bl 0x710147f330
71023ff890  ldrh w11,[sp, #0x250]
71023ff894  strb wzr,[sp, #0x48]
71023ff898  strh wzr,[sp, #0x148]
71023ff89c  cbz x11,0x71023ff8c4
71023ff8a0  and x8,x11,#0x1
71023ff8a4  cmp w11,#0x1
71023ff8a8  b.ne 0x71023ff9c4
71023ff8ac  mov w9,wzr
71023ff8b0  add x10,sp,#0x150
71023ff8b4  cbnz x8,0x71023ffa10
71023ff8b8  b 0x71023ffa28
71023ff8bc  add x8,sp,#0x48
71023ff8c0  b 0x71023ff938
71023ff8c4  add x8,sp,#0x48
71023ff8c8  b 0x71023ffa30
71023ff8cc  mov w9,wzr
71023ff8d0  add x10,sp,#0x150
71023ff8d4  sub x11,x8,x11
71023ff8d8  add x12,sp,#0x48
71023ff8dc  ldrb w13,[x10]
71023ff8e0  add w14,w9,#0x1
71023ff8e4  and x9,x9,#0xffff
71023ff8e8  strh w14,[sp, #0x148]
71023ff8ec  strb w13,[x12, x9, LSL ]
71023ff8f0  ldrh w9,[sp, #0x148]
71023ff8f4  ldrb w13,[x10, #0x1]
71023ff8f8  add x10,x10,#0x2
71023ff8fc  add w14,w9,#0x1
71023ff900  strh w14,[sp, #0x148]
71023ff904  adds x11,x11,#0x2
71023ff908  strb w13,[x12, x9, LSL ]
71023ff90c  ldrh w9,[sp, #0x148]
71023ff910  b.ne 0x71023ff8dc
71023ff914  cbz x8,0x71023ff930
71023ff918  ldrb w8,[x10]
71023ff91c  add w10,w9,#0x1
71023ff920  strh w10,[sp, #0x148]
71023ff924  add x10,sp,#0x48
71023ff928  strb w8,[x10, w9, UXTW ]
71023ff92c  ldrh w9,[sp, #0x148]
71023ff930  add x8,sp,#0x48
71023ff934  add x8,x8,w9, UXTH 
71023ff938  add x0,sp,#0x150
71023ff93c  add x1,sp,#0x48
71023ff940  strb wzr,[x8]
71023ff944  bl 0x710353e8e0
71023ff948  ldr w0,[sp, #0x150]
71023ff94c  bl 0x710353ea90
71023ff950  orr w8,wzr,#0xffffff
71023ff954  cmp w0,w8
71023ff958  str x0,[sp, #0x28]
71023ff95c  b.eq 0x71023ff96c
71023ff960  ldr x0,[x19, #0xf20]
71023ff964  ldr x1,[sp, #0x28]
71023ff968  bl 0x7103540a00
71023ff96c  ldrb w3,[x25, #0x98]
71023ff970  adrp x1,0x7104280000
71023ff974  add x1,x1,#0x152
71023ff978  adrp x2,0x7104306000
71023ff97c  add x2,x2,#0x7ad
71023ff980  add x0,sp,#0x150
71023ff984  strh wzr,[sp, #0x250]
71023ff988  strb wzr,[sp, #0x150]
71023ff98c  bl 0x710147f330
71023ff990  ldrh w11,[sp, #0x250]
71023ff994  strb wzr,[sp, #0x48]
71023ff998  strh wzr,[sp, #0x148]
71023ff99c  cbz x11,0x71023ff9bc
71023ff9a0  and x8,x11,#0x1
71023ff9a4  cmp w11,#0x1
71023ff9a8  b.ne 0x71023ffabc
71023ff9ac  mov w9,wzr
71023ff9b0  add x10,sp,#0x150
71023ff9b4  cbnz x8,0x71023ffb08
71023ff9b8  b 0x71023ffb20
71023ff9bc  add x8,sp,#0x48
71023ff9c0  b 0x71023ffb28
71023ff9c4  mov w9,wzr
71023ff9c8  add x10,sp,#0x150
71023ff9cc  sub x11,x8,x11
71023ff9d0  add x12,sp,#0x48
71023ff9d4  ldrb w13,[x10]
71023ff9d8  add w14,w9,#0x1
71023ff9dc  and x9,x9,#0xffff
71023ff9e0  strh w14,[sp, #0x148]
71023ff9e4  strb w13,[x12, x9, LSL ]
71023ff9e8  ldrh w9,[sp, #0x148]
71023ff9ec  ldrb w13,[x10, #0x1]
71023ff9f0  add x10,x10,#0x2
71023ff9f4  add w14,w9,#0x1
71023ff9f8  strh w14,[sp, #0x148]
71023ff9fc  adds x11,x11,#0x2
71023ffa00  strb w13,[x12, x9, LSL ]
71023ffa04  ldrh w9,[sp, #0x148]
71023ffa08  b.ne 0x71023ff9d4
71023ffa0c  cbz x8,0x71023ffa28
71023ffa10  ldrb w8,[x10]
71023ffa14  add w10,w9,#0x1
71023ffa18  strh w10,[sp, #0x148]
71023ffa1c  add x10,sp,#0x48
71023ffa20  strb w8,[x10, w9, UXTW ]
71023ffa24  ldrh w9,[sp, #0x148]
71023ffa28  add x8,sp,#0x48
71023ffa2c  add x8,x8,w9, UXTH 
71023ffa30  add x0,sp,#0x150
71023ffa34  add x1,sp,#0x48
71023ffa38  strb wzr,[x8]
71023ffa3c  bl 0x710353e8e0
71023ffa40  ldr w0,[sp, #0x150]
71023ffa44  bl 0x710353ea90
71023ffa48  orr w8,wzr,#0xffffff
71023ffa4c  cmp w0,w8
71023ffa50  str x0,[sp, #0x28]
71023ffa54  b.eq 0x71023ffa64
71023ffa58  ldr x0,[x19, #0xf20]
71023ffa5c  ldr x1,[sp, #0x28]
71023ffa60  bl 0x7103540a00
71023ffa64  ldrb w3,[x25, #0x98]
71023ffa68  adrp x1,0x71042c4000
71023ffa6c  add x1,x1,#0x591
71023ffa70  adrp x2,0x710427f000
71023ffa74  add x2,x2,#0xfdb
71023ffa78  add x0,sp,#0x150
71023ffa7c  strh wzr,[sp, #0x250]
71023ffa80  strb wzr,[sp, #0x150]
71023ffa84  bl 0x710147f330
71023ffa88  ldrh w11,[sp, #0x250]
71023ffa8c  strb wzr,[sp, #0x48]
71023ffa90  strh wzr,[sp, #0x148]
71023ffa94  cbz x11,0x71023ffab4
71023ffa98  and x8,x11,#0x1
71023ffa9c  cmp w11,#0x1
71023ffaa0  b.ne 0x71023ffc40
71023ffaa4  mov w9,wzr
71023ffaa8  add x10,sp,#0x150
71023ffaac  cbnz x8,0x71023ffc8c
71023ffab0  b 0x71023ffca4
71023ffab4  add x8,sp,#0x48
71023ffab8  b 0x71023ffcac
71023ffabc  mov w9,wzr
71023ffac0  add x10,sp,#0x150
71023ffac4  sub x11,x8,x11
71023ffac8  add x12,sp,#0x48
71023ffacc  ldrb w13,[x10]
71023ffad0  add w14,w9,#0x1
71023ffad4  and x9,x9,#0xffff
71023ffad8  strh w14,[sp, #0x148]
71023ffadc  strb w13,[x12, x9, LSL ]
71023ffae0  ldrh w9,[sp, #0x148]
71023ffae4  ldrb w13,[x10, #0x1]
71023ffae8  add x10,x10,#0x2
71023ffaec  add w14,w9,#0x1
71023ffaf0  strh w14,[sp, #0x148]
71023ffaf4  adds x11,x11,#0x2
71023ffaf8  strb w13,[x12, x9, LSL ]
71023ffafc  ldrh w9,[sp, #0x148]
71023ffb00  b.ne 0x71023ffacc
71023ffb04  cbz x8,0x71023ffb20
71023ffb08  ldrb w8,[x10]
71023ffb0c  add w10,w9,#0x1
71023ffb10  strh w10,[sp, #0x148]
71023ffb14  add x10,sp,#0x48
71023ffb18  strb w8,[x10, w9, UXTW ]
71023ffb1c  ldrh w9,[sp, #0x148]
71023ffb20  add x8,sp,#0x48
71023ffb24  add x8,x8,w9, UXTH 
71023ffb28  strb wzr,[x8]
71023ffb2c  adrp x25,0x7105332000
71023ffb30  ldr x8,[x25, #0xf28]
71023ffb34  ldrb w12,[sp, #0x48]
71023ffb38  cbz w12,0x71023ffb9c
71023ffb3c  add x11,sp,#0x48
71023ffb40  mov x9,xzr
71023ffb44  mov w10,#0xffffffff
71023ffb48  orr x11,x11,#0x1
71023ffb4c  orr x13,xzr,#0x100000000
71023ffb50  adrp x14,0x7104754000
71023ffb54  add x14,x14,#0x84
71023ffb58  and w12,w12,#0xff
71023ffb5c  sub w15,w12,#0x41
71023ffb60  add w16,w12,#0x20
71023ffb64  cmp w15,#0x1a
71023ffb68  csel w12,w16,w12,cc
71023ffb6c  eor w12,w12,w10
71023ffb70  and w12,w12,#0xff
71023ffb74  ldr w12,[x14, w12, UXTW #0x2]
71023ffb78  eor w10,w12,w10, LSR #0x8
71023ffb7c  ldrb w12,[x11], #0x1
71023ffb80  add x9,x9,x13
71023ffb84  cbnz w12,0x71023ffb58
71023ffb88  mvn w10,w10
71023ffb8c  and x9,x9,#0xff00000000
71023ffb90  orr x9,x9,x10
71023ffb94  cbnz x9,0x71023ffbac
71023ffb98  b 0x71023ffc2c
71023ffb9c  mov x10,xzr
71023ffba0  mov x9,xzr
71023ffba4  orr x9,x9,x10
71023ffba8  cbz x9,0x71023ffc2c
71023ffbac  ldr x8,[x8, #0xd0]
71023ffbb0  ldr x8,[x8, #0x78]
71023ffbb4  ldr x8,[x8]
71023ffbb8  ldp x10,x8,[x8, #0x50]
71023ffbbc  ldr w11,[x10, #0x4]
71023ffbc0  udiv x12,x9,x11
71023ffbc4  msub x11,x12,x11,x9
71023ffbc8  add x10,x10,x11, LSL #0x3
71023ffbcc  ldp w12,w11,[x10, #0x8]
71023ffbd0  add x8,x8,x12, LSL #0x3
71023ffbd4  add x10,x8,x11, LSL #0x3
71023ffbd8  cbz w11,0x71023ffc0c
71023ffbdc  cmp x11,#0x0
71023ffbe0  cinc x12,x11,lt
71023ffbe4  asr x12,x12,#0x1
71023ffbe8  add x13,x8,x12, LSL #0x3
71023ffbec  ldr x14,[x13], #0x8
71023ffbf0  and x14,x14,#0xffffffffff
71023ffbf4  mvn x15,x12
71023ffbf8  add x11,x11,x15
71023ffbfc  cmp x14,x9
71023ffc00  csel x11,x11,x12,cc
71023ffc04  csel x8,x13,x8,cc
71023ffc08  cbnz x11,0x71023ffbdc
71023ffc0c  cmp x8,x10
71023ffc10  b.eq 0x71023ffc2c
71023ffc14  ldr x8,[x8]
71023ffc18  and x10,x8,#0xffffffffff
71023ffc1c  cmp x10,x9
71023ffc20  orr x9,xzr,#-0x10000000001
71023ffc24  ccmp x8,x9,#0x2,eq
71023ffc28  b.ls 0x71023ffdc4
71023ffc2c  add x0,sp,#0x40
71023ffc30  add x1,sp,#0x150
71023ffc34  strh wzr,[sp, #0x250]
71023ffc38  strb wzr,[sp, #0x150]
71023ffc3c  b 0x71023ffdcc
71023ffc40  mov w9,wzr
71023ffc44  add x10,sp,#0x150
71023ffc48  sub x11,x8,x11
71023ffc4c  add x12,sp,#0x48
71023ffc50  ldrb w13,[x10]
71023ffc54  add w14,w9,#0x1
71023ffc58  and x9,x9,#0xffff
71023ffc5c  strh w14,[sp, #0x148]
71023ffc60  strb w13,[x12, x9, LSL ]
71023ffc64  ldrh w9,[sp, #0x148]
71023ffc68  ldrb w13,[x10, #0x1]
71023ffc6c  add x10,x10,#0x2
71023ffc70  add w14,w9,#0x1
71023ffc74  strh w14,[sp, #0x148]
71023ffc78  adds x11,x11,#0x2
71023ffc7c  strb w13,[x12, x9, LSL ]
71023ffc80  ldrh w9,[sp, #0x148]
71023ffc84  b.ne 0x71023ffc50
71023ffc88  cbz x8,0x71023ffca4
71023ffc8c  ldrb w8,[x10]
71023ffc90  add w10,w9,#0x1
71023ffc94  strh w10,[sp, #0x148]
71023ffc98  add x10,sp,#0x48
71023ffc9c  strb w8,[x10, w9, UXTW ]
71023ffca0  ldrh w9,[sp, #0x148]
71023ffca4  add x8,sp,#0x48
71023ffca8  add x8,x8,w9, UXTH 
71023ffcac  strb wzr,[x8]
71023ffcb0  adrp x25,0x7105332000
71023ffcb4  ldr x8,[x25, #0xf28]
71023ffcb8  ldrb w12,[sp, #0x48]
71023ffcbc  cbz w12,0x71023ffd20
71023ffcc0  add x11,sp,#0x48
71023ffcc4  mov x9,xzr
71023ffcc8  mov w10,#0xffffffff
71023ffccc  orr x11,x11,#0x1
71023ffcd0  orr x13,xzr,#0x100000000
71023ffcd4  adrp x14,0x7104754000
71023ffcd8  add x14,x14,#0x84
71023ffcdc  and w12,w12,#0xff
71023ffce0  sub w15,w12,#0x41
71023ffce4  add w16,w12,#0x20
71023ffce8  cmp w15,#0x1a
71023ffcec  csel w12,w16,w12,cc
71023ffcf0  eor w12,w12,w10
71023ffcf4  and w12,w12,#0xff
71023ffcf8  ldr w12,[x14, w12, UXTW #0x2]
71023ffcfc  eor w10,w12,w10, LSR #0x8
71023ffd00  ldrb w12,[x11], #0x1
71023ffd04  add x9,x9,x13
71023ffd08  cbnz w12,0x71023ffcdc
71023ffd0c  mvn w10,w10
71023ffd10  and x9,x9,#0xff00000000
71023ffd14  orr x9,x9,x10
71023ffd18  cbnz x9,0x71023ffd30
71023ffd1c  b 0x71023ffdb0
71023ffd20  mov x10,xzr
71023ffd24  mov x9,xzr
71023ffd28  orr x9,x9,x10
71023ffd2c  cbz x9,0x71023ffdb0
71023ffd30  ldr x8,[x8, #0xd0]
71023ffd34  ldr x8,[x8, #0x78]
71023ffd38  ldr x8,[x8]
71023ffd3c  ldp x10,x8,[x8, #0x50]
71023ffd40  ldr w11,[x10, #0x4]
71023ffd44  udiv x12,x9,x11
71023ffd48  msub x11,x12,x11,x9
71023ffd4c  add x10,x10,x11, LSL #0x3
71023ffd50  ldp w12,w11,[x10, #0x8]
71023ffd54  add x8,x8,x12, LSL #0x3
71023ffd58  add x10,x8,x11, LSL #0x3
71023ffd5c  cbz w11,0x71023ffd90
71023ffd60  cmp x11,#0x0
71023ffd64  cinc x12,x11,lt
71023ffd68  asr x12,x12,#0x1
71023ffd6c  add x13,x8,x12, LSL #0x3
71023ffd70  ldr x14,[x13], #0x8
71023ffd74  and x14,x14,#0xffffffffff
71023ffd78  mvn x15,x12
71023ffd7c  add x11,x11,x15
71023ffd80  cmp x14,x9
71023ffd84  csel x11,x11,x12,cc
71023ffd88  csel x8,x13,x8,cc
71023ffd8c  cbnz x11,0x71023ffd60
71023ffd90  cmp x8,x10
71023ffd94  b.eq 0x71023ffdb0
71023ffd98  ldr x8,[x8]
71023ffd9c  and x10,x8,#0xffffffffff
71023ffda0  cmp x10,x9
71023ffda4  orr x9,xzr,#-0x10000000001
71023ffda8  ccmp x8,x9,#0x2,eq
71023ffdac  b.ls 0x71023fff18
71023ffdb0  add x0,sp,#0x40
71023ffdb4  add x1,sp,#0x150
71023ffdb8  strh wzr,[sp, #0x250]
71023ffdbc  strb wzr,[sp, #0x150]
71023ffdc0  b 0x71023fff20
71023ffdc4  add x0,sp,#0x40
71023ffdc8  add x1,sp,#0x48
71023ffdcc  bl 0x710353e8e0
71023ffdd0  ldr w0,[sp, #0x40]
71023ffdd4  mov x20,x26
71023ffdd8  bl 0x710353ea90
71023ffddc  mov x24,x0
71023ffde0  orr w21,wzr,#0xffffff
71023ffde4  cmp w24,w21
71023ffde8  b.eq 0x71023ffdf8
71023ffdec  ldr x0,[x19, #0xf20]
71023ffdf0  mov w1,w24
71023ffdf4  bl 0x7103540a00
71023ffdf8  mov x23,x25
71023ffdfc  ldr x25,[x25, #0xf28]
71023ffe00  ldr x26,[x25]
71023ffe04  mov x0,x26
71023ffe08  bl 0x71039c1a40
71023ffe0c  mov w2,#0x2
71023ffe10  mov x0,x25
71023ffe14  mov w1,w22
71023ffe18  bl 0x71035465b0
71023ffe1c  mov x0,x26
71023ffe20  bl 0x71039c1a50
71023ffe24  ldr x8,[sp, #0x28]
71023ffe28  cmp w8,w21
71023ffe2c  b.eq 0x71023ffe58
71023ffe30  ldr x25,[x23, #0xf28]
71023ffe34  ldr x26,[x25]
71023ffe38  mov x0,x26
71023ffe3c  bl 0x71039c1a40
71023ffe40  ldr x1,[sp, #0x28]
71023ffe44  mov w2,#0x2
71023ffe48  mov x0,x25
71023ffe4c  bl 0x71035465b0
71023ffe50  mov x0,x26
71023ffe54  bl 0x71039c1a50
71023ffe58  orr w21,wzr,#0xffffff
71023ffe5c  cmp w24,w21
71023ffe60  b.eq 0x71023ffe8c
71023ffe64  ldr x25,[x23, #0xf28]
71023ffe68  ldr x26,[x25]
71023ffe6c  mov x0,x26
71023ffe70  bl 0x71039c1a40
71023ffe74  mov w2,#0x2
71023ffe78  mov x0,x25
71023ffe7c  mov w1,w24
71023ffe80  bl 0x71035465b0
71023ffe84  mov x0,x26
71023ffe88  bl 0x71039c1a50
71023ffe8c  mov w8,#0x2b
71023ffe90  str w8,[sp, #0x150]
71023ffe94  mov w8,#0x1
71023ffe98  strb w8,[sp, #0x154]
71023ffe9c  ldp x8,x25,[sp, #0x28]
71023ffea0  add x0,x25,#0x60
71023ffea4  add x1,sp,#0x150
71023ffea8  str w22,[sp, #0x158]
71023ffeac  str w8,[sp, #0x15c]
71023ffeb0  str w24,[sp, #0x160]
71023ffeb4  bl 0x7102401560
71023ffeb8  ldr w1,[sp, #0x160]
71023ffebc  cmp w1,w21
71023ffec0  mov x26,x20
71023ffec4  b.eq 0x71023ffed8
71023ffec8  ldr x0,[x19, #0xf20]
71023ffecc  bl 0x7103540b10
71023ffed0  orr w8,wzr,#0xffffff
71023ffed4  str w8,[sp, #0x160]
71023ffed8  ldr w1,[sp, #0x15c]
71023ffedc  orr w20,wzr,#0xffffff
71023ffee0  cmp w1,w20
71023ffee4  b.eq 0x71023ffef4
71023ffee8  ldr x0,[x19, #0xf20]
71023ffeec  bl 0x7103540b10
71023ffef0  str w20,[sp, #0x15c]
71023ffef4  ldr w1,[sp, #0x158]
71023ffef8  cmp w1,w20
71023ffefc  b.eq 0x71023fff10
71023fff00  ldr x0,[x19, #0xf20]
71023fff04  bl 0x7103540b10
71023fff08  orr w8,wzr,#0xffffff
71023fff0c  str w8,[sp, #0x158]
71023fff10  mov w22,#0x2b
71023fff14  b 0x7102400068
71023fff18  add x0,sp,#0x40
71023fff1c  add x1,sp,#0x48
71023fff20  bl 0x710353e8e0
71023fff24  ldr w0,[sp, #0x40]
71023fff28  mov x20,x26
71023fff2c  bl 0x710353ea90
71023fff30  mov x24,x0
71023fff34  orr w21,wzr,#0xffffff
71023fff38  cmp w24,w21
71023fff3c  b.eq 0x71023fff4c
71023fff40  ldr x0,[x19, #0xf20]
71023fff44  mov w1,w24
71023fff48  bl 0x7103540a00
71023fff4c  mov x23,x25
71023fff50  ldr x25,[x25, #0xf28]
71023fff54  ldr x26,[x25]
71023fff58  mov x0,x26
71023fff5c  bl 0x71039c1a40
71023fff60  mov w2,#0x2
71023fff64  mov x0,x25
71023fff68  mov w1,w22
71023fff6c  bl 0x71035465b0
71023fff70  mov x0,x26
71023fff74  bl 0x71039c1a50
71023fff78  ldr x8,[sp, #0x28]
71023fff7c  cmp w8,w21
71023fff80  b.eq 0x71023fffac
71023fff84  ldr x25,[x23, #0xf28]
71023fff88  ldr x26,[x25]
71023fff8c  mov x0,x26
71023fff90  bl 0x71039c1a40
71023fff94  ldr x1,[sp, #0x28]
71023fff98  mov w2,#0x2
71023fff9c  mov x0,x25
71023fffa0  bl 0x71035465b0
71023fffa4  mov x0,x26
71023fffa8  bl 0x71039c1a50
71023fffac  orr w21,wzr,#0xffffff
71023fffb0  cmp w24,w21
71023fffb4  b.eq 0x71023fffe0
71023fffb8  ldr x25,[x23, #0xf28]
71023fffbc  ldr x26,[x25]
71023fffc0  mov x0,x26
71023fffc4  bl 0x71039c1a40
71023fffc8  mov w2,#0x2
71023fffcc  mov x0,x25
71023fffd0  mov w1,w24
71023fffd4  bl 0x71035465b0
71023fffd8  mov x0,x26
71023fffdc  bl 0x71039c1a50
71023fffe0  mov w8,#0x52
71023fffe4  str w8,[sp, #0x150]
71023fffe8  mov w8,#0x1
71023fffec  strb w8,[sp, #0x154]
71023ffff0  ldp x8,x25,[sp, #0x28]
71023ffff4  add x0,x25,#0x60
71023ffff8  add x1,sp,#0x150
71023ffffc  str w22,[sp, #0x158]
7102400000  str w8,[sp, #0x15c]
7102400004  str w24,[sp, #0x160]
7102400008  bl 0x7102401560
710240000c  ldr w1,[sp, #0x160]
7102400010  cmp w1,w21
7102400014  mov x26,x20
7102400018  b.eq 0x710240002c
710240001c  ldr x0,[x19, #0xf20]
7102400020  bl 0x7103540b10
7102400024  orr w8,wzr,#0xffffff
7102400028  str w8,[sp, #0x160]
710240002c  ldr w1,[sp, #0x15c]
7102400030  orr w20,wzr,#0xffffff
7102400034  cmp w1,w20
7102400038  b.eq 0x7102400048
710240003c  ldr x0,[x19, #0xf20]
7102400040  bl 0x7103540b10
7102400044  str w20,[sp, #0x15c]
7102400048  ldr w1,[sp, #0x158]
710240004c  cmp w1,w20
7102400050  b.eq 0x7102400064
7102400054  ldr x0,[x19, #0xf20]
7102400058  bl 0x7103540b10
710240005c  orr w8,wzr,#0xffffff
7102400060  str w8,[sp, #0x158]
7102400064  mov w22,#0x52
7102400068  mov x12,#-0x3f00000000000000
710240006c  ldp x9,x1,[x25, #0x88]
7102400070  and x10,x1,#-0x100000000000000
7102400074  and x8,x9,#0xffffffffff
7102400078  cmp x10,x12
710240007c  b.ne 0x7102400404
7102400080  and x10,x1,#0xffffffffff
7102400084  cbz x10,0x7102400404
7102400088  and x10,x9,#-0x100000000000000
710240008c  cmp x10,x12
7102400090  b.ne 0x71024000a4
7102400094  cbz x8,0x71024000a4
7102400098  eor x8,x9,x1
710240009c  tst x8,#0xffffffffff
71024000a0  b.eq 0x7102400414
71024000a4  tbz w27,#0x0,0x7102400438
71024000a8  ldr x0,[x26, #0x168]
71024000ac  bl 0x71032626e0
71024000b0  ldp x19,x8,[x25]
71024000b4  cmp x19,x8
71024000b8  str x8,[sp, #0x38]
71024000bc  b.eq 0x7102400888
71024000c0  mov w20,w0
71024000c4  add x21,x25,#0x68
71024000c8  orr w22,wzr,#0xffffff
71024000cc  adrp x28,0x7105332000
71024000d0  ldrb w3,[x19, #0x3c]
71024000d4  ldr x9,[x21]
71024000d8  cbz x9,0x710240010c
71024000dc  mov x8,x21
71024000e0  ldr w10,[x9, #0x1c]
71024000e4  cmp w10,w3
71024000e8  cset w10,cc
71024000ec  csel x8,x8,x9,cc
71024000f0  ldr x9,[x9, w10, UXTW #0x3]
71024000f4  cbnz x9,0x71024000e0
71024000f8  cmp x8,x21
71024000fc  b.eq 0x710240010c
7102400100  ldr w8,[x8, #0x1c]
7102400104  cmp w8,w3
7102400108  b.ls 0x71024003f0
710240010c  add x0,sp,#0x150
7102400110  mov w1,w20
7102400114  mov w2,#0x16
7102400118  mov w4,wzr
710240011c  bl 0x71017dfe10
7102400120  add x0,sp,#0x48
7102400124  add x1,sp,#0x150
7102400128  bl 0x710353e8e0
710240012c  ldr w0,[sp, #0x48]
7102400130  bl 0x710353ea90
7102400134  mov x25,x0
7102400138  cmp w25,w22
710240013c  b.eq 0x710240014c
7102400140  ldr x0,[x28, #0xf20]
7102400144  mov w1,w25
7102400148  bl 0x7103540a00
710240014c  ldrb w3,[x19, #0x3c]
7102400150  add x0,sp,#0x150
7102400154  mov w1,w20
7102400158  mov w2,#0x17
710240015c  mov w4,wzr
7102400160  bl 0x71017dfe10
7102400164  add x0,sp,#0x48
7102400168  add x1,sp,#0x150
710240016c  bl 0x710353e8e0
7102400170  ldr w0,[sp, #0x48]
7102400174  bl 0x710353ea90
7102400178  mov x23,x0
710240017c  cmp w23,w22
7102400180  b.eq 0x7102400190
7102400184  ldr x0,[x28, #0xf20]
7102400188  mov w1,w23
710240018c  bl 0x7103540a00
7102400190  ldrb w3,[x19, #0x3c]
7102400194  add x0,sp,#0x150
7102400198  orr w2,wzr,#0x18
710240019c  mov w1,w20
71024001a0  mov w4,wzr
71024001a4  bl 0x71017dfe10
71024001a8  add x0,sp,#0x48
71024001ac  add x1,sp,#0x150
71024001b0  bl 0x710353e8e0
71024001b4  ldr w0,[sp, #0x48]
71024001b8  bl 0x710353ea90
71024001bc  mov x24,x0
71024001c0  cmp w24,w22
71024001c4  b.ne 0x71024002c4
71024001c8  cmp w25,w22
71024001cc  b.ne 0x71024002d8
71024001d0  cmp w23,w22
71024001d4  b.ne 0x710240030c
71024001d8  cmp w24,w22
71024001dc  b.eq 0x710240020c
71024001e0  adrp x8,0x7105332000
71024001e4  ldr x26,[x8, #0xf28]
71024001e8  ldr x27,[x26]
71024001ec  mov x0,x27
71024001f0  bl 0x71039c1a40
71024001f4  mov w2,#0x2
71024001f8  mov x0,x26
71024001fc  mov w1,w24
7102400200  bl 0x71035465b0
7102400204  mov x0,x27
7102400208  bl 0x71039c1a50
710240020c  ldrb w27,[x19, #0x3c]
7102400210  mov w0,#0x10
7102400214  orr w1,wzr,#0x30
7102400218  bl 0x710392e290
710240021c  mov x26,x0
7102400220  cbnz x0,0x710240026c
7102400224  adrp x8,0x7105332000
7102400228  ldr x0,[x8, #0xf00]
710240022c  cbz x0,0x7102400268
7102400230  orr w8,wzr,#0x30
7102400234  str wzr,[sp, #0x48]
7102400238  add x1,sp,#0x48
710240023c  str x8,[sp, #0x150]
7102400240  ldr x8,[x0]
7102400244  ldr x8,[x8, #0x30]
7102400248  add x2,sp,#0x150
710240024c  blr x8
7102400250  tbz w0,#0x0,0x7102400268
7102400254  mov w0,#0x10
7102400258  orr w1,wzr,#0x30
710240025c  bl 0x710392e290
7102400260  mov x26,x0
7102400264  cbnz x0,0x710240026c
7102400268  mov x26,xzr
710240026c  mov w8,#0x1
7102400270  str w27,[x26, #0x1c]
7102400274  stp w25,w23,[x26, #0x24]
7102400278  strb w8,[x26, #0x20]
710240027c  str w24,[x26, #0x2c]
7102400280  ldr x9,[x21]
7102400284  cbz x9,0x7102400344
7102400288  mov x8,x21
710240028c  b 0x7102400294
7102400290  mov x9,x10
7102400294  ldr w10,[x9, #0x1c]
7102400298  cmp w10,w27
710240029c  b.ls 0x71024002b0
71024002a0  ldr x10,[x9]
71024002a4  cbz x10,0x7102400350
71024002a8  mov x8,x9
71024002ac  b 0x7102400290
71024002b0  b.cs 0x7102400354
71024002b4  mov x8,x9
71024002b8  ldr x10,[x8, #0x8]!
71024002bc  cbnz x10,0x7102400290
71024002c0  b 0x7102400354
71024002c4  ldr x0,[x28, #0xf20]
71024002c8  mov w1,w24
71024002cc  bl 0x7103540a00
71024002d0  cmp w25,w22
71024002d4  b.eq 0x71024001d0
71024002d8  adrp x8,0x7105332000
71024002dc  ldr x26,[x8, #0xf28]
71024002e0  ldr x27,[x26]
71024002e4  mov x0,x27
71024002e8  bl 0x71039c1a40
71024002ec  mov w2,#0x2
71024002f0  mov x0,x26
71024002f4  mov w1,w25
71024002f8  bl 0x71035465b0
71024002fc  mov x0,x27
7102400300  bl 0x71039c1a50
7102400304  cmp w23,w22
7102400308  b.eq 0x71024001d8
710240030c  adrp x8,0x7105332000
7102400310  ldr x26,[x8, #0xf28]
7102400314  ldr x27,[x26]
7102400318  mov x0,x27
710240031c  bl 0x71039c1a40
7102400320  mov w2,#0x2
7102400324  mov x0,x26
7102400328  mov w1,w23
710240032c  bl 0x71035465b0
7102400330  mov x0,x27
7102400334  bl 0x71039c1a50
7102400338  cmp w24,w22
710240033c  b.ne 0x71024001e0
7102400340  b 0x710240020c
7102400344  mov x9,x21
7102400348  mov x8,x21
710240034c  b 0x7102400354
7102400350  mov x8,x9
7102400354  ldr x25,[sp, #0x30]
7102400358  ldr x10,[x8]
710240035c  cbz x10,0x71024003b8
7102400360  cmp w24,w22
7102400364  b.eq 0x710240037c
7102400368  ldr x0,[x28, #0xf20]
710240036c  mov w1,w24
7102400370  bl 0x7103540b10
7102400374  ldr w23,[x26, #0x28]
7102400378  str w22,[x26, #0x2c]
710240037c  cmp w23,w22
7102400380  b.eq 0x7102400394
7102400384  ldr x0,[x28, #0xf20]
7102400388  mov w1,w23
710240038c  bl 0x7103540b10
7102400390  str w22,[x26, #0x28]
7102400394  ldr w1,[x26, #0x24]
7102400398  cmp w1,w22
710240039c  b.eq 0x71024003ac
71024003a0  ldr x0,[x28, #0xf20]
71024003a4  bl 0x7103540b10
71024003a8  str w22,[x26, #0x24]
71024003ac  mov x0,x26
71024003b0  bl 0x710392eb40
71024003b4  b 0x71024003f0
71024003b8  stp xzr,xzr,[x26]
71024003bc  str x9,[x26, #0x10]
71024003c0  str x26,[x8]
71024003c4  ldr x9,[x25, #0x60]
71024003c8  ldr x9,[x9]
71024003cc  cbz x9,0x71024003d8
71024003d0  str x9,[x25, #0x60]
71024003d4  ldr x26,[x8]
71024003d8  ldr x0,[x25, #0x68]
71024003dc  mov x1,x26
71024003e0  bl 0x71003e59f0
71024003e4  ldr x8,[x25, #0x70]
71024003e8  add x8,x8,#0x1
71024003ec  str x8,[x25, #0x70]
71024003f0  ldr x8,[sp, #0x38]
71024003f4  add x19,x19,#0x150
71024003f8  cmp x19,x8
71024003fc  b.ne 0x71024000d0
7102400400  b 0x7102400888
7102400404  and x9,x9,#-0x100000000000000
7102400408  cmp x9,x12
710240040c  b.ne 0x7102400414
7102400410  cbnz x8,0x71024000a4
7102400414  mov w1,#0x4b
7102400418  mov x0,x25
710240041c  mov w2,wzr
7102400420  bl 0x7102401730
7102400424  mov w1,#0x4c
7102400428  mov x0,x25
710240042c  mov w2,wzr
7102400430  bl 0x7102401730
7102400434  b 0x7102400888
7102400438  cmp w22,#0x6
710240043c  b.ne 0x7102400888
7102400440  ldp x19,x22,[x25]
7102400444  cmp x19,x22
7102400448  b.eq 0x7102400888
710240044c  ldr x8,[sp, #0x38]
7102400450  cmp x28,#0x0
7102400454  add x24,x25,#0x68
7102400458  add x9,x25,#0x60
710240045c  stp x9,x24,[sp, #0x10]
7102400460  cset w9,ne
7102400464  orr w28,wzr,#0xffffff
7102400468  orr x20,xzr,#0x100000000
710240046c  adrp x21,0x7104754000
7102400470  add x21,x21,#0x84
7102400474  str x22,[sp, #0x20]
7102400478  and x8,x8,#-0x100000000000000
710240047c  cmp x8,x12
7102400480  cset w8,eq
7102400484  and w27,w8,w9
7102400488  add x8,sp,#0x150
710240048c  orr x8,x8,#0x1
7102400490  str x8,[sp, #0x8]
7102400494  str w27,[sp, #0x28]
7102400498  b 0x7102400538
710240049c  adrp x8,0x7105332000
71024004a0  ldr x0,[x8, #0xf20]
71024004a4  mov w1,w26
71024004a8  bl 0x7103540a00
71024004ac  cmp w24,w28
71024004b0  b.eq 0x71024007ac
71024004b4  adrp x8,0x7105332000
71024004b8  ldr x27,[x8, #0xf28]
71024004bc  ldr x28,[x27]
71024004c0  mov x0,x28
71024004c4  bl 0x71039c1a40
71024004c8  mov x0,x27
71024004cc  ldr w27,[sp, #0x28]
71024004d0  mov w2,#0x2
71024004d4  mov w1,w24
71024004d8  bl 0x71035465b0
71024004dc  mov x0,x28
71024004e0  orr w28,wzr,#0xffffff
71024004e4  bl 0x71039c1a50
71024004e8  cmp w25,w28
71024004ec  b.eq 0x71024007b4
71024004f0  adrp x8,0x7105332000
71024004f4  ldr x27,[x8, #0xf28]
71024004f8  ldr x28,[x27]
71024004fc  mov x0,x28
7102400500  bl 0x71039c1a40
7102400504  mov x0,x27
7102400508  ldr w27,[sp, #0x28]
710240050c  mov w2,#0x2
7102400510  mov w1,w25
7102400514  bl 0x71035465b0
7102400518  mov x0,x28
710240051c  orr w28,wzr,#0xffffff
7102400520  bl 0x71039c1a50
7102400524  cmp w26,w28
7102400528  b.ne 0x71024007bc
710240052c  b 0x71024007f0
7102400530  mov x22,x26
7102400534  b 0x7102400784
7102400538  ldr x1,[x19, #0x20]
710240053c  and x9,x1,#-0x100000000000000
7102400540  and x8,x1,#0xffffffffff
7102400544  cmp x9,x12
7102400548  ccmp x8,#0x0,#0x4,eq
710240054c  b.eq 0x710240087c
7102400550  cbz w27,0x7102400564
7102400554  ldr x8,[sp, #0x38]
7102400558  eor x8,x8,x1
710240055c  tst x8,#0xffffffffff
7102400560  b.eq 0x710240087c
7102400564  ldr x8,[x25, #0x88]
7102400568  and x9,x8,#-0x100000000000000
710240056c  cmp x9,x12
7102400570  b.ne 0x7102400588
7102400574  and x9,x8,#0xffffffffff
7102400578  cbz x9,0x7102400588
710240057c  eor x8,x8,x1
7102400580  tst x8,#0xffffffffff
7102400584  b.eq 0x71024006d4
7102400588  ldr x0,[x26, #0x168]
710240058c  bl 0x71032626e0
7102400590  mov x12,#-0x3f00000000000000
7102400594  cmn w0,#0x1
7102400598  b.eq 0x710240087c
710240059c  ldr x9,[x24]
71024005a0  mov w23,w0
71024005a4  cbz x9,0x71024005d8
71024005a8  mov x8,x24
71024005ac  ldr w10,[x9, #0x1c]
71024005b0  cmp w10,w23
71024005b4  cset w10,cc
71024005b8  csel x8,x8,x9,cc
71024005bc  ldr x9,[x9, w10, UXTW #0x3]
71024005c0  cbnz x9,0x71024005ac
71024005c4  cmp x8,x24
71024005c8  b.eq 0x71024005d8
71024005cc  ldr w8,[x8, #0x1c]
71024005d0  cmp w23,w8
71024005d4  b.cs 0x710240087c
71024005d8  add x0,sp,#0x150
71024005dc  orr w2,wzr,#0x1e
71024005e0  mov w1,w23
71024005e4  mov w3,wzr
71024005e8  bl 0x71017df5b0
71024005ec  add x0,sp,#0x48
71024005f0  add x1,sp,#0x150
71024005f4  bl 0x710353e8e0
71024005f8  ldr w0,[sp, #0x48]
71024005fc  bl 0x710353ea90
7102400600  mov x24,x0
7102400604  cmp w24,w28
7102400608  b.eq 0x710240061c
710240060c  adrp x8,0x7105332000
7102400610  ldr x0,[x8, #0xf20]
7102400614  mov w1,w24
7102400618  bl 0x7103540a00
710240061c  add x0,sp,#0x150
7102400620  orr w2,wzr,#0x1f
7102400624  mov w1,w23
7102400628  mov w3,wzr
710240062c  bl 0x71017df5b0
7102400630  add x0,sp,#0x48
7102400634  add x1,sp,#0x150
7102400638  bl 0x710353e8e0
710240063c  ldr w0,[sp, #0x48]
7102400640  bl 0x710353ea90
7102400644  mov x25,x0
7102400648  cmp w25,w28
710240064c  b.eq 0x7102400660
7102400650  adrp x8,0x7105332000
7102400654  ldr x0,[x8, #0xf20]
7102400658  mov w1,w25
710240065c  bl 0x7103540a00
7102400660  add x0,sp,#0x150
7102400664  mov w2,#0x20
7102400668  mov w1,w23
710240066c  mov w3,wzr
7102400670  bl 0x71017df5b0
7102400674  adrp x8,0x7105332000
7102400678  ldr x8,[x8, #0xf28]
710240067c  ldrb w12,[sp, #0x150]
7102400680  cbz w12,0x71024006e8
7102400684  ldr x10,[sp, #0x8]
7102400688  mov x9,xzr
710240068c  mov w11,#0xffffffff
7102400690  and w12,w12,#0xff
7102400694  sub w13,w12,#0x41
7102400698  add w14,w12,#0x20
710240069c  cmp w13,#0x1a
71024006a0  csel w12,w14,w12,cc
71024006a4  eor w12,w12,w11
71024006a8  and w12,w12,#0xff
71024006ac  ldr w12,[x21, w12, UXTW #0x2]
71024006b0  eor w11,w12,w11, LSR #0x8
71024006b4  ldrb w12,[x10], #0x1
71024006b8  add x9,x9,x20
71024006bc  cbnz w12,0x7102400690
71024006c0  mvn w10,w11
71024006c4  and x9,x9,#0xff00000000
71024006c8  orr x9,x9,x10
71024006cc  cbnz x9,0x71024006f8
71024006d0  b 0x7102400778
71024006d4  mov w2,#0x1
71024006d8  mov x0,x25
71024006dc  mov w1,#0x4b
71024006e0  bl 0x7102401730
71024006e4  b 0x7102400878
71024006e8  mov x10,xzr
71024006ec  mov x9,xzr
71024006f0  orr x9,x9,x10
71024006f4  cbz x9,0x7102400778
71024006f8  ldr x8,[x8, #0xd0]
71024006fc  ldr x8,[x8, #0x78]
7102400700  ldr x8,[x8]
7102400704  ldp x10,x8,[x8, #0x50]
7102400708  ldr w11,[x10, #0x4]
710240070c  udiv x12,x9,x11
7102400710  msub x11,x12,x11,x9
7102400714  add x10,x10,x11, LSL #0x3
7102400718  ldp w12,w11,[x10, #0x8]
710240071c  add x8,x8,x12, LSL #0x3
7102400720  add x10,x8,x11, LSL #0x3
7102400724  cbz w11,0x7102400758
7102400728  cmp x11,#0x0
710240072c  cinc x12,x11,lt
7102400730  asr x12,x12,#0x1
7102400734  add x13,x8,x12, LSL #0x3
7102400738  ldr x14,[x13], #0x8
710240073c  and x14,x14,#0xffffffffff
7102400740  mvn x15,x12
7102400744  add x11,x11,x15
7102400748  cmp x14,x9
710240074c  csel x11,x11,x12,cc
7102400750  csel x8,x13,x8,cc
7102400754  cbnz x11,0x7102400728
7102400758  cmp x8,x10
710240075c  b.eq 0x7102400778
7102400760  ldr x8,[x8]
7102400764  and x10,x8,#0xffffffffff
7102400768  cmp x10,x9
710240076c  orr x9,xzr,#-0x10000000001
7102400770  ccmp x8,x9,#0x2,eq
7102400774  b.ls 0x7102400530
7102400778  mov x22,x26
710240077c  strh wzr,[sp, #0x250]
7102400780  strb wzr,[sp, #0x150]
7102400784  add x0,sp,#0x48
7102400788  add x1,sp,#0x150
710240078c  bl 0x710353e8e0
7102400790  ldr w0,[sp, #0x48]
7102400794  bl 0x710353ea90
7102400798  mov x26,x0
710240079c  cmp w26,w28
71024007a0  b.ne 0x710240049c
71024007a4  cmp w24,w28
71024007a8  b.ne 0x71024004b4
71024007ac  cmp w25,w28
71024007b0  b.ne 0x71024004f0
71024007b4  cmp w26,w28
71024007b8  b.eq 0x71024007f0
71024007bc  adrp x8,0x7105332000
71024007c0  ldr x27,[x8, #0xf28]
71024007c4  ldr x28,[x27]
71024007c8  mov x0,x28
71024007cc  bl 0x71039c1a40
71024007d0  mov x0,x27
71024007d4  ldr w27,[sp, #0x28]
71024007d8  mov w2,#0x2
71024007dc  mov w1,w26
71024007e0  bl 0x71035465b0
71024007e4  mov x0,x28
71024007e8  orr w28,wzr,#0xffffff
71024007ec  bl 0x71039c1a50
71024007f0  ldr x0,[sp, #0x10]
71024007f4  mov w8,#0x1
71024007f8  add x1,sp,#0x150
71024007fc  str w23,[sp, #0x150]
7102400800  strb w8,[sp, #0x154]
7102400804  str w24,[sp, #0x158]
7102400808  str w25,[sp, #0x15c]
710240080c  str w26,[sp, #0x160]
7102400810  bl 0x7102401560
7102400814  ldr w1,[sp, #0x160]
7102400818  cmp w1,w28
710240081c  b.eq 0x7102400830
7102400820  adrp x8,0x7105332000
7102400824  ldr x0,[x8, #0xf20]
7102400828  bl 0x7103540b10
710240082c  str w28,[sp, #0x160]
7102400830  ldr w1,[sp, #0x15c]
7102400834  ldr x25,[sp, #0x30]
7102400838  mov x26,x22
710240083c  ldr x24,[sp, #0x18]
7102400840  cmp w1,w28
7102400844  b.eq 0x7102400858
7102400848  adrp x8,0x7105332000
710240084c  ldr x0,[x8, #0xf20]
7102400850  bl 0x7103540b10
7102400854  str w28,[sp, #0x15c]
7102400858  ldr w1,[sp, #0x158]
710240085c  ldr x22,[sp, #0x20]
7102400860  cmp w1,w28
7102400864  b.eq 0x7102400878
7102400868  adrp x8,0x7105332000
710240086c  ldr x0,[x8, #0xf20]
7102400870  bl 0x7103540b10
7102400874  str w28,[sp, #0x158]
7102400878  mov x12,#-0x3f00000000000000
710240087c  add x19,x19,#0x150
7102400880  cmp x19,x22
7102400884  b.ne 0x7102400538
7102400888  ldp x24,x23,[x25]
710240088c  cmp x24,x23
7102400890  b.eq 0x7102401528
7102400894  ldr x8,[sp, #0x30]
7102400898  add x20,x8,#0x50
710240089c  add x9,x8,#0x48
71024008a0  add x8,x8,#0x38
71024008a4  stp x8,x23,[sp, #0x20]
71024008a8  add x8,sp,#0x150
71024008ac  add x8,x8,#0x9
71024008b0  orr w19,wzr,#0xffffff
71024008b4  adrp x25,0x7104754000
71024008b8  add x25,x25,#0x84
71024008bc  str wzr,[sp, #0x10]
71024008c0  str x9,[sp, #0x38]
71024008c4  str x8,[sp, #0x8]
71024008c8  b 0x71024009d0
71024008cc  ldr x23,[x21]
71024008d0  and x9,x9,#-0x10000000000
71024008d4  orr x22,x9,x8
71024008d8  mov x0,x23
71024008dc  bl 0x71039c1a40
71024008e0  mov x0,x21
71024008e4  mov x1,x22
71024008e8  bl 0x71035404b0
71024008ec  mov x22,x0
71024008f0  mov x0,x23
71024008f4  ldr x23,[sp, #0x28]
71024008f8  bl 0x71039c1a50
71024008fc  cmp x22,#0x0
7102400900  csel w8,w19,w28,eq
7102400904  cmp w8,w19
7102400908  str w8,[sp, #0x18]
710240090c  b.eq 0x71024010b0
7102400910  ldr x8,[x21, #0x8]
7102400914  ldr w9,[sp, #0x18]
7102400918  add x8,x8,w9, UXTW  #0x3
710240091c  ldrb w8,[x8, #0x4]
7102400920  cbnz w8,0x71024010b8
7102400924  b 0x71024010b0
7102400928  ldr x23,[x21]
710240092c  and x9,x9,#-0x10000000000
7102400930  orr x22,x9,x8
7102400934  mov x0,x23
7102400938  bl 0x71039c1a40
710240093c  mov x0,x21
7102400940  mov x1,x22
7102400944  bl 0x71035404b0
7102400948  mov x22,x0
710240094c  mov x0,x23
7102400950  ldr x23,[sp, #0x28]
7102400954  bl 0x71039c1a50
7102400958  cmp x22,#0x0
710240095c  csel w28,w19,w28,eq
7102400960  cmp w28,w19
7102400964  b.eq 0x71024011c4
7102400968  ldr x8,[x21, #0x8]
710240096c  add x8,x8,w28, UXTW  #0x3
7102400970  ldrb w8,[x8, #0x4]
7102400974  cbnz w8,0x71024011c8
7102400978  b 0x71024011c4
710240097c  ldr x23,[x21]
7102400980  and x9,x9,#-0x10000000000
7102400984  orr x22,x9,x8
7102400988  mov x0,x23
710240098c  bl 0x71039c1a40
7102400990  mov x0,x21
7102400994  mov x1,x22
7102400998  bl 0x71035404b0
710240099c  mov x22,x0
71024009a0  mov x0,x23
71024009a4  ldr x23,[sp, #0x28]
71024009a8  bl 0x71039c1a50
71024009ac  cmp x22,#0x0
71024009b0  csel w22,w19,w27,eq
71024009b4  cmp w22,w19
71024009b8  b.eq 0x71024012d4
71024009bc  ldr x8,[x21, #0x8]
71024009c0  add x8,x8,w22, UXTW  #0x3
71024009c4  ldrb w8,[x8, #0x4]
71024009c8  cbnz w8,0x71024012d8
71024009cc  b 0x71024012d4
71024009d0  ldr w1,[x24, #0x28]
71024009d4  cmn w1,#0x1
71024009d8  b.eq 0x7102400bb4
71024009dc  ldr x9,[x20]
71024009e0  cbz x9,0x7102400a14
71024009e4  mov x8,x20
71024009e8  ldr w10,[x9, #0x1c]
71024009ec  cmp w10,w1
71024009f0  cset w10,cc
71024009f4  csel x8,x8,x9,cc
71024009f8  ldr x9,[x9, w10, UXTW #0x3]
71024009fc  cbnz x9,0x71024009e8
7102400a00  cmp x8,x20
7102400a04  b.eq 0x7102400a14
7102400a08  ldr w8,[x8, #0x1c]
7102400a0c  cmp w1,w8
7102400a10  b.cs 0x710240151c
7102400a14  add x0,sp,#0x150
7102400a18  mov w2,#0x4
7102400a1c  bl 0x71017e1080
7102400a20  ldr w28,[sp, #0x150]
7102400a24  cmp w28,w19
7102400a28  b.eq 0x7102400a3c
7102400a2c  adrp x8,0x7105332000
7102400a30  ldr x0,[x8, #0xf20]
7102400a34  mov w1,w28
7102400a38  bl 0x7103540a00
7102400a3c  add x0,sp,#0x150
7102400a40  bl 0x710353f120
7102400a44  ldr w1,[x24, #0x28]
7102400a48  add x0,sp,#0x150
7102400a4c  mov w2,#0x5
7102400a50  bl 0x71017e1080
7102400a54  ldr w26,[sp, #0x150]
7102400a58  cmp w26,w19
7102400a5c  b.eq 0x7102400a70
7102400a60  adrp x8,0x7105332000
7102400a64  ldr x0,[x8, #0xf20]
7102400a68  mov w1,w26
7102400a6c  bl 0x7103540a00
7102400a70  add x0,sp,#0x150
7102400a74  bl 0x710353f120
7102400a78  ldr w1,[x24, #0x28]
7102400a7c  add x0,sp,#0x150
7102400a80  orr w2,wzr,#0x6
7102400a84  bl 0x71017e1080
7102400a88  ldr w27,[sp, #0x150]
7102400a8c  cmp w27,w19
7102400a90  b.eq 0x7102400aa4
7102400a94  adrp x8,0x7105332000
7102400a98  ldr x0,[x8, #0xf20]
7102400a9c  mov w1,w27
7102400aa0  bl 0x7103540a00
7102400aa4  add x0,sp,#0x150
7102400aa8  bl 0x710353f120
7102400aac  cmp w28,w19
7102400ab0  b.ne 0x7102400d5c
7102400ab4  cmp w26,w19
7102400ab8  b.ne 0x7102400d90
7102400abc  cmp w27,w19
7102400ac0  b.eq 0x7102400af0
7102400ac4  adrp x8,0x7105332000
7102400ac8  ldr x21,[x8, #0xf28]
7102400acc  ldr x22,[x21]
7102400ad0  mov x0,x22
7102400ad4  bl 0x71039c1a40
7102400ad8  mov w2,#0x2
7102400adc  mov x0,x21
7102400ae0  mov w1,w27
7102400ae4  bl 0x71035465b0
7102400ae8  mov x0,x22
7102400aec  bl 0x71039c1a50
7102400af0  ldr w22,[x24, #0x28]
7102400af4  mov w0,#0x10
7102400af8  orr w1,wzr,#0x30
7102400afc  bl 0x710392e290
7102400b00  mov x21,x0
7102400b04  cbnz x0,0x7102400b50
7102400b08  adrp x8,0x7105332000
7102400b0c  ldr x0,[x8, #0xf00]
7102400b10  cbz x0,0x7102400b4c
7102400b14  orr w8,wzr,#0x30
7102400b18  str wzr,[sp, #0x48]
7102400b1c  add x1,sp,#0x48
7102400b20  str x8,[sp, #0x150]
7102400b24  ldr x8,[x0]
7102400b28  ldr x8,[x8, #0x30]
7102400b2c  add x2,sp,#0x150
7102400b30  blr x8
7102400b34  tbz w0,#0x0,0x7102400b4c
7102400b38  mov w0,#0x10
7102400b3c  orr w1,wzr,#0x30
7102400b40  bl 0x710392e290
7102400b44  mov x21,x0
7102400b48  cbnz x0,0x7102400b50
7102400b4c  mov x21,xzr
7102400b50  mov w8,#0x1
7102400b54  str w22,[x21, #0x1c]
7102400b58  stp w28,w26,[x21, #0x24]
7102400b5c  strb w8,[x21, #0x20]
7102400b60  str w27,[x21, #0x2c]
7102400b64  ldr x9,[x20]
7102400b68  cbz x9,0x7102400dc8
7102400b6c  ldr x11,[sp, #0x38]
7102400b70  mov x8,x20
7102400b74  b 0x7102400b80
7102400b78  mov x8,x9
7102400b7c  mov x9,x10
7102400b80  ldr w10,[x9, #0x1c]
7102400b84  cmp w22,w10
7102400b88  b.cs 0x7102400b98
7102400b8c  ldr x10,[x9]
7102400b90  cbnz x10,0x7102400b78
7102400b94  b 0x7102400e94
7102400b98  cmp w10,w22
7102400b9c  b.cs 0x7102400dd4
7102400ba0  mov x8,x9
7102400ba4  ldr x10,[x8, #0x8]!
7102400ba8  cbz x10,0x7102400dd4
7102400bac  mov x9,x10
7102400bb0  b 0x7102400b80
7102400bb4  ldr w1,[x24, #0x2c]
7102400bb8  cmn w1,#0x1
7102400bbc  b.eq 0x7102400e40
7102400bc0  ldr x9,[x20]
7102400bc4  add w26,w1,#0xa, LSL #12
7102400bc8  cbz x9,0x7102400bfc
7102400bcc  mov x8,x20
7102400bd0  ldr w10,[x9, #0x1c]
7102400bd4  cmp w10,w26
7102400bd8  cset w10,cc
7102400bdc  csel x8,x8,x9,cc
7102400be0  ldr x9,[x9, w10, UXTW #0x3]
7102400be4  cbnz x9,0x7102400bd0
7102400be8  cmp x8,x20
7102400bec  b.eq 0x7102400bfc
7102400bf0  ldr w8,[x8, #0x1c]
7102400bf4  cmp w26,w8
7102400bf8  b.cs 0x710240151c
7102400bfc  add x0,sp,#0x150
7102400c00  orr w2,wzr,#0x7
7102400c04  bl 0x71017e1d70
7102400c08  ldr w21,[sp, #0x150]
7102400c0c  cmp w21,w19
7102400c10  b.eq 0x7102400c24
7102400c14  adrp x8,0x7105332000
7102400c18  ldr x0,[x8, #0xf20]
7102400c1c  mov w1,w21
7102400c20  bl 0x7103540a00
7102400c24  add x0,sp,#0x150
7102400c28  bl 0x710353f120
7102400c2c  ldr w1,[x24, #0x2c]
7102400c30  add x0,sp,#0x150
7102400c34  mov w2,#0x8
7102400c38  bl 0x71017e1d70
7102400c3c  ldr w27,[sp, #0x150]
7102400c40  cmp w27,w19
7102400c44  b.eq 0x7102400c58
7102400c48  adrp x8,0x7105332000
7102400c4c  ldr x0,[x8, #0xf20]
7102400c50  mov w1,w27
7102400c54  bl 0x7103540a00
7102400c58  add x0,sp,#0x150
7102400c5c  bl 0x710353f120
7102400c60  ldr w1,[x24, #0x2c]
7102400c64  add x0,sp,#0x150
7102400c68  mov w2,#0x9
7102400c6c  bl 0x71017e1d70
7102400c70  ldr w28,[sp, #0x150]
7102400c74  cmp w28,w19
7102400c78  b.eq 0x7102400c8c
7102400c7c  adrp x8,0x7105332000
7102400c80  ldr x0,[x8, #0xf20]
7102400c84  mov w1,w28
7102400c88  bl 0x7103540a00
7102400c8c  add x0,sp,#0x150
7102400c90  bl 0x710353f120
7102400c94  cmp w21,w19
7102400c98  b.ne 0x7102400ee0
7102400c9c  cmp w27,w19
7102400ca0  b.ne 0x7102400f18
7102400ca4  cmp w28,w19
7102400ca8  b.eq 0x7102400cdc
7102400cac  adrp x8,0x7105332000
7102400cb0  ldr x22,[x8, #0xf28]
7102400cb4  ldr x23,[x22]
7102400cb8  mov x0,x23
7102400cbc  bl 0x71039c1a40
7102400cc0  mov w2,#0x2
7102400cc4  mov x0,x22
7102400cc8  mov w1,w28
7102400ccc  bl 0x71035465b0
7102400cd0  mov x0,x23
7102400cd4  ldr x23,[sp, #0x28]
7102400cd8  bl 0x71039c1a50
7102400cdc  ldr x0,[sp, #0x38]
7102400ce0  mov w8,#0x1
7102400ce4  add x2,sp,#0x150
7102400ce8  mov w1,w26
7102400cec  str w26,[sp, #0x150]
7102400cf0  strb w8,[sp, #0x154]
7102400cf4  str w21,[sp, #0x158]
7102400cf8  str w27,[sp, #0x15c]
7102400cfc  str w28,[sp, #0x160]
7102400d00  bl 0x7102401c40
7102400d04  ldr w1,[sp, #0x160]
7102400d08  cmp w1,w19
7102400d0c  b.eq 0x7102400d20
7102400d10  adrp x8,0x7105332000
7102400d14  ldr x0,[x8, #0xf20]
7102400d18  bl 0x7103540b10
7102400d1c  str w19,[sp, #0x160]
7102400d20  ldr w1,[sp, #0x15c]
7102400d24  cmp w1,w19
7102400d28  b.eq 0x7102400d3c
7102400d2c  adrp x8,0x7105332000
7102400d30  ldr x0,[x8, #0xf20]
7102400d34  bl 0x7103540b10
7102400d38  str w19,[sp, #0x15c]
7102400d3c  ldr w1,[sp, #0x158]
7102400d40  cmp w1,w19
7102400d44  b.eq 0x710240151c
7102400d48  adrp x8,0x7105332000
7102400d4c  ldr x0,[x8, #0xf20]
7102400d50  bl 0x7103540b10
7102400d54  str w19,[sp, #0x158]
7102400d58  b 0x710240151c
7102400d5c  adrp x8,0x7105332000
7102400d60  ldr x21,[x8, #0xf28]
7102400d64  ldr x22,[x21]
7102400d68  mov x0,x22
7102400d6c  bl 0x71039c1a40
7102400d70  mov w2,#0x2
7102400d74  mov x0,x21
7102400d78  mov w1,w28
7102400d7c  bl 0x71035465b0
7102400d80  mov x0,x22
7102400d84  bl 0x71039c1a50
7102400d88  cmp w26,w19
7102400d8c  b.eq 0x7102400abc
7102400d90  adrp x8,0x7105332000
7102400d94  ldr x21,[x8, #0xf28]
7102400d98  ldr x22,[x21]
7102400d9c  mov x0,x22
7102400da0  bl 0x71039c1a40
7102400da4  mov w2,#0x2
7102400da8  mov x0,x21
7102400dac  mov w1,w26
7102400db0  bl 0x71035465b0
7102400db4  mov x0,x22
7102400db8  bl 0x71039c1a50
7102400dbc  cmp w27,w19
7102400dc0  b.ne 0x7102400ac4
7102400dc4  b 0x7102400af0
7102400dc8  ldr x11,[sp, #0x38]
7102400dcc  mov x9,x20
7102400dd0  mov x8,x20
7102400dd4  ldr x10,[x8]
7102400dd8  cbz x10,0x7102400ea0
7102400ddc  cmp w27,w19
7102400de0  b.eq 0x7102400dfc
7102400de4  adrp x8,0x7105332000
7102400de8  ldr x0,[x8, #0xf20]
7102400dec  mov w1,w27
7102400df0  bl 0x7103540b10
7102400df4  ldr w26,[x21, #0x28]
7102400df8  str w19,[x21, #0x2c]
7102400dfc  cmp w26,w19
7102400e00  b.eq 0x7102400e18
7102400e04  adrp x8,0x7105332000
7102400e08  ldr x0,[x8, #0xf20]
7102400e0c  mov w1,w26
7102400e10  bl 0x7103540b10
7102400e14  str w19,[x21, #0x28]
7102400e18  ldr w1,[x21, #0x24]
7102400e1c  cmp w1,w19
7102400e20  b.eq 0x7102400e34
7102400e24  adrp x8,0x7105332000
7102400e28  ldr x0,[x8, #0xf20]
7102400e2c  bl 0x7103540b10
7102400e30  str w19,[x21, #0x24]
7102400e34  mov x0,x21
7102400e38  bl 0x710392eb40
7102400e3c  b 0x710240151c
7102400e40  ldrb w8,[x24, #0x3e]
7102400e44  cbz w8,0x710240151c
7102400e48  ldrsw x8,[x24, #0xc8]
7102400e4c  add x27,x24,#0xcc
7102400e50  cbz w8,0x7102400f54
7102400e54  add x9,x27,w8, UXTW 
7102400e58  mov w10,#0xffffffff
7102400e5c  mov x11,x27
7102400e60  ldrb w12,[x11], #0x1
7102400e64  sub w13,w12,#0x41
7102400e68  add w14,w12,#0x20
7102400e6c  cmp w13,#0x1a
7102400e70  csel w12,w14,w12,cc
7102400e74  eor w12,w12,w10
7102400e78  and w12,w12,#0xff
7102400e7c  cmp x11,x9
7102400e80  ldr w12,[x25, w12, UXTW #0x2]
7102400e84  eor w10,w12,w10, LSR #0x8
7102400e88  b.cc 0x7102400e60
7102400e8c  mvn w26,w10
7102400e90  b 0x7102400f58
7102400e94  mov x8,x9
7102400e98  ldr x10,[x8]
7102400e9c  cbnz x10,0x7102400ddc
7102400ea0  stp xzr,xzr,[x21]
7102400ea4  str x9,[x21, #0x10]
7102400ea8  str x21,[x8]
7102400eac  ldr x9,[x11]
7102400eb0  ldr x9,[x9]
7102400eb4  cbz x9,0x7102400ec0
7102400eb8  str x9,[x11]
7102400ebc  ldr x21,[x8]
7102400ec0  ldr x22,[sp, #0x30]
7102400ec4  ldr x0,[x22, #0x50]
7102400ec8  mov x1,x21
7102400ecc  bl 0x71003e59f0
7102400ed0  ldr x8,[x22, #0x58]
7102400ed4  add x8,x8,#0x1
7102400ed8  str x8,[x22, #0x58]
7102400edc  b 0x710240151c
7102400ee0  adrp x8,0x7105332000
7102400ee4  ldr x22,[x8, #0xf28]
7102400ee8  ldr x23,[x22]
7102400eec  mov x0,x23
7102400ef0  bl 0x71039c1a40
7102400ef4  mov w2,#0x2
7102400ef8  mov x0,x22
7102400efc  mov w1,w21
7102400f00  bl 0x71035465b0
7102400f04  mov x0,x23
7102400f08  ldr x23,[sp, #0x28]
7102400f0c  bl 0x71039c1a50
7102400f10  cmp w27,w19
7102400f14  b.eq 0x7102400ca4
7102400f18  adrp x8,0x7105332000
7102400f1c  ldr x22,[x8, #0xf28]
7102400f20  ldr x23,[x22]
7102400f24  mov x0,x23
7102400f28  bl 0x71039c1a40
7102400f2c  mov w2,#0x2
7102400f30  mov x0,x22
7102400f34  mov w1,w27
7102400f38  bl 0x71035465b0
7102400f3c  mov x0,x23
7102400f40  ldr x23,[sp, #0x28]
7102400f44  bl 0x71039c1a50
7102400f48  cmp w28,w19
7102400f4c  b.ne 0x7102400cac
7102400f50  b 0x7102400cdc
7102400f54  mov x26,xzr
7102400f58  bfm x26,x8,#0x20,#0x7
7102400f5c  ldr x8,[sp, #0x20]
7102400f60  ldr x9,[x8]
7102400f64  cbz x9,0x7102400fa4
7102400f68  ldr x8,[sp, #0x20]
7102400f6c  ldr x10,[x9, #0x20]
7102400f70  and x10,x10,#0xffffffffff
7102400f74  cmp x10,x26
7102400f78  cset w10,cc
7102400f7c  csel x8,x8,x9,cc
7102400f80  ldr x9,[x9, w10, UXTW #0x3]
7102400f84  cbnz x9,0x7102400f6c
7102400f88  ldr x9,[sp, #0x20]
7102400f8c  cmp x8,x9
7102400f90  b.eq 0x7102400fa4
7102400f94  ldr x8,[x8, #0x20]
7102400f98  and x8,x8,#0xffffffffff
7102400f9c  cmp x26,x8
7102400fa0  b.cs 0x710240151c
7102400fa4  add x0,sp,#0x150
7102400fa8  adrp x1,0x71043cd000
7102400fac  add x1,x1,#0x23a
7102400fb0  mov x2,x27
7102400fb4  strb wzr,[sp, #0x158]
7102400fb8  str xzr,[sp, #0x150]
7102400fbc  bl 0x710062dc20
7102400fc0  adrp x8,0x7105332000
7102400fc4  ldr x21,[x8, #0xf20]
7102400fc8  ldrb w11,[sp, #0x158]
7102400fcc  cbz w11,0x7102401024
7102400fd0  ldr x9,[sp, #0x8]
7102400fd4  mov x8,xzr
7102400fd8  mov w10,#0xffffffff
7102400fdc  orr x14,xzr,#0x100000000
7102400fe0  and w11,w11,#0xff
7102400fe4  sub w12,w11,#0x41
7102400fe8  add w13,w11,#0x20
7102400fec  cmp w12,#0x1a
7102400ff0  csel w11,w13,w11,cc
7102400ff4  eor w11,w11,w10
7102400ff8  and w11,w11,#0xff
7102400ffc  ldr w11,[x25, w11, UXTW #0x2]
7102401000  eor w10,w11,w10, LSR #0x8
7102401004  ldrb w11,[x9], #0x1
7102401008  add x8,x8,x14
710240100c  cbnz w11,0x7102400fe0
7102401010  mvn w9,w10
7102401014  and x8,x8,#0xff00000000
7102401018  orr x8,x8,x9
710240101c  cbnz x8,0x7102401034
7102401020  b 0x71024010b0
7102401024  mov x9,xzr
7102401028  mov x8,xzr
710240102c  orr x8,x8,x9
7102401030  cbz x8,0x71024010b0
7102401034  ldr x9,[x21, #0x78]
7102401038  ldr x9,[x9]
710240103c  ldp x10,x9,[x9, #0x50]
7102401040  ldr w11,[x10, #0x4]
7102401044  udiv x12,x8,x11
7102401048  msub x11,x12,x11,x8
710240104c  add x10,x10,x11, LSL #0x3
7102401050  ldp w12,w11,[x10, #0x8]
7102401054  add x9,x9,x12, LSL #0x3
7102401058  add x10,x9,x11, LSL #0x3
710240105c  cbz w11,0x7102401090
7102401060  cmp x11,#0x0
7102401064  cinc x12,x11,lt
7102401068  asr x12,x12,#0x1
710240106c  add x13,x9,x12, LSL #0x3
7102401070  ldr x14,[x13], #0x8
7102401074  and x14,x14,#0xffffffffff
7102401078  mvn x15,x12
710240107c  add x11,x11,x15
7102401080  cmp x14,x8
7102401084  csel x11,x11,x12,cc
7102401088  csel x9,x13,x9,cc
710240108c  cbnz x11,0x7102401060
7102401090  cmp x9,x10
7102401094  b.eq 0x71024010b0
7102401098  ldr x9,[x9]
710240109c  and x10,x9,#0xffffffffff
71024010a0  cmp x10,x8
71024010a4  lsr x28,x9,#0x28
71024010a8  ccmp w28,w19,#0x4,eq
71024010ac  b.ne 0x71024008cc
71024010b0  orr w8,wzr,#0xffffff
71024010b4  str w8,[sp, #0x18]
71024010b8  add x0,sp,#0x150
71024010bc  adrp x1,0x71043bc000
71024010c0  add x1,x1,#0x3c4
71024010c4  mov x2,x27
71024010c8  strb wzr,[sp, #0x158]
71024010cc  str xzr,[sp, #0x150]
71024010d0  bl 0x710062dc20
71024010d4  adrp x8,0x7105332000
71024010d8  ldr x21,[x8, #0xf20]
71024010dc  ldrb w11,[sp, #0x158]
71024010e0  cbz w11,0x7102401138
71024010e4  ldr x9,[sp, #0x8]
71024010e8  mov x8,xzr
71024010ec  mov w10,#0xffffffff
71024010f0  orr x14,xzr,#0x100000000
71024010f4  and w11,w11,#0xff
71024010f8  sub w12,w11,#0x41
71024010fc  add w13,w11,#0x20
7102401100  cmp w12,#0x1a
7102401104  csel w11,w13,w11,cc
7102401108  eor w11,w11,w10
710240110c  and w11,w11,#0xff
7102401110  ldr w11,[x25, w11, UXTW #0x2]
7102401114  eor w10,w11,w10, LSR #0x8
7102401118  ldrb w11,[x9], #0x1
710240111c  add x8,x8,x14
7102401120  cbnz w11,0x71024010f4
7102401124  mvn w9,w10
7102401128  and x8,x8,#0xff00000000
710240112c  orr x8,x8,x9
7102401130  cbnz x8,0x7102401148
7102401134  b 0x71024011c4
7102401138  mov x9,xzr
710240113c  mov x8,xzr
7102401140  orr x8,x8,x9
7102401144  cbz x8,0x71024011c4
7102401148  ldr x9,[x21, #0x78]
710240114c  ldr x9,[x9]
7102401150  ldp x10,x9,[x9, #0x50]
7102401154  ldr w11,[x10, #0x4]
7102401158  udiv x12,x8,x11
710240115c  msub x11,x12,x11,x8
7102401160  add x10,x10,x11, LSL #0x3
7102401164  ldp w12,w11,[x10, #0x8]
7102401168  add x9,x9,x12, LSL #0x3
710240116c  add x10,x9,x11, LSL #0x3
7102401170  cbz w11,0x71024011a4
7102401174  cmp x11,#0x0
7102401178  cinc x12,x11,lt
710240117c  asr x12,x12,#0x1
7102401180  add x13,x9,x12, LSL #0x3
7102401184  ldr x14,[x13], #0x8
7102401188  and x14,x14,#0xffffffffff
710240118c  mvn x15,x12
7102401190  add x11,x11,x15
7102401194  cmp x14,x8
7102401198  csel x11,x11,x12,cc
710240119c  csel x9,x13,x9,cc
71024011a0  cbnz x11,0x7102401174
71024011a4  cmp x9,x10
71024011a8  b.eq 0x71024011c4
71024011ac  ldr x9,[x9]
71024011b0  and x10,x9,#0xffffffffff
71024011b4  cmp x10,x8
71024011b8  lsr x28,x9,#0x28
71024011bc  ccmp w28,w19,#0x4,eq
71024011c0  b.ne 0x7102400928
71024011c4  orr w28,wzr,#0xffffff
71024011c8  add x0,sp,#0x150
71024011cc  adrp x1,0x71042d4000
71024011d0  add x1,x1,#0x1a7
71024011d4  mov x2,x27
71024011d8  strb wzr,[sp, #0x158]
71024011dc  str xzr,[sp, #0x150]
71024011e0  bl 0x710062dc20
71024011e4  adrp x8,0x7105332000
71024011e8  ldr x21,[x8, #0xf20]
71024011ec  ldrb w11,[sp, #0x158]
71024011f0  cbz w11,0x7102401248
71024011f4  ldr x9,[sp, #0x8]
71024011f8  mov x8,xzr
71024011fc  mov w10,#0xffffffff
7102401200  orr x14,xzr,#0x100000000
7102401204  and w11,w11,#0xff
7102401208  sub w12,w11,#0x41
710240120c  add w13,w11,#0x20
7102401210  cmp w12,#0x1a
7102401214  csel w11,w13,w11,cc
7102401218  eor w11,w11,w10
710240121c  and w11,w11,#0xff
7102401220  ldr w11,[x25, w11, UXTW #0x2]
7102401224  eor w10,w11,w10, LSR #0x8
7102401228  ldrb w11,[x9], #0x1
710240122c  add x8,x8,x14
7102401230  cbnz w11,0x7102401204
7102401234  mvn w9,w10
7102401238  and x8,x8,#0xff00000000
710240123c  orr x8,x8,x9
7102401240  cbnz x8,0x7102401258
7102401244  b 0x71024012d4
7102401248  mov x9,xzr
710240124c  mov x8,xzr
7102401250  orr x8,x8,x9
7102401254  cbz x8,0x71024012d4
7102401258  ldr x9,[x21, #0x78]
710240125c  ldr x9,[x9]
7102401260  ldp x10,x9,[x9, #0x50]
7102401264  ldr w11,[x10, #0x4]
7102401268  udiv x12,x8,x11
710240126c  msub x11,x12,x11,x8
7102401270  add x10,x10,x11, LSL #0x3
7102401274  ldp w12,w11,[x10, #0x8]
7102401278  add x9,x9,x12, LSL #0x3
710240127c  add x10,x9,x11, LSL #0x3
7102401280  cbz w11,0x71024012b4
7102401284  cmp x11,#0x0
7102401288  cinc x12,x11,lt
710240128c  asr x12,x12,#0x1
7102401290  add x13,x9,x12, LSL #0x3
7102401294  ldr x14,[x13], #0x8
7102401298  and x14,x14,#0xffffffffff
710240129c  mvn x15,x12
71024012a0  add x11,x11,x15
71024012a4  cmp x14,x8
71024012a8  csel x11,x11,x12,cc
71024012ac  csel x9,x13,x9,cc
71024012b0  cbnz x11,0x7102401284
71024012b4  cmp x9,x10
71024012b8  b.eq 0x71024012d4
71024012bc  ldr x9,[x9]
71024012c0  and x10,x9,#0xffffffffff
71024012c4  cmp x10,x8
71024012c8  lsr x27,x9,#0x28
71024012cc  ccmp w27,w19,#0x4,eq
71024012d0  b.ne 0x710240097c
71024012d4  orr w22,wzr,#0xffffff
71024012d8  ldr w8,[sp, #0x18]
71024012dc  cmp w8,w19
71024012e0  b.ne 0x7102401404
71024012e4  cmp w28,w19
71024012e8  b.ne 0x710240143c
71024012ec  cmp w22,w19
71024012f0  b.eq 0x7102401324
71024012f4  adrp x8,0x7105332000
71024012f8  ldr x21,[x8, #0xf28]
71024012fc  ldr x23,[x21]
7102401300  mov x0,x23
7102401304  bl 0x71039c1a40
7102401308  mov w2,#0x2
710240130c  mov x0,x21
7102401310  mov w1,w22
7102401314  bl 0x71035465b0
7102401318  mov x0,x23
710240131c  ldr x23,[sp, #0x28]
7102401320  bl 0x71039c1a50
7102401324  ldr w8,[sp, #0x10]
7102401328  add w27,w8,#0xb, LSL #12
710240132c  mov w8,#0x1
7102401330  strb w8,[sp, #0x4c]
7102401334  ldr w8,[sp, #0x18]
7102401338  ldr x0,[sp, #0x38]
710240133c  add x2,sp,#0x48
7102401340  mov w1,w27
7102401344  str w27,[sp, #0x48]
7102401348  str w22,[sp, #0x58]
710240134c  stp w8,w28,[sp, #0x50]
7102401350  bl 0x7102401c40
7102401354  ldr w1,[sp, #0x58]
7102401358  cmp w1,w19
710240135c  b.eq 0x7102401370
7102401360  adrp x8,0x7105332000
7102401364  ldr x0,[x8, #0xf20]
7102401368  bl 0x7103540b10
710240136c  str w19,[sp, #0x58]
7102401370  ldr w1,[sp, #0x54]
7102401374  cmp w1,w19
7102401378  b.eq 0x710240138c
710240137c  adrp x8,0x7105332000
7102401380  ldr x0,[x8, #0xf20]
7102401384  bl 0x7103540b10
7102401388  str w19,[sp, #0x54]
710240138c  ldr w1,[sp, #0x50]
7102401390  cmp w1,w19
7102401394  b.eq 0x71024013a8
7102401398  adrp x8,0x7105332000
710240139c  ldr x0,[x8, #0xf20]
71024013a0  bl 0x7103540b10
71024013a4  str w19,[sp, #0x50]
71024013a8  ldr x21,[sp, #0x20]
71024013ac  ldr x22,[x21]
71024013b0  cbnz x22,0x71024013cc
71024013b4  mov x22,x21
71024013b8  ldr x8,[x21]
71024013bc  cbnz x8,0x7102401510
71024013c0  b 0x7102401484
71024013c4  mov x21,x22
71024013c8  mov x22,x8
71024013cc  ldr x8,[x22, #0x20]
71024013d0  and x8,x8,#0xffffffffff
71024013d4  cmp x26,x8
71024013d8  b.cs 0x71024013e8
71024013dc  ldr x8,[x22]
71024013e0  cbnz x8,0x71024013c4
71024013e4  b 0x7102401478
71024013e8  cmp x8,x26
71024013ec  b.cs 0x710240147c
71024013f0  mov x21,x22
71024013f4  ldr x8,[x21, #0x8]!
71024013f8  cbz x8,0x710240147c
71024013fc  mov x22,x8
7102401400  b 0x71024013cc
7102401404  adrp x8,0x7105332000
7102401408  ldr x21,[x8, #0xf28]
710240140c  ldr x23,[x21]
7102401410  mov x0,x23
7102401414  bl 0x71039c1a40
7102401418  ldr w1,[sp, #0x18]
710240141c  mov w2,#0x2
7102401420  mov x0,x21
7102401424  bl 0x71035465b0
7102401428  mov x0,x23
710240142c  ldr x23,[sp, #0x28]
7102401430  bl 0x71039c1a50
7102401434  cmp w28,w19
7102401438  b.eq 0x71024012ec
710240143c  adrp x8,0x7105332000
7102401440  ldr x21,[x8, #0xf28]
7102401444  ldr x23,[x21]
7102401448  mov x0,x23
710240144c  bl 0x71039c1a40
7102401450  mov w2,#0x2
7102401454  mov x0,x21
7102401458  mov w1,w28
710240145c  bl 0x71035465b0
7102401460  mov x0,x23
7102401464  ldr x23,[sp, #0x28]
7102401468  bl 0x71039c1a50
710240146c  cmp w22,w19
7102401470  b.ne 0x71024012f4
7102401474  b 0x7102401324
7102401478  mov x21,x22
710240147c  ldr x8,[x21]
7102401480  cbnz x8,0x7102401510
7102401484  mov w0,#0x10
7102401488  orr w1,wzr,#0x30
710240148c  bl 0x710392e290
7102401490  mov x1,x0
7102401494  cbnz x0,0x71024014d0
7102401498  adrp x8,0x7105332000
710240149c  ldr x0,[x8, #0xf00]
71024014a0  orr w8,wzr,#0x30
71024014a4  str wzr,[sp, #0x40]
71024014a8  add x1,sp,#0x40
71024014ac  str x8,[sp, #0x48]
71024014b0  ldr x8,[x0]
71024014b4  ldr x8,[x8, #0x30]
71024014b8  add x2,sp,#0x48
71024014bc  blr x8
71024014c0  mov w0,#0x10
71024014c4  orr w1,wzr,#0x30
71024014c8  bl 0x710392e290
71024014cc  mov x1,x0
71024014d0  str x22,[x1, #0x10]
71024014d4  ldr x22,[sp, #0x30]
71024014d8  str x26,[x1, #0x20]
71024014dc  str w27,[x1, #0x28]
71024014e0  stp xzr,xzr,[x1]
71024014e4  str x1,[x21]
71024014e8  ldr x8,[x22, #0x30]
71024014ec  ldr x8,[x8]
71024014f0  cbz x8,0x71024014fc
71024014f4  str x8,[x22, #0x30]
71024014f8  ldr x1,[x21]
71024014fc  ldr x0,[x22, #0x38]
7102401500  bl 0x71003e59f0
7102401504  ldr x8,[x22, #0x40]
7102401508  add x8,x8,#0x1
710240150c  str x8,[x22, #0x40]
7102401510  ldr w8,[sp, #0x10]
7102401514  add w8,w8,#0x1
7102401518  str w8,[sp, #0x10]
710240151c  add x24,x24,#0x150
7102401520  cmp x24,x23
7102401524  b.ne 0x71024009d0
7102401528  ldr x9,[sp, #0x30]
710240152c  mov w8,#0x1
7102401530  strb w8,[x9, #0x9a]
7102401534  add sp,sp,#0x260
7102401538  ldp x29,x30,[sp, #0x50]
710240153c  ldp x20,x19,[sp, #0x40]
7102401540  ldp x22,x21,[sp, #0x30]
7102401544  ldp x24,x23,[sp, #0x20]
7102401548  ldp x26,x25,[sp, #0x10]
710240154c  ldp x28,x27,[sp], #0x60
7102401550  ret
