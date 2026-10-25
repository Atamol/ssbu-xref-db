// addr:      71000f8aa0
// offset:    0xf8aa0
// name:      FUN_71000f8aa0
// mangled:   
// size:      672

71000f8aa0  sub sp,sp,#0x60
71000f8aa4  stp x24,x23,[sp, #0x20]
71000f8aa8  stp x22,x21,[sp, #0x30]
71000f8aac  stp x20,x19,[sp, #0x40]
71000f8ab0  stp x29,x30,[sp, #0x50]
71000f8ab4  add x29,sp,#0x50
71000f8ab8  adrp x21,0x71052a5000
71000f8abc  ldr x21,[x21, #0x80]
71000f8ac0  ldr x20,[x21]
71000f8ac4  mov x19,x0
71000f8ac8  mov x0,x20
71000f8acc  bl 0x7100146ba0
71000f8ad0  sub w8,w0,#0x5
71000f8ad4  cmp w8,#0x3
71000f8ad8  b.hi 0x71000f8b00
71000f8adc  adrp x9,0x7104496000
71000f8ae0  add x9,x9,#0x268
71000f8ae4  ldrsw x8,[x9, x8, LSL #0x2]
71000f8ae8  add x8,x8,x9
71000f8aec  br x8
71000f8af0  mov w8,#0x1
71000f8af4  orr w9,wzr,#0x3
71000f8af8  mov w10,#0xc406
71000f8afc  b 0x71000f8bb4
71000f8b00  adrp x8,0x71052a4000
71000f8b04  ldr x8,[x8, #0xdf0]
71000f8b08  ldr x0,[x8]
71000f8b0c  add x8,sp,#0x8
71000f8b10  bl 0x7100192e90
71000f8b14  ldr w8,[sp, #0x8]
71000f8b18  cbnz w8,0x71000f8b2c
71000f8b1c  ldr x0,[x21]
71000f8b20  bl 0x7100146ba0
71000f8b24  cmp w0,#0x4
71000f8b28  b.ne 0x71000f8c34
71000f8b2c  mov w8,#0x6c59
71000f8b30  str w8,[sp, #0x8]
71000f8b34  add x8,sp,#0x8
71000f8b38  orr x20,x8,#0x4
71000f8b3c  mov x0,x20
71000f8b40  bl 0x71039c0a80
71000f8b44  add x1,sp,#0x18
71000f8b48  mov x0,x20
71000f8b4c  str wzr,[sp, #0x18]
71000f8b50  bl 0x71039c0a90
71000f8b54  add x0,x19,#0x220
71000f8b58  add x1,sp,#0x8
71000f8b5c  bl 0x71000bcf30
71000f8b60  adrp x8,0x71052a5000
71000f8b64  ldr x8,[x8, #0x238]
71000f8b68  mov w9,#0x4
71000f8b6c  strb w9,[x19, #0x130]
71000f8b70  adrp x9,0x7104290000
71000f8b74  add x9,x9,#0xd05
71000f8b78  mov w0,#0x5
71000f8b7c  stp x8,xzr,[x19, #0x30]
71000f8b80  str x9,[x19, #0x40]
71000f8b84  b 0x71000f8c1c
71000f8b88  mov w8,#0x1
71000f8b8c  orr w9,wzr,#0x3
71000f8b90  mov w10,#0xa471
71000f8b94  b 0x71000f8bb4
71000f8b98  mov w8,#0x1
71000f8b9c  orr w9,wzr,#0x3
71000f8ba0  mov w10,#0xc420
71000f8ba4  b 0x71000f8bb4
71000f8ba8  mov w8,#0x1
71000f8bac  orr w9,wzr,#0x3
71000f8bb0  mov w10,#0xc421
71000f8bb4  strb w8,[x19, #0xfa]
71000f8bb8  add x8,sp,#0x8
71000f8bbc  orr x20,x8,#0x4
71000f8bc0  mov x0,x20
71000f8bc4  strb w9,[x19, #0x130]
71000f8bc8  str w10,[sp, #0x8]
71000f8bcc  bl 0x71039c0a80
71000f8bd0  add x1,sp,#0x18
71000f8bd4  mov x0,x20
71000f8bd8  str wzr,[sp, #0x18]
71000f8bdc  bl 0x71039c0a90
71000f8be0  add x0,x19,#0x220
71000f8be4  add x1,sp,#0x8
71000f8be8  bl 0x71000bcf30
71000f8bec  ldr x8,[x21]
71000f8bf0  ldr x0,[x8, #0x8]
71000f8bf4  ldr x8,[x0]
71000f8bf8  ldr x8,[x8, #0x28]
71000f8bfc  blr x8
71000f8c00  adrp x8,0x71052a5000
71000f8c04  ldr x8,[x8, #0x240]
71000f8c08  mov x0,xzr
71000f8c0c  stp x8,xzr,[x19, #0x30]
71000f8c10  adrp x8,0x71043ac000
71000f8c14  add x8,x8,#0x982
71000f8c18  str x8,[x19, #0x40]
71000f8c1c  ldp x29,x30,[sp, #0x50]
71000f8c20  ldp x20,x19,[sp, #0x40]
71000f8c24  ldp x22,x21,[sp, #0x30]
71000f8c28  ldp x24,x23,[sp, #0x20]
71000f8c2c  add sp,sp,#0x60
71000f8c30  ret
71000f8c34  ldrb w8,[x19, #0xfb]
71000f8c38  cbz w8,0x71000f8c58
71000f8c3c  add x1,x19,#0x100
71000f8c40  add x0,x19,#0x220
71000f8c44  bl 0x71000bcf30
71000f8c48  adrp x8,0x71052a5000
71000f8c4c  ldr x8,[x8, #0x238]
71000f8c50  orr w9,wzr,#0x6
71000f8c54  b 0x71000f8b6c
71000f8c58  ldrb w8,[x19, #0x2e8]
71000f8c5c  cbz w8,0x71000f8cdc
71000f8c60  mov x22,xzr
71000f8c64  add x21,x19,#0x60
71000f8c68  add x23,x19,#0x2e9
71000f8c6c  mov w24,#0x1
71000f8c70  add x9,x23,x22, LSL #0x2
71000f8c74  ldur w2,[x9, #-0x81]
71000f8c78  ldrb w9,[x20, #0x162]
71000f8c7c  add x10,x20,x9, LSL #0x2
71000f8c80  ldr w10,[x10, #0x180]
71000f8c84  cmp w2,w10
71000f8c88  b.eq 0x71000f8c94
71000f8c8c  ldrb w10,[x23, x22, LSL ]
71000f8c90  cbz w10,0x71000f8ca4
71000f8c94  add x22,x22,#0x1
71000f8c98  cmp x22,w8, UXTB 
71000f8c9c  b.cc 0x71000f8c70
71000f8ca0  b 0x71000f8cdc
71000f8ca4  cmp w9,#0x0
71000f8ca8  cset w8,eq
71000f8cac  mov x1,x21
71000f8cb0  strb w24,[x23, x22, LSL ]
71000f8cb4  add x8,x20,w8, UXTW  #0x3
71000f8cb8  ldr x0,[x8, #0x168]
71000f8cbc  add x8,sp,#0x8
71000f8cc0  bl 0x71000da870
71000f8cc4  ldr w8,[sp, #0x8]
71000f8cc8  cbz w8,0x71000f8d2c
71000f8ccc  ldrb w8,[x19, #0x2e8]
71000f8cd0  add x22,x22,#0x1
71000f8cd4  cmp x22,w8, UXTB 
71000f8cd8  b.cc 0x71000f8c70
71000f8cdc  mov w8,#0x5
71000f8ce0  str w8,[x19, #0x230]
71000f8ce4  adrp x8,0x71052a4000
71000f8ce8  ldr x8,[x8, #0xc70]
71000f8cec  ldr x20,[x8]
71000f8cf0  bl 0x71000bb680
71000f8cf4  mov x8,x0
71000f8cf8  adrp x10,0x71052a5000
71000f8cfc  ldr x9,[x20, #0x30]
71000f8d00  ldr x10,[x10, #0x280]
71000f8d04  ldr x8,[x8]
71000f8d08  mov w11,#0x4e20
71000f8d0c  madd x8,x8,x11,x9
71000f8d10  str x8,[x19, #0x1f8]
71000f8d14  adrp x8,0x710437b000
71000f8d18  add x8,x8,#0x999
71000f8d1c  mov x0,xzr
71000f8d20  str x8,[x19, #0x40]
71000f8d24  stp x10,xzr,[x19, #0x30]
71000f8d28  b 0x71000f8c1c
71000f8d2c  adrp x8,0x71052a5000
71000f8d30  ldr x8,[x8, #0x2b8]
71000f8d34  adrp x9,0x710435a000
71000f8d38  add x9,x9,#0x579
71000f8d3c  b 0x71000f8b78
