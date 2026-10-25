// addr:      7102f6f820
// offset:    0x2f6f820
// name:      FUN_7102f6f820
// mangled:   
// size:      2216

7102f6f820  sub sp,sp,#0xb0
7102f6f824  stp d9,d8,[sp, #0x40]
7102f6f828  stp x28,x27,[sp, #0x50]
7102f6f82c  stp x26,x25,[sp, #0x60]
7102f6f830  stp x24,x23,[sp, #0x70]
7102f6f834  stp x22,x21,[sp, #0x80]
7102f6f838  stp x20,x19,[sp, #0x90]
7102f6f83c  stp x29,x30,[sp, #0xa0]
7102f6f840  add x29,sp,#0xa0
7102f6f844  adrp x8,0x7105158000
7102f6f848  add x8,x8,#0x488
7102f6f84c  str x2,[x0, #0x10]
7102f6f850  stp x8,x1,[x0]
7102f6f854  ldr x8,[x3]
7102f6f858  mov x19,x0
7102f6f85c  strb wzr,[x0, #0x20]
7102f6f860  mov w1,#0xd8
7102f6f864  str xzr,[x0, #0x28]
7102f6f868  str x8,[x0, #0x18]
7102f6f86c  mov w0,#0x10
7102f6f870  bl 0x710392e290
7102f6f874  mov x20,x0
7102f6f878  cbnz x0,0x7102f6f8c4
7102f6f87c  adrp x8,0x7105332000
7102f6f880  ldr x0,[x8, #0xf00]
7102f6f884  cbz x0,0x7102f6f8c0
7102f6f888  mov w8,#0xd8
7102f6f88c  str wzr,[sp, #0x8]
7102f6f890  add x1,sp,#0x8
7102f6f894  str x8,[sp, #0x20]
7102f6f898  ldr x8,[x0]
7102f6f89c  ldr x8,[x8, #0x30]
7102f6f8a0  add x2,sp,#0x20
7102f6f8a4  blr x8
7102f6f8a8  tbz w0,#0x0,0x7102f6f8c0
7102f6f8ac  mov w1,#0xd8
7102f6f8b0  mov w0,#0x10
7102f6f8b4  bl 0x710392e290
7102f6f8b8  mov x20,x0
7102f6f8bc  cbnz x0,0x7102f6f8c4
7102f6f8c0  mov x20,xzr
7102f6f8c4  strh wzr,[x20]
7102f6f8c8  str wzr,[x20, #0xd0]
7102f6f8cc  str xzr,[x20, #0x8]
7102f6f8d0  stp xzr,xzr,[x20, #0xc0]
7102f6f8d4  stp xzr,xzr,[x20, #0xb0]
7102f6f8d8  stp xzr,xzr,[x20, #0xa0]
7102f6f8dc  stp xzr,xzr,[x20, #0x90]
7102f6f8e0  stp xzr,xzr,[x20, #0x80]
7102f6f8e4  stp xzr,xzr,[x20, #0x70]
7102f6f8e8  stp xzr,xzr,[x20, #0x60]
7102f6f8ec  stp xzr,xzr,[x20, #0x50]
7102f6f8f0  stp xzr,xzr,[x20, #0x40]
7102f6f8f4  stp xzr,xzr,[x20, #0x30]
7102f6f8f8  stp xzr,xzr,[x20, #0x20]
7102f6f8fc  stp xzr,xzr,[x20, #0x10]
7102f6f900  ldr x8,[x19, #0x18]
7102f6f904  ldp x22,x23,[x8, #0x1b0]
7102f6f908  cmp x22,x23
7102f6f90c  b.eq 0x7102f6fa18
7102f6f910  mov w24,#0x10
7102f6f914  adrp x25,0x7105332000
7102f6f918  adrp x26,0x7105158000
7102f6f91c  add x26,x26,#0x7b0
7102f6f920  b 0x7102f6f9b0
7102f6f924  cbz x21,0x7102f6fa08
7102f6f928  ldp s8,s9,[x22, #0x10]
7102f6f92c  mov w0,#0x10
7102f6f930  mov w1,#0x10
7102f6f934  bl 0x710392e290
7102f6f938  cbnz x0,0x7102f6f978
7102f6f93c  ldr x0,[x25, #0xf00]
7102f6f940  cbz x0,0x7102f6f974
7102f6f944  str wzr,[sp, #0x8]
7102f6f948  str x24,[sp, #0x20]
7102f6f94c  ldr x8,[x0]
7102f6f950  ldr x8,[x8, #0x30]
7102f6f954  add x1,sp,#0x8
7102f6f958  add x2,sp,#0x20
7102f6f95c  blr x8
7102f6f960  tbz w0,#0x0,0x7102f6f974
7102f6f964  mov w0,#0x10
7102f6f968  mov w1,#0x10
7102f6f96c  bl 0x710392e290
7102f6f970  cbnz x0,0x7102f6f978
7102f6f974  mov x0,xzr
7102f6f978  mov v0.16B,v8.16B
7102f6f97c  mov v1.16B,v9.16B
7102f6f980  add x1,sp,#0x20
7102f6f984  stp x26,x21,[x0]
7102f6f988  str x0,[sp, #0x20]
7102f6f98c  mov x0,x20
7102f6f990  bl 0x7102f750a0
7102f6f994  ldr x0,[sp, #0x20]
7102f6f998  str xzr,[sp, #0x20]
7102f6f99c  cbz x0,0x7102f6fa08
7102f6f9a0  ldr x8,[x0]
7102f6f9a4  ldr x8,[x8, #0x8]
7102f6f9a8  blr x8
7102f6f9ac  b 0x7102f6fa08
7102f6f9b0  ldr x21,[x22, #0x8]
7102f6f9b4  ldr x0,[x19, #0x10]
7102f6f9b8  mov x1,x21
7102f6f9bc  bl 0x7102f6e8d0
7102f6f9c0  tbz w0,#0x0,0x7102f6fa08
7102f6f9c4  ands x8,x21,#0xffffffffff
7102f6f9c8  b.eq 0x7102f6fa08
7102f6f9cc  ldr x9,[x19, #0x8]
7102f6f9d0  ldr x10,[x9, #0x310]
7102f6f9d4  ldp x9,x10,[x10, #0xd0]
7102f6f9d8  cmp x9,x10
7102f6f9dc  b.eq 0x7102f6fa08
7102f6f9e0  ldr w11,[x9, #0x8]
7102f6f9e4  cmp w11,#0x1
7102f6f9e8  b.hi 0x7102f6f9fc
7102f6f9ec  ldr x21,[x9]
7102f6f9f0  ldr x11,[x21, #0x68]
7102f6f9f4  cmp x8,x11
7102f6f9f8  b.eq 0x7102f6f924
7102f6f9fc  add x9,x9,#0x10
7102f6fa00  cmp x10,x9
7102f6fa04  b.ne 0x7102f6f9e0
7102f6fa08  add x22,x22,#0x18
7102f6fa0c  cmp x22,x23
7102f6fa10  b.ne 0x7102f6f9b0
7102f6fa14  ldr x8,[x19, #0x18]
7102f6fa18  ldp x22,x23,[x8, #0x1c8]
7102f6fa1c  cmp x22,x23
7102f6fa20  b.eq 0x7102f6fb40
7102f6fa24  fmov s8,0xbf800000
7102f6fa28  mov w24,#0x20
7102f6fa2c  adrp x25,0x7105332000
7102f6fa30  adrp x26,0x7105158000
7102f6fa34  add x26,x26,#0x7e8
7102f6fa38  b 0x7102f6fad8
7102f6fa3c  cbz x21,0x7102f6fb30
7102f6fa40  ldr s9,[x22, #0x18]
7102f6fa44  mov w0,#0x10
7102f6fa48  mov w1,#0x20
7102f6fa4c  bl 0x710392e290
7102f6fa50  cbnz x0,0x7102f6fa90
7102f6fa54  ldr x0,[x25, #0xf00]
7102f6fa58  cbz x0,0x7102f6fa8c
7102f6fa5c  str wzr,[sp, #0x8]
7102f6fa60  str x24,[sp, #0x20]
7102f6fa64  ldr x8,[x0]
7102f6fa68  ldr x8,[x8, #0x30]
7102f6fa6c  add x1,sp,#0x8
7102f6fa70  add x2,sp,#0x20
7102f6fa74  blr x8
7102f6fa78  tbz w0,#0x0,0x7102f6fa8c
7102f6fa7c  mov w0,#0x10
7102f6fa80  mov w1,#0x20
7102f6fa84  bl 0x710392e290
7102f6fa88  cbnz x0,0x7102f6fa90
7102f6fa8c  mov x0,xzr
7102f6fa90  ldr x8,[x22, #0x10]
7102f6fa94  ldrb w9,[x22, #0x1c]
7102f6fa98  mov v0.16B,v9.16B
7102f6fa9c  mov v1.16B,v8.16B
7102f6faa0  stp x26,x21,[x0]
7102f6faa4  add x1,sp,#0x20
7102f6faa8  strb w9,[x0, #0x18]
7102f6faac  str x8,[x0, #0x10]
7102f6fab0  str x0,[sp, #0x20]
7102f6fab4  mov x0,x20
7102f6fab8  bl 0x7102f750a0
7102f6fabc  ldr x0,[sp, #0x20]
7102f6fac0  str xzr,[sp, #0x20]
7102f6fac4  cbz x0,0x7102f6fb30
7102f6fac8  ldr x8,[x0]
7102f6facc  ldr x8,[x8, #0x8]
7102f6fad0  blr x8
7102f6fad4  b 0x7102f6fb30
7102f6fad8  ldr x21,[x22, #0x8]
7102f6fadc  ldr x0,[x19, #0x10]
7102f6fae0  mov x1,x21
7102f6fae4  bl 0x7102f6e8d0
7102f6fae8  tbz w0,#0x0,0x7102f6fb30
7102f6faec  ands x8,x21,#0xffffffffff
7102f6faf0  b.eq 0x7102f6fb30
7102f6faf4  ldr x9,[x19, #0x8]
7102f6faf8  ldr x10,[x9, #0x310]
7102f6fafc  ldp x9,x10,[x10, #0xd0]
7102f6fb00  cmp x9,x10
7102f6fb04  b.eq 0x7102f6fb30
7102f6fb08  ldr w11,[x9, #0x8]
7102f6fb0c  cmp w11,#0x1
7102f6fb10  b.hi 0x7102f6fb24
7102f6fb14  ldr x21,[x9]
7102f6fb18  ldr x11,[x21, #0x68]
7102f6fb1c  cmp x8,x11
7102f6fb20  b.eq 0x7102f6fa3c
7102f6fb24  add x9,x9,#0x10
7102f6fb28  cmp x10,x9
7102f6fb2c  b.ne 0x7102f6fb08
7102f6fb30  add x22,x22,#0x20
7102f6fb34  cmp x22,x23
7102f6fb38  b.ne 0x7102f6fad8
7102f6fb3c  ldr x8,[x19, #0x18]
7102f6fb40  ldp x21,x22,[x8, #0x1e0]
7102f6fb44  cmp x21,x22
7102f6fb48  b.eq 0x7102f6fe4c
7102f6fb4c  mov w23,#0x1
7102f6fb50  orr w24,wzr,#0xfe
7102f6fb54  add x27,sp,#0x20
7102f6fb58  orr w25,wzr,#0x300
7102f6fb5c  adrp x26,0x7105158000
7102f6fb60  add x26,x26,#0x820
7102f6fb64  b 0x7102f6fbdc
7102f6fb68  cbz x28,0x7102f6fcf4
7102f6fb6c  ldr x8,[x21, #0x18]
7102f6fb70  ands x1,x8,#0xffffffffff
7102f6fb74  b.eq 0x7102f6fba0
7102f6fb78  ldr x8,[x28, #0xd8]
7102f6fb7c  cbz x8,0x7102f6fba0
7102f6fb80  ldr x8,[x8, #0x8]
7102f6fb84  ldr x0,[x8, #0x8]
7102f6fb88  ldr x8,[x0]
7102f6fb8c  ldr x8,[x8, #0x20]
7102f6fb90  blr x8
7102f6fb94  ldr x8,[sp, #0x18]
7102f6fb98  cbnz x8,0x7102f6fbac
7102f6fb9c  b 0x7102f6fcf4
7102f6fba0  mov w0,#0xffffffff
7102f6fba4  ldr x8,[sp, #0x18]
7102f6fba8  cbz x8,0x7102f6fcf4
7102f6fbac  adrp x9,0x71052a8000
7102f6fbb0  ldr x9,[x9, #0xa88]
7102f6fbb4  ldr q0,[x9]
7102f6fbb8  str x28,[x8, #0xc0]
7102f6fbbc  str w0,[x8, #0xc8]
7102f6fbc0  strb w23,[x8, #0xf0]
7102f6fbc4  ext v1.16B,v0.16B,v0.16B,0x8
7102f6fbc8  fmov s2,wzr
7102f6fbcc  mov v1.S[0x1],v2.S[0x0]
7102f6fbd0  mov v0.D[0x1],v1.D[0x0]
7102f6fbd4  stp q0,q0,[x8, #0xd0]
7102f6fbd8  b 0x7102f6fcf4
7102f6fbdc  ldr x8,[x19, #0x10]
7102f6fbe0  ldrb w9,[x21]
7102f6fbe4  lsl w10,w23,w9
7102f6fbe8  ldrb w8,[x8, #0xb1]
7102f6fbec  cmp w9,#0x0
7102f6fbf0  csel w9,w24,w10,eq
7102f6fbf4  tst w9,w8
7102f6fbf8  b.eq 0x7102f6fe40
7102f6fbfc  ldr x8,[x19, #0x8]
7102f6fc00  ldr x1,[x8, #0x320]
7102f6fc04  ldr x2,[x21, #0x8]
7102f6fc08  add x0,sp,#0x8
7102f6fc0c  bl 0x7102626be0
7102f6fc10  ldr x8,[sp, #0x18]
7102f6fc14  cbz x8,0x7102f6fe1c
7102f6fc18  ldr s0,[x21, #0x20]
7102f6fc1c  movi v1.2D,#0x0
7102f6fc20  ldrb w9,[x8, #0x35]
7102f6fc24  mov v1.S[0x0],v0.S[0x0]
7102f6fc28  mov v1.S[0x1],v0.S[0x0]
7102f6fc2c  mov v1.S[0x2],v0.S[0x0]
7102f6fc30  str q1,[x8, #0x70]
7102f6fc34  cbz w9,0x7102f6fca0
7102f6fc38  ldr w10,[x8, #0x3c]
7102f6fc3c  cmp w10,#0x1
7102f6fc40  b.lt 0x7102f6fcac
7102f6fc44  adrp x8,0x7105334000
7102f6fc48  ldr x8,[x8, #0x920]
7102f6fc4c  ldr x8,[x8]
7102f6fc50  lsr x9,x10,#0x18
7102f6fc54  madd x11,x9,x25,x8
7102f6fc58  cbz x11,0x7102f6fcac
7102f6fc5c  ldr w11,[x11, #0x4]
7102f6fc60  cmp w11,w10
7102f6fc64  b.ne 0x7102f6fcac
7102f6fc68  movi d1,#0x0
7102f6fc6c  mov v1.S[0x0],v0.S[0x0]
7102f6fc70  dup v2.2S,v0.S[0x0]
7102f6fc74  madd x8,x9,x25,x8
7102f6fc78  ldr w9,[x8, #0x26c]
7102f6fc7c  mov v2.D[0x1],v1.D[0x0]
7102f6fc80  fcmp s0,s0
7102f6fc84  and w10,w9,#0xffffdfff
7102f6fc88  orr w9,w9,#0x2000
7102f6fc8c  csel w9,w9,w10,vs
7102f6fc90  strb w23,[x8, #0x2da]
7102f6fc94  str w9,[x8, #0x26c]
7102f6fc98  str q2,[x8, #0x100]
7102f6fc9c  b 0x7102f6fcac
7102f6fca0  ldr x9,[x8, #0x48]
7102f6fca4  orr x9,x9,#0x4
7102f6fca8  str x9,[x8, #0x48]
7102f6fcac  ldr x8,[x21, #0x10]
7102f6fcb0  ands x8,x8,#0xffffffffff
7102f6fcb4  b.eq 0x7102f6fcf4
7102f6fcb8  ldr x9,[x19, #0x8]
7102f6fcbc  ldr x10,[x9, #0x310]
7102f6fcc0  ldp x9,x10,[x10, #0xd0]
7102f6fcc4  cmp x9,x10
7102f6fcc8  b.eq 0x7102f6fcf4
7102f6fccc  ldr w11,[x9, #0x8]
7102f6fcd0  cmp w11,#0x1
7102f6fcd4  b.hi 0x7102f6fce8
7102f6fcd8  ldr x28,[x9]
7102f6fcdc  ldr x11,[x28, #0x68]
7102f6fce0  cmp x8,x11
7102f6fce4  b.eq 0x7102f6fb68
7102f6fce8  add x9,x9,#0x10
7102f6fcec  cmp x10,x9
7102f6fcf0  b.ne 0x7102f6fccc
7102f6fcf4  ldp s8,s9,[x21, #0x24]
7102f6fcf8  mov w0,#0x10
7102f6fcfc  mov w1,#0x20
7102f6fd00  bl 0x710392e290
7102f6fd04  cbnz x0,0x7102f6fd4c
7102f6fd08  adrp x8,0x7105332000
7102f6fd0c  ldr x0,[x8, #0xf00]
7102f6fd10  cbz x0,0x7102f6fd48
7102f6fd14  mov w8,#0x20
7102f6fd18  str wzr,[sp, #0x3c]
7102f6fd1c  add x1,sp,#0x3c
7102f6fd20  str x8,[sp, #0x20]
7102f6fd24  ldr x8,[x0]
7102f6fd28  ldr x8,[x8, #0x30]
7102f6fd2c  add x2,sp,#0x20
7102f6fd30  blr x8
7102f6fd34  tbz w0,#0x0,0x7102f6fd48
7102f6fd38  mov w0,#0x10
7102f6fd3c  mov w1,#0x20
7102f6fd40  bl 0x710392e290
7102f6fd44  cbnz x0,0x7102f6fd4c
7102f6fd48  mov x0,xzr
7102f6fd4c  ldr x8,[sp, #0x18]
7102f6fd50  stp xzr,xzr,[sp, #0x28]
7102f6fd54  str xzr,[sp, #0x20]
7102f6fd58  cbz x8,0x7102f6fd80
7102f6fd5c  ldr x10,[x8, #0x20]
7102f6fd60  add x9,x8,#0x18
7102f6fd64  stp x9,x10,[sp, #0x20]
7102f6fd68  str x27,[x8, #0x20]
7102f6fd6c  str x27,[x10]
7102f6fd70  ldr x9,[x8, #0x10]
7102f6fd74  add x9,x9,#0x1
7102f6fd78  str x9,[x8, #0x10]
7102f6fd7c  str x8,[sp, #0x30]
7102f6fd80  mov x9,x0
7102f6fd84  str x26,[x0]
7102f6fd88  str xzr,[x9, #0x8]!
7102f6fd8c  cmp x9,x27
7102f6fd90  stp xzr,xzr,[x0, #0x10]
7102f6fd94  b.eq 0x7102f6fdc4
7102f6fd98  cbz x8,0x7102f6fde8
7102f6fd9c  ldr x11,[x8, #0x20]
7102f6fda0  add x10,x8,#0x18
7102f6fda4  stp x10,x11,[x0, #0x8]
7102f6fda8  str x9,[x8, #0x20]
7102f6fdac  str x9,[x11]
7102f6fdb0  ldr x9,[x8, #0x10]
7102f6fdb4  add x9,x9,#0x1
7102f6fdb8  str x9,[x8, #0x10]
7102f6fdbc  str x8,[x0, #0x18]
7102f6fdc0  ldr x8,[sp, #0x30]
7102f6fdc4  cbz x8,0x7102f6fde8
7102f6fdc8  ldp x9,x10,[sp, #0x20]
7102f6fdcc  str x9,[x10]
7102f6fdd0  str x10,[x9, #0x8]
7102f6fdd4  ldr x9,[x8, #0x10]
7102f6fdd8  sub x9,x9,#0x1
7102f6fddc  str x9,[x8, #0x10]
7102f6fde0  stp xzr,xzr,[sp, #0x28]
7102f6fde4  str xzr,[sp, #0x20]
7102f6fde8  mov v0.16B,v8.16B
7102f6fdec  mov v1.16B,v9.16B
7102f6fdf0  str x0,[sp, #0x20]
7102f6fdf4  add x1,sp,#0x20
7102f6fdf8  mov x0,x20
7102f6fdfc  bl 0x7102f750a0
7102f6fe00  ldr x0,[sp, #0x20]
7102f6fe04  str xzr,[sp, #0x20]
7102f6fe08  cbz x0,0x7102f6fe18
7102f6fe0c  ldr x8,[x0]
7102f6fe10  ldr x8,[x8, #0x8]
7102f6fe14  blr x8
7102f6fe18  ldr x8,[sp, #0x18]
7102f6fe1c  cbz x8,0x7102f6fe40
7102f6fe20  ldp x9,x10,[sp, #0x8]
7102f6fe24  str x9,[x10]
7102f6fe28  str x10,[x9, #0x8]
7102f6fe2c  ldr x9,[x8, #0x10]
7102f6fe30  sub x9,x9,#0x1
7102f6fe34  str x9,[x8, #0x10]
7102f6fe38  stp xzr,xzr,[sp, #0x10]
7102f6fe3c  str xzr,[sp, #0x8]
7102f6fe40  add x21,x21,#0x30
7102f6fe44  cmp x21,x22
7102f6fe48  b.ne 0x7102f6fbdc
7102f6fe4c  ldr x8,[x19, #0x8]
7102f6fe50  ldr x21,[x8, #0x338]
7102f6fe54  mov w0,#0x10
7102f6fe58  orr w1,wzr,#0x18
7102f6fe5c  bl 0x710392e290
7102f6fe60  cbnz x0,0x7102f6fea8
7102f6fe64  adrp x8,0x7105332000
7102f6fe68  ldr x0,[x8, #0xf00]
7102f6fe6c  cbz x0,0x7102f6fea4
7102f6fe70  orr w8,wzr,#0x18
7102f6fe74  str wzr,[sp, #0x8]
7102f6fe78  add x1,sp,#0x8
7102f6fe7c  str x8,[sp, #0x20]
7102f6fe80  ldr x8,[x0]
7102f6fe84  ldr x8,[x8, #0x30]
7102f6fe88  add x2,sp,#0x20
7102f6fe8c  blr x8
7102f6fe90  tbz w0,#0x0,0x7102f6fea4
7102f6fe94  mov w0,#0x10
7102f6fe98  orr w1,wzr,#0x18
7102f6fe9c  bl 0x710392e290
7102f6fea0  cbnz x0,0x7102f6fea8
7102f6fea4  mov x0,xzr
7102f6fea8  adrp x8,0x7105158000
7102f6feac  add x8,x8,#0x858
7102f6feb0  fmov s0,wzr
7102f6feb4  stp x8,x21,[x0]
7102f6feb8  mov x8,#0x1
7102f6febc  fmov s1,0xbf800000
7102f6fec0  movk x8,#0x9, LSL #32
7102f6fec4  str x8,[x0, #0x10]
7102f6fec8  str x0,[sp, #0x20]
7102f6fecc  add x1,sp,#0x20
7102f6fed0  mov x0,x20
7102f6fed4  bl 0x7102f750a0
7102f6fed8  ldr x0,[sp, #0x20]
7102f6fedc  str xzr,[sp, #0x20]
7102f6fee0  cbz x0,0x7102f6fef0
7102f6fee4  ldr x8,[x0]
7102f6fee8  ldr x8,[x8, #0x8]
7102f6feec  blr x8
7102f6fef0  mov x0,x20
7102f6fef4  bl 0x7102f753a0
7102f6fef8  ldr x21,[x19, #0x28]
7102f6fefc  str x20,[x19, #0x28]
7102f6ff00  cbz x21,0x7102f6ff14
7102f6ff04  mov x0,x21
7102f6ff08  bl 0x7102f74e50
7102f6ff0c  mov x0,x21
7102f6ff10  bl 0x710392eb40
7102f6ff14  ldr x8,[x19, #0x8]
7102f6ff18  ldr x8,[x8, #0x310]
7102f6ff1c  ldp x21,x20,[x8, #0xd0]
7102f6ff20  cmp x21,x20
7102f6ff24  b.eq 0x7102f6ff6c
7102f6ff28  ldr w8,[x21, #0x8]
7102f6ff2c  sub w8,w8,#0x2
7102f6ff30  cmp w8,#0x2
7102f6ff34  b.hi 0x7102f6ff6c
7102f6ff38  add x8,x21,#0x10
7102f6ff3c  cmp x20,x8
7102f6ff40  b.eq 0x7102f6ff60
7102f6ff44  ldr w9,[x8, #0x8]
7102f6ff48  add x8,x8,#0x10
7102f6ff4c  sub w9,w9,#0x2
7102f6ff50  cmp w9,#0x2
7102f6ff54  b.ls 0x7102f6ff3c
7102f6ff58  sub x21,x8,#0x10
7102f6ff5c  b 0x7102f6ff6c
7102f6ff60  mov x21,x20
7102f6ff64  b 0x7102f6ff6c
7102f6ff68  mov x21,x20
7102f6ff6c  cmp x21,x20
7102f6ff70  b.eq 0x7102f6ffb4
7102f6ff74  ldr x8,[x21]
7102f6ff78  cbz x8,0x7102f6ff88
7102f6ff7c  add x0,x8,#0x108
7102f6ff80  strb wzr,[x8, #0x110]
7102f6ff84  bl 0x71025e9d50
7102f6ff88  add x21,x21,#0x10
7102f6ff8c  cmp x21,x20
7102f6ff90  b.eq 0x7102f6ff68
7102f6ff94  ldr w8,[x21, #0x8]
7102f6ff98  sub w8,w8,#0x2
7102f6ff9c  cmp w8,#0x2
7102f6ffa0  b.hi 0x7102f6ff6c
7102f6ffa4  add x21,x21,#0x10
7102f6ffa8  cmp x20,x21
7102f6ffac  b.ne 0x7102f6ff94
7102f6ffb0  b 0x7102f6ff68
7102f6ffb4  ldr x8,[x19, #0x10]
7102f6ffb8  ldrb w9,[x8, #0x10]
7102f6ffbc  cbz w9,0x7102f70008
7102f6ffc0  ldrb w8,[x8, #0xa4]
7102f6ffc4  sub w9,w8,#0x1
7102f6ffc8  cmp w9,#0x6
7102f6ffcc  b.hi 0x7102f70008
7102f6ffd0  mov w9,#0xcccd
7102f6ffd4  movk w9,#0xcccc, LSL #16
7102f6ffd8  umull x9,w8,w9
7102f6ffdc  lsr x9,x9,#0x23
7102f6ffe0  mov w10,#0xa
7102f6ffe4  msub w8,w9,w10,w8
7102f6ffe8  orr w9,wzr,#0x7
7102f6ffec  cmp w8,#0x7
7102f6fff0  csel w8,w8,w9,cc
7102f6fff4  cmp w8,#0x1
7102f6fff8  csinc w8,w8,wzr,gt
7102f6fffc  sub w8,w8,#0x1
7102f70000  sxtw x8,w8
7102f70004  b 0x7102f7000c
7102f70008  mov x8,xzr
7102f7000c  ldr x9,[x19, #0x8]
7102f70010  ldr x9,[x9, #0x318]
7102f70014  ldr x0,[x9, #0x10]
7102f70018  adrp x9,0x7105158000
7102f7001c  add x9,x9,#0x4e0
7102f70020  lsl x20,x8,#0x3
7102f70024  ldr x1,[x9, x20, LSL #0x0]
7102f70028  bl 0x71025f7350
7102f7002c  ldr x8,[x19, #0x8]
7102f70030  ldr x8,[x8, #0x318]
7102f70034  ldr x8,[x8, #0x10]
7102f70038  strb wzr,[x8, #0x4c]
7102f7003c  ldr x8,[x19, #0x8]
7102f70040  ldr x0,[x8, #0x318]
7102f70044  ldr w8,[x8, #0x8]
7102f70048  adrp x9,0x7105158000
7102f7004c  add x9,x9,#0x5e0
7102f70050  adrp x10,0x7105158000
7102f70054  add x10,x10,#0x5a0
7102f70058  cmp w8,#0x16a
7102f7005c  csel x9,x10,x9,eq
7102f70060  adrp x10,0x7105158000
7102f70064  add x10,x10,#0x560
7102f70068  cmp w8,#0x16b
7102f7006c  csel x8,x10,x9,eq
7102f70070  mov w2,wzr
7102f70074  ldr x1,[x8, x20, LSL #0x0]
7102f70078  bl 0x7102633a10
7102f7007c  ldr x8,[x19, #0x8]
7102f70080  adrp x9,0x7105158000
7102f70084  add x9,x9,#0x620
7102f70088  ldr x1,[x9, x20, LSL #0x0]
7102f7008c  ldr x0,[x8, #0x318]
7102f70090  mov w2,wzr
7102f70094  bl 0x7102633b90
7102f70098  ldr x8,[x19]
7102f7009c  ldp d9,d8,[sp, #0x40]
7102f700a0  mov x0,x19
7102f700a4  ldp x29,x30,[sp, #0xa0]
7102f700a8  ldp x20,x19,[sp, #0x90]
7102f700ac  ldr x1,[x8, #0x38]
7102f700b0  ldp x22,x21,[sp, #0x80]
7102f700b4  ldp x24,x23,[sp, #0x70]
7102f700b8  ldp x26,x25,[sp, #0x60]
7102f700bc  ldp x28,x27,[sp, #0x50]
7102f700c0  add sp,sp,#0xb0
7102f700c4  br x1
