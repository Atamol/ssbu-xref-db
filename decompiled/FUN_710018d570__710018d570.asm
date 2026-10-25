// addr:      710018d570
// offset:    0x18d570
// name:      FUN_710018d570
// mangled:   
// size:      100

710018d570  ldr w8,[x0, #0xc0]
710018d574  sub w8,w8,#0x2
710018d578  cmp w8,#0x2
710018d57c  b.hi 0x710018d5cc
710018d580  sub sp,sp,#0x30
710018d584  str x19,[sp, #0x10]
710018d588  stp x29,x30,[sp, #0x20]
710018d58c  add x29,sp,#0x20
710018d590  mov x19,x0
710018d594  add x1,x0,#0xc4
710018d598  mov x0,sp
710018d59c  bl 0x71000bce50
710018d5a0  adrp x8,0x71052a6000
710018d5a4  ldr x8,[x8, #0x5f8]
710018d5a8  mov x0,xzr
710018d5ac  stp x8,xzr,[x19, #0x30]
710018d5b0  adrp x8,0x71042a2000
710018d5b4  add x8,x8,#0x46d
710018d5b8  str x8,[x19, #0x40]
710018d5bc  ldr x19,[sp, #0x10]
710018d5c0  ldp x29,x30,[sp, #0x20]
710018d5c4  add sp,sp,#0x30
710018d5c8  ret
710018d5cc  mov w0,#0x5
710018d5d0  ret
