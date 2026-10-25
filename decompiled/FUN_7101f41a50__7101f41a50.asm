// addr:      7101f41a50
// offset:    0x1f41a50
// name:      FUN_7101f41a50
// mangled:   
// size:      1504

7101f41a50  sub sp,sp,#0xd0
7101f41a54  stp d13,d12,[sp, #0x40]
7101f41a58  stp d11,d10,[sp, #0x50]
7101f41a5c  stp d9,d8,[sp, #0x60]
7101f41a60  stp x28,x27,[sp, #0x70]
7101f41a64  stp x26,x25,[sp, #0x80]
7101f41a68  stp x24,x23,[sp, #0x90]
7101f41a6c  stp x22,x21,[sp, #0xa0]
7101f41a70  stp x20,x19,[sp, #0xb0]
7101f41a74  stp x29,x30,[sp, #0xc0]
7101f41a78  add x29,sp,#0xc0
7101f41a7c  str x7,[sp, #0x10]
7101f41a80  str w6,[sp, #0x24]
7101f41a84  mov v8.16B,v2.16B
7101f41a88  str w5,[sp, #0x18]
7101f41a8c  mov v9.16B,v0.16B
7101f41a90  mov x22,x1
7101f41a94  str w4,[sp, #0x3c]
7101f41a98  mov x25,x0
7101f41a9c  str x2,[sp, #0x28]
7101f41aa0  ldp x19,x8,[x1]
7101f41aa4  subs x10,x8,x19
7101f41aa8  b.ne 0x7101f41ab4
7101f41aac  mov w9,wzr
7101f41ab0  b 0x7101f41b14
7101f41ab4  asr x11,x10,#0x3
7101f41ab8  fcvtzs w10,s9
7101f41abc  mov x12,#0x5c29
7101f41ac0  movk x12,#0xc28f, LSL #16
7101f41ac4  movk x12,#0x28f5, LSL #32
7101f41ac8  movk x12,#0x8f5c, LSL #48
7101f41acc  mul x11,x11,x12
7101f41ad0  mov x9,xzr
7101f41ad4  mov w13,wzr
7101f41ad8  add x12,x19,#0x2c
7101f41adc  ldur w14,[x12, #-0x2c]
7101f41ae0  cbz w14,0x7101f41ae8
7101f41ae4  ldur w13,[x12, #-0x4]
7101f41ae8  ldr w14,[x12]
7101f41aec  add w14,w14,w13
7101f41af0  cmp w13,w10
7101f41af4  b.gt 0x7101f41b00
7101f41af8  cmp w14,w10
7101f41afc  b.gt 0x7101f41b14
7101f41b00  add x9,x9,#0x1
7101f41b04  add x12,x12,#0xc8
7101f41b08  cmp x11,x9
7101f41b0c  mov w13,w14
7101f41b10  b.hi 0x7101f41adc
7101f41b14  ldp x20,x10,[x25, #0x8]
7101f41b18  cmp x10,x20
7101f41b1c  b.eq 0x7101f42004
7101f41b20  adrp x10,0x7104472000
7101f41b24  ldr w13,[x25]
7101f41b28  orr w14,wzr,#0x3
7101f41b2c  ldr s0,[x10, #0xe0c]
7101f41b30  ldr w10,[sp, #0x24]
7101f41b34  cmp w13,w10
7101f41b38  csinc w10,w14,wzr,ne
7101f41b3c  stp w13,w10,[sp, #0x1c]
7101f41b40  ldr w10,[sp, #0x18]
7101f41b44  fmul s12,s1,s0
7101f41b48  fmov s13,wzr
7101f41b4c  fmov s10,0x3f800000
7101f41b50  mov w11,#0x5
7101f41b54  orr w12,wzr,#0x7
7101f41b58  orr x27,xzr,#-0x5555555555555556
7101f41b5c  mov w9,w9
7101f41b60  movk x27,#0xaaab
7101f41b64  str x9,[sp, #0x30]
7101f41b68  cmp w10,#0x5
7101f41b6c  mov x21,xzr
7101f41b70  mov w26,wzr
7101f41b74  csel w10,w12,w11,eq
7101f41b78  str w10,[sp, #0xc]
7101f41b7c  b 0x7101f41b84
7101f41b80  ldp x19,x8,[x22]
7101f41b84  sub x8,x8,x19
7101f41b88  mov x9,#0x5c29
7101f41b8c  movk x9,#0xc28f, LSL #16
7101f41b90  asr x8,x8,#0x3
7101f41b94  movk x9,#0x28f5, LSL #32
7101f41b98  movk x9,#0x8f5c, LSL #48
7101f41b9c  mul x8,x8,x9
7101f41ba0  cmp x8,x21
7101f41ba4  b.ls 0x7101f41c08
7101f41ba8  mov w9,#0xc8
7101f41bac  madd x28,x21,x9,x19
7101f41bb0  ldr w8,[x28]
7101f41bb4  cbz w8,0x7101f41c38
7101f41bb8  madd x24,x21,x9,x19
7101f41bbc  ldr s0,[x24, #0x2c]!
7101f41bc0  scvtf s0,s0
7101f41bc4  fmul s0,s0,s8
7101f41bc8  fdiv s11,s0,s12
7101f41bcc  ldp s0,s2,[x24, #0x1c]
7101f41bd0  scvtf s2,s2
7101f41bd4  orr w8,wzr,#0x18
7101f41bd8  scvtf s0,s0
7101f41bdc  fmul s1,s0,s8
7101f41be0  fadd s0,s0,s2
7101f41be4  fmul s0,s0,s8
7101f41be8  fdiv s1,s1,s12
7101f41bec  fdiv s2,s0,s12
7101f41bf0  madd x23,x21,x8,x20
7101f41bf4  ldur w26,[x24, #-0x4]
7101f41bf8  ldr x0,[x23, #0x8]!
7101f41bfc  mov v0.16B,v11.16B
7101f41c00  bl 0x7101f3da50
7101f41c04  b 0x7101f41c60
7101f41c08  orr w8,wzr,#0x18
7101f41c0c  madd x8,x21,x8,x20
7101f41c10  ldr x8,[x8, #0x8]
7101f41c14  ldrb w9,[x8, #0x21c]
7101f41c18  cbz w9,0x7101f41f9c
7101f41c1c  ldr x0,[x8, #0x8]
7101f41c20  mov v0.16B,v10.16B
7101f41c24  adrp x1,0x71043cd000
7101f41c28  add x1,x1,#0x335
7101f41c2c  strb wzr,[x8, #0x21c]
7101f41c30  bl 0x7103778300
7101f41c34  b 0x7101f41f9c
7101f41c38  madd x24,x21,x9,x19
7101f41c3c  ldr s0,[x24, #0x2c]!
7101f41c40  scvtf s0,s0
7101f41c44  fmul s0,s0,s8
7101f41c48  fdiv s11,s0,s12
7101f41c4c  orr w8,wzr,#0x18
7101f41c50  madd x23,x21,x8,x20
7101f41c54  ldr x0,[x23, #0x8]!
7101f41c58  mov v0.16B,v11.16B
7101f41c5c  bl 0x7101f3d820
7101f41c60  scvtf s0,w26
7101f41c64  fmul s1,s0,s8
7101f41c68  fdiv s1,s1,s12
7101f41c6c  ldr x8,[x23]
7101f41c70  ldr s2,[x8, #0x214]
7101f41c74  fcmp s2,s1
7101f41c78  b.eq 0x7101f41ca0
7101f41c7c  str s1,[x8, #0x214]
7101f41c80  ldr x8,[x8, #0x18]
7101f41c84  ldr x8,[x8]
7101f41c88  cbz x8,0x7101f41ca0
7101f41c8c  ldrb w9,[x8, #0x58]
7101f41c90  orr w9,w9,#0x10
7101f41c94  str s1,[x8, #0x30]
7101f41c98  str wzr,[x8, #0x34]
7101f41c9c  strb w9,[x8, #0x58]
7101f41ca0  ldr x8,[sp, #0x30]
7101f41ca4  cmp x21,x8
7101f41ca8  b.ne 0x7101f41d08
7101f41cac  fsub s0,s9,s0
7101f41cb0  fmul s0,s0,s8
7101f41cb4  fdiv s0,s0,s12
7101f41cb8  ldr x8,[sp, #0x30]
7101f41cbc  orr w9,wzr,#0x18
7101f41cc0  madd x8,x8,x9,x20
7101f41cc4  ldr x8,[x8, #0x8]
7101f41cc8  fcmp s0,s11
7101f41ccc  fcsel s1,s11,s0,gt
7101f41cd0  fcmp s0,#0.0
7101f41cd4  fcsel s0,s13,s1,mi
7101f41cd8  ldr s1,[x8, #0x218]
7101f41cdc  fcmp s1,s0
7101f41ce0  b.eq 0x7101f41d08
7101f41ce4  str s0,[x8, #0x218]
7101f41ce8  ldr x8,[x8, #0x28]
7101f41cec  ldr x8,[x8]
7101f41cf0  cbz x8,0x7101f41d08
7101f41cf4  ldrb w9,[x8, #0x58]
7101f41cf8  orr w9,w9,#0x10
7101f41cfc  str s0,[x8, #0x30]
7101f41d00  str wzr,[x8, #0x34]
7101f41d04  strb w9,[x8, #0x58]
7101f41d08  mov w20,#0xc8
7101f41d0c  madd x8,x21,x20,x19
7101f41d10  ldrb w8,[x8, #0xbd]
7101f41d14  cbz w8,0x7101f41d20
7101f41d18  mov w8,#0x8
7101f41d1c  b 0x7101f41dd4
7101f41d20  ldr w8,[sp, #0x3c]
7101f41d24  cmp w8,#0x12
7101f41d28  b.hi 0x7101f41da4
7101f41d2c  ldr w8,[sp, #0x3c]
7101f41d30  mov w9,#0x1
7101f41d34  lsl w9,w9,w8
7101f41d38  mov w8,#0xc
7101f41d3c  movk w8,#0x4, LSL #16
7101f41d40  tst w9,w8
7101f41d44  ldr w8,[sp, #0x20]
7101f41d48  b.ne 0x7101f41dd4
7101f41d4c  mov w8,#0x90
7101f41d50  tst w9,w8
7101f41d54  b.eq 0x7101f41da4
7101f41d58  ldr w8,[sp, #0x24]
7101f41d5c  ldr w9,[sp, #0x1c]
7101f41d60  cmp w9,w8
7101f41d64  b.ne 0x7101f41da4
7101f41d68  ldr x8,[sp, #0x30]
7101f41d6c  cmp x21,x8
7101f41d70  b.ne 0x7101f41da4
7101f41d74  ldr w8,[sp, #0x18]
7101f41d78  cmp w8,#0xa
7101f41d7c  ldr w8,[sp, #0xc]
7101f41d80  b.hi 0x7101f41dd4
7101f41d84  ldr w8,[sp, #0x18]
7101f41d88  mov w9,#0x1
7101f41d8c  lsl w8,w9,w8
7101f41d90  mov w9,#0x610
7101f41d94  tst w8,w9
7101f41d98  b.eq 0x7101f41ffc
7101f41d9c  orr w8,wzr,#0x6
7101f41da0  b 0x7101f41dd4
7101f41da4  ldr w8,[sp, #0x24]
7101f41da8  ldr w9,[sp, #0x1c]
7101f41dac  cmp w9,w8
7101f41db0  b.ne 0x7101f41dc4
7101f41db4  ldr x8,[sp, #0x30]
7101f41db8  cmp x21,x8
7101f41dbc  mov w8,#0x1
7101f41dc0  b 0x7101f41dd0
7101f41dc4  ldr x8,[sp, #0x30]
7101f41dc8  cmp x21,x8
7101f41dcc  orr w8,wzr,#0x3
7101f41dd0  cinc w8,w8,eq
7101f41dd4  ldr x9,[x23]
7101f41dd8  ldr w10,[x9, #0x204]
7101f41ddc  cmp w10,w8
7101f41de0  b.eq 0x7101f41eb0
7101f41de4  str w8,[x9, #0x204]
7101f41de8  and w8,w8,#0xf
7101f41dec  sub w8,w8,#0x1
7101f41df0  cmp w8,#0x9
7101f41df4  b.hi 0x7101f41eb0
7101f41df8  adrp x10,0x71044fc000
7101f41dfc  add x10,x10,#0x5e0
7101f41e00  ldrsw x8,[x10, x8, LSL #0x2]
7101f41e04  add x8,x8,x10
7101f41e08  br x8
7101f41e0c  ldr x0,[x9, #0x8]
7101f41e10  adrp x1,0x71042a3000
7101f41e14  add x1,x1,#0x89d
7101f41e18  b 0x7101f41ea8
7101f41e1c  ldr x0,[x9, #0x8]
7101f41e20  adrp x1,0x71042f8000
7101f41e24  add x1,x1,#0xcda
7101f41e28  b 0x7101f41ea8
7101f41e2c  ldr x0,[x9, #0x8]
7101f41e30  adrp x1,0x7104281000
7101f41e34  add x1,x1,#0x370
7101f41e38  b 0x7101f41ea8
7101f41e3c  ldr x0,[x9, #0x8]
7101f41e40  adrp x1,0x710432a000
7101f41e44  add x1,x1,#0x8c9
7101f41e48  b 0x7101f41ea8
7101f41e4c  ldr x0,[x9, #0x8]
7101f41e50  adrp x1,0x7104270000
7101f41e54  add x1,x1,#0x8ed
7101f41e58  b 0x7101f41ea8
7101f41e5c  ldr x0,[x9, #0x8]
7101f41e60  adrp x1,0x710439d000
7101f41e64  add x1,x1,#0xd2c
7101f41e68  b 0x7101f41ea8
7101f41e6c  ldr x0,[x9, #0x8]
7101f41e70  adrp x1,0x71042f8000
7101f41e74  add x1,x1,#0xce9
7101f41e78  b 0x7101f41ea8
7101f41e7c  ldr x0,[x9, #0x8]
7101f41e80  adrp x1,0x710424f000
7101f41e84  add x1,x1,#0xd7c
7101f41e88  b 0x7101f41ea8
7101f41e8c  ldr x0,[x9, #0x8]
7101f41e90  adrp x1,0x71043cf000
7101f41e94  add x1,x1,#0xd11
7101f41e98  b 0x7101f41ea8
7101f41e9c  ldr x0,[x9, #0x8]
7101f41ea0  adrp x1,0x7104455000
7101f41ea4  add x1,x1,#0x3a7
7101f41ea8  mov v0.16B,v10.16B
7101f41eac  bl 0x7103778300
7101f41eb0  ldr x8,[x23]
7101f41eb4  ldrb w9,[x8, #0x21c]
7101f41eb8  cmp w9,#0x1
7101f41ebc  b.eq 0x7101f41edc
7101f41ec0  ldr x0,[x8, #0x8]
7101f41ec4  mov v0.16B,v10.16B
7101f41ec8  mov w9,#0x1
7101f41ecc  adrp x1,0x7104292000
7101f41ed0  add x1,x1,#0x57e
7101f41ed4  strb w9,[x8, #0x21c]
7101f41ed8  bl 0x7103778300
7101f41edc  madd x8,x21,x20,x19
7101f41ee0  ldr w8,[x8, #0x4]
7101f41ee4  cmp w8,#0x1
7101f41ee8  b.ne 0x7101f41f74
7101f41eec  ldp x8,x9,[x22]
7101f41ef0  cmp x8,x9
7101f41ef4  b.eq 0x7101f41f74
7101f41ef8  sub x9,x9,x8
7101f41efc  mov x10,#0x5c29
7101f41f00  movk x10,#0xc28f, LSL #16
7101f41f04  asr x9,x9,#0x3
7101f41f08  movk x10,#0x28f5, LSL #32
7101f41f0c  movk x10,#0x8f5c, LSL #48
7101f41f10  mul x10,x9,x10
7101f41f14  cmp x10,x21
7101f41f18  b.ls 0x7101f41f74
7101f41f1c  mul x9,x21,x20
7101f41f20  ldr w9,[x8, x9, LSL #0x0]
7101f41f24  cbz w9,0x7101f41fbc
7101f41f28  madd x9,x21,x20,x8
7101f41f2c  ldr w9,[x9, #0x28]
7101f41f30  ldr x11,[sp, #0x10]
7101f41f34  ldp x10,x11,[x11]
7101f41f38  cmp x10,x11
7101f41f3c  b.eq 0x7101f41f74
7101f41f40  madd x8,x21,x20,x8
7101f41f44  ldr w8,[x8, #0x2c]
7101f41f48  add w8,w8,w9
7101f41f4c  ldr w12,[x10, #0x28]
7101f41f50  ldp w13,w14,[x10, #0x48]
7101f41f54  add w12,w13,w12
7101f41f58  add w13,w12,w14
7101f41f5c  cmp w8,w12
7101f41f60  ccmp w13,w9,#0x4,gt
7101f41f64  b.gt 0x7101f41fec
7101f41f68  add x10,x10,#0xc8
7101f41f6c  cmp x11,x10
7101f41f70  b.ne 0x7101f41f4c
7101f41f74  mov w4,wzr
7101f41f78  ldr x0,[x23]
7101f41f7c  ldr x2,[sp, #0x28]
7101f41f80  mov x1,x28
7101f41f84  ldr w3,[sp, #0x3c]
7101f41f88  bl 0x7101f3d240
7101f41f8c  ldr w8,[x28]
7101f41f90  cbnz w8,0x7101f41f9c
7101f41f94  ldr w8,[x24]
7101f41f98  add w26,w8,w26
7101f41f9c  ldp x20,x8,[x25, #0x8]
7101f41fa0  sub x8,x8,x20
7101f41fa4  asr x8,x8,#0x3
7101f41fa8  mul x8,x8,x27
7101f41fac  add x21,x21,#0x1
7101f41fb0  cmp x8,x21
7101f41fb4  b.hi 0x7101f41b80
7101f41fb8  b 0x7101f42004
7101f41fbc  cbz x21,0x7101f41ff4
7101f41fc0  mov x11,xzr
7101f41fc4  mov w9,wzr
7101f41fc8  add x12,x8,#0x2c
7101f41fcc  cmp x10,x11
7101f41fd0  b.ls 0x7101f41f30
7101f41fd4  ldr w13,[x12], #0xc8
7101f41fd8  add x11,x11,#0x1
7101f41fdc  add w9,w13,w9
7101f41fe0  cmp x11,x21
7101f41fe4  b.cc 0x7101f41fcc
7101f41fe8  b 0x7101f41f30
7101f41fec  mov w4,#0x1
7101f41ff0  b 0x7101f41f78
7101f41ff4  mov w9,wzr
7101f41ff8  b 0x7101f41f30
7101f41ffc  ldr w8,[sp, #0xc]
7101f42000  b 0x7101f41dd4
7101f42004  ldp d9,d8,[sp, #0x60]
7101f42008  ldp d11,d10,[sp, #0x50]
7101f4200c  ldp d13,d12,[sp, #0x40]
7101f42010  ldp x29,x30,[sp, #0xc0]
7101f42014  ldp x20,x19,[sp, #0xb0]
7101f42018  ldp x22,x21,[sp, #0xa0]
7101f4201c  ldp x24,x23,[sp, #0x90]
7101f42020  ldp x26,x25,[sp, #0x80]
7101f42024  ldp x28,x27,[sp, #0x70]
7101f42028  add sp,sp,#0xd0
7101f4202c  ret
