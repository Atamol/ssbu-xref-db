// addr:      7102d76b40
// offset:    0x2d76b40
// name:      FUN_7102d76b40
// mangled:   
// size:      420

7102d76b40  stp x22,x21,[sp, #-0x30]!
7102d76b44  stp x20,x19,[sp, #0x10]
7102d76b48  stp x29,x30,[sp, #0x20]
7102d76b4c  add x29,sp,#0x20
7102d76b50  ldr x8,[x0, #0x58]
7102d76b54  mov w20,#0x1
7102d76b58  strb w20,[x8, #0xa5]
7102d76b5c  mov x19,x0
7102d76b60  ldr x0,[x0, #0x58]
7102d76b64  ldr x8,[x0]
7102d76b68  ldr x8,[x8, #0x38]
7102d76b6c  blr x8
7102d76b70  ldp x21,x22,[x19, #0x60]
7102d76b74  cmp x21,x22
7102d76b78  b.eq 0x7102d76b9c
7102d76b7c  ldr x8,[x21]
7102d76b80  strb w20,[x8, #0xa5]
7102d76b84  ldr x0,[x21], #0x8
7102d76b88  ldr x8,[x0]
7102d76b8c  ldr x8,[x8, #0x38]
7102d76b90  blr x8
7102d76b94  cmp x22,x21
7102d76b98  b.ne 0x7102d76b7c
7102d76b9c  ldp x20,x21,[x19, #0x78]
7102d76ba0  cmp x20,x21
7102d76ba4  b.eq 0x7102d76bcc
7102d76ba8  mov w22,#0x1
7102d76bac  ldr x8,[x20]
7102d76bb0  strb w22,[x8, #0xa5]
7102d76bb4  ldr x0,[x20], #0x8
7102d76bb8  ldr x8,[x0]
7102d76bbc  ldr x8,[x8, #0x38]
7102d76bc0  blr x8
7102d76bc4  cmp x21,x20
7102d76bc8  b.ne 0x7102d76bac
7102d76bcc  mov w8,#0x1
7102d76bd0  strb w8,[x19, #0x50]
7102d76bd4  ldr x8,[x19, #0x8]
7102d76bd8  strb wzr,[x19, #0x90]
7102d76bdc  str wzr,[x19, #0x94]
7102d76be0  strb wzr,[x19, #0x98]
7102d76be4  str wzr,[x19, #0x9c]
7102d76be8  ldr x9,[x8, #0x338]
7102d76bec  ldr x9,[x9]
7102d76bf0  ldr x0,[x9, #0x8]
7102d76bf4  cbz x0,0x7102d76c10
7102d76bf8  ldr x8,[x0]
7102d76bfc  ldr x8,[x8, #0x58]
7102d76c00  mov w1,#0x5
7102d76c04  mov w2,#0xffffffff
7102d76c08  blr x8
7102d76c0c  ldr x8,[x19, #0x8]
7102d76c10  ldr x8,[x8, #0x300]
7102d76c14  ldr x9,[x8, #0x18]
7102d76c18  ldp x8,x9,[x9]
7102d76c1c  cmp x8,x9
7102d76c20  b.eq 0x7102d76cd4
7102d76c24  mov x10,#0xdf99
7102d76c28  movk x10,#0xb569, LSL #16
7102d76c2c  movk x10,#0x7, LSL #32
7102d76c30  mov x11,x8
7102d76c34  ldr x12,[x11], #0x8
7102d76c38  ldr x13,[x12, #0xa0]
7102d76c3c  and x13,x13,#0xffffffffff
7102d76c40  cmp x13,x10
7102d76c44  b.eq 0x7102d76c54
7102d76c48  cmp x9,x11
7102d76c4c  b.ne 0x7102d76c34
7102d76c50  b 0x7102d76c7c
7102d76c54  ldr x10,[x12, #0x130]
7102d76c58  cbz x10,0x7102d76c7c
7102d76c5c  ldp x0,x1,[x10]
7102d76c60  adrp x2,0x71042a1000
7102d76c64  add x2,x2,#0x67e
7102d76c68  bl 0x71025f55b0
7102d76c6c  ldr x8,[x19, #0x8]
7102d76c70  ldr x8,[x8, #0x300]
7102d76c74  ldr x9,[x8, #0x18]
7102d76c78  ldp x8,x9,[x9]
7102d76c7c  cmp x8,x9
7102d76c80  b.eq 0x7102d76cd4
7102d76c84  mov x10,#0x3c84
7102d76c88  movk x10,#0x6330, LSL #16
7102d76c8c  movk x10,#0x7, LSL #32
7102d76c90  ldr x11,[x8], #0x8
7102d76c94  ldr x12,[x11, #0xa0]
7102d76c98  and x12,x12,#0xffffffffff
7102d76c9c  cmp x12,x10
7102d76ca0  b.eq 0x7102d76cb0
7102d76ca4  cmp x9,x8
7102d76ca8  b.ne 0x7102d76c90
7102d76cac  b 0x7102d76cd4
7102d76cb0  ldr x8,[x11, #0x130]
7102d76cb4  cbz x8,0x7102d76cd4
7102d76cb8  ldp x0,x1,[x8]
7102d76cbc  adrp x2,0x71042c3000
7102d76cc0  add x2,x2,#0xb1
7102d76cc4  ldp x29,x30,[sp, #0x20]
7102d76cc8  ldp x20,x19,[sp, #0x10]
7102d76ccc  ldp x22,x21,[sp], #0x30
7102d76cd0  b 0x71025f5420
7102d76cd4  ldp x29,x30,[sp, #0x20]
7102d76cd8  ldp x20,x19,[sp, #0x10]
7102d76cdc  ldp x22,x21,[sp], #0x30
7102d76ce0  ret
