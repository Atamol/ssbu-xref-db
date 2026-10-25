// addr:      71001da660
// offset:    0x1da660
// name:      FUN_71001da660
// mangled:   
// size:      200

71001da660  stp x20,x19,[sp, #-0x20]!
71001da664  stp x29,x30,[sp, #0x10]
71001da668  add x29,sp,#0x10
71001da66c  adrp x8,0x71052a4000
71001da670  ldr x8,[x8, #0xda8]
71001da674  adrp x20,0x71052a4000
71001da678  ldrb w8,[x8]
71001da67c  ldr x20,[x20, #0xdb0]
71001da680  add x19,x20,#0x28
71001da684  cbz w8,0x71001da6c0
71001da688  adrp x8,0x71052a4000
71001da68c  ldr x8,[x8, #0xdb8]
71001da690  ldr x0,[x8]
71001da694  bl 0x7101717960
71001da698  ldr w8,[x0]
71001da69c  cbz w8,0x71001da6c0
71001da6a0  ldr x10,[x20, #0xa0]
71001da6a4  ldp x9,x10,[x10]
71001da6a8  sub x10,x10,x9
71001da6ac  asr x10,x10,#0x3
71001da6b0  cmp x10,x8
71001da6b4  b.ls 0x71001da6f0
71001da6b8  ldr x8,[x9, x8, LSL #0x3]
71001da6bc  add x19,x8,#0x20
71001da6c0  ldr x8,[x19]
71001da6c4  cbz x8,0x71001da6e0
71001da6c8  ldr x8,[x8, #0x10]
71001da6cc  cbz x8,0x71001da718
71001da6d0  ldr x0,[x8, #0x28]
71001da6d4  ldp x29,x30,[sp, #0x10]
71001da6d8  ldp x20,x19,[sp], #0x20
71001da6dc  ret
71001da6e0  mov x0,xzr
71001da6e4  ldp x29,x30,[sp, #0x10]
71001da6e8  ldp x20,x19,[sp], #0x20
71001da6ec  ret
71001da6f0  adrp x0,0x71042c4000
71001da6f4  add x0,x0,#0x35f
71001da6f8  mov w1,#0x47
71001da6fc  orr w2,wzr,#0xe0000003
71001da700  mov w3,wzr
71001da704  bl 0x71001b1300
71001da708  mov x0,xzr
71001da70c  ldp x29,x30,[sp, #0x10]
71001da710  ldp x20,x19,[sp], #0x20
71001da714  ret
71001da718  mov x0,xzr
71001da71c  ldp x29,x30,[sp, #0x10]
71001da720  ldp x20,x19,[sp], #0x20
71001da724  ret
