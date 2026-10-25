// addr:      7101cd22c0
// offset:    0x1cd22c0
// name:      FUN_7101cd22c0
// mangled:   
// size:      212

7101cd22c0  ldr w8,[x0, #0xe8]
7101cd22c4  cmp w8,#0x1
7101cd22c8  b.eq 0x7101cd2390
7101cd22cc  str d8,[sp, #-0x20]!
7101cd22d0  str x19,[sp, #0x8]
7101cd22d4  stp x29,x30,[sp, #0x10]
7101cd22d8  add x29,sp,#0x10
7101cd22dc  ldr x8,[x0, #0x100]
7101cd22e0  mov x19,x0
7101cd22e4  ldr x0,[x8]
7101cd22e8  mov w2,#0x6fff
7101cd22ec  movk w2,#0x1, LSL #16
7101cd22f0  mov w1,#0x1
7101cd22f4  bl 0x7103775dc0
7101cd22f8  ldr x8,[x19, #0x100]
7101cd22fc  ldr x8,[x8]
7101cd2300  fmov s8,0x3f800000
7101cd2304  mov v0.16B,v8.16B
7101cd2308  adrp x1,0x7104318000
7101cd230c  add x1,x1,#0xffb
7101cd2310  ldr x0,[x8, #0x10]
7101cd2314  bl 0x7103778300
7101cd2318  ldr x8,[x19, #0x100]
7101cd231c  ldr x8,[x8]
7101cd2320  ldr x0,[x8, #0x10]
7101cd2324  mov v0.16B,v8.16B
7101cd2328  adrp x1,0x710438c000
7101cd232c  add x1,x1,#0xbd1
7101cd2330  bl 0x7103778300
7101cd2334  ldr x8,[x19, #0x100]
7101cd2338  ldr x8,[x8]
7101cd233c  ldr x0,[x8]
7101cd2340  mov w1,wzr
7101cd2344  bl 0x71037760f0
7101cd2348  mov x8,#0x6
7101cd234c  movk x8,#0x2, LSL #32
7101cd2350  str wzr,[x19, #0xe0]
7101cd2354  stp xzr,xzr,[x19, #0x8]
7101cd2358  strb wzr,[x19, #0xf4]
7101cd235c  str x8,[x19, #0x98]
7101cd2360  orr x8,xzr,#-0x100000000
7101cd2364  strb wzr,[x19, #0x131]
7101cd2368  stur x8,[x19, #0xec]
7101cd236c  orr x8,xzr,#-0xffffffff
7101cd2370  stur x8,[x19, #0xe4]
7101cd2374  stp xzr,xzr,[x19, #0xd0]
7101cd2378  stp xzr,xzr,[x19, #0xc0]
7101cd237c  stp xzr,xzr,[x19, #0xb0]
7101cd2380  stp xzr,xzr,[x19, #0xa0]
7101cd2384  ldr x19,[sp, #0x8]
7101cd2388  ldp x29,x30,[sp, #0x10]
7101cd238c  ldr d8,[sp], #0x20
7101cd2390  ret
