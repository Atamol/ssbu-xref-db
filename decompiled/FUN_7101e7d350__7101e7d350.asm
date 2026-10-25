// addr:      7101e7d350
// offset:    0x1e7d350
// name:      FUN_7101e7d350
// mangled:   
// size:      1700

7101e7d350  sub sp,sp,#0x90
7101e7d354  str d8,[sp, #0x50]
7101e7d358  stp x22,x21,[sp, #0x60]
7101e7d35c  stp x20,x19,[sp, #0x70]
7101e7d360  stp x29,x30,[sp, #0x80]
7101e7d364  add x29,sp,#0x80
7101e7d368  ldrb w8,[x0, #0x40]
7101e7d36c  mov x19,x0
7101e7d370  cbz w8,0x7101e7d3d0
7101e7d374  ldr x8,[x19, #0x48]
7101e7d378  ldr x21,[x8]
7101e7d37c  ldr x8,[x21, #0x8]
7101e7d380  ldrb w20,[x19, #0x41]
7101e7d384  sub x9,x8,#0x1
7101e7d388  ands x11,x9,x8
7101e7d38c  b.eq 0x7101e7d44c
7101e7d390  cmp x8,x20
7101e7d394  mov x12,x20
7101e7d398  b.hi 0x7101e7d3a4
7101e7d39c  udiv x10,x20,x8
7101e7d3a0  msub x12,x10,x8,x20
7101e7d3a4  ldr x10,[x21]
7101e7d3a8  ldr x13,[x10, x12, LSL #0x3]
7101e7d3ac  ldr x13,[x13]
7101e7d3b0  ldr x12,[x13, #0x8]
7101e7d3b4  cmp x12,x20
7101e7d3b8  b.ne 0x7101e7d3ac
7101e7d3bc  mov x12,x13
7101e7d3c0  ldrb w14,[x12, #0x10]!
7101e7d3c4  cmp w14,w20
7101e7d3c8  b.ne 0x7101e7d3ac
7101e7d3cc  b 0x7101e7d478
7101e7d3d0  mov x11,#0x7473
7101e7d3d4  movk x11,#0x7461, LSL #16
7101e7d3d8  orr x9,xzr,#0xc00000000
7101e7d3dc  add x10,sp,#0x8
7101e7d3e0  movk x11,#0x7365, LSL #32
7101e7d3e4  movk x11,#0x635f, LSL #48
7101e7d3e8  stp x9,x11,[sp, #0x8]
7101e7d3ec  add x20,x10,#0x8
7101e7d3f0  add x9,x10,#0x9
7101e7d3f4  mov w10,#0x6f6c
7101e7d3f8  movk w10,#0x6573, LSL #16
7101e7d3fc  mov w8,#0x9dc5
7101e7d400  movk w8,#0x811c, LSL #16
7101e7d404  str w10,[sp, #0x18]
7101e7d408  mov w11,#0x73
7101e7d40c  strb wzr,[sp, #0x1c]
7101e7d410  mov w10,#0x89
7101e7d414  mul w8,w8,w10
7101e7d418  and w11,w11,#0xff
7101e7d41c  eor w8,w8,w11
7101e7d420  ldrb w11,[x9], #0x1
7101e7d424  cbnz w11,0x7101e7d414
7101e7d428  fmov s8,0x3f800000
7101e7d42c  str w8,[sp, #0x8]
7101e7d430  ldr x0,[x19, #0x8]
7101e7d434  mov x1,x20
7101e7d438  mov v0.16B,v8.16B
7101e7d43c  bl 0x7103778300
7101e7d440  ldr x0,[x19, #0x18]
7101e7d444  mov x1,x20
7101e7d448  b 0x7101e7d9d4
7101e7d44c  ldr x10,[x21]
7101e7d450  and x12,x9,x20
7101e7d454  ldr x13,[x10, x12, LSL #0x3]
7101e7d458  ldr x13,[x13]
7101e7d45c  ldr x12,[x13, #0x8]
7101e7d460  cmp x12,x20
7101e7d464  b.ne 0x7101e7d458
7101e7d468  mov x12,x13
7101e7d46c  ldrb w14,[x12, #0x10]!
7101e7d470  cmp w14,w20
7101e7d474  b.ne 0x7101e7d458
7101e7d478  ldrsb x12,[x12, #0x4]
7101e7d47c  tbnz x12,#0x3f,0x7101e7d4e0
7101e7d480  lsr x13,x12,#0x3
7101e7d484  and x13,x13,#0x1ffffffffffffff8
7101e7d488  add x13,x21,x13
7101e7d48c  ldr x13,[x13, #0x80]
7101e7d490  mov w14,#0x1
7101e7d494  lsl x12,x14,x12
7101e7d498  tst x13,x12
7101e7d49c  b.eq 0x7101e7d4e0
7101e7d4a0  cbz x11,0x7101e7d5d8
7101e7d4a4  cmp x8,x20
7101e7d4a8  mov x9,x20
7101e7d4ac  b.hi 0x7101e7d4b8
7101e7d4b0  udiv x9,x20,x8
7101e7d4b4  msub x9,x9,x8,x20
7101e7d4b8  ldr x8,[x10, x9, LSL #0x3]
7101e7d4bc  ldr x8,[x8]
7101e7d4c0  ldr x9,[x8, #0x8]
7101e7d4c4  cmp x9,x20
7101e7d4c8  b.ne 0x7101e7d4bc
7101e7d4cc  mov x9,x8
7101e7d4d0  ldrb w10,[x9, #0x10]!
7101e7d4d4  cmp w10,w20
7101e7d4d8  b.ne 0x7101e7d4bc
7101e7d4dc  b 0x7101e7d600
7101e7d4e0  cbz x11,0x7101e7d51c
7101e7d4e4  cmp x8,x20
7101e7d4e8  mov x11,x20
7101e7d4ec  b.hi 0x7101e7d4f8
7101e7d4f0  udiv x11,x20,x8
7101e7d4f4  msub x11,x11,x8,x20
7101e7d4f8  ldr x10,[x10, x11, LSL #0x3]
7101e7d4fc  ldr x10,[x10]
7101e7d500  ldr x11,[x10, #0x8]
7101e7d504  cmp x11,x20
7101e7d508  b.ne 0x7101e7d4fc
7101e7d50c  ldrb w11,[x10, #0x10]
7101e7d510  cmp w11,w20
7101e7d514  b.ne 0x7101e7d4fc
7101e7d518  b 0x7101e7d540
7101e7d51c  and x11,x9,x20
7101e7d520  ldr x10,[x10, x11, LSL #0x3]
7101e7d524  ldr x10,[x10]
7101e7d528  ldr x11,[x10, #0x8]
7101e7d52c  cmp x11,x20
7101e7d530  b.ne 0x7101e7d524
7101e7d534  ldrb w11,[x10, #0x10]
7101e7d538  cmp w11,w20
7101e7d53c  b.ne 0x7101e7d524
7101e7d540  ldr w2,[x10, #0x18]
7101e7d544  adrp x10,0x710532f000
7101e7d548  ldr x10,[x10, #0x730]
7101e7d54c  ldr x10,[x10, #0x8]
7101e7d550  ldr x10,[x10, #0x228]
7101e7d554  ldr x1,[x10, #0x8]
7101e7d558  ldr x10,[x1, #0x20]
7101e7d55c  ldrb w11,[x10]
7101e7d560  cmp w11,#0xc
7101e7d564  b.ne 0x7101e7d708
7101e7d568  ldur w11,[x10, #0x1]
7101e7d56c  subs w12,w11,#0x1
7101e7d570  b.lt 0x7101e7d708
7101e7d574  ldr x11,[x1, #0x48]
7101e7d578  ldr x16,[x1, #0x18]
7101e7d57c  and x14,x11,#0xffffffffff
7101e7d580  ldursw x11,[x10, #0x5]
7101e7d584  ldp x15,x16,[x16, #0x20]
7101e7d588  mov w13,wzr
7101e7d58c  add x16,x16,x11
7101e7d590  adrp x11,0x7104742000
7101e7d594  add x11,x11,#0xdbb
7101e7d598  add w17,w12,w13
7101e7d59c  cmp w17,#0x0
7101e7d5a0  cinc w17,w17,lt
7101e7d5a4  asr w17,w17,#0x1
7101e7d5a8  add x18,x16,w17, SXTW  #0x3
7101e7d5ac  ldr w0,[x18]
7101e7d5b0  ldr x0,[x15, x0, LSL #0x3]
7101e7d5b4  cmp x0,x14
7101e7d5b8  b.eq 0x7101e7d6f8
7101e7d5bc  sub w18,w17,#0x1
7101e7d5c0  cmp x0,x14
7101e7d5c4  csel w12,w18,w12,hi
7101e7d5c8  csinc w13,w13,w17,hi
7101e7d5cc  cmp w13,w12
7101e7d5d0  b.le 0x7101e7d598
7101e7d5d4  b 0x7101e7d710
7101e7d5d8  and x8,x9,x20
7101e7d5dc  ldr x8,[x10, x8, LSL #0x3]
7101e7d5e0  ldr x8,[x8]
7101e7d5e4  ldr x9,[x8, #0x8]
7101e7d5e8  cmp x9,x20
7101e7d5ec  b.ne 0x7101e7d5e0
7101e7d5f0  mov x9,x8
7101e7d5f4  ldrb w10,[x9, #0x10]!
7101e7d5f8  cmp w10,w20
7101e7d5fc  b.ne 0x7101e7d5e0
7101e7d600  ldrsb x8,[x9, #0x4]
7101e7d604  adrp x9,0x71043cf000
7101e7d608  add x9,x9,#0xb42
7101e7d60c  tbnz x8,#0x3f,0x7101e7d638
7101e7d610  lsr x10,x8,#0x3
7101e7d614  and x10,x10,#0x1ffffffffffffff8
7101e7d618  add x10,x21,x10
7101e7d61c  ldr x10,[x10, #0x90]
7101e7d620  mov w11,#0x1
7101e7d624  lsl x8,x11,x8
7101e7d628  adrp x11,0x710424f000
7101e7d62c  add x11,x11,#0xbba
7101e7d630  tst x10,x8
7101e7d634  csel x9,x9,x11,eq
7101e7d638  mov x8,xzr
7101e7d63c  add x10,sp,#0x8
7101e7d640  str xzr,[sp, #0x8]
7101e7d644  b 0x7101e7d650
7101e7d648  add x8,x8,#0x2
7101e7d64c  strb w11,[x12, #0x9]
7101e7d650  add x11,x9,x8
7101e7d654  ldrb w13,[x11]
7101e7d658  cbz w13,0x7101e7d684
7101e7d65c  add w14,w8,#0x1
7101e7d660  add x12,x10,x8
7101e7d664  cmp w14,#0x3f
7101e7d668  strb w13,[x12, #0x8]
7101e7d66c  b.cs 0x7101e7d680
7101e7d670  ldrb w11,[x11, #0x1]
7101e7d674  cbnz w11,0x7101e7d648
7101e7d678  add x8,x8,#0x1
7101e7d67c  b 0x7101e7d684
7101e7d680  add w8,w8,#0x1
7101e7d684  add x11,sp,#0x8
7101e7d688  add x20,x11,#0x8
7101e7d68c  mov w9,#0x9dc5
7101e7d690  movk w9,#0x811c, LSL #16
7101e7d694  strb wzr,[x20, w8, UXTW ]
7101e7d698  ldrb w10,[sp, #0x10]
7101e7d69c  str w8,[sp, #0xc]
7101e7d6a0  cbz w10,0x7101e7d6c0
7101e7d6a4  add x8,x11,#0x9
7101e7d6a8  mov w11,#0x89
7101e7d6ac  mul w9,w9,w11
7101e7d6b0  and w10,w10,#0xff
7101e7d6b4  eor w9,w9,w10
7101e7d6b8  ldrb w10,[x8], #0x1
7101e7d6bc  cbnz w10,0x7101e7d6ac
7101e7d6c0  fmov s8,0x3f800000
7101e7d6c4  str w9,[sp, #0x8]
7101e7d6c8  ldr x0,[x19, #0x8]
7101e7d6cc  mov x1,x20
7101e7d6d0  mov v0.16B,v8.16B
7101e7d6d4  bl 0x7103778300
7101e7d6d8  ldr x0,[x19, #0x18]
7101e7d6dc  mov v0.16B,v8.16B
7101e7d6e0  mov x1,x20
7101e7d6e4  bl 0x7103778300
7101e7d6e8  ldr x0,[x19, #0x8]
7101e7d6ec  adrp x1,0x71042f8000
7101e7d6f0  add x1,x1,#0x9a5
7101e7d6f4  b 0x7101e7d9d4
7101e7d6f8  ldrsw x11,[x18, #0x4]
7101e7d6fc  tbnz w11,#0x1f,0x7101e7d708
7101e7d700  add x11,x10,x11
7101e7d704  b 0x7101e7d710
7101e7d708  adrp x11,0x7104742000
7101e7d70c  add x11,x11,#0xdbb
7101e7d710  ldrb w10,[x11]
7101e7d714  sub w10,w10,#0xb
7101e7d718  cmp w10,#0x1
7101e7d71c  b.hi 0x7101e7d7b8
7101e7d720  ldur w10,[x11, #0x1]
7101e7d724  cmp w10,w2
7101e7d728  b.ls 0x7101e7d7b8
7101e7d72c  add x0,sp,#0x8
7101e7d730  bl 0x710326a3e0
7101e7d734  ldr x9,[sp, #0x10]
7101e7d738  ldrb w8,[x9]
7101e7d73c  cmp w8,#0xc
7101e7d740  b.ne 0x7101e7d7d4
7101e7d744  ldur w8,[x9, #0x1]
7101e7d748  subs w10,w8,#0x1
7101e7d74c  b.lt 0x7101e7d7d4
7101e7d750  ldr x13,[sp, #0x8]
7101e7d754  ldursw x8,[x9, #0x5]
7101e7d758  mov x14,#0x94fc
7101e7d75c  movk x14,#0x1826, LSL #16
7101e7d760  movk x14,#0x4, LSL #32
7101e7d764  mov w11,wzr
7101e7d768  ldp x12,x13,[x13, #0x20]
7101e7d76c  add x13,x13,x8
7101e7d770  adrp x8,0x7104742000
7101e7d774  add x8,x8,#0xdbb
7101e7d778  add w15,w10,w11
7101e7d77c  cmp w15,#0x0
7101e7d780  cinc w15,w15,lt
7101e7d784  asr w15,w15,#0x1
7101e7d788  add x16,x13,w15, SXTW  #0x3
7101e7d78c  ldr w17,[x16]
7101e7d790  ldr x17,[x12, x17, LSL #0x3]
7101e7d794  cmp x17,x14
7101e7d798  b.eq 0x7101e7d7c4
7101e7d79c  sub w16,w15,#0x1
7101e7d7a0  cmp x17,x14
7101e7d7a4  csel w10,w16,w10,hi
7101e7d7a8  csinc w11,w11,w15,hi
7101e7d7ac  cmp w11,w10
7101e7d7b0  b.le 0x7101e7d778
7101e7d7b4  b 0x7101e7d7dc
7101e7d7b8  mov w22,wzr
7101e7d7bc  mov x10,x21
7101e7d7c0  b 0x7101e7d83c
7101e7d7c4  ldrsw x8,[x16, #0x4]
7101e7d7c8  tbnz w8,#0x1f,0x7101e7d7d4
7101e7d7cc  add x8,x9,x8
7101e7d7d0  b 0x7101e7d7dc
7101e7d7d4  adrp x8,0x7104742000
7101e7d7d8  add x8,x8,#0xdbb
7101e7d7dc  ldrb w9,[x8]
7101e7d7e0  sub w9,w9,#0x1
7101e7d7e4  cmp w9,#0x6
7101e7d7e8  b.hi 0x7101e7d810
7101e7d7ec  adrp x10,0x71044fb000
7101e7d7f0  add x10,x10,#0xfdc
7101e7d7f4  ldrsw x9,[x10, x9, LSL #0x2]
7101e7d7f8  add x9,x9,x10
7101e7d7fc  br x9
7101e7d800  ldrb w22,[x8, #0x1]
7101e7d804  b 0x7101e7d82c
7101e7d808  ldur w22,[x8, #0x1]
7101e7d80c  b 0x7101e7d82c
7101e7d810  mov w22,wzr
7101e7d814  b 0x7101e7d82c
7101e7d818  ldrsb w22,[x8, #0x1]
7101e7d81c  b 0x7101e7d82c
7101e7d820  ldursh w22,[x8, #0x1]
7101e7d824  b 0x7101e7d82c
7101e7d828  ldurh w22,[x8, #0x1]
7101e7d82c  ldr x8,[x19, #0x48]
7101e7d830  ldr x10,[x8]
7101e7d834  ldr x8,[x10, #0x8]
7101e7d838  sub x9,x8,#0x1
7101e7d83c  ldp w11,w12,[x21, #0xa0]
7101e7d840  tst x9,x8
7101e7d844  b.eq 0x7101e7d888
7101e7d848  cmp x8,x20
7101e7d84c  mov x9,x20
7101e7d850  b.hi 0x7101e7d85c
7101e7d854  udiv x9,x20,x8
7101e7d858  msub x9,x9,x8,x20
7101e7d85c  ldr x8,[x10]
7101e7d860  ldr x8,[x8, x9, LSL #0x3]
7101e7d864  ldr x8,[x8]
7101e7d868  ldr x9,[x8, #0x8]
7101e7d86c  cmp x9,x20
7101e7d870  b.ne 0x7101e7d864
7101e7d874  mov x9,x8
7101e7d878  ldrb w13,[x9, #0x10]!
7101e7d87c  cmp w13,w20
7101e7d880  b.ne 0x7101e7d864
7101e7d884  b 0x7101e7d8b4
7101e7d888  and x8,x9,x20
7101e7d88c  ldr x9,[x10]
7101e7d890  ldr x8,[x9, x8, LSL #0x3]
7101e7d894  ldr x8,[x8]
7101e7d898  ldr x9,[x8, #0x8]
7101e7d89c  cmp x9,x20
7101e7d8a0  b.ne 0x7101e7d894
7101e7d8a4  mov x9,x8
7101e7d8a8  ldrb w13,[x9, #0x10]!
7101e7d8ac  cmp w13,w20
7101e7d8b0  b.ne 0x7101e7d894
7101e7d8b4  ldrsb x8,[x9, #0x4]
7101e7d8b8  sub w21,w11,w12
7101e7d8bc  tbnz x8,#0x3f,0x7101e7d8e4
7101e7d8c0  lsr x9,x8,#0x3
7101e7d8c4  and x9,x9,#0x1ffffffffffffff8
7101e7d8c8  add x9,x10,x9
7101e7d8cc  mov w10,#0x1
7101e7d8d0  ldr x9,[x9, #0x70]
7101e7d8d4  lsl x8,x10,x8
7101e7d8d8  tst x9,x8
7101e7d8dc  cset w9,ne
7101e7d8e0  b 0x7101e7d8e8
7101e7d8e4  mov w9,wzr
7101e7d8e8  cmp w22,w21
7101e7d8ec  cset w10,ls
7101e7d8f0  adrp x11,0x71043e0000
7101e7d8f4  add x11,x11,#0x86d
7101e7d8f8  tst w10,w9
7101e7d8fc  adrp x9,0x710425f000
7101e7d900  add x9,x9,#0xb3d
7101e7d904  str xzr,[sp, #0x8]
7101e7d908  mov x8,xzr
7101e7d90c  csel x9,x9,x11,ne
7101e7d910  add x10,sp,#0x8
7101e7d914  b 0x7101e7d920
7101e7d918  add x8,x8,#0x2
7101e7d91c  strb w11,[x12, #0x9]
7101e7d920  add x11,x9,x8
7101e7d924  ldrb w13,[x11]
7101e7d928  cbz w13,0x7101e7d954
7101e7d92c  add w14,w8,#0x1
7101e7d930  add x12,x10,x8
7101e7d934  cmp w14,#0x3f
7101e7d938  strb w13,[x12, #0x8]
7101e7d93c  b.cs 0x7101e7d950
7101e7d940  ldrb w11,[x11, #0x1]
7101e7d944  cbnz w11,0x7101e7d918
7101e7d948  add x8,x8,#0x1
7101e7d94c  b 0x7101e7d954
7101e7d950  add w8,w8,#0x1
7101e7d954  add x11,sp,#0x8
7101e7d958  add x20,x11,#0x8
7101e7d95c  mov w9,#0x9dc5
7101e7d960  movk w9,#0x811c, LSL #16
7101e7d964  strb wzr,[x20, w8, UXTW ]
7101e7d968  ldrb w10,[sp, #0x10]
7101e7d96c  str w8,[sp, #0xc]
7101e7d970  cbz w10,0x7101e7d990
7101e7d974  add x8,x11,#0x9
7101e7d978  mov w11,#0x89
7101e7d97c  mul w9,w9,w11
7101e7d980  and w10,w10,#0xff
7101e7d984  eor w9,w9,w10
7101e7d988  ldrb w10,[x8], #0x1
7101e7d98c  cbnz w10,0x7101e7d97c
7101e7d990  fmov s8,0x3f800000
7101e7d994  str w9,[sp, #0x8]
7101e7d998  ldr x0,[x19, #0x8]
7101e7d99c  mov x1,x20
7101e7d9a0  mov v0.16B,v8.16B
7101e7d9a4  bl 0x7103778300
7101e7d9a8  ldr x0,[x19, #0x18]
7101e7d9ac  mov v0.16B,v8.16B
7101e7d9b0  mov x1,x20
7101e7d9b4  bl 0x7103778300
7101e7d9b8  ldr x0,[x19, #0x8]
7101e7d9bc  adrp x8,0x7104443000
7101e7d9c0  add x8,x8,#0xdb2
7101e7d9c4  adrp x9,0x71042f8000
7101e7d9c8  add x9,x9,#0x9a5
7101e7d9cc  cmp w22,w21
7101e7d9d0  csel x1,x9,x8,ls
7101e7d9d4  mov v0.16B,v8.16B
7101e7d9d8  bl 0x7103778300
7101e7d9dc  ldr d8,[sp, #0x50]
7101e7d9e0  ldp x29,x30,[sp, #0x80]
7101e7d9e4  ldp x20,x19,[sp, #0x70]
7101e7d9e8  ldp x22,x21,[sp, #0x60]
7101e7d9ec  add sp,sp,#0x90
7101e7d9f0  ret
