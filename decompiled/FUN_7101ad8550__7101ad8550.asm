// addr:      7101ad8550
// offset:    0x1ad8550
// name:      FUN_7101ad8550
// mangled:   
// size:      288

7101ad8550  sub sp,sp,#0xa0
7101ad8554  str d8,[sp, #0x60]
7101ad8558  stp x22,x21,[sp, #0x70]
7101ad855c  stp x20,x19,[sp, #0x80]
7101ad8560  stp x29,x30,[sp, #0x90]
7101ad8564  add x29,sp,#0x90
7101ad8568  mov w19,w1
7101ad856c  mov w21,w2
7101ad8570  mov x20,x0
7101ad8574  adrp x1,0x71042c5000
7101ad8578  add x1,x1,#0x15
7101ad857c  strb wzr,[sp, #0x20]
7101ad8580  add x0,sp,#0x18
7101ad8584  mov w2,w19
7101ad8588  str xzr,[sp, #0x18]
7101ad858c  add x22,sp,#0x18
7101ad8590  bl 0x710062dc20
7101ad8594  mov x0,x20
7101ad8598  ldr x8,[x0, #0x10]!
7101ad859c  ldr x9,[x0, #0x8]
7101ad85a0  cmp x9,x8
7101ad85a4  b.eq 0x7101ad866c
7101ad85a8  ldr x8,[x8]
7101ad85ac  ldr x8,[x8]
7101ad85b0  ldr x8,[x8]
7101ad85b4  add x0,x8,#0x8
7101ad85b8  add x1,x22,#0x8
7101ad85bc  add x8,sp,#0x8
7101ad85c0  bl 0x7103776640
7101ad85c4  mov x0,x20
7101ad85c8  mov w1,w19
7101ad85cc  mov w2,wzr
7101ad85d0  bl 0x7101ad7870
7101ad85d4  tbz w21,#0x0,0x7101ad85f4
7101ad85d8  orr w8,wzr,#0x30
7101ad85dc  ldr x0,[x20, #0x170]
7101ad85e0  add x2,sp,#0x8
7101ad85e4  smaddl x8,w19,w8,x20
7101ad85e8  add x1,x8,#0x1a0
7101ad85ec  bl 0x710338fff0
7101ad85f0  b 0x7101ad8620
7101ad85f4  fmov s8,0x3f800000
7101ad85f8  ldr x0,[sp, #0x10]
7101ad85fc  adrp x1,0x7104281000
7101ad8600  add x1,x1,#0x165
7101ad8604  mov v0.16B,v8.16B
7101ad8608  bl 0x7103778300
7101ad860c  ldr x0,[sp, #0x10]
7101ad8610  mov v0.16B,v8.16B
7101ad8614  adrp x1,0x7104306000
7101ad8618  add x1,x1,#0xde4
7101ad861c  bl 0x7103778300
7101ad8620  ldr x19,[sp, #0x10]
7101ad8624  adrp x8,0x710523d000
7101ad8628  add x8,x8,#0x988
7101ad862c  stp x8,xzr,[sp, #0x8]
7101ad8630  cbz x19,0x7101ad8654
7101ad8634  ldr x0,[x19, #0x18]
7101ad8638  adrp x8,0x710523d000
7101ad863c  add x8,x8,#0x9a8
7101ad8640  stp x8,xzr,[x19, #0x10]
7101ad8644  cbz x0,0x7101ad864c
7101ad8648  bl 0x710392eb40
7101ad864c  mov x0,x19
7101ad8650  bl 0x710392eb40
7101ad8654  ldr d8,[sp, #0x60]
7101ad8658  ldp x29,x30,[sp, #0x90]
7101ad865c  ldp x20,x19,[sp, #0x80]
7101ad8660  ldp x22,x21,[sp, #0x70]
7101ad8664  add sp,sp,#0xa0
7101ad8668  ret
7101ad866c  bl 0x71039c1330
