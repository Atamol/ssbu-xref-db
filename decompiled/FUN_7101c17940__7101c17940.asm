// addr:      7101c17940
// offset:    0x1c17940
// name:      FUN_7101c17940
// mangled:   
// size:      832

7101c17940  stp x28,x27,[sp, #-0x60]!
7101c17944  stp x26,x25,[sp, #0x10]
7101c17948  stp x24,x23,[sp, #0x20]
7101c1794c  stp x22,x21,[sp, #0x30]
7101c17950  stp x20,x19,[sp, #0x40]
7101c17954  stp x29,x30,[sp, #0x50]
7101c17958  add x29,sp,#0x50
7101c1795c  ldrb w8,[x0, #0x88]
7101c17960  cbz w8,0x7101c17c5c
7101c17964  ldr x20,[x0, #0x40]
7101c17968  ldr x8,[x20]
7101c1796c  ldr x21,[x8]
7101c17970  str wzr,[x8, #0x10]
7101c17974  ldr x8,[x21, #0x10]
7101c17978  mov w24,#0x48
7101c1797c  str x21,[x8]
7101c17980  str w24,[x8, #0x8]
7101c17984  mov x19,x0
7101c17988  ldp x9,x8,[x21, #0x10]
7101c1798c  add x10,x9,#0x10
7101c17990  str x10,[x21, #0x10]
7101c17994  ldr x10,[x8, #0xc8]
7101c17998  str x9,[x21, #0x10]
7101c1799c  cmp x10,x21
7101c179a0  b.eq 0x7101c179c4
7101c179a4  adrp x1,0x710436c000
7101c179a8  add x1,x1,#0x309
7101c179ac  mov x0,x21
7101c179b0  bl 0x71038f4b20
7101c179b4  orr w1,wzr,#0xfffffffe
7101c179b8  mov x0,x21
7101c179bc  bl 0x71038f4fc0
7101c179c0  b 0x7101c17a3c
7101c179c4  ldr x8,[x8, #0x40]
7101c179c8  ldr w9,[x8, #0xc]
7101c179cc  cmp w9,#0x2
7101c179d0  b.cc 0x7101c179e0
7101c179d4  ldr x8,[x8, #0x10]
7101c179d8  add x1,x8,#0x10
7101c179dc  b 0x7101c17a2c
7101c179e0  ldr x9,[x8, #0x18]
7101c179e4  ldrb w8,[x8, #0xb]
7101c179e8  mov w10,#0xffffffff
7101c179ec  lsl x8,x10,x8
7101c179f0  mvn w8,w8
7101c179f4  and x8,x8,#0x2
7101c179f8  add x1,x9,x8, LSL #0x5
7101c179fc  adrp x8,0x7104862000
7101c17a00  add x8,x8,#0x960
7101c17a04  ldr w9,[x1, #0x18]
7101c17a08  cmp w9,#0x13
7101c17a0c  b.ne 0x7101c17a1c
7101c17a10  ldr x9,[x1, #0x10]
7101c17a14  cmp x9,#0x2
7101c17a18  b.eq 0x7101c17a2c
7101c17a1c  ldrsw x9,[x1, #0x1c]
7101c17a20  add x1,x1,x9, LSL #0x5
7101c17a24  cbnz w9,0x7101c17a04
7101c17a28  mov x1,x8
7101c17a2c  adrp x2,0x710436c000
7101c17a30  add x2,x2,#0x309
7101c17a34  mov x0,x21
7101c17a38  bl 0x71038f4d40
7101c17a3c  ldr x9,[x21, #0x10]
7101c17a40  sub x8,x9,#0x10
7101c17a44  adrp x25,0x7104862000
7101c17a48  add x25,x25,#0x960
7101c17a4c  cmp x8,x25
7101c17a50  b.eq 0x7101c17a74
7101c17a54  ldur w9,[x9, #-0x8]
7101c17a58  and w9,w9,#0xf
7101c17a5c  cmp w9,#0x6
7101c17a60  b.ne 0x7101c17a74
7101c17a64  mov w1,#0x1
7101c17a68  mov x0,x20
7101c17a6c  bl 0x7103377130
7101c17a70  b 0x7101c17a7c
7101c17a74  mov w0,wzr
7101c17a78  str x8,[x21, #0x10]
7101c17a7c  mov x20,x19
7101c17a80  ldr x8,[x20, #0x50]!
7101c17a84  ldr x9,[x20, #0x8]
7101c17a88  cmp x9,x8
7101c17a8c  strb w0,[x20, #0x28]
7101c17a90  b.eq 0x7101c17c5c
7101c17a94  mov x26,xzr
7101c17a98  adrp x28,0x710532f000
7101c17a9c  adrp x21,0x710433a000
7101c17aa0  add x21,x21,#0x120
7101c17aa4  cbz x26,0x7101c17c48
7101c17aa8  ldr x22,[x19, #0x40]
7101c17aac  ldr x8,[x22]
7101c17ab0  ldr x23,[x8]
7101c17ab4  str wzr,[x8, #0x10]
7101c17ab8  ldr x8,[x23, #0x10]
7101c17abc  str x23,[x8]
7101c17ac0  str w24,[x8, #0x8]
7101c17ac4  ldp x9,x8,[x23, #0x10]
7101c17ac8  add x10,x9,#0x10
7101c17acc  str x10,[x23, #0x10]
7101c17ad0  ldr x10,[x8, #0xc8]
7101c17ad4  str x9,[x23, #0x10]
7101c17ad8  cmp x10,x23
7101c17adc  b.eq 0x7101c17afc
7101c17ae0  mov x0,x23
7101c17ae4  mov x1,x21
7101c17ae8  bl 0x71038f4b20
7101c17aec  orr w1,wzr,#0xfffffffe
7101c17af0  mov x0,x23
7101c17af4  bl 0x71038f4fc0
7101c17af8  b 0x7101c17b68
7101c17afc  ldr x8,[x8, #0x40]
7101c17b00  ldr w9,[x8, #0xc]
7101c17b04  cmp w9,#0x2
7101c17b08  b.cc 0x7101c17b18
7101c17b0c  ldr x8,[x8, #0x10]
7101c17b10  add x1,x8,#0x10
7101c17b14  b 0x7101c17b5c
7101c17b18  ldr x9,[x8, #0x18]
7101c17b1c  ldrb w8,[x8, #0xb]
7101c17b20  mov w10,#0xffffffff
7101c17b24  lsl x8,x10,x8
7101c17b28  mvn w8,w8
7101c17b2c  and x8,x8,#0x2
7101c17b30  add x1,x9,x8, LSL #0x5
7101c17b34  ldr w8,[x1, #0x18]
7101c17b38  cmp w8,#0x13
7101c17b3c  b.ne 0x7101c17b4c
7101c17b40  ldr x8,[x1, #0x10]
7101c17b44  cmp x8,#0x2
7101c17b48  b.eq 0x7101c17b5c
7101c17b4c  ldrsw x8,[x1, #0x1c]
7101c17b50  add x1,x1,x8, LSL #0x5
7101c17b54  cbnz w8,0x7101c17b34
7101c17b58  mov x1,x25
7101c17b5c  mov x0,x23
7101c17b60  mov x2,x21
7101c17b64  bl 0x71038f4d40
7101c17b68  ldr x9,[x23, #0x10]
7101c17b6c  sub x8,x9,#0x10
7101c17b70  cmp x8,x25
7101c17b74  b.eq 0x7101c17bd4
7101c17b78  ldur w9,[x9, #-0x8]
7101c17b7c  and w9,w9,#0xf
7101c17b80  cmp w9,#0x6
7101c17b84  b.ne 0x7101c17bd4
7101c17b88  ldr x8,[x22]
7101c17b8c  ldr x8,[x8]
7101c17b90  ldr x10,[x8, #0x10]
7101c17b94  sxtw x9,w26
7101c17b98  str x9,[x10]
7101c17b9c  mov w9,#0x13
7101c17ba0  str w9,[x10, #0x8]
7101c17ba4  ldr x9,[x8, #0x10]
7101c17ba8  add x9,x9,#0x10
7101c17bac  str x9,[x8, #0x10]
7101c17bb0  ldr x8,[x22]
7101c17bb4  ldr w9,[x8, #0x10]
7101c17bb8  add w9,w9,#0x1
7101c17bbc  mov w1,#0x1
7101c17bc0  mov x0,x22
7101c17bc4  str w9,[x8, #0x10]
7101c17bc8  bl 0x7103377130
7101c17bcc  mov w22,w0
7101c17bd0  b 0x7101c17bdc
7101c17bd4  mov w22,wzr
7101c17bd8  str x8,[x23, #0x10]
7101c17bdc  ldp x8,x9,[x19, #0x50]
7101c17be0  sub x9,x9,x8
7101c17be4  asr x9,x9,#0x3
7101c17be8  cmp x9,x26
7101c17bec  b.ls 0x7101c17c78
7101c17bf0  ldr x23,[x8, x26, LSL #0x3]
7101c17bf4  ldr x8,[x28, #0x730]
7101c17bf8  ldr x27,[x8, #0x8]
7101c17bfc  ldr x0,[x27, #0x268]
7101c17c00  mov x1,x23
7101c17c04  bl 0x710327f590
7101c17c08  tbnz w0,#0x1f,0x7101c17c44
7101c17c0c  ldr x0,[x27, #0x268]
7101c17c10  mov x1,x23
7101c17c14  bl 0x710327f590
7101c17c18  lsr w9,w0,#0x5
7101c17c1c  mov w8,#0x1
7101c17c20  add x9,x19,w9, UXTW  #0x2
7101c17c24  lsl w8,w8,w0
7101c17c28  cbz w22,0x7101c17c38
7101c17c2c  ldr w10,[x9, #0x7c]
7101c17c30  orr w8,w10,w8
7101c17c34  b 0x7101c17c40
7101c17c38  ldr w10,[x9, #0x7c]
7101c17c3c  bic w8,w10,w8
7101c17c40  str w8,[x9, #0x7c]
7101c17c44  ldp x8,x9,[x19, #0x50]
7101c17c48  sub x10,x9,x8
7101c17c4c  add x26,x26,#0x1
7101c17c50  asr x10,x10,#0x3
7101c17c54  cmp x10,x26
7101c17c58  b.hi 0x7101c17aa4
7101c17c5c  ldp x29,x30,[sp, #0x50]
7101c17c60  ldp x20,x19,[sp, #0x40]
7101c17c64  ldp x22,x21,[sp, #0x30]
7101c17c68  ldp x24,x23,[sp, #0x20]
7101c17c6c  ldp x26,x25,[sp, #0x10]
7101c17c70  ldp x28,x27,[sp], #0x60
7101c17c74  ret
7101c17c78  mov x0,x20
7101c17c7c  bl 0x71039c1330
