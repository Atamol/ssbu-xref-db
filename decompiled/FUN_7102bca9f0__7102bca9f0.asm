// addr:      7102bca9f0
// offset:    0x2bca9f0
// name:      FUN_7102bca9f0
// mangled:   
// size:      1132

7102bca9f0  str x19,[sp, #-0x20]!
7102bca9f4  stp x29,x30,[sp, #0x10]
7102bca9f8  add x29,sp,#0x10
7102bca9fc  ldr x9,[x0, #0xb90]
7102bcaa00  ldp x8,x9,[x9]
7102bcaa04  mov x19,x0
7102bcaa08  cmp x8,x9
7102bcaa0c  b.eq 0x7102bcaa84
7102bcaa10  ldr x11,[x8]
7102bcaa14  ldrb w10,[x11, #0x20]
7102bcaa18  cbz w10,0x7102bcaa78
7102bcaa1c  ldp x13,x10,[x11, #0x8]
7102bcaa20  ldr x12,[x11]
7102bcaa24  strb wzr,[x11, #0x20]
7102bcaa28  str x12,[x13]
7102bcaa2c  str x13,[x12, #0x8]
7102bcaa30  ldr x12,[x10, #0x18]
7102bcaa34  sub x12,x12,#0x1
7102bcaa38  str x12,[x10, #0x18]
7102bcaa3c  stp xzr,xzr,[x11]
7102bcaa40  ldr x13,[x10, #0x40]
7102bcaa44  add x12,x10,#0x38
7102bcaa48  stp x12,x13,[x11]
7102bcaa4c  str x11,[x10, #0x40]
7102bcaa50  str x11,[x13]
7102bcaa54  ldr x12,[x10, #0x30]
7102bcaa58  add x12,x12,#0x1
7102bcaa5c  str x12,[x10, #0x30]
7102bcaa60  ldr x11,[x11, #0x18]
7102bcaa64  cbz x11,0x7102bcaa6c
7102bcaa68  ldr w11,[x11, #0x110]
7102bcaa6c  ldr w12,[x10, #0x48]
7102bcaa70  sub w11,w12,w11
7102bcaa74  str w11,[x10, #0x48]
7102bcaa78  add x8,x8,#0x8
7102bcaa7c  cmp x9,x8
7102bcaa80  b.ne 0x7102bcaa10
7102bcaa84  ldr x9,[x19, #0xb98]
7102bcaa88  ldp x8,x9,[x9]
7102bcaa8c  cmp x8,x9
7102bcaa90  b.eq 0x7102bcab08
7102bcaa94  ldr x11,[x8]
7102bcaa98  ldrb w10,[x11, #0x20]
7102bcaa9c  cbz w10,0x7102bcaafc
7102bcaaa0  ldp x13,x10,[x11, #0x8]
7102bcaaa4  ldr x12,[x11]
7102bcaaa8  strb wzr,[x11, #0x20]
7102bcaaac  str x12,[x13]
7102bcaab0  str x13,[x12, #0x8]
7102bcaab4  ldr x12,[x10, #0x18]
7102bcaab8  sub x12,x12,#0x1
7102bcaabc  str x12,[x10, #0x18]
7102bcaac0  stp xzr,xzr,[x11]
7102bcaac4  ldr x13,[x10, #0x40]
7102bcaac8  add x12,x10,#0x38
7102bcaacc  stp x12,x13,[x11]
7102bcaad0  str x11,[x10, #0x40]
7102bcaad4  str x11,[x13]
7102bcaad8  ldr x12,[x10, #0x30]
7102bcaadc  add x12,x12,#0x1
7102bcaae0  str x12,[x10, #0x30]
7102bcaae4  ldr x11,[x11, #0x18]
7102bcaae8  cbz x11,0x7102bcaaf0
7102bcaaec  ldr w11,[x11, #0x110]
7102bcaaf0  ldr w12,[x10, #0x48]
7102bcaaf4  sub w11,w12,w11
7102bcaaf8  str w11,[x10, #0x48]
7102bcaafc  add x8,x8,#0x8
7102bcab00  cmp x9,x8
7102bcab04  b.ne 0x7102bcaa94
7102bcab08  ldr x9,[x19, #0xba0]
7102bcab0c  ldp x8,x9,[x9]
7102bcab10  cmp x8,x9
7102bcab14  b.eq 0x7102bcab8c
7102bcab18  ldr x11,[x8]
7102bcab1c  ldrb w10,[x11, #0x20]
7102bcab20  cbz w10,0x7102bcab80
7102bcab24  ldp x13,x10,[x11, #0x8]
7102bcab28  ldr x12,[x11]
7102bcab2c  strb wzr,[x11, #0x20]
7102bcab30  str x12,[x13]
7102bcab34  str x13,[x12, #0x8]
7102bcab38  ldr x12,[x10, #0x18]
7102bcab3c  sub x12,x12,#0x1
7102bcab40  str x12,[x10, #0x18]
7102bcab44  stp xzr,xzr,[x11]
7102bcab48  ldr x13,[x10, #0x40]
7102bcab4c  add x12,x10,#0x38
7102bcab50  stp x12,x13,[x11]
7102bcab54  str x11,[x10, #0x40]
7102bcab58  str x11,[x13]
7102bcab5c  ldr x12,[x10, #0x30]
7102bcab60  add x12,x12,#0x1
7102bcab64  str x12,[x10, #0x30]
7102bcab68  ldr x11,[x11, #0x18]
7102bcab6c  cbz x11,0x7102bcab74
7102bcab70  ldr w11,[x11, #0x110]
7102bcab74  ldr w12,[x10, #0x48]
7102bcab78  sub w11,w12,w11
7102bcab7c  str w11,[x10, #0x48]
7102bcab80  add x8,x8,#0x8
7102bcab84  cmp x9,x8
7102bcab88  b.ne 0x7102bcab18
7102bcab8c  ldr x9,[x19, #0xba8]
7102bcab90  ldp x8,x9,[x9]
7102bcab94  cmp x8,x9
7102bcab98  b.eq 0x7102bcac10
7102bcab9c  ldr x11,[x8]
7102bcaba0  ldrb w10,[x11, #0x20]
7102bcaba4  cbz w10,0x7102bcac04
7102bcaba8  ldp x13,x10,[x11, #0x8]
7102bcabac  ldr x12,[x11]
7102bcabb0  strb wzr,[x11, #0x20]
7102bcabb4  str x12,[x13]
7102bcabb8  str x13,[x12, #0x8]
7102bcabbc  ldr x12,[x10, #0x18]
7102bcabc0  sub x12,x12,#0x1
7102bcabc4  str x12,[x10, #0x18]
7102bcabc8  stp xzr,xzr,[x11]
7102bcabcc  ldr x13,[x10, #0x40]
7102bcabd0  add x12,x10,#0x38
7102bcabd4  stp x12,x13,[x11]
7102bcabd8  str x11,[x10, #0x40]
7102bcabdc  str x11,[x13]
7102bcabe0  ldr x12,[x10, #0x30]
7102bcabe4  add x12,x12,#0x1
7102bcabe8  str x12,[x10, #0x30]
7102bcabec  ldr x11,[x11, #0x18]
7102bcabf0  cbz x11,0x7102bcabf8
7102bcabf4  ldr w11,[x11, #0x110]
7102bcabf8  ldr w12,[x10, #0x48]
7102bcabfc  sub w11,w12,w11
7102bcac00  str w11,[x10, #0x48]
7102bcac04  add x8,x8,#0x8
7102bcac08  cmp x9,x8
7102bcac0c  b.ne 0x7102bcab9c
7102bcac10  ldr x9,[x19, #0xbb0]
7102bcac14  ldp x8,x9,[x9]
7102bcac18  cmp x8,x9
7102bcac1c  b.eq 0x7102bcac94
7102bcac20  ldr x11,[x8]
7102bcac24  ldrb w10,[x11, #0x20]
7102bcac28  cbz w10,0x7102bcac88
7102bcac2c  ldp x13,x10,[x11, #0x8]
7102bcac30  ldr x12,[x11]
7102bcac34  strb wzr,[x11, #0x20]
7102bcac38  str x12,[x13]
7102bcac3c  str x13,[x12, #0x8]
7102bcac40  ldr x12,[x10, #0x18]
7102bcac44  sub x12,x12,#0x1
7102bcac48  str x12,[x10, #0x18]
7102bcac4c  stp xzr,xzr,[x11]
7102bcac50  ldr x13,[x10, #0x40]
7102bcac54  add x12,x10,#0x38
7102bcac58  stp x12,x13,[x11]
7102bcac5c  str x11,[x10, #0x40]
7102bcac60  str x11,[x13]
7102bcac64  ldr x12,[x10, #0x30]
7102bcac68  add x12,x12,#0x1
7102bcac6c  str x12,[x10, #0x30]
7102bcac70  ldr x11,[x11, #0x18]
7102bcac74  cbz x11,0x7102bcac7c
7102bcac78  ldr w11,[x11, #0x110]
7102bcac7c  ldr w12,[x10, #0x48]
7102bcac80  sub w11,w12,w11
7102bcac84  str w11,[x10, #0x48]
7102bcac88  add x8,x8,#0x8
7102bcac8c  cmp x9,x8
7102bcac90  b.ne 0x7102bcac20
7102bcac94  ldr x8,[x19, #0x9d0]
7102bcac98  ldr x9,[x8, #0x90]
7102bcac9c  ldp x8,x9,[x9]
7102bcaca0  cmp x8,x9
7102bcaca4  b.eq 0x7102bcad1c
7102bcaca8  ldr x11,[x8]
7102bcacac  ldrb w10,[x11, #0x20]
7102bcacb0  cbz w10,0x7102bcad10
7102bcacb4  ldp x13,x10,[x11, #0x8]
7102bcacb8  ldr x12,[x11]
7102bcacbc  strb wzr,[x11, #0x20]
7102bcacc0  str x12,[x13]
7102bcacc4  str x13,[x12, #0x8]
7102bcacc8  ldr x12,[x10, #0x18]
7102bcaccc  sub x12,x12,#0x1
7102bcacd0  str x12,[x10, #0x18]
7102bcacd4  stp xzr,xzr,[x11]
7102bcacd8  ldr x13,[x10, #0x40]
7102bcacdc  add x12,x10,#0x38
7102bcace0  stp x12,x13,[x11]
7102bcace4  str x11,[x10, #0x40]
7102bcace8  str x11,[x13]
7102bcacec  ldr x12,[x10, #0x30]
7102bcacf0  add x12,x12,#0x1
7102bcacf4  str x12,[x10, #0x30]
7102bcacf8  ldr x11,[x11, #0x18]
7102bcacfc  cbz x11,0x7102bcad04
7102bcad00  ldr w11,[x11, #0x110]
7102bcad04  ldr w12,[x10, #0x48]
7102bcad08  sub w11,w12,w11
7102bcad0c  str w11,[x10, #0x48]
7102bcad10  add x8,x8,#0x8
7102bcad14  cmp x9,x8
7102bcad18  b.ne 0x7102bcaca8
7102bcad1c  cbnz w1,0x7102bcadf4
7102bcad20  ldr x8,[x19, #0xb90]
7102bcad24  ldp x1,x8,[x8]
7102bcad28  cmp x1,x8
7102bcad2c  b.eq 0x7102bcadb4
7102bcad30  mov w9,#0x1
7102bcad34  ldr x11,[x1]
7102bcad38  ldrb w10,[x11, #0x20]
7102bcad3c  cbnz w10,0x7102bcad9c
7102bcad40  ldp x13,x10,[x11, #0x8]
7102bcad44  ldr x12,[x11]
7102bcad48  strb w9,[x11, #0x20]
7102bcad4c  str x12,[x13]
7102bcad50  str x13,[x12, #0x8]
7102bcad54  ldr x12,[x10, #0x30]
7102bcad58  sub x12,x12,#0x1
7102bcad5c  str x12,[x10, #0x30]
7102bcad60  stp xzr,xzr,[x11]
7102bcad64  ldr x13,[x10, #0x28]
7102bcad68  add x12,x10,#0x20
7102bcad6c  stp x12,x13,[x11]
7102bcad70  str x11,[x10, #0x28]
7102bcad74  str x11,[x13]
7102bcad78  ldr x12,[x10, #0x18]
7102bcad7c  add x12,x12,#0x1
7102bcad80  str x12,[x10, #0x18]
7102bcad84  ldr x11,[x11, #0x18]
7102bcad88  cbz x11,0x7102bcad90
7102bcad8c  ldr w11,[x11, #0x110]
7102bcad90  ldr w12,[x10, #0x48]
7102bcad94  add w11,w12,w11
7102bcad98  str w11,[x10, #0x48]
7102bcad9c  add x1,x1,#0x8
7102bcada0  cmp x8,x1
7102bcada4  b.ne 0x7102bcad34
7102bcada8  ldr x8,[x19, #0xb90]
7102bcadac  ldp x0,x1,[x8]
7102bcadb0  b 0x7102bcadb8
7102bcadb4  mov x0,x1
7102bcadb8  adrp x2,0x71042a1000
7102bcadbc  add x2,x2,#0x676
7102bcadc0  bl 0x71025f55b0
7102bcadc4  ldr x8,[x19, #0xb90]
7102bcadc8  ldp x0,x1,[x8]
7102bcadcc  adrp x2,0x7104441000
7102bcadd0  add x2,x2,#0xec7
7102bcadd4  bl 0x71025f55b0
7102bcadd8  adrp x8,0x7105314000
7102bcaddc  add x8,x8,#0x4d8
7102bcade0  ldarb w8,[x8]
7102bcade4  tbz w8,#0x0,0x7102bcae1c
7102bcade8  adrp x8,0x71052c5000
7102bcadec  ldrb w8,[x8, #0x1ba]
7102bcadf0  cbz w8,0x7102bcae00
7102bcadf4  ldp x29,x30,[sp, #0x10]
7102bcadf8  ldr x19,[sp], #0x20
7102bcadfc  ret
7102bcae00  ldr x8,[x19, #0xb90]
7102bcae04  ldp x0,x1,[x8]
7102bcae08  ldp x29,x30,[sp, #0x10]
7102bcae0c  adrp x2,0x7104359000
7102bcae10  add x2,x2,#0x918
7102bcae14  ldr x19,[sp], #0x20
7102bcae18  b 0x71025f55b0
7102bcae1c  adrp x0,0x7105314000
7102bcae20  add x0,x0,#0x4d8
7102bcae24  bl 0x71039c06b0
7102bcae28  cbz w0,0x7102bcade8
7102bcae2c  bl 0x7101764000
7102bcae30  adrp x0,0x7101763000
7102bcae34  add x0,x0,#0xc40
7102bcae38  adrp x1,0x71052c5000
7102bcae3c  add x1,x1,#0x180
7102bcae40  adrp x2,0x7104f17000
7102bcae44  add x2,x2,#0x0
7102bcae48  bl 0x71000001c0
7102bcae4c  adrp x0,0x7105314000
7102bcae50  add x0,x0,#0x4d8
7102bcae54  bl 0x71039c06c0
7102bcae58  b 0x7102bcade8
