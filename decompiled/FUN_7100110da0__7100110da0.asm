// addr:      7100110da0
// offset:    0x110da0
// name:      FUN_7100110da0
// mangled:   
// size:      180

7100110da0  stp x22,x21,[sp, #-0x30]!
7100110da4  stp x20,x19,[sp, #0x10]
7100110da8  stp x29,x30,[sp, #0x20]
7100110dac  add x29,sp,#0x20
7100110db0  adrp x20,0x71052a4000
7100110db4  ldr x20,[x20, #0xdf0]
7100110db8  mov x19,x0
7100110dbc  ldr x0,[x20]
7100110dc0  bl 0x7100193560
7100110dc4  mov x21,xzr
7100110dc8  add x22,x19,#0x178
7100110dcc  strb w0,[x19, #0x90]
7100110dd0  strb wzr,[x19, #0xb2]
7100110dd4  ldr w8,[x22, x21, LSL #0x0]
7100110dd8  cbz w8,0x7100110df0
7100110ddc  ldr x0,[x20]
7100110de0  bl 0x7100193a40
7100110de4  ldr w1,[x22, x21, LSL #0x0]
7100110de8  bl 0x71001ae030
7100110dec  str wzr,[x22, x21, LSL #0x0]
7100110df0  add x21,x21,#0x4
7100110df4  cmp x21,#0x80
7100110df8  b.ne 0x7100110dd4
7100110dfc  ldr x8,[x19]
7100110e00  ldr x8,[x8, #0x70]
7100110e04  ldrb w1,[x19, #0x86]
7100110e08  mov x0,x19
7100110e0c  blr x8
7100110e10  bl 0x71000bb680
7100110e14  ldr x8,[x19, #0x58]
7100110e18  ldr x9,[x0]
7100110e1c  mov x10,#-0xbb8
7100110e20  adrp x11,0x71052a5000
7100110e24  ldr x11,[x11, #0x7a0]
7100110e28  mov w0,#0x5
7100110e2c  madd x8,x9,x10,x8
7100110e30  adrp x9,0x71043bd000
7100110e34  add x9,x9,#0x849
7100110e38  stp x11,xzr,[x19, #0x30]
7100110e3c  str x9,[x19, #0x40]
7100110e40  str x8,[x19, #0x58]
7100110e44  ldp x29,x30,[sp, #0x20]
7100110e48  ldp x20,x19,[sp, #0x10]
7100110e4c  ldp x22,x21,[sp], #0x30
7100110e50  ret
