// addr:      7101e4d620
// offset:    0x1e4d620
// name:      FUN_7101e4d620
// mangled:   
// size:      2608

7101e4d620  sub sp,sp,#0x120
7101e4d624  stp x28,x27,[sp, #0xc0]
7101e4d628  stp x26,x25,[sp, #0xd0]
7101e4d62c  stp x24,x23,[sp, #0xe0]
7101e4d630  stp x22,x21,[sp, #0xf0]
7101e4d634  stp x20,x19,[sp, #0x100]
7101e4d638  stp x29,x30,[sp, #0x110]
7101e4d63c  add x29,sp,#0x110
7101e4d640  mov x21,x1
7101e4d644  mvn w8,w21
7101e4d648  tst w8,#0xffff
7101e4d64c  b.eq 0x7101e4df58
7101e4d650  adrp x8,0x710532f000
7101e4d654  ldr x8,[x8, #0x730]
7101e4d658  ldr x27,[x8, #0x8]
7101e4d65c  ldr x8,[x27, #0x1d8]
7101e4d660  lsl x9,x21,#0x30
7101e4d664  add x9,x8,x9, ASR #0x2f
7101e4d668  ldp x10,x8,[x8, #0x20]
7101e4d66c  ldrh w9,[x9, #0x60]
7101e4d670  sub x8,x8,x10
7101e4d674  orr x25,xzr,#-0x3333333333333334
7101e4d678  movk x25,#0xcccd
7101e4d67c  asr x8,x8,#0x6
7101e4d680  mul x8,x8,x25
7101e4d684  mov w11,#0x140
7101e4d688  madd x10,x9,x11,x10
7101e4d68c  adrp x11,0x7105182000
7101e4d690  add x11,x11,#0xb08
7101e4d694  cmp x8,x9
7101e4d698  csel x26,x10,x11,hi
7101e4d69c  tst x2,#0xffffffffff
7101e4d6a0  ldr x8,[x26, #0x8]
7101e4d6a4  csel x1,x8,x2,eq
7101e4d6a8  mov w20,w4
7101e4d6ac  mov x19,x0
7101e4d6b0  tst x1,#0xffffffffff
7101e4d6b4  b.eq 0x7101e4dbdc
7101e4d6b8  add x0,sp,#0x18
7101e4d6bc  mov x23,x3
7101e4d6c0  bl 0x7102499b60
7101e4d6c4  ldr x9,[x19, #0x70]
7101e4d6c8  ldr x8,[sp, #0x18]
7101e4d6cc  ldr x9,[x9, #0x8]
7101e4d6d0  cbz x8,0x7101e4d728
7101e4d6d4  cbz x9,0x7101e4d6ec
7101e4d6d8  ldr x9,[x9, #0x18]
7101e4d6dc  cbz x9,0x7101e4d6ec
7101e4d6e0  ldrb w10,[x9, #0x58]
7101e4d6e4  orr w10,w10,#0x1
7101e4d6e8  strb w10,[x9, #0x58]
7101e4d6ec  ldr x9,[x19, #0x60]
7101e4d6f0  ldr x9,[x9, #0x8]
7101e4d6f4  add x28,x19,#0x68
7101e4d6f8  cbz x9,0x7101e4d710
7101e4d6fc  ldr x9,[x9, #0x18]
7101e4d700  cbz x9,0x7101e4d710
7101e4d704  ldrb w10,[x9, #0x58]
7101e4d708  and w10,w10,#0xfe
7101e4d70c  strb w10,[x9, #0x58]
7101e4d710  ldrb w9,[x8, #0x8]
7101e4d714  cbz w9,0x7101e4d880
7101e4d718  ldrb w9,[x8, #0xec]
7101e4d71c  cbz w9,0x7101e4d764
7101e4d720  ldp x22,x9,[x8, #0x70]
7101e4d724  b 0x7101e4d770
7101e4d728  cbz x9,0x7101e4d740
7101e4d72c  ldr x8,[x9, #0x18]
7101e4d730  cbz x8,0x7101e4d740
7101e4d734  ldrb w9,[x8, #0x58]
7101e4d738  and w9,w9,#0xfe
7101e4d73c  strb w9,[x8, #0x58]
7101e4d740  ldr x8,[x19, #0x60]
7101e4d744  ldr x8,[x8, #0x8]
7101e4d748  cbz x8,0x7101e4dbc4
7101e4d74c  ldr x8,[x8, #0x18]
7101e4d750  cbz x8,0x7101e4dbc4
7101e4d754  ldrb w9,[x8, #0x58]
7101e4d758  and w9,w9,#0xfe
7101e4d75c  strb w9,[x8, #0x58]
7101e4d760  b 0x7101e4dbc4
7101e4d764  ldp x22,x9,[x8, #0x70]
7101e4d768  cmp x9,x22
7101e4d76c  b.eq 0x7101e4d880
7101e4d770  sub x9,x9,x22
7101e4d774  lsr x10,x9,#0x3
7101e4d778  cmp w10,#0x1
7101e4d77c  b.lt 0x7101e4d880
7101e4d780  mov x24,xzr
7101e4d784  sbfx x10,x9,#0x3,#0x20
7101e4d788  ldr x11,[x22, x24, LSL #0x3]
7101e4d78c  ldrb w11,[x11, #0x10]
7101e4d790  cmp w11,#0x1
7101e4d794  b.eq 0x7101e4d7a8
7101e4d798  add x24,x24,#0x1
7101e4d79c  cmp x24,x10
7101e4d7a0  b.lt 0x7101e4d788
7101e4d7a4  b 0x7101e4d880
7101e4d7a8  tbnz w24,#0x1f,0x7101e4d880
7101e4d7ac  asr x9,x9,#0x3
7101e4d7b0  cmp x9,x24
7101e4d7b4  str x28,[sp, #0x10]
7101e4d7b8  b.ls 0x7101e4e048
7101e4d7bc  lsl x28,x24,#0x3
7101e4d7c0  ldr x8,[x22, x28, LSL #0x0]
7101e4d7c4  ldr x0,[x19, #0x70]
7101e4d7c8  adrp x1,0x710425f000
7101e4d7cc  add x1,x1,#0xa89
7101e4d7d0  ldr x25,[x8, #0x18]
7101e4d7d4  fmov s0,0x3f800000
7101e4d7d8  bl 0x7103778300
7101e4d7dc  ldr x8,[x22, x28, LSL #0x0]
7101e4d7e0  ldrb w1,[x8, #0x20]
7101e4d7e4  add x9,x19,#0x20
7101e4d7e8  mov w2,#0x2
7101e4d7ec  mov x0,x25
7101e4d7f0  str x25,[sp, #0x8]
7101e4d7f4  mov x25,x9
7101e4d7f8  bl 0x7103238a70
7101e4d7fc  tst x0,#0xffffffffff
7101e4d800  str x0,[sp, #0x70]
7101e4d804  b.eq 0x7101e4d81c
7101e4d808  ldr x0,[x25]
7101e4d80c  ldrsw x2,[x0, #0x70]
7101e4d810  ldr w3,[x0, #0x68]
7101e4d814  add x1,sp,#0x70
7101e4d818  bl 0x710323c4e0
7101e4d81c  ldr x28,[sp, #0x10]
7101e4d820  adrp x1,0x7104401000
7101e4d824  add x1,x1,#0xd32
7101e4d828  add x8,sp,#0x70
7101e4d82c  mov x0,x28
7101e4d830  bl 0x7103776910
7101e4d834  ldr x8,[x22, x24, LSL #0x3]
7101e4d838  ldrb w2,[x8, #0x20]
7101e4d83c  ldr x1,[sp, #0x8]
7101e4d840  mov w3,#0x2
7101e4d844  mov x0,x25
7101e4d848  bl 0x710323f330
7101e4d84c  ldr x24,[sp, #0x78]
7101e4d850  mov x1,x0
7101e4d854  mov x0,x24
7101e4d858  bl 0x7103778b80
7101e4d85c  adrp x8,0x710523d000
7101e4d860  add x8,x8,#0x9a8
7101e4d864  stp x8,xzr,[sp, #0x70]
7101e4d868  cbz x24,0x7101e4d874
7101e4d86c  mov x0,x24
7101e4d870  bl 0x710392eb40
7101e4d874  orr x25,xzr,#-0x3333333333333334
7101e4d878  movk x25,#0xcccd
7101e4d87c  b 0x7101e4d894
7101e4d880  ldr x0,[x19, #0x70]
7101e4d884  fmov s0,0x3f800000
7101e4d888  adrp x1,0x710432a000
7101e4d88c  add x1,x1,#0x66a
7101e4d890  bl 0x7103778300
7101e4d894  ldr x9,[sp, #0x18]
7101e4d898  ldrb w8,[x9, #0x8]
7101e4d89c  cbz w8,0x7101e4d8e8
7101e4d8a0  ldrb w8,[x9, #0xec]
7101e4d8a4  cbz w8,0x7101e4d8b0
7101e4d8a8  ldp x8,x9,[x9, #0x70]
7101e4d8ac  b 0x7101e4d8bc
7101e4d8b0  ldp x8,x9,[x9, #0x70]
7101e4d8b4  cmp x9,x8
7101e4d8b8  b.eq 0x7101e4d8e8
7101e4d8bc  sub x9,x9,x8
7101e4d8c0  lsr x9,x9,#0x3
7101e4d8c4  cbz w9,0x7101e4d8e8
7101e4d8c8  mov w10,wzr
7101e4d8cc  ldr x11,[x8, w10, UXTW #0x3]
7101e4d8d0  ldrb w12,[x11, #0x10]
7101e4d8d4  cmp w12,#0x1
7101e4d8d8  b.eq 0x7101e4dfd4
7101e4d8dc  add w10,w10,#0x1
7101e4d8e0  cmp w10,w9
7101e4d8e4  b.cc 0x7101e4d8cc
7101e4d8e8  mov w22,wzr
7101e4d8ec  ldr x0,[x19, #0x70]
7101e4d8f0  adrp x1,0x7104281000
7101e4d8f4  add x1,x1,#0x9c
7101e4d8f8  fmov s0,0x3f800000
7101e4d8fc  bl 0x7103778300
7101e4d900  mvn w8,w23
7101e4d904  mov w24,wzr
7101e4d908  add x12,x19,#0x58
7101e4d90c  tst w8,#0xffff
7101e4d910  b.eq 0x7101e4d994
7101e4d914  sxth w8,w23
7101e4d918  cmp w8,#0x7cf
7101e4d91c  b.gt 0x7101e4d994
7101e4d920  ldr x10,[x27, #0x1d8]
7101e4d924  lsl x8,x23,#0x30
7101e4d928  add x8,x10,x8, ASR #0x2f
7101e4d92c  ldp x9,x10,[x10, #0x20]
7101e4d930  ldrh w8,[x8, #0x60]
7101e4d934  sub x10,x10,x9
7101e4d938  asr x10,x10,#0x6
7101e4d93c  mul x10,x10,x25
7101e4d940  cmp w10,w8
7101e4d944  b.ls 0x7101e4d990
7101e4d948  mov w11,#0x140
7101e4d94c  madd x9,x8,x11,x9
7101e4d950  cmp x10,x8
7101e4d954  adrp x8,0x7105182000
7101e4d958  add x8,x8,#0xb08
7101e4d95c  csel x8,x9,x8,hi
7101e4d960  ldrb w24,[x8, #0x6c]
7101e4d964  cmp w24,#0x3
7101e4d968  b.eq 0x7101e4e014
7101e4d96c  cmp w24,#0x2
7101e4d970  b.eq 0x7101e4e000
7101e4d974  cmp w24,#0x1
7101e4d978  b.ne 0x7101e4d994
7101e4d97c  ldr x0,[x19, #0x60]
7101e4d980  mov x23,x12
7101e4d984  adrp x1,0x710437c000
7101e4d988  add x1,x1,#0xb20
7101e4d98c  b 0x7101e4d9a4
7101e4d990  mov w24,wzr
7101e4d994  ldr x0,[x19, #0x60]
7101e4d998  mov x23,x12
7101e4d99c  adrp x1,0x7104281000
7101e4d9a0  add x1,x1,#0x9c
7101e4d9a4  fmov s0,0x3f800000
7101e4d9a8  bl 0x7103778300
7101e4d9ac  cmp w22,#0x3
7101e4d9b0  b.eq 0x7101e4da8c
7101e4d9b4  cmp w22,#0x2
7101e4d9b8  b.eq 0x7101e4d9d8
7101e4d9bc  cmp w22,#0x1
7101e4d9c0  b.ne 0x7101e4db4c
7101e4d9c4  cmp w24,#0x2
7101e4d9c8  cset w8,eq
7101e4d9cc  cmp w24,#0x3
7101e4d9d0  b.eq 0x7101e4d9e8
7101e4d9d4  b 0x7101e4da9c
7101e4d9d8  cmp w24,#0x3
7101e4d9dc  cset w8,eq
7101e4d9e0  cmp w24,#0x1
7101e4d9e4  b.ne 0x7101e4da9c
7101e4d9e8  adrp x1,0x71043cf000
7101e4d9ec  add x1,x1,#0xa5f
7101e4d9f0  add x8,sp,#0x70
7101e4d9f4  mov x0,x28
7101e4d9f8  bl 0x7103776910
7101e4d9fc  ldr x0,[sp, #0x78]
7101e4da00  ldr x8,[x0]
7101e4da04  cbz x8,0x7101e4da14
7101e4da08  ldrb w9,[x8, #0x58]
7101e4da0c  orr w9,w9,#0x1
7101e4da10  strb w9,[x8, #0x58]
7101e4da14  adrp x22,0x710523d000
7101e4da18  add x22,x22,#0x9a8
7101e4da1c  stp x22,xzr,[sp, #0x70]
7101e4da20  cbz x0,0x7101e4da28
7101e4da24  bl 0x710392eb40
7101e4da28  ldr x0,[x19, #0x70]
7101e4da2c  fmov s0,0x3f800000
7101e4da30  adrp x1,0x7104308000
7101e4da34  add x1,x1,#0xa6f
7101e4da38  bl 0x7103778300
7101e4da3c  mov w8,#0x1
7101e4da40  strb w8,[x19, #0x249]
7101e4da44  adrp x1,0x71043cf000
7101e4da48  add x1,x1,#0xa5f
7101e4da4c  add x8,sp,#0x70
7101e4da50  mov x0,x23
7101e4da54  bl 0x7103776910
7101e4da58  ldr x0,[sp, #0x78]
7101e4da5c  ldr x8,[x0]
7101e4da60  cbz x8,0x7101e4da70
7101e4da64  ldrb w9,[x8, #0x58]
7101e4da68  orr w9,w9,#0x1
7101e4da6c  strb w9,[x8, #0x58]
7101e4da70  stp x22,xzr,[sp, #0x70]
7101e4da74  cbz x0,0x7101e4da7c
7101e4da78  bl 0x710392eb40
7101e4da7c  ldr x0,[x19, #0x60]
7101e4da80  adrp x1,0x710432a000
7101e4da84  add x1,x1,#0x67c
7101e4da88  b 0x7101e4db40
7101e4da8c  cmp w24,#0x1
7101e4da90  cset w8,eq
7101e4da94  cmp w24,#0x2
7101e4da98  b.eq 0x7101e4d9e8
7101e4da9c  cbz w8,0x7101e4db4c
7101e4daa0  adrp x1,0x71043cf000
7101e4daa4  add x1,x1,#0xa5f
7101e4daa8  add x8,sp,#0x70
7101e4daac  mov x0,x28
7101e4dab0  bl 0x7103776910
7101e4dab4  ldr x0,[sp, #0x78]
7101e4dab8  ldr x8,[x0]
7101e4dabc  cbz x8,0x7101e4dacc
7101e4dac0  ldrb w9,[x8, #0x58]
7101e4dac4  orr w9,w9,#0x1
7101e4dac8  strb w9,[x8, #0x58]
7101e4dacc  adrp x22,0x710523d000
7101e4dad0  add x22,x22,#0x9a8
7101e4dad4  stp x22,xzr,[sp, #0x70]
7101e4dad8  cbz x0,0x7101e4dae0
7101e4dadc  bl 0x710392eb40
7101e4dae0  ldr x0,[x19, #0x70]
7101e4dae4  fmov s0,0x3f800000
7101e4dae8  adrp x1,0x710425f000
7101e4daec  add x1,x1,#0xa9b
7101e4daf0  bl 0x7103778300
7101e4daf4  mov w8,#0x1
7101e4daf8  strb w8,[x19, #0x248]
7101e4dafc  adrp x1,0x71043cf000
7101e4db00  add x1,x1,#0xa5f
7101e4db04  add x8,sp,#0x70
7101e4db08  mov x0,x23
7101e4db0c  bl 0x7103776910
7101e4db10  ldr x0,[sp, #0x78]
7101e4db14  ldr x8,[x0]
7101e4db18  cbz x8,0x7101e4db28
7101e4db1c  ldrb w9,[x8, #0x58]
7101e4db20  orr w9,w9,#0x1
7101e4db24  strb w9,[x8, #0x58]
7101e4db28  stp x22,xzr,[sp, #0x70]
7101e4db2c  cbz x0,0x7101e4db34
7101e4db30  bl 0x710392eb40
7101e4db34  ldr x0,[x19, #0x60]
7101e4db38  adrp x1,0x710433a000
7101e4db3c  add x1,x1,#0x71a
7101e4db40  fmov s0,0x3f800000
7101e4db44  bl 0x7103778300
7101e4db48  b 0x7101e4dbc4
7101e4db4c  adrp x1,0x71043cf000
7101e4db50  add x1,x1,#0xa5f
7101e4db54  add x8,sp,#0x70
7101e4db58  mov x0,x28
7101e4db5c  bl 0x7103776910
7101e4db60  ldr x0,[sp, #0x78]
7101e4db64  ldr x8,[x0]
7101e4db68  cbz x8,0x7101e4db78
7101e4db6c  ldrb w9,[x8, #0x58]
7101e4db70  and w9,w9,#0xfe
7101e4db74  strb w9,[x8, #0x58]
7101e4db78  adrp x22,0x710523d000
7101e4db7c  add x22,x22,#0x9a8
7101e4db80  stp x22,xzr,[sp, #0x70]
7101e4db84  cbz x0,0x7101e4db8c
7101e4db88  bl 0x710392eb40
7101e4db8c  adrp x1,0x71043cf000
7101e4db90  add x1,x1,#0xa5f
7101e4db94  add x8,sp,#0x70
7101e4db98  mov x0,x23
7101e4db9c  bl 0x7103776910
7101e4dba0  ldr x0,[sp, #0x78]
7101e4dba4  ldr x8,[x0]
7101e4dba8  cbz x8,0x7101e4dbb8
7101e4dbac  ldrb w9,[x8, #0x58]
7101e4dbb0  and w9,w9,#0xfe
7101e4dbb4  strb w9,[x8, #0x58]
7101e4dbb8  stp x22,xzr,[sp, #0x70]
7101e4dbbc  cbz x0,0x7101e4dbc4
7101e4dbc0  bl 0x710392eb40
7101e4dbc4  ldr x0,[sp, #0x18]
7101e4dbc8  str xzr,[sp, #0x18]
7101e4dbcc  cbz x0,0x7101e4dbdc
7101e4dbd0  ldr x8,[x0]
7101e4dbd4  ldr x8,[x8, #0x8]
7101e4dbd8  blr x8
7101e4dbdc  ldrb w8,[x26, #0x68]
7101e4dbe0  strh w21,[x19, #0x218]
7101e4dbe4  add x21,x19,#0x48
7101e4dbe8  mov x0,x21
7101e4dbec  str x21,[x19, #0x40]
7101e4dbf0  cmp w8,#0x4
7101e4dbf4  csinc w8,wzr,w8,cs
7101e4dbf8  tst w20,#0x1
7101e4dbfc  csel w22,wzr,w8,ne
7101e4dc00  adrp x1,0x710436a000
7101e4dc04  add x1,x1,#0xc4b
7101e4dc08  add x8,sp,#0x70
7101e4dc0c  add x23,sp,#0x70
7101e4dc10  bl 0x7103776910
7101e4dc14  add x8,x19,#0xc8
7101e4dc18  cmp x8,x23
7101e4dc1c  b.eq 0x7101e4dc38
7101e4dc20  ldr x8,[sp, #0x78]
7101e4dc24  str xzr,[sp, #0x78]
7101e4dc28  ldr x0,[x19, #0xd0]
7101e4dc2c  str x8,[x19, #0xd0]
7101e4dc30  cbz x0,0x7101e4dc38
7101e4dc34  bl 0x710392eb40
7101e4dc38  ldr x0,[sp, #0x78]
7101e4dc3c  adrp x23,0x710523d000
7101e4dc40  add x23,x23,#0x9a8
7101e4dc44  stp x23,xzr,[sp, #0x70]
7101e4dc48  cbz x0,0x7101e4dc50
7101e4dc4c  bl 0x710392eb40
7101e4dc50  adrp x1,0x7104328000
7101e4dc54  add x1,x1,#0x77e
7101e4dc58  add x8,sp,#0x70
7101e4dc5c  mov x0,x21
7101e4dc60  add x24,sp,#0x70
7101e4dc64  bl 0x7103776910
7101e4dc68  add x8,x19,#0xd8
7101e4dc6c  cmp x8,x24
7101e4dc70  b.eq 0x7101e4dc8c
7101e4dc74  ldr x8,[sp, #0x78]
7101e4dc78  str xzr,[sp, #0x78]
7101e4dc7c  ldr x0,[x19, #0xe0]
7101e4dc80  str x8,[x19, #0xe0]
7101e4dc84  cbz x0,0x7101e4dc8c
7101e4dc88  bl 0x710392eb40
7101e4dc8c  ldr x0,[sp, #0x78]
7101e4dc90  stp x23,xzr,[sp, #0x70]
7101e4dc94  cbz x0,0x7101e4dc9c
7101e4dc98  bl 0x710392eb40
7101e4dc9c  adrp x1,0x71043cd000
7101e4dca0  add x1,x1,#0xb92
7101e4dca4  add x8,sp,#0x70
7101e4dca8  mov x0,x21
7101e4dcac  add x24,sp,#0x70
7101e4dcb0  bl 0x7103776910
7101e4dcb4  add x8,x19,#0xe8
7101e4dcb8  cmp x8,x24
7101e4dcbc  b.eq 0x7101e4dcd8
7101e4dcc0  ldr x8,[sp, #0x78]
7101e4dcc4  str xzr,[sp, #0x78]
7101e4dcc8  ldr x0,[x19, #0xf0]
7101e4dccc  str x8,[x19, #0xf0]
7101e4dcd0  cbz x0,0x7101e4dcd8
7101e4dcd4  bl 0x710392eb40
7101e4dcd8  ldr x0,[sp, #0x78]
7101e4dcdc  stp x23,xzr,[sp, #0x70]
7101e4dce0  cbz x0,0x7101e4dce8
7101e4dce4  bl 0x710392eb40
7101e4dce8  ldrh w2,[x19, #0x218]
7101e4dcec  orr w8,wzr,#0xffff
7101e4dcf0  cmp x2,x8
7101e4dcf4  strh wzr,[x19, #0x244]
7101e4dcf8  b.eq 0x7101e4dd50
7101e4dcfc  adrp x8,0x7105329000
7101e4dd00  ldr x8,[x8, #0xf98]
7101e4dd04  ldr x8,[x8]
7101e4dd08  ldr x0,[x8, #0x20]
7101e4dd0c  mov w3,#0x1
7101e4dd10  mov w1,wzr
7101e4dd14  mov w24,#0x1
7101e4dd18  bl 0x710259c150
7101e4dd1c  ldr x0,[x19, #0xd0]
7101e4dd20  mov w1,#0x1
7101e4dd24  strb w24,[x19, #0x244]
7101e4dd28  bl 0x71037790a0
7101e4dd2c  ldr x0,[x19, #0xe0]
7101e4dd30  mov w1,#0x1
7101e4dd34  bl 0x71037790a0
7101e4dd38  ldr x0,[x19, #0xf0]
7101e4dd3c  mov w1,#0x1
7101e4dd40  bl 0x71037790a0
7101e4dd44  mov x8,#0xff0000000000
7101e4dd48  movk x8,#0xc1ff, LSL #48
7101e4dd4c  str x8,[x19, #0x220]
7101e4dd50  ldr x8,[x19, #0x40]
7101e4dd54  ldr x8,[x8, #0x8]
7101e4dd58  ldr x8,[x8, #0x8]
7101e4dd5c  cbz x8,0x7101e4dd74
7101e4dd60  ldr x8,[x8, #0x18]
7101e4dd64  cbz x8,0x7101e4dd74
7101e4dd68  ldrb w9,[x8, #0x58]
7101e4dd6c  orr w9,w9,#0x1
7101e4dd70  strb w9,[x8, #0x58]
7101e4dd74  ldr x0,[x19, #0x50]
7101e4dd78  fmov s0,0x3f800000
7101e4dd7c  adrp x1,0x710436c000
7101e4dd80  add x1,x1,#0x9a0
7101e4dd84  bl 0x7103778300
7101e4dd88  ldr x0,[x19, #0x50]
7101e4dd8c  tbz w20,#0x0,0x7101e4dd9c
7101e4dd90  adrp x1,0x71042a3000
7101e4dd94  add x1,x1,#0x605
7101e4dd98  b 0x7101e4dda4
7101e4dd9c  adrp x1,0x7104443000
7101e4dda0  add x1,x1,#0xd62
7101e4dda4  fmov s0,0x3f800000
7101e4dda8  bl 0x7103778300
7101e4ddac  ldr x0,[x19, #0x50]
7101e4ddb0  fmov s0,0x3f800000
7101e4ddb4  adrp x1,0x710436c000
7101e4ddb8  add x1,x1,#0x9ac
7101e4ddbc  bl 0x7103778300
7101e4ddc0  adrp x1,0x710424f000
7101e4ddc4  add x1,x1,#0xb23
7101e4ddc8  mov x0,x21
7101e4ddcc  mov w2,w22
7101e4ddd0  bl 0x7103778430
7101e4ddd4  adrp x1,0x71043ff000
7101e4ddd8  add x1,x1,#0xc53
7101e4dddc  add x8,sp,#0x70
7101e4dde0  mov x0,x21
7101e4dde4  bl 0x7103776910
7101e4dde8  ldr x0,[sp, #0x78]
7101e4ddec  ldr x8,[x0]
7101e4ddf0  cbz x8,0x7101e4de0c
7101e4ddf4  ldrb w10,[x8, #0x58]
7101e4ddf8  cmp w22,#0x0
7101e4ddfc  cset w9,ne
7101e4de00  and w10,w10,#0xfe
7101e4de04  orr w9,w10,w9
7101e4de08  strb w9,[x8, #0x58]
7101e4de0c  stp x23,xzr,[sp, #0x70]
7101e4de10  cbz x0,0x7101e4de18
7101e4de14  bl 0x710392eb40
7101e4de18  ldr x0,[x19, #0x50]
7101e4de1c  fmov s0,0x3f800000
7101e4de20  adrp x1,0x71042a3000
7101e4de24  add x1,x1,#0x60f
7101e4de28  bl 0x7103778300
7101e4de2c  adrp x1,0x71043ad000
7101e4de30  add x1,x1,#0xd85
7101e4de34  add x8,sp,#0x70
7101e4de38  mov x0,x21
7101e4de3c  bl 0x7103776910
7101e4de40  ldr x0,[sp, #0x78]
7101e4de44  ldr x8,[x0]
7101e4de48  cbz x8,0x7101e4de58
7101e4de4c  ldrb w9,[x8, #0x58]
7101e4de50  orr w9,w9,#0x1
7101e4de54  strb w9,[x8, #0x58]
7101e4de58  stp x23,xzr,[sp, #0x70]
7101e4de5c  cbz x0,0x7101e4de64
7101e4de60  bl 0x710392eb40
7101e4de64  adrp x1,0x710433a000
7101e4de68  add x1,x1,#0x72c
7101e4de6c  add x8,sp,#0x60
7101e4de70  mov x0,x21
7101e4de74  bl 0x7103776910
7101e4de78  ldr x20,[x27, #0x1d8]
7101e4de7c  ldrh w1,[x19, #0x218]
7101e4de80  mov x0,x20
7101e4de84  bl 0x71032a9470
7101e4de88  mov x2,x0
7101e4de8c  add x0,sp,#0x70
7101e4de90  mov x1,x20
7101e4de94  add x22,sp,#0x70
7101e4de98  bl 0x71032a9540
7101e4de9c  add x20,x22,#0x8
7101e4dea0  adrp x0,0x7104464000
7101e4dea4  add x0,x0,#0x1d4
7101e4dea8  add x8,sp,#0x18
7101e4deac  mov x1,x20
7101e4deb0  add x22,sp,#0x18
7101e4deb4  bl 0x71003a4ca0
7101e4deb8  add x22,x22,#0x8
7101e4debc  add x0,sp,#0x60
7101e4dec0  mov x1,x22
7101e4dec4  bl 0x710377a120
7101e4dec8  ldr x0,[sp, #0x68]
7101e4decc  stp x23,xzr,[sp, #0x60]
7101e4ded0  cbz x0,0x7101e4ded8
7101e4ded4  bl 0x710392eb40
7101e4ded8  adrp x1,0x7104319000
7101e4dedc  add x1,x1,#0x3bf
7101e4dee0  add x8,sp,#0x60
7101e4dee4  mov x0,x21
7101e4dee8  bl 0x7103776910
7101e4deec  ldr x21,[x27, #0x1d8]
7101e4def0  ldrh w1,[x19, #0x218]
7101e4def4  mov x0,x21
7101e4def8  bl 0x71032a9470
7101e4defc  mov x2,x0
7101e4df00  add x0,sp,#0x70
7101e4df04  mov x1,x21
7101e4df08  bl 0x71032a9540
7101e4df0c  adrp x0,0x7104464000
7101e4df10  add x0,x0,#0x1d4
7101e4df14  add x8,sp,#0x18
7101e4df18  mov x1,x20
7101e4df1c  bl 0x71003a4ca0
7101e4df20  add x0,sp,#0x60
7101e4df24  mov x1,x22
7101e4df28  bl 0x710377a120
7101e4df2c  ldr x0,[sp, #0x68]
7101e4df30  stp x23,xzr,[sp, #0x60]
7101e4df34  cbz x0,0x7101e4df3c
7101e4df38  bl 0x710392eb40
7101e4df3c  ldrb w8,[x26, #0x5e]
7101e4df40  cbz w8,0x7101e4df78
7101e4df44  ldr x0,[x19, #0x50]
7101e4df48  adrp x1,0x710432a000
7101e4df4c  add x1,x1,#0x69e
7101e4df50  fmov s0,0x3f800000
7101e4df54  bl 0x7103778300
7101e4df58  ldp x29,x30,[sp, #0x110]
7101e4df5c  ldp x20,x19,[sp, #0x100]
7101e4df60  ldp x22,x21,[sp, #0xf0]
7101e4df64  ldp x24,x23,[sp, #0xe0]
7101e4df68  ldp x26,x25,[sp, #0xd0]
7101e4df6c  ldp x28,x27,[sp, #0xc0]
7101e4df70  add sp,sp,#0x120
7101e4df74  ret
7101e4df78  ldrb w8,[x26, #0x6c]
7101e4df7c  cmp w8,#0x3
7101e4df80  b.eq 0x7101e4dfb4
7101e4df84  cmp w8,#0x2
7101e4df88  b.eq 0x7101e4dfa4
7101e4df8c  cmp w8,#0x1
7101e4df90  b.ne 0x7101e4dfc4
7101e4df94  ldr x0,[x19, #0x50]
7101e4df98  adrp x1,0x710437c000
7101e4df9c  add x1,x1,#0xb20
7101e4dfa0  b 0x7101e4df50
7101e4dfa4  ldr x0,[x19, #0x50]
7101e4dfa8  adrp x1,0x710436c000
7101e4dfac  add x1,x1,#0x98a
7101e4dfb0  b 0x7101e4df50
7101e4dfb4  ldr x0,[x19, #0x50]
7101e4dfb8  adrp x1,0x7104433000
7101e4dfbc  add x1,x1,#0x649
7101e4dfc0  b 0x7101e4df50
7101e4dfc4  ldr x0,[x19, #0x50]
7101e4dfc8  adrp x1,0x7104281000
7101e4dfcc  add x1,x1,#0x9c
7101e4dfd0  b 0x7101e4df50
7101e4dfd4  ldrb w22,[x11, #0x48]
7101e4dfd8  cmp w22,#0x3
7101e4dfdc  b.eq 0x7101e4e038
7101e4dfe0  cmp w22,#0x2
7101e4dfe4  b.eq 0x7101e4e028
7101e4dfe8  cmp w22,#0x1
7101e4dfec  b.ne 0x7101e4d8ec
7101e4dff0  ldr x0,[x19, #0x70]
7101e4dff4  adrp x1,0x710437c000
7101e4dff8  add x1,x1,#0xb20
7101e4dffc  b 0x7101e4d8f8
7101e4e000  ldr x0,[x19, #0x60]
7101e4e004  mov x23,x12
7101e4e008  adrp x1,0x710436c000
7101e4e00c  add x1,x1,#0x98a
7101e4e010  b 0x7101e4d9a4
7101e4e014  ldr x0,[x19, #0x60]
7101e4e018  mov x23,x12
7101e4e01c  adrp x1,0x7104433000
7101e4e020  add x1,x1,#0x649
7101e4e024  b 0x7101e4d9a4
7101e4e028  ldr x0,[x19, #0x70]
7101e4e02c  adrp x1,0x710436c000
7101e4e030  add x1,x1,#0x98a
7101e4e034  b 0x7101e4d8f8
7101e4e038  ldr x0,[x19, #0x70]
7101e4e03c  adrp x1,0x7104433000
7101e4e040  add x1,x1,#0x649
7101e4e044  b 0x7101e4d8f8
7101e4e048  add x0,x8,#0x70
7101e4e04c  bl 0x71039c1330
