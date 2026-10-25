// addr:      71001a0c30
// offset:    0x1a0c30
// name:      FUN_71001a0c30
// mangled:   
// size:      452

71001a0c30  sub sp,sp,#0xf0
71001a0c34  str x23,[sp, #0xb0]
71001a0c38  stp x22,x21,[sp, #0xc0]
71001a0c3c  stp x20,x19,[sp, #0xd0]
71001a0c40  stp x29,x30,[sp, #0xe0]
71001a0c44  add x29,sp,#0xe0
71001a0c48  cbz x1,0x71001a0d58
71001a0c4c  orr x9,xzr,#0x80000000000
71001a0c50  str x1,[x0, #0x70]
71001a0c54  str x9,[sp, #0x20]
71001a0c58  str wzr,[sp, #0x28]
71001a0c5c  ldr x9,[x1]
71001a0c60  ldr x9,[x9, #0x18]
71001a0c64  mov x8,x1
71001a0c68  mov x19,x0
71001a0c6c  add x1,sp,#0x20
71001a0c70  mov x0,x8
71001a0c74  mov w21,w3
71001a0c78  mov w20,w2
71001a0c7c  add x23,sp,#0x20
71001a0c80  blr x9
71001a0c84  ldr x22,[x19, #0x78]
71001a0c88  orr x23,x23,#0x4
71001a0c8c  mov x0,x23
71001a0c90  str wzr,[sp, #0x20]
71001a0c94  bl 0x71039c0a80
71001a0c98  add x1,sp,#0x10
71001a0c9c  mov x0,x23
71001a0ca0  str wzr,[sp, #0x10]
71001a0ca4  bl 0x71039c0a90
71001a0ca8  sub x0,x29,#0x40
71001a0cac  add x1,sp,#0x20
71001a0cb0  bl 0x71000bce50
71001a0cb4  sub x1,x29,#0x40
71001a0cb8  mov x0,x22
71001a0cbc  bl 0x71000b4180
71001a0cc0  ldr x9,[x19, #0x70]
71001a0cc4  mov x8,x9
71001a0cc8  ldr w10,[x8, #0x48]!
71001a0ccc  cmp w10,#0x3
71001a0cd0  b.ne 0x71001a0d60
71001a0cd4  tbnz w21,#0x0,0x71001a0d60
71001a0cd8  ldr x21,[x9, #0xa0]
71001a0cdc  add x0,sp,#0x20
71001a0ce0  bl 0x710015fd60
71001a0ce4  adrp x8,0x71052a4000
71001a0ce8  ldr x8,[x8, #0xdc8]
71001a0cec  ldr x0,[x8]
71001a0cf0  bl 0x7100161fb0
71001a0cf4  ldr x8,[x0]
71001a0cf8  ldr x1,[x19, #0x70]
71001a0cfc  add x2,sp,#0x20
71001a0d00  ldr x9,[x8, #0x28]
71001a0d04  add x8,sp,#0x10
71001a0d08  blr x9
71001a0d0c  ldr w8,[sp, #0x10]
71001a0d10  cbnz w8,0x71001a0d44
71001a0d14  ldp x2,x1,[x19, #0x70]
71001a0d18  mov x8,sp
71001a0d1c  add x3,sp,#0x20
71001a0d20  mov w4,#0x1
71001a0d24  mov x0,x21
71001a0d28  mov w5,w20
71001a0d2c  bl 0x7100187200
71001a0d30  ldr w8,[sp]
71001a0d34  cbnz w8,0x71001a0d44
71001a0d38  mov x0,x21
71001a0d3c  mov w1,wzr
71001a0d40  bl 0x71000b4820
71001a0d44  add x0,sp,#0x20
71001a0d48  bl 0x710015ff20
71001a0d4c  ldr x8,[x19, #0x70]
71001a0d50  add x8,x8,#0x48
71001a0d54  b 0x71001a0d70
71001a0d58  mov w22,wzr
71001a0d5c  b 0x71001a0dd8
71001a0d60  mov w22,wzr
71001a0d64  cmp w10,#0x3
71001a0d68  b.eq 0x71001a0dd8
71001a0d6c  tbz w21,#0x0,0x71001a0dd8
71001a0d70  mov w9,#0x4
71001a0d74  str w20,[x19, #0x60]
71001a0d78  str w9,[x8]
71001a0d7c  adrp x8,0x71052a4000
71001a0d80  ldr x8,[x8, #0xc70]
71001a0d84  ldr x21,[x8]
71001a0d88  bl 0x71000bb680
71001a0d8c  ldr x8,[x0]
71001a0d90  ldr x10,[x21, #0x30]
71001a0d94  sxtw x9,w20
71001a0d98  madd x8,x8,x9,x10
71001a0d9c  str x8,[x19, #0x58]
71001a0da0  ldr x8,[x19]
71001a0da4  mov w22,#0x1
71001a0da8  stur xzr,[x19, #0x64]
71001a0dac  strb w22,[x19, #0x80]
71001a0db0  ldr x8,[x8, #0x10]
71001a0db4  mov w1,#0x1
71001a0db8  mov x0,x19
71001a0dbc  blr x8
71001a0dc0  adrp x8,0x71052a6000
71001a0dc4  ldr x8,[x8, #0x720]
71001a0dc8  stp x8,xzr,[x19, #0x30]
71001a0dcc  adrp x8,0x710435a000
71001a0dd0  add x8,x8,#0x978
71001a0dd4  str x8,[x19, #0x40]
71001a0dd8  mov w0,w22
71001a0ddc  ldp x29,x30,[sp, #0xe0]
71001a0de0  ldp x20,x19,[sp, #0xd0]
71001a0de4  ldr x23,[sp, #0xb0]
71001a0de8  ldp x22,x21,[sp, #0xc0]
71001a0dec  add sp,sp,#0xf0
71001a0df0  ret
