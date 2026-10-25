// addr:      7102d8f760
// offset:    0x2d8f760
// name:      FUN_7102d8f760
// mangled:   
// size:      696

7102d8f760  sub sp,sp,#0x60
7102d8f764  str d8,[sp, #0x20]
7102d8f768  stp x22,x21,[sp, #0x30]
7102d8f76c  stp x20,x19,[sp, #0x40]
7102d8f770  stp x29,x30,[sp, #0x50]
7102d8f774  add x29,sp,#0x50
7102d8f778  ldr x8,[x0, #0x38]
7102d8f77c  mov w21,#0x1
7102d8f780  strb w21,[x8, #0xa5]
7102d8f784  mov x19,x0
7102d8f788  ldr x0,[x0, #0x38]
7102d8f78c  ldr x8,[x0]
7102d8f790  ldr x8,[x8, #0x38]
7102d8f794  blr x8
7102d8f798  ldr x0,[x19, #0x78]
7102d8f79c  strb wzr,[x19, #0x58]
7102d8f7a0  stur xzr,[x19, #0x5c]
7102d8f7a4  str wzr,[x19, #0x64]
7102d8f7a8  bl 0x7102d9b1b0
7102d8f7ac  ldr x8,[x19, #0x8]
7102d8f7b0  ldr x8,[x8, #0x340]
7102d8f7b4  str x8,[sp]
7102d8f7b8  mov x8,#-0x1
7102d8f7bc  mov w20,#0xffffffff
7102d8f7c0  mov x0,sp
7102d8f7c4  strb wzr,[sp, #0x14]
7102d8f7c8  str x8,[sp, #0x8]
7102d8f7cc  str w20,[sp, #0x10]
7102d8f7d0  bl 0x7102666c30
7102d8f7d4  ldp w22,w8,[sp, #0x8]
7102d8f7d8  ldr w9,[sp, #0x10]
7102d8f7dc  str w20,[sp, #0x10]
7102d8f7e0  cmn w8,#0x1
7102d8f7e4  stp w8,w9,[sp, #0x8]
7102d8f7e8  str w22,[sp, #0x18]
7102d8f7ec  strb w21,[sp, #0x14]
7102d8f7f0  b.eq 0x7102d8f7fc
7102d8f7f4  mov w10,w20
7102d8f7f8  b 0x7102d8f80c
7102d8f7fc  mov x0,sp
7102d8f800  bl 0x7102666c30
7102d8f804  ldp w8,w9,[sp, #0x8]
7102d8f808  ldr w10,[sp, #0x10]
7102d8f80c  stp w9,w10,[sp, #0x8]
7102d8f810  lsl w9,w8,#0x18
7102d8f814  str w20,[sp, #0x10]
7102d8f818  str w8,[sp, #0x18]
7102d8f81c  cmp w9,w22, LSL #0x18
7102d8f820  csel w1,w22,w8,lt
7102d8f824  strb w21,[sp, #0x14]
7102d8f828  csel w20,w8,w22,lt
7102d8f82c  ldp x8,x0,[x19, #0x38]
7102d8f830  ldr s8,[x8, #0x98]
7102d8f834  strb w21,[x19, #0x58]
7102d8f838  bl 0x7102d8ed80
7102d8f83c  ldr x8,[x19, #0x40]
7102d8f840  fcmp s8,#0.0
7102d8f844  b.lt 0x7102d8f84c
7102d8f848  str s8,[x8, #0xa8]
7102d8f84c  strb wzr,[x8, #0xa6]
7102d8f850  ldr x8,[x19, #0x40]
7102d8f854  mov w21,#0x1
7102d8f858  strb w21,[x8, #0xa5]
7102d8f85c  ldr x0,[x19, #0x40]
7102d8f860  ldr x8,[x0]
7102d8f864  ldr x8,[x8, #0x38]
7102d8f868  blr x8
7102d8f86c  ldr x0,[x19, #0x48]
7102d8f870  mov w1,w20
7102d8f874  bl 0x7102d8ed80
7102d8f878  ldr x8,[x19, #0x48]
7102d8f87c  fcmp s8,#0.0
7102d8f880  b.lt 0x7102d8f888
7102d8f884  str s8,[x8, #0xa8]
7102d8f888  strb wzr,[x8, #0xa6]
7102d8f88c  ldr x8,[x19, #0x48]
7102d8f890  strb w21,[x8, #0xa5]
7102d8f894  ldr x0,[x19, #0x48]
7102d8f898  ldr x8,[x0]
7102d8f89c  ldr x8,[x8, #0x38]
7102d8f8a0  blr x8
7102d8f8a4  mov x8,#0x1
7102d8f8a8  movk x8,#0x2, LSL #32
7102d8f8ac  str x8,[x19, #0x60]
7102d8f8b0  ldp x8,x9,[x19, #0x8]
7102d8f8b4  ldr s0,[x9, #0x334]
7102d8f8b8  fcvtzu w10,s0
7102d8f8bc  ldr s0,[x9, #0x338]
7102d8f8c0  fcvtzu w9,s0
7102d8f8c4  ldr x8,[x8, #0x340]
7102d8f8c8  sub w11,w21,w10
7102d8f8cc  add w9,w11,w9
7102d8f8d0  ldp w11,w12,[x8]
7102d8f8d4  str w12,[x8]
7102d8f8d8  ldp w12,w13,[x8, #0x8]
7102d8f8dc  eor w11,w11,w11, LSL #0xb
7102d8f8e0  eor w11,w11,w11, LSR #0x8
7102d8f8e4  eor w11,w11,w13
7102d8f8e8  eor w11,w11,w13, LSR #0x13
7102d8f8ec  stp w12,w13,[x8, #0x4]
7102d8f8f0  udiv w12,w11,w9
7102d8f8f4  msub w9,w12,w9,w11
7102d8f8f8  add w9,w9,w10
7102d8f8fc  ucvtf s0,w9
7102d8f900  str w11,[x8, #0xc]
7102d8f904  ldr x8,[x19, #0x8]
7102d8f908  str s0,[x19, #0x68]
7102d8f90c  ldr x9,[x8, #0x338]
7102d8f910  ldr x9,[x9]
7102d8f914  ldr x0,[x9, #0x8]
7102d8f918  cbz x0,0x7102d8f934
7102d8f91c  ldr x8,[x0]
7102d8f920  ldr x8,[x8, #0x58]
7102d8f924  mov w1,#0x13
7102d8f928  mov w2,#0xffffffff
7102d8f92c  blr x8
7102d8f930  ldr x8,[x19, #0x8]
7102d8f934  ldr x8,[x8, #0x300]
7102d8f938  ldr x9,[x8, #0x18]
7102d8f93c  ldp x8,x9,[x9]
7102d8f940  cmp x8,x9
7102d8f944  b.eq 0x7102d8fa00
7102d8f948  mov x10,#0xdf99
7102d8f94c  movk x10,#0xb569, LSL #16
7102d8f950  movk x10,#0x7, LSL #32
7102d8f954  mov x11,x8
7102d8f958  ldr x12,[x11], #0x8
7102d8f95c  ldr x13,[x12, #0xa0]
7102d8f960  and x13,x13,#0xffffffffff
7102d8f964  cmp x13,x10
7102d8f968  b.eq 0x7102d8f978
7102d8f96c  cmp x9,x11
7102d8f970  b.ne 0x7102d8f958
7102d8f974  b 0x7102d8f9a0
7102d8f978  ldr x10,[x12, #0x130]
7102d8f97c  cbz x10,0x7102d8f9a0
7102d8f980  ldp x0,x1,[x10]
7102d8f984  adrp x2,0x71042a1000
7102d8f988  add x2,x2,#0x67e
7102d8f98c  bl 0x71025f55b0
7102d8f990  ldr x8,[x19, #0x8]
7102d8f994  ldr x8,[x8, #0x300]
7102d8f998  ldr x9,[x8, #0x18]
7102d8f99c  ldp x8,x9,[x9]
7102d8f9a0  cmp x8,x9
7102d8f9a4  b.eq 0x7102d8fa00
7102d8f9a8  mov x10,#0x85e5
7102d8f9ac  movk x10,#0x3411, LSL #16
7102d8f9b0  movk x10,#0x7, LSL #32
7102d8f9b4  ldr x11,[x8], #0x8
7102d8f9b8  ldr x12,[x11, #0xa0]
7102d8f9bc  and x12,x12,#0xffffffffff
7102d8f9c0  cmp x12,x10
7102d8f9c4  b.eq 0x7102d8f9d4
7102d8f9c8  cmp x9,x8
7102d8f9cc  b.ne 0x7102d8f9b4
7102d8f9d0  b 0x7102d8fa00
7102d8f9d4  ldr x8,[x11, #0x130]
7102d8f9d8  cbz x8,0x7102d8fa00
7102d8f9dc  ldr d8,[sp, #0x20]
7102d8f9e0  ldp x0,x1,[x8]
7102d8f9e4  ldp x29,x30,[sp, #0x50]
7102d8f9e8  adrp x2,0x71042b2000
7102d8f9ec  add x2,x2,#0x4de
7102d8f9f0  ldp x20,x19,[sp, #0x40]
7102d8f9f4  ldp x22,x21,[sp, #0x30]
7102d8f9f8  add sp,sp,#0x60
7102d8f9fc  b 0x71025f5420
7102d8fa00  ldr d8,[sp, #0x20]
7102d8fa04  ldp x29,x30,[sp, #0x50]
7102d8fa08  ldp x20,x19,[sp, #0x40]
7102d8fa0c  ldp x22,x21,[sp, #0x30]
7102d8fa10  add sp,sp,#0x60
7102d8fa14  ret
