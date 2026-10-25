// addr:      71000a4d90
// offset:    0xa4d90
// name:      FUN_71000a4d90
// mangled:   
// size:      248

71000a4d90  sub sp,sp,#0x70
71000a4d94  stp x26,x25,[sp, #0x20]
71000a4d98  stp x24,x23,[sp, #0x30]
71000a4d9c  stp x22,x21,[sp, #0x40]
71000a4da0  stp x20,x19,[sp, #0x50]
71000a4da4  stp x29,x30,[sp, #0x60]
71000a4da8  add x29,sp,#0x60
71000a4dac  ldr x8,[x0, #0x98]
71000a4db0  mov x19,x0
71000a4db4  mov w20,w3
71000a4db8  ldr x0,[x8, w3, SXTW #0x3]
71000a4dbc  mov x24,x5
71000a4dc0  mov w23,w4
71000a4dc4  mov x21,x2
71000a4dc8  mov x22,x1
71000a4dcc  sxtw x26,w20
71000a4dd0  cbz x0,0x71000a4e10
71000a4dd4  mov x1,x22
71000a4dd8  bl 0x7100099da0
71000a4ddc  ldr x8,[x19, #0x98]
71000a4de0  lsl x25,x26,#0x3
71000a4de4  mov x0,x22
71000a4de8  ldr x1,[x8, x25, LSL #0x0]
71000a4dec  ldr x8,[x22]
71000a4df0  ldr x8,[x8, #0x18]
71000a4df4  blr x8
71000a4df8  ldr x8,[x19, #0x98]
71000a4dfc  adrp x0,0x7104432000
71000a4e00  add x0,x0,#0x195
71000a4e04  mov w1,w20
71000a4e08  str xzr,[x8, x25, LSL #0x0]
71000a4e0c  bl 0x7100093660
71000a4e10  ldr x8,[x22]
71000a4e14  ldr x8,[x8, #0x10]
71000a4e18  mov w1,#0x540
71000a4e1c  mov w2,#0x80
71000a4e20  mov x0,x22
71000a4e24  blr x8
71000a4e28  cbz x0,0x71000a4e6c
71000a4e2c  ldr x1,[x19, #0x38]
71000a4e30  and w8,w23,#0x1
71000a4e34  mov x2,x22
71000a4e38  mov x3,x21
71000a4e3c  mov x4,xzr
71000a4e40  mov x5,xzr
71000a4e44  mov x6,xzr
71000a4e48  mov w7,w20
71000a4e4c  str x24,[sp, #0x10]
71000a4e50  mov x25,x0
71000a4e54  strb w8,[sp, #0x8]
71000a4e58  str x19,[sp]
71000a4e5c  bl 0x7100099560
71000a4e60  ldr x8,[x19, #0x98]
71000a4e64  mov w0,#0x1
71000a4e68  str x25,[x8, x26, LSL #0x3]
71000a4e6c  ldp x29,x30,[sp, #0x60]
71000a4e70  ldp x20,x19,[sp, #0x50]
71000a4e74  ldp x22,x21,[sp, #0x40]
71000a4e78  ldp x24,x23,[sp, #0x30]
71000a4e7c  ldp x26,x25,[sp, #0x20]
71000a4e80  add sp,sp,#0x70
71000a4e84  ret
