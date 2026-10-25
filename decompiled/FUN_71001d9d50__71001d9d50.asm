// addr:      71001d9d50
// offset:    0x1d9d50
// name:      FUN_71001d9d50
// mangled:   
// size:      416

71001d9d50  stp x22,x21,[sp, #-0x30]!
71001d9d54  stp x20,x19,[sp, #0x10]
71001d9d58  stp x29,x30,[sp, #0x20]
71001d9d5c  add x29,sp,#0x20
71001d9d60  adrp x20,0x71052a6000
71001d9d64  ldr x20,[x20, #0xbf0]
71001d9d68  ldr x8,[x20]
71001d9d6c  ldr x8,[x8, #0x10]
71001d9d70  mov w19,w0
71001d9d74  mov x0,x20
71001d9d78  blr x8
71001d9d7c  adrp x21,0x71052a4000
71001d9d80  ldr x21,[x21, #0xda8]
71001d9d84  ldrb w8,[x21]
71001d9d88  cbz w8,0x71001d9da4
71001d9d8c  adrp x8,0x71052a4000
71001d9d90  ldr x8,[x8, #0xdb8]
71001d9d94  ldr x0,[x8]
71001d9d98  bl 0x7101717960
71001d9d9c  ldr w22,[x0]
71001d9da0  b 0x71001d9da8
71001d9da4  mov w22,wzr
71001d9da8  ldr x8,[x20]
71001d9dac  ldr x8,[x8, #0x10]
71001d9db0  mov x0,x20
71001d9db4  blr x8
71001d9db8  cbz w22,0x71001d9de8
71001d9dbc  adrp x9,0x71052a4000
71001d9dc0  ldr x9,[x9, #0xdb0]
71001d9dc4  ldr x10,[x9, #0xa0]
71001d9dc8  ldp x9,x10,[x10]
71001d9dcc  sub x10,x10,x9
71001d9dd0  mov w8,w22
71001d9dd4  asr x10,x10,#0x3
71001d9dd8  cmp x10,x8
71001d9ddc  b.ls 0x71001d9e78
71001d9de0  ldr x8,[x9, x8, LSL #0x3]
71001d9de4  cbz x8,0x71001d9e78
71001d9de8  ldr x8,[x20]
71001d9dec  ldr x8,[x8, #0x20]
71001d9df0  mov x0,x20
71001d9df4  blr x8
71001d9df8  adrp x22,0x71052a4000
71001d9dfc  ldrb w8,[x21]
71001d9e00  ldr x22,[x22, #0xdb0]
71001d9e04  add x21,x22,#0x28
71001d9e08  cbz w8,0x71001d9e44
71001d9e0c  adrp x8,0x71052a4000
71001d9e10  ldr x8,[x8, #0xdb8]
71001d9e14  ldr x0,[x8]
71001d9e18  bl 0x7101717960
71001d9e1c  ldr w8,[x0]
71001d9e20  cbz w8,0x71001d9e44
71001d9e24  ldr x10,[x22, #0xa0]
71001d9e28  ldp x9,x10,[x10]
71001d9e2c  sub x10,x10,x9
71001d9e30  asr x10,x10,#0x3
71001d9e34  cmp x10,x8
71001d9e38  b.ls 0x71001d9ed4
71001d9e3c  ldr x8,[x9, x8, LSL #0x3]
71001d9e40  add x21,x8,#0x20
71001d9e44  ldr x8,[x21]
71001d9e48  cbz x8,0x71001d9e88
71001d9e4c  ldr x8,[x8, #0x10]
71001d9e50  cbz x8,0x71001d9e88
71001d9e54  ldr x21,[x8, #0x10]
71001d9e58  cbz x21,0x71001d9e8c
71001d9e5c  ldr x8,[x21, #0x18]
71001d9e60  ldp x9,x8,[x8, #0x58]
71001d9e64  cmp x8,x9
71001d9e68  b.ne 0x71001d9e8c
71001d9e6c  bl 0x71001d5a90
71001d9e70  mov w22,#0x1
71001d9e74  b 0x71001d9e90
71001d9e78  ldr x8,[x20]
71001d9e7c  ldr x8,[x8, #0x20]
71001d9e80  mov x0,x20
71001d9e84  blr x8
71001d9e88  mov x21,xzr
71001d9e8c  mov w22,wzr
71001d9e90  ldr x8,[x20]
71001d9e94  ldr x8,[x8, #0x20]
71001d9e98  mov x0,x20
71001d9e9c  blr x8
71001d9ea0  cbz w22,0x71001d9ec4
71001d9ea4  mov x0,x21
71001d9ea8  mov w1,w19
71001d9eac  mov w2,wzr
71001d9eb0  bl 0x71001d90c0
71001d9eb4  ldp x29,x30,[sp, #0x20]
71001d9eb8  ldp x20,x19,[sp, #0x10]
71001d9ebc  ldp x22,x21,[sp], #0x30
71001d9ec0  b 0x71001d5c40
71001d9ec4  ldp x29,x30,[sp, #0x20]
71001d9ec8  ldp x20,x19,[sp, #0x10]
71001d9ecc  ldp x22,x21,[sp], #0x30
71001d9ed0  ret
71001d9ed4  adrp x0,0x71042c4000
71001d9ed8  add x0,x0,#0x35f
71001d9edc  mov w1,#0x47
71001d9ee0  orr w2,wzr,#0xe0000003
71001d9ee4  mov w3,wzr
71001d9ee8  bl 0x71001b1300
71001d9eec  b 0x71001d9e88
