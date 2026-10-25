// addr:      71002a9eb0
// offset:    0x2a9eb0
// name:      FUN_71002a9eb0
// mangled:   
// size:      832

71002a9eb0  sub sp,sp,#0x60
71002a9eb4  stp x24,x23,[sp, #0x20]
71002a9eb8  stp x22,x21,[sp, #0x30]
71002a9ebc  stp x20,x19,[sp, #0x40]
71002a9ec0  stp x29,x30,[sp, #0x50]
71002a9ec4  add x29,sp,#0x50
71002a9ec8  adrp x24,0x71052a4000
71002a9ecc  ldr x24,[x24, #0xda8]
71002a9ed0  adrp x23,0x71052a4000
71002a9ed4  ldrb w8,[x24]
71002a9ed8  ldr x23,[x23, #0xdb0]
71002a9edc  mov x21,x1
71002a9ee0  mov x19,x0
71002a9ee4  add x20,x23,#0x28
71002a9ee8  cbz w8,0x71002a9f24
71002a9eec  adrp x8,0x71052a4000
71002a9ef0  ldr x8,[x8, #0xdb8]
71002a9ef4  ldr x0,[x8]
71002a9ef8  bl 0x7101717960
71002a9efc  ldr w8,[x0]
71002a9f00  cbz w8,0x71002a9f24
71002a9f04  ldr x10,[x23, #0xa0]
71002a9f08  ldp x9,x10,[x10]
71002a9f0c  sub x10,x10,x9
71002a9f10  asr x10,x10,#0x3
71002a9f14  cmp x10,x8
71002a9f18  b.ls 0x71002a9f3c
71002a9f1c  ldr x8,[x9, x8, LSL #0x3]
71002a9f20  add x20,x8,#0x20
71002a9f24  ldr x8,[x20]
71002a9f28  cbz x8,0x71002a9f54
71002a9f2c  ldr x8,[x8, #0x10]
71002a9f30  cbz x8,0x71002a9f54
71002a9f34  ldr x20,[x8, #0x10]
71002a9f38  b 0x71002a9f58
71002a9f3c  adrp x0,0x71042c4000
71002a9f40  add x0,x0,#0x35f
71002a9f44  mov w1,#0x47
71002a9f48  orr w2,wzr,#0xe0000003
71002a9f4c  mov w3,wzr
71002a9f50  bl 0x71001b1300
71002a9f54  mov x20,xzr
71002a9f58  ldr x8,[x20, #0x78]!
71002a9f5c  ldr x8,[x8, #0x10]
71002a9f60  mov x0,x20
71002a9f64  blr x8
71002a9f68  ldr x8,[x19, #0x38]
71002a9f6c  cbz x8,0x71002a9f78
71002a9f70  mov x0,x19
71002a9f74  bl 0x71002aac90
71002a9f78  mov w0,#0x190
71002a9f7c  bl 0x71001af850
71002a9f80  mov x22,x0
71002a9f84  cbz x0,0x71002aa08c
71002a9f88  mov w1,#0x2
71002a9f8c  mov x2,sp
71002a9f90  mov x0,x22
71002a9f94  bl 0x71001d38d0
71002a9f98  adrp x8,0x71052a8000
71002a9f9c  ldr x8,[x8, #0x8b8]
71002a9fa0  adrp x9,0x71052a8000
71002a9fa4  ldr x9,[x9, #0x8e0]
71002a9fa8  adrp x10,0x71052a8000
71002a9fac  ldr x10,[x10, #0x760]
71002a9fb0  mov x0,x22
71002a9fb4  add x8,x8,#0x10
71002a9fb8  str x8,[x22]
71002a9fbc  adrp x8,0x71052a4000
71002a9fc0  add x9,x9,#0x10
71002a9fc4  ldr x8,[x8, #0xd80]
71002a9fc8  stp x19,x9,[x22, #0xa0]
71002a9fcc  add x9,x10,#0x10
71002a9fd0  ldr x10,[x21, #0x8]
71002a9fd4  ldr w11,[x21, #0x10]
71002a9fd8  add x8,x8,#0x10
71002a9fdc  stp x9,xzr,[x22, #0xc0]
71002a9fe0  mov x9,x22
71002a9fe4  str w11,[x22, #0xb8]
71002a9fe8  str x10,[x22, #0xb0]
71002a9fec  adrp x1,0x7104411000
71002a9ff0  add x1,x1,#0x4cc
71002a9ff4  str x8,[x0, #0xd0]!
71002a9ff8  strb wzr,[x9, #0xd8]!
71002a9ffc  mov w8,#0x10
71002aa000  stp x9,x8,[x22, #0xe8]
71002aa004  bl 0x71001b3cb0
71002aa008  str wzr,[x22, #0xf8]
71002aa00c  adrp x8,0x71052a8000
71002aa010  ldr x8,[x8, #0x8e8]
71002aa014  adrp x9,0x71052a6000
71002aa018  ldr x9,[x9, #0x970]
71002aa01c  add x8,x8,#0x10
71002aa020  str x8,[x22, #0xc0]
71002aa024  add x8,x9,#0x10
71002aa028  mov w9,#0x1
71002aa02c  str x8,[x22, #0x100]
71002aa030  add x8,x22,#0x108
71002aa034  stlr w9,[x8]
71002aa038  strb wzr,[x22, #0x10c]
71002aa03c  adrp x8,0x71052a6000
71002aa040  ldr x8,[x8, #0xbd0]
71002aa044  str xzr,[x22, #0x110]
71002aa048  str wzr,[x22, #0x118]
71002aa04c  str xzr,[x22, #0x150]
71002aa050  stp xzr,xzr,[x22, #0x130]
71002aa054  add x8,x8,#0x10
71002aa058  stp xzr,xzr,[x22, #0x140]
71002aa05c  str x8,[x22, #0x100]
71002aa060  add x8,x22,#0x120
71002aa064  stp x8,x8,[x22, #0x120]
71002aa068  add x0,x22,#0x158
71002aa06c  mov w8,#0x1
71002aa070  movk w8,#0x8001, LSL #16
71002aa074  mov x1,sp
71002aa078  str w8,[sp]
71002aa07c  bl 0x71001b4200
71002aa080  str xzr,[x22, #0x170]
71002aa084  str wzr,[x22, #0x178]
71002aa088  stp xzr,xzr,[x22, #0x180]
71002aa08c  str x22,[x19, #0x38]
71002aa090  add x8,x22,#0x8
71002aa094  ldar w10,[x8]
71002aa098  ldaxr w9,[x8]
71002aa09c  cmp w9,w10
71002aa0a0  b.ne 0x71002aa0bc
71002aa0a4  add w10,w10,#0x1
71002aa0a8  stlxr w11,w10,[x8]
71002aa0ac  cbnz w11,0x71002aa0c0
71002aa0b0  mov w10,#0x1
71002aa0b4  tbz w10,#0x0,0x71002aa0c8
71002aa0b8  b 0x71002aa110
71002aa0bc  clrex 
71002aa0c0  mov w10,wzr
71002aa0c4  tbnz w10,#0x0,0x71002aa110
71002aa0c8  ldaxr w10,[x8]
71002aa0cc  cmp w10,w9
71002aa0d0  b.ne 0x71002aa0f0
71002aa0d4  add w9,w9,#0x1
71002aa0d8  stlxr w11,w9,[x8]
71002aa0dc  cbz w11,0x71002aa104
71002aa0e0  mov w11,wzr
71002aa0e4  mov w9,w10
71002aa0e8  cbz w11,0x71002aa0c8
71002aa0ec  b 0x71002aa110
71002aa0f0  clrex 
71002aa0f4  mov w11,wzr
71002aa0f8  mov w9,w10
71002aa0fc  cbz w11,0x71002aa0c8
71002aa100  b 0x71002aa110
71002aa104  mov w11,#0x1
71002aa108  mov w9,w10
71002aa10c  cbz w11,0x71002aa0c8
71002aa110  adrp x8,0x71052a6000
71002aa114  ldr x8,[x8, #0xc28]
71002aa118  adrp x9,0x71052a8000
71002aa11c  ldr x9,[x9, #0x8c8]
71002aa120  ldr x0,[x19, #0x38]
71002aa124  add x8,x8,#0x10
71002aa128  stp x8,x9,[sp]
71002aa12c  adrp x8,0x7104411000
71002aa130  add x8,x8,#0x4cc
71002aa134  mov x1,sp
71002aa138  stp xzr,x8,[sp, #0x10]
71002aa13c  bl 0x71001d3d60
71002aa140  ldrb w8,[x24]
71002aa144  add x21,x23,#0x28
71002aa148  cbz w8,0x71002aa184
71002aa14c  adrp x8,0x71052a4000
71002aa150  ldr x8,[x8, #0xdb8]
71002aa154  ldr x0,[x8]
71002aa158  bl 0x7101717960
71002aa15c  ldr w8,[x0]
71002aa160  cbz w8,0x71002aa184
71002aa164  ldr x10,[x23, #0xa0]
71002aa168  ldp x9,x10,[x10]
71002aa16c  sub x10,x10,x9
71002aa170  asr x10,x10,#0x3
71002aa174  cmp x10,x8
71002aa178  b.ls 0x71002aa19c
71002aa17c  ldr x8,[x9, x8, LSL #0x3]
71002aa180  add x21,x8,#0x20
71002aa184  ldr x8,[x21]
71002aa188  cbz x8,0x71002aa1b4
71002aa18c  ldr x8,[x8, #0x10]
71002aa190  cbz x8,0x71002aa1b4
71002aa194  ldr x0,[x8, #0x10]
71002aa198  b 0x71002aa1b8
71002aa19c  adrp x0,0x71042c4000
71002aa1a0  add x0,x0,#0x35f
71002aa1a4  mov w1,#0x47
71002aa1a8  orr w2,wzr,#0xe0000003
71002aa1ac  mov w3,wzr
71002aa1b0  bl 0x71001b1300
71002aa1b4  mov x0,xzr
71002aa1b8  ldr x1,[x19, #0x38]
71002aa1bc  mov w2,wzr
71002aa1c0  bl 0x71001ccdf0
71002aa1c4  ldr x8,[x20]
71002aa1c8  ldr x8,[x8, #0x20]
71002aa1cc  mov x0,x20
71002aa1d0  blr x8
71002aa1d4  ldp x29,x30,[sp, #0x50]
71002aa1d8  mov w0,#0x1
71002aa1dc  ldp x20,x19,[sp, #0x40]
71002aa1e0  ldp x22,x21,[sp, #0x30]
71002aa1e4  ldp x24,x23,[sp, #0x20]
71002aa1e8  add sp,sp,#0x60
71002aa1ec  ret
