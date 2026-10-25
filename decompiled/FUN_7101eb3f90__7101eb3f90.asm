// addr:      7101eb3f90
// offset:    0x1eb3f90
// name:      FUN_7101eb3f90
// mangled:   
// size:      312

7101eb3f90  str d8,[sp, #-0x30]!
7101eb3f94  str x21,[sp, #0x8]
7101eb3f98  stp x20,x19,[sp, #0x10]
7101eb3f9c  stp x29,x30,[sp, #0x20]
7101eb3fa0  add x29,sp,#0x20
7101eb3fa4  ldr x8,[x0, #0x8]
7101eb3fa8  ldr x21,[x8]
7101eb3fac  ldr w8,[x0, #0x270]
7101eb3fb0  mov x19,x0
7101eb3fb4  ldr x0,[x21, #0x10]
7101eb3fb8  cmp w8,#0x1
7101eb3fbc  b.ne 0x7101eb4044
7101eb3fc0  ldr x20,[x0, #0x8]
7101eb3fc4  cbz x20,0x7101eb401c
7101eb3fc8  adrp x1,0x7104413000
7101eb3fcc  add x1,x1,#0xab
7101eb3fd0  mov x0,x20
7101eb3fd4  bl 0x71037964b0
7101eb3fd8  cbz x0,0x7101eb3ff8
7101eb3fdc  ldr x8,[x0]
7101eb3fe0  ldr x8,[x8, #0x138]
7101eb3fe4  blr x8
7101eb3fe8  tbz w0,#0x0,0x7101eb40b4
7101eb3fec  ldr x8,[x21, #0x10]
7101eb3ff0  ldr x20,[x8, #0x8]
7101eb3ff4  cbz x20,0x7101eb401c
7101eb3ff8  adrp x1,0x71043ad000
7101eb3ffc  add x1,x1,#0xf48
7101eb4000  mov x0,x20
7101eb4004  bl 0x71037964b0
7101eb4008  cbz x0,0x7101eb401c
7101eb400c  ldr x8,[x0]
7101eb4010  ldr x8,[x8, #0x138]
7101eb4014  blr x8
7101eb4018  tbz w0,#0x0,0x7101eb40b4
7101eb401c  ldr x8,[x19, #0x378]
7101eb4020  ldr x8,[x8, #0x40]
7101eb4024  ldr x0,[x8, #0x8]
7101eb4028  cbz x0,0x7101eb403c
7101eb402c  ldr x8,[x0]
7101eb4030  ldr x8,[x8, #0x138]
7101eb4034  blr x8
7101eb4038  tbz w0,#0x0,0x7101eb40b4
7101eb403c  stp xzr,xzr,[x19, #0x10]
7101eb4040  b 0x7101eb40b4
7101eb4044  fmov s8,0x3f800000
7101eb4048  mov v0.16B,v8.16B
7101eb404c  adrp x1,0x7104413000
7101eb4050  add x1,x1,#0xab
7101eb4054  bl 0x7103778300
7101eb4058  ldr x0,[x21, #0x10]
7101eb405c  mov v0.16B,v8.16B
7101eb4060  adrp x1,0x71043ad000
7101eb4064  add x1,x1,#0xf48
7101eb4068  bl 0x7103778300
7101eb406c  ldr x20,[x19, #0x378]
7101eb4070  ldrb w8,[x20, #0x58]
7101eb4074  cbnz w8,0x7101eb40ac
7101eb4078  ldr x0,[x20, #0x10]
7101eb407c  mov w8,#0xffffffff
7101eb4080  str w8,[x20, #0x30]
7101eb4084  bl 0x710376b960
7101eb4088  ldr x8,[x20]
7101eb408c  ldr x8,[x8, #0x40]
7101eb4090  mov x0,x20
7101eb4094  blr x8
7101eb4098  fmov s0,0x3f800000
7101eb409c  add x0,x20,#0x38
7101eb40a0  bl 0x710377aee0
7101eb40a4  mov w8,#0x1
7101eb40a8  strb w8,[x20, #0x58]
7101eb40ac  mov w8,#0x1
7101eb40b0  str w8,[x19, #0x270]
7101eb40b4  ldp x29,x30,[sp, #0x20]
7101eb40b8  ldr x21,[sp, #0x8]
7101eb40bc  ldp x20,x19,[sp, #0x10]
7101eb40c0  ldr d8,[sp], #0x30
7101eb40c4  ret
