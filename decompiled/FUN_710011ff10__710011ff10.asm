// addr:      710011ff10
// offset:    0x11ff10
// name:      FUN_710011ff10
// mangled:   
// size:      268

710011ff10  sub sp,sp,#0x60
710011ff14  str x21,[sp, #0x30]
710011ff18  stp x20,x19,[sp, #0x40]
710011ff1c  stp x29,x30,[sp, #0x50]
710011ff20  add x29,sp,#0x50
710011ff24  ldr x20,[x0, #0x58]
710011ff28  mov x19,x0
710011ff2c  cbz x20,0x710011ff94
710011ff30  ldrb w8,[x20, #0x28]
710011ff34  cbz w8,0x710011ff94
710011ff38  mov w8,#0x6c05
710011ff3c  str w8,[sp, #0x10]
710011ff40  add x8,sp,#0x10
710011ff44  orr x21,x8,#0x4
710011ff48  mov x0,x21
710011ff4c  bl 0x71039c0a80
710011ff50  sub x1,x29,#0x18
710011ff54  mov x0,x21
710011ff58  stur wzr,[x29, #-0x18]
710011ff5c  bl 0x71039c0a90
710011ff60  add x0,sp,#0x20
710011ff64  add x1,sp,#0x10
710011ff68  bl 0x71000bce50
710011ff6c  add x1,sp,#0x20
710011ff70  mov x0,x20
710011ff74  bl 0x71000b41f0
710011ff78  ldr x8,[x19]
710011ff7c  str xzr,[x19, #0x58]
710011ff80  ldr x8,[x8, #0x30]
710011ff84  mov x0,x19
710011ff88  blr x8
710011ff8c  mov w0,#0x1
710011ff90  b 0x7100120008
710011ff94  ldr x0,[x19, #0x90]
710011ff98  ldr x8,[x0]
710011ff9c  ldr x8,[x8, #0xb8]
710011ffa0  blr x8
710011ffa4  tbz w0,#0x0,0x710011ffe4
710011ffa8  ldr w8,[x19, #0x60]
710011ffac  cmp w8,#0x2
710011ffb0  b.eq 0x710011ffec
710011ffb4  cmp w8,#0x3
710011ffb8  b.ne 0x710011ffe4
710011ffbc  ldr x20,[x19, #0x58]
710011ffc0  add x1,x19,#0x64
710011ffc4  mov x0,sp
710011ffc8  bl 0x71000bce50
710011ffcc  mov x1,sp
710011ffd0  mov x0,x20
710011ffd4  bl 0x71000b41f0
710011ffd8  str xzr,[x19, #0x58]
710011ffdc  mov w0,#0x1
710011ffe0  b 0x7100120008
710011ffe4  mov w0,#0x5
710011ffe8  b 0x7100120008
710011ffec  adrp x8,0x71052a5000
710011fff0  ldr x8,[x8, #0x558]
710011fff4  mov x0,xzr
710011fff8  stp x8,xzr,[x19, #0x30]
710011fffc  adrp x8,0x71042a2000
7100120000  add x8,x8,#0x16e
7100120004  str x8,[x19, #0x40]
7100120008  ldp x29,x30,[sp, #0x50]
710012000c  ldr x21,[sp, #0x30]
7100120010  ldp x20,x19,[sp, #0x40]
7100120014  add sp,sp,#0x60
7100120018  ret
