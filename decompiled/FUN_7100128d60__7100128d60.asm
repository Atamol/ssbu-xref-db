// addr:      7100128d60
// offset:    0x128d60
// name:      FUN_7100128d60
// mangled:   
// size:      180

7100128d60  sub sp,sp,#0x50
7100128d64  str x19,[sp, #0x30]
7100128d68  stp x29,x30,[sp, #0x40]
7100128d6c  add x29,sp,#0x40
7100128d70  ldr w8,[x1, #0xc]
7100128d74  sub w8,w8,#0x3
7100128d78  cmp w8,#0x4
7100128d7c  b.hi 0x7100128e04
7100128d80  adrp x9,0x7104497000
7100128d84  add x9,x9,#0x1ac
7100128d88  mov x19,x1
7100128d8c  ldrsw x8,[x9, x8, LSL #0x2]
7100128d90  add x8,x8,x9
7100128d94  br x8
7100128d98  mov x1,x19
7100128d9c  ldp x29,x30,[sp, #0x40]
7100128da0  ldr x19,[sp, #0x30]
7100128da4  add sp,sp,#0x50
7100128da8  b 0x7100128e20
7100128dac  mov x1,x19
7100128db0  ldp x29,x30,[sp, #0x40]
7100128db4  ldr x19,[sp, #0x30]
7100128db8  add sp,sp,#0x50
7100128dbc  b 0x7100128f60
7100128dc0  mov x1,x19
7100128dc4  ldp x29,x30,[sp, #0x40]
7100128dc8  ldr x19,[sp, #0x30]
7100128dcc  add sp,sp,#0x50
7100128dd0  b 0x7100129190
7100128dd4  mov x1,x19
7100128dd8  ldp x29,x30,[sp, #0x40]
7100128ddc  ldr x19,[sp, #0x30]
7100128de0  add sp,sp,#0x50
7100128de4  b 0x71001292e0
7100128de8  add x0,sp,#0x18
7100128dec  bl 0x710012a740
7100128df0  ldr x1,[x19]
7100128df4  ldrh w2,[x19, #0x8]
7100128df8  add x8,sp,#0x8
7100128dfc  add x0,sp,#0x18
7100128e00  bl 0x710012a840
7100128e04  ldp x29,x30,[sp, #0x40]
7100128e08  ldr x19,[sp, #0x30]
7100128e0c  add sp,sp,#0x50
7100128e10  ret
