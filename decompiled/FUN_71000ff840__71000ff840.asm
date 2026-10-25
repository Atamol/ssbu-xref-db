// addr:      71000ff840
// offset:    0xff840
// name:      FUN_71000ff840
// mangled:   
// size:      460

71000ff840  sub sp,sp,#0x40
71000ff844  str x21,[sp, #0x10]
71000ff848  stp x20,x19,[sp, #0x20]
71000ff84c  stp x29,x30,[sp, #0x30]
71000ff850  add x29,sp,#0x30
71000ff854  adrp x21,0x71052a5000
71000ff858  ldr x21,[x21, #0x80]
71000ff85c  mov x19,x0
71000ff860  ldr x0,[x21]
71000ff864  bl 0x7100146ba0
71000ff868  sub w8,w0,#0x5
71000ff86c  cmp w8,#0x3
71000ff870  b.hi 0x71000ff898
71000ff874  adrp x9,0x7104496000
71000ff878  add x9,x9,#0x42c
71000ff87c  ldrsw x8,[x9, x8, LSL #0x2]
71000ff880  add x8,x8,x9
71000ff884  br x8
71000ff888  mov w8,#0x1
71000ff88c  orr w9,wzr,#0x3
71000ff890  mov w10,#0xc406
71000ff894  b 0x71000ff900
71000ff898  ldrb w8,[x19, #0xfb]
71000ff89c  cbz w8,0x71000ff97c
71000ff8a0  add x1,x19,#0x100
71000ff8a4  add x0,x19,#0x220
71000ff8a8  bl 0x71000bcf30
71000ff8ac  adrp x8,0x71052a5000
71000ff8b0  ldr x8,[x8, #0x238]
71000ff8b4  orr w9,wzr,#0x6
71000ff8b8  strb w9,[x19, #0x130]
71000ff8bc  adrp x9,0x7104290000
71000ff8c0  add x9,x9,#0xd05
71000ff8c4  stp x8,xzr,[x19, #0x30]
71000ff8c8  str x9,[x19, #0x40]
71000ff8cc  mov w0,#0x5
71000ff8d0  b 0x71000ff968
71000ff8d4  mov w8,#0x1
71000ff8d8  orr w9,wzr,#0x3
71000ff8dc  mov w10,#0xa471
71000ff8e0  b 0x71000ff900
71000ff8e4  mov w8,#0x1
71000ff8e8  orr w9,wzr,#0x3
71000ff8ec  mov w10,#0xc420
71000ff8f0  b 0x71000ff900
71000ff8f4  mov w8,#0x1
71000ff8f8  orr w9,wzr,#0x3
71000ff8fc  mov w10,#0xc421
71000ff900  strb w8,[x19, #0xfa]
71000ff904  mov x8,sp
71000ff908  orr x20,x8,#0x4
71000ff90c  mov x0,x20
71000ff910  strb w9,[x19, #0x130]
71000ff914  str w10,[sp]
71000ff918  bl 0x71039c0a80
71000ff91c  add x1,sp,#0x18
71000ff920  mov x0,x20
71000ff924  str wzr,[sp, #0x18]
71000ff928  bl 0x71039c0a90
71000ff92c  add x0,x19,#0x220
71000ff930  mov x1,sp
71000ff934  bl 0x71000bcf30
71000ff938  ldr x8,[x21]
71000ff93c  ldr x0,[x8, #0x8]
71000ff940  ldr x8,[x0]
71000ff944  ldr x8,[x8, #0x28]
71000ff948  blr x8
71000ff94c  adrp x8,0x71052a5000
71000ff950  ldr x8,[x8, #0x240]
71000ff954  mov x0,xzr
71000ff958  stp x8,xzr,[x19, #0x30]
71000ff95c  adrp x8,0x71043ac000
71000ff960  add x8,x8,#0x982
71000ff964  str x8,[x19, #0x40]
71000ff968  ldp x29,x30,[sp, #0x30]
71000ff96c  ldr x21,[sp, #0x10]
71000ff970  ldp x20,x19,[sp, #0x20]
71000ff974  add sp,sp,#0x40
71000ff978  ret
71000ff97c  ldr x8,[x21]
71000ff980  strb wzr,[x8, #0x15c]
71000ff984  adrp x20,0x71052a4000
71000ff988  ldr x20,[x20, #0xdf0]
71000ff98c  ldr x0,[x20]
71000ff990  mov x8,sp
71000ff994  bl 0x71001918f0
71000ff998  ldr w8,[sp]
71000ff99c  cbz w8,0x71000ff9e4
71000ff9a0  mov w8,#0x1b
71000ff9a4  add x0,x19,#0x220
71000ff9a8  mov x1,sp
71000ff9ac  strb w8,[x19, #0x130]
71000ff9b0  bl 0x71000bcf30
71000ff9b4  ldr x8,[x21]
71000ff9b8  ldrb w9,[x8, #0x162]
71000ff9bc  cmp w9,#0x0
71000ff9c0  cset w9,eq
71000ff9c4  add x8,x8,w9, UXTW  #0x3
71000ff9c8  ldr x0,[x8, #0x168]
71000ff9cc  bl 0x71000d8f90
71000ff9d0  adrp x9,0x71052a5000
71000ff9d4  ldr x9,[x9, #0x238]
71000ff9d8  adrp x8,0x7104290000
71000ff9dc  add x8,x8,#0xd05
71000ff9e0  b 0x71000ffa00
71000ff9e4  ldr x0,[x20]
71000ff9e8  mov w1,#0x1
71000ff9ec  bl 0x7100193380
71000ff9f0  adrp x9,0x71052a5000
71000ff9f4  ldr x9,[x9, #0x3b0]
71000ff9f8  adrp x8,0x71043ef000
71000ff9fc  add x8,x8,#0xb33
71000ffa00  mov w0,#0x5
71000ffa04  stp x9,xzr,[x19, #0x30]
71000ffa08  b 0x71000ff964
