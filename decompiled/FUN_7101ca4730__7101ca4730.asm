// addr:      7101ca4730
// offset:    0x1ca4730
// name:      FUN_7101ca4730
// mangled:   
// size:      3856

7101ca4730  ldr x9,[x1]
7101ca4734  ldr x9,[x9]
7101ca4738  ldr x10,[x9]
7101ca473c  ldr w8,[x0, #0x14]
7101ca4740  ldr x9,[x10, #0x600]
7101ca4744  str w8,[x9, #0x494]
7101ca4748  ldr x9,[x10, #0x608]
7101ca474c  ldr x10,[x10, #0x610]
7101ca4750  cmp x9,x10
7101ca4754  b.eq 0x7101ca47bc
7101ca4758  sub x11,x10,#0x10
7101ca475c  sub x11,x11,x9
7101ca4760  ubfx x12,x11,#0x4,#0x1c
7101ca4764  add w12,w12,#0x1
7101ca4768  ands x12,x12,#0x3
7101ca476c  b.eq 0x7101ca4788
7101ca4770  neg x12,x12
7101ca4774  ldr x13,[x9, #0x8]
7101ca4778  add x9,x9,#0x10
7101ca477c  adds x12,x12,#0x1
7101ca4780  str w8,[x13, #0x494]
7101ca4784  b.ne 0x7101ca4774
7101ca4788  cmp x11,#0x30
7101ca478c  b.cc 0x7101ca47bc
7101ca4790  ldr x11,[x9, #0x8]
7101ca4794  str w8,[x11, #0x494]
7101ca4798  ldr x11,[x9, #0x18]
7101ca479c  str w8,[x11, #0x494]
7101ca47a0  ldr x11,[x9, #0x28]
7101ca47a4  str w8,[x11, #0x494]
7101ca47a8  ldr x11,[x9, #0x38]
7101ca47ac  add x9,x9,#0x40
7101ca47b0  cmp x10,x9
7101ca47b4  str w8,[x11, #0x494]
7101ca47b8  b.ne 0x7101ca4790
7101ca47bc  str d8,[sp, #-0x70]!
7101ca47c0  stp x28,x27,[sp, #0x10]
7101ca47c4  stp x26,x25,[sp, #0x20]
7101ca47c8  stp x24,x23,[sp, #0x30]
7101ca47cc  stp x22,x21,[sp, #0x40]
7101ca47d0  stp x20,x19,[sp, #0x50]
7101ca47d4  stp x29,x30,[sp, #0x60]
7101ca47d8  add x29,sp,#0x60
7101ca47dc  sub sp,sp,#0x3c0
7101ca47e0  ldr x9,[x1]
7101ca47e4  ldr x8,[x9]
7101ca47e8  mov x10,x8
7101ca47ec  ldr x13,[x0, #0x20]
7101ca47f0  ldr x11,[x10], #0x8
7101ca47f4  ldr x11,[x11, #0x600]
7101ca47f8  mov w12,#0x20
7101ca47fc  str w12,[x11, #0x10]
7101ca4800  ldr x11,[x9]
7101ca4804  ldr x11,[x11]
7101ca4808  ldr x11,[x11, #0x600]
7101ca480c  mov w12,#0x40
7101ca4810  str w12,[x11, #0x14]
7101ca4814  ldr x11,[x9]
7101ca4818  ldr x11,[x11]
7101ca481c  ldr x11,[x11, #0x600]
7101ca4820  mov w12,#0x8
7101ca4824  movk w12,#0x80, LSL #16
7101ca4828  str w12,[x11, #0x18]
7101ca482c  ldr x11,[x9]
7101ca4830  ldr x11,[x11]
7101ca4834  ldr x11,[x11, #0x600]
7101ca4838  mov w12,#0x2
7101ca483c  movk w12,#0x20, LSL #16
7101ca4840  str w12,[x11, #0x1c]
7101ca4844  ldr x11,[x9]
7101ca4848  ldr x11,[x11]
7101ca484c  ldr x11,[x11, #0x600]
7101ca4850  mov w12,#0x1
7101ca4854  movk w12,#0x10, LSL #16
7101ca4858  str w12,[x11, #0x20]
7101ca485c  ldr x11,[x9]
7101ca4860  ldr x11,[x11]
7101ca4864  ldr x11,[x11, #0x600]
7101ca4868  mov w12,#0x4
7101ca486c  movk w12,#0x40, LSL #16
7101ca4870  str w12,[x11, #0x24]
7101ca4874  ldr x11,[x9]
7101ca4878  ldr x11,[x11]
7101ca487c  ldr x11,[x11, #0x600]
7101ca4880  mov w12,#0x10
7101ca4884  str w12,[x11, #0x28]
7101ca4888  ldr x9,[x9]
7101ca488c  ldr x9,[x9]
7101ca4890  ldr x9,[x9, #0x600]
7101ca4894  mov w11,#0x40000
7101ca4898  str w11,[x9, #0x2c]
7101ca489c  add x9,x13,#0x118
7101ca48a0  cmp x9,x10
7101ca48a4  stur x9,[x29, #-0x58]
7101ca48a8  b.eq 0x7101ca491c
7101ca48ac  ldr x9,[x8, #0x10]
7101ca48b0  ldr x9,[x9]
7101ca48b4  ldr x10,[x13, #0x120]
7101ca48b8  str x9,[x10]
7101ca48bc  ldr x9,[x8, #0x10]
7101ca48c0  ldr x9,[x9, #0x8]
7101ca48c4  ldr x10,[x13, #0x120]
7101ca48c8  str x9,[x10, #0x8]
7101ca48cc  ldr x9,[x8, #0x10]
7101ca48d0  ldr x8,[x13, #0x120]
7101ca48d4  cmp x8,x9
7101ca48d8  b.eq 0x7101ca491c
7101ca48dc  ldr x10,[x9, #0x18]
7101ca48e0  ldr x10,[x10]
7101ca48e4  ldr x11,[x8, #0x18]
7101ca48e8  str x10,[x11]
7101ca48ec  ldr x10,[x9, #0x18]
7101ca48f0  ldr x10,[x10, #0x8]
7101ca48f4  ldr x11,[x8, #0x18]
7101ca48f8  str x10,[x11, #0x8]
7101ca48fc  ldr x10,[x9, #0x18]
7101ca4900  ldr x10,[x10, #0x10]
7101ca4904  ldr x11,[x8, #0x18]
7101ca4908  str x10,[x11, #0x10]
7101ca490c  ldr x9,[x9, #0x18]
7101ca4910  ldr x9,[x9, #0x18]
7101ca4914  ldr x8,[x8, #0x18]
7101ca4918  str x9,[x8, #0x18]
7101ca491c  ldr x19,[x13, #0x228]
7101ca4920  ldr x25,[x13, #0x230]
7101ca4924  cmp x19,x25
7101ca4928  str x13,[sp, #0x8]
7101ca492c  b.eq 0x7101ca4a1c
7101ca4930  fmov s8,0x3f800000
7101ca4934  mov w21,wzr
7101ca4938  mov w22,wzr
7101ca493c  adrp x23,0x7104422000
7101ca4940  add x23,x23,#0x4cd
7101ca4944  adrp x24,0x710436c000
7101ca4948  add x24,x24,#0x494
7101ca494c  adrp x26,0x710523d000
7101ca4950  add x26,x26,#0x988
7101ca4954  adrp x20,0x710523d000
7101ca4958  add x20,x20,#0x9a8
7101ca495c  ldur x27,[x29, #-0x58]
7101ca4960  add x8,sp,#0x280
7101ca4964  mov x1,x23
7101ca4968  mov w2,w21
7101ca496c  mov x0,x27
7101ca4970  bl 0x7103776640
7101ca4974  add x8,sp,#0x150
7101ca4978  mov x0,x27
7101ca497c  mov x1,x24
7101ca4980  mov w2,w22
7101ca4984  bl 0x7103776640
7101ca4988  ldr w8,[x19]
7101ca498c  ldr x27,[sp, #0x288]
7101ca4990  mov x0,x27
7101ca4994  cmp w8,#0x200
7101ca4998  b.ne 0x7101ca49a8
7101ca499c  adrp x1,0x71042f8000
7101ca49a0  add x1,x1,#0x3b8
7101ca49a4  b 0x7101ca49b0
7101ca49a8  adrp x1,0x7104454000
7101ca49ac  add x1,x1,#0xb44
7101ca49b0  mov v0.16B,v8.16B
7101ca49b4  bl 0x7103778300
7101ca49b8  ldr w8,[x19]
7101ca49bc  ldr x28,[sp, #0x158]
7101ca49c0  cmp w8,#0x21e
7101ca49c4  stp x26,xzr,[sp, #0x150]
7101ca49c8  cinc w21,w21,ne
7101ca49cc  cbz x28,0x7101ca49e8
7101ca49d0  ldr x0,[x28, #0x18]
7101ca49d4  stp x20,xzr,[x28, #0x10]
7101ca49d8  cbz x0,0x7101ca49e0
7101ca49dc  bl 0x710392eb40
7101ca49e0  mov x0,x28
7101ca49e4  bl 0x710392eb40
7101ca49e8  add w22,w22,#0x1
7101ca49ec  str x26,[sp, #0x280]
7101ca49f0  str xzr,[sp, #0x288]
7101ca49f4  cbz x27,0x7101ca4a10
7101ca49f8  ldr x0,[x27, #0x18]
7101ca49fc  stp x20,xzr,[x27, #0x10]
7101ca4a00  cbz x0,0x7101ca4a08
7101ca4a04  bl 0x710392eb40
7101ca4a08  mov x0,x27
7101ca4a0c  bl 0x710392eb40
7101ca4a10  add x19,x19,#0x4
7101ca4a14  cmp x25,x19
7101ca4a18  b.ne 0x7101ca495c
7101ca4a1c  mov w23,#0x101
7101ca4a20  add x8,sp,#0x18b
7101ca4a24  str xzr,[sp, #0x280]
7101ca4a28  strh w23,[sp, #0x288]
7101ca4a2c  stur wzr,[x8, #0xff]
7101ca4a30  mov w8,#0x1
7101ca4a34  str w8,[sp, #0x290]
7101ca4a38  mov x25,#0x41f0000000000000
7101ca4a3c  adrp x26,0x7105186000
7101ca4a40  add x26,x26,#0xd0
7101ca4a44  strh w8,[sp, #0x294]
7101ca4a48  add x19,sp,#0x150
7101ca4a4c  strb w8,[sp, #0x296]
7101ca4a50  add x8,sp,#0x280
7101ca4a54  add x1,x8,#0xc0
7101ca4a58  add x0,sp,#0x150
7101ca4a5c  strh wzr,[sp, #0x28e]
7101ca4a60  str x25,[sp, #0x298]
7101ca4a64  str wzr,[sp, #0x2a0]
7101ca4a68  str xzr,[sp, #0x2d0]
7101ca4a6c  str xzr,[sp, #0x300]
7101ca4a70  str xzr,[sp, #0x330]
7101ca4a74  str xzr,[sp, #0x360]
7101ca4a78  str xzr,[sp, #0x390]
7101ca4a7c  str wzr,[sp, #0x3a0]
7101ca4a80  str x26,[sp, #0x150]
7101ca4a84  str x19,[sp, #0x170]
7101ca4a88  bl 0x7101989a30
7101ca4a8c  ldr x0,[sp, #0x170]
7101ca4a90  cmp x19,x0
7101ca4a94  b.eq 0x7101ca4ab0
7101ca4a98  ldr x20,[sp, #0x8]
7101ca4a9c  cbz x0,0x7101ca4ac0
7101ca4aa0  ldr x8,[x0]
7101ca4aa4  ldr x8,[x8, #0x28]
7101ca4aa8  blr x8
7101ca4aac  b 0x7101ca4ac0
7101ca4ab0  ldr x8,[x0]
7101ca4ab4  ldr x8,[x8, #0x20]
7101ca4ab8  blr x8
7101ca4abc  ldr x20,[sp, #0x8]
7101ca4ac0  adrp x27,0x71050ae000
7101ca4ac4  add x27,x27,#0x0
7101ca4ac8  adrp x8,0x7101ca2000
7101ca4acc  add x8,x8,#0xbe0
7101ca4ad0  stp x27,x8,[sp, #0x150]
7101ca4ad4  add x8,sp,#0x280
7101ca4ad8  add x1,x8,#0x30
7101ca4adc  add x19,sp,#0x150
7101ca4ae0  add x0,sp,#0x150
7101ca4ae4  stp xzr,x20,[sp, #0x160]
7101ca4ae8  str x19,[sp, #0x170]
7101ca4aec  bl 0x7101a7ed70
7101ca4af0  ldr x0,[sp, #0x170]
7101ca4af4  cmp x19,x0
7101ca4af8  b.eq 0x7101ca4b0c
7101ca4afc  cbz x0,0x7101ca4b18
7101ca4b00  ldr x8,[x0]
7101ca4b04  ldr x8,[x8, #0x28]
7101ca4b08  b 0x7101ca4b14
7101ca4b0c  ldr x8,[x0]
7101ca4b10  ldr x8,[x8, #0x20]
7101ca4b14  blr x8
7101ca4b18  ldur x19,[x29, #-0x58]
7101ca4b1c  add x21,x20,#0x128
7101ca4b20  adrp x2,0x71042a3000
7101ca4b24  add x2,x2,#0x173
7101ca4b28  add x3,sp,#0x280
7101ca4b2c  mov x0,x21
7101ca4b30  mov x1,x19
7101ca4b34  bl 0x7103770b30
7101ca4b38  adrp x22,0x710439d000
7101ca4b3c  add x22,x22,#0x550
7101ca4b40  mov x0,x21
7101ca4b44  mov w1,wzr
7101ca4b48  mov x2,x22
7101ca4b4c  bl 0x71037717d0
7101ca4b50  adrp x2,0x71042d6000
7101ca4b54  add x2,x2,#0x381
7101ca4b58  mov w1,#0x1
7101ca4b5c  mov x0,x21
7101ca4b60  bl 0x71037717d0
7101ca4b64  ldr x0,[x20, #0x128]
7101ca4b68  bl 0x710376b960
7101ca4b6c  ldr x0,[x20, #0x128]
7101ca4b70  ldr x8,[x0]
7101ca4b74  ldr x8,[x8, #0x70]
7101ca4b78  mov w1,wzr
7101ca4b7c  blr x8
7101ca4b80  add x8,sp,#0x150
7101ca4b84  mov x0,x19
7101ca4b88  mov x1,x22
7101ca4b8c  bl 0x7103776640
7101ca4b90  ldr x21,[sp, #0x158]
7101ca4b94  fmov s0,0x3f800000
7101ca4b98  adrp x1,0x710438c000
7101ca4b9c  add x1,x1,#0xf0f
7101ca4ba0  mov x0,x21
7101ca4ba4  bl 0x7103778300
7101ca4ba8  adrp x24,0x710523d000
7101ca4bac  add x24,x24,#0x988
7101ca4bb0  stp x24,xzr,[sp, #0x150]
7101ca4bb4  cbz x21,0x7101ca4bd8
7101ca4bb8  ldr x0,[x21, #0x18]
7101ca4bbc  adrp x8,0x710523d000
7101ca4bc0  add x8,x8,#0x9a8
7101ca4bc4  stp x8,xzr,[x21, #0x10]
7101ca4bc8  cbz x0,0x7101ca4bd0
7101ca4bcc  bl 0x710392eb40
7101ca4bd0  mov x0,x21
7101ca4bd4  bl 0x710392eb40
7101ca4bd8  ldur x0,[x29, #-0x58]
7101ca4bdc  adrp x1,0x71042d6000
7101ca4be0  add x1,x1,#0x381
7101ca4be4  add x8,sp,#0x150
7101ca4be8  add x19,sp,#0x150
7101ca4bec  bl 0x7103776640
7101ca4bf0  ldr x21,[sp, #0x158]
7101ca4bf4  fmov s0,0x3f800000
7101ca4bf8  adrp x1,0x71043f0000
7101ca4bfc  add x1,x1,#0xd7c
7101ca4c00  mov x0,x21
7101ca4c04  bl 0x7103778300
7101ca4c08  stp x24,xzr,[sp, #0x150]
7101ca4c0c  cbz x21,0x7101ca4c30
7101ca4c10  ldr x0,[x21, #0x18]
7101ca4c14  adrp x8,0x710523d000
7101ca4c18  add x8,x8,#0x9a8
7101ca4c1c  stp x8,xzr,[x21, #0x10]
7101ca4c20  cbz x0,0x7101ca4c28
7101ca4c24  bl 0x710392eb40
7101ca4c28  mov x0,x21
7101ca4c2c  bl 0x710392eb40
7101ca4c30  add x8,sp,#0x5b
7101ca4c34  str xzr,[sp, #0x150]
7101ca4c38  strh w23,[sp, #0x158]
7101ca4c3c  stur wzr,[x8, #0xff]
7101ca4c40  mov w8,#0x1
7101ca4c44  add x1,x19,#0xc0
7101ca4c48  add x19,sp,#0x10
7101ca4c4c  add x0,sp,#0x10
7101ca4c50  strh wzr,[sp, #0x15e]
7101ca4c54  str w8,[sp, #0x160]
7101ca4c58  strh w8,[sp, #0x164]
7101ca4c5c  strb w8,[sp, #0x166]
7101ca4c60  str x25,[sp, #0x168]
7101ca4c64  str wzr,[sp, #0x170]
7101ca4c68  str xzr,[sp, #0x1a0]
7101ca4c6c  str xzr,[sp, #0x1d0]
7101ca4c70  str xzr,[sp, #0x200]
7101ca4c74  str xzr,[sp, #0x230]
7101ca4c78  str xzr,[sp, #0x260]
7101ca4c7c  str wzr,[sp, #0x270]
7101ca4c80  str x26,[sp, #0x10]
7101ca4c84  str x19,[sp, #0x30]
7101ca4c88  bl 0x7101989a30
7101ca4c8c  ldr x0,[sp, #0x30]
7101ca4c90  cmp x19,x0
7101ca4c94  b.eq 0x7101ca4ca8
7101ca4c98  cbz x0,0x7101ca4cb4
7101ca4c9c  ldr x8,[x0]
7101ca4ca0  ldr x8,[x8, #0x28]
7101ca4ca4  b 0x7101ca4cb0
7101ca4ca8  ldr x8,[x0]
7101ca4cac  ldr x8,[x8, #0x20]
7101ca4cb0  blr x8
7101ca4cb4  add x8,sp,#0x150
7101ca4cb8  adrp x9,0x7101ca2000
7101ca4cbc  add x9,x9,#0xc60
7101ca4cc0  add x1,x8,#0x30
7101ca4cc4  add x19,sp,#0x10
7101ca4cc8  str x19,[sp, #0x30]
7101ca4ccc  add x0,sp,#0x10
7101ca4cd0  stp x27,x9,[sp, #0x10]
7101ca4cd4  stp xzr,x20,[sp, #0x20]
7101ca4cd8  bl 0x7101a7ed70
7101ca4cdc  ldr x0,[sp, #0x30]
7101ca4ce0  cmp x19,x0
7101ca4ce4  b.eq 0x7101ca4cf8
7101ca4ce8  cbz x0,0x7101ca4d04
7101ca4cec  ldr x8,[x0]
7101ca4cf0  ldr x8,[x8, #0x28]
7101ca4cf4  b 0x7101ca4d00
7101ca4cf8  ldr x8,[x0]
7101ca4cfc  ldr x8,[x8, #0x20]
7101ca4d00  blr x8
7101ca4d04  ldur x19,[x29, #-0x58]
7101ca4d08  add x21,x20,#0x130
7101ca4d0c  adrp x2,0x7104281000
7101ca4d10  add x2,x2,#0x23f
7101ca4d14  add x3,sp,#0x150
7101ca4d18  mov x0,x21
7101ca4d1c  mov x1,x19
7101ca4d20  bl 0x7103770b30
7101ca4d24  add x8,sp,#0x10
7101ca4d28  adrp x1,0x710437c000
7101ca4d2c  add x1,x1,#0x68d
7101ca4d30  add x0,sp,#0x10
7101ca4d34  mov w2,wzr
7101ca4d38  strb wzr,[sp, #0x18]
7101ca4d3c  add x22,x8,#0x8
7101ca4d40  str xzr,[sp, #0x10]
7101ca4d44  bl 0x710062dc20
7101ca4d48  mov x0,x21
7101ca4d4c  mov w1,wzr
7101ca4d50  mov x2,x22
7101ca4d54  bl 0x71037717d0
7101ca4d58  add x8,sp,#0x140
7101ca4d5c  mov x0,x19
7101ca4d60  mov x1,x22
7101ca4d64  bl 0x7103776640
7101ca4d68  ldr x23,[sp, #0x148]
7101ca4d6c  fmov s0,0x3f800000
7101ca4d70  adrp x1,0x7104454000
7101ca4d74  add x1,x1,#0xb4e
7101ca4d78  mov x0,x23
7101ca4d7c  bl 0x7103778300
7101ca4d80  stp x24,xzr,[sp, #0x140]
7101ca4d84  cbz x23,0x7101ca4da8
7101ca4d88  ldr x0,[x23, #0x18]
7101ca4d8c  adrp x8,0x710523d000
7101ca4d90  add x8,x8,#0x9a8
7101ca4d94  stp x8,xzr,[x23, #0x10]
7101ca4d98  cbz x0,0x7101ca4da0
7101ca4d9c  bl 0x710392eb40
7101ca4da0  mov x0,x23
7101ca4da4  bl 0x710392eb40
7101ca4da8  adrp x1,0x710437c000
7101ca4dac  add x1,x1,#0x68d
7101ca4db0  add x0,sp,#0x10
7101ca4db4  mov w2,#0x1
7101ca4db8  strb wzr,[sp, #0x18]
7101ca4dbc  str xzr,[sp, #0x10]
7101ca4dc0  bl 0x710062dc20
7101ca4dc4  mov w1,#0x1
7101ca4dc8  mov x0,x21
7101ca4dcc  mov x2,x22
7101ca4dd0  bl 0x71037717d0
7101ca4dd4  ldur x0,[x29, #-0x58]
7101ca4dd8  add x8,sp,#0x140
7101ca4ddc  mov x1,x22
7101ca4de0  bl 0x7103776640
7101ca4de4  ldr x23,[sp, #0x148]
7101ca4de8  fmov s0,0x3f800000
7101ca4dec  adrp x1,0x7104454000
7101ca4df0  add x1,x1,#0xb4e
7101ca4df4  mov x0,x23
7101ca4df8  bl 0x7103778300
7101ca4dfc  stp x24,xzr,[sp, #0x140]
7101ca4e00  cbz x23,0x7101ca4e24
7101ca4e04  ldr x0,[x23, #0x18]
7101ca4e08  adrp x8,0x710523d000
7101ca4e0c  add x8,x8,#0x9a8
7101ca4e10  stp x8,xzr,[x23, #0x10]
7101ca4e14  cbz x0,0x7101ca4e1c
7101ca4e18  bl 0x710392eb40
7101ca4e1c  mov x0,x23
7101ca4e20  bl 0x710392eb40
7101ca4e24  adrp x1,0x710437c000
7101ca4e28  add x1,x1,#0x68d
7101ca4e2c  add x0,sp,#0x10
7101ca4e30  mov w2,#0x2
7101ca4e34  strb wzr,[sp, #0x18]
7101ca4e38  str xzr,[sp, #0x10]
7101ca4e3c  bl 0x710062dc20
7101ca4e40  mov w1,#0x2
7101ca4e44  mov x0,x21
7101ca4e48  mov x2,x22
7101ca4e4c  bl 0x71037717d0
7101ca4e50  ldur x0,[x29, #-0x58]
7101ca4e54  add x8,sp,#0x140
7101ca4e58  mov x1,x22
7101ca4e5c  bl 0x7103776640
7101ca4e60  ldr x23,[sp, #0x148]
7101ca4e64  fmov s0,0x3f800000
7101ca4e68  adrp x1,0x7104454000
7101ca4e6c  add x1,x1,#0xb4e
7101ca4e70  mov x0,x23
7101ca4e74  bl 0x7103778300
7101ca4e78  stp x24,xzr,[sp, #0x140]
7101ca4e7c  cbz x23,0x7101ca4ea0
7101ca4e80  ldr x0,[x23, #0x18]
7101ca4e84  adrp x8,0x710523d000
7101ca4e88  add x8,x8,#0x9a8
7101ca4e8c  stp x8,xzr,[x23, #0x10]
7101ca4e90  cbz x0,0x7101ca4e98
7101ca4e94  bl 0x710392eb40
7101ca4e98  mov x0,x23
7101ca4e9c  bl 0x710392eb40
7101ca4ea0  adrp x1,0x710437c000
7101ca4ea4  add x1,x1,#0x68d
7101ca4ea8  add x0,sp,#0x10
7101ca4eac  orr w2,wzr,#0x3
7101ca4eb0  strb wzr,[sp, #0x18]
7101ca4eb4  str xzr,[sp, #0x10]
7101ca4eb8  bl 0x710062dc20
7101ca4ebc  orr w1,wzr,#0x3
7101ca4ec0  mov x0,x21
7101ca4ec4  mov x2,x22
7101ca4ec8  bl 0x71037717d0
7101ca4ecc  ldur x0,[x29, #-0x58]
7101ca4ed0  add x8,sp,#0x140
7101ca4ed4  mov x1,x22
7101ca4ed8  bl 0x7103776640
7101ca4edc  ldr x23,[sp, #0x148]
7101ca4ee0  fmov s0,0x3f800000
7101ca4ee4  adrp x1,0x7104454000
7101ca4ee8  add x1,x1,#0xb4e
7101ca4eec  mov x0,x23
7101ca4ef0  bl 0x7103778300
7101ca4ef4  stp x24,xzr,[sp, #0x140]
7101ca4ef8  cbz x23,0x7101ca4f1c
7101ca4efc  ldr x0,[x23, #0x18]
7101ca4f00  adrp x8,0x710523d000
7101ca4f04  add x8,x8,#0x9a8
7101ca4f08  stp x8,xzr,[x23, #0x10]
7101ca4f0c  cbz x0,0x7101ca4f14
7101ca4f10  bl 0x710392eb40
7101ca4f14  mov x0,x23
7101ca4f18  bl 0x710392eb40
7101ca4f1c  adrp x1,0x710437c000
7101ca4f20  add x1,x1,#0x68d
7101ca4f24  add x0,sp,#0x10
7101ca4f28  mov w2,#0x4
7101ca4f2c  strb wzr,[sp, #0x18]
7101ca4f30  str xzr,[sp, #0x10]
7101ca4f34  bl 0x710062dc20
7101ca4f38  mov w1,#0x4
7101ca4f3c  mov x0,x21
7101ca4f40  mov x2,x22
7101ca4f44  bl 0x71037717d0
7101ca4f48  ldur x0,[x29, #-0x58]
7101ca4f4c  add x8,sp,#0x140
7101ca4f50  mov x1,x22
7101ca4f54  bl 0x7103776640
7101ca4f58  ldr x23,[sp, #0x148]
7101ca4f5c  fmov s0,0x3f800000
7101ca4f60  adrp x1,0x7104454000
7101ca4f64  add x1,x1,#0xb4e
7101ca4f68  mov x0,x23
7101ca4f6c  bl 0x7103778300
7101ca4f70  stp x24,xzr,[sp, #0x140]
7101ca4f74  cbz x23,0x7101ca4f98
7101ca4f78  ldr x0,[x23, #0x18]
7101ca4f7c  adrp x8,0x710523d000
7101ca4f80  add x8,x8,#0x9a8
7101ca4f84  stp x8,xzr,[x23, #0x10]
7101ca4f88  cbz x0,0x7101ca4f90
7101ca4f8c  bl 0x710392eb40
7101ca4f90  mov x0,x23
7101ca4f94  bl 0x710392eb40
7101ca4f98  mov w23,#0x5
7101ca4f9c  adrp x1,0x710437c000
7101ca4fa0  add x1,x1,#0x68d
7101ca4fa4  add x0,sp,#0x10
7101ca4fa8  mov w2,w23
7101ca4fac  strb wzr,[sp, #0x18]
7101ca4fb0  str xzr,[sp, #0x10]
7101ca4fb4  bl 0x710062dc20
7101ca4fb8  mov x0,x21
7101ca4fbc  mov w1,w23
7101ca4fc0  mov x2,x22
7101ca4fc4  bl 0x71037717d0
7101ca4fc8  ldur x0,[x29, #-0x58]
7101ca4fcc  add x8,sp,#0x140
7101ca4fd0  mov x1,x22
7101ca4fd4  bl 0x7103776640
7101ca4fd8  ldr x23,[sp, #0x148]
7101ca4fdc  fmov s0,0x3f800000
7101ca4fe0  adrp x1,0x7104454000
7101ca4fe4  add x1,x1,#0xb4e
7101ca4fe8  mov x0,x23
7101ca4fec  bl 0x7103778300
7101ca4ff0  stp x24,xzr,[sp, #0x140]
7101ca4ff4  cbz x23,0x7101ca5018
7101ca4ff8  ldr x0,[x23, #0x18]
7101ca4ffc  adrp x8,0x710523d000
7101ca5000  add x8,x8,#0x9a8
7101ca5004  stp x8,xzr,[x23, #0x10]
7101ca5008  cbz x0,0x7101ca5010
7101ca500c  bl 0x710392eb40
7101ca5010  mov x0,x23
7101ca5014  bl 0x710392eb40
7101ca5018  adrp x1,0x710437c000
7101ca501c  add x1,x1,#0x68d
7101ca5020  add x0,sp,#0x10
7101ca5024  orr w2,wzr,#0x6
7101ca5028  strb wzr,[sp, #0x18]
7101ca502c  str xzr,[sp, #0x10]
7101ca5030  bl 0x710062dc20
7101ca5034  orr w1,wzr,#0x6
7101ca5038  mov x0,x21
7101ca503c  mov x2,x22
7101ca5040  bl 0x71037717d0
7101ca5044  ldur x0,[x29, #-0x58]
7101ca5048  add x8,sp,#0x140
7101ca504c  mov x1,x22
7101ca5050  bl 0x7103776640
7101ca5054  ldr x23,[sp, #0x148]
7101ca5058  fmov s0,0x3f800000
7101ca505c  adrp x1,0x710434a000
7101ca5060  add x1,x1,#0x47e
7101ca5064  mov x0,x23
7101ca5068  bl 0x7103778300
7101ca506c  stp x24,xzr,[sp, #0x140]
7101ca5070  cbz x23,0x7101ca5094
7101ca5074  ldr x0,[x23, #0x18]
7101ca5078  adrp x8,0x710523d000
7101ca507c  add x8,x8,#0x9a8
7101ca5080  stp x8,xzr,[x23, #0x10]
7101ca5084  cbz x0,0x7101ca508c
7101ca5088  bl 0x710392eb40
7101ca508c  mov x0,x23
7101ca5090  bl 0x710392eb40
7101ca5094  adrp x1,0x710437c000
7101ca5098  add x1,x1,#0x68d
7101ca509c  add x0,sp,#0x10
7101ca50a0  orr w2,wzr,#0x7
7101ca50a4  strb wzr,[sp, #0x18]
7101ca50a8  str xzr,[sp, #0x10]
7101ca50ac  bl 0x710062dc20
7101ca50b0  orr w1,wzr,#0x7
7101ca50b4  mov x0,x21
7101ca50b8  mov x2,x22
7101ca50bc  bl 0x71037717d0
7101ca50c0  ldur x0,[x29, #-0x58]
7101ca50c4  add x8,sp,#0x140
7101ca50c8  mov x1,x22
7101ca50cc  bl 0x7103776640
7101ca50d0  ldr x22,[sp, #0x148]
7101ca50d4  fmov s0,0x3f800000
7101ca50d8  adrp x1,0x7104454000
7101ca50dc  add x1,x1,#0xb4e
7101ca50e0  mov x0,x22
7101ca50e4  bl 0x7103778300
7101ca50e8  stp x24,xzr,[sp, #0x140]
7101ca50ec  cbz x22,0x7101ca5110
7101ca50f0  ldr x0,[x22, #0x18]
7101ca50f4  adrp x8,0x710523d000
7101ca50f8  add x8,x8,#0x9a8
7101ca50fc  stp x8,xzr,[x22, #0x10]
7101ca5100  cbz x0,0x7101ca5108
7101ca5104  bl 0x710392eb40
7101ca5108  mov x0,x22
7101ca510c  bl 0x710392eb40
7101ca5110  mov w22,#0x64
7101ca5114  adrp x2,0x710424f000
7101ca5118  add x2,x2,#0xc67
7101ca511c  mov x0,x21
7101ca5120  mov w1,w22
7101ca5124  bl 0x71037717d0
7101ca5128  ldr x0,[x20, #0x130]
7101ca512c  mov w2,#0xb
7101ca5130  mov w1,w22
7101ca5134  mov w3,wzr
7101ca5138  bl 0x7103771930
7101ca513c  ldr x0,[x20, #0x130]
7101ca5140  bl 0x710376b960
7101ca5144  ldr x0,[x20, #0x130]
7101ca5148  ldr x8,[x0]
7101ca514c  ldr x8,[x8, #0x70]
7101ca5150  mov w1,wzr
7101ca5154  blr x8
7101ca5158  add x1,x20,#0x138
7101ca515c  mov x0,x20
7101ca5160  mov w2,wzr
7101ca5164  bl 0x7101c9f4e0
7101ca5168  add x1,x20,#0x140
7101ca516c  mov w2,#0x1
7101ca5170  mov x0,x20
7101ca5174  mov w26,#0x1
7101ca5178  bl 0x7101c9f4e0
7101ca517c  add x1,x20,#0x148
7101ca5180  mov w2,#0x2
7101ca5184  mov x0,x20
7101ca5188  bl 0x7101c9f4e0
7101ca518c  add x1,x20,#0x150
7101ca5190  orr w2,wzr,#0x3
7101ca5194  mov x0,x20
7101ca5198  bl 0x7101c9f4e0
7101ca519c  add x1,x20,#0x158
7101ca51a0  mov w2,#0x4
7101ca51a4  mov x0,x20
7101ca51a8  bl 0x7101c9f4e0
7101ca51ac  add x1,x20,#0x160
7101ca51b0  mov w2,#0x5
7101ca51b4  mov x0,x20
7101ca51b8  bl 0x7101c9f4e0
7101ca51bc  add x21,x20,#0x168
7101ca51c0  orr w2,wzr,#0x6
7101ca51c4  mov x0,x20
7101ca51c8  mov x1,x21
7101ca51cc  bl 0x7101c9f4e0
7101ca51d0  add x1,x20,#0x170
7101ca51d4  orr w2,wzr,#0x7
7101ca51d8  mov x0,x20
7101ca51dc  bl 0x7101c9f4e0
7101ca51e0  mov x0,x20
7101ca51e4  mov w1,wzr
7101ca51e8  bl 0x7101ca10c0
7101ca51ec  ldr x8,[x20, #0x230]
7101ca51f0  ldr x9,[x20, #0x228]
7101ca51f4  sub x8,x8,x9
7101ca51f8  lsr x19,x8,#0x2
7101ca51fc  cmp w19,#0x0
7101ca5200  b.le 0x7101ca52a4
7101ca5204  mov w22,wzr
7101ca5208  adrp x20,0x710523d000
7101ca520c  add x20,x20,#0x9c8
7101ca5210  ldr x1,[x21]
7101ca5214  add x0,sp,#0x10
7101ca5218  mov w2,w22
7101ca521c  bl 0x7103771d60
7101ca5220  ldr x23,[sp, #0x18]
7101ca5224  ldr x24,[x23]
7101ca5228  cbz x24,0x7101ca5288
7101ca522c  ldr x8,[x24]
7101ca5230  ldr x8,[x8, #0x1f8]
7101ca5234  mov x0,x24
7101ca5238  mov w1,wzr
7101ca523c  blr x8
7101ca5240  ldr x8,[x24]
7101ca5244  ldr x8,[x8, #0x200]
7101ca5248  mov x0,x24
7101ca524c  blr x8
7101ca5250  tbz w0,#0x0,0x7101ca526c
7101ca5254  ldr x8,[x24]
7101ca5258  ldr x8,[x8, #0x210]
7101ca525c  mov x0,x24
7101ca5260  blr x8
7101ca5264  eor w8,w0,#0x1
7101ca5268  b 0x7101ca5270
7101ca526c  mov w8,#0x1
7101ca5270  ldr x9,[x24]
7101ca5274  ldr x9,[x9, #0x388]
7101ca5278  and w1,w8,#0x1
7101ca527c  mov x0,x24
7101ca5280  mov w2,wzr
7101ca5284  blr x9
7101ca5288  stp x20,xzr,[sp, #0x10]
7101ca528c  cbz x23,0x7101ca5298
7101ca5290  mov x0,x23
7101ca5294  bl 0x710392eb40
7101ca5298  add w22,w22,#0x1
7101ca529c  cmp w19,w22
7101ca52a0  b.ne 0x7101ca5210
7101ca52a4  ldr x22,[sp, #0x8]
7101ca52a8  ldur x1,[x29, #-0x58]
7101ca52ac  adrp x2,0x710433a000
7101ca52b0  add x2,x2,#0x299
7101ca52b4  add x3,sp,#0x10
7101ca52b8  add x21,x22,#0x178
7101ca52bc  add x8,sp,#0x10
7101ca52c0  add x19,x8,#0xf0
7101ca52c4  str xzr,[sp, #0x120]
7101ca52c8  str wzr,[sp, #0x130]
7101ca52cc  mov x0,x21
7101ca52d0  str xzr,[sp, #0x10]
7101ca52d4  strh w26,[sp, #0x18]
7101ca52d8  stur wzr,[sp, #0x1a]
7101ca52dc  strh wzr,[sp, #0x1e]
7101ca52e0  str w26,[sp, #0x20]
7101ca52e4  strh w26,[sp, #0x24]
7101ca52e8  strb w26,[sp, #0x26]
7101ca52ec  str x25,[sp, #0x28]
7101ca52f0  str wzr,[sp, #0x30]
7101ca52f4  str xzr,[sp, #0x60]
7101ca52f8  str xzr,[sp, #0x90]
7101ca52fc  str xzr,[sp, #0xc0]
7101ca5300  str xzr,[sp, #0xf0]
7101ca5304  strb w26,[sp, #0x1a]
7101ca5308  bl 0x7103770b30
7101ca530c  mov w20,#0xc8
7101ca5310  adrp x2,0x710435b000
7101ca5314  add x2,x2,#0x8ed
7101ca5318  mov x0,x21
7101ca531c  mov w1,w20
7101ca5320  bl 0x71037717d0
7101ca5324  ldr x0,[x22, #0x178]
7101ca5328  mov w2,#0xa
7101ca532c  mov w1,w20
7101ca5330  mov w3,wzr
7101ca5334  bl 0x7103771930
7101ca5338  ldr x0,[x22, #0x178]
7101ca533c  bl 0x710376b960
7101ca5340  ldr x0,[x22, #0x178]
7101ca5344  ldr x8,[x0]
7101ca5348  ldr x8,[x8, #0x70]
7101ca534c  mov w1,#0x1
7101ca5350  blr x8
7101ca5354  ldr x0,[sp, #0x120]
7101ca5358  cmp x19,x0
7101ca535c  b.eq 0x7101ca5370
7101ca5360  cbz x0,0x7101ca537c
7101ca5364  ldr x8,[x0]
7101ca5368  ldr x8,[x8, #0x28]
7101ca536c  b 0x7101ca5378
7101ca5370  ldr x8,[x0]
7101ca5374  ldr x8,[x8, #0x20]
7101ca5378  blr x8
7101ca537c  ldr x0,[sp, #0xf0]
7101ca5380  add x8,sp,#0x10
7101ca5384  add x8,x8,#0xc0
7101ca5388  cmp x8,x0
7101ca538c  b.eq 0x7101ca53a0
7101ca5390  cbz x0,0x7101ca53ac
7101ca5394  ldr x8,[x0]
7101ca5398  ldr x8,[x8, #0x28]
7101ca539c  b 0x7101ca53a8
7101ca53a0  ldr x8,[x0]
7101ca53a4  ldr x8,[x8, #0x20]
7101ca53a8  blr x8
7101ca53ac  ldr x0,[sp, #0xc0]
7101ca53b0  add x8,sp,#0x10
7101ca53b4  add x8,x8,#0x90
7101ca53b8  cmp x8,x0
7101ca53bc  b.eq 0x7101ca53d0
7101ca53c0  cbz x0,0x7101ca53dc
7101ca53c4  ldr x8,[x0]
7101ca53c8  ldr x8,[x8, #0x28]
7101ca53cc  b 0x7101ca53d8
7101ca53d0  ldr x8,[x0]
7101ca53d4  ldr x8,[x8, #0x20]
7101ca53d8  blr x8
7101ca53dc  ldr x0,[sp, #0x90]
7101ca53e0  add x8,sp,#0x10
7101ca53e4  add x8,x8,#0x60
7101ca53e8  cmp x8,x0
7101ca53ec  b.eq 0x7101ca5400
7101ca53f0  cbz x0,0x7101ca540c
7101ca53f4  ldr x8,[x0]
7101ca53f8  ldr x8,[x8, #0x28]
7101ca53fc  b 0x7101ca5408
7101ca5400  ldr x8,[x0]
7101ca5404  ldr x8,[x8, #0x20]
7101ca5408  blr x8
7101ca540c  ldr x0,[sp, #0x60]
7101ca5410  add x8,sp,#0x10
7101ca5414  add x8,x8,#0x30
7101ca5418  cmp x8,x0
7101ca541c  b.eq 0x7101ca5430
7101ca5420  cbz x0,0x7101ca543c
7101ca5424  ldr x8,[x0]
7101ca5428  ldr x8,[x8, #0x28]
7101ca542c  b 0x7101ca5438
7101ca5430  ldr x8,[x0]
7101ca5434  ldr x8,[x8, #0x20]
7101ca5438  blr x8
7101ca543c  ldr x0,[sp, #0x260]
7101ca5440  add x8,sp,#0x150
7101ca5444  add x8,x8,#0xf0
7101ca5448  cmp x8,x0
7101ca544c  b.eq 0x7101ca5460
7101ca5450  cbz x0,0x7101ca546c
7101ca5454  ldr x8,[x0]
7101ca5458  ldr x8,[x8, #0x28]
7101ca545c  b 0x7101ca5468
7101ca5460  ldr x8,[x0]
7101ca5464  ldr x8,[x8, #0x20]
7101ca5468  blr x8
7101ca546c  ldr x0,[sp, #0x230]
7101ca5470  add x8,sp,#0x150
7101ca5474  add x8,x8,#0xc0
7101ca5478  cmp x8,x0
7101ca547c  b.eq 0x7101ca5490
7101ca5480  cbz x0,0x7101ca549c
7101ca5484  ldr x8,[x0]
7101ca5488  ldr x8,[x8, #0x28]
7101ca548c  b 0x7101ca5498
7101ca5490  ldr x8,[x0]
7101ca5494  ldr x8,[x8, #0x20]
7101ca5498  blr x8
7101ca549c  ldr x0,[sp, #0x200]
7101ca54a0  add x8,sp,#0x150
7101ca54a4  add x8,x8,#0x90
7101ca54a8  cmp x8,x0
7101ca54ac  b.eq 0x7101ca54c0
7101ca54b0  cbz x0,0x7101ca54cc
7101ca54b4  ldr x8,[x0]
7101ca54b8  ldr x8,[x8, #0x28]
7101ca54bc  b 0x7101ca54c8
7101ca54c0  ldr x8,[x0]
7101ca54c4  ldr x8,[x8, #0x20]
7101ca54c8  blr x8
7101ca54cc  ldr x0,[sp, #0x1d0]
7101ca54d0  add x8,sp,#0x150
7101ca54d4  add x8,x8,#0x60
7101ca54d8  cmp x8,x0
7101ca54dc  b.eq 0x7101ca54f0
7101ca54e0  cbz x0,0x7101ca54fc
7101ca54e4  ldr x8,[x0]
7101ca54e8  ldr x8,[x8, #0x28]
7101ca54ec  b 0x7101ca54f8
7101ca54f0  ldr x8,[x0]
7101ca54f4  ldr x8,[x8, #0x20]
7101ca54f8  blr x8
7101ca54fc  ldr x0,[sp, #0x1a0]
7101ca5500  add x8,sp,#0x150
7101ca5504  add x8,x8,#0x30
7101ca5508  cmp x8,x0
7101ca550c  b.eq 0x7101ca5520
7101ca5510  cbz x0,0x7101ca552c
7101ca5514  ldr x8,[x0]
7101ca5518  ldr x8,[x8, #0x28]
7101ca551c  b 0x7101ca5528
7101ca5520  ldr x8,[x0]
7101ca5524  ldr x8,[x8, #0x20]
7101ca5528  blr x8
7101ca552c  ldr x0,[sp, #0x390]
7101ca5530  add x8,sp,#0x280
7101ca5534  add x8,x8,#0xf0
7101ca5538  cmp x8,x0
7101ca553c  b.eq 0x7101ca5550
7101ca5540  cbz x0,0x7101ca555c
7101ca5544  ldr x8,[x0]
7101ca5548  ldr x8,[x8, #0x28]
7101ca554c  b 0x7101ca5558
7101ca5550  ldr x8,[x0]
7101ca5554  ldr x8,[x8, #0x20]
7101ca5558  blr x8
7101ca555c  ldr x0,[sp, #0x360]
7101ca5560  add x8,sp,#0x280
7101ca5564  add x8,x8,#0xc0
7101ca5568  cmp x8,x0
7101ca556c  b.eq 0x7101ca5580
7101ca5570  cbz x0,0x7101ca558c
7101ca5574  ldr x8,[x0]
7101ca5578  ldr x8,[x8, #0x28]
7101ca557c  b 0x7101ca5588
7101ca5580  ldr x8,[x0]
7101ca5584  ldr x8,[x8, #0x20]
7101ca5588  blr x8
7101ca558c  ldr x0,[sp, #0x330]
7101ca5590  add x8,sp,#0x280
7101ca5594  add x8,x8,#0x90
7101ca5598  cmp x8,x0
7101ca559c  b.eq 0x7101ca55b0
7101ca55a0  cbz x0,0x7101ca55bc
7101ca55a4  ldr x8,[x0]
7101ca55a8  ldr x8,[x8, #0x28]
7101ca55ac  b 0x7101ca55b8
7101ca55b0  ldr x8,[x0]
7101ca55b4  ldr x8,[x8, #0x20]
7101ca55b8  blr x8
7101ca55bc  ldr x0,[sp, #0x300]
7101ca55c0  add x8,sp,#0x280
7101ca55c4  add x8,x8,#0x60
7101ca55c8  cmp x8,x0
7101ca55cc  b.eq 0x7101ca55e0
7101ca55d0  cbz x0,0x7101ca55ec
7101ca55d4  ldr x8,[x0]
7101ca55d8  ldr x8,[x8, #0x28]
7101ca55dc  b 0x7101ca55e8
7101ca55e0  ldr x8,[x0]
7101ca55e4  ldr x8,[x8, #0x20]
7101ca55e8  blr x8
7101ca55ec  ldr x0,[sp, #0x2d0]
7101ca55f0  add x8,sp,#0x280
7101ca55f4  add x8,x8,#0x30
7101ca55f8  cmp x8,x0
7101ca55fc  b.eq 0x7101ca5610
7101ca5600  cbz x0,0x7101ca561c
7101ca5604  ldr x8,[x0]
7101ca5608  ldr x8,[x8, #0x28]
7101ca560c  b 0x7101ca5618
7101ca5610  ldr x8,[x0]
7101ca5614  ldr x8,[x8, #0x20]
7101ca5618  blr x8
7101ca561c  add sp,sp,#0x3c0
7101ca5620  ldp x29,x30,[sp, #0x60]
7101ca5624  ldp x20,x19,[sp, #0x50]
7101ca5628  ldp x22,x21,[sp, #0x40]
7101ca562c  ldp x24,x23,[sp, #0x30]
7101ca5630  ldp x26,x25,[sp, #0x20]
7101ca5634  ldp x28,x27,[sp, #0x10]
7101ca5638  ldr d8,[sp], #0x70
7101ca563c  ret
