// addr:      7102e7f540
// offset:    0x2e7f540
// name:      FUN_7102e7f540
// mangled:   
// size:      1436

7102e7f540  sub sp,sp,#0xc0
7102e7f544  str d8,[sp, #0x90]
7102e7f548  stp x20,x19,[sp, #0xa0]
7102e7f54c  stp x29,x30,[sp, #0xb0]
7102e7f550  add x29,sp,#0xb0
7102e7f554  mov x19,x0
7102e7f558  ldr x0,[x0, #0x10]
7102e7f55c  ldr w8,[x19, #0x24]
7102e7f560  cmp w8,#0x0
7102e7f564  orr w8,wzr,#0x3
7102e7f568  csinc w1,w8,wzr,ne
7102e7f56c  mov v8.16B,v0.16B
7102e7f570  bl 0x7102e7f380
7102e7f574  ldr w8,[x19, #0x24]
7102e7f578  ldr x0,[x19, #0x10]
7102e7f57c  mov w9,#0x2
7102e7f580  str q0,[sp]
7102e7f584  cmp w8,#0x0
7102e7f588  mov w8,#0x4
7102e7f58c  csel w1,w9,w8,eq
7102e7f590  bl 0x7102e7f380
7102e7f594  ldr x8,[x19]
7102e7f598  ldrb w9,[x8, #0x18]
7102e7f59c  cbz w9,0x7102e7f678
7102e7f5a0  ldr s1,[x19, #0x28]
7102e7f5a4  fsub s2,s1,s8
7102e7f5a8  fmov s1,wzr
7102e7f5ac  ldr q4,[sp]
7102e7f5b0  ldr w9,[x19, #0x20]
7102e7f5b4  cmp w9,#0x3
7102e7f5b8  fmax s2,s2,s1
7102e7f5bc  str s2,[x19, #0x28]
7102e7f5c0  b.hi 0x7102e7fab8
7102e7f5c4  adrp x10,0x710451f000
7102e7f5c8  add x10,x10,#0x30
7102e7f5cc  ldrsw x9,[x10, x9, LSL #0x2]
7102e7f5d0  add x9,x9,x10
7102e7f5d4  br x9
7102e7f5d8  dup s0,v0.S[0x1]
7102e7f5dc  ext v3.16B,v4.16B,v4.16B,0x8
7102e7f5e0  dup s2,v4.S[0x1]
7102e7f5e4  adrp x9,0x7104472000
7102e7f5e8  mov v3.S[0x1],v1.S[0x0]
7102e7f5ec  ldr s1,[x9, #0x4b0]
7102e7f5f0  adrp x9,0x7104473000
7102e7f5f4  fsub s0,s0,s2
7102e7f5f8  fmul s0,s0,s1
7102e7f5fc  mov v1.16B,v4.16B
7102e7f600  mov v1.D[0x1],v3.D[0x0]
7102e7f604  fadd s0,s2,s0
7102e7f608  mov v1.S[0x1],v0.S[0x0]
7102e7f60c  ldr s0,[x9, #0x710]
7102e7f610  str q1,[x19, #0x30]
7102e7f614  ldr x8,[x8, #0x340]
7102e7f618  ldp w9,w10,[x8]
7102e7f61c  str w10,[x8]
7102e7f620  ldp w10,w11,[x8, #0x8]
7102e7f624  eor w9,w9,w9, LSL #0xb
7102e7f628  eor w9,w9,w9, LSR #0x8
7102e7f62c  eor w9,w9,w11
7102e7f630  eor w9,w9,w11, LSR #0x13
7102e7f634  ucvtf s2,w9
7102e7f638  fmul s3,s2,s0
7102e7f63c  fmov s1,0x3f000000
7102e7f640  stp w10,w11,[x8, #0x4]
7102e7f644  str w9,[x8, #0xc]
7102e7f648  ldr s2,[x19, #0x28]
7102e7f64c  fcmp s3,s1
7102e7f650  cset w8,mi
7102e7f654  strb w8,[x19, #0x48]
7102e7f658  mov w8,#0x1
7102e7f65c  str w8,[x19, #0x20]
7102e7f660  fcmp s2,#0.0
7102e7f664  b.ne 0x7102e7fab8
7102e7f668  mov w8,#0x2
7102e7f66c  str wzr,[x19, #0x44]
7102e7f670  strb wzr,[x19, #0x49]
7102e7f674  b 0x7102e7fa88
7102e7f678  ldr q3,[sp]
7102e7f67c  fmov s1,wzr
7102e7f680  adrp x8,0x7104472000
7102e7f684  dup s0,v0.S[0x1]
7102e7f688  ext v2.16B,v3.16B,v3.16B,0x8
7102e7f68c  mov v2.S[0x1],v1.S[0x0]
7102e7f690  mov v1.16B,v3.16B
7102e7f694  mov v1.D[0x1],v2.D[0x0]
7102e7f698  dup s2,v3.S[0x1]
7102e7f69c  ldr s3,[x8, #0x4b0]
7102e7f6a0  fsub s0,s0,s2
7102e7f6a4  fmul s0,s0,s3
7102e7f6a8  fadd s0,s2,s0
7102e7f6ac  mov v1.S[0x1],v0.S[0x0]
7102e7f6b0  str q1,[x19, #0x30]
7102e7f6b4  ldr x20,[x19, #0x18]
7102e7f6b8  cbz x20,0x7102e7fac0
7102e7f6bc  ldrb w8,[x20, #0x110]
7102e7f6c0  cbz w8,0x7102e7fac0
7102e7f6c4  adrp x8,0x7104468000
7102e7f6c8  ldr q0,[x8, #0xca0]
7102e7f6cc  adrp x8,0x710446a000
7102e7f6d0  str q0,[sp, #0x10]
7102e7f6d4  ldr q0,[x8, #0x360]
7102e7f6d8  adrp x8,0x7104465000
7102e7f6dc  fmov s2,0x3f800000
7102e7f6e0  str q0,[sp, #0x20]
7102e7f6e4  ldr q0,[x8, #0x6b0]
7102e7f6e8  add x1,sp,#0x10
7102e7f6ec  str q0,[sp, #0x30]
7102e7f6f0  ldr q0,[x19, #0x30]
7102e7f6f4  mov v1.16B,v0.16B
7102e7f6f8  mov v1.S[0x3],v2.S[0x0]
7102e7f6fc  ext v0.16B,v1.16B,v0.16B,0xc
7102e7f700  ext v1.16B,v0.16B,v1.16B,0x4
7102e7f704  ext v0.16B,v0.16B,v0.16B,0x8
7102e7f708  ext v0.16B,v1.16B,v0.16B,0xc
7102e7f70c  str q0,[sp, #0x40]
7102e7f710  ldr x0,[x20, #0x90]
7102e7f714  ldr x8,[x0]
7102e7f718  ldr x8,[x8, #0x148]
7102e7f71c  blr x8
7102e7f720  ldr x20,[x20, #0xd8]
7102e7f724  cbz x20,0x7102e7f790
7102e7f728  ldr x8,[sp, #0x28]
7102e7f72c  str x8,[sp, #0x68]
7102e7f730  ldr x8,[sp, #0x20]
7102e7f734  str x8,[sp, #0x60]
7102e7f738  ldr x8,[sp, #0x18]
7102e7f73c  str x8,[sp, #0x58]
7102e7f740  ldr x8,[sp, #0x10]
7102e7f744  str x8,[sp, #0x50]
7102e7f748  ldr x8,[sp, #0x48]
7102e7f74c  str x8,[sp, #0x88]
7102e7f750  ldr x8,[sp, #0x40]
7102e7f754  str x8,[sp, #0x80]
7102e7f758  ldr x8,[sp, #0x38]
7102e7f75c  str x8,[sp, #0x78]
7102e7f760  ldr x8,[sp, #0x30]
7102e7f764  str x8,[sp, #0x70]
7102e7f768  ldr x8,[x20, #0x8]
7102e7f76c  ldrb w9,[x8, #0xa8]
7102e7f770  cbz w9,0x7102e7f788
7102e7f774  ldr x0,[x8, #0x48]
7102e7f778  ldr x8,[x0]
7102e7f77c  ldr x8,[x8, #0x20]
7102e7f780  add x1,sp,#0x50
7102e7f784  blr x8
7102e7f788  mov w8,#0x1
7102e7f78c  strb w8,[x20, #0x20]
7102e7f790  ldr s3,[x19, #0x70]
7102e7f794  fcmp s3,#0.0
7102e7f798  b.le 0x7102e7f860
7102e7f79c  ldr s0,[x19, #0x74]
7102e7f7a0  fadd s5,s0,s8
7102e7f7a4  fdiv s0,s5,s3
7102e7f7a8  fmov s6,0x3f800000
7102e7f7ac  mov v7.16B,v6.16B
7102e7f7b0  ldrb w8,[x19, #0x78]
7102e7f7b4  cmp w8,#0x0
7102e7f7b8  fmov s1,wzr
7102e7f7bc  str s5,[x19, #0x74]
7102e7f7c0  ldp s2,s4,[x19, #0x60]
7102e7f7c4  fsub s6,s7,s0
7102e7f7c8  fcsel s0,s6,s0,eq
7102e7f7cc  fcmp s0,s7
7102e7f7d0  fcsel s6,s7,s0,gt
7102e7f7d4  fcmp s0,#0.0
7102e7f7d8  fcsel s0,s1,s6,mi
7102e7f7dc  fcmp s5,s3
7102e7f7e0  ldp s1,s6,[x19, #0x68]
7102e7f7e4  fsub s7,s7,s0
7102e7f7e8  fmul s2,s2,s0
7102e7f7ec  fmul s17,s4,s0
7102e7f7f0  fmul s19,s6,s0
7102e7f7f4  fmul s16,s1,s0
7102e7f7f8  fadd s2,s7,s2
7102e7f7fc  fadd s1,s7,s17
7102e7f800  fadd s4,s7,s19
7102e7f804  fadd s0,s7,s16
7102e7f808  stp s2,s1,[x19, #0x50]
7102e7f80c  stp s0,s4,[x19, #0x58]
7102e7f810  b.lt 0x7102e7f868
7102e7f814  str wzr,[x19, #0x70]
7102e7f818  ldr x8,[x19, #0x18]
7102e7f81c  cbz x8,0x7102e7fac0
7102e7f820  ldrb w9,[x8, #0xe0]
7102e7f824  cbz w9,0x7102e7fac0
7102e7f828  fmov v3.4S,#0x3f800000
7102e7f82c  mov v3.S[0x0],v2.S[0x0]
7102e7f830  mov v3.S[0x1],v1.S[0x0]
7102e7f834  adrp x1,0x71043bc000
7102e7f838  add x1,x1,#0x999
7102e7f83c  mov v3.S[0x2],v0.S[0x0]
7102e7f840  str q3,[sp, #0x50]
7102e7f844  ldr x0,[x8, #0x90]
7102e7f848  ldr x8,[x0]
7102e7f84c  ldr x8,[x8, #0x268]
7102e7f850  orr w2,wzr,#0x3
7102e7f854  add x3,sp,#0x50
7102e7f858  blr x8
7102e7f85c  b 0x7102e7fac0
7102e7f860  ldp s2,s1,[x19, #0x50]
7102e7f864  ldr s0,[x19, #0x58]
7102e7f868  ldr x8,[x19, #0x18]
7102e7f86c  cbnz x8,0x7102e7f820
7102e7f870  b 0x7102e7fac0
7102e7f874  ldr x9,[x19, #0x8]
7102e7f878  ldr s1,[x9, #0x8]
7102e7f87c  ldr s2,[x19, #0x44]
7102e7f880  fadd s1,s1,s2
7102e7f884  str s1,[x19, #0x44]
7102e7f888  ldr s2,[x9, #0xc]
7102e7f88c  fcmp s1,s2
7102e7f890  b.le 0x7102e7f89c
7102e7f894  mov v1.16B,v2.16B
7102e7f898  str s2,[x19, #0x44]
7102e7f89c  ldrb w10,[x19, #0x49]
7102e7f8a0  cbz w10,0x7102e7f934
7102e7f8a4  fmul s2,s1,s8
7102e7f8a8  ldr q1,[x19, #0x30]
7102e7f8ac  ldrb w8,[x19, #0x48]
7102e7f8b0  dup s3,v1.S[0x1]
7102e7f8b4  cbz w8,0x7102e7fa64
7102e7f8b8  fadd s0,s2,s3
7102e7f8bc  dup s2,v4.S[0x1]
7102e7f8c0  mov v1.S[0x1],v0.S[0x0]
7102e7f8c4  fcmp s0,s2
7102e7f8c8  str q1,[x19, #0x30]
7102e7f8cc  b.ge 0x7102e7fa7c
7102e7f8d0  b 0x7102e7fab8
7102e7f8d4  ldr x9,[x19, #0x8]
7102e7f8d8  ldr s0,[x9, #0x8]
7102e7f8dc  ldr s1,[x19, #0x44]
7102e7f8e0  fsub s0,s1,s0
7102e7f8e4  str s0,[x19, #0x44]
7102e7f8e8  ldr s1,[x9, #0xc]
7102e7f8ec  fneg s1,s1
7102e7f8f0  fcmp s0,s1
7102e7f8f4  b.hi 0x7102e7f900
7102e7f8f8  mov v0.16B,v1.16B
7102e7f8fc  str s1,[x19, #0x44]
7102e7f900  fmul s1,s0,s8
7102e7f904  ldr q0,[x19, #0x30]
7102e7f908  ldrb w9,[x19, #0x48]
7102e7f90c  dup s2,v0.S[0x1]
7102e7f910  cbz w9,0x7102e7f9a4
7102e7f914  fadd s1,s1,s2
7102e7f918  mov v0.S[0x1],v1.S[0x0]
7102e7f91c  mov x9,x19
7102e7f920  ldr s2,[x9, #0x40]!
7102e7f924  fcmp s2,s1
7102e7f928  stur q0,[x9, #-0x10]
7102e7f92c  b.gt 0x7102e7f9c0
7102e7f930  b 0x7102e7fab4
7102e7f934  ldr s2,[x9, #0xc]
7102e7f938  fcmp s1,s2
7102e7f93c  b.ne 0x7102e7f8a4
7102e7f940  ldr x8,[x8, #0x340]
7102e7f944  ldp w9,w10,[x8]
7102e7f948  str w10,[x8]
7102e7f94c  ldp w10,w11,[x8, #0x8]
7102e7f950  eor w9,w9,w9, LSL #0xb
7102e7f954  eor w9,w9,w9, LSR #0x8
7102e7f958  eor w9,w9,w11
7102e7f95c  eor w9,w9,w11, LSR #0x13
7102e7f960  ucvtf s1,w9
7102e7f964  stp w10,w11,[x8, #0x4]
7102e7f968  str w9,[x8, #0xc]
7102e7f96c  adrp x8,0x7104473000
7102e7f970  ldr s2,[x8, #0x91c]
7102e7f974  adrp x8,0x7104473000
7102e7f978  fmul s1,s1,s2
7102e7f97c  ldr s2,[x8, #0x710]
7102e7f980  ldr x8,[x19, #0x8]
7102e7f984  fmul s6,s1,s2
7102e7f988  ldr s2,[x8, #0x1c]
7102e7f98c  mov w8,#0x1
7102e7f990  strb w8,[x19, #0x49]
7102e7f994  fcmp s6,s2
7102e7f998  b.pl 0x7102e7fad4
7102e7f99c  ldr q1,[x19, #0x30]
7102e7f9a0  b 0x7102e7fa7c
7102e7f9a4  fsub s1,s2,s1
7102e7f9a8  mov v0.S[0x1],v1.S[0x0]
7102e7f9ac  mov x9,x19
7102e7f9b0  ldr s2,[x9, #0x40]!
7102e7f9b4  fcmp s2,s1
7102e7f9b8  stur q0,[x9, #-0x10]
7102e7f9bc  b.pl 0x7102e7fab4
7102e7f9c0  ldr x8,[x8, #0x340]
7102e7f9c4  ldp w9,w10,[x8]
7102e7f9c8  str w10,[x8]
7102e7f9cc  ldp w10,w11,[x8, #0x8]
7102e7f9d0  eor w9,w9,w9, LSL #0xb
7102e7f9d4  eor w9,w9,w9, LSR #0x8
7102e7f9d8  eor w9,w9,w11
7102e7f9dc  eor w9,w9,w11, LSR #0x13
7102e7f9e0  ucvtf s0,w9
7102e7f9e4  stp w10,w11,[x8, #0x4]
7102e7f9e8  str w9,[x8, #0xc]
7102e7f9ec  adrp x8,0x7104473000
7102e7f9f0  ldr s1,[x8, #0x91c]
7102e7f9f4  adrp x8,0x7104473000
7102e7f9f8  fmul s1,s0,s1
7102e7f9fc  ldr s0,[x8, #0x710]
7102e7fa00  ldr x8,[x19, #0x8]
7102e7fa04  ldr s2,[x8, #0x10]
7102e7fa08  fmul s4,s1,s0
7102e7fa0c  fcmp s4,s2
7102e7fa10  b.pl 0x7102e7fa98
7102e7fa14  ldr x9,[x19]
7102e7fa18  ldr x9,[x9, #0x340]
7102e7fa1c  ldp s1,s2,[x8, #0x14]
7102e7fa20  fsub s2,s2,s1
7102e7fa24  ldp w8,w10,[x9]
7102e7fa28  str w10,[x9]
7102e7fa2c  ldp w10,w11,[x9, #0x8]
7102e7fa30  eor w8,w8,w8, LSL #0xb
7102e7fa34  eor w8,w8,w8, LSR #0x8
7102e7fa38  eor w8,w8,w11
7102e7fa3c  eor w8,w8,w11, LSR #0x13
7102e7fa40  ucvtf s3,w8
7102e7fa44  fmul s2,s2,s3
7102e7fa48  fmul s3,s2,s0
7102e7fa4c  fadd s0,s1,s3
7102e7fa50  str w8,[x9, #0xc]
7102e7fa54  mov w8,#0x1
7102e7fa58  stp w10,w11,[x9, #0x4]
7102e7fa5c  str s0,[x19, #0x28]
7102e7fa60  b 0x7102e7fa9c
7102e7fa64  fsub s2,s3,s2
7102e7fa68  dup s0,v0.S[0x1]
7102e7fa6c  mov v1.S[0x1],v2.S[0x0]
7102e7fa70  fcmp s2,s0
7102e7fa74  str q1,[x19, #0x30]
7102e7fa78  b.hi 0x7102e7fab8
7102e7fa7c  add x8,x19,#0x40
7102e7fa80  st1 {v1.S}[1],[x8]
7102e7fa84  orr w8,wzr,#0x3
7102e7fa88  str w8,[x19, #0x20]
7102e7fa8c  ldr x20,[x19, #0x18]
7102e7fa90  cbnz x20,0x7102e7f6bc
7102e7fa94  b 0x7102e7fac0
7102e7fa98  mov w8,#0x2
7102e7fa9c  str w8,[x19, #0x20]
7102e7faa0  ldrb w8,[x19, #0x48]
7102e7faa4  ldr q0,[x19, #0x30]
7102e7faa8  eor w8,w8,#0x1
7102e7faac  add x9,x19,#0x40
7102e7fab0  strb w8,[x19, #0x48]
7102e7fab4  st1 {v0.S}[1],[x9]
7102e7fab8  ldr x20,[x19, #0x18]
7102e7fabc  cbnz x20,0x7102e7f6bc
7102e7fac0  ldr d8,[sp, #0x90]
7102e7fac4  ldp x29,x30,[sp, #0xb0]
7102e7fac8  ldp x20,x19,[sp, #0xa0]
7102e7facc  add sp,sp,#0xc0
7102e7fad0  ret
7102e7fad4  ldr s1,[x19, #0x44]
7102e7fad8  b 0x7102e7f8a4
