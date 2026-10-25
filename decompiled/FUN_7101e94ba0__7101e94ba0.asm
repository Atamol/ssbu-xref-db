// addr:      7101e94ba0
// offset:    0x1e94ba0
// name:      FUN_7101e94ba0
// mangled:   
// size:      476

7101e94ba0  sub sp,sp,#0x50
7101e94ba4  str d8,[sp, #0x10]
7101e94ba8  str x23,[sp, #0x18]
7101e94bac  stp x22,x21,[sp, #0x20]
7101e94bb0  stp x20,x19,[sp, #0x30]
7101e94bb4  stp x29,x30,[sp, #0x40]
7101e94bb8  add x29,sp,#0x40
7101e94bbc  ldr x8,[x0]
7101e94bc0  fmov s8,0x3f800000
7101e94bc4  strb wzr,[x0, #0x9]
7101e94bc8  mov x19,x0
7101e94bcc  mov v0.16B,v8.16B
7101e94bd0  ldr x0,[x8, #0x8]
7101e94bd4  mov w20,w1
7101e94bd8  adrp x1,0x7104443000
7101e94bdc  add x1,x1,#0xdfb
7101e94be0  bl 0x7103778300
7101e94be4  ldr x22,[x19]
7101e94be8  mov w0,#0x10
7101e94bec  mov w1,#0x10
7101e94bf0  bl 0x710392e290
7101e94bf4  mov x21,x0
7101e94bf8  cbnz x0,0x7101e94c44
7101e94bfc  adrp x8,0x7105332000
7101e94c00  ldr x0,[x8, #0xf00]
7101e94c04  cbz x0,0x7101e94c40
7101e94c08  mov w8,#0x10
7101e94c0c  str wzr,[sp, #0xc]
7101e94c10  add x1,sp,#0xc
7101e94c14  str x8,[sp]
7101e94c18  ldr x8,[x0]
7101e94c1c  ldr x8,[x8, #0x30]
7101e94c20  mov x2,sp
7101e94c24  blr x8
7101e94c28  tbz w0,#0x0,0x7101e94c40
7101e94c2c  mov w0,#0x10
7101e94c30  mov w1,#0x10
7101e94c34  bl 0x710392e290
7101e94c38  mov x21,x0
7101e94c3c  cbnz x0,0x7101e94c44
7101e94c40  mov x21,xzr
7101e94c44  adrp x8,0x710523d000
7101e94c48  add x8,x8,#0x9e8
7101e94c4c  mov w0,#0x10
7101e94c50  orr w1,wzr,#0x18
7101e94c54  add x23,x22,#0x50
7101e94c58  str x8,[x21]
7101e94c5c  bl 0x710392e290
7101e94c60  cbnz x0,0x7101e94ca8
7101e94c64  adrp x8,0x7105332000
7101e94c68  ldr x0,[x8, #0xf00]
7101e94c6c  cbz x0,0x7101e94ca4
7101e94c70  orr w8,wzr,#0x18
7101e94c74  str wzr,[sp, #0xc]
7101e94c78  add x1,sp,#0xc
7101e94c7c  str x8,[sp]
7101e94c80  ldr x8,[x0]
7101e94c84  ldr x8,[x8, #0x30]
7101e94c88  mov x2,sp
7101e94c8c  blr x8
7101e94c90  tbz w0,#0x0,0x7101e94ca4
7101e94c94  mov w0,#0x10
7101e94c98  orr w1,wzr,#0x18
7101e94c9c  bl 0x710392e290
7101e94ca0  cbnz x0,0x7101e94ca8
7101e94ca4  mov x0,xzr
7101e94ca8  mov w8,#0x1
7101e94cac  cmp x23,x21
7101e94cb0  strb w8,[x0, #0x10]
7101e94cb4  stp xzr,xzr,[x0]
7101e94cb8  str x0,[x21, #0x8]
7101e94cbc  b.eq 0x7101e94ce4
7101e94cc0  ldr x8,[x22, #0x58]
7101e94cc4  ldr x9,[x8]
7101e94cc8  str x9,[x0]
7101e94ccc  ldr x8,[x8, #0x8]
7101e94cd0  str x8,[x0, #0x8]
7101e94cd4  ldr x8,[x22, #0x58]
7101e94cd8  ldrb w8,[x8, #0x10]
7101e94cdc  ldr x9,[x21, #0x8]
7101e94ce0  strb w8,[x9, #0x10]
7101e94ce4  ldr x22,[x19]
7101e94ce8  ldr x0,[x22, #0x40]
7101e94cec  str x21,[x22, #0x40]
7101e94cf0  cbz x0,0x7101e94d04
7101e94cf4  ldr x8,[x0]
7101e94cf8  ldr x8,[x8, #0x8]
7101e94cfc  blr x8
7101e94d00  ldr x21,[x22, #0x40]
7101e94d04  ldr x8,[x21, #0x8]
7101e94d08  ldr x0,[x8, #0x8]
7101e94d0c  cbz x0,0x7101e94d6c
7101e94d10  ldr x8,[x0]
7101e94d14  ldr x8,[x8, #0x1a8]
7101e94d18  blr x8
7101e94d1c  ldr w8,[x19, #0x10]
7101e94d20  cbz w8,0x7101e94d2c
7101e94d24  ucvtf s1,w8
7101e94d28  fdiv s8,s0,s1
7101e94d2c  ldr s0,[x19, #0x18]
7101e94d30  fmul s0,s8,s0
7101e94d34  ldr x0,[x22, #0x40]
7101e94d38  bl 0x710377aee0
7101e94d3c  tbz w20,#0x0,0x7101e94d48
7101e94d40  ldr w8,[x19, #0x14]
7101e94d44  b 0x7101e94d4c
7101e94d48  mov w8,wzr
7101e94d4c  str w8,[x19, #0xc]
7101e94d50  ldr d8,[sp, #0x10]
7101e94d54  ldr x23,[sp, #0x18]
7101e94d58  ldp x29,x30,[sp, #0x40]
7101e94d5c  ldp x20,x19,[sp, #0x30]
7101e94d60  ldp x22,x21,[sp, #0x20]
7101e94d64  add sp,sp,#0x50
7101e94d68  ret
7101e94d6c  fmov s0,wzr
7101e94d70  ldr w8,[x19, #0x10]
7101e94d74  cbnz w8,0x7101e94d24
7101e94d78  b 0x7101e94d2c
