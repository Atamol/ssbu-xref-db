// addr:      7101c198c0
// offset:    0x1c198c0
// name:      FUN_7101c198c0
// mangled:   
// size:      5988

7101c198c0  str d8,[sp, #-0x70]!
7101c198c4  stp x28,x27,[sp, #0x10]
7101c198c8  stp x26,x25,[sp, #0x20]
7101c198cc  stp x24,x23,[sp, #0x30]
7101c198d0  stp x22,x21,[sp, #0x40]
7101c198d4  stp x20,x19,[sp, #0x50]
7101c198d8  stp x29,x30,[sp, #0x60]
7101c198dc  add x29,sp,#0x60
7101c198e0  sub sp,sp,#0x830
7101c198e4  ldr w8,[x0, #0x154]
7101c198e8  cbnz w8,0x7101c1afec
7101c198ec  ldr w8,[x0, #0x158]
7101c198f0  mov x19,x0
7101c198f4  add x21,x0,#0x170
7101c198f8  cmp w8,#0x0
7101c198fc  b.gt 0x7101c19914
7101c19900  ldr x8,[x21]
7101c19904  ldr x0,[x8]
7101c19908  mov w2,#0x1014
7101c1990c  mov w1,wzr
7101c19910  bl 0x7103775dc0
7101c19914  ldr x20,[x19, #0x170]
7101c19918  ldr x24,[x20]
7101c1991c  mov x25,x24
7101c19920  ldr x0,[x25], #0x8
7101c19924  mov w1,wzr
7101c19928  bl 0x71037760f0
7101c1992c  ldr x8,[x20]
7101c19930  ldr x8,[x8]
7101c19934  ldr x8,[x8, #0x600]
7101c19938  mov w9,#0x20
7101c1993c  str w9,[x8, #0x10]
7101c19940  ldr x8,[x20]
7101c19944  ldr x8,[x8]
7101c19948  ldr x8,[x8, #0x600]
7101c1994c  mov w9,#0x40
7101c19950  str w9,[x8, #0x14]
7101c19954  ldr w8,[x19, #0xc]
7101c19958  cmp w8,#0x33
7101c1995c  b.cs 0x7101c1b010
7101c19960  ldr x9,[x20]
7101c19964  ldr x9,[x9]
7101c19968  ldr x9,[x9, #0x600]
7101c1996c  mov w10,#0x12
7101c19970  movk w10,#0x20, LSL #16
7101c19974  str w10,[x9, x8, LSL #0x2]
7101c19978  ldr w8,[x19, #0x10]
7101c1997c  cmp w8,#0x33
7101c19980  b.cs 0x7101c1b010
7101c19984  ldr x9,[x20]
7101c19988  ldr x9,[x9]
7101c1998c  ldr x9,[x9, #0x600]
7101c19990  mov w10,#0x18
7101c19994  movk w10,#0x80, LSL #16
7101c19998  str w10,[x9, x8, LSL #0x2]
7101c1999c  ldr w8,[x19, #0x8]
7101c199a0  cmp w8,#0x33
7101c199a4  b.cs 0x7101c1b010
7101c199a8  ldr x9,[x20]
7101c199ac  ldr x9,[x9]
7101c199b0  ldr x9,[x9, #0x600]
7101c199b4  mov w10,#0x80
7101c199b8  str w10,[x9, x8, LSL #0x2]
7101c199bc  strb wzr,[x19, #0x218]
7101c199c0  ldr x0,[x24, #0x10]
7101c199c4  adrp x1,0x710434a000
7101c199c8  add x1,x1,#0x26a
7101c199cc  bl 0x7103778760
7101c199d0  ldr x0,[x24, #0x10]
7101c199d4  adrp x1,0x7104443000
7101c199d8  add x1,x1,#0x665
7101c199dc  bl 0x7103778760
7101c199e0  strb wzr,[x19, #0x219]
7101c199e4  ldr x0,[x24, #0x10]
7101c199e8  adrp x1,0x7104443000
7101c199ec  add x1,x1,#0x681
7101c199f0  bl 0x7103778760
7101c199f4  mov w26,#0x101
7101c199f8  add x8,sp,#0x5cb
7101c199fc  str xzr,[sp, #0x6c0]
7101c19a00  strh w26,[sp, #0x6c8]
7101c19a04  stur wzr,[x8, #0xff]
7101c19a08  mov w8,#0x1
7101c19a0c  str w8,[sp, #0x6d0]
7101c19a10  mov x20,#0x41f0000000000000
7101c19a14  add x22,sp,#0x10
7101c19a18  strh w8,[sp, #0x6d4]
7101c19a1c  add x0,sp,#0x10
7101c19a20  strb w8,[sp, #0x6d6]
7101c19a24  add x8,sp,#0x6c0
7101c19a28  add x1,x8,#0xc0
7101c19a2c  adrp x8,0x7105186000
7101c19a30  add x8,x8,#0xd0
7101c19a34  strh wzr,[sp, #0x6ce]
7101c19a38  str x20,[sp, #0x6d8]
7101c19a3c  str wzr,[sp, #0x6e0]
7101c19a40  str xzr,[sp, #0x710]
7101c19a44  str xzr,[sp, #0x740]
7101c19a48  str xzr,[sp, #0x770]
7101c19a4c  str xzr,[sp, #0x7a0]
7101c19a50  str xzr,[sp, #0x7d0]
7101c19a54  str wzr,[sp, #0x7e0]
7101c19a58  str x8,[sp, #0x10]
7101c19a5c  str x22,[sp, #0x30]
7101c19a60  bl 0x7101989a30
7101c19a64  ldr x0,[sp, #0x30]
7101c19a68  cmp x22,x0
7101c19a6c  b.eq 0x7101c19a80
7101c19a70  cbz x0,0x7101c19a8c
7101c19a74  ldr x8,[x0]
7101c19a78  ldr x8,[x8, #0x28]
7101c19a7c  b 0x7101c19a88
7101c19a80  ldr x8,[x0]
7101c19a84  ldr x8,[x8, #0x20]
7101c19a88  blr x8
7101c19a8c  add x22,x19,#0x1a8
7101c19a90  adrp x2,0x7104307000
7101c19a94  add x2,x2,#0x72
7101c19a98  add x3,sp,#0x6c0
7101c19a9c  mov x0,x22
7101c19aa0  mov x1,x25
7101c19aa4  bl 0x7103770b30
7101c19aa8  adrp x2,0x7104348000
7101c19aac  add x2,x2,#0xcf6
7101c19ab0  mov w1,#0x1
7101c19ab4  mov x0,x22
7101c19ab8  mov w23,#0x1
7101c19abc  bl 0x71037717d0
7101c19ac0  adrp x2,0x71043ae000
7101c19ac4  add x2,x2,#0xcc
7101c19ac8  mov w1,#0x2
7101c19acc  mov x0,x22
7101c19ad0  bl 0x71037717d0
7101c19ad4  ldr w2,[x19, #0x8]
7101c19ad8  ldr x0,[x19, #0x1a8]
7101c19adc  mov w1,#0x2
7101c19ae0  mov w3,wzr
7101c19ae4  bl 0x7103771930
7101c19ae8  ldr x0,[x19, #0x1a8]
7101c19aec  bl 0x710376b960
7101c19af0  add x22,x19,#0x1b0
7101c19af4  add x8,sp,#0x49b
7101c19af8  adrp x2,0x710424f000
7101c19afc  add x2,x2,#0xd71
7101c19b00  add x3,sp,#0x590
7101c19b04  str xzr,[sp, #0x590]
7101c19b08  mov x0,x22
7101c19b0c  mov x1,x25
7101c19b10  strh w26,[sp, #0x598]
7101c19b14  stur wzr,[x8, #0xff]
7101c19b18  strh wzr,[sp, #0x59e]
7101c19b1c  str w23,[sp, #0x5a0]
7101c19b20  strh w23,[sp, #0x5a4]
7101c19b24  strb w23,[sp, #0x5a6]
7101c19b28  str x20,[sp, #0x5a8]
7101c19b2c  str wzr,[sp, #0x5b0]
7101c19b30  str xzr,[sp, #0x5e0]
7101c19b34  str xzr,[sp, #0x610]
7101c19b38  str xzr,[sp, #0x640]
7101c19b3c  str xzr,[sp, #0x670]
7101c19b40  str xzr,[sp, #0x6a0]
7101c19b44  str wzr,[sp, #0x6b0]
7101c19b48  strb w23,[sp, #0x59a]
7101c19b4c  bl 0x7103770b30
7101c19b50  adrp x2,0x7104422000
7101c19b54  add x2,x2,#0x8b8
7101c19b58  mov x0,x22
7101c19b5c  mov w1,wzr
7101c19b60  bl 0x71037717d0
7101c19b64  ldr w2,[x19, #0xc]
7101c19b68  ldr x0,[x19, #0x1b0]
7101c19b6c  mov w1,wzr
7101c19b70  mov w3,wzr
7101c19b74  bl 0x7103771930
7101c19b78  ldr x0,[x19, #0x1b0]
7101c19b7c  bl 0x710376b960
7101c19b80  ldr x0,[x19, #0x1b0]
7101c19b84  ldr x8,[x0]
7101c19b88  ldr x8,[x8, #0x70]
7101c19b8c  mov w1,#0x1
7101c19b90  blr x8
7101c19b94  ldr x1,[x19, #0x1b0]
7101c19b98  add x0,sp,#0x580
7101c19b9c  mov w2,wzr
7101c19ba0  bl 0x7103771d60
7101c19ba4  ldr x8,[sp, #0x588]
7101c19ba8  ldr x8,[x8]
7101c19bac  cbz x8,0x7101c19bb8
7101c19bb0  ldr x1,[x8, #0x88]
7101c19bb4  b 0x7101c19bc0
7101c19bb8  adrp x1,0x7104867000
7101c19bbc  add x1,x1,#0xc2e
7101c19bc0  add x8,sp,#0x570
7101c19bc4  mov x0,x25
7101c19bc8  mov w27,#0x9dc5
7101c19bcc  movk w27,#0x811c, LSL #16
7101c19bd0  bl 0x7103776640
7101c19bd4  fmov s8,0x3f800000
7101c19bd8  ldr x0,[sp, #0x578]
7101c19bdc  adrp x1,0x7104422000
7101c19be0  add x1,x1,#0x34e
7101c19be4  mov v0.16B,v8.16B
7101c19be8  bl 0x7103778300
7101c19bec  ldr x0,[x24, #0x10]
7101c19bf0  mov v0.16B,v8.16B
7101c19bf4  adrp x1,0x7104292000
7101c19bf8  add x1,x1,#0x1b0
7101c19bfc  str x24,[sp, #0x8]
7101c19c00  bl 0x7103778300
7101c19c04  mov x9,#0x6573
7101c19c08  movk x9,#0x5f74, LSL #16
7101c19c0c  mov x10,#0x5f73
7101c19c10  movk x10,#0x7573, LSL #16
7101c19c14  mov x8,#0x1100000000
7101c19c18  movk x9,#0x6170, LSL #32
7101c19c1c  movk x9,#0x7472, LSL #48
7101c19c20  stp x8,x9,[sp, #0x10]
7101c19c24  movk x10,#0x6d62, LSL #32
7101c19c28  movk x10,#0x6e65, LSL #48
7101c19c2c  str x10,[sp, #0x20]
7101c19c30  mov w11,#0x75
7101c19c34  mov w9,#0x73
7101c19c38  strh w11,[sp, #0x28]
7101c19c3c  mov w8,#0x9
7101c19c40  mov w28,#0x89
7101c19c44  add x10,sp,#0x10
7101c19c48  mov w11,w27
7101c19c4c  mul w11,w11,w28
7101c19c50  and w9,w9,#0xff
7101c19c54  eor w11,w11,w9
7101c19c58  ldrb w9,[x10, x8, LSL ]
7101c19c5c  add x8,x8,#0x1
7101c19c60  cbnz w9,0x7101c19c4c
7101c19c64  str w11,[sp, #0x10]
7101c19c68  str xzr,[sp, #0x568]
7101c19c6c  add x2,sp,#0x10
7101c19c70  str xzr,[sp, #0x560]
7101c19c74  add x3,sp,#0x558
7101c19c78  mov w4,#0x1
7101c19c7c  str xzr,[sp, #0x558]
7101c19c80  ldr x0,[x19, #0x200]
7101c19c84  mov x1,x21
7101c19c88  mov w5,wzr
7101c19c8c  mov w6,wzr
7101c19c90  bl 0x71032d6470
7101c19c94  ldr x21,[x19, #0x1e0]
7101c19c98  ldr x8,[x19, #0x1f0]
7101c19c9c  subs x8,x8,x21
7101c19ca0  str x21,[x19, #0x1e8]
7101c19ca4  b.ls 0x7101c19cbc
7101c19ca8  str wzr,[x21]
7101c19cac  ldr x8,[x19, #0x1e8]
7101c19cb0  add x8,x8,#0x4
7101c19cb4  str x8,[x19, #0x1e8]
7101c19cb8  b 0x7101c19d58
7101c19cbc  asr x9,x8,#0x2
7101c19cc0  orr x10,xzr,#0x1ffffffffffffffe
7101c19cc4  cmp x9,x10
7101c19cc8  b.hi 0x7101c19ce4
7101c19ccc  asr x9,x8,#0x1
7101c19cd0  cmp x8,#0x0
7101c19cd4  csinc x20,x9,xzr,ne
7101c19cd8  lsr x8,x20,#0x3e
7101c19cdc  cbz x8,0x7101c19ce8
7101c19ce0  b 0x7101c1b010
7101c19ce4  orr x20,xzr,#0x3fffffffffffffff
7101c19ce8  lsl x8,x20,#0x2
7101c19cec  cmp x8,#0x0
7101c19cf0  csinc x22,x8,xzr,ne
7101c19cf4  mov w0,#0x10
7101c19cf8  mov x1,x22
7101c19cfc  bl 0x710392e290
7101c19d00  cbnz x0,0x7101c19d34
7101c19d04  adrp x8,0x7105332000
7101c19d08  ldr x0,[x8, #0xf00]
7101c19d0c  stur wzr,[x29, #-0xa0]
7101c19d10  str x22,[sp, #0x10]
7101c19d14  ldr x8,[x0]
7101c19d18  ldr x8,[x8, #0x30]
7101c19d1c  sub x1,x29,#0xa0
7101c19d20  add x2,sp,#0x10
7101c19d24  blr x8
7101c19d28  mov w0,#0x10
7101c19d2c  mov x1,x22
7101c19d30  bl 0x710392e290
7101c19d34  mov x8,x0
7101c19d38  add x9,x0,x20, LSL #0x2
7101c19d3c  str wzr,[x8], #0x4
7101c19d40  stp x0,x8,[x19, #0x1e0]
7101c19d44  str x9,[x19, #0x1f0]
7101c19d48  cbz x21,0x7101c19d58
7101c19d4c  mov x0,x21
7101c19d50  bl 0x710392eb40
7101c19d54  ldr x8,[x19, #0x1e8]
7101c19d58  ldr x9,[x19, #0x1f0]
7101c19d5c  add x21,x19,#0x1e0
7101c19d60  stur x25,[x29, #-0x58]
7101c19d64  cmp x8,x9
7101c19d68  b.cs 0x7101c19d84
7101c19d6c  mov w9,#0x1
7101c19d70  str w9,[x8]
7101c19d74  ldr x8,[x19, #0x1e8]
7101c19d78  add x8,x8,#0x4
7101c19d7c  str x8,[x19, #0x1e8]
7101c19d80  b 0x7101c19e70
7101c19d84  ldr x22,[x21]
7101c19d88  sub x23,x8,x22
7101c19d8c  asr x20,x23,#0x2
7101c19d90  add x8,x20,#0x1
7101c19d94  lsr x10,x8,#0x3e
7101c19d98  cbnz x10,0x7101c1b014
7101c19d9c  sub x9,x9,x22
7101c19da0  asr x10,x9,#0x2
7101c19da4  orr x11,xzr,#0x1ffffffffffffffe
7101c19da8  cmp x10,x11
7101c19dac  b.hi 0x7101c19dcc
7101c19db0  asr x9,x9,#0x1
7101c19db4  cmp x9,x8
7101c19db8  csel x26,x8,x9,cc
7101c19dbc  cbz x26,0x7101c19e30
7101c19dc0  lsr x8,x26,#0x3e
7101c19dc4  cbz x8,0x7101c19dd0
7101c19dc8  b 0x7101c1b010
7101c19dcc  orr x26,xzr,#0x3fffffffffffffff
7101c19dd0  lsl x8,x26,#0x2
7101c19dd4  cmp x8,#0x0
7101c19dd8  csinc x25,x8,xzr,ne
7101c19ddc  mov w0,#0x10
7101c19de0  mov x1,x25
7101c19de4  bl 0x710392e290
7101c19de8  mov x24,x0
7101c19dec  cbnz x0,0x7101c19e34
7101c19df0  adrp x8,0x7105332000
7101c19df4  ldr x0,[x8, #0xf00]
7101c19df8  cbz x0,0x7101c19e30
7101c19dfc  stur wzr,[x29, #-0xa0]
7101c19e00  str x25,[sp, #0x10]
7101c19e04  ldr x8,[x0]
7101c19e08  ldr x8,[x8, #0x30]
7101c19e0c  sub x1,x29,#0xa0
7101c19e10  add x2,sp,#0x10
7101c19e14  blr x8
7101c19e18  tbz w0,#0x0,0x7101c19e30
7101c19e1c  mov w0,#0x10
7101c19e20  mov x1,x25
7101c19e24  bl 0x710392e290
7101c19e28  mov x24,x0
7101c19e2c  cbnz x0,0x7101c19e34
7101c19e30  mov x24,xzr
7101c19e34  add x20,x24,x20, LSL #0x2
7101c19e38  mov w8,#0x1
7101c19e3c  add x25,x24,x26, LSL #0x2
7101c19e40  str w8,[x20], #0x4
7101c19e44  cmp x23,#0x1
7101c19e48  b.lt 0x7101c19e5c
7101c19e4c  mov x0,x24
7101c19e50  mov x1,x22
7101c19e54  mov x2,x23
7101c19e58  bl 0x71039c00e0
7101c19e5c  stp x24,x20,[x19, #0x1e0]
7101c19e60  str x25,[x19, #0x1f0]
7101c19e64  cbz x22,0x7101c19e70
7101c19e68  mov x0,x22
7101c19e6c  bl 0x710392eb40
7101c19e70  adrp x8,0x710523d000
7101c19e74  ldr w8,[x8, #0xc]
7101c19e78  cmp w8,#0xd
7101c19e7c  b.hi 0x7101c19f9c
7101c19e80  mov w9,#0x3801
7101c19e84  lsr w8,w9,w8
7101c19e88  tbz w8,#0x0,0x7101c19f9c
7101c19e8c  ldp x9,x8,[x19, #0x1e8]
7101c19e90  cmp x9,x8
7101c19e94  b.cs 0x7101c19eb0
7101c19e98  mov w8,#0x2
7101c19e9c  str w8,[x9]
7101c19ea0  ldr x8,[x19, #0x1e8]
7101c19ea4  add x8,x8,#0x4
7101c19ea8  str x8,[x19, #0x1e8]
7101c19eac  b 0x7101c19f9c
7101c19eb0  ldr x22,[x21]
7101c19eb4  sub x23,x9,x22
7101c19eb8  asr x20,x23,#0x2
7101c19ebc  add x9,x20,#0x1
7101c19ec0  lsr x10,x9,#0x3e
7101c19ec4  cbnz x10,0x7101c1b014
7101c19ec8  sub x8,x8,x22
7101c19ecc  asr x10,x8,#0x2
7101c19ed0  orr x11,xzr,#0x1ffffffffffffffe
7101c19ed4  cmp x10,x11
7101c19ed8  b.hi 0x7101c19ef8
7101c19edc  asr x8,x8,#0x1
7101c19ee0  cmp x8,x9
7101c19ee4  csel x26,x9,x8,cc
7101c19ee8  cbz x26,0x7101c19f5c
7101c19eec  lsr x8,x26,#0x3e
7101c19ef0  cbz x8,0x7101c19efc
7101c19ef4  b 0x7101c1b010
7101c19ef8  orr x26,xzr,#0x3fffffffffffffff
7101c19efc  lsl x8,x26,#0x2
7101c19f00  cmp x8,#0x0
7101c19f04  csinc x25,x8,xzr,ne
7101c19f08  mov w0,#0x10
7101c19f0c  mov x1,x25
7101c19f10  bl 0x710392e290
7101c19f14  mov x24,x0
7101c19f18  cbnz x0,0x7101c19f60
7101c19f1c  adrp x8,0x7105332000
7101c19f20  ldr x0,[x8, #0xf00]
7101c19f24  cbz x0,0x7101c19f5c
7101c19f28  stur wzr,[x29, #-0xa0]
7101c19f2c  str x25,[sp, #0x10]
7101c19f30  ldr x8,[x0]
7101c19f34  ldr x8,[x8, #0x30]
7101c19f38  sub x1,x29,#0xa0
7101c19f3c  add x2,sp,#0x10
7101c19f40  blr x8
7101c19f44  tbz w0,#0x0,0x7101c19f5c
7101c19f48  mov w0,#0x10
7101c19f4c  mov x1,x25
7101c19f50  bl 0x710392e290
7101c19f54  mov x24,x0
7101c19f58  cbnz x0,0x7101c19f60
7101c19f5c  mov x24,xzr
7101c19f60  add x20,x24,x20, LSL #0x2
7101c19f64  mov w8,#0x2
7101c19f68  add x25,x24,x26, LSL #0x2
7101c19f6c  str w8,[x20], #0x4
7101c19f70  cmp x23,#0x1
7101c19f74  b.lt 0x7101c19f88
7101c19f78  mov x0,x24
7101c19f7c  mov x1,x22
7101c19f80  mov x2,x23
7101c19f84  bl 0x71039c00e0
7101c19f88  stp x24,x20,[x19, #0x1e0]
7101c19f8c  str x25,[x19, #0x1f0]
7101c19f90  cbz x22,0x7101c19f9c
7101c19f94  mov x0,x22
7101c19f98  bl 0x710392eb40
7101c19f9c  ldp x9,x8,[x19, #0x1e8]
7101c19fa0  cmp x9,x8
7101c19fa4  b.cs 0x7101c19fc8
7101c19fa8  orr w8,wzr,#0x3
7101c19fac  str w8,[x9]
7101c19fb0  ldr x8,[x19, #0x1e8]
7101c19fb4  add x8,x8,#0x4
7101c19fb8  str x8,[x19, #0x1e8]
7101c19fbc  ldrb w8,[x19, #0x719]
7101c19fc0  cbnz w8,0x7101c1a0bc
7101c19fc4  b 0x7101c1a1cc
7101c19fc8  ldr x22,[x21]
7101c19fcc  sub x23,x9,x22
7101c19fd0  asr x20,x23,#0x2
7101c19fd4  add x9,x20,#0x1
7101c19fd8  lsr x10,x9,#0x3e
7101c19fdc  cbnz x10,0x7101c1b014
7101c19fe0  sub x8,x8,x22
7101c19fe4  asr x10,x8,#0x2
7101c19fe8  orr x11,xzr,#0x1ffffffffffffffe
7101c19fec  cmp x10,x11
7101c19ff0  b.hi 0x7101c1a010
7101c19ff4  asr x8,x8,#0x1
7101c19ff8  cmp x8,x9
7101c19ffc  csel x26,x9,x8,cc
7101c1a000  cbz x26,0x7101c1a074
7101c1a004  lsr x8,x26,#0x3e
7101c1a008  cbz x8,0x7101c1a014
7101c1a00c  b 0x7101c1b010
7101c1a010  orr x26,xzr,#0x3fffffffffffffff
7101c1a014  lsl x8,x26,#0x2
7101c1a018  cmp x8,#0x0
7101c1a01c  csinc x25,x8,xzr,ne
7101c1a020  mov w0,#0x10
7101c1a024  mov x1,x25
7101c1a028  bl 0x710392e290
7101c1a02c  mov x24,x0
7101c1a030  cbnz x0,0x7101c1a078
7101c1a034  adrp x8,0x7105332000
7101c1a038  ldr x0,[x8, #0xf00]
7101c1a03c  cbz x0,0x7101c1a074
7101c1a040  stur wzr,[x29, #-0xa0]
7101c1a044  str x25,[sp, #0x10]
7101c1a048  ldr x8,[x0]
7101c1a04c  ldr x8,[x8, #0x30]
7101c1a050  sub x1,x29,#0xa0
7101c1a054  add x2,sp,#0x10
7101c1a058  blr x8
7101c1a05c  tbz w0,#0x0,0x7101c1a074
7101c1a060  mov w0,#0x10
7101c1a064  mov x1,x25
7101c1a068  bl 0x710392e290
7101c1a06c  mov x24,x0
7101c1a070  cbnz x0,0x7101c1a078
7101c1a074  mov x24,xzr
7101c1a078  add x20,x24,x20, LSL #0x2
7101c1a07c  orr w8,wzr,#0x3
7101c1a080  add x25,x24,x26, LSL #0x2
7101c1a084  str w8,[x20], #0x4
7101c1a088  cmp x23,#0x1
7101c1a08c  b.lt 0x7101c1a0a0
7101c1a090  mov x0,x24
7101c1a094  mov x1,x22
7101c1a098  mov x2,x23
7101c1a09c  bl 0x71039c00e0
7101c1a0a0  stp x24,x20,[x19, #0x1e0]
7101c1a0a4  str x25,[x19, #0x1f0]
7101c1a0a8  cbz x22,0x7101c1a0b4
7101c1a0ac  mov x0,x22
7101c1a0b0  bl 0x710392eb40
7101c1a0b4  ldrb w8,[x19, #0x719]
7101c1a0b8  cbz w8,0x7101c1a1cc
7101c1a0bc  ldp x9,x8,[x19, #0x1e8]
7101c1a0c0  cmp x9,x8
7101c1a0c4  b.cs 0x7101c1a0e0
7101c1a0c8  mov w8,#0x4
7101c1a0cc  str w8,[x9]
7101c1a0d0  ldr x8,[x19, #0x1e8]
7101c1a0d4  add x8,x8,#0x4
7101c1a0d8  str x8,[x19, #0x1e8]
7101c1a0dc  b 0x7101c1a1cc
7101c1a0e0  ldr x22,[x21]
7101c1a0e4  sub x23,x9,x22
7101c1a0e8  asr x20,x23,#0x2
7101c1a0ec  add x9,x20,#0x1
7101c1a0f0  lsr x10,x9,#0x3e
7101c1a0f4  cbnz x10,0x7101c1b014
7101c1a0f8  sub x8,x8,x22
7101c1a0fc  asr x10,x8,#0x2
7101c1a100  orr x11,xzr,#0x1ffffffffffffffe
7101c1a104  cmp x10,x11
7101c1a108  b.hi 0x7101c1a128
7101c1a10c  asr x8,x8,#0x1
7101c1a110  cmp x8,x9
7101c1a114  csel x25,x9,x8,cc
7101c1a118  cbz x25,0x7101c1a18c
7101c1a11c  lsr x8,x25,#0x3e
7101c1a120  cbz x8,0x7101c1a12c
7101c1a124  b 0x7101c1b010
7101c1a128  orr x25,xzr,#0x3fffffffffffffff
7101c1a12c  lsl x8,x25,#0x2
7101c1a130  cmp x8,#0x0
7101c1a134  csinc x24,x8,xzr,ne
7101c1a138  mov w0,#0x10
7101c1a13c  mov x1,x24
7101c1a140  bl 0x710392e290
7101c1a144  mov x21,x0
7101c1a148  cbnz x0,0x7101c1a190
7101c1a14c  adrp x8,0x7105332000
7101c1a150  ldr x0,[x8, #0xf00]
7101c1a154  cbz x0,0x7101c1a18c
7101c1a158  stur wzr,[x29, #-0xa0]
7101c1a15c  str x24,[sp, #0x10]
7101c1a160  ldr x8,[x0]
7101c1a164  ldr x8,[x8, #0x30]
7101c1a168  sub x1,x29,#0xa0
7101c1a16c  add x2,sp,#0x10
7101c1a170  blr x8
7101c1a174  tbz w0,#0x0,0x7101c1a18c
7101c1a178  mov w0,#0x10
7101c1a17c  mov x1,x24
7101c1a180  bl 0x710392e290
7101c1a184  mov x21,x0
7101c1a188  cbnz x0,0x7101c1a190
7101c1a18c  mov x21,xzr
7101c1a190  add x20,x21,x20, LSL #0x2
7101c1a194  mov w8,#0x4
7101c1a198  add x24,x21,x25, LSL #0x2
7101c1a19c  str w8,[x20], #0x4
7101c1a1a0  cmp x23,#0x1
7101c1a1a4  b.lt 0x7101c1a1b8
7101c1a1a8  mov x0,x21
7101c1a1ac  mov x1,x22
7101c1a1b0  mov x2,x23
7101c1a1b4  bl 0x71039c00e0
7101c1a1b8  stp x21,x20,[x19, #0x1e0]
7101c1a1bc  str x24,[x19, #0x1f0]
7101c1a1c0  cbz x22,0x7101c1a1cc
7101c1a1c4  mov x0,x22
7101c1a1c8  bl 0x710392eb40
7101c1a1cc  str xzr,[sp, #0x550]
7101c1a1d0  str xzr,[sp, #0x548]
7101c1a1d4  str xzr,[sp, #0x540]
7101c1a1d8  ldp x21,x22,[x19, #0x1e0]
7101c1a1dc  cmp x21,x22
7101c1a1e0  b.eq 0x7101c1a4dc
7101c1a1e4  add x8,sp,#0x10
7101c1a1e8  add x24,x8,#0x9
7101c1a1ec  add x25,x8,#0x8
7101c1a1f0  mov w23,#0x6f73
7101c1a1f4  mov w26,#0x6d
7101c1a1f8  adrp x20,0x71044f9000
7101c1a1fc  add x20,x20,#0x174
7101c1a200  ldr w8,[x21]
7101c1a204  cmp w8,#0x4
7101c1a208  b.hi 0x7101c1a474
7101c1a20c  ldrsw x8,[x20, x8, LSL #0x2]
7101c1a210  add x8,x8,x20
7101c1a214  br x8
7101c1a218  mov x8,#0x1500000000
7101c1a21c  str x8,[sp, #0x10]
7101c1a220  mov x8,#0x656d
7101c1a224  movk x8,#0x5f6c, LSL #16
7101c1a228  movk x8,#0x7572, LSL #32
7101c1a22c  movk x8,#0x656c, LSL #48
7101c1a230  str x8,[sp, #0x18]
7101c1a234  mov x8,#0x735f
7101c1a238  movk x8,#0x6c65, LSL #16
7101c1a23c  movk x8,#0x6365, LSL #32
7101c1a240  movk x8,#0x5f74, LSL #48
7101c1a244  str x8,[sp, #0x20]
7101c1a248  mov x8,x24
7101c1a24c  mov w10,w26
7101c1a250  mov w9,w27
7101c1a254  mov w11,#0x7472
7101c1a258  movk w11,#0x30, LSL #16
7101c1a25c  strh w23,[sp, #0x28]
7101c1a260  stur w11,[sp, #0x2a]
7101c1a264  mul w9,w9,w28
7101c1a268  and w10,w10,#0xff
7101c1a26c  eor w9,w9,w10
7101c1a270  ldrb w10,[x8], #0x1
7101c1a274  cbnz w10,0x7101c1a264
7101c1a278  b 0x7101c1a408
7101c1a27c  mov x8,#0x1500000000
7101c1a280  str x8,[sp, #0x10]
7101c1a284  mov x8,#0x656d
7101c1a288  movk x8,#0x5f6c, LSL #16
7101c1a28c  movk x8,#0x7572, LSL #32
7101c1a290  movk x8,#0x656c, LSL #48
7101c1a294  str x8,[sp, #0x18]
7101c1a298  mov x8,#0x735f
7101c1a29c  movk x8,#0x6c65, LSL #16
7101c1a2a0  movk x8,#0x6365, LSL #32
7101c1a2a4  movk x8,#0x5f74, LSL #48
7101c1a2a8  str x8,[sp, #0x20]
7101c1a2ac  mov x8,x24
7101c1a2b0  mov w10,w26
7101c1a2b4  mov w9,w27
7101c1a2b8  mov w11,#0x7472
7101c1a2bc  movk w11,#0x34, LSL #16
7101c1a2c0  strh w23,[sp, #0x28]
7101c1a2c4  stur w11,[sp, #0x2a]
7101c1a2c8  mul w9,w9,w28
7101c1a2cc  and w10,w10,#0xff
7101c1a2d0  eor w9,w9,w10
7101c1a2d4  ldrb w10,[x8], #0x1
7101c1a2d8  cbnz w10,0x7101c1a2c8
7101c1a2dc  b 0x7101c1a408
7101c1a2e0  mov x8,#0x1500000000
7101c1a2e4  str x8,[sp, #0x10]
7101c1a2e8  mov x8,#0x656d
7101c1a2ec  movk x8,#0x5f6c, LSL #16
7101c1a2f0  movk x8,#0x7572, LSL #32
7101c1a2f4  movk x8,#0x656c, LSL #48
7101c1a2f8  str x8,[sp, #0x18]
7101c1a2fc  mov x8,#0x735f
7101c1a300  movk x8,#0x6c65, LSL #16
7101c1a304  movk x8,#0x6365, LSL #32
7101c1a308  movk x8,#0x5f74, LSL #48
7101c1a30c  str x8,[sp, #0x20]
7101c1a310  mov x8,x24
7101c1a314  mov w10,w26
7101c1a318  mov w9,w27
7101c1a31c  mov w11,#0x7472
7101c1a320  movk w11,#0x32, LSL #16
7101c1a324  strh w23,[sp, #0x28]
7101c1a328  stur w11,[sp, #0x2a]
7101c1a32c  mul w9,w9,w28
7101c1a330  and w10,w10,#0xff
7101c1a334  eor w9,w9,w10
7101c1a338  ldrb w10,[x8], #0x1
7101c1a33c  cbnz w10,0x7101c1a32c
7101c1a340  b 0x7101c1a408
7101c1a344  mov x8,#0x1500000000
7101c1a348  str x8,[sp, #0x10]
7101c1a34c  mov x8,#0x656d
7101c1a350  movk x8,#0x5f6c, LSL #16
7101c1a354  movk x8,#0x7572, LSL #32
7101c1a358  movk x8,#0x656c, LSL #48
7101c1a35c  str x8,[sp, #0x18]
7101c1a360  mov x8,#0x735f
7101c1a364  movk x8,#0x6c65, LSL #16
7101c1a368  movk x8,#0x6365, LSL #32
7101c1a36c  movk x8,#0x5f74, LSL #48
7101c1a370  str x8,[sp, #0x20]
7101c1a374  mov x8,x24
7101c1a378  mov w10,w26
7101c1a37c  mov w9,w27
7101c1a380  mov w11,#0x7472
7101c1a384  movk w11,#0x33, LSL #16
7101c1a388  strh w23,[sp, #0x28]
7101c1a38c  stur w11,[sp, #0x2a]
7101c1a390  mul w9,w9,w28
7101c1a394  and w10,w10,#0xff
7101c1a398  eor w9,w9,w10
7101c1a39c  ldrb w10,[x8], #0x1
7101c1a3a0  cbnz w10,0x7101c1a390
7101c1a3a4  b 0x7101c1a408
7101c1a3a8  mov x8,#0x1500000000
7101c1a3ac  str x8,[sp, #0x10]
7101c1a3b0  mov x8,#0x656d
7101c1a3b4  movk x8,#0x5f6c, LSL #16
7101c1a3b8  movk x8,#0x7572, LSL #32
7101c1a3bc  movk x8,#0x656c, LSL #48
7101c1a3c0  str x8,[sp, #0x18]
7101c1a3c4  mov x8,#0x735f
7101c1a3c8  movk x8,#0x6c65, LSL #16
7101c1a3cc  movk x8,#0x6365, LSL #32
7101c1a3d0  movk x8,#0x5f74, LSL #48
7101c1a3d4  str x8,[sp, #0x20]
7101c1a3d8  mov x8,x24
7101c1a3dc  mov w10,w26
7101c1a3e0  mov w9,w27
7101c1a3e4  mov w11,#0x7472
7101c1a3e8  movk w11,#0x31, LSL #16
7101c1a3ec  strh w23,[sp, #0x28]
7101c1a3f0  stur w11,[sp, #0x2a]
7101c1a3f4  mul w9,w9,w28
7101c1a3f8  and w10,w10,#0xff
7101c1a3fc  eor w9,w9,w10
7101c1a400  ldrb w10,[x8], #0x1
7101c1a404  cbnz w10,0x7101c1a3f4
7101c1a408  str w9,[sp, #0x10]
7101c1a40c  ldr x8,[sp, #0x548]
7101c1a410  ldr x9,[sp, #0x550]
7101c1a414  cmp x8,x9
7101c1a418  b.cs 0x7101c1a464
7101c1a41c  mov x10,x8
7101c1a420  mov x9,xzr
7101c1a424  str wzr,[x10], #0x8
7101c1a428  add x11,x25,x9
7101c1a42c  ldrb w12,[x11]
7101c1a430  cbz w12,0x7101c1a48c
7101c1a434  strb w12,[x10, x9, LSL ]
7101c1a438  ldrb w13,[x11, #0x1]
7101c1a43c  cbz w13,0x7101c1a480
7101c1a440  add x12,x10,x9
7101c1a444  strb w13,[x12, #0x1]
7101c1a448  ldrb w11,[x11, #0x2]
7101c1a44c  cbz w11,0x7101c1a488
7101c1a450  add x9,x9,#0x3
7101c1a454  cmp w9,#0x3f
7101c1a458  strb w11,[x12, #0x2]
7101c1a45c  b.cc 0x7101c1a428
7101c1a460  b 0x7101c1a48c
7101c1a464  add x0,sp,#0x540
7101c1a468  add x1,sp,#0x10
7101c1a46c  bl 0x71019c1c50
7101c1a470  b 0x7101c1a4d0
7101c1a474  strb wzr,[sp, #0x18]
7101c1a478  str xzr,[sp, #0x10]
7101c1a47c  b 0x7101c1a40c
7101c1a480  add x9,x9,#0x1
7101c1a484  b 0x7101c1a48c
7101c1a488  add x9,x9,#0x2
7101c1a48c  add x10,x8,#0x8
7101c1a490  strb wzr,[x10, w9, UXTW ]
7101c1a494  str w9,[x8, #0x4]
7101c1a498  ldrb w9,[x8, #0x8]
7101c1a49c  mov w11,w27
7101c1a4a0  cbz w9,0x7101c1a4c0
7101c1a4a4  add x10,x8,#0x9
7101c1a4a8  mov w11,w27
7101c1a4ac  mul w11,w11,w28
7101c1a4b0  and w9,w9,#0xff
7101c1a4b4  eor w11,w11,w9
7101c1a4b8  ldrb w9,[x10], #0x1
7101c1a4bc  cbnz w9,0x7101c1a4ac
7101c1a4c0  str w11,[x8]
7101c1a4c4  ldr x8,[sp, #0x548]
7101c1a4c8  add x8,x8,#0x48
7101c1a4cc  str x8,[sp, #0x548]
7101c1a4d0  add x21,x21,#0x4
7101c1a4d4  cmp x21,x22
7101c1a4d8  b.ne 0x7101c1a200
7101c1a4dc  add x8,sp,#0x510
7101c1a4e0  add x0,x8,#0x20
7101c1a4e4  str xzr,[sp, #0x520]
7101c1a4e8  str xzr,[sp, #0x528]
7101c1a4ec  bl 0x7103776290
7101c1a4f0  str xzr,[sp, #0x510]
7101c1a4f4  str wzr,[sp, #0x518]
7101c1a4f8  adrp x20,0x71052a8000
7101c1a4fc  ldr x20,[x20, #0xa80]
7101c1a500  ldur x26,[x29, #-0x58]
7101c1a504  ldr q0,[x20]
7101c1a508  ldr x8,[sp, #0x538]
7101c1a50c  adrp x1,0x71043ae000
7101c1a510  add x1,x1,#0xcc
7101c1a514  str q0,[sp, #0x520]
7101c1a518  str xzr,[x8, #0x8]
7101c1a51c  add x8,sp,#0x10
7101c1a520  mov x0,x26
7101c1a524  bl 0x7103776640
7101c1a528  ldr x8,[sp, #0x18]
7101c1a52c  ldr x21,[sp, #0x538]
7101c1a530  str xzr,[sp, #0x18]
7101c1a534  str x8,[sp, #0x538]
7101c1a538  cbz x21,0x7101c1a55c
7101c1a53c  ldr x0,[x21, #0x18]
7101c1a540  adrp x8,0x710523d000
7101c1a544  add x8,x8,#0x9a8
7101c1a548  stp x8,xzr,[x21, #0x10]
7101c1a54c  cbz x0,0x7101c1a554
7101c1a550  bl 0x710392eb40
7101c1a554  mov x0,x21
7101c1a558  bl 0x710392eb40
7101c1a55c  adrp x23,0x710523d000
7101c1a560  add x23,x23,#0x988
7101c1a564  adrp x1,0x71042c4000
7101c1a568  add x1,x1,#0xec7
7101c1a56c  add x8,sp,#0x10
7101c1a570  mov x0,x26
7101c1a574  stp x23,xzr,[sp, #0x10]
7101c1a578  bl 0x7103776910
7101c1a57c  ldr x0,[sp, #0x18]
7101c1a580  ldr x8,[x0]
7101c1a584  cbz x8,0x7101c1a5a0
7101c1a588  movi v0.2D,#0x0
7101c1a58c  add x9,x8,#0x30
7101c1a590  add x8,x8,#0x34
7101c1a594  ld1 {v0.S}[0],[x9]
7101c1a598  ld1 {v0.S}[1],[x8]
7101c1a59c  b 0x7101c1a5a4
7101c1a5a0  ldr q0,[x20]
7101c1a5a4  adrp x24,0x710523d000
7101c1a5a8  add x24,x24,#0x9a8
7101c1a5ac  stp x24,xzr,[sp, #0x10]
7101c1a5b0  str q0,[sp, #0x520]
7101c1a5b4  cbz x0,0x7101c1a5bc
7101c1a5b8  bl 0x710392eb40
7101c1a5bc  ldr x20,[sp, #0x548]
7101c1a5c0  ldr x22,[sp, #0x540]
7101c1a5c4  subs x21,x20,x22
7101c1a5c8  str xzr,[sp, #0x508]
7101c1a5cc  str xzr,[sp, #0x500]
7101c1a5d0  str xzr,[sp, #0x4f8]
7101c1a5d4  b.eq 0x7101c1a720
7101c1a5d8  mov x9,#0x8e39
7101c1a5dc  movk x9,#0x38e3, LSL #16
7101c1a5e0  asr x8,x21,#0x3
7101c1a5e4  movk x9,#0xe38e, LSL #32
7101c1a5e8  movk x9,#0x8e38, LSL #48
7101c1a5ec  mul x25,x8,x9
7101c1a5f0  mov x8,#0xe38f
7101c1a5f4  movk x8,#0x8e38, LSL #16
7101c1a5f8  movk x8,#0x38e3, LSL #32
7101c1a5fc  movk x8,#0x38e, LSL #48
7101c1a600  cmp x25,x8
7101c1a604  b.cs 0x7101c1b01c
7101c1a608  mov w0,#0x10
7101c1a60c  mov x1,x21
7101c1a610  bl 0x710392e290
7101c1a614  cbnz x0,0x7101c1a658
7101c1a618  adrp x8,0x7105332000
7101c1a61c  ldr x0,[x8, #0xf00]
7101c1a620  cbz x0,0x7101c1a654
7101c1a624  stur wzr,[x29, #-0xa0]
7101c1a628  str x21,[sp, #0x10]
7101c1a62c  ldr x8,[x0]
7101c1a630  ldr x8,[x8, #0x30]
7101c1a634  sub x1,x29,#0xa0
7101c1a638  add x2,sp,#0x10
7101c1a63c  blr x8
7101c1a640  tbz w0,#0x0,0x7101c1a654
7101c1a644  mov w0,#0x10
7101c1a648  mov x1,x21
7101c1a64c  bl 0x710392e290
7101c1a650  cbnz x0,0x7101c1a658
7101c1a654  mov x0,xzr
7101c1a658  mov w8,#0x48
7101c1a65c  madd x8,x25,x8,x0
7101c1a660  str x0,[sp, #0x500]
7101c1a664  str x0,[sp, #0x4f8]
7101c1a668  str x8,[sp, #0x508]
7101c1a66c  cmp x22,x20
7101c1a670  b.ne 0x7101c1a694
7101c1a674  b 0x7101c1a720
7101c1a678  str w10,[x0]
7101c1a67c  ldr x8,[sp, #0x500]
7101c1a680  add x0,x8,#0x48
7101c1a684  add x22,x22,#0x48
7101c1a688  str x0,[sp, #0x500]
7101c1a68c  cmp x22,x20
7101c1a690  b.eq 0x7101c1a720
7101c1a694  mov x9,x0
7101c1a698  mov x8,xzr
7101c1a69c  str wzr,[x9], #0x8
7101c1a6a0  add x10,x22,x8
7101c1a6a4  ldrb w11,[x10, #0x8]
7101c1a6a8  cbz w11,0x7101c1a6e8
7101c1a6ac  strb w11,[x9, x8, LSL ]
7101c1a6b0  ldrb w12,[x10, #0x9]
7101c1a6b4  cbz w12,0x7101c1a6dc
7101c1a6b8  add x11,x9,x8
7101c1a6bc  strb w12,[x11, #0x1]
7101c1a6c0  ldrb w10,[x10, #0xa]
7101c1a6c4  cbz w10,0x7101c1a6e4
7101c1a6c8  add x8,x8,#0x3
7101c1a6cc  cmp w8,#0x3f
7101c1a6d0  strb w10,[x11, #0x2]
7101c1a6d4  b.cc 0x7101c1a6a0
7101c1a6d8  b 0x7101c1a6e8
7101c1a6dc  add x8,x8,#0x1
7101c1a6e0  b 0x7101c1a6e8
7101c1a6e4  add x8,x8,#0x2
7101c1a6e8  add x9,x0,#0x8
7101c1a6ec  strb wzr,[x9, w8, UXTW ]
7101c1a6f0  str w8,[x0, #0x4]
7101c1a6f4  ldrb w8,[x0, #0x8]
7101c1a6f8  mov w10,w27
7101c1a6fc  cbz w8,0x7101c1a678
7101c1a700  add x9,x0,#0x9
7101c1a704  mov w10,w27
7101c1a708  mul w10,w10,w28
7101c1a70c  and w8,w8,#0xff
7101c1a710  eor w10,w10,w8
7101c1a714  ldrb w8,[x9], #0x1
7101c1a718  cbnz w8,0x7101c1a708
7101c1a71c  b 0x7101c1a678
7101c1a720  adrp x1,0x710436c000
7101c1a724  add x1,x1,#0xc09
7101c1a728  add x8,sp,#0x10
7101c1a72c  mov x0,x26
7101c1a730  add x21,x19,#0x1b8
7101c1a734  add x22,x19,#0x178
7101c1a738  bl 0x7103776640
7101c1a73c  add x2,sp,#0x4f8
7101c1a740  add x3,sp,#0x510
7101c1a744  add x4,sp,#0x10
7101c1a748  mov x0,x21
7101c1a74c  mov x1,x22
7101c1a750  bl 0x71032ccb70
7101c1a754  ldr x21,[sp, #0x18]
7101c1a758  stp x23,xzr,[sp, #0x10]
7101c1a75c  cbz x21,0x7101c1a778
7101c1a760  ldr x0,[x21, #0x18]
7101c1a764  stp x24,xzr,[x21, #0x10]
7101c1a768  cbz x0,0x7101c1a770
7101c1a76c  bl 0x710392eb40
7101c1a770  mov x0,x21
7101c1a774  bl 0x710392eb40
7101c1a778  ldr x0,[sp, #0x4f8]
7101c1a77c  cbz x0,0x7101c1a788
7101c1a780  str x0,[sp, #0x500]
7101c1a784  bl 0x710392eb40
7101c1a788  orr x8,xzr,#-0x100000000
7101c1a78c  add x25,sp,#0x10
7101c1a790  add x9,x25,#0x464
7101c1a794  str x8,[sp, #0x10]
7101c1a798  mov w8,#0xffffffff
7101c1a79c  mov x10,#-0x1
7101c1a7a0  str w8,[sp, #0x18]
7101c1a7a4  str xzr,[sp, #0x68]
7101c1a7a8  strh wzr,[sp, #0x70]
7101c1a7ac  strb wzr,[sp, #0x470]
7101c1a7b0  stur xzr,[sp, #0x21]
7101c1a7b4  stur xzr,[sp, #0x1c]
7101c1a7b8  str x10,[x9]
7101c1a7bc  add x9,x25,#0x46c
7101c1a7c0  str xzr,[x9]
7101c1a7c4  mov x9,#0x3c
7101c1a7c8  movk x9,#0x503, LSL #16
7101c1a7cc  movk x9,#0x2, LSL #48
7101c1a7d0  str w8,[sp, #0x4e8]
7101c1a7d4  adrp x8,0x710532f000
7101c1a7d8  ldr x8,[x8, #0x730]
7101c1a7dc  str x9,[sp, #0x4b8]
7101c1a7e0  mov x9,#0xa0000
7101c1a7e4  movk x9,#0x100, LSL #32
7101c1a7e8  movk x9,#0x1, LSL #48
7101c1a7ec  str x9,[sp, #0x4c0]
7101c1a7f0  mov w9,#0x103
7101c1a7f4  movk w9,#0x100, LSL #16
7101c1a7f8  str w9,[sp, #0x4c8]
7101c1a7fc  mov w9,#0x2
7101c1a800  strh wzr,[sp, #0x484]
7101c1a804  strh wzr,[sp, #0x4b4]
7101c1a808  strb wzr,[sp, #0x4b6]
7101c1a80c  strb w9,[sp, #0x4cc]
7101c1a810  str x10,[sp, #0x4e0]
7101c1a814  str x10,[sp, #0x4d8]
7101c1a818  str x10,[sp, #0x4d0]
7101c1a81c  cbz x8,0x7101c1a87c
7101c1a820  ldr x20,[x8, #0x8]
7101c1a824  ldr x22,[x20, #0x178]
7101c1a828  ldr x0,[x22, #0x8]
7101c1a82c  mov x1,#0x4f97
7101c1a830  movk x1,#0x5678, LSL #16
7101c1a834  movk x1,#0xd, LSL #32
7101c1a838  bl 0x71032b23e0
7101c1a83c  mov x21,x0
7101c1a840  mov x0,x22
7101c1a844  mov x1,x21
7101c1a848  bl 0x71032b1e40
7101c1a84c  tbnz w0,#0x1f,0x7101c1a87c
7101c1a850  ldr x0,[x20, #0x178]
7101c1a854  mov x1,x21
7101c1a858  bl 0x71032b1e40
7101c1a85c  lsr w9,w0,#0x5
7101c1a860  add x10,sp,#0x10
7101c1a864  add x9,x10,w9, UXTW  #0x2
7101c1a868  ldr w10,[x9, #0x4cc]
7101c1a86c  mov w8,#0x1
7101c1a870  lsl w8,w8,w0
7101c1a874  bic w8,w10,w8
7101c1a878  str w8,[x9, #0x4cc]
7101c1a87c  ldr w10,[sp, #0x10]
7101c1a880  mov w8,#0x1
7101c1a884  str w8,[sp, #0x4ec]
7101c1a888  str w10,[x19, #0x238]
7101c1a88c  ldr w10,[sp, #0x14]
7101c1a890  str w10,[x19, #0x23c]
7101c1a894  ldr x10,[sp, #0x18]
7101c1a898  add x9,x19,#0x238
7101c1a89c  add x22,x25,#0x4a4
7101c1a8a0  add x21,x25,#0x4c0
7101c1a8a4  add x20,x25,#0x4cc
7101c1a8a8  cmp x9,x25
7101c1a8ac  str x10,[x19, #0x240]
7101c1a8b0  b.eq 0x7101c1a9e0
7101c1a8b4  add x10,sp,#0x10
7101c1a8b8  mov x9,xzr
7101c1a8bc  add x1,x25,#0x474
7101c1a8c0  add x8,x25,#0x460
7101c1a8c4  add x10,x10,#0x18
7101c1a8c8  b 0x7101c1a8d4
7101c1a8cc  add x9,x9,#0x2
7101c1a8d0  strb w11,[x12, #0x251]
7101c1a8d4  add x11,x10,x9
7101c1a8d8  ldrb w13,[x11]
7101c1a8dc  cbz w13,0x7101c1a908
7101c1a8e0  add w14,w9,#0x1
7101c1a8e4  add x12,x19,x9
7101c1a8e8  cmp w14,#0x3f
7101c1a8ec  strb w13,[x12, #0x250]
7101c1a8f0  b.cs 0x7101c1a904
7101c1a8f4  ldrb w11,[x11, #0x1]
7101c1a8f8  cbnz w11,0x7101c1a8cc
7101c1a8fc  add x9,x9,#0x1
7101c1a900  b 0x7101c1a908
7101c1a904  add w9,w9,#0x1
7101c1a908  add x10,x19,#0x250
7101c1a90c  strb wzr,[x10, w9, UXTW ]
7101c1a910  str w9,[x19, #0x24c]
7101c1a914  ldrb w9,[x19, #0x250]
7101c1a918  mov w11,w27
7101c1a91c  cbz w9,0x7101c1a93c
7101c1a920  add x10,x19,#0x251
7101c1a924  mov w11,w27
7101c1a928  mul w11,w11,w28
7101c1a92c  and w9,w9,#0xff
7101c1a930  eor w11,w11,w9
7101c1a934  ldrb w9,[x10], #0x1
7101c1a938  cbnz w9,0x7101c1a928
7101c1a93c  add x10,sp,#0x10
7101c1a940  mov x9,xzr
7101c1a944  str w11,[x19, #0x248]
7101c1a948  add x10,x10,#0x60
7101c1a94c  b 0x7101c1a958
7101c1a950  add x9,x9,#0x2
7101c1a954  strh w11,[x12, #0x29a]
7101c1a958  add x11,x10,x9, LSL #0x1
7101c1a95c  ldrh w13,[x11]
7101c1a960  cbz w13,0x7101c1a98c
7101c1a964  add w14,w9,#0x1
7101c1a968  add x12,x19,x9, LSL #0x1
7101c1a96c  cmp w14,#0x1ff
7101c1a970  strh w13,[x12, #0x298]
7101c1a974  b.cs 0x7101c1a988
7101c1a978  ldrh w11,[x11, #0x2]
7101c1a97c  cbnz w11,0x7101c1a950
7101c1a980  add x9,x9,#0x1
7101c1a984  b 0x7101c1a98c
7101c1a988  add w9,w9,#0x1
7101c1a98c  add x10,x19,#0x298
7101c1a990  strh wzr,[x10, w9, UXTW #0x1]
7101c1a994  str w9,[x19, #0x294]
7101c1a998  ldrh w9,[x19, #0x298]
7101c1a99c  mov w11,w27
7101c1a9a0  cbz w9,0x7101c1a9c0
7101c1a9a4  add x10,x19,#0x29a
7101c1a9a8  mov w11,w27
7101c1a9ac  mul w11,w11,w28
7101c1a9b0  and w9,w9,#0xffff
7101c1a9b4  eor w11,w11,w9
7101c1a9b8  ldrh w9,[x10], #0x2
7101c1a9bc  cbnz w9,0x7101c1a9ac
7101c1a9c0  str w11,[x19, #0x290]
7101c1a9c4  ldr x9,[x8]
7101c1a9c8  ldr w8,[x8, #0x8]
7101c1a9cc  add x0,x19,#0x6a4
7101c1a9d0  str w8,[x19, #0x6a0]
7101c1a9d4  str x9,[x19, #0x698]
7101c1a9d8  bl 0x7101696040
7101c1a9dc  ldr w8,[sp, #0x4ec]
7101c1a9e0  ldr x12,[x22, #0x10]
7101c1a9e4  ldp x10,x11,[x22]
7101c1a9e8  add x13,x19,#0x6ec
7101c1a9ec  add x9,x19,#0x6dc
7101c1a9f0  str x12,[x13]
7101c1a9f4  add x12,x19,#0x6e4
7101c1a9f8  str x11,[x12]
7101c1a9fc  str x10,[x9]
7101c1aa00  ldrb w9,[sp, #0x4cc]
7101c1aa04  strb w9,[x19, #0x6f4]
7101c1aa08  ldr x9,[x21]
7101c1aa0c  ldr w10,[x21, #0x8]
7101c1aa10  str w10,[x19, #0x700]
7101c1aa14  str x9,[x19, #0x6f8]
7101c1aa18  ldp x10,x11,[x20]
7101c1aa1c  add x9,x19,#0x704
7101c1aa20  add x12,x19,#0x70c
7101c1aa24  str x11,[x12]
7101c1aa28  str x10,[x9]
7101c1aa2c  str w8,[x19, #0x714]
7101c1aa30  ldr x8,[x19, #0x198]
7101c1aa34  add x21,x19,#0x198
7101c1aa38  cbz x8,0x7101c1aa60
7101c1aa3c  ldp x8,x9,[x19, #0x180]
7101c1aa40  sub x8,x9,x8
7101c1aa44  mov w9,#0xe593
7101c1aa48  movk w9,#0x592f, LSL #16
7101c1aa4c  lsr x8,x8,#0x3
7101c1aa50  mul w1,w8,w9
7101c1aa54  mov x0,x21
7101c1aa58  bl 0x7103783690
7101c1aa5c  b 0x7101c1ac74
7101c1aa60  mov x8,#0x41800000
7101c1aa64  movk x8,#0x4248, LSL #48
7101c1aa68  mov x9,#0x3f800000
7101c1aa6c  stp xzr,x8,[sp, #0x10]
7101c1aa70  mov w8,#0x1
7101c1aa74  strb w8,[sp, #0x2a]
7101c1aa78  add x8,sp,#0x10
7101c1aa7c  movk x9,#0x101, LSL #32
7101c1aa80  movk x9,#0x1, LSL #48
7101c1aa84  str x9,[sp, #0x20]
7101c1aa88  add x1,x8,#0x90
7101c1aa8c  adrp x8,0x7105186000
7101c1aa90  add x8,x8,#0x1f0
7101c1aa94  sub x20,x29,#0xa0
7101c1aa98  sub x0,x29,#0xa0
7101c1aa9c  strh wzr,[sp, #0x28]
7101c1aaa0  str xzr,[sp, #0x60]
7101c1aaa4  str xzr,[sp, #0x90]
7101c1aaa8  str xzr,[sp, #0xc0]
7101c1aaac  str xzr,[sp, #0xf0]
7101c1aab0  str xzr,[sp, #0x120]
7101c1aab4  strb wzr,[sp, #0x31]
7101c1aab8  sturh wzr,[sp, #0x2f]
7101c1aabc  stur wzr,[sp, #0x2b]
7101c1aac0  stur x8,[x29, #-0xa0]
7101c1aac4  stur x20,[x29, #-0x80]
7101c1aac8  bl 0x71003cb050
7101c1aacc  ldur x0,[x29, #-0x80]
7101c1aad0  cmp x20,x0
7101c1aad4  b.eq 0x7101c1aae8
7101c1aad8  cbz x0,0x7101c1aaf4
7101c1aadc  ldr x8,[x0]
7101c1aae0  ldr x8,[x8, #0x28]
7101c1aae4  b 0x7101c1aaf0
7101c1aae8  ldr x8,[x0]
7101c1aaec  ldr x8,[x8, #0x20]
7101c1aaf0  blr x8
7101c1aaf4  add x8,sp,#0x10
7101c1aaf8  add x1,x8,#0xc0
7101c1aafc  adrp x8,0x7105186000
7101c1ab00  add x8,x8,#0x238
7101c1ab04  sub x20,x29,#0xa0
7101c1ab08  stur x20,[x29, #-0x80]
7101c1ab0c  sub x0,x29,#0xa0
7101c1ab10  stur x8,[x29, #-0xa0]
7101c1ab14  bl 0x71003cb050
7101c1ab18  ldur x0,[x29, #-0x80]
7101c1ab1c  cmp x20,x0
7101c1ab20  b.eq 0x7101c1ab34
7101c1ab24  cbz x0,0x7101c1ab40
7101c1ab28  ldr x8,[x0]
7101c1ab2c  ldr x8,[x8, #0x28]
7101c1ab30  b 0x7101c1ab3c
7101c1ab34  ldr x8,[x0]
7101c1ab38  ldr x8,[x8, #0x20]
7101c1ab3c  blr x8
7101c1ab40  ldp x8,x9,[x19, #0x180]
7101c1ab44  strb wzr,[sp, #0x25]
7101c1ab48  sub x8,x9,x8
7101c1ab4c  mov w9,#0xe593
7101c1ab50  movk w9,#0x592f, LSL #16
7101c1ab54  lsr x8,x8,#0x3
7101c1ab58  mul w8,w8,w9
7101c1ab5c  str w8,[sp, #0x14]
7101c1ab60  mov w8,#0x101
7101c1ab64  adrp x2,0x710424f000
7101c1ab68  add x2,x2,#0xc05
7101c1ab6c  add x3,sp,#0x10
7101c1ab70  mov x0,x21
7101c1ab74  mov x1,x26
7101c1ab78  mov x4,x19
7101c1ab7c  strh w8,[sp, #0x2c]
7101c1ab80  add x20,sp,#0x10
7101c1ab84  bl 0x7103781a20
7101c1ab88  ldr x0,[sp, #0x120]
7101c1ab8c  add x8,x20,#0xf0
7101c1ab90  cmp x8,x0
7101c1ab94  b.eq 0x7101c1aba8
7101c1ab98  cbz x0,0x7101c1abb4
7101c1ab9c  ldr x8,[x0]
7101c1aba0  ldr x8,[x8, #0x28]
7101c1aba4  b 0x7101c1abb0
7101c1aba8  ldr x8,[x0]
7101c1abac  ldr x8,[x8, #0x20]
7101c1abb0  blr x8
7101c1abb4  ldr x0,[sp, #0xf0]
7101c1abb8  add x8,sp,#0x10
7101c1abbc  add x8,x8,#0xc0
7101c1abc0  cmp x8,x0
7101c1abc4  b.eq 0x7101c1abd8
7101c1abc8  cbz x0,0x7101c1abe4
7101c1abcc  ldr x8,[x0]
7101c1abd0  ldr x8,[x8, #0x28]
7101c1abd4  b 0x7101c1abe0
7101c1abd8  ldr x8,[x0]
7101c1abdc  ldr x8,[x8, #0x20]
7101c1abe0  blr x8
7101c1abe4  ldr x0,[sp, #0xc0]
7101c1abe8  add x8,sp,#0x10
7101c1abec  add x8,x8,#0x90
7101c1abf0  cmp x8,x0
7101c1abf4  b.eq 0x7101c1ac08
7101c1abf8  cbz x0,0x7101c1ac14
7101c1abfc  ldr x8,[x0]
7101c1ac00  ldr x8,[x8, #0x28]
7101c1ac04  b 0x7101c1ac10
7101c1ac08  ldr x8,[x0]
7101c1ac0c  ldr x8,[x8, #0x20]
7101c1ac10  blr x8
7101c1ac14  ldr x0,[sp, #0x90]
7101c1ac18  add x8,sp,#0x10
7101c1ac1c  add x8,x8,#0x60
7101c1ac20  cmp x8,x0
7101c1ac24  b.eq 0x7101c1ac38
7101c1ac28  cbz x0,0x7101c1ac44
7101c1ac2c  ldr x8,[x0]
7101c1ac30  ldr x8,[x8, #0x28]
7101c1ac34  b 0x7101c1ac40
7101c1ac38  ldr x8,[x0]
7101c1ac3c  ldr x8,[x8, #0x20]
7101c1ac40  blr x8
7101c1ac44  ldr x0,[sp, #0x60]
7101c1ac48  add x8,sp,#0x10
7101c1ac4c  add x8,x8,#0x30
7101c1ac50  cmp x8,x0
7101c1ac54  b.eq 0x7101c1ac68
7101c1ac58  cbz x0,0x7101c1ac74
7101c1ac5c  ldr x8,[x0]
7101c1ac60  ldr x8,[x8, #0x28]
7101c1ac64  b 0x7101c1ac70
7101c1ac68  ldr x8,[x0]
7101c1ac6c  ldr x8,[x8, #0x20]
7101c1ac70  blr x8
7101c1ac74  ldr x0,[x19, #0x198]
7101c1ac78  str wzr,[x19, #0x210]
7101c1ac7c  ldr x8,[x0]
7101c1ac80  ldr x8,[x8, #0x70]
7101c1ac84  mov w1,wzr
7101c1ac88  blr x8
7101c1ac8c  ldr x0,[x19, #0x1a8]
7101c1ac90  ldr x8,[x0]
7101c1ac94  ldr x8,[x8, #0x70]
7101c1ac98  mov w1,wzr
7101c1ac9c  blr x8
7101c1aca0  ldrsw x8,[x19, #0x14c]
7101c1aca4  cmp w8,#0x13
7101c1aca8  b.cs 0x7101c1b010
7101c1acac  add x8,x19,x8, LSL #0x2
7101c1acb0  mov w9,#0x2
7101c1acb4  str w9,[x8, #0x100]
7101c1acb8  ldrb w8,[x19, #0x71a]
7101c1acbc  cbz w8,0x7101c1ad0c
7101c1acc0  ldrb w8,[x19, #0x718]
7101c1acc4  cbz w8,0x7101c1ad24
7101c1acc8  orr x8,xzr,#0x300000000
7101c1accc  mov w9,#0x756f
7101c1acd0  movk w9,#0x74, LSL #16
7101c1acd4  str x8,[sp, #0x10]
7101c1acd8  str w9,[sp, #0x18]
7101c1acdc  mov w9,#0x6f
7101c1ace0  mov w8,#0x9
7101c1ace4  add x10,sp,#0x10
7101c1ace8  mul w11,w27,w28
7101c1acec  and w9,w9,#0xff
7101c1acf0  eor w27,w11,w9
7101c1acf4  ldrb w9,[x10, x8, LSL ]
7101c1acf8  add x8,x8,#0x1
7101c1acfc  cbnz w9,0x7101c1ace8
7101c1ad00  fmov s0,0xbf800000
7101c1ad04  str w27,[sp, #0x10]
7101c1ad08  b 0x7101c1ad70
7101c1ad0c  ldr x8,[sp, #0x8]
7101c1ad10  ldr x0,[x8, #0x10]
7101c1ad14  adrp x1,0x7104421000
7101c1ad18  add x1,x1,#0x55
7101c1ad1c  bl 0x7103778760
7101c1ad20  b 0x7101c1ad7c
7101c1ad24  adrp x8,0x7105324000
7101c1ad28  mov w9,#0x1
7101c1ad2c  orr x10,xzr,#0x200000000
7101c1ad30  mov w11,#0x6e69
7101c1ad34  str w9,[x8, #0xf58]
7101c1ad38  str x10,[sp, #0x10]
7101c1ad3c  mov w9,#0x69
7101c1ad40  mov w8,#0x9
7101c1ad44  add x10,sp,#0x10
7101c1ad48  strh w11,[sp, #0x18]
7101c1ad4c  strb wzr,[sp, #0x1a]
7101c1ad50  mul w11,w27,w28
7101c1ad54  and w9,w9,#0xff
7101c1ad58  eor w27,w11,w9
7101c1ad5c  ldrb w9,[x10, x8, LSL ]
7101c1ad60  add x8,x8,#0x1
7101c1ad64  cbnz w9,0x7101c1ad50
7101c1ad68  str w27,[sp, #0x10]
7101c1ad6c  fmov s0,0x3f800000
7101c1ad70  add x1,sp,#0x10
7101c1ad74  mov x0,x19
7101c1ad78  bl 0x7101c27d00
7101c1ad7c  adrp x8,0x7105324000
7101c1ad80  ldr w1,[x8, #0xf58]
7101c1ad84  mov w2,#0x1
7101c1ad88  mov x0,x19
7101c1ad8c  bl 0x7101c27480
7101c1ad90  ldr x19,[sp, #0x538]
7101c1ad94  str x23,[sp, #0x530]
7101c1ad98  str xzr,[sp, #0x538]
7101c1ad9c  cbz x19,0x7101c1adb8
7101c1ada0  ldr x0,[x19, #0x18]
7101c1ada4  stp x24,xzr,[x19, #0x10]
7101c1ada8  cbz x0,0x7101c1adb0
7101c1adac  bl 0x710392eb40
7101c1adb0  mov x0,x19
7101c1adb4  bl 0x710392eb40
7101c1adb8  ldr x0,[sp, #0x540]
7101c1adbc  cbz x0,0x7101c1adc8
7101c1adc0  str x0,[sp, #0x548]
7101c1adc4  bl 0x710392eb40
7101c1adc8  ldr x19,[sp, #0x578]
7101c1adcc  str x23,[sp, #0x570]
7101c1add0  str xzr,[sp, #0x578]
7101c1add4  cbz x19,0x7101c1adf0
7101c1add8  ldr x0,[x19, #0x18]
7101c1addc  stp x24,xzr,[x19, #0x10]
7101c1ade0  cbz x0,0x7101c1ade8
7101c1ade4  bl 0x710392eb40
7101c1ade8  mov x0,x19
7101c1adec  bl 0x710392eb40
7101c1adf0  ldr x0,[sp, #0x588]
7101c1adf4  adrp x8,0x710523d000
7101c1adf8  add x8,x8,#0x9c8
7101c1adfc  str x8,[sp, #0x580]
7101c1ae00  str xzr,[sp, #0x588]
7101c1ae04  cbz x0,0x7101c1ae0c
7101c1ae08  bl 0x710392eb40
7101c1ae0c  ldr x0,[sp, #0x6a0]
7101c1ae10  add x8,sp,#0x590
7101c1ae14  add x8,x8,#0xf0
7101c1ae18  cmp x8,x0
7101c1ae1c  b.eq 0x7101c1ae30
7101c1ae20  cbz x0,0x7101c1ae3c
7101c1ae24  ldr x8,[x0]
7101c1ae28  ldr x8,[x8, #0x28]
7101c1ae2c  b 0x7101c1ae38
7101c1ae30  ldr x8,[x0]
7101c1ae34  ldr x8,[x8, #0x20]
7101c1ae38  blr x8
7101c1ae3c  ldr x0,[sp, #0x670]
7101c1ae40  add x8,sp,#0x590
7101c1ae44  add x8,x8,#0xc0
7101c1ae48  cmp x8,x0
7101c1ae4c  b.eq 0x7101c1ae60
7101c1ae50  cbz x0,0x7101c1ae6c
7101c1ae54  ldr x8,[x0]
7101c1ae58  ldr x8,[x8, #0x28]
7101c1ae5c  b 0x7101c1ae68
7101c1ae60  ldr x8,[x0]
7101c1ae64  ldr x8,[x8, #0x20]
7101c1ae68  blr x8
7101c1ae6c  ldr x0,[sp, #0x640]
7101c1ae70  add x8,sp,#0x590
7101c1ae74  add x8,x8,#0x90
7101c1ae78  cmp x8,x0
7101c1ae7c  b.eq 0x7101c1ae90
7101c1ae80  cbz x0,0x7101c1ae9c
7101c1ae84  ldr x8,[x0]
7101c1ae88  ldr x8,[x8, #0x28]
7101c1ae8c  b 0x7101c1ae98
7101c1ae90  ldr x8,[x0]
7101c1ae94  ldr x8,[x8, #0x20]
7101c1ae98  blr x8
7101c1ae9c  ldr x0,[sp, #0x610]
7101c1aea0  add x8,sp,#0x590
7101c1aea4  add x8,x8,#0x60
7101c1aea8  cmp x8,x0
7101c1aeac  b.eq 0x7101c1aec0
7101c1aeb0  cbz x0,0x7101c1aecc
7101c1aeb4  ldr x8,[x0]
7101c1aeb8  ldr x8,[x8, #0x28]
7101c1aebc  b 0x7101c1aec8
7101c1aec0  ldr x8,[x0]
7101c1aec4  ldr x8,[x8, #0x20]
7101c1aec8  blr x8
7101c1aecc  ldr x0,[sp, #0x5e0]
7101c1aed0  add x8,sp,#0x590
7101c1aed4  add x8,x8,#0x30
7101c1aed8  cmp x8,x0
7101c1aedc  b.eq 0x7101c1aef0
7101c1aee0  cbz x0,0x7101c1aefc
7101c1aee4  ldr x8,[x0]
7101c1aee8  ldr x8,[x8, #0x28]
7101c1aeec  b 0x7101c1aef8
7101c1aef0  ldr x8,[x0]
7101c1aef4  ldr x8,[x8, #0x20]
7101c1aef8  blr x8
7101c1aefc  ldr x0,[sp, #0x7d0]
7101c1af00  add x8,sp,#0x6c0
7101c1af04  add x8,x8,#0xf0
7101c1af08  cmp x8,x0
7101c1af0c  b.eq 0x7101c1af20
7101c1af10  cbz x0,0x7101c1af2c
7101c1af14  ldr x8,[x0]
7101c1af18  ldr x8,[x8, #0x28]
7101c1af1c  b 0x7101c1af28
7101c1af20  ldr x8,[x0]
7101c1af24  ldr x8,[x8, #0x20]
7101c1af28  blr x8
7101c1af2c  ldr x0,[sp, #0x7a0]
7101c1af30  add x8,sp,#0x6c0
7101c1af34  add x8,x8,#0xc0
7101c1af38  cmp x8,x0
7101c1af3c  b.eq 0x7101c1af50
7101c1af40  cbz x0,0x7101c1af5c
7101c1af44  ldr x8,[x0]
7101c1af48  ldr x8,[x8, #0x28]
7101c1af4c  b 0x7101c1af58
7101c1af50  ldr x8,[x0]
7101c1af54  ldr x8,[x8, #0x20]
7101c1af58  blr x8
7101c1af5c  ldr x0,[sp, #0x770]
7101c1af60  add x8,sp,#0x6c0
7101c1af64  add x8,x8,#0x90
7101c1af68  cmp x8,x0
7101c1af6c  b.eq 0x7101c1af80
7101c1af70  cbz x0,0x7101c1af8c
7101c1af74  ldr x8,[x0]
7101c1af78  ldr x8,[x8, #0x28]
7101c1af7c  b 0x7101c1af88
7101c1af80  ldr x8,[x0]
7101c1af84  ldr x8,[x8, #0x20]
7101c1af88  blr x8
7101c1af8c  ldr x0,[sp, #0x740]
7101c1af90  add x8,sp,#0x6c0
7101c1af94  add x8,x8,#0x60
7101c1af98  cmp x8,x0
7101c1af9c  b.eq 0x7101c1afb0
7101c1afa0  cbz x0,0x7101c1afbc
7101c1afa4  ldr x8,[x0]
7101c1afa8  ldr x8,[x8, #0x28]
7101c1afac  b 0x7101c1afb8
7101c1afb0  ldr x8,[x0]
7101c1afb4  ldr x8,[x8, #0x20]
7101c1afb8  blr x8
7101c1afbc  ldr x0,[sp, #0x710]
7101c1afc0  add x8,sp,#0x6c0
7101c1afc4  add x8,x8,#0x30
7101c1afc8  cmp x8,x0
7101c1afcc  b.eq 0x7101c1afe0
7101c1afd0  cbz x0,0x7101c1afec
7101c1afd4  ldr x8,[x0]
7101c1afd8  ldr x8,[x8, #0x28]
7101c1afdc  b 0x7101c1afe8
7101c1afe0  ldr x8,[x0]
7101c1afe4  ldr x8,[x8, #0x20]
7101c1afe8  blr x8
7101c1afec  add sp,sp,#0x830
7101c1aff0  ldp x29,x30,[sp, #0x60]
7101c1aff4  ldp x20,x19,[sp, #0x50]
7101c1aff8  ldp x22,x21,[sp, #0x40]
7101c1affc  ldp x24,x23,[sp, #0x30]
7101c1b000  ldp x26,x25,[sp, #0x20]
7101c1b004  ldp x28,x27,[sp, #0x10]
7101c1b008  ldr d8,[sp], #0x70
7101c1b00c  ret
7101c1b010  bl 0x71039c2650
7101c1b014  mov x0,x21
7101c1b018  bl 0x71039c0c00
7101c1b01c  add x0,sp,#0x4f8
7101c1b020  bl 0x71039c0c00
