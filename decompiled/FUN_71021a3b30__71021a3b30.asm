// addr:      71021a3b30
// offset:    0x21a3b30
// name:      FUN_71021a3b30
// mangled:   
// size:      300

71021a3b30  sub sp,sp,#0x60
71021a3b34  str x21,[sp, #0x30]
71021a3b38  stp x20,x19,[sp, #0x40]
71021a3b3c  stp x29,x30,[sp, #0x50]
71021a3b40  add x29,sp,#0x50
71021a3b44  ldr x8,[x0, #0x18]
71021a3b48  ldr x8,[x8, #0x18]
71021a3b4c  mov x19,x0
71021a3b50  cmp x8,#0x1
71021a3b54  b.lt 0x71021a3b60
71021a3b58  mov x0,x19
71021a3b5c  bl 0x71038fec40
71021a3b60  mov x0,x19
71021a3b64  bl 0x710391e050
71021a3b68  ldr x8,[x19, #0x10]
71021a3b6c  mov w9,#0x45
71021a3b70  str w9,[x8, #0x8]
71021a3b74  str x0,[x8]
71021a3b78  ldr x8,[x19, #0x10]
71021a3b7c  mov x1,x0
71021a3b80  mov w3,#0x2
71021a3b84  mov x0,x19
71021a3b88  mov w2,wzr
71021a3b8c  mov w20,#0x2
71021a3b90  add x8,x8,#0x10
71021a3b94  str x8,[x19, #0x10]
71021a3b98  bl 0x710391d4c0
71021a3b9c  mov w8,#0xa
71021a3ba0  str w8,[sp, #0x8]
71021a3ba4  mov x8,#0xe563
71021a3ba8  movk x8,#0x7af1, LSL #16
71021a3bac  movk x8,#0x1e, LSL #32
71021a3bb0  mov x0,sp
71021a3bb4  stp x8,xzr,[sp, #0x10]
71021a3bb8  mov x8,#-0x10000
71021a3bbc  movk x8,#0x5000, LSL #16
71021a3bc0  str x8,[sp, #0x20]
71021a3bc4  adrp x8,0x71050b5000
71021a3bc8  add x8,x8,#0x3b8
71021a3bcc  mov w2,#0x1
71021a3bd0  mov x1,x19
71021a3bd4  strh wzr,[sp, #0x28]
71021a3bd8  mov w21,#0x1
71021a3bdc  str x8,[sp]
71021a3be0  bl 0x7101ff91a0
71021a3be4  ldr x8,[x19, #0x10]
71021a3be8  adrp x9,0x71021a3000
71021a3bec  add x9,x9,#0xc60
71021a3bf0  str x9,[x8]
71021a3bf4  str w20,[x8, #0x8]
71021a3bf8  ldr x8,[x19, #0x10]
71021a3bfc  add x9,x8,#0x10
71021a3c00  sub x1,x8,#0x10
71021a3c04  adrp x2,0x710430c000
71021a3c08  add x2,x2,#0x66a
71021a3c0c  mov x0,x19
71021a3c10  str x9,[x19, #0x10]
71021a3c14  bl 0x71038f5390
71021a3c18  ldr x8,[x19, #0x10]
71021a3c1c  str wzr,[x8]
71021a3c20  str w21,[x8, #0x8]
71021a3c24  ldr x8,[x19, #0x10]
71021a3c28  add x9,x8,#0x10
71021a3c2c  sub x1,x8,#0x10
71021a3c30  adrp x2,0x71043b6000
71021a3c34  add x2,x2,#0x852
71021a3c38  mov x0,x19
71021a3c3c  str x9,[x19, #0x10]
71021a3c40  bl 0x71038f5390
71021a3c44  ldp x29,x30,[sp, #0x50]
71021a3c48  ldr x21,[sp, #0x30]
71021a3c4c  ldp x20,x19,[sp, #0x40]
71021a3c50  mov w0,#0x1
71021a3c54  add sp,sp,#0x60
71021a3c58  ret
