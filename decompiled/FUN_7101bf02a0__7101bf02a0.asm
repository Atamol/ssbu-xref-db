// addr:      7101bf02a0
// offset:    0x1bf02a0
// name:      FUN_7101bf02a0
// mangled:   
// size:      10668

7101bf02a0  stp x28,x27,[sp, #-0x60]!
7101bf02a4  stp x26,x25,[sp, #0x10]
7101bf02a8  stp x24,x23,[sp, #0x20]
7101bf02ac  stp x22,x21,[sp, #0x30]
7101bf02b0  stp x20,x19,[sp, #0x40]
7101bf02b4  stp x29,x30,[sp, #0x50]
7101bf02b8  add x29,sp,#0x50
7101bf02bc  sub sp,sp,#0x340
7101bf02c0  adrp x8,0x71050ac000
7101bf02c4  add x8,x8,#0x8a0
7101bf02c8  strb wzr,[x0, #0x58]
7101bf02cc  stp x8,xzr,[x0]
7101bf02d0  orr x8,xzr,#0x1ffffffff
7101bf02d4  stp xzr,x8,[x0, #0x60]
7101bf02d8  mov w8,#0x1
7101bf02dc  stp xzr,xzr,[x0, #0x10]
7101bf02e0  stp xzr,xzr,[x0, #0x48]
7101bf02e4  stp x0,x1,[sp, #0x50]
7101bf02e8  str x1,[x0, #0x78]
7101bf02ec  mov w1,#0x178
7101bf02f0  strb w8,[x0, #0x70]
7101bf02f4  mov w0,#0x10
7101bf02f8  bl 0x710392e290
7101bf02fc  mov x23,x0
7101bf0300  cbnz x0,0x7101bf034c
7101bf0304  adrp x8,0x7105332000
7101bf0308  ldr x0,[x8, #0xf00]
7101bf030c  cbz x0,0x7101bf0348
7101bf0310  mov w8,#0x178
7101bf0314  str wzr,[sp, #0xa8]
7101bf0318  add x1,sp,#0xa8
7101bf031c  str x8,[sp, #0x1b8]
7101bf0320  ldr x8,[x0]
7101bf0324  ldr x8,[x8, #0x30]
7101bf0328  add x2,sp,#0x1b8
7101bf032c  blr x8
7101bf0330  tbz w0,#0x0,0x7101bf0348
7101bf0334  mov w1,#0x178
7101bf0338  mov w0,#0x10
7101bf033c  bl 0x710392e290
7101bf0340  mov x23,x0
7101bf0344  cbnz x0,0x7101bf034c
7101bf0348  mov x23,xzr
7101bf034c  adrp x8,0x71050ac000
7101bf0350  add x8,x8,#0x8d8
7101bf0354  adrp x9,0x71050ac000
7101bf0358  add x9,x9,#0x5e8
7101bf035c  mov x10,x23
7101bf0360  str x8,[x23]
7101bf0364  mov w8,#0x1000
7101bf0368  stp xzr,xzr,[x23, #0x8]
7101bf036c  str x9,[x10, #0x18]!
7101bf0370  str w8,[x23, #0x20]
7101bf0374  mov x8,x23
7101bf0378  mov x22,x23
7101bf037c  str xzr,[x8, #0x28]!
7101bf0380  str x8,[sp, #0x28]
7101bf0384  mov x8,x23
7101bf0388  str xzr,[x23, #0x50]
7101bf038c  stp xzr,xzr,[x23, #0x30]
7101bf0390  mov x28,x23
7101bf0394  mov x21,x23
7101bf0398  add x19,sp,#0x1b8
7101bf039c  mov w26,#0x4240
7101bf03a0  movk w26,#0xf, LSL #16
7101bf03a4  str xzr,[x8, #0x48]!
7101bf03a8  str x8,[x23, #0x40]
7101bf03ac  mov x8,x23
7101bf03b0  str xzr,[x8, #0x58]!
7101bf03b4  stp x10,x8,[sp, #0x60]
7101bf03b8  mov x8,x23
7101bf03bc  str xzr,[x8, #0x90]!
7101bf03c0  str x8,[sp, #0x38]
7101bf03c4  mov x8,x23
7101bf03c8  stur xzr,[x23, #0xee]
7101bf03cc  str xzr,[x8, #0xc0]!
7101bf03d0  str x8,[sp, #0x40]
7101bf03d4  mov x8,x23
7101bf03d8  str xzr,[x8, #0xd8]!
7101bf03dc  str xzr,[x22, #0x60]!
7101bf03e0  str xzr,[x28, #0x78]!
7101bf03e4  str xzr,[x21, #0xa8]!
7101bf03e8  str x8,[sp, #0x30]
7101bf03ec  adrp x8,0x71052c5000
7101bf03f0  stp xzr,xzr,[x23, #0xe0]
7101bf03f4  stp xzr,xzr,[x23, #0xc8]
7101bf03f8  stp xzr,xzr,[x23, #0xb0]
7101bf03fc  stp xzr,xzr,[x23, #0x98]
7101bf0400  stp xzr,xzr,[x23, #0x80]
7101bf0404  stp xzr,xzr,[x23, #0x68]
7101bf0408  ldr x8,[x8, #0x168]
7101bf040c  str xzr,[sp, #0x1b8]
7101bf0410  str x8,[sp, #0xa0]
7101bf0414  str x23,[sp, #0x90]
7101bf0418  stp xzr,xzr,[sp, #0x1c0]
7101bf041c  ldr x8,[x8]
7101bf0420  add x9,x8,#0xa8
7101bf0424  cmp x9,x19
7101bf0428  b.eq 0x7101bf0464
7101bf042c  ldp x1,x2,[x8, #0xa8]
7101bf0430  add x0,sp,#0x1b8
7101bf0434  bl 0x710075f050
7101bf0438  ldp x20,x8,[sp, #0x1b8]
7101bf043c  add x24,x19,#0x8
7101bf0440  cmp x20,x8
7101bf0444  str x8,[sp, #0x98]
7101bf0448  b.eq 0x7101bf0468
7101bf044c  ldr x19,[sp, #0xa0]
7101bf0450  add x8,x23,#0x80
7101bf0454  str x24,[sp, #0x20]
7101bf0458  str x21,[sp, #0x48]
7101bf045c  stp x28,x8,[sp, #0x78]
7101bf0460  b 0x7101bf0494
7101bf0464  add x24,x19,#0x8
7101bf0468  ldr x19,[sp, #0xa0]
7101bf046c  add x8,x23,#0x80
7101bf0470  b 0x7101bf07e4
7101bf0474  adrp x0,0x71052b9000
7101bf0478  add x0,x0,#0x2e0
7101bf047c  bl 0x71039c06b0
7101bf0480  cbz w0,0x7101bf05b8
7101bf0484  adrp x0,0x71052b9000
7101bf0488  add x0,x0,#0x2e0
7101bf048c  bl 0x71039c06c0
7101bf0490  b 0x7101bf05b8
7101bf0494  ldr x1,[x20]
7101bf0498  ldr x0,[x19]
7101bf049c  bl 0x7101761580
7101bf04a0  cmp w0,#0x0
7101bf04a4  csinc w8,w0,wzr,ne
7101bf04a8  sxtw x24,w8
7101bf04ac  sxtw x21,w0
7101bf04b0  mov w0,#0x10
7101bf04b4  mov x1,x24
7101bf04b8  bl 0x710392e290
7101bf04bc  mov x25,x0
7101bf04c0  cbnz x0,0x7101bf0508
7101bf04c4  adrp x8,0x7105332000
7101bf04c8  ldr x0,[x8, #0xf00]
7101bf04cc  cbz x0,0x7101bf0504
7101bf04d0  stur wzr,[x29, #-0x80]
7101bf04d4  str x24,[sp, #0xa8]
7101bf04d8  ldr x8,[x0]
7101bf04dc  ldr x8,[x8, #0x30]
7101bf04e0  sub x1,x29,#0x80
7101bf04e4  add x2,sp,#0xa8
7101bf04e8  blr x8
7101bf04ec  tbz w0,#0x0,0x7101bf0504
7101bf04f0  mov w0,#0x10
7101bf04f4  mov x1,x24
7101bf04f8  bl 0x710392e290
7101bf04fc  mov x25,x0
7101bf0500  cbnz x0,0x7101bf0508
7101bf0504  mov x25,xzr
7101bf0508  mov x0,x25
7101bf050c  mov w1,wzr
7101bf0510  mov x2,x21
7101bf0514  bl 0x71039c02a0
7101bf0518  stur x25,[x29, #-0x80]
7101bf051c  ldr x1,[x20]
7101bf0520  ldr x0,[x19]
7101bf0524  mov x2,x25
7101bf0528  mov w3,w21
7101bf052c  mov w4,wzr
7101bf0530  bl 0x7101761830
7101bf0534  ldr x24,[x20]
7101bf0538  ldr x27,[x19]
7101bf053c  b 0x7101bf0548
7101bf0540  mov x0,x26
7101bf0544  bl 0x71039c0d80
7101bf0548  mov x0,x27
7101bf054c  mov x1,x24
7101bf0550  bl 0x7101762400
7101bf0554  tbz w0,#0x0,0x7101bf0540
7101bf0558  cbz x25,0x7101bf07b8
7101bf055c  ldr w8,[x25]
7101bf0560  cmp x8,x21
7101bf0564  b.ne 0x7101bf07b8
7101bf0568  adrp x9,0x710523d000
7101bf056c  ldrsw x9,[x9, #0xc]
7101bf0570  add x10,x25,x9, LSL #0x3
7101bf0574  ldp w9,w1,[x10, #0x48]
7101bf0578  add w10,w9,w1
7101bf057c  sub w10,w10,#0x1
7101bf0580  cmp w10,w8
7101bf0584  b.cs 0x7101bf07b8
7101bf0588  ldr x2,[x25, #0x18]
7101bf058c  add x0,x25,x9
7101bf0590  bl 0x71033798d0
7101bf0594  tbz w0,#0x0,0x7101bf07b8
7101bf0598  adrp x8,0x7105314000
7101bf059c  ldr x8,[x8, #0x510]
7101bf05a0  ldr x8,[x8]
7101bf05a4  ldr x19,[x8, #0x78]
7101bf05a8  adrp x8,0x71052b9000
7101bf05ac  add x8,x8,#0x2e0
7101bf05b0  ldarb w8,[x8]
7101bf05b4  tbz w8,#0x0,0x7101bf0474
7101bf05b8  ldr w8,[x25, #0xc]
7101bf05bc  cmp w8,#0x1f
7101bf05c0  b.hi 0x7101bf07b8
7101bf05c4  ldr w8,[x25, #0x10]
7101bf05c8  cmp w8,#0x1
7101bf05cc  b.ne 0x7101bf05e8
7101bf05d0  ldr x8,[x19]
7101bf05d4  ldr x8,[x8]
7101bf05d8  mov w9,#0xe05d
7101bf05dc  movk w9,#0x5, LSL #16
7101bf05e0  ldrb w8,[x8, x9, LSL ]
7101bf05e4  cbz w8,0x7101bf07b8
7101bf05e8  add x0,sp,#0xa8
7101bf05ec  str x25,[sp, #0xa8]
7101bf05f0  bl 0x7101763880
7101bf05f4  tbz w0,#0x0,0x7101bf07b8
7101bf05f8  ldr w8,[x25, #0x40]
7101bf05fc  str x22,[sp, #0x18]
7101bf0600  cbz w8,0x7101bf077c
7101bf0604  mov x19,xzr
7101bf0608  mov x22,x25
7101bf060c  b 0x7101bf0618
7101bf0610  mov x28,xzr
7101bf0614  b 0x7101bf0724
7101bf0618  cmp x19,w8, UXTW 
7101bf061c  b.cs 0x7101bf063c
7101bf0620  ldr w8,[x25, #0x44]
7101bf0624  ldr w10,[x25]
7101bf0628  sub w9,w8,#0x1
7101bf062c  add x8,x22,x8
7101bf0630  cmp w9,w10
7101bf0634  csel x12,xzr,x8,cs
7101bf0638  b 0x7101bf0640
7101bf063c  mov x12,xzr
7101bf0640  ldp x9,x8,[x23, #0x80]
7101bf0644  cmp x9,x8
7101bf0648  b.cs 0x7101bf0664
7101bf064c  str x12,[x9]
7101bf0650  ldr x9,[sp, #0x80]
7101bf0654  ldr x8,[x9]
7101bf0658  add x8,x8,#0x8
7101bf065c  str x8,[x9]
7101bf0660  b 0x7101bf0768
7101bf0664  ldr x21,[x28]
7101bf0668  sub x24,x9,x21
7101bf066c  asr x23,x24,#0x3
7101bf0670  add x9,x23,#0x1
7101bf0674  lsr x10,x9,#0x3d
7101bf0678  cbnz x10,0x7101bf2c38
7101bf067c  sub x8,x8,x21
7101bf0680  asr x10,x8,#0x3
7101bf0684  orr x11,xzr,#0xffffffffffffffe
7101bf0688  cmp x10,x11
7101bf068c  b.hi 0x7101bf06b0
7101bf0690  asr x8,x8,#0x2
7101bf0694  cmp x8,x9
7101bf0698  csel x27,x9,x8,cc
7101bf069c  cbz x27,0x7101bf0610
7101bf06a0  lsr x8,x27,#0x3d
7101bf06a4  str x12,[sp, #0x88]
7101bf06a8  cbz x8,0x7101bf06b8
7101bf06ac  b 0x7101bf2c40
7101bf06b0  str x12,[sp, #0x88]
7101bf06b4  orr x27,xzr,#0x1fffffffffffffff
7101bf06b8  lsl x8,x27,#0x3
7101bf06bc  cmp x8,#0x0
7101bf06c0  csinc x1,x8,xzr,ne
7101bf06c4  mov w0,#0x10
7101bf06c8  str x1,[sp, #0x70]
7101bf06cc  bl 0x710392e290
7101bf06d0  mov x28,x0
7101bf06d4  cbnz x0,0x7101bf0720
7101bf06d8  adrp x8,0x7105332000
7101bf06dc  ldr x0,[x8, #0xf00]
7101bf06e0  cbz x0,0x7101bf071c
7101bf06e4  ldr x8,[sp, #0x70]
7101bf06e8  stur wzr,[x29, #-0x60]
7101bf06ec  sub x1,x29,#0x60
7101bf06f0  add x2,sp,#0xa8
7101bf06f4  str x8,[sp, #0xa8]
7101bf06f8  ldr x8,[x0]
7101bf06fc  ldr x8,[x8, #0x30]
7101bf0700  blr x8
7101bf0704  tbz w0,#0x0,0x7101bf071c
7101bf0708  ldr x1,[sp, #0x70]
7101bf070c  mov w0,#0x10
7101bf0710  bl 0x710392e290
7101bf0714  mov x28,x0
7101bf0718  cbnz x0,0x7101bf0720
7101bf071c  mov x28,xzr
7101bf0720  ldr x12,[sp, #0x88]
7101bf0724  add x23,x28,x23, LSL #0x3
7101bf0728  add x27,x28,x27, LSL #0x3
7101bf072c  cmp x24,#0x1
7101bf0730  str x12,[x23], #0x8
7101bf0734  b.lt 0x7101bf0748
7101bf0738  mov x0,x28
7101bf073c  mov x1,x21
7101bf0740  mov x2,x24
7101bf0744  bl 0x71039c00e0
7101bf0748  ldr x8,[sp, #0x90]
7101bf074c  stp x28,x23,[x8, #0x78]
7101bf0750  ldr x28,[sp, #0x78]
7101bf0754  mov x23,x8
7101bf0758  str x27,[x8, #0x88]
7101bf075c  cbz x21,0x7101bf0768
7101bf0760  mov x0,x21
7101bf0764  bl 0x710392eb40
7101bf0768  ldr w8,[x25, #0x40]
7101bf076c  add x19,x19,#0x1
7101bf0770  add x22,x22,#0x4c
7101bf0774  cmp x19,x8
7101bf0778  b.cc 0x7101bf0618
7101bf077c  ldp x8,x9,[x23, #0x68]
7101bf0780  cmp x8,x9
7101bf0784  b.cs 0x7101bf07a8
7101bf0788  ldur x9,[x29, #-0x80]
7101bf078c  stur xzr,[x29, #-0x80]
7101bf0790  str x9,[x8]
7101bf0794  ldr x8,[x23, #0x68]
7101bf0798  ldr x22,[sp, #0x18]
7101bf079c  add x8,x8,#0x8
7101bf07a0  str x8,[x23, #0x68]
7101bf07a4  b 0x7101bf07b8
7101bf07a8  ldr x22,[sp, #0x18]
7101bf07ac  sub x1,x29,#0x80
7101bf07b0  mov x0,x22
7101bf07b4  bl 0x7101be1cf0
7101bf07b8  ldur x0,[x29, #-0x80]
7101bf07bc  stur xzr,[x29, #-0x80]
7101bf07c0  cbz x0,0x7101bf07c8
7101bf07c4  bl 0x710392eb40
7101bf07c8  ldp x8,x19,[sp, #0x98]
7101bf07cc  add x20,x20,#0x8
7101bf07d0  cmp x20,x8
7101bf07d4  b.ne 0x7101bf0494
7101bf07d8  ldr x21,[sp, #0x48]
7101bf07dc  ldr x24,[sp, #0x20]
7101bf07e0  ldr x8,[sp, #0x80]
7101bf07e4  ldr x0,[x28]
7101bf07e8  ldr x1,[x8]
7101bf07ec  bl 0x7101be16e0
7101bf07f0  ldr x0,[sp, #0x1b8]
7101bf07f4  cbz x0,0x7101bf0800
7101bf07f8  str x0,[x24]
7101bf07fc  bl 0x710392eb40
7101bf0800  stp xzr,xzr,[x29, #-0x78]
7101bf0804  stur xzr,[x29, #-0x80]
7101bf0808  ldr x8,[x19]
7101bf080c  sub x19,x29,#0x80
7101bf0810  add x9,x8,#0x228
7101bf0814  cmp x9,x19
7101bf0818  b.eq 0x7101bf089c
7101bf081c  ldr x1,[x8, #0x228]
7101bf0820  ldr x2,[x8, #0x230]
7101bf0824  sub x0,x29,#0x80
7101bf0828  bl 0x710075f050
7101bf082c  ldp x27,x28,[x29, #-0x80]
7101bf0830  add x20,x19,#0x8
7101bf0834  cmp x27,x28
7101bf0838  b.eq 0x7101bf08a0
7101bf083c  add x9,sp,#0x1b8
7101bf0840  add x8,x9,#0x10
7101bf0844  str x8,[sp, #0x10]
7101bf0848  add x8,x9,#0x28
7101bf084c  stp x8,x20,[sp, #0x80]
7101bf0850  add x8,x9,#0x48
7101bf0854  str x8,[sp, #0x78]
7101bf0858  add x8,x9,#0x8
7101bf085c  str x8,[sp, #0x70]
7101bf0860  add x8,x9,#0x20
7101bf0864  str x8,[sp, #0x8]
7101bf0868  add x8,x23,#0xb0
7101bf086c  str x8,[sp, #0x98]
7101bf0870  add x8,sp,#0xa8
7101bf0874  ldr x19,[sp, #0xa0]
7101bf0878  mov w25,#0x89
7101bf087c  add x8,x8,#0x8
7101bf0880  str x8,[sp, #0x20]
7101bf0884  add x8,x9,#0x51
7101bf0888  str x8,[sp]
7101bf088c  add x8,x9,#0x50
7101bf0890  str x21,[sp, #0x48]
7101bf0894  str x8,[sp, #0x18]
7101bf0898  b 0x7101bf0d9c
7101bf089c  add x20,x19,#0x8
7101bf08a0  ldr x19,[sp, #0xa0]
7101bf08a4  add x8,x23,#0xb0
7101bf08a8  b 0x7101bf0f74
7101bf08ac  ldr x8,[sp, #0x1b8]
7101bf08b0  cmp x19,x8
7101bf08b4  ldr x19,[sp, #0xa0]
7101bf08b8  b.gt 0x7101bf0f48
7101bf08bc  cmp x8,x21
7101bf08c0  b.gt 0x7101bf0f48
7101bf08c4  adrp x8,0x710523d000
7101bf08c8  add x8,x8,#0xa28
7101bf08cc  mov w0,#0x10
7101bf08d0  mov w1,#0x10
7101bf08d4  str x8,[sp, #0x1c8]
7101bf08d8  bl 0x710392e290
7101bf08dc  cbnz x0,0x7101bf0924
7101bf08e0  adrp x8,0x7105332000
7101bf08e4  ldr x0,[x8, #0xf00]
7101bf08e8  cbz x0,0x7101bf0920
7101bf08ec  mov w8,#0x10
7101bf08f0  stur wzr,[x29, #-0x60]
7101bf08f4  sub x1,x29,#0x60
7101bf08f8  str x8,[sp, #0xa8]
7101bf08fc  ldr x8,[x0]
7101bf0900  ldr x8,[x8, #0x30]
7101bf0904  add x2,sp,#0xa8
7101bf0908  blr x8
7101bf090c  tbz w0,#0x0,0x7101bf0920
7101bf0910  mov w0,#0x10
7101bf0914  mov w1,#0x10
7101bf0918  bl 0x710392e290
7101bf091c  cbnz x0,0x7101bf0924
7101bf0920  mov x0,xzr
7101bf0924  stp xzr,xzr,[x0]
7101bf0928  ldr x8,[sp, #0x78]
7101bf092c  str x0,[sp, #0x1d0]
7101bf0930  ldr x1,[sp, #0x70]
7101bf0934  add x0,sp,#0xa8
7101bf0938  strb wzr,[x8, #0x8]
7101bf093c  str xzr,[x8]
7101bf0940  ldr x8,[sp, #0x80]
7101bf0944  stp xzr,xzr,[x8]
7101bf0948  str wzr,[sp, #0x1b8]
7101bf094c  ldrh w8,[x20, #0x80]
7101bf0950  ldrb w9,[x20, #0x82]
7101bf0954  ldrb w10,[x20, #0x83]
7101bf0958  and x8,x8,#0xfff
7101bf095c  ldrb w11,[x20, #0x84]
7101bf0960  bfm x8,x9,#0x34,#0x3
7101bf0964  ldrb w12,[x20, #0x85]
7101bf0968  bfm x8,x10,#0x30,#0x4
7101bf096c  ldrb w13,[x20, #0x86]
7101bf0970  and w13,w13,#0x3f
7101bf0974  bfm x8,x11,#0x2b,#0x4
7101bf0978  bfm x8,x12,#0x26,#0x5
7101bf097c  bfm x8,x13,#0x20,#0x5
7101bf0980  orr x8,x8,#0x4000000000000000
7101bf0984  str x8,[sp, #0xa8]
7101bf0988  bl 0x71037419c0
7101bf098c  ldrsw x8,[x20, #0x13c]
7101bf0990  cbz w8,0x7101bf09b4
7101bf0994  ldr w9,[x20, #0x140]
7101bf0998  ldr w10,[x20]
7101bf099c  add w9,w8,w9
7101bf09a0  add x8,x20,x8
7101bf09a4  sub w9,w9,#0x1
7101bf09a8  cmp w9,w10
7101bf09ac  csel x1,x8,xzr,cc
7101bf09b0  b 0x7101bf09b8
7101bf09b4  mov x1,xzr
7101bf09b8  ldrsw x2,[x20, #0x140]
7101bf09bc  ldr x0,[sp, #0x1d0]
7101bf09c0  mov w3,#0x1
7101bf09c4  ldr x21,[sp, #0x20]
7101bf09c8  bl 0x710377b8b0
7101bf09cc  add x8,x20,#0x40
7101bf09d0  stp x8,xzr,[sp, #0x1d8]
7101bf09d4  ldrh w8,[x20, #0x20]
7101bf09d8  ldrb w9,[x20, #0x22]
7101bf09dc  ldrb w10,[x20, #0x23]
7101bf09e0  and x8,x8,#0xfff
7101bf09e4  ldrb w11,[x20, #0x24]
7101bf09e8  bfm x8,x9,#0x34,#0x3
7101bf09ec  ldrb w12,[x20, #0x25]
7101bf09f0  bfm x8,x10,#0x30,#0x4
7101bf09f4  ldrb w13,[x20, #0x26]
7101bf09f8  and w13,w13,#0x3f
7101bf09fc  bfm x8,x11,#0x2b,#0x4
7101bf0a00  bfm x8,x12,#0x26,#0x5
7101bf0a04  bfm x8,x13,#0x20,#0x5
7101bf0a08  orr x8,x8,#0x4000000000000000
7101bf0a0c  add x0,sp,#0x1b0
7101bf0a10  add x1,sp,#0xa8
7101bf0a14  str x8,[sp, #0x1b0]
7101bf0a18  bl 0x71037419c0
7101bf0a1c  add x19,sp,#0x1b8
7101bf0a20  tbz w0,#0x0,0x7101bf0a80
7101bf0a24  ldr x8,[sp, #0xa8]
7101bf0a28  sub x0,x29,#0x68
7101bf0a2c  sub x2,x29,#0x60
7101bf0a30  mov x1,xzr
7101bf0a34  stur x8,[x29, #-0x60]
7101bf0a38  bl 0x71039c6290
7101bf0a3c  cbnz w0,0x7101bf0a80
7101bf0a40  ldr x9,[sp, #0x1e0]
7101bf0a44  ldurh w8,[x29, #-0x68]
7101bf0a48  and x9,x9,#0x3fffffc000000000
7101bf0a4c  ldurb w10,[x29, #-0x66]
7101bf0a50  bfxil x9,x8,#0x0,#0xc
7101bf0a54  ldurb w8,[x29, #-0x65]
7101bf0a58  bfm x9,x10,#0x34,#0x3
7101bf0a5c  ldurb w10,[x29, #-0x62]
7101bf0a60  bfm x9,x8,#0x30,#0x4
7101bf0a64  ldurb w8,[x29, #-0x64]
7101bf0a68  bfm x9,x8,#0x2b,#0x4
7101bf0a6c  ldurb w8,[x29, #-0x63]
7101bf0a70  bfm x9,x8,#0x26,#0x5
7101bf0a74  bfm x9,x10,#0x20,#0x5
7101bf0a78  orr x8,x9,#-0x8000000000000000
7101bf0a7c  str x8,[sp, #0x1e0]
7101bf0a80  ldrh w8,[x20, #0x28]
7101bf0a84  ldrb w9,[x20, #0x2a]
7101bf0a88  add x0,sp,#0x1b0
7101bf0a8c  ldrb w10,[x20, #0x2b]
7101bf0a90  and x8,x8,#0xfff
7101bf0a94  ldrb w11,[x20, #0x2c]
7101bf0a98  bfm x8,x9,#0x34,#0x3
7101bf0a9c  ldrb w12,[x20, #0x2d]
7101bf0aa0  ldrb w13,[x20, #0x2e]
7101bf0aa4  and w13,w13,#0x3f
7101bf0aa8  str xzr,[sp, #0x1e8]
7101bf0aac  bfm x8,x10,#0x30,#0x4
7101bf0ab0  bfm x8,x11,#0x2b,#0x4
7101bf0ab4  bfm x8,x12,#0x26,#0x5
7101bf0ab8  bfm x8,x13,#0x20,#0x5
7101bf0abc  orr x8,x8,#0x4000000000000000
7101bf0ac0  add x1,sp,#0xa8
7101bf0ac4  str x8,[sp, #0x1b0]
7101bf0ac8  bl 0x71037419c0
7101bf0acc  tbz w0,#0x0,0x7101bf0b2c
7101bf0ad0  ldr x8,[sp, #0xa8]
7101bf0ad4  sub x0,x29,#0x68
7101bf0ad8  sub x2,x29,#0x60
7101bf0adc  mov x1,xzr
7101bf0ae0  stur x8,[x29, #-0x60]
7101bf0ae4  bl 0x71039c6290
7101bf0ae8  cbnz w0,0x7101bf0b2c
7101bf0aec  ldr x9,[sp, #0x1e8]
7101bf0af0  ldurh w8,[x29, #-0x68]
7101bf0af4  and x9,x9,#0x3fffffc000000000
7101bf0af8  ldurb w10,[x29, #-0x66]
7101bf0afc  bfxil x9,x8,#0x0,#0xc
7101bf0b00  ldurb w8,[x29, #-0x65]
7101bf0b04  bfm x9,x10,#0x34,#0x3
7101bf0b08  ldurb w10,[x29, #-0x62]
7101bf0b0c  bfm x9,x8,#0x30,#0x4
7101bf0b10  ldurb w8,[x29, #-0x64]
7101bf0b14  bfm x9,x8,#0x2b,#0x4
7101bf0b18  ldurb w8,[x29, #-0x63]
7101bf0b1c  bfm x9,x8,#0x26,#0x5
7101bf0b20  bfm x9,x10,#0x20,#0x5
7101bf0b24  orr x8,x9,#-0x8000000000000000
7101bf0b28  str x8,[sp, #0x1e8]
7101bf0b2c  add x8,x20,#0x8c
7101bf0b30  str x8,[sp, #0x1f0]
7101bf0b34  add x8,x20,#0xac
7101bf0b38  add x0,sp,#0xa8
7101bf0b3c  mov x1,x20
7101bf0b40  str x8,[sp, #0x1f8]
7101bf0b44  bl 0x7101763970
7101bf0b48  mov x8,xzr
7101bf0b4c  add x9,x21,x8
7101bf0b50  ldrb w11,[x9]
7101bf0b54  cbz w11,0x7101bf0b94
7101bf0b58  add x10,x19,x8
7101bf0b5c  strb w11,[x10, #0x50]
7101bf0b60  ldrb w11,[x9, #0x1]
7101bf0b64  cbz w11,0x7101bf0b88
7101bf0b68  ldrb w9,[x9, #0x2]
7101bf0b6c  strb w11,[x10, #0x51]
7101bf0b70  cbz w9,0x7101bf0b90
7101bf0b74  add x8,x8,#0x3
7101bf0b78  cmp w8,#0xff
7101bf0b7c  strb w9,[x10, #0x52]
7101bf0b80  b.cc 0x7101bf0b4c
7101bf0b84  b 0x7101bf0b94
7101bf0b88  add x8,x8,#0x1
7101bf0b8c  b 0x7101bf0b94
7101bf0b90  add x8,x8,#0x2
7101bf0b94  add x9,x19,w8, UXTW 
7101bf0b98  strb wzr,[x9, #0x50]
7101bf0b9c  ldr x21,[sp, #0x18]
7101bf0ba0  str w8,[sp, #0x204]
7101bf0ba4  ldrb w8,[sp, #0x208]
7101bf0ba8  mov w9,#0x9dc5
7101bf0bac  movk w9,#0x811c, LSL #16
7101bf0bb0  cbz w8,0x7101bf0bd4
7101bf0bb4  ldr x10,[sp]
7101bf0bb8  mov w9,#0x9dc5
7101bf0bbc  movk w9,#0x811c, LSL #16
7101bf0bc0  mul w9,w9,w25
7101bf0bc4  and w8,w8,#0xff
7101bf0bc8  eor w9,w9,w8
7101bf0bcc  ldrb w8,[x10], #0x1
7101bf0bd0  cbnz w8,0x7101bf0bc0
7101bf0bd4  str w9,[sp, #0x200]
7101bf0bd8  ldp x19,x8,[x23, #0xb0]
7101bf0bdc  cmp x19,x8
7101bf0be0  b.eq 0x7101bf0c58
7101bf0be4  ldp x8,x9,[sp, #0x1b8]
7101bf0be8  add x0,x19,#0x10
7101bf0bec  stp x8,x9,[x19]
7101bf0bf0  ldr x1,[sp, #0x10]
7101bf0bf4  bl 0x710377b610
7101bf0bf8  ldr x12,[sp, #0x8]
7101bf0bfc  ldr x9,[x12]
7101bf0c00  str x9,[x19, #0x20]
7101bf0c04  ldp x9,x10,[x12, #0x8]
7101bf0c08  mov x8,xzr
7101bf0c0c  ldp x11,x12,[x12, #0x18]
7101bf0c10  str wzr,[x19, #0x48]
7101bf0c14  stp x11,x12,[x19, #0x38]
7101bf0c18  stp x9,x10,[x19, #0x28]
7101bf0c1c  add x9,x21,x8
7101bf0c20  ldrb w11,[x9]
7101bf0c24  cbz w11,0x7101bf0c74
7101bf0c28  add x10,x19,x8
7101bf0c2c  strb w11,[x10, #0x50]
7101bf0c30  ldrb w11,[x9, #0x1]
7101bf0c34  cbz w11,0x7101bf0c68
7101bf0c38  strb w11,[x10, #0x51]
7101bf0c3c  ldrb w9,[x9, #0x2]
7101bf0c40  cbz w9,0x7101bf0c70
7101bf0c44  add x8,x8,#0x3
7101bf0c48  cmp w8,#0xff
7101bf0c4c  strb w9,[x10, #0x52]
7101bf0c50  b.cc 0x7101bf0c1c
7101bf0c54  b 0x7101bf0c74
7101bf0c58  ldr x0,[sp, #0x48]
7101bf0c5c  add x1,sp,#0x1b8
7101bf0c60  bl 0x7101be3dc0
7101bf0c64  b 0x7101bf0cc8
7101bf0c68  add x8,x8,#0x1
7101bf0c6c  b 0x7101bf0c74
7101bf0c70  add x8,x8,#0x2
7101bf0c74  add x9,x19,#0x50
7101bf0c78  strb wzr,[x9, w8, UXTW ]
7101bf0c7c  ldrb w9,[x19, #0x50]
7101bf0c80  str w8,[x19, #0x4c]
7101bf0c84  cbz w9,0x7101bf0cac
7101bf0c88  add x8,x19,#0x51
7101bf0c8c  mov w10,#0x9dc5
7101bf0c90  movk w10,#0x811c, LSL #16
7101bf0c94  mul w10,w10,w25
7101bf0c98  and w9,w9,#0xff
7101bf0c9c  eor w10,w10,w9
7101bf0ca0  ldrb w9,[x8], #0x1
7101bf0ca4  cbnz w9,0x7101bf0c94
7101bf0ca8  b 0x7101bf0cb4
7101bf0cac  mov w10,#0x9dc5
7101bf0cb0  movk w10,#0x811c, LSL #16
7101bf0cb4  ldr x9,[sp, #0x98]
7101bf0cb8  str w10,[x19, #0x48]
7101bf0cbc  ldr x8,[x9]
7101bf0cc0  add x8,x8,#0x150
7101bf0cc4  str x8,[x9]
7101bf0cc8  ldp x8,x9,[x23, #0x98]
7101bf0ccc  ldr x19,[sp, #0xa0]
7101bf0cd0  cmp x8,x9
7101bf0cd4  b.cs 0x7101bf0cf0
7101bf0cd8  stur xzr,[x29, #-0x88]
7101bf0cdc  str x20,[x8]
7101bf0ce0  ldr x8,[x23, #0x98]
7101bf0ce4  add x8,x8,#0x8
7101bf0ce8  str x8,[x23, #0x98]
7101bf0cec  b 0x7101bf0cfc
7101bf0cf0  ldr x0,[sp, #0x38]
7101bf0cf4  sub x1,x29,#0x88
7101bf0cf8  bl 0x7101be1cf0
7101bf0cfc  ldr x20,[sp, #0x1d0]
7101bf0d00  adrp x8,0x710523d000
7101bf0d04  add x8,x8,#0xa28
7101bf0d08  stp x8,xzr,[sp, #0x1c8]
7101bf0d0c  cbz x20,0x7101bf0d8c
7101bf0d10  ldr x21,[x20, #0x8]
7101bf0d14  stp xzr,xzr,[x20]
7101bf0d18  cbz x21,0x7101bf0d84
7101bf0d1c  add x8,x21,#0x8
7101bf0d20  ldaxr x9,[x8]
7101bf0d24  sub x10,x9,#0x1
7101bf0d28  stlxr w11,x10,[x8]
7101bf0d2c  cbnz w11,0x7101bf0d20
7101bf0d30  cbnz x9,0x7101bf0d4c
7101bf0d34  ldr x8,[x21]
7101bf0d38  ldr x8,[x8, #0x10]
7101bf0d3c  mov x0,x21
7101bf0d40  blr x8
7101bf0d44  mov x0,x21
7101bf0d48  bl 0x71039c2670
7101bf0d4c  ldr x21,[x20, #0x8]
7101bf0d50  cbz x21,0x7101bf0d84
7101bf0d54  add x8,x21,#0x8
7101bf0d58  ldaxr x9,[x8]
7101bf0d5c  sub x10,x9,#0x1
7101bf0d60  stlxr w11,x10,[x8]
7101bf0d64  cbnz w11,0x7101bf0d58
7101bf0d68  cbnz x9,0x7101bf0d84
7101bf0d6c  ldr x8,[x21]
7101bf0d70  ldr x8,[x8, #0x10]
7101bf0d74  mov x0,x21
7101bf0d78  blr x8
7101bf0d7c  mov x0,x21
7101bf0d80  bl 0x71039c2670
7101bf0d84  mov x0,x20
7101bf0d88  bl 0x710392eb40
7101bf0d8c  ldur x20,[x29, #-0x88]
7101bf0d90  stur xzr,[x29, #-0x88]
7101bf0d94  cbnz x20,0x7101bf0f4c
7101bf0d98  b 0x7101bf0f5c
7101bf0d9c  ldr x1,[x27]
7101bf0da0  ldr x0,[x19]
7101bf0da4  bl 0x7101761580
7101bf0da8  cmp w0,#0x0
7101bf0dac  csinc w8,w0,wzr,ne
7101bf0db0  sxtw x22,w8
7101bf0db4  sxtw x21,w0
7101bf0db8  mov w0,#0x10
7101bf0dbc  mov x1,x22
7101bf0dc0  bl 0x710392e290
7101bf0dc4  mov x20,x0
7101bf0dc8  cbnz x0,0x7101bf0e10
7101bf0dcc  adrp x8,0x7105332000
7101bf0dd0  ldr x0,[x8, #0xf00]
7101bf0dd4  cbz x0,0x7101bf0e0c
7101bf0dd8  str wzr,[sp, #0xa8]
7101bf0ddc  str x22,[sp, #0x1b8]
7101bf0de0  ldr x8,[x0]
7101bf0de4  ldr x8,[x8, #0x30]
7101bf0de8  add x1,sp,#0xa8
7101bf0dec  add x2,sp,#0x1b8
7101bf0df0  blr x8
7101bf0df4  tbz w0,#0x0,0x7101bf0e0c
7101bf0df8  mov w0,#0x10
7101bf0dfc  mov x1,x22
7101bf0e00  bl 0x710392e290
7101bf0e04  mov x20,x0
7101bf0e08  cbnz x0,0x7101bf0e10
7101bf0e0c  mov x20,xzr
7101bf0e10  mov x0,x20
7101bf0e14  mov w1,wzr
7101bf0e18  mov x2,x21
7101bf0e1c  bl 0x71039c02a0
7101bf0e20  stur x20,[x29, #-0x88]
7101bf0e24  ldr x1,[x27]
7101bf0e28  ldr x0,[x19]
7101bf0e2c  mov x2,x20
7101bf0e30  mov w3,w21
7101bf0e34  mov w4,wzr
7101bf0e38  bl 0x7101761830
7101bf0e3c  ldr x22,[x27]
7101bf0e40  ldr x24,[x19]
7101bf0e44  b 0x7101bf0e50
7101bf0e48  mov x0,x26
7101bf0e4c  bl 0x71039c0d80
7101bf0e50  mov x0,x24
7101bf0e54  mov x1,x22
7101bf0e58  bl 0x7101762400
7101bf0e5c  tbz w0,#0x0,0x7101bf0e48
7101bf0e60  cbz x20,0x7101bf0f58
7101bf0e64  ldr w8,[x20]
7101bf0e68  cmp x8,x21
7101bf0e6c  b.ne 0x7101bf0f48
7101bf0e70  adrp x9,0x710523d000
7101bf0e74  ldrsw x9,[x9, #0xc]
7101bf0e78  add x10,x20,x9, LSL #0x3
7101bf0e7c  ldp w9,w1,[x10, #0xcc]
7101bf0e80  add w10,w9,w1
7101bf0e84  sub w10,w10,#0x1
7101bf0e88  cmp w10,w8
7101bf0e8c  b.cs 0x7101bf0f48
7101bf0e90  ldr x2,[x20, #0x18]
7101bf0e94  add x0,x20,x9
7101bf0e98  bl 0x71033798d0
7101bf0e9c  tbz w0,#0x0,0x7101bf0f48
7101bf0ea0  ldrh w8,[x20, #0x80]
7101bf0ea4  ldrb w9,[x20, #0x82]
7101bf0ea8  add x0,sp,#0xa8
7101bf0eac  ldrb w10,[x20, #0x83]
7101bf0eb0  and x8,x8,#0xfff
7101bf0eb4  ldrb w11,[x20, #0x84]
7101bf0eb8  bfm x8,x9,#0x34,#0x3
7101bf0ebc  ldrb w12,[x20, #0x85]
7101bf0ec0  ldrb w13,[x20, #0x86]
7101bf0ec4  and w13,w13,#0x3f
7101bf0ec8  bfm x8,x10,#0x30,#0x4
7101bf0ecc  bfm x8,x11,#0x2b,#0x4
7101bf0ed0  bfm x8,x12,#0x26,#0x5
7101bf0ed4  bfm x8,x13,#0x20,#0x5
7101bf0ed8  orr x8,x8,#0x4000000000000000
7101bf0edc  add x1,sp,#0x1b8
7101bf0ee0  str x8,[sp, #0xa8]
7101bf0ee4  bl 0x71037419c0
7101bf0ee8  ldrh w8,[x20, #0x28]
7101bf0eec  ldrb w9,[x20, #0x2a]
7101bf0ef0  add x0,sp,#0xa8
7101bf0ef4  ldrb w10,[x20, #0x2b]
7101bf0ef8  and x8,x8,#0xfff
7101bf0efc  ldrb w11,[x20, #0x2c]
7101bf0f00  bfm x8,x9,#0x34,#0x3
7101bf0f04  ldrb w12,[x20, #0x2d]
7101bf0f08  ldrb w13,[x20, #0x2e]
7101bf0f0c  and w13,w13,#0x3f
7101bf0f10  bfm x8,x10,#0x30,#0x4
7101bf0f14  bfm x8,x11,#0x2b,#0x4
7101bf0f18  bfm x8,x12,#0x26,#0x5
7101bf0f1c  ldr x19,[sp, #0x1b8]
7101bf0f20  add x1,sp,#0x1b8
7101bf0f24  bfm x8,x13,#0x20,#0x5
7101bf0f28  orr x8,x8,#0x4000000000000000
7101bf0f2c  str x8,[sp, #0xa8]
7101bf0f30  bl 0x71037419c0
7101bf0f34  ldr x21,[sp, #0x1b8]
7101bf0f38  add x0,sp,#0x1b8
7101bf0f3c  bl 0x71039c2680
7101bf0f40  cbz w0,0x7101bf08ac
7101bf0f44  ldr x19,[sp, #0xa0]
7101bf0f48  stur xzr,[x29, #-0x88]
7101bf0f4c  mov x0,x20
7101bf0f50  bl 0x710392eb40
7101bf0f54  b 0x7101bf0f5c
7101bf0f58  stur xzr,[x29, #-0x88]
7101bf0f5c  add x27,x27,#0x8
7101bf0f60  cmp x27,x28
7101bf0f64  b.ne 0x7101bf0d9c
7101bf0f68  ldr x21,[sp, #0x48]
7101bf0f6c  ldr x20,[sp, #0x88]
7101bf0f70  ldr x8,[sp, #0x98]
7101bf0f74  ldr x0,[x21]
7101bf0f78  ldr x1,[x8]
7101bf0f7c  bl 0x7101be1ef0
7101bf0f80  ldur x0,[x29, #-0x80]
7101bf0f84  cbz x0,0x7101bf0f90
7101bf0f88  str x0,[x20]
7101bf0f8c  bl 0x710392eb40
7101bf0f90  stp xzr,xzr,[x29, #-0x78]
7101bf0f94  stur xzr,[x29, #-0x80]
7101bf0f98  ldr x8,[x19]
7101bf0f9c  sub x19,x29,#0x80
7101bf0fa0  add x9,x8,#0x288
7101bf0fa4  cmp x9,x19
7101bf0fa8  b.eq 0x7101bf1020
7101bf0fac  ldr x1,[x8, #0x288]
7101bf0fb0  ldr x2,[x8, #0x290]
7101bf0fb4  sub x0,x29,#0x80
7101bf0fb8  bl 0x710075f050
7101bf0fbc  ldp x28,x25,[x29, #-0x80]
7101bf0fc0  add x27,x19,#0x8
7101bf0fc4  cmp x28,x25
7101bf0fc8  b.eq 0x7101bf18c8
7101bf0fcc  add x9,sp,#0x1b8
7101bf0fd0  add x8,x9,#0x10
7101bf0fd4  str x8,[sp, #0x48]
7101bf0fd8  add x8,x9,#0x28
7101bf0fdc  str x8,[sp, #0x88]
7101bf0fe0  add x8,x9,#0x48
7101bf0fe4  str x8,[sp, #0x80]
7101bf0fe8  add x8,x9,#0x8
7101bf0fec  str x8,[sp, #0x78]
7101bf0ff0  add x8,x9,#0x20
7101bf0ff4  str x8,[sp, #0x38]
7101bf0ff8  add x8,sp,#0xa8
7101bf0ffc  ldr x19,[sp, #0xa0]
7101bf1000  add x8,x8,#0x8
7101bf1004  str x8,[sp, #0x70]
7101bf1008  add x8,x9,#0x51
7101bf100c  str x8,[sp, #0x20]
7101bf1010  add x8,x9,#0x50
7101bf1014  str x27,[sp, #0x98]
7101bf1018  str x8,[sp, #0x18]
7101bf101c  b 0x7101bf1704
7101bf1020  add x27,x19,#0x8
7101bf1024  b 0x7101bf18c8
7101bf1028  ldr x8,[sp, #0x1b8]
7101bf102c  cmp x19,x8
7101bf1030  ldr x19,[sp, #0xa0]
7101bf1034  b.gt 0x7101bf18b0
7101bf1038  cmp x8,x21
7101bf103c  b.gt 0x7101bf18b0
7101bf1040  adrp x8,0x710523d000
7101bf1044  add x8,x8,#0xa28
7101bf1048  mov w0,#0x10
7101bf104c  mov w1,#0x10
7101bf1050  str x8,[sp, #0x1c8]
7101bf1054  bl 0x710392e290
7101bf1058  cbnz x0,0x7101bf10a0
7101bf105c  adrp x8,0x7105332000
7101bf1060  ldr x0,[x8, #0xf00]
7101bf1064  cbz x0,0x7101bf109c
7101bf1068  mov w8,#0x10
7101bf106c  stur wzr,[x29, #-0x60]
7101bf1070  sub x1,x29,#0x60
7101bf1074  str x8,[sp, #0xa8]
7101bf1078  ldr x8,[x0]
7101bf107c  ldr x8,[x8, #0x30]
7101bf1080  add x2,sp,#0xa8
7101bf1084  blr x8
7101bf1088  tbz w0,#0x0,0x7101bf109c
7101bf108c  mov w0,#0x10
7101bf1090  mov w1,#0x10
7101bf1094  bl 0x710392e290
7101bf1098  cbnz x0,0x7101bf10a0
7101bf109c  mov x0,xzr
7101bf10a0  stp xzr,xzr,[x0]
7101bf10a4  ldr x8,[sp, #0x80]
7101bf10a8  str x0,[sp, #0x1d0]
7101bf10ac  ldr x1,[sp, #0x78]
7101bf10b0  add x0,sp,#0xa8
7101bf10b4  strb wzr,[x8, #0x8]
7101bf10b8  str xzr,[x8]
7101bf10bc  ldr x8,[sp, #0x88]
7101bf10c0  stp xzr,xzr,[x8]
7101bf10c4  mov w8,#0x1
7101bf10c8  str w8,[sp, #0x1b8]
7101bf10cc  ldrh w8,[x27, #0x80]
7101bf10d0  ldrb w9,[x27, #0x82]
7101bf10d4  ldrb w10,[x27, #0x83]
7101bf10d8  and x8,x8,#0xfff
7101bf10dc  ldrb w11,[x27, #0x84]
7101bf10e0  bfm x8,x9,#0x34,#0x3
7101bf10e4  ldrb w12,[x27, #0x85]
7101bf10e8  bfm x8,x10,#0x30,#0x4
7101bf10ec  ldrb w13,[x27, #0x86]
7101bf10f0  and w13,w13,#0x3f
7101bf10f4  bfm x8,x11,#0x2b,#0x4
7101bf10f8  bfm x8,x12,#0x26,#0x5
7101bf10fc  bfm x8,x13,#0x20,#0x5
7101bf1100  orr x8,x8,#0x4000000000000000
7101bf1104  str x8,[sp, #0xa8]
7101bf1108  bl 0x71037419c0
7101bf110c  ldrsw x8,[x27, #0x14c]
7101bf1110  ldr x21,[sp, #0x70]
7101bf1114  add x19,sp,#0x1b8
7101bf1118  cbz w8,0x7101bf113c
7101bf111c  ldr w9,[x27, #0x150]
7101bf1120  ldr w10,[x27]
7101bf1124  add w9,w8,w9
7101bf1128  add x8,x27,x8
7101bf112c  sub w9,w9,#0x1
7101bf1130  cmp w9,w10
7101bf1134  csel x1,x8,xzr,cc
7101bf1138  b 0x7101bf1140
7101bf113c  mov x1,xzr
7101bf1140  ldrsw x2,[x27, #0x150]
7101bf1144  ldr x0,[sp, #0x1d0]
7101bf1148  mov w3,#0x1
7101bf114c  bl 0x710377b8b0
7101bf1150  add x8,x27,#0x40
7101bf1154  stp x8,xzr,[sp, #0x1d8]
7101bf1158  ldrh w8,[x27, #0x20]
7101bf115c  ldrb w9,[x27, #0x22]
7101bf1160  ldrb w10,[x27, #0x23]
7101bf1164  and x8,x8,#0xfff
7101bf1168  ldrb w11,[x27, #0x24]
7101bf116c  bfm x8,x9,#0x34,#0x3
7101bf1170  ldrb w12,[x27, #0x25]
7101bf1174  bfm x8,x10,#0x30,#0x4
7101bf1178  ldrb w13,[x27, #0x26]
7101bf117c  and w13,w13,#0x3f
7101bf1180  bfm x8,x11,#0x2b,#0x4
7101bf1184  bfm x8,x12,#0x26,#0x5
7101bf1188  bfm x8,x13,#0x20,#0x5
7101bf118c  orr x8,x8,#0x4000000000000000
7101bf1190  sub x0,x29,#0x88
7101bf1194  add x1,sp,#0xa8
7101bf1198  stur x8,[x29, #-0x88]
7101bf119c  bl 0x71037419c0
7101bf11a0  tbz w0,#0x0,0x7101bf1200
7101bf11a4  ldr x8,[sp, #0xa8]
7101bf11a8  sub x0,x29,#0x68
7101bf11ac  sub x2,x29,#0x60
7101bf11b0  mov x1,xzr
7101bf11b4  stur x8,[x29, #-0x60]
7101bf11b8  bl 0x71039c6290
7101bf11bc  cbnz w0,0x7101bf1200
7101bf11c0  ldr x9,[sp, #0x1e0]
7101bf11c4  ldurh w8,[x29, #-0x68]
7101bf11c8  and x9,x9,#0x3fffffc000000000
7101bf11cc  ldurb w10,[x29, #-0x66]
7101bf11d0  bfxil x9,x8,#0x0,#0xc
7101bf11d4  ldurb w8,[x29, #-0x65]
7101bf11d8  bfm x9,x10,#0x34,#0x3
7101bf11dc  ldurb w10,[x29, #-0x62]
7101bf11e0  bfm x9,x8,#0x30,#0x4
7101bf11e4  ldurb w8,[x29, #-0x64]
7101bf11e8  bfm x9,x8,#0x2b,#0x4
7101bf11ec  ldurb w8,[x29, #-0x63]
7101bf11f0  bfm x9,x8,#0x26,#0x5
7101bf11f4  bfm x9,x10,#0x20,#0x5
7101bf11f8  orr x8,x9,#-0x8000000000000000
7101bf11fc  str x8,[sp, #0x1e0]
7101bf1200  ldrh w8,[x27, #0x28]
7101bf1204  ldrb w9,[x27, #0x2a]
7101bf1208  sub x0,x29,#0x88
7101bf120c  ldrb w10,[x27, #0x2b]
7101bf1210  and x8,x8,#0xfff
7101bf1214  ldrb w11,[x27, #0x2c]
7101bf1218  bfm x8,x9,#0x34,#0x3
7101bf121c  ldrb w12,[x27, #0x2d]
7101bf1220  ldrb w13,[x27, #0x2e]
7101bf1224  and w13,w13,#0x3f
7101bf1228  str xzr,[sp, #0x1e8]
7101bf122c  bfm x8,x10,#0x30,#0x4
7101bf1230  bfm x8,x11,#0x2b,#0x4
7101bf1234  bfm x8,x12,#0x26,#0x5
7101bf1238  bfm x8,x13,#0x20,#0x5
7101bf123c  orr x8,x8,#0x4000000000000000
7101bf1240  add x1,sp,#0xa8
7101bf1244  stur x8,[x29, #-0x88]
7101bf1248  bl 0x71037419c0
7101bf124c  tbz w0,#0x0,0x7101bf12ac
7101bf1250  ldr x8,[sp, #0xa8]
7101bf1254  sub x0,x29,#0x68
7101bf1258  sub x2,x29,#0x60
7101bf125c  mov x1,xzr
7101bf1260  stur x8,[x29, #-0x60]
7101bf1264  bl 0x71039c6290
7101bf1268  cbnz w0,0x7101bf12ac
7101bf126c  ldr x9,[sp, #0x1e8]
7101bf1270  ldurh w8,[x29, #-0x68]
7101bf1274  and x9,x9,#0x3fffffc000000000
7101bf1278  ldurb w10,[x29, #-0x66]
7101bf127c  bfxil x9,x8,#0x0,#0xc
7101bf1280  ldurb w8,[x29, #-0x65]
7101bf1284  bfm x9,x10,#0x34,#0x3
7101bf1288  ldurb w10,[x29, #-0x62]
7101bf128c  bfm x9,x8,#0x30,#0x4
7101bf1290  ldurb w8,[x29, #-0x64]
7101bf1294  bfm x9,x8,#0x2b,#0x4
7101bf1298  ldurb w8,[x29, #-0x63]
7101bf129c  bfm x9,x8,#0x26,#0x5
7101bf12a0  bfm x9,x10,#0x20,#0x5
7101bf12a4  orr x8,x9,#-0x8000000000000000
7101bf12a8  str x8,[sp, #0x1e8]
7101bf12ac  add x8,x27,#0x90
7101bf12b0  str x8,[sp, #0x1f0]
7101bf12b4  add x8,x27,#0xb0
7101bf12b8  add x0,sp,#0xa8
7101bf12bc  mov x1,x27
7101bf12c0  str x8,[sp, #0x1f8]
7101bf12c4  bl 0x7101763b40
7101bf12c8  mov x8,xzr
7101bf12cc  mov w12,#0x89
7101bf12d0  add x9,x21,x8
7101bf12d4  ldrb w11,[x9]
7101bf12d8  cbz w11,0x7101bf1318
7101bf12dc  add x10,x19,x8
7101bf12e0  strb w11,[x10, #0x50]
7101bf12e4  ldrb w11,[x9, #0x1]
7101bf12e8  cbz w11,0x7101bf130c
7101bf12ec  ldrb w9,[x9, #0x2]
7101bf12f0  strb w11,[x10, #0x51]
7101bf12f4  cbz w9,0x7101bf1314
7101bf12f8  add x8,x8,#0x3
7101bf12fc  cmp w8,#0xff
7101bf1300  strb w9,[x10, #0x52]
7101bf1304  b.cc 0x7101bf12d0
7101bf1308  b 0x7101bf1318
7101bf130c  add x8,x8,#0x1
7101bf1310  b 0x7101bf1318
7101bf1314  add x8,x8,#0x2
7101bf1318  add x9,x19,w8, UXTW 
7101bf131c  strb wzr,[x9, #0x50]
7101bf1320  str w8,[sp, #0x204]
7101bf1324  ldrb w8,[sp, #0x208]
7101bf1328  mov w21,#0x9dc5
7101bf132c  movk w21,#0x811c, LSL #16
7101bf1330  mov w9,w21
7101bf1334  cbz w8,0x7101bf1354
7101bf1338  ldr x10,[sp, #0x20]
7101bf133c  mov w9,w21
7101bf1340  mul w9,w9,w12
7101bf1344  and w8,w8,#0xff
7101bf1348  eor w9,w9,w8
7101bf134c  ldrb w8,[x10], #0x1
7101bf1350  cbnz w8,0x7101bf1340
7101bf1354  str w9,[sp, #0x200]
7101bf1358  ldp x19,x8,[x23, #0xe0]
7101bf135c  cmp x19,x8
7101bf1360  b.eq 0x7101bf13e0
7101bf1364  ldp x8,x9,[sp, #0x1b8]
7101bf1368  add x0,x19,#0x10
7101bf136c  stp x8,x9,[x19]
7101bf1370  ldr x1,[sp, #0x48]
7101bf1374  bl 0x710377b610
7101bf1378  ldr x12,[sp, #0x38]
7101bf137c  ldr x9,[x12]
7101bf1380  str x9,[x19, #0x20]
7101bf1384  ldp x9,x10,[x12, #0x8]
7101bf1388  mov x8,xzr
7101bf138c  ldp x11,x12,[x12, #0x18]
7101bf1390  mov w13,#0x89
7101bf1394  stp x11,x12,[x19, #0x38]
7101bf1398  str wzr,[x19, #0x48]
7101bf139c  stp x9,x10,[x19, #0x28]
7101bf13a0  ldr x12,[sp, #0x18]
7101bf13a4  add x9,x12,x8
7101bf13a8  ldrb w11,[x9]
7101bf13ac  cbz w11,0x7101bf13fc
7101bf13b0  add x10,x19,x8
7101bf13b4  strb w11,[x10, #0x50]
7101bf13b8  ldrb w11,[x9, #0x1]
7101bf13bc  cbz w11,0x7101bf13f0
7101bf13c0  strb w11,[x10, #0x51]
7101bf13c4  ldrb w9,[x9, #0x2]
7101bf13c8  cbz w9,0x7101bf13f8
7101bf13cc  add x8,x8,#0x3
7101bf13d0  cmp w8,#0xff
7101bf13d4  strb w9,[x10, #0x52]
7101bf13d8  b.cc 0x7101bf13a4
7101bf13dc  b 0x7101bf13fc
7101bf13e0  ldr x0,[sp, #0x30]
7101bf13e4  add x1,sp,#0x1b8
7101bf13e8  bl 0x7101be3dc0
7101bf13ec  b 0x7101bf1444
7101bf13f0  add x8,x8,#0x1
7101bf13f4  b 0x7101bf13fc
7101bf13f8  add x8,x8,#0x2
7101bf13fc  add x9,x19,#0x50
7101bf1400  strb wzr,[x9, w8, UXTW ]
7101bf1404  ldrb w9,[x19, #0x50]
7101bf1408  str w8,[x19, #0x4c]
7101bf140c  cbz w9,0x7101bf1430
7101bf1410  add x8,x19,#0x51
7101bf1414  mov w10,w21
7101bf1418  mul w10,w10,w13
7101bf141c  and w9,w9,#0xff
7101bf1420  eor w10,w10,w9
7101bf1424  ldrb w9,[x8], #0x1
7101bf1428  cbnz w9,0x7101bf1418
7101bf142c  b 0x7101bf1434
7101bf1430  mov w10,w21
7101bf1434  str w10,[x19, #0x48]
7101bf1438  ldr x8,[x23, #0xe0]
7101bf143c  add x8,x8,#0x150
7101bf1440  str x8,[x23, #0xe0]
7101bf1444  ldp x21,x8,[x23, #0xc8]
7101bf1448  cmp x21,x8
7101bf144c  b.cs 0x7101bf146c
7101bf1450  str x27,[x21]
7101bf1454  str w20,[x21, #0x8]
7101bf1458  ldr x8,[x23, #0xc8]
7101bf145c  ldr x19,[sp, #0xa0]
7101bf1460  add x8,x8,#0x10
7101bf1464  str x8,[x23, #0xc8]
7101bf1468  b 0x7101bf166c
7101bf146c  ldr x9,[sp, #0x40]
7101bf1470  ldr x22,[x9]
7101bf1474  sub x9,x21,x22
7101bf1478  asr x19,x9,#0x4
7101bf147c  add x9,x19,#0x1
7101bf1480  lsr x10,x9,#0x3c
7101bf1484  cbnz x10,0x7101bf2c44
7101bf1488  sub x8,x8,x22
7101bf148c  asr x10,x8,#0x4
7101bf1490  orr x11,xzr,#0x7fffffffffffffe
7101bf1494  cmp x10,x11
7101bf1498  b.hi 0x7101bf14b8
7101bf149c  asr x8,x8,#0x3
7101bf14a0  cmp x8,x9
7101bf14a4  csel x23,x9,x8,cc
7101bf14a8  cbz x23,0x7101bf16fc
7101bf14ac  lsr x8,x23,#0x3c
7101bf14b0  cbz x8,0x7101bf14bc
7101bf14b4  b 0x7101bf2c40
7101bf14b8  orr x23,xzr,#0xfffffffffffffff
7101bf14bc  lsl x8,x23,#0x4
7101bf14c0  cmp x8,#0x0
7101bf14c4  csinc x21,x8,xzr,ne
7101bf14c8  mov w0,#0x10
7101bf14cc  mov x1,x21
7101bf14d0  bl 0x710392e290
7101bf14d4  cbnz x0,0x7101bf1518
7101bf14d8  adrp x8,0x7105332000
7101bf14dc  ldr x0,[x8, #0xf00]
7101bf14e0  cbz x0,0x7101bf1514
7101bf14e4  stur wzr,[x29, #-0x60]
7101bf14e8  str x21,[sp, #0xa8]
7101bf14ec  ldr x8,[x0]
7101bf14f0  ldr x8,[x8, #0x30]
7101bf14f4  sub x1,x29,#0x60
7101bf14f8  add x2,sp,#0xa8
7101bf14fc  blr x8
7101bf1500  tbz w0,#0x0,0x7101bf1514
7101bf1504  mov w0,#0x10
7101bf1508  mov x1,x21
7101bf150c  bl 0x710392e290
7101bf1510  cbnz x0,0x7101bf1518
7101bf1514  mov x0,xzr
7101bf1518  ldr x8,[sp, #0x90]
7101bf151c  ldp x22,x21,[x8, #0xc0]
7101bf1520  add x9,x0,x19, LSL #0x4
7101bf1524  add x8,x0,x23, LSL #0x4
7101bf1528  add x10,x9,#0x10
7101bf152c  cmp x21,x22
7101bf1530  str x27,[x9]
7101bf1534  str w20,[x9, #0x8]
7101bf1538  b.eq 0x7101bf1630
7101bf153c  sub x11,x21,#0x10
7101bf1540  sub x12,x11,x22
7101bf1544  mov x11,#-0x1
7101bf1548  eor x11,x11,x12, LSR #0x4
7101bf154c  tbnz w12,#0x4,0x7101bf1564
7101bf1550  ldr x13,[x21, #-0x10]!
7101bf1554  str xzr,[x21]
7101bf1558  str x13,[x9, #-0x10]!
7101bf155c  ldr w13,[x21, #0x8]
7101bf1560  str w13,[x9, #0x8]
7101bf1564  ldr x23,[sp, #0x90]
7101bf1568  add x11,x19,x11
7101bf156c  ldr x19,[sp, #0xa0]
7101bf1570  cmp x12,#0x10
7101bf1574  b.cc 0x7101bf1624
7101bf1578  sub x12,x21,#0x20
7101bf157c  sub x12,x12,x22
7101bf1580  tbnz w12,#0x5,0x7101bf15b0
7101bf1584  ldur x13,[x21, #-0x10]
7101bf1588  stur xzr,[x21, #-0x10]
7101bf158c  stur x13,[x9, #-0x10]
7101bf1590  ldur w13,[x21, #-0x8]
7101bf1594  stur w13,[x9, #-0x8]
7101bf1598  ldr x13,[x21, #-0x20]!
7101bf159c  str xzr,[x21]
7101bf15a0  stur x13,[x9, #-0x20]
7101bf15a4  ldr w13,[x21, #0x8]
7101bf15a8  stur w13,[x9, #-0x18]
7101bf15ac  sub x9,x9,#0x20
7101bf15b0  cmp x12,#0x20
7101bf15b4  b.cc 0x7101bf1624
7101bf15b8  mov x12,xzr
7101bf15bc  sub x13,x22,x21
7101bf15c0  add x14,x21,x12
7101bf15c4  ldur x15,[x14, #-0x10]
7101bf15c8  add x16,x9,x12
7101bf15cc  stur xzr,[x14, #-0x10]
7101bf15d0  stur x15,[x16, #-0x10]
7101bf15d4  ldur w15,[x14, #-0x8]
7101bf15d8  stur w15,[x16, #-0x8]
7101bf15dc  ldur x15,[x14, #-0x20]
7101bf15e0  stur xzr,[x14, #-0x20]
7101bf15e4  stur x15,[x16, #-0x20]
7101bf15e8  ldur w15,[x14, #-0x18]
7101bf15ec  stur w15,[x16, #-0x18]
7101bf15f0  ldur x15,[x14, #-0x30]
7101bf15f4  stur xzr,[x14, #-0x30]
7101bf15f8  stur x15,[x16, #-0x30]
7101bf15fc  ldur w15,[x14, #-0x28]
7101bf1600  stur w15,[x16, #-0x28]
7101bf1604  ldur x15,[x14, #-0x40]
7101bf1608  stur xzr,[x14, #-0x40]
7101bf160c  stur x15,[x16, #-0x40]
7101bf1610  ldur w14,[x14, #-0x38]
7101bf1614  sub x12,x12,#0x40
7101bf1618  cmp x13,x12
7101bf161c  stur w14,[x16, #-0x38]
7101bf1620  b.ne 0x7101bf15c0
7101bf1624  ldp x22,x21,[x23, #0xc0]
7101bf1628  add x9,x0,x11, LSL #0x4
7101bf162c  b 0x7101bf1638
7101bf1630  ldr x23,[sp, #0x90]
7101bf1634  ldr x19,[sp, #0xa0]
7101bf1638  cmp x21,x22
7101bf163c  stp x9,x10,[x23, #0xc0]
7101bf1640  str x8,[x23, #0xd0]
7101bf1644  b.eq 0x7101bf1660
7101bf1648  ldr x0,[x21, #-0x10]!
7101bf164c  str xzr,[x21]
7101bf1650  cbz x0,0x7101bf1658
7101bf1654  bl 0x710392eb40
7101bf1658  cmp x22,x21
7101bf165c  b.ne 0x7101bf1648
7101bf1660  cbz x22,0x7101bf166c
7101bf1664  mov x0,x22
7101bf1668  bl 0x710392eb40
7101bf166c  ldr x20,[sp, #0x1d0]
7101bf1670  adrp x8,0x710523d000
7101bf1674  add x8,x8,#0xa28
7101bf1678  stp x8,xzr,[sp, #0x1c8]
7101bf167c  cbz x20,0x7101bf18b8
7101bf1680  ldr x21,[x20, #0x8]
7101bf1684  stp xzr,xzr,[x20]
7101bf1688  cbz x21,0x7101bf16f4
7101bf168c  add x8,x21,#0x8
7101bf1690  ldaxr x9,[x8]
7101bf1694  sub x10,x9,#0x1
7101bf1698  stlxr w11,x10,[x8]
7101bf169c  cbnz w11,0x7101bf1690
7101bf16a0  cbnz x9,0x7101bf16bc
7101bf16a4  ldr x8,[x21]
7101bf16a8  ldr x8,[x8, #0x10]
7101bf16ac  mov x0,x21
7101bf16b0  blr x8
7101bf16b4  mov x0,x21
7101bf16b8  bl 0x71039c2670
7101bf16bc  ldr x21,[x20, #0x8]
7101bf16c0  cbz x21,0x7101bf16f4
7101bf16c4  add x8,x21,#0x8
7101bf16c8  ldaxr x9,[x8]
7101bf16cc  sub x10,x9,#0x1
7101bf16d0  stlxr w11,x10,[x8]
7101bf16d4  cbnz w11,0x7101bf16c8
7101bf16d8  cbnz x9,0x7101bf16f4
7101bf16dc  ldr x8,[x21]
7101bf16e0  ldr x8,[x8, #0x10]
7101bf16e4  mov x0,x21
7101bf16e8  blr x8
7101bf16ec  mov x0,x21
7101bf16f0  bl 0x71039c2670
7101bf16f4  mov x0,x20
7101bf16f8  b 0x7101bf18b4
7101bf16fc  mov x0,xzr
7101bf1700  b 0x7101bf1520
7101bf1704  ldr x1,[x28]
7101bf1708  ldr x0,[x19]
7101bf170c  bl 0x7101761580
7101bf1710  cmp w0,#0x0
7101bf1714  csinc w8,w0,wzr,ne
7101bf1718  sxtw x22,w8
7101bf171c  mov w20,w0
7101bf1720  mov w0,#0x10
7101bf1724  sxtw x21,w20
7101bf1728  mov x1,x22
7101bf172c  bl 0x710392e290
7101bf1730  mov x27,x0
7101bf1734  cbnz x0,0x7101bf177c
7101bf1738  adrp x8,0x7105332000
7101bf173c  ldr x0,[x8, #0xf00]
7101bf1740  cbz x0,0x7101bf1778
7101bf1744  str wzr,[sp, #0xa8]
7101bf1748  str x22,[sp, #0x1b8]
7101bf174c  ldr x8,[x0]
7101bf1750  ldr x8,[x8, #0x30]
7101bf1754  add x1,sp,#0xa8
7101bf1758  add x2,sp,#0x1b8
7101bf175c  blr x8
7101bf1760  tbz w0,#0x0,0x7101bf1778
7101bf1764  mov w0,#0x10
7101bf1768  mov x1,x22
7101bf176c  bl 0x710392e290
7101bf1770  mov x27,x0
7101bf1774  cbnz x0,0x7101bf177c
7101bf1778  mov x27,xzr
7101bf177c  mov x0,x27
7101bf1780  mov w1,wzr
7101bf1784  mov x2,x21
7101bf1788  bl 0x71039c02a0
7101bf178c  ldr x1,[x28]
7101bf1790  ldr x0,[x19]
7101bf1794  mov x2,x27
7101bf1798  mov w3,w20
7101bf179c  mov w4,wzr
7101bf17a0  bl 0x7101761830
7101bf17a4  ldr x22,[x28]
7101bf17a8  ldr x24,[x19]
7101bf17ac  b 0x7101bf17b8
7101bf17b0  mov x0,x26
7101bf17b4  bl 0x71039c0d80
7101bf17b8  mov x0,x24
7101bf17bc  mov x1,x22
7101bf17c0  bl 0x7101762400
7101bf17c4  tbz w0,#0x0,0x7101bf17b0
7101bf17c8  cbz x27,0x7101bf18b8
7101bf17cc  ldr w8,[x27]
7101bf17d0  cmp x8,x21
7101bf17d4  b.ne 0x7101bf18b0
7101bf17d8  adrp x9,0x710523d000
7101bf17dc  ldrsw x9,[x9, #0xc]
7101bf17e0  add x10,x27,x9, LSL #0x3
7101bf17e4  ldp w9,w1,[x10, #0xdc]
7101bf17e8  add w10,w9,w1
7101bf17ec  sub w10,w10,#0x1
7101bf17f0  cmp w10,w8
7101bf17f4  b.cs 0x7101bf18b0
7101bf17f8  ldr x2,[x27, #0x18]
7101bf17fc  add x0,x27,x9
7101bf1800  bl 0x71033798d0
7101bf1804  tbz w0,#0x0,0x7101bf18b0
7101bf1808  ldrh w8,[x27, #0x80]
7101bf180c  ldrb w9,[x27, #0x82]
7101bf1810  add x0,sp,#0xa8
7101bf1814  ldrb w10,[x27, #0x83]
7101bf1818  and x8,x8,#0xfff
7101bf181c  ldrb w11,[x27, #0x84]
7101bf1820  bfm x8,x9,#0x34,#0x3
7101bf1824  ldrb w12,[x27, #0x85]
7101bf1828  ldrb w13,[x27, #0x86]
7101bf182c  and w13,w13,#0x3f
7101bf1830  bfm x8,x10,#0x30,#0x4
7101bf1834  bfm x8,x11,#0x2b,#0x4
7101bf1838  bfm x8,x12,#0x26,#0x5
7101bf183c  bfm x8,x13,#0x20,#0x5
7101bf1840  orr x8,x8,#0x4000000000000000
7101bf1844  add x1,sp,#0x1b8
7101bf1848  str x8,[sp, #0xa8]
7101bf184c  bl 0x71037419c0
7101bf1850  ldrh w8,[x27, #0x28]
7101bf1854  ldrb w9,[x27, #0x2a]
7101bf1858  add x0,sp,#0xa8
7101bf185c  ldrb w10,[x27, #0x2b]
7101bf1860  and x8,x8,#0xfff
7101bf1864  ldrb w11,[x27, #0x2c]
7101bf1868  bfm x8,x9,#0x34,#0x3
7101bf186c  ldrb w12,[x27, #0x2d]
7101bf1870  ldrb w13,[x27, #0x2e]
7101bf1874  and w13,w13,#0x3f
7101bf1878  bfm x8,x10,#0x30,#0x4
7101bf187c  bfm x8,x11,#0x2b,#0x4
7101bf1880  bfm x8,x12,#0x26,#0x5
7101bf1884  ldr x19,[sp, #0x1b8]
7101bf1888  add x1,sp,#0x1b8
7101bf188c  bfm x8,x13,#0x20,#0x5
7101bf1890  orr x8,x8,#0x4000000000000000
7101bf1894  str x8,[sp, #0xa8]
7101bf1898  bl 0x71037419c0
7101bf189c  ldr x21,[sp, #0x1b8]
7101bf18a0  add x0,sp,#0x1b8
7101bf18a4  bl 0x71039c2680
7101bf18a8  cbz w0,0x7101bf1028
7101bf18ac  ldr x19,[sp, #0xa0]
7101bf18b0  mov x0,x27
7101bf18b4  bl 0x710392eb40
7101bf18b8  add x28,x28,#0x8
7101bf18bc  cmp x28,x25
7101bf18c0  b.ne 0x7101bf1704
7101bf18c4  ldr x27,[sp, #0x98]
7101bf18c8  adrp x8,0x7105314000
7101bf18cc  add x8,x8,#0x4d8
7101bf18d0  ldarb w8,[x8]
7101bf18d4  ldp x25,x24,[sp, #0x60]
7101bf18d8  tbz w8,#0x0,0x7101bf2bf0
7101bf18dc  adrp x8,0x7105307000
7101bf18e0  ldr w8,[x8, #0x790]
7101bf18e4  cbz w8,0x7101bf18f4
7101bf18e8  add x0,sp,#0x1b8
7101bf18ec  bl 0x71039c2680
7101bf18f0  cbz w0,0x7101bf280c
7101bf18f4  ldp x0,x1,[x23, #0xd8]
7101bf18f8  bl 0x7101be4200
7101bf18fc  ldur x0,[x29, #-0x80]
7101bf1900  cbz x0,0x7101bf190c
7101bf1904  str x0,[x27]
7101bf1908  bl 0x710392eb40
7101bf190c  ldp x8,x1,[sp, #0x50]
7101bf1910  mov x3,#0xc3fc
7101bf1914  movk x3,#0xe09f, LSL #16
7101bf1918  adrp x2,0x71050ac000
7101bf191c  add x2,x2,#0x620
7101bf1920  movk x3,#0x20, LSL #32
7101bf1924  mov w4,#0x1
7101bf1928  mov x0,x25
7101bf192c  stp x25,x23,[x8, #0x80]
7101bf1930  bl 0x71032cb040
7101bf1934  ldr x8,[x23, #0x58]
7101bf1938  ldr x0,[x8]
7101bf193c  cbz x0,0x7101bf24b0
7101bf1940  adrp x1,0x7104291000
7101bf1944  add x1,x1,#0xb29
7101bf1948  adrp x2,0x71042b2000
7101bf194c  add x2,x2,#0xa84
7101bf1950  mov w3,wzr
7101bf1954  bl 0x7103375650
7101bf1958  ldr x8,[x24]
7101bf195c  ldr x0,[x8]
7101bf1960  cbz x0,0x7101bf24b0
7101bf1964  adrp x1,0x7104454000
7101bf1968  add x1,x1,#0x8f9
7101bf196c  adrp x2,0x71042b2000
7101bf1970  add x2,x2,#0xa84
7101bf1974  mov w3,#0x1000000
7101bf1978  bl 0x7103375650
7101bf197c  ldr x8,[x24]
7101bf1980  ldr x0,[x8]
7101bf1984  cbz x0,0x7101bf24b0
7101bf1988  adrp x1,0x710425f000
7101bf198c  add x1,x1,#0x27f
7101bf1990  adrp x2,0x71042b2000
7101bf1994  add x2,x2,#0xa84
7101bf1998  mov w3,#0x1010000
7101bf199c  bl 0x7103375650
7101bf19a0  ldr x8,[x24]
7101bf19a4  ldr x0,[x8]
7101bf19a8  cbz x0,0x7101bf24b0
7101bf19ac  adrp x1,0x710437c000
7101bf19b0  add x1,x1,#0x3d2
7101bf19b4  adrp x2,0x71042b2000
7101bf19b8  add x2,x2,#0xa84
7101bf19bc  mov w3,#0x2000000
7101bf19c0  bl 0x7103375650
7101bf19c4  ldr x8,[x24]
7101bf19c8  ldr x0,[x8]
7101bf19cc  cbz x0,0x7101bf24b0
7101bf19d0  mov w20,#0x2010000
7101bf19d4  adrp x1,0x7104454000
7101bf19d8  add x1,x1,#0x908
7101bf19dc  adrp x2,0x71042b2000
7101bf19e0  add x2,x2,#0xa84
7101bf19e4  mov w3,w20
7101bf19e8  bl 0x7103375650
7101bf19ec  ldr x8,[x24]
7101bf19f0  ldr x0,[x8]
7101bf19f4  cbz x0,0x7101bf24b0
7101bf19f8  add w3,w20,#0x10, LSL #12
7101bf19fc  adrp x1,0x7104422000
7101bf1a00  add x1,x1,#0x294
7101bf1a04  adrp x2,0x71042b2000
7101bf1a08  add x2,x2,#0xa84
7101bf1a0c  bl 0x7103375650
7101bf1a10  ldr x8,[x24]
7101bf1a14  ldr x0,[x8]
7101bf1a18  cbz x0,0x7101bf24b0
7101bf1a1c  add w3,w20,#0x20, LSL #12
7101bf1a20  adrp x1,0x71043ad000
7101bf1a24  add x1,x1,#0x691
7101bf1a28  adrp x2,0x71042b2000
7101bf1a2c  add x2,x2,#0xa84
7101bf1a30  bl 0x7103375650
7101bf1a34  ldr x8,[x24]
7101bf1a38  ldr x0,[x8]
7101bf1a3c  cbz x0,0x7101bf24b0
7101bf1a40  mov w20,#0x100
7101bf1a44  movk w20,#0x203, LSL #16
7101bf1a48  adrp x1,0x71042b4000
7101bf1a4c  add x1,x1,#0x2db
7101bf1a50  adrp x2,0x71042b2000
7101bf1a54  add x2,x2,#0xa84
7101bf1a58  mov w3,w20
7101bf1a5c  bl 0x7103375650
7101bf1a60  ldr x8,[x24]
7101bf1a64  ldr x0,[x8]
7101bf1a68  cbz x0,0x7101bf24b0
7101bf1a6c  add w3,w20,#0x100
7101bf1a70  adrp x1,0x71042c4000
7101bf1a74  add x1,x1,#0xc58
7101bf1a78  adrp x2,0x71042b2000
7101bf1a7c  add x2,x2,#0xa84
7101bf1a80  bl 0x7103375650
7101bf1a84  ldr x8,[x24]
7101bf1a88  ldr x0,[x8]
7101bf1a8c  cbz x0,0x7101bf24b0
7101bf1a90  add w3,w20,#0x200
7101bf1a94  adrp x1,0x7104432000
7101bf1a98  add x1,x1,#0xf79
7101bf1a9c  adrp x2,0x71042b2000
7101bf1aa0  add x2,x2,#0xa84
7101bf1aa4  bl 0x7103375650
7101bf1aa8  ldr x8,[x24]
7101bf1aac  ldr x0,[x8]
7101bf1ab0  cbz x0,0x7101bf24b0
7101bf1ab4  mov w20,#0x2040000
7101bf1ab8  adrp x1,0x7104443000
7101bf1abc  add x1,x1,#0x573
7101bf1ac0  adrp x2,0x71042b2000
7101bf1ac4  add x2,x2,#0xa84
7101bf1ac8  mov w3,w20
7101bf1acc  bl 0x7103375650
7101bf1ad0  ldr x8,[x24]
7101bf1ad4  ldr x0,[x8]
7101bf1ad8  cbz x0,0x7101bf24b0
7101bf1adc  adrp x1,0x7104443000
7101bf1ae0  add x1,x1,#0x58d
7101bf1ae4  adrp x2,0x71042b2000
7101bf1ae8  add x2,x2,#0xa84
7101bf1aec  orr w3,wzr,#0x3000000
7101bf1af0  bl 0x7103375650
7101bf1af4  ldr x8,[x24]
7101bf1af8  ldr x0,[x8]
7101bf1afc  cbz x0,0x7101bf24b0
7101bf1b00  add w3,w20,#0xfd0, LSL #12
7101bf1b04  adrp x1,0x71042d6000
7101bf1b08  add x1,x1,#0x1af
7101bf1b0c  adrp x2,0x71042b2000
7101bf1b10  add x2,x2,#0xa84
7101bf1b14  bl 0x7103375650
7101bf1b18  ldr x8,[x24]
7101bf1b1c  ldr x0,[x8]
7101bf1b20  cbz x0,0x7101bf24b0
7101bf1b24  add w3,w20,#0xfe0, LSL #12
7101bf1b28  adrp x1,0x710424f000
7101bf1b2c  add x1,x1,#0x413
7101bf1b30  adrp x2,0x71042b2000
7101bf1b34  add x2,x2,#0xa84
7101bf1b38  bl 0x7103375650
7101bf1b3c  ldr x8,[x24]
7101bf1b40  ldr x0,[x8]
7101bf1b44  cbz x0,0x7101bf24b0
7101bf1b48  add w3,w20,#0xff0, LSL #12
7101bf1b4c  adrp x1,0x7104318000
7101bf1b50  add x1,x1,#0xda7
7101bf1b54  adrp x2,0x71042b2000
7101bf1b58  add x2,x2,#0xa84
7101bf1b5c  bl 0x7103375650
7101bf1b60  ldr x8,[x24]
7101bf1b64  ldr x0,[x8]
7101bf1b68  cbz x0,0x7101bf24b0
7101bf1b6c  mov w20,#0x3040000
7101bf1b70  adrp x1,0x71042a2000
7101bf1b74  add x1,x1,#0xf3c
7101bf1b78  adrp x2,0x71042b2000
7101bf1b7c  add x2,x2,#0xa84
7101bf1b80  mov w3,w20
7101bf1b84  bl 0x7103375650
7101bf1b88  ldr x8,[x24]
7101bf1b8c  ldr x0,[x8]
7101bf1b90  cbz x0,0x7101bf24b0
7101bf1b94  adrp x1,0x71043be000
7101bf1b98  add x1,x1,#0x528
7101bf1b9c  adrp x2,0x71042b2000
7101bf1ba0  add x2,x2,#0xa84
7101bf1ba4  mov w3,#0x4000000
7101bf1ba8  bl 0x7103375650
7101bf1bac  ldr x8,[x24]
7101bf1bb0  ldr x0,[x8]
7101bf1bb4  cbz x0,0x7101bf24b0
7101bf1bb8  add w3,w20,#0xfd0, LSL #12
7101bf1bbc  adrp x1,0x710437c000
7101bf1bc0  add x1,x1,#0x3e1
7101bf1bc4  adrp x2,0x71042b2000
7101bf1bc8  add x2,x2,#0xa84
7101bf1bcc  bl 0x7103375650
7101bf1bd0  ldr x8,[x24]
7101bf1bd4  ldr x0,[x8]
7101bf1bd8  cbz x0,0x7101bf24b0
7101bf1bdc  add w3,w20,#0xfe0, LSL #12
7101bf1be0  adrp x1,0x71043cf000
7101bf1be4  add x1,x1,#0x35e
7101bf1be8  adrp x2,0x71042b2000
7101bf1bec  add x2,x2,#0xa84
7101bf1bf0  bl 0x7103375650
7101bf1bf4  ldr x8,[x24]
7101bf1bf8  ldr x0,[x8]
7101bf1bfc  cbz x0,0x7101bf24b0
7101bf1c00  mov w20,#0x100
7101bf1c04  movk w20,#0x402, LSL #16
7101bf1c08  adrp x1,0x71042c4000
7101bf1c0c  add x1,x1,#0xc7b
7101bf1c10  adrp x2,0x71042b2000
7101bf1c14  add x2,x2,#0xa84
7101bf1c18  mov w3,w20
7101bf1c1c  bl 0x7103375650
7101bf1c20  ldr x8,[x24]
7101bf1c24  ldr x0,[x8]
7101bf1c28  cbz x0,0x7101bf2be0
7101bf1c2c  add w3,w20,#0x100
7101bf1c30  adrp x1,0x71042a2000
7101bf1c34  add x1,x1,#0xf5f
7101bf1c38  adrp x2,0x71042b2000
7101bf1c3c  add x2,x2,#0xa84
7101bf1c40  bl 0x7103375650
7101bf1c44  ldr x8,[x24]
7101bf1c48  ldr x0,[x8]
7101bf1c4c  cbz x0,0x7101bf2bd4
7101bf1c50  add w3,w20,#0x200
7101bf1c54  adrp x1,0x710424f000
7101bf1c58  add x1,x1,#0x42d
7101bf1c5c  adrp x2,0x71042b2000
7101bf1c60  add x2,x2,#0xa84
7101bf1c64  bl 0x7103375650
7101bf1c68  ldr x8,[sp, #0x68]
7101bf1c6c  ldr x8,[x8]
7101bf1c70  ldr x0,[x8]
7101bf1c74  cbz x0,0x7101bf2bd4
7101bf1c78  mov w20,#0x4060000
7101bf1c7c  sub w3,w20,#0x30, LSL #12
7101bf1c80  adrp x1,0x710425f000
7101bf1c84  add x1,x1,#0x293
7101bf1c88  adrp x2,0x71042b2000
7101bf1c8c  add x2,x2,#0xa84
7101bf1c90  bl 0x7103375650
7101bf1c94  ldr x8,[sp, #0x68]
7101bf1c98  ldr x8,[x8]
7101bf1c9c  ldr x0,[x8]
7101bf1ca0  cbz x0,0x7101bf2bd4
7101bf1ca4  mov w8,#0x100
7101bf1ca8  movk w8,#0xfffd, LSL #16
7101bf1cac  add w3,w20,w8
7101bf1cb0  adrp x1,0x71042e6000
7101bf1cb4  add x1,x1,#0xfcd
7101bf1cb8  adrp x2,0x71042b2000
7101bf1cbc  add x2,x2,#0xa84
7101bf1cc0  bl 0x7103375650
7101bf1cc4  ldr x8,[sp, #0x68]
7101bf1cc8  ldr x8,[x8]
7101bf1ccc  ldr x0,[x8]
7101bf1cd0  cbz x0,0x7101bf2bd4
7101bf1cd4  mov w8,#0x200
7101bf1cd8  movk w8,#0xfffd, LSL #16
7101bf1cdc  add w3,w20,w8
7101bf1ce0  adrp x1,0x71042d6000
7101bf1ce4  add x1,x1,#0x1ca
7101bf1ce8  adrp x2,0x71042b2000
7101bf1cec  add x2,x2,#0xa84
7101bf1cf0  bl 0x7103375650
7101bf1cf4  ldr x8,[sp, #0x68]
7101bf1cf8  ldr x8,[x8]
7101bf1cfc  ldr x0,[x8]
7101bf1d00  cbz x0,0x7101bf2bd4
7101bf1d04  mov w8,#0x300
7101bf1d08  movk w8,#0xfffd, LSL #16
7101bf1d0c  add w3,w20,w8
7101bf1d10  adrp x1,0x710437c000
7101bf1d14  add x1,x1,#0x3f9
7101bf1d18  adrp x2,0x71042b2000
7101bf1d1c  add x2,x2,#0xa84
7101bf1d20  bl 0x7103375650
7101bf1d24  ldr x8,[sp, #0x68]
7101bf1d28  ldr x8,[x8]
7101bf1d2c  ldr x0,[x8]
7101bf1d30  cbz x0,0x7101bf2bd4
7101bf1d34  sub w3,w20,#0x20, LSL #12
7101bf1d38  adrp x1,0x7104412000
7101bf1d3c  add x1,x1,#0x8f5
7101bf1d40  adrp x2,0x71042b2000
7101bf1d44  add x2,x2,#0xa84
7101bf1d48  bl 0x7103375650
7101bf1d4c  ldr x8,[sp, #0x68]
7101bf1d50  ldr x8,[x8]
7101bf1d54  ldr x0,[x8]
7101bf1d58  cbz x0,0x7101bf2bd4
7101bf1d5c  sub w3,w20,#0x10, LSL #12
7101bf1d60  adrp x1,0x710435b000
7101bf1d64  add x1,x1,#0x657
7101bf1d68  adrp x2,0x71042b2000
7101bf1d6c  add x2,x2,#0xa84
7101bf1d70  bl 0x7103375650
7101bf1d74  ldr x8,[sp, #0x68]
7101bf1d78  ldr x8,[x8]
7101bf1d7c  ldr x0,[x8]
7101bf1d80  cbz x0,0x7101bf2bd4
7101bf1d84  adrp x1,0x710435b000
7101bf1d88  add x1,x1,#0x671
7101bf1d8c  adrp x2,0x71042b2000
7101bf1d90  add x2,x2,#0xa84
7101bf1d94  mov w3,w20
7101bf1d98  bl 0x7103375650
7101bf1d9c  ldr x8,[sp, #0x68]
7101bf1da0  ldr x8,[x8]
7101bf1da4  ldr x0,[x8]
7101bf1da8  cbz x0,0x7101bf2bd4
7101bf1dac  add w3,w20,#0x10, LSL #12
7101bf1db0  adrp x1,0x71043be000
7101bf1db4  add x1,x1,#0x537
7101bf1db8  adrp x2,0x71042b2000
7101bf1dbc  add x2,x2,#0xa84
7101bf1dc0  bl 0x7103375650
7101bf1dc4  ldr x8,[sp, #0x68]
7101bf1dc8  ldr x8,[x8]
7101bf1dcc  ldr x0,[x8]
7101bf1dd0  cbz x0,0x7101bf2bd4
7101bf1dd4  add w3,w20,#0x20, LSL #12
7101bf1dd8  adrp x1,0x710437c000
7101bf1ddc  add x1,x1,#0x419
7101bf1de0  adrp x2,0x71042b2000
7101bf1de4  add x2,x2,#0xa84
7101bf1de8  bl 0x7103375650
7101bf1dec  ldr x8,[sp, #0x68]
7101bf1df0  ldr x8,[x8]
7101bf1df4  ldr x0,[x8]
7101bf1df8  cbz x0,0x7101bf2bd4
7101bf1dfc  add w3,w20,#0x30, LSL #12
7101bf1e00  adrp x1,0x71043cf000
7101bf1e04  add x1,x1,#0x374
7101bf1e08  adrp x2,0x71042b2000
7101bf1e0c  add x2,x2,#0xa84
7101bf1e10  bl 0x7103375650
7101bf1e14  ldr x8,[sp, #0x68]
7101bf1e18  ldr x8,[x8]
7101bf1e1c  ldr x0,[x8]
7101bf1e20  cbz x0,0x7101bf2bd4
7101bf1e24  add w3,w20,#0xfa0, LSL #12
7101bf1e28  adrp x1,0x7104432000
7101bf1e2c  add x1,x1,#0xf9b
7101bf1e30  adrp x2,0x71042b2000
7101bf1e34  add x2,x2,#0xa84
7101bf1e38  bl 0x7103375650
7101bf1e3c  ldr x8,[sp, #0x68]
7101bf1e40  ldr x8,[x8]
7101bf1e44  ldr x0,[x8]
7101bf1e48  cbz x0,0x7101bf2bd4
7101bf1e4c  add w3,w20,#0xfb0, LSL #12
7101bf1e50  adrp x1,0x710426f000
7101bf1e54  add x1,x1,#0xec8
7101bf1e58  adrp x2,0x71042b2000
7101bf1e5c  add x2,x2,#0xa84
7101bf1e60  bl 0x7103375650
7101bf1e64  ldr x8,[sp, #0x68]
7101bf1e68  ldr x8,[x8]
7101bf1e6c  ldr x0,[x8]
7101bf1e70  cbz x0,0x7101bf2bd4
7101bf1e74  mov w21,#0x100
7101bf1e78  movk w21,#0x501, LSL #16
7101bf1e7c  adrp x1,0x7104412000
7101bf1e80  add x1,x1,#0x90d
7101bf1e84  adrp x2,0x71042b2000
7101bf1e88  add x2,x2,#0xa84
7101bf1e8c  mov w3,w21
7101bf1e90  bl 0x7103375650
7101bf1e94  ldr x8,[sp, #0x68]
7101bf1e98  ldr x8,[x8]
7101bf1e9c  ldr x0,[x8]
7101bf1ea0  cbz x0,0x7101bf2bd4
7101bf1ea4  add w3,w21,#0x100
7101bf1ea8  adrp x1,0x710436c000
7101bf1eac  add x1,x1,#0x207
7101bf1eb0  adrp x2,0x71042b2000
7101bf1eb4  add x2,x2,#0xa84
7101bf1eb8  bl 0x7103375650
7101bf1ebc  ldr x8,[sp, #0x68]
7101bf1ec0  ldr x8,[x8]
7101bf1ec4  ldr x0,[x8]
7101bf1ec8  cbz x0,0x7101bf2bd4
7101bf1ecc  add w3,w21,#0x200
7101bf1ed0  adrp x1,0x7104432000
7101bf1ed4  add x1,x1,#0xfaf
7101bf1ed8  adrp x2,0x71042b2000
7101bf1edc  add x2,x2,#0xa84
7101bf1ee0  bl 0x7103375650
7101bf1ee4  ldr x8,[sp, #0x68]
7101bf1ee8  ldr x8,[x8]
7101bf1eec  ldr x0,[x8]
7101bf1ef0  cbz x0,0x7101bf2bd4
7101bf1ef4  mov w21,#0x5020000
7101bf1ef8  adrp x1,0x7104401000
7101bf1efc  add x1,x1,#0x3a3
7101bf1f00  adrp x2,0x71042b2000
7101bf1f04  add x2,x2,#0xa84
7101bf1f08  mov w3,w21
7101bf1f0c  bl 0x7103375650
7101bf1f10  ldr x8,[sp, #0x68]
7101bf1f14  ldr x8,[x8]
7101bf1f18  ldr x0,[x8]
7101bf1f1c  cbz x0,0x7101bf2bd4
7101bf1f20  add w3,w21,#0x10, LSL #12
7101bf1f24  adrp x1,0x710433a000
7101bf1f28  add x1,x1,#0x88
7101bf1f2c  adrp x2,0x71042b2000
7101bf1f30  add x2,x2,#0xa84
7101bf1f34  bl 0x7103375650
7101bf1f38  ldr x8,[sp, #0x68]
7101bf1f3c  ldr x8,[x8]
7101bf1f40  ldr x0,[x8]
7101bf1f44  cbz x0,0x7101bf2bd4
7101bf1f48  add w3,w21,#0x20, LSL #12
7101bf1f4c  adrp x1,0x71043f0000
7101bf1f50  add x1,x1,#0x800
7101bf1f54  adrp x2,0x71042b2000
7101bf1f58  add x2,x2,#0xa84
7101bf1f5c  bl 0x7103375650
7101bf1f60  ldr x8,[sp, #0x68]
7101bf1f64  ldr x8,[x8]
7101bf1f68  ldr x0,[x8]
7101bf1f6c  cbz x0,0x7101bf2bd4
7101bf1f70  add w3,w21,#0x30, LSL #12
7101bf1f74  adrp x1,0x7104291000
7101bf1f78  add x1,x1,#0xb37
7101bf1f7c  adrp x2,0x71042b2000
7101bf1f80  add x2,x2,#0xa84
7101bf1f84  bl 0x7103375650
7101bf1f88  ldr x8,[sp, #0x68]
7101bf1f8c  ldr x8,[x8]
7101bf1f90  ldr x0,[x8]
7101bf1f94  cbz x0,0x7101bf2bd4
7101bf1f98  add w3,w21,#0x40, LSL #12
7101bf1f9c  adrp x1,0x7104329000
7101bf1fa0  add x1,x1,#0xeaf
7101bf1fa4  adrp x2,0x71042b2000
7101bf1fa8  add x2,x2,#0xa84
7101bf1fac  bl 0x7103375650
7101bf1fb0  ldr x8,[sp, #0x68]
7101bf1fb4  ldr x8,[x8]
7101bf1fb8  ldr x0,[x8]
7101bf1fbc  cbz x0,0x7101bf2bd4
7101bf1fc0  mov w21,#0x100
7101bf1fc4  movk w21,#0x506, LSL #16
7101bf1fc8  adrp x1,0x71042c4000
7101bf1fcc  add x1,x1,#0xc95
7101bf1fd0  adrp x2,0x71042b2000
7101bf1fd4  add x2,x2,#0xa84
7101bf1fd8  mov w3,w21
7101bf1fdc  bl 0x7103375650
7101bf1fe0  ldr x8,[sp, #0x68]
7101bf1fe4  ldr x8,[x8]
7101bf1fe8  ldr x0,[x8]
7101bf1fec  cbz x0,0x7101bf2bd4
7101bf1ff0  add w3,w21,#0x100
7101bf1ff4  adrp x1,0x71043cf000
7101bf1ff8  add x1,x1,#0x386
7101bf1ffc  adrp x2,0x71042b2000
7101bf2000  add x2,x2,#0xa84
7101bf2004  bl 0x7103375650
7101bf2008  ldr x8,[sp, #0x68]
7101bf200c  ldr x8,[x8]
7101bf2010  ldr x0,[x8]
7101bf2014  cbz x0,0x7101bf2bd4
7101bf2018  add w3,w21,#0x200
7101bf201c  adrp x1,0x710438c000
7101bf2020  add x1,x1,#0x8f4
7101bf2024  adrp x2,0x71042b2000
7101bf2028  add x2,x2,#0xa84
7101bf202c  bl 0x7103375650
7101bf2030  ldr x8,[sp, #0x68]
7101bf2034  ldr x8,[x8]
7101bf2038  ldr x0,[x8]
7101bf203c  cbz x0,0x7101bf2bd4
7101bf2040  add w3,w21,#0x300
7101bf2044  adrp x1,0x710434a000
7101bf2048  add x1,x1,#0x22d
7101bf204c  adrp x2,0x71042b2000
7101bf2050  add x2,x2,#0xa84
7101bf2054  bl 0x7103375650
7101bf2058  ldr x8,[sp, #0x68]
7101bf205c  ldr x8,[x8]
7101bf2060  ldr x0,[x8]
7101bf2064  cbz x0,0x7101bf2bd4
7101bf2068  add w3,w21,#0x400
7101bf206c  adrp x1,0x7104443000
7101bf2070  add x1,x1,#0x59e
7101bf2074  adrp x2,0x71042b2000
7101bf2078  add x2,x2,#0xa84
7101bf207c  bl 0x7103375650
7101bf2080  ldr x8,[sp, #0x68]
7101bf2084  ldr x8,[x8]
7101bf2088  ldr x0,[x8]
7101bf208c  cbz x0,0x7101bf2bd4
7101bf2090  mov w21,#0x5070000
7101bf2094  adrp x1,0x710439d000
7101bf2098  add x1,x1,#0x33d
7101bf209c  adrp x2,0x71042b2000
7101bf20a0  add x2,x2,#0xa84
7101bf20a4  mov w3,w21
7101bf20a8  bl 0x7103375650
7101bf20ac  ldr x8,[sp, #0x68]
7101bf20b0  ldr x8,[x8]
7101bf20b4  ldr x0,[x8]
7101bf20b8  cbz x0,0x7101bf2bd4
7101bf20bc  add w3,w21,#0x10, LSL #12
7101bf20c0  adrp x1,0x7104291000
7101bf20c4  add x1,x1,#0xb51
7101bf20c8  adrp x2,0x71042b2000
7101bf20cc  add x2,x2,#0xa84
7101bf20d0  bl 0x7103375650
7101bf20d4  ldr x8,[sp, #0x68]
7101bf20d8  ldr x8,[x8]
7101bf20dc  ldr x0,[x8]
7101bf20e0  cbz x0,0x7101bf2bd4
7101bf20e4  adrp x1,0x7104291000
7101bf20e8  add x1,x1,#0xb6d
7101bf20ec  adrp x2,0x71042b2000
7101bf20f0  add x2,x2,#0xa84
7101bf20f4  orr w3,wzr,#0x6000000
7101bf20f8  bl 0x7103375650
7101bf20fc  ldr x8,[sp, #0x68]
7101bf2100  ldr x8,[x8]
7101bf2104  ldr x0,[x8]
7101bf2108  cbz x0,0x7101bf2bd4
7101bf210c  add w3,w21,#0xfa0, LSL #12
7101bf2110  adrp x1,0x71043f0000
7101bf2114  add x1,x1,#0x821
7101bf2118  adrp x2,0x71042b2000
7101bf211c  add x2,x2,#0xa84
7101bf2120  bl 0x7103375650
7101bf2124  ldr x8,[sp, #0x68]
7101bf2128  ldr x8,[x8]
7101bf212c  ldr x0,[x8]
7101bf2130  cbz x0,0x7101bf2bd4
7101bf2134  add w3,w21,#0xfb0, LSL #12
7101bf2138  adrp x1,0x7104401000
7101bf213c  add x1,x1,#0x3c3
7101bf2140  adrp x2,0x71042b2000
7101bf2144  add x2,x2,#0xa84
7101bf2148  bl 0x7103375650
7101bf214c  ldr x8,[sp, #0x68]
7101bf2150  ldr x8,[x8]
7101bf2154  ldr x0,[x8]
7101bf2158  cbz x0,0x7101bf2bd4
7101bf215c  add w3,w21,#0xfc0, LSL #12
7101bf2160  adrp x1,0x71043f0000
7101bf2164  add x1,x1,#0x837
7101bf2168  adrp x2,0x71042b2000
7101bf216c  add x2,x2,#0xa84
7101bf2170  bl 0x7103375650
7101bf2174  ldr x8,[sp, #0x68]
7101bf2178  ldr x8,[x8]
7101bf217c  ldr x0,[x8]
7101bf2180  cbz x0,0x7101bf2bd4
7101bf2184  add w3,w21,#0xfd0, LSL #12
7101bf2188  adrp x1,0x7104422000
7101bf218c  add x1,x1,#0x2ae
7101bf2190  adrp x2,0x71042b2000
7101bf2194  add x2,x2,#0xa84
7101bf2198  bl 0x7103375650
7101bf219c  ldr x8,[sp, #0x68]
7101bf21a0  ldr x8,[x8]
7101bf21a4  ldr x0,[x8]
7101bf21a8  cbz x0,0x7101bf2bd4
7101bf21ac  add w3,w21,#0xfe0, LSL #12
7101bf21b0  adrp x1,0x71043f0000
7101bf21b4  add x1,x1,#0x84f
7101bf21b8  adrp x2,0x71042b2000
7101bf21bc  add x2,x2,#0xa84
7101bf21c0  bl 0x7103375650
7101bf21c4  ldr x8,[sp, #0x68]
7101bf21c8  ldr x8,[x8]
7101bf21cc  ldr x0,[x8]
7101bf21d0  cbz x0,0x7101bf2bd4
7101bf21d4  add w3,w21,#0xff0, LSL #12
7101bf21d8  adrp x1,0x71042e6000
7101bf21dc  add x1,x1,#0xfeb
7101bf21e0  adrp x2,0x71042b2000
7101bf21e4  add x2,x2,#0xa84
7101bf21e8  bl 0x7103375650
7101bf21ec  ldr x8,[sp, #0x68]
7101bf21f0  ldr x8,[x8]
7101bf21f4  ldr x0,[x8]
7101bf21f8  cbz x0,0x7101bf2bd4
7101bf21fc  adrp x1,0x7104318000
7101bf2200  add x1,x1,#0xdc2
7101bf2204  adrp x2,0x71042b2000
7101bf2208  add x2,x2,#0xa84
7101bf220c  orr w3,wzr,#0x7000000
7101bf2210  bl 0x7103375650
7101bf2214  ldr x8,[sp, #0x68]
7101bf2218  ldr x8,[x8]
7101bf221c  ldr x0,[x8]
7101bf2220  cbz x0,0x7101bf2bd4
7101bf2224  mov w21,#0x7010000
7101bf2228  adrp x1,0x7104454000
7101bf222c  add x1,x1,#0x91e
7101bf2230  adrp x2,0x71042b2000
7101bf2234  add x2,x2,#0xa84
7101bf2238  mov w3,w21
7101bf223c  bl 0x7103375650
7101bf2240  ldr x8,[sp, #0x68]
7101bf2244  ldr x8,[x8]
7101bf2248  ldr x0,[x8]
7101bf224c  cbz x0,0x7101bf2bd4
7101bf2250  add w3,w21,#0x100
7101bf2254  adrp x1,0x71042c4000
7101bf2258  add x1,x1,#0xcb6
7101bf225c  adrp x2,0x71042b2000
7101bf2260  add x2,x2,#0xa84
7101bf2264  bl 0x7103375650
7101bf2268  ldr x8,[sp, #0x68]
7101bf226c  ldr x8,[x8]
7101bf2270  ldr x0,[x8]
7101bf2274  cbz x0,0x7101bf2bd4
7101bf2278  add w3,w21,#0x200
7101bf227c  adrp x1,0x7104422000
7101bf2280  add x1,x1,#0x2c4
7101bf2284  adrp x2,0x71042b2000
7101bf2288  add x2,x2,#0xa84
7101bf228c  bl 0x7103375650
7101bf2290  ldr x8,[sp, #0x68]
7101bf2294  ldr x8,[x8]
7101bf2298  ldr x0,[x8]
7101bf229c  cbz x0,0x7101bf2bd4
7101bf22a0  add w3,w21,#0x300
7101bf22a4  adrp x1,0x710439d000
7101bf22a8  add x1,x1,#0x356
7101bf22ac  adrp x2,0x71042b2000
7101bf22b0  add x2,x2,#0xa84
7101bf22b4  bl 0x7103375650
7101bf22b8  ldr x8,[sp, #0x68]
7101bf22bc  ldr x8,[x8]
7101bf22c0  ldr x0,[x8]
7101bf22c4  cbz x0,0x7101bf2bd4
7101bf22c8  add w3,w21,#0x400
7101bf22cc  adrp x1,0x7104401000
7101bf22d0  add x1,x1,#0x3da
7101bf22d4  adrp x2,0x71042b2000
7101bf22d8  add x2,x2,#0xa84
7101bf22dc  bl 0x7103375650
7101bf22e0  ldr x8,[sp, #0x68]
7101bf22e4  ldr x8,[x8]
7101bf22e8  ldr x0,[x8]
7101bf22ec  cbz x0,0x7101bf2bd4
7101bf22f0  add w3,w21,#0x600
7101bf22f4  adrp x1,0x710438c000
7101bf22f8  add x1,x1,#0x917
7101bf22fc  adrp x2,0x71042b2000
7101bf2300  add x2,x2,#0xa84
7101bf2304  bl 0x7103375650
7101bf2308  ldr x8,[sp, #0x68]
7101bf230c  ldr x8,[x8]
7101bf2310  ldr x0,[x8]
7101bf2314  cbz x0,0x7101bf2bd4
7101bf2318  add w3,w21,#0x800
7101bf231c  adrp x1,0x7104280000
7101bf2320  add x1,x1,#0x8cf
7101bf2324  adrp x2,0x71042b2000
7101bf2328  add x2,x2,#0xa84
7101bf232c  bl 0x7103375650
7101bf2330  ldr x8,[sp, #0x68]
7101bf2334  ldr x8,[x8]
7101bf2338  ldr x0,[x8]
7101bf233c  cbz x0,0x7101bf2bd4
7101bf2340  add w3,w21,#0x10, LSL #12
7101bf2344  adrp x1,0x7104432000
7101bf2348  add x1,x1,#0xfcf
7101bf234c  adrp x2,0x71042b2000
7101bf2350  add x2,x2,#0xa84
7101bf2354  bl 0x7103375650
7101bf2358  ldr x8,[sp, #0x68]
7101bf235c  ldr x8,[x8]
7101bf2360  ldr x0,[x8]
7101bf2364  cbz x0,0x7101bf2bd4
7101bf2368  add w3,w21,#0x60, LSL #12
7101bf236c  adrp x1,0x710424f000
7101bf2370  add x1,x1,#0x449
7101bf2374  adrp x2,0x71042b2000
7101bf2378  add x2,x2,#0xa84
7101bf237c  bl 0x7103375650
7101bf2380  ldr x8,[sp, #0x68]
7101bf2384  ldr x8,[x8]
7101bf2388  ldr x0,[x8]
7101bf238c  cbz x0,0x7101bf2bd4
7101bf2390  adrp x1,0x710424f000
7101bf2394  add x1,x1,#0x45f
7101bf2398  adrp x2,0x71042b2000
7101bf239c  add x2,x2,#0xa84
7101bf23a0  mov w3,wzr
7101bf23a4  bl 0x7103375650
7101bf23a8  ldr x8,[sp, #0x68]
7101bf23ac  ldr x8,[x8]
7101bf23b0  ldr x0,[x8]
7101bf23b4  cbz x0,0x7101bf2bd4
7101bf23b8  adrp x1,0x7104401000
7101bf23bc  add x1,x1,#0x3fb
7101bf23c0  adrp x2,0x71042b2000
7101bf23c4  add x2,x2,#0xa84
7101bf23c8  mov w3,#0x1
7101bf23cc  bl 0x7103375650
7101bf23d0  ldr x8,[sp, #0x68]
7101bf23d4  ldr x8,[x8]
7101bf23d8  ldr x0,[x8]
7101bf23dc  cbz x0,0x7101bf2bd4
7101bf23e0  adrp x1,0x71043ad000
7101bf23e4  add x1,x1,#0x6a8
7101bf23e8  adrp x2,0x71042b2000
7101bf23ec  add x2,x2,#0xa84
7101bf23f0  mov w3,#0x2
7101bf23f4  bl 0x7103375650
7101bf23f8  ldr x8,[sp, #0x68]
7101bf23fc  ldr x8,[x8]
7101bf2400  ldr x0,[x8]
7101bf2404  cbz x0,0x7101bf2bd4
7101bf2408  adrp x1,0x71042f8000
7101bf240c  add x1,x1,#0x1e1
7101bf2410  adrp x2,0x71042b2000
7101bf2414  add x2,x2,#0xa84
7101bf2418  mov w3,wzr
7101bf241c  bl 0x7103375650
7101bf2420  ldr x8,[sp, #0x68]
7101bf2424  ldr x8,[x8]
7101bf2428  ldr x0,[x8]
7101bf242c  cbz x0,0x7101bf2bd4
7101bf2430  adrp x1,0x710435b000
7101bf2434  add x1,x1,#0x68b
7101bf2438  adrp x2,0x71042b2000
7101bf243c  add x2,x2,#0xa84
7101bf2440  mov w3,#0x1
7101bf2444  bl 0x7103375650
7101bf2448  ldr x8,[sp, #0x68]
7101bf244c  ldr x8,[x8]
7101bf2450  ldr x0,[x8]
7101bf2454  cbz x0,0x7101bf2bd4
7101bf2458  adrp x1,0x710436c000
7101bf245c  add x1,x1,#0x228
7101bf2460  adrp x2,0x71042b2000
7101bf2464  add x2,x2,#0xa84
7101bf2468  mov w3,#0x2
7101bf246c  bl 0x7103375650
7101bf2470  ldr x8,[sp, #0x68]
7101bf2474  ldr x8,[x8]
7101bf2478  ldr x0,[x8]
7101bf247c  cbz x0,0x7101bf2bd4
7101bf2480  adrp x1,0x710435b000
7101bf2484  add x1,x1,#0x671
7101bf2488  adrp x2,0x71042b2000
7101bf248c  add x2,x2,#0xa84
7101bf2490  mov w3,w20
7101bf2494  bl 0x7103375650
7101bf2498  ldr x8,[sp, #0x68]
7101bf249c  ldr x8,[x8]
7101bf24a0  ldr x8,[x8]
7101bf24a4  cbz x8,0x7101bf2bd4
7101bf24a8  ldr x20,[x8]
7101bf24ac  b 0x7101bf2bd8
7101bf24b0  mov x20,xzr
7101bf24b4  adrp x21,0x710426f000
7101bf24b8  add x21,x21,#0xee3
7101bf24bc  mov x0,x20
7101bf24c0  mov x1,x21
7101bf24c4  bl 0x71038f7260
7101bf24c8  ldr x8,[x20, #0x10]
7101bf24cc  ldp x9,x10,[x8, #-0x10]
7101bf24d0  stp x9,x10,[x8]
7101bf24d4  ldr x8,[x20, #0x10]
7101bf24d8  add x9,x8,#0x10
7101bf24dc  sub x1,x8,#0x10
7101bf24e0  adrp x2,0x71042a1000
7101bf24e4  add x2,x2,#0xcc7
7101bf24e8  mov x0,x20
7101bf24ec  str x9,[x20, #0x10]
7101bf24f0  bl 0x71038f5390
7101bf24f4  adrp x1,0x71050ac000
7101bf24f8  add x1,x1,#0x630
7101bf24fc  mov x0,x20
7101bf2500  mov w2,wzr
7101bf2504  bl 0x71038f9510
7101bf2508  ldr x8,[x20, #0x10]
7101bf250c  sub x8,x8,#0x10
7101bf2510  mov w1,#0x8
7101bf2514  mov x0,x20
7101bf2518  str x8,[x20, #0x10]
7101bf251c  bl 0x71038f6930
7101bf2520  str xzr,[x0]
7101bf2524  ldr x8,[x20, #0x18]
7101bf2528  add x1,x8,#0x40
7101bf252c  mov x0,x20
7101bf2530  mov x2,x21
7101bf2534  bl 0x71038f4d40
7101bf2538  orr w1,wzr,#0xfffffffe
7101bf253c  mov x0,x20
7101bf2540  bl 0x71038f5c00
7101bf2544  cbz x20,0x7101bf25c4
7101bf2548  ldr x8,[x20, #0x18]
7101bf254c  ldr x8,[x8, #0x40]
7101bf2550  ldr w9,[x8, #0xc]
7101bf2554  cmp w9,#0x2
7101bf2558  b.cc 0x7101bf2568
7101bf255c  ldr x8,[x8, #0x10]
7101bf2560  add x1,x8,#0x10
7101bf2564  b 0x7101bf25b4
7101bf2568  ldr x9,[x8, #0x18]
7101bf256c  ldrb w8,[x8, #0xb]
7101bf2570  mov w10,#0xffffffff
7101bf2574  lsl x8,x10,x8
7101bf2578  mvn w8,w8
7101bf257c  and x8,x8,#0x2
7101bf2580  add x1,x9,x8, LSL #0x5
7101bf2584  adrp x8,0x7104862000
7101bf2588  add x8,x8,#0x960
7101bf258c  ldr w9,[x1, #0x18]
7101bf2590  cmp w9,#0x13
7101bf2594  b.ne 0x7101bf25a4
7101bf2598  ldr x9,[x1, #0x10]
7101bf259c  cmp x9,#0x2
7101bf25a0  b.eq 0x7101bf25b4
7101bf25a4  ldrsw x9,[x1, #0x1c]
7101bf25a8  add x1,x1,x9, LSL #0x5
7101bf25ac  cbnz w9,0x7101bf258c
7101bf25b0  mov x1,x8
7101bf25b4  adrp x2,0x710426f000
7101bf25b8  add x2,x2,#0xee3
7101bf25bc  mov x0,x20
7101bf25c0  bl 0x71038f5390
7101bf25c4  ldr x8,[x24]
7101bf25c8  ldr x8,[x8]
7101bf25cc  cbz x8,0x7101bf25d8
7101bf25d0  ldr x20,[x8]
7101bf25d4  b 0x7101bf25dc
7101bf25d8  mov x20,xzr
7101bf25dc  adrp x21,0x7104281000
7101bf25e0  add x21,x21,#0x295
7101bf25e4  mov x0,x20
7101bf25e8  mov x1,x21
7101bf25ec  bl 0x71038f7260
7101bf25f0  ldr x8,[x20, #0x10]
7101bf25f4  ldp x9,x10,[x8, #-0x10]
7101bf25f8  stp x9,x10,[x8]
7101bf25fc  ldr x8,[x20, #0x10]
7101bf2600  add x9,x8,#0x10
7101bf2604  sub x1,x8,#0x10
7101bf2608  adrp x2,0x71042a1000
7101bf260c  add x2,x2,#0xcc7
7101bf2610  mov x0,x20
7101bf2614  str x9,[x20, #0x10]
7101bf2618  bl 0x71038f5390
7101bf261c  adrp x1,0x71050ac000
7101bf2620  add x1,x1,#0x840
7101bf2624  mov x0,x20
7101bf2628  mov w2,wzr
7101bf262c  bl 0x71038f9510
7101bf2630  ldr x8,[x20, #0x10]
7101bf2634  sub x8,x8,#0x10
7101bf2638  mov w1,#0x8
7101bf263c  mov x0,x20
7101bf2640  str x8,[x20, #0x10]
7101bf2644  bl 0x71038f6930
7101bf2648  str x25,[x0]
7101bf264c  ldr x8,[x20, #0x18]
7101bf2650  add x1,x8,#0x40
7101bf2654  mov x0,x20
7101bf2658  mov x2,x21
7101bf265c  bl 0x71038f4d40
7101bf2660  orr w1,wzr,#0xfffffffe
7101bf2664  mov x0,x20
7101bf2668  bl 0x71038f5c00
7101bf266c  cbz x20,0x7101bf26ec
7101bf2670  ldr x8,[x20, #0x18]
7101bf2674  ldr x8,[x8, #0x40]
7101bf2678  ldr w9,[x8, #0xc]
7101bf267c  cmp w9,#0x2
7101bf2680  b.cc 0x7101bf2690
7101bf2684  ldr x8,[x8, #0x10]
7101bf2688  add x1,x8,#0x10
7101bf268c  b 0x7101bf26dc
7101bf2690  ldr x9,[x8, #0x18]
7101bf2694  ldrb w8,[x8, #0xb]
7101bf2698  mov w10,#0xffffffff
7101bf269c  lsl x8,x10,x8
7101bf26a0  mvn w8,w8
7101bf26a4  and x8,x8,#0x2
7101bf26a8  add x1,x9,x8, LSL #0x5
7101bf26ac  adrp x8,0x7104862000
7101bf26b0  add x8,x8,#0x960
7101bf26b4  ldr w9,[x1, #0x18]
7101bf26b8  cmp w9,#0x13
7101bf26bc  b.ne 0x7101bf26cc
7101bf26c0  ldr x9,[x1, #0x10]
7101bf26c4  cmp x9,#0x2
7101bf26c8  b.eq 0x7101bf26dc
7101bf26cc  ldrsw x9,[x1, #0x1c]
7101bf26d0  add x1,x1,x9, LSL #0x5
7101bf26d4  cbnz w9,0x7101bf26b4
7101bf26d8  mov x1,x8
7101bf26dc  adrp x2,0x7104281000
7101bf26e0  add x2,x2,#0x295
7101bf26e4  mov x0,x20
7101bf26e8  bl 0x71038f5390
7101bf26ec  ldp x13,x14,[x23, #0x28]
7101bf26f0  sub x8,x14,x13
7101bf26f4  lsr x8,x8,#0x3
7101bf26f8  cmp w8,#0x1
7101bf26fc  b.lt 0x7101bf276c
7101bf2700  mov x8,xzr
7101bf2704  mov w9,#0x80
7101bf2708  mov w10,#0x100
7101bf270c  mov w11,#0x200
7101bf2710  orr w12,wzr,#0xc0000
7101bf2714  sub x14,x14,x13
7101bf2718  asr x14,x14,#0x3
7101bf271c  cmp x14,x8
7101bf2720  b.ls 0x7101bf2c30
7101bf2724  ldr x13,[x13, x8, LSL #0x3]
7101bf2728  add x8,x8,#0x1
7101bf272c  ldr x13,[x13]
7101bf2730  ldr x13,[x13]
7101bf2734  ldr x13,[x13]
7101bf2738  ldr x14,[x13, #0x600]
7101bf273c  str w9,[x14, #0x18]
7101bf2740  ldr x14,[x13, #0x600]
7101bf2744  str w10,[x14, #0x1c]
7101bf2748  ldr x14,[x13, #0x600]
7101bf274c  str w11,[x14, #0x20]
7101bf2750  ldr x13,[x13, #0x600]
7101bf2754  str w12,[x13, #0xdc]
7101bf2758  ldp x13,x14,[x23, #0x28]
7101bf275c  sub x15,x14,x13
7101bf2760  lsr x15,x15,#0x3
7101bf2764  cmp x8,w15, SXTW 
7101bf2768  b.lt 0x7101bf2714
7101bf276c  ldr x8,[x24]
7101bf2770  ldr x0,[x8]
7101bf2774  cbz x0,0x7101bf27d8
7101bf2778  adrp x1,0x71043e0000
7101bf277c  add x1,x1,#0x2d
7101bf2780  adrp x2,0x71042b2000
7101bf2784  add x2,x2,#0xa84
7101bf2788  orr w3,wzr,#0x6
7101bf278c  bl 0x7103375650
7101bf2790  ldr x8,[x24]
7101bf2794  ldr x0,[x8]
7101bf2798  cbz x0,0x7101bf27d8
7101bf279c  adrp x1,0x7104318000
7101bf27a0  add x1,x1,#0xdd2
7101bf27a4  adrp x2,0x71042b2000
7101bf27a8  add x2,x2,#0xa84
7101bf27ac  orr w3,wzr,#0x7
7101bf27b0  bl 0x7103375650
7101bf27b4  ldr x8,[x24]
7101bf27b8  ldr x0,[x8]
7101bf27bc  cbz x0,0x7101bf27d8
7101bf27c0  adrp x1,0x7104422000
7101bf27c4  add x1,x1,#0x2df
7101bf27c8  adrp x2,0x71042b2000
7101bf27cc  add x2,x2,#0xa84
7101bf27d0  mov w3,#0x8
7101bf27d4  bl 0x7103375650
7101bf27d8  mov x0,#0xb9a7
7101bf27dc  movk x0,#0xbc1a, LSL #16
7101bf27e0  movk x0,#0xff0d, LSL #32
7101bf27e4  movk x0,#0xc1ff, LSL #48
7101bf27e8  bl 0x71025d2a00
7101bf27ec  add sp,sp,#0x340
7101bf27f0  ldp x29,x30,[sp, #0x50]
7101bf27f4  ldp x20,x19,[sp, #0x40]
7101bf27f8  ldp x22,x21,[sp, #0x30]
7101bf27fc  ldp x24,x23,[sp, #0x20]
7101bf2800  ldp x26,x25,[sp, #0x10]
7101bf2804  ldp x28,x27,[sp], #0x60
7101bf2808  ret
7101bf280c  adrp x9,0x7105307000
7101bf2810  add x9,x9,#0x8b0
7101bf2814  ldr x8,[sp, #0x1b8]
7101bf2818  ldr x10,[x9, #0x18]
7101bf281c  cmp x10,x8
7101bf2820  b.lt 0x7101bf18f4
7101bf2824  ldr x9,[x9]
7101bf2828  cmp x8,x9
7101bf282c  b.lt 0x7101bf18f4
7101bf2830  adrp x0,0x7105307000
7101bf2834  add x0,x0,#0x790
7101bf2838  bl 0x710172a350
7101bf283c  tbz w0,#0x0,0x7101bf18f4
7101bf2840  adrp x21,0x710523d000
7101bf2844  add x21,x21,#0xa28
7101bf2848  mov w0,#0x10
7101bf284c  mov w1,#0x10
7101bf2850  str x21,[sp, #0x1c8]
7101bf2854  bl 0x710392e290
7101bf2858  cbnz x0,0x7101bf28a0
7101bf285c  adrp x8,0x7105332000
7101bf2860  ldr x0,[x8, #0xf00]
7101bf2864  cbz x0,0x7101bf289c
7101bf2868  mov w8,#0x10
7101bf286c  stur wzr,[x29, #-0x60]
7101bf2870  sub x1,x29,#0x60
7101bf2874  str x8,[sp, #0xa8]
7101bf2878  ldr x8,[x0]
7101bf287c  ldr x8,[x8, #0x30]
7101bf2880  add x2,sp,#0xa8
7101bf2884  blr x8
7101bf2888  tbz w0,#0x0,0x7101bf289c
7101bf288c  mov w0,#0x10
7101bf2890  mov w1,#0x10
7101bf2894  bl 0x710392e290
7101bf2898  cbnz x0,0x7101bf28a0
7101bf289c  mov x0,xzr
7101bf28a0  ldr x8,[sp, #0x90]
7101bf28a4  stp xzr,xzr,[x0]
7101bf28a8  str x0,[sp, #0x1d0]
7101bf28ac  add x22,x8,#0xf0
7101bf28b0  add x19,x8,#0xf4
7101bf28b4  mov w8,#0x2
7101bf28b8  str w8,[sp, #0x1b8]
7101bf28bc  adrp x8,0x7105307000
7101bf28c0  stp xzr,xzr,[sp, #0x1e0]
7101bf28c4  ldr x8,[x8, #0x8b0]
7101bf28c8  add x23,sp,#0x1b8
7101bf28cc  mov x20,xzr
7101bf28d0  strb wzr,[sp, #0x208]
7101bf28d4  str xzr,[sp, #0x200]
7101bf28d8  str x8,[sp, #0x1c0]
7101bf28dc  stp xzr,xzr,[x0]
7101bf28e0  cbz x20,0x7101bf2914
7101bf28e4  add x8,x20,#0x8
7101bf28e8  ldaxr x9,[x8]
7101bf28ec  sub x10,x9,#0x1
7101bf28f0  stlxr w11,x10,[x8]
7101bf28f4  cbnz w11,0x7101bf28e8
7101bf28f8  cbnz x9,0x7101bf2914
7101bf28fc  ldr x8,[x20]
7101bf2900  ldr x8,[x8, #0x10]
7101bf2904  mov x0,x20
7101bf2908  blr x8
7101bf290c  mov x0,x20
7101bf2910  bl 0x71039c2670
7101bf2914  adrp x8,0x7105307000
7101bf2918  add x8,x8,#0x7a0
7101bf291c  add x20,x23,#0x10
7101bf2920  cmp x22,x8
7101bf2924  b.eq 0x7101bf2984
7101bf2928  ldr x14,[sp, #0x90]
7101bf292c  mov x8,xzr
7101bf2930  mov w9,#0x2624
7101bf2934  movk w9,#0x4, LSL #16
7101bf2938  adrp x10,0x71052c5000
7101bf293c  add x10,x10,#0x180
7101bf2940  add x11,x10,x8, LSL #0x1
7101bf2944  add x12,x11,x9
7101bf2948  ldrh w13,[x12]
7101bf294c  cbz w13,0x7101bf2978
7101bf2950  add x11,x14,x8, LSL #0x1
7101bf2954  strh w13,[x11, #0xf4]
7101bf2958  ldrh w12,[x12, #0x2]
7101bf295c  cbz w12,0x7101bf2974
7101bf2960  add x8,x8,#0x2
7101bf2964  cmp w8,#0x40
7101bf2968  strh w12,[x11, #0xf6]
7101bf296c  b.cc 0x7101bf2940
7101bf2970  b 0x7101bf2978
7101bf2974  add x8,x8,#0x1
7101bf2978  add x9,x25,w8, UXTW  #0x1
7101bf297c  strh wzr,[x9, #0xdc]
7101bf2980  str w8,[x22]
7101bf2984  str x19,[sp, #0x1d8]
7101bf2988  adrp x19,0x7105307000
7101bf298c  add x19,x19,#0x8b8
7101bf2990  ldr x0,[x19]
7101bf2994  add x23,sp,#0x1b8
7101bf2998  add x1,x23,#0x28
7101bf299c  add x22,x23,#0x20
7101bf29a0  bl 0x7103741810
7101bf29a4  ldr x0,[x19, #0x8]
7101bf29a8  add x1,x23,#0x30
7101bf29ac  bl 0x7103741810
7101bf29b0  adrp x9,0x7104544000
7101bf29b4  add x9,x9,#0xe88
7101bf29b8  str x9,[sp, #0x1f0]
7101bf29bc  add x9,x9,#0x20
7101bf29c0  mov x8,xzr
7101bf29c4  mov w10,#0x27d0
7101bf29c8  movk w10,#0x4, LSL #16
7101bf29cc  str x9,[sp, #0x1f8]
7101bf29d0  adrp x9,0x71052c5000
7101bf29d4  add x9,x9,#0x180
7101bf29d8  b 0x7101bf29e4
7101bf29dc  add x8,x8,#0x2
7101bf29e0  strb w11,[x12, #0x51]
7101bf29e4  add x11,x9,x8
7101bf29e8  add x11,x11,x10
7101bf29ec  ldrb w13,[x11]
7101bf29f0  cbz w13,0x7101bf2a1c
7101bf29f4  add w14,w8,#0x1
7101bf29f8  add x12,x23,x8
7101bf29fc  cmp w14,#0xff
7101bf2a00  strb w13,[x12, #0x50]
7101bf2a04  b.cs 0x7101bf2a18
7101bf2a08  ldrb w11,[x11, #0x1]
7101bf2a0c  cbnz w11,0x7101bf29dc
7101bf2a10  add x8,x8,#0x1
7101bf2a14  b 0x7101bf2a1c
7101bf2a18  add w8,w8,#0x1
7101bf2a1c  add x9,sp,#0x1b8
7101bf2a20  add x10,x9,#0x50
7101bf2a24  ldr x12,[sp, #0x90]
7101bf2a28  strb wzr,[x10, w8, UXTW ]
7101bf2a2c  str w8,[sp, #0x204]
7101bf2a30  ldrb w8,[sp, #0x208]
7101bf2a34  mov w19,#0x9dc5
7101bf2a38  movk w19,#0x811c, LSL #16
7101bf2a3c  mov w10,w19
7101bf2a40  cbz w8,0x7101bf2a64
7101bf2a44  add x9,x9,#0x51
7101bf2a48  mov w11,#0x89
7101bf2a4c  mov w10,w19
7101bf2a50  mul w10,w10,w11
7101bf2a54  and w8,w8,#0xff
7101bf2a58  eor w10,w10,w8
7101bf2a5c  ldrb w8,[x9], #0x1
7101bf2a60  cbnz w8,0x7101bf2a50
7101bf2a64  str w10,[sp, #0x200]
7101bf2a68  ldp x23,x8,[x12, #0xe0]
7101bf2a6c  cmp x23,x8
7101bf2a70  b.eq 0x7101bf2aec
7101bf2a74  ldp x8,x9,[sp, #0x1b8]
7101bf2a78  add x0,x23,#0x10
7101bf2a7c  mov x1,x20
7101bf2a80  stp x8,x9,[x23]
7101bf2a84  bl 0x710377b610
7101bf2a88  ldr x9,[x22]
7101bf2a8c  str x9,[x23, #0x20]
7101bf2a90  mov x8,xzr
7101bf2a94  ldp x9,x10,[x22, #0x8]
7101bf2a98  ldp x11,x12,[x22, #0x18]
7101bf2a9c  str wzr,[x23, #0x48]
7101bf2aa0  stp x9,x10,[x23, #0x28]
7101bf2aa4  add x9,sp,#0x1b8
7101bf2aa8  stp x11,x12,[x23, #0x38]
7101bf2aac  add x9,x9,#0x50
7101bf2ab0  b 0x7101bf2abc
7101bf2ab4  add x8,x8,#0x2
7101bf2ab8  strb w10,[x11, #0x51]
7101bf2abc  add x10,x9,x8
7101bf2ac0  ldrb w12,[x10]
7101bf2ac4  cbz w12,0x7101bf2b04
7101bf2ac8  add w13,w8,#0x1
7101bf2acc  add x11,x23,x8
7101bf2ad0  cmp w13,#0xff
7101bf2ad4  strb w12,[x11, #0x50]
7101bf2ad8  b.cs 0x7101bf2b00
7101bf2adc  ldrb w10,[x10, #0x1]
7101bf2ae0  cbnz w10,0x7101bf2ab4
7101bf2ae4  add x8,x8,#0x1
7101bf2ae8  b 0x7101bf2b04
7101bf2aec  ldr x0,[sp, #0x30]
7101bf2af0  add x1,sp,#0x1b8
7101bf2af4  bl 0x7101be3dc0
7101bf2af8  ldr x23,[sp, #0x90]
7101bf2afc  b 0x7101bf2b48
7101bf2b00  add w8,w8,#0x1
7101bf2b04  add x9,x23,#0x50
7101bf2b08  strb wzr,[x9, w8, UXTW ]
7101bf2b0c  ldrb w9,[x23, #0x50]
7101bf2b10  str w8,[x23, #0x4c]
7101bf2b14  cbz w9,0x7101bf2b34
7101bf2b18  add x8,x23,#0x51
7101bf2b1c  mov w10,#0x89
7101bf2b20  mul w11,w19,w10
7101bf2b24  and w9,w9,#0xff
7101bf2b28  eor w19,w11,w9
7101bf2b2c  ldrb w9,[x8], #0x1
7101bf2b30  cbnz w9,0x7101bf2b20
7101bf2b34  str w19,[x23, #0x48]
7101bf2b38  ldr x23,[sp, #0x90]
7101bf2b3c  ldr x8,[x23, #0xe0]
7101bf2b40  add x8,x8,#0x150
7101bf2b44  str x8,[x23, #0xe0]
7101bf2b48  ldr x20,[sp, #0x1d0]
7101bf2b4c  stp x21,xzr,[sp, #0x1c8]
7101bf2b50  cbz x20,0x7101bf18f4
7101bf2b54  ldr x21,[x20, #0x8]
7101bf2b58  stp xzr,xzr,[x20]
7101bf2b5c  cbz x21,0x7101bf2bc8
7101bf2b60  add x8,x21,#0x8
7101bf2b64  ldaxr x9,[x8]
7101bf2b68  sub x10,x9,#0x1
7101bf2b6c  stlxr w11,x10,[x8]
7101bf2b70  cbnz w11,0x7101bf2b64
7101bf2b74  cbnz x9,0x7101bf2b90
7101bf2b78  ldr x8,[x21]
7101bf2b7c  ldr x8,[x8, #0x10]
7101bf2b80  mov x0,x21
7101bf2b84  blr x8
7101bf2b88  mov x0,x21
7101bf2b8c  bl 0x71039c2670
7101bf2b90  ldr x21,[x20, #0x8]
7101bf2b94  cbz x21,0x7101bf2bc8
7101bf2b98  add x8,x21,#0x8
7101bf2b9c  ldaxr x9,[x8]
7101bf2ba0  sub x10,x9,#0x1
7101bf2ba4  stlxr w11,x10,[x8]
7101bf2ba8  cbnz w11,0x7101bf2b9c
7101bf2bac  cbnz x9,0x7101bf2bc8
7101bf2bb0  ldr x8,[x21]
7101bf2bb4  ldr x8,[x8, #0x10]
7101bf2bb8  mov x0,x21
7101bf2bbc  blr x8
7101bf2bc0  mov x0,x21
7101bf2bc4  bl 0x71039c2670
7101bf2bc8  mov x0,x20
7101bf2bcc  bl 0x710392eb40
7101bf2bd0  b 0x7101bf18f4
7101bf2bd4  mov x20,xzr
7101bf2bd8  ldr x24,[sp, #0x68]
7101bf2bdc  b 0x7101bf2be4
7101bf2be0  mov x20,xzr
7101bf2be4  ldr x23,[sp, #0x90]
7101bf2be8  ldr x25,[sp, #0x60]
7101bf2bec  b 0x7101bf24b4
7101bf2bf0  adrp x0,0x7105314000
7101bf2bf4  add x0,x0,#0x4d8
7101bf2bf8  bl 0x71039c06b0
7101bf2bfc  cbz w0,0x7101bf18dc
7101bf2c00  bl 0x7101764000
7101bf2c04  adrp x0,0x7101763000
7101bf2c08  add x0,x0,#0xc40
7101bf2c0c  adrp x1,0x71052c5000
7101bf2c10  add x1,x1,#0x180
7101bf2c14  adrp x2,0x7104f17000
7101bf2c18  add x2,x2,#0x0
7101bf2c1c  bl 0x71000001c0
7101bf2c20  adrp x0,0x7105314000
7101bf2c24  add x0,x0,#0x4d8
7101bf2c28  bl 0x71039c06c0
7101bf2c2c  b 0x7101bf18dc
7101bf2c30  ldr x0,[sp, #0x28]
7101bf2c34  bl 0x71039c1330
7101bf2c38  mov x0,x28
7101bf2c3c  bl 0x71039c0c00
7101bf2c40  bl 0x71039c2650
7101bf2c44  ldr x0,[sp, #0x40]
7101bf2c48  bl 0x71039c0c00
