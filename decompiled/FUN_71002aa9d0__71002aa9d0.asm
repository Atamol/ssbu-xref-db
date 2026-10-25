// addr:      71002aa9d0
// offset:    0x2aa9d0
// name:      FUN_71002aa9d0
// mangled:   
// size:      344

71002aa9d0  stp x22,x21,[sp, #-0x30]!
71002aa9d4  stp x20,x19,[sp, #0x10]
71002aa9d8  stp x29,x30,[sp, #0x20]
71002aa9dc  add x29,sp,#0x20
71002aa9e0  adrp x22,0x71052a4000
71002aa9e4  ldr x22,[x22, #0xda8]
71002aa9e8  adrp x21,0x71052a4000
71002aa9ec  ldrb w8,[x22]
71002aa9f0  ldr x21,[x21, #0xdb0]
71002aa9f4  mov x19,x0
71002aa9f8  add x20,x21,#0x28
71002aa9fc  cbz w8,0x71002aaa38
71002aaa00  adrp x8,0x71052a4000
71002aaa04  ldr x8,[x8, #0xdb8]
71002aaa08  ldr x0,[x8]
71002aaa0c  bl 0x7101717960
71002aaa10  ldr w8,[x0]
71002aaa14  cbz w8,0x71002aaa38
71002aaa18  ldr x10,[x21, #0xa0]
71002aaa1c  ldp x9,x10,[x10]
71002aaa20  sub x10,x10,x9
71002aaa24  asr x10,x10,#0x3
71002aaa28  cmp x10,x8
71002aaa2c  b.ls 0x71002aaa50
71002aaa30  ldr x8,[x9, x8, LSL #0x3]
71002aaa34  add x20,x8,#0x20
71002aaa38  ldr x8,[x20]
71002aaa3c  cbz x8,0x71002aaa68
71002aaa40  ldr x8,[x8, #0x10]
71002aaa44  cbz x8,0x71002aaa68
71002aaa48  ldr x20,[x8, #0x10]
71002aaa4c  b 0x71002aaa6c
71002aaa50  adrp x0,0x71042c4000
71002aaa54  add x0,x0,#0x35f
71002aaa58  mov w1,#0x47
71002aaa5c  orr w2,wzr,#0xe0000003
71002aaa60  mov w3,wzr
71002aaa64  bl 0x71001b1300
71002aaa68  mov x20,xzr
71002aaa6c  ldr x8,[x20, #0x78]!
71002aaa70  ldr x8,[x8, #0x10]
71002aaa74  mov x0,x20
71002aaa78  blr x8
71002aaa7c  ldrb w8,[x22]
71002aaa80  add x22,x21,#0x28
71002aaa84  cbz w8,0x71002aaac0
71002aaa88  adrp x8,0x71052a4000
71002aaa8c  ldr x8,[x8, #0xdb8]
71002aaa90  ldr x0,[x8]
71002aaa94  bl 0x7101717960
71002aaa98  ldr w8,[x0]
71002aaa9c  cbz w8,0x71002aaac0
71002aaaa0  ldr x10,[x21, #0xa0]
71002aaaa4  ldp x9,x10,[x10]
71002aaaa8  sub x10,x10,x9
71002aaaac  asr x10,x10,#0x3
71002aaab0  cmp x10,x8
71002aaab4  b.ls 0x71002aab10
71002aaab8  ldr x8,[x9, x8, LSL #0x3]
71002aaabc  add x22,x8,#0x20
71002aaac0  ldr x8,[x22]
71002aaac4  ldr x8,[x8, #0x10]
71002aaac8  ldr x0,[x8, #0x18]
71002aaacc  ldr w1,[x19, #0x48]
71002aaad0  bl 0x71001cd7d0
71002aaad4  cbz x0,0x71002aaae8
71002aaad8  bl 0x71001d0a10
71002aaadc  str wzr,[x19, #0x48]
71002aaae0  mov w19,#0x1
71002aaae4  b 0x71002aaaec
71002aaae8  mov w19,wzr
71002aaaec  ldr x8,[x20]
71002aaaf0  ldr x8,[x8, #0x20]
71002aaaf4  mov x0,x20
71002aaaf8  blr x8
71002aaafc  mov w0,w19
71002aab00  ldp x29,x30,[sp, #0x20]
71002aab04  ldp x20,x19,[sp, #0x10]
71002aab08  ldp x22,x21,[sp], #0x30
71002aab0c  ret
71002aab10  adrp x0,0x71042c4000
71002aab14  add x0,x0,#0x35f
71002aab18  mov w1,#0x47
71002aab1c  orr w2,wzr,#0xe0000003
71002aab20  mov w3,wzr
71002aab24  bl 0x71001b1300
