// addr:      7101ef1f70
// offset:    0x1ef1f70
// name:      FUN_7101ef1f70
// mangled:   
// size:      1144

7101ef1f70  sub sp,sp,#0x50
7101ef1f74  stp x22,x21,[sp, #0x20]
7101ef1f78  stp x20,x19,[sp, #0x30]
7101ef1f7c  stp x29,x30,[sp, #0x40]
7101ef1f80  add x29,sp,#0x40
7101ef1f84  ldr x9,[x0, #0x270]
7101ef1f88  ldr w8,[x0, #0x24c]
7101ef1f8c  mov x19,x0
7101ef1f90  ldr x20,[x9, #0x8]
7101ef1f94  cbz w8,0x7101ef202c
7101ef1f98  ldr x8,[x20, #0x2a8]
7101ef1f9c  ldr w8,[x8, #0xf0]
7101ef1fa0  cmn w8,#0x1
7101ef1fa4  b.eq 0x7101ef213c
7101ef1fa8  ldr w8,[x20, #0x1f8]
7101ef1fac  cmp w8,#0x0
7101ef1fb0  mov w21,wzr
7101ef1fb4  cset w20,eq
7101ef1fb8  ldr x8,[x19, #0x278]
7101ef1fbc  ldr x0,[x8, #0x8]
7101ef1fc0  ldr x8,[x0, #0x2a8]
7101ef1fc4  ldr w8,[x8, #0xf0]
7101ef1fc8  cmn w8,#0x1
7101ef1fcc  b.eq 0x7101ef2158
7101ef1fd0  ldr w8,[x0, #0x1f8]
7101ef1fd4  cmp w8,#0x0
7101ef1fd8  cset w8,eq
7101ef1fdc  and w8,w20,w8
7101ef1fe0  tbz w8,#0x0,0x7101ef23d0
7101ef1fe4  ldrsw x8,[x19, #0x244]
7101ef1fe8  cmp w8,#0x13
7101ef1fec  b.cs 0x7101ef23e4
7101ef1ff0  add x8,x19,x8, LSL #0x2
7101ef1ff4  mov w9,#0x4
7101ef1ff8  str w9,[x8, #0x1f8]
7101ef1ffc  tbz w21,#0x0,0x7101ef23d0
7101ef2000  ldr w8,[x19, #0x244]
7101ef2004  cmp w8,#0x11
7101ef2008  b.gt 0x7101ef23d0
7101ef200c  add w8,w8,#0x1
7101ef2010  cmp w8,#0x13
7101ef2014  str w8,[x19, #0x244]
7101ef2018  b.cs 0x7101ef23e4
7101ef201c  add x8,x19,w8, SXTW  #0x2
7101ef2020  orr w9,wzr,#0x3
7101ef2024  str w9,[x8, #0x1f8]
7101ef2028  b 0x7101ef23d0
7101ef202c  ldr x8,[x20, #0x248]
7101ef2030  str x8,[x20, #0x250]
7101ef2034  ldr x8,[x20, #0x2a8]
7101ef2038  ldr w8,[x8, #0xf0]
7101ef203c  cmn w8,#0x1
7101ef2040  b.eq 0x7101ef21e8
7101ef2044  ldr x8,[x20, #0x2a0]
7101ef2048  add x0,x8,#0x118
7101ef204c  adrp x1,0x71042c5000
7101ef2050  add x1,x1,#0x631
7101ef2054  add x8,sp,#0x10
7101ef2058  bl 0x7103776640
7101ef205c  adrp x1,0x7104338000
7101ef2060  add x1,x1,#0xd31
7101ef2064  mov x8,sp
7101ef2068  add x0,sp,#0x10
7101ef206c  bl 0x7103776910
7101ef2070  adrp x1,0x71043e0000
7101ef2074  add x1,x1,#0x9d6
7101ef2078  mov x0,sp
7101ef207c  bl 0x710377a120
7101ef2080  ldr x0,[sp, #0x8]
7101ef2084  adrp x22,0x710523d000
7101ef2088  add x22,x22,#0x9a8
7101ef208c  stp x22,xzr,[sp]
7101ef2090  cbz x0,0x7101ef2098
7101ef2094  bl 0x710392eb40
7101ef2098  ldr x21,[sp, #0x18]
7101ef209c  adrp x8,0x710523d000
7101ef20a0  add x8,x8,#0x988
7101ef20a4  stp x8,xzr,[sp, #0x10]
7101ef20a8  cbz x21,0x7101ef20c4
7101ef20ac  ldr x0,[x21, #0x18]
7101ef20b0  stp x22,xzr,[x21, #0x10]
7101ef20b4  cbz x0,0x7101ef20bc
7101ef20b8  bl 0x710392eb40
7101ef20bc  mov x0,x21
7101ef20c0  bl 0x710392eb40
7101ef20c4  ldr x8,[x20, #0x2a0]
7101ef20c8  ldr w9,[x8, #0x130]
7101ef20cc  cmp w9,#0x2
7101ef20d0  b.eq 0x7101ef21e8
7101ef20d4  mov w10,#0xffffffff
7101ef20d8  cmp w9,#0x3
7101ef20dc  str wzr,[x8, #0x104]
7101ef20e0  stp xzr,xzr,[x8, #0x18]
7101ef20e4  stur xzr,[x8, #0xfc]
7101ef20e8  stur xzr,[x8, #0xf4]
7101ef20ec  stur xzr,[x8, #0xec]
7101ef20f0  stur xzr,[x8, #0xe4]
7101ef20f4  stur xzr,[x8, #0xdc]
7101ef20f8  stur xzr,[x8, #0xd4]
7101ef20fc  stur xzr,[x8, #0xcc]
7101ef2100  stur xzr,[x8, #0xc4]
7101ef2104  stur xzr,[x8, #0xbc]
7101ef2108  str x10,[x8, #0x108]
7101ef210c  str w10,[x8, #0x110]
7101ef2110  strb wzr,[x8, #0x114]
7101ef2114  str wzr,[x8, #0xb8]
7101ef2118  b.eq 0x7101ef21b0
7101ef211c  cmp w9,#0x1
7101ef2120  b.eq 0x7101ef2198
7101ef2124  cbnz w9,0x7101ef21cc
7101ef2128  mov w9,#0x1
7101ef212c  str w9,[x8, #0x104]
7101ef2130  mov w9,#0x4
7101ef2134  str w9,[x8, #0xbc]
7101ef2138  b 0x7101ef21cc
7101ef213c  ldrb w8,[x20, #0x2b9]
7101ef2140  cbz w8,0x7101ef1fa8
7101ef2144  ldrb w8,[x20, #0x2b8]
7101ef2148  cbz w8,0x7101ef2180
7101ef214c  mov w21,wzr
7101ef2150  mov w20,wzr
7101ef2154  b 0x7101ef1fb8
7101ef2158  ldrb w8,[x0, #0x2b9]
7101ef215c  cbz w8,0x7101ef1fd0
7101ef2160  ldrb w8,[x0, #0x2b8]
7101ef2164  cbnz w8,0x7101ef23d0
7101ef2168  mov w1,wzr
7101ef216c  bl 0x7101f06470
7101ef2170  tbz w20,#0x0,0x7101ef23d0
7101ef2174  eor w8,w0,#0x1
7101ef2178  orr w21,w21,w8
7101ef217c  b 0x7101ef1fe4
7101ef2180  mov x0,x20
7101ef2184  mov w1,wzr
7101ef2188  bl 0x7101f06470
7101ef218c  eor w21,w0,#0x1
7101ef2190  mov w20,#0x1
7101ef2194  b 0x7101ef1fb8
7101ef2198  mov x9,#0x4
7101ef219c  movk x9,#0x3, LSL #32
7101ef21a0  stur x9,[x8, #0xbc]
7101ef21a4  mov w9,#0x2
7101ef21a8  str w9,[x8, #0x104]
7101ef21ac  b 0x7101ef21cc
7101ef21b0  mov x9,#0x4
7101ef21b4  movk x9,#0x3, LSL #32
7101ef21b8  orr w10,wzr,#0x3
7101ef21bc  str w10,[x8, #0x104]
7101ef21c0  stur x9,[x8, #0xbc]
7101ef21c4  orr w9,wzr,#0x7
7101ef21c8  str w9,[x8, #0xc4]
7101ef21cc  ldrsw x9,[x8, #0x134]
7101ef21d0  cmp w9,#0x2
7101ef21d4  b.cs 0x7101ef23e4
7101ef21d8  add x9,x8,x9, LSL #0x2
7101ef21dc  mov w10,#0x2
7101ef21e0  str w10,[x9, #0x128]
7101ef21e4  str w10,[x8, #0x130]
7101ef21e8  ldrsw x8,[x20, #0x1f4]
7101ef21ec  cmp w8,#0x13
7101ef21f0  b.cs 0x7101ef23e4
7101ef21f4  add x8,x20,x8, LSL #0x2
7101ef21f8  mov w9,#0x2
7101ef21fc  str w9,[x8, #0x1a8]
7101ef2200  ldr w8,[x20, #0x1f4]
7101ef2204  cmp w8,#0x11
7101ef2208  b.gt 0x7101ef2228
7101ef220c  add w8,w8,#0x1
7101ef2210  cmp w8,#0x13
7101ef2214  str w8,[x20, #0x1f4]
7101ef2218  b.cs 0x7101ef23e4
7101ef221c  add x8,x20,w8, SXTW  #0x2
7101ef2220  mov w9,#0x4
7101ef2224  str w9,[x8, #0x1a8]
7101ef2228  ldr x8,[x19, #0x278]
7101ef222c  ldr x20,[x8, #0x8]
7101ef2230  ldr x8,[x20, #0x248]
7101ef2234  str x8,[x20, #0x250]
7101ef2238  ldr x8,[x20, #0x2a8]
7101ef223c  ldr w8,[x8, #0xf0]
7101ef2240  cmn w8,#0x1
7101ef2244  b.eq 0x7101ef2390
7101ef2248  ldr x8,[x20, #0x2a0]
7101ef224c  add x0,x8,#0x118
7101ef2250  adrp x1,0x71042c5000
7101ef2254  add x1,x1,#0x631
7101ef2258  add x8,sp,#0x10
7101ef225c  bl 0x7103776640
7101ef2260  adrp x1,0x7104338000
7101ef2264  add x1,x1,#0xd31
7101ef2268  mov x8,sp
7101ef226c  add x0,sp,#0x10
7101ef2270  bl 0x7103776910
7101ef2274  adrp x1,0x71043e0000
7101ef2278  add x1,x1,#0x9d6
7101ef227c  mov x0,sp
7101ef2280  bl 0x710377a120
7101ef2284  ldr x0,[sp, #0x8]
7101ef2288  adrp x21,0x710523d000
7101ef228c  add x21,x21,#0x9a8
7101ef2290  stp x21,xzr,[sp]
7101ef2294  cbz x0,0x7101ef229c
7101ef2298  bl 0x710392eb40
7101ef229c  ldr x19,[sp, #0x18]
7101ef22a0  adrp x8,0x710523d000
7101ef22a4  add x8,x8,#0x988
7101ef22a8  stp x8,xzr,[sp, #0x10]
7101ef22ac  cbz x19,0x7101ef22c8
7101ef22b0  ldr x0,[x19, #0x18]
7101ef22b4  stp x21,xzr,[x19, #0x10]
7101ef22b8  cbz x0,0x7101ef22c0
7101ef22bc  bl 0x710392eb40
7101ef22c0  mov x0,x19
7101ef22c4  bl 0x710392eb40
7101ef22c8  ldr x8,[x20, #0x2a0]
7101ef22cc  ldr w9,[x8, #0x130]
7101ef22d0  cmp w9,#0x2
7101ef22d4  b.eq 0x7101ef2390
7101ef22d8  mov w10,#0xffffffff
7101ef22dc  cmp w9,#0x3
7101ef22e0  str wzr,[x8, #0x104]
7101ef22e4  stp xzr,xzr,[x8, #0x18]
7101ef22e8  stur xzr,[x8, #0xfc]
7101ef22ec  stur xzr,[x8, #0xf4]
7101ef22f0  stur xzr,[x8, #0xec]
7101ef22f4  stur xzr,[x8, #0xe4]
7101ef22f8  stur xzr,[x8, #0xdc]
7101ef22fc  stur xzr,[x8, #0xd4]
7101ef2300  stur xzr,[x8, #0xcc]
7101ef2304  stur xzr,[x8, #0xc4]
7101ef2308  stur xzr,[x8, #0xbc]
7101ef230c  str x10,[x8, #0x108]
7101ef2310  str w10,[x8, #0x110]
7101ef2314  strb wzr,[x8, #0x114]
7101ef2318  str wzr,[x8, #0xb8]
7101ef231c  b.eq 0x7101ef2340
7101ef2320  cmp w9,#0x1
7101ef2324  b.eq 0x7101ef2360
7101ef2328  cbnz w9,0x7101ef2374
7101ef232c  mov w9,#0x1
7101ef2330  str w9,[x8, #0x104]
7101ef2334  mov w9,#0x4
7101ef2338  str w9,[x8, #0xbc]
7101ef233c  b 0x7101ef2374
7101ef2340  mov x9,#0x4
7101ef2344  movk x9,#0x3, LSL #32
7101ef2348  orr w10,wzr,#0x3
7101ef234c  str w10,[x8, #0x104]
7101ef2350  stur x9,[x8, #0xbc]
7101ef2354  orr w9,wzr,#0x7
7101ef2358  str w9,[x8, #0xc4]
7101ef235c  b 0x7101ef2374
7101ef2360  mov x9,#0x4
7101ef2364  movk x9,#0x3, LSL #32
7101ef2368  stur x9,[x8, #0xbc]
7101ef236c  mov w9,#0x2
7101ef2370  str w9,[x8, #0x104]
7101ef2374  ldrsw x9,[x8, #0x134]
7101ef2378  cmp w9,#0x2
7101ef237c  b.cs 0x7101ef23e4
7101ef2380  add x9,x8,x9, LSL #0x2
7101ef2384  mov w10,#0x2
7101ef2388  str w10,[x9, #0x128]
7101ef238c  str w10,[x8, #0x130]
7101ef2390  ldrsw x8,[x20, #0x1f4]
7101ef2394  cmp w8,#0x13
7101ef2398  b.cs 0x7101ef23e4
7101ef239c  add x8,x20,x8, LSL #0x2
7101ef23a0  mov w9,#0x2
7101ef23a4  str w9,[x8, #0x1a8]
7101ef23a8  ldr w8,[x20, #0x1f4]
7101ef23ac  cmp w8,#0x11
7101ef23b0  b.gt 0x7101ef23d0
7101ef23b4  add w8,w8,#0x1
7101ef23b8  cmp w8,#0x13
7101ef23bc  str w8,[x20, #0x1f4]
7101ef23c0  b.cs 0x7101ef23e4
7101ef23c4  add x8,x20,w8, SXTW  #0x2
7101ef23c8  mov w9,#0x4
7101ef23cc  str w9,[x8, #0x1a8]
7101ef23d0  ldp x29,x30,[sp, #0x40]
7101ef23d4  ldp x20,x19,[sp, #0x30]
7101ef23d8  ldp x22,x21,[sp, #0x20]
7101ef23dc  add sp,sp,#0x50
7101ef23e0  ret
7101ef23e4  bl 0x71039c2650
