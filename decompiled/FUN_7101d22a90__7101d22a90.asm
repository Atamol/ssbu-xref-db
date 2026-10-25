// addr:      7101d22a90
// offset:    0x1d22a90
// name:      FUN_7101d22a90
// mangled:   
// size:      1620

7101d22a90  sub sp,sp,#0x120
7101d22a94  str d8,[sp, #0xd0]
7101d22a98  stp x28,x23,[sp, #0xe0]
7101d22a9c  stp x22,x21,[sp, #0xf0]
7101d22aa0  stp x20,x19,[sp, #0x100]
7101d22aa4  stp x29,x30,[sp, #0x110]
7101d22aa8  add x29,sp,#0x110
7101d22aac  ldr w8,[x0, #0xbc]
7101d22ab0  mov x19,x0
7101d22ab4  cbz w8,0x7101d22ac0
7101d22ab8  add x22,x19,#0xc8
7101d22abc  b 0x7101d22c28
7101d22ac0  ldr w8,[x19, #0xe8]
7101d22ac4  cmp w8,#0x2
7101d22ac8  b.hi 0x7101d22b90
7101d22acc  adrp x8,0x710532f000
7101d22ad0  ldr x8,[x8, #0x8d0]
7101d22ad4  ldr x0,[x8, #0x8]
7101d22ad8  ldrb w8,[x0, #0x191]
7101d22adc  cbnz w8,0x7101d22b5c
7101d22ae0  mov x20,#0x8465
7101d22ae4  movk x20,#0x9f1d, LSL #16
7101d22ae8  movk x20,#0x15, LSL #32
7101d22aec  mov w2,#0x4
7101d22af0  mov x1,x20
7101d22af4  bl 0x7103313f20
7101d22af8  tbz w0,#0x0,0x7101d22b5c
7101d22afc  add x0,sp,#0x80
7101d22b00  mov x1,x20
7101d22b04  bl 0x71024076d0
7101d22b08  ldr x8,[sp, #0x90]
7101d22b0c  adrp x9,0x7104f73000
7101d22b10  add x9,x9,#0xd50
7101d22b14  str x9,[sp, #0x88]
7101d22b18  cbz x8,0x7101d22b88
7101d22b1c  adrp x8,0x7106dd5000
7101d22b20  ldrb w8,[x8, #0x3a8]
7101d22b24  cmp w8,#0x1
7101d22b28  b.ne 0x7101d22b88
7101d22b2c  adrp x9,0x7106dd5000
7101d22b30  ldr w8,[sp, #0x98]
7101d22b34  ldr w9,[x9, #0x3ac]
7101d22b38  cmp w8,w9
7101d22b3c  b.ne 0x7101d22b88
7101d22b40  ldr x8,[sp, #0x90]
7101d22b44  ldr wzr,[x8, #0x38]!
7101d22b48  ldaxr w9,[x8]
7101d22b4c  sub w9,w9,#0x1
7101d22b50  stlxr w10,w9,[x8]
7101d22b54  cbnz w10,0x7101d22b48
7101d22b58  b 0x7101d22b88
7101d22b5c  mov x8,#0x650000000000
7101d22b60  movk x8,#0x87, LSL #48
7101d22b64  strb wzr,[sp, #0xa0]
7101d22b68  stp xzr,x8,[sp, #0x90]
7101d22b6c  mov x8,#-0x1
7101d22b70  stp x8,xzr,[sp, #0xa8]
7101d22b74  adrp x8,0x7104f73000
7101d22b78  add x8,x8,#0xd50
7101d22b7c  str wzr,[sp, #0x80]
7101d22b80  str xzr,[sp, #0xb8]
7101d22b84  str x8,[sp, #0x88]
7101d22b88  str xzr,[sp, #0x90]
7101d22b8c  strb wzr,[sp, #0xa0]
7101d22b90  bl 0x7101d240d0
7101d22b94  and w8,w0,#0x1
7101d22b98  mov w21,w0
7101d22b9c  strb w8,[x19, #0x108]
7101d22ba0  bl 0x7101d23c80
7101d22ba4  mov w20,w0
7101d22ba8  tbz w21,#0x0,0x7101d22bb4
7101d22bac  mov w8,#0xffffec78
7101d22bb0  add w20,w20,w8
7101d22bb4  mov x22,x19
7101d22bb8  ldr x0,[x22, #0xc8]!
7101d22bbc  adrp x1,0x71042a3000
7101d22bc0  add x1,x1,#0x2d3
7101d22bc4  sub x8,x29,#0x50
7101d22bc8  bl 0x7103776910
7101d22bcc  sub x0,x29,#0x50
7101d22bd0  mov w1,#0x1
7101d22bd4  mov w2,w20
7101d22bd8  bl 0x710377a310
7101d22bdc  ldur x0,[x29, #-0x48]
7101d22be0  adrp x21,0x710523d000
7101d22be4  add x21,x21,#0x9a8
7101d22be8  stp x21,xzr,[x29, #-0x50]
7101d22bec  cbz x0,0x7101d22bf4
7101d22bf0  bl 0x710392eb40
7101d22bf4  ldr x0,[x22]
7101d22bf8  adrp x1,0x7104401000
7101d22bfc  add x1,x1,#0x7d8
7101d22c00  sub x8,x29,#0x50
7101d22c04  bl 0x7103776910
7101d22c08  sub x0,x29,#0x50
7101d22c0c  mov w1,#0x1
7101d22c10  mov w2,w20
7101d22c14  bl 0x710377a310
7101d22c18  ldur x0,[x29, #-0x48]
7101d22c1c  stp x21,xzr,[x29, #-0x50]
7101d22c20  cbz x0,0x7101d22c28
7101d22c24  bl 0x710392eb40
7101d22c28  ldr x0,[x22]
7101d22c2c  adrp x1,0x710432a000
7101d22c30  add x1,x1,#0x291
7101d22c34  sub x8,x29,#0x50
7101d22c38  bl 0x71037780e0
7101d22c3c  ldur x20,[x29, #-0x48]
7101d22c40  ldr x0,[x20, #0x8]
7101d22c44  cbz x0,0x7101d22c5c
7101d22c48  ldr x8,[x0]
7101d22c4c  ldr x8,[x8, #0x198]
7101d22c50  blr x8
7101d22c54  mov v8.16B,v0.16B
7101d22c58  b 0x7101d22c60
7101d22c5c  fmov s8,wzr
7101d22c60  adrp x8,0x710523d000
7101d22c64  add x8,x8,#0x9e8
7101d22c68  stp x8,xzr,[x29, #-0x50]
7101d22c6c  cbz x20,0x7101d22c78
7101d22c70  mov x0,x20
7101d22c74  bl 0x710392eb40
7101d22c78  fmov s0,0x41a00000
7101d22c7c  fcmp s8,s0
7101d22c80  b.ne 0x7101d22e40
7101d22c84  adrp x23,0x710532f000
7101d22c88  ldr x8,[x23, #0x8d0]
7101d22c8c  ldr x0,[x8, #0x8]
7101d22c90  ldrb w8,[x0, #0x191]
7101d22c94  mov w21,#0x6500
7101d22c98  movk w21,#0x87, LSL #16
7101d22c9c  cbnz w8,0x7101d22d1c
7101d22ca0  mov x20,#0x1361
7101d22ca4  movk x20,#0xa306, LSL #16
7101d22ca8  movk x20,#0x17, LSL #32
7101d22cac  mov w2,#0x4
7101d22cb0  mov x1,x20
7101d22cb4  bl 0x7103313f20
7101d22cb8  tbz w0,#0x0,0x7101d22d1c
7101d22cbc  add x0,sp,#0x40
7101d22cc0  mov x1,x20
7101d22cc4  bl 0x71024076d0
7101d22cc8  ldr x8,[sp, #0x50]
7101d22ccc  adrp x9,0x7104f73000
7101d22cd0  add x9,x9,#0xd50
7101d22cd4  str x9,[sp, #0x48]
7101d22cd8  cbz x8,0x7101d22d40
7101d22cdc  adrp x8,0x7106dd5000
7101d22ce0  ldrb w8,[x8, #0x3a8]
7101d22ce4  cmp w8,#0x1
7101d22ce8  b.ne 0x7101d22d40
7101d22cec  adrp x9,0x7106dd5000
7101d22cf0  ldr w8,[sp, #0x58]
7101d22cf4  ldr w9,[x9, #0x3ac]
7101d22cf8  cmp w8,w9
7101d22cfc  b.ne 0x7101d22d40
7101d22d00  ldr x8,[sp, #0x50]
7101d22d04  ldr wzr,[x8, #0x38]!
7101d22d08  ldaxr w9,[x8]
7101d22d0c  sub w9,w9,#0x1
7101d22d10  stlxr w10,w9,[x8]
7101d22d14  cbnz w10,0x7101d22d08
7101d22d18  b 0x7101d22d40
7101d22d1c  mov x8,#-0x1
7101d22d20  stp x8,xzr,[sp, #0x68]
7101d22d24  adrp x8,0x7104f73000
7101d22d28  add x8,x8,#0xd50
7101d22d2c  stp wzr,w21,[sp, #0x58]
7101d22d30  strb wzr,[sp, #0x60]
7101d22d34  str wzr,[sp, #0x40]
7101d22d38  str xzr,[sp, #0x78]
7101d22d3c  stp x8,xzr,[sp, #0x48]
7101d22d40  str xzr,[sp, #0x50]
7101d22d44  strb wzr,[sp, #0x60]
7101d22d48  ldr w8,[x19, #0xe8]
7101d22d4c  cmp w8,#0x1
7101d22d50  b.eq 0x7101d22e40
7101d22d54  adrp x9,0x7105239000
7101d22d58  add x9,x9,#0x1c0
7101d22d5c  ldp w8,w10,[x9]
7101d22d60  str w10,[x9]
7101d22d64  ldp w10,w11,[x9, #0x8]
7101d22d68  eor w8,w8,w8, LSL #0xb
7101d22d6c  eor w8,w8,w8, LSR #0x8
7101d22d70  stp w10,w11,[x9, #0x4]
7101d22d74  ldr x10,[x23, #0x8d0]
7101d22d78  eor w8,w8,w11
7101d22d7c  eor w8,w8,w11, LSR #0x13
7101d22d80  str w8,[x9, #0xc]
7101d22d84  ldr x0,[x10, #0x8]
7101d22d88  ldrb w9,[x0, #0x191]
7101d22d8c  cbnz w9,0x7101d22e14
7101d22d90  and w8,w8,#0x3
7101d22d94  adrp x9,0x7104471000
7101d22d98  add x9,x9,#0x4e0
7101d22d9c  eor w8,w8,#0x2
7101d22da0  ldr x20,[x9, w8, UXTW #0x3]
7101d22da4  mov w2,#0x4
7101d22da8  mov x1,x20
7101d22dac  bl 0x7103313f20
7101d22db0  tbz w0,#0x0,0x7101d22e14
7101d22db4  mov x0,sp
7101d22db8  mov x1,x20
7101d22dbc  bl 0x71024076d0
7101d22dc0  ldr x8,[sp, #0x10]
7101d22dc4  adrp x9,0x7104f73000
7101d22dc8  add x9,x9,#0xd50
7101d22dcc  str x9,[sp, #0x8]
7101d22dd0  cbz x8,0x7101d22e38
7101d22dd4  adrp x8,0x7106dd5000
7101d22dd8  ldrb w8,[x8, #0x3a8]
7101d22ddc  cmp w8,#0x1
7101d22de0  b.ne 0x7101d22e38
7101d22de4  adrp x9,0x7106dd5000
7101d22de8  ldr w8,[sp, #0x18]
7101d22dec  ldr w9,[x9, #0x3ac]
7101d22df0  cmp w8,w9
7101d22df4  b.ne 0x7101d22e38
7101d22df8  ldr x8,[sp, #0x10]
7101d22dfc  ldr wzr,[x8, #0x38]!
7101d22e00  ldaxr w9,[x8]
7101d22e04  sub w9,w9,#0x1
7101d22e08  stlxr w10,w9,[x8]
7101d22e0c  cbnz w10,0x7101d22e00
7101d22e10  b 0x7101d22e38
7101d22e14  mov x8,#-0x1
7101d22e18  stp x8,xzr,[sp, #0x28]
7101d22e1c  adrp x8,0x7104f73000
7101d22e20  add x8,x8,#0xd50
7101d22e24  stp wzr,w21,[sp, #0x18]
7101d22e28  strb wzr,[sp, #0x20]
7101d22e2c  str wzr,[sp]
7101d22e30  str xzr,[sp, #0x38]
7101d22e34  stp x8,xzr,[sp, #0x8]
7101d22e38  str xzr,[sp, #0x10]
7101d22e3c  strb wzr,[sp, #0x20]
7101d22e40  ldr x0,[x19, #0xd8]
7101d22e44  bl 0x7101d20830
7101d22e48  ldrb w8,[x19, #0x108]
7101d22e4c  ldr w20,[x19, #0xec]
7101d22e50  cbz w8,0x7101d22ef4
7101d22e54  ldr x8,[x22]
7101d22e58  ldr x8,[x8, #0x8]
7101d22e5c  ldr x21,[x8, #0x8]
7101d22e60  cbz x21,0x7101d22ebc
7101d22e64  adrp x1,0x710425f000
7101d22e68  add x1,x1,#0x69d
7101d22e6c  mov x0,x21
7101d22e70  bl 0x71037964b0
7101d22e74  cbz x0,0x7101d22e98
7101d22e78  ldr x8,[x0]
7101d22e7c  ldr x8,[x8, #0x138]
7101d22e80  blr x8
7101d22e84  tbz w0,#0x0,0x7101d22f90
7101d22e88  ldr x8,[x22]
7101d22e8c  ldr x8,[x8, #0x8]
7101d22e90  ldr x21,[x8, #0x8]
7101d22e94  cbz x21,0x7101d22ebc
7101d22e98  adrp x1,0x710432a000
7101d22e9c  add x1,x1,#0x291
7101d22ea0  mov x0,x21
7101d22ea4  bl 0x71037964b0
7101d22ea8  cbz x0,0x7101d22ebc
7101d22eac  ldr x8,[x0]
7101d22eb0  ldr x8,[x8, #0x138]
7101d22eb4  blr x8
7101d22eb8  tbz w0,#0x0,0x7101d22f90
7101d22ebc  ldr x9,[x19, #0xd0]
7101d22ec0  ldr x0,[x9]
7101d22ec4  ldrb w9,[x0, #0x90]
7101d22ec8  cmp w9,#0x0
7101d22ecc  mov w10,#0x9c
7101d22ed0  mov w11,#0x94
7101d22ed4  csel x10,x11,x10,eq
7101d22ed8  ldr w10,[x0, x10, LSL #0x0]
7101d22edc  mov w8,#0xffffec78
7101d22ee0  add w1,w20,w8
7101d22ee4  cmp w10,w1
7101d22ee8  ccmp w9,#0x0,#0x0,ne
7101d22eec  b.eq 0x7101d22f8c
7101d22ef0  b 0x7101d22f90
7101d22ef4  ldr x8,[x22]
7101d22ef8  ldr x8,[x8, #0x8]
7101d22efc  ldr x21,[x8, #0x8]
7101d22f00  cbz x21,0x7101d22f5c
7101d22f04  adrp x1,0x710425f000
7101d22f08  add x1,x1,#0x69d
7101d22f0c  mov x0,x21
7101d22f10  bl 0x71037964b0
7101d22f14  cbz x0,0x7101d22f38
7101d22f18  ldr x8,[x0]
7101d22f1c  ldr x8,[x8, #0x138]
7101d22f20  blr x8
7101d22f24  tbz w0,#0x0,0x7101d22f90
7101d22f28  ldr x8,[x22]
7101d22f2c  ldr x8,[x8, #0x8]
7101d22f30  ldr x21,[x8, #0x8]
7101d22f34  cbz x21,0x7101d22f5c
7101d22f38  adrp x1,0x710432a000
7101d22f3c  add x1,x1,#0x291
7101d22f40  mov x0,x21
7101d22f44  bl 0x71037964b0
7101d22f48  cbz x0,0x7101d22f5c
7101d22f4c  ldr x8,[x0]
7101d22f50  ldr x8,[x8, #0x138]
7101d22f54  blr x8
7101d22f58  tbz w0,#0x0,0x7101d22f90
7101d22f5c  ldr x8,[x19, #0xd0]
7101d22f60  ldr x0,[x8]
7101d22f64  ldrb w8,[x0, #0x90]
7101d22f68  cmp w8,#0x0
7101d22f6c  mov w9,#0x9c
7101d22f70  mov w10,#0x94
7101d22f74  csel x9,x10,x9,eq
7101d22f78  ldr w9,[x0, x9, LSL #0x0]
7101d22f7c  cmp w9,w20
7101d22f80  ccmp w8,#0x0,#0x0,ne
7101d22f84  b.ne 0x7101d22f90
7101d22f88  mov w1,w20
7101d22f8c  bl 0x7103399f50
7101d22f90  ldrb w9,[x19, #0x108]
7101d22f94  ldrb w8,[x19, #0x100]
7101d22f98  ldr x20,[x19, #0xf8]
7101d22f9c  cbz w9,0x7101d23030
7101d22fa0  cbnz w8,0x7101d23008
7101d22fa4  bl 0x71039c07b0
7101d22fa8  adrp x8,0x7107447000
7101d22fac  ldr x8,[x8, #0xe8]
7101d22fb0  sub x0,x0,x8
7101d22fb4  bl 0x71039c0c80
7101d22fb8  and x8,x0,#0xffffffff
7101d22fbc  asr x9,x0,#0x20
7101d22fc0  mov w10,#0xf7cf
7101d22fc4  movk w10,#0xe353, LSL #16
7101d22fc8  mul x11,x9,x10
7101d22fcc  mul x10,x8,x10
7101d22fd0  add x10,x11,x10, LSR #0x20
7101d22fd4  mov w11,#0x9ba5
7101d22fd8  movk w11,#0x20c4, LSL #16
7101d22fdc  mul x9,x9,x11
7101d22fe0  mul x8,x8,x11
7101d22fe4  add x8,x8,w10, UXTW 
7101d22fe8  add x9,x9,x10, ASR #0x20
7101d22fec  add x8,x9,x8, LSR #0x20
7101d22ff0  mov w9,#0x3e8
7101d22ff4  asr x8,x8,#0x7
7101d22ff8  add x8,x8,x0, LSR #0x3f
7101d22ffc  madd x8,x8,x9,x20
7101d23000  ldr x9,[x19, #0xf0]
7101d23004  sub x20,x8,x9
7101d23008  mov w8,#0x5e00
7101d2300c  movk w8,#0xb2d0, LSL #16
7101d23010  cmp x20,x8
7101d23014  b.cc 0x7101d230c4
7101d23018  ldrsw x8,[x19, #0xb4]
7101d2301c  cmp w8,#0x13
7101d23020  b.cs 0x7101d230e0
7101d23024  add x8,x19,x8, LSL #0x2
7101d23028  mov w9,#0x2
7101d2302c  b 0x7101d230c0
7101d23030  cbnz w8,0x7101d23098
7101d23034  bl 0x71039c07b0
7101d23038  adrp x8,0x7107447000
7101d2303c  ldr x8,[x8, #0xe8]
7101d23040  sub x0,x0,x8
7101d23044  bl 0x71039c0c80
7101d23048  and x8,x0,#0xffffffff
7101d2304c  asr x9,x0,#0x20
7101d23050  mov w10,#0xf7cf
7101d23054  movk w10,#0xe353, LSL #16
7101d23058  mul x11,x9,x10
7101d2305c  mul x10,x8,x10
7101d23060  add x10,x11,x10, LSR #0x20
7101d23064  mov w11,#0x9ba5
7101d23068  movk w11,#0x20c4, LSL #16
7101d2306c  mul x9,x9,x11
7101d23070  mul x8,x8,x11
7101d23074  add x8,x8,w10, UXTW 
7101d23078  add x9,x9,x10, ASR #0x20
7101d2307c  add x8,x9,x8, LSR #0x20
7101d23080  mov w9,#0x3e8
7101d23084  asr x8,x8,#0x7
7101d23088  add x8,x8,x0, LSR #0x3f
7101d2308c  madd x8,x8,x9,x20
7101d23090  ldr x9,[x19, #0xf0]
7101d23094  sub x20,x8,x9
7101d23098  mov x8,#0xf200
7101d2309c  movk x8,#0x2a05, LSL #16
7101d230a0  movk x8,#0x1, LSL #32
7101d230a4  cmp x20,x8
7101d230a8  b.cc 0x7101d230c4
7101d230ac  ldrsw x8,[x19, #0xb4]
7101d230b0  cmp w8,#0x13
7101d230b4  b.cs 0x7101d230e0
7101d230b8  add x8,x19,x8, LSL #0x2
7101d230bc  orr w9,wzr,#0x3
7101d230c0  str w9,[x8, #0x68]
7101d230c4  ldr d8,[sp, #0xd0]
7101d230c8  ldp x29,x30,[sp, #0x110]
7101d230cc  ldp x20,x19,[sp, #0x100]
7101d230d0  ldp x22,x21,[sp, #0xf0]
7101d230d4  ldp x28,x23,[sp, #0xe0]
7101d230d8  add sp,sp,#0x120
7101d230dc  ret
7101d230e0  bl 0x71039c2650
