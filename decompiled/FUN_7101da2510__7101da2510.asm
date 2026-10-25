// addr:      7101da2510
// offset:    0x1da2510
// name:      FUN_7101da2510
// mangled:   
// size:      884

7101da2510  sub sp,sp,#0x80
7101da2514  str d8,[sp, #0x40]
7101da2518  stp x22,x21,[sp, #0x50]
7101da251c  stp x20,x19,[sp, #0x60]
7101da2520  stp x29,x30,[sp, #0x70]
7101da2524  add x29,sp,#0x70
7101da2528  ldr x20,[x0, #0x80]
7101da252c  mov x21,x1
7101da2530  mov x19,x0
7101da2534  add x0,x20,#0x160
7101da2538  adrp x1,0x7104270000
7101da253c  add x1,x1,#0x322
7101da2540  mov x8,sp
7101da2544  bl 0x7103776910
7101da2548  ldr x22,[sp, #0x8]
7101da254c  ldr x0,[x22, #0x8]
7101da2550  cbz x0,0x7101da2574
7101da2554  adrp x8,0x710593b000
7101da2558  ldr x8,[x8, #0xc38]
7101da255c  cbz x8,0x7101da2574
7101da2560  ldr x8,[x8, #0x8]
7101da2564  ldr x1,[x8, #0x78]
7101da2568  cbz x1,0x7101da2574
7101da256c  mov w2,wzr
7101da2570  bl 0x710379e9c0
7101da2574  adrp x8,0x710523d000
7101da2578  add x8,x8,#0x9a8
7101da257c  stp x8,xzr,[sp]
7101da2580  cbz x22,0x7101da258c
7101da2584  mov x0,x22
7101da2588  bl 0x710392eb40
7101da258c  ldrb w8,[x21, #0x18]
7101da2590  strb w8,[x20, #0x1c2]
7101da2594  ldrb w8,[x21, #0x29]
7101da2598  strb w8,[x20, #0x1c4]
7101da259c  ldrb w8,[x21, #0x2a]
7101da25a0  strb w8,[x20, #0x1c5]
7101da25a4  ldr x8,[x21, #0x20]
7101da25a8  str x8,[x20, #0x1d0]
7101da25ac  ldrb w8,[x21, #0x28]
7101da25b0  strb w8,[x20, #0x1d8]
7101da25b4  ldr x9,[x21]
7101da25b8  ldrb w8,[x9, #0x8]
7101da25bc  cbz w8,0x7101da2614
7101da25c0  ldrb w8,[x9, #0xec]
7101da25c4  cbz w8,0x7101da25d0
7101da25c8  ldp x8,x9,[x9, #0x70]
7101da25cc  b 0x7101da25dc
7101da25d0  ldp x8,x9,[x9, #0x70]
7101da25d4  cmp x9,x8
7101da25d8  b.eq 0x7101da2608
7101da25dc  sub x9,x9,x8
7101da25e0  lsr x9,x9,#0x3
7101da25e4  cbz w9,0x7101da2608
7101da25e8  mov w10,wzr
7101da25ec  ldr x11,[x8, w10, UXTW #0x3]
7101da25f0  ldrb w12,[x11, #0x10]
7101da25f4  cmp w12,#0x1
7101da25f8  b.eq 0x7101da2610
7101da25fc  add w10,w10,#0x1
7101da2600  cmp w10,w9
7101da2604  b.cc 0x7101da25ec
7101da2608  mov w8,wzr
7101da260c  b 0x7101da2614
7101da2610  ldrb w8,[x11, #0x48]
7101da2614  strb w8,[x20, #0x1c3]
7101da2618  ldr x8,[x21]
7101da261c  ldrb w8,[x8, #0xb8]
7101da2620  strb w8,[x20, #0x1c6]
7101da2624  ldrb w8,[x21, #0x2c]
7101da2628  cbz w8,0x7101da2644
7101da262c  ldr x8,[x21, #0x10]
7101da2630  cbz x8,0x7101da264c
7101da2634  ldrsh w8,[x8, #0x2]
7101da2638  cmn w8,#0x1
7101da263c  cset w8,eq
7101da2640  b 0x7101da2650
7101da2644  strb wzr,[x20, #0x1c7]
7101da2648  b 0x7101da2654
7101da264c  mov w8,#0x1
7101da2650  strb w8,[x20, #0x1c7]
7101da2654  ldr x8,[x20, #0x150]
7101da2658  ldr x0,[x8]
7101da265c  orr w1,wzr,#0x3
7101da2660  mov w2,wzr
7101da2664  bl 0x7103775dc0
7101da2668  ldr x8,[x20, #0x158]
7101da266c  ldr x0,[x8]
7101da2670  mov w2,#0x1002
7101da2674  mov w1,wzr
7101da2678  bl 0x7103775dc0
7101da267c  ldr x8,[x20, #0x148]
7101da2680  ldr x0,[x8]
7101da2684  mov w2,#0x1003
7101da2688  mov w1,wzr
7101da268c  bl 0x7103775dc0
7101da2690  ldrb w8,[x21, #0x2b]
7101da2694  ldr x0,[x20, #0x168]
7101da2698  adrp x22,0x71042e7000
7101da269c  add x22,x22,#0x633
7101da26a0  cbz w8,0x7101da26c8
7101da26a4  mov x1,x22
7101da26a8  bl 0x7103778760
7101da26ac  ldr x0,[x20, #0x188]
7101da26b0  mov x1,x22
7101da26b4  bl 0x7103778760
7101da26b8  ldr x0,[x20, #0x178]
7101da26bc  mov x1,x22
7101da26c0  bl 0x7103778760
7101da26c4  b 0x7101da27bc
7101da26c8  fmov s8,0x3f800000
7101da26cc  mov v0.16B,v8.16B
7101da26d0  mov x1,x22
7101da26d4  bl 0x7103778300
7101da26d8  ldr x0,[x20, #0x188]
7101da26dc  mov v0.16B,v8.16B
7101da26e0  mov x1,x22
7101da26e4  bl 0x7103778300
7101da26e8  ldr x0,[x20, #0x178]
7101da26ec  mov v0.16B,v8.16B
7101da26f0  mov x1,x22
7101da26f4  bl 0x7103778300
7101da26f8  adrp x8,0x710532f000
7101da26fc  ldr x8,[x8, #0x8d0]
7101da2700  ldr x0,[x8, #0x8]
7101da2704  ldrb w8,[x0, #0x191]
7101da2708  cbnz w8,0x7101da2788
7101da270c  mov x22,#0xd6ab
7101da2710  movk x22,#0xc30d, LSL #16
7101da2714  movk x22,#0xf, LSL #32
7101da2718  mov w2,#0x4
7101da271c  mov x1,x22
7101da2720  bl 0x7103313f20
7101da2724  tbz w0,#0x0,0x7101da2788
7101da2728  mov x0,sp
7101da272c  mov x1,x22
7101da2730  bl 0x71024076d0
7101da2734  ldr x8,[sp, #0x10]
7101da2738  adrp x9,0x7104f73000
7101da273c  add x9,x9,#0xd50
7101da2740  str x9,[sp, #0x8]
7101da2744  cbz x8,0x7101da27b4
7101da2748  adrp x8,0x7106dd5000
7101da274c  ldrb w8,[x8, #0x3a8]
7101da2750  cmp w8,#0x1
7101da2754  b.ne 0x7101da27b4
7101da2758  adrp x9,0x7106dd5000
7101da275c  ldr w8,[sp, #0x18]
7101da2760  ldr w9,[x9, #0x3ac]
7101da2764  cmp w8,w9
7101da2768  b.ne 0x7101da27b4
7101da276c  ldr x8,[sp, #0x10]
7101da2770  ldr wzr,[x8, #0x38]!
7101da2774  ldaxr w9,[x8]
7101da2778  sub w9,w9,#0x1
7101da277c  stlxr w10,w9,[x8]
7101da2780  cbnz w10,0x7101da2774
7101da2784  b 0x7101da27b4
7101da2788  mov x8,#0x650000000000
7101da278c  movk x8,#0x87, LSL #48
7101da2790  strb wzr,[sp, #0x20]
7101da2794  stp xzr,x8,[sp, #0x10]
7101da2798  mov x8,#-0x1
7101da279c  stp x8,xzr,[sp, #0x28]
7101da27a0  adrp x8,0x7104f73000
7101da27a4  add x8,x8,#0xd50
7101da27a8  str wzr,[sp]
7101da27ac  str xzr,[sp, #0x38]
7101da27b0  str x8,[sp, #0x8]
7101da27b4  str xzr,[sp, #0x10]
7101da27b8  strb wzr,[sp, #0x20]
7101da27bc  ldr x1,[x21]
7101da27c0  ldrh w2,[x21, #0x8]
7101da27c4  mov x0,x20
7101da27c8  ldr x3,[x21, #0x10]
7101da27cc  ldrb w4,[x20, #0x1c4]
7101da27d0  ldrb w5,[x21, #0x2b]
7101da27d4  bl 0x7101d9d070
7101da27d8  ldr x8,[x20, #0x168]
7101da27dc  ldr x0,[x8, #0x8]
7101da27e0  cbz x0,0x7101da280c
7101da27e4  adrp x1,0x71042b4000
7101da27e8  add x1,x1,#0x74b
7101da27ec  bl 0x71037964b0
7101da27f0  cbz x0,0x7101da280c
7101da27f4  ldr x8,[x0]
7101da27f8  ldr x8,[x8, #0x130]
7101da27fc  blr x8
7101da2800  tbz w0,#0x0,0x7101da280c
7101da2804  mov w8,#0x1
7101da2808  strb w8,[x20, #0x1b8]
7101da280c  ldr x0,[x20, #0x1b0]
7101da2810  ldr x8,[x0]
7101da2814  ldr x8,[x8, #0x70]
7101da2818  mov w1,wzr
7101da281c  blr x8
7101da2820  ldr x8,[x20, #0x148]
7101da2824  ldr x8,[x8]
7101da2828  ldr x0,[x8]
7101da282c  mov w1,wzr
7101da2830  bl 0x71037760f0
7101da2834  adrp x8,0x710593b000
7101da2838  ldr x8,[x8, #0x988]
7101da283c  ldr x8,[x8, #0x8]
7101da2840  ldr w9,[x8]
7101da2844  orr w9,w9,#0x2
7101da2848  str w9,[x8]
7101da284c  ldrsw x8,[x20, #0x114]
7101da2850  cmp w8,#0x13
7101da2854  b.cs 0x7101da2880
7101da2858  add x8,x20,x8, LSL #0x2
7101da285c  mov w9,#0x1
7101da2860  str w9,[x8, #0xc8]
7101da2864  strb wzr,[x19, #0x70]
7101da2868  ldr d8,[sp, #0x40]
7101da286c  ldp x29,x30,[sp, #0x70]
7101da2870  ldp x20,x19,[sp, #0x60]
7101da2874  ldp x22,x21,[sp, #0x50]
7101da2878  add sp,sp,#0x80
7101da287c  ret
7101da2880  bl 0x71039c2650
