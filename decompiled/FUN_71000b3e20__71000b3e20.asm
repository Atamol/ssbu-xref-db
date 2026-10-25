// addr:      71000b3e20
// offset:    0xb3e20
// name:      FUN_71000b3e20
// mangled:   
// size:      200

71000b3e20  sub sp,sp,#0x40
71000b3e24  str x21,[sp, #0x10]
71000b3e28  stp x20,x19,[sp, #0x20]
71000b3e2c  stp x29,x30,[sp, #0x30]
71000b3e30  add x29,sp,#0x30
71000b3e34  mov x19,x8
71000b3e38  cbz x1,0x71000b3e64
71000b3e3c  mov x21,x0
71000b3e40  ldr w8,[x21, #0x58]!
71000b3e44  mov x20,x0
71000b3e48  cmp w8,#0x1
71000b3e4c  b.ne 0x71000b3e74
71000b3e50  mov w8,#0xc07
71000b3e54  movk w8,#0x1, LSL #16
71000b3e58  add w8,w8,#0x1
71000b3e5c  str w8,[sp]
71000b3e60  b 0x71000b3ea8
71000b3e64  mov w8,#0xc07
71000b3e68  movk w8,#0x1, LSL #16
71000b3e6c  str w8,[sp]
71000b3e70  b 0x71000b3ea8
71000b3e74  str x1,[x20, #0x88]
71000b3e78  mov w1,#0x1
71000b3e7c  mov x0,x20
71000b3e80  bl 0x71000baac0
71000b3e84  adrp x8,0x71052a4000
71000b3e88  ldr x8,[x8, #0xc50]
71000b3e8c  mov x0,x21
71000b3e90  stp x8,xzr,[x20, #0x30]
71000b3e94  adrp x8,0x71042b3000
71000b3e98  add x8,x8,#0x3a4
71000b3e9c  str x8,[x20, #0x40]
71000b3ea0  bl 0x71000b4160
71000b3ea4  str wzr,[sp]
71000b3ea8  mov x8,sp
71000b3eac  orr x20,x8,#0x4
71000b3eb0  mov x0,x20
71000b3eb4  bl 0x71039c0a80
71000b3eb8  add x1,sp,#0x18
71000b3ebc  mov x0,x20
71000b3ec0  str wzr,[sp, #0x18]
71000b3ec4  bl 0x71039c0a90
71000b3ec8  mov x1,sp
71000b3ecc  mov x0,x19
71000b3ed0  bl 0x71000bce50
71000b3ed4  ldp x29,x30,[sp, #0x30]
71000b3ed8  ldr x21,[sp, #0x10]
71000b3edc  ldp x20,x19,[sp, #0x20]
71000b3ee0  add sp,sp,#0x40
71000b3ee4  ret
