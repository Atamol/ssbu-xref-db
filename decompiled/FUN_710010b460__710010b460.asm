// addr:      710010b460
// offset:    0x10b460
// name:      FUN_710010b460
// mangled:   
// size:      148

710010b460  sub sp,sp,#0x40
710010b464  stp x20,x19,[sp, #0x20]
710010b468  stp x29,x30,[sp, #0x30]
710010b46c  add x29,sp,#0x30
710010b470  mov x19,x0
710010b474  ldr x0,[x0, #0x90]
710010b478  ldr x2,[x19, #0xa0]
710010b47c  ldp w3,w4,[x19, #0xa8]
710010b480  add x1,x19,#0x60
710010b484  add x8,sp,#0x10
710010b488  bl 0x71000e8980
710010b48c  ldr w8,[sp, #0x10]
710010b490  cbz w8,0x710010b4c8
710010b494  ldr x20,[x19, #0x58]
710010b498  mov x0,sp
710010b49c  add x1,sp,#0x10
710010b4a0  bl 0x71000bce50
710010b4a4  mov x1,sp
710010b4a8  mov x0,x20
710010b4ac  bl 0x71000b41f0
710010b4b0  str xzr,[x19, #0x58]
710010b4b4  mov w0,#0x1
710010b4b8  ldp x29,x30,[sp, #0x30]
710010b4bc  ldp x20,x19,[sp, #0x20]
710010b4c0  add sp,sp,#0x40
710010b4c4  ret
710010b4c8  adrp x8,0x71052a5000
710010b4cc  ldr x8,[x8, #0x668]
710010b4d0  adrp x9,0x710435a000
710010b4d4  add x9,x9,#0x6db
710010b4d8  mov w0,#0x5
710010b4dc  str x9,[x19, #0x40]
710010b4e0  stp x8,xzr,[x19, #0x30]
710010b4e4  ldp x29,x30,[sp, #0x30]
710010b4e8  ldp x20,x19,[sp, #0x20]
710010b4ec  add sp,sp,#0x40
710010b4f0  ret
