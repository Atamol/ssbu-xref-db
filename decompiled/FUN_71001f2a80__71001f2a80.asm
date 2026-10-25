// addr:      71001f2a80
// offset:    0x1f2a80
// name:      FUN_71001f2a80
// mangled:   
// size:      276

71001f2a80  sub sp,sp,#0x90
71001f2a84  str x27,[sp, #0x30]
71001f2a88  stp x26,x25,[sp, #0x40]
71001f2a8c  stp x24,x23,[sp, #0x50]
71001f2a90  stp x22,x21,[sp, #0x60]
71001f2a94  stp x20,x19,[sp, #0x70]
71001f2a98  stp x29,x30,[sp, #0x80]
71001f2a9c  add x29,sp,#0x80
71001f2aa0  mov x19,x8
71001f2aa4  ldrb w8,[x0, #0x68]
71001f2aa8  mov x21,x2
71001f2aac  mov x22,x1
71001f2ab0  mov x20,x0
71001f2ab4  cbnz w8,0x71001f2ac0
71001f2ab8  mov x0,x20
71001f2abc  bl 0x71001f2180
71001f2ac0  adrp x8,0x71052a4000
71001f2ac4  ldr x8,[x8, #0xd80]
71001f2ac8  mov x25,sp
71001f2acc  mov x23,#-0x1
71001f2ad0  mov x2,x23
71001f2ad4  add x24,x8,#0x10
71001f2ad8  add x26,x25,#0x8
71001f2adc  mov w27,#0x10
71001f2ae0  mov x0,sp
71001f2ae4  mov x1,x22
71001f2ae8  str x24,[sp]
71001f2aec  strb wzr,[sp, #0x8]
71001f2af0  stp x26,x27,[sp, #0x18]
71001f2af4  bl 0x71001b47e0
71001f2af8  add x0,x20,#0x30
71001f2afc  mov x1,sp
71001f2b00  bl 0x710021bff0
71001f2b04  mov x0,sp
71001f2b08  str x24,[sp]
71001f2b0c  bl 0x71001b4910
71001f2b10  mov x0,sp
71001f2b14  mov x1,x22
71001f2b18  mov x2,x23
71001f2b1c  str x24,[sp]
71001f2b20  stp x26,x27,[sp, #0x18]
71001f2b24  strb wzr,[sp, #0x8]
71001f2b28  bl 0x71001b47e0
71001f2b2c  add x0,x20,#0x18
71001f2b30  adrp x2,0x710449d000
71001f2b34  add x2,x2,#0x8aa
71001f2b38  mov x1,sp
71001f2b3c  add x3,sp,#0x38
71001f2b40  str x25,[sp, #0x38]
71001f2b44  add x4,sp,#0x28
71001f2b48  bl 0x710021c260
71001f2b4c  str x21,[x0, #0x48]
71001f2b50  mov x0,sp
71001f2b54  str x24,[sp]
71001f2b58  bl 0x71001b4910
71001f2b5c  orr w8,wzr,#0x10001
71001f2b60  mov x1,sp
71001f2b64  mov x0,x19
71001f2b68  strb wzr,[x20, #0x69]
71001f2b6c  str w8,[sp]
71001f2b70  bl 0x71001b4200
71001f2b74  ldp x29,x30,[sp, #0x80]
71001f2b78  ldr x27,[sp, #0x30]
71001f2b7c  ldp x20,x19,[sp, #0x70]
71001f2b80  ldp x22,x21,[sp, #0x60]
71001f2b84  ldp x24,x23,[sp, #0x50]
71001f2b88  ldp x26,x25,[sp, #0x40]
71001f2b8c  add sp,sp,#0x90
71001f2b90  ret
