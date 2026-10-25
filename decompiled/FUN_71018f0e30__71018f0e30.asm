// addr:      71018f0e30
// offset:    0x18f0e30
// name:      FUN_71018f0e30
// mangled:   
// size:      480

71018f0e30  sub sp,sp,#0x50
71018f0e34  str x23,[sp, #0x10]
71018f0e38  stp x22,x21,[sp, #0x20]
71018f0e3c  stp x20,x19,[sp, #0x30]
71018f0e40  stp x29,x30,[sp, #0x40]
71018f0e44  add x29,sp,#0x40
71018f0e48  ldr x20,[x0, #0x58]
71018f0e4c  ldr w8,[x20, #0x108]
71018f0e50  mov w9,#0x1
71018f0e54  cmp w8,#0x8
71018f0e58  lsl w8,w9,w8
71018f0e5c  mov w9,#0x107
71018f0e60  and w8,w8,w9
71018f0e64  mov x19,x1
71018f0e68  ccmp w8,#0x0,#0x4,ls
71018f0e6c  b.eq 0x71018f0f68
71018f0e70  ldrsw x8,[x20, #0x104]
71018f0e74  cmp w8,#0x13
71018f0e78  b.cs 0x71018f100c
71018f0e7c  add x8,x20,x8, LSL #0x2
71018f0e80  ldr w8,[x8, #0xb8]
71018f0e84  ldr w9,[x20, #0x108]
71018f0e88  cmp w9,w8
71018f0e8c  b.eq 0x71018f0edc
71018f0e90  cmp w8,#0x9
71018f0e94  str w9,[x20, #0x110]
71018f0e98  str w8,[x20, #0x108]
71018f0e9c  b.cs 0x71018f100c
71018f0ea0  sxtw x8,w8
71018f0ea4  add x8,x20,x8, LSL #0x4
71018f0ea8  ldp x9,x8,[x8, #0x28]
71018f0eac  stp x9,x8,[x20, #0x8]
71018f0eb0  ldp x8,x10,[x20, #0x18]
71018f0eb4  and x9,x10,#0x1
71018f0eb8  orr x11,x9,x8
71018f0ebc  cbz x11,0x71018f0ed8
71018f0ec0  ldr x11,[x20]
71018f0ec4  add x0,x11,x10, ASR #0x1
71018f0ec8  cbz x9,0x71018f0ed4
71018f0ecc  ldr x9,[x0]
71018f0ed0  ldr x8,[x9, x8, LSL #0x0]
71018f0ed4  blr x8
71018f0ed8  str wzr,[x20, #0x10c]
71018f0edc  ldrb w8,[x20, #0x114]
71018f0ee0  cbz w8,0x71018f0f14
71018f0ee4  ldp x8,x10,[x20, #0x18]
71018f0ee8  and x9,x10,#0x1
71018f0eec  orr x11,x9,x8
71018f0ef0  cbz x11,0x71018f0f0c
71018f0ef4  ldr x11,[x20]
71018f0ef8  add x0,x11,x10, ASR #0x1
71018f0efc  cbz x9,0x71018f0f08
71018f0f00  ldr x9,[x0]
71018f0f04  ldr x8,[x9, x8, LSL #0x0]
71018f0f08  blr x8
71018f0f0c  str wzr,[x20, #0x10c]
71018f0f10  strb wzr,[x20, #0x114]
71018f0f14  ldr x9,[x20]
71018f0f18  cbz x9,0x71018f0f44
71018f0f1c  ldp x8,x11,[x20, #0x8]
71018f0f20  and x10,x11,#0x1
71018f0f24  orr x12,x10,x8
71018f0f28  cbz x12,0x71018f0f44
71018f0f2c  add x0,x9,x11, ASR #0x1
71018f0f30  cbz x10,0x71018f0f3c
71018f0f34  ldr x9,[x0]
71018f0f38  ldr x8,[x9, x8, LSL #0x0]
71018f0f3c  mov x1,x19
71018f0f40  blr x8
71018f0f44  ldr w8,[x20, #0x10c]
71018f0f48  add w8,w8,#0x1
71018f0f4c  str w8,[x20, #0x10c]
71018f0f50  ldp x29,x30,[sp, #0x40]
71018f0f54  ldr x23,[sp, #0x10]
71018f0f58  ldp x20,x19,[sp, #0x30]
71018f0f5c  ldp x22,x21,[sp, #0x20]
71018f0f60  add sp,sp,#0x50
71018f0f64  ret
71018f0f68  adrp x21,0x7105329000
71018f0f6c  ldr x8,[x21, #0xf98]
71018f0f70  ldr x0,[x8]
71018f0f74  bl 0x710248b690
71018f0f78  ldr x8,[x21, #0xf98]
71018f0f7c  ldr x8,[x8]
71018f0f80  ldr x8,[x8, #0x10]
71018f0f84  ldr x8,[x8, #0x378]
71018f0f88  ldrb w9,[x8, #0x41]
71018f0f8c  cbz w9,0x71018f0e70
71018f0f90  ldr x9,[x20, #0x128]
71018f0f94  ldr x23,[x8, #0x30]
71018f0f98  mov x8,sp
71018f0f9c  ldr x22,[x9, #0x80]
71018f0fa0  tst x23,#0xffffffffff
71018f0fa4  cset w21,ne
71018f0fa8  add x0,x22,#0x20
71018f0fac  adrp x1,0x7104422000
71018f0fb0  add x1,x1,#0x8b8
71018f0fb4  bl 0x7103776910
71018f0fb8  ldr x0,[sp, #0x8]
71018f0fbc  ldr x8,[x0]
71018f0fc0  cbz x8,0x71018f0fd4
71018f0fc4  ldrb w9,[x8, #0x58]
71018f0fc8  and w9,w9,#0xfe
71018f0fcc  orr w9,w9,w21
71018f0fd0  strb w9,[x8, #0x58]
71018f0fd4  adrp x8,0x710523d000
71018f0fd8  add x8,x8,#0x9a8
71018f0fdc  and x23,x23,#0xffffffffff
71018f0fe0  stp x8,xzr,[sp]
71018f0fe4  cbz x0,0x71018f0fec
71018f0fe8  bl 0x710392eb40
71018f0fec  ldr x0,[x22, #0x40]
71018f0ff0  ldr x8,[x0]
71018f0ff4  ldr x8,[x8, #0x60]
71018f0ff8  cmp x23,#0x0
71018f0ffc  cset w1,ne
71018f1000  blr x8
71018f1004  strb w21,[x22, #0x138]
71018f1008  b 0x71018f0e70
71018f100c  bl 0x71039c2650
