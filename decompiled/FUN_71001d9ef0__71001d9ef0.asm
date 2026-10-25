// addr:      71001d9ef0
// offset:    0x1d9ef0
// name:      FUN_71001d9ef0
// mangled:   
// size:      488

71001d9ef0  sub sp,sp,#0x50
71001d9ef4  stp x22,x21,[sp, #0x20]
71001d9ef8  stp x20,x19,[sp, #0x30]
71001d9efc  stp x29,x30,[sp, #0x40]
71001d9f00  add x29,sp,#0x40
71001d9f04  adrp x8,0x71052a4000
71001d9f08  ldr x8,[x8, #0xda8]
71001d9f0c  adrp x20,0x71052a4000
71001d9f10  ldrb w8,[x8]
71001d9f14  ldr x20,[x20, #0xdb0]
71001d9f18  add x19,x20,#0x28
71001d9f1c  cbz w8,0x71001d9f58
71001d9f20  adrp x8,0x71052a4000
71001d9f24  ldr x8,[x8, #0xdb8]
71001d9f28  ldr x0,[x8]
71001d9f2c  bl 0x7101717960
71001d9f30  ldr w8,[x0]
71001d9f34  cbz w8,0x71001d9f58
71001d9f38  ldr x10,[x20, #0xa0]
71001d9f3c  ldp x9,x10,[x10]
71001d9f40  sub x10,x10,x9
71001d9f44  asr x10,x10,#0x3
71001d9f48  cmp x10,x8
71001d9f4c  b.ls 0x71001d9fa4
71001d9f50  ldr x8,[x9, x8, LSL #0x3]
71001d9f54  add x19,x8,#0x20
71001d9f58  ldr x8,[x19]
71001d9f5c  cbz x8,0x71001da0c4
71001d9f60  ldr x8,[x8, #0x10]
71001d9f64  cbz x8,0x71001da0c4
71001d9f68  ldr x19,[x8, #0x10]
71001d9f6c  cbz x19,0x71001da0c4
71001d9f70  ldr x8,[x19, #0x18]
71001d9f74  ldp x9,x8,[x8, #0x58]
71001d9f78  cmp x8,x9
71001d9f7c  b.ne 0x71001da0c4
71001d9f80  str xzr,[sp, #0x10]
71001d9f84  adrp x8,0x71052a6000
71001d9f88  ldr x8,[x8, #0x868]
71001d9f8c  ldrb w8,[x8]
71001d9f90  cbz w8,0x71001d9fcc
71001d9f94  add x8,sp,#0x8
71001d9f98  mov w0,wzr
71001d9f9c  bl 0x71001b68a0
71001d9fa0  b 0x71001d9fd4
71001d9fa4  ldp x29,x30,[sp, #0x40]
71001d9fa8  adrp x0,0x71042c4000
71001d9fac  add x0,x0,#0x35f
71001d9fb0  ldp x20,x19,[sp, #0x30]
71001d9fb4  ldp x22,x21,[sp, #0x20]
71001d9fb8  mov w1,#0x47
71001d9fbc  orr w2,wzr,#0xe0000003
71001d9fc0  mov w3,wzr
71001d9fc4  add sp,sp,#0x50
71001d9fc8  b 0x71001b1300
71001d9fcc  add x8,sp,#0x8
71001d9fd0  bl 0x71001b6a50
71001d9fd4  adrp x8,0x71052a6000
71001d9fd8  ldr x8,[x8, #0x870]
71001d9fdc  ldr x9,[sp, #0x8]
71001d9fe0  str x9,[x8]
71001d9fe4  mov x20,x19
71001d9fe8  ldr x8,[x20, #0x78]!
71001d9fec  ldr x8,[x8, #0x10]
71001d9ff0  mov x0,x20
71001d9ff4  blr x8
71001d9ff8  ldr x21,[x20, #0x100]
71001d9ffc  ldr x8,[x20, #0x110]
71001da000  cmp x21,x8
71001da004  b.eq 0x71001da0b0
71001da008  orr w22,wzr,#0x3
71001da00c  add x8,x21,#0x8
71001da010  ldar w10,[x8]
71001da014  ldaxr w9,[x8]
71001da018  cmp w9,w10
71001da01c  b.ne 0x71001da038
71001da020  add w10,w10,#0x1
71001da024  stlxr w11,w10,[x8]
71001da028  cbnz w11,0x71001da03c
71001da02c  mov w10,#0x1
71001da030  tbz w10,#0x0,0x71001da044
71001da034  b 0x71001da07c
71001da038  clrex 
71001da03c  mov w10,wzr
71001da040  tbnz w10,#0x0,0x71001da07c
71001da044  ldaxr w10,[x8]
71001da048  cmp w10,w9
71001da04c  b.ne 0x71001da06c
71001da050  add w9,w9,#0x1
71001da054  stlxr w11,w9,[x8]
71001da058  cbnz w11,0x71001da070
71001da05c  mov w11,#0x1
71001da060  mov w9,w10
71001da064  cbz w11,0x71001da044
71001da068  b 0x71001da07c
71001da06c  clrex 
71001da070  mov w11,wzr
71001da074  mov w9,w10
71001da078  cbz w11,0x71001da044
71001da07c  str w22,[x21, #0x40]
71001da080  ldr x8,[sp, #0x8]
71001da084  add x2,sp,#0x10
71001da088  add x3,sp,#0x18
71001da08c  mov x0,x19
71001da090  mov x1,x21
71001da094  str x8,[sp, #0x18]
71001da098  bl 0x71001d9b70
71001da09c  str wzr,[x21, #0x40]
71001da0a0  ldr x21,[x21, #0x10]
71001da0a4  ldr x8,[x19, #0x188]
71001da0a8  cmp x21,x8
71001da0ac  b.ne 0x71001da00c
71001da0b0  ldr x8,[x19, #0x78]
71001da0b4  strb wzr,[x19, #0x1d0]
71001da0b8  ldr x8,[x8, #0x20]
71001da0bc  mov x0,x20
71001da0c0  blr x8
71001da0c4  ldp x29,x30,[sp, #0x40]
71001da0c8  ldp x20,x19,[sp, #0x30]
71001da0cc  ldp x22,x21,[sp, #0x20]
71001da0d0  add sp,sp,#0x50
71001da0d4  ret
