// addr:      71030a5e40
// offset:    0x30a5e40
// name:      FUN_71030a5e40
// mangled:   
// size:      15444

71030a5e40  str d10,[sp, #-0x80]!
71030a5e44  stp d9,d8,[sp, #0x10]
71030a5e48  stp x28,x27,[sp, #0x20]
71030a5e4c  stp x26,x25,[sp, #0x30]
71030a5e50  stp x24,x23,[sp, #0x40]
71030a5e54  stp x22,x21,[sp, #0x50]
71030a5e58  stp x20,x19,[sp, #0x60]
71030a5e5c  stp x29,x30,[sp, #0x70]
71030a5e60  add x29,sp,#0x70
71030a5e64  sub sp,sp,#0x220
71030a5e68  adrp x8,0x7104468000
71030a5e6c  ldr q0,[x8, #0xca0]
71030a5e70  adrp x8,0x710446a000
71030a5e74  str q0,[sp, #0x30]
71030a5e78  str q0,[sp, #0x80]
71030a5e7c  ldr q0,[x8, #0x360]
71030a5e80  adrp x8,0x7104465000
71030a5e84  str xzr,[sp, #0x78]
71030a5e88  str q0,[sp, #0x20]
71030a5e8c  str q0,[sp, #0x90]
71030a5e90  ldr q0,[x8, #0x6b0]
71030a5e94  adrp x8,0x710446a000
71030a5e98  mov x19,x0
71030a5e9c  str q0,[sp, #0x10]
71030a5ea0  str q0,[sp, #0xa0]
71030a5ea4  ldr q0,[x8, #0x350]
71030a5ea8  mov w3,#0x1
71030a5eac  str q0,[sp, #0xb0]
71030a5eb0  ldr s0,[x0, #0x760]
71030a5eb4  fcvtzs w8,s0
71030a5eb8  ldr s0,[x0, #0x764]
71030a5ebc  fcvtzs w9,s0
71030a5ec0  ldr s0,[x0, #0x768]
71030a5ec4  str w8,[x0, #0x1140]
71030a5ec8  str w9,[x0, #0x1144]
71030a5ecc  fcvtzs w8,s0
71030a5ed0  ldr s0,[x0, #0x76c]
71030a5ed4  str w8,[x0, #0x1148]
71030a5ed8  fcvtzs w8,s0
71030a5edc  ldr s0,[x0, #0x740]
71030a5ee0  str w8,[x0, #0x114c]
71030a5ee4  ldr x8,[x0, #0x340]
71030a5ee8  ldp w9,w10,[x8]
71030a5eec  ldr s1,[x0, #0x744]
71030a5ef0  str w10,[x8]
71030a5ef4  eor w9,w9,w9, LSL #0xb
71030a5ef8  fsub s1,s1,s0
71030a5efc  ldp w10,w11,[x8, #0x8]
71030a5f00  eor w9,w9,w9, LSR #0x8
71030a5f04  eor w9,w9,w11
71030a5f08  eor w9,w9,w11, LSR #0x13
71030a5f0c  stp w10,w11,[x8, #0x4]
71030a5f10  ucvtf s2,w9
71030a5f14  str w9,[x8, #0xc]
71030a5f18  adrp x8,0x7104473000
71030a5f1c  ldr s8,[x8, #0x710]
71030a5f20  ldr x8,[x0, #0x340]
71030a5f24  fmul s1,s1,s2
71030a5f28  fmul s2,s1,s8
71030a5f2c  ldr s1,[x0, #0x758]
71030a5f30  fadd s0,s0,s2
71030a5f34  str s0,[x0, #0x1158]
71030a5f38  ldr s0,[x0, #0x754]
71030a5f3c  ldp w9,w10,[x8]
71030a5f40  eor w9,w9,w9, LSL #0xb
71030a5f44  str w10,[x8]
71030a5f48  ldp w10,w11,[x8, #0x8]
71030a5f4c  eor w9,w9,w9, LSR #0x8
71030a5f50  eor w9,w9,w11
71030a5f54  eor w9,w9,w11, LSR #0x13
71030a5f58  ucvtf s2,w9
71030a5f5c  fsub s1,s1,s0
71030a5f60  fmul s1,s1,s2
71030a5f64  fmul s2,s1,s8
71030a5f68  fadd s0,s0,s2
71030a5f6c  stp w10,w11,[x8, #0x4]
71030a5f70  str w9,[x8, #0xc]
71030a5f74  ldr x8,[x0, #0x340]
71030a5f78  ldr s1,[x0, #0x758]
71030a5f7c  str s0,[x0, #0x1160]
71030a5f80  ldr s0,[x0, #0x754]
71030a5f84  ldp w9,w10,[x8]
71030a5f88  str w10,[x8]
71030a5f8c  ldp w10,w11,[x8, #0x8]
71030a5f90  eor w9,w9,w9, LSL #0xb
71030a5f94  eor w9,w9,w9, LSR #0x8
71030a5f98  eor w9,w9,w11
71030a5f9c  eor w9,w9,w11, LSR #0x13
71030a5fa0  ucvtf s2,w9
71030a5fa4  fsub s1,s1,s0
71030a5fa8  fmul s1,s1,s2
71030a5fac  fmul s2,s1,s8
71030a5fb0  fadd s0,s0,s2
71030a5fb4  stp w10,w11,[x8, #0x4]
71030a5fb8  str w9,[x8, #0xc]
71030a5fbc  ldr x8,[x0, #0x308]
71030a5fc0  str s0,[x0, #0x1168]
71030a5fc4  adrp x9,0x710532a000
71030a5fc8  ldr x9,[x9, #0x9d8]
71030a5fcc  ldr x9,[x9]
71030a5fd0  ldr x1,[x9, #0x1c0]
71030a5fd4  ldr x2,[x8, #0x8]
71030a5fd8  add x0,sp,#0xd0
71030a5fdc  bl 0x710315a0a0
71030a5fe0  ldr x8,[sp, #0xd0]
71030a5fe4  str xzr,[sp, #0xd0]
71030a5fe8  ldr x20,[x19, #0x1210]
71030a5fec  str x8,[x19, #0x1210]
71030a5ff0  cbz x20,0x71030a6018
71030a5ff4  mov x0,x20
71030a5ff8  bl 0x71025e8370
71030a5ffc  mov x0,x20
71030a6000  bl 0x710392eb40
71030a6004  str xzr,[sp, #0xd0]
71030a6008  ldr x8,[x19, #0x1210]
71030a600c  ldrb w9,[x8, #0x10]
71030a6010  cbnz w9,0x71030a6094
71030a6014  b 0x71030a6024
71030a6018  str xzr,[sp, #0xd0]
71030a601c  ldrb w9,[x8, #0x10]
71030a6020  cbnz w9,0x71030a6094
71030a6024  ldr x20,[x8, #0x8]
71030a6028  mov w9,#0x1
71030a602c  strb w9,[x8, #0x10]
71030a6030  ldrb w9,[x8, #0x11]
71030a6034  ldrb w8,[x20, #0x1c]
71030a6038  cbz w9,0x71030a606c
71030a603c  cbnz w8,0x71030a6094
71030a6040  adrp x8,0x71052b8000
71030a6044  ldr x8,[x8, #0xf00]
71030a6048  ldr x8,[x8]
71030a604c  add x0,x8,#0xa30
71030a6050  ldr x8,[x8, #0xa30]
71030a6054  ldr x8,[x8, #0x10]
71030a6058  mov x1,x20
71030a605c  blr x8
71030a6060  mov w8,#0x1
71030a6064  strb w8,[x20, #0x1c]
71030a6068  b 0x71030a6094
71030a606c  cbz w8,0x71030a6094
71030a6070  adrp x8,0x71052b8000
71030a6074  ldr x8,[x8, #0xf00]
71030a6078  ldr x8,[x8]
71030a607c  add x0,x8,#0xa30
71030a6080  ldr x8,[x8, #0xa30]
71030a6084  ldr x8,[x8, #0x18]
71030a6088  mov x1,x20
71030a608c  blr x8
71030a6090  strb wzr,[x20, #0x1c]
71030a6094  ldr x8,[x19, #0x1210]
71030a6098  ldr x8,[x8, #0x8]
71030a609c  movi v0.2D,#0x0
71030a60a0  mov w9,#0x1
71030a60a4  str w9,[x8, #0x14]
71030a60a8  add x9,x19,#0x8d8
71030a60ac  ld1 {v0.S}[0],[x9]
71030a60b0  add x10,x19,#0x8dc
71030a60b4  ld1 {v0.S}[1],[x10]
71030a60b8  add x9,x19,#0x8e0
71030a60bc  ldr x8,[x19, #0x1210]
71030a60c0  ldr x8,[x8, #0x8]
71030a60c4  mov x21,#0x821c
71030a60c8  movk x21,#0x81e3, LSL #16
71030a60cc  movk x21,#0xa, LSL #32
71030a60d0  ld1 {v0.S}[2],[x9]
71030a60d4  str q0,[x8, #0x30]
71030a60d8  ldr x8,[x19, #0x310]
71030a60dc  ldp x9,x10,[x8, #0xd0]
71030a60e0  cmp x9,x10
71030a60e4  b.eq 0x71030a6110
71030a60e8  ldr w11,[x9, #0x8]
71030a60ec  cmp w11,#0x1
71030a60f0  b.hi 0x71030a6104
71030a60f4  ldr x11,[x9]
71030a60f8  ldr x12,[x11, #0x68]
71030a60fc  cmp x12,x21
71030a6100  b.eq 0x71030a6114
71030a6104  add x9,x9,#0x10
71030a6108  cmp x10,x9
71030a610c  b.ne 0x71030a60e8
71030a6110  mov x11,xzr
71030a6114  str x11,[x19, #0x1040]
71030a6118  ldp x9,x10,[x8, #0xd0]
71030a611c  cmp x9,x10
71030a6120  b.eq 0x71030a6158
71030a6124  mov x11,#0xca57
71030a6128  movk x11,#0x90da, LSL #16
71030a612c  movk x11,#0x12, LSL #32
71030a6130  ldr w12,[x9, #0x8]
71030a6134  cmp w12,#0x1
71030a6138  b.hi 0x71030a614c
71030a613c  ldr x12,[x9]
71030a6140  ldr x13,[x12, #0x68]
71030a6144  cmp x13,x11
71030a6148  b.eq 0x71030a615c
71030a614c  add x9,x9,#0x10
71030a6150  cmp x10,x9
71030a6154  b.ne 0x71030a6130
71030a6158  mov x12,xzr
71030a615c  str x12,[x19, #0x1048]
71030a6160  ldp x10,x11,[x8, #0xd0]
71030a6164  cmp x10,x11
71030a6168  b.eq 0x71030a61a0
71030a616c  mov x12,#0x6ec
71030a6170  movk x12,#0x9357, LSL #16
71030a6174  movk x12,#0xc, LSL #32
71030a6178  ldr w9,[x10, #0x8]
71030a617c  cmp w9,#0x1
71030a6180  b.hi 0x71030a6194
71030a6184  ldr x9,[x10]
71030a6188  ldr x13,[x9, #0x68]
71030a618c  cmp x13,x12
71030a6190  b.eq 0x71030a61a4
71030a6194  add x10,x10,#0x10
71030a6198  cmp x11,x10
71030a619c  b.ne 0x71030a6178
71030a61a0  mov x9,xzr
71030a61a4  str x9,[x19, #0x1050]
71030a61a8  ldp x10,x8,[x8, #0xd0]
71030a61ac  mov x13,#0x67e6
71030a61b0  movk x13,#0xd89d, LSL #16
71030a61b4  movk x13,#0xe, LSL #32
71030a61b8  cmp x10,x8
71030a61bc  b.eq 0x71030a61e8
71030a61c0  ldr w11,[x10, #0x8]
71030a61c4  cmp w11,#0x1
71030a61c8  b.hi 0x71030a61dc
71030a61cc  ldr x11,[x10]
71030a61d0  ldr x12,[x11, #0x68]
71030a61d4  cmp x12,x13
71030a61d8  b.eq 0x71030a61ec
71030a61dc  add x10,x10,#0x10
71030a61e0  cmp x8,x10
71030a61e4  b.ne 0x71030a61c0
71030a61e8  mov x11,xzr
71030a61ec  str x11,[x19, #0x1058]
71030a61f0  cbz x9,0x71030a6218
71030a61f4  add x0,x9,#0x108
71030a61f8  mov w8,#0x1
71030a61fc  strb w8,[x9, #0x110]
71030a6200  bl 0x71025e9d50
71030a6204  ldr x8,[x19, #0x1050]
71030a6208  cbz x8,0x71030a6218
71030a620c  ldrb w9,[x8, #0x118]
71030a6210  and w9,w9,#0xfe
71030a6214  strb w9,[x8, #0x118]
71030a6218  ldr x8,[x19, #0x1058]
71030a621c  cbz x8,0x71030a6294
71030a6220  add x0,x8,#0x108
71030a6224  strb wzr,[x8, #0x110]
71030a6228  bl 0x71025e9d50
71030a622c  ldr x8,[x19, #0x1058]
71030a6230  cbz x8,0x71030a6294
71030a6234  ldrb w9,[x8, #0x118]
71030a6238  orr w9,w9,#0x1
71030a623c  strb w9,[x8, #0x118]
71030a6240  ldr x8,[x19, #0x1058]
71030a6244  cbz x8,0x71030a6294
71030a6248  ldr x9,[x8, #0xd8]
71030a624c  cbz x9,0x71030a625c
71030a6250  strb wzr,[x9, #0x22]
71030a6254  ldr x8,[x19, #0x1058]
71030a6258  cbz x8,0x71030a6294
71030a625c  ldrb w9,[x8, #0xe0]
71030a6260  cbz w9,0x71030a6274
71030a6264  ldr x9,[x8, #0xc8]
71030a6268  cbz x9,0x71030a6274
71030a626c  mov w10,#0x101
71030a6270  strh w10,[x9, #0x30]
71030a6274  ldr x9,[x8, #0xd8]
71030a6278  cbz x9,0x71030a6284
71030a627c  mov w10,#0x1
71030a6280  strb w10,[x9, #0x21]
71030a6284  ldrb w9,[x8, #0xe0]
71030a6288  cbz w9,0x71030a6294
71030a628c  ldr x8,[x8, #0xb0]
71030a6290  strb wzr,[x8, #0x10]
71030a6294  ldr x9,[x19, #0x310]
71030a6298  ldp x8,x9,[x9, #0xd0]
71030a629c  cmp x8,x9
71030a62a0  b.eq 0x71030a62d8
71030a62a4  mov x10,#0x5026
71030a62a8  movk x10,#0xfc10, LSL #16
71030a62ac  movk x10,#0x8, LSL #32
71030a62b0  ldr w11,[x8, #0x8]
71030a62b4  cmp w11,#0x1
71030a62b8  b.hi 0x71030a62cc
71030a62bc  ldr x11,[x8]
71030a62c0  ldr x12,[x11, #0x68]
71030a62c4  cmp x12,x10
71030a62c8  b.eq 0x71030a6680
71030a62cc  add x8,x8,#0x10
71030a62d0  cmp x9,x8
71030a62d4  b.ne 0x71030a62b0
71030a62d8  mov w8,#0x1060
71030a62dc  add x20,x19,x8
71030a62e0  str xzr,[x19, #0x1060]
71030a62e4  ldr x8,[x20]
71030a62e8  cbz x8,0x71030a630c
71030a62ec  ldrb w9,[x8, #0xe0]
71030a62f0  cbz w9,0x71030a6300
71030a62f4  ldr x9,[x8, #0xc8]
71030a62f8  cbz x9,0x71030a6300
71030a62fc  strh wzr,[x9, #0x32]
71030a6300  ldr x8,[x8, #0xd8]
71030a6304  cbz x8,0x71030a630c
71030a6308  strb wzr,[x8, #0x22]
71030a630c  ldr x9,[x19, #0x310]
71030a6310  ldp x10,x11,[x9, #0xd0]
71030a6314  cmp x10,x11
71030a6318  b.eq 0x71030a6350
71030a631c  mov x12,#0xb300
71030a6320  movk x12,#0x96b0, LSL #16
71030a6324  movk x12,#0x15, LSL #32
71030a6328  ldr w8,[x10, #0x8]
71030a632c  cmp w8,#0x1
71030a6330  b.hi 0x71030a6344
71030a6334  ldr x8,[x10]
71030a6338  ldr x13,[x8, #0x68]
71030a633c  cmp x13,x12
71030a6340  b.eq 0x71030a6354
71030a6344  add x10,x10,#0x10
71030a6348  cmp x11,x10
71030a634c  b.ne 0x71030a6328
71030a6350  mov x8,xzr
71030a6354  str x8,[x19, #0x1068]
71030a6358  ldp x10,x9,[x9, #0xd0]
71030a635c  cmp x10,x9
71030a6360  b.eq 0x71030a6398
71030a6364  mov x11,#0x5493
71030a6368  movk x11,#0xa151, LSL #16
71030a636c  movk x11,#0x15, LSL #32
71030a6370  ldr w12,[x10, #0x8]
71030a6374  cmp w12,#0x1
71030a6378  b.hi 0x71030a638c
71030a637c  ldr x12,[x10]
71030a6380  ldr x13,[x12, #0x68]
71030a6384  cmp x13,x11
71030a6388  b.eq 0x71030a639c
71030a638c  add x10,x10,#0x10
71030a6390  cmp x9,x10
71030a6394  b.ne 0x71030a6370
71030a6398  mov x12,xzr
71030a639c  str x12,[x19, #0x1070]
71030a63a0  cbz x8,0x71030a63dc
71030a63a4  ldrb w9,[x8, #0xe0]
71030a63a8  cbz w9,0x71030a63bc
71030a63ac  ldr x9,[x8, #0xc8]
71030a63b0  cbz x9,0x71030a63bc
71030a63b4  mov w10,#0x101
71030a63b8  strh w10,[x9, #0x30]
71030a63bc  ldr x9,[x8, #0xd8]
71030a63c0  cbz x9,0x71030a63cc
71030a63c4  mov w10,#0x1
71030a63c8  strb w10,[x9, #0x21]
71030a63cc  ldrb w9,[x8, #0xe0]
71030a63d0  cbz w9,0x71030a63dc
71030a63d4  ldr x8,[x8, #0xb0]
71030a63d8  strb wzr,[x8, #0x10]
71030a63dc  ldr x8,[x19, #0x1070]
71030a63e0  cbz x8,0x71030a641c
71030a63e4  ldrb w9,[x8, #0xe0]
71030a63e8  cbz w9,0x71030a63fc
71030a63ec  ldr x9,[x8, #0xc8]
71030a63f0  cbz x9,0x71030a63fc
71030a63f4  mov w10,#0x101
71030a63f8  strh w10,[x9, #0x30]
71030a63fc  ldr x9,[x8, #0xd8]
71030a6400  cbz x9,0x71030a640c
71030a6404  mov w10,#0x1
71030a6408  strb w10,[x9, #0x21]
71030a640c  ldrb w9,[x8, #0xe0]
71030a6410  cbz w9,0x71030a641c
71030a6414  ldr x8,[x8, #0xb0]
71030a6418  strb wzr,[x8, #0x10]
71030a641c  ldr x8,[x19, #0x1068]
71030a6420  cbz x8,0x71030a6444
71030a6424  ldrb w9,[x8, #0xe0]
71030a6428  cbz w9,0x71030a6438
71030a642c  ldr x9,[x8, #0xc8]
71030a6430  cbz x9,0x71030a6438
71030a6434  strh wzr,[x9, #0x32]
71030a6438  ldr x8,[x8, #0xd8]
71030a643c  cbz x8,0x71030a6444
71030a6440  strb wzr,[x8, #0x22]
71030a6444  ldr x8,[x19, #0x1070]
71030a6448  cbz x8,0x71030a646c
71030a644c  ldrb w9,[x8, #0xe0]
71030a6450  cbz w9,0x71030a6460
71030a6454  ldr x9,[x8, #0xc8]
71030a6458  cbz x9,0x71030a6460
71030a645c  strh wzr,[x9, #0x32]
71030a6460  ldr x8,[x8, #0xd8]
71030a6464  cbz x8,0x71030a646c
71030a6468  strb wzr,[x8, #0x22]
71030a646c  ldr x8,[x19, #0x7e0]
71030a6470  fmov v0.4S,#0x3f800000
71030a6474  add x9,x8,#0x4
71030a6478  str q0,[sp]
71030a647c  ld1 {v0.S}[0],[x9]
71030a6480  add x9,x8,#0x8
71030a6484  add x8,x8,#0xc
71030a6488  ld1 {v0.S}[1],[x9]
71030a648c  ldr q1,[sp, #0x30]
71030a6490  ld1 {v0.S}[2],[x8]
71030a6494  str q1,[sp, #0x80]
71030a6498  ldr q1,[sp, #0x20]
71030a649c  str q1,[sp, #0x90]
71030a64a0  ldr q1,[sp, #0x10]
71030a64a4  stp q1,q0,[sp, #0xa0]
71030a64a8  ldr x20,[x19, #0x1070]
71030a64ac  cbz x20,0x71030a6534
71030a64b0  ldr x0,[x20, #0x90]
71030a64b4  ldr x8,[x0]
71030a64b8  ldr x8,[x8, #0x148]
71030a64bc  add x1,sp,#0x80
71030a64c0  blr x8
71030a64c4  ldr x20,[x20, #0xd8]
71030a64c8  cbz x20,0x71030a6534
71030a64cc  ldr x8,[sp, #0x98]
71030a64d0  str x8,[sp, #0xe8]
71030a64d4  ldr x8,[sp, #0x90]
71030a64d8  str x8,[sp, #0xe0]
71030a64dc  ldr x8,[sp, #0x88]
71030a64e0  str x8,[sp, #0xd8]
71030a64e4  ldr x8,[sp, #0x80]
71030a64e8  str x8,[sp, #0xd0]
71030a64ec  ldr x8,[sp, #0xb8]
71030a64f0  str x8,[sp, #0x108]
71030a64f4  ldr x8,[sp, #0xb0]
71030a64f8  str x8,[sp, #0x100]
71030a64fc  ldr x8,[sp, #0xa8]
71030a6500  str x8,[sp, #0xf8]
71030a6504  ldr x8,[sp, #0xa0]
71030a6508  str x8,[sp, #0xf0]
71030a650c  ldr x8,[x20, #0x8]
71030a6510  ldrb w9,[x8, #0xa8]
71030a6514  cbz w9,0x71030a652c
71030a6518  ldr x0,[x8, #0x48]
71030a651c  ldr x8,[x0]
71030a6520  ldr x8,[x8, #0x20]
71030a6524  add x1,sp,#0xd0
71030a6528  blr x8
71030a652c  mov w8,#0x1
71030a6530  strb w8,[x20, #0x20]
71030a6534  ldr x8,[x19, #0x7f8]
71030a6538  ldr q0,[sp]
71030a653c  add x9,x8,#0x4
71030a6540  ld1 {v0.S}[0],[x9]
71030a6544  add x9,x8,#0x8
71030a6548  add x8,x8,#0xc
71030a654c  ld1 {v0.S}[1],[x9]
71030a6550  ldr q1,[sp, #0x30]
71030a6554  ld1 {v0.S}[2],[x8]
71030a6558  str q1,[sp, #0x80]
71030a655c  ldr q1,[sp, #0x20]
71030a6560  str q1,[sp, #0x90]
71030a6564  ldr q1,[sp, #0x10]
71030a6568  stp q1,q0,[sp, #0xa0]
71030a656c  ldr x20,[x19, #0x1068]
71030a6570  cbz x20,0x71030a65f8
71030a6574  ldr x0,[x20, #0x90]
71030a6578  ldr x8,[x0]
71030a657c  ldr x8,[x8, #0x148]
71030a6580  add x1,sp,#0x80
71030a6584  blr x8
71030a6588  ldr x20,[x20, #0xd8]
71030a658c  cbz x20,0x71030a65f8
71030a6590  ldr x8,[sp, #0x98]
71030a6594  str x8,[sp, #0xe8]
71030a6598  ldr x8,[sp, #0x90]
71030a659c  str x8,[sp, #0xe0]
71030a65a0  ldr x8,[sp, #0x88]
71030a65a4  str x8,[sp, #0xd8]
71030a65a8  ldr x8,[sp, #0x80]
71030a65ac  str x8,[sp, #0xd0]
71030a65b0  ldr x8,[sp, #0xb8]
71030a65b4  str x8,[sp, #0x108]
71030a65b8  ldr x8,[sp, #0xb0]
71030a65bc  str x8,[sp, #0x100]
71030a65c0  ldr x8,[sp, #0xa8]
71030a65c4  str x8,[sp, #0xf8]
71030a65c8  ldr x8,[sp, #0xa0]
71030a65cc  str x8,[sp, #0xf0]
71030a65d0  ldr x8,[x20, #0x8]
71030a65d4  ldrb w9,[x8, #0xa8]
71030a65d8  cbz w9,0x71030a65f0
71030a65dc  ldr x0,[x8, #0x48]
71030a65e0  ldr x8,[x0]
71030a65e4  ldr x8,[x8, #0x20]
71030a65e8  add x1,sp,#0xd0
71030a65ec  blr x8
71030a65f0  mov w8,#0x1
71030a65f4  strb w8,[x20, #0x20]
71030a65f8  ldr x0,[x19, #0x310]
71030a65fc  ldp x10,x11,[x0, #0xd0]
71030a6600  mov x9,#0xacff
71030a6604  movk x9,#0xa676, LSL #16
71030a6608  movk x9,#0xf, LSL #32
71030a660c  cmp x10,x11
71030a6610  b.eq 0x71030a663c
71030a6614  ldr w8,[x10, #0x8]
71030a6618  cmp w8,#0x1
71030a661c  b.hi 0x71030a6630
71030a6620  ldr x8,[x10]
71030a6624  ldr x12,[x8, #0x68]
71030a6628  cmp x12,x9
71030a662c  b.eq 0x71030a6640
71030a6630  add x10,x10,#0x10
71030a6634  cmp x11,x10
71030a6638  b.ne 0x71030a6614
71030a663c  mov x8,xzr
71030a6640  str x8,[x19, #0x1088]
71030a6644  ldp x1,x10,[x0, #0xd0]
71030a6648  cmp x1,x10
71030a664c  b.eq 0x71030a6678
71030a6650  ldr w11,[x1, #0x8]
71030a6654  cmp w11,#0x1
71030a6658  b.hi 0x71030a666c
71030a665c  ldr x11,[x1]
71030a6660  ldr x11,[x11, #0x68]
71030a6664  cmp x11,x9
71030a6668  b.eq 0x71030a66fc
71030a666c  add x1,x1,#0x10
71030a6670  cmp x10,x1
71030a6674  b.ne 0x71030a6650
71030a6678  mov x0,xzr
71030a667c  b 0x71030a6704
71030a6680  mov w8,#0x1060
71030a6684  add x20,x19,x8
71030a6688  str x11,[x19, #0x1060]
71030a668c  cbz x11,0x71030a62e4
71030a6690  add x0,x11,#0x108
71030a6694  strb wzr,[x11, #0x110]
71030a6698  bl 0x71025e9d50
71030a669c  ldr x8,[x20]
71030a66a0  cbz x8,0x71030a630c
71030a66a4  ldrb w9,[x8, #0x118]
71030a66a8  orr w9,w9,#0x1
71030a66ac  strb w9,[x8, #0x118]
71030a66b0  ldr x8,[x20]
71030a66b4  cbz x8,0x71030a630c
71030a66b8  ldrb w9,[x8, #0xe0]
71030a66bc  cbz w9,0x71030a66d0
71030a66c0  ldr x9,[x8, #0xc8]
71030a66c4  cbz x9,0x71030a66d0
71030a66c8  mov w10,#0x101
71030a66cc  strh w10,[x9, #0x30]
71030a66d0  ldr x9,[x8, #0xd8]
71030a66d4  cbz x9,0x71030a66e0
71030a66d8  mov w10,#0x1
71030a66dc  strb w10,[x9, #0x21]
71030a66e0  ldrb w9,[x8, #0xe0]
71030a66e4  cbz w9,0x71030a62e4
71030a66e8  ldr x8,[x8, #0xb0]
71030a66ec  strb wzr,[x8, #0x10]
71030a66f0  ldr x8,[x20]
71030a66f4  cbnz x8,0x71030a62ec
71030a66f8  b 0x71030a630c
71030a66fc  bl 0x710262fb80
71030a6700  ldr x8,[x19, #0x1088]
71030a6704  mov w9,#0x1220
71030a6708  str x0,[x19, #0x1090]
71030a670c  add x20,x19,x9
71030a6710  ldrb w9,[x20]
71030a6714  cbz x8,0x71030a6750
71030a6718  ldrb w10,[x8, #0xe0]
71030a671c  cbz w10,0x71030a6730
71030a6720  ldr x10,[x8, #0xc8]
71030a6724  cbz x10,0x71030a6730
71030a6728  mov w11,#0x101
71030a672c  strh w11,[x10, #0x30]
71030a6730  ldr x10,[x8, #0xd8]
71030a6734  cbz x10,0x71030a6740
71030a6738  mov w11,#0x1
71030a673c  strb w11,[x10, #0x21]
71030a6740  ldrb w10,[x8, #0xe0]
71030a6744  cbz w10,0x71030a6750
71030a6748  ldr x8,[x8, #0xb0]
71030a674c  strb wzr,[x8, #0x10]
71030a6750  ldr x8,[x19, #0x1090]
71030a6754  cbz x8,0x71030a6790
71030a6758  ldrb w10,[x8, #0xe0]
71030a675c  cbz w10,0x71030a6770
71030a6760  ldr x10,[x8, #0xc8]
71030a6764  cbz x10,0x71030a6770
71030a6768  mov w11,#0x101
71030a676c  strh w11,[x10, #0x30]
71030a6770  ldr x10,[x8, #0xd8]
71030a6774  cbz x10,0x71030a6780
71030a6778  mov w11,#0x1
71030a677c  strb w11,[x10, #0x21]
71030a6780  ldrb w10,[x8, #0xe0]
71030a6784  cbz w10,0x71030a6790
71030a6788  ldr x8,[x8, #0xb0]
71030a678c  strb wzr,[x8, #0x10]
71030a6790  cbz w9,0x71030a67bc
71030a6794  ldr x8,[x19, #0x1088]
71030a6798  cbz x8,0x71030a67a8
71030a679c  ldrb w9,[x8, #0x118]
71030a67a0  orr w9,w9,#0x1
71030a67a4  strb w9,[x8, #0x118]
71030a67a8  ldr x8,[x19, #0x1090]
71030a67ac  cbz x8,0x71030a67bc
71030a67b0  ldrb w9,[x8, #0x118]
71030a67b4  orr w9,w9,#0x1
71030a67b8  strb w9,[x8, #0x118]
71030a67bc  ldr q0,[sp]
71030a67c0  add x8,x19,#0x848
71030a67c4  ldr q1,[sp, #0x30]
71030a67c8  ld1 {v0.S}[0],[x8]
71030a67cc  add x8,x19,#0x84c
71030a67d0  ld1 {v0.S}[1],[x8]
71030a67d4  add x8,x19,#0x850
71030a67d8  ld1 {v0.S}[2],[x8]
71030a67dc  str q1,[sp, #0x80]
71030a67e0  ldr q1,[sp, #0x20]
71030a67e4  str q1,[sp, #0x90]
71030a67e8  ldr q1,[sp, #0x10]
71030a67ec  stp q1,q0,[sp, #0xa0]
71030a67f0  ldr x22,[x19, #0x1090]
71030a67f4  cbz x22,0x71030a687c
71030a67f8  ldr x0,[x22, #0x90]
71030a67fc  ldr x8,[x0]
71030a6800  ldr x8,[x8, #0x148]
71030a6804  add x1,sp,#0x80
71030a6808  blr x8
71030a680c  ldr x22,[x22, #0xd8]
71030a6810  cbz x22,0x71030a687c
71030a6814  ldr x8,[sp, #0x98]
71030a6818  str x8,[sp, #0xe8]
71030a681c  ldr x8,[sp, #0x90]
71030a6820  str x8,[sp, #0xe0]
71030a6824  ldr x8,[sp, #0x88]
71030a6828  str x8,[sp, #0xd8]
71030a682c  ldr x8,[sp, #0x80]
71030a6830  str x8,[sp, #0xd0]
71030a6834  ldr x8,[sp, #0xb8]
71030a6838  str x8,[sp, #0x108]
71030a683c  ldr x8,[sp, #0xb0]
71030a6840  str x8,[sp, #0x100]
71030a6844  ldr x8,[sp, #0xa8]
71030a6848  str x8,[sp, #0xf8]
71030a684c  ldr x8,[sp, #0xa0]
71030a6850  str x8,[sp, #0xf0]
71030a6854  ldr x8,[x22, #0x8]
71030a6858  ldrb w9,[x8, #0xa8]
71030a685c  cbz w9,0x71030a6874
71030a6860  ldr x0,[x8, #0x48]
71030a6864  ldr x8,[x0]
71030a6868  ldr x8,[x8, #0x20]
71030a686c  add x1,sp,#0xd0
71030a6870  blr x8
71030a6874  mov w8,#0x1
71030a6878  strb w8,[x22, #0x20]
71030a687c  ldr q1,[sp]
71030a6880  add x8,x19,#0x854
71030a6884  ldr q0,[sp, #0x30]
71030a6888  ld1 {v1.S}[0],[x8]
71030a688c  add x8,x19,#0x858
71030a6890  ld1 {v1.S}[1],[x8]
71030a6894  add x8,x19,#0x85c
71030a6898  ld1 {v1.S}[2],[x8]
71030a689c  str q0,[sp, #0x80]
71030a68a0  ldr q0,[sp, #0x20]
71030a68a4  str q0,[sp, #0x90]
71030a68a8  ldr q0,[sp, #0x10]
71030a68ac  stp q0,q1,[sp, #0xa0]
71030a68b0  ldr x22,[x19, #0x1088]
71030a68b4  cbz x22,0x71030a693c
71030a68b8  ldr x0,[x22, #0x90]
71030a68bc  ldr x8,[x0]
71030a68c0  ldr x8,[x8, #0x148]
71030a68c4  add x1,sp,#0x80
71030a68c8  blr x8
71030a68cc  ldr x22,[x22, #0xd8]
71030a68d0  cbz x22,0x71030a693c
71030a68d4  ldr x8,[sp, #0x98]
71030a68d8  str x8,[sp, #0xe8]
71030a68dc  ldr x8,[sp, #0x90]
71030a68e0  str x8,[sp, #0xe0]
71030a68e4  ldr x8,[sp, #0x88]
71030a68e8  str x8,[sp, #0xd8]
71030a68ec  ldr x8,[sp, #0x80]
71030a68f0  str x8,[sp, #0xd0]
71030a68f4  ldr x8,[sp, #0xb8]
71030a68f8  str x8,[sp, #0x108]
71030a68fc  ldr x8,[sp, #0xb0]
71030a6900  str x8,[sp, #0x100]
71030a6904  ldr x8,[sp, #0xa8]
71030a6908  str x8,[sp, #0xf8]
71030a690c  ldr x8,[sp, #0xa0]
71030a6910  str x8,[sp, #0xf0]
71030a6914  ldr x8,[x22, #0x8]
71030a6918  ldrb w9,[x8, #0xa8]
71030a691c  cbz w9,0x71030a6934
71030a6920  ldr x0,[x8, #0x48]
71030a6924  ldr x8,[x0]
71030a6928  ldr x8,[x8, #0x20]
71030a692c  add x1,sp,#0xd0
71030a6930  blr x8
71030a6934  mov w8,#0x1
71030a6938  strb w8,[x22, #0x20]
71030a693c  ldrb w8,[x20]
71030a6940  add x23,sp,#0xd0
71030a6944  cbnz w8,0x71030a6af4
71030a6948  mov w1,#0x110
71030a694c  mov w0,#0x10
71030a6950  bl 0x710392e290
71030a6954  mov x20,x0
71030a6958  cbnz x0,0x71030a69a4
71030a695c  adrp x8,0x7105332000
71030a6960  ldr x0,[x8, #0xf00]
71030a6964  cbz x0,0x71030a69a0
71030a6968  mov w8,#0x110
71030a696c  stur wzr,[x29, #-0xc0]
71030a6970  sub x1,x29,#0xc0
71030a6974  str x8,[sp, #0xd0]
71030a6978  ldr x8,[x0]
71030a697c  ldr x8,[x8, #0x30]
71030a6980  add x2,sp,#0xd0
71030a6984  blr x8
71030a6988  tbz w0,#0x0,0x71030a69a0
71030a698c  mov w1,#0x110
71030a6990  mov w0,#0x10
71030a6994  bl 0x710392e290
71030a6998  mov x20,x0
71030a699c  cbnz x0,0x71030a69a4
71030a69a0  mov x20,xzr
71030a69a4  mov x0,x20
71030a69a8  mov x1,x19
71030a69ac  mov x2,xzr
71030a69b0  mov w3,wzr
71030a69b4  mov w22,#0x50000000
71030a69b8  bl 0x7103140260
71030a69bc  mov x8,#-0x10000
71030a69c0  movk x8,#0x5000, LSL #16
71030a69c4  str x20,[x19, #0x10c8]
71030a69c8  stp xzr,x8,[sp, #0xf0]
71030a69cc  adrp x8,0x7104469000
71030a69d0  ldr q0,[x8, #0xa60]
71030a69d4  adrp x8,0x7104468000
71030a69d8  str wzr,[sp, #0x100]
71030a69dc  str q0,[sp, #0xd0]
71030a69e0  ldr q0,[x8, #0xa70]
71030a69e4  strh wzr,[sp, #0x104]
71030a69e8  str w22,[sp, #0x108]
71030a69ec  str q0,[sp, #0xe0]
71030a69f0  ldr x8,[x20]
71030a69f4  ldr x8,[x8, #0x98]
71030a69f8  add x1,sp,#0xd0
71030a69fc  mov x0,x20
71030a6a00  mov w2,wzr
71030a6a04  str q0,[sp, #0x30]
71030a6a08  blr x8
71030a6a0c  ldr x0,[x19, #0x10c8]
71030a6a10  ldr x8,[x0]
71030a6a14  ldr x8,[x8, #0x90]
71030a6a18  blr x8
71030a6a1c  ldr x0,[x19, #0x10c8]
71030a6a20  bl 0x710313ef20
71030a6a24  mov w1,#0x110
71030a6a28  mov w0,#0x10
71030a6a2c  bl 0x710392e290
71030a6a30  mov x20,x0
71030a6a34  cbnz x0,0x71030a6a80
71030a6a38  adrp x8,0x7105332000
71030a6a3c  ldr x0,[x8, #0xf00]
71030a6a40  cbz x0,0x71030a6a7c
71030a6a44  mov w8,#0x110
71030a6a48  stur wzr,[x29, #-0xc0]
71030a6a4c  sub x1,x29,#0xc0
71030a6a50  str x8,[sp, #0xd0]
71030a6a54  ldr x8,[x0]
71030a6a58  ldr x8,[x8, #0x30]
71030a6a5c  add x2,sp,#0xd0
71030a6a60  blr x8
71030a6a64  tbz w0,#0x0,0x71030a6a7c
71030a6a68  mov w1,#0x110
71030a6a6c  mov w0,#0x10
71030a6a70  bl 0x710392e290
71030a6a74  mov x20,x0
71030a6a78  cbnz x0,0x71030a6a80
71030a6a7c  mov x20,xzr
71030a6a80  mov x0,x20
71030a6a84  mov x1,x19
71030a6a88  mov x2,xzr
71030a6a8c  mov w3,wzr
71030a6a90  bl 0x7103140260
71030a6a94  mov w8,#0xffffffff
71030a6a98  str x20,[x19, #0x10d0]
71030a6a9c  str xzr,[sp, #0xf0]
71030a6aa0  str w22,[sp, #0xf8]
71030a6aa4  add x1,sp,#0xd0
71030a6aa8  mov x0,x20
71030a6aac  stur x8,[x23, #0x2c]
71030a6ab0  adrp x8,0x7104468000
71030a6ab4  ldr q0,[x8, #0xea0]
71030a6ab8  str q0,[sp, #0xd0]
71030a6abc  ldr q0,[sp, #0x30]
71030a6ac0  strh wzr,[sp, #0x104]
71030a6ac4  str w22,[sp, #0x108]
71030a6ac8  str q0,[sp, #0xe0]
71030a6acc  ldr x8,[x20]
71030a6ad0  ldr x8,[x8, #0x98]
71030a6ad4  mov w2,wzr
71030a6ad8  blr x8
71030a6adc  ldr x0,[x19, #0x10d0]
71030a6ae0  ldr x8,[x0]
71030a6ae4  ldr x8,[x8, #0x90]
71030a6ae8  blr x8
71030a6aec  ldr x0,[x19, #0x10d0]
71030a6af0  bl 0x710313ef20
71030a6af4  mov x28,#0x1
71030a6af8  mov w8,#0x4
71030a6afc  mov x9,#0x100000001
71030a6b00  movk x28,#0x10, LSL #32
71030a6b04  mov w1,#0x48
71030a6b08  str x28,[sp, #0xe0]
71030a6b0c  mov w0,#0x10
71030a6b10  stp x8,x9,[sp, #0xd0]
71030a6b14  bl 0x710392e290
71030a6b18  mov x20,x0
71030a6b1c  cbnz x0,0x71030a6b68
71030a6b20  adrp x8,0x7105332000
71030a6b24  ldr x0,[x8, #0xf00]
71030a6b28  cbz x0,0x71030a6b64
71030a6b2c  mov w8,#0x48
71030a6b30  str wzr,[sp, #0x40]
71030a6b34  add x1,sp,#0x40
71030a6b38  stur x8,[x29, #-0xc0]
71030a6b3c  ldr x8,[x0]
71030a6b40  ldr x8,[x8, #0x30]
71030a6b44  sub x2,x29,#0xc0
71030a6b48  blr x8
71030a6b4c  tbz w0,#0x0,0x71030a6b64
71030a6b50  mov w1,#0x48
71030a6b54  mov w0,#0x10
71030a6b58  bl 0x710392e290
71030a6b5c  mov x20,x0
71030a6b60  cbnz x0,0x71030a6b68
71030a6b64  mov x20,xzr
71030a6b68  add x2,sp,#0xd0
71030a6b6c  mov x0,x20
71030a6b70  mov x1,x19
71030a6b74  bl 0x710313e6a0
71030a6b78  adrp x8,0x7104466000
71030a6b7c  ldr q0,[x8, #0xd50]
71030a6b80  adrp x8,0x7104468000
71030a6b84  adrp x9,0x7104469000
71030a6b88  str x20,[x19, #0x10b0]
71030a6b8c  ldr q1,[x9, #0xc70]
71030a6b90  stur q0,[x29, #-0xc0]
71030a6b94  ldr q0,[x8, #0xbd0]
71030a6b98  mov x8,#0x41a00000
71030a6b9c  movk x8,#0x2, LSL #32
71030a6ba0  stur x8,[x29, #-0xa0]
71030a6ba4  stur q0,[x29, #-0xb0]
71030a6ba8  str x8,[sp, #0x60]
71030a6bac  stp q1,q0,[sp, #0x40]
71030a6bb0  ldr x8,[x20, #0x38]
71030a6bb4  cbz x8,0x71030a6be0
71030a6bb8  ldr x0,[x8, #0x130]
71030a6bbc  ldr x8,[x0]
71030a6bc0  ldr x8,[x8, #0x100]
71030a6bc4  sub x2,x29,#0xc0
71030a6bc8  mov w1,wzr
71030a6bcc  mov w3,wzr
71030a6bd0  mov w4,wzr
71030a6bd4  mov w5,wzr
71030a6bd8  blr x8
71030a6bdc  ldr x20,[x19, #0x10b0]
71030a6be0  ldr x8,[x20, #0x38]
71030a6be4  cbz x8,0x71030a6c0c
71030a6be8  ldr x0,[x8, #0x130]
71030a6bec  ldr x8,[x0]
71030a6bf0  ldr x8,[x8, #0x100]
71030a6bf4  add x2,sp,#0x40
71030a6bf8  mov w3,#0x1
71030a6bfc  mov w1,wzr
71030a6c00  mov w4,wzr
71030a6c04  mov w5,wzr
71030a6c08  blr x8
71030a6c0c  adrp x10,0x71052a8000
71030a6c10  ldr x8,[x19, #0x8c0]
71030a6c14  ldr x10,[x10, #0xa80]
71030a6c18  str wzr,[sp, #0x170]
71030a6c1c  strb wzr,[sp, #0x176]
71030a6c20  adrp x27,0x71052a8000
71030a6c24  ldr x27,[x27, #0xa88]
71030a6c28  ldr q0,[x27]
71030a6c2c  fmov s2,wzr
71030a6c30  ext v1.16B,v0.16B,v0.16B,0x8
71030a6c34  mov v1.S[0x1],v2.S[0x0]
71030a6c38  mov v0.D[0x1],v1.D[0x0]
71030a6c3c  orr x9,xzr,#0x3f8000003f800000
71030a6c40  str x9,[sp, #0x178]
71030a6c44  mov x12,#0x1fca
71030a6c48  movk x12,#0x1ed9, LSL #16
71030a6c4c  orr w9,wzr,#0xe
71030a6c50  movk x12,#0x3, LSL #32
71030a6c54  strb w9,[sp, #0x146]
71030a6c58  stp q0,q0,[sp, #0xd0]
71030a6c5c  ldr q0,[x10]
71030a6c60  add x11,sp,#0xd0
71030a6c64  orr x9,xzr,#0x100000000
71030a6c68  str x12,[sp, #0x118]
71030a6c6c  stur wzr,[x11, #0x6f]
71030a6c70  str x9,[sp, #0x148]
71030a6c74  mov x9,#0x7a80
71030a6c78  movk x9,#0xfb99, LSL #16
71030a6c7c  mov x10,#0xfc4f
71030a6c80  movk x10,#0x25cb, LSL #16
71030a6c84  movk x10,#0x4, LSL #32
71030a6c88  movk x9,#0x7, LSL #32
71030a6c8c  str x12,[sp, #0x158]
71030a6c90  stp x10,x9,[sp, #0x188]
71030a6c94  mov w9,#0xbf800000
71030a6c98  str w9,[sp, #0x1a0]
71030a6c9c  orr w9,wzr,#0x3
71030a6ca0  strh wzr,[sp, #0x150]
71030a6ca4  str q0,[sp, #0x160]
71030a6ca8  strh wzr,[sp, #0x174]
71030a6cac  str wzr,[sp, #0x180]
71030a6cb0  strh wzr,[sp, #0x198]
71030a6cb4  strh wzr,[sp, #0x19c]
71030a6cb8  stur xzr,[x11, #0xe4]
71030a6cbc  stur xzr,[x11, #0xdc]
71030a6cc0  stur xzr,[x11, #0xd4]
71030a6cc4  mov w22,#0xffffffff
71030a6cc8  strh w9,[sp, #0x1c0]
71030a6ccc  orr w9,wzr,#0x3f800000
71030a6cd0  str w22,[sp, #0x1bc]
71030a6cd4  strh wzr,[sp, #0x1c8]
71030a6cd8  strb wzr,[sp, #0x1ca]
71030a6cdc  str w9,[sp, #0x1c4]
71030a6ce0  ldr w10,[x8, #0x120]
71030a6ce4  str w10,[sp, #0xf0]
71030a6ce8  mov w10,#0x41a00000
71030a6cec  str w10,[sp, #0xf4]
71030a6cf0  ldr w10,[x8, #0x124]
71030a6cf4  str w10,[sp, #0xf8]
71030a6cf8  ldr w10,[x8, #0x128]
71030a6cfc  str w10,[sp, #0xfc]
71030a6d00  ldr w10,[x8, #0x12c]
71030a6d04  str w10,[sp, #0x100]
71030a6d08  ldr w10,[x8, #0x130]
71030a6d0c  str w10,[sp, #0x104]
71030a6d10  str w9,[sp, #0x108]
71030a6d14  ldr w10,[x8, #0x138]
71030a6d18  str w9,[sp, #0x110]
71030a6d1c  mov w9,#0x3f
71030a6d20  movk w9,#0x7, LSL #16
71030a6d24  str w9,[sp, #0x120]
71030a6d28  orr w9,wzr,#0x1f
71030a6d2c  strb w9,[sp, #0x124]
71030a6d30  str w10,[sp, #0x10c]
71030a6d34  ldr x9,[x8, #0x140]
71030a6d38  str x9,[sp, #0x128]
71030a6d3c  mov w9,#0x1
71030a6d40  strb w9,[sp, #0x130]
71030a6d44  ldr w9,[x8, #0x148]
71030a6d48  strb w9,[sp, #0x131]
71030a6d4c  strh wzr,[sp, #0x144]
71030a6d50  strb wzr,[sp, #0x136]
71030a6d54  stur wzr,[x11, #0x62]
71030a6d58  ldr w9,[x8, #0x134]
71030a6d5c  str w9,[sp, #0x148]
71030a6d60  mov w9,#0x100
71030a6d64  sturh w9,[x11, #0x67]
71030a6d68  strb wzr,[sp, #0x139]
71030a6d6c  ldr w9,[x8, #0x14c]
71030a6d70  strb w9,[sp, #0x13a]
71030a6d74  sturh wzr,[x11, #0x6b]
71030a6d78  ldrb w8,[x8, #0x13c]
71030a6d7c  strb w8,[sp, #0x13d]
71030a6d80  mov w8,#0x2
71030a6d84  strb wzr,[sp, #0x13e]
71030a6d88  strb w8,[sp, #0x143]
71030a6d8c  ldr x20,[x19, #0x10b0]
71030a6d90  ldr x8,[x20, #0x38]
71030a6d94  cbz x8,0x71030a6de0
71030a6d98  ldr x0,[x8, #0xa0]
71030a6d9c  ldr x8,[x0]
71030a6da0  ldr x8,[x8, #0x68]
71030a6da4  add x3,sp,#0xd0
71030a6da8  mov w1,wzr
71030a6dac  mov w2,wzr
71030a6db0  blr x8
71030a6db4  ldr x20,[x19, #0x10b0]
71030a6db8  ldr x8,[x20, #0x38]
71030a6dbc  cbz x8,0x71030a6de0
71030a6dc0  ldr x0,[x8, #0xa0]
71030a6dc4  ldr x8,[x0]
71030a6dc8  ldr x8,[x8, #0x68]
71030a6dcc  mov w1,#0x1
71030a6dd0  add x3,sp,#0xd0
71030a6dd4  mov w2,wzr
71030a6dd8  blr x8
71030a6ddc  ldr x20,[x19, #0x10b0]
71030a6de0  ldrb w8,[x20, #0x40]
71030a6de4  cbz w8,0x71030a6e34
71030a6de8  ldr x23,[x20, #0x30]
71030a6dec  cbz x23,0x71030a6e24
71030a6df0  ldrb w8,[x23, #0x10]
71030a6df4  cbz w8,0x71030a6e24
71030a6df8  ldrb w8,[x23, #0x50]
71030a6dfc  strb wzr,[x23, #0x10]
71030a6e00  cbz w8,0x71030a6e24
71030a6e04  ldr x8,[x23]
71030a6e08  ldr w0,[x8, #0x8]
71030a6e0c  bl 0x71003ac560
71030a6e10  ldr x8,[x0]
71030a6e14  ldr x8,[x8, #0x48]
71030a6e18  mov w1,wzr
71030a6e1c  blr x8
71030a6e20  strb wzr,[x23, #0x50]
71030a6e24  ldr x8,[x20]
71030a6e28  ldr x8,[x8, #0x30]
71030a6e2c  mov x0,x20
71030a6e30  blr x8
71030a6e34  mov w1,#0xd0
71030a6e38  mov w0,#0x10
71030a6e3c  strb wzr,[x20, #0x40]
71030a6e40  bl 0x710392e290
71030a6e44  mov x20,x0
71030a6e48  cbnz x0,0x71030a6e94
71030a6e4c  adrp x8,0x7105332000
71030a6e50  ldr x0,[x8, #0xf00]
71030a6e54  cbz x0,0x71030a6e90
71030a6e58  mov w8,#0xd0
71030a6e5c  stur wzr,[x29, #-0xc0]
71030a6e60  sub x1,x29,#0xc0
71030a6e64  str x8,[sp, #0xd0]
71030a6e68  ldr x8,[x0]
71030a6e6c  ldr x8,[x8, #0x30]
71030a6e70  add x2,sp,#0xd0
71030a6e74  blr x8
71030a6e78  tbz w0,#0x0,0x71030a6e90
71030a6e7c  mov w1,#0xd0
71030a6e80  mov w0,#0x10
71030a6e84  bl 0x710392e290
71030a6e88  mov x20,x0
71030a6e8c  cbnz x0,0x71030a6e94
71030a6e90  mov x20,xzr
71030a6e94  mov w23,#0x4
71030a6e98  mov x8,#0x100000001
71030a6e9c  add x2,sp,#0xd0
71030a6ea0  mov x0,x20
71030a6ea4  mov x1,x19
71030a6ea8  str x28,[sp, #0xe0]
71030a6eac  stp x23,x8,[sp, #0xd0]
71030a6eb0  bl 0x710313e6a0
71030a6eb4  str w23,[x20, #0x44]
71030a6eb8  mov w24,#0x1
71030a6ebc  adrp x23,0x7105178000
71030a6ec0  add x23,x23,#0xe68
71030a6ec4  strh wzr,[x20, #0x48]
71030a6ec8  strb w24,[x20, #0x5c]
71030a6ecc  stur xzr,[x20, #0x54]
71030a6ed0  movi v1.2D,#0x0
71030a6ed4  mov w25,#0x41200000
71030a6ed8  stur xzr,[x20, #0x4c]
71030a6edc  strb wzr,[x20, #0x60]
71030a6ee0  str x23,[x20]
71030a6ee4  str xzr,[x20, #0x68]
71030a6ee8  str w22,[x20, #0x70]
71030a6eec  strb wzr,[x20, #0xc0]
71030a6ef0  stp xzr,xzr,[x20, #0xb0]
71030a6ef4  stp xzr,xzr,[x20, #0xa0]
71030a6ef8  stp xzr,xzr,[x20, #0x90]
71030a6efc  stp xzr,xzr,[x20, #0x80]
71030a6f00  ldr x8,[x19, #0x830]
71030a6f04  add x9,x8,#0x4
71030a6f08  add x8,x8,#0x8
71030a6f0c  str x20,[x19, #0x10c0]
71030a6f10  ld1 {v1.S}[0],[x9]
71030a6f14  ldr q0,[x27]
71030a6f18  ld1 {v1.S}[1],[x8]
71030a6f1c  stur x25,[x29, #-0xa0]
71030a6f20  stp q1,q0,[x29, #-0xc0]
71030a6f24  ldr x8,[x20, #0x38]
71030a6f28  cbz x8,0x71030a6f54
71030a6f2c  ldr x0,[x8, #0x130]
71030a6f30  ldr x8,[x0]
71030a6f34  ldr x8,[x8, #0x100]
71030a6f38  sub x2,x29,#0xc0
71030a6f3c  mov w1,wzr
71030a6f40  mov w3,wzr
71030a6f44  mov w4,wzr
71030a6f48  mov w5,wzr
71030a6f4c  blr x8
71030a6f50  ldr q0,[x27]
71030a6f54  ext v2.16B,v0.16B,v0.16B,0x8
71030a6f58  fmov s3,wzr
71030a6f5c  adrp x8,0x71052a8000
71030a6f60  mov v2.S[0x1],v3.S[0x0]
71030a6f64  ldr x8,[x8, #0xa80]
71030a6f68  mov v0.D[0x1],v2.D[0x0]
71030a6f6c  orr x9,xzr,#0x3f8000003f800000
71030a6f70  stp xzr,x9,[sp, #0x100]
71030a6f74  mov x9,#0x1fca
71030a6f78  movk x9,#0x1ed9, LSL #16
71030a6f7c  movk x9,#0x3, LSL #32
71030a6f80  mov x10,x9
71030a6f84  str x9,[sp, #0x118]
71030a6f88  mov w9,#0x19
71030a6f8c  ldr q1,[x8]
71030a6f90  strb w9,[sp, #0x124]
71030a6f94  mov w9,#0x100
71030a6f98  mov x11,#0x2b3
71030a6f9c  movk x11,#0xa2c5, LSL #16
71030a6fa0  str w9,[sp, #0x130]
71030a6fa4  orr w9,wzr,#0xe
71030a6fa8  movk x11,#0x15, LSL #32
71030a6fac  orr w8,wzr,#0x3f800000
71030a6fb0  mov w26,#0x3f
71030a6fb4  movk w26,#0x3, LSL #16
71030a6fb8  strb w9,[sp, #0x146]
71030a6fbc  add x9,sp,#0xd0
71030a6fc0  strb wzr,[sp, #0x176]
71030a6fc4  strh wzr,[sp, #0x174]
71030a6fc8  str wzr,[sp, #0x170]
71030a6fcc  str w8,[sp, #0x178]
71030a6fd0  str w8,[sp, #0x110]
71030a6fd4  str w26,[sp, #0x120]
71030a6fd8  stp q0,q0,[sp, #0xd0]
71030a6fdc  str x11,[sp, #0x128]
71030a6fe0  strh w24,[sp, #0x134]
71030a6fe4  strb wzr,[sp, #0x136]
71030a6fe8  strh wzr,[sp, #0x144]
71030a6fec  stur xzr,[x9, #0x6c]
71030a6ff0  stur xzr,[x9, #0x67]
71030a6ff4  str x10,[sp, #0x158]
71030a6ff8  mov x10,#0xfc4f
71030a6ffc  movk x10,#0x25cb, LSL #16
71030a7000  movk x10,#0x4, LSL #32
71030a7004  str xzr,[sp, #0x148]
71030a7008  str wzr,[sp, #0x170]
71030a700c  strh wzr,[sp, #0x150]
71030a7010  strh wzr,[sp, #0x174]
71030a7014  str q1,[sp, #0x160]
71030a7018  stur x8,[x9, #0xac]
71030a701c  str x10,[sp, #0x188]
71030a7020  mov x10,#0x7a80
71030a7024  movk x10,#0xfb99, LSL #16
71030a7028  movk x10,#0x7, LSL #32
71030a702c  str x10,[sp, #0x190]
71030a7030  mov w10,#0xbf800000
71030a7034  strh wzr,[sp, #0x198]
71030a7038  strh wzr,[sp, #0x19c]
71030a703c  str w10,[sp, #0x1a0]
71030a7040  stur xzr,[x9, #0xe4]
71030a7044  stur xzr,[x9, #0xdc]
71030a7048  stur xzr,[x9, #0xd4]
71030a704c  orr w9,wzr,#0x3
71030a7050  str w22,[sp, #0x1bc]
71030a7054  strh w9,[sp, #0x1c0]
71030a7058  str w8,[sp, #0x1c4]
71030a705c  strh wzr,[sp, #0x1c8]
71030a7060  strb wzr,[sp, #0x1ca]
71030a7064  ldr x8,[x19, #0x8c0]
71030a7068  ldr w9,[x8, #0x30]
71030a706c  stp w9,w25,[sp, #0xf0]
71030a7070  ldr w9,[x8, #0x34]
71030a7074  str w9,[sp, #0xf8]
71030a7078  ldr w9,[x8, #0x38]
71030a707c  str w9,[sp, #0xfc]
71030a7080  ldr w9,[x8, #0x3c]
71030a7084  str w9,[sp, #0x100]
71030a7088  ldr w9,[x8, #0x40]
71030a708c  str w9,[sp, #0x104]
71030a7090  ldr w9,[x8, #0x48]
71030a7094  str w9,[sp, #0x10c]
71030a7098  ldrb w9,[x8, #0x4c]
71030a709c  cbz w9,0x71030a70a8
71030a70a0  mov w9,#0x1
71030a70a4  strb w9,[sp, #0x13d]
71030a70a8  orr w9,wzr,#0x7
71030a70ac  strb w9,[sp, #0x122]
71030a70b0  orr w9,wzr,#0x1f
71030a70b4  strb w9,[sp, #0x124]
71030a70b8  ldr x9,[x8, #0x50]
71030a70bc  str x9,[sp, #0x128]
71030a70c0  strb wzr,[sp, #0x130]
71030a70c4  ldr w9,[x8, #0x58]
71030a70c8  strb w9,[sp, #0x131]
71030a70cc  ldr w9,[x8, #0x5c]
71030a70d0  strb w9,[sp, #0x13a]
71030a70d4  ldr w8,[x8, #0x44]
71030a70d8  str w8,[sp, #0x148]
71030a70dc  ldr x0,[x19, #0x10c0]
71030a70e0  ldr x8,[x0, #0x38]
71030a70e4  cbz x8,0x71030a7108
71030a70e8  ldr x0,[x8, #0xa0]
71030a70ec  ldr x8,[x0]
71030a70f0  ldr x8,[x8, #0x68]
71030a70f4  add x3,sp,#0xd0
71030a70f8  mov w1,wzr
71030a70fc  mov w2,wzr
71030a7100  blr x8
71030a7104  ldr x0,[x19, #0x10c0]
71030a7108  bl 0x710313ef20
71030a710c  ldr x20,[x19, #0x10c0]
71030a7110  ldrb w8,[x20, #0x40]
71030a7114  cbz w8,0x71030a7164
71030a7118  ldr x24,[x20, #0x30]
71030a711c  cbz x24,0x71030a7154
71030a7120  ldrb w8,[x24, #0x10]
71030a7124  cbz w8,0x71030a7154
71030a7128  ldrb w8,[x24, #0x50]
71030a712c  strb wzr,[x24, #0x10]
71030a7130  cbz w8,0x71030a7154
71030a7134  ldr x8,[x24]
71030a7138  ldr w0,[x8, #0x8]
71030a713c  bl 0x71003ac560
71030a7140  ldr x8,[x0]
71030a7144  ldr x8,[x8, #0x48]
71030a7148  mov w1,wzr
71030a714c  blr x8
71030a7150  strb wzr,[x24, #0x50]
71030a7154  ldr x8,[x20]
71030a7158  ldr x8,[x8, #0x30]
71030a715c  mov x0,x20
71030a7160  blr x8
71030a7164  mov w1,#0xd0
71030a7168  mov w0,#0x10
71030a716c  strb wzr,[x20, #0x40]
71030a7170  bl 0x710392e290
71030a7174  mov x20,x0
71030a7178  cbnz x0,0x71030a71c4
71030a717c  adrp x8,0x7105332000
71030a7180  ldr x0,[x8, #0xf00]
71030a7184  cbz x0,0x71030a71c0
71030a7188  mov w8,#0xd0
71030a718c  stur wzr,[x29, #-0xc0]
71030a7190  sub x1,x29,#0xc0
71030a7194  str x8,[sp, #0xd0]
71030a7198  ldr x8,[x0]
71030a719c  ldr x8,[x8, #0x30]
71030a71a0  add x2,sp,#0xd0
71030a71a4  blr x8
71030a71a8  tbz w0,#0x0,0x71030a71c0
71030a71ac  mov w1,#0xd0
71030a71b0  mov w0,#0x10
71030a71b4  bl 0x710392e290
71030a71b8  mov x20,x0
71030a71bc  cbnz x0,0x71030a71c4
71030a71c0  mov x20,xzr
71030a71c4  mov w24,#0x4
71030a71c8  mov x8,#0x100000001
71030a71cc  add x2,sp,#0xd0
71030a71d0  mov x0,x20
71030a71d4  mov x1,x19
71030a71d8  str x28,[sp, #0xe0]
71030a71dc  stp x24,x8,[sp, #0xd0]
71030a71e0  bl 0x710313e6a0
71030a71e4  str w24,[x20, #0x44]
71030a71e8  mov w24,#0x1
71030a71ec  strh wzr,[x20, #0x48]
71030a71f0  strb w24,[x20, #0x5c]
71030a71f4  movi v1.2D,#0x0
71030a71f8  stur xzr,[x20, #0x54]
71030a71fc  stur xzr,[x20, #0x4c]
71030a7200  strb wzr,[x20, #0x60]
71030a7204  str x23,[x20]
71030a7208  mov w23,#0x41200000
71030a720c  str xzr,[x20, #0x68]
71030a7210  str w22,[x20, #0x70]
71030a7214  strb wzr,[x20, #0xc0]
71030a7218  stp xzr,xzr,[x20, #0xb0]
71030a721c  stp xzr,xzr,[x20, #0xa0]
71030a7220  stp xzr,xzr,[x20, #0x90]
71030a7224  stp xzr,xzr,[x20, #0x80]
71030a7228  ldr x8,[x19, #0x818]
71030a722c  add x9,x8,#0x4
71030a7230  add x8,x8,#0x8
71030a7234  str x20,[x19, #0x10b8]
71030a7238  ld1 {v1.S}[0],[x9]
71030a723c  ldr q0,[x27]
71030a7240  ld1 {v1.S}[1],[x8]
71030a7244  stur x23,[x29, #-0xa0]
71030a7248  stp q1,q0,[x29, #-0xc0]
71030a724c  ldr x8,[x20, #0x38]
71030a7250  cbz x8,0x71030a727c
71030a7254  ldr x0,[x8, #0x130]
71030a7258  ldr x8,[x0]
71030a725c  ldr x8,[x8, #0x100]
71030a7260  sub x2,x29,#0xc0
71030a7264  mov w1,wzr
71030a7268  mov w3,wzr
71030a726c  mov w4,wzr
71030a7270  mov w5,wzr
71030a7274  blr x8
71030a7278  ldr q0,[x27]
71030a727c  ext v1.16B,v0.16B,v0.16B,0x8
71030a7280  fmov s2,wzr
71030a7284  orr w8,wzr,#0x3f800000
71030a7288  mov v1.S[0x1],v2.S[0x0]
71030a728c  strb wzr,[sp, #0x176]
71030a7290  mov v0.D[0x1],v1.D[0x0]
71030a7294  strh wzr,[sp, #0x174]
71030a7298  str wzr,[sp, #0x170]
71030a729c  str w8,[sp, #0x178]
71030a72a0  adrp x9,0x71052a8000
71030a72a4  stp q0,q0,[sp, #0xd0]
71030a72a8  ldr x9,[x9, #0xa80]
71030a72ac  ldr q0,[x9]
71030a72b0  orr x9,xzr,#0x3f8000003f800000
71030a72b4  str w8,[sp, #0x110]
71030a72b8  stp xzr,x9,[sp, #0x100]
71030a72bc  mov x9,#0x1fca
71030a72c0  movk x9,#0x1ed9, LSL #16
71030a72c4  movk x9,#0x3, LSL #32
71030a72c8  mov x10,x9
71030a72cc  str x9,[sp, #0x118]
71030a72d0  mov w9,#0x19
71030a72d4  strb w9,[sp, #0x124]
71030a72d8  mov x9,#0x2b3
71030a72dc  movk x9,#0xa2c5, LSL #16
71030a72e0  movk x9,#0x15, LSL #32
71030a72e4  str x9,[sp, #0x128]
71030a72e8  mov w9,#0x100
71030a72ec  str w9,[sp, #0x130]
71030a72f0  orr w9,wzr,#0xe
71030a72f4  strb w9,[sp, #0x146]
71030a72f8  add x9,sp,#0xd0
71030a72fc  str w26,[sp, #0x120]
71030a7300  strh w24,[sp, #0x134]
71030a7304  strb wzr,[sp, #0x136]
71030a7308  strh wzr,[sp, #0x144]
71030a730c  stur xzr,[x9, #0x6c]
71030a7310  stur xzr,[x9, #0x67]
71030a7314  str x10,[sp, #0x158]
71030a7318  mov x10,#0xfc4f
71030a731c  movk x10,#0x25cb, LSL #16
71030a7320  str q0,[sp, #0x160]
71030a7324  movk x10,#0x4, LSL #32
71030a7328  str xzr,[sp, #0x148]
71030a732c  str wzr,[sp, #0x170]
71030a7330  strh wzr,[sp, #0x150]
71030a7334  strh wzr,[sp, #0x174]
71030a7338  stur x8,[x9, #0xac]
71030a733c  str x10,[sp, #0x188]
71030a7340  mov x10,#0x7a80
71030a7344  movk x10,#0xfb99, LSL #16
71030a7348  movk x10,#0x7, LSL #32
71030a734c  str x10,[sp, #0x190]
71030a7350  mov w10,#0xbf800000
71030a7354  strh wzr,[sp, #0x198]
71030a7358  strh wzr,[sp, #0x19c]
71030a735c  str w10,[sp, #0x1a0]
71030a7360  stur xzr,[x9, #0xe4]
71030a7364  stur xzr,[x9, #0xdc]
71030a7368  stur xzr,[x9, #0xd4]
71030a736c  orr w9,wzr,#0x3
71030a7370  str w22,[sp, #0x1bc]
71030a7374  str w8,[sp, #0x1c4]
71030a7378  strh wzr,[sp, #0x1c8]
71030a737c  strb wzr,[sp, #0x1ca]
71030a7380  strh w9,[sp, #0x1c0]
71030a7384  ldr x8,[x19, #0x8c0]
71030a7388  ldr w9,[x8, #0x30]
71030a738c  stp w9,w23,[sp, #0xf0]
71030a7390  ldr w9,[x8, #0x34]
71030a7394  str w9,[sp, #0xf8]
71030a7398  ldr w9,[x8, #0x38]
71030a739c  str w9,[sp, #0xfc]
71030a73a0  ldr w9,[x8, #0x3c]
71030a73a4  str w9,[sp, #0x100]
71030a73a8  ldr w9,[x8, #0x40]
71030a73ac  str w9,[sp, #0x104]
71030a73b0  ldr w9,[x8, #0x48]
71030a73b4  str w9,[sp, #0x10c]
71030a73b8  ldrb w9,[x8, #0x4c]
71030a73bc  cbz w9,0x71030a73c8
71030a73c0  mov w9,#0x1
71030a73c4  strb w9,[sp, #0x13d]
71030a73c8  orr w9,wzr,#0x7
71030a73cc  strb w9,[sp, #0x122]
71030a73d0  orr w9,wzr,#0x1f
71030a73d4  strb w9,[sp, #0x124]
71030a73d8  ldr x9,[x8, #0x50]
71030a73dc  str x9,[sp, #0x128]
71030a73e0  strb wzr,[sp, #0x130]
71030a73e4  ldr w9,[x8, #0x58]
71030a73e8  strb w9,[sp, #0x131]
71030a73ec  ldr w9,[x8, #0x5c]
71030a73f0  strb w9,[sp, #0x13a]
71030a73f4  ldr w8,[x8, #0x44]
71030a73f8  str w8,[sp, #0x148]
71030a73fc  ldr x0,[x19, #0x10b8]
71030a7400  ldr x8,[x0, #0x38]
71030a7404  cbz x8,0x71030a7428
71030a7408  ldr x0,[x8, #0xa0]
71030a740c  ldr x8,[x0]
71030a7410  ldr x8,[x8, #0x68]
71030a7414  add x3,sp,#0xd0
71030a7418  mov w1,wzr
71030a741c  mov w2,wzr
71030a7420  blr x8
71030a7424  ldr x0,[x19, #0x10b8]
71030a7428  bl 0x710313ef20
71030a742c  ldr x20,[x19, #0x10b8]
71030a7430  ldrb w8,[x20, #0x40]
71030a7434  cbz w8,0x71030a7484
71030a7438  ldr x22,[x20, #0x30]
71030a743c  cbz x22,0x71030a7474
71030a7440  ldrb w8,[x22, #0x10]
71030a7444  cbz w8,0x71030a7474
71030a7448  ldrb w8,[x22, #0x50]
71030a744c  strb wzr,[x22, #0x10]
71030a7450  cbz w8,0x71030a7474
71030a7454  ldr x8,[x22]
71030a7458  ldr w0,[x8, #0x8]
71030a745c  bl 0x71003ac560
71030a7460  ldr x8,[x0]
71030a7464  ldr x8,[x8, #0x48]
71030a7468  mov w1,wzr
71030a746c  blr x8
71030a7470  strb wzr,[x22, #0x50]
71030a7474  ldr x8,[x20]
71030a7478  ldr x8,[x8, #0x30]
71030a747c  mov x0,x20
71030a7480  blr x8
71030a7484  strb wzr,[x20, #0x40]
71030a7488  ldr x8,[x19, #0x308]
71030a748c  ldp x9,x8,[x8, #0xf8]
71030a7490  str x8,[x19, #0x1180]
71030a7494  str x9,[x19, #0x1178]
71030a7498  ldr q0,[x27]
71030a749c  orr x8,xzr,#0x300000000
71030a74a0  stp q0,q0,[sp, #0x40]
71030a74a4  str x8,[sp, #0x60]
71030a74a8  ldrb w8,[x19, #0x18]
71030a74ac  cbz w8,0x71030a7bd8
71030a74b0  mov w1,#0x68
71030a74b4  mov w0,#0x10
71030a74b8  bl 0x710392e290
71030a74bc  mov x20,x0
71030a74c0  cbnz x0,0x71030a750c
71030a74c4  adrp x8,0x7105332000
71030a74c8  ldr x0,[x8, #0xf00]
71030a74cc  cbz x0,0x71030a7508
71030a74d0  mov w8,#0x68
71030a74d4  stur wzr,[x29, #-0xc0]
71030a74d8  sub x1,x29,#0xc0
71030a74dc  str x8,[sp, #0xd0]
71030a74e0  ldr x8,[x0]
71030a74e4  ldr x8,[x8, #0x30]
71030a74e8  add x2,sp,#0xd0
71030a74ec  blr x8
71030a74f0  tbz w0,#0x0,0x71030a7508
71030a74f4  mov w1,#0x68
71030a74f8  mov w0,#0x10
71030a74fc  bl 0x710392e290
71030a7500  mov x20,x0
71030a7504  cbnz x0,0x71030a750c
71030a7508  mov x20,xzr
71030a750c  mov w23,#0x1
71030a7510  mov x8,#0x100000001
71030a7514  add x2,sp,#0xd0
71030a7518  mov x0,x20
71030a751c  mov x1,x19
71030a7520  str x28,[sp, #0xe0]
71030a7524  stp x23,x8,[sp, #0xd0]
71030a7528  bl 0x710313e6a0
71030a752c  adrp x22,0x7105178000
71030a7530  add x22,x22,#0xa88
71030a7534  str x22,[x20]
71030a7538  str w23,[x20, #0x44]
71030a753c  strh wzr,[x20, #0x48]
71030a7540  strb w23,[x20, #0x5c]
71030a7544  stur xzr,[x20, #0x54]
71030a7548  stur xzr,[x20, #0x4c]
71030a754c  strb wzr,[x20, #0x60]
71030a7550  str x20,[x19, #0x10d8]
71030a7554  ldr x8,[x20, #0x38]
71030a7558  cbz x8,0x71030a75f0
71030a755c  ldr x0,[x8, #0x130]
71030a7560  ldr x8,[x0]
71030a7564  ldr x8,[x8, #0x1a0]
71030a7568  blr x8
71030a756c  ldr w8,[x0, #0x48]
71030a7570  ldr x9,[x0, #0x8]
71030a7574  and w8,w8,#0xffffe07f
71030a7578  orr w8,w8,#0x1000
71030a757c  str w8,[x0, #0x48]
71030a7580  ldr w8,[x9, #0x10]
71030a7584  cmp w8,#0x1
71030a7588  b.lt 0x71030a75f0
71030a758c  ldr x11,[x0, #0x40]
71030a7590  mov x8,xzr
71030a7594  orr w10,wzr,#0x30
71030a7598  lsl x12,x8,#0x5
71030a759c  ldr w13,[x11, x12, LSL #0x0]
71030a75a0  cmp w13,#0x1
71030a75a4  b.lt 0x71030a75dc
71030a75a8  mov x13,xzr
71030a75ac  ldr x14,[x9, #0x18]
71030a75b0  add x14,x14,x10
71030a75b4  ldr x14,[x14, x13, LSL #0x3]
71030a75b8  cbz x14,0x71030a75cc
71030a75bc  ldr x9,[x0, #0x48]
71030a75c0  str x9,[x14, #0x8]
71030a75c4  ldr x11,[x0, #0x40]
71030a75c8  ldr x9,[x0, #0x8]
71030a75cc  ldrsw x14,[x11, x12, LSL #0x0]
71030a75d0  add x13,x13,#0x1
71030a75d4  cmp x13,x14
71030a75d8  b.lt 0x71030a75ac
71030a75dc  ldrsw x12,[x9, #0x10]
71030a75e0  add x8,x8,#0x1
71030a75e4  add x10,x10,#0x2d0
71030a75e8  cmp x8,x12
71030a75ec  b.lt 0x71030a7598
71030a75f0  movi v0.2D,#0x0
71030a75f4  ldr x8,[x19, #0x890]
71030a75f8  mov v1.16B,v0.16B
71030a75fc  add x10,x8,#0x4
71030a7600  ld1 {v1.S}[0],[x10]
71030a7604  add x10,x8,#0x8
71030a7608  ld1 {v1.S}[1],[x10]
71030a760c  add x10,x8,#0xc
71030a7610  ld1 {v1.S}[2],[x10]
71030a7614  ldr w9,[x8]
71030a7618  cbz w9,0x71030a7644
71030a761c  add x9,x8,#0x10
71030a7620  ld1 {v0.S}[0],[x9]
71030a7624  add x10,x8,#0x14
71030a7628  ld1 {v0.S}[1],[x10]
71030a762c  add x9,x8,#0x18
71030a7630  ldr w8,[x8, #0x1c]
71030a7634  ld1 {v0.S}[2],[x9]
71030a7638  mov w9,#0x2
71030a763c  str q1,[sp, #0x40]
71030a7640  b 0x71030a7660
71030a7644  ldr q0,[x27]
71030a7648  ldr w8,[x8, #0x1c]
71030a764c  fmov s2,wzr
71030a7650  str q1,[sp, #0x40]
71030a7654  ext v1.16B,v0.16B,v0.16B,0x8
71030a7658  mov v1.S[0x1],v2.S[0x0]
71030a765c  mov v0.D[0x1],v1.D[0x0]
71030a7660  str q0,[sp, #0x50]
71030a7664  stp w8,w9,[sp, #0x60]
71030a7668  ldr x8,[x19, #0x10d8]
71030a766c  ldr x8,[x8, #0x38]
71030a7670  ldr x0,[x8, #0x130]
71030a7674  ldr x8,[x0]
71030a7678  ldr x8,[x8, #0x58]
71030a767c  add x2,sp,#0x40
71030a7680  mov w1,wzr
71030a7684  mov w3,wzr
71030a7688  mov w4,wzr
71030a768c  mov w5,wzr
71030a7690  blr x8
71030a7694  ldr x8,[x19, #0x10d8]
71030a7698  ldr x8,[x8, #0x38]
71030a769c  ldr x0,[x8, #0x130]
71030a76a0  ldr x8,[x0]
71030a76a4  ldr x8,[x8, #0x1a0]
71030a76a8  blr x8
71030a76ac  ldr x9,[x0, #0x30]
71030a76b0  cbz x9,0x71030a7708
71030a76b4  ldr x8,[x0, #0x38]
71030a76b8  mov w10,#0x2d0
71030a76bc  madd x9,x9,x10,x8
71030a76c0  adrp x10,0x710313f000
71030a76c4  add x10,x10,#0x320
71030a76c8  ldr w12,[x8, #0xc]
71030a76cc  cmp w12,#0x1
71030a76d0  b.lt 0x71030a76fc
71030a76d4  ldrsw x11,[x8, #0x8]
71030a76d8  add w12,w12,w11
71030a76dc  sxtw x12,w12
71030a76e0  add x13,x8,x11, LSL #0x3
71030a76e4  ldr x13,[x13, #0x30]
71030a76e8  cbz x13,0x71030a76f0
71030a76ec  str x10,[x13, #0x30]
71030a76f0  add x11,x11,#0x1
71030a76f4  cmp x11,x12
71030a76f8  b.lt 0x71030a76e0
71030a76fc  add x8,x8,#0x2d0
71030a7700  cmp x8,x9
71030a7704  b.ne 0x71030a76c8
71030a7708  ldr x0,[x19, #0x10d8]
71030a770c  bl 0x710313ef20
71030a7710  ldr x0,[x19, #0x10d8]
71030a7714  bl 0x710313ef20
71030a7718  mov w1,#0x68
71030a771c  mov w0,#0x10
71030a7720  bl 0x710392e290
71030a7724  mov x20,x0
71030a7728  cbnz x0,0x71030a7774
71030a772c  adrp x8,0x7105332000
71030a7730  ldr x0,[x8, #0xf00]
71030a7734  cbz x0,0x71030a7770
71030a7738  mov w8,#0x68
71030a773c  stur wzr,[x29, #-0xc0]
71030a7740  sub x1,x29,#0xc0
71030a7744  str x8,[sp, #0xd0]
71030a7748  ldr x8,[x0]
71030a774c  ldr x8,[x8, #0x30]
71030a7750  add x2,sp,#0xd0
71030a7754  blr x8
71030a7758  tbz w0,#0x0,0x71030a7770
71030a775c  mov w1,#0x68
71030a7760  mov w0,#0x10
71030a7764  bl 0x710392e290
71030a7768  mov x20,x0
71030a776c  cbnz x0,0x71030a7774
71030a7770  mov x20,xzr
71030a7774  mov w23,#0x1
71030a7778  mov x8,#0x100000001
71030a777c  add x2,sp,#0xd0
71030a7780  mov x0,x20
71030a7784  mov x1,x19
71030a7788  str x28,[sp, #0xe0]
71030a778c  stp x23,x8,[sp, #0xd0]
71030a7790  bl 0x710313e6a0
71030a7794  str x22,[x20]
71030a7798  str w23,[x20, #0x44]
71030a779c  strh wzr,[x20, #0x48]
71030a77a0  strb w23,[x20, #0x5c]
71030a77a4  stur xzr,[x20, #0x54]
71030a77a8  stur xzr,[x20, #0x4c]
71030a77ac  strb wzr,[x20, #0x60]
71030a77b0  str x20,[x19, #0x10e0]
71030a77b4  ldr x8,[x20, #0x38]
71030a77b8  cbz x8,0x71030a7850
71030a77bc  ldr x0,[x8, #0x130]
71030a77c0  ldr x8,[x0]
71030a77c4  ldr x8,[x8, #0x1a0]
71030a77c8  blr x8
71030a77cc  ldr w8,[x0, #0x48]
71030a77d0  ldr x9,[x0, #0x8]
71030a77d4  and w8,w8,#0xffffe07f
71030a77d8  orr w8,w8,#0x1000
71030a77dc  str w8,[x0, #0x48]
71030a77e0  ldr w8,[x9, #0x10]
71030a77e4  cmp w8,#0x1
71030a77e8  b.lt 0x71030a7850
71030a77ec  ldr x11,[x0, #0x40]
71030a77f0  mov x8,xzr
71030a77f4  orr w10,wzr,#0x30
71030a77f8  lsl x12,x8,#0x5
71030a77fc  ldr w13,[x11, x12, LSL #0x0]
71030a7800  cmp w13,#0x1
71030a7804  b.lt 0x71030a783c
71030a7808  mov x13,xzr
71030a780c  ldr x14,[x9, #0x18]
71030a7810  add x14,x14,x10
71030a7814  ldr x14,[x14, x13, LSL #0x3]
71030a7818  cbz x14,0x71030a782c
71030a781c  ldr x9,[x0, #0x48]
71030a7820  str x9,[x14, #0x8]
71030a7824  ldr x11,[x0, #0x40]
71030a7828  ldr x9,[x0, #0x8]
71030a782c  ldrsw x14,[x11, x12, LSL #0x0]
71030a7830  add x13,x13,#0x1
71030a7834  cmp x13,x14
71030a7838  b.lt 0x71030a780c
71030a783c  ldrsw x12,[x9, #0x10]
71030a7840  add x8,x8,#0x1
71030a7844  add x10,x10,#0x2d0
71030a7848  cmp x8,x12
71030a784c  b.lt 0x71030a77f8
71030a7850  movi v0.2D,#0x0
71030a7854  ldr x8,[x19, #0x890]
71030a7858  mov v1.16B,v0.16B
71030a785c  add x10,x8,#0x24
71030a7860  ld1 {v1.S}[0],[x10]
71030a7864  add x10,x8,#0x28
71030a7868  ld1 {v1.S}[1],[x10]
71030a786c  add x10,x8,#0x2c
71030a7870  ld1 {v1.S}[2],[x10]
71030a7874  ldr w9,[x8, #0x20]
71030a7878  cbz w9,0x71030a78a4
71030a787c  add x9,x8,#0x30
71030a7880  ld1 {v0.S}[0],[x9]
71030a7884  add x10,x8,#0x34
71030a7888  ld1 {v0.S}[1],[x10]
71030a788c  add x9,x8,#0x38
71030a7890  ldr w8,[x8, #0x3c]
71030a7894  ld1 {v0.S}[2],[x9]
71030a7898  mov w9,#0x2
71030a789c  str q1,[sp, #0x40]
71030a78a0  b 0x71030a78c0
71030a78a4  ldr q0,[x27]
71030a78a8  ldr w8,[x8, #0x3c]
71030a78ac  fmov s2,wzr
71030a78b0  str q1,[sp, #0x40]
71030a78b4  ext v1.16B,v0.16B,v0.16B,0x8
71030a78b8  mov v1.S[0x1],v2.S[0x0]
71030a78bc  mov v0.D[0x1],v1.D[0x0]
71030a78c0  str q0,[sp, #0x50]
71030a78c4  stp w8,w9,[sp, #0x60]
71030a78c8  ldr x8,[x19, #0x10e0]
71030a78cc  ldr x8,[x8, #0x38]
71030a78d0  ldr x0,[x8, #0x130]
71030a78d4  ldr x8,[x0]
71030a78d8  ldr x8,[x8, #0x58]
71030a78dc  add x2,sp,#0x40
71030a78e0  mov w1,wzr
71030a78e4  mov w3,wzr
71030a78e8  mov w4,wzr
71030a78ec  mov w5,wzr
71030a78f0  blr x8
71030a78f4  ldr x8,[x19, #0x10e0]
71030a78f8  ldr x8,[x8, #0x38]
71030a78fc  ldr x0,[x8, #0x130]
71030a7900  ldr x8,[x0]
71030a7904  ldr x8,[x8, #0x1a0]
71030a7908  blr x8
71030a790c  ldr x9,[x0, #0x30]
71030a7910  cbz x9,0x71030a7968
71030a7914  ldr x8,[x0, #0x38]
71030a7918  mov w10,#0x2d0
71030a791c  madd x9,x9,x10,x8
71030a7920  adrp x10,0x710313f000
71030a7924  add x10,x10,#0x320
71030a7928  ldr w12,[x8, #0xc]
71030a792c  cmp w12,#0x1
71030a7930  b.lt 0x71030a795c
71030a7934  ldrsw x11,[x8, #0x8]
71030a7938  add w12,w12,w11
71030a793c  sxtw x12,w12
71030a7940  add x13,x8,x11, LSL #0x3
71030a7944  ldr x13,[x13, #0x30]
71030a7948  cbz x13,0x71030a7950
71030a794c  str x10,[x13, #0x30]
71030a7950  add x11,x11,#0x1
71030a7954  cmp x11,x12
71030a7958  b.lt 0x71030a7940
71030a795c  add x8,x8,#0x2d0
71030a7960  cmp x8,x9
71030a7964  b.ne 0x71030a7928
71030a7968  ldr x0,[x19, #0x10e0]
71030a796c  bl 0x710313ef20
71030a7970  ldr x0,[x19, #0x10e0]
71030a7974  bl 0x710313ef20
71030a7978  mov w1,#0x68
71030a797c  mov w0,#0x10
71030a7980  bl 0x710392e290
71030a7984  mov x20,x0
71030a7988  cbnz x0,0x71030a79d4
71030a798c  adrp x8,0x7105332000
71030a7990  ldr x0,[x8, #0xf00]
71030a7994  cbz x0,0x71030a79d0
71030a7998  mov w8,#0x68
71030a799c  stur wzr,[x29, #-0xc0]
71030a79a0  sub x1,x29,#0xc0
71030a79a4  str x8,[sp, #0xd0]
71030a79a8  ldr x8,[x0]
71030a79ac  ldr x8,[x8, #0x30]
71030a79b0  add x2,sp,#0xd0
71030a79b4  blr x8
71030a79b8  tbz w0,#0x0,0x71030a79d0
71030a79bc  mov w1,#0x68
71030a79c0  mov w0,#0x10
71030a79c4  bl 0x710392e290
71030a79c8  mov x20,x0
71030a79cc  cbnz x0,0x71030a79d4
71030a79d0  mov x20,xzr
71030a79d4  mov w23,#0x1
71030a79d8  mov x8,#0x100000001
71030a79dc  add x2,sp,#0xd0
71030a79e0  mov x0,x20
71030a79e4  mov x1,x19
71030a79e8  str x28,[sp, #0xe0]
71030a79ec  stp x23,x8,[sp, #0xd0]
71030a79f0  bl 0x710313e6a0
71030a79f4  str x22,[x20]
71030a79f8  str w23,[x20, #0x44]
71030a79fc  strh wzr,[x20, #0x48]
71030a7a00  strb w23,[x20, #0x5c]
71030a7a04  stur xzr,[x20, #0x54]
71030a7a08  stur xzr,[x20, #0x4c]
71030a7a0c  strb wzr,[x20, #0x60]
71030a7a10  str x20,[x19, #0x10e8]
71030a7a14  ldr x8,[x20, #0x38]
71030a7a18  cbz x8,0x71030a7ab0
71030a7a1c  ldr x0,[x8, #0x130]
71030a7a20  ldr x8,[x0]
71030a7a24  ldr x8,[x8, #0x1a0]
71030a7a28  blr x8
71030a7a2c  ldr w8,[x0, #0x48]
71030a7a30  ldr x9,[x0, #0x8]
71030a7a34  and w8,w8,#0xffffe07f
71030a7a38  orr w8,w8,#0x1000
71030a7a3c  str w8,[x0, #0x48]
71030a7a40  ldr w8,[x9, #0x10]
71030a7a44  cmp w8,#0x1
71030a7a48  b.lt 0x71030a7ab0
71030a7a4c  ldr x11,[x0, #0x40]
71030a7a50  mov x8,xzr
71030a7a54  orr w10,wzr,#0x30
71030a7a58  lsl x12,x8,#0x5
71030a7a5c  ldr w13,[x11, x12, LSL #0x0]
71030a7a60  cmp w13,#0x1
71030a7a64  b.lt 0x71030a7a9c
71030a7a68  mov x13,xzr
71030a7a6c  ldr x14,[x9, #0x18]
71030a7a70  add x14,x14,x10
71030a7a74  ldr x14,[x14, x13, LSL #0x3]
71030a7a78  cbz x14,0x71030a7a8c
71030a7a7c  ldr x9,[x0, #0x48]
71030a7a80  str x9,[x14, #0x8]
71030a7a84  ldr x11,[x0, #0x40]
71030a7a88  ldr x9,[x0, #0x8]
71030a7a8c  ldrsw x14,[x11, x12, LSL #0x0]
71030a7a90  add x13,x13,#0x1
71030a7a94  cmp x13,x14
71030a7a98  b.lt 0x71030a7a6c
71030a7a9c  ldrsw x12,[x9, #0x10]
71030a7aa0  add x8,x8,#0x1
71030a7aa4  add x10,x10,#0x2d0
71030a7aa8  cmp x8,x12
71030a7aac  b.lt 0x71030a7a58
71030a7ab0  movi v0.2D,#0x0
71030a7ab4  ldr x8,[x19, #0x890]
71030a7ab8  mov v1.16B,v0.16B
71030a7abc  add x10,x8,#0x44
71030a7ac0  ld1 {v1.S}[0],[x10]
71030a7ac4  add x10,x8,#0x48
71030a7ac8  ld1 {v1.S}[1],[x10]
71030a7acc  add x10,x8,#0x4c
71030a7ad0  ld1 {v1.S}[2],[x10]
71030a7ad4  ldr w9,[x8, #0x40]
71030a7ad8  cbz w9,0x71030a7b04
71030a7adc  add x9,x8,#0x50
71030a7ae0  ld1 {v0.S}[0],[x9]
71030a7ae4  add x10,x8,#0x54
71030a7ae8  ld1 {v0.S}[1],[x10]
71030a7aec  add x9,x8,#0x58
71030a7af0  ldr w8,[x8, #0x5c]
71030a7af4  ld1 {v0.S}[2],[x9]
71030a7af8  mov w9,#0x2
71030a7afc  str q1,[sp, #0x40]
71030a7b00  b 0x71030a7b20
71030a7b04  ldr q0,[x27]
71030a7b08  ldr w8,[x8, #0x5c]
71030a7b0c  fmov s2,wzr
71030a7b10  str q1,[sp, #0x40]
71030a7b14  ext v1.16B,v0.16B,v0.16B,0x8
71030a7b18  mov v1.S[0x1],v2.S[0x0]
71030a7b1c  mov v0.D[0x1],v1.D[0x0]
71030a7b20  str q0,[sp, #0x50]
71030a7b24  stp w8,w9,[sp, #0x60]
71030a7b28  ldr x8,[x19, #0x10e8]
71030a7b2c  ldr x8,[x8, #0x38]
71030a7b30  ldr x0,[x8, #0x130]
71030a7b34  ldr x8,[x0]
71030a7b38  ldr x8,[x8, #0x58]
71030a7b3c  add x2,sp,#0x40
71030a7b40  mov w1,wzr
71030a7b44  mov w3,wzr
71030a7b48  mov w4,wzr
71030a7b4c  mov w5,wzr
71030a7b50  blr x8
71030a7b54  ldr x8,[x19, #0x10e8]
71030a7b58  ldr x8,[x8, #0x38]
71030a7b5c  ldr x0,[x8, #0x130]
71030a7b60  ldr x8,[x0]
71030a7b64  ldr x8,[x8, #0x1a0]
71030a7b68  blr x8
71030a7b6c  ldr x9,[x0, #0x30]
71030a7b70  cbz x9,0x71030a7bc8
71030a7b74  ldr x8,[x0, #0x38]
71030a7b78  mov w10,#0x2d0
71030a7b7c  madd x9,x9,x10,x8
71030a7b80  adrp x10,0x710313f000
71030a7b84  add x10,x10,#0x320
71030a7b88  ldr w12,[x8, #0xc]
71030a7b8c  cmp w12,#0x1
71030a7b90  b.lt 0x71030a7bbc
71030a7b94  ldrsw x11,[x8, #0x8]
71030a7b98  add w12,w12,w11
71030a7b9c  sxtw x12,w12
71030a7ba0  add x13,x8,x11, LSL #0x3
71030a7ba4  ldr x13,[x13, #0x30]
71030a7ba8  cbz x13,0x71030a7bb0
71030a7bac  str x10,[x13, #0x30]
71030a7bb0  add x11,x11,#0x1
71030a7bb4  cmp x11,x12
71030a7bb8  b.lt 0x71030a7ba0
71030a7bbc  add x8,x8,#0x2d0
71030a7bc0  cmp x8,x9
71030a7bc4  b.ne 0x71030a7b88
71030a7bc8  ldr x0,[x19, #0x10e8]
71030a7bcc  bl 0x710313ef20
71030a7bd0  ldr x0,[x19, #0x10e8]
71030a7bd4  bl 0x710313ef20
71030a7bd8  mov w1,#0x68
71030a7bdc  mov w0,#0x10
71030a7be0  bl 0x710392e290
71030a7be4  mov x20,x0
71030a7be8  cbnz x0,0x71030a7c34
71030a7bec  adrp x8,0x7105332000
71030a7bf0  ldr x0,[x8, #0xf00]
71030a7bf4  cbz x0,0x71030a7c30
71030a7bf8  mov w8,#0x68
71030a7bfc  stur wzr,[x29, #-0xc0]
71030a7c00  sub x1,x29,#0xc0
71030a7c04  str x8,[sp, #0xd0]
71030a7c08  ldr x8,[x0]
71030a7c0c  ldr x8,[x8, #0x30]
71030a7c10  add x2,sp,#0xd0
71030a7c14  blr x8
71030a7c18  tbz w0,#0x0,0x71030a7c30
71030a7c1c  mov w1,#0x68
71030a7c20  mov w0,#0x10
71030a7c24  bl 0x710392e290
71030a7c28  mov x20,x0
71030a7c2c  cbnz x0,0x71030a7c34
71030a7c30  mov x20,xzr
71030a7c34  mov w23,#0x1
71030a7c38  mov x8,#0x100000001
71030a7c3c  add x2,sp,#0xd0
71030a7c40  mov x0,x20
71030a7c44  mov x1,x19
71030a7c48  str x28,[sp, #0xe0]
71030a7c4c  mov w22,#0x41200000
71030a7c50  stp x23,x8,[sp, #0xd0]
71030a7c54  bl 0x710313e6a0
71030a7c58  adrp x26,0x7105178000
71030a7c5c  add x26,x26,#0xa88
71030a7c60  str x26,[x20]
71030a7c64  str w23,[x20, #0x44]
71030a7c68  strh wzr,[x20, #0x48]
71030a7c6c  movi v0.2D,#0x0
71030a7c70  strb w23,[x20, #0x5c]
71030a7c74  fmov s2,wzr
71030a7c78  stur xzr,[x20, #0x54]
71030a7c7c  stur xzr,[x20, #0x4c]
71030a7c80  strb wzr,[x20, #0x60]
71030a7c84  ldr x8,[x19, #0x7e0]
71030a7c88  add x9,x8,#0x4
71030a7c8c  str x20,[x19, #0x10f0]
71030a7c90  add x8,x8,#0x8
71030a7c94  ld1 {v0.S}[0],[x9]
71030a7c98  ldr q1,[x27]
71030a7c9c  ld1 {v0.S}[1],[x8]
71030a7ca0  str x22,[sp, #0x60]
71030a7ca4  str q0,[sp, #0x40]
71030a7ca8  ext v0.16B,v1.16B,v1.16B,0x8
71030a7cac  mov v0.S[0x1],v2.S[0x0]
71030a7cb0  mov v1.D[0x1],v0.D[0x0]
71030a7cb4  str q1,[sp, #0x50]
71030a7cb8  ldr x8,[x20, #0x38]
71030a7cbc  cbz x8,0x71030a7d54
71030a7cc0  ldr x0,[x8, #0x130]
71030a7cc4  ldr x8,[x0]
71030a7cc8  ldr x8,[x8, #0x1a0]
71030a7ccc  blr x8
71030a7cd0  ldr w8,[x0, #0x48]
71030a7cd4  ldr x9,[x0, #0x8]
71030a7cd8  and w8,w8,#0xffffe07f
71030a7cdc  orr w8,w8,#0x1000
71030a7ce0  str w8,[x0, #0x48]
71030a7ce4  ldr w8,[x9, #0x10]
71030a7ce8  cmp w8,#0x1
71030a7cec  b.lt 0x71030a7d54
71030a7cf0  ldr x11,[x0, #0x40]
71030a7cf4  mov x8,xzr
71030a7cf8  orr w10,wzr,#0x30
71030a7cfc  lsl x12,x8,#0x5
71030a7d00  ldr w13,[x11, x12, LSL #0x0]
71030a7d04  cmp w13,#0x1
71030a7d08  b.lt 0x71030a7d40
71030a7d0c  mov x13,xzr
71030a7d10  ldr x14,[x9, #0x18]
71030a7d14  add x14,x14,x10
71030a7d18  ldr x14,[x14, x13, LSL #0x3]
71030a7d1c  cbz x14,0x71030a7d30
71030a7d20  ldr x9,[x0, #0x48]
71030a7d24  str x9,[x14, #0x8]
71030a7d28  ldr x11,[x0, #0x40]
71030a7d2c  ldr x9,[x0, #0x8]
71030a7d30  ldrsw x14,[x11, x12, LSL #0x0]
71030a7d34  add x13,x13,#0x1
71030a7d38  cmp x13,x14
71030a7d3c  b.lt 0x71030a7d10
71030a7d40  ldrsw x12,[x9, #0x10]
71030a7d44  add x8,x8,#0x1
71030a7d48  add x10,x10,#0x2d0
71030a7d4c  cmp x8,x12
71030a7d50  b.lt 0x71030a7cfc
71030a7d54  ldr x8,[x19, #0x10f0]
71030a7d58  ldr x8,[x8, #0x38]
71030a7d5c  ldr x0,[x8, #0x130]
71030a7d60  ldr x8,[x0]
71030a7d64  ldr x8,[x8, #0x58]
71030a7d68  add x2,sp,#0x40
71030a7d6c  mov w1,wzr
71030a7d70  mov w3,wzr
71030a7d74  mov w4,wzr
71030a7d78  mov w5,wzr
71030a7d7c  blr x8
71030a7d80  ldr x8,[x19, #0x10f0]
71030a7d84  ldr x8,[x8, #0x38]
71030a7d88  ldr x0,[x8, #0x130]
71030a7d8c  ldr x8,[x0]
71030a7d90  ldr x8,[x8, #0x1a0]
71030a7d94  blr x8
71030a7d98  ldr x9,[x0, #0x30]
71030a7d9c  cbz x9,0x71030a7df4
71030a7da0  ldr x8,[x0, #0x38]
71030a7da4  mov w10,#0x2d0
71030a7da8  madd x9,x9,x10,x8
71030a7dac  adrp x10,0x710313f000
71030a7db0  add x10,x10,#0x320
71030a7db4  ldr w12,[x8, #0xc]
71030a7db8  cmp w12,#0x1
71030a7dbc  b.lt 0x71030a7de8
71030a7dc0  ldrsw x11,[x8, #0x8]
71030a7dc4  add w12,w12,w11
71030a7dc8  sxtw x12,w12
71030a7dcc  add x13,x8,x11, LSL #0x3
71030a7dd0  ldr x13,[x13, #0x30]
71030a7dd4  cbz x13,0x71030a7ddc
71030a7dd8  str x10,[x13, #0x30]
71030a7ddc  add x11,x11,#0x1
71030a7de0  cmp x11,x12
71030a7de4  b.lt 0x71030a7dcc
71030a7de8  add x8,x8,#0x2d0
71030a7dec  cmp x8,x9
71030a7df0  b.ne 0x71030a7db4
71030a7df4  ldr x0,[x19, #0x10f0]
71030a7df8  bl 0x710313ef20
71030a7dfc  ldr x20,[x19, #0x10f0]
71030a7e00  ldrb w8,[x20, #0x40]
71030a7e04  cbz w8,0x71030a7e54
71030a7e08  ldr x23,[x20, #0x30]
71030a7e0c  cbz x23,0x71030a7e44
71030a7e10  ldrb w8,[x23, #0x10]
71030a7e14  cbz w8,0x71030a7e44
71030a7e18  ldrb w8,[x23, #0x50]
71030a7e1c  strb wzr,[x23, #0x10]
71030a7e20  cbz w8,0x71030a7e44
71030a7e24  ldr x8,[x23]
71030a7e28  ldr w0,[x8, #0x8]
71030a7e2c  bl 0x71003ac560
71030a7e30  ldr x8,[x0]
71030a7e34  ldr x8,[x8, #0x48]
71030a7e38  mov w1,wzr
71030a7e3c  blr x8
71030a7e40  strb wzr,[x23, #0x50]
71030a7e44  ldr x8,[x20]
71030a7e48  ldr x8,[x8, #0x30]
71030a7e4c  mov x0,x20
71030a7e50  blr x8
71030a7e54  mov w1,#0x68
71030a7e58  mov w0,#0x10
71030a7e5c  strb wzr,[x20, #0x40]
71030a7e60  bl 0x710392e290
71030a7e64  mov x20,x0
71030a7e68  cbnz x0,0x71030a7eb4
71030a7e6c  adrp x8,0x7105332000
71030a7e70  ldr x0,[x8, #0xf00]
71030a7e74  cbz x0,0x71030a7eb0
71030a7e78  mov w8,#0x68
71030a7e7c  stur wzr,[x29, #-0xc0]
71030a7e80  sub x1,x29,#0xc0
71030a7e84  str x8,[sp, #0xd0]
71030a7e88  ldr x8,[x0]
71030a7e8c  ldr x8,[x8, #0x30]
71030a7e90  add x2,sp,#0xd0
71030a7e94  blr x8
71030a7e98  tbz w0,#0x0,0x71030a7eb0
71030a7e9c  mov w1,#0x68
71030a7ea0  mov w0,#0x10
71030a7ea4  bl 0x710392e290
71030a7ea8  mov x20,x0
71030a7eac  cbnz x0,0x71030a7eb4
71030a7eb0  mov x20,xzr
71030a7eb4  mov w23,#0x1
71030a7eb8  mov x8,#0x100000001
71030a7ebc  add x2,sp,#0xd0
71030a7ec0  mov x0,x20
71030a7ec4  mov x1,x19
71030a7ec8  str x28,[sp, #0xe0]
71030a7ecc  stp x23,x8,[sp, #0xd0]
71030a7ed0  bl 0x710313e6a0
71030a7ed4  str x26,[x20]
71030a7ed8  str w23,[x20, #0x44]
71030a7edc  movi v0.2D,#0x0
71030a7ee0  strh wzr,[x20, #0x48]
71030a7ee4  fmov s2,wzr
71030a7ee8  strb w23,[x20, #0x5c]
71030a7eec  stur xzr,[x20, #0x54]
71030a7ef0  stur xzr,[x20, #0x4c]
71030a7ef4  strb wzr,[x20, #0x60]
71030a7ef8  ldr x8,[x19, #0x7f8]
71030a7efc  add x9,x8,#0x4
71030a7f00  add x8,x8,#0x8
71030a7f04  str x20,[x19, #0x10f8]
71030a7f08  ldr q1,[x27]
71030a7f0c  ld1 {v0.S}[0],[x9]
71030a7f10  ld1 {v0.S}[1],[x8]
71030a7f14  stp w22,wzr,[sp, #0x60]
71030a7f18  str q0,[sp, #0x40]
71030a7f1c  ext v0.16B,v1.16B,v1.16B,0x8
71030a7f20  mov v0.S[0x1],v2.S[0x0]
71030a7f24  mov v1.D[0x1],v0.D[0x0]
71030a7f28  str q1,[sp, #0x50]
71030a7f2c  ldr x8,[x20, #0x38]
71030a7f30  cbz x8,0x71030a7fc8
71030a7f34  ldr x0,[x8, #0x130]
71030a7f38  ldr x8,[x0]
71030a7f3c  ldr x8,[x8, #0x1a0]
71030a7f40  blr x8
71030a7f44  ldr w8,[x0, #0x48]
71030a7f48  ldr x9,[x0, #0x8]
71030a7f4c  and w8,w8,#0xffffe07f
71030a7f50  orr w8,w8,#0x1000
71030a7f54  str w8,[x0, #0x48]
71030a7f58  ldr w8,[x9, #0x10]
71030a7f5c  cmp w8,#0x1
71030a7f60  b.lt 0x71030a7fc8
71030a7f64  ldr x11,[x0, #0x40]
71030a7f68  mov x8,xzr
71030a7f6c  orr w10,wzr,#0x30
71030a7f70  lsl x12,x8,#0x5
71030a7f74  ldr w13,[x11, x12, LSL #0x0]
71030a7f78  cmp w13,#0x1
71030a7f7c  b.lt 0x71030a7fb4
71030a7f80  mov x13,xzr
71030a7f84  ldr x14,[x9, #0x18]
71030a7f88  add x14,x14,x10
71030a7f8c  ldr x14,[x14, x13, LSL #0x3]
71030a7f90  cbz x14,0x71030a7fa4
71030a7f94  ldr x9,[x0, #0x48]
71030a7f98  str x9,[x14, #0x8]
71030a7f9c  ldr x11,[x0, #0x40]
71030a7fa0  ldr x9,[x0, #0x8]
71030a7fa4  ldrsw x14,[x11, x12, LSL #0x0]
71030a7fa8  add x13,x13,#0x1
71030a7fac  cmp x13,x14
71030a7fb0  b.lt 0x71030a7f84
71030a7fb4  ldrsw x12,[x9, #0x10]
71030a7fb8  add x8,x8,#0x1
71030a7fbc  add x10,x10,#0x2d0
71030a7fc0  cmp x8,x12
71030a7fc4  b.lt 0x71030a7f70
71030a7fc8  ldr x8,[x19, #0x10f8]
71030a7fcc  ldr x8,[x8, #0x38]
71030a7fd0  ldr x0,[x8, #0x130]
71030a7fd4  ldr x8,[x0]
71030a7fd8  ldr x8,[x8, #0x58]
71030a7fdc  add x2,sp,#0x40
71030a7fe0  mov w1,wzr
71030a7fe4  mov w3,wzr
71030a7fe8  mov w4,wzr
71030a7fec  mov w5,wzr
71030a7ff0  blr x8
71030a7ff4  ldr x8,[x19, #0x10f8]
71030a7ff8  ldr x8,[x8, #0x38]
71030a7ffc  ldr x0,[x8, #0x130]
71030a8000  ldr x8,[x0]
71030a8004  ldr x8,[x8, #0x1a0]
71030a8008  blr x8
71030a800c  ldr x9,[x0, #0x30]
71030a8010  cbz x9,0x71030a8068
71030a8014  ldr x8,[x0, #0x38]
71030a8018  mov w10,#0x2d0
71030a801c  madd x9,x9,x10,x8
71030a8020  adrp x10,0x710313f000
71030a8024  add x10,x10,#0x320
71030a8028  ldr w12,[x8, #0xc]
71030a802c  cmp w12,#0x1
71030a8030  b.lt 0x71030a805c
71030a8034  ldrsw x11,[x8, #0x8]
71030a8038  add w12,w12,w11
71030a803c  sxtw x12,w12
71030a8040  add x13,x8,x11, LSL #0x3
71030a8044  ldr x13,[x13, #0x30]
71030a8048  cbz x13,0x71030a8050
71030a804c  str x10,[x13, #0x30]
71030a8050  add x11,x11,#0x1
71030a8054  cmp x11,x12
71030a8058  b.lt 0x71030a8040
71030a805c  add x8,x8,#0x2d0
71030a8060  cmp x8,x9
71030a8064  b.ne 0x71030a8028
71030a8068  ldr x0,[x19, #0x10f8]
71030a806c  bl 0x710313ef20
71030a8070  ldr x20,[x19, #0x10f8]
71030a8074  ldrb w8,[x20, #0x40]
71030a8078  cbz w8,0x71030a80c8
71030a807c  ldr x22,[x20, #0x30]
71030a8080  cbz x22,0x71030a80b8
71030a8084  ldrb w8,[x22, #0x10]
71030a8088  cbz w8,0x71030a80b8
71030a808c  ldrb w8,[x22, #0x50]
71030a8090  strb wzr,[x22, #0x10]
71030a8094  cbz w8,0x71030a80b8
71030a8098  ldr x8,[x22]
71030a809c  ldr w0,[x8, #0x8]
71030a80a0  bl 0x71003ac560
71030a80a4  ldr x8,[x0]
71030a80a8  ldr x8,[x8, #0x48]
71030a80ac  mov w1,wzr
71030a80b0  blr x8
71030a80b4  strb wzr,[x22, #0x50]
71030a80b8  ldr x8,[x20]
71030a80bc  ldr x8,[x8, #0x30]
71030a80c0  mov x0,x20
71030a80c4  blr x8
71030a80c8  strb wzr,[x20, #0x40]
71030a80cc  ldr x8,[x19, #0x320]
71030a80d0  ldr x8,[x8, #0x48]
71030a80d4  ldr x8,[x8, #0x320]
71030a80d8  ldr x9,[x8, #0x40]
71030a80dc  mov x14,#0x6db7
71030a80e0  movk x14,#0xb6db, LSL #16
71030a80e4  movk x14,#0xdb6d, LSL #32
71030a80e8  movk x14,#0x6db6, LSL #48
71030a80ec  ldp x8,x10,[x9]
71030a80f0  subs x9,x10,x8
71030a80f4  b.eq 0x71030a815c
71030a80f8  asr x9,x9,#0x4
71030a80fc  mul x9,x9,x14
71030a8100  cmp x8,x10
71030a8104  b.eq 0x71030a8144
71030a8108  mov x12,#0x996b
71030a810c  movk x12,#0x2d0a, LSL #16
71030a8110  movk x12,#0x11, LSL #32
71030a8114  mov x11,x8
71030a8118  ldr w13,[x11]
71030a811c  cbnz w13,0x71030a8130
71030a8120  ldr x13,[x11, #0x8]
71030a8124  and x13,x13,#0xffffffffff
71030a8128  cmp x13,x12
71030a812c  b.eq 0x71030a8148
71030a8130  add x11,x11,#0x70
71030a8134  cmp x10,x11
71030a8138  b.ne 0x71030a8118
71030a813c  mov x11,x10
71030a8140  b 0x71030a8148
71030a8144  mov x11,x8
71030a8148  sub x8,x11,x8
71030a814c  asr x8,x8,#0x4
71030a8150  mul x8,x8,x14
71030a8154  cmp x8,x9
71030a8158  b.cc 0x71030a8160
71030a815c  mov w8,#0xffffffff
71030a8160  str w8,[x19, #0x1198]
71030a8164  ldr x8,[x19, #0x300]
71030a8168  ldr x9,[x8, #0x18]
71030a816c  ldp x8,x9,[x9]
71030a8170  cmp x8,x9
71030a8174  b.eq 0x71030a8230
71030a8178  ldr x10,[x8], #0x8
71030a817c  ldr x11,[x10, #0xa0]
71030a8180  and x11,x11,#0xffffffffff
71030a8184  cmp x11,x21
71030a8188  b.eq 0x71030a8198
71030a818c  cmp x9,x8
71030a8190  b.ne 0x71030a8178
71030a8194  b 0x71030a8230
71030a8198  ldr x24,[x10, #0x110]
71030a819c  mov w8,#0x119c
71030a81a0  strb wzr,[x19, x8, LSL ]
71030a81a4  ldp x21,x22,[x24, #0x18]
71030a81a8  cmp x21,x22
71030a81ac  b.eq 0x71030a8230
71030a81b0  mov w23,#0xf5ac
71030a81b4  movk w23,#0x4f55, LSL #16
71030a81b8  mov x25,x21
71030a81bc  adrp x20,0x71043ab000
71030a81c0  add x20,x20,#0xf32
71030a81c4  ldr x26,[x25]
71030a81c8  ldr w8,[x26, #0x18]
71030a81cc  cmp w8,w23
71030a81d0  b.ne 0x71030a81e4
71030a81d4  add x0,x26,#0x20
71030a81d8  mov x1,x20
71030a81dc  bl 0x71039c0060
71030a81e0  cbz w0,0x71030a99c8
71030a81e4  add x25,x25,#0x8
71030a81e8  cmp x22,x25
71030a81ec  b.ne 0x71030a81c4
71030a81f0  cmp x21,x22
71030a81f4  b.eq 0x71030a8230
71030a81f8  adrp x20,0x7104328000
71030a81fc  add x20,x20,#0x552
71030a8200  ldr x24,[x21]
71030a8204  ldr w8,[x24, #0x18]
71030a8208  add w9,w23,#0x1b0
71030a820c  cmp w8,w9
71030a8210  b.ne 0x71030a8224
71030a8214  add x0,x24,#0x20
71030a8218  mov x1,x20
71030a821c  bl 0x71039c0060
71030a8220  cbz w0,0x71030a99ec
71030a8224  add x21,x21,#0x8
71030a8228  cmp x22,x21
71030a822c  b.ne 0x71030a8200
71030a8230  ldr w9,[x19, #0x788]
71030a8234  cmp w9,#0x1
71030a8238  b.lt 0x71030a828c
71030a823c  mov x8,xzr
71030a8240  mov x10,xzr
71030a8244  ldr x11,[x19, #0x790]
71030a8248  add x14,x11,x8
71030a824c  cmp x10,#0x1d
71030a8250  ldp w11,w12,[x14]
71030a8254  ldp w13,w14,[x14, #0x8]
71030a8258  str w9,[x19, #0xc0c]
71030a825c  b.hi 0x71030a827c
71030a8260  add x9,x19,x8
71030a8264  str w11,[x9, #0xc10]
71030a8268  str w12,[x9, #0xc14]
71030a826c  str w13,[x9, #0xc18]
71030a8270  str w14,[x9, #0xc1c]
71030a8274  strb wzr,[x9, #0xc20]
71030a8278  ldr w9,[x19, #0x788]
71030a827c  add x10,x10,#0x1
71030a8280  add x8,x8,#0x14
71030a8284  cmp x10,w9, SXTW 
71030a8288  b.lt 0x71030a8244
71030a828c  ldr x8,[x19, #0x7a8]
71030a8290  movi v0.2D,#0x0
71030a8294  add x9,x8,#0xc
71030a8298  add x8,x8,#0x10
71030a829c  ld1 {v0.S}[0],[x9]
71030a82a0  ld1 {v0.S}[1],[x8]
71030a82a4  mov w8,#0x11c0
71030a82a8  add x8,x19,x8
71030a82ac  str q0,[x19, #0x11c0]
71030a82b0  str x8,[sp, #0x78]
71030a82b4  ldr x8,[x19, #0x338]
71030a82b8  ldr x9,[x8]
71030a82bc  ldr x0,[x9, #0x8]
71030a82c0  cbz x0,0x71030a82d8
71030a82c4  add x1,sp,#0x78
71030a82c8  mov w2,wzr
71030a82cc  bl 0x7102405040
71030a82d0  ldr x8,[x19, #0x338]
71030a82d4  b 0x71030a82dc
71030a82d8  mov w0,#0xffffffff
71030a82dc  ldr x9,[x19, #0x7c0]
71030a82e0  movi v0.2D,#0x0
71030a82e4  str w0,[x19, #0x11b0]
71030a82e8  add x10,x9,#0xc
71030a82ec  add x9,x9,#0x10
71030a82f0  ld1 {v0.S}[0],[x10]
71030a82f4  ld1 {v0.S}[1],[x9]
71030a82f8  mov w9,#0x11d0
71030a82fc  add x9,x19,x9
71030a8300  str q0,[x19, #0x11d0]
71030a8304  str x9,[sp, #0x78]
71030a8308  ldr x8,[x8]
71030a830c  ldr x0,[x8, #0x8]
71030a8310  mov w8,#0xffffffff
71030a8314  cbz x0,0x71030a8328
71030a8318  add x1,sp,#0x78
71030a831c  mov w2,wzr
71030a8320  bl 0x7102405040
71030a8324  b 0x71030a832c
71030a8328  mov w0,w8
71030a832c  ldr x8,[x19, #0x8c0]
71030a8330  str w0,[x19, #0x11b4]
71030a8334  ldr x11,[x8, #0x70]
71030a8338  ldp x9,x10,[x8, #0x60]
71030a833c  ldr w12,[x8, #0x78]
71030a8340  ldrb w13,[x8, #0x7c]
71030a8344  ldr x14,[x8, #0x80]
71030a8348  ldr s9,[x19, #0x770]
71030a834c  ldp w15,w16,[x8, #0x88]
71030a8350  str x9,[x19, #0xe80]
71030a8354  str x10,[x19, #0xe88]
71030a8358  str x11,[x19, #0xe90]
71030a835c  str w12,[x19, #0xe98]
71030a8360  strb w13,[x19, #0xe9c]
71030a8364  str x14,[x19, #0xea0]
71030a8368  str w15,[x19, #0xea8]
71030a836c  str w16,[x19, #0xeac]
71030a8370  ldp x9,x10,[x8, #0x90]
71030a8374  ldr x11,[x8, #0xa0]
71030a8378  ldr w12,[x8, #0xa8]
71030a837c  ldrb w13,[x8, #0xac]
71030a8380  ldr x14,[x8, #0xb0]
71030a8384  ldp w15,w16,[x8, #0xb8]
71030a8388  str x9,[x19, #0xeb0]
71030a838c  str x10,[x19, #0xeb8]
71030a8390  str x11,[x19, #0xec0]
71030a8394  str w12,[x19, #0xec8]
71030a8398  strb w13,[x19, #0xecc]
71030a839c  str x14,[x19, #0xed0]
71030a83a0  ldr s10,[x19, #0x774]
71030a83a4  str w15,[x19, #0xed8]
71030a83a8  str w16,[x19, #0xedc]
71030a83ac  ldp x9,x10,[x8, #0xc0]
71030a83b0  ldr x11,[x8, #0xd0]
71030a83b4  ldr w12,[x8, #0xd8]
71030a83b8  ldrb w13,[x8, #0xdc]
71030a83bc  ldr x14,[x8, #0xe0]
71030a83c0  ldp w15,w8,[x8, #0xe8]
71030a83c4  str w8,[x19, #0xf0c]
71030a83c8  str x9,[x19, #0xee0]
71030a83cc  str x10,[x19, #0xee8]
71030a83d0  str x11,[x19, #0xef0]
71030a83d4  str w12,[x19, #0xef8]
71030a83d8  ldr x8,[x19, #0x8c0]
71030a83dc  strb w13,[x19, #0xefc]
71030a83e0  str x14,[x19, #0xf00]
71030a83e4  str w15,[x19, #0xf08]
71030a83e8  ldr x11,[x8, #0x100]
71030a83ec  ldp x9,x10,[x8, #0xf0]
71030a83f0  ldr w12,[x8, #0x108]
71030a83f4  ldrb w13,[x8, #0x10c]
71030a83f8  ldr x14,[x8, #0x110]
71030a83fc  ldr w15,[x8, #0x118]
71030a8400  ldr w8,[x8, #0x11c]
71030a8404  str w8,[x19, #0xf3c]
71030a8408  add x8,x19,#0x738
71030a840c  str x9,[x19, #0xf10]
71030a8410  str x10,[x19, #0xf18]
71030a8414  str x11,[x19, #0xf20]
71030a8418  str w12,[x19, #0xf28]
71030a841c  ldr w9,[x19, #0x11b4]
71030a8420  orr x10,xzr,#0x300000000
71030a8424  strb w13,[x19, #0xf2c]
71030a8428  str x14,[x19, #0xf30]
71030a842c  str w15,[x19, #0xf38]
71030a8430  str x8,[x19, #0x990]
71030a8434  ldr q0,[x27]
71030a8438  ldr w8,[x19, #0x11b0]
71030a843c  stur x10,[x29, #-0xa0]
71030a8440  stp q0,q0,[x29, #-0xc0]
71030a8444  str w9,[x19, #0xe78]
71030a8448  ldr x9,[x19, #0x988]
71030a844c  str wzr,[x19, #0xa80]
71030a8450  str w8,[x19, #0xe74]
71030a8454  ldr x8,[x9, #0x310]
71030a8458  ldp x10,x11,[x8, #0xd0]
71030a845c  cmp x10,x11
71030a8460  b.eq 0x71030a8498
71030a8464  mov x12,#0xcf3b
71030a8468  movk x12,#0x65fd, LSL #16
71030a846c  movk x12,#0x10, LSL #32
71030a8470  ldr w8,[x10, #0x8]
71030a8474  cmp w8,#0x1
71030a8478  b.hi 0x71030a848c
71030a847c  ldr x8,[x10]
71030a8480  ldr x13,[x8, #0x68]
71030a8484  cmp x13,x12
71030a8488  b.eq 0x71030a849c
71030a848c  add x10,x10,#0x10
71030a8490  cmp x11,x10
71030a8494  b.ne 0x71030a8470
71030a8498  mov x8,xzr
71030a849c  str x8,[x19, #0x998]
71030a84a0  ldr x9,[x9, #0x310]
71030a84a4  ldp x10,x11,[x9, #0xd0]
71030a84a8  cmp x10,x11
71030a84ac  b.eq 0x71030a84e4
71030a84b0  mov x12,#0xf258
71030a84b4  movk x12,#0x9ff2, LSL #16
71030a84b8  movk x12,#0x10, LSL #32
71030a84bc  ldr w9,[x10, #0x8]
71030a84c0  cmp w9,#0x1
71030a84c4  b.hi 0x71030a84d8
71030a84c8  ldr x9,[x10]
71030a84cc  ldr x13,[x9, #0x68]
71030a84d0  cmp x13,x12
71030a84d4  b.eq 0x71030a84e8
71030a84d8  add x10,x10,#0x10
71030a84dc  cmp x11,x10
71030a84e0  b.ne 0x71030a84bc
71030a84e4  mov x9,xzr
71030a84e8  str x9,[x19, #0x9a0]
71030a84ec  cbz x8,0x71030a91e8
71030a84f0  add x0,x8,#0x108
71030a84f4  mov w9,#0x1
71030a84f8  strb w9,[x8, #0x110]
71030a84fc  bl 0x71025e9d50
71030a8500  ldr x9,[x19, #0x9a0]
71030a8504  add x20,x19,#0x9a0
71030a8508  cbz x9,0x71030a851c
71030a850c  add x0,x9,#0x108
71030a8510  mov w8,#0x1
71030a8514  strb w8,[x9, #0x110]
71030a8518  bl 0x71025e9d50
71030a851c  ldr x8,[x19, #0x998]
71030a8520  cbz x8,0x71030a8530
71030a8524  ldrb w9,[x8, #0x118]
71030a8528  and w9,w9,#0xfe
71030a852c  strb w9,[x8, #0x118]
71030a8530  ldr x8,[x20]
71030a8534  cbz x8,0x71030a8544
71030a8538  ldrb w9,[x8, #0x118]
71030a853c  and w9,w9,#0xfe
71030a8540  strb w9,[x8, #0x118]
71030a8544  ldr x8,[x19, #0x998]
71030a8548  cbz x8,0x71030a8584
71030a854c  ldrb w9,[x8, #0xe0]
71030a8550  cbz w9,0x71030a8564
71030a8554  ldr x9,[x8, #0xc8]
71030a8558  cbz x9,0x71030a8564
71030a855c  mov w10,#0x101
71030a8560  strh w10,[x9, #0x30]
71030a8564  ldr x9,[x8, #0xd8]
71030a8568  cbz x9,0x71030a8574
71030a856c  mov w10,#0x1
71030a8570  strb w10,[x9, #0x21]
71030a8574  ldrb w9,[x8, #0xe0]
71030a8578  cbz w9,0x71030a8584
71030a857c  ldr x8,[x8, #0xb0]
71030a8580  strb wzr,[x8, #0x10]
71030a8584  ldr x8,[x20]
71030a8588  cbz x8,0x71030a85c4
71030a858c  ldrb w9,[x8, #0xe0]
71030a8590  cbz w9,0x71030a85a4
71030a8594  ldr x9,[x8, #0xc8]
71030a8598  cbz x9,0x71030a85a4
71030a859c  mov w10,#0x101
71030a85a0  strh w10,[x9, #0x30]
71030a85a4  ldr x9,[x8, #0xd8]
71030a85a8  cbz x9,0x71030a85b4
71030a85ac  mov w10,#0x1
71030a85b0  strb w10,[x9, #0x21]
71030a85b4  ldrb w9,[x8, #0xe0]
71030a85b8  cbz w9,0x71030a85c4
71030a85bc  ldr x8,[x8, #0xb0]
71030a85c0  strb wzr,[x8, #0x10]
71030a85c4  ldr x9,[x19, #0x988]
71030a85c8  ldr x8,[x9, #0x310]
71030a85cc  ldp x10,x11,[x8, #0xd0]
71030a85d0  cmp x10,x11
71030a85d4  b.eq 0x71030a860c
71030a85d8  mov x12,#0xf393
71030a85dc  movk x12,#0xb9ac, LSL #16
71030a85e0  movk x12,#0x16, LSL #32
71030a85e4  ldr w8,[x10, #0x8]
71030a85e8  cmp w8,#0x1
71030a85ec  b.hi 0x71030a8600
71030a85f0  ldr x8,[x10]
71030a85f4  ldr x13,[x8, #0x68]
71030a85f8  cmp x13,x12
71030a85fc  b.eq 0x71030a8610
71030a8600  add x10,x10,#0x10
71030a8604  cmp x11,x10
71030a8608  b.ne 0x71030a85e4
71030a860c  mov x8,xzr
71030a8610  str x8,[x19, #0x9a8]
71030a8614  ldr x9,[x9, #0x310]
71030a8618  ldp x10,x11,[x9, #0xd0]
71030a861c  cmp x10,x11
71030a8620  b.eq 0x71030a8658
71030a8624  mov x12,#0x1400
71030a8628  movk x12,#0x8e4d, LSL #16
71030a862c  movk x12,#0x16, LSL #32
71030a8630  ldr w9,[x10, #0x8]
71030a8634  cmp w9,#0x1
71030a8638  b.hi 0x71030a864c
71030a863c  ldr x9,[x10]
71030a8640  ldr x13,[x9, #0x68]
71030a8644  cmp x13,x12
71030a8648  b.eq 0x71030a865c
71030a864c  add x10,x10,#0x10
71030a8650  cmp x11,x10
71030a8654  b.ne 0x71030a8630
71030a8658  mov x9,xzr
71030a865c  str x9,[x19, #0x9b0]
71030a8660  cbz x8,0x71030a91f4
71030a8664  add x0,x8,#0x108
71030a8668  strb wzr,[x8, #0x110]
71030a866c  bl 0x71025e9d50
71030a8670  ldr x9,[x19, #0x9b0]
71030a8674  add x20,x19,#0x9b0
71030a8678  cbz x9,0x71030a8688
71030a867c  add x0,x9,#0x108
71030a8680  strb wzr,[x9, #0x110]
71030a8684  bl 0x71025e9d50
71030a8688  ldr x8,[x19, #0x9a8]
71030a868c  cbz x8,0x71030a869c
71030a8690  ldrb w9,[x8, #0x118]
71030a8694  orr w9,w9,#0x1
71030a8698  strb w9,[x8, #0x118]
71030a869c  ldr x8,[x20]
71030a86a0  cbz x8,0x71030a86b0
71030a86a4  ldrb w9,[x8, #0x118]
71030a86a8  orr w9,w9,#0x1
71030a86ac  strb w9,[x8, #0x118]
71030a86b0  ldr x8,[x19, #0x9a8]
71030a86b4  cbz x8,0x71030a86f0
71030a86b8  ldrb w9,[x8, #0xe0]
71030a86bc  cbz w9,0x71030a86d0
71030a86c0  ldr x9,[x8, #0xc8]
71030a86c4  cbz x9,0x71030a86d0
71030a86c8  mov w10,#0x101
71030a86cc  strh w10,[x9, #0x30]
71030a86d0  ldr x9,[x8, #0xd8]
71030a86d4  cbz x9,0x71030a86e0
71030a86d8  mov w10,#0x1
71030a86dc  strb w10,[x9, #0x21]
71030a86e0  ldrb w9,[x8, #0xe0]
71030a86e4  cbz w9,0x71030a86f0
71030a86e8  ldr x8,[x8, #0xb0]
71030a86ec  strb wzr,[x8, #0x10]
71030a86f0  ldr x8,[x20]
71030a86f4  cbz x8,0x71030a8730
71030a86f8  ldrb w9,[x8, #0xe0]
71030a86fc  cbz w9,0x71030a8710
71030a8700  ldr x9,[x8, #0xc8]
71030a8704  cbz x9,0x71030a8710
71030a8708  mov w10,#0x101
71030a870c  strh w10,[x9, #0x30]
71030a8710  ldr x9,[x8, #0xd8]
71030a8714  cbz x9,0x71030a8720
71030a8718  mov w10,#0x1
71030a871c  strb w10,[x9, #0x21]
71030a8720  ldrb w9,[x8, #0xe0]
71030a8724  cbz w9,0x71030a8730
71030a8728  ldr x8,[x8, #0xb0]
71030a872c  strb wzr,[x8, #0x10]
71030a8730  ldr x9,[x19, #0x988]
71030a8734  ldr x8,[x9, #0x310]
71030a8738  ldp x10,x11,[x8, #0xd0]
71030a873c  cmp x10,x11
71030a8740  b.eq 0x71030a8778
71030a8744  mov x12,#0x988b
71030a8748  movk x12,#0xe4a0, LSL #16
71030a874c  movk x12,#0x17, LSL #32
71030a8750  ldr w8,[x10, #0x8]
71030a8754  cmp w8,#0x1
71030a8758  b.hi 0x71030a876c
71030a875c  ldr x8,[x10]
71030a8760  ldr x13,[x8, #0x68]
71030a8764  cmp x13,x12
71030a8768  b.eq 0x71030a877c
71030a876c  add x10,x10,#0x10
71030a8770  cmp x11,x10
71030a8774  b.ne 0x71030a8750
71030a8778  mov x8,xzr
71030a877c  str x8,[x19, #0x9b8]
71030a8780  ldr x9,[x9, #0x310]
71030a8784  ldp x10,x11,[x9, #0xd0]
71030a8788  cmp x10,x11
71030a878c  b.eq 0x71030a87c4
71030a8790  mov x12,#0xbb92
71030a8794  movk x12,#0x8d91, LSL #16
71030a8798  movk x12,#0x17, LSL #32
71030a879c  ldr w9,[x10, #0x8]
71030a87a0  cmp w9,#0x1
71030a87a4  b.hi 0x71030a87b8
71030a87a8  ldr x9,[x10]
71030a87ac  ldr x13,[x9, #0x68]
71030a87b0  cmp x13,x12
71030a87b4  b.eq 0x71030a87c8
71030a87b8  add x10,x10,#0x10
71030a87bc  cmp x11,x10
71030a87c0  b.ne 0x71030a879c
71030a87c4  mov x9,xzr
71030a87c8  str x9,[x19, #0x9c0]
71030a87cc  cbz x8,0x71030a9200
71030a87d0  add x0,x8,#0x108
71030a87d4  strb wzr,[x8, #0x110]
71030a87d8  bl 0x71025e9d50
71030a87dc  ldr x9,[x19, #0x9c0]
71030a87e0  add x20,x19,#0x9c0
71030a87e4  cbz x9,0x71030a87f4
71030a87e8  add x0,x9,#0x108
71030a87ec  strb wzr,[x9, #0x110]
71030a87f0  bl 0x71025e9d50
71030a87f4  ldr x8,[x19, #0x9b8]
71030a87f8  cbz x8,0x71030a8808
71030a87fc  ldrb w9,[x8, #0x118]
71030a8800  orr w9,w9,#0x1
71030a8804  strb w9,[x8, #0x118]
71030a8808  ldr x8,[x20]
71030a880c  cbz x8,0x71030a881c
71030a8810  ldrb w9,[x8, #0x118]
71030a8814  orr w9,w9,#0x1
71030a8818  strb w9,[x8, #0x118]
71030a881c  ldr x8,[x19, #0x9b8]
71030a8820  cbz x8,0x71030a885c
71030a8824  ldrb w9,[x8, #0xe0]
71030a8828  cbz w9,0x71030a883c
71030a882c  ldr x9,[x8, #0xc8]
71030a8830  cbz x9,0x71030a883c
71030a8834  mov w10,#0x101
71030a8838  strh w10,[x9, #0x30]
71030a883c  ldr x9,[x8, #0xd8]
71030a8840  cbz x9,0x71030a884c
71030a8844  mov w10,#0x1
71030a8848  strb w10,[x9, #0x21]
71030a884c  ldrb w9,[x8, #0xe0]
71030a8850  cbz w9,0x71030a885c
71030a8854  ldr x8,[x8, #0xb0]
71030a8858  strb wzr,[x8, #0x10]
71030a885c  ldr x8,[x20]
71030a8860  cbz x8,0x71030a889c
71030a8864  ldrb w9,[x8, #0xe0]
71030a8868  cbz w9,0x71030a887c
71030a886c  ldr x9,[x8, #0xc8]
71030a8870  cbz x9,0x71030a887c
71030a8874  mov w10,#0x101
71030a8878  strh w10,[x9, #0x30]
71030a887c  ldr x9,[x8, #0xd8]
71030a8880  cbz x9,0x71030a888c
71030a8884  mov w10,#0x1
71030a8888  strb w10,[x9, #0x21]
71030a888c  ldrb w9,[x8, #0xe0]
71030a8890  cbz w9,0x71030a889c
71030a8894  ldr x8,[x8, #0xb0]
71030a8898  strb wzr,[x8, #0x10]
71030a889c  ldr x20,[x19, #0x988]
71030a88a0  mov w8,#0x4
71030a88a4  str x8,[sp, #0xd0]
71030a88a8  mov x8,#0x100000001
71030a88ac  mov w1,#0x48
71030a88b0  mov w0,#0x10
71030a88b4  stp x8,x28,[sp, #0xd8]
71030a88b8  bl 0x710392e290
71030a88bc  mov x21,x0
71030a88c0  cbnz x0,0x71030a890c
71030a88c4  adrp x8,0x7105332000
71030a88c8  ldr x0,[x8, #0xf00]
71030a88cc  cbz x0,0x71030a8908
71030a88d0  mov w8,#0x48
71030a88d4  stur wzr,[x29, #-0x84]
71030a88d8  sub x1,x29,#0x84
71030a88dc  str x8,[sp, #0xc0]
71030a88e0  ldr x8,[x0]
71030a88e4  ldr x8,[x8, #0x30]
71030a88e8  add x2,sp,#0xc0
71030a88ec  blr x8
71030a88f0  tbz w0,#0x0,0x71030a8908
71030a88f4  mov w1,#0x48
71030a88f8  mov w0,#0x10
71030a88fc  bl 0x710392e290
71030a8900  mov x21,x0
71030a8904  cbnz x0,0x71030a890c
71030a8908  mov x21,xzr
71030a890c  add x2,sp,#0xd0
71030a8910  mov x0,x21
71030a8914  mov x1,x20
71030a8918  add x22,sp,#0xd0
71030a891c  bl 0x710313e6a0
71030a8920  ldr x8,[x19, #0x990]
71030a8924  str x21,[x19, #0xa40]
71030a8928  add x23,x19,#0xa40
71030a892c  ldp x20,x24,[x8, #0x70]
71030a8930  cmp x20,x24
71030a8934  b.eq 0x71030a8c68
71030a8938  add x8,x19,#0xa50
71030a893c  add x27,x22,#0xa0
71030a8940  add x28,x22,#0xd4
71030a8944  add x25,x22,#0x67
71030a8948  orr w21,wzr,#0x3f800000
71030a894c  str x8,[sp, #0x30]
71030a8950  ldr x8,[x19, #0xa58]
71030a8954  ldr x9,[x19, #0xa60]
71030a8958  cmp x8,x9
71030a895c  b.cs 0x71030a8988
71030a8960  ldr s0,[x20]
71030a8964  scvtf s0,s0
71030a8968  mov w9,#0x1
71030a896c  strh w9,[x8, #0x8]
71030a8970  str s0,[x8, #0x4]
71030a8974  str s0,[x8]
71030a8978  ldr x8,[x19, #0xa58]
71030a897c  add x8,x8,#0xc
71030a8980  str x8,[x19, #0xa58]
71030a8984  b 0x71030a8998
71030a8988  ldr x0,[sp, #0x30]
71030a898c  mov x1,x20
71030a8990  bl 0x71030b13b0
71030a8994  ldr x8,[x19, #0xa58]
71030a8998  mov w9,#0x100
71030a899c  stur wzr,[x8, #-0x8]
71030a89a0  sturh w9,[x8, #-0x4]
71030a89a4  ldr x8,[x23]
71030a89a8  ldr x8,[x8, #0x38]
71030a89ac  cbz x8,0x71030a89cc
71030a89b0  ldr x0,[x8, #0x130]
71030a89b4  ldr x8,[x0]
71030a89b8  ldr x8,[x8, #0x130]
71030a89bc  mov w1,wzr
71030a89c0  blr x8
71030a89c4  mov w22,w0
71030a89c8  b 0x71030a89d0
71030a89cc  mov w22,wzr
71030a89d0  movi v0.2D,#0x0
71030a89d4  mov v1.16B,v0.16B
71030a89d8  add x9,x20,#0xc
71030a89dc  ld1 {v1.S}[0],[x9]
71030a89e0  add x10,x20,#0x10
71030a89e4  ld1 {v1.S}[1],[x10]
71030a89e8  ldr w8,[x20, #0x4]
71030a89ec  cmp w8,#0x1
71030a89f0  b.ne 0x71030a8a18
71030a89f4  add x8,x20,#0x14
71030a89f8  ld1 {v0.S}[0],[x8]
71030a89fc  add x9,x20,#0x18
71030a8a00  ld1 {v0.S}[1],[x9]
71030a8a04  ldr w8,[x20, #0x8]
71030a8a08  mov x26,xzr
71030a8a0c  mov w9,#0x2
71030a8a10  stur q1,[x29, #-0xc0]
71030a8a14  b 0x71030a8a44
71030a8a18  adrp x10,0x71052a8000
71030a8a1c  ldr w8,[x20, #0x8]
71030a8a20  ldr x10,[x10, #0xa88]
71030a8a24  ldr q0,[x10]
71030a8a28  stur q1,[x29, #-0xc0]
71030a8a2c  ext v1.16B,v0.16B,v0.16B,0x8
71030a8a30  fmov s2,wzr
71030a8a34  mov w9,wzr
71030a8a38  mov v1.S[0x1],v2.S[0x0]
71030a8a3c  mov w26,#0x1
71030a8a40  mov v0.D[0x1],v1.D[0x0]
71030a8a44  stur q0,[x29, #-0xb0]
71030a8a48  stp w8,w9,[x29, #-0xa0]
71030a8a4c  ldr x8,[x23]
71030a8a50  ldr x8,[x8, #0x38]
71030a8a54  cbz x8,0x71030a8a7c
71030a8a58  ldr x0,[x8, #0x130]
71030a8a5c  ldr x8,[x0]
71030a8a60  ldr x8,[x8, #0x100]
71030a8a64  sub x2,x29,#0xc0
71030a8a68  orr w4,wzr,#0x6
71030a8a6c  mov w1,wzr
71030a8a70  mov w3,w22
71030a8a74  mov w5,wzr
71030a8a78  blr x8
71030a8a7c  strb wzr,[x27, #0x6]
71030a8a80  strh wzr,[x27, #0x4]
71030a8a84  adrp x8,0x71052a8000
71030a8a88  str wzr,[x27]
71030a8a8c  ldr x8,[x8, #0xa88]
71030a8a90  ldr q0,[x8]
71030a8a94  adrp x8,0x71052a8000
71030a8a98  ext v1.16B,v0.16B,v0.16B,0x8
71030a8a9c  fmov s2,wzr
71030a8aa0  mov v1.S[0x1],v2.S[0x0]
71030a8aa4  str w21,[sp, #0x178]
71030a8aa8  mov v0.D[0x1],v1.D[0x0]
71030a8aac  orr w10,wzr,#0x3
71030a8ab0  stp q0,q0,[sp, #0xd0]
71030a8ab4  ldr x8,[x8, #0xa80]
71030a8ab8  ldr q0,[x8]
71030a8abc  mov x8,#0x1fca
71030a8ac0  movk x8,#0x1ed9, LSL #16
71030a8ac4  movk x8,#0x3, LSL #32
71030a8ac8  mov x9,x8
71030a8acc  str x8,[sp, #0x118]
71030a8ad0  orr w8,wzr,#0x3f
71030a8ad4  strh w8,[sp, #0x120]
71030a8ad8  mov w8,#0x19
71030a8adc  strb w8,[sp, #0x124]
71030a8ae0  mov x8,#0x2b3
71030a8ae4  movk x8,#0xa2c5, LSL #16
71030a8ae8  movk x8,#0x15, LSL #32
71030a8aec  str x8,[sp, #0x128]
71030a8af0  add x8,sp,#0xd0
71030a8af4  mov w11,#0x1
71030a8af8  movk w11,#0x100, LSL #16
71030a8afc  str w21,[sp, #0xf4]
71030a8b00  str w21,[sp, #0x108]
71030a8b04  str w21,[sp, #0x110]
71030a8b08  strh w10,[sp, #0x122]
71030a8b0c  strb wzr,[sp, #0x130]
71030a8b10  stur w11,[x8, #0x61]
71030a8b14  orr w11,wzr,#0xe
71030a8b18  strb wzr,[sp, #0x135]
71030a8b1c  strb wzr,[sp, #0x136]
71030a8b20  strh wzr,[sp, #0x144]
71030a8b24  strh wzr,[sp, #0x150]
71030a8b28  strb w11,[sp, #0x146]
71030a8b2c  stur xzr,[x25, #0x5]
71030a8b30  str xzr,[x25]
71030a8b34  str xzr,[sp, #0x148]
71030a8b38  str x9,[sp, #0x158]
71030a8b3c  str q0,[sp, #0x160]
71030a8b40  str wzr,[sp, #0x170]
71030a8b44  strh wzr,[sp, #0x174]
71030a8b48  stur x21,[x8, #0xac]
71030a8b4c  mov x8,#0xfc4f
71030a8b50  movk x8,#0x25cb, LSL #16
71030a8b54  movk x8,#0x4, LSL #32
71030a8b58  str x8,[sp, #0x188]
71030a8b5c  mov x8,#0x7a80
71030a8b60  movk x8,#0xfb99, LSL #16
71030a8b64  movk x8,#0x7, LSL #32
71030a8b68  str x8,[sp, #0x190]
71030a8b6c  mov w8,#0xbf800000
71030a8b70  str w8,[sp, #0x1a0]
71030a8b74  mov w8,#0xffffffff
71030a8b78  strh wzr,[sp, #0x198]
71030a8b7c  strh wzr,[sp, #0x19c]
71030a8b80  stp xzr,xzr,[x28, #0x8]
71030a8b84  str xzr,[x28]
71030a8b88  str w8,[sp, #0x1bc]
71030a8b8c  orr w8,wzr,#0x30
71030a8b90  madd x8,x26,x8,x19
71030a8b94  strh w10,[sp, #0x1c0]
71030a8b98  str w21,[sp, #0x1c4]
71030a8b9c  strh wzr,[sp, #0x1c8]
71030a8ba0  strb wzr,[sp, #0x1ca]
71030a8ba4  ldr w9,[x8, #0xe80]
71030a8ba8  str w9,[sp, #0xf0]
71030a8bac  ldr w9,[x8, #0xe84]
71030a8bb0  str w9,[sp, #0xf8]
71030a8bb4  ldr w9,[x8, #0xe88]
71030a8bb8  str w9,[sp, #0xfc]
71030a8bbc  ldr w9,[x8, #0xe8c]
71030a8bc0  str w9,[sp, #0x100]
71030a8bc4  ldr w9,[x8, #0xe90]
71030a8bc8  str w9,[sp, #0x104]
71030a8bcc  ldr w9,[x8, #0xe98]
71030a8bd0  str w9,[sp, #0x10c]
71030a8bd4  ldrb w8,[x8, #0xe9c]
71030a8bd8  cbz w8,0x71030a8be4
71030a8bdc  mov w8,#0x1
71030a8be0  strb w8,[sp, #0x13d]
71030a8be4  orr w8,wzr,#0x7
71030a8be8  strb w8,[sp, #0x122]
71030a8bec  orr w8,wzr,#0x1f
71030a8bf0  strb w8,[sp, #0x124]
71030a8bf4  orr w8,wzr,#0x30
71030a8bf8  madd x8,x26,x8,x19
71030a8bfc  ldr x9,[x8, #0xea0]
71030a8c00  str x9,[sp, #0x128]
71030a8c04  strb wzr,[sp, #0x130]
71030a8c08  ldr w9,[x8, #0xea8]
71030a8c0c  strb w9,[sp, #0x131]
71030a8c10  ldr w9,[x8, #0xeac]
71030a8c14  strb w9,[sp, #0x13a]
71030a8c18  ldr w8,[x8, #0xe94]
71030a8c1c  str w8,[sp, #0x148]
71030a8c20  ldr x8,[x19, #0xa40]
71030a8c24  ldr x8,[x8, #0x38]
71030a8c28  cbz x8,0x71030a8c48
71030a8c2c  ldr x0,[x8, #0xa0]
71030a8c30  ldr x8,[x0]
71030a8c34  ldr x8,[x8, #0x68]
71030a8c38  add x3,sp,#0xd0
71030a8c3c  mov w1,w22
71030a8c40  mov w2,wzr
71030a8c44  blr x8
71030a8c48  add x20,x20,#0x1c
71030a8c4c  cmp x24,x20
71030a8c50  b.ne 0x71030a8950
71030a8c54  adrp x27,0x71052a8000
71030a8c58  ldr x21,[x23]
71030a8c5c  ldr x27,[x27, #0xa88]
71030a8c60  mov x28,#0x1
71030a8c64  movk x28,#0x10, LSL #32
71030a8c68  ldr x8,[x21, #0x38]
71030a8c6c  mov x25,#0x6db7
71030a8c70  movk x25,#0xb6db, LSL #16
71030a8c74  movk x25,#0xdb6d, LSL #32
71030a8c78  movk x25,#0x6db6, LSL #48
71030a8c7c  cbz x8,0x71030a8c98
71030a8c80  ldr x0,[x8, #0x130]
71030a8c84  ldr x8,[x0]
71030a8c88  ldr x8,[x8, #0x120]
71030a8c8c  mov w1,wzr
71030a8c90  blr x8
71030a8c94  ldr x21,[x23]
71030a8c98  ldrb w8,[x21, #0x40]
71030a8c9c  cbz w8,0x71030a8cec
71030a8ca0  ldr x20,[x21, #0x30]
71030a8ca4  cbz x20,0x71030a8cdc
71030a8ca8  ldrb w8,[x20, #0x10]
71030a8cac  cbz w8,0x71030a8cdc
71030a8cb0  ldrb w8,[x20, #0x50]
71030a8cb4  strb wzr,[x20, #0x10]
71030a8cb8  cbz w8,0x71030a8cdc
71030a8cbc  ldr x8,[x20]
71030a8cc0  ldr w0,[x8, #0x8]
71030a8cc4  bl 0x71003ac560
71030a8cc8  ldr x8,[x0]
71030a8ccc  ldr x8,[x8, #0x48]
71030a8cd0  mov w1,wzr
71030a8cd4  blr x8
71030a8cd8  strb wzr,[x20, #0x50]
71030a8cdc  ldr x8,[x21]
71030a8ce0  ldr x8,[x8, #0x30]
71030a8ce4  mov x0,x21
71030a8ce8  blr x8
71030a8cec  strb wzr,[x21, #0x40]
71030a8cf0  ldr x20,[x19, #0x988]
71030a8cf4  mov w8,#0x4
71030a8cf8  str x8,[sp, #0xd0]
71030a8cfc  mov x8,#0x100000001
71030a8d00  mov w1,#0x48
71030a8d04  mov w0,#0x10
71030a8d08  stp x8,x28,[sp, #0xd8]
71030a8d0c  bl 0x710392e290
71030a8d10  mov x21,x0
71030a8d14  cbnz x0,0x71030a8d60
71030a8d18  adrp x8,0x7105332000
71030a8d1c  ldr x0,[x8, #0xf00]
71030a8d20  cbz x0,0x71030a8d5c
71030a8d24  mov w8,#0x48
71030a8d28  stur wzr,[x29, #-0x84]
71030a8d2c  sub x1,x29,#0x84
71030a8d30  str x8,[sp, #0xc0]
71030a8d34  ldr x8,[x0]
71030a8d38  ldr x8,[x8, #0x30]
71030a8d3c  add x2,sp,#0xc0
71030a8d40  blr x8
71030a8d44  tbz w0,#0x0,0x71030a8d5c
71030a8d48  mov w1,#0x48
71030a8d4c  mov w0,#0x10
71030a8d50  bl 0x710392e290
71030a8d54  mov x21,x0
71030a8d58  cbnz x0,0x71030a8d60
71030a8d5c  mov x21,xzr
71030a8d60  add x2,sp,#0xd0
71030a8d64  mov x0,x21
71030a8d68  mov x1,x20
71030a8d6c  add x22,sp,#0xd0
71030a8d70  bl 0x710313e6a0
71030a8d74  ldr x8,[x19, #0x990]
71030a8d78  str x21,[x19, #0xa48]
71030a8d7c  add x23,x19,#0xa48
71030a8d80  ldp x20,x8,[x8, #0x88]
71030a8d84  cmp x20,x8
71030a8d88  str x8,[sp, #0x30]
71030a8d8c  b.eq 0x71030a90b8
71030a8d90  mov x24,x27
71030a8d94  add x8,x19,#0xa68
71030a8d98  add x27,x22,#0xa0
71030a8d9c  add x28,x22,#0xd4
71030a8da0  add x25,x22,#0x67
71030a8da4  str x8,[sp, #0x20]
71030a8da8  orr w21,wzr,#0x3f800000
71030a8dac  ldr x8,[x19, #0xa70]
71030a8db0  ldr x9,[x19, #0xa78]
71030a8db4  cmp x8,x9
71030a8db8  b.cs 0x71030a8de4
71030a8dbc  ldr s0,[x20]
71030a8dc0  scvtf s0,s0
71030a8dc4  mov w9,#0x1
71030a8dc8  strh w9,[x8, #0x8]
71030a8dcc  str s0,[x8, #0x4]
71030a8dd0  str s0,[x8]
71030a8dd4  ldr x8,[x19, #0xa70]
71030a8dd8  add x8,x8,#0xc
71030a8ddc  str x8,[x19, #0xa70]
71030a8de0  b 0x71030a8df4
71030a8de4  ldr x0,[sp, #0x20]
71030a8de8  mov x1,x20
71030a8dec  bl 0x71030b13b0
71030a8df0  ldr x8,[x19, #0xa70]
71030a8df4  mov w9,#0x100
71030a8df8  stur wzr,[x8, #-0x8]
71030a8dfc  sturh w9,[x8, #-0x4]
71030a8e00  ldr x8,[x23]
71030a8e04  ldr x8,[x8, #0x38]
71030a8e08  cbz x8,0x71030a8e28
71030a8e0c  ldr x0,[x8, #0x130]
71030a8e10  ldr x8,[x0]
71030a8e14  ldr x8,[x8, #0x130]
71030a8e18  mov w1,wzr
71030a8e1c  blr x8
71030a8e20  mov w22,w0
71030a8e24  b 0x71030a8e2c
71030a8e28  mov w22,wzr
71030a8e2c  movi v0.2D,#0x0
71030a8e30  mov v1.16B,v0.16B
71030a8e34  add x9,x20,#0xc
71030a8e38  ld1 {v1.S}[0],[x9]
71030a8e3c  add x10,x20,#0x10
71030a8e40  ld1 {v1.S}[1],[x10]
71030a8e44  ldr w8,[x20, #0x4]
71030a8e48  cmp w8,#0x1
71030a8e4c  b.ne 0x71030a8e74
71030a8e50  add x8,x20,#0x14
71030a8e54  ld1 {v0.S}[0],[x8]
71030a8e58  add x9,x20,#0x18
71030a8e5c  ld1 {v0.S}[1],[x9]
71030a8e60  ldr w8,[x20, #0x8]
71030a8e64  stur q1,[x29, #-0xc0]
71030a8e68  mov w9,#0x2
71030a8e6c  mov w26,#0x2
71030a8e70  b 0x71030a8e98
71030a8e74  ldr q0,[x24]
71030a8e78  ldr w8,[x20, #0x8]
71030a8e7c  fmov s2,wzr
71030a8e80  stur q1,[x29, #-0xc0]
71030a8e84  ext v1.16B,v0.16B,v0.16B,0x8
71030a8e88  mov v1.S[0x1],v2.S[0x0]
71030a8e8c  mov w9,wzr
71030a8e90  mov v0.D[0x1],v1.D[0x0]
71030a8e94  orr w26,wzr,#0x3
71030a8e98  stur q0,[x29, #-0xb0]
71030a8e9c  stp w8,w9,[x29, #-0xa0]
71030a8ea0  ldr x8,[x23]
71030a8ea4  ldr x8,[x8, #0x38]
71030a8ea8  cbz x8,0x71030a8ed0
71030a8eac  ldr x0,[x8, #0x130]
71030a8eb0  ldr x8,[x0]
71030a8eb4  ldr x8,[x8, #0x100]
71030a8eb8  sub x2,x29,#0xc0
71030a8ebc  orr w4,wzr,#0x6
71030a8ec0  mov w1,wzr
71030a8ec4  mov w3,w22
71030a8ec8  mov w5,wzr
71030a8ecc  blr x8
71030a8ed0  ldr q0,[x24]
71030a8ed4  ext v1.16B,v0.16B,v0.16B,0x8
71030a8ed8  fmov s2,wzr
71030a8edc  mov v1.S[0x1],v2.S[0x0]
71030a8ee0  strb wzr,[x27, #0x6]
71030a8ee4  mov v0.D[0x1],v1.D[0x0]
71030a8ee8  strh wzr,[x27, #0x4]
71030a8eec  str wzr,[x27]
71030a8ef0  str w21,[sp, #0x178]
71030a8ef4  adrp x8,0x71052a8000
71030a8ef8  stp q0,q0,[sp, #0xd0]
71030a8efc  ldr x8,[x8, #0xa80]
71030a8f00  ldr q0,[x8]
71030a8f04  mov x8,#0x1fca
71030a8f08  movk x8,#0x1ed9, LSL #16
71030a8f0c  movk x8,#0x3, LSL #32
71030a8f10  mov x9,x8
71030a8f14  str x8,[sp, #0x118]
71030a8f18  orr w8,wzr,#0x3f
71030a8f1c  strh w8,[sp, #0x120]
71030a8f20  mov w8,#0x19
71030a8f24  strb w8,[sp, #0x124]
71030a8f28  mov x8,#0x2b3
71030a8f2c  movk x8,#0xa2c5, LSL #16
71030a8f30  movk x8,#0x15, LSL #32
71030a8f34  orr w10,wzr,#0x3
71030a8f38  str w21,[sp, #0xf4]
71030a8f3c  str w21,[sp, #0x108]
71030a8f40  str w21,[sp, #0x110]
71030a8f44  strh w10,[sp, #0x122]
71030a8f48  strb wzr,[sp, #0x130]
71030a8f4c  str x8,[sp, #0x128]
71030a8f50  add x8,sp,#0xd0
71030a8f54  mov w11,#0x1
71030a8f58  movk w11,#0x100, LSL #16
71030a8f5c  stur w11,[x8, #0x61]
71030a8f60  orr w11,wzr,#0xe
71030a8f64  strb wzr,[sp, #0x135]
71030a8f68  strb wzr,[sp, #0x136]
71030a8f6c  strh wzr,[sp, #0x144]
71030a8f70  strh wzr,[sp, #0x150]
71030a8f74  strb w11,[sp, #0x146]
71030a8f78  stur xzr,[x25, #0x5]
71030a8f7c  str xzr,[x25]
71030a8f80  str xzr,[sp, #0x148]
71030a8f84  str x9,[sp, #0x158]
71030a8f88  str wzr,[sp, #0x170]
71030a8f8c  strh wzr,[sp, #0x174]
71030a8f90  str q0,[sp, #0x160]
71030a8f94  stur x21,[x8, #0xac]
71030a8f98  mov x8,#0xfc4f
71030a8f9c  movk x8,#0x25cb, LSL #16
71030a8fa0  movk x8,#0x4, LSL #32
71030a8fa4  str x8,[sp, #0x188]
71030a8fa8  mov x8,#0x7a80
71030a8fac  movk x8,#0xfb99, LSL #16
71030a8fb0  movk x8,#0x7, LSL #32
71030a8fb4  str x8,[sp, #0x190]
71030a8fb8  mov w8,#0xbf800000
71030a8fbc  str w8,[sp, #0x1a0]
71030a8fc0  mov w8,#0xffffffff
71030a8fc4  strh wzr,[sp, #0x198]
71030a8fc8  strh wzr,[sp, #0x19c]
71030a8fcc  str xzr,[x28]
71030a8fd0  stp xzr,xzr,[x28, #0x8]
71030a8fd4  str w8,[sp, #0x1bc]
71030a8fd8  orr w8,wzr,#0x30
71030a8fdc  madd x8,x26,x8,x19
71030a8fe0  strh w10,[sp, #0x1c0]
71030a8fe4  str w21,[sp, #0x1c4]
71030a8fe8  strh wzr,[sp, #0x1c8]
71030a8fec  strb wzr,[sp, #0x1ca]
71030a8ff0  ldr w9,[x8, #0xe80]
71030a8ff4  str w9,[sp, #0xf0]
71030a8ff8  ldr w9,[x8, #0xe84]
71030a8ffc  str w9,[sp, #0xf8]
71030a9000  ldr w9,[x8, #0xe88]
71030a9004  str w9,[sp, #0xfc]
71030a9008  ldr w9,[x8, #0xe8c]
71030a900c  str w9,[sp, #0x100]
71030a9010  ldr w9,[x8, #0xe90]
71030a9014  str w9,[sp, #0x104]
71030a9018  ldr w9,[x8, #0xe98]
71030a901c  str w9,[sp, #0x10c]
71030a9020  ldrb w8,[x8, #0xe9c]
71030a9024  cbz w8,0x71030a9030
71030a9028  mov w8,#0x1
71030a902c  strb w8,[sp, #0x13d]
71030a9030  orr w8,wzr,#0x7
71030a9034  strb w8,[sp, #0x122]
71030a9038  orr w8,wzr,#0x1f
71030a903c  strb w8,[sp, #0x124]
71030a9040  orr w8,wzr,#0x30
71030a9044  madd x8,x26,x8,x19
71030a9048  ldr x9,[x8, #0xea0]
71030a904c  str x9,[sp, #0x128]
71030a9050  strb wzr,[sp, #0x130]
71030a9054  ldr w9,[x8, #0xea8]
71030a9058  strb w9,[sp, #0x131]
71030a905c  ldr w9,[x8, #0xeac]
71030a9060  strb w9,[sp, #0x13a]
71030a9064  ldr w8,[x8, #0xe94]
71030a9068  str w8,[sp, #0x148]
71030a906c  ldr x8,[x19, #0xa48]
71030a9070  ldr x8,[x8, #0x38]
71030a9074  cbz x8,0x71030a9094
71030a9078  ldr x0,[x8, #0xa0]
71030a907c  ldr x8,[x0]
71030a9080  ldr x8,[x8, #0x68]
71030a9084  add x3,sp,#0xd0
71030a9088  mov w1,w22
71030a908c  mov w2,wzr
71030a9090  blr x8
71030a9094  ldr x8,[sp, #0x30]
71030a9098  add x20,x20,#0x1c
71030a909c  cmp x8,x20
71030a90a0  b.ne 0x71030a8dac
71030a90a4  ldr x21,[x23]
71030a90a8  mov x25,#0x6db7
71030a90ac  movk x25,#0xb6db, LSL #16
71030a90b0  movk x25,#0xdb6d, LSL #32
71030a90b4  movk x25,#0x6db6, LSL #48
71030a90b8  ldr x8,[x21, #0x38]
71030a90bc  cbz x8,0x71030a90d8
71030a90c0  ldr x0,[x8, #0x130]
71030a90c4  ldr x8,[x0]
71030a90c8  ldr x8,[x8, #0x120]
71030a90cc  mov w1,wzr
71030a90d0  blr x8
71030a90d4  ldr x21,[x23]
71030a90d8  ldrb w8,[x21, #0x40]
71030a90dc  cbz w8,0x71030a912c
71030a90e0  ldr x20,[x21, #0x30]
71030a90e4  cbz x20,0x71030a911c
71030a90e8  ldrb w8,[x20, #0x10]
71030a90ec  cbz w8,0x71030a911c
71030a90f0  ldrb w8,[x20, #0x50]
71030a90f4  strb wzr,[x20, #0x10]
71030a90f8  cbz w8,0x71030a911c
71030a90fc  ldr x8,[x20]
71030a9100  ldr w0,[x8, #0x8]
71030a9104  bl 0x71003ac560
71030a9108  ldr x8,[x0]
71030a910c  ldr x8,[x8, #0x48]
71030a9110  mov w1,wzr
71030a9114  blr x8
71030a9118  strb wzr,[x20, #0x50]
71030a911c  ldr x8,[x21]
71030a9120  ldr x8,[x8, #0x30]
71030a9124  mov x0,x21
71030a9128  blr x8
71030a912c  strb wzr,[x21, #0x40]
71030a9130  ldr x8,[x19, #0x988]
71030a9134  str s9,[x19, #0xa9c]
71030a9138  str s10,[x19, #0xaa0]
71030a913c  ldr x8,[x8, #0x340]
71030a9140  fsub s1,s10,s9
71030a9144  ldp w9,w10,[x8]
71030a9148  str w10,[x8]
71030a914c  ldp w10,w11,[x8, #0x8]
71030a9150  eor w9,w9,w9, LSL #0xb
71030a9154  eor w9,w9,w9, LSR #0x8
71030a9158  eor w9,w9,w11
71030a915c  eor w9,w9,w11, LSR #0x13
71030a9160  ucvtf s0,w9
71030a9164  fmul s0,s1,s0
71030a9168  fmul s1,s0,s8
71030a916c  fadd s0,s1,s9
71030a9170  stp w10,w11,[x8, #0x4]
71030a9174  str w9,[x8, #0xc]
71030a9178  ldr x8,[x19, #0x988]
71030a917c  str s0,[x19, #0xa98]
71030a9180  ldr x8,[x8, #0x320]
71030a9184  ldr x8,[x8, #0x48]
71030a9188  ldr x8,[x8, #0x320]
71030a918c  ldr x9,[x8, #0x40]
71030a9190  ldp x8,x10,[x9]
71030a9194  subs x9,x10,x8
71030a9198  b.eq 0x71030a9224
71030a919c  asr x9,x9,#0x4
71030a91a0  mul x9,x9,x25
71030a91a4  cmp x8,x10
71030a91a8  b.eq 0x71030a920c
71030a91ac  mov x12,#0x895
71030a91b0  movk x12,#0xd0f9, LSL #16
71030a91b4  movk x12,#0xe, LSL #32
71030a91b8  mov x11,x8
71030a91bc  ldr w13,[x11]
71030a91c0  cbnz w13,0x71030a91d4
71030a91c4  ldr x13,[x11, #0x8]
71030a91c8  and x13,x13,#0xffffffffff
71030a91cc  cmp x13,x12
71030a91d0  b.eq 0x71030a9210
71030a91d4  add x11,x11,#0x70
71030a91d8  cmp x10,x11
71030a91dc  b.ne 0x71030a91bc
71030a91e0  mov x11,x10
71030a91e4  b 0x71030a9210
71030a91e8  add x20,x19,#0x9a0
71030a91ec  cbnz x9,0x71030a850c
71030a91f0  b 0x71030a851c
71030a91f4  add x20,x19,#0x9b0
71030a91f8  cbnz x9,0x71030a867c
71030a91fc  b 0x71030a8688
71030a9200  add x20,x19,#0x9c0
71030a9204  cbnz x9,0x71030a87e8
71030a9208  b 0x71030a87f4
71030a920c  mov x11,x8
71030a9210  sub x8,x11,x8
71030a9214  asr x8,x8,#0x4
71030a9218  mul x8,x8,x25
71030a921c  cmp x8,x9
71030a9220  b.cc 0x71030a9228
71030a9224  mov w8,#0xffffffff
71030a9228  str w8,[x19, #0xaa4]
71030a922c  ldr x8,[x19, #0x990]
71030a9230  ldr x9,[x8, #0x210]
71030a9234  ldr x10,[x8, #0x208]
71030a9238  sub x9,x9,x10
71030a923c  lsr x9,x9,#0x4
71030a9240  cmp w9,#0x2
71030a9244  mov w21,#0x2
71030a9248  csel w9,w9,w21,cc
71030a924c  cbz w9,0x71030a92c0
71030a9250  mov x22,xzr
71030a9254  mov x23,xzr
71030a9258  mov w24,w9
71030a925c  add x20,x19,#0xab0
71030a9260  ldr x8,[x8, #0x208]
71030a9264  movi v1.2D,#0x0
71030a9268  mov v0.16B,v1.16B
71030a926c  add x1,sp,#0xd0
71030a9270  add x2,sp,#0xc0
71030a9274  add x8,x8,x22
71030a9278  mov x9,x8
71030a927c  add x10,x8,#0x8
71030a9280  add x8,x8,#0xc
71030a9284  ld1 {v0.S}[0],[x9], #0x4
71030a9288  ld1 {v0.S}[1],[x9]
71030a928c  mov x0,x20
71030a9290  str q0,[sp, #0xd0]
71030a9294  mov v0.16B,v1.16B
71030a9298  ld1 {v0.S}[0],[x10]
71030a929c  ld1 {v0.S}[1],[x8]
71030a92a0  str q0,[sp, #0xc0]
71030a92a4  bl 0x710317e570
71030a92a8  ldr x8,[x19, #0x990]
71030a92ac  add x23,x23,#0x1
71030a92b0  add x20,x20,#0x50
71030a92b4  add x22,x22,#0x10
71030a92b8  cmp x23,x24
71030a92bc  b.cc 0x71030a9260
71030a92c0  ldr x9,[x8, #0x228]
71030a92c4  ldr x10,[x8, #0x220]
71030a92c8  sub x9,x9,x10
71030a92cc  lsr x9,x9,#0x4
71030a92d0  cmp w9,#0x2
71030a92d4  csel w9,w9,w21,cc
71030a92d8  cbz w9,0x71030a9350
71030a92dc  mov x21,xzr
71030a92e0  mov w22,w9
71030a92e4  add x20,x19,#0xb50
71030a92e8  mov w23,#0x1
71030a92ec  b 0x71030a9300
71030a92f0  ldr x8,[x19, #0x990]
71030a92f4  add x20,x20,#0x50
71030a92f8  add x23,x23,#0x1
71030a92fc  add x21,x21,#0x10
71030a9300  movi v1.2D,#0x0
71030a9304  ldr x8,[x8, #0x220]
71030a9308  add x8,x8,x21
71030a930c  mov v0.16B,v1.16B
71030a9310  add x10,x8,#0x8
71030a9314  mov x9,x8
71030a9318  add x8,x8,#0xc
71030a931c  add x1,sp,#0xd0
71030a9320  add x2,sp,#0xc0
71030a9324  ld1 {v0.S}[0],[x9], #0x4
71030a9328  ld1 {v0.S}[1],[x9]
71030a932c  mov x0,x20
71030a9330  str q0,[sp, #0xd0]
71030a9334  mov v0.16B,v1.16B
71030a9338  ld1 {v0.S}[0],[x10]
71030a933c  ld1 {v0.S}[1],[x8]
71030a9340  str q0,[sp, #0xc0]
71030a9344  bl 0x710317e570
71030a9348  cmp x23,x22
71030a934c  b.cc 0x71030a92f0
71030a9350  adrp x21,0x710532a000
71030a9354  ldr x8,[x19, #0x988]
71030a9358  ldr x8,[x8, #0x308]
71030a935c  ldr x9,[x21, #0x9d8]
71030a9360  ldr x9,[x9]
71030a9364  ldr x1,[x9, #0x1c0]
71030a9368  ldr x2,[x8, #0x8]
71030a936c  add x0,sp,#0xd0
71030a9370  mov w3,#0x1
71030a9374  bl 0x710315a0a0
71030a9378  ldr x8,[sp, #0xd0]
71030a937c  str xzr,[sp, #0xd0]
71030a9380  ldr x20,[x19, #0xf48]
71030a9384  str x8,[x19, #0xf48]
71030a9388  cbz x20,0x71030a93b0
71030a938c  mov x0,x20
71030a9390  bl 0x71025e8370
71030a9394  mov x0,x20
71030a9398  bl 0x710392eb40
71030a939c  str xzr,[sp, #0xd0]
71030a93a0  ldr x8,[x19, #0xf48]
71030a93a4  ldrb w9,[x8, #0x10]
71030a93a8  cbnz w9,0x71030a942c
71030a93ac  b 0x71030a93bc
71030a93b0  str xzr,[sp, #0xd0]
71030a93b4  ldrb w9,[x8, #0x10]
71030a93b8  cbnz w9,0x71030a942c
71030a93bc  ldr x20,[x8, #0x8]
71030a93c0  mov w9,#0x1
71030a93c4  strb w9,[x8, #0x10]
71030a93c8  ldrb w9,[x8, #0x11]
71030a93cc  ldrb w8,[x20, #0x1c]
71030a93d0  cbz w9,0x71030a9404
71030a93d4  cbnz w8,0x71030a942c
71030a93d8  adrp x8,0x71052b8000
71030a93dc  ldr x8,[x8, #0xf00]
71030a93e0  ldr x8,[x8]
71030a93e4  add x0,x8,#0xa30
71030a93e8  ldr x8,[x8, #0xa30]
71030a93ec  ldr x8,[x8, #0x10]
71030a93f0  mov x1,x20
71030a93f4  blr x8
71030a93f8  mov w8,#0x1
71030a93fc  strb w8,[x20, #0x1c]
71030a9400  b 0x71030a942c
71030a9404  cbz w8,0x71030a942c
71030a9408  adrp x8,0x71052b8000
71030a940c  ldr x8,[x8, #0xf00]
71030a9410  ldr x8,[x8]
71030a9414  add x0,x8,#0xa30
71030a9418  ldr x8,[x8, #0xa30]
71030a941c  ldr x8,[x8, #0x18]
71030a9420  mov x1,x20
71030a9424  blr x8
71030a9428  strb wzr,[x20, #0x1c]
71030a942c  ldr x8,[x19, #0xf48]
71030a9430  ldr x8,[x8, #0x8]
71030a9434  mov w9,#0x1
71030a9438  mov w2,#0x1
71030a943c  mov x0,x19
71030a9440  mov w1,wzr
71030a9444  str w9,[x8, #0x14]
71030a9448  bl 0x71030ae260
71030a944c  ldr x8,[x19, #0x300]
71030a9450  str xzr,[x19, #0x11e0]
71030a9454  ldr x9,[x8, #0x18]
71030a9458  ldp x8,x9,[x9]
71030a945c  mov x20,#0x67e6
71030a9460  movk x20,#0xd89d, LSL #16
71030a9464  movk x20,#0xe, LSL #32
71030a9468  cmp x8,x9
71030a946c  b.eq 0x71030a94d0
71030a9470  mov x10,#0xdf99
71030a9474  movk x10,#0xb569, LSL #16
71030a9478  movk x10,#0x7, LSL #32
71030a947c  ldr x11,[x8], #0x8
71030a9480  ldr x12,[x11, #0xa0]
71030a9484  and x12,x12,#0xffffffffff
71030a9488  cmp x12,x10
71030a948c  b.eq 0x71030a949c
71030a9490  cmp x9,x8
71030a9494  b.ne 0x71030a947c
71030a9498  b 0x71030a94d0
71030a949c  ldr x8,[x11, #0x130]
71030a94a0  cbz x8,0x71030a94d0
71030a94a4  str x8,[x19, #0x11e0]
71030a94a8  ldp x0,x1,[x8]
71030a94ac  adrp x2,0x71042a1000
71030a94b0  add x2,x2,#0x676
71030a94b4  bl 0x71025f55b0
71030a94b8  ldr x8,[x19, #0x11e0]
71030a94bc  cbz x8,0x71030a94d0
71030a94c0  ldp x0,x1,[x8]
71030a94c4  adrp x2,0x7104441000
71030a94c8  add x2,x2,#0xec7
71030a94cc  bl 0x71025f55b0
71030a94d0  adrp x8,0x7105314000
71030a94d4  add x8,x8,#0x4d8
71030a94d8  ldarb w8,[x8]
71030a94dc  tbz w8,#0x0,0x71030a9a04
71030a94e0  adrp x8,0x71052c5000
71030a94e4  ldrb w9,[x8, #0x1ba]
71030a94e8  ldr x8,[x19, #0x11e0]
71030a94ec  cbz w9,0x71030a9508
71030a94f0  cbz x8,0x71030a951c
71030a94f4  ldp x0,x1,[x8]
71030a94f8  adrp x2,0x7104359000
71030a94fc  add x2,x2,#0x918
71030a9500  bl 0x71025f5420
71030a9504  b 0x71030a951c
71030a9508  cbz x8,0x71030a951c
71030a950c  ldp x0,x1,[x8]
71030a9510  adrp x2,0x7104359000
71030a9514  add x2,x2,#0x918
71030a9518  bl 0x71025f55b0
71030a951c  ldr x8,[x19, #0x300]
71030a9520  ldr x9,[x8, #0x18]
71030a9524  ldp x8,x9,[x9]
71030a9528  cmp x8,x9
71030a952c  b.eq 0x71030a9564
71030a9530  ldr x10,[x8], #0x8
71030a9534  ldr x11,[x10, #0xa0]
71030a9538  and x11,x11,#0xffffffffff
71030a953c  cmp x11,x20
71030a9540  b.eq 0x71030a9550
71030a9544  cmp x9,x8
71030a9548  b.ne 0x71030a9530
71030a954c  b 0x71030a9564
71030a9550  ldr x8,[x10, #0x110]
71030a9554  str x8,[x19, #0x11f8]
71030a9558  mov w2,#0x1
71030a955c  ldp x0,x1,[x8]
71030a9560  bl 0x71025f4d80
71030a9564  ldr x8,[x19, #0x11e0]
71030a9568  ldr x9,[x19, #0xf58]
71030a956c  str x8,[x19, #0x1030]
71030a9570  ldr x8,[x9, #0x310]
71030a9574  ldp x10,x11,[x8, #0xd0]
71030a9578  cmp x10,x11
71030a957c  b.eq 0x71030a95b4
71030a9580  mov x12,#0x3fe5
71030a9584  movk x12,#0x4563, LSL #16
71030a9588  movk x12,#0x17, LSL #32
71030a958c  ldr w8,[x10, #0x8]
71030a9590  cmp w8,#0x1
71030a9594  b.hi 0x71030a95a8
71030a9598  ldr x8,[x10]
71030a959c  ldr x13,[x8, #0x68]
71030a95a0  cmp x13,x12
71030a95a4  b.eq 0x71030a95b8
71030a95a8  add x10,x10,#0x10
71030a95ac  cmp x11,x10
71030a95b0  b.ne 0x71030a958c
71030a95b4  mov x8,xzr
71030a95b8  str x8,[x19, #0xf60]
71030a95bc  ldr x9,[x9, #0x310]
71030a95c0  ldp x10,x11,[x9, #0xd0]
71030a95c4  cmp x10,x11
71030a95c8  b.eq 0x71030a9600
71030a95cc  mov x12,#0x6560
71030a95d0  movk x12,#0x1316, LSL #16
71030a95d4  movk x12,#0x16, LSL #32
71030a95d8  ldr w9,[x10, #0x8]
71030a95dc  cmp w9,#0x1
71030a95e0  b.hi 0x71030a95f4
71030a95e4  ldr x9,[x10]
71030a95e8  ldr x13,[x9, #0x68]
71030a95ec  cmp x13,x12
71030a95f0  b.eq 0x71030a9604
71030a95f4  add x10,x10,#0x10
71030a95f8  cmp x11,x10
71030a95fc  b.ne 0x71030a95d8
71030a9600  mov x9,xzr
71030a9604  str x9,[x19, #0xf68]
71030a9608  cbz x8,0x71030a961c
71030a960c  add x0,x8,#0x108
71030a9610  strb wzr,[x8, #0x110]
71030a9614  bl 0x71025e9d50
71030a9618  ldr x9,[x19, #0xf68]
71030a961c  add x20,x19,#0xf68
71030a9620  movi v4.2D,#0x0
71030a9624  cbz x9,0x71030a9638
71030a9628  add x0,x9,#0x108
71030a962c  strb wzr,[x9, #0x110]
71030a9630  bl 0x71025e9d50
71030a9634  movi v4.2D,#0x0
71030a9638  ldr x8,[x19, #0xf60]
71030a963c  cbz x8,0x71030a964c
71030a9640  ldrb w9,[x8, #0x118]
71030a9644  orr w9,w9,#0x1
71030a9648  strb w9,[x8, #0x118]
71030a964c  ldr x8,[x20]
71030a9650  cbz x8,0x71030a9660
71030a9654  ldrb w9,[x8, #0x118]
71030a9658  orr w9,w9,#0x1
71030a965c  strb w9,[x8, #0x118]
71030a9660  ldr x8,[x19, #0xf60]
71030a9664  cbz x8,0x71030a96a0
71030a9668  ldrb w9,[x8, #0xe0]
71030a966c  cbz w9,0x71030a9680
71030a9670  ldr x9,[x8, #0xc8]
71030a9674  cbz x9,0x71030a9680
71030a9678  mov w10,#0x101
71030a967c  strh w10,[x9, #0x30]
71030a9680  ldr x9,[x8, #0xd8]
71030a9684  cbz x9,0x71030a9690
71030a9688  mov w10,#0x1
71030a968c  strb w10,[x9, #0x21]
71030a9690  ldrb w9,[x8, #0xe0]
71030a9694  cbz w9,0x71030a96a0
71030a9698  ldr x8,[x8, #0xb0]
71030a969c  strb wzr,[x8, #0x10]
71030a96a0  ldr x8,[x20]
71030a96a4  cbz x8,0x71030a96e0
71030a96a8  ldrb w9,[x8, #0xe0]
71030a96ac  cbz w9,0x71030a96c0
71030a96b0  ldr x9,[x8, #0xc8]
71030a96b4  cbz x9,0x71030a96c0
71030a96b8  mov w10,#0x101
71030a96bc  strh w10,[x9, #0x30]
71030a96c0  ldr x9,[x8, #0xd8]
71030a96c4  cbz x9,0x71030a96d0
71030a96c8  mov w10,#0x1
71030a96cc  strb w10,[x9, #0x21]
71030a96d0  ldrb w9,[x8, #0xe0]
71030a96d4  cbz w9,0x71030a96e0
71030a96d8  ldr x8,[x8, #0xb0]
71030a96dc  strb wzr,[x8, #0x10]
71030a96e0  ldr x8,[x19, #0xf58]
71030a96e4  ldr x9,[x8, #0x320]
71030a96e8  ldr x9,[x9, #0x48]
71030a96ec  ldr x9,[x9, #0x320]
71030a96f0  ldr x10,[x9, #0x40]
71030a96f4  ldp x9,x11,[x10]
71030a96f8  subs x10,x11,x9
71030a96fc  b.eq 0x71030a9764
71030a9700  asr x10,x10,#0x4
71030a9704  mul x10,x10,x25
71030a9708  cmp x9,x11
71030a970c  b.eq 0x71030a974c
71030a9710  mov x13,#0x208b
71030a9714  movk x13,#0x7d38, LSL #16
71030a9718  movk x13,#0x14, LSL #32
71030a971c  mov x12,x9
71030a9720  ldr w14,[x12]
71030a9724  cbnz w14,0x71030a9738
71030a9728  ldr x14,[x12, #0x8]
71030a972c  and x14,x14,#0xffffffffff
71030a9730  cmp x14,x13
71030a9734  b.eq 0x71030a9750
71030a9738  add x12,x12,#0x70
71030a973c  cmp x11,x12
71030a9740  b.ne 0x71030a9720
71030a9744  mov x12,x11
71030a9748  b 0x71030a9750
71030a974c  mov x12,x9
71030a9750  sub x9,x12,x9
71030a9754  asr x9,x9,#0x4
71030a9758  mul x9,x9,x25
71030a975c  cmp x9,x10
71030a9760  b.cc 0x71030a9768
71030a9764  mov w9,#0xffffffff
71030a9768  str w9,[x19, #0xfd0]
71030a976c  ldr x9,[x8, #0x320]
71030a9770  ldr x9,[x9, #0x48]
71030a9774  ldr x9,[x9, #0x320]
71030a9778  ldr x10,[x9, #0x40]
71030a977c  ldp x9,x11,[x10]
71030a9780  subs x10,x11,x9
71030a9784  b.eq 0x71030a97ec
71030a9788  asr x10,x10,#0x4
71030a978c  mul x10,x10,x25
71030a9790  cmp x9,x11
71030a9794  b.eq 0x71030a97d4
71030a9798  mov x13,#0x60bc
71030a979c  movk x13,#0x42b4, LSL #16
71030a97a0  movk x13,#0x13, LSL #32
71030a97a4  mov x12,x9
71030a97a8  ldr w14,[x12]
71030a97ac  cbnz w14,0x71030a97c0
71030a97b0  ldr x14,[x12, #0x8]
71030a97b4  and x14,x14,#0xffffffffff
71030a97b8  cmp x14,x13
71030a97bc  b.eq 0x71030a97d8
71030a97c0  add x12,x12,#0x70
71030a97c4  cmp x11,x12
71030a97c8  b.ne 0x71030a97a8
71030a97cc  mov x12,x11
71030a97d0  b 0x71030a97d8
71030a97d4  mov x12,x9
71030a97d8  sub x9,x12,x9
71030a97dc  asr x9,x9,#0x4
71030a97e0  mul x9,x9,x25
71030a97e4  cmp x9,x10
71030a97e8  b.cc 0x71030a97f0
71030a97ec  mov w9,#0xffffffff
71030a97f0  str w9,[x19, #0xfd4]
71030a97f4  ldr x9,[x8, #0x320]
71030a97f8  ldr x9,[x9, #0x48]
71030a97fc  ldr x9,[x9, #0x320]
71030a9800  ldr x10,[x9, #0x40]
71030a9804  ldp x9,x11,[x10]
71030a9808  subs x10,x11,x9
71030a980c  b.eq 0x71030a9874
71030a9810  asr x10,x10,#0x4
71030a9814  mul x10,x10,x25
71030a9818  cmp x9,x11
71030a981c  b.eq 0x71030a985c
71030a9820  mov x13,#0x221d
71030a9824  movk x13,#0x8356, LSL #16
71030a9828  movk x13,#0x16, LSL #32
71030a982c  mov x12,x9
71030a9830  ldr w14,[x12]
71030a9834  cbnz w14,0x71030a9848
71030a9838  ldr x14,[x12, #0x8]
71030a983c  and x14,x14,#0xffffffffff
71030a9840  cmp x14,x13
71030a9844  b.eq 0x71030a9860
71030a9848  add x12,x12,#0x70
71030a984c  cmp x11,x12
71030a9850  b.ne 0x71030a9830
71030a9854  mov x12,x11
71030a9858  b 0x71030a9860
71030a985c  mov x12,x9
71030a9860  sub x9,x12,x9
71030a9864  asr x9,x9,#0x4
71030a9868  mul x9,x9,x25
71030a986c  cmp x9,x10
71030a9870  b.cc 0x71030a9878
71030a9874  mov w9,#0xffffffff
71030a9878  str w9,[x19, #0xfd8]
71030a987c  ldr x8,[x8, #0x320]
71030a9880  ldr x8,[x8, #0x48]
71030a9884  ldr x8,[x8, #0x320]
71030a9888  ldr x9,[x8, #0x40]
71030a988c  ldp x8,x10,[x9]
71030a9890  subs x9,x10,x8
71030a9894  b.eq 0x71030a98fc
71030a9898  asr x9,x9,#0x4
71030a989c  mul x9,x9,x25
71030a98a0  cmp x8,x10
71030a98a4  b.eq 0x71030a98e4
71030a98a8  mov x12,#0x8024
71030a98ac  movk x12,#0xf8ad, LSL #16
71030a98b0  movk x12,#0x15, LSL #32
71030a98b4  mov x11,x8
71030a98b8  ldr w13,[x11]
71030a98bc  cbnz w13,0x71030a98d0
71030a98c0  ldr x13,[x11, #0x8]
71030a98c4  and x13,x13,#0xffffffffff
71030a98c8  cmp x13,x12
71030a98cc  b.eq 0x71030a98e8
71030a98d0  add x11,x11,#0x70
71030a98d4  cmp x10,x11
71030a98d8  b.ne 0x71030a98b8
71030a98dc  mov x11,x10
71030a98e0  b 0x71030a98e8
71030a98e4  mov x11,x8
71030a98e8  sub x8,x11,x8
71030a98ec  asr x8,x8,#0x4
71030a98f0  mul x8,x8,x25
71030a98f4  cmp x8,x9
71030a98f8  b.cc 0x71030a9900
71030a98fc  mov w8,#0xffffffff
71030a9900  str w8,[x19, #0xfdc]
71030a9904  str wzr,[x19, #0xf94]
71030a9908  adrp x8,0x71052b9000
71030a990c  add x8,x8,#0x230
71030a9910  stp xzr,xzr,[sp, #0xf0]
71030a9914  str wzr,[sp, #0xe0]
71030a9918  stp xzr,xzr,[sp, #0xd0]
71030a991c  ldarb w8,[x8]
71030a9920  tbz w8,#0x0,0x71030a9a44
71030a9924  ldr x8,[x19, #0x900]
71030a9928  mov v0.16B,v4.16B
71030a992c  mov x9,x8
71030a9930  ld1 {v0.S}[0],[x9], #0x4
71030a9934  ld1 {v0.S}[1],[x9]
71030a9938  add x9,x8,#0x8
71030a993c  ld1 {v0.S}[2],[x9]
71030a9940  adrp x9,0x7104472000
71030a9944  ldr s3,[x9, #0x6e0]
71030a9948  add x2,sp,#0xd0
71030a994c  str q0,[sp, #0xd0]
71030a9950  ldp s1,s2,[x8, #0x10]
71030a9954  fmul s2,s2,s3
71030a9958  fmul s1,s1,s3
71030a995c  mov v4.S[0x0],v2.S[0x0]
71030a9960  mov v4.S[0x1],v1.S[0x0]
71030a9964  str q4,[sp, #0xf0]
71030a9968  ldr s1,[x8, #0xc]
71030a996c  fmul s1,s1,s3
71030a9970  str s1,[sp, #0xe0]
71030a9974  ldr x19,[x19, #0x308]
71030a9978  str s1,[x19, #0x3e0]
71030a997c  ldr x1,[x19, #0x8]
71030a9980  str q0,[x19, #0x3d0]
71030a9984  str q4,[x19, #0x3f0]
71030a9988  ldr x8,[x21, #0x9d8]
71030a998c  ldr x8,[x8]
71030a9990  ldr x0,[x8, #0x1c0]
71030a9994  bl 0x7103159960
71030a9998  mov w8,#0x1
71030a999c  strb w8,[x19, #0xe0]
71030a99a0  add sp,sp,#0x220
71030a99a4  ldp d9,d8,[sp, #0x10]
71030a99a8  ldp x29,x30,[sp, #0x70]
71030a99ac  ldp x20,x19,[sp, #0x60]
71030a99b0  ldp x22,x21,[sp, #0x50]
71030a99b4  ldp x24,x23,[sp, #0x40]
71030a99b8  ldp x26,x25,[sp, #0x30]
71030a99bc  ldp x28,x27,[sp, #0x20]
71030a99c0  ldr d10,[sp], #0x80
71030a99c4  ret
71030a99c8  cbz x26,0x71030a81f0
71030a99cc  ldr x8,[x26, #0x8]
71030a99d0  ldr x8,[x8, #0x108]
71030a99d4  cbz x8,0x71030a81f0
71030a99d8  strb wzr,[x8, #0x44]
71030a99dc  ldp x21,x22,[x24, #0x18]
71030a99e0  cmp x21,x22
71030a99e4  b.ne 0x71030a81f8
71030a99e8  b 0x71030a8230
71030a99ec  cbz x24,0x71030a8230
71030a99f0  ldr x8,[x24, #0x8]
71030a99f4  ldr x8,[x8, #0x108]
71030a99f8  cbz x8,0x71030a8230
71030a99fc  strb wzr,[x8, #0x44]
71030a9a00  b 0x71030a8230
71030a9a04  adrp x0,0x7105314000
71030a9a08  add x0,x0,#0x4d8
71030a9a0c  bl 0x71039c06b0
71030a9a10  cbz w0,0x71030a94e0
71030a9a14  bl 0x7101764000
71030a9a18  adrp x0,0x7101763000
71030a9a1c  add x0,x0,#0xc40
71030a9a20  adrp x1,0x71052c5000
71030a9a24  add x1,x1,#0x180
71030a9a28  adrp x2,0x7104f17000
71030a9a2c  add x2,x2,#0x0
71030a9a30  bl 0x71000001c0
71030a9a34  adrp x0,0x7105314000
71030a9a38  add x0,x0,#0x4d8
71030a9a3c  bl 0x71039c06c0
71030a9a40  b 0x71030a94e0
71030a9a44  adrp x0,0x71052b9000
71030a9a48  add x0,x0,#0x230
71030a9a4c  bl 0x71039c06b0
71030a9a50  movi v4.2D,#0x0
71030a9a54  cbz w0,0x71030a9924
71030a9a58  adrp x8,0x710446a000
71030a9a5c  adrp x10,0x7104467000
71030a9a60  ldr q1,[x10, #0xcf0]
71030a9a64  ldr q0,[x8, #0xb0]
71030a9a68  mov w9,#0x41c80000
71030a9a6c  adrp x11,0x71052b9000
71030a9a70  add x11,x11,#0x240
71030a9a74  adrp x0,0x71052b9000
71030a9a78  add x0,x0,#0x230
71030a9a7c  str w9,[x11, #0x10]
71030a9a80  str q0,[x11]
71030a9a84  str q1,[x11, #0x20]
71030a9a88  bl 0x71039c06c0
71030a9a8c  movi v4.2D,#0x0
71030a9a90  b 0x71030a9924
