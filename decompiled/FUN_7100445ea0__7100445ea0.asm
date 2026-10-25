// addr:      7100445ea0
// offset:    0x445ea0
// name:      FUN_7100445ea0
// mangled:   
// size:      116

7100445ea0  str x19,[sp, #-0x20]!
7100445ea4  stp x29,x30,[sp, #0x10]
7100445ea8  add x29,sp,#0x10
7100445eac  adrp x8,0x7105339000
7100445eb0  str wzr,[x8, #0x5c8]
7100445eb4  adrp x19,0x7105339000
7100445eb8  add x19,x19,#0x5d0
7100445ebc  mov w8,#0x14
7100445ec0  adrp x0,0x7103558000
7100445ec4  add x0,x0,#0x230
7100445ec8  stp xzr,xzr,[x19]
7100445ecc  strb w8,[x19]
7100445ed0  mov w8,#0x6b6e
7100445ed4  sturh w8,[x19, #0x9]
7100445ed8  adrp x8,0x7104290000
7100445edc  add x8,x8,#0x3e8
7100445ee0  ldr x8,[x8]
7100445ee4  adrp x2,0x7104f17000
7100445ee8  add x2,x2,#0x0
7100445eec  mov x1,x19
7100445ef0  str xzr,[x19, #0x10]
7100445ef4  strb wzr,[x19, #0xb]
7100445ef8  stur x8,[x19, #0x1]
7100445efc  bl 0x71000001c0
7100445f00  ldp x29,x30,[sp, #0x10]
7100445f04  adrp x8,0x7105339000
7100445f08  str x19,[x8, #0x5e8]
7100445f0c  ldr x19,[sp], #0x20
7100445f10  ret
