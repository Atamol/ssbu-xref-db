// addr:      71001e9b80
// offset:    0x1e9b80
// name:      FUN_71001e9b80
// mangled:   
// size:      380

71001e9b80  sub sp,sp,#0xd0
71001e9b84  stp x26,x25,[sp, #0x80]
71001e9b88  stp x24,x23,[sp, #0x90]
71001e9b8c  stp x22,x21,[sp, #0xa0]
71001e9b90  stp x20,x19,[sp, #0xb0]
71001e9b94  stp x29,x30,[sp, #0xc0]
71001e9b98  add x29,sp,#0xc0
71001e9b9c  adrp x8,0x71052a4000
71001e9ba0  ldr x8,[x8, #0xda8]
71001e9ba4  adrp x20,0x71052a4000
71001e9ba8  ldrb w8,[x8]
71001e9bac  ldr x20,[x20, #0xdb0]
71001e9bb0  add x19,x20,#0x18
71001e9bb4  cbz w8,0x71001e9bf0
71001e9bb8  adrp x8,0x71052a4000
71001e9bbc  ldr x8,[x8, #0xdb8]
71001e9bc0  ldr x0,[x8]
71001e9bc4  bl 0x7101717960
71001e9bc8  ldr w8,[x0]
71001e9bcc  cbz w8,0x71001e9bf0
71001e9bd0  ldr x10,[x20, #0xa0]
71001e9bd4  ldp x9,x10,[x10]
71001e9bd8  sub x10,x10,x9
71001e9bdc  asr x10,x10,#0x3
71001e9be0  cmp x10,x8
71001e9be4  b.ls 0x71001e9c08
71001e9be8  ldr x8,[x9, x8, LSL #0x3]
71001e9bec  add x19,x8,#0x10
71001e9bf0  ldr x8,[x19]
71001e9bf4  cbz x8,0x71001e9c20
71001e9bf8  ldr x8,[x8, #0x10]
71001e9bfc  cbz x8,0x71001e9c20
71001e9c00  ldr x22,[x8, #0xe8]
71001e9c04  b 0x71001e9c24
71001e9c08  adrp x0,0x71042c4000
71001e9c0c  add x0,x0,#0x35f
71001e9c10  mov w1,#0x47
71001e9c14  orr w2,wzr,#0xe0000003
71001e9c18  mov w3,wzr
71001e9c1c  bl 0x71001b1300
71001e9c20  mov x22,xzr
71001e9c24  adrp x8,0x71052a6000
71001e9c28  ldr x8,[x8, #0xfb0]
71001e9c2c  add x23,x8,#0x10
71001e9c30  adrp x8,0x71052a4000
71001e9c34  str x23,[sp, #0x8]
71001e9c38  ldr x8,[x8, #0xd80]
71001e9c3c  add x24,sp,#0x8
71001e9c40  add x19,x24,#0x8
71001e9c44  mov x0,x19
71001e9c48  add x25,x8,#0x10
71001e9c4c  add x8,x24,#0x10
71001e9c50  mov w26,#0x10
71001e9c54  str x25,[sp, #0x10]
71001e9c58  strb wzr,[sp, #0x18]
71001e9c5c  mov x20,#-0x1
71001e9c60  stp x8,x26,[sp, #0x28]
71001e9c64  ldr x1,[x22, #0x168]
71001e9c68  mov x2,x20
71001e9c6c  bl 0x71001b47e0
71001e9c70  ldrh w8,[x22, #0x178]
71001e9c74  strh w8,[sp, #0x38]
71001e9c78  add x8,x24,#0x40
71001e9c7c  str x25,[sp, #0x40]
71001e9c80  stp x8,x26,[sp, #0x58]
71001e9c84  strb wzr,[sp, #0x48]
71001e9c88  ldr x1,[x22, #0x198]
71001e9c8c  add x21,x24,#0x38
71001e9c90  mov x0,x21
71001e9c94  mov x2,x20
71001e9c98  bl 0x71001b47e0
71001e9c9c  ldp x8,x9,[x22, #0x1a8]
71001e9ca0  ldrb w10,[x22, #0x1b8]
71001e9ca4  mov x0,x21
71001e9ca8  strb w10,[sp, #0x78]
71001e9cac  lsr x20,x8,#0x20
71001e9cb0  stp x8,x9,[sp, #0x68]
71001e9cb4  str x23,[sp, #0x8]
71001e9cb8  str x25,[sp, #0x40]
71001e9cbc  bl 0x71001b4910
71001e9cc0  mov x0,x19
71001e9cc4  str x25,[sp, #0x10]
71001e9cc8  bl 0x71001b4910
71001e9ccc  adrp x8,0x71052a6000
71001e9cd0  ldr x8,[x8, #0xfd8]
71001e9cd4  ldr w8,[x8]
71001e9cd8  cmp w20,#0x2
71001e9cdc  ldp x29,x30,[sp, #0xc0]
71001e9ce0  ldp x20,x19,[sp, #0xb0]
71001e9ce4  csinc w0,w8,wzr,ne
71001e9ce8  ldp x22,x21,[sp, #0xa0]
71001e9cec  ldp x24,x23,[sp, #0x90]
71001e9cf0  ldp x26,x25,[sp, #0x80]
71001e9cf4  add sp,sp,#0xd0
71001e9cf8  ret
