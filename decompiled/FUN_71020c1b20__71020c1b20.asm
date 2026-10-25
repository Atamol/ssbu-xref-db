// addr:      71020c1b20
// offset:    0x20c1b20
// name:      FUN_71020c1b20
// mangled:   
// size:      560

71020c1b20  stp x24,x23,[sp, #-0x40]!
71020c1b24  stp x22,x21,[sp, #0x10]
71020c1b28  stp x20,x19,[sp, #0x20]
71020c1b2c  stp x29,x30,[sp, #0x30]
71020c1b30  add x29,sp,#0x30
71020c1b34  ldr x9,[x0, #0x20]
71020c1b38  ldr x9,[x9]
71020c1b3c  ldr x8,[x0, #0x10]
71020c1b40  adrp x20,0x7104862000
71020c1b44  add x20,x20,#0x960
71020c1b48  add x9,x9,#0x10
71020c1b4c  cmp x9,x8
71020c1b50  sub x23,x8,x9
71020c1b54  csel x8,x9,x20,cc
71020c1b58  ldr w9,[x8, #0x8]
71020c1b5c  and w9,w9,#0xf
71020c1b60  mov x19,x0
71020c1b64  lsr x24,x23,#0x4
71020c1b68  cmp w9,#0x2
71020c1b6c  b.eq 0x71020c1b84
71020c1b70  cmp w9,#0x7
71020c1b74  b.ne 0x71020c1b8c
71020c1b78  ldr x8,[x8]
71020c1b7c  add x22,x8,#0x28
71020c1b80  b 0x71020c1b90
71020c1b84  ldr x22,[x8]
71020c1b88  b 0x71020c1b90
71020c1b8c  mov x22,xzr
71020c1b90  mov w1,#0x2
71020c1b94  mov x0,x19
71020c1b98  mov x2,xzr
71020c1b9c  bl 0x71038f45b0
71020c1ba0  ldr x8,[x19, #0x20]
71020c1ba4  ldr x8,[x8]
71020c1ba8  ldr x9,[x19, #0x10]
71020c1bac  add x8,x8,#0x30
71020c1bb0  cmp x8,x9
71020c1bb4  mov x21,x0
71020c1bb8  adrp x2,0x710430c000
71020c1bbc  add x2,x2,#0x66a
71020c1bc0  mov x0,x19
71020c1bc4  csel x1,x8,x20,cc
71020c1bc8  bl 0x71038f4d40
71020c1bcc  ldr x9,[x19, #0x10]
71020c1bd0  sub x8,x9,#0x10
71020c1bd4  ldur w9,[x9, #-0x8]
71020c1bd8  and w10,w9,#0xf
71020c1bdc  cmp w10,#0x2
71020c1be0  b.eq 0x71020c1bfc
71020c1be4  mov x9,xzr
71020c1be8  cmp w10,#0x7
71020c1bec  b.ne 0x71020c1c00
71020c1bf0  ldr x9,[x8]
71020c1bf4  add x9,x9,#0x28
71020c1bf8  b 0x71020c1c00
71020c1bfc  ldr x9,[x8]
71020c1c00  str x8,[x19, #0x10]
71020c1c04  blr x9
71020c1c08  orr w2,wzr,#0x3
71020c1c0c  mov x1,x19
71020c1c10  mov x20,x0
71020c1c14  bl 0x7101ff2160
71020c1c18  tbnz w24,#0x1f,0x71020c1c34
71020c1c1c  ldr x8,[x19, #0x10]
71020c1c20  neg x9,x23, LSL #0x1c
71020c1c24  add x8,x8,x9, ASR #0x1c
71020c1c28  str x8,[x19, #0x10]
71020c1c2c  cbnz x20,0x71020c1c74
71020c1c30  b 0x71020c1cec
71020c1c34  ldr x8,[x19, #0x20]
71020c1c38  ldr x8,[x8]
71020c1c3c  lsl x10,x23,#0x1c
71020c1c40  ldr x9,[x19, #0x10]
71020c1c44  eor x10,x10,#-0x100000000
71020c1c48  add x8,x8,x10, ASR #0x1c
71020c1c4c  add x8,x8,#0x10
71020c1c50  b 0x71020c1c64
71020c1c54  add x10,x9,#0x10
71020c1c58  str x10,[x19, #0x10]
71020c1c5c  str wzr,[x9, #0x8]
71020c1c60  ldr x9,[x19, #0x10]
71020c1c64  cmp x9,x8
71020c1c68  b.cc 0x71020c1c54
71020c1c6c  str x8,[x19, #0x10]
71020c1c70  cbz x20,0x71020c1cec
71020c1c74  ldr x0,[x22, #0x38]
71020c1c78  ldr x8,[x0]
71020c1c7c  ldr x8,[x8, #0x60]
71020c1c80  blr x8
71020c1c84  cmp w21,#0x1
71020c1c88  b.lt 0x71020c1d10
71020c1c8c  ldr q0,[x0]
71020c1c90  dup s1,v0.S[0x1]
71020c1c94  mov x8,xzr
71020c1c98  sxtw x9,w21
71020c1c9c  add x10,x20,#0x8
71020c1ca0  mov x11,#-0x1
71020c1ca4  ldur s2,[x10, #-0x8]
71020c1ca8  fcmp s2,s0
71020c1cac  b.hi 0x71020c1cd4
71020c1cb0  ldur s2,[x10, #-0x4]
71020c1cb4  fcmp s0,s2
71020c1cb8  b.hi 0x71020c1cd4
71020c1cbc  ldr s2,[x10, #0x4]
71020c1cc0  fcmp s2,s1
71020c1cc4  b.hi 0x71020c1cd4
71020c1cc8  ldr s2,[x10]
71020c1ccc  fcmp s1,s2
71020c1cd0  b.ls 0x71020c1d14
71020c1cd4  add x8,x8,#0x1
71020c1cd8  add x10,x10,#0x10
71020c1cdc  cmp x8,x9
71020c1ce0  b.lt 0x71020c1ca4
71020c1ce4  mov x8,x11
71020c1ce8  b 0x71020c1d14
71020c1cec  ldr x8,[x19, #0x10]
71020c1cf0  mov x9,#-0x1
71020c1cf4  str x9,[x8]
71020c1cf8  mov w9,#0x13
71020c1cfc  str w9,[x8, #0x8]
71020c1d00  ldr x8,[x19, #0x10]
71020c1d04  add x8,x8,#0x10
71020c1d08  str x8,[x19, #0x10]
71020c1d0c  b 0x71020c1d38
71020c1d10  mov x8,#-0x1
71020c1d14  ldr x9,[x19, #0x10]
71020c1d18  str x8,[x9]
71020c1d1c  mov w8,#0x13
71020c1d20  str w8,[x9, #0x8]
71020c1d24  ldr x8,[x19, #0x10]
71020c1d28  add x8,x8,#0x10
71020c1d2c  mov x0,x20
71020c1d30  str x8,[x19, #0x10]
71020c1d34  bl 0x710392eb40
71020c1d38  ldp x29,x30,[sp, #0x30]
71020c1d3c  mov w0,#0x1
71020c1d40  ldp x20,x19,[sp, #0x20]
71020c1d44  ldp x22,x21,[sp, #0x10]
71020c1d48  ldp x24,x23,[sp], #0x40
71020c1d4c  ret
