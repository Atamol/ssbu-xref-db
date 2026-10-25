// addr:      7101a1e430
// offset:    0x1a1e430
// name:      FUN_7101a1e430
// mangled:   
// size:      556

7101a1e430  str x25,[sp, #-0x50]!
7101a1e434  stp x24,x23,[sp, #0x10]
7101a1e438  stp x22,x21,[sp, #0x20]
7101a1e43c  stp x20,x19,[sp, #0x30]
7101a1e440  stp x29,x30,[sp, #0x40]
7101a1e444  add x29,sp,#0x40
7101a1e448  ldr x20,[x1, #0x678]
7101a1e44c  cbz x20,0x7101a1e638
7101a1e450  ldr x9,[x20, #0x8]
7101a1e454  ldrsw x8,[x9, #0x30]
7101a1e458  mov x19,x0
7101a1e45c  cmn w8,#0x1
7101a1e460  b.eq 0x7101a1e5cc
7101a1e464  ldr w10,[x1, #0x150]
7101a1e468  cmp w8,w10
7101a1e46c  b.eq 0x7101a1e5cc
7101a1e470  ldr x10,[x19, #0x258]
7101a1e474  ldr x9,[x19, #0x250]
7101a1e478  sub x10,x10,x9
7101a1e47c  asr x10,x10,#0x4
7101a1e480  cmp x10,x8
7101a1e484  b.ls 0x7101a1e654
7101a1e488  add x21,x9,x8, LSL #0x4
7101a1e48c  mov x24,x21
7101a1e490  mov x25,#-0x3f00000000000000
7101a1e494  ldr x0,[x24, #0x8]!
7101a1e498  bl 0x7101a06ef0
7101a1e49c  adrp x8,0x710532f000
7101a1e4a0  ldr x8,[x8, #0x730]
7101a1e4a4  ldr x8,[x8, #0x8]
7101a1e4a8  ldr x23,[x8, #0x168]
7101a1e4ac  ldr x22,[x19, #0xd90]
7101a1e4b0  mov x1,#0xb807
7101a1e4b4  movk x1,#0xb1cc, LSL #16
7101a1e4b8  movk x1,#0x11, LSL #32
7101a1e4bc  mov x0,x23
7101a1e4c0  bl 0x71032631a0
7101a1e4c4  and x10,x22,#-0x100000000000000
7101a1e4c8  and x9,x22,#0xffffffffff
7101a1e4cc  and x8,x0,#0xffffffffff
7101a1e4d0  cmp x10,x25
7101a1e4d4  b.ne 0x7101a1e500
7101a1e4d8  cbz x9,0x7101a1e500
7101a1e4dc  and x11,x0,#-0x100000000000000
7101a1e4e0  cmp x11,x25
7101a1e4e4  b.ne 0x7101a1e504
7101a1e4e8  cbz x8,0x7101a1e504
7101a1e4ec  eor x8,x0,x22
7101a1e4f0  tst x8,#0xffffffffff
7101a1e4f4  mov x2,x22
7101a1e4f8  b.ne 0x7101a1e54c
7101a1e4fc  b 0x7101a1e53c
7101a1e500  and x11,x0,#-0x100000000000000
7101a1e504  cmp x10,x25
7101a1e508  cset w10,eq
7101a1e50c  cmp x9,#0x0
7101a1e510  cset w9,ne
7101a1e514  cmp x8,#0x0
7101a1e518  cset w8,ne
7101a1e51c  cmp x11,x25
7101a1e520  and w9,w10,w9
7101a1e524  cset w10,eq
7101a1e528  and w8,w8,w10
7101a1e52c  eor w8,w8,w9
7101a1e530  cmp w8,#0x1
7101a1e534  mov x2,x22
7101a1e538  b.eq 0x7101a1e54c
7101a1e53c  mov x0,x23
7101a1e540  mov x1,x22
7101a1e544  bl 0x7103263030
7101a1e548  mov x2,x0
7101a1e54c  ldr x0,[x24]
7101a1e550  mov x1,x22
7101a1e554  mov w3,wzr
7101a1e558  bl 0x7101a029b0
7101a1e55c  ldr x8,[x24]
7101a1e560  mov w9,#0x1
7101a1e564  strb w9,[x8, #0x6bd]
7101a1e568  ldr x8,[x24]
7101a1e56c  ldr x8,[x8, #0x5e8]
7101a1e570  ldr x0,[x8, #0x10]
7101a1e574  adrp x1,0x710425e000
7101a1e578  add x1,x1,#0xd91
7101a1e57c  bl 0x7103778760
7101a1e580  ldr x8,[x24]
7101a1e584  ldr x23,[x8, #0x5e8]
7101a1e588  ldr x0,[x23, #0x10]
7101a1e58c  adrp x22,0x710433a000
7101a1e590  add x22,x22,#0x9c5
7101a1e594  mov x1,x22
7101a1e598  bl 0x7103778760
7101a1e59c  ldr x0,[x23, #0xf0]
7101a1e5a0  mov x1,x22
7101a1e5a4  bl 0x7103778760
7101a1e5a8  ldr x0,[x23, #0x100]
7101a1e5ac  mov x1,x22
7101a1e5b0  bl 0x7103778760
7101a1e5b4  mov w3,#0x1
7101a1e5b8  mov x0,x19
7101a1e5bc  mov x1,x20
7101a1e5c0  mov x2,x21
7101a1e5c4  bl 0x7101a1c3b0
7101a1e5c8  ldr x9,[x20, #0x8]
7101a1e5cc  ldr x8,[x9, #0x10]
7101a1e5d0  ldr x8,[x8, #0x8]
7101a1e5d4  ldrsw x21,[x8, #0x488]
7101a1e5d8  mov x0,x19
7101a1e5dc  mov x1,x20
7101a1e5e0  bl 0x7101a1e9b0
7101a1e5e4  ldr x8,[x20, #0x8]
7101a1e5e8  ldrsw x8,[x8, #0x28]
7101a1e5ec  cmn w8,#0x1
7101a1e5f0  b.eq 0x7101a1e610
7101a1e5f4  cmp w8,#0x8
7101a1e5f8  b.cs 0x7101a1e650
7101a1e5fc  adrp x9,0x710593b000
7101a1e600  ldr x9,[x9, #0x990]
7101a1e604  ldr x9,[x9, #0x8]
7101a1e608  mov w10,#0xffffffff
7101a1e60c  str w10,[x9, x8, LSL #0x2]
7101a1e610  cmn w21,#0x1
7101a1e614  b.eq 0x7101a1e638
7101a1e618  cmp w21,#0xa
7101a1e61c  b.cs 0x7101a1e650
7101a1e620  ldr x8,[x19, #0x190]
7101a1e624  add x9,x8,x21, LSL #0x2
7101a1e628  add x8,x8,x21
7101a1e62c  str wzr,[x9]
7101a1e630  str wzr,[x9, #0x28]
7101a1e634  strb wzr,[x8, #0x50]
7101a1e638  ldp x29,x30,[sp, #0x40]
7101a1e63c  ldp x20,x19,[sp, #0x30]
7101a1e640  ldp x22,x21,[sp, #0x20]
7101a1e644  ldp x24,x23,[sp, #0x10]
7101a1e648  ldr x25,[sp], #0x50
7101a1e64c  ret
7101a1e650  bl 0x71039c2650
7101a1e654  add x0,x19,#0x250
7101a1e658  bl 0x71039c1330
