// addr:      7101d2f860
// offset:    0x1d2f860
// name:      FUN_7101d2f860
// mangled:   
// size:      264

7101d2f860  ldr x8,[x0, #0x40]
7101d2f864  cbz x8,0x7101d2f964
7101d2f868  sub sp,sp,#0x80
7101d2f86c  stp x22,x21,[sp, #0x50]
7101d2f870  stp x20,x19,[sp, #0x60]
7101d2f874  stp x29,x30,[sp, #0x70]
7101d2f878  add x29,sp,#0x70
7101d2f87c  add x8,sp,#0x8
7101d2f880  add x20,x8,#0x8
7101d2f884  adrp x8,0x71050ae000
7101d2f888  add x8,x8,#0xe58
7101d2f88c  ldr x21,[x8, w1, SXTW #0x3]
7101d2f890  mov x19,x0
7101d2f894  sxtw x22,w1
7101d2f898  strb wzr,[sp, #0x10]
7101d2f89c  adrp x1,0x7104443000
7101d2f8a0  add x1,x1,#0x9e3
7101d2f8a4  str xzr,[sp, #0x8]
7101d2f8a8  add x0,sp,#0x8
7101d2f8ac  mov x2,x21
7101d2f8b0  bl 0x710062dc20
7101d2f8b4  ldr x8,[x19, #0x40]
7101d2f8b8  ldr x0,[x8]
7101d2f8bc  cbz x0,0x7101d2f8dc
7101d2f8c0  add x8,x22,x22, LSL #0x1
7101d2f8c4  add x8,x19,x8
7101d2f8c8  ldrb w3,[x8, #0x50]
7101d2f8cc  adrp x2,0x71043cd000
7101d2f8d0  add x2,x2,#0xb7b
7101d2f8d4  mov x1,x20
7101d2f8d8  bl 0x7103375650
7101d2f8dc  adrp x1,0x710432a000
7101d2f8e0  add x1,x1,#0x2fd
7101d2f8e4  add x0,sp,#0x8
7101d2f8e8  mov x2,x21
7101d2f8ec  bl 0x710062dc20
7101d2f8f0  ldr x8,[x19, #0x40]
7101d2f8f4  ldr x0,[x8]
7101d2f8f8  cbz x0,0x7101d2f918
7101d2f8fc  add x8,x22,x22, LSL #0x1
7101d2f900  add x8,x19,x8
7101d2f904  ldrb w3,[x8, #0x51]
7101d2f908  adrp x2,0x71043cd000
7101d2f90c  add x2,x2,#0xb7b
7101d2f910  mov x1,x20
7101d2f914  bl 0x7103375650
7101d2f918  adrp x1,0x710432a000
7101d2f91c  add x1,x1,#0x30a
7101d2f920  add x0,sp,#0x8
7101d2f924  mov x2,x21
7101d2f928  bl 0x710062dc20
7101d2f92c  ldr x8,[x19, #0x40]
7101d2f930  ldr x0,[x8]
7101d2f934  cbz x0,0x7101d2f954
7101d2f938  add x8,x22,x22, LSL #0x1
7101d2f93c  add x8,x19,x8
7101d2f940  ldrb w3,[x8, #0x52]
7101d2f944  adrp x2,0x71043cd000
7101d2f948  add x2,x2,#0xb7b
7101d2f94c  mov x1,x20
7101d2f950  bl 0x7103375650
7101d2f954  ldp x29,x30,[sp, #0x70]
7101d2f958  ldp x20,x19,[sp, #0x60]
7101d2f95c  ldp x22,x21,[sp, #0x50]
7101d2f960  add sp,sp,#0x80
7101d2f964  ret
