// addr:      71032eb9f0
// offset:    0x32eb9f0
// name:      FUN_71032eb9f0
// mangled:   
// size:      308

71032eb9f0  sub sp,sp,#0x30
71032eb9f4  stp x20,x19,[sp, #0x10]
71032eb9f8  stp x29,x30,[sp, #0x20]
71032eb9fc  add x29,sp,#0x20
71032eba00  cbz x0,0x71032ebb14
71032eba04  ldr x19,[x0, #0x80]
71032eba08  ldrb w8,[x19, #0x1f2]
71032eba0c  cbz w8,0x71032ebb14
71032eba10  ldr x8,[x19, #0x148]
71032eba14  ldr x9,[x8]
71032eba18  cbz x9,0x71032eba24
71032eba1c  ldr x8,[x8, #0x8]
71032eba20  cbnz x8,0x71032ebb14
71032eba24  ldr w8,[x19, #0xe8]
71032eba28  orr w8,w8,#0x1
71032eba2c  cmp w8,#0x3
71032eba30  b.ne 0x71032ebb14
71032eba34  ldr w8,[x19, #0x1fc]
71032eba38  tbz w1,#0x0,0x71032ebaa8
71032eba3c  cmp w8,#0x2
71032eba40  b.eq 0x71032ebb14
71032eba44  ldr x8,[x19, #0x130]
71032eba48  ldr x20,[x8]
71032eba4c  mov x8,sp
71032eba50  add x0,x20,#0x8
71032eba54  adrp x1,0x71043ad000
71032eba58  add x1,x1,#0xfe3
71032eba5c  bl 0x7103776910
71032eba60  ldr x0,[sp, #0x8]
71032eba64  ldr x8,[x0]
71032eba68  cbz x8,0x71032eba78
71032eba6c  ldrb w9,[x8, #0x58]
71032eba70  orr w9,w9,#0x1
71032eba74  strb w9,[x8, #0x58]
71032eba78  adrp x8,0x710523d000
71032eba7c  add x8,x8,#0x9a8
71032eba80  stp x8,xzr,[sp]
71032eba84  cbz x0,0x71032eba8c
71032eba88  bl 0x710392eb40
71032eba8c  ldr x0,[x20, #0x10]
71032eba90  fmov s0,0x3f800000
71032eba94  adrp x1,0x7104291000
71032eba98  add x1,x1,#0x7af
71032eba9c  bl 0x7103778300
71032ebaa0  mov w8,#0x2
71032ebaa4  b 0x71032ebb10
71032ebaa8  cmp w8,#0x1
71032ebaac  b.eq 0x71032ebb14
71032ebab0  ldr x8,[x19, #0x130]
71032ebab4  ldr x20,[x8]
71032ebab8  mov x8,sp
71032ebabc  add x0,x20,#0x8
71032ebac0  adrp x1,0x71043ad000
71032ebac4  add x1,x1,#0xfe3
71032ebac8  bl 0x7103776910
71032ebacc  ldr x0,[sp, #0x8]
71032ebad0  ldr x8,[x0]
71032ebad4  cbz x8,0x71032ebae4
71032ebad8  ldrb w9,[x8, #0x58]
71032ebadc  orr w9,w9,#0x1
71032ebae0  strb w9,[x8, #0x58]
71032ebae4  adrp x8,0x710523d000
71032ebae8  add x8,x8,#0x9a8
71032ebaec  stp x8,xzr,[sp]
71032ebaf0  cbz x0,0x71032ebaf8
71032ebaf4  bl 0x710392eb40
71032ebaf8  ldr x0,[x20, #0x10]
71032ebafc  fmov s0,0x3f800000
71032ebb00  adrp x1,0x71042a3000
71032ebb04  add x1,x1,#0x672
71032ebb08  bl 0x7103778300
71032ebb0c  mov w8,#0x1
71032ebb10  str w8,[x19, #0x1fc]
71032ebb14  ldp x29,x30,[sp, #0x20]
71032ebb18  ldp x20,x19,[sp, #0x10]
71032ebb1c  add sp,sp,#0x30
71032ebb20  ret
