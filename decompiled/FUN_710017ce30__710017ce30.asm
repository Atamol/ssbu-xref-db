// addr:      710017ce30
// offset:    0x17ce30
// name:      FUN_710017ce30
// mangled:   
// size:      332

710017ce30  sub sp,sp,#0x60
710017ce34  str x21,[sp, #0x30]
710017ce38  stp x20,x19,[sp, #0x40]
710017ce3c  stp x29,x30,[sp, #0x50]
710017ce40  add x29,sp,#0x50
710017ce44  mov x19,x0
710017ce48  ldr x0,[x0, #0x158]
710017ce4c  ldr x8,[x0, #0x18]
710017ce50  ldr w8,[x8, #0x418]
710017ce54  cmp w8,#0x2
710017ce58  b.ne 0x710017ce70
710017ce5c  ldr w8,[x19, #0x110]
710017ce60  cmp w8,#0x6
710017ce64  b.eq 0x710017ce70
710017ce68  orr w8,wzr,#0x6
710017ce6c  str w8,[x19, #0x110]
710017ce70  bl 0x7100174f00
710017ce74  tbz w0,#0x0,0x710017ce84
710017ce78  ldr x0,[x19, #0x158]
710017ce7c  bl 0x7100174cb0
710017ce80  tbz w0,#0x0,0x710017ced4
710017ce84  adrp x8,0x71052a4000
710017ce88  ldr x8,[x8, #0xc70]
710017ce8c  ldr x8,[x8]
710017ce90  ldr x9,[x19, #0x58]
710017ce94  ldr x8,[x8, #0x30]
710017ce98  cmp x9,x8
710017ce9c  b.ls 0x710017ceb4
710017cea0  ldr x8,[x19, #0x158]
710017cea4  ldr x8,[x8, #0x18]
710017cea8  ldr w8,[x8, #0x41c]
710017ceac  cmp w8,#0x4
710017ceb0  b.ne 0x710017cf10
710017ceb4  adrp x8,0x71052a5000
710017ceb8  ldr x8,[x8, #0x758]
710017cebc  mov x0,xzr
710017cec0  stp x8,xzr,[x19, #0x30]
710017cec4  adrp x8,0x710437b000
710017cec8  add x8,x8,#0xbcb
710017cecc  str x8,[x19, #0x40]
710017ced0  b 0x710017cf68
710017ced4  ldr x8,[x19, #0x158]
710017ced8  ldr x8,[x8, #0x18]
710017cedc  add x1,x8,#0x2a0
710017cee0  add x0,sp,#0x10
710017cee4  bl 0x71000b1c60
710017cee8  add x20,x19,#0x138
710017ceec  add x0,sp,#0x10
710017cef0  mov x1,x20
710017cef4  bl 0x71000b2b10
710017cef8  tbz w0,#0x0,0x710017cf18
710017cefc  adrp x9,0x71052a5000
710017cf00  ldr x9,[x9, #0x760]
710017cf04  adrp x8,0x71043ce000
710017cf08  add x8,x8,#0x806
710017cf0c  b 0x710017cf54
710017cf10  mov w0,#0x5
710017cf14  b 0x710017cf68
710017cf18  mov w21,#0x20
710017cf1c  add x0,sp,#0x10
710017cf20  mov x1,sp
710017cf24  str wzr,[sp, #0x8]
710017cf28  str x21,[sp]
710017cf2c  bl 0x71000b2b70
710017cf30  mov x1,sp
710017cf34  mov x0,x20
710017cf38  str wzr,[sp, #0x8]
710017cf3c  str x21,[sp]
710017cf40  bl 0x71000b2b70
710017cf44  adrp x9,0x71052a5000
710017cf48  ldr x9,[x9, #0x758]
710017cf4c  adrp x8,0x710437b000
710017cf50  add x8,x8,#0xbcb
710017cf54  add x0,sp,#0x10
710017cf58  stp x9,xzr,[x19, #0x30]
710017cf5c  str x8,[x19, #0x40]
710017cf60  bl 0x71000b1cf0
710017cf64  mov x0,xzr
710017cf68  ldp x29,x30,[sp, #0x50]
710017cf6c  ldr x21,[sp, #0x30]
710017cf70  ldp x20,x19,[sp, #0x40]
710017cf74  add sp,sp,#0x60
710017cf78  ret
