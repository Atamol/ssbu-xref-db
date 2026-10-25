// addr:      7101d8d450
// offset:    0x1d8d450
// name:      FUN_7101d8d450
// mangled:   
// size:      2100

7101d8d450  ldrh w9,[x0, #0x15e]
7101d8d454  orr w8,wzr,#0xffff
7101d8d458  cmp x9,x8
7101d8d45c  b.eq 0x7101d8dc80
7101d8d460  sub sp,sp,#0xc0
7101d8d464  stp d9,d8,[sp, #0x50]
7101d8d468  stp x28,x27,[sp, #0x60]
7101d8d46c  stp x26,x25,[sp, #0x70]
7101d8d470  stp x24,x23,[sp, #0x80]
7101d8d474  stp x22,x21,[sp, #0x90]
7101d8d478  stp x20,x19,[sp, #0xa0]
7101d8d47c  stp x29,x30,[sp, #0xb0]
7101d8d480  add x29,sp,#0xb0
7101d8d484  adrp x8,0x7105329000
7101d8d488  ldr x8,[x8, #0xf98]
7101d8d48c  ldr x8,[x8]
7101d8d490  ldr x8,[x8, #0x30]
7101d8d494  ubfx x10,x9,#0x4,#0x1c
7101d8d498  mov x19,x0
7101d8d49c  cmp w10,#0x177
7101d8d4a0  b.cc 0x7101d8d4f0
7101d8d4a4  mov w10,#0xffffe890
7101d8d4a8  add w9,w9,w10
7101d8d4ac  and w10,w9,#0xffff
7101d8d4b0  adrp x27,0x710532a000
7101d8d4b4  add x27,x27,#0x878
7101d8d4b8  cmp w10,#0x63
7101d8d4bc  b.hi 0x7101d8d504
7101d8d4c0  and x9,x9,#0xffff
7101d8d4c4  mov w10,#0x50
7101d8d4c8  madd x8,x9,x10,x8
7101d8d4cc  mov w10,#0x8cc8
7101d8d4d0  movk w10,#0x8, LSL #16
7101d8d4d4  mov w9,#0x8cc0
7101d8d4d8  movk w9,#0x8, LSL #16
7101d8d4dc  ldrsh w10,[x8, x10, LSL #0x0]
7101d8d4e0  add x8,x8,x9
7101d8d4e4  cmn w10,#0x1
7101d8d4e8  csel x27,x27,x8,eq
7101d8d4ec  b 0x7101d8d504
7101d8d4f0  mov w10,#0x50
7101d8d4f4  madd x8,x9,x10,x8
7101d8d4f8  mov w9,#0x1940
7101d8d4fc  movk w9,#0x1, LSL #16
7101d8d500  add x27,x8,x9
7101d8d504  add x0,x19,#0x130
7101d8d508  adrp x1,0x71042c5000
7101d8d50c  add x1,x1,#0x1e4
7101d8d510  add x8,sp,#0x40
7101d8d514  bl 0x7103776640
7101d8d518  adrp x1,0x7104401000
7101d8d51c  add x1,x1,#0x8ea
7101d8d520  add x8,sp,#0x30
7101d8d524  add x0,sp,#0x40
7101d8d528  bl 0x7103776910
7101d8d52c  adrp x1,0x710436c000
7101d8d530  add x1,x1,#0x7c2
7101d8d534  add x0,sp,#0x30
7101d8d538  bl 0x710377a120
7101d8d53c  ldr x0,[sp, #0x38]
7101d8d540  adrp x25,0x710523d000
7101d8d544  add x25,x25,#0x9a8
7101d8d548  stp x25,xzr,[sp, #0x30]
7101d8d54c  cbz x0,0x7101d8d554
7101d8d550  bl 0x710392eb40
7101d8d554  ldrsh w8,[x27, #0x8]
7101d8d558  cmn w8,#0x1
7101d8d55c  b.eq 0x7101d8dc34
7101d8d560  cmp w8,#0x7cf
7101d8d564  b.gt 0x7101d8dc34
7101d8d568  adrp x28,0x710532f000
7101d8d56c  sxtw x21,w8
7101d8d570  ldr x8,[x28, #0x730]
7101d8d574  ldr x8,[x8, #0x8]
7101d8d578  ldr x8,[x8, #0x1d8]
7101d8d57c  add x9,x8,x21, LSL #0x1
7101d8d580  ldp x24,x8,[x8, #0x20]
7101d8d584  sub x8,x8,x24
7101d8d588  orr x23,xzr,#-0x3333333333333334
7101d8d58c  movk x23,#0xcccd
7101d8d590  ldrh w22,[x9, #0x60]
7101d8d594  asr x8,x8,#0x6
7101d8d598  mul x26,x8,x23
7101d8d59c  cmp w26,w22
7101d8d5a0  b.ls 0x7101d8dc34
7101d8d5a4  mov w8,#0x140
7101d8d5a8  madd x8,x22,x8,x24
7101d8d5ac  adrp x9,0x7105182000
7101d8d5b0  add x9,x9,#0xb08
7101d8d5b4  cmp x26,x22
7101d8d5b8  csel x8,x8,x9,hi
7101d8d5bc  ldr w20,[x19, #0x268]
7101d8d5c0  mov w0,w20
7101d8d5c4  ldr s0,[x8, #0x74]
7101d8d5c8  ldr w1,[x8, #0x70]
7101d8d5cc  bl 0x71025c9ac0
7101d8d5d0  ldr w8,[x19, #0x270]
7101d8d5d4  mov w9,w20
7101d8d5d8  subs w20,w8,w20
7101d8d5dc  b.ne 0x7101d8d5e4
7101d8d5e0  ldr w20,[x19, #0x26c]
7101d8d5e4  cmp w0,#0x63
7101d8d5e8  b.ne 0x7101d8d78c
7101d8d5ec  adrp x1,0x7104452000
7101d8d5f0  add x1,x1,#0x6db
7101d8d5f4  add x8,sp,#0x30
7101d8d5f8  add x0,sp,#0x40
7101d8d5fc  bl 0x7103776910
7101d8d600  ldr x0,[sp, #0x38]
7101d8d604  ldr x8,[x0]
7101d8d608  cbz x8,0x7101d8d620
7101d8d60c  orr x9,xzr,#0x3f8000003f800000
7101d8d610  str x9,[x8, #0x48]
7101d8d614  ldrb w9,[x8, #0x58]
7101d8d618  orr w9,w9,#0x10
7101d8d61c  strb w9,[x8, #0x58]
7101d8d620  stp x25,xzr,[sp, #0x30]
7101d8d624  cbz x0,0x7101d8d62c
7101d8d628  bl 0x710392eb40
7101d8d62c  adrp x1,0x71043e0000
7101d8d630  add x1,x1,#0x503
7101d8d634  add x8,sp,#0x30
7101d8d638  add x0,sp,#0x40
7101d8d63c  bl 0x7103776910
7101d8d640  adrp x1,0x7104867000
7101d8d644  add x1,x1,#0xc2e
7101d8d648  add x0,sp,#0x30
7101d8d64c  bl 0x710377a120
7101d8d650  ldr x0,[sp, #0x38]
7101d8d654  stp x25,xzr,[sp, #0x30]
7101d8d658  cbz x0,0x7101d8d660
7101d8d65c  bl 0x710392eb40
7101d8d660  ldr w8,[x19, #0x270]
7101d8d664  str w8,[x19, #0x268]
7101d8d668  adrp x1,0x71042f8000
7101d8d66c  add x1,x1,#0x6cb
7101d8d670  add x8,sp,#0x30
7101d8d674  add x0,sp,#0x40
7101d8d678  bl 0x7103776910
7101d8d67c  ldr x0,[sp, #0x38]
7101d8d680  ldr x8,[x0]
7101d8d684  cbz x8,0x7101d8d694
7101d8d688  ldrb w9,[x8, #0x58]
7101d8d68c  and w9,w9,#0xfe
7101d8d690  strb w9,[x8, #0x58]
7101d8d694  stp x25,xzr,[sp, #0x30]
7101d8d698  cbz x0,0x7101d8d6a0
7101d8d69c  bl 0x710392eb40
7101d8d6a0  adrp x1,0x71042d6000
7101d8d6a4  add x1,x1,#0x651
7101d8d6a8  add x8,sp,#0x30
7101d8d6ac  add x0,sp,#0x40
7101d8d6b0  bl 0x7103776910
7101d8d6b4  ldr x0,[sp, #0x38]
7101d8d6b8  ldr x8,[x0]
7101d8d6bc  cbz x8,0x7101d8d6cc
7101d8d6c0  ldrb w9,[x8, #0x58]
7101d8d6c4  and w9,w9,#0xfe
7101d8d6c8  strb w9,[x8, #0x58]
7101d8d6cc  stp x25,xzr,[sp, #0x30]
7101d8d6d0  cbz x0,0x7101d8d6d8
7101d8d6d4  bl 0x710392eb40
7101d8d6d8  ldr w8,[x19, #0x2c4]
7101d8d6dc  cmn w8,#0x1
7101d8d6e0  b.eq 0x7101d8d8bc
7101d8d6e4  add x0,x19,#0x298
7101d8d6e8  mov w1,wzr
7101d8d6ec  bl 0x710373b540
7101d8d6f0  add x21,x19,#0x2a0
7101d8d6f4  mov x0,x21
7101d8d6f8  str wzr,[x19, #0x298]
7101d8d6fc  bl 0x71039602c0
7101d8d700  adrp x8,0x7104f73000
7101d8d704  add x8,x8,#0xd50
7101d8d708  str x8,[x19, #0x2a0]
7101d8d70c  ldr x8,[x19, #0x2a8]
7101d8d710  cbz x8,0x7101d8d74c
7101d8d714  adrp x9,0x7106dd5000
7101d8d718  ldrb w9,[x9, #0x3a8]
7101d8d71c  cmp w9,#0x1
7101d8d720  b.ne 0x7101d8d74c
7101d8d724  adrp x10,0x7106dd5000
7101d8d728  ldr w9,[x19, #0x2b0]
7101d8d72c  ldr w10,[x10, #0x3ac]
7101d8d730  cmp w9,w10
7101d8d734  b.ne 0x7101d8d74c
7101d8d738  ldr wzr,[x8, #0x38]!
7101d8d73c  ldaxr w9,[x8]
7101d8d740  sub w9,w9,#0x1
7101d8d744  stlxr w10,w9,[x8]
7101d8d748  cbnz w10,0x7101d8d73c
7101d8d74c  mov x8,#0x650000000000
7101d8d750  movk x8,#0x87, LSL #48
7101d8d754  mov w20,wzr
7101d8d758  stp xzr,xzr,[x21, #0x10]
7101d8d75c  stp xzr,xzr,[x21]
7101d8d760  str x8,[x19, #0x2b0]
7101d8d764  adrp x8,0x7104f73000
7101d8d768  add x8,x8,#0xd30
7101d8d76c  str x8,[x19, #0x2a0]
7101d8d770  mov x8,#-0x1
7101d8d774  str xzr,[x19, #0x2a8]
7101d8d778  strb wzr,[x19, #0x2b8]
7101d8d77c  str x8,[x19, #0x2c0]
7101d8d780  str xzr,[x19, #0x2c8]
7101d8d784  str wzr,[x19, #0x2d4]
7101d8d788  b 0x7101d8dbbc
7101d8d78c  mov w8,#0x140
7101d8d790  madd x8,x22,x8,x24
7101d8d794  cmp x26,x22
7101d8d798  adrp x10,0x7105182000
7101d8d79c  add x10,x10,#0xb08
7101d8d7a0  csel x8,x8,x10,hi
7101d8d7a4  ldr s0,[x8, #0x74]
7101d8d7a8  ldr w1,[x8, #0x70]
7101d8d7ac  mov w0,w9
7101d8d7b0  mov w26,w9
7101d8d7b4  bl 0x71025c9ac0
7101d8d7b8  mov w24,w0
7101d8d7bc  and x21,x21,#0xffff
7101d8d7c0  mov x0,x21
7101d8d7c4  mov w1,w24
7101d8d7c8  bl 0x71025c9e50
7101d8d7cc  mov w22,w0
7101d8d7d0  add w1,w24,#0x1
7101d8d7d4  mov x0,x21
7101d8d7d8  bl 0x71025c9e50
7101d8d7dc  sub w8,w0,w22
7101d8d7e0  cmp w8,#0x2
7101d8d7e4  stp w0,w26,[sp, #0x8]
7101d8d7e8  b.cc 0x7101d8d828
7101d8d7ec  sub w9,w26,w22
7101d8d7f0  ucvtf s0,w9
7101d8d7f4  ucvtf s1,w8
7101d8d7f8  mov w8,w20
7101d8d7fc  fdiv s0,s0,s1
7101d8d800  fmov s8,0x3f800000
7101d8d804  fmin s9,s0,s8
7101d8d808  ucvtf s0,w20
7101d8d80c  fdiv s0,s0,s1
7101d8d810  fadd s0,s0,s9
7101d8d814  fcmp s0,s8
7101d8d818  b.ge 0x7101d8d820
7101d8d81c  mov v8.16B,v0.16B
7101d8d820  mov w26,w8
7101d8d824  b 0x7101d8d834
7101d8d828  fmov s9,wzr
7101d8d82c  mov v8.16B,v9.16B
7101d8d830  mov w26,w20
7101d8d834  adrp x1,0x7104452000
7101d8d838  add x1,x1,#0x6db
7101d8d83c  add x8,sp,#0x30
7101d8d840  add x0,sp,#0x40
7101d8d844  bl 0x7103776910
7101d8d848  adrp x1,0x7104308000
7101d8d84c  add x1,x1,#0x86c
7101d8d850  add x8,sp,#0x20
7101d8d854  add x0,sp,#0x40
7101d8d858  bl 0x7103776910
7101d8d85c  ldr x20,[sp, #0x38]
7101d8d860  ldr x8,[x20]
7101d8d864  cbz x8,0x7101d8d880
7101d8d868  orr w9,wzr,#0x3f800000
7101d8d86c  str w9,[x8, #0x4c]
7101d8d870  ldrb w9,[x8, #0x58]
7101d8d874  orr w9,w9,#0x10
7101d8d878  str s9,[x8, #0x48]
7101d8d87c  strb w9,[x8, #0x58]
7101d8d880  ldr x21,[sp, #0x28]
7101d8d884  ldr x8,[x21]
7101d8d888  cbz w26,0x7101d8d8c4
7101d8d88c  cbz x8,0x7101d8d8d4
7101d8d890  ldrb w9,[x8, #0x58]
7101d8d894  orr w9,w9,#0x1
7101d8d898  strb w9,[x8, #0x58]
7101d8d89c  ldr x8,[x21]
7101d8d8a0  cbz x8,0x7101d8d8d4
7101d8d8a4  orr w9,wzr,#0x3f800000
7101d8d8a8  str w9,[x8, #0x4c]
7101d8d8ac  ldrb w9,[x8, #0x58]
7101d8d8b0  orr w9,w9,#0x10
7101d8d8b4  str s8,[x8, #0x48]
7101d8d8b8  b 0x7101d8d8d0
7101d8d8bc  mov w20,wzr
7101d8d8c0  b 0x7101d8dbbc
7101d8d8c4  cbz x8,0x7101d8d8d4
7101d8d8c8  ldrb w9,[x8, #0x58]
7101d8d8cc  and w9,w9,#0xfe
7101d8d8d0  strb w9,[x8, #0x58]
7101d8d8d4  ldrsh x9,[x27, #0x8]
7101d8d8d8  ldr w27,[x19, #0x270]
7101d8d8dc  mov w0,w27
7101d8d8e0  ldr w22,[x19, #0x268]
7101d8d8e4  cmp w27,w22
7101d8d8e8  b.ne 0x7101d8d8f4
7101d8d8ec  ldr w8,[x19, #0x26c]
7101d8d8f0  add w0,w8,w27
7101d8d8f4  mov w8,#0x1
7101d8d8f8  cmn w9,#0x1
7101d8d8fc  b.eq 0x7101d8d988
7101d8d900  cmp w9,#0x7cf
7101d8d904  b.gt 0x7101d8d988
7101d8d908  ldr x8,[x28, #0x730]
7101d8d90c  ldr x8,[x8, #0x8]
7101d8d910  ldr x10,[x8, #0x1d8]
7101d8d914  add x8,x10,x9, LSL #0x1
7101d8d918  ldp x9,x10,[x10, #0x20]
7101d8d91c  ldrh w8,[x8, #0x60]
7101d8d920  sub x10,x10,x9
7101d8d924  asr x10,x10,#0x6
7101d8d928  mul x10,x10,x23
7101d8d92c  cmp w10,w8
7101d8d930  b.ls 0x7101d8d984
7101d8d934  mov w11,#0x140
7101d8d938  madd x9,x8,x11,x9
7101d8d93c  cmp x10,x8
7101d8d940  adrp x8,0x7105182000
7101d8d944  add x8,x8,#0xb08
7101d8d948  csel x8,x9,x8,hi
7101d8d94c  ldr s0,[x8, #0x74]
7101d8d950  ldr w1,[x8, #0x70]
7101d8d954  bl 0x71025c9ac0
7101d8d958  mov w8,w0
7101d8d95c  cmp w24,#0x63
7101d8d960  b.eq 0x7101d8d990
7101d8d964  cmp w27,w22
7101d8d968  b.ne 0x7101d8da00
7101d8d96c  sub w8,w8,w24
7101d8d970  add x23,x19,#0x274
7101d8d974  str w8,[x19, #0x274]
7101d8d978  mov x22,x20
7101d8d97c  cbnz w8,0x7101d8da10
7101d8d980  b 0x7101d8d998
7101d8d984  mov w8,#0x1
7101d8d988  cmp w24,#0x63
7101d8d98c  b.ne 0x7101d8d964
7101d8d990  mov x22,x20
7101d8d994  str wzr,[x19, #0x274]
7101d8d998  adrp x1,0x71042f8000
7101d8d99c  add x1,x1,#0x6cb
7101d8d9a0  add x8,sp,#0x10
7101d8d9a4  add x0,sp,#0x40
7101d8d9a8  bl 0x7103776910
7101d8d9ac  ldr x0,[sp, #0x18]
7101d8d9b0  ldr x8,[x0]
7101d8d9b4  cbz x8,0x7101d8d9c4
7101d8d9b8  ldrb w9,[x8, #0x58]
7101d8d9bc  and w9,w9,#0xfe
7101d8d9c0  strb w9,[x8, #0x58]
7101d8d9c4  stp x25,xzr,[sp, #0x10]
7101d8d9c8  cbz x0,0x7101d8d9d0
7101d8d9cc  bl 0x710392eb40
7101d8d9d0  adrp x1,0x71042d6000
7101d8d9d4  add x1,x1,#0x651
7101d8d9d8  add x8,sp,#0x10
7101d8d9dc  add x0,sp,#0x40
7101d8d9e0  bl 0x7103776910
7101d8d9e4  ldr x0,[sp, #0x18]
7101d8d9e8  ldr x8,[x0]
7101d8d9ec  cbz x8,0x7101d8dae4
7101d8d9f0  ldrb w9,[x8, #0x58]
7101d8d9f4  and w9,w9,#0xfe
7101d8d9f8  strb w9,[x8, #0x58]
7101d8d9fc  b 0x7101d8dae4
7101d8da00  ldr w8,[x19, #0x274]
7101d8da04  add x23,x19,#0x274
7101d8da08  mov x22,x20
7101d8da0c  cbz w8,0x7101d8d998
7101d8da10  adrp x1,0x71042f8000
7101d8da14  add x1,x1,#0x6cb
7101d8da18  add x8,sp,#0x10
7101d8da1c  add x0,sp,#0x40
7101d8da20  bl 0x7103776910
7101d8da24  ldr x0,[sp, #0x18]
7101d8da28  ldr x8,[x0]
7101d8da2c  cbz x8,0x7101d8da3c
7101d8da30  ldrb w9,[x8, #0x58]
7101d8da34  orr w9,w9,#0x1
7101d8da38  strb w9,[x8, #0x58]
7101d8da3c  stp x25,xzr,[sp, #0x10]
7101d8da40  cbz x0,0x7101d8da48
7101d8da44  bl 0x710392eb40
7101d8da48  adrp x1,0x71042d6000
7101d8da4c  add x1,x1,#0x651
7101d8da50  add x8,sp,#0x10
7101d8da54  add x0,sp,#0x40
7101d8da58  bl 0x7103776910
7101d8da5c  ldr x0,[sp, #0x18]
7101d8da60  ldr x8,[x0]
7101d8da64  cbz x8,0x7101d8da74
7101d8da68  ldrb w9,[x8, #0x58]
7101d8da6c  orr w9,w9,#0x1
7101d8da70  strb w9,[x8, #0x58]
7101d8da74  stp x25,xzr,[sp, #0x10]
7101d8da78  cbz x0,0x7101d8da80
7101d8da7c  bl 0x710392eb40
7101d8da80  adrp x1,0x71042f8000
7101d8da84  add x1,x1,#0x6cb
7101d8da88  add x8,sp,#0x10
7101d8da8c  add x0,sp,#0x40
7101d8da90  bl 0x7103776910
7101d8da94  adrp x1,0x71042d6000
7101d8da98  add x1,x1,#0x660
7101d8da9c  add x0,sp,#0x10
7101d8daa0  bl 0x710377a120
7101d8daa4  ldr x0,[sp, #0x18]
7101d8daa8  stp x25,xzr,[sp, #0x10]
7101d8daac  cbz x0,0x7101d8dab4
7101d8dab0  bl 0x710392eb40
7101d8dab4  adrp x1,0x71042d6000
7101d8dab8  add x1,x1,#0x651
7101d8dabc  add x8,sp,#0x10
7101d8dac0  add x0,sp,#0x40
7101d8dac4  bl 0x7103776910
7101d8dac8  ldr w3,[x23]
7101d8dacc  adrp x1,0x710435b000
7101d8dad0  add x1,x1,#0xb61
7101d8dad4  add x0,sp,#0x10
7101d8dad8  mov w2,#0x1
7101d8dadc  bl 0x710377a280
7101d8dae0  ldr x0,[sp, #0x18]
7101d8dae4  str x25,[sp, #0x10]
7101d8dae8  str xzr,[sp, #0x18]
7101d8daec  cbz x0,0x7101d8daf4
7101d8daf0  bl 0x710392eb40
7101d8daf4  stp x25,xzr,[sp, #0x20]
7101d8daf8  cbz x21,0x7101d8db04
7101d8dafc  mov x0,x21
7101d8db00  bl 0x710392eb40
7101d8db04  ldp w9,w8,[sp, #0x8]
7101d8db08  sub w20,w9,w8
7101d8db0c  stp x25,xzr,[sp, #0x30]
7101d8db10  cbz x22,0x7101d8db1c
7101d8db14  mov x0,x22
7101d8db18  bl 0x710392eb40
7101d8db1c  cbz w26,0x7101d8dbbc
7101d8db20  ldr x8,[x19, #0x2e0]
7101d8db24  ldr x9,[x19, #0x2d8]
7101d8db28  cmp x8,x9
7101d8db2c  b.ne 0x7101d8dbf8
7101d8db30  ldr w8,[x19, #0x270]
7101d8db34  ldr w9,[x19, #0x268]
7101d8db38  cmp w8,w9
7101d8db3c  b.ne 0x7101d8dbf8
7101d8db40  ldr w8,[x19, #0x290]
7101d8db44  ldr w9,[x19, #0x288]
7101d8db48  cmp w8,w9
7101d8db4c  b.ne 0x7101d8dbf8
7101d8db50  adrp x1,0x7104270000
7101d8db54  add x1,x1,#0x267
7101d8db58  add x8,sp,#0x30
7101d8db5c  add x0,sp,#0x40
7101d8db60  bl 0x7103776910
7101d8db64  ldr x0,[sp, #0x38]
7101d8db68  ldr x8,[x0]
7101d8db6c  cbz x8,0x7101d8db7c
7101d8db70  ldrb w9,[x8, #0x58]
7101d8db74  orr w9,w9,#0x1
7101d8db78  strb w9,[x8, #0x58]
7101d8db7c  stp x25,xzr,[sp, #0x30]
7101d8db80  cbz x0,0x7101d8db88
7101d8db84  bl 0x710392eb40
7101d8db88  adrp x1,0x7104270000
7101d8db8c  add x1,x1,#0x267
7101d8db90  add x8,sp,#0x30
7101d8db94  add x0,sp,#0x40
7101d8db98  bl 0x7103776910
7101d8db9c  ldr w3,[x19, #0x26c]
7101d8dba0  adrp x1,0x710435b000
7101d8dba4  add x1,x1,#0xb61
7101d8dba8  add x0,sp,#0x30
7101d8dbac  mov w2,#0x1
7101d8dbb0  bl 0x710377a280
7101d8dbb4  ldr x0,[sp, #0x38]
7101d8dbb8  b 0x7101d8dbe8
7101d8dbbc  adrp x1,0x7104270000
7101d8dbc0  add x1,x1,#0x267
7101d8dbc4  add x8,sp,#0x30
7101d8dbc8  add x0,sp,#0x40
7101d8dbcc  bl 0x7103776910
7101d8dbd0  ldr x0,[sp, #0x38]
7101d8dbd4  ldr x8,[x0]
7101d8dbd8  cbz x8,0x7101d8dbe8
7101d8dbdc  ldrb w9,[x8, #0x58]
7101d8dbe0  and w9,w9,#0xfe
7101d8dbe4  strb w9,[x8, #0x58]
7101d8dbe8  str x25,[sp, #0x30]
7101d8dbec  str xzr,[sp, #0x38]
7101d8dbf0  cbz x0,0x7101d8dbf8
7101d8dbf4  bl 0x710392eb40
7101d8dbf8  adrp x1,0x71043e0000
7101d8dbfc  add x1,x1,#0x503
7101d8dc00  add x8,sp,#0x30
7101d8dc04  add x0,sp,#0x40
7101d8dc08  bl 0x7103776910
7101d8dc0c  adrp x1,0x710435b000
7101d8dc10  add x1,x1,#0xb7d
7101d8dc14  add x0,sp,#0x30
7101d8dc18  mov w2,#0x1
7101d8dc1c  mov w3,w20
7101d8dc20  bl 0x710377a280
7101d8dc24  ldr x0,[sp, #0x38]
7101d8dc28  stp x25,xzr,[sp, #0x30]
7101d8dc2c  cbz x0,0x7101d8dc34
7101d8dc30  bl 0x710392eb40
7101d8dc34  ldr x19,[sp, #0x48]
7101d8dc38  adrp x8,0x710523d000
7101d8dc3c  add x8,x8,#0x988
7101d8dc40  stp x8,xzr,[sp, #0x40]
7101d8dc44  cbz x19,0x7101d8dc60
7101d8dc48  ldr x0,[x19, #0x18]
7101d8dc4c  stp x25,xzr,[x19, #0x10]
7101d8dc50  cbz x0,0x7101d8dc58
7101d8dc54  bl 0x710392eb40
7101d8dc58  mov x0,x19
7101d8dc5c  bl 0x710392eb40
7101d8dc60  ldp d9,d8,[sp, #0x50]
7101d8dc64  ldp x29,x30,[sp, #0xb0]
7101d8dc68  ldp x20,x19,[sp, #0xa0]
7101d8dc6c  ldp x22,x21,[sp, #0x90]
7101d8dc70  ldp x24,x23,[sp, #0x80]
7101d8dc74  ldp x26,x25,[sp, #0x70]
7101d8dc78  ldp x28,x27,[sp, #0x60]
7101d8dc7c  add sp,sp,#0xc0
7101d8dc80  ret
