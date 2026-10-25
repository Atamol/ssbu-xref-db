// addr:      71002aba40
// offset:    0x2aba40
// name:      FUN_71002aba40
// mangled:   
// size:      540

71002aba40  sub sp,sp,#0x70
71002aba44  str x25,[sp, #0x20]
71002aba48  stp x24,x23,[sp, #0x30]
71002aba4c  stp x22,x21,[sp, #0x40]
71002aba50  stp x20,x19,[sp, #0x50]
71002aba54  stp x29,x30,[sp, #0x60]
71002aba58  add x29,sp,#0x60
71002aba5c  mov x0,x1
71002aba60  mov w20,w6
71002aba64  mov x21,x5
71002aba68  mov x22,x4
71002aba6c  mov x23,x3
71002aba70  mov x24,x2
71002aba74  mov x25,x1
71002aba78  bl 0x71001ccd00
71002aba7c  tbz w0,#0x0,0x71002abb28
71002aba80  mov w0,#0x240
71002aba84  bl 0x71001af850
71002aba88  mov x19,x0
71002aba8c  cbz x0,0x71002aba98
71002aba90  mov x0,x19
71002aba94  bl 0x71002a1c40
71002aba98  ldr w1,[x25, #0x18]
71002aba9c  mov x0,x19
71002abaa0  mov x2,x24
71002abaa4  mov x3,x23
71002abaa8  mov x4,x22
71002abaac  mov x5,x21
71002abab0  mov w6,w20
71002abab4  bl 0x71002a2120
71002abab8  tbz w0,#0x0,0x71002abb60
71002ababc  adrp x8,0x71052a4000
71002abac0  ldr x8,[x8, #0xda8]
71002abac4  adrp x21,0x71052a4000
71002abac8  ldrb w8,[x8]
71002abacc  ldr x21,[x21, #0xdb0]
71002abad0  add x20,x21,#0x28
71002abad4  cbz w8,0x71002abb10
71002abad8  adrp x8,0x71052a4000
71002abadc  ldr x8,[x8, #0xdb8]
71002abae0  ldr x0,[x8]
71002abae4  bl 0x7101717960
71002abae8  ldr w8,[x0]
71002abaec  cbz w8,0x71002abb10
71002abaf0  ldr x10,[x21, #0xa0]
71002abaf4  ldp x9,x10,[x10]
71002abaf8  sub x10,x10,x9
71002abafc  asr x10,x10,#0x3
71002abb00  cmp x10,x8
71002abb04  b.ls 0x71002abbf4
71002abb08  ldr x8,[x9, x8, LSL #0x3]
71002abb0c  add x20,x8,#0x20
71002abb10  ldr x8,[x20]
71002abb14  cbz x8,0x71002abc0c
71002abb18  ldr x8,[x8, #0x10]
71002abb1c  cbz x8,0x71002abc0c
71002abb20  ldr x0,[x8, #0x10]
71002abb24  b 0x71002abc10
71002abb28  mov w8,#0xd
71002abb2c  movk w8,#0x8001, LSL #16
71002abb30  add x0,sp,#0x8
71002abb34  add x1,sp,#0x2c
71002abb38  str w8,[sp, #0x2c]
71002abb3c  bl 0x71001b4200
71002abb40  ldr w8,[sp, #0x8]
71002abb44  adrp x9,0x71052a5000
71002abb48  ldr x9,[x9, #0x110]
71002abb4c  cmp w8,#0x0
71002abb50  csel x8,x9,xzr,ge
71002abb54  cmp x8,#0x0
71002abb58  cset w0,ne
71002abb5c  b 0x71002abc20
71002abb60  add x8,x19,#0x8
71002abb64  ldar w11,[x8]
71002abb68  ldaxr w10,[x8]
71002abb6c  sub w9,w11,#0x1
71002abb70  cmp w10,w11
71002abb74  b.ne 0x71002abb8c
71002abb78  stlxr w11,w9,[x8]
71002abb7c  cbnz w11,0x71002abb90
71002abb80  mov w11,#0x1
71002abb84  tbz w11,#0x0,0x71002abb98
71002abb88  b 0x71002abbe0
71002abb8c  clrex 
71002abb90  mov w11,wzr
71002abb94  tbnz w11,#0x0,0x71002abbe0
71002abb98  ldaxr w11,[x8]
71002abb9c  sub w9,w10,#0x1
71002abba0  cmp w11,w10
71002abba4  b.ne 0x71002abbc0
71002abba8  stlxr w10,w9,[x8]
71002abbac  cbz w10,0x71002abbd4
71002abbb0  mov w12,wzr
71002abbb4  mov w10,w11
71002abbb8  cbz w12,0x71002abb98
71002abbbc  b 0x71002abbe0
71002abbc0  clrex 
71002abbc4  mov w12,wzr
71002abbc8  mov w10,w11
71002abbcc  cbz w12,0x71002abb98
71002abbd0  b 0x71002abbe0
71002abbd4  mov w12,#0x1
71002abbd8  mov w10,w11
71002abbdc  cbz w12,0x71002abb98
71002abbe0  cbnz w9,0x71002abbec
71002abbe4  ldrb w8,[x19, #0xc]
71002abbe8  cbz w8,0x71002abc3c
71002abbec  mov w0,wzr
71002abbf0  b 0x71002abc20
71002abbf4  adrp x0,0x71042c4000
71002abbf8  add x0,x0,#0x35f
71002abbfc  mov w1,#0x47
71002abc00  orr w2,wzr,#0xe0000003
71002abc04  mov w3,wzr
71002abc08  bl 0x71001b1300
71002abc0c  mov x0,xzr
71002abc10  mov x1,x19
71002abc14  mov w2,wzr
71002abc18  bl 0x71001ccdf0
71002abc1c  mov w0,#0x1
71002abc20  ldp x29,x30,[sp, #0x60]
71002abc24  ldr x25,[sp, #0x20]
71002abc28  ldp x20,x19,[sp, #0x50]
71002abc2c  ldp x22,x21,[sp, #0x40]
71002abc30  ldp x24,x23,[sp, #0x30]
71002abc34  add sp,sp,#0x70
71002abc38  ret
71002abc3c  mov w8,#0x1
71002abc40  strb w8,[x19, #0xc]
71002abc44  ldr x8,[x19]
71002abc48  ldr x8,[x8, #0x8]
71002abc4c  mov x0,x19
71002abc50  blr x8
71002abc54  mov w0,wzr
71002abc58  b 0x71002abc20
