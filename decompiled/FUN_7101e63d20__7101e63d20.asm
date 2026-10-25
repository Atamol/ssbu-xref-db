// addr:      7101e63d20
// offset:    0x1e63d20
// name:      FUN_7101e63d20
// mangled:   
// size:      656

7101e63d20  sub sp,sp,#0x50
7101e63d24  stp x24,x23,[sp, #0x10]
7101e63d28  stp x22,x21,[sp, #0x20]
7101e63d2c  stp x20,x19,[sp, #0x30]
7101e63d30  stp x29,x30,[sp, #0x40]
7101e63d34  add x29,sp,#0x40
7101e63d38  ldrb w8,[x0, #0x271]
7101e63d3c  cbz w8,0x7101e63e6c
7101e63d40  ldrb w20,[x0, #0x272]
7101e63d44  mov x19,x0
7101e63d48  add x21,x0,#0x1c8
7101e63d4c  cmp x20,#0x3
7101e63d50  b.hi 0x7101e63e2c
7101e63d54  ldr x8,[x21]
7101e63d58  add x8,x8,x20, LSL #0x3
7101e63d5c  ldr x22,[x8, #0x48]
7101e63d60  cbz x22,0x7101e63e2c
7101e63d64  ldrb w8,[x22, #0xb0]
7101e63d68  cbz w8,0x7101e63e2c
7101e63d6c  ldrb w8,[x19, #0x1d2]
7101e63d70  cbz w8,0x7101e63d8c
7101e63d74  ldr x0,[x22, #0x8]
7101e63d78  fmov s0,0x3f800000
7101e63d7c  adrp x1,0x710438d000
7101e63d80  add x1,x1,#0x258
7101e63d84  bl 0x7103778300
7101e63d88  strb wzr,[x22, #0xb1]
7101e63d8c  mov x0,x21
7101e63d90  mov w1,w20
7101e63d94  bl 0x7101e9b720
7101e63d98  add x22,x19,x20, LSL #0x2
7101e63d9c  ldrh w2,[x22, #0x254]
7101e63da0  orr w23,wzr,#0xffff
7101e63da4  cmp x2,x23
7101e63da8  b.eq 0x7101e63dd4
7101e63dac  adrp x8,0x7105329000
7101e63db0  ldr x8,[x8, #0xf98]
7101e63db4  ldr x8,[x8]
7101e63db8  ldr x0,[x8, #0x20]
7101e63dbc  ldrb w1,[x22, #0x256]
7101e63dc0  mov w3,wzr
7101e63dc4  add x24,x22,#0x254
7101e63dc8  bl 0x710259c720
7101e63dcc  strh w23,[x24]
7101e63dd0  strb wzr,[x22, #0x256]
7101e63dd4  ldr x0,[x19, #0x280]
7101e63dd8  add x8,x19,#0x278
7101e63ddc  cmp x8,x0
7101e63de0  b.ne 0x7101e63df4
7101e63de4  b 0x7101e63e2c
7101e63de8  ldr x0,[x0, #0x8]
7101e63dec  cmp x8,x0
7101e63df0  b.eq 0x7101e63e2c
7101e63df4  ldrb w9,[x0, #0x10]
7101e63df8  cmp w9,w20
7101e63dfc  b.ne 0x7101e63de8
7101e63e00  cmp x8,x0
7101e63e04  b.eq 0x7101e63e2c
7101e63e08  ldp x8,x9,[x0]
7101e63e0c  str x9,[x8, #0x8]
7101e63e10  ldp x8,x9,[x0]
7101e63e14  str x8,[x9]
7101e63e18  ldr x8,[x19, #0x288]
7101e63e1c  sub x8,x8,#0x1
7101e63e20  str x8,[x19, #0x288]
7101e63e24  cbz x0,0x7101e63e2c
7101e63e28  bl 0x710392eb40
7101e63e2c  ldr x9,[x19, #0x298]
7101e63e30  ldr x8,[x9]
7101e63e34  ldr x8,[x8, #0x8]
7101e63e38  ldrb w10,[x8, #0x388]
7101e63e3c  cbz w10,0x7101e63e60
7101e63e40  ldrb w9,[x9, #0x8]
7101e63e44  cmp x9,#0x2
7101e63e48  b.hi 0x7101e63e60
7101e63e4c  add x8,x8,x9, LSL #0x3
7101e63e50  ldr x8,[x8, #0x78]
7101e63e54  cmp x8,#0x0
7101e63e58  ccmp w20,#0x4,#0x2,ne
7101e63e5c  b.cc 0x7101e63e84
7101e63e60  mov x0,x21
7101e63e64  mov w1,w20
7101e63e68  bl 0x7101e9b720
7101e63e6c  ldp x29,x30,[sp, #0x40]
7101e63e70  ldp x20,x19,[sp, #0x30]
7101e63e74  ldp x22,x21,[sp, #0x20]
7101e63e78  ldp x24,x23,[sp, #0x10]
7101e63e7c  add sp,sp,#0x50
7101e63e80  ret
7101e63e84  orr w9,wzr,#0x18
7101e63e88  madd x9,x20,x9,x8
7101e63e8c  ldrh w3,[x9, #0x20]
7101e63e90  orr w9,wzr,#0xffff
7101e63e94  cmp w3,w9
7101e63e98  b.eq 0x7101e63f34
7101e63e9c  orr w9,wzr,#0x18
7101e63ea0  madd x8,x20,x9,x8
7101e63ea4  ldrb w4,[x8, #0x22]
7101e63ea8  add x2,x19,#0x250
7101e63eac  mov x0,x21
7101e63eb0  mov w1,w20
7101e63eb4  bl 0x7101e957e0
7101e63eb8  mov w0,#0x10
7101e63ebc  orr w1,wzr,#0x18
7101e63ec0  add x21,x19,#0x278
7101e63ec4  bl 0x710392e290
7101e63ec8  cbnz x0,0x7101e63f10
7101e63ecc  adrp x8,0x7105332000
7101e63ed0  ldr x0,[x8, #0xf00]
7101e63ed4  cbz x0,0x7101e63f0c
7101e63ed8  orr w8,wzr,#0x18
7101e63edc  str wzr,[sp, #0xc]
7101e63ee0  add x1,sp,#0xc
7101e63ee4  str x8,[sp]
7101e63ee8  ldr x8,[x0]
7101e63eec  ldr x8,[x8, #0x30]
7101e63ef0  mov x2,sp
7101e63ef4  blr x8
7101e63ef8  tbz w0,#0x0,0x7101e63f0c
7101e63efc  mov w0,#0x10
7101e63f00  orr w1,wzr,#0x18
7101e63f04  bl 0x710392e290
7101e63f08  cbnz x0,0x7101e63f10
7101e63f0c  mov x0,xzr
7101e63f10  strb w20,[x0, #0x10]
7101e63f14  ldr x8,[x19, #0x278]
7101e63f18  stp x8,x21,[x0]
7101e63f1c  str x0,[x8, #0x8]
7101e63f20  ldr x8,[x19, #0x288]
7101e63f24  add x8,x8,#0x1
7101e63f28  str x0,[x19, #0x278]
7101e63f2c  str x8,[x19, #0x288]
7101e63f30  b 0x7101e63e6c
7101e63f34  ldrb w8,[x19, #0x1d2]
7101e63f38  cbz w8,0x7101e63f64
7101e63f3c  ldr x8,[x21]
7101e63f40  add x8,x8,x20, LSL #0x3
7101e63f44  ldr x22,[x8, #0x48]
7101e63f48  cbz x22,0x7101e63f64
7101e63f4c  ldr x0,[x22, #0x8]
7101e63f50  fmov s0,0x3f800000
7101e63f54  adrp x1,0x710438d000
7101e63f58  add x1,x1,#0x258
7101e63f5c  bl 0x7103778300
7101e63f60  strb wzr,[x22, #0xb1]
7101e63f64  mov x0,x21
7101e63f68  mov w1,w20
7101e63f6c  bl 0x7101e9b720
7101e63f70  add x19,x19,x20, LSL #0x2
7101e63f74  orr w20,wzr,#0xffff
7101e63f78  ldrh w2,[x19, #0x254]
7101e63f7c  cmp x2,x20
7101e63f80  b.eq 0x7101e63e6c
7101e63f84  adrp x8,0x7105329000
7101e63f88  ldr x8,[x8, #0xf98]
7101e63f8c  ldr x8,[x8]
7101e63f90  ldr x0,[x8, #0x20]
7101e63f94  ldrb w1,[x19, #0x256]
7101e63f98  mov w3,wzr
7101e63f9c  add x21,x19,#0x254
7101e63fa0  bl 0x710259c720
7101e63fa4  strh w20,[x21]
7101e63fa8  strb wzr,[x19, #0x256]
7101e63fac  b 0x7101e63e6c
