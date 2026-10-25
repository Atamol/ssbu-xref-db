// addr:      71001e4b40
// offset:    0x1e4b40
// name:      FUN_71001e4b40
// mangled:   
// size:      972

71001e4b40  sub sp,sp,#0xb0
71001e4b44  str x23,[sp, #0x70]
71001e4b48  stp x22,x21,[sp, #0x80]
71001e4b4c  stp x20,x19,[sp, #0x90]
71001e4b50  stp x29,x30,[sp, #0xa0]
71001e4b54  add x29,sp,#0xa0
71001e4b58  adrp x22,0x71052a4000
71001e4b5c  ldr x22,[x22, #0xda8]
71001e4b60  adrp x21,0x71052a4000
71001e4b64  ldrb w8,[x22]
71001e4b68  ldr x21,[x21, #0xdb0]
71001e4b6c  mov x19,x0
71001e4b70  add x20,x21,#0x18
71001e4b74  cbz w8,0x71001e4bb0
71001e4b78  adrp x8,0x71052a4000
71001e4b7c  ldr x8,[x8, #0xdb8]
71001e4b80  ldr x0,[x8]
71001e4b84  bl 0x7101717960
71001e4b88  ldr w8,[x0]
71001e4b8c  cbz w8,0x71001e4bb0
71001e4b90  ldr x10,[x21, #0xa0]
71001e4b94  ldp x9,x10,[x10]
71001e4b98  sub x10,x10,x9
71001e4b9c  asr x10,x10,#0x3
71001e4ba0  cmp x10,x8
71001e4ba4  b.ls 0x71001e4ef4
71001e4ba8  ldr x8,[x9, x8, LSL #0x3]
71001e4bac  add x20,x8,#0x10
71001e4bb0  ldr x8,[x20]
71001e4bb4  ldr x8,[x8, #0x10]
71001e4bb8  ldr x8,[x8, #0x198]
71001e4bbc  cbz x8,0x71001e4d8c
71001e4bc0  adrp x23,0x71052a6000
71001e4bc4  ldr x23,[x23, #0xe70]
71001e4bc8  str xzr,[sp, #0x60]
71001e4bcc  stp xzr,xzr,[sp, #0x20]
71001e4bd0  add x8,x23,#0x10
71001e4bd4  stp xzr,xzr,[sp, #0x38]
71001e4bd8  str x8,[sp]
71001e4bdc  mov x8,sp
71001e4be0  add x9,x8,#0x20
71001e4be4  str x9,[sp, #0x18]
71001e4be8  add x9,x8,#0x38
71001e4bec  add x8,x8,#0x50
71001e4bf0  str x8,[sp, #0x48]
71001e4bf4  mov w8,#0x1
71001e4bf8  mov w0,#0x90
71001e4bfc  str x9,[sp, #0x30]
71001e4c00  stp xzr,xzr,[sp, #0x50]
71001e4c04  strh w8,[sp, #0x68]
71001e4c08  strb w8,[sp, #0x6a]
71001e4c0c  bl 0x71001af850
71001e4c10  mov x20,x0
71001e4c14  cbz x0,0x71001e4c20
71001e4c18  mov x0,x20
71001e4c1c  bl 0x71001beb40
71001e4c20  ldrb w8,[sp, #0x68]
71001e4c24  str x20,[sp, #0x8]
71001e4c28  cbnz w8,0x71001e4c34
71001e4c2c  mov x0,sp
71001e4c30  bl 0x71001f2180
71001e4c34  mov w8,#0x1
71001e4c38  str w8,[sp, #0x10]
71001e4c3c  ldrb w8,[x22]
71001e4c40  add x20,x21,#0x18
71001e4c44  strb wzr,[sp, #0x69]
71001e4c48  cbz w8,0x71001e4c84
71001e4c4c  adrp x8,0x71052a4000
71001e4c50  ldr x8,[x8, #0xdb8]
71001e4c54  ldr x0,[x8]
71001e4c58  bl 0x7101717960
71001e4c5c  ldr w8,[x0]
71001e4c60  cbz w8,0x71001e4c84
71001e4c64  ldr x10,[x21, #0xa0]
71001e4c68  ldp x9,x10,[x10]
71001e4c6c  sub x10,x10,x9
71001e4c70  asr x10,x10,#0x3
71001e4c74  cmp x10,x8
71001e4c78  b.ls 0x71001e4ef4
71001e4c7c  ldr x8,[x9, x8, LSL #0x3]
71001e4c80  add x20,x8,#0x10
71001e4c84  ldr x8,[x20]
71001e4c88  ldr x8,[x8, #0x10]
71001e4c8c  ldr x0,[x8, #0x198]
71001e4c90  ldr x8,[x19, #0x318]
71001e4c94  add x1,x8,#0x10
71001e4c98  mov x2,sp
71001e4c9c  bl 0x71001e5a20
71001e4ca0  tbz w0,#0x0,0x71001e4d30
71001e4ca4  ldr x20,[x19, #0x318]
71001e4ca8  ldrb w8,[x20, #0x78]
71001e4cac  cbz w8,0x71001e4eb4
71001e4cb0  ldr x20,[x20, #0x18]
71001e4cb4  ldrb w8,[sp, #0x68]
71001e4cb8  cbz w8,0x71001e4ec8
71001e4cbc  ldr x21,[sp, #0x8]
71001e4cc0  mov x0,x20
71001e4cc4  bl 0x71001beb00
71001e4cc8  mov x22,x0
71001e4ccc  mov x0,x21
71001e4cd0  bl 0x71001beb00
71001e4cd4  cmp x22,x0
71001e4cd8  b.ne 0x71001e4d94
71001e4cdc  ldr w8,[x20, #0x88]
71001e4ce0  ldr w9,[x21, #0x88]
71001e4ce4  cmp w8,w9
71001e4ce8  b.ne 0x71001e4d94
71001e4cec  ldr x20,[x19, #0x318]
71001e4cf0  ldrb w8,[x20, #0x78]
71001e4cf4  cbnz w8,0x71001e4d00
71001e4cf8  add x0,x20,#0x10
71001e4cfc  bl 0x71001f2180
71001e4d00  ldr x0,[x20, #0x18]
71001e4d04  bl 0x71001beb30
71001e4d08  ldrb w8,[sp, #0x68]
71001e4d0c  mov w20,w0
71001e4d10  cbnz w8,0x71001e4d1c
71001e4d14  mov x0,sp
71001e4d18  bl 0x71001f2180
71001e4d1c  ldr x0,[sp, #0x8]
71001e4d20  bl 0x71001beb30
71001e4d24  and w8,w20,#0xffff
71001e4d28  cmp w8,w0, UXTH 
71001e4d2c  b.ne 0x71001e4d94
71001e4d30  add x8,x23,#0x10
71001e4d34  str x8,[sp]
71001e4d38  ldr x8,[sp, #0x60]
71001e4d3c  cbz x8,0x71001e4d50
71001e4d40  sub x0,x8,#0x4
71001e4d44  bl 0x71001b1870
71001e4d48  str xzr,[sp, #0x60]
71001e4d4c  strb wzr,[sp, #0x69]
71001e4d50  ldr x0,[sp, #0x8]
71001e4d54  cbz x0,0x71001e4d64
71001e4d58  ldr x8,[x0]
71001e4d5c  ldr x8,[x8, #0x8]
71001e4d60  blr x8
71001e4d64  ldr x1,[sp, #0x50]
71001e4d68  mov x19,sp
71001e4d6c  add x0,x19,#0x48
71001e4d70  bl 0x7101711670
71001e4d74  ldr x1,[sp, #0x38]
71001e4d78  add x0,x19,#0x30
71001e4d7c  bl 0x7101711670
71001e4d80  ldr x1,[sp, #0x20]
71001e4d84  add x0,x19,#0x18
71001e4d88  bl 0x7100219ca0
71001e4d8c  mov w0,wzr
71001e4d90  b 0x71001e4e9c
71001e4d94  ldr x20,[x19, #0x318]
71001e4d98  ldrb w8,[x20, #0x78]
71001e4d9c  cbnz w8,0x71001e4da8
71001e4da0  add x0,x20,#0x10
71001e4da4  bl 0x71001f2180
71001e4da8  ldr x1,[x20, #0x18]
71001e4dac  add x0,x19,#0x280
71001e4db0  bl 0x71001bec20
71001e4db4  ldr x20,[x19, #0x318]
71001e4db8  ldrb w8,[x20, #0x78]
71001e4dbc  cbnz w8,0x71001e4dc8
71001e4dc0  add x0,x20,#0x10
71001e4dc4  bl 0x71001f2180
71001e4dc8  ldr x0,[x20, #0x18]
71001e4dcc  bl 0x71001beb30
71001e4dd0  strh w0,[x19, #0x310]
71001e4dd4  ldr x21,[x19, #0x318]
71001e4dd8  ldrb w8,[sp, #0x68]
71001e4ddc  cbz w8,0x71001e4ed4
71001e4de0  ldr x20,[sp, #0x8]
71001e4de4  ldrb w8,[x21, #0x78]
71001e4de8  cbz w8,0x71001e4ee8
71001e4dec  ldr x0,[x21, #0x18]
71001e4df0  mov x1,x20
71001e4df4  bl 0x71001bec20
71001e4df8  strb wzr,[x21, #0x79]
71001e4dfc  ldr x20,[x19, #0x318]
71001e4e00  ldrb w8,[sp, #0x68]
71001e4e04  cbnz w8,0x71001e4e10
71001e4e08  mov x0,sp
71001e4e0c  bl 0x71001f2180
71001e4e10  ldr x0,[sp, #0x8]
71001e4e14  bl 0x71001beb30
71001e4e18  ldrb w8,[x20, #0x78]
71001e4e1c  mov w19,w0
71001e4e20  cbnz w8,0x71001e4e2c
71001e4e24  add x0,x20,#0x10
71001e4e28  bl 0x71001f2180
71001e4e2c  ldr x0,[x20, #0x18]
71001e4e30  mov w1,w19
71001e4e34  bl 0x71001bee30
71001e4e38  strb wzr,[x20, #0x79]
71001e4e3c  add x8,x23,#0x10
71001e4e40  str x8,[sp]
71001e4e44  ldr x8,[sp, #0x60]
71001e4e48  cbz x8,0x71001e4e5c
71001e4e4c  sub x0,x8,#0x4
71001e4e50  bl 0x71001b1870
71001e4e54  str xzr,[sp, #0x60]
71001e4e58  strb wzr,[sp, #0x69]
71001e4e5c  ldr x0,[sp, #0x8]
71001e4e60  cbz x0,0x71001e4e70
71001e4e64  ldr x8,[x0]
71001e4e68  ldr x8,[x8, #0x8]
71001e4e6c  blr x8
71001e4e70  ldr x1,[sp, #0x50]
71001e4e74  mov x19,sp
71001e4e78  add x0,x19,#0x48
71001e4e7c  bl 0x7101711670
71001e4e80  ldr x1,[sp, #0x38]
71001e4e84  add x0,x19,#0x30
71001e4e88  bl 0x7101711670
71001e4e8c  ldr x1,[sp, #0x20]
71001e4e90  add x0,x19,#0x18
71001e4e94  bl 0x7100219ca0
71001e4e98  mov w0,#0x1
71001e4e9c  ldp x29,x30,[sp, #0xa0]
71001e4ea0  ldr x23,[sp, #0x70]
71001e4ea4  ldp x20,x19,[sp, #0x90]
71001e4ea8  ldp x22,x21,[sp, #0x80]
71001e4eac  add sp,sp,#0xb0
71001e4eb0  ret
71001e4eb4  add x0,x20,#0x10
71001e4eb8  bl 0x71001f2180
71001e4ebc  ldr x20,[x20, #0x18]
71001e4ec0  ldrb w8,[sp, #0x68]
71001e4ec4  cbnz w8,0x71001e4cbc
71001e4ec8  mov x0,sp
71001e4ecc  bl 0x71001f2180
71001e4ed0  b 0x71001e4cbc
71001e4ed4  mov x0,sp
71001e4ed8  bl 0x71001f2180
71001e4edc  ldr x20,[sp, #0x8]
71001e4ee0  ldrb w8,[x21, #0x78]
71001e4ee4  cbnz w8,0x71001e4dec
71001e4ee8  add x0,x21,#0x10
71001e4eec  bl 0x71001f2180
71001e4ef0  b 0x71001e4dec
71001e4ef4  adrp x0,0x71042c4000
71001e4ef8  add x0,x0,#0x35f
71001e4efc  mov w1,#0x47
71001e4f00  orr w2,wzr,#0xe0000003
71001e4f04  mov w3,wzr
71001e4f08  bl 0x71001b1300
