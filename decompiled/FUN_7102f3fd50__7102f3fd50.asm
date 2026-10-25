// addr:      7102f3fd50
// offset:    0x2f3fd50
// name:      FUN_7102f3fd50
// mangled:   
// size:      532

7102f3fd50  sub sp,sp,#0x40
7102f3fd54  stp x22,x21,[sp, #0x10]
7102f3fd58  stp x20,x19,[sp, #0x20]
7102f3fd5c  stp x29,x30,[sp, #0x30]
7102f3fd60  add x29,sp,#0x30
7102f3fd64  mov x20,x1
7102f3fd68  mov x19,x0
7102f3fd6c  mov w0,#0x10
7102f3fd70  orr w1,wzr,#0x60
7102f3fd74  bl 0x710392e290
7102f3fd78  mov x21,x0
7102f3fd7c  cbnz x0,0x7102f3fdc8
7102f3fd80  adrp x8,0x7105332000
7102f3fd84  ldr x0,[x8, #0xf00]
7102f3fd88  cbz x0,0x7102f3fdc4
7102f3fd8c  orr w8,wzr,#0x60
7102f3fd90  str wzr,[sp, #0xc]
7102f3fd94  add x1,sp,#0xc
7102f3fd98  str x8,[sp]
7102f3fd9c  ldr x8,[x0]
7102f3fda0  ldr x8,[x8, #0x30]
7102f3fda4  mov x2,sp
7102f3fda8  blr x8
7102f3fdac  tbz w0,#0x0,0x7102f3fdc4
7102f3fdb0  mov w0,#0x10
7102f3fdb4  orr w1,wzr,#0x60
7102f3fdb8  bl 0x710392e290
7102f3fdbc  mov x21,x0
7102f3fdc0  cbnz x0,0x7102f3fdc8
7102f3fdc4  mov x21,xzr
7102f3fdc8  ldr x8,[x19, #0x30]
7102f3fdcc  str wzr,[x21, #0x20]
7102f3fdd0  str xzr,[x21, #0x18]
7102f3fdd4  adrp x22,0x71052a8000
7102f3fdd8  ldr x22,[x22, #0xa88]
7102f3fddc  adrp x1,0x710436a000
7102f3fde0  add x1,x1,#0x88a
7102f3fde4  stp xzr,xzr,[x21, #0x8]
7102f3fde8  ldr q0,[x22]
7102f3fdec  str x8,[x21, #0x50]
7102f3fdf0  adrp x8,0x7105153000
7102f3fdf4  add x8,x8,#0xa30
7102f3fdf8  mov x0,x21
7102f3fdfc  str x20,[x21, #0x40]
7102f3fe00  strb wzr,[x21, #0x48]
7102f3fe04  str x8,[x21]
7102f3fe08  str q0,[x21, #0x30]
7102f3fe0c  bl 0x7102f3dd10
7102f3fe10  mov w0,#0x10
7102f3fe14  orr w1,wzr,#0x60
7102f3fe18  str x21,[x19, #0x10]
7102f3fe1c  bl 0x710392e290
7102f3fe20  mov x21,x0
7102f3fe24  cbnz x0,0x7102f3fe70
7102f3fe28  adrp x8,0x7105332000
7102f3fe2c  ldr x0,[x8, #0xf00]
7102f3fe30  cbz x0,0x7102f3fe6c
7102f3fe34  orr w8,wzr,#0x60
7102f3fe38  str wzr,[sp, #0xc]
7102f3fe3c  add x1,sp,#0xc
7102f3fe40  str x8,[sp]
7102f3fe44  ldr x8,[x0]
7102f3fe48  ldr x8,[x8, #0x30]
7102f3fe4c  mov x2,sp
7102f3fe50  blr x8
7102f3fe54  tbz w0,#0x0,0x7102f3fe6c
7102f3fe58  mov w0,#0x10
7102f3fe5c  orr w1,wzr,#0x60
7102f3fe60  bl 0x710392e290
7102f3fe64  mov x21,x0
7102f3fe68  cbnz x0,0x7102f3fe70
7102f3fe6c  mov x21,xzr
7102f3fe70  ldr x8,[x19, #0x30]
7102f3fe74  str wzr,[x21, #0x20]
7102f3fe78  adrp x1,0x710428f000
7102f3fe7c  add x1,x1,#0xca2
7102f3fe80  stp xzr,xzr,[x21, #0x10]
7102f3fe84  ldr q0,[x22]
7102f3fe88  str x20,[x21, #0x40]
7102f3fe8c  mov x0,x21
7102f3fe90  str x8,[x21, #0x50]
7102f3fe94  adrp x8,0x7105153000
7102f3fe98  add x8,x8,#0xa80
7102f3fe9c  strb wzr,[x21, #0x48]
7102f3fea0  stp x8,xzr,[x21]
7102f3fea4  str q0,[x21, #0x30]
7102f3fea8  bl 0x7102f3e950
7102f3feac  mov w0,#0x10
7102f3feb0  orr w1,wzr,#0x70
7102f3feb4  str x21,[x19, #0x18]
7102f3feb8  bl 0x710392e290
7102f3febc  mov x21,x0
7102f3fec0  cbnz x0,0x7102f3ff0c
7102f3fec4  adrp x8,0x7105332000
7102f3fec8  ldr x0,[x8, #0xf00]
7102f3fecc  cbz x0,0x7102f3ff08
7102f3fed0  orr w8,wzr,#0x70
7102f3fed4  str wzr,[sp, #0xc]
7102f3fed8  add x1,sp,#0xc
7102f3fedc  str x8,[sp]
7102f3fee0  ldr x8,[x0]
7102f3fee4  ldr x8,[x8, #0x30]
7102f3fee8  mov x2,sp
7102f3feec  blr x8
7102f3fef0  tbz w0,#0x0,0x7102f3ff08
7102f3fef4  mov w0,#0x10
7102f3fef8  orr w1,wzr,#0x70
7102f3fefc  bl 0x710392e290
7102f3ff00  mov x21,x0
7102f3ff04  cbnz x0,0x7102f3ff0c
7102f3ff08  mov x21,xzr
7102f3ff0c  ldr x8,[x19, #0x30]
7102f3ff10  str wzr,[x21, #0x20]
7102f3ff14  adrp x9,0x7105153000
7102f3ff18  add x9,x9,#0xad0
7102f3ff1c  stp xzr,xzr,[x21, #0x10]
7102f3ff20  ldr q0,[x22]
7102f3ff24  adrp x1,0x71042e5000
7102f3ff28  add x1,x1,#0x5d0
7102f3ff2c  mov x0,x21
7102f3ff30  str x20,[x21, #0x40]
7102f3ff34  strb wzr,[x21, #0x48]
7102f3ff38  stp x9,xzr,[x21]
7102f3ff3c  str x8,[x21, #0x50]
7102f3ff40  stp xzr,xzr,[x21, #0x58]
7102f3ff44  str q0,[x21, #0x30]
7102f3ff48  bl 0x7102f3f560
7102f3ff4c  str x21,[x19, #0x20]
7102f3ff50  ldp x29,x30,[sp, #0x30]
7102f3ff54  ldp x20,x19,[sp, #0x20]
7102f3ff58  ldp x22,x21,[sp, #0x10]
7102f3ff5c  add sp,sp,#0x40
7102f3ff60  ret
