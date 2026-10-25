// addr:      7101e97fb0
// offset:    0x1e97fb0
// name:      FUN_7101e97fb0
// mangled:   
// size:      248

7101e97fb0  stp x20,x19,[sp, #-0x20]!
7101e97fb4  stp x29,x30,[sp, #0x10]
7101e97fb8  add x29,sp,#0x10
7101e97fbc  ldrb w8,[x1, #0x80]
7101e97fc0  fmov s1,wzr
7101e97fc4  mov x20,x1
7101e97fc8  mov x19,x0
7101e97fcc  cbz w8,0x7101e98000
7101e97fd0  ldr x8,[x20, #0x8]
7101e97fd4  cmp x8,#0x1
7101e97fd8  b.lt 0x7101e98000
7101e97fdc  ldr x9,[x20, #0x10]
7101e97fe0  scvtf s0,x9
7101e97fe4  scvtf s1,x8
7101e97fe8  fdiv s0,s0,s1
7101e97fec  fmov s1,0x3f800000
7101e97ff0  fmin s1,s0,s1
7101e97ff4  fcmp s0,#0.0
7101e97ff8  fmov s0,wzr
7101e97ffc  fcsel s1,s0,s1,mi
7101e98000  ldr s0,[x19, #0xc]
7101e98004  fcmp s0,s1
7101e98008  b.eq 0x7101e98050
7101e9800c  ldr x8,[x19]
7101e98010  str s1,[x19, #0xc]
7101e98014  ldr x9,[x8, #0x38]
7101e98018  ldr x0,[x9, #0x8]
7101e9801c  cbz x0,0x7101e98038
7101e98020  ldr x8,[x0]
7101e98024  ldr x8,[x8, #0x1a8]
7101e98028  blr x8
7101e9802c  ldr s1,[x19, #0xc]
7101e98030  ldr x8,[x19]
7101e98034  b 0x7101e9803c
7101e98038  fmov s0,wzr
7101e9803c  fmul s1,s0,s1
7101e98040  fcmp s1,s0
7101e98044  fcsel s0,s1,s0,mi
7101e98048  add x0,x8,#0x30
7101e9804c  bl 0x710377b010
7101e98050  mov x0,x20
7101e98054  bl 0x7102512c50
7101e98058  ldr x8,[x19, #0x10]
7101e9805c  mov x3,x0
7101e98060  mov x4,x1
7101e98064  cmp x8,x0
7101e98068  b.ne 0x7101e98084
7101e9806c  ldr x8,[x19, #0x18]
7101e98070  cmp x8,x4
7101e98074  b.ne 0x7101e98084
7101e98078  ldp x29,x30,[sp, #0x10]
7101e9807c  ldp x20,x19,[sp], #0x20
7101e98080  ret
7101e98084  ldr x8,[x19]
7101e98088  stp x3,x4,[x19, #0x10]
7101e9808c  ldp x29,x30,[sp, #0x10]
7101e98090  add x0,x8,#0x40
7101e98094  adrp x1,0x710434a000
7101e98098  add x1,x1,#0xa8d
7101e9809c  mov w2,#0x2
7101e980a0  ldp x20,x19,[sp], #0x20
7101e980a4  b 0x710377a280
