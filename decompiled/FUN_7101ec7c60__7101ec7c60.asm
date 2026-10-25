// addr:      7101ec7c60
// offset:    0x1ec7c60
// name:      FUN_7101ec7c60
// mangled:   
// size:      892

7101ec7c60  sub sp,sp,#0x90
7101ec7c64  stp x22,x21,[sp, #0x60]
7101ec7c68  stp x20,x19,[sp, #0x70]
7101ec7c6c  stp x29,x30,[sp, #0x80]
7101ec7c70  add x29,sp,#0x80
7101ec7c74  mov x19,x0
7101ec7c78  mov w1,#0x48
7101ec7c7c  mov w0,#0x10
7101ec7c80  bl 0x710392e290
7101ec7c84  cbnz x0,0x7101ec7ccc
7101ec7c88  adrp x8,0x7105332000
7101ec7c8c  ldr x0,[x8, #0xf00]
7101ec7c90  cbz x0,0x7101ec7cc8
7101ec7c94  mov w8,#0x48
7101ec7c98  stur wzr,[x29, #-0x38]
7101ec7c9c  sub x1,x29,#0x38
7101ec7ca0  str x8,[sp]
7101ec7ca4  ldr x8,[x0]
7101ec7ca8  ldr x8,[x8, #0x30]
7101ec7cac  mov x2,sp
7101ec7cb0  blr x8
7101ec7cb4  tbz w0,#0x0,0x7101ec7cc8
7101ec7cb8  mov w1,#0x48
7101ec7cbc  mov w0,#0x10
7101ec7cc0  bl 0x710392e290
7101ec7cc4  cbnz x0,0x7101ec7ccc
7101ec7cc8  mov x0,xzr
7101ec7ccc  orr x10,xzr,#0xc00000000
7101ec7cd0  str x10,[sp]
7101ec7cd4  mov x10,#0x6573
7101ec7cd8  movk x10,#0x5f74, LSL #16
7101ec7cdc  movk x10,#0x7462, LSL #32
7101ec7ce0  movk x10,#0x5f6e, LSL #48
7101ec7ce4  mov w8,#0x9dc5
7101ec7ce8  movk w8,#0x811c, LSL #16
7101ec7cec  str x10,[sp, #0x8]
7101ec7cf0  mov x11,sp
7101ec7cf4  mov w10,#0x6162
7101ec7cf8  movk w10,#0x6b63, LSL #16
7101ec7cfc  add x9,x0,#0x48
7101ec7d00  str w10,[sp, #0x10]
7101ec7d04  stur x9,[x29, #-0x28]
7101ec7d08  add x11,x11,#0x9
7101ec7d0c  mov w12,#0x73
7101ec7d10  strb wzr,[sp, #0x14]
7101ec7d14  mov w10,#0x89
7101ec7d18  mov w13,w8
7101ec7d1c  stp x0,x0,[x29, #-0x38]
7101ec7d20  mul w13,w13,w10
7101ec7d24  and w12,w12,#0xff
7101ec7d28  eor w13,w13,w12
7101ec7d2c  ldrb w12,[x11], #0x1
7101ec7d30  cbnz w12,0x7101ec7d20
7101ec7d34  str w13,[sp]
7101ec7d38  mov x12,x0
7101ec7d3c  mov x13,sp
7101ec7d40  mov x11,xzr
7101ec7d44  add x13,x13,#0x9
7101ec7d48  mov w15,#0x73
7101ec7d4c  str wzr,[x12], #0x8
7101ec7d50  add w14,w11,#0x1
7101ec7d54  cmp w14,#0x3e
7101ec7d58  strb w15,[x12, x11, LSL ]
7101ec7d5c  b.hi 0x7101ec7d74
7101ec7d60  ldrb w15,[x13, x11, LSL ]
7101ec7d64  add x14,x11,#0x1
7101ec7d68  mov x11,x14
7101ec7d6c  cbnz w15,0x7101ec7d50
7101ec7d70  b 0x7101ec7d78
7101ec7d74  add w14,w11,#0x1
7101ec7d78  add x11,x0,#0x8
7101ec7d7c  strb wzr,[x11, w14, UXTW ]
7101ec7d80  ldrb w12,[x0, #0x8]
7101ec7d84  str w14,[x0, #0x4]
7101ec7d88  cbz w12,0x7101ec7da4
7101ec7d8c  add x11,x0,#0x9
7101ec7d90  mul w8,w8,w10
7101ec7d94  and w12,w12,#0xff
7101ec7d98  eor w8,w8,w12
7101ec7d9c  ldrb w12,[x11], #0x1
7101ec7da0  cbnz w12,0x7101ec7d90
7101ec7da4  str w8,[x0]
7101ec7da8  adrp x1,0x710432a000
7101ec7dac  add x1,x1,#0x78a
7101ec7db0  sub x2,x29,#0x38
7101ec7db4  mov x0,x19
7101ec7db8  stur x9,[x29, #-0x30]
7101ec7dbc  bl 0x7101ec4640
7101ec7dc0  mov x0,x19
7101ec7dc4  mov w1,wzr
7101ec7dc8  bl 0x7101ec7250
7101ec7dcc  ldr x0,[x19, #0x8]
7101ec7dd0  adrp x1,0x71043f1000
7101ec7dd4  add x1,x1,#0x9f
7101ec7dd8  mov x8,sp
7101ec7ddc  mov x20,sp
7101ec7de0  bl 0x71037780e0
7101ec7de4  add x8,x19,#0x38
7101ec7de8  cmp x8,x20
7101ec7dec  b.eq 0x7101ec7e08
7101ec7df0  ldr x8,[sp, #0x8]
7101ec7df4  str xzr,[sp, #0x8]
7101ec7df8  ldr x0,[x19, #0x40]
7101ec7dfc  str x8,[x19, #0x40]
7101ec7e00  cbz x0,0x7101ec7e08
7101ec7e04  bl 0x710392eb40
7101ec7e08  ldr x0,[sp, #0x8]
7101ec7e0c  adrp x21,0x710523d000
7101ec7e10  add x21,x21,#0x9e8
7101ec7e14  stp x21,xzr,[sp]
7101ec7e18  cbz x0,0x7101ec7e20
7101ec7e1c  bl 0x710392eb40
7101ec7e20  ldr x0,[x19, #0x8]
7101ec7e24  adrp x1,0x710434a000
7101ec7e28  add x1,x1,#0xb6a
7101ec7e2c  mov x8,sp
7101ec7e30  mov x22,sp
7101ec7e34  bl 0x71037780e0
7101ec7e38  add x20,x19,#0x48
7101ec7e3c  cmp x20,x22
7101ec7e40  b.eq 0x7101ec7e5c
7101ec7e44  ldr x8,[sp, #0x8]
7101ec7e48  str xzr,[sp, #0x8]
7101ec7e4c  ldr x0,[x19, #0x50]
7101ec7e50  str x8,[x19, #0x50]
7101ec7e54  cbz x0,0x7101ec7e5c
7101ec7e58  bl 0x710392eb40
7101ec7e5c  ldr x0,[sp, #0x8]
7101ec7e60  stp x21,xzr,[sp]
7101ec7e64  cbz x0,0x7101ec7e6c
7101ec7e68  bl 0x710392eb40
7101ec7e6c  mov x0,x20
7101ec7e70  bl 0x710377b140
7101ec7e74  ldr x0,[x19, #0x8]
7101ec7e78  adrp x1,0x710439d000
7101ec7e7c  add x1,x1,#0xba9
7101ec7e80  mov x8,sp
7101ec7e84  strb wzr,[x19, #0x58]
7101ec7e88  bl 0x7103776640
7101ec7e8c  adrp x8,0x7105314000
7101ec7e90  add x8,x8,#0x4d8
7101ec7e94  ldarb w8,[x8]
7101ec7e98  tbz w8,#0x0,0x7101ec7f9c
7101ec7e9c  adrp x8,0x7105305000
7101ec7ea0  ldr w8,[x8, #0xf0]
7101ec7ea4  and w8,w8,#0x7f000000
7101ec7ea8  orr w9,wzr,#0xfe000000
7101ec7eac  add w8,w8,w9
7101ec7eb0  lsr w8,w8,#0x18
7101ec7eb4  cmp w8,#0x6
7101ec7eb8  b.hi 0x7101ec7ef0
7101ec7ebc  adrp x9,0x71044fc000
7101ec7ec0  add x9,x9,#0x2ec
7101ec7ec4  ldrsw x8,[x9, x8, LSL #0x2]
7101ec7ec8  add x8,x8,x9
7101ec7ecc  br x8
7101ec7ed0  ldr x19,[sp, #0x8]
7101ec7ed4  adrp x1,0x7104443000
7101ec7ed8  add x1,x1,#0xe9b
7101ec7edc  b 0x7101ec7f3c
7101ec7ee0  ldr x19,[sp, #0x8]
7101ec7ee4  adrp x1,0x7104281000
7101ec7ee8  add x1,x1,#0x275
7101ec7eec  b 0x7101ec7f3c
7101ec7ef0  ldr x19,[sp, #0x8]
7101ec7ef4  adrp x1,0x710437c000
7101ec7ef8  add x1,x1,#0xc7b
7101ec7efc  b 0x7101ec7f3c
7101ec7f00  ldr x19,[sp, #0x8]
7101ec7f04  adrp x1,0x71042f8000
7101ec7f08  add x1,x1,#0xb2f
7101ec7f0c  b 0x7101ec7f3c
7101ec7f10  ldr x19,[sp, #0x8]
7101ec7f14  adrp x1,0x71043be000
7101ec7f18  add x1,x1,#0xda6
7101ec7f1c  b 0x7101ec7f3c
7101ec7f20  ldr x19,[sp, #0x8]
7101ec7f24  adrp x1,0x71043f1000
7101ec7f28  add x1,x1,#0xa7
7101ec7f2c  b 0x7101ec7f3c
7101ec7f30  ldr x19,[sp, #0x8]
7101ec7f34  adrp x1,0x71042b4000
7101ec7f38  add x1,x1,#0xb7c
7101ec7f3c  fmov s0,0x3f800000
7101ec7f40  mov x0,x19
7101ec7f44  bl 0x7103778300
7101ec7f48  adrp x8,0x710523d000
7101ec7f4c  add x8,x8,#0x988
7101ec7f50  stp x8,xzr,[sp]
7101ec7f54  cbz x19,0x7101ec7f78
7101ec7f58  ldr x0,[x19, #0x18]
7101ec7f5c  adrp x8,0x710523d000
7101ec7f60  add x8,x8,#0x9a8
7101ec7f64  stp x8,xzr,[x19, #0x10]
7101ec7f68  cbz x0,0x7101ec7f70
7101ec7f6c  bl 0x710392eb40
7101ec7f70  mov x0,x19
7101ec7f74  bl 0x710392eb40
7101ec7f78  ldur x0,[x29, #-0x38]
7101ec7f7c  cbz x0,0x7101ec7f88
7101ec7f80  stur x0,[x29, #-0x30]
7101ec7f84  bl 0x710392eb40
7101ec7f88  ldp x29,x30,[sp, #0x80]
7101ec7f8c  ldp x20,x19,[sp, #0x70]
7101ec7f90  ldp x22,x21,[sp, #0x60]
7101ec7f94  add sp,sp,#0x90
7101ec7f98  ret
7101ec7f9c  adrp x0,0x7105314000
7101ec7fa0  add x0,x0,#0x4d8
7101ec7fa4  bl 0x71039c06b0
7101ec7fa8  cbz w0,0x7101ec7e9c
7101ec7fac  bl 0x7101764000
7101ec7fb0  adrp x0,0x7101763000
7101ec7fb4  add x0,x0,#0xc40
7101ec7fb8  adrp x1,0x71052c5000
7101ec7fbc  add x1,x1,#0x180
7101ec7fc0  adrp x2,0x7104f17000
7101ec7fc4  add x2,x2,#0x0
7101ec7fc8  bl 0x71000001c0
7101ec7fcc  adrp x0,0x7105314000
7101ec7fd0  add x0,x0,#0x4d8
7101ec7fd4  bl 0x71039c06c0
7101ec7fd8  b 0x7101ec7e9c
