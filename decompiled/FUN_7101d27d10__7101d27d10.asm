// addr:      7101d27d10
// offset:    0x1d27d10
// name:      FUN_7101d27d10
// mangled:   
// size:      636

7101d27d10  sub sp,sp,#0x110
7101d27d14  str d8,[sp, #0xa0]
7101d27d18  stp x28,x27,[sp, #0xb0]
7101d27d1c  stp x26,x25,[sp, #0xc0]
7101d27d20  stp x24,x23,[sp, #0xd0]
7101d27d24  stp x22,x21,[sp, #0xe0]
7101d27d28  stp x20,x19,[sp, #0xf0]
7101d27d2c  stp x29,x30,[sp, #0x100]
7101d27d30  add x29,sp,#0x100
7101d27d34  ldr x8,[x0, #0x128]
7101d27d38  mov x19,x0
7101d27d3c  ldr x0,[x8]
7101d27d40  bl 0x710323cb80
7101d27d44  tbz w0,#0x0,0x7101d27f64
7101d27d48  adrp x20,0x7105329000
7101d27d4c  ldr x8,[x20, #0xf98]
7101d27d50  ldr x8,[x8]
7101d27d54  ldr x0,[x8, #0x20]
7101d27d58  mov w1,wzr
7101d27d5c  bl 0x710259d3a0
7101d27d60  tbz w0,#0x0,0x7101d27f64
7101d27d64  ldr x8,[x20, #0xf98]
7101d27d68  ldr x8,[x8]
7101d27d6c  ldr x0,[x8, #0x20]
7101d27d70  mov w1,#0x2
7101d27d74  bl 0x710259d3a0
7101d27d78  tbz w0,#0x0,0x7101d27f64
7101d27d7c  add x9,sp,#0x50
7101d27d80  fmov s8,0x3f800000
7101d27d84  adrp x27,0x710532f000
7101d27d88  add x22,x9,#0x8
7101d27d8c  mov x9,sp
7101d27d90  mov x20,xzr
7101d27d94  mov w8,wzr
7101d27d98  adrp x23,0x71042c5000
7101d27d9c  add x23,x23,#0x15
7101d27da0  adrp x24,0x7104422000
7101d27da4  add x24,x24,#0x5ea
7101d27da8  add x26,x9,#0x30
7101d27dac  adrp x28,0x7104f73000
7101d27db0  add x28,x28,#0xd50
7101d27db4  adrp x21,0x710523d000
7101d27db8  add x21,x21,#0x988
7101d27dbc  add x9,x19,x20
7101d27dc0  ldrb w9,[x9, #0x550]
7101d27dc4  cbz w9,0x7101d27ef8
7101d27dc8  add x0,sp,#0x50
7101d27dcc  mov x1,x23
7101d27dd0  mov w2,w20
7101d27dd4  strb wzr,[sp, #0x58]
7101d27dd8  str xzr,[sp, #0x50]
7101d27ddc  bl 0x710062dc20
7101d27de0  ldr x8,[x19, #0x130]
7101d27de4  ldr x8,[x8]
7101d27de8  add x0,x8,#0x8
7101d27dec  add x8,sp,#0x40
7101d27df0  mov x1,x22
7101d27df4  bl 0x7103776640
7101d27df8  ldr x25,[sp, #0x48]
7101d27dfc  mov v0.16B,v8.16B
7101d27e00  mov x1,x24
7101d27e04  mov x0,x25
7101d27e08  bl 0x7103778300
7101d27e0c  ldr x8,[x27, #0x8d0]
7101d27e10  ldr x0,[x8, #0x8]
7101d27e14  ldrb w8,[x0, #0x191]
7101d27e18  cbnz w8,0x7101d27e94
7101d27e1c  mov x1,#0xac57
7101d27e20  movk x1,#0xb84e, LSL #16
7101d27e24  mov w2,#0x4
7101d27e28  movk x1,#0x18, LSL #32
7101d27e2c  bl 0x7103313f20
7101d27e30  tbz w0,#0x0,0x7101d27e94
7101d27e34  mov x1,#0xac57
7101d27e38  movk x1,#0xb84e, LSL #16
7101d27e3c  mov x0,sp
7101d27e40  movk x1,#0x18, LSL #32
7101d27e44  bl 0x71024076d0
7101d27e48  ldr x8,[sp, #0x10]
7101d27e4c  str x28,[sp, #0x8]
7101d27e50  cbz x8,0x7101d27ec4
7101d27e54  adrp x9,0x7106dd5000
7101d27e58  ldrb w9,[x9, #0x3a8]
7101d27e5c  cmp w9,#0x1
7101d27e60  b.ne 0x7101d27ec4
7101d27e64  adrp x10,0x7106dd5000
7101d27e68  ldr w9,[sp, #0x18]
7101d27e6c  ldr w10,[x10, #0x3ac]
7101d27e70  cmp w9,w10
7101d27e74  b.ne 0x7101d27ec4
7101d27e78  ldr wzr,[x8, #0x38]!
7101d27e7c  ldaxr w9,[x8]
7101d27e80  sub w9,w9,#0x1
7101d27e84  stlxr w10,w9,[x8]
7101d27e88  cbnz w10,0x7101d27e7c
7101d27e8c  ldr x25,[sp, #0x48]
7101d27e90  b 0x7101d27ec4
7101d27e94  mov x8,#0x650000000000
7101d27e98  movk x8,#0x87, LSL #48
7101d27e9c  strb wzr,[sp, #0x20]
7101d27ea0  stp xzr,x8,[sp, #0x10]
7101d27ea4  adrp x8,0x7104f73000
7101d27ea8  add x8,x8,#0xd30
7101d27eac  str x8,[sp, #0x8]
7101d27eb0  mov x8,#-0x1
7101d27eb4  str wzr,[sp]
7101d27eb8  str x8,[sp, #0x28]
7101d27ebc  stp xzr,xzr,[x26]
7101d27ec0  str x28,[sp, #0x8]
7101d27ec4  str xzr,[sp, #0x10]
7101d27ec8  strb wzr,[sp, #0x20]
7101d27ecc  stp x21,xzr,[sp, #0x40]
7101d27ed0  cbz x25,0x7101d27ef4
7101d27ed4  ldr x0,[x25, #0x18]
7101d27ed8  adrp x8,0x710523d000
7101d27edc  add x8,x8,#0x9a8
7101d27ee0  stp x8,xzr,[x25, #0x10]
7101d27ee4  cbz x0,0x7101d27eec
7101d27ee8  bl 0x710392eb40
7101d27eec  mov x0,x25
7101d27ef0  bl 0x710392eb40
7101d27ef4  mov w8,#0x1
7101d27ef8  add x20,x20,#0x1
7101d27efc  cmp x20,#0xa
7101d27f00  b.ne 0x7101d27dbc
7101d27f04  tbz w8,#0x0,0x7101d27f24
7101d27f08  ldr w9,[x19, #0x114]
7101d27f0c  subs w8,w9,#0x1
7101d27f10  b.lt 0x7101d27f40
7101d27f14  cmp w9,#0x12
7101d27f18  str w8,[x19, #0x114]
7101d27f1c  b.le 0x7101d27f44
7101d27f20  b 0x7101d27f64
7101d27f24  mov x0,x19
7101d27f28  bl 0x7101d2aec0
7101d27f2c  ldr w8,[x19, #0x114]
7101d27f30  subs w8,w8,#0x1
7101d27f34  b.lt 0x7101d27f64
7101d27f38  str w8,[x19, #0x114]
7101d27f3c  b 0x7101d27f64
7101d27f40  mov w8,w9
7101d27f44  sxtw x8,w8
7101d27f48  add x8,x8,#0x1
7101d27f4c  cmp w8,#0x13
7101d27f50  str w8,[x19, #0x114]
7101d27f54  b.cs 0x7101d27f88
7101d27f58  add x8,x19,x8, LSL #0x2
7101d27f5c  mov w9,#0x4
7101d27f60  str w9,[x8, #0xc8]
7101d27f64  ldr d8,[sp, #0xa0]
7101d27f68  ldp x29,x30,[sp, #0x100]
7101d27f6c  ldp x20,x19,[sp, #0xf0]
7101d27f70  ldp x22,x21,[sp, #0xe0]
7101d27f74  ldp x24,x23,[sp, #0xd0]
7101d27f78  ldp x26,x25,[sp, #0xc0]
7101d27f7c  ldp x28,x27,[sp, #0xb0]
7101d27f80  add sp,sp,#0x110
7101d27f84  ret
7101d27f88  bl 0x71039c2650
