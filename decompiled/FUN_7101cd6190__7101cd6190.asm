// addr:      7101cd6190
// offset:    0x1cd6190
// name:      FUN_7101cd6190
// mangled:   
// size:      3512

7101cd6190  sub sp,sp,#0x100
7101cd6194  str x25,[sp, #0xb0]
7101cd6198  stp x24,x23,[sp, #0xc0]
7101cd619c  stp x22,x21,[sp, #0xd0]
7101cd61a0  stp x20,x19,[sp, #0xe0]
7101cd61a4  stp x29,x30,[sp, #0xf0]
7101cd61a8  add x29,sp,#0xf0
7101cd61ac  mov w21,w1
7101cd61b0  ldr x1,[x0, #0x260]
7101cd61b4  cbz x1,0x7101cd6ce4
7101cd61b8  mov w20,w2
7101cd61bc  mov x19,x0
7101cd61c0  add x23,x0,#0x170
7101cd61c4  add x0,sp,#0x70
7101cd61c8  mov w2,w21
7101cd61cc  bl 0x7103771d60
7101cd61d0  ldr x22,[sp, #0x78]
7101cd61d4  ldr x8,[x22]
7101cd61d8  cbz x8,0x7101cd61e4
7101cd61dc  ldr x1,[x8, #0x88]
7101cd61e0  b 0x7101cd61ec
7101cd61e4  adrp x1,0x7104867000
7101cd61e8  add x1,x1,#0xc2e
7101cd61ec  add x8,sp,#0x60
7101cd61f0  mov x0,x23
7101cd61f4  bl 0x7103776640
7101cd61f8  adrp x8,0x710523d000
7101cd61fc  add x8,x8,#0x9c8
7101cd6200  stp x8,xzr,[sp, #0x70]
7101cd6204  cbz x22,0x7101cd6210
7101cd6208  mov x0,x22
7101cd620c  bl 0x710392eb40
7101cd6210  cbz w21,0x7101cd6284
7101cd6214  adrp x1,0x71042a3000
7101cd6218  add x1,x1,#0x1a8
7101cd621c  add x8,sp,#0x30
7101cd6220  add x0,sp,#0x60
7101cd6224  bl 0x7103776910
7101cd6228  add x2,sp,#0x30
7101cd622c  mov x0,x19
7101cd6230  mov w1,w21
7101cd6234  bl 0x7101cd7110
7101cd6238  ldr x0,[sp, #0x38]
7101cd623c  adrp x8,0x710523d000
7101cd6240  add x8,x8,#0x9a8
7101cd6244  stp x8,xzr,[sp, #0x30]
7101cd6248  cbz x0,0x7101cd6250
7101cd624c  bl 0x710392eb40
7101cd6250  cmp w21,#0x8
7101cd6254  b.hi 0x7101cd66bc
7101cd6258  mov w23,w21
7101cd625c  adrp x8,0x71044f9000
7101cd6260  add x8,x8,#0xd8c
7101cd6264  ldrsw x9,[x8, x23, LSL #0x2]
7101cd6268  add x8,x9,x8
7101cd626c  br x8
7101cd6270  ldr w24,[x19, #0x208]
7101cd6274  orr w25,wzr,#0x7
7101cd6278  cmp w20,#0x1
7101cd627c  b.ne 0x7101cd6d48
7101cd6280  b 0x7101cd6418
7101cd6284  adrp x1,0x7104422000
7101cd6288  add x1,x1,#0x546
7101cd628c  add x8,sp,#0x50
7101cd6290  add x0,sp,#0x60
7101cd6294  bl 0x7103776640
7101cd6298  add x1,sp,#0x50
7101cd629c  mov x0,x19
7101cd62a0  bl 0x7101cd6f50
7101cd62a4  ldr x22,[sp, #0x58]
7101cd62a8  adrp x23,0x710523d000
7101cd62ac  add x23,x23,#0x988
7101cd62b0  stp x23,xzr,[sp, #0x50]
7101cd62b4  cbz x22,0x7101cd62d8
7101cd62b8  ldr x0,[x22, #0x18]
7101cd62bc  adrp x8,0x710523d000
7101cd62c0  add x8,x8,#0x9a8
7101cd62c4  stp x8,xzr,[x22, #0x10]
7101cd62c8  cbz x0,0x7101cd62d0
7101cd62cc  bl 0x710392eb40
7101cd62d0  mov x0,x22
7101cd62d4  bl 0x710392eb40
7101cd62d8  adrp x1,0x71043cf000
7101cd62dc  add x1,x1,#0x5c9
7101cd62e0  add x8,sp,#0x40
7101cd62e4  add x0,sp,#0x60
7101cd62e8  bl 0x7103776640
7101cd62ec  add x1,sp,#0x40
7101cd62f0  mov x0,x19
7101cd62f4  bl 0x7101cd6f50
7101cd62f8  ldr x22,[sp, #0x48]
7101cd62fc  stp x23,xzr,[sp, #0x40]
7101cd6300  cbz x22,0x7101cd6324
7101cd6304  ldr x0,[x22, #0x18]
7101cd6308  adrp x8,0x710523d000
7101cd630c  add x8,x8,#0x9a8
7101cd6310  stp x8,xzr,[x22, #0x10]
7101cd6314  cbz x0,0x7101cd631c
7101cd6318  bl 0x710392eb40
7101cd631c  mov x0,x22
7101cd6320  bl 0x710392eb40
7101cd6324  ldr w23,[x19, #0x208]
7101cd6328  cmp w20,#0x1
7101cd632c  b.eq 0x7101cd6364
7101cd6330  cbnz w20,0x7101cd66b8
7101cd6334  adrp x8,0x710532f000
7101cd6338  ldr x8,[x8, #0x8d0]
7101cd633c  ldr x0,[x8, #0x8]
7101cd6340  ldp x8,x9,[x0, #0x40]
7101cd6344  sub x9,x9,x8
7101cd6348  asr x9,x9,#0x3
7101cd634c  cmp x9,#0x9
7101cd6350  b.cc 0x7101cd6500
7101cd6354  ldr x22,[x8, #0x40]
7101cd6358  ldrb w8,[x0, #0x191]
7101cd635c  cbnz w8,0x7101cd658c
7101cd6360  b 0x7101cd650c
7101cd6364  adrp x8,0x710532f000
7101cd6368  ldr x8,[x8, #0x8d0]
7101cd636c  ldr x0,[x8, #0x8]
7101cd6370  ldp x8,x9,[x0, #0x40]
7101cd6374  sub x9,x9,x8
7101cd6378  asr x9,x9,#0x3
7101cd637c  cmp x9,#0x9
7101cd6380  b.cc 0x7101cd65c4
7101cd6384  ldr x22,[x8, #0x40]
7101cd6388  ldrb w8,[x0, #0x191]
7101cd638c  cbnz w8,0x7101cd6650
7101cd6390  b 0x7101cd65d0
7101cd6394  ldr w24,[x19, #0x20c]
7101cd6398  b 0x7101cd640c
7101cd639c  ldr w8,[x19, #0x208]
7101cd63a0  cmp w8,#0x2
7101cd63a4  mov w9,#0x4
7101cd63a8  cinc w25,w9,ne
7101cd63ac  b.eq 0x7101cd6d10
7101cd63b0  cmp w8,#0x1
7101cd63b4  b.ne 0x7101cd6d20
7101cd63b8  ldr w24,[x19, #0x21c]
7101cd63bc  cmp w20,#0x1
7101cd63c0  b.ne 0x7101cd6d48
7101cd63c4  b 0x7101cd6418
7101cd63c8  ldr w8,[x19, #0x208]
7101cd63cc  cmp w8,#0x2
7101cd63d0  b.eq 0x7101cd6d30
7101cd63d4  cmp w8,#0x1
7101cd63d8  b.ne 0x7101cd6d38
7101cd63dc  ldr w24,[x19, #0x220]
7101cd63e0  b 0x7101cd6d3c
7101cd63e4  ldr w24,[x19, #0x240]
7101cd63e8  b 0x7101cd6d3c
7101cd63ec  ldr w24,[x19, #0x244]
7101cd63f0  b 0x7101cd6d3c
7101cd63f4  ldr w24,[x19, #0x248]
7101cd63f8  mov w25,#0x2
7101cd63fc  cmp w20,#0x1
7101cd6400  b.ne 0x7101cd6d48
7101cd6404  b 0x7101cd6418
7101cd6408  ldr w24,[x19, #0x24c]
7101cd640c  orr w25,wzr,#0x3
7101cd6410  cmp w20,#0x1
7101cd6414  b.ne 0x7101cd6d48
7101cd6418  adrp x8,0x710532f000
7101cd641c  ldr x8,[x8, #0x8d0]
7101cd6420  ldr x0,[x8, #0x8]
7101cd6424  ldp x8,x9,[x0, #0x40]
7101cd6428  sub x9,x9,x8
7101cd642c  asr x9,x9,#0x3
7101cd6430  cmp x9,#0x9
7101cd6434  b.cc 0x7101cd6448
7101cd6438  ldr x22,[x8, #0x40]
7101cd643c  ldrb w8,[x0, #0x191]
7101cd6440  cbnz w8,0x7101cd64c4
7101cd6444  b 0x7101cd6454
7101cd6448  mov x22,xzr
7101cd644c  ldrb w8,[x0, #0x191]
7101cd6450  cbnz w8,0x7101cd64c4
7101cd6454  mov w2,#0x4
7101cd6458  mov x1,x22
7101cd645c  bl 0x7103313f20
7101cd6460  tbz w0,#0x0,0x7101cd64c4
7101cd6464  add x0,sp,#0x70
7101cd6468  mov x1,x22
7101cd646c  bl 0x71024076d0
7101cd6470  ldr x8,[sp, #0x80]
7101cd6474  adrp x9,0x7104f73000
7101cd6478  add x9,x9,#0xd50
7101cd647c  str x9,[sp, #0x78]
7101cd6480  cbz x8,0x7101cd64f0
7101cd6484  adrp x8,0x7106dd5000
7101cd6488  ldrb w8,[x8, #0x3a8]
7101cd648c  cmp w8,#0x1
7101cd6490  b.ne 0x7101cd64f0
7101cd6494  adrp x9,0x7106dd5000
7101cd6498  ldr w8,[sp, #0x88]
7101cd649c  ldr w9,[x9, #0x3ac]
7101cd64a0  cmp w8,w9
7101cd64a4  b.ne 0x7101cd64f0
7101cd64a8  ldr x8,[sp, #0x80]
7101cd64ac  ldr wzr,[x8, #0x38]!
7101cd64b0  ldaxr w9,[x8]
7101cd64b4  sub w9,w9,#0x1
7101cd64b8  stlxr w10,w9,[x8]
7101cd64bc  cbnz w10,0x7101cd64b0
7101cd64c0  b 0x7101cd64f0
7101cd64c4  mov x8,#0x650000000000
7101cd64c8  movk x8,#0x87, LSL #48
7101cd64cc  strb wzr,[sp, #0x90]
7101cd64d0  stp xzr,x8,[sp, #0x80]
7101cd64d4  mov x8,#-0x1
7101cd64d8  stp x8,xzr,[sp, #0x98]
7101cd64dc  adrp x8,0x7104f73000
7101cd64e0  add x8,x8,#0xd50
7101cd64e4  str wzr,[sp, #0x70]
7101cd64e8  str xzr,[sp, #0xa8]
7101cd64ec  str x8,[sp, #0x78]
7101cd64f0  add w8,w24,#0x1
7101cd64f4  str xzr,[sp, #0x80]
7101cd64f8  strb wzr,[sp, #0x90]
7101cd64fc  b 0x7101cd6e34
7101cd6500  mov x22,xzr
7101cd6504  ldrb w8,[x0, #0x191]
7101cd6508  cbnz w8,0x7101cd658c
7101cd650c  mov w2,#0x4
7101cd6510  mov x1,x22
7101cd6514  bl 0x7103313f20
7101cd6518  tbz w0,#0x0,0x7101cd658c
7101cd651c  add x0,sp,#0x70
7101cd6520  mov x1,x22
7101cd6524  add x24,sp,#0x70
7101cd6528  bl 0x71024076d0
7101cd652c  ldr x9,[sp, #0x80]
7101cd6530  add x8,x24,#0x10
7101cd6534  adrp x10,0x7104f73000
7101cd6538  add x10,x10,#0xd50
7101cd653c  str x10,[sp, #0x78]
7101cd6540  cbz x9,0x7101cd6f38
7101cd6544  adrp x9,0x7106dd5000
7101cd6548  ldrb w9,[x9, #0x3a8]
7101cd654c  cmp w9,#0x1
7101cd6550  b.ne 0x7101cd6f20
7101cd6554  adrp x10,0x7106dd5000
7101cd6558  ldr w9,[sp, #0x88]
7101cd655c  ldr w10,[x10, #0x3ac]
7101cd6560  cmp w9,w10
7101cd6564  b.ne 0x7101cd6f20
7101cd6568  ldr x10,[sp, #0x80]
7101cd656c  ldr wzr,[x10, #0x38]!
7101cd6570  ldaxr w9,[x10]
7101cd6574  sub w9,w9,#0x1
7101cd6578  add x24,sp,#0x70
7101cd657c  stlxr w11,w9,[x10]
7101cd6580  orr w9,wzr,#0x6
7101cd6584  cbnz w11,0x7101cd6570
7101cd6588  b 0x7101cd6688
7101cd658c  mov x9,#0x650000000000
7101cd6590  movk x9,#0x87, LSL #48
7101cd6594  add x24,sp,#0x70
7101cd6598  stp xzr,x9,[sp, #0x80]
7101cd659c  mov x9,#-0x1
7101cd65a0  adrp x10,0x7104f73000
7101cd65a4  add x10,x10,#0xd50
7101cd65a8  add x8,x24,#0x10
7101cd65ac  strb wzr,[sp, #0x90]
7101cd65b0  str wzr,[sp, #0x70]
7101cd65b4  str xzr,[sp, #0xa8]
7101cd65b8  stp x9,xzr,[sp, #0x98]
7101cd65bc  orr w9,wzr,#0x6
7101cd65c0  b 0x7101cd6684
7101cd65c4  mov x22,xzr
7101cd65c8  ldrb w8,[x0, #0x191]
7101cd65cc  cbnz w8,0x7101cd6650
7101cd65d0  mov w2,#0x4
7101cd65d4  mov x1,x22
7101cd65d8  bl 0x7103313f20
7101cd65dc  tbz w0,#0x0,0x7101cd6650
7101cd65e0  add x0,sp,#0x70
7101cd65e4  mov x1,x22
7101cd65e8  add x24,sp,#0x70
7101cd65ec  bl 0x71024076d0
7101cd65f0  ldr x9,[sp, #0x80]
7101cd65f4  add x8,x24,#0x10
7101cd65f8  adrp x10,0x7104f73000
7101cd65fc  add x10,x10,#0xd50
7101cd6600  str x10,[sp, #0x78]
7101cd6604  cbz x9,0x7101cd6f40
7101cd6608  adrp x9,0x7106dd5000
7101cd660c  ldrb w9,[x9, #0x3a8]
7101cd6610  cmp w9,#0x1
7101cd6614  b.ne 0x7101cd6f2c
7101cd6618  adrp x10,0x7106dd5000
7101cd661c  ldr w9,[sp, #0x88]
7101cd6620  ldr w10,[x10, #0x3ac]
7101cd6624  cmp w9,w10
7101cd6628  b.ne 0x7101cd6f2c
7101cd662c  ldr x10,[sp, #0x80]
7101cd6630  ldr wzr,[x10, #0x38]!
7101cd6634  ldaxr w9,[x10]
7101cd6638  sub w9,w9,#0x1
7101cd663c  add x24,sp,#0x70
7101cd6640  stlxr w11,w9,[x10]
7101cd6644  mov w9,#0x1
7101cd6648  cbnz w11,0x7101cd6634
7101cd664c  b 0x7101cd6688
7101cd6650  mov x9,#0x650000000000
7101cd6654  movk x9,#0x87, LSL #48
7101cd6658  add x24,sp,#0x70
7101cd665c  stp xzr,x9,[sp, #0x80]
7101cd6660  mov x9,#-0x1
7101cd6664  adrp x10,0x7104f73000
7101cd6668  add x10,x10,#0xd50
7101cd666c  add x8,x24,#0x10
7101cd6670  strb wzr,[sp, #0x90]
7101cd6674  str wzr,[sp, #0x70]
7101cd6678  str xzr,[sp, #0xa8]
7101cd667c  stp x9,xzr,[sp, #0x98]
7101cd6680  mov w9,#0x1
7101cd6684  str x10,[sp, #0x78]
7101cd6688  str xzr,[x8]
7101cd668c  add w8,w23,w9
7101cd6690  mov w9,#0x2493
7101cd6694  movk w9,#0x9249, LSL #16
7101cd6698  smull x9,w8,w9
7101cd669c  lsr x9,x9,#0x20
7101cd66a0  add w9,w9,w8
7101cd66a4  asr w10,w9,#0x2
7101cd66a8  add w9,w10,w9, LSR #0x1f
7101cd66ac  sub w9,w9,w9, LSL #0x3
7101cd66b0  add w23,w8,w9
7101cd66b4  strb wzr,[x24, #0x20]
7101cd66b8  str w23,[x19, #0x208]
7101cd66bc  cmp w20,#0x2
7101cd66c0  b.ne 0x7101cd66d4
7101cd66c4  ldr x8,[x19, #0x268]
7101cd66c8  ldr w8,[x8, #0x254]
7101cd66cc  cmp w8,w21
7101cd66d0  b.ne 0x7101cd68c4
7101cd66d4  mov w25,wzr
7101cd66d8  mov w24,#0xffffffff
7101cd66dc  cmp w21,#0x8
7101cd66e0  b.hi 0x7101cd6790
7101cd66e4  adrp x8,0x71044f9000
7101cd66e8  add x8,x8,#0xdd4
7101cd66ec  mov w9,w21
7101cd66f0  ldrsw x9,[x8, x9, LSL #0x2]
7101cd66f4  add x8,x9,x8
7101cd66f8  mov w22,w25
7101cd66fc  br x8
7101cd6700  add x9,x19,#0x208
7101cd6704  orr w8,wzr,#0x7
7101cd6708  orr w24,wzr,#0x6
7101cd670c  b 0x7101cd67b8
7101cd6710  add x9,x19,#0x20c
7101cd6714  b 0x7101cd6784
7101cd6718  ldr w9,[x19, #0x208]
7101cd671c  cmp w9,#0x2
7101cd6720  mov w8,#0x4
7101cd6724  cinc w8,w8,ne
7101cd6728  cmp w9,#0x1
7101cd672c  sub w24,w8,#0x1
7101cd6730  b.eq 0x7101cd6798
7101cd6734  cmp w9,#0x2
7101cd6738  b.ne 0x7101cd67a0
7101cd673c  add x9,x19,#0x234
7101cd6740  b 0x7101cd67b8
7101cd6744  ldr w8,[x19, #0x208]
7101cd6748  cmp w8,#0x2
7101cd674c  b.eq 0x7101cd67ac
7101cd6750  cmp w8,#0x1
7101cd6754  b.ne 0x7101cd6d00
7101cd6758  add x9,x19,#0x220
7101cd675c  b 0x7101cd67b0
7101cd6760  add x9,x19,#0x240
7101cd6764  b 0x7101cd67b0
7101cd6768  add x9,x19,#0x244
7101cd676c  b 0x7101cd67b0
7101cd6770  add x9,x19,#0x248
7101cd6774  mov w8,#0x2
7101cd6778  mov w24,#0x1
7101cd677c  b 0x7101cd67b8
7101cd6780  add x9,x19,#0x24c
7101cd6784  orr w8,wzr,#0x3
7101cd6788  mov w24,#0x2
7101cd678c  b 0x7101cd67b8
7101cd6790  mov w22,w25
7101cd6794  b 0x7101cd67d0
7101cd6798  add x9,x19,#0x21c
7101cd679c  b 0x7101cd67b8
7101cd67a0  mov w25,wzr
7101cd67a4  mov w22,wzr
7101cd67a8  b 0x7101cd67d0
7101cd67ac  add x9,x19,#0x238
7101cd67b0  mov w8,#0x4
7101cd67b4  orr w24,wzr,#0x3
7101cd67b8  ldr w25,[x9]
7101cd67bc  cmp w25,#0x0
7101cd67c0  cset w9,gt
7101cd67c4  cmp w25,w8
7101cd67c8  cset w8,lt
7101cd67cc  and w22,w9,w8
7101cd67d0  ldr x9,[x19, #0x268]
7101cd67d4  ldr x8,[x9, #0x1b8]
7101cd67d8  cbz x8,0x7101cd68c4
7101cd67dc  add x9,x9,#0x1b8
7101cd67e0  mov x10,x9
7101cd67e4  mov x11,x8
7101cd67e8  ldr w12,[x11, #0x20]
7101cd67ec  cmp w12,#0x0
7101cd67f0  cset w12,lt
7101cd67f4  csel x10,x10,x11,lt
7101cd67f8  ldr x11,[x11, w12, UXTW #0x3]
7101cd67fc  cbnz x11,0x7101cd67e8
7101cd6800  cmp x10,x9
7101cd6804  b.eq 0x7101cd6854
7101cd6808  ldr w11,[x10, #0x20]
7101cd680c  cmp w11,#0x0
7101cd6810  b.gt 0x7101cd6854
7101cd6814  ldr x23,[x10, #0x28]
7101cd6818  cbz x23,0x7101cd6854
7101cd681c  ldr x8,[x23]
7101cd6820  ldr x8,[x8, #0x1f8]
7101cd6824  mov x0,x23
7101cd6828  mov w1,w22
7101cd682c  blr x8
7101cd6830  ldr x8,[x23]
7101cd6834  ldr x8,[x8, #0x388]
7101cd6838  eor w1,w22,#0x1
7101cd683c  mov x0,x23
7101cd6840  mov w2,wzr
7101cd6844  blr x8
7101cd6848  ldr x8,[x19, #0x268]
7101cd684c  add x9,x8,#0x1b8
7101cd6850  ldr x8,[x8, #0x1b8]
7101cd6854  cbz x8,0x7101cd68c4
7101cd6858  mov x10,x9
7101cd685c  ldr w11,[x8, #0x20]
7101cd6860  cmp w11,#0x1
7101cd6864  cset w11,lt
7101cd6868  csel x10,x10,x8,lt
7101cd686c  ldr x8,[x8, w11, UXTW #0x3]
7101cd6870  cbnz x8,0x7101cd685c
7101cd6874  cmp x10,x9
7101cd6878  b.eq 0x7101cd68c4
7101cd687c  ldr w8,[x10, #0x20]
7101cd6880  cmp w8,#0x1
7101cd6884  b.gt 0x7101cd68c4
7101cd6888  ldr x22,[x10, #0x28]
7101cd688c  cbz x22,0x7101cd68c4
7101cd6890  ldr x8,[x22]
7101cd6894  ldr x8,[x8, #0x1f8]
7101cd6898  cmp w25,w24
7101cd689c  cset w1,lt
7101cd68a0  mov x0,x22
7101cd68a4  cset w23,ge
7101cd68a8  blr x8
7101cd68ac  ldr x8,[x22]
7101cd68b0  ldr x8,[x8, #0x388]
7101cd68b4  mov x0,x22
7101cd68b8  mov w1,w23
7101cd68bc  mov w2,wzr
7101cd68c0  blr x8
7101cd68c4  cbz w21,0x7101cd6918
7101cd68c8  adrp x1,0x71042b4000
7101cd68cc  add x1,x1,#0x52d
7101cd68d0  mov x8,sp
7101cd68d4  add x0,sp,#0x60
7101cd68d8  bl 0x7103776910
7101cd68dc  mov x2,sp
7101cd68e0  mov x0,x19
7101cd68e4  mov w1,w21
7101cd68e8  bl 0x7101cd7110
7101cd68ec  ldr x0,[sp, #0x8]
7101cd68f0  adrp x8,0x710523d000
7101cd68f4  add x8,x8,#0x9a8
7101cd68f8  stp x8,xzr,[sp]
7101cd68fc  cbz x0,0x7101cd6a4c
7101cd6900  bl 0x710392eb40
7101cd6904  cbnz w20,0x7101cd6a50
7101cd6908  ldr x22,[sp, #0x68]
7101cd690c  adrp x1,0x7104422000
7101cd6910  add x1,x1,#0x55e
7101cd6914  b 0x7101cd6a64
7101cd6918  adrp x1,0x710437c000
7101cd691c  add x1,x1,#0x6ed
7101cd6920  add x8,sp,#0x20
7101cd6924  add x0,sp,#0x60
7101cd6928  bl 0x7103776640
7101cd692c  add x1,sp,#0x20
7101cd6930  mov x0,x19
7101cd6934  bl 0x7101cd6f50
7101cd6938  ldr x22,[sp, #0x28]
7101cd693c  adrp x23,0x710523d000
7101cd6940  add x23,x23,#0x988
7101cd6944  stp x23,xzr,[sp, #0x20]
7101cd6948  cbz x22,0x7101cd696c
7101cd694c  ldr x0,[x22, #0x18]
7101cd6950  adrp x8,0x710523d000
7101cd6954  add x8,x8,#0x9a8
7101cd6958  stp x8,xzr,[x22, #0x10]
7101cd695c  cbz x0,0x7101cd6964
7101cd6960  bl 0x710392eb40
7101cd6964  mov x0,x22
7101cd6968  bl 0x710392eb40
7101cd696c  adrp x1,0x710424f000
7101cd6970  add x1,x1,#0x682
7101cd6974  add x8,sp,#0x10
7101cd6978  add x0,sp,#0x60
7101cd697c  bl 0x7103776640
7101cd6980  add x1,sp,#0x10
7101cd6984  mov x0,x19
7101cd6988  bl 0x7101cd6f50
7101cd698c  ldr x22,[sp, #0x18]
7101cd6990  stp x23,xzr,[sp, #0x10]
7101cd6994  cbz x22,0x7101cd69b8
7101cd6998  ldr x0,[x22, #0x18]
7101cd699c  adrp x8,0x710523d000
7101cd69a0  add x8,x8,#0x9a8
7101cd69a4  stp x8,xzr,[x22, #0x10]
7101cd69a8  cbz x0,0x7101cd69b0
7101cd69ac  bl 0x710392eb40
7101cd69b0  mov x0,x22
7101cd69b4  bl 0x710392eb40
7101cd69b8  ldr w8,[x19, #0x208]
7101cd69bc  cmp w8,#0x6
7101cd69c0  b.hi 0x7101cd6a4c
7101cd69c4  adrp x9,0x71044f9000
7101cd69c8  add x9,x9,#0xdf8
7101cd69cc  ldrsw x8,[x9, x8, LSL #0x2]
7101cd69d0  add x8,x8,x9
7101cd69d4  br x8
7101cd69d8  ldr x0,[sp, #0x68]
7101cd69dc  adrp x1,0x710432a000
7101cd69e0  add x1,x1,#0x122
7101cd69e4  b 0x7101cd6a44
7101cd69e8  ldr x0,[sp, #0x68]
7101cd69ec  adrp x1,0x71042a3000
7101cd69f0  add x1,x1,#0x1be
7101cd69f4  b 0x7101cd6a44
7101cd69f8  ldr x0,[sp, #0x68]
7101cd69fc  adrp x1,0x7104401000
7101cd6a00  add x1,x1,#0x707
7101cd6a04  b 0x7101cd6a44
7101cd6a08  ldr x0,[sp, #0x68]
7101cd6a0c  adrp x1,0x7104270000
7101cd6a10  add x1,x1,#0xb5
7101cd6a14  b 0x7101cd6a44
7101cd6a18  ldr x0,[sp, #0x68]
7101cd6a1c  adrp x1,0x71043f0000
7101cd6a20  add x1,x1,#0xac5
7101cd6a24  b 0x7101cd6a44
7101cd6a28  ldr x0,[sp, #0x68]
7101cd6a2c  adrp x1,0x7104401000
7101cd6a30  add x1,x1,#0x716
7101cd6a34  b 0x7101cd6a44
7101cd6a38  ldr x0,[sp, #0x68]
7101cd6a3c  adrp x1,0x71042f8000
7101cd6a40  add x1,x1,#0x3df
7101cd6a44  fmov s0,0x3f800000
7101cd6a48  bl 0x7103778300
7101cd6a4c  cbz w20,0x7101cd6908
7101cd6a50  cmp w20,#0x1
7101cd6a54  b.ne 0x7101cd6a78
7101cd6a58  ldr x22,[sp, #0x68]
7101cd6a5c  adrp x1,0x71043e0000
7101cd6a60  add x1,x1,#0x2be
7101cd6a64  fmov s0,0x3f800000
7101cd6a68  mov x0,x22
7101cd6a6c  bl 0x7103778300
7101cd6a70  cbnz w21,0x7101cd6cb4
7101cd6a74  b 0x7101cd6a90
7101cd6a78  ldr x22,[sp, #0x68]
7101cd6a7c  adrp x1,0x7104422000
7101cd6a80  add x1,x1,#0x55e
7101cd6a84  mov x0,x22
7101cd6a88  bl 0x7103778760
7101cd6a8c  cbnz w21,0x7101cd6cb4
7101cd6a90  ldr w1,[x19, #0x208]
7101cd6a94  mov x0,x19
7101cd6a98  bl 0x7101cd74e0
7101cd6a9c  ldr w8,[x19, #0x208]
7101cd6aa0  cmp w8,#0x5
7101cd6aa4  b.hi 0x7101cd6ad0
7101cd6aa8  adrp x9,0x71044f9000
7101cd6aac  add x9,x9,#0xe14
7101cd6ab0  ldrsw x10,[x9, x8, LSL #0x2]
7101cd6ab4  add x9,x10,x9
7101cd6ab8  br x9
7101cd6abc  mov w1,#0x1
7101cd6ac0  mov w2,#0x2
7101cd6ac4  mov x0,x19
7101cd6ac8  bl 0x7101cd6190
7101cd6acc  ldr w8,[x19, #0x208]
7101cd6ad0  cmp w8,#0x5
7101cd6ad4  b.hi 0x7101cd6b04
7101cd6ad8  mov w8,w8
7101cd6adc  adrp x9,0x71044f9000
7101cd6ae0  add x9,x9,#0xe2c
7101cd6ae4  ldrsw x8,[x9, x8, LSL #0x2]
7101cd6ae8  add x8,x8,x9
7101cd6aec  br x8
7101cd6af0  mov w1,#0x2
7101cd6af4  mov w2,#0x2
7101cd6af8  mov x0,x19
7101cd6afc  bl 0x7101cd6190
7101cd6b00  ldr w8,[x19, #0x208]
7101cd6b04  cmp w8,#0x5
7101cd6b08  b.hi 0x7101cd6b38
7101cd6b0c  mov w8,w8
7101cd6b10  adrp x9,0x71044f9000
7101cd6b14  add x9,x9,#0xe44
7101cd6b18  ldrsw x8,[x9, x8, LSL #0x2]
7101cd6b1c  add x8,x8,x9
7101cd6b20  br x8
7101cd6b24  orr w1,wzr,#0x3
7101cd6b28  mov w2,#0x2
7101cd6b2c  mov x0,x19
7101cd6b30  bl 0x7101cd6190
7101cd6b34  ldr w8,[x19, #0x208]
7101cd6b38  cmp w8,#0x5
7101cd6b3c  b.hi 0x7101cd6b6c
7101cd6b40  mov w8,w8
7101cd6b44  adrp x9,0x71044f9000
7101cd6b48  add x9,x9,#0xe5c
7101cd6b4c  ldrsw x8,[x9, x8, LSL #0x2]
7101cd6b50  add x8,x8,x9
7101cd6b54  br x8
7101cd6b58  mov w1,#0x4
7101cd6b5c  mov w2,#0x2
7101cd6b60  mov x0,x19
7101cd6b64  bl 0x7101cd6190
7101cd6b68  ldr w8,[x19, #0x208]
7101cd6b6c  cmp w8,#0x5
7101cd6b70  b.hi 0x7101cd6ba0
7101cd6b74  mov w9,w8
7101cd6b78  adrp x10,0x71044f9000
7101cd6b7c  add x10,x10,#0xe74
7101cd6b80  ldrsw x9,[x10, x9, LSL #0x2]
7101cd6b84  add x9,x9,x10
7101cd6b88  br x9
7101cd6b8c  mov w1,#0x5
7101cd6b90  mov w2,#0x2
7101cd6b94  mov x0,x19
7101cd6b98  bl 0x7101cd6190
7101cd6b9c  ldr w8,[x19, #0x208]
7101cd6ba0  cmp w8,#0x5
7101cd6ba4  b.hi 0x7101cd6bd4
7101cd6ba8  mov w9,w8
7101cd6bac  adrp x10,0x71044f9000
7101cd6bb0  add x10,x10,#0xe8c
7101cd6bb4  ldrsw x9,[x10, x9, LSL #0x2]
7101cd6bb8  add x9,x9,x10
7101cd6bbc  br x9
7101cd6bc0  orr w1,wzr,#0x6
7101cd6bc4  mov w2,#0x2
7101cd6bc8  mov x0,x19
7101cd6bcc  bl 0x7101cd6190
7101cd6bd0  ldr w8,[x19, #0x208]
7101cd6bd4  cmp w8,#0x5
7101cd6bd8  b.hi 0x7101cd6c08
7101cd6bdc  mov w9,w8
7101cd6be0  adrp x10,0x71044f9000
7101cd6be4  add x10,x10,#0xea4
7101cd6be8  ldrsw x9,[x10, x9, LSL #0x2]
7101cd6bec  add x9,x9,x10
7101cd6bf0  br x9
7101cd6bf4  orr w1,wzr,#0x7
7101cd6bf8  mov w2,#0x2
7101cd6bfc  mov x0,x19
7101cd6c00  bl 0x7101cd6190
7101cd6c04  ldr w8,[x19, #0x208]
7101cd6c08  sub w9,w8,#0x3
7101cd6c0c  cmp w9,#0x2
7101cd6c10  b.cc 0x7101cd6c4c
7101cd6c14  cbz w8,0x7101cd6c4c
7101cd6c18  cmp w8,#0x5
7101cd6c1c  b.ne 0x7101cd6c34
7101cd6c20  mov w1,#0x8
7101cd6c24  mov w2,#0x2
7101cd6c28  mov x0,x19
7101cd6c2c  bl 0x7101cd6190
7101cd6c30  ldr w8,[x19, #0x208]
7101cd6c34  cmp w8,#0x5
7101cd6c38  b.ne 0x7101cd6c4c
7101cd6c3c  mov w1,#0x9
7101cd6c40  mov w2,#0x2
7101cd6c44  mov x0,x19
7101cd6c48  bl 0x7101cd6190
7101cd6c4c  mov w1,#0xa
7101cd6c50  mov w2,#0x2
7101cd6c54  mov x0,x19
7101cd6c58  bl 0x7101cd6190
7101cd6c5c  mov x0,x19
7101cd6c60  bl 0x7101cd5f40
7101cd6c64  and w1,w0,#0x1
7101cd6c68  mov x0,x19
7101cd6c6c  bl 0x7101cd60c0
7101cd6c70  cbz w20,0x7101cd6c8c
7101cd6c74  cmp w20,#0x1
7101cd6c78  b.ne 0x7101cd6ca4
7101cd6c7c  ldr x0,[x19, #0x178]
7101cd6c80  adrp x1,0x7104422000
7101cd6c84  add x1,x1,#0x569
7101cd6c88  b 0x7101cd6c98
7101cd6c8c  ldr x0,[x19, #0x178]
7101cd6c90  adrp x1,0x710434a000
7101cd6c94  add x1,x1,#0x4ac
7101cd6c98  fmov s0,0x3f800000
7101cd6c9c  bl 0x7103778300
7101cd6ca0  b 0x7101cd6cb4
7101cd6ca4  ldr x0,[x19, #0x178]
7101cd6ca8  adrp x1,0x710434a000
7101cd6cac  add x1,x1,#0x4ac
7101cd6cb0  bl 0x7103778760
7101cd6cb4  adrp x8,0x710523d000
7101cd6cb8  add x8,x8,#0x988
7101cd6cbc  stp x8,xzr,[sp, #0x60]
7101cd6cc0  cbz x22,0x7101cd6ce4
7101cd6cc4  ldr x0,[x22, #0x18]
7101cd6cc8  adrp x8,0x710523d000
7101cd6ccc  add x8,x8,#0x9a8
7101cd6cd0  stp x8,xzr,[x22, #0x10]
7101cd6cd4  cbz x0,0x7101cd6cdc
7101cd6cd8  bl 0x710392eb40
7101cd6cdc  mov x0,x22
7101cd6ce0  bl 0x710392eb40
7101cd6ce4  ldp x29,x30,[sp, #0xf0]
7101cd6ce8  ldr x25,[sp, #0xb0]
7101cd6cec  ldp x20,x19,[sp, #0xe0]
7101cd6cf0  ldp x22,x21,[sp, #0xd0]
7101cd6cf4  ldp x24,x23,[sp, #0xc0]
7101cd6cf8  add sp,sp,#0x100
7101cd6cfc  ret
7101cd6d00  mov w25,wzr
7101cd6d04  mov w22,wzr
7101cd6d08  orr w24,wzr,#0x3
7101cd6d0c  b 0x7101cd67d0
7101cd6d10  ldr w24,[x19, #0x234]
7101cd6d14  cmp w20,#0x1
7101cd6d18  b.ne 0x7101cd6d48
7101cd6d1c  b 0x7101cd6418
7101cd6d20  mov w24,wzr
7101cd6d24  cmp w20,#0x1
7101cd6d28  b.ne 0x7101cd6d48
7101cd6d2c  b 0x7101cd6418
7101cd6d30  ldr w24,[x19, #0x238]
7101cd6d34  b 0x7101cd6d3c
7101cd6d38  mov w24,wzr
7101cd6d3c  mov w25,#0x4
7101cd6d40  cmp w20,#0x1
7101cd6d44  b.eq 0x7101cd6418
7101cd6d48  cbnz w20,0x7101cd6e3c
7101cd6d4c  adrp x8,0x710532f000
7101cd6d50  ldr x8,[x8, #0x8d0]
7101cd6d54  ldr x0,[x8, #0x8]
7101cd6d58  ldp x8,x9,[x0, #0x40]
7101cd6d5c  sub x9,x9,x8
7101cd6d60  asr x9,x9,#0x3
7101cd6d64  cmp x9,#0x9
7101cd6d68  b.cc 0x7101cd6d7c
7101cd6d6c  ldr x22,[x8, #0x40]
7101cd6d70  ldrb w8,[x0, #0x191]
7101cd6d74  cbnz w8,0x7101cd6df8
7101cd6d78  b 0x7101cd6d88
7101cd6d7c  mov x22,xzr
7101cd6d80  ldrb w8,[x0, #0x191]
7101cd6d84  cbnz w8,0x7101cd6df8
7101cd6d88  mov w2,#0x4
7101cd6d8c  mov x1,x22
7101cd6d90  bl 0x7103313f20
7101cd6d94  tbz w0,#0x0,0x7101cd6df8
7101cd6d98  add x0,sp,#0x70
7101cd6d9c  mov x1,x22
7101cd6da0  bl 0x71024076d0
7101cd6da4  ldr x8,[sp, #0x80]
7101cd6da8  adrp x9,0x7104f73000
7101cd6dac  add x9,x9,#0xd50
7101cd6db0  str x9,[sp, #0x78]
7101cd6db4  cbz x8,0x7101cd6e24
7101cd6db8  adrp x8,0x7106dd5000
7101cd6dbc  ldrb w8,[x8, #0x3a8]
7101cd6dc0  cmp w8,#0x1
7101cd6dc4  b.ne 0x7101cd6e24
7101cd6dc8  adrp x9,0x7106dd5000
7101cd6dcc  ldr w8,[sp, #0x88]
7101cd6dd0  ldr w9,[x9, #0x3ac]
7101cd6dd4  cmp w8,w9
7101cd6dd8  b.ne 0x7101cd6e24
7101cd6ddc  ldr x8,[sp, #0x80]
7101cd6de0  ldr wzr,[x8, #0x38]!
7101cd6de4  ldaxr w9,[x8]
7101cd6de8  sub w9,w9,#0x1
7101cd6dec  stlxr w10,w9,[x8]
7101cd6df0  cbnz w10,0x7101cd6de4
7101cd6df4  b 0x7101cd6e24
7101cd6df8  mov x8,#0x650000000000
7101cd6dfc  movk x8,#0x87, LSL #48
7101cd6e00  strb wzr,[sp, #0x90]
7101cd6e04  stp xzr,x8,[sp, #0x80]
7101cd6e08  mov x8,#-0x1
7101cd6e0c  stp x8,xzr,[sp, #0x98]
7101cd6e10  adrp x8,0x7104f73000
7101cd6e14  add x8,x8,#0xd50
7101cd6e18  str wzr,[sp, #0x70]
7101cd6e1c  str xzr,[sp, #0xa8]
7101cd6e20  str x8,[sp, #0x78]
7101cd6e24  add w8,w25,w24
7101cd6e28  str xzr,[sp, #0x80]
7101cd6e2c  strb wzr,[sp, #0x90]
7101cd6e30  sub w8,w8,#0x1
7101cd6e34  sdiv w9,w8,w25
7101cd6e38  msub w24,w9,w25,w8
7101cd6e3c  cmp w21,#0x8
7101cd6e40  b.hi 0x7101cd66bc
7101cd6e44  adrp x8,0x71044f9000
7101cd6e48  add x8,x8,#0xdb0
7101cd6e4c  ldrsw x9,[x8, x23, LSL #0x2]
7101cd6e50  add x8,x9,x8
7101cd6e54  br x8
7101cd6e58  str w24,[x19, #0x208]
7101cd6e5c  cmp w20,#0x2
7101cd6e60  b.eq 0x7101cd66c4
7101cd6e64  b 0x7101cd66d4
7101cd6e68  str w24,[x19, #0x20c]
7101cd6e6c  cmp w20,#0x2
7101cd6e70  b.eq 0x7101cd66c4
7101cd6e74  b 0x7101cd66d4
7101cd6e78  ldr w8,[x19, #0x208]
7101cd6e7c  cmp w8,#0x2
7101cd6e80  b.eq 0x7101cd6f00
7101cd6e84  cmp w8,#0x1
7101cd6e88  b.ne 0x7101cd66bc
7101cd6e8c  str w24,[x19, #0x21c]
7101cd6e90  cmp w20,#0x2
7101cd6e94  b.eq 0x7101cd66c4
7101cd6e98  b 0x7101cd66d4
7101cd6e9c  ldr w8,[x19, #0x208]
7101cd6ea0  cmp w8,#0x2
7101cd6ea4  b.eq 0x7101cd6f10
7101cd6ea8  cmp w8,#0x1
7101cd6eac  b.ne 0x7101cd66bc
7101cd6eb0  str w24,[x19, #0x220]
7101cd6eb4  cmp w20,#0x2
7101cd6eb8  b.eq 0x7101cd66c4
7101cd6ebc  b 0x7101cd66d4
7101cd6ec0  str w24,[x19, #0x240]
7101cd6ec4  cmp w20,#0x2
7101cd6ec8  b.eq 0x7101cd66c4
7101cd6ecc  b 0x7101cd66d4
7101cd6ed0  str w24,[x19, #0x244]
7101cd6ed4  cmp w20,#0x2
7101cd6ed8  b.eq 0x7101cd66c4
7101cd6edc  b 0x7101cd66d4
7101cd6ee0  str w24,[x19, #0x248]
7101cd6ee4  cmp w20,#0x2
7101cd6ee8  b.eq 0x7101cd66c4
7101cd6eec  b 0x7101cd66d4
7101cd6ef0  str w24,[x19, #0x24c]
7101cd6ef4  cmp w20,#0x2
7101cd6ef8  b.eq 0x7101cd66c4
7101cd6efc  b 0x7101cd66d4
7101cd6f00  str w24,[x19, #0x234]
7101cd6f04  cmp w20,#0x2
7101cd6f08  b.eq 0x7101cd66c4
7101cd6f0c  b 0x7101cd66d4
7101cd6f10  str w24,[x19, #0x238]
7101cd6f14  cmp w20,#0x2
7101cd6f18  b.eq 0x7101cd66c4
7101cd6f1c  b 0x7101cd66d4
7101cd6f20  orr w9,wzr,#0x6
7101cd6f24  add x24,sp,#0x70
7101cd6f28  b 0x7101cd6688
7101cd6f2c  mov w9,#0x1
7101cd6f30  add x24,sp,#0x70
7101cd6f34  b 0x7101cd6688
7101cd6f38  orr w9,wzr,#0x6
7101cd6f3c  b 0x7101cd6688
7101cd6f40  mov w9,#0x1
7101cd6f44  b 0x7101cd6688
