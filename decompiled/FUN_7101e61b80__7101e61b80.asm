// addr:      7101e61b80
// offset:    0x1e61b80
// name:      FUN_7101e61b80
// mangled:   
// size:      360

7101e61b80  sub sp,sp,#0x50
7101e61b84  str x21,[sp, #0x20]
7101e61b88  stp x20,x19,[sp, #0x30]
7101e61b8c  stp x29,x30,[sp, #0x40]
7101e61b90  add x29,sp,#0x40
7101e61b94  ldr w8,[x0, #0x1a4]
7101e61b98  mov x19,x0
7101e61b9c  cbz w8,0x7101e61bd8
7101e61ba0  ldr x8,[x19, #0x200]
7101e61ba4  cbz x8,0x7101e61bc4
7101e61ba8  ldr x8,[x8, #0x8]
7101e61bac  ldr x0,[x8, #0x8]
7101e61bb0  cbz x0,0x7101e61bc4
7101e61bb4  ldr x8,[x0]
7101e61bb8  ldr x8,[x8, #0x138]
7101e61bbc  blr x8
7101e61bc0  tbz w0,#0x0,0x7101e61cd4
7101e61bc4  ldr w8,[x19, #0x19c]
7101e61bc8  subs w8,w8,#0x1
7101e61bcc  b.lt 0x7101e61cd4
7101e61bd0  str w8,[x19, #0x19c]
7101e61bd4  b 0x7101e61cd4
7101e61bd8  ldrb w8,[x19, #0x208]
7101e61bdc  cbz w8,0x7101e61c08
7101e61be0  ldr x0,[x19, #0x200]
7101e61be4  str xzr,[x19, #0x200]
7101e61be8  cbz x0,0x7101e61cd4
7101e61bec  ldr x8,[x0]
7101e61bf0  ldr x1,[x8, #0x8]
7101e61bf4  ldr x21,[sp, #0x20]
7101e61bf8  ldp x29,x30,[sp, #0x40]
7101e61bfc  ldp x20,x19,[sp, #0x30]
7101e61c00  add sp,sp,#0x50
7101e61c04  br x1
7101e61c08  add x0,x19,#0x1e8
7101e61c0c  adrp x1,0x71043e0000
7101e61c10  add x1,x1,#0x83a
7101e61c14  add x8,sp,#0x8
7101e61c18  add x20,sp,#0x8
7101e61c1c  bl 0x71037780e0
7101e61c20  mov w0,#0x10
7101e61c24  mov w1,#0x10
7101e61c28  bl 0x710392e290
7101e61c2c  cbnz x0,0x7101e61c74
7101e61c30  adrp x8,0x7105332000
7101e61c34  ldr x0,[x8, #0xf00]
7101e61c38  cbz x0,0x7101e61c70
7101e61c3c  mov w8,#0x10
7101e61c40  stur wzr,[x29, #-0x14]
7101e61c44  sub x1,x29,#0x14
7101e61c48  str x8,[sp, #0x18]
7101e61c4c  ldr x8,[x0]
7101e61c50  ldr x8,[x8, #0x30]
7101e61c54  add x2,sp,#0x18
7101e61c58  blr x8
7101e61c5c  tbz w0,#0x0,0x7101e61c70
7101e61c60  mov w0,#0x10
7101e61c64  mov w1,#0x10
7101e61c68  bl 0x710392e290
7101e61c6c  cbnz x0,0x7101e61c74
7101e61c70  mov x0,xzr
7101e61c74  adrp x21,0x710523d000
7101e61c78  add x21,x21,#0x9e8
7101e61c7c  cmp x20,x0
7101e61c80  stp x21,xzr,[x0]
7101e61c84  b.eq 0x7101e61c94
7101e61c88  ldr x8,[sp, #0x10]
7101e61c8c  str xzr,[sp, #0x10]
7101e61c90  str x8,[x0, #0x8]
7101e61c94  ldr x8,[x19, #0x200]
7101e61c98  str x0,[x19, #0x200]
7101e61c9c  cbz x8,0x7101e61cb0
7101e61ca0  ldr x9,[x8]
7101e61ca4  ldr x9,[x9, #0x8]
7101e61ca8  mov x0,x8
7101e61cac  blr x9
7101e61cb0  ldr x0,[sp, #0x10]
7101e61cb4  stp x21,xzr,[sp, #0x8]
7101e61cb8  cbz x0,0x7101e61cc0
7101e61cbc  bl 0x710392eb40
7101e61cc0  ldr x0,[x19, #0x200]
7101e61cc4  fmov s0,0x3f800000
7101e61cc8  bl 0x710377aee0
7101e61ccc  mov w8,#0x1
7101e61cd0  strb w8,[x19, #0x208]
7101e61cd4  ldp x29,x30,[sp, #0x40]
7101e61cd8  ldr x21,[sp, #0x20]
7101e61cdc  ldp x20,x19,[sp, #0x30]
7101e61ce0  add sp,sp,#0x50
7101e61ce4  ret
