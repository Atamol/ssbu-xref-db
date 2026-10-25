// addr:      71002aab30
// offset:    0x2aab30
// name:      FUN_71002aab30
// mangled:   
// size:      344

71002aab30  stp x22,x21,[sp, #-0x30]!
71002aab34  stp x20,x19,[sp, #0x10]
71002aab38  stp x29,x30,[sp, #0x20]
71002aab3c  add x29,sp,#0x20
71002aab40  adrp x22,0x71052a4000
71002aab44  ldr x22,[x22, #0xda8]
71002aab48  adrp x21,0x71052a4000
71002aab4c  ldrb w8,[x22]
71002aab50  ldr x21,[x21, #0xdb0]
71002aab54  mov x19,x0
71002aab58  add x20,x21,#0x28
71002aab5c  cbz w8,0x71002aab98
71002aab60  adrp x8,0x71052a4000
71002aab64  ldr x8,[x8, #0xdb8]
71002aab68  ldr x0,[x8]
71002aab6c  bl 0x7101717960
71002aab70  ldr w8,[x0]
71002aab74  cbz w8,0x71002aab98
71002aab78  ldr x10,[x21, #0xa0]
71002aab7c  ldp x9,x10,[x10]
71002aab80  sub x10,x10,x9
71002aab84  asr x10,x10,#0x3
71002aab88  cmp x10,x8
71002aab8c  b.ls 0x71002aabb0
71002aab90  ldr x8,[x9, x8, LSL #0x3]
71002aab94  add x20,x8,#0x20
71002aab98  ldr x8,[x20]
71002aab9c  cbz x8,0x71002aabc8
71002aaba0  ldr x8,[x8, #0x10]
71002aaba4  cbz x8,0x71002aabc8
71002aaba8  ldr x20,[x8, #0x10]
71002aabac  b 0x71002aabcc
71002aabb0  adrp x0,0x71042c4000
71002aabb4  add x0,x0,#0x35f
71002aabb8  mov w1,#0x47
71002aabbc  orr w2,wzr,#0xe0000003
71002aabc0  mov w3,wzr
71002aabc4  bl 0x71001b1300
71002aabc8  mov x20,xzr
71002aabcc  ldr x8,[x20, #0x78]!
71002aabd0  ldr x8,[x8, #0x10]
71002aabd4  mov x0,x20
71002aabd8  blr x8
71002aabdc  ldrb w8,[x22]
71002aabe0  add x22,x21,#0x28
71002aabe4  cbz w8,0x71002aac20
71002aabe8  adrp x8,0x71052a4000
71002aabec  ldr x8,[x8, #0xdb8]
71002aabf0  ldr x0,[x8]
71002aabf4  bl 0x7101717960
71002aabf8  ldr w8,[x0]
71002aabfc  cbz w8,0x71002aac20
71002aac00  ldr x10,[x21, #0xa0]
71002aac04  ldp x9,x10,[x10]
71002aac08  sub x10,x10,x9
71002aac0c  asr x10,x10,#0x3
71002aac10  cmp x10,x8
71002aac14  b.ls 0x71002aac70
71002aac18  ldr x8,[x9, x8, LSL #0x3]
71002aac1c  add x22,x8,#0x20
71002aac20  ldr x8,[x22]
71002aac24  ldr x8,[x8, #0x10]
71002aac28  ldr x0,[x8, #0x18]
71002aac2c  ldr w1,[x19, #0x4c]
71002aac30  bl 0x71001cd7d0
71002aac34  cbz x0,0x71002aac48
71002aac38  bl 0x71001d0a10
71002aac3c  str wzr,[x19, #0x4c]
71002aac40  mov w19,#0x1
71002aac44  b 0x71002aac4c
71002aac48  mov w19,wzr
71002aac4c  ldr x8,[x20]
71002aac50  ldr x8,[x8, #0x20]
71002aac54  mov x0,x20
71002aac58  blr x8
71002aac5c  mov w0,w19
71002aac60  ldp x29,x30,[sp, #0x20]
71002aac64  ldp x20,x19,[sp, #0x10]
71002aac68  ldp x22,x21,[sp], #0x30
71002aac6c  ret
71002aac70  adrp x0,0x71042c4000
71002aac74  add x0,x0,#0x35f
71002aac78  mov w1,#0x47
71002aac7c  orr w2,wzr,#0xe0000003
71002aac80  mov w3,wzr
71002aac84  bl 0x71001b1300
