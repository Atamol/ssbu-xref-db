// addr:      7101ef56e0
// offset:    0x1ef56e0
// name:      FUN_7101ef56e0
// mangled:   
// size:      1472

7101ef56e0  sub sp,sp,#0xc0
7101ef56e4  stp x24,x23,[sp, #0x80]
7101ef56e8  stp x22,x21,[sp, #0x90]
7101ef56ec  stp x20,x19,[sp, #0xa0]
7101ef56f0  stp x29,x30,[sp, #0xb0]
7101ef56f4  add x29,sp,#0xb0
7101ef56f8  ldr w8,[x0, #0x24c]
7101ef56fc  mov x19,x0
7101ef5700  cbnz w8,0x7101ef5938
7101ef5704  adrp x23,0x7105328000
7101ef5708  ldr x8,[x23, #0xe18]
7101ef570c  ldr x8,[x8]
7101ef5710  ldr w9,[x8, #0x34]
7101ef5714  ldr w8,[x8, #0x1ec]
7101ef5718  cmp w9,w8
7101ef571c  cset w8,lt
7101ef5720  adrp x9,0x71050b3000
7101ef5724  add x9,x9,#0xe88
7101ef5728  ldr x21,[x9, w8, UXTW #0x3]
7101ef572c  add x20,x19,#0x258
7101ef5730  adrp x1,0x71042c5000
7101ef5734  add x1,x1,#0x698
7101ef5738  mov x0,x20
7101ef573c  mov x2,x21
7101ef5740  bl 0x7103778430
7101ef5744  adrp x1,0x71043cf000
7101ef5748  add x1,x1,#0xc87
7101ef574c  add x8,sp,#0x58
7101ef5750  mov x0,x20
7101ef5754  mov x2,x21
7101ef5758  bl 0x7103776640
7101ef575c  mov w1,#0xb8
7101ef5760  mov w0,#0x10
7101ef5764  bl 0x710392e290
7101ef5768  mov x21,x0
7101ef576c  cbnz x0,0x7101ef57b8
7101ef5770  adrp x8,0x7105332000
7101ef5774  ldr x0,[x8, #0xf00]
7101ef5778  cbz x0,0x7101ef57b4
7101ef577c  mov w8,#0xb8
7101ef5780  stur wzr,[x29, #-0x34]
7101ef5784  sub x1,x29,#0x34
7101ef5788  stur x8,[x29, #-0x48]
7101ef578c  ldr x8,[x0]
7101ef5790  ldr x8,[x8, #0x30]
7101ef5794  sub x2,x29,#0x48
7101ef5798  blr x8
7101ef579c  tbz w0,#0x0,0x7101ef57b4
7101ef57a0  mov w1,#0xb8
7101ef57a4  mov w0,#0x10
7101ef57a8  bl 0x710392e290
7101ef57ac  mov x21,x0
7101ef57b0  cbnz x0,0x7101ef57b8
7101ef57b4  mov x21,xzr
7101ef57b8  ldr x8,[sp, #0x60]
7101ef57bc  adrp x24,0x710523d000
7101ef57c0  add x24,x24,#0x988
7101ef57c4  sub x1,x29,#0x48
7101ef57c8  mov x0,x21
7101ef57cc  str xzr,[sp, #0x60]
7101ef57d0  stp x24,x8,[x29, #-0x48]
7101ef57d4  bl 0x7103776390
7101ef57d8  mov w8,#0xffffffff
7101ef57dc  stp xzr,x8,[x21, #0xa0]
7101ef57e0  str w8,[x21, #0xb0]
7101ef57e4  adrp x8,0x7101ef6000
7101ef57e8  add x8,x8,#0x5f0
7101ef57ec  stp xzr,xzr,[x21, #0x40]
7101ef57f0  strb wzr,[x21, #0xb4]
7101ef57f4  stp xzr,xzr,[x21, #0x30]
7101ef57f8  stp x8,xzr,[x21, #0x38]
7101ef57fc  adrp x8,0x7101ef6000
7101ef5800  add x8,x8,#0x600
7101ef5804  stp xzr,xzr,[x21, #0x20]
7101ef5808  stp x21,xzr,[x21, #0x10]
7101ef580c  stp xzr,xzr,[x21, #0x90]
7101ef5810  stp xzr,xzr,[x21, #0x80]
7101ef5814  stp xzr,xzr,[x21, #0x70]
7101ef5818  stp xzr,xzr,[x21, #0x60]
7101ef581c  stp xzr,xzr,[x21, #0x50]
7101ef5820  str wzr,[x21, #0x58]
7101ef5824  stp x8,xzr,[x21, #0x48]
7101ef5828  ldur x22,[x29, #-0x40]
7101ef582c  stp x24,xzr,[x29, #-0x48]
7101ef5830  cbz x22,0x7101ef5854
7101ef5834  ldr x0,[x22, #0x18]
7101ef5838  adrp x8,0x710523d000
7101ef583c  add x8,x8,#0x9a8
7101ef5840  stp x8,xzr,[x22, #0x10]
7101ef5844  cbz x0,0x7101ef584c
7101ef5848  bl 0x710392eb40
7101ef584c  mov x0,x22
7101ef5850  bl 0x710392eb40
7101ef5854  ldr x22,[x19, #0x268]
7101ef5858  str x21,[x19, #0x268]
7101ef585c  cbz x22,0x7101ef5894
7101ef5860  ldr x21,[x22, #0x8]
7101ef5864  stp x24,xzr,[x22]
7101ef5868  cbz x21,0x7101ef588c
7101ef586c  ldr x0,[x21, #0x18]
7101ef5870  adrp x8,0x710523d000
7101ef5874  add x8,x8,#0x9a8
7101ef5878  stp x8,xzr,[x21, #0x10]
7101ef587c  cbz x0,0x7101ef5884
7101ef5880  bl 0x710392eb40
7101ef5884  mov x0,x21
7101ef5888  bl 0x710392eb40
7101ef588c  mov x0,x22
7101ef5890  bl 0x710392eb40
7101ef5894  stp x24,xzr,[sp, #0x58]
7101ef5898  ldr x8,[x19, #0x268]
7101ef589c  ldrsw x9,[x8, #0xa4]
7101ef58a0  cmp w9,#0x13
7101ef58a4  b.cs 0x7101ef5c9c
7101ef58a8  add x8,x8,x9, LSL #0x2
7101ef58ac  mov w9,#0x1
7101ef58b0  str w9,[x8, #0x58]
7101ef58b4  strb wzr,[x19, #0x2f8]
7101ef58b8  adrp x8,0x7105314000
7101ef58bc  add x8,x8,#0x4d8
7101ef58c0  ldarb w8,[x8]
7101ef58c4  tbz w8,#0x0,0x7101ef5c5c
7101ef58c8  adrp x8,0x71052cc000
7101ef58cc  ldrb w8,[x8, #0x5f0]
7101ef58d0  cbnz w8,0x7101ef5938
7101ef58d4  ldr x8,[x23, #0xe18]
7101ef58d8  ldr x8,[x8]
7101ef58dc  ldr w21,[x8, #0x3a0]
7101ef58e0  adrp x1,0x71042f8000
7101ef58e4  add x1,x1,#0xc09
7101ef58e8  add x8,sp,#0x48
7101ef58ec  mov x0,x20
7101ef58f0  bl 0x7103776640
7101ef58f4  ldr x0,[x19, #0x2a8]
7101ef58f8  add x1,sp,#0x48
7101ef58fc  mov w2,w21
7101ef5900  bl 0x7103392c70
7101ef5904  ldr x20,[sp, #0x50]
7101ef5908  stp x24,xzr,[sp, #0x48]
7101ef590c  cbz x20,0x7101ef5930
7101ef5910  ldr x0,[x20, #0x18]
7101ef5914  adrp x8,0x710523d000
7101ef5918  add x8,x8,#0x9a8
7101ef591c  stp x8,xzr,[x20, #0x10]
7101ef5920  cbz x0,0x7101ef5928
7101ef5924  bl 0x710392eb40
7101ef5928  mov x0,x20
7101ef592c  bl 0x710392eb40
7101ef5930  ldr x0,[x19, #0x2a8]
7101ef5934  bl 0x71033934a0
7101ef5938  adrp x21,0x7105328000
7101ef593c  ldr x8,[x21, #0xe18]
7101ef5940  ldr x8,[x8]
7101ef5944  ldrb w8,[x8, #0x3a6]
7101ef5948  cbz w8,0x7101ef5a98
7101ef594c  ldr x22,[x19, #0x2a8]
7101ef5950  ldrb w8,[x22, #0xb1]
7101ef5954  cbnz w8,0x7101ef5a38
7101ef5958  mov w8,#0x100
7101ef595c  strh w8,[x22, #0xb0]
7101ef5960  ldr x8,[x22, #0x8]
7101ef5964  ldr x0,[x8, #0x8]
7101ef5968  cbz x0,0x7101ef59a8
7101ef596c  add x20,x22,#0x68
7101ef5970  mov x1,x20
7101ef5974  bl 0x71037964b0
7101ef5978  cbz x0,0x7101ef59a8
7101ef597c  ldr x8,[x0]
7101ef5980  ldr x8,[x8, #0x138]
7101ef5984  blr x8
7101ef5988  tbnz w0,#0x0,0x7101ef59a8
7101ef598c  ldr x0,[x22, #0x8]
7101ef5990  mov x1,x20
7101ef5994  bl 0x7103778760
7101ef5998  mov w8,#0x9dc5
7101ef599c  movk w8,#0x811c, LSL #16
7101ef59a0  strb wzr,[x22, #0x68]
7101ef59a4  str x8,[x22, #0x60]
7101ef59a8  ldr x20,[x22, #0xa8]
7101ef59ac  ldrb w8,[x20, #0x90]
7101ef59b0  cbz w8,0x7101ef5a30
7101ef59b4  ldr w8,[x20, #0xa4]
7101ef59b8  ldr x0,[x20, #0x88]
7101ef59bc  str w8,[x20, #0xa0]
7101ef59c0  cbz x0,0x7101ef5a30
7101ef59c4  mov w1,wzr
7101ef59c8  bl 0x710373b540
7101ef59cc  ldr x0,[x20, #0x88]
7101ef59d0  str xzr,[x20, #0x88]
7101ef59d4  cbz x0,0x7101ef5a30
7101ef59d8  adrp x8,0x7104f73000
7101ef59dc  add x8,x8,#0xd50
7101ef59e0  str x8,[x0, #0x8]
7101ef59e4  ldr x8,[x0, #0x10]
7101ef59e8  cbz x8,0x7101ef5a24
7101ef59ec  adrp x9,0x7106dd5000
7101ef59f0  ldrb w9,[x9, #0x3a8]
7101ef59f4  cmp w9,#0x1
7101ef59f8  b.ne 0x7101ef5a24
7101ef59fc  adrp x10,0x7106dd5000
7101ef5a00  ldr w9,[x0, #0x18]
7101ef5a04  ldr w10,[x10, #0x3ac]
7101ef5a08  cmp w9,w10
7101ef5a0c  b.ne 0x7101ef5a24
7101ef5a10  ldr wzr,[x8, #0x38]!
7101ef5a14  ldaxr w9,[x8]
7101ef5a18  sub w9,w9,#0x1
7101ef5a1c  stlxr w10,w9,[x8]
7101ef5a20  cbnz w10,0x7101ef5a14
7101ef5a24  str xzr,[x0, #0x10]
7101ef5a28  strb wzr,[x0, #0x20]
7101ef5a2c  bl 0x710392eb40
7101ef5a30  ldr x0,[x22, #0xa8]
7101ef5a34  bl 0x7103399c10
7101ef5a38  ldr x8,[x19, #0x268]
7101ef5a3c  ldr x8,[x8, #0x8]
7101ef5a40  ldr x0,[x8, #0x8]
7101ef5a44  add x22,x19,#0x268
7101ef5a48  cbz x0,0x7101ef5a9c
7101ef5a4c  adrp x1,0x7104455000
7101ef5a50  add x1,x1,#0x2dc
7101ef5a54  bl 0x71037964b0
7101ef5a58  cbz x0,0x7101ef5a9c
7101ef5a5c  ldr x8,[x0]
7101ef5a60  ldr x8,[x8, #0x138]
7101ef5a64  blr x8
7101ef5a68  tbnz w0,#0x0,0x7101ef5a9c
7101ef5a6c  ldr x8,[x22]
7101ef5a70  ldr w9,[x8, #0xa8]
7101ef5a74  cmp w9,#0x1
7101ef5a78  b.ne 0x7101ef5a9c
7101ef5a7c  ldr x0,[x8, #0x8]
7101ef5a80  adrp x1,0x7104455000
7101ef5a84  add x1,x1,#0x2dc
7101ef5a88  bl 0x7103778760
7101ef5a8c  ldrb w8,[x19, #0x2f8]
7101ef5a90  cbnz w8,0x7101ef5ba0
7101ef5a94  b 0x7101ef5aa4
7101ef5a98  add x22,x19,#0x268
7101ef5a9c  ldrb w8,[x19, #0x2f8]
7101ef5aa0  cbnz w8,0x7101ef5ba0
7101ef5aa4  ldr x8,[x22]
7101ef5aa8  ldr x8,[x8, #0x8]
7101ef5aac  ldr x0,[x8, #0x8]
7101ef5ab0  cbz x0,0x7101ef5ad4
7101ef5ab4  adrp x1,0x7104455000
7101ef5ab8  add x1,x1,#0x2dc
7101ef5abc  bl 0x71037964b0
7101ef5ac0  cbz x0,0x7101ef5ad4
7101ef5ac4  ldr x8,[x0]
7101ef5ac8  ldr x8,[x8, #0x138]
7101ef5acc  blr x8
7101ef5ad0  tbz w0,#0x0,0x7101ef5ba0
7101ef5ad4  adrp x8,0x710532f000
7101ef5ad8  ldr x8,[x8, #0x8d0]
7101ef5adc  ldr x0,[x8, #0x8]
7101ef5ae0  ldrb w8,[x0, #0x191]
7101ef5ae4  cbnz w8,0x7101ef5b64
7101ef5ae8  mov x20,#0x8e7
7101ef5aec  movk x20,#0x405f, LSL #16
7101ef5af0  movk x20,#0x19, LSL #32
7101ef5af4  mov w2,#0x4
7101ef5af8  mov x1,x20
7101ef5afc  bl 0x7103313f20
7101ef5b00  tbz w0,#0x0,0x7101ef5b64
7101ef5b04  add x0,sp,#0x8
7101ef5b08  mov x1,x20
7101ef5b0c  bl 0x71024076d0
7101ef5b10  ldr x8,[sp, #0x18]
7101ef5b14  adrp x9,0x7104f73000
7101ef5b18  add x9,x9,#0xd50
7101ef5b1c  str x9,[sp, #0x10]
7101ef5b20  cbz x8,0x7101ef5b90
7101ef5b24  adrp x8,0x7106dd5000
7101ef5b28  ldrb w8,[x8, #0x3a8]
7101ef5b2c  cmp w8,#0x1
7101ef5b30  b.ne 0x7101ef5b90
7101ef5b34  adrp x9,0x7106dd5000
7101ef5b38  ldr w8,[sp, #0x20]
7101ef5b3c  ldr w9,[x9, #0x3ac]
7101ef5b40  cmp w8,w9
7101ef5b44  b.ne 0x7101ef5b90
7101ef5b48  ldr x8,[sp, #0x18]
7101ef5b4c  ldr wzr,[x8, #0x38]!
7101ef5b50  ldaxr w9,[x8]
7101ef5b54  sub w9,w9,#0x1
7101ef5b58  stlxr w10,w9,[x8]
7101ef5b5c  cbnz w10,0x7101ef5b50
7101ef5b60  b 0x7101ef5b90
7101ef5b64  mov x8,#0x650000000000
7101ef5b68  movk x8,#0x87, LSL #48
7101ef5b6c  strb wzr,[sp, #0x28]
7101ef5b70  stp xzr,x8,[sp, #0x18]
7101ef5b74  mov x8,#-0x1
7101ef5b78  stp x8,xzr,[sp, #0x30]
7101ef5b7c  adrp x8,0x7104f73000
7101ef5b80  add x8,x8,#0xd50
7101ef5b84  str wzr,[sp, #0x8]
7101ef5b88  str xzr,[sp, #0x40]
7101ef5b8c  str x8,[sp, #0x10]
7101ef5b90  mov w8,#0x1
7101ef5b94  str xzr,[sp, #0x18]
7101ef5b98  strb wzr,[sp, #0x28]
7101ef5b9c  strb w8,[x19, #0x2f8]
7101ef5ba0  ldr x8,[x22]
7101ef5ba4  ldr x8,[x8, #0x8]
7101ef5ba8  ldr x0,[x8, #0x8]
7101ef5bac  cbz x0,0x7101ef5bd0
7101ef5bb0  adrp x1,0x7104455000
7101ef5bb4  add x1,x1,#0x2dc
7101ef5bb8  bl 0x71037964b0
7101ef5bbc  cbz x0,0x7101ef5bd0
7101ef5bc0  ldr x8,[x0]
7101ef5bc4  ldr x8,[x8, #0x138]
7101ef5bc8  blr x8
7101ef5bcc  tbz w0,#0x0,0x7101ef5bf8
7101ef5bd0  ldr x8,[x19, #0x2a8]
7101ef5bd4  ldrb w8,[x8, #0xb1]
7101ef5bd8  cbz w8,0x7101ef5bf8
7101ef5bdc  ldrsw x8,[x19, #0x244]
7101ef5be0  cmp w8,#0x13
7101ef5be4  b.cs 0x7101ef5c9c
7101ef5be8  add x8,x19,x8, LSL #0x2
7101ef5bec  orr w9,wzr,#0xc
7101ef5bf0  str w9,[x8, #0x1f8]
7101ef5bf4  b 0x7101ef5c18
7101ef5bf8  ldr x8,[x21, #0xe18]
7101ef5bfc  ldr x0,[x8]
7101ef5c00  bl 0x71023489d0
7101ef5c04  tbz w0,#0x0,0x7101ef5c18
7101ef5c08  ldr x8,[x21, #0xe18]
7101ef5c0c  ldr x8,[x8]
7101ef5c10  ldrb w9,[x8, #0x3a6]
7101ef5c14  cbz w9,0x7101ef5c30
7101ef5c18  ldp x29,x30,[sp, #0xb0]
7101ef5c1c  ldp x20,x19,[sp, #0xa0]
7101ef5c20  ldp x22,x21,[sp, #0x90]
7101ef5c24  ldp x24,x23,[sp, #0x80]
7101ef5c28  add sp,sp,#0xc0
7101ef5c2c  ret
7101ef5c30  ldr x9,[x19]
7101ef5c34  ldr x9,[x9]
7101ef5c38  ldr x9,[x9]
7101ef5c3c  ldr x9,[x9, #0x600]
7101ef5c40  ldrb w10,[x9, #0x4aa]
7101ef5c44  cbz w10,0x7101ef5c18
7101ef5c48  ldrb w9,[x9, #0x1c0]
7101ef5c4c  tbz w9,#0x1,0x7101ef5c18
7101ef5c50  mov w9,#0x1
7101ef5c54  strb w9,[x8, #0x3a6]
7101ef5c58  b 0x7101ef5c18
7101ef5c5c  adrp x0,0x7105314000
7101ef5c60  add x0,x0,#0x4d8
7101ef5c64  bl 0x71039c06b0
7101ef5c68  cbz w0,0x7101ef58c8
7101ef5c6c  bl 0x7101764000
7101ef5c70  adrp x0,0x7101763000
7101ef5c74  add x0,x0,#0xc40
7101ef5c78  adrp x1,0x71052c5000
7101ef5c7c  add x1,x1,#0x180
7101ef5c80  adrp x2,0x7104f17000
7101ef5c84  add x2,x2,#0x0
7101ef5c88  bl 0x71000001c0
7101ef5c8c  adrp x0,0x7105314000
7101ef5c90  add x0,x0,#0x4d8
7101ef5c94  bl 0x71039c06c0
7101ef5c98  b 0x7101ef58c8
7101ef5c9c  bl 0x71039c2650
