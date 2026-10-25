// addr:      710011fd50
// offset:    0x11fd50
// name:      FUN_710011fd50
// mangled:   
// size:      276

710011fd50  sub sp,sp,#0x60
710011fd54  str x21,[sp, #0x30]
710011fd58  stp x20,x19,[sp, #0x40]
710011fd5c  stp x29,x30,[sp, #0x50]
710011fd60  add x29,sp,#0x50
710011fd64  ldr x20,[x0, #0x58]
710011fd68  mov x19,x0
710011fd6c  cbz x20,0x710011fdd4
710011fd70  ldrb w8,[x20, #0x28]
710011fd74  cbz w8,0x710011fdd4
710011fd78  mov w8,#0x6c05
710011fd7c  str w8,[sp, #0x10]
710011fd80  add x8,sp,#0x10
710011fd84  orr x21,x8,#0x4
710011fd88  mov x0,x21
710011fd8c  bl 0x71039c0a80
710011fd90  sub x1,x29,#0x18
710011fd94  mov x0,x21
710011fd98  stur wzr,[x29, #-0x18]
710011fd9c  bl 0x71039c0a90
710011fda0  add x0,sp,#0x20
710011fda4  add x1,sp,#0x10
710011fda8  bl 0x71000bce50
710011fdac  add x1,sp,#0x20
710011fdb0  mov x0,x20
710011fdb4  bl 0x71000b41f0
710011fdb8  ldr x8,[x19]
710011fdbc  str xzr,[x19, #0x58]
710011fdc0  ldr x8,[x8, #0x30]
710011fdc4  mov x0,x19
710011fdc8  blr x8
710011fdcc  mov w0,#0x1
710011fdd0  b 0x710011fe50
710011fdd4  ldr x0,[x19, #0x90]
710011fdd8  ldr x8,[x0]
710011fddc  ldr x8,[x8, #0x30]
710011fde0  blr x8
710011fde4  tbz w0,#0x0,0x710011fe2c
710011fde8  ldr x0,[x19, #0x90]
710011fdec  bl 0x710011bb20
710011fdf0  ldr w8,[x19, #0x60]
710011fdf4  cmp w8,#0x2
710011fdf8  b.eq 0x710011fe34
710011fdfc  cmp w8,#0x3
710011fe00  b.ne 0x710011fe2c
710011fe04  ldr x20,[x19, #0x58]
710011fe08  add x1,x19,#0x64
710011fe0c  mov x0,sp
710011fe10  bl 0x71000bce50
710011fe14  mov x1,sp
710011fe18  mov x0,x20
710011fe1c  bl 0x71000b41f0
710011fe20  str xzr,[x19, #0x58]
710011fe24  mov w0,#0x1
710011fe28  b 0x710011fe50
710011fe2c  mov w0,#0x5
710011fe30  b 0x710011fe50
710011fe34  adrp x8,0x71052a5000
710011fe38  ldr x8,[x8, #0x558]
710011fe3c  mov x0,xzr
710011fe40  stp x8,xzr,[x19, #0x30]
710011fe44  adrp x8,0x71042a2000
710011fe48  add x8,x8,#0x16e
710011fe4c  str x8,[x19, #0x40]
710011fe50  ldp x29,x30,[sp, #0x50]
710011fe54  ldr x21,[sp, #0x30]
710011fe58  ldp x20,x19,[sp, #0x40]
710011fe5c  add sp,sp,#0x60
710011fe60  ret
