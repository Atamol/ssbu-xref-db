// addr:      71001f2eb0
// offset:    0x1f2eb0
// name:      FUN_71001f2eb0
// mangled:   
// size:      164

71001f2eb0  sub sp,sp,#0x70
71001f2eb4  stp x22,x21,[sp, #0x40]
71001f2eb8  stp x20,x19,[sp, #0x50]
71001f2ebc  stp x29,x30,[sp, #0x60]
71001f2ec0  add x29,sp,#0x60
71001f2ec4  adrp x8,0x71052a4000
71001f2ec8  ldr x8,[x8, #0xd80]
71001f2ecc  add x21,sp,#0x8
71001f2ed0  add x22,x8,#0x10
71001f2ed4  add x8,x21,#0x8
71001f2ed8  mov x19,x1
71001f2edc  mov x20,x0
71001f2ee0  adrp x1,0x710449c000
71001f2ee4  add x1,x1,#0xe64
71001f2ee8  mov x2,#-0x1
71001f2eec  add x0,sp,#0x8
71001f2ef0  strb wzr,[sp, #0x10]
71001f2ef4  str x8,[sp, #0x20]
71001f2ef8  mov w8,#0x10
71001f2efc  str x22,[sp, #0x8]
71001f2f00  str x8,[sp, #0x28]
71001f2f04  bl 0x71001b47e0
71001f2f08  add x0,x20,#0x30
71001f2f0c  adrp x2,0x710449d000
71001f2f10  add x2,x2,#0x8aa
71001f2f14  add x1,sp,#0x8
71001f2f18  sub x3,x29,#0x28
71001f2f1c  stur x21,[x29, #-0x28]
71001f2f20  add x4,sp,#0x30
71001f2f24  bl 0x710021c110
71001f2f28  add x0,x0,#0x48
71001f2f2c  mov x1,x19
71001f2f30  bl 0x71001b2f70
71001f2f34  add x0,sp,#0x8
71001f2f38  str x22,[sp, #0x8]
71001f2f3c  bl 0x71001b4910
71001f2f40  ldp x29,x30,[sp, #0x60]
71001f2f44  ldp x20,x19,[sp, #0x50]
71001f2f48  ldp x22,x21,[sp, #0x40]
71001f2f4c  add sp,sp,#0x70
71001f2f50  ret
