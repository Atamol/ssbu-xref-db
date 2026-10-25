// addr:      7101ed7db0
// offset:    0x1ed7db0
// name:      FUN_7101ed7db0
// mangled:   
// size:      752

7101ed7db0  sub sp,sp,#0xb0
7101ed7db4  stp x26,x25,[sp, #0x60]
7101ed7db8  stp x24,x23,[sp, #0x70]
7101ed7dbc  stp x22,x21,[sp, #0x80]
7101ed7dc0  stp x20,x19,[sp, #0x90]
7101ed7dc4  stp x29,x30,[sp, #0xa0]
7101ed7dc8  add x29,sp,#0xa0
7101ed7dcc  mov w20,#0x9dc5
7101ed7dd0  movk w20,#0x811c, LSL #16
7101ed7dd4  mov x24,#0x6573
7101ed7dd8  movk x24,#0x5f74, LSL #16
7101ed7ddc  mov x25,#0x5f6b
7101ed7de0  movk x25,#0x616c, LSL #16
7101ed7de4  mov w10,#0x305f
7101ed7de8  movk w10,#0x30, LSL #16
7101ed7dec  stur w10,[sp, #0x1a]
7101ed7df0  mov x19,x0
7101ed7df4  stp xzr,xzr,[sp, #0x50]
7101ed7df8  mov x23,#0x1500000000
7101ed7dfc  movk x24,#0x6863, LSL #32
7101ed7e00  movk x24,#0x6365, LSL #48
7101ed7e04  movk x25,#0x646e, LSL #32
7101ed7e08  movk x25,#0x6f66, LSL #48
7101ed7e0c  str x25,[sp, #0x10]
7101ed7e10  mov w22,#0x6d72
7101ed7e14  stp x23,x24,[sp]
7101ed7e18  mov w9,#0x73
7101ed7e1c  mov w8,#0x9
7101ed7e20  strh w22,[sp, #0x18]
7101ed7e24  mov w21,#0x89
7101ed7e28  mov x10,sp
7101ed7e2c  str xzr,[sp, #0x48]
7101ed7e30  mov w11,w20
7101ed7e34  mul w11,w11,w21
7101ed7e38  and w9,w9,#0xff
7101ed7e3c  eor w11,w11,w9
7101ed7e40  ldrb w9,[x10, x8, LSL ]
7101ed7e44  add x8,x8,#0x1
7101ed7e48  cbnz w9,0x7101ed7e34
7101ed7e4c  add x0,sp,#0x48
7101ed7e50  mov x1,sp
7101ed7e54  str w11,[sp]
7101ed7e58  mov x26,sp
7101ed7e5c  bl 0x71019c1c50
7101ed7e60  mov w11,#0x305f
7101ed7e64  movk w11,#0x31, LSL #16
7101ed7e68  mov w9,#0x73
7101ed7e6c  mov w8,#0x9
7101ed7e70  mov w10,w20
7101ed7e74  str x25,[sp, #0x10]
7101ed7e78  stp x23,x24,[sp]
7101ed7e7c  strh w22,[sp, #0x18]
7101ed7e80  stur w11,[sp, #0x1a]
7101ed7e84  mul w10,w10,w21
7101ed7e88  and w9,w9,#0xff
7101ed7e8c  eor w10,w10,w9
7101ed7e90  ldrb w9,[x26, x8, LSL ]
7101ed7e94  add x8,x8,#0x1
7101ed7e98  cbnz w9,0x7101ed7e84
7101ed7e9c  ldp x8,x9,[sp, #0x50]
7101ed7ea0  cmp x8,x9
7101ed7ea4  str w10,[sp]
7101ed7ea8  b.cs 0x7101ed7ef8
7101ed7eac  mov x10,sp
7101ed7eb0  mov x9,xzr
7101ed7eb4  str wzr,[x8]
7101ed7eb8  add x10,x10,#0x8
7101ed7ebc  b 0x7101ed7ec8
7101ed7ec0  add x9,x9,#0x2
7101ed7ec4  strb w11,[x12, #0x9]
7101ed7ec8  add x11,x10,x9
7101ed7ecc  ldrb w13,[x11]
7101ed7ed0  cbz w13,0x7101ed7f0c
7101ed7ed4  add w14,w9,#0x1
7101ed7ed8  add x12,x8,x9
7101ed7edc  cmp w14,#0x3f
7101ed7ee0  strb w13,[x12, #0x8]
7101ed7ee4  b.cs 0x7101ed7f08
7101ed7ee8  ldrb w11,[x11, #0x1]
7101ed7eec  cbnz w11,0x7101ed7ec0
7101ed7ef0  add x9,x9,#0x1
7101ed7ef4  b 0x7101ed7f0c
7101ed7ef8  add x0,sp,#0x48
7101ed7efc  mov x1,sp
7101ed7f00  bl 0x71019c1c50
7101ed7f04  b 0x7101ed7f50
7101ed7f08  add w9,w9,#0x1
7101ed7f0c  add x10,x8,#0x8
7101ed7f10  strb wzr,[x10, w9, UXTW ]
7101ed7f14  str w9,[x8, #0x4]
7101ed7f18  ldrb w9,[x8, #0x8]
7101ed7f1c  mov w11,w20
7101ed7f20  cbz w9,0x7101ed7f40
7101ed7f24  add x10,x8,#0x9
7101ed7f28  mov w11,w20
7101ed7f2c  mul w11,w11,w21
7101ed7f30  and w9,w9,#0xff
7101ed7f34  eor w11,w11,w9
7101ed7f38  ldrb w9,[x10], #0x1
7101ed7f3c  cbnz w9,0x7101ed7f2c
7101ed7f40  str w11,[x8]
7101ed7f44  ldr x8,[sp, #0x50]
7101ed7f48  add x8,x8,#0x48
7101ed7f4c  str x8,[sp, #0x50]
7101ed7f50  mov w12,#0x305f
7101ed7f54  movk w12,#0x32, LSL #16
7101ed7f58  mov w9,#0x73
7101ed7f5c  mov w8,#0x9
7101ed7f60  mov x10,sp
7101ed7f64  str x25,[sp, #0x10]
7101ed7f68  mov w11,w20
7101ed7f6c  stp x23,x24,[sp]
7101ed7f70  strh w22,[sp, #0x18]
7101ed7f74  stur w12,[sp, #0x1a]
7101ed7f78  mul w11,w11,w21
7101ed7f7c  and w9,w9,#0xff
7101ed7f80  eor w11,w11,w9
7101ed7f84  ldrb w9,[x10, x8, LSL ]
7101ed7f88  add x8,x8,#0x1
7101ed7f8c  cbnz w9,0x7101ed7f78
7101ed7f90  ldp x8,x9,[sp, #0x50]
7101ed7f94  cmp x8,x9
7101ed7f98  str w11,[sp]
7101ed7f9c  b.cs 0x7101ed7fec
7101ed7fa0  mov x10,sp
7101ed7fa4  mov x9,xzr
7101ed7fa8  str wzr,[x8]
7101ed7fac  add x10,x10,#0x8
7101ed7fb0  b 0x7101ed7fbc
7101ed7fb4  add x9,x9,#0x2
7101ed7fb8  strb w11,[x12, #0x9]
7101ed7fbc  add x11,x10,x9
7101ed7fc0  ldrb w13,[x11]
7101ed7fc4  cbz w13,0x7101ed8000
7101ed7fc8  add w14,w9,#0x1
7101ed7fcc  add x12,x8,x9
7101ed7fd0  cmp w14,#0x3f
7101ed7fd4  strb w13,[x12, #0x8]
7101ed7fd8  b.cs 0x7101ed7ffc
7101ed7fdc  ldrb w11,[x11, #0x1]
7101ed7fe0  cbnz w11,0x7101ed7fb4
7101ed7fe4  add x9,x9,#0x1
7101ed7fe8  b 0x7101ed8000
7101ed7fec  add x0,sp,#0x48
7101ed7ff0  mov x1,sp
7101ed7ff4  bl 0x71019c1c50
7101ed7ff8  b 0x7101ed803c
7101ed7ffc  add w9,w9,#0x1
7101ed8000  add x10,x8,#0x8
7101ed8004  strb wzr,[x10, w9, UXTW ]
7101ed8008  ldrb w10,[x8, #0x8]
7101ed800c  str w9,[x8, #0x4]
7101ed8010  cbz w10,0x7101ed802c
7101ed8014  add x9,x8,#0x9
7101ed8018  mul w11,w20,w21
7101ed801c  and w10,w10,#0xff
7101ed8020  eor w20,w11,w10
7101ed8024  ldrb w10,[x9], #0x1
7101ed8028  cbnz w10,0x7101ed8018
7101ed802c  str w20,[x8]
7101ed8030  ldr x8,[sp, #0x50]
7101ed8034  add x8,x8,#0x48
7101ed8038  str x8,[sp, #0x50]
7101ed803c  adrp x1,0x710425f000
7101ed8040  add x1,x1,#0xca8
7101ed8044  add x2,sp,#0x48
7101ed8048  mov x0,x19
7101ed804c  bl 0x7101ec4640
7101ed8050  mov x0,x19
7101ed8054  mov w1,wzr
7101ed8058  bl 0x7101ed3e20
7101ed805c  mov w1,#0x1
7101ed8060  mov x0,x19
7101ed8064  bl 0x7101ed3e20
7101ed8068  mov w1,#0x2
7101ed806c  mov x0,x19
7101ed8070  bl 0x7101ed3e20
7101ed8074  ldr x0,[sp, #0x48]
7101ed8078  cbz x0,0x7101ed8084
7101ed807c  str x0,[sp, #0x50]
7101ed8080  bl 0x710392eb40
7101ed8084  ldp x29,x30,[sp, #0xa0]
7101ed8088  ldp x20,x19,[sp, #0x90]
7101ed808c  ldp x22,x21,[sp, #0x80]
7101ed8090  ldp x24,x23,[sp, #0x70]
7101ed8094  ldp x26,x25,[sp, #0x60]
7101ed8098  add sp,sp,#0xb0
7101ed809c  ret
