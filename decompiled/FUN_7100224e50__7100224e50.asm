// addr:      7100224e50
// offset:    0x224e50
// name:      FUN_7100224e50
// mangled:   
// size:      380

7100224e50  cmp x2,#0x400
7100224e54  b.cs 0x7100224e60
7100224e58  mov w0,wzr
7100224e5c  ret
7100224e60  str x28,[sp, #-0x50]!
7100224e64  stp x24,x23,[sp, #0x10]
7100224e68  stp x22,x21,[sp, #0x20]
7100224e6c  stp x20,x19,[sp, #0x30]
7100224e70  stp x29,x30,[sp, #0x40]
7100224e74  add x29,sp,#0x40
7100224e78  sub sp,sp,#0x960
7100224e7c  mov x19,x2
7100224e80  mov x20,x1
7100224e84  mov x22,x0
7100224e88  add x0,sp,#0x560
7100224e8c  mov w2,#0x400
7100224e90  mov w1,wzr
7100224e94  mov x21,x4
7100224e98  mov x23,x3
7100224e9c  bl 0x71039c02a0
7100224ea0  add x0,sp,#0x160
7100224ea4  mov w2,#0x400
7100224ea8  mov w1,wzr
7100224eac  bl 0x71039c02a0
7100224eb0  stp xzr,xzr,[sp, #0x150]
7100224eb4  add x0,sp,#0x8
7100224eb8  stp xzr,xzr,[sp, #0x140]
7100224ebc  str xzr,[sp, #0x58]
7100224ec0  stp xzr,xzr,[sp, #0x130]
7100224ec4  stp xzr,xzr,[sp, #0x120]
7100224ec8  stp xzr,xzr,[sp, #0x110]
7100224ecc  stp xzr,xzr,[sp, #0x100]
7100224ed0  stp xzr,xzr,[sp, #0xf0]
7100224ed4  stp xzr,xzr,[sp, #0xe0]
7100224ed8  stp xzr,xzr,[sp, #0xd0]
7100224edc  stp xzr,xzr,[sp, #0xc0]
7100224ee0  stp xzr,xzr,[sp, #0xb0]
7100224ee4  stp xzr,xzr,[sp, #0xa0]
7100224ee8  stp xzr,xzr,[sp, #0x90]
7100224eec  stp xzr,xzr,[sp, #0x80]
7100224ef0  stp xzr,xzr,[sp, #0x70]
7100224ef4  stp xzr,xzr,[sp, #0x60]
7100224ef8  stp xzr,xzr,[sp, #0x8]
7100224efc  stp xzr,xzr,[sp, #0x18]
7100224f00  stp xzr,xzr,[sp, #0x28]
7100224f04  stp xzr,xzr,[sp, #0x38]
7100224f08  stp xzr,xzr,[sp, #0x48]
7100224f0c  ldr x1,[x23, #0x18]
7100224f10  bl 0x71001dc540
7100224f14  mov w8,w0
7100224f18  mov w0,wzr
7100224f1c  tbz w8,#0x0,0x7100224fb0
7100224f20  ldr x3,[sp, #0x58]
7100224f24  adrp x23,0x71042a2000
7100224f28  add x23,x23,#0xae
7100224f2c  add x0,sp,#0x160
7100224f30  mov w1,#0x400
7100224f34  mov x2,x23
7100224f38  bl 0x71039c04d0
7100224f3c  ldr x8,[sp, #0x58]
7100224f40  ldr x3,[sp, #0x38]
7100224f44  add x0,sp,#0x60
7100224f48  add x24,sp,#0x60
7100224f4c  add x8,x8,#0x1
7100224f50  sub x1,x8,x3
7100224f54  mov x2,x23
7100224f58  strb wzr,[sp, #0x55f]
7100224f5c  bl 0x71039c04d0
7100224f60  ldr x8,[sp, #0x58]
7100224f64  ldr x9,[sp, #0x38]
7100224f68  sub x8,x8,x9
7100224f6c  strb wzr,[x24, x8, LSL ]
7100224f70  ldr x5,[x22, #0x20]
7100224f74  ldr x6,[x21, #0x18]
7100224f78  adrp x2,0x710424e000
7100224f7c  add x2,x2,#0xa5b
7100224f80  add x0,sp,#0x560
7100224f84  mov w1,#0x400
7100224f88  add x3,sp,#0x160
7100224f8c  add x4,sp,#0x60
7100224f90  bl 0x71039c04d0
7100224f94  add x0,sp,#0x560
7100224f98  mov x1,x20
7100224f9c  mov x2,x19
7100224fa0  bl 0x71001b5de0
7100224fa4  add x8,x20,x19
7100224fa8  mov w0,#0x1
7100224fac  sturb wzr,[x8, #-0x1]
7100224fb0  add sp,sp,#0x960
7100224fb4  ldp x29,x30,[sp, #0x40]
7100224fb8  ldp x20,x19,[sp, #0x30]
7100224fbc  ldp x22,x21,[sp, #0x20]
7100224fc0  ldp x24,x23,[sp, #0x10]
7100224fc4  ldr x28,[sp], #0x50
7100224fc8  ret
