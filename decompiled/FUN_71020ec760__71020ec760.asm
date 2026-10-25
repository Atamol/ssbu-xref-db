// addr:      71020ec760
// offset:    0x20ec760
// name:      FUN_71020ec760
// mangled:   
// size:      228

71020ec760  sub sp,sp,#0x40
71020ec764  str x19,[sp, #0x20]
71020ec768  stp x29,x30,[sp, #0x30]
71020ec76c  add x29,sp,#0x30
71020ec770  ldr x8,[x0, #0x18]
71020ec774  ldr x8,[x8, #0x18]
71020ec778  mov x19,x0
71020ec77c  cmp x8,#0x1
71020ec780  b.lt 0x71020ec78c
71020ec784  mov x0,x19
71020ec788  bl 0x71038fec40
71020ec78c  mov x0,x19
71020ec790  bl 0x710391e050
71020ec794  ldr x8,[x19, #0x10]
71020ec798  mov w9,#0x45
71020ec79c  str w9,[x8, #0x8]
71020ec7a0  str x0,[x8]
71020ec7a4  ldr x8,[x19, #0x10]
71020ec7a8  mov x1,x0
71020ec7ac  mov w3,#0x1
71020ec7b0  mov x0,x19
71020ec7b4  mov w2,wzr
71020ec7b8  add x8,x8,#0x10
71020ec7bc  str x8,[x19, #0x10]
71020ec7c0  bl 0x710391d4c0
71020ec7c4  mov x8,#0x1
71020ec7c8  movk x8,#0x5000, LSL #48
71020ec7cc  str x8,[sp, #0x10]
71020ec7d0  mov x8,#0x41
71020ec7d4  movk x8,#0x5000, LSL #48
71020ec7d8  str x8,[sp, #0x18]
71020ec7dc  adrp x8,0x71050b4000
71020ec7e0  add x8,x8,#0xc88
71020ec7e4  add x0,sp,#0x8
71020ec7e8  mov w2,#0x1
71020ec7ec  mov x1,x19
71020ec7f0  str x8,[sp, #0x8]
71020ec7f4  bl 0x71020d4810
71020ec7f8  ldr x8,[x19, #0x10]
71020ec7fc  adrp x9,0x71020ec000
71020ec800  add x9,x9,#0x850
71020ec804  str x9,[x8]
71020ec808  mov w9,#0x2
71020ec80c  str w9,[x8, #0x8]
71020ec810  ldr x8,[x19, #0x10]
71020ec814  add x9,x8,#0x10
71020ec818  sub x1,x8,#0x10
71020ec81c  adrp x2,0x710430c000
71020ec820  add x2,x2,#0x66a
71020ec824  mov x0,x19
71020ec828  str x9,[x19, #0x10]
71020ec82c  bl 0x71038f5390
71020ec830  ldp x29,x30,[sp, #0x30]
71020ec834  ldr x19,[sp, #0x20]
71020ec838  mov w0,#0x1
71020ec83c  add sp,sp,#0x40
71020ec840  ret
