// addr:      7101af4b80
// offset:    0x1af4b80
// name:      FUN_7101af4b80
// mangled:   
// size:      256

7101af4b80  sub sp,sp,#0x40
7101af4b84  stp x20,x19,[sp, #0x20]
7101af4b88  stp x29,x30,[sp, #0x30]
7101af4b8c  add x29,sp,#0x30
7101af4b90  mov x9,x1
7101af4b94  mov x20,x0
7101af4b98  adrp x1,0x710438c000
7101af4b9c  add x1,x1,#0xb0e
7101af4ba0  add x8,sp,#0x8
7101af4ba4  mov x0,x9
7101af4ba8  bl 0x7103776910
7101af4bac  ldr x19,[sp, #0x10]
7101af4bb0  ldr w9,[x20, #0x168]
7101af4bb4  ldr x8,[x19]
7101af4bb8  cbz w9,0x7101af4c18
7101af4bbc  cbz x8,0x7101af4bcc
7101af4bc0  ldrb w9,[x8, #0x58]
7101af4bc4  orr w9,w9,#0x1
7101af4bc8  strb w9,[x8, #0x58]
7101af4bcc  ldrh w8,[x20, #0x1ac]
7101af4bd0  cbz w8,0x7101af4bf8
7101af4bd4  orr w8,w8,#0x1
7101af4bd8  cmp w8,#0xf
7101af4bdc  b.ne 0x7101af4c44
7101af4be0  ldrh w8,[x20, #0x1ae]
7101af4be4  cmp w8,#0x1
7101af4be8  b.ne 0x7101af4c44
7101af4bec  ldrh w8,[x20, #0x1b0]
7101af4bf0  cmp w8,#0xb
7101af4bf4  b.ne 0x7101af4c44
7101af4bf8  add x1,x20,#0x16c
7101af4bfc  add x0,sp,#0x8
7101af4c00  bl 0x710377a120
7101af4c04  adrp x8,0x710523d000
7101af4c08  add x8,x8,#0x9a8
7101af4c0c  stp x8,xzr,[sp, #0x8]
7101af4c10  cbnz x19,0x7101af4c68
7101af4c14  b 0x7101af4c70
7101af4c18  cbz x8,0x7101af4c28
7101af4c1c  ldrb w9,[x8, #0x58]
7101af4c20  and w9,w9,#0xfe
7101af4c24  strb w9,[x8, #0x58]
7101af4c28  ldr x0,[x19, #0x10]
7101af4c2c  cbz x0,0x7101af4c5c
7101af4c30  stur wzr,[x29, #-0x14]
7101af4c34  sub x1,x29,#0x14
7101af4c38  mov w2,wzr
7101af4c3c  mov w3,wzr
7101af4c40  b 0x7101af4c58
7101af4c44  ldr x0,[x19, #0x10]
7101af4c48  cbz x0,0x7101af4c5c
7101af4c4c  add x1,x20,#0x1ac
7101af4c50  mov w2,#0xffffffff
7101af4c54  mov w3,#0x1
7101af4c58  bl 0x71037a2270
7101af4c5c  adrp x8,0x710523d000
7101af4c60  add x8,x8,#0x9a8
7101af4c64  stp x8,xzr,[sp, #0x8]
7101af4c68  mov x0,x19
7101af4c6c  bl 0x710392eb40
7101af4c70  ldp x29,x30,[sp, #0x30]
7101af4c74  ldp x20,x19,[sp, #0x20]
7101af4c78  add sp,sp,#0x40
7101af4c7c  ret
