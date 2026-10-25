// addr:      710018de80
// offset:    0x18de80
// name:      FUN_710018de80
// mangled:   
// size:      272

710018de80  sub sp,sp,#0x50
710018de84  str x21,[sp, #0x20]
710018de88  stp x20,x19,[sp, #0x30]
710018de8c  stp x29,x30,[sp, #0x40]
710018de90  add x29,sp,#0x40
710018de94  adrp x8,0x71052a4000
710018de98  ldr x8,[x8, #0xdf0]
710018de9c  ldr x20,[x8]
710018dea0  mov x19,x0
710018dea4  mov x0,x20
710018dea8  bl 0x7100193560
710018deac  and w8,w0,#0xff
710018deb0  cmp w8,#0x1f
710018deb4  b.ls 0x710018ded0
710018deb8  adrp x8,0x71052a6000
710018debc  ldr x8,[x8, #0x610]
710018dec0  mov x0,xzr
710018dec4  adrp x9,0x7104400000
710018dec8  add x9,x9,#0x899
710018decc  b 0x710018df74
710018ded0  add x8,sp,#0x10
710018ded4  mov x0,x20
710018ded8  bl 0x7100192e90
710018dedc  mov w8,#0x6c50
710018dee0  str w8,[sp]
710018dee4  mov x8,sp
710018dee8  orr x21,x8,#0x4
710018deec  mov x0,x21
710018def0  bl 0x71039c0a80
710018def4  sub x1,x29,#0x18
710018def8  mov x0,x21
710018defc  stur wzr,[x29, #-0x18]
710018df00  bl 0x71039c0a90
710018df04  ldr w8,[sp, #0x10]
710018df08  ldr w9,[sp]
710018df0c  cmp w8,w9
710018df10  b.ne 0x710018df1c
710018df14  ldrb w8,[x19, #0x198]
710018df18  cbz w8,0x710018deb8
710018df1c  ldr x0,[x20, #0x10]
710018df20  add x21,x19,#0x160
710018df24  mov x1,x21
710018df28  bl 0x710018eaf0
710018df2c  mov w8,w0
710018df30  ldr x0,[x20, #0x10]
710018df34  tbz w8,#0x0,0x710018df50
710018df38  mov w1,wzr
710018df3c  bl 0x71000b4820
710018df40  adrp x8,0x71052a6000
710018df44  ldr x8,[x8, #0x618]
710018df48  mov w0,#0x5
710018df4c  b 0x710018df6c
710018df50  mov x1,x21
710018df54  bl 0x710018eac0
710018df58  mov w8,w0
710018df5c  mov w0,#0x5
710018df60  tbz w8,#0x0,0x710018df7c
710018df64  adrp x8,0x71052a6000
710018df68  ldr x8,[x8, #0x618]
710018df6c  adrp x9,0x71043ac000
710018df70  add x9,x9,#0xbe6
710018df74  stp x8,xzr,[x19, #0x30]
710018df78  str x9,[x19, #0x40]
710018df7c  ldp x29,x30,[sp, #0x40]
710018df80  ldr x21,[sp, #0x20]
710018df84  ldp x20,x19,[sp, #0x30]
710018df88  add sp,sp,#0x50
710018df8c  ret
