// addr:      710363da60
// offset:    0x363da60
// name:      FUN_710363da60
// mangled:   
// size:      672

710363da60  sub sp,sp,#0x110
710363da64  stp x28,x27,[sp, #0xb0]
710363da68  stp x26,x25,[sp, #0xc0]
710363da6c  stp x24,x23,[sp, #0xd0]
710363da70  stp x22,x21,[sp, #0xe0]
710363da74  stp x20,x19,[sp, #0xf0]
710363da78  stp x29,x30,[sp, #0x100]
710363da7c  add x29,sp,#0x100
710363da80  ldr w8,[x0, #0x1c]
710363da84  cmp w8,#0x3
710363da88  b.cs 0x710363dcfc
710363da8c  ldr x9,[x0, #0x28]
710363da90  ldr x24,[x9, #0x128]
710363da94  cbz x24,0x710363dcd4
710363da98  ldr x11,[x0, #0x48]
710363da9c  orr w10,wzr,#0x70
710363daa0  madd x8,x8,x10,x11
710363daa4  add x9,sp,#0x38
710363daa8  adrp x12,0x71043ff000
710363daac  add x12,x12,#0xdc5
710363dab0  orr x28,x9,#0x1
710363dab4  add x19,x9,#0x20
710363dab8  add x9,x9,#0x21
710363dabc  str x9,[sp, #0x8]
710363dac0  ldr x26,[x12]
710363dac4  ldur x27,[x12, #0x5]
710363dac8  mov w22,#0x1a
710363dacc  add x9,x8,#0x100
710363dad0  str x9,[sp, #0x30]
710363dad4  add x9,x8,#0x108
710363dad8  str x9,[sp, #0x28]
710363dadc  add x9,x8,#0xf8
710363dae0  adrp x21,0x7105238000
710363dae4  add x21,x21,#0x2b0
710363dae8  mov w23,#0x2
710363daec  add x25,x8,#0xc0
710363daf0  str x9,[sp, #0x10]
710363daf4  add x9,x8,#0xd0
710363daf8  add x8,x8,#0xc8
710363dafc  stp x8,x9,[sp, #0x18]
710363db00  ldr x1,[x24, #0x28]
710363db04  add x0,sp,#0x78
710363db08  add x2,sp,#0x38
710363db0c  stp xzr,xzr,[sp, #0x38]
710363db10  str xzr,[sp, #0x48]
710363db14  strb w22,[sp, #0x38]
710363db18  stur x27,[x28, #0x5]
710363db1c  str x26,[x28]
710363db20  strb wzr,[sp, #0x46]
710363db24  bl 0x7103856830
710363db28  ldr x8,[sp, #0x88]
710363db2c  cbz x8,0x710363dccc
710363db30  ldr x8,[x8]
710363db34  ldr x9,[sp, #0x90]
710363db38  cmp x8,x9
710363db3c  b.ne 0x710363dccc
710363db40  ldr x8,[sp, #0x30]
710363db44  ldr x8,[x8]
710363db48  cbz x8,0x710363db78
710363db4c  ldr x9,[sp, #0x28]
710363db50  ldr x8,[x8]
710363db54  ldr x9,[x9]
710363db58  cmp x8,x9
710363db5c  b.ne 0x710363db80
710363db60  ldr x8,[sp, #0x10]
710363db64  ldr x8,[x8]
710363db68  cbz x8,0x710363db78
710363db6c  ldr x9,[x8, #0x8]
710363db70  ldr x10,[x9]
710363db74  b 0x710363db8c
710363db78  mov x9,xzr
710363db7c  b 0x710363db88
710363db80  mov x9,xzr
710363db84  mov x8,xzr
710363db88  mov x10,xzr
710363db8c  stp x8,x9,[sp, #0x40]
710363db90  str x10,[sp, #0x50]
710363db94  str x21,[sp, #0x38]
710363db98  str xzr,[x19]
710363db9c  stp xzr,xzr,[x19, #0x8]
710363dba0  ldrb w8,[x25]
710363dba4  tbnz w8,#0x0,0x710363dbbc
710363dba8  ldp x8,x9,[x25]
710363dbac  ldr x10,[x25, #0x10]
710363dbb0  stp x9,x10,[x19, #0x8]
710363dbb4  str x8,[x19]
710363dbb8  b 0x710363dc94
710363dbbc  ldr x8,[sp, #0x18]
710363dbc0  ldr x20,[x8]
710363dbc4  cmn x20,#0x10
710363dbc8  b.cs 0x710363dcf4
710363dbcc  ldr x8,[sp, #0x20]
710363dbd0  ldr x21,[x8]
710363dbd4  cmp x20,#0x17
710363dbd8  b.cs 0x710363dbf0
710363dbdc  ldr x23,[sp, #0x8]
710363dbe0  lsl w8,w20,#0x1
710363dbe4  strb w8,[sp, #0x58]
710363dbe8  cbnz x20,0x710363dc74
710363dbec  b 0x710363dc84
710363dbf0  add x8,x20,#0x10
710363dbf4  and x22,x8,#-0x10
710363dbf8  sub x0,x29,#0x68
710363dbfc  mov w1,#0x10
710363dc00  mov x2,x22
710363dc04  bl 0x710392e1f0
710363dc08  cmp w0,#0xc
710363dc0c  b.ne 0x710363dc44
710363dc10  adrp x8,0x710593d000
710363dc14  ldr x0,[x8, #0x2b0]
710363dc18  cbz x0,0x710363dc44
710363dc1c  stur x22,[x29, #-0x60]
710363dc20  ldr x8,[x0]
710363dc24  ldr x8,[x8, #0x30]
710363dc28  sub x1,x29,#0x60
710363dc2c  blr x8
710363dc30  tbz w0,#0x0,0x710363dc44
710363dc34  sub x0,x29,#0x68
710363dc38  mov w1,#0x10
710363dc3c  mov x2,x22
710363dc40  bl 0x710392e1f0
710363dc44  adrp x8,0x71052a8000
710363dc48  ldr x8,[x8, #0xa78]
710363dc4c  cbz x8,0x710363dc60
710363dc50  ldur x2,[x29, #-0x68]
710363dc54  mov w1,#0x10
710363dc58  mov x0,x22
710363dc5c  bl 0x71039c19e0
710363dc60  ldur x23,[x29, #-0x68]
710363dc64  orr x8,x22,#0x1
710363dc68  str x8,[sp, #0x58]
710363dc6c  stp x20,x23,[sp, #0x60]
710363dc70  mov w22,#0x1a
710363dc74  mov x0,x23
710363dc78  mov x1,x21
710363dc7c  mov x2,x20
710363dc80  bl 0x71039c00e0
710363dc84  strb wzr,[x23, x20, LSL ]
710363dc88  adrp x21,0x7105238000
710363dc8c  add x21,x21,#0x2b0
710363dc90  mov w23,#0x2
710363dc94  ldr x0,[sp, #0x80]
710363dc98  add x1,sp,#0x38
710363dc9c  str w23,[sp, #0x70]
710363dca0  bl 0x710386cae0
710363dca4  ldrb w8,[sp, #0x58]
710363dca8  tbz w8,#0x0,0x710363dccc
710363dcac  adrp x8,0x71052a8000
710363dcb0  ldr x20,[sp, #0x68]
710363dcb4  ldr x8,[x8, #0xa70]
710363dcb8  cbz x8,0x710363dcc4
710363dcbc  mov x0,x20
710363dcc0  bl 0x71039c19b0
710363dcc4  mov x0,x20
710363dcc8  bl 0x710392eb40
710363dccc  ldr x24,[x24]
710363dcd0  cbnz x24,0x710363db00
710363dcd4  ldp x29,x30,[sp, #0x100]
710363dcd8  ldp x20,x19,[sp, #0xf0]
710363dcdc  ldp x22,x21,[sp, #0xe0]
710363dce0  ldp x24,x23,[sp, #0xd0]
710363dce4  ldp x26,x25,[sp, #0xc0]
710363dce8  ldp x28,x27,[sp, #0xb0]
710363dcec  add sp,sp,#0x110
710363dcf0  ret
710363dcf4  mov x0,x19
710363dcf8  bl 0x71039c1a00
710363dcfc  bl 0x71039c2650
