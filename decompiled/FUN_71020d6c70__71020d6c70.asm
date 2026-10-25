// addr:      71020d6c70
// offset:    0x20d6c70
// name:      FUN_71020d6c70
// mangled:   
// size:      408

71020d6c70  sub sp,sp,#0x40
71020d6c74  str x21,[sp, #0x10]
71020d6c78  stp x20,x19,[sp, #0x20]
71020d6c7c  stp x29,x30,[sp, #0x30]
71020d6c80  add x29,sp,#0x30
71020d6c84  mov w21,w2
71020d6c88  mov x19,x1
71020d6c8c  mov x20,x0
71020d6c90  bl 0x71020d4a00
71020d6c94  ldr x9,[x19, #0x20]
71020d6c98  cmp w21,#0x1
71020d6c9c  b.lt 0x71020d6cc0
71020d6ca0  ldr x8,[x9]
71020d6ca4  ldr x10,[x19, #0x10]
71020d6ca8  add x8,x8,w21, SXTW  #0x4
71020d6cac  adrp x9,0x7104862000
71020d6cb0  add x9,x9,#0x960
71020d6cb4  cmp x8,x10
71020d6cb8  csel x1,x8,x9,cc
71020d6cbc  b 0x71020d6d28
71020d6cc0  mov w8,#0xb9d8
71020d6cc4  movk w8,#0xfff0, LSL #16
71020d6cc8  add w10,w8,#0x1
71020d6ccc  cmp w21,w10
71020d6cd0  b.ge 0x71020d6ce8
71020d6cd4  cmp w21,w8
71020d6cd8  b.ne 0x71020d6cf4
71020d6cdc  ldr x8,[x19, #0x18]
71020d6ce0  add x1,x8,#0x40
71020d6ce4  b 0x71020d6d28
71020d6ce8  ldr x8,[x19, #0x10]
71020d6cec  add x1,x8,w21, SXTW  #0x4
71020d6cf0  b 0x71020d6d28
71020d6cf4  ldr x9,[x9]
71020d6cf8  ldr w10,[x9, #0x8]
71020d6cfc  adrp x1,0x7104862000
71020d6d00  add x1,x1,#0x960
71020d6d04  cmp w10,#0x16
71020d6d08  b.eq 0x71020d6d28
71020d6d0c  ldr x9,[x9]
71020d6d10  sub w8,w8,w21
71020d6d14  add x10,x9,w8, SXTW  #0x4
71020d6d18  ldrb w9,[x9, #0xa]
71020d6d1c  add x10,x10,#0x10
71020d6d20  cmp w8,w9
71020d6d24  csel x1,x1,x10,gt
71020d6d28  adrp x2,0x710434b000
71020d6d2c  add x2,x2,#0x477
71020d6d30  mov x0,x19
71020d6d34  bl 0x71038f4d40
71020d6d38  ldr x8,[x19, #0x10]
71020d6d3c  sub x21,x8,#0x10
71020d6d40  ldur w8,[x8, #-0x8]
71020d6d44  cmp w8,#0x13
71020d6d48  b.ne 0x71020d6d54
71020d6d4c  ldr x8,[x21]
71020d6d50  b 0x71020d6db4
71020d6d54  ldr w8,[x21, #0x8]
71020d6d58  cmp w8,#0x13
71020d6d5c  b.eq 0x71020d6d4c
71020d6d60  cmp w8,#0x3
71020d6d64  b.eq 0x71020d6dd8
71020d6d68  and w8,w8,#0xf
71020d6d6c  cmp w8,#0x4
71020d6d70  b.ne 0x71020d6db0
71020d6d74  ldr x8,[x21]
71020d6d78  add x0,x8,#0x18
71020d6d7c  mov x1,sp
71020d6d80  bl 0x7103907f00
71020d6d84  ldr x8,[x21]
71020d6d88  ldrb w9,[x8, #0x8]
71020d6d8c  cmp w9,#0x4
71020d6d90  b.ne 0x71020d6d9c
71020d6d94  ldrb w8,[x8, #0xb]
71020d6d98  b 0x71020d6da0
71020d6d9c  ldr x8,[x8, #0x10]
71020d6da0  add x8,x8,#0x1
71020d6da4  mov x21,sp
71020d6da8  cmp x0,x8
71020d6dac  b.eq 0x71020d6d54
71020d6db0  mov x8,xzr
71020d6db4  str w8,[x20, #0x18]
71020d6db8  ldr x8,[x19, #0x10]
71020d6dbc  sub x8,x8,#0x10
71020d6dc0  str x8,[x19, #0x10]
71020d6dc4  ldp x29,x30,[sp, #0x30]
71020d6dc8  ldp x20,x19,[sp, #0x20]
71020d6dcc  ldr x21,[sp, #0x10]
71020d6dd0  add sp,sp,#0x40
71020d6dd4  ret
71020d6dd8  ldr s0,[x21]
71020d6ddc  adrp x8,0x7104472000
71020d6de0  ldr s1,[x8, #0x8f4]
71020d6de4  frintm s0,s0
71020d6de8  fcmp s0,s1
71020d6dec  b.lt 0x71020d6db0
71020d6df0  adrp x8,0x7104472000
71020d6df4  ldr s1,[x8, #0xe68]
71020d6df8  fcmp s0,s1
71020d6dfc  b.pl 0x71020d6db0
71020d6e00  fcvtzs x8,s0
71020d6e04  b 0x71020d6db4
