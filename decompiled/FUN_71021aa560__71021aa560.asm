// addr:      71021aa560
// offset:    0x21aa560
// name:      FUN_71021aa560
// mangled:   
// size:      284

71021aa560  sub sp,sp,#0x60
71021aa564  stp x20,x19,[sp, #0x40]
71021aa568  stp x29,x30,[sp, #0x50]
71021aa56c  add x29,sp,#0x50
71021aa570  ldr x8,[x0, #0x18]
71021aa574  ldr x8,[x8, #0x18]
71021aa578  mov x19,x0
71021aa57c  cmp x8,#0x1
71021aa580  b.lt 0x71021aa58c
71021aa584  mov x0,x19
71021aa588  bl 0x71038fec40
71021aa58c  mov x0,x19
71021aa590  bl 0x710391e050
71021aa594  ldr x8,[x19, #0x10]
71021aa598  mov w9,#0x45
71021aa59c  str w9,[x8, #0x8]
71021aa5a0  str x0,[x8]
71021aa5a4  ldr x8,[x19, #0x10]
71021aa5a8  mov x1,x0
71021aa5ac  mov w3,#0x2
71021aa5b0  mov x0,x19
71021aa5b4  mov w2,wzr
71021aa5b8  mov w20,#0x2
71021aa5bc  add x8,x8,#0x10
71021aa5c0  str x8,[x19, #0x10]
71021aa5c4  bl 0x710391d4c0
71021aa5c8  mov w8,#0xa
71021aa5cc  str w8,[sp, #0x10]
71021aa5d0  mov x8,#-0x10000
71021aa5d4  stp xzr,xzr,[sp, #0x18]
71021aa5d8  movk x8,#0x5000, LSL #16
71021aa5dc  str x8,[sp, #0x28]
71021aa5e0  adrp x8,0x71050b5000
71021aa5e4  add x8,x8,#0x4f8
71021aa5e8  add x0,sp,#0x8
71021aa5ec  mov w2,#0x1
71021aa5f0  mov x1,x19
71021aa5f4  strb wzr,[sp, #0x30]
71021aa5f8  str x8,[sp, #0x8]
71021aa5fc  str xzr,[sp, #0x38]
71021aa600  bl 0x7101ff91a0
71021aa604  ldr x8,[x19, #0x10]
71021aa608  adrp x9,0x71021aa000
71021aa60c  add x9,x9,#0x680
71021aa610  str x9,[x8]
71021aa614  str w20,[x8, #0x8]
71021aa618  ldr x8,[x19, #0x10]
71021aa61c  add x9,x8,#0x10
71021aa620  sub x1,x8,#0x10
71021aa624  adrp x2,0x710430c000
71021aa628  add x2,x2,#0x66a
71021aa62c  mov x0,x19
71021aa630  str x9,[x19, #0x10]
71021aa634  bl 0x71038f5390
71021aa638  ldr x8,[x19, #0x10]
71021aa63c  mov w9,#0x13
71021aa640  str w9,[x8, #0x8]
71021aa644  str xzr,[x8]
71021aa648  ldr x8,[x19, #0x10]
71021aa64c  add x9,x8,#0x10
71021aa650  sub x1,x8,#0x10
71021aa654  adrp x2,0x71042fe000
71021aa658  add x2,x2,#0x5c6
71021aa65c  mov x0,x19
71021aa660  str x9,[x19, #0x10]
71021aa664  bl 0x71038f5390
71021aa668  ldp x29,x30,[sp, #0x50]
71021aa66c  mov w0,#0x1
71021aa670  ldp x20,x19,[sp, #0x40]
71021aa674  add sp,sp,#0x60
71021aa678  ret
