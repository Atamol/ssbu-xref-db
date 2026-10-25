// addr:      71002abcd0
// offset:    0x2abcd0
// name:      FUN_71002abcd0
// mangled:   
// size:      540

71002abcd0  sub sp,sp,#0x70
71002abcd4  str x25,[sp, #0x20]
71002abcd8  stp x24,x23,[sp, #0x30]
71002abcdc  stp x22,x21,[sp, #0x40]
71002abce0  stp x20,x19,[sp, #0x50]
71002abce4  stp x29,x30,[sp, #0x60]
71002abce8  add x29,sp,#0x60
71002abcec  mov x0,x1
71002abcf0  mov w20,w6
71002abcf4  mov x21,x5
71002abcf8  mov x22,x4
71002abcfc  mov x23,x3
71002abd00  mov x24,x2
71002abd04  mov x25,x1
71002abd08  bl 0x71001ccd00
71002abd0c  tbz w0,#0x0,0x71002abdb8
71002abd10  mov w0,#0x248
71002abd14  bl 0x71001af850
71002abd18  mov x19,x0
71002abd1c  cbz x0,0x71002abd28
71002abd20  mov x0,x19
71002abd24  bl 0x71002a09f0
71002abd28  ldr w1,[x25, #0x18]
71002abd2c  mov x0,x19
71002abd30  mov x2,x24
71002abd34  mov x3,x23
71002abd38  mov x4,x22
71002abd3c  mov x5,x21
71002abd40  mov w6,w20
71002abd44  bl 0x71002a0ed0
71002abd48  tbz w0,#0x0,0x71002abdf0
71002abd4c  adrp x8,0x71052a4000
71002abd50  ldr x8,[x8, #0xda8]
71002abd54  adrp x21,0x71052a4000
71002abd58  ldrb w8,[x8]
71002abd5c  ldr x21,[x21, #0xdb0]
71002abd60  add x20,x21,#0x28
71002abd64  cbz w8,0x71002abda0
71002abd68  adrp x8,0x71052a4000
71002abd6c  ldr x8,[x8, #0xdb8]
71002abd70  ldr x0,[x8]
71002abd74  bl 0x7101717960
71002abd78  ldr w8,[x0]
71002abd7c  cbz w8,0x71002abda0
71002abd80  ldr x10,[x21, #0xa0]
71002abd84  ldp x9,x10,[x10]
71002abd88  sub x10,x10,x9
71002abd8c  asr x10,x10,#0x3
71002abd90  cmp x10,x8
71002abd94  b.ls 0x71002abe84
71002abd98  ldr x8,[x9, x8, LSL #0x3]
71002abd9c  add x20,x8,#0x20
71002abda0  ldr x8,[x20]
71002abda4  cbz x8,0x71002abe9c
71002abda8  ldr x8,[x8, #0x10]
71002abdac  cbz x8,0x71002abe9c
71002abdb0  ldr x0,[x8, #0x10]
71002abdb4  b 0x71002abea0
71002abdb8  mov w8,#0xd
71002abdbc  movk w8,#0x8001, LSL #16
71002abdc0  add x0,sp,#0x8
71002abdc4  add x1,sp,#0x2c
71002abdc8  str w8,[sp, #0x2c]
71002abdcc  bl 0x71001b4200
71002abdd0  ldr w8,[sp, #0x8]
71002abdd4  adrp x9,0x71052a5000
71002abdd8  ldr x9,[x9, #0x110]
71002abddc  cmp w8,#0x0
71002abde0  csel x8,x9,xzr,ge
71002abde4  cmp x8,#0x0
71002abde8  cset w0,ne
71002abdec  b 0x71002abeb0
71002abdf0  add x8,x19,#0x8
71002abdf4  ldar w11,[x8]
71002abdf8  ldaxr w10,[x8]
71002abdfc  sub w9,w11,#0x1
71002abe00  cmp w10,w11
71002abe04  b.ne 0x71002abe1c
71002abe08  stlxr w11,w9,[x8]
71002abe0c  cbnz w11,0x71002abe20
71002abe10  mov w11,#0x1
71002abe14  tbz w11,#0x0,0x71002abe28
71002abe18  b 0x71002abe70
71002abe1c  clrex 
71002abe20  mov w11,wzr
71002abe24  tbnz w11,#0x0,0x71002abe70
71002abe28  ldaxr w11,[x8]
71002abe2c  sub w9,w10,#0x1
71002abe30  cmp w11,w10
71002abe34  b.ne 0x71002abe50
71002abe38  stlxr w10,w9,[x8]
71002abe3c  cbz w10,0x71002abe64
71002abe40  mov w12,wzr
71002abe44  mov w10,w11
71002abe48  cbz w12,0x71002abe28
71002abe4c  b 0x71002abe70
71002abe50  clrex 
71002abe54  mov w12,wzr
71002abe58  mov w10,w11
71002abe5c  cbz w12,0x71002abe28
71002abe60  b 0x71002abe70
71002abe64  mov w12,#0x1
71002abe68  mov w10,w11
71002abe6c  cbz w12,0x71002abe28
71002abe70  cbnz w9,0x71002abe7c
71002abe74  ldrb w8,[x19, #0xc]
71002abe78  cbz w8,0x71002abecc
71002abe7c  mov w0,wzr
71002abe80  b 0x71002abeb0
71002abe84  adrp x0,0x71042c4000
71002abe88  add x0,x0,#0x35f
71002abe8c  mov w1,#0x47
71002abe90  orr w2,wzr,#0xe0000003
71002abe94  mov w3,wzr
71002abe98  bl 0x71001b1300
71002abe9c  mov x0,xzr
71002abea0  mov x1,x19
71002abea4  mov w2,wzr
71002abea8  bl 0x71001ccdf0
71002abeac  mov w0,#0x1
71002abeb0  ldp x29,x30,[sp, #0x60]
71002abeb4  ldr x25,[sp, #0x20]
71002abeb8  ldp x20,x19,[sp, #0x50]
71002abebc  ldp x22,x21,[sp, #0x40]
71002abec0  ldp x24,x23,[sp, #0x30]
71002abec4  add sp,sp,#0x70
71002abec8  ret
71002abecc  mov w8,#0x1
71002abed0  strb w8,[x19, #0xc]
71002abed4  ldr x8,[x19]
71002abed8  ldr x8,[x8, #0x8]
71002abedc  mov x0,x19
71002abee0  blr x8
71002abee4  mov w0,wzr
71002abee8  b 0x71002abeb0
