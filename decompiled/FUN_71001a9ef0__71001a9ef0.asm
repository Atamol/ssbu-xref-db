// addr:      71001a9ef0
// offset:    0x1a9ef0
// name:      FUN_71001a9ef0
// mangled:   
// size:      544

71001a9ef0  sub sp,sp,#0x70
71001a9ef4  stp x28,x27,[sp, #0x10]
71001a9ef8  stp x26,x25,[sp, #0x20]
71001a9efc  stp x24,x23,[sp, #0x30]
71001a9f00  stp x22,x21,[sp, #0x40]
71001a9f04  stp x20,x19,[sp, #0x50]
71001a9f08  stp x29,x30,[sp, #0x60]
71001a9f0c  add x29,sp,#0x60
71001a9f10  adrp x24,0x71052a4000
71001a9f14  ldr x24,[x24, #0xdf0]
71001a9f18  mov x19,x0
71001a9f1c  ldr x0,[x24]
71001a9f20  bl 0x7100193560
71001a9f24  and w8,w0,#0xff
71001a9f28  cmp w8,#0x1f
71001a9f2c  b.ls 0x71001a9f38
71001a9f30  mov w0,#0x1
71001a9f34  b 0x71001aa0f0
71001a9f38  ldrh w8,[x19, #0x58]
71001a9f3c  cbz w8,0x71001aa0cc
71001a9f40  mov w20,w0
71001a9f44  mov x21,xzr
71001a9f48  and x22,x20,#0xff
71001a9f4c  mov w23,#0x1
71001a9f50  cmp x22,x21
71001a9f54  b.eq 0x71001a9f88
71001a9f58  ldr x0,[x24]
71001a9f5c  mov w1,w21
71001a9f60  bl 0x7100190a90
71001a9f64  ldr x8,[x19, #0x70]
71001a9f68  ldr w8,[x8, x21, LSL #0x2]
71001a9f6c  cmp w8,#0x0
71001a9f70  cset w8,eq
71001a9f74  cset w9,ne
71001a9f78  tst w0,#0x1
71001a9f7c  and w8,w23,w8
71001a9f80  and w9,w23,w9
71001a9f84  csel w23,w8,w9,eq
71001a9f88  ldrh w8,[x19, #0x58]
71001a9f8c  add x21,x21,#0x1
71001a9f90  cmp x21,x8
71001a9f94  b.cc 0x71001a9f50
71001a9f98  tbz w23,#0x0,0x71001aa0ec
71001a9f9c  cbz w8,0x71001aa0cc
71001a9fa0  and w25,w20,#0xff
71001a9fa4  mul w26,w8,w25
71001a9fa8  mov w8,#0x1
71001a9fac  str w8,[sp, #0xc]
71001a9fb0  adrp x28,0x71052a4000
71001a9fb4  ldr x28,[x28, #0xdc8]
71001a9fb8  mov w21,wzr
71001a9fbc  orr w27,wzr,#0xff
71001a9fc0  ldr x0,[x28]
71001a9fc4  bl 0x7100161fa0
71001a9fc8  ldr x8,[x0]
71001a9fcc  ldr x8,[x8, #0x48]
71001a9fd0  mov w1,w21
71001a9fd4  blr x8
71001a9fd8  mov x22,x0
71001a9fdc  cbz x0,0x71001aa040
71001a9fe0  ldr w8,[x22, #0x48]
71001a9fe4  cmp w8,#0x5
71001a9fe8  b.ne 0x71001aa040
71001a9fec  mov x0,x22
71001a9ff0  bl 0x710015e850
71001a9ff4  cmn w0,#0x1
71001a9ff8  b.eq 0x71001aa040
71001a9ffc  mov x0,x22
71001aa000  bl 0x710015e850
71001aa004  mov w23,w0
71001aa008  cmp w25,w21
71001aa00c  b.eq 0x71001aa088
71001aa010  ldr x0,[x24]
71001aa014  mov w1,w21
71001aa018  bl 0x7100190a90
71001aa01c  tbz w0,#0x0,0x71001aa088
71001aa020  mov x0,x22
71001aa024  mov x27,x28
71001aa028  and w28,w23,#0xffff
71001aa02c  bl 0x710019b8b0
71001aa030  cbz w28,0x71001aa050
71001aa034  tst w0,#0x1
71001aa038  csel w23,wzr,w23,ne
71001aa03c  b 0x71001aa080
71001aa040  mov w23,wzr
71001aa044  cmp w25,w21
71001aa048  b.eq 0x71001aa088
71001aa04c  b 0x71001aa010
71001aa050  tbnz w0,#0x0,0x71001aa070
71001aa054  ldr x0,[x24]
71001aa058  bl 0x7100193a30
71001aa05c  cbz x0,0x71001aa078
71001aa060  ldrb w1,[x22, #0x38]
71001aa064  mov w2,w20
71001aa068  bl 0x71001ad100
71001aa06c  tbz w0,#0x0,0x71001aa078
71001aa070  mov w23,wzr
71001aa074  b 0x71001aa080
71001aa078  mov w23,wzr
71001aa07c  str wzr,[sp, #0xc]
71001aa080  mov x28,x27
71001aa084  orr w27,wzr,#0xff
71001aa088  sub w8,w23,#0x1
71001aa08c  and w8,w8,#0xffff
71001aa090  ubfx w9,w23,#0x2,#0xe
71001aa094  and x10,x26,#0xffff
71001aa098  add w26,w26,#0x1
71001aa09c  cmp w8,#0x3
71001aa0a0  csinc w8,w9,wzr,cs
71001aa0a4  ldr x9,[x19, #0x68]
71001aa0a8  cmp w8,#0xff
71001aa0ac  csel w8,w8,w27,cc
71001aa0b0  strb w8,[x9, x10, LSL ]
71001aa0b4  ldrh w8,[x19, #0x58]
71001aa0b8  add w21,w21,#0x1
71001aa0bc  cmp w21,w8
71001aa0c0  b.cc 0x71001a9fc0
71001aa0c4  ldr w8,[sp, #0xc]
71001aa0c8  tbz w8,#0x0,0x71001aa0ec
71001aa0cc  adrp x8,0x71052a6000
71001aa0d0  ldr x8,[x8, #0x7f8]
71001aa0d4  mov x0,xzr
71001aa0d8  stp x8,xzr,[x19, #0x30]
71001aa0dc  adrp x8,0x71042e6000
71001aa0e0  add x8,x8,#0x54e
71001aa0e4  str x8,[x19, #0x40]
71001aa0e8  b 0x71001aa0f0
71001aa0ec  mov w0,#0x5
71001aa0f0  ldp x29,x30,[sp, #0x60]
71001aa0f4  ldp x20,x19,[sp, #0x50]
71001aa0f8  ldp x22,x21,[sp, #0x40]
71001aa0fc  ldp x24,x23,[sp, #0x30]
71001aa100  ldp x26,x25,[sp, #0x20]
71001aa104  ldp x28,x27,[sp, #0x10]
71001aa108  add sp,sp,#0x70
71001aa10c  ret
