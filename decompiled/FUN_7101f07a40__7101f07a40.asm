// addr:      7101f07a40
// offset:    0x1f07a40
// name:      FUN_7101f07a40
// mangled:   
// size:      184

7101f07a40  sub sp,sp,#0x70
7101f07a44  stp x20,x19,[sp, #0x50]
7101f07a48  stp x29,x30,[sp, #0x60]
7101f07a4c  add x29,sp,#0x60
7101f07a50  strb wzr,[sp, #0x10]
7101f07a54  str xzr,[sp, #0x8]
7101f07a58  ldr w8,[x0]
7101f07a5c  cmp w8,#0x2
7101f07a60  b.cs 0x7101f07af4
7101f07a64  adrp x9,0x71050b3000
7101f07a68  add x9,x9,#0xe88
7101f07a6c  mov x19,x0
7101f07a70  ldr x2,[x9, x8, LSL #0x3]
7101f07a74  adrp x1,0x71042b4000
7101f07a78  add x1,x1,#0xc27
7101f07a7c  add x0,sp,#0x8
7101f07a80  add x20,sp,#0x8
7101f07a84  bl 0x710062dc20
7101f07a88  ldr x9,[x19, #0x10]
7101f07a8c  ldr x9,[x9]
7101f07a90  ldr x9,[x9]
7101f07a94  ldr w8,[x19, #0xe4]
7101f07a98  add x1,x20,#0x8
7101f07a9c  ldr x0,[x9, #0x10]
7101f07aa0  cbz w8,0x7101f07adc
7101f07aa4  ldr x0,[x0, #0x8]
7101f07aa8  cbz x0,0x7101f07ac4
7101f07aac  bl 0x71037964b0
7101f07ab0  cbz x0,0x7101f07ac4
7101f07ab4  ldr x8,[x0]
7101f07ab8  ldr x8,[x8, #0x138]
7101f07abc  blr x8
7101f07ac0  tbz w0,#0x0,0x7101f07ae4
7101f07ac4  ldrsw x8,[x19, #0xdc]
7101f07ac8  cmp w8,#0x13
7101f07acc  b.cs 0x7101f07af4
7101f07ad0  add x8,x19,x8, LSL #0x2
7101f07ad4  str wzr,[x8, #0x90]
7101f07ad8  b 0x7101f07ae4
7101f07adc  fmov s0,0x3f800000
7101f07ae0  bl 0x7103778300
7101f07ae4  ldp x29,x30,[sp, #0x60]
7101f07ae8  ldp x20,x19,[sp, #0x50]
7101f07aec  add sp,sp,#0x70
7101f07af0  ret
7101f07af4  bl 0x71039c2650
