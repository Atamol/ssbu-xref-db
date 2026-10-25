// addr:      7101ba23f0
// offset:    0x1ba23f0
// name:      FUN_7101ba23f0
// mangled:   
// size:      1864

7101ba23f0  sub sp,sp,#0x130
7101ba23f4  stp x28,x25,[sp, #0xe0]
7101ba23f8  stp x24,x23,[sp, #0xf0]
7101ba23fc  stp x22,x21,[sp, #0x100]
7101ba2400  stp x20,x19,[sp, #0x110]
7101ba2404  stp x29,x30,[sp, #0x120]
7101ba2408  add x29,sp,#0x120
7101ba240c  mov w22,w3
7101ba2410  mov w20,w2
7101ba2414  mov w21,w1
7101ba2418  mov x19,x0
7101ba241c  mov w23,#0x9dc5
7101ba2420  movk w23,#0x811c, LSL #16
7101ba2424  cmn w1,#0x1
7101ba2428  sturb wzr,[x29, #-0x80]
7101ba242c  stur xzr,[x29, #-0x88]
7101ba2430  b.eq 0x7101ba24f8
7101ba2434  add x0,sp,#0x50
7101ba2438  mov w1,w21
7101ba243c  mov w2,w20
7101ba2440  mov w3,wzr
7101ba2444  add x24,sp,#0x50
7101ba2448  bl 0x7101d38c00
7101ba244c  mov x8,xzr
7101ba2450  add x9,x24,#0x8
7101ba2454  sub x10,x29,#0x88
7101ba2458  b 0x7101ba2464
7101ba245c  add x8,x8,#0x2
7101ba2460  strb w11,[x12, #0x9]
7101ba2464  add x11,x9,x8
7101ba2468  ldrb w13,[x11]
7101ba246c  cbz w13,0x7101ba2498
7101ba2470  add w14,w8,#0x1
7101ba2474  add x12,x10,x8
7101ba2478  cmp w14,#0x3f
7101ba247c  strb w13,[x12, #0x8]
7101ba2480  b.cs 0x7101ba2494
7101ba2484  ldrb w11,[x11, #0x1]
7101ba2488  cbnz w11,0x7101ba245c
7101ba248c  add x8,x8,#0x1
7101ba2490  b 0x7101ba2498
7101ba2494  add w8,w8,#0x1
7101ba2498  sub x10,x29,#0x88
7101ba249c  add x1,x10,#0x8
7101ba24a0  mov w11,w23
7101ba24a4  strb wzr,[x1, w8, UXTW ]
7101ba24a8  ldurb w9,[x29, #-0x80]
7101ba24ac  stur w8,[x29, #-0x84]
7101ba24b0  cbz w9,0x7101ba24d4
7101ba24b4  add x10,x10,#0x9
7101ba24b8  mov w12,#0x89
7101ba24bc  mov w11,w23
7101ba24c0  mul w11,w11,w12
7101ba24c4  and w9,w9,#0xff
7101ba24c8  eor w11,w11,w9
7101ba24cc  ldrb w9,[x10], #0x1
7101ba24d0  cbnz w9,0x7101ba24c0
7101ba24d4  cmp w8,#0x0
7101ba24d8  stur w11,[x29, #-0x88]
7101ba24dc  b.le 0x7101ba24f8
7101ba24e0  add x0,x19,#0x2a8
7101ba24e4  bl 0x710377a120
7101ba24e8  ldr x0,[x19, #0x2a0]
7101ba24ec  adrp x1,0x7104422000
7101ba24f0  add x1,x1,#0x7a9
7101ba24f4  b 0x7101ba2524
7101ba24f8  ldr x8,[x19, #0x2b0]
7101ba24fc  ldr x0,[x8, #0x10]
7101ba2500  cbz x0,0x7101ba2518
7101ba2504  add x1,sp,#0x50
7101ba2508  mov w2,wzr
7101ba250c  mov w3,wzr
7101ba2510  str wzr,[sp, #0x50]
7101ba2514  bl 0x71037a2270
7101ba2518  ldr x0,[x19, #0x2a0]
7101ba251c  adrp x1,0x7104339000
7101ba2520  add x1,x1,#0xf82
7101ba2524  fmov s0,0x3f800000
7101ba2528  bl 0x7103778300
7101ba252c  cmn w21,#0x1
7101ba2530  sturb wzr,[x29, #-0x80]
7101ba2534  stur xzr,[x29, #-0x88]
7101ba2538  b.eq 0x7101ba2600
7101ba253c  add x0,sp,#0x50
7101ba2540  mov w1,w21
7101ba2544  mov w2,w20
7101ba2548  mov w3,wzr
7101ba254c  add x24,sp,#0x50
7101ba2550  bl 0x7101d38c00
7101ba2554  mov x8,xzr
7101ba2558  add x9,x24,#0x8
7101ba255c  sub x10,x29,#0x88
7101ba2560  b 0x7101ba256c
7101ba2564  add x8,x8,#0x2
7101ba2568  strb w11,[x12, #0x9]
7101ba256c  add x11,x9,x8
7101ba2570  ldrb w13,[x11]
7101ba2574  cbz w13,0x7101ba25a0
7101ba2578  add w14,w8,#0x1
7101ba257c  add x12,x10,x8
7101ba2580  cmp w14,#0x3f
7101ba2584  strb w13,[x12, #0x8]
7101ba2588  b.cs 0x7101ba259c
7101ba258c  ldrb w11,[x11, #0x1]
7101ba2590  cbnz w11,0x7101ba2564
7101ba2594  add x8,x8,#0x1
7101ba2598  b 0x7101ba25a0
7101ba259c  add w8,w8,#0x1
7101ba25a0  sub x10,x29,#0x88
7101ba25a4  add x1,x10,#0x8
7101ba25a8  mov w11,w23
7101ba25ac  strb wzr,[x1, w8, UXTW ]
7101ba25b0  ldurb w9,[x29, #-0x80]
7101ba25b4  stur w8,[x29, #-0x84]
7101ba25b8  cbz w9,0x7101ba25dc
7101ba25bc  add x10,x10,#0x9
7101ba25c0  mov w12,#0x89
7101ba25c4  mov w11,w23
7101ba25c8  mul w11,w11,w12
7101ba25cc  and w9,w9,#0xff
7101ba25d0  eor w11,w11,w9
7101ba25d4  ldrb w9,[x10], #0x1
7101ba25d8  cbnz w9,0x7101ba25c8
7101ba25dc  cmp w8,#0x0
7101ba25e0  stur w11,[x29, #-0x88]
7101ba25e4  b.le 0x7101ba2600
7101ba25e8  add x0,x19,#0x2f8
7101ba25ec  bl 0x710377a120
7101ba25f0  ldr x0,[x19, #0x2f0]
7101ba25f4  adrp x1,0x71042f8000
7101ba25f8  add x1,x1,#0xa2
7101ba25fc  b 0x7101ba262c
7101ba2600  ldr x8,[x19, #0x300]
7101ba2604  ldr x0,[x8, #0x10]
7101ba2608  cbz x0,0x7101ba2620
7101ba260c  add x1,sp,#0x50
7101ba2610  mov w2,wzr
7101ba2614  mov w3,wzr
7101ba2618  str wzr,[sp, #0x50]
7101ba261c  bl 0x71037a2270
7101ba2620  ldr x0,[x19, #0x2f0]
7101ba2624  adrp x1,0x7104339000
7101ba2628  add x1,x1,#0xf82
7101ba262c  fmov s0,0x3f800000
7101ba2630  bl 0x7103778300
7101ba2634  cmn w21,#0x1
7101ba2638  sturb wzr,[x29, #-0x80]
7101ba263c  stur xzr,[x29, #-0x88]
7101ba2640  b.eq 0x7101ba2708
7101ba2644  add x0,sp,#0x50
7101ba2648  mov w1,w21
7101ba264c  mov w2,w20
7101ba2650  mov w3,wzr
7101ba2654  add x24,sp,#0x50
7101ba2658  bl 0x7101d38c00
7101ba265c  mov x8,xzr
7101ba2660  add x9,x24,#0x8
7101ba2664  sub x10,x29,#0x88
7101ba2668  b 0x7101ba2674
7101ba266c  add x8,x8,#0x2
7101ba2670  strb w11,[x12, #0x9]
7101ba2674  add x11,x9,x8
7101ba2678  ldrb w13,[x11]
7101ba267c  cbz w13,0x7101ba26a8
7101ba2680  add w14,w8,#0x1
7101ba2684  add x12,x10,x8
7101ba2688  cmp w14,#0x3f
7101ba268c  strb w13,[x12, #0x8]
7101ba2690  b.cs 0x7101ba26a4
7101ba2694  ldrb w11,[x11, #0x1]
7101ba2698  cbnz w11,0x7101ba266c
7101ba269c  add x8,x8,#0x1
7101ba26a0  b 0x7101ba26a8
7101ba26a4  add w8,w8,#0x1
7101ba26a8  sub x10,x29,#0x88
7101ba26ac  add x1,x10,#0x8
7101ba26b0  mov w11,w23
7101ba26b4  strb wzr,[x1, w8, UXTW ]
7101ba26b8  ldurb w9,[x29, #-0x80]
7101ba26bc  stur w8,[x29, #-0x84]
7101ba26c0  cbz w9,0x7101ba26e4
7101ba26c4  add x10,x10,#0x9
7101ba26c8  mov w12,#0x89
7101ba26cc  mov w11,w23
7101ba26d0  mul w11,w11,w12
7101ba26d4  and w9,w9,#0xff
7101ba26d8  eor w11,w11,w9
7101ba26dc  ldrb w9,[x10], #0x1
7101ba26e0  cbnz w9,0x7101ba26d0
7101ba26e4  cmp w8,#0x0
7101ba26e8  stur w11,[x29, #-0x88]
7101ba26ec  b.le 0x7101ba2708
7101ba26f0  add x0,x19,#0x348
7101ba26f4  bl 0x710377a120
7101ba26f8  ldr x0,[x19, #0x340]
7101ba26fc  adrp x1,0x71042e6000
7101ba2700  add x1,x1,#0xe73
7101ba2704  b 0x7101ba2734
7101ba2708  ldr x8,[x19, #0x350]
7101ba270c  ldr x0,[x8, #0x10]
7101ba2710  cbz x0,0x7101ba2728
7101ba2714  add x1,sp,#0x50
7101ba2718  mov w2,wzr
7101ba271c  mov w3,wzr
7101ba2720  str wzr,[sp, #0x50]
7101ba2724  bl 0x71037a2270
7101ba2728  ldr x0,[x19, #0x340]
7101ba272c  adrp x1,0x7104339000
7101ba2730  add x1,x1,#0xf82
7101ba2734  fmov s0,0x3f800000
7101ba2738  bl 0x7103778300
7101ba273c  cmn w21,#0x1
7101ba2740  sturb wzr,[x29, #-0x80]
7101ba2744  stur xzr,[x29, #-0x88]
7101ba2748  b.eq 0x7101ba2810
7101ba274c  add x0,sp,#0x50
7101ba2750  mov w1,w21
7101ba2754  mov w2,w20
7101ba2758  mov w3,wzr
7101ba275c  add x24,sp,#0x50
7101ba2760  bl 0x7101d38c00
7101ba2764  mov x8,xzr
7101ba2768  add x9,x24,#0x8
7101ba276c  sub x10,x29,#0x88
7101ba2770  b 0x7101ba277c
7101ba2774  add x8,x8,#0x2
7101ba2778  strb w11,[x12, #0x9]
7101ba277c  add x11,x9,x8
7101ba2780  ldrb w13,[x11]
7101ba2784  cbz w13,0x7101ba27b0
7101ba2788  add w14,w8,#0x1
7101ba278c  add x12,x10,x8
7101ba2790  cmp w14,#0x3f
7101ba2794  strb w13,[x12, #0x8]
7101ba2798  b.cs 0x7101ba27ac
7101ba279c  ldrb w11,[x11, #0x1]
7101ba27a0  cbnz w11,0x7101ba2774
7101ba27a4  add x8,x8,#0x1
7101ba27a8  b 0x7101ba27b0
7101ba27ac  add w8,w8,#0x1
7101ba27b0  sub x10,x29,#0x88
7101ba27b4  add x1,x10,#0x8
7101ba27b8  mov w11,w23
7101ba27bc  strb wzr,[x1, w8, UXTW ]
7101ba27c0  ldurb w9,[x29, #-0x80]
7101ba27c4  stur w8,[x29, #-0x84]
7101ba27c8  cbz w9,0x7101ba27ec
7101ba27cc  add x10,x10,#0x9
7101ba27d0  mov w12,#0x89
7101ba27d4  mov w11,w23
7101ba27d8  mul w11,w11,w12
7101ba27dc  and w9,w9,#0xff
7101ba27e0  eor w11,w11,w9
7101ba27e4  ldrb w9,[x10], #0x1
7101ba27e8  cbnz w9,0x7101ba27d8
7101ba27ec  cmp w8,#0x0
7101ba27f0  stur w11,[x29, #-0x88]
7101ba27f4  b.le 0x7101ba2810
7101ba27f8  add x0,x19,#0x398
7101ba27fc  bl 0x710377a120
7101ba2800  ldr x0,[x19, #0x390]
7101ba2804  adrp x1,0x71042b4000
7101ba2808  add x1,x1,#0x114
7101ba280c  b 0x7101ba283c
7101ba2810  ldr x8,[x19, #0x3a0]
7101ba2814  ldr x0,[x8, #0x10]
7101ba2818  cbz x0,0x7101ba2830
7101ba281c  add x1,sp,#0x50
7101ba2820  mov w2,wzr
7101ba2824  mov w3,wzr
7101ba2828  str wzr,[sp, #0x50]
7101ba282c  bl 0x71037a2270
7101ba2830  ldr x0,[x19, #0x390]
7101ba2834  adrp x1,0x7104339000
7101ba2838  add x1,x1,#0xf82
7101ba283c  fmov s0,0x3f800000
7101ba2840  bl 0x7103778300
7101ba2844  cmn w21,#0x1
7101ba2848  sturb wzr,[x29, #-0x80]
7101ba284c  stur xzr,[x29, #-0x88]
7101ba2850  b.eq 0x7101ba2918
7101ba2854  add x0,sp,#0x50
7101ba2858  mov w1,w21
7101ba285c  mov w2,w20
7101ba2860  mov w3,wzr
7101ba2864  add x24,sp,#0x50
7101ba2868  bl 0x7101d38c00
7101ba286c  mov x8,xzr
7101ba2870  add x9,x24,#0x8
7101ba2874  sub x10,x29,#0x88
7101ba2878  b 0x7101ba2884
7101ba287c  add x8,x8,#0x2
7101ba2880  strb w11,[x12, #0x9]
7101ba2884  add x11,x9,x8
7101ba2888  ldrb w13,[x11]
7101ba288c  cbz w13,0x7101ba28b8
7101ba2890  add w14,w8,#0x1
7101ba2894  add x12,x10,x8
7101ba2898  cmp w14,#0x3f
7101ba289c  strb w13,[x12, #0x8]
7101ba28a0  b.cs 0x7101ba28b4
7101ba28a4  ldrb w11,[x11, #0x1]
7101ba28a8  cbnz w11,0x7101ba287c
7101ba28ac  add x8,x8,#0x1
7101ba28b0  b 0x7101ba28b8
7101ba28b4  add w8,w8,#0x1
7101ba28b8  sub x10,x29,#0x88
7101ba28bc  add x1,x10,#0x8
7101ba28c0  mov w11,w23
7101ba28c4  strb wzr,[x1, w8, UXTW ]
7101ba28c8  ldurb w9,[x29, #-0x80]
7101ba28cc  stur w8,[x29, #-0x84]
7101ba28d0  cbz w9,0x7101ba28f4
7101ba28d4  add x10,x10,#0x9
7101ba28d8  mov w12,#0x89
7101ba28dc  mov w11,w23
7101ba28e0  mul w11,w11,w12
7101ba28e4  and w9,w9,#0xff
7101ba28e8  eor w11,w11,w9
7101ba28ec  ldrb w9,[x10], #0x1
7101ba28f0  cbnz w9,0x7101ba28e0
7101ba28f4  cmp w8,#0x0
7101ba28f8  stur w11,[x29, #-0x88]
7101ba28fc  b.le 0x7101ba2918
7101ba2900  add x0,x19,#0x3e8
7101ba2904  bl 0x710377a120
7101ba2908  ldr x0,[x19, #0x3e0]
7101ba290c  adrp x1,0x7104422000
7101ba2910  add x1,x1,#0x7a9
7101ba2914  b 0x7101ba2944
7101ba2918  ldr x8,[x19, #0x3f0]
7101ba291c  ldr x0,[x8, #0x10]
7101ba2920  cbz x0,0x7101ba2938
7101ba2924  add x1,sp,#0x50
7101ba2928  mov w2,wzr
7101ba292c  mov w3,wzr
7101ba2930  str wzr,[sp, #0x50]
7101ba2934  bl 0x71037a2270
7101ba2938  ldr x0,[x19, #0x3e0]
7101ba293c  adrp x1,0x7104339000
7101ba2940  add x1,x1,#0xf82
7101ba2944  fmov s0,0x3f800000
7101ba2948  bl 0x7103778300
7101ba294c  cmn w21,#0x1
7101ba2950  sturb wzr,[x29, #-0x80]
7101ba2954  stur xzr,[x29, #-0x88]
7101ba2958  strb wzr,[sp, #0x58]
7101ba295c  str xzr,[sp, #0x50]
7101ba2960  b.eq 0x7101ba29c4
7101ba2964  add x0,sp,#0x8
7101ba2968  mov w1,w21
7101ba296c  mov w2,w22
7101ba2970  mov w3,wzr
7101ba2974  add x25,sp,#0x8
7101ba2978  bl 0x7101d38c00
7101ba297c  mov x24,xzr
7101ba2980  add x8,x25,#0x8
7101ba2984  sub x9,x29,#0x88
7101ba2988  b 0x7101ba2994
7101ba298c  add x24,x24,#0x2
7101ba2990  strb w10,[x11, #0x9]
7101ba2994  add x10,x8,x24
7101ba2998  ldrb w12,[x10]
7101ba299c  cbz w12,0x7101ba29d0
7101ba29a0  add w13,w24,#0x1
7101ba29a4  add x11,x9,x24
7101ba29a8  cmp w13,#0x3f
7101ba29ac  strb w12,[x11, #0x8]
7101ba29b0  b.cs 0x7101ba29cc
7101ba29b4  ldrb w10,[x10, #0x1]
7101ba29b8  cbnz w10,0x7101ba298c
7101ba29bc  add x24,x24,#0x1
7101ba29c0  b 0x7101ba29d0
7101ba29c4  mov w20,wzr
7101ba29c8  b 0x7101ba2ac4
7101ba29cc  add w24,w24,#0x1
7101ba29d0  sub x9,x29,#0x88
7101ba29d4  add x22,x9,#0x8
7101ba29d8  mov w10,w23
7101ba29dc  strb wzr,[x22, w24, UXTW ]
7101ba29e0  ldurb w8,[x29, #-0x80]
7101ba29e4  stur w24,[x29, #-0x84]
7101ba29e8  cbz w8,0x7101ba2a0c
7101ba29ec  add x9,x9,#0x9
7101ba29f0  mov w11,#0x89
7101ba29f4  mov w10,w23
7101ba29f8  mul w10,w10,w11
7101ba29fc  and w8,w8,#0xff
7101ba2a00  eor w10,w10,w8
7101ba2a04  ldrb w8,[x9], #0x1
7101ba2a08  cbnz w8,0x7101ba29f8
7101ba2a0c  add x0,sp,#0x8
7101ba2a10  mov w1,w21
7101ba2a14  mov w2,w20
7101ba2a18  mov w3,wzr
7101ba2a1c  stur w10,[x29, #-0x88]
7101ba2a20  add x25,sp,#0x8
7101ba2a24  bl 0x7101d38c00
7101ba2a28  mov x20,xzr
7101ba2a2c  add x8,x25,#0x8
7101ba2a30  add x9,sp,#0x50
7101ba2a34  b 0x7101ba2a40
7101ba2a38  add x20,x20,#0x2
7101ba2a3c  strb w10,[x11, #0x9]
7101ba2a40  add x10,x8,x20
7101ba2a44  ldrb w12,[x10]
7101ba2a48  cbz w12,0x7101ba2a74
7101ba2a4c  add w13,w20,#0x1
7101ba2a50  add x11,x9,x20
7101ba2a54  cmp w13,#0x3f
7101ba2a58  strb w12,[x11, #0x8]
7101ba2a5c  b.cs 0x7101ba2a70
7101ba2a60  ldrb w10,[x10, #0x1]
7101ba2a64  cbnz w10,0x7101ba2a38
7101ba2a68  add x20,x20,#0x1
7101ba2a6c  b 0x7101ba2a74
7101ba2a70  add w20,w20,#0x1
7101ba2a74  add x8,sp,#0x50
7101ba2a78  add x9,x8,#0x8
7101ba2a7c  strb wzr,[x9, w20, UXTW ]
7101ba2a80  ldrb w9,[sp, #0x58]
7101ba2a84  str w20,[sp, #0x54]
7101ba2a88  cbz w9,0x7101ba2aa8
7101ba2a8c  add x8,x8,#0x9
7101ba2a90  mov w10,#0x89
7101ba2a94  mul w11,w23,w10
7101ba2a98  and w9,w9,#0xff
7101ba2a9c  eor w23,w11,w9
7101ba2aa0  ldrb w9,[x8], #0x1
7101ba2aa4  cbnz w9,0x7101ba2a94
7101ba2aa8  str w23,[sp, #0x50]
7101ba2aac  cbz w24,0x7101ba2ac4
7101ba2ab0  add x0,x19,#0x590
7101ba2ab4  mov x1,x22
7101ba2ab8  bl 0x710377a120
7101ba2abc  cbnz w20,0x7101ba2ae8
7101ba2ac0  b 0x7101ba2afc
7101ba2ac4  ldr x8,[x19, #0x598]
7101ba2ac8  ldr x0,[x8, #0x10]
7101ba2acc  cbz x0,0x7101ba2ae4
7101ba2ad0  add x1,sp,#0x8
7101ba2ad4  mov w2,wzr
7101ba2ad8  mov w3,wzr
7101ba2adc  str wzr,[sp, #0x8]
7101ba2ae0  bl 0x71037a2270
7101ba2ae4  cbz w20,0x7101ba2afc
7101ba2ae8  add x8,sp,#0x50
7101ba2aec  add x0,x19,#0x5b0
7101ba2af0  add x1,x8,#0x8
7101ba2af4  bl 0x710377a120
7101ba2af8  b 0x7101ba2b1c
7101ba2afc  ldr x8,[x19, #0x5b8]
7101ba2b00  ldr x0,[x8, #0x10]
7101ba2b04  cbz x0,0x7101ba2b1c
7101ba2b08  add x1,sp,#0x8
7101ba2b0c  mov w2,wzr
7101ba2b10  mov w3,wzr
7101ba2b14  str wzr,[sp, #0x8]
7101ba2b18  bl 0x71037a2270
7101ba2b1c  ldp x29,x30,[sp, #0x120]
7101ba2b20  ldp x20,x19,[sp, #0x110]
7101ba2b24  ldp x22,x21,[sp, #0x100]
7101ba2b28  ldp x24,x23,[sp, #0xf0]
7101ba2b2c  ldp x28,x25,[sp, #0xe0]
7101ba2b30  add sp,sp,#0x130
7101ba2b34  ret
