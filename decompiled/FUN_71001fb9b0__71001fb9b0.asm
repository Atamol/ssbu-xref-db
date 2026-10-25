// addr:      71001fb9b0
// offset:    0x1fb9b0
// name:      FUN_71001fb9b0
// mangled:   
// size:      224

71001fb9b0  str x21,[sp, #-0x30]!
71001fb9b4  stp x20,x19,[sp, #0x10]
71001fb9b8  stp x29,x30,[sp, #0x20]
71001fb9bc  add x29,sp,#0x20
71001fb9c0  adrp x8,0x71052a4000
71001fb9c4  ldr x8,[x8, #0xda8]
71001fb9c8  adrp x21,0x71052a4000
71001fb9cc  ldrb w8,[x8]
71001fb9d0  ldr x21,[x21, #0xdb0]
71001fb9d4  mov x19,x0
71001fb9d8  add x20,x21,#0x28
71001fb9dc  cbz w8,0x71001fba18
71001fb9e0  adrp x8,0x71052a4000
71001fb9e4  ldr x8,[x8, #0xdb8]
71001fb9e8  ldr x0,[x8]
71001fb9ec  bl 0x7101717960
71001fb9f0  ldr w8,[x0]
71001fb9f4  cbz w8,0x71001fba18
71001fb9f8  ldr x10,[x21, #0xa0]
71001fb9fc  ldp x9,x10,[x10]
71001fba00  sub x10,x10,x9
71001fba04  asr x10,x10,#0x3
71001fba08  cmp x10,x8
71001fba0c  b.ls 0x71001fba30
71001fba10  ldr x8,[x9, x8, LSL #0x3]
71001fba14  add x20,x8,#0x20
71001fba18  ldr x8,[x20]
71001fba1c  cbz x8,0x71001fba48
71001fba20  ldr x8,[x8, #0x10]
71001fba24  cbz x8,0x71001fba48
71001fba28  ldr x20,[x8, #0x10]
71001fba2c  b 0x71001fba4c
71001fba30  adrp x0,0x71042c4000
71001fba34  add x0,x0,#0x35f
71001fba38  mov w1,#0x47
71001fba3c  orr w2,wzr,#0xe0000003
71001fba40  mov w3,wzr
71001fba44  bl 0x71001b1300
71001fba48  mov x20,xzr
71001fba4c  ldr x8,[x20, #0x78]!
71001fba50  ldr x8,[x8, #0x10]
71001fba54  mov x0,x20
71001fba58  blr x8
71001fba5c  ldr x8,[x19, #0x2d0]
71001fba60  ldr x9,[x19, #0x2c8]
71001fba64  sub x8,x8,x9
71001fba68  asr x19,x8,#0x4
71001fba6c  ldr x8,[x20]
71001fba70  ldr x8,[x8, #0x20]
71001fba74  mov x0,x20
71001fba78  blr x8
71001fba7c  mov x0,x19
71001fba80  ldp x29,x30,[sp, #0x20]
71001fba84  ldp x20,x19,[sp, #0x10]
71001fba88  ldr x21,[sp], #0x30
71001fba8c  ret
