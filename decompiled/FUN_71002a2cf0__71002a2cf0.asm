// addr:      71002a2cf0
// offset:    0x2a2cf0
// name:      FUN_71002a2cf0
// mangled:   
// size:      392

71002a2cf0  sub sp,sp,#0x50
71002a2cf4  str x21,[sp, #0x20]
71002a2cf8  stp x20,x19,[sp, #0x30]
71002a2cfc  stp x29,x30,[sp, #0x40]
71002a2d00  add x29,sp,#0x40
71002a2d04  adrp x8,0x71052a4000
71002a2d08  ldr x8,[x8, #0xda8]
71002a2d0c  adrp x21,0x71052a4000
71002a2d10  ldrb w8,[x8]
71002a2d14  ldr x21,[x21, #0xdb0]
71002a2d18  mov x19,x0
71002a2d1c  add x20,x21,#0x28
71002a2d20  cbz w8,0x71002a2d5c
71002a2d24  adrp x8,0x71052a4000
71002a2d28  ldr x8,[x8, #0xdb8]
71002a2d2c  ldr x0,[x8]
71002a2d30  bl 0x7101717960
71002a2d34  ldr w8,[x0]
71002a2d38  cbz w8,0x71002a2d5c
71002a2d3c  ldr x10,[x21, #0xa0]
71002a2d40  ldp x9,x10,[x10]
71002a2d44  sub x10,x10,x9
71002a2d48  asr x10,x10,#0x3
71002a2d4c  cmp x10,x8
71002a2d50  b.ls 0x71002a2e60
71002a2d54  ldr x8,[x9, x8, LSL #0x3]
71002a2d58  add x20,x8,#0x20
71002a2d5c  ldr x8,[x20]
71002a2d60  ldr x8,[x8, #0x10]
71002a2d64  ldr x0,[x8, #0x18]
71002a2d68  ldr w1,[x19, #0xa0]
71002a2d6c  bl 0x71001cd7d0
71002a2d70  cbz x0,0x71002a2d88
71002a2d74  ldr w8,[x19, #0xbc]
71002a2d78  cmp w8,#0x2
71002a2d7c  b.ne 0x71002a2dc4
71002a2d80  orr w8,wzr,#0x10001
71002a2d84  b 0x71002a2d94
71002a2d88  mov w8,#0x4
71002a2d8c  movk w8,#0x8072, LSL #16
71002a2d90  sub w8,w8,#0x710, LSL #12
71002a2d94  stur w8,[x29, #-0x14]
71002a2d98  mov x0,sp
71002a2d9c  sub x1,x29,#0x14
71002a2da0  bl 0x71001b4200
71002a2da4  mov x1,sp
71002a2da8  mov x0,x19
71002a2dac  bl 0x71002a2a90
71002a2db0  ldp x29,x30,[sp, #0x40]
71002a2db4  ldr x21,[sp, #0x20]
71002a2db8  ldp x20,x19,[sp, #0x30]
71002a2dbc  add sp,sp,#0x50
71002a2dc0  ret
71002a2dc4  ldp x8,x9,[x19, #0x100]
71002a2dc8  ldr x10,[x19, #0x110]
71002a2dcc  mov w20,#0x4
71002a2dd0  movk w20,#0x8072, LSL #16
71002a2dd4  mov x0,sp
71002a2dd8  sub x1,x29,#0x14
71002a2ddc  stur w20,[x29, #-0x14]
71002a2de0  str x8,[sp]
71002a2de4  stp x9,x10,[sp, #0x8]
71002a2de8  bl 0x71001b4260
71002a2dec  tbz w0,#0x0,0x71002a2e0c
71002a2df0  ldr x8,[x19, #0x148]
71002a2df4  ldr x0,[x8, #0x10]
71002a2df8  bl 0x710029f670
71002a2dfc  ldr w8,[x19, #0x138]
71002a2e00  cbz w8,0x71002a2e24
71002a2e04  stur w20,[x29, #-0x14]
71002a2e08  b 0x71002a2d98
71002a2e0c  add x8,x19,#0x100
71002a2e10  ldp x9,x10,[x8]
71002a2e14  ldr x8,[x8, #0x10]
71002a2e18  stp x10,x8,[sp, #0x8]
71002a2e1c  str x9,[sp]
71002a2e20  b 0x71002a2da4
71002a2e24  adrp x8,0x71052a6000
71002a2e28  mov w9,#0x1
71002a2e2c  mov x1,sp
71002a2e30  ldr x8,[x8, #0xc28]
71002a2e34  str w9,[x19, #0x138]
71002a2e38  adrp x9,0x71052a8000
71002a2e3c  ldr x9,[x9, #0x838]
71002a2e40  add x8,x8,#0x10
71002a2e44  mov x0,x19
71002a2e48  stp x8,x9,[sp]
71002a2e4c  adrp x8,0x7104411000
71002a2e50  add x8,x8,#0x4cc
71002a2e54  stp xzr,x8,[sp, #0x10]
71002a2e58  bl 0x71001d3d60
71002a2e5c  b 0x71002a2db0
71002a2e60  adrp x0,0x71042c4000
71002a2e64  add x0,x0,#0x35f
71002a2e68  mov w1,#0x47
71002a2e6c  orr w2,wzr,#0xe0000003
71002a2e70  mov w3,wzr
71002a2e74  bl 0x71001b1300
