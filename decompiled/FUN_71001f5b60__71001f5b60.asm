// addr:      71001f5b60
// offset:    0x1f5b60
// name:      FUN_71001f5b60
// mangled:   
// size:      1116

71001f5b60  sub sp,sp,#0xc0
71001f5b64  str x25,[sp, #0x70]
71001f5b68  stp x24,x23,[sp, #0x80]
71001f5b6c  stp x22,x21,[sp, #0x90]
71001f5b70  stp x20,x19,[sp, #0xa0]
71001f5b74  stp x29,x30,[sp, #0xb0]
71001f5b78  add x29,sp,#0xb0
71001f5b7c  ldrh w8,[x1, #0x44]
71001f5b80  ldrh w21,[x1, #0xac]
71001f5b84  mov x19,x1
71001f5b88  sub x1,x29,#0x38
71001f5b8c  mov x20,x0
71001f5b90  sturh w8,[x29, #-0x38]
71001f5b94  bl 0x71001f59a0
71001f5b98  cbz x0,0x71001f5c2c
71001f5b9c  ldr x8,[x20, #0x28]
71001f5ba0  ldr x23,[x8, #0x120]
71001f5ba4  mov x22,x0
71001f5ba8  cbz x23,0x71001f5d94
71001f5bac  adrp x25,0x71052a6000
71001f5bb0  ldr x25,[x25, #0xe70]
71001f5bb4  str xzr,[sp, #0x60]
71001f5bb8  stp xzr,xzr,[sp, #0x20]
71001f5bbc  add x8,x25,#0x10
71001f5bc0  stp xzr,xzr,[sp, #0x38]
71001f5bc4  str x8,[sp]
71001f5bc8  mov x8,sp
71001f5bcc  add x9,x8,#0x20
71001f5bd0  str x9,[sp, #0x18]
71001f5bd4  add x9,x8,#0x38
71001f5bd8  add x8,x8,#0x50
71001f5bdc  str x8,[sp, #0x48]
71001f5be0  mov w8,#0x1
71001f5be4  mov w0,#0x90
71001f5be8  str x9,[sp, #0x30]
71001f5bec  stp xzr,xzr,[sp, #0x50]
71001f5bf0  strh w8,[sp, #0x68]
71001f5bf4  strb w8,[sp, #0x6a]
71001f5bf8  bl 0x71001af850
71001f5bfc  mov x24,x0
71001f5c00  cbz x0,0x71001f5c0c
71001f5c04  mov x0,x24
71001f5c08  bl 0x71001beb40
71001f5c0c  ldrb w8,[sp, #0x68]
71001f5c10  str x24,[sp, #0x8]
71001f5c14  cbz w8,0x71001f5c98
71001f5c18  mov w8,#0x1
71001f5c1c  str w8,[sp, #0x10]
71001f5c20  strb wzr,[sp, #0x69]
71001f5c24  add x24,x19,#0x140
71001f5c28  b 0x71001f5cc0
71001f5c2c  adrp x8,0x71052a4000
71001f5c30  ldr x8,[x8, #0xda8]
71001f5c34  adrp x21,0x71052a4000
71001f5c38  ldrb w8,[x8]
71001f5c3c  ldr x21,[x21, #0xdb0]
71001f5c40  add x20,x21,#0x28
71001f5c44  cbz w8,0x71001f5c80
71001f5c48  adrp x8,0x71052a4000
71001f5c4c  ldr x8,[x8, #0xdb8]
71001f5c50  ldr x0,[x8]
71001f5c54  bl 0x7101717960
71001f5c58  ldr w8,[x0]
71001f5c5c  cbz w8,0x71001f5c80
71001f5c60  ldr x10,[x21, #0xa0]
71001f5c64  ldp x9,x10,[x10]
71001f5c68  sub x10,x10,x9
71001f5c6c  asr x10,x10,#0x3
71001f5c70  cmp x10,x8
71001f5c74  b.ls 0x71001f5ec0
71001f5c78  ldr x8,[x9, x8, LSL #0x3]
71001f5c7c  add x20,x8,#0x20
71001f5c80  ldr x8,[x20]
71001f5c84  cbz x8,0x71001f5ed8
71001f5c88  ldr x8,[x8, #0x10]
71001f5c8c  cbz x8,0x71001f5ed8
71001f5c90  ldr x20,[x8, #0x10]
71001f5c94  b 0x71001f5edc
71001f5c98  mov x0,sp
71001f5c9c  bl 0x71001f2180
71001f5ca0  ldrb w8,[sp, #0x68]
71001f5ca4  mov w9,#0x1
71001f5ca8  add x24,x19,#0x140
71001f5cac  str w9,[sp, #0x10]
71001f5cb0  strb wzr,[sp, #0x69]
71001f5cb4  cbnz w8,0x71001f5cc0
71001f5cb8  mov x0,sp
71001f5cbc  bl 0x71001f2180
71001f5cc0  ldr x0,[sp, #0x8]
71001f5cc4  mov x1,x24
71001f5cc8  bl 0x71001bec20
71001f5ccc  strb wzr,[sp, #0x69]
71001f5cd0  ldr x8,[x23]
71001f5cd4  ldr x8,[x8, #0x18]
71001f5cd8  mov x1,sp
71001f5cdc  mov x0,x23
71001f5ce0  mov w2,w21
71001f5ce4  blr x8
71001f5ce8  ldrb w8,[sp, #0x68]
71001f5cec  mov w23,w0
71001f5cf0  cbnz w8,0x71001f5cfc
71001f5cf4  mov x0,sp
71001f5cf8  bl 0x71001f2180
71001f5cfc  ldr x1,[sp, #0x8]
71001f5d00  mov x0,x24
71001f5d04  bl 0x71001bec20
71001f5d08  add x8,x25,#0x10
71001f5d0c  str x8,[sp]
71001f5d10  ldr x8,[sp, #0x60]
71001f5d14  cbz x8,0x71001f5d28
71001f5d18  sub x0,x8,#0x4
71001f5d1c  bl 0x71001b1870
71001f5d20  str xzr,[sp, #0x60]
71001f5d24  strb wzr,[sp, #0x69]
71001f5d28  ldr x0,[sp, #0x8]
71001f5d2c  cbz x0,0x71001f5d3c
71001f5d30  ldr x8,[x0]
71001f5d34  ldr x8,[x8, #0x8]
71001f5d38  blr x8
71001f5d3c  ldr x1,[sp, #0x50]
71001f5d40  mov x24,sp
71001f5d44  add x0,x24,#0x48
71001f5d48  bl 0x7101711670
71001f5d4c  ldr x1,[sp, #0x38]
71001f5d50  add x0,x24,#0x30
71001f5d54  bl 0x7101711670
71001f5d58  ldr x1,[sp, #0x20]
71001f5d5c  add x0,x24,#0x18
71001f5d60  bl 0x7100219ca0
71001f5d64  tbz w23,#0x0,0x71001f5d94
71001f5d68  add x8,x19,#0x8
71001f5d6c  ldar w11,[x8]
71001f5d70  ldaxr w10,[x8]
71001f5d74  sub w9,w11,#0x1
71001f5d78  cmp w10,w11
71001f5d7c  b.ne 0x71001f5e48
71001f5d80  stlxr w11,w9,[x8]
71001f5d84  cbnz w11,0x71001f5e4c
71001f5d88  mov w11,#0x1
71001f5d8c  tbz w11,#0x0,0x71001f5e54
71001f5d90  b 0x71001f5e9c
71001f5d94  ldr x8,[x22]
71001f5d98  ldr x8,[x8, #0x10]
71001f5d9c  ldrb w2,[x19, #0x43]
71001f5da0  mov x0,x22
71001f5da4  mov w1,w21
71001f5da8  mov x3,x19
71001f5dac  blr x8
71001f5db0  tbnz w0,#0x0,0x71001f5fa0
71001f5db4  ldr x0,[x20, #0x28]
71001f5db8  ldr x1,[x19, #0x138]
71001f5dbc  add x2,x19,#0x140
71001f5dc0  bl 0x71001f10d0
71001f5dc4  add x8,x19,#0x8
71001f5dc8  ldar w11,[x8]
71001f5dcc  ldaxr w10,[x8]
71001f5dd0  sub w9,w11,#0x1
71001f5dd4  cmp w10,w11
71001f5dd8  b.ne 0x71001f5df0
71001f5ddc  stlxr w11,w9,[x8]
71001f5de0  cbnz w11,0x71001f5df4
71001f5de4  mov w11,#0x1
71001f5de8  tbz w11,#0x0,0x71001f5dfc
71001f5dec  b 0x71001f5e9c
71001f5df0  clrex 
71001f5df4  mov w11,wzr
71001f5df8  tbnz w11,#0x0,0x71001f5e9c
71001f5dfc  ldaxr w11,[x8]
71001f5e00  sub w9,w10,#0x1
71001f5e04  cmp w11,w10
71001f5e08  b.ne 0x71001f5e24
71001f5e0c  stlxr w10,w9,[x8]
71001f5e10  cbz w10,0x71001f5e38
71001f5e14  mov w12,wzr
71001f5e18  mov w10,w11
71001f5e1c  cbz w12,0x71001f5dfc
71001f5e20  b 0x71001f5e9c
71001f5e24  clrex 
71001f5e28  mov w12,wzr
71001f5e2c  mov w10,w11
71001f5e30  cbz w12,0x71001f5dfc
71001f5e34  b 0x71001f5e9c
71001f5e38  mov w12,#0x1
71001f5e3c  mov w10,w11
71001f5e40  cbz w12,0x71001f5dfc
71001f5e44  b 0x71001f5e9c
71001f5e48  clrex 
71001f5e4c  mov w11,wzr
71001f5e50  tbnz w11,#0x0,0x71001f5e9c
71001f5e54  ldaxr w11,[x8]
71001f5e58  sub w9,w10,#0x1
71001f5e5c  cmp w11,w10
71001f5e60  b.ne 0x71001f5e7c
71001f5e64  stlxr w10,w9,[x8]
71001f5e68  cbz w10,0x71001f5e90
71001f5e6c  mov w12,wzr
71001f5e70  mov w10,w11
71001f5e74  cbz w12,0x71001f5e54
71001f5e78  b 0x71001f5e9c
71001f5e7c  clrex 
71001f5e80  mov w12,wzr
71001f5e84  mov w10,w11
71001f5e88  cbz w12,0x71001f5e54
71001f5e8c  b 0x71001f5e9c
71001f5e90  mov w12,#0x1
71001f5e94  mov w10,w11
71001f5e98  cbz w12,0x71001f5e54
71001f5e9c  cbnz w9,0x71001f5fa0
71001f5ea0  ldrb w8,[x19, #0xc]
71001f5ea4  cbnz w8,0x71001f5fa0
71001f5ea8  mov w8,#0x1
71001f5eac  strb w8,[x19, #0xc]
71001f5eb0  ldr x8,[x19]
71001f5eb4  ldr x8,[x8, #0x8]
71001f5eb8  mov x0,x19
71001f5ebc  b 0x71001f5f9c
71001f5ec0  adrp x0,0x71042c4000
71001f5ec4  add x0,x0,#0x35f
71001f5ec8  mov w1,#0x47
71001f5ecc  orr w2,wzr,#0xe0000003
71001f5ed0  mov w3,wzr
71001f5ed4  bl 0x71001b1300
71001f5ed8  mov x20,xzr
71001f5edc  ldr x8,[x20, #0x78]!
71001f5ee0  ldr x8,[x8, #0x10]
71001f5ee4  mov x0,x20
71001f5ee8  blr x8
71001f5eec  add x8,x19,#0x8
71001f5ef0  ldar w11,[x8]
71001f5ef4  ldaxr w10,[x8]
71001f5ef8  sub w9,w11,#0x1
71001f5efc  cmp w10,w11
71001f5f00  b.ne 0x71001f5f18
71001f5f04  stlxr w11,w9,[x8]
71001f5f08  cbnz w11,0x71001f5f1c
71001f5f0c  mov w11,#0x1
71001f5f10  tbz w11,#0x0,0x71001f5f24
71001f5f14  b 0x71001f5f6c
71001f5f18  clrex 
71001f5f1c  mov w11,wzr
71001f5f20  tbnz w11,#0x0,0x71001f5f6c
71001f5f24  ldaxr w11,[x8]
71001f5f28  sub w9,w10,#0x1
71001f5f2c  cmp w11,w10
71001f5f30  b.ne 0x71001f5f4c
71001f5f34  stlxr w10,w9,[x8]
71001f5f38  cbz w10,0x71001f5f60
71001f5f3c  mov w12,wzr
71001f5f40  mov w10,w11
71001f5f44  cbz w12,0x71001f5f24
71001f5f48  b 0x71001f5f6c
71001f5f4c  clrex 
71001f5f50  mov w12,wzr
71001f5f54  mov w10,w11
71001f5f58  cbz w12,0x71001f5f24
71001f5f5c  b 0x71001f5f6c
71001f5f60  mov w12,#0x1
71001f5f64  mov w10,w11
71001f5f68  cbz w12,0x71001f5f24
71001f5f6c  cbnz w9,0x71001f5f90
71001f5f70  ldrb w8,[x19, #0xc]
71001f5f74  cbnz w8,0x71001f5f90
71001f5f78  mov w8,#0x1
71001f5f7c  strb w8,[x19, #0xc]
71001f5f80  ldr x8,[x19]
71001f5f84  ldr x8,[x8, #0x8]
71001f5f88  mov x0,x19
71001f5f8c  blr x8
71001f5f90  ldr x8,[x20]
71001f5f94  ldr x8,[x8, #0x20]
71001f5f98  mov x0,x20
71001f5f9c  blr x8
71001f5fa0  ldp x29,x30,[sp, #0xb0]
71001f5fa4  ldr x25,[sp, #0x70]
71001f5fa8  ldp x20,x19,[sp, #0xa0]
71001f5fac  ldp x22,x21,[sp, #0x90]
71001f5fb0  ldp x24,x23,[sp, #0x80]
71001f5fb4  add sp,sp,#0xc0
71001f5fb8  ret
