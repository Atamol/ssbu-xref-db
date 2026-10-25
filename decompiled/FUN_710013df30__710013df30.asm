// addr:      710013df30
// offset:    0x13df30
// name:      FUN_710013df30
// mangled:   
// size:      244

710013df30  stp x20,x19,[sp, #-0x20]!
710013df34  stp x29,x30,[sp, #0x10]
710013df38  add x29,sp,#0x10
710013df3c  adrp x20,0x71052a5000
710013df40  ldr x20,[x20, #0x80]
710013df44  mov x19,x0
710013df48  ldr x0,[x20]
710013df4c  bl 0x7100146ba0
710013df50  mov w8,#0x1
710013df54  lsl w8,w8,w0
710013df58  mov w9,#0x3a0
710013df5c  cmp w0,#0x9
710013df60  and w8,w8,w9
710013df64  ccmp w8,#0x0,#0x4,ls
710013df68  b.eq 0x710013dfa8
710013df6c  ldr x8,[x20]
710013df70  ldr x0,[x8, #0x8]
710013df74  ldr x8,[x0]
710013df78  ldr x8,[x8, #0x28]
710013df7c  blr x8
710013df80  adrp x8,0x71052a5000
710013df84  ldr x8,[x8, #0x510]
710013df88  mov x0,xzr
710013df8c  stp x8,xzr,[x19, #0x30]
710013df90  adrp x8,0x71042a2000
710013df94  add x8,x8,#0x28d
710013df98  str x8,[x19, #0x40]
710013df9c  ldp x29,x30,[sp, #0x10]
710013dfa0  ldp x20,x19,[sp], #0x20
710013dfa4  ret
710013dfa8  ldr x20,[x20]
710013dfac  ldr x0,[x20, #0x70]
710013dfb0  cbz x0,0x710013dfd4
710013dfb4  bl 0x71000b4990
710013dfb8  tbz w0,#0x0,0x710013dfd4
710013dfbc  mov w8,#0x1
710013dfc0  strb w8,[x19, #0x98]
710013dfc4  mov w0,#0x5
710013dfc8  ldp x29,x30,[sp, #0x10]
710013dfcc  ldp x20,x19,[sp], #0x20
710013dfd0  ret
710013dfd4  ldr x0,[x20, #0x10]
710013dfd8  cbz x0,0x710013dffc
710013dfdc  bl 0x71000b4990
710013dfe0  tbz w0,#0x0,0x710013dff4
710013dfe4  mov w0,#0x5
710013dfe8  ldp x29,x30,[sp, #0x10]
710013dfec  ldp x20,x19,[sp], #0x20
710013dff0  ret
710013dff4  ldr x0,[x20, #0x10]
710013dff8  bl 0x710014fde0
710013dffc  adrp x8,0x71052a5000
710013e000  ldr x8,[x8, #0xda8]
710013e004  mov x0,xzr
710013e008  stp x8,xzr,[x19, #0x30]
710013e00c  adrp x8,0x71042a2000
710013e010  add x8,x8,#0x2c5
710013e014  str x8,[x19, #0x40]
710013e018  ldp x29,x30,[sp, #0x10]
710013e01c  ldp x20,x19,[sp], #0x20
710013e020  ret
