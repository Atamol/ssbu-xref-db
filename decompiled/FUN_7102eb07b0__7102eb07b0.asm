// addr:      7102eb07b0
// offset:    0x2eb07b0
// name:      FUN_7102eb07b0
// mangled:   
// size:      564

7102eb07b0  sub sp,sp,#0x40
7102eb07b4  stp x20,x19,[sp, #0x20]
7102eb07b8  stp x29,x30,[sp, #0x30]
7102eb07bc  add x29,sp,#0x30
7102eb07c0  ldrb w8,[x0, #0xa8]
7102eb07c4  mov x19,x0
7102eb07c8  cbz w8,0x7102eb09b4
7102eb07cc  adrp x8,0x71052a8000
7102eb07d0  ldr x8,[x8, #0xa88]
7102eb07d4  strb wzr,[x19, #0xa8]
7102eb07d8  ldr q1,[x8]
7102eb07dc  fmov s0,wzr
7102eb07e0  str xzr,[x19, #0x138]
7102eb07e4  ext v2.16B,v1.16B,v1.16B,0x8
7102eb07e8  mov v2.S[0x1],v0.S[0x0]
7102eb07ec  mov v1.D[0x1],v2.D[0x0]
7102eb07f0  add x9,x19,#0x148
7102eb07f4  add x11,sp,#0x8
7102eb07f8  mov w10,#0x1
7102eb07fc  cmp x9,x11
7102eb0800  str wzr,[x19, #0x130]
7102eb0804  strb w10,[x19, #0x134]
7102eb0808  str q1,[x19, #0x270]
7102eb080c  str q1,[x19, #0x30]
7102eb0810  str q1,[x19, #0x120]
7102eb0814  stp xzr,xzr,[sp, #0x10]
7102eb0818  str xzr,[sp, #0x8]
7102eb081c  b.eq 0x7102eb0870
7102eb0820  ldr x12,[x19, #0x158]
7102eb0824  cbz x12,0x7102eb0870
7102eb0828  ldp x13,x14,[x19, #0x148]
7102eb082c  str x13,[x14]
7102eb0830  str x14,[x13, #0x8]
7102eb0834  ldr x13,[x12, #0x10]
7102eb0838  sub x13,x13,#0x1
7102eb083c  str x13,[x12, #0x10]
7102eb0840  stp xzr,xzr,[x9, #0x8]
7102eb0844  str xzr,[x9]
7102eb0848  ldr x9,[sp, #0x18]
7102eb084c  cbz x9,0x7102eb0870
7102eb0850  ldp x12,x13,[sp, #0x8]
7102eb0854  str x12,[x13]
7102eb0858  str x13,[x12, #0x8]
7102eb085c  ldr x12,[x9, #0x10]
7102eb0860  sub x12,x12,#0x1
7102eb0864  str x12,[x9, #0x10]
7102eb0868  stp xzr,xzr,[sp, #0x10]
7102eb086c  str xzr,[sp, #0x8]
7102eb0870  mov w9,#0xffffffff
7102eb0874  str w9,[x19, #0x140]
7102eb0878  str x9,[x19, #0x1b0]
7102eb087c  ldr q1,[x8]
7102eb0880  add x8,x19,#0x1e8
7102eb0884  cmp x8,x11
7102eb0888  str wzr,[x19, #0x1d0]
7102eb088c  strb w10,[x19, #0x1d4]
7102eb0890  str xzr,[x19, #0x1d8]
7102eb0894  ext v2.16B,v1.16B,v1.16B,0x8
7102eb0898  mov v2.S[0x1],v0.S[0x0]
7102eb089c  mov v1.D[0x1],v2.D[0x0]
7102eb08a0  str q1,[x19, #0x1c0]
7102eb08a4  stp xzr,xzr,[sp, #0x10]
7102eb08a8  str xzr,[sp, #0x8]
7102eb08ac  b.eq 0x7102eb0900
7102eb08b0  ldr x10,[x19, #0x1f8]
7102eb08b4  cbz x10,0x7102eb0900
7102eb08b8  ldp x11,x12,[x19, #0x1e8]
7102eb08bc  str x11,[x12]
7102eb08c0  str x12,[x11, #0x8]
7102eb08c4  ldr x11,[x10, #0x10]
7102eb08c8  sub x11,x11,#0x1
7102eb08cc  str x11,[x10, #0x10]
7102eb08d0  stp xzr,xzr,[x8, #0x8]
7102eb08d4  str xzr,[x8]
7102eb08d8  ldr x8,[sp, #0x18]
7102eb08dc  cbz x8,0x7102eb0900
7102eb08e0  ldp x10,x11,[sp, #0x8]
7102eb08e4  str x10,[x11]
7102eb08e8  str x11,[x10, #0x8]
7102eb08ec  ldr x10,[x8, #0x10]
7102eb08f0  sub x10,x10,#0x1
7102eb08f4  str x10,[x8, #0x10]
7102eb08f8  stp xzr,xzr,[sp, #0x10]
7102eb08fc  str xzr,[sp, #0x8]
7102eb0900  ldr x8,[x19, #0x268]
7102eb0904  add x20,x19,#0x268
7102eb0908  str w9,[x19, #0x1e0]
7102eb090c  str x9,[x19, #0x250]
7102eb0910  cbz x8,0x7102eb0948
7102eb0914  ldrb w9,[x8, #0xe0]
7102eb0918  cbz w9,0x7102eb0928
7102eb091c  ldr x9,[x8, #0xc8]
7102eb0920  cbz x9,0x7102eb0928
7102eb0924  strh wzr,[x9, #0x30]
7102eb0928  ldr x9,[x8, #0xd8]
7102eb092c  cbz x9,0x7102eb0934
7102eb0930  strb wzr,[x9, #0x21]
7102eb0934  ldrb w9,[x8, #0xe0]
7102eb0938  cbz w9,0x7102eb0948
7102eb093c  ldr x8,[x8, #0xb0]
7102eb0940  mov w9,#0x1
7102eb0944  strb w9,[x8, #0x10]
7102eb0948  ldr x0,[x20]
7102eb094c  adrp x1,0x710439b000
7102eb0950  add x1,x1,#0x5da
7102eb0954  bl 0x7102610070
7102eb0958  ldr x8,[x20]
7102eb095c  cbz x8,0x7102eb098c
7102eb0960  ldr x9,[x8, #0xd8]
7102eb0964  cbz x9,0x7102eb097c
7102eb0968  ldrb w10,[x9, #0x22]
7102eb096c  cbz w10,0x7102eb097c
7102eb0970  strb wzr,[x9, #0x22]
7102eb0974  ldr x8,[x20]
7102eb0978  cbz x8,0x7102eb098c
7102eb097c  ldr x0,[x8, #0xd8]
7102eb0980  fmov s0,wzr
7102eb0984  mov w1,#0x1
7102eb0988  bl 0x71025ee450
7102eb098c  ldr x8,[x19, #0x10]
7102eb0990  movi v0.2D,#0x0
7102eb0994  add x9,x8,#0x20
7102eb0998  ld1 {v0.S}[0],[x9]
7102eb099c  add x9,x8,#0x24
7102eb09a0  add x8,x8,#0x28
7102eb09a4  ld1 {v0.S}[1],[x9]
7102eb09a8  ld1 {v0.S}[2],[x8]
7102eb09ac  str q0,[x19, #0x20]
7102eb09b0  b 0x7102eb09b8
7102eb09b4  add x20,x19,#0x268
7102eb09b8  ldr x0,[x20]
7102eb09bc  bl 0x710260ffb0
7102eb09c0  tbz w0,#0x0,0x7102eb09d4
7102eb09c4  orr w8,wzr,#0x3
7102eb09c8  str w8,[x19, #0x40]
7102eb09cc  mov w8,#0x1
7102eb09d0  strb w8,[x19, #0xa8]
7102eb09d4  ldp x29,x30,[sp, #0x30]
7102eb09d8  ldp x20,x19,[sp, #0x20]
7102eb09dc  add sp,sp,#0x40
7102eb09e0  ret
