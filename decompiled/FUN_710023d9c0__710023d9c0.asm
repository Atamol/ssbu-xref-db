// addr:      710023d9c0
// offset:    0x23d9c0
// name:      FUN_710023d9c0
// mangled:   
// size:      508

710023d9c0  sub sp,sp,#0x90
710023d9c4  str x23,[sp, #0x50]
710023d9c8  stp x22,x21,[sp, #0x60]
710023d9cc  stp x20,x19,[sp, #0x70]
710023d9d0  stp x29,x30,[sp, #0x80]
710023d9d4  add x29,sp,#0x80
710023d9d8  add x20,x0,#0x2a0
710023d9dc  mov x19,x0
710023d9e0  mov x0,x20
710023d9e4  bl 0x71001b4300
710023d9e8  adrp x22,0x71052a5000
710023d9ec  ldr x22,[x22, #0x110]
710023d9f0  ldr w8,[x19, #0x2a0]
710023d9f4  cmp w8,#0x0
710023d9f8  csel x8,x22,xzr,ge
710023d9fc  cbz x8,0x710023dac4
710023da00  adrp x8,0x71052a4000
710023da04  ldr x8,[x8, #0xda8]
710023da08  adrp x23,0x71052a4000
710023da0c  ldrb w8,[x8]
710023da10  ldr x23,[x23, #0xdb0]
710023da14  add x21,x23,#0x28
710023da18  cbz w8,0x710023da54
710023da1c  adrp x8,0x71052a4000
710023da20  ldr x8,[x8, #0xdb8]
710023da24  ldr x0,[x8]
710023da28  bl 0x7101717960
710023da2c  ldr w8,[x0]
710023da30  cbz w8,0x710023da54
710023da34  ldr x10,[x23, #0xa0]
710023da38  ldp x9,x10,[x10]
710023da3c  sub x10,x10,x9
710023da40  asr x10,x10,#0x3
710023da44  cmp x10,x8
710023da48  b.ls 0x710023dba4
710023da4c  ldr x8,[x9, x8, LSL #0x3]
710023da50  add x21,x8,#0x20
710023da54  ldr x8,[x21]
710023da58  ldr x8,[x8, #0x10]
710023da5c  ldr x0,[x8, #0x18]
710023da60  ldr w1,[x19, #0xa0]
710023da64  bl 0x71001cd7d0
710023da68  cbz x0,0x710023db84
710023da6c  mov x21,x0
710023da70  ldr x0,[x19, #0x478]
710023da74  cbz x0,0x710023da80
710023da78  mov x1,x20
710023da7c  bl 0x71001b4300
710023da80  ldr w8,[x20]
710023da84  cmp w8,#0x0
710023da88  csel x8,x22,xzr,ge
710023da8c  cbz x8,0x710023db50
710023da90  ldr x8,[x19, #0x2f0]
710023da94  ldr x9,[x19, #0x130]
710023da98  mov w1,#0x2
710023da9c  ldr x8,[x8, #0xc0]
710023daa0  str x8,[x9]
710023daa4  ldr x10,[x20, #0x10]
710023daa8  ldp x8,x9,[x20]
710023daac  str x8,[sp, #0x20]
710023dab0  mov x8,x10
710023dab4  stp x9,x8,[sp, #0x40]
710023dab8  ldr x8,[sp, #0x20]
710023dabc  stp x9,x10,[sp, #0x28]
710023dac0  b 0x710023db70
710023dac4  ldr x8,[x19, #0x2f0]
710023dac8  ldr x8,[x8, #0xc0]
710023dacc  cbz x8,0x710023da00
710023dad0  add x21,x19,#0x138
710023dad4  mov x0,x21
710023dad8  bl 0x71001d1590
710023dadc  ldr x0,[x19, #0x2f0]
710023dae0  ldr x2,[x0, #0xc0]
710023dae4  mov x1,x21
710023dae8  bl 0x710023a020
710023daec  tbz w0,#0x0,0x710023da00
710023daf0  mov w1,#0x2
710023daf4  mov x0,x19
710023daf8  bl 0x71001d6410
710023dafc  mov w0,#0x20
710023db00  bl 0x71001af850
710023db04  mov x2,x0
710023db08  cbz x0,0x710023db30
710023db0c  adrp x8,0x71052a6000
710023db10  ldr x8,[x8, #0xc28]
710023db14  adrp x9,0x71052a7000
710023db18  ldr x9,[x9, #0x880]
710023db1c  adrp x10,0x7104411000
710023db20  add x10,x10,#0x4cc
710023db24  stp xzr,x10,[x2, #0x10]
710023db28  add x8,x8,#0x10
710023db2c  stp x8,x9,[x2]
710023db30  mov x0,x19
710023db34  mov x1,x21
710023db38  ldr x23,[sp, #0x50]
710023db3c  ldp x29,x30,[sp, #0x80]
710023db40  ldp x20,x19,[sp, #0x70]
710023db44  ldp x22,x21,[sp, #0x60]
710023db48  add sp,sp,#0x90
710023db4c  b 0x71001d4200
710023db50  ldp x8,x9,[x20]
710023db54  ldr x10,[x20, #0x10]
710023db58  str x8,[sp, #0x8]
710023db5c  mov x8,x10
710023db60  orr w1,wzr,#0x3
710023db64  stp x9,x10,[sp, #0x10]
710023db68  stp x9,x8,[sp, #0x40]
710023db6c  ldr x8,[sp, #0x8]
710023db70  str x8,[sp, #0x38]
710023db74  add x2,sp,#0x38
710023db78  mov w3,#0x1
710023db7c  mov x0,x21
710023db80  bl 0x71001d0f00
710023db84  mov x0,x19
710023db88  bl 0x71001cd870
710023db8c  ldp x29,x30,[sp, #0x80]
710023db90  ldr x23,[sp, #0x50]
710023db94  ldp x20,x19,[sp, #0x70]
710023db98  ldp x22,x21,[sp, #0x60]
710023db9c  add sp,sp,#0x90
710023dba0  ret
710023dba4  adrp x0,0x71042c4000
710023dba8  add x0,x0,#0x35f
710023dbac  mov w1,#0x47
710023dbb0  orr w2,wzr,#0xe0000003
710023dbb4  mov w3,wzr
710023dbb8  bl 0x71001b1300
