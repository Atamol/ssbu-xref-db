// addr:      7100183d90
// offset:    0x183d90
// name:      FUN_7100183d90
// mangled:   
// size:      196

7100183d90  sub sp,sp,#0x40
7100183d94  stp x20,x19,[sp, #0x20]
7100183d98  stp x29,x30,[sp, #0x30]
7100183d9c  add x29,sp,#0x30
7100183da0  ldr x8,[x0, #0x88]
7100183da4  mov x19,x0
7100183da8  ldr x1,[x19, #0x60]
7100183dac  ldr x0,[x8, #0x400]
7100183db0  add x8,sp,#0x10
7100183db4  bl 0x7100172c60
7100183db8  ldr w8,[sp, #0x10]
7100183dbc  cbz w8,0x7100183e04
7100183dc0  ldp x20,x8,[x19, #0x58]
7100183dc4  add x1,x8,#0x4
7100183dc8  mov x0,sp
7100183dcc  bl 0x71000bce50
7100183dd0  mov x1,sp
7100183dd4  mov x0,x20
7100183dd8  bl 0x71000b41f0
7100183ddc  ldrb w8,[x19, #0x80]
7100183de0  str xzr,[x19, #0x58]
7100183de4  cbz w8,0x7100183e40
7100183de8  ldr x8,[x19, #0x88]
7100183dec  str wzr,[x8, #0x418]
7100183df0  mov w0,#0x1
7100183df4  ldp x29,x30,[sp, #0x30]
7100183df8  ldp x20,x19,[sp, #0x20]
7100183dfc  add sp,sp,#0x40
7100183e00  ret
7100183e04  ldr x8,[x19, #0x88]
7100183e08  ldr x0,[x8, #0x400]
7100183e0c  mov w1,#0x1
7100183e10  bl 0x71000b4820
7100183e14  adrp x8,0x71052a6000
7100183e18  ldr x8,[x8, #0x470]
7100183e1c  adrp x9,0x710435a000
7100183e20  add x9,x9,#0x924
7100183e24  mov w0,#0x5
7100183e28  str x9,[x19, #0x40]
7100183e2c  stp x8,xzr,[x19, #0x30]
7100183e30  ldp x29,x30,[sp, #0x30]
7100183e34  ldp x20,x19,[sp, #0x20]
7100183e38  add sp,sp,#0x40
7100183e3c  ret
7100183e40  mov w0,#0x1
7100183e44  ldp x29,x30,[sp, #0x30]
7100183e48  ldp x20,x19,[sp, #0x20]
7100183e4c  add sp,sp,#0x40
7100183e50  ret
