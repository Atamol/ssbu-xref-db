// addr:      7101e9d5e0
// offset:    0x1e9d5e0
// name:      FUN_7101e9d5e0
// mangled:   
// size:      3276

7101e9d5e0  stp d15,d14,[sp, #-0xa0]!
7101e9d5e4  stp d13,d12,[sp, #0x10]
7101e9d5e8  stp d11,d10,[sp, #0x20]
7101e9d5ec  stp d9,d8,[sp, #0x30]
7101e9d5f0  stp x28,x27,[sp, #0x40]
7101e9d5f4  stp x26,x25,[sp, #0x50]
7101e9d5f8  stp x24,x23,[sp, #0x60]
7101e9d5fc  stp x22,x21,[sp, #0x70]
7101e9d600  stp x20,x19,[sp, #0x80]
7101e9d604  stp x29,x30,[sp, #0x90]
7101e9d608  add x29,sp,#0x90
7101e9d60c  sub sp,sp,#0x1, LSL #12
7101e9d610  sub sp,sp,#0x50
7101e9d614  ldr x8,[x0, #0xe0]
7101e9d618  ldr x8,[x8, #0x80]
7101e9d61c  mov x21,x0
7101e9d620  mov w0,#0x10
7101e9d624  mov w1,#0x200
7101e9d628  str x8,[sp, #0x8]
7101e9d62c  bl 0x710392e290
7101e9d630  cbnz x0,0x7101e9d678
7101e9d634  adrp x8,0x7105332000
7101e9d638  ldr x0,[x8, #0xf00]
7101e9d63c  cbz x0,0x7101e9d674
7101e9d640  mov w8,#0x200
7101e9d644  stur wzr,[x29, #-0xc0]
7101e9d648  sub x1,x29,#0xc0
7101e9d64c  str x8,[sp, #0x18]
7101e9d650  ldr x8,[x0]
7101e9d654  ldr x8,[x8, #0x30]
7101e9d658  add x2,sp,#0x18
7101e9d65c  blr x8
7101e9d660  tbz w0,#0x0,0x7101e9d674
7101e9d664  mov w0,#0x10
7101e9d668  mov w1,#0x200
7101e9d66c  bl 0x710392e290
7101e9d670  cbnz x0,0x7101e9d678
7101e9d674  mov x0,xzr
7101e9d678  add x8,x0,#0x200
7101e9d67c  stp x0,x0,[x29, #-0xc0]
7101e9d680  add x0,sp,#0x18
7101e9d684  mov w2,#0x1000
7101e9d688  mov w1,wzr
7101e9d68c  stur x8,[x29, #-0xb0]
7101e9d690  add x23,sp,#0x18
7101e9d694  bl 0x71039c02a0
7101e9d698  ldr x9,[x21, #0xd0]
7101e9d69c  ldp x8,x10,[x9, #0x38]
7101e9d6a0  str x21,[sp, #0x10]
7101e9d6a4  sub x11,x10,x8
7101e9d6a8  lsr x11,x11,#0x6
7101e9d6ac  cmp w11,#0x1
7101e9d6b0  b.lt 0x7101e9d9d0
7101e9d6b4  mov x26,xzr
7101e9d6b8  sub x11,x10,x8
7101e9d6bc  asr x12,x11,#0x6
7101e9d6c0  cmp x12,x26
7101e9d6c4  b.ls 0x7101e9e28c
7101e9d6c8  add x13,x8,x26, LSL #0x6
7101e9d6cc  ldp x12,x13,[x13, #0x8]
7101e9d6d0  sub x14,x13,x12
7101e9d6d4  lsr x14,x14,#0x6
7101e9d6d8  cmp w14,#0x1
7101e9d6dc  b.lt 0x7101e9d9c0
7101e9d6e0  mov x24,xzr
7101e9d6e4  sub x10,x10,x8
7101e9d6e8  asr x10,x10,#0x6
7101e9d6ec  cmp x10,x26
7101e9d6f0  b.ls 0x7101e9e28c
7101e9d6f4  sub x9,x13,x12
7101e9d6f8  asr x9,x9,#0x6
7101e9d6fc  cmp x9,x24
7101e9d700  b.ls 0x7101e9e294
7101e9d704  add x19,x12,x24, LSL #0x6
7101e9d708  ldr w8,[x19, #0x4]
7101e9d70c  cmp w8,#0x1
7101e9d710  b.ne 0x7101e9d984
7101e9d714  adrp x8,0x710593b000
7101e9d718  ldr x1,[x19, #0x10]!
7101e9d71c  ldr x8,[x8, #0xc60]
7101e9d720  ldr x0,[x8]
7101e9d724  bl 0x71037a4570
7101e9d728  tbz w0,#0x0,0x7101e9d984
7101e9d72c  adrp x8,0x710593b000
7101e9d730  ldr x8,[x8, #0xc60]
7101e9d734  ldr x1,[x19]
7101e9d738  ldr x0,[x8]
7101e9d73c  bl 0x71037a4450
7101e9d740  cbz x0,0x7101e9d980
7101e9d744  ldrh w10,[x0]
7101e9d748  cbz w10,0x7101e9d980
7101e9d74c  mov w9,wzr
7101e9d750  mov w8,wzr
7101e9d754  mov x11,x0
7101e9d758  orr w12,w10,#0x1
7101e9d75c  and w12,w12,#0xffff
7101e9d760  cmp w12,#0xf
7101e9d764  b.ne 0x7101e9d78c
7101e9d768  and w10,w10,#0xffff
7101e9d76c  cmp w10,#0xe
7101e9d770  b.ne 0x7101e9d7a4
7101e9d774  ldrh w10,[x11, #0x6]
7101e9d778  lsr w10,w10,#0x1
7101e9d77c  add w10,w10,#0x4
7101e9d780  ldrh w12,[x11, #0x2]
7101e9d784  cbnz w12,0x7101e9d7ec
7101e9d788  b 0x7101e9d7b8
7101e9d78c  strh w10,[x23, w8, SXTW #0x1]
7101e9d790  add w8,w8,#0x1
7101e9d794  mov w10,#0x1
7101e9d798  cmp w8,#0x7ff
7101e9d79c  b.le 0x7101e9d7f4
7101e9d7a0  b 0x7101e9d804
7101e9d7a4  cmp w10,#0xf
7101e9d7a8  orr w10,wzr,#0x3
7101e9d7ac  csel w10,w10,wzr,eq
7101e9d7b0  ldrh w12,[x11, #0x2]
7101e9d7b4  cbnz w12,0x7101e9d7ec
7101e9d7b8  ldrh w11,[x11, #0x4]
7101e9d7bc  cmp w11,#0x2
7101e9d7c0  b.ne 0x7101e9d7ec
7101e9d7c4  add w11,w10,w9
7101e9d7c8  ldrh w12,[x0, w11, SXTW #0x1]
7101e9d7cc  cmp w12,#0x5f
7101e9d7d0  b.ne 0x7101e9d7ec
7101e9d7d4  sxtw x11,w11
7101e9d7d8  add x11,x0,x11, LSL #0x1
7101e9d7dc  ldrh w11,[x11, #0x2]
7101e9d7e0  orr w11,w11,#0x1
7101e9d7e4  cmp w11,#0xf
7101e9d7e8  cinc w10,w10,eq
7101e9d7ec  cmp w8,#0x7ff
7101e9d7f0  b.gt 0x7101e9d804
7101e9d7f4  add w9,w10,w9
7101e9d7f8  add x11,x0,w9, SXTW  #0x1
7101e9d7fc  ldrh w10,[x11]
7101e9d800  cbnz w10,0x7101e9d758
7101e9d804  cmp w8,#0x1
7101e9d808  strh wzr,[x23, w8, SXTW #0x1]
7101e9d80c  b.lt 0x7101e9d984
7101e9d810  mov x27,xzr
7101e9d814  sxtw x28,w8
7101e9d818  ldp x20,x8,[x29, #-0xc0]
7101e9d81c  cmp x20,x8
7101e9d820  b.eq 0x7101e9d85c
7101e9d824  ldrh w9,[x23, x27, LSL #0x1]
7101e9d828  ldrh w10,[x20]
7101e9d82c  cmp w10,w9
7101e9d830  mov x10,x20
7101e9d834  b.eq 0x7101e9d854
7101e9d838  add x10,x20,#0x2
7101e9d83c  cmp x8,x10
7101e9d840  b.eq 0x7101e9d85c
7101e9d844  ldrh w11,[x10], #0x2
7101e9d848  cmp w11,w9
7101e9d84c  b.ne 0x7101e9d83c
7101e9d850  sub x10,x10,#0x2
7101e9d854  cmp x10,x8
7101e9d858  b.ne 0x7101e9d970
7101e9d85c  ldur x9,[x29, #-0xb0]
7101e9d860  cmp x9,x8
7101e9d864  b.eq 0x7101e9d880
7101e9d868  ldrh w9,[x23, x27, LSL #0x1]
7101e9d86c  strh w9,[x8]
7101e9d870  ldur x8,[x29, #-0xb8]
7101e9d874  add x8,x8,#0x2
7101e9d878  stur x8,[x29, #-0xb8]
7101e9d87c  b 0x7101e9d970
7101e9d880  sub x21,x8,x20
7101e9d884  cmn x21,#0x3
7101e9d888  b.le 0x7101e9e2a0
7101e9d88c  asr x25,x21,#0x1
7101e9d890  add x8,x25,#0x1
7101e9d894  sub x9,x9,x20
7101e9d898  asr x10,x9,#0x1
7101e9d89c  cmp x9,x8
7101e9d8a0  csel x8,x8,x9,cc
7101e9d8a4  orr x9,xzr,#0x3fffffffffffffff
7101e9d8a8  cmp x10,x9
7101e9d8ac  orr x9,xzr,#0x7fffffffffffffff
7101e9d8b0  csel x19,x8,x9,cc
7101e9d8b4  cbz x19,0x7101e9d928
7101e9d8b8  tbnz x19,#0x3f,0x7101e9e2a8
7101e9d8bc  lsl x8,x19,#0x1
7101e9d8c0  cmp x8,#0x0
7101e9d8c4  csinc x23,x8,xzr,ne
7101e9d8c8  mov w0,#0x10
7101e9d8cc  mov x1,x23
7101e9d8d0  bl 0x710392e290
7101e9d8d4  mov x22,x0
7101e9d8d8  cbnz x0,0x7101e9d920
7101e9d8dc  adrp x8,0x7105332000
7101e9d8e0  ldr x0,[x8, #0xf00]
7101e9d8e4  cbz x0,0x7101e9d91c
7101e9d8e8  stur wzr,[x29, #-0xc4]
7101e9d8ec  stur x23,[x29, #-0xa8]
7101e9d8f0  ldr x8,[x0]
7101e9d8f4  ldr x8,[x8, #0x30]
7101e9d8f8  sub x1,x29,#0xc4
7101e9d8fc  sub x2,x29,#0xa8
7101e9d900  blr x8
7101e9d904  tbz w0,#0x0,0x7101e9d91c
7101e9d908  mov w0,#0x10
7101e9d90c  mov x1,x23
7101e9d910  bl 0x710392e290
7101e9d914  mov x22,x0
7101e9d918  cbnz x0,0x7101e9d920
7101e9d91c  mov x22,xzr
7101e9d920  add x23,sp,#0x18
7101e9d924  b 0x7101e9d92c
7101e9d928  mov x22,xzr
7101e9d92c  ldrh w8,[x23, x27, LSL #0x1]
7101e9d930  add x23,x22,x25, LSL #0x1
7101e9d934  add x19,x22,x19, LSL #0x1
7101e9d938  cmp x21,#0x1
7101e9d93c  strh w8,[x23], #0x2
7101e9d940  b.lt 0x7101e9d954
7101e9d944  mov x0,x22
7101e9d948  mov x1,x20
7101e9d94c  mov x2,x21
7101e9d950  bl 0x71039c00e0
7101e9d954  ldr x21,[sp, #0x10]
7101e9d958  stp x22,x23,[x29, #-0xc0]
7101e9d95c  add x23,sp,#0x18
7101e9d960  stur x19,[x29, #-0xb0]
7101e9d964  cbz x20,0x7101e9d970
7101e9d968  mov x0,x20
7101e9d96c  bl 0x710392eb40
7101e9d970  add x27,x27,#0x1
7101e9d974  cmp x27,x28
7101e9d978  b.lt 0x7101e9d818
7101e9d97c  b 0x7101e9d984
7101e9d980  strh wzr,[sp, #0x18]
7101e9d984  ldr x9,[x21, #0xd0]
7101e9d988  mov x0,x9
7101e9d98c  ldr x8,[x0, #0x38]!
7101e9d990  ldr x10,[x9, #0x40]
7101e9d994  sub x11,x10,x8
7101e9d998  asr x12,x11,#0x6
7101e9d99c  cmp x12,x26
7101e9d9a0  b.ls 0x7101e9e274
7101e9d9a4  add x13,x8,x26, LSL #0x6
7101e9d9a8  ldp x12,x13,[x13, #0x8]
7101e9d9ac  sub x14,x13,x12
7101e9d9b0  add x24,x24,#0x1
7101e9d9b4  lsr x14,x14,#0x6
7101e9d9b8  cmp x24,w14, SXTW 
7101e9d9bc  b.lt 0x7101e9d6e4
7101e9d9c0  add x26,x26,#0x1
7101e9d9c4  lsr x11,x11,#0x6
7101e9d9c8  cmp x26,w11, SXTW 
7101e9d9cc  b.lt 0x7101e9d6b8
7101e9d9d0  adrp x0,0x7104359000
7101e9d9d4  add x0,x0,#0xb7a
7101e9d9d8  mov w1,#0x1
7101e9d9dc  sub x2,x29,#0xc0
7101e9d9e0  bl 0x71033794c0
7101e9d9e4  ldur x0,[x29, #-0xc0]
7101e9d9e8  cbz x0,0x7101e9d9f4
7101e9d9ec  stur x0,[x29, #-0xb8]
7101e9d9f0  bl 0x710392eb40
7101e9d9f4  ldr x8,[sp, #0x8]
7101e9d9f8  ldr x8,[x8]
7101e9d9fc  ldr x0,[x8]
7101e9da00  mov w2,#0x1001
7101e9da04  mov w1,wzr
7101e9da08  bl 0x7103775dc0
7101e9da0c  adrp x8,0x7104467000
7101e9da10  ldr q0,[x8, #0xd10]
7101e9da14  adrp x8,0x7104466000
7101e9da18  stp xzr,xzr,[x21, #0xe8]
7101e9da1c  ldr q1,[x8, #0x680]
7101e9da20  ldr x8,[x21, #0xd0]
7101e9da24  str wzr,[x21, #0xf8]
7101e9da28  stp q0,q1,[x21, #0x100]
7101e9da2c  ldp x9,x10,[x8, #0x38]
7101e9da30  sub x11,x10,x9
7101e9da34  lsr x11,x11,#0x6
7101e9da38  cmp w11,#0x1
7101e9da3c  b.lt 0x7101e9e228
7101e9da40  add x11,sp,#0x18
7101e9da44  orr x11,x11,#0x2
7101e9da48  str x11,[sp, #0x8]
7101e9da4c  adrp x11,0x7104465000
7101e9da50  ldr d0,[x11, #0x3b0]
7101e9da54  fmov s12,wzr
7101e9da58  fmov s10,0xbf000000
7101e9da5c  fmov s11,0x3f000000
7101e9da60  mov x25,xzr
7101e9da64  orr x28,xzr,#0x100000000
7101e9da68  str d0,[sp]
7101e9da6c  sub x11,x10,x9
7101e9da70  asr x11,x11,#0x6
7101e9da74  add x0,x8,#0x38
7101e9da78  stp xzr,xzr,[x29, #-0xb8]
7101e9da7c  stur xzr,[x29, #-0xc0]
7101e9da80  cmp x11,x25
7101e9da84  b.ls 0x7101e9e274
7101e9da88  add x13,x9,x25, LSL #0x6
7101e9da8c  ldp x12,x13,[x13, #0x8]
7101e9da90  sub x14,x13,x12
7101e9da94  lsr x14,x14,#0x6
7101e9da98  cmp w14,#0x1
7101e9da9c  b.lt 0x7101e9e100
7101e9daa0  fmov d13,xzr
7101e9daa4  mov v9.16B,v12.16B
7101e9daa8  mov v14.16B,v12.16B
7101e9daac  mov x27,xzr
7101e9dab0  mov x24,xzr
7101e9dab4  b 0x7101e9dbcc
7101e9dab8  mov v15.16B,v12.16B
7101e9dabc  cmn w11,#0x1
7101e9dac0  b.eq 0x7101e9df18
7101e9dac4  ldr x9,[x21]
7101e9dac8  ldr x9,[x9]
7101e9dacc  add x0,x9,#0x8
7101e9dad0  asr x19,x10,#0x20
7101e9dad4  orr w9,wzr,#0x18
7101e9dad8  madd x8,x19,x9,x8
7101e9dadc  ldr x1,[x8, #0x8]
7101e9dae0  sub x8,x29,#0xa8
7101e9dae4  bl 0x7103776910
7101e9dae8  ldur x22,[x29, #-0xa0]
7101e9daec  ldr x0,[x22, #0x10]
7101e9daf0  cbz x0,0x7101e9db04
7101e9daf4  add x1,sp,#0x18
7101e9daf8  mov w3,#0x1
7101e9dafc  mov w2,#0xffffffff
7101e9db00  bl 0x71037a2270
7101e9db04  orr w9,wzr,#0x18
7101e9db08  mul x9,x19,x9
7101e9db0c  ldr x8,[x21, #0x8]
7101e9db10  ldr w1,[x8, x9, LSL #0x0]
7101e9db14  cmp w20,#0x0
7101e9db18  cset w2,ne
7101e9db1c  mov x0,x21
7101e9db20  bl 0x7101e9cfe0
7101e9db24  fsub s15,s3,s2
7101e9db28  adrp x8,0x710523d000
7101e9db2c  add x8,x8,#0x9a8
7101e9db30  stp x8,xzr,[x29, #-0xa8]
7101e9db34  cbz x22,0x7101e9db40
7101e9db38  mov x0,x22
7101e9db3c  bl 0x710392eb40
7101e9db40  fmul s15,s15,s8
7101e9db44  ldr x21,[sp, #0x10]
7101e9db48  cbnz x27,0x7101e9de5c
7101e9db4c  b 0x7101e9df74
7101e9db50  mov x9,xzr
7101e9db54  mov w26,wzr
7101e9db58  mov x1,x22
7101e9db5c  orr w10,w8,#0x1
7101e9db60  and w10,w10,#0xffff
7101e9db64  cmp w10,#0xf
7101e9db68  b.ne 0x7101e9db88
7101e9db6c  and w8,w8,#0xffff
7101e9db70  cmp w8,#0xe
7101e9db74  b.ne 0x7101e9db98
7101e9db78  ldrh w8,[x1, #0x6]
7101e9db7c  lsr w8,w8,#0x1
7101e9db80  add w19,w8,#0x4
7101e9db84  b 0x7101e9dba4
7101e9db88  add x10,sp,#0x18
7101e9db8c  mov w19,#0x1
7101e9db90  strh w8,[x10, x9, LSL #0x1]
7101e9db94  b 0x7101e9dbb4
7101e9db98  cmp w8,#0xf
7101e9db9c  orr w8,wzr,#0x3
7101e9dba0  csel w19,w8,wzr,eq
7101e9dba4  add x8,sp,#0x18
7101e9dba8  add x0,x8,x9, LSL #0x1
7101e9dbac  lsl w2,w19,#0x1
7101e9dbb0  bl 0x71039c00e0
7101e9dbb4  add w26,w19,w26
7101e9dbb8  add x1,x22,w26, SXTW  #0x1
7101e9dbbc  ldrh w8,[x1]
7101e9dbc0  sxtw x9,w26
7101e9dbc4  cbnz w8,0x7101e9db5c
7101e9dbc8  b 0x7101e9dd7c
7101e9dbcc  sub x10,x10,x9
7101e9dbd0  asr x10,x10,#0x6
7101e9dbd4  cmp x10,x25
7101e9dbd8  b.ls 0x7101e9e278
7101e9dbdc  sub x10,x13,x12
7101e9dbe0  asr x10,x10,#0x6
7101e9dbe4  cmp x10,x27
7101e9dbe8  b.ls 0x7101e9e280
7101e9dbec  add x23,x12,x27, LSL #0x6
7101e9dbf0  ldr w9,[x23, #0x4]
7101e9dbf4  cmp w9,#0x2
7101e9dbf8  b.eq 0x7101e9dc38
7101e9dbfc  mov v15.16B,v12.16B
7101e9dc00  cmp w9,#0x1
7101e9dc04  b.ne 0x7101e9de58
7101e9dc08  ldr x12,[x8, #0x58]
7101e9dc0c  ldp x9,x22,[x23, #0x8]
7101e9dc10  sub x13,x12,#0x1
7101e9dc14  and x10,x9,#0xffffffffff
7101e9dc18  ands x11,x13,x12
7101e9dc1c  b.eq 0x7101e9dc68
7101e9dc20  cmp x10,x12
7101e9dc24  mov x13,x10
7101e9dc28  b.cc 0x7101e9dc6c
7101e9dc2c  udiv x13,x10,x12
7101e9dc30  msub x13,x13,x12,x10
7101e9dc34  b 0x7101e9dc6c
7101e9dc38  ldr x12,[x8, #0x58]
7101e9dc3c  ldr x9,[x23, #0x8]
7101e9dc40  sub x13,x12,#0x1
7101e9dc44  and x10,x9,#0xffffffffff
7101e9dc48  ands x11,x13,x12
7101e9dc4c  b.eq 0x7101e9ddd8
7101e9dc50  cmp x10,x12
7101e9dc54  mov x13,x10
7101e9dc58  b.cc 0x7101e9dddc
7101e9dc5c  udiv x13,x10,x12
7101e9dc60  msub x13,x13,x12,x10
7101e9dc64  b 0x7101e9dddc
7101e9dc68  and x13,x13,x10
7101e9dc6c  ldr x8,[x8, #0x50]
7101e9dc70  ldr x8,[x8, x13, LSL #0x3]
7101e9dc74  ldr x8,[x8]
7101e9dc78  cbnz x11,0x7101e9dc84
7101e9dc7c  b 0x7101e9dca8
7101e9dc80  ldr x8,[x8]
7101e9dc84  ldr x11,[x8, #0x8]
7101e9dc88  cmp x10,x11
7101e9dc8c  b.ne 0x7101e9dc80
7101e9dc90  ldr x11,[x8, #0x10]
7101e9dc94  eor x11,x11,x9
7101e9dc98  tst x11,#0xffffffffff
7101e9dc9c  b.ne 0x7101e9dc80
7101e9dca0  b 0x7101e9dcc4
7101e9dca4  ldr x8,[x8]
7101e9dca8  ldr x11,[x8, #0x8]
7101e9dcac  cmp x10,x11
7101e9dcb0  b.ne 0x7101e9dca4
7101e9dcb4  ldr x11,[x8, #0x10]
7101e9dcb8  eor x11,x11,x9
7101e9dcbc  tst x11,#0xffffffffff
7101e9dcc0  b.ne 0x7101e9dca4
7101e9dcc4  ldr x9,[x21, #0xe0]
7101e9dcc8  ldr s8,[x8, #0x28]
7101e9dccc  add x0,sp,#0x18
7101e9dcd0  ldrb w20,[x8, #0x48]
7101e9dcd4  mov w2,#0x1000
7101e9dcd8  mov w1,wzr
7101e9dcdc  ldr x21,[x9, #0x80]
7101e9dce0  bl 0x71039c02a0
7101e9dce4  adrp x8,0x710593b000
7101e9dce8  ldr x8,[x8, #0xc60]
7101e9dcec  ldr x0,[x8]
7101e9dcf0  mov x1,x22
7101e9dcf4  cbz w20,0x7101e9dd90
7101e9dcf8  bl 0x71037a4450
7101e9dcfc  cbz x0,0x7101e9dd78
7101e9dd00  ldrh w8,[x0]
7101e9dd04  mov x22,x0
7101e9dd08  cbz w8,0x7101e9dd78
7101e9dd0c  mov w10,wzr
7101e9dd10  mov w9,wzr
7101e9dd14  mov w12,w8
7101e9dd18  mov x11,x22
7101e9dd1c  orr w13,w12,#0x1
7101e9dd20  and w13,w13,#0xffff
7101e9dd24  cmp w13,#0xf
7101e9dd28  b.ne 0x7101e9dd48
7101e9dd2c  and w12,w12,#0xffff
7101e9dd30  cmp w12,#0xe
7101e9dd34  b.ne 0x7101e9dd50
7101e9dd38  ldrh w11,[x11, #0x6]
7101e9dd3c  lsr w11,w11,#0x1
7101e9dd40  add w11,w11,#0x4
7101e9dd44  b 0x7101e9dd5c
7101e9dd48  mov w11,#0x1
7101e9dd4c  b 0x7101e9dd5c
7101e9dd50  cmp w12,#0xf
7101e9dd54  orr w11,wzr,#0x3
7101e9dd58  csel w11,w11,wzr,eq
7101e9dd5c  add w10,w11,w10
7101e9dd60  add w9,w11,w9
7101e9dd64  add x11,x22,w10, UXTW  #0x1
7101e9dd68  ldrh w12,[x11]
7101e9dd6c  cbnz w12,0x7101e9dd1c
7101e9dd70  cmp w9,#0x7ff
7101e9dd74  b.ls 0x7101e9db50
7101e9dd78  mov w26,wzr
7101e9dd7c  add x8,sp,#0x18
7101e9dd80  strh wzr,[x8, w26, SXTW #0x1]
7101e9dd84  ldrh w8,[sp, #0x18]
7101e9dd88  cbnz w8,0x7101e9ddb0
7101e9dd8c  b 0x7101e9ddd0
7101e9dd90  bl 0x71037a4450
7101e9dd94  mov x1,x0
7101e9dd98  add x0,sp,#0x18
7101e9dd9c  mov w2,#0x20
7101e9dda0  mov w3,wzr
7101e9dda4  bl 0x71037a7bd0
7101e9dda8  ldrh w8,[sp, #0x18]
7101e9ddac  cbz w8,0x7101e9ddd0
7101e9ddb0  ldr x9,[sp, #0x8]
7101e9ddb4  mov w8,#0xffffffff
7101e9ddb8  ldrh w10,[x9], #0x2
7101e9ddbc  add w8,w8,#0x1
7101e9ddc0  cbnz w10,0x7101e9ddb8
7101e9ddc4  ldr w9,[x21, #0x20]
7101e9ddc8  cmp w9,w8
7101e9ddcc  b.ls 0x7101e9def8
7101e9ddd0  mov w9,wzr
7101e9ddd4  b 0x7101e9df08
7101e9ddd8  and x13,x13,x10
7101e9dddc  ldr x8,[x8, #0x50]
7101e9dde0  ldr x8,[x8, x13, LSL #0x3]
7101e9dde4  ldr x8,[x8]
7101e9dde8  cbnz x11,0x7101e9ddf4
7101e9ddec  b 0x7101e9de18
7101e9ddf0  ldr x8,[x8]
7101e9ddf4  ldr x11,[x8, #0x8]
7101e9ddf8  cmp x10,x11
7101e9ddfc  b.ne 0x7101e9ddf0
7101e9de00  ldr x11,[x8, #0x10]
7101e9de04  eor x11,x11,x9
7101e9de08  tst x11,#0xffffffffff
7101e9de0c  b.ne 0x7101e9ddf0
7101e9de10  b 0x7101e9de34
7101e9de14  ldr x8,[x8]
7101e9de18  ldr x11,[x8, #0x8]
7101e9de1c  cmp x10,x11
7101e9de20  b.ne 0x7101e9de14
7101e9de24  ldr x11,[x8, #0x10]
7101e9de28  eor x11,x11,x9
7101e9de2c  tst x11,#0xffffffffff
7101e9de30  b.ne 0x7101e9de14
7101e9de34  ldr s0,[x8, #0x28]
7101e9de38  ldr x8,[x8, #0x70]
7101e9de3c  mov v1.16B,v12.16B
7101e9de40  ldr x8,[x8]
7101e9de44  cbz x8,0x7101e9de54
7101e9de48  ldr x8,[x8, #0x8]
7101e9de4c  ldr h1,[x8, #0x4a]
7101e9de50  ucvtf s1,s1
7101e9de54  fmul s15,s1,s0
7101e9de58  cbz x27,0x7101e9df74
7101e9de5c  ldr s0,[x23]
7101e9de60  fcmp s0,#0.0
7101e9de64  b.ne 0x7101e9df74
7101e9de68  fcmp s15,s9
7101e9de6c  b.le 0x7101e9def0
7101e9de70  fsub s0,s15,s9
7101e9de74  fcvt d1,s0
7101e9de78  fadd d13,d13,d1
7101e9de7c  ldur x8,[x29, #-0xc0]
7101e9de80  cmp x8,x24
7101e9de84  b.eq 0x7101e9df94
7101e9de88  fmul s0,s0,s11
7101e9de8c  ldr x0,[x21, #0xd0]
7101e9de90  ldr x10,[x0, #0x38]!
7101e9de94  ldr x9,[x0, #0x8]
7101e9de98  sub x9,x9,x10
7101e9de9c  asr x9,x9,#0x6
7101e9dea0  cmp x9,x25
7101e9dea4  b.ls 0x7101e9e274
7101e9dea8  add x0,x10,x25, LSL #0x6
7101e9deac  ldrsw x9,[x8]
7101e9deb0  ldr x10,[x0, #0x8]!
7101e9deb4  ldr x11,[x0, #0x8]
7101e9deb8  sub x11,x11,x10
7101e9debc  asr x11,x11,#0x6
7101e9dec0  cmp x11,x9
7101e9dec4  b.ls 0x7101e9e274
7101e9dec8  add x9,x10,x9, LSL #0x6
7101e9decc  ldr q1,[x9, #0x20]
7101e9ded0  add x8,x8,#0x4
7101e9ded4  dup s2,v1.S[0x1]
7101e9ded8  fsub s2,s2,s0
7101e9dedc  mov v1.S[0x1],v2.S[0x0]
7101e9dee0  cmp x24,x8
7101e9dee4  str q1,[x9, #0x20]
7101e9dee8  b.ne 0x7101e9de8c
7101e9deec  b 0x7101e9df94
7101e9def0  mov v15.16B,v9.16B
7101e9def4  b 0x7101e9df94
7101e9def8  ldr w9,[x21, #0x24]
7101e9defc  cmp w9,w8
7101e9df00  mov w8,#0x1
7101e9df04  cinc w9,w8,ls
7101e9df08  ldp x8,x10,[x21, #0x8]
7101e9df0c  mov v15.16B,v12.16B
7101e9df10  subs x12,x10,x8
7101e9df14  b.ne 0x7101e9df24
7101e9df18  ldr x21,[sp, #0x10]
7101e9df1c  cbnz x27,0x7101e9de5c
7101e9df20  b 0x7101e9df74
7101e9df24  orr x13,xzr,#-0x5555555555555556
7101e9df28  asr x12,x12,#0x3
7101e9df2c  movk x13,#0xaaab
7101e9df30  mul x12,x12,x13
7101e9df34  mov x10,xzr
7101e9df38  mov x11,xzr
7101e9df3c  add x13,x8,#0x14
7101e9df40  ldrb w14,[x13]
7101e9df44  cbnz w14,0x7101e9df54
7101e9df48  ldur w14,[x13, #-0x4]
7101e9df4c  cmp w14,w9
7101e9df50  b.ge 0x7101e9dab8
7101e9df54  add x11,x11,#0x1
7101e9df58  add x10,x10,x28
7101e9df5c  add x13,x13,#0x18
7101e9df60  cmp x12,x11
7101e9df64  b.hi 0x7101e9df40
7101e9df68  ldr x21,[sp, #0x10]
7101e9df6c  mov v15.16B,v12.16B
7101e9df70  cbnz x27,0x7101e9de5c
7101e9df74  ldur x24,[x29, #-0xc0]
7101e9df78  stur x24,[x29, #-0xb8]
7101e9df7c  ldr s0,[x23]
7101e9df80  fcvt d0,s0
7101e9df84  fadd d0,d13,d0
7101e9df88  fcvt d1,s15
7101e9df8c  fcvt s14,d0
7101e9df90  fadd d13,d0,d1
7101e9df94  ldr q1,[x23, #0x20]
7101e9df98  dup s2,v1.S[0x1]
7101e9df9c  fmul s0,s15,s10
7101e9dfa0  fadd s0,s2,s0
7101e9dfa4  str s14,[x23, #0x38]
7101e9dfa8  mov v1.S[0x1],v0.S[0x0]
7101e9dfac  str q1,[x23, #0x20]
7101e9dfb0  ldur x8,[x29, #-0xb0]
7101e9dfb4  cmp x24,x8
7101e9dfb8  b.eq 0x7101e9dfd0
7101e9dfbc  str w27,[x24]
7101e9dfc0  ldur x8,[x29, #-0xb8]
7101e9dfc4  add x24,x8,#0x4
7101e9dfc8  stur x24,[x29, #-0xb8]
7101e9dfcc  b 0x7101e9e0b4
7101e9dfd0  ldur x21,[x29, #-0xc0]
7101e9dfd4  sub x22,x24,x21
7101e9dfd8  asr x20,x22,#0x2
7101e9dfdc  add x8,x20,#0x1
7101e9dfe0  lsr x9,x8,#0x3e
7101e9dfe4  cbnz x9,0x7101e9e2a0
7101e9dfe8  orr x9,xzr,#0x1ffffffffffffffe
7101e9dfec  cmp x20,x9
7101e9dff0  b.hi 0x7101e9e010
7101e9dff4  asr x9,x22,#0x1
7101e9dff8  cmp x9,x8
7101e9dffc  csel x26,x8,x9,cc
7101e9e000  cbz x26,0x7101e9e074
7101e9e004  lsr x8,x26,#0x3e
7101e9e008  cbz x8,0x7101e9e014
7101e9e00c  b 0x7101e9e2a8
7101e9e010  orr x26,xzr,#0x3fffffffffffffff
7101e9e014  lsl x8,x26,#0x2
7101e9e018  cmp x8,#0x0
7101e9e01c  csinc x24,x8,xzr,ne
7101e9e020  mov w0,#0x10
7101e9e024  mov x1,x24
7101e9e028  bl 0x710392e290
7101e9e02c  mov x23,x0
7101e9e030  cbnz x0,0x7101e9e078
7101e9e034  adrp x8,0x7105332000
7101e9e038  ldr x0,[x8, #0xf00]
7101e9e03c  cbz x0,0x7101e9e074
7101e9e040  stur wzr,[x29, #-0xa8]
7101e9e044  str x24,[sp, #0x18]
7101e9e048  ldr x8,[x0]
7101e9e04c  ldr x8,[x8, #0x30]
7101e9e050  sub x1,x29,#0xa8
7101e9e054  add x2,sp,#0x18
7101e9e058  blr x8
7101e9e05c  tbz w0,#0x0,0x7101e9e074
7101e9e060  mov w0,#0x10
7101e9e064  mov x1,x24
7101e9e068  bl 0x710392e290
7101e9e06c  mov x23,x0
7101e9e070  cbnz x0,0x7101e9e078
7101e9e074  mov x23,xzr
7101e9e078  add x24,x23,x20, LSL #0x2
7101e9e07c  add x19,x23,x26, LSL #0x2
7101e9e080  cmp x22,#0x1
7101e9e084  str w27,[x24], #0x4
7101e9e088  b.lt 0x7101e9e09c
7101e9e08c  mov x0,x23
7101e9e090  mov x1,x21
7101e9e094  mov x2,x22
7101e9e098  bl 0x71039c00e0
7101e9e09c  stp x23,x24,[x29, #-0xc0]
7101e9e0a0  stur x19,[x29, #-0xb0]
7101e9e0a4  cbz x21,0x7101e9e0b0
7101e9e0a8  mov x0,x21
7101e9e0ac  bl 0x710392eb40
7101e9e0b0  ldr x21,[sp, #0x10]
7101e9e0b4  ldr x8,[x21, #0xd0]
7101e9e0b8  mov x0,x8
7101e9e0bc  ldr x9,[x0, #0x38]!
7101e9e0c0  ldr x10,[x8, #0x40]
7101e9e0c4  sub x11,x10,x9
7101e9e0c8  asr x11,x11,#0x6
7101e9e0cc  cmp x11,x25
7101e9e0d0  b.ls 0x7101e9e274
7101e9e0d4  add x13,x9,x25, LSL #0x6
7101e9e0d8  ldp x12,x13,[x13, #0x8]
7101e9e0dc  sub x14,x13,x12
7101e9e0e0  mov v9.16B,v15.16B
7101e9e0e4  add x27,x27,#0x1
7101e9e0e8  lsr x14,x14,#0x6
7101e9e0ec  cmp x27,w14, SXTW 
7101e9e0f0  b.lt 0x7101e9dbcc
7101e9e0f4  cmp x11,x25
7101e9e0f8  b.hi 0x7101e9e110
7101e9e0fc  b 0x7101e9e274
7101e9e100  mov v15.16B,v12.16B
7101e9e104  fmov d13,xzr
7101e9e108  cmp x11,x25
7101e9e10c  b.ls 0x7101e9e274
7101e9e110  ldr d0,[sp]
7101e9e114  fadd d0,d13,d0
7101e9e118  fcvt d1,s15
7101e9e11c  add x8,x9,x25, LSL #0x6
7101e9e120  fadd d0,d0,d1
7101e9e124  ldr s1,[x8, #0x4]
7101e9e128  ucvtf d1,d1
7101e9e12c  fdiv d2,d0,d1
7101e9e130  str d2,[x8, #0x30]
7101e9e134  ldr x8,[x21, #0xd0]
7101e9e138  mov x0,x8
7101e9e13c  ldr x9,[x0, #0x38]!
7101e9e140  ldr x12,[x8, #0x40]
7101e9e144  sub x10,x12,x9
7101e9e148  asr x10,x10,#0x6
7101e9e14c  cmp x10,x25
7101e9e150  b.ls 0x7101e9e274
7101e9e154  add x10,x9,x25, LSL #0x6
7101e9e158  ldp x13,x14,[x10, #0x8]
7101e9e15c  sub x10,x14,x13
7101e9e160  lsr x10,x10,#0x6
7101e9e164  cmp w10,#0x1
7101e9e168  b.lt 0x7101e9e1fc
7101e9e16c  mov x10,xzr
7101e9e170  mov x11,xzr
7101e9e174  sub x12,x12,x9
7101e9e178  asr x12,x12,#0x6
7101e9e17c  cmp x12,x25
7101e9e180  b.ls 0x7101e9e278
7101e9e184  sub x8,x14,x13
7101e9e188  asr x8,x8,#0x6
7101e9e18c  cmp x8,x11
7101e9e190  b.ls 0x7101e9e280
7101e9e194  add x8,x13,x10
7101e9e198  ldr s2,[x8, #0x38]
7101e9e19c  fcvt d2,s2
7101e9e1a0  fdiv d2,d2,d0
7101e9e1a4  lsl x12,x25,#0x6
7101e9e1a8  ldr s3,[x9,x12]
7101e9e1ac  ucvtf d3,d3
7101e9e1b0  fmul d2,d2,d1
7101e9e1b4  fadd d2,d2,d3
7101e9e1b8  str d2,[x8, #0x30]
7101e9e1bc  ldr x8,[x21, #0xd0]
7101e9e1c0  mov x0,x8
7101e9e1c4  ldr x9,[x0, #0x38]!
7101e9e1c8  ldr x12,[x8, #0x40]
7101e9e1cc  sub x13,x12,x9
7101e9e1d0  asr x13,x13,#0x6
7101e9e1d4  cmp x13,x25
7101e9e1d8  b.ls 0x7101e9e274
7101e9e1dc  add x14,x9,x25, LSL #0x6
7101e9e1e0  ldp x13,x14,[x14, #0x8]
7101e9e1e4  sub x15,x14,x13
7101e9e1e8  add x11,x11,#0x1
7101e9e1ec  add x10,x10,#0x40
7101e9e1f0  lsr x15,x15,#0x6
7101e9e1f4  cmp x11,w15, SXTW 
7101e9e1f8  b.lt 0x7101e9e174
7101e9e1fc  ldur x0,[x29, #-0xc0]
7101e9e200  cbz x0,0x7101e9e210
7101e9e204  stur x0,[x29, #-0xb8]
7101e9e208  bl 0x710392eb40
7101e9e20c  ldr x8,[x21, #0xd0]
7101e9e210  ldp x9,x10,[x8, #0x38]
7101e9e214  sub x11,x10,x9
7101e9e218  add x25,x25,#0x1
7101e9e21c  lsr x11,x11,#0x6
7101e9e220  cmp x25,w11, SXTW 
7101e9e224  b.lt 0x7101e9da6c
7101e9e228  ldrsw x8,[x21, #0xb4]
7101e9e22c  cmp w8,#0x13
7101e9e230  b.cs 0x7101e9e2a8
7101e9e234  add x8,x21,x8, LSL #0x2
7101e9e238  mov w9,#0x1
7101e9e23c  str w9,[x8, #0x68]
7101e9e240  add sp,sp,#0x1, LSL #12
7101e9e244  add sp,sp,#0x50
7101e9e248  ldp d9,d8,[sp, #0x30]
7101e9e24c  ldp d11,d10,[sp, #0x20]
7101e9e250  ldp d13,d12,[sp, #0x10]
7101e9e254  ldp x29,x30,[sp, #0x90]
7101e9e258  ldp x20,x19,[sp, #0x80]
7101e9e25c  ldp x22,x21,[sp, #0x70]
7101e9e260  ldp x24,x23,[sp, #0x60]
7101e9e264  ldp x26,x25,[sp, #0x50]
7101e9e268  ldp x28,x27,[sp, #0x40]
7101e9e26c  ldp d15,d14,[sp], #0xa0
7101e9e270  ret
7101e9e274  bl 0x71039c1330
7101e9e278  add x0,x8,#0x38
7101e9e27c  bl 0x71039c1330
7101e9e280  add x8,x9,x25, LSL #0x6
7101e9e284  add x0,x8,#0x8
7101e9e288  bl 0x71039c1330
7101e9e28c  add x0,x9,#0x38
7101e9e290  bl 0x71039c1330
7101e9e294  add x8,x8,x26, LSL #0x6
7101e9e298  add x0,x8,#0x8
7101e9e29c  bl 0x71039c1330
7101e9e2a0  sub x0,x29,#0xc0
7101e9e2a4  bl 0x71039c0c00
7101e9e2a8  bl 0x71039c2650
