// addr:      7101cd6f50
// offset:    0x1cd6f50
// name:      FUN_7101cd6f50
// mangled:   
// size:      440

7101cd6f50  sub sp,sp,#0x70
7101cd6f54  str x23,[sp, #0x30]
7101cd6f58  stp x22,x21,[sp, #0x40]
7101cd6f5c  stp x20,x19,[sp, #0x50]
7101cd6f60  stp x29,x30,[sp, #0x60]
7101cd6f64  add x29,sp,#0x60
7101cd6f68  mov x19,x1
7101cd6f6c  mov x20,x0
7101cd6f70  adrp x1,0x7104338000
7101cd6f74  add x1,x1,#0xd31
7101cd6f78  add x8,sp,#0x8
7101cd6f7c  mov x0,x19
7101cd6f80  bl 0x7103776910
7101cd6f84  adrp x23,0x710523d000
7101cd6f88  add x23,x23,#0x9a8
7101cd6f8c  mov w0,#0x10
7101cd6f90  mov w1,#0x20
7101cd6f94  str x23,[sp, #0x18]
7101cd6f98  bl 0x710392e290
7101cd6f9c  cbnz x0,0x7101cd6fe4
7101cd6fa0  adrp x8,0x7105332000
7101cd6fa4  ldr x0,[x8, #0xf00]
7101cd6fa8  cbz x0,0x7101cd6fe0
7101cd6fac  mov w8,#0x20
7101cd6fb0  stur wzr,[x29, #-0x24]
7101cd6fb4  sub x1,x29,#0x24
7101cd6fb8  str x8,[sp, #0x28]
7101cd6fbc  ldr x8,[x0]
7101cd6fc0  ldr x8,[x8, #0x30]
7101cd6fc4  add x2,sp,#0x28
7101cd6fc8  blr x8
7101cd6fcc  tbz w0,#0x0,0x7101cd6fe0
7101cd6fd0  mov w0,#0x10
7101cd6fd4  mov w1,#0x20
7101cd6fd8  bl 0x710392e290
7101cd6fdc  cbnz x0,0x7101cd6fe4
7101cd6fe0  mov x0,xzr
7101cd6fe4  stp xzr,xzr,[x0, #0x10]
7101cd6fe8  mov x22,x0
7101cd6fec  stp xzr,xzr,[x0]
7101cd6ff0  ldr x8,[sp, #0x10]
7101cd6ff4  str x0,[sp, #0x20]
7101cd6ff8  ldr x9,[x8]
7101cd6ffc  str x9,[x0]
7101cd7000  ldr x8,[x8, #0x8]
7101cd7004  str x8,[x0, #0x8]
7101cd7008  ldr x21,[sp, #0x10]
7101cd700c  ldr x8,[x21, #0x10]
7101cd7010  str x8,[x22, #0x10]
7101cd7014  ldr x8,[x21, #0x18]
7101cd7018  str x8,[x22, #0x18]
7101cd701c  ldrsw x8,[x20, #0x208]
7101cd7020  cmp w8,#0x6
7101cd7024  b.hi 0x7101cd703c
7101cd7028  adrp x9,0x71050ae000
7101cd702c  add x9,x9,#0x580
7101cd7030  add x0,sp,#0x18
7101cd7034  ldr x1,[x9, x8, LSL #0x3]
7101cd7038  bl 0x710377a120
7101cd703c  stp x23,xzr,[sp, #0x18]
7101cd7040  cbz x22,0x7101cd704c
7101cd7044  mov x0,x22
7101cd7048  bl 0x710392eb40
7101cd704c  stp x23,xzr,[sp, #0x8]
7101cd7050  cbz x21,0x7101cd705c
7101cd7054  mov x0,x21
7101cd7058  bl 0x710392eb40
7101cd705c  ldr w8,[x20, #0x208]
7101cd7060  cmp w8,#0x6
7101cd7064  b.hi 0x7101cd70f0
7101cd7068  adrp x9,0x71044f9000
7101cd706c  add x9,x9,#0xebc
7101cd7070  ldrsw x8,[x9, x8, LSL #0x2]
7101cd7074  add x8,x8,x9
7101cd7078  br x8
7101cd707c  ldr x0,[x19, #0x8]
7101cd7080  adrp x1,0x7104291000
7101cd7084  add x1,x1,#0xd88
7101cd7088  b 0x7101cd70e8
7101cd708c  ldr x0,[x19, #0x8]
7101cd7090  adrp x1,0x71042f8000
7101cd7094  add x1,x1,#0x3ed
7101cd7098  b 0x7101cd70e8
7101cd709c  ldr x0,[x19, #0x8]
7101cd70a0  adrp x1,0x710439d000
7101cd70a4  add x1,x1,#0x58d
7101cd70a8  b 0x7101cd70e8
7101cd70ac  ldr x0,[x19, #0x8]
7101cd70b0  adrp x1,0x7104433000
7101cd70b4  add x1,x1,#0x2c8
7101cd70b8  b 0x7101cd70e8
7101cd70bc  ldr x0,[x19, #0x8]
7101cd70c0  adrp x1,0x71042c4000
7101cd70c4  add x1,x1,#0xf1b
7101cd70c8  b 0x7101cd70e8
7101cd70cc  ldr x0,[x19, #0x8]
7101cd70d0  adrp x1,0x71043be000
7101cd70d4  add x1,x1,#0x74c
7101cd70d8  b 0x7101cd70e8
7101cd70dc  ldr x0,[x19, #0x8]
7101cd70e0  adrp x1,0x710434a000
7101cd70e4  add x1,x1,#0x4b7
7101cd70e8  fmov s0,0x3f800000
7101cd70ec  bl 0x7103778300
7101cd70f0  ldp x29,x30,[sp, #0x60]
7101cd70f4  ldr x23,[sp, #0x30]
7101cd70f8  ldp x20,x19,[sp, #0x50]
7101cd70fc  ldp x22,x21,[sp, #0x40]
7101cd7100  add sp,sp,#0x70
7101cd7104  ret
