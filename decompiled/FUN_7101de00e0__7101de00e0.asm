// addr:      7101de00e0
// offset:    0x1de00e0
// name:      FUN_7101de00e0
// mangled:   
// size:      3956

7101de00e0  sub sp,sp,#0x1d0
7101de00e4  stp d9,d8,[sp, #0x160]
7101de00e8  stp x28,x27,[sp, #0x170]
7101de00ec  stp x26,x25,[sp, #0x180]
7101de00f0  stp x24,x23,[sp, #0x190]
7101de00f4  stp x22,x21,[sp, #0x1a0]
7101de00f8  stp x20,x19,[sp, #0x1b0]
7101de00fc  stp x29,x30,[sp, #0x1c0]
7101de0100  add x29,sp,#0x1c0
7101de0104  ldr w8,[x0, #0x68]
7101de0108  mov x19,x0
7101de010c  cmp w8,#0x3
7101de0110  b.eq 0x7101de06a8
7101de0114  cmp w8,#0x2
7101de0118  b.ne 0x7101de0fa8
7101de011c  adrp x8,0x7105329000
7101de0120  ldr x8,[x8, #0xf98]
7101de0124  ldr x8,[x8]
7101de0128  ldr x8,[x8, #0x20]
7101de012c  ldr x0,[x8, #0x8]
7101de0130  bl 0x710323cb80
7101de0134  tbz w0,#0x0,0x7101de0788
7101de0138  mov x12,x19
7101de013c  sub x8,x29,#0xc0
7101de0140  add x9,sp,#0xb8
7101de0144  ldr x10,[x12, #0x70]!
7101de0148  add x8,x8,#0x8
7101de014c  adrp x11,0x710532f000
7101de0150  str x8,[sp, #0x20]
7101de0154  add x8,x9,#0x8
7101de0158  ldr x11,[x11, #0x730]
7101de015c  str x8,[sp, #0x18]
7101de0160  add x8,x9,#0x9
7101de0164  stp x12,x8,[sp]
7101de0168  ldr x8,[x12, #0x8]
7101de016c  ldr x9,[x11, #0x8]
7101de0170  fmov s8,0x3f800000
7101de0174  fmov s9,wzr
7101de0178  adrp x23,0x71042b4000
7101de017c  add x23,x23,#0x824
7101de0180  adrp x22,0x710523d000
7101de0184  add x22,x22,#0x9a8
7101de0188  sub x26,x12,#0x18
7101de018c  adrp x24,0x710523d000
7101de0190  add x24,x24,#0x988
7101de0194  mov w25,#0x89
7101de0198  sub x8,x8,x10
7101de019c  mov x20,xzr
7101de01a0  str x9,[sp, #0x10]
7101de01a4  ubfx x28,x8,#0x3,#0x20
7101de01a8  sub x8,x29,#0x78
7101de01ac  mov x0,x26
7101de01b0  mov x1,x23
7101de01b4  mov w2,w20
7101de01b8  bl 0x7103776640
7101de01bc  ldur x8,[x29, #-0x70]
7101de01c0  ldr x0,[x8, #0x8]
7101de01c4  cbz x0,0x7101de01e8
7101de01c8  adrp x1,0x710432a000
7101de01cc  add x1,x1,#0x70e
7101de01d0  bl 0x71037964b0
7101de01d4  cbz x0,0x7101de01e8
7101de01d8  ldr x8,[x0]
7101de01dc  ldr x8,[x8, #0x1a0]
7101de01e0  mov v0.16B,v9.16B
7101de01e4  blr x8
7101de01e8  ldur x8,[x29, #-0x70]
7101de01ec  ldr x8,[x8, #0x8]
7101de01f0  cmp x20,x28
7101de01f4  b.cs 0x7101de02d8
7101de01f8  cbz x8,0x7101de0210
7101de01fc  ldr x8,[x8, #0x18]
7101de0200  cbz x8,0x7101de0210
7101de0204  ldrb w9,[x8, #0x58]
7101de0208  orr w9,w9,#0x1
7101de020c  strb w9,[x8, #0x58]
7101de0210  ldp x8,x9,[x19, #0x70]
7101de0214  sub x9,x9,x8
7101de0218  asr x9,x9,#0x3
7101de021c  cmp x9,x20
7101de0220  b.ls 0x7101de104c
7101de0224  ldr x8,[x8, x20, LSL #0x3]
7101de0228  ldrh w27,[x8, #0x8]
7101de022c  sub x1,x29,#0x78
7101de0230  mov w2,#0x1
7101de0234  mov w3,#0x1
7101de0238  mov w6,#0x1
7101de023c  mov w4,wzr
7101de0240  mov x0,x27
7101de0244  mov w5,wzr
7101de0248  bl 0x71025ad150
7101de024c  sub x8,x29,#0xc0
7101de0250  sub x0,x29,#0x78
7101de0254  adrp x1,0x71043cd000
7101de0258  add x1,x1,#0xb92
7101de025c  bl 0x7103776910
7101de0260  ldur x0,[x29, #-0xb8]
7101de0264  ldr x8,[x0]
7101de0268  cbz x8,0x7101de0278
7101de026c  ldrb w9,[x8, #0x58]
7101de0270  and w9,w9,#0xfe
7101de0274  strb w9,[x8, #0x58]
7101de0278  sxth x27,w27
7101de027c  stp x22,xzr,[x29, #-0xc0]
7101de0280  cbz x0,0x7101de0288
7101de0284  bl 0x710392eb40
7101de0288  sub x8,x29,#0xc0
7101de028c  sub x0,x29,#0x78
7101de0290  adrp x1,0x71043cd000
7101de0294  add x1,x1,#0xb92
7101de0298  bl 0x7103776910
7101de029c  ldur x21,[x29, #-0xb8]
7101de02a0  ldr x0,[x21]
7101de02a4  mov w1,wzr
7101de02a8  bl 0x710377aa20
7101de02ac  stp x22,xzr,[x29, #-0xc0]
7101de02b0  cbz x21,0x7101de02bc
7101de02b4  mov x0,x21
7101de02b8  bl 0x710392eb40
7101de02bc  ldr x8,[sp, #0x10]
7101de02c0  ldr x8,[x8, #0x1d8]
7101de02c4  cmn w27,#0x1
7101de02c8  b.eq 0x7101de0328
7101de02cc  add x9,x8,x27, LSL #0x1
7101de02d0  ldrh w9,[x9, #0x60]
7101de02d4  b 0x7101de032c
7101de02d8  cbz x8,0x7101de02f0
7101de02dc  ldr x8,[x8, #0x18]
7101de02e0  cbz x8,0x7101de02f0
7101de02e4  ldrb w9,[x8, #0x58]
7101de02e8  and w9,w9,#0xfe
7101de02ec  strb w9,[x8, #0x58]
7101de02f0  sub x8,x29,#0xc0
7101de02f4  mov x0,x26
7101de02f8  adrp x1,0x710424f000
7101de02fc  add x1,x1,#0xa61
7101de0300  mov w2,w20
7101de0304  bl 0x7103776910
7101de0308  ldur x21,[x29, #-0xb8]
7101de030c  ldr x0,[x21]
7101de0310  mov w1,wzr
7101de0314  bl 0x710377aa20
7101de0318  stp x22,xzr,[x29, #-0xc0]
7101de031c  cbz x21,0x7101de0650
7101de0320  mov x0,x21
7101de0324  b 0x7101de064c
7101de0328  mov w9,#0xffffffff
7101de032c  ldp x10,x8,[x8, #0x20]
7101de0330  sub x8,x8,x10
7101de0334  orr x11,xzr,#-0x3333333333333334
7101de0338  movk x11,#0xcccd
7101de033c  asr x8,x8,#0x6
7101de0340  mul x8,x8,x11
7101de0344  mov w11,#0x140
7101de0348  madd x10,x9,x11,x10
7101de034c  cmp x8,x9
7101de0350  adrp x8,0x7105182000
7101de0354  add x8,x8,#0xb08
7101de0358  mov w1,wzr
7101de035c  csel x21,x10,x8,hi
7101de0360  cmn w27,#0x1
7101de0364  b.eq 0x7101de03fc
7101de0368  cmp w27,#0x7cf
7101de036c  b.gt 0x7101de03fc
7101de0370  adrp x8,0x710532f000
7101de0374  ldr x8,[x8, #0x730]
7101de0378  ldr x8,[x8, #0x8]
7101de037c  ldr x10,[x8, #0x1d8]
7101de0380  add x8,x10,x27, LSL #0x1
7101de0384  orr x11,xzr,#-0x3333333333333334
7101de0388  ldp x9,x10,[x10, #0x20]
7101de038c  sub x10,x10,x9
7101de0390  asr x10,x10,#0x6
7101de0394  movk x11,#0xcccd
7101de0398  mul x10,x10,x11
7101de039c  ldrh w8,[x8, #0x60]
7101de03a0  cmp w10,w8
7101de03a4  b.ls 0x7101de03f8
7101de03a8  mov w11,#0x140
7101de03ac  madd x9,x8,x11,x9
7101de03b0  cmp x10,x8
7101de03b4  adrp x8,0x7105182000
7101de03b8  add x8,x8,#0xb08
7101de03bc  csel x8,x9,x8,hi
7101de03c0  ldrb w9,[x8, #0x5e]
7101de03c4  cbz w9,0x7101de03d0
7101de03c8  mov w1,#0x4
7101de03cc  b 0x7101de03fc
7101de03d0  ldrb w8,[x8, #0x6c]
7101de03d4  sub w8,w8,#0x1
7101de03d8  cmp w8,#0x2
7101de03dc  b.hi 0x7101de03f8
7101de03e0  and x8,x8,#0xff
7101de03e4  lsl x8,x8,#0x3
7101de03e8  mov w9,#0x301
7101de03ec  movk w9,#0x2, LSL #16
7101de03f0  lsr w1,w9,w8
7101de03f4  b 0x7101de03fc
7101de03f8  mov w1,wzr
7101de03fc  sub x0,x29,#0xc0
7101de0400  mov w2,wzr
7101de0404  bl 0x710339dde0
7101de0408  ldrb w8,[x21, #0x68]
7101de040c  cmp w8,#0x3
7101de0410  b.hi 0x7101de0568
7101de0414  adrp x9,0x71044fb000
7101de0418  add x9,x9,#0x6c8
7101de041c  ldrsw x8,[x9, x8, LSL #0x2]
7101de0420  add x8,x8,x9
7101de0424  br x8
7101de0428  mov x8,#0xa00000000
7101de042c  str x8,[sp, #0xb8]
7101de0430  mov x8,#0x6c63
7101de0434  movk x8,#0x7361, LSL #16
7101de0438  ldr x9,[sp, #0x8]
7101de043c  mov w10,#0x63
7101de0440  movk x8,#0x5f73, LSL #32
7101de0444  movk x8,#0x6f6e, LSL #48
7101de0448  str x8,[sp, #0xc0]
7101de044c  mov w8,#0x656e
7101de0450  strh w8,[sp, #0xc8]
7101de0454  mov w8,#0x9dc5
7101de0458  movk w8,#0x811c, LSL #16
7101de045c  strb wzr,[sp, #0xca]
7101de0460  mul w8,w8,w25
7101de0464  and w10,w10,#0xff
7101de0468  eor w8,w8,w10
7101de046c  ldrb w10,[x9], #0x1
7101de0470  cbnz w10,0x7101de0460
7101de0474  b 0x7101de05b4
7101de0478  mov x8,#0x900000000
7101de047c  ldr x9,[sp, #0x8]
7101de0480  mov w10,#0x63
7101de0484  str x8,[sp, #0xb8]
7101de0488  mov x8,#0x6c63
7101de048c  movk x8,#0x7361, LSL #16
7101de0490  movk x8,#0x5f73, LSL #32
7101de0494  movk x8,#0x6361, LSL #48
7101de0498  str x8,[sp, #0xc0]
7101de049c  mov w8,#0x9dc5
7101de04a0  movk w8,#0x811c, LSL #16
7101de04a4  mov w11,#0x65
7101de04a8  strh w11,[sp, #0xc8]
7101de04ac  mul w8,w8,w25
7101de04b0  and w10,w10,#0xff
7101de04b4  eor w8,w8,w10
7101de04b8  ldrb w10,[x9], #0x1
7101de04bc  cbnz w10,0x7101de04ac
7101de04c0  b 0x7101de05b4
7101de04c4  orr x8,xzr,#0xc00000000
7101de04c8  str x8,[sp, #0xb8]
7101de04cc  mov x8,#0x6c63
7101de04d0  movk x8,#0x7361, LSL #16
7101de04d4  ldr x9,[sp, #0x8]
7101de04d8  mov w10,#0x63
7101de04dc  movk x8,#0x5f73, LSL #32
7101de04e0  movk x8,#0x656c, LSL #48
7101de04e4  str x8,[sp, #0xc0]
7101de04e8  mov w8,#0x6567
7101de04ec  movk w8,#0x646e, LSL #16
7101de04f0  str w8,[sp, #0xc8]
7101de04f4  mov w8,#0x9dc5
7101de04f8  movk w8,#0x811c, LSL #16
7101de04fc  strb wzr,[sp, #0xcc]
7101de0500  mul w8,w8,w25
7101de0504  and w10,w10,#0xff
7101de0508  eor w8,w8,w10
7101de050c  ldrb w10,[x9], #0x1
7101de0510  cbnz w10,0x7101de0500
7101de0514  b 0x7101de05b4
7101de0518  mov x8,#0xa00000000
7101de051c  str x8,[sp, #0xb8]
7101de0520  mov x8,#0x6c63
7101de0524  movk x8,#0x7361, LSL #16
7101de0528  ldr x9,[sp, #0x8]
7101de052c  mov w10,#0x63
7101de0530  movk x8,#0x5f73, LSL #32
7101de0534  movk x8,#0x6f68, LSL #48
7101de0538  str x8,[sp, #0xc0]
7101de053c  mov w8,#0x6570
7101de0540  strh w8,[sp, #0xc8]
7101de0544  mov w8,#0x9dc5
7101de0548  movk w8,#0x811c, LSL #16
7101de054c  strb wzr,[sp, #0xca]
7101de0550  mul w8,w8,w25
7101de0554  and w10,w10,#0xff
7101de0558  eor w8,w8,w10
7101de055c  ldrb w10,[x9], #0x1
7101de0560  cbnz w10,0x7101de0550
7101de0564  b 0x7101de05b4
7101de0568  mov x8,#0xa00000000
7101de056c  str x8,[sp, #0xb8]
7101de0570  mov x8,#0x6c63
7101de0574  movk x8,#0x7361, LSL #16
7101de0578  ldr x9,[sp, #0x8]
7101de057c  mov w10,#0x63
7101de0580  movk x8,#0x5f73, LSL #32
7101de0584  movk x8,#0x6f6e, LSL #48
7101de0588  str x8,[sp, #0xc0]
7101de058c  mov w8,#0x656e
7101de0590  strh w8,[sp, #0xc8]
7101de0594  mov w8,#0x9dc5
7101de0598  movk w8,#0x811c, LSL #16
7101de059c  strb wzr,[sp, #0xca]
7101de05a0  mul w8,w8,w25
7101de05a4  and w10,w10,#0xff
7101de05a8  eor w8,w8,w10
7101de05ac  ldrb w10,[x9], #0x1
7101de05b0  cbnz w10,0x7101de05a0
7101de05b4  str w8,[sp, #0xb8]
7101de05b8  add x8,sp,#0xa8
7101de05bc  sub x0,x29,#0x78
7101de05c0  adrp x1,0x710439d000
7101de05c4  add x1,x1,#0x905
7101de05c8  bl 0x7103776640
7101de05cc  ldr x27,[sp, #0xb0]
7101de05d0  ldr x1,[sp, #0x20]
7101de05d4  mov v0.16B,v8.16B
7101de05d8  mov x0,x27
7101de05dc  bl 0x7103778300
7101de05e0  ldr x1,[sp, #0x18]
7101de05e4  mov v0.16B,v8.16B
7101de05e8  mov x0,x27
7101de05ec  bl 0x7103778300
7101de05f0  add x8,sp,#0x98
7101de05f4  mov x0,x26
7101de05f8  adrp x1,0x710424f000
7101de05fc  add x1,x1,#0xa61
7101de0600  mov w2,w20
7101de0604  bl 0x7103776910
7101de0608  ldr x21,[sp, #0xa0]
7101de060c  ldr x0,[x21]
7101de0610  bl 0x710377aae0
7101de0614  cbz x0,0x7101de0620
7101de0618  mov w8,#0x1
7101de061c  strb w8,[x0, #0x13a]
7101de0620  stp x22,xzr,[sp, #0x98]
7101de0624  cbz x21,0x7101de0630
7101de0628  mov x0,x21
7101de062c  bl 0x710392eb40
7101de0630  stp x24,xzr,[sp, #0xa8]
7101de0634  cbz x27,0x7101de0650
7101de0638  ldr x0,[x27, #0x18]
7101de063c  stp x22,xzr,[x27, #0x10]
7101de0640  cbz x0,0x7101de0648
7101de0644  bl 0x710392eb40
7101de0648  mov x0,x27
7101de064c  bl 0x710392eb40
7101de0650  sub x0,x29,#0x78
7101de0654  bl 0x71025af650
7101de0658  ldur x21,[x29, #-0x70]
7101de065c  stp x24,xzr,[x29, #-0x78]
7101de0660  cbz x21,0x7101de067c
7101de0664  ldr x0,[x21, #0x18]
7101de0668  stp x22,xzr,[x21, #0x10]
7101de066c  cbz x0,0x7101de0674
7101de0670  bl 0x710392eb40
7101de0674  mov x0,x21
7101de0678  bl 0x710392eb40
7101de067c  add x20,x20,#0x1
7101de0680  cmp x20,#0x10
7101de0684  b.cc 0x7101de01a8
7101de0688  orr w8,wzr,#0x3
7101de068c  str w8,[x19, #0x68]
7101de0690  ldr x8,[x19, #0x40]
7101de0694  cbz x8,0x7101de0f9c
7101de0698  ldr x8,[x8]
7101de069c  cbz x8,0x7101de0798
7101de06a0  ldr x0,[x8]
7101de06a4  b 0x7101de079c
7101de06a8  ldr x8,[x19, #0x40]
7101de06ac  ldr x0,[x8]
7101de06b0  bl 0x7103376860
7101de06b4  ldr x8,[x19, #0x40]
7101de06b8  ldr x8,[x8]
7101de06bc  cbz x8,0x7101de06c8
7101de06c0  ldr x8,[x8, #0x8]
7101de06c4  cbnz x8,0x7101de06d0
7101de06c8  mov w8,#0x4
7101de06cc  str w8,[x19, #0x68]
7101de06d0  ldr x8,[x19, #0x50]
7101de06d4  ldr x8,[x8]
7101de06d8  ldr x8,[x8]
7101de06dc  ldr x8,[x8, #0x600]
7101de06e0  ldrb w9,[x8, #0x4aa]
7101de06e4  cbz w9,0x7101de0fa4
7101de06e8  ldrb w9,[x8, #0x1ac]
7101de06ec  tbnz w9,#0x1,0x7101de06f8
7101de06f0  ldrb w8,[x8, #0x1a8]
7101de06f4  tbz w8,#0x1,0x7101de0fa4
7101de06f8  ldr x0,[x19, #0xa8]
7101de06fc  mov w21,#0x6500
7101de0700  movk w21,#0x87, LSL #16
7101de0704  cbz x0,0x7101de0764
7101de0708  ldr x8,[x0]
7101de070c  ldr x8,[x8, #0x20]
7101de0710  blr x8
7101de0714  tbnz w0,#0x0,0x7101de0764
7101de0718  adrp x8,0x710593b000
7101de071c  ldr x8,[x8, #0x438]
7101de0720  ldr x8,[x8]
7101de0724  ldrb w8,[x8, #0x1]
7101de0728  cbz w8,0x7101de0764
7101de072c  ldr w8,[x19, #0xb4]
7101de0730  cmp w8,w21
7101de0734  b.ne 0x7101de0764
7101de0738  adrp x8,0x7106dd5000
7101de073c  ldrb w8,[x8, #0x3a8]
7101de0740  cmp w8,#0x1
7101de0744  b.ne 0x7101de0764
7101de0748  adrp x9,0x7106dd5000
7101de074c  ldr w8,[x19, #0xb0]
7101de0750  ldr w9,[x9, #0x3ac]
7101de0754  cmp w8,w9
7101de0758  b.ne 0x7101de0764
7101de075c  ldrb w8,[x19, #0xb8]
7101de0760  cbz w8,0x7101de1010
7101de0764  ldrsb w8,[x19, #0x90]
7101de0768  cmp w8,#0x1
7101de076c  b.lt 0x7101de0c98
7101de0770  mov x22,xzr
7101de0774  add x20,x19,#0xd8
7101de0778  adrp x23,0x710593b000
7101de077c  adrp x24,0x7106dd5000
7101de0780  adrp x25,0x7106dd5000
7101de0784  b 0x7101de0c2c
7101de0788  ldr x8,[x19, #0x40]
7101de078c  ldr x0,[x8]
7101de0790  bl 0x7103376860
7101de0794  b 0x7101de0fa4
7101de0798  mov x0,xzr
7101de079c  ldr x2,[x19, #0x50]
7101de07a0  adrp x1,0x7104270000
7101de07a4  add x1,x1,#0x556
7101de07a8  bl 0x71033743c0
7101de07ac  ldr x20,[x19, #0x40]
7101de07b0  mov w0,#0x10
7101de07b4  orr w1,wzr,#0x38
7101de07b8  bl 0x710392e290
7101de07bc  cbnz x0,0x7101de07f4
7101de07c0  adrp x8,0x7105332000
7101de07c4  ldr x0,[x8, #0xf00]
7101de07c8  orr w8,wzr,#0x38
7101de07cc  str wzr,[sp, #0xb8]
7101de07d0  add x1,sp,#0xb8
7101de07d4  stur x8,[x29, #-0xc0]
7101de07d8  ldr x8,[x0]
7101de07dc  ldr x8,[x8, #0x30]
7101de07e0  sub x2,x29,#0xc0
7101de07e4  blr x8
7101de07e8  mov w0,#0x10
7101de07ec  orr w1,wzr,#0x38
7101de07f0  bl 0x710392e290
7101de07f4  adrp x21,0x71050b0000
7101de07f8  add x21,x21,#0xd70
7101de07fc  adrp x8,0x7101de1000
7101de0800  add x8,x8,#0xff0
7101de0804  stp xzr,xzr,[x0, #0x28]
7101de0808  str x21,[x0]
7101de080c  str x19,[x0, #0x10]
7101de0810  adrp x1,0x7104281000
7101de0814  add x1,x1,#0x76
7101de0818  stp x8,xzr,[x0, #0x18]
7101de081c  add x2,sp,#0x90
7101de0820  str wzr,[x0, #0x8]
7101de0824  str x0,[sp, #0x90]
7101de0828  mov x0,x20
7101de082c  bl 0x7103376af0
7101de0830  ldr x0,[sp, #0x90]
7101de0834  str xzr,[sp, #0x90]
7101de0838  cbz x0,0x7101de0848
7101de083c  ldr x8,[x0]
7101de0840  ldr x8,[x8, #0x8]
7101de0844  blr x8
7101de0848  ldr x20,[x19, #0x40]
7101de084c  mov w0,#0x10
7101de0850  orr w1,wzr,#0x38
7101de0854  bl 0x710392e290
7101de0858  cbnz x0,0x7101de0890
7101de085c  adrp x8,0x7105332000
7101de0860  ldr x0,[x8, #0xf00]
7101de0864  orr w8,wzr,#0x38
7101de0868  str wzr,[sp, #0xb8]
7101de086c  add x1,sp,#0xb8
7101de0870  stur x8,[x29, #-0xc0]
7101de0874  ldr x8,[x0]
7101de0878  ldr x8,[x8, #0x30]
7101de087c  sub x2,x29,#0xc0
7101de0880  blr x8
7101de0884  mov w0,#0x10
7101de0888  orr w1,wzr,#0x38
7101de088c  bl 0x710392e290
7101de0890  adrp x8,0x7101de2000
7101de0894  add x8,x8,#0x40
7101de0898  str x21,[x0]
7101de089c  stp xzr,xzr,[x0, #0x28]
7101de08a0  adrp x1,0x71042d6000
7101de08a4  add x1,x1,#0x7e4
7101de08a8  str x19,[x0, #0x10]
7101de08ac  add x2,sp,#0x88
7101de08b0  stp x8,xzr,[x0, #0x18]
7101de08b4  str wzr,[x0, #0x8]
7101de08b8  str x0,[sp, #0x88]
7101de08bc  mov x0,x20
7101de08c0  bl 0x7103376af0
7101de08c4  ldr x0,[sp, #0x88]
7101de08c8  str xzr,[sp, #0x88]
7101de08cc  cbz x0,0x7101de08dc
7101de08d0  ldr x8,[x0]
7101de08d4  ldr x8,[x8, #0x8]
7101de08d8  blr x8
7101de08dc  ldr x20,[x19, #0x40]
7101de08e0  mov w0,#0x10
7101de08e4  orr w1,wzr,#0x38
7101de08e8  bl 0x710392e290
7101de08ec  cbnz x0,0x7101de0924
7101de08f0  adrp x8,0x7105332000
7101de08f4  ldr x0,[x8, #0xf00]
7101de08f8  orr w8,wzr,#0x38
7101de08fc  str wzr,[sp, #0xb8]
7101de0900  add x1,sp,#0xb8
7101de0904  stur x8,[x29, #-0xc0]
7101de0908  ldr x8,[x0]
7101de090c  ldr x8,[x8, #0x30]
7101de0910  sub x2,x29,#0xc0
7101de0914  blr x8
7101de0918  mov w0,#0x10
7101de091c  orr w1,wzr,#0x38
7101de0920  bl 0x710392e290
7101de0924  adrp x8,0x7101de2000
7101de0928  add x8,x8,#0x220
7101de092c  str x21,[x0]
7101de0930  stp xzr,xzr,[x0, #0x28]
7101de0934  adrp x1,0x7104280000
7101de0938  add x1,x1,#0xfec
7101de093c  str x19,[x0, #0x10]
7101de0940  add x2,sp,#0x80
7101de0944  stp x8,xzr,[x0, #0x18]
7101de0948  str wzr,[x0, #0x8]
7101de094c  str x0,[sp, #0x80]
7101de0950  mov x0,x20
7101de0954  bl 0x7103376af0
7101de0958  ldr x0,[sp, #0x80]
7101de095c  str xzr,[sp, #0x80]
7101de0960  cbz x0,0x7101de0970
7101de0964  ldr x8,[x0]
7101de0968  ldr x8,[x8, #0x8]
7101de096c  blr x8
7101de0970  ldr x20,[x19, #0x40]
7101de0974  mov w0,#0x10
7101de0978  orr w1,wzr,#0x38
7101de097c  bl 0x710392e290
7101de0980  cbnz x0,0x7101de09b8
7101de0984  adrp x8,0x7105332000
7101de0988  ldr x0,[x8, #0xf00]
7101de098c  orr w8,wzr,#0x38
7101de0990  str wzr,[sp, #0xb8]
7101de0994  add x1,sp,#0xb8
7101de0998  stur x8,[x29, #-0xc0]
7101de099c  ldr x8,[x0]
7101de09a0  ldr x8,[x8, #0x30]
7101de09a4  sub x2,x29,#0xc0
7101de09a8  blr x8
7101de09ac  mov w0,#0x10
7101de09b0  orr w1,wzr,#0x38
7101de09b4  bl 0x710392e290
7101de09b8  adrp x8,0x7101de3000
7101de09bc  add x8,x8,#0xfb0
7101de09c0  str x21,[x0]
7101de09c4  stp xzr,xzr,[x0, #0x28]
7101de09c8  adrp x1,0x710435b000
7101de09cc  add x1,x1,#0xcb9
7101de09d0  str x19,[x0, #0x10]
7101de09d4  add x2,sp,#0x78
7101de09d8  stp x8,xzr,[x0, #0x18]
7101de09dc  str wzr,[x0, #0x8]
7101de09e0  str x0,[sp, #0x78]
7101de09e4  mov x0,x20
7101de09e8  bl 0x7103376af0
7101de09ec  ldr x0,[sp, #0x78]
7101de09f0  str xzr,[sp, #0x78]
7101de09f4  cbz x0,0x7101de0a04
7101de09f8  ldr x8,[x0]
7101de09fc  ldr x8,[x8, #0x8]
7101de0a00  blr x8
7101de0a04  ldr x20,[x19, #0x40]
7101de0a08  mov w0,#0x10
7101de0a0c  orr w1,wzr,#0x38
7101de0a10  bl 0x710392e290
7101de0a14  cbnz x0,0x7101de0a4c
7101de0a18  adrp x8,0x7105332000
7101de0a1c  ldr x0,[x8, #0xf00]
7101de0a20  orr w8,wzr,#0x38
7101de0a24  str wzr,[sp, #0xb8]
7101de0a28  add x1,sp,#0xb8
7101de0a2c  stur x8,[x29, #-0xc0]
7101de0a30  ldr x8,[x0]
7101de0a34  ldr x8,[x8, #0x30]
7101de0a38  sub x2,x29,#0xc0
7101de0a3c  blr x8
7101de0a40  mov w0,#0x10
7101de0a44  orr w1,wzr,#0x38
7101de0a48  bl 0x710392e290
7101de0a4c  adrp x8,0x7101de5000
7101de0a50  add x8,x8,#0xdc0
7101de0a54  str x21,[x0]
7101de0a58  stp xzr,xzr,[x0, #0x28]
7101de0a5c  adrp x1,0x710439d000
7101de0a60  add x1,x1,#0x919
7101de0a64  str x19,[x0, #0x10]
7101de0a68  add x2,sp,#0x70
7101de0a6c  stp x8,xzr,[x0, #0x18]
7101de0a70  str wzr,[x0, #0x8]
7101de0a74  str x0,[sp, #0x70]
7101de0a78  mov x0,x20
7101de0a7c  bl 0x7103376af0
7101de0a80  ldr x0,[sp, #0x70]
7101de0a84  str xzr,[sp, #0x70]
7101de0a88  cbz x0,0x7101de0a98
7101de0a8c  ldr x8,[x0]
7101de0a90  ldr x8,[x8, #0x8]
7101de0a94  blr x8
7101de0a98  ldr x20,[x19, #0x40]
7101de0a9c  mov w0,#0x10
7101de0aa0  orr w1,wzr,#0x38
7101de0aa4  bl 0x710392e290
7101de0aa8  cbnz x0,0x7101de0ae0
7101de0aac  adrp x8,0x7105332000
7101de0ab0  ldr x0,[x8, #0xf00]
7101de0ab4  orr w8,wzr,#0x38
7101de0ab8  str wzr,[sp, #0xb8]
7101de0abc  add x1,sp,#0xb8
7101de0ac0  stur x8,[x29, #-0xc0]
7101de0ac4  ldr x8,[x0]
7101de0ac8  ldr x8,[x8, #0x30]
7101de0acc  sub x2,x29,#0xc0
7101de0ad0  blr x8
7101de0ad4  mov w0,#0x10
7101de0ad8  orr w1,wzr,#0x38
7101de0adc  bl 0x710392e290
7101de0ae0  adrp x8,0x7101de5000
7101de0ae4  add x8,x8,#0xfe0
7101de0ae8  str x21,[x0]
7101de0aec  stp xzr,xzr,[x0, #0x28]
7101de0af0  adrp x1,0x71043ad000
7101de0af4  add x1,x1,#0xcc8
7101de0af8  str x19,[x0, #0x10]
7101de0afc  add x2,sp,#0x68
7101de0b00  stp x8,xzr,[x0, #0x18]
7101de0b04  str wzr,[x0, #0x8]
7101de0b08  str x0,[sp, #0x68]
7101de0b0c  mov x0,x20
7101de0b10  bl 0x7103376af0
7101de0b14  ldr x0,[sp, #0x68]
7101de0b18  str xzr,[sp, #0x68]
7101de0b1c  cbz x0,0x7101de0b2c
7101de0b20  ldr x8,[x0]
7101de0b24  ldr x8,[x8, #0x8]
7101de0b28  blr x8
7101de0b2c  ldr x8,[x19, #0x40]
7101de0b30  ldr x0,[x8]
7101de0b34  cbz x0,0x7101de0b60
7101de0b38  ldp x8,x9,[x19, #0x70]
7101de0b3c  sub x8,x9,x8
7101de0b40  lsr x3,x8,#0x3
7101de0b44  adrp x1,0x710438d000
7101de0b48  add x1,x1,#0x81
7101de0b4c  adrp x2,0x71042b2000
7101de0b50  add x2,x2,#0xa84
7101de0b54  bl 0x7103375650
7101de0b58  ldr x8,[x19, #0x40]
7101de0b5c  ldr x0,[x8]
7101de0b60  adrp x1,0x710424f000
7101de0b64  add x1,x1,#0xad9
7101de0b68  adrp x2,0x71043cd000
7101de0b6c  add x2,x2,#0xb7b
7101de0b70  mov w3,#0x1
7101de0b74  bl 0x7103375650
7101de0b78  ldr x20,[x19, #0x40]
7101de0b7c  ldr x8,[x20]
7101de0b80  ldr x21,[x8]
7101de0b84  str wzr,[x8, #0x10]
7101de0b88  ldr x8,[x21, #0x10]
7101de0b8c  mov w9,#0x48
7101de0b90  str x21,[x8]
7101de0b94  str w9,[x8, #0x8]
7101de0b98  ldp x9,x8,[x21, #0x10]
7101de0b9c  add x10,x9,#0x10
7101de0ba0  str x10,[x21, #0x10]
7101de0ba4  ldr x10,[x8, #0xc8]
7101de0ba8  str x9,[x21, #0x10]
7101de0bac  cmp x10,x21
7101de0bb0  b.eq 0x7101de0bd4
7101de0bb4  adrp x1,0x71042d6000
7101de0bb8  add x1,x1,#0x896
7101de0bbc  mov x0,x21
7101de0bc0  bl 0x71038f4b20
7101de0bc4  orr w1,wzr,#0xfffffffe
7101de0bc8  mov x0,x21
7101de0bcc  bl 0x71038f4fc0
7101de0bd0  b 0x7101de0f54
7101de0bd4  ldr x8,[x8, #0x40]
7101de0bd8  ldr w9,[x8, #0xc]
7101de0bdc  cmp w9,#0x2
7101de0be0  b.cc 0x7101de0ef8
7101de0be4  ldr x8,[x8, #0x10]
7101de0be8  add x1,x8,#0x10
7101de0bec  b 0x7101de0f44
7101de0bf0  ldr x0,[x20, #0x10]
7101de0bf4  cbz x0,0x7101de0c84
7101de0bf8  ldr x8,[x0]
7101de0bfc  ldr x8,[x8, #0x20]
7101de0c00  blr x8
7101de0c04  tbnz w0,#0x0,0x7101de0c84
7101de0c08  ldr x0,[x20, #0x10]
7101de0c0c  ldr x8,[x0]
7101de0c10  ldr x8,[x8, #0x68]
7101de0c14  blr x8
7101de0c18  tbnz w0,#0x0,0x7101de0c84
7101de0c1c  mov x0,x20
7101de0c20  mov w1,wzr
7101de0c24  bl 0x710373b540
7101de0c28  b 0x7101de0c84
7101de0c2c  ldr x0,[x20, #0x10]
7101de0c30  cbz x0,0x7101de0c84
7101de0c34  ldr x8,[x0]
7101de0c38  ldr x8,[x8, #0x20]
7101de0c3c  blr x8
7101de0c40  tbnz w0,#0x0,0x7101de0c84
7101de0c44  ldr x8,[x23, #0x438]
7101de0c48  ldr x8,[x8]
7101de0c4c  ldrb w8,[x8, #0x1]
7101de0c50  cbz w8,0x7101de0c84
7101de0c54  ldr w8,[x20, #0x1c]
7101de0c58  cmp w8,w21
7101de0c5c  b.ne 0x7101de0c84
7101de0c60  ldrb w8,[x24, #0x3a8]
7101de0c64  cmp w8,#0x1
7101de0c68  b.ne 0x7101de0c84
7101de0c6c  ldr w8,[x20, #0x18]
7101de0c70  ldr w9,[x25, #0x3ac]
7101de0c74  cmp w8,w9
7101de0c78  b.ne 0x7101de0c84
7101de0c7c  ldrb w8,[x20, #0x20]
7101de0c80  cbz w8,0x7101de0bf0
7101de0c84  ldrsb x8,[x19, #0x90]
7101de0c88  add x22,x22,#0x1
7101de0c8c  add x20,x20,#0x40
7101de0c90  cmp x22,x8
7101de0c94  b.lt 0x7101de0c2c
7101de0c98  ldrsb w8,[x19, #0x91]
7101de0c9c  cmp w8,#0x1
7101de0ca0  b.lt 0x7101de0d64
7101de0ca4  mov x22,xzr
7101de0ca8  add x20,x19,#0x4d8
7101de0cac  adrp x23,0x710593b000
7101de0cb0  adrp x24,0x7106dd5000
7101de0cb4  adrp x25,0x7106dd5000
7101de0cb8  b 0x7101de0cf8
7101de0cbc  ldr x0,[x20, #0x10]
7101de0cc0  cbz x0,0x7101de0d50
7101de0cc4  ldr x8,[x0]
7101de0cc8  ldr x8,[x8, #0x20]
7101de0ccc  blr x8
7101de0cd0  tbnz w0,#0x0,0x7101de0d50
7101de0cd4  ldr x0,[x20, #0x10]
7101de0cd8  ldr x8,[x0]
7101de0cdc  ldr x8,[x8, #0x68]
7101de0ce0  blr x8
7101de0ce4  tbnz w0,#0x0,0x7101de0d50
7101de0ce8  mov x0,x20
7101de0cec  mov w1,wzr
7101de0cf0  bl 0x710373b540
7101de0cf4  b 0x7101de0d50
7101de0cf8  ldr x0,[x20, #0x10]
7101de0cfc  cbz x0,0x7101de0d50
7101de0d00  ldr x8,[x0]
7101de0d04  ldr x8,[x8, #0x20]
7101de0d08  blr x8
7101de0d0c  tbnz w0,#0x0,0x7101de0d50
7101de0d10  ldr x8,[x23, #0x438]
7101de0d14  ldr x8,[x8]
7101de0d18  ldrb w8,[x8, #0x1]
7101de0d1c  cbz w8,0x7101de0d50
7101de0d20  ldr w8,[x20, #0x1c]
7101de0d24  cmp w8,w21
7101de0d28  b.ne 0x7101de0d50
7101de0d2c  ldrb w8,[x24, #0x3a8]
7101de0d30  cmp w8,#0x1
7101de0d34  b.ne 0x7101de0d50
7101de0d38  ldr w8,[x20, #0x18]
7101de0d3c  ldr w9,[x25, #0x3ac]
7101de0d40  cmp w8,w9
7101de0d44  b.ne 0x7101de0d50
7101de0d48  ldrb w8,[x20, #0x20]
7101de0d4c  cbz w8,0x7101de0cbc
7101de0d50  ldrsb x8,[x19, #0x91]
7101de0d54  add x22,x22,#0x1
7101de0d58  add x20,x20,#0x40
7101de0d5c  cmp x22,x8
7101de0d60  b.lt 0x7101de0cf8
7101de0d64  ldrsb w8,[x19, #0x92]
7101de0d68  cmp w8,#0x1
7101de0d6c  b.lt 0x7101de0e30
7101de0d70  mov x22,xzr
7101de0d74  add x20,x19,#0x8d8
7101de0d78  adrp x23,0x710593b000
7101de0d7c  adrp x24,0x7106dd5000
7101de0d80  adrp x25,0x7106dd5000
7101de0d84  b 0x7101de0dc4
7101de0d88  ldr x0,[x20, #0x10]
7101de0d8c  cbz x0,0x7101de0e1c
7101de0d90  ldr x8,[x0]
7101de0d94  ldr x8,[x8, #0x20]
7101de0d98  blr x8
7101de0d9c  tbnz w0,#0x0,0x7101de0e1c
7101de0da0  ldr x0,[x20, #0x10]
7101de0da4  ldr x8,[x0]
7101de0da8  ldr x8,[x8, #0x68]
7101de0dac  blr x8
7101de0db0  tbnz w0,#0x0,0x7101de0e1c
7101de0db4  mov x0,x20
7101de0db8  mov w1,wzr
7101de0dbc  bl 0x710373b540
7101de0dc0  b 0x7101de0e1c
7101de0dc4  ldr x0,[x20, #0x10]
7101de0dc8  cbz x0,0x7101de0e1c
7101de0dcc  ldr x8,[x0]
7101de0dd0  ldr x8,[x8, #0x20]
7101de0dd4  blr x8
7101de0dd8  tbnz w0,#0x0,0x7101de0e1c
7101de0ddc  ldr x8,[x23, #0x438]
7101de0de0  ldr x8,[x8]
7101de0de4  ldrb w8,[x8, #0x1]
7101de0de8  cbz w8,0x7101de0e1c
7101de0dec  ldr w8,[x20, #0x1c]
7101de0df0  cmp w8,w21
7101de0df4  b.ne 0x7101de0e1c
7101de0df8  ldrb w8,[x24, #0x3a8]
7101de0dfc  cmp w8,#0x1
7101de0e00  b.ne 0x7101de0e1c
7101de0e04  ldr w8,[x20, #0x18]
7101de0e08  ldr w9,[x25, #0x3ac]
7101de0e0c  cmp w8,w9
7101de0e10  b.ne 0x7101de0e1c
7101de0e14  ldrb w8,[x20, #0x20]
7101de0e18  cbz w8,0x7101de0d88
7101de0e1c  ldrsb x8,[x19, #0x92]
7101de0e20  add x22,x22,#0x1
7101de0e24  add x20,x20,#0x40
7101de0e28  cmp x22,x8
7101de0e2c  b.lt 0x7101de0dc4
7101de0e30  adrp x8,0x710532f000
7101de0e34  ldr x8,[x8, #0x8d0]
7101de0e38  ldr x0,[x8, #0x8]
7101de0e3c  ldrb w8,[x0, #0x191]
7101de0e40  cbnz w8,0x7101de0ec0
7101de0e44  mov x20,#0x23f5
7101de0e48  movk x20,#0x57a5, LSL #16
7101de0e4c  movk x20,#0xf, LSL #32
7101de0e50  mov w2,#0x4
7101de0e54  mov x1,x20
7101de0e58  bl 0x7103313f20
7101de0e5c  tbz w0,#0x0,0x7101de0ec0
7101de0e60  add x0,sp,#0x28
7101de0e64  mov x1,x20
7101de0e68  bl 0x71024076d0
7101de0e6c  ldr x8,[sp, #0x38]
7101de0e70  adrp x9,0x7104f73000
7101de0e74  add x9,x9,#0xd50
7101de0e78  str x9,[sp, #0x30]
7101de0e7c  cbz x8,0x7101de0ee4
7101de0e80  adrp x8,0x7106dd5000
7101de0e84  ldrb w8,[x8, #0x3a8]
7101de0e88  cmp w8,#0x1
7101de0e8c  b.ne 0x7101de0ee4
7101de0e90  adrp x9,0x7106dd5000
7101de0e94  ldr w8,[sp, #0x40]
7101de0e98  ldr w9,[x9, #0x3ac]
7101de0e9c  cmp w8,w9
7101de0ea0  b.ne 0x7101de0ee4
7101de0ea4  ldr x8,[sp, #0x38]
7101de0ea8  ldr wzr,[x8, #0x38]!
7101de0eac  ldaxr w9,[x8]
7101de0eb0  sub w9,w9,#0x1
7101de0eb4  stlxr w10,w9,[x8]
7101de0eb8  cbnz w10,0x7101de0eac
7101de0ebc  b 0x7101de0ee4
7101de0ec0  mov x8,#-0x1
7101de0ec4  stp x8,xzr,[sp, #0x50]
7101de0ec8  adrp x8,0x7104f73000
7101de0ecc  add x8,x8,#0xd50
7101de0ed0  stp wzr,w21,[sp, #0x40]
7101de0ed4  strb wzr,[sp, #0x48]
7101de0ed8  str wzr,[sp, #0x28]
7101de0edc  str xzr,[sp, #0x60]
7101de0ee0  stp x8,xzr,[sp, #0x30]
7101de0ee4  mov w8,#0x4
7101de0ee8  str xzr,[sp, #0x38]
7101de0eec  strb wzr,[sp, #0x48]
7101de0ef0  str w8,[x19, #0x68]
7101de0ef4  b 0x7101de0fec
7101de0ef8  ldr x9,[x8, #0x18]
7101de0efc  ldrb w8,[x8, #0xb]
7101de0f00  mov w10,#0xffffffff
7101de0f04  lsl x8,x10,x8
7101de0f08  mvn w8,w8
7101de0f0c  and x8,x8,#0x2
7101de0f10  add x1,x9,x8, LSL #0x5
7101de0f14  adrp x8,0x7104862000
7101de0f18  add x8,x8,#0x960
7101de0f1c  ldr w9,[x1, #0x18]
7101de0f20  cmp w9,#0x13
7101de0f24  b.ne 0x7101de0f34
7101de0f28  ldr x9,[x1, #0x10]
7101de0f2c  cmp x9,#0x2
7101de0f30  b.eq 0x7101de0f44
7101de0f34  ldrsw x9,[x1, #0x1c]
7101de0f38  add x1,x1,x9, LSL #0x5
7101de0f3c  cbnz w9,0x7101de0f1c
7101de0f40  mov x1,x8
7101de0f44  adrp x2,0x71042d6000
7101de0f48  add x2,x2,#0x896
7101de0f4c  mov x0,x21
7101de0f50  bl 0x71038f4d40
7101de0f54  ldr x9,[x21, #0x10]
7101de0f58  sub x8,x9,#0x10
7101de0f5c  adrp x10,0x7104862000
7101de0f60  add x10,x10,#0x960
7101de0f64  cmp x8,x10
7101de0f68  b.eq 0x7101de0f8c
7101de0f6c  ldur w9,[x9, #-0x8]
7101de0f70  and w9,w9,#0xf
7101de0f74  cmp w9,#0x6
7101de0f78  b.ne 0x7101de0f8c
7101de0f7c  mov x0,x20
7101de0f80  mov w1,wzr
7101de0f84  bl 0x7103377130
7101de0f88  b 0x7101de0f90
7101de0f8c  str x8,[x21, #0x10]
7101de0f90  ldr x8,[x19, #0x40]
7101de0f94  ldr x0,[x8]
7101de0f98  bl 0x7103376980
7101de0f9c  strh wzr,[x19, #0x90]
7101de0fa0  strb wzr,[x19, #0x92]
7101de0fa4  ldr w8,[x19, #0x68]
7101de0fa8  cmp w8,#0x5
7101de0fac  b.ne 0x7101de0fec
7101de0fb0  ldr x8,[x19, #0x60]
7101de0fb4  ldr x0,[x8, #0x8]
7101de0fb8  cbz x0,0x7101de0fdc
7101de0fbc  adrp x1,0x710428f000
7101de0fc0  add x1,x1,#0xf7d
7101de0fc4  bl 0x71037964b0
7101de0fc8  cbz x0,0x7101de0fdc
7101de0fcc  ldr x8,[x0]
7101de0fd0  ldr x8,[x8, #0x138]
7101de0fd4  blr x8
7101de0fd8  tbz w0,#0x0,0x7101de0fec
7101de0fdc  ldr x8,[x19, #0x50]
7101de0fe0  ldr x0,[x8]
7101de0fe4  bl 0x7103775fa0
7101de0fe8  str wzr,[x19, #0x68]
7101de0fec  ldp d9,d8,[sp, #0x160]
7101de0ff0  ldp x29,x30,[sp, #0x1c0]
7101de0ff4  ldp x20,x19,[sp, #0x1b0]
7101de0ff8  ldp x22,x21,[sp, #0x1a0]
7101de0ffc  ldp x24,x23,[sp, #0x190]
7101de1000  ldp x26,x25,[sp, #0x180]
7101de1004  ldp x28,x27,[sp, #0x170]
7101de1008  add sp,sp,#0x1d0
7101de100c  ret
7101de1010  ldr x0,[x19, #0xa8]
7101de1014  cbz x0,0x7101de0764
7101de1018  ldr x8,[x0]
7101de101c  ldr x8,[x8, #0x20]
7101de1020  blr x8
7101de1024  tbnz w0,#0x0,0x7101de0764
7101de1028  ldr x0,[x19, #0xa8]
7101de102c  ldr x8,[x0]
7101de1030  ldr x8,[x8, #0x68]
7101de1034  blr x8
7101de1038  tbnz w0,#0x0,0x7101de0764
7101de103c  add x0,x19,#0x98
7101de1040  mov w1,wzr
7101de1044  bl 0x710373b540
7101de1048  b 0x7101de0764
7101de104c  ldr x0,[sp]
7101de1050  bl 0x71039c1330
