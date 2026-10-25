// addr:      7101ba9a40
// offset:    0x1ba9a40
// name:      FUN_7101ba9a40
// mangled:   
// size:      3252

7101ba9a40  sub sp,sp,#0x70
7101ba9a44  str x27,[sp, #0x10]
7101ba9a48  stp x26,x25,[sp, #0x20]
7101ba9a4c  stp x24,x23,[sp, #0x30]
7101ba9a50  stp x22,x21,[sp, #0x40]
7101ba9a54  stp x20,x19,[sp, #0x50]
7101ba9a58  stp x29,x30,[sp, #0x60]
7101ba9a5c  add x29,sp,#0x60
7101ba9a60  adrp x8,0x71050ab000
7101ba9a64  add x8,x8,#0x8d8
7101ba9a68  mov x19,x0
7101ba9a6c  stp x8,xzr,[x0]
7101ba9a70  orr x8,xzr,#0x1ffffffff
7101ba9a74  stp xzr,x8,[x0, #0x60]
7101ba9a78  mov w8,#0x1
7101ba9a7c  stp xzr,xzr,[x0, #0x10]
7101ba9a80  strb wzr,[x0, #0x58]
7101ba9a84  str x1,[x0, #0x78]
7101ba9a88  mov w1,#0x208
7101ba9a8c  strb w8,[x0, #0x70]
7101ba9a90  stp xzr,xzr,[x0, #0x48]
7101ba9a94  mov w0,#0x10
7101ba9a98  bl 0x710392e290
7101ba9a9c  mov x20,x0
7101ba9aa0  cbnz x0,0x7101ba9aec
7101ba9aa4  adrp x8,0x7105332000
7101ba9aa8  ldr x0,[x8, #0xf00]
7101ba9aac  cbz x0,0x7101ba9ae8
7101ba9ab0  mov w8,#0x208
7101ba9ab4  str wzr,[sp, #0x1c]
7101ba9ab8  add x1,sp,#0x1c
7101ba9abc  str x8,[sp]
7101ba9ac0  ldr x8,[x0]
7101ba9ac4  ldr x8,[x8, #0x30]
7101ba9ac8  mov x2,sp
7101ba9acc  blr x8
7101ba9ad0  tbz w0,#0x0,0x7101ba9ae8
7101ba9ad4  mov w1,#0x208
7101ba9ad8  mov w0,#0x10
7101ba9adc  bl 0x710392e290
7101ba9ae0  mov x20,x0
7101ba9ae4  cbnz x0,0x7101ba9aec
7101ba9ae8  mov x20,xzr
7101ba9aec  mov x21,x20
7101ba9af0  mov w0,#0x10
7101ba9af4  mov w1,#0x8
7101ba9af8  str x19,[x21], #0x8
7101ba9afc  bl 0x710392e290
7101ba9b00  mov x22,x0
7101ba9b04  cbnz x0,0x7101ba9b50
7101ba9b08  adrp x8,0x7105332000
7101ba9b0c  ldr x0,[x8, #0xf00]
7101ba9b10  cbz x0,0x7101ba9b4c
7101ba9b14  mov w8,#0x8
7101ba9b18  str wzr,[sp, #0x1c]
7101ba9b1c  add x1,sp,#0x1c
7101ba9b20  str x8,[sp]
7101ba9b24  ldr x8,[x0]
7101ba9b28  ldr x8,[x8, #0x30]
7101ba9b2c  mov x2,sp
7101ba9b30  blr x8
7101ba9b34  tbz w0,#0x0,0x7101ba9b4c
7101ba9b38  mov w0,#0x10
7101ba9b3c  mov w1,#0x8
7101ba9b40  bl 0x710392e290
7101ba9b44  mov x22,x0
7101ba9b48  cbnz x0,0x7101ba9b50
7101ba9b4c  mov x22,xzr
7101ba9b50  mov x0,x22
7101ba9b54  bl 0x7103773200
7101ba9b58  add x0,x20,#0x10
7101ba9b5c  mov x1,x21
7101ba9b60  str x22,[x20, #0x8]
7101ba9b64  bl 0x7101414b10
7101ba9b68  adrp x23,0x710523d000
7101ba9b6c  add x23,x23,#0x9a8
7101ba9b70  mov x24,x20
7101ba9b74  str x23,[x24, #0x20]!
7101ba9b78  mov w0,#0x10
7101ba9b7c  mov w1,#0x20
7101ba9b80  str xzr,[x24, #0x8]
7101ba9b84  stp xzr,xzr,[x24, #0x20]
7101ba9b88  stp xzr,xzr,[x24, #0x10]
7101ba9b8c  bl 0x710392e290
7101ba9b90  cbnz x0,0x7101ba9bd8
7101ba9b94  adrp x8,0x7105332000
7101ba9b98  ldr x0,[x8, #0xf00]
7101ba9b9c  cbz x0,0x7101ba9bd4
7101ba9ba0  mov w8,#0x20
7101ba9ba4  str wzr,[sp, #0x1c]
7101ba9ba8  add x1,sp,#0x1c
7101ba9bac  str x8,[sp]
7101ba9bb0  ldr x8,[x0]
7101ba9bb4  ldr x8,[x8, #0x30]
7101ba9bb8  mov x2,sp
7101ba9bbc  blr x8
7101ba9bc0  tbz w0,#0x0,0x7101ba9bd4
7101ba9bc4  mov w0,#0x10
7101ba9bc8  mov w1,#0x20
7101ba9bcc  bl 0x710392e290
7101ba9bd0  cbnz x0,0x7101ba9bd8
7101ba9bd4  mov x0,xzr
7101ba9bd8  mov x25,x20
7101ba9bdc  stp xzr,xzr,[x0, #0x10]
7101ba9be0  stp xzr,xzr,[x0]
7101ba9be4  mov w1,#0x20
7101ba9be8  str x23,[x25, #0x30]!
7101ba9bec  stur x0,[x25, #-0x8]
7101ba9bf0  mov w0,#0x10
7101ba9bf4  bl 0x710392e290
7101ba9bf8  cbnz x0,0x7101ba9c40
7101ba9bfc  adrp x8,0x7105332000
7101ba9c00  ldr x0,[x8, #0xf00]
7101ba9c04  cbz x0,0x7101ba9c3c
7101ba9c08  mov w8,#0x20
7101ba9c0c  str wzr,[sp, #0x1c]
7101ba9c10  add x1,sp,#0x1c
7101ba9c14  str x8,[sp]
7101ba9c18  ldr x8,[x0]
7101ba9c1c  ldr x8,[x8, #0x30]
7101ba9c20  mov x2,sp
7101ba9c24  blr x8
7101ba9c28  tbz w0,#0x0,0x7101ba9c3c
7101ba9c2c  mov w0,#0x10
7101ba9c30  mov w1,#0x20
7101ba9c34  bl 0x710392e290
7101ba9c38  cbnz x0,0x7101ba9c40
7101ba9c3c  mov x0,xzr
7101ba9c40  mov x26,x20
7101ba9c44  stp xzr,xzr,[x0, #0x10]
7101ba9c48  stp xzr,xzr,[x0]
7101ba9c4c  mov w1,#0x20
7101ba9c50  str x23,[x26, #0x40]!
7101ba9c54  stur x0,[x26, #-0x8]
7101ba9c58  mov w0,#0x10
7101ba9c5c  bl 0x710392e290
7101ba9c60  cbnz x0,0x7101ba9ca8
7101ba9c64  adrp x8,0x7105332000
7101ba9c68  ldr x0,[x8, #0xf00]
7101ba9c6c  cbz x0,0x7101ba9ca4
7101ba9c70  mov w8,#0x20
7101ba9c74  str wzr,[sp, #0x1c]
7101ba9c78  add x1,sp,#0x1c
7101ba9c7c  str x8,[sp]
7101ba9c80  ldr x8,[x0]
7101ba9c84  ldr x8,[x8, #0x30]
7101ba9c88  mov x2,sp
7101ba9c8c  blr x8
7101ba9c90  tbz w0,#0x0,0x7101ba9ca4
7101ba9c94  mov w0,#0x10
7101ba9c98  mov w1,#0x20
7101ba9c9c  bl 0x710392e290
7101ba9ca0  cbnz x0,0x7101ba9ca8
7101ba9ca4  mov x0,xzr
7101ba9ca8  add x22,x20,#0x50
7101ba9cac  stp xzr,xzr,[x0, #0x10]
7101ba9cb0  stp xzr,xzr,[x0]
7101ba9cb4  mov w2,#0x1b0
7101ba9cb8  mov w1,wzr
7101ba9cbc  str x0,[x20, #0x48]
7101ba9cc0  mov x0,x22
7101ba9cc4  bl 0x71039c02a0
7101ba9cc8  mov x0,x22
7101ba9ccc  bl 0x7101b42450
7101ba9cd0  mov w8,#0x1
7101ba9cd4  strh w8,[x20, #0x200]
7101ba9cd8  strb w8,[x20, #0x202]
7101ba9cdc  ldr x8,[x20]
7101ba9ce0  str wzr,[x20, #0x204]
7101ba9ce4  ldr x8,[x8, #0x78]
7101ba9ce8  ldr x1,[x8]
7101ba9cec  adrp x2,0x7104544000
7101ba9cf0  add x2,x2,#0xd38
7101ba9cf4  mov x0,x21
7101ba9cf8  mov w3,wzr
7101ba9cfc  bl 0x71032cbf30
7101ba9d00  ldr x8,[x20, #0x8]
7101ba9d04  ldr x8,[x8]
7101ba9d08  add x0,x8,#0x8
7101ba9d0c  adrp x1,0x71042a3000
7101ba9d10  add x1,x1,#0x163
7101ba9d14  mov x8,sp
7101ba9d18  mov x27,sp
7101ba9d1c  bl 0x7103776910
7101ba9d20  cmp x27,x24
7101ba9d24  b.eq 0x7101ba9d40
7101ba9d28  ldr x8,[sp, #0x8]
7101ba9d2c  str xzr,[sp, #0x8]
7101ba9d30  ldr x0,[x20, #0x28]
7101ba9d34  str x8,[x20, #0x28]
7101ba9d38  cbz x0,0x7101ba9d40
7101ba9d3c  bl 0x710392eb40
7101ba9d40  ldr x0,[sp, #0x8]
7101ba9d44  stp x23,xzr,[sp]
7101ba9d48  cbz x0,0x7101ba9d50
7101ba9d4c  bl 0x710392eb40
7101ba9d50  ldr x8,[x21]
7101ba9d54  ldr x8,[x8]
7101ba9d58  add x0,x8,#0x8
7101ba9d5c  adrp x1,0x710439d000
7101ba9d60  add x1,x1,#0x3a1
7101ba9d64  mov x8,sp
7101ba9d68  mov x24,sp
7101ba9d6c  bl 0x7103776910
7101ba9d70  cmp x24,x25
7101ba9d74  b.eq 0x7101ba9d90
7101ba9d78  ldr x8,[sp, #0x8]
7101ba9d7c  str xzr,[sp, #0x8]
7101ba9d80  ldr x0,[x20, #0x38]
7101ba9d84  str x8,[x20, #0x38]
7101ba9d88  cbz x0,0x7101ba9d90
7101ba9d8c  bl 0x710392eb40
7101ba9d90  ldr x0,[sp, #0x8]
7101ba9d94  stp x23,xzr,[sp]
7101ba9d98  cbz x0,0x7101ba9da0
7101ba9d9c  bl 0x710392eb40
7101ba9da0  ldr x8,[x21]
7101ba9da4  ldr x8,[x8]
7101ba9da8  add x0,x8,#0x8
7101ba9dac  adrp x1,0x7104280000
7101ba9db0  add x1,x1,#0x7dc
7101ba9db4  mov x8,sp
7101ba9db8  mov x24,sp
7101ba9dbc  bl 0x7103776910
7101ba9dc0  cmp x24,x26
7101ba9dc4  b.eq 0x7101ba9de0
7101ba9dc8  ldr x8,[sp, #0x8]
7101ba9dcc  str xzr,[sp, #0x8]
7101ba9dd0  ldr x0,[x20, #0x48]
7101ba9dd4  str x8,[x20, #0x48]
7101ba9dd8  cbz x0,0x7101ba9de0
7101ba9ddc  bl 0x710392eb40
7101ba9de0  ldr x0,[sp, #0x8]
7101ba9de4  stp x23,xzr,[sp]
7101ba9de8  cbz x0,0x7101ba9df0
7101ba9dec  bl 0x710392eb40
7101ba9df0  ldr x8,[x21]
7101ba9df4  mov x21,sp
7101ba9df8  ldr x8,[x8]
7101ba9dfc  add x0,x8,#0x8
7101ba9e00  adrp x1,0x710433a000
7101ba9e04  add x1,x1,#0x532
7101ba9e08  mov x8,sp
7101ba9e0c  bl 0x71037780e0
7101ba9e10  cmp x21,x22
7101ba9e14  b.eq 0x7101ba9e30
7101ba9e18  ldr x8,[sp, #0x8]
7101ba9e1c  str xzr,[sp, #0x8]
7101ba9e20  ldr x0,[x20, #0x58]
7101ba9e24  str x8,[x20, #0x58]
7101ba9e28  cbz x0,0x7101ba9e30
7101ba9e2c  bl 0x710392eb40
7101ba9e30  ldr x0,[sp, #0x8]
7101ba9e34  adrp x21,0x710523d000
7101ba9e38  add x21,x21,#0x9e8
7101ba9e3c  stp x21,xzr,[sp]
7101ba9e40  cbz x0,0x7101ba9e48
7101ba9e44  bl 0x710392eb40
7101ba9e48  ldr x8,[x20, #0x8]
7101ba9e4c  ldr x8,[x8]
7101ba9e50  add x0,x8,#0x8
7101ba9e54  adrp x1,0x71042a3000
7101ba9e58  add x1,x1,#0x468
7101ba9e5c  mov x8,sp
7101ba9e60  mov x22,sp
7101ba9e64  bl 0x71037780e0
7101ba9e68  add x8,x20,#0x60
7101ba9e6c  cmp x22,x8
7101ba9e70  b.eq 0x7101ba9e8c
7101ba9e74  ldr x8,[sp, #0x8]
7101ba9e78  str xzr,[sp, #0x8]
7101ba9e7c  ldr x0,[x20, #0x68]
7101ba9e80  str x8,[x20, #0x68]
7101ba9e84  cbz x0,0x7101ba9e8c
7101ba9e88  bl 0x710392eb40
7101ba9e8c  ldr x0,[sp, #0x8]
7101ba9e90  stp x21,xzr,[sp]
7101ba9e94  cbz x0,0x7101ba9e9c
7101ba9e98  bl 0x710392eb40
7101ba9e9c  ldr x8,[x20, #0x8]
7101ba9ea0  ldr x8,[x8]
7101ba9ea4  add x0,x8,#0x8
7101ba9ea8  adrp x1,0x71043be000
7101ba9eac  add x1,x1,#0xa13
7101ba9eb0  mov x8,sp
7101ba9eb4  mov x22,sp
7101ba9eb8  bl 0x71037780e0
7101ba9ebc  add x8,x20,#0x70
7101ba9ec0  cmp x22,x8
7101ba9ec4  b.eq 0x7101ba9ee0
7101ba9ec8  ldr x8,[sp, #0x8]
7101ba9ecc  str xzr,[sp, #0x8]
7101ba9ed0  ldr x0,[x20, #0x78]
7101ba9ed4  str x8,[x20, #0x78]
7101ba9ed8  cbz x0,0x7101ba9ee0
7101ba9edc  bl 0x710392eb40
7101ba9ee0  ldr x0,[sp, #0x8]
7101ba9ee4  stp x21,xzr,[sp]
7101ba9ee8  cbz x0,0x7101ba9ef0
7101ba9eec  bl 0x710392eb40
7101ba9ef0  ldr x8,[x20, #0x8]
7101ba9ef4  ldr x8,[x8]
7101ba9ef8  add x0,x8,#0x8
7101ba9efc  adrp x1,0x71043ad000
7101ba9f00  add x1,x1,#0xbb2
7101ba9f04  mov x8,sp
7101ba9f08  mov x22,sp
7101ba9f0c  bl 0x71037780e0
7101ba9f10  add x8,x20,#0x80
7101ba9f14  cmp x22,x8
7101ba9f18  b.eq 0x7101ba9f34
7101ba9f1c  ldr x8,[sp, #0x8]
7101ba9f20  str xzr,[sp, #0x8]
7101ba9f24  ldr x0,[x20, #0x88]
7101ba9f28  str x8,[x20, #0x88]
7101ba9f2c  cbz x0,0x7101ba9f34
7101ba9f30  bl 0x710392eb40
7101ba9f34  ldr x0,[sp, #0x8]
7101ba9f38  stp x21,xzr,[sp]
7101ba9f3c  cbz x0,0x7101ba9f44
7101ba9f40  bl 0x710392eb40
7101ba9f44  ldr x8,[x20, #0x8]
7101ba9f48  ldr x8,[x8]
7101ba9f4c  add x0,x8,#0x8
7101ba9f50  adrp x1,0x71042e7000
7101ba9f54  add x1,x1,#0x5f8
7101ba9f58  mov x8,sp
7101ba9f5c  mov x22,sp
7101ba9f60  bl 0x71037780e0
7101ba9f64  add x8,x20,#0x90
7101ba9f68  cmp x22,x8
7101ba9f6c  b.eq 0x7101ba9f88
7101ba9f70  ldr x8,[sp, #0x8]
7101ba9f74  str xzr,[sp, #0x8]
7101ba9f78  ldr x0,[x20, #0x98]
7101ba9f7c  str x8,[x20, #0x98]
7101ba9f80  cbz x0,0x7101ba9f88
7101ba9f84  bl 0x710392eb40
7101ba9f88  ldr x0,[sp, #0x8]
7101ba9f8c  stp x21,xzr,[sp]
7101ba9f90  cbz x0,0x7101ba9f98
7101ba9f94  bl 0x710392eb40
7101ba9f98  ldr x8,[x20, #0x8]
7101ba9f9c  ldr x8,[x8]
7101ba9fa0  add x0,x8,#0x8
7101ba9fa4  adrp x1,0x7104422000
7101ba9fa8  add x1,x1,#0x74e
7101ba9fac  mov x8,sp
7101ba9fb0  mov x22,sp
7101ba9fb4  bl 0x71037780e0
7101ba9fb8  add x8,x20,#0xa0
7101ba9fbc  cmp x22,x8
7101ba9fc0  b.eq 0x7101ba9fdc
7101ba9fc4  ldr x8,[sp, #0x8]
7101ba9fc8  str xzr,[sp, #0x8]
7101ba9fcc  ldr x0,[x20, #0xa8]
7101ba9fd0  str x8,[x20, #0xa8]
7101ba9fd4  cbz x0,0x7101ba9fdc
7101ba9fd8  bl 0x710392eb40
7101ba9fdc  ldr x0,[sp, #0x8]
7101ba9fe0  stp x21,xzr,[sp]
7101ba9fe4  cbz x0,0x7101ba9fec
7101ba9fe8  bl 0x710392eb40
7101ba9fec  ldr x8,[x20, #0x8]
7101ba9ff0  ldr x8,[x8]
7101ba9ff4  add x0,x8,#0x8
7101ba9ff8  adrp x1,0x7104412000
7101ba9ffc  add x1,x1,#0x7e4
7101baa000  mov x8,sp
7101baa004  mov x22,sp
7101baa008  bl 0x71037780e0
7101baa00c  add x8,x20,#0xb0
7101baa010  cmp x22,x8
7101baa014  b.eq 0x7101baa030
7101baa018  ldr x8,[sp, #0x8]
7101baa01c  str xzr,[sp, #0x8]
7101baa020  ldr x0,[x20, #0xb8]
7101baa024  str x8,[x20, #0xb8]
7101baa028  cbz x0,0x7101baa030
7101baa02c  bl 0x710392eb40
7101baa030  ldr x0,[sp, #0x8]
7101baa034  stp x21,xzr,[sp]
7101baa038  cbz x0,0x7101baa040
7101baa03c  bl 0x710392eb40
7101baa040  ldr x8,[x20, #0x8]
7101baa044  ldr x8,[x8]
7101baa048  add x0,x8,#0x8
7101baa04c  adrp x1,0x71043f0000
7101baa050  add x1,x1,#0x76a
7101baa054  mov x8,sp
7101baa058  mov x22,sp
7101baa05c  bl 0x71037780e0
7101baa060  add x8,x20,#0xc0
7101baa064  cmp x22,x8
7101baa068  b.eq 0x7101baa084
7101baa06c  ldr x8,[sp, #0x8]
7101baa070  str xzr,[sp, #0x8]
7101baa074  ldr x0,[x20, #0xc8]
7101baa078  str x8,[x20, #0xc8]
7101baa07c  cbz x0,0x7101baa084
7101baa080  bl 0x710392eb40
7101baa084  ldr x0,[sp, #0x8]
7101baa088  stp x21,xzr,[sp]
7101baa08c  cbz x0,0x7101baa094
7101baa090  bl 0x710392eb40
7101baa094  ldr x8,[x20, #0x8]
7101baa098  ldr x8,[x8]
7101baa09c  add x0,x8,#0x8
7101baa0a0  adrp x1,0x7104308000
7101baa0a4  add x1,x1,#0x2db
7101baa0a8  mov x8,sp
7101baa0ac  mov x22,sp
7101baa0b0  bl 0x71037780e0
7101baa0b4  add x8,x20,#0xd0
7101baa0b8  cmp x22,x8
7101baa0bc  b.eq 0x7101baa0d8
7101baa0c0  ldr x8,[sp, #0x8]
7101baa0c4  str xzr,[sp, #0x8]
7101baa0c8  ldr x0,[x20, #0xd8]
7101baa0cc  str x8,[x20, #0xd8]
7101baa0d0  cbz x0,0x7101baa0d8
7101baa0d4  bl 0x710392eb40
7101baa0d8  ldr x0,[sp, #0x8]
7101baa0dc  stp x21,xzr,[sp]
7101baa0e0  cbz x0,0x7101baa0e8
7101baa0e4  bl 0x710392eb40
7101baa0e8  ldr x8,[x20, #0x8]
7101baa0ec  ldr x8,[x8]
7101baa0f0  add x0,x8,#0x8
7101baa0f4  adrp x1,0x7104443000
7101baa0f8  add x1,x1,#0x46b
7101baa0fc  mov x8,sp
7101baa100  mov x22,sp
7101baa104  bl 0x71037780e0
7101baa108  add x8,x20,#0xe0
7101baa10c  cmp x22,x8
7101baa110  b.eq 0x7101baa12c
7101baa114  ldr x8,[sp, #0x8]
7101baa118  str xzr,[sp, #0x8]
7101baa11c  ldr x0,[x20, #0xe8]
7101baa120  str x8,[x20, #0xe8]
7101baa124  cbz x0,0x7101baa12c
7101baa128  bl 0x710392eb40
7101baa12c  ldr x0,[sp, #0x8]
7101baa130  stp x21,xzr,[sp]
7101baa134  cbz x0,0x7101baa13c
7101baa138  bl 0x710392eb40
7101baa13c  ldr x8,[x20, #0x8]
7101baa140  ldr x8,[x8]
7101baa144  add x0,x8,#0x8
7101baa148  adrp x1,0x71042c4000
7101baa14c  add x1,x1,#0xbe3
7101baa150  mov x8,sp
7101baa154  mov x22,sp
7101baa158  bl 0x71037780e0
7101baa15c  add x8,x20,#0xf0
7101baa160  cmp x22,x8
7101baa164  b.eq 0x7101baa180
7101baa168  ldr x8,[sp, #0x8]
7101baa16c  str xzr,[sp, #0x8]
7101baa170  ldr x0,[x20, #0xf8]
7101baa174  str x8,[x20, #0xf8]
7101baa178  cbz x0,0x7101baa180
7101baa17c  bl 0x710392eb40
7101baa180  ldr x0,[sp, #0x8]
7101baa184  stp x21,xzr,[sp]
7101baa188  cbz x0,0x7101baa190
7101baa18c  bl 0x710392eb40
7101baa190  ldr x8,[x20, #0x8]
7101baa194  ldr x8,[x8]
7101baa198  add x0,x8,#0x8
7101baa19c  adrp x1,0x7104401000
7101baa1a0  add x1,x1,#0x221
7101baa1a4  mov x8,sp
7101baa1a8  mov x22,sp
7101baa1ac  bl 0x71037780e0
7101baa1b0  add x8,x20,#0x100
7101baa1b4  cmp x22,x8
7101baa1b8  b.eq 0x7101baa1d4
7101baa1bc  ldr x8,[sp, #0x8]
7101baa1c0  str xzr,[sp, #0x8]
7101baa1c4  ldr x0,[x20, #0x108]
7101baa1c8  str x8,[x20, #0x108]
7101baa1cc  cbz x0,0x7101baa1d4
7101baa1d0  bl 0x710392eb40
7101baa1d4  ldr x0,[sp, #0x8]
7101baa1d8  stp x21,xzr,[sp]
7101baa1dc  cbz x0,0x7101baa1e4
7101baa1e0  bl 0x710392eb40
7101baa1e4  ldr x8,[x20, #0x8]
7101baa1e8  ldr x8,[x8]
7101baa1ec  add x0,x8,#0x8
7101baa1f0  adrp x1,0x7104412000
7101baa1f4  add x1,x1,#0x7ea
7101baa1f8  mov x8,sp
7101baa1fc  mov x22,sp
7101baa200  bl 0x71037780e0
7101baa204  add x8,x20,#0x110
7101baa208  cmp x22,x8
7101baa20c  b.eq 0x7101baa228
7101baa210  ldr x8,[sp, #0x8]
7101baa214  str xzr,[sp, #0x8]
7101baa218  ldr x0,[x20, #0x118]
7101baa21c  str x8,[x20, #0x118]
7101baa220  cbz x0,0x7101baa228
7101baa224  bl 0x710392eb40
7101baa228  ldr x0,[sp, #0x8]
7101baa22c  stp x21,xzr,[sp]
7101baa230  cbz x0,0x7101baa238
7101baa234  bl 0x710392eb40
7101baa238  ldr x8,[x20, #0x8]
7101baa23c  ldr x8,[x8]
7101baa240  add x0,x8,#0x8
7101baa244  adrp x1,0x7104412000
7101baa248  add x1,x1,#0x7f2
7101baa24c  mov x8,sp
7101baa250  mov x22,sp
7101baa254  bl 0x71037780e0
7101baa258  add x8,x20,#0x120
7101baa25c  cmp x22,x8
7101baa260  b.eq 0x7101baa27c
7101baa264  ldr x8,[sp, #0x8]
7101baa268  str xzr,[sp, #0x8]
7101baa26c  ldr x0,[x20, #0x128]
7101baa270  str x8,[x20, #0x128]
7101baa274  cbz x0,0x7101baa27c
7101baa278  bl 0x710392eb40
7101baa27c  ldr x0,[sp, #0x8]
7101baa280  stp x21,xzr,[sp]
7101baa284  cbz x0,0x7101baa28c
7101baa288  bl 0x710392eb40
7101baa28c  ldr x8,[x20, #0x8]
7101baa290  ldr x8,[x8]
7101baa294  add x0,x8,#0x8
7101baa298  adrp x1,0x7104422000
7101baa29c  add x1,x1,#0x15f
7101baa2a0  mov x8,sp
7101baa2a4  mov x22,sp
7101baa2a8  bl 0x71037780e0
7101baa2ac  add x8,x20,#0x130
7101baa2b0  cmp x22,x8
7101baa2b4  b.eq 0x7101baa2d0
7101baa2b8  ldr x8,[sp, #0x8]
7101baa2bc  str xzr,[sp, #0x8]
7101baa2c0  ldr x0,[x20, #0x138]
7101baa2c4  str x8,[x20, #0x138]
7101baa2c8  cbz x0,0x7101baa2d0
7101baa2cc  bl 0x710392eb40
7101baa2d0  ldr x0,[sp, #0x8]
7101baa2d4  stp x21,xzr,[sp]
7101baa2d8  cbz x0,0x7101baa2e0
7101baa2dc  bl 0x710392eb40
7101baa2e0  ldr x8,[x20, #0x8]
7101baa2e4  ldr x8,[x8]
7101baa2e8  add x0,x8,#0x8
7101baa2ec  adrp x1,0x710434a000
7101baa2f0  add x1,x1,#0x14c
7101baa2f4  mov x8,sp
7101baa2f8  mov x22,sp
7101baa2fc  bl 0x71037780e0
7101baa300  add x8,x20,#0x140
7101baa304  cmp x22,x8
7101baa308  b.eq 0x7101baa324
7101baa30c  ldr x8,[sp, #0x8]
7101baa310  str xzr,[sp, #0x8]
7101baa314  ldr x0,[x20, #0x148]
7101baa318  str x8,[x20, #0x148]
7101baa31c  cbz x0,0x7101baa324
7101baa320  bl 0x710392eb40
7101baa324  ldr x0,[sp, #0x8]
7101baa328  stp x21,xzr,[sp]
7101baa32c  cbz x0,0x7101baa334
7101baa330  bl 0x710392eb40
7101baa334  ldr x8,[x20, #0x8]
7101baa338  ldr x8,[x8]
7101baa33c  add x0,x8,#0x8
7101baa340  adrp x1,0x7104318000
7101baa344  add x1,x1,#0xcd7
7101baa348  mov x8,sp
7101baa34c  mov x22,sp
7101baa350  bl 0x71037780e0
7101baa354  add x8,x20,#0x150
7101baa358  cmp x22,x8
7101baa35c  b.eq 0x7101baa378
7101baa360  ldr x8,[sp, #0x8]
7101baa364  str xzr,[sp, #0x8]
7101baa368  ldr x0,[x20, #0x158]
7101baa36c  str x8,[x20, #0x158]
7101baa370  cbz x0,0x7101baa378
7101baa374  bl 0x710392eb40
7101baa378  ldr x0,[sp, #0x8]
7101baa37c  stp x21,xzr,[sp]
7101baa380  cbz x0,0x7101baa388
7101baa384  bl 0x710392eb40
7101baa388  ldr x8,[x20, #0x8]
7101baa38c  ldr x8,[x8]
7101baa390  add x0,x8,#0x8
7101baa394  adrp x1,0x710424f000
7101baa398  add x1,x1,#0x27b
7101baa39c  mov x8,sp
7101baa3a0  mov x22,sp
7101baa3a4  bl 0x71037780e0
7101baa3a8  add x8,x20,#0x160
7101baa3ac  cmp x22,x8
7101baa3b0  b.eq 0x7101baa3cc
7101baa3b4  ldr x8,[sp, #0x8]
7101baa3b8  str xzr,[sp, #0x8]
7101baa3bc  ldr x0,[x20, #0x168]
7101baa3c0  str x8,[x20, #0x168]
7101baa3c4  cbz x0,0x7101baa3cc
7101baa3c8  bl 0x710392eb40
7101baa3cc  ldr x0,[sp, #0x8]
7101baa3d0  stp x21,xzr,[sp]
7101baa3d4  cbz x0,0x7101baa3dc
7101baa3d8  bl 0x710392eb40
7101baa3dc  ldr x8,[x20, #0x8]
7101baa3e0  ldr x8,[x8]
7101baa3e4  add x0,x8,#0x8
7101baa3e8  adrp x1,0x71043df000
7101baa3ec  add x1,x1,#0xee5
7101baa3f0  mov x8,sp
7101baa3f4  mov x22,sp
7101baa3f8  bl 0x71037780e0
7101baa3fc  add x8,x20,#0x170
7101baa400  cmp x22,x8
7101baa404  b.eq 0x7101baa420
7101baa408  ldr x8,[sp, #0x8]
7101baa40c  str xzr,[sp, #0x8]
7101baa410  ldr x0,[x20, #0x178]
7101baa414  str x8,[x20, #0x178]
7101baa418  cbz x0,0x7101baa420
7101baa41c  bl 0x710392eb40
7101baa420  ldr x0,[sp, #0x8]
7101baa424  stp x21,xzr,[sp]
7101baa428  cbz x0,0x7101baa430
7101baa42c  bl 0x710392eb40
7101baa430  ldr x8,[x20, #0x8]
7101baa434  ldr x8,[x8]
7101baa438  add x0,x8,#0x8
7101baa43c  adrp x1,0x71042e6000
7101baa440  add x1,x1,#0xef1
7101baa444  mov x8,sp
7101baa448  mov x22,sp
7101baa44c  bl 0x71037780e0
7101baa450  add x8,x20,#0x180
7101baa454  cmp x22,x8
7101baa458  b.eq 0x7101baa474
7101baa45c  ldr x8,[sp, #0x8]
7101baa460  str xzr,[sp, #0x8]
7101baa464  ldr x0,[x20, #0x188]
7101baa468  str x8,[x20, #0x188]
7101baa46c  cbz x0,0x7101baa474
7101baa470  bl 0x710392eb40
7101baa474  ldr x0,[sp, #0x8]
7101baa478  stp x21,xzr,[sp]
7101baa47c  cbz x0,0x7101baa484
7101baa480  bl 0x710392eb40
7101baa484  ldr x8,[x20, #0x8]
7101baa488  ldr x8,[x8]
7101baa48c  add x0,x8,#0x8
7101baa490  adrp x1,0x71043cf000
7101baa494  add x1,x1,#0x227
7101baa498  mov x8,sp
7101baa49c  mov x22,sp
7101baa4a0  bl 0x71037780e0
7101baa4a4  add x8,x20,#0x190
7101baa4a8  cmp x22,x8
7101baa4ac  b.eq 0x7101baa4c8
7101baa4b0  ldr x8,[sp, #0x8]
7101baa4b4  str xzr,[sp, #0x8]
7101baa4b8  ldr x0,[x20, #0x198]
7101baa4bc  str x8,[x20, #0x198]
7101baa4c0  cbz x0,0x7101baa4c8
7101baa4c4  bl 0x710392eb40
7101baa4c8  ldr x0,[sp, #0x8]
7101baa4cc  stp x21,xzr,[sp]
7101baa4d0  cbz x0,0x7101baa4d8
7101baa4d4  bl 0x710392eb40
7101baa4d8  ldr x8,[x20, #0x8]
7101baa4dc  ldr x8,[x8]
7101baa4e0  add x0,x8,#0x8
7101baa4e4  adrp x1,0x710437c000
7101baa4e8  add x1,x1,#0x2a9
7101baa4ec  mov x8,sp
7101baa4f0  mov x22,sp
7101baa4f4  bl 0x71037780e0
7101baa4f8  add x8,x20,#0x1a0
7101baa4fc  cmp x22,x8
7101baa500  b.eq 0x7101baa51c
7101baa504  ldr x8,[sp, #0x8]
7101baa508  str xzr,[sp, #0x8]
7101baa50c  ldr x0,[x20, #0x1a8]
7101baa510  str x8,[x20, #0x1a8]
7101baa514  cbz x0,0x7101baa51c
7101baa518  bl 0x710392eb40
7101baa51c  ldr x0,[sp, #0x8]
7101baa520  stp x21,xzr,[sp]
7101baa524  cbz x0,0x7101baa52c
7101baa528  bl 0x710392eb40
7101baa52c  ldr x8,[x20, #0x8]
7101baa530  ldr x8,[x8]
7101baa534  add x0,x8,#0x8
7101baa538  adrp x1,0x710439d000
7101baa53c  add x1,x1,#0x295
7101baa540  mov x8,sp
7101baa544  mov x22,sp
7101baa548  bl 0x71037780e0
7101baa54c  add x8,x20,#0x1b0
7101baa550  cmp x22,x8
7101baa554  b.eq 0x7101baa570
7101baa558  ldr x8,[sp, #0x8]
7101baa55c  str xzr,[sp, #0x8]
7101baa560  ldr x0,[x20, #0x1b8]
7101baa564  str x8,[x20, #0x1b8]
7101baa568  cbz x0,0x7101baa570
7101baa56c  bl 0x710392eb40
7101baa570  ldr x0,[sp, #0x8]
7101baa574  stp x21,xzr,[sp]
7101baa578  cbz x0,0x7101baa580
7101baa57c  bl 0x710392eb40
7101baa580  ldr x8,[x20, #0x8]
7101baa584  ldr x8,[x8]
7101baa588  add x0,x8,#0x8
7101baa58c  adrp x1,0x7104291000
7101baa590  add x1,x1,#0xa06
7101baa594  mov x8,sp
7101baa598  mov x22,sp
7101baa59c  bl 0x71037780e0
7101baa5a0  add x8,x20,#0x1c0
7101baa5a4  cmp x22,x8
7101baa5a8  b.eq 0x7101baa5c4
7101baa5ac  ldr x8,[sp, #0x8]
7101baa5b0  str xzr,[sp, #0x8]
7101baa5b4  ldr x0,[x20, #0x1c8]
7101baa5b8  str x8,[x20, #0x1c8]
7101baa5bc  cbz x0,0x7101baa5c4
7101baa5c0  bl 0x710392eb40
7101baa5c4  ldr x0,[sp, #0x8]
7101baa5c8  stp x21,xzr,[sp]
7101baa5cc  cbz x0,0x7101baa5d4
7101baa5d0  bl 0x710392eb40
7101baa5d4  ldr x8,[x20, #0x8]
7101baa5d8  ldr x8,[x8]
7101baa5dc  add x0,x8,#0x8
7101baa5e0  adrp x1,0x71042a2000
7101baa5e4  add x1,x1,#0xe34
7101baa5e8  mov x8,sp
7101baa5ec  mov x22,sp
7101baa5f0  bl 0x71037780e0
7101baa5f4  add x8,x20,#0x1d0
7101baa5f8  cmp x22,x8
7101baa5fc  b.eq 0x7101baa618
7101baa600  ldr x8,[sp, #0x8]
7101baa604  str xzr,[sp, #0x8]
7101baa608  ldr x0,[x20, #0x1d8]
7101baa60c  str x8,[x20, #0x1d8]
7101baa610  cbz x0,0x7101baa618
7101baa614  bl 0x710392eb40
7101baa618  ldr x0,[sp, #0x8]
7101baa61c  stp x21,xzr,[sp]
7101baa620  cbz x0,0x7101baa628
7101baa624  bl 0x710392eb40
7101baa628  ldr x8,[x20, #0x8]
7101baa62c  ldr x8,[x8]
7101baa630  add x0,x8,#0x8
7101baa634  adrp x1,0x710426f000
7101baa638  add x1,x1,#0xe29
7101baa63c  mov x8,sp
7101baa640  mov x22,sp
7101baa644  bl 0x71037780e0
7101baa648  add x8,x20,#0x1e0
7101baa64c  cmp x22,x8
7101baa650  b.eq 0x7101baa66c
7101baa654  ldr x8,[sp, #0x8]
7101baa658  str xzr,[sp, #0x8]
7101baa65c  ldr x0,[x20, #0x1e8]
7101baa660  str x8,[x20, #0x1e8]
7101baa664  cbz x0,0x7101baa66c
7101baa668  bl 0x710392eb40
7101baa66c  ldr x0,[sp, #0x8]
7101baa670  stp x21,xzr,[sp]
7101baa674  cbz x0,0x7101baa67c
7101baa678  bl 0x710392eb40
7101baa67c  ldr x8,[x20, #0x8]
7101baa680  ldr x8,[x8]
7101baa684  add x0,x8,#0x8
7101baa688  adrp x1,0x7104329000
7101baa68c  add x1,x1,#0xd96
7101baa690  mov x8,sp
7101baa694  mov x22,sp
7101baa698  bl 0x71037780e0
7101baa69c  add x8,x20,#0x1f0
7101baa6a0  cmp x22,x8
7101baa6a4  b.eq 0x7101baa6c0
7101baa6a8  ldr x8,[sp, #0x8]
7101baa6ac  str xzr,[sp, #0x8]
7101baa6b0  ldr x0,[x20, #0x1f8]
7101baa6b4  str x8,[x20, #0x1f8]
7101baa6b8  cbz x0,0x7101baa6c0
7101baa6bc  bl 0x710392eb40
7101baa6c0  ldr x0,[sp, #0x8]
7101baa6c4  stp x21,xzr,[sp]
7101baa6c8  cbz x0,0x7101baa6d0
7101baa6cc  bl 0x710392eb40
7101baa6d0  str x20,[x19, #0x80]
7101baa6d4  ldp x29,x30,[sp, #0x60]
7101baa6d8  ldp x20,x19,[sp, #0x50]
7101baa6dc  ldr x27,[sp, #0x10]
7101baa6e0  ldp x22,x21,[sp, #0x40]
7101baa6e4  ldp x24,x23,[sp, #0x30]
7101baa6e8  ldp x26,x25,[sp, #0x20]
7101baa6ec  add sp,sp,#0x70
7101baa6f0  ret
