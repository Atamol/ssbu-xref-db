// addr:      7101af9c60
// offset:    0x1af9c60
// name:      FUN_7101af9c60
// mangled:   
// size:      472

7101af9c60  sub sp,sp,#0x30
7101af9c64  stp x20,x19,[sp, #0x10]
7101af9c68  stp x29,x30,[sp, #0x20]
7101af9c6c  add x29,sp,#0x20
7101af9c70  ldr w8,[x0, #0xec]
7101af9c74  mov x19,x0
7101af9c78  cbnz w8,0x7101af9cf4
7101af9c7c  ldr w8,[x19, #0x1fc]
7101af9c80  cmp w8,#0x1
7101af9c84  str wzr,[x19, #0x1d4]
7101af9c88  str wzr,[x19, #0x1dc]
7101af9c8c  b.eq 0x7101af9cf4
7101af9c90  ldr x8,[x19, #0x130]
7101af9c94  ldr x20,[x8]
7101af9c98  mov x8,sp
7101af9c9c  add x0,x20,#0x8
7101af9ca0  adrp x1,0x71043ad000
7101af9ca4  add x1,x1,#0xfe3
7101af9ca8  bl 0x7103776910
7101af9cac  ldr x0,[sp, #0x8]
7101af9cb0  ldr x8,[x0]
7101af9cb4  cbz x8,0x7101af9cc4
7101af9cb8  ldrb w9,[x8, #0x58]
7101af9cbc  orr w9,w9,#0x1
7101af9cc0  strb w9,[x8, #0x58]
7101af9cc4  adrp x8,0x710523d000
7101af9cc8  add x8,x8,#0x9a8
7101af9ccc  stp x8,xzr,[sp]
7101af9cd0  cbz x0,0x7101af9cd8
7101af9cd4  bl 0x710392eb40
7101af9cd8  ldr x0,[x20, #0x10]
7101af9cdc  fmov s0,0x3f800000
7101af9ce0  adrp x1,0x71042a3000
7101af9ce4  add x1,x1,#0x672
7101af9ce8  bl 0x7103778300
7101af9cec  mov w8,#0x1
7101af9cf0  str w8,[x19, #0x1fc]
7101af9cf4  mov x0,x19
7101af9cf8  bl 0x7101afd490
7101af9cfc  ldr x8,[x19, #0x120]
7101af9d00  cbz x8,0x7101af9e24
7101af9d04  mov x0,x19
7101af9d08  bl 0x7101afa660
7101af9d0c  sub w8,w0,#0x2
7101af9d10  cmp w8,#0x4
7101af9d14  b.hi 0x7101af9e24
7101af9d18  adrp x9,0x71044f8000
7101af9d1c  add x9,x9,#0x464
7101af9d20  lsr x20,x0,#0x20
7101af9d24  ldrsw x8,[x9, x8, LSL #0x2]
7101af9d28  add x8,x8,x9
7101af9d2c  br x8
7101af9d30  cmp w20,#0x0
7101af9d34  cset w1,ne
7101af9d38  mov x0,x19
7101af9d3c  bl 0x7101afdbe0
7101af9d40  ldrb w8,[x19, #0x1f4]
7101af9d44  cbz w8,0x7101af9e10
7101af9d48  ldr w8,[x19, #0x1e4]
7101af9d4c  cmp w8,#0x1
7101af9d50  b.ne 0x7101af9e00
7101af9d54  cmp w20,#0x0
7101af9d58  mov x0,x19
7101af9d5c  mov w1,wzr
7101af9d60  cset w20,ne
7101af9d64  bl 0x7101afb9a0
7101af9d68  mov x0,x19
7101af9d6c  mov w1,w20
7101af9d70  bl 0x7101afdcf0
7101af9d74  ldrsw x8,[x19, #0xe4]
7101af9d78  cmp w8,#0x13
7101af9d7c  b.cs 0x7101af9e34
7101af9d80  add x8,x19,x8, LSL #0x2
7101af9d84  mov w9,#0x5
7101af9d88  str w9,[x8, #0x98]
7101af9d8c  b 0x7101af9e24
7101af9d90  cmp w20,#0x0
7101af9d94  cset w20,ne
7101af9d98  mov x0,x19
7101af9d9c  mov w1,w20
7101af9da0  bl 0x7101afdcf0
7101af9da4  mov x0,x19
7101af9da8  mov w1,w20
7101af9dac  bl 0x7101afd000
7101af9db0  b 0x7101af9e24
7101af9db4  cmp w20,#0x0
7101af9db8  cset w8,ne
7101af9dbc  cmp w1,#0x0
7101af9dc0  cset w2,ne
7101af9dc4  mov x0,x19
7101af9dc8  mov w1,w8
7101af9dcc  bl 0x7101afd1f0
7101af9dd0  ldrsw x8,[x19, #0xe4]
7101af9dd4  cmp w8,#0x13
7101af9dd8  b.cs 0x7101af9e34
7101af9ddc  add x8,x19,x8, LSL #0x2
7101af9de0  mov w9,#0x2
7101af9de4  str w9,[x8, #0x98]
7101af9de8  b 0x7101af9e24
7101af9dec  cmp w20,#0x0
7101af9df0  cset w1,ne
7101af9df4  mov x0,x19
7101af9df8  bl 0x7101afbc50
7101af9dfc  b 0x7101af9e24
7101af9e00  cmp w20,#0x0
7101af9e04  cset w1,ne
7101af9e08  mov x0,x19
7101af9e0c  bl 0x7101afbc50
7101af9e10  ldrsw x8,[x19, #0xe4]
7101af9e14  cmp w8,#0x13
7101af9e18  b.cs 0x7101af9e34
7101af9e1c  add x8,x19,x8, LSL #0x2
7101af9e20  str wzr,[x8, #0x98]
7101af9e24  ldp x29,x30,[sp, #0x20]
7101af9e28  ldp x20,x19,[sp, #0x10]
7101af9e2c  add sp,sp,#0x30
7101af9e30  ret
7101af9e34  bl 0x71039c2650
