// addr:      7101d789c0
// offset:    0x1d789c0
// name:      FUN_7101d789c0
// mangled:   
// size:      968

7101d789c0  sub sp,sp,#0x80
7101d789c4  stp x22,x21,[sp, #0x50]
7101d789c8  stp x20,x19,[sp, #0x60]
7101d789cc  stp x29,x30,[sp, #0x70]
7101d789d0  add x29,sp,#0x70
7101d789d4  ldr w8,[x0, #0x224]
7101d789d8  mov x19,x0
7101d789dc  cbz w8,0x7101d789f0
7101d789e0  ldr x8,[x19, #0x2b8]
7101d789e4  ldrsw x9,[x8, #0x2c8]
7101d789e8  tbz w9,#0x1f,0x7101d78c40
7101d789ec  b 0x7101d78c64
7101d789f0  ldr w8,[x19, #0x250]
7101d789f4  cmp w8,#0x3
7101d789f8  b.cs 0x7101d78d84
7101d789fc  add x8,x19,x8, LSL #0x3
7101d78a00  ldr x8,[x8, #0x238]
7101d78a04  ldr x8,[x8]
7101d78a08  ldr x0,[x8]
7101d78a0c  mov w1,#0x1
7101d78a10  mov w22,#0x1
7101d78a14  bl 0x71037760f0
7101d78a18  ldr x0,[x19, #0x2b8]
7101d78a1c  ldr x8,[x0]
7101d78a20  ldr x8,[x8, #0x60]
7101d78a24  mov w1,#0x1
7101d78a28  add x20,x19,#0x298
7101d78a2c  blr x8
7101d78a30  ldr x8,[x19, #0x298]
7101d78a34  ldr x8,[x8, #0x70]
7101d78a38  mov x0,x20
7101d78a3c  blr x8
7101d78a40  mov w21,w0
7101d78a44  ldr x0,[x19, #0x2b8]
7101d78a48  ldr x8,[x0]
7101d78a4c  ldr x8,[x8, #0x70]
7101d78a50  mov w1,#0x1
7101d78a54  blr x8
7101d78a58  tbnz w21,#0x0,0x7101d78a70
7101d78a5c  ldr x8,[x19, #0x298]
7101d78a60  strb w22,[x19, #0x2dc]
7101d78a64  ldr x8,[x8, #0xe0]
7101d78a68  mov x0,x20
7101d78a6c  blr x8
7101d78a70  ldr x8,[x19, #0x298]
7101d78a74  strb w22,[x19, #0x2d3]
7101d78a78  ldr x8,[x8, #0x90]
7101d78a7c  mov x0,x20
7101d78a80  blr x8
7101d78a84  ldr x21,[x19, #0x2b8]
7101d78a88  mov w20,w0
7101d78a8c  ldr x0,[x21, #0x160]
7101d78a90  cbz x0,0x7101d78b38
7101d78a94  ldr x8,[x0]
7101d78a98  ldr x8,[x8, #0x18]
7101d78a9c  blr x8
7101d78aa0  ldr w8,[x21, #0x2c4]
7101d78aa4  cmp w8,#0x1
7101d78aa8  b.lt 0x7101d78b28
7101d78aac  mov x22,xzr
7101d78ab0  mov w20,w20
7101d78ab4  ldr w9,[x21, #0x29c]
7101d78ab8  sub w9,w20,w9
7101d78abc  cmp w9,w22
7101d78ac0  b.ne 0x7101d78b1c
7101d78ac4  ldr w9,[x21, #0x288]
7101d78ac8  cmp w9,w20
7101d78acc  b.le 0x7101d78b1c
7101d78ad0  ldr x8,[x21, #0x168]
7101d78ad4  ldr x9,[x8, x22, LSL #0x3]
7101d78ad8  ldr x10,[x9, #0x20]
7101d78adc  ldr x10,[x10]
7101d78ae0  cbz x10,0x7101d78af4
7101d78ae4  ldrb w9,[x10, #0x58]
7101d78ae8  orr w9,w9,#0x1
7101d78aec  strb w9,[x10, #0x58]
7101d78af0  ldr x9,[x8, x22, LSL #0x3]
7101d78af4  str w20,[x9, #0x30]
7101d78af8  ldr x8,[x8, x22, LSL #0x3]
7101d78afc  ldr x0,[x21, #0x160]
7101d78b00  ldr w1,[x8, #0x30]
7101d78b04  add x2,x8,#0x8
7101d78b08  add x3,x8,#0x18
7101d78b0c  ldr x8,[x0]
7101d78b10  ldr x8,[x8, #0x10]
7101d78b14  blr x8
7101d78b18  ldr w8,[x21, #0x2c4]
7101d78b1c  add x22,x22,#0x1
7101d78b20  cmp x22,w8, SXTW 
7101d78b24  b.lt 0x7101d78ab4
7101d78b28  ldr x0,[x21, #0x160]
7101d78b2c  ldr x8,[x0]
7101d78b30  ldr x8,[x8, #0x20]
7101d78b34  blr x8
7101d78b38  mov w8,#0x1
7101d78b3c  strb w8,[x19, #0x2d0]
7101d78b40  adrp x8,0x710532f000
7101d78b44  ldr x8,[x8, #0x8d0]
7101d78b48  ldr x0,[x8, #0x8]
7101d78b4c  ldrb w8,[x0, #0x191]
7101d78b50  cbnz w8,0x7101d78bd0
7101d78b54  mov x20,#0xec18
7101d78b58  movk x20,#0xd88, LSL #16
7101d78b5c  movk x20,#0xe, LSL #32
7101d78b60  mov w2,#0x4
7101d78b64  mov x1,x20
7101d78b68  bl 0x7103313f20
7101d78b6c  tbz w0,#0x0,0x7101d78bd0
7101d78b70  mov x0,sp
7101d78b74  mov x1,x20
7101d78b78  bl 0x71024076d0
7101d78b7c  ldr x8,[sp, #0x10]
7101d78b80  adrp x9,0x7104f73000
7101d78b84  add x9,x9,#0xd50
7101d78b88  str x9,[sp, #0x8]
7101d78b8c  cbz x8,0x7101d78bfc
7101d78b90  adrp x8,0x7106dd5000
7101d78b94  ldrb w8,[x8, #0x3a8]
7101d78b98  cmp w8,#0x1
7101d78b9c  b.ne 0x7101d78bfc
7101d78ba0  adrp x9,0x7106dd5000
7101d78ba4  ldr w8,[sp, #0x18]
7101d78ba8  ldr w9,[x9, #0x3ac]
7101d78bac  cmp w8,w9
7101d78bb0  b.ne 0x7101d78bfc
7101d78bb4  ldr x8,[sp, #0x10]
7101d78bb8  ldr wzr,[x8, #0x38]!
7101d78bbc  ldaxr w9,[x8]
7101d78bc0  sub w9,w9,#0x1
7101d78bc4  stlxr w10,w9,[x8]
7101d78bc8  cbnz w10,0x7101d78bbc
7101d78bcc  b 0x7101d78bfc
7101d78bd0  mov x8,#0x650000000000
7101d78bd4  movk x8,#0x87, LSL #48
7101d78bd8  strb wzr,[sp, #0x20]
7101d78bdc  stp xzr,x8,[sp, #0x10]
7101d78be0  mov x8,#-0x1
7101d78be4  stp x8,xzr,[sp, #0x28]
7101d78be8  adrp x8,0x7104f73000
7101d78bec  add x8,x8,#0xd50
7101d78bf0  str wzr,[sp]
7101d78bf4  str xzr,[sp, #0x38]
7101d78bf8  str x8,[sp, #0x8]
7101d78bfc  str xzr,[sp, #0x10]
7101d78c00  ldr w8,[x19, #0x250]
7101d78c04  cmp w8,#0x3
7101d78c08  b.cs 0x7101d78d84
7101d78c0c  add x8,x19,x8, LSL #0x3
7101d78c10  ldr x8,[x8, #0x238]
7101d78c14  ldr x8,[x8]
7101d78c18  ldr x0,[x8, #0x10]
7101d78c1c  fmov s0,0x3f800000
7101d78c20  adrp x1,0x710433a000
7101d78c24  add x1,x1,#0x4e5
7101d78c28  bl 0x7103778300
7101d78c2c  ldr x8,[x19, #0x2b8]
7101d78c30  ldr w9,[x8, #0x2a4]
7101d78c34  str w9,[x19, #0x3c8]
7101d78c38  ldrsw x9,[x8, #0x2c8]
7101d78c3c  tbnz w9,#0x1f,0x7101d78c64
7101d78c40  ldr w10,[x8, #0x2c0]
7101d78c44  cmp w9,w10
7101d78c48  b.ge 0x7101d78c64
7101d78c4c  ldr x8,[x8, #0x168]
7101d78c50  ldr x8,[x8, x9, LSL #0x3]
7101d78c54  add x1,x8,#0x8
7101d78c58  mov x0,sp
7101d78c5c  bl 0x7103776390
7101d78c60  b 0x7101d78c6c
7101d78c64  mov x0,sp
7101d78c68  bl 0x7103776290
7101d78c6c  mov w0,#0x10
7101d78c70  mov w1,#0x8
7101d78c74  bl 0x710392e290
7101d78c78  mov x20,x0
7101d78c7c  cbnz x0,0x7101d78cc8
7101d78c80  adrp x8,0x7105332000
7101d78c84  ldr x0,[x8, #0xf00]
7101d78c88  cbz x0,0x7101d78cc4
7101d78c8c  mov w8,#0x8
7101d78c90  stur wzr,[x29, #-0x24]
7101d78c94  sub x1,x29,#0x24
7101d78c98  stur x8,[x29, #-0x30]
7101d78c9c  ldr x8,[x0]
7101d78ca0  ldr x8,[x8, #0x30]
7101d78ca4  sub x2,x29,#0x30
7101d78ca8  blr x8
7101d78cac  tbz w0,#0x0,0x7101d78cc4
7101d78cb0  mov w0,#0x10
7101d78cb4  mov w1,#0x8
7101d78cb8  bl 0x710392e290
7101d78cbc  mov x20,x0
7101d78cc0  cbnz x0,0x7101d78cc8
7101d78cc4  mov x20,xzr
7101d78cc8  str xzr,[x20]
7101d78ccc  ldr x8,[sp, #0x8]
7101d78cd0  ldr x8,[x8, #0x8]
7101d78cd4  cbz x8,0x7101d78d08
7101d78cd8  ldr x0,[x8, #0x60]
7101d78cdc  cbz x0,0x7101d78d08
7101d78ce0  ldr x8,[x8, #0x18]
7101d78ce4  add x1,x8,#0xb0
7101d78ce8  bl 0x7103796f20
7101d78cec  str x0,[x20]
7101d78cf0  cbz x0,0x7101d78d7c
7101d78cf4  ldr x8,[x0]
7101d78cf8  ldr x8,[x8, #0x250]
7101d78cfc  blr x8
7101d78d00  mov w21,w0
7101d78d04  b 0x7101d78d10
7101d78d08  mov w21,wzr
7101d78d0c  str xzr,[x20]
7101d78d10  mov x0,x20
7101d78d14  bl 0x710392eb40
7101d78d18  ldr x20,[sp, #0x8]
7101d78d1c  adrp x8,0x710523d000
7101d78d20  add x8,x8,#0x988
7101d78d24  stp x8,xzr,[sp]
7101d78d28  cbz x20,0x7101d78d4c
7101d78d2c  ldr x0,[x20, #0x18]
7101d78d30  adrp x8,0x710523d000
7101d78d34  add x8,x8,#0x9a8
7101d78d38  stp x8,xzr,[x20, #0x10]
7101d78d3c  cbz x0,0x7101d78d44
7101d78d40  bl 0x710392eb40
7101d78d44  mov x0,x20
7101d78d48  bl 0x710392eb40
7101d78d4c  tbnz w21,#0x0,0x7101d78d68
7101d78d50  ldrsw x8,[x19, #0x21c]
7101d78d54  cmp w8,#0x13
7101d78d58  b.cs 0x7101d78d84
7101d78d5c  add x8,x19,x8, LSL #0x2
7101d78d60  mov w9,#0x15
7101d78d64  str w9,[x8, #0x1d0]
7101d78d68  ldp x29,x30,[sp, #0x70]
7101d78d6c  ldp x20,x19,[sp, #0x60]
7101d78d70  ldp x22,x21,[sp, #0x50]
7101d78d74  add sp,sp,#0x80
7101d78d78  ret
7101d78d7c  mov w21,wzr
7101d78d80  b 0x7101d78d10
7101d78d84  bl 0x71039c2650
