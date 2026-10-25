// addr:      7101a1e660
// offset:    0x1a1e660
// name:      FUN_7101a1e660
// mangled:   
// size:      508

7101a1e660  str d8,[sp, #-0x40]!
7101a1e664  stp x22,x21,[sp, #0x10]
7101a1e668  stp x20,x19,[sp, #0x20]
7101a1e66c  stp x29,x30,[sp, #0x30]
7101a1e670  add x29,sp,#0x30
7101a1e674  mov x19,x0
7101a1e678  ldr x0,[x0, #0x8]
7101a1e67c  mov w20,w1
7101a1e680  mov x21,#0xff0000000000
7101a1e684  mov x1,xzr
7101a1e688  movk x21,#0xc1ff, LSL #48
7101a1e68c  bl 0x7101a06920
7101a1e690  ldr x0,[x19, #0x8]
7101a1e694  orr w1,wzr,#0x3
7101a1e698  bl 0x7101a028b0
7101a1e69c  adrp x8,0x710532f000
7101a1e6a0  ldr x8,[x8, #0x730]
7101a1e6a4  ldr x8,[x8, #0x8]
7101a1e6a8  ldr x22,[x8, #0x168]
7101a1e6ac  mov x1,#0xb807
7101a1e6b0  movk x1,#0xb1cc, LSL #16
7101a1e6b4  movk x1,#0x11, LSL #32
7101a1e6b8  mov x0,x22
7101a1e6bc  bl 0x71032631a0
7101a1e6c0  and x9,x0,#-0x100000000000000
7101a1e6c4  mov x10,#-0x3f00000000000000
7101a1e6c8  and x8,x0,#0xffffffffff
7101a1e6cc  cmp x9,x10
7101a1e6d0  ccmp x8,#0x0,#0x4,eq
7101a1e6d4  mov x2,x21
7101a1e6d8  b.ne 0x7101a1e6ec
7101a1e6dc  mov x0,x22
7101a1e6e0  mov x1,x21
7101a1e6e4  bl 0x7103263030
7101a1e6e8  mov x2,x0
7101a1e6ec  ldr x0,[x19, #0x8]
7101a1e6f0  mov x1,x21
7101a1e6f4  mov w3,wzr
7101a1e6f8  bl 0x7101a029b0
7101a1e6fc  ldr x8,[x19, #0x8]
7101a1e700  ldr x21,[x8, #0x5e8]
7101a1e704  strb wzr,[x8, #0x211]
7101a1e708  ldr w8,[x21, #0x21c]
7101a1e70c  cmp w8,#0x1
7101a1e710  str wzr,[x21, #0x250]
7101a1e714  b.ne 0x7101a1e744
7101a1e718  add x0,x21,#0x88
7101a1e71c  adrp x1,0x71042b3000
7101a1e720  add x1,x1,#0xd87
7101a1e724  mov w2,#0x1
7101a1e728  mov w3,wzr
7101a1e72c  bl 0x710377a280
7101a1e730  ldr w2,[x21, #0x250]
7101a1e734  add x0,x21,#0x68
7101a1e738  adrp x1,0x710439d000
7101a1e73c  add x1,x1,#0xc8e
7101a1e740  bl 0x7103778430
7101a1e744  ldr x8,[x19, #0x8]
7101a1e748  ldr x21,[x8, #0x5e8]
7101a1e74c  strb wzr,[x8, #0x2e0]
7101a1e750  ldr x0,[x21, #0x40]
7101a1e754  fmov s0,0x3f800000
7101a1e758  adrp x1,0x7104349000
7101a1e75c  add x1,x1,#0xd11
7101a1e760  str wzr,[x21, #0x254]
7101a1e764  bl 0x7103778300
7101a1e768  ldr x8,[x21, #0xa0]
7101a1e76c  ldr x0,[x8, #0x10]
7101a1e770  cbz x0,0x7101a1e788
7101a1e774  add x1,sp,#0xc
7101a1e778  mov w2,wzr
7101a1e77c  mov w3,wzr
7101a1e780  str wzr,[sp, #0xc]
7101a1e784  bl 0x71037a2270
7101a1e788  str wzr,[sp, #0x8]
7101a1e78c  ldr x8,[x19, #0x8]
7101a1e790  ldr x0,[x8, #0x5e8]
7101a1e794  add x1,sp,#0x8
7101a1e798  str wzr,[x8, #0x394]
7101a1e79c  bl 0x71019fd0b0
7101a1e7a0  ldr x0,[x19, #0x8]
7101a1e7a4  mov w1,#0xffffffff
7101a1e7a8  bl 0x7101a024c0
7101a1e7ac  ldr x8,[x19, #0x8]
7101a1e7b0  strb wzr,[x8, #0x6bd]
7101a1e7b4  ldr x8,[x19, #0x8]
7101a1e7b8  ldr x8,[x8, #0x5e8]
7101a1e7bc  fmov s8,wzr
7101a1e7c0  mov v0.16B,v8.16B
7101a1e7c4  adrp x1,0x710425e000
7101a1e7c8  add x1,x1,#0xd91
7101a1e7cc  ldr x0,[x8, #0x10]
7101a1e7d0  bl 0x7103778630
7101a1e7d4  ldr x8,[x19, #0x8]
7101a1e7d8  ldr x22,[x8, #0x5e8]
7101a1e7dc  ldr x0,[x22, #0x10]
7101a1e7e0  mov v0.16B,v8.16B
7101a1e7e4  adrp x21,0x710433a000
7101a1e7e8  add x21,x21,#0x9c5
7101a1e7ec  mov x1,x21
7101a1e7f0  bl 0x7103778630
7101a1e7f4  ldr x0,[x22, #0xf0]
7101a1e7f8  mov v0.16B,v8.16B
7101a1e7fc  mov x1,x21
7101a1e800  bl 0x7103778630
7101a1e804  ldr x0,[x22, #0x100]
7101a1e808  mov v0.16B,v8.16B
7101a1e80c  mov x1,x21
7101a1e810  bl 0x7103778630
7101a1e814  ldr x8,[x19, #0x8]
7101a1e818  ldr x9,[x8, #0x678]
7101a1e81c  cmp x9,#0x0
7101a1e820  ldr x0,[x8, #0x5e8]
7101a1e824  str wzr,[x8, #0x5d0]
7101a1e828  cset w9,ne
7101a1e82c  orr w9,w9,w20
7101a1e830  and w2,w9,#0x1
7101a1e834  mov w1,wzr
7101a1e838  bl 0x71019fff00
7101a1e83c  ldr x8,[x19, #0x8]
7101a1e840  mov w9,#0x1
7101a1e844  strb w9,[x8, #0x6ba]
7101a1e848  ldp x29,x30,[sp, #0x30]
7101a1e84c  ldp x20,x19,[sp, #0x20]
7101a1e850  ldp x22,x21,[sp, #0x10]
7101a1e854  ldr d8,[sp], #0x40
7101a1e858  ret
