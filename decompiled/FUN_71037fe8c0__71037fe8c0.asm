// addr:      71037fe8c0
// offset:    0x37fe8c0
// name:      FUN_71037fe8c0
// mangled:   
// size:      148

71037fe8c0  str x21,[sp, #-0x30]!
71037fe8c4  stp x20,x19,[sp, #0x10]
71037fe8c8  stp x29,x30,[sp, #0x20]
71037fe8cc  add x29,sp,#0x20
71037fe8d0  mov x19,x0
71037fe8d4  adrp x0,0x7104411000
71037fe8d8  add x0,x0,#0x665
71037fe8dc  bl 0x71039c80a0
71037fe8e0  adrp x8,0x7105940000
71037fe8e4  adrp x20,0x710426f000
71037fe8e8  add x20,x20,#0x23
71037fe8ec  str x0,[x8, #0x900]
71037fe8f0  mov x0,x20
71037fe8f4  bl 0x71039c80a0
71037fe8f8  adrp x21,0x7105940000
71037fe8fc  str x0,[x21, #0x918]
71037fe900  mov x0,x20
71037fe904  bl 0x71039c80a0
71037fe908  adrp x20,0x71052aa000
71037fe90c  mov x8,x0
71037fe910  adrp x1,0x71043ce000
71037fe914  add x1,x1,#0x57
71037fe918  str x0,[x20, #0x340]
71037fe91c  mov x0,xzr
71037fe920  blr x8
71037fe924  mov x8,x0
71037fe928  ldrb w0,[x19, #0x8]
71037fe92c  blr x8
71037fe930  ldr x1,[x21, #0x918]
71037fe934  mov x0,xzr
71037fe938  bl 0x71037f8180
71037fe93c  ldr x1,[x20, #0x340]
71037fe940  ldp x29,x30,[sp, #0x20]
71037fe944  ldp x20,x19,[sp, #0x10]
71037fe948  mov x0,xzr
71037fe94c  ldr x21,[sp], #0x30
71037fe950  b 0x7100033a40
