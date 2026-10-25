// addr:      71013a9650
// offset:    0x13a9650
// name:      FUN_71013a9650
// mangled:   
// size:      348

71013a9650  stp d9,d8,[sp, #-0x40]!
71013a9654  stp x22,x21,[sp, #0x10]
71013a9658  stp x20,x19,[sp, #0x20]
71013a965c  stp x29,x30,[sp, #0x30]
71013a9660  add x29,sp,#0x30
71013a9664  adrp x8,0x71052a8000
71013a9668  ldr x8,[x8, #0xa88]
71013a966c  str xzr,[x0, #0x50]
71013a9670  ldr q1,[x8]
71013a9674  fmov s0,wzr
71013a9678  ext v2.16B,v1.16B,v1.16B,0x8
71013a967c  mov v2.S[0x1],v0.S[0x0]
71013a9680  adrp x21,0x71052a8000
71013a9684  mov v1.D[0x1],v2.D[0x0]
71013a9688  adrp x8,0x7104473000
71013a968c  str q1,[x0, #0x40]
71013a9690  ldr x21,[x21, #0xa80]
71013a9694  ldr s8,[x8, #0x208]
71013a9698  adrp x8,0x7104472000
71013a969c  ldr s9,[x8, #0x4c4]
71013a96a0  ldr q0,[x21]
71013a96a4  mov x19,x0
71013a96a8  mov w22,#0x218
71013a96ac  adrp x20,0x7104432000
71013a96b0  add x20,x20,#0xd48
71013a96b4  strb wzr,[x0, #0x21]
71013a96b8  str xzr,[x0, #0x90]
71013a96bc  strb wzr,[x0, #0x61]
71013a96c0  str xzr,[x0, #0xd0]
71013a96c4  strb wzr,[x0, #0xa1]
71013a96c8  str xzr,[x0, #0x110]
71013a96cc  strb wzr,[x0, #0xe1]
71013a96d0  str xzr,[x0, #0x150]
71013a96d4  strb wzr,[x0, #0x121]
71013a96d8  str xzr,[x0, #0x190]
71013a96dc  strb wzr,[x0, #0x161]
71013a96e0  str xzr,[x0, #0x1d0]
71013a96e4  str q0,[x0, #0x30]
71013a96e8  stp q0,q1,[x0, #0x70]
71013a96ec  strb wzr,[x0, #0x1a1]
71013a96f0  stp q0,q1,[x0, #0xb0]
71013a96f4  str xzr,[x0, #0x210]
71013a96f8  stp q0,q1,[x0, #0xf0]
71013a96fc  strb wzr,[x0, #0x1e1]
71013a9700  stp q0,q1,[x0, #0x130]
71013a9704  stp q0,q1,[x0, #0x170]
71013a9708  stp q0,q1,[x0, #0x1b0]
71013a970c  stp q0,q1,[x0, #0x1f0]
71013a9710  ldr x8,[x19, #0x8]
71013a9714  ldr x8,[x8, #0x80]
71013a9718  add x8,x8,x22
71013a971c  add x0,x8,#0x8
71013a9720  mov w2,#0x2
71013a9724  mov x1,x20
71013a9728  mov w3,wzr
71013a972c  mov w4,wzr
71013a9730  bl 0x710377a280
71013a9734  ldr x8,[x19, #0x8]
71013a9738  ldr x8,[x8, #0x80]
71013a973c  ldr x8,[x8, x22, LSL #0x0]
71013a9740  ldr x8,[x8]
71013a9744  cbz x8,0x71013a978c
71013a9748  ldr q0,[x21]
71013a974c  dup s1,v0.S[0x1]
71013a9750  fadd s0,s0,s8
71013a9754  str s0,[x8, #0x30]
71013a9758  fsub s1,s9,s1
71013a975c  ldrb w9,[x8, #0x58]
71013a9760  orr w9,w9,#0x10
71013a9764  strb w9,[x8, #0x58]
71013a9768  str s1,[x8, #0x34]
71013a976c  ldr x8,[x19, #0x8]
71013a9770  ldr x8,[x8, #0x80]
71013a9774  ldr x8,[x8, x22, LSL #0x0]
71013a9778  ldr x8,[x8]
71013a977c  cbz x8,0x71013a978c
71013a9780  ldrb w9,[x8, #0x58]
71013a9784  and w9,w9,#0xfe
71013a9788  strb w9,[x8, #0x58]
71013a978c  add x22,x22,#0x40
71013a9790  cmp x22,#0x318
71013a9794  b.ne 0x71013a9710
71013a9798  ldp x29,x30,[sp, #0x30]
71013a979c  ldp x20,x19,[sp, #0x20]
71013a97a0  ldp x22,x21,[sp, #0x10]
71013a97a4  ldp d9,d8,[sp], #0x40
71013a97a8  ret
