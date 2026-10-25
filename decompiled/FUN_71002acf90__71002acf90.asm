// addr:      71002acf90
// offset:    0x2acf90
// name:      FUN_71002acf90
// mangled:   
// size:      1028

71002acf90  str x28,[sp, #-0x60]!
71002acf94  stp x26,x25,[sp, #0x10]
71002acf98  stp x24,x23,[sp, #0x20]
71002acf9c  stp x22,x21,[sp, #0x30]
71002acfa0  stp x20,x19,[sp, #0x40]
71002acfa4  stp x29,x30,[sp, #0x50]
71002acfa8  add x29,sp,#0x50
71002acfac  sub sp,sp,#0x4c0
71002acfb0  mov x19,x0
71002acfb4  mov w8,#0x10000
71002acfb8  mov x20,x1
71002acfbc  str wzr,[x19, #0x38]!
71002acfc0  str x8,[sp, #0xa0]
71002acfc4  add x8,sp,#0xc0
71002acfc8  str xzr,[sp, #0x30]
71002acfcc  stp x8,xzr,[sp, #0xa8]
71002acfd0  mov x21,x0
71002acfd4  stp xzr,x8,[sp, #0x90]
71002acfd8  mov w8,#0x3e8
71002acfdc  add x0,sp,#0x30
71002acfe0  str wzr,[sp, #0x88]
71002acfe4  stp xzr,x8,[sp, #0xb8]
71002acfe8  add x8,sp,#0x98
71002acfec  stp x8,xzr,[sp, #0x48]
71002acff0  mov w8,#0x400
71002acff4  stp xzr,xzr,[sp, #0xc8]
71002acff8  stp xzr,xzr,[sp, #0x38]
71002acffc  strh wzr,[sp, #0x46]
71002ad000  stp xzr,xzr,[sp, #0x58]
71002ad004  stp xzr,xzr,[sp, #0x68]
71002ad008  stp xzr,x8,[sp, #0x78]
71002ad00c  ldr x8,[x1]
71002ad010  add x1,sp,#0x8
71002ad014  stp x8,x8,[sp, #0x8]
71002ad018  bl 0x71001ba380
71002ad01c  ldr w8,[sp, #0x88]
71002ad020  mov w22,wzr
71002ad024  cbz w8,0x71002ad0d8
71002ad028  ldr x19,[sp, #0x50]
71002ad02c  cbz x19,0x71002ad06c
71002ad030  ldr x0,[x19]
71002ad034  cbz x0,0x71002ad058
71002ad038  ldr x8,[x19, #0x10]
71002ad03c  cmp x8,x0
71002ad040  b.eq 0x71002ad1b4
71002ad044  ldr x20,[x0, #0x10]
71002ad048  bl 0x71001b1870
71002ad04c  mov x0,x20
71002ad050  str x20,[x19]
71002ad054  cbnz x20,0x71002ad038
71002ad058  ldr x0,[x19, #0x20]
71002ad05c  cbz x0,0x71002ad064
71002ad060  bl 0x71001b1870
71002ad064  mov x0,x19
71002ad068  bl 0x710353c3d0
71002ad06c  ldr x0,[sp, #0x68]
71002ad070  bl 0x71001b1870
71002ad074  ldr x0,[sp, #0x60]
71002ad078  cbz x0,0x71002ad080
71002ad07c  bl 0x71001b1870
71002ad080  ldr x0,[sp, #0x98]
71002ad084  cbz x0,0x71002ad0a8
71002ad088  ldr x8,[sp, #0xa8]
71002ad08c  cmp x8,x0
71002ad090  b.eq 0x71002ad1a4
71002ad094  ldr x19,[x0, #0x10]
71002ad098  bl 0x71001b1870
71002ad09c  mov x0,x19
71002ad0a0  str x19,[sp, #0x98]
71002ad0a4  cbnz x19,0x71002ad088
71002ad0a8  ldr x0,[sp, #0xb8]
71002ad0ac  cbz x0,0x71002ad0b4
71002ad0b0  bl 0x71001b1870
71002ad0b4  and w0,w22,#0x1
71002ad0b8  add sp,sp,#0x4c0
71002ad0bc  ldp x29,x30,[sp, #0x50]
71002ad0c0  ldp x20,x19,[sp, #0x40]
71002ad0c4  ldp x22,x21,[sp, #0x30]
71002ad0c8  ldp x24,x23,[sp, #0x20]
71002ad0cc  ldp x26,x25,[sp, #0x10]
71002ad0d0  ldr x28,[sp], #0x60
71002ad0d4  ret
71002ad0d8  adrp x8,0x710424e000
71002ad0dc  add x8,x8,#0xb25
71002ad0e0  ldr x22,[sp, #0x38]
71002ad0e4  stp xzr,x8,[sp, #0x8]
71002ad0e8  ldr w8,[sp, #0x30]
71002ad0ec  mov w23,#0x405
71002ad0f0  orr w9,wzr,#0x6
71002ad0f4  str xzr,[sp, #0x18]
71002ad0f8  strh w23,[sp, #0x1e]
71002ad0fc  str w9,[sp, #0x8]
71002ad100  cbz w8,0x71002ad1c4
71002ad104  mov w11,wzr
71002ad108  mov w10,#0x405
71002ad10c  orr w12,wzr,#0x6
71002ad110  mov w24,#0x15
71002ad114  add x25,sp,#0x8
71002ad118  orr w26,wzr,#0x30
71002ad11c  mov x9,x22
71002ad120  b 0x71002ad130
71002ad124  ldrh w10,[sp, #0x1e]
71002ad128  ldrb w11,[sp, #0x1d]
71002ad12c  ldr w12,[sp, #0x8]
71002ad130  sub w11,w24,w11, UXTB 
71002ad134  tst w10,#0x1000
71002ad138  csel w11,w12,w11,eq
71002ad13c  ldrh w12,[x22, #0x16]
71002ad140  ldrb w13,[x22, #0x15]
71002ad144  ldr w14,[x22]
71002ad148  sub w13,w24,w13
71002ad14c  tst w12,#0x1000
71002ad150  csel w13,w14,w13,eq
71002ad154  cmp w11,w13
71002ad158  b.ne 0x71002ad190
71002ad15c  ldr x13,[sp, #0x10]
71002ad160  tst w10,#0x1000
71002ad164  ldr x10,[x22, #0x8]
71002ad168  csel x0,x13,x25,eq
71002ad16c  tst w12,#0x1000
71002ad170  csel x1,x10,x22,eq
71002ad174  cmp x0,x1
71002ad178  b.eq 0x71002ad214
71002ad17c  mov w2,w11
71002ad180  bl 0x71039c0250
71002ad184  cbz w0,0x71002ad20c
71002ad188  ldr x9,[sp, #0x38]
71002ad18c  ldr w8,[sp, #0x30]
71002ad190  umaddl x10,w8,w26,x9
71002ad194  add x22,x22,#0x30
71002ad198  cmp x22,x10
71002ad19c  b.ne 0x71002ad124
71002ad1a0  b 0x71002ad214
71002ad1a4  str xzr,[x0, #0x8]
71002ad1a8  ldr x0,[sp, #0xb8]
71002ad1ac  cbnz x0,0x71002ad0b0
71002ad1b0  b 0x71002ad0b4
71002ad1b4  str xzr,[x0, #0x8]
71002ad1b8  ldr x0,[x19, #0x20]
71002ad1bc  cbnz x0,0x71002ad060
71002ad1c0  b 0x71002ad064
71002ad1c4  mov x9,x22
71002ad1c8  mov x10,x22
71002ad1cc  orr w11,wzr,#0x30
71002ad1d0  umaddl x11,w8,w11,x9
71002ad1d4  cmp x10,x11
71002ad1d8  b.eq 0x71002ad22c
71002ad1dc  ldrb w11,[x10, #0x2e]
71002ad1e0  tbz w11,#0x4,0x71002ad22c
71002ad1e4  ldr x10,[x10, #0x18]
71002ad1e8  str x10,[x21, #0x8]
71002ad1ec  cbz x10,0x71002ad23c
71002ad1f0  mov x0,x21
71002ad1f4  mov x1,x20
71002ad1f8  bl 0x71002ac940
71002ad1fc  mov w22,w0
71002ad200  ldr x19,[sp, #0x50]
71002ad204  cbnz x19,0x71002ad030
71002ad208  b 0x71002ad06c
71002ad20c  ldr x9,[sp, #0x38]
71002ad210  ldr w8,[sp, #0x30]
71002ad214  mov x10,x22
71002ad218  mov x22,x9
71002ad21c  orr w11,wzr,#0x30
71002ad220  umaddl x11,w8,w11,x9
71002ad224  cmp x10,x11
71002ad228  b.ne 0x71002ad1dc
71002ad22c  mov w22,wzr
71002ad230  ldr x19,[sp, #0x50]
71002ad234  cbnz x19,0x71002ad030
71002ad238  b 0x71002ad06c
71002ad23c  adrp x10,0x7104421000
71002ad240  add x10,x10,#0x84c
71002ad244  str xzr,[sp, #0x18]
71002ad248  stp xzr,x10,[sp, #0x8]
71002ad24c  orr w10,wzr,#0x6
71002ad250  strh w23,[sp, #0x1e]
71002ad254  str w10,[sp, #0x8]
71002ad258  cbz w8,0x71002ad308
71002ad25c  mov w12,wzr
71002ad260  mov w10,#0x405
71002ad264  orr w13,wzr,#0x6
71002ad268  mov w20,#0x15
71002ad26c  add x21,sp,#0x8
71002ad270  orr w23,wzr,#0x30
71002ad274  mov x11,x22
71002ad278  b 0x71002ad288
71002ad27c  ldrh w10,[sp, #0x1e]
71002ad280  ldrb w12,[sp, #0x1d]
71002ad284  ldr w13,[sp, #0x8]
71002ad288  sub w12,w20,w12, UXTB 
71002ad28c  tst w10,#0x1000
71002ad290  csel w12,w13,w12,eq
71002ad294  ldrh w13,[x22, #0x16]
71002ad298  ldrb w14,[x22, #0x15]
71002ad29c  ldr w15,[x22]
71002ad2a0  sub w14,w20,w14
71002ad2a4  tst w13,#0x1000
71002ad2a8  csel w14,w15,w14,eq
71002ad2ac  cmp w12,w14
71002ad2b0  b.ne 0x71002ad2ec
71002ad2b4  ldr x11,[sp, #0x10]
71002ad2b8  tst w10,#0x1000
71002ad2bc  ldr x10,[x22, #0x8]
71002ad2c0  csel x0,x11,x21,eq
71002ad2c4  tst w13,#0x1000
71002ad2c8  csel x1,x10,x22,eq
71002ad2cc  cmp x0,x1
71002ad2d0  b.eq 0x71002ad308
71002ad2d4  mov w2,w12
71002ad2d8  bl 0x71039c0250
71002ad2dc  cbz w0,0x71002ad300
71002ad2e0  ldr x9,[sp, #0x38]
71002ad2e4  ldr w8,[sp, #0x30]
71002ad2e8  mov x11,x9
71002ad2ec  umaddl x10,w8,w23,x11
71002ad2f0  add x22,x22,#0x30
71002ad2f4  cmp x22,x10
71002ad2f8  b.ne 0x71002ad27c
71002ad2fc  b 0x71002ad308
71002ad300  ldr x9,[sp, #0x38]
71002ad304  ldr w8,[sp, #0x30]
71002ad308  orr w10,wzr,#0x30
71002ad30c  umaddl x8,w8,w10,x9
71002ad310  cmp x22,x8
71002ad314  b.eq 0x71002ad22c
71002ad318  ldrh w8,[x22, #0x2e]
71002ad31c  cmp w8,#0x3
71002ad320  b.ne 0x71002ad22c
71002ad324  adrp x8,0x71052a4000
71002ad328  ldr x8,[x8, #0xd80]
71002ad32c  strb wzr,[sp, #0x10]
71002ad330  add x21,x8,#0x10
71002ad334  add x8,sp,#0x8
71002ad338  add x8,x8,#0x8
71002ad33c  str x8,[sp, #0x20]
71002ad340  mov w8,#0x10
71002ad344  adrp x1,0x710425e000
71002ad348  add x1,x1,#0x88b
71002ad34c  mov x2,#-0x1
71002ad350  add x0,sp,#0x8
71002ad354  add x20,x22,#0x18
71002ad358  str x21,[sp, #0x8]
71002ad35c  str x8,[sp, #0x28]
71002ad360  bl 0x71001b47e0
71002ad364  add x0,sp,#0x30
71002ad368  add x2,sp,#0x8
71002ad36c  mov x1,x20
71002ad370  mov x3,x19
71002ad374  bl 0x71002accf0
71002ad378  mov w22,w0
71002ad37c  add x0,sp,#0x8
71002ad380  str x21,[sp, #0x8]
71002ad384  bl 0x71001b4910
71002ad388  ldr x19,[sp, #0x50]
71002ad38c  cbnz x19,0x71002ad030
71002ad390  b 0x71002ad06c
