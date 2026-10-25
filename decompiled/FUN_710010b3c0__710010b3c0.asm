// addr:      710010b3c0
// offset:    0x10b3c0
// name:      FUN_710010b3c0
// mangled:   
// size:      148

710010b3c0  sub sp,sp,#0x40
710010b3c4  stp x20,x19,[sp, #0x20]
710010b3c8  stp x29,x30,[sp, #0x30]
710010b3cc  add x29,sp,#0x30
710010b3d0  mov x19,x0
710010b3d4  ldr x0,[x0, #0x90]
710010b3d8  ldr x2,[x19, #0xa0]
710010b3dc  ldp w3,w4,[x19, #0xa8]
710010b3e0  add x1,x19,#0x60
710010b3e4  add x8,sp,#0x10
710010b3e8  bl 0x71000e9660
710010b3ec  ldr w8,[sp, #0x10]
710010b3f0  cbz w8,0x710010b428
710010b3f4  ldr x20,[x19, #0x58]
710010b3f8  mov x0,sp
710010b3fc  add x1,sp,#0x10
710010b400  bl 0x71000bce50
710010b404  mov x1,sp
710010b408  mov x0,x20
710010b40c  bl 0x71000b41f0
710010b410  str xzr,[x19, #0x58]
710010b414  mov w0,#0x1
710010b418  ldp x29,x30,[sp, #0x30]
710010b41c  ldp x20,x19,[sp, #0x20]
710010b420  add sp,sp,#0x40
710010b424  ret
710010b428  adrp x8,0x71052a5000
710010b42c  ldr x8,[x8, #0x660]
710010b430  adrp x9,0x71042d5000
710010b434  add x9,x9,#0x54a
710010b438  mov w0,#0x5
710010b43c  str x9,[x19, #0x40]
710010b440  stp x8,xzr,[x19, #0x30]
710010b444  ldp x29,x30,[sp, #0x30]
710010b448  ldp x20,x19,[sp, #0x20]
710010b44c  add sp,sp,#0x40
710010b450  ret
