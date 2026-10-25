// addr:      71030eaea0
// offset:    0x30eaea0
// name:      FUN_71030eaea0
// mangled:   
// size:      296

71030eaea0  str x19,[sp, #-0x20]!
71030eaea4  stp x29,x30,[sp, #0x10]
71030eaea8  add x29,sp,#0x10
71030eaeac  ldr x8,[x0, #0xf8]
71030eaeb0  cbz x8,0x71030eaec0
71030eaeb4  ldp x29,x30,[sp, #0x10]
71030eaeb8  ldr x19,[sp], #0x20
71030eaebc  ret
71030eaec0  ldr w8,[x0, #0x24]
71030eaec4  cmp w8,#0x23
71030eaec8  b.hi 0x71030eaee8
71030eaecc  ldr x9,[x0, #0x18]
71030eaed0  mov w10,#0x98
71030eaed4  madd x8,x8,x10,x9
71030eaed8  add x19,x8,#0x8
71030eaedc  ldr x8,[x19, #0x10]
71030eaee0  cbnz x8,0x71030eaf08
71030eaee4  b 0x71030eaeb4
71030eaee8  adrp x8,0x710532f000
71030eaeec  add x8,x8,#0x60
71030eaef0  ldarb w8,[x8]
71030eaef4  tbz w8,#0x0,0x71030eaf30
71030eaef8  adrp x19,0x710532e000
71030eaefc  add x19,x19,#0xf28
71030eaf00  ldr x8,[x19, #0x10]
71030eaf04  cbz x8,0x71030eaeb4
71030eaf08  ldr x8,[x8, #0xd8]
71030eaf0c  cbz x8,0x71030eaeb4
71030eaf10  ldr x8,[x8, #0x8]
71030eaf14  ldr x0,[x8, #0x8]
71030eaf18  ldr x8,[x0]
71030eaf1c  ldr x8,[x8, #0x18]
71030eaf20  adrp x1,0x7104431000
71030eaf24  add x1,x1,#0x631
71030eaf28  blr x8
71030eaf2c  b 0x71030eaeb4
71030eaf30  adrp x0,0x710532f000
71030eaf34  add x0,x0,#0x60
71030eaf38  bl 0x71039c06b0
71030eaf3c  adrp x19,0x710532e000
71030eaf40  add x19,x19,#0xf28
71030eaf44  cbz w0,0x71030eaf00
71030eaf48  mov w8,#0xffffffff
71030eaf4c  str w8,[x19, #0x8]
71030eaf50  mov x8,x19
71030eaf54  str xzr,[x19]
71030eaf58  adrp x0,0x71030ee000
71030eaf5c  add x0,x0,#0x110
71030eaf60  str xzr,[x8, #0x30]!
71030eaf64  str x8,[x19, #0x28]
71030eaf68  mov x8,x19
71030eaf6c  str wzr,[x19, #0x20]
71030eaf70  stp xzr,xzr,[x19, #0x10]
71030eaf74  adrp x2,0x7104f17000
71030eaf78  add x2,x2,#0x0
71030eaf7c  mov x1,x19
71030eaf80  str xzr,[x8, #0x48]!
71030eaf84  stp xzr,x8,[x19, #0x38]
71030eaf88  mov x8,x19
71030eaf8c  str xzr,[x8, #0x60]!
71030eaf90  strb wzr,[x19, #0x78]
71030eaf94  str wzr,[x19, #0x94]
71030eaf98  stur xzr,[x19, #0x8c]
71030eaf9c  stur xzr,[x19, #0x84]
71030eafa0  stur xzr,[x19, #0x7c]
71030eafa4  stp xzr,xzr,[x19, #0x68]
71030eafa8  stp xzr,x8,[x19, #0x50]
71030eafac  bl 0x71000001c0
71030eafb0  adrp x0,0x710532f000
71030eafb4  add x0,x0,#0x60
71030eafb8  bl 0x71039c06c0
71030eafbc  ldr x8,[x19, #0x10]
71030eafc0  cbnz x8,0x71030eaf08
71030eafc4  b 0x71030eaeb4
