// addr:      710022dbf0
// offset:    0x22dbf0
// name:      FUN_710022dbf0
// mangled:   
// size:      400

710022dbf0  stp x22,x21,[sp, #-0x30]!
710022dbf4  stp x20,x19,[sp, #0x10]
710022dbf8  stp x29,x30,[sp, #0x20]
710022dbfc  add x29,sp,#0x20
710022dc00  adrp x8,0x71052a4000
710022dc04  ldr x8,[x8, #0xda8]
710022dc08  adrp x22,0x71052a4000
710022dc0c  ldrb w8,[x8]
710022dc10  ldr x22,[x22, #0xdb0]
710022dc14  mov x21,x1
710022dc18  mov x19,x0
710022dc1c  add x20,x22,#0x28
710022dc20  cbz w8,0x710022dc5c
710022dc24  adrp x8,0x71052a4000
710022dc28  ldr x8,[x8, #0xdb8]
710022dc2c  ldr x0,[x8]
710022dc30  bl 0x7101717960
710022dc34  ldr w8,[x0]
710022dc38  cbz w8,0x710022dc5c
710022dc3c  ldr x10,[x22, #0xa0]
710022dc40  ldp x9,x10,[x10]
710022dc44  sub x10,x10,x9
710022dc48  asr x10,x10,#0x3
710022dc4c  cmp x10,x8
710022dc50  b.ls 0x710022dc74
710022dc54  ldr x8,[x9, x8, LSL #0x3]
710022dc58  add x20,x8,#0x20
710022dc5c  ldr x8,[x20]
710022dc60  cbz x8,0x710022dc8c
710022dc64  ldr x8,[x8, #0x10]
710022dc68  cbz x8,0x710022dc8c
710022dc6c  ldr x20,[x8, #0x10]
710022dc70  b 0x710022dc90
710022dc74  adrp x0,0x71042c4000
710022dc78  add x0,x0,#0x35f
710022dc7c  mov w1,#0x47
710022dc80  orr w2,wzr,#0xe0000003
710022dc84  mov w3,wzr
710022dc88  bl 0x71001b1300
710022dc8c  mov x20,xzr
710022dc90  ldr x8,[x20, #0x78]!
710022dc94  ldr x8,[x8, #0x10]
710022dc98  mov x0,x20
710022dc9c  blr x8
710022dca0  mov x8,x19
710022dca4  ldr x0,[x8, #0x90]!
710022dca8  cbz x0,0x710022dce0
710022dcac  mov x22,x8
710022dcb0  mov x9,x0
710022dcb4  ldr x10,[x9, #0x20]
710022dcb8  cmp x10,x21
710022dcbc  cset w10,cc
710022dcc0  csel x22,x22,x9,cc
710022dcc4  ldr x9,[x9, w10, UXTW #0x3]
710022dcc8  cbnz x9,0x710022dcb4
710022dccc  cmp x22,x8
710022dcd0  b.eq 0x710022dce0
710022dcd4  ldr x8,[x22, #0x20]
710022dcd8  cmp x8,x21
710022dcdc  b.ls 0x710022dd08
710022dce0  mov w19,wzr
710022dce4  ldr x8,[x20]
710022dce8  ldr x8,[x8, #0x20]
710022dcec  mov x0,x20
710022dcf0  blr x8
710022dcf4  mov w0,w19
710022dcf8  ldp x29,x30,[sp, #0x20]
710022dcfc  ldp x20,x19,[sp, #0x10]
710022dd00  ldp x22,x21,[sp], #0x30
710022dd04  ret
710022dd08  ldr x9,[x22, #0x8]
710022dd0c  cbz x9,0x710022dd20
710022dd10  mov x8,x9
710022dd14  ldr x9,[x9]
710022dd18  cbnz x9,0x710022dd10
710022dd1c  b 0x710022dd4c
710022dd20  mov x9,x22
710022dd24  ldr x8,[x9, #0x10]!
710022dd28  ldr x10,[x8]
710022dd2c  cmp x10,x22
710022dd30  b.eq 0x710022dd4c
710022dd34  ldr x10,[x9]
710022dd38  mov x9,x10
710022dd3c  ldr x8,[x9, #0x10]!
710022dd40  ldr x11,[x8]
710022dd44  cmp x11,x10
710022dd48  b.ne 0x710022dd34
710022dd4c  ldr x9,[x19, #0x88]
710022dd50  cmp x9,x22
710022dd54  b.ne 0x710022dd5c
710022dd58  str x8,[x19, #0x88]
710022dd5c  ldr x8,[x19, #0x98]
710022dd60  sub x8,x8,#0x1
710022dd64  mov x1,x22
710022dd68  str x8,[x19, #0x98]
710022dd6c  bl 0x7101412010
710022dd70  mov x0,x22
710022dd74  bl 0x71001b1870
710022dd78  mov w19,#0x1
710022dd7c  b 0x710022dce4
