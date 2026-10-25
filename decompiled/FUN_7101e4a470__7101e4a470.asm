// addr:      7101e4a470
// offset:    0x1e4a470
// name:      FUN_7101e4a470
// mangled:   
// size:      460

7101e4a470  stp x24,x23,[sp, #-0x40]!
7101e4a474  stp x22,x21,[sp, #0x10]
7101e4a478  stp x20,x19,[sp, #0x20]
7101e4a47c  stp x29,x30,[sp, #0x30]
7101e4a480  add x29,sp,#0x30
7101e4a484  ldrb w8,[x0, #0x22c]
7101e4a488  mov x19,x0
7101e4a48c  cbz w8,0x7101e4a5d8
7101e4a490  ldrb w20,[x19, #0x22d]
7101e4a494  add x21,x19,#0x1a8
7101e4a498  cmp x20,#0x3
7101e4a49c  b.hi 0x7101e4a62c
7101e4a4a0  ldr x8,[x21]
7101e4a4a4  add x9,x8,x20, LSL #0x3
7101e4a4a8  ldr x23,[x9, #0x48]
7101e4a4ac  mov w22,w20
7101e4a4b0  cbz x23,0x7101e4a518
7101e4a4b4  ldrb w9,[x23, #0xb3]
7101e4a4b8  mov w22,w20
7101e4a4bc  cbz w9,0x7101e4a4f4
7101e4a4c0  ldrb w9,[x19, #0x1b0]
7101e4a4c4  sub w9,w9,#0x1
7101e4a4c8  cmp w9,w20
7101e4a4cc  csinc w22,wzr,w20,le
7101e4a4d0  and w9,w22,#0xff
7101e4a4d4  cmp w9,#0x3
7101e4a4d8  b.hi 0x7101e4a4f0
7101e4a4dc  add x8,x8,w22, UXTB  #0x3
7101e4a4e0  ldr x8,[x8, #0x48]
7101e4a4e4  cbz x8,0x7101e4a4f0
7101e4a4e8  ldrb w8,[x8, #0xb3]
7101e4a4ec  cbnz w8,0x7101e4a4f4
7101e4a4f0  mov w22,w20
7101e4a4f4  ldrb w8,[x19, #0x1b2]
7101e4a4f8  cbz w8,0x7101e4a518
7101e4a4fc  cbz x23,0x7101e4a518
7101e4a500  ldr x0,[x23, #0x8]
7101e4a504  fmov s0,0x3f800000
7101e4a508  adrp x1,0x710438d000
7101e4a50c  add x1,x1,#0x258
7101e4a510  bl 0x7103778300
7101e4a514  strb wzr,[x23, #0xb1]
7101e4a518  mov x0,x21
7101e4a51c  mov w1,w20
7101e4a520  bl 0x7101e9b720
7101e4a524  add x21,x19,x20, LSL #0x2
7101e4a528  ldrh w2,[x21, #0x1fc]
7101e4a52c  orr w23,wzr,#0xffff
7101e4a530  cmp x2,x23
7101e4a534  b.eq 0x7101e4a560
7101e4a538  adrp x8,0x7105329000
7101e4a53c  ldr x8,[x8, #0xf98]
7101e4a540  ldr x8,[x8]
7101e4a544  ldr x0,[x8, #0x20]
7101e4a548  ldrb w1,[x21, #0x1fe]
7101e4a54c  mov w3,wzr
7101e4a550  add x24,x21,#0x1fc
7101e4a554  bl 0x710259c720
7101e4a558  strh w23,[x24]
7101e4a55c  strb wzr,[x21, #0x1fe]
7101e4a560  ldr x8,[x19, #0x220]
7101e4a564  add x8,x8,x20, LSL #0x4
7101e4a568  mov w9,#0x3b
7101e4a56c  str xzr,[x8, #0x68]
7101e4a570  str w9,[x8, #0x74]
7101e4a574  ldr x0,[x19, #0x238]
7101e4a578  add x8,x19,#0x230
7101e4a57c  cmp x8,x0
7101e4a580  b.ne 0x7101e4a594
7101e4a584  b 0x7101e4a5cc
7101e4a588  ldr x0,[x0, #0x8]
7101e4a58c  cmp x8,x0
7101e4a590  b.eq 0x7101e4a5cc
7101e4a594  ldrb w9,[x0, #0x10]
7101e4a598  cmp w9,w20
7101e4a59c  b.ne 0x7101e4a588
7101e4a5a0  cmp x8,x0
7101e4a5a4  b.eq 0x7101e4a5cc
7101e4a5a8  ldp x8,x9,[x0]
7101e4a5ac  str x9,[x8, #0x8]
7101e4a5b0  ldp x8,x9,[x0]
7101e4a5b4  str x8,[x9]
7101e4a5b8  ldr x8,[x19, #0x240]
7101e4a5bc  sub x8,x8,#0x1
7101e4a5c0  str x8,[x19, #0x240]
7101e4a5c4  cbz x0,0x7101e4a5cc
7101e4a5c8  bl 0x710392eb40
7101e4a5cc  mov w8,#0x1
7101e4a5d0  strb w22,[x19, #0x22d]
7101e4a5d4  strb w8,[x19, #0x22c]
7101e4a5d8  add x8,x19,#0x184
7101e4a5dc  orr x9,xzr,#-0x100000000
7101e4a5e0  str wzr,[x19, #0x178]
7101e4a5e4  stp xzr,xzr,[x19, #0x10]
7101e4a5e8  stp xzr,xzr,[x19, #0x168]
7101e4a5ec  stp xzr,xzr,[x19, #0x158]
7101e4a5f0  stp xzr,xzr,[x19, #0x148]
7101e4a5f4  stp xzr,xzr,[x19, #0x138]
7101e4a5f8  str x9,[x8]
7101e4a5fc  mov x8,#0xf
7101e4a600  movk x8,#0xd, LSL #32
7101e4a604  orr x9,xzr,#-0xffffffff
7101e4a608  str x8,[x19, #0x130]
7101e4a60c  add x8,x19,#0x17c
7101e4a610  strb wzr,[x19, #0x18c]
7101e4a614  str x9,[x8]
7101e4a618  ldp x29,x30,[sp, #0x30]
7101e4a61c  ldp x20,x19,[sp, #0x20]
7101e4a620  ldp x22,x21,[sp, #0x10]
7101e4a624  ldp x24,x23,[sp], #0x40
7101e4a628  ret
7101e4a62c  mov x0,x21
7101e4a630  mov w1,w20
7101e4a634  bl 0x7101e9b720
7101e4a638  bl 0x71039c2650
