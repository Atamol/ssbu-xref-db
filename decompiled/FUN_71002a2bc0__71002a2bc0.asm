// addr:      71002a2bc0
// offset:    0x2a2bc0
// name:      FUN_71002a2bc0
// mangled:   
// size:      296

71002a2bc0  sub sp,sp,#0x50
71002a2bc4  str x21,[sp, #0x20]
71002a2bc8  stp x20,x19,[sp, #0x30]
71002a2bcc  stp x29,x30,[sp, #0x40]
71002a2bd0  add x29,sp,#0x40
71002a2bd4  adrp x8,0x71052a4000
71002a2bd8  ldr x8,[x8, #0xda8]
71002a2bdc  adrp x21,0x71052a4000
71002a2be0  ldrb w8,[x8]
71002a2be4  ldr x21,[x21, #0xdb0]
71002a2be8  mov x19,x0
71002a2bec  add x20,x21,#0x28
71002a2bf0  cbz w8,0x71002a2c2c
71002a2bf4  adrp x8,0x71052a4000
71002a2bf8  ldr x8,[x8, #0xdb8]
71002a2bfc  ldr x0,[x8]
71002a2c00  bl 0x7101717960
71002a2c04  ldr w8,[x0]
71002a2c08  cbz w8,0x71002a2c2c
71002a2c0c  ldr x10,[x21, #0xa0]
71002a2c10  ldp x9,x10,[x10]
71002a2c14  sub x10,x10,x9
71002a2c18  asr x10,x10,#0x3
71002a2c1c  cmp x10,x8
71002a2c20  b.ls 0x71002a2cd0
71002a2c24  ldr x8,[x9, x8, LSL #0x3]
71002a2c28  add x20,x8,#0x20
71002a2c2c  ldr x8,[x20]
71002a2c30  ldr x8,[x8, #0x10]
71002a2c34  ldr x0,[x8, #0x18]
71002a2c38  ldr w1,[x19, #0xa0]
71002a2c3c  bl 0x71001cd7d0
71002a2c40  cbz x0,0x71002a2c84
71002a2c44  ldr w8,[x19, #0xbc]
71002a2c48  cmp w8,#0x2
71002a2c4c  b.ne 0x71002a2ca0
71002a2c50  adrp x8,0x71052a6000
71002a2c54  ldr x8,[x8, #0xc28]
71002a2c58  adrp x9,0x71052a8000
71002a2c5c  ldr x9,[x9, #0x830]
71002a2c60  mov x1,sp
71002a2c64  add x8,x8,#0x10
71002a2c68  stp x8,x9,[sp]
71002a2c6c  adrp x8,0x7104411000
71002a2c70  add x8,x8,#0x4cc
71002a2c74  mov x0,x19
71002a2c78  stp xzr,x8,[sp, #0x10]
71002a2c7c  bl 0x71001d3d60
71002a2c80  b 0x71002a2cbc
71002a2c84  mov w8,#0x4
71002a2c88  movk w8,#0x8001, LSL #16
71002a2c8c  mov x0,sp
71002a2c90  sub x1,x29,#0x14
71002a2c94  stur w8,[x29, #-0x14]
71002a2c98  bl 0x71001b4200
71002a2c9c  b 0x71002a2cb0
71002a2ca0  ldp x8,x9,[x19, #0x100]
71002a2ca4  ldr x10,[x19, #0x110]
71002a2ca8  stp x9,x10,[sp, #0x8]
71002a2cac  str x8,[sp]
71002a2cb0  mov x1,sp
71002a2cb4  mov x0,x19
71002a2cb8  bl 0x71002a2a90
71002a2cbc  ldp x29,x30,[sp, #0x40]
71002a2cc0  ldr x21,[sp, #0x20]
71002a2cc4  ldp x20,x19,[sp, #0x30]
71002a2cc8  add sp,sp,#0x50
71002a2ccc  ret
71002a2cd0  adrp x0,0x71042c4000
71002a2cd4  add x0,x0,#0x35f
71002a2cd8  mov w1,#0x47
71002a2cdc  orr w2,wzr,#0xe0000003
71002a2ce0  mov w3,wzr
71002a2ce4  bl 0x71001b1300
