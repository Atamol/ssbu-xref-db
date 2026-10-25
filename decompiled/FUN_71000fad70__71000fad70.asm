// addr:      71000fad70
// offset:    0xfad70
// name:      FUN_71000fad70
// mangled:   
// size:      912

71000fad70  sub sp,sp,#0x180
71000fad74  str x28,[sp, #0x120]
71000fad78  stp x26,x25,[sp, #0x130]
71000fad7c  stp x24,x23,[sp, #0x140]
71000fad80  stp x22,x21,[sp, #0x150]
71000fad84  stp x20,x19,[sp, #0x160]
71000fad88  stp x29,x30,[sp, #0x170]
71000fad8c  add x29,sp,#0x170
71000fad90  adrp x22,0x71052a5000
71000fad94  ldr x22,[x22, #0x80]
71000fad98  mov x19,x0
71000fad9c  ldr x0,[x22]
71000fada0  bl 0x7100146ba0
71000fada4  sub w8,w0,#0x5
71000fada8  cmp w8,#0x3
71000fadac  b.hi 0x71000fadd4
71000fadb0  adrp x9,0x7104496000
71000fadb4  add x9,x9,#0x31c
71000fadb8  ldrsw x8,[x9, x8, LSL #0x2]
71000fadbc  add x8,x8,x9
71000fadc0  br x8
71000fadc4  mov w8,#0x1
71000fadc8  orr w9,wzr,#0x3
71000fadcc  mov w10,#0xc406
71000fadd0  b 0x71000fae88
71000fadd4  adrp x8,0x71052a4000
71000fadd8  ldr x8,[x8, #0xdf0]
71000faddc  ldr x0,[x8]
71000fade0  add x8,sp,#0x18
71000fade4  bl 0x7100192e90
71000fade8  ldr w8,[sp, #0x18]
71000fadec  cbnz w8,0x71000fae00
71000fadf0  ldr x0,[x22]
71000fadf4  bl 0x7100146ba0
71000fadf8  cmp w0,#0x4
71000fadfc  b.ne 0x71000faf10
71000fae00  mov w8,#0x6c59
71000fae04  str w8,[sp, #0x18]
71000fae08  add x8,sp,#0x18
71000fae0c  orr x20,x8,#0x4
71000fae10  mov x0,x20
71000fae14  bl 0x71039c0a80
71000fae18  sub x1,x29,#0x60
71000fae1c  mov x0,x20
71000fae20  stur wzr,[x29, #-0x60]
71000fae24  bl 0x71039c0a90
71000fae28  add x0,x19,#0x220
71000fae2c  add x1,sp,#0x18
71000fae30  bl 0x71000bcf30
71000fae34  adrp x8,0x71052a5000
71000fae38  ldr x8,[x8, #0x238]
71000fae3c  mov w9,#0x4
71000fae40  strb w9,[x19, #0x130]
71000fae44  adrp x9,0x7104290000
71000fae48  add x9,x9,#0xd05
71000fae4c  stp x8,xzr,[x19, #0x30]
71000fae50  mov w0,#0x5
71000fae54  str x9,[x19, #0x40]
71000fae58  b 0x71000faef0
71000fae5c  mov w8,#0x1
71000fae60  orr w9,wzr,#0x3
71000fae64  mov w10,#0xa471
71000fae68  b 0x71000fae88
71000fae6c  mov w8,#0x1
71000fae70  orr w9,wzr,#0x3
71000fae74  mov w10,#0xc420
71000fae78  b 0x71000fae88
71000fae7c  mov w8,#0x1
71000fae80  orr w9,wzr,#0x3
71000fae84  mov w10,#0xc421
71000fae88  strb w8,[x19, #0xfa]
71000fae8c  add x8,sp,#0x18
71000fae90  orr x20,x8,#0x4
71000fae94  mov x0,x20
71000fae98  strb w9,[x19, #0x130]
71000fae9c  str w10,[sp, #0x18]
71000faea0  bl 0x71039c0a80
71000faea4  sub x1,x29,#0x60
71000faea8  mov x0,x20
71000faeac  stur wzr,[x29, #-0x60]
71000faeb0  bl 0x71039c0a90
71000faeb4  add x0,x19,#0x220
71000faeb8  add x1,sp,#0x18
71000faebc  bl 0x71000bcf30
71000faec0  ldr x8,[x22]
71000faec4  ldr x0,[x8, #0x8]
71000faec8  ldr x8,[x0]
71000faecc  ldr x8,[x8, #0x28]
71000faed0  blr x8
71000faed4  adrp x8,0x71052a5000
71000faed8  ldr x8,[x8, #0x240]
71000faedc  mov x0,xzr
71000faee0  stp x8,xzr,[x19, #0x30]
71000faee4  adrp x8,0x71043ac000
71000faee8  add x8,x8,#0x982
71000faeec  str x8,[x19, #0x40]
71000faef0  ldp x29,x30,[sp, #0x170]
71000faef4  ldr x28,[sp, #0x120]
71000faef8  ldp x20,x19,[sp, #0x160]
71000faefc  ldp x22,x21,[sp, #0x150]
71000faf00  ldp x24,x23,[sp, #0x140]
71000faf04  ldp x26,x25,[sp, #0x130]
71000faf08  add sp,sp,#0x180
71000faf0c  ret
71000faf10  ldrb w8,[x19, #0xfb]
71000faf14  cbz w8,0x71000faf34
71000faf18  add x1,x19,#0x100
71000faf1c  add x0,x19,#0x220
71000faf20  bl 0x71000bcf30
71000faf24  adrp x8,0x71052a5000
71000faf28  ldr x8,[x8, #0x238]
71000faf2c  orr w9,wzr,#0x6
71000faf30  b 0x71000fae40
71000faf34  ldr x0,[x19, #0x58]
71000faf38  cbz x0,0x71000faf88
71000faf3c  ldrb w8,[x0, #0x28]
71000faf40  cbz w8,0x71000faf88
71000faf44  ldr w8,[x0]
71000faf48  sub w8,w8,#0x2
71000faf4c  cmp w8,#0x3
71000faf50  b.cc 0x71000faf58
71000faf54  bl 0x71000b4260
71000faf58  str xzr,[x19, #0x58]
71000faf5c  ldr x8,[x22]
71000faf60  ldrb w9,[x8, #0x162]
71000faf64  cmp w9,#0x0
71000faf68  cset w9,eq
71000faf6c  add x8,x8,w9, UXTW  #0x3
71000faf70  ldr x0,[x8, #0x168]
71000faf74  bl 0x71000d8f90
71000faf78  mov x0,x19
71000faf7c  bl 0x7100140910
71000faf80  mov w0,#0x1
71000faf84  b 0x71000faef0
71000faf88  ldr x23,[x22]
71000faf8c  ldrb w8,[x23, #0x162]
71000faf90  cmp w8,#0x0
71000faf94  cset w8,eq
71000faf98  add x8,x23,w8, UXTW  #0x3
71000faf9c  ldr x20,[x8, #0x168]
71000fafa0  sub x8,x29,#0x60
71000fafa4  orr x21,x8,#0x4
71000fafa8  mov x0,x21
71000fafac  stur wzr,[x29, #-0x60]
71000fafb0  bl 0x71039c0a80
71000fafb4  add x1,sp,#0x18
71000fafb8  mov x0,x21
71000fafbc  str wzr,[sp, #0x18]
71000fafc0  add x24,sp,#0x18
71000fafc4  bl 0x71039c0a90
71000fafc8  stp xzr,xzr,[sp, #0x100]
71000fafcc  add x25,x19,#0xa8
71000fafd0  stp xzr,xzr,[sp, #0xf0]
71000fafd4  str xzr,[sp, #0x18]
71000fafd8  stp xzr,xzr,[sp, #0xe0]
71000fafdc  stp xzr,xzr,[sp, #0xd0]
71000fafe0  stp xzr,xzr,[sp, #0xc0]
71000fafe4  stp xzr,xzr,[sp, #0xb0]
71000fafe8  stp xzr,xzr,[sp, #0xa0]
71000fafec  stp xzr,xzr,[sp, #0x90]
71000faff0  stp xzr,xzr,[sp, #0x80]
71000faff4  stp xzr,xzr,[sp, #0x70]
71000faff8  stp xzr,xzr,[sp, #0x60]
71000faffc  stp xzr,xzr,[sp, #0x50]
71000fb000  stp xzr,xzr,[sp, #0x40]
71000fb004  stp xzr,xzr,[sp, #0x30]
71000fb008  stp xzr,xzr,[sp, #0x20]
71000fb00c  ldr x26,[x19, #0xb0]
71000fb010  cmp x26,x25
71000fb014  b.eq 0x71000fb054
71000fb018  mov w21,wzr
71000fb01c  ldr x1,[x26, #0x10]
71000fb020  ldr x8,[x19, #0xa0]
71000fb024  cmp x1,x8
71000fb028  b.eq 0x71000fb044
71000fb02c  ldr x0,[x23, #0xb8]
71000fb030  bl 0x7100150680
71000fb034  tbz w0,#0x0,0x71000fb044
71000fb038  ldr x8,[x26, #0x10]
71000fb03c  str x8,[x24, w21, UXTW #0x3]
71000fb040  add w21,w21,#0x1
71000fb044  ldr x26,[x26, #0x8]
71000fb048  cmp x26,x25
71000fb04c  b.ne 0x71000fb01c
71000fb050  b 0x71000fb058
71000fb054  mov w21,wzr
71000fb058  ldr x8,[x22]
71000fb05c  ldrb w9,[x8, #0x162]
71000fb060  add x8,x8,x9, LSL #0x2
71000fb064  ldr w5,[x8, #0x180]
71000fb068  ldr w2,[x19, #0xf0]
71000fb06c  add x1,x19,#0x60
71000fb070  add x8,sp,#0x8
71000fb074  add x3,sp,#0x18
71000fb078  mov x0,x20
71000fb07c  mov w4,w21
71000fb080  bl 0x71000df5d0
71000fb084  sub x0,x29,#0x60
71000fb088  add x1,sp,#0x8
71000fb08c  bl 0x71000bcf30
71000fb090  ldur w8,[x29, #-0x60]
71000fb094  cbz w8,0x71000fb0e0
71000fb098  mov w8,#0x13
71000fb09c  add x0,x19,#0x220
71000fb0a0  sub x1,x29,#0x60
71000fb0a4  strb w8,[x19, #0x130]
71000fb0a8  bl 0x71000bcf30
71000fb0ac  ldr x8,[x22]
71000fb0b0  ldrb w9,[x8, #0x162]
71000fb0b4  cmp w9,#0x0
71000fb0b8  cset w9,eq
71000fb0bc  add x8,x8,w9, UXTW  #0x3
71000fb0c0  ldr x0,[x8, #0x168]
71000fb0c4  bl 0x71000d8f90
71000fb0c8  adrp x8,0x71052a5000
71000fb0cc  ldr x8,[x8, #0x238]
71000fb0d0  mov w0,#0x5
71000fb0d4  adrp x9,0x7104290000
71000fb0d8  add x9,x9,#0xd05
71000fb0dc  b 0x71000fb0f4
71000fb0e0  adrp x8,0x71052a5000
71000fb0e4  ldr x8,[x8, #0x310]
71000fb0e8  mov x0,xzr
71000fb0ec  adrp x9,0x7104421000
71000fb0f0  add x9,x9,#0x550
71000fb0f4  stp x8,xzr,[x19, #0x30]
71000fb0f8  str x9,[x19, #0x40]
71000fb0fc  b 0x71000faef0
