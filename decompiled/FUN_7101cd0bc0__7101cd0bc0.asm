// addr:      7101cd0bc0
// offset:    0x1cd0bc0
// name:      FUN_7101cd0bc0
// mangled:   
// size:      444

7101cd0bc0  sub sp,sp,#0x50
7101cd0bc4  str x23,[sp, #0x10]
7101cd0bc8  stp x22,x21,[sp, #0x20]
7101cd0bcc  stp x20,x19,[sp, #0x30]
7101cd0bd0  stp x29,x30,[sp, #0x40]
7101cd0bd4  add x29,sp,#0x40
7101cd0bd8  ldr x8,[x0, #0x100]
7101cd0bdc  ldr x22,[x8]
7101cd0be0  mov x8,sp
7101cd0be4  add x20,x22,#0x8
7101cd0be8  mov x19,x0
7101cd0bec  adrp x1,0x71043ad000
7101cd0bf0  add x1,x1,#0x8b7
7101cd0bf4  mov x0,x20
7101cd0bf8  bl 0x7103776910
7101cd0bfc  ldr x21,[sp, #0x8]
7101cd0c00  mov x0,x21
7101cd0c04  bl 0x7103779650
7101cd0c08  adrp x23,0x710523d000
7101cd0c0c  add x23,x23,#0x9a8
7101cd0c10  stp x23,xzr,[sp]
7101cd0c14  cbz x21,0x7101cd0c20
7101cd0c18  mov x0,x21
7101cd0c1c  bl 0x710392eb40
7101cd0c20  adrp x1,0x7104464000
7101cd0c24  add x1,x1,#0x37f
7101cd0c28  mov x8,sp
7101cd0c2c  mov x0,x20
7101cd0c30  bl 0x7103776910
7101cd0c34  ldr x21,[sp, #0x8]
7101cd0c38  mov x0,x21
7101cd0c3c  bl 0x7103779650
7101cd0c40  stp x23,xzr,[sp]
7101cd0c44  cbz x21,0x7101cd0c50
7101cd0c48  mov x0,x21
7101cd0c4c  bl 0x710392eb40
7101cd0c50  adrp x1,0x71042e7000
7101cd0c54  add x1,x1,#0x3e2
7101cd0c58  mov x8,sp
7101cd0c5c  mov x0,x20
7101cd0c60  bl 0x7103776910
7101cd0c64  ldr x21,[sp, #0x8]
7101cd0c68  mov x0,x21
7101cd0c6c  bl 0x7103779650
7101cd0c70  stp x23,xzr,[sp]
7101cd0c74  cbz x21,0x7101cd0c80
7101cd0c78  mov x0,x21
7101cd0c7c  bl 0x710392eb40
7101cd0c80  adrp x1,0x7104308000
7101cd0c84  add x1,x1,#0x6d0
7101cd0c88  mov x8,sp
7101cd0c8c  mov x0,x20
7101cd0c90  bl 0x7103776910
7101cd0c94  ldr x21,[sp, #0x8]
7101cd0c98  mov x0,x21
7101cd0c9c  bl 0x7103779650
7101cd0ca0  stp x23,xzr,[sp]
7101cd0ca4  cbz x21,0x7101cd0cb0
7101cd0ca8  mov x0,x21
7101cd0cac  bl 0x710392eb40
7101cd0cb0  adrp x1,0x710432a000
7101cd0cb4  add x1,x1,#0x101
7101cd0cb8  mov x8,sp
7101cd0cbc  mov x0,x20
7101cd0cc0  bl 0x7103776910
7101cd0cc4  ldr x21,[sp, #0x8]
7101cd0cc8  mov x0,x21
7101cd0ccc  bl 0x7103779650
7101cd0cd0  stp x23,xzr,[sp]
7101cd0cd4  cbz x21,0x7101cd0ce0
7101cd0cd8  mov x0,x21
7101cd0cdc  bl 0x710392eb40
7101cd0ce0  adrp x1,0x71042a3000
7101cd0ce4  add x1,x1,#0x19b
7101cd0ce8  mov x8,sp
7101cd0cec  mov x0,x20
7101cd0cf0  bl 0x7103776910
7101cd0cf4  ldr x20,[sp, #0x8]
7101cd0cf8  mov x0,x20
7101cd0cfc  bl 0x7103779650
7101cd0d00  stp x23,xzr,[sp]
7101cd0d04  cbz x20,0x7101cd0d10
7101cd0d08  mov x0,x20
7101cd0d0c  bl 0x710392eb40
7101cd0d10  ldr x8,[x19, #0x118]
7101cd0d14  ldr x20,[x8, #0x8]
7101cd0d18  stp xzr,xzr,[x8]
7101cd0d1c  cbz x20,0x7101cd0d50
7101cd0d20  add x8,x20,#0x8
7101cd0d24  ldaxr x9,[x8]
7101cd0d28  sub x10,x9,#0x1
7101cd0d2c  stlxr w11,x10,[x8]
7101cd0d30  cbnz w11,0x7101cd0d24
7101cd0d34  cbnz x9,0x7101cd0d50
7101cd0d38  ldr x8,[x20]
7101cd0d3c  ldr x8,[x8, #0x10]
7101cd0d40  mov x0,x20
7101cd0d44  blr x8
7101cd0d48  mov x0,x20
7101cd0d4c  bl 0x71039c2670
7101cd0d50  str xzr,[x19, #0x128]
7101cd0d54  ldr x0,[x22, #0x10]
7101cd0d58  adrp x1,0x7104433000
7101cd0d5c  add x1,x1,#0x949
7101cd0d60  bl 0x7103778760
7101cd0d64  ldp x29,x30,[sp, #0x40]
7101cd0d68  ldr x23,[sp, #0x10]
7101cd0d6c  ldp x20,x19,[sp, #0x30]
7101cd0d70  ldp x22,x21,[sp, #0x20]
7101cd0d74  add sp,sp,#0x50
7101cd0d78  ret
