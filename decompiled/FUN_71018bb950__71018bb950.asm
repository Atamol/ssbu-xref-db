// addr:      71018bb950
// offset:    0x18bb950
// name:      FUN_71018bb950
// mangled:   
// size:      728

71018bb950  sub sp,sp,#0xe0
71018bb954  str d14,[sp, #0x70]
71018bb958  stp d13,d12,[sp, #0x78]
71018bb95c  str x23,[sp, #0xa8]
71018bb960  stp d11,d10,[sp, #0x88]
71018bb964  stp d9,d8,[sp, #0x98]
71018bb968  stp x22,x21,[sp, #0xb0]
71018bb96c  stp x20,x19,[sp, #0xc0]
71018bb970  stp x29,x30,[sp, #0xd0]
71018bb974  add x29,sp,#0xd0
71018bb978  adrp x22,0x7105329000
71018bb97c  ldr x8,[x22, #0x740]
71018bb980  ldr x21,[x8, #0x8]
71018bb984  ldr w8,[x0, #0xec]
71018bb988  mov x19,x0
71018bb98c  cbnz w8,0x71018bbbd8
71018bb990  adrp x8,0x710532f000
71018bb994  ldr x8,[x8, #0x8d0]
71018bb998  ldr x0,[x8, #0x8]
71018bb99c  ldrb w8,[x0, #0x191]
71018bb9a0  cbnz w8,0x71018bba20
71018bb9a4  mov x20,#0x1361
71018bb9a8  movk x20,#0xa306, LSL #16
71018bb9ac  movk x20,#0x17, LSL #32
71018bb9b0  mov w2,#0x4
71018bb9b4  mov x1,x20
71018bb9b8  bl 0x7103313f20
71018bb9bc  tbz w0,#0x0,0x71018bba20
71018bb9c0  mov x0,sp
71018bb9c4  mov x1,x20
71018bb9c8  bl 0x71024076d0
71018bb9cc  ldr x8,[sp, #0x10]
71018bb9d0  adrp x9,0x7104f73000
71018bb9d4  add x9,x9,#0xd50
71018bb9d8  str x9,[sp, #0x8]
71018bb9dc  cbz x8,0x71018bba4c
71018bb9e0  adrp x8,0x7106dd5000
71018bb9e4  ldrb w8,[x8, #0x3a8]
71018bb9e8  cmp w8,#0x1
71018bb9ec  b.ne 0x71018bba4c
71018bb9f0  adrp x9,0x7106dd5000
71018bb9f4  ldr w8,[sp, #0x18]
71018bb9f8  ldr w9,[x9, #0x3ac]
71018bb9fc  cmp w8,w9
71018bba00  b.ne 0x71018bba4c
71018bba04  ldr x8,[sp, #0x10]
71018bba08  ldr wzr,[x8, #0x38]!
71018bba0c  ldaxr w9,[x8]
71018bba10  sub w9,w9,#0x1
71018bba14  stlxr w10,w9,[x8]
71018bba18  cbnz w10,0x71018bba0c
71018bba1c  b 0x71018bba4c
71018bba20  mov x8,#0x650000000000
71018bba24  movk x8,#0x87, LSL #48
71018bba28  strb wzr,[sp, #0x20]
71018bba2c  stp xzr,x8,[sp, #0x10]
71018bba30  mov x8,#-0x1
71018bba34  stp x8,xzr,[sp, #0x28]
71018bba38  adrp x8,0x7104f73000
71018bba3c  add x8,x8,#0xd50
71018bba40  str wzr,[sp]
71018bba44  str xzr,[sp, #0x38]
71018bba48  str x8,[sp, #0x8]
71018bba4c  str xzr,[sp, #0x10]
71018bba50  strb wzr,[sp, #0x20]
71018bba54  ldr x20,[x19, #0x110]
71018bba58  ldr x8,[x20, #0x80]
71018bba5c  ldr x8,[x8]
71018bba60  fmov s8,0x3f800000
71018bba64  mov v0.16B,v8.16B
71018bba68  adrp x1,0x71043be000
71018bba6c  add x1,x1,#0x875
71018bba70  ldr x0,[x8, #0x10]
71018bba74  bl 0x7103778300
71018bba78  ldr x8,[x20, #0x80]
71018bba7c  ldr x8,[x8]
71018bba80  ldr x0,[x8, #0x10]
71018bba84  mov v0.16B,v8.16B
71018bba88  adrp x1,0x71042d6000
71018bba8c  add x1,x1,#0x495
71018bba90  bl 0x7103778300
71018bba94  ldr s0,[x19, #0x150]
71018bba98  ldr s1,[x19, #0x154]
71018bba9c  fsub s1,s1,s0
71018bbaa0  fmov s5,0x3f000000
71018bbaa4  ldr s2,[x19, #0x158]
71018bbaa8  ldr s3,[x19, #0x15c]
71018bbaac  ldr s4,[x21, #0xe8]
71018bbab0  fmul s6,s1,s5
71018bbab4  fadd s9,s0,s6
71018bbab8  fsub s0,s3,s2
71018bbabc  movi v3.2D,#0x0
71018bbac0  ldr x8,[x22, #0x740]
71018bbac4  mov v3.S[0x0],v1.S[0x0]
71018bbac8  fmul s1,s0,s5
71018bbacc  mov v3.S[0x1],v0.S[0x0]
71018bbad0  ldr x22,[x8, #0x8]
71018bbad4  fmul v0.4S,v3.4S,v4.S[0x0]
71018bbad8  fadd s11,s2,s1
71018bbadc  fmul s12,s5,v0.S[0x1]
71018bbae0  fmul s10,s5,v0.S[0x0]
71018bbae4  ldr x0,[x22, #0x2b0]
71018bbae8  add x20,x19,#0x180
71018bbaec  cbz x0,0x71018bbb10
71018bbaf0  add x8,x22,#0x290
71018bbaf4  cmp x8,x0
71018bbaf8  b.eq 0x71018bbb18
71018bbafc  ldr x8,[x0]
71018bbb00  ldr x8,[x8, #0x10]
71018bbb04  blr x8
71018bbb08  str x0,[sp, #0x60]
71018bbb0c  b 0x71018bbb30
71018bbb10  str xzr,[sp, #0x60]
71018bbb14  b 0x71018bbb30
71018bbb18  add x8,sp,#0x40
71018bbb1c  str x8,[sp, #0x60]
71018bbb20  ldr x8,[x0]
71018bbb24  ldr x8,[x8, #0x18]
71018bbb28  add x1,sp,#0x40
71018bbb2c  blr x8
71018bbb30  add x0,sp,#0x40
71018bbb34  mov x1,x20
71018bbb38  fsub s13,s9,s10
71018bbb3c  fadd s14,s9,s10
71018bbb40  fsub s10,s11,s12
71018bbb44  fadd s9,s11,s12
71018bbb48  add x23,sp,#0x40
71018bbb4c  bl 0x71019f0670
71018bbb50  ldr x0,[sp, #0x60]
71018bbb54  cmp x23,x0
71018bbb58  b.eq 0x71018bbb6c
71018bbb5c  cbz x0,0x71018bbb78
71018bbb60  ldr x8,[x0]
71018bbb64  ldr x8,[x8, #0x28]
71018bbb68  b 0x71018bbb74
71018bbb6c  ldr x8,[x0]
71018bbb70  ldr x8,[x8, #0x20]
71018bbb74  blr x8
71018bbb78  ldr s2,[x19, #0x130]
71018bbb7c  fdiv s2,s8,s2
71018bbb80  adrp x10,0x7104467000
71018bbb84  ldr q0,[x10, #0xd10]
71018bbb88  adrp x10,0x7104466000
71018bbb8c  ldr q1,[x10, #0x940]
71018bbb90  fmul v0.4S,v0.4S,v2.S[0x0]
71018bbb94  ldr x8,[x22, #0x2c0]
71018bbb98  fmul v1.4S,v1.4S,v2.S[0x0]
71018bbb9c  ldr q2,[x19, #0x140]
71018bbba0  fadd v0.4S,v2.4S,v0.4S
71018bbba4  ldr w9,[x22, #0x2c8]
71018bbba8  fadd v1.4S,v2.4S,v1.4S
71018bbbac  str x8,[x19, #0x1b0]
71018bbbb0  zip1 v2.4S,v0.4S,v1.4S
71018bbbb4  ldr w8,[x19, #0xec]
71018bbbb8  trn2 v0.4S,v0.4S,v1.4S
71018bbbbc  str s13,[x19, #0x150]
71018bbbc0  str s14,[x19, #0x154]
71018bbbc4  str s10,[x19, #0x158]
71018bbbc8  str s9,[x19, #0x15c]
71018bbbcc  str w9,[x19, #0x1b8]
71018bbbd0  stp d2,d0,[x19, #0x160]
71018bbbd4  str wzr,[x19, #0x170]
71018bbbd8  ldr w9,[x21, #0xec]
71018bbbdc  cmp w8,w9
71018bbbe0  b.lt 0x71018bbbfc
71018bbbe4  ldrsw x8,[x19, #0xe4]
71018bbbe8  cmp w8,#0x13
71018bbbec  b.cs 0x71018bbc24
71018bbbf0  add x8,x19,x8, LSL #0x2
71018bbbf4  mov w9,#0x5
71018bbbf8  str w9,[x8, #0x98]
71018bbbfc  ldp d9,d8,[sp, #0x98]
71018bbc00  ldr d14,[sp, #0x70]
71018bbc04  ldp d11,d10,[sp, #0x88]
71018bbc08  ldr x23,[sp, #0xa8]
71018bbc0c  ldp d13,d12,[sp, #0x78]
71018bbc10  ldp x29,x30,[sp, #0xd0]
71018bbc14  ldp x20,x19,[sp, #0xc0]
71018bbc18  ldp x22,x21,[sp, #0xb0]
71018bbc1c  add sp,sp,#0xe0
71018bbc20  ret
71018bbc24  bl 0x71039c2650
