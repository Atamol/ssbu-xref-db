// addr:      7101b98c10
// offset:    0x1b98c10
// name:      FUN_7101b98c10
// mangled:   
// size:      732

7101b98c10  sub sp,sp,#0x80
7101b98c14  stp x22,x21,[sp, #0x50]
7101b98c18  stp x20,x19,[sp, #0x60]
7101b98c1c  stp x29,x30,[sp, #0x70]
7101b98c20  add x29,sp,#0x70
7101b98c24  ldrh w8,[x1]
7101b98c28  sub w9,w8,#0x9
7101b98c2c  mov x20,x1
7101b98c30  mov x19,x0
7101b98c34  cmp w9,#0x2
7101b98c38  b.cc 0x7101b98cac
7101b98c3c  cbz x2,0x7101b98d18
7101b98c40  ldr x8,[x19, #0x30]
7101b98c44  ldr x0,[x8, #0x10]
7101b98c48  cbz x0,0x7101b98c64
7101b98c4c  mov w8,#0xffffffff
7101b98c50  mov w3,#0x1
7101b98c54  mov x1,x2
7101b98c58  mov w2,w8
7101b98c5c  bl 0x71037a2270
7101b98c60  ldr x8,[x19, #0x30]
7101b98c64  ldr x8,[x8]
7101b98c68  cbz x8,0x7101b98c78
7101b98c6c  ldrb w9,[x8, #0x58]
7101b98c70  orr w9,w9,#0x1
7101b98c74  strb w9,[x8, #0x58]
7101b98c78  ldr x8,[x19, #0x20]
7101b98c7c  ldr x8,[x8]
7101b98c80  cbz x8,0x7101b98c90
7101b98c84  ldrb w9,[x8, #0x58]
7101b98c88  and w9,w9,#0xfe
7101b98c8c  strb w9,[x8, #0x58]
7101b98c90  mov w8,#0x1
7101b98c94  ldrb w9,[x19]
7101b98c98  cbnz w9,0x7101b98e34
7101b98c9c  add x0,x19,#0x178
7101b98ca0  cbz w8,0x7101b98e38
7101b98ca4  fmov s0,0x3f800000
7101b98ca8  b 0x7101b98e3c
7101b98cac  cmp w8,#0xa
7101b98cb0  b.eq 0x7101b98d90
7101b98cb4  cmp w8,#0x9
7101b98cb8  b.ne 0x7101b98e28
7101b98cbc  orr x8,xzr,#0x600000000
7101b98cc0  add x9,sp,#0x8
7101b98cc4  add x1,x9,#0x8
7101b98cc8  str x8,[sp, #0x8]
7101b98ccc  mov w8,#0x6d63
7101b98cd0  movk w8,#0x5f6e, LSL #16
7101b98cd4  str w8,[sp, #0x10]
7101b98cd8  add x8,x9,#0x9
7101b98cdc  mov w9,#0x7063
7101b98ce0  add x0,x19,#0x18
7101b98ce4  strh w9,[sp, #0x14]
7101b98ce8  mov w9,#0x9dc5
7101b98cec  movk w9,#0x811c, LSL #16
7101b98cf0  mov w11,#0x63
7101b98cf4  strb wzr,[sp, #0x16]
7101b98cf8  mov w10,#0x89
7101b98cfc  mul w9,w9,w10
7101b98d00  and w11,w11,#0xff
7101b98d04  eor w9,w9,w11
7101b98d08  ldrb w11,[x8], #0x1
7101b98d0c  cbnz w11,0x7101b98cfc
7101b98d10  str w9,[sp, #0x8]
7101b98d14  b 0x7101b98d4c
7101b98d18  sub w8,w8,#0x2
7101b98d1c  and w9,w8,#0xffff
7101b98d20  add w9,w9,#0x2
7101b98d24  cmp w8,#0x7
7101b98d28  add x8,sp,#0x8
7101b98d2c  csinc w1,w9,wzr,cc
7101b98d30  adrp x0,0x71042b2000
7101b98d34  add x0,x0,#0x93a
7101b98d38  add x21,x19,#0x18
7101b98d3c  add x22,sp,#0x8
7101b98d40  bl 0x71003a4ca0
7101b98d44  add x1,x22,#0x8
7101b98d48  mov x0,x21
7101b98d4c  bl 0x710377a120
7101b98d50  ldr x8,[x19, #0x20]
7101b98d54  ldr x8,[x8]
7101b98d58  cbz x8,0x7101b98d68
7101b98d5c  ldrb w9,[x8, #0x58]
7101b98d60  orr w9,w9,#0x1
7101b98d64  strb w9,[x8, #0x58]
7101b98d68  ldr x8,[x19, #0x30]
7101b98d6c  ldr x9,[x8]
7101b98d70  cbz x9,0x7101b98e28
7101b98d74  ldrb w10,[x9, #0x58]
7101b98d78  and w10,w10,#0xfe
7101b98d7c  mov w8,wzr
7101b98d80  strb w10,[x9, #0x58]
7101b98d84  ldrb w9,[x19]
7101b98d88  cbnz w9,0x7101b98e34
7101b98d8c  b 0x7101b98c9c
7101b98d90  ldr x8,[x19, #0x20]
7101b98d94  ldr x8,[x8]
7101b98d98  cbz x8,0x7101b98da8
7101b98d9c  ldrb w9,[x8, #0x58]
7101b98da0  and w9,w9,#0xfe
7101b98da4  strb w9,[x8, #0x58]
7101b98da8  ldr x8,[x19, #0x30]
7101b98dac  ldr x8,[x8]
7101b98db0  cbz x8,0x7101b98dc0
7101b98db4  ldrb w9,[x8, #0x58]
7101b98db8  and w9,w9,#0xfe
7101b98dbc  strb w9,[x8, #0x58]
7101b98dc0  ldrh w8,[x20]
7101b98dc4  cmp w8,#0xa
7101b98dc8  b.ne 0x7101b98e28
7101b98dcc  ldrb w8,[x20, #0x4]
7101b98dd0  cbz w8,0x7101b98df8
7101b98dd4  ldrh w8,[x20, #0x2]
7101b98dd8  sub w8,w8,#0xb
7101b98ddc  cmp w8,#0x3
7101b98de0  b.hi 0x7101b98e28
7101b98de4  adrp x9,0x71050ab000
7101b98de8  add x9,x9,#0x790
7101b98dec  sxth x8,w8
7101b98df0  ldr x1,[x9, x8, LSL #0x3]
7101b98df4  b 0x7101b98e00
7101b98df8  adrp x1,0x710425f000
7101b98dfc  add x1,x1,#0x124
7101b98e00  ldr x0,[x19, #0x1a8]
7101b98e04  ldrb w21,[x19]
7101b98e08  mov w2,wzr
7101b98e0c  bl 0x7103240d30
7101b98e10  mov x1,x0
7101b98e14  cbz w21,0x7101b98e20
7101b98e18  ldr x0,[x19, #0xd0]
7101b98e1c  b 0x7101b98e24
7101b98e20  ldr x0,[x19, #0xb0]
7101b98e24  bl 0x7103778b80
7101b98e28  mov w8,wzr
7101b98e2c  ldrb w9,[x19]
7101b98e30  cbz w9,0x7101b98c9c
7101b98e34  add x0,x19,#0x108
7101b98e38  fmov s0,wzr
7101b98e3c  bl 0x710377b010
7101b98e40  ldrh w8,[x20]
7101b98e44  ldrb w9,[x20, #0x4]
7101b98e48  cmp w8,#0xa
7101b98e4c  b.ne 0x7101b98e74
7101b98e50  cbz w9,0x7101b98e74
7101b98e54  ldrh w8,[x20, #0x2]
7101b98e58  sub w8,w8,#0xc
7101b98e5c  cmp w8,#0x3
7101b98e60  b.cs 0x7101b98ec4
7101b98e64  sxth x8,w8
7101b98e68  adrp x9,0x7104544000
7101b98e6c  add x9,x9,#0xcc0
7101b98e70  b 0x7101b98ebc
7101b98e74  cbz w9,0x7101b98ea0
7101b98e78  cmp w8,#0xa
7101b98e7c  b.eq 0x7101b98ea0
7101b98e80  sub w9,w8,#0x9
7101b98e84  ldrh w8,[x20, #0x2]
7101b98e88  cmp w9,#0x1
7101b98e8c  b.hi 0x7101b98ea0
7101b98e90  sub w9,w8,#0xb
7101b98e94  add w10,w8,#0x4
7101b98e98  cmp w9,#0x4
7101b98e9c  csel w8,w10,w8,cc
7101b98ea0  sub w8,w8,#0x2
7101b98ea4  and w9,w8,#0xffff
7101b98ea8  cmp w9,#0x11
7101b98eac  b.cs 0x7101b98ecc
7101b98eb0  sxth x8,w8
7101b98eb4  adrp x9,0x7104544000
7101b98eb8  add x9,x9,#0xcd0
7101b98ebc  ldr s0,[x9,x8, lsl #2]
7101b98ec0  b 0x7101b98ed0
7101b98ec4  fmov s0,0x41900000
7101b98ec8  b 0x7101b98ed0
7101b98ecc  fmov s0,wzr
7101b98ed0  add x0,x19,#0xe8
7101b98ed4  bl 0x710377b010
7101b98ed8  ldp x29,x30,[sp, #0x70]
7101b98edc  ldp x20,x19,[sp, #0x60]
7101b98ee0  ldp x22,x21,[sp, #0x50]
7101b98ee4  add sp,sp,#0x80
7101b98ee8  ret
