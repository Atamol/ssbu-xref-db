// addr:      7102bbfe00
// offset:    0x2bbfe00
// name:      FUN_7102bbfe00
// mangled:   
// size:      15468

7102bbfe00  str d10,[sp, #-0x80]!
7102bbfe04  stp d9,d8,[sp, #0x10]
7102bbfe08  stp x28,x27,[sp, #0x20]
7102bbfe0c  stp x26,x25,[sp, #0x30]
7102bbfe10  stp x24,x23,[sp, #0x40]
7102bbfe14  stp x22,x21,[sp, #0x50]
7102bbfe18  stp x20,x19,[sp, #0x60]
7102bbfe1c  stp x29,x30,[sp, #0x70]
7102bbfe20  add x29,sp,#0x70
7102bbfe24  sub sp,sp,#0x280
7102bbfe28  ldr x9,[x0, #0x300]
7102bbfe2c  ldr x10,[x9, #0x18]
7102bbfe30  ldr x10,[x10]
7102bbfe34  mov x8,#0x6692
7102bbfe38  movk x8,#0x1503, LSL #16
7102bbfe3c  mov x20,x0
7102bbfe40  movk x8,#0xe, LSL #32
7102bbfe44  b 0x7102bbfe4c
7102bbfe48  add x10,x10,#0x8
7102bbfe4c  ldr x11,[x10]
7102bbfe50  ldr x12,[x11, #0xa0]
7102bbfe54  and x12,x12,#0xffffffffff
7102bbfe58  cmp x12,x8
7102bbfe5c  b.ne 0x7102bbfe48
7102bbfe60  ldr x10,[x11, #0x110]
7102bbfe64  str x10,[x20, #0xb80]
7102bbfe68  ldr x11,[x9, #0x18]
7102bbfe6c  ldp x10,x11,[x11]
7102bbfe70  mov x17,#0xe4f1
7102bbfe74  movk x17,#0x9f07, LSL #16
7102bbfe78  mov x16,#0x221f
7102bbfe7c  movk x16,#0xb867, LSL #16
7102bbfe80  movk x17,#0x14, LSL #32
7102bbfe84  movk x16,#0xd, LSL #32
7102bbfe88  cmp x10,x11
7102bbfe8c  b.eq 0x7102bbfff4
7102bbfe90  mov x12,#0xdf99
7102bbfe94  movk x12,#0xb569, LSL #16
7102bbfe98  movk x12,#0x7, LSL #32
7102bbfe9c  mov x13,x10
7102bbfea0  ldr x14,[x13], #0x8
7102bbfea4  ldr x15,[x14, #0xa0]
7102bbfea8  and x15,x15,#0xffffffffff
7102bbfeac  cmp x15,x12
7102bbfeb0  b.eq 0x7102bbfec0
7102bbfeb4  cmp x11,x13
7102bbfeb8  b.ne 0x7102bbfea0
7102bbfebc  b 0x7102bbfed8
7102bbfec0  cbz x14,0x7102bbfed8
7102bbfec4  ldr x12,[x14, #0x130]
7102bbfec8  cbz x12,0x7102bbfed8
7102bbfecc  str x12,[x20, #0xb90]
7102bbfed0  ldr x11,[x9, #0x18]
7102bbfed4  ldp x10,x11,[x11]
7102bbfed8  cmp x10,x11
7102bbfedc  b.eq 0x7102bbfff4
7102bbfee0  mov x12,x10
7102bbfee4  ldr x13,[x12], #0x8
7102bbfee8  ldr x14,[x13, #0xa0]
7102bbfeec  and x14,x14,#0xffffffffff
7102bbfef0  cmp x14,x17
7102bbfef4  b.eq 0x7102bbff04
7102bbfef8  cmp x11,x12
7102bbfefc  b.ne 0x7102bbfee4
7102bbff00  b 0x7102bbff1c
7102bbff04  cbz x13,0x7102bbff1c
7102bbff08  ldr x12,[x13, #0x130]
7102bbff0c  cbz x12,0x7102bbff1c
7102bbff10  str x12,[x20, #0xb98]
7102bbff14  ldr x11,[x9, #0x18]
7102bbff18  ldp x10,x11,[x11]
7102bbff1c  cmp x10,x11
7102bbff20  b.eq 0x7102bbfff4
7102bbff24  mov x12,x10
7102bbff28  ldr x13,[x12], #0x8
7102bbff2c  ldr x14,[x13, #0xa0]
7102bbff30  and x14,x14,#0xffffffffff
7102bbff34  cmp x14,x16
7102bbff38  b.eq 0x7102bbff48
7102bbff3c  cmp x11,x12
7102bbff40  b.ne 0x7102bbff28
7102bbff44  b 0x7102bbff60
7102bbff48  cbz x13,0x7102bbff60
7102bbff4c  ldr x12,[x13, #0x130]
7102bbff50  cbz x12,0x7102bbff60
7102bbff54  str x12,[x20, #0xba0]
7102bbff58  ldr x11,[x9, #0x18]
7102bbff5c  ldp x10,x11,[x11]
7102bbff60  cmp x10,x11
7102bbff64  b.eq 0x7102bbfff4
7102bbff68  mov x12,#0x911e
7102bbff6c  movk x12,#0x2b19, LSL #16
7102bbff70  movk x12,#0x16, LSL #32
7102bbff74  mov x13,x10
7102bbff78  ldr x14,[x13], #0x8
7102bbff7c  ldr x15,[x14, #0xa0]
7102bbff80  and x15,x15,#0xffffffffff
7102bbff84  cmp x15,x12
7102bbff88  b.eq 0x7102bbff98
7102bbff8c  cmp x11,x13
7102bbff90  b.ne 0x7102bbff78
7102bbff94  b 0x7102bbffb0
7102bbff98  cbz x14,0x7102bbffb0
7102bbff9c  ldr x12,[x14, #0x130]
7102bbffa0  cbz x12,0x7102bbffb0
7102bbffa4  str x12,[x20, #0xba8]
7102bbffa8  ldr x9,[x9, #0x18]
7102bbffac  ldp x10,x11,[x9]
7102bbffb0  cmp x10,x11
7102bbffb4  b.eq 0x7102bbfff4
7102bbffb8  mov x9,#0xf25a
7102bbffbc  movk x9,#0xc9e7, LSL #16
7102bbffc0  movk x9,#0x14, LSL #32
7102bbffc4  ldr x12,[x10], #0x8
7102bbffc8  ldr x13,[x12, #0xa0]
7102bbffcc  and x13,x13,#0xffffffffff
7102bbffd0  cmp x13,x9
7102bbffd4  b.eq 0x7102bbffe4
7102bbffd8  cmp x11,x10
7102bbffdc  b.ne 0x7102bbffc4
7102bbffe0  b 0x7102bbfff4
7102bbffe4  cbz x12,0x7102bbfff4
7102bbffe8  ldr x9,[x12, #0x130]
7102bbffec  cbz x9,0x7102bbfff4
7102bbfff0  str x9,[x20, #0xbb0]
7102bbfff4  ldr x9,[x20, #0x310]
7102bbfff8  ldp x10,x11,[x9, #0xd0]
7102bbfffc  cmp x10,x11
7102bc0000  b.eq 0x7102bc0038
7102bc0004  mov x12,#0x35ce
7102bc0008  movk x12,#0xb093, LSL #16
7102bc000c  movk x12,#0x13, LSL #32
7102bc0010  ldr w13,[x10, #0x8]
7102bc0014  cmp w13,#0x1
7102bc0018  b.hi 0x7102bc002c
7102bc001c  ldr x13,[x10]
7102bc0020  ldr x14,[x13, #0x68]
7102bc0024  cmp x14,x12
7102bc0028  b.eq 0x7102bc003c
7102bc002c  add x10,x10,#0x10
7102bc0030  cmp x11,x10
7102bc0034  b.ne 0x7102bc0010
7102bc0038  mov x13,xzr
7102bc003c  str x13,[x20, #0xa08]
7102bc0040  ldp x10,x11,[x9, #0xd0]
7102bc0044  cmp x10,x11
7102bc0048  b.eq 0x7102bc0080
7102bc004c  mov x12,#0xdfe8
7102bc0050  movk x12,#0x3595, LSL #16
7102bc0054  movk x12,#0x17, LSL #32
7102bc0058  ldr w13,[x10, #0x8]
7102bc005c  cmp w13,#0x1
7102bc0060  b.hi 0x7102bc0074
7102bc0064  ldr x13,[x10]
7102bc0068  ldr x14,[x13, #0x68]
7102bc006c  cmp x14,x12
7102bc0070  b.eq 0x7102bc0084
7102bc0074  add x10,x10,#0x10
7102bc0078  cmp x11,x10
7102bc007c  b.ne 0x7102bc0058
7102bc0080  mov x13,xzr
7102bc0084  str x13,[x20, #0xa10]
7102bc0088  ldp x10,x11,[x9, #0xd0]
7102bc008c  cmp x10,x11
7102bc0090  b.eq 0x7102bc00c8
7102bc0094  mov x12,#0x1a95
7102bc0098  movk x12,#0x1ad9, LSL #16
7102bc009c  movk x12,#0x15, LSL #32
7102bc00a0  ldr w13,[x10, #0x8]
7102bc00a4  cmp w13,#0x1
7102bc00a8  b.hi 0x7102bc00bc
7102bc00ac  ldr x13,[x10]
7102bc00b0  ldr x14,[x13, #0x68]
7102bc00b4  cmp x14,x12
7102bc00b8  b.eq 0x7102bc00cc
7102bc00bc  add x10,x10,#0x10
7102bc00c0  cmp x11,x10
7102bc00c4  b.ne 0x7102bc00a0
7102bc00c8  mov x13,xzr
7102bc00cc  str x13,[x20, #0xa18]
7102bc00d0  ldp x10,x9,[x9, #0xd0]
7102bc00d4  cmp x10,x9
7102bc00d8  b.eq 0x7102bc0104
7102bc00dc  ldr w11,[x10, #0x8]
7102bc00e0  cmp w11,#0x1
7102bc00e4  b.hi 0x7102bc00f8
7102bc00e8  ldr x11,[x10]
7102bc00ec  ldr x12,[x11, #0x68]
7102bc00f0  cmp x12,x8
7102bc00f4  b.eq 0x7102bc0108
7102bc00f8  add x10,x10,#0x10
7102bc00fc  cmp x9,x10
7102bc0100  b.ne 0x7102bc00dc
7102bc0104  mov x11,xzr
7102bc0108  mov w0,#0x10
7102bc010c  orr w1,wzr,#0xc0
7102bc0110  str x11,[x20, #0xa20]
7102bc0114  add x23,x20,#0x748
7102bc0118  bl 0x710392e290
7102bc011c  mov x21,x0
7102bc0120  cbnz x0,0x7102bc016c
7102bc0124  adrp x8,0x7105332000
7102bc0128  ldr x0,[x8, #0xf00]
7102bc012c  cbz x0,0x7102bc0168
7102bc0130  orr w8,wzr,#0xc0
7102bc0134  stur wzr,[x29, #-0xd0]
7102bc0138  sub x1,x29,#0xd0
7102bc013c  str x8,[sp, #0xf0]
7102bc0140  ldr x8,[x0]
7102bc0144  ldr x8,[x8, #0x30]
7102bc0148  add x2,sp,#0xf0
7102bc014c  blr x8
7102bc0150  tbz w0,#0x0,0x7102bc0168
7102bc0154  mov w0,#0x10
7102bc0158  orr w1,wzr,#0xc0
7102bc015c  bl 0x710392e290
7102bc0160  mov x21,x0
7102bc0164  cbnz x0,0x7102bc016c
7102bc0168  mov x21,xzr
7102bc016c  mov x0,x21
7102bc0170  mov x1,x20
7102bc0174  mov x2,x23
7102bc0178  mov w3,wzr
7102bc017c  bl 0x7102bccae0
7102bc0180  ldr x0,[x20, #0x9a0]
7102bc0184  str x21,[x20, #0x9a0]
7102bc0188  cbz x0,0x7102bc0198
7102bc018c  str xzr,[x0, #0x10]
7102bc0190  bl 0x710392eb40
7102bc0194  ldr x21,[x20, #0x9a0]
7102bc0198  ldr w8,[x20, #0x9fc]
7102bc019c  cbz w8,0x7102bc0238
7102bc01a0  ldr x22,[x21, #0x10]
7102bc01a4  ldrb w8,[x22, #0x40]
7102bc01a8  cbz w8,0x7102bc01f8
7102bc01ac  ldr x19,[x22, #0x30]
7102bc01b0  cbz x19,0x7102bc01e8
7102bc01b4  ldrb w8,[x19, #0x10]
7102bc01b8  cbz w8,0x7102bc01e8
7102bc01bc  ldrb w8,[x19, #0x50]
7102bc01c0  strb wzr,[x19, #0x10]
7102bc01c4  cbz w8,0x7102bc01e8
7102bc01c8  ldr x8,[x19]
7102bc01cc  ldr w0,[x8, #0x8]
7102bc01d0  bl 0x71003ac560
7102bc01d4  ldr x8,[x0]
7102bc01d8  ldr x8,[x8, #0x48]
7102bc01dc  mov w1,wzr
7102bc01e0  blr x8
7102bc01e4  strb wzr,[x19, #0x50]
7102bc01e8  ldr x8,[x22]
7102bc01ec  ldr x8,[x8, #0x30]
7102bc01f0  mov x0,x22
7102bc01f4  blr x8
7102bc01f8  strb wzr,[x22, #0x40]
7102bc01fc  ldr x8,[x21, #0x18]
7102bc0200  cbz x8,0x7102bc0210
7102bc0204  add x0,x8,#0x108
7102bc0208  strb wzr,[x8, #0x110]
7102bc020c  bl 0x71025e9d50
7102bc0210  ldr q0,[x21, #0x50]
7102bc0214  adrp x8,0x7104473000
7102bc0218  add x8,x8,#0x708
7102bc021c  ld1 {v0.S}[0],[x8]
7102bc0220  mov w8,#0xbf800000
7102bc0224  str w8,[x21, #0x6c]
7102bc0228  mov w8,#0x8
7102bc022c  str xzr,[x21, #0x60]
7102bc0230  str wzr,[x21, #0x74]
7102bc0234  str q0,[x21, #0x50]
7102bc0238  mov w9,#0x1
7102bc023c  mov w0,#0x10
7102bc0240  orr w1,wzr,#0xc0
7102bc0244  strb w9,[x21, #0x24]
7102bc0248  str w8,[x21, #0x20]
7102bc024c  bl 0x710392e290
7102bc0250  mov x21,x0
7102bc0254  cbnz x0,0x7102bc02a0
7102bc0258  adrp x8,0x7105332000
7102bc025c  ldr x0,[x8, #0xf00]
7102bc0260  cbz x0,0x7102bc029c
7102bc0264  orr w8,wzr,#0xc0
7102bc0268  stur wzr,[x29, #-0xd0]
7102bc026c  sub x1,x29,#0xd0
7102bc0270  str x8,[sp, #0xf0]
7102bc0274  ldr x8,[x0]
7102bc0278  ldr x8,[x8, #0x30]
7102bc027c  add x2,sp,#0xf0
7102bc0280  blr x8
7102bc0284  tbz w0,#0x0,0x7102bc029c
7102bc0288  mov w0,#0x10
7102bc028c  orr w1,wzr,#0xc0
7102bc0290  bl 0x710392e290
7102bc0294  mov x21,x0
7102bc0298  cbnz x0,0x7102bc02a0
7102bc029c  mov x21,xzr
7102bc02a0  mov w3,#0x1
7102bc02a4  mov x0,x21
7102bc02a8  mov x1,x20
7102bc02ac  mov x2,x23
7102bc02b0  bl 0x7102bccae0
7102bc02b4  ldr x0,[x20, #0x9a8]
7102bc02b8  str x21,[x20, #0x9a8]
7102bc02bc  cbz x0,0x7102bc02cc
7102bc02c0  str xzr,[x0, #0x10]
7102bc02c4  bl 0x710392eb40
7102bc02c8  ldr x21,[x20, #0x9a8]
7102bc02cc  ldr w8,[x20, #0x9fc]
7102bc02d0  cbz w8,0x7102bc036c
7102bc02d4  ldr x22,[x21, #0x10]
7102bc02d8  ldrb w8,[x22, #0x40]
7102bc02dc  cbz w8,0x7102bc032c
7102bc02e0  ldr x19,[x22, #0x30]
7102bc02e4  cbz x19,0x7102bc031c
7102bc02e8  ldrb w8,[x19, #0x10]
7102bc02ec  cbz w8,0x7102bc031c
7102bc02f0  ldrb w8,[x19, #0x50]
7102bc02f4  strb wzr,[x19, #0x10]
7102bc02f8  cbz w8,0x7102bc031c
7102bc02fc  ldr x8,[x19]
7102bc0300  ldr w0,[x8, #0x8]
7102bc0304  bl 0x71003ac560
7102bc0308  ldr x8,[x0]
7102bc030c  ldr x8,[x8, #0x48]
7102bc0310  mov w1,wzr
7102bc0314  blr x8
7102bc0318  strb wzr,[x19, #0x50]
7102bc031c  ldr x8,[x22]
7102bc0320  ldr x8,[x8, #0x30]
7102bc0324  mov x0,x22
7102bc0328  blr x8
7102bc032c  strb wzr,[x22, #0x40]
7102bc0330  ldr x8,[x21, #0x18]
7102bc0334  cbz x8,0x7102bc0344
7102bc0338  add x0,x8,#0x108
7102bc033c  strb wzr,[x8, #0x110]
7102bc0340  bl 0x71025e9d50
7102bc0344  ldr q0,[x21, #0x50]
7102bc0348  adrp x8,0x7104473000
7102bc034c  add x8,x8,#0x708
7102bc0350  ld1 {v0.S}[0],[x8]
7102bc0354  mov w8,#0xbf800000
7102bc0358  str w8,[x21, #0x6c]
7102bc035c  mov w8,#0x8
7102bc0360  str xzr,[x21, #0x60]
7102bc0364  str wzr,[x21, #0x74]
7102bc0368  str q0,[x21, #0x50]
7102bc036c  mov w9,#0x1
7102bc0370  mov w0,#0x10
7102bc0374  orr w1,wzr,#0xc0
7102bc0378  strb w9,[x21, #0x24]
7102bc037c  str w8,[x21, #0x20]
7102bc0380  bl 0x710392e290
7102bc0384  mov x21,x0
7102bc0388  cbnz x0,0x7102bc03d4
7102bc038c  adrp x8,0x7105332000
7102bc0390  ldr x0,[x8, #0xf00]
7102bc0394  cbz x0,0x7102bc03d0
7102bc0398  orr w8,wzr,#0xc0
7102bc039c  stur wzr,[x29, #-0xd0]
7102bc03a0  sub x1,x29,#0xd0
7102bc03a4  str x8,[sp, #0xf0]
7102bc03a8  ldr x8,[x0]
7102bc03ac  ldr x8,[x8, #0x30]
7102bc03b0  add x2,sp,#0xf0
7102bc03b4  blr x8
7102bc03b8  tbz w0,#0x0,0x7102bc03d0
7102bc03bc  mov w0,#0x10
7102bc03c0  orr w1,wzr,#0xc0
7102bc03c4  bl 0x710392e290
7102bc03c8  mov x21,x0
7102bc03cc  cbnz x0,0x7102bc03d4
7102bc03d0  mov x21,xzr
7102bc03d4  mov w3,#0x2
7102bc03d8  mov x0,x21
7102bc03dc  mov x1,x20
7102bc03e0  mov x2,x23
7102bc03e4  bl 0x7102bccae0
7102bc03e8  ldr x0,[x20, #0x9b0]
7102bc03ec  str x21,[x20, #0x9b0]
7102bc03f0  cbz x0,0x7102bc0400
7102bc03f4  str xzr,[x0, #0x10]
7102bc03f8  bl 0x710392eb40
7102bc03fc  ldr x21,[x20, #0x9b0]
7102bc0400  ldr w8,[x20, #0x9fc]
7102bc0404  cbz w8,0x7102bc04a0
7102bc0408  ldr x22,[x21, #0x10]
7102bc040c  ldrb w8,[x22, #0x40]
7102bc0410  cbz w8,0x7102bc0460
7102bc0414  ldr x19,[x22, #0x30]
7102bc0418  cbz x19,0x7102bc0450
7102bc041c  ldrb w8,[x19, #0x10]
7102bc0420  cbz w8,0x7102bc0450
7102bc0424  ldrb w8,[x19, #0x50]
7102bc0428  strb wzr,[x19, #0x10]
7102bc042c  cbz w8,0x7102bc0450
7102bc0430  ldr x8,[x19]
7102bc0434  ldr w0,[x8, #0x8]
7102bc0438  bl 0x71003ac560
7102bc043c  ldr x8,[x0]
7102bc0440  ldr x8,[x8, #0x48]
7102bc0444  mov w1,wzr
7102bc0448  blr x8
7102bc044c  strb wzr,[x19, #0x50]
7102bc0450  ldr x8,[x22]
7102bc0454  ldr x8,[x8, #0x30]
7102bc0458  mov x0,x22
7102bc045c  blr x8
7102bc0460  strb wzr,[x22, #0x40]
7102bc0464  ldr x8,[x21, #0x18]
7102bc0468  cbz x8,0x7102bc0478
7102bc046c  add x0,x8,#0x108
7102bc0470  strb wzr,[x8, #0x110]
7102bc0474  bl 0x71025e9d50
7102bc0478  ldr q0,[x21, #0x50]
7102bc047c  adrp x8,0x7104473000
7102bc0480  add x8,x8,#0x708
7102bc0484  ld1 {v0.S}[0],[x8]
7102bc0488  mov w8,#0xbf800000
7102bc048c  str w8,[x21, #0x6c]
7102bc0490  mov w8,#0x8
7102bc0494  str xzr,[x21, #0x60]
7102bc0498  str wzr,[x21, #0x74]
7102bc049c  str q0,[x21, #0x50]
7102bc04a0  mov w19,#0x1
7102bc04a4  mov w1,#0x140
7102bc04a8  mov w0,#0x10
7102bc04ac  strb w19,[x21, #0x24]
7102bc04b0  str w8,[x21, #0x20]
7102bc04b4  bl 0x710392e290
7102bc04b8  mov x21,x0
7102bc04bc  cbnz x0,0x7102bc0508
7102bc04c0  adrp x8,0x7105332000
7102bc04c4  ldr x0,[x8, #0xf00]
7102bc04c8  cbz x0,0x7102bc0504
7102bc04cc  mov w8,#0x140
7102bc04d0  stur wzr,[x29, #-0xd0]
7102bc04d4  sub x1,x29,#0xd0
7102bc04d8  str x8,[sp, #0xf0]
7102bc04dc  ldr x8,[x0]
7102bc04e0  ldr x8,[x8, #0x30]
7102bc04e4  add x2,sp,#0xf0
7102bc04e8  blr x8
7102bc04ec  tbz w0,#0x0,0x7102bc0504
7102bc04f0  mov w1,#0x140
7102bc04f4  mov w0,#0x10
7102bc04f8  bl 0x710392e290
7102bc04fc  mov x21,x0
7102bc0500  cbnz x0,0x7102bc0508
7102bc0504  mov x21,xzr
7102bc0508  stp x20,x23,[x21]
7102bc050c  adrp x8,0x71052a8000
7102bc0510  str w19,[x21, #0x10]
7102bc0514  strb w19,[x21, #0x14]
7102bc0518  str wzr,[x21, #0xb4]
7102bc051c  strb wzr,[x21, #0xb8]
7102bc0520  strb wzr,[x21, #0xb0]
7102bc0524  stp xzr,xzr,[x21, #0xa0]
7102bc0528  stp xzr,xzr,[x21, #0x90]
7102bc052c  stp xzr,xzr,[x21, #0x80]
7102bc0530  stp xzr,xzr,[x21, #0x70]
7102bc0534  stp xzr,xzr,[x21, #0x60]
7102bc0538  stp xzr,xzr,[x21, #0x50]
7102bc053c  stp xzr,xzr,[x21, #0x40]
7102bc0540  stp xzr,xzr,[x21, #0x30]
7102bc0544  stp xzr,xzr,[x21, #0x20]
7102bc0548  ldr x8,[x8, #0xa88]
7102bc054c  ldr q0,[x8]
7102bc0550  str wzr,[x21, #0xe0]
7102bc0554  str wzr,[x21, #0x100]
7102bc0558  str xzr,[x21, #0x108]
7102bc055c  stp xzr,xzr,[x21, #0x130]
7102bc0560  stp xzr,xzr,[x21, #0x120]
7102bc0564  stp xzr,xzr,[x21, #0x110]
7102bc0568  str q0,[x21, #0xf0]
7102bc056c  stp q0,q0,[x21, #0xc0]
7102bc0570  ldr x8,[x20, #0x310]
7102bc0574  ldp x9,x10,[x8, #0xd0]
7102bc0578  cmp x9,x10
7102bc057c  b.eq 0x7102bc05b4
7102bc0580  mov x11,#0x22ad
7102bc0584  movk x11,#0x6635, LSL #16
7102bc0588  movk x11,#0x16, LSL #32
7102bc058c  ldr w12,[x9, #0x8]
7102bc0590  cmp w12,#0x1
7102bc0594  b.hi 0x7102bc05a8
7102bc0598  ldr x12,[x9]
7102bc059c  ldr x13,[x12, #0x68]
7102bc05a0  cmp x13,x11
7102bc05a4  b.eq 0x7102bc05b8
7102bc05a8  add x9,x9,#0x10
7102bc05ac  cmp x10,x9
7102bc05b0  b.ne 0x7102bc058c
7102bc05b4  mov x12,xzr
7102bc05b8  movi d3,#0x0
7102bc05bc  mov v1.16B,v3.16B
7102bc05c0  adrp x9,0x7104469000
7102bc05c4  mov v1.S[0x0],v0.S[0x2]
7102bc05c8  ldr q2,[x9, #0x9b0]
7102bc05cc  mov v0.D[0x1],v1.D[0x0]
7102bc05d0  str x12,[x21, #0x20]
7102bc05d4  stp q2,q0,[x21, #0x30]
7102bc05d8  adrp x9,0x71052a8000
7102bc05dc  ldr x9,[x9, #0xaf8]
7102bc05e0  ldr q1,[x9]
7102bc05e4  mov v2.16B,v3.16B
7102bc05e8  mov v2.S[0x0],v1.S[0x2]
7102bc05ec  mov v1.D[0x1],v2.D[0x0]
7102bc05f0  str q1,[x21, #0x50]
7102bc05f4  ldp x9,x8,[x8, #0xd0]
7102bc05f8  cmp x9,x8
7102bc05fc  b.eq 0x7102bc0634
7102bc0600  mov x11,#0xa9b4
7102bc0604  movk x11,#0x25ed, LSL #16
7102bc0608  movk x11,#0x17, LSL #32
7102bc060c  ldr w10,[x9, #0x8]
7102bc0610  cmp w10,#0x1
7102bc0614  b.hi 0x7102bc0628
7102bc0618  ldr x10,[x9]
7102bc061c  ldr x12,[x10, #0x68]
7102bc0620  cmp x12,x11
7102bc0624  b.eq 0x7102bc0638
7102bc0628  add x9,x9,#0x10
7102bc062c  cmp x8,x9
7102bc0630  b.ne 0x7102bc060c
7102bc0634  mov x10,xzr
7102bc0638  adrp x8,0x7104466000
7102bc063c  ldr q2,[x8, #0xcb0]
7102bc0640  mov x22,x21
7102bc0644  str q2,[x22, #0x70]!
7102bc0648  stur x10,[x22, #-0x10]
7102bc064c  mov x9,#0x712b
7102bc0650  movk x9,#0xe0e2, LSL #16
7102bc0654  add x19,x21,#0x108
7102bc0658  movk x9,#0x19, LSL #32
7102bc065c  stp q0,q1,[x22, #0x10]
7102bc0660  ldr x8,[x20, #0x300]
7102bc0664  ldr x8,[x8, #0x18]
7102bc0668  ldr x8,[x8]
7102bc066c  b 0x7102bc0674
7102bc0670  add x8,x8,#0x8
7102bc0674  ldr x10,[x8]
7102bc0678  ldr x11,[x10, #0xa0]
7102bc067c  and x11,x11,#0xffffffffff
7102bc0680  cmp x11,x9
7102bc0684  b.ne 0x7102bc0670
7102bc0688  ldr x8,[x10, #0x110]
7102bc068c  str x23,[sp, #0x60]
7102bc0690  str x20,[sp, #0x48]
7102bc0694  mov w2,#0x1
7102bc0698  str x8,[x19]
7102bc069c  ldp x0,x1,[x8]
7102bc06a0  bl 0x71025f4d80
7102bc06a4  ldr x8,[x19]
7102bc06a8  ldp x19,x23,[x8]
7102bc06ac  cmp x19,x23
7102bc06b0  b.eq 0x7102bc0774
7102bc06b4  mov w24,#0x20
7102bc06b8  adrp x25,0x7105332000
7102bc06bc  adrp x28,0x710507f000
7102bc06c0  add x28,x28,#0x650
7102bc06c4  orr w20,wzr,#0x10001
7102bc06c8  adrp x26,0x7102bce000
7102bc06cc  add x26,x26,#0xda0
7102bc06d0  ldr x27,[x19]
7102bc06d4  ldr x8,[x27, #0x60]
7102bc06d8  cbz x8,0x7102bc070c
7102bc06dc  ldrh w9,[x8, #0x8]
7102bc06e0  sub w9,w9,#0x1
7102bc06e4  sxth w10,w9
7102bc06e8  cmp w10,#0x0
7102bc06ec  strh w9,[x8, #0x8]
7102bc06f0  b.gt 0x7102bc0708
7102bc06f4  ldr x0,[x27, #0x60]
7102bc06f8  cbz x0,0x7102bc0708
7102bc06fc  ldr x8,[x0]
7102bc0700  ldr x8,[x8, #0x8]
7102bc0704  blr x8
7102bc0708  str xzr,[x27, #0x60]
7102bc070c  mov w0,#0x10
7102bc0710  mov w1,#0x20
7102bc0714  bl 0x710392e290
7102bc0718  cbnz x0,0x7102bc0758
7102bc071c  ldr x0,[x25, #0xf00]
7102bc0720  cbz x0,0x7102bc0754
7102bc0724  stur wzr,[x29, #-0xd0]
7102bc0728  str x24,[sp, #0xf0]
7102bc072c  ldr x8,[x0]
7102bc0730  ldr x8,[x8, #0x30]
7102bc0734  sub x1,x29,#0xd0
7102bc0738  add x2,sp,#0xf0
7102bc073c  blr x8
7102bc0740  tbz w0,#0x0,0x7102bc0754
7102bc0744  mov w0,#0x10
7102bc0748  mov w1,#0x20
7102bc074c  bl 0x710392e290
7102bc0750  cbnz x0,0x7102bc0758
7102bc0754  mov x0,xzr
7102bc0758  add x19,x19,#0x8
7102bc075c  cmp x23,x19
7102bc0760  str w20,[x0, #0x8]
7102bc0764  str x28,[x0]
7102bc0768  stp x21,x26,[x0, #0x10]
7102bc076c  str x0,[x27, #0x60]
7102bc0770  b.ne 0x7102bc06d0
7102bc0774  ldr x8,[x21]
7102bc0778  ldr x8,[x8, #0x300]
7102bc077c  ldr x8,[x8, #0x18]
7102bc0780  ldr x8,[x8]
7102bc0784  mov x9,#0x2091
7102bc0788  movk x9,#0x79eb, LSL #16
7102bc078c  movk x9,#0x19, LSL #32
7102bc0790  b 0x7102bc0798
7102bc0794  add x8,x8,#0x8
7102bc0798  ldr x10,[x8]
7102bc079c  ldr x11,[x10, #0xa0]
7102bc07a0  and x11,x11,#0xffffffffff
7102bc07a4  cmp x11,x9
7102bc07a8  b.ne 0x7102bc0794
7102bc07ac  ldr x8,[x10, #0x110]
7102bc07b0  str x8,[x21, #0x110]
7102bc07b4  mov w2,#0x1
7102bc07b8  ldp x0,x1,[x8]
7102bc07bc  bl 0x71025f4d80
7102bc07c0  ldr x8,[x21, #0x110]
7102bc07c4  ldp x19,x23,[x8]
7102bc07c8  cmp x19,x23
7102bc07cc  b.eq 0x7102bc0890
7102bc07d0  mov w24,#0x20
7102bc07d4  adrp x25,0x7105332000
7102bc07d8  adrp x28,0x710507f000
7102bc07dc  add x28,x28,#0x650
7102bc07e0  orr w20,wzr,#0x10001
7102bc07e4  adrp x26,0x7102bce000
7102bc07e8  add x26,x26,#0xda0
7102bc07ec  ldr x27,[x19]
7102bc07f0  ldr x8,[x27, #0x60]
7102bc07f4  cbz x8,0x7102bc0828
7102bc07f8  ldrh w9,[x8, #0x8]
7102bc07fc  sub w9,w9,#0x1
7102bc0800  sxth w10,w9
7102bc0804  cmp w10,#0x0
7102bc0808  strh w9,[x8, #0x8]
7102bc080c  b.gt 0x7102bc0824
7102bc0810  ldr x0,[x27, #0x60]
7102bc0814  cbz x0,0x7102bc0824
7102bc0818  ldr x8,[x0]
7102bc081c  ldr x8,[x8, #0x8]
7102bc0820  blr x8
7102bc0824  str xzr,[x27, #0x60]
7102bc0828  mov w0,#0x10
7102bc082c  mov w1,#0x20
7102bc0830  bl 0x710392e290
7102bc0834  cbnz x0,0x7102bc0874
7102bc0838  ldr x0,[x25, #0xf00]
7102bc083c  cbz x0,0x7102bc0870
7102bc0840  stur wzr,[x29, #-0xd0]
7102bc0844  str x24,[sp, #0xf0]
7102bc0848  ldr x8,[x0]
7102bc084c  ldr x8,[x8, #0x30]
7102bc0850  sub x1,x29,#0xd0
7102bc0854  add x2,sp,#0xf0
7102bc0858  blr x8
7102bc085c  tbz w0,#0x0,0x7102bc0870
7102bc0860  mov w0,#0x10
7102bc0864  mov w1,#0x20
7102bc0868  bl 0x710392e290
7102bc086c  cbnz x0,0x7102bc0874
7102bc0870  mov x0,xzr
7102bc0874  add x19,x19,#0x8
7102bc0878  cmp x23,x19
7102bc087c  str w20,[x0, #0x8]
7102bc0880  str x28,[x0]
7102bc0884  stp x21,x26,[x0, #0x10]
7102bc0888  str x0,[x27, #0x60]
7102bc088c  b.ne 0x7102bc07ec
7102bc0890  ldr x8,[x21]
7102bc0894  ldr x8,[x8, #0x300]
7102bc0898  ldr x8,[x8, #0x18]
7102bc089c  ldr x8,[x8]
7102bc08a0  mov x9,#0x1007
7102bc08a4  movk x9,#0xeec, LSL #16
7102bc08a8  movk x9,#0x19, LSL #32
7102bc08ac  b 0x7102bc08b4
7102bc08b0  add x8,x8,#0x8
7102bc08b4  ldr x10,[x8]
7102bc08b8  ldr x11,[x10, #0xa0]
7102bc08bc  and x11,x11,#0xffffffffff
7102bc08c0  cmp x11,x9
7102bc08c4  b.ne 0x7102bc08b0
7102bc08c8  ldr x8,[x10, #0x110]
7102bc08cc  str x8,[x21, #0x118]
7102bc08d0  mov w2,#0x1
7102bc08d4  ldp x0,x1,[x8]
7102bc08d8  bl 0x71025f4d80
7102bc08dc  ldr x8,[x21, #0x118]
7102bc08e0  ldp x19,x23,[x8]
7102bc08e4  cmp x19,x23
7102bc08e8  b.eq 0x7102bc09ac
7102bc08ec  mov w24,#0x20
7102bc08f0  adrp x25,0x7105332000
7102bc08f4  adrp x28,0x710507f000
7102bc08f8  add x28,x28,#0x650
7102bc08fc  orr w20,wzr,#0x10001
7102bc0900  adrp x26,0x7102bce000
7102bc0904  add x26,x26,#0xda0
7102bc0908  ldr x27,[x19]
7102bc090c  ldr x8,[x27, #0x60]
7102bc0910  cbz x8,0x7102bc0944
7102bc0914  ldrh w9,[x8, #0x8]
7102bc0918  sub w9,w9,#0x1
7102bc091c  sxth w10,w9
7102bc0920  cmp w10,#0x0
7102bc0924  strh w9,[x8, #0x8]
7102bc0928  b.gt 0x7102bc0940
7102bc092c  ldr x0,[x27, #0x60]
7102bc0930  cbz x0,0x7102bc0940
7102bc0934  ldr x8,[x0]
7102bc0938  ldr x8,[x8, #0x8]
7102bc093c  blr x8
7102bc0940  str xzr,[x27, #0x60]
7102bc0944  mov w0,#0x10
7102bc0948  mov w1,#0x20
7102bc094c  bl 0x710392e290
7102bc0950  cbnz x0,0x7102bc0990
7102bc0954  ldr x0,[x25, #0xf00]
7102bc0958  cbz x0,0x7102bc098c
7102bc095c  stur wzr,[x29, #-0xd0]
7102bc0960  str x24,[sp, #0xf0]
7102bc0964  ldr x8,[x0]
7102bc0968  ldr x8,[x8, #0x30]
7102bc096c  sub x1,x29,#0xd0
7102bc0970  add x2,sp,#0xf0
7102bc0974  blr x8
7102bc0978  tbz w0,#0x0,0x7102bc098c
7102bc097c  mov w0,#0x10
7102bc0980  mov w1,#0x20
7102bc0984  bl 0x710392e290
7102bc0988  cbnz x0,0x7102bc0990
7102bc098c  mov x0,xzr
7102bc0990  add x19,x19,#0x8
7102bc0994  cmp x23,x19
7102bc0998  str w20,[x0, #0x8]
7102bc099c  str x28,[x0]
7102bc09a0  stp x21,x26,[x0, #0x10]
7102bc09a4  str x0,[x27, #0x60]
7102bc09a8  b.ne 0x7102bc0908
7102bc09ac  ldr x8,[x21]
7102bc09b0  ldr x8,[x8, #0x300]
7102bc09b4  ldr x8,[x8, #0x18]
7102bc09b8  ldr x8,[x8]
7102bc09bc  mov x9,#0x85a4
7102bc09c0  movk x9,#0x9088, LSL #16
7102bc09c4  movk x9,#0x19, LSL #32
7102bc09c8  b 0x7102bc09d0
7102bc09cc  add x8,x8,#0x8
7102bc09d0  ldr x10,[x8]
7102bc09d4  ldr x11,[x10, #0xa0]
7102bc09d8  and x11,x11,#0xffffffffff
7102bc09dc  cmp x11,x9
7102bc09e0  b.ne 0x7102bc09cc
7102bc09e4  ldr x8,[x10, #0x110]
7102bc09e8  str x8,[x21, #0x120]
7102bc09ec  mov w2,#0x1
7102bc09f0  ldp x0,x1,[x8]
7102bc09f4  bl 0x71025f4d80
7102bc09f8  ldr x8,[x21, #0x120]
7102bc09fc  ldp x19,x23,[x8]
7102bc0a00  cmp x19,x23
7102bc0a04  b.eq 0x7102bc0ac8
7102bc0a08  mov w24,#0x20
7102bc0a0c  adrp x25,0x7105332000
7102bc0a10  adrp x28,0x710507f000
7102bc0a14  add x28,x28,#0x650
7102bc0a18  orr w20,wzr,#0x10001
7102bc0a1c  adrp x26,0x7102bce000
7102bc0a20  add x26,x26,#0xda0
7102bc0a24  ldr x27,[x19]
7102bc0a28  ldr x8,[x27, #0x60]
7102bc0a2c  cbz x8,0x7102bc0a60
7102bc0a30  ldrh w9,[x8, #0x8]
7102bc0a34  sub w9,w9,#0x1
7102bc0a38  sxth w10,w9
7102bc0a3c  cmp w10,#0x0
7102bc0a40  strh w9,[x8, #0x8]
7102bc0a44  b.gt 0x7102bc0a5c
7102bc0a48  ldr x0,[x27, #0x60]
7102bc0a4c  cbz x0,0x7102bc0a5c
7102bc0a50  ldr x8,[x0]
7102bc0a54  ldr x8,[x8, #0x8]
7102bc0a58  blr x8
7102bc0a5c  str xzr,[x27, #0x60]
7102bc0a60  mov w0,#0x10
7102bc0a64  mov w1,#0x20
7102bc0a68  bl 0x710392e290
7102bc0a6c  cbnz x0,0x7102bc0aac
7102bc0a70  ldr x0,[x25, #0xf00]
7102bc0a74  cbz x0,0x7102bc0aa8
7102bc0a78  stur wzr,[x29, #-0xd0]
7102bc0a7c  str x24,[sp, #0xf0]
7102bc0a80  ldr x8,[x0]
7102bc0a84  ldr x8,[x8, #0x30]
7102bc0a88  sub x1,x29,#0xd0
7102bc0a8c  add x2,sp,#0xf0
7102bc0a90  blr x8
7102bc0a94  tbz w0,#0x0,0x7102bc0aa8
7102bc0a98  mov w0,#0x10
7102bc0a9c  mov w1,#0x20
7102bc0aa0  bl 0x710392e290
7102bc0aa4  cbnz x0,0x7102bc0aac
7102bc0aa8  mov x0,xzr
7102bc0aac  add x19,x19,#0x8
7102bc0ab0  cmp x23,x19
7102bc0ab4  str w20,[x0, #0x8]
7102bc0ab8  str x28,[x0]
7102bc0abc  stp x21,x26,[x0, #0x10]
7102bc0ac0  str x0,[x27, #0x60]
7102bc0ac4  b.ne 0x7102bc0a24
7102bc0ac8  str x22,[sp, #0xf0]
7102bc0acc  ldr x8,[x21]
7102bc0ad0  ldr x8,[x8, #0x338]
7102bc0ad4  ldr x8,[x8]
7102bc0ad8  ldr x0,[x8, #0x8]
7102bc0adc  mov w24,#0xffffffff
7102bc0ae0  cbz x0,0x7102bc0af4
7102bc0ae4  add x1,sp,#0xf0
7102bc0ae8  mov w2,wzr
7102bc0aec  bl 0x7102405040
7102bc0af0  b 0x7102bc0af8
7102bc0af4  mov w0,w24
7102bc0af8  adrp x28,0x71052a8000
7102bc0afc  ldr x26,[sp, #0x48]
7102bc0b00  ldr x27,[sp, #0x60]
7102bc0b04  ldr x28,[x28, #0xa88]
7102bc0b08  str w0,[x21, #0xac]
7102bc0b0c  ldr x8,[x21, #0x128]
7102bc0b10  str x8,[x21, #0x130]
7102bc0b14  ldr x22,[x26, #0x9c0]
7102bc0b18  str x21,[x26, #0x9c0]
7102bc0b1c  cbz x22,0x7102bc0b3c
7102bc0b20  ldr x0,[x22, #0x128]
7102bc0b24  cbz x0,0x7102bc0b30
7102bc0b28  str x0,[x22, #0x130]
7102bc0b2c  bl 0x710392eb40
7102bc0b30  mov x0,x22
7102bc0b34  bl 0x710392eb40
7102bc0b38  ldr x21,[x26, #0x9c0]
7102bc0b3c  ldr w8,[x26, #0x9fc]
7102bc0b40  cmp w8,#0x0
7102bc0b44  cset w1,eq
7102bc0b48  mov x0,x21
7102bc0b4c  bl 0x7102bcf100
7102bc0b50  mov w1,#0xa0
7102bc0b54  mov w0,#0x10
7102bc0b58  bl 0x710392e290
7102bc0b5c  mov x22,x0
7102bc0b60  cbnz x0,0x7102bc0bac
7102bc0b64  adrp x8,0x7105332000
7102bc0b68  ldr x0,[x8, #0xf00]
7102bc0b6c  cbz x0,0x7102bc0ba8
7102bc0b70  mov w8,#0xa0
7102bc0b74  stur wzr,[x29, #-0xd0]
7102bc0b78  sub x1,x29,#0xd0
7102bc0b7c  str x8,[sp, #0xf0]
7102bc0b80  ldr x8,[x0]
7102bc0b84  ldr x8,[x8, #0x30]
7102bc0b88  add x2,sp,#0xf0
7102bc0b8c  blr x8
7102bc0b90  tbz w0,#0x0,0x7102bc0ba8
7102bc0b94  mov w1,#0xa0
7102bc0b98  mov w0,#0x10
7102bc0b9c  bl 0x710392e290
7102bc0ba0  mov x22,x0
7102bc0ba4  cbnz x0,0x7102bc0bac
7102bc0ba8  mov x22,xzr
7102bc0bac  mov x0,x22
7102bc0bb0  mov x1,x26
7102bc0bb4  mov x2,x27
7102bc0bb8  bl 0x7102bcb660
7102bc0bbc  ldr x21,[x26, #0x998]
7102bc0bc0  str x22,[x26, #0x998]
7102bc0bc4  cbz x21,0x7102bc0c10
7102bc0bc8  ldrb w8,[x21, #0x81]
7102bc0bcc  cbnz w8,0x7102bc0c04
7102bc0bd0  mov w8,#0x1
7102bc0bd4  strb w8,[x21, #0x81]
7102bc0bd8  adrp x19,0x71052b9000
7102bc0bdc  ldr x8,[x19, #0x4f8]
7102bc0be0  ldr x0,[x8]
7102bc0be4  add x2,x21,#0x70
7102bc0be8  orr w1,wzr,#0x3
7102bc0bec  bl 0x7101378af0
7102bc0bf0  ldr x8,[x19, #0x4f8]
7102bc0bf4  ldr x0,[x8]
7102bc0bf8  add x2,x21,#0x78
7102bc0bfc  mov w1,#0x4
7102bc0c00  bl 0x7101378af0
7102bc0c04  mov x0,x21
7102bc0c08  stp xzr,xzr,[x21, #0x18]
7102bc0c0c  bl 0x710392eb40
7102bc0c10  mov w1,#0x90
7102bc0c14  mov w0,#0x10
7102bc0c18  bl 0x710392e290
7102bc0c1c  mov x21,x0
7102bc0c20  cbnz x0,0x7102bc0c6c
7102bc0c24  adrp x8,0x7105332000
7102bc0c28  ldr x0,[x8, #0xf00]
7102bc0c2c  cbz x0,0x7102bc0c68
7102bc0c30  mov w8,#0x90
7102bc0c34  stur wzr,[x29, #-0xd0]
7102bc0c38  sub x1,x29,#0xd0
7102bc0c3c  str x8,[sp, #0xf0]
7102bc0c40  ldr x8,[x0]
7102bc0c44  ldr x8,[x8, #0x30]
7102bc0c48  add x2,sp,#0xf0
7102bc0c4c  blr x8
7102bc0c50  tbz w0,#0x0,0x7102bc0c68
7102bc0c54  mov w1,#0x90
7102bc0c58  mov w0,#0x10
7102bc0c5c  bl 0x710392e290
7102bc0c60  mov x21,x0
7102bc0c64  cbnz x0,0x7102bc0c6c
7102bc0c68  mov x21,xzr
7102bc0c6c  mov w8,#0x1
7102bc0c70  stp x26,x27,[x21]
7102bc0c74  str xzr,[x21, #0x10]
7102bc0c78  mov w0,#0x10
7102bc0c7c  orr w1,wzr,#0xf0
7102bc0c80  str w24,[x21, #0x18]
7102bc0c84  strb w8,[x21, #0x1c]
7102bc0c88  adrp x8,0x710446a000
7102bc0c8c  add x8,x8,#0xc60
7102bc0c90  str wzr,[x21, #0x20]
7102bc0c94  ldp x9,x8,[x8]
7102bc0c98  str wzr,[x21, #0x40]
7102bc0c9c  stp x9,x8,[x21, #0x30]
7102bc0ca0  ldr q0,[x28]
7102bc0ca4  orr x8,xzr,#0x3f8000003f800000
7102bc0ca8  orr x9,xzr,#0x100000000
7102bc0cac  str wzr,[x21, #0x74]
7102bc0cb0  stur xzr,[x21, #0x65]
7102bc0cb4  str xzr,[x21, #0x60]
7102bc0cb8  str xzr,[x21, #0x88]
7102bc0cbc  stp x8,x9,[x21, #0x78]
7102bc0cc0  str q0,[x21, #0x50]
7102bc0cc4  bl 0x710392e290
7102bc0cc8  mov x23,x0
7102bc0ccc  cbnz x0,0x7102bc0d18
7102bc0cd0  adrp x8,0x7105332000
7102bc0cd4  ldr x0,[x8, #0xf00]
7102bc0cd8  cbz x0,0x7102bc0d14
7102bc0cdc  orr w8,wzr,#0xf0
7102bc0ce0  stur wzr,[x29, #-0xd0]
7102bc0ce4  sub x1,x29,#0xd0
7102bc0ce8  str x8,[sp, #0xf0]
7102bc0cec  ldr x8,[x0]
7102bc0cf0  ldr x8,[x8, #0x30]
7102bc0cf4  add x2,sp,#0xf0
7102bc0cf8  blr x8
7102bc0cfc  tbz w0,#0x0,0x7102bc0d14
7102bc0d00  mov w0,#0x10
7102bc0d04  orr w1,wzr,#0xf0
7102bc0d08  bl 0x710392e290
7102bc0d0c  mov x23,x0
7102bc0d10  cbnz x0,0x7102bc0d18
7102bc0d14  mov x23,xzr
7102bc0d18  mov x22,#0x198
7102bc0d1c  movk x22,#0xf6e0, LSL #16
7102bc0d20  movk x22,#0x14, LSL #32
7102bc0d24  mov x0,x23
7102bc0d28  mov x1,x26
7102bc0d2c  mov w3,wzr
7102bc0d30  mov x2,x22
7102bc0d34  mov w4,wzr
7102bc0d38  mov x5,xzr
7102bc0d3c  bl 0x7103146b70
7102bc0d40  ldr x8,[x21]
7102bc0d44  str x23,[x21, #0x10]
7102bc0d48  ldr x9,[x8, #0x300]
7102bc0d4c  ldr x9,[x9, #0x18]
7102bc0d50  ldr x9,[x9]
7102bc0d54  b 0x7102bc0d5c
7102bc0d58  add x9,x9,#0x8
7102bc0d5c  ldr x10,[x9]
7102bc0d60  ldr x11,[x10, #0xa0]
7102bc0d64  and x11,x11,#0xffffffffff
7102bc0d68  cmp x11,x22
7102bc0d6c  b.ne 0x7102bc0d58
7102bc0d70  ldr x9,[x10, #0x110]
7102bc0d74  str x9,[x21, #0x88]
7102bc0d78  ldr x9,[x21, #0x8]
7102bc0d7c  ldr s0,[x9, #0x88]
7102bc0d80  ldr w9,[x9, #0x8c]
7102bc0d84  str w9,[x21, #0x7c]
7102bc0d88  str s0,[x21, #0x78]
7102bc0d8c  fneg s1,s0
7102bc0d90  str s1,[x21, #0x74]
7102bc0d94  str xzr,[x21, #0x80]
7102bc0d98  ldr x8,[x8, #0x308]
7102bc0d9c  ldr s0,[x8, #0x11c]
7102bc0da0  fmov s1,0xc1f00000
7102bc0da4  fadd s0,s0,s1
7102bc0da8  ldr q1,[x21, #0x50]
7102bc0dac  mov v1.S[0x0],v0.S[0x0]
7102bc0db0  str q1,[x21, #0x50]
7102bc0db4  ldr s0,[x8, #0x120]
7102bc0db8  adrp x8,0x7104473000
7102bc0dbc  ldr s2,[x8, #0x928]
7102bc0dc0  fadd s0,s0,s2
7102bc0dc4  mov v1.S[0x1],v0.S[0x0]
7102bc0dc8  str q1,[x21, #0x50]
7102bc0dcc  ldr x0,[x26, #0x990]
7102bc0dd0  str x21,[x26, #0x990]
7102bc0dd4  cbz x0,0x7102bc0de4
7102bc0dd8  str xzr,[x0, #0x10]
7102bc0ddc  bl 0x710392eb40
7102bc0de0  ldr x21,[x26, #0x990]
7102bc0de4  ldr w8,[x26, #0x9fc]
7102bc0de8  cbz w8,0x7102bc0e00
7102bc0dec  ldr x0,[x21, #0x10]
7102bc0df0  ldr x8,[x0]
7102bc0df4  ldr x8,[x8, #0x90]
7102bc0df8  blr x8
7102bc0dfc  mov w8,#0xffffffff
7102bc0e00  mov w19,#0x1
7102bc0e04  mov w1,#0x140
7102bc0e08  mov w0,#0x10
7102bc0e0c  strb w19,[x21, #0x1c]
7102bc0e10  str w8,[x21, #0x18]
7102bc0e14  bl 0x710392e290
7102bc0e18  mov x21,x0
7102bc0e1c  cbnz x0,0x7102bc0e68
7102bc0e20  adrp x8,0x7105332000
7102bc0e24  ldr x0,[x8, #0xf00]
7102bc0e28  cbz x0,0x7102bc0e64
7102bc0e2c  mov w8,#0x140
7102bc0e30  stur wzr,[x29, #-0xd0]
7102bc0e34  sub x1,x29,#0xd0
7102bc0e38  str x8,[sp, #0xf0]
7102bc0e3c  ldr x8,[x0]
7102bc0e40  ldr x8,[x8, #0x30]
7102bc0e44  add x2,sp,#0xf0
7102bc0e48  blr x8
7102bc0e4c  tbz w0,#0x0,0x7102bc0e64
7102bc0e50  mov w1,#0x140
7102bc0e54  mov w0,#0x10
7102bc0e58  bl 0x710392e290
7102bc0e5c  mov x21,x0
7102bc0e60  cbnz x0,0x7102bc0e68
7102bc0e64  mov x21,xzr
7102bc0e68  orr w8,wzr,#0x7
7102bc0e6c  stp x26,x27,[x21]
7102bc0e70  str xzr,[x21, #0x10]
7102bc0e74  adrp x23,0x71052a8000
7102bc0e78  mov x22,x21
7102bc0e7c  str w8,[x21, #0x18]
7102bc0e80  adrp x8,0x71052a8000
7102bc0e84  mov x1,x26
7102bc0e88  strb wzr,[x21, #0x1c]
7102bc0e8c  ldr q0,[x28]
7102bc0e90  stp q0,q0,[x21, #0x20]
7102bc0e94  str q0,[x21, #0x40]
7102bc0e98  ldr x8,[x8, #0xb00]
7102bc0e9c  ldr q0,[x8]
7102bc0ea0  orr x8,xzr,#0x3f8000003f800000
7102bc0ea4  stp xzr,xzr,[x21, #0xc0]
7102bc0ea8  str wzr,[x21, #0x60]
7102bc0eac  str wzr,[x21, #0xd4]
7102bc0eb0  strb wzr,[x21, #0xb8]
7102bc0eb4  str xzr,[x21, #0x70]
7102bc0eb8  str x8,[x21, #0xd8]
7102bc0ebc  adrp x8,0x710532a000
7102bc0ec0  stp xzr,xzr,[x21, #0xa8]
7102bc0ec4  stp xzr,xzr,[x21, #0x98]
7102bc0ec8  stp xzr,xzr,[x21, #0x88]
7102bc0ecc  stp xzr,xzr,[x21, #0x78]
7102bc0ed0  str q0,[x21, #0x50]
7102bc0ed4  ldr x23,[x23, #0xa80]
7102bc0ed8  stp wzr,w19,[x21, #0xe0]
7102bc0edc  ldr q0,[x23]
7102bc0ee0  str x26,[x22, #0xf0]!
7102bc0ee4  mov x2,x22
7102bc0ee8  strh w19,[x21, #0xf8]
7102bc0eec  strb wzr,[x21, #0xfa]
7102bc0ef0  str w24,[x21, #0xfc]
7102bc0ef4  str w19,[x21, #0x130]
7102bc0ef8  stp xzr,xzr,[x21, #0x120]
7102bc0efc  stp q0,q0,[x21, #0x100]
7102bc0f00  ldr x8,[x8, #0x9d8]
7102bc0f04  ldr x8,[x8]
7102bc0f08  ldr x0,[x8, #0x1c8]
7102bc0f0c  bl 0x71031675b0
7102bc0f10  and w8,w0,#0x1
7102bc0f14  adrp x0,0x71042e5000
7102bc0f18  add x0,x0,#0x3b4
7102bc0f1c  strb w8,[x21, #0xf8]
7102bc0f20  bl 0x7103151710
7102bc0f24  ldr x8,[x21]
7102bc0f28  ldr x8,[x8, #0x300]
7102bc0f2c  ldr x1,[x8, #0x8]
7102bc0f30  mov w2,w0
7102bc0f34  add x0,sp,#0x70
7102bc0f38  bl 0x710262cfa0
7102bc0f3c  ldr x8,[sp, #0x70]
7102bc0f40  cbz x8,0x7102bc0fdc
7102bc0f44  mov w19,wzr
7102bc0f48  mov w20,#0x130
7102bc0f4c  ldp x10,x11,[x8, #0x1a8]
7102bc0f50  ldr w9,[sp, #0x78]
7102bc0f54  sub x11,x11,x10
7102bc0f58  asr x11,x11,#0x3
7102bc0f5c  cmp x11,x9
7102bc0f60  b.ls 0x7102bc3a50
7102bc0f64  ldr x9,[x10, x9, LSL #0x3]
7102bc0f68  ldr x9,[x9, #0x10]
7102bc0f6c  ldr w8,[sp, #0x80]
7102bc0f70  ldr w10,[x9, #0x108]
7102bc0f74  cmp w10,w8
7102bc0f78  b.ls 0x7102bc0f88
7102bc0f7c  ldr x9,[x9, #0x110]
7102bc0f80  madd x8,x8,x20,x9
7102bc0f84  b 0x7102bc0f8c
7102bc0f88  mov x8,xzr
7102bc0f8c  ldr w9,[x8, #0x104]
7102bc0f90  cmp w9,#0x4
7102bc0f94  b.ne 0x7102bc0fc8
7102bc0f98  and w9,w19,#0xff
7102bc0f9c  cmp w9,#0x3
7102bc0fa0  b.cs 0x7102bc3a58
7102bc0fa4  movi v0.2D,#0x0
7102bc0fa8  add x9,x8,#0x108
7102bc0fac  add x10,x8,#0x10c
7102bc0fb0  ld1 {v0.S}[0],[x9]
7102bc0fb4  add x8,x8,#0x110
7102bc0fb8  ld1 {v0.S}[1],[x10]
7102bc0fbc  ld1 {v0.S}[2],[x8]
7102bc0fc0  add x8,x21,w19, UXTB  #0x4
7102bc0fc4  str q0,[x8, #0x70]
7102bc0fc8  add x0,sp,#0x70
7102bc0fcc  bl 0x71026825a0
7102bc0fd0  ldr x8,[sp, #0x70]
7102bc0fd4  add w19,w19,#0x1
7102bc0fd8  cbnz x8,0x7102bc0f4c
7102bc0fdc  adrp x8,0x7104469000
7102bc0fe0  ldr q0,[x8, #0xb80]
7102bc0fe4  mov x8,#0x40200000
7102bc0fe8  stp xzr,xzr,[x29, #-0x100]
7102bc0fec  movk x8,#0x2, LSL #32
7102bc0ff0  stur x8,[x29, #-0xe0]
7102bc0ff4  stur q0,[x29, #-0xf0]
7102bc0ff8  ldr x24,[x21]
7102bc0ffc  mov w1,#0x110
7102bc1000  mov w0,#0x10
7102bc1004  mov x19,x23
7102bc1008  bl 0x710392e290
7102bc100c  mov x25,x0
7102bc1010  cbnz x0,0x7102bc105c
7102bc1014  adrp x8,0x7105332000
7102bc1018  ldr x0,[x8, #0xf00]
7102bc101c  cbz x0,0x7102bc1058
7102bc1020  mov w8,#0x110
7102bc1024  stur wzr,[x29, #-0xd0]
7102bc1028  sub x1,x29,#0xd0
7102bc102c  str x8,[sp, #0xf0]
7102bc1030  ldr x8,[x0]
7102bc1034  ldr x8,[x8, #0x30]
7102bc1038  add x2,sp,#0xf0
7102bc103c  blr x8
7102bc1040  tbz w0,#0x0,0x7102bc1058
7102bc1044  mov w1,#0x110
7102bc1048  mov w0,#0x10
7102bc104c  bl 0x710392e290
7102bc1050  mov x25,x0
7102bc1054  cbnz x0,0x7102bc105c
7102bc1058  mov x25,xzr
7102bc105c  mov w23,#0xffffffff
7102bc1060  adrp x2,0x710439b000
7102bc1064  add x2,x2,#0x408
7102bc1068  mov x0,x25
7102bc106c  mov x1,x24
7102bc1070  mov w3,w23
7102bc1074  bl 0x7103141660
7102bc1078  str x25,[x21, #0x10]
7102bc107c  ldr x8,[x25, #0x38]
7102bc1080  cbz x8,0x7102bc10a8
7102bc1084  ldr x0,[x8, #0x130]
7102bc1088  ldr x8,[x0]
7102bc108c  ldr x8,[x8, #0x100]
7102bc1090  sub x2,x29,#0x100
7102bc1094  mov w1,wzr
7102bc1098  mov w3,wzr
7102bc109c  mov w4,wzr
7102bc10a0  mov w5,wzr
7102bc10a4  blr x8
7102bc10a8  ldr q1,[x28]
7102bc10ac  fmov s3,wzr
7102bc10b0  mov w10,#0x100
7102bc10b4  mov x9,#0x1fca
7102bc10b8  movk x9,#0x1ed9, LSL #16
7102bc10bc  str w10,[sp, #0x150]
7102bc10c0  orr w10,wzr,#0xe
7102bc10c4  movk x9,#0x3, LSL #32
7102bc10c8  mov w11,#0x1
7102bc10cc  strb w10,[sp, #0x166]
7102bc10d0  add x10,sp,#0xf0
7102bc10d4  str x9,[sp, #0x138]
7102bc10d8  strb wzr,[sp, #0x143]
7102bc10dc  strh w11,[sp, #0x154]
7102bc10e0  strb wzr,[sp, #0x156]
7102bc10e4  ext v2.16B,v1.16B,v1.16B,0x8
7102bc10e8  mov v2.S[0x1],v3.S[0x0]
7102bc10ec  mov v1.D[0x1],v2.D[0x0]
7102bc10f0  ldr q0,[x19]
7102bc10f4  orr w8,wzr,#0x3f800000
7102bc10f8  strb wzr,[sp, #0x196]
7102bc10fc  strh wzr,[sp, #0x194]
7102bc1100  str wzr,[sp, #0x190]
7102bc1104  str w8,[sp, #0x198]
7102bc1108  str w8,[sp, #0x128]
7102bc110c  stp q1,q1,[sp, #0xf0]
7102bc1110  str w8,[sp, #0x130]
7102bc1114  strh wzr,[sp, #0x164]
7102bc1118  strh wzr,[sp, #0x170]
7102bc111c  stur wzr,[x10, #0x6f]
7102bc1120  stur xzr,[x10, #0x67]
7102bc1124  str x9,[sp, #0x178]
7102bc1128  mov x9,#0xfc4f
7102bc112c  movk x9,#0x25cb, LSL #16
7102bc1130  movk x9,#0x4, LSL #32
7102bc1134  str x11,[sp, #0x168]
7102bc1138  str q0,[sp, #0x180]
7102bc113c  str wzr,[sp, #0x190]
7102bc1140  strh wzr,[sp, #0x194]
7102bc1144  stur x8,[x10, #0xac]
7102bc1148  mov x25,x19
7102bc114c  strh wzr,[sp, #0x1b8]
7102bc1150  strh wzr,[sp, #0x1bc]
7102bc1154  str x9,[sp, #0x1a8]
7102bc1158  mov x9,#0x7a80
7102bc115c  movk x9,#0xfb99, LSL #16
7102bc1160  movk x9,#0x7, LSL #32
7102bc1164  str x9,[sp, #0x1b0]
7102bc1168  mov w9,#0xbf800000
7102bc116c  str w9,[sp, #0x1c0]
7102bc1170  orr w9,wzr,#0x3
7102bc1174  stur xzr,[x10, #0xe4]
7102bc1178  stur xzr,[x10, #0xdc]
7102bc117c  stur xzr,[x10, #0xd4]
7102bc1180  str w8,[sp, #0x1e4]
7102bc1184  str w8,[sp, #0x12c]
7102bc1188  orr w8,wzr,#0x3f
7102bc118c  strh w8,[sp, #0x140]
7102bc1190  orr w8,wzr,#0x7
7102bc1194  strh w9,[sp, #0x1e0]
7102bc1198  mov x9,#0x4020000000000000
7102bc119c  str x9,[sp, #0x110]
7102bc11a0  mov x9,#0x169
7102bc11a4  movk x9,#0x64, LSL #32
7102bc11a8  strb w8,[sp, #0x142]
7102bc11ac  orr w8,wzr,#0x1f
7102bc11b0  strb w8,[sp, #0x144]
7102bc11b4  mov x8,#0x2b3
7102bc11b8  movk x8,#0xa2c5, LSL #16
7102bc11bc  movk x8,#0x15, LSL #32
7102bc11c0  str x9,[sp, #0x118]
7102bc11c4  mov w9,#0x32
7102bc11c8  str w23,[sp, #0x1dc]
7102bc11cc  strh wzr,[sp, #0x1e8]
7102bc11d0  strb wzr,[sp, #0x1ea]
7102bc11d4  str x8,[sp, #0x148]
7102bc11d8  mov w8,#0x2
7102bc11dc  str x9,[sp, #0x120]
7102bc11e0  strb w11,[sp, #0x15d]
7102bc11e4  strb wzr,[sp, #0x15a]
7102bc11e8  strb wzr,[sp, #0x161]
7102bc11ec  strb w8,[sp, #0x163]
7102bc11f0  strb w11,[sp, #0x158]
7102bc11f4  strb w11,[sp, #0x159]
7102bc11f8  strb w11,[sp, #0x15e]
7102bc11fc  strb w11,[sp, #0x160]
7102bc1200  ldr x0,[x21, #0x10]
7102bc1204  ldr x8,[x0, #0x38]
7102bc1208  cbz x8,0x7102bc122c
7102bc120c  ldr x0,[x8, #0xa0]
7102bc1210  ldr x8,[x0]
7102bc1214  ldr x8,[x8, #0x68]
7102bc1218  add x3,sp,#0xf0
7102bc121c  mov w1,wzr
7102bc1220  mov w2,wzr
7102bc1224  blr x8
7102bc1228  ldr x0,[x21, #0x10]
7102bc122c  bl 0x710313ef20
7102bc1230  ldr x24,[x21, #0x10]
7102bc1234  ldrb w8,[x24, #0x40]
7102bc1238  cbz w8,0x7102bc1288
7102bc123c  ldr x19,[x24, #0x30]
7102bc1240  cbz x19,0x7102bc1278
7102bc1244  ldrb w8,[x19, #0x10]
7102bc1248  cbz w8,0x7102bc1278
7102bc124c  ldrb w8,[x19, #0x50]
7102bc1250  strb wzr,[x19, #0x10]
7102bc1254  cbz w8,0x7102bc1278
7102bc1258  ldr x8,[x19]
7102bc125c  ldr w0,[x8, #0x8]
7102bc1260  bl 0x71003ac560
7102bc1264  ldr x8,[x0]
7102bc1268  ldr x8,[x8, #0x48]
7102bc126c  mov w1,wzr
7102bc1270  blr x8
7102bc1274  strb wzr,[x19, #0x50]
7102bc1278  ldr x8,[x24]
7102bc127c  ldr x8,[x8, #0x30]
7102bc1280  mov x0,x24
7102bc1284  blr x8
7102bc1288  strb wzr,[x24, #0x40]
7102bc128c  ldr x8,[x21]
7102bc1290  ldr x9,[x8, #0x300]
7102bc1294  ldr x9,[x9, #0x18]
7102bc1298  ldr x9,[x9]
7102bc129c  mov x24,#0x221f
7102bc12a0  movk x24,#0xb867, LSL #16
7102bc12a4  mov x12,#0xe4f1
7102bc12a8  movk x12,#0x9f07, LSL #16
7102bc12ac  movk x24,#0xd, LSL #32
7102bc12b0  movk x12,#0x14, LSL #32
7102bc12b4  b 0x7102bc12bc
7102bc12b8  add x9,x9,#0x8
7102bc12bc  ldr x10,[x9]
7102bc12c0  ldr x11,[x10, #0xa0]
7102bc12c4  and x11,x11,#0xffffffffff
7102bc12c8  cmp x11,x12
7102bc12cc  b.ne 0x7102bc12b8
7102bc12d0  ldr x19,[x10, #0x110]
7102bc12d4  str x19,[x21, #0xa8]
7102bc12d8  ldrb w8,[x8, #0x18]
7102bc12dc  cbz w8,0x7102bc1318
7102bc12e0  adrp x20,0x7105314000
7102bc12e4  add x20,x20,#0x4d8
7102bc12e8  ldarb w8,[x20]
7102bc12ec  tbz w8,#0x0,0x7102bc39d0
7102bc12f0  adrp x8,0x71052c5000
7102bc12f4  ldrb w8,[x8, #0x1ba]
7102bc12f8  cbz w8,0x7102bc1320
7102bc12fc  ldarb w8,[x20]
7102bc1300  tbz w8,#0x0,0x7102bc3a10
7102bc1304  adrp x8,0x71052c5000
7102bc1308  ldrb w8,[x8, #0x1b9]
7102bc130c  cmp w8,#0x0
7102bc1310  cset w2,ne
7102bc1314  b 0x7102bc1324
7102bc1318  mov w2,wzr
7102bc131c  b 0x7102bc1324
7102bc1320  mov w2,#0x1
7102bc1324  ldp x0,x1,[x19]
7102bc1328  bl 0x71025f4d80
7102bc132c  ldr q0,[x21, #0x70]
7102bc1330  dup s1,v0.S[0x2]
7102bc1334  adrp x8,0x7104472000
7102bc1338  ldr s2,[x8, #0x590]
7102bc133c  fadd s1,s1,s2
7102bc1340  mov v0.S[0x2],v1.S[0x0]
7102bc1344  fmov s1,wzr
7102bc1348  mov v2.16B,v1.16B
7102bc134c  mov v0.S[0x3],v1.S[0x0]
7102bc1350  str q0,[x21, #0x20]
7102bc1354  str wzr,[x21, #0x60]
7102bc1358  ldr q0,[x28]
7102bc135c  ext v1.16B,v0.16B,v0.16B,0x8
7102bc1360  mov v1.S[0x1],v2.S[0x0]
7102bc1364  mov x0,x21
7102bc1368  mov v0.D[0x1],v1.D[0x0]
7102bc136c  str q0,[x21, #0x40]
7102bc1370  bl 0x7102bcdca0
7102bc1374  ldr x9,[x21, #0xa8]
7102bc1378  ldr q0,[x21, #0x20]
7102bc137c  ldp x8,x9,[x9]
7102bc1380  cmp x8,x9
7102bc1384  b.eq 0x7102bc1464
7102bc1388  mov v1.16B,v0.16B
7102bc138c  movi d2,#0x0
7102bc1390  adrp x11,0x7104472000
7102bc1394  mov v1.D[0x1],v2.D[0x0]
7102bc1398  ldr s3,[x11, #0x970]
7102bc139c  dup s2,v0.S[0x1]
7102bc13a0  mov w10,#0x1
7102bc13a4  ldr x11,[x8]
7102bc13a8  ldr x13,[x11, #0x8]
7102bc13ac  ldrb w14,[x13, #0xe7]
7102bc13b0  ldrb w13,[x13, #0xe8]
7102bc13b4  ldrb w12,[x11, #0x128]
7102bc13b8  ldr q4,[x21, #0x50]
7102bc13bc  orr w13,w13,w14
7102bc13c0  cmp w12,#0x0
7102bc13c4  and w12,w13,#0xff
7102bc13c8  ccmp w12,#0x0,#0x0,ne
7102bc13cc  b.eq 0x7102bc13d8
7102bc13d0  strb w10,[x11, #0x129]
7102bc13d4  b 0x7102bc13fc
7102bc13d8  ldr q5,[x11, #0x10]
7102bc13dc  fabd s6,s5,s0
7102bc13e0  fcmp s6,s3
7102bc13e4  b.gt 0x7102bc13f8
7102bc13e8  dup s5,v5.S[0x1]
7102bc13ec  fabd s5,s5,s2
7102bc13f0  fcmp s5,s3
7102bc13f4  b.le 0x7102bc1400
7102bc13f8  strb w10,[x11, #0x12a]
7102bc13fc  str q1,[x11, #0x10]
7102bc1400  ldr s5,[x11, #0x30]
7102bc1404  fabs s5,s5
7102bc1408  fcmp s5,s3
7102bc140c  b.mi 0x7102bc1418
7102bc1410  str wzr,[x11, #0x30]
7102bc1414  strb w10,[x11, #0x129]
7102bc1418  ldr q5,[x11, #0x50]
7102bc141c  dup s6,v4.S[0x1]
7102bc1420  fabd s7,s5,s4
7102bc1424  fcmp s7,s3
7102bc1428  b.mi 0x7102bc1438
7102bc142c  mov v5.S[0x0],v4.S[0x0]
7102bc1430  strb w10,[x11, #0x129]
7102bc1434  str q5,[x11, #0x50]
7102bc1438  dup s7,v5.S[0x1]
7102bc143c  fabd s6,s7,s6
7102bc1440  fcmp s6,s3
7102bc1444  b.mi 0x7102bc1454
7102bc1448  mov v5.S[0x1],v4.S[0x1]
7102bc144c  strb w10,[x11, #0x129]
7102bc1450  str q5,[x11, #0x50]
7102bc1454  add x8,x8,#0x8
7102bc1458  cmp x9,x8
7102bc145c  b.ne 0x7102bc13a4
7102bc1460  ldr q0,[x21, #0x20]
7102bc1464  fmov s1,0x3f800000
7102bc1468  adrp x8,0x7104468000
7102bc146c  mov v0.S[0x3],v1.S[0x0]
7102bc1470  ldr q1,[x8, #0xca0]
7102bc1474  adrp x8,0x710446a000
7102bc1478  str q1,[sp, #0x30]
7102bc147c  str q1,[sp, #0xb0]
7102bc1480  ldr q1,[x8, #0x360]
7102bc1484  adrp x8,0x7104465000
7102bc1488  str q1,[sp, #0x60]
7102bc148c  str q1,[sp, #0xc0]
7102bc1490  ldr q1,[x8, #0x6b0]
7102bc1494  stp q1,q0,[sp, #0xd0]
7102bc1498  ldr x8,[x21, #0x10]
7102bc149c  str q1,[sp, #0x20]
7102bc14a0  ldr x19,[x8, #0x68]
7102bc14a4  cbz x19,0x7102bc152c
7102bc14a8  ldr x0,[x19, #0x90]
7102bc14ac  ldr x8,[x0]
7102bc14b0  ldr x8,[x8, #0x148]
7102bc14b4  add x1,sp,#0xb0
7102bc14b8  blr x8
7102bc14bc  ldr x19,[x19, #0xd8]
7102bc14c0  cbz x19,0x7102bc152c
7102bc14c4  ldr x8,[sp, #0xc8]
7102bc14c8  stur x8,[x29, #-0xb8]
7102bc14cc  ldr x8,[sp, #0xc0]
7102bc14d0  stur x8,[x29, #-0xc0]
7102bc14d4  ldr x8,[sp, #0xb8]
7102bc14d8  stur x8,[x29, #-0xc8]
7102bc14dc  ldr x8,[sp, #0xb0]
7102bc14e0  stur x8,[x29, #-0xd0]
7102bc14e4  ldr x8,[sp, #0xe8]
7102bc14e8  stur x8,[x29, #-0x98]
7102bc14ec  ldr x8,[sp, #0xe0]
7102bc14f0  stur x8,[x29, #-0xa0]
7102bc14f4  ldr x8,[sp, #0xd8]
7102bc14f8  stur x8,[x29, #-0xa8]
7102bc14fc  ldr x8,[sp, #0xd0]
7102bc1500  stur x8,[x29, #-0xb0]
7102bc1504  ldr x8,[x19, #0x8]
7102bc1508  ldrb w9,[x8, #0xa8]
7102bc150c  cbz w9,0x7102bc1524
7102bc1510  ldr x0,[x8, #0x48]
7102bc1514  ldr x8,[x0]
7102bc1518  ldr x8,[x8, #0x20]
7102bc151c  sub x1,x29,#0xd0
7102bc1520  blr x8
7102bc1524  mov w8,#0x1
7102bc1528  strb w8,[x19, #0x20]
7102bc152c  movi v1.2D,#0x0
7102bc1530  ldr x19,[x21, #0x8]
7102bc1534  mov x8,#0xc1000000
7102bc1538  movk x8,#0x4100, LSL #48
7102bc153c  mov w9,#0x42340000
7102bc1540  str wzr,[x21, #0xe4]
7102bc1544  stur x8,[x21, #0xd4]
7102bc1548  stur x9,[x21, #0xdc]
7102bc154c  add x8,x19,#0x22c
7102bc1550  mov v0.16B,v1.16B
7102bc1554  ld1 {v0.S}[0],[x8]
7102bc1558  add x8,x19,#0x234
7102bc155c  ld1 {v1.S}[0],[x8]
7102bc1560  add x8,x19,#0x230
7102bc1564  ld1 {v0.S}[1],[x8]
7102bc1568  add x8,x19,#0x238
7102bc156c  ld1 {v1.S}[1],[x8]
7102bc1570  add x1,sp,#0xf0
7102bc1574  sub x2,x29,#0xd0
7102bc1578  mov x0,x22
7102bc157c  str q0,[sp, #0xf0]
7102bc1580  stur q1,[x29, #-0xd0]
7102bc1584  bl 0x710317e570
7102bc1588  ldr q0,[x21, #0x20]
7102bc158c  ldr s1,[x19, #0x224]
7102bc1590  fadd s1,s0,s1
7102bc1594  dup s0,v0.S[0x1]
7102bc1598  movi v3.2D,#0x0
7102bc159c  ldr s2,[x19, #0x228]
7102bc15a0  mov v3.S[0x0],v1.S[0x0]
7102bc15a4  fadd s0,s0,s2
7102bc15a8  mov v3.S[0x1],v0.S[0x0]
7102bc15ac  add x1,sp,#0xf0
7102bc15b0  mov x0,x22
7102bc15b4  str q3,[sp, #0xf0]
7102bc15b8  bl 0x710317e220
7102bc15bc  ldrb w8,[x21, #0xf9]
7102bc15c0  cbz w8,0x7102bc1608
7102bc15c4  ldrsw x9,[x21, #0xfc]
7102bc15c8  cmp w9,#0x37
7102bc15cc  b.hi 0x7102bc1600
7102bc15d0  adrp x8,0x71052b6000
7102bc15d4  ldr x8,[x8, #0xfd8]
7102bc15d8  ldr x8,[x8]
7102bc15dc  ldr x8,[x8, #0xc0]
7102bc15e0  add x9,x8,x9
7102bc15e4  ldrb w10,[x9, #0x464]
7102bc15e8  cbz w10,0x7102bc1600
7102bc15ec  add x9,x9,#0x464
7102bc15f0  strb wzr,[x9]
7102bc15f4  ldr w9,[x8]
7102bc15f8  sub w9,w9,#0x1
7102bc15fc  str w9,[x8]
7102bc1600  str w23,[x21, #0xfc]
7102bc1604  strb wzr,[x21, #0xf9]
7102bc1608  strb wzr,[x21, #0xfa]
7102bc160c  ldr x22,[x26, #0x9b8]
7102bc1610  str x21,[x26, #0x9b8]
7102bc1614  cbz x22,0x7102bc16a4
7102bc1618  adrp x8,0x71052b6000
7102bc161c  ldr x8,[x8, #0xfd8]
7102bc1620  ldrb w9,[x8, #0x9]
7102bc1624  add x2,x22,#0xf0
7102bc1628  cbz w9,0x7102bc167c
7102bc162c  ldrb w9,[x22, #0xfa]
7102bc1630  cbz w9,0x7102bc167c
7102bc1634  ldrb w9,[x22, #0xf9]
7102bc1638  cbz w9,0x7102bc1678
7102bc163c  ldrsw x9,[x22, #0xfc]
7102bc1640  cmp w9,#0x37
7102bc1644  b.hi 0x7102bc1670
7102bc1648  ldr x8,[x8]
7102bc164c  ldr x8,[x8, #0xc0]
7102bc1650  add x9,x8,x9
7102bc1654  ldrb w10,[x9, #0x464]
7102bc1658  cbz w10,0x7102bc1670
7102bc165c  add x9,x9,#0x464
7102bc1660  strb wzr,[x9]
7102bc1664  ldr w9,[x8]
7102bc1668  sub w9,w9,#0x1
7102bc166c  str w9,[x8]
7102bc1670  str w23,[x22, #0xfc]
7102bc1674  strb wzr,[x22, #0xf9]
7102bc1678  strb wzr,[x22, #0xfa]
7102bc167c  adrp x8,0x710532a000
7102bc1680  ldr x8,[x8, #0x9d8]
7102bc1684  ldr x8,[x8]
7102bc1688  ldr x0,[x8, #0x1c8]
7102bc168c  ldr x1,[x22, #0xf0]
7102bc1690  bl 0x71031676c0
7102bc1694  mov x0,x22
7102bc1698  str xzr,[x22, #0x10]
7102bc169c  bl 0x710392eb40
7102bc16a0  ldr x21,[x26, #0x9b8]
7102bc16a4  ldr x8,[x26, #0xb90]
7102bc16a8  ldr x9,[x26, #0xb98]
7102bc16ac  mov x10,#0x31ba
7102bc16b0  movk x10,#0x559e, LSL #16
7102bc16b4  movk x10,#0x1c, LSL #32
7102bc16b8  stp x8,x9,[x21, #0xc0]
7102bc16bc  ldr x8,[x26, #0x9b8]
7102bc16c0  ldr x9,[x8]
7102bc16c4  ldr x9,[x9, #0x300]
7102bc16c8  ldr x9,[x9, #0x18]
7102bc16cc  ldr x9,[x9]
7102bc16d0  b 0x7102bc16d8
7102bc16d4  add x9,x9,#0x8
7102bc16d8  ldr x11,[x9]
7102bc16dc  ldr x12,[x11, #0xa0]
7102bc16e0  and x12,x12,#0xffffffffff
7102bc16e4  cmp x12,x10
7102bc16e8  b.ne 0x7102bc16d4
7102bc16ec  ldr x9,[x11, #0x110]
7102bc16f0  str x9,[x8, #0xb0]
7102bc16f4  mov w2,#0x1
7102bc16f8  ldp x0,x1,[x9]
7102bc16fc  mov w20,#0x1
7102bc1700  bl 0x71025f4d80
7102bc1704  ldr x19,[x26, #0x9b8]
7102bc1708  ldr w8,[x26, #0x9fc]
7102bc170c  cbz w8,0x7102bc17c8
7102bc1710  ldr x21,[x19, #0x10]
7102bc1714  ldrb w8,[x21, #0x40]
7102bc1718  cbz w8,0x7102bc1768
7102bc171c  ldr x20,[x21, #0x30]
7102bc1720  cbz x20,0x7102bc1758
7102bc1724  ldrb w8,[x20, #0x10]
7102bc1728  cbz w8,0x7102bc1758
7102bc172c  ldrb w8,[x20, #0x50]
7102bc1730  strb wzr,[x20, #0x10]
7102bc1734  cbz w8,0x7102bc1758
7102bc1738  ldr x8,[x20]
7102bc173c  ldr w0,[x8, #0x8]
7102bc1740  bl 0x71003ac560
7102bc1744  ldr x8,[x0]
7102bc1748  ldr x8,[x8, #0x48]
7102bc174c  mov w1,wzr
7102bc1750  blr x8
7102bc1754  strb wzr,[x20, #0x50]
7102bc1758  ldr x8,[x21]
7102bc175c  ldr x8,[x8, #0x30]
7102bc1760  mov x0,x21
7102bc1764  blr x8
7102bc1768  strb wzr,[x21, #0x40]
7102bc176c  ldr q0,[x19, #0x30]
7102bc1770  fmov s1,0xc1f00000
7102bc1774  mov v0.S[0x1],v1.S[0x0]
7102bc1778  ldr x8,[x19, #0x10]
7102bc177c  str q0,[x19, #0x30]
7102bc1780  ldr x8,[x8, #0x68]
7102bc1784  cbz x8,0x7102bc1794
7102bc1788  add x0,x8,#0x108
7102bc178c  strb wzr,[x8, #0x110]
7102bc1790  bl 0x71025e9d50
7102bc1794  ldr x8,[x19, #0xa8]
7102bc1798  ldp x0,x1,[x8]
7102bc179c  mov w2,#0x1
7102bc17a0  mov w20,#0x1
7102bc17a4  bl 0x71025f4d80
7102bc17a8  ldr x8,[x19, #0xb0]
7102bc17ac  ldp x0,x1,[x8]
7102bc17b0  mov w2,#0x1
7102bc17b4  bl 0x71025f4d80
7102bc17b8  orr w8,wzr,#0x7
7102bc17bc  str w8,[x19, #0x18]
7102bc17c0  strb w20,[x19, #0x1c]
7102bc17c4  b 0x7102bc181c
7102bc17c8  ldr x8,[x19, #0xa8]
7102bc17cc  str wzr,[x19, #0x18]
7102bc17d0  strb w20,[x19, #0x1c]
7102bc17d4  ldp x20,x21,[x8]
7102bc17d8  cmp x20,x21
7102bc17dc  b.eq 0x7102bc1814
7102bc17e0  mov w22,#0x1
7102bc17e4  mov x23,#-0x1
7102bc17e8  ldr x8,[x20]
7102bc17ec  ldr x9,[x8, #0x8]
7102bc17f0  strb w22,[x8, #0x128]
7102bc17f4  cbz x9,0x7102bc1808
7102bc17f8  str x23,[x9, #0xd8]
7102bc17fc  ldr x0,[x8, #0x8]
7102bc1800  mov w1,wzr
7102bc1804  bl 0x7100532bc0
7102bc1808  add x20,x20,#0x8
7102bc180c  cmp x21,x20
7102bc1810  b.ne 0x7102bc17e8
7102bc1814  add x0,x19,#0xf0
7102bc1818  bl 0x710317dc90
7102bc181c  ldr x8,[x26, #0x310]
7102bc1820  ldp x9,x10,[x8, #0xd0]
7102bc1824  cmp x9,x10
7102bc1828  b.eq 0x7102bc1860
7102bc182c  mov x11,#0x97c7
7102bc1830  movk x11,#0x3588, LSL #16
7102bc1834  movk x11,#0xd, LSL #32
7102bc1838  ldr w12,[x9, #0x8]
7102bc183c  cmp w12,#0x1
7102bc1840  b.hi 0x7102bc1854
7102bc1844  ldr x12,[x9]
7102bc1848  ldr x13,[x12, #0x68]
7102bc184c  cmp x13,x11
7102bc1850  b.eq 0x7102bc1864
7102bc1854  add x9,x9,#0x10
7102bc1858  cmp x10,x9
7102bc185c  b.ne 0x7102bc1838
7102bc1860  mov x12,xzr
7102bc1864  str x12,[x26, #0xa28]
7102bc1868  ldp x9,x10,[x8, #0xd0]
7102bc186c  cmp x9,x10
7102bc1870  b.eq 0x7102bc18a8
7102bc1874  mov x11,#0x79a7
7102bc1878  movk x11,#0xaaf0, LSL #16
7102bc187c  movk x11,#0x11, LSL #32
7102bc1880  ldr w12,[x9, #0x8]
7102bc1884  cmp w12,#0x1
7102bc1888  b.hi 0x7102bc189c
7102bc188c  ldr x12,[x9]
7102bc1890  ldr x13,[x12, #0x68]
7102bc1894  cmp x13,x11
7102bc1898  b.eq 0x7102bc18ac
7102bc189c  add x9,x9,#0x10
7102bc18a0  cmp x10,x9
7102bc18a4  b.ne 0x7102bc1880
7102bc18a8  mov x12,xzr
7102bc18ac  str x12,[x26, #0xa30]
7102bc18b0  ldp x9,x8,[x8, #0xd0]
7102bc18b4  cmp x9,x8
7102bc18b8  b.eq 0x7102bc18f0
7102bc18bc  mov x10,#0xf080
7102bc18c0  movk x10,#0x17b5, LSL #16
7102bc18c4  movk x10,#0x12, LSL #32
7102bc18c8  ldr w11,[x9, #0x8]
7102bc18cc  cmp w11,#0x1
7102bc18d0  b.hi 0x7102bc18e4
7102bc18d4  ldr x11,[x9]
7102bc18d8  ldr x12,[x11, #0x68]
7102bc18dc  cmp x12,x10
7102bc18e0  b.eq 0x7102bc18f4
7102bc18e4  add x9,x9,#0x10
7102bc18e8  cmp x8,x9
7102bc18ec  b.ne 0x7102bc18c8
7102bc18f0  mov x11,xzr
7102bc18f4  mov w0,#0x10
7102bc18f8  orr w1,wzr,#0x30
7102bc18fc  str x11,[x26, #0xa38]
7102bc1900  bl 0x710392e290
7102bc1904  mov x21,x0
7102bc1908  cbnz x0,0x7102bc1954
7102bc190c  adrp x8,0x7105332000
7102bc1910  ldr x0,[x8, #0xf00]
7102bc1914  cbz x0,0x7102bc1950
7102bc1918  orr w8,wzr,#0x30
7102bc191c  stur wzr,[x29, #-0xd0]
7102bc1920  sub x1,x29,#0xd0
7102bc1924  str x8,[sp, #0xf0]
7102bc1928  ldr x8,[x0]
7102bc192c  ldr x8,[x8, #0x30]
7102bc1930  add x2,sp,#0xf0
7102bc1934  blr x8
7102bc1938  tbz w0,#0x0,0x7102bc1950
7102bc193c  mov w0,#0x10
7102bc1940  orr w1,wzr,#0x30
7102bc1944  bl 0x710392e290
7102bc1948  mov x21,x0
7102bc194c  cbnz x0,0x7102bc1954
7102bc1950  mov x21,xzr
7102bc1954  mov x0,x21
7102bc1958  mov x1,x26
7102bc195c  bl 0x7102bd0a10
7102bc1960  ldr x22,[x26, #0x9c8]
7102bc1964  str x21,[x26, #0x9c8]
7102bc1968  cbz x22,0x7102bc1984
7102bc196c  ldr x0,[x22, #0x8]
7102bc1970  cbz x0,0x7102bc197c
7102bc1974  str x0,[x22, #0x10]
7102bc1978  bl 0x710392eb40
7102bc197c  mov x0,x22
7102bc1980  bl 0x710392eb40
7102bc1984  mov w1,#0xb0
7102bc1988  mov w0,#0x10
7102bc198c  bl 0x710392e290
7102bc1990  mov x21,x0
7102bc1994  cbnz x0,0x7102bc19e0
7102bc1998  adrp x8,0x7105332000
7102bc199c  ldr x0,[x8, #0xf00]
7102bc19a0  cbz x0,0x7102bc19dc
7102bc19a4  mov w8,#0xb0
7102bc19a8  stur wzr,[x29, #-0xd0]
7102bc19ac  sub x1,x29,#0xd0
7102bc19b0  str x8,[sp, #0xf0]
7102bc19b4  ldr x8,[x0]
7102bc19b8  ldr x8,[x8, #0x30]
7102bc19bc  add x2,sp,#0xf0
7102bc19c0  blr x8
7102bc19c4  tbz w0,#0x0,0x7102bc19dc
7102bc19c8  mov w1,#0xb0
7102bc19cc  mov w0,#0x10
7102bc19d0  bl 0x710392e290
7102bc19d4  mov x21,x0
7102bc19d8  cbnz x0,0x7102bc19e0
7102bc19dc  mov x21,xzr
7102bc19e0  mov x0,x21
7102bc19e4  mov x1,x26
7102bc19e8  mov x2,x27
7102bc19ec  bl 0x7102bd1200
7102bc19f0  ldr x0,[x26, #0x9d0]
7102bc19f4  str x21,[x26, #0x9d0]
7102bc19f8  cbz x0,0x7102bc1a04
7102bc19fc  str xzr,[x0, #0x10]
7102bc1a00  bl 0x710392eb40
7102bc1a04  mov w1,#0x50
7102bc1a08  mov w0,#0x10
7102bc1a0c  bl 0x710392e290
7102bc1a10  mov x21,x0
7102bc1a14  cbnz x0,0x7102bc1a60
7102bc1a18  adrp x8,0x7105332000
7102bc1a1c  ldr x0,[x8, #0xf00]
7102bc1a20  cbz x0,0x7102bc1a5c
7102bc1a24  mov w8,#0x50
7102bc1a28  stur wzr,[x29, #-0xd0]
7102bc1a2c  sub x1,x29,#0xd0
7102bc1a30  str x8,[sp, #0xf0]
7102bc1a34  ldr x8,[x0]
7102bc1a38  ldr x8,[x8, #0x30]
7102bc1a3c  add x2,sp,#0xf0
7102bc1a40  blr x8
7102bc1a44  tbz w0,#0x0,0x7102bc1a5c
7102bc1a48  mov w1,#0x50
7102bc1a4c  mov w0,#0x10
7102bc1a50  bl 0x710392e290
7102bc1a54  mov x21,x0
7102bc1a58  cbnz x0,0x7102bc1a60
7102bc1a5c  mov x21,xzr
7102bc1a60  mov x0,x21
7102bc1a64  mov x1,x26
7102bc1a68  bl 0x7102bd2920
7102bc1a6c  ldr x0,[x26, #0x9d8]
7102bc1a70  str x21,[x26, #0x9d8]
7102bc1a74  cbz x0,0x7102bc1a7c
7102bc1a78  bl 0x710392eb40
7102bc1a7c  ldr x21,[x26, #0x9d0]
7102bc1a80  mov w0,#0x10
7102bc1a84  orr w1,wzr,#0x70
7102bc1a88  bl 0x710392e290
7102bc1a8c  mov x22,x0
7102bc1a90  cbnz x0,0x7102bc1adc
7102bc1a94  adrp x8,0x7105332000
7102bc1a98  ldr x0,[x8, #0xf00]
7102bc1a9c  cbz x0,0x7102bc1ad8
7102bc1aa0  orr w8,wzr,#0x70
7102bc1aa4  stur wzr,[x29, #-0xd0]
7102bc1aa8  sub x1,x29,#0xd0
7102bc1aac  str x8,[sp, #0xf0]
7102bc1ab0  ldr x8,[x0]
7102bc1ab4  ldr x8,[x8, #0x30]
7102bc1ab8  add x2,sp,#0xf0
7102bc1abc  blr x8
7102bc1ac0  tbz w0,#0x0,0x7102bc1ad8
7102bc1ac4  mov w0,#0x10
7102bc1ac8  orr w1,wzr,#0x70
7102bc1acc  bl 0x710392e290
7102bc1ad0  mov x22,x0
7102bc1ad4  cbnz x0,0x7102bc1adc
7102bc1ad8  mov x22,xzr
7102bc1adc  mov x0,x22
7102bc1ae0  mov x1,x26
7102bc1ae4  mov x2,x27
7102bc1ae8  mov x3,x21
7102bc1aec  bl 0x7102bd2590
7102bc1af0  ldr x0,[x26, #0x9e0]
7102bc1af4  str x22,[x26, #0x9e0]
7102bc1af8  cbz x0,0x7102bc1b00
7102bc1afc  bl 0x710392eb40
7102bc1b00  ldr x8,[x26, #0x310]
7102bc1b04  ldp x9,x10,[x8, #0xd0]
7102bc1b08  cmp x9,x10
7102bc1b0c  b.eq 0x7102bc1b44
7102bc1b10  mov x11,#0x2fdf
7102bc1b14  movk x11,#0xb9e4, LSL #16
7102bc1b18  movk x11,#0x12, LSL #32
7102bc1b1c  ldr w12,[x9, #0x8]
7102bc1b20  cmp w12,#0x1
7102bc1b24  b.hi 0x7102bc1b38
7102bc1b28  ldr x12,[x9]
7102bc1b2c  ldr x13,[x12, #0x68]
7102bc1b30  cmp x13,x11
7102bc1b34  b.eq 0x7102bc1b48
7102bc1b38  add x9,x9,#0x10
7102bc1b3c  cmp x10,x9
7102bc1b40  b.ne 0x7102bc1b1c
7102bc1b44  mov x12,xzr
7102bc1b48  str x12,[x26, #0xa40]
7102bc1b4c  ldp x9,x10,[x8, #0xd0]
7102bc1b50  cmp x9,x10
7102bc1b54  b.eq 0x7102bc1b8c
7102bc1b58  mov x11,#0x976a
7102bc1b5c  movk x11,#0xf73d, LSL #16
7102bc1b60  movk x11,#0x12, LSL #32
7102bc1b64  ldr w12,[x9, #0x8]
7102bc1b68  cmp w12,#0x1
7102bc1b6c  b.hi 0x7102bc1b80
7102bc1b70  ldr x12,[x9]
7102bc1b74  ldr x13,[x12, #0x68]
7102bc1b78  cmp x13,x11
7102bc1b7c  b.eq 0x7102bc1b90
7102bc1b80  add x9,x9,#0x10
7102bc1b84  cmp x10,x9
7102bc1b88  b.ne 0x7102bc1b64
7102bc1b8c  mov x12,xzr
7102bc1b90  str x12,[x26, #0xa48]
7102bc1b94  ldp x9,x10,[x8, #0xd0]
7102bc1b98  cmp x9,x10
7102bc1b9c  b.eq 0x7102bc1bd4
7102bc1ba0  mov x11,#0xbc51
7102bc1ba4  movk x11,#0x4885, LSL #16
7102bc1ba8  movk x11,#0x11, LSL #32
7102bc1bac  ldr w8,[x9, #0x8]
7102bc1bb0  cmp w8,#0x1
7102bc1bb4  b.hi 0x7102bc1bc8
7102bc1bb8  ldr x8,[x9]
7102bc1bbc  ldr x12,[x8, #0x68]
7102bc1bc0  cmp x12,x11
7102bc1bc4  b.eq 0x7102bc1bd8
7102bc1bc8  add x9,x9,#0x10
7102bc1bcc  cmp x10,x9
7102bc1bd0  b.ne 0x7102bc1bac
7102bc1bd4  mov x8,xzr
7102bc1bd8  ldr w9,[x26, #0x9fc]
7102bc1bdc  cmp w9,#0x0
7102bc1be0  adrp x9,0x7104472000
7102bc1be4  ldr s9,[x9, #0xeec]
7102bc1be8  fmov s0,wzr
7102bc1bec  fcsel s8,s9,s0,eq
7102bc1bf0  str x8,[x26, #0xa50]
7102bc1bf4  cbz x8,0x7102bc1c94
7102bc1bf8  ldrb w9,[x8, #0xe0]
7102bc1bfc  cbz w9,0x7102bc1c94
7102bc1c00  ldr x19,[x8, #0xc8]
7102bc1c04  cbz x19,0x7102bc1c94
7102bc1c08  ldp x20,x21,[x19, #0x18]
7102bc1c0c  cmp x20,x21
7102bc1c10  str s8,[x19, #0x3c]
7102bc1c14  b.eq 0x7102bc1c90
7102bc1c18  ldr x0,[x20], #0x8
7102bc1c1c  ldr x8,[x0]
7102bc1c20  ldr x8,[x8, #0x18]
7102bc1c24  mov v0.16B,v8.16B
7102bc1c28  mov w1,wzr
7102bc1c2c  blr x8
7102bc1c30  cmp x21,x20
7102bc1c34  b.ne 0x7102bc1c18
7102bc1c38  ldp x20,x21,[x19, #0x18]
7102bc1c3c  cmp x20,x21
7102bc1c40  str s8,[x19, #0x40]
7102bc1c44  b.eq 0x7102bc1c94
7102bc1c48  ldr x0,[x20], #0x8
7102bc1c4c  ldr x8,[x0]
7102bc1c50  ldr x8,[x8, #0x18]
7102bc1c54  mov v0.16B,v8.16B
7102bc1c58  mov w1,#0x1
7102bc1c5c  blr x8
7102bc1c60  cmp x21,x20
7102bc1c64  b.ne 0x7102bc1c48
7102bc1c68  ldp x20,x19,[x19, #0x18]
7102bc1c6c  cmp x20,x19
7102bc1c70  b.eq 0x7102bc1c94
7102bc1c74  ldr x0,[x20], #0x8
7102bc1c78  ldr x8,[x0]
7102bc1c7c  ldr x8,[x8, #0x38]
7102bc1c80  blr x8
7102bc1c84  cmp x19,x20
7102bc1c88  b.ne 0x7102bc1c74
7102bc1c8c  b 0x7102bc1c94
7102bc1c90  str s8,[x19, #0x40]
7102bc1c94  ldr x8,[x26, #0xa50]
7102bc1c98  cbz x8,0x7102bc1cfc
7102bc1c9c  ldrb w9,[x8, #0xe0]
7102bc1ca0  cbz w9,0x7102bc1cbc
7102bc1ca4  ldr x9,[x8, #0xc8]
7102bc1ca8  cbz x9,0x7102bc1cbc
7102bc1cac  mov w8,#0x101
7102bc1cb0  strh w8,[x9, #0x30]
7102bc1cb4  ldr x8,[x26, #0xa50]
7102bc1cb8  cbz x8,0x7102bc1cfc
7102bc1cbc  ldr x9,[x8, #0xd8]
7102bc1cc0  cbz x9,0x7102bc1cd4
7102bc1cc4  mov w8,#0x1
7102bc1cc8  strb w8,[x9, #0x21]
7102bc1ccc  ldr x8,[x26, #0xa50]
7102bc1cd0  cbz x8,0x7102bc1cfc
7102bc1cd4  add x0,x8,#0x108
7102bc1cd8  strb wzr,[x8, #0x110]
7102bc1cdc  bl 0x71025e9d50
7102bc1ce0  ldr x8,[x26, #0xa50]
7102bc1ce4  cbz x8,0x7102bc1cfc
7102bc1ce8  ldrb w9,[x8, #0xe0]
7102bc1cec  cbz w9,0x7102bc1cfc
7102bc1cf0  ldr x8,[x8, #0xc8]
7102bc1cf4  cbz x8,0x7102bc1cfc
7102bc1cf8  strh wzr,[x8, #0x32]
7102bc1cfc  ldr x9,[x26, #0x310]
7102bc1d00  ldp x8,x10,[x9, #0xd0]
7102bc1d04  cmp x8,x10
7102bc1d08  b.eq 0x7102bc1d40
7102bc1d0c  mov x11,#0xda7e
7102bc1d10  movk x11,#0x553f, LSL #16
7102bc1d14  movk x11,#0x10, LSL #32
7102bc1d18  ldr w9,[x8, #0x8]
7102bc1d1c  cmp w9,#0x1
7102bc1d20  b.hi 0x7102bc1d34
7102bc1d24  ldr x9,[x8]
7102bc1d28  ldr x12,[x9, #0x68]
7102bc1d2c  cmp x12,x11
7102bc1d30  b.eq 0x7102bc1d44
7102bc1d34  add x8,x8,#0x10
7102bc1d38  cmp x10,x8
7102bc1d3c  b.ne 0x7102bc1d18
7102bc1d40  mov x9,xzr
7102bc1d44  ldr w8,[x26, #0x9fc]
7102bc1d48  fmov s0,wzr
7102bc1d4c  cmp w8,#0x1
7102bc1d50  fcsel s8,s9,s0,eq
7102bc1d54  str x9,[x26, #0xa58]
7102bc1d58  cbz x9,0x7102bc1df8
7102bc1d5c  ldrb w8,[x9, #0xe0]
7102bc1d60  cbz w8,0x7102bc1df8
7102bc1d64  ldr x19,[x9, #0xc8]
7102bc1d68  cbz x19,0x7102bc1df8
7102bc1d6c  ldp x20,x21,[x19, #0x18]
7102bc1d70  cmp x20,x21
7102bc1d74  str s8,[x19, #0x3c]
7102bc1d78  b.eq 0x7102bc1df4
7102bc1d7c  ldr x0,[x20], #0x8
7102bc1d80  ldr x8,[x0]
7102bc1d84  ldr x8,[x8, #0x18]
7102bc1d88  mov v0.16B,v8.16B
7102bc1d8c  mov w1,wzr
7102bc1d90  blr x8
7102bc1d94  cmp x21,x20
7102bc1d98  b.ne 0x7102bc1d7c
7102bc1d9c  ldp x20,x21,[x19, #0x18]
7102bc1da0  cmp x20,x21
7102bc1da4  str s8,[x19, #0x40]
7102bc1da8  b.eq 0x7102bc1df8
7102bc1dac  ldr x0,[x20], #0x8
7102bc1db0  ldr x8,[x0]
7102bc1db4  ldr x8,[x8, #0x18]
7102bc1db8  mov v0.16B,v8.16B
7102bc1dbc  mov w1,#0x1
7102bc1dc0  blr x8
7102bc1dc4  cmp x21,x20
7102bc1dc8  b.ne 0x7102bc1dac
7102bc1dcc  ldp x20,x19,[x19, #0x18]
7102bc1dd0  cmp x20,x19
7102bc1dd4  b.eq 0x7102bc1df8
7102bc1dd8  ldr x0,[x20], #0x8
7102bc1ddc  ldr x8,[x0]
7102bc1de0  ldr x8,[x8, #0x38]
7102bc1de4  blr x8
7102bc1de8  cmp x19,x20
7102bc1dec  b.ne 0x7102bc1dd8
7102bc1df0  b 0x7102bc1df8
7102bc1df4  str s8,[x19, #0x40]
7102bc1df8  ldr x8,[x26, #0xa58]
7102bc1dfc  cbz x8,0x7102bc1e60
7102bc1e00  ldrb w9,[x8, #0xe0]
7102bc1e04  cbz w9,0x7102bc1e20
7102bc1e08  ldr x9,[x8, #0xc8]
7102bc1e0c  cbz x9,0x7102bc1e20
7102bc1e10  mov w8,#0x101
7102bc1e14  strh w8,[x9, #0x30]
7102bc1e18  ldr x8,[x26, #0xa58]
7102bc1e1c  cbz x8,0x7102bc1e60
7102bc1e20  ldr x9,[x8, #0xd8]
7102bc1e24  cbz x9,0x7102bc1e38
7102bc1e28  mov w8,#0x1
7102bc1e2c  strb w8,[x9, #0x21]
7102bc1e30  ldr x8,[x26, #0xa58]
7102bc1e34  cbz x8,0x7102bc1e60
7102bc1e38  add x0,x8,#0x108
7102bc1e3c  strb wzr,[x8, #0x110]
7102bc1e40  bl 0x71025e9d50
7102bc1e44  ldr x8,[x26, #0xa58]
7102bc1e48  cbz x8,0x7102bc1e60
7102bc1e4c  ldrb w9,[x8, #0xe0]
7102bc1e50  cbz w9,0x7102bc1e60
7102bc1e54  ldr x8,[x8, #0xc8]
7102bc1e58  cbz x8,0x7102bc1e60
7102bc1e5c  strh wzr,[x8, #0x32]
7102bc1e60  ldr x9,[x26, #0x310]
7102bc1e64  ldp x8,x10,[x9, #0xd0]
7102bc1e68  cmp x8,x10
7102bc1e6c  b.eq 0x7102bc1ea4
7102bc1e70  mov x11,#0x1b6f
7102bc1e74  movk x11,#0x7fa2, LSL #16
7102bc1e78  movk x11,#0x10, LSL #32
7102bc1e7c  ldr w9,[x8, #0x8]
7102bc1e80  cmp w9,#0x1
7102bc1e84  b.hi 0x7102bc1e98
7102bc1e88  ldr x9,[x8]
7102bc1e8c  ldr x12,[x9, #0x68]
7102bc1e90  cmp x12,x11
7102bc1e94  b.eq 0x7102bc1ea8
7102bc1e98  add x8,x8,#0x10
7102bc1e9c  cmp x10,x8
7102bc1ea0  b.ne 0x7102bc1e7c
7102bc1ea4  mov x9,xzr
7102bc1ea8  ldr w8,[x26, #0x9fc]
7102bc1eac  fmov s0,wzr
7102bc1eb0  cmp w8,#0x2
7102bc1eb4  fcsel s8,s9,s0,eq
7102bc1eb8  str x9,[x26, #0xa60]
7102bc1ebc  cbz x9,0x7102bc1f5c
7102bc1ec0  ldrb w8,[x9, #0xe0]
7102bc1ec4  cbz w8,0x7102bc1f5c
7102bc1ec8  ldr x19,[x9, #0xc8]
7102bc1ecc  cbz x19,0x7102bc1f5c
7102bc1ed0  ldp x20,x21,[x19, #0x18]
7102bc1ed4  cmp x20,x21
7102bc1ed8  str s8,[x19, #0x3c]
7102bc1edc  b.eq 0x7102bc1f58
7102bc1ee0  ldr x0,[x20], #0x8
7102bc1ee4  ldr x8,[x0]
7102bc1ee8  ldr x8,[x8, #0x18]
7102bc1eec  mov v0.16B,v8.16B
7102bc1ef0  mov w1,wzr
7102bc1ef4  blr x8
7102bc1ef8  cmp x21,x20
7102bc1efc  b.ne 0x7102bc1ee0
7102bc1f00  ldp x20,x21,[x19, #0x18]
7102bc1f04  cmp x20,x21
7102bc1f08  str s8,[x19, #0x40]
7102bc1f0c  b.eq 0x7102bc1f5c
7102bc1f10  ldr x0,[x20], #0x8
7102bc1f14  ldr x8,[x0]
7102bc1f18  ldr x8,[x8, #0x18]
7102bc1f1c  mov v0.16B,v8.16B
7102bc1f20  mov w1,#0x1
7102bc1f24  blr x8
7102bc1f28  cmp x21,x20
7102bc1f2c  b.ne 0x7102bc1f10
7102bc1f30  ldp x20,x19,[x19, #0x18]
7102bc1f34  cmp x20,x19
7102bc1f38  b.eq 0x7102bc1f5c
7102bc1f3c  ldr x0,[x20], #0x8
7102bc1f40  ldr x8,[x0]
7102bc1f44  ldr x8,[x8, #0x38]
7102bc1f48  blr x8
7102bc1f4c  cmp x19,x20
7102bc1f50  b.ne 0x7102bc1f3c
7102bc1f54  b 0x7102bc1f5c
7102bc1f58  str s8,[x19, #0x40]
7102bc1f5c  ldr x8,[x26, #0xa60]
7102bc1f60  cbz x8,0x7102bc1fc4
7102bc1f64  ldrb w9,[x8, #0xe0]
7102bc1f68  cbz w9,0x7102bc1f84
7102bc1f6c  ldr x9,[x8, #0xc8]
7102bc1f70  cbz x9,0x7102bc1f84
7102bc1f74  mov w8,#0x101
7102bc1f78  strh w8,[x9, #0x30]
7102bc1f7c  ldr x8,[x26, #0xa60]
7102bc1f80  cbz x8,0x7102bc1fc4
7102bc1f84  ldr x9,[x8, #0xd8]
7102bc1f88  cbz x9,0x7102bc1f9c
7102bc1f8c  mov w8,#0x1
7102bc1f90  strb w8,[x9, #0x21]
7102bc1f94  ldr x8,[x26, #0xa60]
7102bc1f98  cbz x8,0x7102bc1fc4
7102bc1f9c  add x0,x8,#0x108
7102bc1fa0  strb wzr,[x8, #0x110]
7102bc1fa4  bl 0x71025e9d50
7102bc1fa8  ldr x8,[x26, #0xa60]
7102bc1fac  cbz x8,0x7102bc1fc4
7102bc1fb0  ldrb w9,[x8, #0xe0]
7102bc1fb4  cbz w9,0x7102bc1fc4
7102bc1fb8  ldr x8,[x8, #0xc8]
7102bc1fbc  cbz x8,0x7102bc1fc4
7102bc1fc0  strh wzr,[x8, #0x32]
7102bc1fc4  mov w0,#0x10
7102bc1fc8  orr w1,wzr,#0xf0
7102bc1fcc  bl 0x710392e290
7102bc1fd0  mov x21,x0
7102bc1fd4  cbnz x0,0x7102bc2020
7102bc1fd8  adrp x8,0x7105332000
7102bc1fdc  ldr x0,[x8, #0xf00]
7102bc1fe0  cbz x0,0x7102bc201c
7102bc1fe4  orr w8,wzr,#0xf0
7102bc1fe8  stur wzr,[x29, #-0xd0]
7102bc1fec  sub x1,x29,#0xd0
7102bc1ff0  str x8,[sp, #0xf0]
7102bc1ff4  ldr x8,[x0]
7102bc1ff8  ldr x8,[x8, #0x30]
7102bc1ffc  add x2,sp,#0xf0
7102bc2000  blr x8
7102bc2004  tbz w0,#0x0,0x7102bc201c
7102bc2008  mov w0,#0x10
7102bc200c  orr w1,wzr,#0xf0
7102bc2010  bl 0x710392e290
7102bc2014  mov x21,x0
7102bc2018  cbnz x0,0x7102bc2020
7102bc201c  mov x21,xzr
7102bc2020  adrp x2,0x710438a000
7102bc2024  add x2,x2,#0xde4
7102bc2028  mov x0,x21
7102bc202c  mov x1,x26
7102bc2030  mov w3,wzr
7102bc2034  mov w4,wzr
7102bc2038  mov x5,xzr
7102bc203c  bl 0x71031460f0
7102bc2040  str x21,[x26, #0xa68]
7102bc2044  ldr x8,[x21, #0x70]
7102bc2048  cbz x8,0x7102bc2098
7102bc204c  ldrb w9,[x8, #0xe0]
7102bc2050  cbz w9,0x7102bc2060
7102bc2054  ldr x9,[x8, #0xc8]
7102bc2058  cbz x9,0x7102bc2060
7102bc205c  strh wzr,[x9, #0x32]
7102bc2060  ldr x9,[x8, #0xd8]
7102bc2064  cbz x9,0x7102bc206c
7102bc2068  strb wzr,[x9, #0x22]
7102bc206c  ldr x8,[x8, #0xd8]
7102bc2070  cbz x8,0x7102bc2098
7102bc2074  ldr x8,[x8, #0x8]
7102bc2078  ldr x0,[x8, #0x8]
7102bc207c  ldr x8,[x0]
7102bc2080  ldr x8,[x8, #0x20]
7102bc2084  mov x1,#0xfe6b
7102bc2088  movk x1,#0x304e, LSL #16
7102bc208c  movk x1,#0xa, LSL #32
7102bc2090  blr x8
7102bc2094  b 0x7102bc209c
7102bc2098  mov w0,#0xffffffff
7102bc209c  ldr x8,[x26, #0xa68]
7102bc20a0  str w0,[x8, #0xc8]
7102bc20a4  mov w0,#0x10
7102bc20a8  orr w1,wzr,#0xf0
7102bc20ac  bl 0x710392e290
7102bc20b0  mov x21,x0
7102bc20b4  cbnz x0,0x7102bc2100
7102bc20b8  adrp x8,0x7105332000
7102bc20bc  ldr x0,[x8, #0xf00]
7102bc20c0  cbz x0,0x7102bc20fc
7102bc20c4  orr w8,wzr,#0xf0
7102bc20c8  stur wzr,[x29, #-0xd0]
7102bc20cc  sub x1,x29,#0xd0
7102bc20d0  str x8,[sp, #0xf0]
7102bc20d4  ldr x8,[x0]
7102bc20d8  ldr x8,[x8, #0x30]
7102bc20dc  add x2,sp,#0xf0
7102bc20e0  blr x8
7102bc20e4  tbz w0,#0x0,0x7102bc20fc
7102bc20e8  mov w0,#0x10
7102bc20ec  orr w1,wzr,#0xf0
7102bc20f0  bl 0x710392e290
7102bc20f4  mov x21,x0
7102bc20f8  cbnz x0,0x7102bc2100
7102bc20fc  mov x21,xzr
7102bc2100  adrp x2,0x7104452000
7102bc2104  add x2,x2,#0xa68
7102bc2108  mov x0,x21
7102bc210c  mov x1,x26
7102bc2110  mov w3,wzr
7102bc2114  mov w4,wzr
7102bc2118  mov x5,xzr
7102bc211c  bl 0x71031460f0
7102bc2120  str x21,[x26, #0xa70]
7102bc2124  ldr x8,[x21, #0x70]
7102bc2128  mov w22,#0xffffffff
7102bc212c  cbz x8,0x7102bc217c
7102bc2130  ldrb w9,[x8, #0xe0]
7102bc2134  cbz w9,0x7102bc2144
7102bc2138  ldr x9,[x8, #0xc8]
7102bc213c  cbz x9,0x7102bc2144
7102bc2140  strh wzr,[x9, #0x32]
7102bc2144  ldr x9,[x8, #0xd8]
7102bc2148  cbz x9,0x7102bc2150
7102bc214c  strb wzr,[x9, #0x22]
7102bc2150  ldr x8,[x8, #0xd8]
7102bc2154  cbz x8,0x7102bc2184
7102bc2158  ldr x8,[x8, #0x8]
7102bc215c  ldr x0,[x8, #0x8]
7102bc2160  ldr x8,[x0]
7102bc2164  ldr x8,[x8, #0x20]
7102bc2168  mov x1,#0x945c
7102bc216c  movk x1,#0x318c, LSL #16
7102bc2170  movk x1,#0xa, LSL #32
7102bc2174  blr x8
7102bc2178  b 0x7102bc2188
7102bc217c  mov w0,w22
7102bc2180  b 0x7102bc2188
7102bc2184  mov w0,#0xffffffff
7102bc2188  ldr x8,[x26, #0xa70]
7102bc218c  str w0,[x8, #0xc8]
7102bc2190  mov w1,#0x190
7102bc2194  mov w0,#0x10
7102bc2198  bl 0x710392e290
7102bc219c  mov x21,x0
7102bc21a0  cbnz x0,0x7102bc21ec
7102bc21a4  adrp x8,0x7105332000
7102bc21a8  ldr x0,[x8, #0xf00]
7102bc21ac  cbz x0,0x7102bc21e8
7102bc21b0  mov w8,#0x190
7102bc21b4  stur wzr,[x29, #-0xd0]
7102bc21b8  sub x1,x29,#0xd0
7102bc21bc  str x8,[sp, #0xf0]
7102bc21c0  ldr x8,[x0]
7102bc21c4  ldr x8,[x8, #0x30]
7102bc21c8  add x2,sp,#0xf0
7102bc21cc  blr x8
7102bc21d0  tbz w0,#0x0,0x7102bc21e8
7102bc21d4  mov w1,#0x190
7102bc21d8  mov w0,#0x10
7102bc21dc  bl 0x710392e290
7102bc21e0  mov x21,x0
7102bc21e4  cbnz x0,0x7102bc21ec
7102bc21e8  mov x21,xzr
7102bc21ec  mov x19,x21
7102bc21f0  adrp x8,0x7104465000
7102bc21f4  add x8,x8,#0x990
7102bc21f8  stp x26,x27,[x21]
7102bc21fc  mov w20,#0x101
7102bc2200  stp xzr,xzr,[x21, #0x18]
7102bc2204  add x2,x21,#0x140
7102bc2208  str xzr,[x19, #0x10]!
7102bc220c  ldp x9,x8,[x8]
7102bc2210  mov x1,x26
7102bc2214  stp x9,x8,[x21, #0x30]
7102bc2218  ldr q0,[x28]
7102bc221c  mov x8,x21
7102bc2220  str x22,[x21, #0x50]
7102bc2224  strh w20,[x21, #0x58]
7102bc2228  add x23,x21,#0x30
7102bc222c  strb wzr,[x21, #0x5a]
7102bc2230  str q0,[x21, #0x40]
7102bc2234  str xzr,[x8, #0x70]!
7102bc2238  stur x8,[x29, #-0x68]
7102bc223c  mov x8,x21
7102bc2240  str w22,[x8, #0xc0]!
7102bc2244  stur xzr,[x21, #0x61]
7102bc2248  stur xzr,[x21, #0x5c]
7102bc224c  str xzr,[x21, #0x78]
7102bc2250  str w22,[x21, #0xc4]
7102bc2254  str xzr,[x21, #0xc8]
7102bc2258  strh wzr,[x21, #0xd0]
7102bc225c  str x8,[sp, #0x10]
7102bc2260  mov w8,#0x1
7102bc2264  stp xzr,xzr,[x21, #0xb0]
7102bc2268  stp xzr,xzr,[x21, #0xa0]
7102bc226c  stp xzr,xzr,[x21, #0x90]
7102bc2270  stp xzr,xzr,[x21, #0x80]
7102bc2274  stp xzr,xzr,[x21, #0x128]
7102bc2278  stp xzr,xzr,[x21, #0x118]
7102bc227c  stp xzr,xzr,[x21, #0x108]
7102bc2280  stp xzr,xzr,[x21, #0xf8]
7102bc2284  stp xzr,xzr,[x21, #0xe8]
7102bc2288  stp xzr,xzr,[x21, #0xd8]
7102bc228c  ldr q0,[x25]
7102bc2290  str x26,[x21, #0x140]
7102bc2294  strh w8,[x21, #0x148]
7102bc2298  adrp x8,0x710532a000
7102bc229c  strb wzr,[x21, #0x14a]
7102bc22a0  str w22,[x21, #0x14c]
7102bc22a4  str wzr,[x21, #0x180]
7102bc22a8  stp xzr,xzr,[x21, #0x170]
7102bc22ac  stp q0,q0,[x21, #0x150]
7102bc22b0  ldr x8,[x8, #0x9d8]
7102bc22b4  ldr x8,[x8]
7102bc22b8  ldr x0,[x8, #0x1c8]
7102bc22bc  str x2,[sp, #0x18]
7102bc22c0  bl 0x71031675b0
7102bc22c4  and w8,w0,#0x1
7102bc22c8  strb w8,[x21, #0x148]
7102bc22cc  ldr x8,[x21]
7102bc22d0  ldr x8,[x8, #0x310]
7102bc22d4  ldp x9,x10,[x8, #0xd0]
7102bc22d8  fmov s2,0x3f800000
7102bc22dc  cmp x9,x10
7102bc22e0  b.eq 0x7102bc230c
7102bc22e4  ldr w8,[x9, #0x8]
7102bc22e8  cmp w8,#0x1
7102bc22ec  b.hi 0x7102bc2300
7102bc22f0  ldr x8,[x9]
7102bc22f4  ldr x11,[x8, #0x68]
7102bc22f8  cmp x11,x24
7102bc22fc  b.eq 0x7102bc33bc
7102bc2300  add x9,x9,#0x10
7102bc2304  cmp x10,x9
7102bc2308  b.ne 0x7102bc22e4
7102bc230c  str xzr,[x19]
7102bc2310  ldr q0,[sp, #0x30]
7102bc2314  stur q0,[x29, #-0xd0]
7102bc2318  ldr q0,[sp, #0x60]
7102bc231c  stur q0,[x29, #-0xc0]
7102bc2320  ldr q0,[sp, #0x20]
7102bc2324  stur q0,[x29, #-0xb0]
7102bc2328  ldr q0,[x23]
7102bc232c  mov v1.16B,v0.16B
7102bc2330  mov v1.S[0x3],v2.S[0x0]
7102bc2334  ext v0.16B,v1.16B,v0.16B,0xc
7102bc2338  ext v1.16B,v0.16B,v1.16B,0x4
7102bc233c  ext v0.16B,v0.16B,v0.16B,0x8
7102bc2340  ext v0.16B,v1.16B,v0.16B,0xc
7102bc2344  stur q0,[x29, #-0xa0]
7102bc2348  ldr x22,[x19]
7102bc234c  cbz x22,0x7102bc241c
7102bc2350  ldr x0,[x22, #0x90]
7102bc2354  ldr x8,[x0]
7102bc2358  ldr x8,[x8, #0x148]
7102bc235c  sub x1,x29,#0xd0
7102bc2360  blr x8
7102bc2364  ldr x20,[x22, #0xd8]
7102bc2368  cbz x20,0x7102bc23d4
7102bc236c  ldur x8,[x29, #-0xb8]
7102bc2370  str x8,[sp, #0x108]
7102bc2374  ldur x8,[x29, #-0xc0]
7102bc2378  str x8,[sp, #0x100]
7102bc237c  ldur x8,[x29, #-0xc8]
7102bc2380  str x8,[sp, #0xf8]
7102bc2384  ldur x8,[x29, #-0xd0]
7102bc2388  str x8,[sp, #0xf0]
7102bc238c  ldur x8,[x29, #-0x98]
7102bc2390  str x8,[sp, #0x128]
7102bc2394  ldur x8,[x29, #-0xa0]
7102bc2398  str x8,[sp, #0x120]
7102bc239c  ldur x8,[x29, #-0xa8]
7102bc23a0  str x8,[sp, #0x118]
7102bc23a4  ldur x8,[x29, #-0xb0]
7102bc23a8  str x8,[sp, #0x110]
7102bc23ac  ldr x8,[x20, #0x8]
7102bc23b0  ldrb w9,[x8, #0xa8]
7102bc23b4  cbz w9,0x7102bc23cc
7102bc23b8  ldr x0,[x8, #0x48]
7102bc23bc  ldr x8,[x0]
7102bc23c0  ldr x8,[x8, #0x20]
7102bc23c4  add x1,sp,#0xf0
7102bc23c8  blr x8
7102bc23cc  mov w8,#0x1
7102bc23d0  strb w8,[x20, #0x20]
7102bc23d4  ldr x22,[x19]
7102bc23d8  cbz x22,0x7102bc241c
7102bc23dc  ldrb w8,[x22, #0xe0]
7102bc23e0  cbz w8,0x7102bc2408
7102bc23e4  ldr x0,[x22, #0xb8]
7102bc23e8  adrp x8,0x710439b000
7102bc23ec  add x8,x8,#0x41d
7102bc23f0  add x1,sp,#0xf0
7102bc23f4  mov w2,#0x1
7102bc23f8  str x8,[sp, #0xf0]
7102bc23fc  bl 0x71026527b0
7102bc2400  ldr x22,[x19]
7102bc2404  cbz x22,0x7102bc241c
7102bc2408  ldrb w8,[x22, #0xe0]
7102bc240c  cbz w8,0x7102bc241c
7102bc2410  ldr x8,[x22, #0xb8]
7102bc2414  strb wzr,[x8, #0x33]
7102bc2418  ldr x22,[x19]
7102bc241c  mov x0,x21
7102bc2420  mov x1,x22
7102bc2424  mov w2,wzr
7102bc2428  bl 0x7102bd2cd0
7102bc242c  ldr x1,[x21, #0x10]
7102bc2430  mov w2,#0x1
7102bc2434  mov x0,x21
7102bc2438  bl 0x7102bd2cd0
7102bc243c  ldr x8,[x21]
7102bc2440  ldr x8,[x8, #0x300]
7102bc2444  ldr x8,[x8, #0x18]
7102bc2448  ldr x8,[x8]
7102bc244c  b 0x7102bc2454
7102bc2450  add x8,x8,#0x8
7102bc2454  ldr x9,[x8]
7102bc2458  ldr x10,[x9, #0xa0]
7102bc245c  and x10,x10,#0xffffffffff
7102bc2460  cmp x10,x24
7102bc2464  b.ne 0x7102bc2450
7102bc2468  ldr x8,[x9, #0x110]
7102bc246c  ldur x19,[x29, #-0x68]
7102bc2470  str x8,[x19]
7102bc2474  ldp x0,x1,[x8]
7102bc2478  mov w2,#0x1
7102bc247c  bl 0x71025f4d80
7102bc2480  ldr x9,[x19]
7102bc2484  ldp x8,x9,[x9]
7102bc2488  cmp x8,x9
7102bc248c  b.eq 0x7102bc252c
7102bc2490  ldr x10,[x21, #0x8]
7102bc2494  ldr s0,[x10, #0x1e0]
7102bc2498  adrp x10,0x7104473000
7102bc249c  ldr s1,[x10, #0x708]
7102bc24a0  adrp x10,0x7104472000
7102bc24a4  fsub s0,s1,s0
7102bc24a8  ldr s1,[x10, #0x6e0]
7102bc24ac  sub x10,x9,#0x8
7102bc24b0  sub x10,x10,x8
7102bc24b4  ubfx x11,x10,#0x3,#0x1d
7102bc24b8  add w11,w11,#0x1
7102bc24bc  ands x11,x11,#0x3
7102bc24c0  fmul s0,s0,s1
7102bc24c4  b.eq 0x7102bc24e8
7102bc24c8  neg x12,x11
7102bc24cc  mov x13,x8
7102bc24d0  ldr x14,[x13], #0x8
7102bc24d4  ldr x14,[x14, #0x8]
7102bc24d8  adds x12,x12,#0x1
7102bc24dc  str s0,[x14, #0xc4]
7102bc24e0  b.ne 0x7102bc24d0
7102bc24e4  add x8,x8,x11, LSL #0x3
7102bc24e8  cmp x10,#0x18
7102bc24ec  b.cc 0x7102bc252c
7102bc24f0  ldr x10,[x8]
7102bc24f4  ldr x10,[x10, #0x8]
7102bc24f8  str s0,[x10, #0xc4]
7102bc24fc  ldr x10,[x8, #0x8]
7102bc2500  ldr x10,[x10, #0x8]
7102bc2504  str s0,[x10, #0xc4]
7102bc2508  ldr x10,[x8, #0x10]
7102bc250c  ldr x10,[x10, #0x8]
7102bc2510  str s0,[x10, #0xc4]
7102bc2514  ldr x10,[x8, #0x18]
7102bc2518  add x8,x8,#0x20
7102bc251c  cmp x8,x9
7102bc2520  ldr x10,[x10, #0x8]
7102bc2524  str s0,[x10, #0xc4]
7102bc2528  b.ne 0x7102bc24f0
7102bc252c  ldr x8,[x21]
7102bc2530  ldr x8,[x8, #0x300]
7102bc2534  ldr x8,[x8, #0x18]
7102bc2538  ldr x8,[x8]
7102bc253c  mov x9,#0xd32b
7102bc2540  movk x9,#0xd77b, LSL #16
7102bc2544  movk x9,#0xf, LSL #32
7102bc2548  b 0x7102bc2550
7102bc254c  add x8,x8,#0x8
7102bc2550  ldr x10,[x8]
7102bc2554  ldr x11,[x10, #0xa0]
7102bc2558  and x11,x11,#0xffffffffff
7102bc255c  cmp x11,x9
7102bc2560  b.ne 0x7102bc254c
7102bc2564  ldr x8,[x10, #0x110]
7102bc2568  str x8,[x21, #0x78]
7102bc256c  mov w2,#0x1
7102bc2570  ldp x0,x1,[x8]
7102bc2574  bl 0x71025f4d80
7102bc2578  ldr x9,[x21, #0x78]
7102bc257c  ldp x8,x9,[x9]
7102bc2580  cmp x8,x9
7102bc2584  b.eq 0x7102bc2624
7102bc2588  ldr x10,[x21, #0x8]
7102bc258c  ldr s0,[x10, #0x1e0]
7102bc2590  adrp x10,0x7104473000
7102bc2594  ldr s1,[x10, #0x708]
7102bc2598  adrp x10,0x7104472000
7102bc259c  fsub s0,s1,s0
7102bc25a0  ldr s1,[x10, #0x6e0]
7102bc25a4  sub x10,x9,#0x8
7102bc25a8  sub x10,x10,x8
7102bc25ac  ubfx x11,x10,#0x3,#0x1d
7102bc25b0  add w11,w11,#0x1
7102bc25b4  ands x11,x11,#0x3
7102bc25b8  fmul s0,s0,s1
7102bc25bc  b.eq 0x7102bc25e0
7102bc25c0  neg x12,x11
7102bc25c4  mov x13,x8
7102bc25c8  ldr x14,[x13], #0x8
7102bc25cc  ldr x14,[x14, #0x8]
7102bc25d0  adds x12,x12,#0x1
7102bc25d4  str s0,[x14, #0xc4]
7102bc25d8  b.ne 0x7102bc25c8
7102bc25dc  add x8,x8,x11, LSL #0x3
7102bc25e0  cmp x10,#0x18
7102bc25e4  b.cc 0x7102bc2624
7102bc25e8  ldr x10,[x8]
7102bc25ec  ldr x10,[x10, #0x8]
7102bc25f0  str s0,[x10, #0xc4]
7102bc25f4  ldr x10,[x8, #0x8]
7102bc25f8  ldr x10,[x10, #0x8]
7102bc25fc  str s0,[x10, #0xc4]
7102bc2600  ldr x10,[x8, #0x10]
7102bc2604  ldr x10,[x10, #0x8]
7102bc2608  str s0,[x10, #0xc4]
7102bc260c  ldr x10,[x8, #0x18]
7102bc2610  add x8,x8,#0x20
7102bc2614  cmp x8,x9
7102bc2618  ldr x10,[x10, #0x8]
7102bc261c  str s0,[x10, #0xc4]
7102bc2620  b.ne 0x7102bc25e8
7102bc2624  ldr x8,[x21]
7102bc2628  ldr x8,[x8, #0x300]
7102bc262c  ldr x9,[x8, #0x18]
7102bc2630  str x23,[sp, #0x8]
7102bc2634  ldp x8,x9,[x9]
7102bc2638  cmp x8,x9
7102bc263c  b.eq 0x7102bc2670
7102bc2640  ldr x10,[x8], #0x8
7102bc2644  ldr x11,[x10, #0xa0]
7102bc2648  and x11,x11,#0xffffffffff
7102bc264c  cmp x11,x24
7102bc2650  b.eq 0x7102bc2660
7102bc2654  cmp x9,x8
7102bc2658  b.ne 0x7102bc2640
7102bc265c  b 0x7102bc2670
7102bc2660  cbz x10,0x7102bc2670
7102bc2664  ldr x8,[x10, #0x130]
7102bc2668  cbz x8,0x7102bc2670
7102bc266c  str x8,[x21, #0xc8]
7102bc2670  add x8,sp,#0xb0
7102bc2674  add x25,x8,#0x10
7102bc2678  add x8,sp,#0xf0
7102bc267c  add x19,x8,#0x10
7102bc2680  adrp x8,0x7104472000
7102bc2684  ldr s10,[x8, #0x6e0]
7102bc2688  mov x26,x21
7102bc268c  mov x28,xzr
7102bc2690  orr w27,wzr,#0xc
7102bc2694  str xzr,[x26, #0x80]!
7102bc2698  adrp x24,0x7104557000
7102bc269c  add x24,x24,#0x990
7102bc26a0  str xzr,[x26, #0x8]
7102bc26a4  mov w20,#0x1
7102bc26a8  stp xzr,xzr,[x26, #0x30]
7102bc26ac  stp xzr,xzr,[x26, #0x20]
7102bc26b0  stp xzr,xzr,[x26, #0x10]
7102bc26b4  ldur x8,[x29, #-0x68]
7102bc26b8  ldr x8,[x8]
7102bc26bc  ldr x8,[x8]
7102bc26c0  ldr x8,[x8, #0x8]
7102bc26c4  madd x9,x28,x27,x24
7102bc26c8  ldr w9,[x9, #0x4]
7102bc26cc  ldr x8,[x8, #0x8]
7102bc26d0  ldr x10,[x8, #0x78]
7102bc26d4  cmp x10,x9
7102bc26d8  b.ls 0x7102bc27b0
7102bc26dc  ldr x8,[x8, #0x80]
7102bc26e0  cbz w9,0x7102bc27b4
7102bc26e4  sub x10,x9,#0x1
7102bc26e8  ands x11,x9,#0x3
7102bc26ec  b.eq 0x7102bc2704
7102bc26f0  neg x12,x11
7102bc26f4  ldr x8,[x8]
7102bc26f8  adds x12,x12,#0x1
7102bc26fc  b.ne 0x7102bc26f4
7102bc2700  sub x9,x9,x11
7102bc2704  cmp x10,#0x3
7102bc2708  b.cc 0x7102bc27b4
7102bc270c  mvn x10,x9
7102bc2710  cmn x10,#0x5
7102bc2714  orr x10,xzr,#-0x5
7102bc2718  csinv x10,x10,x9,le
7102bc271c  add x10,x9,x10
7102bc2720  add x10,x10,#0x4
7102bc2724  ubfx x11,x10,#0x2,#0x1e
7102bc2728  add w11,w11,#0x1
7102bc272c  ands x11,x11,#0x3
7102bc2730  b.eq 0x7102bc2754
7102bc2734  neg x11,x11
7102bc2738  ldr x8,[x8]
7102bc273c  ldr x8,[x8]
7102bc2740  ldr x8,[x8]
7102bc2744  ldr x8,[x8]
7102bc2748  sub x9,x9,#0x4
7102bc274c  adds x11,x11,#0x1
7102bc2750  b.ne 0x7102bc2738
7102bc2754  cmp x10,#0xc
7102bc2758  b.cc 0x7102bc27b4
7102bc275c  add x9,x9,#0x10
7102bc2760  ldr x8,[x8]
7102bc2764  ldr x8,[x8]
7102bc2768  ldr x8,[x8]
7102bc276c  ldr x8,[x8]
7102bc2770  ldr x8,[x8]
7102bc2774  ldr x8,[x8]
7102bc2778  ldr x8,[x8]
7102bc277c  ldr x8,[x8]
7102bc2780  ldr x8,[x8]
7102bc2784  ldr x8,[x8]
7102bc2788  ldr x8,[x8]
7102bc278c  ldr x8,[x8]
7102bc2790  ldr x8,[x8]
7102bc2794  ldr x8,[x8]
7102bc2798  ldr x8,[x8]
7102bc279c  ldr x8,[x8]
7102bc27a0  sub x9,x9,#0x10
7102bc27a4  cmp x9,#0x10
7102bc27a8  b.gt 0x7102bc2760
7102bc27ac  b 0x7102bc27b4
7102bc27b0  mov x8,xzr
7102bc27b4  madd x9,x28,x27,x24
7102bc27b8  ldr w10,[x8, #0xc4]
7102bc27bc  mov w12,#0xffff30ff
7102bc27c0  stp xzr,xzr,[sp, #0x100]
7102bc27c4  and w10,w10,w12
7102bc27c8  stp xzr,xzr,[sp, #0xf0]
7102bc27cc  ldr w11,[x9]
7102bc27d0  orr w10,w10,w11
7102bc27d4  stur w10,[x29, #-0x100]
7102bc27d8  ldr x10,[x8, #0x88]
7102bc27dc  ldp x10,x11,[x10, #0x10]
7102bc27e0  ldr q0,[sp, #0x60]
7102bc27e4  stp x10,x11,[sp, #0xf0]
7102bc27e8  ldr x10,[x8, #0x90]
7102bc27ec  ldr x11,[x10, #0x18]
7102bc27f0  str x11,[x19, #0x8]
7102bc27f4  ldr x10,[x10, #0x10]
7102bc27f8  str x10,[x19]
7102bc27fc  ldr w8,[x8, #0xd0]
7102bc2800  stur w8,[x29, #-0x84]
7102bc2804  str q0,[sp, #0x70]
7102bc2808  ldr s0,[x9, #0x8]
7102bc280c  ldp x8,x10,[sp, #0xf0]
7102bc2810  fmul s8,s0,s10
7102bc2814  stp x8,x10,[sp, #0xb0]
7102bc2818  ldr x10,[x19]
7102bc281c  fcmp s8,#0.0
7102bc2820  stp x10,x11,[x25]
7102bc2824  b.eq 0x7102bc288c
7102bc2828  ldr q2,[sp, #0xb0]
7102bc282c  fcmeq v0.4S,v2.4S,#0.0
7102bc2830  ext v1.16B,v0.16B,v0.16B,0x8
7102bc2834  and v0.8B,v0.8B,v1.8B
7102bc2838  fmov w8,s0
7102bc283c  mov w9,v0.S[0x1]
7102bc2840  and w8,w8,w9
7102bc2844  cbnz w8,0x7102bc288c
7102bc2848  mov v0.16B,v8.16B
7102bc284c  str q2,[sp, #0x50]
7102bc2850  bl 0x71039c07d0
7102bc2854  mov v9.16B,v0.16B
7102bc2858  mov v0.16B,v8.16B
7102bc285c  bl 0x71039c07e0
7102bc2860  ldr q3,[sp, #0x50]
7102bc2864  fmul s1,s9,v3.S[0x0]
7102bc2868  fmul s2,s0,v3.S[0x1]
7102bc286c  fmul s0,s0,v3.S[0x0]
7102bc2870  fsub s1,s1,s2
7102bc2874  fmul s2,s9,v3.S[0x1]
7102bc2878  movi v3.2D,#0x0
7102bc287c  mov v3.S[0x0],v1.S[0x0]
7102bc2880  fadd s0,s0,s2
7102bc2884  mov v3.S[0x1],v0.S[0x0]
7102bc2888  str q3,[sp, #0xb0]
7102bc288c  fcmp s8,#0.0
7102bc2890  b.eq 0x7102bc28f8
7102bc2894  ldr q2,[sp, #0xc0]
7102bc2898  fcmeq v0.4S,v2.4S,#0.0
7102bc289c  ext v1.16B,v0.16B,v0.16B,0x8
7102bc28a0  and v0.8B,v0.8B,v1.8B
7102bc28a4  fmov w8,s0
7102bc28a8  mov w9,v0.S[0x1]
7102bc28ac  and w8,w8,w9
7102bc28b0  cbnz w8,0x7102bc28f8
7102bc28b4  mov v0.16B,v8.16B
7102bc28b8  str q2,[sp, #0x50]
7102bc28bc  bl 0x71039c07d0
7102bc28c0  mov v9.16B,v0.16B
7102bc28c4  mov v0.16B,v8.16B
7102bc28c8  bl 0x71039c07e0
7102bc28cc  ldr q3,[sp, #0x50]
7102bc28d0  fmul s1,s9,v3.S[0x0]
7102bc28d4  fmul s2,s0,v3.S[0x1]
7102bc28d8  fmul s0,s0,v3.S[0x0]
7102bc28dc  fsub s1,s1,s2
7102bc28e0  fmul s2,s9,v3.S[0x1]
7102bc28e4  movi v3.2D,#0x0
7102bc28e8  mov v3.S[0x0],v1.S[0x0]
7102bc28ec  fadd s0,s0,s2
7102bc28f0  mov v3.S[0x1],v0.S[0x0]
7102bc28f4  str q3,[sp, #0xc0]
7102bc28f8  adrp x9,0x710532a000
7102bc28fc  ldr x9,[x9, #0x9d8]
7102bc2900  ldr x9,[x9]
7102bc2904  ldr x8,[x21]
7102bc2908  ldr x8,[x8, #0x300]
7102bc290c  ldr x8,[x8, #0x10]
7102bc2910  ldr x11,[x9, #0x1c8]
7102bc2914  mov x10,x11
7102bc2918  ldr x9,[x10, #0x50]!
7102bc291c  cbz x9,0x7102bc295c
7102bc2920  add x10,x11,#0x50
7102bc2924  b 0x7102bc2930
7102bc2928  mov x10,x9
7102bc292c  mov x9,x11
7102bc2930  ldr x11,[x9, #0x20]
7102bc2934  cmp x11,x8
7102bc2938  b.ls 0x7102bc294c
7102bc293c  ldr x11,[x9]
7102bc2940  mov x10,x9
7102bc2944  cbnz x11,0x7102bc2928
7102bc2948  b 0x7102bc295c
7102bc294c  b.cs 0x7102bc295c
7102bc2950  ldr x11,[x9, #0x8]!
7102bc2954  mov x10,x9
7102bc2958  cbnz x11,0x7102bc2928
7102bc295c  ldr x8,[x10]
7102bc2960  ldr x23,[x8, #0x28]
7102bc2964  adrp x8,0x71052b9000
7102bc2968  ldr x0,[x8, #0x298]
7102bc296c  ldr x8,[x23, #0xc0]
7102bc2970  ldr w1,[x8, #0x10]
7102bc2974  add x2,sp,#0xb0
7102bc2978  mov w3,#0x2
7102bc297c  add x4,sp,#0x70
7102bc2980  sub x5,x29,#0x100
7102bc2984  sub x6,x29,#0x84
7102bc2988  mov w7,wzr
7102bc298c  bl 0x7100523f10
7102bc2990  mov x22,x0
7102bc2994  mov x0,x23
7102bc2998  mov x1,x22
7102bc299c  bl 0x71031653d0
7102bc29a0  add x8,x21,x28, LSL #0x3
7102bc29a4  str x22,[x8, #0x80]
7102bc29a8  ldr x8,[x22, #0x8]
7102bc29ac  strb w20,[x22, #0x128]
7102bc29b0  cbz x8,0x7102bc29c8
7102bc29b4  mov x9,#-0x1
7102bc29b8  str x9,[x8, #0xd8]
7102bc29bc  ldr x0,[x22, #0x8]
7102bc29c0  mov w1,wzr
7102bc29c4  bl 0x7100532bc0
7102bc29c8  add x28,x28,#0x1
7102bc29cc  cmp x28,#0x8
7102bc29d0  b.ne 0x7102bc26b4
7102bc29d4  adrp x9,0x710532a000
7102bc29d8  ldr x8,[x21]
7102bc29dc  ldr x8,[x8, #0x300]
7102bc29e0  ldr x9,[x9, #0x9d8]
7102bc29e4  ldr x9,[x9]
7102bc29e8  ldr x0,[x9, #0x1c8]
7102bc29ec  ldr x1,[x8, #0x10]
7102bc29f0  mov w2,#0x2
7102bc29f4  bl 0x7103165120
7102bc29f8  ldp x27,x25,[sp, #0x8]
7102bc29fc  orr w19,wzr,#0x18
7102bc2a00  mov w24,#0x101
7102bc2a04  ldr x8,[x26]
7102bc2a08  cbz x8,0x7102bc2b38
7102bc2a0c  mov x9,x8
7102bc2a10  ldr x10,[x9, #0x8]!
7102bc2a14  mov x11,x10
7102bc2a18  ldr x12,[x11, #0x98]!
7102bc2a1c  cmp x11,x12
7102bc2a20  b.eq 0x7102bc2a40
7102bc2a24  strb wzr,[x12, #0x44]
7102bc2a28  ldr x12,[x12]
7102bc2a2c  cmp x11,x12
7102bc2a30  b.ne 0x7102bc2a24
7102bc2a34  ldr x8,[x26]
7102bc2a38  mov x9,x8
7102bc2a3c  ldr x10,[x9, #0x8]!
7102bc2a40  ldrb w12,[x8, #0x12b]
7102bc2a44  add x11,x8,#0x12b
7102bc2a48  strb wzr,[x8, #0x128]
7102bc2a4c  strb w12,[x8, #0x130]
7102bc2a50  str wzr,[x11]
7102bc2a54  ldr x11,[x8, #0x100]
7102bc2a58  ldp x12,x13,[x8, #0x88]
7102bc2a5c  strb wzr,[x8, #0x12f]
7102bc2a60  stp x11,x11,[x8, #0x88]
7102bc2a64  ldr x11,[x8, #0xb8]
7102bc2a68  stp x12,x13,[x8, #0x100]
7102bc2a6c  ldr x12,[x8, #0x110]
7102bc2a70  ldp x13,x14,[x8, #0x98]
7102bc2a74  str x11,[x8, #0xc0]
7102bc2a78  ldr x11,[x8, #0xd0]
7102bc2a7c  str x11,[x8, #0xd8]
7102bc2a80  ldr x11,[x8, #0xe8]
7102bc2a84  str x13,[x8, #0x110]
7102bc2a88  str x12,[x8, #0x98]
7102bc2a8c  str x14,[x8, #0xa8]
7102bc2a90  str x11,[x8, #0xf0]
7102bc2a94  cbz x10,0x7102bc2b38
7102bc2a98  str xzr,[x10, #0xd8]
7102bc2a9c  ldr x22,[x9]
7102bc2aa0  ldrb w8,[x22, #0xe0]
7102bc2aa4  cbz w8,0x7102bc2b38
7102bc2aa8  mov x20,x22
7102bc2aac  ldr x23,[x20, #0x80]!
7102bc2ab0  strh wzr,[x20, #0x60]
7102bc2ab4  sturh wzr,[x20, #0x67]
7102bc2ab8  cmp x20,x23
7102bc2abc  b.eq 0x7102bc2b08
7102bc2ac0  ldr w1,[x23, #0xfc]
7102bc2ac4  strb wzr,[x23, #0x100]
7102bc2ac8  cbz w1,0x7102bc2af0
7102bc2acc  ldr x8,[x23, #0xf0]
7102bc2ad0  ldr x9,[x8]
7102bc2ad4  madd x9,x1,x19,x9
7102bc2ad8  strb wzr,[x9, #0x10]
7102bc2adc  ldr x0,[x8, #0x18]
7102bc2ae0  ldr x8,[x0]
7102bc2ae4  ldr x8,[x8, #0x18]
7102bc2ae8  mov w2,wzr
7102bc2aec  blr x8
7102bc2af0  str wzr,[x23, #0x80]
7102bc2af4  stp xzr,xzr,[x23, #0x70]
7102bc2af8  stp xzr,xzr,[x23, #0x60]
7102bc2afc  ldr x23,[x23]
7102bc2b00  cmp x20,x23
7102bc2b04  b.ne 0x7102bc2ac0
7102bc2b08  mov x8,x22
7102bc2b0c  ldr x9,[x8, #0x68]!
7102bc2b10  cmp x8,x9
7102bc2b14  b.eq 0x7102bc2b28
7102bc2b18  strb wzr,[x9, #0x50]
7102bc2b1c  ldr x9,[x9]
7102bc2b20  cmp x8,x9
7102bc2b24  b.ne 0x7102bc2b18
7102bc2b28  adrp x8,0x71052b9000
7102bc2b2c  ldr x0,[x8, #0x298]
7102bc2b30  mov x1,x22
7102bc2b34  bl 0x7100525010
7102bc2b38  add x26,x26,#0x8
7102bc2b3c  cmp x26,x25
7102bc2b40  b.ne 0x7102bc2a04
7102bc2b44  str x27,[sp, #0xb0]
7102bc2b48  ldr x8,[x21]
7102bc2b4c  ldr x9,[x8, #0x338]
7102bc2b50  ldr x9,[x9]
7102bc2b54  ldr x0,[x9, #0x8]
7102bc2b58  cbz x0,0x7102bc2b74
7102bc2b5c  add x1,sp,#0xb0
7102bc2b60  mov w2,wzr
7102bc2b64  bl 0x7102405040
7102bc2b68  ldr x8,[x21]
7102bc2b6c  add x8,x8,#0x338
7102bc2b70  b 0x7102bc2b7c
7102bc2b74  add x8,x8,#0x338
7102bc2b78  mov w0,#0xffffffff
7102bc2b7c  str w0,[x25]
7102bc2b80  ldr x8,[x8]
7102bc2b84  ldr x8,[x8]
7102bc2b88  ldr x23,[sp, #0x48]
7102bc2b8c  mov w19,#0xffffffff
7102bc2b90  ldr x0,[x8, #0x8]
7102bc2b94  cbz x0,0x7102bc2ba8
7102bc2b98  add x1,sp,#0xb0
7102bc2b9c  mov w2,wzr
7102bc2ba0  bl 0x7102405040
7102bc2ba4  b 0x7102bc2bac
7102bc2ba8  mov w0,w19
7102bc2bac  ldr x20,[x21, #0x8]
7102bc2bb0  movi v0.2D,#0x0
7102bc2bb4  mov v1.16B,v0.16B
7102bc2bb8  str w0,[x21, #0xc4]
7102bc2bbc  ldr x25,[sp, #0x18]
7102bc2bc0  add x1,sp,#0xf0
7102bc2bc4  sub x2,x29,#0xd0
7102bc2bc8  add x8,x20,#0x20c
7102bc2bcc  mov x0,x25
7102bc2bd0  ld1 {v0.S}[0],[x8]
7102bc2bd4  add x8,x20,#0x214
7102bc2bd8  ld1 {v1.S}[0],[x8]
7102bc2bdc  add x8,x20,#0x210
7102bc2be0  ld1 {v0.S}[1],[x8]
7102bc2be4  add x8,x20,#0x218
7102bc2be8  ld1 {v1.S}[1],[x8]
7102bc2bec  add x22,x20,#0x204
7102bc2bf0  str q0,[sp, #0xf0]
7102bc2bf4  stur q1,[x29, #-0xd0]
7102bc2bf8  bl 0x710317e570
7102bc2bfc  movi v0.2D,#0x0
7102bc2c00  ld1 {v0.S}[0],[x22]
7102bc2c04  add x8,x20,#0x208
7102bc2c08  ld1 {v0.S}[1],[x8]
7102bc2c0c  add x1,sp,#0xf0
7102bc2c10  mov x0,x25
7102bc2c14  str q0,[sp, #0xf0]
7102bc2c18  bl 0x710317e220
7102bc2c1c  ldrb w8,[x21, #0x149]
7102bc2c20  cbz w8,0x7102bc2c68
7102bc2c24  ldrsw x9,[x21, #0x14c]
7102bc2c28  cmp w9,#0x37
7102bc2c2c  b.hi 0x7102bc2c60
7102bc2c30  adrp x8,0x71052b6000
7102bc2c34  ldr x8,[x8, #0xfd8]
7102bc2c38  ldr x8,[x8]
7102bc2c3c  ldr x8,[x8, #0xc0]
7102bc2c40  add x9,x8,x9
7102bc2c44  ldrb w10,[x9, #0x464]
7102bc2c48  cbz w10,0x7102bc2c60
7102bc2c4c  add x9,x9,#0x464
7102bc2c50  strb wzr,[x9]
7102bc2c54  ldr w9,[x8]
7102bc2c58  sub w9,w9,#0x1
7102bc2c5c  str w9,[x8]
7102bc2c60  str w19,[x21, #0x14c]
7102bc2c64  strb wzr,[x21, #0x149]
7102bc2c68  strb wzr,[x21, #0x14a]
7102bc2c6c  ldr x20,[x23, #0x9e8]
7102bc2c70  str x21,[x23, #0x9e8]
7102bc2c74  cbz x20,0x7102bc2c88
7102bc2c78  mov x0,x20
7102bc2c7c  bl 0x7102bd3140
7102bc2c80  mov x0,x20
7102bc2c84  bl 0x710392eb40
7102bc2c88  ldr x8,[x23, #0xa08]
7102bc2c8c  cbz x8,0x7102bc2cd8
7102bc2c90  add x0,x8,#0x108
7102bc2c94  strb wzr,[x8, #0x110]
7102bc2c98  bl 0x71025e9d50
7102bc2c9c  ldr x8,[x23, #0xa08]
7102bc2ca0  cbz x8,0x7102bc2cd8
7102bc2ca4  ldrb w9,[x8, #0xe0]
7102bc2ca8  cbz w9,0x7102bc2cb8
7102bc2cac  ldr x9,[x8, #0xc8]
7102bc2cb0  cbz x9,0x7102bc2cb8
7102bc2cb4  strh w24,[x9, #0x30]
7102bc2cb8  ldr x9,[x8, #0xd8]
7102bc2cbc  cbz x9,0x7102bc2cc8
7102bc2cc0  mov w10,#0x1
7102bc2cc4  strb w10,[x9, #0x21]
7102bc2cc8  ldrb w9,[x8, #0xe0]
7102bc2ccc  cbz w9,0x7102bc2cd8
7102bc2cd0  ldr x8,[x8, #0xb0]
7102bc2cd4  strb wzr,[x8, #0x10]
7102bc2cd8  ldr x8,[x23, #0xa10]
7102bc2cdc  cbz x8,0x7102bc2d28
7102bc2ce0  add x0,x8,#0x108
7102bc2ce4  strb wzr,[x8, #0x110]
7102bc2ce8  bl 0x71025e9d50
7102bc2cec  ldr x8,[x23, #0xa10]
7102bc2cf0  cbz x8,0x7102bc2d28
7102bc2cf4  ldrb w9,[x8, #0xe0]
7102bc2cf8  cbz w9,0x7102bc2d08
7102bc2cfc  ldr x9,[x8, #0xc8]
7102bc2d00  cbz x9,0x7102bc2d08
7102bc2d04  strh w24,[x9, #0x30]
7102bc2d08  ldr x9,[x8, #0xd8]
7102bc2d0c  cbz x9,0x7102bc2d18
7102bc2d10  mov w10,#0x1
7102bc2d14  strb w10,[x9, #0x21]
7102bc2d18  ldrb w9,[x8, #0xe0]
7102bc2d1c  cbz w9,0x7102bc2d28
7102bc2d20  ldr x8,[x8, #0xb0]
7102bc2d24  strb wzr,[x8, #0x10]
7102bc2d28  ldr x8,[x23, #0xa18]
7102bc2d2c  cbz x8,0x7102bc2d78
7102bc2d30  add x0,x8,#0x108
7102bc2d34  strb wzr,[x8, #0x110]
7102bc2d38  bl 0x71025e9d50
7102bc2d3c  ldr x8,[x23, #0xa18]
7102bc2d40  cbz x8,0x7102bc2d78
7102bc2d44  ldrb w9,[x8, #0xe0]
7102bc2d48  cbz w9,0x7102bc2d58
7102bc2d4c  ldr x9,[x8, #0xc8]
7102bc2d50  cbz x9,0x7102bc2d58
7102bc2d54  strh w24,[x9, #0x30]
7102bc2d58  ldr x9,[x8, #0xd8]
7102bc2d5c  cbz x9,0x7102bc2d68
7102bc2d60  mov w10,#0x1
7102bc2d64  strb w10,[x9, #0x21]
7102bc2d68  ldrb w9,[x8, #0xe0]
7102bc2d6c  cbz w9,0x7102bc2d78
7102bc2d70  ldr x8,[x8, #0xb0]
7102bc2d74  strb wzr,[x8, #0x10]
7102bc2d78  ldr x8,[x23, #0xa20]
7102bc2d7c  cbz x8,0x7102bc2dc8
7102bc2d80  add x0,x8,#0x108
7102bc2d84  strb wzr,[x8, #0x110]
7102bc2d88  bl 0x71025e9d50
7102bc2d8c  ldr x8,[x23, #0xa20]
7102bc2d90  cbz x8,0x7102bc2dc8
7102bc2d94  ldrb w9,[x8, #0xe0]
7102bc2d98  cbz w9,0x7102bc2da8
7102bc2d9c  ldr x9,[x8, #0xc8]
7102bc2da0  cbz x9,0x7102bc2da8
7102bc2da4  strh w24,[x9, #0x30]
7102bc2da8  ldr x9,[x8, #0xd8]
7102bc2dac  cbz x9,0x7102bc2db8
7102bc2db0  mov w10,#0x1
7102bc2db4  strb w10,[x9, #0x21]
7102bc2db8  ldrb w9,[x8, #0xe0]
7102bc2dbc  cbz w9,0x7102bc2dc8
7102bc2dc0  ldr x8,[x8, #0xb0]
7102bc2dc4  strb wzr,[x8, #0x10]
7102bc2dc8  ldr x8,[x23, #0xa28]
7102bc2dcc  cbz x8,0x7102bc2e18
7102bc2dd0  add x0,x8,#0x108
7102bc2dd4  strb wzr,[x8, #0x110]
7102bc2dd8  bl 0x71025e9d50
7102bc2ddc  ldr x8,[x23, #0xa28]
7102bc2de0  cbz x8,0x7102bc2e18
7102bc2de4  ldrb w9,[x8, #0xe0]
7102bc2de8  cbz w9,0x7102bc2df8
7102bc2dec  ldr x9,[x8, #0xc8]
7102bc2df0  cbz x9,0x7102bc2df8
7102bc2df4  strh w24,[x9, #0x30]
7102bc2df8  ldr x9,[x8, #0xd8]
7102bc2dfc  cbz x9,0x7102bc2e08
7102bc2e00  mov w10,#0x1
7102bc2e04  strb w10,[x9, #0x21]
7102bc2e08  ldrb w9,[x8, #0xe0]
7102bc2e0c  cbz w9,0x7102bc2e18
7102bc2e10  ldr x8,[x8, #0xb0]
7102bc2e14  strb wzr,[x8, #0x10]
7102bc2e18  ldr x8,[x23, #0xa30]
7102bc2e1c  cbz x8,0x7102bc2e68
7102bc2e20  add x0,x8,#0x108
7102bc2e24  strb wzr,[x8, #0x110]
7102bc2e28  bl 0x71025e9d50
7102bc2e2c  ldr x8,[x23, #0xa30]
7102bc2e30  cbz x8,0x7102bc2e68
7102bc2e34  ldrb w9,[x8, #0xe0]
7102bc2e38  cbz w9,0x7102bc2e48
7102bc2e3c  ldr x9,[x8, #0xc8]
7102bc2e40  cbz x9,0x7102bc2e48
7102bc2e44  strh w24,[x9, #0x30]
7102bc2e48  ldr x9,[x8, #0xd8]
7102bc2e4c  cbz x9,0x7102bc2e58
7102bc2e50  mov w10,#0x1
7102bc2e54  strb w10,[x9, #0x21]
7102bc2e58  ldrb w9,[x8, #0xe0]
7102bc2e5c  cbz w9,0x7102bc2e68
7102bc2e60  ldr x8,[x8, #0xb0]
7102bc2e64  strb wzr,[x8, #0x10]
7102bc2e68  ldr x8,[x23, #0xa38]
7102bc2e6c  cbz x8,0x7102bc2eb8
7102bc2e70  add x0,x8,#0x108
7102bc2e74  strb wzr,[x8, #0x110]
7102bc2e78  bl 0x71025e9d50
7102bc2e7c  ldr x8,[x23, #0xa38]
7102bc2e80  cbz x8,0x7102bc2eb8
7102bc2e84  ldrb w9,[x8, #0xe0]
7102bc2e88  cbz w9,0x7102bc2e98
7102bc2e8c  ldr x9,[x8, #0xc8]
7102bc2e90  cbz x9,0x7102bc2e98
7102bc2e94  strh w24,[x9, #0x30]
7102bc2e98  ldr x9,[x8, #0xd8]
7102bc2e9c  cbz x9,0x7102bc2ea8
7102bc2ea0  mov w10,#0x1
7102bc2ea4  strb w10,[x9, #0x21]
7102bc2ea8  ldrb w9,[x8, #0xe0]
7102bc2eac  cbz w9,0x7102bc2eb8
7102bc2eb0  ldr x8,[x8, #0xb0]
7102bc2eb4  strb wzr,[x8, #0x10]
7102bc2eb8  ldr x8,[x23, #0xa40]
7102bc2ebc  cbz x8,0x7102bc2f08
7102bc2ec0  add x0,x8,#0x108
7102bc2ec4  strb wzr,[x8, #0x110]
7102bc2ec8  bl 0x71025e9d50
7102bc2ecc  ldr x8,[x23, #0xa40]
7102bc2ed0  cbz x8,0x7102bc2f08
7102bc2ed4  ldrb w9,[x8, #0xe0]
7102bc2ed8  cbz w9,0x7102bc2ee8
7102bc2edc  ldr x9,[x8, #0xc8]
7102bc2ee0  cbz x9,0x7102bc2ee8
7102bc2ee4  strh w24,[x9, #0x30]
7102bc2ee8  ldr x9,[x8, #0xd8]
7102bc2eec  cbz x9,0x7102bc2ef8
7102bc2ef0  mov w10,#0x1
7102bc2ef4  strb w10,[x9, #0x21]
7102bc2ef8  ldrb w9,[x8, #0xe0]
7102bc2efc  cbz w9,0x7102bc2f08
7102bc2f00  ldr x8,[x8, #0xb0]
7102bc2f04  strb wzr,[x8, #0x10]
7102bc2f08  ldr x8,[x23, #0xa48]
7102bc2f0c  cbz x8,0x7102bc2f58
7102bc2f10  add x0,x8,#0x108
7102bc2f14  strb wzr,[x8, #0x110]
7102bc2f18  bl 0x71025e9d50
7102bc2f1c  ldr x8,[x23, #0xa48]
7102bc2f20  cbz x8,0x7102bc2f58
7102bc2f24  ldrb w9,[x8, #0xe0]
7102bc2f28  cbz w9,0x7102bc2f38
7102bc2f2c  ldr x9,[x8, #0xc8]
7102bc2f30  cbz x9,0x7102bc2f38
7102bc2f34  strh w24,[x9, #0x30]
7102bc2f38  ldr x9,[x8, #0xd8]
7102bc2f3c  cbz x9,0x7102bc2f48
7102bc2f40  mov w10,#0x1
7102bc2f44  strb w10,[x9, #0x21]
7102bc2f48  ldrb w9,[x8, #0xe0]
7102bc2f4c  cbz w9,0x7102bc2f58
7102bc2f50  ldr x8,[x8, #0xb0]
7102bc2f54  strb wzr,[x8, #0x10]
7102bc2f58  ldr x8,[x23, #0xa68]
7102bc2f5c  ldr x8,[x8, #0x70]
7102bc2f60  cbz x8,0x7102bc2fb0
7102bc2f64  add x0,x8,#0x108
7102bc2f68  strb wzr,[x8, #0x110]
7102bc2f6c  bl 0x71025e9d50
7102bc2f70  ldr x8,[x23, #0xa68]
7102bc2f74  ldr x8,[x8, #0x70]
7102bc2f78  cbz x8,0x7102bc2fb0
7102bc2f7c  ldrb w9,[x8, #0xe0]
7102bc2f80  cbz w9,0x7102bc2f90
7102bc2f84  ldr x9,[x8, #0xc8]
7102bc2f88  cbz x9,0x7102bc2f90
7102bc2f8c  strh w24,[x9, #0x30]
7102bc2f90  ldr x9,[x8, #0xd8]
7102bc2f94  cbz x9,0x7102bc2fa0
7102bc2f98  mov w10,#0x1
7102bc2f9c  strb w10,[x9, #0x21]
7102bc2fa0  ldrb w9,[x8, #0xe0]
7102bc2fa4  cbz w9,0x7102bc2fb0
7102bc2fa8  ldr x8,[x8, #0xb0]
7102bc2fac  strb wzr,[x8, #0x10]
7102bc2fb0  ldr x8,[x23, #0xa70]
7102bc2fb4  ldr x8,[x8, #0x70]
7102bc2fb8  cbz x8,0x7102bc3008
7102bc2fbc  add x0,x8,#0x108
7102bc2fc0  strb wzr,[x8, #0x110]
7102bc2fc4  bl 0x71025e9d50
7102bc2fc8  ldr x8,[x23, #0xa70]
7102bc2fcc  ldr x8,[x8, #0x70]
7102bc2fd0  cbz x8,0x7102bc3008
7102bc2fd4  ldrb w9,[x8, #0xe0]
7102bc2fd8  cbz w9,0x7102bc2fe8
7102bc2fdc  ldr x9,[x8, #0xc8]
7102bc2fe0  cbz x9,0x7102bc2fe8
7102bc2fe4  strh w24,[x9, #0x30]
7102bc2fe8  ldr x9,[x8, #0xd8]
7102bc2fec  cbz x9,0x7102bc2ff8
7102bc2ff0  mov w10,#0x1
7102bc2ff4  strb w10,[x9, #0x21]
7102bc2ff8  ldrb w9,[x8, #0xe0]
7102bc2ffc  cbz w9,0x7102bc3008
7102bc3000  ldr x8,[x8, #0xb0]
7102bc3004  strb wzr,[x8, #0x10]
7102bc3008  ldr w8,[x23, #0x9fc]
7102bc300c  cbz w8,0x7102bc32bc
7102bc3010  cmp w8,#0x1
7102bc3014  b.eq 0x7102bc31a0
7102bc3018  cmp w8,#0x2
7102bc301c  b.ne 0x7102bc3a58
7102bc3020  ldr x8,[x23, #0xa40]
7102bc3024  cbz x8,0x7102bc3074
7102bc3028  add x0,x8,#0x108
7102bc302c  mov w9,#0x1
7102bc3030  strb w9,[x8, #0x110]
7102bc3034  bl 0x71025e9d50
7102bc3038  ldr x8,[x23, #0xa40]
7102bc303c  cbz x8,0x7102bc3074
7102bc3040  ldrb w9,[x8, #0xe0]
7102bc3044  cbz w9,0x7102bc3054
7102bc3048  ldr x9,[x8, #0xc8]
7102bc304c  cbz x9,0x7102bc3054
7102bc3050  strh wzr,[x9, #0x30]
7102bc3054  ldr x9,[x8, #0xd8]
7102bc3058  cbz x9,0x7102bc3060
7102bc305c  strb wzr,[x9, #0x21]
7102bc3060  ldrb w9,[x8, #0xe0]
7102bc3064  cbz w9,0x7102bc3074
7102bc3068  ldr x8,[x8, #0xb0]
7102bc306c  mov w9,#0x1
7102bc3070  strb w9,[x8, #0x10]
7102bc3074  adrp x8,0x7104472000
7102bc3078  ldr s8,[x8, #0xc40]
7102bc307c  ldr x0,[x23, #0xa40]
7102bc3080  mov w1,#0x1
7102bc3084  mov v0.16B,v8.16B
7102bc3088  bl 0x710260fdd0
7102bc308c  ldr x8,[x23, #0xa40]
7102bc3090  cbz x8,0x7102bc30a4
7102bc3094  ldr x8,[x8, #0xd8]
7102bc3098  cbz x8,0x7102bc30a4
7102bc309c  mov w9,#0x1
7102bc30a0  strb w9,[x8, #0x21]
7102bc30a4  ldr x8,[x23, #0xa68]
7102bc30a8  ldr x19,[x8, #0x70]
7102bc30ac  cbz x19,0x7102bc3428
7102bc30b0  add x0,x19,#0x108
7102bc30b4  mov w8,#0x1
7102bc30b8  strb w8,[x19, #0x110]
7102bc30bc  bl 0x71025e9d50
7102bc30c0  ldr x8,[x19, #0xd8]
7102bc30c4  cbz x8,0x7102bc30cc
7102bc30c8  strb wzr,[x8, #0x21]
7102bc30cc  ldr x8,[x19, #0xd8]
7102bc30d0  cbz x8,0x7102bc30d8
7102bc30d4  strb wzr,[x8, #0x22]
7102bc30d8  adrp x8,0x7104473000
7102bc30dc  ldr s0,[x8, #0x81c]
7102bc30e0  ldr x0,[x19, #0xd8]
7102bc30e4  mov w1,#0x1
7102bc30e8  bl 0x71025ee450
7102bc30ec  ldr q0,[sp, #0x30]
7102bc30f0  stur q0,[x29, #-0xd0]
7102bc30f4  ldr q0,[sp, #0x60]
7102bc30f8  stur q0,[x29, #-0xc0]
7102bc30fc  ldr q0,[sp, #0x20]
7102bc3100  adrp x8,0x710446a000
7102bc3104  sub x1,x29,#0xd0
7102bc3108  stur q0,[x29, #-0xb0]
7102bc310c  ldr q0,[x8, #0x350]
7102bc3110  stur q0,[x29, #-0xa0]
7102bc3114  ldr x0,[x19, #0x90]
7102bc3118  ldr x8,[x0]
7102bc311c  ldr x8,[x8, #0x148]
7102bc3120  blr x8
7102bc3124  ldr x19,[x19, #0xd8]
7102bc3128  fmov s7,0x3f800000
7102bc312c  cbz x19,0x7102bc3450
7102bc3130  ldur x8,[x29, #-0xb8]
7102bc3134  str x8,[sp, #0x108]
7102bc3138  ldur x8,[x29, #-0xc0]
7102bc313c  str x8,[sp, #0x100]
7102bc3140  ldur x8,[x29, #-0xc8]
7102bc3144  str x8,[sp, #0xf8]
7102bc3148  ldur x8,[x29, #-0xd0]
7102bc314c  str x8,[sp, #0xf0]
7102bc3150  ldur x8,[x29, #-0x98]
7102bc3154  str x8,[sp, #0x128]
7102bc3158  ldur x8,[x29, #-0xa0]
7102bc315c  str x8,[sp, #0x120]
7102bc3160  ldur x8,[x29, #-0xa8]
7102bc3164  str x8,[sp, #0x118]
7102bc3168  ldur x8,[x29, #-0xb0]
7102bc316c  str x8,[sp, #0x110]
7102bc3170  ldr x8,[x19, #0x8]
7102bc3174  ldrb w9,[x8, #0xa8]
7102bc3178  cbz w9,0x7102bc3194
7102bc317c  ldr x0,[x8, #0x48]
7102bc3180  ldr x8,[x0]
7102bc3184  ldr x8,[x8, #0x20]
7102bc3188  add x1,sp,#0xf0
7102bc318c  blr x8
7102bc3190  fmov s7,0x3f800000
7102bc3194  mov w8,#0x1
7102bc3198  strb w8,[x19, #0x20]
7102bc319c  b 0x7102bc3450
7102bc31a0  ldr x8,[x23, #0xa28]
7102bc31a4  cbz x8,0x7102bc31f4
7102bc31a8  add x0,x8,#0x108
7102bc31ac  mov w9,#0x1
7102bc31b0  strb w9,[x8, #0x110]
7102bc31b4  bl 0x71025e9d50
7102bc31b8  ldr x8,[x23, #0xa28]
7102bc31bc  cbz x8,0x7102bc31f4
7102bc31c0  ldrb w9,[x8, #0xe0]
7102bc31c4  cbz w9,0x7102bc31d4
7102bc31c8  ldr x9,[x8, #0xc8]
7102bc31cc  cbz x9,0x7102bc31d4
7102bc31d0  strh wzr,[x9, #0x30]
7102bc31d4  ldr x9,[x8, #0xd8]
7102bc31d8  cbz x9,0x7102bc31e0
7102bc31dc  strb wzr,[x9, #0x21]
7102bc31e0  ldrb w9,[x8, #0xe0]
7102bc31e4  cbz w9,0x7102bc31f4
7102bc31e8  ldr x8,[x8, #0xb0]
7102bc31ec  mov w9,#0x1
7102bc31f0  strb w9,[x8, #0x10]
7102bc31f4  ldr x8,[x23, #0xa30]
7102bc31f8  cbz x8,0x7102bc3248
7102bc31fc  add x0,x8,#0x108
7102bc3200  mov w9,#0x1
7102bc3204  strb w9,[x8, #0x110]
7102bc3208  bl 0x71025e9d50
7102bc320c  ldr x8,[x23, #0xa30]
7102bc3210  cbz x8,0x7102bc3248
7102bc3214  ldrb w9,[x8, #0xe0]
7102bc3218  cbz w9,0x7102bc3228
7102bc321c  ldr x9,[x8, #0xc8]
7102bc3220  cbz x9,0x7102bc3228
7102bc3224  strh wzr,[x9, #0x30]
7102bc3228  ldr x9,[x8, #0xd8]
7102bc322c  cbz x9,0x7102bc3234
7102bc3230  strb wzr,[x9, #0x21]
7102bc3234  ldrb w9,[x8, #0xe0]
7102bc3238  cbz w9,0x7102bc3248
7102bc323c  ldr x8,[x8, #0xb0]
7102bc3240  mov w9,#0x1
7102bc3244  strb w9,[x8, #0x10]
7102bc3248  ldr x19,[x23, #0x9d0]
7102bc324c  ldr x0,[x19, #0x10]
7102bc3250  str wzr,[x19, #0x50]
7102bc3254  strb wzr,[x19, #0x24]
7102bc3258  ldr x8,[x0]
7102bc325c  ldr x8,[x8, #0x98]
7102bc3260  blr x8
7102bc3264  ldr x8,[x19, #0x10]
7102bc3268  ldr x8,[x8, #0x70]
7102bc326c  cbz x8,0x7102bc3284
7102bc3270  ldr x0,[x8, #0xd8]
7102bc3274  adrp x8,0x7104472000
7102bc3278  ldr s0,[x8, #0xfb8]
7102bc327c  mov w1,#0x1
7102bc3280  bl 0x71025ee450
7102bc3284  ldr w8,[x19, #0xac]
7102bc3288  str wzr,[x19, #0xa8]
7102bc328c  cbz w8,0x7102bc32a8
7102bc3290  ucvtf s0,w8
7102bc3294  ldr s1,[x19, #0xa4]
7102bc3298  fmul s0,s1,s0
7102bc329c  fcmp s0,#0.0
7102bc32a0  b.pl 0x7102bc32a8
7102bc32a4  str s0,[x19, #0xa8]
7102bc32a8  mov w8,#0x2
7102bc32ac  str w8,[x19, #0x20]
7102bc32b0  mov w8,#0x1
7102bc32b4  strb w8,[x19, #0x24]
7102bc32b8  b 0x7102bc38c4
7102bc32bc  ldr x8,[x23, #0xa08]
7102bc32c0  cbz x8,0x7102bc3310
7102bc32c4  add x0,x8,#0x108
7102bc32c8  mov w9,#0x1
7102bc32cc  strb w9,[x8, #0x110]
7102bc32d0  bl 0x71025e9d50
7102bc32d4  ldr x8,[x23, #0xa08]
7102bc32d8  cbz x8,0x7102bc3310
7102bc32dc  ldrb w9,[x8, #0xe0]
7102bc32e0  cbz w9,0x7102bc32f0
7102bc32e4  ldr x9,[x8, #0xc8]
7102bc32e8  cbz x9,0x7102bc32f0
7102bc32ec  strh wzr,[x9, #0x30]
7102bc32f0  ldr x9,[x8, #0xd8]
7102bc32f4  cbz x9,0x7102bc32fc
7102bc32f8  strb wzr,[x9, #0x21]
7102bc32fc  ldrb w9,[x8, #0xe0]
7102bc3300  cbz w9,0x7102bc3310
7102bc3304  ldr x8,[x8, #0xb0]
7102bc3308  mov w9,#0x1
7102bc330c  strb w9,[x8, #0x10]
7102bc3310  ldr x8,[x23, #0xa18]
7102bc3314  cbz x8,0x7102bc3364
7102bc3318  add x0,x8,#0x108
7102bc331c  mov w9,#0x1
7102bc3320  strb w9,[x8, #0x110]
7102bc3324  bl 0x71025e9d50
7102bc3328  ldr x8,[x23, #0xa18]
7102bc332c  cbz x8,0x7102bc3364
7102bc3330  ldrb w9,[x8, #0xe0]
7102bc3334  cbz w9,0x7102bc3344
7102bc3338  ldr x9,[x8, #0xc8]
7102bc333c  cbz x9,0x7102bc3344
7102bc3340  strh wzr,[x9, #0x30]
7102bc3344  ldr x9,[x8, #0xd8]
7102bc3348  cbz x9,0x7102bc3350
7102bc334c  strb wzr,[x9, #0x21]
7102bc3350  ldrb w9,[x8, #0xe0]
7102bc3354  cbz w9,0x7102bc3364
7102bc3358  ldr x8,[x8, #0xb0]
7102bc335c  mov w9,#0x1
7102bc3360  strb w9,[x8, #0x10]
7102bc3364  ldr x8,[x23, #0xa20]
7102bc3368  cbz x8,0x7102bc38c4
7102bc336c  add x0,x8,#0x108
7102bc3370  mov w9,#0x1
7102bc3374  strb w9,[x8, #0x110]
7102bc3378  bl 0x71025e9d50
7102bc337c  ldr x8,[x23, #0xa20]
7102bc3380  cbz x8,0x7102bc38c4
7102bc3384  ldrb w9,[x8, #0xe0]
7102bc3388  cbz w9,0x7102bc3398
7102bc338c  ldr x9,[x8, #0xc8]
7102bc3390  cbz x9,0x7102bc3398
7102bc3394  strh wzr,[x9, #0x30]
7102bc3398  ldr x9,[x8, #0xd8]
7102bc339c  cbz x9,0x7102bc33a4
7102bc33a0  strb wzr,[x9, #0x21]
7102bc33a4  ldrb w9,[x8, #0xe0]
7102bc33a8  cbz w9,0x7102bc38c4
7102bc33ac  ldr x8,[x8, #0xb0]
7102bc33b0  mov w9,#0x1
7102bc33b4  strb w9,[x8, #0x10]
7102bc33b8  b 0x7102bc38c4
7102bc33bc  str x8,[x19]
7102bc33c0  cbz x8,0x7102bc33d4
7102bc33c4  ldr x9,[x8, #0xd8]
7102bc33c8  cbz x9,0x7102bc33d8
7102bc33cc  strb wzr,[x9, #0x22]
7102bc33d0  ldr x8,[x19]
7102bc33d4  cbz x8,0x7102bc2310
7102bc33d8  add x0,x8,#0x108
7102bc33dc  strb wzr,[x8, #0x110]
7102bc33e0  bl 0x71025e9d50
7102bc33e4  ldr x8,[x19]
7102bc33e8  cbz x8,0x7102bc387c
7102bc33ec  ldrb w9,[x8, #0xe0]
7102bc33f0  cbz w9,0x7102bc3400
7102bc33f4  ldr x9,[x8, #0xc8]
7102bc33f8  cbz x9,0x7102bc3400
7102bc33fc  strh w20,[x9, #0x30]
7102bc3400  ldr x9,[x8, #0xd8]
7102bc3404  fmov s2,0x3f800000
7102bc3408  cbz x9,0x7102bc3414
7102bc340c  mov w10,#0x1
7102bc3410  strb w10,[x9, #0x21]
7102bc3414  ldrb w9,[x8, #0xe0]
7102bc3418  cbz w9,0x7102bc2310
7102bc341c  ldr x8,[x8, #0xb0]
7102bc3420  strb wzr,[x8, #0x10]
7102bc3424  b 0x7102bc2310
7102bc3428  ldr q0,[sp, #0x30]
7102bc342c  stur q0,[x29, #-0xd0]
7102bc3430  ldr q0,[sp, #0x60]
7102bc3434  stur q0,[x29, #-0xc0]
7102bc3438  ldr q0,[sp, #0x20]
7102bc343c  adrp x8,0x710446a000
7102bc3440  fmov s7,0x3f800000
7102bc3444  stur q0,[x29, #-0xb0]
7102bc3448  ldr q0,[x8, #0x350]
7102bc344c  stur q0,[x29, #-0xa0]
7102bc3450  ldr x8,[x23, #0xa70]
7102bc3454  ldr x19,[x8, #0x70]
7102bc3458  cbz x19,0x7102bc354c
7102bc345c  add x0,x19,#0x108
7102bc3460  mov w8,#0x1
7102bc3464  strb w8,[x19, #0x110]
7102bc3468  bl 0x71025e9d50
7102bc346c  ldr x8,[x19, #0xd8]
7102bc3470  cbz x8,0x7102bc3478
7102bc3474  strb wzr,[x8, #0x21]
7102bc3478  ldr x8,[x19, #0xd8]
7102bc347c  cbz x8,0x7102bc3484
7102bc3480  strb wzr,[x8, #0x22]
7102bc3484  adrp x8,0x7104473000
7102bc3488  ldr s0,[x8, #0x81c]
7102bc348c  ldr x0,[x19, #0xd8]
7102bc3490  mov w1,#0x1
7102bc3494  bl 0x71025ee450
7102bc3498  ldr q0,[sp, #0x30]
7102bc349c  stur q0,[x29, #-0xd0]
7102bc34a0  ldr q0,[sp, #0x60]
7102bc34a4  stur q0,[x29, #-0xc0]
7102bc34a8  ldr q0,[sp, #0x20]
7102bc34ac  adrp x8,0x710446a000
7102bc34b0  sub x1,x29,#0xd0
7102bc34b4  stur q0,[x29, #-0xb0]
7102bc34b8  ldr q0,[x8, #0x350]
7102bc34bc  stur q0,[x29, #-0xa0]
7102bc34c0  ldr x0,[x19, #0x90]
7102bc34c4  ldr x8,[x0]
7102bc34c8  ldr x8,[x8, #0x148]
7102bc34cc  blr x8
7102bc34d0  ldr x19,[x19, #0xd8]
7102bc34d4  fmov s7,0x3f800000
7102bc34d8  cbz x19,0x7102bc3570
7102bc34dc  ldur x8,[x29, #-0xb8]
7102bc34e0  str x8,[sp, #0x108]
7102bc34e4  ldur x8,[x29, #-0xc0]
7102bc34e8  str x8,[sp, #0x100]
7102bc34ec  ldur x8,[x29, #-0xc8]
7102bc34f0  str x8,[sp, #0xf8]
7102bc34f4  ldur x8,[x29, #-0xd0]
7102bc34f8  str x8,[sp, #0xf0]
7102bc34fc  ldur x8,[x29, #-0x98]
7102bc3500  str x8,[sp, #0x128]
7102bc3504  ldur x8,[x29, #-0xa0]
7102bc3508  str x8,[sp, #0x120]
7102bc350c  ldur x8,[x29, #-0xa8]
7102bc3510  str x8,[sp, #0x118]
7102bc3514  ldur x8,[x29, #-0xb0]
7102bc3518  str x8,[sp, #0x110]
7102bc351c  ldr x8,[x19, #0x8]
7102bc3520  ldrb w9,[x8, #0xa8]
7102bc3524  cbz w9,0x7102bc3540
7102bc3528  ldr x0,[x8, #0x48]
7102bc352c  ldr x8,[x0]
7102bc3530  ldr x8,[x8, #0x20]
7102bc3534  add x1,sp,#0xf0
7102bc3538  blr x8
7102bc353c  fmov s7,0x3f800000
7102bc3540  mov w8,#0x1
7102bc3544  strb w8,[x19, #0x20]
7102bc3548  b 0x7102bc3570
7102bc354c  ldr q0,[sp, #0x30]
7102bc3550  stur q0,[x29, #-0xd0]
7102bc3554  ldr q0,[sp, #0x60]
7102bc3558  stur q0,[x29, #-0xc0]
7102bc355c  ldr q0,[sp, #0x20]
7102bc3560  adrp x8,0x710446a000
7102bc3564  stur q0,[x29, #-0xb0]
7102bc3568  ldr q0,[x8, #0x350]
7102bc356c  stur q0,[x29, #-0xa0]
7102bc3570  ldr x19,[x23, #0x9e8]
7102bc3574  ldr x9,[x19, #0x70]
7102bc3578  ldp x8,x9,[x9]
7102bc357c  cmp x8,x9
7102bc3580  b.eq 0x7102bc36a8
7102bc3584  ldr q0,[x19, #0x30]
7102bc3588  mov v1.16B,v0.16B
7102bc358c  movi d2,#0x0
7102bc3590  mov v1.D[0x1],v2.D[0x0]
7102bc3594  adrp x11,0x7104472000
7102bc3598  dup s2,v0.S[0x1]
7102bc359c  ldr s3,[x11, #0x970]
7102bc35a0  fmov s4,0xbf800000
7102bc35a4  mov w10,#0x1
7102bc35a8  ldr x11,[x8]
7102bc35ac  ldr x13,[x11, #0x8]
7102bc35b0  ldrb w14,[x13, #0xe7]
7102bc35b4  ldrb w13,[x13, #0xe8]
7102bc35b8  ldrb w12,[x11, #0x128]
7102bc35bc  cmp w12,#0x0
7102bc35c0  orr w13,w13,w14
7102bc35c4  and w12,w13,#0xff
7102bc35c8  ccmp w12,#0x0,#0x0,ne
7102bc35cc  b.eq 0x7102bc35d8
7102bc35d0  strb w10,[x11, #0x129]
7102bc35d4  b 0x7102bc35fc
7102bc35d8  ldr q5,[x11, #0x10]
7102bc35dc  fabd s6,s5,s0
7102bc35e0  fcmp s6,s3
7102bc35e4  b.gt 0x7102bc35f8
7102bc35e8  dup s5,v5.S[0x1]
7102bc35ec  fabd s5,s5,s2
7102bc35f0  fcmp s5,s3
7102bc35f4  b.le 0x7102bc3600
7102bc35f8  strb w10,[x11, #0x12a]
7102bc35fc  str q1,[x11, #0x10]
7102bc3600  ldr s5,[x11, #0x30]
7102bc3604  fabs s5,s5
7102bc3608  fcmp s5,s3
7102bc360c  b.mi 0x7102bc3618
7102bc3610  str wzr,[x11, #0x30]
7102bc3614  strb w10,[x11, #0x129]
7102bc3618  ldr q5,[x11, #0x50]
7102bc361c  fadd s6,s5,s4
7102bc3620  fabs s6,s6
7102bc3624  fcmp s6,s3
7102bc3628  b.mi 0x7102bc3638
7102bc362c  mov v5.S[0x0],v7.S[0x0]
7102bc3630  strb w10,[x11, #0x129]
7102bc3634  str q5,[x11, #0x50]
7102bc3638  dup s6,v5.S[0x1]
7102bc363c  fadd s6,s6,s4
7102bc3640  fabs s6,s6
7102bc3644  fcmp s6,s3
7102bc3648  b.mi 0x7102bc3658
7102bc364c  mov v5.S[0x1],v7.S[0x0]
7102bc3650  strb w10,[x11, #0x129]
7102bc3654  str q5,[x11, #0x50]
7102bc3658  add x8,x8,#0x8
7102bc365c  cmp x9,x8
7102bc3660  b.ne 0x7102bc35a8
7102bc3664  ldr x8,[x19, #0x70]
7102bc3668  ldp x20,x21,[x8]
7102bc366c  cmp x20,x21
7102bc3670  b.eq 0x7102bc36a8
7102bc3674  mov w22,#0x1
7102bc3678  ldr x8,[x20]
7102bc367c  ldr x9,[x8, #0x8]
7102bc3680  strb w22,[x8, #0x128]
7102bc3684  cbz x9,0x7102bc369c
7102bc3688  mov x10,#-0x1
7102bc368c  str x10,[x9, #0xd8]
7102bc3690  ldr x0,[x8, #0x8]
7102bc3694  mov w1,wzr
7102bc3698  bl 0x7100532bc0
7102bc369c  add x20,x20,#0x8
7102bc36a0  cmp x21,x20
7102bc36a4  b.ne 0x7102bc3678
7102bc36a8  ldr x8,[x19, #0x78]
7102bc36ac  ldp x0,x1,[x8]
7102bc36b0  mov w2,#0x1
7102bc36b4  bl 0x71025f4d80
7102bc36b8  ldrb w8,[x23, #0xb00]
7102bc36bc  cbz w8,0x7102bc36cc
7102bc36c0  ldrb w8,[x23, #0xb01]
7102bc36c4  cbnz w8,0x7102bc3794
7102bc36c8  b 0x7102bc3734
7102bc36cc  ldr x8,[x23, #0xaf0]
7102bc36d0  ldr x8,[x8, #0x8]
7102bc36d4  str wzr,[x8, #0x10]
7102bc36d8  ldr x9,[x23, #0x8c8]
7102bc36dc  ldr x8,[x23, #0x8c0]
7102bc36e0  sub x9,x9,x8
7102bc36e4  orr x10,xzr,#-0x5555555555555556
7102bc36e8  movk x10,#0xaaab
7102bc36ec  asr x9,x9,#0x2
7102bc36f0  mul x9,x9,x10
7102bc36f4  cmp x9,#0x4
7102bc36f8  b.ls 0x7102bc3a64
7102bc36fc  movi v0.2D,#0x0
7102bc3700  add x10,x8,#0x30
7102bc3704  ldr x9,[x23, #0xaf0]
7102bc3708  ld1 {v0.S}[0],[x10]
7102bc370c  add x10,x8,#0x34
7102bc3710  add x8,x8,#0x38
7102bc3714  ld1 {v0.S}[1],[x10]
7102bc3718  ld1 {v0.S}[2],[x8]
7102bc371c  ldr x8,[x9, #0x8]
7102bc3720  str q0,[x8, #0x30]
7102bc3724  mov w8,#0x1
7102bc3728  strb w8,[x23, #0xb00]
7102bc372c  ldrb w8,[x23, #0xb01]
7102bc3730  cbnz w8,0x7102bc3794
7102bc3734  ldr x8,[x23, #0xaf8]
7102bc3738  ldr x8,[x8, #0x8]
7102bc373c  str wzr,[x8, #0x10]
7102bc3740  ldr x9,[x23, #0x8c8]
7102bc3744  ldr x8,[x23, #0x8c0]
7102bc3748  sub x9,x9,x8
7102bc374c  orr x10,xzr,#-0x5555555555555556
7102bc3750  movk x10,#0xaaab
7102bc3754  asr x9,x9,#0x2
7102bc3758  mul x9,x9,x10
7102bc375c  cmp x9,#0x5
7102bc3760  b.ls 0x7102bc3a64
7102bc3764  movi v0.2D,#0x0
7102bc3768  add x10,x8,#0x3c
7102bc376c  ldr x9,[x23, #0xaf8]
7102bc3770  ld1 {v0.S}[0],[x10]
7102bc3774  add x10,x8,#0x40
7102bc3778  add x8,x8,#0x44
7102bc377c  ld1 {v0.S}[1],[x10]
7102bc3780  ld1 {v0.S}[2],[x8]
7102bc3784  ldr x8,[x9, #0x8]
7102bc3788  str q0,[x8, #0x30]
7102bc378c  mov w8,#0x1
7102bc3790  strb w8,[x23, #0xb01]
7102bc3794  ldr x19,[x23, #0x9e8]
7102bc3798  mov w8,#0x100
7102bc379c  strh w8,[x19, #0x58]
7102bc37a0  ldr x8,[x19, #0x10]
7102bc37a4  str xzr,[x19, #0x50]
7102bc37a8  cbz x8,0x7102bc38b8
7102bc37ac  add x0,x8,#0x108
7102bc37b0  mov w9,#0x1
7102bc37b4  strb w9,[x8, #0x110]
7102bc37b8  bl 0x71025e9d50
7102bc37bc  ldr x8,[x19, #0x10]
7102bc37c0  cbz x8,0x7102bc38b8
7102bc37c4  ldr x0,[x8, #0xd8]
7102bc37c8  mov v0.16B,v8.16B
7102bc37cc  mov w1,#0x1
7102bc37d0  bl 0x71025ee450
7102bc37d4  ldr x8,[x19, #0x10]
7102bc37d8  cbz x8,0x7102bc38b8
7102bc37dc  ldrb w9,[x8, #0xe0]
7102bc37e0  cbz w9,0x7102bc3888
7102bc37e4  ldr x20,[x8, #0xc8]
7102bc37e8  cbz x20,0x7102bc3888
7102bc37ec  ldp x21,x22,[x20, #0x18]
7102bc37f0  cmp x21,x22
7102bc37f4  str wzr,[x20, #0x3c]
7102bc37f8  b.eq 0x7102bc3884
7102bc37fc  fmov s8,wzr
7102bc3800  ldr x0,[x21], #0x8
7102bc3804  ldr x8,[x0]
7102bc3808  ldr x8,[x8, #0x18]
7102bc380c  mov v0.16B,v8.16B
7102bc3810  mov w1,wzr
7102bc3814  blr x8
7102bc3818  cmp x22,x21
7102bc381c  b.ne 0x7102bc3800
7102bc3820  ldp x21,x22,[x20, #0x18]
7102bc3824  cmp x21,x22
7102bc3828  str wzr,[x20, #0x40]
7102bc382c  b.eq 0x7102bc3888
7102bc3830  fmov s8,wzr
7102bc3834  ldr x0,[x21], #0x8
7102bc3838  ldr x8,[x0]
7102bc383c  ldr x8,[x8, #0x18]
7102bc3840  mov v0.16B,v8.16B
7102bc3844  mov w1,#0x1
7102bc3848  blr x8
7102bc384c  cmp x22,x21
7102bc3850  b.ne 0x7102bc3834
7102bc3854  ldp x21,x20,[x20, #0x18]
7102bc3858  cmp x21,x20
7102bc385c  b.eq 0x7102bc3888
7102bc3860  ldr x0,[x21], #0x8
7102bc3864  ldr x8,[x0]
7102bc3868  ldr x8,[x8, #0x38]
7102bc386c  blr x8
7102bc3870  cmp x20,x21
7102bc3874  b.ne 0x7102bc3860
7102bc3878  b 0x7102bc3888
7102bc387c  fmov s2,0x3f800000
7102bc3880  b 0x7102bc2310
7102bc3884  str wzr,[x20, #0x40]
7102bc3888  ldr x8,[x19, #0x10]
7102bc388c  cbz x8,0x7102bc38b8
7102bc3890  ldrb w9,[x8, #0xe0]
7102bc3894  cbz w9,0x7102bc38ac
7102bc3898  ldr x9,[x8, #0xc8]
7102bc389c  cbz x9,0x7102bc38ac
7102bc38a0  strh w24,[x9, #0x30]
7102bc38a4  ldr x8,[x19, #0x10]
7102bc38a8  cbz x8,0x7102bc38b8
7102bc38ac  ldr x8,[x8, #0xd8]
7102bc38b0  cbz x8,0x7102bc38b8
7102bc38b4  strb wzr,[x8, #0x21]
7102bc38b8  mov w8,#0x1
7102bc38bc  str w8,[x23, #0xae4]
7102bc38c0  strb w8,[x23, #0xbc2]
7102bc38c4  ldr w8,[x23, #0x9fc]
7102bc38c8  cmp w8,#0x3
7102bc38cc  b.cs 0x7102bc3a58
7102bc38d0  sxtw x9,w8
7102bc38d4  add x10,x23,x9, LSL #0x3
7102bc38d8  ldr x10,[x10, #0xa50]
7102bc38dc  cbz x10,0x7102bc38f8
7102bc38e0  add x0,x10,#0x108
7102bc38e4  mov w8,#0x1
7102bc38e8  strb w8,[x10, #0x110]
7102bc38ec  bl 0x71025e9d50
7102bc38f0  ldr w8,[x23, #0x9fc]
7102bc38f4  sxtw x9,w8
7102bc38f8  ldr x10,[x23, #0x938]
7102bc38fc  ldr x11,[x23, #0x930]
7102bc3900  sub x10,x10,x11
7102bc3904  asr x10,x10,#0x2
7102bc3908  cmp x10,x9
7102bc390c  b.ls 0x7102bc3a5c
7102bc3910  cmp w8,#0x3
7102bc3914  str wzr,[x23, #0xa80]
7102bc3918  b.cs 0x7102bc3a58
7102bc391c  adrp x8,0x710511c000
7102bc3920  add x8,x8,#0xb8
7102bc3924  lsl x19,x9,#0x3
7102bc3928  ldr x0,[x23, #0x318]
7102bc392c  ldr x1,[x8, x19, LSL #0x0]
7102bc3930  bl 0x7102633800
7102bc3934  adrp x8,0x710511c000
7102bc3938  add x8,x8,#0xd0
7102bc393c  ldr x0,[x23, #0x318]
7102bc3940  ldr x1,[x8, x19, LSL #0x0]
7102bc3944  mov w2,#0x1
7102bc3948  bl 0x7102633b90
7102bc394c  ldrsw x8,[x23, #0x9fc]
7102bc3950  cmp w8,#0x3
7102bc3954  b.cs 0x7102bc3a58
7102bc3958  adrp x9,0x710511c000
7102bc395c  add x9,x9,#0x88
7102bc3960  lsl x19,x8,#0x3
7102bc3964  ldr x0,[x23, #0x318]
7102bc3968  ldr x1,[x9, x19, LSL #0x0]
7102bc396c  mov w2,#0x1
7102bc3970  bl 0x7102633a10
7102bc3974  ldr x8,[x23, #0x318]
7102bc3978  adrp x9,0x710511c000
7102bc397c  add x9,x9,#0xa0
7102bc3980  ldr x1,[x9, x19, LSL #0x0]
7102bc3984  ldr x0,[x8, #0x10]
7102bc3988  bl 0x71025f7350
7102bc398c  ldr w1,[x23, #0x9fc]
7102bc3990  mov x0,x23
7102bc3994  bl 0x7102bca9f0
7102bc3998  ldr w8,[x23, #0x9fc]
7102bc399c  cbnz w8,0x7102bc39a8
7102bc39a0  ldr x0,[x23, #0x9b8]
7102bc39a4  bl 0x7102bcdca0
7102bc39a8  add sp,sp,#0x280
7102bc39ac  ldp d9,d8,[sp, #0x10]
7102bc39b0  ldp x29,x30,[sp, #0x70]
7102bc39b4  ldp x20,x19,[sp, #0x60]
7102bc39b8  ldp x22,x21,[sp, #0x50]
7102bc39bc  ldp x24,x23,[sp, #0x40]
7102bc39c0  ldp x26,x25,[sp, #0x30]
7102bc39c4  ldp x28,x27,[sp, #0x20]
7102bc39c8  ldr d10,[sp], #0x80
7102bc39cc  ret
7102bc39d0  adrp x0,0x7105314000
7102bc39d4  add x0,x0,#0x4d8
7102bc39d8  bl 0x71039c06b0
7102bc39dc  cbz w0,0x7102bc12f0
7102bc39e0  bl 0x7101764000
7102bc39e4  adrp x0,0x7101763000
7102bc39e8  add x0,x0,#0xc40
7102bc39ec  adrp x1,0x71052c5000
7102bc39f0  add x1,x1,#0x180
7102bc39f4  adrp x2,0x7104f17000
7102bc39f8  add x2,x2,#0x0
7102bc39fc  bl 0x71000001c0
7102bc3a00  adrp x0,0x7105314000
7102bc3a04  add x0,x0,#0x4d8
7102bc3a08  bl 0x71039c06c0
7102bc3a0c  b 0x7102bc12f0
7102bc3a10  adrp x0,0x7105314000
7102bc3a14  add x0,x0,#0x4d8
7102bc3a18  bl 0x71039c06b0
7102bc3a1c  cbz w0,0x7102bc1304
7102bc3a20  bl 0x7101764000
7102bc3a24  adrp x0,0x7101763000
7102bc3a28  add x0,x0,#0xc40
7102bc3a2c  adrp x1,0x71052c5000
7102bc3a30  add x1,x1,#0x180
7102bc3a34  adrp x2,0x7104f17000
7102bc3a38  add x2,x2,#0x0
7102bc3a3c  bl 0x71000001c0
7102bc3a40  adrp x0,0x7105314000
7102bc3a44  add x0,x0,#0x4d8
7102bc3a48  bl 0x71039c06c0
7102bc3a4c  b 0x7102bc1304
7102bc3a50  add x0,x8,#0x1a8
7102bc3a54  bl 0x71039c1330
7102bc3a58  bl 0x71039c2650
7102bc3a5c  add x0,x23,#0x930
7102bc3a60  bl 0x71039c1330
7102bc3a64  add x0,x23,#0x8c0
7102bc3a68  bl 0x71039c1330
