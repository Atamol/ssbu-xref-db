// addr:      7101dc9970
// offset:    0x1dc9970
// name:      FUN_7101dc9970
// mangled:   
// size:      592

7101dc9970  sub sp,sp,#0x50
7101dc9974  str x21,[sp, #0x20]
7101dc9978  stp x20,x19,[sp, #0x30]
7101dc997c  stp x29,x30,[sp, #0x40]
7101dc9980  add x29,sp,#0x40
7101dc9984  ldr w8,[x0, #0x124]
7101dc9988  mov x19,x0
7101dc998c  cbz w8,0x7101dc9a54
7101dc9990  ldr x8,[x19, #0x5f0]
7101dc9994  ldr x8,[x8, #0x8]
7101dc9998  ldr x0,[x8, #0x8]
7101dc999c  cbz x0,0x7101dc99b0
7101dc99a0  ldr x8,[x0]
7101dc99a4  ldr x8,[x8, #0x138]
7101dc99a8  blr x8
7101dc99ac  tbz w0,#0x0,0x7101dc9ba8
7101dc99b0  adrp x8,0x710593b000
7101dc99b4  ldr x8,[x8, #0x8d8]
7101dc99b8  ldr x9,[x8]
7101dc99bc  ldp x8,x9,[x9]
7101dc99c0  cmp x8,x9
7101dc99c4  b.eq 0x7101dc99e0
7101dc99c8  ldr x10,[x8], #0x8
7101dc99cc  ldr x10,[x10, #0x8]
7101dc99d0  ldrb w10,[x10, #0x518]
7101dc99d4  cbnz w10,0x7101dc9ba8
7101dc99d8  cmp x9,x8
7101dc99dc  b.ne 0x7101dc99c8
7101dc99e0  ldr x0,[x19, #0x5f0]
7101dc99e4  str xzr,[x19, #0x5f0]
7101dc99e8  cbz x0,0x7101dc99f8
7101dc99ec  ldr x8,[x0]
7101dc99f0  ldr x8,[x8, #0x8]
7101dc99f4  blr x8
7101dc99f8  mov w8,#0x1
7101dc99fc  strb w8,[x19, #0x5fd]
7101dc9a00  add x8,x19,#0x114
7101dc9a04  stp xzr,xzr,[x19, #0x10]
7101dc9a08  str xzr,[x8]
7101dc9a0c  add x8,x19,#0x10c
7101dc9a10  str xzr,[x8]
7101dc9a14  add x8,x19,#0x104
7101dc9a18  str xzr,[x8]
7101dc9a1c  mov w8,#0xffffffff
7101dc9a20  str x8,[x19, #0x120]
7101dc9a24  str w8,[x19, #0x128]
7101dc9a28  mov w8,#0x9
7101dc9a2c  str wzr,[x19, #0x11c]
7101dc9a30  stur xzr,[x19, #0xfc]
7101dc9a34  stur xzr,[x19, #0xf4]
7101dc9a38  stur xzr,[x19, #0xec]
7101dc9a3c  stur xzr,[x19, #0xe4]
7101dc9a40  stur xzr,[x19, #0xdc]
7101dc9a44  stur xzr,[x19, #0xd4]
7101dc9a48  strb wzr,[x19, #0x12c]
7101dc9a4c  str w8,[x19, #0xd0]
7101dc9a50  b 0x7101dc9ba8
7101dc9a54  ldr x0,[x19, #0x1c0]
7101dc9a58  ldr x8,[x0]
7101dc9a5c  ldr x8,[x8, #0x30]
7101dc9a60  ldrb w20,[x19, #0x5f9]
7101dc9a64  mov w1,wzr
7101dc9a68  blr x8
7101dc9a6c  ldr x0,[x19, #0x1c8]
7101dc9a70  ldr x8,[x0]
7101dc9a74  ldr x8,[x8, #0x30]
7101dc9a78  mov w1,wzr
7101dc9a7c  blr x8
7101dc9a80  cmp x20,#0x2
7101dc9a84  strb w20,[x19, #0x1d0]
7101dc9a88  b.cs 0x7101dc9bbc
7101dc9a8c  add x8,x19,x20, LSL #0x3
7101dc9a90  ldr x0,[x8, #0x1c0]
7101dc9a94  ldr x8,[x0]
7101dc9a98  ldr x8,[x8, #0x70]
7101dc9a9c  blr x8
7101dc9aa0  and w8,w0,#0x1
7101dc9aa4  tst w0,#0x1
7101dc9aa8  ldr x0,[x19, #0x1b8]
7101dc9aac  fmov s0,0x3f800000
7101dc9ab0  adrp x9,0x7104280000
7101dc9ab4  add x9,x9,#0xf9b
7101dc9ab8  strb w8,[x19, #0x1d1]
7101dc9abc  adrp x8,0x71042b4000
7101dc9ac0  add x8,x8,#0x7f1
7101dc9ac4  csel x1,x8,x9,ne
7101dc9ac8  bl 0x7103778300
7101dc9acc  ldrb w20,[x19, #0x5f9]
7101dc9ad0  add x0,x19,#0x178
7101dc9ad4  mov w2,#0x1
7101dc9ad8  mov w1,w20
7101dc9adc  bl 0x7103771a80
7101dc9ae0  add x0,x19,#0x140
7101dc9ae4  adrp x1,0x710428f000
7101dc9ae8  add x1,x1,#0xf7d
7101dc9aec  add x8,sp,#0x8
7101dc9af0  strb w20,[x19, #0x1a9]
7101dc9af4  add x20,sp,#0x8
7101dc9af8  bl 0x71037780e0
7101dc9afc  mov w0,#0x10
7101dc9b00  mov w1,#0x10
7101dc9b04  bl 0x710392e290
7101dc9b08  cbnz x0,0x7101dc9b50
7101dc9b0c  adrp x8,0x7105332000
7101dc9b10  ldr x0,[x8, #0xf00]
7101dc9b14  cbz x0,0x7101dc9b4c
7101dc9b18  mov w8,#0x10
7101dc9b1c  stur wzr,[x29, #-0x14]
7101dc9b20  sub x1,x29,#0x14
7101dc9b24  str x8,[sp, #0x18]
7101dc9b28  ldr x8,[x0]
7101dc9b2c  ldr x8,[x8, #0x30]
7101dc9b30  add x2,sp,#0x18
7101dc9b34  blr x8
7101dc9b38  tbz w0,#0x0,0x7101dc9b4c
7101dc9b3c  mov w0,#0x10
7101dc9b40  mov w1,#0x10
7101dc9b44  bl 0x710392e290
7101dc9b48  cbnz x0,0x7101dc9b50
7101dc9b4c  mov x0,xzr
7101dc9b50  adrp x21,0x710523d000
7101dc9b54  add x21,x21,#0x9e8
7101dc9b58  cmp x20,x0
7101dc9b5c  stp x21,xzr,[x0]
7101dc9b60  b.eq 0x7101dc9b70
7101dc9b64  ldr x8,[sp, #0x10]
7101dc9b68  str xzr,[sp, #0x10]
7101dc9b6c  str x8,[x0, #0x8]
7101dc9b70  ldr x8,[x19, #0x5f0]
7101dc9b74  str x0,[x19, #0x5f0]
7101dc9b78  cbz x8,0x7101dc9b8c
7101dc9b7c  ldr x9,[x8]
7101dc9b80  ldr x9,[x9, #0x8]
7101dc9b84  mov x0,x8
7101dc9b88  blr x9
7101dc9b8c  ldr x0,[sp, #0x10]
7101dc9b90  stp x21,xzr,[sp, #0x8]
7101dc9b94  cbz x0,0x7101dc9b9c
7101dc9b98  bl 0x710392eb40
7101dc9b9c  ldr x0,[x19, #0x5f0]
7101dc9ba0  fmov s0,0x3f800000
7101dc9ba4  bl 0x710377aee0
7101dc9ba8  ldp x29,x30,[sp, #0x40]
7101dc9bac  ldr x21,[sp, #0x20]
7101dc9bb0  ldp x20,x19,[sp, #0x30]
7101dc9bb4  add sp,sp,#0x50
7101dc9bb8  ret
7101dc9bbc  bl 0x71039c2650
