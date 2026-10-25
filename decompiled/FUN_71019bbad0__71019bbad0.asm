// addr:      71019bbad0
// offset:    0x19bbad0
// name:      FUN_71019bbad0
// mangled:   
// size:      276

71019bbad0  str d8,[sp, #-0x50]!
71019bbad4  str x25,[sp, #0x8]
71019bbad8  stp x24,x23,[sp, #0x10]
71019bbadc  stp x22,x21,[sp, #0x20]
71019bbae0  stp x20,x19,[sp, #0x30]
71019bbae4  stp x29,x30,[sp, #0x40]
71019bbae8  add x29,sp,#0x40
71019bbaec  mov x19,x0
71019bbaf0  ldr x22,[x19, #0x48]!
71019bbaf4  ldr x24,[x19, #0x8]
71019bbaf8  mov x20,x0
71019bbafc  cmp x22,x24
71019bbb00  b.eq 0x71019bbb30
71019bbb04  fmov s8,0x3f800000
71019bbb08  adrp x21,0x71043df000
71019bbb0c  add x21,x21,#0x9cf
71019bbb10  ldr x0,[x22, #0x8]
71019bbb14  mov v0.16B,v8.16B
71019bbb18  mov x1,x21
71019bbb1c  bl 0x7103778300
71019bbb20  add x22,x22,#0x10
71019bbb24  cmp x24,x22
71019bbb28  b.ne 0x71019bbb10
71019bbb2c  ldp x22,x24,[x20, #0x48]
71019bbb30  sub x8,x24,x22
71019bbb34  asr x10,x8,#0x4
71019bbb38  ldr x9,[x20, #0x218]
71019bbb3c  ldr x8,[x20, #0x210]
71019bbb40  sub x11,x9,x8
71019bbb44  asr x11,x11,#0x2
71019bbb48  cmp x11,x10
71019bbb4c  csel x23,x11,x10,cc
71019bbb50  cbz x23,0x71019bbbc0
71019bbb54  cmp x24,x22
71019bbb58  b.eq 0x71019bbbb8
71019bbb5c  mov x24,xzr
71019bbb60  mov x25,xzr
71019bbb64  add x21,x20,#0x210
71019bbb68  b 0x71019bbb78
71019bbb6c  ldr x9,[x20, #0x218]
71019bbb70  ldr x8,[x20, #0x210]
71019bbb74  add x24,x24,#0x10
71019bbb78  sub x9,x9,x8
71019bbb7c  asr x9,x9,#0x2
71019bbb80  cmp x9,x25
71019bbb84  b.ls 0x71019bbbdc
71019bbb88  ldr w1,[x8, x25, LSL #0x2]
71019bbb8c  add x2,x22,x24
71019bbb90  mov x0,x20
71019bbb94  bl 0x71019bbbf0
71019bbb98  add x25,x25,#0x1
71019bbb9c  cmp x25,x23
71019bbba0  b.cs 0x71019bbbc0
71019bbba4  ldp x22,x8,[x20, #0x48]
71019bbba8  sub x8,x8,x22
71019bbbac  asr x8,x8,#0x4
71019bbbb0  cmp x8,x25
71019bbbb4  b.hi 0x71019bbb6c
71019bbbb8  mov x0,x19
71019bbbbc  bl 0x71039c1330
71019bbbc0  ldp x29,x30,[sp, #0x40]
71019bbbc4  ldr x25,[sp, #0x8]
71019bbbc8  ldp x20,x19,[sp, #0x30]
71019bbbcc  ldp x22,x21,[sp, #0x20]
71019bbbd0  ldp x24,x23,[sp, #0x10]
71019bbbd4  ldr d8,[sp], #0x50
71019bbbd8  ret
71019bbbdc  mov x0,x21
71019bbbe0  bl 0x71039c1330
