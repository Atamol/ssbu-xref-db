// addr:      7102b62ba0
// offset:    0x2b62ba0
// name:      FUN_7102b62ba0
// mangled:   
// size:      320

7102b62ba0  sub sp,sp,#0x1b0
7102b62ba4  str x28,[sp, #0x160]
7102b62ba8  stp x24,x23,[sp, #0x170]
7102b62bac  stp x22,x21,[sp, #0x180]
7102b62bb0  stp x20,x19,[sp, #0x190]
7102b62bb4  stp x29,x30,[sp, #0x1a0]
7102b62bb8  add x29,sp,#0x1a0
7102b62bbc  add x8,sp,#0x8
7102b62bc0  adrp x9,0x7104306000
7102b62bc4  add x9,x9,#0x7c6
7102b62bc8  adrp x10,0x71043bc000
7102b62bcc  add x10,x10,#0x7d1
7102b62bd0  str wzr,[sp, #0x8]
7102b62bd4  cmp w1,#0x1
7102b62bd8  add x20,x8,#0x44
7102b62bdc  strb wzr,[sp, #0xc]
7102b62be0  add x21,x8,#0x88
7102b62be4  add x22,x8,#0xcc
7102b62be8  str wzr,[sp, #0x4c]
7102b62bec  csel x8,x10,x9,eq
7102b62bf0  cmp w1,#0x0
7102b62bf4  strb wzr,[sp, #0x50]
7102b62bf8  mov w4,w3
7102b62bfc  csel x3,x9,x8,eq
7102b62c00  str wzr,[sp, #0x90]
7102b62c04  adrp x8,0x710439b000
7102b62c08  add x8,x8,#0x3be
7102b62c0c  strb wzr,[sp, #0x94]
7102b62c10  adrp x9,0x710426e000
7102b62c14  add x9,x9,#0x64
7102b62c18  str wzr,[sp, #0xd4]
7102b62c1c  cmp w2,#0x1
7102b62c20  csel x8,x9,x8,eq
7102b62c24  strb wzr,[sp, #0xd8]
7102b62c28  adrp x9,0x71042b2000
7102b62c2c  add x9,x9,#0xc92
7102b62c30  cmp w2,#0x2
7102b62c34  mov x19,x0
7102b62c38  csel x5,x9,x8,eq
7102b62c3c  adrp x2,0x7104463000
7102b62c40  add x2,x2,#0xd4c
7102b62c44  sub x0,x29,#0x88
7102b62c48  sub x23,x29,#0x88
7102b62c4c  bl 0x710176bcc0
7102b62c50  add x23,x23,#0x8
7102b62c54  adrp x24,0x71043ee000
7102b62c58  add x24,x24,#0xc70
7102b62c5c  add x0,sp,#0x8
7102b62c60  mov w1,wzr
7102b62c64  mov x2,x23
7102b62c68  mov x3,x24
7102b62c6c  bl 0x7102b63800
7102b62c70  mov w1,#0x1
7102b62c74  mov x0,x20
7102b62c78  mov x2,x23
7102b62c7c  mov x3,x24
7102b62c80  bl 0x7102b63800
7102b62c84  mov w1,#0x2
7102b62c88  mov x0,x21
7102b62c8c  mov x2,x23
7102b62c90  mov x3,x24
7102b62c94  bl 0x7102b63800
7102b62c98  orr w1,wzr,#0x3
7102b62c9c  mov x0,x22
7102b62ca0  mov x2,x23
7102b62ca4  mov x3,x24
7102b62ca8  bl 0x7102b63800
7102b62cac  add x1,sp,#0x8
7102b62cb0  sub x2,x29,#0x88
7102b62cb4  mov x0,x19
7102b62cb8  stp xzr,xzr,[x29, #-0x78]
7102b62cbc  stp xzr,xzr,[x29, #-0x88]
7102b62cc0  bl 0x7102b61160
7102b62cc4  ldp x29,x30,[sp, #0x1a0]
7102b62cc8  ldr x28,[sp, #0x160]
7102b62ccc  ldp x20,x19,[sp, #0x190]
7102b62cd0  ldp x22,x21,[sp, #0x180]
7102b62cd4  ldp x24,x23,[sp, #0x170]
7102b62cd8  add sp,sp,#0x1b0
7102b62cdc  ret
