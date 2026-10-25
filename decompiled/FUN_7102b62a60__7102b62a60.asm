// addr:      7102b62a60
// offset:    0x2b62a60
// name:      FUN_7102b62a60
// mangled:   
// size:      320

7102b62a60  sub sp,sp,#0x1b0
7102b62a64  str x28,[sp, #0x160]
7102b62a68  stp x24,x23,[sp, #0x170]
7102b62a6c  stp x22,x21,[sp, #0x180]
7102b62a70  stp x20,x19,[sp, #0x190]
7102b62a74  stp x29,x30,[sp, #0x1a0]
7102b62a78  add x29,sp,#0x1a0
7102b62a7c  add x8,sp,#0x8
7102b62a80  adrp x9,0x7104306000
7102b62a84  add x9,x9,#0x7c6
7102b62a88  adrp x10,0x71043bc000
7102b62a8c  add x10,x10,#0x7d1
7102b62a90  str wzr,[sp, #0x8]
7102b62a94  cmp w1,#0x1
7102b62a98  add x20,x8,#0x44
7102b62a9c  strb wzr,[sp, #0xc]
7102b62aa0  add x21,x8,#0x88
7102b62aa4  add x22,x8,#0xcc
7102b62aa8  str wzr,[sp, #0x4c]
7102b62aac  csel x8,x10,x9,eq
7102b62ab0  cmp w1,#0x0
7102b62ab4  strb wzr,[sp, #0x50]
7102b62ab8  mov w4,w3
7102b62abc  csel x3,x9,x8,eq
7102b62ac0  str wzr,[sp, #0x90]
7102b62ac4  adrp x8,0x710439b000
7102b62ac8  add x8,x8,#0x3be
7102b62acc  strb wzr,[sp, #0x94]
7102b62ad0  adrp x9,0x710426e000
7102b62ad4  add x9,x9,#0x64
7102b62ad8  str wzr,[sp, #0xd4]
7102b62adc  cmp w2,#0x1
7102b62ae0  csel x8,x9,x8,eq
7102b62ae4  strb wzr,[sp, #0xd8]
7102b62ae8  adrp x9,0x71042b2000
7102b62aec  add x9,x9,#0xc92
7102b62af0  cmp w2,#0x2
7102b62af4  mov x19,x0
7102b62af8  csel x5,x9,x8,eq
7102b62afc  adrp x2,0x7104463000
7102b62b00  add x2,x2,#0xd4c
7102b62b04  sub x0,x29,#0x88
7102b62b08  sub x23,x29,#0x88
7102b62b0c  bl 0x710176bcc0
7102b62b10  add x23,x23,#0x8
7102b62b14  adrp x24,0x7104463000
7102b62b18  add x24,x24,#0xd5c
7102b62b1c  add x0,sp,#0x8
7102b62b20  mov w1,wzr
7102b62b24  mov x2,x23
7102b62b28  mov x3,x24
7102b62b2c  bl 0x7102b63800
7102b62b30  mov w1,#0x1
7102b62b34  mov x0,x20
7102b62b38  mov x2,x23
7102b62b3c  mov x3,x24
7102b62b40  bl 0x7102b63800
7102b62b44  mov w1,#0x2
7102b62b48  mov x0,x21
7102b62b4c  mov x2,x23
7102b62b50  mov x3,x24
7102b62b54  bl 0x7102b63800
7102b62b58  orr w1,wzr,#0x3
7102b62b5c  mov x0,x22
7102b62b60  mov x2,x23
7102b62b64  mov x3,x24
7102b62b68  bl 0x7102b63800
7102b62b6c  add x1,sp,#0x8
7102b62b70  sub x2,x29,#0x88
7102b62b74  mov x0,x19
7102b62b78  stp xzr,xzr,[x29, #-0x78]
7102b62b7c  stp xzr,xzr,[x29, #-0x88]
7102b62b80  bl 0x7102b61160
7102b62b84  ldp x29,x30,[sp, #0x1a0]
7102b62b88  ldr x28,[sp, #0x160]
7102b62b8c  ldp x20,x19,[sp, #0x190]
7102b62b90  ldp x22,x21,[sp, #0x180]
7102b62b94  ldp x24,x23,[sp, #0x170]
7102b62b98  add sp,sp,#0x1b0
7102b62b9c  ret
