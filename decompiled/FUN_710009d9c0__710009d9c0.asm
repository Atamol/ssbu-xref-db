// addr:      710009d9c0
// offset:    0x9d9c0
// name:      FUN_710009d9c0
// mangled:   
// size:      552

710009d9c0  str x25,[sp, #-0x50]!
710009d9c4  stp x24,x23,[sp, #0x10]
710009d9c8  stp x22,x21,[sp, #0x20]
710009d9cc  stp x20,x19,[sp, #0x30]
710009d9d0  stp x29,x30,[sp, #0x40]
710009d9d4  add x29,sp,#0x40
710009d9d8  ldr w8,[x0, #0x1c]
710009d9dc  mov x21,x1
710009d9e0  cmp w8,#0x1
710009d9e4  b.lt 0x710009da28
710009d9e8  ldr x22,[x0, #0x30]
710009d9ec  ldr w11,[x0, #0x28]
710009d9f0  mov x19,x0
710009d9f4  mov w9,wzr
710009d9f8  mov w10,#0x90
710009d9fc  smaddl x24,w11,w10,x22
710009da00  sxtw x23,w11
710009da04  ldrb w11,[x24, #0x84]!
710009da08  cbz w11,0x710009da60
710009da0c  add w11,w23,#0x1
710009da10  cmp w11,w8
710009da14  add w9,w9,#0x1
710009da18  csinc w11,wzr,w23,ge
710009da1c  cmp w9,w8
710009da20  str w11,[x19, #0x28]
710009da24  b.lt 0x710009d9fc
710009da28  mov w1,#0x2000
710009da2c  mov x0,x21
710009da30  bl 0x7100093650
710009da34  adrp x0,0x71043df000
710009da38  add x0,x0,#0x14a
710009da3c  bl 0x7100093660
710009da40  mov x20,xzr
710009da44  mov x0,x20
710009da48  ldp x29,x30,[sp, #0x40]
710009da4c  ldp x20,x19,[sp, #0x30]
710009da50  ldp x22,x21,[sp, #0x20]
710009da54  ldp x24,x23,[sp, #0x10]
710009da58  ldr x25,[sp], #0x50
710009da5c  ret
710009da60  mov w8,#0x90
710009da64  madd x20,x23,x8,x22
710009da68  ldr x8,[x21, #0x238]
710009da6c  ldr x8,[x8, #0x338]
710009da70  ldr s0,[x8, #0x14]
710009da74  ldr x8,[x21, #0x828]
710009da78  ldr x8,[x8, #0x10]
710009da7c  fcvtzu w25,s0
710009da80  add x0,x21,#0x828
710009da84  lsl x1,x25,#0x6
710009da88  mov w2,#0x80
710009da8c  blr x8
710009da90  mov x8,x20
710009da94  str x0,[x8, #0x50]!
710009da98  cbz x0,0x710009dac0
710009da9c  subs w9,w25,#0x1
710009daa0  b.eq 0x710009db98
710009daa4  mov w13,w9
710009daa8  and x10,x13,#0x1
710009daac  cmp w9,#0x1
710009dab0  b.ne 0x710009dad8
710009dab4  mov x11,xzr
710009dab8  cbnz x10,0x710009db18
710009dabc  b 0x710009db28
710009dac0  mov w1,#0x4000
710009dac4  mov x0,x21
710009dac8  bl 0x7100093650
710009dacc  adrp x0,0x71042f6000
710009dad0  add x0,x0,#0xdbc
710009dad4  b 0x710009da3c
710009dad8  mov x12,xzr
710009dadc  mov x11,xzr
710009dae0  sub x13,x13,x10
710009dae4  add x14,x0,x12
710009dae8  add x15,x14,#0x40
710009daec  str x15,[x14, #0x30]
710009daf0  ldr x14,[x8]
710009daf4  add x14,x14,x12
710009daf8  add x12,x12,#0x80
710009dafc  add x15,x14,#0x80
710009db00  str x15,[x14, #0x70]
710009db04  ldr x0,[x8]
710009db08  add x11,x11,#0x2
710009db0c  cmp x13,x11
710009db10  b.ne 0x710009dae4
710009db14  cbz x10,0x710009db28
710009db18  add x10,x0,x11, LSL #0x6
710009db1c  add x11,x10,#0x40
710009db20  str x11,[x10, #0x30]
710009db24  ldr x0,[x8]
710009db28  cmp w25,#0x2
710009db2c  b.cc 0x710009db98
710009db30  mvn w10,w25
710009db34  and w10,w10,#0x1
710009db38  cmp w25,#0x2
710009db3c  b.ne 0x710009db4c
710009db40  mov w11,#0x1
710009db44  cbnz w10,0x710009db88
710009db48  b 0x710009db98
710009db4c  mov x12,xzr
710009db50  sub x13,x25,x10
710009db54  mov w11,#0x1
710009db58  add x14,x0,x12
710009db5c  str x14,[x14, #0x78]
710009db60  ldr x14,[x8]
710009db64  add x14,x14,x12
710009db68  add x12,x12,#0x80
710009db6c  add x15,x14,#0x40
710009db70  str x15,[x14, #0xb8]
710009db74  ldr x0,[x8]
710009db78  add x11,x11,#0x2
710009db7c  cmp x13,x11
710009db80  b.ne 0x710009db58
710009db84  cbz w10,0x710009db98
710009db88  add x10,x0,x11, LSL #0x6
710009db8c  sub x11,x10,#0x40
710009db90  str x11,[x10, #0x38]
710009db94  ldr x0,[x8]
710009db98  mov w9,w9
710009db9c  lsl x9,x9,#0x6
710009dba0  add x10,x0,x9
710009dba4  str x0,[x10, #0x30]
710009dba8  ldr x10,[x8]
710009dbac  add x9,x10,x9
710009dbb0  str x9,[x10, #0x38]
710009dbb4  mov w9,#0x90
710009dbb8  madd x9,x23,x9,x22
710009dbbc  ldr x8,[x8]
710009dbc0  stp x8,x8,[x9, #0x58]
710009dbc4  mov w8,#0x1
710009dbc8  strb w8,[x24]
710009dbcc  str wzr,[x9, #0x70]
710009dbd0  str xzr,[x9, #0x78]
710009dbd4  str xzr,[x9, #0x68]
710009dbd8  ldr w8,[x19, #0x2c]
710009dbdc  add w8,w8,#0x1
710009dbe0  str w8,[x19, #0x2c]
710009dbe4  b 0x710009da44
