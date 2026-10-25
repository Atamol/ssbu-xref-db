// addr:      7102cd8ae0
// offset:    0x2cd8ae0
// name:      FUN_7102cd8ae0
// mangled:   
// size:      7884

7102cd8ae0  stp d11,d10,[sp, #-0x80]!
7102cd8ae4  stp d9,d8,[sp, #0x10]
7102cd8ae8  stp x28,x27,[sp, #0x20]
7102cd8aec  stp x26,x25,[sp, #0x30]
7102cd8af0  stp x24,x23,[sp, #0x40]
7102cd8af4  stp x22,x21,[sp, #0x50]
7102cd8af8  stp x20,x19,[sp, #0x60]
7102cd8afc  stp x29,x30,[sp, #0x70]
7102cd8b00  add x29,sp,#0x70
7102cd8b04  sub sp,sp,#0x190
7102cd8b08  str x2,[sp, #0x48]
7102cd8b0c  cbz x0,0x7102cda70c
7102cd8b10  mov x21,x0
7102cd8b14  mov x0,x1
7102cd8b18  mov x22,x4
7102cd8b1c  mov x28,x3
7102cd8b20  mov x23,x1
7102cd8b24  stur xzr,[x29, #-0xc8]
7102cd8b28  stp xzr,xzr,[x29, #-0xc0]
7102cd8b2c  bl 0x71039c0070
7102cd8b30  cmn x0,#0x10
7102cd8b34  b.cs 0x7102cda994
7102cd8b38  mov x24,x0
7102cd8b3c  cmp x0,#0x17
7102cd8b40  b.cs 0x7102cd8b5c
7102cd8b44  lsl w8,w24,#0x1
7102cd8b48  sturb w8,[x29, #-0xc8]
7102cd8b4c  sub x8,x29,#0xc8
7102cd8b50  orr x26,x8,#0x1
7102cd8b54  cbnz x24,0x7102cd8bd0
7102cd8b58  b 0x7102cd8be0
7102cd8b5c  add x8,x24,#0x10
7102cd8b60  and x19,x8,#-0x10
7102cd8b64  tst x8,#-0x10
7102cd8b68  csinc x25,x19,xzr,ne
7102cd8b6c  mov w0,#0x10
7102cd8b70  mov x1,x25
7102cd8b74  bl 0x710392e290
7102cd8b78  mov x26,x0
7102cd8b7c  cbnz x0,0x7102cd8bc4
7102cd8b80  adrp x8,0x7105332000
7102cd8b84  ldr x0,[x8, #0xf00]
7102cd8b88  cbz x0,0x7102cd8bc0
7102cd8b8c  stur wzr,[x29, #-0xe0]
7102cd8b90  stur x25,[x29, #-0xb0]
7102cd8b94  ldr x8,[x0]
7102cd8b98  ldr x8,[x8, #0x30]
7102cd8b9c  sub x1,x29,#0xe0
7102cd8ba0  sub x2,x29,#0xb0
7102cd8ba4  blr x8
7102cd8ba8  tbz w0,#0x0,0x7102cd8bc0
7102cd8bac  mov w0,#0x10
7102cd8bb0  mov x1,x25
7102cd8bb4  bl 0x710392e290
7102cd8bb8  mov x26,x0
7102cd8bbc  cbnz x0,0x7102cd8bc4
7102cd8bc0  mov x26,xzr
7102cd8bc4  orr x8,x19,#0x1
7102cd8bc8  stp x24,x26,[x29, #-0xc0]
7102cd8bcc  stur x8,[x29, #-0xc8]
7102cd8bd0  mov x0,x26
7102cd8bd4  mov x1,x23
7102cd8bd8  mov x2,x24
7102cd8bdc  bl 0x71039c00e0
7102cd8be0  adrp x1,0x710439b000
7102cd8be4  add x1,x1,#0x552
7102cd8be8  sub x8,x29,#0xe0
7102cd8bec  sub x0,x29,#0xc8
7102cd8bf0  strb wzr,[x26, x24, LSL ]
7102cd8bf4  sub x19,x29,#0xe0
7102cd8bf8  bl 0x710143dde0
7102cd8bfc  str xzr,[x21, #0x10]
7102cd8c00  mov x26,x21
7102cd8c04  orr x11,x19,#0x1
7102cd8c08  ldr x8,[x26, #0x18]!
7102cd8c0c  str x8,[x21, #0x20]
7102cd8c10  ldp x8,x9,[x28]
7102cd8c14  str x21,[sp, #0xc8]
7102cd8c18  sub x23,x9,x8
7102cd8c1c  ldr x8,[x21]
7102cd8c20  ldr x9,[x8, #0x310]
7102cd8c24  ldurb w8,[x29, #-0xe0]
7102cd8c28  ldur x10,[x29, #-0xd0]
7102cd8c2c  lsr x20,x23,#0x5
7102cd8c30  stp x22,x28,[sp, #0x18]
7102cd8c34  tst w8,#0x1
7102cd8c38  csel x12,x11,x10,eq
7102cd8c3c  cmp w20,#0x1
7102cd8c40  b.ne 0x7102cd8cdc
7102cd8c44  cbz x12,0x7102cd903c
7102cd8c48  ldrb w11,[x12]
7102cd8c4c  cbz w11,0x7102cd903c
7102cd8c50  ldp x8,x9,[x9, #0xd0]
7102cd8c54  cmp x8,x9
7102cd8c58  b.eq 0x7102cd903c
7102cd8c5c  mov x10,xzr
7102cd8c60  add x13,x12,#0x1
7102cd8c64  mov w12,#0xffffffff
7102cd8c68  orr x14,xzr,#0x100000000
7102cd8c6c  adrp x15,0x7104754000
7102cd8c70  add x15,x15,#0x84
7102cd8c74  and w11,w11,#0xff
7102cd8c78  sub w16,w11,#0x41
7102cd8c7c  add w17,w11,#0x20
7102cd8c80  cmp w16,#0x1a
7102cd8c84  csel w11,w17,w11,cc
7102cd8c88  eor w11,w11,w12
7102cd8c8c  and w11,w11,#0xff
7102cd8c90  ldr w11,[x15, w11, UXTW #0x2]
7102cd8c94  eor w12,w11,w12, LSR #0x8
7102cd8c98  ldrb w11,[x13], #0x1
7102cd8c9c  add x10,x10,x14
7102cd8ca0  cbnz w11,0x7102cd8c74
7102cd8ca4  mvn w11,w12
7102cd8ca8  and x10,x10,#0xff00000000
7102cd8cac  orr x10,x10,x11
7102cd8cb0  ldr w11,[x8, #0x8]
7102cd8cb4  cmp w11,#0x1
7102cd8cb8  b.hi 0x7102cd8ccc
7102cd8cbc  ldr x19,[x8]
7102cd8cc0  ldr x11,[x19, #0x68]
7102cd8cc4  cmp x10,x11
7102cd8cc8  b.eq 0x7102cda734
7102cd8ccc  add x8,x8,#0x10
7102cd8cd0  cmp x9,x8
7102cd8cd4  b.ne 0x7102cd8cb0
7102cd8cd8  b 0x7102cd903c
7102cd8cdc  cbz x12,0x7102cd8d70
7102cd8ce0  ldrb w11,[x12]
7102cd8ce4  cbz w11,0x7102cd8d70
7102cd8ce8  ldp x8,x9,[x9, #0xd0]
7102cd8cec  cmp x8,x9
7102cd8cf0  b.eq 0x7102cd8d70
7102cd8cf4  mov x10,xzr
7102cd8cf8  add x13,x12,#0x1
7102cd8cfc  mov w12,#0xffffffff
7102cd8d00  orr x14,xzr,#0x100000000
7102cd8d04  adrp x15,0x7104754000
7102cd8d08  add x15,x15,#0x84
7102cd8d0c  and w11,w11,#0xff
7102cd8d10  sub w16,w11,#0x41
7102cd8d14  add w17,w11,#0x20
7102cd8d18  cmp w16,#0x1a
7102cd8d1c  csel w11,w17,w11,cc
7102cd8d20  eor w11,w11,w12
7102cd8d24  and w11,w11,#0xff
7102cd8d28  ldr w11,[x15, w11, UXTW #0x2]
7102cd8d2c  eor w12,w11,w12, LSR #0x8
7102cd8d30  ldrb w11,[x13], #0x1
7102cd8d34  add x10,x10,x14
7102cd8d38  cbnz w11,0x7102cd8d0c
7102cd8d3c  mvn w11,w12
7102cd8d40  and x10,x10,#0xff00000000
7102cd8d44  orr x11,x10,x11
7102cd8d48  ldr w10,[x8, #0x8]
7102cd8d4c  cmp w10,#0x1
7102cd8d50  b.hi 0x7102cd8d64
7102cd8d54  ldr x10,[x8]
7102cd8d58  ldr x12,[x10, #0x68]
7102cd8d5c  cmp x11,x12
7102cd8d60  b.eq 0x7102cda7cc
7102cd8d64  add x8,x8,#0x10
7102cd8d68  cmp x9,x8
7102cd8d6c  b.ne 0x7102cd8d48
7102cd8d70  str xzr,[x21, #0x10]
7102cd8d74  cmp w20,#0x1
7102cd8d78  b.lt 0x7102cd903c
7102cd8d7c  sub x8,x29,#0xc8
7102cd8d80  sub x9,x29,#0xb0
7102cd8d84  mov w24,wzr
7102cd8d88  orr x21,x8,#0x1
7102cd8d8c  orr x8,x9,#0x1
7102cd8d90  str x8,[sp, #0xd0]
7102cd8d94  orr x22,xzr,#0x100000000
7102cd8d98  adrp x25,0x7104754000
7102cd8d9c  add x25,x25,#0x84
7102cd8da0  str x23,[sp, #0xb0]
7102cd8da4  str x26,[sp, #0xa0]
7102cd8da8  b 0x7102cd8f68
7102cd8dac  cbz x19,0x7102cd9034
7102cd8db0  add x0,x19,#0x108
7102cd8db4  strb wzr,[x19, #0x110]
7102cd8db8  bl 0x71025e9d50
7102cd8dbc  ldrb w8,[x19, #0x118]
7102cd8dc0  and w8,w8,#0xfe
7102cd8dc4  strb w8,[x19, #0x118]
7102cd8dc8  ldrb w8,[x19, #0xe0]
7102cd8dcc  cbz w8,0x7102cd8ddc
7102cd8dd0  ldr x8,[x19, #0xc8]
7102cd8dd4  cbz x8,0x7102cd8ddc
7102cd8dd8  strh wzr,[x8, #0x32]
7102cd8ddc  ldr x8,[x19, #0xd8]
7102cd8de0  cbz x8,0x7102cd8de8
7102cd8de4  strb wzr,[x8, #0x22]
7102cd8de8  ldrb w8,[x19, #0xe0]
7102cd8dec  cbz w8,0x7102cd8e00
7102cd8df0  ldr x8,[x19, #0xc8]
7102cd8df4  cbz x8,0x7102cd8e00
7102cd8df8  mov w9,#0x101
7102cd8dfc  strh w9,[x8, #0x30]
7102cd8e00  ldr x8,[x19, #0xd8]
7102cd8e04  cbz x8,0x7102cd8e10
7102cd8e08  mov w9,#0x1
7102cd8e0c  strb w9,[x8, #0x21]
7102cd8e10  ldrb w8,[x19, #0xe0]
7102cd8e14  cbz w8,0x7102cd8e20
7102cd8e18  ldr x8,[x19, #0xb0]
7102cd8e1c  strb wzr,[x8, #0x10]
7102cd8e20  ldr x10,[sp, #0xc8]
7102cd8e24  ldp x9,x8,[x10, #0x20]
7102cd8e28  cmp x9,x8
7102cd8e2c  b.cs 0x7102cd8e4c
7102cd8e30  str x19,[x9]
7102cd8e34  ldr x8,[x10, #0x20]
7102cd8e38  add x8,x8,#0x8
7102cd8e3c  str x8,[x10, #0x20]
7102cd8e40  cmp w24,w20
7102cd8e44  b.lt 0x7102cd8f68
7102cd8e48  b 0x7102cd903c
7102cd8e4c  ldr x27,[x26]
7102cd8e50  sub x28,x9,x27
7102cd8e54  asr x26,x28,#0x3
7102cd8e58  add x9,x26,#0x1
7102cd8e5c  lsr x10,x9,#0x3d
7102cd8e60  cbnz x10,0x7102cda99c
7102cd8e64  sub x8,x8,x27
7102cd8e68  asr x10,x8,#0x3
7102cd8e6c  orr x11,xzr,#0xffffffffffffffe
7102cd8e70  cmp x10,x11
7102cd8e74  b.hi 0x7102cd8e94
7102cd8e78  asr x8,x8,#0x2
7102cd8e7c  cmp x8,x9
7102cd8e80  csel x9,x9,x8,cc
7102cd8e84  cbz x9,0x7102cd8f5c
7102cd8e88  lsr x8,x9,#0x3d
7102cd8e8c  cbz x8,0x7102cd8e98
7102cd8e90  b 0x7102cda8b0
7102cd8e94  orr x9,xzr,#0x1fffffffffffffff
7102cd8e98  lsl x8,x9,#0x3
7102cd8e9c  cmp x8,#0x0
7102cd8ea0  csinc x1,x8,xzr,ne
7102cd8ea4  mov w0,#0x10
7102cd8ea8  str x9,[sp, #0x90]
7102cd8eac  str x1,[sp, #0x80]
7102cd8eb0  bl 0x710392e290
7102cd8eb4  mov x23,x0
7102cd8eb8  cbnz x0,0x7102cd8f04
7102cd8ebc  adrp x8,0x7105332000
7102cd8ec0  ldr x0,[x8, #0xf00]
7102cd8ec4  cbz x0,0x7102cd8f00
7102cd8ec8  ldr x8,[sp, #0x80]
7102cd8ecc  stur wzr,[x29, #-0xf0]
7102cd8ed0  sub x1,x29,#0xf0
7102cd8ed4  add x2,sp,#0xe0
7102cd8ed8  str x8,[sp, #0xe0]
7102cd8edc  ldr x8,[x0]
7102cd8ee0  ldr x8,[x8, #0x30]
7102cd8ee4  blr x8
7102cd8ee8  tbz w0,#0x0,0x7102cd8f00
7102cd8eec  ldr x1,[sp, #0x80]
7102cd8ef0  mov w0,#0x10
7102cd8ef4  bl 0x710392e290
7102cd8ef8  mov x23,x0
7102cd8efc  cbnz x0,0x7102cd8f04
7102cd8f00  mov x23,xzr
7102cd8f04  ldr x8,[sp, #0x90]
7102cd8f08  add x26,x23,x26, LSL #0x3
7102cd8f0c  cmp x28,#0x1
7102cd8f10  str x19,[x26], #0x8
7102cd8f14  add x19,x23,x8, LSL #0x3
7102cd8f18  b.lt 0x7102cd8f2c
7102cd8f1c  mov x0,x23
7102cd8f20  mov x1,x27
7102cd8f24  mov x2,x28
7102cd8f28  bl 0x71039c00e0
7102cd8f2c  ldr x8,[sp, #0xc8]
7102cd8f30  stp x23,x26,[x8, #0x18]
7102cd8f34  ldr x28,[sp, #0x20]
7102cd8f38  ldr x23,[sp, #0xb0]
7102cd8f3c  ldr x26,[sp, #0xa0]
7102cd8f40  str x19,[x8, #0x28]
7102cd8f44  cbz x27,0x7102cd9034
7102cd8f48  mov x0,x27
7102cd8f4c  bl 0x710392eb40
7102cd8f50  cmp w24,w20
7102cd8f54  b.lt 0x7102cd8f68
7102cd8f58  b 0x7102cd903c
7102cd8f5c  mov x8,xzr
7102cd8f60  mov x23,xzr
7102cd8f64  b 0x7102cd8f08
7102cd8f68  ldurb w8,[x29, #-0xc8]
7102cd8f6c  ldur x9,[x29, #-0xb8]
7102cd8f70  add w24,w24,#0x1
7102cd8f74  mov w4,w24
7102cd8f78  stp xzr,xzr,[x29, #-0x90]
7102cd8f7c  stp xzr,xzr,[x29, #-0xa0]
7102cd8f80  tst w8,#0x1
7102cd8f84  stp xzr,xzr,[x29, #-0xb0]
7102cd8f88  csel x3,x21,x9,eq
7102cd8f8c  sub x0,x29,#0xb0
7102cd8f90  mov w1,#0x31
7102cd8f94  adrp x2,0x71043ff000
7102cd8f98  add x2,x2,#0x675
7102cd8f9c  sturh wzr,[x29, #-0x80]
7102cd8fa0  bl 0x71039c04d0
7102cd8fa4  ldurb w10,[x29, #-0xb0]
7102cd8fa8  cbz w10,0x7102cd9034
7102cd8fac  ldr x8,[sp, #0xc8]
7102cd8fb0  ldr x8,[x8]
7102cd8fb4  ldr x9,[x8, #0x310]
7102cd8fb8  ldp x8,x9,[x9, #0xd0]
7102cd8fbc  cmp x8,x9
7102cd8fc0  b.eq 0x7102cd9034
7102cd8fc4  ldr x12,[sp, #0xd0]
7102cd8fc8  mov x11,xzr
7102cd8fcc  mov w13,#0xffffffff
7102cd8fd0  and w10,w10,#0xff
7102cd8fd4  sub w14,w10,#0x41
7102cd8fd8  add w15,w10,#0x20
7102cd8fdc  cmp w14,#0x1a
7102cd8fe0  csel w10,w15,w10,cc
7102cd8fe4  eor w10,w10,w13
7102cd8fe8  and w10,w10,#0xff
7102cd8fec  ldr w10,[x25, w10, UXTW #0x2]
7102cd8ff0  eor w13,w10,w13, LSR #0x8
7102cd8ff4  ldrb w10,[x12], #0x1
7102cd8ff8  add x11,x11,x22
7102cd8ffc  cbnz w10,0x7102cd8fd0
7102cd9000  mvn w10,w13
7102cd9004  and x11,x11,#0xff00000000
7102cd9008  orr x10,x11,x10
7102cd900c  ldr w11,[x8, #0x8]
7102cd9010  cmp w11,#0x1
7102cd9014  b.hi 0x7102cd9028
7102cd9018  ldr x19,[x8]
7102cd901c  ldr x11,[x19, #0x68]
7102cd9020  cmp x10,x11
7102cd9024  b.eq 0x7102cd8dac
7102cd9028  add x8,x8,#0x10
7102cd902c  cmp x9,x8
7102cd9030  b.ne 0x7102cd900c
7102cd9034  cmp w24,w20
7102cd9038  b.lt 0x7102cd8f68
7102cd903c  ldr x21,[sp, #0xc8]
7102cd9040  mov x9,x21
7102cd9044  cmp w20,#0x1
7102cd9048  ldr x8,[x9, #0x58]!
7102cd904c  str x8,[x9, #0x8]
7102cd9050  mov x10,x9
7102cd9054  ldr x8,[x10, #-0x18]!
7102cd9058  stp x10,x9,[sp, #0x8]
7102cd905c  stur x8,[x9, #-0x10]
7102cd9060  b.lt 0x7102cd985c
7102cd9064  fmov s8,0x3f800000
7102cd9068  fmov s9,0xbf800000
7102cd906c  mov x24,xzr
7102cd9070  mov x22,xzr
7102cd9074  sbfx x8,x23,#0x5,#0x20
7102cd9078  orr w23,wzr,#0x1e
7102cd907c  str x8,[sp, #0x40]
7102cd9080  b 0x7102cd9094
7102cd9084  mov x27,xzr
7102cd9088  b 0x7102cd9298
7102cd908c  mov x0,xzr
7102cd9090  b 0x7102cd95f0
7102cd9094  ldr x8,[sp, #0x48]
7102cd9098  adrp x10,0x71052a8000
7102cd909c  ldr x9,[x8]
7102cd90a0  ldr x8,[x28]
7102cd90a4  ldr x10,[x10, #0xa80]
7102cd90a8  ldr q0,[x10]
7102cd90ac  adrp x10,0x71052a8000
7102cd90b0  sturb wzr,[x29, #-0xfc]
7102cd90b4  add x9,x9,x23
7102cd90b8  str q0,[sp, #0x90]
7102cd90bc  ldr x10,[x10, #0xa88]
7102cd90c0  sturb wzr,[x29, #-0xe6]
7102cd90c4  sturh wzr,[x29, #-0xe8]
7102cd90c8  sturh wzr,[x29, #-0xec]
7102cd90cc  stur wzr,[x29, #-0xf0]
7102cd90d0  stur xzr,[x29, #-0xb0]
7102cd90d4  stp xzr,xzr,[x29, #-0xa8]
7102cd90d8  ldurb w12,[x9, #-0x2]
7102cd90dc  ldurb w11,[x9, #-0x1]
7102cd90e0  ldr q5,[x10]
7102cd90e4  ldur w10,[x9, #-0x1e]
7102cd90e8  str w10,[sp, #0x58]
7102cd90ec  ldur w10,[x9, #-0x1a]
7102cd90f0  ext v0.16B,v5.16B,v5.16B,0x8
7102cd90f4  str w10,[sp, #0x50]
7102cd90f8  ldur w10,[x9, #-0x16]
7102cd90fc  fmov s1,wzr
7102cd9100  mov v0.S[0x1],v1.S[0x0]
7102cd9104  add x19,x8,x24
7102cd9108  str w10,[sp, #0x54]
7102cd910c  ldur w10,[x9, #-0x12]
7102cd9110  str w10,[sp, #0x5c]
7102cd9114  ldur w10,[x9, #-0xe]
7102cd9118  mov v5.D[0x1],v0.D[0x0]
7102cd911c  str w10,[sp, #0x60]
7102cd9120  ldur w10,[x9, #-0x6]
7102cd9124  str w10,[sp, #0x68]
7102cd9128  ldrb w10,[x9]
7102cd912c  ldr w9,[x19, #0x8]
7102cd9130  cbz w9,0x7102cd9178
7102cd9134  ldp s3,s0,[x19, #0x14]
7102cd9138  mov v4.16B,v3.16B
7102cd913c  mov v4.S[0x1],v0.S[0x0]
7102cd9140  movi d1,#0x0
7102cd9144  fcmp s3,#0.0
7102cd9148  mov v2.16B,v1.16B
7102cd914c  add x8,x8,x22, LSL #0x5
7102cd9150  mov v4.D[0x1],v1.D[0x0]
7102cd9154  fcsel s1,s9,s8,ne
7102cd9158  fmul s0,s0,s1
7102cd915c  mov v3.S[0x1],v0.S[0x0]
7102cd9160  mov v3.D[0x1],v2.D[0x0]
7102cd9164  add x8,x8,#0x10
7102cd9168  mov w27,#0x2
7102cd916c  mov w26,#0x1
7102cd9170  stp q4,q3,[sp, #0xa0]
7102cd9174  b 0x7102cd9188
7102cd9178  mov w26,wzr
7102cd917c  mov w27,wzr
7102cd9180  add x8,x19,#0xc
7102cd9184  stp q5,q5,[sp, #0xa0]
7102cd9188  ldr w20,[x8]
7102cd918c  ldp x8,x9,[x21, #0x60]
7102cd9190  str q5,[sp, #0xd0]
7102cd9194  str w12,[sp, #0x80]
7102cd9198  str w10,[sp, #0x78]
7102cd919c  cmp x8,x9
7102cd91a0  str w11,[sp, #0x70]
7102cd91a4  b.cs 0x7102cd91c8
7102cd91a8  ldp x9,x10,[x19]
7102cd91ac  ldp x11,x12,[x19, #0x10]
7102cd91b0  stp x11,x12,[x8, #0x10]
7102cd91b4  stp x9,x10,[x8]
7102cd91b8  ldr x8,[x21, #0x60]
7102cd91bc  add x8,x8,#0x20
7102cd91c0  str x8,[x21, #0x60]
7102cd91c4  b 0x7102cd9304
7102cd91c8  ldr x10,[sp, #0x10]
7102cd91cc  ldr x25,[x10]
7102cd91d0  str w26,[sp, #0x2c]
7102cd91d4  sub x26,x8,x25
7102cd91d8  str x22,[sp, #0x30]
7102cd91dc  mov x22,x23
7102cd91e0  mov x23,x24
7102cd91e4  asr x24,x26,#0x5
7102cd91e8  add x8,x24,#0x1
7102cd91ec  lsr x10,x8,#0x3b
7102cd91f0  cbnz x10,0x7102cda96c
7102cd91f4  sub x9,x9,x25
7102cd91f8  asr x10,x9,#0x5
7102cd91fc  orr x11,xzr,#0x3fffffffffffffe
7102cd9200  cmp x10,x11
7102cd9204  str w27,[sp, #0x3c]
7102cd9208  b.hi 0x7102cd9228
7102cd920c  asr x9,x9,#0x4
7102cd9210  cmp x9,x8
7102cd9214  csel x21,x8,x9,cc
7102cd9218  cbz x21,0x7102cd9084
7102cd921c  lsr x8,x21,#0x3b
7102cd9220  cbz x8,0x7102cd922c
7102cd9224  b 0x7102cda8b0
7102cd9228  orr x21,xzr,#0x7ffffffffffffff
7102cd922c  lsl x8,x21,#0x5
7102cd9230  cmp x8,#0x0
7102cd9234  csinc x28,x8,xzr,ne
7102cd9238  mov w0,#0x10
7102cd923c  mov x1,x28
7102cd9240  bl 0x710392e290
7102cd9244  mov x27,x0
7102cd9248  cbnz x0,0x7102cd9290
7102cd924c  adrp x8,0x7105332000
7102cd9250  ldr x0,[x8, #0xf00]
7102cd9254  cbz x0,0x7102cd928c
7102cd9258  stur wzr,[x29, #-0xf8]
7102cd925c  str x28,[sp, #0xe0]
7102cd9260  ldr x8,[x0]
7102cd9264  ldr x8,[x8, #0x30]
7102cd9268  sub x1,x29,#0xf8
7102cd926c  add x2,sp,#0xe0
7102cd9270  blr x8
7102cd9274  tbz w0,#0x0,0x7102cd928c
7102cd9278  mov w0,#0x10
7102cd927c  mov x1,x28
7102cd9280  bl 0x710392e290
7102cd9284  mov x27,x0
7102cd9288  cbnz x0,0x7102cd9290
7102cd928c  mov x27,xzr
7102cd9290  ldr q5,[sp, #0xd0]
7102cd9294  ldr x28,[sp, #0x20]
7102cd9298  ldp x8,x9,[x19]
7102cd929c  add x12,x27,x24, LSL #0x5
7102cd92a0  ldp x10,x11,[x19, #0x10]
7102cd92a4  add x21,x27,x21, LSL #0x5
7102cd92a8  add x19,x12,#0x20
7102cd92ac  cmp x26,#0x1
7102cd92b0  stp x10,x11,[x12, #0x10]
7102cd92b4  stp x8,x9,[x12]
7102cd92b8  b.lt 0x7102cd92d0
7102cd92bc  mov x0,x27
7102cd92c0  mov x1,x25
7102cd92c4  mov x2,x26
7102cd92c8  bl 0x71039c00e0
7102cd92cc  ldr q5,[sp, #0xd0]
7102cd92d0  ldr x8,[sp, #0xc8]
7102cd92d4  stp x27,x19,[x8, #0x58]
7102cd92d8  ldr w27,[sp, #0x3c]
7102cd92dc  mov x24,x23
7102cd92e0  mov x23,x22
7102cd92e4  ldr x22,[sp, #0x30]
7102cd92e8  ldr w26,[sp, #0x2c]
7102cd92ec  str x21,[x8, #0x68]
7102cd92f0  mov x21,x8
7102cd92f4  cbz x25,0x7102cd9304
7102cd92f8  mov x0,x25
7102cd92fc  bl 0x710392eb40
7102cd9300  ldr q5,[sp, #0xd0]
7102cd9304  ldp x8,x9,[x21, #0x48]
7102cd9308  cmp x8,x9
7102cd930c  b.cs 0x7102cd9504
7102cd9310  stp q5,q5,[x8]
7102cd9314  ldr w9,[sp, #0x58]
7102cd9318  orr w13,wzr,#0x3f800000
7102cd931c  mov x11,#0x2b3
7102cd9320  movk x11,#0xa2c5, LSL #16
7102cd9324  movk x11,#0x15, LSL #32
7102cd9328  str w9,[x8, #0x20]
7102cd932c  mov w9,#0x41200000
7102cd9330  str w9,[x8, #0x24]
7102cd9334  ldr w9,[sp, #0x50]
7102cd9338  str w9,[x8, #0x28]
7102cd933c  ldr w9,[sp, #0x54]
7102cd9340  str w9,[x8, #0x2c]
7102cd9344  ldr w9,[sp, #0x5c]
7102cd9348  str w9,[x8, #0x30]
7102cd934c  ldr w9,[sp, #0x60]
7102cd9350  stp w9,w13,[x8, #0x34]
7102cd9354  ldr w9,[sp, #0x68]
7102cd9358  stp w9,w13,[x8, #0x3c]
7102cd935c  mov x9,#0x1fca
7102cd9360  movk x9,#0x1ed9, LSL #16
7102cd9364  movk x9,#0x3, LSL #32
7102cd9368  mov x12,x9
7102cd936c  str x9,[x8, #0x48]
7102cd9370  mov w9,#0x3f
7102cd9374  movk w9,#0x7, LSL #16
7102cd9378  str w9,[x8, #0x50]
7102cd937c  orr w9,wzr,#0x1f
7102cd9380  strb w9,[x8, #0x54]
7102cd9384  ldurh w9,[x29, #-0xe4]
7102cd9388  ldurb w10,[x29, #-0xe2]
7102cd938c  str x11,[x8, #0x58]
7102cd9390  mov x11,#0x800
7102cd9394  movk x11,#0x1, LSL #32
7102cd9398  str x11,[x8, #0x60]
7102cd939c  ldr w11,[sp, #0x70]
7102cd93a0  strb w10,[x8, #0x57]
7102cd93a4  strb w11,[x8, #0x68]
7102cd93a8  ldr w11,[sp, #0x78]
7102cd93ac  strb w11,[x8, #0x69]
7102cd93b0  sturh w9,[x8, #0x55]
7102cd93b4  ldurh w9,[x29, #-0xe8]
7102cd93b8  ldurb w10,[x29, #-0xe6]
7102cd93bc  ldr w11,[sp, #0x80]
7102cd93c0  strb w11,[x8, #0x6d]
7102cd93c4  orr w11,wzr,#0xe
7102cd93c8  strb w10,[x8, #0x6c]
7102cd93cc  strh w9,[x8, #0x6a]
7102cd93d0  ldur w9,[x29, #-0xf0]
7102cd93d4  ldurh w10,[x29, #-0xec]
7102cd93d8  strb w11,[x8, #0x76]
7102cd93dc  orr x11,xzr,#0x100000000
7102cd93e0  strh wzr,[x8, #0x74]
7102cd93e4  str x11,[x8, #0x78]
7102cd93e8  strh wzr,[x8, #0x80]
7102cd93ec  strh w10,[x8, #0x72]
7102cd93f0  stur w9,[x8, #0x6e]
7102cd93f4  ldr q0,[sp, #0x90]
7102cd93f8  ldurh w10,[x29, #-0xf4]
7102cd93fc  ldur w9,[x29, #-0xf8]
7102cd9400  str x12,[x8, #0x88]
7102cd9404  str wzr,[x8, #0xa0]
7102cd9408  str q0,[x8, #0x90]
7102cd940c  strh wzr,[x8, #0xa4]
7102cd9410  movi v0.2D,#0x0
7102cd9414  strh w10,[x8, #0x86]
7102cd9418  stur w9,[x8, #0x82]
7102cd941c  orr x10,xzr,#0x3f8000003f800000
7102cd9420  ldurh w9,[x29, #-0xfc]
7102cd9424  str x10,[x8, #0xa8]
7102cd9428  mov x10,#0xfc4f
7102cd942c  movk x10,#0x25cb, LSL #16
7102cd9430  movk x10,#0x4, LSL #32
7102cd9434  str x10,[x8, #0xb8]
7102cd9438  mov x10,#0x7a80
7102cd943c  movk x10,#0xfb99, LSL #16
7102cd9440  movk x10,#0x7, LSL #32
7102cd9444  str wzr,[x8, #0xb0]
7102cd9448  str x10,[x8, #0xc0]
7102cd944c  strh wzr,[x8, #0xc8]
7102cd9450  strh w9,[x8, #0xa6]
7102cd9454  ldrh w9,[sp, #0x100]
7102cd9458  strh wzr,[x8, #0xcc]
7102cd945c  strh w9,[x8, #0xca]
7102cd9460  ldrh w9,[sp, #0xfc]
7102cd9464  mov w10,#0xbf800000
7102cd9468  str w10,[x8, #0xd0]
7102cd946c  strh w9,[x8, #0xce]
7102cd9470  ldp x9,x10,[x29, #-0xb0]
7102cd9474  ldur x11,[x29, #-0xa0]
7102cd9478  stur x9,[x8, #0xd4]
7102cd947c  mov w9,#0xffffffff
7102cd9480  str w9,[x8, #0xec]
7102cd9484  orr w9,wzr,#0x3
7102cd9488  stur x11,[x8, #0xe4]
7102cd948c  stur x10,[x8, #0xdc]
7102cd9490  strh w9,[x8, #0xf0]
7102cd9494  ldrh w9,[sp, #0xf8]
7102cd9498  strh w9,[x8, #0xf2]
7102cd949c  str w13,[x8, #0xf4]
7102cd94a0  strh wzr,[x8, #0xf8]
7102cd94a4  strb wzr,[x8, #0xfa]
7102cd94a8  ldr w9,[sp, #0xf0]
7102cd94ac  ldrb w10,[sp, #0xf4]
7102cd94b0  strb w10,[x8, #0xff]
7102cd94b4  stur w9,[x8, #0xfb]
7102cd94b8  str w26,[x8, #0x100]
7102cd94bc  ldr q1,[sp, #0xa0]
7102cd94c0  add x9,x8,#0x104
7102cd94c4  ldr x10,[sp, #0xe0]
7102cd94c8  ldr w11,[sp, #0xe8]
7102cd94cc  str x10,[x9]
7102cd94d0  str w11,[x8, #0x10c]
7102cd94d4  stp q0,q1,[x8, #0x110]
7102cd94d8  str w20,[x8, #0x130]
7102cd94dc  str q0,[x8, #0x140]
7102cd94e0  ldr q0,[sp, #0xb0]
7102cd94e4  str w27,[x8, #0x134]
7102cd94e8  str w20,[x8, #0x160]
7102cd94ec  str q0,[x8, #0x150]
7102cd94f0  str w27,[x8, #0x164]
7102cd94f4  ldr x8,[x21, #0x48]
7102cd94f8  add x8,x8,#0x170
7102cd94fc  str x8,[x21, #0x48]
7102cd9500  b 0x7102cd9844
7102cd9504  ldr x10,[sp, #0x8]
7102cd9508  ldr x25,[x10]
7102cd950c  mov w21,w26
7102cd9510  sub x26,x8,x25
7102cd9514  mov x10,#0x37a7
7102cd9518  movk x10,#0xe9bd, LSL #16
7102cd951c  movk x10,#0x6f4d, LSL #32
7102cd9520  movk x10,#0xd37a, LSL #48
7102cd9524  str x24,[sp, #0x30]
7102cd9528  mov x19,#0xb21
7102cd952c  movk x19,#0xc859, LSL #16
7102cd9530  movk x19,#0x1642, LSL #32
7102cd9534  movk x19,#0xb2, LSL #48
7102cd9538  asr x8,x26,#0x4
7102cd953c  mul x24,x8,x10
7102cd9540  add x8,x24,#0x1
7102cd9544  cmp x8,x19
7102cd9548  b.hi 0x7102cda974
7102cd954c  sub x9,x9,x25
7102cd9550  asr x9,x9,#0x4
7102cd9554  mul x9,x9,x10
7102cd9558  mov x10,#0x858f
7102cd955c  movk x10,#0x642c, LSL #16
7102cd9560  movk x10,#0xb21, LSL #32
7102cd9564  movk x10,#0x59, LSL #48
7102cd9568  mov w28,w20
7102cd956c  cmp x9,x10
7102cd9570  b.hi 0x7102cd9584
7102cd9574  lsl x9,x9,#0x1
7102cd9578  cmp x9,x8
7102cd957c  csel x19,x8,x9,cc
7102cd9580  cbz x19,0x7102cd908c
7102cd9584  mov w8,#0x170
7102cd9588  mul x8,x19,x8
7102cd958c  cmp x8,#0x0
7102cd9590  mov w20,w27
7102cd9594  csinc x27,x8,xzr,ne
7102cd9598  mov w0,#0x10
7102cd959c  mov x1,x27
7102cd95a0  bl 0x710392e290
7102cd95a4  cbnz x0,0x7102cd95e8
7102cd95a8  adrp x8,0x7105332000
7102cd95ac  ldr x0,[x8, #0xf00]
7102cd95b0  cbz x0,0x7102cd95e4
7102cd95b4  stur wzr,[x29, #-0xf8]
7102cd95b8  str x27,[sp, #0xe0]
7102cd95bc  ldr x8,[x0]
7102cd95c0  ldr x8,[x8, #0x30]
7102cd95c4  sub x1,x29,#0xf8
7102cd95c8  add x2,sp,#0xe0
7102cd95cc  blr x8
7102cd95d0  tbz w0,#0x0,0x7102cd95e4
7102cd95d4  mov w0,#0x10
7102cd95d8  mov x1,x27
7102cd95dc  bl 0x710392e290
7102cd95e0  cbnz x0,0x7102cd95e8
7102cd95e4  mov x0,xzr
7102cd95e8  ldr q5,[sp, #0xd0]
7102cd95ec  mov w27,w20
7102cd95f0  mov w14,#0x170
7102cd95f4  madd x8,x24,x14,x0
7102cd95f8  ldr w9,[sp, #0x50]
7102cd95fc  str w9,[x8, #0x28]
7102cd9600  ldr w9,[sp, #0x54]
7102cd9604  str w9,[x8, #0x2c]
7102cd9608  stp q5,q5,[x8]
7102cd960c  ldr w9,[sp, #0x5c]
7102cd9610  str w9,[x8, #0x30]
7102cd9614  ldr w9,[sp, #0x58]
7102cd9618  str w9,[x8, #0x20]
7102cd961c  mov w9,#0x41200000
7102cd9620  str w9,[x8, #0x24]
7102cd9624  ldr w9,[sp, #0x60]
7102cd9628  orr w13,wzr,#0x3f800000
7102cd962c  stp w9,w13,[x8, #0x34]
7102cd9630  ldr w9,[sp, #0x68]
7102cd9634  stp w9,w13,[x8, #0x3c]
7102cd9638  mov x9,#0x1fca
7102cd963c  movk x9,#0x1ed9, LSL #16
7102cd9640  movk x9,#0x3, LSL #32
7102cd9644  ldr w11,[sp, #0x70]
7102cd9648  str x9,[x8, #0x48]
7102cd964c  mov x12,x9
7102cd9650  mov w9,#0x3f
7102cd9654  movk w9,#0x7, LSL #16
7102cd9658  str w9,[x8, #0x50]
7102cd965c  orr w9,wzr,#0x1f
7102cd9660  strb w9,[x8, #0x54]
7102cd9664  ldurh w9,[x29, #-0xe4]
7102cd9668  ldurb w10,[x29, #-0xe2]
7102cd966c  strb w11,[x8, #0x68]
7102cd9670  ldr w11,[sp, #0x78]
7102cd9674  strb w11,[x8, #0x69]
7102cd9678  mov x11,#0x2b3
7102cd967c  movk x11,#0xa2c5, LSL #16
7102cd9680  movk x11,#0x15, LSL #32
7102cd9684  str x11,[x8, #0x58]
7102cd9688  mov x11,#0x800
7102cd968c  movk x11,#0x1, LSL #32
7102cd9690  str x11,[x8, #0x60]
7102cd9694  strb w10,[x8, #0x57]
7102cd9698  sturh w9,[x8, #0x55]
7102cd969c  ldurh w9,[x29, #-0xe8]
7102cd96a0  ldurb w10,[x29, #-0xe6]
7102cd96a4  ldr w11,[sp, #0x80]
7102cd96a8  strb w11,[x8, #0x6d]
7102cd96ac  orr w11,wzr,#0xe
7102cd96b0  strb w10,[x8, #0x6c]
7102cd96b4  strh w9,[x8, #0x6a]
7102cd96b8  ldur w9,[x29, #-0xf0]
7102cd96bc  ldurh w10,[x29, #-0xec]
7102cd96c0  strb w11,[x8, #0x76]
7102cd96c4  orr x11,xzr,#0x100000000
7102cd96c8  strh wzr,[x8, #0x74]
7102cd96cc  str x11,[x8, #0x78]
7102cd96d0  strh wzr,[x8, #0x80]
7102cd96d4  strh w10,[x8, #0x72]
7102cd96d8  stur w9,[x8, #0x6e]
7102cd96dc  ldr q0,[sp, #0x90]
7102cd96e0  ldurh w10,[x29, #-0xf4]
7102cd96e4  ldur w9,[x29, #-0xf8]
7102cd96e8  str q0,[x8, #0x90]
7102cd96ec  str x12,[x8, #0x88]
7102cd96f0  str wzr,[x8, #0xa0]
7102cd96f4  strh wzr,[x8, #0xa4]
7102cd96f8  movi v0.2D,#0x0
7102cd96fc  strh w10,[x8, #0x86]
7102cd9700  stur w9,[x8, #0x82]
7102cd9704  orr x10,xzr,#0x3f8000003f800000
7102cd9708  ldurh w9,[x29, #-0xfc]
7102cd970c  str x10,[x8, #0xa8]
7102cd9710  mov x10,#0xfc4f
7102cd9714  movk x10,#0x25cb, LSL #16
7102cd9718  movk x10,#0x4, LSL #32
7102cd971c  str x10,[x8, #0xb8]
7102cd9720  mov x10,#0x7a80
7102cd9724  movk x10,#0xfb99, LSL #16
7102cd9728  movk x10,#0x7, LSL #32
7102cd972c  str wzr,[x8, #0xb0]
7102cd9730  str x10,[x8, #0xc0]
7102cd9734  strh wzr,[x8, #0xc8]
7102cd9738  strh w9,[x8, #0xa6]
7102cd973c  ldrh w9,[sp, #0x100]
7102cd9740  strh wzr,[x8, #0xcc]
7102cd9744  strh w9,[x8, #0xca]
7102cd9748  ldrh w9,[sp, #0xfc]
7102cd974c  mov w10,#0xbf800000
7102cd9750  str w10,[x8, #0xd0]
7102cd9754  strh w9,[x8, #0xce]
7102cd9758  ldur x11,[x29, #-0xa0]
7102cd975c  ldp x9,x10,[x29, #-0xb0]
7102cd9760  stur x11,[x8, #0xe4]
7102cd9764  mov w11,#0xffffffff
7102cd9768  str w11,[x8, #0xec]
7102cd976c  orr w11,wzr,#0x3
7102cd9770  strh w11,[x8, #0xf0]
7102cd9774  stur x10,[x8, #0xdc]
7102cd9778  stur x9,[x8, #0xd4]
7102cd977c  ldrh w9,[sp, #0xf8]
7102cd9780  str w13,[x8, #0xf4]
7102cd9784  strh wzr,[x8, #0xf8]
7102cd9788  strb wzr,[x8, #0xfa]
7102cd978c  strh w9,[x8, #0xf2]
7102cd9790  ldr w9,[sp, #0xf0]
7102cd9794  ldrb w10,[sp, #0xf4]
7102cd9798  str w21,[x8, #0x100]
7102cd979c  add x21,x8,#0x170
7102cd97a0  strb w10,[x8, #0xff]
7102cd97a4  stur w9,[x8, #0xfb]
7102cd97a8  ldr x9,[sp, #0xe0]
7102cd97ac  add x11,x8,#0x104
7102cd97b0  ldr w10,[sp, #0xe8]
7102cd97b4  str x9,[x11]
7102cd97b8  mov x9,#0xde9b
7102cd97bc  movk x9,#0xa6f4, LSL #16
7102cd97c0  str q0,[x8, #0x140]
7102cd97c4  movk x9,#0xbd37, LSL #32
7102cd97c8  movk x9,#0x4de9, LSL #48
7102cd97cc  smulh x9,x26,x9
7102cd97d0  ldr q1,[sp, #0xa0]
7102cd97d4  str w10,[x8, #0x10c]
7102cd97d8  str w27,[x8, #0x134]
7102cd97dc  stp q0,q1,[x8, #0x110]
7102cd97e0  str w27,[x8, #0x164]
7102cd97e4  ldr q0,[sp, #0xb0]
7102cd97e8  str w28,[x8, #0x130]
7102cd97ec  str w28,[x8, #0x160]
7102cd97f0  str q0,[x8, #0x150]
7102cd97f4  sub x9,x9,x26
7102cd97f8  asr x10,x9,#0x8
7102cd97fc  add x9,x10,x9, LSR #0x3f
7102cd9800  madd x19,x19,x14,x0
7102cd9804  madd x27,x9,x14,x8
7102cd9808  cmp x26,#0x1
7102cd980c  b.lt 0x7102cd9820
7102cd9810  mov x0,x27
7102cd9814  mov x1,x25
7102cd9818  mov x2,x26
7102cd981c  bl 0x71039c00e0
7102cd9820  ldr x8,[sp, #0xc8]
7102cd9824  stp x27,x21,[x8, #0x40]
7102cd9828  ldr x28,[sp, #0x20]
7102cd982c  ldr x24,[sp, #0x30]
7102cd9830  mov x21,x8
7102cd9834  str x19,[x8, #0x50]
7102cd9838  cbz x25,0x7102cd9844
7102cd983c  mov x0,x25
7102cd9840  bl 0x710392eb40
7102cd9844  ldr x8,[sp, #0x40]
7102cd9848  add x22,x22,#0x1
7102cd984c  add x24,x24,#0x20
7102cd9850  add x23,x23,#0x2c
7102cd9854  cmp x22,x8
7102cd9858  b.lt 0x7102cd9094
7102cd985c  mov x9,x21
7102cd9860  ldr x8,[x9, #0x70]!
7102cd9864  str x8,[x9, #0x8]
7102cd9868  mov x10,x9
7102cd986c  mov x24,x9
7102cd9870  ldr x8,[x10, #0x18]!
7102cd9874  str x8,[x9, #0x20]
7102cd9878  str x10,[sp, #0x70]
7102cd987c  mov x10,x9
7102cd9880  ldr x8,[x10, #0x30]!
7102cd9884  ldr x22,[sp, #0x18]
7102cd9888  str x10,[sp, #0x68]
7102cd988c  str x8,[x9, #0x38]
7102cd9890  str x9,[sp, #0x78]
7102cd9894  str xzr,[x24, #0x48]!
7102cd9898  str xzr,[x9, #0x50]
7102cd989c  ldp x8,x9,[x22]
7102cd98a0  sub x8,x9,x8
7102cd98a4  lsr x9,x8,#0x3
7102cd98a8  cmp w9,#0x0
7102cd98ac  b.le 0x7102cda068
7102cd98b0  sbfx x8,x8,#0x3,#0x20
7102cd98b4  str x8,[sp, #0xb0]
7102cd98b8  sub x8,x29,#0xb0
7102cd98bc  orr x25,x8,#0x1
7102cd98c0  adrp x8,0x7104472000
7102cd98c4  ldr s8,[x8, #0x970]
7102cd98c8  fmov s9,0xbf800000
7102cd98cc  sub x9,x29,#0xc8
7102cd98d0  str x24,[sp, #0x60]
7102cd98d4  mov x24,xzr
7102cd98d8  orr x23,x9,#0x1
7102cd98dc  mov w20,#0x1
7102cd98e0  orr x26,xzr,#0x100000000
7102cd98e4  adrp x27,0x7104754000
7102cd98e8  add x27,x27,#0x84
7102cd98ec  str x23,[sp, #0xa0]
7102cd98f0  str x25,[sp, #0x90]
7102cd98f4  ldurb w8,[x29, #-0xc8]
7102cd98f8  ldur x9,[x29, #-0xb8]
7102cd98fc  add x4,x24,#0x1
7102cd9900  stp xzr,xzr,[x29, #-0x90]
7102cd9904  str x4,[sp, #0xd0]
7102cd9908  stp xzr,xzr,[x29, #-0xa0]
7102cd990c  tst w8,#0x1
7102cd9910  stp xzr,xzr,[x29, #-0xb0]
7102cd9914  csel x3,x23,x9,eq
7102cd9918  sub x0,x29,#0xb0
7102cd991c  mov w1,#0x31
7102cd9920  adrp x2,0x71043ff000
7102cd9924  add x2,x2,#0x675
7102cd9928  sturh wzr,[x29, #-0x80]
7102cd992c  bl 0x71039c04d0
7102cd9930  ldr x8,[x21]
7102cd9934  ldr x8,[x8, #0x300]
7102cd9938  ldr x9,[x8, #0x18]
7102cd993c  ldp x8,x9,[x9]
7102cd9940  mov w17,#0xffffffff
7102cd9944  cmp x8,x9
7102cd9948  b.eq 0x7102cd9c00
7102cd994c  ldurb w10,[x29, #-0xb0]
7102cd9950  ldr x19,[x8]
7102cd9954  cbz w10,0x7102cd99a4
7102cd9958  mov x11,xzr
7102cd995c  mov x12,x25
7102cd9960  mov w14,w10
7102cd9964  mov w13,w17
7102cd9968  and w14,w14,#0xff
7102cd996c  sub w15,w14,#0x41
7102cd9970  add w16,w14,#0x20
7102cd9974  cmp w15,#0x1a
7102cd9978  csel w14,w16,w14,cc
7102cd997c  eor w14,w14,w13
7102cd9980  and w14,w14,#0xff
7102cd9984  ldr w14,[x27, w14, UXTW #0x2]
7102cd9988  eor w13,w14,w13, LSR #0x8
7102cd998c  ldrb w14,[x12], #0x1
7102cd9990  add x11,x11,x26
7102cd9994  cbnz w14,0x7102cd9968
7102cd9998  mvn w12,w13
7102cd999c  and x11,x11,#0xff00000000
7102cd99a0  b 0x7102cd99ac
7102cd99a4  mov x12,xzr
7102cd99a8  mov x11,xzr
7102cd99ac  orr x11,x11,x12
7102cd99b0  ldr x12,[x19, #0xa0]
7102cd99b4  and x12,x12,#0xffffffffff
7102cd99b8  cmp x12,x11
7102cd99bc  b.eq 0x7102cd99d0
7102cd99c0  add x8,x8,#0x8
7102cd99c4  cmp x8,x9
7102cd99c8  b.ne 0x7102cd9950
7102cd99cc  b 0x7102cd9c00
7102cd99d0  ldr x8,[x21, #0x8]
7102cd99d4  ldr s10,[x8, #0x98]
7102cd99d8  ldr x8,[x22]
7102cd99dc  add x8,x8,x24, LSL #0x3
7102cd99e0  ldp s11,s0,[x8]
7102cd99e4  ldr x8,[x19, #0x110]
7102cd99e8  mov w2,#0x1
7102cd99ec  str q0,[sp, #0x80]
7102cd99f0  ldp x0,x1,[x8]
7102cd99f4  bl 0x71025f4d80
7102cd99f8  ldr x9,[x19, #0x110]
7102cd99fc  ldr q5,[sp, #0x80]
7102cd9a00  fmov s4,0x3f800000
7102cd9a04  ldp x8,x9,[x9]
7102cd9a08  cmp x8,x9
7102cd9a0c  b.eq 0x7102cd9adc
7102cd9a10  fadd s0,s10,s11
7102cd9a14  movi v1.2D,#0x0
7102cd9a18  mov v1.S[0x0],v0.S[0x0]
7102cd9a1c  mov v1.S[0x1],v5.S[0x0]
7102cd9a20  ldr x10,[x8]
7102cd9a24  ldr x12,[x10, #0x8]
7102cd9a28  ldrb w13,[x12, #0xe7]
7102cd9a2c  ldrb w12,[x12, #0xe8]
7102cd9a30  ldrb w11,[x10, #0x128]
7102cd9a34  cmp w11,#0x0
7102cd9a38  orr w12,w12,w13
7102cd9a3c  and w11,w12,#0xff
7102cd9a40  ccmp w11,#0x0,#0x0,ne
7102cd9a44  b.eq 0x7102cd9a50
7102cd9a48  strb w20,[x10, #0x129]
7102cd9a4c  b 0x7102cd9a74
7102cd9a50  ldr q2,[x10, #0x10]
7102cd9a54  fabd s3,s2,s0
7102cd9a58  fcmp s3,s8
7102cd9a5c  b.gt 0x7102cd9a70
7102cd9a60  dup s2,v2.S[0x1]
7102cd9a64  fabd s2,s2,s5
7102cd9a68  fcmp s2,s8
7102cd9a6c  b.le 0x7102cd9a78
7102cd9a70  strb w20,[x10, #0x12a]
7102cd9a74  str q1,[x10, #0x10]
7102cd9a78  ldr s2,[x10, #0x30]
7102cd9a7c  fabs s2,s2
7102cd9a80  fcmp s2,s8
7102cd9a84  b.mi 0x7102cd9a90
7102cd9a88  str wzr,[x10, #0x30]
7102cd9a8c  strb w20,[x10, #0x129]
7102cd9a90  ldr q2,[x10, #0x50]
7102cd9a94  fadd s3,s2,s9
7102cd9a98  fabs s3,s3
7102cd9a9c  fcmp s3,s8
7102cd9aa0  b.mi 0x7102cd9ab0
7102cd9aa4  mov v2.S[0x0],v4.S[0x0]
7102cd9aa8  strb w20,[x10, #0x129]
7102cd9aac  str q2,[x10, #0x50]
7102cd9ab0  dup s3,v2.S[0x1]
7102cd9ab4  fadd s3,s3,s9
7102cd9ab8  fabs s3,s3
7102cd9abc  fcmp s3,s8
7102cd9ac0  b.mi 0x7102cd9ad0
7102cd9ac4  mov v2.S[0x1],v4.S[0x0]
7102cd9ac8  strb w20,[x10, #0x129]
7102cd9acc  str q2,[x10, #0x50]
7102cd9ad0  add x8,x8,#0x8
7102cd9ad4  cmp x9,x8
7102cd9ad8  b.ne 0x7102cd9a20
7102cd9adc  ldp x9,x8,[x21, #0x90]
7102cd9ae0  cmp x9,x8
7102cd9ae4  b.cs 0x7102cd9afc
7102cd9ae8  str x19,[x9]
7102cd9aec  ldr x8,[x21, #0x90]
7102cd9af0  add x8,x8,#0x8
7102cd9af4  str x8,[x21, #0x90]
7102cd9af8  b 0x7102cd9c00
7102cd9afc  ldr x10,[sp, #0x70]
7102cd9b00  ldr x28,[x10]
7102cd9b04  sub x22,x9,x28
7102cd9b08  asr x21,x22,#0x3
7102cd9b0c  add x9,x21,#0x1
7102cd9b10  lsr x10,x9,#0x3d
7102cd9b14  cbnz x10,0x7102cda984
7102cd9b18  sub x8,x8,x28
7102cd9b1c  asr x10,x8,#0x3
7102cd9b20  orr x11,xzr,#0xffffffffffffffe
7102cd9b24  cmp x10,x11
7102cd9b28  b.hi 0x7102cd9b48
7102cd9b2c  asr x8,x8,#0x2
7102cd9b30  cmp x8,x9
7102cd9b34  csel x25,x9,x8,cc
7102cd9b38  cbz x25,0x7102cd9bb0
7102cd9b3c  lsr x8,x25,#0x3d
7102cd9b40  cbz x8,0x7102cd9b4c
7102cd9b44  b 0x7102cda8b0
7102cd9b48  orr x25,xzr,#0x1fffffffffffffff
7102cd9b4c  lsl x8,x25,#0x3
7102cd9b50  cmp x8,#0x0
7102cd9b54  csinc x1,x8,xzr,ne
7102cd9b58  mov w0,#0x10
7102cd9b5c  str x1,[sp, #0x80]
7102cd9b60  bl 0x710392e290
7102cd9b64  mov x23,x0
7102cd9b68  cbnz x0,0x7102cd9bb4
7102cd9b6c  adrp x8,0x7105332000
7102cd9b70  ldr x0,[x8, #0xf00]
7102cd9b74  cbz x0,0x7102cd9bb0
7102cd9b78  ldr x8,[sp, #0x80]
7102cd9b7c  stur wzr,[x29, #-0xf0]
7102cd9b80  sub x1,x29,#0xf0
7102cd9b84  add x2,sp,#0xe0
7102cd9b88  str x8,[sp, #0xe0]
7102cd9b8c  ldr x8,[x0]
7102cd9b90  ldr x8,[x8, #0x30]
7102cd9b94  blr x8
7102cd9b98  tbz w0,#0x0,0x7102cd9bb0
7102cd9b9c  ldr x1,[sp, #0x80]
7102cd9ba0  mov w0,#0x10
7102cd9ba4  bl 0x710392e290
7102cd9ba8  mov x23,x0
7102cd9bac  cbnz x0,0x7102cd9bb4
7102cd9bb0  mov x23,xzr
7102cd9bb4  add x21,x23,x21, LSL #0x3
7102cd9bb8  cmp x22,#0x1
7102cd9bbc  str x19,[x21], #0x8
7102cd9bc0  add x19,x23,x25, LSL #0x3
7102cd9bc4  b.lt 0x7102cd9bd8
7102cd9bc8  mov x0,x23
7102cd9bcc  mov x1,x28
7102cd9bd0  mov x2,x22
7102cd9bd4  bl 0x71039c00e0
7102cd9bd8  ldr x8,[sp, #0xc8]
7102cd9bdc  stp x23,x21,[x8, #0x88]
7102cd9be0  ldr x22,[sp, #0x18]
7102cd9be4  ldr x23,[sp, #0xa0]
7102cd9be8  ldr x25,[sp, #0x90]
7102cd9bec  mov x21,x8
7102cd9bf0  str x19,[x8, #0x98]
7102cd9bf4  cbz x28,0x7102cd9c00
7102cd9bf8  mov x0,x28
7102cd9bfc  bl 0x710392eb40
7102cd9c00  ldurb w8,[x29, #-0xc8]
7102cd9c04  ldur x9,[x29, #-0xb8]
7102cd9c08  tst w8,#0x1
7102cd9c0c  ldr x4,[sp, #0xd0]
7102cd9c10  stp xzr,xzr,[x29, #-0x90]
7102cd9c14  stp xzr,xzr,[x29, #-0xb0]
7102cd9c18  csel x3,x23,x9,eq
7102cd9c1c  sub x0,x29,#0xb0
7102cd9c20  mov w1,#0x31
7102cd9c24  adrp x2,0x710427e000
7102cd9c28  add x2,x2,#0xd68
7102cd9c2c  sturh wzr,[x29, #-0x80]
7102cd9c30  stp xzr,xzr,[x29, #-0xa0]
7102cd9c34  bl 0x71039c04d0
7102cd9c38  ldr x8,[x21]
7102cd9c3c  ldr x8,[x8, #0x300]
7102cd9c40  ldr x9,[x8, #0x18]
7102cd9c44  ldp x8,x9,[x9]
7102cd9c48  mov w17,#0xffffffff
7102cd9c4c  cmp x8,x9
7102cd9c50  b.eq 0x7102cd9f08
7102cd9c54  ldurb w10,[x29, #-0xb0]
7102cd9c58  ldr x19,[x8]
7102cd9c5c  cbz w10,0x7102cd9cac
7102cd9c60  mov x11,xzr
7102cd9c64  mov x12,x25
7102cd9c68  mov w14,w10
7102cd9c6c  mov w13,w17
7102cd9c70  and w14,w14,#0xff
7102cd9c74  sub w15,w14,#0x41
7102cd9c78  add w16,w14,#0x20
7102cd9c7c  cmp w15,#0x1a
7102cd9c80  csel w14,w16,w14,cc
7102cd9c84  eor w14,w14,w13
7102cd9c88  and w14,w14,#0xff
7102cd9c8c  ldr w14,[x27, w14, UXTW #0x2]
7102cd9c90  eor w13,w14,w13, LSR #0x8
7102cd9c94  ldrb w14,[x12], #0x1
7102cd9c98  add x11,x11,x26
7102cd9c9c  cbnz w14,0x7102cd9c70
7102cd9ca0  mvn w12,w13
7102cd9ca4  and x11,x11,#0xff00000000
7102cd9ca8  b 0x7102cd9cb4
7102cd9cac  mov x12,xzr
7102cd9cb0  mov x11,xzr
7102cd9cb4  orr x11,x11,x12
7102cd9cb8  ldr x12,[x19, #0xa0]
7102cd9cbc  and x12,x12,#0xffffffffff
7102cd9cc0  cmp x12,x11
7102cd9cc4  b.eq 0x7102cd9cd8
7102cd9cc8  add x8,x8,#0x8
7102cd9ccc  cmp x8,x9
7102cd9cd0  b.ne 0x7102cd9c58
7102cd9cd4  b 0x7102cd9f08
7102cd9cd8  ldr x8,[x21, #0x8]
7102cd9cdc  ldr s10,[x8, #0x9c]
7102cd9ce0  ldr x8,[x22]
7102cd9ce4  add x8,x8,x24, LSL #0x3
7102cd9ce8  ldp s11,s0,[x8]
7102cd9cec  ldr x8,[x19, #0x110]
7102cd9cf0  mov w2,#0x1
7102cd9cf4  str q0,[sp, #0x80]
7102cd9cf8  ldp x0,x1,[x8]
7102cd9cfc  bl 0x71025f4d80
7102cd9d00  ldr x9,[x19, #0x110]
7102cd9d04  ldr q5,[sp, #0x80]
7102cd9d08  fmov s4,0x3f800000
7102cd9d0c  ldp x8,x9,[x9]
7102cd9d10  cmp x8,x9
7102cd9d14  b.eq 0x7102cd9de4
7102cd9d18  fsub s0,s10,s11
7102cd9d1c  movi v1.2D,#0x0
7102cd9d20  mov v1.S[0x0],v0.S[0x0]
7102cd9d24  mov v1.S[0x1],v5.S[0x0]
7102cd9d28  ldr x10,[x8]
7102cd9d2c  ldr x12,[x10, #0x8]
7102cd9d30  ldrb w13,[x12, #0xe7]
7102cd9d34  ldrb w12,[x12, #0xe8]
7102cd9d38  ldrb w11,[x10, #0x128]
7102cd9d3c  cmp w11,#0x0
7102cd9d40  orr w12,w12,w13
7102cd9d44  and w11,w12,#0xff
7102cd9d48  ccmp w11,#0x0,#0x0,ne
7102cd9d4c  b.eq 0x7102cd9d58
7102cd9d50  strb w20,[x10, #0x129]
7102cd9d54  b 0x7102cd9d7c
7102cd9d58  ldr q2,[x10, #0x10]
7102cd9d5c  fabd s3,s2,s0
7102cd9d60  fcmp s3,s8
7102cd9d64  b.gt 0x7102cd9d78
7102cd9d68  dup s2,v2.S[0x1]
7102cd9d6c  fabd s2,s2,s5
7102cd9d70  fcmp s2,s8
7102cd9d74  b.le 0x7102cd9d80
7102cd9d78  strb w20,[x10, #0x12a]
7102cd9d7c  str q1,[x10, #0x10]
7102cd9d80  ldr s2,[x10, #0x30]
7102cd9d84  fabs s2,s2
7102cd9d88  fcmp s2,s8
7102cd9d8c  b.mi 0x7102cd9d98
7102cd9d90  str wzr,[x10, #0x30]
7102cd9d94  strb w20,[x10, #0x129]
7102cd9d98  ldr q2,[x10, #0x50]
7102cd9d9c  fadd s3,s2,s9
7102cd9da0  fabs s3,s3
7102cd9da4  fcmp s3,s8
7102cd9da8  b.mi 0x7102cd9db8
7102cd9dac  mov v2.S[0x0],v4.S[0x0]
7102cd9db0  strb w20,[x10, #0x129]
7102cd9db4  str q2,[x10, #0x50]
7102cd9db8  dup s3,v2.S[0x1]
7102cd9dbc  fadd s3,s3,s9
7102cd9dc0  fabs s3,s3
7102cd9dc4  fcmp s3,s8
7102cd9dc8  b.mi 0x7102cd9dd8
7102cd9dcc  mov v2.S[0x1],v4.S[0x0]
7102cd9dd0  strb w20,[x10, #0x129]
7102cd9dd4  str q2,[x10, #0x50]
7102cd9dd8  add x8,x8,#0x8
7102cd9ddc  cmp x9,x8
7102cd9de0  b.ne 0x7102cd9d28
7102cd9de4  ldp x9,x8,[x21, #0xa8]
7102cd9de8  cmp x9,x8
7102cd9dec  b.cs 0x7102cd9e04
7102cd9df0  str x19,[x9]
7102cd9df4  ldr x8,[x21, #0xa8]
7102cd9df8  add x8,x8,#0x8
7102cd9dfc  str x8,[x21, #0xa8]
7102cd9e00  b 0x7102cd9f08
7102cd9e04  ldr x10,[sp, #0x68]
7102cd9e08  ldr x28,[x10]
7102cd9e0c  sub x22,x9,x28
7102cd9e10  asr x21,x22,#0x3
7102cd9e14  add x9,x21,#0x1
7102cd9e18  lsr x10,x9,#0x3d
7102cd9e1c  cbnz x10,0x7102cda98c
7102cd9e20  sub x8,x8,x28
7102cd9e24  asr x10,x8,#0x3
7102cd9e28  orr x11,xzr,#0xffffffffffffffe
7102cd9e2c  cmp x10,x11
7102cd9e30  b.hi 0x7102cd9e50
7102cd9e34  asr x8,x8,#0x2
7102cd9e38  cmp x8,x9
7102cd9e3c  csel x25,x9,x8,cc
7102cd9e40  cbz x25,0x7102cd9eb8
7102cd9e44  lsr x8,x25,#0x3d
7102cd9e48  cbz x8,0x7102cd9e54
7102cd9e4c  b 0x7102cda8b0
7102cd9e50  orr x25,xzr,#0x1fffffffffffffff
7102cd9e54  lsl x8,x25,#0x3
7102cd9e58  cmp x8,#0x0
7102cd9e5c  csinc x1,x8,xzr,ne
7102cd9e60  mov w0,#0x10
7102cd9e64  str x1,[sp, #0x80]
7102cd9e68  bl 0x710392e290
7102cd9e6c  mov x23,x0
7102cd9e70  cbnz x0,0x7102cd9ebc
7102cd9e74  adrp x8,0x7105332000
7102cd9e78  ldr x0,[x8, #0xf00]
7102cd9e7c  cbz x0,0x7102cd9eb8
7102cd9e80  ldr x8,[sp, #0x80]
7102cd9e84  stur wzr,[x29, #-0xf0]
7102cd9e88  sub x1,x29,#0xf0
7102cd9e8c  add x2,sp,#0xe0
7102cd9e90  str x8,[sp, #0xe0]
7102cd9e94  ldr x8,[x0]
7102cd9e98  ldr x8,[x8, #0x30]
7102cd9e9c  blr x8
7102cd9ea0  tbz w0,#0x0,0x7102cd9eb8
7102cd9ea4  ldr x1,[sp, #0x80]
7102cd9ea8  mov w0,#0x10
7102cd9eac  bl 0x710392e290
7102cd9eb0  mov x23,x0
7102cd9eb4  cbnz x0,0x7102cd9ebc
7102cd9eb8  mov x23,xzr
7102cd9ebc  add x21,x23,x21, LSL #0x3
7102cd9ec0  cmp x22,#0x1
7102cd9ec4  str x19,[x21], #0x8
7102cd9ec8  add x19,x23,x25, LSL #0x3
7102cd9ecc  b.lt 0x7102cd9ee0
7102cd9ed0  mov x0,x23
7102cd9ed4  mov x1,x28
7102cd9ed8  mov x2,x22
7102cd9edc  bl 0x71039c00e0
7102cd9ee0  ldr x8,[sp, #0xc8]
7102cd9ee4  stp x23,x21,[x8, #0xa0]
7102cd9ee8  ldr x22,[sp, #0x18]
7102cd9eec  ldr x23,[sp, #0xa0]
7102cd9ef0  ldr x25,[sp, #0x90]
7102cd9ef4  mov x21,x8
7102cd9ef8  str x19,[x8, #0xb0]
7102cd9efc  cbz x28,0x7102cd9f08
7102cd9f00  mov x0,x28
7102cd9f04  bl 0x710392eb40
7102cd9f08  ldr x8,[x22]
7102cd9f0c  add x8,x8,x24, LSL #0x3
7102cd9f10  ldr w19,[x8]
7102cd9f14  ldr s0,[x8, #0x4]
7102cd9f18  ldr x8,[x21, #0x8]
7102cd9f1c  ldr s1,[x8, #0x6cc]
7102cd9f20  ldp x9,x8,[x21, #0x78]
7102cd9f24  cmp x9,x8
7102cd9f28  fadd s10,s0,s1
7102cd9f2c  b.cs 0x7102cd9f48
7102cd9f30  str w19,[x9]
7102cd9f34  str s10,[x9, #0x4]
7102cd9f38  ldr x8,[x21, #0x78]
7102cd9f3c  add x8,x8,#0x8
7102cd9f40  str x8,[x21, #0x78]
7102cd9f44  b 0x7102cda050
7102cd9f48  ldr x10,[sp, #0x78]
7102cd9f4c  ldr x28,[x10]
7102cd9f50  sub x22,x9,x28
7102cd9f54  asr x25,x22,#0x3
7102cd9f58  add x9,x25,#0x1
7102cd9f5c  lsr x10,x9,#0x3d
7102cd9f60  cbnz x10,0x7102cda97c
7102cd9f64  sub x8,x8,x28
7102cd9f68  asr x10,x8,#0x3
7102cd9f6c  orr x11,xzr,#0xffffffffffffffe
7102cd9f70  cmp x10,x11
7102cd9f74  b.hi 0x7102cd9f94
7102cd9f78  asr x8,x8,#0x2
7102cd9f7c  cmp x8,x9
7102cd9f80  csel x21,x9,x8,cc
7102cd9f84  cbz x21,0x7102cd9ff8
7102cd9f88  lsr x8,x21,#0x3d
7102cd9f8c  cbz x8,0x7102cd9f98
7102cd9f90  b 0x7102cda8b0
7102cd9f94  orr x21,xzr,#0x1fffffffffffffff
7102cd9f98  lsl x8,x21,#0x3
7102cd9f9c  cmp x8,#0x0
7102cd9fa0  csinc x24,x8,xzr,ne
7102cd9fa4  mov w0,#0x10
7102cd9fa8  mov x1,x24
7102cd9fac  bl 0x710392e290
7102cd9fb0  mov x23,x0
7102cd9fb4  cbnz x0,0x7102cd9ffc
7102cd9fb8  adrp x8,0x7105332000
7102cd9fbc  ldr x0,[x8, #0xf00]
7102cd9fc0  cbz x0,0x7102cd9ff8
7102cd9fc4  stur wzr,[x29, #-0xf0]
7102cd9fc8  str x24,[sp, #0xe0]
7102cd9fcc  ldr x8,[x0]
7102cd9fd0  ldr x8,[x8, #0x30]
7102cd9fd4  sub x1,x29,#0xf0
7102cd9fd8  add x2,sp,#0xe0
7102cd9fdc  blr x8
7102cd9fe0  tbz w0,#0x0,0x7102cd9ff8
7102cd9fe4  mov w0,#0x10
7102cd9fe8  mov x1,x24
7102cd9fec  bl 0x710392e290
7102cd9ff0  mov x23,x0
7102cd9ff4  cbnz x0,0x7102cd9ffc
7102cd9ff8  mov x23,xzr
7102cd9ffc  add x8,x23,x25, LSL #0x3
7102cda000  add x21,x23,x21, LSL #0x3
7102cda004  str w19,[x8]
7102cda008  add x19,x8,#0x8
7102cda00c  cmp x22,#0x1
7102cda010  str s10,[x8, #0x4]
7102cda014  b.lt 0x7102cda028
7102cda018  mov x0,x23
7102cda01c  mov x1,x28
7102cda020  mov x2,x22
7102cda024  bl 0x71039c00e0
7102cda028  ldr x8,[sp, #0xc8]
7102cda02c  stp x23,x19,[x8, #0x70]
7102cda030  ldr x22,[sp, #0x18]
7102cda034  ldr x23,[sp, #0xa0]
7102cda038  ldr x25,[sp, #0x90]
7102cda03c  str x21,[x8, #0x80]
7102cda040  mov x21,x8
7102cda044  cbz x28,0x7102cda050
7102cda048  mov x0,x28
7102cda04c  bl 0x710392eb40
7102cda050  ldr x8,[sp, #0xb0]
7102cda054  ldr x24,[sp, #0xd0]
7102cda058  cmp x24,x8
7102cda05c  b.lt 0x7102cd98f4
7102cda060  ldr x24,[sp, #0x60]
7102cda064  b 0x7102cda070
7102cda068  sub x8,x29,#0xc8
7102cda06c  orr x23,x8,#0x1
7102cda070  ldr x8,[x21]
7102cda074  ldr x9,[x8, #0x300]
7102cda078  ldurb w8,[x29, #-0xc8]
7102cda07c  ldur x10,[x29, #-0xb8]
7102cda080  tst w8,#0x1
7102cda084  csel x8,x23,x10,eq
7102cda088  ldr x10,[x9, #0x18]
7102cda08c  ldp x9,x10,[x10]
7102cda090  cmp x9,x10
7102cda094  b.eq 0x7102cda33c
7102cda098  ldrb w11,[x8], #0x1
7102cda09c  mov w12,#0xffffffff
7102cda0a0  orr x13,xzr,#0x100000000
7102cda0a4  adrp x14,0x7104754000
7102cda0a8  add x14,x14,#0x84
7102cda0ac  ldr x19,[x9]
7102cda0b0  cbz w11,0x7102cda100
7102cda0b4  mov x15,xzr
7102cda0b8  mov x16,x8
7102cda0bc  mov w18,w11
7102cda0c0  mov w17,w12
7102cda0c4  and w18,w18,#0xff
7102cda0c8  sub w0,w18,#0x41
7102cda0cc  add w1,w18,#0x20
7102cda0d0  cmp w0,#0x1a
7102cda0d4  csel w18,w1,w18,cc
7102cda0d8  eor w18,w18,w17
7102cda0dc  and w18,w18,#0xff
7102cda0e0  ldr w18,[x14, w18, UXTW #0x2]
7102cda0e4  eor w17,w18,w17, LSR #0x8
7102cda0e8  ldrb w18,[x16], #0x1
7102cda0ec  add x15,x15,x13
7102cda0f0  cbnz w18,0x7102cda0c4
7102cda0f4  mvn w16,w17
7102cda0f8  and x15,x15,#0xff00000000
7102cda0fc  b 0x7102cda108
7102cda100  mov x16,xzr
7102cda104  mov x15,xzr
7102cda108  orr x15,x15,x16
7102cda10c  ldr x16,[x19, #0xa0]
7102cda110  and x16,x16,#0xffffffffff
7102cda114  cmp x16,x15
7102cda118  b.eq 0x7102cda12c
7102cda11c  add x9,x9,#0x8
7102cda120  cmp x9,x10
7102cda124  b.ne 0x7102cda0ac
7102cda128  b 0x7102cda33c
7102cda12c  ldr x8,[x21, #0x8]
7102cda130  ldr s0,[x8, #0x98]
7102cda134  ldr x8,[x19, #0x110]
7102cda138  str q0,[sp, #0xd0]
7102cda13c  ldp x0,x1,[x8]
7102cda140  mov w2,#0x1
7102cda144  mov w20,#0x1
7102cda148  bl 0x71025f4d80
7102cda14c  ldr x9,[x19, #0x110]
7102cda150  ldr q6,[sp, #0xd0]
7102cda154  ldp x8,x9,[x9]
7102cda158  cmp x8,x9
7102cda15c  b.eq 0x7102cda234
7102cda160  movi v0.2D,#0x0
7102cda164  mov v0.S[0x0],v6.S[0x0]
7102cda168  adrp x10,0x7104472000
7102cda16c  ldr s1,[x10, #0x970]
7102cda170  fmov s2,0xbf800000
7102cda174  fmov s3,0x3f800000
7102cda178  ldr x10,[x8]
7102cda17c  ldr x12,[x10, #0x8]
7102cda180  ldrb w13,[x12, #0xe7]
7102cda184  ldrb w12,[x12, #0xe8]
7102cda188  ldrb w11,[x10, #0x128]
7102cda18c  cmp w11,#0x0
7102cda190  orr w12,w12,w13
7102cda194  and w11,w12,#0xff
7102cda198  ccmp w11,#0x0,#0x0,ne
7102cda19c  b.eq 0x7102cda1a8
7102cda1a0  strb w20,[x10, #0x129]
7102cda1a4  b 0x7102cda1cc
7102cda1a8  ldr q4,[x10, #0x10]
7102cda1ac  fabd s5,s4,s6
7102cda1b0  fcmp s5,s1
7102cda1b4  b.gt 0x7102cda1c8
7102cda1b8  dup s4,v4.S[0x1]
7102cda1bc  fabs s4,s4
7102cda1c0  fcmp s4,s1
7102cda1c4  b.le 0x7102cda1d0
7102cda1c8  strb w20,[x10, #0x12a]
7102cda1cc  str q0,[x10, #0x10]
7102cda1d0  ldr s4,[x10, #0x30]
7102cda1d4  fabs s4,s4
7102cda1d8  fcmp s4,s1
7102cda1dc  b.mi 0x7102cda1e8
7102cda1e0  str wzr,[x10, #0x30]
7102cda1e4  strb w20,[x10, #0x129]
7102cda1e8  ldr q4,[x10, #0x50]
7102cda1ec  fadd s5,s4,s2
7102cda1f0  fabs s5,s5
7102cda1f4  fcmp s5,s1
7102cda1f8  b.mi 0x7102cda208
7102cda1fc  mov v4.S[0x0],v3.S[0x0]
7102cda200  strb w20,[x10, #0x129]
7102cda204  str q4,[x10, #0x50]
7102cda208  dup s5,v4.S[0x1]
7102cda20c  fadd s5,s5,s2
7102cda210  fabs s5,s5
7102cda214  fcmp s5,s1
7102cda218  b.mi 0x7102cda228
7102cda21c  mov v4.S[0x1],v3.S[0x0]
7102cda220  strb w20,[x10, #0x129]
7102cda224  str q4,[x10, #0x50]
7102cda228  add x8,x8,#0x8
7102cda22c  cmp x9,x8
7102cda230  b.ne 0x7102cda178
7102cda234  str x19,[x24]
7102cda238  ldr x9,[x19, #0x130]
7102cda23c  cbz x9,0x7102cda33c
7102cda240  str x9,[x21, #0x30]
7102cda244  ldp x8,x9,[x9]
7102cda248  cmp x8,x9
7102cda24c  b.eq 0x7102cda33c
7102cda250  ldr x11,[x8]
7102cda254  ldrb w10,[x11, #0x20]
7102cda258  cbz w10,0x7102cda2b8
7102cda25c  ldp x13,x10,[x11, #0x8]
7102cda260  ldr x12,[x11]
7102cda264  strb wzr,[x11, #0x20]
7102cda268  str x12,[x13]
7102cda26c  str x13,[x12, #0x8]
7102cda270  ldr x12,[x10, #0x18]
7102cda274  sub x12,x12,#0x1
7102cda278  str x12,[x10, #0x18]
7102cda27c  stp xzr,xzr,[x11]
7102cda280  ldr x13,[x10, #0x40]
7102cda284  add x12,x10,#0x38
7102cda288  stp x12,x13,[x11]
7102cda28c  str x11,[x10, #0x40]
7102cda290  str x11,[x13]
7102cda294  ldr x12,[x10, #0x30]
7102cda298  add x12,x12,#0x1
7102cda29c  str x12,[x10, #0x30]
7102cda2a0  ldr x11,[x11, #0x18]
7102cda2a4  cbz x11,0x7102cda2ac
7102cda2a8  ldr w11,[x11, #0x110]
7102cda2ac  ldr w12,[x10, #0x48]
7102cda2b0  sub w11,w12,w11
7102cda2b4  str w11,[x10, #0x48]
7102cda2b8  add x8,x8,#0x8
7102cda2bc  cmp x9,x8
7102cda2c0  b.ne 0x7102cda250
7102cda2c4  ldr x9,[x21, #0x30]
7102cda2c8  ldp x8,x9,[x9]
7102cda2cc  cmp x8,x9
7102cda2d0  b.eq 0x7102cda33c
7102cda2d4  adrp x10,0x7104471000
7102cda2d8  ldr s1,[x10, #0xf60]
7102cda2dc  fmov s0,wzr
7102cda2e0  orr w10,wzr,#0x3f800000
7102cda2e4  orr x11,xzr,#0x3f80000000000000
7102cda2e8  ldr x12,[x8], #0x8
7102cda2ec  ldr q2,[x12, #0x30]
7102cda2f0  fmul s4,s0,v2.S[0x1]
7102cda2f4  dup s3,v2.S[0x1]
7102cda2f8  fsub s4,s4,s2
7102cda2fc  fmul s2,s1,v2.S[0x0]
7102cda300  fsub s2,s2,s3
7102cda304  fadd s3,s4,s0
7102cda308  fadd s2,s2,s0
7102cda30c  fmul s4,s3,s0
7102cda310  fmul s5,s2,s0
7102cda314  fadd s4,s4,s2
7102cda318  fadd s2,s3,s5
7102cda31c  fadd s3,s4,s0
7102cda320  fadd s2,s6,s2
7102cda324  cmp x9,x8
7102cda328  str x10,[x12, #0x40]
7102cda32c  stur x11,[x12, #0x4c]
7102cda330  str s3,[x12, #0x54]
7102cda334  str s2,[x12, #0x48]
7102cda338  b.ne 0x7102cda2e8
7102cda33c  adrp x1,0x7104420000
7102cda340  add x1,x1,#0x6e6
7102cda344  sub x8,x29,#0xb0
7102cda348  sub x0,x29,#0xc8
7102cda34c  sub x19,x29,#0xb0
7102cda350  bl 0x710143dde0
7102cda354  ldr x8,[x21]
7102cda358  ldr x9,[x8, #0x300]
7102cda35c  ldurb w10,[x29, #-0xb0]
7102cda360  and w8,w10,#0x1
7102cda364  tst w10,#0x1
7102cda368  ldr x10,[x9, #0x18]
7102cda36c  ldur x11,[x29, #-0xa0]
7102cda370  ldp x9,x10,[x10]
7102cda374  orr x12,x19,#0x1
7102cda378  csel x12,x12,x11,eq
7102cda37c  cmp x9,x10
7102cda380  b.eq 0x7102cda6d4
7102cda384  ldrb w13,[x12], #0x1
7102cda388  mov w14,#0xffffffff
7102cda38c  orr x15,xzr,#0x100000000
7102cda390  mov x16,x9
7102cda394  adrp x11,0x7104754000
7102cda398  add x11,x11,#0x84
7102cda39c  ldr x19,[x16]
7102cda3a0  cbz w13,0x7102cda3f0
7102cda3a4  mov x17,xzr
7102cda3a8  mov x18,x12
7102cda3ac  mov w1,w13
7102cda3b0  mov w0,w14
7102cda3b4  and w1,w1,#0xff
7102cda3b8  sub w2,w1,#0x41
7102cda3bc  add w3,w1,#0x20
7102cda3c0  cmp w2,#0x1a
7102cda3c4  csel w1,w3,w1,cc
7102cda3c8  eor w1,w1,w0
7102cda3cc  and w1,w1,#0xff
7102cda3d0  ldr w1,[x11, w1, UXTW #0x2]
7102cda3d4  eor w0,w1,w0, LSR #0x8
7102cda3d8  ldrb w1,[x18], #0x1
7102cda3dc  add x17,x17,x15
7102cda3e0  cbnz w1,0x7102cda3b4
7102cda3e4  mvn w18,w0
7102cda3e8  and x17,x17,#0xff00000000
7102cda3ec  b 0x7102cda3f8
7102cda3f0  mov x18,xzr
7102cda3f4  mov x17,xzr
7102cda3f8  orr x17,x17,x18
7102cda3fc  ldr x18,[x19, #0xa0]
7102cda400  and x18,x18,#0xffffffffff
7102cda404  cmp x18,x17
7102cda408  b.eq 0x7102cda4bc
7102cda40c  add x16,x16,#0x8
7102cda410  cmp x16,x10
7102cda414  b.ne 0x7102cda39c
7102cda418  ldurb w12,[x29, #-0xc8]
7102cda41c  ldur x13,[x29, #-0xb8]
7102cda420  tst w12,#0x1
7102cda424  csel x12,x23,x13,eq
7102cda428  cmp x9,x10
7102cda42c  b.eq 0x7102cda6d4
7102cda430  ldrb w13,[x12], #0x1
7102cda434  mov w14,#0xffffffff
7102cda438  orr x15,xzr,#0x100000000
7102cda43c  ldr x19,[x9]
7102cda440  cbz w13,0x7102cda490
7102cda444  mov x16,xzr
7102cda448  mov x17,x12
7102cda44c  mov w0,w13
7102cda450  mov w18,w14
7102cda454  and w0,w0,#0xff
7102cda458  sub w1,w0,#0x41
7102cda45c  add w2,w0,#0x20
7102cda460  cmp w1,#0x1a
7102cda464  csel w0,w2,w0,cc
7102cda468  eor w0,w0,w18
7102cda46c  and w0,w0,#0xff
7102cda470  ldr w0,[x11, w0, UXTW #0x2]
7102cda474  eor w18,w0,w18, LSR #0x8
7102cda478  ldrb w0,[x17], #0x1
7102cda47c  add x16,x16,x15
7102cda480  cbnz w0,0x7102cda454
7102cda484  mvn w17,w18
7102cda488  and x16,x16,#0xff00000000
7102cda48c  b 0x7102cda498
7102cda490  mov x17,xzr
7102cda494  mov x16,xzr
7102cda498  orr x16,x16,x17
7102cda49c  ldr x17,[x19, #0xa0]
7102cda4a0  and x17,x17,#0xffffffffff
7102cda4a4  cmp x17,x16
7102cda4a8  b.eq 0x7102cda4bc
7102cda4ac  add x9,x9,#0x8
7102cda4b0  cmp x9,x10
7102cda4b4  b.ne 0x7102cda43c
7102cda4b8  b 0x7102cda6d4
7102cda4bc  ldr x8,[x21, #0x8]
7102cda4c0  ldr s0,[x8, #0x9c]
7102cda4c4  ldr x8,[x19, #0x110]
7102cda4c8  str q0,[sp, #0xd0]
7102cda4cc  ldp x0,x1,[x8]
7102cda4d0  mov w2,#0x1
7102cda4d4  mov w20,#0x1
7102cda4d8  bl 0x71025f4d80
7102cda4dc  ldr x9,[x19, #0x110]
7102cda4e0  ldr q6,[sp, #0xd0]
7102cda4e4  ldp x8,x9,[x9]
7102cda4e8  cmp x8,x9
7102cda4ec  b.eq 0x7102cda5c4
7102cda4f0  movi v0.2D,#0x0
7102cda4f4  mov v0.S[0x0],v6.S[0x0]
7102cda4f8  adrp x10,0x7104472000
7102cda4fc  ldr s1,[x10, #0x970]
7102cda500  fmov s2,0xbf800000
7102cda504  fmov s3,0x3f800000
7102cda508  ldr x10,[x8]
7102cda50c  ldr x12,[x10, #0x8]
7102cda510  ldrb w13,[x12, #0xe7]
7102cda514  ldrb w12,[x12, #0xe8]
7102cda518  ldrb w11,[x10, #0x128]
7102cda51c  cmp w11,#0x0
7102cda520  orr w12,w12,w13
7102cda524  and w11,w12,#0xff
7102cda528  ccmp w11,#0x0,#0x0,ne
7102cda52c  b.eq 0x7102cda538
7102cda530  strb w20,[x10, #0x129]
7102cda534  b 0x7102cda55c
7102cda538  ldr q4,[x10, #0x10]
7102cda53c  fabd s5,s4,s6
7102cda540  fcmp s5,s1
7102cda544  b.gt 0x7102cda558
7102cda548  dup s4,v4.S[0x1]
7102cda54c  fabs s4,s4
7102cda550  fcmp s4,s1
7102cda554  b.le 0x7102cda560
7102cda558  strb w20,[x10, #0x12a]
7102cda55c  str q0,[x10, #0x10]
7102cda560  ldr s4,[x10, #0x30]
7102cda564  fabs s4,s4
7102cda568  fcmp s4,s1
7102cda56c  b.mi 0x7102cda578
7102cda570  str wzr,[x10, #0x30]
7102cda574  strb w20,[x10, #0x129]
7102cda578  ldr q4,[x10, #0x50]
7102cda57c  fadd s5,s4,s2
7102cda580  fabs s5,s5
7102cda584  fcmp s5,s1
7102cda588  b.mi 0x7102cda598
7102cda58c  mov v4.S[0x0],v3.S[0x0]
7102cda590  strb w20,[x10, #0x129]
7102cda594  str q4,[x10, #0x50]
7102cda598  dup s5,v4.S[0x1]
7102cda59c  fadd s5,s5,s2
7102cda5a0  fabs s5,s5
7102cda5a4  fcmp s5,s1
7102cda5a8  b.mi 0x7102cda5b8
7102cda5ac  mov v4.S[0x1],v3.S[0x0]
7102cda5b0  strb w20,[x10, #0x129]
7102cda5b4  str q4,[x10, #0x50]
7102cda5b8  add x8,x8,#0x8
7102cda5bc  cmp x9,x8
7102cda5c0  b.ne 0x7102cda508
7102cda5c4  str x19,[x21, #0xc0]
7102cda5c8  ldr x9,[x19, #0x130]
7102cda5cc  cbz x9,0x7102cda6cc
7102cda5d0  str x9,[x21, #0x38]
7102cda5d4  ldp x8,x9,[x9]
7102cda5d8  cmp x8,x9
7102cda5dc  b.eq 0x7102cda6cc
7102cda5e0  ldr x11,[x8]
7102cda5e4  ldrb w10,[x11, #0x20]
7102cda5e8  cbz w10,0x7102cda648
7102cda5ec  ldp x13,x10,[x11, #0x8]
7102cda5f0  ldr x12,[x11]
7102cda5f4  strb wzr,[x11, #0x20]
7102cda5f8  str x12,[x13]
7102cda5fc  str x13,[x12, #0x8]
7102cda600  ldr x12,[x10, #0x18]
7102cda604  sub x12,x12,#0x1
7102cda608  str x12,[x10, #0x18]
7102cda60c  stp xzr,xzr,[x11]
7102cda610  ldr x13,[x10, #0x40]
7102cda614  add x12,x10,#0x38
7102cda618  stp x12,x13,[x11]
7102cda61c  str x11,[x10, #0x40]
7102cda620  str x11,[x13]
7102cda624  ldr x12,[x10, #0x30]
7102cda628  add x12,x12,#0x1
7102cda62c  str x12,[x10, #0x30]
7102cda630  ldr x11,[x11, #0x18]
7102cda634  cbz x11,0x7102cda63c
7102cda638  ldr w11,[x11, #0x110]
7102cda63c  ldr w12,[x10, #0x48]
7102cda640  sub w11,w12,w11
7102cda644  str w11,[x10, #0x48]
7102cda648  add x8,x8,#0x8
7102cda64c  cmp x9,x8
7102cda650  b.ne 0x7102cda5e0
7102cda654  ldr x9,[x21, #0x38]
7102cda658  ldp x8,x9,[x9]
7102cda65c  cmp x8,x9
7102cda660  b.eq 0x7102cda6cc
7102cda664  adrp x10,0x7104471000
7102cda668  ldr s1,[x10, #0xf60]
7102cda66c  fmov s0,wzr
7102cda670  orr w10,wzr,#0x3f800000
7102cda674  orr x11,xzr,#0x3f80000000000000
7102cda678  ldr x12,[x8], #0x8
7102cda67c  ldr q2,[x12, #0x30]
7102cda680  fmul s4,s0,v2.S[0x1]
7102cda684  dup s3,v2.S[0x1]
7102cda688  fsub s4,s4,s2
7102cda68c  fmul s2,s1,v2.S[0x0]
7102cda690  fsub s2,s2,s3
7102cda694  fadd s3,s4,s0
7102cda698  fadd s2,s2,s0
7102cda69c  fmul s4,s3,s0
7102cda6a0  fmul s5,s2,s0
7102cda6a4  fadd s4,s4,s2
7102cda6a8  fadd s2,s3,s5
7102cda6ac  fadd s3,s4,s0
7102cda6b0  fadd s2,s6,s2
7102cda6b4  cmp x9,x8
7102cda6b8  str x10,[x12, #0x40]
7102cda6bc  stur x11,[x12, #0x4c]
7102cda6c0  str s3,[x12, #0x54]
7102cda6c4  str s2,[x12, #0x48]
7102cda6c8  b.ne 0x7102cda678
7102cda6cc  ldurb w8,[x29, #-0xb0]
7102cda6d0  and w8,w8,#0x1
7102cda6d4  cbz w8,0x7102cda6e4
7102cda6d8  ldur x0,[x29, #-0xa0]
7102cda6dc  cbz x0,0x7102cda6e4
7102cda6e0  bl 0x710392eb40
7102cda6e4  ldurb w8,[x29, #-0xe0]
7102cda6e8  tbz w8,#0x0,0x7102cda6f8
7102cda6ec  ldur x0,[x29, #-0xd0]
7102cda6f0  cbz x0,0x7102cda6f8
7102cda6f4  bl 0x710392eb40
7102cda6f8  ldurb w8,[x29, #-0xc8]
7102cda6fc  tbz w8,#0x0,0x7102cda70c
7102cda700  ldur x0,[x29, #-0xb8]
7102cda704  cbz x0,0x7102cda70c
7102cda708  bl 0x710392eb40
7102cda70c  add sp,sp,#0x190
7102cda710  ldp d9,d8,[sp, #0x10]
7102cda714  ldp x29,x30,[sp, #0x70]
7102cda718  ldp x20,x19,[sp, #0x60]
7102cda71c  ldp x22,x21,[sp, #0x50]
7102cda720  ldp x24,x23,[sp, #0x40]
7102cda724  ldp x26,x25,[sp, #0x30]
7102cda728  ldp x28,x27,[sp, #0x20]
7102cda72c  ldp d11,d10,[sp], #0x80
7102cda730  ret
7102cda734  cbz x19,0x7102cd903c
7102cda738  ldrb w8,[x19, #0xe0]
7102cda73c  cbz w8,0x7102cda74c
7102cda740  ldr x8,[x19, #0xc8]
7102cda744  cbz x8,0x7102cda74c
7102cda748  strh wzr,[x8, #0x32]
7102cda74c  ldr x8,[x19, #0xd8]
7102cda750  cbz x8,0x7102cda758
7102cda754  strb wzr,[x8, #0x22]
7102cda758  ldrb w8,[x19, #0xe0]
7102cda75c  cbz w8,0x7102cda770
7102cda760  ldr x8,[x19, #0xc8]
7102cda764  cbz x8,0x7102cda770
7102cda768  mov w9,#0x101
7102cda76c  strh w9,[x8, #0x30]
7102cda770  ldr x8,[x19, #0xd8]
7102cda774  ldr x21,[sp, #0xc8]
7102cda778  cbz x8,0x7102cda784
7102cda77c  mov w9,#0x1
7102cda780  strb w9,[x8, #0x21]
7102cda784  ldrb w8,[x19, #0xe0]
7102cda788  cbz w8,0x7102cda794
7102cda78c  ldr x8,[x19, #0xb0]
7102cda790  strb wzr,[x8, #0x10]
7102cda794  add x0,x19,#0x108
7102cda798  strb wzr,[x19, #0x110]
7102cda79c  bl 0x71025e9d50
7102cda7a0  ldrb w8,[x19, #0x118]
7102cda7a4  and w8,w8,#0xfe
7102cda7a8  strb w8,[x19, #0x118]
7102cda7ac  ldp x9,x8,[x21, #0x20]
7102cda7b0  cmp x9,x8
7102cda7b4  b.cs 0x7102cda868
7102cda7b8  str x19,[x9]
7102cda7bc  ldr x8,[x21, #0x20]
7102cda7c0  add x8,x8,#0x8
7102cda7c4  str x8,[x21, #0x20]
7102cda7c8  b 0x7102cd903c
7102cda7cc  str x10,[x21, #0x10]
7102cda7d0  cbz x10,0x7102cd8d74
7102cda7d4  ldrb w8,[x10, #0xe0]
7102cda7d8  cbz w8,0x7102cda7e8
7102cda7dc  ldr x8,[x10, #0xc8]
7102cda7e0  cbz x8,0x7102cda7e8
7102cda7e4  strh wzr,[x8, #0x32]
7102cda7e8  ldr x8,[x10, #0xd8]
7102cda7ec  cbz x8,0x7102cda7f4
7102cda7f0  strb wzr,[x8, #0x22]
7102cda7f4  ldr x8,[x21, #0x10]
7102cda7f8  cbz x8,0x7102cd8d74
7102cda7fc  ldrb w9,[x8, #0xe0]
7102cda800  cbz w9,0x7102cda814
7102cda804  ldr x9,[x8, #0xc8]
7102cda808  cbz x9,0x7102cda814
7102cda80c  mov w10,#0x101
7102cda810  strh w10,[x9, #0x30]
7102cda814  ldr x9,[x8, #0xd8]
7102cda818  cbz x9,0x7102cda824
7102cda81c  mov w10,#0x1
7102cda820  strb w10,[x9, #0x21]
7102cda824  ldrb w9,[x8, #0xe0]
7102cda828  cbz w9,0x7102cda834
7102cda82c  ldr x8,[x8, #0xb0]
7102cda830  strb wzr,[x8, #0x10]
7102cda834  ldr x8,[x21, #0x10]
7102cda838  cbz x8,0x7102cd8d74
7102cda83c  add x0,x8,#0x108
7102cda840  strb wzr,[x8, #0x110]
7102cda844  bl 0x71025e9d50
7102cda848  ldr x8,[x21, #0x10]
7102cda84c  cbz x8,0x7102cd8d74
7102cda850  ldrb w9,[x8, #0x118]
7102cda854  orr w9,w9,#0x1
7102cda858  strb w9,[x8, #0x118]
7102cda85c  cmp w20,#0x1
7102cda860  b.ge 0x7102cd8d7c
7102cda864  b 0x7102cd903c
7102cda868  ldr x24,[x26]
7102cda86c  sub x25,x9,x24
7102cda870  asr x21,x25,#0x3
7102cda874  add x9,x21,#0x1
7102cda878  lsr x10,x9,#0x3d
7102cda87c  cbnz x10,0x7102cda9a4
7102cda880  sub x8,x8,x24
7102cda884  asr x10,x8,#0x3
7102cda888  orr x11,xzr,#0xffffffffffffffe
7102cda88c  cmp x10,x11
7102cda890  b.hi 0x7102cda8b4
7102cda894  asr x8,x8,#0x2
7102cda898  cmp x8,x9
7102cda89c  csel x22,x9,x8,cc
7102cda8a0  cbz x22,0x7102cda964
7102cda8a4  mov x27,x23
7102cda8a8  lsr x8,x22,#0x3d
7102cda8ac  cbz x8,0x7102cda8bc
7102cda8b0  bl 0x71039c2650
7102cda8b4  mov x27,x23
7102cda8b8  orr x22,xzr,#0x1fffffffffffffff
7102cda8bc  lsl x8,x22,#0x3
7102cda8c0  cmp x8,#0x0
7102cda8c4  csinc x23,x8,xzr,ne
7102cda8c8  mov w0,#0x10
7102cda8cc  mov x1,x23
7102cda8d0  bl 0x710392e290
7102cda8d4  mov x26,x0
7102cda8d8  cbnz x0,0x7102cda920
7102cda8dc  adrp x8,0x7105332000
7102cda8e0  ldr x0,[x8, #0xf00]
7102cda8e4  cbz x0,0x7102cda91c
7102cda8e8  str wzr,[sp, #0xe0]
7102cda8ec  stur x23,[x29, #-0xb0]
7102cda8f0  ldr x8,[x0]
7102cda8f4  ldr x8,[x8, #0x30]
7102cda8f8  add x1,sp,#0xe0
7102cda8fc  sub x2,x29,#0xb0
7102cda900  blr x8
7102cda904  tbz w0,#0x0,0x7102cda91c
7102cda908  mov w0,#0x10
7102cda90c  mov x1,x23
7102cda910  bl 0x710392e290
7102cda914  mov x26,x0
7102cda918  cbnz x0,0x7102cda920
7102cda91c  mov x26,xzr
7102cda920  mov x23,x27
7102cda924  add x21,x26,x21, LSL #0x3
7102cda928  cmp x25,#0x1
7102cda92c  str x19,[x21], #0x8
7102cda930  add x19,x26,x22, LSL #0x3
7102cda934  b.lt 0x7102cda948
7102cda938  mov x0,x26
7102cda93c  mov x1,x24
7102cda940  mov x2,x25
7102cda944  bl 0x71039c00e0
7102cda948  ldr x8,[sp, #0xc8]
7102cda94c  stp x26,x21,[x8, #0x18]
7102cda950  str x19,[x8, #0x28]
7102cda954  cbz x24,0x7102cd903c
7102cda958  mov x0,x24
7102cda95c  bl 0x710392eb40
7102cda960  b 0x7102cd903c
7102cda964  mov x26,xzr
7102cda968  b 0x7102cda924
7102cda96c  ldr x0,[sp, #0x10]
7102cda970  bl 0x71039c0c00
7102cda974  ldr x0,[sp, #0x8]
7102cda978  bl 0x71039c0c00
7102cda97c  ldr x0,[sp, #0x78]
7102cda980  bl 0x71039c0c00
7102cda984  ldr x0,[sp, #0x70]
7102cda988  bl 0x71039c0c00
7102cda98c  ldr x0,[sp, #0x68]
7102cda990  bl 0x71039c0c00
7102cda994  sub x0,x29,#0xc8
7102cda998  bl 0x71039c1a00
7102cda99c  ldr x0,[sp, #0xa0]
7102cda9a0  bl 0x71039c0c00
7102cda9a4  mov x0,x26
7102cda9a8  bl 0x71039c0c00
