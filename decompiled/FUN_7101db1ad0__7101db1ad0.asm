// addr:      7101db1ad0
// offset:    0x1db1ad0
// name:      FUN_7101db1ad0
// mangled:   
// size:      264

7101db1ad0  sub sp,sp,#0x30
7101db1ad4  str x19,[sp, #0x10]
7101db1ad8  stp x29,x30,[sp, #0x20]
7101db1adc  add x29,sp,#0x20
7101db1ae0  ldrb w8,[x0, #0x44e]
7101db1ae4  cbnz w8,0x7101db1bc0
7101db1ae8  ldr w8,[x0, #0x90]
7101db1aec  mov x19,x0
7101db1af0  cmp w8,#0x2
7101db1af4  b.ne 0x7101db1bc0
7101db1af8  ldr x0,[x19, #0x70]
7101db1afc  ldr x8,[x0]
7101db1b00  ldr x8,[x8, #0x78]
7101db1b04  blr x8
7101db1b08  tbz w0,#0x0,0x7101db1bc0
7101db1b0c  ldr x8,[x19, #0x70]
7101db1b10  ldr w8,[x8, #0x254]
7101db1b14  cmp w8,#0x3
7101db1b18  b.ne 0x7101db1bc0
7101db1b1c  ldr x8,[x19, #0x20]
7101db1b20  ldr x8,[x8]
7101db1b24  ldr x8,[x8]
7101db1b28  ldr x8,[x8, #0x600]
7101db1b2c  ldrb w9,[x8, #0x4aa]
7101db1b30  cbz w9,0x7101db1bc0
7101db1b34  ldrb w8,[x8, #0x1dc]
7101db1b38  tbz w8,#0x1,0x7101db1bc0
7101db1b3c  ldr w8,[x19, #0xe0]
7101db1b40  cmp w8,#0x4
7101db1b44  b.cs 0x7101db1bd4
7101db1b48  mov w9,#0x54
7101db1b4c  madd x8,x8,x9,x19
7101db1b50  ldrsh w8,[x8, #0x26a]
7101db1b54  cmn w8,#0x1
7101db1b58  b.eq 0x7101db1bc0
7101db1b5c  add x0,x19,#0x50
7101db1b60  adrp x1,0x710424f000
7101db1b64  add x1,x1,#0xa7a
7101db1b68  mov x8,sp
7101db1b6c  bl 0x7103776640
7101db1b70  ldr x19,[sp, #0x8]
7101db1b74  fmov s0,0x3f800000
7101db1b78  adrp x1,0x71042a3000
7101db1b7c  add x1,x1,#0x57e
7101db1b80  mov x0,x19
7101db1b84  bl 0x7103778300
7101db1b88  adrp x8,0x710523d000
7101db1b8c  add x8,x8,#0x988
7101db1b90  stp x8,xzr,[sp]
7101db1b94  cbz x19,0x7101db1bb8
7101db1b98  ldr x0,[x19, #0x18]
7101db1b9c  adrp x8,0x710523d000
7101db1ba0  add x8,x8,#0x9a8
7101db1ba4  stp x8,xzr,[x19, #0x10]
7101db1ba8  cbz x0,0x7101db1bb0
7101db1bac  bl 0x710392eb40
7101db1bb0  mov x0,x19
7101db1bb4  bl 0x710392eb40
7101db1bb8  mov w0,#0x1
7101db1bbc  b 0x7101db1bc4
7101db1bc0  mov w0,wzr
7101db1bc4  ldp x29,x30,[sp, #0x20]
7101db1bc8  ldr x19,[sp, #0x10]
7101db1bcc  add sp,sp,#0x30
7101db1bd0  ret
7101db1bd4  bl 0x71039c2650
