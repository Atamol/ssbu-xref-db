// addr:      7101db8810
// offset:    0x1db8810
// name:      FUN_7101db8810
// mangled:   
// size:      13408

7101db8810  stp d9,d8,[sp, #-0x70]!
7101db8814  stp x28,x27,[sp, #0x10]
7101db8818  stp x26,x25,[sp, #0x20]
7101db881c  stp x24,x23,[sp, #0x30]
7101db8820  stp x22,x21,[sp, #0x40]
7101db8824  stp x20,x19,[sp, #0x50]
7101db8828  stp x29,x30,[sp, #0x60]
7101db882c  add x29,sp,#0x60
7101db8830  sub sp,sp,#0x260
7101db8834  ldr w8,[x0, #0xc4]
7101db8838  cbnz w8,0x7101dbbb4c
7101db883c  adrp x8,0x710532f000
7101db8840  ldr x21,[x8, #0x8b8]
7101db8844  ldr x8,[x0]
7101db8848  ldr x20,[x8]
7101db884c  adrp x8,0x710532f000
7101db8850  add x8,x8,#0x4d8
7101db8854  ldarb w8,[x8]
7101db8858  mov x19,x0
7101db885c  tbz w8,#0x0,0x7101dbbbc4
7101db8860  ldr x10,[x20, #0x28]!
7101db8864  cbz x10,0x7101db88ac
7101db8868  mov x9,#0x29f5
7101db886c  movk x9,#0x45a8, LSL #16
7101db8870  movk x9,#0x11, LSL #32
7101db8874  mov x8,x20
7101db8878  ldr x11,[x10, #0x20]
7101db887c  and x11,x11,#0xffffffffff
7101db8880  cmp x11,x9
7101db8884  cset w11,cc
7101db8888  csel x8,x8,x10,cc
7101db888c  ldr x10,[x10, w11, UXTW #0x3]
7101db8890  cbnz x10,0x7101db8878
7101db8894  cmp x8,x20
7101db8898  b.eq 0x7101db88ac
7101db889c  ldr x10,[x8, #0x20]
7101db88a0  and x10,x10,#0xfffffffffe
7101db88a4  cmp x10,x9
7101db88a8  b.ls 0x7101db8a5c
7101db88ac  adrp x20,0x710532f000
7101db88b0  add x20,x20,#0x4a4
7101db88b4  ldr w8,[x20]
7101db88b8  orr w9,wzr,#0xffffff
7101db88bc  cmp w8,w9
7101db88c0  b.eq 0x7101db88f4
7101db88c4  ldr x0,[x21, #0x8]
7101db88c8  adrp x1,0x7104545000
7101db88cc  add x1,x1,#0x8f8
7101db88d0  mov w2,#0x4
7101db88d4  bl 0x710330a8f0
7101db88d8  cbz w0,0x7101db88f4
7101db88dc  adrp x8,0x7105334000
7101db88e0  ldr x8,[x8, #0x920]
7101db88e4  mov w1,w0
7101db88e8  ldr x0,[x8]
7101db88ec  mov x2,x20
7101db88f0  bl 0x7103563a20
7101db88f4  mov w8,#0x1
7101db88f8  strb w8,[x19, #0x101]
7101db88fc  ldr x8,[x19]
7101db8900  ldr x1,[x8]
7101db8904  add x0,x19,#0xd0
7101db8908  adrp x2,0x7104545000
7101db890c  add x2,x2,#0x900
7101db8910  mov w3,#0x1
7101db8914  bl 0x71032cbf30
7101db8918  ldr x8,[x19, #0xd0]
7101db891c  ldr x8,[x8]
7101db8920  add x9,x8,#0x8
7101db8924  add x12,x19,#0xd8
7101db8928  cmp x12,x9
7101db892c  b.eq 0x7101db89a0
7101db8930  ldr x9,[x8, #0x10]
7101db8934  ldr x9,[x9]
7101db8938  ldr x10,[x19, #0xe0]
7101db893c  str x9,[x10]
7101db8940  ldr x9,[x8, #0x10]
7101db8944  ldr x9,[x9, #0x8]
7101db8948  ldr x10,[x19, #0xe0]
7101db894c  str x9,[x10, #0x8]
7101db8950  ldr x9,[x8, #0x10]
7101db8954  ldr x8,[x19, #0xe0]
7101db8958  cmp x8,x9
7101db895c  b.eq 0x7101db89a0
7101db8960  ldr x10,[x9, #0x18]
7101db8964  ldr x10,[x10]
7101db8968  ldr x11,[x8, #0x18]
7101db896c  str x10,[x11]
7101db8970  ldr x10,[x9, #0x18]
7101db8974  ldr x10,[x10, #0x8]
7101db8978  ldr x11,[x8, #0x18]
7101db897c  str x10,[x11, #0x8]
7101db8980  ldr x10,[x9, #0x18]
7101db8984  ldr x10,[x10, #0x10]
7101db8988  ldr x11,[x8, #0x18]
7101db898c  str x10,[x11, #0x10]
7101db8990  ldr x9,[x9, #0x18]
7101db8994  ldr x9,[x9, #0x18]
7101db8998  ldr x8,[x8, #0x18]
7101db899c  str x9,[x8, #0x18]
7101db89a0  ldrb w8,[x19, #0x218]
7101db89a4  str x12,[sp, #0x30]
7101db89a8  cbz w8,0x7101db8a30
7101db89ac  ldrb w8,[x19, #0x24c]
7101db89b0  cbz w8,0x7101db89c4
7101db89b4  ldr x0,[x19, #0xe0]
7101db89b8  adrp x1,0x71043e0000
7101db89bc  add x1,x1,#0x5ce
7101db89c0  b 0x7101db8a6c
7101db89c4  ldrb w8,[x19, #0x168]
7101db89c8  cbz w8,0x7101db8a40
7101db89cc  ldp x8,x9,[x19, #0x1d0]
7101db89d0  cmp x9,x8
7101db89d4  b.eq 0x7101db8a40
7101db89d8  adrp x8,0x710532f000
7101db89dc  ldr x8,[x8, #0x730]
7101db89e0  ldr x9,[x8, #0x8]
7101db89e4  ldrsh x8,[x19, #0x1e8]
7101db89e8  ldr x9,[x9, #0x1d8]
7101db89ec  cmn x8,#0x1
7101db89f0  b.eq 0x7101db89fc
7101db89f4  add x8,x9,x8, LSL #0x1
7101db89f8  ldrh w8,[x8, #0x60]
7101db89fc  ldp x10,x9,[x9, #0x20]
7101db8a00  sub x9,x9,x10
7101db8a04  lsr x9,x9,#0x6
7101db8a08  mov w11,#0xcccd
7101db8a0c  movk w11,#0xcccc, LSL #16
7101db8a10  mul w9,w9,w11
7101db8a14  cmp w8,w9
7101db8a18  b.cs 0x7101db8a40
7101db8a1c  mov w9,#0x140
7101db8a20  umaddl x8,w8,w9,x10
7101db8a24  ldrb w8,[x8, #0x5e]
7101db8a28  cmp w8,#0x3
7101db8a2c  b.ne 0x7101db8a40
7101db8a30  ldr x0,[x19, #0xe0]
7101db8a34  adrp x1,0x71043ad000
7101db8a38  add x1,x1,#0xc47
7101db8a3c  b 0x7101db8a6c
7101db8a40  ldrb w8,[x19, #0x219]
7101db8a44  ldr x0,[x19, #0xe0]
7101db8a48  cmp w8,#0x1
7101db8a4c  b.ne 0x7101db8a64
7101db8a50  adrp x1,0x71042e7000
7101db8a54  add x1,x1,#0x694
7101db8a58  b 0x7101db8a6c
7101db8a5c  add x20,x8,#0x28
7101db8a60  b 0x7101db88b4
7101db8a64  adrp x1,0x71043be000
7101db8a68  add x1,x1,#0xa73
7101db8a6c  fmov s0,0x3f800000
7101db8a70  bl 0x7103778300
7101db8a74  adrp x8,0x710532f000
7101db8a78  ldr x8,[x8, #0x730]
7101db8a7c  ldr x26,[x8, #0x8]
7101db8a80  ldrsh w9,[x19, #0x15a]
7101db8a84  sxtw x8,w9
7101db8a88  cmn w9,#0x1
7101db8a8c  ldr x21,[x26, #0x1d8]
7101db8a90  mov w22,wzr
7101db8a94  mov w27,#0x4
7101db8a98  b.eq 0x7101db8b1c
7101db8a9c  cmp w9,#0x7cf
7101db8aa0  b.gt 0x7101db8b1c
7101db8aa4  ldp x10,x11,[x21, #0x20]
7101db8aa8  sub x11,x11,x10
7101db8aac  orr x12,xzr,#-0x3333333333333334
7101db8ab0  add x9,x21,x8, LSL #0x1
7101db8ab4  ldrh w9,[x9, #0x60]
7101db8ab8  asr x11,x11,#0x6
7101db8abc  movk x12,#0xcccd
7101db8ac0  mul x11,x11,x12
7101db8ac4  cmp w11,w9
7101db8ac8  b.ls 0x7101db8b0c
7101db8acc  mov w12,#0x140
7101db8ad0  madd x10,x9,x12,x10
7101db8ad4  adrp x13,0x7105182000
7101db8ad8  add x13,x13,#0xb08
7101db8adc  cmp x11,x9
7101db8ae0  csel x9,x10,x13,hi
7101db8ae4  ldrb w27,[x9, #0x6c]
7101db8ae8  sub w9,w27,#0x1
7101db8aec  cmp w9,#0x2
7101db8af0  b.hi 0x7101db8b18
7101db8af4  and x9,x9,#0xff
7101db8af8  lsl x9,x9,#0x3
7101db8afc  mov w10,#0x301
7101db8b00  movk w10,#0x2, LSL #16
7101db8b04  lsr w22,w10,w9
7101db8b08  b 0x7101db8b1c
7101db8b0c  mov w22,wzr
7101db8b10  mov w27,#0x4
7101db8b14  b 0x7101db8b1c
7101db8b18  mov w22,wzr
7101db8b1c  and x1,x8,#0xffff
7101db8b20  mov x0,x21
7101db8b24  strb wzr,[sp, #0x1c0]
7101db8b28  str xzr,[sp, #0x1b8]
7101db8b2c  strb wzr,[sp, #0x178]
7101db8b30  str xzr,[sp, #0x170]
7101db8b34  bl 0x71032a9470
7101db8b38  mov x2,x0
7101db8b3c  sub x0,x29,#0xc0
7101db8b40  mov x1,x21
7101db8b44  sub x20,x29,#0xc0
7101db8b48  bl 0x71032a9540
7101db8b4c  add x1,x20,#0x8
7101db8b50  adrp x0,0x7104464000
7101db8b54  add x0,x0,#0x1d4
7101db8b58  add x8,sp,#0x128
7101db8b5c  add x20,sp,#0x128
7101db8b60  bl 0x71003a4ca0
7101db8b64  mov x8,xzr
7101db8b68  add x9,x20,#0x8
7101db8b6c  add x10,sp,#0x1b8
7101db8b70  b 0x7101db8b7c
7101db8b74  add x8,x8,#0x2
7101db8b78  strb w11,[x12, #0x9]
7101db8b7c  add x11,x9,x8
7101db8b80  ldrb w13,[x11]
7101db8b84  cbz w13,0x7101db8bb0
7101db8b88  add w14,w8,#0x1
7101db8b8c  add x12,x10,x8
7101db8b90  cmp w14,#0x3f
7101db8b94  strb w13,[x12, #0x8]
7101db8b98  b.cs 0x7101db8bac
7101db8b9c  ldrb w11,[x11, #0x1]
7101db8ba0  cbnz w11,0x7101db8b74
7101db8ba4  add x8,x8,#0x1
7101db8ba8  b 0x7101db8bb0
7101db8bac  add w8,w8,#0x1
7101db8bb0  add x9,sp,#0x1b8
7101db8bb4  add x21,x9,#0x8
7101db8bb8  mov w25,#0x9dc5
7101db8bbc  movk w25,#0x811c, LSL #16
7101db8bc0  mov w10,w25
7101db8bc4  strb wzr,[x21, w8, UXTW ]
7101db8bc8  str w8,[sp, #0x1bc]
7101db8bcc  ldrb w8,[sp, #0x1c0]
7101db8bd0  cbz w8,0x7101db8bf4
7101db8bd4  add x9,x9,#0x9
7101db8bd8  mov w11,#0x89
7101db8bdc  mov w10,w25
7101db8be0  mul w10,w10,w11
7101db8be4  and w8,w8,#0xff
7101db8be8  eor w10,w10,w8
7101db8bec  ldrb w8,[x9], #0x1
7101db8bf0  cbnz w8,0x7101db8be0
7101db8bf4  adrp x8,0x710532f000
7101db8bf8  ldr x8,[x8, #0x730]
7101db8bfc  str w10,[sp, #0x1b8]
7101db8c00  ldr x20,[x8, #0x8]
7101db8c04  ldrb w8,[x19, #0x11a]
7101db8c08  cbz w8,0x7101db8c9c
7101db8c0c  ldr x23,[x19, #0x108]
7101db8c10  ldr x0,[x20, #0x168]
7101db8c14  mov x1,x23
7101db8c18  mov w2,wzr
7101db8c1c  bl 0x7103263540
7101db8c20  ldr x1,[x20, #0x168]
7101db8c24  mov w24,w0
7101db8c28  sub x0,x29,#0xc0
7101db8c2c  mov x2,x23
7101db8c30  sub x20,x29,#0xc0
7101db8c34  bl 0x7103262310
7101db8c38  add x2,x20,#0x8
7101db8c3c  adrp x0,0x710439b000
7101db8c40  add x0,x0,#0x815
7101db8c44  add x8,sp,#0x128
7101db8c48  mov w1,w24
7101db8c4c  add x20,sp,#0x128
7101db8c50  bl 0x71003a4ca0
7101db8c54  mov x8,xzr
7101db8c58  add x9,x20,#0x8
7101db8c5c  add x10,sp,#0x170
7101db8c60  b 0x7101db8c6c
7101db8c64  add x8,x8,#0x2
7101db8c68  strb w11,[x12, #0x9]
7101db8c6c  add x11,x9,x8
7101db8c70  ldrb w13,[x11]
7101db8c74  cbz w13,0x7101db8d30
7101db8c78  add w14,w8,#0x1
7101db8c7c  add x12,x10,x8
7101db8c80  cmp w14,#0x3f
7101db8c84  strb w13,[x12, #0x8]
7101db8c88  b.cs 0x7101db8d2c
7101db8c8c  ldrb w11,[x11, #0x1]
7101db8c90  cbnz w11,0x7101db8c64
7101db8c94  add x8,x8,#0x1
7101db8c98  b 0x7101db8d30
7101db8c9c  ldr x23,[x19, #0x108]
7101db8ca0  ldrb w2,[x19, #0x118]
7101db8ca4  mov x1,x23
7101db8ca8  ldr x0,[x20, #0x168]
7101db8cac  bl 0x7103263540
7101db8cb0  ldr x1,[x20, #0x168]
7101db8cb4  mov w24,w0
7101db8cb8  sub x0,x29,#0xc0
7101db8cbc  mov x2,x23
7101db8cc0  sub x20,x29,#0xc0
7101db8cc4  bl 0x7103262310
7101db8cc8  add x2,x20,#0x8
7101db8ccc  adrp x0,0x710439b000
7101db8cd0  add x0,x0,#0x815
7101db8cd4  add x8,sp,#0x128
7101db8cd8  mov w1,w24
7101db8cdc  add x20,sp,#0x128
7101db8ce0  bl 0x71003a4ca0
7101db8ce4  mov x8,xzr
7101db8ce8  add x9,x20,#0x8
7101db8cec  add x10,sp,#0x170
7101db8cf0  b 0x7101db8cfc
7101db8cf4  add x8,x8,#0x2
7101db8cf8  strb w11,[x12, #0x9]
7101db8cfc  add x11,x9,x8
7101db8d00  ldrb w13,[x11]
7101db8d04  cbz w13,0x7101db8d74
7101db8d08  add w14,w8,#0x1
7101db8d0c  add x12,x10,x8
7101db8d10  cmp w14,#0x3f
7101db8d14  strb w13,[x12, #0x8]
7101db8d18  b.cs 0x7101db8d70
7101db8d1c  ldrb w11,[x11, #0x1]
7101db8d20  cbnz w11,0x7101db8cf4
7101db8d24  add x8,x8,#0x1
7101db8d28  b 0x7101db8d74
7101db8d2c  add w8,w8,#0x1
7101db8d30  add x9,sp,#0x170
7101db8d34  add x10,x9,#0x8
7101db8d38  strb wzr,[x10, w8, UXTW ]
7101db8d3c  str w8,[sp, #0x174]
7101db8d40  ldrb w8,[sp, #0x178]
7101db8d44  mov w10,w25
7101db8d48  cbz w8,0x7101db8db0
7101db8d4c  add x9,x9,#0x9
7101db8d50  mov w11,#0x89
7101db8d54  mov w10,w25
7101db8d58  mul w10,w10,w11
7101db8d5c  and w8,w8,#0xff
7101db8d60  eor w10,w10,w8
7101db8d64  ldrb w8,[x9], #0x1
7101db8d68  cbnz w8,0x7101db8d58
7101db8d6c  b 0x7101db8db0
7101db8d70  add w8,w8,#0x1
7101db8d74  add x9,sp,#0x170
7101db8d78  add x10,x9,#0x8
7101db8d7c  strb wzr,[x10, w8, UXTW ]
7101db8d80  str w8,[sp, #0x174]
7101db8d84  ldrb w8,[sp, #0x178]
7101db8d88  mov w10,w25
7101db8d8c  cbz w8,0x7101db8db0
7101db8d90  add x9,x9,#0x9
7101db8d94  mov w11,#0x89
7101db8d98  mov w10,w25
7101db8d9c  mul w10,w10,w11
7101db8da0  and w8,w8,#0xff
7101db8da4  eor w10,w10,w8
7101db8da8  ldrb w8,[x9], #0x1
7101db8dac  cbnz w8,0x7101db8d9c
7101db8db0  sub x0,x29,#0xc0
7101db8db4  mov w1,w22
7101db8db8  mov w2,wzr
7101db8dbc  str w10,[sp, #0x170]
7101db8dc0  sub x20,x29,#0xc0
7101db8dc4  bl 0x710339dde0
7101db8dc8  adrp x1,0x71043be000
7101db8dcc  add x1,x1,#0xa93
7101db8dd0  add x8,sp,#0x128
7101db8dd4  cmp w27,#0x4
7101db8dd8  b.ne 0x7101db8e5c
7101db8ddc  ldr x27,[sp, #0x30]
7101db8de0  mov x0,x27
7101db8de4  bl 0x7103776640
7101db8de8  ldr x22,[sp, #0x130]
7101db8dec  fmov s0,0x3f800000
7101db8df0  adrp x1,0x71043f0000
7101db8df4  add x1,x1,#0xda0
7101db8df8  mov x0,x22
7101db8dfc  bl 0x7103778300
7101db8e00  adrp x8,0x710523d000
7101db8e04  add x8,x8,#0x988
7101db8e08  stp x8,xzr,[sp, #0x128]
7101db8e0c  cbz x22,0x7101db8e30
7101db8e10  ldr x0,[x22, #0x18]
7101db8e14  adrp x8,0x710523d000
7101db8e18  add x8,x8,#0x9a8
7101db8e1c  stp x8,xzr,[x22, #0x10]
7101db8e20  cbz x0,0x7101db8e28
7101db8e24  bl 0x710392eb40
7101db8e28  mov x0,x22
7101db8e2c  bl 0x710392eb40
7101db8e30  adrp x1,0x7104454000
7101db8e34  add x1,x1,#0xf18
7101db8e38  add x8,sp,#0x128
7101db8e3c  mov x0,x27
7101db8e40  bl 0x7103776640
7101db8e44  ldr x22,[sp, #0x130]
7101db8e48  adrp x1,0x71043f0000
7101db8e4c  add x1,x1,#0xda0
7101db8e50  fmov s0,0x3f800000
7101db8e54  mov x0,x22
7101db8e58  b 0x7101db8ed4
7101db8e5c  ldr x27,[sp, #0x30]
7101db8e60  mov x0,x27
7101db8e64  bl 0x7103776640
7101db8e68  ldr x22,[sp, #0x130]
7101db8e6c  fmov s0,0x3f800000
7101db8e70  add x23,x20,#0x8
7101db8e74  mov x1,x23
7101db8e78  mov x0,x22
7101db8e7c  bl 0x7103778300
7101db8e80  adrp x8,0x710523d000
7101db8e84  add x8,x8,#0x988
7101db8e88  stp x8,xzr,[sp, #0x128]
7101db8e8c  cbz x22,0x7101db8eb0
7101db8e90  ldr x0,[x22, #0x18]
7101db8e94  adrp x8,0x710523d000
7101db8e98  add x8,x8,#0x9a8
7101db8e9c  stp x8,xzr,[x22, #0x10]
7101db8ea0  cbz x0,0x7101db8ea8
7101db8ea4  bl 0x710392eb40
7101db8ea8  mov x0,x22
7101db8eac  bl 0x710392eb40
7101db8eb0  adrp x1,0x7104454000
7101db8eb4  add x1,x1,#0xf18
7101db8eb8  add x8,sp,#0x128
7101db8ebc  mov x0,x27
7101db8ec0  bl 0x7103776640
7101db8ec4  ldr x22,[sp, #0x130]
7101db8ec8  fmov s0,0x3f800000
7101db8ecc  mov x0,x22
7101db8ed0  mov x1,x23
7101db8ed4  bl 0x7103778300
7101db8ed8  adrp x1,0x710432a000
7101db8edc  add x1,x1,#0x54c
7101db8ee0  add x8,sp,#0xe0
7101db8ee4  mov x0,x27
7101db8ee8  bl 0x7103776910
7101db8eec  add x8,sp,#0x170
7101db8ef0  add x1,x8,#0x8
7101db8ef4  add x0,sp,#0xe0
7101db8ef8  bl 0x710377a120
7101db8efc  ldr x0,[sp, #0xe8]
7101db8f00  adrp x28,0x710523d000
7101db8f04  add x28,x28,#0x9a8
7101db8f08  stp x28,xzr,[sp, #0xe0]
7101db8f0c  cbz x0,0x7101db8f14
7101db8f10  bl 0x710392eb40
7101db8f14  adrp x1,0x71042d6000
7101db8f18  add x1,x1,#0x745
7101db8f1c  add x8,sp,#0xe0
7101db8f20  mov x0,x27
7101db8f24  bl 0x7103776640
7101db8f28  adrp x1,0x7104338000
7101db8f2c  add x1,x1,#0xd31
7101db8f30  add x8,sp,#0x98
7101db8f34  add x0,sp,#0xe0
7101db8f38  bl 0x7103776910
7101db8f3c  ldrsh w8,[x19, #0x15a]
7101db8f40  cmn w8,#0x1
7101db8f44  b.eq 0x7101db8fa8
7101db8f48  cmp w8,#0x7cf
7101db8f4c  b.gt 0x7101db8fa8
7101db8f50  ldr x9,[x26, #0x1d8]
7101db8f54  sxtw x8,w8
7101db8f58  add x8,x9,x8, LSL #0x1
7101db8f5c  ldp x10,x9,[x9, #0x20]
7101db8f60  ldrh w8,[x8, #0x60]
7101db8f64  sub x9,x9,x10
7101db8f68  mov w10,#0xcccd
7101db8f6c  movk w10,#0xcccc, LSL #16
7101db8f70  lsr x9,x9,#0x6
7101db8f74  mul w9,w9,w10
7101db8f78  cmp w9,w8
7101db8f7c  b.ls 0x7101db8fa8
7101db8f80  ldr x23,[sp, #0xe8]
7101db8f84  fmov s0,0x3f800000
7101db8f88  adrp x1,0x710425d000
7101db8f8c  add x1,x1,#0x1ad
7101db8f90  mov x0,x23
7101db8f94  bl 0x7103778300
7101db8f98  add x0,sp,#0x98
7101db8f9c  mov x1,x21
7101db8fa0  bl 0x710377a120
7101db8fa4  b 0x7101db8fc8
7101db8fa8  ldr x23,[sp, #0xe8]
7101db8fac  ldr x8,[x23, #0x8]
7101db8fb0  cbz x8,0x7101db8fc8
7101db8fb4  ldr x8,[x8, #0x18]
7101db8fb8  cbz x8,0x7101db8fc8
7101db8fbc  ldrb w9,[x8, #0x58]
7101db8fc0  and w9,w9,#0xfe
7101db8fc4  strb w9,[x8, #0x58]
7101db8fc8  ldr x0,[sp, #0xa0]
7101db8fcc  stp x28,xzr,[sp, #0x98]
7101db8fd0  cbz x0,0x7101db8fd8
7101db8fd4  bl 0x710392eb40
7101db8fd8  adrp x20,0x710523d000
7101db8fdc  add x20,x20,#0x988
7101db8fe0  stp x20,xzr,[sp, #0xe0]
7101db8fe4  cbz x23,0x7101db9000
7101db8fe8  ldr x0,[x23, #0x18]
7101db8fec  stp x28,xzr,[x23, #0x10]
7101db8ff0  cbz x0,0x7101db8ff8
7101db8ff4  bl 0x710392eb40
7101db8ff8  mov x0,x23
7101db8ffc  bl 0x710392eb40
7101db9000  stp x20,xzr,[sp, #0x128]
7101db9004  cbz x22,0x7101db9020
7101db9008  ldr x0,[x22, #0x18]
7101db900c  stp x28,xzr,[x22, #0x10]
7101db9010  cbz x0,0x7101db9018
7101db9014  bl 0x710392eb40
7101db9018  mov x0,x22
7101db901c  bl 0x710392eb40
7101db9020  adrp x8,0x710532f000
7101db9024  ldr x8,[x8, #0x730]
7101db9028  ldr x26,[x8, #0x8]
7101db902c  strb wzr,[sp, #0x1c0]
7101db9030  str xzr,[sp, #0x1b8]
7101db9034  strb wzr,[sp, #0x178]
7101db9038  str xzr,[sp, #0x170]
7101db903c  add x8,x19,#0x160
7101db9040  str x8,[sp, #0x18]
7101db9044  ldrb w9,[x19, #0x168]
7101db9048  ldrb w8,[x19, #0x24c]
7101db904c  cbz w9,0x7101db9124
7101db9050  cbz w8,0x7101db905c
7101db9054  ldp x9,x10,[x19, #0x1d0]
7101db9058  b 0x7101db9070
7101db905c  ldp x9,x10,[x19, #0x1d0]
7101db9060  cmp x10,x9
7101db9064  b.ne 0x7101db9070
7101db9068  mov w21,wzr
7101db906c  b 0x7101db90c8
7101db9070  sub x10,x10,x9
7101db9074  lsr x10,x10,#0x3
7101db9078  cbz w10,0x7101db9124
7101db907c  mov w11,wzr
7101db9080  ldr x12,[x9, w11, UXTW #0x3]
7101db9084  ldrb w13,[x12, #0x10]
7101db9088  cmp w13,#0x1
7101db908c  b.eq 0x7101db90a0
7101db9090  add w11,w11,#0x1
7101db9094  cmp w11,w10
7101db9098  b.cc 0x7101db9080
7101db909c  b 0x7101db9124
7101db90a0  ldrb w9,[x12, #0x48]
7101db90a4  sub w9,w9,#0x1
7101db90a8  cmp w9,#0x2
7101db90ac  b.hi 0x7101db9124
7101db90b0  and x9,x9,#0xff
7101db90b4  lsl x9,x9,#0x3
7101db90b8  mov w10,#0x301
7101db90bc  movk w10,#0x2, LSL #16
7101db90c0  lsr w21,w10,w9
7101db90c4  cbnz w8,0x7101db912c
7101db90c8  ldrsh x8,[x19, #0x15c]
7101db90cc  ldr x9,[x26, #0x1d8]
7101db90d0  cmn x8,#0x1
7101db90d4  b.eq 0x7101db90e0
7101db90d8  add x8,x9,x8, LSL #0x1
7101db90dc  ldrh w8,[x8, #0x60]
7101db90e0  ldp x10,x9,[x9, #0x20]
7101db90e4  sub x9,x9,x10
7101db90e8  orr x11,xzr,#-0x3333333333333334
7101db90ec  movk x11,#0xcccd
7101db90f0  asr x9,x9,#0x6
7101db90f4  mul x9,x9,x11
7101db90f8  mov w11,#0x140
7101db90fc  madd x10,x8,x11,x10
7101db9100  adrp x11,0x7105182000
7101db9104  add x11,x11,#0xb08
7101db9108  cmp x9,x8
7101db910c  csel x8,x10,x11,hi
7101db9110  ldrb w8,[x8, #0x5e]
7101db9114  cmp w8,#0x1
7101db9118  mov w8,#0x4
7101db911c  csel w1,w8,w21,eq
7101db9120  b 0x7101db9130
7101db9124  mov w21,wzr
7101db9128  cbz w8,0x7101db90c8
7101db912c  mov w1,wzr
7101db9130  add x0,sp,#0x128
7101db9134  mov w2,wzr
7101db9138  bl 0x710339dde0
7101db913c  add x0,sp,#0xe0
7101db9140  mov w1,w21
7101db9144  mov w2,wzr
7101db9148  bl 0x710339dde0
7101db914c  adrp x8,0x710532f000
7101db9150  ldr x8,[x8, #0x730]
7101db9154  ldr x20,[x8, #0x8]
7101db9158  ldr x21,[x19, #0x150]
7101db915c  ldrb w2,[x19, #0x158]
7101db9160  ldr x0,[x20, #0x168]
7101db9164  mov x1,x21
7101db9168  bl 0x7103263540
7101db916c  ldr x1,[x20, #0x168]
7101db9170  mov w22,w0
7101db9174  sub x0,x29,#0xc0
7101db9178  mov x2,x21
7101db917c  sub x20,x29,#0xc0
7101db9180  bl 0x7103262310
7101db9184  add x2,x20,#0x8
7101db9188  adrp x0,0x710439b000
7101db918c  add x0,x0,#0x815
7101db9190  add x8,sp,#0x98
7101db9194  mov w1,w22
7101db9198  add x20,sp,#0x98
7101db919c  bl 0x71003a4ca0
7101db91a0  mov x8,xzr
7101db91a4  add x9,x20,#0x8
7101db91a8  add x10,sp,#0x170
7101db91ac  b 0x7101db91b8
7101db91b0  add x8,x8,#0x2
7101db91b4  strb w11,[x12, #0x9]
7101db91b8  add x11,x9,x8
7101db91bc  ldrb w13,[x11]
7101db91c0  cbz w13,0x7101db91ec
7101db91c4  add w14,w8,#0x1
7101db91c8  add x12,x10,x8
7101db91cc  cmp w14,#0x3f
7101db91d0  strb w13,[x12, #0x8]
7101db91d4  b.cs 0x7101db91e8
7101db91d8  ldrb w11,[x11, #0x1]
7101db91dc  cbnz w11,0x7101db91b0
7101db91e0  add x8,x8,#0x1
7101db91e4  b 0x7101db91ec
7101db91e8  add w8,w8,#0x1
7101db91ec  add x9,sp,#0x170
7101db91f0  add x24,x9,#0x8
7101db91f4  mov w10,w25
7101db91f8  strb wzr,[x24, w8, UXTW ]
7101db91fc  str w8,[sp, #0x174]
7101db9200  ldrb w8,[sp, #0x178]
7101db9204  cbz w8,0x7101db9228
7101db9208  add x9,x9,#0x9
7101db920c  mov w11,#0x89
7101db9210  mov w10,w25
7101db9214  mul w10,w10,w11
7101db9218  and w8,w8,#0xff
7101db921c  eor w10,w10,w8
7101db9220  ldrb w8,[x9], #0x1
7101db9224  cbnz w8,0x7101db9214
7101db9228  str w10,[sp, #0x170]
7101db922c  ldr x21,[x26, #0x1d8]
7101db9230  ldrh w1,[x19, #0x15c]
7101db9234  mov x0,x21
7101db9238  bl 0x71032a9470
7101db923c  mov x2,x0
7101db9240  sub x0,x29,#0xc0
7101db9244  mov x1,x21
7101db9248  sub x20,x29,#0xc0
7101db924c  bl 0x71032a9540
7101db9250  add x1,x20,#0x8
7101db9254  adrp x0,0x7104464000
7101db9258  add x0,x0,#0x1d4
7101db925c  add x8,sp,#0x98
7101db9260  add x20,sp,#0x98
7101db9264  bl 0x71003a4ca0
7101db9268  mov x8,xzr
7101db926c  add x9,x20,#0x8
7101db9270  add x10,sp,#0x1b8
7101db9274  b 0x7101db9280
7101db9278  add x8,x8,#0x2
7101db927c  strb w11,[x12, #0x9]
7101db9280  add x11,x9,x8
7101db9284  ldrb w13,[x11]
7101db9288  cbz w13,0x7101db92b4
7101db928c  add w14,w8,#0x1
7101db9290  add x12,x10,x8
7101db9294  cmp w14,#0x3f
7101db9298  strb w13,[x12, #0x8]
7101db929c  b.cs 0x7101db92b0
7101db92a0  ldrb w11,[x11, #0x1]
7101db92a4  cbnz w11,0x7101db9278
7101db92a8  add x8,x8,#0x1
7101db92ac  b 0x7101db92b4
7101db92b0  add w8,w8,#0x1
7101db92b4  add x10,sp,#0x1b8
7101db92b8  add x23,x10,#0x8
7101db92bc  strb wzr,[x23, w8, UXTW ]
7101db92c0  ldrb w9,[sp, #0x1c0]
7101db92c4  str w8,[sp, #0x1bc]
7101db92c8  cbz w9,0x7101db92e8
7101db92cc  add x8,x10,#0x9
7101db92d0  mov w10,#0x89
7101db92d4  mul w11,w25,w10
7101db92d8  and w9,w9,#0xff
7101db92dc  eor w25,w11,w9
7101db92e0  ldrb w9,[x8], #0x1
7101db92e4  cbnz w9,0x7101db92d4
7101db92e8  adrp x1,0x7104412000
7101db92ec  add x1,x1,#0xddb
7101db92f0  sub x8,x29,#0xc0
7101db92f4  mov x0,x27
7101db92f8  str w25,[sp, #0x1b8]
7101db92fc  bl 0x7103776640
7101db9300  ldur x21,[x29, #-0xb8]
7101db9304  fmov s0,0x3f800000
7101db9308  add x8,sp,#0x128
7101db930c  add x1,x8,#0x8
7101db9310  mov x0,x21
7101db9314  bl 0x7103778300
7101db9318  adrp x8,0x710523d000
7101db931c  add x8,x8,#0x988
7101db9320  stp x8,xzr,[x29, #-0xc0]
7101db9324  cbz x21,0x7101db9340
7101db9328  ldr x0,[x21, #0x18]
7101db932c  stp x28,xzr,[x21, #0x10]
7101db9330  cbz x0,0x7101db9338
7101db9334  bl 0x710392eb40
7101db9338  mov x0,x21
7101db933c  bl 0x710392eb40
7101db9340  adrp x1,0x71042d6000
7101db9344  add x1,x1,#0x714
7101db9348  add x8,sp,#0x88
7101db934c  mov x0,x27
7101db9350  bl 0x7103776640
7101db9354  ldrb w8,[x19, #0x24c]
7101db9358  cbz w8,0x7101db936c
7101db935c  ldr x22,[sp, #0x90]
7101db9360  adrp x1,0x710439d000
7101db9364  add x1,x1,#0x8a0
7101db9368  b 0x7101db9400
7101db936c  ldrb w8,[x19, #0x168]
7101db9370  cbz w8,0x7101db93f4
7101db9374  ldp x8,x9,[x19, #0x1d0]
7101db9378  cmp x9,x8
7101db937c  b.eq 0x7101db93f4
7101db9380  adrp x8,0x710532f000
7101db9384  ldr x8,[x8, #0x730]
7101db9388  ldr x9,[x8, #0x8]
7101db938c  ldrsh x8,[x19, #0x1e8]
7101db9390  ldr x9,[x9, #0x1d8]
7101db9394  cmn x8,#0x1
7101db9398  b.eq 0x7101db93a4
7101db939c  add x8,x9,x8, LSL #0x1
7101db93a0  ldrh w8,[x8, #0x60]
7101db93a4  ldp x10,x9,[x9, #0x20]
7101db93a8  sub x9,x9,x10
7101db93ac  lsr x9,x9,#0x6
7101db93b0  mov w11,#0xcccd
7101db93b4  movk w11,#0xcccc, LSL #16
7101db93b8  mul w9,w9,w11
7101db93bc  cmp w8,w9
7101db93c0  b.cs 0x7101db93f4
7101db93c4  mov w9,#0x140
7101db93c8  umaddl x8,w8,w9,x10
7101db93cc  ldrb w8,[x8, #0x5e]
7101db93d0  cmp w8,#0x3
7101db93d4  b.ne 0x7101db93f4
7101db93d8  ldrb w8,[x19, #0x219]
7101db93dc  ldr x22,[sp, #0x90]
7101db93e0  cmp w8,#0x1
7101db93e4  b.ne 0x7101dbbbb8
7101db93e8  adrp x1,0x710434a000
7101db93ec  add x1,x1,#0x82a
7101db93f0  b 0x7101db9400
7101db93f4  ldr x22,[sp, #0x90]
7101db93f8  add x8,sp,#0xe0
7101db93fc  add x1,x8,#0x8
7101db9400  fmov s0,0x3f800000
7101db9404  mov x0,x22
7101db9408  bl 0x7103778300
7101db940c  fmov s8,0x3f800000
7101db9410  mov v0.16B,v8.16B
7101db9414  adrp x1,0x710432a000
7101db9418  add x1,x1,#0x70e
7101db941c  mov x0,x22
7101db9420  bl 0x7103778300
7101db9424  mov v0.16B,v8.16B
7101db9428  adrp x1,0x71043f0000
7101db942c  add x1,x1,#0xfa9
7101db9430  mov x0,x22
7101db9434  bl 0x7103778300
7101db9438  ldrb w8,[x19, #0x24c]
7101db943c  cbz w8,0x7101db95d0
7101db9440  ldr x0,[x19, #0x170]
7101db9444  bl 0x7102510850
7101db9448  adrp x1,0x710438c000
7101db944c  add x1,x1,#0xf3a
7101db9450  sub x8,x29,#0xc0
7101db9454  tbz w0,#0x0,0x7101db9648
7101db9458  mov x0,x27
7101db945c  bl 0x7103776910
7101db9460  adrp x1,0x7104319000
7101db9464  add x1,x1,#0x3d4
7101db9468  sub x0,x29,#0xc0
7101db946c  bl 0x710377a120
7101db9470  ldur x0,[x29, #-0xb8]
7101db9474  adrp x24,0x710523d000
7101db9478  add x24,x24,#0x988
7101db947c  stp x28,xzr,[x29, #-0xc0]
7101db9480  cbz x0,0x7101db9488
7101db9484  bl 0x710392eb40
7101db9488  ldrb w8,[x19, #0x218]
7101db948c  cbz w8,0x7101db9708
7101db9490  ldrsh x8,[x19, #0x15c]
7101db9494  ldr x9,[x26, #0x1d8]
7101db9498  cmn x8,#0x1
7101db949c  b.eq 0x7101db94a8
7101db94a0  add x8,x9,x8, LSL #0x1
7101db94a4  ldrh w8,[x8, #0x60]
7101db94a8  ldp x10,x9,[x9, #0x20]
7101db94ac  sub x9,x9,x10
7101db94b0  lsr x9,x9,#0x6
7101db94b4  mov w20,#0xcccd
7101db94b8  movk w20,#0xcccc, LSL #16
7101db94bc  mul w9,w9,w20
7101db94c0  cmp w8,w9
7101db94c4  b.cs 0x7101db954c
7101db94c8  mov w9,#0x140
7101db94cc  umaddl x8,w8,w9,x10
7101db94d0  ldrb w8,[x8, #0x5e]
7101db94d4  cmp w8,#0x2
7101db94d8  b.ne 0x7101db954c
7101db94dc  adrp x1,0x710435b000
7101db94e0  add x1,x1,#0xc71
7101db94e4  sub x8,x29,#0xc0
7101db94e8  mov x0,x27
7101db94ec  bl 0x7103776910
7101db94f0  sub x0,x29,#0xc0
7101db94f4  mov x1,x23
7101db94f8  bl 0x710377a120
7101db94fc  ldur x0,[x29, #-0xb8]
7101db9500  stp x28,xzr,[x29, #-0xc0]
7101db9504  cbz x0,0x7101db950c
7101db9508  bl 0x710392eb40
7101db950c  adrp x1,0x71042d6000
7101db9510  add x1,x1,#0x75e
7101db9514  sub x8,x29,#0xc0
7101db9518  mov x0,x27
7101db951c  bl 0x7103776640
7101db9520  ldur x21,[x29, #-0xb8]
7101db9524  ldr x8,[x21, #0x8]
7101db9528  cbz x8,0x7101db9844
7101db952c  ldr x8,[x8, #0x18]
7101db9530  cbz x8,0x7101db9844
7101db9534  ldrb w9,[x8, #0x58]
7101db9538  and w9,w9,#0xfe
7101db953c  strb w9,[x8, #0x58]
7101db9540  stp x24,xzr,[x29, #-0xc0]
7101db9544  cbnz x21,0x7101db984c
7101db9548  b 0x7101db9864
7101db954c  adrp x1,0x71042d6000
7101db9550  add x1,x1,#0x75e
7101db9554  sub x8,x29,#0xc0
7101db9558  mov x0,x27
7101db955c  bl 0x7103776640
7101db9560  adrp x1,0x7104338000
7101db9564  add x1,x1,#0xd31
7101db9568  add x8,sp,#0x98
7101db956c  sub x0,x29,#0xc0
7101db9570  bl 0x7103776910
7101db9574  ldrsh w8,[x19, #0x15c]
7101db9578  cmn w8,#0x1
7101db957c  b.eq 0x7101db966c
7101db9580  cmp w8,#0x7cf
7101db9584  b.gt 0x7101db966c
7101db9588  ldr x10,[x26, #0x1d8]
7101db958c  sxtw x8,w8
7101db9590  add x8,x10,x8, LSL #0x1
7101db9594  ldp x9,x10,[x10, #0x20]
7101db9598  ldrh w8,[x8, #0x60]
7101db959c  sub x10,x10,x9
7101db95a0  lsr x10,x10,#0x6
7101db95a4  mul w10,w10,w20
7101db95a8  cmp w10,w8
7101db95ac  b.ls 0x7101db966c
7101db95b0  mov w10,#0x140
7101db95b4  madd x8,x8,x10,x9
7101db95b8  ldrb w8,[x8, #0x5e]
7101db95bc  ldur x21,[x29, #-0xb8]
7101db95c0  cbz w8,0x7101db97b8
7101db95c4  adrp x1,0x7104441000
7101db95c8  add x1,x1,#0x885
7101db95cc  b 0x7101db97c0
7101db95d0  ldrb w8,[x19, #0x168]
7101db95d4  cbz w8,0x7101db9690
7101db95d8  ldp x8,x9,[x19, #0x1d0]
7101db95dc  cmp x9,x8
7101db95e0  b.eq 0x7101db9690
7101db95e4  adrp x8,0x710532f000
7101db95e8  ldr x8,[x8, #0x730]
7101db95ec  ldr x9,[x8, #0x8]
7101db95f0  ldrsh x8,[x19, #0x1e8]
7101db95f4  ldr x9,[x9, #0x1d8]
7101db95f8  cmn x8,#0x1
7101db95fc  b.eq 0x7101db9608
7101db9600  add x8,x9,x8, LSL #0x1
7101db9604  ldrh w8,[x8, #0x60]
7101db9608  ldp x10,x9,[x9, #0x20]
7101db960c  sub x9,x9,x10
7101db9610  lsr x9,x9,#0x6
7101db9614  mov w11,#0xcccd
7101db9618  movk w11,#0xcccc, LSL #16
7101db961c  mul w9,w9,w11
7101db9620  cmp w8,w9
7101db9624  b.cs 0x7101db9690
7101db9628  mov w9,#0x140
7101db962c  umaddl x8,w8,w9,x10
7101db9630  ldrb w8,[x8, #0x5e]
7101db9634  cmp w8,#0x3
7101db9638  b.ne 0x7101db9690
7101db963c  adrp x1,0x710438c000
7101db9640  add x1,x1,#0xf3a
7101db9644  sub x8,x29,#0xc0
7101db9648  mov x0,x27
7101db964c  bl 0x7103776910
7101db9650  sub x0,x29,#0xc0
7101db9654  mov x1,x24
7101db9658  bl 0x710377a120
7101db965c  ldur x0,[x29, #-0xb8]
7101db9660  stp x28,xzr,[x29, #-0xc0]
7101db9664  cbnz x0,0x7101db96f4
7101db9668  b 0x7101db96f8
7101db966c  ldur x21,[x29, #-0xb8]
7101db9670  ldr x8,[x21, #0x8]
7101db9674  cbz x8,0x7101db97d8
7101db9678  ldr x8,[x8, #0x18]
7101db967c  cbz x8,0x7101db97d8
7101db9680  ldrb w9,[x8, #0x58]
7101db9684  and w9,w9,#0xfe
7101db9688  strb w9,[x8, #0x58]
7101db968c  b 0x7101db97d8
7101db9690  ldr x25,[sp, #0x18]
7101db9694  sub x0,x29,#0xc0
7101db9698  mov x1,x25
7101db969c  sub x20,x29,#0xc0
7101db96a0  bl 0x7102499260
7101db96a4  add x0,sp,#0x98
7101db96a8  mov x1,x25
7101db96ac  add x21,sp,#0x98
7101db96b0  bl 0x71024999d0
7101db96b4  adrp x1,0x710438c000
7101db96b8  add x1,x1,#0xf3a
7101db96bc  add x8,sp,#0x78
7101db96c0  mov x0,x27
7101db96c4  bl 0x7103776910
7101db96c8  add x3,x20,#0x8
7101db96cc  add x5,x21,#0x8
7101db96d0  adrp x1,0x710435b000
7101db96d4  add x1,x1,#0xc40
7101db96d8  add x0,sp,#0x78
7101db96dc  orr w2,wzr,#0x3
7101db96e0  mov x4,x24
7101db96e4  bl 0x710377a280
7101db96e8  ldr x0,[sp, #0x80]
7101db96ec  stp x28,xzr,[sp, #0x78]
7101db96f0  cbz x0,0x7101db96f8
7101db96f4  bl 0x710392eb40
7101db96f8  adrp x24,0x710523d000
7101db96fc  add x24,x24,#0x988
7101db9700  ldrb w8,[x19, #0x218]
7101db9704  cbnz w8,0x7101db9490
7101db9708  adrp x1,0x7104280000
7101db970c  add x1,x1,#0xf45
7101db9710  sub x8,x29,#0xc0
7101db9714  mov x0,x27
7101db9718  bl 0x7103776640
7101db971c  adrp x1,0x7104338000
7101db9720  add x1,x1,#0xd31
7101db9724  add x8,sp,#0x98
7101db9728  sub x0,x29,#0xc0
7101db972c  bl 0x7103776910
7101db9730  ldrsh w8,[x19, #0x15c]
7101db9734  cmn w8,#0x1
7101db9738  b.eq 0x7101db9794
7101db973c  cmp w8,#0x7cf
7101db9740  b.gt 0x7101db9794
7101db9744  ldr x10,[x26, #0x1d8]
7101db9748  sxtw x8,w8
7101db974c  add x8,x10,x8, LSL #0x1
7101db9750  ldp x9,x10,[x10, #0x20]
7101db9754  ldrh w8,[x8, #0x60]
7101db9758  sub x10,x10,x9
7101db975c  lsr x10,x10,#0x6
7101db9760  mov w11,#0xcccd
7101db9764  movk w11,#0xcccc, LSL #16
7101db9768  mul w10,w10,w11
7101db976c  cmp w10,w8
7101db9770  b.ls 0x7101db9794
7101db9774  mov w10,#0x140
7101db9778  madd x8,x8,x10,x9
7101db977c  ldrb w8,[x8, #0x5e]
7101db9780  ldur x21,[x29, #-0xb8]
7101db9784  cbz w8,0x7101db9814
7101db9788  adrp x1,0x7104441000
7101db978c  add x1,x1,#0x885
7101db9790  b 0x7101db981c
7101db9794  ldur x21,[x29, #-0xb8]
7101db9798  ldr x8,[x21, #0x8]
7101db979c  cbz x8,0x7101db9834
7101db97a0  ldr x8,[x8, #0x18]
7101db97a4  cbz x8,0x7101db9834
7101db97a8  ldrb w9,[x8, #0x58]
7101db97ac  and w9,w9,#0xfe
7101db97b0  strb w9,[x8, #0x58]
7101db97b4  b 0x7101db9834
7101db97b8  adrp x1,0x710425d000
7101db97bc  add x1,x1,#0x1ad
7101db97c0  fmov s0,0x3f800000
7101db97c4  mov x0,x21
7101db97c8  bl 0x7103778300
7101db97cc  add x0,sp,#0x98
7101db97d0  mov x1,x23
7101db97d4  bl 0x710377a120
7101db97d8  adrp x1,0x710435b000
7101db97dc  add x1,x1,#0xc71
7101db97e0  add x8,sp,#0x78
7101db97e4  mov x0,x27
7101db97e8  bl 0x7103776910
7101db97ec  ldr x0,[sp, #0x80]
7101db97f0  ldr x8,[x0]
7101db97f4  cbz x8,0x7101db9804
7101db97f8  ldrb w9,[x8, #0x58]
7101db97fc  and w9,w9,#0xfe
7101db9800  strb w9,[x8, #0x58]
7101db9804  stp x28,xzr,[sp, #0x78]
7101db9808  cbz x0,0x7101db9834
7101db980c  bl 0x710392eb40
7101db9810  b 0x7101db9834
7101db9814  adrp x1,0x710425d000
7101db9818  add x1,x1,#0x1ad
7101db981c  fmov s0,0x3f800000
7101db9820  mov x0,x21
7101db9824  bl 0x7103778300
7101db9828  add x0,sp,#0x98
7101db982c  mov x1,x23
7101db9830  bl 0x710377a120
7101db9834  ldr x0,[sp, #0xa0]
7101db9838  stp x28,xzr,[sp, #0x98]
7101db983c  cbz x0,0x7101db9844
7101db9840  bl 0x710392eb40
7101db9844  stp x24,xzr,[x29, #-0xc0]
7101db9848  cbz x21,0x7101db9864
7101db984c  ldr x0,[x21, #0x18]
7101db9850  stp x28,xzr,[x21, #0x10]
7101db9854  cbz x0,0x7101db985c
7101db9858  bl 0x710392eb40
7101db985c  mov x0,x21
7101db9860  bl 0x710392eb40
7101db9864  stp x24,xzr,[sp, #0x88]
7101db9868  cbz x22,0x7101db9884
7101db986c  ldr x0,[x22, #0x18]
7101db9870  stp x28,xzr,[x22, #0x10]
7101db9874  cbz x0,0x7101db987c
7101db9878  bl 0x710392eb40
7101db987c  mov x0,x22
7101db9880  bl 0x710392eb40
7101db9884  adrp x22,0x7105329000
7101db9888  ldr x8,[x22, #0xf98]
7101db988c  ldr x8,[x8]
7101db9890  ldrh w1,[x19, #0x15a]
7101db9894  ldr x20,[x8, #0x20]
7101db9898  orr w8,wzr,#0xffff
7101db989c  cmp x1,x8
7101db98a0  b.eq 0x7101db991c
7101db98a4  mov x0,x20
7101db98a8  ldr x8,[x0, #0x10]!
7101db98ac  ldr x9,[x0, #0x8]
7101db98b0  sub x11,x9,x8
7101db98b4  asr x9,x11,#0x3
7101db98b8  cmp w9,#0x1
7101db98bc  b.lt 0x7101db991c
7101db98c0  mov x10,xzr
7101db98c4  sbfx x11,x11,#0x3,#0x20
7101db98c8  cmp x9,x10
7101db98cc  b.ls 0x7101dbbc50
7101db98d0  ldrh w12,[x8]
7101db98d4  cmp w12,w1
7101db98d8  b.eq 0x7101db98f0
7101db98dc  add x10,x10,#0x1
7101db98e0  add x8,x8,#0x8
7101db98e4  cmp x10,x11
7101db98e8  b.lt 0x7101db98c8
7101db98ec  b 0x7101db991c
7101db98f0  tbnz w10,#0x1f,0x7101db991c
7101db98f4  adrp x8,0x710532f000
7101db98f8  ldr x8,[x8, #0x730]
7101db98fc  ldr x8,[x8, #0x8]
7101db9900  ldr x0,[x8, #0x1d8]
7101db9904  bl 0x71032a9470
7101db9908  mov x1,x0
7101db990c  add x0,x20,#0x8
7101db9910  mov w2,#0x17
7101db9914  bl 0x710323faf0
7101db9918  b 0x7101db9920
7101db991c  add x0,x20,#0x70
7101db9920  ldr x8,[x0, #0x8]
7101db9924  ldr x8,[x8]
7101db9928  sub x20,x29,#0xc0
7101db992c  cbz x8,0x7101db9938
7101db9930  ldrb w8,[x19, #0x218]
7101db9934  cbz w8,0x7101db9970
7101db9938  adrp x1,0x7104454000
7101db993c  add x1,x1,#0xf28
7101db9940  sub x8,x29,#0xc0
7101db9944  mov x0,x27
7101db9948  bl 0x7103776640
7101db994c  ldur x21,[x29, #-0xb8]
7101db9950  ldr x8,[x21, #0x8]
7101db9954  cbz x8,0x7101db99a0
7101db9958  ldr x8,[x8, #0x18]
7101db995c  cbz x8,0x7101db99a0
7101db9960  ldrb w9,[x8, #0x58]
7101db9964  and w9,w9,#0xfe
7101db9968  strb w9,[x8, #0x58]
7101db996c  b 0x7101db99a0
7101db9970  adrp x1,0x7104454000
7101db9974  add x1,x1,#0xf28
7101db9978  sub x8,x29,#0xc0
7101db997c  mov x0,x27
7101db9980  bl 0x7103776640
7101db9984  ldrh w1,[x19, #0x15a]
7101db9988  sub x0,x29,#0xc0
7101db998c  mov w4,#0x1
7101db9990  mov w2,wzr
7101db9994  mov w3,wzr
7101db9998  bl 0x71025ae6d0
7101db999c  ldur x21,[x29, #-0xb8]
7101db99a0  stur x24,[x29, #-0xc0]
7101db99a4  stur xzr,[x29, #-0xb8]
7101db99a8  cbz x21,0x7101db99c4
7101db99ac  ldr x0,[x21, #0x18]
7101db99b0  stp x28,xzr,[x21, #0x10]
7101db99b4  cbz x0,0x7101db99bc
7101db99b8  bl 0x710392eb40
7101db99bc  mov x0,x21
7101db99c0  bl 0x710392eb40
7101db99c4  ldrb w9,[x19, #0x168]
7101db99c8  ldrb w8,[x19, #0x24c]
7101db99cc  cbz w9,0x7101db9a38
7101db99d0  cbnz w8,0x7101db99e0
7101db99d4  ldp x9,x10,[x19, #0x1d0]
7101db99d8  cmp x10,x9
7101db99dc  b.eq 0x7101db9a3c
7101db99e0  adrp x9,0x710532f000
7101db99e4  ldr x9,[x9, #0x730]
7101db99e8  ldr x10,[x9, #0x8]
7101db99ec  ldrsh x9,[x19, #0x1e8]
7101db99f0  ldr x10,[x10, #0x1d8]
7101db99f4  cmn x9,#0x1
7101db99f8  b.eq 0x7101db9a04
7101db99fc  add x9,x10,x9, LSL #0x1
7101db9a00  ldrh w9,[x9, #0x60]
7101db9a04  ldp x11,x10,[x10, #0x20]
7101db9a08  sub x10,x10,x11
7101db9a0c  lsr x10,x10,#0x6
7101db9a10  mov w12,#0xcccd
7101db9a14  movk w12,#0xcccc, LSL #16
7101db9a18  mul w10,w10,w12
7101db9a1c  cmp w9,w10
7101db9a20  b.cs 0x7101db9a38
7101db9a24  mov w10,#0x140
7101db9a28  umaddl x9,w9,w10,x11
7101db9a2c  ldrb w9,[x9, #0x5e]
7101db9a30  cmp w9,#0x3
7101db9a34  b.eq 0x7101db9b4c
7101db9a38  cbnz w8,0x7101db9b4c
7101db9a3c  ldr x8,[x22, #0xf98]
7101db9a40  ldr x8,[x8]
7101db9a44  ldrh w1,[x19, #0x15c]
7101db9a48  ldr x20,[x8, #0x20]
7101db9a4c  orr w8,wzr,#0xffff
7101db9a50  cmp x1,x8
7101db9a54  b.eq 0x7101db9ad0
7101db9a58  mov x0,x20
7101db9a5c  ldr x8,[x0, #0x10]!
7101db9a60  ldr x9,[x0, #0x8]
7101db9a64  sub x11,x9,x8
7101db9a68  asr x9,x11,#0x3
7101db9a6c  cmp w9,#0x1
7101db9a70  b.lt 0x7101db9ad0
7101db9a74  mov x10,xzr
7101db9a78  sbfx x11,x11,#0x3,#0x20
7101db9a7c  cmp x9,x10
7101db9a80  b.ls 0x7101dbbc50
7101db9a84  ldrh w12,[x8]
7101db9a88  cmp w12,w1
7101db9a8c  b.eq 0x7101db9aa4
7101db9a90  add x10,x10,#0x1
7101db9a94  add x8,x8,#0x8
7101db9a98  cmp x10,x11
7101db9a9c  b.lt 0x7101db9a7c
7101db9aa0  b 0x7101db9ad0
7101db9aa4  tbnz w10,#0x1f,0x7101db9ad0
7101db9aa8  adrp x8,0x710532f000
7101db9aac  ldr x8,[x8, #0x730]
7101db9ab0  ldr x8,[x8, #0x8]
7101db9ab4  ldr x0,[x8, #0x1d8]
7101db9ab8  bl 0x71032a9470
7101db9abc  mov x1,x0
7101db9ac0  add x0,x20,#0x8
7101db9ac4  mov w2,#0x17
7101db9ac8  bl 0x710323faf0
7101db9acc  b 0x7101db9ad4
7101db9ad0  add x0,x20,#0x70
7101db9ad4  ldr x8,[x0, #0x8]
7101db9ad8  ldr x8,[x8]
7101db9adc  sub x20,x29,#0xc0
7101db9ae0  cbz x8,0x7101db9b4c
7101db9ae4  adrp x1,0x710425f000
7101db9ae8  add x1,x1,#0x92b
7101db9aec  sub x8,x29,#0xc0
7101db9af0  mov x0,x27
7101db9af4  bl 0x7103776640
7101db9af8  ldrh w1,[x19, #0x15c]
7101db9afc  sub x0,x29,#0xc0
7101db9b00  mov w4,#0x1
7101db9b04  mov w2,wzr
7101db9b08  mov w3,wzr
7101db9b0c  bl 0x71025ae6d0
7101db9b10  ldr x0,[x19, #0xe0]
7101db9b14  fmov s0,0x3f800000
7101db9b18  adrp x1,0x71042d6000
7101db9b1c  add x1,x1,#0x736
7101db9b20  bl 0x7103778300
7101db9b24  ldur x21,[x29, #-0xb8]
7101db9b28  stp x24,xzr,[x29, #-0xc0]
7101db9b2c  cbz x21,0x7101db9b60
7101db9b30  ldr x0,[x21, #0x18]
7101db9b34  stp x28,xzr,[x21, #0x10]
7101db9b38  cbz x0,0x7101db9b40
7101db9b3c  bl 0x710392eb40
7101db9b40  mov x0,x21
7101db9b44  bl 0x710392eb40
7101db9b48  b 0x7101db9b60
7101db9b4c  ldr x0,[x19, #0xe0]
7101db9b50  fmov s0,0x3f800000
7101db9b54  adrp x1,0x71043ad000
7101db9b58  add x1,x1,#0xc7a
7101db9b5c  bl 0x7103778300
7101db9b60  adrp x8,0x710532f000
7101db9b64  ldr x8,[x8, #0x730]
7101db9b68  ldr x0,[x19]
7101db9b6c  ldr x1,[x19, #0x108]
7101db9b70  mov x24,#0xa78
7101db9b74  movk x24,#0x7e19, LSL #16
7101db9b78  ldrb w2,[x19, #0x118]
7101db9b7c  mov x22,#0xe57b
7101db9b80  movk x22,#0x1d20, LSL #16
7101db9b84  orr w3,wzr,#0x3
7101db9b88  movk x22,#0xf, LSL #32
7101db9b8c  ldr x23,[x8, #0x8]
7101db9b90  movk x24,#0x12, LSL #32
7101db9b94  bl 0x710323f330
7101db9b98  ldr x8,[x0, #0x8]
7101db9b9c  ldr x8,[x8]
7101db9ba0  cbz x8,0x7101db9dec
7101db9ba4  mov x25,x0
7101db9ba8  adrp x1,0x710424f000
7101db9bac  add x1,x1,#0x9e5
7101db9bb0  add x8,sp,#0x1b8
7101db9bb4  mov x0,x27
7101db9bb8  bl 0x7103776910
7101db9bbc  adrp x1,0x7104270000
7101db9bc0  add x1,x1,#0x3ec
7101db9bc4  add x8,sp,#0x170
7101db9bc8  mov x0,x27
7101db9bcc  bl 0x7103776910
7101db9bd0  ldr x21,[sp, #0x1c0]
7101db9bd4  mov x0,x21
7101db9bd8  mov x1,x25
7101db9bdc  bl 0x7103778b80
7101db9be0  ldr x0,[sp, #0x178]
7101db9be4  mov x1,x25
7101db9be8  bl 0x7103778b80
7101db9bec  ldr x1,[x19, #0x108]
7101db9bf0  ldrb w2,[x19, #0x118]
7101db9bf4  ldr x0,[x23, #0x2a8]
7101db9bf8  bl 0x7103280ec0
7101db9bfc  ldr x8,[x23, #0x2a8]
7101db9c00  fmov s8,wzr
7101db9c04  mov v0.16B,v8.16B
7101db9c08  ldr x26,[x8, #0x8]
7101db9c0c  mov w25,w0
7101db9c10  mov x2,#0x3aee
7101db9c14  movk x2,#0x91e, LSL #16
7101db9c18  mov w1,w25
7101db9c1c  movk x2,#0x12, LSL #32
7101db9c20  mov x0,x26
7101db9c24  bl 0x710326ad60
7101db9c28  str d0,[sp, #0x20]
7101db9c2c  mov v0.16B,v8.16B
7101db9c30  mov x0,x26
7101db9c34  mov w1,w25
7101db9c38  mov x2,x24
7101db9c3c  bl 0x710326ad60
7101db9c40  str d0,[sp]
7101db9c44  fmov s0,0x3f800000
7101db9c48  mov x0,x26
7101db9c4c  mov w1,w25
7101db9c50  mov x2,x22
7101db9c54  bl 0x710326ad60
7101db9c58  mov w0,#0x10
7101db9c5c  mov w1,#0x20
7101db9c60  mov v8.16B,v0.16B
7101db9c64  bl 0x710392e290
7101db9c68  mov x25,x0
7101db9c6c  cbnz x0,0x7101db9cb8
7101db9c70  adrp x8,0x7105332000
7101db9c74  ldr x0,[x8, #0xf00]
7101db9c78  cbz x0,0x7101db9cb4
7101db9c7c  mov w8,#0x20
7101db9c80  str wzr,[sp, #0x128]
7101db9c84  add x1,sp,#0x128
7101db9c88  stur x8,[x29, #-0xc0]
7101db9c8c  ldr x8,[x0]
7101db9c90  ldr x8,[x8, #0x30]
7101db9c94  sub x2,x29,#0xc0
7101db9c98  blr x8
7101db9c9c  tbz w0,#0x0,0x7101db9cb4
7101db9ca0  mov w0,#0x10
7101db9ca4  mov w1,#0x20
7101db9ca8  bl 0x710392e290
7101db9cac  mov x25,x0
7101db9cb0  cbnz x0,0x7101db9cb8
7101db9cb4  mov x25,xzr
7101db9cb8  stp xzr,xzr,[x25, #0x10]
7101db9cbc  movi v0.2D,#0x0
7101db9cc0  stp xzr,xzr,[x25]
7101db9cc4  ldr x8,[x21]
7101db9cc8  ldr q1,[sp, #0x20]
7101db9ccc  mov v0.S[0x0],v1.S[0x0]
7101db9cd0  str x8,[x25]
7101db9cd4  ldr x8,[x21, #0x8]
7101db9cd8  str x8,[x25, #0x8]
7101db9cdc  ldr x8,[sp, #0x1c0]
7101db9ce0  ldr q1,[sp]
7101db9ce4  ldr x9,[x8, #0x10]
7101db9ce8  mov v0.S[0x1],v1.S[0x0]
7101db9cec  str x9,[x25, #0x10]
7101db9cf0  ldr x8,[x8, #0x18]
7101db9cf4  str x8,[x25, #0x18]
7101db9cf8  sub x1,x29,#0xc0
7101db9cfc  str q0,[sp, #0x20]
7101db9d00  str q0,[x20]
7101db9d04  mov v0.16B,v8.16B
7101db9d08  mov x0,x25
7101db9d0c  bl 0x7103779770
7101db9d10  cbz x25,0x7101db9d1c
7101db9d14  mov x0,x25
7101db9d18  bl 0x710392eb40
7101db9d1c  mov w0,#0x10
7101db9d20  mov w1,#0x20
7101db9d24  bl 0x710392e290
7101db9d28  mov x21,x0
7101db9d2c  cbnz x0,0x7101db9d78
7101db9d30  adrp x8,0x7105332000
7101db9d34  ldr x0,[x8, #0xf00]
7101db9d38  cbz x0,0x7101db9d74
7101db9d3c  mov w8,#0x20
7101db9d40  str wzr,[sp, #0x128]
7101db9d44  add x1,sp,#0x128
7101db9d48  stur x8,[x29, #-0xc0]
7101db9d4c  ldr x8,[x0]
7101db9d50  ldr x8,[x8, #0x30]
7101db9d54  sub x2,x29,#0xc0
7101db9d58  blr x8
7101db9d5c  tbz w0,#0x0,0x7101db9d74
7101db9d60  mov w0,#0x10
7101db9d64  mov w1,#0x20
7101db9d68  bl 0x710392e290
7101db9d6c  mov x21,x0
7101db9d70  cbnz x0,0x7101db9d78
7101db9d74  mov x21,xzr
7101db9d78  stp xzr,xzr,[x21, #0x10]
7101db9d7c  sub x1,x29,#0xc0
7101db9d80  stp xzr,xzr,[x21]
7101db9d84  ldr x8,[sp, #0x178]
7101db9d88  ldr x9,[x8]
7101db9d8c  str x9,[x21]
7101db9d90  ldr x8,[x8, #0x8]
7101db9d94  str x8,[x21, #0x8]
7101db9d98  ldr x25,[sp, #0x178]
7101db9d9c  ldr x8,[x25, #0x10]
7101db9da0  str x8,[x21, #0x10]
7101db9da4  ldr q0,[sp, #0x20]
7101db9da8  ldr x8,[x25, #0x18]
7101db9dac  str x8,[x21, #0x18]
7101db9db0  mov x0,x21
7101db9db4  str q0,[x20]
7101db9db8  mov v0.16B,v8.16B
7101db9dbc  bl 0x7103779770
7101db9dc0  cbz x21,0x7101db9dcc
7101db9dc4  mov x0,x21
7101db9dc8  bl 0x710392eb40
7101db9dcc  stp x28,xzr,[sp, #0x170]
7101db9dd0  cbz x25,0x7101db9ddc
7101db9dd4  mov x0,x25
7101db9dd8  bl 0x710392eb40
7101db9ddc  ldr x0,[sp, #0x1c0]
7101db9de0  stp x28,xzr,[sp, #0x1b8]
7101db9de4  cbz x0,0x7101db9dec
7101db9de8  bl 0x710392eb40
7101db9dec  mov w0,#0x10
7101db9df0  mov w1,#0x20
7101db9df4  bl 0x710392e290
7101db9df8  mov x21,x0
7101db9dfc  cbnz x0,0x7101db9e48
7101db9e00  adrp x8,0x7105332000
7101db9e04  ldr x0,[x8, #0xf00]
7101db9e08  cbz x0,0x7101db9e44
7101db9e0c  mov w8,#0x20
7101db9e10  str wzr,[sp, #0x1b8]
7101db9e14  add x1,sp,#0x1b8
7101db9e18  stur x8,[x29, #-0xc0]
7101db9e1c  ldr x8,[x0]
7101db9e20  ldr x8,[x8, #0x30]
7101db9e24  sub x2,x29,#0xc0
7101db9e28  blr x8
7101db9e2c  tbz w0,#0x0,0x7101db9e44
7101db9e30  mov w0,#0x10
7101db9e34  mov w1,#0x20
7101db9e38  bl 0x710392e290
7101db9e3c  mov x21,x0
7101db9e40  cbnz x0,0x7101db9e48
7101db9e44  mov x21,xzr
7101db9e48  mov w0,#0x10
7101db9e4c  mov w1,#0x20
7101db9e50  stp xzr,xzr,[x21, #0x10]
7101db9e54  stp xzr,xzr,[x21]
7101db9e58  bl 0x710392e290
7101db9e5c  mov x28,x0
7101db9e60  cbnz x0,0x7101db9eac
7101db9e64  adrp x8,0x7105332000
7101db9e68  ldr x0,[x8, #0xf00]
7101db9e6c  cbz x0,0x7101db9ea8
7101db9e70  mov w8,#0x20
7101db9e74  str wzr,[sp, #0x1b8]
7101db9e78  add x1,sp,#0x1b8
7101db9e7c  stur x8,[x29, #-0xc0]
7101db9e80  ldr x8,[x0]
7101db9e84  ldr x8,[x8, #0x30]
7101db9e88  sub x2,x29,#0xc0
7101db9e8c  blr x8
7101db9e90  tbz w0,#0x0,0x7101db9ea8
7101db9e94  mov w0,#0x10
7101db9e98  mov w1,#0x20
7101db9e9c  bl 0x710392e290
7101db9ea0  mov x28,x0
7101db9ea4  cbnz x0,0x7101db9eac
7101db9ea8  mov x28,xzr
7101db9eac  stp xzr,xzr,[x28, #0x10]
7101db9eb0  stp xzr,xzr,[x28]
7101db9eb4  ldrb w8,[x19, #0x24c]
7101db9eb8  cbz w8,0x7101db9ee0
7101db9ebc  ldr x0,[x19, #0x170]
7101db9ec0  ldr x25,[x19, #0x250]
7101db9ec4  bl 0x7102510850
7101db9ec8  mov w8,w0
7101db9ecc  ldr x0,[x19, #0xe0]
7101db9ed0  tbz w8,#0x0,0x7101db9f54
7101db9ed4  adrp x1,0x7104412000
7101db9ed8  add x1,x1,#0xdcb
7101db9edc  b 0x7101db9f5c
7101db9ee0  ldr x25,[x19, #0x150]
7101db9ee4  adrp x1,0x710434a000
7101db9ee8  add x1,x1,#0x817
7101db9eec  sub x8,x29,#0xc0
7101db9ef0  mov x0,x27
7101db9ef4  bl 0x7103776910
7101db9ef8  ldur x26,[x29, #-0xb8]
7101db9efc  stur xzr,[x29, #-0xb8]
7101db9f00  cbz x21,0x7101db9f0c
7101db9f04  mov x0,x21
7101db9f08  bl 0x710392eb40
7101db9f0c  adrp x8,0x710523d000
7101db9f10  add x8,x8,#0x9a8
7101db9f14  adrp x1,0x71043ad000
7101db9f18  add x1,x1,#0xc63
7101db9f1c  stp x8,xzr,[x29, #-0xc0]
7101db9f20  sub x8,x29,#0xc0
7101db9f24  mov x0,x27
7101db9f28  bl 0x7103776910
7101db9f2c  ldur x27,[x29, #-0xb8]
7101db9f30  stur xzr,[x29, #-0xb8]
7101db9f34  cbz x28,0x7101db9f40
7101db9f38  mov x0,x28
7101db9f3c  bl 0x710392eb40
7101db9f40  adrp x8,0x710523d000
7101db9f44  add x8,x8,#0x9a8
7101db9f48  stp x8,xzr,[x29, #-0xc0]
7101db9f4c  ldrb w28,[x19, #0x158]
7101db9f50  b 0x7101db9fd0
7101db9f54  adrp x1,0x71043ad000
7101db9f58  add x1,x1,#0xc5a
7101db9f5c  fmov s0,0x3f800000
7101db9f60  bl 0x7103778300
7101db9f64  adrp x1,0x710438d000
7101db9f68  add x1,x1,#0xe4
7101db9f6c  sub x8,x29,#0xc0
7101db9f70  mov x0,x27
7101db9f74  bl 0x7103776910
7101db9f78  ldur x26,[x29, #-0xb8]
7101db9f7c  stur xzr,[x29, #-0xb8]
7101db9f80  cbz x21,0x7101db9f8c
7101db9f84  mov x0,x21
7101db9f88  bl 0x710392eb40
7101db9f8c  adrp x8,0x710523d000
7101db9f90  add x8,x8,#0x9a8
7101db9f94  adrp x1,0x710434a000
7101db9f98  add x1,x1,#0x806
7101db9f9c  stp x8,xzr,[x29, #-0xc0]
7101db9fa0  sub x8,x29,#0xc0
7101db9fa4  mov x0,x27
7101db9fa8  bl 0x7103776910
7101db9fac  ldur x27,[x29, #-0xb8]
7101db9fb0  stur xzr,[x29, #-0xb8]
7101db9fb4  cbz x28,0x7101db9fc0
7101db9fb8  mov x0,x28
7101db9fbc  bl 0x710392eb40
7101db9fc0  adrp x8,0x710523d000
7101db9fc4  add x8,x8,#0x9a8
7101db9fc8  mov w28,wzr
7101db9fcc  stp x8,xzr,[x29, #-0xc0]
7101db9fd0  ldr x0,[x19]
7101db9fd4  orr w3,wzr,#0x3
7101db9fd8  mov x1,x25
7101db9fdc  mov w2,w28
7101db9fe0  bl 0x710323f330
7101db9fe4  ldr x8,[x0, #0x8]
7101db9fe8  ldr x8,[x8]
7101db9fec  cbz x8,0x7101dba1e8
7101db9ff0  mov x21,x0
7101db9ff4  mov x0,x26
7101db9ff8  mov x1,x21
7101db9ffc  bl 0x7103778b80
7101dba000  mov x0,x27
7101dba004  mov x1,x21
7101dba008  bl 0x7103778b80
7101dba00c  ldr x0,[x23, #0x2a8]
7101dba010  mov x1,x25
7101dba014  mov w2,w28
7101dba018  bl 0x7103280ec0
7101dba01c  ldr x8,[x23, #0x2a8]
7101dba020  fmov s8,wzr
7101dba024  mov x20,x22
7101dba028  mov v0.16B,v8.16B
7101dba02c  ldr x22,[x8, #0x8]
7101dba030  mov w21,w0
7101dba034  mov x2,#0x3aee
7101dba038  movk x2,#0x91e, LSL #16
7101dba03c  mov w1,w21
7101dba040  movk x2,#0x12, LSL #32
7101dba044  mov x0,x22
7101dba048  bl 0x710326ad60
7101dba04c  str d0,[sp, #0x20]
7101dba050  mov v0.16B,v8.16B
7101dba054  mov x0,x22
7101dba058  mov w1,w21
7101dba05c  mov x2,x24
7101dba060  bl 0x710326ad60
7101dba064  str d0,[sp]
7101dba068  fmov s0,0x3f800000
7101dba06c  mov x0,x22
7101dba070  mov w1,w21
7101dba074  mov x2,x20
7101dba078  bl 0x710326ad60
7101dba07c  mov w0,#0x10
7101dba080  mov w1,#0x20
7101dba084  mov v8.16B,v0.16B
7101dba088  bl 0x710392e290
7101dba08c  mov x21,x0
7101dba090  cbnz x0,0x7101dba0dc
7101dba094  adrp x8,0x7105332000
7101dba098  ldr x0,[x8, #0xf00]
7101dba09c  cbz x0,0x7101dba0d8
7101dba0a0  mov w8,#0x20
7101dba0a4  str wzr,[sp, #0x1b8]
7101dba0a8  add x1,sp,#0x1b8
7101dba0ac  stur x8,[x29, #-0xc0]
7101dba0b0  ldr x8,[x0]
7101dba0b4  ldr x8,[x8, #0x30]
7101dba0b8  sub x2,x29,#0xc0
7101dba0bc  blr x8
7101dba0c0  tbz w0,#0x0,0x7101dba0d8
7101dba0c4  mov w0,#0x10
7101dba0c8  mov w1,#0x20
7101dba0cc  bl 0x710392e290
7101dba0d0  mov x21,x0
7101dba0d4  cbnz x0,0x7101dba0dc
7101dba0d8  mov x21,xzr
7101dba0dc  stp xzr,xzr,[x21, #0x10]
7101dba0e0  movi v1.2D,#0x0
7101dba0e4  stp xzr,xzr,[x21]
7101dba0e8  ldr q0,[sp, #0x20]
7101dba0ec  ldr x8,[x26]
7101dba0f0  mov v1.S[0x0],v0.S[0x0]
7101dba0f4  str x8,[x21]
7101dba0f8  ldr x8,[x26, #0x8]
7101dba0fc  ldr q0,[sp]
7101dba100  str x8,[x21, #0x8]
7101dba104  ldr x8,[x26, #0x10]
7101dba108  str x8,[x21, #0x10]
7101dba10c  mov v1.S[0x1],v0.S[0x0]
7101dba110  mov v0.16B,v8.16B
7101dba114  ldr x8,[x26, #0x18]
7101dba118  sub x20,x29,#0xc0
7101dba11c  sub x1,x29,#0xc0
7101dba120  mov x0,x21
7101dba124  str x8,[x21, #0x18]
7101dba128  str q1,[sp, #0x20]
7101dba12c  str q1,[x20]
7101dba130  bl 0x7103779770
7101dba134  cbz x21,0x7101dba140
7101dba138  mov x0,x21
7101dba13c  bl 0x710392eb40
7101dba140  mov w0,#0x10
7101dba144  mov w1,#0x20
7101dba148  bl 0x710392e290
7101dba14c  mov x21,x0
7101dba150  cbnz x0,0x7101dba19c
7101dba154  adrp x8,0x7105332000
7101dba158  ldr x0,[x8, #0xf00]
7101dba15c  cbz x0,0x7101dba198
7101dba160  mov w8,#0x20
7101dba164  str wzr,[sp, #0x1b8]
7101dba168  add x1,sp,#0x1b8
7101dba16c  stur x8,[x29, #-0xc0]
7101dba170  ldr x8,[x0]
7101dba174  ldr x8,[x8, #0x30]
7101dba178  sub x2,x29,#0xc0
7101dba17c  blr x8
7101dba180  tbz w0,#0x0,0x7101dba198
7101dba184  mov w0,#0x10
7101dba188  mov w1,#0x20
7101dba18c  bl 0x710392e290
7101dba190  mov x21,x0
7101dba194  cbnz x0,0x7101dba19c
7101dba198  mov x21,xzr
7101dba19c  stp xzr,xzr,[x21, #0x10]
7101dba1a0  sub x1,x29,#0xc0
7101dba1a4  stp xzr,xzr,[x21]
7101dba1a8  ldr x8,[x27]
7101dba1ac  ldr q0,[sp, #0x20]
7101dba1b0  mov x0,x21
7101dba1b4  str x8,[x21]
7101dba1b8  ldr x8,[x27, #0x8]
7101dba1bc  str x8,[x21, #0x8]
7101dba1c0  ldr x8,[x27, #0x10]
7101dba1c4  str x8,[x21, #0x10]
7101dba1c8  ldr x8,[x27, #0x18]
7101dba1cc  str x8,[x21, #0x18]
7101dba1d0  str q0,[x20]
7101dba1d4  mov v0.16B,v8.16B
7101dba1d8  bl 0x7103779770
7101dba1dc  cbz x21,0x7101dba1e8
7101dba1e0  mov x0,x21
7101dba1e4  bl 0x710392eb40
7101dba1e8  ldrb w8,[x19, #0x218]
7101dba1ec  cbz w8,0x7101dba354
7101dba1f0  ldrb w8,[x19, #0x24c]
7101dba1f4  cbnz w8,0x7101dba354
7101dba1f8  mov x9,#0x4904
7101dba1fc  movk x9,#0x1294, LSL #16
7101dba200  and x8,x25,#0xffffffffff
7101dba204  movk x9,#0x11, LSL #32
7101dba208  cmp x8,x9
7101dba20c  b.ne 0x7101dba234
7101dba210  adrp x8,0x710532f000
7101dba214  ldr x8,[x8, #0x730]
7101dba218  ldr x8,[x8, #0x8]
7101dba21c  ldr x0,[x8, #0x168]
7101dba220  mov x1,#0xa545
7101dba224  movk x1,#0x2d9a, LSL #16
7101dba228  movk x1,#0x1c, LSL #32
7101dba22c  bl 0x71032631a0
7101dba230  mov x25,x0
7101dba234  ldr x0,[x23, #0x2a8]
7101dba238  mov x1,x25
7101dba23c  mov w2,w28
7101dba240  bl 0x7103280ec0
7101dba244  ldr x22,[x23, #0x2a8]
7101dba248  mov w1,w0
7101dba24c  ldr x0,[x22, #0x8]
7101dba250  mov x2,#0x27a
7101dba254  movk x2,#0x5ac2, LSL #16
7101dba258  movk x2,#0x13, LSL #32
7101dba25c  mov w3,wzr
7101dba260  bl 0x710326a6e0
7101dba264  mov w21,wzr
7101dba268  tbz w0,#0x0,0x7101dba2a0
7101dba26c  mov x0,x22
7101dba270  mov x1,x25
7101dba274  mov w2,w28
7101dba278  bl 0x7103280ec0
7101dba27c  ldr x8,[x23, #0x2a8]
7101dba280  mov w1,w0
7101dba284  ldr x0,[x8, #0x8]
7101dba288  mov x2,#0xeb67
7101dba28c  movk x2,#0x190e, LSL #16
7101dba290  movk x2,#0x11, LSL #32
7101dba294  mov w3,wzr
7101dba298  bl 0x710326aa20
7101dba29c  mov w21,w0
7101dba2a0  adrp x0,0x710425f000
7101dba2a4  add x0,x0,#0xaa7
7101dba2a8  sub x8,x29,#0xc0
7101dba2ac  mov w1,w21
7101dba2b0  sub x20,x29,#0xc0
7101dba2b4  bl 0x71003a4ca0
7101dba2b8  ldr x0,[x19, #0xe0]
7101dba2bc  fmov s0,0x3f800000
7101dba2c0  add x1,x20,#0x8
7101dba2c4  bl 0x7103778300
7101dba2c8  cmp w21,#0x1
7101dba2cc  b.lt 0x7101dba354
7101dba2d0  mov w22,wzr
7101dba2d4  add x23,x23,#0x2a0
7101dba2d8  adrp x24,0x710425f000
7101dba2dc  add x24,x24,#0xaa7
7101dba2e0  mov x0,x23
7101dba2e4  mov x1,x25
7101dba2e8  mov w2,w28
7101dba2ec  mov w3,w22
7101dba2f0  mov w4,wzr
7101dba2f4  bl 0x7103281470
7101dba2f8  ldr x0,[sp, #0x30]
7101dba2fc  add x8,sp,#0x1b8
7101dba300  mov x1,x24
7101dba304  mov w2,w22
7101dba308  mov v8.16B,v0.16B
7101dba30c  mov v9.16B,v1.16B
7101dba310  bl 0x7103776910
7101dba314  ldr x0,[sp, #0x1c0]
7101dba318  ldr x8,[x0]
7101dba31c  cbz x8,0x7101dba334
7101dba320  ldrb w9,[x8, #0x58]
7101dba324  orr w9,w9,#0x10
7101dba328  str s8,[x8, #0x30]
7101dba32c  str s9,[x8, #0x34]
7101dba330  strb w9,[x8, #0x58]
7101dba334  adrp x8,0x710523d000
7101dba338  add x8,x8,#0x9a8
7101dba33c  stp x8,xzr,[sp, #0x1b8]
7101dba340  cbz x0,0x7101dba348
7101dba344  bl 0x710392eb40
7101dba348  add w22,w22,#0x1
7101dba34c  cmp w21,w22
7101dba350  b.ne 0x7101dba2e0
7101dba354  cbz x27,0x7101dba360
7101dba358  mov x0,x27
7101dba35c  bl 0x710392eb40
7101dba360  adrp x28,0x710523d000
7101dba364  add x28,x28,#0x9a8
7101dba368  cbz x26,0x7101dba374
7101dba36c  mov x0,x26
7101dba370  bl 0x710392eb40
7101dba374  ldrsh w8,[x19, #0x15a]
7101dba378  ldr x27,[sp, #0x30]
7101dba37c  mov w20,#0x4
7101dba380  cmn w8,#0x1
7101dba384  b.eq 0x7101dba408
7101dba388  cmp w8,#0x7cf
7101dba38c  mov w26,#0x301
7101dba390  movk w26,#0x2, LSL #16
7101dba394  b.gt 0x7101dba3f0
7101dba398  adrp x9,0x710532f000
7101dba39c  ldr x9,[x9, #0x730]
7101dba3a0  ldr x9,[x9, #0x8]
7101dba3a4  ldr x10,[x9, #0x1d8]
7101dba3a8  sxtw x8,w8
7101dba3ac  add x8,x10,x8, LSL #0x1
7101dba3b0  ldp x9,x10,[x10, #0x20]
7101dba3b4  sub x10,x10,x9
7101dba3b8  orr x11,xzr,#-0x3333333333333334
7101dba3bc  movk x11,#0xcccd
7101dba3c0  ldrh w8,[x8, #0x60]
7101dba3c4  asr x10,x10,#0x6
7101dba3c8  mul x10,x10,x11
7101dba3cc  cmp w10,w8
7101dba3d0  b.ls 0x7101dba41c
7101dba3d4  mov w11,#0x140
7101dba3d8  madd x9,x8,x11,x9
7101dba3dc  adrp x11,0x7105182000
7101dba3e0  add x11,x11,#0xb08
7101dba3e4  cmp x10,x8
7101dba3e8  csel x8,x9,x11,hi
7101dba3ec  ldrb w20,[x8, #0x6c]
7101dba3f0  ldrb w8,[x19, #0x168]
7101dba3f4  cbz w8,0x7101dba464
7101dba3f8  ldrb w8,[x19, #0x24c]
7101dba3fc  cbz w8,0x7101dba42c
7101dba400  ldp x8,x9,[x19, #0x1d0]
7101dba404  b 0x7101dba438
7101dba408  mov w26,#0x301
7101dba40c  movk w26,#0x2, LSL #16
7101dba410  ldrb w8,[x19, #0x168]
7101dba414  cbnz w8,0x7101dba3f8
7101dba418  b 0x7101dba464
7101dba41c  mov w20,#0x4
7101dba420  ldrb w8,[x19, #0x168]
7101dba424  cbnz w8,0x7101dba3f8
7101dba428  b 0x7101dba464
7101dba42c  ldp x8,x9,[x19, #0x1d0]
7101dba430  cmp x9,x8
7101dba434  b.eq 0x7101dba464
7101dba438  sub x9,x9,x8
7101dba43c  lsr x9,x9,#0x3
7101dba440  cbz w9,0x7101dba464
7101dba444  mov w10,wzr
7101dba448  ldr x11,[x8, w10, UXTW #0x3]
7101dba44c  ldrb w12,[x11, #0x10]
7101dba450  cmp w12,#0x1
7101dba454  b.eq 0x7101dbb020
7101dba458  add w10,w10,#0x1
7101dba45c  cmp w10,w9
7101dba460  b.cc 0x7101dba448
7101dba464  mov w21,wzr
7101dba468  ldr x22,[x19, #0x110]
7101dba46c  ldrb w23,[x19, #0x119]
7101dba470  adrp x1,0x7104280000
7101dba474  add x1,x1,#0xf31
7101dba478  add x8,sp,#0x128
7101dba47c  mov x0,x27
7101dba480  bl 0x7103776640
7101dba484  adrp x1,0x71042b2000
7101dba488  add x1,x1,#0x92e
7101dba48c  sub x8,x29,#0xc0
7101dba490  add x0,sp,#0x128
7101dba494  bl 0x7103776910
7101dba498  ldur x0,[x29, #-0xb8]
7101dba49c  ldr x8,[x0]
7101dba4a0  cbz x8,0x7101dba4b0
7101dba4a4  ldrb w9,[x8, #0x58]
7101dba4a8  and w9,w9,#0xfe
7101dba4ac  strb w9,[x8, #0x58]
7101dba4b0  stp x28,xzr,[x29, #-0xc0]
7101dba4b4  cbz x0,0x7101dba4bc
7101dba4b8  bl 0x710392eb40
7101dba4bc  adrp x0,0x71042b2000
7101dba4c0  add x0,x0,#0x93a
7101dba4c4  sub x8,x29,#0xc0
7101dba4c8  mov w1,#0x1
7101dba4cc  sub x24,x29,#0xc0
7101dba4d0  bl 0x71003a4ca0
7101dba4d4  adrp x1,0x710439d000
7101dba4d8  add x1,x1,#0xca6
7101dba4dc  add x8,sp,#0x1b8
7101dba4e0  add x0,sp,#0x128
7101dba4e4  bl 0x7103776910
7101dba4e8  add x1,x24,#0x8
7101dba4ec  add x0,sp,#0x1b8
7101dba4f0  bl 0x710377a120
7101dba4f4  ldr x0,[sp, #0x1c0]
7101dba4f8  stp x28,xzr,[sp, #0x1b8]
7101dba4fc  cbz x0,0x7101dba504
7101dba500  bl 0x710392eb40
7101dba504  sub w8,w20,#0x1
7101dba508  and x9,x8,#0xff
7101dba50c  lsl x9,x9,#0x3
7101dba510  lsr w9,w26,w9
7101dba514  cmp w8,#0x3
7101dba518  csel w1,w9,wzr,cc
7101dba51c  add x0,sp,#0x1b8
7101dba520  mov w2,wzr
7101dba524  add x24,sp,#0x1b8
7101dba528  bl 0x710339dde0
7101dba52c  cmp w20,#0x4
7101dba530  b.ne 0x7101dba6f4
7101dba534  ldr x24,[sp, #0x130]
7101dba538  fmov s0,0x3f800000
7101dba53c  adrp x1,0x71042b4000
7101dba540  add x1,x1,#0x792
7101dba544  mov x0,x24
7101dba548  bl 0x7103778300
7101dba54c  fmov s0,0x3f800000
7101dba550  adrp x1,0x71043ab000
7101dba554  add x1,x1,#0x85a
7101dba558  mov x0,x24
7101dba55c  bl 0x7103778300
7101dba560  ldr x0,[x19]
7101dba564  mov w3,#0x2
7101dba568  mov x1,x22
7101dba56c  mov w2,w23
7101dba570  bl 0x710323f330
7101dba574  mov x22,x0
7101dba578  adrp x1,0x7104401000
7101dba57c  add x1,x1,#0xd32
7101dba580  add x8,sp,#0x170
7101dba584  add x0,sp,#0x128
7101dba588  bl 0x7103776910
7101dba58c  ldr x21,[sp, #0x178]
7101dba590  mov x0,x21
7101dba594  mov x1,x22
7101dba598  bl 0x7103778b80
7101dba59c  stp x28,xzr,[sp, #0x170]
7101dba5a0  cbz x21,0x7101dba5ac
7101dba5a4  mov x0,x21
7101dba5a8  bl 0x710392eb40
7101dba5ac  fmov s0,0x3f800000
7101dba5b0  adrp x1,0x710425f000
7101dba5b4  add x1,x1,#0xa89
7101dba5b8  mov x0,x24
7101dba5bc  bl 0x7103778300
7101dba5c0  adrp x8,0x710523d000
7101dba5c4  add x8,x8,#0x988
7101dba5c8  stp x8,xzr,[sp, #0x128]
7101dba5cc  cbz x24,0x7101dba5e8
7101dba5d0  ldr x0,[x24, #0x18]
7101dba5d4  stp x28,xzr,[x24, #0x10]
7101dba5d8  cbz x0,0x7101dba5e0
7101dba5dc  bl 0x710392eb40
7101dba5e0  mov x0,x24
7101dba5e4  bl 0x710392eb40
7101dba5e8  ldp x8,x9,[x19, #0x120]
7101dba5ec  sub x8,x9,x8
7101dba5f0  ubfx x24,x8,#0x3,#0x20
7101dba5f4  adrp x1,0x71043be000
7101dba5f8  add x1,x1,#0xa83
7101dba5fc  sub x8,x29,#0xc0
7101dba600  mov x0,x27
7101dba604  mov w2,wzr
7101dba608  bl 0x7103776640
7101dba60c  fmov s8,0x3f800000
7101dba610  ldur x21,[x29, #-0xb8]
7101dba614  adrp x1,0x71042b4000
7101dba618  add x1,x1,#0x792
7101dba61c  mov v0.16B,v8.16B
7101dba620  mov x0,x21
7101dba624  bl 0x7103778300
7101dba628  mov v0.16B,v8.16B
7101dba62c  adrp x1,0x71043ab000
7101dba630  add x1,x1,#0x85a
7101dba634  mov x0,x21
7101dba638  bl 0x7103778300
7101dba63c  adrp x1,0x71042b2000
7101dba640  add x1,x1,#0x92e
7101dba644  add x8,sp,#0x1b8
7101dba648  sub x0,x29,#0xc0
7101dba64c  bl 0x7103776910
7101dba650  ldr x0,[sp, #0x1c0]
7101dba654  ldr x8,[x0]
7101dba658  cbz x8,0x7101dba668
7101dba65c  ldrb w9,[x8, #0x58]
7101dba660  and w9,w9,#0xfe
7101dba664  strb w9,[x8, #0x58]
7101dba668  stp x28,xzr,[sp, #0x1b8]
7101dba66c  cbz x0,0x7101dba674
7101dba670  bl 0x710392eb40
7101dba674  cbz x24,0x7101dba738
7101dba678  fmov s0,0x3f800000
7101dba67c  adrp x1,0x710425f000
7101dba680  add x1,x1,#0xa89
7101dba684  mov x0,x21
7101dba688  bl 0x7103778300
7101dba68c  ldp x8,x9,[x19, #0x120]
7101dba690  cmp x9,x8
7101dba694  b.eq 0x7101dbbc54
7101dba698  ldp x9,x10,[x19, #0x138]
7101dba69c  cmp x10,x9
7101dba6a0  b.eq 0x7101dbbc5c
7101dba6a4  ldr x0,[x19]
7101dba6a8  ldr x1,[x8]
7101dba6ac  mov w3,#0x2
7101dba6b0  ldrb w2,[x9]
7101dba6b4  bl 0x710323f330
7101dba6b8  mov x23,x0
7101dba6bc  adrp x1,0x7104401000
7101dba6c0  add x1,x1,#0xd32
7101dba6c4  add x8,sp,#0x1b8
7101dba6c8  sub x0,x29,#0xc0
7101dba6cc  bl 0x7103776910
7101dba6d0  ldr x22,[sp, #0x1c0]
7101dba6d4  mov x0,x22
7101dba6d8  mov x1,x23
7101dba6dc  bl 0x7103778b80
7101dba6e0  stp x28,xzr,[sp, #0x1b8]
7101dba6e4  cbz x22,0x7101dba74c
7101dba6e8  mov x0,x22
7101dba6ec  bl 0x710392eb40
7101dba6f0  b 0x7101dba74c
7101dba6f4  add x1,x24,#0x8
7101dba6f8  ldr x24,[sp, #0x130]
7101dba6fc  fmov s0,0x3f800000
7101dba700  mov x0,x24
7101dba704  bl 0x7103778300
7101dba708  cmp w20,#0x3
7101dba70c  b.eq 0x7101dbb10c
7101dba710  cmp w20,#0x2
7101dba714  b.eq 0x7101dbb028
7101dba718  cmp w20,#0x1
7101dba71c  b.ne 0x7101dba54c
7101dba720  cmp w21,#0x2
7101dba724  cset w20,eq
7101dba728  cmp w21,#0x3
7101dba72c  b.eq 0x7101dbb038
7101dba730  tbz w20,#0x0,0x7101dba54c
7101dba734  b 0x7101dbb03c
7101dba738  fmov s0,0x3f800000
7101dba73c  adrp x1,0x710432a000
7101dba740  add x1,x1,#0x66a
7101dba744  mov x0,x21
7101dba748  bl 0x7103778300
7101dba74c  adrp x8,0x710523d000
7101dba750  add x8,x8,#0x988
7101dba754  stp x8,xzr,[x29, #-0xc0]
7101dba758  cbz x21,0x7101dba774
7101dba75c  ldr x0,[x21, #0x18]
7101dba760  stp x28,xzr,[x21, #0x10]
7101dba764  cbz x0,0x7101dba76c
7101dba768  bl 0x710392eb40
7101dba76c  mov x0,x21
7101dba770  bl 0x710392eb40
7101dba774  adrp x1,0x71043be000
7101dba778  add x1,x1,#0xa83
7101dba77c  sub x8,x29,#0xc0
7101dba780  mov w2,#0x1
7101dba784  mov x0,x27
7101dba788  bl 0x7103776640
7101dba78c  fmov s8,0x3f800000
7101dba790  ldur x21,[x29, #-0xb8]
7101dba794  adrp x1,0x71042b4000
7101dba798  add x1,x1,#0x792
7101dba79c  mov v0.16B,v8.16B
7101dba7a0  mov x0,x21
7101dba7a4  bl 0x7103778300
7101dba7a8  mov v0.16B,v8.16B
7101dba7ac  adrp x1,0x71043ab000
7101dba7b0  add x1,x1,#0x85a
7101dba7b4  mov x0,x21
7101dba7b8  bl 0x7103778300
7101dba7bc  adrp x1,0x71042b2000
7101dba7c0  add x1,x1,#0x92e
7101dba7c4  add x8,sp,#0x1b8
7101dba7c8  sub x0,x29,#0xc0
7101dba7cc  bl 0x7103776910
7101dba7d0  ldr x0,[sp, #0x1c0]
7101dba7d4  ldr x8,[x0]
7101dba7d8  cbz x8,0x7101dba7e8
7101dba7dc  ldrb w9,[x8, #0x58]
7101dba7e0  and w9,w9,#0xfe
7101dba7e4  strb w9,[x8, #0x58]
7101dba7e8  stp x28,xzr,[sp, #0x1b8]
7101dba7ec  cbz x0,0x7101dba7f4
7101dba7f0  bl 0x710392eb40
7101dba7f4  cmp x24,#0x1
7101dba7f8  b.ls 0x7101dba884
7101dba7fc  fmov s0,0x3f800000
7101dba800  adrp x1,0x710425f000
7101dba804  add x1,x1,#0xa89
7101dba808  mov x0,x21
7101dba80c  bl 0x7103778300
7101dba810  ldp x8,x9,[x19, #0x120]
7101dba814  sub x9,x9,x8
7101dba818  asr x9,x9,#0x3
7101dba81c  cmp x9,#0x2
7101dba820  b.cc 0x7101dbbc54
7101dba824  ldp x9,x10,[x19, #0x138]
7101dba828  sub x10,x10,x9
7101dba82c  cmp x10,#0x2
7101dba830  b.cc 0x7101dbbc5c
7101dba834  ldr x0,[x19]
7101dba838  ldr x1,[x8, #0x8]
7101dba83c  mov w3,#0x2
7101dba840  ldrb w2,[x9, #0x1]
7101dba844  bl 0x710323f330
7101dba848  mov x23,x0
7101dba84c  adrp x1,0x7104401000
7101dba850  add x1,x1,#0xd32
7101dba854  add x8,sp,#0x1b8
7101dba858  sub x0,x29,#0xc0
7101dba85c  bl 0x7103776910
7101dba860  ldr x22,[sp, #0x1c0]
7101dba864  mov x0,x22
7101dba868  mov x1,x23
7101dba86c  bl 0x7103778b80
7101dba870  stp x28,xzr,[sp, #0x1b8]
7101dba874  cbz x22,0x7101dba898
7101dba878  mov x0,x22
7101dba87c  bl 0x710392eb40
7101dba880  b 0x7101dba898
7101dba884  fmov s0,0x3f800000
7101dba888  adrp x1,0x710432a000
7101dba88c  add x1,x1,#0x66a
7101dba890  mov x0,x21
7101dba894  bl 0x7103778300
7101dba898  adrp x8,0x710523d000
7101dba89c  add x8,x8,#0x988
7101dba8a0  stp x8,xzr,[x29, #-0xc0]
7101dba8a4  cbz x21,0x7101dba8c0
7101dba8a8  ldr x0,[x21, #0x18]
7101dba8ac  stp x28,xzr,[x21, #0x10]
7101dba8b0  cbz x0,0x7101dba8b8
7101dba8b4  bl 0x710392eb40
7101dba8b8  mov x0,x21
7101dba8bc  bl 0x710392eb40
7101dba8c0  adrp x1,0x71043be000
7101dba8c4  add x1,x1,#0xa83
7101dba8c8  sub x8,x29,#0xc0
7101dba8cc  mov w2,#0x2
7101dba8d0  mov x0,x27
7101dba8d4  bl 0x7103776640
7101dba8d8  fmov s8,0x3f800000
7101dba8dc  ldur x21,[x29, #-0xb8]
7101dba8e0  adrp x1,0x71042b4000
7101dba8e4  add x1,x1,#0x792
7101dba8e8  mov v0.16B,v8.16B
7101dba8ec  mov x0,x21
7101dba8f0  bl 0x7103778300
7101dba8f4  mov v0.16B,v8.16B
7101dba8f8  adrp x1,0x71043ab000
7101dba8fc  add x1,x1,#0x85a
7101dba900  mov x0,x21
7101dba904  bl 0x7103778300
7101dba908  adrp x1,0x71042b2000
7101dba90c  add x1,x1,#0x92e
7101dba910  add x8,sp,#0x1b8
7101dba914  sub x0,x29,#0xc0
7101dba918  bl 0x7103776910
7101dba91c  ldr x0,[sp, #0x1c0]
7101dba920  ldr x8,[x0]
7101dba924  cbz x8,0x7101dba934
7101dba928  ldrb w9,[x8, #0x58]
7101dba92c  and w9,w9,#0xfe
7101dba930  strb w9,[x8, #0x58]
7101dba934  stp x28,xzr,[sp, #0x1b8]
7101dba938  cbz x0,0x7101dba940
7101dba93c  bl 0x710392eb40
7101dba940  cmp x24,#0x2
7101dba944  b.ls 0x7101dba9d0
7101dba948  fmov s0,0x3f800000
7101dba94c  adrp x1,0x710425f000
7101dba950  add x1,x1,#0xa89
7101dba954  mov x0,x21
7101dba958  bl 0x7103778300
7101dba95c  ldp x8,x9,[x19, #0x120]
7101dba960  sub x9,x9,x8
7101dba964  asr x9,x9,#0x3
7101dba968  cmp x9,#0x3
7101dba96c  b.cc 0x7101dbbc54
7101dba970  ldp x9,x10,[x19, #0x138]
7101dba974  sub x10,x10,x9
7101dba978  cmp x10,#0x3
7101dba97c  b.cc 0x7101dbbc5c
7101dba980  ldr x0,[x19]
7101dba984  ldr x1,[x8, #0x10]
7101dba988  mov w3,#0x2
7101dba98c  ldrb w2,[x9, #0x2]
7101dba990  bl 0x710323f330
7101dba994  mov x23,x0
7101dba998  adrp x1,0x7104401000
7101dba99c  add x1,x1,#0xd32
7101dba9a0  add x8,sp,#0x1b8
7101dba9a4  sub x0,x29,#0xc0
7101dba9a8  bl 0x7103776910
7101dba9ac  ldr x22,[sp, #0x1c0]
7101dba9b0  mov x0,x22
7101dba9b4  mov x1,x23
7101dba9b8  bl 0x7103778b80
7101dba9bc  stp x28,xzr,[sp, #0x1b8]
7101dba9c0  cbz x22,0x7101dba9e4
7101dba9c4  mov x0,x22
7101dba9c8  bl 0x710392eb40
7101dba9cc  b 0x7101dba9e4
7101dba9d0  fmov s0,0x3f800000
7101dba9d4  adrp x1,0x710432a000
7101dba9d8  add x1,x1,#0x66a
7101dba9dc  mov x0,x21
7101dba9e0  bl 0x7103778300
7101dba9e4  adrp x24,0x710523d000
7101dba9e8  add x24,x24,#0x988
7101dba9ec  stp x24,xzr,[x29, #-0xc0]
7101dba9f0  cbz x21,0x7101dbaa0c
7101dba9f4  ldr x0,[x21, #0x18]
7101dba9f8  stp x28,xzr,[x21, #0x10]
7101dba9fc  cbz x0,0x7101dbaa04
7101dbaa00  bl 0x710392eb40
7101dbaa04  mov x0,x21
7101dbaa08  bl 0x710392eb40
7101dbaa0c  adrp x8,0x710532f000
7101dbaa10  ldr x8,[x8, #0x730]
7101dbaa14  ldr x8,[x8, #0x8]
7101dbaa18  str x8,[sp, #0x20]
7101dbaa1c  ldrsh w8,[x19, #0x15a]
7101dbaa20  mov w20,wzr
7101dbaa24  cmn w8,#0x1
7101dbaa28  b.eq 0x7101dbaa8c
7101dbaa2c  cmp w8,#0x7cf
7101dbaa30  b.gt 0x7101dbaa8c
7101dbaa34  ldr x9,[sp, #0x20]
7101dbaa38  ldr x10,[x9, #0x1d8]
7101dbaa3c  sxtw x8,w8
7101dbaa40  add x8,x10,x8, LSL #0x1
7101dbaa44  ldp x9,x10,[x10, #0x20]
7101dbaa48  sub x10,x10,x9
7101dbaa4c  orr x11,xzr,#-0x3333333333333334
7101dbaa50  movk x11,#0xcccd
7101dbaa54  ldrh w8,[x8, #0x60]
7101dbaa58  asr x10,x10,#0x6
7101dbaa5c  mul x10,x10,x11
7101dbaa60  cmp w10,w8
7101dbaa64  b.ls 0x7101dbaa88
7101dbaa68  mov w11,#0x140
7101dbaa6c  madd x9,x8,x11,x9
7101dbaa70  adrp x11,0x7105182000
7101dbaa74  add x11,x11,#0xb08
7101dbaa78  cmp x10,x8
7101dbaa7c  csel x8,x9,x11,hi
7101dbaa80  ldrb w20,[x8, #0x6c]
7101dbaa84  b 0x7101dbaa8c
7101dbaa88  mov w20,wzr
7101dbaa8c  ldr x8,[x19, #0x2c0]
7101dbaa90  ldr x25,[x19, #0x2b8]
7101dbaa94  cmp x8,x25
7101dbaa98  b.eq 0x7101dbac54
7101dbaa9c  ldrb w8,[x25]
7101dbaaa0  cmp w8,#0x1
7101dbaaa4  b.ne 0x7101dbac54
7101dbaaa8  adrp x1,0x710424f000
7101dbaaac  add x1,x1,#0x9d3
7101dbaab0  add x8,sp,#0x1b8
7101dbaab4  mov x0,x27
7101dbaab8  mov w2,wzr
7101dbaabc  bl 0x7103776640
7101dbaac0  ldr x21,[sp, #0x1c0]
7101dbaac4  ldr x8,[x21, #0x8]
7101dbaac8  cbz x8,0x7101dbaae0
7101dbaacc  ldr x8,[x8, #0x18]
7101dbaad0  cbz x8,0x7101dbaae0
7101dbaad4  ldrb w9,[x8, #0x58]
7101dbaad8  orr w9,w9,#0x1
7101dbaadc  strb w9,[x8, #0x58]
7101dbaae0  adrp x1,0x710439d000
7101dbaae4  add x1,x1,#0xca6
7101dbaae8  sub x8,x29,#0xc0
7101dbaaec  add x0,sp,#0x1b8
7101dbaaf0  bl 0x7103776910
7101dbaaf4  ldur x0,[x29, #-0xb8]
7101dbaaf8  ldr x8,[x0]
7101dbaafc  cbz x8,0x7101dbab0c
7101dbab00  ldrb w9,[x8, #0x58]
7101dbab04  and w9,w9,#0xfe
7101dbab08  strb w9,[x8, #0x58]
7101dbab0c  str x21,[sp]
7101dbab10  stp x28,xzr,[x29, #-0xc0]
7101dbab14  cbz x0,0x7101dbab1c
7101dbab18  bl 0x710392eb40
7101dbab1c  ldr x8,[sp, #0x20]
7101dbab20  ldr x21,[x25, #0x8]
7101dbab24  mov x1,x21
7101dbab28  ldr x0,[x8, #0x168]
7101dbab2c  ldrb w22,[x25, #0x10]
7101dbab30  bl 0x71032638e0
7101dbab34  tst w0,#0x1
7101dbab38  ldr x0,[sp]
7101dbab3c  fmov s0,0x3f800000
7101dbab40  adrp x1,0x710425f000
7101dbab44  add x1,x1,#0xa89
7101dbab48  csel w23,wzr,w22,ne
7101dbab4c  bl 0x7103778300
7101dbab50  ldr x22,[x19]
7101dbab54  mov w2,#0x2
7101dbab58  mov x0,x21
7101dbab5c  mov w1,w23
7101dbab60  bl 0x7103238a70
7101dbab64  tst x0,#0xffffffffff
7101dbab68  stur x0,[x29, #-0xc0]
7101dbab6c  b.eq 0x7101dbab84
7101dbab70  ldr x0,[x22]
7101dbab74  ldrsw x2,[x0, #0x70]
7101dbab78  ldr w3,[x0, #0x68]
7101dbab7c  sub x1,x29,#0xc0
7101dbab80  bl 0x710323c4e0
7101dbab84  adrp x1,0x7104401000
7101dbab88  add x1,x1,#0xd32
7101dbab8c  sub x8,x29,#0xc0
7101dbab90  add x0,sp,#0x1b8
7101dbab94  bl 0x7103776910
7101dbab98  ldr x0,[x19]
7101dbab9c  mov w3,#0x2
7101dbaba0  mov x1,x21
7101dbaba4  mov w2,w23
7101dbaba8  bl 0x710323f330
7101dbabac  ldur x21,[x29, #-0xb8]
7101dbabb0  mov x1,x0
7101dbabb4  mov x0,x21
7101dbabb8  bl 0x7103778b80
7101dbabbc  stp x28,xzr,[x29, #-0xc0]
7101dbabc0  cbz x21,0x7101dbabcc
7101dbabc4  mov x0,x21
7101dbabc8  bl 0x710392eb40
7101dbabcc  ldrb w8,[x25, #0x12]
7101dbabd0  sub w8,w8,#0x1
7101dbabd4  and x9,x8,#0xff
7101dbabd8  ldr w22,[x19, #0x2b0]
7101dbabdc  cmp w8,#0x3
7101dbabe0  adrp x1,0x7104308000
7101dbabe4  add x1,x1,#0x9cf
7101dbabe8  sub x8,x29,#0xc0
7101dbabec  lsl x9,x9,#0x3
7101dbabf0  lsr w9,w26,w9
7101dbabf4  add x0,sp,#0x1b8
7101dbabf8  csel w21,w9,wzr,cc
7101dbabfc  bl 0x7103776910
7101dbac00  adrp x1,0x7104308000
7101dbac04  add x1,x1,#0x98e
7101dbac08  sub x0,x29,#0xc0
7101dbac0c  mov w2,#0x1
7101dbac10  mov w3,w22
7101dbac14  bl 0x710377a280
7101dbac18  ldur x0,[x29, #-0xb8]
7101dbac1c  stp x28,xzr,[x29, #-0xc0]
7101dbac20  cbz x0,0x7101dbac28
7101dbac24  bl 0x710392eb40
7101dbac28  ldrb w8,[x25, #0x12]
7101dbac2c  cmp w8,#0x3
7101dbac30  b.eq 0x7101dbb15c
7101dbac34  cmp w8,#0x2
7101dbac38  b.eq 0x7101dbb16c
7101dbac3c  cmp w8,#0x1
7101dbac40  b.ne 0x7101dbb180
7101dbac44  cmp w20,#0x2
7101dbac48  cset w8,eq
7101dbac4c  cmp w20,#0x3
7101dbac50  b 0x7101dbb178
7101dbac54  adrp x1,0x710424f000
7101dbac58  add x1,x1,#0x9d3
7101dbac5c  sub x8,x29,#0xc0
7101dbac60  mov x0,x27
7101dbac64  mov w2,wzr
7101dbac68  bl 0x7103776640
7101dbac6c  ldur x21,[x29, #-0xb8]
7101dbac70  ldr x8,[x21, #0x8]
7101dbac74  cbz x8,0x7101dbac8c
7101dbac78  ldr x8,[x8, #0x18]
7101dbac7c  cbz x8,0x7101dbac8c
7101dbac80  ldrb w9,[x8, #0x58]
7101dbac84  and w9,w9,#0xfe
7101dbac88  strb w9,[x8, #0x58]
7101dbac8c  adrp x23,0x7105329000
7101dbac90  stp x24,xzr,[x29, #-0xc0]
7101dbac94  cbz x21,0x7101dbacb0
7101dbac98  ldr x0,[x21, #0x18]
7101dbac9c  stp x28,xzr,[x21, #0x10]
7101dbaca0  cbz x0,0x7101dbaca8
7101dbaca4  bl 0x710392eb40
7101dbaca8  mov x0,x21
7101dbacac  bl 0x710392eb40
7101dbacb0  adrp x1,0x710424f000
7101dbacb4  add x1,x1,#0x9d3
7101dbacb8  sub x8,x29,#0xc0
7101dbacbc  mov w2,#0x1
7101dbacc0  mov x0,x27
7101dbacc4  bl 0x7103776640
7101dbacc8  ldur x21,[x29, #-0xb8]
7101dbaccc  ldr x8,[x21, #0x8]
7101dbacd0  cbz x8,0x7101dbace8
7101dbacd4  ldr x8,[x8, #0x18]
7101dbacd8  cbz x8,0x7101dbace8
7101dbacdc  ldrb w9,[x8, #0x58]
7101dbace0  and w9,w9,#0xfe
7101dbace4  strb w9,[x8, #0x58]
7101dbace8  stp x24,xzr,[x29, #-0xc0]
7101dbacec  cbz x21,0x7101dbad08
7101dbacf0  ldr x0,[x21, #0x18]
7101dbacf4  stp x28,xzr,[x21, #0x10]
7101dbacf8  cbz x0,0x7101dbad00
7101dbacfc  bl 0x710392eb40
7101dbad00  mov x0,x21
7101dbad04  bl 0x710392eb40
7101dbad08  adrp x1,0x710424f000
7101dbad0c  add x1,x1,#0x9d3
7101dbad10  sub x8,x29,#0xc0
7101dbad14  mov w2,#0x2
7101dbad18  mov x0,x27
7101dbad1c  bl 0x7103776640
7101dbad20  ldur x21,[x29, #-0xb8]
7101dbad24  ldr x8,[x21, #0x8]
7101dbad28  cbz x8,0x7101dbad40
7101dbad2c  ldr x8,[x8, #0x18]
7101dbad30  cbz x8,0x7101dbad40
7101dbad34  ldrb w9,[x8, #0x58]
7101dbad38  and w9,w9,#0xfe
7101dbad3c  strb w9,[x8, #0x58]
7101dbad40  stp x24,xzr,[x29, #-0xc0]
7101dbad44  cbz x21,0x7101dbad60
7101dbad48  ldr x0,[x21, #0x18]
7101dbad4c  stp x28,xzr,[x21, #0x10]
7101dbad50  cbz x0,0x7101dbad58
7101dbad54  bl 0x710392eb40
7101dbad58  mov x0,x21
7101dbad5c  bl 0x710392eb40
7101dbad60  adrp x1,0x710424f000
7101dbad64  add x1,x1,#0x9d3
7101dbad68  sub x8,x29,#0xc0
7101dbad6c  orr w2,wzr,#0x3
7101dbad70  mov x0,x27
7101dbad74  bl 0x7103776640
7101dbad78  ldur x21,[x29, #-0xb8]
7101dbad7c  ldr x8,[x21, #0x8]
7101dbad80  cbz x8,0x7101dbad98
7101dbad84  ldr x8,[x8, #0x18]
7101dbad88  cbz x8,0x7101dbad98
7101dbad8c  ldrb w9,[x8, #0x58]
7101dbad90  and w9,w9,#0xfe
7101dbad94  strb w9,[x8, #0x58]
7101dbad98  stp x24,xzr,[x29, #-0xc0]
7101dbad9c  cbz x21,0x7101dbadb8
7101dbada0  ldr x0,[x21, #0x18]
7101dbada4  stp x28,xzr,[x21, #0x10]
7101dbada8  cbz x0,0x7101dbadb0
7101dbadac  bl 0x710392eb40
7101dbadb0  mov x0,x21
7101dbadb4  bl 0x710392eb40
7101dbadb8  adrp x1,0x710424f000
7101dbadbc  add x1,x1,#0x9d3
7101dbadc0  sub x8,x29,#0xc0
7101dbadc4  mov w2,#0x4
7101dbadc8  mov x0,x27
7101dbadcc  bl 0x7103776640
7101dbadd0  ldur x21,[x29, #-0xb8]
7101dbadd4  ldr x8,[x21, #0x8]
7101dbadd8  cbz x8,0x7101dbadf0
7101dbaddc  ldr x8,[x8, #0x18]
7101dbade0  cbz x8,0x7101dbadf0
7101dbade4  ldrb w9,[x8, #0x58]
7101dbade8  and w9,w9,#0xfe
7101dbadec  strb w9,[x8, #0x58]
7101dbadf0  stp x24,xzr,[x29, #-0xc0]
7101dbadf4  cbz x21,0x7101dbae10
7101dbadf8  ldr x0,[x21, #0x18]
7101dbadfc  stp x28,xzr,[x21, #0x10]
7101dbae00  cbz x0,0x7101dbae08
7101dbae04  bl 0x710392eb40
7101dbae08  mov x0,x21
7101dbae0c  bl 0x710392eb40
7101dbae10  adrp x1,0x710424f000
7101dbae14  add x1,x1,#0x9d3
7101dbae18  mov w2,#0x5
7101dbae1c  sub x8,x29,#0xc0
7101dbae20  mov x0,x27
7101dbae24  bl 0x7103776640
7101dbae28  ldur x21,[x29, #-0xb8]
7101dbae2c  ldr x8,[x21, #0x8]
7101dbae30  cbz x8,0x7101dbae48
7101dbae34  ldr x8,[x8, #0x18]
7101dbae38  cbz x8,0x7101dbae48
7101dbae3c  ldrb w9,[x8, #0x58]
7101dbae40  and w9,w9,#0xfe
7101dbae44  strb w9,[x8, #0x58]
7101dbae48  stp x24,xzr,[x29, #-0xc0]
7101dbae4c  cbz x21,0x7101dbae68
7101dbae50  ldr x0,[x21, #0x18]
7101dbae54  stp x28,xzr,[x21, #0x10]
7101dbae58  cbz x0,0x7101dbae60
7101dbae5c  bl 0x710392eb40
7101dbae60  mov x0,x21
7101dbae64  bl 0x710392eb40
7101dbae68  adrp x1,0x710424f000
7101dbae6c  add x1,x1,#0x9d3
7101dbae70  sub x8,x29,#0xc0
7101dbae74  orr w2,wzr,#0x6
7101dbae78  mov x0,x27
7101dbae7c  bl 0x7103776640
7101dbae80  ldur x21,[x29, #-0xb8]
7101dbae84  ldr x8,[x21, #0x8]
7101dbae88  cbz x8,0x7101dbaea0
7101dbae8c  ldr x8,[x8, #0x18]
7101dbae90  cbz x8,0x7101dbaea0
7101dbae94  ldrb w9,[x8, #0x58]
7101dbae98  and w9,w9,#0xfe
7101dbae9c  strb w9,[x8, #0x58]
7101dbaea0  stp x24,xzr,[x29, #-0xc0]
7101dbaea4  cbz x21,0x7101dbaec0
7101dbaea8  ldr x0,[x21, #0x18]
7101dbaeac  stp x28,xzr,[x21, #0x10]
7101dbaeb0  cbz x0,0x7101dbaeb8
7101dbaeb4  bl 0x710392eb40
7101dbaeb8  mov x0,x21
7101dbaebc  bl 0x710392eb40
7101dbaec0  adrp x1,0x710424f000
7101dbaec4  add x1,x1,#0x9d3
7101dbaec8  sub x8,x29,#0xc0
7101dbaecc  orr w2,wzr,#0x7
7101dbaed0  mov x0,x27
7101dbaed4  bl 0x7103776640
7101dbaed8  ldur x21,[x29, #-0xb8]
7101dbaedc  ldr x8,[x21, #0x8]
7101dbaee0  cbz x8,0x7101dbaef8
7101dbaee4  ldr x8,[x8, #0x18]
7101dbaee8  cbz x8,0x7101dbaef8
7101dbaeec  ldrb w9,[x8, #0x58]
7101dbaef0  and w9,w9,#0xfe
7101dbaef4  strb w9,[x8, #0x58]
7101dbaef8  stp x24,xzr,[x29, #-0xc0]
7101dbaefc  cbz x21,0x7101dbaf18
7101dbaf00  ldr x0,[x21, #0x18]
7101dbaf04  stp x28,xzr,[x21, #0x10]
7101dbaf08  cbz x0,0x7101dbaf10
7101dbaf0c  bl 0x710392eb40
7101dbaf10  mov x0,x21
7101dbaf14  bl 0x710392eb40
7101dbaf18  adrp x1,0x710424f000
7101dbaf1c  add x1,x1,#0x9d3
7101dbaf20  sub x8,x29,#0xc0
7101dbaf24  mov w2,#0x8
7101dbaf28  mov x0,x27
7101dbaf2c  bl 0x7103776640
7101dbaf30  ldur x21,[x29, #-0xb8]
7101dbaf34  ldr x8,[x21, #0x8]
7101dbaf38  cbz x8,0x7101dbaf50
7101dbaf3c  ldr x8,[x8, #0x18]
7101dbaf40  cbz x8,0x7101dbaf50
7101dbaf44  ldrb w9,[x8, #0x58]
7101dbaf48  and w9,w9,#0xfe
7101dbaf4c  strb w9,[x8, #0x58]
7101dbaf50  stp x24,xzr,[x29, #-0xc0]
7101dbaf54  cbz x21,0x7101dbaf70
7101dbaf58  ldr x0,[x21, #0x18]
7101dbaf5c  stp x28,xzr,[x21, #0x10]
7101dbaf60  cbz x0,0x7101dbaf68
7101dbaf64  bl 0x710392eb40
7101dbaf68  mov x0,x21
7101dbaf6c  bl 0x710392eb40
7101dbaf70  adrp x1,0x710424f000
7101dbaf74  add x1,x1,#0x9d3
7101dbaf78  mov w2,#0x9
7101dbaf7c  sub x8,x29,#0xc0
7101dbaf80  mov x0,x27
7101dbaf84  bl 0x7103776640
7101dbaf88  ldur x21,[x29, #-0xb8]
7101dbaf8c  ldr x8,[x21, #0x8]
7101dbaf90  cbz x8,0x7101dbafa8
7101dbaf94  ldr x8,[x8, #0x18]
7101dbaf98  cbz x8,0x7101dbafa8
7101dbaf9c  ldrb w9,[x8, #0x58]
7101dbafa0  and w9,w9,#0xfe
7101dbafa4  strb w9,[x8, #0x58]
7101dbafa8  stp x24,xzr,[x29, #-0xc0]
7101dbafac  cbz x21,0x7101dbafc8
7101dbafb0  ldr x0,[x21, #0x18]
7101dbafb4  stp x28,xzr,[x21, #0x10]
7101dbafb8  cbz x0,0x7101dbafc0
7101dbafbc  bl 0x710392eb40
7101dbafc0  mov x0,x21
7101dbafc4  bl 0x710392eb40
7101dbafc8  adrp x1,0x710424f000
7101dbafcc  add x1,x1,#0x9d3
7101dbafd0  mov w2,#0xa
7101dbafd4  sub x8,x29,#0xc0
7101dbafd8  mov x0,x27
7101dbafdc  bl 0x7103776640
7101dbafe0  ldur x21,[x29, #-0xb8]
7101dbafe4  ldr x8,[x21, #0x8]
7101dbafe8  cbz x8,0x7101dbb000
7101dbafec  ldr x8,[x8, #0x18]
7101dbaff0  cbz x8,0x7101dbb000
7101dbaff4  ldrb w9,[x8, #0x58]
7101dbaff8  and w9,w9,#0xfe
7101dbaffc  strb w9,[x8, #0x58]
7101dbb000  stp x24,xzr,[x29, #-0xc0]
7101dbb004  cbz x21,0x7101dbb514
7101dbb008  ldr x0,[x21, #0x18]
7101dbb00c  stp x28,xzr,[x21, #0x10]
7101dbb010  cbz x0,0x7101dbb018
7101dbb014  bl 0x710392eb40
7101dbb018  mov x0,x21
7101dbb01c  b 0x7101dbb510
7101dbb020  ldrb w21,[x11, #0x48]
7101dbb024  b 0x7101dba468
7101dbb028  cmp w21,#0x3
7101dbb02c  cset w20,eq
7101dbb030  cmp w21,#0x1
7101dbb034  b.ne 0x7101dba730
7101dbb038  mov w20,#0xffffffff
7101dbb03c  add x0,sp,#0x170
7101dbb040  add x25,sp,#0x170
7101dbb044  bl 0x7103776290
7101dbb048  str wzr,[sp, #0x180]
7101dbb04c  strh wzr,[sp, #0x184]
7101dbb050  ldr x8,[x24]
7101dbb054  ldr x9,[sp, #0x178]
7101dbb058  str x8,[x9]
7101dbb05c  ldr x8,[x24, #0x8]
7101dbb060  ldr x9,[sp, #0x178]
7101dbb064  str x8,[x9, #0x8]
7101dbb068  ldr x8,[sp, #0x178]
7101dbb06c  cmp x8,x24
7101dbb070  b.eq 0x7101dbb0b4
7101dbb074  ldr x9,[x24, #0x18]
7101dbb078  ldr x9,[x9]
7101dbb07c  ldr x10,[x8, #0x18]
7101dbb080  str x9,[x10]
7101dbb084  ldr x9,[x24, #0x18]
7101dbb088  ldr x9,[x9, #0x8]
7101dbb08c  ldr x10,[x8, #0x18]
7101dbb090  str x9,[x10, #0x8]
7101dbb094  ldr x9,[x24, #0x18]
7101dbb098  ldr x9,[x9, #0x10]
7101dbb09c  ldr x10,[x8, #0x18]
7101dbb0a0  str x9,[x10, #0x10]
7101dbb0a4  ldr x9,[x24, #0x18]
7101dbb0a8  ldr x9,[x9, #0x18]
7101dbb0ac  ldr x8,[x8, #0x18]
7101dbb0b0  str x9,[x8, #0x18]
7101dbb0b4  cmp w20,#0x0
7101dbb0b8  mov w8,#0x1
7101dbb0bc  cset w9,gt
7101dbb0c0  strb w8,[sp, #0x185]
7101dbb0c4  str w8,[sp, #0x180]
7101dbb0c8  strb w9,[sp, #0x184]
7101dbb0cc  ldr x21,[x19, #0x2e8]
7101dbb0d0  ldr x8,[x19, #0x2f0]
7101dbb0d4  cmp x21,x8
7101dbb0d8  b.eq 0x7101dbb120
7101dbb0dc  add x1,sp,#0x170
7101dbb0e0  mov x0,x21
7101dbb0e4  add x20,x25,#0x10
7101dbb0e8  bl 0x7103776390
7101dbb0ec  ldr w8,[x20]
7101dbb0f0  ldrh w9,[x20, #0x4]
7101dbb0f4  strh w9,[x21, #0x14]
7101dbb0f8  str w8,[x21, #0x10]
7101dbb0fc  ldr x8,[x19, #0x2e8]
7101dbb100  add x8,x8,#0x18
7101dbb104  str x8,[x19, #0x2e8]
7101dbb108  b 0x7101dbb12c
7101dbb10c  cmp w21,#0x1
7101dbb110  cset w20,eq
7101dbb114  cmp w21,#0x2
7101dbb118  b.ne 0x7101dba730
7101dbb11c  b 0x7101dbb038
7101dbb120  add x0,x19,#0x2e0
7101dbb124  add x1,sp,#0x170
7101dbb128  bl 0x7101dbbf10
7101dbb12c  ldr x21,[sp, #0x178]
7101dbb130  adrp x8,0x710523d000
7101dbb134  add x8,x8,#0x988
7101dbb138  stp x8,xzr,[sp, #0x170]
7101dbb13c  cbz x21,0x7101dba560
7101dbb140  ldr x0,[x21, #0x18]
7101dbb144  stp x28,xzr,[x21, #0x10]
7101dbb148  cbz x0,0x7101dbb150
7101dbb14c  bl 0x710392eb40
7101dbb150  mov x0,x21
7101dbb154  bl 0x710392eb40
7101dbb158  b 0x7101dba560
7101dbb15c  cmp w20,#0x1
7101dbb160  cset w8,eq
7101dbb164  cmp w20,#0x2
7101dbb168  b 0x7101dbb178
7101dbb16c  cmp w20,#0x3
7101dbb170  cset w8,eq
7101dbb174  cmp w20,#0x1
7101dbb178  csinv w23,w8,wzr,ne
7101dbb17c  b 0x7101dbb184
7101dbb180  mov w23,wzr
7101dbb184  ldrb w2,[x25, #0x11]
7101dbb188  add x0,sp,#0x1b8
7101dbb18c  mov w1,w21
7101dbb190  mov w3,w23
7101dbb194  mov w4,wzr
7101dbb198  bl 0x71025b12c0
7101dbb19c  cbz w23,0x7101dbb2a0
7101dbb1a0  sub x0,x29,#0xc0
7101dbb1a4  sub x20,x29,#0xc0
7101dbb1a8  bl 0x7103776290
7101dbb1ac  ldr x11,[sp]
7101dbb1b0  stur wzr,[x29, #-0xb0]
7101dbb1b4  sturh wzr,[x29, #-0xac]
7101dbb1b8  ldr x8,[x11]
7101dbb1bc  ldur x9,[x29, #-0xb8]
7101dbb1c0  str x8,[x9]
7101dbb1c4  ldr x8,[x11, #0x8]
7101dbb1c8  ldur x9,[x29, #-0xb8]
7101dbb1cc  str x8,[x9, #0x8]
7101dbb1d0  ldur x8,[x29, #-0xb8]
7101dbb1d4  cmp x8,x11
7101dbb1d8  b.eq 0x7101dbb21c
7101dbb1dc  ldr x9,[x11, #0x18]
7101dbb1e0  ldr x9,[x9]
7101dbb1e4  ldr x10,[x8, #0x18]
7101dbb1e8  str x9,[x10]
7101dbb1ec  ldr x9,[x11, #0x18]
7101dbb1f0  ldr x9,[x9, #0x8]
7101dbb1f4  ldr x10,[x8, #0x18]
7101dbb1f8  str x9,[x10, #0x8]
7101dbb1fc  ldr x9,[x11, #0x18]
7101dbb200  ldr x9,[x9, #0x10]
7101dbb204  ldr x10,[x8, #0x18]
7101dbb208  str x9,[x10, #0x10]
7101dbb20c  ldr x9,[x11, #0x18]
7101dbb210  ldr x9,[x9, #0x18]
7101dbb214  ldr x8,[x8, #0x18]
7101dbb218  str x9,[x8, #0x18]
7101dbb21c  cmp w23,#0x0
7101dbb220  cset w8,gt
7101dbb224  sturb w8,[x29, #-0xac]
7101dbb228  mov w8,#0x1
7101dbb22c  sturb wzr,[x29, #-0xab]
7101dbb230  stur w8,[x29, #-0xb0]
7101dbb234  ldr x21,[x19, #0x2e8]
7101dbb238  ldr x8,[x19, #0x2f0]
7101dbb23c  cmp x21,x8
7101dbb240  b.eq 0x7101dbb270
7101dbb244  sub x1,x29,#0xc0
7101dbb248  mov x0,x21
7101dbb24c  bl 0x7103776390
7101dbb250  ldr w8,[x20, #0x10]!
7101dbb254  ldrh w9,[x20, #0x4]
7101dbb258  strh w9,[x21, #0x14]
7101dbb25c  str w8,[x21, #0x10]
7101dbb260  ldr x8,[x19, #0x2e8]
7101dbb264  add x8,x8,#0x18
7101dbb268  str x8,[x19, #0x2e8]
7101dbb26c  b 0x7101dbb27c
7101dbb270  add x0,x19,#0x2e0
7101dbb274  sub x1,x29,#0xc0
7101dbb278  bl 0x7101dbbf10
7101dbb27c  ldur x21,[x29, #-0xb8]
7101dbb280  stp x24,xzr,[x29, #-0xc0]
7101dbb284  cbz x21,0x7101dbb2a0
7101dbb288  ldr x0,[x21, #0x18]
7101dbb28c  stp x28,xzr,[x21, #0x10]
7101dbb290  cbz x0,0x7101dbb298
7101dbb294  bl 0x710392eb40
7101dbb298  mov x0,x21
7101dbb29c  bl 0x710392eb40
7101dbb2a0  fmov s8,0x3f800000
7101dbb2a4  orr x26,xzr,#-0x5555555555555556
7101dbb2a8  mov x20,xzr
7101dbb2ac  adrp x23,0x710424f000
7101dbb2b0  add x23,x23,#0x9d3
7101dbb2b4  mov w25,#0x1
7101dbb2b8  movk x26,#0xaaab
7101dbb2bc  sub x8,x29,#0xc0
7101dbb2c0  mov x0,x27
7101dbb2c4  mov x1,x23
7101dbb2c8  mov w2,w25
7101dbb2cc  bl 0x7103776640
7101dbb2d0  ldr x9,[x19, #0x2c0]
7101dbb2d4  ldr x8,[x19, #0x2b8]
7101dbb2d8  sub x9,x9,x8
7101dbb2dc  asr x9,x9,#0x3
7101dbb2e0  mul x9,x9,x26
7101dbb2e4  cmp x9,x25
7101dbb2e8  b.ls 0x7101dbb460
7101dbb2ec  ldur x21,[x29, #-0xb8]
7101dbb2f0  ldr x9,[x21, #0x8]
7101dbb2f4  cbz x9,0x7101dbb30c
7101dbb2f8  ldr x9,[x9, #0x18]
7101dbb2fc  cbz x9,0x7101dbb30c
7101dbb300  ldrb w10,[x9, #0x58]
7101dbb304  orr w10,w10,#0x1
7101dbb308  strb w10,[x9, #0x58]
7101dbb30c  add x24,x8,x20
7101dbb310  ldr x8,[sp, #0x20]
7101dbb314  ldr x28,[x24, #0x20]
7101dbb318  ldrb w22,[x24, #0x28]
7101dbb31c  mov x1,x28
7101dbb320  ldr x0,[x8, #0x168]
7101dbb324  bl 0x71032638e0
7101dbb328  tst w0,#0x1
7101dbb32c  ldr x27,[x19]
7101dbb330  csel w22,wzr,w22,ne
7101dbb334  mov w2,#0x2
7101dbb338  mov x0,x28
7101dbb33c  mov w1,w22
7101dbb340  bl 0x7103238a70
7101dbb344  tst x0,#0xffffffffff
7101dbb348  str x0,[sp, #0x170]
7101dbb34c  b.eq 0x7101dbb364
7101dbb350  ldr x0,[x27]
7101dbb354  ldrsw x2,[x0, #0x70]
7101dbb358  ldr w3,[x0, #0x68]
7101dbb35c  add x1,sp,#0x170
7101dbb360  bl 0x710323c4e0
7101dbb364  add x8,sp,#0x170
7101dbb368  sub x0,x29,#0xc0
7101dbb36c  adrp x1,0x7104401000
7101dbb370  add x1,x1,#0xd32
7101dbb374  bl 0x7103776910
7101dbb378  ldr x0,[x19]
7101dbb37c  ldr x1,[x24, #0x20]
7101dbb380  mov w3,#0x2
7101dbb384  mov w2,w22
7101dbb388  bl 0x710323f330
7101dbb38c  ldr x22,[sp, #0x178]
7101dbb390  mov x1,x0
7101dbb394  mov x0,x22
7101dbb398  bl 0x7103778b80
7101dbb39c  adrp x28,0x710523d000
7101dbb3a0  add x28,x28,#0x9a8
7101dbb3a4  stp x28,xzr,[sp, #0x170]
7101dbb3a8  cbz x22,0x7101dbb3b4
7101dbb3ac  mov x0,x22
7101dbb3b0  bl 0x710392eb40
7101dbb3b4  mov v0.16B,v8.16B
7101dbb3b8  mov x0,x21
7101dbb3bc  adrp x1,0x71042b4000
7101dbb3c0  add x1,x1,#0x792
7101dbb3c4  bl 0x7103778300
7101dbb3c8  ldrb w8,[x24, #0x29]
7101dbb3cc  ldr x27,[sp, #0x30]
7101dbb3d0  sub x0,x29,#0xc0
7101dbb3d4  cmp w8,#0x2
7101dbb3d8  add x8,sp,#0x170
7101dbb3dc  adrp x1,0x71042b2000
7101dbb3e0  add x1,x1,#0x92e
7101dbb3e4  b.cc 0x7101dbb48c
7101dbb3e8  bl 0x7103776910
7101dbb3ec  ldr x0,[sp, #0x178]
7101dbb3f0  ldr x8,[x0]
7101dbb3f4  cbz x8,0x7101dbb404
7101dbb3f8  ldrb w9,[x8, #0x58]
7101dbb3fc  orr w9,w9,#0x1
7101dbb400  strb w9,[x8, #0x58]
7101dbb404  stp x28,xzr,[sp, #0x170]
7101dbb408  cbz x0,0x7101dbb410
7101dbb40c  bl 0x710392eb40
7101dbb410  add x8,sp,#0x170
7101dbb414  sub x0,x29,#0xc0
7101dbb418  adrp x1,0x71042b2000
7101dbb41c  add x1,x1,#0x92e
7101dbb420  bl 0x7103776910
7101dbb424  ldrb w3,[x24, #0x29]
7101dbb428  add x0,sp,#0x170
7101dbb42c  mov w2,#0x1
7101dbb430  adrp x1,0x71042e4000
7101dbb434  add x1,x1,#0xfaa
7101dbb438  bl 0x710377a280
7101dbb43c  ldr x0,[sp, #0x178]
7101dbb440  stp x28,xzr,[sp, #0x170]
7101dbb444  cbz x0,0x7101dbb44c
7101dbb448  bl 0x710392eb40
7101dbb44c  adrp x24,0x710523d000
7101dbb450  add x24,x24,#0x988
7101dbb454  stp x24,xzr,[x29, #-0xc0]
7101dbb458  cbnz x21,0x7101dbb4c4
7101dbb45c  b 0x7101dbb4dc
7101dbb460  ldur x21,[x29, #-0xb8]
7101dbb464  ldr x8,[x21, #0x8]
7101dbb468  cbz x8,0x7101dbb4bc
7101dbb46c  ldr x8,[x8, #0x18]
7101dbb470  cbz x8,0x7101dbb4bc
7101dbb474  ldrb w9,[x8, #0x58]
7101dbb478  and w9,w9,#0xfe
7101dbb47c  strb w9,[x8, #0x58]
7101dbb480  stp x24,xzr,[x29, #-0xc0]
7101dbb484  cbnz x21,0x7101dbb4c4
7101dbb488  b 0x7101dbb4dc
7101dbb48c  bl 0x7103776910
7101dbb490  ldr x0,[sp, #0x178]
7101dbb494  ldr x8,[x0]
7101dbb498  cbz x8,0x7101dbb4a8
7101dbb49c  ldrb w9,[x8, #0x58]
7101dbb4a0  and w9,w9,#0xfe
7101dbb4a4  strb w9,[x8, #0x58]
7101dbb4a8  adrp x24,0x710523d000
7101dbb4ac  add x24,x24,#0x988
7101dbb4b0  stp x28,xzr,[sp, #0x170]
7101dbb4b4  cbz x0,0x7101dbb4bc
7101dbb4b8  bl 0x710392eb40
7101dbb4bc  stp x24,xzr,[x29, #-0xc0]
7101dbb4c0  cbz x21,0x7101dbb4dc
7101dbb4c4  ldr x0,[x21, #0x18]
7101dbb4c8  stp x28,xzr,[x21, #0x10]
7101dbb4cc  cbz x0,0x7101dbb4d4
7101dbb4d0  bl 0x710392eb40
7101dbb4d4  mov x0,x21
7101dbb4d8  bl 0x710392eb40
7101dbb4dc  add x20,x20,#0x18
7101dbb4e0  add x25,x25,#0x1
7101dbb4e4  cmp x20,#0xf0
7101dbb4e8  b.ne 0x7101dbb2bc
7101dbb4ec  ldr x20,[sp]
7101dbb4f0  adrp x23,0x7105329000
7101dbb4f4  stp x24,xzr,[sp, #0x1b8]
7101dbb4f8  cbz x20,0x7101dbb514
7101dbb4fc  ldr x0,[x20, #0x18]
7101dbb500  stp x28,xzr,[x20, #0x10]
7101dbb504  cbz x0,0x7101dbb50c
7101dbb508  bl 0x710392eb40
7101dbb50c  mov x0,x20
7101dbb510  bl 0x710392eb40
7101dbb514  adrp x1,0x71042e7000
7101dbb518  add x1,x1,#0x6a5
7101dbb51c  add x8,sp,#0x170
7101dbb520  mov x0,x27
7101dbb524  bl 0x7103776640
7101dbb528  ldrb w8,[x19, #0x179]
7101dbb52c  cmp w8,#0x4
7101dbb530  b.hi 0x7101dbb6b8
7101dbb534  adrp x9,0x71044fb000
7101dbb538  add x9,x9,#0x538
7101dbb53c  ldrsw x8,[x9, x8, LSL #0x2]
7101dbb540  add x8,x8,x9
7101dbb544  br x8
7101dbb548  adrp x1,0x710437c000
7101dbb54c  add x1,x1,#0x9f7
7101dbb550  sub x8,x29,#0xc0
7101dbb554  add x0,sp,#0x170
7101dbb558  bl 0x7103776640
7101dbb55c  ldur x21,[x29, #-0xb8]
7101dbb560  ldr x8,[x21, #0x8]
7101dbb564  cbz x8,0x7101dbb57c
7101dbb568  ldr x8,[x8, #0x18]
7101dbb56c  cbz x8,0x7101dbb57c
7101dbb570  ldrb w9,[x8, #0x58]
7101dbb574  and w9,w9,#0xfe
7101dbb578  strb w9,[x8, #0x58]
7101dbb57c  stp x24,xzr,[x29, #-0xc0]
7101dbb580  cbz x21,0x7101dbb59c
7101dbb584  ldr x0,[x21, #0x18]
7101dbb588  stp x28,xzr,[x21, #0x10]
7101dbb58c  cbz x0,0x7101dbb594
7101dbb590  bl 0x710392eb40
7101dbb594  mov x0,x21
7101dbb598  bl 0x710392eb40
7101dbb59c  ldr x0,[sp, #0x178]
7101dbb5a0  fmov s0,0x3f800000
7101dbb5a4  adrp x1,0x710425f000
7101dbb5a8  add x1,x1,#0x91d
7101dbb5ac  b 0x7101dbb5fc
7101dbb5b0  ldr x21,[sp, #0x178]
7101dbb5b4  adrp x1,0x710436c000
7101dbb5b8  add x1,x1,#0x88a
7101dbb5bc  b 0x7101dbb5dc
7101dbb5c0  ldr x21,[sp, #0x178]
7101dbb5c4  adrp x1,0x710436c000
7101dbb5c8  add x1,x1,#0x88a
7101dbb5cc  b 0x7101dbb694
7101dbb5d0  ldr x21,[sp, #0x178]
7101dbb5d4  adrp x1,0x710432a000
7101dbb5d8  add x1,x1,#0x541
7101dbb5dc  fmov s8,0x3f800000
7101dbb5e0  mov v0.16B,v8.16B
7101dbb5e4  mov x0,x21
7101dbb5e8  bl 0x7103778300
7101dbb5ec  adrp x1,0x710425f000
7101dbb5f0  add x1,x1,#0x91d
7101dbb5f4  mov x0,x21
7101dbb5f8  mov v0.16B,v8.16B
7101dbb5fc  bl 0x7103778300
7101dbb600  ldrh w8,[x19, #0x17a]
7101dbb604  mov w9,#0x8889
7101dbb608  movk w9,#0x8888, LSL #16
7101dbb60c  mul x10,x8,x9
7101dbb610  lsr x10,x10,#0x25
7101dbb614  mov w11,#0xffffffc4
7101dbb618  madd w20,w10,w11,w8
7101dbb61c  mul x8,x10,x9
7101dbb620  orr w9,wzr,#0x3c
7101dbb624  lsr x8,x8,#0x25
7101dbb628  msub w22,w8,w9,w10
7101dbb62c  adrp x1,0x710433a000
7101dbb630  add x1,x1,#0x5de
7101dbb634  sub x8,x29,#0xc0
7101dbb638  add x0,sp,#0x170
7101dbb63c  and w21,w20,#0xffff
7101dbb640  bl 0x7103776910
7101dbb644  mov w8,#0x3e8
7101dbb648  mul w8,w22,w8
7101dbb64c  and x9,x20,#0xffff
7101dbb650  cmp w21,#0x3e7
7101dbb654  mov w10,#0x3e7
7101dbb658  csel x9,x9,x10,cc
7101dbb65c  add x3,x9,x8
7101dbb660  adrp x1,0x710434a000
7101dbb664  add x1,x1,#0x7dc
7101dbb668  sub x0,x29,#0xc0
7101dbb66c  mov w2,#0x1
7101dbb670  bl 0x710377a280
7101dbb674  ldur x0,[x29, #-0xb8]
7101dbb678  stp x28,xzr,[x29, #-0xc0]
7101dbb67c  cbz x0,0x7101dbb6b8
7101dbb680  bl 0x710392eb40
7101dbb684  b 0x7101dbb6b8
7101dbb688  ldr x21,[sp, #0x178]
7101dbb68c  adrp x1,0x710432a000
7101dbb690  add x1,x1,#0x541
7101dbb694  fmov s8,0x3f800000
7101dbb698  mov v0.16B,v8.16B
7101dbb69c  mov x0,x21
7101dbb6a0  bl 0x7103778300
7101dbb6a4  mov v0.16B,v8.16B
7101dbb6a8  adrp x1,0x7104280000
7101dbb6ac  add x1,x1,#0xf22
7101dbb6b0  mov x0,x21
7101dbb6b4  bl 0x7103778300
7101dbb6b8  adrp x8,0x710532f000
7101dbb6bc  ldr x8,[x8, #0x730]
7101dbb6c0  ldr x20,[x8, #0x8]
7101dbb6c4  ldrsw x8,[x19, #0x184]
7101dbb6c8  add x0,x20,#0x170
7101dbb6cc  cmp w8,#0x16b
7101dbb6d0  b.hi 0x7101dbb6ec
7101dbb6d4  adrp x9,0x710454a000
7101dbb6d8  add x9,x9,#0x7e8
7101dbb6dc  mov w10,#0x48
7101dbb6e0  madd x8,x8,x10,x9
7101dbb6e4  ldr w1,[x8, #0x4]
7101dbb6e8  b 0x7101dbb6f0
7101dbb6ec  mov w1,#0xffffffff
7101dbb6f0  bl 0x71032b24e0
7101dbb6f4  ldr x1,[x20, #0x178]
7101dbb6f8  mov x2,x0
7101dbb6fc  sub x0,x29,#0xc0
7101dbb700  sub x20,x29,#0xc0
7101dbb704  bl 0x71032b1a60
7101dbb708  add x1,x20,#0x8
7101dbb70c  adrp x0,0x7104452000
7101dbb710  add x0,x0,#0xf57
7101dbb714  add x8,sp,#0x1b8
7101dbb718  add x20,sp,#0x1b8
7101dbb71c  bl 0x71003a4ca0
7101dbb720  adrp x1,0x710436c000
7101dbb724  add x1,x1,#0x892
7101dbb728  sub x8,x29,#0xc0
7101dbb72c  mov x0,x27
7101dbb730  bl 0x7103776910
7101dbb734  add x3,x20,#0x8
7101dbb738  adrp x1,0x71042c5000
7101dbb73c  add x1,x1,#0x2b5
7101dbb740  sub x0,x29,#0xc0
7101dbb744  mov w2,#0x1
7101dbb748  bl 0x710377a280
7101dbb74c  ldur x0,[x29, #-0xb8]
7101dbb750  stp x28,xzr,[x29, #-0xc0]
7101dbb754  cbz x0,0x7101dbb75c
7101dbb758  bl 0x710392eb40
7101dbb75c  ldr x21,[sp, #0x178]
7101dbb760  stp x24,xzr,[sp, #0x170]
7101dbb764  cbz x21,0x7101dbb780
7101dbb768  ldr x0,[x21, #0x18]
7101dbb76c  stp x28,xzr,[x21, #0x10]
7101dbb770  cbz x0,0x7101dbb778
7101dbb774  bl 0x710392eb40
7101dbb778  mov x0,x21
7101dbb77c  bl 0x710392eb40
7101dbb780  ldr x1,[sp, #0x18]
7101dbb784  add x0,sp,#0x1b8
7101dbb788  str xzr,[sp, #0x1b8]
7101dbb78c  stp xzr,xzr,[sp, #0x1c0]
7101dbb790  bl 0x71025b39a0
7101dbb794  ldp x9,x8,[sp, #0x1b8]
7101dbb798  sub x8,x8,x9
7101dbb79c  mov w9,#0x1bad
7101dbb7a0  movk w9,#0x914c, LSL #16
7101dbb7a4  lsr x8,x8,#0x2
7101dbb7a8  mul w8,w8,w9
7101dbb7ac  and w9,w8,#0xff
7101dbb7b0  cmp w8,#0x2
7101dbb7b4  orr w8,wzr,#0x3
7101dbb7b8  csel w21,w8,w9,hi
7101dbb7bc  adrp x0,0x7104280000
7101dbb7c0  add x0,x0,#0xf18
7101dbb7c4  sub x8,x29,#0xc0
7101dbb7c8  mov w1,w21
7101dbb7cc  sub x20,x29,#0xc0
7101dbb7d0  bl 0x71003a4ca0
7101dbb7d4  ldr x0,[x19, #0xe0]
7101dbb7d8  fmov s0,0x3f800000
7101dbb7dc  add x1,x20,#0x8
7101dbb7e0  bl 0x7103778300
7101dbb7e4  adrp x1,0x71042d6000
7101dbb7e8  add x1,x1,#0x724
7101dbb7ec  add x8,sp,#0x170
7101dbb7f0  mov x0,x27
7101dbb7f4  mov w2,wzr
7101dbb7f8  bl 0x7103776910
7101dbb7fc  cbz w21,0x7101dbb850
7101dbb800  ldp x8,x9,[sp, #0x1b8]
7101dbb804  cmp x9,x8
7101dbb808  b.eq 0x7101dbbc64
7101dbb80c  ldr x22,[sp, #0x178]
7101dbb810  ldr x9,[x22]
7101dbb814  cbz x9,0x7101dbb824
7101dbb818  ldrb w10,[x9, #0x58]
7101dbb81c  orr w10,w10,#0x1
7101dbb820  strb w10,[x9, #0x58]
7101dbb824  ldr w9,[x8, #0x4c]
7101dbb828  cmp w9,#0x1
7101dbb82c  b.lt 0x7101dbbb70
7101dbb830  add x1,x8,#0x50
7101dbb834  add x3,x8,#0x8
7101dbb838  add x0,sp,#0x170
7101dbb83c  mov w2,#0x1
7101dbb840  bl 0x710377a280
7101dbb844  stp x28,xzr,[sp, #0x170]
7101dbb848  cbnz x22,0x7101dbb870
7101dbb84c  b 0x7101dbb878
7101dbb850  ldr x22,[sp, #0x178]
7101dbb854  ldr x8,[x22]
7101dbb858  cbz x8,0x7101dbb868
7101dbb85c  ldrb w9,[x8, #0x58]
7101dbb860  and w9,w9,#0xfe
7101dbb864  strb w9,[x8, #0x58]
7101dbb868  stp x28,xzr,[sp, #0x170]
7101dbb86c  cbz x22,0x7101dbb878
7101dbb870  mov x0,x22
7101dbb874  bl 0x710392eb40
7101dbb878  adrp x1,0x71042d6000
7101dbb87c  add x1,x1,#0x724
7101dbb880  add x8,sp,#0x170
7101dbb884  mov w2,#0x1
7101dbb888  mov x0,x27
7101dbb88c  bl 0x7103776910
7101dbb890  cmp w21,#0x1
7101dbb894  b.ls 0x7101dbb904
7101dbb898  ldp x8,x9,[sp, #0x1b8]
7101dbb89c  sub x9,x9,x8
7101dbb8a0  mov x10,#0x1bad
7101dbb8a4  movk x10,#0x914c, LSL #16
7101dbb8a8  movk x10,#0xbacf, LSL #32
7101dbb8ac  movk x10,#0x14c1, LSL #48
7101dbb8b0  asr x9,x9,#0x2
7101dbb8b4  mul x9,x9,x10
7101dbb8b8  cmp x9,#0x2
7101dbb8bc  b.cc 0x7101dbbc64
7101dbb8c0  ldr x22,[sp, #0x178]
7101dbb8c4  ldr x9,[x22]
7101dbb8c8  cbz x9,0x7101dbb8d8
7101dbb8cc  ldrb w10,[x9, #0x58]
7101dbb8d0  orr w10,w10,#0x1
7101dbb8d4  strb w10,[x9, #0x58]
7101dbb8d8  ldr w9,[x8, #0xe0]
7101dbb8dc  cmp w9,#0x0
7101dbb8e0  b.le 0x7101dbbb88
7101dbb8e4  add x1,x8,#0xe4
7101dbb8e8  add x3,x8,#0x9c
7101dbb8ec  add x0,sp,#0x170
7101dbb8f0  mov w2,#0x1
7101dbb8f4  bl 0x710377a280
7101dbb8f8  stp x28,xzr,[sp, #0x170]
7101dbb8fc  cbnz x22,0x7101dbb924
7101dbb900  b 0x7101dbb92c
7101dbb904  ldr x22,[sp, #0x178]
7101dbb908  ldr x8,[x22]
7101dbb90c  cbz x8,0x7101dbb91c
7101dbb910  ldrb w9,[x8, #0x58]
7101dbb914  and w9,w9,#0xfe
7101dbb918  strb w9,[x8, #0x58]
7101dbb91c  stp x28,xzr,[sp, #0x170]
7101dbb920  cbz x22,0x7101dbb92c
7101dbb924  mov x0,x22
7101dbb928  bl 0x710392eb40
7101dbb92c  adrp x1,0x71042d6000
7101dbb930  add x1,x1,#0x724
7101dbb934  add x8,sp,#0x170
7101dbb938  mov w2,#0x2
7101dbb93c  mov x0,x27
7101dbb940  bl 0x7103776910
7101dbb944  cmp w21,#0x2
7101dbb948  b.ls 0x7101dbb9b8
7101dbb94c  ldp x8,x9,[sp, #0x1b8]
7101dbb950  sub x9,x9,x8
7101dbb954  mov x10,#0x1bad
7101dbb958  movk x10,#0x914c, LSL #16
7101dbb95c  movk x10,#0xbacf, LSL #32
7101dbb960  movk x10,#0x14c1, LSL #48
7101dbb964  asr x9,x9,#0x2
7101dbb968  mul x9,x9,x10
7101dbb96c  cmp x9,#0x3
7101dbb970  b.cc 0x7101dbbc64
7101dbb974  ldr x20,[sp, #0x178]
7101dbb978  ldr x9,[x20]
7101dbb97c  cbz x9,0x7101dbb98c
7101dbb980  ldrb w10,[x9, #0x58]
7101dbb984  orr w10,w10,#0x1
7101dbb988  strb w10,[x9, #0x58]
7101dbb98c  ldr w9,[x8, #0x174]
7101dbb990  cmp w9,#0x0
7101dbb994  b.le 0x7101dbbba0
7101dbb998  add x1,x8,#0x178
7101dbb99c  add x3,x8,#0x130
7101dbb9a0  add x0,sp,#0x170
7101dbb9a4  mov w2,#0x1
7101dbb9a8  bl 0x710377a280
7101dbb9ac  stp x28,xzr,[sp, #0x170]
7101dbb9b0  cbnz x20,0x7101dbb9d8
7101dbb9b4  b 0x7101dbb9e0
7101dbb9b8  ldr x20,[sp, #0x178]
7101dbb9bc  ldr x8,[x20]
7101dbb9c0  cbz x8,0x7101dbb9d0
7101dbb9c4  ldrb w9,[x8, #0x58]
7101dbb9c8  and w9,w9,#0xfe
7101dbb9cc  strb w9,[x8, #0x58]
7101dbb9d0  stp x28,xzr,[sp, #0x170]
7101dbb9d4  cbz x20,0x7101dbb9e0
7101dbb9d8  mov x0,x20
7101dbb9dc  bl 0x710392eb40
7101dbb9e0  ldr x0,[sp, #0x1b8]
7101dbb9e4  cbz x0,0x7101dbb9f0
7101dbb9e8  str x0,[sp, #0x1c0]
7101dbb9ec  bl 0x710392eb40
7101dbb9f0  adrp x8,0x710532f000
7101dbb9f4  ldr x8,[x8, #0x7c8]
7101dbb9f8  ldr x0,[x8, #0x8]
7101dbb9fc  bl 0x71032e5a30
7101dbba00  ldr x8,[x23, #0xf98]
7101dbba04  ldr x8,[x8]
7101dbba08  ldr x8,[x8, #0x50]
7101dbba0c  add x0,x8,#0x1e0
7101dbba10  mov w1,wzr
7101dbba14  bl 0x710373b540
7101dbba18  adrp x8,0x710532f000
7101dbba1c  ldr x8,[x8, #0x8d0]
7101dbba20  ldr x0,[x8, #0x8]
7101dbba24  ldrb w8,[x0, #0x191]
7101dbba28  cbnz w8,0x7101dbbaa8
7101dbba2c  mov x20,#0x1a40
7101dbba30  movk x20,#0xb332, LSL #16
7101dbba34  movk x20,#0x15, LSL #32
7101dbba38  mov w2,#0x4
7101dbba3c  mov x1,x20
7101dbba40  bl 0x7103313f20
7101dbba44  tbz w0,#0x0,0x7101dbbaa8
7101dbba48  add x0,sp,#0x38
7101dbba4c  mov x1,x20
7101dbba50  bl 0x71024076d0
7101dbba54  ldr x8,[sp, #0x48]
7101dbba58  adrp x9,0x7104f73000
7101dbba5c  add x9,x9,#0xd50
7101dbba60  str x9,[sp, #0x40]
7101dbba64  cbz x8,0x7101dbbad4
7101dbba68  adrp x8,0x7106dd5000
7101dbba6c  ldrb w8,[x8, #0x3a8]
7101dbba70  cmp w8,#0x1
7101dbba74  b.ne 0x7101dbbad4
7101dbba78  adrp x9,0x7106dd5000
7101dbba7c  ldr w8,[sp, #0x50]
7101dbba80  ldr w9,[x9, #0x3ac]
7101dbba84  cmp w8,w9
7101dbba88  b.ne 0x7101dbbad4
7101dbba8c  ldr x8,[sp, #0x48]
7101dbba90  ldr wzr,[x8, #0x38]!
7101dbba94  ldaxr w9,[x8]
7101dbba98  sub w9,w9,#0x1
7101dbba9c  stlxr w10,w9,[x8]
7101dbbaa0  cbnz w10,0x7101dbba94
7101dbbaa4  b 0x7101dbbad4
7101dbbaa8  mov x8,#0x650000000000
7101dbbaac  movk x8,#0x87, LSL #48
7101dbbab0  strb wzr,[sp, #0x58]
7101dbbab4  stp xzr,x8,[sp, #0x48]
7101dbbab8  mov x8,#-0x1
7101dbbabc  stp x8,xzr,[sp, #0x60]
7101dbbac0  adrp x8,0x7104f73000
7101dbbac4  add x8,x8,#0xd50
7101dbbac8  str wzr,[sp, #0x38]
7101dbbacc  str xzr,[sp, #0x70]
7101dbbad0  str x8,[sp, #0x40]
7101dbbad4  str xzr,[sp, #0x48]
7101dbbad8  strb wzr,[sp, #0x58]
7101dbbadc  adrp x8,0x7105314000
7101dbbae0  add x8,x8,#0x4d8
7101dbbae4  ldarb w8,[x8]
7101dbbae8  tbz w8,#0x0,0x7101dbbc10
7101dbbaec  adrp x8,0x7105307000
7101dbbaf0  ldr w1,[x8, #0xb68]
7101dbbaf4  cmn w1,#0x1
7101dbbaf8  b.eq 0x7101dbbb34
7101dbbafc  adrp x8,0x71052c5000
7101dbbb00  ldr x8,[x8, #0x120]
7101dbbb04  fmov s0,0x3f800000
7101dbbb08  mov v1.16B,v0.16B
7101dbbb0c  mov w3,wzr
7101dbbb10  mov w4,wzr
7101dbbb14  mov w5,wzr
7101dbbb18  mov w6,wzr
7101dbbb1c  ldr x0,[x8, #0x8]
7101dbbb20  mov x2,#0xef7a
7101dbbb24  movk x2,#0x6626, LSL #16
7101dbbb28  movk x2,#0x19, LSL #32
7101dbbb2c  mov w7,wzr
7101dbbb30  bl 0x710175dfc0
7101dbbb34  ldrsw x8,[x19, #0xbc]
7101dbbb38  cmp w8,#0x13
7101dbbb3c  b.cs 0x7101dbbc6c
7101dbbb40  add x8,x19,x8, LSL #0x2
7101dbbb44  orr w9,wzr,#0x3
7101dbbb48  str w9,[x8, #0x70]
7101dbbb4c  add sp,sp,#0x260
7101dbbb50  ldp x29,x30,[sp, #0x60]
7101dbbb54  ldp x20,x19,[sp, #0x50]
7101dbbb58  ldp x22,x21,[sp, #0x40]
7101dbbb5c  ldp x24,x23,[sp, #0x30]
7101dbbb60  ldp x26,x25,[sp, #0x20]
7101dbbb64  ldp x28,x27,[sp, #0x10]
7101dbbb68  ldp d9,d8,[sp], #0x70
7101dbbb6c  ret
7101dbbb70  add x1,x8,#0x8
7101dbbb74  add x0,sp,#0x170
7101dbbb78  bl 0x710377a120
7101dbbb7c  stp x28,xzr,[sp, #0x170]
7101dbbb80  cbnz x22,0x7101dbb870
7101dbbb84  b 0x7101dbb878
7101dbbb88  add x1,x8,#0x9c
7101dbbb8c  add x0,sp,#0x170
7101dbbb90  bl 0x710377a120
7101dbbb94  stp x28,xzr,[sp, #0x170]
7101dbbb98  cbnz x22,0x7101dbb924
7101dbbb9c  b 0x7101dbb92c
7101dbbba0  add x1,x8,#0x130
7101dbbba4  add x0,sp,#0x170
7101dbbba8  bl 0x710377a120
7101dbbbac  stp x28,xzr,[sp, #0x170]
7101dbbbb0  cbnz x20,0x7101dbb9d8
7101dbbbb4  b 0x7101dbb9e0
7101dbbbb8  adrp x1,0x7104401000
7101dbbbbc  add x1,x1,#0x9ad
7101dbbbc0  b 0x7101db9400
7101dbbbc4  adrp x0,0x710532f000
7101dbbbc8  add x0,x0,#0x4d8
7101dbbbcc  bl 0x71039c06b0
7101dbbbd0  cbz w0,0x7101db8860
7101dbbbd4  adrp x1,0x710532f000
7101dbbbd8  add x1,x1,#0x4a4
7101dbbbdc  orr w8,wzr,#0xffffff
7101dbbbe0  adrp x0,0x710353e000
7101dbbbe4  add x0,x0,#0x700
7101dbbbe8  str w8,[x1]
7101dbbbec  adrp x2,0x7104f17000
7101dbbbf0  add x2,x2,#0x0
7101dbbbf4  bl 0x71000001c0
7101dbbbf8  adrp x0,0x710532f000
7101dbbbfc  add x0,x0,#0x4d8
7101dbbc00  bl 0x71039c06c0
7101dbbc04  ldr x10,[x20, #0x28]!
7101dbbc08  cbnz x10,0x7101db8868
7101dbbc0c  b 0x7101db88ac
7101dbbc10  adrp x0,0x7105314000
7101dbbc14  add x0,x0,#0x4d8
7101dbbc18  bl 0x71039c06b0
7101dbbc1c  cbz w0,0x7101dbbaec
7101dbbc20  bl 0x7101764000
7101dbbc24  adrp x0,0x7101763000
7101dbbc28  add x0,x0,#0xc40
7101dbbc2c  adrp x1,0x71052c5000
7101dbbc30  add x1,x1,#0x180
7101dbbc34  adrp x2,0x7104f17000
7101dbbc38  add x2,x2,#0x0
7101dbbc3c  bl 0x71000001c0
7101dbbc40  adrp x0,0x7105314000
7101dbbc44  add x0,x0,#0x4d8
7101dbbc48  bl 0x71039c06c0
7101dbbc4c  b 0x7101dbbaec
7101dbbc50  bl 0x71039c1330
7101dbbc54  add x0,x19,#0x120
7101dbbc58  bl 0x71039c1330
7101dbbc5c  add x0,x19,#0x138
7101dbbc60  bl 0x71039c1330
7101dbbc64  add x0,sp,#0x1b8
7101dbbc68  bl 0x71039c1330
7101dbbc6c  bl 0x71039c2650
