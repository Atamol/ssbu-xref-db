// addr:      710011df00
// offset:    0x11df00
// name:      FUN_710011df00
// mangled:   
// size:      188

710011df00  sub sp,sp,#0x50
710011df04  str x21,[sp, #0x20]
710011df08  stp x20,x19,[sp, #0x30]
710011df0c  stp x29,x30,[sp, #0x40]
710011df10  add x29,sp,#0x40
710011df14  adrp x8,0x71052a5000
710011df18  ldr x8,[x8, #0x80]
710011df1c  mov x19,x0
710011df20  ldr x0,[x8]
710011df24  bl 0x7100146ba0
710011df28  cmp w0,#0x5
710011df2c  b.ne 0x710011df8c
710011df30  mov x0,x19
710011df34  bl 0x7100140490
710011df38  ldr x20,[x19, #0x58]
710011df3c  cbz x20,0x710011df84
710011df40  mov w8,#0xc406
710011df44  str w8,[sp]
710011df48  mov x8,sp
710011df4c  orr x21,x8,#0x4
710011df50  mov x0,x21
710011df54  bl 0x71039c0a80
710011df58  sub x1,x29,#0x18
710011df5c  mov x0,x21
710011df60  stur wzr,[x29, #-0x18]
710011df64  bl 0x71039c0a90
710011df68  add x0,sp,#0x10
710011df6c  mov x1,sp
710011df70  bl 0x71000bce50
710011df74  add x1,sp,#0x10
710011df78  mov x0,x20
710011df7c  bl 0x71000b41f0
710011df80  str xzr,[x19, #0x58]
710011df84  mov w0,#0x1
710011df88  b 0x710011dfa8
710011df8c  adrp x8,0x71052a5000
710011df90  ldr x8,[x8, #0x918]
710011df94  mov x0,xzr
710011df98  stp x8,xzr,[x19, #0x30]
710011df9c  adrp x8,0x710427f000
710011dfa0  add x8,x8,#0xe90
710011dfa4  str x8,[x19, #0x40]
710011dfa8  ldp x29,x30,[sp, #0x40]
710011dfac  ldr x21,[sp, #0x20]
710011dfb0  ldp x20,x19,[sp, #0x30]
710011dfb4  add sp,sp,#0x50
710011dfb8  ret
