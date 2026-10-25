// addr:      7101ed7cf0
// offset:    0x1ed7cf0
// name:      FUN_7101ed7cf0
// mangled:   
// size:      184

7101ed7cf0  str x19,[sp, #-0x20]!
7101ed7cf4  stp x29,x30,[sp, #0x10]
7101ed7cf8  add x29,sp,#0x10
7101ed7cfc  ldr x8,[x0, #0x8]
7101ed7d00  mov x19,x0
7101ed7d04  ldr x0,[x8, #0x8]
7101ed7d08  fmov s0,0x3f800000
7101ed7d0c  adrp x1,0x710435b000
7101ed7d10  add x1,x1,#0xf7f
7101ed7d14  bl 0x7103778300
7101ed7d18  adrp x2,0x7104319000
7101ed7d1c  add x2,x2,#0x65d
7101ed7d20  orr w1,wzr,#0x1e
7101ed7d24  mov x0,x19
7101ed7d28  bl 0x7101ed3aa0
7101ed7d2c  ldr x9,[x19, #0x18]
7101ed7d30  mov w8,#0x1
7101ed7d34  strb w8,[x19, #0x34]
7101ed7d38  add x8,x19,#0x20
7101ed7d3c  b 0x7101ed7d44
7101ed7d40  mov x9,x11
7101ed7d44  cmp x9,x8
7101ed7d48  b.eq 0x7101ed7d9c
7101ed7d4c  ldr x10,[x9, #0x28]
7101ed7d50  strb wzr,[x10, #0x53]
7101ed7d54  ldr x10,[x9, #0x8]
7101ed7d58  cbz x10,0x7101ed7d6c
7101ed7d5c  mov x9,x10
7101ed7d60  ldr x10,[x10]
7101ed7d64  cbnz x10,0x7101ed7d5c
7101ed7d68  b 0x7101ed7d44
7101ed7d6c  mov x10,x9
7101ed7d70  ldr x11,[x10, #0x10]!
7101ed7d74  ldr x12,[x11]
7101ed7d78  cmp x12,x9
7101ed7d7c  b.eq 0x7101ed7d40
7101ed7d80  ldr x11,[x10]
7101ed7d84  mov x10,x11
7101ed7d88  ldr x9,[x10, #0x10]!
7101ed7d8c  ldr x12,[x9]
7101ed7d90  cmp x12,x11
7101ed7d94  b.ne 0x7101ed7d80
7101ed7d98  b 0x7101ed7d44
7101ed7d9c  ldp x29,x30,[sp, #0x10]
7101ed7da0  ldr x19,[sp], #0x20
7101ed7da4  ret
