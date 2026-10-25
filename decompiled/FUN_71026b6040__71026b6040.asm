// addr:      71026b6040
// offset:    0x26b6040
// name:      FUN_71026b6040
// mangled:   
// size:      108

71026b6040  adrp x8,0x71050cd000
71026b6044  add x8,x8,#0xfc0
71026b6048  str x8,[x0]
71026b604c  ldrb w8,[x0, #0x5c]
71026b6050  cbz w8,0x71026b60a8
71026b6054  str x19,[sp, #-0x20]!
71026b6058  stp x29,x30,[sp, #0x10]
71026b605c  add x29,sp,#0x10
71026b6060  ldr x8,[x0, #0x50]
71026b6064  mov x19,x0
71026b6068  cbz x8,0x71026b609c
71026b606c  ldr w2,[x19, #0x58]
71026b6070  cmn w2,#0x1
71026b6074  b.eq 0x71026b609c
71026b6078  ldr x8,[x8]
71026b607c  ldr x0,[x8, #0x8]
71026b6080  cbz x0,0x71026b6094
71026b6084  ldr x8,[x0]
71026b6088  ldr x8,[x8, #0x58]
71026b608c  mov w1,#0x8
71026b6090  blr x8
71026b6094  mov w8,#0xffffffff
71026b6098  str w8,[x19, #0x58]
71026b609c  strb wzr,[x19, #0x5c]
71026b60a0  ldp x29,x30,[sp, #0x10]
71026b60a4  ldr x19,[sp], #0x20
71026b60a8  ret
