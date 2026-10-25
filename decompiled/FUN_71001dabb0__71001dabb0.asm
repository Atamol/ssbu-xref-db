// addr:      71001dabb0
// offset:    0x1dabb0
// name:      FUN_71001dabb0
// mangled:   
// size:      272

71001dabb0  stp x20,x19,[sp, #-0x20]!
71001dabb4  stp x29,x30,[sp, #0x10]
71001dabb8  add x29,sp,#0x10
71001dabbc  adrp x8,0x71052a4000
71001dabc0  ldr x8,[x8, #0xda8]
71001dabc4  adrp x20,0x71052a4000
71001dabc8  ldrb w8,[x8]
71001dabcc  ldr x20,[x20, #0xdb0]
71001dabd0  add x19,x20,#0x28
71001dabd4  cbz w8,0x71001dac10
71001dabd8  adrp x8,0x71052a4000
71001dabdc  ldr x8,[x8, #0xdb8]
71001dabe0  ldr x0,[x8]
71001dabe4  bl 0x7101717960
71001dabe8  ldr w8,[x0]
71001dabec  cbz w8,0x71001dac10
71001dabf0  ldr x10,[x20, #0xa0]
71001dabf4  ldp x9,x10,[x10]
71001dabf8  sub x10,x10,x9
71001dabfc  asr x10,x10,#0x3
71001dac00  cmp x10,x8
71001dac04  b.ls 0x71001dac68
71001dac08  ldr x8,[x9, x8, LSL #0x3]
71001dac0c  add x19,x8,#0x20
71001dac10  ldr x8,[x19]
71001dac14  cbz x8,0x71001dac58
71001dac18  ldr x8,[x8, #0x10]
71001dac1c  cbz x8,0x71001dac90
71001dac20  ldr x8,[x8, #0x28]
71001dac24  cbz x8,0x71001daca0
71001dac28  add x19,x8,#0x8
71001dac2c  mov x0,x19
71001dac30  bl 0x71001dacc0
71001dac34  ldr x8,[x0, #0x10]
71001dac38  cbz x8,0x71001dacb0
71001dac3c  mov x0,x19
71001dac40  bl 0x71001dacc0
71001dac44  ldr x8,[x0, #0x8]
71001dac48  ldr w0,[x8, #0x20]
71001dac4c  ldp x29,x30,[sp, #0x10]
71001dac50  ldp x20,x19,[sp], #0x20
71001dac54  ret
71001dac58  mov w0,wzr
71001dac5c  ldp x29,x30,[sp, #0x10]
71001dac60  ldp x20,x19,[sp], #0x20
71001dac64  ret
71001dac68  adrp x0,0x71042c4000
71001dac6c  add x0,x0,#0x35f
71001dac70  mov w1,#0x47
71001dac74  orr w2,wzr,#0xe0000003
71001dac78  mov w3,wzr
71001dac7c  bl 0x71001b1300
71001dac80  mov w0,wzr
71001dac84  ldp x29,x30,[sp, #0x10]
71001dac88  ldp x20,x19,[sp], #0x20
71001dac8c  ret
71001dac90  mov w0,wzr
71001dac94  ldp x29,x30,[sp, #0x10]
71001dac98  ldp x20,x19,[sp], #0x20
71001dac9c  ret
71001daca0  mov w0,wzr
71001daca4  ldp x29,x30,[sp, #0x10]
71001daca8  ldp x20,x19,[sp], #0x20
71001dacac  ret
71001dacb0  mov w0,wzr
71001dacb4  ldp x29,x30,[sp, #0x10]
71001dacb8  ldp x20,x19,[sp], #0x20
71001dacbc  ret
