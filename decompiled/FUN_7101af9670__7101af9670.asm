// addr:      7101af9670
// offset:    0x1af9670
// name:      FUN_7101af9670
// mangled:   
// size:      380

7101af9670  sub sp,sp,#0x30
7101af9674  stp x20,x19,[sp, #0x10]
7101af9678  stp x29,x30,[sp, #0x20]
7101af967c  add x29,sp,#0x20
7101af9680  ldr w8,[x0, #0xec]
7101af9684  mov x19,x0
7101af9688  cbz w8,0x7101af9764
7101af968c  ldr x8,[x19, #0x128]
7101af9690  ldr x8,[x8]
7101af9694  ldr x8,[x8, #0x10]
7101af9698  ldr x0,[x8, #0x8]
7101af969c  cbz x0,0x7101af96c0
7101af96a0  adrp x1,0x7104421000
7101af96a4  add x1,x1,#0x55
7101af96a8  bl 0x71037964b0
7101af96ac  cbz x0,0x7101af96c0
7101af96b0  ldr x8,[x0]
7101af96b4  ldr x8,[x8, #0x138]
7101af96b8  blr x8
7101af96bc  tbz w0,#0x0,0x7101af9754
7101af96c0  ldr w8,[x19, #0x1fc]
7101af96c4  cmp w8,#0x1
7101af96c8  b.eq 0x7101af9730
7101af96cc  ldr x8,[x19, #0x130]
7101af96d0  ldr x20,[x8]
7101af96d4  mov x8,sp
7101af96d8  add x0,x20,#0x8
7101af96dc  adrp x1,0x71043ad000
7101af96e0  add x1,x1,#0xfe3
7101af96e4  bl 0x7103776910
7101af96e8  ldr x0,[sp, #0x8]
7101af96ec  ldr x8,[x0]
7101af96f0  cbz x8,0x7101af9700
7101af96f4  ldrb w9,[x8, #0x58]
7101af96f8  orr w9,w9,#0x1
7101af96fc  strb w9,[x8, #0x58]
7101af9700  adrp x8,0x710523d000
7101af9704  add x8,x8,#0x9a8
7101af9708  stp x8,xzr,[sp]
7101af970c  cbz x0,0x7101af9714
7101af9710  bl 0x710392eb40
7101af9714  ldr x0,[x20, #0x10]
7101af9718  fmov s0,0x3f800000
7101af971c  adrp x1,0x71042a3000
7101af9720  add x1,x1,#0x672
7101af9724  bl 0x7103778300
7101af9728  mov w8,#0x1
7101af972c  str w8,[x19, #0x1fc]
7101af9730  ldr x8,[x19, #0x128]
7101af9734  ldr x8,[x8]
7101af9738  ldrb w1,[x19, #0x1f1]
7101af973c  ldr x0,[x8]
7101af9740  bl 0x71037760f0
7101af9744  ldr w8,[x19, #0xe4]
7101af9748  subs w8,w8,#0x1
7101af974c  b.lt 0x7101af9754
7101af9750  str w8,[x19, #0xe4]
7101af9754  ldp x29,x30,[sp, #0x20]
7101af9758  ldp x20,x19,[sp, #0x10]
7101af975c  add sp,sp,#0x30
7101af9760  ret
7101af9764  ldr x8,[x19, #0x158]
7101af9768  ldr x9,[x8]
7101af976c  cbz x9,0x7101af9778
7101af9770  ldr x8,[x8, #0x8]
7101af9774  cbnz x8,0x7101af968c
7101af9778  ldr w8,[x19, #0x1fc]
7101af977c  cmp w8,#0x1
7101af9780  b.eq 0x7101af968c
7101af9784  ldr x8,[x19, #0x130]
7101af9788  ldr x20,[x8]
7101af978c  mov x8,sp
7101af9790  add x0,x20,#0x8
7101af9794  adrp x1,0x71043ad000
7101af9798  add x1,x1,#0xfe3
7101af979c  bl 0x7103776910
7101af97a0  ldr x0,[sp, #0x8]
7101af97a4  ldr x8,[x0]
7101af97a8  cbz x8,0x7101af97b8
7101af97ac  ldrb w9,[x8, #0x58]
7101af97b0  orr w9,w9,#0x1
7101af97b4  strb w9,[x8, #0x58]
7101af97b8  adrp x8,0x710523d000
7101af97bc  add x8,x8,#0x9a8
7101af97c0  stp x8,xzr,[sp]
7101af97c4  cbz x0,0x7101af97cc
7101af97c8  bl 0x710392eb40
7101af97cc  ldr x0,[x20, #0x10]
7101af97d0  fmov s0,0x3f800000
7101af97d4  adrp x1,0x71042a3000
7101af97d8  add x1,x1,#0x672
7101af97dc  bl 0x7103778300
7101af97e0  mov w8,#0x1
7101af97e4  str w8,[x19, #0x1fc]
7101af97e8  b 0x7101af968c
