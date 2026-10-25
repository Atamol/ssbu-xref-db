// addr:      71021ce8b0
// offset:    0x21ce8b0
// name:      FUN_71021ce8b0
// mangled:   
// size:      388

71021ce8b0  sub sp,sp,#0x60
71021ce8b4  stp x20,x19,[sp, #0x40]
71021ce8b8  stp x29,x30,[sp, #0x50]
71021ce8bc  add x29,sp,#0x50
71021ce8c0  ldr x8,[x0, #0x18]
71021ce8c4  ldr x8,[x8, #0x18]
71021ce8c8  mov x19,x0
71021ce8cc  cmp x8,#0x1
71021ce8d0  b.lt 0x71021ce8dc
71021ce8d4  mov x0,x19
71021ce8d8  bl 0x71038fec40
71021ce8dc  mov x0,x19
71021ce8e0  bl 0x710391e050
71021ce8e4  ldr x8,[x19, #0x10]
71021ce8e8  mov w9,#0x45
71021ce8ec  str w9,[x8, #0x8]
71021ce8f0  str x0,[x8]
71021ce8f4  ldr x8,[x19, #0x10]
71021ce8f8  mov x1,x0
71021ce8fc  mov w3,#0x4
71021ce900  mov x0,x19
71021ce904  mov w2,wzr
71021ce908  add x8,x8,#0x10
71021ce90c  str x8,[x19, #0x10]
71021ce910  bl 0x710391d4c0
71021ce914  mov w8,#0xa
71021ce918  str w8,[sp, #0x10]
71021ce91c  mov x8,#0xb65e
71021ce920  movk x8,#0xd1fa, LSL #16
71021ce924  movk x8,#0x29, LSL #32
71021ce928  add x0,sp,#0x8
71021ce92c  stp x8,xzr,[sp, #0x18]
71021ce930  mov x8,#-0x10000
71021ce934  movk x8,#0x5000, LSL #16
71021ce938  str x8,[sp, #0x28]
71021ce93c  adrp x8,0x71050b5000
71021ce940  add x8,x8,#0x638
71021ce944  mov w2,#0x1
71021ce948  mov x1,x19
71021ce94c  strb wzr,[sp, #0x30]
71021ce950  stur xzr,[sp, #0x34]
71021ce954  str wzr,[sp, #0x3c]
71021ce958  str x8,[sp, #0x8]
71021ce95c  bl 0x7101ff91a0
71021ce960  ldr x8,[x19, #0x10]
71021ce964  adrp x9,0x71021ce000
71021ce968  add x9,x9,#0xa40
71021ce96c  str x9,[x8]
71021ce970  mov w9,#0x2
71021ce974  str w9,[x8, #0x8]
71021ce978  ldr x8,[x19, #0x10]
71021ce97c  add x9,x8,#0x10
71021ce980  sub x1,x8,#0x10
71021ce984  adrp x2,0x710430c000
71021ce988  add x2,x2,#0x66a
71021ce98c  mov x0,x19
71021ce990  str x9,[x19, #0x10]
71021ce994  bl 0x71038f5390
71021ce998  ldr x8,[x19, #0x10]
71021ce99c  orr w20,wzr,#0x3
71021ce9a0  str w20,[x8, #0x8]
71021ce9a4  str wzr,[x8]
71021ce9a8  ldr x8,[x19, #0x10]
71021ce9ac  add x9,x8,#0x10
71021ce9b0  sub x1,x8,#0x10
71021ce9b4  adrp x2,0x710445a000
71021ce9b8  add x2,x2,#0x6e9
71021ce9bc  mov x0,x19
71021ce9c0  str x9,[x19, #0x10]
71021ce9c4  bl 0x71038f5390
71021ce9c8  ldr x8,[x19, #0x10]
71021ce9cc  str wzr,[x8]
71021ce9d0  str w20,[x8, #0x8]
71021ce9d4  ldr x8,[x19, #0x10]
71021ce9d8  add x9,x8,#0x10
71021ce9dc  sub x1,x8,#0x10
71021ce9e0  adrp x2,0x71043d5000
71021ce9e4  add x2,x2,#0x631
71021ce9e8  mov x0,x19
71021ce9ec  str x9,[x19, #0x10]
71021ce9f0  bl 0x71038f5390
71021ce9f4  ldr x8,[x19, #0x10]
71021ce9f8  str wzr,[x8]
71021ce9fc  str w20,[x8, #0x8]
71021cea00  ldr x8,[x19, #0x10]
71021cea04  add x9,x8,#0x10
71021cea08  sub x1,x8,#0x10
71021cea0c  adrp x2,0x710442c000
71021cea10  add x2,x2,#0xa38
71021cea14  mov x0,x19
71021cea18  str x9,[x19, #0x10]
71021cea1c  bl 0x71038f5390
71021cea20  ldp x29,x30,[sp, #0x50]
71021cea24  mov w0,#0x1
71021cea28  ldp x20,x19,[sp, #0x40]
71021cea2c  add sp,sp,#0x60
71021cea30  ret
