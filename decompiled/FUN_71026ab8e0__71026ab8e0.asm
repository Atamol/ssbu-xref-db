// addr:      71026ab8e0
// offset:    0x26ab8e0
// name:      FUN_71026ab8e0
// mangled:   
// size:      292

71026ab8e0  str x19,[sp, #-0x20]!
71026ab8e4  stp x29,x30,[sp, #0x10]
71026ab8e8  add x29,sp,#0x10
71026ab8ec  adrp x8,0x71050cd000
71026ab8f0  add x8,x8,#0x68
71026ab8f4  mov x19,x0
71026ab8f8  str x8,[x0]
71026ab8fc  ldr x0,[x0, #0x830]
71026ab900  cbz x0,0x71026ab914
71026ab904  ldr x8,[x0]
71026ab908  ldr x8,[x8, #0x8]
71026ab90c  blr x8
71026ab910  str xzr,[x19, #0x830]
71026ab914  ldr x0,[x19, #0x838]
71026ab918  cbz x0,0x71026ab92c
71026ab91c  ldr x8,[x0]
71026ab920  ldr x8,[x8, #0x8]
71026ab924  blr x8
71026ab928  str xzr,[x19, #0x838]
71026ab92c  ldr x0,[x19, #0x840]
71026ab930  cbz x0,0x71026ab944
71026ab934  ldr x8,[x0]
71026ab938  ldr x8,[x8, #0x8]
71026ab93c  blr x8
71026ab940  str xzr,[x19, #0x840]
71026ab944  ldr x0,[x19, #0x848]
71026ab948  cbz x0,0x71026ab95c
71026ab94c  ldr x8,[x0]
71026ab950  ldr x8,[x8, #0x8]
71026ab954  blr x8
71026ab958  str xzr,[x19, #0x848]
71026ab95c  ldr x0,[x19, #0x850]
71026ab960  cbz x0,0x71026ab974
71026ab964  ldr x8,[x0]
71026ab968  ldr x8,[x8, #0x8]
71026ab96c  blr x8
71026ab970  str xzr,[x19, #0x850]
71026ab974  ldr x0,[x19, #0x860]
71026ab978  str xzr,[x19, #0x860]
71026ab97c  cbz x0,0x71026ab98c
71026ab980  ldr x8,[x0]
71026ab984  ldr x8,[x8, #0x8]
71026ab988  blr x8
71026ab98c  ldr x0,[x19, #0x858]
71026ab990  str xzr,[x19, #0x858]
71026ab994  cbz x0,0x71026ab9a4
71026ab998  ldr x8,[x0]
71026ab99c  ldr x8,[x8, #0x8]
71026ab9a0  blr x8
71026ab9a4  ldr x0,[x19, #0x818]
71026ab9a8  cbz x0,0x71026ab9b4
71026ab9ac  str x0,[x19, #0x820]
71026ab9b0  bl 0x710392eb40
71026ab9b4  ldr x0,[x19, #0x7f0]
71026ab9b8  cbz x0,0x71026ab9c4
71026ab9bc  str x0,[x19, #0x7f8]
71026ab9c0  bl 0x710392eb40
71026ab9c4  ldr x0,[x19, #0x7d8]
71026ab9c8  cbz x0,0x71026ab9d4
71026ab9cc  str x0,[x19, #0x7e0]
71026ab9d0  bl 0x710392eb40
71026ab9d4  ldr x0,[x19, #0x7c0]
71026ab9d8  cbz x0,0x71026ab9e4
71026ab9dc  str x0,[x19, #0x7c8]
71026ab9e0  bl 0x710392eb40
71026ab9e4  ldr x0,[x19, #0x790]
71026ab9e8  cbz x0,0x71026ab9f4
71026ab9ec  str x0,[x19, #0x798]
71026ab9f0  bl 0x710392eb40
71026ab9f4  ldp x29,x30,[sp, #0x10]
71026ab9f8  mov x0,x19
71026ab9fc  ldr x19,[sp], #0x20
71026aba00  b 0x71025d7760
