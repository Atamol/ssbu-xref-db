// addr:      710018eaf0
// offset:    0x18eaf0
// name:      FUN_710018eaf0
// mangled:   
// size:      288

710018eaf0  str x21,[sp, #-0x30]!
710018eaf4  stp x20,x19,[sp, #0x10]
710018eaf8  stp x29,x30,[sp, #0x20]
710018eafc  add x29,sp,#0x20
710018eb00  mov x20,x1
710018eb04  mov x19,x0
710018eb08  bl 0x71000b4920
710018eb0c  cmp w0,#0x4
710018eb10  b.eq 0x710018eb34
710018eb14  mov x0,x19
710018eb18  bl 0x71000b4920
710018eb1c  cmp w0,#0x1
710018eb20  b.eq 0x710018eb34
710018eb24  mov x0,x19
710018eb28  bl 0x71000b4920
710018eb2c  cmp w0,#0x3
710018eb30  b.ne 0x710018eb4c
710018eb34  mov w19,wzr
710018eb38  mov w0,w19
710018eb3c  ldp x29,x30,[sp, #0x20]
710018eb40  ldp x20,x19,[sp, #0x10]
710018eb44  ldr x21,[sp], #0x30
710018eb48  ret
710018eb4c  cbz x20,0x710018eb5c
710018eb50  mov x0,x20
710018eb54  str x20,[x19, #0x68]
710018eb58  bl 0x71000b4160
710018eb5c  adrp x8,0x71052a4000
710018eb60  ldr x8,[x8, #0xc70]
710018eb64  ldr x20,[x8]
710018eb68  ldrsw x21,[x19, #0x60]
710018eb6c  bl 0x71000bb680
710018eb70  ldr x8,[x0]
710018eb74  ldr x9,[x20, #0x30]
710018eb78  adrp x20,0x71052a4000
710018eb7c  madd x8,x8,x21,x9
710018eb80  str x8,[x19, #0x58]
710018eb84  ldr x20,[x20, #0xdf0]
710018eb88  ldr x0,[x20]
710018eb8c  mov w1,#0x2
710018eb90  bl 0x7100191ed0
710018eb94  ldr x8,[x19]
710018eb98  ldr x8,[x8, #0x10]
710018eb9c  mov w1,#0x1
710018eba0  mov x0,x19
710018eba4  mov w21,#0x1
710018eba8  blr x8
710018ebac  adrp x8,0x71052a6000
710018ebb0  ldr x8,[x8, #0x628]
710018ebb4  stp x8,xzr,[x19, #0x30]
710018ebb8  adrp x8,0x710438b000
710018ebbc  add x8,x8,#0xecf
710018ebc0  str x8,[x19, #0x40]
710018ebc4  ldr x8,[x20]
710018ebc8  ldr x19,[x8, #0x20]
710018ebcc  ldrb w9,[x19, #0xf4]
710018ebd0  cbz w9,0x710018ebe4
710018ebd4  mov x0,x19
710018ebd8  bl 0x71001a85d0
710018ebdc  strb w21,[x19, #0x48]
710018ebe0  ldr x8,[x20]
710018ebe4  ldr x20,[x8, #0x38]
710018ebe8  cbz x20,0x710018ec08
710018ebec  ldrb w8,[x20, #0x84]
710018ebf0  mov w19,#0x1
710018ebf4  cbz w8,0x710018eb38
710018ebf8  mov x0,x20
710018ebfc  bl 0x71001a2880
710018ec00  strb w19,[x20, #0x48]
710018ec04  b 0x710018eb38
710018ec08  mov w19,#0x1
710018ec0c  b 0x710018eb38
