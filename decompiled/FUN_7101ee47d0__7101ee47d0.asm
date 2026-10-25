// addr:      7101ee47d0
// offset:    0x1ee47d0
// name:      FUN_7101ee47d0
// mangled:   
// size:      732

7101ee47d0  sub sp,sp,#0x130
7101ee47d4  str d8,[sp, #0xc0]
7101ee47d8  stp x28,x27,[sp, #0xd0]
7101ee47dc  stp x26,x25,[sp, #0xe0]
7101ee47e0  stp x24,x23,[sp, #0xf0]
7101ee47e4  stp x22,x21,[sp, #0x100]
7101ee47e8  stp x20,x19,[sp, #0x110]
7101ee47ec  stp x29,x30,[sp, #0x120]
7101ee47f0  add x29,sp,#0x120
7101ee47f4  add x8,sp,#0x70
7101ee47f8  fmov s8,0x3f800000
7101ee47fc  adrp x22,0x710523d000
7101ee4800  add x22,x22,#0x9a8
7101ee4804  add x20,x8,#0x8
7101ee4808  add x8,sp,#0x28
7101ee480c  mov x19,x0
7101ee4810  mov x27,xzr
7101ee4814  adrp x28,0x7105339000
7101ee4818  add x28,x28,#0x830
7101ee481c  adrp x23,0x710523d000
7101ee4820  add x23,x23,#0x988
7101ee4824  add x8,x8,#0x8
7101ee4828  stur x8,[x29, #-0x58]
7101ee482c  adrp x24,0x7105339000
7101ee4830  b 0x7101ee4850
7101ee4834  ldr w8,[x8, #0x58]
7101ee4838  add x0,x21,#0x130
7101ee483c  adrp x1,0x7104410000
7101ee4840  add x1,x1,#0xef8
7101ee4844  add w2,w8,#0x1
7101ee4848  bl 0x7103778430
7101ee484c  b 0x7101ee4a7c
7101ee4850  add x21,x19,x27
7101ee4854  ldr x8,[x21, #0x138]
7101ee4858  ldr x9,[x8, #0x18]
7101ee485c  ldr x9,[x9]
7101ee4860  cbz x9,0x7101ee487c
7101ee4864  ldr q0,[x21, #0x160]
7101ee4868  ldrb w8,[x9, #0x58]
7101ee486c  orr w8,w8,#0x10
7101ee4870  str d0,[x9, #0x30]
7101ee4874  strb w8,[x9, #0x58]
7101ee4878  ldr x8,[x21, #0x138]
7101ee487c  ldr x8,[x8, #0x8]
7101ee4880  cbz x8,0x7101ee48a8
7101ee4884  ldr x8,[x8, #0x18]
7101ee4888  cbz x8,0x7101ee48a8
7101ee488c  ldr w9,[x21, #0x150]
7101ee4890  ldrb w10,[x8, #0x58]
7101ee4894  cmp w9,#0x3
7101ee4898  cset w9,eq
7101ee489c  and w10,w10,#0xfe
7101ee48a0  orr w9,w10,w9
7101ee48a4  strb w9,[x8, #0x58]
7101ee48a8  add x25,x21,#0x140
7101ee48ac  add x0,sp,#0x18
7101ee48b0  mov x1,x25
7101ee48b4  bl 0x7103776390
7101ee48b8  ldrsw x26,[x21, #0x120]
7101ee48bc  cmn w26,#0x1
7101ee48c0  b.eq 0x7101ee4918
7101ee48c4  cmp w26,#0x9
7101ee48c8  b.hi 0x7101ee48f0
7101ee48cc  ldr x8,[x24, #0x8b0]
7101ee48d0  ldrb w9,[x8, #0x8]
7101ee48d4  mov x8,x28
7101ee48d8  cbz w9,0x7101ee48f4
7101ee48dc  adrp x8,0x7105339000
7101ee48e0  add x8,x8,#0x860
7101ee48e4  ldr x8,[x8, x26, LSL #0x3]
7101ee48e8  cbnz x8,0x7101ee48f4
7101ee48ec  b 0x7101ee4918
7101ee48f0  mov x8,x28
7101ee48f4  ldr x8,[x8, #0x10]
7101ee48f8  ldr w8,[x8, #0x9c]
7101ee48fc  sub w8,w8,#0x1
7101ee4900  cmp w8,#0x6
7101ee4904  b.hi 0x7101ee4918
7101ee4908  adrp x9,0x7104753000
7101ee490c  add x9,x9,#0xde0
7101ee4910  ldr w1,[x9, w8, SXTW #0x2]
7101ee4914  b 0x7101ee491c
7101ee4918  mov w1,wzr
7101ee491c  add x0,sp,#0x70
7101ee4920  bl 0x710339d9f0
7101ee4924  ldr x0,[sp, #0x20]
7101ee4928  mov v0.16B,v8.16B
7101ee492c  mov x1,x20
7101ee4930  bl 0x7103778300
7101ee4934  cmp w26,#0x9
7101ee4938  b.hi 0x7101ee4960
7101ee493c  ldr x8,[x24, #0x8b0]
7101ee4940  ldrb w9,[x8, #0x8]
7101ee4944  mov x8,x28
7101ee4948  cbz w9,0x7101ee4964
7101ee494c  adrp x8,0x7105339000
7101ee4950  add x8,x8,#0x860
7101ee4954  ldr x8,[x8, x26, LSL #0x3]
7101ee4958  cbnz x8,0x7101ee4964
7101ee495c  b 0x7101ee49d8
7101ee4960  mov x8,x28
7101ee4964  ldr x0,[x8, #0x10]
7101ee4968  ldrb w8,[x0, #0xb8]
7101ee496c  cbz w8,0x7101ee49d8
7101ee4970  ldr x8,[x0]
7101ee4974  ldr x8,[x8, #0x20]
7101ee4978  blr x8
7101ee497c  sub w8,w0,#0x1
7101ee4980  and w9,w8,#0xff
7101ee4984  cmp w9,#0xe
7101ee4988  b.hi 0x7101ee49d8
7101ee498c  sxtb x8,w8
7101ee4990  mov w9,#0x2e8a
7101ee4994  lsr x9,x9,x8
7101ee4998  tbnz w9,#0x0,0x7101ee49d8
7101ee499c  adrp x9,0x7104753000
7101ee49a0  add x9,x9,#0xe00
7101ee49a4  adrp x0,0x71042b2000
7101ee49a8  add x0,x0,#0x952
7101ee49ac  ldr w8,[x9, x8, LSL #0x2]
7101ee49b0  add w1,w8,#0x1
7101ee49b4  add x8,sp,#0x28
7101ee49b8  bl 0x71003a4ca0
7101ee49bc  ldr w8,[sp, #0x2c]
7101ee49c0  cbz w8,0x7101ee49e8
7101ee49c4  ldr x0,[sp, #0x20]
7101ee49c8  ldur x1,[x29, #-0x58]
7101ee49cc  mov v0.16B,v8.16B
7101ee49d0  bl 0x7103778300
7101ee49d4  b 0x7101ee49e8
7101ee49d8  mov w8,#0x9dc5
7101ee49dc  movk w8,#0x811c, LSL #16
7101ee49e0  strb wzr,[sp, #0x30]
7101ee49e4  str x8,[sp, #0x28]
7101ee49e8  ldr x26,[sp, #0x20]
7101ee49ec  stp x23,xzr,[sp, #0x18]
7101ee49f0  cbz x26,0x7101ee4a0c
7101ee49f4  ldr x0,[x26, #0x18]
7101ee49f8  stp x22,xzr,[x26, #0x10]
7101ee49fc  cbz x0,0x7101ee4a04
7101ee4a00  bl 0x710392eb40
7101ee4a04  mov x0,x26
7101ee4a08  bl 0x710392eb40
7101ee4a0c  add x0,sp,#0x8
7101ee4a10  mov x1,x25
7101ee4a14  bl 0x7103776390
7101ee4a18  ldr w1,[x21, #0x120]
7101ee4a1c  add x0,sp,#0x8
7101ee4a20  bl 0x710337d0d0
7101ee4a24  ldr x25,[sp, #0x10]
7101ee4a28  stp x23,xzr,[sp, #0x8]
7101ee4a2c  cbz x25,0x7101ee4a48
7101ee4a30  ldr x0,[x25, #0x18]
7101ee4a34  stp x22,xzr,[x25, #0x10]
7101ee4a38  cbz x0,0x7101ee4a40
7101ee4a3c  bl 0x710392eb40
7101ee4a40  mov x0,x25
7101ee4a44  bl 0x710392eb40
7101ee4a48  ldr x8,[x21, #0x178]
7101ee4a4c  cbz x8,0x7101ee4a68
7101ee4a50  ldrb w9,[x8, #0xc8]
7101ee4a54  cbz w9,0x7101ee4a68
7101ee4a58  ldr x8,[x8]
7101ee4a5c  ldr w9,[x8, #0x68]
7101ee4a60  cmn w9,#0x1
7101ee4a64  b.eq 0x7101ee4834
7101ee4a68  ldr x0,[x21, #0x138]
7101ee4a6c  mov v0.16B,v8.16B
7101ee4a70  adrp x1,0x7104413000
7101ee4a74  add x1,x1,#0x119
7101ee4a78  bl 0x7103778300
7101ee4a7c  add x27,x27,#0x60
7101ee4a80  cmp x27,#0x360
7101ee4a84  b.ne 0x7101ee4850
7101ee4a88  ldr d8,[sp, #0xc0]
7101ee4a8c  ldp x29,x30,[sp, #0x120]
7101ee4a90  ldp x20,x19,[sp, #0x110]
7101ee4a94  ldp x22,x21,[sp, #0x100]
7101ee4a98  ldp x24,x23,[sp, #0xf0]
7101ee4a9c  ldp x26,x25,[sp, #0xe0]
7101ee4aa0  ldp x28,x27,[sp, #0xd0]
7101ee4aa4  add sp,sp,#0x130
7101ee4aa8  ret
