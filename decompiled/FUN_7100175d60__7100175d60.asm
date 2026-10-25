// addr:      7100175d60
// offset:    0x175d60
// name:      FUN_7100175d60
// mangled:   
// size:      172

7100175d60  sub sp,sp,#0x50
7100175d64  stp x22,x21,[sp, #0x20]
7100175d68  stp x20,x19,[sp, #0x30]
7100175d6c  stp x29,x30,[sp, #0x40]
7100175d70  add x29,sp,#0x40
7100175d74  mov x20,x0
7100175d78  str x1,[x0, #0x58]
7100175d7c  mov x0,x1
7100175d80  mov w19,w2
7100175d84  mov x21,x8
7100175d88  and w22,w2,#0x1
7100175d8c  bl 0x71000b40e0
7100175d90  ldr x0,[x20, #0x58]
7100175d94  bl 0x71000b4160
7100175d98  ldr x8,[x20, #0x78]
7100175d9c  tst w19,#0x1
7100175da0  mov w10,#0x2
7100175da4  strb w22,[x20, #0x68]
7100175da8  adrp x9,0x71052a6000
7100175dac  cinc w10,w10,eq
7100175db0  ldr x9,[x9, #0x230]
7100175db4  str w10,[x8, #0x418]
7100175db8  adrp x8,0x71043bd000
7100175dbc  add x8,x8,#0x91b
7100175dc0  stp xzr,x8,[x20, #0x38]
7100175dc4  add x8,sp,#0x8
7100175dc8  orr x19,x8,#0x4
7100175dcc  mov x0,x19
7100175dd0  str x9,[x20, #0x30]
7100175dd4  str wzr,[sp, #0x8]
7100175dd8  bl 0x71039c0a80
7100175ddc  add x1,sp,#0x18
7100175de0  mov x0,x19
7100175de4  str wzr,[sp, #0x18]
7100175de8  bl 0x71039c0a90
7100175dec  add x1,sp,#0x8
7100175df0  mov x0,x21
7100175df4  bl 0x71000bce50
7100175df8  ldp x29,x30,[sp, #0x40]
7100175dfc  ldp x20,x19,[sp, #0x30]
7100175e00  ldp x22,x21,[sp, #0x20]
7100175e04  add sp,sp,#0x50
7100175e08  ret
