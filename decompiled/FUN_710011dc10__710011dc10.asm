// addr:      710011dc10
// offset:    0x11dc10
// name:      FUN_710011dc10
// mangled:   
// size:      408

710011dc10  sub sp,sp,#0x80
710011dc14  stp x28,x27,[sp, #0x20]
710011dc18  stp x26,x25,[sp, #0x30]
710011dc1c  stp x24,x23,[sp, #0x40]
710011dc20  stp x22,x21,[sp, #0x50]
710011dc24  stp x20,x19,[sp, #0x60]
710011dc28  stp x29,x30,[sp, #0x70]
710011dc2c  add x29,sp,#0x70
710011dc30  mov x28,x8
710011dc34  ldr w8,[x0, #0xb8]
710011dc38  mov x21,x5
710011dc3c  mov w25,w4
710011dc40  mov x22,x3
710011dc44  mov x20,x0
710011dc48  add x23,x0,#0xa8
710011dc4c  cbz w8,0x710011dc90
710011dc50  ldr x8,[x20, #0xb0]
710011dc54  cmp x8,x23
710011dc58  b.eq 0x710011dc88
710011dc5c  add x24,x20,#0xc0
710011dc60  ldr x19,[x8, #0x8]
710011dc64  stp xzr,xzr,[x8]
710011dc68  ldrsw x9,[x20, #0xd4]
710011dc6c  add x2,x9,x8
710011dc70  mov x0,x24
710011dc74  mov x1,x24
710011dc78  bl 0x71000b70c0
710011dc7c  cmp x19,x23
710011dc80  mov x8,x19
710011dc84  b.ne 0x710011dc60
710011dc88  mov x0,x23
710011dc8c  bl 0x71000b7080
710011dc90  tst w25,#0xffff
710011dc94  b.eq 0x710011dd50
710011dc98  str x28,[sp]
710011dc9c  adrp x8,0x71052a5000
710011dca0  ldr x8,[x8, #0x80]
710011dca4  ldr x8,[x8]
710011dca8  ldr x28,[x8, #0xf0]
710011dcac  mov w27,wzr
710011dcb0  mov w26,wzr
710011dcb4  add x24,x20,#0xc0
710011dcb8  and x19,x25,#0xffff
710011dcbc  ldr w8,[x20, #0xd0]
710011dcc0  cbz w8,0x710011dd14
710011dcc4  mov x0,x24
710011dcc8  bl 0x71000b71c0
710011dccc  cbz x0,0x710011dcdc
710011dcd0  ldrsw x8,[x20, #0xd4]
710011dcd4  sub x25,x0,x8
710011dcd8  b 0x710011dce0
710011dcdc  mov x25,xzr
710011dce0  mov x0,x23
710011dce4  mov x1,x23
710011dce8  mov x2,x25
710011dcec  str xzr,[x25, #0x10]
710011dcf0  bl 0x71000b7090
710011dcf4  ldr x8,[x22]
710011dcf8  cmp x8,x21
710011dcfc  cset w9,eq
710011dd00  cmp x8,x28
710011dd04  str x8,[x25, #0x10]
710011dd08  cset w8,eq
710011dd0c  orr w27,w27,w9
710011dd10  orr w26,w26,w8
710011dd14  add x22,x22,#0x8
710011dd18  subs x19,x19,#0x1
710011dd1c  b.ne 0x710011dcbc
710011dd20  ldr x28,[sp]
710011dd24  tbz w27,#0x0,0x710011dd50
710011dd28  tbz w26,#0x0,0x710011dd50
710011dd2c  adrp x8,0x71052a5000
710011dd30  ldr x8,[x8, #0x8e8]
710011dd34  adrp x9,0x710437b000
710011dd38  add x9,x9,#0xac7
710011dd3c  str wzr,[x20, #0xf0]
710011dd40  str x8,[x20, #0x30]
710011dd44  stp xzr,x9,[x20, #0x38]
710011dd48  str wzr,[sp, #0x8]
710011dd4c  b 0x710011dd5c
710011dd50  mov w8,#0xc07
710011dd54  movk w8,#0x1, LSL #16
710011dd58  str w8,[sp, #0x8]
710011dd5c  add x8,sp,#0x8
710011dd60  orr x20,x8,#0x4
710011dd64  mov x0,x20
710011dd68  bl 0x71039c0a80
710011dd6c  add x1,sp,#0x18
710011dd70  mov x0,x20
710011dd74  str wzr,[sp, #0x18]
710011dd78  bl 0x71039c0a90
710011dd7c  add x1,sp,#0x8
710011dd80  mov x0,x28
710011dd84  bl 0x71000bce50
710011dd88  ldp x29,x30,[sp, #0x70]
710011dd8c  ldp x20,x19,[sp, #0x60]
710011dd90  ldp x22,x21,[sp, #0x50]
710011dd94  ldp x24,x23,[sp, #0x40]
710011dd98  ldp x26,x25,[sp, #0x30]
710011dd9c  ldp x28,x27,[sp, #0x20]
710011dda0  add sp,sp,#0x80
710011dda4  ret
