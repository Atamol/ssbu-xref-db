// addr:      7101e949d0
// offset:    0x1e949d0
// name:      FUN_7101e949d0
// mangled:   
// size:      452

7101e949d0  sub sp,sp,#0x50
7101e949d4  str d8,[sp, #0x10]
7101e949d8  stp x22,x21,[sp, #0x20]
7101e949dc  stp x20,x19,[sp, #0x30]
7101e949e0  stp x29,x30,[sp, #0x40]
7101e949e4  add x29,sp,#0x40
7101e949e8  mov w8,#0x1
7101e949ec  strb w8,[x0, #0x9]
7101e949f0  ldr x8,[x0]
7101e949f4  fmov s8,0x3f800000
7101e949f8  mov x19,x0
7101e949fc  ldr x0,[x8, #0x8]
7101e94a00  mov v0.16B,v8.16B
7101e94a04  adrp x1,0x7104443000
7101e94a08  add x1,x1,#0xdfb
7101e94a0c  bl 0x7103778300
7101e94a10  ldr x21,[x19]
7101e94a14  mov w0,#0x10
7101e94a18  mov w1,#0x10
7101e94a1c  bl 0x710392e290
7101e94a20  mov x20,x0
7101e94a24  cbnz x0,0x7101e94a70
7101e94a28  adrp x8,0x7105332000
7101e94a2c  ldr x0,[x8, #0xf00]
7101e94a30  cbz x0,0x7101e94a6c
7101e94a34  mov w8,#0x10
7101e94a38  str wzr,[sp, #0x1c]
7101e94a3c  add x1,sp,#0x1c
7101e94a40  str x8,[sp, #0x8]
7101e94a44  ldr x8,[x0]
7101e94a48  ldr x8,[x8, #0x30]
7101e94a4c  add x2,sp,#0x8
7101e94a50  blr x8
7101e94a54  tbz w0,#0x0,0x7101e94a6c
7101e94a58  mov w0,#0x10
7101e94a5c  mov w1,#0x10
7101e94a60  bl 0x710392e290
7101e94a64  mov x20,x0
7101e94a68  cbnz x0,0x7101e94a70
7101e94a6c  mov x20,xzr
7101e94a70  adrp x8,0x710523d000
7101e94a74  add x8,x8,#0x9e8
7101e94a78  mov w0,#0x10
7101e94a7c  orr w1,wzr,#0x18
7101e94a80  add x22,x21,#0x50
7101e94a84  str x8,[x20]
7101e94a88  bl 0x710392e290
7101e94a8c  cbnz x0,0x7101e94ad4
7101e94a90  adrp x8,0x7105332000
7101e94a94  ldr x0,[x8, #0xf00]
7101e94a98  cbz x0,0x7101e94ad0
7101e94a9c  orr w8,wzr,#0x18
7101e94aa0  str wzr,[sp, #0x1c]
7101e94aa4  add x1,sp,#0x1c
7101e94aa8  str x8,[sp, #0x8]
7101e94aac  ldr x8,[x0]
7101e94ab0  ldr x8,[x8, #0x30]
7101e94ab4  add x2,sp,#0x8
7101e94ab8  blr x8
7101e94abc  tbz w0,#0x0,0x7101e94ad0
7101e94ac0  mov w0,#0x10
7101e94ac4  orr w1,wzr,#0x18
7101e94ac8  bl 0x710392e290
7101e94acc  cbnz x0,0x7101e94ad4
7101e94ad0  mov x0,xzr
7101e94ad4  mov w8,#0x1
7101e94ad8  cmp x22,x20
7101e94adc  strb w8,[x0, #0x10]
7101e94ae0  stp xzr,xzr,[x0]
7101e94ae4  str x0,[x20, #0x8]
7101e94ae8  b.eq 0x7101e94b10
7101e94aec  ldr x8,[x21, #0x58]
7101e94af0  ldr x9,[x8]
7101e94af4  str x9,[x0]
7101e94af8  ldr x8,[x8, #0x8]
7101e94afc  str x8,[x0, #0x8]
7101e94b00  ldr x8,[x21, #0x58]
7101e94b04  ldrb w8,[x8, #0x10]
7101e94b08  ldr x9,[x20, #0x8]
7101e94b0c  strb w8,[x9, #0x10]
7101e94b10  ldr x21,[x19]
7101e94b14  ldr x0,[x21, #0x40]
7101e94b18  str x20,[x21, #0x40]
7101e94b1c  cbz x0,0x7101e94b30
7101e94b20  ldr x8,[x0]
7101e94b24  ldr x8,[x8, #0x8]
7101e94b28  blr x8
7101e94b2c  ldr x20,[x21, #0x40]
7101e94b30  ldr x8,[x20, #0x8]
7101e94b34  ldr x0,[x8, #0x8]
7101e94b38  cbz x0,0x7101e94b84
7101e94b3c  ldr x8,[x0]
7101e94b40  ldr x8,[x8, #0x1a8]
7101e94b44  blr x8
7101e94b48  ldr w8,[x19, #0x10]
7101e94b4c  cbz w8,0x7101e94b58
7101e94b50  ucvtf s1,w8
7101e94b54  fdiv s8,s0,s1
7101e94b58  ldr s0,[x19, #0x18]
7101e94b5c  fmul s0,s8,s0
7101e94b60  ldr x0,[x21, #0x40]
7101e94b64  bl 0x710377aee0
7101e94b68  str wzr,[x19, #0xc]
7101e94b6c  ldr d8,[sp, #0x10]
7101e94b70  ldp x29,x30,[sp, #0x40]
7101e94b74  ldp x20,x19,[sp, #0x30]
7101e94b78  ldp x22,x21,[sp, #0x20]
7101e94b7c  add sp,sp,#0x50
7101e94b80  ret
7101e94b84  fmov s0,wzr
7101e94b88  ldr w8,[x19, #0x10]
7101e94b8c  cbnz w8,0x7101e94b50
7101e94b90  b 0x7101e94b58
