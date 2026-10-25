// addr:      7102d92a20
// offset:    0x2d92a20
// name:      FUN_7102d92a20
// mangled:   
// size:      296

7102d92a20  str x19,[sp, #-0x20]!
7102d92a24  stp x29,x30,[sp, #0x10]
7102d92a28  add x29,sp,#0x10
7102d92a2c  mov x19,x0
7102d92a30  ldr x0,[x0, #0x38]
7102d92a34  ldr x8,[x0]
7102d92a38  ldr x8,[x8, #0x40]
7102d92a3c  blr x8
7102d92a40  ldr x0,[x19, #0x40]
7102d92a44  ldr x8,[x0]
7102d92a48  ldr x8,[x8, #0x40]
7102d92a4c  blr x8
7102d92a50  ldr x8,[x19, #0x8]
7102d92a54  ldr x9,[x8, #0x338]
7102d92a58  ldr x9,[x9]
7102d92a5c  ldr x0,[x9, #0x8]
7102d92a60  cbz x0,0x7102d92a7c
7102d92a64  ldr x8,[x0]
7102d92a68  ldr x8,[x8, #0x58]
7102d92a6c  mov w1,#0x1b
7102d92a70  mov w2,#0xffffffff
7102d92a74  blr x8
7102d92a78  ldr x8,[x19, #0x8]
7102d92a7c  ldr x8,[x8, #0x300]
7102d92a80  ldr x9,[x8, #0x18]
7102d92a84  ldp x8,x9,[x9]
7102d92a88  cmp x8,x9
7102d92a8c  b.eq 0x7102d92b3c
7102d92a90  mov x10,#0xdf99
7102d92a94  movk x10,#0xb569, LSL #16
7102d92a98  movk x10,#0x7, LSL #32
7102d92a9c  mov x11,x8
7102d92aa0  ldr x12,[x11], #0x8
7102d92aa4  ldr x13,[x12, #0xa0]
7102d92aa8  and x13,x13,#0xffffffffff
7102d92aac  cmp x13,x10
7102d92ab0  b.eq 0x7102d92ac0
7102d92ab4  cmp x9,x11
7102d92ab8  b.ne 0x7102d92aa0
7102d92abc  b 0x7102d92ae8
7102d92ac0  ldr x10,[x12, #0x130]
7102d92ac4  cbz x10,0x7102d92ae8
7102d92ac8  ldp x0,x1,[x10]
7102d92acc  adrp x2,0x71042a1000
7102d92ad0  add x2,x2,#0x67e
7102d92ad4  bl 0x71025f5420
7102d92ad8  ldr x8,[x19, #0x8]
7102d92adc  ldr x8,[x8, #0x300]
7102d92ae0  ldr x9,[x8, #0x18]
7102d92ae4  ldp x8,x9,[x9]
7102d92ae8  cmp x8,x9
7102d92aec  b.eq 0x7102d92b3c
7102d92af0  mov x10,#0x1d15
7102d92af4  movk x10,#0xe9aa, LSL #16
7102d92af8  movk x10,#0x7, LSL #32
7102d92afc  ldr x11,[x8], #0x8
7102d92b00  ldr x12,[x11, #0xa0]
7102d92b04  and x12,x12,#0xffffffffff
7102d92b08  cmp x12,x10
7102d92b0c  b.eq 0x7102d92b1c
7102d92b10  cmp x9,x8
7102d92b14  b.ne 0x7102d92afc
7102d92b18  b 0x7102d92b3c
7102d92b1c  ldr x8,[x11, #0x130]
7102d92b20  cbz x8,0x7102d92b3c
7102d92b24  ldp x0,x1,[x8]
7102d92b28  adrp x2,0x71043ee000
7102d92b2c  add x2,x2,#0xd04
7102d92b30  ldp x29,x30,[sp, #0x10]
7102d92b34  ldr x19,[sp], #0x20
7102d92b38  b 0x71025f55b0
7102d92b3c  ldp x29,x30,[sp, #0x10]
7102d92b40  ldr x19,[sp], #0x20
7102d92b44  ret
