// addr:      7101cc6370
// offset:    0x1cc6370
// name:      online_scene_state_handler
// mangled:   
// size:      2412

7101cc6370  sub sp,sp,#0xa0
7101cc6374  str d8,[sp, #0x40]
7101cc6378  stp x26,x25,[sp, #0x50]
7101cc637c  stp x24,x23,[sp, #0x60]
7101cc6380  stp x22,x21,[sp, #0x70]
7101cc6384  stp x20,x19,[sp, #0x80]
7101cc6388  stp x29,x30,[sp, #0x90]
7101cc638c  add x29,sp,#0x90
7101cc6390  ldr w8,[x0, #0x19c]
7101cc6394  mov x19,x0
7101cc6398  cbz w8,0x7101cc63dc
7101cc639c  ldr x20,[x19, #0x1b0]
7101cc63a0  ldr x0,[x20, #0x80]
7101cc63a4  ldr w8,[x0, #0xe8]
7101cc63a8  orr w9,w8,#0x4
7101cc63ac  cmp w9,#0x5
7101cc63b0  b.ne 0x7101cc6658
7101cc63b4  ldrb w8,[x0, #0x130]
7101cc63b8  cbz w8,0x7101cc66f0
7101cc63bc  ldrsw x8,[x19, #0x194]
7101cc63c0  cmp w8,#0x13
7101cc63c4  b.cs 0x7101cc6cd4
7101cc63c8  add x8,x19,x8, LSL #0x2
7101cc63cc  ldr w9,[x8, #0x148]
7101cc63d0  add w9,w9,#0x1
7101cc63d4  str w9,[x8, #0x148]
7101cc63d8  b 0x7101cc6c70
7101cc63dc  ldrh w8,[x19, #0x5d0]
7101cc63e0  cmp w8,#0x4
7101cc63e4  b.hi 0x7101cc6988
7101cc63e8  adrp x9,0x71044f9000
7101cc63ec  add x9,x9,#0xcd4
7101cc63f0  ldrsw x8,[x9, x8, LSL #0x2]
7101cc63f4  add x8,x8,x9
7101cc63f8  br x8
7101cc63fc  ldr x20,[x19, #0x1b0]
7101cc6400  ldr x0,[x20, #0x80]
7101cc6404  ldr w23,[x19, #0x5d4]
7101cc6408  add x1,x19,#0x1c8
7101cc640c  mov w22,#0x4340
7101cc6410  movk w22,#0x6, LSL #16
7101cc6414  bl 0x7101cd16d0
7101cc6418  ldr x25,[x20, #0x80]
7101cc641c  ldr x8,[x25, #0x100]
7101cc6420  strh wzr,[x25, #0x120]
7101cc6424  ldr x20,[x8]
7101cc6428  fmov s8,0x3f800000
7101cc642c  mov v0.16B,v8.16B
7101cc6430  ldr x0,[x20, #0x10]
7101cc6434  adrp x1,0x710425f000
7101cc6438  add x1,x1,#0x56d
7101cc643c  add x21,x20,#0x8
7101cc6440  bl 0x7103778300
7101cc6444  ldr x0,[x20, #0x10]
7101cc6448  mov v0.16B,v8.16B
7101cc644c  adrp x1,0x710437c000
7101cc6450  add x1,x1,#0x6e1
7101cc6454  bl 0x7103778300
7101cc6458  adrp x26,0x7105314000
7101cc645c  ldr x8,[x26, #0x510]
7101cc6460  ldr x8,[x8]
7101cc6464  ldr x24,[x8, #0x88]
7101cc6468  mov w0,#0x10
7101cc646c  mov x1,x22
7101cc6470  bl 0x710392e290
7101cc6474  mov x20,x0
7101cc6478  cbnz x0,0x7101cc64c0
7101cc647c  adrp x8,0x7105332000
7101cc6480  ldr x0,[x8, #0xf00]
7101cc6484  cbz x0,0x7101cc64bc
7101cc6488  str wzr,[sp, #0x18]
7101cc648c  str x22,[sp, #0x28]
7101cc6490  ldr x8,[x0]
7101cc6494  ldr x8,[x8, #0x30]
7101cc6498  add x1,sp,#0x18
7101cc649c  add x2,sp,#0x28
7101cc64a0  blr x8
7101cc64a4  tbz w0,#0x0,0x7101cc64bc
7101cc64a8  mov w0,#0x10
7101cc64ac  mov x1,x22
7101cc64b0  bl 0x710392e290
7101cc64b4  mov x20,x0
7101cc64b8  cbnz x0,0x7101cc64c0
7101cc64bc  mov x20,xzr
7101cc64c0  mov x8,#0xff0000000000
7101cc64c4  mov x9,#0xff0000000000
7101cc64c8  movk x9,#0x5aff, LSL #48
7101cc64cc  movk x8,#0x13ff, LSL #48
7101cc64d0  stp x8,x9,[x20, #0x130]
7101cc64d4  mov x8,#0xff0000000000
7101cc64d8  movk x8,#0xc1ff, LSL #48
7101cc64dc  mov x0,x20
7101cc64e0  str xzr,[x20, #0x110]
7101cc64e4  strh wzr,[x20, #0x118]
7101cc64e8  strh wzr,[x20, #0x144]
7101cc64ec  str wzr,[x20, #0x140]
7101cc64f0  str x8,[x20, #0x1a0]
7101cc64f4  bl 0x71017bd0b0
7101cc64f8  cbz w23,0x7101cc65d8
7101cc64fc  ldr x8,[x26, #0x510]
7101cc6500  ldr x8,[x8]
7101cc6504  ldrb w8,[x8]
7101cc6508  cbnz w8,0x7101cc65d8
7101cc650c  ldr x0,[x24]
7101cc6510  ldr x8,[x0, #0x58]
7101cc6514  cbz x8,0x7101cc65d8
7101cc6518  mov x9,x0
7101cc651c  ldr x10,[x9, #0x50]!
7101cc6520  cbz x10,0x7101cc65d8
7101cc6524  add x24,x20,#0x140
7101cc6528  mov x8,x9
7101cc652c  ldr w11,[x10, #0x1c]
7101cc6530  cmp w11,w23
7101cc6534  cset w11,cc
7101cc6538  csel x8,x8,x10,cc
7101cc653c  ldr x10,[x10, w11, UXTW #0x3]
7101cc6540  cbnz x10,0x7101cc652c
7101cc6544  cmp x8,x9
7101cc6548  b.eq 0x7101cc65d8
7101cc654c  ldr w9,[x8, #0x1c]
7101cc6550  cmp w9,w23
7101cc6554  b.hi 0x7101cc65d8
7101cc6558  ldrsw x8,[x8, #0x20]
7101cc655c  cmn w8,#0x1
7101cc6560  b.eq 0x7101cc65d8
7101cc6564  ldp x9,x10,[x0]
7101cc6568  sub x10,x10,x9
7101cc656c  sdiv x10,x10,x22
7101cc6570  cmp x10,x8
7101cc6574  b.ls 0x7101cc6cd8
7101cc6578  mov w10,#0x4340
7101cc657c  movk w10,#0x6, LSL #16
7101cc6580  madd x10,x8,x10,x9
7101cc6584  ldrb w10,[x10, #0x1a9]
7101cc6588  cbnz w10,0x7101cc65d8
7101cc658c  mov w2,#0x4340
7101cc6590  movk w2,#0x6, LSL #16
7101cc6594  madd x1,x8,x2,x9
7101cc6598  mov x0,x20
7101cc659c  bl 0x71039c00e0
7101cc65a0  ldr w2,[x20, #0x1ac]
7101cc65a4  cbz w2,0x7101cc6c90
7101cc65a8  ldr x0,[x25, #0x118]
7101cc65ac  add x1,x20,#0x1b0
7101cc65b0  mov w3,#0x1
7101cc65b4  bl 0x710377c0d0
7101cc65b8  ldrb w8,[x24]
7101cc65bc  cmp w8,#0xc
7101cc65c0  orr w9,wzr,#0xc
7101cc65c4  csel w2,w8,w9,cc
7101cc65c8  adrp x1,0x71043f0000
7101cc65cc  add x1,x1,#0xb8f
7101cc65d0  mov x0,x21
7101cc65d4  bl 0x7103778430
7101cc65d8  adrp x1,0x71042e7000
7101cc65dc  add x1,x1,#0x3e2
7101cc65e0  add x8,sp,#0x28
7101cc65e4  mov x0,x21
7101cc65e8  bl 0x7103776910
7101cc65ec  ldr x22,[sp, #0x30]
7101cc65f0  ldr x8,[x22, #0x8]
7101cc65f4  cbz x8,0x7101cc6ad4
7101cc65f8  ldr x9,[x25, #0x118]
7101cc65fc  ldr x8,[x9]
7101cc6600  cbz x8,0x7101cc6ac8
7101cc6604  ldr x22,[x9, #0x8]
7101cc6608  cbz x22,0x7101cc6a88
7101cc660c  add x9,x22,#0x8
7101cc6610  ldxr x10,[x9]
7101cc6614  add x10,x10,#0x1
7101cc6618  stxr w11,x10,[x9]
7101cc661c  cbnz w11,0x7101cc6610
7101cc6620  ldr x8,[x8, #0x8]
7101cc6624  add x23,x8,#0x188
7101cc6628  ldaxr x8,[x9]
7101cc662c  sub x10,x8,#0x1
7101cc6630  stlxr w11,x10,[x9]
7101cc6634  cbnz w11,0x7101cc6628
7101cc6638  cbnz x8,0x7101cc6a90
7101cc663c  ldr x8,[x22]
7101cc6640  ldr x8,[x8, #0x10]
7101cc6644  mov x0,x22
7101cc6648  blr x8
7101cc664c  mov x0,x22
7101cc6650  bl 0x71039c2670
7101cc6654  b 0x7101cc6a90
7101cc6658  adrp x9,0x71052c4000
7101cc665c  ldr x9,[x9, #0xc58]
7101cc6660  ldr x9,[x9, #0x8]
7101cc6664  ldr x9,[x9, #0x80]
7101cc6668  ldrb w9,[x9, #0x244]
7101cc666c  cbnz w9,0x7101cc6c70
7101cc6670  cmp w8,#0x1
7101cc6674  b.eq 0x7101cc6684
7101cc6678  mov w8,#0x1
7101cc667c  strb w8,[x0, #0x131]
7101cc6680  strb w8,[x0, #0x133]
7101cc6684  add x9,x19,#0x18c
7101cc6688  stp xzr,xzr,[x19, #0x8]
7101cc668c  str xzr,[x9]
7101cc6690  add x9,x19,#0x184
7101cc6694  add x8,x19,#0x14c
7101cc6698  str xzr,[x9]
7101cc669c  add x9,x19,#0x17c
7101cc66a0  str xzr,[x9]
7101cc66a4  add x9,x19,#0x174
7101cc66a8  str xzr,[x9]
7101cc66ac  add x9,x19,#0x16c
7101cc66b0  str xzr,[x9]
7101cc66b4  add x9,x19,#0x164
7101cc66b8  str xzr,[x9]
7101cc66bc  add x9,x19,#0x15c
7101cc66c0  str xzr,[x9]
7101cc66c4  add x9,x19,#0x154
7101cc66c8  str xzr,[x8]
7101cc66cc  mov w8,#0xffffffff
7101cc66d0  str xzr,[x9]
7101cc66d4  str x8,[x19, #0x198]
7101cc66d8  str w8,[x19, #0x1a0]
7101cc66dc  mov w8,#0x11
7101cc66e0  str wzr,[x19, #0x194]
7101cc66e4  strb wzr,[x19, #0x1a4]
7101cc66e8  str w8,[x19, #0x148]
7101cc66ec  b 0x7101cc6c70
7101cc66f0  bl 0x7101cd0bc0
7101cc66f4  mov w8,#0x1
7101cc66f8  strb w8,[x20, #0x70]
7101cc66fc  ldrsw x8,[x19, #0x194]
7101cc6700  cmp w8,#0x13
7101cc6704  b.cs 0x7101cc6cd4
7101cc6708  add x8,x19,x8, LSL #0x2
7101cc670c  orr w9,wzr,#0x3
7101cc6710  str w9,[x8, #0x148]
7101cc6714  b 0x7101cc6c70
7101cc6718  ldr x21,[x19, #0x1b0]
7101cc671c  ldr x0,[x21, #0x80]
7101cc6720  add x24,x19,#0x1b0
7101cc6724  add x1,x19,#0x1c8
7101cc6728  ldr w20,[x19, #0x5e4]
7101cc672c  ldr w19,[x19, #0x5e0]
7101cc6730  bl 0x7101cd16d0
7101cc6734  ldr x22,[x21, #0x80]
7101cc6738  mov w8,#0x2
7101cc673c  strh w8,[x22, #0x120]
7101cc6740  ldr x8,[x22, #0x100]
7101cc6744  ldr x8,[x8]
7101cc6748  ldr x0,[x8, #0x10]
7101cc674c  add x21,x8,#0x8
7101cc6750  cmp w20,#0x145
7101cc6754  b.ne 0x7101cc6990
7101cc6758  fmov s0,0x3f800000
7101cc675c  adrp x1,0x710434a000
7101cc6760  add x1,x1,#0x491
7101cc6764  bl 0x7103778300
7101cc6768  adrp x1,0x71042a3000
7101cc676c  add x1,x1,#0x19b
7101cc6770  add x8,sp,#0x28
7101cc6774  mov x0,x21
7101cc6778  bl 0x7103776910
7101cc677c  adrp x22,0x710523d000
7101cc6780  add x22,x22,#0x9a8
7101cc6784  mov w0,#0x10
7101cc6788  mov w1,#0x20
7101cc678c  str x22,[sp, #0x18]
7101cc6790  bl 0x710392e290
7101cc6794  cbnz x0,0x7101cc67dc
7101cc6798  adrp x8,0x7105332000
7101cc679c  ldr x0,[x8, #0xf00]
7101cc67a0  cbz x0,0x7101cc67d8
7101cc67a4  mov w8,#0x20
7101cc67a8  stur wzr,[x29, #-0x44]
7101cc67ac  sub x1,x29,#0x44
7101cc67b0  str x8,[sp, #0x38]
7101cc67b4  ldr x8,[x0]
7101cc67b8  ldr x8,[x8, #0x30]
7101cc67bc  add x2,sp,#0x38
7101cc67c0  blr x8
7101cc67c4  tbz w0,#0x0,0x7101cc67d8
7101cc67c8  mov w0,#0x10
7101cc67cc  mov w1,#0x20
7101cc67d0  bl 0x710392e290
7101cc67d4  cbnz x0,0x7101cc67dc
7101cc67d8  mov x0,xzr
7101cc67dc  stp xzr,xzr,[x0, #0x10]
7101cc67e0  mov x21,x0
7101cc67e4  stp xzr,xzr,[x0]
7101cc67e8  ldr x8,[sp, #0x30]
7101cc67ec  mov w1,wzr
7101cc67f0  str x0,[sp, #0x20]
7101cc67f4  ldr x9,[x8]
7101cc67f8  str x9,[x0]
7101cc67fc  ldr x8,[x8, #0x8]
7101cc6800  str x8,[x0, #0x8]
7101cc6804  ldr x20,[sp, #0x30]
7101cc6808  ldr x8,[x20, #0x10]
7101cc680c  str x8,[x21, #0x10]
7101cc6810  ldr x8,[x20, #0x18]
7101cc6814  mov x0,x21
7101cc6818  str x8,[x21, #0x18]
7101cc681c  bl 0x71037790a0
7101cc6820  adrp x8,0x7105324000
7101cc6824  ldr x8,[x8, #0xee8]
7101cc6828  ldr x0,[x8, #0x8]
7101cc682c  mov x1,x19
7101cc6830  bl 0x7101af0cc0
7101cc6834  adrp x8,0x710532f000
7101cc6838  ldr x8,[x8, #0x860]
7101cc683c  ldr x8,[x8]
7101cc6840  ldr x9,[x8, #0x10]
7101cc6844  cbz x9,0x7101cc688c
7101cc6848  ldr x10,[x8, #0x8]!
7101cc684c  cbz x10,0x7101cc688c
7101cc6850  mov x9,x8
7101cc6854  ldr w11,[x10, #0x20]
7101cc6858  cmp w11,w0
7101cc685c  cset w11,cc
7101cc6860  csel x9,x9,x10,cc
7101cc6864  ldr x10,[x10, w11, UXTW #0x3]
7101cc6868  cbnz x10,0x7101cc6854
7101cc686c  cmp x9,x8
7101cc6870  b.eq 0x7101cc688c
7101cc6874  ldr w8,[x9, #0x20]
7101cc6878  cmp w8,w0
7101cc687c  b.hi 0x7101cc688c
7101cc6880  add x1,x9,#0x28
7101cc6884  add x0,sp,#0x18
7101cc6888  bl 0x7103779480
7101cc688c  stp x22,xzr,[sp, #0x18]
7101cc6890  cbz x21,0x7101cc689c
7101cc6894  mov x0,x21
7101cc6898  bl 0x710392eb40
7101cc689c  stp x22,xzr,[sp, #0x28]
7101cc68a0  cbnz x20,0x7101cc6bd8
7101cc68a4  b 0x7101cc6be0
7101cc68a8  ldr x20,[x19, #0x1b0]
7101cc68ac  ldr x0,[x20, #0x80]
7101cc68b0  ldr w21,[x19, #0x5dc]
7101cc68b4  add x1,x19,#0x1c8
7101cc68b8  bl 0x7101cd16d0
7101cc68bc  ldr x8,[x20, #0x80]
7101cc68c0  mov w9,#0x1
7101cc68c4  strh w9,[x8, #0x120]
7101cc68c8  ldr x8,[x8, #0x100]
7101cc68cc  ldr x8,[x8]
7101cc68d0  ldr x0,[x8, #0x10]
7101cc68d4  fmov s0,0x3f800000
7101cc68d8  adrp x1,0x710434a000
7101cc68dc  add x1,x1,#0x491
7101cc68e0  add x20,x8,#0x8
7101cc68e4  bl 0x7103778300
7101cc68e8  adrp x1,0x71042a3000
7101cc68ec  add x1,x1,#0x19b
7101cc68f0  add x8,sp,#0x28
7101cc68f4  mov x0,x20
7101cc68f8  bl 0x7103776910
7101cc68fc  adrp x8,0x710532f000
7101cc6900  ldr x8,[x8, #0x860]
7101cc6904  ldr x8,[x8]
7101cc6908  ldr x9,[x8, #0x10]
7101cc690c  cbz x9,0x7101cc6954
7101cc6910  ldr x10,[x8, #0x8]!
7101cc6914  cbz x10,0x7101cc6954
7101cc6918  mov x9,x8
7101cc691c  ldr w11,[x10, #0x20]
7101cc6920  cmp w11,w21
7101cc6924  cset w11,cc
7101cc6928  csel x9,x9,x10,cc
7101cc692c  ldr x10,[x10, w11, UXTW #0x3]
7101cc6930  cbnz x10,0x7101cc691c
7101cc6934  cmp x9,x8
7101cc6938  b.eq 0x7101cc6954
7101cc693c  ldr w8,[x9, #0x20]
7101cc6940  cmp w8,w21
7101cc6944  b.hi 0x7101cc6954
7101cc6948  add x1,x9,#0x28
7101cc694c  add x0,sp,#0x28
7101cc6950  bl 0x7103779480
7101cc6954  ldr x0,[sp, #0x30]
7101cc6958  add x24,x19,#0x1b0
7101cc695c  adrp x8,0x710523d000
7101cc6960  add x8,x8,#0x9a8
7101cc6964  stp x8,xzr,[sp, #0x28]
7101cc6968  cbnz x0,0x7101cc6bdc
7101cc696c  b 0x7101cc6be0
7101cc6970  ldr x0,[x19, #0x1b0]
7101cc6974  add x1,x19,#0x1c8
7101cc6978  add x2,x19,#0xbe0
7101cc697c  add x24,x19,#0x1b0
7101cc6980  bl 0x7101cd2220
7101cc6984  b 0x7101cc6be0
7101cc6988  add x24,x19,#0x1b0
7101cc698c  b 0x7101cc6be0
7101cc6990  fmov s0,0x3f800000
7101cc6994  adrp x1,0x71043f0000
7101cc6998  add x1,x1,#0xab9
7101cc699c  bl 0x7103778300
7101cc69a0  adrp x1,0x71043ad000
7101cc69a4  add x1,x1,#0x8b7
7101cc69a8  add x8,sp,#0x28
7101cc69ac  mov x0,x21
7101cc69b0  bl 0x7103776910
7101cc69b4  ldr x21,[x22, #0xf8]
7101cc69b8  adrp x25,0x710523d000
7101cc69bc  add x25,x25,#0x9a8
7101cc69c0  mov w0,#0x10
7101cc69c4  mov w1,#0x20
7101cc69c8  str x25,[sp, #0x8]
7101cc69cc  bl 0x710392e290
7101cc69d0  cbnz x0,0x7101cc6a18
7101cc69d4  adrp x8,0x7105332000
7101cc69d8  ldr x0,[x8, #0xf00]
7101cc69dc  cbz x0,0x7101cc6a14
7101cc69e0  mov w8,#0x20
7101cc69e4  stur wzr,[x29, #-0x44]
7101cc69e8  sub x1,x29,#0x44
7101cc69ec  str x8,[sp, #0x38]
7101cc69f0  ldr x8,[x0]
7101cc69f4  ldr x8,[x8, #0x30]
7101cc69f8  add x2,sp,#0x38
7101cc69fc  blr x8
7101cc6a00  tbz w0,#0x0,0x7101cc6a14
7101cc6a04  mov w0,#0x10
7101cc6a08  mov w1,#0x20
7101cc6a0c  bl 0x710392e290
7101cc6a10  cbnz x0,0x7101cc6a18
7101cc6a14  mov x0,xzr
7101cc6a18  stp xzr,xzr,[x0, #0x10]
7101cc6a1c  mov x23,x0
7101cc6a20  stp xzr,xzr,[x0]
7101cc6a24  ldr x8,[sp, #0x30]
7101cc6a28  add x1,sp,#0x8
7101cc6a2c  mov w4,#0x1
7101cc6a30  mov w2,w20
7101cc6a34  str x0,[sp, #0x10]
7101cc6a38  ldr x9,[x8]
7101cc6a3c  str x9,[x0]
7101cc6a40  ldr x8,[x8, #0x8]
7101cc6a44  str x8,[x0, #0x8]
7101cc6a48  ldr x22,[sp, #0x30]
7101cc6a4c  ldr x8,[x22, #0x10]
7101cc6a50  str x8,[x23, #0x10]
7101cc6a54  ldr x8,[x22, #0x18]
7101cc6a58  mov x0,x21
7101cc6a5c  mov x3,x19
7101cc6a60  str x8,[x23, #0x18]
7101cc6a64  bl 0x7101ad2060
7101cc6a68  stp x25,xzr,[sp, #0x8]
7101cc6a6c  cbz x23,0x7101cc6a78
7101cc6a70  mov x0,x23
7101cc6a74  bl 0x710392eb40
7101cc6a78  stp x25,xzr,[sp, #0x28]
7101cc6a7c  cbz x22,0x7101cc6be0
7101cc6a80  mov x0,x22
7101cc6a84  b 0x7101cc6bdc
7101cc6a88  ldr x8,[x8, #0x8]
7101cc6a8c  add x23,x8,#0x188
7101cc6a90  ldr x8,[x23]
7101cc6a94  ldr x8,[x8, #0x30]
7101cc6a98  mov x0,x23
7101cc6a9c  blr x8
7101cc6aa0  ldr x22,[sp, #0x30]
7101cc6aa4  tbz w0,#0x0,0x7101cc6ac8
7101cc6aa8  ldr x0,[x22, #0x8]
7101cc6aac  mov x1,x23
7101cc6ab0  mov w2,wzr
7101cc6ab4  bl 0x710379e9c0
7101cc6ab8  adrp x8,0x710523d000
7101cc6abc  add x8,x8,#0x9a8
7101cc6ac0  stp x8,xzr,[sp, #0x28]
7101cc6ac4  b 0x7101cc6ae4
7101cc6ac8  mov w1,#0x1
7101cc6acc  mov x0,x22
7101cc6ad0  bl 0x71037790a0
7101cc6ad4  adrp x8,0x710523d000
7101cc6ad8  add x8,x8,#0x9a8
7101cc6adc  stp x8,xzr,[sp, #0x28]
7101cc6ae0  cbz x22,0x7101cc6aec
7101cc6ae4  mov x0,x22
7101cc6ae8  bl 0x710392eb40
7101cc6aec  adrp x1,0x7104308000
7101cc6af0  add x1,x1,#0x6d0
7101cc6af4  add x8,sp,#0x28
7101cc6af8  mov x0,x21
7101cc6afc  add x24,x19,#0x1b0
7101cc6b00  bl 0x7103776910
7101cc6b04  ldr x19,[sp, #0x30]
7101cc6b08  ldr x8,[x19, #0x8]
7101cc6b0c  cbz x8,0x7101cc6bbc
7101cc6b10  ldr x9,[x25, #0x118]
7101cc6b14  ldr x8,[x9]
7101cc6b18  cbz x8,0x7101cc6bb0
7101cc6b1c  ldr x19,[x9, #0x8]
7101cc6b20  cbz x19,0x7101cc6b70
7101cc6b24  add x9,x19,#0x8
7101cc6b28  ldxr x10,[x9]
7101cc6b2c  add x10,x10,#0x1
7101cc6b30  stxr w11,x10,[x9]
7101cc6b34  cbnz w11,0x7101cc6b28
7101cc6b38  ldr x8,[x8, #0x8]
7101cc6b3c  add x21,x8,#0x188
7101cc6b40  ldaxr x8,[x9]
7101cc6b44  sub x10,x8,#0x1
7101cc6b48  stlxr w11,x10,[x9]
7101cc6b4c  cbnz w11,0x7101cc6b40
7101cc6b50  cbnz x8,0x7101cc6b78
7101cc6b54  ldr x8,[x19]
7101cc6b58  ldr x8,[x8, #0x10]
7101cc6b5c  mov x0,x19
7101cc6b60  blr x8
7101cc6b64  mov x0,x19
7101cc6b68  bl 0x71039c2670
7101cc6b6c  b 0x7101cc6b78
7101cc6b70  ldr x8,[x8, #0x8]
7101cc6b74  add x21,x8,#0x188
7101cc6b78  ldr x8,[x21]
7101cc6b7c  ldr x8,[x8, #0x30]
7101cc6b80  mov x0,x21
7101cc6b84  blr x8
7101cc6b88  ldr x19,[sp, #0x30]
7101cc6b8c  tbz w0,#0x0,0x7101cc6bb0
7101cc6b90  ldr x0,[x19, #0x8]
7101cc6b94  mov x1,x21
7101cc6b98  mov w2,wzr
7101cc6b9c  bl 0x710379e9c0
7101cc6ba0  adrp x8,0x710523d000
7101cc6ba4  add x8,x8,#0x9a8
7101cc6ba8  stp x8,xzr,[sp, #0x28]
7101cc6bac  b 0x7101cc6bcc
7101cc6bb0  mov w1,#0x1
7101cc6bb4  mov x0,x19
7101cc6bb8  bl 0x71037790a0
7101cc6bbc  adrp x8,0x710523d000
7101cc6bc0  add x8,x8,#0x9a8
7101cc6bc4  stp x8,xzr,[sp, #0x28]
7101cc6bc8  cbz x19,0x7101cc6bd4
7101cc6bcc  mov x0,x19
7101cc6bd0  bl 0x710392eb40
7101cc6bd4  cbz x20,0x7101cc6be0
7101cc6bd8  mov x0,x20
7101cc6bdc  bl 0x710392eb40
7101cc6be0  ldr x8,[x24]
7101cc6be4  strb wzr,[x8, #0x70]
7101cc6be8  ldr x8,[x24]
7101cc6bec  ldr x19,[x8, #0x80]
7101cc6bf0  ldr w8,[x19, #0xe8]
7101cc6bf4  cmp w8,#0x1
7101cc6bf8  b.ne 0x7101cc6c70
7101cc6bfc  ldr x8,[x19, #0x100]
7101cc6c00  ldr x0,[x8]
7101cc6c04  mov w2,#0x6fff
7101cc6c08  movk w2,#0x1, LSL #16
7101cc6c0c  mov w1,#0x1
7101cc6c10  mov w20,#0x1
7101cc6c14  bl 0x7103775dc0
7101cc6c18  ldr x8,[x19, #0x100]
7101cc6c1c  ldr x8,[x8]
7101cc6c20  ldr x0,[x8, #0x10]
7101cc6c24  fmov s0,0x3f800000
7101cc6c28  adrp x1,0x7104291000
7101cc6c2c  add x1,x1,#0xd6e
7101cc6c30  bl 0x7103778300
7101cc6c34  orr x8,xzr,#0x100000000
7101cc6c38  mov w9,#0xffffffff
7101cc6c3c  strb wzr,[x19, #0xf4]
7101cc6c40  stp x8,x9,[x19, #0xe0]
7101cc6c44  mov w8,#0x4
7101cc6c48  str w9,[x19, #0xf0]
7101cc6c4c  mov w9,#0x2
7101cc6c50  strh wzr,[x19, #0x130]
7101cc6c54  strb w20,[x19, #0x132]
7101cc6c58  stp w8,w9,[x19, #0x98]
7101cc6c5c  stp xzr,xzr,[x19, #0x8]
7101cc6c60  stp xzr,xzr,[x19, #0xd0]
7101cc6c64  stp xzr,xzr,[x19, #0xc0]
7101cc6c68  stp xzr,xzr,[x19, #0xb0]
7101cc6c6c  stp xzr,xzr,[x19, #0xa0]
7101cc6c70  ldr d8,[sp, #0x40]
7101cc6c74  ldp x29,x30,[sp, #0x90]
7101cc6c78  ldp x20,x19,[sp, #0x80]
7101cc6c7c  ldp x22,x21,[sp, #0x70]
7101cc6c80  ldp x24,x23,[sp, #0x60]
7101cc6c84  ldp x26,x25,[sp, #0x50]
7101cc6c88  add sp,sp,#0xa0
7101cc6c8c  ret
7101cc6c90  ldr x8,[x25, #0x118]
7101cc6c94  ldr x22,[x8, #0x8]
7101cc6c98  stp xzr,xzr,[x8]
7101cc6c9c  cbz x22,0x7101cc65b8
7101cc6ca0  add x8,x22,#0x8
7101cc6ca4  ldaxr x9,[x8]
7101cc6ca8  sub x10,x9,#0x1
7101cc6cac  stlxr w11,x10,[x8]
7101cc6cb0  cbnz w11,0x7101cc6ca4
7101cc6cb4  cbnz x9,0x7101cc65b8
7101cc6cb8  ldr x8,[x22]
7101cc6cbc  ldr x8,[x8, #0x10]
7101cc6cc0  mov x0,x22
7101cc6cc4  blr x8
7101cc6cc8  mov x0,x22
7101cc6ccc  bl 0x71039c2670
7101cc6cd0  b 0x7101cc65b8
7101cc6cd4  bl 0x71039c2650
7101cc6cd8  bl 0x71039c1330
