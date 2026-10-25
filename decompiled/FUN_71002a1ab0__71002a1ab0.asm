// addr:      71002a1ab0
// offset:    0x2a1ab0
// name:      FUN_71002a1ab0
// mangled:   
// size:      392

71002a1ab0  sub sp,sp,#0x50
71002a1ab4  str x21,[sp, #0x20]
71002a1ab8  stp x20,x19,[sp, #0x30]
71002a1abc  stp x29,x30,[sp, #0x40]
71002a1ac0  add x29,sp,#0x40
71002a1ac4  adrp x8,0x71052a4000
71002a1ac8  ldr x8,[x8, #0xda8]
71002a1acc  adrp x21,0x71052a4000
71002a1ad0  ldrb w8,[x8]
71002a1ad4  ldr x21,[x21, #0xdb0]
71002a1ad8  mov x19,x0
71002a1adc  add x20,x21,#0x28
71002a1ae0  cbz w8,0x71002a1b1c
71002a1ae4  adrp x8,0x71052a4000
71002a1ae8  ldr x8,[x8, #0xdb8]
71002a1aec  ldr x0,[x8]
71002a1af0  bl 0x7101717960
71002a1af4  ldr w8,[x0]
71002a1af8  cbz w8,0x71002a1b1c
71002a1afc  ldr x10,[x21, #0xa0]
71002a1b00  ldp x9,x10,[x10]
71002a1b04  sub x10,x10,x9
71002a1b08  asr x10,x10,#0x3
71002a1b0c  cmp x10,x8
71002a1b10  b.ls 0x71002a1c20
71002a1b14  ldr x8,[x9, x8, LSL #0x3]
71002a1b18  add x20,x8,#0x20
71002a1b1c  ldr x8,[x20]
71002a1b20  ldr x8,[x8, #0x10]
71002a1b24  ldr x0,[x8, #0x18]
71002a1b28  ldr w1,[x19, #0xa0]
71002a1b2c  bl 0x71001cd7d0
71002a1b30  cbz x0,0x71002a1b48
71002a1b34  ldr w8,[x19, #0xbc]
71002a1b38  cmp w8,#0x2
71002a1b3c  b.ne 0x71002a1b84
71002a1b40  orr w8,wzr,#0x10001
71002a1b44  b 0x71002a1b54
71002a1b48  mov w8,#0x4
71002a1b4c  movk w8,#0x8072, LSL #16
71002a1b50  sub w8,w8,#0x710, LSL #12
71002a1b54  stur w8,[x29, #-0x14]
71002a1b58  mov x0,sp
71002a1b5c  sub x1,x29,#0x14
71002a1b60  bl 0x71001b4200
71002a1b64  mov x1,sp
71002a1b68  mov x0,x19
71002a1b6c  bl 0x71002a1850
71002a1b70  ldp x29,x30,[sp, #0x40]
71002a1b74  ldr x21,[sp, #0x20]
71002a1b78  ldp x20,x19,[sp, #0x30]
71002a1b7c  add sp,sp,#0x50
71002a1b80  ret
71002a1b84  ldp x8,x9,[x19, #0x100]
71002a1b88  ldr x10,[x19, #0x110]
71002a1b8c  mov w20,#0x4
71002a1b90  movk w20,#0x8072, LSL #16
71002a1b94  mov x0,sp
71002a1b98  sub x1,x29,#0x14
71002a1b9c  stur w20,[x29, #-0x14]
71002a1ba0  str x8,[sp]
71002a1ba4  stp x9,x10,[sp, #0x8]
71002a1ba8  bl 0x71001b4260
71002a1bac  tbz w0,#0x0,0x71002a1bcc
71002a1bb0  ldr x8,[x19, #0x148]
71002a1bb4  ldr x0,[x8, #0x10]
71002a1bb8  bl 0x710029f670
71002a1bbc  ldr w8,[x19, #0x138]
71002a1bc0  cbz w8,0x71002a1be4
71002a1bc4  stur w20,[x29, #-0x14]
71002a1bc8  b 0x71002a1b58
71002a1bcc  add x8,x19,#0x100
71002a1bd0  ldp x9,x10,[x8]
71002a1bd4  ldr x8,[x8, #0x10]
71002a1bd8  stp x10,x8,[sp, #0x8]
71002a1bdc  str x9,[sp]
71002a1be0  b 0x71002a1b64
71002a1be4  adrp x8,0x71052a6000
71002a1be8  mov w9,#0x1
71002a1bec  mov x1,sp
71002a1bf0  ldr x8,[x8, #0xc28]
71002a1bf4  str w9,[x19, #0x138]
71002a1bf8  adrp x9,0x71052a8000
71002a1bfc  ldr x9,[x9, #0x808]
71002a1c00  add x8,x8,#0x10
71002a1c04  mov x0,x19
71002a1c08  stp x8,x9,[sp]
71002a1c0c  adrp x8,0x7104411000
71002a1c10  add x8,x8,#0x4cc
71002a1c14  stp xzr,x8,[sp, #0x10]
71002a1c18  bl 0x71001d3d60
71002a1c1c  b 0x71002a1b70
71002a1c20  adrp x0,0x71042c4000
71002a1c24  add x0,x0,#0x35f
71002a1c28  mov w1,#0x47
71002a1c2c  orr w2,wzr,#0xe0000003
71002a1c30  mov w3,wzr
71002a1c34  bl 0x71001b1300
