// addr:      7102aa2190
// offset:    0x2aa2190
// name:      FUN_7102aa2190
// mangled:   
// size:      2492

7102aa2190  str x23,[sp, #-0x40]!
7102aa2194  stp x22,x21,[sp, #0x10]
7102aa2198  stp x20,x19,[sp, #0x20]
7102aa219c  stp x29,x30,[sp, #0x30]
7102aa21a0  add x29,sp,#0x30
7102aa21a4  add x9,x0,#0x30c
7102aa21a8  stp x2,x3,[x0]
7102aa21ac  str x1,[x0, #0x10]
7102aa21b0  add x8,x0,#0x31c
7102aa21b4  add x22,x0,#0x18
7102aa21b8  str xzr,[x9]
7102aa21bc  add x9,x0,#0x304
7102aa21c0  mov x23,x1
7102aa21c4  str xzr,[x9]
7102aa21c8  add x9,x0,#0x2fc
7102aa21cc  mov x21,x0
7102aa21d0  str xzr,[x9]
7102aa21d4  add x9,x0,#0x2f4
7102aa21d8  mov w2,#0x217
7102aa21dc  str xzr,[x9]
7102aa21e0  add x9,x0,#0x2ec
7102aa21e4  mov w1,wzr
7102aa21e8  str xzr,[x9]
7102aa21ec  add x9,x0,#0x2e4
7102aa21f0  mov x20,x5
7102aa21f4  str xzr,[x9]
7102aa21f8  add x9,x0,#0x2dc
7102aa21fc  mov x19,x4
7102aa2200  str xzr,[x9]
7102aa2204  add x9,x0,#0x2d4
7102aa2208  str xzr,[x9]
7102aa220c  add x9,x0,#0x2cc
7102aa2210  str xzr,[x9]
7102aa2214  add x9,x0,#0x2c4
7102aa2218  str xzr,[x8]
7102aa221c  add x8,x0,#0x314
7102aa2220  str xzr,[x9]
7102aa2224  add x9,x0,#0x2bc
7102aa2228  str xzr,[x8]
7102aa222c  add x8,x0,#0x2ac
7102aa2230  str xzr,[x9]
7102aa2234  add x9,x0,#0x2b4
7102aa2238  mov x0,x22
7102aa223c  str xzr,[x9]
7102aa2240  str xzr,[x8]
7102aa2244  bl 0x71039c02a0
7102aa2248  strb wzr,[x21, #0x2a8]
7102aa224c  str xzr,[x21, #0x2a0]
7102aa2250  str xzr,[x21, #0x298]
7102aa2254  str xzr,[x21, #0x290]
7102aa2258  str xzr,[x21, #0x288]
7102aa225c  str xzr,[x21, #0x280]
7102aa2260  str xzr,[x21, #0x278]
7102aa2264  str xzr,[x21, #0x270]
7102aa2268  str xzr,[x21, #0x268]
7102aa226c  str xzr,[x21, #0x260]
7102aa2270  str xzr,[x21, #0x258]
7102aa2274  str xzr,[x21, #0x250]
7102aa2278  str xzr,[x21, #0x248]
7102aa227c  str xzr,[x21, #0x240]
7102aa2280  str xzr,[x21, #0x238]
7102aa2284  str xzr,[x21, #0x230]
7102aa2288  ldr x9,[x23, #0x310]
7102aa228c  ldp x8,x9,[x9, #0xd0]
7102aa2290  cmp x8,x9
7102aa2294  b.eq 0x7102aa22cc
7102aa2298  mov x10,#0xcae1
7102aa229c  movk x10,#0x9612, LSL #16
7102aa22a0  movk x10,#0x11, LSL #32
7102aa22a4  ldr w11,[x8, #0x8]
7102aa22a8  cmp w11,#0x1
7102aa22ac  b.hi 0x7102aa22c0
7102aa22b0  ldr x23,[x8]
7102aa22b4  ldr x11,[x23, #0x68]
7102aa22b8  cmp x11,x10
7102aa22bc  b.eq 0x7102aa2470
7102aa22c0  add x8,x8,#0x10
7102aa22c4  cmp x9,x8
7102aa22c8  b.ne 0x7102aa22a4
7102aa22cc  str xzr,[x21, #0x18]
7102aa22d0  ldr x8,[x22]
7102aa22d4  cbz x8,0x7102aa24b0
7102aa22d8  ldrb w9,[x8, #0x118]
7102aa22dc  orr w9,w9,#0x1
7102aa22e0  strb w9,[x8, #0x118]
7102aa22e4  ldr x8,[x22]
7102aa22e8  cbz x8,0x7102aa24b0
7102aa22ec  ldr x9,[x8, #0xd8]
7102aa22f0  cbz x9,0x7102aa25b8
7102aa22f4  ldr x8,[x9, #0x8]
7102aa22f8  ldr x0,[x8, #0x8]
7102aa22fc  ldr x8,[x0]
7102aa2300  ldr x8,[x8, #0x18]
7102aa2304  adrp x1,0x71042b2000
7102aa2308  add x1,x1,#0x203
7102aa230c  blr x8
7102aa2310  ldr x8,[x21, #0x18]
7102aa2314  str w0,[x21, #0x2ac]
7102aa2318  cbz x8,0x7102aa24b8
7102aa231c  ldr x9,[x8, #0xd8]
7102aa2320  cbz x9,0x7102aa25c8
7102aa2324  ldr x8,[x9, #0x8]
7102aa2328  ldr x0,[x8, #0x8]
7102aa232c  ldr x8,[x0]
7102aa2330  ldr x8,[x8, #0x18]
7102aa2334  adrp x1,0x7104317000
7102aa2338  add x1,x1,#0x61
7102aa233c  blr x8
7102aa2340  ldr x8,[x21, #0x18]
7102aa2344  str w0,[x21, #0x2b0]
7102aa2348  cbz x8,0x7102aa24c0
7102aa234c  ldr x9,[x8, #0xd8]
7102aa2350  cbz x9,0x7102aa25d8
7102aa2354  ldr x8,[x9, #0x8]
7102aa2358  ldr x0,[x8, #0x8]
7102aa235c  ldr x8,[x0]
7102aa2360  ldr x8,[x8, #0x18]
7102aa2364  adrp x1,0x7104431000
7102aa2368  add x1,x1,#0x182
7102aa236c  blr x8
7102aa2370  ldr x8,[x21, #0x18]
7102aa2374  str w0,[x21, #0x2b4]
7102aa2378  cbz x8,0x7102aa24c8
7102aa237c  ldr x9,[x8, #0xd8]
7102aa2380  cbz x9,0x7102aa25e8
7102aa2384  ldr x8,[x9, #0x8]
7102aa2388  ldr x0,[x8, #0x8]
7102aa238c  ldr x8,[x0]
7102aa2390  ldr x8,[x8, #0x18]
7102aa2394  adrp x1,0x71043ff000
7102aa2398  add x1,x1,#0x43c
7102aa239c  blr x8
7102aa23a0  ldr x8,[x21, #0x18]
7102aa23a4  str w0,[x21, #0x2b8]
7102aa23a8  cbz x8,0x7102aa24d0
7102aa23ac  ldr x9,[x8, #0xd8]
7102aa23b0  cbz x9,0x7102aa25f8
7102aa23b4  ldr x8,[x9, #0x8]
7102aa23b8  ldr x0,[x8, #0x8]
7102aa23bc  ldr x8,[x0]
7102aa23c0  ldr x8,[x8, #0x18]
7102aa23c4  adrp x1,0x7104441000
7102aa23c8  add x1,x1,#0xb5a
7102aa23cc  blr x8
7102aa23d0  ldr x8,[x21, #0x18]
7102aa23d4  str w0,[x21, #0x2bc]
7102aa23d8  cbz x8,0x7102aa24d8
7102aa23dc  ldr x9,[x8, #0xd8]
7102aa23e0  cbz x9,0x7102aa2608
7102aa23e4  ldr x8,[x9, #0x8]
7102aa23e8  ldr x0,[x8, #0x8]
7102aa23ec  ldr x8,[x0]
7102aa23f0  ldr x8,[x8, #0x18]
7102aa23f4  adrp x1,0x71042f5000
7102aa23f8  add x1,x1,#0xe6c
7102aa23fc  blr x8
7102aa2400  ldr x8,[x21, #0x18]
7102aa2404  str w0,[x21, #0x2c0]
7102aa2408  cbz x8,0x7102aa24e0
7102aa240c  ldr x9,[x8, #0xd8]
7102aa2410  cbz x9,0x7102aa2618
7102aa2414  ldr x8,[x9, #0x8]
7102aa2418  ldr x0,[x8, #0x8]
7102aa241c  ldr x8,[x0]
7102aa2420  ldr x8,[x8, #0x18]
7102aa2424  adrp x1,0x71042e5000
7102aa2428  add x1,x1,#0x246
7102aa242c  blr x8
7102aa2430  ldr x8,[x21, #0x18]
7102aa2434  str w0,[x21, #0x2c4]
7102aa2438  cbz x8,0x7102aa24e8
7102aa243c  ldr x9,[x8, #0xd8]
7102aa2440  cbz x9,0x7102aa2628
7102aa2444  ldr x8,[x9, #0x8]
7102aa2448  ldr x0,[x8, #0x8]
7102aa244c  ldr x8,[x0]
7102aa2450  ldr x8,[x8, #0x18]
7102aa2454  adrp x1,0x710436a000
7102aa2458  add x1,x1,#0x5d5
7102aa245c  blr x8
7102aa2460  ldr x8,[x21, #0x18]
7102aa2464  str w0,[x21, #0x2c8]
7102aa2468  cbnz x8,0x7102aa2630
7102aa246c  b 0x7102aa24f0
7102aa2470  str x23,[x21, #0x18]
7102aa2474  cbz x23,0x7102aa22d0
7102aa2478  ldr x8,[x23, #0xd8]
7102aa247c  cbnz x8,0x7102aa22d0
7102aa2480  add x0,x23,#0x90
7102aa2484  mov x1,xzr
7102aa2488  bl 0x71026533a0
7102aa248c  mov x8,x0
7102aa2490  ldr x0,[x23, #0xd8]
7102aa2494  str x8,[x23, #0xd8]
7102aa2498  cbz x0,0x7102aa22d0
7102aa249c  ldr x8,[x0]
7102aa24a0  ldr x8,[x8, #0x8]
7102aa24a4  blr x8
7102aa24a8  ldr x8,[x22]
7102aa24ac  cbnz x8,0x7102aa22d8
7102aa24b0  mov w8,#0xffffffff
7102aa24b4  str w8,[x21, #0x2ac]
7102aa24b8  mov w8,#0xffffffff
7102aa24bc  str w8,[x21, #0x2b0]
7102aa24c0  mov w8,#0xffffffff
7102aa24c4  str w8,[x21, #0x2b4]
7102aa24c8  mov w8,#0xffffffff
7102aa24cc  str w8,[x21, #0x2b8]
7102aa24d0  mov w8,#0xffffffff
7102aa24d4  str w8,[x21, #0x2bc]
7102aa24d8  mov w8,#0xffffffff
7102aa24dc  str w8,[x21, #0x2c0]
7102aa24e0  mov w8,#0xffffffff
7102aa24e4  str w8,[x21, #0x2c4]
7102aa24e8  mov w8,#0xffffffff
7102aa24ec  str w8,[x21, #0x2c8]
7102aa24f0  mov w8,#0xffffffff
7102aa24f4  str w8,[x21, #0x2cc]
7102aa24f8  mov w8,#0xffffffff
7102aa24fc  str w8,[x21, #0x2d0]
7102aa2500  mov w8,#0xffffffff
7102aa2504  str w8,[x21, #0x2d4]
7102aa2508  mov w8,#0xffffffff
7102aa250c  str w8,[x21, #0x2d8]
7102aa2510  mov w8,#0xffffffff
7102aa2514  str w8,[x21, #0x2dc]
7102aa2518  mov w8,#0xffffffff
7102aa251c  str w8,[x21, #0x2e0]
7102aa2520  mov w8,#0xffffffff
7102aa2524  str w8,[x21, #0x2e4]
7102aa2528  mov w8,#0xffffffff
7102aa252c  str w8,[x21, #0x2e8]
7102aa2530  mov w8,#0xffffffff
7102aa2534  str w8,[x21, #0x2ec]
7102aa2538  mov w8,#0xffffffff
7102aa253c  str w8,[x21, #0x2f0]
7102aa2540  mov w8,#0xffffffff
7102aa2544  str w8,[x21, #0x2f4]
7102aa2548  mov w8,#0xffffffff
7102aa254c  str w8,[x21, #0x2f8]
7102aa2550  mov w8,#0xffffffff
7102aa2554  str w8,[x21, #0x2fc]
7102aa2558  mov w8,#0xffffffff
7102aa255c  str w8,[x21, #0x300]
7102aa2560  mov w8,#0xffffffff
7102aa2564  str w8,[x21, #0x304]
7102aa2568  mov w8,#0xffffffff
7102aa256c  str w8,[x21, #0x308]
7102aa2570  mov w8,#0xffffffff
7102aa2574  str w8,[x21, #0x30c]
7102aa2578  mov w8,#0xffffffff
7102aa257c  str w8,[x21, #0x310]
7102aa2580  mov w8,#0xffffffff
7102aa2584  str w8,[x21, #0x314]
7102aa2588  mov w8,#0xffffffff
7102aa258c  str w8,[x21, #0x318]
7102aa2590  mov w0,#0xffffffff
7102aa2594  str w0,[x21, #0x31c]
7102aa2598  str w0,[x21, #0x320]
7102aa259c  str x20,[x21, #0x208]
7102aa25a0  str x19,[x21, #0x200]
7102aa25a4  ldp x29,x30,[sp, #0x30]
7102aa25a8  ldp x20,x19,[sp, #0x20]
7102aa25ac  ldp x22,x21,[sp, #0x10]
7102aa25b0  ldr x23,[sp], #0x40
7102aa25b4  ret
7102aa25b8  mov w9,#0xffffffff
7102aa25bc  str w9,[x21, #0x2ac]
7102aa25c0  ldr x9,[x8, #0xd8]
7102aa25c4  cbnz x9,0x7102aa2324
7102aa25c8  mov w9,#0xffffffff
7102aa25cc  str w9,[x21, #0x2b0]
7102aa25d0  ldr x9,[x8, #0xd8]
7102aa25d4  cbnz x9,0x7102aa2354
7102aa25d8  mov w9,#0xffffffff
7102aa25dc  str w9,[x21, #0x2b4]
7102aa25e0  ldr x9,[x8, #0xd8]
7102aa25e4  cbnz x9,0x7102aa2384
7102aa25e8  mov w9,#0xffffffff
7102aa25ec  str w9,[x21, #0x2b8]
7102aa25f0  ldr x9,[x8, #0xd8]
7102aa25f4  cbnz x9,0x7102aa23b4
7102aa25f8  mov w9,#0xffffffff
7102aa25fc  str w9,[x21, #0x2bc]
7102aa2600  ldr x9,[x8, #0xd8]
7102aa2604  cbnz x9,0x7102aa23e4
7102aa2608  mov w9,#0xffffffff
7102aa260c  str w9,[x21, #0x2c0]
7102aa2610  ldr x9,[x8, #0xd8]
7102aa2614  cbnz x9,0x7102aa2414
7102aa2618  mov w9,#0xffffffff
7102aa261c  str w9,[x21, #0x2c4]
7102aa2620  ldr x9,[x8, #0xd8]
7102aa2624  cbnz x9,0x7102aa2444
7102aa2628  mov w9,#0xffffffff
7102aa262c  str w9,[x21, #0x2c8]
7102aa2630  ldr x9,[x8, #0xd8]
7102aa2634  cbz x9,0x7102aa2664
7102aa2638  ldr x8,[x9, #0x8]
7102aa263c  ldr x0,[x8, #0x8]
7102aa2640  ldr x8,[x0]
7102aa2644  ldr x8,[x8, #0x18]
7102aa2648  adrp x1,0x7104328000
7102aa264c  add x1,x1,#0xfe
7102aa2650  blr x8
7102aa2654  ldr x8,[x21, #0x18]
7102aa2658  str w0,[x21, #0x2cc]
7102aa265c  cbnz x8,0x7102aa266c
7102aa2660  b 0x7102aa24f8
7102aa2664  mov w9,#0xffffffff
7102aa2668  str w9,[x21, #0x2cc]
7102aa266c  ldr x9,[x8, #0xd8]
7102aa2670  cbz x9,0x7102aa26a0
7102aa2674  ldr x8,[x9, #0x8]
7102aa2678  ldr x0,[x8, #0x8]
7102aa267c  ldr x8,[x0]
7102aa2680  ldr x8,[x8, #0x18]
7102aa2684  adrp x1,0x7104463000
7102aa2688  add x1,x1,#0xc36
7102aa268c  blr x8
7102aa2690  ldr x8,[x21, #0x18]
7102aa2694  str w0,[x21, #0x2d0]
7102aa2698  cbnz x8,0x7102aa26a8
7102aa269c  b 0x7102aa2500
7102aa26a0  mov w9,#0xffffffff
7102aa26a4  str w9,[x21, #0x2d0]
7102aa26a8  ldr x9,[x8, #0xd8]
7102aa26ac  cbz x9,0x7102aa26dc
7102aa26b0  ldr x8,[x9, #0x8]
7102aa26b4  ldr x0,[x8, #0x8]
7102aa26b8  ldr x8,[x0]
7102aa26bc  ldr x8,[x8, #0x18]
7102aa26c0  adrp x1,0x71042b2000
7102aa26c4  add x1,x1,#0x20b
7102aa26c8  blr x8
7102aa26cc  ldr x8,[x21, #0x18]
7102aa26d0  str w0,[x21, #0x2d4]
7102aa26d4  cbnz x8,0x7102aa26e4
7102aa26d8  b 0x7102aa2508
7102aa26dc  mov w9,#0xffffffff
7102aa26e0  str w9,[x21, #0x2d4]
7102aa26e4  ldr x9,[x8, #0xd8]
7102aa26e8  cbz x9,0x7102aa2718
7102aa26ec  ldr x8,[x9, #0x8]
7102aa26f0  ldr x0,[x8, #0x8]
7102aa26f4  ldr x8,[x0]
7102aa26f8  ldr x8,[x8, #0x18]
7102aa26fc  adrp x1,0x71042c2000
7102aa2700  add x1,x1,#0xde4
7102aa2704  blr x8
7102aa2708  ldr x8,[x21, #0x18]
7102aa270c  str w0,[x21, #0x2d8]
7102aa2710  cbnz x8,0x7102aa2720
7102aa2714  b 0x7102aa2510
7102aa2718  mov w9,#0xffffffff
7102aa271c  str w9,[x21, #0x2d8]
7102aa2720  ldr x9,[x8, #0xd8]
7102aa2724  cbz x9,0x7102aa2754
7102aa2728  ldr x8,[x9, #0x8]
7102aa272c  ldr x0,[x8, #0x8]
7102aa2730  ldr x8,[x0]
7102aa2734  ldr x8,[x8, #0x18]
7102aa2738  adrp x1,0x7104317000
7102aa273c  add x1,x1,#0x69
7102aa2740  blr x8
7102aa2744  ldr x8,[x21, #0x18]
7102aa2748  str w0,[x21, #0x2dc]
7102aa274c  cbnz x8,0x7102aa275c
7102aa2750  b 0x7102aa2518
7102aa2754  mov w9,#0xffffffff
7102aa2758  str w9,[x21, #0x2dc]
7102aa275c  ldr x9,[x8, #0xd8]
7102aa2760  cbz x9,0x7102aa2790
7102aa2764  ldr x8,[x9, #0x8]
7102aa2768  ldr x0,[x8, #0x8]
7102aa276c  ldr x8,[x0]
7102aa2770  ldr x8,[x8, #0x18]
7102aa2774  adrp x1,0x710437a000
7102aa2778  add x1,x1,#0x78c
7102aa277c  blr x8
7102aa2780  ldr x8,[x21, #0x18]
7102aa2784  str w0,[x21, #0x2e0]
7102aa2788  cbnz x8,0x7102aa2798
7102aa278c  b 0x7102aa2520
7102aa2790  mov w9,#0xffffffff
7102aa2794  str w9,[x21, #0x2e0]
7102aa2798  ldr x9,[x8, #0xd8]
7102aa279c  cbz x9,0x7102aa27cc
7102aa27a0  ldr x8,[x9, #0x8]
7102aa27a4  ldr x0,[x8, #0x8]
7102aa27a8  ldr x8,[x0]
7102aa27ac  ldr x8,[x8, #0x18]
7102aa27b0  adrp x1,0x71043bc000
7102aa27b4  add x1,x1,#0x6e8
7102aa27b8  blr x8
7102aa27bc  ldr x8,[x21, #0x18]
7102aa27c0  str w0,[x21, #0x2e4]
7102aa27c4  cbnz x8,0x7102aa27d4
7102aa27c8  b 0x7102aa2528
7102aa27cc  mov w9,#0xffffffff
7102aa27d0  str w9,[x21, #0x2e4]
7102aa27d4  ldr x9,[x8, #0xd8]
7102aa27d8  cbz x9,0x7102aa2808
7102aa27dc  ldr x8,[x9, #0x8]
7102aa27e0  ldr x0,[x8, #0x8]
7102aa27e4  ldr x8,[x0]
7102aa27e8  ldr x8,[x8, #0x18]
7102aa27ec  adrp x1,0x7104420000
7102aa27f0  add x1,x1,#0x49f
7102aa27f4  blr x8
7102aa27f8  ldr x8,[x21, #0x18]
7102aa27fc  str w0,[x21, #0x2e8]
7102aa2800  cbnz x8,0x7102aa2810
7102aa2804  b 0x7102aa2530
7102aa2808  mov w9,#0xffffffff
7102aa280c  str w9,[x21, #0x2e8]
7102aa2810  ldr x9,[x8, #0xd8]
7102aa2814  cbz x9,0x7102aa2844
7102aa2818  ldr x8,[x9, #0x8]
7102aa281c  ldr x0,[x8, #0x8]
7102aa2820  ldr x8,[x0]
7102aa2824  ldr x8,[x8, #0x18]
7102aa2828  adrp x1,0x710425d000
7102aa282c  add x1,x1,#0x466
7102aa2830  blr x8
7102aa2834  ldr x8,[x21, #0x18]
7102aa2838  str w0,[x21, #0x2ec]
7102aa283c  cbnz x8,0x7102aa284c
7102aa2840  b 0x7102aa2538
7102aa2844  mov w9,#0xffffffff
7102aa2848  str w9,[x21, #0x2ec]
7102aa284c  ldr x9,[x8, #0xd8]
7102aa2850  cbz x9,0x7102aa2880
7102aa2854  ldr x8,[x9, #0x8]
7102aa2858  ldr x0,[x8, #0x8]
7102aa285c  ldr x8,[x0]
7102aa2860  ldr x8,[x8, #0x18]
7102aa2864  adrp x1,0x7104452000
7102aa2868  add x1,x1,#0x99b
7102aa286c  blr x8
7102aa2870  ldr x8,[x21, #0x18]
7102aa2874  str w0,[x21, #0x2f0]
7102aa2878  cbnz x8,0x7102aa2888
7102aa287c  b 0x7102aa2540
7102aa2880  mov w9,#0xffffffff
7102aa2884  str w9,[x21, #0x2f0]
7102aa2888  ldr x9,[x8, #0xd8]
7102aa288c  cbz x9,0x7102aa28bc
7102aa2890  ldr x8,[x9, #0x8]
7102aa2894  ldr x0,[x8, #0x8]
7102aa2898  ldr x8,[x0]
7102aa289c  ldr x8,[x8, #0x18]
7102aa28a0  adrp x1,0x710438a000
7102aa28a4  add x1,x1,#0xcd4
7102aa28a8  blr x8
7102aa28ac  ldr x8,[x21, #0x18]
7102aa28b0  str w0,[x21, #0x2f4]
7102aa28b4  cbnz x8,0x7102aa28c4
7102aa28b8  b 0x7102aa2548
7102aa28bc  mov w9,#0xffffffff
7102aa28c0  str w9,[x21, #0x2f4]
7102aa28c4  ldr x9,[x8, #0xd8]
7102aa28c8  cbz x9,0x7102aa28f8
7102aa28cc  ldr x8,[x9, #0x8]
7102aa28d0  ldr x0,[x8, #0x8]
7102aa28d4  ldr x8,[x0]
7102aa28d8  ldr x8,[x8, #0x18]
7102aa28dc  adrp x1,0x710438a000
7102aa28e0  add x1,x1,#0xcdd
7102aa28e4  blr x8
7102aa28e8  ldr x8,[x21, #0x18]
7102aa28ec  str w0,[x21, #0x2f8]
7102aa28f0  cbnz x8,0x7102aa2900
7102aa28f4  b 0x7102aa2550
7102aa28f8  mov w9,#0xffffffff
7102aa28fc  str w9,[x21, #0x2f8]
7102aa2900  ldr x9,[x8, #0xd8]
7102aa2904  cbz x9,0x7102aa2934
7102aa2908  ldr x8,[x9, #0x8]
7102aa290c  ldr x0,[x8, #0x8]
7102aa2910  ldr x8,[x0]
7102aa2914  ldr x8,[x8, #0x18]
7102aa2918  adrp x1,0x7104359000
7102aa291c  add x1,x1,#0x525
7102aa2920  blr x8
7102aa2924  ldr x8,[x21, #0x18]
7102aa2928  str w0,[x21, #0x2fc]
7102aa292c  cbnz x8,0x7102aa293c
7102aa2930  b 0x7102aa2558
7102aa2934  mov w9,#0xffffffff
7102aa2938  str w9,[x21, #0x2fc]
7102aa293c  ldr x9,[x8, #0xd8]
7102aa2940  cbz x9,0x7102aa2970
7102aa2944  ldr x8,[x9, #0x8]
7102aa2948  ldr x0,[x8, #0x8]
7102aa294c  ldr x8,[x0]
7102aa2950  ldr x8,[x8, #0x18]
7102aa2954  adrp x1,0x71042a1000
7102aa2958  add x1,x1,#0x227
7102aa295c  blr x8
7102aa2960  ldr x8,[x21, #0x18]
7102aa2964  str w0,[x21, #0x300]
7102aa2968  cbnz x8,0x7102aa2978
7102aa296c  b 0x7102aa2560
7102aa2970  mov w9,#0xffffffff
7102aa2974  str w9,[x21, #0x300]
7102aa2978  ldr x9,[x8, #0xd8]
7102aa297c  cbz x9,0x7102aa29ac
7102aa2980  ldr x8,[x9, #0x8]
7102aa2984  ldr x0,[x8, #0x8]
7102aa2988  ldr x8,[x0]
7102aa298c  ldr x8,[x8, #0x18]
7102aa2990  adrp x1,0x71043ee000
7102aa2994  add x1,x1,#0xb69
7102aa2998  blr x8
7102aa299c  ldr x8,[x21, #0x18]
7102aa29a0  str w0,[x21, #0x304]
7102aa29a4  cbnz x8,0x7102aa29b4
7102aa29a8  b 0x7102aa2568
7102aa29ac  mov w9,#0xffffffff
7102aa29b0  str w9,[x21, #0x304]
7102aa29b4  ldr x9,[x8, #0xd8]
7102aa29b8  cbz x9,0x7102aa29e8
7102aa29bc  ldr x8,[x9, #0x8]
7102aa29c0  ldr x0,[x8, #0x8]
7102aa29c4  ldr x8,[x0]
7102aa29c8  ldr x8,[x8, #0x18]
7102aa29cc  adrp x1,0x71042f5000
7102aa29d0  add x1,x1,#0xe74
7102aa29d4  blr x8
7102aa29d8  ldr x8,[x21, #0x18]
7102aa29dc  str w0,[x21, #0x308]
7102aa29e0  cbnz x8,0x7102aa29f0
7102aa29e4  b 0x7102aa2570
7102aa29e8  mov w9,#0xffffffff
7102aa29ec  str w9,[x21, #0x308]
7102aa29f0  ldr x9,[x8, #0xd8]
7102aa29f4  cbz x9,0x7102aa2a24
7102aa29f8  ldr x8,[x9, #0x8]
7102aa29fc  ldr x0,[x8, #0x8]
7102aa2a00  ldr x8,[x0]
7102aa2a04  ldr x8,[x8, #0x18]
7102aa2a08  adrp x1,0x7104338000
7102aa2a0c  add x1,x1,#0x308
7102aa2a10  blr x8
7102aa2a14  ldr x8,[x21, #0x18]
7102aa2a18  str w0,[x21, #0x30c]
7102aa2a1c  cbnz x8,0x7102aa2a2c
7102aa2a20  b 0x7102aa2578
7102aa2a24  mov w9,#0xffffffff
7102aa2a28  str w9,[x21, #0x30c]
7102aa2a2c  ldr x9,[x8, #0xd8]
7102aa2a30  cbz x9,0x7102aa2a60
7102aa2a34  ldr x8,[x9, #0x8]
7102aa2a38  ldr x0,[x8, #0x8]
7102aa2a3c  ldr x8,[x0]
7102aa2a40  ldr x8,[x8, #0x18]
7102aa2a44  adrp x1,0x710428f000
7102aa2a48  add x1,x1,#0x864
7102aa2a4c  blr x8
7102aa2a50  ldr x8,[x21, #0x18]
7102aa2a54  str w0,[x21, #0x310]
7102aa2a58  cbnz x8,0x7102aa2a68
7102aa2a5c  b 0x7102aa2580
7102aa2a60  mov w9,#0xffffffff
7102aa2a64  str w9,[x21, #0x310]
7102aa2a68  ldr x9,[x8, #0xd8]
7102aa2a6c  cbz x9,0x7102aa2a9c
7102aa2a70  ldr x8,[x9, #0x8]
7102aa2a74  ldr x0,[x8, #0x8]
7102aa2a78  ldr x8,[x0]
7102aa2a7c  ldr x8,[x8, #0x18]
7102aa2a80  adrp x1,0x7104328000
7102aa2a84  add x1,x1,#0x107
7102aa2a88  blr x8
7102aa2a8c  ldr x8,[x21, #0x18]
7102aa2a90  str w0,[x21, #0x314]
7102aa2a94  cbnz x8,0x7102aa2aa4
7102aa2a98  b 0x7102aa2588
7102aa2a9c  mov w9,#0xffffffff
7102aa2aa0  str w9,[x21, #0x314]
7102aa2aa4  ldr x9,[x8, #0xd8]
7102aa2aa8  cbz x9,0x7102aa2ad8
7102aa2aac  ldr x8,[x9, #0x8]
7102aa2ab0  ldr x0,[x8, #0x8]
7102aa2ab4  ldr x8,[x0]
7102aa2ab8  ldr x8,[x8, #0x18]
7102aa2abc  adrp x1,0x71042c2000
7102aa2ac0  add x1,x1,#0xdec
7102aa2ac4  blr x8
7102aa2ac8  ldr x8,[x21, #0x18]
7102aa2acc  str w0,[x21, #0x318]
7102aa2ad0  cbnz x8,0x7102aa2ae0
7102aa2ad4  b 0x7102aa2590
7102aa2ad8  mov w9,#0xffffffff
7102aa2adc  str w9,[x21, #0x318]
7102aa2ae0  ldr x9,[x8, #0xd8]
7102aa2ae4  cbz x9,0x7102aa2b14
7102aa2ae8  ldr x8,[x9, #0x8]
7102aa2aec  ldr x0,[x8, #0x8]
7102aa2af0  ldr x8,[x0]
7102aa2af4  ldr x8,[x8, #0x18]
7102aa2af8  adrp x1,0x71042a1000
7102aa2afc  add x1,x1,#0x230
7102aa2b00  blr x8
7102aa2b04  ldr x8,[x21, #0x18]
7102aa2b08  str w0,[x21, #0x31c]
7102aa2b0c  cbnz x8,0x7102aa2b1c
7102aa2b10  b 0x7102aa2b44
7102aa2b14  mov w9,#0xffffffff
7102aa2b18  str w9,[x21, #0x31c]
7102aa2b1c  ldr x8,[x8, #0xd8]
7102aa2b20  cbz x8,0x7102aa2b44
7102aa2b24  ldr x8,[x8, #0x8]
7102aa2b28  ldr x0,[x8, #0x8]
7102aa2b2c  ldr x8,[x0]
7102aa2b30  ldr x8,[x8, #0x18]
7102aa2b34  adrp x1,0x710426d000
7102aa2b38  add x1,x1,#0xfa9
7102aa2b3c  blr x8
7102aa2b40  b 0x7102aa2598
7102aa2b44  mov w0,#0xffffffff
7102aa2b48  b 0x7102aa2598
