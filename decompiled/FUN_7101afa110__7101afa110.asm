// addr:      7101afa110
// offset:    0x1afa110
// name:      FUN_7101afa110
// mangled:   
// size:      612

7101afa110  sub sp,sp,#0x30
7101afa114  stp x20,x19,[sp, #0x10]
7101afa118  stp x29,x30,[sp, #0x20]
7101afa11c  add x29,sp,#0x20
7101afa120  ldr w8,[x0, #0xec]
7101afa124  mov x19,x0
7101afa128  cbnz w8,0x7101afa228
7101afa12c  ldr x9,[x19, #0x130]
7101afa130  ldr x9,[x9]
7101afa134  ldrb w8,[x19, #0x1f0]
7101afa138  ldr x0,[x9]
7101afa13c  cbz w8,0x7101afa17c
7101afa140  mov w1,wzr
7101afa144  bl 0x71037760f0
7101afa148  ldr x8,[x19, #0x130]
7101afa14c  ldr x8,[x8]
7101afa150  ldr x8,[x8]
7101afa154  adrp x9,0x710593b000
7101afa158  ldr x9,[x9, #0x988]
7101afa15c  ldr x9,[x9, #0x8]
7101afa160  ldr x8,[x8, #0x600]
7101afa164  ldr w8,[x8, #0x494]
7101afa168  mov w10,#0x1
7101afa16c  lsl w8,w10,w8
7101afa170  ldr w10,[x9]
7101afa174  bic w8,w10,w8
7101afa178  b 0x7101afa1b4
7101afa17c  mov w1,#0x1
7101afa180  mov w20,#0x1
7101afa184  bl 0x71037760f0
7101afa188  ldr x8,[x19, #0x130]
7101afa18c  ldr x8,[x8]
7101afa190  adrp x9,0x710593b000
7101afa194  ldr x9,[x9, #0x988]
7101afa198  ldr x9,[x9, #0x8]
7101afa19c  ldr x8,[x8]
7101afa1a0  ldr w10,[x9]
7101afa1a4  ldr x8,[x8, #0x600]
7101afa1a8  ldr w8,[x8, #0x494]
7101afa1ac  lsl w8,w20,w8
7101afa1b0  orr w8,w10,w8
7101afa1b4  str w8,[x9]
7101afa1b8  ldr w8,[x19, #0x1fc]
7101afa1bc  cmp w8,#0x2
7101afa1c0  b.eq 0x7101afa228
7101afa1c4  ldr x8,[x19, #0x130]
7101afa1c8  ldr x20,[x8]
7101afa1cc  mov x8,sp
7101afa1d0  add x0,x20,#0x8
7101afa1d4  adrp x1,0x71043ad000
7101afa1d8  add x1,x1,#0xfe3
7101afa1dc  bl 0x7103776910
7101afa1e0  ldr x0,[sp, #0x8]
7101afa1e4  ldr x8,[x0]
7101afa1e8  cbz x8,0x7101afa1f8
7101afa1ec  ldrb w9,[x8, #0x58]
7101afa1f0  orr w9,w9,#0x1
7101afa1f4  strb w9,[x8, #0x58]
7101afa1f8  adrp x8,0x710523d000
7101afa1fc  add x8,x8,#0x9a8
7101afa200  stp x8,xzr,[sp]
7101afa204  cbz x0,0x7101afa20c
7101afa208  bl 0x710392eb40
7101afa20c  ldr x0,[x20, #0x10]
7101afa210  fmov s0,0x3f800000
7101afa214  adrp x1,0x7104291000
7101afa218  add x1,x1,#0x7af
7101afa21c  bl 0x7103778300
7101afa220  mov w8,#0x2
7101afa224  str w8,[x19, #0x1fc]
7101afa228  mov x0,x19
7101afa22c  bl 0x7101afa380
7101afa230  ldr x8,[x19, #0x120]
7101afa234  cbz x8,0x7101afa360
7101afa238  mov x0,x19
7101afa23c  bl 0x7101afa660
7101afa240  sub w8,w0,#0x1
7101afa244  cmp w8,#0x7
7101afa248  b.hi 0x7101afa360
7101afa24c  adrp x9,0x71044f8000
7101afa250  add x9,x9,#0x494
7101afa254  lsr x20,x0,#0x20
7101afa258  ldrsw x8,[x9, x8, LSL #0x2]
7101afa25c  add x8,x8,x9
7101afa260  br x8
7101afa264  mov x0,x19
7101afa268  mov w1,wzr
7101afa26c  bl 0x7101afb9a0
7101afa270  ldr x8,[x19, #0x130]
7101afa274  ldr x8,[x8]
7101afa278  ldr x0,[x8]
7101afa27c  mov w1,wzr
7101afa280  bl 0x71037760f0
7101afa284  ldr x8,[x19, #0x130]
7101afa288  ldr x8,[x8]
7101afa28c  ldr x8,[x8]
7101afa290  adrp x9,0x710593b000
7101afa294  ldr x9,[x9, #0x988]
7101afa298  ldr x9,[x9, #0x8]
7101afa29c  mov w10,#0x1
7101afa2a0  cmp w20,#0x0
7101afa2a4  cset w1,ne
7101afa2a8  ldr x8,[x8, #0x600]
7101afa2ac  ldr w8,[x8, #0x494]
7101afa2b0  lsl w8,w10,w8
7101afa2b4  ldr w10,[x9]
7101afa2b8  bic w8,w10,w8
7101afa2bc  mov x0,x19
7101afa2c0  str w8,[x9]
7101afa2c4  bl 0x7101afbb40
7101afa2c8  ldrsw x8,[x19, #0xe4]
7101afa2cc  cmp w8,#0x13
7101afa2d0  b.cs 0x7101afa370
7101afa2d4  add x8,x19,x8, LSL #0x2
7101afa2d8  mov w9,#0x2
7101afa2dc  str w9,[x8, #0x98]
7101afa2e0  ldr w8,[x19, #0xe4]
7101afa2e4  cmp w8,#0x11
7101afa2e8  b.gt 0x7101afa360
7101afa2ec  add w8,w8,#0x1
7101afa2f0  cmp w8,#0x13
7101afa2f4  str w8,[x19, #0xe4]
7101afa2f8  b.cs 0x7101afa370
7101afa2fc  add x8,x19,w8, SXTW  #0x2
7101afa300  mov w9,#0x1
7101afa304  b 0x7101afa35c
7101afa308  ldr w8,[x19, #0x1e4]
7101afa30c  cbnz w8,0x7101afa360
7101afa310  cmp w20,#0x0
7101afa314  cset w1,ne
7101afa318  mov x0,x19
7101afa31c  bl 0x7101afbc50
7101afa320  ldrsw x8,[x19, #0xe4]
7101afa324  cmp w8,#0x13
7101afa328  b.cs 0x7101afa370
7101afa32c  add x8,x19,x8, LSL #0x2
7101afa330  str wzr,[x8, #0x98]
7101afa334  b 0x7101afa360
7101afa338  cmp w20,#0x0
7101afa33c  cset w1,ne
7101afa340  mov x0,x19
7101afa344  bl 0x7101afb9a0
7101afa348  ldrsw x8,[x19, #0xe4]
7101afa34c  cmp w8,#0x13
7101afa350  b.cs 0x7101afa370
7101afa354  add x8,x19,x8, LSL #0x2
7101afa358  mov w9,#0x5
7101afa35c  str w9,[x8, #0x98]
7101afa360  ldp x29,x30,[sp, #0x20]
7101afa364  ldp x20,x19,[sp, #0x10]
7101afa368  add sp,sp,#0x30
7101afa36c  ret
7101afa370  bl 0x71039c2650
