// addr:      7102e1d480
// offset:    0x2e1d480
// name:      FUN_7102e1d480
// mangled:   
// size:      644

7102e1d480  sub sp,sp,#0x90
7102e1d484  stp d9,d8,[sp, #0x50]
7102e1d488  stp x22,x21,[sp, #0x60]
7102e1d48c  stp x20,x19,[sp, #0x70]
7102e1d490  stp x29,x30,[sp, #0x80]
7102e1d494  add x29,sp,#0x80
7102e1d498  ldr x8,[x0, #0x8]
7102e1d49c  mov v9.16B,v1.16B
7102e1d4a0  mov v8.16B,v0.16B
7102e1d4a4  mov x19,x0
7102e1d4a8  cbz x8,0x7102e1d4c4
7102e1d4ac  ldr x0,[x8, #0x90]
7102e1d4b0  ldr x8,[x0]
7102e1d4b4  ldr x8,[x8, #0x158]
7102e1d4b8  blr x8
7102e1d4bc  mov x20,x0
7102e1d4c0  b 0x7102e1d4dc
7102e1d4c4  adrp x8,0x710532a000
7102e1d4c8  add x8,x8,#0x9e0
7102e1d4cc  ldarb w8,[x8]
7102e1d4d0  tbz w8,#0x0,0x7102e1d6b4
7102e1d4d4  adrp x20,0x710532a000
7102e1d4d8  add x20,x20,#0x9f0
7102e1d4dc  ldr x8,[x20, #0x8]
7102e1d4e0  ldr x9,[x20, #0x18]
7102e1d4e4  str x9,[sp, #0x28]
7102e1d4e8  str x8,[sp, #0x18]
7102e1d4ec  ldr x8,[x20, #0x28]
7102e1d4f0  ldr x9,[x20, #0x38]
7102e1d4f4  str x9,[sp, #0x48]
7102e1d4f8  str x8,[sp, #0x38]
7102e1d4fc  ldr x8,[x20]
7102e1d500  ldr x9,[x20, #0x10]
7102e1d504  str x9,[sp, #0x20]
7102e1d508  str x8,[sp, #0x10]
7102e1d50c  ldr x8,[x20, #0x20]
7102e1d510  ldr x9,[x20, #0x30]
7102e1d514  mov v0.16B,v9.16B
7102e1d518  mov x0,x19
7102e1d51c  str x9,[sp, #0x40]
7102e1d520  str x8,[sp, #0x30]
7102e1d524  bl 0x7102e1d050
7102e1d528  ldr x8,[x19, #0x18]
7102e1d52c  ldr x8,[x8, #0x38]
7102e1d530  add x20,x19,#0x50
7102e1d534  cbz x8,0x7102e1d554
7102e1d538  ldr x0,[x8, #0x130]
7102e1d53c  ldr x8,[x0]
7102e1d540  ldr x8,[x8, #0x178]
7102e1d544  add x2,sp,#0x10
7102e1d548  mov w3,#0x1
7102e1d54c  mov x1,x20
7102e1d550  blr x8
7102e1d554  ldr x8,[x19, #0x20]
7102e1d558  ldr x8,[x8, #0x38]
7102e1d55c  cbz x8,0x7102e1d57c
7102e1d560  ldr x0,[x8, #0x130]
7102e1d564  ldr x8,[x0]
7102e1d568  ldr x8,[x8, #0x178]
7102e1d56c  add x2,sp,#0x10
7102e1d570  mov w3,#0x1
7102e1d574  mov x1,x20
7102e1d578  blr x8
7102e1d57c  ldr x8,[x19, #0x30]
7102e1d580  ldr x8,[x8, #0x38]
7102e1d584  cbz x8,0x7102e1d5a4
7102e1d588  ldr x0,[x8, #0x130]
7102e1d58c  ldr x8,[x0]
7102e1d590  ldr x8,[x8, #0x168]
7102e1d594  add x2,sp,#0x10
7102e1d598  mov w3,#0x1
7102e1d59c  mov x1,x20
7102e1d5a0  blr x8
7102e1d5a4  ldr q0,[x19, #0x80]
7102e1d5a8  movi d1,#0x0
7102e1d5ac  ldr x8,[x19]
7102e1d5b0  mov v0.D[0x1],v1.D[0x0]
7102e1d5b4  ldrsw x9,[x19, #0x44]
7102e1d5b8  str q0,[sp]
7102e1d5bc  ldr x8,[x8, #0x1370]
7102e1d5c0  adrp x21,0x710513f000
7102e1d5c4  add x21,x21,#0xc40
7102e1d5c8  ldr x2,[x21, x9, LSL #0x3]
7102e1d5cc  fmov s0,wzr
7102e1d5d0  ldp x0,x1,[x8]
7102e1d5d4  mov x3,sp
7102e1d5d8  bl 0x71025f51e0
7102e1d5dc  ldr q0,[x19, #0x80]
7102e1d5e0  fadd s1,s0,s8
7102e1d5e4  ext v2.16B,v0.16B,v0.16B,0x8
7102e1d5e8  mov v1.S[0x1],v0.S[0x1]
7102e1d5ec  ldr x22,[x19, #0x8]
7102e1d5f0  mov v1.D[0x1],v2.D[0x0]
7102e1d5f4  mov v1.S[0x3],v0.S[0x3]
7102e1d5f8  str q1,[x19, #0x80]
7102e1d5fc  cbz x22,0x7102e1d66c
7102e1d600  ldr x0,[x22, #0x90]
7102e1d604  ldr x8,[x0]
7102e1d608  ldr x8,[x8, #0x148]
7102e1d60c  mov x1,x20
7102e1d610  blr x8
7102e1d614  ldr x22,[x22, #0xd8]
7102e1d618  cbz x22,0x7102e1d66c
7102e1d61c  ldp x10,x9,[x20, #0x10]
7102e1d620  str x9,[sp, #0x28]
7102e1d624  ldp x9,x8,[x20]
7102e1d628  str x9,[sp, #0x10]
7102e1d62c  stp x8,x10,[sp, #0x18]
7102e1d630  ldp x10,x9,[x20, #0x30]
7102e1d634  str x9,[sp, #0x48]
7102e1d638  ldp x9,x8,[x20, #0x20]
7102e1d63c  str x9,[sp, #0x30]
7102e1d640  stp x8,x10,[sp, #0x38]
7102e1d644  ldr x8,[x22, #0x8]
7102e1d648  ldrb w9,[x8, #0xa8]
7102e1d64c  cbz w9,0x7102e1d664
7102e1d650  ldr x0,[x8, #0x48]
7102e1d654  ldr x8,[x0]
7102e1d658  ldr x8,[x8, #0x20]
7102e1d65c  add x1,sp,#0x10
7102e1d660  blr x8
7102e1d664  mov w8,#0x1
7102e1d668  strb w8,[x22, #0x20]
7102e1d66c  ldr q0,[x19, #0x80]
7102e1d670  movi d1,#0x0
7102e1d674  ldr x8,[x19]
7102e1d678  mov v0.D[0x1],v1.D[0x0]
7102e1d67c  ldrsw x9,[x19, #0x44]
7102e1d680  str q0,[sp, #0x10]
7102e1d684  ldr x8,[x8, #0x1370]
7102e1d688  ldr x2,[x21, x9, LSL #0x3]
7102e1d68c  fmov s0,wzr
7102e1d690  ldp x0,x1,[x8]
7102e1d694  add x3,sp,#0x10
7102e1d698  bl 0x71025f51e0
7102e1d69c  ldp d9,d8,[sp, #0x50]
7102e1d6a0  ldp x29,x30,[sp, #0x80]
7102e1d6a4  ldp x20,x19,[sp, #0x70]
7102e1d6a8  ldp x22,x21,[sp, #0x60]
7102e1d6ac  add sp,sp,#0x90
7102e1d6b0  ret
7102e1d6b4  adrp x0,0x710532a000
7102e1d6b8  add x0,x0,#0x9e0
7102e1d6bc  bl 0x71039c06b0
7102e1d6c0  adrp x20,0x710532a000
7102e1d6c4  add x20,x20,#0x9f0
7102e1d6c8  cbz w0,0x7102e1d4dc
7102e1d6cc  adrp x8,0x7104468000
7102e1d6d0  adrp x9,0x710446a000
7102e1d6d4  ldr q1,[x9, #0x360]
7102e1d6d8  ldr q0,[x8, #0xca0]
7102e1d6dc  adrp x10,0x7104465000
7102e1d6e0  adrp x8,0x710446a000
7102e1d6e4  stp q0,q1,[x20]
7102e1d6e8  ldr q0,[x10, #0x6b0]
7102e1d6ec  ldr q1,[x8, #0x350]
7102e1d6f0  adrp x0,0x710532a000
7102e1d6f4  add x0,x0,#0x9e0
7102e1d6f8  stp q0,q1,[x20, #0x20]
7102e1d6fc  bl 0x71039c06c0
7102e1d700  b 0x7102e1d4dc
