// addr:      7101c77cf0
// offset:    0x1c77cf0
// name:      FUN_7101c77cf0
// mangled:   
// size:      880

7101c77cf0  sub sp,sp,#0x60
7101c77cf4  stp x26,x25,[sp, #0x10]
7101c77cf8  stp x24,x23,[sp, #0x20]
7101c77cfc  stp x22,x21,[sp, #0x30]
7101c77d00  stp x20,x19,[sp, #0x40]
7101c77d04  stp x29,x30,[sp, #0x50]
7101c77d08  add x29,sp,#0x50
7101c77d0c  ldrb w10,[x0, #0xe7]
7101c77d10  cmp w10,#0x0
7101c77d14  cset w10,ne
7101c77d18  and w11,w10,w1
7101c77d1c  mov x19,x0
7101c77d20  strb wzr,[x0, #0xe0]
7101c77d24  fmov s0,0x3f800000
7101c77d28  adrp x8,0x7104401000
7101c77d2c  add x8,x8,#0x647
7101c77d30  adrp x9,0x710434a000
7101c77d34  add x9,x9,#0x3c2
7101c77d38  tst w10,w1
7101c77d3c  strb w11,[x0, #0xe5]
7101c77d40  ldr x0,[x0, #0x20]
7101c77d44  csel x1,x9,x8,ne
7101c77d48  bl 0x7103778300
7101c77d4c  ldrb w8,[x19, #0xe7]
7101c77d50  cbz w8,0x7101c77f90
7101c77d54  ldrb w9,[x19, #0xe5]
7101c77d58  ldr x0,[x19, #0x20]
7101c77d5c  fmov s0,0x3f800000
7101c77d60  adrp x8,0x71042b4000
7101c77d64  add x8,x8,#0x46e
7101c77d68  adrp x10,0x71042f8000
7101c77d6c  add x10,x10,#0x35e
7101c77d70  cmp w9,#0x0
7101c77d74  csel x1,x10,x8,eq
7101c77d78  bl 0x7103778300
7101c77d7c  ldrb w8,[x19, #0xe5]
7101c77d80  ldr x0,[x19, #0xd0]
7101c77d84  cmp w8,#0x0
7101c77d88  ldr x8,[x0]
7101c77d8c  cset w1,eq
7101c77d90  ldr x8,[x8, #0x60]
7101c77d94  blr x8
7101c77d98  mov x23,xzr
7101c77d9c  add x20,x19,#0xc8
7101c77da0  mov w24,#0x1e8
7101c77da4  b 0x7101c77dc4
7101c77da8  ldrb w10,[x19, #0xe5]
7101c77dac  cbz w10,0x7101c77eb8
7101c77db0  madd x8,x8,x24,x9
7101c77db4  ldrb w8,[x8, #0x1e4]
7101c77db8  cmp w8,#0x0
7101c77dbc  cset w21,ne
7101c77dc0  b 0x7101c77ebc
7101c77dc4  add x25,x19,x23, LSL #0x1
7101c77dc8  mov x26,x25
7101c77dcc  ldrb w8,[x26, #0xb8]!
7101c77dd0  cbz w8,0x7101c77e08
7101c77dd4  ldrb w9,[x25, #0xb9]
7101c77dd8  cmp x9,#0x8
7101c77ddc  b.cs 0x7101c7805c
7101c77de0  ldr x10,[x19, #0x8]
7101c77de4  madd x11,x9,x24,x10
7101c77de8  cbz x11,0x7101c77e08
7101c77dec  ldrb w11,[x19, #0xe5]
7101c77df0  cbz w11,0x7101c77e08
7101c77df4  madd x9,x9,x24,x10
7101c77df8  ldrb w9,[x9, #0x1e4]
7101c77dfc  cmp w9,#0x0
7101c77e00  cset w21,ne
7101c77e04  b 0x7101c77e0c
7101c77e08  mov w21,wzr
7101c77e0c  ldr x9,[x20]
7101c77e10  ldr x10,[x9, #0x1b8]
7101c77e14  cbz x10,0x7101c77e84
7101c77e18  add x11,x9,#0x1b8
7101c77e1c  mov x9,x11
7101c77e20  ldr w12,[x10, #0x20]
7101c77e24  cmp w12,w23
7101c77e28  cset w12,lt
7101c77e2c  csel x9,x9,x10,lt
7101c77e30  ldr x10,[x10, w12, UXTW #0x3]
7101c77e34  cbnz x10,0x7101c77e20
7101c77e38  cmp x9,x11
7101c77e3c  b.eq 0x7101c77e84
7101c77e40  ldr w10,[x9, #0x20]
7101c77e44  cmp w10,w23
7101c77e48  b.gt 0x7101c77e84
7101c77e4c  ldr x22,[x9, #0x28]
7101c77e50  cbz x22,0x7101c77e84
7101c77e54  ldr x8,[x22]
7101c77e58  ldr x8,[x8, #0x1f8]
7101c77e5c  mov x0,x22
7101c77e60  mov w1,w21
7101c77e64  blr x8
7101c77e68  ldr x8,[x22]
7101c77e6c  ldr x8,[x8, #0x388]
7101c77e70  eor w1,w21,#0x1
7101c77e74  mov x0,x22
7101c77e78  mov w2,wzr
7101c77e7c  blr x8
7101c77e80  ldrb w8,[x26]
7101c77e84  cbz w8,0x7101c77eb8
7101c77e88  ldrb w8,[x25, #0xb9]
7101c77e8c  cmp x8,#0x8
7101c77e90  b.cs 0x7101c7805c
7101c77e94  ldr x9,[x19, #0x8]
7101c77e98  madd x10,x8,x24,x9
7101c77e9c  cbz x10,0x7101c77eb8
7101c77ea0  madd x10,x8,x24,x9
7101c77ea4  ldrb w10,[x10, #0x1e3]
7101c77ea8  cbnz w10,0x7101c77eb8
7101c77eac  madd x10,x8,x24,x9
7101c77eb0  ldrb w10,[x10, #0x1e2]
7101c77eb4  cbz w10,0x7101c77da8
7101c77eb8  mov w21,wzr
7101c77ebc  ldr x8,[x20]
7101c77ec0  ldr x9,[x8, #0x1b8]
7101c77ec4  cbz x9,0x7101c77f30
7101c77ec8  add x10,x8,#0x1b8
7101c77ecc  mov x8,x10
7101c77ed0  ldr w11,[x9, #0x20]
7101c77ed4  cmp w11,w23
7101c77ed8  cset w11,lt
7101c77edc  csel x8,x8,x9,lt
7101c77ee0  ldr x9,[x9, w11, UXTW #0x3]
7101c77ee4  cbnz x9,0x7101c77ed0
7101c77ee8  cmp x8,x10
7101c77eec  b.eq 0x7101c77f30
7101c77ef0  ldr w9,[x8, #0x20]
7101c77ef4  cmp w9,w23
7101c77ef8  b.gt 0x7101c77f30
7101c77efc  ldr x22,[x8, #0x28]
7101c77f00  cbz x22,0x7101c77f30
7101c77f04  ldr x8,[x22]
7101c77f08  ldr x8,[x8, #0x208]
7101c77f0c  mov x0,x22
7101c77f10  mov w1,w21
7101c77f14  blr x8
7101c77f18  ldr x8,[x22]
7101c77f1c  ldr x8,[x8, #0x388]
7101c77f20  eor w1,w21,#0x1
7101c77f24  mov x0,x22
7101c77f28  mov w2,wzr
7101c77f2c  blr x8
7101c77f30  add x23,x23,#0x1
7101c77f34  cmp x23,#0x8
7101c77f38  b.cc 0x7101c77dc4
7101c77f3c  ldr x0,[x19, #0xc8]
7101c77f40  ldr x8,[x0]
7101c77f44  ldr x8,[x8, #0x60]
7101c77f48  mov w1,#0x1
7101c77f4c  blr x8
7101c77f50  ldr x0,[x19, #0xc8]
7101c77f54  ldr x8,[x0]
7101c77f58  ldr x8,[x8, #0x70]
7101c77f5c  mov w1,#0x1
7101c77f60  blr x8
7101c77f64  mov w1,#0x8
7101c77f68  mov w2,#0x1
7101c77f6c  mov x0,x20
7101c77f70  bl 0x7103771a80
7101c77f74  add x0,x19,#0x28
7101c77f78  adrp x1,0x71043cf000
7101c77f7c  add x1,x1,#0xca4
7101c77f80  mov x8,sp
7101c77f84  bl 0x7103776910
7101c77f88  ldrb w10,[x19, #0xe5]
7101c77f8c  b 0x7101c78008
7101c77f90  ldr x0,[x19, #0x20]
7101c77f94  fmov s0,0x3f800000
7101c77f98  adrp x1,0x71042b4000
7101c77f9c  add x1,x1,#0x46e
7101c77fa0  bl 0x7103778300
7101c77fa4  ldr x0,[x19, #0xd0]
7101c77fa8  ldr x8,[x0]
7101c77fac  ldr x8,[x8, #0x60]
7101c77fb0  mov w1,wzr
7101c77fb4  blr x8
7101c77fb8  ldr x0,[x19, #0xc8]!
7101c77fbc  ldr x8,[x0]
7101c77fc0  ldr x8,[x8, #0x60]
7101c77fc4  mov w1,#0x1
7101c77fc8  blr x8
7101c77fcc  ldr x0,[x19]
7101c77fd0  ldr x8,[x0]
7101c77fd4  ldr x8,[x8, #0x70]
7101c77fd8  mov w1,#0x1
7101c77fdc  blr x8
7101c77fe0  mov w1,#0x8
7101c77fe4  mov w2,#0x1
7101c77fe8  mov x0,x19
7101c77fec  bl 0x7103771a80
7101c77ff0  sub x0,x19,#0xa0
7101c77ff4  adrp x1,0x71043cf000
7101c77ff8  add x1,x1,#0xca4
7101c77ffc  mov x8,sp
7101c78000  bl 0x7103776910
7101c78004  ldrb w10,[x19, #0x1d]
7101c78008  adrp x8,0x71042a3000
7101c7800c  add x8,x8,#0x143
7101c78010  adrp x9,0x7104291000
7101c78014  add x9,x9,#0xcc3
7101c78018  cmp w10,#0x0
7101c7801c  csel x1,x9,x8,eq
7101c78020  mov x0,sp
7101c78024  bl 0x710377a120
7101c78028  ldr x0,[sp, #0x8]
7101c7802c  adrp x8,0x710523d000
7101c78030  add x8,x8,#0x9a8
7101c78034  stp x8,xzr,[sp]
7101c78038  cbz x0,0x7101c78040
7101c7803c  bl 0x710392eb40
7101c78040  ldp x29,x30,[sp, #0x50]
7101c78044  ldp x20,x19,[sp, #0x40]
7101c78048  ldp x22,x21,[sp, #0x30]
7101c7804c  ldp x24,x23,[sp, #0x20]
7101c78050  ldp x26,x25,[sp, #0x10]
7101c78054  add sp,sp,#0x60
7101c78058  ret
7101c7805c  bl 0x71039c2650
