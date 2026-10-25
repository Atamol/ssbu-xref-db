// addr:      71000a0cb0
// offset:    0xa0cb0
// name:      FUN_71000a0cb0
// mangled:   
// size:      564

71000a0cb0  str x25,[sp, #-0x50]!
71000a0cb4  stp x24,x23,[sp, #0x10]
71000a0cb8  stp x22,x21,[sp, #0x20]
71000a0cbc  stp x20,x19,[sp, #0x30]
71000a0cc0  stp x29,x30,[sp, #0x40]
71000a0cc4  add x29,sp,#0x40
71000a0cc8  ldr w8,[x0, #0x1c]
71000a0ccc  mov x21,x1
71000a0cd0  cmp w8,#0x1
71000a0cd4  b.lt 0x71000a0d18
71000a0cd8  ldr x22,[x0, #0x30]
71000a0cdc  ldr w11,[x0, #0x28]
71000a0ce0  mov x19,x0
71000a0ce4  mov w9,wzr
71000a0ce8  mov w10,#0xa0
71000a0cec  smaddl x24,w11,w10,x22
71000a0cf0  sxtw x23,w11
71000a0cf4  ldrb w11,[x24, #0x90]!
71000a0cf8  cbz w11,0x71000a0d50
71000a0cfc  add w11,w23,#0x1
71000a0d00  cmp w11,w8
71000a0d04  add w9,w9,#0x1
71000a0d08  csinc w11,wzr,w23,ge
71000a0d0c  cmp w9,w8
71000a0d10  str w11,[x19, #0x28]
71000a0d14  b.lt 0x71000a0cec
71000a0d18  mov w1,#0x2000
71000a0d1c  mov x0,x21
71000a0d20  bl 0x7100093650
71000a0d24  adrp x0,0x71043df000
71000a0d28  add x0,x0,#0x14a
71000a0d2c  bl 0x7100093660
71000a0d30  mov x20,xzr
71000a0d34  mov x0,x20
71000a0d38  ldp x29,x30,[sp, #0x40]
71000a0d3c  ldp x20,x19,[sp, #0x30]
71000a0d40  ldp x22,x21,[sp, #0x20]
71000a0d44  ldp x24,x23,[sp, #0x10]
71000a0d48  ldr x25,[sp], #0x50
71000a0d4c  ret
71000a0d50  ldr x9,[x21, #0x238]
71000a0d54  ldr x9,[x9, #0x338]
71000a0d58  ldr s0,[x9, #0x18]
71000a0d5c  fcvtzu w25,s0
71000a0d60  mov w8,#0xa0
71000a0d64  madd x20,x23,x8,x22
71000a0d68  orr w8,wzr,#0x70
71000a0d6c  umull x1,w25,w8
71000a0d70  ldr x8,[x21, #0x828]
71000a0d74  ldr x8,[x8, #0x10]
71000a0d78  add x0,x21,#0x828
71000a0d7c  mov w2,#0x80
71000a0d80  blr x8
71000a0d84  mov x8,x20
71000a0d88  str x0,[x8, #0x50]!
71000a0d8c  cbz x0,0x71000a0db4
71000a0d90  subs w9,w25,#0x1
71000a0d94  b.eq 0x71000a0e94
71000a0d98  mov w13,w9
71000a0d9c  and x10,x13,#0x1
71000a0da0  cmp w9,#0x1
71000a0da4  b.ne 0x71000a0dcc
71000a0da8  mov x11,xzr
71000a0dac  cbnz x10,0x71000a0e0c
71000a0db0  b 0x71000a0e20
71000a0db4  mov w1,#0x4000
71000a0db8  mov x0,x21
71000a0dbc  bl 0x7100093650
71000a0dc0  adrp x0,0x71042f6000
71000a0dc4  add x0,x0,#0xdbc
71000a0dc8  b 0x71000a0d2c
71000a0dcc  mov x12,xzr
71000a0dd0  mov x11,xzr
71000a0dd4  sub x13,x13,x10
71000a0dd8  add x14,x0,x12
71000a0ddc  add x15,x14,#0x70
71000a0de0  str x15,[x14, #0x58]
71000a0de4  ldr x14,[x8]
71000a0de8  add x14,x14,x12
71000a0dec  add x12,x12,#0xe0
71000a0df0  add x15,x14,#0xe0
71000a0df4  str x15,[x14, #0xc8]
71000a0df8  ldr x0,[x8]
71000a0dfc  add x11,x11,#0x2
71000a0e00  cmp x13,x11
71000a0e04  b.ne 0x71000a0dd8
71000a0e08  cbz x10,0x71000a0e20
71000a0e0c  orr w10,wzr,#0x70
71000a0e10  madd x10,x11,x10,x0
71000a0e14  add x11,x10,#0x70
71000a0e18  str x11,[x10, #0x58]
71000a0e1c  ldr x0,[x8]
71000a0e20  cmp w25,#0x2
71000a0e24  b.cc 0x71000a0e94
71000a0e28  mvn w10,w25
71000a0e2c  and w10,w10,#0x1
71000a0e30  cmp w25,#0x2
71000a0e34  b.ne 0x71000a0e44
71000a0e38  mov w11,#0x1
71000a0e3c  cbnz w10,0x71000a0e80
71000a0e40  b 0x71000a0e94
71000a0e44  mov x12,xzr
71000a0e48  sub x13,x25,x10
71000a0e4c  mov w11,#0x1
71000a0e50  add x14,x0,x12
71000a0e54  str x14,[x14, #0xd0]
71000a0e58  ldr x14,[x8]
71000a0e5c  add x14,x14,x12
71000a0e60  add x12,x12,#0xe0
71000a0e64  add x15,x14,#0x70
71000a0e68  str x15,[x14, #0x140]
71000a0e6c  ldr x0,[x8]
71000a0e70  add x11,x11,#0x2
71000a0e74  cmp x13,x11
71000a0e78  b.ne 0x71000a0e50
71000a0e7c  cbz w10,0x71000a0e94
71000a0e80  orr w10,wzr,#0x70
71000a0e84  madd x10,x11,x10,x0
71000a0e88  sub x11,x10,#0x70
71000a0e8c  str x11,[x10, #0x60]
71000a0e90  ldr x0,[x8]
71000a0e94  orr w10,wzr,#0x70
71000a0e98  umaddl x11,w9,w10,x0
71000a0e9c  str x0,[x11, #0x58]
71000a0ea0  ldr x11,[x8]
71000a0ea4  umaddl x9,w9,w10,x11
71000a0ea8  str x9,[x11, #0x60]
71000a0eac  mov w9,#0xa0
71000a0eb0  madd x9,x23,x9,x22
71000a0eb4  ldr x8,[x8]
71000a0eb8  stp x8,x8,[x9, #0x58]
71000a0ebc  mov w8,#0x1
71000a0ec0  strb w8,[x24]
71000a0ec4  str wzr,[x9, #0x80]
71000a0ec8  str wzr,[x9, #0x70]
71000a0ecc  str wzr,[x9, #0x78]
71000a0ed0  str xzr,[x9, #0x68]
71000a0ed4  ldr w8,[x19, #0x2c]
71000a0ed8  add w8,w8,#0x1
71000a0edc  str w8,[x19, #0x2c]
71000a0ee0  b 0x71000a0d34
