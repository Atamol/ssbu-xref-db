// addr:      7101ca3c60
// offset:    0x1ca3c60
// name:      FUN_7101ca3c60
// mangled:   
// size:      1224

7101ca3c60  sub sp,sp,#0x70
7101ca3c64  str x25,[sp, #0x20]
7101ca3c68  stp x24,x23,[sp, #0x30]
7101ca3c6c  stp x22,x21,[sp, #0x40]
7101ca3c70  stp x20,x19,[sp, #0x50]
7101ca3c74  stp x29,x30,[sp, #0x60]
7101ca3c78  add x29,sp,#0x60
7101ca3c7c  mov x19,x0
7101ca3c80  bl 0x71032d6810
7101ca3c84  ldr x19,[x19, #0x20]
7101ca3c88  str wzr,[x19, #0x268]
7101ca3c8c  adrp x8,0x7105314000
7101ca3c90  add x8,x8,#0x4d8
7101ca3c94  ldarb w8,[x8]
7101ca3c98  tbz w8,#0x0,0x7101ca40e4
7101ca3c9c  adrp x8,0x7105306000
7101ca3ca0  add x8,x8,#0x970
7101ca3ca4  ldr x9,[x8]
7101ca3ca8  ldrh w10,[x8, #0x8]
7101ca3cac  add x20,x19,#0x242
7101ca3cb0  strh w10,[x19, #0x24a]
7101ca3cb4  str x9,[x20]
7101ca3cb8  ldrh w10,[x8, #0x8]
7101ca3cbc  ldr x8,[x8]
7101ca3cc0  add x9,x19,#0x24c
7101ca3cc4  str x8,[x9]
7101ca3cc8  ldrb w8,[x19, #0x24d]
7101ca3ccc  strh w10,[x19, #0x254]
7101ca3cd0  cbnz w8,0x7101ca3cf8
7101ca3cd4  mov w8,#0x200
7101ca3cd8  movk w8,#0x201, LSL #16
7101ca3cdc  str w8,[x19, #0x24c]
7101ca3ce0  mov w8,#0x202
7101ca3ce4  mov w9,#0x1
7101ca3ce8  strb w9,[x19, #0x252]
7101ca3cec  strh w8,[x19, #0x250]
7101ca3cf0  mov w8,#0x21e
7101ca3cf4  strh w8,[x19, #0x254]
7101ca3cf8  ldr x1,[x19, #0x128]
7101ca3cfc  add x0,sp,#0x10
7101ca3d00  mov w2,#0x1
7101ca3d04  bl 0x7103771d60
7101ca3d08  ldr x0,[sp, #0x18]
7101ca3d0c  ldr x8,[x0]
7101ca3d10  cbz x8,0x7101ca3d1c
7101ca3d14  ldr x23,[x8, #0x88]
7101ca3d18  b 0x7101ca3d24
7101ca3d1c  adrp x23,0x7104867000
7101ca3d20  add x23,x23,#0xc2e
7101ca3d24  adrp x24,0x710523d000
7101ca3d28  add x24,x24,#0x9c8
7101ca3d2c  add x21,x19,#0x128
7101ca3d30  stp x24,xzr,[sp, #0x10]
7101ca3d34  cbz x0,0x7101ca3d3c
7101ca3d38  bl 0x710392eb40
7101ca3d3c  ldr x1,[x21]
7101ca3d40  add x0,sp,#0x10
7101ca3d44  mov w2,wzr
7101ca3d48  bl 0x7103771d60
7101ca3d4c  ldr x0,[sp, #0x18]
7101ca3d50  ldr x8,[x0]
7101ca3d54  cbz x8,0x7101ca3dec
7101ca3d58  ldr x22,[x8, #0x88]
7101ca3d5c  stp x24,xzr,[sp, #0x10]
7101ca3d60  cbz x0,0x7101ca3d68
7101ca3d64  bl 0x710392eb40
7101ca3d68  ldrb w8,[x20]
7101ca3d6c  cbz w8,0x7101ca3e00
7101ca3d70  add x24,x19,#0x118
7101ca3d74  add x8,sp,#0x10
7101ca3d78  mov x0,x24
7101ca3d7c  mov x1,x23
7101ca3d80  bl 0x7103776640
7101ca3d84  ldr x23,[sp, #0x18]
7101ca3d88  fmov s0,0x3f800000
7101ca3d8c  adrp x1,0x7104308000
7101ca3d90  add x1,x1,#0x65f
7101ca3d94  mov x0,x23
7101ca3d98  bl 0x7103778300
7101ca3d9c  adrp x25,0x710523d000
7101ca3da0  add x25,x25,#0x988
7101ca3da4  stp x25,xzr,[sp, #0x10]
7101ca3da8  cbz x23,0x7101ca3dcc
7101ca3dac  ldr x0,[x23, #0x18]
7101ca3db0  adrp x8,0x710523d000
7101ca3db4  add x8,x8,#0x9a8
7101ca3db8  stp x8,xzr,[x23, #0x10]
7101ca3dbc  cbz x0,0x7101ca3dc4
7101ca3dc0  bl 0x710392eb40
7101ca3dc4  mov x0,x23
7101ca3dc8  bl 0x710392eb40
7101ca3dcc  add x8,sp,#0x10
7101ca3dd0  mov x0,x24
7101ca3dd4  mov x1,x22
7101ca3dd8  bl 0x7103776640
7101ca3ddc  ldr x22,[sp, #0x18]
7101ca3de0  adrp x1,0x710438c000
7101ca3de4  add x1,x1,#0xb9e
7101ca3de8  b 0x7101ca3e78
7101ca3dec  adrp x22,0x7104867000
7101ca3df0  add x22,x22,#0xc2e
7101ca3df4  stp x24,xzr,[sp, #0x10]
7101ca3df8  cbnz x0,0x7101ca3d64
7101ca3dfc  b 0x7101ca3d68
7101ca3e00  add x24,x19,#0x118
7101ca3e04  add x8,sp,#0x10
7101ca3e08  mov x0,x24
7101ca3e0c  mov x1,x23
7101ca3e10  bl 0x7103776640
7101ca3e14  ldr x23,[sp, #0x18]
7101ca3e18  fmov s0,0x3f800000
7101ca3e1c  adrp x1,0x710438c000
7101ca3e20  add x1,x1,#0xb9e
7101ca3e24  mov x0,x23
7101ca3e28  bl 0x7103778300
7101ca3e2c  adrp x25,0x710523d000
7101ca3e30  add x25,x25,#0x988
7101ca3e34  stp x25,xzr,[sp, #0x10]
7101ca3e38  cbz x23,0x7101ca3e5c
7101ca3e3c  ldr x0,[x23, #0x18]
7101ca3e40  adrp x8,0x710523d000
7101ca3e44  add x8,x8,#0x9a8
7101ca3e48  stp x8,xzr,[x23, #0x10]
7101ca3e4c  cbz x0,0x7101ca3e54
7101ca3e50  bl 0x710392eb40
7101ca3e54  mov x0,x23
7101ca3e58  bl 0x710392eb40
7101ca3e5c  add x8,sp,#0x10
7101ca3e60  mov x0,x24
7101ca3e64  mov x1,x22
7101ca3e68  bl 0x7103776640
7101ca3e6c  ldr x22,[sp, #0x18]
7101ca3e70  adrp x1,0x7104308000
7101ca3e74  add x1,x1,#0x65f
7101ca3e78  fmov s0,0x3f800000
7101ca3e7c  mov x0,x22
7101ca3e80  bl 0x7103778300
7101ca3e84  stp x25,xzr,[sp, #0x10]
7101ca3e88  cbz x22,0x7101ca3eac
7101ca3e8c  ldr x0,[x22, #0x18]
7101ca3e90  adrp x8,0x710523d000
7101ca3e94  add x8,x8,#0x9a8
7101ca3e98  stp x8,xzr,[x22, #0x10]
7101ca3e9c  cbz x0,0x7101ca3ea4
7101ca3ea0  bl 0x710392eb40
7101ca3ea4  mov x0,x22
7101ca3ea8  bl 0x710392eb40
7101ca3eac  ldrb w1,[x19, #0x242]
7101ca3eb0  mov w2,#0x1
7101ca3eb4  mov x0,x21
7101ca3eb8  str w1,[x19, #0x258]
7101ca3ebc  bl 0x7103771a80
7101ca3ec0  ldrb w1,[x19, #0x244]
7101ca3ec4  mov x0,x19
7101ca3ec8  bl 0x7101c9e110
7101ca3ecc  ldp x21,x22,[x19, #0x180]
7101ca3ed0  cmp x21,x22
7101ca3ed4  b.eq 0x7101ca3ef4
7101ca3ed8  mov x0,x19
7101ca3edc  mov x1,x20
7101ca3ee0  mov x2,x21
7101ca3ee4  bl 0x7101c9eb90
7101ca3ee8  add x21,x21,#0x1
7101ca3eec  cmp x22,x21
7101ca3ef0  b.ne 0x7101ca3ed8
7101ca3ef4  ldrh w1,[x19, #0x24a]
7101ca3ef8  mov w2,#0x1
7101ca3efc  mov x0,x19
7101ca3f00  bl 0x7101c9f350
7101ca3f04  ldrb w8,[x19, #0x242]
7101ca3f08  cbz w8,0x7101ca3f94
7101ca3f0c  adrp x1,0x71042e7000
7101ca3f10  add x1,x1,#0x2ce
7101ca3f14  mov x0,x19
7101ca3f18  bl 0x7101ca1ee0
7101ca3f1c  add x20,x19,#0x118
7101ca3f20  adrp x1,0x7104338000
7101ca3f24  add x1,x1,#0xd31
7101ca3f28  add x8,sp,#0x10
7101ca3f2c  mov x0,x20
7101ca3f30  bl 0x7103776910
7101ca3f34  adrp x1,0x710433a000
7101ca3f38  add x1,x1,#0x27d
7101ca3f3c  add x0,sp,#0x10
7101ca3f40  bl 0x710377a120
7101ca3f44  ldr x0,[sp, #0x18]
7101ca3f48  adrp x8,0x710523d000
7101ca3f4c  add x8,x8,#0x9a8
7101ca3f50  stp x8,xzr,[sp, #0x10]
7101ca3f54  cbz x0,0x7101ca3f5c
7101ca3f58  bl 0x710392eb40
7101ca3f5c  ldrb w1,[x19, #0x24e]
7101ca3f60  mov x0,x19
7101ca3f64  bl 0x7101c9e110
7101ca3f68  mov w1,#0x1
7101ca3f6c  mov x0,x19
7101ca3f70  bl 0x7101ca10c0
7101ca3f74  ldr x0,[x19, #0x130]
7101ca3f78  bl 0x710376b960
7101ca3f7c  ldr x0,[x19, #0x130]
7101ca3f80  ldr x8,[x0]
7101ca3f84  ldr x8,[x8, #0x60]
7101ca3f88  mov w1,#0x1
7101ca3f8c  blr x8
7101ca3f90  b 0x7101ca4018
7101ca3f94  adrp x1,0x7104454000
7101ca3f98  add x1,x1,#0xb34
7101ca3f9c  mov x0,x19
7101ca3fa0  bl 0x7101ca1ee0
7101ca3fa4  add x20,x19,#0x118
7101ca3fa8  adrp x1,0x7104338000
7101ca3fac  add x1,x1,#0xd31
7101ca3fb0  add x8,sp,#0x10
7101ca3fb4  mov x0,x20
7101ca3fb8  bl 0x7103776910
7101ca3fbc  adrp x1,0x71043cf000
7101ca3fc0  add x1,x1,#0x550
7101ca3fc4  add x0,sp,#0x10
7101ca3fc8  bl 0x710377a120
7101ca3fcc  ldr x0,[sp, #0x18]
7101ca3fd0  adrp x8,0x710523d000
7101ca3fd4  add x8,x8,#0x9a8
7101ca3fd8  stp x8,xzr,[sp, #0x10]
7101ca3fdc  cbz x0,0x7101ca3fe4
7101ca3fe0  bl 0x710392eb40
7101ca3fe4  ldr x0,[x19, #0x130]
7101ca3fe8  ldr x8,[x0]
7101ca3fec  ldr x8,[x8, #0x60]
7101ca3ff0  mov w1,wzr
7101ca3ff4  blr x8
7101ca3ff8  ldr x0,[x19, #0x130]
7101ca3ffc  ldr x8,[x0]
7101ca4000  ldr x8,[x8, #0x70]
7101ca4004  mov w1,wzr
7101ca4008  blr x8
7101ca400c  mov x0,x19
7101ca4010  mov w1,wzr
7101ca4014  bl 0x7101ca10c0
7101ca4018  adrp x1,0x710424f000
7101ca401c  add x1,x1,#0xc67
7101ca4020  add x8,sp,#0x10
7101ca4024  mov x0,x20
7101ca4028  bl 0x7103776640
7101ca402c  mov x0,sp
7101ca4030  add x1,sp,#0x10
7101ca4034  bl 0x7103776390
7101ca4038  mov x0,sp
7101ca403c  bl 0x710337d360
7101ca4040  ldr x20,[sp, #0x8]
7101ca4044  adrp x21,0x710523d000
7101ca4048  add x21,x21,#0x988
7101ca404c  stp x21,xzr,[sp]
7101ca4050  cbz x20,0x7101ca4074
7101ca4054  ldr x0,[x20, #0x18]
7101ca4058  adrp x8,0x710523d000
7101ca405c  add x8,x8,#0x9a8
7101ca4060  stp x8,xzr,[x20, #0x10]
7101ca4064  cbz x0,0x7101ca406c
7101ca4068  bl 0x710392eb40
7101ca406c  mov x0,x20
7101ca4070  bl 0x710392eb40
7101ca4074  ldr w8,[x19, #0x108]
7101ca4078  sub w8,w8,#0x1
7101ca407c  cmp w8,#0x2
7101ca4080  b.cc 0x7101ca409c
7101ca4084  ldrsw x8,[x19, #0x104]
7101ca4088  cmp w8,#0x13
7101ca408c  b.cs 0x7101ca4124
7101ca4090  add x8,x19,x8, LSL #0x2
7101ca4094  mov w9,#0x1
7101ca4098  str w9,[x8, #0xb8]
7101ca409c  ldr x19,[sp, #0x18]
7101ca40a0  stp x21,xzr,[sp, #0x10]
7101ca40a4  cbz x19,0x7101ca40c8
7101ca40a8  ldr x0,[x19, #0x18]
7101ca40ac  adrp x8,0x710523d000
7101ca40b0  add x8,x8,#0x9a8
7101ca40b4  stp x8,xzr,[x19, #0x10]
7101ca40b8  cbz x0,0x7101ca40c0
7101ca40bc  bl 0x710392eb40
7101ca40c0  mov x0,x19
7101ca40c4  bl 0x710392eb40
7101ca40c8  ldp x29,x30,[sp, #0x60]
7101ca40cc  ldr x25,[sp, #0x20]
7101ca40d0  ldp x20,x19,[sp, #0x50]
7101ca40d4  ldp x22,x21,[sp, #0x40]
7101ca40d8  ldp x24,x23,[sp, #0x30]
7101ca40dc  add sp,sp,#0x70
7101ca40e0  ret
7101ca40e4  adrp x0,0x7105314000
7101ca40e8  add x0,x0,#0x4d8
7101ca40ec  bl 0x71039c06b0
7101ca40f0  cbz w0,0x7101ca3c9c
7101ca40f4  bl 0x7101764000
7101ca40f8  adrp x0,0x7101763000
7101ca40fc  add x0,x0,#0xc40
7101ca4100  adrp x1,0x71052c5000
7101ca4104  add x1,x1,#0x180
7101ca4108  adrp x2,0x7104f17000
7101ca410c  add x2,x2,#0x0
7101ca4110  bl 0x71000001c0
7101ca4114  adrp x0,0x7105314000
7101ca4118  add x0,x0,#0x4d8
7101ca411c  bl 0x71039c06c0
7101ca4120  b 0x7101ca3c9c
7101ca4124  bl 0x71039c2650
