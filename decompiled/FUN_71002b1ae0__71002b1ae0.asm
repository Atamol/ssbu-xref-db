// addr:      71002b1ae0
// offset:    0x2b1ae0
// name:      FUN_71002b1ae0
// mangled:   
// size:      252

71002b1ae0  str x21,[sp, #-0x30]!
71002b1ae4  stp x20,x19,[sp, #0x10]
71002b1ae8  stp x29,x30,[sp, #0x20]
71002b1aec  add x29,sp,#0x20
71002b1af0  mov w20,w1
71002b1af4  and w21,w1,#0xffff
71002b1af8  mov w1,#0x1
71002b1afc  mov x19,x0
71002b1b00  bl 0x710022a520
71002b1b04  adrp x8,0x71052a8000
71002b1b08  ldr x8,[x8, #0x9f8]
71002b1b0c  add x8,x8,#0x10
71002b1b10  str x8,[x19]
71002b1b14  cbz w21,0x71002b1bb4
71002b1b18  mov x0,x19
71002b1b1c  mov w1,w20
71002b1b20  bl 0x710022b380
71002b1b24  adrp x8,0x71052a4000
71002b1b28  ldr x8,[x8, #0xda8]
71002b1b2c  adrp x21,0x71052a4000
71002b1b30  ldrb w8,[x8]
71002b1b34  ldr x21,[x21, #0xdb0]
71002b1b38  add x20,x21,#0x70
71002b1b3c  cbz w8,0x71002b1b78
71002b1b40  adrp x8,0x71052a4000
71002b1b44  ldr x8,[x8, #0xdb8]
71002b1b48  ldr x0,[x8]
71002b1b4c  bl 0x7101717960
71002b1b50  ldr w8,[x0]
71002b1b54  cbz w8,0x71002b1b78
71002b1b58  ldr x10,[x21, #0xa0]
71002b1b5c  ldp x9,x10,[x10]
71002b1b60  sub x10,x10,x9
71002b1b64  asr x10,x10,#0x3
71002b1b68  cmp x10,x8
71002b1b6c  b.ls 0x71002b1bc4
71002b1b70  ldr x8,[x9, x8, LSL #0x3]
71002b1b74  add x20,x8,#0x68
71002b1b78  ldr x8,[x20]
71002b1b7c  ldr x8,[x8, #0x10]
71002b1b80  ldr x20,[x8, #0x10]
71002b1b84  ldr x8,[x19]
71002b1b88  ldr x8,[x8, #0xb0]
71002b1b8c  ldrh w21,[x19, #0x48]
71002b1b90  mov x0,x19
71002b1b94  blr x8
71002b1b98  mov x2,x0
71002b1b9c  mov x0,x20
71002b1ba0  mov w1,w21
71002b1ba4  ldp x29,x30,[sp, #0x20]
71002b1ba8  ldp x20,x19,[sp, #0x10]
71002b1bac  ldr x21,[sp], #0x30
71002b1bb0  b 0x7100242360
71002b1bb4  ldp x29,x30,[sp, #0x20]
71002b1bb8  ldp x20,x19,[sp, #0x10]
71002b1bbc  ldr x21,[sp], #0x30
71002b1bc0  ret
71002b1bc4  adrp x0,0x71042c4000
71002b1bc8  add x0,x0,#0x35f
71002b1bcc  mov w1,#0x47
71002b1bd0  orr w2,wzr,#0xe0000003
71002b1bd4  mov w3,wzr
71002b1bd8  bl 0x71001b1300
