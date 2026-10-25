// addr:      7101eb4a80
// offset:    0x1eb4a80
// name:      FUN_7101eb4a80
// mangled:   
// size:      216

7101eb4a80  str d8,[sp, #-0x30]!
7101eb4a84  str x21,[sp, #0x8]
7101eb4a88  stp x20,x19,[sp, #0x10]
7101eb4a8c  stp x29,x30,[sp, #0x20]
7101eb4a90  add x29,sp,#0x20
7101eb4a94  ldr x8,[x0, #0x8]
7101eb4a98  ldr x21,[x8]
7101eb4a9c  ldr w8,[x0, #0x270]
7101eb4aa0  mov x19,x0
7101eb4aa4  ldr x0,[x21, #0x10]
7101eb4aa8  cmp w8,#0x1
7101eb4aac  b.ne 0x7101eb4b14
7101eb4ab0  ldr x20,[x0, #0x8]
7101eb4ab4  cbz x20,0x7101eb4b0c
7101eb4ab8  adrp x1,0x710435b000
7101eb4abc  add x1,x1,#0xee2
7101eb4ac0  mov x0,x20
7101eb4ac4  bl 0x71037964b0
7101eb4ac8  cbz x0,0x7101eb4ae8
7101eb4acc  ldr x8,[x0]
7101eb4ad0  ldr x8,[x8, #0x138]
7101eb4ad4  blr x8
7101eb4ad8  tbz w0,#0x0,0x7101eb4b44
7101eb4adc  ldr x8,[x21, #0x10]
7101eb4ae0  ldr x20,[x8, #0x8]
7101eb4ae4  cbz x20,0x7101eb4b0c
7101eb4ae8  adrp x1,0x7104413000
7101eb4aec  add x1,x1,#0xab
7101eb4af0  mov x0,x20
7101eb4af4  bl 0x71037964b0
7101eb4af8  cbz x0,0x7101eb4b0c
7101eb4afc  ldr x8,[x0]
7101eb4b00  ldr x8,[x8, #0x138]
7101eb4b04  blr x8
7101eb4b08  tbz w0,#0x0,0x7101eb4b44
7101eb4b0c  stp xzr,xzr,[x19, #0x10]
7101eb4b10  b 0x7101eb4b44
7101eb4b14  fmov s8,0x3f800000
7101eb4b18  mov v0.16B,v8.16B
7101eb4b1c  adrp x1,0x710435b000
7101eb4b20  add x1,x1,#0xee2
7101eb4b24  bl 0x7103778300
7101eb4b28  ldr x0,[x21, #0x10]
7101eb4b2c  mov v0.16B,v8.16B
7101eb4b30  adrp x1,0x7104413000
7101eb4b34  add x1,x1,#0xab
7101eb4b38  bl 0x7103778300
7101eb4b3c  mov w8,#0x1
7101eb4b40  str w8,[x19, #0x270]
7101eb4b44  ldp x29,x30,[sp, #0x20]
7101eb4b48  ldr x21,[sp, #0x8]
7101eb4b4c  ldp x20,x19,[sp, #0x10]
7101eb4b50  ldr d8,[sp], #0x30
7101eb4b54  ret
