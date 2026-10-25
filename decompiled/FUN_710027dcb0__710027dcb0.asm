// addr:      710027dcb0
// offset:    0x27dcb0
// name:      FUN_710027dcb0
// mangled:   
// size:      296

710027dcb0  sub sp,sp,#0x50
710027dcb4  str x21,[sp, #0x20]
710027dcb8  stp x20,x19,[sp, #0x30]
710027dcbc  stp x29,x30,[sp, #0x40]
710027dcc0  add x29,sp,#0x40
710027dcc4  adrp x8,0x71052a4000
710027dcc8  ldr x8,[x8, #0xda8]
710027dccc  adrp x21,0x71052a4000
710027dcd0  ldrb w8,[x8]
710027dcd4  ldr x21,[x21, #0xdb0]
710027dcd8  mov x19,x0
710027dcdc  add x20,x21,#0x28
710027dce0  cbz w8,0x710027dd1c
710027dce4  adrp x8,0x71052a4000
710027dce8  ldr x8,[x8, #0xdb8]
710027dcec  ldr x0,[x8]
710027dcf0  bl 0x7101717960
710027dcf4  ldr w8,[x0]
710027dcf8  cbz w8,0x710027dd1c
710027dcfc  ldr x10,[x21, #0xa0]
710027dd00  ldp x9,x10,[x10]
710027dd04  sub x10,x10,x9
710027dd08  asr x10,x10,#0x3
710027dd0c  cmp x10,x8
710027dd10  b.ls 0x710027ddc0
710027dd14  ldr x8,[x9, x8, LSL #0x3]
710027dd18  add x20,x8,#0x20
710027dd1c  ldr x8,[x20]
710027dd20  ldr x8,[x8, #0x10]
710027dd24  ldr x0,[x8, #0x18]
710027dd28  ldr w1,[x19, #0xa0]
710027dd2c  bl 0x71001cd7d0
710027dd30  cbz x0,0x710027dd74
710027dd34  ldr w8,[x19, #0xd4]
710027dd38  cmp w8,#0x2
710027dd3c  b.ne 0x710027dd90
710027dd40  adrp x8,0x71052a6000
710027dd44  ldr x8,[x8, #0xc28]
710027dd48  adrp x9,0x71052a8000
710027dd4c  ldr x9,[x9, #0x3b8]
710027dd50  mov x1,sp
710027dd54  add x8,x8,#0x10
710027dd58  stp x8,x9,[sp]
710027dd5c  adrp x8,0x7104411000
710027dd60  add x8,x8,#0x4cc
710027dd64  mov x0,x19
710027dd68  stp xzr,x8,[sp, #0x10]
710027dd6c  bl 0x71001d3d60
710027dd70  b 0x710027ddac
710027dd74  mov w8,#0x4
710027dd78  movk w8,#0x8001, LSL #16
710027dd7c  mov x0,sp
710027dd80  sub x1,x29,#0x14
710027dd84  stur w8,[x29, #-0x14]
710027dd88  bl 0x71001b4200
710027dd8c  b 0x710027dda0
710027dd90  ldp x8,x9,[x19, #0x118]
710027dd94  ldr x10,[x19, #0x128]
710027dd98  stp x9,x10,[sp, #0x8]
710027dd9c  str x8,[sp]
710027dda0  mov x1,sp
710027dda4  mov x0,x19
710027dda8  bl 0x710027ca30
710027ddac  ldp x29,x30,[sp, #0x40]
710027ddb0  ldr x21,[sp, #0x20]
710027ddb4  ldp x20,x19,[sp, #0x30]
710027ddb8  add sp,sp,#0x50
710027ddbc  ret
710027ddc0  adrp x0,0x71042c4000
710027ddc4  add x0,x0,#0x35f
710027ddc8  mov w1,#0x47
710027ddcc  orr w2,wzr,#0xe0000003
710027ddd0  mov w3,wzr
710027ddd4  bl 0x71001b1300
