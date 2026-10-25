// addr:      710025db30
// offset:    0x25db30
// name:      FUN_710025db30
// mangled:   
// size:      440

710025db30  sub sp,sp,#0xb0
710025db34  stp x28,x27,[sp, #0x50]
710025db38  stp x26,x25,[sp, #0x60]
710025db3c  stp x24,x23,[sp, #0x70]
710025db40  stp x22,x21,[sp, #0x80]
710025db44  stp x20,x19,[sp, #0x90]
710025db48  stp x29,x30,[sp, #0xa0]
710025db4c  add x29,sp,#0xa0
710025db50  mov x21,x1
710025db54  mov x20,x1
710025db58  mov x19,x0
710025db5c  ldr x1,[x21, #0x8]!
710025db60  mov x0,x20
710025db64  bl 0x710025ef50
710025db68  str xzr,[x20, #0x10]
710025db6c  str x21,[x20]
710025db70  str xzr,[x21]
710025db74  ldp x11,x10,[x19, #0x10]
710025db78  ldr x9,[x11, #0x18]
710025db7c  sub x8,x9,x10
710025db80  cmp x8,#0x3
710025db84  b.hi 0x710025dbac
710025db88  mov w9,#0x1
710025db8c  mov w23,wzr
710025db90  strb w9,[x19, #0x8]
710025db94  cmp x8,w23, UXTW 
710025db98  b.cc 0x710025dbd0
710025db9c  cmp w23,#0x10, LSL #12
710025dba0  b.cc 0x710025dc00
710025dba4  add x19,x19,#0x8
710025dba8  b 0x710025dbd8
710025dbac  ldr x8,[x11, #0x10]
710025dbb0  ldr x11,[x11, #0x28]
710025dbb4  add x8,x8,x11
710025dbb8  ldr w23,[x8, x10, LSL #0x0]
710025dbbc  add x8,x10,#0x4
710025dbc0  str x8,[x19, #0x18]
710025dbc4  sub x8,x9,x8
710025dbc8  cmp x8,w23, UXTW 
710025dbcc  b.cs 0x710025db9c
710025dbd0  mov w8,#0x1
710025dbd4  strb w8,[x19, #0x8]!
710025dbd8  mov w8,#0x1
710025dbdc  strb w8,[x19]
710025dbe0  ldp x29,x30,[sp, #0xa0]
710025dbe4  ldp x20,x19,[sp, #0x90]
710025dbe8  ldp x22,x21,[sp, #0x80]
710025dbec  ldp x24,x23,[sp, #0x70]
710025dbf0  ldp x26,x25,[sp, #0x60]
710025dbf4  ldp x28,x27,[sp, #0x50]
710025dbf8  add sp,sp,#0xb0
710025dbfc  ret
710025dc00  cbz w23,0x710025dbe0
710025dc04  adrp x9,0x71052a4000
710025dc08  ldr x9,[x9, #0xd80]
710025dc0c  add x8,sp,#0x18
710025dc10  mov w24,wzr
710025dc14  add x28,x8,#0x8
710025dc18  adrp x21,0x710449f000
710025dc1c  add x21,x21,#0xdf0
710025dc20  mov x27,x9
710025dc24  add x25,x9,#0x10
710025dc28  mov w8,#0x10
710025dc2c  add x1,sp,#0x18
710025dc30  mov x0,x19
710025dc34  stp xzr,x25,[sp, #0x10]
710025dc38  strb wzr,[sp, #0x20]
710025dc3c  stp x28,x8,[sp, #0x30]
710025dc40  stp xzr,xzr,[sp]
710025dc44  bl 0x7100228650
710025dc48  mov x1,sp
710025dc4c  mov x0,x19
710025dc50  bl 0x71002607b0
710025dc54  add x8,sp,#0x18
710025dc58  add x1,sp,#0x18
710025dc5c  add x3,sp,#0x48
710025dc60  add x4,sp,#0x40
710025dc64  mov x0,x20
710025dc68  str x8,[sp, #0x48]
710025dc6c  mov x2,x21
710025dc70  bl 0x7100260b60
710025dc74  add x0,x0,#0x48
710025dc78  mov x8,sp
710025dc7c  cmp x0,x8
710025dc80  b.eq 0x710025dc8c
710025dc84  ldp x1,x2,[sp]
710025dc88  bl 0x710025eff0
710025dc8c  ldr x26,[sp]
710025dc90  cbz x26,0x710025dcc8
710025dc94  ldr x22,[sp, #0x8]
710025dc98  cmp x22,x26
710025dc9c  b.eq 0x710025dcbc
710025dca0  sub x22,x22,#0x10
710025dca4  mov x0,x22
710025dca8  bl 0x71001b78a0
710025dcac  cmp x26,x22
710025dcb0  b.ne 0x710025dca0
710025dcb4  ldr x0,[sp]
710025dcb8  b 0x710025dcc0
710025dcbc  mov x0,x26
710025dcc0  str x26,[sp, #0x8]
710025dcc4  bl 0x71001b1870
710025dcc8  add x8,x27,#0x10
710025dccc  add x0,sp,#0x18
710025dcd0  str x8,[sp, #0x18]
710025dcd4  bl 0x71001b4910
710025dcd8  add w24,w24,#0x1
710025dcdc  cmp w24,w23
710025dce0  b.ne 0x710025dc28
710025dce4  b 0x710025dbe0
