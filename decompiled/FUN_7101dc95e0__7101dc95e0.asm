// addr:      7101dc95e0
// offset:    0x1dc95e0
// name:      FUN_7101dc95e0
// mangled:   
// size:      580

7101dc95e0  sub sp,sp,#0x60
7101dc95e4  str x23,[sp, #0x20]
7101dc95e8  stp x22,x21,[sp, #0x30]
7101dc95ec  stp x20,x19,[sp, #0x40]
7101dc95f0  stp x29,x30,[sp, #0x50]
7101dc95f4  add x29,sp,#0x50
7101dc95f8  and w23,w1,#0x1
7101dc95fc  mov x19,x0
7101dc9600  strb w23,[x0, #0x298]
7101dc9604  ldr x0,[x0, #0x28]
7101dc9608  tbz w1,#0x0,0x7101dc967c
7101dc960c  fmov s0,0x3f800000
7101dc9610  adrp x1,0x71042b4000
7101dc9614  add x1,x1,#0x7e8
7101dc9618  mov w22,w3
7101dc961c  mov w20,w2
7101dc9620  add x21,x19,#0x20
7101dc9624  bl 0x7103778300
7101dc9628  cbnz w20,0x7101dc96b0
7101dc962c  tbnz w22,#0x0,0x7101dc96b0
7101dc9630  adrp x1,0x71042e7000
7101dc9634  add x1,x1,#0x6cb
7101dc9638  add x8,sp,#0x10
7101dc963c  mov x0,x21
7101dc9640  bl 0x7103776910
7101dc9644  adrp x1,0x71043be000
7101dc9648  add x1,x1,#0xace
7101dc964c  add x0,sp,#0x10
7101dc9650  bl 0x710377a120
7101dc9654  ldr x0,[sp, #0x18]
7101dc9658  adrp x8,0x710523d000
7101dc965c  add x8,x8,#0x9a8
7101dc9660  stp x8,xzr,[sp, #0x10]
7101dc9664  cbz x0,0x7101dc966c
7101dc9668  bl 0x710392eb40
7101dc966c  ldr x0,[x19, #0x28]
7101dc9670  adrp x1,0x710436c000
7101dc9674  add x1,x1,#0x8b4
7101dc9678  b 0x7101dc9684
7101dc967c  adrp x1,0x7104454000
7101dc9680  add x1,x1,#0xf8a
7101dc9684  fmov s0,0x3f800000
7101dc9688  bl 0x7103778300
7101dc968c  mov x0,x19
7101dc9690  strb w23,[x19, #0x158]
7101dc9694  bl 0x7101dc7bf0
7101dc9698  ldp x29,x30,[sp, #0x50]
7101dc969c  ldr x23,[sp, #0x20]
7101dc96a0  ldp x20,x19,[sp, #0x40]
7101dc96a4  ldp x22,x21,[sp, #0x30]
7101dc96a8  add sp,sp,#0x60
7101dc96ac  ret
7101dc96b0  ldr x0,[x19, #0x28]
7101dc96b4  fmov s0,0x3f800000
7101dc96b8  adrp x1,0x710425f000
7101dc96bc  add x1,x1,#0x946
7101dc96c0  bl 0x7103778300
7101dc96c4  adrp x1,0x7104270000
7101dc96c8  add x1,x1,#0x462
7101dc96cc  add x8,sp,#0x10
7101dc96d0  mov x0,x21
7101dc96d4  bl 0x7103776640
7101dc96d8  adrp x1,0x71042b2000
7101dc96dc  add x1,x1,#0x92e
7101dc96e0  mov x8,sp
7101dc96e4  add x0,sp,#0x10
7101dc96e8  mov x21,sp
7101dc96ec  bl 0x7103776910
7101dc96f0  ldr x0,[x19, #0x2a0]
7101dc96f4  cmp x0,x21
7101dc96f8  b.eq 0x7101dc9738
7101dc96fc  ldr x8,[sp, #0x8]
7101dc9700  ldr x8,[x8]
7101dc9704  ldr x9,[x0, #0x8]
7101dc9708  str x8,[x9]
7101dc970c  ldr x8,[sp, #0x8]
7101dc9710  ldr x8,[x8, #0x8]
7101dc9714  ldr x9,[x0, #0x8]
7101dc9718  str x8,[x9, #0x8]
7101dc971c  ldr x8,[sp, #0x8]
7101dc9720  ldr x9,[x8, #0x10]
7101dc9724  ldr x10,[x0, #0x8]
7101dc9728  str x9,[x10, #0x10]
7101dc972c  ldr x8,[x8, #0x18]
7101dc9730  ldr x9,[x0, #0x8]
7101dc9734  str x8,[x9, #0x18]
7101dc9738  mov x8,xzr
7101dc973c  adrp x9,0x71043be000
7101dc9740  add x9,x9,#0xaa4
7101dc9744  b 0x7101dc9750
7101dc9748  add x8,x8,#0x2
7101dc974c  strb w11,[x10, #0x19]
7101dc9750  add x11,x9,x8
7101dc9754  ldrb w12,[x11]
7101dc9758  cbz w12,0x7101dc9770
7101dc975c  add x10,x0,x8
7101dc9760  strb w12,[x10, #0x18]
7101dc9764  ldrb w11,[x11, #0x1]
7101dc9768  cbnz w11,0x7101dc9748
7101dc976c  add x8,x8,#0x1
7101dc9770  add x1,x0,#0x18
7101dc9774  strb wzr,[x1, w8, UXTW ]
7101dc9778  ldrb w10,[x0, #0x18]
7101dc977c  mov w9,#0x9dc5
7101dc9780  movk w9,#0x811c, LSL #16
7101dc9784  str w8,[x0, #0x14]
7101dc9788  cbz w10,0x7101dc97a8
7101dc978c  add x8,x0,#0x19
7101dc9790  mov w11,#0x89
7101dc9794  mul w9,w9,w11
7101dc9798  and w10,w10,#0xff
7101dc979c  eor w9,w9,w10
7101dc97a0  ldrb w10,[x8], #0x1
7101dc97a4  cbnz w10,0x7101dc9794
7101dc97a8  ldr w3,[x0, #0x94]
7101dc97ac  mov w2,#0x1
7101dc97b0  str w9,[x0, #0x10]
7101dc97b4  bl 0x710377a280
7101dc97b8  ldr x0,[x19, #0x2a0]
7101dc97bc  ldr w8,[x0, #0x94]
7101dc97c0  cmp w8,w20
7101dc97c4  b.eq 0x7101dc97dc
7101dc97c8  add x1,x0,#0x18
7101dc97cc  mov w2,#0x1
7101dc97d0  mov w3,w20
7101dc97d4  str w20,[x0, #0x94]
7101dc97d8  bl 0x710377a280
7101dc97dc  ldr x0,[sp, #0x8]
7101dc97e0  adrp x21,0x710523d000
7101dc97e4  add x21,x21,#0x9a8
7101dc97e8  stp x21,xzr,[sp]
7101dc97ec  cbz x0,0x7101dc97f4
7101dc97f0  bl 0x710392eb40
7101dc97f4  ldr x20,[sp, #0x18]
7101dc97f8  adrp x8,0x710523d000
7101dc97fc  add x8,x8,#0x988
7101dc9800  stp x8,xzr,[sp, #0x10]
7101dc9804  cbz x20,0x7101dc968c
7101dc9808  ldr x0,[x20, #0x18]
7101dc980c  stp x21,xzr,[x20, #0x10]
7101dc9810  cbz x0,0x7101dc9818
7101dc9814  bl 0x710392eb40
7101dc9818  mov x0,x20
7101dc981c  bl 0x710392eb40
7101dc9820  b 0x7101dc968c
