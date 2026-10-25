// addr:      7101af1b50
// offset:    0x1af1b50
// name:      FUN_7101af1b50
// mangled:   
// size:      284

7101af1b50  sub sp,sp,#0x40
7101af1b54  stp x22,x21,[sp, #0x10]
7101af1b58  stp x20,x19,[sp, #0x20]
7101af1b5c  stp x29,x30,[sp, #0x30]
7101af1b60  add x29,sp,#0x30
7101af1b64  ldr w8,[x0, #0xbc]
7101af1b68  mov x19,x0
7101af1b6c  cbz w8,0x7101af1bb4
7101af1b70  ldr x8,[x19, #0xd0]
7101af1b74  ldr x0,[x8, #0x8]
7101af1b78  cbz x0,0x7101af1b9c
7101af1b7c  adrp x1,0x71042a3000
7101af1b80  add x1,x1,#0x654
7101af1b84  bl 0x71037964b0
7101af1b88  cbz x0,0x7101af1b9c
7101af1b8c  ldr x8,[x0]
7101af1b90  ldr x8,[x8, #0x138]
7101af1b94  blr x8
7101af1b98  tbz w0,#0x0,0x7101af1c54
7101af1b9c  ldrsw x8,[x19, #0xb4]
7101af1ba0  cmp w8,#0x13
7101af1ba4  b.cs 0x7101af1c68
7101af1ba8  add x8,x19,x8, LSL #0x2
7101af1bac  str wzr,[x8, #0x68]
7101af1bb0  b 0x7101af1c54
7101af1bb4  mov x20,x1
7101af1bb8  ldr x1,[x19, #0xd8]
7101af1bbc  mov x0,sp
7101af1bc0  mov w2,#0x1
7101af1bc4  mov w21,#0x1
7101af1bc8  bl 0x7103771d60
7101af1bcc  ldr x22,[sp, #0x8]
7101af1bd0  ldr x0,[x22]
7101af1bd4  cbz x0,0x7101af1be8
7101af1bd8  ldr x8,[x0]
7101af1bdc  ldr x8,[x8, #0x210]
7101af1be0  blr x8
7101af1be4  mov w21,w0
7101af1be8  adrp x8,0x710523d000
7101af1bec  add x8,x8,#0x9c8
7101af1bf0  stp x8,xzr,[sp]
7101af1bf4  cbz x22,0x7101af1c00
7101af1bf8  mov x0,x22
7101af1bfc  bl 0x710392eb40
7101af1c00  tbz w21,#0x0,0x7101af1c18
7101af1c04  ldr x0,[x19, #0xd0]
7101af1c08  fmov s0,0x3f800000
7101af1c0c  adrp x1,0x7104421000
7101af1c10  add x1,x1,#0xe4c
7101af1c14  bl 0x7103778300
7101af1c18  ldr x0,[x19, #0xd0]
7101af1c1c  fmov s0,0x3f800000
7101af1c20  adrp x1,0x71042a3000
7101af1c24  add x1,x1,#0x654
7101af1c28  bl 0x7103778300
7101af1c2c  ldr x0,[x19, #0xd8]
7101af1c30  mov x8,#0xff0000000000
7101af1c34  movk x8,#0xafff, LSL #48
7101af1c38  str x8,[x19, #0xe0]
7101af1c3c  ldr x8,[x0]
7101af1c40  ldr x8,[x8, #0x70]
7101af1c44  mov w1,wzr
7101af1c48  blr x8
7101af1c4c  ldr x8,[x20, #0x8]
7101af1c50  strb wzr,[x8, #0x4aa]
7101af1c54  ldp x29,x30,[sp, #0x30]
7101af1c58  ldp x20,x19,[sp, #0x20]
7101af1c5c  ldp x22,x21,[sp, #0x10]
7101af1c60  add sp,sp,#0x40
7101af1c64  ret
7101af1c68  bl 0x71039c2650
