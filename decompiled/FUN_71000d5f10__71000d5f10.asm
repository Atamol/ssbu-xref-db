// addr:      71000d5f10
// offset:    0xd5f10
// name:      FUN_71000d5f10
// mangled:   
// size:      192

71000d5f10  sub sp,sp,#0x40
71000d5f14  stp x20,x19,[sp, #0x20]
71000d5f18  stp x29,x30,[sp, #0x30]
71000d5f1c  add x29,sp,#0x30
71000d5f20  mov x19,x8
71000d5f24  ldr x8,[x0]
71000d5f28  ldr x8,[x8, #0x10]
71000d5f2c  mov w1,#0x1
71000d5f30  mov x20,x0
71000d5f34  blr x8
71000d5f38  adrp x8,0x71052a5000
71000d5f3c  ldr x8,[x8, #0x18]
71000d5f40  stp x8,xzr,[x20, #0x30]
71000d5f44  adrp x8,0x71042f6000
71000d5f48  add x8,x8,#0xe8b
71000d5f4c  str x8,[x20, #0x40]
71000d5f50  adrp x8,0x71052a4000
71000d5f54  ldr x8,[x8, #0xd88]
71000d5f58  ldr x0,[x8]
71000d5f5c  ldr x8,[x0]
71000d5f60  ldr x8,[x8, #0x58]
71000d5f64  blr x8
71000d5f68  tbz w0,#0x0,0x71000d5f90
71000d5f6c  adrp x8,0x71052a4000
71000d5f70  ldr x8,[x8, #0xbd0]
71000d5f74  mov w9,#0xffffffff
71000d5f78  mov x10,#-0x1
71000d5f7c  str w9,[x8, #0xd8]
71000d5f80  str x10,[x8, #0x60]
71000d5f84  str w9,[x8, #0x68]
71000d5f88  stur x10,[x8, #0x6c]
71000d5f8c  stur x10,[x8, #0x74]
71000d5f90  add x8,sp,#0x8
71000d5f94  orr x20,x8,#0x4
71000d5f98  mov x0,x20
71000d5f9c  str wzr,[sp, #0x8]
71000d5fa0  bl 0x71039c0a80
71000d5fa4  add x1,sp,#0x18
71000d5fa8  mov x0,x20
71000d5fac  str wzr,[sp, #0x18]
71000d5fb0  bl 0x71039c0a90
71000d5fb4  add x1,sp,#0x8
71000d5fb8  mov x0,x19
71000d5fbc  bl 0x71000bce50
71000d5fc0  ldp x29,x30,[sp, #0x30]
71000d5fc4  ldp x20,x19,[sp, #0x20]
71000d5fc8  add sp,sp,#0x40
71000d5fcc  ret
