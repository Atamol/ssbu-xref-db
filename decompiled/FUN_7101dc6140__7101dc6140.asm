// addr:      7101dc6140
// offset:    0x1dc6140
// name:      FUN_7101dc6140
// mangled:   
// size:      4828

7101dc6140  stp d15,d14,[sp, #-0xa0]!
7101dc6144  stp d13,d12,[sp, #0x10]
7101dc6148  stp d11,d10,[sp, #0x20]
7101dc614c  stp d9,d8,[sp, #0x30]
7101dc6150  stp x28,x27,[sp, #0x40]
7101dc6154  stp x26,x25,[sp, #0x50]
7101dc6158  stp x24,x23,[sp, #0x60]
7101dc615c  stp x22,x21,[sp, #0x70]
7101dc6160  stp x20,x19,[sp, #0x80]
7101dc6164  stp x29,x30,[sp, #0x90]
7101dc6168  add x29,sp,#0x90
7101dc616c  sub sp,sp,#0x230
7101dc6170  ldr w8,[x0, #0x244]
7101dc6174  mov x20,x0
7101dc6178  cbz w8,0x7101dc6324
7101dc617c  ldr x0,[x20, #0x2a0]
7101dc6180  bl 0x7103399c10
7101dc6184  ldr w8,[x20, #0x240]
7101dc6188  cmp w8,#0x1
7101dc618c  b.ne 0x7101dc61c4
7101dc6190  ldr x8,[x20, #0x30]
7101dc6194  ldrb w8,[x8, #0x280]
7101dc6198  cbnz w8,0x7101dc6714
7101dc619c  ldr x8,[x20, #0x48]
7101dc61a0  ldrb w8,[x8, #0x316]
7101dc61a4  cbnz w8,0x7101dc6714
7101dc61a8  adrp x8,0x710532f000
7101dc61ac  ldr x8,[x8, #0x840]
7101dc61b0  ldr x8,[x8, #0x8]
7101dc61b4  ldr x8,[x8, #0xb8]
7101dc61b8  ldr x8,[x8, #0x80]
7101dc61bc  ldr w8,[x8, #0x2270]
7101dc61c0  cbz w8,0x7101dc6714
7101dc61c4  ldr x8,[x20, #0x38]
7101dc61c8  ldr w8,[x8, #0x25c]
7101dc61cc  cmp w8,#0x1
7101dc61d0  cset w9,eq
7101dc61d4  cmp w8,#0x0
7101dc61d8  csinv w8,w9,wzr,ne
7101dc61dc  cbz w8,0x7101dc6218
7101dc61e0  ldr x9,[x20, #0x30]
7101dc61e4  ldr w9,[x9, #0x254]
7101dc61e8  add w8,w9,w8
7101dc61ec  ldr w9,[x20, #0x258]
7101dc61f0  cmp w9,#0x1
7101dc61f4  orr w9,wzr,#0x3
7101dc61f8  cinc w9,w9,ne
7101dc61fc  cmp w8,w9
7101dc6200  csel w8,wzr,w8,gt
7101dc6204  cmp w8,#0x0
7101dc6208  add x0,x20,#0x30
7101dc620c  mov w2,wzr
7101dc6210  csel w1,w9,w8,lt
7101dc6214  bl 0x7103771a80
7101dc6218  ldr x8,[x20, #0x30]
7101dc621c  ldr w8,[x8, #0x254]
7101dc6220  ldr w9,[x20, #0x250]
7101dc6224  cmp w8,w9
7101dc6228  b.eq 0x7101dc6430
7101dc622c  cmp w9,#0x5
7101dc6230  b.cs 0x7101dc7418
7101dc6234  ldr x10,[x20, #0x48]
7101dc6238  adrp x12,0x71050b0000
7101dc623c  add x12,x12,#0x548
7101dc6240  orr w13,wzr,#0xc
7101dc6244  madd x9,x9,x13,x12
7101dc6248  ldr w11,[x10, #0x2a4]
7101dc624c  str w11,[x9, #0x8]
7101dc6250  ldr w10,[x10, #0x260]
7101dc6254  mov x0,x20
7101dc6258  str w10,[x9, #0xc]
7101dc625c  str w8,[x20, #0x250]
7101dc6260  bl 0x7101dc7ad0
7101dc6264  mov x0,x20
7101dc6268  bl 0x7101dc79d0
7101dc626c  mov x0,x20
7101dc6270  bl 0x7101dc7bf0
7101dc6274  mov w8,#0xffffffff
7101dc6278  mov x0,x20
7101dc627c  mov w1,wzr
7101dc6280  str w8,[x20, #0x288]
7101dc6284  strb wzr,[x20, #0x290]
7101dc6288  bl 0x7101dc7e00
7101dc628c  mov w8,#0x1
7101dc6290  str w8,[x20, #0x28c]
7101dc6294  adrp x8,0x710532f000
7101dc6298  ldr x8,[x8, #0x8d0]
7101dc629c  ldr x0,[x8, #0x8]
7101dc62a0  ldrb w8,[x0, #0x191]
7101dc62a4  cbnz w8,0x7101dc63fc
7101dc62a8  mov x19,#0xc028
7101dc62ac  movk x19,#0x1ca6, LSL #16
7101dc62b0  movk x19,#0x15, LSL #32
7101dc62b4  mov w2,#0x4
7101dc62b8  mov x1,x19
7101dc62bc  bl 0x7103313f20
7101dc62c0  tbz w0,#0x0,0x7101dc63fc
7101dc62c4  add x0,sp,#0x1a0
7101dc62c8  mov x1,x19
7101dc62cc  bl 0x71024076d0
7101dc62d0  ldr x8,[sp, #0x1b0]
7101dc62d4  adrp x9,0x7104f73000
7101dc62d8  add x9,x9,#0xd50
7101dc62dc  str x9,[sp, #0x1a8]
7101dc62e0  cbz x8,0x7101dc6428
7101dc62e4  adrp x8,0x7106dd5000
7101dc62e8  ldrb w8,[x8, #0x3a8]
7101dc62ec  cmp w8,#0x1
7101dc62f0  b.ne 0x7101dc6428
7101dc62f4  adrp x9,0x7106dd5000
7101dc62f8  ldr w8,[sp, #0x1b8]
7101dc62fc  ldr w9,[x9, #0x3ac]
7101dc6300  cmp w8,w9
7101dc6304  b.ne 0x7101dc6428
7101dc6308  ldr x8,[sp, #0x1b0]
7101dc630c  ldr wzr,[x8, #0x38]!
7101dc6310  ldaxr w9,[x8]
7101dc6314  sub w9,w9,#0x1
7101dc6318  stlxr w10,w9,[x8]
7101dc631c  cbnz w10,0x7101dc6310
7101dc6320  b 0x7101dc6428
7101dc6324  ldr w8,[x20, #0x240]
7101dc6328  cmp w8,#0x1
7101dc632c  b.ne 0x7101dc6714
7101dc6330  ldr x0,[x20, #0x30]
7101dc6334  ldr x8,[x0]
7101dc6338  ldr x8,[x8, #0x60]
7101dc633c  mov w1,#0x1
7101dc6340  blr x8
7101dc6344  ldr x0,[x20, #0x30]
7101dc6348  ldr x8,[x0]
7101dc634c  ldr x8,[x8, #0x70]
7101dc6350  mov w1,#0x1
7101dc6354  blr x8
7101dc6358  ldr x0,[x20, #0x38]
7101dc635c  ldr x8,[x0]
7101dc6360  ldr x8,[x8, #0x60]
7101dc6364  mov w1,#0x1
7101dc6368  blr x8
7101dc636c  ldr x0,[x20, #0x38]
7101dc6370  ldr x8,[x0]
7101dc6374  ldr x8,[x8, #0x70]
7101dc6378  mov w1,#0x1
7101dc637c  blr x8
7101dc6380  ldr x0,[x20, #0x40]
7101dc6384  ldr x8,[x0]
7101dc6388  ldr x8,[x8, #0x60]
7101dc638c  mov w1,#0x1
7101dc6390  blr x8
7101dc6394  ldr x0,[x20, #0x40]
7101dc6398  ldr x8,[x0]
7101dc639c  ldr x8,[x8, #0x70]
7101dc63a0  mov w1,#0x1
7101dc63a4  blr x8
7101dc63a8  ldr x0,[x20, #0x48]
7101dc63ac  ldr x8,[x0]
7101dc63b0  ldr x8,[x8, #0x60]
7101dc63b4  mov w1,#0x1
7101dc63b8  blr x8
7101dc63bc  ldr x0,[x20, #0x48]
7101dc63c0  ldr x8,[x0]
7101dc63c4  ldr x2,[x8, #0x70]
7101dc63c8  mov w1,#0x1
7101dc63cc  add sp,sp,#0x230
7101dc63d0  ldp d9,d8,[sp, #0x30]
7101dc63d4  ldp d11,d10,[sp, #0x20]
7101dc63d8  ldp d13,d12,[sp, #0x10]
7101dc63dc  ldp x29,x30,[sp, #0x90]
7101dc63e0  ldp x20,x19,[sp, #0x80]
7101dc63e4  ldp x22,x21,[sp, #0x70]
7101dc63e8  ldp x24,x23,[sp, #0x60]
7101dc63ec  ldp x26,x25,[sp, #0x50]
7101dc63f0  ldp x28,x27,[sp, #0x40]
7101dc63f4  ldp d15,d14,[sp], #0xa0
7101dc63f8  br x2
7101dc63fc  mov x8,#0x650000000000
7101dc6400  movk x8,#0x87, LSL #48
7101dc6404  strb wzr,[sp, #0x1c0]
7101dc6408  stp xzr,x8,[sp, #0x1b0]
7101dc640c  mov x8,#-0x1
7101dc6410  stp x8,xzr,[sp, #0x1c8]
7101dc6414  adrp x8,0x7104f73000
7101dc6418  add x8,x8,#0xd50
7101dc641c  str wzr,[sp, #0x1a0]
7101dc6420  str xzr,[sp, #0x1d8]
7101dc6424  str x8,[sp, #0x1a8]
7101dc6428  str xzr,[sp, #0x1b0]
7101dc642c  strb wzr,[sp, #0x1c0]
7101dc6430  ldr x8,[x20, #0x48]
7101dc6434  ldrsw x8,[x8, #0x2b4]
7101dc6438  tbnz w8,#0x1f,0x7101dc6464
7101dc643c  ldp x10,x9,[x20, #0x58]
7101dc6440  sub x9,x9,x10
7101dc6444  asr x11,x9,#0x1
7101dc6448  orr w9,wzr,#0xffff
7101dc644c  cmp x11,x8
7101dc6450  b.ls 0x7101dc6548
7101dc6454  ldrh w8,[x10, x8, LSL #0x1]
7101dc6458  cmp w8,w9
7101dc645c  b.ne 0x7101dc6554
7101dc6460  b 0x7101dc6650
7101dc6464  ldr x8,[x20, #0x40]
7101dc6468  ldr x9,[x8, #0x1b8]
7101dc646c  cbz x9,0x7101dc64a4
7101dc6470  add x10,x8,#0x1b8
7101dc6474  mov x8,x10
7101dc6478  ldr w11,[x9, #0x20]
7101dc647c  cmp w11,#0x0
7101dc6480  cset w11,lt
7101dc6484  csel x8,x8,x9,lt
7101dc6488  ldr x9,[x9, w11, UXTW #0x3]
7101dc648c  cbnz x9,0x7101dc6478
7101dc6490  cmp x8,x10
7101dc6494  b.eq 0x7101dc64a4
7101dc6498  ldr w9,[x8, #0x20]
7101dc649c  cmp w9,#0x0
7101dc64a0  b.le 0x7101dc677c
7101dc64a4  ldr x8,[x20, #0x28]
7101dc64a8  ldr x0,[x8, #0x8]
7101dc64ac  cbz x0,0x7101dc64d0
7101dc64b0  adrp x1,0x7104421000
7101dc64b4  add x1,x1,#0x55
7101dc64b8  bl 0x71037964b0
7101dc64bc  cbz x0,0x7101dc64d0
7101dc64c0  ldr x8,[x0]
7101dc64c4  ldr x8,[x8, #0x138]
7101dc64c8  blr x8
7101dc64cc  tbz w0,#0x0,0x7101dc6794
7101dc64d0  ldr x8,[x20, #0x40]
7101dc64d4  ldr x9,[x8, #0x1b8]
7101dc64d8  cbz x9,0x7101dc6794
7101dc64dc  add x10,x8,#0x1b8
7101dc64e0  mov x8,x10
7101dc64e4  ldr w11,[x9, #0x20]
7101dc64e8  cmp w11,#0x0
7101dc64ec  cset w11,lt
7101dc64f0  csel x8,x8,x9,lt
7101dc64f4  ldr x9,[x9, w11, UXTW #0x3]
7101dc64f8  cbnz x9,0x7101dc64e4
7101dc64fc  cmp x8,x10
7101dc6500  b.eq 0x7101dc6794
7101dc6504  ldr w9,[x8, #0x20]
7101dc6508  cmp w9,#0x0
7101dc650c  b.gt 0x7101dc6794
7101dc6510  ldr x19,[x8, #0x28]
7101dc6514  cbz x19,0x7101dc6794
7101dc6518  ldr x8,[x19]
7101dc651c  ldr x8,[x8, #0x208]
7101dc6520  mov w1,#0x1
7101dc6524  mov x0,x19
7101dc6528  blr x8
7101dc652c  ldr x8,[x19]
7101dc6530  ldr x8,[x8, #0x388]
7101dc6534  mov x0,x19
7101dc6538  mov w1,wzr
7101dc653c  mov w2,wzr
7101dc6540  blr x8
7101dc6544  b 0x7101dc6794
7101dc6548  orr w8,wzr,#0xffff
7101dc654c  cmp w8,w9
7101dc6550  b.eq 0x7101dc6650
7101dc6554  sxth w9,w8
7101dc6558  cmp w9,#0x7cf
7101dc655c  b.gt 0x7101dc6650
7101dc6560  adrp x9,0x710532f000
7101dc6564  ldr x9,[x9, #0x730]
7101dc6568  ldr x9,[x9, #0x8]
7101dc656c  ldr x9,[x9, #0x1d8]
7101dc6570  lsl x10,x8,#0x30
7101dc6574  add x10,x9,x10, ASR #0x2f
7101dc6578  ldp x11,x9,[x9, #0x20]
7101dc657c  ldrh w10,[x10, #0x60]
7101dc6580  sub x9,x9,x11
7101dc6584  mov w11,#0xcccd
7101dc6588  movk w11,#0xcccc, LSL #16
7101dc658c  lsr x9,x9,#0x6
7101dc6590  mul w9,w9,w11
7101dc6594  cmp w9,w10
7101dc6598  b.ls 0x7101dc6650
7101dc659c  adrp x9,0x7105329000
7101dc65a0  ldr x9,[x9, #0xf98]
7101dc65a4  ldr x9,[x9]
7101dc65a8  ldr x9,[x9, #0x30]
7101dc65ac  sxth x8,w8
7101dc65b0  mov w10,#0x24
7101dc65b4  madd x8,x8,x10,x9
7101dc65b8  ldrb w9,[x8, #0x1]
7101dc65bc  adrp x8,0x710532f000
7101dc65c0  ldr x8,[x8, #0x8d0]
7101dc65c4  tbz w9,#0x3,0x7101dc6658
7101dc65c8  ldr x0,[x8, #0x8]
7101dc65cc  ldrb w8,[x0, #0x191]
7101dc65d0  cbnz w8,0x7101dc6744
7101dc65d4  mov x19,#0x23f5
7101dc65d8  movk x19,#0x57a5, LSL #16
7101dc65dc  movk x19,#0xf, LSL #32
7101dc65e0  mov w2,#0x4
7101dc65e4  mov x1,x19
7101dc65e8  bl 0x7103313f20
7101dc65ec  tbz w0,#0x0,0x7101dc6744
7101dc65f0  add x0,sp,#0x160
7101dc65f4  mov x1,x19
7101dc65f8  bl 0x71024076d0
7101dc65fc  ldr x8,[sp, #0x170]
7101dc6600  adrp x9,0x7104f73000
7101dc6604  add x9,x9,#0xd50
7101dc6608  str x9,[sp, #0x168]
7101dc660c  cbz x8,0x7101dc6770
7101dc6610  adrp x8,0x7106dd5000
7101dc6614  ldrb w8,[x8, #0x3a8]
7101dc6618  cmp w8,#0x1
7101dc661c  b.ne 0x7101dc6770
7101dc6620  adrp x9,0x7106dd5000
7101dc6624  ldr w8,[sp, #0x178]
7101dc6628  ldr w9,[x9, #0x3ac]
7101dc662c  cmp w8,w9
7101dc6630  b.ne 0x7101dc6770
7101dc6634  ldr x8,[sp, #0x170]
7101dc6638  ldr wzr,[x8, #0x38]!
7101dc663c  ldaxr w9,[x8]
7101dc6640  sub w9,w9,#0x1
7101dc6644  stlxr w10,w9,[x8]
7101dc6648  cbnz w10,0x7101dc663c
7101dc664c  b 0x7101dc6770
7101dc6650  adrp x8,0x710532f000
7101dc6654  ldr x8,[x8, #0x8d0]
7101dc6658  ldr x0,[x8, #0x8]
7101dc665c  ldrb w8,[x0, #0x191]
7101dc6660  cbnz w8,0x7101dc66e0
7101dc6664  mov x19,#0x46f2
7101dc6668  movk x19,#0xd635, LSL #16
7101dc666c  movk x19,#0xe, LSL #32
7101dc6670  mov w2,#0x4
7101dc6674  mov x1,x19
7101dc6678  bl 0x7103313f20
7101dc667c  tbz w0,#0x0,0x7101dc66e0
7101dc6680  add x0,sp,#0x120
7101dc6684  mov x1,x19
7101dc6688  bl 0x71024076d0
7101dc668c  ldr x8,[sp, #0x130]
7101dc6690  adrp x9,0x7104f73000
7101dc6694  add x9,x9,#0xd50
7101dc6698  str x9,[sp, #0x128]
7101dc669c  cbz x8,0x7101dc670c
7101dc66a0  adrp x8,0x7106dd5000
7101dc66a4  ldrb w8,[x8, #0x3a8]
7101dc66a8  cmp w8,#0x1
7101dc66ac  b.ne 0x7101dc670c
7101dc66b0  adrp x9,0x7106dd5000
7101dc66b4  ldr w8,[sp, #0x138]
7101dc66b8  ldr w9,[x9, #0x3ac]
7101dc66bc  cmp w8,w9
7101dc66c0  b.ne 0x7101dc670c
7101dc66c4  ldr x8,[sp, #0x130]
7101dc66c8  ldr wzr,[x8, #0x38]!
7101dc66cc  ldaxr w9,[x8]
7101dc66d0  sub w9,w9,#0x1
7101dc66d4  stlxr w10,w9,[x8]
7101dc66d8  cbnz w10,0x7101dc66cc
7101dc66dc  b 0x7101dc670c
7101dc66e0  mov x8,#0x650000000000
7101dc66e4  movk x8,#0x87, LSL #48
7101dc66e8  strb wzr,[sp, #0x140]
7101dc66ec  stp xzr,x8,[sp, #0x130]
7101dc66f0  mov x8,#-0x1
7101dc66f4  stp x8,xzr,[sp, #0x148]
7101dc66f8  adrp x8,0x7104f73000
7101dc66fc  add x8,x8,#0xd50
7101dc6700  str wzr,[sp, #0x120]
7101dc6704  str xzr,[sp, #0x158]
7101dc6708  str x8,[sp, #0x128]
7101dc670c  str xzr,[sp, #0x130]
7101dc6710  strb wzr,[sp, #0x140]
7101dc6714  add sp,sp,#0x230
7101dc6718  ldp d9,d8,[sp, #0x30]
7101dc671c  ldp d11,d10,[sp, #0x20]
7101dc6720  ldp d13,d12,[sp, #0x10]
7101dc6724  ldp x29,x30,[sp, #0x90]
7101dc6728  ldp x20,x19,[sp, #0x80]
7101dc672c  ldp x22,x21,[sp, #0x70]
7101dc6730  ldp x24,x23,[sp, #0x60]
7101dc6734  ldp x26,x25,[sp, #0x50]
7101dc6738  ldp x28,x27,[sp, #0x40]
7101dc673c  ldp d15,d14,[sp], #0xa0
7101dc6740  ret
7101dc6744  mov x8,#0x650000000000
7101dc6748  movk x8,#0x87, LSL #48
7101dc674c  strb wzr,[sp, #0x180]
7101dc6750  stp xzr,x8,[sp, #0x170]
7101dc6754  mov x8,#-0x1
7101dc6758  stp x8,xzr,[sp, #0x188]
7101dc675c  adrp x8,0x7104f73000
7101dc6760  add x8,x8,#0xd50
7101dc6764  str wzr,[sp, #0x160]
7101dc6768  str xzr,[sp, #0x198]
7101dc676c  str x8,[sp, #0x168]
7101dc6770  str xzr,[sp, #0x170]
7101dc6774  strb wzr,[sp, #0x180]
7101dc6778  b 0x7101dc6714
7101dc677c  ldr x0,[x8, #0x28]
7101dc6780  cbz x0,0x7101dc64a4
7101dc6784  ldr x8,[x0]
7101dc6788  ldr x8,[x8, #0x210]
7101dc678c  blr x8
7101dc6790  tbz w0,#0x0,0x7101dc64a4
7101dc6794  ldr x8,[x20, #0x40]
7101dc6798  ldr w8,[x8, #0x25c]
7101dc679c  cbz w8,0x7101dc67f4
7101dc67a0  ldrb w8,[x20, #0x298]
7101dc67a4  cbz w8,0x7101dc6714
7101dc67a8  ldr x8,[x20, #0x48]
7101dc67ac  ldr s0,[x8, #0x264]
7101dc67b0  ldr s1,[x8, #0x260]
7101dc67b4  fcmp s0,s1
7101dc67b8  b.ne 0x7101dc67c8
7101dc67bc  ldr w9,[x20, #0x28c]
7101dc67c0  cmp w9,#0x1
7101dc67c4  b.lt 0x7101dc6820
7101dc67c8  ldrb w8,[x20, #0x290]
7101dc67cc  cbz w8,0x7101dc67e0
7101dc67d0  mov x0,x20
7101dc67d4  mov w1,wzr
7101dc67d8  strb wzr,[x20, #0x290]
7101dc67dc  bl 0x7101dc7e00
7101dc67e0  ldr w8,[x20, #0x28c]
7101dc67e4  subs w8,w8,#0x1
7101dc67e8  b.lt 0x7101dc6714
7101dc67ec  str w8,[x20, #0x28c]
7101dc67f0  b 0x7101dc6714
7101dc67f4  ldr w8,[x20, #0x23c]
7101dc67f8  cmp w8,#0x11
7101dc67fc  b.gt 0x7101dc6714
7101dc6800  add w8,w8,#0x1
7101dc6804  cmp w8,#0x13
7101dc6808  str w8,[x20, #0x23c]
7101dc680c  b.cs 0x7101dc7418
7101dc6810  add x8,x20,w8, SXTW  #0x2
7101dc6814  orr w9,wzr,#0x3
7101dc6818  str w9,[x8, #0x1f0]
7101dc681c  b 0x7101dc6714
7101dc6820  ldr w19,[x8, #0x2a4]
7101dc6824  ldrb w8,[x20, #0x290]
7101dc6828  cbz w8,0x7101dc6860
7101dc682c  ldr w8,[x20, #0x294]
7101dc6830  add w8,w8,#0x1
7101dc6834  str w8,[x20, #0x294]
7101dc6838  adrp x9,0x7105329000
7101dc683c  ldr x9,[x9, #0xfa0]
7101dc6840  ldr x9,[x9]
7101dc6844  ldr w9,[x9, #0x1e8]
7101dc6848  cmp w8,w9
7101dc684c  b.ls 0x7101dc6860
7101dc6850  mov x0,x20
7101dc6854  mov w1,wzr
7101dc6858  strb wzr,[x20, #0x290]
7101dc685c  bl 0x7101dc7e00
7101dc6860  ldr w8,[x20, #0x288]
7101dc6864  cmp w19,w8
7101dc6868  b.eq 0x7101dc6714
7101dc686c  str w19,[x20, #0x288]
7101dc6870  tbnz w19,#0x1f,0x7101dc6894
7101dc6874  ldp x9,x10,[x20, #0x58]
7101dc6878  sub x10,x10,x9
7101dc687c  sxtw x8,w19
7101dc6880  asr x10,x10,#0x1
7101dc6884  cmp x10,x8
7101dc6888  b.ls 0x7101dc6894
7101dc688c  ldrh w21,[x9, x8, LSL #0x1]
7101dc6890  b 0x7101dc6898
7101dc6894  orr w21,wzr,#0xffff
7101dc6898  ldr x8,[x20, #0x48]
7101dc689c  ldrsw x9,[x8, #0x2c8]
7101dc68a0  tbnz w9,#0x1f,0x7101dc68c8
7101dc68a4  ldr w10,[x8, #0x2c0]
7101dc68a8  cmp w9,w10
7101dc68ac  b.ge 0x7101dc68c8
7101dc68b0  ldr x8,[x8, #0x168]
7101dc68b4  ldr x8,[x8, x9, LSL #0x3]
7101dc68b8  add x1,x8,#0x8
7101dc68bc  sub x0,x29,#0xe0
7101dc68c0  bl 0x7103776390
7101dc68c4  b 0x7101dc68d0
7101dc68c8  sub x0,x29,#0xe0
7101dc68cc  bl 0x7103776290
7101dc68d0  ldur x8,[x29, #-0xd8]
7101dc68d4  ldr x8,[x8, #0x18]
7101dc68d8  ldr x0,[x8]
7101dc68dc  bl 0x710379e030
7101dc68e0  add x19,x20,#0x20
7101dc68e4  adrp x1,0x710437c000
7101dc68e8  add x1,x1,#0x9fc
7101dc68ec  add x8,sp,#0xc0
7101dc68f0  mov x0,x19
7101dc68f4  mov v10.16B,v0.16B
7101dc68f8  mov v14.16B,v1.16B
7101dc68fc  mov v8.16B,v2.16B
7101dc6900  mov v12.16B,v3.16B
7101dc6904  bl 0x7103776640
7101dc6908  ldr x22,[sp, #0xc8]
7101dc690c  ldr x23,[x22, #0x18]
7101dc6910  ldr x0,[x23]
7101dc6914  bl 0x710379e030
7101dc6918  mov v11.16B,v0.16B
7101dc691c  mov v15.16B,v1.16B
7101dc6920  mov v9.16B,v2.16B
7101dc6924  mov v13.16B,v3.16B
7101dc6928  adrp x25,0x710523d000
7101dc692c  add x25,x25,#0x988
7101dc6930  stp x25,xzr,[sp, #0xc0]
7101dc6934  cbz x22,0x7101dc6958
7101dc6938  adrp x8,0x710523d000
7101dc693c  add x8,x8,#0x9a8
7101dc6940  stp x8,xzr,[x22, #0x10]
7101dc6944  cbz x23,0x7101dc6950
7101dc6948  mov x0,x23
7101dc694c  bl 0x710392eb40
7101dc6950  mov x0,x22
7101dc6954  bl 0x710392eb40
7101dc6958  ldur x22,[x29, #-0xd8]
7101dc695c  stp x25,xzr,[x29, #-0xe0]
7101dc6960  cbz x22,0x7101dc6984
7101dc6964  ldr x0,[x22, #0x18]
7101dc6968  adrp x8,0x710523d000
7101dc696c  add x8,x8,#0x9a8
7101dc6970  stp x8,xzr,[x22, #0x10]
7101dc6974  cbz x0,0x7101dc697c
7101dc6978  bl 0x710392eb40
7101dc697c  mov x0,x22
7101dc6980  bl 0x710392eb40
7101dc6984  orr w9,wzr,#0xffff
7101dc6988  sxth w8,w21
7101dc698c  cmp w21,w9
7101dc6990  cset w9,ne
7101dc6994  cmp w8,#0x7d0
7101dc6998  cset w8,lt
7101dc699c  and w24,w9,w8
7101dc69a0  adrp x23,0x710532f000
7101dc69a4  cmp w24,#0x1
7101dc69a8  b.ne 0x7101dc6ad0
7101dc69ac  ldr x8,[x23, #0x730]
7101dc69b0  ldr x8,[x8, #0x8]
7101dc69b4  ldr x11,[x8, #0x1d8]
7101dc69b8  lsl x9,x21,#0x30
7101dc69bc  add x9,x11,x9, ASR #0x2f
7101dc69c0  ldrh w10,[x9, #0x60]
7101dc69c4  ldp x9,x11,[x11, #0x20]
7101dc69c8  sub x11,x11,x9
7101dc69cc  orr x12,xzr,#-0x3333333333333334
7101dc69d0  movk x12,#0xcccd
7101dc69d4  asr x11,x11,#0x6
7101dc69d8  mul x11,x11,x12
7101dc69dc  cmp w11,w10
7101dc69e0  b.ls 0x7101dc6ad0
7101dc69e4  orr w12,wzr,#0xffff
7101dc69e8  cmp x21,x12
7101dc69ec  mov w12,#0xffffffff
7101dc69f0  csel x10,x12,x10,eq
7101dc69f4  mov w12,#0x140
7101dc69f8  madd x9,x10,x12,x9
7101dc69fc  adrp x12,0x7105182000
7101dc6a00  add x12,x12,#0xb08
7101dc6a04  cmp x11,x10
7101dc6a08  csel x9,x9,x12,hi
7101dc6a0c  ldrb w10,[x9, #0x5a]
7101dc6a10  cbz w10,0x7101dc6a28
7101dc6a14  ldrb w8,[x9, #0x92]
7101dc6a18  cbz w8,0x7101dc6ad0
7101dc6a1c  mov w8,#0x1
7101dc6a20  cbnz w24,0x7101dc6ad8
7101dc6a24  b 0x7101dc6b64
7101dc6a28  ldrb w10,[x9, #0x120]
7101dc6a2c  cbz w10,0x7101dc6ad0
7101dc6a30  ldr x0,[x8, #0x168]
7101dc6a34  ldr x22,[x9, #0x98]
7101dc6a38  mov x1,#0xfa78
7101dc6a3c  movk x1,#0xd5f7, LSL #16
7101dc6a40  movk x1,#0xf, LSL #32
7101dc6a44  mov x26,#-0x3f00000000000000
7101dc6a48  bl 0x71032631a0
7101dc6a4c  and x10,x22,#-0x100000000000000
7101dc6a50  and x9,x22,#0xffffffffff
7101dc6a54  and x8,x0,#0xffffffffff
7101dc6a58  cmp x10,x26
7101dc6a5c  b.ne 0x7101dc6a84
7101dc6a60  cbz x9,0x7101dc6a84
7101dc6a64  and x11,x0,#-0x100000000000000
7101dc6a68  cmp x11,x26
7101dc6a6c  b.ne 0x7101dc6a88
7101dc6a70  cbz x8,0x7101dc6a88
7101dc6a74  eor x8,x0,x22
7101dc6a78  tst x8,#0xffffffffff
7101dc6a7c  b.ne 0x7101dc6abc
7101dc6a80  b 0x7101dc6a1c
7101dc6a84  and x11,x0,#-0x100000000000000
7101dc6a88  cmp x10,x26
7101dc6a8c  cset w10,eq
7101dc6a90  cmp x9,#0x0
7101dc6a94  cset w9,ne
7101dc6a98  cmp x8,#0x0
7101dc6a9c  cset w8,ne
7101dc6aa0  cmp x11,x26
7101dc6aa4  and w9,w10,w9
7101dc6aa8  cset w10,eq
7101dc6aac  and w8,w8,w10
7101dc6ab0  eor w8,w8,w9
7101dc6ab4  cmp w8,#0x1
7101dc6ab8  b.ne 0x7101dc6a1c
7101dc6abc  mov x0,x22
7101dc6ac0  mov w1,wzr
7101dc6ac4  mov w2,wzr
7101dc6ac8  bl 0x7101797560
7101dc6acc  tbnz w0,#0x0,0x7101dc6a1c
7101dc6ad0  mov w8,wzr
7101dc6ad4  cbz w24,0x7101dc6b64
7101dc6ad8  ldr x9,[x23, #0x730]
7101dc6adc  ldr x10,[x9, #0x8]
7101dc6ae0  ldr x10,[x10, #0x1d8]
7101dc6ae4  lsl x11,x21,#0x30
7101dc6ae8  add x11,x10,x11, ASR #0x2f
7101dc6aec  ldrh w11,[x11, #0x60]
7101dc6af0  ldp x12,x10,[x10, #0x20]
7101dc6af4  sub x10,x10,x12
7101dc6af8  lsr x10,x10,#0x6
7101dc6afc  mov w27,#0xcccd
7101dc6b00  movk w27,#0xcccc, LSL #16
7101dc6b04  mul w10,w10,w27
7101dc6b08  cmp w10,w11
7101dc6b0c  b.ls 0x7101dc6b64
7101dc6b10  adrp x10,0x7105329000
7101dc6b14  ldr x10,[x10, #0xf98]
7101dc6b18  ldr x10,[x10]
7101dc6b1c  ldr x10,[x10, #0x30]
7101dc6b20  sxth x26,w21
7101dc6b24  mov w11,#0x24
7101dc6b28  madd x10,x26,x11,x10
7101dc6b2c  ldrb w10,[x10, #0x1]
7101dc6b30  and w10,w10,#0x8
7101dc6b34  and w8,w8,w10, LSR #0x3
7101dc6b38  tbz w8,#0x0,0x7101dc6b64
7101dc6b3c  mov w8,#0x1
7101dc6b40  strb w8,[x20, #0x290]
7101dc6b44  str wzr,[x20, #0x294]
7101dc6b48  ldr x28,[x9, #0x8]
7101dc6b4c  ldr x0,[x28, #0x1d8]
7101dc6b50  orr w8,wzr,#0xffff
7101dc6b54  cmp x21,x8
7101dc6b58  b.ne 0x7101dc6b78
7101dc6b5c  mov w8,#0xffffffff
7101dc6b60  b 0x7101dc6b80
7101dc6b64  mov x0,x20
7101dc6b68  mov w1,wzr
7101dc6b6c  strb wzr,[x20, #0x290]
7101dc6b70  bl 0x7101dc7e00
7101dc6b74  b 0x7101dc6714
7101dc6b78  add x8,x0,x26, LSL #0x1
7101dc6b7c  ldrh w8,[x8, #0x60]
7101dc6b80  ldp x9,x10,[x0, #0x20]
7101dc6b84  sub x10,x10,x9
7101dc6b88  orr x24,xzr,#-0x3333333333333334
7101dc6b8c  movk x24,#0xcccd
7101dc6b90  mov w12,#0x140
7101dc6b94  madd x9,x8,x12,x9
7101dc6b98  adrp x11,0x7105182000
7101dc6b9c  add x11,x11,#0xb08
7101dc6ba0  asr x10,x10,#0x6
7101dc6ba4  mul x10,x10,x24
7101dc6ba8  cmp x10,x8
7101dc6bac  csel x8,x9,x11,hi
7101dc6bb0  mov x1,x21
7101dc6bb4  str x8,[sp, #0x10]
7101dc6bb8  bl 0x71032a9470
7101dc6bbc  and x1,x0,#0xffffffffff
7101dc6bc0  add x0,sp,#0x118
7101dc6bc4  bl 0x7102499b60
7101dc6bc8  cmp w21,#0x7cf
7101dc6bcc  b.hi 0x7101dc6c58
7101dc6bd0  adrp x8,0x7105314000
7101dc6bd4  ldr x8,[x8, #0x510]
7101dc6bd8  ldr x8,[x8]
7101dc6bdc  ldr x8,[x8, #0x268]
7101dc6be0  ldr x8,[x8]
7101dc6be4  ldr x8,[x8]
7101dc6be8  add x8,x8,x26, LSL #0x2
7101dc6bec  mov w9,#0x65a0
7101dc6bf0  ldr w22,[x8, x9, LSL #0x0]
7101dc6bf4  cbz w22,0x7101dc6c58
7101dc6bf8  adrp x1,0x710437c000
7101dc6bfc  add x1,x1,#0x9fc
7101dc6c00  sub x8,x29,#0xe0
7101dc6c04  mov x0,x19
7101dc6c08  bl 0x7103776640
7101dc6c0c  adrp x1,0x71042e7000
7101dc6c10  add x1,x1,#0x6cb
7101dc6c14  add x8,sp,#0xc0
7101dc6c18  sub x0,x29,#0xe0
7101dc6c1c  bl 0x7103776910
7101dc6c20  adrp x1,0x71043be000
7101dc6c24  add x1,x1,#0xaa4
7101dc6c28  add x0,sp,#0xc0
7101dc6c2c  mov w2,#0x1
7101dc6c30  mov w3,w22
7101dc6c34  bl 0x710377a280
7101dc6c38  ldr x0,[sp, #0xc8]
7101dc6c3c  adrp x22,0x710523d000
7101dc6c40  add x22,x22,#0x9a8
7101dc6c44  stp x22,xzr,[sp, #0xc0]
7101dc6c48  cbz x0,0x7101dc6c50
7101dc6c4c  bl 0x710392eb40
7101dc6c50  mov w1,#0x2
7101dc6c54  b 0x7101dc6cac
7101dc6c58  adrp x1,0x710437c000
7101dc6c5c  add x1,x1,#0x9fc
7101dc6c60  sub x8,x29,#0xe0
7101dc6c64  mov x0,x19
7101dc6c68  bl 0x7103776640
7101dc6c6c  adrp x1,0x71042e7000
7101dc6c70  add x1,x1,#0x6cb
7101dc6c74  add x8,sp,#0xc0
7101dc6c78  sub x0,x29,#0xe0
7101dc6c7c  bl 0x7103776910
7101dc6c80  adrp x1,0x71043be000
7101dc6c84  add x1,x1,#0xace
7101dc6c88  add x0,sp,#0xc0
7101dc6c8c  bl 0x710377a120
7101dc6c90  ldr x0,[sp, #0xc8]
7101dc6c94  adrp x22,0x710523d000
7101dc6c98  add x22,x22,#0x9a8
7101dc6c9c  stp x22,xzr,[sp, #0xc0]
7101dc6ca0  cbz x0,0x7101dc6ca8
7101dc6ca4  bl 0x710392eb40
7101dc6ca8  mov w1,#0x1
7101dc6cac  mov x0,x20
7101dc6cb0  bl 0x7101dc7e00
7101dc6cb4  ldur x20,[x29, #-0xd8]
7101dc6cb8  stp x25,xzr,[x29, #-0xe0]
7101dc6cbc  cbz x20,0x7101dc6cd8
7101dc6cc0  ldr x0,[x20, #0x18]
7101dc6cc4  stp x22,xzr,[x20, #0x10]
7101dc6cc8  cbz x0,0x7101dc6cd0
7101dc6ccc  bl 0x710392eb40
7101dc6cd0  mov x0,x20
7101dc6cd4  bl 0x710392eb40
7101dc6cd8  adrp x1,0x710437c000
7101dc6cdc  add x1,x1,#0x9fc
7101dc6ce0  add x8,sp,#0x108
7101dc6ce4  mov x0,x19
7101dc6ce8  bl 0x7103776640
7101dc6cec  ldr x8,[x28, #0x1d8]
7101dc6cf0  orr w9,wzr,#0xffff
7101dc6cf4  cmp x21,x9
7101dc6cf8  b.ne 0x7101dc6d04
7101dc6cfc  mov w9,#0xffffffff
7101dc6d00  b 0x7101dc6d0c
7101dc6d04  add x9,x8,x26, LSL #0x1
7101dc6d08  ldrh w9,[x9, #0x60]
7101dc6d0c  ldp x10,x8,[x8, #0x20]
7101dc6d10  sub x8,x8,x10
7101dc6d14  lsr x8,x8,#0x6
7101dc6d18  mul w8,w8,w27
7101dc6d1c  cmp w9,w8
7101dc6d20  b.cs 0x7101dc6d3c
7101dc6d24  mov w8,#0x140
7101dc6d28  umaddl x8,w9,w8,x10
7101dc6d2c  ldrb w8,[x8, #0x5e]
7101dc6d30  cmp w8,#0x2
7101dc6d34  cset w28,eq
7101dc6d38  b 0x7101dc6d40
7101dc6d3c  mov w28,wzr
7101dc6d40  ldr x8,[x23, #0x730]
7101dc6d44  ldr x8,[x8, #0x8]
7101dc6d48  ldr x10,[x8, #0x1d8]
7101dc6d4c  add x8,x10,x26, LSL #0x1
7101dc6d50  ldrh w9,[x8, #0x60]
7101dc6d54  mov w20,#0x301
7101dc6d58  movk w20,#0x2, LSL #16
7101dc6d5c  ldp x8,x10,[x10, #0x20]
7101dc6d60  str s8,[sp, #0x30]
7101dc6d64  sub x10,x10,x8
7101dc6d68  asr x10,x10,#0x6
7101dc6d6c  mul x10,x10,x24
7101dc6d70  cmp w10,w9
7101dc6d74  b.ls 0x7101dc6dd0
7101dc6d78  orr w11,wzr,#0xffff
7101dc6d7c  cmp x21,x11
7101dc6d80  mov w11,#0xffffffff
7101dc6d84  csel x9,x11,x9,eq
7101dc6d88  mov w11,#0x140
7101dc6d8c  madd x8,x9,x11,x8
7101dc6d90  cmp x10,x9
7101dc6d94  adrp x9,0x7105182000
7101dc6d98  add x9,x9,#0xb08
7101dc6d9c  csel x8,x8,x9,hi
7101dc6da0  ldrb w9,[x8, #0x5e]
7101dc6da4  cbz w9,0x7101dc6db0
7101dc6da8  mov w8,#0x4
7101dc6dac  b 0x7101dc6dd4
7101dc6db0  ldrb w8,[x8, #0x6c]
7101dc6db4  sub w8,w8,#0x1
7101dc6db8  cmp w8,#0x2
7101dc6dbc  b.hi 0x7101dc6dd0
7101dc6dc0  and x8,x8,#0xff
7101dc6dc4  lsl x8,x8,#0x3
7101dc6dc8  lsr w8,w20,w8
7101dc6dcc  b 0x7101dc6dd4
7101dc6dd0  mov w8,wzr
7101dc6dd4  cmp w28,#0x0
7101dc6dd8  csel w1,wzr,w8,ne
7101dc6ddc  sub x0,x29,#0xe0
7101dc6de0  mov w2,wzr
7101dc6de4  fsub s8,s14,s10
7101dc6de8  fmov s14,0x3f000000
7101dc6dec  fsub s15,s15,s11
7101dc6df0  bl 0x710339dde0
7101dc6df4  ldr x9,[sp, #0x118]
7101dc6df8  ldrb w8,[x9, #0x8]
7101dc6dfc  str s9,[sp, #0x20]
7101dc6e00  cbz w8,0x7101dc6e58
7101dc6e04  ldrb w8,[x9, #0xec]
7101dc6e08  cbz w8,0x7101dc6e14
7101dc6e0c  ldp x8,x9,[x9, #0x70]
7101dc6e10  b 0x7101dc6e20
7101dc6e14  ldp x8,x9,[x9, #0x70]
7101dc6e18  cmp x9,x8
7101dc6e1c  b.eq 0x7101dc6e4c
7101dc6e20  sub x9,x9,x8
7101dc6e24  lsr x9,x9,#0x3
7101dc6e28  cbz w9,0x7101dc6e4c
7101dc6e2c  mov w10,wzr
7101dc6e30  ldr x11,[x8, w10, UXTW #0x3]
7101dc6e34  ldrb w12,[x11, #0x10]
7101dc6e38  cmp w12,#0x1
7101dc6e3c  b.eq 0x7101dc6e54
7101dc6e40  add w10,w10,#0x1
7101dc6e44  cmp w10,w9
7101dc6e48  b.cc 0x7101dc6e30
7101dc6e4c  mov w8,wzr
7101dc6e50  b 0x7101dc6e58
7101dc6e54  ldrb w8,[x11, #0x48]
7101dc6e58  ldr s0,[sp, #0x30]
7101dc6e5c  fsub s12,s12,s0
7101dc6e60  ldr s0,[sp, #0x20]
7101dc6e64  sub w8,w8,#0x1
7101dc6e68  and x9,x8,#0xff
7101dc6e6c  lsl x9,x9,#0x3
7101dc6e70  lsr w9,w20,w9
7101dc6e74  cmp w8,#0x3
7101dc6e78  csel w1,w9,wzr,cc
7101dc6e7c  add x0,sp,#0xc0
7101dc6e80  mov w2,wzr
7101dc6e84  fmul s9,s8,s14
7101dc6e88  adrp x21,0x7104473000
7101dc6e8c  fmul s8,s15,s14
7101dc6e90  fsub s15,s13,s0
7101dc6e94  add x20,sp,#0xc0
7101dc6e98  bl 0x710339dde0
7101dc6e9c  adrp x1,0x7104270000
7101dc6ea0  add x1,x1,#0x424
7101dc6ea4  add x8,sp,#0xb0
7101dc6ea8  add x0,sp,#0x108
7101dc6eac  bl 0x7103776640
7101dc6eb0  add x1,x20,#0x8
7101dc6eb4  ldr x20,[sp, #0xb8]
7101dc6eb8  fmov s0,0x3f800000
7101dc6ebc  mov x0,x20
7101dc6ec0  bl 0x7103778300
7101dc6ec4  adrp x1,0x71042b2000
7101dc6ec8  add x1,x1,#0x92e
7101dc6ecc  add x8,sp,#0xa0
7101dc6ed0  add x0,sp,#0xb0
7101dc6ed4  bl 0x7103776910
7101dc6ed8  ldr x22,[sp, #0xa8]
7101dc6edc  ldr x8,[x22]
7101dc6ee0  cbz x8,0x7101dc6ef0
7101dc6ee4  ldrb w9,[x8, #0x58]
7101dc6ee8  orr w9,w9,#0x1
7101dc6eec  strb w9,[x8, #0x58]
7101dc6ef0  ldr x8,[sp, #0x118]
7101dc6ef4  fmul s13,s12,s14
7101dc6ef8  ldr s12,[x21, #0x208]
7101dc6efc  adrp x1,0x7104422000
7101dc6f00  add x1,x1,#0x806
7101dc6f04  add x0,sp,#0xa0
7101dc6f08  mov w2,#0x1
7101dc6f0c  adrp x27,0x7104472000
7101dc6f10  fadd s11,s11,s8
7101dc6f14  fmul s15,s15,s14
7101dc6f18  mov w26,#0x9dc5
7101dc6f1c  movk w26,#0x811c, LSL #16
7101dc6f20  ldr w3,[x8, #0x150]
7101dc6f24  fadd s9,s10,s9
7101dc6f28  bl 0x710377a280
7101dc6f2c  ldr x21,[sp, #0x110]
7101dc6f30  fmov s0,0x3f800000
7101dc6f34  sub x8,x29,#0xe0
7101dc6f38  add x1,x8,#0x8
7101dc6f3c  mov x0,x21
7101dc6f40  bl 0x7103778300
7101dc6f44  adrp x1,0x71042a3000
7101dc6f48  add x1,x1,#0x4dc
7101dc6f4c  add x8,sp,#0x90
7101dc6f50  add x0,sp,#0x108
7101dc6f54  bl 0x7103776640
7101dc6f58  ldr x23,[sp, #0x98]
7101dc6f5c  ldr x8,[x23, #0x8]
7101dc6f60  cbz w28,0x7101dc6f8c
7101dc6f64  mov v14.16B,v9.16B
7101dc6f68  ldr s8,[sp, #0x30]
7101dc6f6c  ldr s9,[sp, #0x20]
7101dc6f70  cbz x8,0x7101dc71b0
7101dc6f74  ldr x8,[x8, #0x18]
7101dc6f78  cbz x8,0x7101dc71b0
7101dc6f7c  ldrb w9,[x8, #0x58]
7101dc6f80  and w9,w9,#0xfe
7101dc6f84  strb w9,[x8, #0x58]
7101dc6f88  b 0x7101dc71b0
7101dc6f8c  cbz x8,0x7101dc6fa4
7101dc6f90  ldr x8,[x8, #0x18]
7101dc6f94  cbz x8,0x7101dc6fa4
7101dc6f98  ldrb w9,[x8, #0x58]
7101dc6f9c  orr w9,w9,#0x1
7101dc6fa0  strb w9,[x8, #0x58]
7101dc6fa4  ldr x8,[sp, #0x10]
7101dc6fa8  ldrb w8,[x8, #0x68]
7101dc6fac  cmp w8,#0x3
7101dc6fb0  b.hi 0x7101dc7020
7101dc6fb4  adrp x9,0x71044fb000
7101dc6fb8  add x9,x9,#0x560
7101dc6fbc  ldrsw x8,[x9, x8, LSL #0x2]
7101dc6fc0  add x8,x8,x9
7101dc6fc4  br x8
7101dc6fc8  mov x10,#0x6c63
7101dc6fcc  movk x10,#0x7361, LSL #16
7101dc6fd0  mov v14.16B,v9.16B
7101dc6fd4  mov x8,#0xa00000000
7101dc6fd8  add x9,sp,#0x48
7101dc6fdc  movk x10,#0x5f73, LSL #32
7101dc6fe0  movk x10,#0x6f6e, LSL #48
7101dc6fe4  stp x8,x10,[sp, #0x48]
7101dc6fe8  add x24,x9,#0x8
7101dc6fec  add x8,x9,#0x9
7101dc6ff0  mov w9,#0x656e
7101dc6ff4  strh w9,[sp, #0x58]
7101dc6ff8  mov w10,#0x63
7101dc6ffc  mov w9,#0x89
7101dc7000  mov w11,w26
7101dc7004  strb wzr,[sp, #0x5a]
7101dc7008  mul w11,w11,w9
7101dc700c  and w10,w10,#0xff
7101dc7010  eor w11,w11,w10
7101dc7014  ldrb w10,[x8], #0x1
7101dc7018  cbnz w10,0x7101dc7008
7101dc701c  b 0x7101dc717c
7101dc7020  mov x10,#0x6c63
7101dc7024  movk x10,#0x7361, LSL #16
7101dc7028  mov v14.16B,v9.16B
7101dc702c  mov x8,#0xa00000000
7101dc7030  add x9,sp,#0x48
7101dc7034  movk x10,#0x5f73, LSL #32
7101dc7038  movk x10,#0x6f6e, LSL #48
7101dc703c  stp x8,x10,[sp, #0x48]
7101dc7040  add x24,x9,#0x8
7101dc7044  add x8,x9,#0x9
7101dc7048  mov w9,#0x656e
7101dc704c  strh w9,[sp, #0x58]
7101dc7050  mov w10,#0x63
7101dc7054  mov w9,#0x89
7101dc7058  mov w11,w26
7101dc705c  strb wzr,[sp, #0x5a]
7101dc7060  mul w11,w11,w9
7101dc7064  and w10,w10,#0xff
7101dc7068  eor w11,w11,w10
7101dc706c  ldrb w10,[x8], #0x1
7101dc7070  cbnz w10,0x7101dc7060
7101dc7074  b 0x7101dc717c
7101dc7078  mov x10,#0x6c63
7101dc707c  movk x10,#0x7361, LSL #16
7101dc7080  mov v14.16B,v9.16B
7101dc7084  mov x8,#0xa00000000
7101dc7088  add x9,sp,#0x48
7101dc708c  movk x10,#0x5f73, LSL #32
7101dc7090  movk x10,#0x6f68, LSL #48
7101dc7094  stp x8,x10,[sp, #0x48]
7101dc7098  add x24,x9,#0x8
7101dc709c  add x8,x9,#0x9
7101dc70a0  mov w9,#0x6570
7101dc70a4  strh w9,[sp, #0x58]
7101dc70a8  mov w10,#0x63
7101dc70ac  mov w9,#0x89
7101dc70b0  mov w11,w26
7101dc70b4  strb wzr,[sp, #0x5a]
7101dc70b8  mul w11,w11,w9
7101dc70bc  and w10,w10,#0xff
7101dc70c0  eor w11,w11,w10
7101dc70c4  ldrb w10,[x8], #0x1
7101dc70c8  cbnz w10,0x7101dc70b8
7101dc70cc  b 0x7101dc717c
7101dc70d0  mov x10,#0x6c63
7101dc70d4  movk x10,#0x7361, LSL #16
7101dc70d8  mov v14.16B,v9.16B
7101dc70dc  mov x8,#0x900000000
7101dc70e0  add x9,sp,#0x48
7101dc70e4  movk x10,#0x5f73, LSL #32
7101dc70e8  movk x10,#0x6361, LSL #48
7101dc70ec  stp x8,x10,[sp, #0x48]
7101dc70f0  add x24,x9,#0x8
7101dc70f4  add x8,x9,#0x9
7101dc70f8  mov w9,#0x65
7101dc70fc  strh w9,[sp, #0x58]
7101dc7100  mov w10,#0x63
7101dc7104  mov w9,#0x89
7101dc7108  mov w11,w26
7101dc710c  mul w11,w11,w9
7101dc7110  and w10,w10,#0xff
7101dc7114  eor w11,w11,w10
7101dc7118  ldrb w10,[x8], #0x1
7101dc711c  cbnz w10,0x7101dc710c
7101dc7120  b 0x7101dc717c
7101dc7124  mov x10,#0x6c63
7101dc7128  movk x10,#0x7361, LSL #16
7101dc712c  mov v14.16B,v9.16B
7101dc7130  orr x8,xzr,#0xc00000000
7101dc7134  add x9,sp,#0x48
7101dc7138  movk x10,#0x5f73, LSL #32
7101dc713c  movk x10,#0x656c, LSL #48
7101dc7140  stp x8,x10,[sp, #0x48]
7101dc7144  add x24,x9,#0x8
7101dc7148  add x8,x9,#0x9
7101dc714c  mov w9,#0x6567
7101dc7150  movk w9,#0x646e, LSL #16
7101dc7154  str w9,[sp, #0x58]
7101dc7158  mov w10,#0x63
7101dc715c  mov w9,#0x89
7101dc7160  mov w11,w26
7101dc7164  strb wzr,[sp, #0x5c]
7101dc7168  mul w11,w11,w9
7101dc716c  and w10,w10,#0xff
7101dc7170  eor w11,w11,w10
7101dc7174  ldrb w10,[x8], #0x1
7101dc7178  cbnz w10,0x7101dc7168
7101dc717c  fmov s10,0x3f800000
7101dc7180  ldr s8,[sp, #0x30]
7101dc7184  ldr s9,[sp, #0x20]
7101dc7188  adrp x1,0x710438b000
7101dc718c  add x1,x1,#0x28f
7101dc7190  mov x0,x23
7101dc7194  mov v0.16B,v10.16B
7101dc7198  str w11,[sp, #0x48]
7101dc719c  bl 0x7103778300
7101dc71a0  mov v0.16B,v10.16B
7101dc71a4  mov x0,x23
7101dc71a8  mov x1,x24
7101dc71ac  bl 0x7103778300
7101dc71b0  fadd s0,s14,s12
7101dc71b4  fadd s10,s8,s13
7101dc71b8  ldr s8,[x27, #0x4c4]
7101dc71bc  stp x25,xzr,[sp, #0x90]
7101dc71c0  fadd s9,s9,s15
7101dc71c4  str q0,[sp, #0x10]
7101dc71c8  fadd s0,s11,s12
7101dc71cc  str q0,[sp, #0x20]
7101dc71d0  cbz x23,0x7101dc71f4
7101dc71d4  ldr x0,[x23, #0x18]
7101dc71d8  adrp x8,0x710523d000
7101dc71dc  add x8,x8,#0x9a8
7101dc71e0  stp x8,xzr,[x23, #0x10]
7101dc71e4  cbz x0,0x7101dc71ec
7101dc71e8  bl 0x710392eb40
7101dc71ec  mov x0,x23
7101dc71f0  bl 0x710392eb40
7101dc71f4  fsub s0,s8,s10
7101dc71f8  adrp x23,0x710523d000
7101dc71fc  add x23,x23,#0x9a8
7101dc7200  str q0,[sp, #0x30]
7101dc7204  fsub s0,s8,s9
7101dc7208  stp x23,xzr,[sp, #0xa0]
7101dc720c  str q0,[sp]
7101dc7210  cbz x22,0x7101dc721c
7101dc7214  mov x0,x22
7101dc7218  bl 0x710392eb40
7101dc721c  movi v0.2D,#0x0
7101dc7220  ldr q2,[sp, #0x10]
7101dc7224  mov v1.16B,v0.16B
7101dc7228  stp x25,xzr,[sp, #0xb0]
7101dc722c  mov v1.S[0x0],v2.S[0x0]
7101dc7230  mov v2.16B,v0.16B
7101dc7234  ldr q0,[sp, #0x20]
7101dc7238  mov v2.S[0x0],v0.S[0x0]
7101dc723c  cbz x20,0x7101dc7260
7101dc7240  stp q2,q1,[sp, #0x10]
7101dc7244  ldr x0,[x20, #0x18]
7101dc7248  stp x23,xzr,[x20, #0x10]
7101dc724c  cbz x0,0x7101dc7254
7101dc7250  bl 0x710392eb40
7101dc7254  mov x0,x20
7101dc7258  bl 0x710392eb40
7101dc725c  ldp q2,q1,[sp, #0x10]
7101dc7260  ldr q0,[sp, #0x30]
7101dc7264  mov v1.S[0x1],v0.S[0x0]
7101dc7268  ldr q0,[sp]
7101dc726c  mov v2.S[0x1],v0.S[0x0]
7101dc7270  stp x25,xzr,[sp, #0x108]
7101dc7274  cbz x21,0x7101dc7298
7101dc7278  stp q2,q1,[sp, #0x10]
7101dc727c  ldr x0,[x21, #0x18]
7101dc7280  stp x23,xzr,[x21, #0x10]
7101dc7284  cbz x0,0x7101dc728c
7101dc7288  bl 0x710392eb40
7101dc728c  mov x0,x21
7101dc7290  bl 0x710392eb40
7101dc7294  ldp q2,q1,[sp, #0x10]
7101dc7298  fsub v0.4S,v1.4S,v2.4S
7101dc729c  adrp x1,0x710437c000
7101dc72a0  add x1,x1,#0x9fc
7101dc72a4  add x8,sp,#0xc0
7101dc72a8  mov x0,x19
7101dc72ac  str q0,[sp, #0x20]
7101dc72b0  bl 0x7103776640
7101dc72b4  adrp x11,0x7104473000
7101dc72b8  ldr s0,[x11, #0xa60]
7101dc72bc  ldr q1,[sp, #0x30]
7101dc72c0  fcmp s1,s0
7101dc72c4  adrp x9,0x710434a000
7101dc72c8  add x9,x9,#0x839
7101dc72cc  adrp x10,0x71042d6000
7101dc72d0  add x10,x10,#0x781
7101dc72d4  mov x8,xzr
7101dc72d8  stur xzr,[x29, #-0xe0]
7101dc72dc  csel x9,x10,x9,hi
7101dc72e0  sub x10,x29,#0xe0
7101dc72e4  b 0x7101dc72f0
7101dc72e8  add x8,x8,#0x2
7101dc72ec  strb w11,[x12, #0x9]
7101dc72f0  add x11,x9,x8
7101dc72f4  ldrb w13,[x11]
7101dc72f8  cbz w13,0x7101dc7324
7101dc72fc  add w14,w8,#0x1
7101dc7300  add x12,x10,x8
7101dc7304  cmp w14,#0x3f
7101dc7308  strb w13,[x12, #0x8]
7101dc730c  b.cs 0x7101dc7320
7101dc7310  ldrb w11,[x11, #0x1]
7101dc7314  cbnz w11,0x7101dc72e8
7101dc7318  add x8,x8,#0x1
7101dc731c  b 0x7101dc7324
7101dc7320  add w8,w8,#0x1
7101dc7324  sub x10,x29,#0xe0
7101dc7328  add x1,x10,#0x8
7101dc732c  strb wzr,[x1, w8, UXTW ]
7101dc7330  ldurb w9,[x29, #-0xd8]
7101dc7334  stur w8,[x29, #-0xdc]
7101dc7338  cbz w9,0x7101dc7358
7101dc733c  add x8,x10,#0x9
7101dc7340  mov w10,#0x89
7101dc7344  mul w11,w26,w10
7101dc7348  and w9,w9,#0xff
7101dc734c  eor w26,w11,w9
7101dc7350  ldrb w9,[x8], #0x1
7101dc7354  cbnz w9,0x7101dc7344
7101dc7358  ldr x20,[sp, #0xc8]
7101dc735c  fmov s0,0x3f800000
7101dc7360  mov x0,x20
7101dc7364  stur w26,[x29, #-0xe0]
7101dc7368  bl 0x7103778300
7101dc736c  stp x25,xzr,[sp, #0xc0]
7101dc7370  cbz x20,0x7101dc738c
7101dc7374  ldr x0,[x20, #0x18]
7101dc7378  stp x23,xzr,[x20, #0x10]
7101dc737c  cbz x0,0x7101dc7384
7101dc7380  bl 0x710392eb40
7101dc7384  mov x0,x20
7101dc7388  bl 0x710392eb40
7101dc738c  adrp x1,0x710437c000
7101dc7390  add x1,x1,#0x9fc
7101dc7394  sub x8,x29,#0xe0
7101dc7398  mov x0,x19
7101dc739c  bl 0x7103776640
7101dc73a0  ldur x19,[x29, #-0xd8]
7101dc73a4  ldr x8,[x19, #0x18]
7101dc73a8  ldr x8,[x8]
7101dc73ac  cbz x8,0x7101dc73dc
7101dc73b0  movi v0.2D,#0x0
7101dc73b4  add x9,x8,#0x30
7101dc73b8  ldr q1,[sp, #0x20]
7101dc73bc  ld1 {v0.S}[0],[x9]
7101dc73c0  add x9,x8,#0x34
7101dc73c4  ld1 {v0.S}[1],[x9]
7101dc73c8  ldrb w9,[x8, #0x58]
7101dc73cc  orr w9,w9,#0x10
7101dc73d0  strb w9,[x8, #0x58]
7101dc73d4  fadd v0.4S,v1.4S,v0.4S
7101dc73d8  str d0,[x8, #0x30]
7101dc73dc  stp x25,xzr,[x29, #-0xe0]
7101dc73e0  cbz x19,0x7101dc73fc
7101dc73e4  ldr x0,[x19, #0x18]
7101dc73e8  stp x23,xzr,[x19, #0x10]
7101dc73ec  cbz x0,0x7101dc73f4
7101dc73f0  bl 0x710392eb40
7101dc73f4  mov x0,x19
7101dc73f8  bl 0x710392eb40
7101dc73fc  ldr x0,[sp, #0x118]
7101dc7400  str xzr,[sp, #0x118]
7101dc7404  cbz x0,0x7101dc6714
7101dc7408  ldr x8,[x0]
7101dc740c  ldr x8,[x8, #0x8]
7101dc7410  blr x8
7101dc7414  b 0x7101dc6714
7101dc7418  bl 0x71039c2650
