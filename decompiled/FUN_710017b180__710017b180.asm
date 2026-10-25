// addr:      710017b180
// offset:    0x17b180
// name:      FUN_710017b180
// mangled:   
// size:      224

710017b180  sub sp,sp,#0x40
710017b184  stp x20,x19,[sp, #0x20]
710017b188  stp x29,x30,[sp, #0x30]
710017b18c  add x29,sp,#0x30
710017b190  ldr x8,[x0, #0x58]
710017b194  ldr w8,[x8]
710017b198  mov x19,x0
710017b19c  cmp w8,#0x4
710017b1a0  b.ne 0x710017b1c8
710017b1a4  ldr x8,[x19]
710017b1a8  ldr x8,[x8, #0x30]
710017b1ac  mov x0,x19
710017b1b0  blr x8
710017b1b4  mov w0,#0x1
710017b1b8  ldp x29,x30,[sp, #0x30]
710017b1bc  ldp x20,x19,[sp, #0x20]
710017b1c0  add sp,sp,#0x40
710017b1c4  ret
710017b1c8  ldr x0,[x19, #0x98]
710017b1cc  ldr x8,[x0]
710017b1d0  ldr x9,[x8, #0x28]
710017b1d4  add x1,x19,#0x68
710017b1d8  add x8,sp,#0x10
710017b1dc  blr x9
710017b1e0  ldr w8,[sp, #0x10]
710017b1e4  cbz w8,0x710017b220
710017b1e8  ldr x20,[x19, #0x58]
710017b1ec  cbz x20,0x710017b24c
710017b1f0  mov x0,sp
710017b1f4  add x1,sp,#0x10
710017b1f8  bl 0x71000bce50
710017b1fc  mov x1,sp
710017b200  mov x0,x20
710017b204  bl 0x71000b41f0
710017b208  str xzr,[x19, #0x58]
710017b20c  mov w0,#0x1
710017b210  ldp x29,x30,[sp, #0x30]
710017b214  ldp x20,x19,[sp, #0x20]
710017b218  add sp,sp,#0x40
710017b21c  ret
710017b220  adrp x8,0x71052a6000
710017b224  ldr x8,[x8, #0x340]
710017b228  mov x0,xzr
710017b22c  stp x8,xzr,[x19, #0x30]
710017b230  adrp x8,0x7104432000
710017b234  add x8,x8,#0x40a
710017b238  str x8,[x19, #0x40]
710017b23c  ldp x29,x30,[sp, #0x30]
710017b240  ldp x20,x19,[sp, #0x20]
710017b244  add sp,sp,#0x40
710017b248  ret
710017b24c  mov w0,#0x1
710017b250  ldp x29,x30,[sp, #0x30]
710017b254  ldp x20,x19,[sp, #0x20]
710017b258  add sp,sp,#0x40
710017b25c  ret
