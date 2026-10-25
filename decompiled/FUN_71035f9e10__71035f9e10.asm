// addr:      71035f9e10
// offset:    0x35f9e10
// name:      FUN_71035f9e10
// mangled:   
// size:      452

71035f9e10  sub sp,sp,#0x80
71035f9e14  str x23,[sp, #0x40]
71035f9e18  stp x22,x21,[sp, #0x50]
71035f9e1c  stp x20,x19,[sp, #0x60]
71035f9e20  stp x29,x30,[sp, #0x70]
71035f9e24  add x29,sp,#0x70
71035f9e28  mov w20,w2
71035f9e2c  mov w2,#0x40
71035f9e30  mov x19,x0
71035f9e34  bl 0x710388e7f0
71035f9e38  ldr x8,[x19, #0x10]
71035f9e3c  cbz x8,0x71035f9fbc
71035f9e40  and w9,w20,#0xff
71035f9e44  cmp w9,#0x1
71035f9e48  b.ne 0x71035f9fbc
71035f9e4c  ldr x8,[x8]
71035f9e50  ldr x9,[x19, #0x18]
71035f9e54  cmp x8,x9
71035f9e58  b.ne 0x71035f9fbc
71035f9e5c  bl 0x71002c48f0
71035f9e60  bl 0x71002c48f0
71035f9e64  mov w8,#0x2c
71035f9e68  adrp x9,0x71042c3000
71035f9e6c  add x9,x9,#0x79f
71035f9e70  ldr x20,[x0, #0x58]
71035f9e74  strb w8,[sp, #0x28]
71035f9e78  ldur x8,[x9, #0xe]
71035f9e7c  stur x8,[sp, #0x37]
71035f9e80  ldp x8,x9,[x9]
71035f9e84  stur x8,[sp, #0x29]
71035f9e88  ldr x8,[x19, #0x8]
71035f9e8c  stur x9,[sp, #0x31]
71035f9e90  strb wzr,[sp, #0x3f]
71035f9e94  ldr w9,[x8, #0x80]
71035f9e98  eor w1,w9,w9, ASR #0x1f
71035f9e9c  add x2,x8,#0x88
71035f9ea0  add x0,sp,#0x8
71035f9ea4  bl 0x7103662490
71035f9ea8  ldr x8,[sp, #0x18]
71035f9eac  cbz x8,0x71035f9ec4
71035f9eb0  ldr x8,[x8]
71035f9eb4  ldr x9,[sp, #0x20]
71035f9eb8  cmp x8,x9
71035f9ebc  b.ne 0x71035f9f34
71035f9ec0  ldr x8,[sp, #0x10]
71035f9ec4  ldr x21,[x8, #0x20]
71035f9ec8  cbz x21,0x71035f9f94
71035f9ecc  cbz x20,0x71035f9f44
71035f9ed0  adrp x22,0x7105231000
71035f9ed4  add x22,x22,#0x790
71035f9ed8  adrp x23,0x7105231000
71035f9edc  add x23,x23,#0x7b0
71035f9ee0  ldr w1,[x21, #0x28]
71035f9ee4  eor w2,w1,w1, ASR #0x1f
71035f9ee8  add x3,x21,#0x30
71035f9eec  add x0,sp,#0x8
71035f9ef0  bl 0x710356bf30
71035f9ef4  ldr x19,[sp, #0x10]
71035f9ef8  add x1,sp,#0x28
71035f9efc  mov x0,x19
71035f9f00  bl 0x71038aa1d0
71035f9f04  stp x22,x20,[sp, #0x8]
71035f9f08  ldr x8,[x20, #0x8]
71035f9f0c  str x8,[sp, #0x18]
71035f9f10  ldr x8,[x8]
71035f9f14  add x1,sp,#0x8
71035f9f18  mov x0,x19
71035f9f1c  str x8,[sp, #0x20]
71035f9f20  str x23,[sp, #0x8]
71035f9f24  bl 0x71038ac560
71035f9f28  ldr x21,[x21]
71035f9f2c  cbnz x21,0x71035f9ee0
71035f9f30  b 0x71035f9f94
71035f9f34  mov x8,xzr
71035f9f38  ldr x21,[x8, #0x20]
71035f9f3c  cbnz x21,0x71035f9ecc
71035f9f40  b 0x71035f9f94
71035f9f44  add x8,sp,#0x8
71035f9f48  add x22,x8,#0x10
71035f9f4c  adrp x23,0x7105231000
71035f9f50  add x23,x23,#0x7b0
71035f9f54  ldr w1,[x21, #0x28]
71035f9f58  eor w2,w1,w1, ASR #0x1f
71035f9f5c  add x3,x21,#0x30
71035f9f60  add x0,sp,#0x8
71035f9f64  bl 0x710356bf30
71035f9f68  ldr x19,[sp, #0x10]
71035f9f6c  add x1,sp,#0x28
71035f9f70  mov x0,x19
71035f9f74  bl 0x71038aa1d0
71035f9f78  add x1,sp,#0x8
71035f9f7c  mov x0,x19
71035f9f80  stp x23,x20,[sp, #0x8]
71035f9f84  stp xzr,xzr,[x22]
71035f9f88  bl 0x71038ac560
71035f9f8c  ldr x21,[x21]
71035f9f90  cbnz x21,0x71035f9f54
71035f9f94  ldrb w8,[sp, #0x28]
71035f9f98  tbz w8,#0x0,0x71035f9fbc
71035f9f9c  adrp x8,0x71052a8000
71035f9fa0  ldr x19,[sp, #0x38]
71035f9fa4  ldr x8,[x8, #0xa70]
71035f9fa8  cbz x8,0x71035f9fb4
71035f9fac  mov x0,x19
71035f9fb0  bl 0x71039c19b0
71035f9fb4  mov x0,x19
71035f9fb8  bl 0x710392eb40
71035f9fbc  ldp x29,x30,[sp, #0x70]
71035f9fc0  ldr x23,[sp, #0x40]
71035f9fc4  ldp x20,x19,[sp, #0x60]
71035f9fc8  ldp x22,x21,[sp, #0x50]
71035f9fcc  add sp,sp,#0x80
71035f9fd0  ret
