// addr:      71000fcff0
// offset:    0xfcff0
// name:      FUN_71000fcff0
// mangled:   
// size:      1092

71000fcff0  sub sp,sp,#0x180
71000fcff4  str x28,[sp, #0x120]
71000fcff8  stp x26,x25,[sp, #0x130]
71000fcffc  stp x24,x23,[sp, #0x140]
71000fd000  stp x22,x21,[sp, #0x150]
71000fd004  stp x20,x19,[sp, #0x160]
71000fd008  stp x29,x30,[sp, #0x170]
71000fd00c  add x29,sp,#0x170
71000fd010  adrp x25,0x71052a5000
71000fd014  ldr x25,[x25, #0x80]
71000fd018  mov x19,x0
71000fd01c  ldr x0,[x25]
71000fd020  bl 0x7100146ba0
71000fd024  sub w8,w0,#0x5
71000fd028  cmp w8,#0x3
71000fd02c  b.hi 0x71000fd054
71000fd030  adrp x9,0x7104496000
71000fd034  add x9,x9,#0x3bc
71000fd038  ldrsw x8,[x9, x8, LSL #0x2]
71000fd03c  add x8,x8,x9
71000fd040  br x8
71000fd044  mov w8,#0x1
71000fd048  orr w9,wzr,#0x3
71000fd04c  mov w10,#0xc406
71000fd050  b 0x71000fd108
71000fd054  adrp x8,0x71052a4000
71000fd058  ldr x8,[x8, #0xdf0]
71000fd05c  ldr x0,[x8]
71000fd060  add x8,sp,#0x28
71000fd064  bl 0x7100192e90
71000fd068  ldr w8,[sp, #0x28]
71000fd06c  cbnz w8,0x71000fd080
71000fd070  ldr x0,[x25]
71000fd074  bl 0x7100146ba0
71000fd078  cmp w0,#0x4
71000fd07c  b.ne 0x71000fd190
71000fd080  mov w8,#0x6c59
71000fd084  str w8,[sp, #0x28]
71000fd088  add x8,sp,#0x28
71000fd08c  orr x20,x8,#0x4
71000fd090  mov x0,x20
71000fd094  bl 0x71039c0a80
71000fd098  add x1,sp,#0x18
71000fd09c  mov x0,x20
71000fd0a0  str wzr,[sp, #0x18]
71000fd0a4  bl 0x71039c0a90
71000fd0a8  add x0,x19,#0x220
71000fd0ac  add x1,sp,#0x28
71000fd0b0  bl 0x71000bcf30
71000fd0b4  adrp x8,0x71052a5000
71000fd0b8  ldr x8,[x8, #0x238]
71000fd0bc  mov w9,#0x4
71000fd0c0  strb w9,[x19, #0x130]
71000fd0c4  adrp x9,0x7104290000
71000fd0c8  add x9,x9,#0xd05
71000fd0cc  str x9,[x19, #0x40]
71000fd0d0  stp x8,xzr,[x19, #0x30]
71000fd0d4  mov w0,#0x5
71000fd0d8  b 0x71000fd170
71000fd0dc  mov w8,#0x1
71000fd0e0  orr w9,wzr,#0x3
71000fd0e4  mov w10,#0xa471
71000fd0e8  b 0x71000fd108
71000fd0ec  mov w8,#0x1
71000fd0f0  orr w9,wzr,#0x3
71000fd0f4  mov w10,#0xc420
71000fd0f8  b 0x71000fd108
71000fd0fc  mov w8,#0x1
71000fd100  orr w9,wzr,#0x3
71000fd104  mov w10,#0xc421
71000fd108  strb w8,[x19, #0xfa]
71000fd10c  add x8,sp,#0x28
71000fd110  orr x20,x8,#0x4
71000fd114  mov x0,x20
71000fd118  strb w9,[x19, #0x130]
71000fd11c  str w10,[sp, #0x28]
71000fd120  bl 0x71039c0a80
71000fd124  add x1,sp,#0x18
71000fd128  mov x0,x20
71000fd12c  str wzr,[sp, #0x18]
71000fd130  bl 0x71039c0a90
71000fd134  add x0,x19,#0x220
71000fd138  add x1,sp,#0x28
71000fd13c  bl 0x71000bcf30
71000fd140  ldr x8,[x25]
71000fd144  ldr x0,[x8, #0x8]
71000fd148  ldr x8,[x0]
71000fd14c  ldr x8,[x8, #0x28]
71000fd150  blr x8
71000fd154  adrp x8,0x71052a5000
71000fd158  ldr x8,[x8, #0x240]
71000fd15c  mov x0,xzr
71000fd160  stp x8,xzr,[x19, #0x30]
71000fd164  adrp x8,0x71043ac000
71000fd168  add x8,x8,#0x982
71000fd16c  str x8,[x19, #0x40]
71000fd170  ldp x29,x30,[sp, #0x170]
71000fd174  ldr x28,[sp, #0x120]
71000fd178  ldp x20,x19,[sp, #0x160]
71000fd17c  ldp x22,x21,[sp, #0x150]
71000fd180  ldp x24,x23,[sp, #0x140]
71000fd184  ldp x26,x25,[sp, #0x130]
71000fd188  add sp,sp,#0x180
71000fd18c  ret
71000fd190  ldrb w8,[x19, #0xfb]
71000fd194  cbz w8,0x71000fd1b4
71000fd198  add x1,x19,#0x100
71000fd19c  add x0,x19,#0x220
71000fd1a0  bl 0x71000bcf30
71000fd1a4  adrp x8,0x71052a5000
71000fd1a8  ldr x8,[x8, #0x238]
71000fd1ac  orr w9,wzr,#0x6
71000fd1b0  b 0x71000fd0c0
71000fd1b4  ldr x0,[x19, #0x58]
71000fd1b8  cbz x0,0x71000fd208
71000fd1bc  ldrb w8,[x0, #0x28]
71000fd1c0  cbz w8,0x71000fd208
71000fd1c4  ldr w8,[x0]
71000fd1c8  sub w8,w8,#0x2
71000fd1cc  cmp w8,#0x3
71000fd1d0  b.cc 0x71000fd1d8
71000fd1d4  bl 0x71000b4260
71000fd1d8  str xzr,[x19, #0x58]
71000fd1dc  ldr x8,[x25]
71000fd1e0  ldrb w9,[x8, #0x162]
71000fd1e4  cmp w9,#0x0
71000fd1e8  cset w9,eq
71000fd1ec  add x8,x8,w9, UXTW  #0x3
71000fd1f0  ldr x0,[x8, #0x168]
71000fd1f4  bl 0x71000d8f90
71000fd1f8  mov x0,x19
71000fd1fc  bl 0x7100140910
71000fd200  mov w0,#0x1
71000fd204  b 0x71000fd170
71000fd208  ldr x23,[x25]
71000fd20c  ldrb w8,[x19, #0xf4]
71000fd210  cbz w8,0x71000fd22c
71000fd214  ldrb w8,[x19, #0x234]
71000fd218  cbz w8,0x71000fd22c
71000fd21c  ldr x8,[x19, #0x238]
71000fd220  ldr x9,[x23, #0xf0]
71000fd224  cmp x8,x9
71000fd228  b.ne 0x71000fd3cc
71000fd22c  ldr x21,[x19, #0xb0]
71000fd230  add x20,x19,#0xa8
71000fd234  cmp x21,x20
71000fd238  b.eq 0x71000fd39c
71000fd23c  mov w26,wzr
71000fd240  add x22,sp,#0x28
71000fd244  ldr x0,[x23, #0xb8]
71000fd248  ldr x1,[x21, #0x10]
71000fd24c  bl 0x7100150680
71000fd250  tbz w0,#0x0,0x71000fd280
71000fd254  ldr x0,[x23, #0xb8]
71000fd258  ldr x1,[x21, #0x10]
71000fd25c  bl 0x7100150550
71000fd260  cbnz w0,0x71000fd280
71000fd264  ldr x0,[x23, #0xb8]
71000fd268  ldr x1,[x21, #0x10]
71000fd26c  bl 0x7100150720
71000fd270  tbnz w0,#0x0,0x71000fd280
71000fd274  ldr x8,[x21, #0x10]
71000fd278  str x8,[x22, w26, UXTW #0x3]
71000fd27c  add w26,w26,#0x1
71000fd280  ldr x21,[x21, #0x8]
71000fd284  cmp x21,x20
71000fd288  b.ne 0x71000fd244
71000fd28c  cbz w26,0x71000fd39c
71000fd290  ldrb w8,[x23, #0x162]
71000fd294  cmp x8,#0x0
71000fd298  add x8,x23,x8, LSL #0x2
71000fd29c  cset w9,eq
71000fd2a0  add x9,x23,w9, UXTW  #0x3
71000fd2a4  ldr x20,[x9, #0x168]
71000fd2a8  ldr x21,[x23, #0xc8]
71000fd2ac  ldr w23,[x8, #0x180]
71000fd2b0  ldr x8,[x20]
71000fd2b4  ldr x8,[x8, #0xf0]
71000fd2b8  ldr w22,[x19, #0x90]
71000fd2bc  ldr w24,[x19, #0xf0]
71000fd2c0  mov x0,x20
71000fd2c4  blr x8
71000fd2c8  mov x4,x0
71000fd2cc  add x5,x20,#0x568
71000fd2d0  add x8,sp,#0x18
71000fd2d4  mov w6,#0x20
71000fd2d8  add x7,sp,#0x28
71000fd2dc  strh w26,[sp]
71000fd2e0  mov x0,x21
71000fd2e4  mov w1,w22
71000fd2e8  mov w2,w23
71000fd2ec  mov w3,w24
71000fd2f0  bl 0x710014e550
71000fd2f4  mov w8,#0x4c0d
71000fd2f8  str w8,[sp, #0x8]
71000fd2fc  add x8,sp,#0x8
71000fd300  orr x20,x8,#0x4
71000fd304  mov x0,x20
71000fd308  bl 0x71039c0a80
71000fd30c  sub x1,x29,#0x48
71000fd310  mov x0,x20
71000fd314  stur wzr,[x29, #-0x48]
71000fd318  bl 0x71039c0a90
71000fd31c  ldr w8,[sp, #0x18]
71000fd320  cbz w8,0x71000fd39c
71000fd324  ldr w9,[sp, #0x8]
71000fd328  cmp w8,w9
71000fd32c  b.eq 0x71000fd39c
71000fd330  mov w8,#0x2c0a
71000fd334  str w8,[sp, #0x8]
71000fd338  add x8,sp,#0x8
71000fd33c  orr x20,x8,#0x4
71000fd340  mov x0,x20
71000fd344  bl 0x71039c0a80
71000fd348  sub x1,x29,#0x48
71000fd34c  mov x0,x20
71000fd350  stur wzr,[x29, #-0x48]
71000fd354  bl 0x71039c0a90
71000fd358  ldr w8,[sp, #0x18]
71000fd35c  ldr w9,[sp, #0x8]
71000fd360  cmp w8,w9
71000fd364  b.ne 0x71000fd3f8
71000fd368  mov w8,#0x9
71000fd36c  strb w8,[x19, #0x130]
71000fd370  mov w8,#0x6c57
71000fd374  mov x0,x20
71000fd378  str w8,[sp, #0x8]
71000fd37c  bl 0x71039c0a80
71000fd380  sub x1,x29,#0x48
71000fd384  mov x0,x20
71000fd388  stur wzr,[x29, #-0x48]
71000fd38c  bl 0x71039c0a90
71000fd390  add x0,x19,#0x220
71000fd394  add x1,sp,#0x8
71000fd398  b 0x71000fd408
71000fd39c  adrp x8,0x71052a4000
71000fd3a0  ldr x8,[x8, #0xc70]
71000fd3a4  adrp x9,0x71052a5000
71000fd3a8  ldr x9,[x9, #0x338]
71000fd3ac  ldr x8,[x8]
71000fd3b0  ldr x8,[x8, #0x30]
71000fd3b4  str x8,[x19, #0x1c0]
71000fd3b8  adrp x8,0x71042a2000
71000fd3bc  add x8,x8,#0xcb
71000fd3c0  stp x9,xzr,[x19, #0x30]
71000fd3c4  str x8,[x19, #0x40]
71000fd3c8  b 0x71000fd0d4
71000fd3cc  strb wzr,[x19, #0x234]
71000fd3d0  strb wzr,[x19, #0xf4]
71000fd3d4  adrp x9,0x71052a5000
71000fd3d8  ldr x9,[x9, #0x340]
71000fd3dc  str x8,[x19, #0xa0]
71000fd3e0  adrp x8,0x7104307000
71000fd3e4  add x8,x8,#0x7d0
71000fd3e8  mov x0,xzr
71000fd3ec  str x8,[x19, #0x40]
71000fd3f0  stp x9,xzr,[x19, #0x30]
71000fd3f4  b 0x71000fd170
71000fd3f8  orr w8,wzr,#0x3
71000fd3fc  add x0,x19,#0x220
71000fd400  add x1,sp,#0x18
71000fd404  strb w8,[x19, #0x130]
71000fd408  bl 0x71000bcf30
71000fd40c  ldr x8,[x25]
71000fd410  ldrb w9,[x8, #0x162]
71000fd414  cmp w9,#0x0
71000fd418  cset w9,eq
71000fd41c  add x8,x8,w9, UXTW  #0x3
71000fd420  ldr x0,[x8, #0x168]
71000fd424  bl 0x71000d8f90
71000fd428  adrp x8,0x71052a5000
71000fd42c  ldr x8,[x8, #0x238]
71000fd430  b 0x71000fd0c4
