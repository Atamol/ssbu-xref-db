// addr:      7102c2f5f0
// offset:    0x2c2f5f0
// name:      FUN_7102c2f5f0
// mangled:   
// size:      652

7102c2f5f0  sub sp,sp,#0x40
7102c2f5f4  stp x22,x21,[sp, #0x10]
7102c2f5f8  stp x20,x19,[sp, #0x20]
7102c2f5fc  stp x29,x30,[sp, #0x30]
7102c2f600  add x29,sp,#0x30
7102c2f604  ldr x8,[x0, #0x8]
7102c2f608  mov x19,x0
7102c2f60c  ldr x0,[x8, #0x318]
7102c2f610  mov w8,w1
7102c2f614  adrp x9,0x7105123000
7102c2f618  add x9,x9,#0xe68
7102c2f61c  lsl x21,x8,#0x3
7102c2f620  ldr x1,[x9, x21, LSL #0x0]
7102c2f624  bl 0x7102633910
7102c2f628  ldr x8,[x19, #0x8]
7102c2f62c  adrp x9,0x7105123000
7102c2f630  add x9,x9,#0xe48
7102c2f634  ldr x20,[x9, x21, LSL #0x0]
7102c2f638  ldr x0,[x8, #0x318]
7102c2f63c  mov w2,#0x1
7102c2f640  mov x1,x20
7102c2f644  bl 0x7102633a10
7102c2f648  ldr x8,[x19, #0x8]
7102c2f64c  adrp x9,0x7105123000
7102c2f650  add x9,x9,#0xe88
7102c2f654  ldr x1,[x9, x21, LSL #0x0]
7102c2f658  ldr x0,[x8, #0x318]
7102c2f65c  mov w2,#0x1
7102c2f660  bl 0x7102633b90
7102c2f664  ldr x8,[x19, #0x8]
7102c2f668  adrp x9,0x7105123000
7102c2f66c  add x9,x9,#0xea8
7102c2f670  ldr x1,[x9, x21, LSL #0x0]
7102c2f674  ldr x0,[x8, #0x318]
7102c2f678  bl 0x7102633800
7102c2f67c  ldr x8,[x19, #0x8]
7102c2f680  ldr x8,[x8, #0x318]
7102c2f684  adrp x9,0x7105123000
7102c2f688  add x9,x9,#0xec8
7102c2f68c  ldr x1,[x9, x21, LSL #0x0]
7102c2f690  ldr x0,[x8, #0x10]
7102c2f694  bl 0x71025f7350
7102c2f698  ldr x8,[x19, #0x48]
7102c2f69c  cbz x8,0x7102c2f6e4
7102c2f6a0  ldp x21,x22,[x8, #0x50]
7102c2f6a4  cmp x21,x22
7102c2f6a8  b.eq 0x7102c2f6e4
7102c2f6ac  ldrb w8,[x21, #0x20]
7102c2f6b0  cbz w8,0x7102c2f6d8
7102c2f6b4  ldr x8,[x21]
7102c2f6b8  cbz x8,0x7102c2f6d8
7102c2f6bc  ldrb w9,[x8, #0xe0]
7102c2f6c0  cbz w9,0x7102c2f6d8
7102c2f6c4  ldr x0,[x8, #0xb8]
7102c2f6c8  add x1,sp,#0x8
7102c2f6cc  mov w2,#0x1
7102c2f6d0  str x20,[sp, #0x8]
7102c2f6d4  bl 0x71026527b0
7102c2f6d8  add x21,x21,#0x38
7102c2f6dc  cmp x22,x21
7102c2f6e0  b.ne 0x7102c2f6ac
7102c2f6e4  ldr x8,[x19, #0x50]
7102c2f6e8  cbz x8,0x7102c2f730
7102c2f6ec  ldp x21,x22,[x8, #0x50]
7102c2f6f0  cmp x21,x22
7102c2f6f4  b.eq 0x7102c2f730
7102c2f6f8  ldrb w8,[x21, #0x20]
7102c2f6fc  cbz w8,0x7102c2f724
7102c2f700  ldr x8,[x21]
7102c2f704  cbz x8,0x7102c2f724
7102c2f708  ldrb w9,[x8, #0xe0]
7102c2f70c  cbz w9,0x7102c2f724
7102c2f710  ldr x0,[x8, #0xb8]
7102c2f714  add x1,sp,#0x8
7102c2f718  mov w2,#0x1
7102c2f71c  str x20,[sp, #0x8]
7102c2f720  bl 0x71026527b0
7102c2f724  add x21,x21,#0x38
7102c2f728  cmp x22,x21
7102c2f72c  b.ne 0x7102c2f6f8
7102c2f730  ldr x8,[x19, #0x58]
7102c2f734  cbz x8,0x7102c2f77c
7102c2f738  ldp x21,x22,[x8, #0x50]
7102c2f73c  cmp x21,x22
7102c2f740  b.eq 0x7102c2f77c
7102c2f744  ldrb w8,[x21, #0x20]
7102c2f748  cbz w8,0x7102c2f770
7102c2f74c  ldr x8,[x21]
7102c2f750  cbz x8,0x7102c2f770
7102c2f754  ldrb w9,[x8, #0xe0]
7102c2f758  cbz w9,0x7102c2f770
7102c2f75c  ldr x0,[x8, #0xb8]
7102c2f760  add x1,sp,#0x8
7102c2f764  mov w2,#0x1
7102c2f768  str x20,[sp, #0x8]
7102c2f76c  bl 0x71026527b0
7102c2f770  add x21,x21,#0x38
7102c2f774  cmp x22,x21
7102c2f778  b.ne 0x7102c2f744
7102c2f77c  ldr x8,[x19, #0x60]
7102c2f780  cbz x8,0x7102c2f7c8
7102c2f784  ldp x21,x22,[x8, #0x50]
7102c2f788  cmp x21,x22
7102c2f78c  b.eq 0x7102c2f7c8
7102c2f790  ldrb w8,[x21, #0x20]
7102c2f794  cbz w8,0x7102c2f7bc
7102c2f798  ldr x8,[x21]
7102c2f79c  cbz x8,0x7102c2f7bc
7102c2f7a0  ldrb w9,[x8, #0xe0]
7102c2f7a4  cbz w9,0x7102c2f7bc
7102c2f7a8  ldr x0,[x8, #0xb8]
7102c2f7ac  add x1,sp,#0x8
7102c2f7b0  mov w2,#0x1
7102c2f7b4  str x20,[sp, #0x8]
7102c2f7b8  bl 0x71026527b0
7102c2f7bc  add x21,x21,#0x38
7102c2f7c0  cmp x22,x21
7102c2f7c4  b.ne 0x7102c2f790
7102c2f7c8  ldr x0,[x19, #0x78]
7102c2f7cc  cbz x0,0x7102c2f7e0
7102c2f7d0  ldr x8,[x0]
7102c2f7d4  ldr x8,[x8, #0x50]
7102c2f7d8  mov x1,x20
7102c2f7dc  blr x8
7102c2f7e0  ldr x0,[x19, #0x80]
7102c2f7e4  cbz x0,0x7102c2f7f8
7102c2f7e8  ldr x8,[x0]
7102c2f7ec  ldr x8,[x8, #0x50]
7102c2f7f0  mov x1,x20
7102c2f7f4  blr x8
7102c2f7f8  ldr x0,[x19, #0x88]
7102c2f7fc  cbz x0,0x7102c2f810
7102c2f800  ldr x8,[x0]
7102c2f804  ldr x8,[x8, #0x50]
7102c2f808  mov x1,x20
7102c2f80c  blr x8
7102c2f810  ldr x0,[x19, #0x90]
7102c2f814  cbz x0,0x7102c2f828
7102c2f818  ldr x8,[x0]
7102c2f81c  ldr x8,[x8, #0x50]
7102c2f820  mov x1,x20
7102c2f824  blr x8
7102c2f828  ldr x0,[x19, #0x98]
7102c2f82c  cbz x0,0x7102c2f840
7102c2f830  ldr x8,[x0]
7102c2f834  ldr x8,[x8, #0x50]
7102c2f838  mov x1,x20
7102c2f83c  blr x8
7102c2f840  ldr x0,[x19, #0xa0]
7102c2f844  cbz x0,0x7102c2f868
7102c2f848  ldr x8,[x0]
7102c2f84c  ldr x2,[x8, #0x50]
7102c2f850  mov x1,x20
7102c2f854  ldp x29,x30,[sp, #0x30]
7102c2f858  ldp x20,x19,[sp, #0x20]
7102c2f85c  ldp x22,x21,[sp, #0x10]
7102c2f860  add sp,sp,#0x40
7102c2f864  br x2
7102c2f868  ldp x29,x30,[sp, #0x30]
7102c2f86c  ldp x20,x19,[sp, #0x20]
7102c2f870  ldp x22,x21,[sp, #0x10]
7102c2f874  add sp,sp,#0x40
7102c2f878  ret
