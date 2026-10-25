// addr:      71000f8d40
// offset:    0xf8d40
// name:      FUN_71000f8d40
// mangled:   
// size:      400

71000f8d40  sub sp,sp,#0x50
71000f8d44  stp x22,x21,[sp, #0x20]
71000f8d48  stp x20,x19,[sp, #0x30]
71000f8d4c  stp x29,x30,[sp, #0x40]
71000f8d50  add x29,sp,#0x40
71000f8d54  adrp x22,0x71052a5000
71000f8d58  ldr x22,[x22, #0x80]
71000f8d5c  ldr x20,[x22]
71000f8d60  ldrb w8,[x20, #0x162]
71000f8d64  cmp w8,#0x0
71000f8d68  cset w8,eq
71000f8d6c  add x8,x20,w8, UXTW  #0x3
71000f8d70  ldr x21,[x8, #0x168]
71000f8d74  mov x19,x0
71000f8d78  mov x0,x20
71000f8d7c  bl 0x7100146ba0
71000f8d80  sub w8,w0,#0x5
71000f8d84  cmp w8,#0x3
71000f8d88  b.hi 0x71000f8db0
71000f8d8c  adrp x9,0x7104496000
71000f8d90  add x9,x9,#0x278
71000f8d94  ldrsw x8,[x9, x8, LSL #0x2]
71000f8d98  add x8,x8,x9
71000f8d9c  br x8
71000f8da0  mov w8,#0x1
71000f8da4  orr w9,wzr,#0x3
71000f8da8  mov w10,#0xc406
71000f8dac  b 0x71000f8e54
71000f8db0  mov x0,x21
71000f8db4  bl 0x71000da970
71000f8db8  tbz w0,#0x0,0x71000f8e20
71000f8dbc  add x1,x19,#0x64
71000f8dc0  add x0,sp,#0x8
71000f8dc4  bl 0x71000bce50
71000f8dc8  ldr w8,[sp, #0x8]
71000f8dcc  cbz w8,0x71000f8de8
71000f8dd0  adrp x8,0x71052a5000
71000f8dd4  ldr x8,[x8, #0x2a0]
71000f8dd8  stp x8,xzr,[x19, #0x30]
71000f8ddc  adrp x8,0x71043df000
71000f8de0  add x8,x8,#0x20b
71000f8de4  str x8,[x19, #0x40]
71000f8de8  ldr x8,[x21]
71000f8dec  ldr x8,[x8, #0xf0]
71000f8df0  mov x0,x21
71000f8df4  blr x8
71000f8df8  mov x1,x0
71000f8dfc  ldr x0,[x20, #0xb8]
71000f8e00  mov w2,#0x1
71000f8e04  bl 0x7100150e30
71000f8e08  adrp x8,0x71052a5000
71000f8e0c  ldr x8,[x8, #0x2a0]
71000f8e10  adrp x9,0x71043df000
71000f8e14  add x9,x9,#0x20b
71000f8e18  str x9,[x19, #0x40]
71000f8e1c  stp x8,xzr,[x19, #0x30]
71000f8e20  mov w0,#0x5
71000f8e24  b 0x71000f8ebc
71000f8e28  mov w8,#0x1
71000f8e2c  orr w9,wzr,#0x3
71000f8e30  mov w10,#0xa471
71000f8e34  b 0x71000f8e54
71000f8e38  mov w8,#0x1
71000f8e3c  orr w9,wzr,#0x3
71000f8e40  mov w10,#0xc420
71000f8e44  b 0x71000f8e54
71000f8e48  mov w8,#0x1
71000f8e4c  orr w9,wzr,#0x3
71000f8e50  mov w10,#0xc421
71000f8e54  strb w8,[x19, #0xfa]
71000f8e58  add x8,sp,#0x8
71000f8e5c  orr x20,x8,#0x4
71000f8e60  mov x0,x20
71000f8e64  strb w9,[x19, #0x130]
71000f8e68  str w10,[sp, #0x8]
71000f8e6c  bl 0x71039c0a80
71000f8e70  add x1,sp,#0x18
71000f8e74  mov x0,x20
71000f8e78  str wzr,[sp, #0x18]
71000f8e7c  bl 0x71039c0a90
71000f8e80  add x0,x19,#0x220
71000f8e84  add x1,sp,#0x8
71000f8e88  bl 0x71000bcf30
71000f8e8c  ldr x8,[x22]
71000f8e90  ldr x0,[x8, #0x8]
71000f8e94  ldr x8,[x0]
71000f8e98  ldr x8,[x8, #0x28]
71000f8e9c  blr x8
71000f8ea0  adrp x8,0x71052a5000
71000f8ea4  ldr x8,[x8, #0x240]
71000f8ea8  mov x0,xzr
71000f8eac  stp x8,xzr,[x19, #0x30]
71000f8eb0  adrp x8,0x71043ac000
71000f8eb4  add x8,x8,#0x982
71000f8eb8  str x8,[x19, #0x40]
71000f8ebc  ldp x29,x30,[sp, #0x40]
71000f8ec0  ldp x20,x19,[sp, #0x30]
71000f8ec4  ldp x22,x21,[sp, #0x20]
71000f8ec8  add sp,sp,#0x50
71000f8ecc  ret
