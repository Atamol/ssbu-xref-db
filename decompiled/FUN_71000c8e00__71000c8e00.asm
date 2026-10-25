// addr:      71000c8e00
// offset:    0xc8e00
// name:      FUN_71000c8e00
// mangled:   
// size:      504

71000c8e00  str x21,[sp, #-0x30]!
71000c8e04  stp x20,x19,[sp, #0x10]
71000c8e08  stp x29,x30,[sp, #0x20]
71000c8e0c  add x29,sp,#0x20
71000c8e10  ldr x8,[x0, #0x60]
71000c8e14  mov x19,x0
71000c8e18  cbz x8,0x71000c8e3c
71000c8e1c  ldrb w8,[x8, #0x28]
71000c8e20  cbz w8,0x71000c8e3c
71000c8e24  adrp x8,0x71052a4000
71000c8e28  ldr x8,[x8, #0xe70]
71000c8e2c  str x8,[x19, #0x30]
71000c8e30  adrp x8,0x710427f000
71000c8e34  add x8,x8,#0xc24
71000c8e38  b 0x71000c8fe0
71000c8e3c  add x0,sp,#0x8
71000c8e40  str xzr,[sp, #0x8]
71000c8e44  bl 0x71000bb5d0
71000c8e48  ldr x8,[sp, #0x8]
71000c8e4c  ldr x9,[x19, #0x70]
71000c8e50  cmp x8,x9
71000c8e54  b.ls 0x71000c8e9c
71000c8e58  ldr x0,[x19, #0x68]
71000c8e5c  ldr x8,[x0]
71000c8e60  ldr x8,[x8, #0x40]
71000c8e64  blr x8
71000c8e68  adrp x8,0x71052a4000
71000c8e6c  adrp x9,0x71052a4000
71000c8e70  tst w0,#0x1
71000c8e74  ldr x8,[x8, #0xe70]
71000c8e78  ldr x9,[x9, #0xe80]
71000c8e7c  adrp x10,0x710427f000
71000c8e80  add x10,x10,#0xc24
71000c8e84  adrp x11,0x710437b000
71000c8e88  add x11,x11,#0x92e
71000c8e8c  csel x9,x9,x8,ne
71000c8e90  csel x8,x11,x10,ne
71000c8e94  str x9,[x19, #0x30]
71000c8e98  b 0x71000c8fe0
71000c8e9c  ldrb w8,[x19, #0x80]
71000c8ea0  cbz w8,0x71000c8f20
71000c8ea4  ldr x0,[x19, #0x68]
71000c8ea8  bl 0x71000c8490
71000c8eac  tbz w0,#0x0,0x71000c8f3c
71000c8eb0  ldr x0,[x19, #0x68]
71000c8eb4  bl 0x71000c85f0
71000c8eb8  tbz w0,#0x0,0x71000c8fa8
71000c8ebc  ldrb w8,[x19, #0x81]
71000c8ec0  cbnz w8,0x71000c8ef8
71000c8ec4  ldr x20,[x19, #0x68]
71000c8ec8  mov w8,#0x1
71000c8ecc  add x0,sp,#0x8
71000c8ed0  strb w8,[x19, #0x81]
71000c8ed4  str xzr,[sp, #0x8]
71000c8ed8  bl 0x71000bb5d0
71000c8edc  ldr x8,[sp, #0x8]
71000c8ee0  ldr x9,[x19, #0x88]
71000c8ee4  sub x21,x8,x9
71000c8ee8  bl 0x71000bb680
71000c8eec  ldr x8,[x0]
71000c8ef0  sdiv x8,x21,x8
71000c8ef4  str w8,[x20, #0x5fc]
71000c8ef8  ldr x0,[x19, #0x68]
71000c8efc  ldr x8,[x0]
71000c8f00  ldr x8,[x8, #0x28]
71000c8f04  blr x8
71000c8f08  mov w8,w0
71000c8f0c  ldr x0,[x19, #0x68]
71000c8f10  ldr x9,[x0]
71000c8f14  tbz w8,#0x0,0x71000c8f4c
71000c8f18  ldr x8,[x9, #0x40]
71000c8f1c  b 0x71000c8e64
71000c8f20  mov w8,#0x1
71000c8f24  add x0,x19,#0x88
71000c8f28  strb w8,[x19, #0x80]
71000c8f2c  bl 0x71000bb5d0
71000c8f30  ldr x0,[x19, #0x68]
71000c8f34  bl 0x71000c8490
71000c8f38  tbnz w0,#0x0,0x71000c8eb0
71000c8f3c  bl 0x71000bb680
71000c8f40  ldr x20,[x0]
71000c8f44  mov w21,#0x14
71000c8f48  b 0x71000c8fb4
71000c8f4c  ldr x8,[x9, #0x30]
71000c8f50  blr x8
71000c8f54  tbz w0,#0x0,0x71000c8fa8
71000c8f58  add x0,sp,#0x8
71000c8f5c  str xzr,[sp, #0x8]
71000c8f60  bl 0x71000bb5d0
71000c8f64  ldr x8,[x19, #0x70]
71000c8f68  ldr x9,[sp, #0x8]
71000c8f6c  sub x20,x8,x9
71000c8f70  bl 0x71000bb680
71000c8f74  ldr x8,[x0]
71000c8f78  sdiv x8,x20,x8
71000c8f7c  cmp x8,#0x3e9
71000c8f80  b.lt 0x71000c8fa8
71000c8f84  bl 0x71000bb680
71000c8f88  ldr x20,[x0]
71000c8f8c  add x0,sp,#0x8
71000c8f90  mov w21,#0x3e8
71000c8f94  str xzr,[sp, #0x8]
71000c8f98  bl 0x71000bb5d0
71000c8f9c  ldr x8,[sp, #0x8]
71000c8fa0  madd x8,x20,x21,x8
71000c8fa4  str x8,[x19, #0x70]
71000c8fa8  bl 0x71000bb680
71000c8fac  ldr x20,[x0]
71000c8fb0  mov w21,#0x64
71000c8fb4  add x0,sp,#0x8
71000c8fb8  str xzr,[sp, #0x8]
71000c8fbc  bl 0x71000bb5d0
71000c8fc0  adrp x8,0x71052a4000
71000c8fc4  ldr x8,[x8, #0xe88]
71000c8fc8  ldr x9,[sp, #0x8]
71000c8fcc  madd x9,x20,x21,x9
71000c8fd0  str x8,[x19, #0x30]
71000c8fd4  adrp x8,0x710438b000
71000c8fd8  add x8,x8,#0xd34
71000c8fdc  str x9,[x19, #0x78]
71000c8fe0  stp xzr,x8,[x19, #0x38]
71000c8fe4  mov x0,xzr
71000c8fe8  ldp x29,x30,[sp, #0x20]
71000c8fec  ldp x20,x19,[sp, #0x10]
71000c8ff0  ldr x21,[sp], #0x30
71000c8ff4  ret
