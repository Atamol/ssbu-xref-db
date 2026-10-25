// addr:      7101c43a70
// offset:    0x1c43a70
// name:      FUN_7101c43a70
// mangled:   
// size:      484

7101c43a70  stp x22,x21,[sp, #-0x30]!
7101c43a74  stp x20,x19,[sp, #0x10]
7101c43a78  stp x29,x30,[sp, #0x20]
7101c43a7c  add x29,sp,#0x20
7101c43a80  ldr x22,[x0, #0x80]
7101c43a84  ldr x8,[x22, #0x40]
7101c43a88  mov x19,x0
7101c43a8c  cbz x8,0x7101c43b6c
7101c43a90  ldr x0,[x8]
7101c43a94  mov w20,w2
7101c43a98  cbz x0,0x7101c43ab4
7101c43a9c  and w3,w1,#0x1
7101c43aa0  adrp x1,0x71042c5000
7101c43aa4  add x1,x1,#0xfe
7101c43aa8  adrp x2,0x71043cd000
7101c43aac  add x2,x2,#0xb7b
7101c43ab0  bl 0x7103375650
7101c43ab4  mov w0,wzr
7101c43ab8  bl 0x7101797350
7101c43abc  and w3,w0,#0x1
7101c43ac0  cmp w20,#0x2
7101c43ac4  b.ne 0x7101c43ad0
7101c43ac8  mov w21,wzr
7101c43acc  tbz w0,#0x0,0x7101c43ae4
7101c43ad0  cmp w20,#0x0
7101c43ad4  cset w8,eq
7101c43ad8  tst w8,w3
7101c43adc  mov w8,#0x2
7101c43ae0  csel w21,w8,w20,ne
7101c43ae4  ldr x8,[x22, #0x40]
7101c43ae8  ldr x0,[x8]
7101c43aec  cbz x0,0x7101c43b28
7101c43af0  adrp x1,0x71042f8000
7101c43af4  add x1,x1,#0x641
7101c43af8  adrp x2,0x71042b2000
7101c43afc  add x2,x2,#0xa84
7101c43b00  bl 0x7103375650
7101c43b04  ldr x8,[x22, #0x40]
7101c43b08  ldr x0,[x8]
7101c43b0c  cbz x0,0x7101c43b28
7101c43b10  adrp x1,0x7104291000
7101c43b14  add x1,x1,#0xf25
7101c43b18  adrp x2,0x71042b2000
7101c43b1c  add x2,x2,#0xa84
7101c43b20  mov w3,w21
7101c43b24  bl 0x7103375650
7101c43b28  adrp x8,0x7105314000
7101c43b2c  add x8,x8,#0x4d8
7101c43b30  ldarb w8,[x8]
7101c43b34  tbz w8,#0x0,0x7101c43c10
7101c43b38  ldr x8,[x22, #0x40]
7101c43b3c  ldr x0,[x8]
7101c43b40  cbz x0,0x7101c43b68
7101c43b44  adrp x8,0x7105306000
7101c43b48  ldrb w3,[x8, #0x970]
7101c43b4c  adrp x1,0x710426f000
7101c43b50  add x1,x1,#0xfe2
7101c43b54  adrp x2,0x71043cd000
7101c43b58  add x2,x2,#0xb7b
7101c43b5c  bl 0x7103375650
7101c43b60  ldr x8,[x22, #0x40]
7101c43b64  ldr x0,[x8]
7101c43b68  bl 0x7103376980
7101c43b6c  mov x0,x22
7101c43b70  ldr x8,[x0, #0x10]!
7101c43b74  ldr x9,[x0, #0x8]
7101c43b78  cmp x9,x8
7101c43b7c  b.eq 0x7101c43c50
7101c43b80  ldr x8,[x8]
7101c43b84  ldr x8,[x8]
7101c43b88  ldr x0,[x8]
7101c43b8c  mov w2,#0x1000
7101c43b90  mov w1,wzr
7101c43b94  bl 0x7103775dc0
7101c43b98  adrp x8,0x7105314000
7101c43b9c  ldr x8,[x8, #0x510]
7101c43ba0  ldr x8,[x8]
7101c43ba4  ldr x8,[x8, #0x268]
7101c43ba8  ldr x8,[x8]
7101c43bac  ldr x8,[x8]
7101c43bb0  mov w9,#0x84ea
7101c43bb4  ldrb w8,[x8, x9, LSL ]
7101c43bb8  cbnz w8,0x7101c43bfc
7101c43bbc  mov w8,#0xffffffff
7101c43bc0  stp xzr,xzr,[x22, #0x50]
7101c43bc4  str wzr,[x22, #0xec]
7101c43bc8  stur xzr,[x22, #0xe4]
7101c43bcc  stur xzr,[x22, #0xdc]
7101c43bd0  stur xzr,[x22, #0xd4]
7101c43bd4  stur xzr,[x22, #0xcc]
7101c43bd8  stur xzr,[x22, #0xc4]
7101c43bdc  stur xzr,[x22, #0xbc]
7101c43be0  stur xzr,[x22, #0xb4]
7101c43be4  stur xzr,[x22, #0xac]
7101c43be8  stur xzr,[x22, #0xa4]
7101c43bec  str x8,[x22, #0xf0]
7101c43bf0  str w8,[x22, #0xf8]
7101c43bf4  strb wzr,[x22, #0xfc]
7101c43bf8  str wzr,[x22, #0xa0]
7101c43bfc  strb wzr,[x19, #0x70]
7101c43c00  ldp x29,x30,[sp, #0x20]
7101c43c04  ldp x20,x19,[sp, #0x10]
7101c43c08  ldp x22,x21,[sp], #0x30
7101c43c0c  ret
7101c43c10  adrp x0,0x7105314000
7101c43c14  add x0,x0,#0x4d8
7101c43c18  bl 0x71039c06b0
7101c43c1c  cbz w0,0x7101c43b38
7101c43c20  bl 0x7101764000
7101c43c24  adrp x0,0x7101763000
7101c43c28  add x0,x0,#0xc40
7101c43c2c  adrp x1,0x71052c5000
7101c43c30  add x1,x1,#0x180
7101c43c34  adrp x2,0x7104f17000
7101c43c38  add x2,x2,#0x0
7101c43c3c  bl 0x71000001c0
7101c43c40  adrp x0,0x7105314000
7101c43c44  add x0,x0,#0x4d8
7101c43c48  bl 0x71039c06c0
7101c43c4c  b 0x7101c43b38
7101c43c50  bl 0x71039c1330
