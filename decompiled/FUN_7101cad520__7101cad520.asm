// addr:      7101cad520
// offset:    0x1cad520
// name:      FUN_7101cad520
// mangled:   
// size:      1540

7101cad520  str d8,[sp, #-0x70]!
7101cad524  stp x28,x27,[sp, #0x10]
7101cad528  stp x26,x25,[sp, #0x20]
7101cad52c  stp x24,x23,[sp, #0x30]
7101cad530  stp x22,x21,[sp, #0x40]
7101cad534  stp x20,x19,[sp, #0x50]
7101cad538  stp x29,x30,[sp, #0x60]
7101cad53c  add x29,sp,#0x60
7101cad540  sub sp,sp,#0xb20
7101cad544  ldr w8,[x0, #0x18c]
7101cad548  ldr x24,[x0, #0x1a0]
7101cad54c  mov x19,x0
7101cad550  cbz w8,0x7101cad58c
7101cad554  ldr x0,[x24, #0x80]
7101cad558  ldr w8,[x0, #0xe8]
7101cad55c  orr w8,w8,#0x4
7101cad560  cmp w8,#0x5
7101cad564  b.ne 0x7101cadafc
7101cad568  ldrb w8,[x0, #0x130]
7101cad56c  cbz w8,0x7101cad75c
7101cad570  ldrsw x8,[x19, #0x184]
7101cad574  cmp w8,#0x13
7101cad578  b.cs 0x7101cadb20
7101cad57c  add x8,x19,x8, LSL #0x2
7101cad580  ldr w9,[x8, #0x138]
7101cad584  add w9,w9,#0x1
7101cad588  b 0x7101cad77c
7101cad58c  adrp x27,0x710532f000
7101cad590  ldr x8,[x27, #0x8f8]
7101cad594  ldr x20,[x19, #0x1a8]
7101cad598  ldr x25,[x24, #0x80]
7101cad59c  mov x1,x20
7101cad5a0  ldr x21,[x8, #0x8]
7101cad5a4  mov x0,x21
7101cad5a8  bl 0x710334fdc0
7101cad5ac  stp x0,x1,[x29, #-0x78]
7101cad5b0  cbz x1,0x7101cad5c4
7101cad5b4  mov x2,x0
7101cad5b8  mov x0,x21
7101cad5bc  bl 0x710334c7d0
7101cad5c0  b 0x7101cad5c8
7101cad5c4  orr w0,wzr,#0xffff
7101cad5c8  ldr x8,[x25, #0x100]
7101cad5cc  strh w0,[x25, #0x120]
7101cad5d0  ldr x23,[x8]
7101cad5d4  add x22,x25,#0x108
7101cad5d8  add x8,sp,#0x10
7101cad5dc  mov x0,x22
7101cad5e0  mov w1,wzr
7101cad5e4  bl 0x7103771e50
7101cad5e8  adrp x1,0x710424f000
7101cad5ec  add x1,x1,#0xa6f
7101cad5f0  add x0,sp,#0x10
7101cad5f4  bl 0x710377a120
7101cad5f8  ldr x0,[sp, #0x18]
7101cad5fc  adrp x26,0x710523d000
7101cad600  add x26,x26,#0x9a8
7101cad604  stp x26,xzr,[sp, #0x10]
7101cad608  cbz x0,0x7101cad610
7101cad60c  bl 0x710392eb40
7101cad610  add x8,sp,#0x10
7101cad614  mov w1,#0x1
7101cad618  mov x0,x22
7101cad61c  add x21,x23,#0x8
7101cad620  bl 0x7103771e50
7101cad624  adrp x1,0x710434a000
7101cad628  add x1,x1,#0x87d
7101cad62c  add x0,sp,#0x10
7101cad630  bl 0x710377a120
7101cad634  ldr x0,[sp, #0x18]
7101cad638  stp x26,xzr,[sp, #0x10]
7101cad63c  cbz x0,0x7101cad644
7101cad640  bl 0x710392eb40
7101cad644  mov w2,#0x1
7101cad648  mov x0,x22
7101cad64c  mov w1,wzr
7101cad650  bl 0x7103771a80
7101cad654  ldr x0,[x23, #0x10]
7101cad658  adrp x1,0x710438c000
7101cad65c  add x1,x1,#0xbd1
7101cad660  bl 0x7103778760
7101cad664  stur wzr,[x29, #-0xc0]
7101cad668  sub x8,x29,#0xc0
7101cad66c  sturh wzr,[x29, #-0xbc]
7101cad670  orr x22,x8,#0x4
7101cad674  ldrh w8,[x25, #0x120]
7101cad678  cmp w8,#0x4
7101cad67c  b.hi 0x7101cad9d8
7101cad680  adrp x9,0x71044f9000
7101cad684  add x9,x9,#0xc3c
7101cad688  ldrsw x8,[x9, x8, LSL #0x2]
7101cad68c  add x8,x8,x9
7101cad690  br x8
7101cad694  fmov s8,0x3f800000
7101cad698  ldr x0,[x23, #0x10]
7101cad69c  adrp x1,0x710425f000
7101cad6a0  add x1,x1,#0x56d
7101cad6a4  mov v0.16B,v8.16B
7101cad6a8  bl 0x7103778300
7101cad6ac  ldr x0,[x23, #0x10]
7101cad6b0  mov v0.16B,v8.16B
7101cad6b4  adrp x1,0x7104318000
7101cad6b8  add x1,x1,#0xfef
7101cad6bc  bl 0x7103778300
7101cad6c0  add x8,sp,#0x10
7101cad6c4  add x23,x8,#0x18
7101cad6c8  mov x8,#0xff0000000000
7101cad6cc  stp xzr,xzr,[sp, #0x10]
7101cad6d0  movk x8,#0x13ff, LSL #48
7101cad6d4  str x8,[sp, #0x1b8]
7101cad6d8  mov x8,#0xff0000000000
7101cad6dc  movk x8,#0x5aff, LSL #48
7101cad6e0  ldr x9,[x27, #0x8f8]
7101cad6e4  str wzr,[sp, #0x1c8]
7101cad6e8  str x8,[sp, #0x1c0]
7101cad6ec  mov x8,#0xff0000000000
7101cad6f0  movk x8,#0xc1ff, LSL #48
7101cad6f4  str wzr,[sp, #0x24]
7101cad6f8  strh wzr,[sp, #0x28]
7101cad6fc  strh wzr,[sp, #0x20]
7101cad700  sub x1,x29,#0x78
7101cad704  add x2,sp,#0x10
7101cad708  stur xzr,[sp, #0x7d]
7101cad70c  str xzr,[sp, #0x68]
7101cad710  str xzr,[sp, #0x198]
7101cad714  strh wzr,[sp, #0x1a0]
7101cad718  strh wzr,[sp, #0x1cc]
7101cad71c  str x8,[sp, #0x228]
7101cad720  stp xzr,xzr,[sp, #0x70]
7101cad724  ldr x0,[x9, #0x8]
7101cad728  bl 0x710334f120
7101cad72c  sub x0,x29,#0xc0
7101cad730  mov x1,x23
7101cad734  bl 0x71016bc6e0
7101cad738  ldrb w8,[sp, #0x1c8]
7101cad73c  cmp w8,#0xc
7101cad740  orr w9,wzr,#0xc
7101cad744  csel w2,w8,w9,cc
7101cad748  adrp x1,0x71043f0000
7101cad74c  add x1,x1,#0xb8f
7101cad750  mov x0,x21
7101cad754  bl 0x7103778430
7101cad758  b 0x7101cad9d8
7101cad75c  bl 0x7101cd0bc0
7101cad760  mov w8,#0x1
7101cad764  strb w8,[x24, #0x70]
7101cad768  ldrsw x8,[x19, #0x184]
7101cad76c  cmp w8,#0x13
7101cad770  b.cs 0x7101cadb20
7101cad774  add x8,x19,x8, LSL #0x2
7101cad778  orr w9,wzr,#0x3
7101cad77c  str w9,[x8, #0x138]
7101cad780  b 0x7101cadafc
7101cad784  ldr x0,[x23, #0x10]
7101cad788  fmov s0,0x3f800000
7101cad78c  adrp x1,0x71043f0000
7101cad790  add x1,x1,#0xab9
7101cad794  bl 0x7103778300
7101cad798  add x8,sp,#0x10
7101cad79c  add x0,x8,#0xf8
7101cad7a0  str wzr,[sp, #0x24]
7101cad7a4  strh wzr,[sp, #0x28]
7101cad7a8  add x23,x8,#0x18
7101cad7ac  strh wzr,[sp, #0x20]
7101cad7b0  stp xzr,xzr,[sp, #0x10]
7101cad7b4  stur xzr,[sp, #0x7d]
7101cad7b8  str xzr,[sp, #0x68]
7101cad7bc  str xzr,[sp, #0x90]
7101cad7c0  stp xzr,xzr,[sp, #0x70]
7101cad7c4  bl 0x710143c4d0
7101cad7c8  ldr x9,[x27, #0x8f8]
7101cad7cc  mov x8,#0xff0000000000
7101cad7d0  movk x8,#0xc1ff, LSL #48
7101cad7d4  str x8,[sp, #0x3a0]
7101cad7d8  str x8,[sp, #0x3b0]
7101cad7dc  str x8,[sp, #0x3c0]
7101cad7e0  str x8,[sp, #0x3d0]
7101cad7e4  sub x1,x29,#0x78
7101cad7e8  add x2,sp,#0x10
7101cad7ec  str x8,[sp, #0x3e0]
7101cad7f0  str x8,[sp, #0x3f0]
7101cad7f4  str x8,[sp, #0x400]
7101cad7f8  str x8,[sp, #0x410]
7101cad7fc  str x8,[sp, #0x420]
7101cad800  str x8,[sp, #0x430]
7101cad804  ldr x0,[x9, #0x8]
7101cad808  bl 0x710334e9e0
7101cad80c  b 0x7101cad870
7101cad810  ldr x0,[x23, #0x10]
7101cad814  fmov s0,0x3f800000
7101cad818  adrp x1,0x710434a000
7101cad81c  add x1,x1,#0x491
7101cad820  bl 0x7103778300
7101cad824  add x8,sp,#0x10
7101cad828  ldr x9,[x27, #0x8f8]
7101cad82c  strh wzr,[sp, #0x198]
7101cad830  add x23,x8,#0x18
7101cad834  mov x8,#0xff0000000000
7101cad838  movk x8,#0xd9ff, LSL #48
7101cad83c  str wzr,[sp, #0x24]
7101cad840  strh wzr,[sp, #0x28]
7101cad844  strh wzr,[sp, #0x20]
7101cad848  stp xzr,xzr,[sp, #0x10]
7101cad84c  sub x1,x29,#0x78
7101cad850  add x2,sp,#0x10
7101cad854  stur xzr,[sp, #0x7d]
7101cad858  str xzr,[sp, #0x68]
7101cad85c  str xzr,[sp, #0x190]
7101cad860  str x8,[sp, #0x1c8]
7101cad864  stp xzr,xzr,[sp, #0x70]
7101cad868  ldr x0,[x9, #0x8]
7101cad86c  bl 0x710334f710
7101cad870  sub x0,x29,#0xc0
7101cad874  mov x1,x23
7101cad878  bl 0x71016bc6e0
7101cad87c  b 0x7101cad9d8
7101cad880  ldr x0,[x23, #0x10]
7101cad884  fmov s0,0x3f800000
7101cad888  adrp x1,0x710436c000
7101cad88c  add x1,x1,#0x500
7101cad890  bl 0x7103778300
7101cad894  add x28,sp,#0x10
7101cad898  add x0,x28,#0xe8
7101cad89c  str wzr,[sp, #0x24]
7101cad8a0  strh wzr,[sp, #0x28]
7101cad8a4  add x23,x28,#0x18
7101cad8a8  strh wzr,[sp, #0x20]
7101cad8ac  stp xzr,xzr,[sp, #0x10]
7101cad8b0  stur xzr,[sp, #0x7d]
7101cad8b4  str xzr,[sp, #0x68]
7101cad8b8  stur xzr,[sp, #0xe6]
7101cad8bc  str xzr,[sp, #0x90]
7101cad8c0  str xzr,[sp, #0xf0]
7101cad8c4  stp xzr,xzr,[sp, #0x70]
7101cad8c8  stp xzr,xzr,[sp, #0xd8]
7101cad8cc  stp xzr,xzr,[sp, #0xc8]
7101cad8d0  stp xzr,xzr,[sp, #0xb8]
7101cad8d4  stp xzr,xzr,[sp, #0xa8]
7101cad8d8  stp xzr,xzr,[sp, #0x98]
7101cad8dc  stp xzr,xzr,[sp, #0x1a8]
7101cad8e0  stp xzr,xzr,[sp, #0x198]
7101cad8e4  stp xzr,xzr,[sp, #0x188]
7101cad8e8  stp xzr,xzr,[sp, #0x178]
7101cad8ec  stp xzr,xzr,[sp, #0x168]
7101cad8f0  stp xzr,xzr,[sp, #0x158]
7101cad8f4  stp xzr,xzr,[sp, #0x148]
7101cad8f8  stp xzr,xzr,[sp, #0x138]
7101cad8fc  stp xzr,xzr,[sp, #0x128]
7101cad900  stp xzr,xzr,[sp, #0x118]
7101cad904  stp xzr,xzr,[sp, #0x108]
7101cad908  stp xzr,xzr,[sp, #0xf8]
7101cad90c  bl 0x71004f5770
7101cad910  add x8,x28,#0x1ce
7101cad914  str wzr,[sp, #0x1e8]
7101cad918  str xzr,[x8]
7101cad91c  ldr x8,[x27, #0x8f8]
7101cad920  stp xzr,xzr,[sp, #0x1d0]
7101cad924  sub x1,x29,#0x78
7101cad928  add x2,sp,#0x10
7101cad92c  str xzr,[sp, #0x1b8]
7101cad930  str xzr,[sp, #0x288]
7101cad934  str xzr,[sp, #0x280]
7101cad938  str xzr,[sp, #0x278]
7101cad93c  str xzr,[sp, #0x270]
7101cad940  str xzr,[sp, #0x268]
7101cad944  str xzr,[sp, #0x260]
7101cad948  str xzr,[sp, #0x258]
7101cad94c  str xzr,[sp, #0x250]
7101cad950  str xzr,[sp, #0x248]
7101cad954  str xzr,[sp, #0x240]
7101cad958  str xzr,[sp, #0x238]
7101cad95c  str xzr,[sp, #0x230]
7101cad960  str xzr,[sp, #0x228]
7101cad964  str xzr,[sp, #0x220]
7101cad968  str xzr,[sp, #0x218]
7101cad96c  str xzr,[sp, #0x210]
7101cad970  str xzr,[sp, #0x208]
7101cad974  str xzr,[sp, #0x1f0]
7101cad978  strb wzr,[sp, #0x2c0]
7101cad97c  str xzr,[sp, #0x2b8]
7101cad980  stp xzr,xzr,[sp, #0x1c0]
7101cad984  stp xzr,xzr,[sp, #0x1f8]
7101cad988  ldr x0,[x8, #0x8]
7101cad98c  bl 0x710334e6a0
7101cad990  sub x0,x29,#0xc0
7101cad994  mov x1,x23
7101cad998  bl 0x71016bc6e0
7101cad99c  adrp x1,0x7104464000
7101cad9a0  add x1,x1,#0x37f
7101cad9a4  mov x8,sp
7101cad9a8  mov x0,x21
7101cad9ac  bl 0x7103776910
7101cad9b0  adrp x8,0x7105325000
7101cad9b4  ldr x8,[x8, #0xcd0]
7101cad9b8  ldr x0,[x8, #0x8]
7101cad9bc  mov x2,sp
7101cad9c0  mov x1,x20
7101cad9c4  bl 0x7101cedc80
7101cad9c8  ldr x0,[sp, #0x8]
7101cad9cc  stp x26,xzr,[sp]
7101cad9d0  cbz x0,0x7101cad9d8
7101cad9d4  bl 0x710392eb40
7101cad9d8  adrp x1,0x71043cf000
7101cad9dc  add x1,x1,#0xca4
7101cad9e0  add x8,sp,#0x10
7101cad9e4  mov x0,x21
7101cad9e8  bl 0x7103776910
7101cad9ec  adrp x1,0x710439d000
7101cad9f0  add x1,x1,#0x572
7101cad9f4  add x0,sp,#0x10
7101cad9f8  mov w2,#0x1
7101cad9fc  mov x3,x22
7101cada00  bl 0x710377a280
7101cada04  ldr x0,[sp, #0x18]
7101cada08  stp x26,xzr,[sp, #0x10]
7101cada0c  cbz x0,0x7101cada14
7101cada10  bl 0x710392eb40
7101cada14  adrp x1,0x710434a000
7101cada18  add x1,x1,#0x49b
7101cada1c  add x8,sp,#0x10
7101cada20  mov x0,x21
7101cada24  bl 0x7103776910
7101cada28  adrp x1,0x710435b000
7101cada2c  add x1,x1,#0x8fe
7101cada30  add x0,sp,#0x10
7101cada34  mov w2,#0x1
7101cada38  mov x3,x22
7101cada3c  bl 0x710377a280
7101cada40  ldr x0,[sp, #0x18]
7101cada44  stp x26,xzr,[sp, #0x10]
7101cada48  cbz x0,0x7101cada50
7101cada4c  bl 0x710392eb40
7101cada50  strh wzr,[x25, #0x134]
7101cada54  ldr x0,[x24, #0x80]
7101cada58  mov x1,x20
7101cada5c  bl 0x7101cd12c0
7101cada60  ldr x8,[x19, #0x1a0]
7101cada64  ldr x9,[x8, #0x80]
7101cada68  ldrh w9,[x9, #0x120]
7101cada6c  strh w9,[x19, #0x1b0]
7101cada70  strb wzr,[x8, #0x70]
7101cada74  ldr x8,[x19, #0x1a0]
7101cada78  ldr x19,[x8, #0x80]
7101cada7c  ldr w8,[x19, #0xe8]
7101cada80  cmp w8,#0x1
7101cada84  b.ne 0x7101cadafc
7101cada88  ldr x8,[x19, #0x100]
7101cada8c  ldr x0,[x8]
7101cada90  mov w2,#0x6fff
7101cada94  movk w2,#0x1, LSL #16
7101cada98  mov w1,#0x1
7101cada9c  mov w20,#0x1
7101cadaa0  bl 0x7103775dc0
7101cadaa4  ldr x8,[x19, #0x100]
7101cadaa8  ldr x8,[x8]
7101cadaac  ldr x0,[x8, #0x10]
7101cadab0  fmov s0,0x3f800000
7101cadab4  adrp x1,0x7104291000
7101cadab8  add x1,x1,#0xd6e
7101cadabc  bl 0x7103778300
7101cadac0  orr x8,xzr,#0x100000000
7101cadac4  mov w9,#0xffffffff
7101cadac8  strb wzr,[x19, #0xf4]
7101cadacc  stp x8,x9,[x19, #0xe0]
7101cadad0  mov w8,#0x4
7101cadad4  str w9,[x19, #0xf0]
7101cadad8  mov w9,#0x2
7101cadadc  strh wzr,[x19, #0x130]
7101cadae0  strb w20,[x19, #0x132]
7101cadae4  stp w8,w9,[x19, #0x98]
7101cadae8  stp xzr,xzr,[x19, #0x8]
7101cadaec  stp xzr,xzr,[x19, #0xd0]
7101cadaf0  stp xzr,xzr,[x19, #0xc0]
7101cadaf4  stp xzr,xzr,[x19, #0xb0]
7101cadaf8  stp xzr,xzr,[x19, #0xa0]
7101cadafc  add sp,sp,#0xb20
7101cadb00  ldp x29,x30,[sp, #0x60]
7101cadb04  ldp x20,x19,[sp, #0x50]
7101cadb08  ldp x22,x21,[sp, #0x40]
7101cadb0c  ldp x24,x23,[sp, #0x30]
7101cadb10  ldp x26,x25,[sp, #0x20]
7101cadb14  ldp x28,x27,[sp, #0x10]
7101cadb18  ldr d8,[sp], #0x70
7101cadb1c  ret
7101cadb20  bl 0x71039c2650
