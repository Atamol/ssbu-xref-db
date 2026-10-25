// addr:      71001db0f0
// offset:    0x1db0f0
// name:      FUN_71001db0f0
// mangled:   
// size:      224

71001db0f0  stp x24,x23,[sp, #-0x40]!
71001db0f4  stp x22,x21,[sp, #0x10]
71001db0f8  stp x20,x19,[sp, #0x20]
71001db0fc  stp x29,x30,[sp, #0x30]
71001db100  add x29,sp,#0x30
71001db104  adrp x22,0x71052a4000
71001db108  adrp x23,0x71052a4000
71001db10c  adrp x24,0x71052a4000
71001db110  ldr x22,[x22, #0xda8]
71001db114  ldr x23,[x23, #0xdb8]
71001db118  ldr x24,[x24, #0xdb0]
71001db11c  mov x19,x0
71001db120  mov w20,#0x47
71001db124  adrp x21,0x71042c4000
71001db128  add x21,x21,#0x35f
71001db12c  ldr x8,[x19]
71001db130  ldr x8,[x8, #0x60]
71001db134  mov x0,x19
71001db138  blr x8
71001db13c  ldr w8,[x19, #0x40]
71001db140  cmp w8,#0x4
71001db144  b.ne 0x71001db1bc
71001db148  ldrb w8,[x22]
71001db14c  cbz w8,0x71001db18c
71001db150  ldr x0,[x23]
71001db154  bl 0x7101717960
71001db158  ldr w8,[x0]
71001db15c  cbz w8,0x71001db18c
71001db160  ldr x9,[x24, #0xa0]
71001db164  ldp x10,x9,[x9]
71001db168  sub x9,x9,x10
71001db16c  asr x9,x9,#0x3
71001db170  cmp x9,x8
71001db174  b.hi 0x71001db18c
71001db178  orr w2,wzr,#0xe0000003
71001db17c  mov x0,x21
71001db180  mov w1,w20
71001db184  mov w3,wzr
71001db188  bl 0x71001b1300
71001db18c  ldp x8,x9,[x19, #0x80]
71001db190  add x0,x19,x9, ASR #0x1
71001db194  tbz w9,#0x0,0x71001db1a0
71001db198  ldr x9,[x0]
71001db19c  ldr x8,[x9, x8, LSL #0x0]
71001db1a0  blr x8
71001db1a4  ldr w8,[x19, #0x70]
71001db1a8  add w8,w8,#0x1
71001db1ac  str w8,[x19, #0x70]
71001db1b0  ldr w8,[x19, #0x40]
71001db1b4  cmp w8,#0x4
71001db1b8  b.eq 0x71001db12c
71001db1bc  ldp x29,x30,[sp, #0x30]
71001db1c0  ldp x20,x19,[sp, #0x20]
71001db1c4  ldp x22,x21,[sp, #0x10]
71001db1c8  ldp x24,x23,[sp], #0x40
71001db1cc  ret
