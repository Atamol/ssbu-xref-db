// addr:      7101ef8f40
// offset:    0x1ef8f40
// name:      FUN_7101ef8f40
// mangled:   
// size:      120

7101ef8f40  str x19,[sp, #-0x20]!
7101ef8f44  stp x29,x30,[sp, #0x10]
7101ef8f48  add x29,sp,#0x10
7101ef8f4c  mov x19,x0
7101ef8f50  ldr w8,[x0, #0x204]
7101ef8f54  ldr x0,[x0, #0x228]
7101ef8f58  cbz w8,0x7101ef8fa0
7101ef8f5c  ldr x0,[x0, #0x8]
7101ef8f60  cbz x0,0x7101ef8f84
7101ef8f64  adrp x1,0x710434a000
7101ef8f68  add x1,x1,#0xbb9
7101ef8f6c  bl 0x71037964b0
7101ef8f70  cbz x0,0x7101ef8f84
7101ef8f74  ldr x8,[x0]
7101ef8f78  ldr x8,[x8, #0x138]
7101ef8f7c  blr x8
7101ef8f80  tbz w0,#0x0,0x7101ef8f94
7101ef8f84  ldr w8,[x19, #0x1fc]
7101ef8f88  subs w8,w8,#0x1
7101ef8f8c  b.lt 0x7101ef8f94
7101ef8f90  str w8,[x19, #0x1fc]
7101ef8f94  ldp x29,x30,[sp, #0x10]
7101ef8f98  ldr x19,[sp], #0x20
7101ef8f9c  ret
7101ef8fa0  ldp x29,x30,[sp, #0x10]
7101ef8fa4  adrp x1,0x710434a000
7101ef8fa8  add x1,x1,#0xbb9
7101ef8fac  fmov s0,0x3f800000
7101ef8fb0  ldr x19,[sp], #0x20
7101ef8fb4  b 0x7103778300
