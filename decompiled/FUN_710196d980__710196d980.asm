// addr:      710196d980
// offset:    0x196d980
// name:      FUN_710196d980
// mangled:   
// size:      912

710196d980  stp x22,x21,[sp, #-0x30]!
710196d984  stp x20,x19,[sp, #0x10]
710196d988  stp x29,x30,[sp, #0x20]
710196d98c  add x29,sp,#0x20
710196d990  ldr x8,[x0, #0xf8]
710196d994  ldr x8,[x8, #0x80]
710196d998  ldrb w9,[x8, #0x11c]
710196d99c  mov x19,x0
710196d9a0  cbz w9,0x710196db48
710196d9a4  strb wzr,[x8, #0x11c]
710196d9a8  ldr x9,[x19, #0xf8]
710196d9ac  adrp x8,0x7105329000
710196d9b0  ldr x8,[x8, #0xd78]
710196d9b4  ldr x9,[x9, #0x80]
710196d9b8  ldr w10,[x9, #0x110]
710196d9bc  ldr x8,[x8, #0x8]
710196d9c0  cmp w10,#0x1
710196d9c4  b.eq 0x710196d9dc
710196d9c8  cbnz w10,0x710196d9e8
710196d9cc  ldr x9,[x9, #0x100]
710196d9d0  ldr w9,[x9, #0x254]
710196d9d4  str w9,[x8, #0x750]
710196d9d8  b 0x710196d9e8
710196d9dc  ldr x9,[x9, #0x108]
710196d9e0  ldr w9,[x9, #0x254]
710196d9e4  str w9,[x8, #0x708]
710196d9e8  ldr w9,[x19, #0xd0]
710196d9ec  cmp w9,#0x3
710196d9f0  b.ne 0x710196db48
710196d9f4  ldr x9,[x19, #0xf0]
710196d9f8  ldr x9,[x9, #0x80]
710196d9fc  ldr x20,[x9, #0x40]
710196da00  cbz x20,0x710196db48
710196da04  ldrsw x22,[x8, #0x708]
710196da08  ldr x8,[x20]
710196da0c  str wzr,[x8, #0x10]
710196da10  ldr x21,[x8]
710196da14  ldr x8,[x21, #0x10]
710196da18  mov w9,#0x48
710196da1c  str x21,[x8]
710196da20  str w9,[x8, #0x8]
710196da24  ldp x9,x8,[x21, #0x10]
710196da28  add x10,x9,#0x10
710196da2c  str x10,[x21, #0x10]
710196da30  ldr x10,[x8, #0xc8]
710196da34  str x9,[x21, #0x10]
710196da38  cmp x10,x21
710196da3c  b.eq 0x710196da60
710196da40  adrp x1,0x71042d6000
710196da44  add x1,x1,#0xa75
710196da48  mov x0,x21
710196da4c  bl 0x71038f4b20
710196da50  orr w1,wzr,#0xfffffffe
710196da54  mov x0,x21
710196da58  bl 0x71038f4fc0
710196da5c  b 0x710196dad8
710196da60  ldr x8,[x8, #0x40]
710196da64  ldr w9,[x8, #0xc]
710196da68  cmp w9,#0x2
710196da6c  b.cc 0x710196da7c
710196da70  ldr x8,[x8, #0x10]
710196da74  add x1,x8,#0x10
710196da78  b 0x710196dac8
710196da7c  ldr x9,[x8, #0x18]
710196da80  ldrb w8,[x8, #0xb]
710196da84  mov w10,#0xffffffff
710196da88  lsl x8,x10,x8
710196da8c  mvn w8,w8
710196da90  and x8,x8,#0x2
710196da94  add x1,x9,x8, LSL #0x5
710196da98  adrp x8,0x7104862000
710196da9c  add x8,x8,#0x960
710196daa0  ldr w9,[x1, #0x18]
710196daa4  cmp w9,#0x13
710196daa8  b.ne 0x710196dab8
710196daac  ldr x9,[x1, #0x10]
710196dab0  cmp x9,#0x2
710196dab4  b.eq 0x710196dac8
710196dab8  ldrsw x9,[x1, #0x1c]
710196dabc  add x1,x1,x9, LSL #0x5
710196dac0  cbnz w9,0x710196daa0
710196dac4  mov x1,x8
710196dac8  adrp x2,0x71042d6000
710196dacc  add x2,x2,#0xa75
710196dad0  mov x0,x21
710196dad4  bl 0x71038f4d40
710196dad8  ldr x9,[x21, #0x10]
710196dadc  sub x8,x9,#0x10
710196dae0  adrp x10,0x7104862000
710196dae4  add x10,x10,#0x960
710196dae8  cmp x8,x10
710196daec  b.eq 0x710196db44
710196daf0  ldur w9,[x9, #-0x8]
710196daf4  and w9,w9,#0xf
710196daf8  cmp w9,#0x6
710196dafc  b.ne 0x710196db44
710196db00  ldr x8,[x20]
710196db04  ldr x8,[x8]
710196db08  ldr x9,[x8, #0x10]
710196db0c  mov w10,#0x13
710196db10  str w10,[x9, #0x8]
710196db14  str x22,[x9]
710196db18  ldr x9,[x8, #0x10]
710196db1c  add x9,x9,#0x10
710196db20  str x9,[x8, #0x10]
710196db24  ldr x8,[x20]
710196db28  ldr w9,[x8, #0x10]
710196db2c  add w9,w9,#0x1
710196db30  mov x0,x20
710196db34  mov w1,wzr
710196db38  str w9,[x8, #0x10]
710196db3c  bl 0x7103377130
710196db40  b 0x710196db48
710196db44  str x8,[x21, #0x10]
710196db48  ldr x8,[x19, #0xf8]
710196db4c  ldr x0,[x8, #0x80]
710196db50  ldr x8,[x0]
710196db54  ldr x8,[x8, #0x28]
710196db58  blr x8
710196db5c  tbnz w0,#0x0,0x710196dcc0
710196db60  adrp x8,0x7105314000
710196db64  add x8,x8,#0x4d8
710196db68  ldarb w8,[x8]
710196db6c  tbz w8,#0x0,0x710196dcd0
710196db70  ldr x0,[x19, #0xf8]
710196db74  ldr x8,[x0]
710196db78  ldr x8,[x8, #0x20]
710196db7c  blr x8
710196db80  cmn w0,#0x1
710196db84  b.eq 0x710196dc2c
710196db88  adrp x8,0x7105307000
710196db8c  str w0,[x8, #0xb68]
710196db90  adrp x8,0x7105339000
710196db94  ldr x8,[x8, #0x8b0]
710196db98  ldrb w8,[x8, #0x8]
710196db9c  cmp w0,#0x9
710196dba0  ccmp w8,#0x0,#0x4,ls
710196dba4  b.ne 0x710196dbb4
710196dba8  adrp x8,0x7105339000
710196dbac  add x8,x8,#0x830
710196dbb0  b 0x710196dbc4
710196dbb4  adrp x8,0x7105339000
710196dbb8  add x8,x8,#0x860
710196dbbc  ldr x8,[x8, w0, SXTW #0x3]
710196dbc0  cbz x8,0x710196dbec
710196dbc4  ldr x8,[x8, #0x10]
710196dbc8  ldr w8,[x8, #0x9c]
710196dbcc  sub w8,w8,#0x1
710196dbd0  cmp w8,#0x6
710196dbd4  b.hi 0x710196dbec
710196dbd8  adrp x9,0x7104753000
710196dbdc  add x9,x9,#0xde0
710196dbe0  ldr w8,[x9, w8, SXTW #0x2]
710196dbe4  adrp x9,0x7105307000
710196dbe8  str w8,[x9, #0xb6c]
710196dbec  adrp x8,0x710593b000
710196dbf0  ldr x8,[x8, #0xa90]
710196dbf4  cbz x8,0x710196dc08
710196dbf8  adrp x9,0x7105307000
710196dbfc  ldr w9,[x9, #0xb6c]
710196dc00  ldr x8,[x8]
710196dc04  str w9,[x8, #0x3ac]
710196dc08  adrp x8,0x710532f000
710196dc0c  ldr x8,[x8, #0x7f0]
710196dc10  cbz x8,0x710196dc2c
710196dc14  ldr x8,[x8, #0x8]
710196dc18  ldr x8,[x8, #0x8]
710196dc1c  adrp x9,0x7105307000
710196dc20  ldr w1,[x9, #0xb6c]
710196dc24  ldr x0,[x8, #0x80]
710196dc28  bl 0x7101afe3e0
710196dc2c  ldr x20,[x19, #0xf8]
710196dc30  ldr x21,[x20, #0x80]
710196dc34  ldr x8,[x21, #0xf8]
710196dc38  ldr x0,[x8]
710196dc3c  bl 0x7103775fa0
710196dc40  adrp x8,0x710593b000
710196dc44  ldr x8,[x8, #0x988]
710196dc48  ldr x8,[x8, #0x8]
710196dc4c  ldr w9,[x21, #0x14]
710196dc50  mov w22,#0x1
710196dc54  lsl w9,w22,w9
710196dc58  ldr w10,[x8]
710196dc5c  bic w9,w10,w9
710196dc60  str w9,[x8]
710196dc64  add x0,x21,#0x20
710196dc68  mov w8,#0xffffffff
710196dc6c  str wzr,[x21, #0xe4]
710196dc70  stp xzr,xzr,[x21, #0x28]
710196dc74  stur xzr,[x21, #0xdc]
710196dc78  stur xzr,[x21, #0xd4]
710196dc7c  stur xzr,[x21, #0xcc]
710196dc80  stur xzr,[x21, #0xc4]
710196dc84  stur xzr,[x21, #0xbc]
710196dc88  stur xzr,[x21, #0xb4]
710196dc8c  stur xzr,[x21, #0xac]
710196dc90  stur xzr,[x21, #0xa4]
710196dc94  stur xzr,[x21, #0x9c]
710196dc98  strb wzr,[x21, #0xf4]
710196dc9c  str wzr,[x21, #0x98]
710196dca0  str x8,[x21, #0xe8]
710196dca4  str w8,[x21, #0xf0]
710196dca8  bl 0x7101ebb640
710196dcac  strb w22,[x20, #0x70]
710196dcb0  ldr w8,[x19, #0xc4]
710196dcb4  subs w8,w8,#0x1
710196dcb8  b.lt 0x710196dcc0
710196dcbc  str w8,[x19, #0xc4]
710196dcc0  ldp x29,x30,[sp, #0x20]
710196dcc4  ldp x20,x19,[sp, #0x10]
710196dcc8  ldp x22,x21,[sp], #0x30
710196dccc  ret
710196dcd0  adrp x0,0x7105314000
710196dcd4  add x0,x0,#0x4d8
710196dcd8  bl 0x71039c06b0
710196dcdc  cbz w0,0x710196db70
710196dce0  bl 0x7101764000
710196dce4  adrp x0,0x7101763000
710196dce8  add x0,x0,#0xc40
710196dcec  adrp x1,0x71052c5000
710196dcf0  add x1,x1,#0x180
710196dcf4  adrp x2,0x7104f17000
710196dcf8  add x2,x2,#0x0
710196dcfc  bl 0x71000001c0
710196dd00  adrp x0,0x7105314000
710196dd04  add x0,x0,#0x4d8
710196dd08  bl 0x71039c06c0
710196dd0c  b 0x710196db70
