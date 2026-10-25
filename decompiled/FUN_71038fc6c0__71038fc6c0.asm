// addr:      71038fc6c0
// offset:    0x38fc6c0
// name:      FUN_71038fc6c0
// mangled:   
// size:      276

71038fc6c0  stp x20,x19,[sp, #-0x20]!
71038fc6c4  stp x29,x30,[sp, #0x10]
71038fc6c8  add x29,sp,#0x10
71038fc6cc  ldrsw x3,[x1]
71038fc6d0  ldr x9,[x0, #0x10]
71038fc6d4  sub x2,x9,x3, LSL #0x4
71038fc6d8  ldrh w8,[x0, #0xc6]
71038fc6dc  mov x19,x0
71038fc6e0  cmp w8,#0xc8
71038fc6e4  b.cs 0x71038fc7a4
71038fc6e8  ldrb w8,[x19, #0xc]
71038fc6ec  ldr x20,[x19, #0x20]
71038fc6f0  cmp w8,#0x1
71038fc6f4  b.eq 0x71038fc728
71038fc6f8  cbnz w8,0x71038fc7b4
71038fc6fc  add x8,x19,#0x60
71038fc700  cmp x20,x8
71038fc704  b.ne 0x71038fc7c4
71038fc708  sub x1,x2,#0x10
71038fc70c  mov w2,#0xffffffff
71038fc710  mov x0,x19
71038fc714  bl 0x71038fb8d0
71038fc718  cbz w0,0x71038fc794
71038fc71c  ldp x29,x30,[sp, #0x10]
71038fc720  ldp x20,x19,[sp], #0x20
71038fc724  ret
71038fc728  strb wzr,[x19, #0xc]
71038fc72c  ldr x8,[x19, #0x38]
71038fc730  ldr x9,[x20, #0x38]
71038fc734  add x8,x8,x9
71038fc738  str x8,[x20]
71038fc73c  ldrb w8,[x20, #0x42]
71038fc740  tbnz w8,#0x1,0x71038fc778
71038fc744  ldr x8,[x20, #0x20]
71038fc748  cbz x8,0x71038fc768
71038fc74c  ldr x2,[x20, #0x30]
71038fc750  mov w1,#0x1
71038fc754  mov x0,x19
71038fc758  blr x8
71038fc75c  ldr x8,[x19, #0x10]
71038fc760  sub x2,x8,w0, SXTW  #0x4
71038fc764  mov w3,w0
71038fc768  mov x0,x19
71038fc76c  mov x1,x20
71038fc770  bl 0x71038fbfd0
71038fc774  b 0x71038fc780
71038fc778  mov x0,x19
71038fc77c  bl 0x7103924610
71038fc780  ldp x29,x30,[sp, #0x10]
71038fc784  mov x0,x19
71038fc788  mov x1,xzr
71038fc78c  ldp x20,x19,[sp], #0x20
71038fc790  b 0x71038fc7e0
71038fc794  ldp x29,x30,[sp, #0x10]
71038fc798  mov x0,x19
71038fc79c  ldp x20,x19,[sp], #0x20
71038fc7a0  b 0x7103924610
71038fc7a4  adrp x1,0x71042c3000
71038fc7a8  add x1,x1,#0x976
71038fc7ac  mov x0,x19
71038fc7b0  bl 0x71038fca40
71038fc7b4  adrp x1,0x7104317000
71038fc7b8  add x1,x1,#0xaff
71038fc7bc  mov x0,x19
71038fc7c0  bl 0x71038fca40
71038fc7c4  adrp x1,0x7104453000
71038fc7c8  add x1,x1,#0x5a5
71038fc7cc  mov x0,x19
71038fc7d0  bl 0x71038fca40
