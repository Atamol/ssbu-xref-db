// addr:      7101fd5b10
// offset:    0x1fd5b10
// name:      FUN_7101fd5b10
// mangled:   
// size:      468

7101fd5b10  stp x26,x25,[sp, #-0x50]!
7101fd5b14  stp x24,x23,[sp, #0x10]
7101fd5b18  stp x22,x21,[sp, #0x20]
7101fd5b1c  stp x20,x19,[sp, #0x30]
7101fd5b20  stp x29,x30,[sp, #0x40]
7101fd5b24  add x29,sp,#0x40
7101fd5b28  ldur x8,[x0, #-0x8]
7101fd5b2c  cbz x8,0x7101fd5cc8
7101fd5b30  ldr x22,[x8, #0x88]
7101fd5b34  cbz x22,0x7101fd5cc8
7101fd5b38  ldr x9,[x0, #0x20]
7101fd5b3c  ldr x9,[x9]
7101fd5b40  ldr x8,[x0, #0x10]
7101fd5b44  mov w1,#0x1
7101fd5b48  mov x2,xzr
7101fd5b4c  add x9,x9,#0x10
7101fd5b50  sub x24,x8,x9
7101fd5b54  mov x19,x0
7101fd5b58  lsr x25,x24,#0x4
7101fd5b5c  bl 0x71038f45b0
7101fd5b60  mov x20,x0
7101fd5b64  mov w1,#0x2
7101fd5b68  mov x0,x19
7101fd5b6c  mov x2,xzr
7101fd5b70  bl 0x71038f45b0
7101fd5b74  ldr x8,[x19, #0x20]
7101fd5b78  ldr x8,[x8]
7101fd5b7c  ldr x9,[x19, #0x10]
7101fd5b80  add x8,x8,#0x30
7101fd5b84  adrp x26,0x7104862000
7101fd5b88  add x26,x26,#0x960
7101fd5b8c  cmp x8,x9
7101fd5b90  mov x21,x0
7101fd5b94  adrp x2,0x710430c000
7101fd5b98  add x2,x2,#0x66a
7101fd5b9c  mov x0,x19
7101fd5ba0  csel x1,x8,x26,cc
7101fd5ba4  bl 0x71038f4d40
7101fd5ba8  ldr x9,[x19, #0x10]
7101fd5bac  sub x8,x9,#0x10
7101fd5bb0  ldur w9,[x9, #-0x8]
7101fd5bb4  and w10,w9,#0xf
7101fd5bb8  cmp w10,#0x2
7101fd5bbc  b.eq 0x7101fd5bd8
7101fd5bc0  mov x9,xzr
7101fd5bc4  cmp w10,#0x7
7101fd5bc8  b.ne 0x7101fd5bdc
7101fd5bcc  ldr x9,[x8]
7101fd5bd0  add x9,x9,#0x28
7101fd5bd4  b 0x7101fd5bdc
7101fd5bd8  ldr x9,[x8]
7101fd5bdc  str x8,[x19, #0x10]
7101fd5be0  blr x9
7101fd5be4  orr w2,wzr,#0x3
7101fd5be8  mov x1,x19
7101fd5bec  mov x23,x0
7101fd5bf0  bl 0x7101fd5cf0
7101fd5bf4  cmp w25,#0x4
7101fd5bf8  b.lt 0x7101fd5c38
7101fd5bfc  ldr x8,[x19, #0x20]
7101fd5c00  ldr x8,[x8]
7101fd5c04  add x9,x8,#0x40
7101fd5c08  ldr x8,[x19, #0x10]
7101fd5c0c  cmp x9,x8
7101fd5c10  csel x9,x9,x26,cc
7101fd5c14  ldr w10,[x9, #0x8]
7101fd5c18  and w10,w10,#0xf
7101fd5c1c  cmp w10,#0x2
7101fd5c20  b.eq 0x7101fd5c84
7101fd5c24  cmp w10,#0x7
7101fd5c28  b.ne 0x7101fd5c8c
7101fd5c2c  ldr x9,[x9]
7101fd5c30  add x9,x9,#0x28
7101fd5c34  b 0x7101fd5c90
7101fd5c38  tbnz w25,#0x1f,0x7101fd5c44
7101fd5c3c  ldr x8,[x19, #0x10]
7101fd5c40  b 0x7101fd5c94
7101fd5c44  ldr x8,[x19, #0x20]
7101fd5c48  ldr x8,[x8]
7101fd5c4c  lsl x10,x24,#0x1c
7101fd5c50  ldr x9,[x19, #0x10]
7101fd5c54  eor x10,x10,#-0x100000000
7101fd5c58  add x8,x8,x10, ASR #0x1c
7101fd5c5c  add x8,x8,#0x10
7101fd5c60  cmp x9,x8
7101fd5c64  b.cs 0x7101fd5c9c
7101fd5c68  add x10,x9,#0x10
7101fd5c6c  str x10,[x19, #0x10]
7101fd5c70  str wzr,[x9, #0x8]
7101fd5c74  ldr x9,[x19, #0x10]
7101fd5c78  cmp x9,x8
7101fd5c7c  b.cc 0x7101fd5c68
7101fd5c80  b 0x7101fd5c9c
7101fd5c84  ldr x9,[x9]
7101fd5c88  b 0x7101fd5c90
7101fd5c8c  mov x9,xzr
7101fd5c90  ldr x22,[x9, #0xa0]
7101fd5c94  neg x9,x24, LSL #0x1c
7101fd5c98  add x8,x8,x9, ASR #0x1c
7101fd5c9c  str x8,[x19, #0x10]
7101fd5ca0  ldr x8,[x22]
7101fd5ca4  ldr x8,[x8, #0x78]
7101fd5ca8  mov x0,x22
7101fd5cac  mov w1,w20
7101fd5cb0  mov w2,w21
7101fd5cb4  mov x3,x23
7101fd5cb8  blr x8
7101fd5cbc  cbz x23,0x7101fd5cc8
7101fd5cc0  mov x0,x23
7101fd5cc4  bl 0x710392eb40
7101fd5cc8  ldp x29,x30,[sp, #0x40]
7101fd5ccc  mov w0,wzr
7101fd5cd0  ldp x20,x19,[sp, #0x30]
7101fd5cd4  ldp x22,x21,[sp, #0x20]
7101fd5cd8  ldp x24,x23,[sp, #0x10]
7101fd5cdc  ldp x26,x25,[sp], #0x50
7101fd5ce0  ret
