// addr:      71000d2dc0
// offset:    0xd2dc0
// name:      FUN_71000d2dc0
// mangled:   
// size:      248

71000d2dc0  sub sp,sp,#0x40
71000d2dc4  stp x20,x19,[sp, #0x20]
71000d2dc8  stp x29,x30,[sp, #0x30]
71000d2dcc  add x29,sp,#0x30
71000d2dd0  ldr x8,[x0, #0x58]
71000d2dd4  mov x19,x0
71000d2dd8  cbz x8,0x71000d2de4
71000d2ddc  ldrb w8,[x8, #0x28]
71000d2de0  cbnz w8,0x71000d2e74
71000d2de4  bl 0x71000c0860
71000d2de8  ldrb w8,[x0, #0x3]
71000d2dec  cbz w8,0x71000d2e28
71000d2df0  mov w8,#0x6436
71000d2df4  str w8,[sp, #0x8]
71000d2df8  add x8,sp,#0x8
71000d2dfc  orr x20,x8,#0x4
71000d2e00  mov x0,x20
71000d2e04  bl 0x71039c0a80
71000d2e08  add x1,sp,#0x18
71000d2e0c  mov x0,x20
71000d2e10  str wzr,[sp, #0x18]
71000d2e14  bl 0x71039c0a90
71000d2e18  add x0,x19,#0x68
71000d2e1c  add x1,sp,#0x8
71000d2e20  bl 0x71000bcf30
71000d2e24  b 0x71000d2e74
71000d2e28  adrp x8,0x71052a4000
71000d2e2c  ldr x8,[x8, #0xc70]
71000d2e30  ldr x20,[x8]
71000d2e34  bl 0x71000bb680
71000d2e38  ldr x8,[x0]
71000d2e3c  ldr x10,[x20, #0x30]
71000d2e40  mov w9,#0x7530
71000d2e44  madd x8,x8,x9,x10
71000d2e48  str x8,[x19, #0x60]
71000d2e4c  adrp x8,0x71052a4000
71000d2e50  ldr x8,[x8, #0xd88]
71000d2e54  ldr x0,[x8]
71000d2e58  add x8,sp,#0x8
71000d2e5c  bl 0x71000c4e70
71000d2e60  add x0,x19,#0x68
71000d2e64  add x1,sp,#0x8
71000d2e68  bl 0x71000bcf30
71000d2e6c  ldr w8,[x19, #0x68]
71000d2e70  cbz w8,0x71000d2ea0
71000d2e74  adrp x8,0x71052a4000
71000d2e78  ldr x8,[x8, #0xf50]
71000d2e7c  str x8,[x19, #0x30]
71000d2e80  adrp x8,0x71042b3000
71000d2e84  add x8,x8,#0x3ca
71000d2e88  stp xzr,x8,[x19, #0x38]
71000d2e8c  orr w0,wzr,#0x6
71000d2e90  ldp x29,x30,[sp, #0x30]
71000d2e94  ldp x20,x19,[sp, #0x20]
71000d2e98  add sp,sp,#0x40
71000d2e9c  ret
71000d2ea0  adrp x8,0x71052a4000
71000d2ea4  ldr x8,[x8, #0xf58]
71000d2ea8  str x8,[x19, #0x30]
71000d2eac  adrp x8,0x71043df000
71000d2eb0  add x8,x8,#0x176
71000d2eb4  b 0x71000d2e88
