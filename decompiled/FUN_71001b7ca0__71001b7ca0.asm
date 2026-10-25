// addr:      71001b7ca0
// offset:    0x1b7ca0
// name:      FUN_71001b7ca0
// mangled:   
// size:      148

71001b7ca0  stp x20,x19,[sp, #-0x20]!
71001b7ca4  stp x29,x30,[sp, #0x10]
71001b7ca8  add x29,sp,#0x10
71001b7cac  mov x19,x0
71001b7cb0  cmp x0,x1
71001b7cb4  b.eq 0x71001b7d18
71001b7cb8  ldr w8,[x19, #0x8]
71001b7cbc  mov x20,x1
71001b7cc0  cmp w8,#0x4
71001b7cc4  b.ne 0x71001b7ce0
71001b7cc8  ldr x0,[x19]
71001b7ccc  ldr x8,[x0, #-0x14]!
71001b7cd0  cbz x8,0x71001b7cdc
71001b7cd4  blr x8
71001b7cd8  b 0x71001b7ce0
71001b7cdc  bl 0x710353c4b0
71001b7ce0  ldr w8,[x20, #0x8]
71001b7ce4  str w8,[x19, #0x8]
71001b7ce8  ldr w8,[x20, #0x8]
71001b7cec  sub w8,w8,#0x1
71001b7cf0  cmp w8,#0x5
71001b7cf4  b.hi 0x71001b7d14
71001b7cf8  adrp x9,0x710449a000
71001b7cfc  add x9,x9,#0x9d4
71001b7d00  ldrsw x8,[x9, x8, LSL #0x2]
71001b7d04  add x8,x8,x9
71001b7d08  br x8
71001b7d0c  ldr x8,[x20]
71001b7d10  str x8,[x19]
71001b7d14  str wzr,[x20, #0x8]
71001b7d18  ldp x29,x30,[sp, #0x10]
71001b7d1c  mov x0,x19
71001b7d20  ldp x20,x19,[sp], #0x20
71001b7d24  ret
71001b7d28  ldrb w8,[x20]
71001b7d2c  strb w8,[x19]
71001b7d30  b 0x71001b7d14
