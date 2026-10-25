// addr:      7101cf57b0
// offset:    0x1cf57b0
// name:      FUN_7101cf57b0
// mangled:   
// size:      1656

7101cf57b0  sub sp,sp,#0x80
7101cf57b4  stp x24,x23,[sp, #0x40]
7101cf57b8  stp x22,x21,[sp, #0x50]
7101cf57bc  stp x20,x19,[sp, #0x60]
7101cf57c0  stp x29,x30,[sp, #0x70]
7101cf57c4  add x29,sp,#0x70
7101cf57c8  ldr w8,[x0, #0x164]
7101cf57cc  mov x19,x0
7101cf57d0  cbz w8,0x7101cf58e4
7101cf57d4  adrp x21,0x710532f000
7101cf57d8  ldr x8,[x21, #0x7b0]
7101cf57dc  ldr x20,[x8, #0x8]
7101cf57e0  mov x0,x20
7101cf57e4  bl 0x71039c1a40
7101cf57e8  mov w8,#0xa51
7101cf57ec  movk w8,#0x1, LSL #16
7101cf57f0  mov x0,x20
7101cf57f4  ldrb w22,[x20, x8, LSL ]
7101cf57f8  bl 0x71039c1a50
7101cf57fc  cbnz w22,0x7101cf5c20
7101cf5800  ldr x0,[x19, #0x280]
7101cf5804  cbz x0,0x7101cf586c
7101cf5808  ldr x8,[x0]
7101cf580c  ldr x8,[x8, #0x20]
7101cf5810  blr x8
7101cf5814  tbnz w0,#0x0,0x7101cf586c
7101cf5818  adrp x8,0x710593b000
7101cf581c  ldr x8,[x8, #0x438]
7101cf5820  ldr x8,[x8]
7101cf5824  ldrb w8,[x8, #0x1]
7101cf5828  cbz w8,0x7101cf586c
7101cf582c  ldr w8,[x19, #0x28c]
7101cf5830  mov w22,#0x6500
7101cf5834  movk w22,#0x87, LSL #16
7101cf5838  cmp w8,w22
7101cf583c  b.ne 0x7101cf586c
7101cf5840  adrp x23,0x7106dd5000
7101cf5844  ldrb w8,[x23, #0x3a8]
7101cf5848  cmp w8,#0x1
7101cf584c  b.ne 0x7101cf586c
7101cf5850  adrp x24,0x7106dd5000
7101cf5854  ldr w8,[x19, #0x288]
7101cf5858  ldr w9,[x24, #0x3ac]
7101cf585c  cmp w8,w9
7101cf5860  b.ne 0x7101cf586c
7101cf5864  ldrb w8,[x19, #0x290]
7101cf5868  cbz w8,0x7101cf5d20
7101cf586c  ldr x8,[x19, #0x188]
7101cf5870  ldrsw x1,[x8, #0xb0]
7101cf5874  cmn w1,#0x1
7101cf5878  b.eq 0x7101cf5bb8
7101cf587c  cmp w1,#0x9
7101cf5880  adrp x8,0x7105339000
7101cf5884  add x8,x8,#0x830
7101cf5888  b.hi 0x7101cf58ac
7101cf588c  adrp x9,0x7105339000
7101cf5890  ldr x9,[x9, #0x8b0]
7101cf5894  ldrb w9,[x9, #0x8]
7101cf5898  cbz w9,0x7101cf58ac
7101cf589c  adrp x8,0x7105339000
7101cf58a0  add x8,x8,#0x860
7101cf58a4  ldr x8,[x8, x1, LSL #0x3]
7101cf58a8  cbz x8,0x7101cf5b80
7101cf58ac  ldr x8,[x8, #0x10]
7101cf58b0  ldr w8,[x8, #0x9c]
7101cf58b4  sub w8,w8,#0x1
7101cf58b8  cmp w8,#0x6
7101cf58bc  b.hi 0x7101cf5b80
7101cf58c0  adrp x9,0x7104753000
7101cf58c4  add x9,x9,#0xde0
7101cf58c8  fmov s0,0x3f800000
7101cf58cc  ldr w8,[x9, w8, SXTW #0x2]
7101cf58d0  fmov s1,wzr
7101cf58d4  sub w8,w8,#0x1
7101cf58d8  cmp w8,#0x2
7101cf58dc  fcsel s0,s1,s0,cc
7101cf58e0  b 0x7101cf5b84
7101cf58e4  adrp x8,0x710532f000
7101cf58e8  ldr x8,[x8, #0x840]
7101cf58ec  ldr x8,[x8, #0x8]
7101cf58f0  ldr x8,[x8, #0xb8]
7101cf58f4  ldr x0,[x8, #0x80]
7101cf58f8  mov w1,wzr
7101cf58fc  bl 0x7101af9320
7101cf5900  ldr x8,[x19, #0x20]
7101cf5904  ldr x8,[x8]
7101cf5908  ldr x8,[x8]
7101cf590c  ldr x8,[x8, #0x600]
7101cf5910  strb wzr,[x8, #0x4aa]
7101cf5914  ldr x0,[x19, #0x30]
7101cf5918  fmov s0,0x3f800000
7101cf591c  adrp x8,0x7104291000
7101cf5920  add x8,x8,#0xe10
7101cf5924  str x8,[x19, #0x178]
7101cf5928  mov w8,#0x101
7101cf592c  adrp x1,0x71042a3000
7101cf5930  add x1,x1,#0x672
7101cf5934  add x20,x19,#0x178
7101cf5938  strh w8,[x19, #0x180]
7101cf593c  bl 0x7103778300
7101cf5940  ldr x8,[x19, #0x178]
7101cf5944  cbz x8,0x7101cf5980
7101cf5948  add x0,x19,#0x28
7101cf594c  adrp x1,0x7104433000
7101cf5950  add x1,x1,#0x309
7101cf5954  mov x8,sp
7101cf5958  bl 0x7103776910
7101cf595c  ldr x1,[x19, #0x178]
7101cf5960  mov x0,sp
7101cf5964  bl 0x710377a120
7101cf5968  ldr x0,[sp, #0x8]
7101cf596c  adrp x8,0x710523d000
7101cf5970  add x8,x8,#0x9a8
7101cf5974  stp x8,xzr,[sp]
7101cf5978  cbz x0,0x7101cf5980
7101cf597c  bl 0x710392eb40
7101cf5980  mov x0,x19
7101cf5984  mov x1,x20
7101cf5988  mov w22,#0x6500
7101cf598c  movk w22,#0x87, LSL #16
7101cf5990  bl 0x7101cf61b0
7101cf5994  ldr x0,[x19, #0x280]
7101cf5998  add x20,x19,#0x270
7101cf599c  cbz x0,0x7101cf59fc
7101cf59a0  ldr x8,[x0]
7101cf59a4  ldr x8,[x8, #0x20]
7101cf59a8  blr x8
7101cf59ac  tbnz w0,#0x0,0x7101cf59fc
7101cf59b0  adrp x8,0x710593b000
7101cf59b4  ldr x8,[x8, #0x438]
7101cf59b8  ldr x8,[x8]
7101cf59bc  ldrb w8,[x8, #0x1]
7101cf59c0  cbz w8,0x7101cf59fc
7101cf59c4  ldr w8,[x19, #0x28c]
7101cf59c8  cmp w8,w22
7101cf59cc  b.ne 0x7101cf59fc
7101cf59d0  adrp x23,0x7106dd5000
7101cf59d4  ldrb w8,[x23, #0x3a8]
7101cf59d8  cmp w8,#0x1
7101cf59dc  b.ne 0x7101cf59fc
7101cf59e0  adrp x24,0x7106dd5000
7101cf59e4  ldr w8,[x19, #0x288]
7101cf59e8  ldr w9,[x24, #0x3ac]
7101cf59ec  cmp w8,w9
7101cf59f0  b.ne 0x7101cf59fc
7101cf59f4  ldrb w8,[x19, #0x290]
7101cf59f8  cbz w8,0x7101cf5c5c
7101cf59fc  adrp x8,0x710532f000
7101cf5a00  ldr x8,[x8, #0x8d0]
7101cf5a04  ldr x0,[x8, #0x8]
7101cf5a08  ldrb w8,[x0, #0x191]
7101cf5a0c  cbnz w8,0x7101cf5aa4
7101cf5a10  mov x21,#0xbb4b
7101cf5a14  movk x21,#0xda7f, LSL #16
7101cf5a18  movk x21,#0x19, LSL #32
7101cf5a1c  mov w2,#0x4
7101cf5a20  mov x1,x21
7101cf5a24  bl 0x7103313f20
7101cf5a28  tbz w0,#0x0,0x7101cf5aa4
7101cf5a2c  mov x0,sp
7101cf5a30  mov x1,x21
7101cf5a34  bl 0x71024076d0
7101cf5a38  ldr w9,[sp]
7101cf5a3c  ldr x8,[sp, #0x10]
7101cf5a40  str w9,[x20]
7101cf5a44  cbz x8,0x7101cf5acc
7101cf5a48  ldr w9,[x19, #0x28c]
7101cf5a4c  cmp w9,w22
7101cf5a50  b.ne 0x7101cf5b1c
7101cf5a54  adrp x9,0x7106dd5000
7101cf5a58  ldr w9,[x9, #0x3ac]
7101cf5a5c  ldr w10,[x19, #0x288]
7101cf5a60  cmp w10,w9
7101cf5a64  b.ne 0x7101cf5c38
7101cf5a68  ldr x9,[x19, #0x280]
7101cf5a6c  cbz x9,0x7101cf5a94
7101cf5a70  adrp x10,0x7106dd5000
7101cf5a74  ldrb w10,[x10, #0x3a8]
7101cf5a78  cmp w10,#0x1
7101cf5a7c  b.ne 0x7101cf5a94
7101cf5a80  ldr wzr,[x9, #0x38]!
7101cf5a84  ldaxr w10,[x9]
7101cf5a88  sub w10,w10,#0x1
7101cf5a8c  stlxr w11,w10,[x9]
7101cf5a90  cbnz w11,0x7101cf5a84
7101cf5a94  str xzr,[x19, #0x280]
7101cf5a98  add x9,x19,#0x290
7101cf5a9c  strb wzr,[x19, #0x290]
7101cf5aa0  b 0x7101cf5c40
7101cf5aa4  adrp x8,0x7104f73000
7101cf5aa8  add x8,x8,#0xd30
7101cf5aac  stp wzr,w22,[sp, #0x18]
7101cf5ab0  stp x8,xzr,[sp, #0x8]
7101cf5ab4  mov x8,#-0x1
7101cf5ab8  strb wzr,[sp, #0x20]
7101cf5abc  str wzr,[sp]
7101cf5ac0  str xzr,[sp, #0x38]
7101cf5ac4  stp x8,xzr,[sp, #0x28]
7101cf5ac8  str wzr,[x20]
7101cf5acc  ldr x8,[x19, #0x280]
7101cf5ad0  cbz x8,0x7101cf5b0c
7101cf5ad4  adrp x9,0x7106dd5000
7101cf5ad8  ldrb w9,[x9, #0x3a8]
7101cf5adc  cmp w9,#0x1
7101cf5ae0  b.ne 0x7101cf5b0c
7101cf5ae4  adrp x10,0x7106dd5000
7101cf5ae8  ldr w9,[x19, #0x288]
7101cf5aec  ldr w10,[x10, #0x3ac]
7101cf5af0  cmp w9,w10
7101cf5af4  b.ne 0x7101cf5b0c
7101cf5af8  ldr wzr,[x8, #0x38]!
7101cf5afc  ldaxr w9,[x8]
7101cf5b00  sub w9,w9,#0x1
7101cf5b04  stlxr w10,w9,[x8]
7101cf5b08  cbnz w10,0x7101cf5afc
7101cf5b0c  str xzr,[x19, #0x280]
7101cf5b10  add x9,x19,#0x290
7101cf5b14  strb wzr,[x9]
7101cf5b18  ldr x8,[sp, #0x10]
7101cf5b1c  ldp x9,x10,[sp, #0x28]
7101cf5b20  ldr x11,[sp, #0x38]
7101cf5b24  str x9,[x19, #0x298]
7101cf5b28  adrp x9,0x7104f73000
7101cf5b2c  add x9,x9,#0xd50
7101cf5b30  str x11,[x19, #0x2a8]
7101cf5b34  str x10,[x19, #0x2a0]
7101cf5b38  str x9,[sp, #0x8]
7101cf5b3c  cbz x8,0x7101cf5b78
7101cf5b40  adrp x9,0x7106dd5000
7101cf5b44  ldrb w9,[x9, #0x3a8]
7101cf5b48  cmp w9,#0x1
7101cf5b4c  b.ne 0x7101cf5b78
7101cf5b50  adrp x10,0x7106dd5000
7101cf5b54  ldr w9,[sp, #0x18]
7101cf5b58  ldr w10,[x10, #0x3ac]
7101cf5b5c  cmp w9,w10
7101cf5b60  b.ne 0x7101cf5b78
7101cf5b64  ldr wzr,[x8, #0x38]!
7101cf5b68  ldaxr w9,[x8]
7101cf5b6c  sub w9,w9,#0x1
7101cf5b70  stlxr w10,w9,[x8]
7101cf5b74  cbnz w10,0x7101cf5b68
7101cf5b78  str xzr,[sp, #0x10]
7101cf5b7c  b 0x7101cf5c20
7101cf5b80  fmov s0,0x3f800000
7101cf5b84  adrp x8,0x71052c5000
7101cf5b88  ldr x8,[x8, #0x120]
7101cf5b8c  ldr x0,[x8, #0x8]
7101cf5b90  fmov s1,0x3f800000
7101cf5b94  mov x2,#0x88dd
7101cf5b98  movk x2,#0x7e25, LSL #16
7101cf5b9c  movk x2,#0x1a, LSL #32
7101cf5ba0  mov w3,wzr
7101cf5ba4  mov w4,wzr
7101cf5ba8  mov w5,wzr
7101cf5bac  mov w6,wzr
7101cf5bb0  mov w7,wzr
7101cf5bb4  bl 0x710175dfc0
7101cf5bb8  ldr x8,[x21, #0x7b0]
7101cf5bbc  ldr x8,[x8, #0x8]
7101cf5bc0  ldr w1,[x8, #0x210]
7101cf5bc4  cbz w1,0x7101cf5bd0
7101cf5bc8  mov x0,x19
7101cf5bcc  b 0x7101cf5bf4
7101cf5bd0  ldr w20,[x8, #0x214]
7101cf5bd4  adrp x8,0x7105314000
7101cf5bd8  add x8,x8,#0x4d8
7101cf5bdc  ldarb w8,[x8]
7101cf5be0  tbz w8,#0x0,0x7101cf5de4
7101cf5be4  adrp x8,0x7105307000
7101cf5be8  mov x0,x19
7101cf5bec  mov w1,wzr
7101cf5bf0  str w20,[x8, #0xd50]
7101cf5bf4  bl 0x7101cf63c0
7101cf5bf8  ldr w8,[x19, #0x15c]
7101cf5bfc  cmp w8,#0x11
7101cf5c00  b.gt 0x7101cf5c20
7101cf5c04  add w8,w8,#0x1
7101cf5c08  cmp w8,#0x13
7101cf5c0c  str w8,[x19, #0x15c]
7101cf5c10  b.cs 0x7101cf5e24
7101cf5c14  add x8,x19,w8, SXTW  #0x2
7101cf5c18  mov w9,#0x9
7101cf5c1c  str w9,[x8, #0x110]
7101cf5c20  ldp x29,x30,[sp, #0x70]
7101cf5c24  ldp x20,x19,[sp, #0x60]
7101cf5c28  ldp x22,x21,[sp, #0x50]
7101cf5c2c  ldp x24,x23,[sp, #0x40]
7101cf5c30  add sp,sp,#0x80
7101cf5c34  ret
7101cf5c38  str w9,[x19, #0x288]
7101cf5c3c  add x9,x19,#0x290
7101cf5c40  str x8,[x19, #0x280]
7101cf5c44  add x8,x8,#0x38
7101cf5c48  ldaxr w10,[x8]
7101cf5c4c  add w10,w10,#0x1
7101cf5c50  stlxr w11,w10,[x8]
7101cf5c54  cbnz w11,0x7101cf5c48
7101cf5c58  b 0x7101cf5b14
7101cf5c5c  ldr x0,[x19, #0x280]
7101cf5c60  cbz x0,0x7101cf59fc
7101cf5c64  ldr x8,[x0]
7101cf5c68  ldr x8,[x8, #0x20]
7101cf5c6c  blr x8
7101cf5c70  tbnz w0,#0x0,0x7101cf59fc
7101cf5c74  ldr x0,[x19, #0x280]
7101cf5c78  ldr x8,[x0]
7101cf5c7c  ldr x8,[x8, #0x68]
7101cf5c80  blr x8
7101cf5c84  tbnz w0,#0x0,0x7101cf59fc
7101cf5c88  mov x0,x20
7101cf5c8c  mov w1,wzr
7101cf5c90  bl 0x710373b540
7101cf5c94  add x21,x19,#0x278
7101cf5c98  mov x0,x21
7101cf5c9c  str wzr,[x19, #0x270]
7101cf5ca0  bl 0x71039602c0
7101cf5ca4  adrp x8,0x7104f73000
7101cf5ca8  add x8,x8,#0xd50
7101cf5cac  str x8,[x19, #0x278]
7101cf5cb0  ldr x8,[x19, #0x280]
7101cf5cb4  cbz x8,0x7101cf5ce8
7101cf5cb8  ldrb w9,[x23, #0x3a8]
7101cf5cbc  cmp w9,#0x1
7101cf5cc0  b.ne 0x7101cf5ce8
7101cf5cc4  ldr w9,[x19, #0x288]
7101cf5cc8  ldr w10,[x24, #0x3ac]
7101cf5ccc  cmp w9,w10
7101cf5cd0  b.ne 0x7101cf5ce8
7101cf5cd4  ldr wzr,[x8, #0x38]!
7101cf5cd8  ldaxr w9,[x8]
7101cf5cdc  sub w9,w9,#0x1
7101cf5ce0  stlxr w10,w9,[x8]
7101cf5ce4  cbnz w10,0x7101cf5cd8
7101cf5ce8  adrp x8,0x7104f73000
7101cf5cec  add x8,x8,#0xd30
7101cf5cf0  stp xzr,xzr,[x21, #0x10]
7101cf5cf4  stp xzr,xzr,[x21]
7101cf5cf8  str x8,[x19, #0x278]
7101cf5cfc  mov x8,#-0x1
7101cf5d00  str xzr,[x19, #0x280]
7101cf5d04  str wzr,[x19, #0x288]
7101cf5d08  str w22,[x19, #0x28c]
7101cf5d0c  strb wzr,[x19, #0x290]
7101cf5d10  str x8,[x19, #0x298]
7101cf5d14  str xzr,[x19, #0x2a0]
7101cf5d18  str wzr,[x19, #0x2ac]
7101cf5d1c  b 0x7101cf59fc
7101cf5d20  ldr x0,[x19, #0x280]
7101cf5d24  cbz x0,0x7101cf586c
7101cf5d28  ldr x8,[x0]
7101cf5d2c  ldr x8,[x8, #0x20]
7101cf5d30  blr x8
7101cf5d34  tbnz w0,#0x0,0x7101cf586c
7101cf5d38  ldr x0,[x19, #0x280]
7101cf5d3c  ldr x8,[x0]
7101cf5d40  ldr x8,[x8, #0x68]
7101cf5d44  blr x8
7101cf5d48  tbnz w0,#0x0,0x7101cf586c
7101cf5d4c  add x0,x19,#0x270
7101cf5d50  mov w1,wzr
7101cf5d54  bl 0x710373b540
7101cf5d58  add x20,x19,#0x278
7101cf5d5c  mov x0,x20
7101cf5d60  str wzr,[x19, #0x270]
7101cf5d64  bl 0x71039602c0
7101cf5d68  adrp x8,0x7104f73000
7101cf5d6c  add x8,x8,#0xd50
7101cf5d70  str x8,[x19, #0x278]
7101cf5d74  ldr x8,[x19, #0x280]
7101cf5d78  cbz x8,0x7101cf5dac
7101cf5d7c  ldrb w9,[x23, #0x3a8]
7101cf5d80  cmp w9,#0x1
7101cf5d84  b.ne 0x7101cf5dac
7101cf5d88  ldr w9,[x19, #0x288]
7101cf5d8c  ldr w10,[x24, #0x3ac]
7101cf5d90  cmp w9,w10
7101cf5d94  b.ne 0x7101cf5dac
7101cf5d98  ldr wzr,[x8, #0x38]!
7101cf5d9c  ldaxr w9,[x8]
7101cf5da0  sub w9,w9,#0x1
7101cf5da4  stlxr w10,w9,[x8]
7101cf5da8  cbnz w10,0x7101cf5d9c
7101cf5dac  adrp x8,0x7104f73000
7101cf5db0  add x8,x8,#0xd30
7101cf5db4  stp xzr,xzr,[x20, #0x10]
7101cf5db8  stp xzr,xzr,[x20]
7101cf5dbc  str x8,[x19, #0x278]
7101cf5dc0  mov x8,#-0x1
7101cf5dc4  str xzr,[x19, #0x280]
7101cf5dc8  str wzr,[x19, #0x288]
7101cf5dcc  str w22,[x19, #0x28c]
7101cf5dd0  strb wzr,[x19, #0x290]
7101cf5dd4  str x8,[x19, #0x298]
7101cf5dd8  str xzr,[x19, #0x2a0]
7101cf5ddc  str wzr,[x19, #0x2ac]
7101cf5de0  b 0x7101cf586c
7101cf5de4  adrp x0,0x7105314000
7101cf5de8  add x0,x0,#0x4d8
7101cf5dec  bl 0x71039c06b0
7101cf5df0  cbz w0,0x7101cf5be4
7101cf5df4  bl 0x7101764000
7101cf5df8  adrp x0,0x7101763000
7101cf5dfc  add x0,x0,#0xc40
7101cf5e00  adrp x1,0x71052c5000
7101cf5e04  add x1,x1,#0x180
7101cf5e08  adrp x2,0x7104f17000
7101cf5e0c  add x2,x2,#0x0
7101cf5e10  bl 0x71000001c0
7101cf5e14  adrp x0,0x7105314000
7101cf5e18  add x0,x0,#0x4d8
7101cf5e1c  bl 0x71039c06c0
7101cf5e20  b 0x7101cf5be4
7101cf5e24  bl 0x71039c2650
