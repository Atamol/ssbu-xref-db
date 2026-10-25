// addr:      71002a4b30
// offset:    0x2a4b30
// name:      FUN_71002a4b30
// mangled:   
// size:      296

71002a4b30  sub sp,sp,#0x80
71002a4b34  stp x22,x21,[sp, #0x50]
71002a4b38  stp x20,x19,[sp, #0x60]
71002a4b3c  stp x29,x30,[sp, #0x70]
71002a4b40  add x29,sp,#0x70
71002a4b44  adrp x8,0x71052a4000
71002a4b48  ldr x8,[x8, #0xda8]
71002a4b4c  adrp x22,0x71052a4000
71002a4b50  ldrb w8,[x8]
71002a4b54  ldr x22,[x22, #0xdb0]
71002a4b58  mov x20,x1
71002a4b5c  mov x19,x0
71002a4b60  add x21,x22,#0x28
71002a4b64  cbz w8,0x71002a4ba0
71002a4b68  adrp x8,0x71052a4000
71002a4b6c  ldr x8,[x8, #0xdb8]
71002a4b70  ldr x0,[x8]
71002a4b74  bl 0x7101717960
71002a4b78  ldr w8,[x0]
71002a4b7c  cbz w8,0x71002a4ba0
71002a4b80  ldr x10,[x22, #0xa0]
71002a4b84  ldp x9,x10,[x10]
71002a4b88  sub x10,x10,x9
71002a4b8c  asr x10,x10,#0x3
71002a4b90  cmp x10,x8
71002a4b94  b.ls 0x71002a4c40
71002a4b98  ldr x8,[x9, x8, LSL #0x3]
71002a4b9c  add x21,x8,#0x20
71002a4ba0  ldr x8,[x21]
71002a4ba4  ldr x8,[x8, #0x10]
71002a4ba8  ldr x0,[x8, #0x18]
71002a4bac  ldr w1,[x19, #0xa0]
71002a4bb0  bl 0x71001cd7d0
71002a4bb4  cbz x0,0x71002a4c24
71002a4bb8  adrp x8,0x71052a5000
71002a4bbc  ldr x8,[x8, #0x110]
71002a4bc0  ldr w9,[x20]
71002a4bc4  cmp w9,#0x0
71002a4bc8  csel x8,x8,xzr,ge
71002a4bcc  cbz x8,0x71002a4bf4
71002a4bd0  ldp x8,x9,[x20]
71002a4bd4  ldr x10,[x20, #0x10]
71002a4bd8  str x8,[sp, #0x20]
71002a4bdc  mov x8,x10
71002a4be0  mov w1,#0x2
71002a4be4  stp x9,x10,[sp, #0x28]
71002a4be8  stp x9,x8,[sp, #0x40]
71002a4bec  ldr x8,[sp, #0x20]
71002a4bf0  b 0x71002a4c14
71002a4bf4  ldp x8,x9,[x20]
71002a4bf8  ldr x10,[x20, #0x10]
71002a4bfc  str x8,[sp, #0x8]
71002a4c00  mov x8,x10
71002a4c04  orr w1,wzr,#0x3
71002a4c08  stp x9,x10,[sp, #0x10]
71002a4c0c  stp x9,x8,[sp, #0x40]
71002a4c10  ldr x8,[sp, #0x8]
71002a4c14  str x8,[sp, #0x38]
71002a4c18  add x2,sp,#0x38
71002a4c1c  mov w3,#0x1
71002a4c20  bl 0x71001d0f00
71002a4c24  mov x0,x19
71002a4c28  bl 0x71001cd870
71002a4c2c  ldp x29,x30,[sp, #0x70]
71002a4c30  ldp x20,x19,[sp, #0x60]
71002a4c34  ldp x22,x21,[sp, #0x50]
71002a4c38  add sp,sp,#0x80
71002a4c3c  ret
71002a4c40  adrp x0,0x71042c4000
71002a4c44  add x0,x0,#0x35f
71002a4c48  mov w1,#0x47
71002a4c4c  orr w2,wzr,#0xe0000003
71002a4c50  mov w3,wzr
71002a4c54  bl 0x71001b1300
