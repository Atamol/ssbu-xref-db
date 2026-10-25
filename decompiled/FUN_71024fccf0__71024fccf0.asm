// addr:      71024fccf0
// offset:    0x24fccf0
// name:      FUN_71024fccf0
// mangled:   
// size:      308

71024fccf0  stp x22,x21,[sp, #-0x30]!
71024fccf4  stp x20,x19,[sp, #0x10]
71024fccf8  stp x29,x30,[sp, #0x20]
71024fccfc  add x29,sp,#0x20
71024fcd00  orr w8,wzr,#0xffff
71024fcd04  mov w19,w2
71024fcd08  mov x20,x0
71024fcd0c  cmp w1,w8
71024fcd10  b.ne 0x71024fcd1c
71024fcd14  mov w21,#0xffffffff
71024fcd18  b 0x71024fcd24
71024fcd1c  add x8,x20,w1, UXTW  #0x2
71024fcd20  ldr w21,[x8, #0x510]
71024fcd24  ldr w8,[x20, #0x5c0]
71024fcd28  cmp w8,w21
71024fcd2c  b.eq 0x71024fcdcc
71024fcd30  ldr x8,[x20, #0x558]
71024fcd34  str w21,[x20, #0x5c0]
71024fcd38  ldr x22,[x8, #0x80]
71024fcd3c  cmn w21,#0x1
71024fcd40  b.eq 0x71024fcd74
71024fcd44  cmp w21,#0x2
71024fcd48  b.gt 0x71024fcd74
71024fcd4c  b.eq 0x71024fcd84
71024fcd50  cmp w21,#0x1
71024fcd54  b.eq 0x71024fcd9c
71024fcd58  cbnz w21,0x71024fcdcc
71024fcd5c  ldr x0,[x22, #0x38]!
71024fcd60  add x8,x22,#0x108
71024fcd64  str x8,[x22, #0xf0]
71024fcd68  adrp x1,0x7104281000
71024fcd6c  add x1,x1,#0x106
71024fcd70  b 0x71024fcdb0
71024fcd74  ldr x0,[x22, #0x38]
71024fcd78  adrp x1,0x71042a3000
71024fcd7c  add x1,x1,#0x648
71024fcd80  b 0x71024fcdc4
71024fcd84  ldr x0,[x22, #0x38]!
71024fcd88  add x8,x22,#0x118
71024fcd8c  adrp x1,0x7104412000
71024fcd90  add x1,x1,#0xf10
71024fcd94  str x8,[x22, #0xf0]
71024fcd98  b 0x71024fcdb0
71024fcd9c  ldr x0,[x22, #0x38]!
71024fcda0  add x8,x22,#0xf8
71024fcda4  str x8,[x22, #0xf0]
71024fcda8  adrp x1,0x7104443000
71024fcdac  add x1,x1,#0xd93
71024fcdb0  fmov s0,0x3f800000
71024fcdb4  bl 0x7103778300
71024fcdb8  ldr x0,[x22]
71024fcdbc  adrp x1,0x71043be000
71024fcdc0  add x1,x1,#0xc5b
71024fcdc4  fmov s0,0x3f800000
71024fcdc8  bl 0x7103778300
71024fcdcc  ldr w8,[x20, #0x5c0]
71024fcdd0  cmn w8,#0x1
71024fcdd4  b.eq 0x71024fce14
71024fcdd8  cmp w8,#0x2
71024fcddc  b.gt 0x71024fce14
71024fcde0  ldr x8,[x20, #0x558]
71024fcde4  ldr x8,[x8, #0x80]
71024fcde8  ldr x0,[x8, #0x128]
71024fcdec  cbz x0,0x71024fce14
71024fcdf0  mov w8,#0x48
71024fcdf4  umaddl x8,w21,w8,x20
71024fcdf8  mov w3,w19
71024fcdfc  ldp x29,x30,[sp, #0x20]
71024fce00  mov w2,#0x1
71024fce04  ldp x20,x19,[sp, #0x10]
71024fce08  add x1,x8,#0x440
71024fce0c  ldp x22,x21,[sp], #0x30
71024fce10  b 0x710377a280
71024fce14  ldp x29,x30,[sp, #0x20]
71024fce18  ldp x20,x19,[sp, #0x10]
71024fce1c  ldp x22,x21,[sp], #0x30
71024fce20  ret
