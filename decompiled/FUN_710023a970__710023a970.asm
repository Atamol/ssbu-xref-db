// addr:      710023a970
// offset:    0x23a970
// name:      FUN_710023a970
// mangled:   
// size:      212

710023a970  str x21,[sp, #-0x30]!
710023a974  stp x20,x19,[sp, #0x10]
710023a978  stp x29,x30,[sp, #0x20]
710023a97c  add x29,sp,#0x20
710023a980  ldp x8,x9,[x0, #0xc0]
710023a984  ldr x10,[x8, #0x10]
710023a988  str x10,[x9, #0xc0]
710023a98c  ldr w8,[x8, #0x18]
710023a990  str w8,[x9, #0xc8]
710023a994  adrp x8,0x71052a4000
710023a998  ldr x8,[x8, #0xda8]
710023a99c  adrp x21,0x71052a4000
710023a9a0  ldrb w8,[x8]
710023a9a4  ldr x21,[x21, #0xdb0]
710023a9a8  mov x19,x0
710023a9ac  add x20,x21,#0x70
710023a9b0  cbz w8,0x710023a9ec
710023a9b4  adrp x8,0x71052a4000
710023a9b8  ldr x8,[x8, #0xdb8]
710023a9bc  ldr x0,[x8]
710023a9c0  bl 0x7101717960
710023a9c4  ldr w8,[x0]
710023a9c8  cbz w8,0x710023a9ec
710023a9cc  ldr x10,[x21, #0xa0]
710023a9d0  ldp x9,x10,[x10]
710023a9d4  sub x10,x10,x9
710023a9d8  asr x10,x10,#0x3
710023a9dc  cmp x10,x8
710023a9e0  b.ls 0x710023aa2c
710023a9e4  ldr x8,[x9, x8, LSL #0x3]
710023a9e8  add x20,x8,#0x68
710023a9ec  ldr x8,[x20]
710023a9f0  ldr x8,[x8, #0x10]
710023a9f4  ldr x1,[x19, #0xc8]
710023a9f8  ldr x0,[x8, #0x38]
710023a9fc  bl 0x710023c920
710023aa00  ldr x8,[x19, #0xc0]
710023aa04  ldr x8,[x8, #0x78]
710023aa08  ldr x2,[x19, #0xd0]
710023aa0c  ldp x29,x30,[sp, #0x20]
710023aa10  mov w1,#0x64
710023aa14  ldp x20,x19,[sp, #0x10]
710023aa18  ldr x0,[x8, #0x28]
710023aa1c  ldr x8,[x0]
710023aa20  ldr x3,[x8, #0x50]
710023aa24  ldr x21,[sp], #0x30
710023aa28  br x3
710023aa2c  adrp x0,0x71042c4000
710023aa30  add x0,x0,#0x35f
710023aa34  mov w1,#0x47
710023aa38  orr w2,wzr,#0xe0000003
710023aa3c  mov w3,wzr
710023aa40  bl 0x71001b1300
