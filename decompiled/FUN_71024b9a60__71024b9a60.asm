// addr:      71024b9a60
// offset:    0x24b9a60
// name:      FUN_71024b9a60
// mangled:   
// size:      776

71024b9a60  sub sp,sp,#0x60
71024b9a64  str x25,[sp, #0x10]
71024b9a68  stp x24,x23,[sp, #0x20]
71024b9a6c  stp x22,x21,[sp, #0x30]
71024b9a70  stp x20,x19,[sp, #0x40]
71024b9a74  stp x29,x30,[sp, #0x50]
71024b9a78  add x29,sp,#0x50
71024b9a7c  adrp x8,0x710532a000
71024b9a80  ldr w9,[x0, #0x24c]
71024b9a84  ldr x8,[x8, #0x9d8]
71024b9a88  mov x19,x0
71024b9a8c  cbnz w9,0x71024b9ab0
71024b9a90  ldr x9,[x8]
71024b9a94  ldr w10,[x9, #0xbc]
71024b9a98  cmp w10,#0x6
71024b9a9c  b.ne 0x71024b9ab0
71024b9aa0  ldrb w10,[x9, #0xdc]
71024b9aa4  cbz w10,0x71024b9ab0
71024b9aa8  orr w10,wzr,#0x7
71024b9aac  str w10,[x9, #0xbc]
71024b9ab0  ldr x8,[x8]
71024b9ab4  ldr w8,[x8, #0xbc]
71024b9ab8  cbnz w8,0x71024b9d08
71024b9abc  adrp x8,0x7105314000
71024b9ac0  add x8,x8,#0x4d8
71024b9ac4  ldarb w8,[x8]
71024b9ac8  tbz w8,#0x0,0x71024b9d24
71024b9acc  adrp x0,0x71052c5000
71024b9ad0  add x0,x0,#0x1b0
71024b9ad4  bl 0x71014e1e90
71024b9ad8  adrp x21,0x71052b9000
71024b9adc  ldr x8,[x21, #0x4f8]
71024b9ae0  ldr x8,[x8]
71024b9ae4  ldr x20,[x8, #0x20]
71024b9ae8  cbz x20,0x71024b9b70
71024b9aec  mov w8,#0x591b
71024b9af0  mov w9,#0x2
71024b9af4  strb w9,[x20, x8, LSL ]
71024b9af8  mov w8,#0x5920
71024b9afc  add x22,x20,x8
71024b9b00  ldrb w8,[x22]
71024b9b04  sub w9,w8,#0x3
71024b9b08  cmp w9,#0x1
71024b9b0c  b.hi 0x71024b9b3c
71024b9b10  mov w8,#0x591f
71024b9b14  ldrb w8,[x20, x8, LSL ]
71024b9b18  tbz w8,#0x0,0x71024b9b70
71024b9b1c  mov x0,x20
71024b9b20  bl 0x7100655f60
71024b9b24  orr w8,wzr,#0x3
71024b9b28  mov w9,#0x5934
71024b9b2c  strb w8,[x22]
71024b9b30  mov w8,#0x1
71024b9b34  strb w8,[x20, x9, LSL ]
71024b9b38  b 0x71024b9b70
71024b9b3c  adrp x9,0x71052c3000
71024b9b40  ldr x9,[x9, #0x3d8]
71024b9b44  ldr x9,[x9]
71024b9b48  ldr w9,[x9]
71024b9b4c  cmp w9,#0x1
71024b9b50  b.lt 0x71024b9b68
71024b9b54  cmp w8,#0x6
71024b9b58  b.eq 0x71024b9b68
71024b9b5c  mov w8,#0x5
71024b9b60  strb w8,[x22]
71024b9b64  b 0x71024b9b70
71024b9b68  mov x0,x20
71024b9b6c  bl 0x7100655f60
71024b9b70  ldr x8,[x21, #0x4f8]
71024b9b74  ldr x9,[x8]
71024b9b78  strb wzr,[x9, #0xd0]
71024b9b7c  ldr x9,[x8]
71024b9b80  mov w10,#0x1
71024b9b84  strb w10,[x9, #0xd8]
71024b9b88  ldr x0,[x8]
71024b9b8c  bl 0x7100679ae0
71024b9b90  ldr x8,[x21, #0x4f8]
71024b9b94  ldr x8,[x8]
71024b9b98  ldr x21,[x8, #0x20]
71024b9b9c  cbz x21,0x71024b9c1c
71024b9ba0  ldr x22,[x21, #0x4150]
71024b9ba4  cbz x22,0x71024b9c1c
71024b9ba8  mov x8,xzr
71024b9bac  mov w23,#0x1
71024b9bb0  mov w24,#0x4160
71024b9bb4  mov w25,#0xf700
71024b9bb8  add x20,x21,x8, LSL #0x3
71024b9bbc  ldr x0,[x20, #0x4160]
71024b9bc0  cbz x0,0x71024b9c0c
71024b9bc4  ldr x8,[x0]
71024b9bc8  ldr x8,[x8, #0x518]
71024b9bcc  blr x8
71024b9bd0  tbz w0,#0x0,0x71024b9c0c
71024b9bd4  add x8,x20,x24
71024b9bd8  ldr x20,[x8]
71024b9bdc  ldr x0,[x20, #0x438]
71024b9be0  ldr x8,[x0]
71024b9be4  ldr x8,[x8, #0x280]
71024b9be8  mov w1,wzr
71024b9bec  blr x8
71024b9bf0  ldr x0,[x20, x25, LSL #0x0]
71024b9bf4  cbz x0,0x71024b9c0c
71024b9bf8  ldr x8,[x0]
71024b9bfc  ldr x8,[x8, #0xc0]
71024b9c00  mov w2,#0x1
71024b9c04  mov x1,x20
71024b9c08  blr x8
71024b9c0c  mov w8,w23
71024b9c10  add w23,w23,#0x1
71024b9c14  cmp x22,x8
71024b9c18  b.hi 0x71024b9bb8
71024b9c1c  adrp x8,0x710532f000
71024b9c20  ldr x8,[x8, #0x7c8]
71024b9c24  ldr x0,[x8, #0x8]
71024b9c28  mov w2,#0x1
71024b9c2c  mov w1,wzr
71024b9c30  mov w3,wzr
71024b9c34  mov w4,wzr
71024b9c38  mov w5,wzr
71024b9c3c  bl 0x71032e4d70
71024b9c40  adrp x8,0x71052c3000
71024b9c44  ldr x8,[x8, #0x910]
71024b9c48  ldr x1,[x8]
71024b9c4c  mov x2,#0x708
71024b9c50  movk x2,#0x2259, LSL #16
71024b9c54  movk x2,#0x10, LSL #32
71024b9c58  mov x0,sp
71024b9c5c  bl 0x71015435c0
71024b9c60  ldr x20,[sp]
71024b9c64  cbz x20,0x71024b9cb0
71024b9c68  mov x8,#0x17e
71024b9c6c  movk x8,#0x1281, LSL #16
71024b9c70  movk x8,#0xf, LSL #32
71024b9c74  str x8,[sp, #0x18]
71024b9c78  ldr x8,[x20]
71024b9c7c  ldr x8,[x8, #0x18]
71024b9c80  add x1,sp,#0x18
71024b9c84  mov x0,x20
71024b9c88  blr x8
71024b9c8c  tbz w0,#0x0,0x71024b9cb0
71024b9c90  mov w8,#0x1
71024b9c94  strb w8,[x20, #0xe0]
71024b9c98  adrp x8,0x71052b8000
71024b9c9c  ldr x8,[x8, #0xf00]
71024b9ca0  ldr x8,[x8]
71024b9ca4  ldr w9,[x8, #0xc9c]
71024b9ca8  add w9,w9,#0x1
71024b9cac  str w9,[x8, #0xc9c]
71024b9cb0  ldr x20,[sp, #0x8]
71024b9cb4  cbz x20,0x71024b9ce8
71024b9cb8  add x8,x20,#0x8
71024b9cbc  ldaxr x9,[x8]
71024b9cc0  sub x10,x9,#0x1
71024b9cc4  stlxr w11,x10,[x8]
71024b9cc8  cbnz w11,0x71024b9cbc
71024b9ccc  cbnz x9,0x71024b9ce8
71024b9cd0  ldr x8,[x20]
71024b9cd4  ldr x8,[x8, #0x10]
71024b9cd8  mov x0,x20
71024b9cdc  blr x8
71024b9ce0  mov x0,x20
71024b9ce4  bl 0x71039c2670
71024b9ce8  mov w8,#0x1
71024b9cec  strb w8,[x19, #0x2cd]
71024b9cf0  ldrsw x8,[x19, #0x244]
71024b9cf4  cmp w8,#0x13
71024b9cf8  b.cs 0x71024b9d64
71024b9cfc  add x8,x19,x8, LSL #0x2
71024b9d00  mov w9,#0x9
71024b9d04  str w9,[x8, #0x1f8]
71024b9d08  ldp x29,x30,[sp, #0x50]
71024b9d0c  ldr x25,[sp, #0x10]
71024b9d10  ldp x20,x19,[sp, #0x40]
71024b9d14  ldp x22,x21,[sp, #0x30]
71024b9d18  ldp x24,x23,[sp, #0x20]
71024b9d1c  add sp,sp,#0x60
71024b9d20  ret
71024b9d24  adrp x0,0x7105314000
71024b9d28  add x0,x0,#0x4d8
71024b9d2c  bl 0x71039c06b0
71024b9d30  cbz w0,0x71024b9acc
71024b9d34  bl 0x7101764000
71024b9d38  adrp x0,0x7101763000
71024b9d3c  add x0,x0,#0xc40
71024b9d40  adrp x1,0x71052c5000
71024b9d44  add x1,x1,#0x180
71024b9d48  adrp x2,0x7104f17000
71024b9d4c  add x2,x2,#0x0
71024b9d50  bl 0x71000001c0
71024b9d54  adrp x0,0x7105314000
71024b9d58  add x0,x0,#0x4d8
71024b9d5c  bl 0x71039c06c0
71024b9d60  b 0x71024b9acc
71024b9d64  bl 0x71039c2650
