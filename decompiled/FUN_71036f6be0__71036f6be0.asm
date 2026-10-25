// addr:      71036f6be0
// offset:    0x36f6be0
// name:      FUN_71036f6be0
// mangled:   
// size:      456

71036f6be0  sub sp,sp,#0x70
71036f6be4  stp x28,x27,[sp, #0x10]
71036f6be8  stp x26,x25,[sp, #0x20]
71036f6bec  stp x24,x23,[sp, #0x30]
71036f6bf0  stp x22,x21,[sp, #0x40]
71036f6bf4  stp x20,x19,[sp, #0x50]
71036f6bf8  stp x29,x30,[sp, #0x60]
71036f6bfc  add x29,sp,#0x60
71036f6c00  ldr x26,[x0, #0x8]
71036f6c04  ldr x8,[x26, #0x30]
71036f6c08  mov x20,x4
71036f6c0c  mov x21,x3
71036f6c10  mov x23,x2
71036f6c14  cbz x8,0x71036f6d08
71036f6c18  ldr x8,[x26, #0x48]
71036f6c1c  cbz x8,0x71036f6d34
71036f6c20  sub x8,x20,#0x1
71036f6c24  lsr x8,x8,#0x1f
71036f6c28  cbnz x8,0x71036f6d34
71036f6c2c  str x1,[sp]
71036f6c30  add x8,x23,x20
71036f6c34  sub x27,x8,#0x1
71036f6c38  ldp x8,x28,[x26, #0x70]
71036f6c3c  add x8,x28,x8
71036f6c40  mov x19,xzr
71036f6c44  sub x25,x8,#0x1
71036f6c48  cmp x23,x25
71036f6c4c  b.hi 0x71036f6c68
71036f6c50  cmp x23,x28
71036f6c54  b.cc 0x71036f6c68
71036f6c58  ldr x8,[x26, #0x70]
71036f6c5c  cbz x8,0x71036f6c68
71036f6c60  ldr x24,[x26, #0x78]
71036f6c64  b 0x71036f6cc0
71036f6c68  ldp x1,x8,[x26, #0x50]
71036f6c6c  and x24,x23,#-0x40000
71036f6c70  sub x28,x8,x24
71036f6c74  mov w8,#0x80000
71036f6c78  cmp x28,#0x80, LSL #12
71036f6c7c  csel w8,w28,w8,cc
71036f6c80  orr w9,wzr,#0x3ffff
71036f6c84  add w8,w8,w9
71036f6c88  and x2,x8,#0x1c0000
71036f6c8c  ldr x8,[sp]
71036f6c90  str xzr,[sp, #0x8]
71036f6c94  ldr x3,[x8]
71036f6c98  add x0,sp,#0x8
71036f6c9c  mov x4,x24
71036f6ca0  bl 0x71039c6080
71036f6ca4  ldr x8,[sp, #0x8]
71036f6ca8  mov x25,x0
71036f6cac  stp x8,x24,[x26, #0x70]
71036f6cb0  stp x28,x8,[x26, #0x60]
71036f6cb4  cbnz w25,0x71036f6d5c
71036f6cb8  add x25,x8,x24
71036f6cbc  mov x28,x24
71036f6cc0  cmp x25,x27
71036f6cc4  csel x22,x25,x27,cc
71036f6cc8  sub x9,x22,x23
71036f6ccc  sub x8,x23,x24
71036f6cd0  add x24,x9,#0x1
71036f6cd4  ldr x9,[x26, #0x50]
71036f6cd8  add x1,x9,x8
71036f6cdc  mov x0,x21
71036f6ce0  mov x2,x24
71036f6ce4  bl 0x71039c00e0
71036f6ce8  sub x20,x20,x24
71036f6cec  sub x8,x20,#0x1
71036f6cf0  add x21,x21,x24
71036f6cf4  add x23,x22,#0x1
71036f6cf8  add x19,x24,x19
71036f6cfc  lsr x8,x8,#0x1f
71036f6d00  cbz x8,0x71036f6c48
71036f6d04  b 0x71036f6d38
71036f6d08  mov x19,xzr
71036f6d0c  str xzr,[sp, #0x8]
71036f6d10  cbz x1,0x71036f6d38
71036f6d14  tbnz x23,#0x3f,0x71036f6d38
71036f6d18  cbz x21,0x71036f6d38
71036f6d1c  cbz x20,0x71036f6d38
71036f6d20  ldr x8,[x26, #0x8]
71036f6d24  ldr x1,[x1]
71036f6d28  ldr x8,[x8]
71036f6d2c  cmp x1,x8
71036f6d30  b.eq 0x71036f6d88
71036f6d34  mov x19,xzr
71036f6d38  mov x0,x19
71036f6d3c  ldp x29,x30,[sp, #0x60]
71036f6d40  ldp x20,x19,[sp, #0x50]
71036f6d44  ldp x22,x21,[sp, #0x40]
71036f6d48  ldp x24,x23,[sp, #0x30]
71036f6d4c  ldp x26,x25,[sp, #0x20]
71036f6d50  ldp x28,x27,[sp, #0x10]
71036f6d54  add sp,sp,#0x70
71036f6d58  ret
71036f6d5c  adrp x0,0x71042f6000
71036f6d60  add x0,x0,#0x735
71036f6d64  mov w1,w25
71036f6d68  bl 0x71039c6e90
71036f6d6c  and x0,x25,#0xffffffff
71036f6d70  bl 0x71039c26b0
71036f6d74  adrp x8,0x710533a000
71036f6d78  add x8,x8,#0x10
71036f6d7c  mov w9,#0x1
71036f6d80  stlrb w9,[x8]
71036f6d84  b 0x71036f6d38
71036f6d88  ldr x8,[x26, #0x20]
71036f6d8c  add x2,x8,x23
71036f6d90  add x0,sp,#0x8
71036f6d94  mov x3,x21
71036f6d98  mov x4,x20
71036f6d9c  bl 0x71039c7550
71036f6da0  ldr x19,[sp, #0x8]
71036f6da4  b 0x71036f6d38
