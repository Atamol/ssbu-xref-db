// addr:      7101bd43a0
// offset:    0x1bd43a0
// name:      FUN_7101bd43a0
// mangled:   
// size:      6932

7101bd43a0  sub sp,sp,#0x140
7101bd43a4  str d8,[sp, #0xd0]
7101bd43a8  stp x28,x27,[sp, #0xe0]
7101bd43ac  stp x26,x25,[sp, #0xf0]
7101bd43b0  stp x24,x23,[sp, #0x100]
7101bd43b4  stp x22,x21,[sp, #0x110]
7101bd43b8  stp x20,x19,[sp, #0x120]
7101bd43bc  stp x29,x30,[sp, #0x130]
7101bd43c0  add x29,sp,#0x130
7101bd43c4  ldr x8,[x0, #0x180]
7101bd43c8  strh w2,[x0, #0x1b0]
7101bd43cc  cbz x8,0x7101bd43e8
7101bd43d0  ldr w8,[x0, #0x128]
7101bd43d4  mov x19,x0
7101bd43d8  cmp w8,#0x2
7101bd43dc  b.cc 0x7101bd43e8
7101bd43e0  ldr w8,[x19, #0x1c4]
7101bd43e4  cbz w8,0x7101bd440c
7101bd43e8  ldr d8,[sp, #0xd0]
7101bd43ec  ldp x29,x30,[sp, #0x130]
7101bd43f0  ldp x20,x19,[sp, #0x120]
7101bd43f4  ldp x22,x21,[sp, #0x110]
7101bd43f8  ldp x24,x23,[sp, #0x100]
7101bd43fc  ldp x26,x25,[sp, #0xf0]
7101bd4400  ldp x28,x27,[sp, #0xe0]
7101bd4404  add sp,sp,#0x140
7101bd4408  ret
7101bd440c  mov x27,x19
7101bd4410  ldr x8,[x27, #0x10]!
7101bd4414  ldr x9,[x27, #0x8]
7101bd4418  cmp x9,x8
7101bd441c  b.eq 0x7101bd5e70
7101bd4420  ldr x8,[x8]
7101bd4424  ldr x8,[x8]
7101bd4428  ldr x8,[x8]
7101bd442c  ldp x9,x10,[x1]
7101bd4430  cmp x10,x9
7101bd4434  add x0,x8,#0x8
7101bd4438  ldr x8,[x8, #0x10]
7101bd443c  ldr x8,[x8, #0x8]
7101bd4440  mov w23,w3
7101bd4444  mov x22,x1
7101bd4448  b.ne 0x7101bd445c
7101bd444c  cbz x8,0x7101bd44b8
7101bd4450  adrp x1,0x7104401000
7101bd4454  add x1,x1,#0x36a
7101bd4458  b 0x7101bd4468
7101bd445c  cbz x8,0x7101bd44b8
7101bd4460  adrp x1,0x7104280000
7101bd4464  add x1,x1,#0x895
7101bd4468  add x8,sp,#0x90
7101bd446c  bl 0x71037780e0
7101bd4470  ldr x21,[sp, #0x98]
7101bd4474  ldr x8,[x21]
7101bd4478  cbz x8,0x7101bd44a0
7101bd447c  ldr x8,[x21, #0x8]
7101bd4480  cbz x8,0x7101bd4490
7101bd4484  fmov s0,0x3f800000
7101bd4488  add x0,sp,#0x90
7101bd448c  bl 0x710377aee0
7101bd4490  adrp x8,0x710523d000
7101bd4494  add x8,x8,#0x9e8
7101bd4498  stp x8,xzr,[sp, #0x90]
7101bd449c  b 0x7101bd44b0
7101bd44a0  adrp x8,0x710523d000
7101bd44a4  add x8,x8,#0x9e8
7101bd44a8  stp x8,xzr,[sp, #0x90]
7101bd44ac  cbz x21,0x7101bd44b8
7101bd44b0  mov x0,x21
7101bd44b4  bl 0x710392eb40
7101bd44b8  ldp x8,x9,[x22]
7101bd44bc  sub x8,x9,x8
7101bd44c0  ldp x9,x10,[x19, #0x198]
7101bd44c4  lsr x8,x8,#0x5
7101bd44c8  mov w26,#0x5c29
7101bd44cc  movk w26,#0xc28f, LSL #16
7101bd44d0  mul w8,w8,w26
7101bd44d4  sub x9,x10,x9
7101bd44d8  lsr x9,x9,#0x5
7101bd44dc  msub w8,w9,w26,w8
7101bd44e0  cmp w8,#0x1
7101bd44e4  b.lt 0x7101bd4568
7101bd44e8  ldp x8,x9,[x19, #0x10]
7101bd44ec  cmp x9,x8
7101bd44f0  b.eq 0x7101bd5e70
7101bd44f4  ldr x8,[x8]
7101bd44f8  ldr x8,[x8]
7101bd44fc  ldr x8,[x8]
7101bd4500  ldr x9,[x8, #0x10]
7101bd4504  ldr x9,[x9, #0x8]
7101bd4508  cbz x9,0x7101bd4568
7101bd450c  add x0,x8,#0x8
7101bd4510  adrp x1,0x7104401000
7101bd4514  add x1,x1,#0x376
7101bd4518  add x8,sp,#0x90
7101bd451c  bl 0x71037780e0
7101bd4520  ldr x21,[sp, #0x98]
7101bd4524  ldr x8,[x21]
7101bd4528  cbz x8,0x7101bd4550
7101bd452c  ldr x8,[x21, #0x8]
7101bd4530  cbz x8,0x7101bd4540
7101bd4534  fmov s0,0x3f800000
7101bd4538  add x0,sp,#0x90
7101bd453c  bl 0x710377aee0
7101bd4540  adrp x8,0x710523d000
7101bd4544  add x8,x8,#0x9e8
7101bd4548  stp x8,xzr,[sp, #0x90]
7101bd454c  b 0x7101bd4560
7101bd4550  adrp x8,0x710523d000
7101bd4554  add x8,x8,#0x9e8
7101bd4558  stp x8,xzr,[sp, #0x90]
7101bd455c  cbz x21,0x7101bd4568
7101bd4560  mov x0,x21
7101bd4564  bl 0x710392eb40
7101bd4568  ldp x8,x9,[x19, #0x10]
7101bd456c  cmp x9,x8
7101bd4570  b.eq 0x7101bd5e70
7101bd4574  ldr x8,[x8]
7101bd4578  ldr x8,[x8]
7101bd457c  ldr x8,[x8]
7101bd4580  ldr x9,[x8, #0x10]
7101bd4584  ldr x9,[x9, #0x8]
7101bd4588  cbz x9,0x7101bd43e8
7101bd458c  add x28,x8,#0x8
7101bd4590  adrp x1,0x7104329000
7101bd4594  add x1,x1,#0xe18
7101bd4598  sub x8,x29,#0x88
7101bd459c  mov x0,x28
7101bd45a0  bl 0x7103776910
7101bd45a4  ldur x8,[x29, #-0x80]
7101bd45a8  ldr x8,[x8]
7101bd45ac  cbz x8,0x7101bd45e4
7101bd45b0  ldp x8,x9,[x22]
7101bd45b4  sub x8,x9,x8
7101bd45b8  mov x9,#0x5c29
7101bd45bc  movk x9,#0xc28f, LSL #16
7101bd45c0  asr x8,x8,#0x5
7101bd45c4  movk x9,#0x28f5, LSL #32
7101bd45c8  movk x9,#0x8f5c, LSL #48
7101bd45cc  mul x3,x8,x9
7101bd45d0  adrp x1,0x710439d000
7101bd45d4  add x1,x1,#0x316
7101bd45d8  sub x0,x29,#0x88
7101bd45dc  mov w2,#0x1
7101bd45e0  bl 0x710377a280
7101bd45e4  stp xzr,xzr,[sp, #0x98]
7101bd45e8  mov x25,#0x5c29
7101bd45ec  movk x25,#0xc28f, LSL #16
7101bd45f0  str xzr,[sp, #0x90]
7101bd45f4  movk x25,#0x28f5, LSL #32
7101bd45f8  movk x25,#0x8f5c, LSL #48
7101bd45fc  ldp x20,x21,[x22]
7101bd4600  subs x24,x21,x20
7101bd4604  b.eq 0x7101bd4700
7101bd4608  asr x8,x24,#0x5
7101bd460c  mul x25,x8,x25
7101bd4610  mov x8,#0x51ec
7101bd4614  movk x8,#0x1eb8, LSL #16
7101bd4618  movk x8,#0xeb85, LSL #32
7101bd461c  movk x8,#0x51, LSL #48
7101bd4620  cmp x25,x8
7101bd4624  b.cs 0x7101bd5e94
7101bd4628  mov w0,#0x10
7101bd462c  mov x1,x24
7101bd4630  bl 0x710392e290
7101bd4634  mov x22,x0
7101bd4638  cbnz x0,0x7101bd4680
7101bd463c  adrp x8,0x7105332000
7101bd4640  ldr x0,[x8, #0xf00]
7101bd4644  cbz x0,0x7101bd467c
7101bd4648  str wzr,[sp, #0x40]
7101bd464c  str x24,[sp, #0x58]
7101bd4650  ldr x8,[x0]
7101bd4654  ldr x8,[x8, #0x30]
7101bd4658  add x1,sp,#0x40
7101bd465c  add x2,sp,#0x58
7101bd4660  blr x8
7101bd4664  tbz w0,#0x0,0x7101bd467c
7101bd4668  mov w0,#0x10
7101bd466c  mov x1,x24
7101bd4670  bl 0x710392e290
7101bd4674  mov x22,x0
7101bd4678  cbnz x0,0x7101bd4680
7101bd467c  mov x22,xzr
7101bd4680  add x8,sp,#0x90
7101bd4684  add x24,x8,#0x8
7101bd4688  mov w8,#0x320
7101bd468c  stp x22,x22,[sp, #0x90]
7101bd4690  madd x8,x25,x8,x22
7101bd4694  cmp x20,x21
7101bd4698  str x8,[sp, #0xa0]
7101bd469c  b.eq 0x7101bd4714
7101bd46a0  mov x25,#0x5c29
7101bd46a4  movk x25,#0xc28f, LSL #16
7101bd46a8  movk x25,#0x28f5, LSL #32
7101bd46ac  movk x25,#0x8f5c, LSL #48
7101bd46b0  ldr x8,[x20]
7101bd46b4  ldrb w9,[x20, #0x8]
7101bd46b8  add x0,x22,#0x10
7101bd46bc  add x1,x20,#0x10
7101bd46c0  strb w9,[x22, #0x8]
7101bd46c4  str x8,[x22]
7101bd46c8  bl 0x7101bd5ec0
7101bd46cc  add x0,x22,#0x120
7101bd46d0  add x1,x20,#0x120
7101bd46d4  bl 0x7101bd60a0
7101bd46d8  ldrb w8,[x20, #0x318]
7101bd46dc  strb w8,[x22, #0x318]
7101bd46e0  ldr x8,[sp, #0x98]
7101bd46e4  add x20,x20,#0x320
7101bd46e8  cmp x20,x21
7101bd46ec  add x22,x8,#0x320
7101bd46f0  str x22,[sp, #0x98]
7101bd46f4  b.ne 0x7101bd46b0
7101bd46f8  ldr x0,[sp, #0x90]
7101bd46fc  b 0x7101bd4728
7101bd4700  add x8,sp,#0x90
7101bd4704  mov x22,xzr
7101bd4708  mov x0,xzr
7101bd470c  add x24,x8,#0x8
7101bd4710  b 0x7101bd4728
7101bd4714  mov x25,#0x5c29
7101bd4718  movk x25,#0xc28f, LSL #16
7101bd471c  mov x0,x22
7101bd4720  movk x25,#0x28f5, LSL #32
7101bd4724  movk x25,#0x8f5c, LSL #48
7101bd4728  add x2,sp,#0x58
7101bd472c  mov x1,x22
7101bd4730  str x19,[sp, #0x58]
7101bd4734  bl 0x7101bd6230
7101bd4738  adrp x8,0x7105314000
7101bd473c  add x8,x8,#0x4d8
7101bd4740  ldarb w8,[x8]
7101bd4744  tbz w8,#0x0,0x7101bd5e30
7101bd4748  adrp x8,0x7105306000
7101bd474c  ldr w10,[x8, #0x480]
7101bd4750  cbz w10,0x7101bd47b8
7101bd4754  ldp x9,x11,[sp, #0x90]
7101bd4758  cmp x11,x9
7101bd475c  b.eq 0x7101bd4820
7101bd4760  ldr w12,[x9]
7101bd4764  cmp w12,w10
7101bd4768  mov x12,x9
7101bd476c  b.eq 0x7101bd4790
7101bd4770  add x12,x9,#0x320
7101bd4774  cmp x11,x12
7101bd4778  b.eq 0x7101bd4820
7101bd477c  ldr w13,[x12]
7101bd4780  add x12,x12,#0x320
7101bd4784  cmp w13,w10
7101bd4788  b.ne 0x7101bd4774
7101bd478c  sub x12,x12,#0x320
7101bd4790  cmp x12,x11
7101bd4794  b.eq 0x7101bd4820
7101bd4798  sub x9,x12,x9
7101bd479c  lsr x9,x9,#0x5
7101bd47a0  mov w10,#0x1
7101bd47a4  madd w9,w9,w26,w10
7101bd47a8  str x9,[sp, #0x38]
7101bd47ac  add x20,x19,#0x198
7101bd47b0  tbnz w23,#0x0,0x7101bd482c
7101bd47b4  b 0x7101bd4830
7101bd47b8  ldp x9,x10,[x19, #0x198]
7101bd47bc  ldr x11,[x19, #0x180]
7101bd47c0  sub x10,x10,x9
7101bd47c4  asr x10,x10,#0x5
7101bd47c8  mul x10,x10,x25
7101bd47cc  ldp x12,x13,[x11, #0x180]
7101bd47d0  sub x12,x13,x12
7101bd47d4  lsr x12,x12,#0x3
7101bd47d8  cmp x10,w12, SXTW 
7101bd47dc  b.cs 0x7101bd47f0
7101bd47e0  ldrsw x11,[x11, #0x254]
7101bd47e4  cmp w11,#0x1
7101bd47e8  b.ge 0x7101bd4804
7101bd47ec  b 0x7101bd4820
7101bd47f0  ldr x11,[x19, #0x178]
7101bd47f4  cbz x11,0x7101bd4820
7101bd47f8  ldrsw x11,[x11, #0x2a4]
7101bd47fc  cmp w11,#0x1
7101bd4800  b.lt 0x7101bd4820
7101bd4804  sub x11,x11,#0x1
7101bd4808  cmp x10,x11
7101bd480c  b.ls 0x7101bd4820
7101bd4810  mov w10,#0x320
7101bd4814  mul x10,x11,x10
7101bd4818  ldr w10,[x9, x10, LSL #0x0]
7101bd481c  cbnz w10,0x7101bd4754
7101bd4820  str xzr,[sp, #0x38]
7101bd4824  add x20,x19,#0x198
7101bd4828  tbz w23,#0x0,0x7101bd4830
7101bd482c  str wzr,[x8, #0x480]
7101bd4830  ldr w9,[x19, #0x1b8]
7101bd4834  ldr x10,[sp, #0x38]
7101bd4838  cmp w10,w9
7101bd483c  add x21,x19,#0x180
7101bd4840  sxtw x8,w9
7101bd4844  cset w23,eq
7101bd4848  cbz w10,0x7101bd48b4
7101bd484c  cmp w9,#0x1
7101bd4850  b.lt 0x7101bd48b4
7101bd4854  ldr x11,[x24]
7101bd4858  ldr x10,[sp, #0x90]
7101bd485c  sub x11,x11,x10
7101bd4860  asr x11,x11,#0x5
7101bd4864  ldr x9,[sp, #0x38]
7101bd4868  sub w9,w9,#0x1
7101bd486c  mul x11,x11,x25
7101bd4870  cmp x11,x9
7101bd4874  b.ls 0x7101bd5e9c
7101bd4878  ldp x11,x12,[x19, #0x198]
7101bd487c  sub x12,x12,x11
7101bd4880  asr x12,x12,#0x5
7101bd4884  mul x12,x12,x25
7101bd4888  sub x8,x8,#0x1
7101bd488c  cmp x12,x8
7101bd4890  b.ls 0x7101bd5ea4
7101bd4894  mov w12,#0x320
7101bd4898  mul x9,x9,x12
7101bd489c  mul x8,x8,x12
7101bd48a0  ldr w9,[x10, x9, LSL #0x0]
7101bd48a4  ldr w8,[x11, x8, LSL #0x0]
7101bd48a8  cmp w9,w8
7101bd48ac  cset w23,eq
7101bd48b0  b 0x7101bd490c
7101bd48b4  ldr x9,[sp, #0x38]
7101bd48b8  cbnz w9,0x7101bd490c
7101bd48bc  cmp w9,w8
7101bd48c0  b.ne 0x7101bd490c
7101bd48c4  ldr x8,[x21]
7101bd48c8  ldr w8,[x8, #0x254]
7101bd48cc  cbz w8,0x7101bd48e0
7101bd48d0  mov x0,x21
7101bd48d4  mov w1,wzr
7101bd48d8  mov w2,wzr
7101bd48dc  bl 0x7103771a80
7101bd48e0  ldr x8,[x19, #0x178]
7101bd48e4  ldr w8,[x8, #0x2a4]
7101bd48e8  cbz w8,0x7101bd4908
7101bd48ec  add x0,x19,#0x178
7101bd48f0  mov w3,#0x1
7101bd48f4  mov w1,wzr
7101bd48f8  mov w2,wzr
7101bd48fc  mov w23,#0x1
7101bd4900  bl 0x7103783c10
7101bd4904  b 0x7101bd490c
7101bd4908  mov w23,#0x1
7101bd490c  add x8,sp,#0x90
7101bd4910  cmp x20,x8
7101bd4914  b.eq 0x7101bd4924
7101bd4918  ldp x1,x2,[sp, #0x90]
7101bd491c  mov x0,x20
7101bd4920  bl 0x7101bd6db0
7101bd4924  ldp x8,x9,[x19, #0x198]
7101bd4928  ldr x0,[x19, #0x180]
7101bd492c  sub x8,x9,x8
7101bd4930  ldp x9,x10,[x0, #0x180]
7101bd4934  stur x21,[x29, #-0x58]
7101bd4938  str x27,[sp, #0x20]
7101bd493c  str x24,[sp, #0x30]
7101bd4940  str x20,[sp, #0x10]
7101bd4944  str w23,[sp, #0x2c]
7101bd4948  asr x8,x8,#0x5
7101bd494c  mul x8,x8,x25
7101bd4950  sub x9,x10,x9
7101bd4954  lsr x9,x9,#0x3
7101bd4958  cmp x8,w9, SXTW 
7101bd495c  b.cs 0x7101bd49f4
7101bd4960  ldr x0,[x19, #0x178]
7101bd4964  ldr x8,[x0]
7101bd4968  ldr x8,[x8, #0x70]
7101bd496c  mov w1,wzr
7101bd4970  blr x8
7101bd4974  ldr x0,[x19, #0x178]
7101bd4978  ldr x8,[x0]
7101bd497c  ldr x8,[x8, #0x60]
7101bd4980  mov w1,wzr
7101bd4984  blr x8
7101bd4988  ldp x8,x9,[x19, #0x10]
7101bd498c  cmp x9,x8
7101bd4990  b.eq 0x7101bd5e70
7101bd4994  ldr x8,[x8]
7101bd4998  ldr x8,[x8]
7101bd499c  ldr x8,[x8]
7101bd49a0  ldr x9,[x8, #0x10]
7101bd49a4  ldr x9,[x9, #0x8]
7101bd49a8  mov x23,x28
7101bd49ac  cbz x9,0x7101bd4a98
7101bd49b0  add x0,x8,#0x8
7101bd49b4  adrp x1,0x7104329000
7101bd49b8  add x1,x1,#0xe2b
7101bd49bc  add x8,sp,#0x58
7101bd49c0  bl 0x71037780e0
7101bd49c4  ldr x22,[sp, #0x60]
7101bd49c8  ldr x8,[x22]
7101bd49cc  cbz x8,0x7101bd4a80
7101bd49d0  ldr x8,[x22, #0x8]
7101bd49d4  cbz x8,0x7101bd49e4
7101bd49d8  fmov s0,0x3f800000
7101bd49dc  add x0,sp,#0x58
7101bd49e0  bl 0x710377aee0
7101bd49e4  adrp x8,0x710523d000
7101bd49e8  add x8,x8,#0x9e8
7101bd49ec  stp x8,xzr,[sp, #0x58]
7101bd49f0  b 0x7101bd4a90
7101bd49f4  ldr x8,[x0]
7101bd49f8  ldr x8,[x8, #0x70]
7101bd49fc  mov w1,wzr
7101bd4a00  blr x8
7101bd4a04  ldr x0,[x19, #0x180]
7101bd4a08  ldr x8,[x0]
7101bd4a0c  ldr x8,[x8, #0x60]
7101bd4a10  mov w1,wzr
7101bd4a14  blr x8
7101bd4a18  ldp x8,x9,[x19, #0x10]
7101bd4a1c  cmp x9,x8
7101bd4a20  b.eq 0x7101bd5e70
7101bd4a24  ldr x8,[x8]
7101bd4a28  ldr x8,[x8]
7101bd4a2c  ldr x8,[x8]
7101bd4a30  ldr x9,[x8, #0x10]
7101bd4a34  ldr x9,[x9, #0x8]
7101bd4a38  cbz x9,0x7101bd4fec
7101bd4a3c  add x0,x8,#0x8
7101bd4a40  adrp x1,0x7104412000
7101bd4a44  add x1,x1,#0x899
7101bd4a48  add x8,sp,#0x58
7101bd4a4c  bl 0x71037780e0
7101bd4a50  ldr x22,[sp, #0x60]
7101bd4a54  ldr x8,[x22]
7101bd4a58  cbz x8,0x7101bd4fd4
7101bd4a5c  ldr x8,[x22, #0x8]
7101bd4a60  cbz x8,0x7101bd4a70
7101bd4a64  fmov s0,0x3f800000
7101bd4a68  add x0,sp,#0x58
7101bd4a6c  bl 0x710377aee0
7101bd4a70  adrp x8,0x710523d000
7101bd4a74  add x8,x8,#0x9e8
7101bd4a78  stp x8,xzr,[sp, #0x58]
7101bd4a7c  b 0x7101bd4fe4
7101bd4a80  adrp x8,0x710523d000
7101bd4a84  add x8,x8,#0x9e8
7101bd4a88  stp x8,xzr,[sp, #0x58]
7101bd4a8c  cbz x22,0x7101bd4a98
7101bd4a90  mov x0,x22
7101bd4a94  bl 0x710392eb40
7101bd4a98  ldr x8,[x21]
7101bd4a9c  ldp x9,x10,[x8, #0x180]
7101bd4aa0  sub x9,x10,x9
7101bd4aa4  lsr x9,x9,#0x3
7101bd4aa8  cmp w9,#0x1
7101bd4aac  b.lt 0x7101bd4de0
7101bd4ab0  fmov s8,0x3f800000
7101bd4ab4  mov x25,xzr
7101bd4ab8  adrp x20,0x710523d000
7101bd4abc  add x20,x20,#0x9c8
7101bd4ac0  adrp x24,0x710523d000
7101bd4ac4  add x24,x24,#0x9a8
7101bd4ac8  add x0,sp,#0x40
7101bd4acc  mov x1,x8
7101bd4ad0  mov w2,w25
7101bd4ad4  bl 0x7103771d60
7101bd4ad8  ldr x28,[sp, #0x48]
7101bd4adc  ldr x1,[x28]
7101bd4ae0  cbz x1,0x7101bd4db4
7101bd4ae4  sub x0,x29,#0x78
7101bd4ae8  bl 0x710377ad90
7101bd4aec  ldur x27,[x29, #-0x70]
7101bd4af0  ldr x8,[x27]
7101bd4af4  cbz x8,0x7101bd4da4
7101bd4af8  ldp x9,x10,[x19, #0x198]
7101bd4afc  sub x9,x10,x9
7101bd4b00  mov x10,#0x5c29
7101bd4b04  movk x10,#0xc28f, LSL #16
7101bd4b08  asr x9,x9,#0x5
7101bd4b0c  movk x10,#0x28f5, LSL #32
7101bd4b10  movk x10,#0x8f5c, LSL #48
7101bd4b14  mul x9,x9,x10
7101bd4b18  ldr x26,[x28]
7101bd4b1c  cmp x9,x25
7101bd4b20  b.cs 0x7101bd4b68
7101bd4b24  cbz x26,0x7101bd4d18
7101bd4b28  ldr x8,[x26]
7101bd4b2c  ldr x8,[x8, #0x1f8]
7101bd4b30  mov x0,x26
7101bd4b34  mov w1,wzr
7101bd4b38  blr x8
7101bd4b3c  ldr x8,[x26]
7101bd4b40  ldr x8,[x8, #0x200]
7101bd4b44  mov x0,x26
7101bd4b48  blr x8
7101bd4b4c  tbz w0,#0x0,0x7101bd4cf4
7101bd4b50  ldr x8,[x26]
7101bd4b54  ldr x8,[x8, #0x210]
7101bd4b58  mov x0,x26
7101bd4b5c  blr x8
7101bd4b60  eor w8,w0,#0x1
7101bd4b64  b 0x7101bd4cf8
7101bd4b68  cbz x26,0x7101bd4bd0
7101bd4b6c  ldr x8,[x26]
7101bd4b70  ldr x8,[x8, #0x1f8]
7101bd4b74  mov w1,#0x1
7101bd4b78  mov x0,x26
7101bd4b7c  mov w21,#0x1
7101bd4b80  blr x8
7101bd4b84  ldr x8,[x26]
7101bd4b88  ldr x8,[x8, #0x200]
7101bd4b8c  mov x0,x26
7101bd4b90  blr x8
7101bd4b94  tbz w0,#0x0,0x7101bd4bac
7101bd4b98  ldr x8,[x26]
7101bd4b9c  ldr x8,[x8, #0x210]
7101bd4ba0  mov x0,x26
7101bd4ba4  blr x8
7101bd4ba8  eor w21,w0,#0x1
7101bd4bac  ldr x8,[x26]
7101bd4bb0  ldr x8,[x8, #0x388]
7101bd4bb4  and w1,w21,#0x1
7101bd4bb8  mov x0,x26
7101bd4bbc  mov w2,wzr
7101bd4bc0  blr x8
7101bd4bc4  ldr x8,[x27]
7101bd4bc8  ldur x21,[x29, #-0x58]
7101bd4bcc  cbz x8,0x7101bd4bdc
7101bd4bd0  ldrb w9,[x8, #0x58]
7101bd4bd4  orr w9,w9,#0x1
7101bd4bd8  strb w9,[x8, #0x58]
7101bd4bdc  ldr x8,[x21]
7101bd4be0  ldp x9,x10,[x8, #0x180]
7101bd4be4  sub x10,x10,x9
7101bd4be8  lsr x11,x10,#0x3
7101bd4bec  cmp w11,w25
7101bd4bf0  b.le 0x7101bd4da4
7101bd4bf4  asr x10,x10,#0x3
7101bd4bf8  cmp x10,x25
7101bd4bfc  b.ls 0x7101bd5e88
7101bd4c00  ldr x8,[x9, x25, LSL #0x3]
7101bd4c04  ldr x22,[x8, #0x88]
7101bd4c08  cbz x22,0x7101bd4da4
7101bd4c0c  ldp x8,x9,[x19, #0x10]
7101bd4c10  cmp x9,x8
7101bd4c14  b.eq 0x7101bd5e80
7101bd4c18  ldr x8,[x8]
7101bd4c1c  ldr x8,[x8]
7101bd4c20  ldr x8,[x8]
7101bd4c24  add x0,x8,#0x8
7101bd4c28  add x8,sp,#0x58
7101bd4c2c  mov x1,x22
7101bd4c30  bl 0x7103776640
7101bd4c34  add x2,sp,#0x58
7101bd4c38  mov x0,x19
7101bd4c3c  mov w1,w25
7101bd4c40  bl 0x7101bd7000
7101bd4c44  ldr x21,[sp, #0x60]
7101bd4c48  adrp x8,0x710523d000
7101bd4c4c  add x8,x8,#0x988
7101bd4c50  stp x8,xzr,[sp, #0x58]
7101bd4c54  cbz x21,0x7101bd4c70
7101bd4c58  ldr x0,[x21, #0x18]
7101bd4c5c  stp x24,xzr,[x21, #0x10]
7101bd4c60  cbz x0,0x7101bd4c68
7101bd4c64  bl 0x710392eb40
7101bd4c68  mov x0,x21
7101bd4c6c  bl 0x710392eb40
7101bd4c70  add x8,sp,#0x80
7101bd4c74  mov x0,x23
7101bd4c78  mov x1,x22
7101bd4c7c  bl 0x7103776640
7101bd4c80  ldr x26,[sp, #0x88]
7101bd4c84  ldr x8,[x26, #0x8]
7101bd4c88  ldur x21,[x29, #-0x58]
7101bd4c8c  cbz x8,0x7101bd4d7c
7101bd4c90  add x8,sp,#0x70
7101bd4c94  add x0,sp,#0x80
7101bd4c98  adrp x1,0x710424f000
7101bd4c9c  add x1,x1,#0x3b6
7101bd4ca0  bl 0x7103776640
7101bd4ca4  ldr x22,[sp, #0x78]
7101bd4ca8  ldr x8,[x22, #0x8]
7101bd4cac  cbz x8,0x7101bd4d54
7101bd4cb0  add x8,sp,#0x58
7101bd4cb4  add x0,sp,#0x70
7101bd4cb8  adrp x1,0x710435b000
7101bd4cbc  add x1,x1,#0xe3c
7101bd4cc0  bl 0x71037780e0
7101bd4cc4  ldr x21,[sp, #0x60]
7101bd4cc8  ldr x8,[x21]
7101bd4ccc  cbz x8,0x7101bd4d38
7101bd4cd0  ldr x8,[x21, #0x8]
7101bd4cd4  cbz x8,0x7101bd4ce4
7101bd4cd8  mov v0.16B,v8.16B
7101bd4cdc  add x0,sp,#0x58
7101bd4ce0  bl 0x710377aee0
7101bd4ce4  adrp x8,0x710523d000
7101bd4ce8  add x8,x8,#0x9e8
7101bd4cec  stp x8,xzr,[sp, #0x58]
7101bd4cf0  b 0x7101bd4d48
7101bd4cf4  mov w8,#0x1
7101bd4cf8  ldr x9,[x26]
7101bd4cfc  ldr x9,[x9, #0x388]
7101bd4d00  and w1,w8,#0x1
7101bd4d04  mov x0,x26
7101bd4d08  mov w2,wzr
7101bd4d0c  blr x9
7101bd4d10  ldr x8,[x27]
7101bd4d14  cbz x8,0x7101bd4d30
7101bd4d18  ldrb w9,[x8, #0x58]
7101bd4d1c  and w9,w9,#0xfe
7101bd4d20  strb w9,[x8, #0x58]
7101bd4d24  stp x24,xzr,[x29, #-0x78]
7101bd4d28  cbnz x27,0x7101bd4dac
7101bd4d2c  b 0x7101bd4db4
7101bd4d30  stp x24,xzr,[x29, #-0x78]
7101bd4d34  b 0x7101bd4dac
7101bd4d38  adrp x8,0x710523d000
7101bd4d3c  add x8,x8,#0x9e8
7101bd4d40  stp x8,xzr,[sp, #0x58]
7101bd4d44  cbz x21,0x7101bd4d50
7101bd4d48  mov x0,x21
7101bd4d4c  bl 0x710392eb40
7101bd4d50  ldur x21,[x29, #-0x58]
7101bd4d54  adrp x8,0x710523d000
7101bd4d58  add x8,x8,#0x988
7101bd4d5c  stp x8,xzr,[sp, #0x70]
7101bd4d60  cbz x22,0x7101bd4d7c
7101bd4d64  ldr x0,[x22, #0x18]
7101bd4d68  stp x24,xzr,[x22, #0x10]
7101bd4d6c  cbz x0,0x7101bd4d74
7101bd4d70  bl 0x710392eb40
7101bd4d74  mov x0,x22
7101bd4d78  bl 0x710392eb40
7101bd4d7c  adrp x8,0x710523d000
7101bd4d80  add x8,x8,#0x988
7101bd4d84  stp x8,xzr,[sp, #0x80]
7101bd4d88  cbz x26,0x7101bd4da4
7101bd4d8c  ldr x0,[x26, #0x18]
7101bd4d90  stp x24,xzr,[x26, #0x10]
7101bd4d94  cbz x0,0x7101bd4d9c
7101bd4d98  bl 0x710392eb40
7101bd4d9c  mov x0,x26
7101bd4da0  bl 0x710392eb40
7101bd4da4  stp x24,xzr,[x29, #-0x78]
7101bd4da8  cbz x27,0x7101bd4db4
7101bd4dac  mov x0,x27
7101bd4db0  bl 0x710392eb40
7101bd4db4  stp x20,xzr,[sp, #0x40]
7101bd4db8  cbz x28,0x7101bd4dc4
7101bd4dbc  mov x0,x28
7101bd4dc0  bl 0x710392eb40
7101bd4dc4  ldr x8,[x21]
7101bd4dc8  ldp x9,x10,[x8, #0x180]
7101bd4dcc  sub x9,x10,x9
7101bd4dd0  add x25,x25,#0x1
7101bd4dd4  lsr x9,x9,#0x3
7101bd4dd8  cmp x25,w9, SXTW 
7101bd4ddc  b.lt 0x7101bd4ac8
7101bd4de0  ldr w9,[x19, #0x1b8]
7101bd4de4  ldr x20,[sp, #0x38]
7101bd4de8  cmp w20,w9
7101bd4dec  b.ne 0x7101bd4e64
7101bd4df0  mov x28,x23
7101bd4df4  ldr w23,[sp, #0x2c]
7101bd4df8  cbz w23,0x7101bd4f9c
7101bd4dfc  ldr x0,[x19, #0x188]
7101bd4e00  ldr x8,[x0]
7101bd4e04  ldr x8,[x8, #0x78]
7101bd4e08  blr x8
7101bd4e0c  mov w8,w0
7101bd4e10  ldr x0,[x19, #0x180]
7101bd4e14  mov x25,#0x5c29
7101bd4e18  movk x25,#0xc28f, LSL #16
7101bd4e1c  movk x25,#0x28f5, LSL #32
7101bd4e20  movk x25,#0x8f5c, LSL #48
7101bd4e24  tbz w8,#0x0,0x7101bd5474
7101bd4e28  ldr w8,[x0, #0x254]
7101bd4e2c  cmp w8,w20
7101bd4e30  b.eq 0x7101bd4e48
7101bd4e34  mov x0,x21
7101bd4e38  mov w1,w20
7101bd4e3c  mov w2,wzr
7101bd4e40  bl 0x7103771a80
7101bd4e44  ldr x0,[x21]
7101bd4e48  ldp x8,x9,[x0, #0x180]
7101bd4e4c  sub x9,x9,x8
7101bd4e50  lsr x10,x9,#0x3
7101bd4e54  cmp w20,w10
7101bd4e58  b.ge 0x7101bd5be4
7101bd4e5c  sxtw x10,w20
7101bd4e60  b 0x7101bd5400
7101bd4e64  ldr x9,[x8]
7101bd4e68  ldr x9,[x9, #0x70]
7101bd4e6c  mov w1,#0x1
7101bd4e70  mov x0,x8
7101bd4e74  blr x9
7101bd4e78  mov x0,x21
7101bd4e7c  mov w1,w20
7101bd4e80  mov w2,wzr
7101bd4e84  bl 0x7103771a80
7101bd4e88  ldr x0,[x21]
7101bd4e8c  ldp x8,x9,[x0, #0x180]
7101bd4e90  sub x10,x9,x8
7101bd4e94  lsr x10,x10,#0x3
7101bd4e98  cmp w10,#0x1
7101bd4e9c  mov x28,x23
7101bd4ea0  b.lt 0x7101bd53b0
7101bd4ea4  ldr w23,[sp, #0x2c]
7101bd4ea8  fmov s8,0x3f800000
7101bd4eac  mov x20,xzr
7101bd4eb0  adrp x24,0x710523d000
7101bd4eb4  add x24,x24,#0x988
7101bd4eb8  adrp x26,0x710523d000
7101bd4ebc  add x26,x26,#0x9a8
7101bd4ec0  adrp x25,0x710432a000
7101bd4ec4  add x25,x25,#0x8bc
7101bd4ec8  adrp x27,0x710523d000
7101bd4ecc  add x27,x27,#0x9e8
7101bd4ed0  sub x9,x9,x8
7101bd4ed4  lsr x10,x9,#0x3
7101bd4ed8  cmp x20,w10, SXTW 
7101bd4edc  b.ge 0x7101bd4f80
7101bd4ee0  asr x9,x9,#0x3
7101bd4ee4  cmp x9,x20
7101bd4ee8  b.ls 0x7101bd5e78
7101bd4eec  ldr x8,[x8, x20, LSL #0x3]
7101bd4ef0  ldr x1,[x8, #0x88]
7101bd4ef4  cbz x1,0x7101bd4f80
7101bd4ef8  add x8,sp,#0x40
7101bd4efc  mov x0,x28
7101bd4f00  bl 0x7103776640
7101bd4f04  ldr x22,[sp, #0x48]
7101bd4f08  ldr x8,[x22, #0x8]
7101bd4f0c  cbz x8,0x7101bd4f5c
7101bd4f10  add x8,sp,#0x58
7101bd4f14  add x0,sp,#0x40
7101bd4f18  mov x1,x25
7101bd4f1c  bl 0x71037780e0
7101bd4f20  ldr x21,[sp, #0x60]
7101bd4f24  ldr x8,[x21]
7101bd4f28  cbz x8,0x7101bd4f48
7101bd4f2c  ldr x8,[x21, #0x8]
7101bd4f30  cbz x8,0x7101bd4f40
7101bd4f34  mov v0.16B,v8.16B
7101bd4f38  add x0,sp,#0x58
7101bd4f3c  bl 0x710377aee0
7101bd4f40  stp x27,xzr,[sp, #0x58]
7101bd4f44  b 0x7101bd4f50
7101bd4f48  stp x27,xzr,[sp, #0x58]
7101bd4f4c  cbz x21,0x7101bd4f58
7101bd4f50  mov x0,x21
7101bd4f54  bl 0x710392eb40
7101bd4f58  ldur x21,[x29, #-0x58]
7101bd4f5c  stp x24,xzr,[sp, #0x40]
7101bd4f60  cbz x22,0x7101bd4f7c
7101bd4f64  ldr x0,[x22, #0x18]
7101bd4f68  stp x26,xzr,[x22, #0x10]
7101bd4f6c  cbz x0,0x7101bd4f74
7101bd4f70  bl 0x710392eb40
7101bd4f74  mov x0,x22
7101bd4f78  bl 0x710392eb40
7101bd4f7c  ldr x0,[x21]
7101bd4f80  ldp x8,x9,[x0, #0x180]
7101bd4f84  sub x10,x9,x8
7101bd4f88  add x20,x20,#0x1
7101bd4f8c  lsr x10,x10,#0x3
7101bd4f90  cmp x20,w10, SXTW 
7101bd4f94  b.lt 0x7101bd4ed0
7101bd4f98  b 0x7101bd53b4
7101bd4f9c  ldr x9,[x8]
7101bd4fa0  ldr x9,[x9, #0x70]
7101bd4fa4  mov w1,#0x1
7101bd4fa8  mov x0,x8
7101bd4fac  blr x9
7101bd4fb0  mov x0,x21
7101bd4fb4  mov w1,w20
7101bd4fb8  mov w2,wzr
7101bd4fbc  bl 0x7103771a80
7101bd4fc0  mov x25,#0x5c29
7101bd4fc4  movk x25,#0xc28f, LSL #16
7101bd4fc8  movk x25,#0x28f5, LSL #32
7101bd4fcc  movk x25,#0x8f5c, LSL #48
7101bd4fd0  b 0x7101bd5bf4
7101bd4fd4  adrp x8,0x710523d000
7101bd4fd8  add x8,x8,#0x9e8
7101bd4fdc  stp x8,xzr,[sp, #0x58]
7101bd4fe0  cbz x22,0x7101bd4fec
7101bd4fe4  mov x0,x22
7101bd4fe8  bl 0x710392eb40
7101bd4fec  str x28,[sp, #0x18]
7101bd4ff0  ldp x8,x9,[x19, #0x198]
7101bd4ff4  sub x8,x9,x8
7101bd4ff8  mov w9,#0x1
7101bd4ffc  lsr x8,x8,#0x5
7101bd5000  madd w1,w8,w26,w9
7101bd5004  add x0,x19,#0x178
7101bd5008  str x0,[sp, #0x8]
7101bd500c  bl 0x7103783690
7101bd5010  ldr x21,[x19, #0x178]
7101bd5014  stp xzr,xzr,[sp, #0x60]
7101bd5018  str xzr,[sp, #0x58]
7101bd501c  ldp x8,x9,[x21, #0x168]
7101bd5020  sub x8,x9,x8
7101bd5024  asr x1,x8,#0x3
7101bd5028  add x0,sp,#0x58
7101bd502c  bl 0x71019bb740
7101bd5030  ldp x20,x21,[x21, #0x168]
7101bd5034  cmp x20,x21
7101bd5038  b.eq 0x7101bd5078
7101bd503c  ldr x8,[x20]
7101bd5040  add x1,x8,#0x8
7101bd5044  ldp x0,x8,[sp, #0x60]
7101bd5048  cmp x0,x8
7101bd504c  b.eq 0x7101bd5064
7101bd5050  bl 0x7103776390
7101bd5054  ldr x8,[sp, #0x60]
7101bd5058  add x8,x8,#0x10
7101bd505c  str x8,[sp, #0x60]
7101bd5060  b 0x7101bd506c
7101bd5064  add x0,sp,#0x58
7101bd5068  bl 0x71019bb8f0
7101bd506c  add x20,x20,#0x8
7101bd5070  cmp x21,x20
7101bd5074  b.ne 0x7101bd503c
7101bd5078  ldp x26,x20,[sp, #0x58]
7101bd507c  cmp x26,x20
7101bd5080  b.eq 0x7101bd514c
7101bd5084  fmov s8,0x3f800000
7101bd5088  adrp x27,0x710424f000
7101bd508c  add x27,x27,#0x3b6
7101bd5090  adrp x24,0x710523d000
7101bd5094  add x24,x24,#0x988
7101bd5098  adrp x25,0x710523d000
7101bd509c  add x25,x25,#0x9a8
7101bd50a0  adrp x28,0x710435b000
7101bd50a4  add x28,x28,#0xe3c
7101bd50a8  adrp x23,0x710523d000
7101bd50ac  add x23,x23,#0x9e8
7101bd50b0  ldr x8,[x26, #0x8]
7101bd50b4  ldr x8,[x8, #0x8]
7101bd50b8  cbz x8,0x7101bd5140
7101bd50bc  sub x8,x29,#0x78
7101bd50c0  mov x0,x26
7101bd50c4  mov x1,x27
7101bd50c8  bl 0x7103776640
7101bd50cc  ldur x22,[x29, #-0x70]
7101bd50d0  ldr x8,[x22, #0x8]
7101bd50d4  cbz x8,0x7101bd5120
7101bd50d8  add x8,sp,#0x40
7101bd50dc  sub x0,x29,#0x78
7101bd50e0  mov x1,x28
7101bd50e4  bl 0x71037780e0
7101bd50e8  ldr x21,[sp, #0x48]
7101bd50ec  ldr x8,[x21]
7101bd50f0  cbz x8,0x7101bd5110
7101bd50f4  ldr x8,[x21, #0x8]
7101bd50f8  cbz x8,0x7101bd5108
7101bd50fc  mov v0.16B,v8.16B
7101bd5100  add x0,sp,#0x40
7101bd5104  bl 0x710377aee0
7101bd5108  stp x23,xzr,[sp, #0x40]
7101bd510c  b 0x7101bd5118
7101bd5110  stp x23,xzr,[sp, #0x40]
7101bd5114  cbz x21,0x7101bd5120
7101bd5118  mov x0,x21
7101bd511c  bl 0x710392eb40
7101bd5120  stp x24,xzr,[x29, #-0x78]
7101bd5124  cbz x22,0x7101bd5140
7101bd5128  ldr x0,[x22, #0x18]
7101bd512c  stp x25,xzr,[x22, #0x10]
7101bd5130  cbz x0,0x7101bd5138
7101bd5134  bl 0x710392eb40
7101bd5138  mov x0,x22
7101bd513c  bl 0x710392eb40
7101bd5140  add x26,x26,#0x10
7101bd5144  cmp x20,x26
7101bd5148  b.ne 0x7101bd50b0
7101bd514c  ldr w8,[x19, #0x1b8]
7101bd5150  ldr x20,[sp, #0x38]
7101bd5154  cmp w20,w8
7101bd5158  b.ne 0x7101bd51ec
7101bd515c  ldr x28,[sp, #0x18]
7101bd5160  ldur x21,[x29, #-0x58]
7101bd5164  ldr w23,[sp, #0x2c]
7101bd5168  ldr x26,[sp, #0x8]
7101bd516c  cbz w23,0x7101bd5388
7101bd5170  ldr x0,[x19, #0x188]
7101bd5174  ldr x8,[x0]
7101bd5178  ldr x8,[x8, #0x78]
7101bd517c  blr x8
7101bd5180  mov w8,w0
7101bd5184  ldr x0,[x19, #0x178]
7101bd5188  tbz w8,#0x0,0x7101bd54bc
7101bd518c  ldr w8,[x0, #0x2a4]
7101bd5190  mov x25,#0x5c29
7101bd5194  movk x25,#0xc28f, LSL #16
7101bd5198  movk x25,#0x28f5, LSL #32
7101bd519c  movk x25,#0x8f5c, LSL #48
7101bd51a0  cmp w8,w20
7101bd51a4  b.eq 0x7101bd51c0
7101bd51a8  mov w3,#0x1
7101bd51ac  mov x0,x26
7101bd51b0  mov w1,w20
7101bd51b4  mov w2,wzr
7101bd51b8  bl 0x7103783c10
7101bd51bc  ldr x0,[x26]
7101bd51c0  ldrsw x8,[x0, #0x2c8]
7101bd51c4  tbnz w8,#0x1f,0x7101bd54f4
7101bd51c8  ldr w9,[x0, #0x2c0]
7101bd51cc  cmp w8,w9
7101bd51d0  b.ge 0x7101bd54f4
7101bd51d4  ldr x9,[x0, #0x168]
7101bd51d8  sub x0,x29,#0x78
7101bd51dc  ldr x8,[x9, x8, LSL #0x3]
7101bd51e0  add x1,x8,#0x8
7101bd51e4  bl 0x7103776390
7101bd51e8  b 0x7101bd54fc
7101bd51ec  ldr x26,[sp, #0x8]
7101bd51f0  mov w3,#0x1
7101bd51f4  mov w1,w20
7101bd51f8  mov w2,wzr
7101bd51fc  mov x0,x26
7101bd5200  bl 0x7103783c10
7101bd5204  ldr x21,[x26]
7101bd5208  stp xzr,xzr,[sp, #0x48]
7101bd520c  str xzr,[sp, #0x40]
7101bd5210  ldp x8,x9,[x21, #0x168]
7101bd5214  sub x8,x9,x8
7101bd5218  asr x1,x8,#0x3
7101bd521c  add x0,sp,#0x40
7101bd5220  bl 0x71019bb740
7101bd5224  ldp x20,x21,[x21, #0x168]
7101bd5228  ldr x28,[sp, #0x18]
7101bd522c  cmp x20,x21
7101bd5230  b.eq 0x7101bd5270
7101bd5234  ldr x8,[x20]
7101bd5238  add x1,x8,#0x8
7101bd523c  ldp x0,x8,[sp, #0x48]
7101bd5240  cmp x0,x8
7101bd5244  b.eq 0x7101bd525c
7101bd5248  bl 0x7103776390
7101bd524c  ldr x8,[sp, #0x48]
7101bd5250  add x8,x8,#0x10
7101bd5254  str x8,[sp, #0x48]
7101bd5258  b 0x7101bd5264
7101bd525c  add x0,sp,#0x40
7101bd5260  bl 0x71019bb8f0
7101bd5264  add x20,x20,#0x8
7101bd5268  cmp x21,x20
7101bd526c  b.ne 0x7101bd5234
7101bd5270  ldp x22,x20,[sp, #0x40]
7101bd5274  ldur x21,[x29, #-0x58]
7101bd5278  mov x25,#0x5c29
7101bd527c  movk x25,#0xc28f, LSL #16
7101bd5280  movk x25,#0x28f5, LSL #32
7101bd5284  movk x25,#0x8f5c, LSL #48
7101bd5288  cmp x22,x20
7101bd528c  b.eq 0x7101bd5308
7101bd5290  fmov s8,0x3f800000
7101bd5294  adrp x24,0x710432a000
7101bd5298  add x24,x24,#0x8bc
7101bd529c  adrp x23,0x710523d000
7101bd52a0  add x23,x23,#0x9e8
7101bd52a4  ldr x8,[x22, #0x8]
7101bd52a8  ldr x8,[x8, #0x8]
7101bd52ac  cbz x8,0x7101bd52fc
7101bd52b0  sub x8,x29,#0x78
7101bd52b4  mov x0,x22
7101bd52b8  mov x1,x24
7101bd52bc  bl 0x71037780e0
7101bd52c0  ldur x21,[x29, #-0x70]
7101bd52c4  ldr x8,[x21]
7101bd52c8  cbz x8,0x7101bd52e8
7101bd52cc  ldr x8,[x21, #0x8]
7101bd52d0  cbz x8,0x7101bd52e0
7101bd52d4  mov v0.16B,v8.16B
7101bd52d8  sub x0,x29,#0x78
7101bd52dc  bl 0x710377aee0
7101bd52e0  stp x23,xzr,[x29, #-0x78]
7101bd52e4  b 0x7101bd52f0
7101bd52e8  stp x23,xzr,[x29, #-0x78]
7101bd52ec  cbz x21,0x7101bd52f8
7101bd52f0  mov x0,x21
7101bd52f4  bl 0x710392eb40
7101bd52f8  ldur x21,[x29, #-0x58]
7101bd52fc  add x22,x22,#0x10
7101bd5300  cmp x20,x22
7101bd5304  b.ne 0x7101bd52a4
7101bd5308  ldr w23,[sp, #0x2c]
7101bd530c  tbz w23,#0x0,0x7101bd5354
7101bd5310  ldr x0,[x19, #0x188]
7101bd5314  ldr x8,[x0]
7101bd5318  ldr x8,[x8, #0x78]
7101bd531c  blr x8
7101bd5320  tbz w0,#0x0,0x7101bd5354
7101bd5324  ldr x8,[x26]
7101bd5328  ldrsw x9,[x8, #0x2c8]
7101bd532c  tbnz w9,#0x1f,0x7101bd554c
7101bd5330  ldr w10,[x8, #0x2c0]
7101bd5334  cmp w9,w10
7101bd5338  b.ge 0x7101bd554c
7101bd533c  ldr x8,[x8, #0x168]
7101bd5340  ldr x8,[x8, x9, LSL #0x3]
7101bd5344  add x1,x8,#0x8
7101bd5348  add x0,sp,#0x80
7101bd534c  bl 0x7103776390
7101bd5350  b 0x7101bd5554
7101bd5354  ldr x0,[x26]
7101bd5358  ldr x8,[x0]
7101bd535c  ldr x8,[x8, #0x78]
7101bd5360  blr x8
7101bd5364  tbnz w0,#0x0,0x7101bd57c8
7101bd5368  ldr x0,[x26]
7101bd536c  ldr x8,[x0]
7101bd5370  ldr x8,[x8, #0x70]
7101bd5374  mov w1,#0x1
7101bd5378  blr x8
7101bd537c  ldr x20,[sp, #0x40]
7101bd5380  cbnz x20,0x7101bd57d0
7101bd5384  b 0x7101bd5810
7101bd5388  mov w3,#0x1
7101bd538c  mov x0,x26
7101bd5390  mov w1,w20
7101bd5394  mov w2,wzr
7101bd5398  bl 0x7103783c10
7101bd539c  mov x25,#0x5c29
7101bd53a0  movk x25,#0xc28f, LSL #16
7101bd53a4  movk x25,#0x28f5, LSL #32
7101bd53a8  movk x25,#0x8f5c, LSL #48
7101bd53ac  b 0x7101bd5810
7101bd53b0  ldr w23,[sp, #0x2c]
7101bd53b4  tbz w23,#0x0,0x7101bd5488
7101bd53b8  ldr x0,[x19, #0x188]
7101bd53bc  ldr x8,[x0]
7101bd53c0  ldr x8,[x8, #0x78]
7101bd53c4  blr x8
7101bd53c8  mov w8,w0
7101bd53cc  ldr x0,[x19, #0x180]
7101bd53d0  mov x25,#0x5c29
7101bd53d4  movk x25,#0xc28f, LSL #16
7101bd53d8  movk x25,#0x28f5, LSL #32
7101bd53dc  movk x25,#0x8f5c, LSL #48
7101bd53e0  tbz w8,#0x0,0x7101bd5474
7101bd53e4  ldp x8,x9,[x0, #0x180]
7101bd53e8  ldr x11,[sp, #0x38]
7101bd53ec  sub x9,x9,x8
7101bd53f0  lsr x10,x9,#0x3
7101bd53f4  cmp w11,w10
7101bd53f8  b.ge 0x7101bd5be4
7101bd53fc  sxtw x10,w11
7101bd5400  asr x9,x9,#0x3
7101bd5404  cmp x9,x10
7101bd5408  b.ls 0x7101bd5e78
7101bd540c  ldr x8,[x8, x10, LSL #0x3]
7101bd5410  ldr x1,[x8, #0x88]
7101bd5414  cbz x1,0x7101bd5be4
7101bd5418  add x8,sp,#0x40
7101bd541c  mov x0,x28
7101bd5420  bl 0x7103776640
7101bd5424  ldr x24,[sp, #0x48]
7101bd5428  ldr x8,[x24, #0x8]
7101bd542c  cbz x8,0x7101bd5bb0
7101bd5430  adrp x1,0x71042a3000
7101bd5434  add x1,x1,#0x880
7101bd5438  add x8,sp,#0x58
7101bd543c  add x0,sp,#0x40
7101bd5440  bl 0x71037780e0
7101bd5444  ldr x22,[sp, #0x60]
7101bd5448  ldr x8,[x22]
7101bd544c  cbz x8,0x7101bd5ac8
7101bd5450  ldr x8,[x22, #0x8]
7101bd5454  cbz x8,0x7101bd5464
7101bd5458  fmov s0,0x3f800000
7101bd545c  add x0,sp,#0x58
7101bd5460  bl 0x710377aee0
7101bd5464  adrp x8,0x710523d000
7101bd5468  add x8,x8,#0x9e8
7101bd546c  stp x8,xzr,[sp, #0x58]
7101bd5470  b 0x7101bd5ad8
7101bd5474  ldr x8,[x0]
7101bd5478  ldr x8,[x8, #0x78]
7101bd547c  blr x8
7101bd5480  tbz w0,#0x0,0x7101bd54a8
7101bd5484  b 0x7101bd5bf4
7101bd5488  ldr x8,[x0]
7101bd548c  ldr x8,[x8, #0x78]
7101bd5490  blr x8
7101bd5494  mov x25,#0x5c29
7101bd5498  movk x25,#0xc28f, LSL #16
7101bd549c  movk x25,#0x28f5, LSL #32
7101bd54a0  movk x25,#0x8f5c, LSL #48
7101bd54a4  tbnz w0,#0x0,0x7101bd5bf4
7101bd54a8  ldr x0,[x21]
7101bd54ac  ldr x8,[x0]
7101bd54b0  ldr x8,[x8, #0x70]
7101bd54b4  mov w1,#0x1
7101bd54b8  b 0x7101bd5bf0
7101bd54bc  ldr x8,[x0]
7101bd54c0  ldr x8,[x8, #0x78]
7101bd54c4  blr x8
7101bd54c8  mov x25,#0x5c29
7101bd54cc  movk x25,#0xc28f, LSL #16
7101bd54d0  movk x25,#0x28f5, LSL #32
7101bd54d4  movk x25,#0x8f5c, LSL #48
7101bd54d8  tbnz w0,#0x0,0x7101bd5810
7101bd54dc  ldr x0,[x26]
7101bd54e0  ldr x8,[x0]
7101bd54e4  ldr x8,[x8, #0x70]
7101bd54e8  mov w1,#0x1
7101bd54ec  blr x8
7101bd54f0  b 0x7101bd5810
7101bd54f4  sub x0,x29,#0x78
7101bd54f8  bl 0x7103776290
7101bd54fc  ldur x8,[x29, #-0x70]
7101bd5500  ldr x8,[x8, #0x8]
7101bd5504  cbz x8,0x7101bd56e4
7101bd5508  adrp x1,0x71042a3000
7101bd550c  add x1,x1,#0x880
7101bd5510  add x8,sp,#0x40
7101bd5514  sub x0,x29,#0x78
7101bd5518  bl 0x71037780e0
7101bd551c  ldr x22,[sp, #0x48]
7101bd5520  ldr x8,[x22]
7101bd5524  cbz x8,0x7101bd55a4
7101bd5528  ldr x8,[x22, #0x8]
7101bd552c  cbz x8,0x7101bd553c
7101bd5530  fmov s0,0x3f800000
7101bd5534  add x0,sp,#0x40
7101bd5538  bl 0x710377aee0
7101bd553c  adrp x8,0x710523d000
7101bd5540  add x8,x8,#0x9e8
7101bd5544  stp x8,xzr,[sp, #0x40]
7101bd5548  b 0x7101bd55b4
7101bd554c  add x0,sp,#0x80
7101bd5550  bl 0x7103776290
7101bd5554  ldr x8,[sp, #0x88]
7101bd5558  ldr x8,[x8, #0x8]
7101bd555c  cbz x8,0x7101bd577c
7101bd5560  adrp x1,0x71042a3000
7101bd5564  add x1,x1,#0x880
7101bd5568  sub x8,x29,#0x78
7101bd556c  add x0,sp,#0x80
7101bd5570  bl 0x71037780e0
7101bd5574  ldur x22,[x29, #-0x70]
7101bd5578  ldr x8,[x22]
7101bd557c  cbz x8,0x7101bd5620
7101bd5580  ldr x8,[x22, #0x8]
7101bd5584  cbz x8,0x7101bd5594
7101bd5588  fmov s0,0x3f800000
7101bd558c  sub x0,x29,#0x78
7101bd5590  bl 0x710377aee0
7101bd5594  adrp x8,0x710523d000
7101bd5598  add x8,x8,#0x9e8
7101bd559c  stp x8,xzr,[x29, #-0x78]
7101bd55a0  b 0x7101bd5630
7101bd55a4  adrp x8,0x710523d000
7101bd55a8  add x8,x8,#0x9e8
7101bd55ac  stp x8,xzr,[sp, #0x40]
7101bd55b0  cbz x22,0x7101bd55bc
7101bd55b4  mov x0,x22
7101bd55b8  bl 0x710392eb40
7101bd55bc  adrp x1,0x710424f000
7101bd55c0  add x1,x1,#0x3b6
7101bd55c4  add x8,sp,#0x80
7101bd55c8  sub x0,x29,#0x78
7101bd55cc  bl 0x7103776640
7101bd55d0  ldr x24,[sp, #0x88]
7101bd55d4  ldr x8,[x24, #0x8]
7101bd55d8  cbz x8,0x7101bd56b4
7101bd55dc  adrp x1,0x7104412000
7101bd55e0  add x1,x1,#0xfd0
7101bd55e4  add x8,sp,#0x40
7101bd55e8  add x0,sp,#0x80
7101bd55ec  bl 0x71037780e0
7101bd55f0  ldr x22,[sp, #0x48]
7101bd55f4  ldr x8,[x22]
7101bd55f8  cbz x8,0x7101bd569c
7101bd55fc  ldr x8,[x22, #0x8]
7101bd5600  cbz x8,0x7101bd5610
7101bd5604  fmov s0,0x3f800000
7101bd5608  add x0,sp,#0x40
7101bd560c  bl 0x710377aee0
7101bd5610  adrp x8,0x710523d000
7101bd5614  add x8,x8,#0x9e8
7101bd5618  stp x8,xzr,[sp, #0x40]
7101bd561c  b 0x7101bd56ac
7101bd5620  adrp x8,0x710523d000
7101bd5624  add x8,x8,#0x9e8
7101bd5628  stp x8,xzr,[x29, #-0x78]
7101bd562c  cbz x22,0x7101bd5638
7101bd5630  mov x0,x22
7101bd5634  bl 0x710392eb40
7101bd5638  adrp x1,0x710424f000
7101bd563c  add x1,x1,#0x3b6
7101bd5640  add x8,sp,#0x70
7101bd5644  add x0,sp,#0x80
7101bd5648  bl 0x7103776640
7101bd564c  ldr x24,[sp, #0x78]
7101bd5650  ldr x8,[x24, #0x8]
7101bd5654  cbz x8,0x7101bd574c
7101bd5658  adrp x1,0x7104412000
7101bd565c  add x1,x1,#0xfd0
7101bd5660  sub x8,x29,#0x78
7101bd5664  add x0,sp,#0x70
7101bd5668  bl 0x71037780e0
7101bd566c  ldur x22,[x29, #-0x70]
7101bd5670  ldr x8,[x22]
7101bd5674  cbz x8,0x7101bd5734
7101bd5678  ldr x8,[x22, #0x8]
7101bd567c  cbz x8,0x7101bd568c
7101bd5680  fmov s0,0x3f800000
7101bd5684  sub x0,x29,#0x78
7101bd5688  bl 0x710377aee0
7101bd568c  adrp x8,0x710523d000
7101bd5690  add x8,x8,#0x9e8
7101bd5694  stp x8,xzr,[x29, #-0x78]
7101bd5698  b 0x7101bd5744
7101bd569c  adrp x8,0x710523d000
7101bd56a0  add x8,x8,#0x9e8
7101bd56a4  stp x8,xzr,[sp, #0x40]
7101bd56a8  cbz x22,0x7101bd56b4
7101bd56ac  mov x0,x22
7101bd56b0  bl 0x710392eb40
7101bd56b4  adrp x8,0x710523d000
7101bd56b8  add x8,x8,#0x988
7101bd56bc  stp x8,xzr,[sp, #0x80]
7101bd56c0  cbz x24,0x7101bd56e4
7101bd56c4  ldr x0,[x24, #0x18]
7101bd56c8  adrp x8,0x710523d000
7101bd56cc  add x8,x8,#0x9a8
7101bd56d0  stp x8,xzr,[x24, #0x10]
7101bd56d4  cbz x0,0x7101bd56dc
7101bd56d8  bl 0x710392eb40
7101bd56dc  mov x0,x24
7101bd56e0  bl 0x710392eb40
7101bd56e4  ldr x0,[x26]
7101bd56e8  ldr x8,[x0]
7101bd56ec  ldr x8,[x8, #0x70]
7101bd56f0  mov w1,wzr
7101bd56f4  blr x8
7101bd56f8  ldur x21,[x29, #-0x70]
7101bd56fc  adrp x8,0x710523d000
7101bd5700  add x8,x8,#0x988
7101bd5704  stp x8,xzr,[x29, #-0x78]
7101bd5708  cbz x21,0x7101bd572c
7101bd570c  ldr x0,[x21, #0x18]
7101bd5710  adrp x8,0x710523d000
7101bd5714  add x8,x8,#0x9a8
7101bd5718  stp x8,xzr,[x21, #0x10]
7101bd571c  cbz x0,0x7101bd5724
7101bd5720  bl 0x710392eb40
7101bd5724  mov x0,x21
7101bd5728  bl 0x710392eb40
7101bd572c  ldur x21,[x29, #-0x58]
7101bd5730  b 0x7101bd5810
7101bd5734  adrp x8,0x710523d000
7101bd5738  add x8,x8,#0x9e8
7101bd573c  stp x8,xzr,[x29, #-0x78]
7101bd5740  cbz x22,0x7101bd574c
7101bd5744  mov x0,x22
7101bd5748  bl 0x710392eb40
7101bd574c  adrp x8,0x710523d000
7101bd5750  add x8,x8,#0x988
7101bd5754  stp x8,xzr,[sp, #0x70]
7101bd5758  cbz x24,0x7101bd577c
7101bd575c  ldr x0,[x24, #0x18]
7101bd5760  adrp x8,0x710523d000
7101bd5764  add x8,x8,#0x9a8
7101bd5768  stp x8,xzr,[x24, #0x10]
7101bd576c  cbz x0,0x7101bd5774
7101bd5770  bl 0x710392eb40
7101bd5774  mov x0,x24
7101bd5778  bl 0x710392eb40
7101bd577c  ldr x0,[x26]
7101bd5780  ldr x8,[x0]
7101bd5784  ldr x8,[x8, #0x70]
7101bd5788  mov w1,wzr
7101bd578c  blr x8
7101bd5790  ldr x21,[sp, #0x88]
7101bd5794  adrp x8,0x710523d000
7101bd5798  add x8,x8,#0x988
7101bd579c  stp x8,xzr,[sp, #0x80]
7101bd57a0  cbz x21,0x7101bd57c4
7101bd57a4  ldr x0,[x21, #0x18]
7101bd57a8  adrp x8,0x710523d000
7101bd57ac  add x8,x8,#0x9a8
7101bd57b0  stp x8,xzr,[x21, #0x10]
7101bd57b4  cbz x0,0x7101bd57bc
7101bd57b8  bl 0x710392eb40
7101bd57bc  mov x0,x21
7101bd57c0  bl 0x710392eb40
7101bd57c4  ldur x21,[x29, #-0x58]
7101bd57c8  ldr x20,[sp, #0x40]
7101bd57cc  cbz x20,0x7101bd5810
7101bd57d0  ldr x21,[sp, #0x48]
7101bd57d4  cmp x21,x20
7101bd57d8  b.eq 0x7101bd57fc
7101bd57dc  ldr x8,[x21, #-0x10]!
7101bd57e0  ldr x8,[x8]
7101bd57e4  mov x0,x21
7101bd57e8  blr x8
7101bd57ec  cmp x20,x21
7101bd57f0  b.ne 0x7101bd57dc
7101bd57f4  ldr x0,[sp, #0x40]
7101bd57f8  b 0x7101bd5800
7101bd57fc  mov x0,x20
7101bd5800  ldur x21,[x29, #-0x58]
7101bd5804  str x20,[sp, #0x48]
7101bd5808  cbz x0,0x7101bd5810
7101bd580c  bl 0x710392eb40
7101bd5810  ldr x0,[x26]
7101bd5814  ldr x8,[x0]
7101bd5818  ldr x8,[x8, #0x60]
7101bd581c  mov w1,#0x1
7101bd5820  blr x8
7101bd5824  ldr x20,[sp, #0x58]
7101bd5828  cbz x20,0x7101bd586c
7101bd582c  ldr x21,[sp, #0x60]
7101bd5830  cmp x21,x20
7101bd5834  b.eq 0x7101bd5858
7101bd5838  ldr x8,[x21, #-0x10]!
7101bd583c  ldr x8,[x8]
7101bd5840  mov x0,x21
7101bd5844  blr x8
7101bd5848  cmp x20,x21
7101bd584c  b.ne 0x7101bd5838
7101bd5850  ldr x0,[sp, #0x58]
7101bd5854  b 0x7101bd585c
7101bd5858  mov x0,x20
7101bd585c  ldur x21,[x29, #-0x58]
7101bd5860  str x20,[sp, #0x60]
7101bd5864  cbz x0,0x7101bd586c
7101bd5868  bl 0x710392eb40
7101bd586c  add x24,x19,#0x188
7101bd5870  tbz w23,#0x0,0x7101bd5c74
7101bd5874  ldr x0,[x19, #0x188]
7101bd5878  ldr x8,[x0]
7101bd587c  ldr x8,[x8, #0x78]
7101bd5880  blr x8
7101bd5884  tbz w0,#0x0,0x7101bd5c88
7101bd5888  ldr x0,[x21]
7101bd588c  cbz x0,0x7101bd58ac
7101bd5890  ldr x8,[x0]
7101bd5894  ldr x8,[x8, #0x68]
7101bd5898  blr x8
7101bd589c  tbz w0,#0x0,0x7101bd58ac
7101bd58a0  ldr x8,[x21]
7101bd58a4  add x8,x8,#0x254
7101bd58a8  b 0x7101bd58cc
7101bd58ac  ldr x0,[x19, #0x178]
7101bd58b0  cbz x0,0x7101bd5c88
7101bd58b4  ldr x8,[x0]
7101bd58b8  ldr x8,[x8, #0x68]
7101bd58bc  blr x8
7101bd58c0  tbz w0,#0x0,0x7101bd5c88
7101bd58c4  ldr x8,[x19, #0x178]
7101bd58c8  add x8,x8,#0x2a4
7101bd58cc  ldrsw x8,[x8]
7101bd58d0  cmp w8,#0x1
7101bd58d4  b.lt 0x7101bd5c88
7101bd58d8  ldp x9,x10,[x19, #0x198]
7101bd58dc  sub x10,x10,x9
7101bd58e0  asr x10,x10,#0x5
7101bd58e4  mul x10,x10,x25
7101bd58e8  sub x8,x8,#0x1
7101bd58ec  cmp x10,x8
7101bd58f0  b.ls 0x7101bd5eac
7101bd58f4  ldr x10,[x19, #0x188]
7101bd58f8  ldr w22,[x10, #0x254]
7101bd58fc  mov w10,#0x320
7101bd5900  madd x10,x8,x10,x9
7101bd5904  ldrb w10,[x10, #0x318]
7101bd5908  cbz w10,0x7101bd5964
7101bd590c  mov w10,#0x320
7101bd5910  madd x10,x8,x10,x9
7101bd5914  ldrh w10,[x10, #0x10]
7101bd5918  ldrh w11,[x19, #0x1b0]
7101bd591c  cmp w10,w11
7101bd5920  b.ne 0x7101bd593c
7101bd5924  mov w10,#0x320
7101bd5928  madd x10,x8,x10,x9
7101bd592c  ldrb w10,[x10, #0xaa]
7101bd5930  sub w11,w10,#0x1
7101bd5934  cmp w22,w10
7101bd5938  csel w22,w22,w11,lt
7101bd593c  cbz w22,0x7101bd59cc
7101bd5940  sub w10,w22,#0x1
7101bd5944  cmp w10,#0x7
7101bd5948  b.cs 0x7101bd5e90
7101bd594c  mov w11,#0x320
7101bd5950  madd x8,x8,x11,x9
7101bd5954  mov w9,#0x48
7101bd5958  umaddl x8,w10,w9,x8
7101bd595c  add x20,x8,#0x120
7101bd5960  b 0x7101bd59d8
7101bd5964  ldp x8,x9,[x19, #0x10]
7101bd5968  cmp x9,x8
7101bd596c  b.eq 0x7101bd5e80
7101bd5970  ldr x8,[x8]
7101bd5974  ldr x8,[x8]
7101bd5978  ldr x8,[x8]
7101bd597c  ldr x9,[x8, #0x10]
7101bd5980  ldr x9,[x9, #0x8]
7101bd5984  cbz x9,0x7101bd5aa0
7101bd5988  add x0,x8,#0x8
7101bd598c  adrp x1,0x7104291000
7101bd5990  add x1,x1,#0xab4
7101bd5994  add x8,sp,#0x58
7101bd5998  bl 0x71037780e0
7101bd599c  ldr x21,[sp, #0x60]
7101bd59a0  ldr x8,[x21]
7101bd59a4  cbz x8,0x7101bd5b44
7101bd59a8  ldr x8,[x21, #0x8]
7101bd59ac  cbz x8,0x7101bd59bc
7101bd59b0  fmov s0,0x3f800000
7101bd59b4  add x0,sp,#0x58
7101bd59b8  bl 0x710377aee0
7101bd59bc  adrp x8,0x710523d000
7101bd59c0  add x8,x8,#0x9e8
7101bd59c4  stp x8,xzr,[sp, #0x58]
7101bd59c8  b 0x7101bd5a98
7101bd59cc  mov w10,#0x320
7101bd59d0  madd x8,x8,x10,x9
7101bd59d4  add x20,x8,#0x60
7101bd59d8  adrp x1,0x710433a000
7101bd59dc  add x1,x1,#0x54
7101bd59e0  add x8,sp,#0x40
7101bd59e4  mov x0,x28
7101bd59e8  bl 0x7103776910
7101bd59ec  ldr x21,[sp, #0x48]
7101bd59f0  ldr x0,[x21, #0x10]
7101bd59f4  cbz x0,0x7101bd5a08
7101bd59f8  add x1,x20,#0x20
7101bd59fc  mov w2,#0xffffffff
7101bd5a00  mov w3,#0x1
7101bd5a04  bl 0x71037a2270
7101bd5a08  ldp x8,x9,[x19, #0x10]
7101bd5a0c  cmp x9,x8
7101bd5a10  b.eq 0x7101bd5e80
7101bd5a14  ldr x8,[x8]
7101bd5a18  ldr x8,[x8]
7101bd5a1c  ldr x8,[x8]
7101bd5a20  ldr x9,[x8, #0x10]
7101bd5a24  ldr x9,[x9, #0x8]
7101bd5a28  cbz x9,0x7101bd5a88
7101bd5a2c  add x0,x8,#0x8
7101bd5a30  adrp x1,0x71043df000
7101bd5a34  add x1,x1,#0xfb6
7101bd5a38  add x8,sp,#0x58
7101bd5a3c  bl 0x71037780e0
7101bd5a40  ldr x23,[sp, #0x60]
7101bd5a44  ldr x8,[x23]
7101bd5a48  cbz x8,0x7101bd5a70
7101bd5a4c  ldr x8,[x23, #0x8]
7101bd5a50  cbz x8,0x7101bd5a60
7101bd5a54  fmov s0,0x3f800000
7101bd5a58  add x0,sp,#0x58
7101bd5a5c  bl 0x710377aee0
7101bd5a60  adrp x8,0x710523d000
7101bd5a64  add x8,x8,#0x9e8
7101bd5a68  stp x8,xzr,[sp, #0x58]
7101bd5a6c  b 0x7101bd5a80
7101bd5a70  adrp x8,0x710523d000
7101bd5a74  add x8,x8,#0x9e8
7101bd5a78  stp x8,xzr,[sp, #0x58]
7101bd5a7c  cbz x23,0x7101bd5a88
7101bd5a80  mov x0,x23
7101bd5a84  bl 0x710392eb40
7101bd5a88  adrp x8,0x710523d000
7101bd5a8c  add x8,x8,#0x9a8
7101bd5a90  stp x8,xzr,[sp, #0x40]
7101bd5a94  cbz x21,0x7101bd5aa0
7101bd5a98  mov x0,x21
7101bd5a9c  bl 0x710392eb40
7101bd5aa0  ldr x8,[x19, #0x188]
7101bd5aa4  ldr w8,[x8, #0x254]
7101bd5aa8  cmp w22,w8
7101bd5aac  b.eq 0x7101bd5ac0
7101bd5ab0  mov w2,#0x1
7101bd5ab4  mov x0,x24
7101bd5ab8  mov w1,w22
7101bd5abc  bl 0x7103771a80
7101bd5ac0  str w22,[x19, #0x1bc]
7101bd5ac4  b 0x7101bd5c88
7101bd5ac8  adrp x8,0x710523d000
7101bd5acc  add x8,x8,#0x9e8
7101bd5ad0  stp x8,xzr,[sp, #0x58]
7101bd5ad4  cbz x22,0x7101bd5ae0
7101bd5ad8  mov x0,x22
7101bd5adc  bl 0x710392eb40
7101bd5ae0  adrp x1,0x710424f000
7101bd5ae4  add x1,x1,#0x3b6
7101bd5ae8  sub x8,x29,#0x78
7101bd5aec  add x0,sp,#0x40
7101bd5af0  bl 0x7103776640
7101bd5af4  ldur x25,[x29, #-0x70]
7101bd5af8  ldr x8,[x25, #0x8]
7101bd5afc  cbz x8,0x7101bd5b70
7101bd5b00  adrp x1,0x7104412000
7101bd5b04  add x1,x1,#0xfd0
7101bd5b08  add x8,sp,#0x58
7101bd5b0c  sub x0,x29,#0x78
7101bd5b10  bl 0x71037780e0
7101bd5b14  ldr x22,[sp, #0x60]
7101bd5b18  ldr x8,[x22]
7101bd5b1c  cbz x8,0x7101bd5b58
7101bd5b20  ldr x8,[x22, #0x8]
7101bd5b24  cbz x8,0x7101bd5b34
7101bd5b28  fmov s0,0x3f800000
7101bd5b2c  add x0,sp,#0x58
7101bd5b30  bl 0x710377aee0
7101bd5b34  adrp x8,0x710523d000
7101bd5b38  add x8,x8,#0x9e8
7101bd5b3c  stp x8,xzr,[sp, #0x58]
7101bd5b40  b 0x7101bd5b68
7101bd5b44  adrp x8,0x710523d000
7101bd5b48  add x8,x8,#0x9e8
7101bd5b4c  stp x8,xzr,[sp, #0x58]
7101bd5b50  cbnz x21,0x7101bd5a98
7101bd5b54  b 0x7101bd5aa0
7101bd5b58  adrp x8,0x710523d000
7101bd5b5c  add x8,x8,#0x9e8
7101bd5b60  stp x8,xzr,[sp, #0x58]
7101bd5b64  cbz x22,0x7101bd5b70
7101bd5b68  mov x0,x22
7101bd5b6c  bl 0x710392eb40
7101bd5b70  adrp x8,0x710523d000
7101bd5b74  add x8,x8,#0x988
7101bd5b78  stp x8,xzr,[x29, #-0x78]
7101bd5b7c  cbz x25,0x7101bd5ba0
7101bd5b80  ldr x0,[x25, #0x18]
7101bd5b84  adrp x8,0x710523d000
7101bd5b88  add x8,x8,#0x9a8
7101bd5b8c  stp x8,xzr,[x25, #0x10]
7101bd5b90  cbz x0,0x7101bd5b98
7101bd5b94  bl 0x710392eb40
7101bd5b98  mov x0,x25
7101bd5b9c  bl 0x710392eb40
7101bd5ba0  mov x25,#0x5c29
7101bd5ba4  movk x25,#0xc28f, LSL #16
7101bd5ba8  movk x25,#0x28f5, LSL #32
7101bd5bac  movk x25,#0x8f5c, LSL #48
7101bd5bb0  adrp x8,0x710523d000
7101bd5bb4  add x8,x8,#0x988
7101bd5bb8  stp x8,xzr,[sp, #0x40]
7101bd5bbc  cbz x24,0x7101bd5be0
7101bd5bc0  ldr x0,[x24, #0x18]
7101bd5bc4  adrp x8,0x710523d000
7101bd5bc8  add x8,x8,#0x9a8
7101bd5bcc  stp x8,xzr,[x24, #0x10]
7101bd5bd0  cbz x0,0x7101bd5bd8
7101bd5bd4  bl 0x710392eb40
7101bd5bd8  mov x0,x24
7101bd5bdc  bl 0x710392eb40
7101bd5be0  ldr x0,[x21]
7101bd5be4  ldr x8,[x0]
7101bd5be8  ldr x8,[x8, #0x70]
7101bd5bec  mov w1,wzr
7101bd5bf0  blr x8
7101bd5bf4  ldr x0,[x19, #0x180]
7101bd5bf8  ldr x8,[x0]
7101bd5bfc  ldr x8,[x8, #0x60]
7101bd5c00  mov w1,#0x1
7101bd5c04  blr x8
7101bd5c08  ldp x8,x9,[x19, #0x10]
7101bd5c0c  cmp x9,x8
7101bd5c10  b.eq 0x7101bd5e80
7101bd5c14  ldr x8,[x8]
7101bd5c18  ldr x8,[x8]
7101bd5c1c  ldr x8,[x8]
7101bd5c20  ldr x9,[x8, #0x10]
7101bd5c24  ldr x9,[x9, #0x8]
7101bd5c28  cbz x9,0x7101bd5c6c
7101bd5c2c  add x0,x8,#0x8
7101bd5c30  adrp x1,0x710426e000
7101bd5c34  add x1,x1,#0x7ec
7101bd5c38  add x8,sp,#0x58
7101bd5c3c  bl 0x7103776910
7101bd5c40  ldr x0,[sp, #0x60]
7101bd5c44  ldr x8,[x0]
7101bd5c48  cbz x8,0x7101bd5c58
7101bd5c4c  ldrb w9,[x8, #0x58]
7101bd5c50  orr w9,w9,#0x1
7101bd5c54  strb w9,[x8, #0x58]
7101bd5c58  adrp x8,0x710523d000
7101bd5c5c  add x8,x8,#0x9a8
7101bd5c60  stp x8,xzr,[sp, #0x58]
7101bd5c64  cbnz x0,0x7101bd5868
7101bd5c68  b 0x7101bd586c
7101bd5c6c  add x24,x19,#0x188
7101bd5c70  cbnz w23,0x7101bd5874
7101bd5c74  ldr x0,[x19, #0x188]
7101bd5c78  ldr x8,[x0]
7101bd5c7c  ldr x8,[x8, #0x70]
7101bd5c80  mov w1,wzr
7101bd5c84  blr x8
7101bd5c88  ldr x0,[x24]
7101bd5c8c  ldr x8,[x0]
7101bd5c90  ldr x8,[x8, #0x60]
7101bd5c94  mov w1,#0x1
7101bd5c98  blr x8
7101bd5c9c  ldr x0,[x19, #0x190]
7101bd5ca0  ldr x8,[x0]
7101bd5ca4  ldr x8,[x8, #0x60]
7101bd5ca8  mov w1,#0x1
7101bd5cac  blr x8
7101bd5cb0  mov w1,#0x1
7101bd5cb4  mov x0,x19
7101bd5cb8  bl 0x7101bd7a40
7101bd5cbc  ldr x0,[x24]
7101bd5cc0  ldr x8,[x0]
7101bd5cc4  ldr x8,[x8, #0x78]
7101bd5cc8  blr x8
7101bd5ccc  ldr x21,[sp, #0x30]
7101bd5cd0  tbnz w0,#0x0,0x7101bd5d54
7101bd5cd4  ldp x8,x9,[x19, #0x10]
7101bd5cd8  cmp x9,x8
7101bd5cdc  b.eq 0x7101bd5e80
7101bd5ce0  ldr x8,[x8]
7101bd5ce4  ldr x8,[x8]
7101bd5ce8  ldr x8,[x8]
7101bd5cec  ldr x9,[x8, #0x10]
7101bd5cf0  ldr x9,[x9, #0x8]
7101bd5cf4  cbz x9,0x7101bd5d54
7101bd5cf8  add x0,x8,#0x8
7101bd5cfc  adrp x1,0x7104291000
7101bd5d00  add x1,x1,#0xab4
7101bd5d04  add x8,sp,#0x58
7101bd5d08  bl 0x71037780e0
7101bd5d0c  ldr x20,[sp, #0x60]
7101bd5d10  ldr x8,[x20]
7101bd5d14  cbz x8,0x7101bd5d3c
7101bd5d18  ldr x8,[x20, #0x8]
7101bd5d1c  cbz x8,0x7101bd5d2c
7101bd5d20  fmov s0,0x3f800000
7101bd5d24  add x0,sp,#0x58
7101bd5d28  bl 0x710377aee0
7101bd5d2c  adrp x8,0x710523d000
7101bd5d30  add x8,x8,#0x9e8
7101bd5d34  stp x8,xzr,[sp, #0x58]
7101bd5d38  b 0x7101bd5d4c
7101bd5d3c  adrp x8,0x710523d000
7101bd5d40  add x8,x8,#0x9e8
7101bd5d44  stp x8,xzr,[sp, #0x58]
7101bd5d48  cbz x20,0x7101bd5d54
7101bd5d4c  mov x0,x20
7101bd5d50  bl 0x710392eb40
7101bd5d54  ldr w8,[x19, #0x160]
7101bd5d58  cmn w8,#0x1
7101bd5d5c  str wzr,[x19, #0x1c4]
7101bd5d60  b.eq 0x7101bd5da8
7101bd5d64  ldrsw x8,[x19, #0x124]
7101bd5d68  cmp w8,#0x13
7101bd5d6c  b.cs 0x7101bd5e90
7101bd5d70  add x8,x19,x8, LSL #0x2
7101bd5d74  orr w9,wzr,#0x3
7101bd5d78  str w9,[x8, #0xd8]
7101bd5d7c  ldr x0,[sp, #0x90]
7101bd5d80  cbz x0,0x7101bd5d8c
7101bd5d84  str x0,[x21]
7101bd5d88  bl 0x710392eb40
7101bd5d8c  ldur x0,[x29, #-0x80]
7101bd5d90  adrp x8,0x710523d000
7101bd5d94  add x8,x8,#0x9a8
7101bd5d98  stp x8,xzr,[x29, #-0x88]
7101bd5d9c  cbz x0,0x7101bd43e8
7101bd5da0  bl 0x710392eb40
7101bd5da4  b 0x7101bd43e8
7101bd5da8  ldr x0,[x19, #0x180]
7101bd5dac  ldr x8,[x0]
7101bd5db0  ldr x8,[x8, #0x60]
7101bd5db4  mov w1,wzr
7101bd5db8  blr x8
7101bd5dbc  ldr x0,[x19, #0x178]
7101bd5dc0  ldr x8,[x0]
7101bd5dc4  ldr x8,[x8, #0x60]
7101bd5dc8  mov w1,wzr
7101bd5dcc  blr x8
7101bd5dd0  add x8,x19,#0x11c
7101bd5dd4  stp xzr,xzr,[x19, #0x68]
7101bd5dd8  str xzr,[x8]
7101bd5ddc  add x8,x19,#0x114
7101bd5de0  str xzr,[x8]
7101bd5de4  add x8,x19,#0x10c
7101bd5de8  str xzr,[x8]
7101bd5dec  add x8,x19,#0x104
7101bd5df0  str xzr,[x8]
7101bd5df4  mov w8,#0xffffffff
7101bd5df8  str x8,[x19, #0x128]
7101bd5dfc  str w8,[x19, #0x130]
7101bd5e00  mov w8,#0x2
7101bd5e04  str wzr,[x19, #0x124]
7101bd5e08  stur xzr,[x19, #0xfc]
7101bd5e0c  stur xzr,[x19, #0xf4]
7101bd5e10  stur xzr,[x19, #0xec]
7101bd5e14  stur xzr,[x19, #0xe4]
7101bd5e18  stur xzr,[x19, #0xdc]
7101bd5e1c  strb wzr,[x19, #0x134]
7101bd5e20  str w8,[x19, #0xd8]
7101bd5e24  ldr x0,[sp, #0x90]
7101bd5e28  cbnz x0,0x7101bd5d84
7101bd5e2c  b 0x7101bd5d8c
7101bd5e30  adrp x0,0x7105314000
7101bd5e34  add x0,x0,#0x4d8
7101bd5e38  bl 0x71039c06b0
7101bd5e3c  cbz w0,0x7101bd4748
7101bd5e40  bl 0x7101764000
7101bd5e44  adrp x0,0x7101763000
7101bd5e48  add x0,x0,#0xc40
7101bd5e4c  adrp x1,0x71052c5000
7101bd5e50  add x1,x1,#0x180
7101bd5e54  adrp x2,0x7104f17000
7101bd5e58  add x2,x2,#0x0
7101bd5e5c  bl 0x71000001c0
7101bd5e60  adrp x0,0x7105314000
7101bd5e64  add x0,x0,#0x4d8
7101bd5e68  bl 0x71039c06c0
7101bd5e6c  b 0x7101bd4748
7101bd5e70  mov x0,x27
7101bd5e74  bl 0x71039c1330
7101bd5e78  add x0,x0,#0x180
7101bd5e7c  bl 0x71039c1330
7101bd5e80  ldr x0,[sp, #0x20]
7101bd5e84  bl 0x71039c1330
7101bd5e88  add x0,x8,#0x180
7101bd5e8c  bl 0x71039c1330
7101bd5e90  bl 0x71039c2650
7101bd5e94  add x0,sp,#0x90
7101bd5e98  bl 0x71039c0c00
7101bd5e9c  add x0,sp,#0x90
7101bd5ea0  bl 0x71039c1330
7101bd5ea4  mov x0,x20
7101bd5ea8  bl 0x71039c1330
7101bd5eac  ldr x0,[sp, #0x10]
7101bd5eb0  bl 0x71039c1330
