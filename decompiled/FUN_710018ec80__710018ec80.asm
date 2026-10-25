// addr:      710018ec80
// offset:    0x18ec80
// name:      FUN_710018ec80
// mangled:   
// size:      172

710018ec80  str x21,[sp, #-0x30]!
710018ec84  stp x20,x19,[sp, #0x10]
710018ec88  stp x29,x30,[sp, #0x20]
710018ec8c  add x29,sp,#0x20
710018ec90  ldrb w8,[x0, #0x78]
710018ec94  mov x19,x0
710018ec98  cbz w8,0x710018ed00
710018ec9c  adrp x8,0x71052a4000
710018eca0  ldr x8,[x8, #0xc70]
710018eca4  ldr x20,[x8]
710018eca8  ldr x8,[x19, #0x58]
710018ecac  ldr x9,[x20, #0x30]
710018ecb0  cmp x8,x9
710018ecb4  b.ls 0x710018ece4
710018ecb8  adrp x8,0x71052a4000
710018ecbc  ldr x8,[x8, #0xdc8]
710018ecc0  ldr x0,[x8]
710018ecc4  bl 0x7100161fa0
710018ecc8  ldr x8,[x0, #0x98]
710018eccc  cbz x8,0x710018ecfc
710018ecd0  mov w0,#0x5
710018ecd4  ldp x29,x30,[sp, #0x20]
710018ecd8  ldp x20,x19,[sp, #0x10]
710018ecdc  ldr x21,[sp], #0x30
710018ece0  ret
710018ece4  ldrsw x21,[x19, #0x60]
710018ece8  bl 0x71000bb680
710018ecec  ldr x8,[x0]
710018ecf0  ldr x9,[x20, #0x30]
710018ecf4  madd x8,x8,x21,x9
710018ecf8  str x8,[x19, #0x58]
710018ecfc  strb wzr,[x19, #0x78]
710018ed00  adrp x8,0x71052a6000
710018ed04  ldr x8,[x8, #0x638]
710018ed08  mov x0,xzr
710018ed0c  stp x8,xzr,[x19, #0x30]
710018ed10  adrp x8,0x7104291000
710018ed14  add x8,x8,#0x8b
710018ed18  str x8,[x19, #0x40]
710018ed1c  ldp x29,x30,[sp, #0x20]
710018ed20  ldp x20,x19,[sp, #0x10]
710018ed24  ldr x21,[sp], #0x30
710018ed28  ret
