// addr:      71001df960
// offset:    0x1df960
// name:      FUN_71001df960
// mangled:   
// size:      548

71001df960  sub sp,sp,#0x80
71001df964  stp x28,x27,[sp, #0x20]
71001df968  stp x26,x25,[sp, #0x30]
71001df96c  stp x24,x23,[sp, #0x40]
71001df970  stp x22,x21,[sp, #0x50]
71001df974  stp x20,x19,[sp, #0x60]
71001df978  stp x29,x30,[sp, #0x70]
71001df97c  add x29,sp,#0x70
71001df980  adrp x8,0x71052a4000
71001df984  ldr x8,[x8, #0xda8]
71001df988  adrp x20,0x71052a4000
71001df98c  ldrb w8,[x8]
71001df990  ldr x20,[x20, #0xdb0]
71001df994  mov w25,w7
71001df998  mov w24,w6
71001df99c  mov x27,x5
71001df9a0  mov x21,x4
71001df9a4  mov x22,x3
71001df9a8  mov x23,x2
71001df9ac  mov x28,x1
71001df9b0  mov x26,x0
71001df9b4  add x19,x20,#0x28
71001df9b8  cbz w8,0x71001df9f4
71001df9bc  adrp x8,0x71052a4000
71001df9c0  ldr x8,[x8, #0xdb8]
71001df9c4  ldr x0,[x8]
71001df9c8  bl 0x7101717960
71001df9cc  ldr w8,[x0]
71001df9d0  cbz w8,0x71001df9f4
71001df9d4  ldr x10,[x20, #0xa0]
71001df9d8  ldp x9,x10,[x10]
71001df9dc  sub x10,x10,x9
71001df9e0  asr x10,x10,#0x3
71001df9e4  cmp x10,x8
71001df9e8  b.ls 0x71001dfa0c
71001df9ec  ldr x8,[x9, x8, LSL #0x3]
71001df9f0  add x19,x8,#0x20
71001df9f4  ldr x8,[x19]
71001df9f8  cbz x8,0x71001dfa24
71001df9fc  ldr x8,[x8, #0x10]
71001dfa00  cbz x8,0x71001dfa24
71001dfa04  ldr x19,[x8, #0x10]
71001dfa08  b 0x71001dfa28
71001dfa0c  adrp x0,0x71042c4000
71001dfa10  add x0,x0,#0x35f
71001dfa14  mov w1,#0x47
71001dfa18  orr w2,wzr,#0xe0000003
71001dfa1c  mov w3,wzr
71001dfa20  bl 0x71001b1300
71001dfa24  mov x19,xzr
71001dfa28  ldr x8,[x19, #0x78]!
71001dfa2c  ldr x8,[x8, #0x10]
71001dfa30  mov x0,x19
71001dfa34  blr x8
71001dfa38  mov x0,x28
71001dfa3c  bl 0x71001ccd00
71001dfa40  tbz w0,#0x0,0x71001dfb10
71001dfa44  ldr x8,[x29, #0x10]
71001dfa48  mov w0,#0x350
71001dfa4c  mov x20,x27
71001dfa50  str x8,[sp, #0x18]
71001dfa54  bl 0x71001af850
71001dfa58  mov x27,x0
71001dfa5c  cbz x0,0x71001dfa90
71001dfa60  ldr w1,[x26, #0x12c]
71001dfa64  ldr w3,[x28, #0x18]
71001dfa68  and w8,w25,#0x1
71001dfa6c  mov x0,x27
71001dfa70  mov x2,x26
71001dfa74  mov x4,x23
71001dfa78  mov x5,x22
71001dfa7c  mov x6,x21
71001dfa80  mov x7,x20
71001dfa84  str w24,[sp]
71001dfa88  strb w8,[sp, #0x8]
71001dfa8c  bl 0x71001e25a0
71001dfa90  adrp x20,0x71052a4000
71001dfa94  adrp x8,0x71052a4000
71001dfa98  ldr x20,[x20, #0xdb0]
71001dfa9c  ldr x8,[x8, #0xda8]
71001dfaa0  ldrb w8,[x8]
71001dfaa4  add x21,x20,#0x28
71001dfaa8  cbz w8,0x71001dfae4
71001dfaac  adrp x8,0x71052a4000
71001dfab0  ldr x8,[x8, #0xdb8]
71001dfab4  ldr x0,[x8]
71001dfab8  bl 0x7101717960
71001dfabc  ldr w8,[x0]
71001dfac0  cbz w8,0x71001dfae4
71001dfac4  ldr x10,[x20, #0xa0]
71001dfac8  ldp x9,x10,[x10]
71001dfacc  sub x10,x10,x9
71001dfad0  asr x10,x10,#0x3
71001dfad4  cmp x10,x8
71001dfad8  b.ls 0x71001dfb18
71001dfadc  ldr x8,[x9, x8, LSL #0x3]
71001dfae0  add x21,x8,#0x20
71001dfae4  ldr x20,[sp, #0x18]
71001dfae8  ldr x8,[x21]
71001dfaec  cbz x8,0x71001dfb34
71001dfaf0  ldr x8,[x8, #0x10]
71001dfaf4  cbz x8,0x71001dfb34
71001dfaf8  ldr x0,[x8, #0x10]
71001dfafc  mov x1,x27
71001dfb00  mov w2,wzr
71001dfb04  bl 0x71001ccdf0
71001dfb08  cbnz x20,0x71001dfb48
71001dfb0c  b 0x71001dfb4c
71001dfb10  mov w20,wzr
71001dfb14  b 0x71001dfb50
71001dfb18  adrp x0,0x71042c4000
71001dfb1c  add x0,x0,#0x35f
71001dfb20  mov w1,#0x47
71001dfb24  orr w2,wzr,#0xe0000003
71001dfb28  mov w3,wzr
71001dfb2c  bl 0x71001b1300
71001dfb30  ldr x20,[sp, #0x18]
71001dfb34  mov x0,xzr
71001dfb38  mov x1,x27
71001dfb3c  mov w2,wzr
71001dfb40  bl 0x71001ccdf0
71001dfb44  cbz x20,0x71001dfb4c
71001dfb48  str x27,[x20]
71001dfb4c  mov w20,#0x1
71001dfb50  ldr x8,[x19]
71001dfb54  ldr x8,[x8, #0x20]
71001dfb58  mov x0,x19
71001dfb5c  blr x8
71001dfb60  mov w0,w20
71001dfb64  ldp x29,x30,[sp, #0x70]
71001dfb68  ldp x20,x19,[sp, #0x60]
71001dfb6c  ldp x22,x21,[sp, #0x50]
71001dfb70  ldp x24,x23,[sp, #0x40]
71001dfb74  ldp x26,x25,[sp, #0x30]
71001dfb78  ldp x28,x27,[sp, #0x20]
71001dfb7c  add sp,sp,#0x80
71001dfb80  ret
