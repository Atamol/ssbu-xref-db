// addr:      710013dd90
// offset:    0x13dd90
// name:      FUN_710013dd90
// mangled:   
// size:      416

710013dd90  sub sp,sp,#0x60
710013dd94  str x23,[sp, #0x20]
710013dd98  stp x22,x21,[sp, #0x30]
710013dd9c  stp x20,x19,[sp, #0x40]
710013dda0  stp x29,x30,[sp, #0x50]
710013dda4  add x29,sp,#0x50
710013dda8  mov x19,x8
710013ddac  cbz x1,0x710013dde0
710013ddb0  ldr x8,[x0, #0x58]
710013ddb4  mov x20,x0
710013ddb8  cbnz x8,0x710013ddd4
710013ddbc  adrp x22,0x71052a5000
710013ddc0  ldr x22,[x22, #0x80]
710013ddc4  ldr x0,[x22]
710013ddc8  mov x21,x1
710013ddcc  bl 0x7100146ed0
710013ddd0  tbz w0,#0x0,0x710013de34
710013ddd4  mov w8,#0xc08
710013ddd8  movk w8,#0x1, LSL #16
710013dddc  b 0x710013ddec
710013dde0  mov w8,#0xc08
710013dde4  movk w8,#0x1, LSL #16
710013dde8  sub w8,w8,#0x1
710013ddec  str w8,[sp, #0x10]
710013ddf0  add x8,sp,#0x10
710013ddf4  orr x20,x8,#0x4
710013ddf8  mov x0,x20
710013ddfc  bl 0x71039c0a80
710013de00  mov x1,sp
710013de04  mov x0,x20
710013de08  str wzr,[sp]
710013de0c  bl 0x71039c0a90
710013de10  add x1,sp,#0x10
710013de14  mov x0,x19
710013de18  bl 0x71000bce50
710013de1c  ldp x29,x30,[sp, #0x50]
710013de20  ldr x23,[sp, #0x20]
710013de24  ldp x20,x19,[sp, #0x40]
710013de28  ldp x22,x21,[sp, #0x30]
710013de2c  add sp,sp,#0x60
710013de30  ret
710013de34  ldr x8,[x20]
710013de38  ldr x9,[x8, #0x38]
710013de3c  add x8,sp,#0x10
710013de40  mov x0,x20
710013de44  blr x9
710013de48  ldr w8,[sp, #0x10]
710013de4c  cbnz w8,0x710013de10
710013de50  adrp x8,0x71052a5000
710013de54  ldr x8,[x8, #0xda0]
710013de58  adrp x9,0x710426f000
710013de5c  add x9,x9,#0x437
710013de60  mov x0,x21
710013de64  str x9,[x20, #0x40]
710013de68  stp x8,xzr,[x20, #0x30]
710013de6c  str x21,[x20, #0x58]
710013de70  bl 0x71000b4160
710013de74  ldr x8,[x20]
710013de78  strb wzr,[x20, #0x98]
710013de7c  ldr x8,[x8, #0x10]
710013de80  mov w1,#0x1
710013de84  mov x0,x20
710013de88  mov w23,#0x1
710013de8c  blr x8
710013de90  adrp x8,0x71052a4000
710013de94  ldr x8,[x8, #0xc70]
710013de98  ldr x8,[x8]
710013de9c  ldr x8,[x8, #0x30]
710013dea0  str x8,[x20, #0x90]
710013dea4  ldr x21,[x22]
710013dea8  ldr x22,[x21, #0x70]
710013deac  cbz x22,0x710013dee8
710013deb0  mov w8,#0x6c05
710013deb4  str w8,[sp]
710013deb8  mov x8,sp
710013debc  orr x20,x8,#0x4
710013dec0  mov x0,x20
710013dec4  bl 0x71039c0a80
710013dec8  add x1,sp,#0x28
710013decc  mov x0,x20
710013ded0  str wzr,[sp, #0x28]
710013ded4  bl 0x71039c0a90
710013ded8  add x0,x22,#0x100
710013dedc  mov x1,sp
710013dee0  strb w23,[x22, #0xfb]
710013dee4  bl 0x71000bcf30
710013dee8  ldr x0,[x21, #0x10]
710013deec  cbz x0,0x710013df04
710013def0  bl 0x71000b4990
710013def4  tbz w0,#0x0,0x710013df04
710013def8  ldr x8,[x21, #0x10]
710013defc  mov w9,#0x1
710013df00  strb w9,[x8, #0x48]
710013df04  mov x8,sp
710013df08  orr x20,x8,#0x4
710013df0c  mov x0,x20
710013df10  str wzr,[sp]
710013df14  bl 0x71039c0a80
710013df18  add x1,sp,#0x28
710013df1c  mov x0,x20
710013df20  str wzr,[sp, #0x28]
710013df24  bl 0x71039c0a90
710013df28  mov x1,sp
710013df2c  b 0x710013de14
