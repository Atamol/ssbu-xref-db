// addr:      71000f5e40
// offset:    0xf5e40
// name:      FUN_71000f5e40
// mangled:   
// size:      572

71000f5e40  sub sp,sp,#0x70
71000f5e44  str x27,[sp, #0x10]
71000f5e48  stp x26,x25,[sp, #0x20]
71000f5e4c  stp x24,x23,[sp, #0x30]
71000f5e50  stp x22,x21,[sp, #0x40]
71000f5e54  stp x20,x19,[sp, #0x50]
71000f5e58  stp x29,x30,[sp, #0x60]
71000f5e5c  add x29,sp,#0x60
71000f5e60  mov x19,x8
71000f5e64  adrp x8,0x71052a5000
71000f5e68  ldr x8,[x8, #0x80]
71000f5e6c  ldr x26,[x8]
71000f5e70  ldrb w8,[x26, #0x162]
71000f5e74  add x8,x26,x8, LSL #0x2
71000f5e78  ldr w8,[x8, #0x180]
71000f5e7c  cbz w8,0x71000f6024
71000f5e80  strb wzr,[x0, #0x264]
71000f5e84  ldr x21,[x26, #0x8]
71000f5e88  mov x20,x0
71000f5e8c  cbz x21,0x71000f5ef4
71000f5e90  mov x0,x21
71000f5e94  bl 0x71000ee2c0
71000f5e98  cbz w0,0x71000f5eec
71000f5e9c  mov w22,wzr
71000f5ea0  mov x0,x21
71000f5ea4  mov w1,w22
71000f5ea8  bl 0x71000ee290
71000f5eac  cbz w0,0x71000f5ed8
71000f5eb0  mov x0,x21
71000f5eb4  mov w1,w22
71000f5eb8  bl 0x71000ee290
71000f5ebc  ldrb w8,[x26, #0x162]
71000f5ec0  cmp w8,#0x0
71000f5ec4  cset w8,eq
71000f5ec8  add x8,x26,w8, UXTW  #0x2
71000f5ecc  ldr w8,[x8, #0x180]
71000f5ed0  cmp w0,w8
71000f5ed4  b.ne 0x71000f5ef4
71000f5ed8  mov x0,x21
71000f5edc  add w22,w22,#0x1
71000f5ee0  bl 0x71000ee2c0
71000f5ee4  cmp w22,w0
71000f5ee8  b.cc 0x71000f5ea0
71000f5eec  mov w8,#0x1
71000f5ef0  strb w8,[x20, #0x264]
71000f5ef4  ldr w8,[x20, #0xb8]
71000f5ef8  add x21,x20,#0xa8
71000f5efc  cbz w8,0x71000f5f40
71000f5f00  ldr x8,[x20, #0xb0]
71000f5f04  cmp x8,x21
71000f5f08  b.eq 0x71000f5f38
71000f5f0c  add x22,x20,#0xc0
71000f5f10  ldr x23,[x8, #0x8]
71000f5f14  stp xzr,xzr,[x8]
71000f5f18  ldrsw x9,[x20, #0xd4]
71000f5f1c  add x2,x9,x8
71000f5f20  mov x0,x22
71000f5f24  mov x1,x22
71000f5f28  bl 0x71000b70c0
71000f5f2c  cmp x23,x21
71000f5f30  mov x8,x23
71000f5f34  b.ne 0x71000f5f10
71000f5f38  mov x0,x21
71000f5f3c  bl 0x71000b7080
71000f5f40  adrp x8,0x71052a4000
71000f5f44  ldr x8,[x8, #0xdf0]
71000f5f48  ldr x0,[x8]
71000f5f4c  bl 0x7100193a50
71000f5f50  ldr x27,[x0, #0x8]
71000f5f54  cmp x27,x0
71000f5f58  b.eq 0x71000f5fc4
71000f5f5c  ldr x23,[x26, #0xb8]
71000f5f60  mov x22,x0
71000f5f64  add x24,x20,#0xc0
71000f5f68  ldr x1,[x27, #0x10]
71000f5f6c  mov x0,x23
71000f5f70  bl 0x7100150680
71000f5f74  tbz w0,#0x0,0x71000f5fb8
71000f5f78  ldr w8,[x20, #0xd0]
71000f5f7c  cbz w8,0x71000f5fb8
71000f5f80  mov x0,x24
71000f5f84  bl 0x71000b71c0
71000f5f88  cbz x0,0x71000f5f98
71000f5f8c  ldrsw x8,[x20, #0xd4]
71000f5f90  sub x25,x0,x8
71000f5f94  b 0x71000f5f9c
71000f5f98  mov x25,xzr
71000f5f9c  mov x0,x21
71000f5fa0  mov x1,x21
71000f5fa4  mov x2,x25
71000f5fa8  str xzr,[x25, #0x10]
71000f5fac  bl 0x71000b7090
71000f5fb0  ldr x8,[x27, #0x10]
71000f5fb4  str x8,[x25, #0x10]
71000f5fb8  ldr x27,[x27, #0x8]
71000f5fbc  cmp x27,x22
71000f5fc0  b.ne 0x71000f5f68
71000f5fc4  adrp x8,0x71052a4000
71000f5fc8  ldr x8,[x8, #0xbd8]
71000f5fcc  mov x9,#-0x1
71000f5fd0  add x8,x8,#0x30c
71000f5fd4  str x9,[x8]
71000f5fd8  ldrb w8,[x26, #0x162]
71000f5fdc  add x8,x26,x8, LSL #0x2
71000f5fe0  mov w9,#0x2
71000f5fe4  ldr w8,[x8, #0x180]
71000f5fe8  str wzr,[x20, #0x98]
71000f5fec  str w9,[x20, #0x230]
71000f5ff0  strb wzr,[x20, #0x234]
71000f5ff4  adrp x9,0x71052a5000
71000f5ff8  ldr x9,[x9, #0x260]
71000f5ffc  adrp x10,0x7104307000
71000f6000  add x10,x10,#0x76f
71000f6004  strb wzr,[x20, #0x240]
71000f6008  strb wzr,[x20, #0x250]
71000f600c  strh wzr,[x20, #0x260]
71000f6010  stp x9,xzr,[x20, #0x30]
71000f6014  str x10,[x20, #0x40]
71000f6018  str w8,[x20, #0xf0]
71000f601c  str wzr,[sp]
71000f6020  b 0x71000f6030
71000f6024  mov w8,#0xc08
71000f6028  movk w8,#0x1, LSL #16
71000f602c  str w8,[sp]
71000f6030  mov x8,sp
71000f6034  orr x20,x8,#0x4
71000f6038  mov x0,x20
71000f603c  bl 0x71039c0a80
71000f6040  add x1,sp,#0x18
71000f6044  mov x0,x20
71000f6048  str wzr,[sp, #0x18]
71000f604c  bl 0x71039c0a90
71000f6050  mov x1,sp
71000f6054  mov x0,x19
71000f6058  bl 0x71000bce50
71000f605c  ldp x29,x30,[sp, #0x60]
71000f6060  ldr x27,[sp, #0x10]
71000f6064  ldp x20,x19,[sp, #0x50]
71000f6068  ldp x22,x21,[sp, #0x40]
71000f606c  ldp x24,x23,[sp, #0x30]
71000f6070  ldp x26,x25,[sp, #0x20]
71000f6074  add sp,sp,#0x70
71000f6078  ret
