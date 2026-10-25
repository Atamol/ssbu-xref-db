// addr:      71001d7a70
// offset:    0x1d7a70
// name:      FUN_71001d7a70
// mangled:   
// size:      280

71001d7a70  str x21,[sp, #-0x30]!
71001d7a74  stp x20,x19,[sp, #0x10]
71001d7a78  stp x29,x30,[sp, #0x20]
71001d7a7c  add x29,sp,#0x20
71001d7a80  adrp x20,0x71052a4000
71001d7a84  ldr x20,[x20, #0xda8]
71001d7a88  adrp x19,0x71052a4000
71001d7a8c  ldrb w8,[x20]
71001d7a90  ldr x19,[x19, #0xdb0]
71001d7a94  add x21,x19,#0x28
71001d7a98  cbz w8,0x71001d7ad4
71001d7a9c  adrp x8,0x71052a4000
71001d7aa0  ldr x8,[x8, #0xdb8]
71001d7aa4  ldr x0,[x8]
71001d7aa8  bl 0x7101717960
71001d7aac  ldr w8,[x0]
71001d7ab0  cbz w8,0x71001d7ad4
71001d7ab4  ldr x10,[x19, #0xa0]
71001d7ab8  ldp x9,x10,[x10]
71001d7abc  sub x10,x10,x9
71001d7ac0  asr x10,x10,#0x3
71001d7ac4  cmp x10,x8
71001d7ac8  b.ls 0x71001d7b70
71001d7acc  ldr x8,[x9, x8, LSL #0x3]
71001d7ad0  add x21,x8,#0x20
71001d7ad4  ldr x8,[x21]
71001d7ad8  ldr x8,[x8, #0x10]
71001d7adc  ldr x8,[x8, #0x10]
71001d7ae0  ldr x8,[x8, #0x18]
71001d7ae4  ldp x9,x8,[x8, #0x58]
71001d7ae8  cmp x8,x9
71001d7aec  b.ne 0x71001d7af8
71001d7af0  mov w8,wzr
71001d7af4  b 0x71001d7b5c
71001d7af8  ldrb w8,[x20]
71001d7afc  add x20,x19,#0x28
71001d7b00  cbz w8,0x71001d7b3c
71001d7b04  adrp x8,0x71052a4000
71001d7b08  ldr x8,[x8, #0xdb8]
71001d7b0c  ldr x0,[x8]
71001d7b10  bl 0x7101717960
71001d7b14  ldr w8,[x0]
71001d7b18  cbz w8,0x71001d7b3c
71001d7b1c  ldr x10,[x19, #0xa0]
71001d7b20  ldp x9,x10,[x10]
71001d7b24  sub x10,x10,x9
71001d7b28  asr x10,x10,#0x3
71001d7b2c  cmp x10,x8
71001d7b30  b.ls 0x71001d7b70
71001d7b34  ldr x8,[x9, x8, LSL #0x3]
71001d7b38  add x20,x8,#0x20
71001d7b3c  ldr x8,[x20]
71001d7b40  ldr x8,[x8, #0x10]
71001d7b44  ldr x8,[x8, #0x10]
71001d7b48  ldr x0,[x8, #0x1b8]
71001d7b4c  ldr x8,[x0]
71001d7b50  ldr x8,[x8, #0x18]
71001d7b54  blr x8
71001d7b58  eor w8,w0,#0x1
71001d7b5c  ldp x29,x30,[sp, #0x20]
71001d7b60  and w0,w8,#0x1
71001d7b64  ldp x20,x19,[sp, #0x10]
71001d7b68  ldr x21,[sp], #0x30
71001d7b6c  ret
71001d7b70  adrp x0,0x71042c4000
71001d7b74  add x0,x0,#0x35f
71001d7b78  mov w1,#0x47
71001d7b7c  orr w2,wzr,#0xe0000003
71001d7b80  mov w3,wzr
71001d7b84  bl 0x71001b1300
