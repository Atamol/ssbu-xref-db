// addr:      71017c8910
// offset:    0x17c8910
// name:      FUN_71017c8910
// mangled:   
// size:      1444

71017c8910  stp x28,x21,[sp, #-0x30]!
71017c8914  stp x20,x19,[sp, #0x10]
71017c8918  stp x29,x30,[sp, #0x20]
71017c891c  add x29,sp,#0x20
71017c8920  sub sp,sp,#0x320
71017c8924  ldr x8,[x0]
71017c8928  cbnz x8,0x71017c8e9c
71017c892c  mov x19,x0
71017c8930  mov x10,xzr
71017c8934  adrp x8,0x71043ac000
71017c8938  add x8,x8,#0xe78
71017c893c  mov w11,#0x5
71017c8940  strb wzr,[sp, #0x118]
71017c8944  mov x9,sp
71017c8948  str xzr,[sp, #0x110]
71017c894c  str xzr,[sp, #0x240]
71017c8950  str xzr,[sp, #0x270]
71017c8954  str xzr,[sp, #0x2a0]
71017c8958  str xzr,[sp, #0x2d0]
71017c895c  str xzr,[sp, #0x300]
71017c8960  str xzr,[sp]
71017c8964  stur xzr,[sp, #0x5]
71017c8968  str w11,[sp]
71017c896c  b 0x71017c8978
71017c8970  add x10,x10,#0x2
71017c8974  strb w12,[x11, #0xd]
71017c8978  add x12,x8,x10
71017c897c  ldrb w13,[x12]
71017c8980  cbz w13,0x71017c8998
71017c8984  ldrb w12,[x12, #0x1]
71017c8988  add x11,x9,x10
71017c898c  strb w13,[x11, #0xc]
71017c8990  cbnz w12,0x71017c8970
71017c8994  add x10,x10,#0x1
71017c8998  mov x9,sp
71017c899c  orr x11,x9,#0xc
71017c89a0  mov w8,#0x9dc5
71017c89a4  movk w8,#0x811c, LSL #16
71017c89a8  mov w12,w8
71017c89ac  strb wzr,[x11, w10, UXTW ]
71017c89b0  str w10,[sp, #0x8]
71017c89b4  ldrb w10,[sp, #0xc]
71017c89b8  cbz w10,0x71017c89e0
71017c89bc  mov w11,#0xd
71017c89c0  orr x11,x9,x11
71017c89c4  mov w13,#0x89
71017c89c8  mov w12,w8
71017c89cc  mul w12,w12,w13
71017c89d0  and w10,w10,#0xff
71017c89d4  eor w12,w12,w10
71017c89d8  ldrb w10,[x11], #0x1
71017c89dc  cbnz w10,0x71017c89cc
71017c89e0  mov x10,xzr
71017c89e4  adrp x11,0x710425e000
71017c89e8  add x11,x11,#0xb1f
71017c89ec  str w12,[sp, #0x4]
71017c89f0  b 0x71017c89fc
71017c89f4  add x10,x10,#0x2
71017c89f8  strb w13,[x12, #0x119]
71017c89fc  add x13,x11,x10
71017c8a00  ldrb w14,[x13]
71017c8a04  cbz w14,0x71017c8a1c
71017c8a08  ldrb w13,[x13, #0x1]
71017c8a0c  add x12,x9,x10
71017c8a10  strb w14,[x12, #0x118]
71017c8a14  cbnz w13,0x71017c89f4
71017c8a18  add x10,x10,#0x1
71017c8a1c  mov x9,sp
71017c8a20  add x11,x9,#0x118
71017c8a24  strb wzr,[x11, w10, UXTW ]
71017c8a28  str w10,[sp, #0x114]
71017c8a2c  ldrb w10,[sp, #0x118]
71017c8a30  cbz w10,0x71017c8a50
71017c8a34  add x9,x9,#0x119
71017c8a38  mov w11,#0x89
71017c8a3c  mul w8,w8,w11
71017c8a40  and w10,w10,#0xff
71017c8a44  eor w8,w8,w10
71017c8a48  ldrb w10,[x9], #0x1
71017c8a4c  cbnz w10,0x71017c8a3c
71017c8a50  mov w1,#0x4d0
71017c8a54  mov w0,#0x10
71017c8a58  str w8,[sp, #0x110]
71017c8a5c  add x21,x19,#0x8
71017c8a60  bl 0x710392e290
71017c8a64  mov x20,x0
71017c8a68  cbnz x0,0x71017c8aa4
71017c8a6c  adrp x8,0x7105332000
71017c8a70  ldr x0,[x8, #0xf00]
71017c8a74  mov w20,#0x4d0
71017c8a78  stur wzr,[x29, #-0x30]
71017c8a7c  stur x20,[x29, #-0x28]
71017c8a80  ldr x8,[x0]
71017c8a84  ldr x8,[x8, #0x30]
71017c8a88  sub x1,x29,#0x30
71017c8a8c  sub x2,x29,#0x28
71017c8a90  blr x8
71017c8a94  mov w0,#0x10
71017c8a98  mov x1,x20
71017c8a9c  bl 0x710392e290
71017c8aa0  mov x20,x0
71017c8aa4  add x0,x20,#0x10
71017c8aa8  mov x1,sp
71017c8aac  str x21,[x20]
71017c8ab0  bl 0x71017c1e40
71017c8ab4  adrp x8,0x71017c2000
71017c8ab8  add x8,x8,#0x130
71017c8abc  str x8,[x20, #0x4a0]
71017c8ac0  adrp x8,0x710143c000
71017c8ac4  add x8,x8,#0x880
71017c8ac8  str x8,[x20, #0x4a8]
71017c8acc  adrp x8,0x71017c2000
71017c8ad0  add x8,x8,#0x120
71017c8ad4  str x8,[x20, #0x488]
71017c8ad8  adrp x8,0x71017c2000
71017c8adc  add x8,x8,#0x150
71017c8ae0  str x8,[x20, #0x348]
71017c8ae4  adrp x8,0x71017c2000
71017c8ae8  add x8,x8,#0x160
71017c8aec  str x8,[x20, #0x358]
71017c8af0  adrp x8,0x71017c2000
71017c8af4  add x8,x8,#0x220
71017c8af8  str x8,[x20, #0x368]
71017c8afc  adrp x8,0x71017c2000
71017c8b00  add x8,x8,#0x2e0
71017c8b04  str x8,[x20, #0x378]
71017c8b08  adrp x8,0x71017c2000
71017c8b0c  add x8,x8,#0x530
71017c8b10  str x8,[x20, #0x388]
71017c8b14  adrp x8,0x71017c2000
71017c8b18  add x8,x8,#0x910
71017c8b1c  str x8,[x20, #0x398]
71017c8b20  adrp x8,0x71017c2000
71017c8b24  add x8,x8,#0xd30
71017c8b28  str x8,[x20, #0x3a8]
71017c8b2c  adrp x8,0x71017c3000
71017c8b30  add x8,x8,#0x1d0
71017c8b34  str x8,[x20, #0x3b8]
71017c8b38  adrp x8,0x71017c3000
71017c8b3c  add x8,x8,#0xfd0
71017c8b40  str x8,[x20, #0x3c8]
71017c8b44  adrp x8,0x71017c4000
71017c8b48  add x8,x8,#0x290
71017c8b4c  str x8,[x20, #0x3d8]
71017c8b50  adrp x8,0x71017c4000
71017c8b54  add x8,x8,#0x7a0
71017c8b58  add x9,x20,#0x43c
71017c8b5c  str x20,[x20, #0x320]
71017c8b60  str xzr,[x20, #0x340]
71017c8b64  str xzr,[x20, #0x338]
71017c8b68  str xzr,[x20, #0x480]
71017c8b6c  add x0,x20,#0x320
71017c8b70  str xzr,[x20, #0x478]
71017c8b74  str xzr,[x20, #0x470]
71017c8b78  str xzr,[x20, #0x468]
71017c8b7c  str xzr,[x20, #0x460]
71017c8b80  str xzr,[x20, #0x458]
71017c8b84  str x20,[x20, #0x498]
71017c8b88  str xzr,[x20, #0x490]
71017c8b8c  strh wzr,[x20, #0x4c8]
71017c8b90  str xzr,[x20, #0x4c0]
71017c8b94  str xzr,[x20, #0x4b8]
71017c8b98  str xzr,[x20, #0x4b0]
71017c8b9c  str xzr,[x20, #0x350]
71017c8ba0  str xzr,[x20, #0x360]
71017c8ba4  str xzr,[x20, #0x370]
71017c8ba8  str xzr,[x20, #0x380]
71017c8bac  str xzr,[x20, #0x390]
71017c8bb0  str xzr,[x20, #0x3a0]
71017c8bb4  str xzr,[x20, #0x3b0]
71017c8bb8  str xzr,[x20, #0x3c0]
71017c8bbc  str xzr,[x20, #0x3d0]
71017c8bc0  str xzr,[x20, #0x3e0]
71017c8bc4  str x8,[x20, #0x3e8]
71017c8bc8  add x8,x20,#0x3fc
71017c8bcc  str xzr,[x20, #0x3f0]
71017c8bd0  str xzr,[x20, #0x330]
71017c8bd4  str xzr,[x20, #0x328]
71017c8bd8  str xzr,[x9]
71017c8bdc  add x9,x20,#0x434
71017c8be0  str xzr,[x9]
71017c8be4  add x9,x20,#0x42c
71017c8be8  str xzr,[x9]
71017c8bec  add x9,x20,#0x424
71017c8bf0  str xzr,[x9]
71017c8bf4  add x9,x20,#0x41c
71017c8bf8  str xzr,[x9]
71017c8bfc  add x9,x20,#0x414
71017c8c00  str xzr,[x9]
71017c8c04  add x9,x20,#0x40c
71017c8c08  str xzr,[x9]
71017c8c0c  add x9,x20,#0x404
71017c8c10  str xzr,[x8]
71017c8c14  mov w8,#0xffffffff
71017c8c18  str wzr,[x20, #0x444]
71017c8c1c  str xzr,[x9]
71017c8c20  str w8,[x20, #0x448]
71017c8c24  str wzr,[x20, #0x44c]
71017c8c28  str w8,[x20, #0x450]
71017c8c2c  strb wzr,[x20, #0x454]
71017c8c30  str wzr,[x20, #0x3f8]
71017c8c34  bl 0x71017c47e0
71017c8c38  adrp x8,0x710593b000
71017c8c3c  ldr x8,[x8, #0x580]
71017c8c40  stp xzr,xzr,[x29, #-0x30]
71017c8c44  ldr x2,[x8]
71017c8c48  mov w8,#0x7300
71017c8c4c  ldrsw x8,[x2, x8, LSL #0x0]
71017c8c50  cmn w8,#0x1
71017c8c54  b.eq 0x71017c8c70
71017c8c58  ldr x9,[x2, #0x72c0]
71017c8c5c  cmp x9,x8
71017c8c60  b.ls 0x71017c8eb0
71017c8c64  mov w9,#0xcc0
71017c8c68  madd x8,x8,x9,x2
71017c8c6c  add x2,x8,#0xcc0
71017c8c70  sub x0,x29,#0x28
71017c8c74  sub x1,x29,#0x30
71017c8c78  bl 0x71039c6140
71017c8c7c  cbz w0,0x71017c8c90
71017c8c80  and x0,x0,#0xffffffff
71017c8c84  bl 0x71039c26b0
71017c8c88  mov x8,xzr
71017c8c8c  b 0x71017c8c94
71017c8c90  ldur x8,[x29, #-0x30]
71017c8c94  sub x8,x8,#0x80, LSL #12
71017c8c98  str x8,[x20, #0x4b8]
71017c8c9c  ldr x21,[x19]
71017c8ca0  str x20,[x19]
71017c8ca4  cbz x21,0x71017c8dac
71017c8ca8  ldr x0,[x21, #0x470]
71017c8cac  cbz x0,0x71017c8cb8
71017c8cb0  str x0,[x21, #0x478]
71017c8cb4  bl 0x710392eb40
71017c8cb8  ldr x0,[x21, #0x458]
71017c8cbc  cbz x0,0x71017c8cc8
71017c8cc0  str x0,[x21, #0x460]
71017c8cc4  bl 0x710392eb40
71017c8cc8  ldr x0,[x21, #0x310]
71017c8ccc  add x8,x21,#0x2f0
71017c8cd0  cmp x8,x0
71017c8cd4  b.eq 0x71017c8ce8
71017c8cd8  cbz x0,0x71017c8cf4
71017c8cdc  ldr x8,[x0]
71017c8ce0  ldr x8,[x8, #0x28]
71017c8ce4  b 0x71017c8cf0
71017c8ce8  ldr x8,[x0]
71017c8cec  ldr x8,[x8, #0x20]
71017c8cf0  blr x8
71017c8cf4  ldr x0,[x21, #0x2e0]
71017c8cf8  add x8,x21,#0x2c0
71017c8cfc  cmp x8,x0
71017c8d00  b.eq 0x71017c8d14
71017c8d04  cbz x0,0x71017c8d20
71017c8d08  ldr x8,[x0]
71017c8d0c  ldr x8,[x8, #0x28]
71017c8d10  b 0x71017c8d1c
71017c8d14  ldr x8,[x0]
71017c8d18  ldr x8,[x8, #0x20]
71017c8d1c  blr x8
71017c8d20  ldr x0,[x21, #0x2b0]
71017c8d24  add x8,x21,#0x290
71017c8d28  cmp x8,x0
71017c8d2c  b.eq 0x71017c8d40
71017c8d30  cbz x0,0x71017c8d4c
71017c8d34  ldr x8,[x0]
71017c8d38  ldr x8,[x8, #0x28]
71017c8d3c  b 0x71017c8d48
71017c8d40  ldr x8,[x0]
71017c8d44  ldr x8,[x8, #0x20]
71017c8d48  blr x8
71017c8d4c  ldr x0,[x21, #0x280]
71017c8d50  add x8,x21,#0x260
71017c8d54  cmp x8,x0
71017c8d58  b.eq 0x71017c8d6c
71017c8d5c  cbz x0,0x71017c8d78
71017c8d60  ldr x8,[x0]
71017c8d64  ldr x8,[x8, #0x28]
71017c8d68  b 0x71017c8d74
71017c8d6c  ldr x8,[x0]
71017c8d70  ldr x8,[x8, #0x20]
71017c8d74  blr x8
71017c8d78  ldr x0,[x21, #0x250]
71017c8d7c  add x8,x21,#0x230
71017c8d80  cmp x8,x0
71017c8d84  b.eq 0x71017c8d98
71017c8d88  cbz x0,0x71017c8da4
71017c8d8c  ldr x8,[x0]
71017c8d90  ldr x8,[x8, #0x28]
71017c8d94  b 0x71017c8da0
71017c8d98  ldr x8,[x0]
71017c8d9c  ldr x8,[x8, #0x20]
71017c8da0  blr x8
71017c8da4  mov x0,x21
71017c8da8  bl 0x710392eb40
71017c8dac  ldr x0,[sp, #0x300]
71017c8db0  mov x8,sp
71017c8db4  add x8,x8,#0x2e0
71017c8db8  cmp x8,x0
71017c8dbc  b.eq 0x71017c8dd0
71017c8dc0  cbz x0,0x71017c8ddc
71017c8dc4  ldr x8,[x0]
71017c8dc8  ldr x8,[x8, #0x28]
71017c8dcc  b 0x71017c8dd8
71017c8dd0  ldr x8,[x0]
71017c8dd4  ldr x8,[x8, #0x20]
71017c8dd8  blr x8
71017c8ddc  ldr x0,[sp, #0x2d0]
71017c8de0  mov x8,sp
71017c8de4  add x8,x8,#0x2b0
71017c8de8  cmp x8,x0
71017c8dec  b.eq 0x71017c8e00
71017c8df0  cbz x0,0x71017c8e0c
71017c8df4  ldr x8,[x0]
71017c8df8  ldr x8,[x8, #0x28]
71017c8dfc  b 0x71017c8e08
71017c8e00  ldr x8,[x0]
71017c8e04  ldr x8,[x8, #0x20]
71017c8e08  blr x8
71017c8e0c  ldr x0,[sp, #0x2a0]
71017c8e10  mov x8,sp
71017c8e14  add x8,x8,#0x280
71017c8e18  cmp x8,x0
71017c8e1c  b.eq 0x71017c8e30
71017c8e20  cbz x0,0x71017c8e3c
71017c8e24  ldr x8,[x0]
71017c8e28  ldr x8,[x8, #0x28]
71017c8e2c  b 0x71017c8e38
71017c8e30  ldr x8,[x0]
71017c8e34  ldr x8,[x8, #0x20]
71017c8e38  blr x8
71017c8e3c  ldr x0,[sp, #0x270]
71017c8e40  mov x8,sp
71017c8e44  add x8,x8,#0x250
71017c8e48  cmp x8,x0
71017c8e4c  b.eq 0x71017c8e60
71017c8e50  cbz x0,0x71017c8e6c
71017c8e54  ldr x8,[x0]
71017c8e58  ldr x8,[x8, #0x28]
71017c8e5c  b 0x71017c8e68
71017c8e60  ldr x8,[x0]
71017c8e64  ldr x8,[x8, #0x20]
71017c8e68  blr x8
71017c8e6c  ldr x0,[sp, #0x240]
71017c8e70  mov x8,sp
71017c8e74  add x8,x8,#0x220
71017c8e78  cmp x8,x0
71017c8e7c  b.eq 0x71017c8e90
71017c8e80  cbz x0,0x71017c8e9c
71017c8e84  ldr x8,[x0]
71017c8e88  ldr x8,[x8, #0x28]
71017c8e8c  b 0x71017c8e98
71017c8e90  ldr x8,[x0]
71017c8e94  ldr x8,[x8, #0x20]
71017c8e98  blr x8
71017c8e9c  add sp,sp,#0x320
71017c8ea0  ldp x29,x30,[sp, #0x20]
71017c8ea4  ldp x20,x19,[sp, #0x10]
71017c8ea8  ldp x28,x21,[sp], #0x30
71017c8eac  ret
71017c8eb0  bl 0x71039c2650
