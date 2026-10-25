// addr:      71001f59a0
// offset:    0x1f59a0
// name:      FUN_71001f59a0
// mangled:   
// size:      448

71001f59a0  stp x22,x21,[sp, #-0x30]!
71001f59a4  stp x20,x19,[sp, #0x10]
71001f59a8  stp x29,x30,[sp, #0x20]
71001f59ac  add x29,sp,#0x20
71001f59b0  adrp x8,0x71052a6000
71001f59b4  ldr x8,[x8, #0xb88]
71001f59b8  ldrb w8,[x8]
71001f59bc  mov x19,x1
71001f59c0  mov x20,x0
71001f59c4  cbz w8,0x71001f5a34
71001f59c8  adrp x8,0x71052a4000
71001f59cc  ldr x8,[x8, #0xda8]
71001f59d0  adrp x22,0x71052a4000
71001f59d4  ldrb w8,[x8]
71001f59d8  ldr x22,[x22, #0xdb0]
71001f59dc  add x21,x22,#0x28
71001f59e0  cbz w8,0x71001f5a1c
71001f59e4  adrp x8,0x71052a4000
71001f59e8  ldr x8,[x8, #0xdb8]
71001f59ec  ldr x0,[x8]
71001f59f0  bl 0x7101717960
71001f59f4  ldr w8,[x0]
71001f59f8  cbz w8,0x71001f5a1c
71001f59fc  ldr x10,[x22, #0xa0]
71001f5a00  ldp x9,x10,[x10]
71001f5a04  sub x10,x10,x9
71001f5a08  asr x10,x10,#0x3
71001f5a0c  cmp x10,x8
71001f5a10  b.ls 0x71001f5aa4
71001f5a14  ldr x8,[x9, x8, LSL #0x3]
71001f5a18  add x21,x8,#0x20
71001f5a1c  ldr x8,[x21]
71001f5a20  cbz x8,0x71001f5abc
71001f5a24  ldr x8,[x8, #0x10]
71001f5a28  cbz x8,0x71001f5abc
71001f5a2c  ldr x21,[x8, #0x10]
71001f5a30  b 0x71001f5ac0
71001f5a34  ldp x8,x9,[x20, #0x10]
71001f5a38  subs x10,x9,x8
71001f5a3c  b.eq 0x71001f5a74
71001f5a40  asr x11,x10,#0x4
71001f5a44  ldrh w10,[x19]
71001f5a48  cmp x11,#0x0
71001f5a4c  cinc x12,x11,lt
71001f5a50  asr x12,x12,#0x1
71001f5a54  add x13,x8,x12, LSL #0x4
71001f5a58  ldrh w14,[x13], #0x10
71001f5a5c  mvn x15,x12
71001f5a60  add x11,x11,x15
71001f5a64  cmp w14,w10
71001f5a68  csel x11,x11,x12,cc
71001f5a6c  csel x8,x13,x8,cc
71001f5a70  cbnz x11,0x71001f5a48
71001f5a74  cmp x8,x9
71001f5a78  b.eq 0x71001f5a8c
71001f5a7c  ldrh w10,[x19]
71001f5a80  ldrh w11,[x8]
71001f5a84  cmp w10,w11
71001f5a88  csel x8,x9,x8,cc
71001f5a8c  cmp x8,x9
71001f5a90  b.eq 0x71001f5a9c
71001f5a94  ldr x19,[x8, #0x8]
71001f5a98  b 0x71001f5b4c
71001f5a9c  mov x19,xzr
71001f5aa0  b 0x71001f5b4c
71001f5aa4  adrp x0,0x71042c4000
71001f5aa8  add x0,x0,#0x35f
71001f5aac  mov w1,#0x47
71001f5ab0  orr w2,wzr,#0xe0000003
71001f5ab4  mov w3,wzr
71001f5ab8  bl 0x71001b1300
71001f5abc  mov x21,xzr
71001f5ac0  ldr x8,[x21, #0x78]!
71001f5ac4  ldr x8,[x8, #0x10]
71001f5ac8  mov x0,x21
71001f5acc  blr x8
71001f5ad0  ldp x8,x9,[x20, #0x10]
71001f5ad4  subs x10,x9,x8
71001f5ad8  b.eq 0x71001f5b10
71001f5adc  asr x11,x10,#0x4
71001f5ae0  ldrh w10,[x19]
71001f5ae4  cmp x11,#0x0
71001f5ae8  cinc x12,x11,lt
71001f5aec  asr x12,x12,#0x1
71001f5af0  add x13,x8,x12, LSL #0x4
71001f5af4  ldrh w14,[x13], #0x10
71001f5af8  mvn x15,x12
71001f5afc  add x11,x11,x15
71001f5b00  cmp w14,w10
71001f5b04  csel x11,x11,x12,cc
71001f5b08  csel x8,x13,x8,cc
71001f5b0c  cbnz x11,0x71001f5ae4
71001f5b10  cmp x8,x9
71001f5b14  b.eq 0x71001f5b28
71001f5b18  ldrh w10,[x19]
71001f5b1c  ldrh w11,[x8]
71001f5b20  cmp w10,w11
71001f5b24  csel x8,x9,x8,cc
71001f5b28  cmp x8,x9
71001f5b2c  b.eq 0x71001f5b38
71001f5b30  ldr x19,[x8, #0x8]
71001f5b34  b 0x71001f5b3c
71001f5b38  mov x19,xzr
71001f5b3c  ldr x8,[x21]
71001f5b40  ldr x8,[x8, #0x20]
71001f5b44  mov x0,x21
71001f5b48  blr x8
71001f5b4c  mov x0,x19
71001f5b50  ldp x29,x30,[sp, #0x20]
71001f5b54  ldp x20,x19,[sp, #0x10]
71001f5b58  ldp x22,x21,[sp], #0x30
71001f5b5c  ret
