// addr:      7101af4a80
// offset:    0x1af4a80
// name:      FUN_7101af4a80
// mangled:   
// size:      252

7101af4a80  sub sp,sp,#0x40
7101af4a84  stp x20,x19,[sp, #0x20]
7101af4a88  stp x29,x30,[sp, #0x30]
7101af4a8c  add x29,sp,#0x30
7101af4a90  mov x9,x1
7101af4a94  mov x20,x0
7101af4a98  adrp x1,0x71042a2000
7101af4a9c  add x1,x1,#0xf02
7101af4aa0  add x8,sp,#0x8
7101af4aa4  mov x0,x9
7101af4aa8  bl 0x7103776910
7101af4aac  ldr x19,[sp, #0x10]
7101af4ab0  ldr w9,[x20, #0xd8]
7101af4ab4  ldr x8,[x19]
7101af4ab8  cbz w9,0x7101af4afc
7101af4abc  cbz x8,0x7101af4acc
7101af4ac0  ldrb w9,[x8, #0x58]
7101af4ac4  orr w9,w9,#0x1
7101af4ac8  strb w9,[x8, #0x58]
7101af4acc  ldr w8,[x20, #0x120]
7101af4ad0  cbz w8,0x7101af4b38
7101af4ad4  ldr w8,[x20, #0x168]
7101af4ad8  add x1,x20,#0x124
7101af4adc  add x3,x20,#0xdc
7101af4ae0  cbz w8,0x7101af4b48
7101af4ae4  adrp x4,0x710438c000
7101af4ae8  add x4,x4,#0x560
7101af4aec  add x0,sp,#0x8
7101af4af0  mov w2,#0x2
7101af4af4  bl 0x710377a280
7101af4af8  b 0x7101af4b54
7101af4afc  cbz x8,0x7101af4b0c
7101af4b00  ldrb w9,[x8, #0x58]
7101af4b04  and w9,w9,#0xfe
7101af4b08  strb w9,[x8, #0x58]
7101af4b0c  ldr x0,[x19, #0x10]
7101af4b10  cbz x0,0x7101af4b28
7101af4b14  sub x1,x29,#0x14
7101af4b18  mov w2,wzr
7101af4b1c  mov w3,wzr
7101af4b20  stur wzr,[x29, #-0x14]
7101af4b24  bl 0x71037a2270
7101af4b28  adrp x8,0x710523d000
7101af4b2c  add x8,x8,#0x9a8
7101af4b30  stp x8,xzr,[sp, #0x8]
7101af4b34  b 0x7101af4b64
7101af4b38  add x1,x20,#0xdc
7101af4b3c  add x0,sp,#0x8
7101af4b40  bl 0x710377a120
7101af4b44  b 0x7101af4b54
7101af4b48  add x0,sp,#0x8
7101af4b4c  mov w2,#0x1
7101af4b50  bl 0x710377a280
7101af4b54  adrp x8,0x710523d000
7101af4b58  add x8,x8,#0x9a8
7101af4b5c  stp x8,xzr,[sp, #0x8]
7101af4b60  cbz x19,0x7101af4b6c
7101af4b64  mov x0,x19
7101af4b68  bl 0x710392eb40
7101af4b6c  ldp x29,x30,[sp, #0x30]
7101af4b70  ldp x20,x19,[sp, #0x20]
7101af4b74  add sp,sp,#0x40
7101af4b78  ret
