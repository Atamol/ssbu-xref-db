// addr:      7101d76f40
// offset:    0x1d76f40
// name:      FUN_7101d76f40
// mangled:   
// size:      308

7101d76f40  str x23,[sp, #-0x40]!
7101d76f44  stp x22,x21,[sp, #0x10]
7101d76f48  stp x20,x19,[sp, #0x20]
7101d76f4c  stp x29,x30,[sp, #0x30]
7101d76f50  add x29,sp,#0x30
7101d76f54  ldr w8,[x0, #0x250]
7101d76f58  cmp w8,#0x3
7101d76f5c  b.cs 0x7101d77070
7101d76f60  add x8,x0,x8, LSL #0x3
7101d76f64  ldr x8,[x8, #0x238]
7101d76f68  ldr x8,[x8]
7101d76f6c  mov x19,x0
7101d76f70  ldr x0,[x8, #0x10]
7101d76f74  fmov s0,0x3f800000
7101d76f78  adrp x1,0x71043cf000
7101d76f7c  add x1,x1,#0x78c
7101d76f80  bl 0x7103778300
7101d76f84  mov w1,#0x1
7101d76f88  mov x0,x19
7101d76f8c  bl 0x7101d79600
7101d76f90  ldr x21,[x19, #0x2f0]
7101d76f94  orr w8,wzr,#0xfffffffe
7101d76f98  str w8,[x21, #0xf0]
7101d76f9c  ldr x8,[x21, #0xe8]
7101d76fa0  cbz x8,0x7101d76fac
7101d76fa4  ldr x8,[x8, #0x8]
7101d76fa8  strb wzr,[x8, #0x4aa]
7101d76fac  mov x20,x21
7101d76fb0  ldr x8,[x20, #0xe0]!
7101d76fb4  cbz x8,0x7101d7701c
7101d76fb8  ldr w9,[x21, #0xb8]
7101d76fbc  sub w9,w9,#0x1
7101d76fc0  cmp w9,#0x2
7101d76fc4  b.cc 0x7101d7701c
7101d76fc8  ldp x22,x23,[x8, #0x180]
7101d76fcc  cmp x22,x23
7101d76fd0  b.eq 0x7101d76ff4
7101d76fd4  ldr x0,[x22]
7101d76fd8  cbz x0,0x7101d76fe8
7101d76fdc  ldr x8,[x0]
7101d76fe0  ldr x8,[x8, #0x180]
7101d76fe4  blr x8
7101d76fe8  add x22,x22,#0x8
7101d76fec  cmp x23,x22
7101d76ff0  b.ne 0x7101d76fd4
7101d76ff4  mov x0,x20
7101d76ff8  mov w1,wzr
7101d76ffc  mov w2,wzr
7101d77000  bl 0x7103771a80
7101d77004  ldrsw x8,[x21, #0xb4]
7101d77008  cmp w8,#0x13
7101d7700c  b.cs 0x7101d77070
7101d77010  add x8,x21,x8, LSL #0x2
7101d77014  mov w9,#0x1
7101d77018  str w9,[x8, #0x68]
7101d7701c  ldr w8,[x19, #0x250]
7101d77020  cmp w8,#0x3
7101d77024  b.cs 0x7101d77070
7101d77028  add x8,x19,x8, LSL #0x3
7101d7702c  ldr x8,[x8, #0x238]
7101d77030  ldr x8,[x8]
7101d77034  ldr x8,[x8]
7101d77038  add x0,x19,#0x2e8
7101d7703c  add x1,x8,#0x5f8
7101d77040  bl 0x71032d6350
7101d77044  ldrsw x8,[x19, #0x21c]
7101d77048  cmp w8,#0x13
7101d7704c  b.cs 0x7101d77070
7101d77050  add x8,x19,x8, LSL #0x2
7101d77054  mov w9,#0xa
7101d77058  str w9,[x8, #0x1d0]
7101d7705c  ldp x29,x30,[sp, #0x30]
7101d77060  ldp x20,x19,[sp, #0x20]
7101d77064  ldp x22,x21,[sp, #0x10]
7101d77068  ldr x23,[sp], #0x40
7101d7706c  ret
7101d77070  bl 0x71039c2650
