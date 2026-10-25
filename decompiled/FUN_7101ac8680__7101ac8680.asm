// addr:      7101ac8680
// offset:    0x1ac8680
// name:      FUN_7101ac8680
// mangled:   
// size:      8316

7101ac8680  stp x28,x27,[sp, #-0x60]!
7101ac8684  stp x26,x25,[sp, #0x10]
7101ac8688  stp x24,x23,[sp, #0x20]
7101ac868c  stp x22,x21,[sp, #0x30]
7101ac8690  stp x20,x19,[sp, #0x40]
7101ac8694  stp x29,x30,[sp, #0x50]
7101ac8698  add x29,sp,#0x50
7101ac869c  sub sp,sp,#0x560
7101ac86a0  ldr x8,[x1]
7101ac86a4  ldr x8,[x8]
7101ac86a8  mov x19,x0
7101ac86ac  ldr x0,[x8]
7101ac86b0  mov x20,x1
7101ac86b4  mov w1,wzr
7101ac86b8  mov x21,x2
7101ac86bc  bl 0x71037760f0
7101ac86c0  ldr x8,[x19, #0x2f0]
7101ac86c4  ldr x0,[x8]
7101ac86c8  ldrsw x2,[x0, #0x70]
7101ac86cc  ldr w3,[x0, #0x68]
7101ac86d0  adrp x1,0x7104544000
7101ac86d4  add x1,x1,#0x5e8
7101ac86d8  mov w4,wzr
7101ac86dc  bl 0x710323beb0
7101ac86e0  ldr x8,[x19, #0x2f0]
7101ac86e4  ldr x22,[x8]
7101ac86e8  mov x0,x22
7101ac86ec  bl 0x710323cb80
7101ac86f0  tbnz w0,#0x0,0x7101ac8710
7101ac86f4  mov w23,#0x4240
7101ac86f8  movk w23,#0xf, LSL #16
7101ac86fc  mov x0,x23
7101ac8700  bl 0x71039c0d80
7101ac8704  mov x0,x22
7101ac8708  bl 0x710323cb80
7101ac870c  tbz w0,#0x0,0x7101ac86fc
7101ac8710  ldr x20,[x20]
7101ac8714  add x22,x19,#0x230
7101ac8718  cmp x22,x21
7101ac871c  b.eq 0x7101ac8790
7101ac8720  ldr x8,[x21, #0x8]
7101ac8724  ldr x8,[x8]
7101ac8728  ldr x9,[x19, #0x238]
7101ac872c  str x8,[x9]
7101ac8730  ldr x8,[x21, #0x8]
7101ac8734  ldr x8,[x8, #0x8]
7101ac8738  ldr x9,[x19, #0x238]
7101ac873c  str x8,[x9, #0x8]
7101ac8740  ldr x9,[x21, #0x8]
7101ac8744  ldr x8,[x19, #0x238]
7101ac8748  cmp x8,x9
7101ac874c  b.eq 0x7101ac8790
7101ac8750  ldr x10,[x9, #0x18]
7101ac8754  ldr x10,[x10]
7101ac8758  ldr x11,[x8, #0x18]
7101ac875c  str x10,[x11]
7101ac8760  ldr x10,[x9, #0x18]
7101ac8764  ldr x10,[x10, #0x8]
7101ac8768  ldr x11,[x8, #0x18]
7101ac876c  str x10,[x11, #0x8]
7101ac8770  ldr x10,[x9, #0x18]
7101ac8774  ldr x10,[x10, #0x10]
7101ac8778  ldr x11,[x8, #0x18]
7101ac877c  str x10,[x11, #0x10]
7101ac8780  ldr x9,[x9, #0x18]
7101ac8784  ldr x9,[x9, #0x18]
7101ac8788  ldr x8,[x8, #0x18]
7101ac878c  str x9,[x8, #0x18]
7101ac8790  mov w26,#0x101
7101ac8794  add x8,sp,#0x2fb
7101ac8798  str xzr,[sp, #0x3f0]
7101ac879c  strh w26,[sp, #0x3f8]
7101ac87a0  stur wzr,[x8, #0xff]
7101ac87a4  mov w8,#0x1
7101ac87a8  mov x27,#0x41f0000000000000
7101ac87ac  add x0,sp,#0x3f0
7101ac87b0  add x23,sp,#0x2b0
7101ac87b4  strh wzr,[sp, #0x3fe]
7101ac87b8  str w8,[sp, #0x400]
7101ac87bc  strh w8,[sp, #0x404]
7101ac87c0  strb w8,[sp, #0x406]
7101ac87c4  str x27,[sp, #0x408]
7101ac87c8  str wzr,[sp, #0x410]
7101ac87cc  str xzr,[sp, #0x440]
7101ac87d0  str xzr,[sp, #0x470]
7101ac87d4  str xzr,[sp, #0x4a0]
7101ac87d8  str xzr,[sp, #0x4d0]
7101ac87dc  str xzr,[sp, #0x500]
7101ac87e0  str wzr,[sp, #0x510]
7101ac87e4  bl 0x710337df20
7101ac87e8  mov w8,#0x42700000
7101ac87ec  mov w1,#0x301c
7101ac87f0  mov w0,#0x10
7101ac87f4  strb wzr,[sp, #0x3f8]
7101ac87f8  str w8,[sp, #0x40c]
7101ac87fc  bl 0x710392e290
7101ac8800  mov x24,x0
7101ac8804  cbnz x0,0x7101ac8850
7101ac8808  adrp x8,0x7105332000
7101ac880c  ldr x0,[x8, #0xf00]
7101ac8810  cbz x0,0x7101ac884c
7101ac8814  mov w8,#0x301c
7101ac8818  str wzr,[sp, #0x180]
7101ac881c  add x1,sp,#0x180
7101ac8820  str x8,[sp, #0x2b0]
7101ac8824  ldr x8,[x0]
7101ac8828  ldr x8,[x8, #0x30]
7101ac882c  add x2,sp,#0x2b0
7101ac8830  blr x8
7101ac8834  tbz w0,#0x0,0x7101ac884c
7101ac8838  mov w1,#0x301c
7101ac883c  mov w0,#0x10
7101ac8840  bl 0x710392e290
7101ac8844  mov x24,x0
7101ac8848  cbnz x0,0x7101ac8850
7101ac884c  mov x24,xzr
7101ac8850  mov w8,#0x100c
7101ac8854  str wzr,[x24, #0x8]
7101ac8858  strh wzr,[x24, #0xc]
7101ac885c  str xzr,[x24, x8, LSL #0x0]
7101ac8860  mov w8,#0x2014
7101ac8864  strh wzr,[x24, #0x1014]
7101ac8868  mov w9,#0x6569
7101ac886c  mov w10,#0x6d
7101ac8870  str xzr,[x24, x8, LSL #0x0]
7101ac8874  mov w8,#0x201c
7101ac8878  strh wzr,[x24, x8, LSL #0x0]
7101ac887c  mov w8,#0x4
7101ac8880  str x8,[x24]
7101ac8884  mov x8,#0x2a00000000
7101ac8888  mov w11,#0x89
7101ac888c  str x8,[sp, #0x2b0]
7101ac8890  mov x8,#0x6e6d
7101ac8894  movk x8,#0x5f75, LSL #16
7101ac8898  movk x8,#0x6572, LSL #32
7101ac889c  movk x8,#0x6c70, LSL #48
7101ac88a0  str x8,[sp, #0x2b8]
7101ac88a4  mov x8,#0x7961
7101ac88a8  movk x8,#0x645f, LSL #16
7101ac88ac  movk x8,#0x7465, LSL #32
7101ac88b0  movk x8,#0x6961, LSL #48
7101ac88b4  str x8,[sp, #0x2c0]
7101ac88b8  mov w8,#0x5f6c
7101ac88bc  strh w8,[sp, #0x2c8]
7101ac88c0  mov x8,#0x656b
7101ac88c4  movk x8,#0x6279, LSL #16
7101ac88c8  movk x8,#0x616f, LSL #32
7101ac88cc  movk x8,#0x5f64, LSL #48
7101ac88d0  stur x8,[x23, #0x1a]
7101ac88d4  mov w8,#0x6568
7101ac88d8  movk w8,#0x706c, LSL #16
7101ac88dc  stur w8,[x23, #0x22]
7101ac88e0  mov w8,#0x745f
7101ac88e4  strh w8,[sp, #0x2d6]
7101ac88e8  mov x8,#0x7469
7101ac88ec  movk x8,#0x656c, LSL #16
7101ac88f0  movk x8,#0x6d5f, LSL #32
7101ac88f4  movk x8,#0x766f, LSL #48
7101ac88f8  str x8,[sp, #0x2d8]
7101ac88fc  mov w8,#0x9dc5
7101ac8900  movk w8,#0x811c, LSL #16
7101ac8904  strh w9,[sp, #0x2e0]
7101ac8908  mov w9,#0x9
7101ac890c  add x12,sp,#0x2b0
7101ac8910  strb wzr,[sp, #0x2e2]
7101ac8914  mul w8,w8,w11
7101ac8918  and w10,w10,#0xff
7101ac891c  eor w8,w8,w10
7101ac8920  ldrb w10,[x12, x9, LSL ]
7101ac8924  add x9,x9,#0x1
7101ac8928  cbnz w10,0x7101ac8914
7101ac892c  add x1,sp,#0x2b0
7101ac8930  mov x0,x24
7101ac8934  str w8,[sp, #0x2b0]
7101ac8938  bl 0x7103391610
7101ac893c  ldr x0,[x19, #0x338]
7101ac8940  mov x1,x24
7101ac8944  bl 0x7103391f40
7101ac8948  adrp x1,0x71043be000
7101ac894c  add x1,x1,#0xec7
7101ac8950  add x8,sp,#0x3e0
7101ac8954  mov x0,x22
7101ac8958  bl 0x7103776640
7101ac895c  add x0,sp,#0x3e0
7101ac8960  bl 0x710337d360
7101ac8964  ldr x23,[sp, #0x3e8]
7101ac8968  adrp x28,0x710523d000
7101ac896c  add x28,x28,#0x988
7101ac8970  str x28,[sp, #0x3e0]
7101ac8974  str xzr,[sp, #0x3e8]
7101ac8978  cbz x23,0x7101ac899c
7101ac897c  ldr x0,[x23, #0x18]
7101ac8980  adrp x8,0x710523d000
7101ac8984  add x8,x8,#0x9a8
7101ac8988  stp x8,xzr,[x23, #0x10]
7101ac898c  cbz x0,0x7101ac8994
7101ac8990  bl 0x710392eb40
7101ac8994  mov x0,x23
7101ac8998  bl 0x710392eb40
7101ac899c  add x23,x19,#0x240
7101ac89a0  adrp x2,0x710437c000
7101ac89a4  add x2,x2,#0xb65
7101ac89a8  add x3,sp,#0x3f0
7101ac89ac  mov x0,x23
7101ac89b0  mov x1,x22
7101ac89b4  bl 0x7103770b30
7101ac89b8  adrp x2,0x710425f000
7101ac89bc  add x2,x2,#0x585
7101ac89c0  mov x0,x23
7101ac89c4  mov w1,wzr
7101ac89c8  bl 0x71037717d0
7101ac89cc  ldr x8,[x19, #0x240]
7101ac89d0  ldr x9,[x8, #0x1b8]
7101ac89d4  cbz x9,0x7101ac8a40
7101ac89d8  add x10,x8,#0x1b8
7101ac89dc  mov x8,x10
7101ac89e0  ldr w11,[x9, #0x20]
7101ac89e4  cmp w11,#0x0
7101ac89e8  cset w11,lt
7101ac89ec  csel x8,x8,x9,lt
7101ac89f0  ldr x9,[x9, w11, UXTW #0x3]
7101ac89f4  cbnz x9,0x7101ac89e0
7101ac89f8  cmp x8,x10
7101ac89fc  b.eq 0x7101ac8a40
7101ac8a00  ldr w9,[x8, #0x20]
7101ac8a04  cmp w9,#0x0
7101ac8a08  b.gt 0x7101ac8a40
7101ac8a0c  ldr x23,[x8, #0x28]
7101ac8a10  cbz x23,0x7101ac8a40
7101ac8a14  ldr x8,[x23]
7101ac8a18  ldr x8,[x8, #0x1f8]
7101ac8a1c  mov w1,#0x1
7101ac8a20  mov x0,x23
7101ac8a24  blr x8
7101ac8a28  ldr x8,[x23]
7101ac8a2c  ldr x8,[x8, #0x388]
7101ac8a30  mov x0,x23
7101ac8a34  mov w1,wzr
7101ac8a38  mov w2,wzr
7101ac8a3c  blr x8
7101ac8a40  add x0,sp,#0x2b0
7101ac8a44  add x1,sp,#0x3f0
7101ac8a48  add x23,sp,#0x2b0
7101ac8a4c  bl 0x7101989b70
7101ac8a50  mov w8,#0x43160000
7101ac8a54  add x1,x23,#0x30
7101ac8a58  add x23,sp,#0x180
7101ac8a5c  str w8,[sp, #0x2cc]
7101ac8a60  adrp x8,0x71050a9000
7101ac8a64  add x8,x8,#0x828
7101ac8a68  add x0,sp,#0x180
7101ac8a6c  stp x8,x19,[sp, #0x180]
7101ac8a70  str x23,[sp, #0x1a0]
7101ac8a74  bl 0x7101a7ed70
7101ac8a78  ldr x0,[sp, #0x1a0]
7101ac8a7c  cmp x23,x0
7101ac8a80  b.eq 0x7101ac8a94
7101ac8a84  cbz x0,0x7101ac8aa0
7101ac8a88  ldr x8,[x0]
7101ac8a8c  ldr x8,[x8, #0x28]
7101ac8a90  b 0x7101ac8a9c
7101ac8a94  ldr x8,[x0]
7101ac8a98  ldr x8,[x8, #0x20]
7101ac8a9c  blr x8
7101ac8aa0  add x9,sp,#0x2b0
7101ac8aa4  adrp x8,0x71050a9000
7101ac8aa8  add x8,x8,#0x870
7101ac8aac  add x1,x9,#0x60
7101ac8ab0  add x23,sp,#0x180
7101ac8ab4  str x23,[sp, #0x1a0]
7101ac8ab8  add x0,sp,#0x180
7101ac8abc  stp x8,x19,[sp, #0x180]
7101ac8ac0  bl 0x7101989a30
7101ac8ac4  ldr x0,[sp, #0x1a0]
7101ac8ac8  cmp x23,x0
7101ac8acc  str x24,[sp, #0x18]
7101ac8ad0  b.eq 0x7101ac8ae4
7101ac8ad4  cbz x0,0x7101ac8af0
7101ac8ad8  ldr x8,[x0]
7101ac8adc  ldr x8,[x8, #0x28]
7101ac8ae0  b 0x7101ac8aec
7101ac8ae4  ldr x8,[x0]
7101ac8ae8  ldr x8,[x8, #0x20]
7101ac8aec  blr x8
7101ac8af0  add x23,x19,#0x248
7101ac8af4  adrp x2,0x7104433000
7101ac8af8  add x2,x2,#0x952
7101ac8afc  add x3,sp,#0x2b0
7101ac8b00  mov x0,x23
7101ac8b04  mov x1,x22
7101ac8b08  add x25,sp,#0x2b0
7101ac8b0c  bl 0x7103770b30
7101ac8b10  adrp x2,0x7104401000
7101ac8b14  add x2,x2,#0xdad
7101ac8b18  mov w1,#0x1
7101ac8b1c  mov x0,x23
7101ac8b20  bl 0x71037717d0
7101ac8b24  adrp x2,0x7104308000
7101ac8b28  add x2,x2,#0xc5c
7101ac8b2c  mov w1,#0x2
7101ac8b30  mov x0,x23
7101ac8b34  bl 0x71037717d0
7101ac8b38  adrp x2,0x710424f000
7101ac8b3c  add x2,x2,#0xd25
7101ac8b40  orr w1,wzr,#0x3
7101ac8b44  mov x0,x23
7101ac8b48  bl 0x71037717d0
7101ac8b4c  adrp x2,0x710432a000
7101ac8b50  add x2,x2,#0x6e1
7101ac8b54  mov w1,#0x4
7101ac8b58  mov x0,x23
7101ac8b5c  bl 0x71037717d0
7101ac8b60  ldr x8,[x19, #0x248]
7101ac8b64  ldr x9,[x8, #0x1b8]
7101ac8b68  cbz x9,0x7101ac8d3c
7101ac8b6c  add x8,x8,#0x1b8
7101ac8b70  mov x10,x8
7101ac8b74  mov x11,x9
7101ac8b78  ldr w12,[x11, #0x20]
7101ac8b7c  cmp w12,#0x1
7101ac8b80  cset w12,lt
7101ac8b84  csel x10,x10,x11,lt
7101ac8b88  ldr x11,[x11, w12, UXTW #0x3]
7101ac8b8c  cbnz x11,0x7101ac8b78
7101ac8b90  cmp x10,x8
7101ac8b94  b.eq 0x7101ac8be4
7101ac8b98  ldr w11,[x10, #0x20]
7101ac8b9c  cmp w11,#0x1
7101ac8ba0  b.gt 0x7101ac8be4
7101ac8ba4  ldr x24,[x10, #0x28]
7101ac8ba8  cbz x24,0x7101ac8be4
7101ac8bac  ldr x8,[x24]
7101ac8bb0  ldr x8,[x8, #0x1f8]
7101ac8bb4  mov w1,#0x1
7101ac8bb8  mov x0,x24
7101ac8bbc  blr x8
7101ac8bc0  ldr x8,[x24]
7101ac8bc4  ldr x8,[x8, #0x388]
7101ac8bc8  mov x0,x24
7101ac8bcc  mov w1,wzr
7101ac8bd0  mov w2,wzr
7101ac8bd4  blr x8
7101ac8bd8  ldr x9,[x23]
7101ac8bdc  add x8,x9,#0x1b8
7101ac8be0  ldr x9,[x9, #0x1b8]
7101ac8be4  cbz x9,0x7101ac8d3c
7101ac8be8  mov x10,x8
7101ac8bec  mov x11,x9
7101ac8bf0  ldr w12,[x11, #0x20]
7101ac8bf4  cmp w12,#0x2
7101ac8bf8  cset w12,lt
7101ac8bfc  csel x10,x10,x11,lt
7101ac8c00  ldr x11,[x11, w12, UXTW #0x3]
7101ac8c04  cbnz x11,0x7101ac8bf0
7101ac8c08  cmp x10,x8
7101ac8c0c  b.eq 0x7101ac8c5c
7101ac8c10  ldr w11,[x10, #0x20]
7101ac8c14  cmp w11,#0x2
7101ac8c18  b.gt 0x7101ac8c5c
7101ac8c1c  ldr x24,[x10, #0x28]
7101ac8c20  cbz x24,0x7101ac8c5c
7101ac8c24  ldr x8,[x24]
7101ac8c28  ldr x8,[x8, #0x1f8]
7101ac8c2c  mov w1,#0x1
7101ac8c30  mov x0,x24
7101ac8c34  blr x8
7101ac8c38  ldr x8,[x24]
7101ac8c3c  ldr x8,[x8, #0x388]
7101ac8c40  mov x0,x24
7101ac8c44  mov w1,wzr
7101ac8c48  mov w2,wzr
7101ac8c4c  blr x8
7101ac8c50  ldr x9,[x23]
7101ac8c54  add x8,x9,#0x1b8
7101ac8c58  ldr x9,[x9, #0x1b8]
7101ac8c5c  cbz x9,0x7101ac8d3c
7101ac8c60  mov x10,x8
7101ac8c64  mov x11,x9
7101ac8c68  ldr w12,[x11, #0x20]
7101ac8c6c  cmp w12,#0x3
7101ac8c70  cset w12,lt
7101ac8c74  csel x10,x10,x11,lt
7101ac8c78  ldr x11,[x11, w12, UXTW #0x3]
7101ac8c7c  cbnz x11,0x7101ac8c68
7101ac8c80  cmp x10,x8
7101ac8c84  b.eq 0x7101ac8cd4
7101ac8c88  ldr w11,[x10, #0x20]
7101ac8c8c  cmp w11,#0x3
7101ac8c90  b.gt 0x7101ac8cd4
7101ac8c94  ldr x24,[x10, #0x28]
7101ac8c98  cbz x24,0x7101ac8cd4
7101ac8c9c  ldr x8,[x24]
7101ac8ca0  ldr x8,[x8, #0x1f8]
7101ac8ca4  mov w1,#0x1
7101ac8ca8  mov x0,x24
7101ac8cac  blr x8
7101ac8cb0  ldr x8,[x24]
7101ac8cb4  ldr x8,[x8, #0x388]
7101ac8cb8  mov x0,x24
7101ac8cbc  mov w1,wzr
7101ac8cc0  mov w2,wzr
7101ac8cc4  blr x8
7101ac8cc8  ldr x9,[x23]
7101ac8ccc  add x8,x9,#0x1b8
7101ac8cd0  ldr x9,[x9, #0x1b8]
7101ac8cd4  cbz x9,0x7101ac8d3c
7101ac8cd8  mov x10,x8
7101ac8cdc  ldr w11,[x9, #0x20]
7101ac8ce0  cmp w11,#0x4
7101ac8ce4  cset w11,lt
7101ac8ce8  csel x10,x10,x9,lt
7101ac8cec  ldr x9,[x9, w11, UXTW #0x3]
7101ac8cf0  cbnz x9,0x7101ac8cdc
7101ac8cf4  cmp x10,x8
7101ac8cf8  b.eq 0x7101ac8d3c
7101ac8cfc  ldr w8,[x10, #0x20]
7101ac8d00  cmp w8,#0x4
7101ac8d04  b.gt 0x7101ac8d3c
7101ac8d08  ldr x24,[x10, #0x28]
7101ac8d0c  cbz x24,0x7101ac8d3c
7101ac8d10  ldr x8,[x24]
7101ac8d14  ldr x8,[x8, #0x1f8]
7101ac8d18  mov w1,#0x1
7101ac8d1c  mov x0,x24
7101ac8d20  blr x8
7101ac8d24  ldr x8,[x24]
7101ac8d28  ldr x8,[x8, #0x388]
7101ac8d2c  mov x0,x24
7101ac8d30  mov w1,wzr
7101ac8d34  mov w2,wzr
7101ac8d38  blr x8
7101ac8d3c  mov w1,#0x1
7101ac8d40  mov w2,#0x1
7101ac8d44  mov x0,x23
7101ac8d48  bl 0x7103771a80
7101ac8d4c  ldr x0,[sp, #0x3c0]
7101ac8d50  add x8,x25,#0xf0
7101ac8d54  cmp x8,x0
7101ac8d58  b.eq 0x7101ac8d6c
7101ac8d5c  cbz x0,0x7101ac8d78
7101ac8d60  ldr x8,[x0]
7101ac8d64  ldr x8,[x8, #0x28]
7101ac8d68  b 0x7101ac8d74
7101ac8d6c  ldr x8,[x0]
7101ac8d70  ldr x8,[x8, #0x20]
7101ac8d74  blr x8
7101ac8d78  ldr x0,[sp, #0x390]
7101ac8d7c  add x8,sp,#0x2b0
7101ac8d80  add x8,x8,#0xc0
7101ac8d84  cmp x8,x0
7101ac8d88  b.eq 0x7101ac8d9c
7101ac8d8c  cbz x0,0x7101ac8da8
7101ac8d90  ldr x8,[x0]
7101ac8d94  ldr x8,[x8, #0x28]
7101ac8d98  b 0x7101ac8da4
7101ac8d9c  ldr x8,[x0]
7101ac8da0  ldr x8,[x8, #0x20]
7101ac8da4  blr x8
7101ac8da8  ldr x0,[sp, #0x360]
7101ac8dac  add x8,sp,#0x2b0
7101ac8db0  add x8,x8,#0x90
7101ac8db4  cmp x8,x0
7101ac8db8  b.eq 0x7101ac8dcc
7101ac8dbc  cbz x0,0x7101ac8dd8
7101ac8dc0  ldr x8,[x0]
7101ac8dc4  ldr x8,[x8, #0x28]
7101ac8dc8  b 0x7101ac8dd4
7101ac8dcc  ldr x8,[x0]
7101ac8dd0  ldr x8,[x8, #0x20]
7101ac8dd4  blr x8
7101ac8dd8  ldr x0,[sp, #0x330]
7101ac8ddc  add x8,sp,#0x2b0
7101ac8de0  add x8,x8,#0x60
7101ac8de4  cmp x8,x0
7101ac8de8  b.eq 0x7101ac8dfc
7101ac8dec  cbz x0,0x7101ac8e08
7101ac8df0  ldr x8,[x0]
7101ac8df4  ldr x8,[x8, #0x28]
7101ac8df8  b 0x7101ac8e04
7101ac8dfc  ldr x8,[x0]
7101ac8e00  ldr x8,[x8, #0x20]
7101ac8e04  blr x8
7101ac8e08  ldr x0,[sp, #0x300]
7101ac8e0c  add x8,sp,#0x2b0
7101ac8e10  add x8,x8,#0x30
7101ac8e14  cmp x8,x0
7101ac8e18  b.eq 0x7101ac8e2c
7101ac8e1c  cbz x0,0x7101ac8e38
7101ac8e20  ldr x8,[x0]
7101ac8e24  ldr x8,[x8, #0x28]
7101ac8e28  b 0x7101ac8e34
7101ac8e2c  ldr x8,[x0]
7101ac8e30  ldr x8,[x8, #0x20]
7101ac8e34  blr x8
7101ac8e38  add x0,sp,#0x2b0
7101ac8e3c  add x1,sp,#0x3f0
7101ac8e40  add x23,sp,#0x2b0
7101ac8e44  bl 0x7101989b70
7101ac8e48  ldr x0,[sp, #0x330]
7101ac8e4c  add x24,x23,#0x60
7101ac8e50  cmp x24,x0
7101ac8e54  str xzr,[sp, #0x330]
7101ac8e58  b.eq 0x7101ac8e6c
7101ac8e5c  cbz x0,0x7101ac8e78
7101ac8e60  ldr x8,[x0]
7101ac8e64  ldr x8,[x8, #0x28]
7101ac8e68  b 0x7101ac8e74
7101ac8e6c  ldr x8,[x0]
7101ac8e70  ldr x8,[x8, #0x20]
7101ac8e74  blr x8
7101ac8e78  ldr x0,[sp, #0x360]
7101ac8e7c  add x8,sp,#0x2b0
7101ac8e80  add x25,x8,#0x90
7101ac8e84  cmp x25,x0
7101ac8e88  str x21,[sp, #0x10]
7101ac8e8c  mov x21,x28
7101ac8e90  str xzr,[sp, #0x360]
7101ac8e94  b.eq 0x7101ac8ea8
7101ac8e98  cbz x0,0x7101ac8eb4
7101ac8e9c  ldr x8,[x0]
7101ac8ea0  ldr x8,[x8, #0x28]
7101ac8ea4  b 0x7101ac8eb0
7101ac8ea8  ldr x8,[x0]
7101ac8eac  ldr x8,[x8, #0x20]
7101ac8eb0  blr x8
7101ac8eb4  add x23,x19,#0x250
7101ac8eb8  adrp x2,0x7104401000
7101ac8ebc  add x2,x2,#0xbc0
7101ac8ec0  add x3,sp,#0x2b0
7101ac8ec4  mov x0,x23
7101ac8ec8  mov x1,x22
7101ac8ecc  add x28,sp,#0x2b0
7101ac8ed0  bl 0x7103770b30
7101ac8ed4  adrp x2,0x71042e7000
7101ac8ed8  add x2,x2,#0x35a
7101ac8edc  mov w1,#0x5
7101ac8ee0  mov x0,x23
7101ac8ee4  bl 0x71037717d0
7101ac8ee8  ldr x8,[x19, #0x250]
7101ac8eec  ldr x9,[x8, #0x1b8]
7101ac8ef0  cbz x9,0x7101ac8f5c
7101ac8ef4  add x10,x8,#0x1b8
7101ac8ef8  mov x8,x10
7101ac8efc  ldr w11,[x9, #0x20]
7101ac8f00  cmp w11,#0x5
7101ac8f04  cset w11,lt
7101ac8f08  csel x8,x8,x9,lt
7101ac8f0c  ldr x9,[x9, w11, UXTW #0x3]
7101ac8f10  cbnz x9,0x7101ac8efc
7101ac8f14  cmp x8,x10
7101ac8f18  b.eq 0x7101ac8f5c
7101ac8f1c  ldr w9,[x8, #0x20]
7101ac8f20  cmp w9,#0x5
7101ac8f24  b.gt 0x7101ac8f5c
7101ac8f28  ldr x23,[x8, #0x28]
7101ac8f2c  cbz x23,0x7101ac8f5c
7101ac8f30  ldr x8,[x23]
7101ac8f34  ldr x8,[x8, #0x1f8]
7101ac8f38  mov w1,#0x1
7101ac8f3c  mov x0,x23
7101ac8f40  blr x8
7101ac8f44  ldr x8,[x23]
7101ac8f48  ldr x8,[x8, #0x388]
7101ac8f4c  mov x0,x23
7101ac8f50  mov w1,wzr
7101ac8f54  mov w2,wzr
7101ac8f58  blr x8
7101ac8f5c  ldr x0,[sp, #0x3c0]
7101ac8f60  add x8,x28,#0xf0
7101ac8f64  cmp x8,x0
7101ac8f68  b.eq 0x7101ac8f7c
7101ac8f6c  cbz x0,0x7101ac8f88
7101ac8f70  ldr x8,[x0]
7101ac8f74  ldr x8,[x8, #0x28]
7101ac8f78  b 0x7101ac8f84
7101ac8f7c  ldr x8,[x0]
7101ac8f80  ldr x8,[x8, #0x20]
7101ac8f84  blr x8
7101ac8f88  ldr x0,[sp, #0x390]
7101ac8f8c  add x8,sp,#0x2b0
7101ac8f90  add x8,x8,#0xc0
7101ac8f94  cmp x8,x0
7101ac8f98  b.eq 0x7101ac8fac
7101ac8f9c  cbz x0,0x7101ac8fb8
7101ac8fa0  ldr x8,[x0]
7101ac8fa4  ldr x8,[x8, #0x28]
7101ac8fa8  b 0x7101ac8fb4
7101ac8fac  ldr x8,[x0]
7101ac8fb0  ldr x8,[x8, #0x20]
7101ac8fb4  blr x8
7101ac8fb8  ldr x0,[sp, #0x360]
7101ac8fbc  cmp x25,x0
7101ac8fc0  b.eq 0x7101ac8fd4
7101ac8fc4  cbz x0,0x7101ac8fe0
7101ac8fc8  ldr x8,[x0]
7101ac8fcc  ldr x8,[x8, #0x28]
7101ac8fd0  b 0x7101ac8fdc
7101ac8fd4  ldr x8,[x0]
7101ac8fd8  ldr x8,[x8, #0x20]
7101ac8fdc  blr x8
7101ac8fe0  ldr x0,[sp, #0x330]
7101ac8fe4  cmp x24,x0
7101ac8fe8  b.eq 0x7101ac8ffc
7101ac8fec  cbz x0,0x7101ac9008
7101ac8ff0  ldr x8,[x0]
7101ac8ff4  ldr x8,[x8, #0x28]
7101ac8ff8  b 0x7101ac9004
7101ac8ffc  ldr x8,[x0]
7101ac9000  ldr x8,[x8, #0x20]
7101ac9004  blr x8
7101ac9008  ldr x0,[sp, #0x300]
7101ac900c  add x8,sp,#0x2b0
7101ac9010  add x8,x8,#0x30
7101ac9014  cmp x8,x0
7101ac9018  b.eq 0x7101ac902c
7101ac901c  cbz x0,0x7101ac9038
7101ac9020  ldr x8,[x0]
7101ac9024  ldr x8,[x8, #0x28]
7101ac9028  b 0x7101ac9034
7101ac902c  ldr x8,[x0]
7101ac9030  ldr x8,[x8, #0x20]
7101ac9034  blr x8
7101ac9038  ldr x8,[x20]
7101ac903c  ldr x8,[x8]
7101ac9040  ldr x9,[x8, #0x600]
7101ac9044  mov w10,#0x10
7101ac9048  str w10,[x9, #0x18]
7101ac904c  ldr x9,[x8, #0x600]
7101ac9050  mov w10,#0x100
7101ac9054  str w10,[x9, #0x20]
7101ac9058  ldr x9,[x8, #0x600]
7101ac905c  mov w10,#0x200
7101ac9060  str w10,[x9, #0x1c]
7101ac9064  ldr x9,[x8, #0x600]
7101ac9068  mov w10,#0x40000
7101ac906c  str w10,[x9, #0x24]
7101ac9070  ldr x9,[x8, #0x600]
7101ac9074  mov w10,#0x20
7101ac9078  str w10,[x9, #0x10]
7101ac907c  ldr x8,[x8, #0x600]
7101ac9080  mov w9,#0x40
7101ac9084  add x0,sp,#0x2b0
7101ac9088  add x1,sp,#0x3f0
7101ac908c  str w9,[x8, #0x14]
7101ac9090  bl 0x7101989b70
7101ac9094  add x23,x19,#0x258
7101ac9098  mov w8,#0x1
7101ac909c  adrp x2,0x7104270000
7101ac90a0  add x2,x2,#0x5bf
7101ac90a4  add x3,sp,#0x2b0
7101ac90a8  strb w8,[sp, #0x2ba]
7101ac90ac  mov x0,x23
7101ac90b0  mov x1,x22
7101ac90b4  bl 0x7103770b30
7101ac90b8  adrp x2,0x710424f000
7101ac90bc  add x2,x2,#0x6ab
7101ac90c0  mov x0,x23
7101ac90c4  mov w1,wzr
7101ac90c8  bl 0x71037717d0
7101ac90cc  adrp x2,0x7104412000
7101ac90d0  add x2,x2,#0xb00
7101ac90d4  mov w1,#0x1
7101ac90d8  mov x0,x23
7101ac90dc  bl 0x71037717d0
7101ac90e0  ldr x0,[x19, #0x258]
7101ac90e4  mov w1,#0x1
7101ac90e8  orr w2,wzr,#0x7
7101ac90ec  mov w3,#0x1
7101ac90f0  bl 0x7103771930
7101ac90f4  ldr x0,[x19, #0x258]
7101ac90f8  mov w2,#0x8
7101ac90fc  mov w3,#0x1
7101ac9100  mov w1,wzr
7101ac9104  bl 0x7103771930
7101ac9108  ldr x1,[x19, #0x258]
7101ac910c  add x0,sp,#0x180
7101ac9110  mov w2,wzr
7101ac9114  bl 0x7103771d60
7101ac9118  ldr x24,[sp, #0x188]
7101ac911c  ldr x0,[x24]
7101ac9120  cbz x0,0x7101ac9138
7101ac9124  ldr x8,[x0]
7101ac9128  ldr x8,[x8, #0x268]
7101ac912c  mov w1,#0x1
7101ac9130  mov w2,#0x1
7101ac9134  blr x8
7101ac9138  adrp x20,0x710523d000
7101ac913c  add x20,x20,#0x9c8
7101ac9140  stp x20,xzr,[sp, #0x180]
7101ac9144  cbz x24,0x7101ac9150
7101ac9148  mov x0,x24
7101ac914c  bl 0x710392eb40
7101ac9150  ldr x1,[x23]
7101ac9154  add x0,sp,#0x180
7101ac9158  mov w2,#0x1
7101ac915c  bl 0x7103771d60
7101ac9160  ldr x23,[sp, #0x188]
7101ac9164  ldr x0,[x23]
7101ac9168  cbz x0,0x7101ac9180
7101ac916c  ldr x8,[x0]
7101ac9170  ldr x8,[x8, #0x268]
7101ac9174  mov w1,#0x1
7101ac9178  mov w2,#0x1
7101ac917c  blr x8
7101ac9180  stp x20,xzr,[sp, #0x180]
7101ac9184  cbz x23,0x7101ac9190
7101ac9188  mov x0,x23
7101ac918c  bl 0x710392eb40
7101ac9190  ldr x0,[sp, #0x3c0]
7101ac9194  add x8,sp,#0x2b0
7101ac9198  add x8,x8,#0xf0
7101ac919c  cmp x8,x0
7101ac91a0  b.eq 0x7101ac91b4
7101ac91a4  cbz x0,0x7101ac91c0
7101ac91a8  ldr x8,[x0]
7101ac91ac  ldr x8,[x8, #0x28]
7101ac91b0  b 0x7101ac91bc
7101ac91b4  ldr x8,[x0]
7101ac91b8  ldr x8,[x8, #0x20]
7101ac91bc  blr x8
7101ac91c0  ldr x0,[sp, #0x390]
7101ac91c4  add x8,sp,#0x2b0
7101ac91c8  add x8,x8,#0xc0
7101ac91cc  cmp x8,x0
7101ac91d0  b.eq 0x7101ac91e4
7101ac91d4  cbz x0,0x7101ac91f0
7101ac91d8  ldr x8,[x0]
7101ac91dc  ldr x8,[x8, #0x28]
7101ac91e0  b 0x7101ac91ec
7101ac91e4  ldr x8,[x0]
7101ac91e8  ldr x8,[x8, #0x20]
7101ac91ec  blr x8
7101ac91f0  ldr x0,[sp, #0x360]
7101ac91f4  add x8,sp,#0x2b0
7101ac91f8  add x8,x8,#0x90
7101ac91fc  cmp x8,x0
7101ac9200  b.eq 0x7101ac9214
7101ac9204  cbz x0,0x7101ac9220
7101ac9208  ldr x8,[x0]
7101ac920c  ldr x8,[x8, #0x28]
7101ac9210  b 0x7101ac921c
7101ac9214  ldr x8,[x0]
7101ac9218  ldr x8,[x8, #0x20]
7101ac921c  blr x8
7101ac9220  ldr x0,[sp, #0x330]
7101ac9224  add x8,sp,#0x2b0
7101ac9228  add x8,x8,#0x60
7101ac922c  cmp x8,x0
7101ac9230  b.eq 0x7101ac9244
7101ac9234  cbz x0,0x7101ac9250
7101ac9238  ldr x8,[x0]
7101ac923c  ldr x8,[x8, #0x28]
7101ac9240  b 0x7101ac924c
7101ac9244  ldr x8,[x0]
7101ac9248  ldr x8,[x8, #0x20]
7101ac924c  blr x8
7101ac9250  ldr x0,[sp, #0x300]
7101ac9254  add x8,sp,#0x2b0
7101ac9258  add x8,x8,#0x30
7101ac925c  cmp x8,x0
7101ac9260  b.eq 0x7101ac9274
7101ac9264  cbz x0,0x7101ac9280
7101ac9268  ldr x8,[x0]
7101ac926c  ldr x8,[x8, #0x28]
7101ac9270  b 0x7101ac927c
7101ac9274  ldr x8,[x0]
7101ac9278  ldr x8,[x8, #0x20]
7101ac927c  blr x8
7101ac9280  add x0,sp,#0x2b0
7101ac9284  add x1,sp,#0x3f0
7101ac9288  add x20,sp,#0x2b0
7101ac928c  bl 0x7101989b70
7101ac9290  add x1,x20,#0x30
7101ac9294  adrp x8,0x71050a9000
7101ac9298  add x8,x8,#0x8b8
7101ac929c  add x20,sp,#0x180
7101ac92a0  add x0,sp,#0x180
7101ac92a4  str x20,[sp, #0x1a0]
7101ac92a8  stp x8,x19,[sp, #0x180]
7101ac92ac  bl 0x7101a7ed70
7101ac92b0  ldr x0,[sp, #0x1a0]
7101ac92b4  cmp x20,x0
7101ac92b8  b.eq 0x7101ac92cc
7101ac92bc  cbz x0,0x7101ac92d8
7101ac92c0  ldr x8,[x0]
7101ac92c4  ldr x8,[x8, #0x28]
7101ac92c8  b 0x7101ac92d4
7101ac92cc  ldr x8,[x0]
7101ac92d0  ldr x8,[x8, #0x20]
7101ac92d4  blr x8
7101ac92d8  add x0,sp,#0x180
7101ac92dc  add x1,sp,#0x3f0
7101ac92e0  add x20,sp,#0x180
7101ac92e4  bl 0x7101989b70
7101ac92e8  add x1,x20,#0x30
7101ac92ec  adrp x8,0x71050a9000
7101ac92f0  add x8,x8,#0x900
7101ac92f4  add x20,sp,#0x50
7101ac92f8  add x0,sp,#0x50
7101ac92fc  str x20,[sp, #0x70]
7101ac9300  stp x8,x19,[sp, #0x50]
7101ac9304  bl 0x7101a7ed70
7101ac9308  ldr x0,[sp, #0x70]
7101ac930c  cmp x20,x0
7101ac9310  b.eq 0x7101ac9324
7101ac9314  cbz x0,0x7101ac9330
7101ac9318  ldr x8,[x0]
7101ac931c  ldr x8,[x8, #0x28]
7101ac9320  b 0x7101ac932c
7101ac9324  ldr x8,[x0]
7101ac9328  ldr x8,[x8, #0x20]
7101ac932c  blr x8
7101ac9330  ldr x0,[sp, #0x330]
7101ac9334  add x8,sp,#0x2b0
7101ac9338  add x8,x8,#0x60
7101ac933c  cmp x8,x0
7101ac9340  strb wzr,[sp, #0x2b8]
7101ac9344  str xzr,[sp, #0x330]
7101ac9348  str x8,[sp, #0x8]
7101ac934c  b.eq 0x7101ac9360
7101ac9350  cbz x0,0x7101ac936c
7101ac9354  ldr x8,[x0]
7101ac9358  ldr x8,[x8, #0x28]
7101ac935c  b 0x7101ac9368
7101ac9360  ldr x8,[x0]
7101ac9364  ldr x8,[x8, #0x20]
7101ac9368  blr x8
7101ac936c  add x23,x19,#0x260
7101ac9370  adrp x2,0x7104454000
7101ac9374  add x2,x2,#0xd70
7101ac9378  add x3,sp,#0x2b0
7101ac937c  mov x0,x23
7101ac9380  mov x1,x22
7101ac9384  bl 0x7103770b30
7101ac9388  add x24,x19,#0x268
7101ac938c  adrp x2,0x7104318000
7101ac9390  add x2,x2,#0xf22
7101ac9394  add x3,sp,#0x180
7101ac9398  mov x0,x24
7101ac939c  mov x1,x22
7101ac93a0  bl 0x7103770b30
7101ac93a4  adrp x2,0x71043cf000
7101ac93a8  add x2,x2,#0xa65
7101ac93ac  mov x0,x23
7101ac93b0  mov w1,wzr
7101ac93b4  bl 0x71037717d0
7101ac93b8  adrp x2,0x710434a000
7101ac93bc  add x2,x2,#0x97a
7101ac93c0  mov w1,#0x1
7101ac93c4  mov x0,x23
7101ac93c8  bl 0x71037717d0
7101ac93cc  adrp x2,0x71043be000
7101ac93d0  add x2,x2,#0xc66
7101ac93d4  mov w1,#0x2
7101ac93d8  mov x0,x23
7101ac93dc  bl 0x71037717d0
7101ac93e0  adrp x2,0x710426f000
7101ac93e4  add x2,x2,#0xb21
7101ac93e8  orr w1,wzr,#0x3
7101ac93ec  mov x0,x23
7101ac93f0  bl 0x71037717d0
7101ac93f4  adrp x2,0x71043be000
7101ac93f8  add x2,x2,#0xec7
7101ac93fc  mov w1,#0x4
7101ac9400  mov x0,x24
7101ac9404  bl 0x71037717d0
7101ac9408  mov w1,#0x4
7101ac940c  mov x0,x24
7101ac9410  mov w2,wzr
7101ac9414  bl 0x7103771a80
7101ac9418  ldr x0,[x19, #0x268]
7101ac941c  ldr x8,[x0]
7101ac9420  ldr x8,[x8, #0x70]
7101ac9424  mov w1,wzr
7101ac9428  blr x8
7101ac942c  adrp x1,0x710435b000
7101ac9430  add x1,x1,#0x15f
7101ac9434  add x8,sp,#0x50
7101ac9438  mov x0,x22
7101ac943c  add x20,sp,#0x50
7101ac9440  bl 0x7103776640
7101ac9444  add x8,x19,#0x290
7101ac9448  cmp x8,x20
7101ac944c  b.eq 0x7101ac9484
7101ac9450  ldr x8,[sp, #0x58]
7101ac9454  str xzr,[sp, #0x58]
7101ac9458  ldr x25,[x19, #0x298]
7101ac945c  str x8,[x19, #0x298]
7101ac9460  cbz x25,0x7101ac9484
7101ac9464  ldr x0,[x25, #0x18]
7101ac9468  adrp x8,0x710523d000
7101ac946c  add x8,x8,#0x9a8
7101ac9470  stp x8,xzr,[x25, #0x10]
7101ac9474  cbz x0,0x7101ac947c
7101ac9478  bl 0x710392eb40
7101ac947c  mov x0,x25
7101ac9480  bl 0x710392eb40
7101ac9484  ldr x25,[sp, #0x58]
7101ac9488  stp x21,xzr,[sp, #0x50]
7101ac948c  cbz x25,0x7101ac94b0
7101ac9490  ldr x0,[x25, #0x18]
7101ac9494  adrp x8,0x710523d000
7101ac9498  add x8,x8,#0x9a8
7101ac949c  stp x8,xzr,[x25, #0x10]
7101ac94a0  cbz x0,0x7101ac94a8
7101ac94a4  bl 0x710392eb40
7101ac94a8  mov x0,x25
7101ac94ac  bl 0x710392eb40
7101ac94b0  adrp x1,0x7104280000
7101ac94b4  add x1,x1,#0x530
7101ac94b8  add x8,sp,#0x50
7101ac94bc  mov x0,x22
7101ac94c0  add x20,sp,#0x50
7101ac94c4  bl 0x7103776640
7101ac94c8  add x8,x19,#0x2a0
7101ac94cc  cmp x8,x20
7101ac94d0  b.eq 0x7101ac9508
7101ac94d4  ldr x8,[sp, #0x58]
7101ac94d8  str xzr,[sp, #0x58]
7101ac94dc  ldr x25,[x19, #0x2a8]
7101ac94e0  str x8,[x19, #0x2a8]
7101ac94e4  cbz x25,0x7101ac9508
7101ac94e8  ldr x0,[x25, #0x18]
7101ac94ec  adrp x8,0x710523d000
7101ac94f0  add x8,x8,#0x9a8
7101ac94f4  stp x8,xzr,[x25, #0x10]
7101ac94f8  cbz x0,0x7101ac9500
7101ac94fc  bl 0x710392eb40
7101ac9500  mov x0,x25
7101ac9504  bl 0x710392eb40
7101ac9508  ldr x25,[sp, #0x58]
7101ac950c  stp x21,xzr,[sp, #0x50]
7101ac9510  cbz x25,0x7101ac9534
7101ac9514  ldr x0,[x25, #0x18]
7101ac9518  adrp x8,0x710523d000
7101ac951c  add x8,x8,#0x9a8
7101ac9520  stp x8,xzr,[x25, #0x10]
7101ac9524  cbz x0,0x7101ac952c
7101ac9528  bl 0x710392eb40
7101ac952c  mov x0,x25
7101ac9530  bl 0x710392eb40
7101ac9534  adrp x1,0x71043df000
7101ac9538  add x1,x1,#0xb96
7101ac953c  add x8,sp,#0x50
7101ac9540  mov x0,x22
7101ac9544  add x20,sp,#0x50
7101ac9548  bl 0x7103776640
7101ac954c  add x8,x19,#0x2b0
7101ac9550  cmp x8,x20
7101ac9554  b.eq 0x7101ac958c
7101ac9558  ldr x8,[sp, #0x58]
7101ac955c  str xzr,[sp, #0x58]
7101ac9560  ldr x25,[x19, #0x2b8]
7101ac9564  str x8,[x19, #0x2b8]
7101ac9568  cbz x25,0x7101ac958c
7101ac956c  ldr x0,[x25, #0x18]
7101ac9570  adrp x8,0x710523d000
7101ac9574  add x8,x8,#0x9a8
7101ac9578  stp x8,xzr,[x25, #0x10]
7101ac957c  cbz x0,0x7101ac9584
7101ac9580  bl 0x710392eb40
7101ac9584  mov x0,x25
7101ac9588  bl 0x710392eb40
7101ac958c  ldr x25,[sp, #0x58]
7101ac9590  stp x21,xzr,[sp, #0x50]
7101ac9594  cbz x25,0x7101ac95b8
7101ac9598  ldr x0,[x25, #0x18]
7101ac959c  adrp x8,0x710523d000
7101ac95a0  add x8,x8,#0x9a8
7101ac95a4  stp x8,xzr,[x25, #0x10]
7101ac95a8  cbz x0,0x7101ac95b0
7101ac95ac  bl 0x710392eb40
7101ac95b0  mov x0,x25
7101ac95b4  bl 0x710392eb40
7101ac95b8  adrp x1,0x710437c000
7101ac95bc  add x1,x1,#0xea
7101ac95c0  add x8,sp,#0x50
7101ac95c4  mov x0,x22
7101ac95c8  add x20,sp,#0x50
7101ac95cc  bl 0x7103776640
7101ac95d0  add x8,x19,#0x2c0
7101ac95d4  cmp x8,x20
7101ac95d8  b.eq 0x7101ac9610
7101ac95dc  ldr x8,[sp, #0x58]
7101ac95e0  str xzr,[sp, #0x58]
7101ac95e4  ldr x25,[x19, #0x2c8]
7101ac95e8  str x8,[x19, #0x2c8]
7101ac95ec  cbz x25,0x7101ac9610
7101ac95f0  ldr x0,[x25, #0x18]
7101ac95f4  adrp x8,0x710523d000
7101ac95f8  add x8,x8,#0x9a8
7101ac95fc  stp x8,xzr,[x25, #0x10]
7101ac9600  cbz x0,0x7101ac9608
7101ac9604  bl 0x710392eb40
7101ac9608  mov x0,x25
7101ac960c  bl 0x710392eb40
7101ac9610  ldr x25,[sp, #0x58]
7101ac9614  stp x21,xzr,[sp, #0x50]
7101ac9618  cbz x25,0x7101ac963c
7101ac961c  ldr x0,[x25, #0x18]
7101ac9620  adrp x8,0x710523d000
7101ac9624  add x8,x8,#0x9a8
7101ac9628  stp x8,xzr,[x25, #0x10]
7101ac962c  cbz x0,0x7101ac9634
7101ac9630  bl 0x710392eb40
7101ac9634  mov x0,x25
7101ac9638  bl 0x710392eb40
7101ac963c  adrp x1,0x71043cf000
7101ac9640  add x1,x1,#0xa65
7101ac9644  sub x8,x29,#0x90
7101ac9648  mov x0,x22
7101ac964c  bl 0x7103776640
7101ac9650  adrp x1,0x71042f7000
7101ac9654  add x1,x1,#0xd70
7101ac9658  add x8,sp,#0x50
7101ac965c  sub x0,x29,#0x90
7101ac9660  bl 0x7103776910
7101ac9664  ldur x25,[x29, #-0x88]
7101ac9668  stp x21,xzr,[x29, #-0x90]
7101ac966c  cbz x25,0x7101ac9690
7101ac9670  ldr x0,[x25, #0x18]
7101ac9674  adrp x8,0x710523d000
7101ac9678  add x8,x8,#0x9a8
7101ac967c  stp x8,xzr,[x25, #0x10]
7101ac9680  cbz x0,0x7101ac9688
7101ac9684  bl 0x710392eb40
7101ac9688  mov x0,x25
7101ac968c  bl 0x710392eb40
7101ac9690  adrp x1,0x7104339000
7101ac9694  add x1,x1,#0xc72
7101ac9698  add x0,sp,#0x50
7101ac969c  bl 0x710377a120
7101ac96a0  ldr x0,[sp, #0x58]
7101ac96a4  adrp x20,0x710523d000
7101ac96a8  add x20,x20,#0x9a8
7101ac96ac  stp x20,xzr,[sp, #0x50]
7101ac96b0  cbz x0,0x7101ac96b8
7101ac96b4  bl 0x710392eb40
7101ac96b8  adrp x1,0x710435b000
7101ac96bc  add x1,x1,#0x15f
7101ac96c0  adrp x2,0x710439c000
7101ac96c4  add x2,x2,#0xf2c
7101ac96c8  adrp x3,0x7104308000
7101ac96cc  add x3,x3,#0x6e
7101ac96d0  mov x0,x19
7101ac96d4  bl 0x7101aca700
7101ac96d8  adrp x1,0x710434a000
7101ac96dc  add x1,x1,#0x97a
7101ac96e0  sub x8,x29,#0x90
7101ac96e4  mov x0,x22
7101ac96e8  bl 0x7103776640
7101ac96ec  adrp x1,0x71042f7000
7101ac96f0  add x1,x1,#0xd70
7101ac96f4  add x8,sp,#0x50
7101ac96f8  sub x0,x29,#0x90
7101ac96fc  bl 0x7103776910
7101ac9700  ldur x25,[x29, #-0x88]
7101ac9704  stp x21,xzr,[x29, #-0x90]
7101ac9708  cbz x25,0x7101ac9724
7101ac970c  ldr x0,[x25, #0x18]
7101ac9710  stp x20,xzr,[x25, #0x10]
7101ac9714  cbz x0,0x7101ac971c
7101ac9718  bl 0x710392eb40
7101ac971c  mov x0,x25
7101ac9720  bl 0x710392eb40
7101ac9724  adrp x1,0x7104349000
7101ac9728  add x1,x1,#0xe1d
7101ac972c  add x0,sp,#0x50
7101ac9730  bl 0x710377a120
7101ac9734  ldr x0,[sp, #0x58]
7101ac9738  stp x20,xzr,[sp, #0x50]
7101ac973c  cbz x0,0x7101ac9744
7101ac9740  bl 0x710392eb40
7101ac9744  adrp x1,0x7104280000
7101ac9748  add x1,x1,#0x530
7101ac974c  adrp x2,0x7104349000
7101ac9750  add x2,x2,#0xe39
7101ac9754  adrp x3,0x710438c000
7101ac9758  add x3,x3,#0x41c
7101ac975c  mov x0,x19
7101ac9760  bl 0x7101aca700
7101ac9764  adrp x1,0x71043be000
7101ac9768  add x1,x1,#0xc66
7101ac976c  sub x8,x29,#0x90
7101ac9770  mov x0,x22
7101ac9774  bl 0x7103776640
7101ac9778  adrp x1,0x71042f7000
7101ac977c  add x1,x1,#0xd70
7101ac9780  add x8,sp,#0x50
7101ac9784  sub x0,x29,#0x90
7101ac9788  bl 0x7103776910
7101ac978c  ldur x25,[x29, #-0x88]
7101ac9790  stp x21,xzr,[x29, #-0x90]
7101ac9794  cbz x25,0x7101ac97b0
7101ac9798  ldr x0,[x25, #0x18]
7101ac979c  stp x20,xzr,[x25, #0x10]
7101ac97a0  cbz x0,0x7101ac97a8
7101ac97a4  bl 0x710392eb40
7101ac97a8  mov x0,x25
7101ac97ac  bl 0x710392eb40
7101ac97b0  adrp x1,0x71042d5000
7101ac97b4  add x1,x1,#0xd7f
7101ac97b8  add x0,sp,#0x50
7101ac97bc  bl 0x710377a120
7101ac97c0  ldr x0,[sp, #0x58]
7101ac97c4  stp x20,xzr,[sp, #0x50]
7101ac97c8  cbz x0,0x7101ac97d0
7101ac97cc  bl 0x710392eb40
7101ac97d0  adrp x1,0x71043df000
7101ac97d4  add x1,x1,#0xb96
7101ac97d8  adrp x2,0x7104349000
7101ac97dc  add x2,x2,#0xe39
7101ac97e0  adrp x3,0x710438c000
7101ac97e4  add x3,x3,#0x41c
7101ac97e8  mov x0,x19
7101ac97ec  bl 0x7101aca700
7101ac97f0  adrp x1,0x710426f000
7101ac97f4  add x1,x1,#0xb21
7101ac97f8  sub x8,x29,#0x90
7101ac97fc  mov x0,x22
7101ac9800  bl 0x7103776640
7101ac9804  adrp x1,0x71042f7000
7101ac9808  add x1,x1,#0xd70
7101ac980c  add x8,sp,#0x50
7101ac9810  sub x0,x29,#0x90
7101ac9814  bl 0x7103776910
7101ac9818  ldur x25,[x29, #-0x88]
7101ac981c  stp x21,xzr,[x29, #-0x90]
7101ac9820  cbz x25,0x7101ac983c
7101ac9824  ldr x0,[x25, #0x18]
7101ac9828  stp x20,xzr,[x25, #0x10]
7101ac982c  cbz x0,0x7101ac9834
7101ac9830  bl 0x710392eb40
7101ac9834  mov x0,x25
7101ac9838  bl 0x710392eb40
7101ac983c  adrp x1,0x7104421000
7101ac9840  add x1,x1,#0xdac
7101ac9844  add x0,sp,#0x50
7101ac9848  add x25,sp,#0x50
7101ac984c  bl 0x710377a120
7101ac9850  ldr x0,[sp, #0x58]
7101ac9854  stp x20,xzr,[sp, #0x50]
7101ac9858  cbz x0,0x7101ac9860
7101ac985c  bl 0x710392eb40
7101ac9860  adrp x1,0x710437c000
7101ac9864  add x1,x1,#0xea
7101ac9868  adrp x2,0x71042f7000
7101ac986c  add x2,x2,#0xd85
7101ac9870  adrp x3,0x71042e6000
7101ac9874  add x3,x3,#0xc0c
7101ac9878  mov x0,x19
7101ac987c  bl 0x7101aca700
7101ac9880  adrp x1,0x71042d5000
7101ac9884  add x1,x1,#0xd98
7101ac9888  add x8,sp,#0x50
7101ac988c  mov x0,x22
7101ac9890  bl 0x7103776910
7101ac9894  add x8,x19,#0x2d0
7101ac9898  cmp x8,x25
7101ac989c  b.eq 0x7101ac98b8
7101ac98a0  ldr x8,[sp, #0x58]
7101ac98a4  str xzr,[sp, #0x58]
7101ac98a8  ldr x0,[x19, #0x2d8]
7101ac98ac  str x8,[x19, #0x2d8]
7101ac98b0  cbz x0,0x7101ac98b8
7101ac98b4  bl 0x710392eb40
7101ac98b8  ldr x0,[sp, #0x58]
7101ac98bc  stp x20,xzr,[sp, #0x50]
7101ac98c0  cbz x0,0x7101ac98c8
7101ac98c4  bl 0x710392eb40
7101ac98c8  mov w8,#0x1
7101ac98cc  str w8,[sp, #0x60]
7101ac98d0  strh w8,[sp, #0x64]
7101ac98d4  strb w8,[sp, #0x66]
7101ac98d8  add x8,sp,#0x50
7101ac98dc  add x1,x8,#0xc0
7101ac98e0  adrp x8,0x71050a9000
7101ac98e4  add x8,x8,#0x948
7101ac98e8  sub x25,x29,#0x90
7101ac98ec  sub x0,x29,#0x90
7101ac98f0  str xzr,[sp, #0x50]
7101ac98f4  strh w26,[sp, #0x58]
7101ac98f8  strh wzr,[sp, #0x5e]
7101ac98fc  stur wzr,[sp, #0x5a]
7101ac9900  str x27,[sp, #0x68]
7101ac9904  str wzr,[sp, #0x70]
7101ac9908  str xzr,[sp, #0xa0]
7101ac990c  str xzr,[sp, #0xd0]
7101ac9910  str xzr,[sp, #0x100]
7101ac9914  str xzr,[sp, #0x130]
7101ac9918  str xzr,[sp, #0x160]
7101ac991c  str wzr,[sp, #0x170]
7101ac9920  stur x8,[x29, #-0x90]
7101ac9924  stur x25,[x29, #-0x70]
7101ac9928  bl 0x7101989a30
7101ac992c  ldur x0,[x29, #-0x70]
7101ac9930  cmp x25,x0
7101ac9934  b.eq 0x7101ac9948
7101ac9938  cbz x0,0x7101ac9954
7101ac993c  ldr x8,[x0]
7101ac9940  ldr x8,[x8, #0x28]
7101ac9944  b 0x7101ac9950
7101ac9948  ldr x8,[x0]
7101ac994c  ldr x8,[x8, #0x20]
7101ac9950  blr x8
7101ac9954  adrp x1,0x710435b000
7101ac9958  add x1,x1,#0x15f
7101ac995c  sub x8,x29,#0x90
7101ac9960  mov x0,x22
7101ac9964  bl 0x7103776640
7101ac9968  add x25,x19,#0x270
7101ac996c  adrp x2,0x71043e0000
7101ac9970  add x2,x2,#0xa21
7101ac9974  sub x1,x29,#0x90
7101ac9978  add x3,sp,#0x50
7101ac997c  mov x0,x25
7101ac9980  bl 0x7103770b30
7101ac9984  adrp x2,0x71043cf000
7101ac9988  add x2,x2,#0x73c
7101ac998c  mov x0,x25
7101ac9990  mov w1,wzr
7101ac9994  bl 0x71037717d0
7101ac9998  adrp x2,0x7104443000
7101ac999c  add x2,x2,#0xab4
7101ac99a0  mov w1,#0x1
7101ac99a4  mov x0,x25
7101ac99a8  bl 0x71037717d0
7101ac99ac  ldr x9,[x19, #0x270]
7101ac99b0  ldr x8,[x9, #0x1b8]
7101ac99b4  cbz x8,0x7101ac9a98
7101ac99b8  add x9,x9,#0x1b8
7101ac99bc  mov x10,x9
7101ac99c0  mov x11,x8
7101ac99c4  ldr w12,[x11, #0x20]
7101ac99c8  cmp w12,#0x0
7101ac99cc  cset w12,lt
7101ac99d0  csel x10,x10,x11,lt
7101ac99d4  ldr x11,[x11, w12, UXTW #0x3]
7101ac99d8  cbnz x11,0x7101ac99c4
7101ac99dc  cmp x10,x9
7101ac99e0  b.eq 0x7101ac9a30
7101ac99e4  ldr w11,[x10, #0x20]
7101ac99e8  cmp w11,#0x0
7101ac99ec  b.gt 0x7101ac9a30
7101ac99f0  ldr x26,[x10, #0x28]
7101ac99f4  cbz x26,0x7101ac9a30
7101ac99f8  ldr x8,[x26]
7101ac99fc  ldr x8,[x8, #0x208]
7101ac9a00  mov x0,x26
7101ac9a04  mov w1,wzr
7101ac9a08  blr x8
7101ac9a0c  ldr x8,[x26]
7101ac9a10  ldr x8,[x8, #0x388]
7101ac9a14  mov w1,#0x1
7101ac9a18  mov x0,x26
7101ac9a1c  mov w2,wzr
7101ac9a20  blr x8
7101ac9a24  ldr x8,[x25]
7101ac9a28  add x9,x8,#0x1b8
7101ac9a2c  ldr x8,[x8, #0x1b8]
7101ac9a30  cbz x8,0x7101ac9a98
7101ac9a34  mov x10,x9
7101ac9a38  ldr w11,[x8, #0x20]
7101ac9a3c  cmp w11,#0x1
7101ac9a40  cset w11,lt
7101ac9a44  csel x10,x10,x8,lt
7101ac9a48  ldr x8,[x8, w11, UXTW #0x3]
7101ac9a4c  cbnz x8,0x7101ac9a38
7101ac9a50  cmp x10,x9
7101ac9a54  b.eq 0x7101ac9a98
7101ac9a58  ldr w8,[x10, #0x20]
7101ac9a5c  cmp w8,#0x1
7101ac9a60  b.gt 0x7101ac9a98
7101ac9a64  ldr x26,[x10, #0x28]
7101ac9a68  cbz x26,0x7101ac9a98
7101ac9a6c  ldr x8,[x26]
7101ac9a70  ldr x8,[x8, #0x208]
7101ac9a74  mov x0,x26
7101ac9a78  mov w1,wzr
7101ac9a7c  blr x8
7101ac9a80  ldr x8,[x26]
7101ac9a84  ldr x8,[x8, #0x388]
7101ac9a88  mov w1,#0x1
7101ac9a8c  mov x0,x26
7101ac9a90  mov w2,wzr
7101ac9a94  blr x8
7101ac9a98  adrp x1,0x7104280000
7101ac9a9c  add x1,x1,#0x530
7101ac9aa0  add x8,sp,#0x40
7101ac9aa4  mov x0,x22
7101ac9aa8  bl 0x7103776640
7101ac9aac  add x26,x19,#0x278
7101ac9ab0  adrp x2,0x71043e0000
7101ac9ab4  add x2,x2,#0xa21
7101ac9ab8  add x1,sp,#0x40
7101ac9abc  add x3,sp,#0x50
7101ac9ac0  mov x0,x26
7101ac9ac4  bl 0x7103770b30
7101ac9ac8  adrp x2,0x71043cf000
7101ac9acc  add x2,x2,#0x73c
7101ac9ad0  mov x0,x26
7101ac9ad4  mov w1,wzr
7101ac9ad8  bl 0x71037717d0
7101ac9adc  adrp x2,0x7104443000
7101ac9ae0  add x2,x2,#0xab4
7101ac9ae4  mov w1,#0x1
7101ac9ae8  mov x0,x26
7101ac9aec  bl 0x71037717d0
7101ac9af0  ldr x9,[x19, #0x278]
7101ac9af4  ldr x8,[x9, #0x1b8]
7101ac9af8  cbz x8,0x7101ac9bdc
7101ac9afc  add x9,x9,#0x1b8
7101ac9b00  mov x10,x9
7101ac9b04  mov x11,x8
7101ac9b08  ldr w12,[x11, #0x20]
7101ac9b0c  cmp w12,#0x0
7101ac9b10  cset w12,lt
7101ac9b14  csel x10,x10,x11,lt
7101ac9b18  ldr x11,[x11, w12, UXTW #0x3]
7101ac9b1c  cbnz x11,0x7101ac9b08
7101ac9b20  cmp x10,x9
7101ac9b24  b.eq 0x7101ac9b74
7101ac9b28  ldr w11,[x10, #0x20]
7101ac9b2c  cmp w11,#0x0
7101ac9b30  b.gt 0x7101ac9b74
7101ac9b34  ldr x27,[x10, #0x28]
7101ac9b38  cbz x27,0x7101ac9b74
7101ac9b3c  ldr x8,[x27]
7101ac9b40  ldr x8,[x8, #0x208]
7101ac9b44  mov x0,x27
7101ac9b48  mov w1,wzr
7101ac9b4c  blr x8
7101ac9b50  ldr x8,[x27]
7101ac9b54  ldr x8,[x8, #0x388]
7101ac9b58  mov w1,#0x1
7101ac9b5c  mov x0,x27
7101ac9b60  mov w2,wzr
7101ac9b64  blr x8
7101ac9b68  ldr x8,[x26]
7101ac9b6c  add x9,x8,#0x1b8
7101ac9b70  ldr x8,[x8, #0x1b8]
7101ac9b74  cbz x8,0x7101ac9bdc
7101ac9b78  mov x10,x9
7101ac9b7c  ldr w11,[x8, #0x20]
7101ac9b80  cmp w11,#0x1
7101ac9b84  cset w11,lt
7101ac9b88  csel x10,x10,x8,lt
7101ac9b8c  ldr x8,[x8, w11, UXTW #0x3]
7101ac9b90  cbnz x8,0x7101ac9b7c
7101ac9b94  cmp x10,x9
7101ac9b98  b.eq 0x7101ac9bdc
7101ac9b9c  ldr w8,[x10, #0x20]
7101ac9ba0  cmp w8,#0x1
7101ac9ba4  b.gt 0x7101ac9bdc
7101ac9ba8  ldr x27,[x10, #0x28]
7101ac9bac  cbz x27,0x7101ac9bdc
7101ac9bb0  ldr x8,[x27]
7101ac9bb4  ldr x8,[x8, #0x208]
7101ac9bb8  mov x0,x27
7101ac9bbc  mov w1,wzr
7101ac9bc0  blr x8
7101ac9bc4  ldr x8,[x27]
7101ac9bc8  ldr x8,[x8, #0x388]
7101ac9bcc  mov w1,#0x1
7101ac9bd0  mov x0,x27
7101ac9bd4  mov w2,wzr
7101ac9bd8  blr x8
7101ac9bdc  adrp x1,0x71043df000
7101ac9be0  add x1,x1,#0xb96
7101ac9be4  add x8,sp,#0x30
7101ac9be8  mov x0,x22
7101ac9bec  bl 0x7103776640
7101ac9bf0  add x27,x19,#0x280
7101ac9bf4  adrp x2,0x71043e0000
7101ac9bf8  add x2,x2,#0xa21
7101ac9bfc  add x1,sp,#0x30
7101ac9c00  add x3,sp,#0x50
7101ac9c04  mov x0,x27
7101ac9c08  bl 0x7103770b30
7101ac9c0c  adrp x2,0x71043cf000
7101ac9c10  add x2,x2,#0x73c
7101ac9c14  mov x0,x27
7101ac9c18  mov w1,wzr
7101ac9c1c  bl 0x71037717d0
7101ac9c20  adrp x2,0x7104443000
7101ac9c24  add x2,x2,#0xab4
7101ac9c28  mov w1,#0x1
7101ac9c2c  mov x0,x27
7101ac9c30  bl 0x71037717d0
7101ac9c34  ldr x9,[x19, #0x280]
7101ac9c38  ldr x8,[x9, #0x1b8]
7101ac9c3c  cbz x8,0x7101ac9d20
7101ac9c40  add x9,x9,#0x1b8
7101ac9c44  mov x10,x9
7101ac9c48  mov x11,x8
7101ac9c4c  ldr w12,[x11, #0x20]
7101ac9c50  cmp w12,#0x0
7101ac9c54  cset w12,lt
7101ac9c58  csel x10,x10,x11,lt
7101ac9c5c  ldr x11,[x11, w12, UXTW #0x3]
7101ac9c60  cbnz x11,0x7101ac9c4c
7101ac9c64  cmp x10,x9
7101ac9c68  b.eq 0x7101ac9cb8
7101ac9c6c  ldr w11,[x10, #0x20]
7101ac9c70  cmp w11,#0x0
7101ac9c74  b.gt 0x7101ac9cb8
7101ac9c78  ldr x28,[x10, #0x28]
7101ac9c7c  cbz x28,0x7101ac9cb8
7101ac9c80  ldr x8,[x28]
7101ac9c84  ldr x8,[x8, #0x208]
7101ac9c88  mov x0,x28
7101ac9c8c  mov w1,wzr
7101ac9c90  blr x8
7101ac9c94  ldr x8,[x28]
7101ac9c98  ldr x8,[x8, #0x388]
7101ac9c9c  mov w1,#0x1
7101ac9ca0  mov x0,x28
7101ac9ca4  mov w2,wzr
7101ac9ca8  blr x8
7101ac9cac  ldr x8,[x27]
7101ac9cb0  add x9,x8,#0x1b8
7101ac9cb4  ldr x8,[x8, #0x1b8]
7101ac9cb8  cbz x8,0x7101ac9d20
7101ac9cbc  mov x10,x9
7101ac9cc0  ldr w11,[x8, #0x20]
7101ac9cc4  cmp w11,#0x1
7101ac9cc8  cset w11,lt
7101ac9ccc  csel x10,x10,x8,lt
7101ac9cd0  ldr x8,[x8, w11, UXTW #0x3]
7101ac9cd4  cbnz x8,0x7101ac9cc0
7101ac9cd8  cmp x10,x9
7101ac9cdc  b.eq 0x7101ac9d20
7101ac9ce0  ldr w8,[x10, #0x20]
7101ac9ce4  cmp w8,#0x1
7101ac9ce8  b.gt 0x7101ac9d20
7101ac9cec  ldr x28,[x10, #0x28]
7101ac9cf0  cbz x28,0x7101ac9d20
7101ac9cf4  ldr x8,[x28]
7101ac9cf8  ldr x8,[x8, #0x208]
7101ac9cfc  mov x0,x28
7101ac9d00  mov w1,wzr
7101ac9d04  blr x8
7101ac9d08  ldr x8,[x28]
7101ac9d0c  ldr x8,[x8, #0x388]
7101ac9d10  mov w1,#0x1
7101ac9d14  mov x0,x28
7101ac9d18  mov w2,wzr
7101ac9d1c  blr x8
7101ac9d20  adrp x1,0x710437c000
7101ac9d24  add x1,x1,#0xea
7101ac9d28  add x8,sp,#0x20
7101ac9d2c  mov x0,x22
7101ac9d30  bl 0x7103776640
7101ac9d34  add x22,x19,#0x288
7101ac9d38  adrp x2,0x71043e0000
7101ac9d3c  add x2,x2,#0xa21
7101ac9d40  add x1,sp,#0x20
7101ac9d44  add x3,sp,#0x50
7101ac9d48  mov x0,x22
7101ac9d4c  bl 0x7103770b30
7101ac9d50  adrp x2,0x71043cf000
7101ac9d54  add x2,x2,#0x73c
7101ac9d58  mov x0,x22
7101ac9d5c  mov w1,wzr
7101ac9d60  bl 0x71037717d0
7101ac9d64  adrp x2,0x7104443000
7101ac9d68  add x2,x2,#0xab4
7101ac9d6c  mov w1,#0x1
7101ac9d70  mov x0,x22
7101ac9d74  bl 0x71037717d0
7101ac9d78  ldr x9,[x19, #0x288]
7101ac9d7c  ldr x8,[x9, #0x1b8]
7101ac9d80  cbz x8,0x7101ac9e64
7101ac9d84  add x9,x9,#0x1b8
7101ac9d88  mov x10,x9
7101ac9d8c  mov x11,x8
7101ac9d90  ldr w12,[x11, #0x20]
7101ac9d94  cmp w12,#0x0
7101ac9d98  cset w12,lt
7101ac9d9c  csel x10,x10,x11,lt
7101ac9da0  ldr x11,[x11, w12, UXTW #0x3]
7101ac9da4  cbnz x11,0x7101ac9d90
7101ac9da8  cmp x10,x9
7101ac9dac  b.eq 0x7101ac9dfc
7101ac9db0  ldr w11,[x10, #0x20]
7101ac9db4  cmp w11,#0x0
7101ac9db8  b.gt 0x7101ac9dfc
7101ac9dbc  ldr x28,[x10, #0x28]
7101ac9dc0  cbz x28,0x7101ac9dfc
7101ac9dc4  ldr x8,[x28]
7101ac9dc8  ldr x8,[x8, #0x208]
7101ac9dcc  mov x0,x28
7101ac9dd0  mov w1,wzr
7101ac9dd4  blr x8
7101ac9dd8  ldr x8,[x28]
7101ac9ddc  ldr x8,[x8, #0x388]
7101ac9de0  mov w1,#0x1
7101ac9de4  mov x0,x28
7101ac9de8  mov w2,wzr
7101ac9dec  blr x8
7101ac9df0  ldr x8,[x22]
7101ac9df4  add x9,x8,#0x1b8
7101ac9df8  ldr x8,[x8, #0x1b8]
7101ac9dfc  cbz x8,0x7101ac9e64
7101ac9e00  mov x10,x9
7101ac9e04  ldr w11,[x8, #0x20]
7101ac9e08  cmp w11,#0x1
7101ac9e0c  cset w11,lt
7101ac9e10  csel x10,x10,x8,lt
7101ac9e14  ldr x8,[x8, w11, UXTW #0x3]
7101ac9e18  cbnz x8,0x7101ac9e04
7101ac9e1c  cmp x10,x9
7101ac9e20  b.eq 0x7101ac9e64
7101ac9e24  ldr w8,[x10, #0x20]
7101ac9e28  cmp w8,#0x1
7101ac9e2c  b.gt 0x7101ac9e64
7101ac9e30  ldr x28,[x10, #0x28]
7101ac9e34  cbz x28,0x7101ac9e64
7101ac9e38  ldr x8,[x28]
7101ac9e3c  ldr x8,[x8, #0x208]
7101ac9e40  mov x0,x28
7101ac9e44  mov w1,wzr
7101ac9e48  blr x8
7101ac9e4c  ldr x8,[x28]
7101ac9e50  ldr x8,[x8, #0x388]
7101ac9e54  mov w1,#0x1
7101ac9e58  mov x0,x28
7101ac9e5c  mov w2,wzr
7101ac9e60  blr x8
7101ac9e64  ldr x0,[x23]
7101ac9e68  ldr x8,[x0]
7101ac9e6c  ldr x8,[x8, #0x60]
7101ac9e70  mov w1,wzr
7101ac9e74  blr x8
7101ac9e78  ldr x0,[x24]
7101ac9e7c  ldr x8,[x0]
7101ac9e80  ldr x8,[x8, #0x60]
7101ac9e84  mov w1,wzr
7101ac9e88  blr x8
7101ac9e8c  ldr x0,[x25]
7101ac9e90  ldr x8,[x0]
7101ac9e94  ldr x8,[x8, #0x60]
7101ac9e98  mov w1,wzr
7101ac9e9c  blr x8
7101ac9ea0  ldr x0,[x26]
7101ac9ea4  ldr x8,[x0]
7101ac9ea8  ldr x8,[x8, #0x60]
7101ac9eac  mov w1,wzr
7101ac9eb0  blr x8
7101ac9eb4  ldr x0,[x27]
7101ac9eb8  ldr x8,[x0]
7101ac9ebc  ldr x8,[x8, #0x60]
7101ac9ec0  mov w1,wzr
7101ac9ec4  blr x8
7101ac9ec8  ldr x0,[x22]
7101ac9ecc  ldr x8,[x0]
7101ac9ed0  ldr x8,[x8, #0x60]
7101ac9ed4  mov w1,wzr
7101ac9ed8  blr x8
7101ac9edc  mov x25,x21
7101ac9ee0  ldr x22,[sp, #0x28]
7101ac9ee4  stp x21,xzr,[sp, #0x20]
7101ac9ee8  ldp x21,x24,[sp, #0x10]
7101ac9eec  cbz x22,0x7101ac9f08
7101ac9ef0  ldr x0,[x22, #0x18]
7101ac9ef4  stp x20,xzr,[x22, #0x10]
7101ac9ef8  cbz x0,0x7101ac9f00
7101ac9efc  bl 0x710392eb40
7101ac9f00  mov x0,x22
7101ac9f04  bl 0x710392eb40
7101ac9f08  ldr x22,[sp, #0x38]
7101ac9f0c  stp x25,xzr,[sp, #0x30]
7101ac9f10  cbz x22,0x7101ac9f2c
7101ac9f14  ldr x0,[x22, #0x18]
7101ac9f18  stp x20,xzr,[x22, #0x10]
7101ac9f1c  cbz x0,0x7101ac9f24
7101ac9f20  bl 0x710392eb40
7101ac9f24  mov x0,x22
7101ac9f28  bl 0x710392eb40
7101ac9f2c  ldr x22,[sp, #0x48]
7101ac9f30  stp x25,xzr,[sp, #0x40]
7101ac9f34  cbz x22,0x7101ac9f50
7101ac9f38  ldr x0,[x22, #0x18]
7101ac9f3c  stp x20,xzr,[x22, #0x10]
7101ac9f40  cbz x0,0x7101ac9f48
7101ac9f44  bl 0x710392eb40
7101ac9f48  mov x0,x22
7101ac9f4c  bl 0x710392eb40
7101ac9f50  ldur x22,[x29, #-0x88]
7101ac9f54  stp x25,xzr,[x29, #-0x90]
7101ac9f58  cbz x22,0x7101ac9f74
7101ac9f5c  ldr x0,[x22, #0x18]
7101ac9f60  stp x20,xzr,[x22, #0x10]
7101ac9f64  cbz x0,0x7101ac9f6c
7101ac9f68  bl 0x710392eb40
7101ac9f6c  mov x0,x22
7101ac9f70  bl 0x710392eb40
7101ac9f74  ldr x0,[sp, #0x160]
7101ac9f78  add x8,sp,#0x50
7101ac9f7c  add x8,x8,#0xf0
7101ac9f80  cmp x8,x0
7101ac9f84  b.eq 0x7101ac9f98
7101ac9f88  cbz x0,0x7101ac9fa4
7101ac9f8c  ldr x8,[x0]
7101ac9f90  ldr x8,[x8, #0x28]
7101ac9f94  b 0x7101ac9fa0
7101ac9f98  ldr x8,[x0]
7101ac9f9c  ldr x8,[x8, #0x20]
7101ac9fa0  blr x8
7101ac9fa4  ldr x0,[sp, #0x130]
7101ac9fa8  add x8,sp,#0x50
7101ac9fac  add x8,x8,#0xc0
7101ac9fb0  cmp x8,x0
7101ac9fb4  b.eq 0x7101ac9fc8
7101ac9fb8  cbz x0,0x7101ac9fd4
7101ac9fbc  ldr x8,[x0]
7101ac9fc0  ldr x8,[x8, #0x28]
7101ac9fc4  b 0x7101ac9fd0
7101ac9fc8  ldr x8,[x0]
7101ac9fcc  ldr x8,[x8, #0x20]
7101ac9fd0  blr x8
7101ac9fd4  ldr x0,[sp, #0x100]
7101ac9fd8  add x8,sp,#0x50
7101ac9fdc  add x8,x8,#0x90
7101ac9fe0  cmp x8,x0
7101ac9fe4  b.eq 0x7101ac9ff8
7101ac9fe8  cbz x0,0x7101aca004
7101ac9fec  ldr x8,[x0]
7101ac9ff0  ldr x8,[x8, #0x28]
7101ac9ff4  b 0x7101aca000
7101ac9ff8  ldr x8,[x0]
7101ac9ffc  ldr x8,[x8, #0x20]
7101aca000  blr x8
7101aca004  ldr x0,[sp, #0xd0]
7101aca008  add x8,sp,#0x50
7101aca00c  add x8,x8,#0x60
7101aca010  cmp x8,x0
7101aca014  b.eq 0x7101aca028
7101aca018  cbz x0,0x7101aca034
7101aca01c  ldr x8,[x0]
7101aca020  ldr x8,[x8, #0x28]
7101aca024  b 0x7101aca030
7101aca028  ldr x8,[x0]
7101aca02c  ldr x8,[x8, #0x20]
7101aca030  blr x8
7101aca034  ldr x0,[sp, #0xa0]
7101aca038  add x8,sp,#0x50
7101aca03c  add x8,x8,#0x30
7101aca040  cmp x8,x0
7101aca044  b.eq 0x7101aca058
7101aca048  cbz x0,0x7101aca064
7101aca04c  ldr x8,[x0]
7101aca050  ldr x8,[x8, #0x28]
7101aca054  b 0x7101aca060
7101aca058  ldr x8,[x0]
7101aca05c  ldr x8,[x8, #0x20]
7101aca060  blr x8
7101aca064  ldr x0,[sp, #0x290]
7101aca068  add x8,sp,#0x180
7101aca06c  add x8,x8,#0xf0
7101aca070  cmp x8,x0
7101aca074  b.eq 0x7101aca088
7101aca078  cbz x0,0x7101aca094
7101aca07c  ldr x8,[x0]
7101aca080  ldr x8,[x8, #0x28]
7101aca084  b 0x7101aca090
7101aca088  ldr x8,[x0]
7101aca08c  ldr x8,[x8, #0x20]
7101aca090  blr x8
7101aca094  ldr x0,[sp, #0x260]
7101aca098  add x8,sp,#0x180
7101aca09c  add x8,x8,#0xc0
7101aca0a0  cmp x8,x0
7101aca0a4  b.eq 0x7101aca0b8
7101aca0a8  cbz x0,0x7101aca0c4
7101aca0ac  ldr x8,[x0]
7101aca0b0  ldr x8,[x8, #0x28]
7101aca0b4  b 0x7101aca0c0
7101aca0b8  ldr x8,[x0]
7101aca0bc  ldr x8,[x8, #0x20]
7101aca0c0  blr x8
7101aca0c4  ldr x0,[sp, #0x230]
7101aca0c8  add x8,sp,#0x180
7101aca0cc  add x8,x8,#0x90
7101aca0d0  cmp x8,x0
7101aca0d4  b.eq 0x7101aca0e8
7101aca0d8  cbz x0,0x7101aca0f4
7101aca0dc  ldr x8,[x0]
7101aca0e0  ldr x8,[x8, #0x28]
7101aca0e4  b 0x7101aca0f0
7101aca0e8  ldr x8,[x0]
7101aca0ec  ldr x8,[x8, #0x20]
7101aca0f0  blr x8
7101aca0f4  ldr x0,[sp, #0x200]
7101aca0f8  add x8,sp,#0x180
7101aca0fc  add x8,x8,#0x60
7101aca100  cmp x8,x0
7101aca104  b.eq 0x7101aca118
7101aca108  cbz x0,0x7101aca124
7101aca10c  ldr x8,[x0]
7101aca110  ldr x8,[x8, #0x28]
7101aca114  b 0x7101aca120
7101aca118  ldr x8,[x0]
7101aca11c  ldr x8,[x8, #0x20]
7101aca120  blr x8
7101aca124  ldr x0,[sp, #0x1d0]
7101aca128  add x8,sp,#0x180
7101aca12c  add x8,x8,#0x30
7101aca130  cmp x8,x0
7101aca134  b.eq 0x7101aca148
7101aca138  cbz x0,0x7101aca154
7101aca13c  ldr x8,[x0]
7101aca140  ldr x8,[x8, #0x28]
7101aca144  b 0x7101aca150
7101aca148  ldr x8,[x0]
7101aca14c  ldr x8,[x8, #0x20]
7101aca150  blr x8
7101aca154  ldr x0,[sp, #0x3c0]
7101aca158  add x8,sp,#0x2b0
7101aca15c  add x8,x8,#0xf0
7101aca160  cmp x8,x0
7101aca164  b.eq 0x7101aca178
7101aca168  cbz x0,0x7101aca184
7101aca16c  ldr x8,[x0]
7101aca170  ldr x8,[x8, #0x28]
7101aca174  b 0x7101aca180
7101aca178  ldr x8,[x0]
7101aca17c  ldr x8,[x8, #0x20]
7101aca180  blr x8
7101aca184  ldr x0,[sp, #0x390]
7101aca188  add x8,sp,#0x2b0
7101aca18c  add x8,x8,#0xc0
7101aca190  cmp x8,x0
7101aca194  b.eq 0x7101aca1a8
7101aca198  cbz x0,0x7101aca1b4
7101aca19c  ldr x8,[x0]
7101aca1a0  ldr x8,[x8, #0x28]
7101aca1a4  b 0x7101aca1b0
7101aca1a8  ldr x8,[x0]
7101aca1ac  ldr x8,[x8, #0x20]
7101aca1b0  blr x8
7101aca1b4  ldr x0,[sp, #0x360]
7101aca1b8  add x8,sp,#0x2b0
7101aca1bc  add x8,x8,#0x90
7101aca1c0  cmp x8,x0
7101aca1c4  b.eq 0x7101aca1d8
7101aca1c8  cbz x0,0x7101aca1e4
7101aca1cc  ldr x8,[x0]
7101aca1d0  ldr x8,[x8, #0x28]
7101aca1d4  b 0x7101aca1e0
7101aca1d8  ldr x8,[x0]
7101aca1dc  ldr x8,[x8, #0x20]
7101aca1e0  blr x8
7101aca1e4  ldr x0,[sp, #0x330]
7101aca1e8  ldr x8,[sp, #0x8]
7101aca1ec  cmp x8,x0
7101aca1f0  b.eq 0x7101aca204
7101aca1f4  cbz x0,0x7101aca210
7101aca1f8  ldr x8,[x0]
7101aca1fc  ldr x8,[x8, #0x28]
7101aca200  b 0x7101aca20c
7101aca204  ldr x8,[x0]
7101aca208  ldr x8,[x8, #0x20]
7101aca20c  blr x8
7101aca210  ldr x0,[sp, #0x300]
7101aca214  add x8,sp,#0x2b0
7101aca218  add x8,x8,#0x30
7101aca21c  cmp x8,x0
7101aca220  b.eq 0x7101aca234
7101aca224  cbz x0,0x7101aca240
7101aca228  ldr x8,[x0]
7101aca22c  ldr x8,[x8, #0x28]
7101aca230  b 0x7101aca23c
7101aca234  ldr x8,[x0]
7101aca238  ldr x8,[x8, #0x20]
7101aca23c  blr x8
7101aca240  adrp x1,0x71043f0000
7101aca244  add x1,x1,#0x530
7101aca248  add x8,sp,#0x2b0
7101aca24c  mov x0,x21
7101aca250  bl 0x7103776910
7101aca254  ldr x0,[sp, #0x2b8]
7101aca258  ldr x8,[x0]
7101aca25c  cbz x8,0x7101aca26c
7101aca260  ldrb w9,[x8, #0x58]
7101aca264  and w9,w9,#0xfe
7101aca268  strb w9,[x8, #0x58]
7101aca26c  str x20,[sp, #0x2b0]
7101aca270  str xzr,[sp, #0x2b8]
7101aca274  cbz x0,0x7101aca27c
7101aca278  bl 0x710392eb40
7101aca27c  adrp x1,0x7104443000
7101aca280  add x1,x1,#0xee
7101aca284  add x8,sp,#0x2b0
7101aca288  mov x0,x21
7101aca28c  bl 0x7103776910
7101aca290  ldr x0,[sp, #0x2b8]
7101aca294  ldr x8,[x0]
7101aca298  cbz x8,0x7101aca2a8
7101aca29c  ldrb w9,[x8, #0x58]
7101aca2a0  and w9,w9,#0xfe
7101aca2a4  strb w9,[x8, #0x58]
7101aca2a8  str x20,[sp, #0x2b0]
7101aca2ac  str xzr,[sp, #0x2b8]
7101aca2b0  cbz x0,0x7101aca2b8
7101aca2b4  bl 0x710392eb40
7101aca2b8  adrp x1,0x71043ce000
7101aca2bc  add x1,x1,#0xf63
7101aca2c0  add x8,sp,#0x2b0
7101aca2c4  mov x0,x21
7101aca2c8  bl 0x7103776910
7101aca2cc  ldr x0,[sp, #0x2b8]
7101aca2d0  ldr x8,[x0]
7101aca2d4  cbz x8,0x7101aca2e4
7101aca2d8  ldrb w9,[x8, #0x58]
7101aca2dc  and w9,w9,#0xfe
7101aca2e0  strb w9,[x8, #0x58]
7101aca2e4  str x20,[sp, #0x2b0]
7101aca2e8  str xzr,[sp, #0x2b8]
7101aca2ec  cbz x0,0x7101aca2f4
7101aca2f0  bl 0x710392eb40
7101aca2f4  adrp x1,0x710424f000
7101aca2f8  add x1,x1,#0xd25
7101aca2fc  add x8,sp,#0x2b0
7101aca300  mov x0,x21
7101aca304  bl 0x7103776640
7101aca308  ldr x22,[sp, #0x2b8]
7101aca30c  fmov s0,0x3f800000
7101aca310  adrp x1,0x71043f0000
7101aca314  add x1,x1,#0x5a6
7101aca318  mov x0,x22
7101aca31c  bl 0x7103778300
7101aca320  str x25,[sp, #0x2b0]
7101aca324  str xzr,[sp, #0x2b8]
7101aca328  cbz x22,0x7101aca344
7101aca32c  ldr x0,[x22, #0x18]
7101aca330  stp x20,xzr,[x22, #0x10]
7101aca334  cbz x0,0x7101aca33c
7101aca338  bl 0x710392eb40
7101aca33c  mov x0,x22
7101aca340  bl 0x710392eb40
7101aca344  adrp x1,0x7104281000
7101aca348  add x1,x1,#0x191
7101aca34c  add x8,sp,#0x2b0
7101aca350  mov x0,x21
7101aca354  bl 0x7103776640
7101aca358  ldr x22,[sp, #0x2b8]
7101aca35c  fmov s0,0x3f800000
7101aca360  adrp x1,0x71043f0000
7101aca364  add x1,x1,#0x5a6
7101aca368  mov x0,x22
7101aca36c  bl 0x7103778300
7101aca370  str x25,[sp, #0x2b0]
7101aca374  str xzr,[sp, #0x2b8]
7101aca378  cbz x22,0x7101aca394
7101aca37c  ldr x0,[x22, #0x18]
7101aca380  stp x20,xzr,[x22, #0x10]
7101aca384  cbz x0,0x7101aca38c
7101aca388  bl 0x710392eb40
7101aca38c  mov x0,x22
7101aca390  bl 0x710392eb40
7101aca394  adrp x1,0x710432a000
7101aca398  add x1,x1,#0x6e1
7101aca39c  add x8,sp,#0x2b0
7101aca3a0  mov x0,x21
7101aca3a4  bl 0x7103776640
7101aca3a8  ldr x22,[sp, #0x2b8]
7101aca3ac  fmov s0,0x3f800000
7101aca3b0  adrp x1,0x71042e6000
7101aca3b4  add x1,x1,#0xc31
7101aca3b8  mov x0,x22
7101aca3bc  bl 0x7103778300
7101aca3c0  str x25,[sp, #0x2b0]
7101aca3c4  str xzr,[sp, #0x2b8]
7101aca3c8  cbz x22,0x7101aca3e4
7101aca3cc  ldr x0,[x22, #0x18]
7101aca3d0  stp x20,xzr,[x22, #0x10]
7101aca3d4  cbz x0,0x7101aca3dc
7101aca3d8  bl 0x710392eb40
7101aca3dc  mov x0,x22
7101aca3e0  bl 0x710392eb40
7101aca3e4  adrp x1,0x71042b4000
7101aca3e8  add x1,x1,#0x950
7101aca3ec  add x8,sp,#0x2b0
7101aca3f0  mov x0,x21
7101aca3f4  bl 0x7103776640
7101aca3f8  ldr x22,[sp, #0x2b8]
7101aca3fc  fmov s0,0x3f800000
7101aca400  adrp x1,0x71042e6000
7101aca404  add x1,x1,#0xc31
7101aca408  mov x0,x22
7101aca40c  bl 0x7103778300
7101aca410  str x25,[sp, #0x2b0]
7101aca414  str xzr,[sp, #0x2b8]
7101aca418  cbz x22,0x7101aca434
7101aca41c  ldr x0,[x22, #0x18]
7101aca420  stp x20,xzr,[x22, #0x10]
7101aca424  cbz x0,0x7101aca42c
7101aca428  bl 0x710392eb40
7101aca42c  mov x0,x22
7101aca430  bl 0x710392eb40
7101aca434  adrp x1,0x710424e000
7101aca438  add x1,x1,#0xfc5
7101aca43c  add x8,sp,#0x2b0
7101aca440  mov x0,x21
7101aca444  add x23,sp,#0x2b0
7101aca448  bl 0x7103776640
7101aca44c  ldr x22,[sp, #0x2b8]
7101aca450  fmov s0,0x3f800000
7101aca454  adrp x1,0x71043ce000
7101aca458  add x1,x1,#0xeea
7101aca45c  mov x0,x22
7101aca460  bl 0x7103778300
7101aca464  str x25,[sp, #0x2b0]
7101aca468  str xzr,[sp, #0x2b8]
7101aca46c  cbz x22,0x7101aca488
7101aca470  ldr x0,[x22, #0x18]
7101aca474  stp x20,xzr,[x22, #0x10]
7101aca478  cbz x0,0x7101aca480
7101aca47c  bl 0x710392eb40
7101aca480  mov x0,x22
7101aca484  bl 0x710392eb40
7101aca488  adrp x1,0x710436b000
7101aca48c  add x1,x1,#0xe2f
7101aca490  add x8,sp,#0x2b0
7101aca494  mov x0,x21
7101aca498  bl 0x7103776640
7101aca49c  add x8,x19,#0x2e0
7101aca4a0  cmp x8,x23
7101aca4a4  b.eq 0x7101aca4d4
7101aca4a8  ldr x8,[sp, #0x2b8]
7101aca4ac  str xzr,[sp, #0x2b8]
7101aca4b0  ldr x21,[x19, #0x2e8]
7101aca4b4  str x8,[x19, #0x2e8]
7101aca4b8  cbz x21,0x7101aca4d4
7101aca4bc  ldr x0,[x21, #0x18]
7101aca4c0  stp x20,xzr,[x21, #0x10]
7101aca4c4  cbz x0,0x7101aca4cc
7101aca4c8  bl 0x710392eb40
7101aca4cc  mov x0,x21
7101aca4d0  bl 0x710392eb40
7101aca4d4  ldr x21,[sp, #0x2b8]
7101aca4d8  str x25,[sp, #0x2b0]
7101aca4dc  str xzr,[sp, #0x2b8]
7101aca4e0  cbz x21,0x7101aca4fc
7101aca4e4  ldr x0,[x21, #0x18]
7101aca4e8  stp x20,xzr,[x21, #0x10]
7101aca4ec  cbz x0,0x7101aca4f4
7101aca4f0  bl 0x710392eb40
7101aca4f4  mov x0,x21
7101aca4f8  bl 0x710392eb40
7101aca4fc  ldr x21,[x19, #0x2f0]
7101aca500  mov w1,#0x88
7101aca504  mov w0,#0x10
7101aca508  bl 0x710392e290
7101aca50c  mov x22,x0
7101aca510  cbnz x0,0x7101aca55c
7101aca514  adrp x8,0x7105332000
7101aca518  ldr x0,[x8, #0xf00]
7101aca51c  cbz x0,0x7101aca558
7101aca520  mov w8,#0x88
7101aca524  str wzr,[sp, #0x180]
7101aca528  add x1,sp,#0x180
7101aca52c  str x8,[sp, #0x2b0]
7101aca530  ldr x8,[x0]
7101aca534  ldr x8,[x8, #0x30]
7101aca538  add x2,sp,#0x2b0
7101aca53c  blr x8
7101aca540  tbz w0,#0x0,0x7101aca558
7101aca544  mov w1,#0x88
7101aca548  mov w0,#0x10
7101aca54c  bl 0x710392e290
7101aca550  mov x22,x0
7101aca554  cbnz x0,0x7101aca55c
7101aca558  mov x22,xzr
7101aca55c  mov x0,x22
7101aca560  mov x1,x21
7101aca564  mov w2,wzr
7101aca568  bl 0x7101ad0e40
7101aca56c  adrp x8,0x7105333000
7101aca570  add x8,x8,#0x600
7101aca574  str x8,[x22, #0x10]
7101aca578  ldp w9,w8,[x8, #0x60]
7101aca57c  stp w9,w8,[x22, #0x68]
7101aca580  adrp x8,0x7105333000
7101aca584  add x8,x8,#0x650
7101aca588  mov w9,#0x1
7101aca58c  ldaxrb w10,[x8]
7101aca590  stxrb w11,w9,[x8]
7101aca594  and w10,w10,#0x1
7101aca598  cmp w11,#0x0
7101aca59c  ccmp w10,#0x0,#0x0,eq
7101aca5a0  b.ne 0x7101aca58c
7101aca5a4  adrp x8,0x7105333000
7101aca5a8  add x8,x8,#0x648
7101aca5ac  ldr x9,[x8]
7101aca5b0  str x9,[x22, #0x48]
7101aca5b4  mov x0,x22
7101aca5b8  str x22,[x8], #0x8
7101aca5bc  stlrb wzr,[x8]
7101aca5c0  bl 0x71032caea0
7101aca5c4  ldr x0,[x19, #0x218]
7101aca5c8  str x22,[x19, #0x218]
7101aca5cc  cbz x0,0x7101aca5d4
7101aca5d0  bl 0x71032cad20
7101aca5d4  adrp x8,0x7105325000
7101aca5d8  ldr x0,[x8, #0xca8]
7101aca5dc  bl 0x7101ccce30
7101aca5e0  cbz x24,0x7101aca5ec
7101aca5e4  mov x0,x24
7101aca5e8  bl 0x710392eb40
7101aca5ec  ldr x0,[sp, #0x500]
7101aca5f0  add x8,sp,#0x3f0
7101aca5f4  add x8,x8,#0xf0
7101aca5f8  cmp x8,x0
7101aca5fc  b.eq 0x7101aca610
7101aca600  cbz x0,0x7101aca61c
7101aca604  ldr x8,[x0]
7101aca608  ldr x8,[x8, #0x28]
7101aca60c  b 0x7101aca618
7101aca610  ldr x8,[x0]
7101aca614  ldr x8,[x8, #0x20]
7101aca618  blr x8
7101aca61c  ldr x0,[sp, #0x4d0]
7101aca620  add x8,sp,#0x3f0
7101aca624  add x8,x8,#0xc0
7101aca628  cmp x8,x0
7101aca62c  b.eq 0x7101aca640
7101aca630  cbz x0,0x7101aca64c
7101aca634  ldr x8,[x0]
7101aca638  ldr x8,[x8, #0x28]
7101aca63c  b 0x7101aca648
7101aca640  ldr x8,[x0]
7101aca644  ldr x8,[x8, #0x20]
7101aca648  blr x8
7101aca64c  ldr x0,[sp, #0x4a0]
7101aca650  add x8,sp,#0x3f0
7101aca654  add x8,x8,#0x90
7101aca658  cmp x8,x0
7101aca65c  b.eq 0x7101aca670
7101aca660  cbz x0,0x7101aca67c
7101aca664  ldr x8,[x0]
7101aca668  ldr x8,[x8, #0x28]
7101aca66c  b 0x7101aca678
7101aca670  ldr x8,[x0]
7101aca674  ldr x8,[x8, #0x20]
7101aca678  blr x8
7101aca67c  ldr x0,[sp, #0x470]
7101aca680  add x8,sp,#0x3f0
7101aca684  add x8,x8,#0x60
7101aca688  cmp x8,x0
7101aca68c  b.eq 0x7101aca6a0
7101aca690  cbz x0,0x7101aca6ac
7101aca694  ldr x8,[x0]
7101aca698  ldr x8,[x8, #0x28]
7101aca69c  b 0x7101aca6a8
7101aca6a0  ldr x8,[x0]
7101aca6a4  ldr x8,[x8, #0x20]
7101aca6a8  blr x8
7101aca6ac  ldr x0,[sp, #0x440]
7101aca6b0  add x8,sp,#0x3f0
7101aca6b4  add x8,x8,#0x30
7101aca6b8  cmp x8,x0
7101aca6bc  b.eq 0x7101aca6d0
7101aca6c0  cbz x0,0x7101aca6dc
7101aca6c4  ldr x8,[x0]
7101aca6c8  ldr x8,[x8, #0x28]
7101aca6cc  b 0x7101aca6d8
7101aca6d0  ldr x8,[x0]
7101aca6d4  ldr x8,[x8, #0x20]
7101aca6d8  blr x8
7101aca6dc  add sp,sp,#0x560
7101aca6e0  ldp x29,x30,[sp, #0x50]
7101aca6e4  ldp x20,x19,[sp, #0x40]
7101aca6e8  ldp x22,x21,[sp, #0x30]
7101aca6ec  ldp x24,x23,[sp, #0x20]
7101aca6f0  ldp x26,x25,[sp, #0x10]
7101aca6f4  ldp x28,x27,[sp], #0x60
7101aca6f8  ret
