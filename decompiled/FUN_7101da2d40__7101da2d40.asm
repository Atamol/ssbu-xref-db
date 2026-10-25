// addr:      7101da2d40
// offset:    0x1da2d40
// name:      FUN_7101da2d40
// mangled:   
// size:      548

7101da2d40  stp x22,x21,[sp, #-0x30]!
7101da2d44  stp x20,x19,[sp, #0x10]
7101da2d48  stp x29,x30,[sp, #0x20]
7101da2d4c  add x29,sp,#0x20
7101da2d50  ldr w8,[x0, #0x774]
7101da2d54  mov x19,x0
7101da2d58  cbz w8,0x7101da2d8c
7101da2d5c  ldr w8,[x19, #0x428]
7101da2d60  cbz w8,0x7101da2e88
7101da2d64  ldr x8,[x19, #0x8]
7101da2d68  ldr x8,[x8, #0x80]
7101da2d6c  ldr x0,[x8, #0x2268]
7101da2d70  ldr x8,[x0]
7101da2d74  ldr x8,[x8, #0x78]
7101da2d78  blr x8
7101da2d7c  tbz w0,#0x0,0x7101da2e38
7101da2d80  mov w8,#0x1
7101da2d84  strb w8,[x19, #0x44f]
7101da2d88  b 0x7101da2ef8
7101da2d8c  ldr x0,[x19, #0x58]
7101da2d90  fmov s0,0x3f800000
7101da2d94  adrp x1,0x710424f000
7101da2d98  add x1,x1,#0x997
7101da2d9c  bl 0x7103778300
7101da2da0  ldr x0,[x19, #0x70]
7101da2da4  ldr x8,[x0]
7101da2da8  ldr x8,[x8, #0x70]
7101da2dac  mov w1,#0x1
7101da2db0  blr x8
7101da2db4  ldr x0,[x19, #0x80]
7101da2db8  ldr x8,[x0]
7101da2dbc  ldr x8,[x8, #0x70]
7101da2dc0  mov w1,wzr
7101da2dc4  blr x8
7101da2dc8  ldr x0,[x19, #0x78]
7101da2dcc  ldr x8,[x0]
7101da2dd0  ldr x8,[x8, #0x70]
7101da2dd4  mov w1,wzr
7101da2dd8  blr x8
7101da2ddc  ldr x0,[x19, #0x88]
7101da2de0  ldr x8,[x0]
7101da2de4  ldr x8,[x8, #0x70]
7101da2de8  mov w1,wzr
7101da2dec  blr x8
7101da2df0  ldr x8,[x19, #0x8]
7101da2df4  ldr x21,[x8, #0x80]
7101da2df8  mov w8,#0x2268
7101da2dfc  ldr x0,[x21, #0x2268]
7101da2e00  add x20,x21,x8
7101da2e04  ldr x8,[x0]
7101da2e08  ldr x8,[x8, #0x70]
7101da2e0c  mov w1,wzr
7101da2e10  blr x8
7101da2e14  mov w8,#0x11b4
7101da2e18  ldrb w8,[x21, x8, LSL ]
7101da2e1c  cbz w8,0x7101da2f3c
7101da2e20  ldr x0,[x20]
7101da2e24  ldr w8,[x0, #0x254]
7101da2e28  cmp w8,#0x3
7101da2e2c  b.ne 0x7101da2f4c
7101da2e30  bl 0x710376b960
7101da2e34  b 0x7101da2f4c
7101da2e38  ldr x8,[x19, #0x70]
7101da2e3c  ldr w8,[x8, #0x254]
7101da2e40  cmp w8,#0x1
7101da2e44  mov w9,#0x5
7101da2e48  csel w9,w9,wzr,eq
7101da2e4c  cmp w8,#0x0
7101da2e50  mov w8,#0x4
7101da2e54  csel w20,w8,w9,eq
7101da2e58  cbz w20,0x7101da2f2c
7101da2e5c  ldr x0,[x19, #0x58]
7101da2e60  fmov s0,0x3f800000
7101da2e64  adrp x1,0x71043cf000
7101da2e68  add x1,x1,#0x88f
7101da2e6c  bl 0x7103778300
7101da2e70  ldrsw x8,[x19, #0x76c]
7101da2e74  cmp w8,#0x13
7101da2e78  b.cs 0x7101da2f60
7101da2e7c  add x8,x19,x8, LSL #0x2
7101da2e80  str w20,[x8, #0x720]
7101da2e84  b 0x7101da2f2c
7101da2e88  ldr x8,[x19, #0x20]
7101da2e8c  ldr x8,[x8]
7101da2e90  ldr x8,[x8]
7101da2e94  ldr x8,[x8, #0x600]
7101da2e98  ldrb w9,[x8, #0x4aa]
7101da2e9c  cbz w9,0x7101da2d64
7101da2ea0  ldrb w8,[x8, #0x1b8]
7101da2ea4  tbz w8,#0x1,0x7101da2d64
7101da2ea8  ldr x8,[x19, #0x8]
7101da2eac  ldr x21,[x8, #0x80]
7101da2eb0  mov w8,#0x2268
7101da2eb4  ldr x0,[x21, #0x2268]
7101da2eb8  add x20,x21,x8
7101da2ebc  ldr x8,[x0]
7101da2ec0  ldr x8,[x8, #0x70]
7101da2ec4  mov w1,#0x1
7101da2ec8  mov w22,#0x1
7101da2ecc  blr x8
7101da2ed0  ldr w8,[x21, #0x11b0]
7101da2ed4  sub w10,w8,#0x1
7101da2ed8  cmp w10,#0x5
7101da2edc  mov w9,#0x2
7101da2ee0  mov x0,x20
7101da2ee4  cneg w10,w22,cs
7101da2ee8  cmp w8,#0x5
7101da2eec  csel w1,w9,w10,gt
7101da2ef0  mov w2,wzr
7101da2ef4  bl 0x7103771a80
7101da2ef8  ldr x0,[x19, #0x70]
7101da2efc  bl 0x710376b960
7101da2f00  ldr x0,[x19, #0x58]
7101da2f04  fmov s0,0x3f800000
7101da2f08  adrp x1,0x71043cf000
7101da2f0c  add x1,x1,#0x88f
7101da2f10  bl 0x7103778300
7101da2f14  ldrsw x8,[x19, #0x76c]
7101da2f18  cmp w8,#0x13
7101da2f1c  b.cs 0x7101da2f60
7101da2f20  add x8,x19,x8, LSL #0x2
7101da2f24  orr w9,wzr,#0x6
7101da2f28  str w9,[x8, #0x720]
7101da2f2c  ldp x29,x30,[sp, #0x20]
7101da2f30  ldp x20,x19,[sp, #0x10]
7101da2f34  ldp x22,x21,[sp], #0x30
7101da2f38  ret
7101da2f3c  orr w1,wzr,#0x3
7101da2f40  mov x0,x20
7101da2f44  mov w2,wzr
7101da2f48  bl 0x7103771a80
7101da2f4c  mov x0,x19
7101da2f50  ldp x29,x30,[sp, #0x20]
7101da2f54  ldp x20,x19,[sp, #0x10]
7101da2f58  ldp x22,x21,[sp], #0x30
7101da2f5c  b 0x7101da8880
7101da2f60  bl 0x71039c2650
