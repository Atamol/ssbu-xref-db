// addr:      71000a3d30
// offset:    0xa3d30
// name:      FUN_71000a3d30
// mangled:   
// size:      332

71000a3d30  str x21,[sp, #-0x30]!
71000a3d34  stp x20,x19,[sp, #0x10]
71000a3d38  stp x29,x30,[sp, #0x20]
71000a3d3c  add x29,sp,#0x20
71000a3d40  str wzr,[x0, #0x58]
71000a3d44  adrp x8,0x71052a4000
71000a3d48  adrp x9,0x71052a4000
71000a3d4c  ldr x8,[x8, #0xb58]
71000a3d50  ldr x9,[x9, #0xa98]
71000a3d54  add x8,x8,#0x10
71000a3d58  add x9,x9,#0x10
71000a3d5c  mov x19,x1
71000a3d60  mov x20,x0
71000a3d64  stp xzr,xzr,[x0, #0x48]
71000a3d68  mov w2,#0x898
71000a3d6c  mov w1,wzr
71000a3d70  str x8,[x0]
71000a3d74  str x9,[x0, #0x40]
71000a3d78  add x0,x0,#0x8e0
71000a3d7c  mov w8,#0x1318
71000a3d80  add x21,x20,x8
71000a3d84  bl 0x71039c02a0
71000a3d88  mov x0,x21
71000a3d8c  bl 0x7100031850
71000a3d90  mov w8,#0x1368
71000a3d94  strb wzr,[x20, x8, LSL ]
71000a3d98  mov w8,#0x1370
71000a3d9c  add x0,x20,x8
71000a3da0  bl 0x71000338f0
71000a3da4  str xzr,[x20, #0x14c0]
71000a3da8  str xzr,[x20, #0x14b8]
71000a3dac  adrp x8,0x71052a4000
71000a3db0  str xzr,[x20, #0x14b0]
71000a3db4  str xzr,[x20, #0x14a8]
71000a3db8  ldr x8,[x8, #0x9e0]
71000a3dbc  add x8,x8,#0x10
71000a3dc0  str x8,[x20, #0x14c8]
71000a3dc4  mov w8,#0x14d0
71000a3dc8  add x0,x20,x8
71000a3dcc  bl 0x7100031850
71000a3dd0  mov w8,#0x1518
71000a3dd4  add x0,x20,x8
71000a3dd8  bl 0x71000338f0
71000a3ddc  mov w8,#0x1648
71000a3de0  add x8,x20,x8
71000a3de4  str x8,[x20, #0x1648]
71000a3de8  str x8,[x20, #0x1650]
71000a3dec  mov w8,#0x1658
71000a3df0  add x8,x20,x8
71000a3df4  str x8,[x20, #0x1658]
71000a3df8  str x8,[x20, #0x1660]
71000a3dfc  mov w8,#0x16c0
71000a3e00  add x0,x20,x8
71000a3e04  mov w1,wzr
71000a3e08  mov w2,wzr
71000a3e0c  str xzr,[x20, #0x1670]
71000a3e10  str xzr,[x20, #0x1638]
71000a3e14  str wzr,[x20, #0x1678]
71000a3e18  str xzr,[x20, #0x16a8]
71000a3e1c  str xzr,[x20, #0x16a0]
71000a3e20  str xzr,[x20, #0x1698]
71000a3e24  bl 0x71039c0700
71000a3e28  mov w8,#0x16e0
71000a3e2c  add x0,x20,x8
71000a3e30  mov w1,wzr
71000a3e34  mov w2,wzr
71000a3e38  bl 0x71039c0700
71000a3e3c  adrp x0,0x7104f16000
71000a3e40  add x0,x0,#0xd3b
71000a3e44  bl 0x71039c0530
71000a3e48  ldr x8,[x20]
71000a3e4c  stp xzr,xzr,[x20, #0xa0]
71000a3e50  str xzr,[x20, #0x98]
71000a3e54  mov x0,x20
71000a3e58  mov x3,x19
71000a3e5c  str xzr,[x20, #0x12b0]
71000a3e60  str xzr,[x20, #0x12a8]
71000a3e64  ldr x4,[x8, #0x10]
71000a3e68  ldp x1,x2,[x19, #0x10]
71000a3e6c  ldp x29,x30,[sp, #0x20]
71000a3e70  ldp x20,x19,[sp, #0x10]
71000a3e74  ldr x21,[sp], #0x30
71000a3e78  br x4
