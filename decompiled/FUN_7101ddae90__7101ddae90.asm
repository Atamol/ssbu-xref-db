// addr:      7101ddae90
// offset:    0x1ddae90
// name:      FUN_7101ddae90
// mangled:   
// size:      1316

7101ddae90  sub sp,sp,#0xf0
7101ddae94  str x23,[sp, #0xb0]
7101ddae98  stp x22,x21,[sp, #0xc0]
7101ddae9c  stp x20,x19,[sp, #0xd0]
7101ddaea0  stp x29,x30,[sp, #0xe0]
7101ddaea4  add x29,sp,#0xe0
7101ddaea8  ldp x9,x10,[x0, #0x8]
7101ddaeac  sub x10,x10,x9
7101ddaeb0  sxtw x8,w1
7101ddaeb4  asr x10,x10,#0x2
7101ddaeb8  cmp x10,x8
7101ddaebc  b.ls 0x7101ddb39c
7101ddaec0  add x21,x9,x8, LSL #0x2
7101ddaec4  mov x22,x21
7101ddaec8  ldrsh w8,[x22], #0x2
7101ddaecc  cmn w8,#0x1
7101ddaed0  b.eq 0x7101ddb39c
7101ddaed4  cmp w8,#0x7cf
7101ddaed8  b.gt 0x7101ddb39c
7101ddaedc  adrp x20,0x710532f000
7101ddaee0  ldr x9,[x20, #0x730]
7101ddaee4  ldr x23,[x9, #0x8]
7101ddaee8  ldr x9,[x23, #0x1d8]
7101ddaeec  sxtw x8,w8
7101ddaef0  add x8,x9,x8, LSL #0x1
7101ddaef4  ldp x10,x9,[x9, #0x20]
7101ddaef8  ldrh w8,[x8, #0x60]
7101ddaefc  sub x9,x9,x10
7101ddaf00  mov w10,#0xcccd
7101ddaf04  movk w10,#0xcccc, LSL #16
7101ddaf08  lsr x9,x9,#0x6
7101ddaf0c  mul w9,w9,w10
7101ddaf10  cmp w9,w8
7101ddaf14  b.ls 0x7101ddb39c
7101ddaf18  adrp x1,0x71042c5000
7101ddaf1c  add x1,x1,#0x423
7101ddaf20  sub x8,x29,#0x40
7101ddaf24  mov x0,x2
7101ddaf28  mov x19,x2
7101ddaf2c  bl 0x7103776640
7101ddaf30  ldrsh w8,[x21]
7101ddaf34  mov w1,wzr
7101ddaf38  cmn w8,#0x1
7101ddaf3c  b.eq 0x7101ddafd4
7101ddaf40  cmp w8,#0x7cf
7101ddaf44  b.gt 0x7101ddafd4
7101ddaf48  ldr x9,[x20, #0x730]
7101ddaf4c  ldr x9,[x9, #0x8]
7101ddaf50  ldr x10,[x9, #0x1d8]
7101ddaf54  sxtw x8,w8
7101ddaf58  add x8,x10,x8, LSL #0x1
7101ddaf5c  orr x11,xzr,#-0x3333333333333334
7101ddaf60  ldp x9,x10,[x10, #0x20]
7101ddaf64  sub x10,x10,x9
7101ddaf68  asr x10,x10,#0x6
7101ddaf6c  movk x11,#0xcccd
7101ddaf70  mul x10,x10,x11
7101ddaf74  ldrh w8,[x8, #0x60]
7101ddaf78  cmp w10,w8
7101ddaf7c  b.ls 0x7101ddafd0
7101ddaf80  mov w11,#0x140
7101ddaf84  madd x9,x8,x11,x9
7101ddaf88  adrp x11,0x7105182000
7101ddaf8c  add x11,x11,#0xb08
7101ddaf90  cmp x10,x8
7101ddaf94  csel x8,x9,x11,hi
7101ddaf98  ldrb w9,[x8, #0x5e]
7101ddaf9c  cbz w9,0x7101ddafa8
7101ddafa0  mov w1,#0x4
7101ddafa4  b 0x7101ddafd4
7101ddafa8  ldrb w8,[x8, #0x6c]
7101ddafac  sub w8,w8,#0x1
7101ddafb0  cmp w8,#0x2
7101ddafb4  b.hi 0x7101ddafd0
7101ddafb8  and x8,x8,#0xff
7101ddafbc  lsl x8,x8,#0x3
7101ddafc0  mov w9,#0x301
7101ddafc4  movk w9,#0x2, LSL #16
7101ddafc8  lsr w1,w9,w8
7101ddafcc  b 0x7101ddafd4
7101ddafd0  mov w1,wzr
7101ddafd4  add x0,sp,#0x58
7101ddafd8  mov w2,wzr
7101ddafdc  add x20,sp,#0x58
7101ddafe0  bl 0x710339dde0
7101ddafe4  add x1,x20,#0x8
7101ddafe8  ldur x20,[x29, #-0x38]
7101ddafec  fmov s0,0x3f800000
7101ddaff0  mov x0,x20
7101ddaff4  bl 0x7103778300
7101ddaff8  ldrsh x8,[x21]
7101ddaffc  ldr x10,[x23, #0x1d8]
7101ddb000  cmn x8,#0x1
7101ddb004  b.eq 0x7101ddb014
7101ddb008  add x8,x10,x8, LSL #0x1
7101ddb00c  ldrh w9,[x8, #0x60]
7101ddb010  b 0x7101ddb018
7101ddb014  mov w9,#0xffffffff
7101ddb018  ldp x11,x10,[x10, #0x20]
7101ddb01c  sub x10,x10,x11
7101ddb020  orr x12,xzr,#-0x3333333333333334
7101ddb024  movk x12,#0xcccd
7101ddb028  asr x10,x10,#0x6
7101ddb02c  mul x10,x10,x12
7101ddb030  mov w12,#0x140
7101ddb034  madd x11,x9,x12,x11
7101ddb038  adrp x12,0x7105182000
7101ddb03c  add x12,x12,#0xb08
7101ddb040  cmp x10,x9
7101ddb044  csel x9,x11,x12,hi
7101ddb048  ldrb w9,[x9, #0x68]
7101ddb04c  mov w8,#0x9dc5
7101ddb050  movk w8,#0x811c, LSL #16
7101ddb054  cmp w9,#0x3
7101ddb058  b.hi 0x7101ddb0c0
7101ddb05c  adrp x10,0x71044fb000
7101ddb060  add x10,x10,#0x658
7101ddb064  ldrsw x9,[x10, x9, LSL #0x2]
7101ddb068  add x9,x9,x10
7101ddb06c  br x9
7101ddb070  mov x11,#0x6c63
7101ddb074  movk x11,#0x7361, LSL #16
7101ddb078  mov x9,#0xa00000000
7101ddb07c  add x10,sp,#0x10
7101ddb080  movk x11,#0x5f73, LSL #32
7101ddb084  movk x11,#0x6f6e, LSL #48
7101ddb088  stp x9,x11,[sp, #0x10]
7101ddb08c  add x1,x10,#0x8
7101ddb090  add x9,x10,#0x9
7101ddb094  mov w10,#0x656e
7101ddb098  strh w10,[sp, #0x20]
7101ddb09c  mov w11,#0x63
7101ddb0a0  mov w10,#0x89
7101ddb0a4  strb wzr,[sp, #0x22]
7101ddb0a8  mul w8,w8,w10
7101ddb0ac  and w11,w11,#0xff
7101ddb0b0  eor w8,w8,w11
7101ddb0b4  ldrb w11,[x9], #0x1
7101ddb0b8  cbnz w11,0x7101ddb0a8
7101ddb0bc  b 0x7101ddb1fc
7101ddb0c0  mov x11,#0x6c63
7101ddb0c4  movk x11,#0x7361, LSL #16
7101ddb0c8  mov x9,#0xa00000000
7101ddb0cc  add x10,sp,#0x10
7101ddb0d0  movk x11,#0x5f73, LSL #32
7101ddb0d4  movk x11,#0x6f6e, LSL #48
7101ddb0d8  stp x9,x11,[sp, #0x10]
7101ddb0dc  add x1,x10,#0x8
7101ddb0e0  add x9,x10,#0x9
7101ddb0e4  mov w10,#0x656e
7101ddb0e8  strh w10,[sp, #0x20]
7101ddb0ec  mov w11,#0x63
7101ddb0f0  mov w10,#0x89
7101ddb0f4  strb wzr,[sp, #0x22]
7101ddb0f8  mul w8,w8,w10
7101ddb0fc  and w11,w11,#0xff
7101ddb100  eor w8,w8,w11
7101ddb104  ldrb w11,[x9], #0x1
7101ddb108  cbnz w11,0x7101ddb0f8
7101ddb10c  b 0x7101ddb1fc
7101ddb110  mov x11,#0x6c63
7101ddb114  movk x11,#0x7361, LSL #16
7101ddb118  mov x9,#0xa00000000
7101ddb11c  add x10,sp,#0x10
7101ddb120  movk x11,#0x5f73, LSL #32
7101ddb124  movk x11,#0x6f68, LSL #48
7101ddb128  stp x9,x11,[sp, #0x10]
7101ddb12c  add x1,x10,#0x8
7101ddb130  add x9,x10,#0x9
7101ddb134  mov w10,#0x6570
7101ddb138  strh w10,[sp, #0x20]
7101ddb13c  mov w11,#0x63
7101ddb140  mov w10,#0x89
7101ddb144  strb wzr,[sp, #0x22]
7101ddb148  mul w8,w8,w10
7101ddb14c  and w11,w11,#0xff
7101ddb150  eor w8,w8,w11
7101ddb154  ldrb w11,[x9], #0x1
7101ddb158  cbnz w11,0x7101ddb148
7101ddb15c  b 0x7101ddb1fc
7101ddb160  mov x11,#0x6c63
7101ddb164  movk x11,#0x7361, LSL #16
7101ddb168  mov x9,#0x900000000
7101ddb16c  add x10,sp,#0x10
7101ddb170  movk x11,#0x5f73, LSL #32
7101ddb174  movk x11,#0x6361, LSL #48
7101ddb178  stp x9,x11,[sp, #0x10]
7101ddb17c  add x1,x10,#0x8
7101ddb180  add x9,x10,#0x9
7101ddb184  mov w10,#0x65
7101ddb188  strh w10,[sp, #0x20]
7101ddb18c  mov w11,#0x63
7101ddb190  mov w10,#0x89
7101ddb194  mul w8,w8,w10
7101ddb198  and w11,w11,#0xff
7101ddb19c  eor w8,w8,w11
7101ddb1a0  ldrb w11,[x9], #0x1
7101ddb1a4  cbnz w11,0x7101ddb194
7101ddb1a8  b 0x7101ddb1fc
7101ddb1ac  mov x11,#0x6c63
7101ddb1b0  movk x11,#0x7361, LSL #16
7101ddb1b4  orr x9,xzr,#0xc00000000
7101ddb1b8  add x10,sp,#0x10
7101ddb1bc  movk x11,#0x5f73, LSL #32
7101ddb1c0  movk x11,#0x656c, LSL #48
7101ddb1c4  stp x9,x11,[sp, #0x10]
7101ddb1c8  add x1,x10,#0x8
7101ddb1cc  add x9,x10,#0x9
7101ddb1d0  mov w10,#0x6567
7101ddb1d4  movk w10,#0x646e, LSL #16
7101ddb1d8  str w10,[sp, #0x20]
7101ddb1dc  mov w11,#0x63
7101ddb1e0  strb wzr,[sp, #0x24]
7101ddb1e4  mov w10,#0x89
7101ddb1e8  mul w8,w8,w10
7101ddb1ec  and w11,w11,#0xff
7101ddb1f0  eor w8,w8,w11
7101ddb1f4  ldrb w11,[x9], #0x1
7101ddb1f8  cbnz w11,0x7101ddb1e8
7101ddb1fc  fmov s0,0x3f800000
7101ddb200  mov x0,x20
7101ddb204  str w8,[sp, #0x10]
7101ddb208  bl 0x7103778300
7101ddb20c  adrp x1,0x7104308000
7101ddb210  add x1,x1,#0xa37
7101ddb214  mov x8,sp
7101ddb218  mov x0,x19
7101ddb21c  bl 0x7103776910
7101ddb220  ldrb w3,[x22]
7101ddb224  adrp x1,0x71042d6000
7101ddb228  add x1,x1,#0x7c6
7101ddb22c  mov x0,sp
7101ddb230  mov w2,#0x1
7101ddb234  bl 0x710377a280
7101ddb238  ldr x0,[sp, #0x8]
7101ddb23c  adrp x23,0x710523d000
7101ddb240  add x23,x23,#0x9a8
7101ddb244  stp x23,xzr,[sp]
7101ddb248  cbz x0,0x7101ddb250
7101ddb24c  bl 0x710392eb40
7101ddb250  ldrb w9,[x22]
7101ddb254  ldr x0,[x19, #0x8]
7101ddb258  fmov s0,0x3f800000
7101ddb25c  adrp x8,0x710438c000
7101ddb260  add x8,x8,#0xf86
7101ddb264  adrp x10,0x7104422000
7101ddb268  add x10,x10,#0x8f0
7101ddb26c  cmp w9,#0x0
7101ddb270  csel x1,x10,x8,eq
7101ddb274  bl 0x7103778300
7101ddb278  mov w0,#0x10
7101ddb27c  mov w1,#0x8
7101ddb280  bl 0x710392e290
7101ddb284  mov x21,x0
7101ddb288  cbnz x0,0x7101ddb2d4
7101ddb28c  adrp x8,0x7105332000
7101ddb290  ldr x0,[x8, #0xf00]
7101ddb294  cbz x0,0x7101ddb2d0
7101ddb298  mov w8,#0x8
7101ddb29c  stur wzr,[x29, #-0x24]
7101ddb2a0  sub x1,x29,#0x24
7101ddb2a4  str x8,[sp]
7101ddb2a8  ldr x8,[x0]
7101ddb2ac  ldr x8,[x8, #0x30]
7101ddb2b0  mov x2,sp
7101ddb2b4  blr x8
7101ddb2b8  tbz w0,#0x0,0x7101ddb2d0
7101ddb2bc  mov w0,#0x10
7101ddb2c0  mov w1,#0x8
7101ddb2c4  bl 0x710392e290
7101ddb2c8  mov x21,x0
7101ddb2cc  cbnz x0,0x7101ddb2d4
7101ddb2d0  mov x21,xzr
7101ddb2d4  str xzr,[x21]
7101ddb2d8  ldr x8,[x19, #0x8]
7101ddb2dc  ldr x8,[x8, #0x8]
7101ddb2e0  cbz x8,0x7101ddb348
7101ddb2e4  ldr x0,[x8, #0x60]
7101ddb2e8  cbz x0,0x7101ddb348
7101ddb2ec  ldr x8,[x8, #0x18]
7101ddb2f0  add x1,x8,#0xb0
7101ddb2f4  bl 0x7103796f20
7101ddb2f8  str x0,[x21]
7101ddb2fc  cbz x0,0x7101ddb36c
7101ddb300  ldrb w8,[x22]
7101ddb304  cmp w8,#0x0
7101ddb308  ldr x8,[x0]
7101ddb30c  cset w1,ne
7101ddb310  ldr x8,[x8, #0x1f8]
7101ddb314  mov x19,x0
7101ddb318  blr x8
7101ddb31c  ldr x8,[x19]
7101ddb320  ldr x8,[x8, #0x200]
7101ddb324  mov x0,x19
7101ddb328  blr x8
7101ddb32c  tbz w0,#0x0,0x7101ddb350
7101ddb330  ldr x8,[x19]
7101ddb334  ldr x8,[x8, #0x210]
7101ddb338  mov x0,x19
7101ddb33c  blr x8
7101ddb340  eor w8,w0,#0x1
7101ddb344  b 0x7101ddb354
7101ddb348  str xzr,[x21]
7101ddb34c  b 0x7101ddb36c
7101ddb350  mov w8,#0x1
7101ddb354  ldr x9,[x19]
7101ddb358  ldr x9,[x9, #0x388]
7101ddb35c  and w1,w8,#0x1
7101ddb360  mov x0,x19
7101ddb364  mov w2,wzr
7101ddb368  blr x9
7101ddb36c  mov x0,x21
7101ddb370  bl 0x710392eb40
7101ddb374  adrp x8,0x710523d000
7101ddb378  add x8,x8,#0x988
7101ddb37c  stp x8,xzr,[x29, #-0x40]
7101ddb380  cbz x20,0x7101ddb39c
7101ddb384  ldr x0,[x20, #0x18]
7101ddb388  stp x23,xzr,[x20, #0x10]
7101ddb38c  cbz x0,0x7101ddb394
7101ddb390  bl 0x710392eb40
7101ddb394  mov x0,x20
7101ddb398  bl 0x710392eb40
7101ddb39c  ldp x29,x30,[sp, #0xe0]
7101ddb3a0  ldr x23,[sp, #0xb0]
7101ddb3a4  ldp x20,x19,[sp, #0xd0]
7101ddb3a8  ldp x22,x21,[sp, #0xc0]
7101ddb3ac  add sp,sp,#0xf0
7101ddb3b0  ret
