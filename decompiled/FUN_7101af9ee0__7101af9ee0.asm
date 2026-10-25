// addr:      7101af9ee0
// offset:    0x1af9ee0
// name:      FUN_7101af9ee0
// mangled:   
// size:      548

7101af9ee0  sub sp,sp,#0x30
7101af9ee4  stp x20,x19,[sp, #0x10]
7101af9ee8  stp x29,x30,[sp, #0x20]
7101af9eec  add x29,sp,#0x20
7101af9ef0  ldr w8,[x0, #0xec]
7101af9ef4  mov x19,x0
7101af9ef8  cbnz w8,0x7101af9fc4
7101af9efc  ldr x9,[x19, #0x130]
7101af9f00  ldr x9,[x9]
7101af9f04  ldrb w8,[x19, #0x1f0]
7101af9f08  ldr x0,[x9]
7101af9f0c  cbz w8,0x7101af9f18
7101af9f10  mov w1,wzr
7101af9f14  b 0x7101af9f1c
7101af9f18  mov w1,#0x1
7101af9f1c  bl 0x71037760f0
7101af9f20  ldr x8,[x19, #0x130]
7101af9f24  ldr x8,[x8]
7101af9f28  ldr x8,[x8]
7101af9f2c  adrp x9,0x710593b000
7101af9f30  ldr x9,[x9, #0x988]
7101af9f34  ldr x9,[x9, #0x8]
7101af9f38  ldr x8,[x8, #0x600]
7101af9f3c  ldr w8,[x8, #0x494]
7101af9f40  mov w10,#0x1
7101af9f44  lsl w8,w10,w8
7101af9f48  ldr w10,[x9]
7101af9f4c  bic w8,w10,w8
7101af9f50  str w8,[x9]
7101af9f54  ldr w8,[x19, #0x1fc]
7101af9f58  cmp w8,#0x2
7101af9f5c  b.eq 0x7101af9fc4
7101af9f60  ldr x8,[x19, #0x130]
7101af9f64  ldr x20,[x8]
7101af9f68  mov x8,sp
7101af9f6c  add x0,x20,#0x8
7101af9f70  adrp x1,0x71043ad000
7101af9f74  add x1,x1,#0xfe3
7101af9f78  bl 0x7103776910
7101af9f7c  ldr x0,[sp, #0x8]
7101af9f80  ldr x8,[x0]
7101af9f84  cbz x8,0x7101af9f94
7101af9f88  ldrb w9,[x8, #0x58]
7101af9f8c  orr w9,w9,#0x1
7101af9f90  strb w9,[x8, #0x58]
7101af9f94  adrp x8,0x710523d000
7101af9f98  add x8,x8,#0x9a8
7101af9f9c  stp x8,xzr,[sp]
7101af9fa0  cbz x0,0x7101af9fa8
7101af9fa4  bl 0x710392eb40
7101af9fa8  ldr x0,[x20, #0x10]
7101af9fac  fmov s0,0x3f800000
7101af9fb0  adrp x1,0x7104291000
7101af9fb4  add x1,x1,#0x7af
7101af9fb8  bl 0x7103778300
7101af9fbc  mov w8,#0x2
7101af9fc0  str w8,[x19, #0x1fc]
7101af9fc4  mov x0,x19
7101af9fc8  bl 0x7101afa380
7101af9fcc  ldr x8,[x19, #0x120]
7101af9fd0  cbz x8,0x7101afa0f0
7101af9fd4  mov x0,x19
7101af9fd8  bl 0x7101afa660
7101af9fdc  sub w8,w0,#0x1
7101af9fe0  cmp w8,#0x6
7101af9fe4  b.hi 0x7101afa0f0
7101af9fe8  adrp x9,0x71044f8000
7101af9fec  add x9,x9,#0x478
7101af9ff0  lsr x20,x0,#0x20
7101af9ff4  ldrsw x8,[x9, x8, LSL #0x2]
7101af9ff8  add x8,x8,x9
7101af9ffc  br x8
7101afa000  ldr x8,[x19, #0x130]
7101afa004  ldr x8,[x8]
7101afa008  ldr x0,[x8]
7101afa00c  mov w1,wzr
7101afa010  bl 0x71037760f0
7101afa014  ldr x8,[x19, #0x130]
7101afa018  ldr x8,[x8]
7101afa01c  ldr x8,[x8]
7101afa020  adrp x9,0x710593b000
7101afa024  ldr x9,[x9, #0x988]
7101afa028  ldr x9,[x9, #0x8]
7101afa02c  mov w10,#0x1
7101afa030  cmp w20,#0x0
7101afa034  cset w1,ne
7101afa038  ldr x8,[x8, #0x600]
7101afa03c  ldr w8,[x8, #0x494]
7101afa040  lsl w8,w10,w8
7101afa044  ldr w10,[x9]
7101afa048  bic w8,w10,w8
7101afa04c  mov x0,x19
7101afa050  str w8,[x9]
7101afa054  bl 0x7101afbb40
7101afa058  ldrsw x8,[x19, #0xe4]
7101afa05c  cmp w8,#0x13
7101afa060  b.cs 0x7101afa100
7101afa064  add x8,x19,x8, LSL #0x2
7101afa068  mov w9,#0x2
7101afa06c  str w9,[x8, #0x98]
7101afa070  ldr w8,[x19, #0xe4]
7101afa074  cmp w8,#0x11
7101afa078  b.gt 0x7101afa0f0
7101afa07c  add w8,w8,#0x1
7101afa080  cmp w8,#0x13
7101afa084  str w8,[x19, #0xe4]
7101afa088  b.cs 0x7101afa100
7101afa08c  add x8,x19,w8, SXTW  #0x2
7101afa090  mov w9,#0x1
7101afa094  b 0x7101afa0ec
7101afa098  ldr w8,[x19, #0x1e4]
7101afa09c  cbnz w8,0x7101afa0f0
7101afa0a0  cmp w20,#0x0
7101afa0a4  cset w1,ne
7101afa0a8  mov x0,x19
7101afa0ac  bl 0x7101afbc50
7101afa0b0  ldrsw x8,[x19, #0xe4]
7101afa0b4  cmp w8,#0x13
7101afa0b8  b.cs 0x7101afa100
7101afa0bc  add x8,x19,x8, LSL #0x2
7101afa0c0  str wzr,[x8, #0x98]
7101afa0c4  b 0x7101afa0f0
7101afa0c8  cmp w20,#0x0
7101afa0cc  cset w1,ne
7101afa0d0  mov x0,x19
7101afa0d4  bl 0x7101afd000
7101afa0d8  ldrsw x8,[x19, #0xe4]
7101afa0dc  cmp w8,#0x13
7101afa0e0  b.cs 0x7101afa100
7101afa0e4  add x8,x19,x8, LSL #0x2
7101afa0e8  orr w9,wzr,#0x6
7101afa0ec  str w9,[x8, #0x98]
7101afa0f0  ldp x29,x30,[sp, #0x20]
7101afa0f4  ldp x20,x19,[sp, #0x10]
7101afa0f8  add sp,sp,#0x30
7101afa0fc  ret
7101afa100  bl 0x71039c2650
