// addr:      7101ad5c30
// offset:    0x1ad5c30
// name:      FUN_7101ad5c30
// mangled:   
// size:      668

7101ad5c30  sub sp,sp,#0x110
7101ad5c34  str d8,[sp, #0xa0]
7101ad5c38  stp x28,x27,[sp, #0xb0]
7101ad5c3c  stp x26,x25,[sp, #0xc0]
7101ad5c40  stp x24,x23,[sp, #0xd0]
7101ad5c44  stp x22,x21,[sp, #0xe0]
7101ad5c48  stp x20,x19,[sp, #0xf0]
7101ad5c4c  stp x29,x30,[sp, #0x100]
7101ad5c50  add x29,sp,#0x100
7101ad5c54  ldr x8,[x0, #0x170]
7101ad5c58  mov x19,x0
7101ad5c5c  ldr x0,[x8]
7101ad5c60  bl 0x710323cb80
7101ad5c64  tbz w0,#0x0,0x7101ad5e9c
7101ad5c68  adrp x20,0x7105329000
7101ad5c6c  ldr x8,[x20, #0xf98]
7101ad5c70  ldr x8,[x8]
7101ad5c74  ldr x0,[x8, #0x20]
7101ad5c78  mov w1,wzr
7101ad5c7c  bl 0x710259d3a0
7101ad5c80  tbz w0,#0x0,0x7101ad5e9c
7101ad5c84  ldr x8,[x20, #0xf98]
7101ad5c88  ldr x8,[x8]
7101ad5c8c  ldr x0,[x8, #0x20]
7101ad5c90  mov w1,#0x2
7101ad5c94  bl 0x710259d3a0
7101ad5c98  tbz w0,#0x0,0x7101ad5e9c
7101ad5c9c  add x9,sp,#0x50
7101ad5ca0  add x23,x9,#0x8
7101ad5ca4  add x9,x19,#0x10
7101ad5ca8  fmov s8,0x3f800000
7101ad5cac  adrp x28,0x710532f000
7101ad5cb0  adrp x22,0x7104f73000
7101ad5cb4  add x22,x22,#0xd50
7101ad5cb8  stur x9,[x29, #-0x58]
7101ad5cbc  mov x9,sp
7101ad5cc0  mov x20,xzr
7101ad5cc4  mov w8,wzr
7101ad5cc8  adrp x24,0x71042c5000
7101ad5ccc  add x24,x24,#0x15
7101ad5cd0  adrp x25,0x7104422000
7101ad5cd4  add x25,x25,#0x5ea
7101ad5cd8  add x27,x9,#0x30
7101ad5cdc  adrp x21,0x710523d000
7101ad5ce0  add x21,x21,#0x988
7101ad5ce4  add x9,x19,x20
7101ad5ce8  ldrb w9,[x9, #0x560]
7101ad5cec  cbz w9,0x7101ad5e30
7101ad5cf0  add x0,sp,#0x50
7101ad5cf4  mov x1,x24
7101ad5cf8  mov w2,w20
7101ad5cfc  strb wzr,[sp, #0x58]
7101ad5d00  str xzr,[sp, #0x50]
7101ad5d04  bl 0x710062dc20
7101ad5d08  ldp x8,x9,[x19, #0x10]
7101ad5d0c  cmp x9,x8
7101ad5d10  b.eq 0x7101ad5ec0
7101ad5d14  ldr x8,[x8]
7101ad5d18  ldr x8,[x8]
7101ad5d1c  ldr x8,[x8]
7101ad5d20  add x0,x8,#0x8
7101ad5d24  add x8,sp,#0x40
7101ad5d28  mov x1,x23
7101ad5d2c  bl 0x7103776640
7101ad5d30  ldr x26,[sp, #0x48]
7101ad5d34  mov v0.16B,v8.16B
7101ad5d38  mov x1,x25
7101ad5d3c  mov x0,x26
7101ad5d40  bl 0x7103778300
7101ad5d44  ldr x8,[x28, #0x8d0]
7101ad5d48  ldr x0,[x8, #0x8]
7101ad5d4c  ldrb w8,[x0, #0x191]
7101ad5d50  cbnz w8,0x7101ad5dcc
7101ad5d54  mov x1,#0xac57
7101ad5d58  movk x1,#0xb84e, LSL #16
7101ad5d5c  mov w2,#0x4
7101ad5d60  movk x1,#0x18, LSL #32
7101ad5d64  bl 0x7103313f20
7101ad5d68  tbz w0,#0x0,0x7101ad5dcc
7101ad5d6c  mov x1,#0xac57
7101ad5d70  movk x1,#0xb84e, LSL #16
7101ad5d74  mov x0,sp
7101ad5d78  movk x1,#0x18, LSL #32
7101ad5d7c  bl 0x71024076d0
7101ad5d80  ldr x8,[sp, #0x10]
7101ad5d84  str x22,[sp, #0x8]
7101ad5d88  cbz x8,0x7101ad5dfc
7101ad5d8c  adrp x9,0x7106dd5000
7101ad5d90  ldrb w9,[x9, #0x3a8]
7101ad5d94  cmp w9,#0x1
7101ad5d98  b.ne 0x7101ad5dfc
7101ad5d9c  adrp x10,0x7106dd5000
7101ad5da0  ldr w9,[sp, #0x18]
7101ad5da4  ldr w10,[x10, #0x3ac]
7101ad5da8  cmp w9,w10
7101ad5dac  b.ne 0x7101ad5dfc
7101ad5db0  ldr wzr,[x8, #0x38]!
7101ad5db4  ldaxr w9,[x8]
7101ad5db8  sub w9,w9,#0x1
7101ad5dbc  stlxr w10,w9,[x8]
7101ad5dc0  cbnz w10,0x7101ad5db4
7101ad5dc4  ldr x26,[sp, #0x48]
7101ad5dc8  b 0x7101ad5dfc
7101ad5dcc  mov x8,#0x650000000000
7101ad5dd0  movk x8,#0x87, LSL #48
7101ad5dd4  strb wzr,[sp, #0x20]
7101ad5dd8  stp xzr,x8,[sp, #0x10]
7101ad5ddc  adrp x8,0x7104f73000
7101ad5de0  add x8,x8,#0xd30
7101ad5de4  str x8,[sp, #0x8]
7101ad5de8  mov x8,#-0x1
7101ad5dec  str wzr,[sp]
7101ad5df0  str x8,[sp, #0x28]
7101ad5df4  stp xzr,xzr,[x27]
7101ad5df8  str x22,[sp, #0x8]
7101ad5dfc  str xzr,[sp, #0x10]
7101ad5e00  strb wzr,[sp, #0x20]
7101ad5e04  stp x21,xzr,[sp, #0x40]
7101ad5e08  cbz x26,0x7101ad5e2c
7101ad5e0c  ldr x0,[x26, #0x18]
7101ad5e10  adrp x8,0x710523d000
7101ad5e14  add x8,x8,#0x9a8
7101ad5e18  stp x8,xzr,[x26, #0x10]
7101ad5e1c  cbz x0,0x7101ad5e24
7101ad5e20  bl 0x710392eb40
7101ad5e24  mov x0,x26
7101ad5e28  bl 0x710392eb40
7101ad5e2c  mov w8,#0x1
7101ad5e30  add x20,x20,#0x1
7101ad5e34  cmp x20,#0xa
7101ad5e38  b.ne 0x7101ad5ce4
7101ad5e3c  tbz w8,#0x0,0x7101ad5e5c
7101ad5e40  ldr w9,[x19, #0x15c]
7101ad5e44  subs w8,w9,#0x1
7101ad5e48  b.lt 0x7101ad5e78
7101ad5e4c  cmp w9,#0x12
7101ad5e50  str w8,[x19, #0x15c]
7101ad5e54  b.le 0x7101ad5e7c
7101ad5e58  b 0x7101ad5e9c
7101ad5e5c  mov x0,x19
7101ad5e60  bl 0x7101ad8100
7101ad5e64  ldr w8,[x19, #0x15c]
7101ad5e68  subs w8,w8,#0x1
7101ad5e6c  b.lt 0x7101ad5e9c
7101ad5e70  str w8,[x19, #0x15c]
7101ad5e74  b 0x7101ad5e9c
7101ad5e78  mov w8,w9
7101ad5e7c  sxtw x8,w8
7101ad5e80  add x8,x8,#0x1
7101ad5e84  cmp w8,#0x13
7101ad5e88  str w8,[x19, #0x15c]
7101ad5e8c  b.cs 0x7101ad5ec8
7101ad5e90  add x8,x19,x8, LSL #0x2
7101ad5e94  orr w9,wzr,#0x3
7101ad5e98  str w9,[x8, #0x110]
7101ad5e9c  ldr d8,[sp, #0xa0]
7101ad5ea0  ldp x29,x30,[sp, #0x100]
7101ad5ea4  ldp x20,x19,[sp, #0xf0]
7101ad5ea8  ldp x22,x21,[sp, #0xe0]
7101ad5eac  ldp x24,x23,[sp, #0xd0]
7101ad5eb0  ldp x26,x25,[sp, #0xc0]
7101ad5eb4  ldp x28,x27,[sp, #0xb0]
7101ad5eb8  add sp,sp,#0x110
7101ad5ebc  ret
7101ad5ec0  ldur x0,[x29, #-0x58]
7101ad5ec4  bl 0x71039c1330
7101ad5ec8  bl 0x71039c2650
