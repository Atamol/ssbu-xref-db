// addr:      7101eb5c90
// offset:    0x1eb5c90
// name:      FUN_7101eb5c90
// mangled:   
// size:      1024

7101eb5c90  stp d9,d8,[sp, #-0x40]!
7101eb5c94  str x21,[sp, #0x10]
7101eb5c98  stp x20,x19,[sp, #0x20]
7101eb5c9c  stp x29,x30,[sp, #0x30]
7101eb5ca0  add x29,sp,#0x30
7101eb5ca4  ldr x8,[x0, #0x8]
7101eb5ca8  ldr x20,[x0, #0x318]
7101eb5cac  mov x19,x0
7101eb5cb0  ldr x21,[x8]
7101eb5cb4  ldrb w9,[x20, #0x161]
7101eb5cb8  ldr w8,[x0, #0x270]
7101eb5cbc  cbz w9,0x7101eb5e70
7101eb5cc0  ldr x0,[x21, #0x10]
7101eb5cc4  cmp w8,#0x1
7101eb5cc8  b.ne 0x7101eb5ea8
7101eb5ccc  ldr x20,[x0, #0x8]
7101eb5cd0  cbz x20,0x7101eb5e18
7101eb5cd4  adrp x1,0x71043f1000
7101eb5cd8  add x1,x1,#0x12
7101eb5cdc  mov x0,x20
7101eb5ce0  bl 0x71037964b0
7101eb5ce4  cbz x0,0x7101eb5d04
7101eb5ce8  ldr x8,[x0]
7101eb5cec  ldr x8,[x8, #0x138]
7101eb5cf0  blr x8
7101eb5cf4  tbz w0,#0x0,0x7101eb607c
7101eb5cf8  ldr x8,[x21, #0x10]
7101eb5cfc  ldr x20,[x8, #0x8]
7101eb5d00  cbz x20,0x7101eb5e18
7101eb5d04  adrp x1,0x7104422000
7101eb5d08  add x1,x1,#0xaec
7101eb5d0c  mov x0,x20
7101eb5d10  bl 0x71037964b0
7101eb5d14  cbz x0,0x7101eb5d34
7101eb5d18  ldr x8,[x0]
7101eb5d1c  ldr x8,[x8, #0x138]
7101eb5d20  blr x8
7101eb5d24  tbz w0,#0x0,0x7101eb607c
7101eb5d28  ldr x8,[x21, #0x10]
7101eb5d2c  ldr x20,[x8, #0x8]
7101eb5d30  cbz x20,0x7101eb5e18
7101eb5d34  adrp x1,0x71043be000
7101eb5d38  add x1,x1,#0xd92
7101eb5d3c  mov x0,x20
7101eb5d40  bl 0x71037964b0
7101eb5d44  cbz x0,0x7101eb5d64
7101eb5d48  ldr x8,[x0]
7101eb5d4c  ldr x8,[x8, #0x138]
7101eb5d50  blr x8
7101eb5d54  tbz w0,#0x0,0x7101eb607c
7101eb5d58  ldr x8,[x21, #0x10]
7101eb5d5c  ldr x20,[x8, #0x8]
7101eb5d60  cbz x20,0x7101eb5e18
7101eb5d64  adrp x1,0x7104433000
7101eb5d68  add x1,x1,#0x811
7101eb5d6c  mov x0,x20
7101eb5d70  bl 0x71037964b0
7101eb5d74  cbz x0,0x7101eb5d94
7101eb5d78  ldr x8,[x0]
7101eb5d7c  ldr x8,[x8, #0x138]
7101eb5d80  blr x8
7101eb5d84  tbz w0,#0x0,0x7101eb607c
7101eb5d88  ldr x8,[x21, #0x10]
7101eb5d8c  ldr x20,[x8, #0x8]
7101eb5d90  cbz x20,0x7101eb5e18
7101eb5d94  adrp x1,0x71042b4000
7101eb5d98  add x1,x1,#0xb57
7101eb5d9c  mov x0,x20
7101eb5da0  bl 0x71037964b0
7101eb5da4  cbz x0,0x7101eb5dc4
7101eb5da8  ldr x8,[x0]
7101eb5dac  ldr x8,[x8, #0x138]
7101eb5db0  blr x8
7101eb5db4  tbz w0,#0x0,0x7101eb607c
7101eb5db8  ldr x8,[x21, #0x10]
7101eb5dbc  ldr x20,[x8, #0x8]
7101eb5dc0  cbz x20,0x7101eb5e18
7101eb5dc4  adrp x1,0x710436c000
7101eb5dc8  add x1,x1,#0xaa8
7101eb5dcc  mov x0,x20
7101eb5dd0  bl 0x71037964b0
7101eb5dd4  cbz x0,0x7101eb5df4
7101eb5dd8  ldr x8,[x0]
7101eb5ddc  ldr x8,[x8, #0x138]
7101eb5de0  blr x8
7101eb5de4  tbz w0,#0x0,0x7101eb607c
7101eb5de8  ldr x8,[x21, #0x10]
7101eb5dec  ldr x20,[x8, #0x8]
7101eb5df0  cbz x20,0x7101eb5e18
7101eb5df4  adrp x1,0x7104401000
7101eb5df8  add x1,x1,#0xc9e
7101eb5dfc  mov x0,x20
7101eb5e00  bl 0x71037964b0
7101eb5e04  cbz x0,0x7101eb5e18
7101eb5e08  ldr x8,[x0]
7101eb5e0c  ldr x8,[x8, #0x138]
7101eb5e10  blr x8
7101eb5e14  tbz w0,#0x0,0x7101eb607c
7101eb5e18  ldr x8,[x19, #0x318]
7101eb5e1c  ldr x8,[x8, #0x128]
7101eb5e20  ldr x0,[x8, #0x8]
7101eb5e24  cbz x0,0x7101eb5e38
7101eb5e28  ldr x8,[x0]
7101eb5e2c  ldr x8,[x8, #0x138]
7101eb5e30  blr x8
7101eb5e34  tbz w0,#0x0,0x7101eb607c
7101eb5e38  ldr x8,[x19, #0x358]
7101eb5e3c  ldrb w9,[x8, #0x1ec]
7101eb5e40  cbz w9,0x7101eb5e60
7101eb5e44  ldr x8,[x8, #0x1c0]
7101eb5e48  ldr x0,[x8, #0x8]
7101eb5e4c  cbz x0,0x7101eb5e60
7101eb5e50  ldr x8,[x0]
7101eb5e54  ldr x8,[x8, #0x138]
7101eb5e58  blr x8
7101eb5e5c  tbz w0,#0x0,0x7101eb607c
7101eb5e60  ldr x8,[x19, #0x318]
7101eb5e64  ldrb w8,[x8, #0x162]
7101eb5e68  cbnz w8,0x7101eb6078
7101eb5e6c  b 0x7101eb5e78
7101eb5e70  cmp w8,#0x1
7101eb5e74  b.ne 0x7101eb5fe4
7101eb5e78  ldr x8,[x21, #0x10]
7101eb5e7c  ldr x0,[x8, #0x8]
7101eb5e80  cbz x0,0x7101eb6078
7101eb5e84  adrp x1,0x71043cf000
7101eb5e88  add x1,x1,#0xc04
7101eb5e8c  bl 0x71037964b0
7101eb5e90  cbz x0,0x7101eb6078
7101eb5e94  ldr x8,[x0]
7101eb5e98  ldr x8,[x8, #0x138]
7101eb5e9c  blr x8
7101eb5ea0  tbnz w0,#0x0,0x7101eb6078
7101eb5ea4  b 0x7101eb607c
7101eb5ea8  fmov s8,0x3f800000
7101eb5eac  mov v0.16B,v8.16B
7101eb5eb0  adrp x1,0x71043f1000
7101eb5eb4  add x1,x1,#0x12
7101eb5eb8  bl 0x7103778300
7101eb5ebc  ldr x0,[x21, #0x10]
7101eb5ec0  mov v0.16B,v8.16B
7101eb5ec4  adrp x1,0x7104422000
7101eb5ec8  add x1,x1,#0xaec
7101eb5ecc  bl 0x7103778300
7101eb5ed0  fmov s9,0xbf800000
7101eb5ed4  ldr x0,[x21, #0x10]
7101eb5ed8  adrp x1,0x71043be000
7101eb5edc  add x1,x1,#0xd92
7101eb5ee0  mov v0.16B,v9.16B
7101eb5ee4  bl 0x7103778300
7101eb5ee8  ldr x0,[x21, #0x10]
7101eb5eec  mov v0.16B,v9.16B
7101eb5ef0  adrp x1,0x7104433000
7101eb5ef4  add x1,x1,#0x811
7101eb5ef8  bl 0x7103778300
7101eb5efc  ldr x0,[x21, #0x10]
7101eb5f00  mov v0.16B,v9.16B
7101eb5f04  adrp x1,0x71042b4000
7101eb5f08  add x1,x1,#0xb57
7101eb5f0c  bl 0x7103778300
7101eb5f10  ldr x0,[x21, #0x10]
7101eb5f14  mov v0.16B,v8.16B
7101eb5f18  adrp x1,0x710436c000
7101eb5f1c  add x1,x1,#0xaa8
7101eb5f20  bl 0x7103778300
7101eb5f24  ldr x0,[x21, #0x10]
7101eb5f28  mov v0.16B,v8.16B
7101eb5f2c  adrp x1,0x7104401000
7101eb5f30  add x1,x1,#0xc9e
7101eb5f34  bl 0x7103778300
7101eb5f38  ldr x8,[x19, #0x318]
7101eb5f3c  ldr w9,[x8, #0xb8]
7101eb5f40  add x10,x8,#0xd8
7101eb5f44  add x11,x8,#0x108
7101eb5f48  cmp w9,#0x0
7101eb5f4c  csel x9,x10,x11,eq
7101eb5f50  mov w10,#0x108
7101eb5f54  mov w11,#0xd8
7101eb5f58  ldr x9,[x9]
7101eb5f5c  csel x10,x11,x10,eq
7101eb5f60  ldr x11,[x8, #0x128]
7101eb5f64  ldr x9,[x9]
7101eb5f68  str x9,[x11]
7101eb5f6c  ldr x9,[x8, x10, LSL #0x0]
7101eb5f70  ldr x9,[x9, #0x8]
7101eb5f74  ldr x11,[x8, #0x128]
7101eb5f78  str x9,[x11, #0x8]
7101eb5f7c  ldr x9,[x8, x10, LSL #0x0]
7101eb5f80  add x0,x8,#0x120
7101eb5f84  ldr x8,[x8, #0x128]
7101eb5f88  ldrb w9,[x9, #0x10]
7101eb5f8c  mov v0.16B,v8.16B
7101eb5f90  strb w9,[x8, #0x10]
7101eb5f94  bl 0x710377aee0
7101eb5f98  ldr x8,[x19, #0x358]
7101eb5f9c  ldrb w9,[x8, #0x1ec]
7101eb5fa0  cbz w9,0x7101eb5fb0
7101eb5fa4  fmov s0,0x3f800000
7101eb5fa8  add x0,x8,#0x1b8
7101eb5fac  bl 0x710377aee0
7101eb5fb0  mov w8,#0x1
7101eb5fb4  str w8,[x19, #0x270]
7101eb5fb8  ldr x19,[x19, #0x318]
7101eb5fbc  ldrb w8,[x19, #0x162]
7101eb5fc0  cbz w8,0x7101eb600c
7101eb5fc4  ldr x0,[x19, #0x8]
7101eb5fc8  bl 0x7101ec57e0
7101eb5fcc  ldrb w8,[x19, #0x161]
7101eb5fd0  add x0,x19,#0x38
7101eb5fd4  cbz w8,0x7101eb6030
7101eb5fd8  adrp x1,0x71042b4000
7101eb5fdc  add x1,x1,#0xb22
7101eb5fe0  b 0x7101eb6038
7101eb5fe4  ldrb w8,[x20, #0x162]
7101eb5fe8  cbz w8,0x7101eb604c
7101eb5fec  ldr x0,[x20, #0x8]
7101eb5ff0  bl 0x7101ec57e0
7101eb5ff4  ldrb w8,[x20, #0x161]
7101eb5ff8  add x0,x20,#0x38
7101eb5ffc  cbz w8,0x7101eb606c
7101eb6000  adrp x1,0x71042b4000
7101eb6004  add x1,x1,#0xb22
7101eb6008  b 0x7101eb6074
7101eb600c  ldr x0,[x21, #0x10]
7101eb6010  ldp x29,x30,[sp, #0x30]
7101eb6014  ldp x20,x19,[sp, #0x20]
7101eb6018  adrp x1,0x71043cf000
7101eb601c  add x1,x1,#0xc04
7101eb6020  ldr x21,[sp, #0x10]
7101eb6024  fmov s0,0xbf800000
7101eb6028  ldp d9,d8,[sp], #0x40
7101eb602c  b 0x7103778300
7101eb6030  adrp x1,0x71042d6000
7101eb6034  add x1,x1,#0xab9
7101eb6038  ldp x29,x30,[sp, #0x30]
7101eb603c  ldr x21,[sp, #0x10]
7101eb6040  ldp x20,x19,[sp, #0x20]
7101eb6044  ldp d9,d8,[sp], #0x40
7101eb6048  b 0x710377a120
7101eb604c  ldr x0,[x21, #0x10]
7101eb6050  fmov s0,0xbf800000
7101eb6054  adrp x1,0x71043cf000
7101eb6058  add x1,x1,#0xc04
7101eb605c  bl 0x7103778300
7101eb6060  mov w8,#0x1
7101eb6064  str w8,[x19, #0x270]
7101eb6068  b 0x7101eb607c
7101eb606c  adrp x1,0x71042d6000
7101eb6070  add x1,x1,#0xab9
7101eb6074  bl 0x710377a120
7101eb6078  stp xzr,xzr,[x19, #0x10]
7101eb607c  ldp x29,x30,[sp, #0x30]
7101eb6080  ldr x21,[sp, #0x10]
7101eb6084  ldp x20,x19,[sp, #0x20]
7101eb6088  ldp d9,d8,[sp], #0x40
7101eb608c  ret
