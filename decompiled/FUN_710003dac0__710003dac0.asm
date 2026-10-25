// addr:      710003dac0
// offset:    0x3dac0
// name:      FUN_710003dac0
// mangled:   
// size:      276

710003dac0  stp x22,x21,[sp, #-0x30]!
710003dac4  stp x20,x19,[sp, #0x10]
710003dac8  stp x29,x30,[sp, #0x20]
710003dacc  add x29,sp,#0x20
710003dad0  mov x22,x1
710003dad4  mov x20,x0
710003dad8  adrp x1,0x7104318000
710003dadc  add x1,x1,#0x4e
710003dae0  mov x0,x3
710003dae4  mov x21,x3
710003dae8  mov x19,x2
710003daec  bl 0x7100044b00
710003daf0  mov x2,x0
710003daf4  mov w3,#0x1
710003daf8  mov x0,x19
710003dafc  mov x1,x22
710003db00  bl 0x710004af10
710003db04  str x0,[x20, #0x50]
710003db08  ldr x8,[x0]
710003db0c  ldr x8,[x8, #0xe0]
710003db10  blr x8
710003db14  adrp x1,0x71043ef000
710003db18  add x1,x1,#0x98a
710003db1c  mov x0,x21
710003db20  bl 0x7100044b00
710003db24  mov x2,x0
710003db28  mov x0,x19
710003db2c  mov x1,x22
710003db30  mov w3,wzr
710003db34  bl 0x710004af10
710003db38  str x0,[x20, #0x58]
710003db3c  adrp x1,0x7104453000
710003db40  add x1,x1,#0xb4c
710003db44  mov x0,x21
710003db48  bl 0x7100044b00
710003db4c  cbz x0,0x710003db70
710003db50  ldrb w8,[x0]
710003db54  mov x2,x0
710003db58  cbz w8,0x710003db70
710003db5c  mov w3,#0x1
710003db60  mov x0,x19
710003db64  mov x1,x22
710003db68  bl 0x710004af10
710003db6c  str x0,[x20, #0x60]
710003db70  ldr x22,[x19, #0x18]
710003db74  adrp x1,0x71042b3000
710003db78  add x1,x1,#0x301
710003db7c  mov x0,x21
710003db80  bl 0x7100044a80
710003db84  ldr x8,[x22]
710003db88  ldr x8,[x8, #0x60]
710003db8c  mov x1,x0
710003db90  mov w2,#0x1
710003db94  mov x0,x22
710003db98  blr x8
710003db9c  str x0,[x20, #0x68]
710003dba0  ldr x8,[x19, #0x18]
710003dba4  ldr x9,[x8, #0x18]
710003dba8  cbz x9,0x710003dbb4
710003dbac  add x8,x8,#0xb0
710003dbb0  b 0x710003dbb8
710003dbb4  ldr x8,[x19, #0x30]
710003dbb8  str x8,[x20, #0x88]
710003dbbc  ldr x8,[x19, #0x18]
710003dbc0  str x8,[x20, #0x90]
710003dbc4  ldp x29,x30,[sp, #0x20]
710003dbc8  ldp x20,x19,[sp, #0x10]
710003dbcc  ldp x22,x21,[sp], #0x30
710003dbd0  ret
