// addr:      71000f5960
// offset:    0xf5960
// name:      FUN_71000f5960
// mangled:   
// size:      616

71000f5960  sub sp,sp,#0x70
71000f5964  str x27,[sp, #0x10]
71000f5968  stp x26,x25,[sp, #0x20]
71000f596c  stp x24,x23,[sp, #0x30]
71000f5970  stp x22,x21,[sp, #0x40]
71000f5974  stp x20,x19,[sp, #0x50]
71000f5978  stp x29,x30,[sp, #0x60]
71000f597c  add x29,sp,#0x60
71000f5980  mov x19,x8
71000f5984  mov w8,#0x1
71000f5988  str w8,[x0, #0x230]
71000f598c  adrp x25,0x71052a5000
71000f5990  ldr x25,[x25, #0x80]
71000f5994  ldr x26,[x25]
71000f5998  ldrb w8,[x26, #0x162]
71000f599c  cmp w8,#0x0
71000f59a0  cset w8,eq
71000f59a4  add x9,x26,w8, UXTW  #0x2
71000f59a8  ldr w9,[x9, #0x180]
71000f59ac  cbz w9,0x71000f59c8
71000f59b0  mov w8,#0xc08
71000f59b4  movk w8,#0x1, LSL #16
71000f59b8  str w8,[sp]
71000f59bc  mov x8,sp
71000f59c0  orr x20,x8,#0x4
71000f59c4  b 0x71000f5b84
71000f59c8  add x8,x26,w8, UXTW  #0x3
71000f59cc  ldr x22,[x8, #0x168]
71000f59d0  strb wzr,[x0, #0x264]
71000f59d4  ldr x23,[x26, #0x8]
71000f59d8  mov x21,x1
71000f59dc  mov x20,x0
71000f59e0  cbz x23,0x71000f5a40
71000f59e4  mov x0,x23
71000f59e8  bl 0x71000ee2c0
71000f59ec  cbz w0,0x71000f5a40
71000f59f0  mov w24,wzr
71000f59f4  mov w27,#0x1
71000f59f8  mov x0,x23
71000f59fc  mov w1,w24
71000f5a00  bl 0x71000ee290
71000f5a04  cbz w0,0x71000f5a2c
71000f5a08  mov x0,x23
71000f5a0c  mov w1,w24
71000f5a10  bl 0x71000ee290
71000f5a14  ldrb w8,[x26, #0x162]
71000f5a18  add x8,x26,x8, LSL #0x2
71000f5a1c  ldr w8,[x8, #0x180]
71000f5a20  cmp w0,w8
71000f5a24  b.eq 0x71000f5a2c
71000f5a28  strb w27,[x20, #0x264]
71000f5a2c  mov x0,x23
71000f5a30  add w24,w24,#0x1
71000f5a34  bl 0x71000ee2c0
71000f5a38  cmp w24,w0
71000f5a3c  b.cc 0x71000f59f8
71000f5a40  adrp x8,0x71052a4000
71000f5a44  ldr x8,[x8, #0xbd8]
71000f5a48  mov x9,#-0x1
71000f5a4c  str x9,[x8, #0x300]
71000f5a50  str x9,[x8, #0x308]
71000f5a54  mov w9,#0xffffffff
71000f5a58  str w9,[x8, #0x14]
71000f5a5c  str w9,[x8, #0x310]
71000f5a60  mov x8,sp
71000f5a64  mov x0,x22
71000f5a68  mov x1,x21
71000f5a6c  bl 0x71000e4820
71000f5a70  ldr w8,[x20, #0xb8]
71000f5a74  add x21,x20,#0xa8
71000f5a78  cbz w8,0x71000f5abc
71000f5a7c  ldr x8,[x20, #0xb0]
71000f5a80  cmp x8,x21
71000f5a84  b.eq 0x71000f5ab4
71000f5a88  add x22,x20,#0xc0
71000f5a8c  ldr x23,[x8, #0x8]
71000f5a90  stp xzr,xzr,[x8]
71000f5a94  ldrsw x9,[x20, #0xd4]
71000f5a98  add x2,x9,x8
71000f5a9c  mov x0,x22
71000f5aa0  mov x1,x22
71000f5aa4  bl 0x71000b70c0
71000f5aa8  cmp x23,x21
71000f5aac  mov x8,x23
71000f5ab0  b.ne 0x71000f5a8c
71000f5ab4  mov x0,x21
71000f5ab8  bl 0x71000b7080
71000f5abc  adrp x8,0x71052a4000
71000f5ac0  ldr x8,[x8, #0xdf0]
71000f5ac4  ldr x0,[x8]
71000f5ac8  bl 0x7100193a50
71000f5acc  ldr x26,[x0, #0x8]
71000f5ad0  cmp x26,x0
71000f5ad4  b.eq 0x71000f5b44
71000f5ad8  ldr x8,[x25]
71000f5adc  ldr x23,[x8, #0xb8]
71000f5ae0  mov x22,x0
71000f5ae4  add x24,x20,#0xc0
71000f5ae8  ldr x1,[x26, #0x10]
71000f5aec  mov x0,x23
71000f5af0  bl 0x7100150680
71000f5af4  tbz w0,#0x0,0x71000f5b38
71000f5af8  ldr w8,[x20, #0xd0]
71000f5afc  cbz w8,0x71000f5b38
71000f5b00  mov x0,x24
71000f5b04  bl 0x71000b71c0
71000f5b08  cbz x0,0x71000f5b18
71000f5b0c  ldrsw x8,[x20, #0xd4]
71000f5b10  sub x25,x0,x8
71000f5b14  b 0x71000f5b1c
71000f5b18  mov x25,xzr
71000f5b1c  mov x0,x21
71000f5b20  mov x1,x21
71000f5b24  mov x2,x25
71000f5b28  str xzr,[x25, #0x10]
71000f5b2c  bl 0x71000b7090
71000f5b30  ldr x8,[x26, #0x10]
71000f5b34  str x8,[x25, #0x10]
71000f5b38  ldr x26,[x26, #0x8]
71000f5b3c  cmp x26,x22
71000f5b40  b.ne 0x71000f5ae8
71000f5b44  str wzr,[x20, #0x98]
71000f5b48  strb wzr,[x20, #0x234]
71000f5b4c  adrp x9,0x71052a5000
71000f5b50  strb wzr,[x20, #0x240]
71000f5b54  mov w8,#0x5
71000f5b58  strb wzr,[x20, #0x250]
71000f5b5c  strh wzr,[x20, #0x260]
71000f5b60  ldr x9,[x9, #0x230]
71000f5b64  str w8,[x20, #0x230]
71000f5b68  adrp x8,0x7104400000
71000f5b6c  add x8,x8,#0x58f
71000f5b70  str x8,[x20, #0x40]
71000f5b74  mov x8,sp
71000f5b78  stp x9,xzr,[x20, #0x30]
71000f5b7c  orr x20,x8,#0x4
71000f5b80  str wzr,[sp]
71000f5b84  mov x0,x20
71000f5b88  bl 0x71039c0a80
71000f5b8c  add x1,sp,#0x18
71000f5b90  mov x0,x20
71000f5b94  str wzr,[sp, #0x18]
71000f5b98  bl 0x71039c0a90
71000f5b9c  mov x1,sp
71000f5ba0  mov x0,x19
71000f5ba4  bl 0x71000bce50
71000f5ba8  ldp x29,x30,[sp, #0x60]
71000f5bac  ldr x27,[sp, #0x10]
71000f5bb0  ldp x20,x19,[sp, #0x50]
71000f5bb4  ldp x22,x21,[sp, #0x40]
71000f5bb8  ldp x24,x23,[sp, #0x30]
71000f5bbc  ldp x26,x25,[sp, #0x20]
71000f5bc0  add sp,sp,#0x70
71000f5bc4  ret
