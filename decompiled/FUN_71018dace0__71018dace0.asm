// addr:      71018dace0
// offset:    0x18dace0
// name:      FUN_71018dace0
// mangled:   
// size:      6580

71018dace0  str d14,[sp, #-0xa0]!
71018dace4  stp d13,d12,[sp, #0x10]
71018dace8  stp d11,d10,[sp, #0x20]
71018dacec  stp d9,d8,[sp, #0x30]
71018dacf0  stp x28,x27,[sp, #0x40]
71018dacf4  stp x26,x25,[sp, #0x50]
71018dacf8  stp x24,x23,[sp, #0x60]
71018dacfc  stp x22,x21,[sp, #0x70]
71018dad00  stp x20,x19,[sp, #0x80]
71018dad04  stp x29,x30,[sp, #0x90]
71018dad08  add x29,sp,#0x90
71018dad0c  sub sp,sp,#0x5c0
71018dad10  mov x19,x0
71018dad14  mov w0,#0x10
71018dad18  orr w1,wzr,#0xf8
71018dad1c  bl 0x710392e290
71018dad20  mov x21,x0
71018dad24  cbnz x0,0x71018dad70
71018dad28  adrp x8,0x7105332000
71018dad2c  ldr x0,[x8, #0xf00]
71018dad30  cbz x0,0x71018dad6c
71018dad34  orr w8,wzr,#0xf8
71018dad38  str wzr,[sp, #0x2a0]
71018dad3c  add x1,sp,#0x2a0
71018dad40  str x8,[sp, #0x3d0]
71018dad44  ldr x8,[x0]
71018dad48  ldr x8,[x8, #0x30]
71018dad4c  add x2,sp,#0x3d0
71018dad50  blr x8
71018dad54  tbz w0,#0x0,0x71018dad6c
71018dad58  mov w0,#0x10
71018dad5c  orr w1,wzr,#0xf8
71018dad60  bl 0x710392e290
71018dad64  mov x21,x0
71018dad68  cbnz x0,0x71018dad70
71018dad6c  mov x21,xzr
71018dad70  mov w22,#0xffffffff
71018dad74  mov w0,#0x10
71018dad78  mov w1,#0x80
71018dad7c  stp xzr,xzr,[x21, #0x10]
71018dad80  str w22,[x21, #0xc0]
71018dad84  stp x21,xzr,[x21]
71018dad88  strb wzr,[x21, #0xc4]
71018dad8c  stp xzr,x22,[x21, #0xb0]
71018dad90  stp xzr,xzr,[x21, #0xa0]
71018dad94  stp xzr,xzr,[x21, #0x90]
71018dad98  stp xzr,xzr,[x21, #0x80]
71018dad9c  stp xzr,xzr,[x21, #0x70]
71018dada0  stp xzr,xzr,[x21, #0x60]
71018dada4  stp xzr,xzr,[x21, #0x50]
71018dada8  stp xzr,xzr,[x21, #0x40]
71018dadac  stp xzr,xzr,[x21, #0x30]
71018dadb0  stp xzr,xzr,[x21, #0x20]
71018dadb4  bl 0x710392e290
71018dadb8  cbnz x0,0x71018dae00
71018dadbc  adrp x8,0x7105332000
71018dadc0  ldr x0,[x8, #0xf00]
71018dadc4  cbz x0,0x71018dadfc
71018dadc8  mov w8,#0x80
71018dadcc  str wzr,[sp, #0x2a0]
71018dadd0  add x1,sp,#0x2a0
71018dadd4  str x8,[sp, #0x3d0]
71018dadd8  ldr x8,[x0]
71018daddc  ldr x8,[x8, #0x30]
71018dade0  add x2,sp,#0x3d0
71018dade4  blr x8
71018dade8  tbz w0,#0x0,0x71018dadfc
71018dadec  mov w0,#0x10
71018dadf0  mov w1,#0x80
71018dadf4  bl 0x710392e290
71018dadf8  cbnz x0,0x71018dae00
71018dadfc  mov x0,xzr
71018dae00  adrp x8,0x7105181000
71018dae04  add x8,x8,#0xb40
71018dae08  str x8,[x0]
71018dae0c  mov x8,x0
71018dae10  str xzr,[x8, #0x10]!
71018dae14  str x8,[x0, #0x8]
71018dae18  mov x8,x0
71018dae1c  str xzr,[x8, #0x28]!
71018dae20  stp xzr,x8,[x0, #0x18]
71018dae24  mov x8,x0
71018dae28  str xzr,[x8, #0x40]!
71018dae2c  stp xzr,x8,[x0, #0x30]
71018dae30  mov x8,x0
71018dae34  str xzr,[x8, #0x58]!
71018dae38  stp xzr,x8,[x0, #0x48]
71018dae3c  mov w8,#0x2
71018dae40  str xzr,[x0, #0x60]
71018dae44  str w8,[x0, #0x68]
71018dae48  adrp x8,0x710532f000
71018dae4c  str wzr,[x0, #0x78]
71018dae50  str xzr,[x0, #0x70]
71018dae54  str x0,[x21, #0xc8]
71018dae58  ldr x8,[x8, #0x840]
71018dae5c  ldr x9,[x8, #0x8]
71018dae60  ldr x9,[x9, #0xb8]
71018dae64  str x9,[x21, #0xd0]
71018dae68  ldr x8,[x8, #0x8]
71018dae6c  ldr x8,[x8, #0xc0]
71018dae70  mov x0,x21
71018dae74  str wzr,[x21, #0xf0]
71018dae78  str x8,[x21, #0xd8]
71018dae7c  stp xzr,xzr,[x21, #0xe0]
71018dae80  bl 0x71018d9d00
71018dae84  adrp x8,0x71018da000
71018dae88  add x8,x8,#0x200
71018dae8c  adrp x9,0x71018da000
71018dae90  add x9,x9,#0x350
71018dae94  stp x8,xzr,[x21, #0x28]
71018dae98  adrp x8,0x71018da000
71018dae9c  add x8,x8,#0xb20
71018daea0  stp x8,xzr,[x21, #0x48]
71018daea4  ldrsw x8,[x21, #0xb4]
71018daea8  stp x9,xzr,[x21, #0x38]
71018daeac  adrp x9,0x71018da000
71018daeb0  add x9,x9,#0xba0
71018daeb4  stp x9,xzr,[x21, #0x58]
71018daeb8  cmp w8,#0x13
71018daebc  b.cs 0x71018dc690
71018daec0  add x8,x21,x8, LSL #0x2
71018daec4  str wzr,[x8, #0x68]
71018daec8  ldr x20,[x19, #0x58]
71018daecc  str x21,[x19, #0x58]
71018daed0  cbz x20,0x71018daf5c
71018daed4  ldr x0,[x20, #0xe0]
71018daed8  ldr x8,[x0, #0x80]
71018daedc  ldr w8,[x8, #0x138]
71018daee0  cmp w8,#0x2
71018daee4  b.eq 0x71018daf24
71018daee8  adrp x8,0x7105314000
71018daeec  ldr x8,[x8, #0x510]
71018daef0  ldr x8,[x8]
71018daef4  ldp w9,w10,[x20, #0xec]
71018daef8  ldr x8,[x8, #0x78]
71018daefc  ldr x8,[x8]
71018daf00  ldr x11,[x8]
71018daf04  mov w12,#0xe062
71018daf08  movk w12,#0x5, LSL #16
71018daf0c  strb w10,[x11, x12, LSL ]
71018daf10  ldr x8,[x8]
71018daf14  mov w10,#0xe063
71018daf18  movk w10,#0x5, LSL #16
71018daf1c  strb w9,[x8, x10, LSL ]
71018daf20  ldr x0,[x20, #0xe0]
71018daf24  str xzr,[x20, #0xe0]
71018daf28  cbz x0,0x71018daf30
71018daf2c  bl 0x71032cad20
71018daf30  ldr x0,[x20, #0xc8]
71018daf34  bl 0x710323b9e0
71018daf38  ldr x0,[x20, #0xc8]
71018daf3c  str xzr,[x20, #0xc8]
71018daf40  cbz x0,0x71018daf50
71018daf44  ldr x8,[x0]
71018daf48  ldr x8,[x8, #0x8]
71018daf4c  blr x8
71018daf50  mov x0,x20
71018daf54  bl 0x710392eb40
71018daf58  ldr x21,[x19, #0x58]
71018daf5c  str x21,[sp, #0x10]
71018daf60  mov x23,x21
71018daf64  adrp x1,0x7104545000
71018daf68  add x1,x1,#0x6b0
71018daf6c  ldr x0,[x23, #0xc8]!
71018daf70  ldrsw x2,[x0, #0x70]
71018daf74  ldr w3,[x0, #0x68]
71018daf78  mov w4,wzr
71018daf7c  bl 0x710323beb0
71018daf80  adrp x0,0x7104308000
71018daf84  add x0,x0,#0x7c6
71018daf88  mov w1,wzr
71018daf8c  bl 0x710323af70
71018daf90  tst x0,#0xffffffffff
71018daf94  str x0,[sp, #0x3d0]
71018daf98  b.eq 0x71018dafb0
71018daf9c  ldr x0,[x23]
71018dafa0  ldrsw x2,[x0, #0x70]
71018dafa4  ldr w3,[x0, #0x68]
71018dafa8  add x1,sp,#0x3d0
71018dafac  bl 0x710323c4e0
71018dafb0  adrp x0,0x7104433000
71018dafb4  add x0,x0,#0x480
71018dafb8  mov w1,wzr
71018dafbc  bl 0x710323af70
71018dafc0  tst x0,#0xffffffffff
71018dafc4  str x0,[sp, #0x3d0]
71018dafc8  b.eq 0x71018dafe0
71018dafcc  ldr x0,[x23]
71018dafd0  ldrsw x2,[x0, #0x70]
71018dafd4  ldr w3,[x0, #0x68]
71018dafd8  add x1,sp,#0x3d0
71018dafdc  bl 0x710323c4e0
71018dafe0  ldr x19,[x23]
71018dafe4  mov x0,x19
71018dafe8  bl 0x710323cb80
71018dafec  tbnz w0,#0x0,0x71018db00c
71018daff0  mov w20,#0x4240
71018daff4  movk w20,#0xf, LSL #16
71018daff8  mov x0,x20
71018daffc  bl 0x71039c0d80
71018db000  mov x0,x19
71018db004  bl 0x710323cb80
71018db008  tbz w0,#0x0,0x71018daff8
71018db00c  mov w1,#0x88
71018db010  mov w0,#0x10
71018db014  bl 0x710392e290
71018db018  mov x26,x0
71018db01c  cbnz x0,0x71018db068
71018db020  adrp x8,0x7105332000
71018db024  ldr x0,[x8, #0xf00]
71018db028  cbz x0,0x71018db064
71018db02c  mov w8,#0x88
71018db030  str wzr,[sp, #0x2a0]
71018db034  add x1,sp,#0x2a0
71018db038  str x8,[sp, #0x3d0]
71018db03c  ldr x8,[x0]
71018db040  ldr x8,[x8, #0x30]
71018db044  add x2,sp,#0x3d0
71018db048  blr x8
71018db04c  tbz w0,#0x0,0x71018db064
71018db050  mov w1,#0x88
71018db054  mov w0,#0x10
71018db058  bl 0x710392e290
71018db05c  mov x26,x0
71018db060  cbnz x0,0x71018db068
71018db064  mov x26,xzr
71018db068  adrp x8,0x71050af000
71018db06c  add x8,x8,#0x8c0
71018db070  mov w1,#0x188
71018db074  stp x8,xzr,[x26]
71018db078  orr x8,xzr,#0x1ffffffff
71018db07c  stp xzr,x8,[x26, #0x60]
71018db080  mov w8,#0x1
71018db084  mov w0,#0x10
71018db088  stp xzr,xzr,[x26, #0x10]
71018db08c  strb wzr,[x26, #0x58]
71018db090  str x23,[x26, #0x78]
71018db094  strb w8,[x26, #0x70]
71018db098  stp xzr,xzr,[x26, #0x48]
71018db09c  bl 0x710392e290
71018db0a0  mov x21,x0
71018db0a4  cbnz x0,0x71018db0f0
71018db0a8  adrp x8,0x7105332000
71018db0ac  ldr x0,[x8, #0xf00]
71018db0b0  cbz x0,0x71018db0ec
71018db0b4  mov w8,#0x188
71018db0b8  str wzr,[sp, #0x2a0]
71018db0bc  add x1,sp,#0x2a0
71018db0c0  str x8,[sp, #0x3d0]
71018db0c4  ldr x8,[x0]
71018db0c8  ldr x8,[x8, #0x30]
71018db0cc  add x2,sp,#0x3d0
71018db0d0  blr x8
71018db0d4  tbz w0,#0x0,0x71018db0ec
71018db0d8  mov w1,#0x188
71018db0dc  mov w0,#0x10
71018db0e0  bl 0x710392e290
71018db0e4  mov x21,x0
71018db0e8  cbnz x0,0x71018db0f0
71018db0ec  mov x21,xzr
71018db0f0  mov x20,x21
71018db0f4  mov w0,#0x10
71018db0f8  mov w1,#0x8
71018db0fc  str x21,[x21]
71018db100  str xzr,[x21, #0x20]
71018db104  str xzr,[x20, #0x8]!
71018db108  stp xzr,xzr,[x21, #0x10]
71018db10c  str w22,[x21, #0x120]
71018db110  strb wzr,[x21, #0x124]
71018db114  str xzr,[x21, #0x28]
71018db118  str x23,[x21, #0x128]
71018db11c  stp xzr,x22,[x21, #0x110]
71018db120  stp xzr,xzr,[x21, #0x100]
71018db124  stp xzr,xzr,[x21, #0xf0]
71018db128  stp xzr,xzr,[x21, #0xe0]
71018db12c  stp xzr,xzr,[x21, #0xd0]
71018db130  stp xzr,xzr,[x21, #0xc0]
71018db134  stp xzr,xzr,[x21, #0xb0]
71018db138  stp xzr,xzr,[x21, #0xa0]
71018db13c  stp xzr,xzr,[x21, #0x90]
71018db140  stp xzr,xzr,[x21, #0x80]
71018db144  stp xzr,xzr,[x21, #0x70]
71018db148  stp xzr,xzr,[x21, #0x60]
71018db14c  stp xzr,xzr,[x21, #0x50]
71018db150  stp xzr,xzr,[x21, #0x40]
71018db154  stp xzr,xzr,[x21, #0x30]
71018db158  bl 0x710392e290
71018db15c  mov x19,x0
71018db160  cbnz x0,0x71018db1ac
71018db164  adrp x8,0x7105332000
71018db168  ldr x0,[x8, #0xf00]
71018db16c  cbz x0,0x71018db1a8
71018db170  mov w8,#0x8
71018db174  str wzr,[sp, #0x2a0]
71018db178  add x1,sp,#0x2a0
71018db17c  str x8,[sp, #0x3d0]
71018db180  ldr x8,[x0]
71018db184  ldr x8,[x8, #0x30]
71018db188  add x2,sp,#0x3d0
71018db18c  blr x8
71018db190  tbz w0,#0x0,0x71018db1a8
71018db194  mov w0,#0x10
71018db198  mov w1,#0x8
71018db19c  bl 0x710392e290
71018db1a0  mov x19,x0
71018db1a4  cbnz x0,0x71018db1ac
71018db1a8  mov x19,xzr
71018db1ac  mov x0,x19
71018db1b0  add x27,x21,#0x130
71018db1b4  bl 0x7103773200
71018db1b8  mov w0,#0x10
71018db1bc  mov w1,#0x8
71018db1c0  str x19,[x21, #0x130]
71018db1c4  str wzr,[x21, #0x138]
71018db1c8  bl 0x710392e290
71018db1cc  cbnz x0,0x71018db204
71018db1d0  adrp x8,0x7105332000
71018db1d4  ldr x0,[x8, #0xf00]
71018db1d8  mov w8,#0x8
71018db1dc  str wzr,[sp, #0x2a0]
71018db1e0  add x1,sp,#0x2a0
71018db1e4  str x8,[sp, #0x3d0]
71018db1e8  ldr x8,[x0]
71018db1ec  ldr x8,[x8, #0x30]
71018db1f0  add x2,sp,#0x3d0
71018db1f4  blr x8
71018db1f8  mov w0,#0x10
71018db1fc  mov w1,#0x8
71018db200  bl 0x710392e290
71018db204  add x8,x21,#0x165
71018db208  str xzr,[x0]
71018db20c  str xzr,[x21, #0x150]
71018db210  stp x0,xzr,[x21, #0x140]
71018db214  adrp x9,0x7101d55000
71018db218  add x9,x9,#0x830
71018db21c  mov x0,x21
71018db220  add x22,sp,#0x500
71018db224  str xzr,[x8]
71018db228  mov w8,#0x1
71018db22c  str w8,[x21, #0x170]
71018db230  mov x8,#0xff0000000000
71018db234  movk x8,#0x58ff, LSL #48
71018db238  str x8,[x21, #0x178]
71018db23c  strb wzr,[x21, #0x184]
71018db240  str wzr,[x21, #0x180]
71018db244  stp xzr,xzr,[x21, #0x158]
71018db248  str x21,[x26, #0x80]
71018db24c  ldr x8,[x21, #0x130]
71018db250  ldr x23,[x8]
71018db254  adrp x8,0x7101d55000
71018db258  add x8,x8,#0x770
71018db25c  stp x8,xzr,[x21, #0x28]
71018db260  adrp x8,0x7101d55000
71018db264  add x8,x8,#0x780
71018db268  stp x9,xzr,[x21, #0x48]
71018db26c  adrp x9,0x7101d55000
71018db270  add x9,x9,#0x9f0
71018db274  stp x8,xzr,[x21, #0x38]
71018db278  adrp x8,0x7101d55000
71018db27c  add x8,x8,#0x9d0
71018db280  stp x8,xzr,[x21, #0x58]
71018db284  adrp x8,0x7101d55000
71018db288  add x8,x8,#0x9e0
71018db28c  stp x8,xzr,[x21, #0x68]
71018db290  adrp x8,0x7101d55000
71018db294  add x8,x8,#0xb50
71018db298  stp x8,xzr,[x21, #0x88]
71018db29c  adrp x8,0x7101d55000
71018db2a0  add x8,x8,#0xbd0
71018db2a4  stp x8,xzr,[x21, #0x98]
71018db2a8  adrp x8,0x7101d55000
71018db2ac  add x8,x8,#0xfc0
71018db2b0  stp x9,xzr,[x21, #0x78]
71018db2b4  adrp x9,0x7101d55000
71018db2b8  add x9,x9,#0xf30
71018db2bc  stp x8,xzr,[x21, #0xb8]
71018db2c0  add x8,x21,#0x10c
71018db2c4  stp x9,xzr,[x21, #0xa8]
71018db2c8  orr x9,xzr,#-0x100000000
71018db2cc  stp xzr,xzr,[x20]
71018db2d0  str xzr,[x8]
71018db2d4  add x8,x21,#0x104
71018db2d8  str xzr,[x8]
71018db2dc  add x8,x21,#0x114
71018db2e0  str x9,[x8]
71018db2e4  add x8,x21,#0x11c
71018db2e8  stur xzr,[x21, #0xfc]
71018db2ec  stur xzr,[x21, #0xf4]
71018db2f0  stur xzr,[x21, #0xec]
71018db2f4  stur xzr,[x21, #0xe4]
71018db2f8  stur xzr,[x21, #0xdc]
71018db2fc  stur xzr,[x21, #0xd4]
71018db300  stur xzr,[x21, #0xcc]
71018db304  str x9,[x8]
71018db308  strb wzr,[x21, #0x124]
71018db30c  str wzr,[x21, #0xc8]
71018db310  bl 0x7101d55fd0
71018db314  ldr x8,[x21, #0x128]
71018db318  ldr x1,[x8]
71018db31c  adrp x2,0x7104545000
71018db320  add x2,x2,#0x6b0
71018db324  mov w3,#0x1
71018db328  mov x0,x27
71018db32c  bl 0x71032cbf30
71018db330  ldr x8,[x21, #0x130]
71018db334  ldr x8,[x8]
71018db338  add x0,x8,#0x8
71018db33c  adrp x1,0x7104421000
71018db340  add x1,x1,#0x55
71018db344  add x8,sp,#0x3d0
71018db348  bl 0x71037780e0
71018db34c  ldr x19,[sp, #0x3d8]
71018db350  ldr x20,[x19, #0x8]
71018db354  cbz x20,0x71018db448
71018db358  ldrb w8,[x19, #0x10]
71018db35c  cbz w8,0x71018db424
71018db360  ldr x8,[x19]
71018db364  ldr x25,[x8, #0x80]
71018db368  add x24,x8,#0x88
71018db36c  cmp x25,x24
71018db370  b.eq 0x71018db424
71018db374  ldr x0,[x25, #0x68]
71018db378  ldr x8,[x0]
71018db37c  ldr x8,[x8, #0x148]
71018db380  blr x8
71018db384  tbz w0,#0x0,0x71018db3c4
71018db388  ldr x8,[x20]
71018db38c  ldr x1,[x25, #0x68]
71018db390  mov x0,x20
71018db394  ldr x8,[x8, #0x120]
71018db398  blr x8
71018db39c  tbz w0,#0x0,0x71018db3c4
71018db3a0  ldr x0,[x25, #0x68]
71018db3a4  ldr x8,[x0]
71018db3a8  ldr x8,[x8, #0x178]
71018db3ac  blr x8
71018db3b0  ldr x0,[x25, #0x68]
71018db3b4  ldr x8,[x0]
71018db3b8  ldr x8,[x8, #0x140]
71018db3bc  mov w1,wzr
71018db3c0  blr x8
71018db3c4  ldr x8,[x25, #0x8]
71018db3c8  cbz x8,0x71018db3dc
71018db3cc  mov x25,x8
71018db3d0  ldr x8,[x8]
71018db3d4  cbnz x8,0x71018db3cc
71018db3d8  b 0x71018db408
71018db3dc  mov x8,x25
71018db3e0  ldr x9,[x8, #0x10]!
71018db3e4  ldr x10,[x9]
71018db3e8  cmp x10,x25
71018db3ec  b.eq 0x71018db414
71018db3f0  ldr x9,[x8]
71018db3f4  mov x8,x9
71018db3f8  ldr x25,[x8, #0x10]!
71018db3fc  ldr x10,[x25]
71018db400  cmp x10,x9
71018db404  b.ne 0x71018db3f0
71018db408  cmp x25,x24
71018db40c  b.ne 0x71018db374
71018db410  b 0x71018db420
71018db414  mov x25,x9
71018db418  cmp x25,x24
71018db41c  b.ne 0x71018db374
71018db420  ldr x20,[x19, #0x8]
71018db424  ldr x8,[x20]
71018db428  ldr x8,[x8, #0x188]
71018db42c  mov x0,x20
71018db430  blr x8
71018db434  adrp x8,0x710523d000
71018db438  add x8,x8,#0x9e8
71018db43c  str x8,[sp, #0x3d0]
71018db440  str xzr,[sp, #0x3d8]
71018db444  b 0x71018db45c
71018db448  adrp x8,0x710523d000
71018db44c  add x8,x8,#0x9e8
71018db450  str x8,[sp, #0x3d0]
71018db454  str xzr,[sp, #0x3d8]
71018db458  cbz x19,0x71018db464
71018db45c  mov x0,x19
71018db460  bl 0x710392eb40
71018db464  orr x8,xzr,#0x3f80000000000000
71018db468  str x8,[sp, #0x508]
71018db46c  mov x8,#0x3f000000
71018db470  movk x8,#0x3f80, LSL #48
71018db474  str x8,[sp, #0x518]
71018db478  mov x8,#0x40400000
71018db47c  orr x19,xzr,#0x3f8000003f800000
71018db480  str x19,[sp, #0x510]
71018db484  movk x8,#0x4270, LSL #48
71018db488  add x0,sp,#0x500
71018db48c  add x28,x23,#0x8
71018db490  str xzr,[sp, #0x500]
71018db494  str x8,[sp, #0x520]
71018db498  stur xzr,[x22, #0x2d]
71018db49c  str xzr,[sp, #0x528]
71018db4a0  stur xzr,[x22, #0x3d]
71018db4a4  str xzr,[sp, #0x538]
71018db4a8  strb wzr,[sp, #0x550]
71018db4ac  str xzr,[sp, #0x548]
71018db4b0  str xzr,[sp, #0x580]
71018db4b4  str xzr,[sp, #0x5a0]
71018db4b8  str xzr,[sp, #0x598]
71018db4bc  str xzr,[sp, #0x590]
71018db4c0  bl 0x710337eaf0
71018db4c4  mov x8,#0x3f800000
71018db4c8  movk x8,#0x42c8, LSL #48
71018db4cc  str x8,[sp, #0x508]
71018db4d0  mov x8,#0x3f000000
71018db4d4  movk x8,#0xcccd, LSL #32
71018db4d8  movk x8,#0x3e4c, LSL #48
71018db4dc  str x8,[sp, #0x518]
71018db4e0  mov x8,#0x40000000
71018db4e4  movk x8,#0x4220, LSL #48
71018db4e8  str x8,[sp, #0x520]
71018db4ec  mov x8,#0x42480000
71018db4f0  movk x8,#0x4, LSL #32
71018db4f4  str x8,[sp, #0x548]
71018db4f8  mov w8,#0x1
71018db4fc  str x19,[sp, #0x510]
71018db500  adrp x2,0x71042b4000
71018db504  add x2,x2,#0x66e
71018db508  strb w8,[sp, #0x550]
71018db50c  ldr x8,[x21, #0x130]
71018db510  ldr x8,[x8]
71018db514  ldr x0,[x21, #0x140]
71018db518  add x1,x8,#0x8
71018db51c  add x3,sp,#0x500
71018db520  bl 0x7103788db0
71018db524  ldr x8,[x21, #0x140]
71018db528  ldr x0,[x8]
71018db52c  ldr x8,[x0]
71018db530  ldr x8,[x8, #0x70]
71018db534  mov w1,#0x1
71018db538  blr x8
71018db53c  ldr x8,[x21, #0x130]
71018db540  ldr x8,[x8]
71018db544  add x0,x8,#0x8
71018db548  adrp x1,0x710425f000
71018db54c  add x1,x1,#0x798
71018db550  add x8,sp,#0x3d0
71018db554  bl 0x7103776910
71018db558  ldr x0,[sp, #0x3d8]
71018db55c  ldr x8,[x0]
71018db560  cbz x8,0x71018db570
71018db564  ldr s0,[x8, #0x50]
71018db568  fabs s0,s0
71018db56c  b 0x71018db574
71018db570  fmov s0,wzr
71018db574  adrp x19,0x710523d000
71018db578  add x19,x19,#0x9a8
71018db57c  add x20,x21,#0x150
71018db580  str x26,[sp, #0x8]
71018db584  str s0,[x21, #0x168]
71018db588  str x19,[sp, #0x3d0]
71018db58c  str xzr,[sp, #0x3d8]
71018db590  cbz x0,0x71018db598
71018db594  bl 0x710392eb40
71018db598  ldr x8,[x27]
71018db59c  ldr x8,[x8]
71018db5a0  ldr x8,[x8]
71018db5a4  ldr x9,[x8, #0x600]
71018db5a8  mov w10,#0x20
71018db5ac  str w10,[x9, #0x10]
71018db5b0  ldr x9,[x8, #0x600]
71018db5b4  mov w10,#0x40
71018db5b8  str w10,[x9, #0x14]
71018db5bc  ldr x10,[x8, #0x600]
71018db5c0  mov w9,#0x10
71018db5c4  str w9,[x10, #0x20]
71018db5c8  ldr x8,[x8, #0x600]
71018db5cc  mov w9,#0x80
71018db5d0  str w9,[x8, #0x24]
71018db5d4  mov w25,#0x101
71018db5d8  mov w24,#0x1
71018db5dc  mov x26,#0x41f0000000000000
71018db5e0  add x8,sp,#0x2db
71018db5e4  adrp x2,0x7104433000
71018db5e8  add x2,x2,#0x952
71018db5ec  add x3,sp,#0x3d0
71018db5f0  mov x0,x20
71018db5f4  mov x1,x28
71018db5f8  str xzr,[sp, #0x3d0]
71018db5fc  strh w25,[sp, #0x3d8]
71018db600  strh wzr,[sp, #0x3de]
71018db604  add x23,x21,#0x148
71018db608  stur wzr,[x8, #0xff]
71018db60c  str w24,[sp, #0x3e0]
71018db610  strh w24,[sp, #0x3e4]
71018db614  strb w24,[sp, #0x3e6]
71018db618  str x26,[sp, #0x3e8]
71018db61c  str wzr,[sp, #0x3f0]
71018db620  str xzr,[sp, #0x420]
71018db624  str xzr,[sp, #0x450]
71018db628  str xzr,[sp, #0x480]
71018db62c  str xzr,[sp, #0x4b0]
71018db630  str xzr,[sp, #0x4e0]
71018db634  str wzr,[sp, #0x4f0]
71018db638  bl 0x7103770b30
71018db63c  adrp x2,0x71043e0000
71018db640  add x2,x2,#0x418
71018db644  mov x0,x20
71018db648  mov w1,wzr
71018db64c  bl 0x71037717d0
71018db650  ldr x8,[x20]
71018db654  ldr x9,[x8, #0x1b8]
71018db658  cbz x9,0x71018db6c4
71018db65c  add x10,x8,#0x1b8
71018db660  mov x8,x10
71018db664  ldr w11,[x9, #0x20]
71018db668  cmp w11,#0x0
71018db66c  cset w11,lt
71018db670  csel x8,x8,x9,lt
71018db674  ldr x9,[x9, w11, UXTW #0x3]
71018db678  cbnz x9,0x71018db664
71018db67c  cmp x8,x10
71018db680  b.eq 0x71018db6c4
71018db684  ldr w9,[x8, #0x20]
71018db688  cmp w9,#0x0
71018db68c  b.gt 0x71018db6c4
71018db690  ldr x22,[x8, #0x28]
71018db694  cbz x22,0x71018db6c4
71018db698  ldr x8,[x22]
71018db69c  ldr x8,[x8, #0x208]
71018db6a0  mov x0,x22
71018db6a4  mov w1,wzr
71018db6a8  blr x8
71018db6ac  ldr x8,[x22]
71018db6b0  ldr x8,[x8, #0x388]
71018db6b4  mov w1,#0x1
71018db6b8  mov x0,x22
71018db6bc  mov w2,wzr
71018db6c0  blr x8
71018db6c4  mov w2,#0x1
71018db6c8  mov x0,x20
71018db6cc  mov w1,wzr
71018db6d0  bl 0x7103771a80
71018db6d4  ldr x0,[x20]
71018db6d8  ldr x8,[x0]
71018db6dc  ldr x8,[x8, #0x70]
71018db6e0  mov w1,#0x1
71018db6e4  blr x8
71018db6e8  add x8,sp,#0x1ab
71018db6ec  adrp x2,0x7104401000
71018db6f0  add x2,x2,#0xbc0
71018db6f4  add x3,sp,#0x2a0
71018db6f8  mov x0,x23
71018db6fc  str xzr,[sp, #0x2a0]
71018db700  mov x1,x28
71018db704  strh w25,[sp, #0x2a8]
71018db708  stur wzr,[x8, #0xff]
71018db70c  strh wzr,[sp, #0x2ae]
71018db710  str w24,[sp, #0x2b0]
71018db714  strh w24,[sp, #0x2b4]
71018db718  strb w24,[sp, #0x2b6]
71018db71c  str x26,[sp, #0x2b8]
71018db720  str wzr,[sp, #0x2c0]
71018db724  str xzr,[sp, #0x2f0]
71018db728  str xzr,[sp, #0x320]
71018db72c  str xzr,[sp, #0x350]
71018db730  str xzr,[sp, #0x380]
71018db734  str xzr,[sp, #0x3b0]
71018db738  str wzr,[sp, #0x3c0]
71018db73c  strb w24,[sp, #0x2aa]
71018db740  bl 0x7103770b30
71018db744  adrp x2,0x7104412000
71018db748  add x2,x2,#0xc65
71018db74c  mov w1,#0x1
71018db750  mov x0,x23
71018db754  bl 0x71037717d0
71018db758  adrp x2,0x710433a000
71018db75c  add x2,x2,#0x41f
71018db760  mov x0,x23
71018db764  mov w1,wzr
71018db768  bl 0x71037717d0
71018db76c  ldr x0,[x23]
71018db770  ldr x8,[x0]
71018db774  ldr x8,[x8, #0x70]
71018db778  mov w1,#0x1
71018db77c  blr x8
71018db780  adrp x8,0x710532f000
71018db784  ldr x8,[x8, #0x730]
71018db788  ldr x8,[x8, #0x8]
71018db78c  mov w0,#0x10
71018db790  mov w1,#0x20
71018db794  str x19,[sp, #0x260]
71018db798  str x8,[sp, #0x60]
71018db79c  bl 0x710392e290
71018db7a0  cbnz x0,0x71018db7e8
71018db7a4  adrp x8,0x7105332000
71018db7a8  ldr x0,[x8, #0xf00]
71018db7ac  cbz x0,0x71018db7e4
71018db7b0  mov w8,#0x20
71018db7b4  str wzr,[sp, #0x190]
71018db7b8  add x1,sp,#0x190
71018db7bc  str x8,[sp, #0x1e8]
71018db7c0  ldr x8,[x0]
71018db7c4  ldr x8,[x8, #0x30]
71018db7c8  add x2,sp,#0x1e8
71018db7cc  blr x8
71018db7d0  tbz w0,#0x0,0x71018db7e4
71018db7d4  mov w0,#0x10
71018db7d8  mov w1,#0x20
71018db7dc  bl 0x710392e290
71018db7e0  cbnz x0,0x71018db7e8
71018db7e4  mov x0,xzr
71018db7e8  stp xzr,xzr,[x0, #0x10]
71018db7ec  mov w1,#0x20
71018db7f0  stp xzr,xzr,[x0]
71018db7f4  str x0,[sp, #0x268]
71018db7f8  mov w0,#0x10
71018db7fc  str x19,[sp, #0x270]
71018db800  bl 0x710392e290
71018db804  cbnz x0,0x71018db84c
71018db808  adrp x8,0x7105332000
71018db80c  ldr x0,[x8, #0xf00]
71018db810  cbz x0,0x71018db848
71018db814  mov w8,#0x20
71018db818  str wzr,[sp, #0x190]
71018db81c  add x1,sp,#0x190
71018db820  str x8,[sp, #0x1e8]
71018db824  ldr x8,[x0]
71018db828  ldr x8,[x8, #0x30]
71018db82c  add x2,sp,#0x1e8
71018db830  blr x8
71018db834  tbz w0,#0x0,0x71018db848
71018db838  mov w0,#0x10
71018db83c  mov w1,#0x20
71018db840  bl 0x710392e290
71018db844  cbnz x0,0x71018db84c
71018db848  mov x0,xzr
71018db84c  stp xzr,xzr,[x0, #0x10]
71018db850  mov w1,#0x20
71018db854  stp xzr,xzr,[x0]
71018db858  str x0,[sp, #0x278]
71018db85c  mov w0,#0x10
71018db860  str x19,[sp, #0x280]
71018db864  bl 0x710392e290
71018db868  cbnz x0,0x71018db8b0
71018db86c  adrp x8,0x7105332000
71018db870  ldr x0,[x8, #0xf00]
71018db874  cbz x0,0x71018db8ac
71018db878  mov w8,#0x20
71018db87c  str wzr,[sp, #0x190]
71018db880  add x1,sp,#0x190
71018db884  str x8,[sp, #0x1e8]
71018db888  ldr x8,[x0]
71018db88c  ldr x8,[x8, #0x30]
71018db890  add x2,sp,#0x1e8
71018db894  blr x8
71018db898  tbz w0,#0x0,0x71018db8ac
71018db89c  mov w0,#0x10
71018db8a0  mov w1,#0x20
71018db8a4  bl 0x710392e290
71018db8a8  cbnz x0,0x71018db8b0
71018db8ac  mov x0,xzr
71018db8b0  stp xzr,xzr,[x0, #0x10]
71018db8b4  adrp x24,0x710523d000
71018db8b8  add x24,x24,#0x9e8
71018db8bc  stp xzr,xzr,[x0]
71018db8c0  orr w1,wzr,#0x18
71018db8c4  str x0,[sp, #0x288]
71018db8c8  mov w0,#0x10
71018db8cc  str x24,[sp, #0x230]
71018db8d0  bl 0x710392e290
71018db8d4  cbnz x0,0x71018db91c
71018db8d8  adrp x8,0x7105332000
71018db8dc  ldr x0,[x8, #0xf00]
71018db8e0  cbz x0,0x71018db918
71018db8e4  orr w8,wzr,#0x18
71018db8e8  str wzr,[sp, #0x190]
71018db8ec  add x1,sp,#0x190
71018db8f0  str x8,[sp, #0x1e8]
71018db8f4  ldr x8,[x0]
71018db8f8  ldr x8,[x8, #0x30]
71018db8fc  add x2,sp,#0x1e8
71018db900  blr x8
71018db904  tbz w0,#0x0,0x71018db918
71018db908  mov w0,#0x10
71018db90c  orr w1,wzr,#0x18
71018db910  bl 0x710392e290
71018db914  cbnz x0,0x71018db91c
71018db918  mov x0,xzr
71018db91c  mov w20,#0x1
71018db920  str x28,[sp, #0x58]
71018db924  orr w1,wzr,#0x18
71018db928  stp xzr,xzr,[x0]
71018db92c  add x22,sp,#0x260
71018db930  strb w20,[x0, #0x10]
71018db934  add x23,sp,#0x230
71018db938  str x0,[sp, #0x238]
71018db93c  mov w0,#0x10
71018db940  str x24,[sp, #0x240]
71018db944  bl 0x710392e290
71018db948  cbnz x0,0x71018db990
71018db94c  adrp x8,0x7105332000
71018db950  ldr x0,[x8, #0xf00]
71018db954  cbz x0,0x71018db98c
71018db958  orr w8,wzr,#0x18
71018db95c  str wzr,[sp, #0x190]
71018db960  add x1,sp,#0x190
71018db964  str x8,[sp, #0x1e8]
71018db968  ldr x8,[x0]
71018db96c  ldr x8,[x8, #0x30]
71018db970  add x2,sp,#0x1e8
71018db974  blr x8
71018db978  tbz w0,#0x0,0x71018db98c
71018db97c  mov w0,#0x10
71018db980  orr w1,wzr,#0x18
71018db984  bl 0x710392e290
71018db988  cbnz x0,0x71018db990
71018db98c  mov x0,xzr
71018db990  ldr x8,[sp, #0x60]
71018db994  add x8,x8,#0x160
71018db998  str x8,[sp, #0x50]
71018db99c  add x8,x22,#0x10
71018db9a0  str x8,[sp, #0x48]
71018db9a4  add x8,x22,#0x20
71018db9a8  str x8,[sp, #0x40]
71018db9ac  add x8,x23,#0x10
71018db9b0  str x27,[sp]
71018db9b4  stp xzr,xzr,[x0]
71018db9b8  str x8,[sp, #0x38]
71018db9bc  strb w20,[x0, #0x10]
71018db9c0  str x0,[sp, #0x248]
71018db9c4  add x8,x23,#0x20
71018db9c8  mov w0,#0x10
71018db9cc  orr w1,wzr,#0x18
71018db9d0  str x24,[sp, #0x250]
71018db9d4  str x8,[sp, #0x30]
71018db9d8  bl 0x710392e290
71018db9dc  cbnz x0,0x71018dba24
71018db9e0  adrp x8,0x7105332000
71018db9e4  ldr x0,[x8, #0xf00]
71018db9e8  cbz x0,0x71018dba20
71018db9ec  orr w8,wzr,#0x18
71018db9f0  str wzr,[sp, #0x190]
71018db9f4  add x1,sp,#0x190
71018db9f8  str x8,[sp, #0x1e8]
71018db9fc  ldr x8,[x0]
71018dba00  ldr x8,[x8, #0x30]
71018dba04  add x2,sp,#0x1e8
71018dba08  blr x8
71018dba0c  tbz w0,#0x0,0x71018dba20
71018dba10  mov w0,#0x10
71018dba14  orr w1,wzr,#0x18
71018dba18  bl 0x710392e290
71018dba1c  cbnz x0,0x71018dba24
71018dba20  mov x0,xzr
71018dba24  mov w8,#0x1
71018dba28  add x10,sp,#0x1e8
71018dba2c  fmov s13,0x41200000
71018dba30  strb w8,[x0, #0x10]
71018dba34  add x8,sp,#0x138
71018dba38  add x10,x10,#0x8
71018dba3c  add x8,x8,#0x8
71018dba40  stp xzr,xzr,[x0]
71018dba44  str x10,[sp, #0x28]
71018dba48  stur x8,[x29, #-0x88]
71018dba4c  add x8,sp,#0x100
71018dba50  add x27,x8,#0x10
71018dba54  add x8,sp,#0x88
71018dba58  add x8,x8,#0x8
71018dba5c  str x8,[sp, #0x70]
71018dba60  adrp x8,0x7104472000
71018dba64  ldr s12,[x8, #0xc34]
71018dba68  fmov s14,wzr
71018dba6c  fmov s8,0x3f800000
71018dba70  add x10,sp,#0x190
71018dba74  mov x22,xzr
71018dba78  orr x9,xzr,#0xf00000000
71018dba7c  add x24,x10,#0x8
71018dba80  str x0,[sp, #0x258]
71018dba84  str x9,[sp, #0x290]
71018dba88  str xzr,[sp, #0x298]
71018dba8c  str x24,[sp, #0x20]
71018dba90  add x0,sp,#0x1e8
71018dba94  adrp x1,0x710424f000
71018dba98  add x1,x1,#0x80c
71018dba9c  mov w2,w22
71018dbaa0  strb wzr,[sp, #0x1f0]
71018dbaa4  str xzr,[sp, #0x1e8]
71018dbaa8  bl 0x710062dc20
71018dbaac  ldr x20,[sp, #0x58]
71018dbab0  ldr x1,[sp, #0x28]
71018dbab4  add x8,sp,#0x1d8
71018dbab8  mov x0,x20
71018dbabc  bl 0x7103776640
71018dbac0  add x8,sp,#0x190
71018dbac4  add x0,sp,#0x1d8
71018dbac8  adrp x1,0x710426e000
71018dbacc  add x1,x1,#0x7ec
71018dbad0  bl 0x71037780e0
71018dbad4  scvtf s9,w22
71018dbad8  mov v0.16B,v9.16B
71018dbadc  add x0,sp,#0x190
71018dbae0  bl 0x710377b010
71018dbae4  ldr x0,[sp, #0x198]
71018dbae8  adrp x26,0x710523d000
71018dbaec  add x26,x26,#0x9e8
71018dbaf0  stp x26,xzr,[sp, #0x190]
71018dbaf4  cbz x0,0x71018dbafc
71018dbaf8  bl 0x710392eb40
71018dbafc  add x8,sp,#0x138
71018dbb00  add x0,sp,#0x1d8
71018dbb04  adrp x1,0x71042b2000
71018dbb08  add x1,x1,#0x92e
71018dbb0c  add x23,x22,#0x1
71018dbb10  bl 0x7103776910
71018dbb14  cmn w22,#0x2
71018dbb18  b.ne 0x71018dbb28
71018dbb1c  strb wzr,[sp, #0x198]
71018dbb20  str xzr,[sp, #0x190]
71018dbb24  b 0x71018dbb3c
71018dbb28  add x8,sp,#0x190
71018dbb2c  adrp x0,0x71042b2000
71018dbb30  add x0,x0,#0x93a
71018dbb34  mov w1,w23
71018dbb38  bl 0x71003a4ca0
71018dbb3c  add x0,sp,#0x138
71018dbb40  mov x1,x24
71018dbb44  bl 0x710377a120
71018dbb48  ldr x0,[sp, #0x140]
71018dbb4c  stp x19,xzr,[sp, #0x138]
71018dbb50  cbz x0,0x71018dbb58
71018dbb54  bl 0x710392eb40
71018dbb58  add x8,sp,#0x190
71018dbb5c  add x0,sp,#0x1d8
71018dbb60  adrp x1,0x710433a000
71018dbb64  add x1,x1,#0x953
71018dbb68  bl 0x7103776910
71018dbb6c  ldr x0,[sp, #0x198]
71018dbb70  ldr x8,[x0]
71018dbb74  cbz x8,0x71018dbb84
71018dbb78  ldrb w9,[x8, #0x58]
71018dbb7c  and w9,w9,#0xfe
71018dbb80  strb w9,[x8, #0x58]
71018dbb84  str x23,[sp, #0x68]
71018dbb88  stp x19,xzr,[sp, #0x190]
71018dbb8c  cbz x0,0x71018dbb94
71018dbb90  bl 0x710392eb40
71018dbb94  add x0,sp,#0x190
71018dbb98  adrp x1,0x7104308000
71018dbb9c  add x1,x1,#0x7b8
71018dbba0  mov w2,w22
71018dbba4  strb wzr,[sp, #0x198]
71018dbba8  str xzr,[sp, #0x190]
71018dbbac  bl 0x710062dc20
71018dbbb0  add x8,sp,#0x180
71018dbbb4  mov x0,x20
71018dbbb8  mov x1,x24
71018dbbbc  bl 0x7103776640
71018dbbc0  add x8,sp,#0x290
71018dbbc4  ldr x24,[sp, #0x50]
71018dbbc8  mov x0,x24
71018dbbcc  ldr w1,[x8, x22, LSL #0x2]
71018dbbd0  bl 0x7103263e20
71018dbbd4  ldr x8,[sp, #0x60]
71018dbbd8  mov x23,x0
71018dbbdc  mov x1,x23
71018dbbe0  ldr x0,[x8, #0x168]
71018dbbe4  bl 0x7103263f80
71018dbbe8  mov x20,x0
71018dbbec  add x8,sp,#0x88
71018dbbf0  add x0,sp,#0x180
71018dbbf4  adrp x1,0x71043cf000
71018dbbf8  add x1,x1,#0xca4
71018dbbfc  bl 0x7103776910
71018dbc00  add x0,sp,#0x138
71018dbc04  mov x1,x24
71018dbc08  mov x2,x23
71018dbc0c  mov w3,wzr
71018dbc10  mov w4,wzr
71018dbc14  bl 0x7103265040
71018dbc18  ldur x1,[x29, #-0x88]
71018dbc1c  add x0,sp,#0x88
71018dbc20  bl 0x710377a120
71018dbc24  ldr x0,[sp, #0x90]
71018dbc28  stp x19,xzr,[sp, #0x88]
71018dbc2c  cbz x0,0x71018dbc34
71018dbc30  bl 0x710392eb40
71018dbc34  ldr x24,[x21, #0x128]
71018dbc38  mov w2,#0x4
71018dbc3c  mov x0,x23
71018dbc40  mov w1,wzr
71018dbc44  bl 0x7103238a70
71018dbc48  tst x0,#0xffffffffff
71018dbc4c  str x0,[sp, #0x138]
71018dbc50  b.eq 0x71018dbc68
71018dbc54  ldr x0,[x24]
71018dbc58  ldrsw x2,[x0, #0x70]
71018dbc5c  ldr w3,[x0, #0x68]
71018dbc60  add x1,sp,#0x138
71018dbc64  bl 0x710323c4e0
71018dbc68  ldr x24,[x21, #0x128]
71018dbc6c  mov x0,x20
71018dbc70  mov w1,#0x11
71018dbc74  bl 0x7103238d60
71018dbc78  tst x0,#0xffffffffff
71018dbc7c  str x0,[sp, #0x138]
71018dbc80  b.eq 0x71018dbc98
71018dbc84  ldr x0,[x24]
71018dbc88  ldrsw x2,[x0, #0x70]
71018dbc8c  ldr w3,[x0, #0x68]
71018dbc90  add x1,sp,#0x138
71018dbc94  bl 0x710323c4e0
71018dbc98  add x8,sp,#0x138
71018dbc9c  add x0,sp,#0x180
71018dbca0  adrp x1,0x71042e7000
71018dbca4  add x1,x1,#0x963
71018dbca8  bl 0x7103776910
71018dbcac  ldr x0,[x21, #0x128]
71018dbcb0  mov w3,#0x4
71018dbcb4  mov x1,x23
71018dbcb8  mov w2,wzr
71018dbcbc  bl 0x710323f330
71018dbcc0  ldr x23,[sp, #0x140]
71018dbcc4  mov x1,x0
71018dbcc8  mov x0,x23
71018dbccc  bl 0x7103778b80
71018dbcd0  stp x19,xzr,[sp, #0x138]
71018dbcd4  cbz x23,0x71018dbce0
71018dbcd8  mov x0,x23
71018dbcdc  bl 0x710392eb40
71018dbce0  add x8,sp,#0x138
71018dbce4  add x0,sp,#0x180
71018dbce8  adrp x1,0x7104401000
71018dbcec  add x1,x1,#0x863
71018dbcf0  bl 0x7103776910
71018dbcf4  ldr x0,[x21, #0x128]
71018dbcf8  mov x1,x20
71018dbcfc  mov w2,#0x11
71018dbd00  bl 0x710323f600
71018dbd04  ldr x20,[sp, #0x140]
71018dbd08  mov x1,x0
71018dbd0c  mov x0,x20
71018dbd10  bl 0x7103778b80
71018dbd14  adrp x24,0x71042d6000
71018dbd18  add x24,x24,#0x5c5
71018dbd1c  stp x19,xzr,[sp, #0x138]
71018dbd20  cbz x20,0x71018dbd2c
71018dbd24  mov x0,x20
71018dbd28  bl 0x710392eb40
71018dbd2c  add x8,sp,#0x128
71018dbd30  add x0,sp,#0x180
71018dbd34  adrp x1,0x710432a000
71018dbd38  add x1,x1,#0x373
71018dbd3c  bl 0x71037780e0
71018dbd40  mov v0.16B,v9.16B
71018dbd44  add x0,sp,#0x128
71018dbd48  bl 0x710377b010
71018dbd4c  add x8,sp,#0x138
71018dbd50  add x0,sp,#0x180
71018dbd54  adrp x1,0x710439d000
71018dbd58  add x1,x1,#0x753
71018dbd5c  bl 0x7103776910
71018dbd60  ldr x0,[sp, #0x140]
71018dbd64  ldr x8,[x0]
71018dbd68  cbz x8,0x71018dbd78
71018dbd6c  ldrb w9,[x8, #0x58]
71018dbd70  and w9,w9,#0xfe
71018dbd74  strb w9,[x8, #0x58]
71018dbd78  stp x19,xzr,[sp, #0x138]
71018dbd7c  cbz x0,0x71018dbd84
71018dbd80  bl 0x710392eb40
71018dbd84  ldr x20,[x21, #0x128]
71018dbd88  adrp x0,0x7104308000
71018dbd8c  add x0,x0,#0x7c6
71018dbd90  mov w1,wzr
71018dbd94  bl 0x710323af70
71018dbd98  tst x0,#0xffffffffff
71018dbd9c  str x0,[sp, #0x138]
71018dbda0  b.eq 0x71018dbdb8
71018dbda4  ldr x0,[x20]
71018dbda8  ldrsw x2,[x0, #0x70]
71018dbdac  ldr w3,[x0, #0x68]
71018dbdb0  add x1,sp,#0x138
71018dbdb4  bl 0x710323c4e0
71018dbdb8  add x8,sp,#0x138
71018dbdbc  add x0,sp,#0x180
71018dbdc0  adrp x1,0x7104280000
71018dbdc4  add x1,x1,#0xd72
71018dbdc8  bl 0x7103776910
71018dbdcc  ldr x0,[x21, #0x128]
71018dbdd0  adrp x1,0x7104308000
71018dbdd4  add x1,x1,#0x7c6
71018dbdd8  mov w2,wzr
71018dbddc  bl 0x7103240d30
71018dbde0  ldr x20,[sp, #0x140]
71018dbde4  mov x1,x0
71018dbde8  mov x0,x20
71018dbdec  bl 0x7103778b80
71018dbdf0  stp x19,xzr,[sp, #0x138]
71018dbdf4  cbz x20,0x71018dbe00
71018dbdf8  mov x0,x20
71018dbdfc  bl 0x710392eb40
71018dbe00  add x8,sp,#0x298
71018dbe04  ldr s9,[x8,x22, lsl #2]
71018dbe08  adrp x8,0x710532f000
71018dbe0c  stp xzr,xzr,[x27]
71018dbe10  ldr x8,[x8, #0x8c0]
71018dbe14  ldr x8,[x8, #0x8]
71018dbe18  ldp x0,x1,[x8, #0xc8]
71018dbe1c  mov v0.16B,v9.16B
71018dbe20  bl 0x71033114a0
71018dbe24  and w8,w0,#0xff
71018dbe28  ucvtf s0,w8
71018dbe2c  ubfx x8,x0,#0x18,#0x8
71018dbe30  ucvtf s3,w8
71018dbe34  fcvtzs w8,s9
71018dbe38  fdiv s0,s0,s12
71018dbe3c  ubfx w9,w0,#0x8,#0x8
71018dbe40  ucvtf s1,w9
71018dbe44  mov w9,#0x3e7
71018dbe48  cmp w8,#0x3e7
71018dbe4c  csel w8,w8,w9,lt
71018dbe50  mov w9,#0x9
71018dbe54  bic w28,w8,w8, ASR #0x1f
71018dbe58  str s0,[sp, #0x100]
71018dbe5c  fdiv s1,s1,s12
71018dbe60  scvtf s0,w28
71018dbe64  ubfx w10,w0,#0x10,#0x8
71018dbe68  ucvtf s2,w10
71018dbe6c  str s1,[sp, #0x104]
71018dbe70  fsub s0,s9,s0
71018dbe74  fdiv s2,s2,s12
71018dbe78  str s2,[sp, #0x108]
71018dbe7c  fmul s0,s0,s13
71018dbe80  mov v9.16B,v14.16B
71018dbe84  fcvtzs w8,s0
71018dbe88  cmp w8,#0x9
71018dbe8c  fdiv s1,s3,s12
71018dbe90  str s1,[sp, #0x10c]
71018dbe94  csel w8,w8,w9,lt
71018dbe98  cmp w28,#0x64
71018dbe9c  b.lt 0x71018dbebc
71018dbea0  mov w9,#0x851f
71018dbea4  movk w9,#0x51eb, LSL #16
71018dbea8  umull x9,w28,w9
71018dbeac  lsr x9,x9,#0x25
71018dbeb0  scvtf s9,w9
71018dbeb4  mov w10,#0xffffff9c
71018dbeb8  madd w28,w9,w10,w28
71018dbebc  bic w8,w8,w8, ASR #0x1f
71018dbec0  cmp w28,#0xa
71018dbec4  b.lt 0x71018dbee8
71018dbec8  mov w9,#0xcccd
71018dbecc  movk w9,#0xcccc, LSL #16
71018dbed0  umull x9,w28,w9
71018dbed4  lsr x9,x9,#0x23
71018dbed8  scvtf s10,w9
71018dbedc  mov w10,#0xfffffff6
71018dbee0  madd w28,w9,w10,w28
71018dbee4  b 0x71018dbeec
71018dbee8  mov v10.16B,v14.16B
71018dbeec  scvtf s11,w8
71018dbef0  add x8,sp,#0x138
71018dbef4  add x0,sp,#0x180
71018dbef8  adrp x1,0x71042e7000
71018dbefc  add x1,x1,#0x589
71018dbf00  bl 0x71037780e0
71018dbf04  mov v0.16B,v8.16B
71018dbf08  add x0,sp,#0x138
71018dbf0c  bl 0x710377b010
71018dbf10  ldr x0,[sp, #0x140]
71018dbf14  stp x26,xzr,[sp, #0x138]
71018dbf18  cbz x0,0x71018dbf20
71018dbf1c  bl 0x710392eb40
71018dbf20  add x8,sp,#0x138
71018dbf24  add x0,sp,#0x180
71018dbf28  adrp x1,0x7104280000
71018dbf2c  add x1,x1,#0xd80
71018dbf30  bl 0x71037780e0
71018dbf34  mov v0.16B,v11.16B
71018dbf38  add x0,sp,#0x138
71018dbf3c  bl 0x710377b010
71018dbf40  ldr x0,[sp, #0x140]
71018dbf44  stp x26,xzr,[sp, #0x138]
71018dbf48  cbz x0,0x71018dbf50
71018dbf4c  bl 0x710392eb40
71018dbf50  add x8,sp,#0xf0
71018dbf54  add x0,sp,#0x180
71018dbf58  adrp x1,0x7104280000
71018dbf5c  add x1,x1,#0xd72
71018dbf60  bl 0x7103776910
71018dbf64  add x8,sp,#0xe0
71018dbf68  add x0,sp,#0x180
71018dbf6c  adrp x1,0x710432a000
71018dbf70  add x1,x1,#0x37b
71018dbf74  bl 0x7103776910
71018dbf78  add x8,sp,#0xd0
71018dbf7c  add x0,sp,#0x180
71018dbf80  adrp x1,0x7104443000
71018dbf84  add x1,x1,#0xb07
71018dbf88  bl 0x7103776910
71018dbf8c  ldr x0,[x21, #0x128]
71018dbf90  adrp x1,0x7104433000
71018dbf94  add x1,x1,#0x480
71018dbf98  mov w2,wzr
71018dbf9c  bl 0x7103240d30
71018dbfa0  ldr x22,[sp, #0xe8]
71018dbfa4  mov x1,x0
71018dbfa8  mov x0,x22
71018dbfac  bl 0x7103778b80
71018dbfb0  add x0,sp,#0xf0
71018dbfb4  mov w1,#0x2
71018dbfb8  add x2,sp,#0x100
71018dbfbc  bl 0x7103779f50
71018dbfc0  add x0,sp,#0xf0
71018dbfc4  orr w1,wzr,#0x3
71018dbfc8  mov x2,x27
71018dbfcc  bl 0x7103779f50
71018dbfd0  add x0,sp,#0xe0
71018dbfd4  mov w1,#0x2
71018dbfd8  add x2,sp,#0x100
71018dbfdc  bl 0x7103779f50
71018dbfe0  add x0,sp,#0xe0
71018dbfe4  orr w1,wzr,#0x3
71018dbfe8  mov x2,x27
71018dbfec  bl 0x7103779f50
71018dbff0  add x0,sp,#0xd0
71018dbff4  mov w1,#0x2
71018dbff8  add x2,sp,#0x100
71018dbffc  bl 0x7103779f50
71018dc000  add x0,sp,#0xd0
71018dc004  orr w1,wzr,#0x3
71018dc008  mov x2,x27
71018dc00c  bl 0x7103779f50
71018dc010  add x0,sp,#0x138
71018dc014  mov w2,#0x1
71018dc018  mov x1,x24
71018dc01c  strb wzr,[sp, #0x140]
71018dc020  str xzr,[sp, #0x138]
71018dc024  bl 0x710062dc20
71018dc028  ldur x1,[x29, #-0x88]
71018dc02c  add x8,sp,#0x88
71018dc030  add x0,sp,#0x180
71018dc034  bl 0x71037780e0
71018dc038  ldr x25,[sp, #0x90]
71018dc03c  ldr x0,[sp, #0x238]
71018dc040  str xzr,[sp, #0x90]
71018dc044  str x25,[sp, #0x238]
71018dc048  cbz x0,0x71018dc050
71018dc04c  bl 0x710392eb40
71018dc050  add x0,sp,#0x88
71018dc054  mov w2,#0x1
71018dc058  adrp x1,0x710435b000
71018dc05c  add x1,x1,#0xa8a
71018dc060  stp x26,xzr,[sp, #0x88]
71018dc064  strb wzr,[sp, #0x90]
71018dc068  str xzr,[sp, #0x88]
71018dc06c  bl 0x710062dc20
71018dc070  ldr x1,[sp, #0x70]
71018dc074  add x8,sp,#0x78
71018dc078  add x0,sp,#0x180
71018dc07c  bl 0x7103776910
71018dc080  ldr x8,[sp, #0x80]
71018dc084  ldr x0,[sp, #0x268]
71018dc088  str xzr,[sp, #0x80]
71018dc08c  str x8,[sp, #0x18]
71018dc090  str x8,[sp, #0x268]
71018dc094  cbz x0,0x71018dc09c
71018dc098  bl 0x710392eb40
71018dc09c  add x0,sp,#0x260
71018dc0a0  mov w1,#0x2
71018dc0a4  add x2,sp,#0x100
71018dc0a8  stp x19,xzr,[sp, #0x78]
71018dc0ac  bl 0x7103779f50
71018dc0b0  add x0,sp,#0x260
71018dc0b4  orr w1,wzr,#0x3
71018dc0b8  mov x2,x27
71018dc0bc  bl 0x7103779f50
71018dc0c0  add x0,sp,#0x138
71018dc0c4  mov w2,#0x2
71018dc0c8  mov x1,x24
71018dc0cc  strb wzr,[sp, #0x140]
71018dc0d0  str xzr,[sp, #0x138]
71018dc0d4  bl 0x710062dc20
71018dc0d8  ldur x1,[x29, #-0x88]
71018dc0dc  add x8,sp,#0x88
71018dc0e0  add x0,sp,#0x180
71018dc0e4  bl 0x71037780e0
71018dc0e8  ldr x20,[sp, #0x90]
71018dc0ec  ldr x0,[sp, #0x248]
71018dc0f0  str xzr,[sp, #0x90]
71018dc0f4  str x20,[sp, #0x248]
71018dc0f8  cbz x0,0x71018dc100
71018dc0fc  bl 0x710392eb40
71018dc100  add x0,sp,#0x88
71018dc104  mov w2,#0x2
71018dc108  adrp x1,0x710435b000
71018dc10c  add x1,x1,#0xa8a
71018dc110  stp x26,xzr,[sp, #0x88]
71018dc114  strb wzr,[sp, #0x90]
71018dc118  str xzr,[sp, #0x88]
71018dc11c  bl 0x710062dc20
71018dc120  ldr x1,[sp, #0x70]
71018dc124  add x8,sp,#0x78
71018dc128  add x0,sp,#0x180
71018dc12c  bl 0x7103776910
71018dc130  ldr x26,[sp, #0x80]
71018dc134  ldr x0,[sp, #0x278]
71018dc138  str xzr,[sp, #0x80]
71018dc13c  str x26,[sp, #0x278]
71018dc140  cbz x0,0x71018dc148
71018dc144  bl 0x710392eb40
71018dc148  ldr x23,[sp, #0x48]
71018dc14c  mov w1,#0x2
71018dc150  add x2,sp,#0x100
71018dc154  stp x19,xzr,[sp, #0x78]
71018dc158  mov x0,x23
71018dc15c  bl 0x7103779f50
71018dc160  orr w1,wzr,#0x3
71018dc164  mov x0,x23
71018dc168  mov x2,x27
71018dc16c  bl 0x7103779f50
71018dc170  add x0,sp,#0x138
71018dc174  orr w2,wzr,#0x3
71018dc178  mov x1,x24
71018dc17c  strb wzr,[sp, #0x140]
71018dc180  str xzr,[sp, #0x138]
71018dc184  bl 0x710062dc20
71018dc188  ldur x1,[x29, #-0x88]
71018dc18c  add x8,sp,#0x88
71018dc190  add x0,sp,#0x180
71018dc194  bl 0x71037780e0
71018dc198  ldr x23,[sp, #0x90]
71018dc19c  ldr x0,[sp, #0x258]
71018dc1a0  str xzr,[sp, #0x90]
71018dc1a4  str x23,[sp, #0x258]
71018dc1a8  cbz x0,0x71018dc1b0
71018dc1ac  bl 0x710392eb40
71018dc1b0  adrp x8,0x710523d000
71018dc1b4  add x8,x8,#0x9e8
71018dc1b8  add x0,sp,#0x88
71018dc1bc  orr w2,wzr,#0x3
71018dc1c0  adrp x1,0x710435b000
71018dc1c4  add x1,x1,#0xa8a
71018dc1c8  mov x24,x21
71018dc1cc  stp x8,xzr,[sp, #0x88]
71018dc1d0  scvtf s11,w28
71018dc1d4  strb wzr,[sp, #0x90]
71018dc1d8  str xzr,[sp, #0x88]
71018dc1dc  bl 0x710062dc20
71018dc1e0  ldr x1,[sp, #0x70]
71018dc1e4  add x8,sp,#0x78
71018dc1e8  add x0,sp,#0x180
71018dc1ec  bl 0x7103776910
71018dc1f0  ldr x28,[sp, #0x80]
71018dc1f4  ldr x0,[sp, #0x288]
71018dc1f8  str xzr,[sp, #0x80]
71018dc1fc  str x28,[sp, #0x288]
71018dc200  cbz x0,0x71018dc208
71018dc204  bl 0x710392eb40
71018dc208  stp x19,xzr,[sp, #0x78]
71018dc20c  mov x21,x19
71018dc210  ldr x19,[sp, #0x40]
71018dc214  mov w1,#0x2
71018dc218  add x2,sp,#0x100
71018dc21c  mov x0,x19
71018dc220  bl 0x7103779f50
71018dc224  orr w1,wzr,#0x3
71018dc228  mov x0,x19
71018dc22c  mov x2,x27
71018dc230  mov x19,x21
71018dc234  bl 0x7103779f50
71018dc238  mov v0.16B,v11.16B
71018dc23c  add x0,sp,#0x230
71018dc240  bl 0x710377b010
71018dc244  ldr x0,[sp, #0x38]
71018dc248  mov v0.16B,v10.16B
71018dc24c  bl 0x710377b010
71018dc250  ldr x0,[sp, #0x30]
71018dc254  mov v0.16B,v9.16B
71018dc258  bl 0x710377b010
71018dc25c  ldr x0,[sp, #0xd8]
71018dc260  stp x21,xzr,[sp, #0xd0]
71018dc264  cbz x0,0x71018dc26c
71018dc268  bl 0x710392eb40
71018dc26c  stp x19,xzr,[sp, #0xe0]
71018dc270  cbz x22,0x71018dc27c
71018dc274  mov x0,x22
71018dc278  bl 0x710392eb40
71018dc27c  ldr x0,[sp, #0xf8]
71018dc280  mov x21,x24
71018dc284  stp x19,xzr,[sp, #0xf0]
71018dc288  cbz x0,0x71018dc290
71018dc28c  bl 0x710392eb40
71018dc290  ldr x0,[sp, #0x130]
71018dc294  ldr x24,[sp, #0x20]
71018dc298  adrp x8,0x710523d000
71018dc29c  add x8,x8,#0x9e8
71018dc2a0  stp x8,xzr,[sp, #0x128]
71018dc2a4  cbz x0,0x71018dc2ac
71018dc2a8  bl 0x710392eb40
71018dc2ac  ldr x22,[sp, #0x188]
71018dc2b0  adrp x8,0x710523d000
71018dc2b4  add x8,x8,#0x988
71018dc2b8  stp x8,xzr,[sp, #0x180]
71018dc2bc  cbz x22,0x71018dc2d8
71018dc2c0  ldr x0,[x22, #0x18]
71018dc2c4  stp x19,xzr,[x22, #0x10]
71018dc2c8  cbz x0,0x71018dc2d0
71018dc2cc  bl 0x710392eb40
71018dc2d0  mov x0,x22
71018dc2d4  bl 0x710392eb40
71018dc2d8  ldr x22,[sp, #0x1e0]
71018dc2dc  adrp x8,0x710523d000
71018dc2e0  add x8,x8,#0x988
71018dc2e4  stp x8,xzr,[sp, #0x1d8]
71018dc2e8  cbz x22,0x71018dc304
71018dc2ec  ldr x0,[x22, #0x18]
71018dc2f0  stp x19,xzr,[x22, #0x10]
71018dc2f4  cbz x0,0x71018dc2fc
71018dc2f8  bl 0x710392eb40
71018dc2fc  mov x0,x22
71018dc300  bl 0x710392eb40
71018dc304  ldr x22,[sp, #0x68]
71018dc308  cmp x22,#0x2
71018dc30c  b.ne 0x71018dba90
71018dc310  adrp x8,0x710523d000
71018dc314  add x8,x8,#0x9e8
71018dc318  str x8,[sp, #0x250]
71018dc31c  str xzr,[sp, #0x258]
71018dc320  cbz x23,0x71018dc32c
71018dc324  mov x0,x23
71018dc328  bl 0x710392eb40
71018dc32c  ldr x21,[sp]
71018dc330  adrp x8,0x710523d000
71018dc334  add x8,x8,#0x9e8
71018dc338  str x8,[sp, #0x240]
71018dc33c  str xzr,[sp, #0x248]
71018dc340  cbz x20,0x71018dc34c
71018dc344  mov x0,x20
71018dc348  bl 0x710392eb40
71018dc34c  ldr x20,[sp, #0x10]
71018dc350  adrp x8,0x710523d000
71018dc354  add x8,x8,#0x9e8
71018dc358  str x8,[sp, #0x230]
71018dc35c  str xzr,[sp, #0x238]
71018dc360  cbz x25,0x71018dc36c
71018dc364  mov x0,x25
71018dc368  bl 0x710392eb40
71018dc36c  str x19,[sp, #0x280]
71018dc370  str xzr,[sp, #0x288]
71018dc374  cbz x28,0x71018dc380
71018dc378  mov x0,x28
71018dc37c  bl 0x710392eb40
71018dc380  str x19,[sp, #0x270]
71018dc384  str xzr,[sp, #0x278]
71018dc388  cbz x26,0x71018dc394
71018dc38c  mov x0,x26
71018dc390  bl 0x710392eb40
71018dc394  ldr x0,[sp, #0x18]
71018dc398  str x19,[sp, #0x260]
71018dc39c  str xzr,[sp, #0x268]
71018dc3a0  cbz x0,0x71018dc3a8
71018dc3a4  bl 0x710392eb40
71018dc3a8  ldr x8,[x21]
71018dc3ac  ldr x0,[x8]
71018dc3b0  mov w2,#0x1000
71018dc3b4  mov w1,wzr
71018dc3b8  bl 0x7103775dc0
71018dc3bc  ldr x0,[sp, #0x3b0]
71018dc3c0  ldr x19,[sp, #0x8]
71018dc3c4  add x8,sp,#0x2a0
71018dc3c8  add x8,x8,#0xf0
71018dc3cc  cmp x8,x0
71018dc3d0  b.eq 0x71018dc3e4
71018dc3d4  cbz x0,0x71018dc3f0
71018dc3d8  ldr x8,[x0]
71018dc3dc  ldr x8,[x8, #0x28]
71018dc3e0  b 0x71018dc3ec
71018dc3e4  ldr x8,[x0]
71018dc3e8  ldr x8,[x8, #0x20]
71018dc3ec  blr x8
71018dc3f0  ldr x0,[sp, #0x380]
71018dc3f4  add x8,sp,#0x2a0
71018dc3f8  add x8,x8,#0xc0
71018dc3fc  cmp x8,x0
71018dc400  b.eq 0x71018dc414
71018dc404  cbz x0,0x71018dc420
71018dc408  ldr x8,[x0]
71018dc40c  ldr x8,[x8, #0x28]
71018dc410  b 0x71018dc41c
71018dc414  ldr x8,[x0]
71018dc418  ldr x8,[x8, #0x20]
71018dc41c  blr x8
71018dc420  ldr x0,[sp, #0x350]
71018dc424  add x8,sp,#0x2a0
71018dc428  add x8,x8,#0x90
71018dc42c  cmp x8,x0
71018dc430  b.eq 0x71018dc444
71018dc434  cbz x0,0x71018dc450
71018dc438  ldr x8,[x0]
71018dc43c  ldr x8,[x8, #0x28]
71018dc440  b 0x71018dc44c
71018dc444  ldr x8,[x0]
71018dc448  ldr x8,[x8, #0x20]
71018dc44c  blr x8
71018dc450  ldr x0,[sp, #0x320]
71018dc454  add x8,sp,#0x2a0
71018dc458  add x8,x8,#0x60
71018dc45c  cmp x8,x0
71018dc460  b.eq 0x71018dc474
71018dc464  cbz x0,0x71018dc480
71018dc468  ldr x8,[x0]
71018dc46c  ldr x8,[x8, #0x28]
71018dc470  b 0x71018dc47c
71018dc474  ldr x8,[x0]
71018dc478  ldr x8,[x8, #0x20]
71018dc47c  blr x8
71018dc480  ldr x0,[sp, #0x2f0]
71018dc484  add x8,sp,#0x2a0
71018dc488  add x8,x8,#0x30
71018dc48c  cmp x8,x0
71018dc490  b.eq 0x71018dc4a4
71018dc494  cbz x0,0x71018dc4b0
71018dc498  ldr x8,[x0]
71018dc49c  ldr x8,[x8, #0x28]
71018dc4a0  b 0x71018dc4ac
71018dc4a4  ldr x8,[x0]
71018dc4a8  ldr x8,[x8, #0x20]
71018dc4ac  blr x8
71018dc4b0  ldr x0,[sp, #0x4e0]
71018dc4b4  add x8,sp,#0x3d0
71018dc4b8  add x8,x8,#0xf0
71018dc4bc  cmp x8,x0
71018dc4c0  b.eq 0x71018dc4d4
71018dc4c4  cbz x0,0x71018dc4e0
71018dc4c8  ldr x8,[x0]
71018dc4cc  ldr x8,[x8, #0x28]
71018dc4d0  b 0x71018dc4dc
71018dc4d4  ldr x8,[x0]
71018dc4d8  ldr x8,[x8, #0x20]
71018dc4dc  blr x8
71018dc4e0  ldr x0,[sp, #0x4b0]
71018dc4e4  add x8,sp,#0x3d0
71018dc4e8  add x8,x8,#0xc0
71018dc4ec  cmp x8,x0
71018dc4f0  b.eq 0x71018dc504
71018dc4f4  cbz x0,0x71018dc510
71018dc4f8  ldr x8,[x0]
71018dc4fc  ldr x8,[x8, #0x28]
71018dc500  b 0x71018dc50c
71018dc504  ldr x8,[x0]
71018dc508  ldr x8,[x8, #0x20]
71018dc50c  blr x8
71018dc510  ldr x0,[sp, #0x480]
71018dc514  add x8,sp,#0x3d0
71018dc518  add x8,x8,#0x90
71018dc51c  cmp x8,x0
71018dc520  b.eq 0x71018dc534
71018dc524  cbz x0,0x71018dc540
71018dc528  ldr x8,[x0]
71018dc52c  ldr x8,[x8, #0x28]
71018dc530  b 0x71018dc53c
71018dc534  ldr x8,[x0]
71018dc538  ldr x8,[x8, #0x20]
71018dc53c  blr x8
71018dc540  ldr x0,[sp, #0x450]
71018dc544  add x8,sp,#0x3d0
71018dc548  add x8,x8,#0x60
71018dc54c  cmp x8,x0
71018dc550  b.eq 0x71018dc564
71018dc554  cbz x0,0x71018dc570
71018dc558  ldr x8,[x0]
71018dc55c  ldr x8,[x8, #0x28]
71018dc560  b 0x71018dc56c
71018dc564  ldr x8,[x0]
71018dc568  ldr x8,[x8, #0x20]
71018dc56c  blr x8
71018dc570  ldr x0,[sp, #0x420]
71018dc574  add x8,sp,#0x3d0
71018dc578  add x8,x8,#0x30
71018dc57c  cmp x8,x0
71018dc580  b.eq 0x71018dc594
71018dc584  cbz x0,0x71018dc5a0
71018dc588  ldr x8,[x0]
71018dc58c  ldr x8,[x8, #0x28]
71018dc590  b 0x71018dc59c
71018dc594  ldr x8,[x0]
71018dc598  ldr x8,[x8, #0x20]
71018dc59c  blr x8
71018dc5a0  ldr x0,[sp, #0x580]
71018dc5a4  add x8,sp,#0x500
71018dc5a8  add x8,x8,#0x60
71018dc5ac  cmp x8,x0
71018dc5b0  b.eq 0x71018dc5c4
71018dc5b4  cbz x0,0x71018dc5d0
71018dc5b8  ldr x8,[x0]
71018dc5bc  ldr x8,[x8, #0x28]
71018dc5c0  b 0x71018dc5cc
71018dc5c4  ldr x8,[x0]
71018dc5c8  ldr x8,[x8, #0x20]
71018dc5cc  blr x8
71018dc5d0  adrp x8,0x7105333000
71018dc5d4  add x8,x8,#0x600
71018dc5d8  str x8,[x19, #0x10]
71018dc5dc  ldp w9,w8,[x8, #0x60]
71018dc5e0  stp w9,w8,[x19, #0x68]
71018dc5e4  adrp x8,0x7105333000
71018dc5e8  add x8,x8,#0x650
71018dc5ec  mov w9,#0x1
71018dc5f0  ldaxrb w10,[x8]
71018dc5f4  stxrb w11,w9,[x8]
71018dc5f8  and w10,w10,#0x1
71018dc5fc  cmp w11,#0x0
71018dc600  ccmp w10,#0x0,#0x0,eq
71018dc604  b.ne 0x71018dc5f0
71018dc608  adrp x8,0x7105333000
71018dc60c  add x8,x8,#0x648
71018dc610  ldr x9,[x8]
71018dc614  str x9,[x19, #0x48]
71018dc618  mov x0,x19
71018dc61c  str x19,[x8], #0x8
71018dc620  stlrb wzr,[x8]
71018dc624  bl 0x71032caea0
71018dc628  ldr x0,[x20, #0xe0]
71018dc62c  str x19,[x20, #0xe0]
71018dc630  add sp,sp,#0x5c0
71018dc634  cbz x0,0x71018dc664
71018dc638  ldp d9,d8,[sp, #0x30]
71018dc63c  ldp d11,d10,[sp, #0x20]
71018dc640  ldp d13,d12,[sp, #0x10]
71018dc644  ldp x29,x30,[sp, #0x90]
71018dc648  ldp x20,x19,[sp, #0x80]
71018dc64c  ldp x22,x21,[sp, #0x70]
71018dc650  ldp x24,x23,[sp, #0x60]
71018dc654  ldp x26,x25,[sp, #0x50]
71018dc658  ldp x28,x27,[sp, #0x40]
71018dc65c  ldr d14,[sp], #0xa0
71018dc660  b 0x71032cad20
71018dc664  ldp d9,d8,[sp, #0x30]
71018dc668  ldp d11,d10,[sp, #0x20]
71018dc66c  ldp d13,d12,[sp, #0x10]
71018dc670  ldp x29,x30,[sp, #0x90]
71018dc674  ldp x20,x19,[sp, #0x80]
71018dc678  ldp x22,x21,[sp, #0x70]
71018dc67c  ldp x24,x23,[sp, #0x60]
71018dc680  ldp x26,x25,[sp, #0x50]
71018dc684  ldp x28,x27,[sp, #0x40]
71018dc688  ldr d14,[sp], #0xa0
71018dc68c  ret
71018dc690  bl 0x71039c2650
