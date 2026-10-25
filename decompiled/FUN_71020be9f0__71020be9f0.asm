// addr:      71020be9f0
// offset:    0x20be9f0
// name:      FUN_71020be9f0
// mangled:   
// size:      868

71020be9f0  sub sp,sp,#0x70
71020be9f4  str x25,[sp, #0x20]
71020be9f8  stp x24,x23,[sp, #0x30]
71020be9fc  stp x22,x21,[sp, #0x40]
71020bea00  stp x20,x19,[sp, #0x50]
71020bea04  stp x29,x30,[sp, #0x60]
71020bea08  add x29,sp,#0x60
71020bea0c  ldr x9,[x0, #0x20]
71020bea10  ldr x9,[x9]
71020bea14  ldr x8,[x0, #0x10]
71020bea18  adrp x24,0x7104862000
71020bea1c  add x24,x24,#0x960
71020bea20  add x10,x9,#0x10
71020bea24  cmp x10,x8
71020bea28  csel x11,x10,x24,cc
71020bea2c  ldr w12,[x11, #0x8]
71020bea30  and w12,w12,#0xf
71020bea34  mov x19,x0
71020bea38  cmp w12,#0x2
71020bea3c  b.eq 0x71020bea54
71020bea40  cmp w12,#0x7
71020bea44  b.ne 0x71020bea5c
71020bea48  ldr x11,[x11]
71020bea4c  add x21,x11,#0x28
71020bea50  b 0x71020bea60
71020bea54  ldr x21,[x11]
71020bea58  b 0x71020bea60
71020bea5c  mov x21,xzr
71020bea60  add x9,x9,#0x20
71020bea64  cmp x9,x8
71020bea68  csel x1,x9,x24,cc
71020bea6c  adrp x2,0x710430c000
71020bea70  add x2,x2,#0x66a
71020bea74  mov x0,x19
71020bea78  sub x22,x8,x10
71020bea7c  bl 0x71038f4d40
71020bea80  ldr x9,[x19, #0x10]
71020bea84  sub x8,x9,#0x10
71020bea88  ldur w9,[x9, #-0x8]
71020bea8c  and w9,w9,#0xf
71020bea90  cmp w9,#0x2
71020bea94  b.eq 0x71020beaac
71020bea98  cmp w9,#0x7
71020bea9c  b.ne 0x71020beab4
71020beaa0  ldr x9,[x8]
71020beaa4  add x9,x9,#0x28
71020beaa8  b 0x71020beab8
71020beaac  ldr x9,[x8]
71020beab0  b 0x71020beab8
71020beab4  mov x9,xzr
71020beab8  lsr x23,x22,#0x4
71020beabc  str x8,[x19, #0x10]
71020beac0  blr x9
71020beac4  mov w2,#0x2
71020beac8  mov x1,x19
71020beacc  mov x20,x0
71020bead0  bl 0x71020bed60
71020bead4  ldr x8,[x19, #0x20]
71020bead8  ldr x8,[x8]
71020beadc  ldr x9,[x19, #0x10]
71020beae0  add x8,x8,#0x30
71020beae4  cmp x8,x9
71020beae8  csel x25,x8,x24,cc
71020beaec  ldr w8,[x25, #0x8]
71020beaf0  cmp w8,#0x3
71020beaf4  b.ne 0x71020beb00
71020beaf8  ldr s2,[x25]
71020beafc  b 0x71020beb78
71020beb00  cmp w8,#0x13
71020beb04  b.ne 0x71020beb14
71020beb08  ldr x8,[x25]
71020beb0c  scvtf s2,x8
71020beb10  b 0x71020beb78
71020beb14  and w8,w8,#0xf
71020beb18  cmp w8,#0x4
71020beb1c  b.ne 0x71020beb74
71020beb20  ldr x8,[x25]
71020beb24  add x0,x8,#0x18
71020beb28  add x1,sp,#0x10
71020beb2c  bl 0x7103907f00
71020beb30  ldr x8,[x25]
71020beb34  ldrb w9,[x8, #0x8]
71020beb38  cmp w9,#0x4
71020beb3c  b.ne 0x71020beb48
71020beb40  ldrb w8,[x8, #0xb]
71020beb44  b 0x71020beb4c
71020beb48  ldr x8,[x8, #0x10]
71020beb4c  add x8,x8,#0x1
71020beb50  cmp x0,x8
71020beb54  b.ne 0x71020beb74
71020beb58  ldr x9,[sp, #0x10]
71020beb5c  scvtf s0,x9
71020beb60  ldr w8,[sp, #0x18]
71020beb64  fmov s1,w9
71020beb68  cmp w8,#0x13
71020beb6c  fcsel s2,s0,s1,eq
71020beb70  b 0x71020beb78
71020beb74  fmov s2,wzr
71020beb78  ldr x8,[x19, #0x20]
71020beb7c  ldr x8,[x8]
71020beb80  ldr x9,[x19, #0x10]
71020beb84  add x8,x8,#0x40
71020beb88  cmp x8,x9
71020beb8c  csel x24,x8,x24,cc
71020beb90  ldr w8,[x24, #0x8]
71020beb94  cmp w8,#0x3
71020beb98  b.ne 0x71020beba4
71020beb9c  ldr s0,[x24]
71020beba0  b 0x71020bec24
71020beba4  cmp w8,#0x13
71020beba8  b.ne 0x71020bebb8
71020bebac  ldr x8,[x24]
71020bebb0  scvtf s0,x8
71020bebb4  b 0x71020bec24
71020bebb8  and w8,w8,#0xf
71020bebbc  cmp w8,#0x4
71020bebc0  b.ne 0x71020bec20
71020bebc4  ldr x8,[x24]
71020bebc8  add x1,sp,#0x10
71020bebcc  add x0,x8,#0x18
71020bebd0  str q2,[sp]
71020bebd4  bl 0x7103907f00
71020bebd8  ldr x8,[x24]
71020bebdc  ldrb w9,[x8, #0x8]
71020bebe0  cmp w9,#0x4
71020bebe4  b.ne 0x71020bebf0
71020bebe8  ldrb w8,[x8, #0xb]
71020bebec  b 0x71020bebf4
71020bebf0  ldr x8,[x8, #0x10]
71020bebf4  ldr q2,[sp]
71020bebf8  add x8,x8,#0x1
71020bebfc  cmp x0,x8
71020bec00  b.ne 0x71020bec20
71020bec04  ldr x9,[sp, #0x10]
71020bec08  scvtf s0,x9
71020bec0c  ldr w8,[sp, #0x18]
71020bec10  fmov s1,w9
71020bec14  cmp w8,#0x13
71020bec18  fcsel s0,s0,s1,eq
71020bec1c  b 0x71020bec24
71020bec20  fmov s0,wzr
71020bec24  movi v1.2D,#0x0
71020bec28  mov v1.S[0x0],v2.S[0x0]
71020bec2c  mov v1.S[0x1],v0.S[0x0]
71020bec30  str q1,[sp, #0x10]
71020bec34  tbnz w23,#0x1f,0x71020bec48
71020bec38  ldr x8,[x19, #0x10]
71020bec3c  neg x9,x22, LSL #0x1c
71020bec40  add x8,x8,x9, ASR #0x1c
71020bec44  b 0x71020bec80
71020bec48  ldr x8,[x19, #0x20]
71020bec4c  ldr x8,[x8]
71020bec50  lsl x10,x22,#0x1c
71020bec54  ldr x9,[x19, #0x10]
71020bec58  eor x10,x10,#-0x100000000
71020bec5c  add x8,x8,x10, ASR #0x1c
71020bec60  add x8,x8,#0x10
71020bec64  b 0x71020bec78
71020bec68  add x10,x9,#0x10
71020bec6c  str x10,[x19, #0x10]
71020bec70  str wzr,[x9, #0x8]
71020bec74  ldr x9,[x19, #0x10]
71020bec78  cmp x9,x8
71020bec7c  b.cc 0x71020bec68
71020bec80  add x2,sp,#0x10
71020bec84  mov x0,x21
71020bec88  mov x1,x20
71020bec8c  str x8,[x19, #0x10]
71020bec90  bl 0x710068eb10
71020bec94  ldr x8,[x19, #0x10]
71020bec98  and w9,w0,#0x1
71020bec9c  str w9,[x8]
71020beca0  mov w9,#0x1
71020beca4  str w9,[x8, #0x8]
71020beca8  ldp x8,x9,[x19, #0x10]
71020becac  add x8,x8,#0x10
71020becb0  str x8,[x19, #0x10]
71020becb4  ldr x8,[x9, #0x18]
71020becb8  cmp x8,#0x1
71020becbc  b.lt 0x71020becc8
71020becc0  mov x0,x19
71020becc4  bl 0x71038fec40
71020becc8  mov x0,x19
71020beccc  bl 0x710391e050
71020becd0  ldr x8,[x19, #0x10]
71020becd4  mov w9,#0x45
71020becd8  str x0,[x8]
71020becdc  str w9,[x8, #0x8]
71020bece0  ldr x8,[x19, #0x10]
71020bece4  add x8,x8,#0x10
71020bece8  mov x0,x20
71020becec  mov x1,x19
71020becf0  str x8,[x19, #0x10]
71020becf4  bl 0x71020bf290
71020becf8  ldr q0,[sp, #0x10]
71020becfc  ldr x8,[x19, #0x10]
71020bed00  orr w9,wzr,#0x3
71020bed04  str w9,[x8, #0x8]
71020bed08  str s0,[x8]
71020bed0c  ldr x8,[x19, #0x10]
71020bed10  add x10,x8,#0x10
71020bed14  str x10,[x19, #0x10]
71020bed18  st1 {v0.S}[1],[x10]
71020bed1c  str w9,[x8, #0x18]
71020bed20  ldr x8,[x19, #0x10]
71020bed24  add x8,x8,#0x10
71020bed28  mov x0,x20
71020bed2c  str x8,[x19, #0x10]
71020bed30  bl 0x710392eb40
71020bed34  ldp x29,x30,[sp, #0x60]
71020bed38  ldr x25,[sp, #0x20]
71020bed3c  ldp x20,x19,[sp, #0x50]
71020bed40  mov w0,#0x4
71020bed44  ldp x22,x21,[sp, #0x40]
71020bed48  ldp x24,x23,[sp, #0x30]
71020bed4c  add sp,sp,#0x70
71020bed50  ret
