// addr:      7101dd86c0
// offset:    0x1dd86c0
// name:      FUN_7101dd86c0
// mangled:   
// size:      1336

7101dd86c0  sub sp,sp,#0x50
7101dd86c4  str x21,[sp, #0x20]
7101dd86c8  stp x20,x19,[sp, #0x30]
7101dd86cc  stp x29,x30,[sp, #0x40]
7101dd86d0  add x29,sp,#0x40
7101dd86d4  ldr x21,[x0, #0x80]
7101dd86d8  ldr x8,[x21, #0xf0]
7101dd86dc  ldr x9,[x8, #0x1b8]
7101dd86e0  cbz x9,0x7101dd8bc0
7101dd86e4  add x10,x8,#0x1b8
7101dd86e8  mov x8,x10
7101dd86ec  ldr w11,[x9, #0x20]
7101dd86f0  cmp w11,#0x6
7101dd86f4  cset w11,lt
7101dd86f8  csel x8,x8,x9,lt
7101dd86fc  ldr x9,[x9, w11, UXTW #0x3]
7101dd8700  cbnz x9,0x7101dd86ec
7101dd8704  cmp x8,x10
7101dd8708  b.eq 0x7101dd8bc0
7101dd870c  ldr w9,[x8, #0x20]
7101dd8710  cmp w9,#0x6
7101dd8714  b.gt 0x7101dd8bc0
7101dd8718  ldr x0,[x8, #0x28]
7101dd871c  cbz x0,0x7101dd8bc0
7101dd8720  ldr x8,[x0]
7101dd8724  ldr x8,[x8, #0x200]
7101dd8728  blr x8
7101dd872c  tbz w0,#0x0,0x7101dd8bc0
7101dd8730  adrp x8,0x7105329000
7101dd8734  ldr x8,[x8, #0xf98]
7101dd8738  ldr x8,[x8]
7101dd873c  ldr x8,[x8, #0x40]
7101dd8740  ldrb w9,[x8, #0x388]
7101dd8744  cbz w9,0x7101dd8ac4
7101dd8748  ldr x9,[x8]
7101dd874c  cbz x9,0x7101dd8788
7101dd8750  ldrb w10,[x9, #0x20]
7101dd8754  ldrb w11,[x9, #0x1f8]
7101dd8758  cmp w10,#0x3
7101dd875c  mov w12,#0x1
7101dd8760  cset w10,eq
7101dd8764  cinc w12,w12,eq
7101dd8768  cmp w11,#0x3
7101dd876c  ldrb w11,[x9, #0x3d0]
7101dd8770  ldrb w9,[x9, #0x5a8]
7101dd8774  csel w10,w12,w10,eq
7101dd8778  cmp w11,#0x3
7101dd877c  cinc w10,w10,eq
7101dd8780  cmp w9,#0x3
7101dd8784  cinc w9,w10,eq
7101dd8788  ldr x10,[x8, #0x8]
7101dd878c  cbz x10,0x7101dd87c8
7101dd8790  ldrb w12,[x10, #0x1f0]
7101dd8794  ldrb w11,[x10, #0x28]
7101dd8798  mov w13,#0x2
7101dd879c  cmp w12,#0x3
7101dd87a0  cset w12,eq
7101dd87a4  csinc w13,w13,wzr,eq
7101dd87a8  cmp w11,#0x3
7101dd87ac  csel w11,w12,w13,ne
7101dd87b0  ldrb w12,[x10, #0x3b8]
7101dd87b4  ldrb w10,[x10, #0x580]
7101dd87b8  cmp w12,#0x3
7101dd87bc  cinc w11,w11,eq
7101dd87c0  cmp w10,#0x3
7101dd87c4  cinc w10,w11,eq
7101dd87c8  ldr x11,[x8, #0x10]
7101dd87cc  cbz x11,0x7101dd8800
7101dd87d0  ldrb w12,[x11, #0x28]
7101dd87d4  cmp w12,#0x3
7101dd87d8  ldrb w12,[x11, #0x1f0]
7101dd87dc  cinc w10,w10,eq
7101dd87e0  cmp w12,#0x3
7101dd87e4  ldrb w12,[x11, #0x3b8]
7101dd87e8  ldrb w11,[x11, #0x580]
7101dd87ec  cinc w10,w10,eq
7101dd87f0  cmp w12,#0x3
7101dd87f4  cinc w10,w10,eq
7101dd87f8  cmp w11,#0x3
7101dd87fc  cinc w10,w10,eq
7101dd8800  ldr x11,[x8, #0x18]
7101dd8804  cbz x11,0x7101dd8838
7101dd8808  ldrb w12,[x11, #0x28]
7101dd880c  cmp w12,#0x3
7101dd8810  ldrb w12,[x11, #0x1f0]
7101dd8814  cinc w10,w10,eq
7101dd8818  cmp w12,#0x3
7101dd881c  ldrb w12,[x11, #0x3b8]
7101dd8820  ldrb w11,[x11, #0x580]
7101dd8824  cinc w10,w10,eq
7101dd8828  cmp w12,#0x3
7101dd882c  cinc w10,w10,eq
7101dd8830  cmp w11,#0x3
7101dd8834  cinc w10,w10,eq
7101dd8838  ldr x11,[x8, #0x20]
7101dd883c  cbz x11,0x7101dd8870
7101dd8840  ldrb w12,[x11, #0x28]
7101dd8844  cmp w12,#0x3
7101dd8848  ldrb w12,[x11, #0x1f0]
7101dd884c  cinc w10,w10,eq
7101dd8850  cmp w12,#0x3
7101dd8854  ldrb w12,[x11, #0x3b8]
7101dd8858  ldrb w11,[x11, #0x580]
7101dd885c  cinc w10,w10,eq
7101dd8860  cmp w12,#0x3
7101dd8864  cinc w10,w10,eq
7101dd8868  cmp w11,#0x3
7101dd886c  cinc w10,w10,eq
7101dd8870  ldr x11,[x8, #0x28]
7101dd8874  cbz x11,0x7101dd88a8
7101dd8878  ldrb w12,[x11, #0x28]
7101dd887c  cmp w12,#0x3
7101dd8880  ldrb w12,[x11, #0x1f0]
7101dd8884  cinc w10,w10,eq
7101dd8888  cmp w12,#0x3
7101dd888c  ldrb w12,[x11, #0x3b8]
7101dd8890  ldrb w11,[x11, #0x580]
7101dd8894  cinc w10,w10,eq
7101dd8898  cmp w12,#0x3
7101dd889c  cinc w10,w10,eq
7101dd88a0  cmp w11,#0x3
7101dd88a4  cinc w10,w10,eq
7101dd88a8  ldr x11,[x8, #0x30]
7101dd88ac  cbz x11,0x7101dd88e0
7101dd88b0  ldrb w12,[x11, #0x28]
7101dd88b4  cmp w12,#0x3
7101dd88b8  ldrb w12,[x11, #0x1f0]
7101dd88bc  cinc w10,w10,eq
7101dd88c0  cmp w12,#0x3
7101dd88c4  ldrb w12,[x11, #0x3b8]
7101dd88c8  ldrb w11,[x11, #0x580]
7101dd88cc  cinc w10,w10,eq
7101dd88d0  cmp w12,#0x3
7101dd88d4  cinc w10,w10,eq
7101dd88d8  cmp w11,#0x3
7101dd88dc  cinc w10,w10,eq
7101dd88e0  ldr x11,[x8, #0x38]
7101dd88e4  cbz x11,0x7101dd8918
7101dd88e8  ldrb w12,[x11, #0x28]
7101dd88ec  cmp w12,#0x3
7101dd88f0  ldrb w12,[x11, #0x1f0]
7101dd88f4  cinc w10,w10,eq
7101dd88f8  cmp w12,#0x3
7101dd88fc  ldrb w12,[x11, #0x3b8]
7101dd8900  ldrb w11,[x11, #0x580]
7101dd8904  cinc w10,w10,eq
7101dd8908  cmp w12,#0x3
7101dd890c  cinc w10,w10,eq
7101dd8910  cmp w11,#0x3
7101dd8914  cinc w10,w10,eq
7101dd8918  ldr x11,[x8, #0x40]
7101dd891c  cbz x11,0x7101dd8950
7101dd8920  ldrb w12,[x11, #0x28]
7101dd8924  cmp w12,#0x3
7101dd8928  ldrb w12,[x11, #0x1f0]
7101dd892c  cinc w10,w10,eq
7101dd8930  cmp w12,#0x3
7101dd8934  ldrb w12,[x11, #0x3b8]
7101dd8938  ldrb w11,[x11, #0x580]
7101dd893c  cinc w10,w10,eq
7101dd8940  cmp w12,#0x3
7101dd8944  cinc w10,w10,eq
7101dd8948  cmp w11,#0x3
7101dd894c  cinc w10,w10,eq
7101dd8950  ldr x11,[x8, #0x48]
7101dd8954  cbz x11,0x7101dd8988
7101dd8958  ldrb w12,[x11, #0x28]
7101dd895c  cmp w12,#0x3
7101dd8960  ldrb w12,[x11, #0x1f0]
7101dd8964  cinc w10,w10,eq
7101dd8968  cmp w12,#0x3
7101dd896c  ldrb w12,[x11, #0x3b8]
7101dd8970  ldrb w11,[x11, #0x580]
7101dd8974  cinc w10,w10,eq
7101dd8978  cmp w12,#0x3
7101dd897c  cinc w10,w10,eq
7101dd8980  cmp w11,#0x3
7101dd8984  cinc w10,w10,eq
7101dd8988  ldr x11,[x8, #0x50]
7101dd898c  cbz x11,0x7101dd89c0
7101dd8990  ldrb w12,[x11, #0x28]
7101dd8994  cmp w12,#0x3
7101dd8998  ldrb w12,[x11, #0x1f0]
7101dd899c  cinc w10,w10,eq
7101dd89a0  cmp w12,#0x3
7101dd89a4  ldrb w12,[x11, #0x3b8]
7101dd89a8  ldrb w11,[x11, #0x580]
7101dd89ac  cinc w10,w10,eq
7101dd89b0  cmp w12,#0x3
7101dd89b4  cinc w10,w10,eq
7101dd89b8  cmp w11,#0x3
7101dd89bc  cinc w10,w10,eq
7101dd89c0  ldr x11,[x8, #0x58]
7101dd89c4  cbz x11,0x7101dd89f8
7101dd89c8  ldrb w12,[x11, #0x28]
7101dd89cc  cmp w12,#0x3
7101dd89d0  ldrb w12,[x11, #0x1f0]
7101dd89d4  cinc w10,w10,eq
7101dd89d8  cmp w12,#0x3
7101dd89dc  ldrb w12,[x11, #0x3b8]
7101dd89e0  ldrb w11,[x11, #0x580]
7101dd89e4  cinc w10,w10,eq
7101dd89e8  cmp w12,#0x3
7101dd89ec  cinc w10,w10,eq
7101dd89f0  cmp w11,#0x3
7101dd89f4  cinc w10,w10,eq
7101dd89f8  ldr x11,[x8, #0x60]
7101dd89fc  cbz x11,0x7101dd8a30
7101dd8a00  ldrb w12,[x11, #0x28]
7101dd8a04  cmp w12,#0x3
7101dd8a08  ldrb w12,[x11, #0x1f0]
7101dd8a0c  cinc w10,w10,eq
7101dd8a10  cmp w12,#0x3
7101dd8a14  ldrb w12,[x11, #0x3b8]
7101dd8a18  ldrb w11,[x11, #0x580]
7101dd8a1c  cinc w10,w10,eq
7101dd8a20  cmp w12,#0x3
7101dd8a24  cinc w10,w10,eq
7101dd8a28  cmp w11,#0x3
7101dd8a2c  cinc w10,w10,eq
7101dd8a30  ldr x11,[x8, #0x68]
7101dd8a34  cbz x11,0x7101dd8a68
7101dd8a38  ldrb w12,[x11, #0x28]
7101dd8a3c  cmp w12,#0x3
7101dd8a40  ldrb w12,[x11, #0x1f0]
7101dd8a44  cinc w10,w10,eq
7101dd8a48  cmp w12,#0x3
7101dd8a4c  ldrb w12,[x11, #0x3b8]
7101dd8a50  ldrb w11,[x11, #0x580]
7101dd8a54  cinc w10,w10,eq
7101dd8a58  cmp w12,#0x3
7101dd8a5c  cinc w10,w10,eq
7101dd8a60  cmp w11,#0x3
7101dd8a64  cinc w10,w10,eq
7101dd8a68  ldr x11,[x8, #0x70]
7101dd8a6c  cbz x11,0x7101dd8aa0
7101dd8a70  ldrb w12,[x11, #0x28]
7101dd8a74  cmp w12,#0x3
7101dd8a78  ldrb w12,[x11, #0x1f0]
7101dd8a7c  cinc w10,w10,eq
7101dd8a80  cmp w12,#0x3
7101dd8a84  ldrb w12,[x11, #0x3b8]
7101dd8a88  ldrb w11,[x11, #0x580]
7101dd8a8c  cinc w10,w10,eq
7101dd8a90  cmp w12,#0x3
7101dd8a94  cinc w10,w10,eq
7101dd8a98  cmp w11,#0x3
7101dd8a9c  cinc w10,w10,eq
7101dd8aa0  ldr x11,[x8, #0x78]
7101dd8aa4  cbz x11,0x7101dd8ad0
7101dd8aa8  ldrb w11,[x11, #0x80]
7101dd8aac  cmp w11,#0x4
7101dd8ab0  b.eq 0x7101dd8abc
7101dd8ab4  cmp w11,#0x2
7101dd8ab8  b.ne 0x7101dd8acc
7101dd8abc  mov w11,#0x1
7101dd8ac0  b 0x7101dd8ad0
7101dd8ac4  mov w11,wzr
7101dd8ac8  b 0x7101dd8b14
7101dd8acc  mov w11,wzr
7101dd8ad0  add w9,w10,w9
7101dd8ad4  ldr x10,[x8, #0x80]
7101dd8ad8  cbz x10,0x7101dd8af4
7101dd8adc  ldrb w10,[x10, #0x80]
7101dd8ae0  cmp w10,#0x4
7101dd8ae4  b.eq 0x7101dd8af0
7101dd8ae8  cmp w10,#0x2
7101dd8aec  b.ne 0x7101dd8af4
7101dd8af0  add w11,w11,#0x1
7101dd8af4  ldr x8,[x8, #0x88]
7101dd8af8  cbz x8,0x7101dd8b14
7101dd8afc  ldrb w8,[x8, #0x80]
7101dd8b00  cmp w8,#0x4
7101dd8b04  b.eq 0x7101dd8b10
7101dd8b08  cmp w8,#0x2
7101dd8b0c  b.ne 0x7101dd8b14
7101dd8b10  add w11,w11,#0x1
7101dd8b14  add w8,w9,w11
7101dd8b18  tst w8,#0xff
7101dd8b1c  b.eq 0x7101dd8bd4
7101dd8b20  ldr x0,[x21, #0xe8]
7101dd8b24  fmov s0,0x3f800000
7101dd8b28  adrp x1,0x710437c000
7101dd8b2c  add x1,x1,#0xa30
7101dd8b30  add x19,x21,#0xe0
7101dd8b34  and w20,w8,#0xff
7101dd8b38  bl 0x7103778300
7101dd8b3c  adrp x1,0x710437c000
7101dd8b40  add x1,x1,#0xa3a
7101dd8b44  mov x8,sp
7101dd8b48  mov x0,x19
7101dd8b4c  bl 0x7103776640
7101dd8b50  adrp x1,0x7104348000
7101dd8b54  add x1,x1,#0x8ca
7101dd8b58  add x8,sp,#0x10
7101dd8b5c  mov x0,sp
7101dd8b60  bl 0x7103776910
7101dd8b64  adrp x1,0x710437c000
7101dd8b68  add x1,x1,#0xb51
7101dd8b6c  add x0,sp,#0x10
7101dd8b70  mov w2,#0x1
7101dd8b74  mov w3,w20
7101dd8b78  bl 0x710377a280
7101dd8b7c  ldr x0,[sp, #0x18]
7101dd8b80  adrp x20,0x710523d000
7101dd8b84  add x20,x20,#0x9a8
7101dd8b88  stp x20,xzr,[sp, #0x10]
7101dd8b8c  cbz x0,0x7101dd8b94
7101dd8b90  bl 0x710392eb40
7101dd8b94  ldr x19,[sp, #0x8]
7101dd8b98  adrp x8,0x710523d000
7101dd8b9c  add x8,x8,#0x988
7101dd8ba0  stp x8,xzr,[sp]
7101dd8ba4  cbz x19,0x7101dd8bc0
7101dd8ba8  ldr x0,[x19, #0x18]
7101dd8bac  stp x20,xzr,[x19, #0x10]
7101dd8bb0  cbz x0,0x7101dd8bb8
7101dd8bb4  bl 0x710392eb40
7101dd8bb8  mov x0,x19
7101dd8bbc  bl 0x710392eb40
7101dd8bc0  ldp x29,x30,[sp, #0x40]
7101dd8bc4  ldr x21,[sp, #0x20]
7101dd8bc8  ldp x20,x19,[sp, #0x30]
7101dd8bcc  add sp,sp,#0x50
7101dd8bd0  ret
7101dd8bd4  ldr x0,[x21, #0xe8]
7101dd8bd8  ldp x29,x30,[sp, #0x40]
7101dd8bdc  ldp x20,x19,[sp, #0x30]
7101dd8be0  adrp x1,0x710433a000
7101dd8be4  add x1,x1,#0x60c
7101dd8be8  ldr x21,[sp, #0x20]
7101dd8bec  fmov s0,0x3f800000
7101dd8bf0  add sp,sp,#0x50
7101dd8bf4  b 0x7103778300
