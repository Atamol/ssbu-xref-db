// addr:      7101fd5cf0
// offset:    0x1fd5cf0
// name:      FUN_7101fd5cf0
// mangled:   
// size:      5212

7101fd5cf0  sub sp,sp,#0x50
7101fd5cf4  str x23,[sp, #0x10]
7101fd5cf8  stp x22,x21,[sp, #0x20]
7101fd5cfc  stp x20,x19,[sp, #0x30]
7101fd5d00  stp x29,x30,[sp, #0x40]
7101fd5d04  add x29,sp,#0x40
7101fd5d08  ldr x8,[x1, #0x20]
7101fd5d0c  mov w21,w2
7101fd5d10  mov x19,x1
7101fd5d14  mov x20,x0
7101fd5d18  mov w22,#0xb9d8
7101fd5d1c  movk w22,#0xfff0, LSL #16
7101fd5d20  cmp w2,#0x1
7101fd5d24  b.lt 0x7101fd5d48
7101fd5d28  ldr x8,[x8]
7101fd5d2c  ldr x10,[x19, #0x10]
7101fd5d30  adrp x9,0x7104862000
7101fd5d34  add x9,x9,#0x960
7101fd5d38  add x8,x8,w21, SXTW  #0x4
7101fd5d3c  cmp x8,x10
7101fd5d40  csel x1,x8,x9,cc
7101fd5d44  b 0x7101fd5da8
7101fd5d48  add w9,w22,#0x1
7101fd5d4c  cmp w21,w9
7101fd5d50  b.ge 0x7101fd5d68
7101fd5d54  cmp w21,w22
7101fd5d58  b.ne 0x7101fd5d74
7101fd5d5c  ldr x8,[x19, #0x18]
7101fd5d60  add x1,x8,#0x40
7101fd5d64  b 0x7101fd5da8
7101fd5d68  ldr x8,[x19, #0x10]
7101fd5d6c  add x1,x8,w21, SXTW  #0x4
7101fd5d70  b 0x7101fd5da8
7101fd5d74  ldr x8,[x8]
7101fd5d78  ldr w9,[x8, #0x8]
7101fd5d7c  adrp x1,0x7104862000
7101fd5d80  add x1,x1,#0x960
7101fd5d84  cmp w9,#0x16
7101fd5d88  b.eq 0x7101fd5da8
7101fd5d8c  ldr x8,[x8]
7101fd5d90  sub w9,w22,w21
7101fd5d94  add x10,x8,w9, SXTW  #0x4
7101fd5d98  ldrb w8,[x8, #0xa]
7101fd5d9c  add x10,x10,#0x10
7101fd5da0  cmp w9,w8
7101fd5da4  csel x1,x1,x10,gt
7101fd5da8  adrp x2,0x710434b000
7101fd5dac  add x2,x2,#0x4c
7101fd5db0  mov x0,x19
7101fd5db4  bl 0x71038f4d40
7101fd5db8  ldr x23,[x19, #0x10]
7101fd5dbc  ldur w8,[x23, #-0x8]
7101fd5dc0  cmp w8,#0x3
7101fd5dc4  b.ne 0x7101fd5dd0
7101fd5dc8  ldur w8,[x23, #-0x10]
7101fd5dcc  b 0x7101fd5e4c
7101fd5dd0  cmp w8,#0x13
7101fd5dd4  b.ne 0x7101fd5de8
7101fd5dd8  ldur x8,[x23, #-0x10]
7101fd5ddc  scvtf s0,x8
7101fd5de0  fmov w8,s0
7101fd5de4  b 0x7101fd5e4c
7101fd5de8  and w8,w8,#0xf
7101fd5dec  cmp w8,#0x4
7101fd5df0  b.ne 0x7101fd5e48
7101fd5df4  ldur x8,[x23, #-0x10]
7101fd5df8  add x0,x8,#0x18
7101fd5dfc  mov x1,sp
7101fd5e00  bl 0x7103907f00
7101fd5e04  ldur x8,[x23, #-0x10]
7101fd5e08  ldrb w9,[x8, #0x8]
7101fd5e0c  cmp w9,#0x4
7101fd5e10  b.ne 0x7101fd5e1c
7101fd5e14  ldrb w8,[x8, #0xb]
7101fd5e18  b 0x7101fd5e20
7101fd5e1c  ldr x8,[x8, #0x10]
7101fd5e20  add x8,x8,#0x1
7101fd5e24  cmp x0,x8
7101fd5e28  b.ne 0x7101fd5e48
7101fd5e2c  ldr x9,[sp]
7101fd5e30  scvtf s0,x9
7101fd5e34  ldr w8,[sp, #0x8]
7101fd5e38  cmp w8,#0x13
7101fd5e3c  fmov w10,s0
7101fd5e40  csel w8,w10,w9,eq
7101fd5e44  b 0x7101fd5e4c
7101fd5e48  mov w8,wzr
7101fd5e4c  str w8,[x20]
7101fd5e50  ldr x8,[x19, #0x10]
7101fd5e54  ldr x9,[x19, #0x20]
7101fd5e58  sub x8,x8,#0x10
7101fd5e5c  cmp w21,#0x1
7101fd5e60  str x8,[x19, #0x10]
7101fd5e64  b.lt 0x7101fd5e84
7101fd5e68  ldr x9,[x9]
7101fd5e6c  add x9,x9,w21, SXTW  #0x4
7101fd5e70  adrp x10,0x7104862000
7101fd5e74  add x10,x10,#0x960
7101fd5e78  cmp x9,x8
7101fd5e7c  csel x1,x9,x10,cc
7101fd5e80  b 0x7101fd5ee0
7101fd5e84  add w10,w22,#0x1
7101fd5e88  cmp w21,w10
7101fd5e8c  b.ge 0x7101fd5ea4
7101fd5e90  cmp w21,w22
7101fd5e94  b.ne 0x7101fd5eac
7101fd5e98  ldr x8,[x19, #0x18]
7101fd5e9c  add x1,x8,#0x40
7101fd5ea0  b 0x7101fd5ee0
7101fd5ea4  add x1,x8,w21, SXTW  #0x4
7101fd5ea8  b 0x7101fd5ee0
7101fd5eac  ldr x8,[x9]
7101fd5eb0  ldr w9,[x8, #0x8]
7101fd5eb4  adrp x1,0x7104862000
7101fd5eb8  add x1,x1,#0x960
7101fd5ebc  cmp w9,#0x16
7101fd5ec0  b.eq 0x7101fd5ee0
7101fd5ec4  ldr x8,[x8]
7101fd5ec8  sub w9,w22,w21
7101fd5ecc  add x10,x8,w9, SXTW  #0x4
7101fd5ed0  ldrb w8,[x8, #0xa]
7101fd5ed4  add x10,x10,#0x10
7101fd5ed8  cmp w9,w8
7101fd5edc  csel x1,x1,x10,gt
7101fd5ee0  adrp x2,0x7104433000
7101fd5ee4  add x2,x2,#0xdee
7101fd5ee8  mov x0,x19
7101fd5eec  bl 0x71038f4d40
7101fd5ef0  ldr x8,[x19, #0x10]
7101fd5ef4  sub x23,x8,#0x10
7101fd5ef8  ldur w8,[x8, #-0x8]
7101fd5efc  cmp w8,#0x13
7101fd5f00  b.ne 0x7101fd5f0c
7101fd5f04  ldr x8,[x23]
7101fd5f08  b 0x7101fd5f6c
7101fd5f0c  ldr w8,[x23, #0x8]
7101fd5f10  cmp w8,#0x13
7101fd5f14  b.eq 0x7101fd5f04
7101fd5f18  cmp w8,#0x3
7101fd5f1c  b.eq 0x7101fd63d4
7101fd5f20  and w8,w8,#0xf
7101fd5f24  cmp w8,#0x4
7101fd5f28  b.ne 0x7101fd5f68
7101fd5f2c  ldr x8,[x23]
7101fd5f30  add x0,x8,#0x18
7101fd5f34  mov x1,sp
7101fd5f38  bl 0x7103907f00
7101fd5f3c  ldr x8,[x23]
7101fd5f40  ldrb w9,[x8, #0x8]
7101fd5f44  cmp w9,#0x4
7101fd5f48  b.ne 0x7101fd5f54
7101fd5f4c  ldrb w8,[x8, #0xb]
7101fd5f50  b 0x7101fd5f58
7101fd5f54  ldr x8,[x8, #0x10]
7101fd5f58  add x8,x8,#0x1
7101fd5f5c  mov x23,sp
7101fd5f60  cmp x0,x8
7101fd5f64  b.eq 0x7101fd5f0c
7101fd5f68  mov x8,xzr
7101fd5f6c  str w8,[x20, #0x4]
7101fd5f70  ldr x8,[x19, #0x10]
7101fd5f74  ldr x9,[x19, #0x20]
7101fd5f78  sub x8,x8,#0x10
7101fd5f7c  cmp w21,#0x1
7101fd5f80  str x8,[x19, #0x10]
7101fd5f84  b.lt 0x7101fd5fa4
7101fd5f88  ldr x9,[x9]
7101fd5f8c  add x9,x9,w21, SXTW  #0x4
7101fd5f90  adrp x10,0x7104862000
7101fd5f94  add x10,x10,#0x960
7101fd5f98  cmp x9,x8
7101fd5f9c  csel x1,x9,x10,cc
7101fd5fa0  b 0x7101fd6000
7101fd5fa4  add w10,w22,#0x1
7101fd5fa8  cmp w21,w10
7101fd5fac  b.ge 0x7101fd5fc4
7101fd5fb0  cmp w21,w22
7101fd5fb4  b.ne 0x7101fd5fcc
7101fd5fb8  ldr x8,[x19, #0x18]
7101fd5fbc  add x1,x8,#0x40
7101fd5fc0  b 0x7101fd6000
7101fd5fc4  add x1,x8,w21, SXTW  #0x4
7101fd5fc8  b 0x7101fd6000
7101fd5fcc  ldr x8,[x9]
7101fd5fd0  ldr w9,[x8, #0x8]
7101fd5fd4  adrp x1,0x7104862000
7101fd5fd8  add x1,x1,#0x960
7101fd5fdc  cmp w9,#0x16
7101fd5fe0  b.eq 0x7101fd6000
7101fd5fe4  ldr x8,[x8]
7101fd5fe8  sub w9,w22,w21
7101fd5fec  add x10,x8,w9, SXTW  #0x4
7101fd5ff0  ldrb w8,[x8, #0xa]
7101fd5ff4  add x10,x10,#0x10
7101fd5ff8  cmp w9,w8
7101fd5ffc  csel x1,x1,x10,gt
7101fd6000  adrp x2,0x7104281000
7101fd6004  add x2,x2,#0x701
7101fd6008  mov x0,x19
7101fd600c  bl 0x71038f4d40
7101fd6010  ldr x8,[x19, #0x10]
7101fd6014  sub x23,x8,#0x10
7101fd6018  ldur w8,[x8, #-0x8]
7101fd601c  cmp w8,#0x13
7101fd6020  b.ne 0x7101fd602c
7101fd6024  ldr x8,[x23]
7101fd6028  b 0x7101fd608c
7101fd602c  ldr w8,[x23, #0x8]
7101fd6030  cmp w8,#0x13
7101fd6034  b.eq 0x7101fd6024
7101fd6038  cmp w8,#0x3
7101fd603c  b.eq 0x7101fd6404
7101fd6040  and w8,w8,#0xf
7101fd6044  cmp w8,#0x4
7101fd6048  b.ne 0x7101fd6088
7101fd604c  ldr x8,[x23]
7101fd6050  add x0,x8,#0x18
7101fd6054  mov x1,sp
7101fd6058  bl 0x7103907f00
7101fd605c  ldr x8,[x23]
7101fd6060  ldrb w9,[x8, #0x8]
7101fd6064  cmp w9,#0x4
7101fd6068  b.ne 0x7101fd6074
7101fd606c  ldrb w8,[x8, #0xb]
7101fd6070  b 0x7101fd6078
7101fd6074  ldr x8,[x8, #0x10]
7101fd6078  add x8,x8,#0x1
7101fd607c  mov x23,sp
7101fd6080  cmp x0,x8
7101fd6084  b.eq 0x7101fd602c
7101fd6088  mov x8,xzr
7101fd608c  str w8,[x20, #0x8]
7101fd6090  ldr x8,[x19, #0x10]
7101fd6094  ldr x9,[x19, #0x20]
7101fd6098  sub x8,x8,#0x10
7101fd609c  cmp w21,#0x1
7101fd60a0  str x8,[x19, #0x10]
7101fd60a4  b.lt 0x7101fd60c4
7101fd60a8  ldr x9,[x9]
7101fd60ac  add x9,x9,w21, SXTW  #0x4
7101fd60b0  adrp x10,0x7104862000
7101fd60b4  add x10,x10,#0x960
7101fd60b8  cmp x9,x8
7101fd60bc  csel x1,x9,x10,cc
7101fd60c0  b 0x7101fd6120
7101fd60c4  add w10,w22,#0x1
7101fd60c8  cmp w21,w10
7101fd60cc  b.ge 0x7101fd60e4
7101fd60d0  cmp w21,w22
7101fd60d4  b.ne 0x7101fd60ec
7101fd60d8  ldr x8,[x19, #0x18]
7101fd60dc  add x1,x8,#0x40
7101fd60e0  b 0x7101fd6120
7101fd60e4  add x1,x8,w21, SXTW  #0x4
7101fd60e8  b 0x7101fd6120
7101fd60ec  ldr x8,[x9]
7101fd60f0  ldr w9,[x8, #0x8]
7101fd60f4  adrp x1,0x7104862000
7101fd60f8  add x1,x1,#0x960
7101fd60fc  cmp w9,#0x16
7101fd6100  b.eq 0x7101fd6120
7101fd6104  ldr x8,[x8]
7101fd6108  sub w9,w22,w21
7101fd610c  add x10,x8,w9, SXTW  #0x4
7101fd6110  ldrb w8,[x8, #0xa]
7101fd6114  add x10,x10,#0x10
7101fd6118  cmp w9,w8
7101fd611c  csel x1,x1,x10,gt
7101fd6120  adrp x2,0x71042a3000
7101fd6124  add x2,x2,#0xd47
7101fd6128  mov x0,x19
7101fd612c  bl 0x71038f4d40
7101fd6130  ldr x8,[x19, #0x10]
7101fd6134  sub x23,x8,#0x10
7101fd6138  ldur w8,[x8, #-0x8]
7101fd613c  cmp w8,#0x13
7101fd6140  b.ne 0x7101fd614c
7101fd6144  ldr x8,[x23]
7101fd6148  b 0x7101fd61ac
7101fd614c  ldr w8,[x23, #0x8]
7101fd6150  cmp w8,#0x13
7101fd6154  b.eq 0x7101fd6144
7101fd6158  cmp w8,#0x3
7101fd615c  b.eq 0x7101fd6434
7101fd6160  and w8,w8,#0xf
7101fd6164  cmp w8,#0x4
7101fd6168  b.ne 0x7101fd61a8
7101fd616c  ldr x8,[x23]
7101fd6170  add x0,x8,#0x18
7101fd6174  mov x1,sp
7101fd6178  bl 0x7103907f00
7101fd617c  ldr x8,[x23]
7101fd6180  ldrb w9,[x8, #0x8]
7101fd6184  cmp w9,#0x4
7101fd6188  b.ne 0x7101fd6194
7101fd618c  ldrb w8,[x8, #0xb]
7101fd6190  b 0x7101fd6198
7101fd6194  ldr x8,[x8, #0x10]
7101fd6198  add x8,x8,#0x1
7101fd619c  mov x23,sp
7101fd61a0  cmp x0,x8
7101fd61a4  b.eq 0x7101fd614c
7101fd61a8  mov x8,xzr
7101fd61ac  str w8,[x20, #0xc]
7101fd61b0  ldr x8,[x19, #0x10]
7101fd61b4  ldr x9,[x19, #0x20]
7101fd61b8  sub x8,x8,#0x10
7101fd61bc  cmp w21,#0x1
7101fd61c0  str x8,[x19, #0x10]
7101fd61c4  b.lt 0x7101fd61e4
7101fd61c8  ldr x9,[x9]
7101fd61cc  add x9,x9,w21, SXTW  #0x4
7101fd61d0  adrp x10,0x7104862000
7101fd61d4  add x10,x10,#0x960
7101fd61d8  cmp x9,x8
7101fd61dc  csel x1,x9,x10,cc
7101fd61e0  b 0x7101fd6240
7101fd61e4  add w10,w22,#0x1
7101fd61e8  cmp w21,w10
7101fd61ec  b.ge 0x7101fd6204
7101fd61f0  cmp w21,w22
7101fd61f4  b.ne 0x7101fd620c
7101fd61f8  ldr x8,[x19, #0x18]
7101fd61fc  add x1,x8,#0x40
7101fd6200  b 0x7101fd6240
7101fd6204  add x1,x8,w21, SXTW  #0x4
7101fd6208  b 0x7101fd6240
7101fd620c  ldr x8,[x9]
7101fd6210  ldr w9,[x8, #0x8]
7101fd6214  adrp x1,0x7104862000
7101fd6218  add x1,x1,#0x960
7101fd621c  cmp w9,#0x16
7101fd6220  b.eq 0x7101fd6240
7101fd6224  ldr x8,[x8]
7101fd6228  sub w9,w22,w21
7101fd622c  add x10,x8,w9, SXTW  #0x4
7101fd6230  ldrb w8,[x8, #0xa]
7101fd6234  add x10,x10,#0x10
7101fd6238  cmp w9,w8
7101fd623c  csel x1,x1,x10,gt
7101fd6240  adrp x2,0x71042e8000
7101fd6244  add x2,x2,#0x64
7101fd6248  mov x0,x19
7101fd624c  bl 0x71038f4d40
7101fd6250  ldr x8,[x19, #0x10]
7101fd6254  sub x23,x8,#0x10
7101fd6258  ldur w8,[x8, #-0x8]
7101fd625c  cmp w8,#0x13
7101fd6260  b.ne 0x7101fd626c
7101fd6264  ldr x8,[x23]
7101fd6268  b 0x7101fd62cc
7101fd626c  ldr w8,[x23, #0x8]
7101fd6270  cmp w8,#0x13
7101fd6274  b.eq 0x7101fd6264
7101fd6278  cmp w8,#0x3
7101fd627c  b.eq 0x7101fd6464
7101fd6280  and w8,w8,#0xf
7101fd6284  cmp w8,#0x4
7101fd6288  b.ne 0x7101fd62c8
7101fd628c  ldr x8,[x23]
7101fd6290  add x0,x8,#0x18
7101fd6294  mov x1,sp
7101fd6298  bl 0x7103907f00
7101fd629c  ldr x8,[x23]
7101fd62a0  ldrb w9,[x8, #0x8]
7101fd62a4  cmp w9,#0x4
7101fd62a8  b.ne 0x7101fd62b4
7101fd62ac  ldrb w8,[x8, #0xb]
7101fd62b0  b 0x7101fd62b8
7101fd62b4  ldr x8,[x8, #0x10]
7101fd62b8  add x8,x8,#0x1
7101fd62bc  mov x23,sp
7101fd62c0  cmp x0,x8
7101fd62c4  b.eq 0x7101fd626c
7101fd62c8  mov x8,xzr
7101fd62cc  str w8,[x20, #0x10]
7101fd62d0  ldr x8,[x19, #0x10]
7101fd62d4  ldr x9,[x19, #0x20]
7101fd62d8  sub x8,x8,#0x10
7101fd62dc  cmp w21,#0x1
7101fd62e0  str x8,[x19, #0x10]
7101fd62e4  b.lt 0x7101fd6304
7101fd62e8  ldr x9,[x9]
7101fd62ec  add x9,x9,w21, SXTW  #0x4
7101fd62f0  adrp x10,0x7104862000
7101fd62f4  add x10,x10,#0x960
7101fd62f8  cmp x9,x8
7101fd62fc  csel x1,x9,x10,cc
7101fd6300  b 0x7101fd6360
7101fd6304  add w10,w22,#0x1
7101fd6308  cmp w21,w10
7101fd630c  b.ge 0x7101fd6324
7101fd6310  cmp w21,w22
7101fd6314  b.ne 0x7101fd632c
7101fd6318  ldr x8,[x19, #0x18]
7101fd631c  add x1,x8,#0x40
7101fd6320  b 0x7101fd6360
7101fd6324  add x1,x8,w21, SXTW  #0x4
7101fd6328  b 0x7101fd6360
7101fd632c  ldr x8,[x9]
7101fd6330  ldr w9,[x8, #0x8]
7101fd6334  adrp x1,0x7104862000
7101fd6338  add x1,x1,#0x960
7101fd633c  cmp w9,#0x16
7101fd6340  b.eq 0x7101fd6360
7101fd6344  ldr x8,[x8]
7101fd6348  sub w9,w22,w21
7101fd634c  add x10,x8,w9, SXTW  #0x4
7101fd6350  ldrb w8,[x8, #0xa]
7101fd6354  add x10,x10,#0x10
7101fd6358  cmp w9,w8
7101fd635c  csel x1,x1,x10,gt
7101fd6360  adrp x2,0x71043d0000
7101fd6364  add x2,x2,#0x1b8
7101fd6368  mov x0,x19
7101fd636c  bl 0x71038f4d40
7101fd6370  ldr x23,[x19, #0x10]
7101fd6374  ldur w8,[x23, #-0x8]
7101fd6378  cmp w8,#0x3
7101fd637c  b.ne 0x7101fd6388
7101fd6380  ldur w8,[x23, #-0x10]
7101fd6384  b 0x7101fd64c4
7101fd6388  cmp w8,#0x13
7101fd638c  b.ne 0x7101fd63a0
7101fd6390  ldur x8,[x23, #-0x10]
7101fd6394  scvtf s0,x8
7101fd6398  fmov w8,s0
7101fd639c  b 0x7101fd64c4
7101fd63a0  and w8,w8,#0xf
7101fd63a4  cmp w8,#0x4
7101fd63a8  b.ne 0x7101fd64c0
7101fd63ac  ldur x8,[x23, #-0x10]
7101fd63b0  add x0,x8,#0x18
7101fd63b4  mov x1,sp
7101fd63b8  bl 0x7103907f00
7101fd63bc  ldur x8,[x23, #-0x10]
7101fd63c0  ldrb w9,[x8, #0x8]
7101fd63c4  cmp w9,#0x4
7101fd63c8  b.ne 0x7101fd6494
7101fd63cc  ldrb w8,[x8, #0xb]
7101fd63d0  b 0x7101fd6498
7101fd63d4  ldr s0,[x23]
7101fd63d8  adrp x8,0x7104472000
7101fd63dc  ldr s1,[x8, #0x8f4]
7101fd63e0  frintm s0,s0
7101fd63e4  fcmp s0,s1
7101fd63e8  b.lt 0x7101fd5f68
7101fd63ec  adrp x8,0x7104472000
7101fd63f0  ldr s1,[x8, #0xe68]
7101fd63f4  fcmp s0,s1
7101fd63f8  b.pl 0x7101fd5f68
7101fd63fc  fcvtzs x8,s0
7101fd6400  b 0x7101fd5f6c
7101fd6404  ldr s0,[x23]
7101fd6408  adrp x8,0x7104472000
7101fd640c  ldr s1,[x8, #0x8f4]
7101fd6410  frintm s0,s0
7101fd6414  fcmp s0,s1
7101fd6418  b.lt 0x7101fd6088
7101fd641c  adrp x8,0x7104472000
7101fd6420  ldr s1,[x8, #0xe68]
7101fd6424  fcmp s0,s1
7101fd6428  b.pl 0x7101fd6088
7101fd642c  fcvtzs x8,s0
7101fd6430  b 0x7101fd608c
7101fd6434  ldr s0,[x23]
7101fd6438  adrp x8,0x7104472000
7101fd643c  ldr s1,[x8, #0x8f4]
7101fd6440  frintm s0,s0
7101fd6444  fcmp s0,s1
7101fd6448  b.lt 0x7101fd61a8
7101fd644c  adrp x8,0x7104472000
7101fd6450  ldr s1,[x8, #0xe68]
7101fd6454  fcmp s0,s1
7101fd6458  b.pl 0x7101fd61a8
7101fd645c  fcvtzs x8,s0
7101fd6460  b 0x7101fd61ac
7101fd6464  ldr s0,[x23]
7101fd6468  adrp x8,0x7104472000
7101fd646c  ldr s1,[x8, #0x8f4]
7101fd6470  frintm s0,s0
7101fd6474  fcmp s0,s1
7101fd6478  b.lt 0x7101fd62c8
7101fd647c  adrp x8,0x7104472000
7101fd6480  ldr s1,[x8, #0xe68]
7101fd6484  fcmp s0,s1
7101fd6488  b.pl 0x7101fd62c8
7101fd648c  fcvtzs x8,s0
7101fd6490  b 0x7101fd62cc
7101fd6494  ldr x8,[x8, #0x10]
7101fd6498  add x8,x8,#0x1
7101fd649c  cmp x0,x8
7101fd64a0  b.ne 0x7101fd64c0
7101fd64a4  ldr x9,[sp]
7101fd64a8  scvtf s0,x9
7101fd64ac  ldr w8,[sp, #0x8]
7101fd64b0  cmp w8,#0x13
7101fd64b4  fmov w10,s0
7101fd64b8  csel w8,w10,w9,eq
7101fd64bc  b 0x7101fd64c4
7101fd64c0  mov w8,wzr
7101fd64c4  str w8,[x20, #0x14]
7101fd64c8  ldr x8,[x19, #0x10]
7101fd64cc  ldr x9,[x19, #0x20]
7101fd64d0  sub x8,x8,#0x10
7101fd64d4  cmp w21,#0x1
7101fd64d8  str x8,[x19, #0x10]
7101fd64dc  b.lt 0x7101fd64fc
7101fd64e0  ldr x9,[x9]
7101fd64e4  add x9,x9,w21, SXTW  #0x4
7101fd64e8  adrp x10,0x7104862000
7101fd64ec  add x10,x10,#0x960
7101fd64f0  cmp x9,x8
7101fd64f4  csel x1,x9,x10,cc
7101fd64f8  b 0x7101fd6558
7101fd64fc  add w10,w22,#0x1
7101fd6500  cmp w21,w10
7101fd6504  b.ge 0x7101fd651c
7101fd6508  cmp w21,w22
7101fd650c  b.ne 0x7101fd6524
7101fd6510  ldr x8,[x19, #0x18]
7101fd6514  add x1,x8,#0x40
7101fd6518  b 0x7101fd6558
7101fd651c  add x1,x8,w21, SXTW  #0x4
7101fd6520  b 0x7101fd6558
7101fd6524  ldr x8,[x9]
7101fd6528  ldr w9,[x8, #0x8]
7101fd652c  adrp x1,0x7104862000
7101fd6530  add x1,x1,#0x960
7101fd6534  cmp w9,#0x16
7101fd6538  b.eq 0x7101fd6558
7101fd653c  ldr x8,[x8]
7101fd6540  sub w9,w22,w21
7101fd6544  add x10,x8,w9, SXTW  #0x4
7101fd6548  ldrb w8,[x8, #0xa]
7101fd654c  add x10,x10,#0x10
7101fd6550  cmp w9,w8
7101fd6554  csel x1,x1,x10,gt
7101fd6558  adrp x2,0x71042c5000
7101fd655c  add x2,x2,#0xcef
7101fd6560  mov x0,x19
7101fd6564  bl 0x71038f4d40
7101fd6568  ldr x23,[x19, #0x10]
7101fd656c  ldur w8,[x23, #-0x8]
7101fd6570  cmp w8,#0x3
7101fd6574  b.ne 0x7101fd6580
7101fd6578  ldur w8,[x23, #-0x10]
7101fd657c  b 0x7101fd65fc
7101fd6580  cmp w8,#0x13
7101fd6584  b.ne 0x7101fd6598
7101fd6588  ldur x8,[x23, #-0x10]
7101fd658c  scvtf s0,x8
7101fd6590  fmov w8,s0
7101fd6594  b 0x7101fd65fc
7101fd6598  and w8,w8,#0xf
7101fd659c  cmp w8,#0x4
7101fd65a0  b.ne 0x7101fd65f8
7101fd65a4  ldur x8,[x23, #-0x10]
7101fd65a8  add x0,x8,#0x18
7101fd65ac  mov x1,sp
7101fd65b0  bl 0x7103907f00
7101fd65b4  ldur x8,[x23, #-0x10]
7101fd65b8  ldrb w9,[x8, #0x8]
7101fd65bc  cmp w9,#0x4
7101fd65c0  b.ne 0x7101fd65cc
7101fd65c4  ldrb w8,[x8, #0xb]
7101fd65c8  b 0x7101fd65d0
7101fd65cc  ldr x8,[x8, #0x10]
7101fd65d0  add x8,x8,#0x1
7101fd65d4  cmp x0,x8
7101fd65d8  b.ne 0x7101fd65f8
7101fd65dc  ldr x9,[sp]
7101fd65e0  scvtf s0,x9
7101fd65e4  ldr w8,[sp, #0x8]
7101fd65e8  cmp w8,#0x13
7101fd65ec  fmov w10,s0
7101fd65f0  csel w8,w10,w9,eq
7101fd65f4  b 0x7101fd65fc
7101fd65f8  mov w8,wzr
7101fd65fc  str w8,[x20, #0x18]
7101fd6600  ldr x8,[x19, #0x10]
7101fd6604  ldr x9,[x19, #0x20]
7101fd6608  sub x8,x8,#0x10
7101fd660c  cmp w21,#0x1
7101fd6610  str x8,[x19, #0x10]
7101fd6614  b.lt 0x7101fd6634
7101fd6618  ldr x9,[x9]
7101fd661c  add x9,x9,w21, SXTW  #0x4
7101fd6620  adrp x10,0x7104862000
7101fd6624  add x10,x10,#0x960
7101fd6628  cmp x9,x8
7101fd662c  csel x1,x9,x10,cc
7101fd6630  b 0x7101fd6690
7101fd6634  add w10,w22,#0x1
7101fd6638  cmp w21,w10
7101fd663c  b.ge 0x7101fd6654
7101fd6640  cmp w21,w22
7101fd6644  b.ne 0x7101fd665c
7101fd6648  ldr x8,[x19, #0x18]
7101fd664c  add x1,x8,#0x40
7101fd6650  b 0x7101fd6690
7101fd6654  add x1,x8,w21, SXTW  #0x4
7101fd6658  b 0x7101fd6690
7101fd665c  ldr x8,[x9]
7101fd6660  ldr w9,[x8, #0x8]
7101fd6664  adrp x1,0x7104862000
7101fd6668  add x1,x1,#0x960
7101fd666c  cmp w9,#0x16
7101fd6670  b.eq 0x7101fd6690
7101fd6674  ldr x8,[x8]
7101fd6678  sub w9,w22,w21
7101fd667c  add x10,x8,w9, SXTW  #0x4
7101fd6680  ldrb w8,[x8, #0xa]
7101fd6684  add x10,x10,#0x10
7101fd6688  cmp w9,w8
7101fd668c  csel x1,x1,x10,gt
7101fd6690  adrp x2,0x71043bf000
7101fd6694  add x2,x2,#0x398
7101fd6698  mov x0,x19
7101fd669c  bl 0x71038f4d40
7101fd66a0  ldr x23,[x19, #0x10]
7101fd66a4  ldur w8,[x23, #-0x8]
7101fd66a8  cmp w8,#0x3
7101fd66ac  b.ne 0x7101fd66b8
7101fd66b0  ldur w8,[x23, #-0x10]
7101fd66b4  b 0x7101fd6734
7101fd66b8  cmp w8,#0x13
7101fd66bc  b.ne 0x7101fd66d0
7101fd66c0  ldur x8,[x23, #-0x10]
7101fd66c4  scvtf s0,x8
7101fd66c8  fmov w8,s0
7101fd66cc  b 0x7101fd6734
7101fd66d0  and w8,w8,#0xf
7101fd66d4  cmp w8,#0x4
7101fd66d8  b.ne 0x7101fd6730
7101fd66dc  ldur x8,[x23, #-0x10]
7101fd66e0  add x0,x8,#0x18
7101fd66e4  mov x1,sp
7101fd66e8  bl 0x7103907f00
7101fd66ec  ldur x8,[x23, #-0x10]
7101fd66f0  ldrb w9,[x8, #0x8]
7101fd66f4  cmp w9,#0x4
7101fd66f8  b.ne 0x7101fd6704
7101fd66fc  ldrb w8,[x8, #0xb]
7101fd6700  b 0x7101fd6708
7101fd6704  ldr x8,[x8, #0x10]
7101fd6708  add x8,x8,#0x1
7101fd670c  cmp x0,x8
7101fd6710  b.ne 0x7101fd6730
7101fd6714  ldr x9,[sp]
7101fd6718  scvtf s0,x9
7101fd671c  ldr w8,[sp, #0x8]
7101fd6720  cmp w8,#0x13
7101fd6724  fmov w10,s0
7101fd6728  csel w8,w10,w9,eq
7101fd672c  b 0x7101fd6734
7101fd6730  mov w8,wzr
7101fd6734  str w8,[x20, #0x1c]
7101fd6738  ldr x8,[x19, #0x10]
7101fd673c  ldr x9,[x19, #0x20]
7101fd6740  sub x8,x8,#0x10
7101fd6744  cmp w21,#0x1
7101fd6748  str x8,[x19, #0x10]
7101fd674c  b.lt 0x7101fd676c
7101fd6750  ldr x9,[x9]
7101fd6754  add x9,x9,w21, SXTW  #0x4
7101fd6758  adrp x10,0x7104862000
7101fd675c  add x10,x10,#0x960
7101fd6760  cmp x9,x8
7101fd6764  csel x1,x9,x10,cc
7101fd6768  b 0x7101fd67c8
7101fd676c  add w10,w22,#0x1
7101fd6770  cmp w21,w10
7101fd6774  b.ge 0x7101fd678c
7101fd6778  cmp w21,w22
7101fd677c  b.ne 0x7101fd6794
7101fd6780  ldr x8,[x19, #0x18]
7101fd6784  add x1,x8,#0x40
7101fd6788  b 0x7101fd67c8
7101fd678c  add x1,x8,w21, SXTW  #0x4
7101fd6790  b 0x7101fd67c8
7101fd6794  ldr x8,[x9]
7101fd6798  ldr w9,[x8, #0x8]
7101fd679c  adrp x1,0x7104862000
7101fd67a0  add x1,x1,#0x960
7101fd67a4  cmp w9,#0x16
7101fd67a8  b.eq 0x7101fd67c8
7101fd67ac  ldr x8,[x8]
7101fd67b0  sub w9,w22,w21
7101fd67b4  add x10,x8,w9, SXTW  #0x4
7101fd67b8  ldrb w8,[x8, #0xa]
7101fd67bc  add x10,x10,#0x10
7101fd67c0  cmp w9,w8
7101fd67c4  csel x1,x1,x10,gt
7101fd67c8  adrp x2,0x71042a3000
7101fd67cc  add x2,x2,#0xd4e
7101fd67d0  mov x0,x19
7101fd67d4  bl 0x71038f4d40
7101fd67d8  ldr x8,[x19, #0x10]
7101fd67dc  sub x23,x8,#0x10
7101fd67e0  ldur w8,[x8, #-0x8]
7101fd67e4  cmp w8,#0x13
7101fd67e8  b.ne 0x7101fd67f4
7101fd67ec  ldr x8,[x23]
7101fd67f0  b 0x7101fd6854
7101fd67f4  ldr w8,[x23, #0x8]
7101fd67f8  cmp w8,#0x13
7101fd67fc  b.eq 0x7101fd67ec
7101fd6800  cmp w8,#0x3
7101fd6804  b.eq 0x7101fd705c
7101fd6808  and w8,w8,#0xf
7101fd680c  cmp w8,#0x4
7101fd6810  b.ne 0x7101fd6850
7101fd6814  ldr x8,[x23]
7101fd6818  add x0,x8,#0x18
7101fd681c  mov x1,sp
7101fd6820  bl 0x7103907f00
7101fd6824  ldr x8,[x23]
7101fd6828  ldrb w9,[x8, #0x8]
7101fd682c  cmp w9,#0x4
7101fd6830  b.ne 0x7101fd683c
7101fd6834  ldrb w8,[x8, #0xb]
7101fd6838  b 0x7101fd6840
7101fd683c  ldr x8,[x8, #0x10]
7101fd6840  add x8,x8,#0x1
7101fd6844  mov x23,sp
7101fd6848  cmp x0,x8
7101fd684c  b.eq 0x7101fd67f4
7101fd6850  mov x8,xzr
7101fd6854  str x8,[x20, #0x20]
7101fd6858  ldr x8,[x19, #0x10]
7101fd685c  ldr x9,[x19, #0x20]
7101fd6860  sub x8,x8,#0x10
7101fd6864  cmp w21,#0x1
7101fd6868  str x8,[x19, #0x10]
7101fd686c  b.lt 0x7101fd688c
7101fd6870  ldr x9,[x9]
7101fd6874  add x9,x9,w21, SXTW  #0x4
7101fd6878  adrp x10,0x7104862000
7101fd687c  add x10,x10,#0x960
7101fd6880  cmp x9,x8
7101fd6884  csel x1,x9,x10,cc
7101fd6888  b 0x7101fd68e8
7101fd688c  add w10,w22,#0x1
7101fd6890  cmp w21,w10
7101fd6894  b.ge 0x7101fd68ac
7101fd6898  cmp w21,w22
7101fd689c  b.ne 0x7101fd68b4
7101fd68a0  ldr x8,[x19, #0x18]
7101fd68a4  add x1,x8,#0x40
7101fd68a8  b 0x7101fd68e8
7101fd68ac  add x1,x8,w21, SXTW  #0x4
7101fd68b0  b 0x7101fd68e8
7101fd68b4  ldr x8,[x9]
7101fd68b8  ldr w9,[x8, #0x8]
7101fd68bc  adrp x1,0x7104862000
7101fd68c0  add x1,x1,#0x960
7101fd68c4  cmp w9,#0x16
7101fd68c8  b.eq 0x7101fd68e8
7101fd68cc  ldr x8,[x8]
7101fd68d0  sub w9,w22,w21
7101fd68d4  add x10,x8,w9, SXTW  #0x4
7101fd68d8  ldrb w8,[x8, #0xa]
7101fd68dc  add x10,x10,#0x10
7101fd68e0  cmp w9,w8
7101fd68e4  csel x1,x1,x10,gt
7101fd68e8  adrp x2,0x7104444000
7101fd68ec  add x2,x2,#0x508
7101fd68f0  mov x0,x19
7101fd68f4  bl 0x71038f4d40
7101fd68f8  ldr x8,[x19, #0x10]
7101fd68fc  sub x23,x8,#0x10
7101fd6900  ldur w8,[x8, #-0x8]
7101fd6904  cmp w8,#0x13
7101fd6908  b.ne 0x7101fd6914
7101fd690c  ldr x8,[x23]
7101fd6910  b 0x7101fd6974
7101fd6914  ldr w8,[x23, #0x8]
7101fd6918  cmp w8,#0x13
7101fd691c  b.eq 0x7101fd690c
7101fd6920  cmp w8,#0x3
7101fd6924  b.eq 0x7101fd708c
7101fd6928  and w8,w8,#0xf
7101fd692c  cmp w8,#0x4
7101fd6930  b.ne 0x7101fd6970
7101fd6934  ldr x8,[x23]
7101fd6938  add x0,x8,#0x18
7101fd693c  mov x1,sp
7101fd6940  bl 0x7103907f00
7101fd6944  ldr x8,[x23]
7101fd6948  ldrb w9,[x8, #0x8]
7101fd694c  cmp w9,#0x4
7101fd6950  b.ne 0x7101fd695c
7101fd6954  ldrb w8,[x8, #0xb]
7101fd6958  b 0x7101fd6960
7101fd695c  ldr x8,[x8, #0x10]
7101fd6960  add x8,x8,#0x1
7101fd6964  mov x23,sp
7101fd6968  cmp x0,x8
7101fd696c  b.eq 0x7101fd6914
7101fd6970  mov x8,xzr
7101fd6974  strb w8,[x20, #0x28]
7101fd6978  ldr x8,[x19, #0x10]
7101fd697c  ldr x9,[x19, #0x20]
7101fd6980  sub x8,x8,#0x10
7101fd6984  cmp w21,#0x1
7101fd6988  str x8,[x19, #0x10]
7101fd698c  b.lt 0x7101fd69ac
7101fd6990  ldr x9,[x9]
7101fd6994  add x9,x9,w21, SXTW  #0x4
7101fd6998  adrp x10,0x7104862000
7101fd699c  add x10,x10,#0x960
7101fd69a0  cmp x9,x8
7101fd69a4  csel x1,x9,x10,cc
7101fd69a8  b 0x7101fd6a08
7101fd69ac  add w10,w22,#0x1
7101fd69b0  cmp w21,w10
7101fd69b4  b.ge 0x7101fd69cc
7101fd69b8  cmp w21,w22
7101fd69bc  b.ne 0x7101fd69d4
7101fd69c0  ldr x8,[x19, #0x18]
7101fd69c4  add x1,x8,#0x40
7101fd69c8  b 0x7101fd6a08
7101fd69cc  add x1,x8,w21, SXTW  #0x4
7101fd69d0  b 0x7101fd6a08
7101fd69d4  ldr x8,[x9]
7101fd69d8  ldr w9,[x8, #0x8]
7101fd69dc  adrp x1,0x7104862000
7101fd69e0  add x1,x1,#0x960
7101fd69e4  cmp w9,#0x16
7101fd69e8  b.eq 0x7101fd6a08
7101fd69ec  ldr x8,[x8]
7101fd69f0  sub w9,w22,w21
7101fd69f4  add x10,x8,w9, SXTW  #0x4
7101fd69f8  ldrb w8,[x8, #0xa]
7101fd69fc  add x10,x10,#0x10
7101fd6a00  cmp w9,w8
7101fd6a04  csel x1,x1,x10,gt
7101fd6a08  adrp x2,0x7104402000
7101fd6a0c  add x2,x2,#0x393
7101fd6a10  mov x0,x19
7101fd6a14  bl 0x71038f4d40
7101fd6a18  ldr x8,[x19, #0x10]
7101fd6a1c  sub x23,x8,#0x10
7101fd6a20  ldur w8,[x8, #-0x8]
7101fd6a24  cmp w8,#0x13
7101fd6a28  b.ne 0x7101fd6a34
7101fd6a2c  ldr x8,[x23]
7101fd6a30  b 0x7101fd6a94
7101fd6a34  ldr w8,[x23, #0x8]
7101fd6a38  cmp w8,#0x13
7101fd6a3c  b.eq 0x7101fd6a2c
7101fd6a40  cmp w8,#0x3
7101fd6a44  b.eq 0x7101fd70bc
7101fd6a48  and w8,w8,#0xf
7101fd6a4c  cmp w8,#0x4
7101fd6a50  b.ne 0x7101fd6a90
7101fd6a54  ldr x8,[x23]
7101fd6a58  add x0,x8,#0x18
7101fd6a5c  mov x1,sp
7101fd6a60  bl 0x7103907f00
7101fd6a64  ldr x8,[x23]
7101fd6a68  ldrb w9,[x8, #0x8]
7101fd6a6c  cmp w9,#0x4
7101fd6a70  b.ne 0x7101fd6a7c
7101fd6a74  ldrb w8,[x8, #0xb]
7101fd6a78  b 0x7101fd6a80
7101fd6a7c  ldr x8,[x8, #0x10]
7101fd6a80  add x8,x8,#0x1
7101fd6a84  mov x23,sp
7101fd6a88  cmp x0,x8
7101fd6a8c  b.eq 0x7101fd6a34
7101fd6a90  mov x8,xzr
7101fd6a94  strb w8,[x20, #0x29]
7101fd6a98  ldr x8,[x19, #0x10]
7101fd6a9c  ldr x9,[x19, #0x20]
7101fd6aa0  sub x8,x8,#0x10
7101fd6aa4  cmp w21,#0x1
7101fd6aa8  str x8,[x19, #0x10]
7101fd6aac  b.lt 0x7101fd6acc
7101fd6ab0  ldr x9,[x9]
7101fd6ab4  add x9,x9,w21, SXTW  #0x4
7101fd6ab8  adrp x10,0x7104862000
7101fd6abc  add x10,x10,#0x960
7101fd6ac0  cmp x9,x8
7101fd6ac4  csel x1,x9,x10,cc
7101fd6ac8  b 0x7101fd6b28
7101fd6acc  add w10,w22,#0x1
7101fd6ad0  cmp w21,w10
7101fd6ad4  b.ge 0x7101fd6aec
7101fd6ad8  cmp w21,w22
7101fd6adc  b.ne 0x7101fd6af4
7101fd6ae0  ldr x8,[x19, #0x18]
7101fd6ae4  add x1,x8,#0x40
7101fd6ae8  b 0x7101fd6b28
7101fd6aec  add x1,x8,w21, SXTW  #0x4
7101fd6af0  b 0x7101fd6b28
7101fd6af4  ldr x8,[x9]
7101fd6af8  ldr w9,[x8, #0x8]
7101fd6afc  adrp x1,0x7104862000
7101fd6b00  add x1,x1,#0x960
7101fd6b04  cmp w9,#0x16
7101fd6b08  b.eq 0x7101fd6b28
7101fd6b0c  ldr x8,[x8]
7101fd6b10  sub w9,w22,w21
7101fd6b14  add x10,x8,w9, SXTW  #0x4
7101fd6b18  ldrb w8,[x8, #0xa]
7101fd6b1c  add x10,x10,#0x10
7101fd6b20  cmp w9,w8
7101fd6b24  csel x1,x1,x10,gt
7101fd6b28  adrp x2,0x710436d000
7101fd6b2c  add x2,x2,#0x181
7101fd6b30  mov x0,x19
7101fd6b34  bl 0x71038f4d40
7101fd6b38  ldr x8,[x19, #0x10]
7101fd6b3c  sub x23,x8,#0x10
7101fd6b40  ldur w8,[x8, #-0x8]
7101fd6b44  cmp w8,#0x13
7101fd6b48  b.ne 0x7101fd6b54
7101fd6b4c  ldr x8,[x23]
7101fd6b50  b 0x7101fd6bb4
7101fd6b54  ldr w8,[x23, #0x8]
7101fd6b58  cmp w8,#0x13
7101fd6b5c  b.eq 0x7101fd6b4c
7101fd6b60  cmp w8,#0x3
7101fd6b64  b.eq 0x7101fd70ec
7101fd6b68  and w8,w8,#0xf
7101fd6b6c  cmp w8,#0x4
7101fd6b70  b.ne 0x7101fd6bb0
7101fd6b74  ldr x8,[x23]
7101fd6b78  add x0,x8,#0x18
7101fd6b7c  mov x1,sp
7101fd6b80  bl 0x7103907f00
7101fd6b84  ldr x8,[x23]
7101fd6b88  ldrb w9,[x8, #0x8]
7101fd6b8c  cmp w9,#0x4
7101fd6b90  b.ne 0x7101fd6b9c
7101fd6b94  ldrb w8,[x8, #0xb]
7101fd6b98  b 0x7101fd6ba0
7101fd6b9c  ldr x8,[x8, #0x10]
7101fd6ba0  add x8,x8,#0x1
7101fd6ba4  mov x23,sp
7101fd6ba8  cmp x0,x8
7101fd6bac  b.eq 0x7101fd6b54
7101fd6bb0  mov x8,xzr
7101fd6bb4  strb w8,[x20, #0x2a]
7101fd6bb8  ldr x8,[x19, #0x10]
7101fd6bbc  ldr x9,[x19, #0x20]
7101fd6bc0  sub x8,x8,#0x10
7101fd6bc4  cmp w21,#0x1
7101fd6bc8  str x8,[x19, #0x10]
7101fd6bcc  b.lt 0x7101fd6bec
7101fd6bd0  ldr x9,[x9]
7101fd6bd4  add x9,x9,w21, SXTW  #0x4
7101fd6bd8  adrp x10,0x7104862000
7101fd6bdc  add x10,x10,#0x960
7101fd6be0  cmp x9,x8
7101fd6be4  csel x1,x9,x10,cc
7101fd6be8  b 0x7101fd6c48
7101fd6bec  add w10,w22,#0x1
7101fd6bf0  cmp w21,w10
7101fd6bf4  b.ge 0x7101fd6c0c
7101fd6bf8  cmp w21,w22
7101fd6bfc  b.ne 0x7101fd6c14
7101fd6c00  ldr x8,[x19, #0x18]
7101fd6c04  add x1,x8,#0x40
7101fd6c08  b 0x7101fd6c48
7101fd6c0c  add x1,x8,w21, SXTW  #0x4
7101fd6c10  b 0x7101fd6c48
7101fd6c14  ldr x8,[x9]
7101fd6c18  ldr w9,[x8, #0x8]
7101fd6c1c  adrp x1,0x7104862000
7101fd6c20  add x1,x1,#0x960
7101fd6c24  cmp w9,#0x16
7101fd6c28  b.eq 0x7101fd6c48
7101fd6c2c  ldr x8,[x8]
7101fd6c30  sub w9,w22,w21
7101fd6c34  add x10,x8,w9, SXTW  #0x4
7101fd6c38  ldrb w8,[x8, #0xa]
7101fd6c3c  add x10,x10,#0x10
7101fd6c40  cmp w9,w8
7101fd6c44  csel x1,x1,x10,gt
7101fd6c48  adrp x2,0x710434b000
7101fd6c4c  add x2,x2,#0x53
7101fd6c50  mov x0,x19
7101fd6c54  bl 0x71038f4d40
7101fd6c58  ldr x8,[x19, #0x10]
7101fd6c5c  ldur w9,[x8, #-0x8]
7101fd6c60  cbz w9,0x7101fd6cb0
7101fd6c64  cmp w9,#0x13
7101fd6c68  b.eq 0x7101fd6c80
7101fd6c6c  cmp w9,#0x1
7101fd6c70  b.ne 0x7101fd6c98
7101fd6c74  ldur w8,[x8, #-0x10]
7101fd6c78  cmp w8,#0x0
7101fd6c7c  b 0x7101fd6cc8
7101fd6c80  ldur x10,[x8, #-0x10]
7101fd6c84  cbz x10,0x7101fd6cb0
7101fd6c88  scvtf s0,x10
7101fd6c8c  fcmp s0,#0.0
7101fd6c90  b.eq 0x7101fd6cb0
7101fd6c94  b 0x7101fd6cb8
7101fd6c98  and w10,w9,#0xf
7101fd6c9c  cmp w10,#0x3
7101fd6ca0  b.ne 0x7101fd6cb8
7101fd6ca4  ldur s0,[x8, #-0x10]
7101fd6ca8  fcmp s0,#0.0
7101fd6cac  b.ne 0x7101fd6cb8
7101fd6cb0  mov w8,wzr
7101fd6cb4  b 0x7101fd6cd4
7101fd6cb8  cmp w9,#0x3
7101fd6cbc  b.ne 0x7101fd6cd0
7101fd6cc0  ldur s0,[x8, #-0x10]
7101fd6cc4  fcmp s0,#0.0
7101fd6cc8  cset w8,ne
7101fd6ccc  b 0x7101fd6cd4
7101fd6cd0  mov w8,#0x1
7101fd6cd4  strb w8,[x20, #0x2b]
7101fd6cd8  ldr x8,[x19, #0x10]
7101fd6cdc  ldr x9,[x19, #0x20]
7101fd6ce0  sub x8,x8,#0x10
7101fd6ce4  cmp w21,#0x1
7101fd6ce8  str x8,[x19, #0x10]
7101fd6cec  b.lt 0x7101fd6d0c
7101fd6cf0  ldr x9,[x9]
7101fd6cf4  add x9,x9,w21, SXTW  #0x4
7101fd6cf8  adrp x10,0x7104862000
7101fd6cfc  add x10,x10,#0x960
7101fd6d00  cmp x9,x8
7101fd6d04  csel x1,x9,x10,cc
7101fd6d08  b 0x7101fd6d68
7101fd6d0c  add w10,w22,#0x1
7101fd6d10  cmp w21,w10
7101fd6d14  b.ge 0x7101fd6d2c
7101fd6d18  cmp w21,w22
7101fd6d1c  b.ne 0x7101fd6d34
7101fd6d20  ldr x8,[x19, #0x18]
7101fd6d24  add x1,x8,#0x40
7101fd6d28  b 0x7101fd6d68
7101fd6d2c  add x1,x8,w21, SXTW  #0x4
7101fd6d30  b 0x7101fd6d68
7101fd6d34  ldr x8,[x9]
7101fd6d38  ldr w9,[x8, #0x8]
7101fd6d3c  adrp x1,0x7104862000
7101fd6d40  add x1,x1,#0x960
7101fd6d44  cmp w9,#0x16
7101fd6d48  b.eq 0x7101fd6d68
7101fd6d4c  ldr x8,[x8]
7101fd6d50  sub w9,w22,w21
7101fd6d54  add x10,x8,w9, SXTW  #0x4
7101fd6d58  ldrb w8,[x8, #0xa]
7101fd6d5c  add x10,x10,#0x10
7101fd6d60  cmp w9,w8
7101fd6d64  csel x1,x1,x10,gt
7101fd6d68  adrp x2,0x71042f9000
7101fd6d6c  add x2,x2,#0x166
7101fd6d70  mov x0,x19
7101fd6d74  bl 0x71038f4d40
7101fd6d78  ldr x8,[x19, #0x10]
7101fd6d7c  ldur w9,[x8, #-0x8]
7101fd6d80  cbz w9,0x7101fd6dd0
7101fd6d84  cmp w9,#0x13
7101fd6d88  b.eq 0x7101fd6da0
7101fd6d8c  cmp w9,#0x1
7101fd6d90  b.ne 0x7101fd6db8
7101fd6d94  ldur w8,[x8, #-0x10]
7101fd6d98  cmp w8,#0x0
7101fd6d9c  b 0x7101fd6de8
7101fd6da0  ldur x10,[x8, #-0x10]
7101fd6da4  cbz x10,0x7101fd6dd0
7101fd6da8  scvtf s0,x10
7101fd6dac  fcmp s0,#0.0
7101fd6db0  b.eq 0x7101fd6dd0
7101fd6db4  b 0x7101fd6dd8
7101fd6db8  and w10,w9,#0xf
7101fd6dbc  cmp w10,#0x3
7101fd6dc0  b.ne 0x7101fd6dd8
7101fd6dc4  ldur s0,[x8, #-0x10]
7101fd6dc8  fcmp s0,#0.0
7101fd6dcc  b.ne 0x7101fd6dd8
7101fd6dd0  mov w8,wzr
7101fd6dd4  b 0x7101fd6df4
7101fd6dd8  cmp w9,#0x3
7101fd6ddc  b.ne 0x7101fd6df0
7101fd6de0  ldur s0,[x8, #-0x10]
7101fd6de4  fcmp s0,#0.0
7101fd6de8  cset w8,ne
7101fd6dec  b 0x7101fd6df4
7101fd6df0  mov w8,#0x1
7101fd6df4  strb w8,[x20, #0x2c]
7101fd6df8  ldr x8,[x19, #0x10]
7101fd6dfc  ldr x9,[x19, #0x20]
7101fd6e00  sub x8,x8,#0x10
7101fd6e04  cmp w21,#0x1
7101fd6e08  str x8,[x19, #0x10]
7101fd6e0c  b.lt 0x7101fd6e2c
7101fd6e10  ldr x9,[x9]
7101fd6e14  add x9,x9,w21, SXTW  #0x4
7101fd6e18  adrp x10,0x7104862000
7101fd6e1c  add x10,x10,#0x960
7101fd6e20  cmp x9,x8
7101fd6e24  csel x1,x9,x10,cc
7101fd6e28  b 0x7101fd6e88
7101fd6e2c  add w10,w22,#0x1
7101fd6e30  cmp w21,w10
7101fd6e34  b.ge 0x7101fd6e4c
7101fd6e38  cmp w21,w22
7101fd6e3c  b.ne 0x7101fd6e54
7101fd6e40  ldr x8,[x19, #0x18]
7101fd6e44  add x1,x8,#0x40
7101fd6e48  b 0x7101fd6e88
7101fd6e4c  add x1,x8,w21, SXTW  #0x4
7101fd6e50  b 0x7101fd6e88
7101fd6e54  ldr x8,[x9]
7101fd6e58  ldr w9,[x8, #0x8]
7101fd6e5c  adrp x1,0x7104862000
7101fd6e60  add x1,x1,#0x960
7101fd6e64  cmp w9,#0x16
7101fd6e68  b.eq 0x7101fd6e88
7101fd6e6c  ldr x8,[x8]
7101fd6e70  sub w9,w22,w21
7101fd6e74  add x10,x8,w9, SXTW  #0x4
7101fd6e78  ldrb w8,[x8, #0xa]
7101fd6e7c  add x10,x10,#0x10
7101fd6e80  cmp w9,w8
7101fd6e84  csel x1,x1,x10,gt
7101fd6e88  adrp x2,0x710433b000
7101fd6e8c  add x2,x2,#0x1e
7101fd6e90  mov x0,x19
7101fd6e94  bl 0x71038f4d40
7101fd6e98  ldr x8,[x19, #0x10]
7101fd6e9c  sub x23,x8,#0x10
7101fd6ea0  ldur w8,[x8, #-0x8]
7101fd6ea4  cmp w8,#0x13
7101fd6ea8  b.ne 0x7101fd6eb4
7101fd6eac  ldr x8,[x23]
7101fd6eb0  b 0x7101fd6f14
7101fd6eb4  ldr w8,[x23, #0x8]
7101fd6eb8  cmp w8,#0x13
7101fd6ebc  b.eq 0x7101fd6eac
7101fd6ec0  cmp w8,#0x3
7101fd6ec4  b.eq 0x7101fd711c
7101fd6ec8  and w8,w8,#0xf
7101fd6ecc  cmp w8,#0x4
7101fd6ed0  b.ne 0x7101fd6f10
7101fd6ed4  ldr x8,[x23]
7101fd6ed8  add x0,x8,#0x18
7101fd6edc  mov x1,sp
7101fd6ee0  bl 0x7103907f00
7101fd6ee4  ldr x8,[x23]
7101fd6ee8  ldrb w9,[x8, #0x8]
7101fd6eec  cmp w9,#0x4
7101fd6ef0  b.ne 0x7101fd6efc
7101fd6ef4  ldrb w8,[x8, #0xb]
7101fd6ef8  b 0x7101fd6f00
7101fd6efc  ldr x8,[x8, #0x10]
7101fd6f00  add x8,x8,#0x1
7101fd6f04  mov x23,sp
7101fd6f08  cmp x0,x8
7101fd6f0c  b.eq 0x7101fd6eb4
7101fd6f10  mov x8,xzr
7101fd6f14  strb w8,[x20, #0x2e]
7101fd6f18  ldr x8,[x19, #0x10]
7101fd6f1c  ldr x9,[x19, #0x20]
7101fd6f20  sub x8,x8,#0x10
7101fd6f24  cmp w21,#0x1
7101fd6f28  str x8,[x19, #0x10]
7101fd6f2c  b.lt 0x7101fd6f4c
7101fd6f30  ldr x9,[x9]
7101fd6f34  add x9,x9,w21, SXTW  #0x4
7101fd6f38  adrp x10,0x7104862000
7101fd6f3c  add x10,x10,#0x960
7101fd6f40  cmp x9,x8
7101fd6f44  csel x1,x9,x10,cc
7101fd6f48  b 0x7101fd6fa8
7101fd6f4c  add w10,w22,#0x1
7101fd6f50  cmp w21,w10
7101fd6f54  b.ge 0x7101fd6f6c
7101fd6f58  cmp w21,w22
7101fd6f5c  b.ne 0x7101fd6f74
7101fd6f60  ldr x8,[x19, #0x18]
7101fd6f64  add x1,x8,#0x40
7101fd6f68  b 0x7101fd6fa8
7101fd6f6c  add x1,x8,w21, SXTW  #0x4
7101fd6f70  b 0x7101fd6fa8
7101fd6f74  ldr x8,[x9]
7101fd6f78  ldr w9,[x8, #0x8]
7101fd6f7c  adrp x1,0x7104862000
7101fd6f80  add x1,x1,#0x960
7101fd6f84  cmp w9,#0x16
7101fd6f88  b.eq 0x7101fd6fa8
7101fd6f8c  ldr x8,[x8]
7101fd6f90  sub w9,w22,w21
7101fd6f94  add x10,x8,w9, SXTW  #0x4
7101fd6f98  ldrb w8,[x8, #0xa]
7101fd6f9c  add x10,x10,#0x10
7101fd6fa0  cmp w9,w8
7101fd6fa4  csel x1,x1,x10,gt
7101fd6fa8  adrp x2,0x7104413000
7101fd6fac  add x2,x2,#0x7cd
7101fd6fb0  mov x0,x19
7101fd6fb4  bl 0x71038f4d40
7101fd6fb8  ldr x8,[x19, #0x10]
7101fd6fbc  ldur w9,[x8, #-0x8]
7101fd6fc0  cbz w9,0x7101fd7010
7101fd6fc4  cmp w9,#0x13
7101fd6fc8  b.eq 0x7101fd6fe0
7101fd6fcc  cmp w9,#0x1
7101fd6fd0  b.ne 0x7101fd6ff8
7101fd6fd4  ldur w8,[x8, #-0x10]
7101fd6fd8  cmp w8,#0x0
7101fd6fdc  b 0x7101fd7028
7101fd6fe0  ldur x10,[x8, #-0x10]
7101fd6fe4  cbz x10,0x7101fd7010
7101fd6fe8  scvtf s0,x10
7101fd6fec  fcmp s0,#0.0
7101fd6ff0  b.eq 0x7101fd7010
7101fd6ff4  b 0x7101fd7018
7101fd6ff8  and w10,w9,#0xf
7101fd6ffc  cmp w10,#0x3
7101fd7000  b.ne 0x7101fd7018
7101fd7004  ldur s0,[x8, #-0x10]
7101fd7008  fcmp s0,#0.0
7101fd700c  b.ne 0x7101fd7018
7101fd7010  mov w8,wzr
7101fd7014  b 0x7101fd7034
7101fd7018  cmp w9,#0x3
7101fd701c  b.ne 0x7101fd7030
7101fd7020  ldur s0,[x8, #-0x10]
7101fd7024  fcmp s0,#0.0
7101fd7028  cset w8,ne
7101fd702c  b 0x7101fd7034
7101fd7030  mov w8,#0x1
7101fd7034  strb w8,[x20, #0x2f]
7101fd7038  ldr x8,[x19, #0x10]
7101fd703c  sub x8,x8,#0x10
7101fd7040  str x8,[x19, #0x10]
7101fd7044  ldp x29,x30,[sp, #0x40]
7101fd7048  ldp x20,x19,[sp, #0x30]
7101fd704c  ldr x23,[sp, #0x10]
7101fd7050  ldp x22,x21,[sp, #0x20]
7101fd7054  add sp,sp,#0x50
7101fd7058  ret
7101fd705c  ldr s0,[x23]
7101fd7060  adrp x8,0x7104472000
7101fd7064  ldr s1,[x8, #0x8f4]
7101fd7068  frintm s0,s0
7101fd706c  fcmp s0,s1
7101fd7070  b.lt 0x7101fd6850
7101fd7074  adrp x8,0x7104472000
7101fd7078  ldr s1,[x8, #0xe68]
7101fd707c  fcmp s0,s1
7101fd7080  b.pl 0x7101fd6850
7101fd7084  fcvtzs x8,s0
7101fd7088  b 0x7101fd6854
7101fd708c  ldr s0,[x23]
7101fd7090  adrp x8,0x7104472000
7101fd7094  ldr s1,[x8, #0x8f4]
7101fd7098  frintm s0,s0
7101fd709c  fcmp s0,s1
7101fd70a0  b.lt 0x7101fd6970
7101fd70a4  adrp x8,0x7104472000
7101fd70a8  ldr s1,[x8, #0xe68]
7101fd70ac  fcmp s0,s1
7101fd70b0  b.pl 0x7101fd6970
7101fd70b4  fcvtzs x8,s0
7101fd70b8  b 0x7101fd6974
7101fd70bc  ldr s0,[x23]
7101fd70c0  adrp x8,0x7104472000
7101fd70c4  ldr s1,[x8, #0x8f4]
7101fd70c8  frintm s0,s0
7101fd70cc  fcmp s0,s1
7101fd70d0  b.lt 0x7101fd6a90
7101fd70d4  adrp x8,0x7104472000
7101fd70d8  ldr s1,[x8, #0xe68]
7101fd70dc  fcmp s0,s1
7101fd70e0  b.pl 0x7101fd6a90
7101fd70e4  fcvtzs x8,s0
7101fd70e8  b 0x7101fd6a94
7101fd70ec  ldr s0,[x23]
7101fd70f0  adrp x8,0x7104472000
7101fd70f4  ldr s1,[x8, #0x8f4]
7101fd70f8  frintm s0,s0
7101fd70fc  fcmp s0,s1
7101fd7100  b.lt 0x7101fd6bb0
7101fd7104  adrp x8,0x7104472000
7101fd7108  ldr s1,[x8, #0xe68]
7101fd710c  fcmp s0,s1
7101fd7110  b.pl 0x7101fd6bb0
7101fd7114  fcvtzs x8,s0
7101fd7118  b 0x7101fd6bb4
7101fd711c  ldr s0,[x23]
7101fd7120  adrp x8,0x7104472000
7101fd7124  ldr s1,[x8, #0x8f4]
7101fd7128  frintm s0,s0
7101fd712c  fcmp s0,s1
7101fd7130  b.lt 0x7101fd6f10
7101fd7134  adrp x8,0x7104472000
7101fd7138  ldr s1,[x8, #0xe68]
7101fd713c  fcmp s0,s1
7101fd7140  b.pl 0x7101fd6f10
7101fd7144  fcvtzs x8,s0
7101fd7148  b 0x7101fd6f14
