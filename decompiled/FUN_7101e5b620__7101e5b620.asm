// addr:      7101e5b620
// offset:    0x1e5b620
// name:      FUN_7101e5b620
// mangled:   
// size:      420

7101e5b620  str x21,[sp, #-0x30]!
7101e5b624  stp x20,x19,[sp, #0x10]
7101e5b628  stp x29,x30,[sp, #0x20]
7101e5b62c  add x29,sp,#0x20
7101e5b630  ldrb w8,[x0, #0x381]
7101e5b634  mov x19,x0
7101e5b638  cbz w8,0x7101e5b774
7101e5b63c  adrp x8,0x710532f000
7101e5b640  ldr x8,[x8, #0x730]
7101e5b644  ldr x8,[x8, #0x8]
7101e5b648  ldr x8,[x8, #0x208]
7101e5b64c  ldr x0,[x8, #0x8]
7101e5b650  ldrb w21,[x19, #0x382]
7101e5b654  mov x1,#0xe86
7101e5b658  movk x1,#0x30ff, LSL #16
7101e5b65c  movk x1,#0x15, LSL #32
7101e5b660  mov x20,#0x5200000000000000
7101e5b664  bl 0x71032a3d90
7101e5b668  ldr x12,[x19, #0x3b8]
7101e5b66c  and x10,x0,#-0x100000000000000
7101e5b670  and x8,x0,#0xffffffffff
7101e5b674  cmp x10,x20
7101e5b678  ccmp x8,#0x0,#0x4,eq
7101e5b67c  and x9,x12,#0xffffffffff
7101e5b680  b.ne 0x7101e5b68c
7101e5b684  and x11,x12,#-0x100000000000000
7101e5b688  b 0x7101e5b6ac
7101e5b68c  and x11,x12,#-0x100000000000000
7101e5b690  cmp x11,x20
7101e5b694  b.ne 0x7101e5b6ac
7101e5b698  cbz x9,0x7101e5b6ac
7101e5b69c  eor x8,x12,x0
7101e5b6a0  tst x8,#0xffffffffff
7101e5b6a4  b.ne 0x7101e5b6e0
7101e5b6a8  b 0x7101e5b774
7101e5b6ac  cmp x10,x20
7101e5b6b0  cset w10,eq
7101e5b6b4  cmp x8,#0x0
7101e5b6b8  cset w8,ne
7101e5b6bc  cmp x9,#0x0
7101e5b6c0  cset w9,ne
7101e5b6c4  cmp x11,x20
7101e5b6c8  and w8,w10,w8
7101e5b6cc  cset w10,eq
7101e5b6d0  and w9,w9,w10
7101e5b6d4  eor w8,w9,w8
7101e5b6d8  cmp w8,#0x1
7101e5b6dc  b.ne 0x7101e5b774
7101e5b6e0  ldr x9,[x19, #0x3b0]
7101e5b6e4  ldr x8,[x9]
7101e5b6e8  ldr x8,[x8, #0x8]
7101e5b6ec  ldrb w10,[x8, #0x388]
7101e5b6f0  cbz w10,0x7101e5b774
7101e5b6f4  ldrb w9,[x9, #0x8]
7101e5b6f8  cmp x9,#0xd
7101e5b6fc  b.hi 0x7101e5b774
7101e5b700  add x8,x8,x9, LSL #0x3
7101e5b704  ldr x8,[x8, #0x8]
7101e5b708  cmp x8,#0x0
7101e5b70c  ccmp w21,#0x3,#0x2,ne
7101e5b710  b.hi 0x7101e5b774
7101e5b714  mov w9,#0x1c8
7101e5b718  madd x8,x21,x9,x8
7101e5b71c  ldrsh w8,[x8, #0x8]
7101e5b720  cmn w8,#0x1
7101e5b724  b.eq 0x7101e5b774
7101e5b728  ldr x8,[x19, #0x208]
7101e5b72c  add x8,x8,x21, LSL #0x3
7101e5b730  ldr x20,[x8, #0x48]
7101e5b734  cbz x20,0x7101e5b748
7101e5b738  mov x0,x20
7101e5b73c  bl 0x7101e9be90
7101e5b740  mov x0,x20
7101e5b744  bl 0x7101e9c4a0
7101e5b748  ldrb w8,[x19, #0x212]
7101e5b74c  cbz w8,0x7101e5b774
7101e5b750  ldr x8,[x19, #0x208]
7101e5b754  add x8,x8,x21, LSL #0x3
7101e5b758  ldr x8,[x8, #0x48]
7101e5b75c  cbz x8,0x7101e5b774
7101e5b760  ldr x0,[x8, #0x8]
7101e5b764  fmov s0,0x3f800000
7101e5b768  adrp x1,0x71042d6000
7101e5b76c  add x1,x1,#0x9e0
7101e5b770  bl 0x7103778300
7101e5b774  add x8,x19,#0x1e4
7101e5b778  orr x9,xzr,#-0x100000000
7101e5b77c  str wzr,[x19, #0x1d8]
7101e5b780  stp xzr,xzr,[x19, #0x10]
7101e5b784  stp xzr,xzr,[x19, #0x1c8]
7101e5b788  stp xzr,xzr,[x19, #0x1b8]
7101e5b78c  stp xzr,xzr,[x19, #0x1a8]
7101e5b790  stp xzr,xzr,[x19, #0x198]
7101e5b794  str x9,[x8]
7101e5b798  mov x8,#0x15
7101e5b79c  movk x8,#0x13, LSL #32
7101e5b7a0  orr x9,xzr,#-0xffffffff
7101e5b7a4  str x8,[x19, #0x190]
7101e5b7a8  add x8,x19,#0x1dc
7101e5b7ac  strb wzr,[x19, #0x1ec]
7101e5b7b0  str x9,[x8]
7101e5b7b4  ldp x29,x30,[sp, #0x20]
7101e5b7b8  ldp x20,x19,[sp, #0x10]
7101e5b7bc  ldr x21,[sp], #0x30
7101e5b7c0  ret
