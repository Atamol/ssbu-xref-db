// addr:      7101ec4ee0
// offset:    0x1ec4ee0
// name:      FUN_7101ec4ee0
// mangled:   
// size:      356

7101ec4ee0  sub sp,sp,#0x60
7101ec4ee4  stp x22,x21,[sp, #0x30]
7101ec4ee8  stp x20,x19,[sp, #0x40]
7101ec4eec  stp x29,x30,[sp, #0x50]
7101ec4ef0  add x29,sp,#0x50
7101ec4ef4  ldp x8,x22,[x2]
7101ec4ef8  mov x20,x3
7101ec4efc  mov x19,x1
7101ec4f00  mov x21,x0
7101ec4f04  add x0,x0,#0x8
7101ec4f08  str x8,[sp, #0x10]
7101ec4f0c  stp x22,x23,[sp, #0x18]
7101ec4f10  cbz x22,0x7101ec4f74
7101ec4f14  add x23,x22,#0x8
7101ec4f18  ldxr x8,[x23]
7101ec4f1c  add x8,x8,#0x1
7101ec4f20  stxr w9,x8,[x23]
7101ec4f24  cbnz w9,0x7101ec4f18
7101ec4f28  adrp x3,0x7104270000
7101ec4f2c  add x3,x3,#0x70c
7101ec4f30  adrp x4,0x7104413000
7101ec4f34  add x4,x4,#0xab
7101ec4f38  add x2,sp,#0x10
7101ec4f3c  mov x1,x19
7101ec4f40  bl 0x7101ec4db0
7101ec4f44  ldaxr x8,[x23]
7101ec4f48  sub x9,x8,#0x1
7101ec4f4c  stlxr w10,x9,[x23]
7101ec4f50  cbnz w10,0x7101ec4f44
7101ec4f54  cbnz x8,0x7101ec4f90
7101ec4f58  ldr x8,[x22]
7101ec4f5c  ldr x8,[x8, #0x10]
7101ec4f60  mov x0,x22
7101ec4f64  blr x8
7101ec4f68  mov x0,x22
7101ec4f6c  bl 0x71039c2670
7101ec4f70  b 0x7101ec4f90
7101ec4f74  adrp x3,0x7104270000
7101ec4f78  add x3,x3,#0x70c
7101ec4f7c  adrp x4,0x7104413000
7101ec4f80  add x4,x4,#0xab
7101ec4f84  add x2,sp,#0x10
7101ec4f88  mov x1,x19
7101ec4f8c  bl 0x7101ec4db0
7101ec4f90  ldp x8,x20,[x20]
7101ec4f94  add x0,x21,#0x38
7101ec4f98  stp x8,x20,[sp]
7101ec4f9c  cbz x20,0x7101ec5010
7101ec4fa0  add x21,x20,#0x8
7101ec4fa4  ldxr x8,[x21]
7101ec4fa8  add x8,x8,#0x1
7101ec4fac  stxr w9,x8,[x21]
7101ec4fb0  cbnz w9,0x7101ec4fa4
7101ec4fb4  adrp x3,0x7104413000
7101ec4fb8  add x3,x3,#0xb4
7101ec4fbc  adrp x4,0x71043ad000
7101ec4fc0  add x4,x4,#0xfb6
7101ec4fc4  mov x2,sp
7101ec4fc8  mov x1,x19
7101ec4fcc  bl 0x7101ec4db0
7101ec4fd0  ldaxr x8,[x21]
7101ec4fd4  sub x9,x8,#0x1
7101ec4fd8  stlxr w10,x9,[x21]
7101ec4fdc  cbnz w10,0x7101ec4fd0
7101ec4fe0  cbnz x8,0x7101ec502c
7101ec4fe4  ldr x8,[x20]
7101ec4fe8  ldr x8,[x8, #0x10]
7101ec4fec  mov x0,x20
7101ec4ff0  blr x8
7101ec4ff4  mov x0,x20
7101ec4ff8  ldp x29,x30,[sp, #0x50]
7101ec4ffc  ldp x20,x19,[sp, #0x40]
7101ec5000  ldr x23,[sp, #0x20]
7101ec5004  ldp x22,x21,[sp, #0x30]
7101ec5008  add sp,sp,#0x60
7101ec500c  b 0x71039c2670
7101ec5010  adrp x3,0x7104413000
7101ec5014  add x3,x3,#0xb4
7101ec5018  adrp x4,0x71043ad000
7101ec501c  add x4,x4,#0xfb6
7101ec5020  mov x2,sp
7101ec5024  mov x1,x19
7101ec5028  bl 0x7101ec4db0
7101ec502c  ldp x29,x30,[sp, #0x50]
7101ec5030  ldr x23,[sp, #0x20]
7101ec5034  ldp x20,x19,[sp, #0x40]
7101ec5038  ldp x22,x21,[sp, #0x30]
7101ec503c  add sp,sp,#0x60
7101ec5040  ret
