// addr:      7102ada760
// offset:    0x2ada760
// name:      FUN_7102ada760
// mangled:   
// size:      6356

7102ada760  sub sp,sp,#0xc0
7102ada764  stp x28,x27,[sp, #0x60]
7102ada768  stp x26,x25,[sp, #0x70]
7102ada76c  stp x24,x23,[sp, #0x80]
7102ada770  stp x22,x21,[sp, #0x90]
7102ada774  stp x20,x19,[sp, #0xa0]
7102ada778  stp x29,x30,[sp, #0xb0]
7102ada77c  add x29,sp,#0xb0
7102ada780  mov x28,x0
7102ada784  mov w0,#0x10
7102ada788  mov w1,#0x8
7102ada78c  bl 0x710392e290
7102ada790  mov x20,x0
7102ada794  cbnz x0,0x7102ada7e0
7102ada798  adrp x8,0x7105332000
7102ada79c  ldr x0,[x8, #0xf00]
7102ada7a0  cbz x0,0x7102ada7dc
7102ada7a4  mov w8,#0x8
7102ada7a8  stur wzr,[x29, #-0x54]
7102ada7ac  sub x1,x29,#0x54
7102ada7b0  str x8,[sp, #0x40]
7102ada7b4  ldr x8,[x0]
7102ada7b8  ldr x8,[x8, #0x30]
7102ada7bc  add x2,sp,#0x40
7102ada7c0  blr x8
7102ada7c4  tbz w0,#0x0,0x7102ada7dc
7102ada7c8  mov w0,#0x10
7102ada7cc  mov w1,#0x8
7102ada7d0  bl 0x710392e290
7102ada7d4  mov x20,x0
7102ada7d8  cbnz x0,0x7102ada7e0
7102ada7dc  mov x20,xzr
7102ada7e0  mov w0,#0x10
7102ada7e4  orr w1,wzr,#0x30
7102ada7e8  bl 0x710392e290
7102ada7ec  cbnz x0,0x7102ada834
7102ada7f0  adrp x8,0x7105332000
7102ada7f4  ldr x0,[x8, #0xf00]
7102ada7f8  cbz x0,0x7102ada830
7102ada7fc  orr w8,wzr,#0x30
7102ada800  stur wzr,[x29, #-0x54]
7102ada804  sub x1,x29,#0x54
7102ada808  str x8,[sp, #0x40]
7102ada80c  ldr x8,[x0]
7102ada810  ldr x8,[x8, #0x30]
7102ada814  add x2,sp,#0x40
7102ada818  blr x8
7102ada81c  tbz w0,#0x0,0x7102ada830
7102ada820  mov w0,#0x10
7102ada824  orr w1,wzr,#0x30
7102ada828  bl 0x710392e290
7102ada82c  cbnz x0,0x7102ada834
7102ada830  mov x0,xzr
7102ada834  orr w8,wzr,#0x3f800000
7102ada838  stp xzr,xzr,[x0, #0x18]
7102ada83c  stp xzr,xzr,[x0, #0x8]
7102ada840  mov w1,#0x20
7102ada844  str x28,[x0]
7102ada848  str w8,[x0, #0x28]
7102ada84c  str x0,[x20]
7102ada850  mov w0,#0x10
7102ada854  bl 0x710392e290
7102ada858  cbnz x0,0x7102ada8a0
7102ada85c  adrp x8,0x7105332000
7102ada860  ldr x0,[x8, #0xf00]
7102ada864  cbz x0,0x7102ada89c
7102ada868  mov w8,#0x20
7102ada86c  stur wzr,[x29, #-0x54]
7102ada870  sub x1,x29,#0x54
7102ada874  str x8,[sp, #0x40]
7102ada878  ldr x8,[x0]
7102ada87c  ldr x8,[x8, #0x30]
7102ada880  add x2,sp,#0x40
7102ada884  blr x8
7102ada888  tbz w0,#0x0,0x7102ada89c
7102ada88c  mov w0,#0x10
7102ada890  mov w1,#0x20
7102ada894  bl 0x710392e290
7102ada898  cbnz x0,0x7102ada8a0
7102ada89c  mov x0,xzr
7102ada8a0  adrp x8,0x710510f000
7102ada8a4  add x8,x8,#0x598
7102ada8a8  stp x8,xzr,[x0]
7102ada8ac  stp xzr,x20,[x0, #0x10]
7102ada8b0  str x20,[x28, #0x828]
7102ada8b4  ldr x20,[x28, #0x830]
7102ada8b8  str x0,[x28, #0x830]
7102ada8bc  cbz x20,0x7102ada8f0
7102ada8c0  add x8,x20,#0x8
7102ada8c4  ldaxr x9,[x8]
7102ada8c8  sub x10,x9,#0x1
7102ada8cc  stlxr w11,x10,[x8]
7102ada8d0  cbnz w11,0x7102ada8c4
7102ada8d4  cbnz x9,0x7102ada8f0
7102ada8d8  ldr x8,[x20]
7102ada8dc  ldr x8,[x8, #0x10]
7102ada8e0  mov x0,x20
7102ada8e4  blr x8
7102ada8e8  mov x0,x20
7102ada8ec  bl 0x71039c2670
7102ada8f0  ldr x8,[x28, #0x828]
7102ada8f4  ldr x19,[x8]
7102ada8f8  cbz x19,0x7102adaa50
7102ada8fc  adrp x0,0x7104420000
7102ada900  add x0,x0,#0x502
7102ada904  bl 0x7103151710
7102ada908  mov x20,x19
7102ada90c  ldr x8,[x20], #0x8
7102ada910  ldr x8,[x8, #0x300]
7102ada914  mov w1,w0
7102ada918  ldr x0,[x8, #0x8]
7102ada91c  bl 0x710262cd30
7102ada920  ldr s1,[x0, #0x108]
7102ada924  movi d0,#0x0
7102ada928  add x8,x0,#0x10c
7102ada92c  add x9,x0,#0x110
7102ada930  mov x0,x20
7102ada934  mov w1,wzr
7102ada938  ld1 {v0.S}[0],[x9]
7102ada93c  ld1 {v1.S}[1],[x8]
7102ada940  mov v1.D[0x1],v0.D[0x0]
7102ada944  str q1,[sp, #0x30]
7102ada948  bl 0x7102691880
7102ada94c  ldr q0,[sp, #0x30]
7102ada950  str q0,[x0]
7102ada954  adrp x0,0x71043cd000
7102ada958  add x0,x0,#0x5ff
7102ada95c  bl 0x7103151710
7102ada960  ldr x8,[x19]
7102ada964  ldr x8,[x8, #0x300]
7102ada968  mov w1,w0
7102ada96c  ldr x0,[x8, #0x8]
7102ada970  bl 0x710262cd30
7102ada974  ldr s1,[x0, #0x108]
7102ada978  movi d0,#0x0
7102ada97c  add x8,x0,#0x10c
7102ada980  add x9,x0,#0x110
7102ada984  mov x0,x20
7102ada988  mov w1,#0x1
7102ada98c  ld1 {v0.S}[0],[x9]
7102ada990  ld1 {v1.S}[1],[x8]
7102ada994  mov v1.D[0x1],v0.D[0x0]
7102ada998  str q1,[sp, #0x30]
7102ada99c  bl 0x7102691880
7102ada9a0  ldr q0,[sp, #0x30]
7102ada9a4  str q0,[x0]
7102ada9a8  adrp x0,0x71042d4000
7102ada9ac  add x0,x0,#0x53d
7102ada9b0  bl 0x7103151710
7102ada9b4  ldr x8,[x19]
7102ada9b8  ldr x8,[x8, #0x300]
7102ada9bc  mov w1,w0
7102ada9c0  ldr x0,[x8, #0x8]
7102ada9c4  bl 0x710262cd30
7102ada9c8  ldr s1,[x0, #0x108]
7102ada9cc  movi d0,#0x0
7102ada9d0  add x8,x0,#0x10c
7102ada9d4  add x9,x0,#0x110
7102ada9d8  mov x0,x20
7102ada9dc  mov w1,#0x2
7102ada9e0  ld1 {v0.S}[0],[x9]
7102ada9e4  ld1 {v1.S}[1],[x8]
7102ada9e8  mov v1.D[0x1],v0.D[0x0]
7102ada9ec  str q1,[sp, #0x30]
7102ada9f0  bl 0x7102691880
7102ada9f4  ldr q0,[sp, #0x30]
7102ada9f8  str q0,[x0]
7102ada9fc  adrp x0,0x71043cd000
7102adaa00  add x0,x0,#0x607
7102adaa04  bl 0x7103151710
7102adaa08  ldr x8,[x19]
7102adaa0c  ldr x8,[x8, #0x300]
7102adaa10  mov w1,w0
7102adaa14  ldr x0,[x8, #0x8]
7102adaa18  bl 0x710262cd30
7102adaa1c  ldr s1,[x0, #0x108]
7102adaa20  movi d0,#0x0
7102adaa24  add x8,x0,#0x10c
7102adaa28  ld1 {v1.S}[1],[x8]
7102adaa2c  add x8,x0,#0x110
7102adaa30  mov x0,x20
7102adaa34  ld1 {v0.S}[0],[x8]
7102adaa38  mov v1.D[0x1],v0.D[0x0]
7102adaa3c  orr w1,wzr,#0x3
7102adaa40  str q1,[sp, #0x30]
7102adaa44  bl 0x7102691880
7102adaa48  ldr q0,[sp, #0x30]
7102adaa4c  str q0,[x0]
7102adaa50  mov w0,#0x10
7102adaa54  mov w1,#0x8
7102adaa58  bl 0x710392e290
7102adaa5c  mov x20,x0
7102adaa60  cbnz x0,0x7102adaaac
7102adaa64  adrp x8,0x7105332000
7102adaa68  ldr x0,[x8, #0xf00]
7102adaa6c  cbz x0,0x7102adaaa8
7102adaa70  mov w8,#0x8
7102adaa74  stur wzr,[x29, #-0x54]
7102adaa78  sub x1,x29,#0x54
7102adaa7c  str x8,[sp, #0x40]
7102adaa80  ldr x8,[x0]
7102adaa84  ldr x8,[x8, #0x30]
7102adaa88  add x2,sp,#0x40
7102adaa8c  blr x8
7102adaa90  tbz w0,#0x0,0x7102adaaa8
7102adaa94  mov w0,#0x10
7102adaa98  mov w1,#0x8
7102adaa9c  bl 0x710392e290
7102adaaa0  mov x20,x0
7102adaaa4  cbnz x0,0x7102adaaac
7102adaaa8  mov x20,xzr
7102adaaac  mov x0,x20
7102adaab0  mov x1,x28
7102adaab4  bl 0x7102ae18c0
7102adaab8  mov w0,#0x10
7102adaabc  mov w1,#0x20
7102adaac0  bl 0x710392e290
7102adaac4  cbnz x0,0x7102adab0c
7102adaac8  adrp x8,0x7105332000
7102adaacc  ldr x0,[x8, #0xf00]
7102adaad0  cbz x0,0x7102adab08
7102adaad4  mov w8,#0x20
7102adaad8  stur wzr,[x29, #-0x54]
7102adaadc  sub x1,x29,#0x54
7102adaae0  str x8,[sp, #0x40]
7102adaae4  ldr x8,[x0]
7102adaae8  ldr x8,[x8, #0x30]
7102adaaec  add x2,sp,#0x40
7102adaaf0  blr x8
7102adaaf4  tbz w0,#0x0,0x7102adab08
7102adaaf8  mov w0,#0x10
7102adaafc  mov w1,#0x20
7102adab00  bl 0x710392e290
7102adab04  cbnz x0,0x7102adab0c
7102adab08  mov x0,xzr
7102adab0c  adrp x8,0x710510f000
7102adab10  add x8,x8,#0x5d0
7102adab14  stp x8,xzr,[x0]
7102adab18  stp xzr,x20,[x0, #0x10]
7102adab1c  str x20,[x28, #0x850]
7102adab20  ldr x20,[x28, #0x858]
7102adab24  str x0,[x28, #0x858]
7102adab28  cbz x20,0x7102adab5c
7102adab2c  add x8,x20,#0x8
7102adab30  ldaxr x9,[x8]
7102adab34  sub x10,x9,#0x1
7102adab38  stlxr w11,x10,[x8]
7102adab3c  cbnz w11,0x7102adab30
7102adab40  cbnz x9,0x7102adab5c
7102adab44  ldr x8,[x20]
7102adab48  ldr x8,[x8, #0x10]
7102adab4c  mov x0,x20
7102adab50  blr x8
7102adab54  mov x0,x20
7102adab58  bl 0x71039c2670
7102adab5c  ldr x21,[x28, #0x850]
7102adab60  mov w1,#0x130
7102adab64  mov w0,#0x10
7102adab68  bl 0x710392e290
7102adab6c  mov x20,x0
7102adab70  cbnz x0,0x7102adabbc
7102adab74  adrp x8,0x7105332000
7102adab78  ldr x0,[x8, #0xf00]
7102adab7c  cbz x0,0x7102adabb8
7102adab80  mov w8,#0x130
7102adab84  stur wzr,[x29, #-0x54]
7102adab88  sub x1,x29,#0x54
7102adab8c  str x8,[sp, #0x40]
7102adab90  ldr x8,[x0]
7102adab94  ldr x8,[x8, #0x30]
7102adab98  add x2,sp,#0x40
7102adab9c  blr x8
7102adaba0  tbz w0,#0x0,0x7102adabb8
7102adaba4  mov w1,#0x130
7102adaba8  mov w0,#0x10
7102adabac  bl 0x710392e290
7102adabb0  mov x20,x0
7102adabb4  cbnz x0,0x7102adabbc
7102adabb8  mov x20,xzr
7102adabbc  adrp x3,0x7104431000
7102adabc0  add x3,x3,#0x1b4
7102adabc4  mov x0,x20
7102adabc8  mov x1,x28
7102adabcc  mov x2,x21
7102adabd0  mov w4,wzr
7102adabd4  bl 0x7102addb00
7102adabd8  str x20,[x28, #0x7c0]
7102adabdc  strb wzr,[x20, #0x104]
7102adabe0  ldr x8,[x28, #0x828]
7102adabe4  ldr x8,[x8]
7102adabe8  movi v0.2D,#0x0
7102adabec  cbz x8,0x7102adac74
7102adabf0  ldr x9,[x8, #0x10]
7102adabf4  cbz x9,0x7102adac74
7102adabf8  ldr x8,[x8, #0x8]
7102adabfc  ldr x8,[x8]
7102adac00  cbz x8,0x7102adac74
7102adac04  ldr x8,[x8]
7102adac08  cbz x8,0x7102adac74
7102adac0c  sub x10,x9,#0x1
7102adac10  and x11,x10,x9
7102adac14  cbz x11,0x7102adac4c
7102adac18  ldr x10,[x8, #0x8]
7102adac1c  cbz x10,0x7102adac38
7102adac20  cmp x10,x9
7102adac24  b.cc 0x7102adac74
7102adac28  udiv x11,x10,x9
7102adac2c  msub x10,x11,x9,x10
7102adac30  cbz x10,0x7102adac40
7102adac34  b 0x7102adac74
7102adac38  ldr w10,[x8, #0x10]
7102adac3c  cbz w10,0x7102adac70
7102adac40  ldr x8,[x8]
7102adac44  cbnz x8,0x7102adac18
7102adac48  b 0x7102adac74
7102adac4c  ldr x9,[x8, #0x8]
7102adac50  tst x9,x10
7102adac54  b.ne 0x7102adac74
7102adac58  cbnz x9,0x7102adac64
7102adac5c  ldr w9,[x8, #0x10]
7102adac60  cbz w9,0x7102adac70
7102adac64  ldr x8,[x8]
7102adac68  cbnz x8,0x7102adac4c
7102adac6c  b 0x7102adac74
7102adac70  ldr q0,[x8, #0x20]
7102adac74  fmov s2,wzr
7102adac78  ext v1.16B,v0.16B,v0.16B,0x8
7102adac7c  mov w19,#0x1
7102adac80  mov v1.S[0x1],v2.S[0x0]
7102adac84  strb w19,[x20, #0x60]
7102adac88  mov v0.D[0x1],v1.D[0x0]
7102adac8c  str q0,[x20, #0x110]
7102adac90  ldr x0,[x28, #0x7c0]
7102adac94  bl 0x710313ef20
7102adac98  ldr x21,[x28, #0x850]
7102adac9c  mov w1,#0x130
7102adaca0  mov w0,#0x10
7102adaca4  bl 0x710392e290
7102adaca8  mov x20,x0
7102adacac  cbnz x0,0x7102adacf8
7102adacb0  adrp x8,0x7105332000
7102adacb4  ldr x0,[x8, #0xf00]
7102adacb8  cbz x0,0x7102adacf4
7102adacbc  mov w8,#0x130
7102adacc0  stur wzr,[x29, #-0x54]
7102adacc4  sub x1,x29,#0x54
7102adacc8  str x8,[sp, #0x40]
7102adaccc  ldr x8,[x0]
7102adacd0  ldr x8,[x8, #0x30]
7102adacd4  add x2,sp,#0x40
7102adacd8  blr x8
7102adacdc  tbz w0,#0x0,0x7102adacf4
7102adace0  mov w1,#0x130
7102adace4  mov w0,#0x10
7102adace8  bl 0x710392e290
7102adacec  mov x20,x0
7102adacf0  cbnz x0,0x7102adacf8
7102adacf4  mov x20,xzr
7102adacf8  adrp x3,0x710438a000
7102adacfc  add x3,x3,#0xd39
7102adad00  mov x0,x20
7102adad04  mov x1,x28
7102adad08  mov x2,x21
7102adad0c  mov w4,wzr
7102adad10  bl 0x7102addb00
7102adad14  str x20,[x28, #0x7c8]
7102adad18  strb w19,[x20, #0x104]
7102adad1c  ldr x8,[x28, #0x828]
7102adad20  ldr x8,[x8]
7102adad24  movi v0.2D,#0x0
7102adad28  cbz x8,0x7102adade4
7102adad2c  ldr x10,[x8, #0x10]
7102adad30  cbz x10,0x7102adade4
7102adad34  subs x11,x10,#0x1
7102adad38  ldr x8,[x8, #0x8]
7102adad3c  mov w9,#0x1
7102adad40  cset w12,ne
7102adad44  cmp x10,#0x1
7102adad48  csel x9,x9,x12,hi
7102adad4c  and x13,x11,#0x1
7102adad50  ands x12,x11,x10
7102adad54  csel x9,x9,x13,ne
7102adad58  ldr x8,[x8, x9, LSL #0x3]
7102adad5c  cbz x8,0x7102adade4
7102adad60  ldr x8,[x8]
7102adad64  cbz x8,0x7102adade4
7102adad68  cbz x12,0x7102adadac
7102adad6c  ldr x11,[x8, #0x8]
7102adad70  cmp x11,#0x1
7102adad74  b.ne 0x7102adad88
7102adad78  ldr w11,[x8, #0x10]
7102adad7c  cmp w11,#0x1
7102adad80  b.ne 0x7102adada0
7102adad84  b 0x7102adade0
7102adad88  cmp x11,x10
7102adad8c  b.cc 0x7102adad98
7102adad90  udiv x12,x11,x10
7102adad94  msub x11,x12,x10,x11
7102adad98  cmp x11,x9
7102adad9c  b.ne 0x7102adade4
7102adada0  ldr x8,[x8]
7102adada4  cbnz x8,0x7102adad6c
7102adada8  b 0x7102adade4
7102adadac  ldr x10,[x8, #0x8]
7102adadb0  and x12,x10,x11
7102adadb4  cmp x10,#0x1
7102adadb8  ccmp x12,x9,#0x4,ne
7102adadbc  b.ne 0x7102adade4
7102adadc0  cmp x10,#0x1
7102adadc4  b.ne 0x7102adadd4
7102adadc8  ldr w10,[x8, #0x10]
7102adadcc  cmp w10,#0x1
7102adadd0  b.eq 0x7102adade0
7102adadd4  ldr x8,[x8]
7102adadd8  cbnz x8,0x7102adadac
7102adaddc  b 0x7102adade4
7102adade0  ldr q0,[x8, #0x20]
7102adade4  ext v1.16B,v0.16B,v0.16B,0x8
7102adade8  fmov s2,wzr
7102adadec  mov w8,#0x1
7102adadf0  mov v1.S[0x1],v2.S[0x0]
7102adadf4  strb w8,[x20, #0x60]
7102adadf8  mov v0.D[0x1],v1.D[0x0]
7102adadfc  str q0,[x20, #0x110]
7102adae00  ldr x0,[x28, #0x7c8]
7102adae04  bl 0x710313ef20
7102adae08  ldr x21,[x28, #0x850]
7102adae0c  mov w1,#0x130
7102adae10  mov w0,#0x10
7102adae14  bl 0x710392e290
7102adae18  mov x20,x0
7102adae1c  cbnz x0,0x7102adae68
7102adae20  adrp x8,0x7105332000
7102adae24  ldr x0,[x8, #0xf00]
7102adae28  cbz x0,0x7102adae64
7102adae2c  mov w8,#0x130
7102adae30  stur wzr,[x29, #-0x54]
7102adae34  sub x1,x29,#0x54
7102adae38  str x8,[sp, #0x40]
7102adae3c  ldr x8,[x0]
7102adae40  ldr x8,[x8, #0x30]
7102adae44  add x2,sp,#0x40
7102adae48  blr x8
7102adae4c  tbz w0,#0x0,0x7102adae64
7102adae50  mov w1,#0x130
7102adae54  mov w0,#0x10
7102adae58  bl 0x710392e290
7102adae5c  mov x20,x0
7102adae60  cbnz x0,0x7102adae68
7102adae64  mov x20,xzr
7102adae68  adrp x3,0x7104317000
7102adae6c  add x3,x3,#0xc3
7102adae70  mov x0,x20
7102adae74  mov x1,x28
7102adae78  mov x2,x21
7102adae7c  mov w4,wzr
7102adae80  bl 0x7102addb00
7102adae84  mov w8,#0x2
7102adae88  str x20,[x28, #0x7d0]
7102adae8c  strb w8,[x20, #0x104]
7102adae90  ldr x8,[x28, #0x828]
7102adae94  ldr x10,[x8]
7102adae98  movi v0.2D,#0x0
7102adae9c  cbz x10,0x7102adaf60
7102adaea0  ldr x9,[x10, #0x10]
7102adaea4  cbz x9,0x7102adaf60
7102adaea8  sub x11,x9,#0x1
7102adaeac  ands x12,x11,x9
7102adaeb0  b.eq 0x7102adaecc
7102adaeb4  mov w8,#0x2
7102adaeb8  cmp x9,#0x2
7102adaebc  b.hi 0x7102adaed0
7102adaec0  udiv x13,x8,x9
7102adaec4  msub x8,x13,x9,x8
7102adaec8  b 0x7102adaed0
7102adaecc  and x8,x11,#0x2
7102adaed0  ldr x10,[x10, #0x8]
7102adaed4  ldr x10,[x10, x8, LSL #0x3]
7102adaed8  cbz x10,0x7102adaf60
7102adaedc  ldr x10,[x10]
7102adaee0  cbz x10,0x7102adaf60
7102adaee4  cbz x12,0x7102adaf28
7102adaee8  ldr x11,[x10, #0x8]
7102adaeec  cmp x11,#0x2
7102adaef0  b.ne 0x7102adaf04
7102adaef4  ldr w11,[x10, #0x10]
7102adaef8  cmp w11,#0x2
7102adaefc  b.ne 0x7102adaf1c
7102adaf00  b 0x7102adaf5c
7102adaf04  cmp x11,x9
7102adaf08  b.cc 0x7102adaf14
7102adaf0c  udiv x12,x11,x9
7102adaf10  msub x11,x12,x9,x11
7102adaf14  cmp x11,x8
7102adaf18  b.ne 0x7102adaf60
7102adaf1c  ldr x10,[x10]
7102adaf20  cbnz x10,0x7102adaee8
7102adaf24  b 0x7102adaf60
7102adaf28  ldr x9,[x10, #0x8]
7102adaf2c  and x12,x9,x11
7102adaf30  cmp x9,#0x2
7102adaf34  ccmp x12,x8,#0x4,ne
7102adaf38  b.ne 0x7102adaf60
7102adaf3c  cmp x9,#0x2
7102adaf40  b.ne 0x7102adaf50
7102adaf44  ldr w9,[x10, #0x10]
7102adaf48  cmp w9,#0x2
7102adaf4c  b.eq 0x7102adaf5c
7102adaf50  ldr x10,[x10]
7102adaf54  cbnz x10,0x7102adaf28
7102adaf58  b 0x7102adaf60
7102adaf5c  ldr q0,[x10, #0x20]
7102adaf60  ext v1.16B,v0.16B,v0.16B,0x8
7102adaf64  fmov s2,wzr
7102adaf68  mov w8,#0x1
7102adaf6c  mov v1.S[0x1],v2.S[0x0]
7102adaf70  strb w8,[x20, #0x60]
7102adaf74  mov v0.D[0x1],v1.D[0x0]
7102adaf78  str q0,[x20, #0x110]
7102adaf7c  ldr x0,[x28, #0x7d0]
7102adaf80  bl 0x710313ef20
7102adaf84  ldr x21,[x28, #0x850]
7102adaf88  mov w1,#0x130
7102adaf8c  mov w0,#0x10
7102adaf90  bl 0x710392e290
7102adaf94  mov x20,x0
7102adaf98  cbnz x0,0x7102adafe4
7102adaf9c  adrp x8,0x7105332000
7102adafa0  ldr x0,[x8, #0xf00]
7102adafa4  cbz x0,0x7102adafe0
7102adafa8  mov w8,#0x130
7102adafac  stur wzr,[x29, #-0x54]
7102adafb0  sub x1,x29,#0x54
7102adafb4  str x8,[sp, #0x40]
7102adafb8  ldr x8,[x0]
7102adafbc  ldr x8,[x8, #0x30]
7102adafc0  add x2,sp,#0x40
7102adafc4  blr x8
7102adafc8  tbz w0,#0x0,0x7102adafe0
7102adafcc  mov w1,#0x130
7102adafd0  mov w0,#0x10
7102adafd4  bl 0x710392e290
7102adafd8  mov x20,x0
7102adafdc  cbnz x0,0x7102adafe4
7102adafe0  mov x20,xzr
7102adafe4  adrp x3,0x71043ee000
7102adafe8  add x3,x3,#0xbd0
7102adafec  mov x0,x20
7102adaff0  mov x1,x28
7102adaff4  mov x2,x21
7102adaff8  mov w4,wzr
7102adaffc  bl 0x7102addb00
7102adb000  orr w8,wzr,#0x3
7102adb004  str x20,[x28, #0x7d8]
7102adb008  strb w8,[x20, #0x104]
7102adb00c  ldr x8,[x28, #0x828]
7102adb010  ldr x10,[x8]
7102adb014  movi v0.2D,#0x0
7102adb018  cbz x10,0x7102adb0dc
7102adb01c  ldr x9,[x10, #0x10]
7102adb020  cbz x9,0x7102adb0dc
7102adb024  sub x11,x9,#0x1
7102adb028  ands x12,x11,x9
7102adb02c  b.eq 0x7102adb048
7102adb030  orr w8,wzr,#0x3
7102adb034  cmp x9,#0x3
7102adb038  b.hi 0x7102adb04c
7102adb03c  udiv x13,x8,x9
7102adb040  msub x8,x13,x9,x8
7102adb044  b 0x7102adb04c
7102adb048  and x8,x11,#0x3
7102adb04c  ldr x10,[x10, #0x8]
7102adb050  ldr x10,[x10, x8, LSL #0x3]
7102adb054  cbz x10,0x7102adb0dc
7102adb058  ldr x10,[x10]
7102adb05c  cbz x10,0x7102adb0dc
7102adb060  cbz x12,0x7102adb0a4
7102adb064  ldr x11,[x10, #0x8]
7102adb068  cmp x11,#0x3
7102adb06c  b.ne 0x7102adb080
7102adb070  ldr w11,[x10, #0x10]
7102adb074  cmp w11,#0x3
7102adb078  b.ne 0x7102adb098
7102adb07c  b 0x7102adb0d8
7102adb080  cmp x11,x9
7102adb084  b.cc 0x7102adb090
7102adb088  udiv x12,x11,x9
7102adb08c  msub x11,x12,x9,x11
7102adb090  cmp x11,x8
7102adb094  b.ne 0x7102adb0dc
7102adb098  ldr x10,[x10]
7102adb09c  cbnz x10,0x7102adb064
7102adb0a0  b 0x7102adb0dc
7102adb0a4  ldr x9,[x10, #0x8]
7102adb0a8  and x12,x9,x11
7102adb0ac  cmp x9,#0x3
7102adb0b0  ccmp x12,x8,#0x4,ne
7102adb0b4  b.ne 0x7102adb0dc
7102adb0b8  cmp x9,#0x3
7102adb0bc  b.ne 0x7102adb0cc
7102adb0c0  ldr w9,[x10, #0x10]
7102adb0c4  cmp w9,#0x3
7102adb0c8  b.eq 0x7102adb0d8
7102adb0cc  ldr x10,[x10]
7102adb0d0  cbnz x10,0x7102adb0a4
7102adb0d4  b 0x7102adb0dc
7102adb0d8  ldr q0,[x10, #0x20]
7102adb0dc  ext v1.16B,v0.16B,v0.16B,0x8
7102adb0e0  fmov s2,wzr
7102adb0e4  mov w8,#0x1
7102adb0e8  mov v1.S[0x1],v2.S[0x0]
7102adb0ec  strb w8,[x20, #0x60]
7102adb0f0  mov v0.D[0x1],v1.D[0x0]
7102adb0f4  str q0,[x20, #0x110]
7102adb0f8  ldr x0,[x28, #0x7d8]
7102adb0fc  bl 0x710313ef20
7102adb100  ldr x9,[x28, #0x310]
7102adb104  ldp x8,x9,[x9, #0xd0]
7102adb108  cmp x8,x9
7102adb10c  b.eq 0x7102adb144
7102adb110  mov x11,#0x3e53
7102adb114  movk x11,#0x3f0a, LSL #16
7102adb118  movk x11,#0x15, LSL #32
7102adb11c  ldr w10,[x8, #0x8]
7102adb120  cmp w10,#0x1
7102adb124  b.hi 0x7102adb138
7102adb128  ldr x10,[x8]
7102adb12c  ldr x12,[x10, #0x68]
7102adb130  cmp x12,x11
7102adb134  b.eq 0x7102adbb00
7102adb138  add x8,x8,#0x10
7102adb13c  cmp x9,x8
7102adb140  b.ne 0x7102adb11c
7102adb144  str xzr,[x28, #0x7f0]
7102adb148  ldr x9,[x28, #0x310]
7102adb14c  ldp x8,x9,[x9, #0xd0]
7102adb150  cmp x8,x9
7102adb154  b.eq 0x7102adb18c
7102adb158  mov x11,#0xfb46
7102adb15c  movk x11,#0x4029, LSL #16
7102adb160  movk x11,#0x16, LSL #32
7102adb164  ldr w10,[x8, #0x8]
7102adb168  cmp w10,#0x1
7102adb16c  b.hi 0x7102adb180
7102adb170  ldr x10,[x8]
7102adb174  ldr x12,[x10, #0x68]
7102adb178  cmp x12,x11
7102adb17c  b.eq 0x7102adbb44
7102adb180  add x8,x8,#0x10
7102adb184  cmp x9,x8
7102adb188  b.ne 0x7102adb164
7102adb18c  str xzr,[x28, #0x7f8]
7102adb190  ldr x9,[x28, #0x310]
7102adb194  ldp x8,x9,[x9, #0xd0]
7102adb198  cmp x8,x9
7102adb19c  b.eq 0x7102adb1d4
7102adb1a0  mov x11,#0x13b4
7102adb1a4  movk x11,#0x961d, LSL #16
7102adb1a8  movk x11,#0x17, LSL #32
7102adb1ac  ldr w10,[x8, #0x8]
7102adb1b0  cmp w10,#0x1
7102adb1b4  b.hi 0x7102adb1c8
7102adb1b8  ldr x10,[x8]
7102adb1bc  ldr x12,[x10, #0x68]
7102adb1c0  cmp x12,x11
7102adb1c4  b.eq 0x7102adbb88
7102adb1c8  add x8,x8,#0x10
7102adb1cc  cmp x9,x8
7102adb1d0  b.ne 0x7102adb1ac
7102adb1d4  str xzr,[x28, #0x800]
7102adb1d8  ldr x9,[x28, #0x310]
7102adb1dc  ldp x8,x9,[x9, #0xd0]
7102adb1e0  cmp x8,x9
7102adb1e4  b.eq 0x7102adb21c
7102adb1e8  mov x11,#0xbcbc
7102adb1ec  movk x11,#0x4aa6, LSL #16
7102adb1f0  movk x11,#0x18, LSL #32
7102adb1f4  ldr w10,[x8, #0x8]
7102adb1f8  cmp w10,#0x1
7102adb1fc  b.hi 0x7102adb210
7102adb200  ldr x10,[x8]
7102adb204  ldr x12,[x10, #0x68]
7102adb208  cmp x12,x11
7102adb20c  b.eq 0x7102adbbcc
7102adb210  add x8,x8,#0x10
7102adb214  cmp x9,x8
7102adb218  b.ne 0x7102adb1f4
7102adb21c  str xzr,[x28, #0x808]
7102adb220  ldr x8,[x28, #0x828]
7102adb224  mov w0,#0x10
7102adb228  mov w1,#0x8
7102adb22c  str wzr,[x28, #0x810]
7102adb230  add x19,x28,#0x738
7102adb234  str x8,[sp, #0x20]
7102adb238  bl 0x710392e290
7102adb23c  cbnz x0,0x7102adb284
7102adb240  adrp x8,0x7105332000
7102adb244  ldr x0,[x8, #0xf00]
7102adb248  cbz x0,0x7102adb280
7102adb24c  mov w8,#0x8
7102adb250  stur wzr,[x29, #-0x54]
7102adb254  sub x1,x29,#0x54
7102adb258  str x8,[sp, #0x40]
7102adb25c  ldr x8,[x0]
7102adb260  ldr x8,[x8, #0x30]
7102adb264  add x2,sp,#0x40
7102adb268  blr x8
7102adb26c  tbz w0,#0x0,0x7102adb280
7102adb270  mov w0,#0x10
7102adb274  mov w1,#0x8
7102adb278  bl 0x710392e290
7102adb27c  cbnz x0,0x7102adb284
7102adb280  mov x0,xzr
7102adb284  str x0,[sp, #0x28]
7102adb288  mov w0,#0x10
7102adb28c  orr w1,wzr,#0x38
7102adb290  bl 0x710392e290
7102adb294  mov x22,x0
7102adb298  cbnz x0,0x7102adb2e4
7102adb29c  adrp x8,0x7105332000
7102adb2a0  ldr x0,[x8, #0xf00]
7102adb2a4  cbz x0,0x7102adb2e0
7102adb2a8  orr w8,wzr,#0x38
7102adb2ac  stur wzr,[x29, #-0x54]
7102adb2b0  sub x1,x29,#0x54
7102adb2b4  str x8,[sp, #0x40]
7102adb2b8  ldr x8,[x0]
7102adb2bc  ldr x8,[x8, #0x30]
7102adb2c0  add x2,sp,#0x40
7102adb2c4  blr x8
7102adb2c8  tbz w0,#0x0,0x7102adb2e0
7102adb2cc  mov w0,#0x10
7102adb2d0  orr w1,wzr,#0x38
7102adb2d4  bl 0x710392e290
7102adb2d8  mov x22,x0
7102adb2dc  cbnz x0,0x7102adb2e4
7102adb2e0  mov x22,xzr
7102adb2e4  add x8,sp,#0x40
7102adb2e8  orr x8,x8,#0x1
7102adb2ec  mov x24,xzr
7102adb2f0  adrp x0,0x710510f000
7102adb2f4  add x0,x0,#0x868
7102adb2f8  strh wzr,[x22, #0x30]
7102adb2fc  str x8,[sp, #0x18]
7102adb300  stp x28,x19,[x22]
7102adb304  str x19,[sp, #0x30]
7102adb308  adrp x3,0x710532d000
7102adb30c  adrp x2,0x710532d000
7102adb310  mov w1,#0xd0
7102adb314  adrp x21,0x710313f000
7102adb318  add x21,x21,#0x320
7102adb31c  mov w20,#0xffffffff
7102adb320  orr x19,xzr,#0x100000000
7102adb324  mov x25,x28
7102adb328  adrp x26,0x7104754000
7102adb32c  add x26,x26,#0x84
7102adb330  stp xzr,xzr,[x22, #0x20]
7102adb334  stp xzr,xzr,[x22, #0x10]
7102adb338  b 0x7102adb340
7102adb33c  ldr x25,[x22]
7102adb340  ldr x8,[x25, #0x300]
7102adb344  ldr x9,[x8, #0x18]
7102adb348  ldp x8,x9,[x9]
7102adb34c  cmp x8,x9
7102adb350  b.eq 0x7102adba80
7102adb354  ldr x10,[x0, x24, LSL #0x3]
7102adb358  ldrb w11,[x10], #0x1
7102adb35c  ldr x12,[x8]
7102adb360  cbz w11,0x7102adb3b0
7102adb364  mov x13,xzr
7102adb368  mov x14,x10
7102adb36c  mov w16,w11
7102adb370  mov w15,w20
7102adb374  and w16,w16,#0xff
7102adb378  sub w17,w16,#0x41
7102adb37c  add w18,w16,#0x20
7102adb380  cmp w17,#0x1a
7102adb384  csel w16,w18,w16,cc
7102adb388  eor w16,w16,w15
7102adb38c  and w16,w16,#0xff
7102adb390  ldr w16,[x26, w16, UXTW #0x2]
7102adb394  eor w15,w16,w15, LSR #0x8
7102adb398  ldrb w16,[x14], #0x1
7102adb39c  add x13,x13,x19
7102adb3a0  cbnz w16,0x7102adb374
7102adb3a4  mvn w14,w15
7102adb3a8  and x13,x13,#0xff00000000
7102adb3ac  b 0x7102adb3b8
7102adb3b0  mov x14,xzr
7102adb3b4  mov x13,xzr
7102adb3b8  orr x13,x13,x14
7102adb3bc  ldr x14,[x12, #0xa0]
7102adb3c0  and x14,x14,#0xffffffffff
7102adb3c4  cmp x14,x13
7102adb3c8  b.eq 0x7102adb3dc
7102adb3cc  add x8,x8,#0x8
7102adb3d0  cmp x8,x9
7102adb3d4  b.ne 0x7102adb35c
7102adb3d8  b 0x7102adba80
7102adb3dc  ldr x27,[x12, #0x120]
7102adb3e0  cbz x27,0x7102adba80
7102adb3e4  ldr x9,[x3, #0x7b0]
7102adb3e8  cbz x9,0x7102adba80
7102adb3ec  sub x10,x9,#0x1
7102adb3f0  ands x11,x10,x9
7102adb3f4  b.eq 0x7102adb410
7102adb3f8  cmp x9,x24
7102adb3fc  mov x8,x24
7102adb400  b.hi 0x7102adb414
7102adb404  udiv x8,x24,x9
7102adb408  msub x8,x8,x9,x24
7102adb40c  b 0x7102adb414
7102adb410  and x8,x10,x24
7102adb414  ldr x12,[x2, #0x7a8]
7102adb418  ldr x12,[x12, x8, LSL #0x3]
7102adb41c  cbz x12,0x7102adba80
7102adb420  ldr x23,[x12]
7102adb424  cbz x23,0x7102adba80
7102adb428  cbz x11,0x7102adb46c
7102adb42c  ldr x10,[x23, #0x8]
7102adb430  cmp x10,x24
7102adb434  b.ne 0x7102adb448
7102adb438  ldr w10,[x23, #0x10]
7102adb43c  cmp x24,x10
7102adb440  b.ne 0x7102adb460
7102adb444  b 0x7102adb4a0
7102adb448  cmp x10,x9
7102adb44c  b.cc 0x7102adb458
7102adb450  udiv x11,x10,x9
7102adb454  msub x10,x11,x9,x10
7102adb458  cmp x10,x8
7102adb45c  b.ne 0x7102adba80
7102adb460  ldr x23,[x23]
7102adb464  cbnz x23,0x7102adb42c
7102adb468  b 0x7102adba80
7102adb46c  ldr x9,[x23, #0x8]
7102adb470  and x11,x9,x10
7102adb474  cmp x9,x24
7102adb478  ccmp x11,x8,#0x4,ne
7102adb47c  b.ne 0x7102adba80
7102adb480  cmp x9,x24
7102adb484  b.ne 0x7102adb494
7102adb488  ldr w9,[x23, #0x10]
7102adb48c  cmp x24,x9
7102adb490  b.eq 0x7102adb4a0
7102adb494  ldr x23,[x23]
7102adb498  cbnz x23,0x7102adb46c
7102adb49c  b 0x7102adba80
7102adb4a0  mov w0,#0x10
7102adb4a4  str x28,[sp, #0x8]
7102adb4a8  bl 0x710392e290
7102adb4ac  mov x28,x0
7102adb4b0  cbnz x0,0x7102adb4fc
7102adb4b4  adrp x8,0x7105332000
7102adb4b8  ldr x0,[x8, #0xf00]
7102adb4bc  cbz x0,0x7102adb4f8
7102adb4c0  mov w8,#0xd0
7102adb4c4  stur wzr,[x29, #-0x54]
7102adb4c8  sub x1,x29,#0x54
7102adb4cc  str x8,[sp, #0x40]
7102adb4d0  ldr x8,[x0]
7102adb4d4  ldr x8,[x8, #0x30]
7102adb4d8  add x2,sp,#0x40
7102adb4dc  blr x8
7102adb4e0  tbz w0,#0x0,0x7102adb4f8
7102adb4e4  mov w0,#0x10
7102adb4e8  mov w1,#0xd0
7102adb4ec  bl 0x710392e290
7102adb4f0  mov x28,x0
7102adb4f4  cbnz x0,0x7102adb4fc
7102adb4f8  mov x28,xzr
7102adb4fc  mov w8,#0x1
7102adb500  ldr x23,[x23, #0x18]
7102adb504  str x8,[sp, #0x40]
7102adb508  mov x8,#0x100000001
7102adb50c  str x8,[sp, #0x48]
7102adb510  mov x8,#0x1
7102adb514  movk x8,#0x10, LSL #32
7102adb518  add x2,sp,#0x40
7102adb51c  mov x0,x28
7102adb520  mov x1,x25
7102adb524  str x8,[sp, #0x50]
7102adb528  bl 0x710313e6a0
7102adb52c  mov w8,#0x1
7102adb530  str w8,[x28, #0x44]
7102adb534  strb w8,[x28, #0x5c]
7102adb538  adrp x8,0x710510f000
7102adb53c  add x8,x8,#0x798
7102adb540  str x8,[x28]
7102adb544  orr w8,wzr,#0x3f800000
7102adb548  strh wzr,[x28, #0x48]
7102adb54c  mov x12,x23
7102adb550  stur xzr,[x28, #0x54]
7102adb554  mov x23,x28
7102adb558  stur xzr,[x28, #0x4c]
7102adb55c  strb wzr,[x28, #0x60]
7102adb560  str w8,[x28, #0x90]
7102adb564  adrp x8,0x71052a8000
7102adb568  strb wzr,[x28, #0x94]
7102adb56c  stp x25,xzr,[x28, #0x68]
7102adb570  stp xzr,xzr,[x28, #0x80]
7102adb574  stp xzr,xzr,[x28, #0x98]
7102adb578  ldr x8,[x8, #0xa88]
7102adb57c  ldr q0,[x8]
7102adb580  mov w8,#0x100
7102adb584  str wzr,[x28, #0xc0]
7102adb588  strh w8,[x28, #0xc4]
7102adb58c  strb wzr,[x28, #0xc6]
7102adb590  str q0,[x28, #0xb0]
7102adb594  cbz x12,0x7102adb620
7102adb598  ldrb w11,[x12]
7102adb59c  cbz w11,0x7102adb620
7102adb5a0  ldr x9,[x25, #0x310]
7102adb5a4  ldp x8,x9,[x9, #0xd0]
7102adb5a8  cmp x8,x9
7102adb5ac  b.eq 0x7102adb620
7102adb5b0  mov x10,xzr
7102adb5b4  add x12,x12,#0x1
7102adb5b8  mov w13,w20
7102adb5bc  and w11,w11,#0xff
7102adb5c0  sub w14,w11,#0x41
7102adb5c4  add w15,w11,#0x20
7102adb5c8  cmp w14,#0x1a
7102adb5cc  csel w11,w15,w11,cc
7102adb5d0  eor w11,w11,w13
7102adb5d4  and w11,w11,#0xff
7102adb5d8  ldr w11,[x26, w11, UXTW #0x2]
7102adb5dc  eor w13,w11,w13, LSR #0x8
7102adb5e0  ldrb w11,[x12], #0x1
7102adb5e4  add x10,x10,x19
7102adb5e8  cbnz w11,0x7102adb5bc
7102adb5ec  mvn w11,w13
7102adb5f0  and x10,x10,#0xff00000000
7102adb5f4  orr x11,x10,x11
7102adb5f8  ldr w10,[x8, #0x8]
7102adb5fc  cmp w10,#0x1
7102adb600  b.hi 0x7102adb614
7102adb604  ldr x10,[x8]
7102adb608  ldr x12,[x10, #0x68]
7102adb60c  cmp x11,x12
7102adb610  b.eq 0x7102adb944
7102adb614  add x8,x8,#0x10
7102adb618  cmp x9,x8
7102adb61c  b.ne 0x7102adb5f8
7102adb620  str xzr,[x23, #0x70]
7102adb624  ldr x0,[x23, #0x70]
7102adb628  fmov s0,wzr
7102adb62c  mov w1,#0x1
7102adb630  bl 0x710260fdd0
7102adb634  ldr x8,[x23, #0x70]
7102adb638  cbz x8,0x7102adb674
7102adb63c  ldrb w9,[x8, #0xe0]
7102adb640  cbz w9,0x7102adb654
7102adb644  ldr x9,[x8, #0xc8]
7102adb648  cbz x9,0x7102adb654
7102adb64c  mov w10,#0x101
7102adb650  strh w10,[x9, #0x30]
7102adb654  ldr x9,[x8, #0xd8]
7102adb658  cbz x9,0x7102adb664
7102adb65c  mov w10,#0x1
7102adb660  strb w10,[x9, #0x21]
7102adb664  ldrb w9,[x8, #0xe0]
7102adb668  cbz w9,0x7102adb674
7102adb66c  ldr x8,[x8, #0xb0]
7102adb670  strb wzr,[x8, #0x10]
7102adb674  ldr x8,[x23, #0x38]
7102adb678  cbz x8,0x7102adb69c
7102adb67c  ldr x0,[x8, #0x130]
7102adb680  ldr x8,[x0]
7102adb684  ldr x8,[x8, #0x60]
7102adb688  mov w1,wzr
7102adb68c  mov x2,x27
7102adb690  mov w3,wzr
7102adb694  mov w4,wzr
7102adb698  blr x8
7102adb69c  ldr x8,[x23, #0x70]
7102adb6a0  strb wzr,[x23, #0xc6]
7102adb6a4  str x22,[sp, #0x10]
7102adb6a8  cbz x8,0x7102adb6cc
7102adb6ac  ldrb w9,[x8, #0xe0]
7102adb6b0  cbz w9,0x7102adb6cc
7102adb6b4  ldr x0,[x8, #0x90]
7102adb6b8  ldr x8,[x0]
7102adb6bc  ldr x8,[x8, #0x220]
7102adb6c0  blr x8
7102adb6c4  mov w22,w0
7102adb6c8  b 0x7102adb6d0
7102adb6cc  mov w22,wzr
7102adb6d0  adrp x8,0x7104359000
7102adb6d4  add x8,x8,#0x559
7102adb6d8  mov w9,#0x16
7102adb6dc  stp xzr,xzr,[sp, #0x40]
7102adb6e0  ldr x8,[x8]
7102adb6e4  strb w9,[sp, #0x40]
7102adb6e8  ldr x9,[sp, #0x18]
7102adb6ec  str xzr,[sp, #0x50]
7102adb6f0  str x8,[x9]
7102adb6f4  mov w8,#0x74
7102adb6f8  strb w8,[x9, #0xa]
7102adb6fc  mov w8,#0x7372
7102adb700  strh w8,[x9, #0x8]
7102adb704  strb wzr,[sp, #0x4c]
7102adb708  cbz w22,0x7102adb7b0
7102adb70c  mov w28,wzr
7102adb710  mov x27,x23
7102adb714  ldr x23,[x23, #0x70]
7102adb718  cbz x23,0x7102adb75c
7102adb71c  ldrb w8,[x23, #0xe0]
7102adb720  cbz w8,0x7102adb758
7102adb724  ldr x0,[x23, #0x90]
7102adb728  ldr x8,[x0]
7102adb72c  ldr x8,[x8, #0x220]
7102adb730  blr x8
7102adb734  cmp w0,w28
7102adb738  b.ls 0x7102adb758
7102adb73c  ldr x0,[x23, #0x90]
7102adb740  ldr x8,[x0]
7102adb744  ldr x8,[x8, #0x228]
7102adb748  mov w1,w28
7102adb74c  blr x8
7102adb750  mov x23,x0
7102adb754  b 0x7102adb75c
7102adb758  mov x23,xzr
7102adb75c  mov x0,x23
7102adb760  bl 0x71039c0070
7102adb764  ldrb w8,[sp, #0x40]
7102adb768  ldr x9,[sp, #0x48]
7102adb76c  lsr x10,x8,#0x1
7102adb770  tst w8,#0x1
7102adb774  csel x8,x10,x9,eq
7102adb778  cmp x0,x8
7102adb77c  b.ne 0x7102adb79c
7102adb780  mov x4,x0
7102adb784  add x0,sp,#0x40
7102adb788  mov x1,xzr
7102adb78c  mov x2,#-0x1
7102adb790  mov x3,x23
7102adb794  bl 0x71039c28d0
7102adb798  cbz w0,0x7102adb7c8
7102adb79c  add w28,w28,#0x1
7102adb7a0  cmp w28,w22
7102adb7a4  mov x23,x27
7102adb7a8  mov w8,w22
7102adb7ac  b.cc 0x7102adb710
7102adb7b0  ldrb w8,[sp, #0x40]
7102adb7b4  tbz w8,#0x0,0x7102adb7dc
7102adb7b8  ldr x0,[sp, #0x50]
7102adb7bc  cbz x0,0x7102adb7dc
7102adb7c0  bl 0x710392eb40
7102adb7c4  b 0x7102adb7dc
7102adb7c8  mov w8,#0x1
7102adb7cc  mov x23,x27
7102adb7d0  strb w8,[x27, #0xc6]
7102adb7d4  ldrb w8,[sp, #0x40]
7102adb7d8  tbnz w8,#0x0,0x7102adb7b8
7102adb7dc  ldrb w8,[x25, #0x18]
7102adb7e0  strb w8,[x23, #0xc5]
7102adb7e4  ldr x8,[x23, #0x38]
7102adb7e8  ldr x0,[x8, #0x130]
7102adb7ec  ldr x8,[x0]
7102adb7f0  ldr x8,[x8, #0x1a0]
7102adb7f4  blr x8
7102adb7f8  ldr x9,[x0, #0x30]
7102adb7fc  ldp x28,x22,[sp, #0x8]
7102adb800  movi v1.2D,#0x0
7102adb804  mov w15,#0x28
7102adb808  mov w16,#0x2c
7102adb80c  cbz x9,0x7102adb85c
7102adb810  ldr x8,[x0, #0x38]
7102adb814  mov w10,#0x2d0
7102adb818  madd x9,x9,x10,x8
7102adb81c  ldr w11,[x8, #0xc]
7102adb820  cmp w11,#0x1
7102adb824  b.lt 0x7102adb850
7102adb828  ldrsw x10,[x8, #0x8]
7102adb82c  add w11,w11,w10
7102adb830  sxtw x11,w11
7102adb834  add x12,x8,x10, LSL #0x3
7102adb838  ldr x12,[x12, #0x30]
7102adb83c  cbz x12,0x7102adb844
7102adb840  str x21,[x12, #0x30]
7102adb844  add x10,x10,#0x1
7102adb848  cmp x10,x11
7102adb84c  b.lt 0x7102adb834
7102adb850  add x8,x8,#0x2d0
7102adb854  cmp x8,x9
7102adb858  b.ne 0x7102adb81c
7102adb85c  ldr x9,[sp, #0x20]
7102adb860  add x8,x22,x24, LSL #0x3
7102adb864  mov v0.16B,v1.16B
7102adb868  str x23,[x8, #0x10]!
7102adb86c  ldr x12,[x9]
7102adb870  cbz x12,0x7102adb974
7102adb874  ldr x11,[x12, #0x10]
7102adb878  mov v0.16B,v1.16B
7102adb87c  cbz x11,0x7102adb974
7102adb880  sub x13,x11,#0x1
7102adb884  sxtw x9,w24
7102adb888  ands x14,x13,x11
7102adb88c  b.eq 0x7102adb8a8
7102adb890  cmp x11,x9
7102adb894  mov x10,x9
7102adb898  b.hi 0x7102adb8ac
7102adb89c  udiv x10,x9,x11
7102adb8a0  msub x10,x10,x11,x9
7102adb8a4  b 0x7102adb8ac
7102adb8a8  and x10,x13,x9
7102adb8ac  ldr x12,[x12, #0x8]
7102adb8b0  ldr x12,[x12, x10, LSL #0x3]
7102adb8b4  mov v0.16B,v1.16B
7102adb8b8  cbz x12,0x7102adb974
7102adb8bc  ldr x12,[x12]
7102adb8c0  mov v0.16B,v1.16B
7102adb8c4  cbz x12,0x7102adb974
7102adb8c8  cbz x14,0x7102adb90c
7102adb8cc  ldr x13,[x12, #0x8]
7102adb8d0  cmp x13,x9
7102adb8d4  b.ne 0x7102adb8e8
7102adb8d8  ldr w13,[x12, #0x10]
7102adb8dc  cmp w13,w24
7102adb8e0  b.ne 0x7102adb900
7102adb8e4  b 0x7102adb970
7102adb8e8  cmp x13,x11
7102adb8ec  b.cc 0x7102adb8f8
7102adb8f0  udiv x14,x13,x11
7102adb8f4  msub x13,x14,x11,x13
7102adb8f8  cmp x13,x10
7102adb8fc  b.ne 0x7102adb93c
7102adb900  ldr x12,[x12]
7102adb904  cbnz x12,0x7102adb8cc
7102adb908  b 0x7102adb93c
7102adb90c  ldr x11,[x12, #0x8]
7102adb910  and x14,x11,x13
7102adb914  cmp x11,x9
7102adb918  ccmp x14,x10,#0x4,ne
7102adb91c  b.ne 0x7102adb93c
7102adb920  cmp x11,x9
7102adb924  b.ne 0x7102adb934
7102adb928  ldr w11,[x12, #0x10]
7102adb92c  cmp w11,w24
7102adb930  b.eq 0x7102adb970
7102adb934  ldr x12,[x12]
7102adb938  cbnz x12,0x7102adb90c
7102adb93c  mov v0.16B,v1.16B
7102adb940  b 0x7102adb974
7102adb944  str x10,[x23, #0x70]
7102adb948  cbz x10,0x7102adb624
7102adb94c  ldrb w8,[x10, #0xe0]
7102adb950  cbz w8,0x7102adb960
7102adb954  ldr x8,[x10, #0xc8]
7102adb958  cbz x8,0x7102adb960
7102adb95c  strh wzr,[x8, #0x32]
7102adb960  ldr x8,[x10, #0xd8]
7102adb964  cbz x8,0x7102adb624
7102adb968  strb wzr,[x8, #0x22]
7102adb96c  b 0x7102adb624
7102adb970  ldr q0,[x12, #0x20]
7102adb974  ext v1.16B,v0.16B,v0.16B,0x8
7102adb978  fmov s2,wzr
7102adb97c  cmp x24,#0x2
7102adb980  mov v1.S[0x1],v2.S[0x0]
7102adb984  csel x10,x16,x15,cc
7102adb988  mov v0.D[0x1],v1.D[0x0]
7102adb98c  str q0,[x23, #0x80]
7102adb990  ldr x9,[x22, #0x8]
7102adb994  ldr s0,[x9,x10]
7102adb998  cset w9,cc
7102adb99c  scvtf s0,s0
7102adb9a0  str s0,[x23, #0xa0]
7102adb9a4  str s0,[x23, #0x9c]
7102adb9a8  ldr x10,[x22]
7102adb9ac  ldrb w10,[x10, #0x18]
7102adb9b0  cmp w10,#0x0
7102adb9b4  cset w10,ne
7102adb9b8  and w9,w9,w10
7102adb9bc  ldr x10,[x8]
7102adb9c0  cmp w9,#0x1
7102adb9c4  strb w9,[x10, #0x60]
7102adb9c8  ldr x25,[x8]
7102adb9cc  b.ne 0x7102adb9fc
7102adb9d0  mov x0,x25
7102adb9d4  bl 0x710313ef20
7102adb9d8  ldr x25,[x22]
7102adb9dc  adrp x1,0x710532d000
7102adb9e0  add x24,x24,#0x1
7102adb9e4  adrp x0,0x710510f000
7102adb9e8  add x0,x0,#0x868
7102adb9ec  mov x3,x1
7102adb9f0  adrp x2,0x710532d000
7102adb9f4  mov w1,#0xd0
7102adb9f8  b 0x7102adb340
7102adb9fc  ldrb w8,[x25, #0x40]
7102adba00  adrp x1,0x710532d000
7102adba04  adrp x0,0x710510f000
7102adba08  add x0,x0,#0x868
7102adba0c  mov x3,x1
7102adba10  adrp x2,0x710532d000
7102adba14  cbz w8,0x7102adba78
7102adba18  ldr x23,[x25, #0x30]
7102adba1c  mov x27,x0
7102adba20  cbz x23,0x7102adba58
7102adba24  ldrb w8,[x23, #0x10]
7102adba28  cbz w8,0x7102adba58
7102adba2c  ldrb w8,[x23, #0x50]
7102adba30  strb wzr,[x23, #0x10]
7102adba34  cbz w8,0x7102adba58
7102adba38  ldr x8,[x23]
7102adba3c  ldr w0,[x8, #0x8]
7102adba40  bl 0x71003ac560
7102adba44  ldr x8,[x0]
7102adba48  ldr x8,[x8, #0x48]
7102adba4c  mov w1,wzr
7102adba50  blr x8
7102adba54  strb wzr,[x23, #0x50]
7102adba58  ldr x8,[x25]
7102adba5c  ldr x8,[x8, #0x30]
7102adba60  mov x0,x25
7102adba64  blr x8
7102adba68  adrp x1,0x710532d000
7102adba6c  mov x0,x27
7102adba70  adrp x2,0x710532d000
7102adba74  mov x3,x1
7102adba78  mov w1,#0xd0
7102adba7c  strb wzr,[x25, #0x40]
7102adba80  add x24,x24,#0x1
7102adba84  cmp x24,#0x4
7102adba88  b.ne 0x7102adb33c
7102adba8c  ldp x8,x20,[sp, #0x28]
7102adba90  str x22,[x8]
7102adba94  ldr x22,[x28, #0x820]
7102adba98  str x8,[x28, #0x820]
7102adba9c  cbz x22,0x7102adbab8
7102adbaa0  ldr x0,[x22]
7102adbaa4  str xzr,[x22]
7102adbaa8  cbz x0,0x7102adbab0
7102adbaac  bl 0x710392eb40
7102adbab0  mov x0,x22
7102adbab4  bl 0x710392eb40
7102adbab8  ldr x9,[x28, #0x310]
7102adbabc  ldp x8,x9,[x9, #0xd0]
7102adbac0  cmp x8,x9
7102adbac4  b.eq 0x7102adbc2c
7102adbac8  mov x10,#0x9478
7102adbacc  movk x10,#0x5dc6, LSL #16
7102adbad0  movk x10,#0xe, LSL #32
7102adbad4  ldr w11,[x8, #0x8]
7102adbad8  cmp w11,#0x1
7102adbadc  b.hi 0x7102adbaf0
7102adbae0  ldr x19,[x8]
7102adbae4  ldr x11,[x19, #0x68]
7102adbae8  cmp x11,x10
7102adbaec  b.eq 0x7102adbc10
7102adbaf0  add x8,x8,#0x10
7102adbaf4  cmp x9,x8
7102adbaf8  b.ne 0x7102adbad4
7102adbafc  b 0x7102adbc2c
7102adbb00  str x10,[x28, #0x7f0]
7102adbb04  cbz x10,0x7102adb148
7102adbb08  ldrb w8,[x10, #0xe0]
7102adbb0c  cbz w8,0x7102adbb1c
7102adbb10  ldr x8,[x10, #0xc8]
7102adbb14  cbz x8,0x7102adbb1c
7102adbb18  strh wzr,[x8, #0x32]
7102adbb1c  ldr x8,[x10, #0xd8]
7102adbb20  cbz x8,0x7102adbb28
7102adbb24  strb wzr,[x8, #0x22]
7102adbb28  ldr x8,[x28, #0x7f0]
7102adbb2c  cbz x8,0x7102adbee4
7102adbb30  add x0,x8,#0x108
7102adbb34  strb wzr,[x8, #0x110]
7102adbb38  bl 0x71025e9d50
7102adbb3c  ldr x0,[x28, #0x7f0]
7102adbb40  b 0x7102adbee8
7102adbb44  str x10,[x28, #0x7f8]
7102adbb48  cbz x10,0x7102adb190
7102adbb4c  ldrb w8,[x10, #0xe0]
7102adbb50  cbz w8,0x7102adbb60
7102adbb54  ldr x8,[x10, #0xc8]
7102adbb58  cbz x8,0x7102adbb60
7102adbb5c  strh wzr,[x8, #0x32]
7102adbb60  ldr x8,[x10, #0xd8]
7102adbb64  cbz x8,0x7102adbb6c
7102adbb68  strb wzr,[x8, #0x22]
7102adbb6c  ldr x8,[x28, #0x7f8]
7102adbb70  cbz x8,0x7102adbf38
7102adbb74  add x0,x8,#0x108
7102adbb78  strb wzr,[x8, #0x110]
7102adbb7c  bl 0x71025e9d50
7102adbb80  ldr x0,[x28, #0x7f8]
7102adbb84  b 0x7102adbf3c
7102adbb88  str x10,[x28, #0x800]
7102adbb8c  cbz x10,0x7102adb1d8
7102adbb90  ldrb w8,[x10, #0xe0]
7102adbb94  cbz w8,0x7102adbba4
7102adbb98  ldr x8,[x10, #0xc8]
7102adbb9c  cbz x8,0x7102adbba4
7102adbba0  strh wzr,[x8, #0x32]
7102adbba4  ldr x8,[x10, #0xd8]
7102adbba8  cbz x8,0x7102adbbb0
7102adbbac  strb wzr,[x8, #0x22]
7102adbbb0  ldr x8,[x28, #0x800]
7102adbbb4  cbz x8,0x7102adbf8c
7102adbbb8  add x0,x8,#0x108
7102adbbbc  strb wzr,[x8, #0x110]
7102adbbc0  bl 0x71025e9d50
7102adbbc4  ldr x0,[x28, #0x800]
7102adbbc8  b 0x7102adbf90
7102adbbcc  str x10,[x28, #0x808]
7102adbbd0  cbz x10,0x7102adb220
7102adbbd4  ldrb w8,[x10, #0xe0]
7102adbbd8  cbz w8,0x7102adbbe8
7102adbbdc  ldr x8,[x10, #0xc8]
7102adbbe0  cbz x8,0x7102adbbe8
7102adbbe4  strh wzr,[x8, #0x32]
7102adbbe8  ldr x8,[x10, #0xd8]
7102adbbec  cbz x8,0x7102adbbf4
7102adbbf0  strb wzr,[x8, #0x22]
7102adbbf4  ldr x8,[x28, #0x808]
7102adbbf8  cbz x8,0x7102adbfe0
7102adbbfc  add x0,x8,#0x108
7102adbc00  strb wzr,[x8, #0x110]
7102adbc04  bl 0x71025e9d50
7102adbc08  ldr x0,[x28, #0x808]
7102adbc0c  b 0x7102adbfe4
7102adbc10  cbz x19,0x7102adbc2c
7102adbc14  add x0,x19,#0x108
7102adbc18  strb wzr,[x19, #0x110]
7102adbc1c  bl 0x71025e9d50
7102adbc20  ldrb w8,[x19, #0x118]
7102adbc24  orr w8,w8,#0x1
7102adbc28  strb w8,[x19, #0x118]
7102adbc2c  mov w1,#0x160
7102adbc30  mov w0,#0x10
7102adbc34  bl 0x710392e290
7102adbc38  mov x21,x0
7102adbc3c  cbnz x0,0x7102adbc88
7102adbc40  adrp x8,0x7105332000
7102adbc44  ldr x0,[x8, #0xf00]
7102adbc48  cbz x0,0x7102adbc84
7102adbc4c  mov w8,#0x160
7102adbc50  stur wzr,[x29, #-0x54]
7102adbc54  sub x1,x29,#0x54
7102adbc58  str x8,[sp, #0x40]
7102adbc5c  ldr x8,[x0]
7102adbc60  ldr x8,[x8, #0x30]
7102adbc64  add x2,sp,#0x40
7102adbc68  blr x8
7102adbc6c  tbz w0,#0x0,0x7102adbc84
7102adbc70  mov w1,#0x160
7102adbc74  mov w0,#0x10
7102adbc78  bl 0x710392e290
7102adbc7c  mov x21,x0
7102adbc80  cbnz x0,0x7102adbc88
7102adbc84  mov x21,xzr
7102adbc88  adrp x2,0x710428f000
7102adbc8c  add x2,x2,#0x88c
7102adbc90  mov x0,x21
7102adbc94  mov x1,x28
7102adbc98  mov w3,wzr
7102adbc9c  mov x4,x20
7102adbca0  bl 0x7102adef90
7102adbca4  ldrb w8,[x28, #0x18]
7102adbca8  str x21,[x28, #0x840]
7102adbcac  cbz w8,0x7102adbcbc
7102adbcb0  mov x0,x21
7102adbcb4  bl 0x710313ef20
7102adbcb8  b 0x7102adbd14
7102adbcbc  ldrb w8,[x21, #0x40]
7102adbcc0  cbz w8,0x7102adbd10
7102adbcc4  ldr x19,[x21, #0x30]
7102adbcc8  cbz x19,0x7102adbd00
7102adbccc  ldrb w8,[x19, #0x10]
7102adbcd0  cbz w8,0x7102adbd00
7102adbcd4  ldrb w8,[x19, #0x50]
7102adbcd8  strb wzr,[x19, #0x10]
7102adbcdc  cbz w8,0x7102adbd00
7102adbce0  ldr x8,[x19]
7102adbce4  ldr w0,[x8, #0x8]
7102adbce8  bl 0x71003ac560
7102adbcec  ldr x8,[x0]
7102adbcf0  ldr x8,[x8, #0x48]
7102adbcf4  mov w1,wzr
7102adbcf8  blr x8
7102adbcfc  strb wzr,[x19, #0x50]
7102adbd00  ldr x8,[x21]
7102adbd04  ldr x8,[x8, #0x30]
7102adbd08  mov x0,x21
7102adbd0c  blr x8
7102adbd10  strb wzr,[x21, #0x40]
7102adbd14  mov w1,#0x160
7102adbd18  mov w0,#0x10
7102adbd1c  bl 0x710392e290
7102adbd20  mov x21,x0
7102adbd24  cbnz x0,0x7102adbd70
7102adbd28  adrp x8,0x7105332000
7102adbd2c  ldr x0,[x8, #0xf00]
7102adbd30  cbz x0,0x7102adbd6c
7102adbd34  mov w8,#0x160
7102adbd38  stur wzr,[x29, #-0x54]
7102adbd3c  sub x1,x29,#0x54
7102adbd40  str x8,[sp, #0x40]
7102adbd44  ldr x8,[x0]
7102adbd48  ldr x8,[x8, #0x30]
7102adbd4c  add x2,sp,#0x40
7102adbd50  blr x8
7102adbd54  tbz w0,#0x0,0x7102adbd6c
7102adbd58  mov w1,#0x160
7102adbd5c  mov w0,#0x10
7102adbd60  bl 0x710392e290
7102adbd64  mov x21,x0
7102adbd68  cbnz x0,0x7102adbd70
7102adbd6c  mov x21,xzr
7102adbd70  adrp x2,0x71043bc000
7102adbd74  add x2,x2,#0x71f
7102adbd78  mov w3,#0x1
7102adbd7c  mov x0,x21
7102adbd80  mov x1,x28
7102adbd84  mov x4,x20
7102adbd88  bl 0x7102adef90
7102adbd8c  ldrb w8,[x28, #0x18]
7102adbd90  str x21,[x28, #0x848]
7102adbd94  cbz w8,0x7102adbda4
7102adbd98  mov x0,x21
7102adbd9c  bl 0x710313ef20
7102adbda0  b 0x7102adbdfc
7102adbda4  ldrb w8,[x21, #0x40]
7102adbda8  cbz w8,0x7102adbdf8
7102adbdac  ldr x19,[x21, #0x30]
7102adbdb0  cbz x19,0x7102adbde8
7102adbdb4  ldrb w8,[x19, #0x10]
7102adbdb8  cbz w8,0x7102adbde8
7102adbdbc  ldrb w8,[x19, #0x50]
7102adbdc0  strb wzr,[x19, #0x10]
7102adbdc4  cbz w8,0x7102adbde8
7102adbdc8  ldr x8,[x19]
7102adbdcc  ldr w0,[x8, #0x8]
7102adbdd0  bl 0x71003ac560
7102adbdd4  ldr x8,[x0]
7102adbdd8  ldr x8,[x8, #0x48]
7102adbddc  mov w1,wzr
7102adbde0  blr x8
7102adbde4  strb wzr,[x19, #0x50]
7102adbde8  ldr x8,[x21]
7102adbdec  ldr x8,[x8, #0x30]
7102adbdf0  mov x0,x21
7102adbdf4  blr x8
7102adbdf8  strb wzr,[x21, #0x40]
7102adbdfc  mov w0,#0x10
7102adbe00  mov w1,#0x8
7102adbe04  bl 0x710392e290
7102adbe08  mov x21,x0
7102adbe0c  cbnz x0,0x7102adbe58
7102adbe10  adrp x8,0x7105332000
7102adbe14  ldr x0,[x8, #0xf00]
7102adbe18  cbz x0,0x7102adbe54
7102adbe1c  mov w8,#0x8
7102adbe20  stur wzr,[x29, #-0x54]
7102adbe24  sub x1,x29,#0x54
7102adbe28  str x8,[sp, #0x40]
7102adbe2c  ldr x8,[x0]
7102adbe30  ldr x8,[x8, #0x30]
7102adbe34  add x2,sp,#0x40
7102adbe38  blr x8
7102adbe3c  tbz w0,#0x0,0x7102adbe54
7102adbe40  mov w0,#0x10
7102adbe44  mov w1,#0x8
7102adbe48  bl 0x710392e290
7102adbe4c  mov x21,x0
7102adbe50  cbnz x0,0x7102adbe58
7102adbe54  mov x21,xzr
7102adbe58  mov x0,x21
7102adbe5c  mov x1,x28
7102adbe60  mov x2,x20
7102adbe64  bl 0x7102ae0e30
7102adbe68  ldr x20,[x28, #0x818]
7102adbe6c  str x21,[x28, #0x818]
7102adbe70  cbz x20,0x7102adbec4
7102adbe74  ldr x19,[x20]
7102adbe78  str xzr,[x20]
7102adbe7c  cbz x19,0x7102adbea0
7102adbe80  ldr x0,[x19, #0x68]
7102adbe84  str xzr,[x19, #0x68]
7102adbe88  cbz x0,0x7102adbe98
7102adbe8c  ldr x8,[x0]
7102adbe90  ldr x8,[x8, #0x8]
7102adbe94  blr x8
7102adbe98  mov x0,x19
7102adbe9c  bl 0x710392eb40
7102adbea0  mov x0,x20
7102adbea4  ldp x29,x30,[sp, #0xb0]
7102adbea8  ldp x20,x19,[sp, #0xa0]
7102adbeac  ldp x22,x21,[sp, #0x90]
7102adbeb0  ldp x24,x23,[sp, #0x80]
7102adbeb4  ldp x26,x25,[sp, #0x70]
7102adbeb8  ldp x28,x27,[sp, #0x60]
7102adbebc  add sp,sp,#0xc0
7102adbec0  b 0x710392eb40
7102adbec4  ldp x29,x30,[sp, #0xb0]
7102adbec8  ldp x20,x19,[sp, #0xa0]
7102adbecc  ldp x22,x21,[sp, #0x90]
7102adbed0  ldp x24,x23,[sp, #0x80]
7102adbed4  ldp x26,x25,[sp, #0x70]
7102adbed8  ldp x28,x27,[sp, #0x60]
7102adbedc  add sp,sp,#0xc0
7102adbee0  ret
7102adbee4  mov x0,xzr
7102adbee8  fmov s0,wzr
7102adbeec  mov w1,#0x1
7102adbef0  bl 0x710260fdd0
7102adbef4  ldr x8,[x28, #0x7f0]
7102adbef8  cbz x8,0x7102adb148
7102adbefc  ldrb w9,[x8, #0xe0]
7102adbf00  cbz w9,0x7102adbf14
7102adbf04  ldr x9,[x8, #0xc8]
7102adbf08  cbz x9,0x7102adbf14
7102adbf0c  mov w10,#0x101
7102adbf10  strh w10,[x9, #0x30]
7102adbf14  ldr x9,[x8, #0xd8]
7102adbf18  cbz x9,0x7102adbf24
7102adbf1c  mov w10,#0x1
7102adbf20  strb w10,[x9, #0x21]
7102adbf24  ldrb w9,[x8, #0xe0]
7102adbf28  cbz w9,0x7102adb148
7102adbf2c  ldr x8,[x8, #0xb0]
7102adbf30  strb wzr,[x8, #0x10]
7102adbf34  b 0x7102adb148
7102adbf38  mov x0,xzr
7102adbf3c  fmov s0,wzr
7102adbf40  mov w1,#0x1
7102adbf44  bl 0x710260fdd0
7102adbf48  ldr x8,[x28, #0x7f8]
7102adbf4c  cbz x8,0x7102adb190
7102adbf50  ldrb w9,[x8, #0xe0]
7102adbf54  cbz w9,0x7102adbf68
7102adbf58  ldr x9,[x8, #0xc8]
7102adbf5c  cbz x9,0x7102adbf68
7102adbf60  mov w10,#0x101
7102adbf64  strh w10,[x9, #0x30]
7102adbf68  ldr x9,[x8, #0xd8]
7102adbf6c  cbz x9,0x7102adbf78
7102adbf70  mov w10,#0x1
7102adbf74  strb w10,[x9, #0x21]
7102adbf78  ldrb w9,[x8, #0xe0]
7102adbf7c  cbz w9,0x7102adb190
7102adbf80  ldr x8,[x8, #0xb0]
7102adbf84  strb wzr,[x8, #0x10]
7102adbf88  b 0x7102adb190
7102adbf8c  mov x0,xzr
7102adbf90  fmov s0,wzr
7102adbf94  mov w1,#0x1
7102adbf98  bl 0x710260fdd0
7102adbf9c  ldr x8,[x28, #0x800]
7102adbfa0  cbz x8,0x7102adb1d8
7102adbfa4  ldrb w9,[x8, #0xe0]
7102adbfa8  cbz w9,0x7102adbfbc
7102adbfac  ldr x9,[x8, #0xc8]
7102adbfb0  cbz x9,0x7102adbfbc
7102adbfb4  mov w10,#0x101
7102adbfb8  strh w10,[x9, #0x30]
7102adbfbc  ldr x9,[x8, #0xd8]
7102adbfc0  cbz x9,0x7102adbfcc
7102adbfc4  mov w10,#0x1
7102adbfc8  strb w10,[x9, #0x21]
7102adbfcc  ldrb w9,[x8, #0xe0]
7102adbfd0  cbz w9,0x7102adb1d8
7102adbfd4  ldr x8,[x8, #0xb0]
7102adbfd8  strb wzr,[x8, #0x10]
7102adbfdc  b 0x7102adb1d8
7102adbfe0  mov x0,xzr
7102adbfe4  fmov s0,wzr
7102adbfe8  mov w1,#0x1
7102adbfec  bl 0x710260fdd0
7102adbff0  ldr x8,[x28, #0x808]
7102adbff4  cbz x8,0x7102adb220
7102adbff8  ldrb w9,[x8, #0xe0]
7102adbffc  cbz w9,0x7102adc010
7102adc000  ldr x9,[x8, #0xc8]
7102adc004  cbz x9,0x7102adc010
7102adc008  mov w10,#0x101
7102adc00c  strh w10,[x9, #0x30]
7102adc010  ldr x9,[x8, #0xd8]
7102adc014  cbz x9,0x7102adc020
7102adc018  mov w10,#0x1
7102adc01c  strb w10,[x9, #0x21]
7102adc020  ldrb w9,[x8, #0xe0]
7102adc024  cbz w9,0x7102adb220
7102adc028  ldr x8,[x8, #0xb0]
7102adc02c  strb wzr,[x8, #0x10]
7102adc030  b 0x7102adb220
