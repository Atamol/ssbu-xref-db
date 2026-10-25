// addr:      71001ebd90
// offset:    0x1ebd90
// name:      FUN_71001ebd90
// mangled:   
// size:      240

71001ebd90  sub sp,sp,#0x90
71001ebd94  stp x26,x25,[sp, #0x40]
71001ebd98  stp x24,x23,[sp, #0x50]
71001ebd9c  stp x22,x21,[sp, #0x60]
71001ebda0  stp x20,x19,[sp, #0x70]
71001ebda4  stp x29,x30,[sp, #0x80]
71001ebda8  add x29,sp,#0x80
71001ebdac  adrp x8,0x71052a4000
71001ebdb0  ldr x8,[x8, #0xd80]
71001ebdb4  add x23,sp,#0x8
71001ebdb8  adrp x21,0x710449c000
71001ebdbc  add x21,x21,#0xe73
71001ebdc0  mov x22,#-0x1
71001ebdc4  mov x19,x1
71001ebdc8  mov x20,x0
71001ebdcc  strb wzr,[sp, #0x10]
71001ebdd0  add x25,x23,#0x8
71001ebdd4  mov w26,#0x10
71001ebdd8  add x24,x8,#0x10
71001ebddc  add x0,sp,#0x8
71001ebde0  mov x1,x21
71001ebde4  mov x2,x22
71001ebde8  stp x25,x26,[sp, #0x20]
71001ebdec  str x24,[sp, #0x8]
71001ebdf0  bl 0x71001b47e0
71001ebdf4  add x20,x20,#0x30
71001ebdf8  add x1,sp,#0x8
71001ebdfc  mov x0,x20
71001ebe00  bl 0x710021bff0
71001ebe04  add x0,sp,#0x8
71001ebe08  str x24,[sp, #0x8]
71001ebe0c  bl 0x71001b4910
71001ebe10  add x0,sp,#0x8
71001ebe14  mov x1,x21
71001ebe18  mov x2,x22
71001ebe1c  str x24,[sp, #0x8]
71001ebe20  stp x25,x26,[sp, #0x20]
71001ebe24  strb wzr,[sp, #0x10]
71001ebe28  bl 0x71001b47e0
71001ebe2c  adrp x2,0x710449d000
71001ebe30  add x2,x2,#0x8aa
71001ebe34  add x1,sp,#0x8
71001ebe38  add x3,sp,#0x38
71001ebe3c  add x4,sp,#0x30
71001ebe40  str x23,[sp, #0x38]
71001ebe44  mov x0,x20
71001ebe48  bl 0x710021c110
71001ebe4c  add x0,x0,#0x48
71001ebe50  mov x1,x19
71001ebe54  bl 0x71001b2f70
71001ebe58  add x0,sp,#0x8
71001ebe5c  str x24,[sp, #0x8]
71001ebe60  bl 0x71001b4910
71001ebe64  ldp x29,x30,[sp, #0x80]
71001ebe68  ldp x20,x19,[sp, #0x70]
71001ebe6c  ldp x22,x21,[sp, #0x60]
71001ebe70  ldp x24,x23,[sp, #0x50]
71001ebe74  ldp x26,x25,[sp, #0x40]
71001ebe78  add sp,sp,#0x90
71001ebe7c  ret
