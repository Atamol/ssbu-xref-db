// addr:      7101da43b0
// offset:    0x1da43b0
// name:      FUN_7101da43b0
// mangled:   
// size:      3080

7101da43b0  sub sp,sp,#0x130
7101da43b4  stp x28,x25,[sp, #0xe0]
7101da43b8  stp x24,x23,[sp, #0xf0]
7101da43bc  stp x22,x21,[sp, #0x100]
7101da43c0  stp x20,x19,[sp, #0x110]
7101da43c4  stp x29,x30,[sp, #0x120]
7101da43c8  add x29,sp,#0x120
7101da43cc  ldr w8,[x0, #0x774]
7101da43d0  mov x19,x0
7101da43d4  cbz w8,0x7101da45a0
7101da43d8  ldrb w8,[x19, #0x44e]
7101da43dc  cbz w8,0x7101da4640
7101da43e0  ldr x8,[x19, #0x80]
7101da43e4  ldr w8,[x8, #0x254]
7101da43e8  sub w21,w8,#0x14
7101da43ec  add x0,x19,#0x50
7101da43f0  adrp x1,0x7104433000
7101da43f4  add x1,x1,#0x603
7101da43f8  sub x8,x29,#0x50
7101da43fc  bl 0x7103776640
7101da4400  adrp x1,0x7104270000
7101da4404  add x1,x1,#0x51a
7101da4408  sub x8,x29,#0x60
7101da440c  sub x0,x29,#0x50
7101da4410  mov w2,w21
7101da4414  bl 0x7103776640
7101da4418  ldur x20,[x29, #-0x58]
7101da441c  ldr x22,[x20, #0x8]
7101da4420  cbz x22,0x7101da4474
7101da4424  adrp x1,0x710436c000
7101da4428  add x1,x1,#0x90a
7101da442c  mov x0,x22
7101da4430  bl 0x71037964b0
7101da4434  cbz x0,0x7101da4450
7101da4438  ldr x8,[x0]
7101da443c  ldr x8,[x8, #0x138]
7101da4440  blr x8
7101da4444  tbz w0,#0x0,0x7101da453c
7101da4448  ldr x22,[x20, #0x8]
7101da444c  cbz x22,0x7101da4474
7101da4450  adrp x1,0x710436c000
7101da4454  add x1,x1,#0x90a
7101da4458  mov x0,x22
7101da445c  bl 0x71037964b0
7101da4460  cbz x0,0x7101da4474
7101da4464  ldr x8,[x0]
7101da4468  ldr x8,[x8, #0x1a0]
7101da446c  fmov s0,wzr
7101da4470  blr x8
7101da4474  adrp x8,0x71050c0000
7101da4478  add x8,x8,#0xb38
7101da447c  mov x23,#-0x1
7101da4480  sub x22,x29,#0x80
7101da4484  stp x8,x23,[x29, #-0x80]
7101da4488  orr w8,wzr,#0xffff
7101da448c  sturh wzr,[x29, #-0x6c]
7101da4490  stur wzr,[x29, #-0x70]
7101da4494  stur w8,[x22, #0x16]
7101da4498  sturb wzr,[x29, #-0x66]
7101da449c  ldr w8,[x19, #0xe0]
7101da44a0  cmp w8,#0x4
7101da44a4  b.cs 0x7101da4fb4
7101da44a8  mov w9,#0x54
7101da44ac  madd x8,x8,x9,x19
7101da44b0  add x1,x8,#0x268
7101da44b4  sub x0,x29,#0x80
7101da44b8  bl 0x7102529a70
7101da44bc  sub x0,x29,#0x80
7101da44c0  mov w1,w21
7101da44c4  bl 0x710252a950
7101da44c8  mov w8,#0xffffffff
7101da44cc  str w8,[sp, #0x8c]
7101da44d0  ldurh w8,[x29, #-0x78]
7101da44d4  str x23,[sp, #0x48]
7101da44d8  strh w8,[sp, #0x4a]
7101da44dc  ldur w8,[x22, #0xa]
7101da44e0  str w8,[sp, #0x4c]
7101da44e4  ldurh w8,[x29, #-0x72]
7101da44e8  add x1,sp,#0x48
7101da44ec  mov x0,x19
7101da44f0  stur xzr,[sp, #0x54]
7101da44f4  strh wzr,[sp, #0x5c]
7101da44f8  strb wzr,[sp, #0x90]
7101da44fc  str wzr,[sp, #0x94]
7101da4500  strb wzr,[sp, #0x98]
7101da4504  strh w8,[sp, #0x50]
7101da4508  bl 0x7101da9670
7101da450c  ldr w1,[x19, #0xe0]
7101da4510  add x2,sp,#0x48
7101da4514  mov x0,x19
7101da4518  mov w3,wzr
7101da451c  bl 0x7101da9e30
7101da4520  strb wzr,[x19, #0x44e]
7101da4524  adrp x8,0x710593b000
7101da4528  ldr x8,[x8, #0x988]
7101da452c  ldr x8,[x8, #0x8]
7101da4530  ldr w9,[x8]
7101da4534  and w9,w9,#0xfffffffd
7101da4538  str w9,[x8]
7101da453c  adrp x19,0x710523d000
7101da4540  add x19,x19,#0x988
7101da4544  stp x19,xzr,[x29, #-0x60]
7101da4548  cbz x20,0x7101da456c
7101da454c  ldr x0,[x20, #0x18]
7101da4550  adrp x8,0x710523d000
7101da4554  add x8,x8,#0x9a8
7101da4558  stp x8,xzr,[x20, #0x10]
7101da455c  cbz x0,0x7101da4564
7101da4560  bl 0x710392eb40
7101da4564  mov x0,x20
7101da4568  bl 0x710392eb40
7101da456c  stur x19,[x29, #-0x50]
7101da4570  ldur x19,[x29, #-0x48]
7101da4574  stur xzr,[x29, #-0x48]
7101da4578  cbz x19,0x7101da4f98
7101da457c  ldr x0,[x19, #0x18]
7101da4580  adrp x8,0x710523d000
7101da4584  add x8,x8,#0x9a8
7101da4588  stp x8,xzr,[x19, #0x10]
7101da458c  cbz x0,0x7101da4594
7101da4590  bl 0x710392eb40
7101da4594  mov x0,x19
7101da4598  bl 0x710392eb40
7101da459c  b 0x7101da4f98
7101da45a0  mov x0,x19
7101da45a4  bl 0x7101da5650
7101da45a8  ldr x0,[x19, #0x70]
7101da45ac  ldr x8,[x0]
7101da45b0  ldr x8,[x8, #0x70]
7101da45b4  mov w1,wzr
7101da45b8  blr x8
7101da45bc  ldr x0,[x19, #0x80]
7101da45c0  ldr x8,[x0]
7101da45c4  ldr x8,[x8, #0x70]
7101da45c8  mov w1,#0x1
7101da45cc  blr x8
7101da45d0  ldr x0,[x19, #0x78]
7101da45d4  ldr x8,[x0]
7101da45d8  ldr x8,[x8, #0x70]
7101da45dc  mov w1,wzr
7101da45e0  blr x8
7101da45e4  ldr x0,[x19, #0x88]
7101da45e8  ldr x8,[x0]
7101da45ec  ldr x8,[x8, #0x70]
7101da45f0  mov w1,wzr
7101da45f4  blr x8
7101da45f8  ldr x8,[x19, #0x8]
7101da45fc  ldr x21,[x8, #0x80]
7101da4600  mov w8,#0x2268
7101da4604  ldr x0,[x21, #0x2268]
7101da4608  add x20,x21,x8
7101da460c  ldr x8,[x0]
7101da4610  ldr x8,[x8, #0x70]
7101da4614  mov w1,wzr
7101da4618  blr x8
7101da461c  mov w8,#0x11b4
7101da4620  ldrb w8,[x21, x8, LSL ]
7101da4624  cbz w8,0x7101da46d4
7101da4628  ldr x0,[x20]
7101da462c  ldr w8,[x0, #0x254]
7101da4630  cmp w8,#0x3
7101da4634  b.ne 0x7101da46e4
7101da4638  bl 0x710376b960
7101da463c  b 0x7101da46e4
7101da4640  mov x0,x19
7101da4644  bl 0x7101da5740
7101da4648  mov x20,x19
7101da464c  ldr x9,[x20, #0x70]!
7101da4650  ldrb w9,[x9, #0x280]
7101da4654  ldur x8,[x20, #-0x50]
7101da4658  ldr x8,[x8]
7101da465c  ldr x10,[x20, #0x10]
7101da4660  ldr w24,[x10, #0x254]
7101da4664  ldr x8,[x8]
7101da4668  cbz w9,0x7101da4678
7101da466c  ldr w9,[x19, #0x428]
7101da4670  cmp w9,#0x2
7101da4674  b.ne 0x7101da4890
7101da4678  ldr x8,[x8, #0x600]
7101da467c  ldrb w9,[x8, #0x4aa]
7101da4680  cbz w9,0x7101da4c08
7101da4684  ldr w10,[x8, #0x1b0]
7101da4688  and w11,w10,#0x2
7101da468c  lsl w22,w11,#0x2
7101da4690  tbnz w10,#0x1,0x7101da4c0c
7101da4694  cbz w9,0x7101da4c0c
7101da4698  ldrb w9,[x8, #0x1c0]
7101da469c  tbnz w9,#0x1,0x7101da48f4
7101da46a0  ldrb w9,[x8, #0x1d8]
7101da46a4  tbnz w9,#0x1,0x7101da491c
7101da46a8  ldrb w9,[x8, #0x1d4]
7101da46ac  tbnz w9,#0x1,0x7101da494c
7101da46b0  ldrb w8,[x8, #0x1c8]
7101da46b4  tbz w8,#0x1,0x7101da4c08
7101da46b8  ldr w8,[x19, #0x428]
7101da46bc  add x0,x19,#0x50
7101da46c0  cmp w8,#0x2
7101da46c4  b.ne 0x7101da4ba4
7101da46c8  adrp x1,0x71042a3000
7101da46cc  add x1,x1,#0x493
7101da46d0  b 0x7101da4bac
7101da46d4  orr w1,wzr,#0x3
7101da46d8  mov x0,x20
7101da46dc  mov w2,wzr
7101da46e0  bl 0x7103771a80
7101da46e4  mov x0,x19
7101da46e8  bl 0x7101da8880
7101da46ec  ldr x8,[x19, #0x80]
7101da46f0  ldr w8,[x8, #0x254]
7101da46f4  subs w20,w8,#0x14
7101da46f8  str w8,[x19, #0xd4]
7101da46fc  b.lt 0x7101da4888
7101da4700  add x0,x19,#0x50
7101da4704  adrp x1,0x7104433000
7101da4708  add x1,x1,#0x603
7101da470c  add x8,sp,#0x48
7101da4710  bl 0x7103776640
7101da4714  adrp x1,0x7104270000
7101da4718  add x1,x1,#0x51a
7101da471c  sub x8,x29,#0x80
7101da4720  add x0,sp,#0x48
7101da4724  mov w2,w20
7101da4728  bl 0x7103776640
7101da472c  adrp x1,0x7104280000
7101da4730  add x1,x1,#0xff8
7101da4734  sub x8,x29,#0x50
7101da4738  sub x0,x29,#0x80
7101da473c  bl 0x7103776640
7101da4740  ldur x20,[x29, #-0x48]
7101da4744  fmov s0,0x3f800000
7101da4748  adrp x1,0x7104412000
7101da474c  add x1,x1,#0xfd0
7101da4750  mov x0,x20
7101da4754  bl 0x7103778300
7101da4758  adrp x21,0x710523d000
7101da475c  add x21,x21,#0x988
7101da4760  stp x21,xzr,[x29, #-0x50]
7101da4764  cbz x20,0x7101da4788
7101da4768  ldr x0,[x20, #0x18]
7101da476c  adrp x8,0x710523d000
7101da4770  add x8,x8,#0x9a8
7101da4774  stp x8,xzr,[x20, #0x10]
7101da4778  cbz x0,0x7101da4780
7101da477c  bl 0x710392eb40
7101da4780  mov x0,x20
7101da4784  bl 0x710392eb40
7101da4788  adrp x1,0x7104319000
7101da478c  add x1,x1,#0x353
7101da4790  sub x8,x29,#0x50
7101da4794  sub x0,x29,#0x80
7101da4798  bl 0x7103776640
7101da479c  ldur x20,[x29, #-0x48]
7101da47a0  fmov s0,0x3f800000
7101da47a4  adrp x1,0x7104412000
7101da47a8  add x1,x1,#0xfd0
7101da47ac  mov x0,x20
7101da47b0  bl 0x7103778300
7101da47b4  stp x21,xzr,[x29, #-0x50]
7101da47b8  cbz x20,0x7101da47dc
7101da47bc  ldr x0,[x20, #0x18]
7101da47c0  adrp x8,0x710523d000
7101da47c4  add x8,x8,#0x9a8
7101da47c8  stp x8,xzr,[x20, #0x10]
7101da47cc  cbz x0,0x7101da47d4
7101da47d0  bl 0x710392eb40
7101da47d4  mov x0,x20
7101da47d8  bl 0x710392eb40
7101da47dc  adrp x1,0x7104270000
7101da47e0  add x1,x1,#0x533
7101da47e4  sub x8,x29,#0x50
7101da47e8  sub x0,x29,#0x80
7101da47ec  bl 0x7103776640
7101da47f0  ldur x20,[x29, #-0x48]
7101da47f4  fmov s0,0x3f800000
7101da47f8  adrp x1,0x7104412000
7101da47fc  add x1,x1,#0xfd0
7101da4800  mov x0,x20
7101da4804  bl 0x7103778300
7101da4808  stp x21,xzr,[x29, #-0x50]
7101da480c  cbz x20,0x7101da4830
7101da4810  ldr x0,[x20, #0x18]
7101da4814  adrp x8,0x710523d000
7101da4818  add x8,x8,#0x9a8
7101da481c  stp x8,xzr,[x20, #0x10]
7101da4820  cbz x0,0x7101da4828
7101da4824  bl 0x710392eb40
7101da4828  mov x0,x20
7101da482c  bl 0x710392eb40
7101da4830  ldur x20,[x29, #-0x78]
7101da4834  stp x21,xzr,[x29, #-0x80]
7101da4838  cbz x20,0x7101da485c
7101da483c  ldr x0,[x20, #0x18]
7101da4840  adrp x8,0x710523d000
7101da4844  add x8,x8,#0x9a8
7101da4848  stp x8,xzr,[x20, #0x10]
7101da484c  cbz x0,0x7101da4854
7101da4850  bl 0x710392eb40
7101da4854  mov x0,x20
7101da4858  bl 0x710392eb40
7101da485c  ldr x20,[sp, #0x50]
7101da4860  stp x21,xzr,[sp, #0x48]
7101da4864  cbz x20,0x7101da4888
7101da4868  ldr x0,[x20, #0x18]
7101da486c  adrp x8,0x710523d000
7101da4870  add x8,x8,#0x9a8
7101da4874  stp x8,xzr,[x20, #0x10]
7101da4878  cbz x0,0x7101da4880
7101da487c  bl 0x710392eb40
7101da4880  mov x0,x20
7101da4884  bl 0x710392eb40
7101da4888  strb wzr,[x19, #0x44e]
7101da488c  b 0x7101da4f98
7101da4890  ldr x8,[x19, #0x8]
7101da4894  ldr x21,[x8, #0x80]
7101da4898  ldrb w8,[x21, #0xc9]
7101da489c  mov w9,#0x2260
7101da48a0  add x0,x21,x9
7101da48a4  cbz w8,0x7101da48b0
7101da48a8  mov w1,wzr
7101da48ac  b 0x7101da48b4
7101da48b0  mov w1,#0x4
7101da48b4  mov w2,wzr
7101da48b8  bl 0x7103771be0
7101da48bc  ldr x8,[x21, #0x2260]
7101da48c0  ldr w8,[x8, #0x25c]
7101da48c4  str w8,[x21, #0x2270]
7101da48c8  ldr x0,[x20]
7101da48cc  ldr x8,[x0]
7101da48d0  ldr x8,[x8, #0x70]
7101da48d4  mov w1,#0x1
7101da48d8  blr x8
7101da48dc  mov w1,#0x1
7101da48e0  mov x0,x20
7101da48e4  mov w2,wzr
7101da48e8  bl 0x7103771a80
7101da48ec  mov w22,#0x5
7101da48f0  b 0x7101da4c0c
7101da48f4  cmp w24,#0x16
7101da48f8  b.eq 0x7101da4990
7101da48fc  cmp w24,#0x15
7101da4900  b.eq 0x7101da49a0
7101da4904  cmp w24,#0x14
7101da4908  b.ne 0x7101da4c08
7101da490c  ldrsh w8,[x19, #0xa8]
7101da4910  cmn w8,#0x1
7101da4914  b.ne 0x7101da49ac
7101da4918  b 0x7101da4c08
7101da491c  ldr w8,[x19, #0xb4]
7101da4920  add w8,w8,#0x13
7101da4924  cmp w24,w8
7101da4928  b.ne 0x7101da4c08
7101da492c  ldr w8,[x19, #0xd4]
7101da4930  cmp w8,w24
7101da4934  b.ne 0x7101da4c08
7101da4938  ldr w8,[x19, #0x428]
7101da493c  cmp w8,#0x2
7101da4940  orr w8,wzr,#0x6
7101da4944  cinc w22,w8,eq
7101da4948  b 0x7101da4c0c
7101da494c  cmp w24,#0x14
7101da4950  b.ne 0x7101da4c08
7101da4954  ldr w8,[x19, #0xd4]
7101da4958  cmp w8,#0x14
7101da495c  b.ne 0x7101da4c08
7101da4960  mov x21,x19
7101da4964  ldr x0,[x21, #0x78]!
7101da4968  ldr x8,[x0]
7101da496c  ldr x8,[x8, #0x70]
7101da4970  mov w1,#0x1
7101da4974  blr x8
7101da4978  mov w1,#0xb
7101da497c  mov x0,x21
7101da4980  mov w2,wzr
7101da4984  bl 0x7103771a80
7101da4988  mov w22,#0xa
7101da498c  b 0x7101da4c0c
7101da4990  ldrsh w8,[x19, #0xac]
7101da4994  cmn w8,#0x1
7101da4998  b.ne 0x7101da49ac
7101da499c  b 0x7101da4c08
7101da49a0  ldrsh w8,[x19, #0xaa]
7101da49a4  cmn w8,#0x1
7101da49a8  b.eq 0x7101da4c08
7101da49ac  adrp x8,0x710532f000
7101da49b0  ldr x8,[x8, #0x8d0]
7101da49b4  ldr x0,[x8, #0x8]
7101da49b8  ldp x8,x9,[x0, #0x40]
7101da49bc  sub x9,x9,x8
7101da49c0  asr x9,x9,#0x3
7101da49c4  cmp x9,#0x3
7101da49c8  b.cc 0x7101da49d4
7101da49cc  ldr x22,[x8, #0x10]
7101da49d0  b 0x7101da49d8
7101da49d4  mov x22,xzr
7101da49d8  ldrb w8,[x0, #0x191]
7101da49dc  sub w21,w24,#0x14
7101da49e0  cbnz w8,0x7101da4a54
7101da49e4  mov w2,#0x4
7101da49e8  mov x1,x22
7101da49ec  bl 0x7103313f20
7101da49f0  tbz w0,#0x0,0x7101da4a54
7101da49f4  add x0,sp,#0x8
7101da49f8  mov x1,x22
7101da49fc  bl 0x71024076d0
7101da4a00  ldr x8,[sp, #0x18]
7101da4a04  adrp x9,0x7104f73000
7101da4a08  add x9,x9,#0xd50
7101da4a0c  str x9,[sp, #0x10]
7101da4a10  cbz x8,0x7101da4a80
7101da4a14  adrp x8,0x7106dd5000
7101da4a18  ldrb w8,[x8, #0x3a8]
7101da4a1c  cmp w8,#0x1
7101da4a20  b.ne 0x7101da4a80
7101da4a24  adrp x9,0x7106dd5000
7101da4a28  ldr w8,[sp, #0x20]
7101da4a2c  ldr w9,[x9, #0x3ac]
7101da4a30  cmp w8,w9
7101da4a34  b.ne 0x7101da4a80
7101da4a38  ldr x8,[sp, #0x18]
7101da4a3c  ldr wzr,[x8, #0x38]!
7101da4a40  ldaxr w9,[x8]
7101da4a44  sub w9,w9,#0x1
7101da4a48  stlxr w10,w9,[x8]
7101da4a4c  cbnz w10,0x7101da4a40
7101da4a50  b 0x7101da4a80
7101da4a54  mov x8,#0x650000000000
7101da4a58  movk x8,#0x87, LSL #48
7101da4a5c  strb wzr,[sp, #0x28]
7101da4a60  stp xzr,x8,[sp, #0x18]
7101da4a64  mov x8,#-0x1
7101da4a68  stp x8,xzr,[sp, #0x30]
7101da4a6c  adrp x8,0x7104f73000
7101da4a70  add x8,x8,#0xd50
7101da4a74  str wzr,[sp, #0x8]
7101da4a78  str xzr,[sp, #0x40]
7101da4a7c  str x8,[sp, #0x10]
7101da4a80  add x22,x19,#0x50
7101da4a84  adrp x1,0x7104308000
7101da4a88  add x1,x1,#0x9ba
7101da4a8c  add x8,sp,#0x48
7101da4a90  mov x0,x22
7101da4a94  str xzr,[sp, #0x18]
7101da4a98  strb wzr,[sp, #0x28]
7101da4a9c  bl 0x7103776640
7101da4aa0  ldr x23,[sp, #0x50]
7101da4aa4  fmov s0,0x3f800000
7101da4aa8  adrp x1,0x71042a3000
7101da4aac  add x1,x1,#0x57e
7101da4ab0  mov x0,x23
7101da4ab4  bl 0x7103778300
7101da4ab8  adrp x25,0x710523d000
7101da4abc  add x25,x25,#0x988
7101da4ac0  stp x25,xzr,[sp, #0x48]
7101da4ac4  cbz x23,0x7101da4ae8
7101da4ac8  ldr x0,[x23, #0x18]
7101da4acc  adrp x8,0x710523d000
7101da4ad0  add x8,x8,#0x9a8
7101da4ad4  stp x8,xzr,[x23, #0x10]
7101da4ad8  cbz x0,0x7101da4ae0
7101da4adc  bl 0x710392eb40
7101da4ae0  mov x0,x23
7101da4ae4  bl 0x710392eb40
7101da4ae8  adrp x1,0x7104433000
7101da4aec  add x1,x1,#0x603
7101da4af0  add x8,sp,#0x48
7101da4af4  mov x0,x22
7101da4af8  bl 0x7103776640
7101da4afc  adrp x1,0x7104270000
7101da4b00  add x1,x1,#0x51a
7101da4b04  sub x8,x29,#0x80
7101da4b08  add x0,sp,#0x48
7101da4b0c  mov w2,w21
7101da4b10  bl 0x7103776640
7101da4b14  ldur x21,[x29, #-0x78]
7101da4b18  fmov s0,0x3f800000
7101da4b1c  adrp x1,0x710436c000
7101da4b20  add x1,x1,#0x90a
7101da4b24  mov x0,x21
7101da4b28  bl 0x7103778300
7101da4b2c  mov w8,#0x1
7101da4b30  strb w8,[x19, #0x44e]
7101da4b34  adrp x8,0x710593b000
7101da4b38  ldr x8,[x8, #0x988]
7101da4b3c  ldr x8,[x8, #0x8]
7101da4b40  ldr w9,[x8]
7101da4b44  orr w9,w9,#0x2
7101da4b48  str w9,[x8]
7101da4b4c  stp x25,xzr,[x29, #-0x80]
7101da4b50  cbz x21,0x7101da4b74
7101da4b54  ldr x0,[x21, #0x18]
7101da4b58  adrp x8,0x710523d000
7101da4b5c  add x8,x8,#0x9a8
7101da4b60  stp x8,xzr,[x21, #0x10]
7101da4b64  cbz x0,0x7101da4b6c
7101da4b68  bl 0x710392eb40
7101da4b6c  mov x0,x21
7101da4b70  bl 0x710392eb40
7101da4b74  ldr x21,[sp, #0x50]
7101da4b78  stp x25,xzr,[sp, #0x48]
7101da4b7c  cbz x21,0x7101da4c08
7101da4b80  ldr x0,[x21, #0x18]
7101da4b84  adrp x8,0x710523d000
7101da4b88  add x8,x8,#0x9a8
7101da4b8c  stp x8,xzr,[x21, #0x10]
7101da4b90  cbz x0,0x7101da4b98
7101da4b94  bl 0x710392eb40
7101da4b98  mov x0,x21
7101da4b9c  bl 0x710392eb40
7101da4ba0  b 0x7101da4c08
7101da4ba4  adrp x1,0x71042c5000
7101da4ba8  add x1,x1,#0x330
7101da4bac  add x8,sp,#0x48
7101da4bb0  bl 0x7103776640
7101da4bb4  ldr x21,[sp, #0x50]
7101da4bb8  fmov s0,0x3f800000
7101da4bbc  adrp x1,0x71042a3000
7101da4bc0  add x1,x1,#0x57e
7101da4bc4  mov x0,x21
7101da4bc8  bl 0x7103778300
7101da4bcc  adrp x8,0x710523d000
7101da4bd0  add x8,x8,#0x988
7101da4bd4  stp x8,xzr,[sp, #0x48]
7101da4bd8  cbz x21,0x7101da4bfc
7101da4bdc  ldr x0,[x21, #0x18]
7101da4be0  adrp x8,0x710523d000
7101da4be4  add x8,x8,#0x9a8
7101da4be8  stp x8,xzr,[x21, #0x10]
7101da4bec  cbz x0,0x7101da4bf4
7101da4bf0  bl 0x710392eb40
7101da4bf4  mov x0,x21
7101da4bf8  bl 0x710392eb40
7101da4bfc  mov x0,x19
7101da4c00  mov w1,wzr
7101da4c04  bl 0x7101dab570
7101da4c08  mov w22,wzr
7101da4c0c  ldr w8,[x19, #0xd4]
7101da4c10  cmp w8,w24
7101da4c14  b.eq 0x7101da4f00
7101da4c18  add x0,x19,#0x50
7101da4c1c  adrp x1,0x7104433000
7101da4c20  add x1,x1,#0x603
7101da4c24  add x8,sp,#0x48
7101da4c28  bl 0x7103776640
7101da4c2c  ldr w8,[x19, #0xd4]
7101da4c30  subs w2,w8,#0x14
7101da4c34  b.lt 0x7101da4d7c
7101da4c38  adrp x1,0x7104270000
7101da4c3c  add x1,x1,#0x51a
7101da4c40  sub x8,x29,#0x80
7101da4c44  add x0,sp,#0x48
7101da4c48  bl 0x7103776640
7101da4c4c  adrp x1,0x7104280000
7101da4c50  add x1,x1,#0xff8
7101da4c54  sub x8,x29,#0x50
7101da4c58  sub x0,x29,#0x80
7101da4c5c  bl 0x7103776640
7101da4c60  ldur x21,[x29, #-0x48]
7101da4c64  fmov s0,0x3f800000
7101da4c68  adrp x1,0x710435b000
7101da4c6c  add x1,x1,#0xe3c
7101da4c70  mov x0,x21
7101da4c74  bl 0x7103778300
7101da4c78  adrp x23,0x710523d000
7101da4c7c  add x23,x23,#0x988
7101da4c80  stp x23,xzr,[x29, #-0x50]
7101da4c84  cbz x21,0x7101da4ca8
7101da4c88  ldr x0,[x21, #0x18]
7101da4c8c  adrp x8,0x710523d000
7101da4c90  add x8,x8,#0x9a8
7101da4c94  stp x8,xzr,[x21, #0x10]
7101da4c98  cbz x0,0x7101da4ca0
7101da4c9c  bl 0x710392eb40
7101da4ca0  mov x0,x21
7101da4ca4  bl 0x710392eb40
7101da4ca8  adrp x1,0x7104319000
7101da4cac  add x1,x1,#0x353
7101da4cb0  sub x8,x29,#0x50
7101da4cb4  sub x0,x29,#0x80
7101da4cb8  bl 0x7103776640
7101da4cbc  ldur x21,[x29, #-0x48]
7101da4cc0  fmov s0,0x3f800000
7101da4cc4  adrp x1,0x710435b000
7101da4cc8  add x1,x1,#0xe3c
7101da4ccc  mov x0,x21
7101da4cd0  bl 0x7103778300
7101da4cd4  stp x23,xzr,[x29, #-0x50]
7101da4cd8  cbz x21,0x7101da4cfc
7101da4cdc  ldr x0,[x21, #0x18]
7101da4ce0  adrp x8,0x710523d000
7101da4ce4  add x8,x8,#0x9a8
7101da4ce8  stp x8,xzr,[x21, #0x10]
7101da4cec  cbz x0,0x7101da4cf4
7101da4cf0  bl 0x710392eb40
7101da4cf4  mov x0,x21
7101da4cf8  bl 0x710392eb40
7101da4cfc  adrp x1,0x7104270000
7101da4d00  add x1,x1,#0x533
7101da4d04  sub x8,x29,#0x50
7101da4d08  sub x0,x29,#0x80
7101da4d0c  bl 0x7103776640
7101da4d10  ldur x21,[x29, #-0x48]
7101da4d14  fmov s0,0x3f800000
7101da4d18  adrp x1,0x710435b000
7101da4d1c  add x1,x1,#0xe3c
7101da4d20  mov x0,x21
7101da4d24  bl 0x7103778300
7101da4d28  stp x23,xzr,[x29, #-0x50]
7101da4d2c  cbz x21,0x7101da4d50
7101da4d30  ldr x0,[x21, #0x18]
7101da4d34  adrp x8,0x710523d000
7101da4d38  add x8,x8,#0x9a8
7101da4d3c  stp x8,xzr,[x21, #0x10]
7101da4d40  cbz x0,0x7101da4d48
7101da4d44  bl 0x710392eb40
7101da4d48  mov x0,x21
7101da4d4c  bl 0x710392eb40
7101da4d50  ldur x21,[x29, #-0x78]
7101da4d54  stp x23,xzr,[x29, #-0x80]
7101da4d58  cbz x21,0x7101da4d7c
7101da4d5c  ldr x0,[x21, #0x18]
7101da4d60  adrp x8,0x710523d000
7101da4d64  add x8,x8,#0x9a8
7101da4d68  stp x8,xzr,[x21, #0x10]
7101da4d6c  cbz x0,0x7101da4d74
7101da4d70  bl 0x710392eb40
7101da4d74  mov x0,x21
7101da4d78  bl 0x710392eb40
7101da4d7c  subs w2,w24,#0x14
7101da4d80  b.lt 0x7101da4ec8
7101da4d84  adrp x1,0x7104270000
7101da4d88  add x1,x1,#0x51a
7101da4d8c  sub x8,x29,#0x80
7101da4d90  add x0,sp,#0x48
7101da4d94  bl 0x7103776640
7101da4d98  adrp x1,0x7104280000
7101da4d9c  add x1,x1,#0xff8
7101da4da0  sub x8,x29,#0x50
7101da4da4  sub x0,x29,#0x80
7101da4da8  bl 0x7103776640
7101da4dac  ldur x21,[x29, #-0x48]
7101da4db0  fmov s0,0x3f800000
7101da4db4  adrp x1,0x7104412000
7101da4db8  add x1,x1,#0xfd0
7101da4dbc  mov x0,x21
7101da4dc0  bl 0x7103778300
7101da4dc4  adrp x23,0x710523d000
7101da4dc8  add x23,x23,#0x988
7101da4dcc  stp x23,xzr,[x29, #-0x50]
7101da4dd0  cbz x21,0x7101da4df4
7101da4dd4  ldr x0,[x21, #0x18]
7101da4dd8  adrp x8,0x710523d000
7101da4ddc  add x8,x8,#0x9a8
7101da4de0  stp x8,xzr,[x21, #0x10]
7101da4de4  cbz x0,0x7101da4dec
7101da4de8  bl 0x710392eb40
7101da4dec  mov x0,x21
7101da4df0  bl 0x710392eb40
7101da4df4  adrp x1,0x7104319000
7101da4df8  add x1,x1,#0x353
7101da4dfc  sub x8,x29,#0x50
7101da4e00  sub x0,x29,#0x80
7101da4e04  bl 0x7103776640
7101da4e08  ldur x21,[x29, #-0x48]
7101da4e0c  fmov s0,0x3f800000
7101da4e10  adrp x1,0x7104412000
7101da4e14  add x1,x1,#0xfd0
7101da4e18  mov x0,x21
7101da4e1c  bl 0x7103778300
7101da4e20  stp x23,xzr,[x29, #-0x50]
7101da4e24  cbz x21,0x7101da4e48
7101da4e28  ldr x0,[x21, #0x18]
7101da4e2c  adrp x8,0x710523d000
7101da4e30  add x8,x8,#0x9a8
7101da4e34  stp x8,xzr,[x21, #0x10]
7101da4e38  cbz x0,0x7101da4e40
7101da4e3c  bl 0x710392eb40
7101da4e40  mov x0,x21
7101da4e44  bl 0x710392eb40
7101da4e48  adrp x1,0x7104270000
7101da4e4c  add x1,x1,#0x533
7101da4e50  sub x8,x29,#0x50
7101da4e54  sub x0,x29,#0x80
7101da4e58  bl 0x7103776640
7101da4e5c  ldur x21,[x29, #-0x48]
7101da4e60  fmov s0,0x3f800000
7101da4e64  adrp x1,0x7104412000
7101da4e68  add x1,x1,#0xfd0
7101da4e6c  mov x0,x21
7101da4e70  bl 0x7103778300
7101da4e74  stp x23,xzr,[x29, #-0x50]
7101da4e78  cbz x21,0x7101da4e9c
7101da4e7c  ldr x0,[x21, #0x18]
7101da4e80  adrp x8,0x710523d000
7101da4e84  add x8,x8,#0x9a8
7101da4e88  stp x8,xzr,[x21, #0x10]
7101da4e8c  cbz x0,0x7101da4e94
7101da4e90  bl 0x710392eb40
7101da4e94  mov x0,x21
7101da4e98  bl 0x710392eb40
7101da4e9c  ldur x21,[x29, #-0x78]
7101da4ea0  stp x23,xzr,[x29, #-0x80]
7101da4ea4  cbz x21,0x7101da4ec8
7101da4ea8  ldr x0,[x21, #0x18]
7101da4eac  adrp x8,0x710523d000
7101da4eb0  add x8,x8,#0x9a8
7101da4eb4  stp x8,xzr,[x21, #0x10]
7101da4eb8  cbz x0,0x7101da4ec0
7101da4ebc  bl 0x710392eb40
7101da4ec0  mov x0,x21
7101da4ec4  bl 0x710392eb40
7101da4ec8  str w24,[x19, #0xd4]
7101da4ecc  ldr x21,[sp, #0x50]
7101da4ed0  adrp x8,0x710523d000
7101da4ed4  add x8,x8,#0x988
7101da4ed8  stp x8,xzr,[sp, #0x48]
7101da4edc  cbz x21,0x7101da4f00
7101da4ee0  ldr x0,[x21, #0x18]
7101da4ee4  adrp x8,0x710523d000
7101da4ee8  add x8,x8,#0x9a8
7101da4eec  stp x8,xzr,[x21, #0x10]
7101da4ef0  cbz x0,0x7101da4ef8
7101da4ef4  bl 0x710392eb40
7101da4ef8  mov x0,x21
7101da4efc  bl 0x710392eb40
7101da4f00  ldr x0,[x20]
7101da4f04  ldr x8,[x0]
7101da4f08  ldr x8,[x8, #0x78]
7101da4f0c  blr x8
7101da4f10  tbz w0,#0x0,0x7101da4f1c
7101da4f14  mov w22,#0x8
7101da4f18  b 0x7101da4f7c
7101da4f1c  ldr x0,[x19, #0x78]
7101da4f20  ldr x8,[x0]
7101da4f24  ldr x8,[x8, #0x78]
7101da4f28  blr x8
7101da4f2c  tbz w0,#0x0,0x7101da4f38
7101da4f30  mov w22,#0xa
7101da4f34  b 0x7101da4f7c
7101da4f38  ldr x8,[x19, #0x8]
7101da4f3c  ldr x8,[x8, #0x80]
7101da4f40  ldr x0,[x8, #0x2268]
7101da4f44  ldr x8,[x0]
7101da4f48  ldr x8,[x8, #0x78]
7101da4f4c  blr x8
7101da4f50  tbz w0,#0x0,0x7101da4f68
7101da4f54  ldr w8,[x19, #0x428]
7101da4f58  cmp w8,#0x2
7101da4f5c  b.ne 0x7101da4f70
7101da4f60  orr w22,wzr,#0x7
7101da4f64  b 0x7101da4f7c
7101da4f68  cbnz w22,0x7101da4f7c
7101da4f6c  b 0x7101da4f98
7101da4f70  mov w8,#0x1
7101da4f74  strb w8,[x19, #0x44f]
7101da4f78  orr w22,wzr,#0x6
7101da4f7c  ldr x0,[x19, #0x80]
7101da4f80  bl 0x710376b960
7101da4f84  ldrsw x8,[x19, #0x76c]
7101da4f88  cmp w8,#0x13
7101da4f8c  b.cs 0x7101da4fb4
7101da4f90  add x8,x19,x8, LSL #0x2
7101da4f94  str w22,[x8, #0x720]
7101da4f98  ldp x29,x30,[sp, #0x120]
7101da4f9c  ldp x20,x19,[sp, #0x110]
7101da4fa0  ldp x22,x21,[sp, #0x100]
7101da4fa4  ldp x24,x23,[sp, #0xf0]
7101da4fa8  ldp x28,x25,[sp, #0xe0]
7101da4fac  add sp,sp,#0x130
7101da4fb0  ret
7101da4fb4  bl 0x71039c2650
