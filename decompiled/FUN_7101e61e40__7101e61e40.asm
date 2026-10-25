// addr:      7101e61e40
// offset:    0x1e61e40
// name:      FUN_7101e61e40
// mangled:   
// size:      292

7101e61e40  sub sp,sp,#0x50
7101e61e44  str x21,[sp, #0x20]
7101e61e48  stp x20,x19,[sp, #0x30]
7101e61e4c  stp x29,x30,[sp, #0x40]
7101e61e50  add x29,sp,#0x40
7101e61e54  ldrb w8,[x0, #0x30]
7101e61e58  mov x19,x0
7101e61e5c  cbz w8,0x7101e61f3c
7101e61e60  add x0,x19,#0x10
7101e61e64  adrp x1,0x710439d000
7101e61e68  add x1,x1,#0xa27
7101e61e6c  add x8,sp,#0x8
7101e61e70  add x20,sp,#0x8
7101e61e74  bl 0x71037780e0
7101e61e78  mov w0,#0x10
7101e61e7c  mov w1,#0x10
7101e61e80  bl 0x710392e290
7101e61e84  cbnz x0,0x7101e61ecc
7101e61e88  adrp x8,0x7105332000
7101e61e8c  ldr x0,[x8, #0xf00]
7101e61e90  cbz x0,0x7101e61ec8
7101e61e94  mov w8,#0x10
7101e61e98  stur wzr,[x29, #-0x14]
7101e61e9c  sub x1,x29,#0x14
7101e61ea0  str x8,[sp, #0x18]
7101e61ea4  ldr x8,[x0]
7101e61ea8  ldr x8,[x8, #0x30]
7101e61eac  add x2,sp,#0x18
7101e61eb0  blr x8
7101e61eb4  tbz w0,#0x0,0x7101e61ec8
7101e61eb8  mov w0,#0x10
7101e61ebc  mov w1,#0x10
7101e61ec0  bl 0x710392e290
7101e61ec4  cbnz x0,0x7101e61ecc
7101e61ec8  mov x0,xzr
7101e61ecc  adrp x21,0x710523d000
7101e61ed0  add x21,x21,#0x9e8
7101e61ed4  cmp x20,x0
7101e61ed8  stp x21,xzr,[x0]
7101e61edc  b.eq 0x7101e61eec
7101e61ee0  ldr x8,[sp, #0x10]
7101e61ee4  str xzr,[sp, #0x10]
7101e61ee8  str x8,[x0, #0x8]
7101e61eec  ldr x8,[x19, #0x28]
7101e61ef0  str x0,[x19, #0x28]
7101e61ef4  cbz x8,0x7101e61f08
7101e61ef8  ldr x9,[x8]
7101e61efc  ldr x9,[x9, #0x8]
7101e61f00  mov x0,x8
7101e61f04  blr x9
7101e61f08  ldr x0,[sp, #0x10]
7101e61f0c  stp x21,xzr,[sp, #0x8]
7101e61f10  cbz x0,0x7101e61f18
7101e61f14  bl 0x710392eb40
7101e61f18  ldr x0,[x19, #0x28]
7101e61f1c  fmov s0,0x3f800000
7101e61f20  bl 0x710377aee0
7101e61f24  strb wzr,[x19, #0x30]
7101e61f28  ldp x29,x30,[sp, #0x40]
7101e61f2c  ldr x21,[sp, #0x20]
7101e61f30  ldp x20,x19,[sp, #0x30]
7101e61f34  add sp,sp,#0x50
7101e61f38  ret
7101e61f3c  ldr x0,[x19, #0x28]
7101e61f40  str xzr,[x19, #0x28]
7101e61f44  cbz x0,0x7101e61f28
7101e61f48  ldr x8,[x0]
7101e61f4c  ldr x1,[x8, #0x8]
7101e61f50  ldr x21,[sp, #0x20]
7101e61f54  ldp x29,x30,[sp, #0x40]
7101e61f58  ldp x20,x19,[sp, #0x30]
7101e61f5c  add sp,sp,#0x50
7101e61f60  br x1
