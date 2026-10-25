// addr:      71001ed2a0
// offset:    0x1ed2a0
// name:      FUN_71001ed2a0
// mangled:   
// size:      448

71001ed2a0  stp x22,x21,[sp, #-0x30]!
71001ed2a4  stp x20,x19,[sp, #0x10]
71001ed2a8  stp x29,x30,[sp, #0x20]
71001ed2ac  add x29,sp,#0x20
71001ed2b0  adrp x21,0x71052a4000
71001ed2b4  ldr x21,[x21, #0xda8]
71001ed2b8  adrp x20,0x71052a4000
71001ed2bc  ldrb w8,[x21]
71001ed2c0  ldr x20,[x20, #0xdb0]
71001ed2c4  mov x19,x1
71001ed2c8  add x22,x20,#0x18
71001ed2cc  cbz w8,0x71001ed308
71001ed2d0  adrp x8,0x71052a4000
71001ed2d4  ldr x8,[x8, #0xdb8]
71001ed2d8  ldr x0,[x8]
71001ed2dc  bl 0x7101717960
71001ed2e0  ldr w8,[x0]
71001ed2e4  cbz w8,0x71001ed308
71001ed2e8  ldr x10,[x20, #0xa0]
71001ed2ec  ldp x9,x10,[x10]
71001ed2f0  sub x10,x10,x9
71001ed2f4  asr x10,x10,#0x3
71001ed2f8  cmp x10,x8
71001ed2fc  b.ls 0x71001ed3dc
71001ed300  ldr x8,[x9, x8, LSL #0x3]
71001ed304  add x22,x8,#0x10
71001ed308  ldr x8,[x22]
71001ed30c  cbz x8,0x71001ed3c8
71001ed310  ldr x8,[x8, #0x10]
71001ed314  cbz x8,0x71001ed408
71001ed318  ldrb w8,[x21]
71001ed31c  cbz w8,0x71001ed41c
71001ed320  adrp x22,0x71052a4000
71001ed324  ldr x22,[x22, #0xdb8]
71001ed328  ldr x0,[x22]
71001ed32c  bl 0x7101717960
71001ed330  ldr w8,[x0]
71001ed334  cbz w8,0x71001ed368
71001ed338  ldr x9,[x20, #0xa0]
71001ed33c  ldp x10,x9,[x9]
71001ed340  sub x9,x9,x10
71001ed344  asr x9,x9,#0x3
71001ed348  cmp x9,x8
71001ed34c  b.hi 0x71001ed368
71001ed350  adrp x0,0x71042c4000
71001ed354  add x0,x0,#0x35f
71001ed358  mov w1,#0x47
71001ed35c  orr w2,wzr,#0xe0000003
71001ed360  mov w3,wzr
71001ed364  bl 0x71001b1300
71001ed368  ldrb w8,[x21]
71001ed36c  add x21,x20,#0x18
71001ed370  cbz w8,0x71001ed3a4
71001ed374  ldr x0,[x22]
71001ed378  bl 0x7101717960
71001ed37c  ldr w8,[x0]
71001ed380  cbz w8,0x71001ed3a4
71001ed384  ldr x10,[x20, #0xa0]
71001ed388  ldp x9,x10,[x10]
71001ed38c  sub x10,x10,x9
71001ed390  asr x10,x10,#0x3
71001ed394  cmp x10,x8
71001ed398  b.ls 0x71001ed448
71001ed39c  ldr x8,[x9, x8, LSL #0x3]
71001ed3a0  add x21,x8,#0x10
71001ed3a4  ldr x8,[x21]
71001ed3a8  ldr x8,[x8, #0x10]
71001ed3ac  ldr x9,[x8, #0x180]
71001ed3b0  cbz x9,0x71001ed430
71001ed3b4  mov w0,wzr
71001ed3b8  ldp x29,x30,[sp, #0x20]
71001ed3bc  ldp x20,x19,[sp, #0x10]
71001ed3c0  ldp x22,x21,[sp], #0x30
71001ed3c4  ret
71001ed3c8  mov w0,wzr
71001ed3cc  ldp x29,x30,[sp, #0x20]
71001ed3d0  ldp x20,x19,[sp, #0x10]
71001ed3d4  ldp x22,x21,[sp], #0x30
71001ed3d8  ret
71001ed3dc  adrp x0,0x71042c4000
71001ed3e0  add x0,x0,#0x35f
71001ed3e4  mov w1,#0x47
71001ed3e8  orr w2,wzr,#0xe0000003
71001ed3ec  mov w3,wzr
71001ed3f0  bl 0x71001b1300
71001ed3f4  mov w0,wzr
71001ed3f8  ldp x29,x30,[sp, #0x20]
71001ed3fc  ldp x20,x19,[sp, #0x10]
71001ed400  ldp x22,x21,[sp], #0x30
71001ed404  ret
71001ed408  mov w0,wzr
71001ed40c  ldp x29,x30,[sp, #0x20]
71001ed410  ldp x20,x19,[sp, #0x10]
71001ed414  ldp x22,x21,[sp], #0x30
71001ed418  ret
71001ed41c  add x21,x20,#0x18
71001ed420  ldr x8,[x21]
71001ed424  ldr x8,[x8, #0x10]
71001ed428  ldr x9,[x8, #0x180]
71001ed42c  cbnz x9,0x71001ed3b4
71001ed430  mov w0,#0x1
71001ed434  str x19,[x8, #0x180]
71001ed438  ldp x29,x30,[sp, #0x20]
71001ed43c  ldp x20,x19,[sp, #0x10]
71001ed440  ldp x22,x21,[sp], #0x30
71001ed444  ret
71001ed448  adrp x0,0x71042c4000
71001ed44c  add x0,x0,#0x35f
71001ed450  mov w1,#0x47
71001ed454  orr w2,wzr,#0xe0000003
71001ed458  mov w3,wzr
71001ed45c  bl 0x71001b1300
