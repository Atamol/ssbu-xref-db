// addr:      71002aa710
// offset:    0x2aa710
// name:      FUN_71002aa710
// mangled:   
// size:      344

71002aa710  stp x22,x21,[sp, #-0x30]!
71002aa714  stp x20,x19,[sp, #0x10]
71002aa718  stp x29,x30,[sp, #0x20]
71002aa71c  add x29,sp,#0x20
71002aa720  adrp x22,0x71052a4000
71002aa724  ldr x22,[x22, #0xda8]
71002aa728  adrp x21,0x71052a4000
71002aa72c  ldrb w8,[x22]
71002aa730  ldr x21,[x21, #0xdb0]
71002aa734  mov x19,x0
71002aa738  add x20,x21,#0x28
71002aa73c  cbz w8,0x71002aa778
71002aa740  adrp x8,0x71052a4000
71002aa744  ldr x8,[x8, #0xdb8]
71002aa748  ldr x0,[x8]
71002aa74c  bl 0x7101717960
71002aa750  ldr w8,[x0]
71002aa754  cbz w8,0x71002aa778
71002aa758  ldr x10,[x21, #0xa0]
71002aa75c  ldp x9,x10,[x10]
71002aa760  sub x10,x10,x9
71002aa764  asr x10,x10,#0x3
71002aa768  cmp x10,x8
71002aa76c  b.ls 0x71002aa790
71002aa770  ldr x8,[x9, x8, LSL #0x3]
71002aa774  add x20,x8,#0x20
71002aa778  ldr x8,[x20]
71002aa77c  cbz x8,0x71002aa7a8
71002aa780  ldr x8,[x8, #0x10]
71002aa784  cbz x8,0x71002aa7a8
71002aa788  ldr x20,[x8, #0x10]
71002aa78c  b 0x71002aa7ac
71002aa790  adrp x0,0x71042c4000
71002aa794  add x0,x0,#0x35f
71002aa798  mov w1,#0x47
71002aa79c  orr w2,wzr,#0xe0000003
71002aa7a0  mov w3,wzr
71002aa7a4  bl 0x71001b1300
71002aa7a8  mov x20,xzr
71002aa7ac  ldr x8,[x20, #0x78]!
71002aa7b0  ldr x8,[x8, #0x10]
71002aa7b4  mov x0,x20
71002aa7b8  blr x8
71002aa7bc  ldrb w8,[x22]
71002aa7c0  add x22,x21,#0x28
71002aa7c4  cbz w8,0x71002aa800
71002aa7c8  adrp x8,0x71052a4000
71002aa7cc  ldr x8,[x8, #0xdb8]
71002aa7d0  ldr x0,[x8]
71002aa7d4  bl 0x7101717960
71002aa7d8  ldr w8,[x0]
71002aa7dc  cbz w8,0x71002aa800
71002aa7e0  ldr x10,[x21, #0xa0]
71002aa7e4  ldp x9,x10,[x10]
71002aa7e8  sub x10,x10,x9
71002aa7ec  asr x10,x10,#0x3
71002aa7f0  cmp x10,x8
71002aa7f4  b.ls 0x71002aa850
71002aa7f8  ldr x8,[x9, x8, LSL #0x3]
71002aa7fc  add x22,x8,#0x20
71002aa800  ldr x8,[x22]
71002aa804  ldr x8,[x8, #0x10]
71002aa808  ldr x0,[x8, #0x18]
71002aa80c  ldr w1,[x19, #0x40]
71002aa810  bl 0x71001cd7d0
71002aa814  cbz x0,0x71002aa828
71002aa818  bl 0x71001d0a10
71002aa81c  str wzr,[x19, #0x40]
71002aa820  mov w19,#0x1
71002aa824  b 0x71002aa82c
71002aa828  mov w19,wzr
71002aa82c  ldr x8,[x20]
71002aa830  ldr x8,[x8, #0x20]
71002aa834  mov x0,x20
71002aa838  blr x8
71002aa83c  mov w0,w19
71002aa840  ldp x29,x30,[sp, #0x20]
71002aa844  ldp x20,x19,[sp, #0x10]
71002aa848  ldp x22,x21,[sp], #0x30
71002aa84c  ret
71002aa850  adrp x0,0x71042c4000
71002aa854  add x0,x0,#0x35f
71002aa858  mov w1,#0x47
71002aa85c  orr w2,wzr,#0xe0000003
71002aa860  mov w3,wzr
71002aa864  bl 0x71001b1300
