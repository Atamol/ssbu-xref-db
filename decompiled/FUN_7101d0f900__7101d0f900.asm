// addr:      7101d0f900
// offset:    0x1d0f900
// name:      FUN_7101d0f900
// mangled:   
// size:      376

7101d0f900  sub sp,sp,#0x50
7101d0f904  str d8,[sp, #0x10]
7101d0f908  str x23,[sp, #0x18]
7101d0f90c  stp x22,x21,[sp, #0x20]
7101d0f910  stp x20,x19,[sp, #0x30]
7101d0f914  stp x29,x30,[sp, #0x40]
7101d0f918  add x29,sp,#0x40
7101d0f91c  adrp x8,0x71050ae000
7101d0f920  add x8,x8,#0xac8
7101d0f924  mov x19,x1
7101d0f928  stp x8,xzr,[x0]
7101d0f92c  orr x8,xzr,#0x1ffffffff
7101d0f930  stp xzr,x8,[x0, #0x60]
7101d0f934  mov w8,#0x1
7101d0f938  mov x21,x0
7101d0f93c  stp xzr,xzr,[x0, #0x10]
7101d0f940  add x22,x0,#0x80
7101d0f944  mov w20,w2
7101d0f948  strb wzr,[x0, #0x58]
7101d0f94c  strb w8,[x0, #0x70]
7101d0f950  str x1,[x0, #0x78]
7101d0f954  mov w1,#0x8
7101d0f958  stp xzr,xzr,[x0, #0x48]
7101d0f95c  mov w0,#0x10
7101d0f960  bl 0x710392e290
7101d0f964  mov x23,x0
7101d0f968  cbnz x0,0x7101d0f9b4
7101d0f96c  adrp x8,0x7105332000
7101d0f970  ldr x0,[x8, #0xf00]
7101d0f974  cbz x0,0x7101d0f9b0
7101d0f978  mov w8,#0x8
7101d0f97c  str wzr,[sp, #0xc]
7101d0f980  add x1,sp,#0xc
7101d0f984  str x8,[sp]
7101d0f988  ldr x8,[x0]
7101d0f98c  ldr x8,[x8, #0x30]
7101d0f990  mov x2,sp
7101d0f994  blr x8
7101d0f998  tbz w0,#0x0,0x7101d0f9b0
7101d0f99c  mov w0,#0x10
7101d0f9a0  mov w1,#0x8
7101d0f9a4  bl 0x710392e290
7101d0f9a8  mov x23,x0
7101d0f9ac  cbnz x0,0x7101d0f9b4
7101d0f9b0  mov x23,xzr
7101d0f9b4  mov x0,x23
7101d0f9b8  bl 0x7103773200
7101d0f9bc  str x23,[x21, #0x80]
7101d0f9c0  str wzr,[x21, #0x88]
7101d0f9c4  adrp x2,0x7104545000
7101d0f9c8  add x2,x2,#0x598
7101d0f9cc  strb wzr,[x21, #0x8c]
7101d0f9d0  ldr x1,[x19]
7101d0f9d4  mov w3,#0x1
7101d0f9d8  mov x0,x22
7101d0f9dc  bl 0x71032cbf30
7101d0f9e0  ldr x8,[x21, #0x80]
7101d0f9e4  ldr x8,[x8]
7101d0f9e8  fmov s8,0x3f800000
7101d0f9ec  mov v0.16B,v8.16B
7101d0f9f0  adrp x1,0x710439d000
7101d0f9f4  add x1,x1,#0x651
7101d0f9f8  ldr x0,[x8, #0x10]
7101d0f9fc  bl 0x7103778300
7101d0fa00  ldr x8,[x21, #0x80]
7101d0fa04  ldr x8,[x8]
7101d0fa08  ldr x0,[x8, #0x10]
7101d0fa0c  mov v0.16B,v8.16B
7101d0fa10  adrp x1,0x71042d6000
7101d0fa14  add x1,x1,#0x4bc
7101d0fa18  bl 0x7103778300
7101d0fa1c  ldr x8,[x21, #0x80]
7101d0fa20  ldr x8,[x8]
7101d0fa24  ldr x0,[x8, #0x10]
7101d0fa28  cmp w20,#0x6
7101d0fa2c  b.ne 0x7101d0fa3c
7101d0fa30  adrp x1,0x7104443000
7101d0fa34  add x1,x1,#0x984
7101d0fa38  b 0x7101d0fa44
7101d0fa3c  adrp x1,0x7104280000
7101d0fa40  add x1,x1,#0xc33
7101d0fa44  fmov s0,0x3f800000
7101d0fa48  bl 0x7103778300
7101d0fa4c  ldr x8,[x19]
7101d0fa50  ldr d8,[sp, #0x10]
7101d0fa54  adrp x1,0x7104545000
7101d0fa58  add x1,x1,#0x598
7101d0fa5c  ldp x29,x30,[sp, #0x40]
7101d0fa60  ldp x20,x19,[sp, #0x30]
7101d0fa64  add x0,x8,#0x8
7101d0fa68  ldp x22,x21,[sp, #0x20]
7101d0fa6c  ldr x23,[sp, #0x18]
7101d0fa70  add sp,sp,#0x50
7101d0fa74  b 0x710323eba0
