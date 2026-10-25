// addr:      7101ef3d40
// offset:    0x1ef3d40
// name:      FUN_7101ef3d40
// mangled:   
// size:      1584

7101ef3d40  sub sp,sp,#0xa0
7101ef3d44  str d8,[sp, #0x50]
7101ef3d48  str x25,[sp, #0x58]
7101ef3d4c  stp x24,x23,[sp, #0x60]
7101ef3d50  stp x22,x21,[sp, #0x70]
7101ef3d54  stp x20,x19,[sp, #0x80]
7101ef3d58  stp x29,x30,[sp, #0x90]
7101ef3d5c  add x29,sp,#0x90
7101ef3d60  ldr w8,[x0, #0x24c]
7101ef3d64  mov x19,x0
7101ef3d68  cbz w8,0x7101ef3de0
7101ef3d6c  cmp w8,#0x1f
7101ef3d70  b.lt 0x7101ef434c
7101ef3d74  ldrsw x8,[x19, #0x244]
7101ef3d78  cmp w8,#0x13
7101ef3d7c  b.cs 0x7101ef436c
7101ef3d80  add x8,x19,x8, LSL #0x2
7101ef3d84  orr w9,wzr,#0xc
7101ef3d88  str w9,[x8, #0x1f8]
7101ef3d8c  ldr w8,[x19, #0x244]
7101ef3d90  cmp w8,#0x11
7101ef3d94  b.gt 0x7101ef3db4
7101ef3d98  add w8,w8,#0x1
7101ef3d9c  cmp w8,#0x13
7101ef3da0  str w8,[x19, #0x244]
7101ef3da4  b.cs 0x7101ef436c
7101ef3da8  add x8,x19,w8, SXTW  #0x2
7101ef3dac  mov w9,#0x1b
7101ef3db0  str w9,[x8, #0x1f8]
7101ef3db4  adrp x8,0x710532f000
7101ef3db8  ldr x8,[x8, #0x8c0]
7101ef3dbc  ldr x0,[x8, #0x8]
7101ef3dc0  fmov s0,wzr
7101ef3dc4  mov x1,#0x4292
7101ef3dc8  movk x1,#0x9fce, LSL #16
7101ef3dcc  movk x1,#0xd, LSL #32
7101ef3dd0  bl 0x71033112b0
7101ef3dd4  fcvtzs w8,s0
7101ef3dd8  str w8,[x19, #0x2b0]
7101ef3ddc  b 0x7101ef434c
7101ef3de0  adrp x21,0x7105328000
7101ef3de4  adrp x23,0x7105314000
7101ef3de8  add x23,x23,#0x4d8
7101ef3dec  ldr x22,[x21, #0xe18]
7101ef3df0  ldarb w8,[x23]
7101ef3df4  tbz w8,#0x0,0x7101ef41f4
7101ef3df8  ldr x0,[x19, #0x260]
7101ef3dfc  fmov s0,0x3f800000
7101ef3e00  adrp x1,0x710434a000
7101ef3e04  add x1,x1,#0xb9c
7101ef3e08  bl 0x7103778300
7101ef3e0c  ldr x0,[x19, #0x260]
7101ef3e10  adrp x1,0x710432a000
7101ef3e14  add x1,x1,#0x7e8
7101ef3e18  bl 0x7103778760
7101ef3e1c  ldr x8,[x19, #0x270]
7101ef3e20  ldr x1,[x19, #0x8]
7101ef3e24  ldr x0,[x8, #0x8]
7101ef3e28  bl 0x7101f05110
7101ef3e2c  ldr x8,[x19, #0x278]
7101ef3e30  ldr x1,[x19, #0x8]
7101ef3e34  ldr x0,[x8, #0x8]
7101ef3e38  bl 0x7101f05110
7101ef3e3c  ldr x0,[x22]
7101ef3e40  bl 0x71023489d0
7101ef3e44  tbz w0,#0x0,0x7101ef3edc
7101ef3e48  ldr x0,[x19, #0x260]
7101ef3e4c  fmov s0,0x3f800000
7101ef3e50  adrp x1,0x710439d000
7101ef3e54  add x1,x1,#0xc6a
7101ef3e58  add x20,x19,#0x258
7101ef3e5c  bl 0x7103778300
7101ef3e60  adrp x1,0x7104319000
7101ef3e64  add x1,x1,#0x6e3
7101ef3e68  add x8,sp,#0x40
7101ef3e6c  mov x0,x20
7101ef3e70  bl 0x7103776910
7101ef3e74  adrp x1,0x710438d000
7101ef3e78  add x1,x1,#0x325
7101ef3e7c  add x0,sp,#0x40
7101ef3e80  bl 0x710377a120
7101ef3e84  ldr x0,[sp, #0x48]
7101ef3e88  adrp x8,0x710523d000
7101ef3e8c  add x8,x8,#0x9a8
7101ef3e90  stp x8,xzr,[sp, #0x40]
7101ef3e94  cbz x0,0x7101ef3e9c
7101ef3e98  bl 0x710392eb40
7101ef3e9c  ldarb w8,[x23]
7101ef3ea0  tbz w8,#0x0,0x7101ef4234
7101ef3ea4  ldr x9,[x21, #0xe18]
7101ef3ea8  adrp x8,0x710530a000
7101ef3eac  ldrb w10,[x8, #0x976]
7101ef3eb0  ldr x8,[x19, #0x280]
7101ef3eb4  ldr x9,[x9]
7101ef3eb8  cbz w10,0x7101ef3ff4
7101ef3ebc  ldr w1,[x9, #0x34]
7101ef3ec0  ldr x0,[x8]
7101ef3ec4  bl 0x7101f06b90
7101ef3ec8  ldr x9,[x21, #0xe18]
7101ef3ecc  ldr x9,[x9]
7101ef3ed0  ldr x8,[x19, #0x288]
7101ef3ed4  ldr w1,[x9, #0x1ec]
7101ef3ed8  b 0x7101ef4010
7101ef3edc  ldr x0,[x19, #0x260]
7101ef3ee0  adrp x1,0x71042e7000
7101ef3ee4  add x1,x1,#0xaf5
7101ef3ee8  bl 0x7103778760
7101ef3eec  ldr x9,[x21, #0xe18]
7101ef3ef0  ldr x8,[x19, #0x280]
7101ef3ef4  ldr x9,[x9]
7101ef3ef8  ldr w1,[x9, #0x30]
7101ef3efc  ldr x0,[x8]
7101ef3f00  bl 0x7101f06b90
7101ef3f04  ldr x9,[x21, #0xe18]
7101ef3f08  ldr x8,[x19, #0x288]
7101ef3f0c  ldr x9,[x9]
7101ef3f10  ldr w1,[x9, #0x1e8]
7101ef3f14  ldr x0,[x8]
7101ef3f18  bl 0x7101f06b90
7101ef3f1c  ldr x8,[x21, #0xe18]
7101ef3f20  ldr x8,[x8]
7101ef3f24  ldr w8,[x8, #0x398]
7101ef3f28  add w1,w8,#0x1
7101ef3f2c  mov x0,x19
7101ef3f30  bl 0x7101ef6750
7101ef3f34  ldr x8,[x21, #0xe18]
7101ef3f38  ldr x8,[x8]
7101ef3f3c  ldr x24,[x8]
7101ef3f40  ldarb w8,[x23]
7101ef3f44  tbz w8,#0x0,0x7101ef4274
7101ef3f48  ldr x9,[x24, #0x80]
7101ef3f4c  ldr x9,[x9]
7101ef3f50  adrp x20,0x710530a000
7101ef3f54  ldrb w8,[x20, #0x976]
7101ef3f58  ldr x25,[x9]
7101ef3f5c  cbz w8,0x7101ef3f74
7101ef3f60  ldr x0,[x25, #0x10]
7101ef3f64  fmov s0,wzr
7101ef3f68  adrp x1,0x710437c000
7101ef3f6c  add x1,x1,#0xd49
7101ef3f70  bl 0x7103778630
7101ef3f74  fmov s8,wzr
7101ef3f78  ldr x0,[x25, #0x10]
7101ef3f7c  adrp x1,0x710425f000
7101ef3f80  add x1,x1,#0xcff
7101ef3f84  mov v0.16B,v8.16B
7101ef3f88  bl 0x7103778630
7101ef3f8c  ldr x0,[x25, #0x10]
7101ef3f90  mov v0.16B,v8.16B
7101ef3f94  adrp x1,0x7104270000
7101ef3f98  add x1,x1,#0x7a9
7101ef3f9c  bl 0x7103778630
7101ef3fa0  ldarb w8,[x23]
7101ef3fa4  tbz w8,#0x0,0x7101ef42b4
7101ef3fa8  ldrb w8,[x20, #0x976]
7101ef3fac  cbz w8,0x7101ef42f8
7101ef3fb0  ldr x8,[x21, #0xe18]
7101ef3fb4  ldr x8,[x8]
7101ef3fb8  ldr w20,[x8, #0x28]
7101ef3fbc  ldr w21,[x8, #0x1e0]
7101ef3fc0  ldr x5,[x19, #0x8]
7101ef3fc4  ldr x0,[x24, #0x80]
7101ef3fc8  mov w3,#0x1
7101ef3fcc  mov w1,wzr
7101ef3fd0  mov w2,w20
7101ef3fd4  mov w4,w21
7101ef3fd8  bl 0x7101ef1110
7101ef3fdc  mov w3,#0x1
7101ef3fe0  mov x0,x19
7101ef3fe4  mov w1,w20
7101ef3fe8  mov w2,w21
7101ef3fec  bl 0x7101ef68a0
7101ef3ff0  b 0x7101ef430c
7101ef3ff4  ldr w1,[x9, #0x30]
7101ef3ff8  ldr x0,[x8]
7101ef3ffc  bl 0x7101f06b90
7101ef4000  ldr x9,[x21, #0xe18]
7101ef4004  ldr x9,[x9]
7101ef4008  ldr x8,[x19, #0x288]
7101ef400c  ldr w1,[x9, #0x1e8]
7101ef4010  ldr x0,[x8]
7101ef4014  bl 0x7101f06b90
7101ef4018  ldrb w8,[x19, #0x2a4]
7101ef401c  cbz w8,0x7101ef4138
7101ef4020  ldr x8,[x21, #0xe18]
7101ef4024  ldr x8,[x8]
7101ef4028  ldr x21,[x8]
7101ef402c  ldr x8,[x21, #0x80]
7101ef4030  ldr x8,[x8]
7101ef4034  ldr x8,[x8]
7101ef4038  adrp x20,0x7104281000
7101ef403c  add x20,x20,#0x2ee
7101ef4040  mov x1,x20
7101ef4044  add x0,x8,#0x8
7101ef4048  adrp x2,0x710438b000
7101ef404c  add x2,x2,#0x71d
7101ef4050  bl 0x7103778430
7101ef4054  ldr x8,[x21, #0x80]
7101ef4058  ldr x8,[x8]
7101ef405c  ldr x8,[x8]
7101ef4060  add x0,x8,#0x8
7101ef4064  adrp x2,0x71043cd000
7101ef4068  add x2,x2,#0xb7b
7101ef406c  mov x1,x20
7101ef4070  bl 0x7103778430
7101ef4074  adrp x8,0x710532f000
7101ef4078  ldr x8,[x8, #0x8d0]
7101ef407c  ldr x0,[x8, #0x8]
7101ef4080  ldrb w8,[x0, #0x191]
7101ef4084  cbnz w8,0x7101ef4104
7101ef4088  mov x20,#0xbe6b
7101ef408c  movk x20,#0x4947, LSL #16
7101ef4090  movk x20,#0x16, LSL #32
7101ef4094  mov w2,#0x4
7101ef4098  mov x1,x20
7101ef409c  bl 0x7103313f20
7101ef40a0  tbz w0,#0x0,0x7101ef4104
7101ef40a4  mov x0,sp
7101ef40a8  mov x1,x20
7101ef40ac  bl 0x71024076d0
7101ef40b0  ldr x8,[sp, #0x10]
7101ef40b4  adrp x9,0x7104f73000
7101ef40b8  add x9,x9,#0xd50
7101ef40bc  str x9,[sp, #0x8]
7101ef40c0  cbz x8,0x7101ef4130
7101ef40c4  adrp x8,0x7106dd5000
7101ef40c8  ldrb w8,[x8, #0x3a8]
7101ef40cc  cmp w8,#0x1
7101ef40d0  b.ne 0x7101ef4130
7101ef40d4  adrp x9,0x7106dd5000
7101ef40d8  ldr w8,[sp, #0x18]
7101ef40dc  ldr w9,[x9, #0x3ac]
7101ef40e0  cmp w8,w9
7101ef40e4  b.ne 0x7101ef4130
7101ef40e8  ldr x8,[sp, #0x10]
7101ef40ec  ldr wzr,[x8, #0x38]!
7101ef40f0  ldaxr w9,[x8]
7101ef40f4  sub w9,w9,#0x1
7101ef40f8  stlxr w10,w9,[x8]
7101ef40fc  cbnz w10,0x7101ef40f0
7101ef4100  b 0x7101ef4130
7101ef4104  mov x8,#0x650000000000
7101ef4108  movk x8,#0x87, LSL #48
7101ef410c  strb wzr,[sp, #0x20]
7101ef4110  stp xzr,x8,[sp, #0x10]
7101ef4114  mov x8,#-0x1
7101ef4118  stp x8,xzr,[sp, #0x28]
7101ef411c  adrp x8,0x7104f73000
7101ef4120  add x8,x8,#0xd50
7101ef4124  str wzr,[sp]
7101ef4128  str xzr,[sp, #0x38]
7101ef412c  str x8,[sp, #0x8]
7101ef4130  str xzr,[sp, #0x10]
7101ef4134  strb wzr,[sp, #0x20]
7101ef4138  ldr x0,[x19, #0x260]
7101ef413c  fmov s0,0x3f800000
7101ef4140  adrp x1,0x710425f000
7101ef4144  add x1,x1,#0xd28
7101ef4148  bl 0x7103778300
7101ef414c  ldr x0,[x19, #0x2c8]
7101ef4150  cbz x0,0x7101ef430c
7101ef4154  ldr x8,[x0]
7101ef4158  ldr x8,[x8, #0x20]
7101ef415c  blr x8
7101ef4160  tbnz w0,#0x0,0x7101ef430c
7101ef4164  adrp x8,0x710593b000
7101ef4168  ldr x8,[x8, #0x438]
7101ef416c  ldr x8,[x8]
7101ef4170  ldrb w8,[x8, #0x1]
7101ef4174  cbz w8,0x7101ef430c
7101ef4178  ldr w8,[x19, #0x2d4]
7101ef417c  mov w9,#0x6500
7101ef4180  movk w9,#0x87, LSL #16
7101ef4184  cmp w8,w9
7101ef4188  b.ne 0x7101ef430c
7101ef418c  adrp x8,0x7106dd5000
7101ef4190  ldrb w8,[x8, #0x3a8]
7101ef4194  cmp w8,#0x1
7101ef4198  b.ne 0x7101ef430c
7101ef419c  adrp x9,0x7106dd5000
7101ef41a0  ldr w8,[x19, #0x2d0]
7101ef41a4  ldr w9,[x9, #0x3ac]
7101ef41a8  cmp w8,w9
7101ef41ac  b.ne 0x7101ef430c
7101ef41b0  ldrb w8,[x19, #0x2d8]
7101ef41b4  cbnz w8,0x7101ef430c
7101ef41b8  ldr x0,[x19, #0x2c8]
7101ef41bc  cbz x0,0x7101ef430c
7101ef41c0  ldr x8,[x0]
7101ef41c4  ldr x8,[x8, #0x20]
7101ef41c8  blr x8
7101ef41cc  tbnz w0,#0x0,0x7101ef430c
7101ef41d0  ldr x0,[x19, #0x2c8]
7101ef41d4  ldr x8,[x0]
7101ef41d8  ldr x8,[x8, #0x68]
7101ef41dc  blr x8
7101ef41e0  tbnz w0,#0x0,0x7101ef430c
7101ef41e4  add x0,x19,#0x2b8
7101ef41e8  orr w1,wzr,#0x1e
7101ef41ec  bl 0x710373b540
7101ef41f0  b 0x7101ef430c
7101ef41f4  adrp x0,0x7105314000
7101ef41f8  add x0,x0,#0x4d8
7101ef41fc  bl 0x71039c06b0
7101ef4200  cbz w0,0x7101ef3df8
7101ef4204  bl 0x7101764000
7101ef4208  adrp x0,0x7101763000
7101ef420c  add x0,x0,#0xc40
7101ef4210  adrp x1,0x71052c5000
7101ef4214  add x1,x1,#0x180
7101ef4218  adrp x2,0x7104f17000
7101ef421c  add x2,x2,#0x0
7101ef4220  bl 0x71000001c0
7101ef4224  adrp x0,0x7105314000
7101ef4228  add x0,x0,#0x4d8
7101ef422c  bl 0x71039c06c0
7101ef4230  b 0x7101ef3df8
7101ef4234  adrp x0,0x7105314000
7101ef4238  add x0,x0,#0x4d8
7101ef423c  bl 0x71039c06b0
7101ef4240  cbz w0,0x7101ef3ea4
7101ef4244  bl 0x7101764000
7101ef4248  adrp x0,0x7101763000
7101ef424c  add x0,x0,#0xc40
7101ef4250  adrp x1,0x71052c5000
7101ef4254  add x1,x1,#0x180
7101ef4258  adrp x2,0x7104f17000
7101ef425c  add x2,x2,#0x0
7101ef4260  bl 0x71000001c0
7101ef4264  adrp x0,0x7105314000
7101ef4268  add x0,x0,#0x4d8
7101ef426c  bl 0x71039c06c0
7101ef4270  b 0x7101ef3ea4
7101ef4274  adrp x0,0x7105314000
7101ef4278  add x0,x0,#0x4d8
7101ef427c  bl 0x71039c06b0
7101ef4280  cbz w0,0x7101ef3f48
7101ef4284  bl 0x7101764000
7101ef4288  adrp x0,0x7101763000
7101ef428c  add x0,x0,#0xc40
7101ef4290  adrp x1,0x71052c5000
7101ef4294  add x1,x1,#0x180
7101ef4298  adrp x2,0x7104f17000
7101ef429c  add x2,x2,#0x0
7101ef42a0  bl 0x71000001c0
7101ef42a4  adrp x0,0x7105314000
7101ef42a8  add x0,x0,#0x4d8
7101ef42ac  bl 0x71039c06c0
7101ef42b0  b 0x7101ef3f48
7101ef42b4  adrp x0,0x7105314000
7101ef42b8  add x0,x0,#0x4d8
7101ef42bc  bl 0x71039c06b0
7101ef42c0  cbz w0,0x7101ef3fa8
7101ef42c4  bl 0x7101764000
7101ef42c8  adrp x0,0x7101763000
7101ef42cc  add x0,x0,#0xc40
7101ef42d0  adrp x1,0x71052c5000
7101ef42d4  add x1,x1,#0x180
7101ef42d8  adrp x2,0x7104f17000
7101ef42dc  add x2,x2,#0x0
7101ef42e0  bl 0x71000001c0
7101ef42e4  adrp x0,0x7105314000
7101ef42e8  add x0,x0,#0x4d8
7101ef42ec  bl 0x71039c06c0
7101ef42f0  ldrb w8,[x20, #0x976]
7101ef42f4  cbnz w8,0x7101ef3fb0
7101ef42f8  adrp x8,0x710530d000
7101ef42fc  ldr x2,[x19, #0x8]
7101ef4300  ldr x0,[x24, #0x80]
7101ef4304  ldr w1,[x8, #0x560]
7101ef4308  bl 0x7101ef0c30
7101ef430c  ldr x0,[x22]
7101ef4310  bl 0x71023489d0
7101ef4314  tbz w0,#0x0,0x7101ef434c
7101ef4318  ldr x8,[x22]
7101ef431c  ldrb w9,[x8, #0x3a5]
7101ef4320  ldrsw x8,[x19, #0x244]
7101ef4324  cmp w8,#0x13
7101ef4328  cbz w9,0x7101ef433c
7101ef432c  b.cs 0x7101ef436c
7101ef4330  add x8,x19,x8, LSL #0x2
7101ef4334  mov w9,#0x13
7101ef4338  b 0x7101ef4348
7101ef433c  b.cs 0x7101ef436c
7101ef4340  add x8,x19,x8, LSL #0x2
7101ef4344  mov w9,#0x11
7101ef4348  str w9,[x8, #0x1f8]
7101ef434c  ldr d8,[sp, #0x50]
7101ef4350  ldp x29,x30,[sp, #0x90]
7101ef4354  ldp x20,x19,[sp, #0x80]
7101ef4358  ldr x25,[sp, #0x58]
7101ef435c  ldp x22,x21,[sp, #0x70]
7101ef4360  ldp x24,x23,[sp, #0x60]
7101ef4364  add sp,sp,#0xa0
7101ef4368  ret
7101ef436c  bl 0x71039c2650
