// addr:      71000fa9e0
// offset:    0xfa9e0
// name:      FUN_71000fa9e0
// mangled:   
// size:      908

71000fa9e0  sub sp,sp,#0x180
71000fa9e4  str x28,[sp, #0x120]
71000fa9e8  stp x26,x25,[sp, #0x130]
71000fa9ec  stp x24,x23,[sp, #0x140]
71000fa9f0  stp x22,x21,[sp, #0x150]
71000fa9f4  stp x20,x19,[sp, #0x160]
71000fa9f8  stp x29,x30,[sp, #0x170]
71000fa9fc  add x29,sp,#0x170
71000faa00  adrp x22,0x71052a5000
71000faa04  ldr x22,[x22, #0x80]
71000faa08  mov x19,x0
71000faa0c  ldr x0,[x22]
71000faa10  bl 0x7100146ba0
71000faa14  sub w8,w0,#0x5
71000faa18  cmp w8,#0x3
71000faa1c  b.hi 0x71000faa44
71000faa20  adrp x9,0x7104496000
71000faa24  add x9,x9,#0x30c
71000faa28  ldrsw x8,[x9, x8, LSL #0x2]
71000faa2c  add x8,x8,x9
71000faa30  br x8
71000faa34  mov w8,#0x1
71000faa38  orr w9,wzr,#0x3
71000faa3c  mov w10,#0xc406
71000faa40  b 0x71000faaf8
71000faa44  adrp x8,0x71052a4000
71000faa48  ldr x8,[x8, #0xdf0]
71000faa4c  ldr x0,[x8]
71000faa50  add x8,sp,#0x18
71000faa54  bl 0x7100192e90
71000faa58  ldr w8,[sp, #0x18]
71000faa5c  cbnz w8,0x71000faa70
71000faa60  ldr x0,[x22]
71000faa64  bl 0x7100146ba0
71000faa68  cmp w0,#0x4
71000faa6c  b.ne 0x71000fab80
71000faa70  mov w8,#0x6c59
71000faa74  str w8,[sp, #0x18]
71000faa78  add x8,sp,#0x18
71000faa7c  orr x20,x8,#0x4
71000faa80  mov x0,x20
71000faa84  bl 0x71039c0a80
71000faa88  sub x1,x29,#0x60
71000faa8c  mov x0,x20
71000faa90  stur wzr,[x29, #-0x60]
71000faa94  bl 0x71039c0a90
71000faa98  add x0,x19,#0x220
71000faa9c  add x1,sp,#0x18
71000faaa0  bl 0x71000bcf30
71000faaa4  adrp x8,0x71052a5000
71000faaa8  ldr x8,[x8, #0x238]
71000faaac  mov w9,#0x4
71000faab0  strb w9,[x19, #0x130]
71000faab4  adrp x9,0x7104290000
71000faab8  add x9,x9,#0xd05
71000faabc  stp x8,xzr,[x19, #0x30]
71000faac0  mov w0,#0x5
71000faac4  str x9,[x19, #0x40]
71000faac8  b 0x71000fab60
71000faacc  mov w8,#0x1
71000faad0  orr w9,wzr,#0x3
71000faad4  mov w10,#0xa471
71000faad8  b 0x71000faaf8
71000faadc  mov w8,#0x1
71000faae0  orr w9,wzr,#0x3
71000faae4  mov w10,#0xc420
71000faae8  b 0x71000faaf8
71000faaec  mov w8,#0x1
71000faaf0  orr w9,wzr,#0x3
71000faaf4  mov w10,#0xc421
71000faaf8  strb w8,[x19, #0xfa]
71000faafc  add x8,sp,#0x18
71000fab00  orr x20,x8,#0x4
71000fab04  mov x0,x20
71000fab08  strb w9,[x19, #0x130]
71000fab0c  str w10,[sp, #0x18]
71000fab10  bl 0x71039c0a80
71000fab14  sub x1,x29,#0x60
71000fab18  mov x0,x20
71000fab1c  stur wzr,[x29, #-0x60]
71000fab20  bl 0x71039c0a90
71000fab24  add x0,x19,#0x220
71000fab28  add x1,sp,#0x18
71000fab2c  bl 0x71000bcf30
71000fab30  ldr x8,[x22]
71000fab34  ldr x0,[x8, #0x8]
71000fab38  ldr x8,[x0]
71000fab3c  ldr x8,[x8, #0x28]
71000fab40  blr x8
71000fab44  adrp x8,0x71052a5000
71000fab48  ldr x8,[x8, #0x240]
71000fab4c  mov x0,xzr
71000fab50  stp x8,xzr,[x19, #0x30]
71000fab54  adrp x8,0x71043ac000
71000fab58  add x8,x8,#0x982
71000fab5c  str x8,[x19, #0x40]
71000fab60  ldp x29,x30,[sp, #0x170]
71000fab64  ldr x28,[sp, #0x120]
71000fab68  ldp x20,x19,[sp, #0x160]
71000fab6c  ldp x22,x21,[sp, #0x150]
71000fab70  ldp x24,x23,[sp, #0x140]
71000fab74  ldp x26,x25,[sp, #0x130]
71000fab78  add sp,sp,#0x180
71000fab7c  ret
71000fab80  ldrb w8,[x19, #0xfb]
71000fab84  cbz w8,0x71000faba4
71000fab88  add x1,x19,#0x100
71000fab8c  add x0,x19,#0x220
71000fab90  bl 0x71000bcf30
71000fab94  adrp x8,0x71052a5000
71000fab98  ldr x8,[x8, #0x238]
71000fab9c  orr w9,wzr,#0x6
71000faba0  b 0x71000faab0
71000faba4  ldr x0,[x19, #0x58]
71000faba8  cbz x0,0x71000fabf8
71000fabac  ldrb w8,[x0, #0x28]
71000fabb0  cbz w8,0x71000fabf8
71000fabb4  ldr w8,[x0]
71000fabb8  sub w8,w8,#0x2
71000fabbc  cmp w8,#0x3
71000fabc0  b.cc 0x71000fabc8
71000fabc4  bl 0x71000b4260
71000fabc8  str xzr,[x19, #0x58]
71000fabcc  ldr x8,[x22]
71000fabd0  ldrb w9,[x8, #0x162]
71000fabd4  cmp w9,#0x0
71000fabd8  cset w9,eq
71000fabdc  add x8,x8,w9, UXTW  #0x3
71000fabe0  ldr x0,[x8, #0x168]
71000fabe4  bl 0x71000d8f90
71000fabe8  mov x0,x19
71000fabec  bl 0x7100140910
71000fabf0  mov w0,#0x1
71000fabf4  b 0x71000fab60
71000fabf8  ldr x23,[x22]
71000fabfc  ldrb w8,[x23, #0x162]
71000fac00  cmp w8,#0x0
71000fac04  cset w8,eq
71000fac08  add x8,x23,w8, UXTW  #0x3
71000fac0c  ldr x20,[x8, #0x168]
71000fac10  sub x8,x29,#0x60
71000fac14  orr x21,x8,#0x4
71000fac18  mov x0,x21
71000fac1c  stur wzr,[x29, #-0x60]
71000fac20  bl 0x71039c0a80
71000fac24  add x1,sp,#0x18
71000fac28  mov x0,x21
71000fac2c  str wzr,[sp, #0x18]
71000fac30  add x24,sp,#0x18
71000fac34  bl 0x71039c0a90
71000fac38  stp xzr,xzr,[sp, #0x100]
71000fac3c  add x25,x19,#0xa8
71000fac40  stp xzr,xzr,[sp, #0xf0]
71000fac44  str xzr,[sp, #0x18]
71000fac48  stp xzr,xzr,[sp, #0xe0]
71000fac4c  stp xzr,xzr,[sp, #0xd0]
71000fac50  stp xzr,xzr,[sp, #0xc0]
71000fac54  stp xzr,xzr,[sp, #0xb0]
71000fac58  stp xzr,xzr,[sp, #0xa0]
71000fac5c  stp xzr,xzr,[sp, #0x90]
71000fac60  stp xzr,xzr,[sp, #0x80]
71000fac64  stp xzr,xzr,[sp, #0x70]
71000fac68  stp xzr,xzr,[sp, #0x60]
71000fac6c  stp xzr,xzr,[sp, #0x50]
71000fac70  stp xzr,xzr,[sp, #0x40]
71000fac74  stp xzr,xzr,[sp, #0x30]
71000fac78  stp xzr,xzr,[sp, #0x20]
71000fac7c  ldr x26,[x19, #0xb0]
71000fac80  cmp x26,x25
71000fac84  b.eq 0x71000facc4
71000fac88  mov w21,wzr
71000fac8c  ldr x1,[x26, #0x10]
71000fac90  ldr x8,[x19, #0xa0]
71000fac94  cmp x1,x8
71000fac98  b.eq 0x71000facb4
71000fac9c  ldr x0,[x23, #0xb8]
71000faca0  bl 0x7100150680
71000faca4  tbz w0,#0x0,0x71000facb4
71000faca8  ldr x8,[x26, #0x10]
71000facac  str x8,[x24, w21, UXTW #0x3]
71000facb0  add w21,w21,#0x1
71000facb4  ldr x26,[x26, #0x8]
71000facb8  cmp x26,x25
71000facbc  b.ne 0x71000fac8c
71000facc0  b 0x71000facc8
71000facc4  mov w21,wzr
71000facc8  ldr x8,[x22]
71000faccc  ldrb w9,[x8, #0x162]
71000facd0  add x8,x8,x9, LSL #0x2
71000facd4  ldr w4,[x8, #0x180]
71000facd8  add x1,x19,#0x60
71000facdc  add x8,sp,#0x8
71000face0  add x2,sp,#0x18
71000face4  mov x0,x20
71000face8  mov w3,w21
71000facec  bl 0x71000dc200
71000facf0  sub x0,x29,#0x60
71000facf4  add x1,sp,#0x8
71000facf8  bl 0x71000bcf30
71000facfc  ldur w8,[x29, #-0x60]
71000fad00  cbz w8,0x71000fad4c
71000fad04  mov w8,#0x12
71000fad08  add x0,x19,#0x220
71000fad0c  sub x1,x29,#0x60
71000fad10  strb w8,[x19, #0x130]
71000fad14  bl 0x71000bcf30
71000fad18  ldr x8,[x22]
71000fad1c  ldrb w9,[x8, #0x162]
71000fad20  cmp w9,#0x0
71000fad24  cset w9,eq
71000fad28  add x8,x8,w9, UXTW  #0x3
71000fad2c  ldr x0,[x8, #0x168]
71000fad30  bl 0x71000d8f90
71000fad34  adrp x8,0x71052a5000
71000fad38  ldr x8,[x8, #0x238]
71000fad3c  mov w0,#0x5
71000fad40  adrp x9,0x7104290000
71000fad44  add x9,x9,#0xd05
71000fad48  b 0x71000fad60
71000fad4c  adrp x8,0x71052a5000
71000fad50  ldr x8,[x8, #0x308]
71000fad54  mov x0,xzr
71000fad58  adrp x9,0x7104339000
71000fad5c  add x9,x9,#0x3fc
71000fad60  stp x8,xzr,[x19, #0x30]
71000fad64  str x9,[x19, #0x40]
71000fad68  b 0x71000fab60
