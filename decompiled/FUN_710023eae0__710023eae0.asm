// addr:      710023eae0
// offset:    0x23eae0
// name:      FUN_710023eae0
// mangled:   
// size:      412

710023eae0  sub sp,sp,#0xa0
710023eae4  str x21,[sp, #0x70]
710023eae8  stp x20,x19,[sp, #0x80]
710023eaec  stp x29,x30,[sp, #0x90]
710023eaf0  add x29,sp,#0x90
710023eaf4  ldrb w8,[x0, #0x4b0]
710023eaf8  mov x19,x0
710023eafc  cbz w8,0x710023eb20
710023eb00  mov w8,#0x4
710023eb04  movk w8,#0x8001, LSL #16
710023eb08  sub x0,x29,#0x38
710023eb0c  add x1,sp,#0x8
710023eb10  str w8,[sp, #0x8]
710023eb14  bl 0x71001b4200
710023eb18  sub x1,x29,#0x38
710023eb1c  b 0x710023ebf4
710023eb20  ldr w8,[x19, #0x1dc]
710023eb24  cmp w8,#0x2
710023eb28  b.ne 0x710023ebc0
710023eb2c  adrp x8,0x71052a5000
710023eb30  ldr x8,[x8, #0x110]
710023eb34  ldr w9,[x19, #0x288]
710023eb38  cmp w9,#0x0
710023eb3c  csel x8,x8,xzr,ge
710023eb40  cbz x8,0x710023ebdc
710023eb44  ldr x9,[x19, #0x4c0]
710023eb48  ldr x8,[x19, #0x2f0]
710023eb4c  adrp x21,0x71052a4000
710023eb50  ldr x9,[x9, #0x10]
710023eb54  ldr x8,[x8, #0xc0]
710023eb58  ldr x9,[x9, #0x38]
710023eb5c  str x9,[x8, #0x10]
710023eb60  adrp x8,0x71052a4000
710023eb64  ldr x8,[x8, #0xda8]
710023eb68  ldrb w8,[x8]
710023eb6c  ldr x21,[x21, #0xdb0]
710023eb70  add x20,x21,#0x70
710023eb74  cbz w8,0x710023ebb0
710023eb78  adrp x8,0x71052a4000
710023eb7c  ldr x8,[x8, #0xdb8]
710023eb80  ldr x0,[x8]
710023eb84  bl 0x7101717960
710023eb88  ldr w8,[x0]
710023eb8c  cbz w8,0x710023ebb0
710023eb90  ldr x10,[x21, #0xa0]
710023eb94  ldp x9,x10,[x10]
710023eb98  sub x10,x10,x9
710023eb9c  asr x10,x10,#0x3
710023eba0  cmp x10,x8
710023eba4  b.ls 0x710023ec10
710023eba8  ldr x8,[x9, x8, LSL #0x3]
710023ebac  add x20,x8,#0x68
710023ebb0  ldr x8,[x20]
710023ebb4  cbz x8,0x710023ec28
710023ebb8  ldr x20,[x8, #0x10]
710023ebbc  b 0x710023ec2c
710023ebc0  ldr x8,[x19, #0x220]
710023ebc4  ldr x9,[x19, #0x228]
710023ebc8  add x1,sp,#0x40
710023ebcc  ldr x10,[x19, #0x230]
710023ebd0  stp x9,x10,[sp, #0x48]
710023ebd4  str x8,[sp, #0x40]
710023ebd8  b 0x710023ebf4
710023ebdc  add x8,x19,#0x288
710023ebe0  ldp x9,x10,[x8]
710023ebe4  ldr x8,[x8, #0x10]
710023ebe8  stp x10,x8,[sp, #0x30]
710023ebec  str x9,[sp, #0x28]
710023ebf0  add x1,sp,#0x28
710023ebf4  mov x0,x19
710023ebf8  bl 0x710023d9c0
710023ebfc  ldp x29,x30,[sp, #0x90]
710023ec00  ldr x21,[sp, #0x70]
710023ec04  ldp x20,x19,[sp, #0x80]
710023ec08  add sp,sp,#0xa0
710023ec0c  ret
710023ec10  adrp x0,0x71042c4000
710023ec14  add x0,x0,#0x35f
710023ec18  mov w1,#0x47
710023ec1c  orr w2,wzr,#0xe0000003
710023ec20  mov w3,wzr
710023ec24  bl 0x71001b1300
710023ec28  mov x20,xzr
710023ec2c  add x0,x19,#0x470
710023ec30  bl 0x71001b07b0
710023ec34  add x8,sp,#0x8
710023ec38  str x0,[x20, #0x68]
710023ec3c  bl 0x71001b12a0
710023ec40  adrp x8,0x71052a6000
710023ec44  ldr x8,[x8, #0xc28]
710023ec48  ldr x9,[sp, #0x8]
710023ec4c  str x9,[x20, #0x60]
710023ec50  adrp x9,0x71052a7000
710023ec54  ldr x9,[x9, #0x8a8]
710023ec58  add x8,x8,#0x10
710023ec5c  stp x8,x9,[sp, #0x8]
710023ec60  adrp x8,0x7104411000
710023ec64  add x8,x8,#0x4cc
710023ec68  add x1,sp,#0x8
710023ec6c  mov x0,x19
710023ec70  stp xzr,x8,[sp, #0x18]
710023ec74  bl 0x71001d3d60
710023ec78  b 0x710023ebfc
