// addr:      7101c47bb0
// offset:    0x1c47bb0
// name:      FUN_7101c47bb0
// mangled:   
// size:      1024

7101c47bb0  str x28,[sp, #-0x50]!
7101c47bb4  stp x24,x23,[sp, #0x10]
7101c47bb8  stp x22,x21,[sp, #0x20]
7101c47bbc  stp x20,x19,[sp, #0x30]
7101c47bc0  stp x29,x30,[sp, #0x40]
7101c47bc4  add x29,sp,#0x40
7101c47bc8  sub sp,sp,#0x240
7101c47bcc  ldr x8,[x0, #0x170]
7101c47bd0  ldr w9,[x8, #0xc8]
7101c47bd4  cbz w9,0x7101c47ecc
7101c47bd8  ldrh w24,[x8, #0x102]
7101c47bdc  ubfx w8,w24,#0x8,#0x1
7101c47be0  orr w8,w8,w24
7101c47be4  tst w8,#0xff
7101c47be8  and w9,w8,#0xff
7101c47bec  cset w19,ne
7101c47bf0  cbz w9,0x7101c47ed0
7101c47bf4  ldr x8,[x0, #0x40]
7101c47bf8  mov x20,x0
7101c47bfc  cbz x8,0x7101c47ed0
7101c47c00  ldrb w9,[x20, #0x178]
7101c47c04  lsr w10,w24,#0x8
7101c47c08  cbnz w10,0x7101c47e14
7101c47c0c  cmp w9,#0x2
7101c47c10  b.ne 0x7101c47e0c
7101c47c14  cmp w9,w24, UXTB 
7101c47c18  b.eq 0x7101c47e0c
7101c47c1c  adrp x21,0x7105314000
7101c47c20  add x21,x21,#0x4d8
7101c47c24  ldarb w8,[x21]
7101c47c28  tbz w8,#0x0,0x7101c47f30
7101c47c2c  mov x9,#0xff0000000000
7101c47c30  adrp x8,0x7105306000
7101c47c34  add x8,x8,#0x998
7101c47c38  movk x9,#0xc1ff, LSL #48
7101c47c3c  mov w23,#0xffffffff
7101c47c40  stur x23,[x8, #0xc]
7101c47c44  str x9,[x8]
7101c47c48  strb wzr,[x8, #0x8]
7101c47c4c  str wzr,[x8, #0x14]
7101c47c50  ldarb w8,[x21]
7101c47c54  tbz w8,#0x0,0x7101c47f70
7101c47c58  adrp x21,0x7105308000
7101c47c5c  add x21,x21,#0x760
7101c47c60  mov x8,#0x100000001
7101c47c64  str x8,[x21]
7101c47c68  ldr w8,[x21, #0x8]
7101c47c6c  cmp w8,#0x1
7101c47c70  b.eq 0x7101c47cb4
7101c47c74  adrp x8,0x7105308000
7101c47c78  mov w9,#0x1
7101c47c7c  str w9,[x8, #0x768]
7101c47c80  adrp x8,0x71052c4000
7101c47c84  ldr x8,[x8, #0xc58]
7101c47c88  ldr x8,[x8, #0x8]
7101c47c8c  ldr x8,[x8, #0x88]
7101c47c90  mov w9,#0x6a62
7101c47c94  movk w9,#0x2, LSL #16
7101c47c98  ldrb w9,[x8, x9, LSL ]
7101c47c9c  cbnz w9,0x7101c47cb4
7101c47ca0  mov w9,#0x6a90
7101c47ca4  movk w9,#0x2, LSL #16
7101c47ca8  ldr x10,[x8, x9, LSL #0x0]
7101c47cac  orr x10,x10,#0x1
7101c47cb0  str x10,[x8, x9, LSL #0x0]
7101c47cb4  mov w1,#0x1
7101c47cb8  mov x0,x21
7101c47cbc  bl 0x710179e900
7101c47cc0  mov x8,#-0x1
7101c47cc4  str x8,[sp, #0x10]
7101c47cc8  stur x8,[sp, #0x1c]
7101c47ccc  mov x8,sp
7101c47cd0  stp x23,xzr,[sp]
7101c47cd4  orr w9,wzr,#0xffff
7101c47cd8  add x22,x8,#0x30
7101c47cdc  str w23,[sp, #0x60]
7101c47ce0  add x23,x8,#0x88
7101c47ce4  mov x0,x23
7101c47ce8  strh w9,[sp, #0x24]
7101c47cec  orr x9,xzr,#0x3f8000003f800000
7101c47cf0  strh wzr,[sp, #0x18]
7101c47cf4  str xzr,[sp, #0x28]
7101c47cf8  strh wzr,[sp, #0x30]
7101c47cfc  strb wzr,[sp, #0x64]
7101c47d00  str wzr,[sp, #0x68]
7101c47d04  strb wzr,[sp, #0x6c]
7101c47d08  strh wzr,[sp, #0x80]
7101c47d0c  stp x9,x9,[sp, #0x70]
7101c47d10  bl 0x71017abd00
7101c47d14  orr w9,wzr,#0xff
7101c47d18  strb w9,[sp, #0x238]
7101c47d1c  ldr x9,[sp]
7101c47d20  str x9,[x21, #0x1090]
7101c47d24  ldr w9,[sp, #0x8]
7101c47d28  str w9,[x21, #0x1098]
7101c47d2c  ldur x9,[sp, #0x12]
7101c47d30  mov x8,#0x753f
7101c47d34  movk x8,#0x95d0, LSL #16
7101c47d38  movk x8,#0xb, LSL #32
7101c47d3c  str x8,[sp, #0x230]
7101c47d40  mov w8,#0x10a2
7101c47d44  str x9,[x21, x8, LSL #0x0]
7101c47d48  ldur x9,[sp, #0xc]
7101c47d4c  mov w8,#0x109c
7101c47d50  str x9,[x21, x8, LSL #0x0]
7101c47d54  ldur x9,[sp, #0x1c]
7101c47d58  mov w8,#0x10ac
7101c47d5c  mov x1,x22
7101c47d60  str x9,[x21, x8, LSL #0x0]
7101c47d64  ldrh w8,[sp, #0x24]
7101c47d68  mov w9,#0x10b8
7101c47d6c  add x0,x21,x9
7101c47d70  strb wzr,[sp, #0x228]
7101c47d74  strh w8,[x21, #0x10b4]
7101c47d78  bl 0x7101696040
7101c47d7c  ldr w8,[sp, #0x60]
7101c47d80  ldrb w9,[sp, #0x6c]
7101c47d84  str w8,[x21, #0x10f0]
7101c47d88  mov w8,#0x10fc
7101c47d8c  strb w9,[x21, x8, LSL ]
7101c47d90  ldur x8,[sp, #0x64]
7101c47d94  mov w9,#0x10f4
7101c47d98  mov x1,x23
7101c47d9c  str x8,[x21, x9, LSL #0x0]
7101c47da0  ldrh w8,[sp, #0x80]
7101c47da4  strh w8,[x21, #0x1110]
7101c47da8  ldr x8,[sp, #0x70]
7101c47dac  ldr x9,[sp, #0x78]
7101c47db0  str x9,[x21, #0x1108]
7101c47db4  str x8,[x21, #0x1100]
7101c47db8  mov w8,#0x1118
7101c47dbc  add x0,x21,x8
7101c47dc0  bl 0x7101785360
7101c47dc4  ldrb w8,[sp, #0x238]
7101c47dc8  mov w9,#0x12c8
7101c47dcc  strb w8,[x21, x9, LSL ]
7101c47dd0  ldr x8,[sp, #0x230]
7101c47dd4  str x8,[x21, #0x12c0]
7101c47dd8  ldr x8,[sp, #0x228]
7101c47ddc  str x8,[x21, #0x12b8]
7101c47de0  ldr x8,[x20, #0x40]
7101c47de4  ldr x0,[x8]
7101c47de8  cbz x0,0x7101c47e0c
7101c47dec  adrp x1,0x71043f0000
7101c47df0  add x1,x1,#0x9ae
7101c47df4  adrp x2,0x71042d5000
7101c47df8  add x2,x2,#0x20
7101c47dfc  adrp x3,0x7104433000
7101c47e00  add x3,x3,#0xca
7101c47e04  bl 0x7103375650
7101c47e08  ldr x8,[x20, #0x40]
7101c47e0c  mov w9,w24
7101c47e10  strb w24,[x20, #0x178]
7101c47e14  ldr x0,[x8]
7101c47e18  cbz x0,0x7101c47e34
7101c47e1c  and w3,w9,#0xff
7101c47e20  adrp x1,0x710437c000
7101c47e24  add x1,x1,#0x507
7101c47e28  adrp x2,0x71042b2000
7101c47e2c  add x2,x2,#0xa84
7101c47e30  bl 0x7103375650
7101c47e34  adrp x8,0x7105314000
7101c47e38  add x8,x8,#0x4d8
7101c47e3c  ldarb w8,[x8]
7101c47e40  tbz w8,#0x0,0x7101c47ef0
7101c47e44  ldrb w8,[x20, #0x178]
7101c47e48  adrp x9,0x7105306000
7101c47e4c  add x9,x9,#0x97a
7101c47e50  strb w8,[x9]
7101c47e54  adrp x8,0x710532f000
7101c47e58  ldr x8,[x8, #0x730]
7101c47e5c  ldr x8,[x8, #0x8]
7101c47e60  ldur x21,[x9, #0x6]
7101c47e64  mov x1,x21
7101c47e68  ldr x22,[x8, #0x168]
7101c47e6c  mov x0,x22
7101c47e70  bl 0x71032632a0
7101c47e74  tbz w0,#0x0,0x7101c47e90
7101c47e78  mov x1,#0xb807
7101c47e7c  movk x1,#0xb1cc, LSL #16
7101c47e80  movk x1,#0x11, LSL #32
7101c47e84  mov x0,x22
7101c47e88  bl 0x71032631a0
7101c47e8c  mov x21,x0
7101c47e90  orr w1,wzr,#0x3
7101c47e94  mov x0,x21
7101c47e98  mov w2,wzr
7101c47e9c  bl 0x7101797560
7101c47ea0  ldr x9,[x20, #0x40]
7101c47ea4  mov w8,w0
7101c47ea8  ldr x0,[x9]
7101c47eac  cbz x0,0x7101c47ed0
7101c47eb0  and w3,w8,#0x1
7101c47eb4  adrp x1,0x7104329000
7101c47eb8  add x1,x1,#0xf74
7101c47ebc  adrp x2,0x71043cd000
7101c47ec0  add x2,x2,#0xb7b
7101c47ec4  bl 0x7103375650
7101c47ec8  b 0x7101c47ed0
7101c47ecc  mov w19,wzr
7101c47ed0  mov w0,w19
7101c47ed4  add sp,sp,#0x240
7101c47ed8  ldp x29,x30,[sp, #0x40]
7101c47edc  ldp x20,x19,[sp, #0x30]
7101c47ee0  ldp x22,x21,[sp, #0x20]
7101c47ee4  ldp x24,x23,[sp, #0x10]
7101c47ee8  ldr x28,[sp], #0x50
7101c47eec  ret
7101c47ef0  adrp x0,0x7105314000
7101c47ef4  add x0,x0,#0x4d8
7101c47ef8  bl 0x71039c06b0
7101c47efc  cbz w0,0x7101c47e44
7101c47f00  bl 0x7101764000
7101c47f04  adrp x0,0x7101763000
7101c47f08  add x0,x0,#0xc40
7101c47f0c  adrp x1,0x71052c5000
7101c47f10  add x1,x1,#0x180
7101c47f14  adrp x2,0x7104f17000
7101c47f18  add x2,x2,#0x0
7101c47f1c  bl 0x71000001c0
7101c47f20  adrp x0,0x7105314000
7101c47f24  add x0,x0,#0x4d8
7101c47f28  bl 0x71039c06c0
7101c47f2c  b 0x7101c47e44
7101c47f30  adrp x0,0x7105314000
7101c47f34  add x0,x0,#0x4d8
7101c47f38  bl 0x71039c06b0
7101c47f3c  cbz w0,0x7101c47c2c
7101c47f40  bl 0x7101764000
7101c47f44  adrp x0,0x7101763000
7101c47f48  add x0,x0,#0xc40
7101c47f4c  adrp x1,0x71052c5000
7101c47f50  add x1,x1,#0x180
7101c47f54  adrp x2,0x7104f17000
7101c47f58  add x2,x2,#0x0
7101c47f5c  bl 0x71000001c0
7101c47f60  adrp x0,0x7105314000
7101c47f64  add x0,x0,#0x4d8
7101c47f68  bl 0x71039c06c0
7101c47f6c  b 0x7101c47c2c
7101c47f70  adrp x0,0x7105314000
7101c47f74  add x0,x0,#0x4d8
7101c47f78  bl 0x71039c06b0
7101c47f7c  cbz w0,0x7101c47c58
7101c47f80  bl 0x7101764000
7101c47f84  adrp x0,0x7101763000
7101c47f88  add x0,x0,#0xc40
7101c47f8c  adrp x1,0x71052c5000
7101c47f90  add x1,x1,#0x180
7101c47f94  adrp x2,0x7104f17000
7101c47f98  add x2,x2,#0x0
7101c47f9c  bl 0x71000001c0
7101c47fa0  adrp x0,0x7105314000
7101c47fa4  add x0,x0,#0x4d8
7101c47fa8  bl 0x71039c06c0
7101c47fac  b 0x7101c47c58
