// addr:      71001daaa0
// offset:    0x1daaa0
// name:      FUN_71001daaa0
// mangled:   
// size:      272

71001daaa0  stp x20,x19,[sp, #-0x20]!
71001daaa4  stp x29,x30,[sp, #0x10]
71001daaa8  add x29,sp,#0x10
71001daaac  adrp x8,0x71052a4000
71001daab0  ldr x8,[x8, #0xda8]
71001daab4  adrp x20,0x71052a4000
71001daab8  ldrb w8,[x8]
71001daabc  ldr x20,[x20, #0xdb0]
71001daac0  add x19,x20,#0x28
71001daac4  cbz w8,0x71001dab00
71001daac8  adrp x8,0x71052a4000
71001daacc  ldr x8,[x8, #0xdb8]
71001daad0  ldr x0,[x8]
71001daad4  bl 0x7101717960
71001daad8  ldr w8,[x0]
71001daadc  cbz w8,0x71001dab00
71001daae0  ldr x10,[x20, #0xa0]
71001daae4  ldp x9,x10,[x10]
71001daae8  sub x10,x10,x9
71001daaec  asr x10,x10,#0x3
71001daaf0  cmp x10,x8
71001daaf4  b.ls 0x71001dab58
71001daaf8  ldr x8,[x9, x8, LSL #0x3]
71001daafc  add x19,x8,#0x20
71001dab00  ldr x8,[x19]
71001dab04  cbz x8,0x71001dab48
71001dab08  ldr x8,[x8, #0x10]
71001dab0c  cbz x8,0x71001dab80
71001dab10  ldr x8,[x8, #0x28]
71001dab14  cbz x8,0x71001dab90
71001dab18  add x19,x8,#0x8
71001dab1c  mov x0,x19
71001dab20  bl 0x71001dacc0
71001dab24  ldr x8,[x0, #0x10]
71001dab28  cbz x8,0x71001daba0
71001dab2c  mov x0,x19
71001dab30  bl 0x71001dacc0
71001dab34  ldr x8,[x0, #0x8]
71001dab38  ldr x0,[x8, #0x18]
71001dab3c  ldp x29,x30,[sp, #0x10]
71001dab40  ldp x20,x19,[sp], #0x20
71001dab44  ret
71001dab48  mov x0,xzr
71001dab4c  ldp x29,x30,[sp, #0x10]
71001dab50  ldp x20,x19,[sp], #0x20
71001dab54  ret
71001dab58  adrp x0,0x71042c4000
71001dab5c  add x0,x0,#0x35f
71001dab60  mov w1,#0x47
71001dab64  orr w2,wzr,#0xe0000003
71001dab68  mov w3,wzr
71001dab6c  bl 0x71001b1300
71001dab70  mov x0,xzr
71001dab74  ldp x29,x30,[sp, #0x10]
71001dab78  ldp x20,x19,[sp], #0x20
71001dab7c  ret
71001dab80  mov x0,xzr
71001dab84  ldp x29,x30,[sp, #0x10]
71001dab88  ldp x20,x19,[sp], #0x20
71001dab8c  ret
71001dab90  mov x0,xzr
71001dab94  ldp x29,x30,[sp, #0x10]
71001dab98  ldp x20,x19,[sp], #0x20
71001dab9c  ret
71001daba0  mov x0,xzr
71001daba4  ldp x29,x30,[sp, #0x10]
71001daba8  ldp x20,x19,[sp], #0x20
71001dabac  ret
