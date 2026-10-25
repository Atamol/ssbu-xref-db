// addr:      7101ba3e40
// offset:    0x1ba3e40
// name:      FUN_7101ba3e40
// mangled:   
// size:      2932

7101ba3e40  sub sp,sp,#0x90
7101ba3e44  stp x28,x27,[sp, #0x30]
7101ba3e48  stp x26,x25,[sp, #0x40]
7101ba3e4c  stp x24,x23,[sp, #0x50]
7101ba3e50  stp x22,x21,[sp, #0x60]
7101ba3e54  stp x20,x19,[sp, #0x70]
7101ba3e58  stp x29,x30,[sp, #0x80]
7101ba3e5c  add x29,sp,#0x80
7101ba3e60  ldp x8,x9,[x1]
7101ba3e64  sub x8,x9,x8
7101ba3e68  mov w9,#0xc8a7
7101ba3e6c  movk w9,#0xdd67, LSL #16
7101ba3e70  lsr x8,x8,#0x3
7101ba3e74  smull x9,w8,w9
7101ba3e78  lsr x9,x9,#0x20
7101ba3e7c  add w9,w9,w8
7101ba3e80  asr w10,w9,#0x5
7101ba3e84  add w9,w10,w9, LSR #0x1f
7101ba3e88  fmov d1,0x3ff0000000000000
7101ba3e8c  ldp x10,x11,[x0]
7101ba3e90  ldr x11,[x11]
7101ba3e94  scvtf d0,w9
7101ba3e98  orr w9,wzr,#0x3
7101ba3e9c  frintm d0,d0
7101ba3ea0  fadd d0,d0,d1
7101ba3ea4  ldr x22,[x10, #0x78]
7101ba3ea8  str w8,[x0, #0x1540]
7101ba3eac  fcvtzs w8,d0
7101ba3eb0  cmp w8,#0x3
7101ba3eb4  csel w3,w8,w9,lt
7101ba3eb8  mov w8,#0x1528
7101ba3ebc  mov x19,x1
7101ba3ec0  mov x20,x0
7101ba3ec4  adrp x1,0x710435b000
7101ba3ec8  add x1,x1,#0x4d9
7101ba3ecc  mov w2,#0x1
7101ba3ed0  add x21,x11,#0x8
7101ba3ed4  str w3,[x0, #0x153c]
7101ba3ed8  add x0,x0,x8
7101ba3edc  bl 0x710377a280
7101ba3ee0  ldrsw x8,[x20, #0x1540]
7101ba3ee4  mov w9,#0x8e39
7101ba3ee8  movk w9,#0x38e3, LSL #16
7101ba3eec  mul x9,x8,x9
7101ba3ef0  lsr x10,x9,#0x3f
7101ba3ef4  asr x9,x9,#0x23
7101ba3ef8  add w9,w9,w10
7101ba3efc  mov w10,#0x24
7101ba3f00  msub w8,w9,w10,w8
7101ba3f04  ldr w9,[x20, #0x153c]
7101ba3f08  str w8,[x20, #0x1544]
7101ba3f0c  cmp w9,#0x1
7101ba3f10  b.ne 0x7101ba3f40
7101ba3f14  sub w9,w8,#0xc
7101ba3f18  cmp w9,#0xb
7101ba3f1c  b.hi 0x7101ba3f28
7101ba3f20  add x0,x20,#0x688
7101ba3f24  b 0x7101ba3f38
7101ba3f28  sub w8,w8,#0x18
7101ba3f2c  cmp w8,#0xb
7101ba3f30  b.hi 0x7101ba3f40
7101ba3f34  add x0,x20,#0x698
7101ba3f38  fmov s0,0x3f800000
7101ba3f3c  bl 0x710377aee0
7101ba3f40  mov x23,xzr
7101ba3f44  adrp x25,0x71042a3000
7101ba3f48  add x25,x25,#0x2e8
7101ba3f4c  adrp x26,0x7104318000
7101ba3f50  add x26,x26,#0xcbf
7101ba3f54  adrp x24,0x710523d000
7101ba3f58  add x24,x24,#0x9a8
7101ba3f5c  adrp x27,0x7104401000
7101ba3f60  add x27,x27,#0xd32
7101ba3f64  ldp x8,x9,[x19]
7101ba3f68  sub x8,x9,x8
7101ba3f6c  asr x8,x8,#0x3
7101ba3f70  cmp x8,x23
7101ba3f74  b.ls 0x7101ba4160
7101ba3f78  mov x8,sp
7101ba3f7c  mov x0,x21
7101ba3f80  adrp x1,0x71042e7000
7101ba3f84  add x1,x1,#0x8ad
7101ba3f88  mov w2,w23
7101ba3f8c  bl 0x7103776640
7101ba3f90  ldp x8,x9,[x19]
7101ba3f94  sub x9,x9,x8
7101ba3f98  asr x9,x9,#0x3
7101ba3f9c  cmp x9,x23
7101ba3fa0  b.ls 0x7101ba49ac
7101ba3fa4  ldr x28,[x8, x23, LSL #0x3]
7101ba3fa8  add x8,sp,#0x20
7101ba3fac  mov x0,sp
7101ba3fb0  mov x1,x25
7101ba3fb4  bl 0x7103776910
7101ba3fb8  add x1,sp,#0x20
7101ba3fbc  mov x0,x28
7101ba3fc0  mov w2,wzr
7101ba3fc4  bl 0x7101ba34c0
7101ba3fc8  add x8,sp,#0x10
7101ba3fcc  mov x0,sp
7101ba3fd0  mov x1,x26
7101ba3fd4  bl 0x7103776910
7101ba3fd8  add x1,sp,#0x10
7101ba3fdc  mov x0,x28
7101ba3fe0  mov w2,wzr
7101ba3fe4  bl 0x7101ba34c0
7101ba3fe8  ldr x0,[sp, #0x18]
7101ba3fec  stp x24,xzr,[sp, #0x10]
7101ba3ff0  cbz x0,0x7101ba3ff8
7101ba3ff4  bl 0x710392eb40
7101ba3ff8  ldr x0,[sp, #0x28]
7101ba3ffc  stp x24,xzr,[sp, #0x20]
7101ba4000  cbz x0,0x7101ba4008
7101ba4004  bl 0x710392eb40
7101ba4008  add x8,sp,#0x20
7101ba400c  mov x0,sp
7101ba4010  mov x1,x27
7101ba4014  bl 0x7103776910
7101ba4018  mov w3,#0x2
7101ba401c  mov x0,x22
7101ba4020  mov x1,x28
7101ba4024  mov w2,wzr
7101ba4028  bl 0x710323f330
7101ba402c  ldr x28,[sp, #0x28]
7101ba4030  mov x1,x0
7101ba4034  mov x0,x28
7101ba4038  bl 0x7103778b80
7101ba403c  stp x24,xzr,[sp, #0x20]
7101ba4040  cbz x28,0x7101ba404c
7101ba4044  mov x0,x28
7101ba4048  bl 0x710392eb40
7101ba404c  ldr x9,[x20, #0x1500]
7101ba4050  ldr x8,[x9, #0x1b8]
7101ba4054  cbz x8,0x7101ba4138
7101ba4058  add x9,x9,#0x1b8
7101ba405c  mov x10,x9
7101ba4060  mov x11,x8
7101ba4064  ldr w12,[x11, #0x20]
7101ba4068  cmp w12,w23
7101ba406c  cset w12,lt
7101ba4070  csel x10,x10,x11,lt
7101ba4074  ldr x11,[x11, w12, UXTW #0x3]
7101ba4078  cbnz x11,0x7101ba4064
7101ba407c  cmp x10,x9
7101ba4080  b.eq 0x7101ba40d0
7101ba4084  ldr w11,[x10, #0x20]
7101ba4088  cmp w11,w23
7101ba408c  b.gt 0x7101ba40d0
7101ba4090  ldr x28,[x10, #0x28]
7101ba4094  cbz x28,0x7101ba40d0
7101ba4098  ldr x8,[x28]
7101ba409c  ldr x8,[x8, #0x1f8]
7101ba40a0  mov w1,#0x1
7101ba40a4  mov x0,x28
7101ba40a8  blr x8
7101ba40ac  ldr x8,[x28]
7101ba40b0  ldr x8,[x8, #0x388]
7101ba40b4  mov x0,x28
7101ba40b8  mov w1,wzr
7101ba40bc  mov w2,wzr
7101ba40c0  blr x8
7101ba40c4  ldr x8,[x20, #0x1500]
7101ba40c8  add x9,x8,#0x1b8
7101ba40cc  ldr x8,[x8, #0x1b8]
7101ba40d0  cbz x8,0x7101ba4138
7101ba40d4  mov x10,x9
7101ba40d8  ldr w11,[x8, #0x20]
7101ba40dc  cmp w11,w23
7101ba40e0  cset w11,lt
7101ba40e4  csel x10,x10,x8,lt
7101ba40e8  ldr x8,[x8, w11, UXTW #0x3]
7101ba40ec  cbnz x8,0x7101ba40d8
7101ba40f0  cmp x10,x9
7101ba40f4  b.eq 0x7101ba4138
7101ba40f8  ldr w8,[x10, #0x20]
7101ba40fc  cmp w8,w23
7101ba4100  b.gt 0x7101ba4138
7101ba4104  ldr x28,[x10, #0x28]
7101ba4108  cbz x28,0x7101ba4138
7101ba410c  ldr x8,[x28]
7101ba4110  ldr x8,[x8, #0x208]
7101ba4114  mov w1,#0x1
7101ba4118  mov x0,x28
7101ba411c  blr x8
7101ba4120  ldr x8,[x28]
7101ba4124  ldr x8,[x8, #0x388]
7101ba4128  mov x0,x28
7101ba412c  mov w1,wzr
7101ba4130  mov w2,wzr
7101ba4134  blr x8
7101ba4138  ldr x28,[sp, #0x8]
7101ba413c  adrp x8,0x710523d000
7101ba4140  add x8,x8,#0x988
7101ba4144  stp x8,xzr,[sp]
7101ba4148  cbz x28,0x7101ba42a8
7101ba414c  ldr x0,[x28, #0x18]
7101ba4150  stp x24,xzr,[x28, #0x10]
7101ba4154  cbz x0,0x7101ba42a0
7101ba4158  bl 0x710392eb40
7101ba415c  b 0x7101ba42a0
7101ba4160  ldr x1,[x20, #0x1500]
7101ba4164  ldr x9,[x1, #0x1b8]
7101ba4168  cbz x9,0x7101ba4250
7101ba416c  add x8,x1,#0x1b8
7101ba4170  mov x10,x8
7101ba4174  mov x11,x9
7101ba4178  ldr w12,[x11, #0x20]
7101ba417c  cmp w12,w23
7101ba4180  cset w12,lt
7101ba4184  csel x10,x10,x11,lt
7101ba4188  ldr x11,[x11, w12, UXTW #0x3]
7101ba418c  cbnz x11,0x7101ba4178
7101ba4190  cmp x10,x8
7101ba4194  b.eq 0x7101ba41e4
7101ba4198  ldr w11,[x10, #0x20]
7101ba419c  cmp w11,w23
7101ba41a0  b.gt 0x7101ba41e4
7101ba41a4  ldr x28,[x10, #0x28]
7101ba41a8  cbz x28,0x7101ba41e4
7101ba41ac  ldr x8,[x28]
7101ba41b0  ldr x8,[x8, #0x1f8]
7101ba41b4  mov x0,x28
7101ba41b8  mov w1,wzr
7101ba41bc  blr x8
7101ba41c0  ldr x8,[x28]
7101ba41c4  ldr x8,[x8, #0x388]
7101ba41c8  mov w1,#0x1
7101ba41cc  mov x0,x28
7101ba41d0  mov w2,wzr
7101ba41d4  blr x8
7101ba41d8  ldr x1,[x20, #0x1500]
7101ba41dc  ldr x9,[x1, #0x1b8]
7101ba41e0  add x8,x1,#0x1b8
7101ba41e4  cbz x9,0x7101ba4250
7101ba41e8  mov x10,x8
7101ba41ec  ldr w11,[x9, #0x20]
7101ba41f0  cmp w11,w23
7101ba41f4  cset w11,lt
7101ba41f8  csel x10,x10,x9,lt
7101ba41fc  ldr x9,[x9, w11, UXTW #0x3]
7101ba4200  cbnz x9,0x7101ba41ec
7101ba4204  cmp x10,x8
7101ba4208  b.eq 0x7101ba4250
7101ba420c  ldr w8,[x10, #0x20]
7101ba4210  cmp w8,w23
7101ba4214  b.gt 0x7101ba4250
7101ba4218  ldr x28,[x10, #0x28]
7101ba421c  cbz x28,0x7101ba4250
7101ba4220  ldr x8,[x28]
7101ba4224  ldr x8,[x8, #0x208]
7101ba4228  mov x0,x28
7101ba422c  mov w1,wzr
7101ba4230  blr x8
7101ba4234  ldr x8,[x28]
7101ba4238  ldr x8,[x8, #0x388]
7101ba423c  mov w1,#0x1
7101ba4240  mov x0,x28
7101ba4244  mov w2,wzr
7101ba4248  blr x8
7101ba424c  ldr x1,[x20, #0x1500]
7101ba4250  add x0,sp,#0x10
7101ba4254  mov w2,w23
7101ba4258  bl 0x7103771d60
7101ba425c  ldr x28,[sp, #0x18]
7101ba4260  ldr x1,[x28]
7101ba4264  add x0,sp,#0x20
7101ba4268  bl 0x710377ad90
7101ba426c  ldr x0,[sp, #0x28]
7101ba4270  ldr x8,[x0]
7101ba4274  cbz x8,0x7101ba4284
7101ba4278  ldrb w9,[x8, #0x58]
7101ba427c  and w9,w9,#0xfe
7101ba4280  strb w9,[x8, #0x58]
7101ba4284  stp x24,xzr,[sp, #0x20]
7101ba4288  cbz x0,0x7101ba4290
7101ba428c  bl 0x710392eb40
7101ba4290  adrp x8,0x710523d000
7101ba4294  add x8,x8,#0x9c8
7101ba4298  stp x8,xzr,[sp, #0x10]
7101ba429c  cbz x28,0x7101ba42a8
7101ba42a0  mov x0,x28
7101ba42a4  bl 0x710392eb40
7101ba42a8  add x23,x23,#0x1
7101ba42ac  cmp x23,#0x24
7101ba42b0  b.cc 0x7101ba3f64
7101ba42b4  mov x23,xzr
7101ba42b8  adrp x25,0x7104318000
7101ba42bc  add x25,x25,#0xcbf
7101ba42c0  adrp x26,0x7104401000
7101ba42c4  add x26,x26,#0xd32
7101ba42c8  ldp x8,x9,[x19]
7101ba42cc  sub x8,x9,x8
7101ba42d0  add x27,x23,#0x24
7101ba42d4  asr x8,x8,#0x3
7101ba42d8  cmp x8,x27
7101ba42dc  b.ls 0x7101ba44cc
7101ba42e0  mov x8,sp
7101ba42e4  mov x0,x21
7101ba42e8  adrp x1,0x71042e7000
7101ba42ec  add x1,x1,#0x8ad
7101ba42f0  mov w2,w27
7101ba42f4  bl 0x7103776640
7101ba42f8  ldp x8,x9,[x19]
7101ba42fc  sub x9,x9,x8
7101ba4300  asr x9,x9,#0x3
7101ba4304  cmp x9,x27
7101ba4308  b.ls 0x7101ba49ac
7101ba430c  ldr x28,[x8, x27, LSL #0x3]
7101ba4310  add x8,sp,#0x20
7101ba4314  mov x0,sp
7101ba4318  adrp x1,0x71042a3000
7101ba431c  add x1,x1,#0x2e8
7101ba4320  bl 0x7103776910
7101ba4324  add x1,sp,#0x20
7101ba4328  mov x0,x28
7101ba432c  mov w2,wzr
7101ba4330  bl 0x7101ba34c0
7101ba4334  add x8,sp,#0x10
7101ba4338  mov x0,sp
7101ba433c  mov x1,x25
7101ba4340  bl 0x7103776910
7101ba4344  add x1,sp,#0x10
7101ba4348  mov x0,x28
7101ba434c  mov w2,wzr
7101ba4350  bl 0x7101ba34c0
7101ba4354  ldr x0,[sp, #0x18]
7101ba4358  stp x24,xzr,[sp, #0x10]
7101ba435c  cbz x0,0x7101ba4364
7101ba4360  bl 0x710392eb40
7101ba4364  ldr x0,[sp, #0x28]
7101ba4368  stp x24,xzr,[sp, #0x20]
7101ba436c  cbz x0,0x7101ba4374
7101ba4370  bl 0x710392eb40
7101ba4374  add x8,sp,#0x20
7101ba4378  mov x0,sp
7101ba437c  mov x1,x26
7101ba4380  bl 0x7103776910
7101ba4384  mov w3,#0x2
7101ba4388  mov x0,x22
7101ba438c  mov x1,x28
7101ba4390  mov w2,wzr
7101ba4394  bl 0x710323f330
7101ba4398  ldr x28,[sp, #0x28]
7101ba439c  mov x1,x0
7101ba43a0  mov x0,x28
7101ba43a4  bl 0x7103778b80
7101ba43a8  stp x24,xzr,[sp, #0x20]
7101ba43ac  cbz x28,0x7101ba43b8
7101ba43b0  mov x0,x28
7101ba43b4  bl 0x710392eb40
7101ba43b8  ldr x9,[x20, #0x1508]
7101ba43bc  ldr x8,[x9, #0x1b8]
7101ba43c0  cbz x8,0x7101ba44a4
7101ba43c4  add x9,x9,#0x1b8
7101ba43c8  mov x10,x9
7101ba43cc  mov x11,x8
7101ba43d0  ldr w12,[x11, #0x20]
7101ba43d4  cmp w12,w27
7101ba43d8  cset w12,lt
7101ba43dc  csel x10,x10,x11,lt
7101ba43e0  ldr x11,[x11, w12, UXTW #0x3]
7101ba43e4  cbnz x11,0x7101ba43d0
7101ba43e8  cmp x10,x9
7101ba43ec  b.eq 0x7101ba443c
7101ba43f0  ldr w11,[x10, #0x20]
7101ba43f4  cmp w11,w27
7101ba43f8  b.gt 0x7101ba443c
7101ba43fc  ldr x28,[x10, #0x28]
7101ba4400  cbz x28,0x7101ba443c
7101ba4404  ldr x8,[x28]
7101ba4408  ldr x8,[x8, #0x1f8]
7101ba440c  mov w1,#0x1
7101ba4410  mov x0,x28
7101ba4414  blr x8
7101ba4418  ldr x8,[x28]
7101ba441c  ldr x8,[x8, #0x388]
7101ba4420  mov x0,x28
7101ba4424  mov w1,wzr
7101ba4428  mov w2,wzr
7101ba442c  blr x8
7101ba4430  ldr x8,[x20, #0x1508]
7101ba4434  add x9,x8,#0x1b8
7101ba4438  ldr x8,[x8, #0x1b8]
7101ba443c  cbz x8,0x7101ba44a4
7101ba4440  mov x10,x9
7101ba4444  ldr w11,[x8, #0x20]
7101ba4448  cmp w11,w27
7101ba444c  cset w11,lt
7101ba4450  csel x10,x10,x8,lt
7101ba4454  ldr x8,[x8, w11, UXTW #0x3]
7101ba4458  cbnz x8,0x7101ba4444
7101ba445c  cmp x10,x9
7101ba4460  b.eq 0x7101ba44a4
7101ba4464  ldr w8,[x10, #0x20]
7101ba4468  cmp w8,w27
7101ba446c  b.gt 0x7101ba44a4
7101ba4470  ldr x27,[x10, #0x28]
7101ba4474  cbz x27,0x7101ba44a4
7101ba4478  ldr x8,[x27]
7101ba447c  ldr x8,[x8, #0x208]
7101ba4480  mov w1,#0x1
7101ba4484  mov x0,x27
7101ba4488  blr x8
7101ba448c  ldr x8,[x27]
7101ba4490  ldr x8,[x8, #0x388]
7101ba4494  mov x0,x27
7101ba4498  mov w1,wzr
7101ba449c  mov w2,wzr
7101ba44a0  blr x8
7101ba44a4  ldr x27,[sp, #0x8]
7101ba44a8  adrp x8,0x710523d000
7101ba44ac  add x8,x8,#0x988
7101ba44b0  stp x8,xzr,[sp]
7101ba44b4  cbz x27,0x7101ba4614
7101ba44b8  ldr x0,[x27, #0x18]
7101ba44bc  stp x24,xzr,[x27, #0x10]
7101ba44c0  cbz x0,0x7101ba460c
7101ba44c4  bl 0x710392eb40
7101ba44c8  b 0x7101ba460c
7101ba44cc  ldr x1,[x20, #0x1508]
7101ba44d0  ldr x9,[x1, #0x1b8]
7101ba44d4  cbz x9,0x7101ba45bc
7101ba44d8  add x8,x1,#0x1b8
7101ba44dc  mov x10,x8
7101ba44e0  mov x11,x9
7101ba44e4  ldr w12,[x11, #0x20]
7101ba44e8  cmp w12,w27
7101ba44ec  cset w12,lt
7101ba44f0  csel x10,x10,x11,lt
7101ba44f4  ldr x11,[x11, w12, UXTW #0x3]
7101ba44f8  cbnz x11,0x7101ba44e4
7101ba44fc  cmp x10,x8
7101ba4500  b.eq 0x7101ba4550
7101ba4504  ldr w11,[x10, #0x20]
7101ba4508  cmp w11,w27
7101ba450c  b.gt 0x7101ba4550
7101ba4510  ldr x28,[x10, #0x28]
7101ba4514  cbz x28,0x7101ba4550
7101ba4518  ldr x8,[x28]
7101ba451c  ldr x8,[x8, #0x1f8]
7101ba4520  mov x0,x28
7101ba4524  mov w1,wzr
7101ba4528  blr x8
7101ba452c  ldr x8,[x28]
7101ba4530  ldr x8,[x8, #0x388]
7101ba4534  mov w1,#0x1
7101ba4538  mov x0,x28
7101ba453c  mov w2,wzr
7101ba4540  blr x8
7101ba4544  ldr x1,[x20, #0x1508]
7101ba4548  ldr x9,[x1, #0x1b8]
7101ba454c  add x8,x1,#0x1b8
7101ba4550  cbz x9,0x7101ba45bc
7101ba4554  mov x10,x8
7101ba4558  ldr w11,[x9, #0x20]
7101ba455c  cmp w11,w27
7101ba4560  cset w11,lt
7101ba4564  csel x10,x10,x9,lt
7101ba4568  ldr x9,[x9, w11, UXTW #0x3]
7101ba456c  cbnz x9,0x7101ba4558
7101ba4570  cmp x10,x8
7101ba4574  b.eq 0x7101ba45bc
7101ba4578  ldr w8,[x10, #0x20]
7101ba457c  cmp w8,w27
7101ba4580  b.gt 0x7101ba45bc
7101ba4584  ldr x28,[x10, #0x28]
7101ba4588  cbz x28,0x7101ba45bc
7101ba458c  ldr x8,[x28]
7101ba4590  ldr x8,[x8, #0x208]
7101ba4594  mov x0,x28
7101ba4598  mov w1,wzr
7101ba459c  blr x8
7101ba45a0  ldr x8,[x28]
7101ba45a4  ldr x8,[x8, #0x388]
7101ba45a8  mov w1,#0x1
7101ba45ac  mov x0,x28
7101ba45b0  mov w2,wzr
7101ba45b4  blr x8
7101ba45b8  ldr x1,[x20, #0x1508]
7101ba45bc  add x0,sp,#0x10
7101ba45c0  mov w2,w27
7101ba45c4  bl 0x7103771d60
7101ba45c8  ldr x27,[sp, #0x18]
7101ba45cc  ldr x1,[x27]
7101ba45d0  add x0,sp,#0x20
7101ba45d4  bl 0x710377ad90
7101ba45d8  ldr x0,[sp, #0x28]
7101ba45dc  ldr x8,[x0]
7101ba45e0  cbz x8,0x7101ba45f0
7101ba45e4  ldrb w9,[x8, #0x58]
7101ba45e8  and w9,w9,#0xfe
7101ba45ec  strb w9,[x8, #0x58]
7101ba45f0  stp x24,xzr,[sp, #0x20]
7101ba45f4  cbz x0,0x7101ba45fc
7101ba45f8  bl 0x710392eb40
7101ba45fc  adrp x8,0x710523d000
7101ba4600  add x8,x8,#0x9c8
7101ba4604  stp x8,xzr,[sp, #0x10]
7101ba4608  cbz x27,0x7101ba4614
7101ba460c  mov x0,x27
7101ba4610  bl 0x710392eb40
7101ba4614  add x23,x23,#0x1
7101ba4618  cmp x23,#0x24
7101ba461c  b.cc 0x7101ba42c8
7101ba4620  mov x23,xzr
7101ba4624  adrp x25,0x7104318000
7101ba4628  add x25,x25,#0xcbf
7101ba462c  adrp x26,0x7104401000
7101ba4630  add x26,x26,#0xd32
7101ba4634  ldp x8,x9,[x19]
7101ba4638  sub x8,x9,x8
7101ba463c  add x27,x23,#0x48
7101ba4640  asr x8,x8,#0x3
7101ba4644  cmp x8,x27
7101ba4648  b.ls 0x7101ba4838
7101ba464c  mov x8,sp
7101ba4650  mov x0,x21
7101ba4654  adrp x1,0x71042e7000
7101ba4658  add x1,x1,#0x8ad
7101ba465c  mov w2,w27
7101ba4660  bl 0x7103776640
7101ba4664  ldp x8,x9,[x19]
7101ba4668  sub x9,x9,x8
7101ba466c  asr x9,x9,#0x3
7101ba4670  cmp x9,x27
7101ba4674  b.ls 0x7101ba49ac
7101ba4678  ldr x28,[x8, x27, LSL #0x3]
7101ba467c  add x8,sp,#0x20
7101ba4680  mov x0,sp
7101ba4684  adrp x1,0x71042a3000
7101ba4688  add x1,x1,#0x2e8
7101ba468c  bl 0x7103776910
7101ba4690  add x1,sp,#0x20
7101ba4694  mov x0,x28
7101ba4698  mov w2,wzr
7101ba469c  bl 0x7101ba34c0
7101ba46a0  add x8,sp,#0x10
7101ba46a4  mov x0,sp
7101ba46a8  mov x1,x25
7101ba46ac  bl 0x7103776910
7101ba46b0  add x1,sp,#0x10
7101ba46b4  mov x0,x28
7101ba46b8  mov w2,wzr
7101ba46bc  bl 0x7101ba34c0
7101ba46c0  ldr x0,[sp, #0x18]
7101ba46c4  stp x24,xzr,[sp, #0x10]
7101ba46c8  cbz x0,0x7101ba46d0
7101ba46cc  bl 0x710392eb40
7101ba46d0  ldr x0,[sp, #0x28]
7101ba46d4  stp x24,xzr,[sp, #0x20]
7101ba46d8  cbz x0,0x7101ba46e0
7101ba46dc  bl 0x710392eb40
7101ba46e0  add x8,sp,#0x20
7101ba46e4  mov x0,sp
7101ba46e8  mov x1,x26
7101ba46ec  bl 0x7103776910
7101ba46f0  mov w3,#0x2
7101ba46f4  mov x0,x22
7101ba46f8  mov x1,x28
7101ba46fc  mov w2,wzr
7101ba4700  bl 0x710323f330
7101ba4704  ldr x28,[sp, #0x28]
7101ba4708  mov x1,x0
7101ba470c  mov x0,x28
7101ba4710  bl 0x7103778b80
7101ba4714  stp x24,xzr,[sp, #0x20]
7101ba4718  cbz x28,0x7101ba4724
7101ba471c  mov x0,x28
7101ba4720  bl 0x710392eb40
7101ba4724  ldr x9,[x20, #0x1510]
7101ba4728  ldr x8,[x9, #0x1b8]
7101ba472c  cbz x8,0x7101ba4810
7101ba4730  add x9,x9,#0x1b8
7101ba4734  mov x10,x9
7101ba4738  mov x11,x8
7101ba473c  ldr w12,[x11, #0x20]
7101ba4740  cmp w12,w27
7101ba4744  cset w12,lt
7101ba4748  csel x10,x10,x11,lt
7101ba474c  ldr x11,[x11, w12, UXTW #0x3]
7101ba4750  cbnz x11,0x7101ba473c
7101ba4754  cmp x10,x9
7101ba4758  b.eq 0x7101ba47a8
7101ba475c  ldr w11,[x10, #0x20]
7101ba4760  cmp w11,w27
7101ba4764  b.gt 0x7101ba47a8
7101ba4768  ldr x28,[x10, #0x28]
7101ba476c  cbz x28,0x7101ba47a8
7101ba4770  ldr x8,[x28]
7101ba4774  ldr x8,[x8, #0x1f8]
7101ba4778  mov w1,#0x1
7101ba477c  mov x0,x28
7101ba4780  blr x8
7101ba4784  ldr x8,[x28]
7101ba4788  ldr x8,[x8, #0x388]
7101ba478c  mov x0,x28
7101ba4790  mov w1,wzr
7101ba4794  mov w2,wzr
7101ba4798  blr x8
7101ba479c  ldr x8,[x20, #0x1510]
7101ba47a0  add x9,x8,#0x1b8
7101ba47a4  ldr x8,[x8, #0x1b8]
7101ba47a8  cbz x8,0x7101ba4810
7101ba47ac  mov x10,x9
7101ba47b0  ldr w11,[x8, #0x20]
7101ba47b4  cmp w11,w27
7101ba47b8  cset w11,lt
7101ba47bc  csel x10,x10,x8,lt
7101ba47c0  ldr x8,[x8, w11, UXTW #0x3]
7101ba47c4  cbnz x8,0x7101ba47b0
7101ba47c8  cmp x10,x9
7101ba47cc  b.eq 0x7101ba4810
7101ba47d0  ldr w8,[x10, #0x20]
7101ba47d4  cmp w8,w27
7101ba47d8  b.gt 0x7101ba4810
7101ba47dc  ldr x27,[x10, #0x28]
7101ba47e0  cbz x27,0x7101ba4810
7101ba47e4  ldr x8,[x27]
7101ba47e8  ldr x8,[x8, #0x208]
7101ba47ec  mov w1,#0x1
7101ba47f0  mov x0,x27
7101ba47f4  blr x8
7101ba47f8  ldr x8,[x27]
7101ba47fc  ldr x8,[x8, #0x388]
7101ba4800  mov x0,x27
7101ba4804  mov w1,wzr
7101ba4808  mov w2,wzr
7101ba480c  blr x8
7101ba4810  ldr x27,[sp, #0x8]
7101ba4814  adrp x8,0x710523d000
7101ba4818  add x8,x8,#0x988
7101ba481c  stp x8,xzr,[sp]
7101ba4820  cbz x27,0x7101ba4980
7101ba4824  ldr x0,[x27, #0x18]
7101ba4828  stp x24,xzr,[x27, #0x10]
7101ba482c  cbz x0,0x7101ba4978
7101ba4830  bl 0x710392eb40
7101ba4834  b 0x7101ba4978
7101ba4838  ldr x1,[x20, #0x1510]
7101ba483c  ldr x9,[x1, #0x1b8]
7101ba4840  cbz x9,0x7101ba4928
7101ba4844  add x8,x1,#0x1b8
7101ba4848  mov x10,x8
7101ba484c  mov x11,x9
7101ba4850  ldr w12,[x11, #0x20]
7101ba4854  cmp w12,w27
7101ba4858  cset w12,lt
7101ba485c  csel x10,x10,x11,lt
7101ba4860  ldr x11,[x11, w12, UXTW #0x3]
7101ba4864  cbnz x11,0x7101ba4850
7101ba4868  cmp x10,x8
7101ba486c  b.eq 0x7101ba48bc
7101ba4870  ldr w11,[x10, #0x20]
7101ba4874  cmp w11,w27
7101ba4878  b.gt 0x7101ba48bc
7101ba487c  ldr x28,[x10, #0x28]
7101ba4880  cbz x28,0x7101ba48bc
7101ba4884  ldr x8,[x28]
7101ba4888  ldr x8,[x8, #0x1f8]
7101ba488c  mov x0,x28
7101ba4890  mov w1,wzr
7101ba4894  blr x8
7101ba4898  ldr x8,[x28]
7101ba489c  ldr x8,[x8, #0x388]
7101ba48a0  mov w1,#0x1
7101ba48a4  mov x0,x28
7101ba48a8  mov w2,wzr
7101ba48ac  blr x8
7101ba48b0  ldr x1,[x20, #0x1510]
7101ba48b4  ldr x9,[x1, #0x1b8]
7101ba48b8  add x8,x1,#0x1b8
7101ba48bc  cbz x9,0x7101ba4928
7101ba48c0  mov x10,x8
7101ba48c4  ldr w11,[x9, #0x20]
7101ba48c8  cmp w11,w27
7101ba48cc  cset w11,lt
7101ba48d0  csel x10,x10,x9,lt
7101ba48d4  ldr x9,[x9, w11, UXTW #0x3]
7101ba48d8  cbnz x9,0x7101ba48c4
7101ba48dc  cmp x10,x8
7101ba48e0  b.eq 0x7101ba4928
7101ba48e4  ldr w8,[x10, #0x20]
7101ba48e8  cmp w8,w27
7101ba48ec  b.gt 0x7101ba4928
7101ba48f0  ldr x28,[x10, #0x28]
7101ba48f4  cbz x28,0x7101ba4928
7101ba48f8  ldr x8,[x28]
7101ba48fc  ldr x8,[x8, #0x208]
7101ba4900  mov x0,x28
7101ba4904  mov w1,wzr
7101ba4908  blr x8
7101ba490c  ldr x8,[x28]
7101ba4910  ldr x8,[x8, #0x388]
7101ba4914  mov w1,#0x1
7101ba4918  mov x0,x28
7101ba491c  mov w2,wzr
7101ba4920  blr x8
7101ba4924  ldr x1,[x20, #0x1510]
7101ba4928  add x0,sp,#0x10
7101ba492c  mov w2,w27
7101ba4930  bl 0x7103771d60
7101ba4934  ldr x27,[sp, #0x18]
7101ba4938  ldr x1,[x27]
7101ba493c  add x0,sp,#0x20
7101ba4940  bl 0x710377ad90
7101ba4944  ldr x0,[sp, #0x28]
7101ba4948  ldr x8,[x0]
7101ba494c  cbz x8,0x7101ba495c
7101ba4950  ldrb w9,[x8, #0x58]
7101ba4954  and w9,w9,#0xfe
7101ba4958  strb w9,[x8, #0x58]
7101ba495c  stp x24,xzr,[sp, #0x20]
7101ba4960  cbz x0,0x7101ba4968
7101ba4964  bl 0x710392eb40
7101ba4968  adrp x8,0x710523d000
7101ba496c  add x8,x8,#0x9c8
7101ba4970  stp x8,xzr,[sp, #0x10]
7101ba4974  cbz x27,0x7101ba4980
7101ba4978  mov x0,x27
7101ba497c  bl 0x710392eb40
7101ba4980  add x23,x23,#0x1
7101ba4984  cmp x23,#0x24
7101ba4988  b.cc 0x7101ba4634
7101ba498c  ldp x29,x30,[sp, #0x80]
7101ba4990  ldp x20,x19,[sp, #0x70]
7101ba4994  ldp x22,x21,[sp, #0x60]
7101ba4998  ldp x24,x23,[sp, #0x50]
7101ba499c  ldp x26,x25,[sp, #0x40]
7101ba49a0  ldp x28,x27,[sp, #0x30]
7101ba49a4  add sp,sp,#0x90
7101ba49a8  ret
7101ba49ac  mov x0,x19
7101ba49b0  bl 0x71039c1330
