// addr:      7101aa86f0
// offset:    0x1aa86f0
// name:      FUN_7101aa86f0
// mangled:   
// size:      3080

7101aa86f0  sub sp,sp,#0x1e0
7101aa86f4  str x28,[sp, #0x180]
7101aa86f8  stp x26,x25,[sp, #0x190]
7101aa86fc  stp x24,x23,[sp, #0x1a0]
7101aa8700  stp x22,x21,[sp, #0x1b0]
7101aa8704  stp x20,x19,[sp, #0x1c0]
7101aa8708  stp x29,x30,[sp, #0x1d0]
7101aa870c  add x29,sp,#0x1d0
7101aa8710  ldp x8,x9,[x1]
7101aa8714  ldr x10,[x1, #0x10]
7101aa8718  ldrb w11,[x1, #0x18]
7101aa871c  and w12,w2,#0x1
7101aa8720  add x19,x0,#0x1a0
7101aa8724  stp x9,x10,[x0, #0x178]
7101aa8728  and w10,w4,#0x1
7101aa872c  mov x20,x0
7101aa8730  strb w12,[x0, #0x1cc]
7101aa8734  strb w11,[x0, #0x188]
7101aa8738  str x8,[x0, #0x170]
7101aa873c  str w3,[x0, #0x1d0]
7101aa8740  adrp x1,0x7104319000
7101aa8744  add x1,x1,#0x6c3
7101aa8748  strb w10,[x0, #0x1e1]
7101aa874c  sub x8,x29,#0x60
7101aa8750  mov x0,x19
7101aa8754  bl 0x7103776910
7101aa8758  ldr x8,[x20, #0x180]
7101aa875c  add x9,x8,#0x50
7101aa8760  cmp x8,#0x0
7101aa8764  csel x1,xzr,x9,eq
7101aa8768  sub x0,x29,#0x60
7101aa876c  bl 0x710377a120
7101aa8770  adrp x1,0x710424e000
7101aa8774  add x1,x1,#0xfad
7101aa8778  sub x8,x29,#0x70
7101aa877c  mov x0,x19
7101aa8780  bl 0x7103776910
7101aa8784  ldr x8,[x20, #0x180]
7101aa8788  add x9,x8,#0x90
7101aa878c  cmp x8,#0x0
7101aa8790  csel x1,xzr,x9,eq
7101aa8794  sub x0,x29,#0x70
7101aa8798  bl 0x710377a120
7101aa879c  ldr x8,[x20, #0x180]
7101aa87a0  add x21,x20,#0x190
7101aa87a4  cbz x8,0x7101aa87d0
7101aa87a8  ldrsw x9,[x8, #0x160]
7101aa87ac  cbz w9,0x7101aa87d8
7101aa87b0  ldr w10,[x8, #0x164]
7101aa87b4  ldr w11,[x8]
7101aa87b8  add w10,w9,w10
7101aa87bc  add x9,x8,x9
7101aa87c0  sub w10,w10,#0x1
7101aa87c4  cmp w10,w11
7101aa87c8  csel x1,x9,xzr,cc
7101aa87cc  b 0x7101aa87dc
7101aa87d0  mov x1,xzr
7101aa87d4  b 0x7101aa87e0
7101aa87d8  mov x1,xzr
7101aa87dc  ldr w8,[x8, #0x164]
7101aa87e0  ldr x0,[x20, #0x198]
7101aa87e4  sxtw x2,w8
7101aa87e8  mov w3,#0x1
7101aa87ec  bl 0x710377b8b0
7101aa87f0  adrp x1,0x71042c4000
7101aa87f4  add x1,x1,#0x8ae
7101aa87f8  add x8,sp,#0x10
7101aa87fc  mov x0,x19
7101aa8800  bl 0x7103776910
7101aa8804  add x0,sp,#0x10
7101aa8808  mov x1,x21
7101aa880c  bl 0x7103779480
7101aa8810  ldr x0,[sp, #0x18]
7101aa8814  adrp x23,0x710523d000
7101aa8818  add x23,x23,#0x9a8
7101aa881c  stp x23,xzr,[sp, #0x10]
7101aa8820  cbz x0,0x7101aa8828
7101aa8824  bl 0x710392eb40
7101aa8828  adrp x1,0x7104400000
7101aa882c  add x1,x1,#0xef5
7101aa8830  add x8,sp,#0x10
7101aa8834  mov x0,x19
7101aa8838  bl 0x7103776640
7101aa883c  adrp x1,0x71043cf000
7101aa8840  add x1,x1,#0xca4
7101aa8844  sub x8,x29,#0x80
7101aa8848  add x0,sp,#0x10
7101aa884c  bl 0x7103776910
7101aa8850  ldr x21,[sp, #0x18]
7101aa8854  adrp x26,0x710523d000
7101aa8858  add x26,x26,#0x988
7101aa885c  stp x26,xzr,[sp, #0x10]
7101aa8860  cbz x21,0x7101aa887c
7101aa8864  ldr x0,[x21, #0x18]
7101aa8868  stp x23,xzr,[x21, #0x10]
7101aa886c  cbz x0,0x7101aa8874
7101aa8870  bl 0x710392eb40
7101aa8874  mov x0,x21
7101aa8878  bl 0x710392eb40
7101aa887c  adrp x1,0x7104412000
7101aa8880  add x1,x1,#0x44d
7101aa8884  add x8,sp,#0x10
7101aa8888  mov x0,x19
7101aa888c  add x22,sp,#0x10
7101aa8890  bl 0x7103776640
7101aa8894  adrp x1,0x71043cf000
7101aa8898  add x1,x1,#0xca4
7101aa889c  sub x8,x29,#0x90
7101aa88a0  add x0,sp,#0x10
7101aa88a4  bl 0x7103776910
7101aa88a8  ldr x21,[sp, #0x18]
7101aa88ac  stp x26,xzr,[sp, #0x10]
7101aa88b0  cbz x21,0x7101aa88cc
7101aa88b4  ldr x0,[x21, #0x18]
7101aa88b8  stp x23,xzr,[x21, #0x10]
7101aa88bc  cbz x0,0x7101aa88c4
7101aa88c0  bl 0x710392eb40
7101aa88c4  mov x0,x21
7101aa88c8  bl 0x710392eb40
7101aa88cc  mov w21,#0x1
7101aa88d0  mov w8,#0x101
7101aa88d4  add x24,x22,#0x60
7101aa88d8  str x21,[x20, #0x1c0]
7101aa88dc  strh w8,[sp, #0x18]
7101aa88e0  mov x8,#0x41f0000000000000
7101aa88e4  add x0,sp,#0x10
7101aa88e8  str xzr,[sp, #0x10]
7101aa88ec  strh wzr,[sp, #0x1e]
7101aa88f0  stur wzr,[sp, #0x1a]
7101aa88f4  str w21,[sp, #0x20]
7101aa88f8  strh w21,[sp, #0x24]
7101aa88fc  strb w21,[sp, #0x26]
7101aa8900  str x8,[sp, #0x28]
7101aa8904  str wzr,[sp, #0x30]
7101aa8908  str xzr,[sp, #0x60]
7101aa890c  str xzr,[sp, #0x90]
7101aa8910  str xzr,[sp, #0xc0]
7101aa8914  str xzr,[sp, #0xf0]
7101aa8918  str xzr,[sp, #0x120]
7101aa891c  str wzr,[sp, #0x130]
7101aa8920  bl 0x710337df20
7101aa8924  ldr x0,[sp, #0x90]
7101aa8928  str xzr,[sp, #0x90]
7101aa892c  cmp x24,x0
7101aa8930  strb w21,[sp, #0x19]
7101aa8934  b.eq 0x7101aa8948
7101aa8938  cbz x0,0x7101aa8954
7101aa893c  ldr x8,[x0]
7101aa8940  ldr x8,[x8, #0x28]
7101aa8944  b 0x7101aa8950
7101aa8948  ldr x8,[x0]
7101aa894c  ldr x8,[x8, #0x20]
7101aa8950  blr x8
7101aa8954  ldr x0,[sp, #0xc0]
7101aa8958  add x8,sp,#0x10
7101aa895c  add x25,x8,#0x90
7101aa8960  cmp x25,x0
7101aa8964  str xzr,[sp, #0xc0]
7101aa8968  b.eq 0x7101aa897c
7101aa896c  cbz x0,0x7101aa8988
7101aa8970  ldr x8,[x0]
7101aa8974  ldr x8,[x8, #0x28]
7101aa8978  b 0x7101aa8984
7101aa897c  ldr x8,[x0]
7101aa8980  ldr x8,[x8, #0x20]
7101aa8984  blr x8
7101aa8988  add x21,x20,#0x1b0
7101aa898c  adrp x2,0x7104433000
7101aa8990  add x2,x2,#0x952
7101aa8994  add x3,sp,#0x10
7101aa8998  mov x0,x21
7101aa899c  mov x1,x19
7101aa89a0  bl 0x7103770b30
7101aa89a4  adrp x22,0x7104412000
7101aa89a8  add x22,x22,#0x44d
7101aa89ac  mov x0,x21
7101aa89b0  mov w1,wzr
7101aa89b4  mov x2,x22
7101aa89b8  bl 0x71037717d0
7101aa89bc  mov x8,sp
7101aa89c0  mov x0,x19
7101aa89c4  mov x1,x22
7101aa89c8  bl 0x7103776640
7101aa89cc  ldr x22,[sp, #0x8]
7101aa89d0  fmov s0,0x3f800000
7101aa89d4  adrp x1,0x710426f000
7101aa89d8  add x1,x1,#0xaf3
7101aa89dc  mov x0,x22
7101aa89e0  bl 0x7103778300
7101aa89e4  stp x26,xzr,[sp]
7101aa89e8  cbz x22,0x7101aa8a04
7101aa89ec  ldr x0,[x22, #0x18]
7101aa89f0  stp x23,xzr,[x22, #0x10]
7101aa89f4  cbz x0,0x7101aa89fc
7101aa89f8  bl 0x710392eb40
7101aa89fc  mov x0,x22
7101aa8a00  bl 0x710392eb40
7101aa8a04  adrp x22,0x7104400000
7101aa8a08  add x22,x22,#0xef5
7101aa8a0c  mov w1,#0x1
7101aa8a10  mov x0,x21
7101aa8a14  mov x2,x22
7101aa8a18  bl 0x71037717d0
7101aa8a1c  mov x8,sp
7101aa8a20  mov x0,x19
7101aa8a24  mov x1,x22
7101aa8a28  bl 0x7103776640
7101aa8a2c  ldr x22,[sp, #0x8]
7101aa8a30  fmov s0,0x3f800000
7101aa8a34  adrp x1,0x710426f000
7101aa8a38  add x1,x1,#0xaf3
7101aa8a3c  mov x0,x22
7101aa8a40  bl 0x7103778300
7101aa8a44  stp x26,xzr,[sp]
7101aa8a48  cbz x22,0x7101aa8a64
7101aa8a4c  ldr x0,[x22, #0x18]
7101aa8a50  stp x23,xzr,[x22, #0x10]
7101aa8a54  cbz x0,0x7101aa8a5c
7101aa8a58  bl 0x710392eb40
7101aa8a5c  mov x0,x22
7101aa8a60  bl 0x710392eb40
7101aa8a64  ldr x9,[x21]
7101aa8a68  ldr x8,[x9, #0x1b8]
7101aa8a6c  cbz x8,0x7101aa8b50
7101aa8a70  add x9,x9,#0x1b8
7101aa8a74  mov x10,x9
7101aa8a78  mov x11,x8
7101aa8a7c  ldr w12,[x11, #0x20]
7101aa8a80  cmp w12,#0x0
7101aa8a84  cset w12,lt
7101aa8a88  csel x10,x10,x11,lt
7101aa8a8c  ldr x11,[x11, w12, UXTW #0x3]
7101aa8a90  cbnz x11,0x7101aa8a7c
7101aa8a94  cmp x10,x9
7101aa8a98  b.eq 0x7101aa8ae8
7101aa8a9c  ldr w11,[x10, #0x20]
7101aa8aa0  cmp w11,#0x0
7101aa8aa4  b.gt 0x7101aa8ae8
7101aa8aa8  ldr x22,[x10, #0x28]
7101aa8aac  cbz x22,0x7101aa8ae8
7101aa8ab0  ldr x8,[x22]
7101aa8ab4  ldr x8,[x8, #0x1f8]
7101aa8ab8  mov w1,#0x1
7101aa8abc  mov x0,x22
7101aa8ac0  blr x8
7101aa8ac4  ldr x8,[x22]
7101aa8ac8  ldr x8,[x8, #0x388]
7101aa8acc  mov x0,x22
7101aa8ad0  mov w1,wzr
7101aa8ad4  mov w2,wzr
7101aa8ad8  blr x8
7101aa8adc  ldr x8,[x21]
7101aa8ae0  add x9,x8,#0x1b8
7101aa8ae4  ldr x8,[x8, #0x1b8]
7101aa8ae8  cbz x8,0x7101aa8b50
7101aa8aec  mov x10,x9
7101aa8af0  ldr w11,[x8, #0x20]
7101aa8af4  cmp w11,#0x1
7101aa8af8  cset w11,lt
7101aa8afc  csel x10,x10,x8,lt
7101aa8b00  ldr x8,[x8, w11, UXTW #0x3]
7101aa8b04  cbnz x8,0x7101aa8af0
7101aa8b08  cmp x10,x9
7101aa8b0c  b.eq 0x7101aa8b50
7101aa8b10  ldr w8,[x10, #0x20]
7101aa8b14  cmp w8,#0x1
7101aa8b18  b.gt 0x7101aa8b50
7101aa8b1c  ldr x22,[x10, #0x28]
7101aa8b20  cbz x22,0x7101aa8b50
7101aa8b24  ldr x8,[x22]
7101aa8b28  ldr x8,[x8, #0x1f8]
7101aa8b2c  mov w1,#0x1
7101aa8b30  mov x0,x22
7101aa8b34  blr x8
7101aa8b38  ldr x8,[x22]
7101aa8b3c  ldr x8,[x8, #0x388]
7101aa8b40  mov x0,x22
7101aa8b44  mov w1,wzr
7101aa8b48  mov w2,wzr
7101aa8b4c  blr x8
7101aa8b50  mov w1,#0x1
7101aa8b54  mov x0,x21
7101aa8b58  mov w2,wzr
7101aa8b5c  bl 0x7103771a80
7101aa8b60  ldr w8,[x20, #0x170]
7101aa8b64  ldr x0,[x20, #0x1a8]
7101aa8b68  adrp x1,0x7104454000
7101aa8b6c  add x1,x1,#0x556
7101aa8b70  cmp w8,#0x1
7101aa8b74  b.ne 0x7101aa8cac
7101aa8b78  fmov s0,0x3f800000
7101aa8b7c  bl 0x7103778630
7101aa8b80  ldr x0,[x20, #0x1a8]
7101aa8b84  fmov s0,wzr
7101aa8b88  adrp x1,0x7104441000
7101aa8b8c  add x1,x1,#0xfee
7101aa8b90  bl 0x7103778630
7101aa8b94  add x22,x20,#0x1b8
7101aa8b98  adrp x2,0x7104401000
7101aa8b9c  add x2,x2,#0xbc0
7101aa8ba0  add x3,sp,#0x10
7101aa8ba4  mov x0,x22
7101aa8ba8  mov x1,x19
7101aa8bac  bl 0x7103770b30
7101aa8bb0  adrp x2,0x71042d5000
7101aa8bb4  add x2,x2,#0xd37
7101aa8bb8  mov w1,#0x1
7101aa8bbc  mov x0,x22
7101aa8bc0  bl 0x71037717d0
7101aa8bc4  adrp x2,0x71042f7000
7101aa8bc8  add x2,x2,#0xcf0
7101aa8bcc  mov x0,x22
7101aa8bd0  mov w1,wzr
7101aa8bd4  bl 0x71037717d0
7101aa8bd8  ldr x0,[x20, #0x1b8]
7101aa8bdc  ldr x8,[x0]
7101aa8be0  ldr x8,[x8, #0x70]
7101aa8be4  mov w1,wzr
7101aa8be8  blr x8
7101aa8bec  ldr x8,[x20, #0x180]
7101aa8bf0  cbz x8,0x7101aa8d38
7101aa8bf4  ldr x9,[x8, #0xd0]
7101aa8bf8  cbnz x9,0x7101aa8c0c
7101aa8bfc  ldr x9,[x8, #0xd8]
7101aa8c00  cbnz x9,0x7101aa8c0c
7101aa8c04  ldr x8,[x8, #0xe0]
7101aa8c08  cbz x8,0x7101aa8d38
7101aa8c0c  ldr x8,[x22]
7101aa8c10  ldr x9,[x8, #0x1b8]
7101aa8c14  cbz x9,0x7101aa8c80
7101aa8c18  add x10,x8,#0x1b8
7101aa8c1c  mov x8,x10
7101aa8c20  ldr w11,[x9, #0x20]
7101aa8c24  cmp w11,#0x1
7101aa8c28  cset w11,lt
7101aa8c2c  csel x8,x8,x9,lt
7101aa8c30  ldr x9,[x9, w11, UXTW #0x3]
7101aa8c34  cbnz x9,0x7101aa8c20
7101aa8c38  cmp x8,x10
7101aa8c3c  b.eq 0x7101aa8c80
7101aa8c40  ldr w9,[x8, #0x20]
7101aa8c44  cmp w9,#0x1
7101aa8c48  b.gt 0x7101aa8c80
7101aa8c4c  ldr x22,[x8, #0x28]
7101aa8c50  cbz x22,0x7101aa8c80
7101aa8c54  ldr x8,[x22]
7101aa8c58  ldr x8,[x8, #0x1f8]
7101aa8c5c  mov w1,#0x1
7101aa8c60  mov x0,x22
7101aa8c64  blr x8
7101aa8c68  ldr x8,[x22]
7101aa8c6c  ldr x8,[x8, #0x388]
7101aa8c70  mov x0,x22
7101aa8c74  mov w1,wzr
7101aa8c78  mov w2,wzr
7101aa8c7c  blr x8
7101aa8c80  adrp x1,0x71042d5000
7101aa8c84  add x1,x1,#0xd37
7101aa8c88  mov x8,sp
7101aa8c8c  mov x0,x19
7101aa8c90  bl 0x7103776910
7101aa8c94  ldr x0,[sp, #0x8]
7101aa8c98  ldr x8,[x0]
7101aa8c9c  cbz x8,0x7101aa8dd8
7101aa8ca0  ldrb w9,[x8, #0x58]
7101aa8ca4  orr w9,w9,#0x1
7101aa8ca8  b 0x7101aa8dd4
7101aa8cac  fmov s0,wzr
7101aa8cb0  bl 0x7103778630
7101aa8cb4  ldr w8,[x20, #0x174]
7101aa8cb8  ldr x0,[x20, #0x1a8]
7101aa8cbc  adrp x1,0x7104441000
7101aa8cc0  add x1,x1,#0xfee
7101aa8cc4  cmp w8,#0x2
7101aa8cc8  b.ne 0x7101aa8cd4
7101aa8ccc  fmov s0,wzr
7101aa8cd0  b 0x7101aa8cd8
7101aa8cd4  fmov s0,0x3f800000
7101aa8cd8  bl 0x7103778630
7101aa8cdc  ldrb w8,[x20, #0x1cc]
7101aa8ce0  cbz w8,0x7101aa8f70
7101aa8ce4  ldr w8,[x20, #0x1d0]
7101aa8ce8  cbz w8,0x7101aa8f70
7101aa8cec  ldr x0,[x20, #0x1a8]
7101aa8cf0  fmov s0,0x3f800000
7101aa8cf4  adrp x1,0x71043ce000
7101aa8cf8  add x1,x1,#0xec2
7101aa8cfc  bl 0x7103778630
7101aa8d00  adrp x1,0x710435b000
7101aa8d04  add x1,x1,#0xe6
7101aa8d08  mov x8,sp
7101aa8d0c  mov x0,x19
7101aa8d10  bl 0x7103776910
7101aa8d14  ldr w2,[x20, #0x1d0]
7101aa8d18  mov x0,sp
7101aa8d1c  mov w1,#0x1
7101aa8d20  bl 0x710377a310
7101aa8d24  ldr x0,[sp, #0x8]
7101aa8d28  stp x23,xzr,[sp]
7101aa8d2c  cbz x0,0x7101aa8f84
7101aa8d30  bl 0x710392eb40
7101aa8d34  b 0x7101aa8f84
7101aa8d38  ldr x8,[x22]
7101aa8d3c  ldr x9,[x8, #0x1b8]
7101aa8d40  cbz x9,0x7101aa8dac
7101aa8d44  add x10,x8,#0x1b8
7101aa8d48  mov x8,x10
7101aa8d4c  ldr w11,[x9, #0x20]
7101aa8d50  cmp w11,#0x1
7101aa8d54  cset w11,lt
7101aa8d58  csel x8,x8,x9,lt
7101aa8d5c  ldr x9,[x9, w11, UXTW #0x3]
7101aa8d60  cbnz x9,0x7101aa8d4c
7101aa8d64  cmp x8,x10
7101aa8d68  b.eq 0x7101aa8dac
7101aa8d6c  ldr w9,[x8, #0x20]
7101aa8d70  cmp w9,#0x1
7101aa8d74  b.gt 0x7101aa8dac
7101aa8d78  ldr x22,[x8, #0x28]
7101aa8d7c  cbz x22,0x7101aa8dac
7101aa8d80  ldr x8,[x22]
7101aa8d84  ldr x8,[x8, #0x1f8]
7101aa8d88  mov x0,x22
7101aa8d8c  mov w1,wzr
7101aa8d90  blr x8
7101aa8d94  ldr x8,[x22]
7101aa8d98  ldr x8,[x8, #0x388]
7101aa8d9c  mov w1,#0x1
7101aa8da0  mov x0,x22
7101aa8da4  mov w2,wzr
7101aa8da8  blr x8
7101aa8dac  adrp x1,0x71042d5000
7101aa8db0  add x1,x1,#0xd37
7101aa8db4  mov x8,sp
7101aa8db8  mov x0,x19
7101aa8dbc  bl 0x7103776910
7101aa8dc0  ldr x0,[sp, #0x8]
7101aa8dc4  ldr x8,[x0]
7101aa8dc8  cbz x8,0x7101aa8dd8
7101aa8dcc  ldrb w9,[x8, #0x58]
7101aa8dd0  and w9,w9,#0xfe
7101aa8dd4  strb w9,[x8, #0x58]
7101aa8dd8  stp x23,xzr,[sp]
7101aa8ddc  cbz x0,0x7101aa8de4
7101aa8de0  bl 0x710392eb40
7101aa8de4  ldr x8,[x20, #0x180]
7101aa8de8  cbz x8,0x7101aa8ebc
7101aa8dec  ldr w8,[x8, #0x168]
7101aa8df0  cbz w8,0x7101aa8ebc
7101aa8df4  ldr x8,[x21]
7101aa8df8  ldr x9,[x8, #0x1b8]
7101aa8dfc  cbz x9,0x7101aa8e68
7101aa8e00  add x10,x8,#0x1b8
7101aa8e04  mov x8,x10
7101aa8e08  ldr w11,[x9, #0x20]
7101aa8e0c  cmp w11,#0x0
7101aa8e10  cset w11,lt
7101aa8e14  csel x8,x8,x9,lt
7101aa8e18  ldr x9,[x9, w11, UXTW #0x3]
7101aa8e1c  cbnz x9,0x7101aa8e08
7101aa8e20  cmp x8,x10
7101aa8e24  b.eq 0x7101aa8e68
7101aa8e28  ldr w9,[x8, #0x20]
7101aa8e2c  cmp w9,#0x0
7101aa8e30  b.gt 0x7101aa8e68
7101aa8e34  ldr x22,[x8, #0x28]
7101aa8e38  cbz x22,0x7101aa8e68
7101aa8e3c  ldr x8,[x22]
7101aa8e40  ldr x8,[x8, #0x1f8]
7101aa8e44  mov w1,#0x1
7101aa8e48  mov x0,x22
7101aa8e4c  blr x8
7101aa8e50  ldr x8,[x22]
7101aa8e54  ldr x8,[x8, #0x388]
7101aa8e58  mov x0,x22
7101aa8e5c  mov w1,wzr
7101aa8e60  mov w2,wzr
7101aa8e64  blr x8
7101aa8e68  adrp x1,0x7104412000
7101aa8e6c  add x1,x1,#0x44d
7101aa8e70  mov x8,sp
7101aa8e74  mov x0,x19
7101aa8e78  bl 0x7103776910
7101aa8e7c  ldr x0,[sp, #0x8]
7101aa8e80  ldr x8,[x0]
7101aa8e84  cbz x8,0x7101aa8e94
7101aa8e88  ldrb w9,[x8, #0x58]
7101aa8e8c  orr w9,w9,#0x1
7101aa8e90  strb w9,[x8, #0x58]
7101aa8e94  stp x23,xzr,[sp]
7101aa8e98  cbz x0,0x7101aa8ea0
7101aa8e9c  bl 0x710392eb40
7101aa8ea0  adrp x1,0x7104412000
7101aa8ea4  add x1,x1,#0x45a
7101aa8ea8  sub x0,x29,#0x90
7101aa8eac  bl 0x710377a120
7101aa8eb0  ldrb w8,[x20, #0x1cc]
7101aa8eb4  cbnz w8,0x7101aa8ce4
7101aa8eb8  b 0x7101aa8f70
7101aa8ebc  ldr x8,[x21]
7101aa8ec0  ldr x9,[x8, #0x1b8]
7101aa8ec4  cbz x9,0x7101aa8f30
7101aa8ec8  add x10,x8,#0x1b8
7101aa8ecc  mov x8,x10
7101aa8ed0  ldr w11,[x9, #0x20]
7101aa8ed4  cmp w11,#0x0
7101aa8ed8  cset w11,lt
7101aa8edc  csel x8,x8,x9,lt
7101aa8ee0  ldr x9,[x9, w11, UXTW #0x3]
7101aa8ee4  cbnz x9,0x7101aa8ed0
7101aa8ee8  cmp x8,x10
7101aa8eec  b.eq 0x7101aa8f30
7101aa8ef0  ldr w9,[x8, #0x20]
7101aa8ef4  cmp w9,#0x0
7101aa8ef8  b.gt 0x7101aa8f30
7101aa8efc  ldr x22,[x8, #0x28]
7101aa8f00  cbz x22,0x7101aa8f30
7101aa8f04  ldr x8,[x22]
7101aa8f08  ldr x8,[x8, #0x1f8]
7101aa8f0c  mov x0,x22
7101aa8f10  mov w1,wzr
7101aa8f14  blr x8
7101aa8f18  ldr x8,[x22]
7101aa8f1c  ldr x8,[x8, #0x388]
7101aa8f20  mov w1,#0x1
7101aa8f24  mov x0,x22
7101aa8f28  mov w2,wzr
7101aa8f2c  blr x8
7101aa8f30  adrp x1,0x7104412000
7101aa8f34  add x1,x1,#0x44d
7101aa8f38  mov x8,sp
7101aa8f3c  mov x0,x19
7101aa8f40  bl 0x7103776910
7101aa8f44  ldr x0,[sp, #0x8]
7101aa8f48  ldr x8,[x0]
7101aa8f4c  cbz x8,0x7101aa8f5c
7101aa8f50  ldrb w9,[x8, #0x58]
7101aa8f54  and w9,w9,#0xfe
7101aa8f58  strb w9,[x8, #0x58]
7101aa8f5c  stp x23,xzr,[sp]
7101aa8f60  cbz x0,0x7101aa8f68
7101aa8f64  bl 0x710392eb40
7101aa8f68  ldrb w8,[x20, #0x1cc]
7101aa8f6c  cbnz w8,0x7101aa8ce4
7101aa8f70  ldr x0,[x20, #0x1a8]
7101aa8f74  fmov s0,wzr
7101aa8f78  adrp x1,0x71043ce000
7101aa8f7c  add x1,x1,#0xec2
7101aa8f80  bl 0x7103778630
7101aa8f84  ldr w8,[x20, #0x174]
7101aa8f88  sub w8,w8,#0x1
7101aa8f8c  cmp w8,#0x5
7101aa8f90  b.hi 0x7101aa91b8
7101aa8f94  adrp x9,0x71044f7000
7101aa8f98  add x9,x9,#0xd90
7101aa8f9c  ldrsw x8,[x9, x8, LSL #0x2]
7101aa8fa0  add x8,x8,x9
7101aa8fa4  br x8
7101aa8fa8  adrp x1,0x71043f0000
7101aa8fac  add x1,x1,#0x4ca
7101aa8fb0  sub x0,x29,#0x80
7101aa8fb4  bl 0x710377a120
7101aa8fb8  b 0x7101aa91b8
7101aa8fbc  adrp x1,0x71042b3000
7101aa8fc0  add x1,x1,#0xe30
7101aa8fc4  sub x0,x29,#0x80
7101aa8fc8  bl 0x710377a120
7101aa8fcc  adrp x1,0x7104308000
7101aa8fd0  add x1,x1,#0x1e
7101aa8fd4  sub x0,x29,#0x90
7101aa8fd8  bl 0x710377a120
7101aa8fdc  ldr x8,[x21]
7101aa8fe0  ldr x9,[x8, #0x1b8]
7101aa8fe4  cbz x9,0x7101aa9050
7101aa8fe8  add x10,x8,#0x1b8
7101aa8fec  mov x8,x10
7101aa8ff0  ldr w11,[x9, #0x20]
7101aa8ff4  cmp w11,#0x0
7101aa8ff8  cset w11,lt
7101aa8ffc  csel x8,x8,x9,lt
7101aa9000  ldr x9,[x9, w11, UXTW #0x3]
7101aa9004  cbnz x9,0x7101aa8ff0
7101aa9008  cmp x8,x10
7101aa900c  b.eq 0x7101aa9050
7101aa9010  ldr w9,[x8, #0x20]
7101aa9014  cmp w9,#0x0
7101aa9018  b.gt 0x7101aa9050
7101aa901c  ldr x20,[x8, #0x28]
7101aa9020  cbz x20,0x7101aa9050
7101aa9024  ldr x8,[x20]
7101aa9028  ldr x8,[x8, #0x1f8]
7101aa902c  mov w1,#0x1
7101aa9030  mov x0,x20
7101aa9034  blr x8
7101aa9038  ldr x8,[x20]
7101aa903c  ldr x8,[x8, #0x388]
7101aa9040  mov x0,x20
7101aa9044  mov w1,wzr
7101aa9048  mov w2,wzr
7101aa904c  blr x8
7101aa9050  adrp x1,0x7104412000
7101aa9054  add x1,x1,#0x44d
7101aa9058  mov x8,sp
7101aa905c  mov x0,x19
7101aa9060  bl 0x7103776910
7101aa9064  ldr x0,[sp, #0x8]
7101aa9068  ldr x8,[x0]
7101aa906c  cbz x8,0x7101aa91ac
7101aa9070  ldrb w9,[x8, #0x58]
7101aa9074  orr w9,w9,#0x1
7101aa9078  b 0x7101aa91a8
7101aa907c  adrp x1,0x71043f0000
7101aa9080  add x1,x1,#0x4e2
7101aa9084  sub x0,x29,#0x80
7101aa9088  bl 0x710377a120
7101aa908c  ldr x8,[x21]
7101aa9090  ldr x9,[x8, #0x1b8]
7101aa9094  cbz x9,0x7101aa9180
7101aa9098  add x10,x8,#0x1b8
7101aa909c  mov x8,x10
7101aa90a0  ldr w11,[x9, #0x20]
7101aa90a4  cmp w11,#0x0
7101aa90a8  cset w11,lt
7101aa90ac  csel x8,x8,x9,lt
7101aa90b0  ldr x9,[x9, w11, UXTW #0x3]
7101aa90b4  cbnz x9,0x7101aa90a0
7101aa90b8  b 0x7101aa9138
7101aa90bc  adrp x1,0x71042f7000
7101aa90c0  add x1,x1,#0xcf7
7101aa90c4  sub x0,x29,#0x80
7101aa90c8  bl 0x710377a120
7101aa90cc  ldr x8,[x21]
7101aa90d0  ldr x9,[x8, #0x1b8]
7101aa90d4  cbz x9,0x7101aa9180
7101aa90d8  add x10,x8,#0x1b8
7101aa90dc  mov x8,x10
7101aa90e0  ldr w11,[x9, #0x20]
7101aa90e4  cmp w11,#0x0
7101aa90e8  cset w11,lt
7101aa90ec  csel x8,x8,x9,lt
7101aa90f0  ldr x9,[x9, w11, UXTW #0x3]
7101aa90f4  cbnz x9,0x7101aa90e0
7101aa90f8  b 0x7101aa9138
7101aa90fc  adrp x1,0x71043f0000
7101aa9100  add x1,x1,#0x4ca
7101aa9104  sub x0,x29,#0x80
7101aa9108  bl 0x710377a120
7101aa910c  ldr x8,[x21]
7101aa9110  ldr x9,[x8, #0x1b8]
7101aa9114  cbz x9,0x7101aa9180
7101aa9118  add x10,x8,#0x1b8
7101aa911c  mov x8,x10
7101aa9120  ldr w11,[x9, #0x20]
7101aa9124  cmp w11,#0x0
7101aa9128  cset w11,lt
7101aa912c  csel x8,x8,x9,lt
7101aa9130  ldr x9,[x9, w11, UXTW #0x3]
7101aa9134  cbnz x9,0x7101aa9120
7101aa9138  cmp x8,x10
7101aa913c  b.eq 0x7101aa9180
7101aa9140  ldr w9,[x8, #0x20]
7101aa9144  cmp w9,#0x0
7101aa9148  b.gt 0x7101aa9180
7101aa914c  ldr x20,[x8, #0x28]
7101aa9150  cbz x20,0x7101aa9180
7101aa9154  ldr x8,[x20]
7101aa9158  ldr x8,[x8, #0x1f8]
7101aa915c  mov x0,x20
7101aa9160  mov w1,wzr
7101aa9164  blr x8
7101aa9168  ldr x8,[x20]
7101aa916c  ldr x8,[x8, #0x388]
7101aa9170  mov w1,#0x1
7101aa9174  mov x0,x20
7101aa9178  mov w2,wzr
7101aa917c  blr x8
7101aa9180  adrp x1,0x7104412000
7101aa9184  add x1,x1,#0x44d
7101aa9188  mov x8,sp
7101aa918c  mov x0,x19
7101aa9190  bl 0x7103776910
7101aa9194  ldr x0,[sp, #0x8]
7101aa9198  ldr x8,[x0]
7101aa919c  cbz x8,0x7101aa91ac
7101aa91a0  ldrb w9,[x8, #0x58]
7101aa91a4  and w9,w9,#0xfe
7101aa91a8  strb w9,[x8, #0x58]
7101aa91ac  stp x23,xzr,[sp]
7101aa91b0  cbz x0,0x7101aa91b8
7101aa91b4  bl 0x710392eb40
7101aa91b8  ldr x0,[sp, #0x120]
7101aa91bc  add x8,sp,#0x10
7101aa91c0  add x8,x8,#0xf0
7101aa91c4  cmp x8,x0
7101aa91c8  b.eq 0x7101aa91dc
7101aa91cc  cbz x0,0x7101aa91e8
7101aa91d0  ldr x8,[x0]
7101aa91d4  ldr x8,[x8, #0x28]
7101aa91d8  b 0x7101aa91e4
7101aa91dc  ldr x8,[x0]
7101aa91e0  ldr x8,[x8, #0x20]
7101aa91e4  blr x8
7101aa91e8  ldr x0,[sp, #0xf0]
7101aa91ec  add x8,sp,#0x10
7101aa91f0  add x8,x8,#0xc0
7101aa91f4  cmp x8,x0
7101aa91f8  b.eq 0x7101aa920c
7101aa91fc  cbz x0,0x7101aa9218
7101aa9200  ldr x8,[x0]
7101aa9204  ldr x8,[x8, #0x28]
7101aa9208  b 0x7101aa9214
7101aa920c  ldr x8,[x0]
7101aa9210  ldr x8,[x8, #0x20]
7101aa9214  blr x8
7101aa9218  ldr x0,[sp, #0xc0]
7101aa921c  cmp x25,x0
7101aa9220  b.eq 0x7101aa9234
7101aa9224  cbz x0,0x7101aa9240
7101aa9228  ldr x8,[x0]
7101aa922c  ldr x8,[x8, #0x28]
7101aa9230  b 0x7101aa923c
7101aa9234  ldr x8,[x0]
7101aa9238  ldr x8,[x8, #0x20]
7101aa923c  blr x8
7101aa9240  ldr x0,[sp, #0x90]
7101aa9244  cmp x24,x0
7101aa9248  b.eq 0x7101aa925c
7101aa924c  cbz x0,0x7101aa9268
7101aa9250  ldr x8,[x0]
7101aa9254  ldr x8,[x8, #0x28]
7101aa9258  b 0x7101aa9264
7101aa925c  ldr x8,[x0]
7101aa9260  ldr x8,[x8, #0x20]
7101aa9264  blr x8
7101aa9268  ldr x0,[sp, #0x60]
7101aa926c  add x8,sp,#0x10
7101aa9270  add x8,x8,#0x30
7101aa9274  cmp x8,x0
7101aa9278  b.eq 0x7101aa928c
7101aa927c  cbz x0,0x7101aa9298
7101aa9280  ldr x8,[x0]
7101aa9284  ldr x8,[x8, #0x28]
7101aa9288  b 0x7101aa9294
7101aa928c  ldr x8,[x0]
7101aa9290  ldr x8,[x8, #0x20]
7101aa9294  blr x8
7101aa9298  ldur x0,[x29, #-0x88]
7101aa929c  stp x23,xzr,[x29, #-0x90]
7101aa92a0  cbz x0,0x7101aa92a8
7101aa92a4  bl 0x710392eb40
7101aa92a8  ldur x0,[x29, #-0x78]
7101aa92ac  stp x23,xzr,[x29, #-0x80]
7101aa92b0  cbz x0,0x7101aa92b8
7101aa92b4  bl 0x710392eb40
7101aa92b8  ldur x0,[x29, #-0x68]
7101aa92bc  stp x23,xzr,[x29, #-0x70]
7101aa92c0  cbz x0,0x7101aa92c8
7101aa92c4  bl 0x710392eb40
7101aa92c8  ldur x0,[x29, #-0x58]
7101aa92cc  stp x23,xzr,[x29, #-0x60]
7101aa92d0  cbz x0,0x7101aa92d8
7101aa92d4  bl 0x710392eb40
7101aa92d8  ldp x29,x30,[sp, #0x1d0]
7101aa92dc  ldr x28,[sp, #0x180]
7101aa92e0  ldp x20,x19,[sp, #0x1c0]
7101aa92e4  ldp x22,x21,[sp, #0x1b0]
7101aa92e8  ldp x24,x23,[sp, #0x1a0]
7101aa92ec  ldp x26,x25,[sp, #0x190]
7101aa92f0  add sp,sp,#0x1e0
7101aa92f4  ret
