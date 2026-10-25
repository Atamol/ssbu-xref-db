// addr:      7101af5f00
// offset:    0x1af5f00
// name:      FUN_7101af5f00
// mangled:   
// size:      412

7101af5f00  sub sp,sp,#0x50
7101af5f04  str d8,[sp, #0x20]
7101af5f08  str x21,[sp, #0x28]
7101af5f0c  stp x20,x19,[sp, #0x30]
7101af5f10  stp x29,x30,[sp, #0x40]
7101af5f14  add x29,sp,#0x40
7101af5f18  ldr x8,[x0, #0xb8]
7101af5f1c  ldr x8,[x8]
7101af5f20  mov w19,w1
7101af5f24  mov x20,x0
7101af5f28  add x0,x8,#0x8
7101af5f2c  adrp x1,0x7104349000
7101af5f30  add x1,x1,#0xf4c
7101af5f34  add x8,sp,#0x10
7101af5f38  bl 0x7103776640
7101af5f3c  ldr x8,[x20, #0xb8]
7101af5f40  ldr x8,[x8]
7101af5f44  add x0,x8,#0x8
7101af5f48  adrp x1,0x7104401000
7101af5f4c  add x1,x1,#0x66c
7101af5f50  mov x8,sp
7101af5f54  bl 0x7103776640
7101af5f58  sub w8,w19,#0x1
7101af5f5c  cmp w8,#0x6
7101af5f60  b.hi 0x7101af5f88
7101af5f64  adrp x9,0x71044f8000
7101af5f68  add x9,x9,#0x41c
7101af5f6c  ldrsw x8,[x9, x8, LSL #0x2]
7101af5f70  add x8,x8,x9
7101af5f74  br x8
7101af5f78  ldr x19,[sp, #0x18]
7101af5f7c  adrp x21,0x710437c000
7101af5f80  add x21,x21,#0xc7b
7101af5f84  b 0x7101af5fe4
7101af5f88  ldr x19,[sp, #0x18]
7101af5f8c  adrp x21,0x7104443000
7101af5f90  add x21,x21,#0xe9b
7101af5f94  b 0x7101af5fe4
7101af5f98  ldr x19,[sp, #0x18]
7101af5f9c  adrp x21,0x7104281000
7101af5fa0  add x21,x21,#0x275
7101af5fa4  b 0x7101af5fe4
7101af5fa8  ldr x19,[sp, #0x18]
7101af5fac  adrp x21,0x71042f8000
7101af5fb0  add x21,x21,#0xb2f
7101af5fb4  b 0x7101af5fe4
7101af5fb8  ldr x19,[sp, #0x18]
7101af5fbc  adrp x21,0x71043be000
7101af5fc0  add x21,x21,#0xda6
7101af5fc4  b 0x7101af5fe4
7101af5fc8  ldr x19,[sp, #0x18]
7101af5fcc  adrp x21,0x71043f1000
7101af5fd0  add x21,x21,#0xa7
7101af5fd4  b 0x7101af5fe4
7101af5fd8  ldr x19,[sp, #0x18]
7101af5fdc  adrp x21,0x71042b4000
7101af5fe0  add x21,x21,#0xb7c
7101af5fe4  fmov s8,0x3f800000
7101af5fe8  mov v0.16B,v8.16B
7101af5fec  mov x0,x19
7101af5ff0  mov x1,x21
7101af5ff4  bl 0x7103778300
7101af5ff8  ldr x20,[sp, #0x8]
7101af5ffc  mov v0.16B,v8.16B
7101af6000  mov x1,x21
7101af6004  mov x0,x20
7101af6008  bl 0x7103778300
7101af600c  adrp x21,0x710523d000
7101af6010  add x21,x21,#0x988
7101af6014  stp x21,xzr,[sp]
7101af6018  cbz x20,0x7101af603c
7101af601c  ldr x0,[x20, #0x18]
7101af6020  adrp x8,0x710523d000
7101af6024  add x8,x8,#0x9a8
7101af6028  stp x8,xzr,[x20, #0x10]
7101af602c  cbz x0,0x7101af6034
7101af6030  bl 0x710392eb40
7101af6034  mov x0,x20
7101af6038  bl 0x710392eb40
7101af603c  stp x21,xzr,[sp, #0x10]
7101af6040  cbz x19,0x7101af6064
7101af6044  ldr x0,[x19, #0x18]
7101af6048  adrp x8,0x710523d000
7101af604c  add x8,x8,#0x9a8
7101af6050  stp x8,xzr,[x19, #0x10]
7101af6054  cbz x0,0x7101af605c
7101af6058  bl 0x710392eb40
7101af605c  mov x0,x19
7101af6060  bl 0x710392eb40
7101af6064  ldr d8,[sp, #0x20]
7101af6068  ldp x29,x30,[sp, #0x40]
7101af606c  ldp x20,x19,[sp, #0x30]
7101af6070  ldr x21,[sp, #0x28]
7101af6074  add sp,sp,#0x50
7101af6078  ret
7101af607c  ldr x19,[sp, #0x18]
7101af6080  fmov s0,0x3f800000
7101af6084  adrp x1,0x7104412000
7101af6088  add x1,x1,#0x4d0
7101af608c  mov x0,x19
7101af6090  bl 0x7103778300
7101af6094  ldr x20,[sp, #0x8]
7101af6098  b 0x7101af600c
