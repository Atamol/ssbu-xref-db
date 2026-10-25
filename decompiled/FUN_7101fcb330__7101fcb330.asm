// addr:      7101fcb330
// offset:    0x1fcb330
// name:      FUN_7101fcb330
// mangled:   
// size:      716

7101fcb330  str x23,[sp, #-0x40]!
7101fcb334  stp x22,x21,[sp, #0x10]
7101fcb338  stp x20,x19,[sp, #0x20]
7101fcb33c  stp x29,x30,[sp, #0x30]
7101fcb340  add x29,sp,#0x30
7101fcb344  mov x22,x1
7101fcb348  ldr x8,[x22, #0x10]!
7101fcb34c  adrp x9,0x7101fcb000
7101fcb350  add x9,x9,#0x200
7101fcb354  str x9,[x8]
7101fcb358  mov w9,#0x2
7101fcb35c  str w9,[x8, #0x8]
7101fcb360  ldr x8,[x22]
7101fcb364  mov x19,x1
7101fcb368  mov w20,w2
7101fcb36c  mov x21,x0
7101fcb370  adrp x2,0x710430c000
7101fcb374  add x2,x2,#0x66a
7101fcb378  mov x0,x19
7101fcb37c  add x9,x8,#0x10
7101fcb380  sub x1,x8,#0x10
7101fcb384  str x9,[x22]
7101fcb388  bl 0x71038f5390
7101fcb38c  ldrsw x8,[x21]
7101fcb390  ldr x9,[x22]
7101fcb394  mov w23,#0x13
7101fcb398  str x8,[x9]
7101fcb39c  str w23,[x9, #0x8]
7101fcb3a0  ldr x8,[x22]
7101fcb3a4  add x9,x8,#0x10
7101fcb3a8  sub x1,x8,#0x10
7101fcb3ac  adrp x2,0x710434b000
7101fcb3b0  add x2,x2,#0x32
7101fcb3b4  mov x0,x19
7101fcb3b8  str x9,[x22]
7101fcb3bc  bl 0x71038f5390
7101fcb3c0  ldrsw x8,[x21, #0x4]
7101fcb3c4  ldr x9,[x22]
7101fcb3c8  str x8,[x9]
7101fcb3cc  str w23,[x9, #0x8]
7101fcb3d0  ldr x8,[x22]
7101fcb3d4  add x9,x8,#0x10
7101fcb3d8  sub x1,x8,#0x10
7101fcb3dc  adrp x2,0x7104402000
7101fcb3e0  add x2,x2,#0x388
7101fcb3e4  mov x0,x19
7101fcb3e8  str x9,[x22]
7101fcb3ec  bl 0x71038f5390
7101fcb3f0  ldrsw x8,[x21, #0x8]
7101fcb3f4  ldr x9,[x22]
7101fcb3f8  str x8,[x9]
7101fcb3fc  str w23,[x9, #0x8]
7101fcb400  ldr x8,[x22]
7101fcb404  add x9,x8,#0x10
7101fcb408  sub x1,x8,#0x10
7101fcb40c  adrp x2,0x71042b5000
7101fcb410  add x2,x2,#0x19b
7101fcb414  mov x0,x19
7101fcb418  str x9,[x22]
7101fcb41c  bl 0x71038f5390
7101fcb420  ldrb w8,[x21, #0xc]
7101fcb424  ldr x9,[x22]
7101fcb428  str x8,[x9]
7101fcb42c  str w23,[x9, #0x8]
7101fcb430  ldr x8,[x22]
7101fcb434  add x9,x8,#0x10
7101fcb438  sub x1,x8,#0x10
7101fcb43c  adrp x2,0x71043bf000
7101fcb440  add x2,x2,#0x375
7101fcb444  mov x0,x19
7101fcb448  str x9,[x22]
7101fcb44c  bl 0x71038f5390
7101fcb450  ldrb w8,[x21, #0xd]
7101fcb454  ldr x9,[x22]
7101fcb458  str x8,[x9]
7101fcb45c  str w23,[x9, #0x8]
7101fcb460  ldr x8,[x22]
7101fcb464  add x9,x8,#0x10
7101fcb468  sub x1,x8,#0x10
7101fcb46c  adrp x2,0x710434b000
7101fcb470  add x2,x2,#0x3e
7101fcb474  mov x0,x19
7101fcb478  str x9,[x22]
7101fcb47c  bl 0x71038f5390
7101fcb480  ldrsb x8,[x21, #0xe]
7101fcb484  ldr x9,[x22]
7101fcb488  str x8,[x9]
7101fcb48c  str w23,[x9, #0x8]
7101fcb490  ldr x8,[x22]
7101fcb494  add x9,x8,#0x10
7101fcb498  sub x1,x8,#0x10
7101fcb49c  adrp x2,0x71042d7000
7101fcb4a0  add x2,x2,#0x117
7101fcb4a4  mov x0,x19
7101fcb4a8  str x9,[x22]
7101fcb4ac  bl 0x71038f5390
7101fcb4b0  ldrb w8,[x21, #0xf]
7101fcb4b4  ldr x9,[x22]
7101fcb4b8  str x8,[x9]
7101fcb4bc  str w23,[x9, #0x8]
7101fcb4c0  ldr x8,[x22]
7101fcb4c4  add x9,x8,#0x10
7101fcb4c8  sub x1,x8,#0x10
7101fcb4cc  adrp x2,0x71043bf000
7101fcb4d0  add x2,x2,#0x386
7101fcb4d4  mov x0,x19
7101fcb4d8  str x9,[x22]
7101fcb4dc  bl 0x71038f5390
7101fcb4e0  tbz w20,#0x0,0x7101fcb538
7101fcb4e4  ldr x8,[x19, #0x18]
7101fcb4e8  ldr x8,[x8, #0x18]
7101fcb4ec  cmp x8,#0x1
7101fcb4f0  b.lt 0x7101fcb4fc
7101fcb4f4  mov x0,x19
7101fcb4f8  bl 0x71038fec40
7101fcb4fc  mov x0,x19
7101fcb500  bl 0x710391e050
7101fcb504  ldr x8,[x19, #0x10]
7101fcb508  mov w9,#0x45
7101fcb50c  str w9,[x8, #0x8]
7101fcb510  str x0,[x8]
7101fcb514  ldr x8,[x19, #0x10]
7101fcb518  mov x1,x0
7101fcb51c  orr w3,wzr,#0x3
7101fcb520  mov x0,x19
7101fcb524  mov w2,wzr
7101fcb528  add x8,x8,#0x10
7101fcb52c  str x8,[x19, #0x10]
7101fcb530  bl 0x710391d4c0
7101fcb534  b 0x7101fcb550
7101fcb538  ldr x8,[x19, #0x10]
7101fcb53c  sub x1,x8,#0x10
7101fcb540  adrp x2,0x710442c000
7101fcb544  add x2,x2,#0xa38
7101fcb548  mov x0,x19
7101fcb54c  bl 0x71038f4d40
7101fcb550  ldr s0,[x21, #0x10]
7101fcb554  ldr x8,[x19, #0x10]
7101fcb558  orr w23,wzr,#0x3
7101fcb55c  str w23,[x8, #0x8]
7101fcb560  str s0,[x8]
7101fcb564  ldr x8,[x19, #0x10]
7101fcb568  add x9,x8,#0x10
7101fcb56c  sub x1,x8,#0x10
7101fcb570  adrp x2,0x71043d7000
7101fcb574  add x2,x2,#0xeae
7101fcb578  mov x0,x19
7101fcb57c  str x9,[x19, #0x10]
7101fcb580  bl 0x71038f5390
7101fcb584  ldr s0,[x21, #0x14]
7101fcb588  ldr x8,[x19, #0x10]
7101fcb58c  str w23,[x8, #0x8]
7101fcb590  str s0,[x8]
7101fcb594  ldr x8,[x19, #0x10]
7101fcb598  add x9,x8,#0x10
7101fcb59c  sub x1,x8,#0x10
7101fcb5a0  adrp x2,0x71042ab000
7101fcb5a4  add x2,x2,#0xc20
7101fcb5a8  mov x0,x19
7101fcb5ac  str x9,[x19, #0x10]
7101fcb5b0  bl 0x71038f5390
7101fcb5b4  ldr x8,[x19, #0x10]
7101fcb5b8  tbz w20,#0x0,0x7101fcb5e0
7101fcb5bc  mov x0,x19
7101fcb5c0  ldp x29,x30,[sp, #0x30]
7101fcb5c4  ldp x20,x19,[sp, #0x20]
7101fcb5c8  sub x1,x8,#0x20
7101fcb5cc  ldp x22,x21,[sp, #0x10]
7101fcb5d0  adrp x2,0x710442c000
7101fcb5d4  add x2,x2,#0xa38
7101fcb5d8  ldr x23,[sp], #0x40
7101fcb5dc  b 0x71038f5390
7101fcb5e0  sub x8,x8,#0x10
7101fcb5e4  str x8,[x22]
7101fcb5e8  ldp x29,x30,[sp, #0x30]
7101fcb5ec  ldp x20,x19,[sp, #0x20]
7101fcb5f0  ldp x22,x21,[sp, #0x10]
7101fcb5f4  ldr x23,[sp], #0x40
7101fcb5f8  ret
