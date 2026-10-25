// addr:      7101a1f530
// offset:    0x1a1f530
// name:      FUN_7101a1f530
// mangled:   
// size:      664

7101a1f530  str x23,[sp, #-0x40]!
7101a1f534  stp x22,x21,[sp, #0x10]
7101a1f538  stp x20,x19,[sp, #0x20]
7101a1f53c  stp x29,x30,[sp, #0x30]
7101a1f540  add x29,sp,#0x30
7101a1f544  ldr x22,[x1, #0x8]
7101a1f548  ldrh w8,[x22, #0x216]
7101a1f54c  mov x19,x1
7101a1f550  mov x20,x0
7101a1f554  cbnz w8,0x7101a1f63c
7101a1f558  ldrb w8,[x20, #0x159]
7101a1f55c  cmp w8,#0xb
7101a1f560  b.hi 0x7101a1f584
7101a1f564  adrp x9,0x71044f7000
7101a1f568  add x9,x9,#0x368
7101a1f56c  mov w21,#0xa
7101a1f570  ldrsw x8,[x9, x8, LSL #0x2]
7101a1f574  add x8,x8,x9
7101a1f578  br x8
7101a1f57c  orr w21,wzr,#0x1e
7101a1f580  b 0x7101a1f5d0
7101a1f584  mov w21,#0x96
7101a1f588  b 0x7101a1f5d0
7101a1f58c  mov w21,#0x3e7
7101a1f590  b 0x7101a1f5d0
7101a1f594  mov w21,#0x50
7101a1f598  b 0x7101a1f5d0
7101a1f59c  mov w21,#0x1f4
7101a1f5a0  b 0x7101a1f5d0
7101a1f5a4  mov w21,#0x32
7101a1f5a8  b 0x7101a1f5d0
7101a1f5ac  mov w21,#0xfa
7101a1f5b0  b 0x7101a1f5d0
7101a1f5b4  mov w21,#0x64
7101a1f5b8  b 0x7101a1f5d0
7101a1f5bc  mov w21,#0xc8
7101a1f5c0  b 0x7101a1f5d0
7101a1f5c4  mov w21,#0x12c
7101a1f5c8  b 0x7101a1f5d0
7101a1f5cc  mov w21,#0x2ee
7101a1f5d0  ldr x23,[x22, #0x5e8]
7101a1f5d4  add x0,x23,#0xc8
7101a1f5d8  mov w1,#0x1
7101a1f5dc  mov w2,w21
7101a1f5e0  strh w21,[x22, #0x216]
7101a1f5e4  bl 0x710377a310
7101a1f5e8  adrp x8,0x710532f000
7101a1f5ec  ldr x8,[x8, #0x8c0]
7101a1f5f0  ldr x22,[x8, #0x8]
7101a1f5f4  fmov s0,wzr
7101a1f5f8  mov x1,#0x3f84
7101a1f5fc  movk x1,#0x7e19, LSL #16
7101a1f600  movk x1,#0xe, LSL #32
7101a1f604  mov x0,x22
7101a1f608  bl 0x71033112b0
7101a1f60c  fcvtzs w8,s0
7101a1f610  cmp w21,w8
7101a1f614  ldp x0,x1,[x22, #0xe0]
7101a1f618  csel w8,w8,w21,lt
7101a1f61c  scvtf s0,w8
7101a1f620  bl 0x71033115f0
7101a1f624  str w0,[sp, #0x8]
7101a1f628  ldr x8,[x23, #0xd0]
7101a1f62c  ldr x0,[x8, #0x10]
7101a1f630  add x1,sp,#0x8
7101a1f634  bl 0x710377a5b0
7101a1f638  ldr x22,[x19, #0x8]
7101a1f63c  ldr w8,[x22, #0x1fc]
7101a1f640  cmn w8,#0x1
7101a1f644  b.eq 0x7101a1f730
7101a1f648  ldr x8,[x19, #0x8]
7101a1f64c  ldr w9,[x8, #0x1f8]
7101a1f650  cmp w9,#0x1
7101a1f654  b.ne 0x7101a1f71c
7101a1f658  ldrb w8,[x8, #0x211]
7101a1f65c  cbnz w8,0x7101a1f71c
7101a1f660  ldrb w8,[x20, #0x15a]
7101a1f664  cmp w8,#0x9
7101a1f668  mov w9,#0x2
7101a1f66c  csel w8,w8,w9,ne
7101a1f670  b.ne 0x7101a1f6b8
7101a1f674  adrp x8,0x7105239000
7101a1f678  add x8,x8,#0x1c0
7101a1f67c  ldp w9,w10,[x8]
7101a1f680  str w10,[x8]
7101a1f684  ldp w10,w11,[x8, #0x8]
7101a1f688  eor w9,w9,w9, LSL #0xb
7101a1f68c  eor w9,w9,w9, LSR #0x8
7101a1f690  eor w9,w9,w11
7101a1f694  eor w9,w9,w11, LSR #0x13
7101a1f698  stp w10,w11,[x8, #0x4]
7101a1f69c  str w9,[x8, #0xc]
7101a1f6a0  mov w8,#0x8e39
7101a1f6a4  movk w8,#0x38e3, LSL #16
7101a1f6a8  umull x8,w9,w8
7101a1f6ac  lsr x8,x8,#0x21
7101a1f6b0  add w8,w8,w8, LSL #0x3
7101a1f6b4  sub w8,w9,w8
7101a1f6b8  and w8,w8,#0xff
7101a1f6bc  cmp w8,#0x9
7101a1f6c0  orr w9,wzr,#0x3
7101a1f6c4  csinc w3,w9,w8,cs
7101a1f6c8  ldr x8,[x19, #0x8]
7101a1f6cc  ldr x19,[x8, #0x5e8]
7101a1f6d0  strb w3,[x8, #0x211]
7101a1f6d4  ldr w8,[x19, #0x21c]
7101a1f6d8  cmp w8,#0x1
7101a1f6dc  str w3,[x19, #0x250]
7101a1f6e0  b.ne 0x7101a1f71c
7101a1f6e4  add x0,x19,#0x88
7101a1f6e8  adrp x1,0x71042b3000
7101a1f6ec  add x1,x1,#0xd87
7101a1f6f0  mov w2,#0x1
7101a1f6f4  bl 0x710377a280
7101a1f6f8  add x0,x19,#0x68
7101a1f6fc  ldr w2,[x19, #0x250]
7101a1f700  adrp x1,0x710439d000
7101a1f704  add x1,x1,#0xc8e
7101a1f708  ldp x29,x30,[sp, #0x30]
7101a1f70c  ldp x20,x19,[sp, #0x20]
7101a1f710  ldp x22,x21,[sp, #0x10]
7101a1f714  ldr x23,[sp], #0x40
7101a1f718  b 0x7103778430
7101a1f71c  ldp x29,x30,[sp, #0x30]
7101a1f720  ldp x20,x19,[sp, #0x20]
7101a1f724  ldp x22,x21,[sp, #0x10]
7101a1f728  ldr x23,[sp], #0x40
7101a1f72c  ret
7101a1f730  ldrsw x8,[x22, #0x150]
7101a1f734  cmp w8,#0x8
7101a1f738  b.cs 0x7101a1f7c4
7101a1f73c  adrp x9,0x7104471000
7101a1f740  add x9,x9,#0x3e0
7101a1f744  ldr w1,[x22, #0x1f8]
7101a1f748  ldr w2,[x9, x8, LSL #0x2]
7101a1f74c  ldrb w3,[x22, #0x6bb]
7101a1f750  ldr x0,[x22, #0x5e8]
7101a1f754  str w2,[x22, #0x1fc]
7101a1f758  bl 0x7101a000c0
7101a1f75c  ldr w8,[x22, #0x1f8]
7101a1f760  cmp w8,#0x2
7101a1f764  b.ne 0x7101a1f788
7101a1f768  ldrb w8,[x22, #0x6bd]
7101a1f76c  cbz w8,0x7101a1f648
7101a1f770  ldr x8,[x22, #0x5e8]
7101a1f774  ldr x8,[x8, #0x80]
7101a1f778  ldr x0,[x8, #0x10]
7101a1f77c  cbz x0,0x7101a1f648
7101a1f780  add x1,x22,#0x2c0
7101a1f784  b 0x7101a1f7b4
7101a1f788  cbnz w8,0x7101a1f648
7101a1f78c  ldrb w8,[x22, #0x1c4]
7101a1f790  cmp w8,#0xff
7101a1f794  b.eq 0x7101a1f648
7101a1f798  ldr w8,[x22, #0x394]
7101a1f79c  cbnz w8,0x7101a1f648
7101a1f7a0  ldr x8,[x22, #0x5e8]
7101a1f7a4  ldr x8,[x8, #0x80]
7101a1f7a8  ldr x0,[x8, #0x10]
7101a1f7ac  cbz x0,0x7101a1f648
7101a1f7b0  add x1,x22,#0x1d0
7101a1f7b4  mov w2,#0xffffffff
7101a1f7b8  mov w3,#0x1
7101a1f7bc  bl 0x71037a2270
7101a1f7c0  b 0x7101a1f648
7101a1f7c4  bl 0x71039c2650
