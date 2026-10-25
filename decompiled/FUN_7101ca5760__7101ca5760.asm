// addr:      7101ca5760
// offset:    0x1ca5760
// name:      FUN_7101ca5760
// mangled:   
// size:      1236

7101ca5760  sub sp,sp,#0xf0
7101ca5764  str x27,[sp, #0x90]
7101ca5768  stp x26,x25,[sp, #0xa0]
7101ca576c  stp x24,x23,[sp, #0xb0]
7101ca5770  stp x22,x21,[sp, #0xc0]
7101ca5774  stp x20,x19,[sp, #0xd0]
7101ca5778  stp x29,x30,[sp, #0xe0]
7101ca577c  add x29,sp,#0xe0
7101ca5780  stp xzr,xzr,[x29, #-0x60]
7101ca5784  mov x19,x0
7101ca5788  stur xzr,[x29, #-0x68]
7101ca578c  ldp x20,x22,[x0, #0x1d8]
7101ca5790  mov w21,#0x9dc5
7101ca5794  movk w21,#0x811c, LSL #16
7101ca5798  cmp x20,x22
7101ca579c  b.eq 0x7101ca5938
7101ca57a0  add x23,sp,#0x30
7101ca57a4  adrp x24,0x71042b4000
7101ca57a8  add x24,x24,#0x4c6
7101ca57ac  add x25,x23,#0x9
7101ca57b0  mov w26,#0x89
7101ca57b4  adrp x27,0x71050ae000
7101ca57b8  add x27,x27,#0x80
7101ca57bc  ldr w8,[x20]
7101ca57c0  sub w8,w8,#0x1
7101ca57c4  cmp w8,#0x2
7101ca57c8  mov x9,x24
7101ca57cc  b.hi 0x7101ca57d4
7101ca57d0  ldr x9,[x27, w8, SXTW #0x3]
7101ca57d4  mov x8,xzr
7101ca57d8  str xzr,[sp, #0x30]
7101ca57dc  add x11,x9,x8
7101ca57e0  ldrb w12,[x11]
7101ca57e4  cbz w12,0x7101ca5824
7101ca57e8  add x10,x23,x8
7101ca57ec  strb w12,[x10, #0x8]
7101ca57f0  ldrb w12,[x11, #0x1]
7101ca57f4  cbz w12,0x7101ca5818
7101ca57f8  strb w12,[x10, #0x9]
7101ca57fc  ldrb w11,[x11, #0x2]
7101ca5800  cbz w11,0x7101ca5820
7101ca5804  add x8,x8,#0x3
7101ca5808  cmp w8,#0x3f
7101ca580c  strb w11,[x10, #0xa]
7101ca5810  b.cc 0x7101ca57dc
7101ca5814  b 0x7101ca5824
7101ca5818  add x8,x8,#0x1
7101ca581c  b 0x7101ca5824
7101ca5820  add x8,x8,#0x2
7101ca5824  add x9,x23,#0x8
7101ca5828  strb wzr,[x9, w8, UXTW ]
7101ca582c  ldrb w10,[sp, #0x38]
7101ca5830  str w8,[sp, #0x34]
7101ca5834  mov w8,w21
7101ca5838  cbz w10,0x7101ca585c
7101ca583c  mov x9,x25
7101ca5840  mov w11,w10
7101ca5844  mov w8,w21
7101ca5848  mul w8,w8,w26
7101ca584c  and w11,w11,#0xff
7101ca5850  eor w8,w8,w11
7101ca5854  ldrb w11,[x9], #0x1
7101ca5858  cbnz w11,0x7101ca5848
7101ca585c  str w8,[sp, #0x30]
7101ca5860  ldp x8,x9,[x29, #-0x60]
7101ca5864  cmp x8,x9
7101ca5868  b.cs 0x7101ca58cc
7101ca586c  mov x11,x8
7101ca5870  mov x9,xzr
7101ca5874  str wzr,[x11], #0x8
7101ca5878  tst w10,#0xff
7101ca587c  b.ne 0x7101ca5894
7101ca5880  b 0x7101ca58e8
7101ca5884  ldrb w10,[x10, #0x2]
7101ca5888  add x9,x9,#0x3
7101ca588c  tst w10,#0xff
7101ca5890  b.eq 0x7101ca58e8
7101ca5894  strb w10,[x11, x9, LSL ]
7101ca5898  ldrb w13,[x25, x9, LSL ]
7101ca589c  cbz w13,0x7101ca58dc
7101ca58a0  add x12,x11,x9
7101ca58a4  add x10,x25,x9
7101ca58a8  strb w13,[x12, #0x1]
7101ca58ac  ldrb w13,[x10, #0x1]
7101ca58b0  cbz w13,0x7101ca58e4
7101ca58b4  add w14,w9,#0x3
7101ca58b8  cmp w14,#0x3e
7101ca58bc  strb w13,[x12, #0x2]
7101ca58c0  b.ls 0x7101ca5884
7101ca58c4  add w9,w9,#0x3
7101ca58c8  b 0x7101ca58e8
7101ca58cc  sub x0,x29,#0x68
7101ca58d0  add x1,sp,#0x30
7101ca58d4  bl 0x71019c1c50
7101ca58d8  b 0x7101ca592c
7101ca58dc  add x9,x9,#0x1
7101ca58e0  b 0x7101ca58e8
7101ca58e4  add x9,x9,#0x2
7101ca58e8  add x10,x8,#0x8
7101ca58ec  strb wzr,[x10, w9, UXTW ]
7101ca58f0  str w9,[x8, #0x4]
7101ca58f4  ldrb w9,[x8, #0x8]
7101ca58f8  mov w11,w21
7101ca58fc  cbz w9,0x7101ca591c
7101ca5900  add x10,x8,#0x9
7101ca5904  mov w11,w21
7101ca5908  mul w11,w11,w26
7101ca590c  and w9,w9,#0xff
7101ca5910  eor w11,w11,w9
7101ca5914  ldrb w9,[x10], #0x1
7101ca5918  cbnz w9,0x7101ca5908
7101ca591c  str w11,[x8]
7101ca5920  ldur x8,[x29, #-0x60]
7101ca5924  add x8,x8,#0x48
7101ca5928  stur x8,[x29, #-0x60]
7101ca592c  add x20,x20,#0x4
7101ca5930  cmp x20,x22
7101ca5934  b.ne 0x7101ca57bc
7101ca5938  add x8,sp,#0x30
7101ca593c  add x0,x8,#0x20
7101ca5940  stp xzr,xzr,[sp, #0x40]
7101ca5944  bl 0x7103776290
7101ca5948  str xzr,[sp, #0x30]
7101ca594c  str wzr,[sp, #0x38]
7101ca5950  adrp x23,0x71052a8000
7101ca5954  ldr x23,[x23, #0xa80]
7101ca5958  ldr q0,[x23]
7101ca595c  ldr x8,[sp, #0x58]
7101ca5960  str q0,[sp, #0x40]
7101ca5964  str xzr,[x8, #0x8]
7101ca5968  ldr x8,[x19, #0x150]
7101ca596c  ldr x8,[x8]
7101ca5970  add x0,x8,#0x8
7101ca5974  adrp x1,0x71043ae000
7101ca5978  add x1,x1,#0xcc
7101ca597c  add x8,sp,#0x20
7101ca5980  bl 0x7103776640
7101ca5984  ldr x8,[sp, #0x28]
7101ca5988  ldr x20,[sp, #0x58]
7101ca598c  str xzr,[sp, #0x28]
7101ca5990  str x8,[sp, #0x58]
7101ca5994  cbz x20,0x7101ca59b8
7101ca5998  ldr x0,[x20, #0x18]
7101ca599c  adrp x8,0x710523d000
7101ca59a0  add x8,x8,#0x9a8
7101ca59a4  stp x8,xzr,[x20, #0x10]
7101ca59a8  cbz x0,0x7101ca59b0
7101ca59ac  bl 0x710392eb40
7101ca59b0  mov x0,x20
7101ca59b4  bl 0x710392eb40
7101ca59b8  adrp x22,0x710523d000
7101ca59bc  add x22,x22,#0x988
7101ca59c0  adrp x1,0x71042c4000
7101ca59c4  add x1,x1,#0xec7
7101ca59c8  stp x22,xzr,[sp, #0x20]
7101ca59cc  ldr x8,[x19, #0x150]
7101ca59d0  ldr x8,[x8]
7101ca59d4  add x0,x8,#0x8
7101ca59d8  add x8,sp,#0x20
7101ca59dc  bl 0x7103776910
7101ca59e0  ldr x0,[sp, #0x28]
7101ca59e4  ldr x8,[x0]
7101ca59e8  cbz x8,0x7101ca5a04
7101ca59ec  movi v0.2D,#0x0
7101ca59f0  add x9,x8,#0x30
7101ca59f4  add x8,x8,#0x34
7101ca59f8  ld1 {v0.S}[0],[x9]
7101ca59fc  ld1 {v0.S}[1],[x8]
7101ca5a00  b 0x7101ca5a08
7101ca5a04  ldr q0,[x23]
7101ca5a08  adrp x23,0x710523d000
7101ca5a0c  add x23,x23,#0x9a8
7101ca5a10  stp x23,xzr,[sp, #0x20]
7101ca5a14  str q0,[sp, #0x40]
7101ca5a18  cbz x0,0x7101ca5a20
7101ca5a1c  bl 0x710392eb40
7101ca5a20  ldp x25,x24,[x29, #-0x68]
7101ca5a24  mov w8,#0x4
7101ca5a28  str w8,[sp, #0x30]
7101ca5a2c  stp xzr,xzr,[sp, #0x10]
7101ca5a30  subs x20,x24,x25
7101ca5a34  str xzr,[sp, #0x8]
7101ca5a38  b.eq 0x7101ca5b7c
7101ca5a3c  mov x9,#0x8e39
7101ca5a40  movk x9,#0x38e3, LSL #16
7101ca5a44  asr x8,x20,#0x3
7101ca5a48  movk x9,#0xe38e, LSL #32
7101ca5a4c  movk x9,#0x8e38, LSL #48
7101ca5a50  mul x26,x8,x9
7101ca5a54  mov x8,#0xe38f
7101ca5a58  movk x8,#0x8e38, LSL #16
7101ca5a5c  movk x8,#0x38e3, LSL #32
7101ca5a60  movk x8,#0x38e, LSL #48
7101ca5a64  cmp x26,x8
7101ca5a68  b.cs 0x7101ca5c2c
7101ca5a6c  mov w0,#0x10
7101ca5a70  mov x1,x20
7101ca5a74  bl 0x710392e290
7101ca5a78  cbnz x0,0x7101ca5abc
7101ca5a7c  adrp x8,0x7105332000
7101ca5a80  ldr x0,[x8, #0xf00]
7101ca5a84  cbz x0,0x7101ca5ab8
7101ca5a88  stur wzr,[x29, #-0x44]
7101ca5a8c  str x20,[sp, #0x20]
7101ca5a90  ldr x8,[x0]
7101ca5a94  ldr x8,[x8, #0x30]
7101ca5a98  sub x1,x29,#0x44
7101ca5a9c  add x2,sp,#0x20
7101ca5aa0  blr x8
7101ca5aa4  tbz w0,#0x0,0x7101ca5ab8
7101ca5aa8  mov w0,#0x10
7101ca5aac  mov x1,x20
7101ca5ab0  bl 0x710392e290
7101ca5ab4  cbnz x0,0x7101ca5abc
7101ca5ab8  mov x0,xzr
7101ca5abc  mov w8,#0x48
7101ca5ac0  madd x8,x26,x8,x0
7101ca5ac4  cmp x25,x24
7101ca5ac8  stp x0,x0,[sp, #0x8]
7101ca5acc  str x8,[sp, #0x18]
7101ca5ad0  b.eq 0x7101ca5b7c
7101ca5ad4  mov w8,#0x89
7101ca5ad8  mov x10,x0
7101ca5adc  mov x9,xzr
7101ca5ae0  str wzr,[x10], #0x8
7101ca5ae4  add x11,x25,x9
7101ca5ae8  ldrb w12,[x11, #0x8]
7101ca5aec  cbz w12,0x7101ca5b2c
7101ca5af0  strb w12,[x10, x9, LSL ]
7101ca5af4  ldrb w13,[x11, #0x9]
7101ca5af8  cbz w13,0x7101ca5b20
7101ca5afc  add x12,x10,x9
7101ca5b00  strb w13,[x12, #0x1]
7101ca5b04  ldrb w11,[x11, #0xa]
7101ca5b08  cbz w11,0x7101ca5b28
7101ca5b0c  add x9,x9,#0x3
7101ca5b10  cmp w9,#0x3f
7101ca5b14  strb w11,[x12, #0x2]
7101ca5b18  b.cc 0x7101ca5ae4
7101ca5b1c  b 0x7101ca5b2c
7101ca5b20  add x9,x9,#0x1
7101ca5b24  b 0x7101ca5b2c
7101ca5b28  add x9,x9,#0x2
7101ca5b2c  add x10,x0,#0x8
7101ca5b30  strb wzr,[x10, w9, UXTW ]
7101ca5b34  str w9,[x0, #0x4]
7101ca5b38  ldrb w9,[x0, #0x8]
7101ca5b3c  mov w11,w21
7101ca5b40  cbz w9,0x7101ca5b60
7101ca5b44  add x10,x0,#0x9
7101ca5b48  mov w11,w21
7101ca5b4c  mul w11,w11,w8
7101ca5b50  and w9,w9,#0xff
7101ca5b54  eor w11,w11,w9
7101ca5b58  ldrb w9,[x10], #0x1
7101ca5b5c  cbnz w9,0x7101ca5b4c
7101ca5b60  str w11,[x0]
7101ca5b64  ldr x9,[sp, #0x10]
7101ca5b68  add x25,x25,#0x48
7101ca5b6c  cmp x25,x24
7101ca5b70  add x0,x9,#0x48
7101ca5b74  str x0,[sp, #0x10]
7101ca5b78  b.ne 0x7101ca5ad8
7101ca5b7c  add x0,sp,#0x20
7101ca5b80  add x20,x19,#0x198
7101ca5b84  add x19,x19,#0x158
7101ca5b88  bl 0x7103776290
7101ca5b8c  add x2,sp,#0x8
7101ca5b90  add x3,sp,#0x30
7101ca5b94  add x4,sp,#0x20
7101ca5b98  mov x0,x20
7101ca5b9c  mov x1,x19
7101ca5ba0  bl 0x71032ccb70
7101ca5ba4  ldr x19,[sp, #0x28]
7101ca5ba8  stp x22,xzr,[sp, #0x20]
7101ca5bac  cbz x19,0x7101ca5bc8
7101ca5bb0  ldr x0,[x19, #0x18]
7101ca5bb4  stp x23,xzr,[x19, #0x10]
7101ca5bb8  cbz x0,0x7101ca5bc0
7101ca5bbc  bl 0x710392eb40
7101ca5bc0  mov x0,x19
7101ca5bc4  bl 0x710392eb40
7101ca5bc8  ldr x0,[sp, #0x8]
7101ca5bcc  cbz x0,0x7101ca5bd8
7101ca5bd0  str x0,[sp, #0x10]
7101ca5bd4  bl 0x710392eb40
7101ca5bd8  ldr x19,[sp, #0x58]
7101ca5bdc  stp x22,xzr,[sp, #0x50]
7101ca5be0  cbz x19,0x7101ca5bfc
7101ca5be4  ldr x0,[x19, #0x18]
7101ca5be8  stp x23,xzr,[x19, #0x10]
7101ca5bec  cbz x0,0x7101ca5bf4
7101ca5bf0  bl 0x710392eb40
7101ca5bf4  mov x0,x19
7101ca5bf8  bl 0x710392eb40
7101ca5bfc  ldur x0,[x29, #-0x68]
7101ca5c00  cbz x0,0x7101ca5c0c
7101ca5c04  stur x0,[x29, #-0x60]
7101ca5c08  bl 0x710392eb40
7101ca5c0c  ldp x29,x30,[sp, #0xe0]
7101ca5c10  ldr x27,[sp, #0x90]
7101ca5c14  ldp x20,x19,[sp, #0xd0]
7101ca5c18  ldp x22,x21,[sp, #0xc0]
7101ca5c1c  ldp x24,x23,[sp, #0xb0]
7101ca5c20  ldp x26,x25,[sp, #0xa0]
7101ca5c24  add sp,sp,#0xf0
7101ca5c28  ret
7101ca5c2c  add x0,sp,#0x8
7101ca5c30  bl 0x71039c0c00
