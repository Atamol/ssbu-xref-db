// addr:      7101cf4d40
// offset:    0x1cf4d40
// name:      FUN_7101cf4d40
// mangled:   
// size:      896

7101cf4d40  sub sp,sp,#0xd0
7101cf4d44  stp x22,x21,[sp, #0xa0]
7101cf4d48  stp x20,x19,[sp, #0xb0]
7101cf4d4c  stp x29,x30,[sp, #0xc0]
7101cf4d50  add x29,sp,#0xc0
7101cf4d54  ldr w8,[x0, #0x164]
7101cf4d58  mov x19,x0
7101cf4d5c  cbz w8,0x7101cf4d68
7101cf4d60  add x22,x19,#0x30
7101cf4d64  b 0x7101cf5070
7101cf4d68  ldr w2,[x19, #0xc]
7101cf4d6c  ldr x8,[x19, #0x20]
7101cf4d70  mov w9,#0x4ffff
7101cf4d74  add w10,w9,#0x4b0, LSL #12
7101cf4d78  cmp w2,w10
7101cf4d7c  b.le 0x7101cf4d88
7101cf4d80  mov w1,#0x9
7101cf4d84  b 0x7101cf4e10
7101cf4d88  orr w10,w9,#0x200000
7101cf4d8c  cmp w2,w10
7101cf4d90  b.le 0x7101cf4d9c
7101cf4d94  orr w1,wzr,#0x7
7101cf4d98  b 0x7101cf4e10
7101cf4d9c  cmp w2,#0x200, LSL #12
7101cf4da0  b.lt 0x7101cf4dac
7101cf4da4  mov w1,#0x5
7101cf4da8  b 0x7101cf4e10
7101cf4dac  orr w10,w9,#0x100000
7101cf4db0  cmp w2,w10
7101cf4db4  b.le 0x7101cf4dc0
7101cf4db8  orr w1,wzr,#0x6
7101cf4dbc  b 0x7101cf4e10
7101cf4dc0  cmp w2,#0x100, LSL #12
7101cf4dc4  b.lt 0x7101cf4dd0
7101cf4dc8  mov w1,#0x4
7101cf4dcc  b 0x7101cf4e10
7101cf4dd0  add w10,w9,#0xae, LSL #12
7101cf4dd4  cmp w2,w10
7101cf4dd8  b.le 0x7101cf4de4
7101cf4ddc  mov w1,#0x8
7101cf4de0  b 0x7101cf4e10
7101cf4de4  cmp w2,w9
7101cf4de8  b.le 0x7101cf4df4
7101cf4dec  mov w1,#0x2
7101cf4df0  b 0x7101cf4e10
7101cf4df4  cmp w2,#0x10, LSL #12
7101cf4df8  b.lt 0x7101cf4e04
7101cf4dfc  mov w1,#0x1
7101cf4e00  b 0x7101cf4e10
7101cf4e04  cmp w2,#0x1
7101cf4e08  orr w9,wzr,#0x3
7101cf4e0c  csel w1,w9,wzr,lt
7101cf4e10  ldr x0,[x8]
7101cf4e14  bl 0x7103775dc0
7101cf4e18  mov x22,x19
7101cf4e1c  ldr x0,[x22, #0x30]!
7101cf4e20  fmov s0,0x3f800000
7101cf4e24  adrp x1,0x71042a3000
7101cf4e28  add x1,x1,#0x672
7101cf4e2c  add x21,x22,#0x148
7101cf4e30  sub x20,x22,#0x8
7101cf4e34  bl 0x7103778300
7101cf4e38  ldr x8,[x22, #0x148]
7101cf4e3c  cbz x8,0x7101cf4e78
7101cf4e40  adrp x1,0x7104433000
7101cf4e44  add x1,x1,#0x309
7101cf4e48  sub x8,x29,#0x30
7101cf4e4c  mov x0,x20
7101cf4e50  bl 0x7103776910
7101cf4e54  ldr x1,[x21]
7101cf4e58  sub x0,x29,#0x30
7101cf4e5c  bl 0x710377a120
7101cf4e60  ldur x0,[x29, #-0x28]
7101cf4e64  adrp x8,0x710523d000
7101cf4e68  add x8,x8,#0x9a8
7101cf4e6c  stp x8,xzr,[x29, #-0x30]
7101cf4e70  cbz x0,0x7101cf4e78
7101cf4e74  bl 0x710392eb40
7101cf4e78  mov x0,x19
7101cf4e7c  mov x1,x21
7101cf4e80  bl 0x7101cf61b0
7101cf4e84  ldr x0,[x19, #0x30]
7101cf4e88  fmov s0,0x3f800000
7101cf4e8c  adrp x1,0x7104421000
7101cf4e90  add x1,x1,#0x55
7101cf4e94  bl 0x7103778300
7101cf4e98  adrp x1,0x7104280000
7101cf4e9c  add x1,x1,#0xbbd
7101cf4ea0  sub x8,x29,#0x30
7101cf4ea4  mov x0,x20
7101cf4ea8  bl 0x7103776910
7101cf4eac  ldur x8,[x29, #-0x28]
7101cf4eb0  ldr x8,[x8]
7101cf4eb4  cbz x8,0x7101cf4ecc
7101cf4eb8  ldrb w10,[x8, #0x58]
7101cf4ebc  ldrb w9,[x19, #0x181]
7101cf4ec0  and w10,w10,#0xfe
7101cf4ec4  orr w9,w10,w9
7101cf4ec8  strb w9,[x8, #0x58]
7101cf4ecc  ldrb w8,[x19, #0x181]
7101cf4ed0  cbz w8,0x7101cf4eec
7101cf4ed4  mov x0,x19
7101cf4ed8  mov w1,wzr
7101cf4edc  bl 0x71032d6810
7101cf4ee0  mov w8,#0x1
7101cf4ee4  strb w8,[x19, #0x2b0]
7101cf4ee8  b 0x7101cf4fcc
7101cf4eec  adrp x8,0x710532f000
7101cf4ef0  ldr x8,[x8, #0x8d0]
7101cf4ef4  ldr x0,[x8, #0x8]
7101cf4ef8  ldp x8,x9,[x0, #0x40]
7101cf4efc  sub x9,x9,x8
7101cf4f00  asr x9,x9,#0x3
7101cf4f04  cmp x9,#0x6
7101cf4f08  b.cc 0x7101cf4f1c
7101cf4f0c  ldr x20,[x8, #0x28]
7101cf4f10  ldrb w8,[x0, #0x191]
7101cf4f14  cbnz w8,0x7101cf4f98
7101cf4f18  b 0x7101cf4f28
7101cf4f1c  mov x20,xzr
7101cf4f20  ldrb w8,[x0, #0x191]
7101cf4f24  cbnz w8,0x7101cf4f98
7101cf4f28  mov w2,#0x4
7101cf4f2c  mov x1,x20
7101cf4f30  bl 0x7103313f20
7101cf4f34  tbz w0,#0x0,0x7101cf4f98
7101cf4f38  add x0,sp,#0x50
7101cf4f3c  mov x1,x20
7101cf4f40  bl 0x71024076d0
7101cf4f44  ldr x8,[sp, #0x60]
7101cf4f48  adrp x9,0x7104f73000
7101cf4f4c  add x9,x9,#0xd50
7101cf4f50  str x9,[sp, #0x58]
7101cf4f54  cbz x8,0x7101cf4fc4
7101cf4f58  adrp x8,0x7106dd5000
7101cf4f5c  ldrb w8,[x8, #0x3a8]
7101cf4f60  cmp w8,#0x1
7101cf4f64  b.ne 0x7101cf4fc4
7101cf4f68  adrp x9,0x7106dd5000
7101cf4f6c  ldr w8,[sp, #0x68]
7101cf4f70  ldr w9,[x9, #0x3ac]
7101cf4f74  cmp w8,w9
7101cf4f78  b.ne 0x7101cf4fc4
7101cf4f7c  ldr x8,[sp, #0x60]
7101cf4f80  ldr wzr,[x8, #0x38]!
7101cf4f84  ldaxr w9,[x8]
7101cf4f88  sub w9,w9,#0x1
7101cf4f8c  stlxr w10,w9,[x8]
7101cf4f90  cbnz w10,0x7101cf4f84
7101cf4f94  b 0x7101cf4fc4
7101cf4f98  mov x8,#0x650000000000
7101cf4f9c  movk x8,#0x87, LSL #48
7101cf4fa0  strb wzr,[sp, #0x70]
7101cf4fa4  stp xzr,x8,[sp, #0x60]
7101cf4fa8  mov x8,#-0x1
7101cf4fac  stp x8,xzr,[sp, #0x78]
7101cf4fb0  adrp x8,0x7104f73000
7101cf4fb4  add x8,x8,#0xd50
7101cf4fb8  str wzr,[sp, #0x50]
7101cf4fbc  str xzr,[sp, #0x88]
7101cf4fc0  str x8,[sp, #0x58]
7101cf4fc4  str xzr,[sp, #0x60]
7101cf4fc8  strb wzr,[sp, #0x70]
7101cf4fcc  mov x9,#0x6e6d
7101cf4fd0  movk x9,#0x5f75, LSL #16
7101cf4fd4  orr x8,xzr,#0x1800000000
7101cf4fd8  movk x9,#0x6d61, LSL #32
7101cf4fdc  movk x9,#0x6969, LSL #48
7101cf4fe0  strb wzr,[sp, #0x28]
7101cf4fe4  stp x8,x9,[sp, #0x8]
7101cf4fe8  mov x8,#0x6f62
7101cf4fec  movk x8,#0x725f, LSL #16
7101cf4ff0  movk x8,#0x6165, LSL #32
7101cf4ff4  movk x8,#0x6964, LSL #48
7101cf4ff8  str x8,[sp, #0x18]
7101cf4ffc  mov w8,#0x676e
7101cf5000  strh w8,[sp, #0x20]
7101cf5004  mov w8,#0x745f
7101cf5008  movk w8,#0x7469, LSL #16
7101cf500c  mov w9,#0x656c
7101cf5010  stur w8,[sp, #0x22]
7101cf5014  mov w8,#0x9dc5
7101cf5018  movk w8,#0x811c, LSL #16
7101cf501c  mov w10,#0x6d
7101cf5020  strh w9,[sp, #0x26]
7101cf5024  mov w9,#0x9
7101cf5028  mov w11,#0x89
7101cf502c  add x12,sp,#0x8
7101cf5030  mul w8,w8,w11
7101cf5034  and w10,w10,#0xff
7101cf5038  eor w8,w8,w10
7101cf503c  ldrb w10,[x12, x9, LSL ]
7101cf5040  add x9,x9,#0x1
7101cf5044  cbnz w10,0x7101cf5030
7101cf5048  mov w0,#0x1
7101cf504c  add x1,sp,#0x8
7101cf5050  str w8,[sp, #0x8]
7101cf5054  bl 0x71019b7de0
7101cf5058  ldur x0,[x29, #-0x28]
7101cf505c  adrp x8,0x710523d000
7101cf5060  add x8,x8,#0x9a8
7101cf5064  stp x8,xzr,[x29, #-0x30]
7101cf5068  cbz x0,0x7101cf5070
7101cf506c  bl 0x710392eb40
7101cf5070  ldr x8,[x22]
7101cf5074  ldr x0,[x8, #0x8]
7101cf5078  cbz x0,0x7101cf509c
7101cf507c  adrp x1,0x7104421000
7101cf5080  add x1,x1,#0x55
7101cf5084  bl 0x71037964b0
7101cf5088  cbz x0,0x7101cf509c
7101cf508c  ldr x8,[x0]
7101cf5090  ldr x8,[x8, #0x138]
7101cf5094  blr x8
7101cf5098  tbz w0,#0x0,0x7101cf50ac
7101cf509c  ldr w8,[x19, #0x15c]
7101cf50a0  subs w8,w8,#0x1
7101cf50a4  b.lt 0x7101cf50ac
7101cf50a8  str w8,[x19, #0x15c]
7101cf50ac  ldp x29,x30,[sp, #0xc0]
7101cf50b0  ldp x20,x19,[sp, #0xb0]
7101cf50b4  ldp x22,x21,[sp, #0xa0]
7101cf50b8  add sp,sp,#0xd0
7101cf50bc  ret
