// addr:      710022da00
// offset:    0x22da00
// name:      FUN_710022da00
// mangled:   
// size:      496

710022da00  str x23,[sp, #-0x40]!
710022da04  stp x22,x21,[sp, #0x10]
710022da08  stp x20,x19,[sp, #0x20]
710022da0c  stp x29,x30,[sp, #0x30]
710022da10  add x29,sp,#0x30
710022da14  adrp x8,0x71052a4000
710022da18  ldr x8,[x8, #0xda8]
710022da1c  adrp x22,0x71052a4000
710022da20  ldrb w8,[x8]
710022da24  ldr x22,[x22, #0xdb0]
710022da28  mov x20,x1
710022da2c  mov x19,x0
710022da30  add x21,x22,#0x28
710022da34  cbz w8,0x710022da70
710022da38  adrp x8,0x71052a4000
710022da3c  ldr x8,[x8, #0xdb8]
710022da40  ldr x0,[x8]
710022da44  bl 0x7101717960
710022da48  ldr w8,[x0]
710022da4c  cbz w8,0x710022da70
710022da50  ldr x10,[x22, #0xa0]
710022da54  ldp x9,x10,[x10]
710022da58  sub x10,x10,x9
710022da5c  asr x10,x10,#0x3
710022da60  cmp x10,x8
710022da64  b.ls 0x710022da88
710022da68  ldr x8,[x9, x8, LSL #0x3]
710022da6c  add x21,x8,#0x20
710022da70  ldr x8,[x21]
710022da74  cbz x8,0x710022daa0
710022da78  ldr x8,[x8, #0x10]
710022da7c  cbz x8,0x710022daa0
710022da80  ldr x21,[x8, #0x10]
710022da84  b 0x710022daa4
710022da88  adrp x0,0x71042c4000
710022da8c  add x0,x0,#0x35f
710022da90  mov w1,#0x47
710022da94  orr w2,wzr,#0xe0000003
710022da98  mov w3,wzr
710022da9c  bl 0x71001b1300
710022daa0  mov x21,xzr
710022daa4  ldr x8,[x21, #0x78]!
710022daa8  ldr x8,[x8, #0x10]
710022daac  mov x0,x21
710022dab0  blr x8
710022dab4  mov x23,x19
710022dab8  ldr x8,[x23, #0x90]!
710022dabc  cbz x8,0x710022db54
710022dac0  mov x9,x23
710022dac4  mov x10,x8
710022dac8  ldr x11,[x10, #0x20]
710022dacc  cmp x11,x20
710022dad0  cset w11,cc
710022dad4  csel x9,x9,x10,cc
710022dad8  ldr x10,[x10, w11, UXTW #0x3]
710022dadc  cbnz x10,0x710022dac8
710022dae0  cmp x9,x23
710022dae4  b.eq 0x710022daf4
710022dae8  ldr x9,[x9, #0x20]
710022daec  cmp x9,x20
710022daf0  b.ls 0x710022db64
710022daf4  add x22,x19,#0x90
710022daf8  ldr x9,[x8, #0x20]
710022dafc  cmp x9,x20
710022db00  b.hi 0x710022db24
710022db04  b 0x710022db40
710022db08  mov x22,x8
710022db0c  ldr x9,[x22, #0x8]!
710022db10  cbz x9,0x710022db44
710022db14  mov x8,x9
710022db18  ldr x9,[x8, #0x20]
710022db1c  cmp x9,x20
710022db20  b.ls 0x710022db40
710022db24  ldr x9,[x8]
710022db28  cbz x9,0x710022db6c
710022db2c  mov x22,x8
710022db30  mov x8,x9
710022db34  ldr x9,[x8, #0x20]
710022db38  cmp x9,x20
710022db3c  b.hi 0x710022db24
710022db40  b.cc 0x710022db08
710022db44  mov x23,x8
710022db48  ldr x8,[x22]
710022db4c  cbnz x8,0x710022dbc4
710022db50  b 0x710022db7c
710022db54  mov x22,x23
710022db58  ldr x8,[x22]
710022db5c  cbnz x8,0x710022dbc4
710022db60  b 0x710022db7c
710022db64  mov w19,wzr
710022db68  b 0x710022dbc8
710022db6c  mov x23,x8
710022db70  mov x22,x8
710022db74  ldr x8,[x22]
710022db78  cbnz x8,0x710022dbc4
710022db7c  mov w0,#0x28
710022db80  bl 0x71001b1820
710022db84  str x20,[x0, #0x20]
710022db88  stp xzr,xzr,[x0]
710022db8c  str x23,[x0, #0x10]
710022db90  str x0,[x22]
710022db94  ldr x8,[x19, #0x88]
710022db98  ldr x8,[x8]
710022db9c  cbz x8,0x710022dbac
710022dba0  str x8,[x19, #0x88]
710022dba4  ldr x1,[x22]
710022dba8  b 0x710022dbb0
710022dbac  mov x1,x0
710022dbb0  ldr x0,[x19, #0x90]
710022dbb4  bl 0x71003e59f0
710022dbb8  ldr x8,[x19, #0x98]
710022dbbc  add x8,x8,#0x1
710022dbc0  str x8,[x19, #0x98]
710022dbc4  mov w19,#0x1
710022dbc8  ldr x8,[x21]
710022dbcc  ldr x8,[x8, #0x20]
710022dbd0  mov x0,x21
710022dbd4  blr x8
710022dbd8  mov w0,w19
710022dbdc  ldp x29,x30,[sp, #0x30]
710022dbe0  ldp x20,x19,[sp, #0x20]
710022dbe4  ldp x22,x21,[sp, #0x10]
710022dbe8  ldr x23,[sp], #0x40
710022dbec  ret
