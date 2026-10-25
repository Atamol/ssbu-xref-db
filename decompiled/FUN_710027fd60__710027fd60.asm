// addr:      710027fd60
// offset:    0x27fd60
// name:      FUN_710027fd60
// mangled:   
// size:      296

710027fd60  sub sp,sp,#0x50
710027fd64  str x21,[sp, #0x20]
710027fd68  stp x20,x19,[sp, #0x30]
710027fd6c  stp x29,x30,[sp, #0x40]
710027fd70  add x29,sp,#0x40
710027fd74  adrp x8,0x71052a4000
710027fd78  ldr x8,[x8, #0xda8]
710027fd7c  adrp x21,0x71052a4000
710027fd80  ldrb w8,[x8]
710027fd84  ldr x21,[x21, #0xdb0]
710027fd88  mov x19,x0
710027fd8c  add x20,x21,#0x28
710027fd90  cbz w8,0x710027fdcc
710027fd94  adrp x8,0x71052a4000
710027fd98  ldr x8,[x8, #0xdb8]
710027fd9c  ldr x0,[x8]
710027fda0  bl 0x7101717960
710027fda4  ldr w8,[x0]
710027fda8  cbz w8,0x710027fdcc
710027fdac  ldr x10,[x21, #0xa0]
710027fdb0  ldp x9,x10,[x10]
710027fdb4  sub x10,x10,x9
710027fdb8  asr x10,x10,#0x3
710027fdbc  cmp x10,x8
710027fdc0  b.ls 0x710027fe70
710027fdc4  ldr x8,[x9, x8, LSL #0x3]
710027fdc8  add x20,x8,#0x20
710027fdcc  ldr x8,[x20]
710027fdd0  ldr x8,[x8, #0x10]
710027fdd4  ldr x0,[x8, #0x18]
710027fdd8  ldr w1,[x19, #0xa0]
710027fddc  bl 0x71001cd7d0
710027fde0  cbz x0,0x710027fe24
710027fde4  ldr w8,[x19, #0xd4]
710027fde8  cmp w8,#0x2
710027fdec  b.ne 0x710027fe40
710027fdf0  adrp x8,0x71052a6000
710027fdf4  ldr x8,[x8, #0xc28]
710027fdf8  adrp x9,0x71052a8000
710027fdfc  ldr x9,[x9, #0x420]
710027fe00  mov x1,sp
710027fe04  add x8,x8,#0x10
710027fe08  stp x8,x9,[sp]
710027fe0c  adrp x8,0x7104411000
710027fe10  add x8,x8,#0x4cc
710027fe14  mov x0,x19
710027fe18  stp xzr,x8,[sp, #0x10]
710027fe1c  bl 0x71001d3d60
710027fe20  b 0x710027fe5c
710027fe24  mov w8,#0x4
710027fe28  movk w8,#0x8001, LSL #16
710027fe2c  mov x0,sp
710027fe30  sub x1,x29,#0x14
710027fe34  stur w8,[x29, #-0x14]
710027fe38  bl 0x71001b4200
710027fe3c  b 0x710027fe50
710027fe40  ldp x8,x9,[x19, #0x118]
710027fe44  ldr x10,[x19, #0x128]
710027fe48  stp x9,x10,[sp, #0x8]
710027fe4c  str x8,[sp]
710027fe50  mov x1,sp
710027fe54  mov x0,x19
710027fe58  bl 0x710027ea50
710027fe5c  ldp x29,x30,[sp, #0x40]
710027fe60  ldr x21,[sp, #0x20]
710027fe64  ldp x20,x19,[sp, #0x30]
710027fe68  add sp,sp,#0x50
710027fe6c  ret
710027fe70  adrp x0,0x71042c4000
710027fe74  add x0,x0,#0x35f
710027fe78  mov w1,#0x47
710027fe7c  orr w2,wzr,#0xe0000003
710027fe80  mov w3,wzr
710027fe84  bl 0x71001b1300
