// addr:      7101df5f80
// offset:    0x1df5f80
// name:      FUN_7101df5f80
// mangled:   
// size:      704

7101df5f80  sub sp,sp,#0x60
7101df5f84  str x21,[sp, #0x30]
7101df5f88  stp x20,x19,[sp, #0x40]
7101df5f8c  stp x29,x30,[sp, #0x50]
7101df5f90  add x29,sp,#0x50
7101df5f94  ldrb w8,[x0, #0x6cd]
7101df5f98  mov x19,x0
7101df5f9c  cbz w8,0x7101df6098
7101df5fa0  add x20,x19,#0x18
7101df5fa4  adrp x1,0x710432a000
7101df5fa8  add x1,x1,#0x5a6
7101df5fac  add x8,sp,#0x20
7101df5fb0  mov x0,x20
7101df5fb4  bl 0x7103776910
7101df5fb8  ldr x0,[sp, #0x28]
7101df5fbc  ldr x8,[x0]
7101df5fc0  cbz x8,0x7101df5fd0
7101df5fc4  ldrb w9,[x8, #0x58]
7101df5fc8  orr w9,w9,#0x1
7101df5fcc  strb w9,[x8, #0x58]
7101df5fd0  adrp x21,0x710523d000
7101df5fd4  add x21,x21,#0x9a8
7101df5fd8  stp x21,xzr,[sp, #0x20]
7101df5fdc  cbz x0,0x7101df5fe4
7101df5fe0  bl 0x710392eb40
7101df5fe4  adrp x1,0x71042b4000
7101df5fe8  add x1,x1,#0xa41
7101df5fec  add x8,sp,#0x20
7101df5ff0  mov x0,x20
7101df5ff4  bl 0x7103776640
7101df5ff8  adrp x1,0x710436c000
7101df5ffc  add x1,x1,#0x8f9
7101df6000  add x8,sp,#0x10
7101df6004  add x0,sp,#0x20
7101df6008  bl 0x7103776640
7101df600c  ldr w8,[x19, #0x638]
7101df6010  cmp w8,#0xd
7101df6014  b.eq 0x7101df6020
7101df6018  cmp w8,#0x4
7101df601c  b.ne 0x7101df60d8
7101df6020  adrp x8,0x7105314000
7101df6024  ldr x8,[x8, #0x510]
7101df6028  ldr x8,[x8]
7101df602c  ldr x8,[x8, #0xd8]
7101df6030  ldr x8,[x8]
7101df6034  ldr x8,[x8]
7101df6038  ldr w9,[x19, #0x6d0]
7101df603c  ldr w8,[x8, #0x24]
7101df6040  cmp w9,w8
7101df6044  b.eq 0x7101df6134
7101df6048  str w8,[x19, #0x6d0]
7101df604c  adrp x1,0x71042b4000
7101df6050  add x1,x1,#0xa41
7101df6054  mov x8,sp
7101df6058  mov x0,x20
7101df605c  bl 0x7103776640
7101df6060  ldr w1,[x19, #0x6d0]
7101df6064  ldr x0,[x19, #0x6e0]
7101df6068  bl 0x7103399f50
7101df606c  ldr x20,[sp, #0x8]
7101df6070  adrp x8,0x710523d000
7101df6074  add x8,x8,#0x988
7101df6078  stp x8,xzr,[sp]
7101df607c  cbz x20,0x7101df6134
7101df6080  ldr x0,[x20, #0x18]
7101df6084  stp x21,xzr,[x20, #0x10]
7101df6088  cbz x0,0x7101df6090
7101df608c  bl 0x710392eb40
7101df6090  mov x0,x20
7101df6094  b 0x7101df6130
7101df6098  add x0,x19,#0x18
7101df609c  adrp x1,0x710432a000
7101df60a0  add x1,x1,#0x5a6
7101df60a4  add x8,sp,#0x20
7101df60a8  bl 0x7103776910
7101df60ac  ldr x0,[sp, #0x28]
7101df60b0  ldr x8,[x0]
7101df60b4  cbz x8,0x7101df60c4
7101df60b8  ldrb w9,[x8, #0x58]
7101df60bc  and w9,w9,#0xfe
7101df60c0  strb w9,[x8, #0x58]
7101df60c4  adrp x8,0x710523d000
7101df60c8  add x8,x8,#0x9a8
7101df60cc  stp x8,xzr,[sp, #0x20]
7101df60d0  cbnz x0,0x7101df6228
7101df60d4  b 0x7101df622c
7101df60d8  adrp x8,0x7105314000
7101df60dc  ldr x8,[x8, #0x510]
7101df60e0  ldr x8,[x8]
7101df60e4  ldr x8,[x8, #0xd8]
7101df60e8  ldr x8,[x8]
7101df60ec  ldr x8,[x8]
7101df60f0  ldr w8,[x8, #0x24]
7101df60f4  str w8,[x19, #0x6d0]
7101df60f8  adrp x1,0x71042b2000
7101df60fc  add x1,x1,#0x92e
7101df6100  mov x8,sp
7101df6104  add x0,sp,#0x10
7101df6108  bl 0x7103776910
7101df610c  ldr w3,[x19, #0x6d0]
7101df6110  adrp x1,0x71042d6000
7101df6114  add x1,x1,#0x82a
7101df6118  mov x0,sp
7101df611c  mov w2,#0x1
7101df6120  bl 0x710377a280
7101df6124  ldr x0,[sp, #0x8]
7101df6128  stp x21,xzr,[sp]
7101df612c  cbz x0,0x7101df6134
7101df6130  bl 0x710392eb40
7101df6134  ldr w8,[x19, #0x6d4]
7101df6138  cbz w8,0x7101df61a4
7101df613c  adrp x1,0x7104401000
7101df6140  add x1,x1,#0xa40
7101df6144  mov x8,sp
7101df6148  add x0,sp,#0x20
7101df614c  bl 0x7103776910
7101df6150  ldr w3,[x19, #0x6d4]
7101df6154  adrp x1,0x710438c000
7101df6158  add x1,x1,#0xfda
7101df615c  mov x0,sp
7101df6160  mov w2,#0x1
7101df6164  bl 0x710377a280
7101df6168  ldr x0,[sp, #0x8]
7101df616c  stp x21,xzr,[sp]
7101df6170  cbz x0,0x7101df6178
7101df6174  bl 0x710392eb40
7101df6178  adrp x1,0x7104401000
7101df617c  add x1,x1,#0xa40
7101df6180  mov x8,sp
7101df6184  add x0,sp,#0x20
7101df6188  bl 0x7103776910
7101df618c  ldr x0,[sp, #0x8]
7101df6190  ldr x8,[x0]
7101df6194  cbz x8,0x7101df61d0
7101df6198  ldrb w9,[x8, #0x58]
7101df619c  orr w9,w9,#0x1
7101df61a0  b 0x7101df61cc
7101df61a4  adrp x1,0x7104401000
7101df61a8  add x1,x1,#0xa40
7101df61ac  mov x8,sp
7101df61b0  add x0,sp,#0x20
7101df61b4  bl 0x7103776910
7101df61b8  ldr x0,[sp, #0x8]
7101df61bc  ldr x8,[x0]
7101df61c0  cbz x8,0x7101df61d0
7101df61c4  ldrb w9,[x8, #0x58]
7101df61c8  and w9,w9,#0xfe
7101df61cc  strb w9,[x8, #0x58]
7101df61d0  stp x21,xzr,[sp]
7101df61d4  cbz x0,0x7101df61dc
7101df61d8  bl 0x710392eb40
7101df61dc  ldr x19,[sp, #0x18]
7101df61e0  adrp x20,0x710523d000
7101df61e4  add x20,x20,#0x988
7101df61e8  stp x20,xzr,[sp, #0x10]
7101df61ec  cbz x19,0x7101df6208
7101df61f0  ldr x0,[x19, #0x18]
7101df61f4  stp x21,xzr,[x19, #0x10]
7101df61f8  cbz x0,0x7101df6200
7101df61fc  bl 0x710392eb40
7101df6200  mov x0,x19
7101df6204  bl 0x710392eb40
7101df6208  ldr x19,[sp, #0x28]
7101df620c  stp x20,xzr,[sp, #0x20]
7101df6210  cbz x19,0x7101df622c
7101df6214  ldr x0,[x19, #0x18]
7101df6218  stp x21,xzr,[x19, #0x10]
7101df621c  cbz x0,0x7101df6224
7101df6220  bl 0x710392eb40
7101df6224  mov x0,x19
7101df6228  bl 0x710392eb40
7101df622c  ldp x29,x30,[sp, #0x50]
7101df6230  ldr x21,[sp, #0x30]
7101df6234  ldp x20,x19,[sp, #0x40]
7101df6238  add sp,sp,#0x60
7101df623c  ret
