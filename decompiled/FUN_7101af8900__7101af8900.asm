// addr:      7101af8900
// offset:    0x1af8900
// name:      FUN_7101af8900
// mangled:   
// size:      884

7101af8900  sub sp,sp,#0x50
7101af8904  str d8,[sp, #0x20]
7101af8908  str x21,[sp, #0x28]
7101af890c  stp x20,x19,[sp, #0x30]
7101af8910  stp x29,x30,[sp, #0x40]
7101af8914  add x29,sp,#0x40
7101af8918  and w8,w1,#0x7f000000
7101af891c  orr w9,wzr,#0xfe000000
7101af8920  add w8,w8,w9
7101af8924  lsr w8,w8,#0x18
7101af8928  sub w8,w8,#0x1
7101af892c  cmp w8,#0x5
7101af8930  b.hi 0x7101af8b88
7101af8934  adrp x9,0x71044f8000
7101af8938  add x9,x9,#0x438
7101af893c  ldrsw x8,[x9, x8, LSL #0x2]
7101af8940  add x8,x8,x9
7101af8944  br x8
7101af8948  ldr x19,[x0, #0x80]
7101af894c  ldr w8,[x19, #0xc4]
7101af8950  cmp w8,#0x2
7101af8954  b.eq 0x7101af8c5c
7101af8958  mov w8,#0x2
7101af895c  str w8,[x19, #0xc4]
7101af8960  ldr x8,[x19, #0xb8]
7101af8964  ldr x8,[x8]
7101af8968  add x0,x8,#0x8
7101af896c  adrp x1,0x7104349000
7101af8970  add x1,x1,#0xf4c
7101af8974  add x8,sp,#0x10
7101af8978  bl 0x7103776640
7101af897c  ldr x8,[x19, #0xb8]
7101af8980  ldr x8,[x8]
7101af8984  add x0,x8,#0x8
7101af8988  adrp x1,0x7104401000
7101af898c  add x1,x1,#0x66c
7101af8990  mov x8,sp
7101af8994  bl 0x7103776640
7101af8998  ldr x19,[sp, #0x18]
7101af899c  adrp x21,0x7104281000
7101af89a0  add x21,x21,#0x275
7101af89a4  b 0x7101af8bdc
7101af89a8  ldr x19,[x0, #0x80]
7101af89ac  ldr w8,[x19, #0xc4]
7101af89b0  cmp w8,#0x1
7101af89b4  b.eq 0x7101af8c5c
7101af89b8  mov w8,#0x1
7101af89bc  str w8,[x19, #0xc4]
7101af89c0  ldr x8,[x19, #0xb8]
7101af89c4  ldr x8,[x8]
7101af89c8  add x0,x8,#0x8
7101af89cc  adrp x1,0x7104349000
7101af89d0  add x1,x1,#0xf4c
7101af89d4  add x8,sp,#0x10
7101af89d8  bl 0x7103776640
7101af89dc  ldr x8,[x19, #0xb8]
7101af89e0  ldr x8,[x8]
7101af89e4  add x0,x8,#0x8
7101af89e8  adrp x1,0x7104401000
7101af89ec  add x1,x1,#0x66c
7101af89f0  mov x8,sp
7101af89f4  bl 0x7103776640
7101af89f8  ldr x19,[sp, #0x18]
7101af89fc  adrp x21,0x710437c000
7101af8a00  add x21,x21,#0xc7b
7101af8a04  b 0x7101af8bdc
7101af8a08  ldr x19,[x0, #0x80]
7101af8a0c  ldr w8,[x19, #0xc4]
7101af8a10  cmp w8,#0x3
7101af8a14  b.eq 0x7101af8c5c
7101af8a18  orr w8,wzr,#0x3
7101af8a1c  str w8,[x19, #0xc4]
7101af8a20  ldr x8,[x19, #0xb8]
7101af8a24  ldr x8,[x8]
7101af8a28  add x0,x8,#0x8
7101af8a2c  adrp x1,0x7104349000
7101af8a30  add x1,x1,#0xf4c
7101af8a34  add x8,sp,#0x10
7101af8a38  bl 0x7103776640
7101af8a3c  ldr x8,[x19, #0xb8]
7101af8a40  ldr x8,[x8]
7101af8a44  add x0,x8,#0x8
7101af8a48  adrp x1,0x7104401000
7101af8a4c  add x1,x1,#0x66c
7101af8a50  mov x8,sp
7101af8a54  bl 0x7103776640
7101af8a58  ldr x19,[sp, #0x18]
7101af8a5c  adrp x21,0x71042f8000
7101af8a60  add x21,x21,#0xb2f
7101af8a64  b 0x7101af8bdc
7101af8a68  ldr x19,[x0, #0x80]
7101af8a6c  ldr w8,[x19, #0xc4]
7101af8a70  cmp w8,#0x4
7101af8a74  b.eq 0x7101af8c5c
7101af8a78  mov w8,#0x4
7101af8a7c  str w8,[x19, #0xc4]
7101af8a80  ldr x8,[x19, #0xb8]
7101af8a84  ldr x8,[x8]
7101af8a88  add x0,x8,#0x8
7101af8a8c  adrp x1,0x7104349000
7101af8a90  add x1,x1,#0xf4c
7101af8a94  add x8,sp,#0x10
7101af8a98  bl 0x7103776640
7101af8a9c  ldr x8,[x19, #0xb8]
7101af8aa0  ldr x8,[x8]
7101af8aa4  add x0,x8,#0x8
7101af8aa8  adrp x1,0x7104401000
7101af8aac  add x1,x1,#0x66c
7101af8ab0  mov x8,sp
7101af8ab4  bl 0x7103776640
7101af8ab8  ldr x19,[sp, #0x18]
7101af8abc  adrp x21,0x71043be000
7101af8ac0  add x21,x21,#0xda6
7101af8ac4  b 0x7101af8bdc
7101af8ac8  ldr x19,[x0, #0x80]
7101af8acc  ldr w8,[x19, #0xc4]
7101af8ad0  cmp w8,#0x5
7101af8ad4  b.eq 0x7101af8c5c
7101af8ad8  mov w8,#0x5
7101af8adc  str w8,[x19, #0xc4]
7101af8ae0  ldr x8,[x19, #0xb8]
7101af8ae4  ldr x8,[x8]
7101af8ae8  add x0,x8,#0x8
7101af8aec  adrp x1,0x7104349000
7101af8af0  add x1,x1,#0xf4c
7101af8af4  add x8,sp,#0x10
7101af8af8  bl 0x7103776640
7101af8afc  ldr x8,[x19, #0xb8]
7101af8b00  ldr x8,[x8]
7101af8b04  add x0,x8,#0x8
7101af8b08  adrp x1,0x7104401000
7101af8b0c  add x1,x1,#0x66c
7101af8b10  mov x8,sp
7101af8b14  bl 0x7103776640
7101af8b18  ldr x19,[sp, #0x18]
7101af8b1c  adrp x21,0x71043f1000
7101af8b20  add x21,x21,#0xa7
7101af8b24  b 0x7101af8bdc
7101af8b28  ldr x19,[x0, #0x80]
7101af8b2c  ldr w8,[x19, #0xc4]
7101af8b30  cmp w8,#0x6
7101af8b34  b.eq 0x7101af8c5c
7101af8b38  orr w8,wzr,#0x6
7101af8b3c  str w8,[x19, #0xc4]
7101af8b40  ldr x8,[x19, #0xb8]
7101af8b44  ldr x8,[x8]
7101af8b48  add x0,x8,#0x8
7101af8b4c  adrp x1,0x7104349000
7101af8b50  add x1,x1,#0xf4c
7101af8b54  add x8,sp,#0x10
7101af8b58  bl 0x7103776640
7101af8b5c  ldr x8,[x19, #0xb8]
7101af8b60  ldr x8,[x8]
7101af8b64  add x0,x8,#0x8
7101af8b68  adrp x1,0x7104401000
7101af8b6c  add x1,x1,#0x66c
7101af8b70  mov x8,sp
7101af8b74  bl 0x7103776640
7101af8b78  ldr x19,[sp, #0x18]
7101af8b7c  adrp x21,0x71042b4000
7101af8b80  add x21,x21,#0xb7c
7101af8b84  b 0x7101af8bdc
7101af8b88  ldr x19,[x0, #0x80]
7101af8b8c  ldr w8,[x19, #0xc4]
7101af8b90  cbz w8,0x7101af8c5c
7101af8b94  ldr x8,[x19, #0xb8]
7101af8b98  str wzr,[x19, #0xc4]
7101af8b9c  ldr x8,[x8]
7101af8ba0  add x0,x8,#0x8
7101af8ba4  adrp x1,0x7104349000
7101af8ba8  add x1,x1,#0xf4c
7101af8bac  add x8,sp,#0x10
7101af8bb0  bl 0x7103776640
7101af8bb4  ldr x8,[x19, #0xb8]
7101af8bb8  ldr x8,[x8]
7101af8bbc  add x0,x8,#0x8
7101af8bc0  adrp x1,0x7104401000
7101af8bc4  add x1,x1,#0x66c
7101af8bc8  mov x8,sp
7101af8bcc  bl 0x7103776640
7101af8bd0  ldr x19,[sp, #0x18]
7101af8bd4  adrp x21,0x7104443000
7101af8bd8  add x21,x21,#0xe9b
7101af8bdc  fmov s8,0x3f800000
7101af8be0  mov v0.16B,v8.16B
7101af8be4  mov x0,x19
7101af8be8  mov x1,x21
7101af8bec  bl 0x7103778300
7101af8bf0  ldr x20,[sp, #0x8]
7101af8bf4  mov v0.16B,v8.16B
7101af8bf8  mov x1,x21
7101af8bfc  mov x0,x20
7101af8c00  bl 0x7103778300
7101af8c04  adrp x21,0x710523d000
7101af8c08  add x21,x21,#0x988
7101af8c0c  stp x21,xzr,[sp]
7101af8c10  cbz x20,0x7101af8c34
7101af8c14  ldr x0,[x20, #0x18]
7101af8c18  adrp x8,0x710523d000
7101af8c1c  add x8,x8,#0x9a8
7101af8c20  stp x8,xzr,[x20, #0x10]
7101af8c24  cbz x0,0x7101af8c2c
7101af8c28  bl 0x710392eb40
7101af8c2c  mov x0,x20
7101af8c30  bl 0x710392eb40
7101af8c34  stp x21,xzr,[sp, #0x10]
7101af8c38  cbz x19,0x7101af8c5c
7101af8c3c  ldr x0,[x19, #0x18]
7101af8c40  adrp x8,0x710523d000
7101af8c44  add x8,x8,#0x9a8
7101af8c48  stp x8,xzr,[x19, #0x10]
7101af8c4c  cbz x0,0x7101af8c54
7101af8c50  bl 0x710392eb40
7101af8c54  mov x0,x19
7101af8c58  bl 0x710392eb40
7101af8c5c  ldr d8,[sp, #0x20]
7101af8c60  ldp x29,x30,[sp, #0x40]
7101af8c64  ldp x20,x19,[sp, #0x30]
7101af8c68  ldr x21,[sp, #0x28]
7101af8c6c  add sp,sp,#0x50
7101af8c70  ret
