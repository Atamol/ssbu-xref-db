// addr:      71001dca90
// offset:    0x1dca90
// name:      FUN_71001dca90
// mangled:   
// size:      84

71001dca90  str x19,[sp, #-0x20]!
71001dca94  stp x29,x30,[sp, #0x10]
71001dca98  add x29,sp,#0x10
71001dca9c  adrp x0,0x71042a2000
71001dcaa0  add x0,x0,#0x4ec
71001dcaa4  mov x19,x1
71001dcaa8  bl 0x71039c0060
71001dcaac  cbz w0,0x71001dcad4
71001dcab0  adrp x0,0x71043ac000
71001dcab4  add x0,x0,#0xc31
71001dcab8  mov x1,x19
71001dcabc  bl 0x71039c0060
71001dcac0  cmp w0,#0x0
71001dcac4  cset w0,eq
71001dcac8  ldp x29,x30,[sp, #0x10]
71001dcacc  ldr x19,[sp], #0x20
71001dcad0  ret
71001dcad4  mov w0,#0x1
71001dcad8  ldp x29,x30,[sp, #0x10]
71001dcadc  ldr x19,[sp], #0x20
71001dcae0  ret
