// addr:      710029dda0
// offset:    0x29dda0
// name:      FUN_710029dda0
// mangled:   
// size:      296

710029dda0  sub sp,sp,#0x80
710029dda4  stp x22,x21,[sp, #0x50]
710029dda8  stp x20,x19,[sp, #0x60]
710029ddac  stp x29,x30,[sp, #0x70]
710029ddb0  add x29,sp,#0x70
710029ddb4  adrp x8,0x71052a4000
710029ddb8  ldr x8,[x8, #0xda8]
710029ddbc  adrp x22,0x71052a4000
710029ddc0  ldrb w8,[x8]
710029ddc4  ldr x22,[x22, #0xdb0]
710029ddc8  mov x20,x1
710029ddcc  mov x19,x0
710029ddd0  add x21,x22,#0x28
710029ddd4  cbz w8,0x710029de10
710029ddd8  adrp x8,0x71052a4000
710029dddc  ldr x8,[x8, #0xdb8]
710029dde0  ldr x0,[x8]
710029dde4  bl 0x7101717960
710029dde8  ldr w8,[x0]
710029ddec  cbz w8,0x710029de10
710029ddf0  ldr x10,[x22, #0xa0]
710029ddf4  ldp x9,x10,[x10]
710029ddf8  sub x10,x10,x9
710029ddfc  asr x10,x10,#0x3
710029de00  cmp x10,x8
710029de04  b.ls 0x710029deb0
710029de08  ldr x8,[x9, x8, LSL #0x3]
710029de0c  add x21,x8,#0x20
710029de10  ldr x8,[x21]
710029de14  ldr x8,[x8, #0x10]
710029de18  ldr x0,[x8, #0x18]
710029de1c  ldr w1,[x19, #0xa0]
710029de20  bl 0x71001cd7d0
710029de24  cbz x0,0x710029de94
710029de28  adrp x8,0x71052a5000
710029de2c  ldr x8,[x8, #0x110]
710029de30  ldr w9,[x20]
710029de34  cmp w9,#0x0
710029de38  csel x8,x8,xzr,ge
710029de3c  cbz x8,0x710029de64
710029de40  ldp x8,x9,[x20]
710029de44  ldr x10,[x20, #0x10]
710029de48  str x8,[sp, #0x20]
710029de4c  mov x8,x10
710029de50  mov w1,#0x2
710029de54  stp x9,x10,[sp, #0x28]
710029de58  stp x9,x8,[sp, #0x40]
710029de5c  ldr x8,[sp, #0x20]
710029de60  b 0x710029de84
710029de64  ldp x8,x9,[x20]
710029de68  ldr x10,[x20, #0x10]
710029de6c  str x8,[sp, #0x8]
710029de70  mov x8,x10
710029de74  orr w1,wzr,#0x3
710029de78  stp x9,x10,[sp, #0x10]
710029de7c  stp x9,x8,[sp, #0x40]
710029de80  ldr x8,[sp, #0x8]
710029de84  str x8,[sp, #0x38]
710029de88  add x2,sp,#0x38
710029de8c  mov w3,#0x1
710029de90  bl 0x71001d0f00
710029de94  mov x0,x19
710029de98  bl 0x71001cd870
710029de9c  ldp x29,x30,[sp, #0x70]
710029dea0  ldp x20,x19,[sp, #0x60]
710029dea4  ldp x22,x21,[sp, #0x50]
710029dea8  add sp,sp,#0x80
710029deac  ret
710029deb0  adrp x0,0x71042c4000
710029deb4  add x0,x0,#0x35f
710029deb8  mov w1,#0x47
710029debc  orr w2,wzr,#0xe0000003
710029dec0  mov w3,wzr
710029dec4  bl 0x71001b1300
