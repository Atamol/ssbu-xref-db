// addr:      71000d5250
// offset:    0xd5250
// name:      FUN_71000d5250
// mangled:   
// size:      136

71000d5250  str x19,[sp, #-0x20]!
71000d5254  stp x29,x30,[sp, #0x10]
71000d5258  add x29,sp,#0x10
71000d525c  ldr x8,[x0]
71000d5260  ldr x8,[x8, #0x10]
71000d5264  mov w1,#0x1
71000d5268  mov x19,x0
71000d526c  blr x8
71000d5270  adrp x8,0x71052a4000
71000d5274  ldr x8,[x8, #0xfb0]
71000d5278  stp x8,xzr,[x19, #0x30]
71000d527c  adrp x8,0x710437b000
71000d5280  add x8,x8,#0x949
71000d5284  str x8,[x19, #0x40]
71000d5288  adrp x8,0x71052a4000
71000d528c  ldr x8,[x8, #0xd88]
71000d5290  ldr x0,[x8]
71000d5294  ldr x8,[x0]
71000d5298  ldr x8,[x8, #0x58]
71000d529c  blr x8
71000d52a0  tbz w0,#0x0,0x71000d52c8
71000d52a4  adrp x8,0x71052a4000
71000d52a8  ldr x8,[x8, #0xbd0]
71000d52ac  mov w9,#0xffffffff
71000d52b0  mov x10,#-0x1
71000d52b4  str w9,[x8, #0xd8]
71000d52b8  str x10,[x8, #0x60]
71000d52bc  str w9,[x8, #0x68]
71000d52c0  stur x10,[x8, #0x6c]
71000d52c4  stur x10,[x8, #0x74]
71000d52c8  ldp x29,x30,[sp, #0x10]
71000d52cc  mov w0,#0x1
71000d52d0  ldr x19,[sp], #0x20
71000d52d4  ret
