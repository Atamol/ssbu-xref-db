// addr:      7101ddf260
// offset:    0x1ddf260
// name:      FUN_7101ddf260
// mangled:   
// size:      2528

7101ddf260  sub sp,sp,#0x90
7101ddf264  stp x26,x25,[sp, #0x40]
7101ddf268  stp x24,x23,[sp, #0x50]
7101ddf26c  stp x22,x21,[sp, #0x60]
7101ddf270  stp x20,x19,[sp, #0x70]
7101ddf274  stp x29,x30,[sp, #0x80]
7101ddf278  add x29,sp,#0x80
7101ddf27c  ldr w8,[x0, #0x101c]
7101ddf280  cmp w8,#0x0
7101ddf284  b.gt 0x7101ddfc14
7101ddf288  ldr w8,[x0, #0xa4]
7101ddf28c  mov x19,x0
7101ddf290  cmp w8,#0x1
7101ddf294  b.eq 0x7101ddf2ec
7101ddf298  cbnz w8,0x7101ddfbac
7101ddf29c  mov x0,x19
7101ddf2a0  bl 0x7101ddcea0
7101ddf2a4  ldr x1,[x19, #0x28]
7101ddf2a8  ldr w21,[x1, #0x254]
7101ddf2ac  add x0,sp,#0x28
7101ddf2b0  mov w2,w21
7101ddf2b4  bl 0x7103771d60
7101ddf2b8  ldr x20,[sp, #0x30]
7101ddf2bc  ldr x1,[x20]
7101ddf2c0  mov x0,sp
7101ddf2c4  bl 0x710377ad90
7101ddf2c8  ldr x0,[sp, #0x8]
7101ddf2cc  ldr x8,[x0]
7101ddf2d0  cbz x8,0x7101ddf3a8
7101ddf2d4  movi v0.2D,#0x0
7101ddf2d8  add x9,x8,#0x30
7101ddf2dc  add x8,x8,#0x34
7101ddf2e0  ld1 {v0.S}[0],[x9]
7101ddf2e4  ld1 {v0.S}[1],[x8]
7101ddf2e8  b 0x7101ddf3b4
7101ddf2ec  mov x20,x19
7101ddf2f0  ldr x8,[x20, #0x40]!
7101ddf2f4  ldr w25,[x8, #0x2a4]
7101ddf2f8  mov x21,x20
7101ddf2fc  sxtw x23,w25
7101ddf300  ldr x8,[x21, #0x10]!
7101ddf304  ldr x9,[x20, #0x18]
7101ddf308  sub x9,x9,x8
7101ddf30c  asr x9,x9,#0x2
7101ddf310  cmp x9,x23
7101ddf314  b.ls 0x7101ddf338
7101ddf318  add x10,x8,x23, LSL #0x2
7101ddf31c  ldrb w11,[x10, #0x2]!
7101ddf320  cbz w11,0x7101ddf338
7101ddf324  sub w8,w11,#0x1
7101ddf328  strb w8,[x10]
7101ddf32c  ldp x8,x9,[x19, #0x50]
7101ddf330  sub x9,x9,x8
7101ddf334  asr x9,x9,#0x2
7101ddf338  cmp x9,x23
7101ddf33c  b.ls 0x7101ddfc30
7101ddf340  add x22,x8,x23, LSL #0x2
7101ddf344  ldrsh x24,[x22]
7101ddf348  add x0,sp,#0x28
7101ddf34c  bl 0x7103776290
7101ddf350  stp xzr,xzr,[sp, #0x10]
7101ddf354  ldrb w8,[x22, #0x2]
7101ddf358  cmp w8,#0x1
7101ddf35c  b.eq 0x7101ddf400
7101ddf360  cbnz w8,0x7101ddf408
7101ddf364  ldp x8,x9,[x19, #0x50]
7101ddf368  sub x8,x9,x8
7101ddf36c  lsr x8,x8,#0x2
7101ddf370  cmp w8,#0x1
7101ddf374  b.ne 0x7101ddf4b8
7101ddf378  ldr x8,[x20]
7101ddf37c  ldrsw x9,[x8, #0x2c8]
7101ddf380  tbnz w9,#0x1f,0x7101ddf594
7101ddf384  ldr w10,[x8, #0x2c0]
7101ddf388  cmp w9,w10
7101ddf38c  b.ge 0x7101ddf594
7101ddf390  ldr x8,[x8, #0x168]
7101ddf394  ldr x8,[x8, x9, LSL #0x3]
7101ddf398  add x1,x8,#0x8
7101ddf39c  mov x0,sp
7101ddf3a0  bl 0x7103776390
7101ddf3a4  b 0x7101ddf59c
7101ddf3a8  adrp x8,0x71052a8000
7101ddf3ac  ldr x8,[x8, #0xa80]
7101ddf3b0  ldr q0,[x8]
7101ddf3b4  adrp x8,0x710523d000
7101ddf3b8  add x8,x8,#0x9a8
7101ddf3bc  stp x8,xzr,[sp]
7101ddf3c0  str q0,[sp, #0x10]
7101ddf3c4  cbz x0,0x7101ddf3cc
7101ddf3c8  bl 0x710392eb40
7101ddf3cc  cmp w21,#0x1
7101ddf3d0  cset w8,eq
7101ddf3d4  cmp w21,#0x2
7101ddf3d8  csel w2,w21,w8,eq
7101ddf3dc  add x3,sp,#0x10
7101ddf3e0  mov x0,x19
7101ddf3e4  mov w1,wzr
7101ddf3e8  bl 0x7101ddd430
7101ddf3ec  adrp x8,0x710523d000
7101ddf3f0  add x8,x8,#0x9c8
7101ddf3f4  stp x8,xzr,[sp, #0x28]
7101ddf3f8  cbnz x20,0x7101ddfba4
7101ddf3fc  b 0x7101ddfbac
7101ddf400  mov w8,#0xa
7101ddf404  str w8,[x19, #0xbc]
7101ddf408  ldr x21,[x20]
7101ddf40c  ldr x0,[x21, #0x160]
7101ddf410  cbz x0,0x7101ddf9d0
7101ddf414  ldr x8,[x0]
7101ddf418  ldr x8,[x8, #0x18]
7101ddf41c  blr x8
7101ddf420  ldr w8,[x21, #0x2c4]
7101ddf424  cmp w8,#0x1
7101ddf428  b.lt 0x7101ddf4a4
7101ddf42c  mov x22,xzr
7101ddf430  ldr w9,[x21, #0x29c]
7101ddf434  sub w9,w25,w9
7101ddf438  cmp w9,w22
7101ddf43c  b.ne 0x7101ddf498
7101ddf440  ldr w9,[x21, #0x288]
7101ddf444  cmp w9,w25
7101ddf448  b.le 0x7101ddf498
7101ddf44c  ldr x8,[x21, #0x168]
7101ddf450  ldr x9,[x8, x22, LSL #0x3]
7101ddf454  ldr x10,[x9, #0x20]
7101ddf458  ldr x10,[x10]
7101ddf45c  cbz x10,0x7101ddf470
7101ddf460  ldrb w9,[x10, #0x58]
7101ddf464  orr w9,w9,#0x1
7101ddf468  strb w9,[x10, #0x58]
7101ddf46c  ldr x9,[x8, x22, LSL #0x3]
7101ddf470  str w25,[x9, #0x30]
7101ddf474  ldr x8,[x8, x22, LSL #0x3]
7101ddf478  ldr x0,[x21, #0x160]
7101ddf47c  ldr w1,[x8, #0x30]
7101ddf480  add x2,x8,#0x8
7101ddf484  add x3,x8,#0x18
7101ddf488  ldr x8,[x0]
7101ddf48c  ldr x8,[x8, #0x10]
7101ddf490  blr x8
7101ddf494  ldr w8,[x21, #0x2c4]
7101ddf498  add x22,x22,#0x1
7101ddf49c  cmp x22,w8, SXTW 
7101ddf4a0  b.lt 0x7101ddf430
7101ddf4a4  ldr x0,[x21, #0x160]
7101ddf4a8  ldr x8,[x0]
7101ddf4ac  ldr x8,[x8, #0x20]
7101ddf4b0  blr x8
7101ddf4b4  b 0x7101ddf9d0
7101ddf4b8  ldr x22,[x20]
7101ddf4bc  ldr x0,[x22, #0x160]
7101ddf4c0  cbz x0,0x7101ddf568
7101ddf4c4  ldr x8,[x0]
7101ddf4c8  ldr x8,[x8, #0x18]
7101ddf4cc  blr x8
7101ddf4d0  ldr w8,[x22, #0x2c4]
7101ddf4d4  cmp w8,#0x1
7101ddf4d8  b.lt 0x7101ddf554
7101ddf4dc  mov x26,xzr
7101ddf4e0  ldr w9,[x22, #0x29c]
7101ddf4e4  sub w9,w25,w9
7101ddf4e8  cmp w9,w26
7101ddf4ec  b.ne 0x7101ddf548
7101ddf4f0  ldr w9,[x22, #0x288]
7101ddf4f4  cmp w9,w25
7101ddf4f8  b.le 0x7101ddf548
7101ddf4fc  ldr x8,[x22, #0x168]
7101ddf500  ldr x9,[x8, x26, LSL #0x3]
7101ddf504  ldr x10,[x9, #0x20]
7101ddf508  ldr x10,[x10]
7101ddf50c  cbz x10,0x7101ddf520
7101ddf510  ldrb w9,[x10, #0x58]
7101ddf514  orr w9,w9,#0x1
7101ddf518  strb w9,[x10, #0x58]
7101ddf51c  ldr x9,[x8, x26, LSL #0x3]
7101ddf520  str w25,[x9, #0x30]
7101ddf524  ldr x8,[x8, x26, LSL #0x3]
7101ddf528  ldr x0,[x22, #0x160]
7101ddf52c  ldr w1,[x8, #0x30]
7101ddf530  add x2,x8,#0x8
7101ddf534  add x3,x8,#0x18
7101ddf538  ldr x8,[x0]
7101ddf53c  ldr x8,[x8, #0x10]
7101ddf540  blr x8
7101ddf544  ldr w8,[x22, #0x2c4]
7101ddf548  add x26,x26,#0x1
7101ddf54c  cmp x26,w8, SXTW 
7101ddf550  b.lt 0x7101ddf4e0
7101ddf554  ldr x0,[x22, #0x160]
7101ddf558  ldr x8,[x0]
7101ddf55c  ldr x8,[x8, #0x20]
7101ddf560  blr x8
7101ddf564  ldr x22,[x20]
7101ddf568  ldrsw x8,[x22, #0x2c8]
7101ddf56c  tbnz w8,#0x1f,0x7101ddf600
7101ddf570  ldr w9,[x22, #0x2c0]
7101ddf574  cmp w8,w9
7101ddf578  b.ge 0x7101ddf600
7101ddf57c  ldr x9,[x22, #0x168]
7101ddf580  ldr x8,[x9, x8, LSL #0x3]
7101ddf584  add x1,x8,#0x8
7101ddf588  mov x0,sp
7101ddf58c  bl 0x7103776390
7101ddf590  b 0x7101ddf608
7101ddf594  mov x0,sp
7101ddf598  bl 0x7103776290
7101ddf59c  ldr x26,[sp, #0x8]
7101ddf5a0  ldr x22,[sp, #0x30]
7101ddf5a4  str xzr,[sp, #0x8]
7101ddf5a8  str x26,[sp, #0x30]
7101ddf5ac  cbz x22,0x7101ddf66c
7101ddf5b0  ldr x0,[x22, #0x18]
7101ddf5b4  adrp x23,0x710523d000
7101ddf5b8  add x23,x23,#0x9a8
7101ddf5bc  stp x23,xzr,[x22, #0x10]
7101ddf5c0  cbz x0,0x7101ddf5c8
7101ddf5c4  bl 0x710392eb40
7101ddf5c8  mov x0,x22
7101ddf5cc  bl 0x710392eb40
7101ddf5d0  ldr x22,[sp, #0x8]
7101ddf5d4  adrp x8,0x710523d000
7101ddf5d8  add x8,x8,#0x988
7101ddf5dc  stp x8,xzr,[sp]
7101ddf5e0  cbz x22,0x7101ddf678
7101ddf5e4  ldr x0,[x22, #0x18]
7101ddf5e8  stp x23,xzr,[x22, #0x10]
7101ddf5ec  cbz x0,0x7101ddf5f4
7101ddf5f0  bl 0x710392eb40
7101ddf5f4  mov x0,x22
7101ddf5f8  bl 0x710392eb40
7101ddf5fc  b 0x7101ddf678
7101ddf600  mov x0,sp
7101ddf604  bl 0x7103776290
7101ddf608  ldr x8,[sp, #0x8]
7101ddf60c  ldr x22,[sp, #0x30]
7101ddf610  str xzr,[sp, #0x8]
7101ddf614  str x8,[sp, #0x30]
7101ddf618  cbz x22,0x7101ddf744
7101ddf61c  ldr x0,[x22, #0x18]
7101ddf620  adrp x26,0x710523d000
7101ddf624  add x26,x26,#0x9a8
7101ddf628  stp x26,xzr,[x22, #0x10]
7101ddf62c  cbz x0,0x7101ddf634
7101ddf630  bl 0x710392eb40
7101ddf634  mov x0,x22
7101ddf638  bl 0x710392eb40
7101ddf63c  ldr x22,[sp, #0x8]
7101ddf640  adrp x8,0x710523d000
7101ddf644  add x8,x8,#0x988
7101ddf648  stp x8,xzr,[sp]
7101ddf64c  cbz x22,0x7101ddf750
7101ddf650  ldr x0,[x22, #0x18]
7101ddf654  stp x26,xzr,[x22, #0x10]
7101ddf658  cbz x0,0x7101ddf660
7101ddf65c  bl 0x710392eb40
7101ddf660  mov x0,x22
7101ddf664  bl 0x710392eb40
7101ddf668  b 0x7101ddf750
7101ddf66c  adrp x8,0x710523d000
7101ddf670  add x8,x8,#0x988
7101ddf674  stp x8,xzr,[sp]
7101ddf678  mov w0,#0x10
7101ddf67c  mov w1,#0x8
7101ddf680  bl 0x710392e290
7101ddf684  mov x22,x0
7101ddf688  cbnz x0,0x7101ddf6d4
7101ddf68c  adrp x8,0x7105332000
7101ddf690  ldr x0,[x8, #0xf00]
7101ddf694  cbz x0,0x7101ddf6d0
7101ddf698  mov w8,#0x8
7101ddf69c  str wzr,[sp, #0x3c]
7101ddf6a0  add x1,sp,#0x3c
7101ddf6a4  str x8,[sp]
7101ddf6a8  ldr x8,[x0]
7101ddf6ac  ldr x8,[x8, #0x30]
7101ddf6b0  mov x2,sp
7101ddf6b4  blr x8
7101ddf6b8  tbz w0,#0x0,0x7101ddf6d0
7101ddf6bc  mov w0,#0x10
7101ddf6c0  mov w1,#0x8
7101ddf6c4  bl 0x710392e290
7101ddf6c8  mov x22,x0
7101ddf6cc  cbnz x0,0x7101ddf6d4
7101ddf6d0  mov x22,xzr
7101ddf6d4  str xzr,[x22]
7101ddf6d8  ldr x8,[x26, #0x8]
7101ddf6dc  cbz x8,0x7101ddf73c
7101ddf6e0  ldr x0,[x8, #0x60]
7101ddf6e4  cbz x0,0x7101ddf73c
7101ddf6e8  ldr x8,[x8, #0x18]
7101ddf6ec  add x1,x8,#0xb0
7101ddf6f0  bl 0x7103796f20
7101ddf6f4  str x0,[x22]
7101ddf6f8  cbz x0,0x7101ddf910
7101ddf6fc  ldr x8,[x0]
7101ddf700  ldr x8,[x8, #0x1f8]
7101ddf704  mov w1,wzr
7101ddf708  mov x23,x0
7101ddf70c  blr x8
7101ddf710  ldr x8,[x23]
7101ddf714  ldr x8,[x8, #0x200]
7101ddf718  mov x0,x23
7101ddf71c  blr x8
7101ddf720  tbz w0,#0x0,0x7101ddf8f4
7101ddf724  ldr x8,[x23]
7101ddf728  ldr x8,[x8, #0x210]
7101ddf72c  mov x0,x23
7101ddf730  blr x8
7101ddf734  eor w8,w0,#0x1
7101ddf738  b 0x7101ddf8f8
7101ddf73c  str xzr,[x22]
7101ddf740  b 0x7101ddf910
7101ddf744  adrp x8,0x710523d000
7101ddf748  add x8,x8,#0x988
7101ddf74c  stp x8,xzr,[sp]
7101ddf750  ldp x12,x8,[x19, #0x50]
7101ddf754  sub x9,x8,x12
7101ddf758  add x15,x23,#0x1
7101ddf75c  lsr x8,x9,#0x2
7101ddf760  asr x10,x9,#0x2
7101ddf764  sbfx x14,x9,#0x2,#0x20
7101ddf768  add x9,x12,x15, LSL #0x2
7101ddf76c  mov x13,xzr
7101ddf770  mov w11,wzr
7101ddf774  add x16,x9,#0x2
7101ddf778  mov w9,#0xffffffff
7101ddf77c  add x17,x15,x13
7101ddf780  cmp x17,x14
7101ddf784  b.ge 0x7101ddf7ac
7101ddf788  cmp x10,x17
7101ddf78c  b.ls 0x7101ddfc30
7101ddf790  ldrb w17,[x16], #0x4
7101ddf794  cmp w17,#0x0
7101ddf798  cset w18,ne
7101ddf79c  orr w11,w11,w18
7101ddf7a0  add x13,x13,#0x1
7101ddf7a4  cbz w17,0x7101ddf77c
7101ddf7a8  add w9,w25,w13
7101ddf7ac  cbz w25,0x7101ddf7d8
7101ddf7b0  tbnz w11,#0x0,0x7101ddf7d8
7101ddf7b4  add x11,x12,x23, LSL #0x2
7101ddf7b8  sub x11,x11,#0x2
7101ddf7bc  subs x23,x23,#0x1
7101ddf7c0  b.lt 0x7101ddf7d8
7101ddf7c4  cmp x10,x23
7101ddf7c8  b.ls 0x7101ddfc30
7101ddf7cc  ldrb w12,[x11], #-0x4
7101ddf7d0  cbz w12,0x7101ddf7bc
7101ddf7d4  mov w9,w23
7101ddf7d8  tbnz w9,#0x1f,0x7101ddf9c8
7101ddf7dc  cmp w9,w8
7101ddf7e0  b.ge 0x7101ddf9c8
7101ddf7e4  ldr x8,[x19, #0x40]
7101ddf7e8  str w9,[x19, #0x1020]
7101ddf7ec  ldrsw x9,[x8, #0x2c8]
7101ddf7f0  tbnz w9,#0x1f,0x7101ddf818
7101ddf7f4  ldr w10,[x8, #0x2c0]
7101ddf7f8  cmp w9,w10
7101ddf7fc  b.ge 0x7101ddf818
7101ddf800  ldr x8,[x8, #0x168]
7101ddf804  ldr x8,[x8, x9, LSL #0x3]
7101ddf808  add x1,x8,#0x8
7101ddf80c  mov x0,sp
7101ddf810  bl 0x7103776390
7101ddf814  b 0x7101ddf820
7101ddf818  mov x0,sp
7101ddf81c  bl 0x7103776290
7101ddf820  mov w8,#0x1028
7101ddf824  add x8,x19,x8
7101ddf828  mov x9,sp
7101ddf82c  cmp x8,x9
7101ddf830  b.eq 0x7101ddf868
7101ddf834  ldr x8,[sp, #0x8]
7101ddf838  str xzr,[sp, #0x8]
7101ddf83c  ldr x21,[x19, #0x1030]
7101ddf840  str x8,[x19, #0x1030]
7101ddf844  cbz x21,0x7101ddf868
7101ddf848  ldr x0,[x21, #0x18]
7101ddf84c  adrp x8,0x710523d000
7101ddf850  add x8,x8,#0x9a8
7101ddf854  stp x8,xzr,[x21, #0x10]
7101ddf858  cbz x0,0x7101ddf860
7101ddf85c  bl 0x710392eb40
7101ddf860  mov x0,x21
7101ddf864  bl 0x710392eb40
7101ddf868  ldr x21,[sp, #0x8]
7101ddf86c  adrp x8,0x710523d000
7101ddf870  add x8,x8,#0x988
7101ddf874  stp x8,xzr,[sp]
7101ddf878  cbz x21,0x7101ddf89c
7101ddf87c  ldr x0,[x21, #0x18]
7101ddf880  adrp x8,0x710523d000
7101ddf884  add x8,x8,#0x9a8
7101ddf888  stp x8,xzr,[x21, #0x10]
7101ddf88c  cbz x0,0x7101ddf894
7101ddf890  bl 0x710392eb40
7101ddf894  mov x0,x21
7101ddf898  bl 0x710392eb40
7101ddf89c  ldr x0,[x19, #0x1030]
7101ddf8a0  fmov s0,0x3f800000
7101ddf8a4  adrp x1,0x7104422000
7101ddf8a8  add x1,x1,#0x8f0
7101ddf8ac  bl 0x7103778300
7101ddf8b0  orr w8,wzr,#0x6
7101ddf8b4  str w8,[x19, #0x101c]
7101ddf8b8  ldr x8,[x19, #0x8]
7101ddf8bc  ldr x8,[x8]
7101ddf8c0  ldr x8,[x8]
7101ddf8c4  ldr x8,[x8, #0x600]
7101ddf8c8  strb wzr,[x8, #0x4aa]
7101ddf8cc  ldr x8,[x19, #0x8]
7101ddf8d0  ldr x8,[x8]
7101ddf8d4  ldr x8,[x8]
7101ddf8d8  ldr x10,[x8, #0x610]
7101ddf8dc  ldr x9,[x8, #0x608]
7101ddf8e0  cmp x10,x9
7101ddf8e4  b.eq 0x7101ddfc38
7101ddf8e8  ldr x8,[x9, #0x8]
7101ddf8ec  strb wzr,[x8, #0x4aa]
7101ddf8f0  b 0x7101ddf9c8
7101ddf8f4  mov w8,#0x1
7101ddf8f8  ldr x9,[x23]
7101ddf8fc  ldr x9,[x9, #0x388]
7101ddf900  and w1,w8,#0x1
7101ddf904  mov x0,x23
7101ddf908  mov w2,wzr
7101ddf90c  blr x9
7101ddf910  mov x0,x22
7101ddf914  bl 0x710392eb40
7101ddf918  ldr x8,[x26, #0x18]
7101ddf91c  ldr x0,[x8]
7101ddf920  bl 0x710379e030
7101ddf924  fsub s1,s1,s0
7101ddf928  fmov s4,0x3f000000
7101ddf92c  fmul s1,s1,s4
7101ddf930  fadd s0,s0,s1
7101ddf934  fsub s1,s3,s2
7101ddf938  movi v3.2D,#0x0
7101ddf93c  fmul s6,s1,s4
7101ddf940  adrp x8,0x7104473000
7101ddf944  fadd s1,s2,s6
7101ddf948  ldr s2,[x8, #0x208]
7101ddf94c  adrp x8,0x7104472000
7101ddf950  fadd s0,s0,s2
7101ddf954  ldr s2,[x8, #0x4c4]
7101ddf958  mov v3.S[0x0],v0.S[0x0]
7101ddf95c  fsub s0,s2,s1
7101ddf960  mov v3.S[0x1],v0.S[0x0]
7101ddf964  str q3,[sp, #0x10]
7101ddf968  ldp x22,x8,[x19, #0x50]
7101ddf96c  cmp x22,x8
7101ddf970  b.eq 0x7101ddf9b0
7101ddf974  cbz w25,0x7101ddf980
7101ddf978  add x22,x22,#0x4
7101ddf97c  b 0x7101ddf9a0
7101ddf980  add x1,x22,#0x4
7101ddf984  subs x2,x8,x1
7101ddf988  asr x23,x2,#0x2
7101ddf98c  b.eq 0x7101ddf998
7101ddf990  mov x0,x22
7101ddf994  bl 0x71039c00a0
7101ddf998  add x8,x22,x23, LSL #0x2
7101ddf99c  str x8,[x19, #0x58]
7101ddf9a0  sub w25,w25,#0x1
7101ddf9a4  cmp x22,x8
7101ddf9a8  b.ne 0x7101ddf974
7101ddf9ac  ldr x22,[x21]
7101ddf9b0  sub x8,x8,x22
7101ddf9b4  lsr x1,x8,#0x2
7101ddf9b8  mov x0,x20
7101ddf9bc  bl 0x7103783690
7101ddf9c0  mov x0,x19
7101ddf9c4  bl 0x7101ddcd20
7101ddf9c8  mov w8,#0xa
7101ddf9cc  str w8,[x19, #0xbc]
7101ddf9d0  ldp x8,x9,[x19, #0x50]
7101ddf9d4  sub x8,x9,x8
7101ddf9d8  lsr x8,x8,#0x2
7101ddf9dc  cbz w8,0x7101ddfad8
7101ddf9e0  ldr x8,[x20]
7101ddf9e4  ldrsw x9,[x8, #0x2c8]
7101ddf9e8  tbnz w9,#0x1f,0x7101ddfa10
7101ddf9ec  ldr w10,[x8, #0x2c0]
7101ddf9f0  cmp w9,w10
7101ddf9f4  b.ge 0x7101ddfa10
7101ddf9f8  ldr x8,[x8, #0x168]
7101ddf9fc  ldr x8,[x8, x9, LSL #0x3]
7101ddfa00  add x1,x8,#0x8
7101ddfa04  mov x0,sp
7101ddfa08  bl 0x7103776390
7101ddfa0c  b 0x7101ddfa18
7101ddfa10  mov x0,sp
7101ddfa14  bl 0x7103776290
7101ddfa18  ldr x21,[sp, #0x8]
7101ddfa1c  ldr x20,[sp, #0x30]
7101ddfa20  str xzr,[sp, #0x8]
7101ddfa24  str x21,[sp, #0x30]
7101ddfa28  cbz x20,0x7101ddfa7c
7101ddfa2c  ldr x0,[x20, #0x18]
7101ddfa30  adrp x22,0x710523d000
7101ddfa34  add x22,x22,#0x9a8
7101ddfa38  stp x22,xzr,[x20, #0x10]
7101ddfa3c  cbz x0,0x7101ddfa44
7101ddfa40  bl 0x710392eb40
7101ddfa44  mov x0,x20
7101ddfa48  bl 0x710392eb40
7101ddfa4c  ldr x20,[sp, #0x8]
7101ddfa50  adrp x8,0x710523d000
7101ddfa54  add x8,x8,#0x988
7101ddfa58  stp x8,xzr,[sp]
7101ddfa5c  cbz x20,0x7101ddfa88
7101ddfa60  ldr x0,[x20, #0x18]
7101ddfa64  stp x22,xzr,[x20, #0x10]
7101ddfa68  cbz x0,0x7101ddfa70
7101ddfa6c  bl 0x710392eb40
7101ddfa70  mov x0,x20
7101ddfa74  bl 0x710392eb40
7101ddfa78  b 0x7101ddfa88
7101ddfa7c  adrp x8,0x710523d000
7101ddfa80  add x8,x8,#0x988
7101ddfa84  stp x8,xzr,[sp]
7101ddfa88  ldr x8,[x21, #0x18]
7101ddfa8c  ldr x0,[x8]
7101ddfa90  bl 0x710379e030
7101ddfa94  fsub s1,s1,s0
7101ddfa98  fmov s4,0x3f000000
7101ddfa9c  fmul s1,s1,s4
7101ddfaa0  fadd s0,s0,s1
7101ddfaa4  fsub s1,s3,s2
7101ddfaa8  movi v3.2D,#0x0
7101ddfaac  fmul s6,s1,s4
7101ddfab0  adrp x8,0x7104473000
7101ddfab4  fadd s1,s2,s6
7101ddfab8  ldr s2,[x8, #0x208]
7101ddfabc  adrp x8,0x7104472000
7101ddfac0  fadd s0,s0,s2
7101ddfac4  ldr s2,[x8, #0x4c4]
7101ddfac8  mov v3.S[0x0],v0.S[0x0]
7101ddfacc  fsub s0,s2,s1
7101ddfad0  mov v3.S[0x1],v0.S[0x0]
7101ddfad4  str q3,[sp, #0x10]
7101ddfad8  adrp x8,0x710532f000
7101ddfadc  ldr x8,[x8, #0x730]
7101ddfae0  ldr x8,[x8, #0x8]
7101ddfae4  ldr x9,[x8, #0x1d8]
7101ddfae8  cmn w24,#0x1
7101ddfaec  b.eq 0x7101ddfafc
7101ddfaf0  add x8,x9,x24, LSL #0x1
7101ddfaf4  ldrh w8,[x8, #0x60]
7101ddfaf8  b 0x7101ddfb00
7101ddfafc  mov w8,#0xffffffff
7101ddfb00  ldp x10,x9,[x9, #0x20]
7101ddfb04  sub x9,x9,x10
7101ddfb08  orr x11,xzr,#-0x3333333333333334
7101ddfb0c  movk x11,#0xcccd
7101ddfb10  asr x9,x9,#0x6
7101ddfb14  mul x9,x9,x11
7101ddfb18  mov w11,#0x140
7101ddfb1c  madd x10,x8,x11,x10
7101ddfb20  adrp x12,0x7105182000
7101ddfb24  add x12,x12,#0xb08
7101ddfb28  cmp x9,x8
7101ddfb2c  csel x8,x10,x12,hi
7101ddfb30  ldrb w9,[x8, #0x68]
7101ddfb34  sub w9,w9,#0x1
7101ddfb38  and w10,w9,#0xff
7101ddfb3c  cmp w9,#0x3
7101ddfb40  ldrb w9,[x8, #0x5e]
7101ddfb44  csinc w2,wzr,w10,cs
7101ddfb48  cbnz w9,0x7101ddfb68
7101ddfb4c  ldrsb x8,[x8, #0x6c]
7101ddfb50  cmp x8,#0x3
7101ddfb54  b.hi 0x7101ddfb68
7101ddfb58  adrp x9,0x7104469000
7101ddfb5c  add x9,x9,#0x210
7101ddfb60  ldr w1,[x9, x8, LSL #0x2]
7101ddfb64  b 0x7101ddfb6c
7101ddfb68  mov w1,#0x5
7101ddfb6c  add x3,sp,#0x10
7101ddfb70  mov x0,x19
7101ddfb74  bl 0x7101ddd430
7101ddfb78  ldr x20,[sp, #0x30]
7101ddfb7c  adrp x8,0x710523d000
7101ddfb80  add x8,x8,#0x988
7101ddfb84  stp x8,xzr,[sp, #0x28]
7101ddfb88  cbz x20,0x7101ddfbac
7101ddfb8c  ldr x0,[x20, #0x18]
7101ddfb90  adrp x8,0x710523d000
7101ddfb94  add x8,x8,#0x9a8
7101ddfb98  stp x8,xzr,[x20, #0x10]
7101ddfb9c  cbz x0,0x7101ddfba4
7101ddfba0  bl 0x710392eb40
7101ddfba4  mov x0,x20
7101ddfba8  bl 0x710392eb40
7101ddfbac  mov x0,x19
7101ddfbb0  mov w1,wzr
7101ddfbb4  bl 0x7101ddc760
7101ddfbb8  add x0,x19,#0x18
7101ddfbbc  adrp x1,0x71042b4000
7101ddfbc0  add x1,x1,#0xa41
7101ddfbc4  add x8,sp,#0x28
7101ddfbc8  bl 0x7103776640
7101ddfbcc  ldr x19,[sp, #0x30]
7101ddfbd0  fmov s0,0x3f800000
7101ddfbd4  adrp x1,0x71043be000
7101ddfbd8  add x1,x1,#0xb1c
7101ddfbdc  mov x0,x19
7101ddfbe0  bl 0x7103778300
7101ddfbe4  adrp x8,0x710523d000
7101ddfbe8  add x8,x8,#0x988
7101ddfbec  stp x8,xzr,[sp, #0x28]
7101ddfbf0  cbz x19,0x7101ddfc14
7101ddfbf4  ldr x0,[x19, #0x18]
7101ddfbf8  adrp x8,0x710523d000
7101ddfbfc  add x8,x8,#0x9a8
7101ddfc00  stp x8,xzr,[x19, #0x10]
7101ddfc04  cbz x0,0x7101ddfc0c
7101ddfc08  bl 0x710392eb40
7101ddfc0c  mov x0,x19
7101ddfc10  bl 0x710392eb40
7101ddfc14  ldp x29,x30,[sp, #0x80]
7101ddfc18  ldp x20,x19,[sp, #0x70]
7101ddfc1c  ldp x22,x21,[sp, #0x60]
7101ddfc20  ldp x24,x23,[sp, #0x50]
7101ddfc24  ldp x26,x25,[sp, #0x40]
7101ddfc28  add sp,sp,#0x90
7101ddfc2c  ret
7101ddfc30  mov x0,x21
7101ddfc34  bl 0x71039c1330
7101ddfc38  add x0,x8,#0x608
7101ddfc3c  bl 0x71039c1330
