// addr:      71001a1a40
// offset:    0x1a1a40
// name:      FUN_71001a1a40
// mangled:   
// size:      828

71001a1a40  sub sp,sp,#0xf0
71001a1a44  str x27,[sp, #0x90]
71001a1a48  stp x26,x25,[sp, #0xa0]
71001a1a4c  stp x24,x23,[sp, #0xb0]
71001a1a50  stp x22,x21,[sp, #0xc0]
71001a1a54  stp x20,x19,[sp, #0xd0]
71001a1a58  stp x29,x30,[sp, #0xe0]
71001a1a5c  add x29,sp,#0xe0
71001a1a60  orr w8,wzr,#0x7
71001a1a64  str w8,[x0, #0x110]
71001a1a68  adrp x23,0x71052a4000
71001a1a6c  ldr x23,[x23, #0xdf0]
71001a1a70  mov x19,x0
71001a1a74  ldr x0,[x23]
71001a1a78  add x8,sp,#0x10
71001a1a7c  bl 0x7100192e90
71001a1a80  mov w8,#0x6c50
71001a1a84  str w8,[sp]
71001a1a88  mov x8,sp
71001a1a8c  orr x20,x8,#0x4
71001a1a90  mov x0,x20
71001a1a94  bl 0x71039c0a80
71001a1a98  sub x1,x29,#0x48
71001a1a9c  mov x0,x20
71001a1aa0  stur wzr,[x29, #-0x48]
71001a1aa4  bl 0x71039c0a90
71001a1aa8  ldr w8,[sp, #0x10]
71001a1aac  ldr w9,[sp]
71001a1ab0  cmp w8,w9
71001a1ab4  b.eq 0x71001a1b3c
71001a1ab8  ldr x0,[x23]
71001a1abc  bl 0x7100193560
71001a1ac0  adrp x24,0x71052a4000
71001a1ac4  ldr x24,[x24, #0xdc8]
71001a1ac8  mov w20,w0
71001a1acc  ldr x0,[x24]
71001a1ad0  bl 0x7100161fa0
71001a1ad4  ldr x21,[x0, #0x98]
71001a1ad8  cbz x21,0x71001a1b3c
71001a1adc  ldr x0,[x24]
71001a1ae0  bl 0x7100161fb0
71001a1ae4  mov x22,x0
71001a1ae8  add x0,sp,#0x10
71001a1aec  bl 0x710015fd60
71001a1af0  ldr x8,[x22]
71001a1af4  ldr x9,[x8, #0x28]
71001a1af8  mov x8,sp
71001a1afc  add x2,sp,#0x10
71001a1b00  mov x0,x22
71001a1b04  mov x1,x21
71001a1b08  blr x9
71001a1b0c  ldr w8,[sp]
71001a1b10  cbz w8,0x71001a1b78
71001a1b14  add x0,sp,#0x10
71001a1b18  bl 0x710015ff20
71001a1b1c  orr x8,xzr,#0x1000000000000
71001a1b20  str x8,[sp, #0x10]
71001a1b24  str wzr,[sp, #0x18]
71001a1b28  ldr x8,[x21]
71001a1b2c  ldr x8,[x8, #0x18]
71001a1b30  add x1,sp,#0x10
71001a1b34  mov x0,x21
71001a1b38  blr x8
71001a1b3c  adrp x8,0x71052a5000
71001a1b40  ldr x8,[x8, #0x758]
71001a1b44  mov x0,xzr
71001a1b48  stp x8,xzr,[x19, #0x30]
71001a1b4c  adrp x8,0x7104339000
71001a1b50  add x8,x8,#0x4f5
71001a1b54  str x8,[x19, #0x40]
71001a1b58  ldp x29,x30,[sp, #0xe0]
71001a1b5c  ldr x27,[sp, #0x90]
71001a1b60  ldp x20,x19,[sp, #0xd0]
71001a1b64  ldp x22,x21,[sp, #0xc0]
71001a1b68  ldp x24,x23,[sp, #0xb0]
71001a1b6c  ldp x26,x25,[sp, #0xa0]
71001a1b70  add sp,sp,#0xf0
71001a1b74  ret
71001a1b78  add x1,sp,#0x10
71001a1b7c  mov x0,x22
71001a1b80  add x25,sp,#0x10
71001a1b84  bl 0x7100160b20
71001a1b88  add x1,x21,#0x10
71001a1b8c  add x0,x22,#0x108
71001a1b90  bl 0x71000beb40
71001a1b94  add x0,sp,#0x10
71001a1b98  bl 0x710015ff20
71001a1b9c  ldr x0,[x24]
71001a1ba0  bl 0x7100161fa0
71001a1ba4  ldr x8,[x0]
71001a1ba8  ldr x8,[x8, #0x48]
71001a1bac  ldrb w1,[x19, #0x86]
71001a1bb0  blr x8
71001a1bb4  cbz x0,0x71001a1bec
71001a1bb8  mov x21,x0
71001a1bbc  ldr x0,[x23]
71001a1bc0  ldrb w1,[x19, #0x86]
71001a1bc4  bl 0x7100190a90
71001a1bc8  tbz w0,#0x0,0x71001a1be4
71001a1bcc  ldr x8,[x19]
71001a1bd0  ldr x8,[x8, #0x70]
71001a1bd4  ldrb w1,[x19, #0x86]
71001a1bd8  mov x0,x19
71001a1bdc  blr x8
71001a1be0  b 0x71001a1bec
71001a1be4  orr w8,wzr,#0x6
71001a1be8  str w8,[x21, #0x48]
71001a1bec  mov x21,xzr
71001a1bf0  mov w22,wzr
71001a1bf4  add x26,x19,#0x91
71001a1bf8  and w20,w20,#0xff
71001a1bfc  mov w27,#0x1
71001a1c00  stp xzr,xzr,[sp, #0x20]
71001a1c04  stp xzr,xzr,[sp, #0x10]
71001a1c08  cmp w20,w21, UXTB 
71001a1c0c  b.eq 0x71001a1c6c
71001a1c10  ldr x0,[x23]
71001a1c14  mov w1,w21
71001a1c18  bl 0x7100190a90
71001a1c1c  tbz w0,#0x0,0x71001a1c6c
71001a1c20  ldr x0,[x23]
71001a1c24  bl 0x7100193580
71001a1c28  mov w1,w21
71001a1c2c  bl 0x710019a070
71001a1c30  strb w27,[x26, x21, LSL ]
71001a1c34  tbnz w0,#0x0,0x71001a1c54
71001a1c38  ldr x0,[x24]
71001a1c3c  bl 0x7100161fa0
71001a1c40  ldr x8,[x0]
71001a1c44  ldr x8,[x8, #0x48]
71001a1c48  mov w1,w21
71001a1c4c  blr x8
71001a1c50  cbz x0,0x71001a1c64
71001a1c54  add x21,x21,#0x1
71001a1c58  cmp x21,#0x20
71001a1c5c  b.ne 0x71001a1c08
71001a1c60  b 0x71001a1c7c
71001a1c64  strb w21,[x25, w22, SXTW ]
71001a1c68  add w22,w22,#0x1
71001a1c6c  strb wzr,[x26, x21, LSL ]
71001a1c70  add x21,x21,#0x1
71001a1c74  cmp x21,#0x20
71001a1c78  b.ne 0x71001a1c08
71001a1c7c  cmp w22,#0x1
71001a1c80  b.lt 0x71001a1d34
71001a1c84  mov w21,w22
71001a1c88  add x22,sp,#0x10
71001a1c8c  ldrb w20,[x22]
71001a1c90  ldr x0,[x23]
71001a1c94  mov w1,w20
71001a1c98  bl 0x7100190af0
71001a1c9c  ldr x0,[x24]
71001a1ca0  bl 0x7100161fa0
71001a1ca4  ldr x8,[x0]
71001a1ca8  ldr x8,[x8, #0x48]
71001a1cac  mov w1,w20
71001a1cb0  blr x8
71001a1cb4  cbz x0,0x71001a1d28
71001a1cb8  mov x20,x0
71001a1cbc  ldr x0,[x0, #0xa8]
71001a1cc0  mov x1,x20
71001a1cc4  ldr x8,[x0]
71001a1cc8  ldr x8,[x8, #0x30]
71001a1ccc  blr x8
71001a1cd0  ldr x0,[x24]
71001a1cd4  bl 0x7100161fb0
71001a1cd8  ldr x8,[x0]
71001a1cdc  ldr x8,[x8, #0x58]
71001a1ce0  mov x1,x20
71001a1ce4  blr x8
71001a1ce8  ldr x0,[x23]
71001a1cec  bl 0x7100190ca0
71001a1cf0  mov x1,x20
71001a1cf4  bl 0x7100189910
71001a1cf8  mov x0,x20
71001a1cfc  bl 0x710019b820
71001a1d00  mov x0,x20
71001a1d04  bl 0x710015e730
71001a1d08  ldr x0,[x24]
71001a1d0c  bl 0x7100161fa0
71001a1d10  ldr x8,[x0]
71001a1d14  ldr x8,[x8, #0x28]
71001a1d18  mov x1,x20
71001a1d1c  blr x8
71001a1d20  ldr x0,[x24]
71001a1d24  bl 0x7100162430
71001a1d28  add x22,x22,#0x1
71001a1d2c  subs x21,x21,#0x1
71001a1d30  b.ne 0x71001a1c8c
71001a1d34  bl 0x71000bb680
71001a1d38  adrp x8,0x71052a4000
71001a1d3c  ldr x8,[x8, #0xc70]
71001a1d40  ldr x8,[x8]
71001a1d44  ldr x10,[x0]
71001a1d48  mov w0,#0x5
71001a1d4c  ldr x8,[x8, #0x30]
71001a1d50  mov w9,#0x1
71001a1d54  strb w9,[x19, #0xb1]
71001a1d58  mov w9,#0x1f4
71001a1d5c  madd x8,x10,x9,x8
71001a1d60  adrp x9,0x71052a6000
71001a1d64  ldr x9,[x9, #0x758]
71001a1d68  str x8,[x19, #0x68]
71001a1d6c  adrp x8,0x71043ce000
71001a1d70  add x8,x8,#0x8d5
71001a1d74  stp x9,xzr,[x19, #0x30]
71001a1d78  b 0x71001a1b54
