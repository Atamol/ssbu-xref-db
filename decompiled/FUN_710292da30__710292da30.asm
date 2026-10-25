// addr:      710292da30
// offset:    0x292da30
// name:      FUN_710292da30
// mangled:   
// size:      468

710292da30  stp x28,x27,[sp, #-0x60]!
710292da34  stp x26,x25,[sp, #0x10]
710292da38  stp x24,x23,[sp, #0x20]
710292da3c  stp x22,x21,[sp, #0x30]
710292da40  stp x20,x19,[sp, #0x40]
710292da44  stp x29,x30,[sp, #0x50]
710292da48  add x29,sp,#0x50
710292da4c  ldr x8,[x0]
710292da50  ldr x8,[x8, #0x30]
710292da54  mov w20,w1
710292da58  mov x19,x0
710292da5c  blr x8
710292da60  tbz w0,#0x0,0x710292da8c
710292da64  ldr x8,[x19, #0x8]
710292da68  ldr x9,[x8, #0x300]
710292da6c  ldr x8,[x9, #0x48]
710292da70  ldr x8,[x8, w20, UXTW #0x3]
710292da74  ldr x0,[x9, #0x60]
710292da78  add x10,x8,#0x8
710292da7c  cmp x0,x10
710292da80  b.eq 0x710292da8c
710292da84  ldp x1,x2,[x8, #0x8]
710292da88  bl 0x7102616cf0
710292da8c  ldr x8,[x19, #0x8]
710292da90  ldr x0,[x8, #0x300]
710292da94  mov w1,w20
710292da98  bl 0x710262c200
710292da9c  mov x0,x19
710292daa0  mov w1,w20
710292daa4  bl 0x7102926160
710292daa8  adrp x8,0x7105314000
710292daac  add x8,x8,#0x4d8
710292dab0  ldarb w8,[x8]
710292dab4  tbz w8,#0x0,0x710292dbc4
710292dab8  adrp x8,0x71052c5000
710292dabc  ldrb w8,[x8, #0x1ba]
710292dac0  cbnz w8,0x710292dba8
710292dac4  ldr x8,[x19, #0x8]
710292dac8  ldr x8,[x8, #0x300]
710292dacc  ldr x8,[x8, #0x18]
710292dad0  ldp x23,x24,[x8]
710292dad4  cmp x23,x24
710292dad8  b.eq 0x710292dba8
710292dadc  mov x25,#0xdf99
710292dae0  movk x25,#0xb569, LSL #16
710292dae4  mov x26,#0xc3c
710292dae8  movk x26,#0x7e35, LSL #16
710292daec  mov x27,#0x7e92
710292daf0  movk x27,#0xf8a1, LSL #16
710292daf4  mov x28,#0xad37
710292daf8  movk x28,#0x33fd, LSL #16
710292dafc  movk x25,#0x7, LSL #32
710292db00  adrp x19,0x71043bc000
710292db04  add x19,x19,#0xb6c
710292db08  movk x26,#0x7, LSL #32
710292db0c  adrp x20,0x7104328000
710292db10  add x20,x20,#0x27c
710292db14  movk x27,#0x7, LSL #32
710292db18  adrp x21,0x710439b000
710292db1c  add x21,x21,#0x555
710292db20  movk x28,#0x7, LSL #32
710292db24  adrp x22,0x7104306000
710292db28  add x22,x22,#0x8bd
710292db2c  ldr x8,[x23]
710292db30  ldr x9,[x8, #0xa0]
710292db34  and x10,x9,#0xffffffffff
710292db38  cmp x10,x25
710292db3c  b.ne 0x710292db50
710292db40  ldr x8,[x8, #0x130]
710292db44  ldp x0,x1,[x8]
710292db48  mov x2,x19
710292db4c  b 0x710292db98
710292db50  cmp x10,x26
710292db54  b.ne 0x710292db68
710292db58  ldr x8,[x8, #0x130]
710292db5c  ldp x0,x1,[x8]
710292db60  mov x2,x20
710292db64  b 0x710292db98
710292db68  and x9,x9,#0xffffffffff
710292db6c  cmp x9,x27
710292db70  b.ne 0x710292db84
710292db74  ldr x8,[x8, #0x130]
710292db78  ldp x0,x1,[x8]
710292db7c  mov x2,x21
710292db80  b 0x710292db98
710292db84  cmp x9,x28
710292db88  b.ne 0x710292db9c
710292db8c  ldr x8,[x8, #0x130]
710292db90  ldp x0,x1,[x8]
710292db94  mov x2,x22
710292db98  bl 0x71025f55b0
710292db9c  add x23,x23,#0x8
710292dba0  cmp x24,x23
710292dba4  b.ne 0x710292db2c
710292dba8  ldp x29,x30,[sp, #0x50]
710292dbac  ldp x20,x19,[sp, #0x40]
710292dbb0  ldp x22,x21,[sp, #0x30]
710292dbb4  ldp x24,x23,[sp, #0x20]
710292dbb8  ldp x26,x25,[sp, #0x10]
710292dbbc  ldp x28,x27,[sp], #0x60
710292dbc0  ret
710292dbc4  adrp x0,0x7105314000
710292dbc8  add x0,x0,#0x4d8
710292dbcc  bl 0x71039c06b0
710292dbd0  cbz w0,0x710292dab8
710292dbd4  bl 0x7101764000
710292dbd8  adrp x0,0x7101763000
710292dbdc  add x0,x0,#0xc40
710292dbe0  adrp x1,0x71052c5000
710292dbe4  add x1,x1,#0x180
710292dbe8  adrp x2,0x7104f17000
710292dbec  add x2,x2,#0x0
710292dbf0  bl 0x71000001c0
710292dbf4  adrp x0,0x7105314000
710292dbf8  add x0,x0,#0x4d8
710292dbfc  bl 0x71039c06c0
710292dc00  b 0x710292dab8
