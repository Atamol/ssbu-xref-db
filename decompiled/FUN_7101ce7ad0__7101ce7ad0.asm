// addr:      7101ce7ad0
// offset:    0x1ce7ad0
// name:      FUN_7101ce7ad0
// mangled:   
// size:      528

7101ce7ad0  sub sp,sp,#0x80
7101ce7ad4  str x21,[sp, #0x50]
7101ce7ad8  stp x20,x19,[sp, #0x60]
7101ce7adc  stp x29,x30,[sp, #0x70]
7101ce7ae0  add x29,sp,#0x70
7101ce7ae4  ldr w8,[x0, #0x228]
7101ce7ae8  cbz w8,0x7101ce7cc8
7101ce7aec  mov w20,w1
7101ce7af0  mov x19,x0
7101ce7af4  mov w8,#0x1
7101ce7af8  str w8,[x0, #0x298]
7101ce7afc  str xzr,[x0, #0x2a0]
7101ce7b00  str wzr,[x0, #0x2a8]
7101ce7b04  tbz w1,#0x0,0x7101ce7b38
7101ce7b08  adrp x8,0x710532f000
7101ce7b0c  ldr x8,[x8, #0x8d0]
7101ce7b10  ldr x0,[x8, #0x8]
7101ce7b14  ldp x8,x9,[x0, #0x40]
7101ce7b18  sub x9,x9,x8
7101ce7b1c  asr x9,x9,#0x3
7101ce7b20  cmp x9,#0x4
7101ce7b24  b.cc 0x7101ce7b4c
7101ce7b28  ldr x21,[x8, #0x18]
7101ce7b2c  ldrb w8,[x0, #0x191]
7101ce7b30  cbnz w8,0x7101ce7bc8
7101ce7b34  b 0x7101ce7b58
7101ce7b38  ldr x0,[x19, #0x248]
7101ce7b3c  adrp x1,0x71043e0000
7101ce7b40  add x1,x1,#0x2c9
7101ce7b44  bl 0x7103778760
7101ce7b48  b 0x7101ce7c10
7101ce7b4c  mov x21,xzr
7101ce7b50  ldrb w8,[x0, #0x191]
7101ce7b54  cbnz w8,0x7101ce7bc8
7101ce7b58  mov w2,#0x4
7101ce7b5c  mov x1,x21
7101ce7b60  bl 0x7103313f20
7101ce7b64  tbz w0,#0x0,0x7101ce7bc8
7101ce7b68  add x0,sp,#0x10
7101ce7b6c  mov x1,x21
7101ce7b70  bl 0x71024076d0
7101ce7b74  ldr x8,[sp, #0x20]
7101ce7b78  adrp x9,0x7104f73000
7101ce7b7c  add x9,x9,#0xd50
7101ce7b80  str x9,[sp, #0x18]
7101ce7b84  cbz x8,0x7101ce7bf4
7101ce7b88  adrp x8,0x7106dd5000
7101ce7b8c  ldrb w8,[x8, #0x3a8]
7101ce7b90  cmp w8,#0x1
7101ce7b94  b.ne 0x7101ce7bf4
7101ce7b98  adrp x9,0x7106dd5000
7101ce7b9c  ldr w8,[sp, #0x28]
7101ce7ba0  ldr w9,[x9, #0x3ac]
7101ce7ba4  cmp w8,w9
7101ce7ba8  b.ne 0x7101ce7bf4
7101ce7bac  ldr x8,[sp, #0x20]
7101ce7bb0  ldr wzr,[x8, #0x38]!
7101ce7bb4  ldaxr w9,[x8]
7101ce7bb8  sub w9,w9,#0x1
7101ce7bbc  stlxr w10,w9,[x8]
7101ce7bc0  cbnz w10,0x7101ce7bb4
7101ce7bc4  b 0x7101ce7bf4
7101ce7bc8  mov x8,#0x650000000000
7101ce7bcc  movk x8,#0x87, LSL #48
7101ce7bd0  strb wzr,[sp, #0x30]
7101ce7bd4  stp xzr,x8,[sp, #0x20]
7101ce7bd8  mov x8,#-0x1
7101ce7bdc  stp x8,xzr,[sp, #0x38]
7101ce7be0  adrp x8,0x7104f73000
7101ce7be4  add x8,x8,#0xd50
7101ce7be8  str wzr,[sp, #0x10]
7101ce7bec  str xzr,[sp, #0x48]
7101ce7bf0  str x8,[sp, #0x18]
7101ce7bf4  str xzr,[sp, #0x20]
7101ce7bf8  strb wzr,[sp, #0x30]
7101ce7bfc  ldr x0,[x19, #0x248]
7101ce7c00  fmov s0,0x3f800000
7101ce7c04  adrp x1,0x71043e0000
7101ce7c08  add x1,x1,#0x2c9
7101ce7c0c  bl 0x7103778300
7101ce7c10  ldr x8,[x19, #0x2f0]
7101ce7c14  ldr w8,[x8, #0xb8]
7101ce7c18  cmp w8,#0x1
7101ce7c1c  b.lt 0x7101ce7c84
7101ce7c20  add x0,x19,#0x2e8
7101ce7c24  bl 0x71032d6200
7101ce7c28  tbnz w20,#0x0,0x7101ce7c84
7101ce7c2c  add x0,x19,#0x240
7101ce7c30  adrp x1,0x7104431000
7101ce7c34  add x1,x1,#0x6e2
7101ce7c38  mov x8,sp
7101ce7c3c  bl 0x7103776640
7101ce7c40  ldr x20,[sp, #0x8]
7101ce7c44  adrp x1,0x710428f000
7101ce7c48  add x1,x1,#0xf7d
7101ce7c4c  mov x0,x20
7101ce7c50  bl 0x7103778760
7101ce7c54  adrp x8,0x710523d000
7101ce7c58  add x8,x8,#0x988
7101ce7c5c  stp x8,xzr,[sp]
7101ce7c60  cbz x20,0x7101ce7c84
7101ce7c64  ldr x0,[x20, #0x18]
7101ce7c68  adrp x8,0x710523d000
7101ce7c6c  add x8,x8,#0x9a8
7101ce7c70  stp x8,xzr,[x20, #0x10]
7101ce7c74  cbz x0,0x7101ce7c7c
7101ce7c78  bl 0x710392eb40
7101ce7c7c  mov x0,x20
7101ce7c80  bl 0x710392eb40
7101ce7c84  ldrsw x8,[x19, #0x224]
7101ce7c88  cmp w8,#0x13
7101ce7c8c  b.cs 0x7101ce7cdc
7101ce7c90  add x8,x19,x8, LSL #0x2
7101ce7c94  mov w9,#0x1a
7101ce7c98  str w9,[x8, #0x1d8]
7101ce7c9c  adrp x8,0x7105325000
7101ce7ca0  ldr x8,[x8, #0xca0]
7101ce7ca4  ldr x8,[x8, #0x8]
7101ce7ca8  mov w9,#0x1
7101ce7cac  strb w9,[x8, #0xd8]
7101ce7cb0  adrp x8,0x710532f000
7101ce7cb4  ldr x8,[x8, #0x820]
7101ce7cb8  ldr x8,[x8, #0x8]
7101ce7cbc  ldr x8,[x8, #0x110]
7101ce7cc0  ldr x8,[x8, #0x80]
7101ce7cc4  strb w9,[x8, #0x14a]
7101ce7cc8  ldp x29,x30,[sp, #0x70]
7101ce7ccc  ldr x21,[sp, #0x50]
7101ce7cd0  ldp x20,x19,[sp, #0x60]
7101ce7cd4  add sp,sp,#0x80
7101ce7cd8  ret
7101ce7cdc  bl 0x71039c2650
