// addr:      7101ed3b80
// offset:    0x1ed3b80
// name:      FUN_7101ed3b80
// mangled:   
// size:      184

7101ed3b80  str x19,[sp, #-0x20]!
7101ed3b84  stp x29,x30,[sp, #0x10]
7101ed3b88  add x29,sp,#0x10
7101ed3b8c  ldr x8,[x0, #0x8]
7101ed3b90  mov x19,x0
7101ed3b94  ldr x0,[x8, #0x8]
7101ed3b98  fmov s0,0x3f800000
7101ed3b9c  adrp x1,0x71042b4000
7101ed3ba0  add x1,x1,#0xba1
7101ed3ba4  bl 0x7103778300
7101ed3ba8  adrp x2,0x7104422000
7101ed3bac  add x2,x2,#0xb5a
7101ed3bb0  mov w1,#0x21
7101ed3bb4  mov x0,x19
7101ed3bb8  bl 0x7101ed3aa0
7101ed3bbc  ldr x9,[x19, #0x18]
7101ed3bc0  mov w8,#0x1
7101ed3bc4  strb w8,[x19, #0x34]
7101ed3bc8  add x8,x19,#0x20
7101ed3bcc  b 0x7101ed3bd4
7101ed3bd0  mov x9,x11
7101ed3bd4  cmp x9,x8
7101ed3bd8  b.eq 0x7101ed3c2c
7101ed3bdc  ldr x10,[x9, #0x28]
7101ed3be0  strb wzr,[x10, #0x53]
7101ed3be4  ldr x10,[x9, #0x8]
7101ed3be8  cbz x10,0x7101ed3bfc
7101ed3bec  mov x9,x10
7101ed3bf0  ldr x10,[x10]
7101ed3bf4  cbnz x10,0x7101ed3bec
7101ed3bf8  b 0x7101ed3bd4
7101ed3bfc  mov x10,x9
7101ed3c00  ldr x11,[x10, #0x10]!
7101ed3c04  ldr x12,[x11]
7101ed3c08  cmp x12,x9
7101ed3c0c  b.eq 0x7101ed3bd0
7101ed3c10  ldr x11,[x10]
7101ed3c14  mov x10,x11
7101ed3c18  ldr x9,[x10, #0x10]!
7101ed3c1c  ldr x12,[x9]
7101ed3c20  cmp x12,x11
7101ed3c24  b.ne 0x7101ed3c10
7101ed3c28  b 0x7101ed3bd4
7101ed3c2c  ldp x29,x30,[sp, #0x10]
7101ed3c30  ldr x19,[sp], #0x20
7101ed3c34  ret
