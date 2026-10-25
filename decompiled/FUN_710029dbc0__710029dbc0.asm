// addr:      710029dbc0
// offset:    0x29dbc0
// name:      FUN_710029dbc0
// mangled:   
// size:      472

710029dbc0  sub sp,sp,#0x50
710029dbc4  stp x22,x21,[sp, #0x20]
710029dbc8  stp x20,x19,[sp, #0x30]
710029dbcc  stp x29,x30,[sp, #0x40]
710029dbd0  add x29,sp,#0x40
710029dbd4  adrp x22,0x71052a4000
710029dbd8  ldr x22,[x22, #0xda8]
710029dbdc  adrp x21,0x71052a4000
710029dbe0  ldrb w8,[x22]
710029dbe4  ldr x21,[x21, #0xdb0]
710029dbe8  mov x19,x0
710029dbec  add x20,x21,#0x28
710029dbf0  cbz w8,0x710029dc2c
710029dbf4  adrp x8,0x71052a4000
710029dbf8  ldr x8,[x8, #0xdb8]
710029dbfc  ldr x0,[x8]
710029dc00  bl 0x7101717960
710029dc04  ldr w8,[x0]
710029dc08  cbz w8,0x710029dc2c
710029dc0c  ldr x10,[x21, #0xa0]
710029dc10  ldp x9,x10,[x10]
710029dc14  sub x10,x10,x9
710029dc18  asr x10,x10,#0x3
710029dc1c  cmp x10,x8
710029dc20  b.ls 0x710029dd80
710029dc24  ldr x8,[x9, x8, LSL #0x3]
710029dc28  add x20,x8,#0x20
710029dc2c  ldr x8,[x20]
710029dc30  ldr x8,[x8, #0x10]
710029dc34  ldr x0,[x8, #0x18]
710029dc38  ldr w1,[x19, #0xa0]
710029dc3c  bl 0x71001cd7d0
710029dc40  cbz x0,0x710029dd38
710029dc44  add x20,x19,#0xa8
710029dc48  mov x0,x20
710029dc4c  bl 0x71001d1590
710029dc50  ldp x8,x0,[x19, #0x140]
710029dc54  ldr x8,[x8, #0x10]
710029dc58  ldr x2,[x8, #0x78]
710029dc5c  ldr x8,[x0]
710029dc60  ldr x8,[x8, #0x10]
710029dc64  add x3,x19,#0x158
710029dc68  add x4,x19,#0x180
710029dc6c  add x5,x19,#0x188
710029dc70  mov w6,#0x1
710029dc74  mov x1,x20
710029dc78  blr x8
710029dc7c  tbz w0,#0x0,0x710029dd44
710029dc80  ldrb w8,[x22]
710029dc84  add x22,x21,#0x28
710029dc88  cbz w8,0x710029dcc4
710029dc8c  adrp x8,0x71052a4000
710029dc90  ldr x8,[x8, #0xdb8]
710029dc94  ldr x0,[x8]
710029dc98  bl 0x7101717960
710029dc9c  ldr w8,[x0]
710029dca0  cbz w8,0x710029dcc4
710029dca4  ldr x10,[x21, #0xa0]
710029dca8  ldp x9,x10,[x10]
710029dcac  sub x10,x10,x9
710029dcb0  asr x10,x10,#0x3
710029dcb4  cmp x10,x8
710029dcb8  b.ls 0x710029dd80
710029dcbc  ldr x8,[x9, x8, LSL #0x3]
710029dcc0  add x22,x8,#0x20
710029dcc4  ldr x8,[x22]
710029dcc8  ldr x8,[x8, #0x10]
710029dccc  ldr x0,[x8, #0x18]
710029dcd0  ldr w1,[x19, #0xa0]
710029dcd4  ldr w2,[x19, #0xc0]
710029dcd8  bl 0x71001d3780
710029dcdc  mov w1,#0x2
710029dce0  mov x0,x19
710029dce4  bl 0x71001d6410
710029dce8  mov w0,#0x20
710029dcec  bl 0x71001af850
710029dcf0  mov x2,x0
710029dcf4  cbz x0,0x710029dd1c
710029dcf8  adrp x8,0x71052a6000
710029dcfc  ldr x8,[x8, #0xc28]
710029dd00  adrp x9,0x71052a8000
710029dd04  ldr x9,[x9, #0x770]
710029dd08  adrp x10,0x7104411000
710029dd0c  add x10,x10,#0x4cc
710029dd10  stp xzr,x10,[x2, #0x10]
710029dd14  add x8,x8,#0x10
710029dd18  stp x8,x9,[x2]
710029dd1c  mov x0,x19
710029dd20  mov x1,x20
710029dd24  ldp x29,x30,[sp, #0x40]
710029dd28  ldp x20,x19,[sp, #0x30]
710029dd2c  ldp x22,x21,[sp, #0x20]
710029dd30  add sp,sp,#0x50
710029dd34  b 0x71001d4200
710029dd38  mov w8,#0x4
710029dd3c  movk w8,#0x8001, LSL #16
710029dd40  b 0x710029dd50
710029dd44  mov w8,#0x4
710029dd48  movk w8,#0x8001, LSL #16
710029dd4c  add w8,w8,#0x9
710029dd50  add x0,sp,#0x8
710029dd54  add x1,sp,#0x4
710029dd58  str w8,[sp, #0x4]
710029dd5c  bl 0x71001b4200
710029dd60  add x1,sp,#0x8
710029dd64  mov x0,x19
710029dd68  bl 0x710029dda0
710029dd6c  ldp x29,x30,[sp, #0x40]
710029dd70  ldp x20,x19,[sp, #0x30]
710029dd74  ldp x22,x21,[sp, #0x20]
710029dd78  add sp,sp,#0x50
710029dd7c  ret
710029dd80  adrp x0,0x71042c4000
710029dd84  add x0,x0,#0x35f
710029dd88  mov w1,#0x47
710029dd8c  orr w2,wzr,#0xe0000003
710029dd90  mov w3,wzr
710029dd94  bl 0x71001b1300
