// addr:      7102a7d870
// offset:    0x2a7d870
// name:      FUN_7102a7d870
// mangled:   
// size:      1052

7102a7d870  sub sp,sp,#0xa0
7102a7d874  stp x20,x19,[sp, #0x80]
7102a7d878  stp x29,x30,[sp, #0x90]
7102a7d87c  add x29,sp,#0x90
7102a7d880  mov x19,x0
7102a7d884  bl 0x71025d9250
7102a7d888  ldr x8,[x19, #0x300]
7102a7d88c  ldr x8,[x8, #0x18]
7102a7d890  ldr x8,[x8]
7102a7d894  mov x9,#0xdf99
7102a7d898  movk x9,#0xb569, LSL #16
7102a7d89c  movk x9,#0x7, LSL #32
7102a7d8a0  b 0x7102a7d8a8
7102a7d8a4  add x8,x8,#0x8
7102a7d8a8  ldr x10,[x8]
7102a7d8ac  ldr x11,[x10, #0xa0]
7102a7d8b0  and x11,x11,#0xffffffffff
7102a7d8b4  cmp x11,x9
7102a7d8b8  b.ne 0x7102a7d8a4
7102a7d8bc  adrp x8,0x7105314000
7102a7d8c0  add x8,x8,#0x4d8
7102a7d8c4  ldr x20,[x10, #0x130]
7102a7d8c8  ldarb w8,[x8]
7102a7d8cc  tbz w8,#0x0,0x7102a7dc48
7102a7d8d0  adrp x8,0x71052c5000
7102a7d8d4  ldrb w8,[x8, #0x1ba]
7102a7d8d8  adrp x2,0x7104410000
7102a7d8dc  add x2,x2,#0xc4b
7102a7d8e0  ldp x0,x1,[x20]
7102a7d8e4  cbz w8,0x7102a7d8f0
7102a7d8e8  bl 0x71025f5420
7102a7d8ec  b 0x7102a7d8f4
7102a7d8f0  bl 0x71025f55b0
7102a7d8f4  mov w0,#0x10
7102a7d8f8  mov w1,#0x40
7102a7d8fc  bl 0x710392e290
7102a7d900  mov x20,x0
7102a7d904  cbnz x0,0x7102a7d950
7102a7d908  adrp x8,0x7105332000
7102a7d90c  ldr x0,[x8, #0xf00]
7102a7d910  cbz x0,0x7102a7d94c
7102a7d914  mov w8,#0x40
7102a7d918  stur wzr,[x29, #-0x30]
7102a7d91c  sub x1,x29,#0x30
7102a7d920  str x8,[sp]
7102a7d924  ldr x8,[x0]
7102a7d928  ldr x8,[x8, #0x30]
7102a7d92c  mov x2,sp
7102a7d930  blr x8
7102a7d934  tbz w0,#0x0,0x7102a7d94c
7102a7d938  mov w0,#0x10
7102a7d93c  mov w1,#0x40
7102a7d940  bl 0x710392e290
7102a7d944  mov x20,x0
7102a7d948  cbnz x0,0x7102a7d950
7102a7d94c  mov x20,xzr
7102a7d950  add x8,x19,#0x738
7102a7d954  ldr x9,[x19, #0x338]
7102a7d958  str x8,[x20]
7102a7d95c  adrp x8,0x71052a8000
7102a7d960  ldr x8,[x8, #0xa80]
7102a7d964  ldr q0,[x8]
7102a7d968  mov w0,#0xffffffff
7102a7d96c  str x9,[x20, #0x28]
7102a7d970  str w0,[x20, #0x30]
7102a7d974  str q0,[x20, #0x10]
7102a7d978  strh wzr,[x20, #0x24]
7102a7d97c  str wzr,[x20, #0x20]
7102a7d980  str xzr,[sp]
7102a7d984  ldr x8,[x9]
7102a7d988  ldr x8,[x8, #0x8]
7102a7d98c  cbz x8,0x7102a7d9a0
7102a7d990  mov x1,sp
7102a7d994  mov x0,x8
7102a7d998  mov w2,wzr
7102a7d99c  bl 0x7102405040
7102a7d9a0  str w0,[x20, #0x30]
7102a7d9a4  ldr x0,[x19, #0xac0]
7102a7d9a8  str x20,[x19, #0xac0]
7102a7d9ac  cbz x0,0x7102a7d9b4
7102a7d9b0  bl 0x710392eb40
7102a7d9b4  ldr x9,[x19, #0x308]
7102a7d9b8  ldp x11,x10,[x9, #0x150]
7102a7d9bc  stur x10,[x29, #-0x18]
7102a7d9c0  ldp x10,x8,[x9, #0x140]
7102a7d9c4  stp x8,x11,[x29, #-0x28]
7102a7d9c8  stur x10,[x29, #-0x30]
7102a7d9cc  movi d7,#0x0
7102a7d9d0  mov v16.16B,v7.16B
7102a7d9d4  ldr q4,[x9, #0x160]
7102a7d9d8  ldp x8,x10,[x9, #0x170]
7102a7d9dc  ldr w11,[x9, #0x180]
7102a7d9e0  str w11,[sp, #0x50]
7102a7d9e4  stp x8,x10,[sp, #0x40]
7102a7d9e8  ldp x8,x10,[x9, #0x188]
7102a7d9ec  ldr x11,[x9, #0x198]
7102a7d9f0  mov v16.S[0x0],v4.S[0x2]
7102a7d9f4  str x8,[sp, #0x28]
7102a7d9f8  stp x10,x11,[sp, #0x30]
7102a7d9fc  ldr x10,[x9, #0x200]
7102a7da00  ldp q0,q1,[x9, #0x1a0]
7102a7da04  mov v4.D[0x1],v16.D[0x0]
7102a7da08  mov v16.16B,v7.16B
7102a7da0c  ldp q2,q3,[x9, #0x1c0]
7102a7da10  mov v16.S[0x0],v0.S[0x2]
7102a7da14  ldr w8,[x9, #0x1e0]
7102a7da18  mov v0.D[0x1],v16.D[0x0]
7102a7da1c  mov v16.16B,v7.16B
7102a7da20  mov v16.S[0x0],v1.S[0x2]
7102a7da24  ldr q5,[x9, #0x1f0]
7102a7da28  str x10,[sp]
7102a7da2c  ldr x11,[x9, #0x208]
7102a7da30  ldr w10,[x9, #0x220]
7102a7da34  mov v1.D[0x1],v16.D[0x0]
7102a7da38  mov v16.16B,v7.16B
7102a7da3c  ldr x12,[x9, #0x218]
7102a7da40  str x11,[sp, #0x8]
7102a7da44  ldr x11,[x9, #0x210]
7102a7da48  mov v16.S[0x0],v2.S[0x2]
7102a7da4c  str w10,[sp, #0x20]
7102a7da50  stp x11,x12,[sp, #0x10]
7102a7da54  ldur x11,[x29, #-0x28]
7102a7da58  ldr s6,[x19, #0x790]
7102a7da5c  ldur w10,[x29, #-0x20]
7102a7da60  str x11,[x9, #0x268]
7102a7da64  ldur x11,[x29, #-0x30]
7102a7da68  scvtf s6,s6
7102a7da6c  str w10,[x9, #0x270]
7102a7da70  str x11,[x9, #0x260]
7102a7da74  mov v2.D[0x1],v16.D[0x0]
7102a7da78  mov v16.16B,v7.16B
7102a7da7c  mov v7.S[0x0],v5.S[0x2]
7102a7da80  mov v16.S[0x0],v3.S[0x2]
7102a7da84  str q4,[x9, #0x280]
7102a7da88  ldr x11,[sp, #0x48]
7102a7da8c  ldr w10,[sp, #0x50]
7102a7da90  str x11,[x9, #0x298]
7102a7da94  ldr x11,[sp, #0x40]
7102a7da98  str w10,[x9, #0x2a0]
7102a7da9c  str x11,[x9, #0x290]
7102a7daa0  mov v5.D[0x1],v7.D[0x0]
7102a7daa4  str s6,[x9, #0x2a4]
7102a7daa8  mov v3.D[0x1],v16.D[0x0]
7102a7daac  ldrb w12,[sp, #0x38]
7102a7dab0  ldp x10,x11,[sp, #0x28]
7102a7dab4  strb w12,[x9, #0x2b8]
7102a7dab8  stp q0,q1,[x9, #0x2c0]
7102a7dabc  str x11,[x9, #0x2b0]
7102a7dac0  stp q2,q3,[x9, #0x2e0]
7102a7dac4  str x10,[x9, #0x2a8]
7102a7dac8  str w8,[x9, #0x300]
7102a7dacc  str q5,[x9, #0x310]
7102a7dad0  ldr x10,[sp]
7102a7dad4  str x10,[x9, #0x320]
7102a7dad8  ldr x12,[sp, #0x18]
7102a7dadc  ldp x10,x11,[sp, #0x8]
7102a7dae0  ldr w13,[sp, #0x20]
7102a7dae4  str w13,[x9, #0x340]
7102a7dae8  str x12,[x9, #0x338]
7102a7daec  str x11,[x9, #0x330]
7102a7daf0  str x10,[x9, #0x328]
7102a7daf4  adrp x10,0x710532a000
7102a7daf8  ldr x10,[x10, #0x9d8]
7102a7dafc  ldr x10,[x10]
7102a7db00  ldr x11,[x10, #0x1c0]
7102a7db04  mov x10,x11
7102a7db08  ldr x9,[x9, #0x8]
7102a7db0c  ldr x12,[x10, #0x50]!
7102a7db10  cbz x12,0x7102a7db54
7102a7db14  add x13,x11,#0x50
7102a7db18  b 0x7102a7db24
7102a7db1c  mov x13,x12
7102a7db20  mov x12,x14
7102a7db24  ldr x14,[x12, #0x20]
7102a7db28  cmp x14,x9
7102a7db2c  b.ls 0x7102a7db40
7102a7db30  ldr x14,[x12]
7102a7db34  mov x13,x12
7102a7db38  cbnz x14,0x7102a7db1c
7102a7db3c  b 0x7102a7db58
7102a7db40  b.cs 0x7102a7db58
7102a7db44  ldr x14,[x12, #0x8]!
7102a7db48  mov x13,x12
7102a7db4c  cbnz x14,0x7102a7db1c
7102a7db50  b 0x7102a7db58
7102a7db54  mov x13,x10
7102a7db58  ldr x12,[x13]
7102a7db5c  ldp x14,x13,[x29, #-0x30]
7102a7db60  ldr x12,[x12, #0x28]
7102a7db64  ldur w15,[x29, #-0x20]
7102a7db68  str w15,[x12, #0xd0]
7102a7db6c  str q4,[x12, #0xe0]
7102a7db70  stp x14,x13,[x12, #0xc0]
7102a7db74  ldr w15,[sp, #0x50]
7102a7db78  ldp x13,x14,[sp, #0x40]
7102a7db7c  str w15,[x12, #0x100]
7102a7db80  stp x13,x14,[x12, #0xf0]
7102a7db84  str s6,[x12, #0x104]
7102a7db88  ldp x13,x14,[sp, #0x28]
7102a7db8c  ldrb w15,[sp, #0x38]
7102a7db90  strb w15,[x12, #0x118]
7102a7db94  stp x13,x14,[x12, #0x108]
7102a7db98  stp q0,q1,[x12, #0x120]
7102a7db9c  str w8,[x12, #0x160]
7102a7dba0  stp q2,q3,[x12, #0x140]
7102a7dba4  str q5,[x12, #0x170]
7102a7dba8  ldr x8,[sp]
7102a7dbac  str x8,[x12, #0x180]
7102a7dbb0  ldr x14,[sp, #0x18]
7102a7dbb4  ldp x8,x13,[sp, #0x8]
7102a7dbb8  ldr w15,[sp, #0x20]
7102a7dbbc  str w15,[x12, #0x1a0]
7102a7dbc0  stp x13,x14,[x12, #0x190]
7102a7dbc4  str x8,[x12, #0x188]
7102a7dbc8  ldr x8,[x11, #0x20]
7102a7dbcc  cmp x8,x9
7102a7dbd0  b.ne 0x7102a7dc38
7102a7dbd4  ldr x8,[x10]
7102a7dbd8  cbz x8,0x7102a7dc18
7102a7dbdc  add x10,x11,#0x50
7102a7dbe0  b 0x7102a7dbec
7102a7dbe4  mov x10,x8
7102a7dbe8  mov x8,x11
7102a7dbec  ldr x11,[x8, #0x20]
7102a7dbf0  cmp x11,x9
7102a7dbf4  b.ls 0x7102a7dc08
7102a7dbf8  ldr x11,[x8]
7102a7dbfc  mov x10,x8
7102a7dc00  cbnz x11,0x7102a7dbe4
7102a7dc04  b 0x7102a7dc18
7102a7dc08  b.cs 0x7102a7dc18
7102a7dc0c  ldr x11,[x8, #0x8]!
7102a7dc10  mov x10,x8
7102a7dc14  cbnz x11,0x7102a7dbe4
7102a7dc18  ldr x8,[x10]
7102a7dc1c  ldr x8,[x8, #0x28]
7102a7dc20  ldr x0,[x8, #0x1d0]
7102a7dc24  cbz x0,0x7102a7dc88
7102a7dc28  add x1,x8,#0xc0
7102a7dc2c  ldr x8,[x0]
7102a7dc30  ldr x8,[x8, #0x30]
7102a7dc34  blr x8
7102a7dc38  ldp x29,x30,[sp, #0x90]
7102a7dc3c  ldp x20,x19,[sp, #0x80]
7102a7dc40  add sp,sp,#0xa0
7102a7dc44  ret
7102a7dc48  adrp x0,0x7105314000
7102a7dc4c  add x0,x0,#0x4d8
7102a7dc50  bl 0x71039c06b0
7102a7dc54  cbz w0,0x7102a7d8d0
7102a7dc58  bl 0x7101764000
7102a7dc5c  adrp x0,0x7101763000
7102a7dc60  add x0,x0,#0xc40
7102a7dc64  adrp x1,0x71052c5000
7102a7dc68  add x1,x1,#0x180
7102a7dc6c  adrp x2,0x7104f17000
7102a7dc70  add x2,x2,#0x0
7102a7dc74  bl 0x71000001c0
7102a7dc78  adrp x0,0x7105314000
7102a7dc7c  add x0,x0,#0x4d8
7102a7dc80  bl 0x71039c06c0
7102a7dc84  b 0x7102a7d8d0
7102a7dc88  bl 0x71039c2650
