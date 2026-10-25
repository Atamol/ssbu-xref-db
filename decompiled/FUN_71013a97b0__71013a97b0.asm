// addr:      71013a97b0
// offset:    0x13a97b0
// name:      FUN_71013a97b0
// mangled:   
// size:      348

71013a97b0  stp d9,d8,[sp, #-0x40]!
71013a97b4  stp x22,x21,[sp, #0x10]
71013a97b8  stp x20,x19,[sp, #0x20]
71013a97bc  stp x29,x30,[sp, #0x30]
71013a97c0  add x29,sp,#0x30
71013a97c4  adrp x8,0x71052a8000
71013a97c8  ldr x8,[x8, #0xa88]
71013a97cc  str xzr,[x0, #0x250]
71013a97d0  ldr q1,[x8]
71013a97d4  fmov s0,wzr
71013a97d8  ext v2.16B,v1.16B,v1.16B,0x8
71013a97dc  mov v2.S[0x1],v0.S[0x0]
71013a97e0  adrp x21,0x71052a8000
71013a97e4  mov v1.D[0x1],v2.D[0x0]
71013a97e8  adrp x8,0x7104473000
71013a97ec  str q1,[x0, #0x240]
71013a97f0  ldr x21,[x21, #0xa80]
71013a97f4  ldr s8,[x8, #0x208]
71013a97f8  adrp x8,0x7104472000
71013a97fc  ldr s9,[x8, #0x4c4]
71013a9800  ldr q0,[x21]
71013a9804  mov x19,x0
71013a9808  mov w22,#0x238
71013a980c  adrp x20,0x7104432000
71013a9810  add x20,x20,#0xd48
71013a9814  strb wzr,[x0, #0x221]
71013a9818  str xzr,[x0, #0x290]
71013a981c  strb wzr,[x0, #0x261]
71013a9820  str xzr,[x0, #0x2d0]
71013a9824  strb wzr,[x0, #0x2a1]
71013a9828  str xzr,[x0, #0x310]
71013a982c  strb wzr,[x0, #0x2e1]
71013a9830  str xzr,[x0, #0x350]
71013a9834  strb wzr,[x0, #0x321]
71013a9838  str xzr,[x0, #0x390]
71013a983c  strb wzr,[x0, #0x361]
71013a9840  str xzr,[x0, #0x3d0]
71013a9844  str q0,[x0, #0x230]
71013a9848  stp q0,q1,[x0, #0x270]
71013a984c  strb wzr,[x0, #0x3a1]
71013a9850  stp q0,q1,[x0, #0x2b0]
71013a9854  str xzr,[x0, #0x410]
71013a9858  stp q0,q1,[x0, #0x2f0]
71013a985c  strb wzr,[x0, #0x3e1]
71013a9860  stp q0,q1,[x0, #0x330]
71013a9864  stp q0,q1,[x0, #0x370]
71013a9868  stp q0,q1,[x0, #0x3b0]
71013a986c  stp q0,q1,[x0, #0x3f0]
71013a9870  ldr x8,[x19, #0x8]
71013a9874  ldr x8,[x8, #0x80]
71013a9878  add x8,x8,x22
71013a987c  add x0,x8,#0x8
71013a9880  mov w2,#0x2
71013a9884  mov x1,x20
71013a9888  mov w3,wzr
71013a988c  mov w4,wzr
71013a9890  bl 0x710377a280
71013a9894  ldr x8,[x19, #0x8]
71013a9898  ldr x8,[x8, #0x80]
71013a989c  ldr x8,[x8, x22, LSL #0x0]
71013a98a0  ldr x8,[x8]
71013a98a4  cbz x8,0x71013a98ec
71013a98a8  ldr q0,[x21]
71013a98ac  dup s1,v0.S[0x1]
71013a98b0  fadd s0,s0,s8
71013a98b4  str s0,[x8, #0x30]
71013a98b8  fsub s1,s9,s1
71013a98bc  ldrb w9,[x8, #0x58]
71013a98c0  orr w9,w9,#0x10
71013a98c4  strb w9,[x8, #0x58]
71013a98c8  str s1,[x8, #0x34]
71013a98cc  ldr x8,[x19, #0x8]
71013a98d0  ldr x8,[x8, #0x80]
71013a98d4  ldr x8,[x8, x22, LSL #0x0]
71013a98d8  ldr x8,[x8]
71013a98dc  cbz x8,0x71013a98ec
71013a98e0  ldrb w9,[x8, #0x58]
71013a98e4  and w9,w9,#0xfe
71013a98e8  strb w9,[x8, #0x58]
71013a98ec  add x22,x22,#0x40
71013a98f0  cmp x22,#0x338
71013a98f4  b.ne 0x71013a9870
71013a98f8  ldp x29,x30,[sp, #0x30]
71013a98fc  ldp x20,x19,[sp, #0x20]
71013a9900  ldp x22,x21,[sp, #0x10]
71013a9904  ldp d9,d8,[sp], #0x40
71013a9908  ret
