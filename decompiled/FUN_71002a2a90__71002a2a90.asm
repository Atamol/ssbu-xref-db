// addr:      71002a2a90
// offset:    0x2a2a90
// name:      FUN_71002a2a90
// mangled:   
// size:      296

71002a2a90  sub sp,sp,#0x80
71002a2a94  stp x22,x21,[sp, #0x50]
71002a2a98  stp x20,x19,[sp, #0x60]
71002a2a9c  stp x29,x30,[sp, #0x70]
71002a2aa0  add x29,sp,#0x70
71002a2aa4  adrp x8,0x71052a4000
71002a2aa8  ldr x8,[x8, #0xda8]
71002a2aac  adrp x22,0x71052a4000
71002a2ab0  ldrb w8,[x8]
71002a2ab4  ldr x22,[x22, #0xdb0]
71002a2ab8  mov x20,x1
71002a2abc  mov x19,x0
71002a2ac0  add x21,x22,#0x28
71002a2ac4  cbz w8,0x71002a2b00
71002a2ac8  adrp x8,0x71052a4000
71002a2acc  ldr x8,[x8, #0xdb8]
71002a2ad0  ldr x0,[x8]
71002a2ad4  bl 0x7101717960
71002a2ad8  ldr w8,[x0]
71002a2adc  cbz w8,0x71002a2b00
71002a2ae0  ldr x10,[x22, #0xa0]
71002a2ae4  ldp x9,x10,[x10]
71002a2ae8  sub x10,x10,x9
71002a2aec  asr x10,x10,#0x3
71002a2af0  cmp x10,x8
71002a2af4  b.ls 0x71002a2ba0
71002a2af8  ldr x8,[x9, x8, LSL #0x3]
71002a2afc  add x21,x8,#0x20
71002a2b00  ldr x8,[x21]
71002a2b04  ldr x8,[x8, #0x10]
71002a2b08  ldr x0,[x8, #0x18]
71002a2b0c  ldr w1,[x19, #0xa0]
71002a2b10  bl 0x71001cd7d0
71002a2b14  cbz x0,0x71002a2b84
71002a2b18  adrp x8,0x71052a5000
71002a2b1c  ldr x8,[x8, #0x110]
71002a2b20  ldr w9,[x20]
71002a2b24  cmp w9,#0x0
71002a2b28  csel x8,x8,xzr,ge
71002a2b2c  cbz x8,0x71002a2b54
71002a2b30  ldp x8,x9,[x20]
71002a2b34  ldr x10,[x20, #0x10]
71002a2b38  str x8,[sp, #0x20]
71002a2b3c  mov x8,x10
71002a2b40  mov w1,#0x2
71002a2b44  stp x9,x10,[sp, #0x28]
71002a2b48  stp x9,x8,[sp, #0x40]
71002a2b4c  ldr x8,[sp, #0x20]
71002a2b50  b 0x71002a2b74
71002a2b54  ldp x8,x9,[x20]
71002a2b58  ldr x10,[x20, #0x10]
71002a2b5c  str x8,[sp, #0x8]
71002a2b60  mov x8,x10
71002a2b64  orr w1,wzr,#0x3
71002a2b68  stp x9,x10,[sp, #0x10]
71002a2b6c  stp x9,x8,[sp, #0x40]
71002a2b70  ldr x8,[sp, #0x8]
71002a2b74  str x8,[sp, #0x38]
71002a2b78  add x2,sp,#0x38
71002a2b7c  mov w3,#0x1
71002a2b80  bl 0x71001d0f00
71002a2b84  mov x0,x19
71002a2b88  bl 0x71001cd870
71002a2b8c  ldp x29,x30,[sp, #0x70]
71002a2b90  ldp x20,x19,[sp, #0x60]
71002a2b94  ldp x22,x21,[sp, #0x50]
71002a2b98  add sp,sp,#0x80
71002a2b9c  ret
71002a2ba0  adrp x0,0x71042c4000
71002a2ba4  add x0,x0,#0x35f
71002a2ba8  mov w1,#0x47
71002a2bac  orr w2,wzr,#0xe0000003
71002a2bb0  mov w3,wzr
71002a2bb4  bl 0x71001b1300
