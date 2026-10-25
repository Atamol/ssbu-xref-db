// addr:      7101a99ed0
// offset:    0x1a99ed0
// name:      FUN_7101a99ed0
// mangled:   
// size:      416

7101a99ed0  str d8,[sp, #-0x30]!
7101a99ed4  str x21,[sp, #0x8]
7101a99ed8  stp x20,x19,[sp, #0x10]
7101a99edc  stp x29,x30,[sp, #0x20]
7101a99ee0  add x29,sp,#0x20
7101a99ee4  ldr w8,[x0, #0xfc]
7101a99ee8  mov x19,x0
7101a99eec  cbz w8,0x7101a99f50
7101a99ef0  ldr x8,[x19, #0x130]
7101a99ef4  ldr x21,[x8, #0x8]
7101a99ef8  ldr x0,[x21, #0xe8]
7101a99efc  add x20,x19,#0x130
7101a99f00  cbz x0,0x7101a99fa8
7101a99f04  ldr w8,[x21, #0xd8]
7101a99f08  cmp w8,#0x3
7101a99f0c  b.ne 0x7101a99fa8
7101a99f10  ldrb w8,[x21, #0x110]
7101a99f14  cbnz w8,0x7101a99fa8
7101a99f18  ldrb w8,[x21, #0x112]
7101a99f1c  cbnz w8,0x7101a99f48
7101a99f20  ldr x8,[x0]
7101a99f24  ldr x8,[x8, #0xa0]
7101a99f28  mov x1,xzr
7101a99f2c  blr x8
7101a99f30  ldr x0,[x21, #0xe8]
7101a99f34  ldr x8,[x0]
7101a99f38  ldr x8,[x8, #0x18]
7101a99f3c  blr x8
7101a99f40  mov w8,#0x1
7101a99f44  strb w8,[x21, #0x112]
7101a99f48  strb wzr,[x21, #0x113]
7101a99f4c  b 0x7101a99fa8
7101a99f50  ldr x8,[x19, #0x110]
7101a99f54  ldr x8,[x8]
7101a99f58  fmov s8,0x3f800000
7101a99f5c  mov v0.16B,v8.16B
7101a99f60  adrp x1,0x710435b000
7101a99f64  add x1,x1,#0xba
7101a99f68  ldr x0,[x8, #0x10]
7101a99f6c  bl 0x7103778300
7101a99f70  ldr x8,[x19, #0x110]
7101a99f74  ldr x8,[x8]
7101a99f78  ldr x0,[x8, #0x10]
7101a99f7c  mov v0.16B,v8.16B
7101a99f80  adrp x1,0x7104349000
7101a99f84  add x1,x1,#0xdf1
7101a99f88  bl 0x7103778300
7101a99f8c  ldr x8,[x19, #0x110]
7101a99f90  strb wzr,[x19, #0x168]
7101a99f94  ldr x8,[x8]
7101a99f98  ldr x0,[x8]
7101a99f9c  mov w1,wzr
7101a99fa0  bl 0x71037760f0
7101a99fa4  add x20,x19,#0x130
7101a99fa8  ldr x8,[x20]
7101a99fac  ldr x8,[x8, #0x8]
7101a99fb0  ldr x0,[x8, #0xe8]
7101a99fb4  cbz x0,0x7101a9a040
7101a99fb8  ldr x8,[x0]
7101a99fbc  ldr x8,[x8, #0xd8]
7101a99fc0  blr x8
7101a99fc4  ldr x9,[x20]
7101a99fc8  ldr x20,[x9, #0x8]
7101a99fcc  mov w8,w0
7101a99fd0  ldr x0,[x20, #0xe8]
7101a99fd4  tbz w8,#0x0,0x7101a9a00c
7101a99fd8  cbz x0,0x7101a9a040
7101a99fdc  ldr w8,[x20, #0xd8]
7101a99fe0  cmp w8,#0x3
7101a99fe4  b.ne 0x7101a9a040
7101a99fe8  ldrb w8,[x20, #0x110]
7101a99fec  cbnz w8,0x7101a9a040
7101a99ff0  ldrb w8,[x20, #0x112]
7101a99ff4  cbz w8,0x7101a9a040
7101a99ff8  ldr x8,[x0]
7101a99ffc  ldr x8,[x8, #0x10]
7101a9a000  blr x8
7101a9a004  strb wzr,[x20, #0x112]
7101a9a008  b 0x7101a9a040
7101a9a00c  cbz x0,0x7101a9a058
7101a9a010  ldrb w8,[x20, #0x111]
7101a9a014  cbz w8,0x7101a9a058
7101a9a018  ldr w8,[x20, #0xd8]
7101a9a01c  cmp w8,#0x3
7101a9a020  b.ne 0x7101a9a058
7101a9a024  ldr x8,[x19, #0x110]
7101a9a028  ldr x8,[x8]
7101a9a02c  ldr x0,[x8, #0x10]
7101a9a030  fmov s0,0x3f800000
7101a9a034  adrp x1,0x71042c3000
7101a9a038  add x1,x1,#0x58c
7101a9a03c  bl 0x7103778300
7101a9a040  ldrsw x8,[x19, #0xf4]
7101a9a044  cmp w8,#0x13
7101a9a048  b.cs 0x7101a9a06c
7101a9a04c  add x8,x19,x8, LSL #0x2
7101a9a050  mov w9,#0x2
7101a9a054  str w9,[x8, #0xa8]
7101a9a058  ldp x29,x30,[sp, #0x20]
7101a9a05c  ldr x21,[sp, #0x8]
7101a9a060  ldp x20,x19,[sp, #0x10]
7101a9a064  ldr d8,[sp], #0x30
7101a9a068  ret
7101a9a06c  bl 0x71039c2650
