// addr:      71000f1bc0
// offset:    0xf1bc0
// name:      FUN_71000f1bc0
// mangled:   
// size:      276

71000f1bc0  sub sp,sp,#0x80
71000f1bc4  str x23,[sp, #0x40]
71000f1bc8  stp x22,x21,[sp, #0x50]
71000f1bcc  stp x20,x19,[sp, #0x60]
71000f1bd0  stp x29,x30,[sp, #0x70]
71000f1bd4  add x29,sp,#0x70
71000f1bd8  ldr x21,[x0, #0x70]
71000f1bdc  add x20,x0,#0x80
71000f1be0  mov x19,x0
71000f1be4  add x8,sp,#0x18
71000f1be8  mov x0,x20
71000f1bec  add x22,sp,#0x18
71000f1bf0  bl 0x7100160230
71000f1bf4  add x0,x21,#0x10
71000f1bf8  add x1,sp,#0x18
71000f1bfc  bl 0x71000beb40
71000f1c00  adrp x8,0x71052a4000
71000f1c04  ldr x8,[x8, #0xd20]
71000f1c08  add x8,x8,#0x10
71000f1c0c  add x0,x22,#0x8
71000f1c10  str x8,[sp, #0x18]
71000f1c14  bl 0x71000b1cf0
71000f1c18  ldr x0,[x19, #0x70]
71000f1c1c  mov w8,#0x20000
71000f1c20  str wzr,[sp, #0x20]
71000f1c24  str x8,[sp, #0x18]
71000f1c28  ldr x8,[x0]
71000f1c2c  ldr x8,[x8, #0x18]
71000f1c30  add x1,sp,#0x18
71000f1c34  add x22,sp,#0x18
71000f1c38  blr x8
71000f1c3c  adrp x23,0x71052a4000
71000f1c40  ldr x23,[x23, #0xd88]
71000f1c44  ldr x21,[x23]
71000f1c48  orr x22,x22,#0x4
71000f1c4c  mov x0,x22
71000f1c50  str wzr,[sp, #0x18]
71000f1c54  bl 0x71039c0a80
71000f1c58  sub x1,x29,#0x28
71000f1c5c  mov x0,x22
71000f1c60  stur wzr,[x29, #-0x28]
71000f1c64  bl 0x71039c0a90
71000f1c68  add x0,sp,#0x8
71000f1c6c  add x1,sp,#0x18
71000f1c70  bl 0x71000bce50
71000f1c74  ldrb w8,[x19, #0x78]
71000f1c78  cmp w8,#0x0
71000f1c7c  cset w3,eq
71000f1c80  add x2,sp,#0x8
71000f1c84  mov x0,x21
71000f1c88  mov x1,x20
71000f1c8c  bl 0x71000c5af0
71000f1c90  ldr x0,[x23]
71000f1c94  ldrb w2,[x19, #0x78]
71000f1c98  mov x1,x20
71000f1c9c  bl 0x71000c5ad0
71000f1ca0  adrp x8,0x71052a5000
71000f1ca4  ldr x8,[x8, #0x178]
71000f1ca8  adrp x9,0x71043df000
71000f1cac  add x9,x9,#0x1b3
71000f1cb0  str x9,[x19, #0x40]
71000f1cb4  mov x0,xzr
71000f1cb8  stp x8,xzr,[x19, #0x30]
71000f1cbc  ldr x23,[sp, #0x40]
71000f1cc0  ldp x29,x30,[sp, #0x70]
71000f1cc4  ldp x20,x19,[sp, #0x60]
71000f1cc8  ldp x22,x21,[sp, #0x50]
71000f1ccc  add sp,sp,#0x80
71000f1cd0  ret
