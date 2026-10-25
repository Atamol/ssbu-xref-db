// addr:      7101d5d640
// offset:    0x1d5d640
// name:      FUN_7101d5d640
// mangled:   
// size:      15904

7101d5d640  str d12,[sp, #-0x90]!
7101d5d644  stp d11,d10,[sp, #0x10]
7101d5d648  stp d9,d8,[sp, #0x20]
7101d5d64c  stp x28,x27,[sp, #0x30]
7101d5d650  stp x26,x25,[sp, #0x40]
7101d5d654  stp x24,x23,[sp, #0x50]
7101d5d658  stp x22,x21,[sp, #0x60]
7101d5d65c  stp x20,x19,[sp, #0x70]
7101d5d660  stp x29,x30,[sp, #0x80]
7101d5d664  add x29,sp,#0x80
7101d5d668  sub sp,sp,#0x170
7101d5d66c  adrp x8,0x710532f000
7101d5d670  ldr x8,[x8, #0x730]
7101d5d674  ldr x8,[x8, #0x8]
7101d5d678  ldr x28,[x0, #0x80]
7101d5d67c  fmov s8,0x3f800000
7101d5d680  mov x24,#0x5c66
7101d5d684  movk x24,#0x8be9, LSL #16
7101d5d688  movk x24,#0xa, LSL #32
7101d5d68c  mov x22,xzr
7101d5d690  stp x0,x8,[sp, #0x40]
7101d5d694  add x8,sp,#0x50
7101d5d698  adrp x23,0x710523d000
7101d5d69c  add x23,x23,#0x9a8
7101d5d6a0  adrp x27,0x7104742000
7101d5d6a4  add x27,x27,#0xdbb
7101d5d6a8  adrp x21,0x71044fa000
7101d5d6ac  add x21,x21,#0xe98
7101d5d6b0  stur x28,[x29, #-0x78]
7101d5d6b4  add x25,x8,#0x8
7101d5d6b8  b 0x7101d5d6d4
7101d5d6bc  add x8,sp,#0x50
7101d5d6c0  adrp x0,0x71042e5000
7101d5d6c4  add x0,x0,#0x7c8
7101d5d6c8  mov w1,w28
7101d5d6cc  bl 0x71003a4ca0
7101d5d6d0  b 0x7101d5d914
7101d5d6d4  add x26,x28,x22, LSL #0x8
7101d5d6d8  ldr w8,[x26, #0x118]
7101d5d6dc  cmp w8,#0x3
7101d5d6e0  b.ne 0x7101d5d728
7101d5d6e4  ldr w8,[x26, #0x134]
7101d5d6e8  cmp w8,#0x1
7101d5d6ec  b.lt 0x7101d5db40
7101d5d6f0  add x0,x26,#0x120
7101d5d6f4  add x8,sp,#0x50
7101d5d6f8  adrp x1,0x710437c000
7101d5d6fc  add x1,x1,#0x884
7101d5d700  add x20,x26,#0x134
7101d5d704  bl 0x7103776640
7101d5d708  ldr x19,[sp, #0x58]
7101d5d70c  mov v0.16B,v8.16B
7101d5d710  adrp x1,0x710428f000
7101d5d714  add x1,x1,#0xf7d
7101d5d718  mov x0,x19
7101d5d71c  bl 0x7103778300
7101d5d720  str wzr,[x20]
7101d5d724  b 0x7101d5db18
7101d5d728  ldr w28,[x26, #0x130]
7101d5d72c  tbnz w28,#0x1f,0x7101d5dad0
7101d5d730  ldr x8,[sp, #0x48]
7101d5d734  ldr x20,[x8, #0x308]
7101d5d738  ldr x1,[x20, #0x8]
7101d5d73c  ldr x8,[x1, #0x20]
7101d5d740  ldrb w9,[x8]
7101d5d744  cmp w9,#0xc
7101d5d748  mov x9,x27
7101d5d74c  b.ne 0x7101d5d7cc
7101d5d750  ldur w9,[x8, #0x1]
7101d5d754  subs w9,w9,#0x1
7101d5d758  b.lt 0x7101d5d7c8
7101d5d75c  ldr x14,[x1, #0x18]
7101d5d760  ldr x11,[x1, #0x48]
7101d5d764  mov w10,wzr
7101d5d768  ldursw x13,[x8, #0x5]
7101d5d76c  and x11,x11,#0xffffffffff
7101d5d770  ldp x12,x14,[x14, #0x20]
7101d5d774  add x13,x14,x13
7101d5d778  add w14,w9,w10
7101d5d77c  cmp w14,#0x0
7101d5d780  cinc w14,w14,lt
7101d5d784  asr w14,w14,#0x1
7101d5d788  add x15,x13,w14, SXTW  #0x3
7101d5d78c  ldr w16,[x15]
7101d5d790  ldr x16,[x12, x16, LSL #0x3]
7101d5d794  cmp x16,x11
7101d5d798  b.eq 0x7101d5d7b8
7101d5d79c  sub w15,w14,#0x1
7101d5d7a0  cmp x16,x11
7101d5d7a4  csel w9,w15,w9,hi
7101d5d7a8  csinc w10,w10,w14,hi
7101d5d7ac  cmp w10,w9
7101d5d7b0  b.le 0x7101d5d778
7101d5d7b4  b 0x7101d5d7c8
7101d5d7b8  ldrsw x9,[x15, #0x4]
7101d5d7bc  tbnz w9,#0x1f,0x7101d5d7c8
7101d5d7c0  add x9,x8,x9
7101d5d7c4  b 0x7101d5d7cc
7101d5d7c8  mov x9,x27
7101d5d7cc  ldrb w8,[x9]
7101d5d7d0  sub w8,w8,#0xb
7101d5d7d4  cmp w8,#0x1
7101d5d7d8  b.hi 0x7101d5d90c
7101d5d7dc  ldur w23,[x9, #0x1]
7101d5d7e0  cmp w23,#0x1
7101d5d7e4  b.lt 0x7101d5d90c
7101d5d7e8  mov w19,wzr
7101d5d7ec  b 0x7101d5d7f4
7101d5d7f0  ldr x1,[x20, #0x8]
7101d5d7f4  add x0,sp,#0xd8
7101d5d7f8  mov w2,w19
7101d5d7fc  bl 0x710326a3e0
7101d5d800  ldr x8,[sp, #0xe0]
7101d5d804  ldrb w9,[x8]
7101d5d808  cmp w9,#0xc
7101d5d80c  mov x9,x27
7101d5d810  b.ne 0x7101d5d888
7101d5d814  ldur w9,[x8, #0x1]
7101d5d818  subs w9,w9,#0x1
7101d5d81c  b.lt 0x7101d5d884
7101d5d820  ldr x13,[sp, #0xd8]
7101d5d824  ldursw x12,[x8, #0x5]
7101d5d828  mov w10,wzr
7101d5d82c  ldp x11,x13,[x13, #0x20]
7101d5d830  add x12,x13,x12
7101d5d834  add w13,w9,w10
7101d5d838  cmp w13,#0x0
7101d5d83c  cinc w13,w13,lt
7101d5d840  asr w13,w13,#0x1
7101d5d844  add x14,x12,w13, SXTW  #0x3
7101d5d848  ldr w15,[x14]
7101d5d84c  ldr x15,[x11, x15, LSL #0x3]
7101d5d850  cmp x15,x24
7101d5d854  b.eq 0x7101d5d874
7101d5d858  sub w14,w13,#0x1
7101d5d85c  cmp x15,x24
7101d5d860  csel w9,w14,w9,hi
7101d5d864  csinc w10,w10,w13,hi
7101d5d868  cmp w10,w9
7101d5d86c  b.le 0x7101d5d834
7101d5d870  b 0x7101d5d884
7101d5d874  ldrsw x9,[x14, #0x4]
7101d5d878  tbnz w9,#0x1f,0x7101d5d884
7101d5d87c  add x9,x8,x9
7101d5d880  b 0x7101d5d888
7101d5d884  mov x9,x27
7101d5d888  ldrb w8,[x9]
7101d5d88c  sub w8,w8,#0x1
7101d5d890  cmp w8,#0x6
7101d5d894  b.hi 0x7101d5d8c4
7101d5d898  ldrsw x8,[x21, x8, LSL #0x2]
7101d5d89c  add x8,x8,x21
7101d5d8a0  br x8
7101d5d8a4  ldrb w8,[x9, #0x1]
7101d5d8a8  cmp w8,w28
7101d5d8ac  b.ne 0x7101d5d900
7101d5d8b0  b 0x7101d5d6bc
7101d5d8b4  ldur w8,[x9, #0x1]
7101d5d8b8  cmp w8,w28
7101d5d8bc  b.ne 0x7101d5d900
7101d5d8c0  b 0x7101d5d6bc
7101d5d8c4  mov w8,wzr
7101d5d8c8  cmp w8,w28
7101d5d8cc  b.ne 0x7101d5d900
7101d5d8d0  b 0x7101d5d6bc
7101d5d8d4  ldursh w8,[x9, #0x1]
7101d5d8d8  cmp w8,w28
7101d5d8dc  b.ne 0x7101d5d900
7101d5d8e0  b 0x7101d5d6bc
7101d5d8e4  ldrsb w8,[x9, #0x1]
7101d5d8e8  cmp w8,w28
7101d5d8ec  b.ne 0x7101d5d900
7101d5d8f0  b 0x7101d5d6bc
7101d5d8f4  ldurh w8,[x9, #0x1]
7101d5d8f8  cmp w8,w28
7101d5d8fc  b.eq 0x7101d5d6bc
7101d5d900  add w19,w19,#0x1
7101d5d904  cmp w19,w23
7101d5d908  b.lt 0x7101d5d7f0
7101d5d90c  strb wzr,[sp, #0x58]
7101d5d910  str xzr,[sp, #0x50]
7101d5d914  adrp x19,0x710593b000
7101d5d918  ldr x8,[x19, #0xc60]
7101d5d91c  ldr x0,[x8]
7101d5d920  mov x1,x25
7101d5d924  mov x28,x25
7101d5d928  bl 0x71037a4570
7101d5d92c  adrp x23,0x710523d000
7101d5d930  add x23,x23,#0x9a8
7101d5d934  tbz w0,#0x0,0x7101d5d9c0
7101d5d938  ldr x8,[x19, #0xc60]
7101d5d93c  ldr x0,[x8]
7101d5d940  mov x1,x28
7101d5d944  bl 0x71037a4450
7101d5d948  cbz x0,0x7101d5d9c0
7101d5d94c  ldrh w9,[x0]
7101d5d950  cmp w9,#0x0
7101d5d954  cset w19,ne
7101d5d958  cbz w9,0x7101d5d9c4
7101d5d95c  mov w8,wzr
7101d5d960  mov x10,x0
7101d5d964  orr w11,w9,#0x1
7101d5d968  and w9,w9,#0xffff
7101d5d96c  and w11,w11,#0xffff
7101d5d970  cmp w11,#0xf
7101d5d974  b.ne 0x7101d5d990
7101d5d978  cmp w9,#0xe
7101d5d97c  b.ne 0x7101d5d9a0
7101d5d980  ldrh w9,[x10, #0x6]
7101d5d984  lsr w9,w9,#0x1
7101d5d988  add w9,w9,#0x4
7101d5d98c  b 0x7101d5d9ac
7101d5d990  cmp w9,#0xa
7101d5d994  mov w9,#0x1
7101d5d998  cinc w19,w19,eq
7101d5d99c  b 0x7101d5d9ac
7101d5d9a0  cmp w9,#0xf
7101d5d9a4  orr w9,wzr,#0x3
7101d5d9a8  csel w9,w9,wzr,eq
7101d5d9ac  add w8,w9,w8
7101d5d9b0  add x10,x0,w8, UXTW  #0x1
7101d5d9b4  ldrh w9,[x10]
7101d5d9b8  cbnz w9,0x7101d5d964
7101d5d9bc  b 0x7101d5d9c4
7101d5d9c0  mov w19,wzr
7101d5d9c4  add x0,x26,#0x120
7101d5d9c8  add x8,sp,#0xd8
7101d5d9cc  adrp x1,0x710437c000
7101d5d9d0  add x1,x1,#0x884
7101d5d9d4  add x20,x26,#0x130
7101d5d9d8  bl 0x7103776640
7101d5d9dc  ldr x0,[sp, #0xe0]
7101d5d9e0  mov v0.16B,v8.16B
7101d5d9e4  adrp x1,0x7104421000
7101d5d9e8  add x1,x1,#0x55
7101d5d9ec  bl 0x7103778300
7101d5d9f0  sub w2,w19,#0x1
7101d5d9f4  add x0,sp,#0xd8
7101d5d9f8  adrp x1,0x710425f000
7101d5d9fc  add x1,x1,#0x7a3
7101d5da00  bl 0x7103778430
7101d5da04  mov x1,#0xd45d
7101d5da08  movk x1,#0x39a9, LSL #16
7101d5da0c  sub x0,x29,#0xd8
7101d5da10  movk x1,#0x18, LSL #32
7101d5da14  bl 0x71024076d0
7101d5da18  adrp x8,0x7104f73000
7101d5da1c  add x8,x8,#0xd50
7101d5da20  stur x8,[x29, #-0xd0]
7101d5da24  ldur x8,[x29, #-0xc8]
7101d5da28  cbz x8,0x7101d5da64
7101d5da2c  adrp x9,0x7106dd5000
7101d5da30  ldrb w9,[x9, #0x3a8]
7101d5da34  cmp w9,#0x1
7101d5da38  b.ne 0x7101d5da64
7101d5da3c  adrp x10,0x7106dd5000
7101d5da40  ldur w9,[x29, #-0xc0]
7101d5da44  ldr w10,[x10, #0x3ac]
7101d5da48  cmp w9,w10
7101d5da4c  b.ne 0x7101d5da64
7101d5da50  ldr wzr,[x8, #0x38]!
7101d5da54  ldaxr w9,[x8]
7101d5da58  sub w9,w9,#0x1
7101d5da5c  stlxr w10,w9,[x8]
7101d5da60  cbnz w10,0x7101d5da54
7101d5da64  add x8,sp,#0x98
7101d5da68  add x0,sp,#0xd8
7101d5da6c  adrp x1,0x7104422000
7101d5da70  add x1,x1,#0xa43
7101d5da74  stur xzr,[x29, #-0xc8]
7101d5da78  sturb wzr,[x29, #-0xb8]
7101d5da7c  bl 0x7103776910
7101d5da80  add x0,sp,#0x98
7101d5da84  mov x1,x28
7101d5da88  bl 0x710377a120
7101d5da8c  mov w8,#0xffffffff
7101d5da90  str w8,[x20]
7101d5da94  ldr x0,[sp, #0xa0]
7101d5da98  stp x23,xzr,[sp, #0x98]
7101d5da9c  cbz x0,0x7101d5daa4
7101d5daa0  bl 0x710392eb40
7101d5daa4  ldr x19,[sp, #0xe0]
7101d5daa8  adrp x8,0x710523d000
7101d5daac  add x8,x8,#0x988
7101d5dab0  stp x8,xzr,[sp, #0xd8]
7101d5dab4  cbz x19,0x7101d5dad0
7101d5dab8  ldr x0,[x19, #0x18]
7101d5dabc  stp x23,xzr,[x19, #0x10]
7101d5dac0  cbz x0,0x7101d5dac8
7101d5dac4  bl 0x710392eb40
7101d5dac8  mov x0,x19
7101d5dacc  bl 0x710392eb40
7101d5dad0  ldr w8,[x26, #0x134]
7101d5dad4  ldur x28,[x29, #-0x78]
7101d5dad8  subs w8,w8,#0x1
7101d5dadc  b.lt 0x7101d5db40
7101d5dae0  add x9,x26,#0x134
7101d5dae4  str w8,[x9]
7101d5dae8  b.ne 0x7101d5db40
7101d5daec  add x0,x26,#0x120
7101d5daf0  add x8,sp,#0x50
7101d5daf4  adrp x1,0x710437c000
7101d5daf8  add x1,x1,#0x884
7101d5dafc  bl 0x7103776640
7101d5db00  ldr x19,[sp, #0x58]
7101d5db04  mov v0.16B,v8.16B
7101d5db08  adrp x1,0x710428f000
7101d5db0c  add x1,x1,#0xf7d
7101d5db10  mov x0,x19
7101d5db14  bl 0x7103778300
7101d5db18  adrp x8,0x710523d000
7101d5db1c  add x8,x8,#0x988
7101d5db20  stp x8,xzr,[sp, #0x50]
7101d5db24  cbz x19,0x7101d5db40
7101d5db28  ldr x0,[x19, #0x18]
7101d5db2c  stp x23,xzr,[x19, #0x10]
7101d5db30  cbz x0,0x7101d5db38
7101d5db34  bl 0x710392eb40
7101d5db38  mov x0,x19
7101d5db3c  bl 0x710392eb40
7101d5db40  add x22,x22,#0x1
7101d5db44  cmp x22,#0x8
7101d5db48  b.ne 0x7101d5d6d4
7101d5db4c  ldr x8,[sp, #0x40]
7101d5db50  ldr x27,[x8, #0x80]
7101d5db54  adrp x8,0x7104472000
7101d5db58  ldr s9,[x8, #0x398]
7101d5db5c  adrp x8,0x7104472000
7101d5db60  ldr s10,[x8, #0x590]
7101d5db64  fmov s8,wzr
7101d5db68  mov x19,xzr
7101d5db6c  adrp x28,0x71052cc000
7101d5db70  adrp x22,0x7105339000
7101d5db74  add x22,x22,#0x830
7101d5db78  adrp x25,0x7105339000
7101d5db7c  adrp x23,0x7105339000
7101d5db80  adrp x24,0x7105339000
7101d5db84  b 0x7101d5e270
7101d5db88  ldr w10,[x20, #0x188]
7101d5db8c  add x8,x20,#0x188
7101d5db90  cbz w10,0x7101d5dd00
7101d5db94  cmp w10,#0x2
7101d5db98  b.eq 0x7101d5de10
7101d5db9c  cmp w10,#0x1
7101d5dba0  b.ne 0x7101d5e584
7101d5dba4  ldr s0,[x20, #0x178]
7101d5dba8  fcmp s0,#0.0
7101d5dbac  b.ne 0x7101d5de84
7101d5dbb0  adrp x10,0x71052c3000
7101d5dbb4  ldr x10,[x10, #0x600]
7101d5dbb8  ldr x13,[x10, #0x8]
7101d5dbbc  ldr x10,[x13, #0x10]
7101d5dbc0  ldrb w11,[x10]
7101d5dbc4  mov x18,#0xa94e
7101d5dbc8  movk x18,#0xb960, LSL #16
7101d5dbcc  movk x18,#0x15, LSL #32
7101d5dbd0  cmp w11,#0xc
7101d5dbd4  adrp x11,0x7104742000
7101d5dbd8  add x11,x11,#0xdbb
7101d5dbdc  b.ne 0x7101d5e0e8
7101d5dbe0  ldur w11,[x10, #0x1]
7101d5dbe4  subs w11,w11,#0x1
7101d5dbe8  b.lt 0x7101d5e0e0
7101d5dbec  ldr x15,[x13, #0x8]
7101d5dbf0  ldursw x14,[x10, #0x5]
7101d5dbf4  mov w12,wzr
7101d5dbf8  ldp x13,x15,[x15, #0x20]
7101d5dbfc  add x14,x15,x14
7101d5dc00  add w15,w11,w12
7101d5dc04  cmp w15,#0x0
7101d5dc08  cinc w15,w15,lt
7101d5dc0c  asr w15,w15,#0x1
7101d5dc10  add x16,x14,w15, SXTW  #0x3
7101d5dc14  ldr w17,[x16]
7101d5dc18  ldr x17,[x13, x17, LSL #0x3]
7101d5dc1c  cmp x17,x18
7101d5dc20  b.eq 0x7101d5e0d0
7101d5dc24  sub w16,w15,#0x1
7101d5dc28  cmp x17,x18
7101d5dc2c  csel w11,w16,w11,hi
7101d5dc30  csinc w12,w12,w15,hi
7101d5dc34  cmp w12,w11
7101d5dc38  b.le 0x7101d5dc00
7101d5dc3c  b 0x7101d5e0e0
7101d5dc40  mov w8,#0x1
7101d5dc44  str w8,[x26]
7101d5dc48  ldr s12,[x20, #0x17c]
7101d5dc4c  ldr s11,[x20, #0x178]
7101d5dc50  add x21,x20,#0x178
7101d5dc54  adrp x8,0x71052c3000
7101d5dc58  ldr x8,[x8, #0x600]
7101d5dc5c  ldr x0,[x8, #0x8]
7101d5dc60  bl 0x710149e570
7101d5dc64  fcmp s11,#0.0
7101d5dc68  b.lt 0x7101d5e08c
7101d5dc6c  fcmp s11,s12
7101d5dc70  b.hi 0x7101d5e08c
7101d5dc74  ucvtf s0,w0
7101d5dc78  fmul s0,s0,s9
7101d5dc7c  fdiv s0,s12,s0
7101d5dc80  ldrb w8,[x20, #0x144]
7101d5dc84  cbz w8,0x7101d5dccc
7101d5dc88  ldr x8,[x20, #0x160]
7101d5dc8c  ldr x8,[x8, #0x8]
7101d5dc90  cbz x8,0x7101d5dca8
7101d5dc94  ldr x8,[x8, #0x18]
7101d5dc98  cbz x8,0x7101d5dca8
7101d5dc9c  ldrb w9,[x8, #0x58]
7101d5dca0  orr w9,w9,#0x1
7101d5dca4  strb w9,[x8, #0x58]
7101d5dca8  ldr x8,[x20, #0x170]
7101d5dcac  ldr x8,[x8, #0x8]
7101d5dcb0  cbz x8,0x7101d5dcc8
7101d5dcb4  ldr x8,[x8, #0x18]
7101d5dcb8  cbz x8,0x7101d5dcc8
7101d5dcbc  ldrb w9,[x8, #0x58]
7101d5dcc0  orr w9,w9,#0x1
7101d5dcc4  strb w9,[x8, #0x58]
7101d5dcc8  ldr s11,[x21]
7101d5dccc  fadd s0,s11,s0
7101d5dcd0  fcmp s0,#0.0
7101d5dcd4  str s0,[x21]
7101d5dcd8  b.ls 0x7101d5df20
7101d5dcdc  add x8,x20,#0x17c
7101d5dce0  ldr s1,[x8]
7101d5dce4  fcmp s0,s1
7101d5dce8  b.lt 0x7101d5df44
7101d5dcec  str s1,[x21]
7101d5dcf0  ldr x8,[x20, #0x170]
7101d5dcf4  ldr x8,[x8, #0x8]
7101d5dcf8  cbnz x8,0x7101d5df30
7101d5dcfc  b 0x7101d5df44
7101d5dd00  mov w9,#0x1
7101d5dd04  str w9,[x8]
7101d5dd08  adrp x8,0x71052c3000
7101d5dd0c  ldr x8,[x8, #0x600]
7101d5dd10  ldr x9,[x8, #0x8]
7101d5dd14  ldr x8,[x9, #0x10]
7101d5dd18  ldrb w10,[x8]
7101d5dd1c  mov x18,#0xb970
7101d5dd20  movk x18,#0xa0c, LSL #16
7101d5dd24  mov x0,#0xee75
7101d5dd28  movk x0,#0xd529, LSL #16
7101d5dd2c  movk x0,#0x12, LSL #32
7101d5dd30  cmp w10,#0xc
7101d5dd34  adrp x11,0x7104742000
7101d5dd38  add x11,x11,#0xdbb
7101d5dd3c  movk x18,#0x11, LSL #32
7101d5dd40  b.ne 0x7101d5df8c
7101d5dd44  ldur w11,[x8, #0x1]
7101d5dd48  subs w11,w11,#0x1
7101d5dd4c  b.lt 0x7101d5ddb0
7101d5dd50  ldr x15,[x9, #0x8]
7101d5dd54  ldursw x14,[x8, #0x5]
7101d5dd58  mov w12,wzr
7101d5dd5c  ldp x13,x15,[x15, #0x20]
7101d5dd60  add x14,x15,x14
7101d5dd64  add w15,w11,w12
7101d5dd68  cmp w15,#0x0
7101d5dd6c  cinc w15,w15,lt
7101d5dd70  asr w15,w15,#0x1
7101d5dd74  sbfiz x16,x15,#0x3,#0x20
7101d5dd78  ldr w16,[x14, x16, LSL #0x0]
7101d5dd7c  ldr x16,[x13, x16, LSL #0x3]
7101d5dd80  cmp x16,x0
7101d5dd84  b.eq 0x7101d5dda0
7101d5dd88  sub w17,w15,#0x1
7101d5dd8c  cmp x16,x0
7101d5dd90  csel w11,w17,w11,hi
7101d5dd94  csinc w12,w12,w15,hi
7101d5dd98  cmp w12,w11
7101d5dd9c  b.le 0x7101d5dd64
7101d5dda0  cmp w10,#0xc
7101d5dda4  adrp x11,0x7104742000
7101d5dda8  add x11,x11,#0xdbb
7101d5ddac  b.ne 0x7101d5df8c
7101d5ddb0  ldur w10,[x8, #0x1]
7101d5ddb4  subs w10,w10,#0x1
7101d5ddb8  b.lt 0x7101d5df84
7101d5ddbc  ldr x13,[x9, #0x8]
7101d5ddc0  ldursw x12,[x8, #0x5]
7101d5ddc4  mov w11,wzr
7101d5ddc8  ldp x9,x13,[x13, #0x20]
7101d5ddcc  add x12,x13,x12
7101d5ddd0  add w13,w10,w11
7101d5ddd4  cmp w13,#0x0
7101d5ddd8  cinc w13,w13,lt
7101d5dddc  asr w13,w13,#0x1
7101d5dde0  add x14,x12,w13, SXTW  #0x3
7101d5dde4  ldr w15,[x14]
7101d5dde8  ldr x15,[x9, x15, LSL #0x3]
7101d5ddec  cmp x15,x18
7101d5ddf0  b.eq 0x7101d5df74
7101d5ddf4  sub w14,w13,#0x1
7101d5ddf8  cmp x15,x18
7101d5ddfc  csel w10,w14,w10,hi
7101d5de00  csinc w11,w11,w13,hi
7101d5de04  cmp w11,w10
7101d5de08  b.le 0x7101d5ddd0
7101d5de0c  b 0x7101d5df84
7101d5de10  ldr x9,[x20, #0x150]
7101d5de14  ldr s0,[x20, #0x178]
7101d5de18  str wzr,[x20, #0x178]
7101d5de1c  ldr x9,[x9]
7101d5de20  cbz x9,0x7101d5de40
7101d5de24  fsub s0,s8,s0
7101d5de28  ldr s1,[x9, #0x34]
7101d5de2c  fadd s0,s0,s1
7101d5de30  ldrb w10,[x9, #0x58]
7101d5de34  orr w10,w10,#0x10
7101d5de38  strb w10,[x9, #0x58]
7101d5de3c  str s0,[x9, #0x34]
7101d5de40  mov w9,#0x1
7101d5de44  str w9,[x8]
7101d5de48  b 0x7101d5e584
7101d5de4c  ldr s12,[x20, #0x17c]
7101d5de50  fcmp s11,s12
7101d5de54  b.ne 0x7101d5dc50
7101d5de58  adrp x8,0x71052c3000
7101d5de5c  ldr x8,[x8, #0x600]
7101d5de60  ldr x0,[x8, #0x8]
7101d5de64  bl 0x710149e570
7101d5de68  ucvtf s0,w0
7101d5de6c  fmul s0,s0,s10
7101d5de70  fcvtzu w8,s0
7101d5de74  str w8,[x21]
7101d5de78  mov w8,#0x2
7101d5de7c  str w8,[x26]
7101d5de80  b 0x7101d5e08c
7101d5de84  ldr s1,[x20, #0x17c]
7101d5de88  fcmp s0,s1
7101d5de8c  b.ne 0x7101d5dd08
7101d5de90  adrp x10,0x71052c3000
7101d5de94  ldr x10,[x10, #0x600]
7101d5de98  ldr x13,[x10, #0x8]
7101d5de9c  ldr x10,[x13, #0x10]
7101d5dea0  ldrb w11,[x10]
7101d5dea4  mov x18,#0xc349
7101d5dea8  movk x18,#0x6f41, LSL #16
7101d5deac  movk x18,#0x18, LSL #32
7101d5deb0  cmp w11,#0xc
7101d5deb4  adrp x11,0x7104742000
7101d5deb8  add x11,x11,#0xdbb
7101d5debc  b.ne 0x7101d5e15c
7101d5dec0  ldur w11,[x10, #0x1]
7101d5dec4  subs w11,w11,#0x1
7101d5dec8  b.lt 0x7101d5e154
7101d5decc  ldr x15,[x13, #0x8]
7101d5ded0  ldursw x14,[x10, #0x5]
7101d5ded4  mov w12,wzr
7101d5ded8  ldp x13,x15,[x15, #0x20]
7101d5dedc  add x14,x15,x14
7101d5dee0  add w15,w11,w12
7101d5dee4  cmp w15,#0x0
7101d5dee8  cinc w15,w15,lt
7101d5deec  asr w15,w15,#0x1
7101d5def0  add x16,x14,w15, SXTW  #0x3
7101d5def4  ldr w17,[x16]
7101d5def8  ldr x17,[x13, x17, LSL #0x3]
7101d5defc  cmp x17,x18
7101d5df00  b.eq 0x7101d5e144
7101d5df04  sub w16,w15,#0x1
7101d5df08  cmp x17,x18
7101d5df0c  csel w11,w16,w11,hi
7101d5df10  csinc w12,w12,w15,hi
7101d5df14  cmp w12,w11
7101d5df18  b.le 0x7101d5dee0
7101d5df1c  b 0x7101d5e154
7101d5df20  str wzr,[x21]
7101d5df24  ldr x8,[x20, #0x160]
7101d5df28  ldr x8,[x8, #0x8]
7101d5df2c  cbz x8,0x7101d5df44
7101d5df30  ldr x8,[x8, #0x18]
7101d5df34  cbz x8,0x7101d5df44
7101d5df38  ldrb w9,[x8, #0x58]
7101d5df3c  and w9,w9,#0xfe
7101d5df40  strb w9,[x8, #0x58]
7101d5df44  ldr x8,[x20, #0x150]
7101d5df48  ldr x8,[x8]
7101d5df4c  cbz x8,0x7101d5e08c
7101d5df50  ldr s0,[x21]
7101d5df54  ldr s1,[x8, #0x34]
7101d5df58  fsub s0,s0,s11
7101d5df5c  fadd s0,s0,s1
7101d5df60  ldrb w9,[x8, #0x58]
7101d5df64  orr w9,w9,#0x10
7101d5df68  strb w9,[x8, #0x58]
7101d5df6c  str s0,[x8, #0x34]
7101d5df70  b 0x7101d5e08c
7101d5df74  ldrsw x9,[x14, #0x4]
7101d5df78  tbnz w9,#0x1f,0x7101d5df84
7101d5df7c  add x11,x8,x9
7101d5df80  b 0x7101d5df8c
7101d5df84  adrp x11,0x7104742000
7101d5df88  add x11,x11,#0xdbb
7101d5df8c  ldrb w8,[x11]
7101d5df90  mov v1.16B,v8.16B
7101d5df94  cmp w8,#0x8
7101d5df98  b.ne 0x7101d5dfa0
7101d5df9c  ldur s1,[x11, #0x1]
7101d5dfa0  ldr s0,[x20, #0x178]
7101d5dfa4  fcmp s0,#0.0
7101d5dfa8  b.lt 0x7101d5e08c
7101d5dfac  ldr s2,[x20, #0x17c]
7101d5dfb0  fcmp s0,s2
7101d5dfb4  b.hi 0x7101d5e08c
7101d5dfb8  ldrb w9,[x20, #0x144]
7101d5dfbc  add x8,x20,#0x178
7101d5dfc0  cbz w9,0x7101d5e008
7101d5dfc4  ldr x9,[x20, #0x160]
7101d5dfc8  ldr x9,[x9, #0x8]
7101d5dfcc  cbz x9,0x7101d5dfe4
7101d5dfd0  ldr x9,[x9, #0x18]
7101d5dfd4  cbz x9,0x7101d5dfe4
7101d5dfd8  ldrb w10,[x9, #0x58]
7101d5dfdc  orr w10,w10,#0x1
7101d5dfe0  strb w10,[x9, #0x58]
7101d5dfe4  ldr x9,[x20, #0x170]
7101d5dfe8  ldr x9,[x9, #0x8]
7101d5dfec  cbz x9,0x7101d5e004
7101d5dff0  ldr x9,[x9, #0x18]
7101d5dff4  cbz x9,0x7101d5e004
7101d5dff8  ldrb w10,[x9, #0x58]
7101d5dffc  orr w10,w10,#0x1
7101d5e000  strb w10,[x9, #0x58]
7101d5e004  ldr s0,[x8]
7101d5e008  fadd s1,s0,s1
7101d5e00c  fcmp s1,#0.0
7101d5e010  str s1,[x8]
7101d5e014  b.ls 0x7101d5e03c
7101d5e018  add x9,x20,#0x17c
7101d5e01c  ldr s2,[x9]
7101d5e020  fcmp s1,s2
7101d5e024  b.lt 0x7101d5e060
7101d5e028  str s2,[x8]
7101d5e02c  ldr x9,[x20, #0x170]
7101d5e030  ldr x9,[x9, #0x8]
7101d5e034  cbnz x9,0x7101d5e04c
7101d5e038  b 0x7101d5e060
7101d5e03c  str wzr,[x8]
7101d5e040  ldr x9,[x20, #0x160]
7101d5e044  ldr x9,[x9, #0x8]
7101d5e048  cbz x9,0x7101d5e060
7101d5e04c  ldr x9,[x9, #0x18]
7101d5e050  cbz x9,0x7101d5e060
7101d5e054  ldrb w10,[x9, #0x58]
7101d5e058  and w10,w10,#0xfe
7101d5e05c  strb w10,[x9, #0x58]
7101d5e060  ldr x9,[x20, #0x150]
7101d5e064  ldr x9,[x9]
7101d5e068  cbz x9,0x7101d5e08c
7101d5e06c  ldr s1,[x8]
7101d5e070  ldr s2,[x9, #0x34]
7101d5e074  fsub s0,s1,s0
7101d5e078  fadd s0,s0,s2
7101d5e07c  ldrb w8,[x9, #0x58]
7101d5e080  orr w8,w8,#0x10
7101d5e084  strb w8,[x9, #0x58]
7101d5e088  str s0,[x9, #0x34]
7101d5e08c  ldr x8,[x20, #0x160]
7101d5e090  ldr x8,[x8, #0x8]
7101d5e094  cbz x8,0x7101d5e0ac
7101d5e098  ldr x8,[x8, #0x18]
7101d5e09c  cbz x8,0x7101d5e0ac
7101d5e0a0  ldrb w9,[x8, #0x58]
7101d5e0a4  and w9,w9,#0xfe
7101d5e0a8  strb w9,[x8, #0x58]
7101d5e0ac  ldr x8,[x20, #0x170]
7101d5e0b0  ldr x8,[x8, #0x8]
7101d5e0b4  cbz x8,0x7101d5e584
7101d5e0b8  ldr x8,[x8, #0x18]
7101d5e0bc  cbz x8,0x7101d5e584
7101d5e0c0  ldrb w9,[x8, #0x58]
7101d5e0c4  and w9,w9,#0xfe
7101d5e0c8  strb w9,[x8, #0x58]
7101d5e0cc  b 0x7101d5e584
7101d5e0d0  ldrsw x11,[x16, #0x4]
7101d5e0d4  tbnz w11,#0x1f,0x7101d5e0e0
7101d5e0d8  add x11,x10,x11
7101d5e0dc  b 0x7101d5e0e8
7101d5e0e0  adrp x11,0x7104742000
7101d5e0e4  add x11,x11,#0xdbb
7101d5e0e8  ldrb w10,[x11]
7101d5e0ec  sub w10,w10,#0x1
7101d5e0f0  cmp w10,#0x6
7101d5e0f4  b.hi 0x7101d5e11c
7101d5e0f8  adrp x12,0x71044fa000
7101d5e0fc  add x12,x12,#0xed0
7101d5e100  ldrsw x10,[x12, x10, LSL #0x2]
7101d5e104  add x10,x10,x12
7101d5e108  br x10
7101d5e10c  ldrb w10,[x11, #0x1]
7101d5e110  b 0x7101d5e138
7101d5e114  ldur w10,[x11, #0x1]
7101d5e118  b 0x7101d5e138
7101d5e11c  mov w10,wzr
7101d5e120  b 0x7101d5e138
7101d5e124  ldursh w10,[x11, #0x1]
7101d5e128  b 0x7101d5e138
7101d5e12c  ldrsb w10,[x11, #0x1]
7101d5e130  b 0x7101d5e138
7101d5e134  ldurh w10,[x11, #0x1]
7101d5e138  str w10,[x9]
7101d5e13c  str wzr,[x8]
7101d5e140  b 0x7101d5e584
7101d5e144  ldrsw x11,[x16, #0x4]
7101d5e148  tbnz w11,#0x1f,0x7101d5e154
7101d5e14c  add x11,x10,x11
7101d5e150  b 0x7101d5e15c
7101d5e154  adrp x11,0x7104742000
7101d5e158  add x11,x11,#0xdbb
7101d5e15c  ldrb w10,[x11]
7101d5e160  sub w10,w10,#0x1
7101d5e164  cmp w10,#0x6
7101d5e168  b.hi 0x7101d5e190
7101d5e16c  adrp x12,0x71044fa000
7101d5e170  add x12,x12,#0xeb4
7101d5e174  ldrsw x10,[x12, x10, LSL #0x2]
7101d5e178  add x10,x10,x12
7101d5e17c  br x10
7101d5e180  ldrb w10,[x11, #0x1]
7101d5e184  b 0x7101d5e1ac
7101d5e188  ldur w10,[x11, #0x1]
7101d5e18c  b 0x7101d5e1ac
7101d5e190  mov w10,wzr
7101d5e194  b 0x7101d5e1ac
7101d5e198  ldursh w10,[x11, #0x1]
7101d5e19c  b 0x7101d5e1ac
7101d5e1a0  ldrsb w10,[x11, #0x1]
7101d5e1a4  b 0x7101d5e1ac
7101d5e1a8  ldurh w10,[x11, #0x1]
7101d5e1ac  str w10,[x9]
7101d5e1b0  mov w9,#0x2
7101d5e1b4  str w9,[x8]
7101d5e1b8  b 0x7101d5e584
7101d5e1bc  mov x0,x26
7101d5e1c0  bl 0x71039c06b0
7101d5e1c4  cbz w0,0x7101d5e29c
7101d5e1c8  bl 0x7101764000
7101d5e1cc  adrp x0,0x7101763000
7101d5e1d0  add x0,x0,#0xc40
7101d5e1d4  adrp x1,0x71052c5000
7101d5e1d8  add x1,x1,#0x180
7101d5e1dc  adrp x2,0x7104f17000
7101d5e1e0  add x2,x2,#0x0
7101d5e1e4  bl 0x71000001c0
7101d5e1e8  mov x0,x26
7101d5e1ec  bl 0x71039c06c0
7101d5e1f0  ldarb w8,[x26]
7101d5e1f4  tbnz w8,#0x0,0x7101d5e2a4
7101d5e1f8  mov x0,x26
7101d5e1fc  bl 0x71039c06b0
7101d5e200  cbz w0,0x7101d5e2a4
7101d5e204  bl 0x7101764000
7101d5e208  adrp x0,0x7101763000
7101d5e20c  add x0,x0,#0xc40
7101d5e210  adrp x1,0x71052c5000
7101d5e214  add x1,x1,#0x180
7101d5e218  adrp x2,0x7104f17000
7101d5e21c  add x2,x2,#0x0
7101d5e220  bl 0x71000001c0
7101d5e224  mov x0,x26
7101d5e228  bl 0x71039c06c0
7101d5e22c  ldrb w8,[x28, #0x5f0]
7101d5e230  cbnz w8,0x7101d5e2ac
7101d5e234  b 0x7101d5e2ec
7101d5e238  mov x0,x26
7101d5e23c  bl 0x71039c06b0
7101d5e240  cbz w0,0x7101d5e2d4
7101d5e244  bl 0x7101764000
7101d5e248  adrp x0,0x7101763000
7101d5e24c  add x0,x0,#0xc40
7101d5e250  adrp x1,0x71052c5000
7101d5e254  add x1,x1,#0x180
7101d5e258  adrp x2,0x7104f17000
7101d5e25c  add x2,x2,#0x0
7101d5e260  bl 0x71000001c0
7101d5e264  mov x0,x26
7101d5e268  bl 0x71039c06c0
7101d5e26c  b 0x7101d5e2d4
7101d5e270  add x20,x27,x19, LSL #0x8
7101d5e274  ldr w8,[x20, #0x118]
7101d5e278  cmp w8,#0x2
7101d5e27c  b.ne 0x7101d5e584
7101d5e280  ldrb w8,[x20, #0x18c]
7101d5e284  cbz w8,0x7101d5e584
7101d5e288  adrp x26,0x7105314000
7101d5e28c  add x26,x26,#0x4d8
7101d5e290  ldr w21,[x27, #0x928]
7101d5e294  ldarb w8,[x26]
7101d5e298  tbz w8,#0x0,0x7101d5e1bc
7101d5e29c  ldarb w8,[x26]
7101d5e2a0  tbz w8,#0x0,0x7101d5e1f8
7101d5e2a4  ldrb w8,[x28, #0x5f0]
7101d5e2a8  cbz w8,0x7101d5e2ec
7101d5e2ac  adrp x8,0x71052c5000
7101d5e2b0  ldrb w8,[x8, #0x1b0]
7101d5e2b4  cmp w8,#0x11
7101d5e2b8  b.eq 0x7101d5e2ec
7101d5e2bc  cmp w8,#0x19
7101d5e2c0  b.eq 0x7101d5e2ec
7101d5e2c4  cmp w8,#0x18
7101d5e2c8  b.ne 0x7101d5e328
7101d5e2cc  ldarb w8,[x26]
7101d5e2d0  tbz w8,#0x0,0x7101d5e238
7101d5e2d4  adrp x8,0x7105305000
7101d5e2d8  ldr w8,[x8, #0xf0]
7101d5e2dc  mov w9,#0x300
7101d5e2e0  movk w9,#0x701, LSL #16
7101d5e2e4  cmp w8,w9
7101d5e2e8  b.ne 0x7101d5e328
7101d5e2ec  add x26,x20,#0x138
7101d5e2f0  cbz w21,0x7101d5e308
7101d5e2f4  ldr w1,[x20, #0x140]
7101d5e2f8  cmn w1,#0x1
7101d5e2fc  b.eq 0x7101d5e340
7101d5e300  mov x0,x26
7101d5e304  b 0x7101d5e580
7101d5e308  adrp x8,0x7105339000
7101d5e30c  ldr x20,[x8, #0x8b0]
7101d5e310  ldrb w8,[x20, #0x8]
7101d5e314  cbz w8,0x7101d5e358
7101d5e318  adrp x9,0x7105339000
7101d5e31c  ldr x9,[x9, #0x860]
7101d5e320  cbnz x9,0x7101d5e35c
7101d5e324  b 0x7101d5e37c
7101d5e328  ldr w8,[x20, #0x184]
7101d5e32c  add x21,x20,#0x184
7101d5e330  cbz w8,0x7101d5e38c
7101d5e334  sub w8,w8,#0x1
7101d5e338  str w8,[x21]
7101d5e33c  b 0x7101d5e584
7101d5e340  ldr w8,[x20, #0x184]
7101d5e344  add x9,x20,#0x184
7101d5e348  cbz w8,0x7101d5db88
7101d5e34c  sub w8,w8,#0x1
7101d5e350  str w8,[x9]
7101d5e354  b 0x7101d5e584
7101d5e358  mov x9,x22
7101d5e35c  ldr x9,[x9, #0x10]
7101d5e360  ldrb w9,[x9, #0xb8]
7101d5e364  cbz w9,0x7101d5e378
7101d5e368  mov x0,x26
7101d5e36c  mov w1,wzr
7101d5e370  bl 0x7101d5c2e0
7101d5e374  ldrb w8,[x20, #0x8]
7101d5e378  cbz w8,0x7101d5e3d4
7101d5e37c  adrp x9,0x7105339000
7101d5e380  ldr x9,[x9, #0x868]
7101d5e384  cbnz x9,0x7101d5e3d8
7101d5e388  b 0x7101d5e3f8
7101d5e38c  ldr w8,[x20, #0x188]
7101d5e390  add x26,x20,#0x188
7101d5e394  cbz w8,0x7101d5dc40
7101d5e398  cmp w8,#0x1
7101d5e39c  b.ne 0x7101d5e08c
7101d5e3a0  ldr s11,[x20, #0x178]
7101d5e3a4  fcmp s11,#0.0
7101d5e3a8  b.ne 0x7101d5de4c
7101d5e3ac  adrp x8,0x71052c3000
7101d5e3b0  ldr x8,[x8, #0x600]
7101d5e3b4  ldr x0,[x8, #0x8]
7101d5e3b8  bl 0x710149e570
7101d5e3bc  ucvtf s0,w0
7101d5e3c0  fmul s0,s0,s10
7101d5e3c4  fcvtzu w8,s0
7101d5e3c8  str w8,[x21]
7101d5e3cc  str wzr,[x26]
7101d5e3d0  b 0x7101d5e08c
7101d5e3d4  mov x9,x22
7101d5e3d8  ldr x9,[x9, #0x10]
7101d5e3dc  ldrb w9,[x9, #0xb8]
7101d5e3e0  cbz w9,0x7101d5e3f4
7101d5e3e4  mov w1,#0x1
7101d5e3e8  mov x0,x26
7101d5e3ec  bl 0x7101d5c2e0
7101d5e3f0  ldrb w8,[x20, #0x8]
7101d5e3f4  cbz w8,0x7101d5e404
7101d5e3f8  ldr x9,[x24, #0x870]
7101d5e3fc  cbnz x9,0x7101d5e408
7101d5e400  b 0x7101d5e428
7101d5e404  mov x9,x22
7101d5e408  ldr x9,[x9, #0x10]
7101d5e40c  ldrb w9,[x9, #0xb8]
7101d5e410  cbz w9,0x7101d5e424
7101d5e414  mov w1,#0x2
7101d5e418  mov x0,x26
7101d5e41c  bl 0x7101d5c2e0
7101d5e420  ldrb w8,[x20, #0x8]
7101d5e424  cbz w8,0x7101d5e434
7101d5e428  ldr x9,[x23, #0x878]
7101d5e42c  cbnz x9,0x7101d5e438
7101d5e430  b 0x7101d5e458
7101d5e434  mov x9,x22
7101d5e438  ldr x9,[x9, #0x10]
7101d5e43c  ldrb w9,[x9, #0xb8]
7101d5e440  cbz w9,0x7101d5e454
7101d5e444  orr w1,wzr,#0x3
7101d5e448  mov x0,x26
7101d5e44c  bl 0x7101d5c2e0
7101d5e450  ldrb w8,[x20, #0x8]
7101d5e454  cbz w8,0x7101d5e464
7101d5e458  ldr x9,[x25, #0x880]
7101d5e45c  cbnz x9,0x7101d5e468
7101d5e460  b 0x7101d5e488
7101d5e464  mov x9,x22
7101d5e468  ldr x9,[x9, #0x10]
7101d5e46c  ldrb w9,[x9, #0xb8]
7101d5e470  cbz w9,0x7101d5e484
7101d5e474  mov w1,#0x4
7101d5e478  mov x0,x26
7101d5e47c  bl 0x7101d5c2e0
7101d5e480  ldrb w8,[x20, #0x8]
7101d5e484  cbz w8,0x7101d5e498
7101d5e488  adrp x9,0x7105339000
7101d5e48c  ldr x9,[x9, #0x888]
7101d5e490  cbnz x9,0x7101d5e49c
7101d5e494  b 0x7101d5e4bc
7101d5e498  mov x9,x22
7101d5e49c  ldr x9,[x9, #0x10]
7101d5e4a0  ldrb w9,[x9, #0xb8]
7101d5e4a4  cbz w9,0x7101d5e4b8
7101d5e4a8  mov x0,x26
7101d5e4ac  mov w1,#0x5
7101d5e4b0  bl 0x7101d5c2e0
7101d5e4b4  ldrb w8,[x20, #0x8]
7101d5e4b8  cbz w8,0x7101d5e4cc
7101d5e4bc  adrp x9,0x7105339000
7101d5e4c0  ldr x9,[x9, #0x890]
7101d5e4c4  cbnz x9,0x7101d5e4d0
7101d5e4c8  b 0x7101d5e4f0
7101d5e4cc  mov x9,x22
7101d5e4d0  ldr x9,[x9, #0x10]
7101d5e4d4  ldrb w9,[x9, #0xb8]
7101d5e4d8  cbz w9,0x7101d5e4ec
7101d5e4dc  orr w1,wzr,#0x6
7101d5e4e0  mov x0,x26
7101d5e4e4  bl 0x7101d5c2e0
7101d5e4e8  ldrb w8,[x20, #0x8]
7101d5e4ec  cbz w8,0x7101d5e500
7101d5e4f0  adrp x9,0x7105339000
7101d5e4f4  ldr x9,[x9, #0x898]
7101d5e4f8  cbnz x9,0x7101d5e504
7101d5e4fc  b 0x7101d5e524
7101d5e500  mov x9,x22
7101d5e504  ldr x9,[x9, #0x10]
7101d5e508  ldrb w9,[x9, #0xb8]
7101d5e50c  cbz w9,0x7101d5e520
7101d5e510  orr w1,wzr,#0x7
7101d5e514  mov x0,x26
7101d5e518  bl 0x7101d5c2e0
7101d5e51c  ldrb w8,[x20, #0x8]
7101d5e520  cbz w8,0x7101d5e534
7101d5e524  adrp x9,0x7105339000
7101d5e528  ldr x9,[x9, #0x8a0]
7101d5e52c  cbnz x9,0x7101d5e538
7101d5e530  b 0x7101d5e558
7101d5e534  mov x9,x22
7101d5e538  ldr x9,[x9, #0x10]
7101d5e53c  ldrb w9,[x9, #0xb8]
7101d5e540  cbz w9,0x7101d5e554
7101d5e544  mov w1,#0x8
7101d5e548  mov x0,x26
7101d5e54c  bl 0x7101d5c2e0
7101d5e550  ldrb w8,[x20, #0x8]
7101d5e554  cbz w8,0x7101d5e568
7101d5e558  adrp x8,0x7105339000
7101d5e55c  ldr x8,[x8, #0x8a8]
7101d5e560  cbnz x8,0x7101d5e56c
7101d5e564  b 0x7101d5e584
7101d5e568  mov x8,x22
7101d5e56c  ldr x8,[x8, #0x10]
7101d5e570  ldrb w8,[x8, #0xb8]
7101d5e574  cbz w8,0x7101d5e584
7101d5e578  mov x0,x26
7101d5e57c  mov w1,#0x9
7101d5e580  bl 0x7101d5c2e0
7101d5e584  add x19,x19,#0x1
7101d5e588  cmp x19,#0x8
7101d5e58c  b.ne 0x7101d5e270
7101d5e590  ldr x8,[sp, #0x40]
7101d5e594  ldr x20,[x8, #0x80]
7101d5e598  bl 0x7101465a30
7101d5e59c  ldrsw x8,[x20, #0x114]
7101d5e5a0  mov x22,x0
7101d5e5a4  adrp x25,0x71052c5000
7101d5e5a8  add x25,x25,#0x180
7101d5e5ac  cmn w8,#0x1
7101d5e5b0  b.eq 0x7101d5e628
7101d5e5b4  mov w9,#0x3860
7101d5e5b8  madd x9,x8,x9,x22
7101d5e5bc  mov w10,#0x3854
7101d5e5c0  ldrsh w9,[x9, x10, LSL #0x0]
7101d5e5c4  cmn w9,#0x1
7101d5e5c8  b.eq 0x7101d5e628
7101d5e5cc  mov w9,#0x3860
7101d5e5d0  madd x8,x8,x9,x22
7101d5e5d4  ldrb w8,[x8, #0x73]
7101d5e5d8  cmp w8,#0x1
7101d5e5dc  b.ne 0x7101d5e628
7101d5e5e0  ldr x19,[x20, #0x1b0]
7101d5e5e4  ldr w9,[x20, #0x118]
7101d5e5e8  cmp w9,#0x2
7101d5e5ec  ldrb w8,[x19, #0x60]
7101d5e5f0  b.ne 0x7101d5e610
7101d5e5f4  add x23,x20,#0x1b0
7101d5e5f8  cbnz w8,0x7101d5e604
7101d5e5fc  mov x0,x19
7101d5e600  bl 0x710339bc80
7101d5e604  mov x0,x23
7101d5e608  bl 0x710339c1e0
7101d5e60c  b 0x7101d5e628
7101d5e610  cbz w8,0x7101d5e628
7101d5e614  add x0,x19,#0x68
7101d5e618  mov w1,wzr
7101d5e61c  bl 0x710373b540
7101d5e620  ldrb w8,[x19, #0x61]
7101d5e624  cbz w8,0x7101d6090c
7101d5e628  ldrsw x8,[x20, #0x214]
7101d5e62c  cmn w8,#0x1
7101d5e630  b.eq 0x7101d5e6a8
7101d5e634  mov w9,#0x3860
7101d5e638  madd x9,x8,x9,x22
7101d5e63c  mov w10,#0x3854
7101d5e640  ldrsh w9,[x9, x10, LSL #0x0]
7101d5e644  cmn w9,#0x1
7101d5e648  b.eq 0x7101d5e6a8
7101d5e64c  mov w9,#0x3860
7101d5e650  madd x8,x8,x9,x22
7101d5e654  ldrb w8,[x8, #0x73]
7101d5e658  cmp w8,#0x1
7101d5e65c  b.ne 0x7101d5e6a8
7101d5e660  ldr x19,[x20, #0x2b0]
7101d5e664  ldr w9,[x20, #0x218]
7101d5e668  cmp w9,#0x2
7101d5e66c  ldrb w8,[x19, #0x60]
7101d5e670  b.ne 0x7101d5e690
7101d5e674  add x23,x20,#0x2b0
7101d5e678  cbnz w8,0x7101d5e684
7101d5e67c  mov x0,x19
7101d5e680  bl 0x710339bc80
7101d5e684  mov x0,x23
7101d5e688  bl 0x710339c1e0
7101d5e68c  b 0x7101d5e6a8
7101d5e690  cbz w8,0x7101d5e6a8
7101d5e694  add x0,x19,#0x68
7101d5e698  mov w1,wzr
7101d5e69c  bl 0x710373b540
7101d5e6a0  ldrb w8,[x19, #0x61]
7101d5e6a4  cbz w8,0x7101d60930
7101d5e6a8  ldrsw x8,[x20, #0x314]
7101d5e6ac  cmn w8,#0x1
7101d5e6b0  adrp x21,0x7105314000
7101d5e6b4  add x21,x21,#0x4d8
7101d5e6b8  b.eq 0x7101d5e730
7101d5e6bc  mov w9,#0x3860
7101d5e6c0  madd x9,x8,x9,x22
7101d5e6c4  mov w10,#0x3854
7101d5e6c8  ldrsh w9,[x9, x10, LSL #0x0]
7101d5e6cc  cmn w9,#0x1
7101d5e6d0  b.eq 0x7101d5e730
7101d5e6d4  mov w9,#0x3860
7101d5e6d8  madd x8,x8,x9,x22
7101d5e6dc  ldrb w8,[x8, #0x73]
7101d5e6e0  cmp w8,#0x1
7101d5e6e4  b.ne 0x7101d5e730
7101d5e6e8  ldr x19,[x20, #0x3b0]
7101d5e6ec  ldr w9,[x20, #0x318]
7101d5e6f0  cmp w9,#0x2
7101d5e6f4  ldrb w8,[x19, #0x60]
7101d5e6f8  b.ne 0x7101d5e718
7101d5e6fc  add x23,x20,#0x3b0
7101d5e700  cbnz w8,0x7101d5e70c
7101d5e704  mov x0,x19
7101d5e708  bl 0x710339bc80
7101d5e70c  mov x0,x23
7101d5e710  bl 0x710339c1e0
7101d5e714  b 0x7101d5e730
7101d5e718  cbz w8,0x7101d5e730
7101d5e71c  add x0,x19,#0x68
7101d5e720  mov w1,wzr
7101d5e724  bl 0x710373b540
7101d5e728  ldrb w8,[x19, #0x61]
7101d5e72c  cbz w8,0x7101d60954
7101d5e730  ldrsw x8,[x20, #0x414]
7101d5e734  cmn w8,#0x1
7101d5e738  b.eq 0x7101d5e7b0
7101d5e73c  mov w9,#0x3860
7101d5e740  madd x9,x8,x9,x22
7101d5e744  mov w10,#0x3854
7101d5e748  ldrsh w9,[x9, x10, LSL #0x0]
7101d5e74c  cmn w9,#0x1
7101d5e750  b.eq 0x7101d5e7b0
7101d5e754  mov w9,#0x3860
7101d5e758  madd x8,x8,x9,x22
7101d5e75c  ldrb w8,[x8, #0x73]
7101d5e760  cmp w8,#0x1
7101d5e764  b.ne 0x7101d5e7b0
7101d5e768  ldr x19,[x20, #0x4b0]
7101d5e76c  ldr w9,[x20, #0x418]
7101d5e770  cmp w9,#0x2
7101d5e774  ldrb w8,[x19, #0x60]
7101d5e778  b.ne 0x7101d5e798
7101d5e77c  add x23,x20,#0x4b0
7101d5e780  cbnz w8,0x7101d5e78c
7101d5e784  mov x0,x19
7101d5e788  bl 0x710339bc80
7101d5e78c  mov x0,x23
7101d5e790  bl 0x710339c1e0
7101d5e794  b 0x7101d5e7b0
7101d5e798  cbz w8,0x7101d5e7b0
7101d5e79c  add x0,x19,#0x68
7101d5e7a0  mov w1,wzr
7101d5e7a4  bl 0x710373b540
7101d5e7a8  ldrb w8,[x19, #0x61]
7101d5e7ac  cbz w8,0x7101d60978
7101d5e7b0  ldrsw x8,[x20, #0x514]
7101d5e7b4  cmn w8,#0x1
7101d5e7b8  b.eq 0x7101d5e830
7101d5e7bc  mov w9,#0x3860
7101d5e7c0  madd x9,x8,x9,x22
7101d5e7c4  mov w10,#0x3854
7101d5e7c8  ldrsh w9,[x9, x10, LSL #0x0]
7101d5e7cc  cmn w9,#0x1
7101d5e7d0  b.eq 0x7101d5e830
7101d5e7d4  mov w9,#0x3860
7101d5e7d8  madd x8,x8,x9,x22
7101d5e7dc  ldrb w8,[x8, #0x73]
7101d5e7e0  cmp w8,#0x1
7101d5e7e4  b.ne 0x7101d5e830
7101d5e7e8  ldr x19,[x20, #0x5b0]
7101d5e7ec  ldr w9,[x20, #0x518]
7101d5e7f0  cmp w9,#0x2
7101d5e7f4  ldrb w8,[x19, #0x60]
7101d5e7f8  b.ne 0x7101d5e818
7101d5e7fc  add x23,x20,#0x5b0
7101d5e800  cbnz w8,0x7101d5e80c
7101d5e804  mov x0,x19
7101d5e808  bl 0x710339bc80
7101d5e80c  mov x0,x23
7101d5e810  bl 0x710339c1e0
7101d5e814  b 0x7101d5e830
7101d5e818  cbz w8,0x7101d5e830
7101d5e81c  add x0,x19,#0x68
7101d5e820  mov w1,wzr
7101d5e824  bl 0x710373b540
7101d5e828  ldrb w8,[x19, #0x61]
7101d5e82c  cbz w8,0x7101d6099c
7101d5e830  ldrsw x8,[x20, #0x614]
7101d5e834  cmn w8,#0x1
7101d5e838  b.eq 0x7101d5e8b0
7101d5e83c  mov w9,#0x3860
7101d5e840  madd x9,x8,x9,x22
7101d5e844  mov w10,#0x3854
7101d5e848  ldrsh w9,[x9, x10, LSL #0x0]
7101d5e84c  cmn w9,#0x1
7101d5e850  b.eq 0x7101d5e8b0
7101d5e854  mov w9,#0x3860
7101d5e858  madd x8,x8,x9,x22
7101d5e85c  ldrb w8,[x8, #0x73]
7101d5e860  cmp w8,#0x1
7101d5e864  b.ne 0x7101d5e8b0
7101d5e868  ldr x19,[x20, #0x6b0]
7101d5e86c  ldr w9,[x20, #0x618]
7101d5e870  cmp w9,#0x2
7101d5e874  ldrb w8,[x19, #0x60]
7101d5e878  b.ne 0x7101d5e898
7101d5e87c  add x23,x20,#0x6b0
7101d5e880  cbnz w8,0x7101d5e88c
7101d5e884  mov x0,x19
7101d5e888  bl 0x710339bc80
7101d5e88c  mov x0,x23
7101d5e890  bl 0x710339c1e0
7101d5e894  b 0x7101d5e8b0
7101d5e898  cbz w8,0x7101d5e8b0
7101d5e89c  add x0,x19,#0x68
7101d5e8a0  mov w1,wzr
7101d5e8a4  bl 0x710373b540
7101d5e8a8  ldrb w8,[x19, #0x61]
7101d5e8ac  cbz w8,0x7101d609c0
7101d5e8b0  ldrsw x8,[x20, #0x714]
7101d5e8b4  cmn w8,#0x1
7101d5e8b8  b.eq 0x7101d5e930
7101d5e8bc  mov w9,#0x3860
7101d5e8c0  madd x9,x8,x9,x22
7101d5e8c4  mov w10,#0x3854
7101d5e8c8  ldrsh w9,[x9, x10, LSL #0x0]
7101d5e8cc  cmn w9,#0x1
7101d5e8d0  b.eq 0x7101d5e930
7101d5e8d4  mov w9,#0x3860
7101d5e8d8  madd x8,x8,x9,x22
7101d5e8dc  ldrb w8,[x8, #0x73]
7101d5e8e0  cmp w8,#0x1
7101d5e8e4  b.ne 0x7101d5e930
7101d5e8e8  ldr x19,[x20, #0x7b0]
7101d5e8ec  ldr w9,[x20, #0x718]
7101d5e8f0  cmp w9,#0x2
7101d5e8f4  ldrb w8,[x19, #0x60]
7101d5e8f8  b.ne 0x7101d5e918
7101d5e8fc  add x23,x20,#0x7b0
7101d5e900  cbnz w8,0x7101d5e90c
7101d5e904  mov x0,x19
7101d5e908  bl 0x710339bc80
7101d5e90c  mov x0,x23
7101d5e910  bl 0x710339c1e0
7101d5e914  b 0x7101d5e930
7101d5e918  cbz w8,0x7101d5e930
7101d5e91c  add x0,x19,#0x68
7101d5e920  mov w1,wzr
7101d5e924  bl 0x710373b540
7101d5e928  ldrb w8,[x19, #0x61]
7101d5e92c  cbz w8,0x7101d609e4
7101d5e930  ldrsw x8,[x20, #0x814]
7101d5e934  cmn w8,#0x1
7101d5e938  b.eq 0x7101d5e9b0
7101d5e93c  mov w9,#0x3860
7101d5e940  madd x9,x8,x9,x22
7101d5e944  mov w10,#0x3854
7101d5e948  ldrsh w9,[x9, x10, LSL #0x0]
7101d5e94c  cmn w9,#0x1
7101d5e950  b.eq 0x7101d5e9b0
7101d5e954  mov w9,#0x3860
7101d5e958  madd x8,x8,x9,x22
7101d5e95c  ldrb w8,[x8, #0x73]
7101d5e960  cmp w8,#0x1
7101d5e964  b.ne 0x7101d5e9b0
7101d5e968  ldr x19,[x20, #0x8b0]
7101d5e96c  ldr w9,[x20, #0x818]
7101d5e970  cmp w9,#0x2
7101d5e974  ldrb w8,[x19, #0x60]
7101d5e978  b.ne 0x7101d5e998
7101d5e97c  add x22,x20,#0x8b0
7101d5e980  cbnz w8,0x7101d5e98c
7101d5e984  mov x0,x19
7101d5e988  bl 0x710339bc80
7101d5e98c  mov x0,x22
7101d5e990  bl 0x710339c1e0
7101d5e994  b 0x7101d5e9b0
7101d5e998  cbz w8,0x7101d5e9b0
7101d5e99c  add x0,x19,#0x68
7101d5e9a0  mov w1,wzr
7101d5e9a4  bl 0x710373b540
7101d5e9a8  ldrb w8,[x19, #0x61]
7101d5e9ac  cbz w8,0x7101d60a08
7101d5e9b0  ldr x8,[sp, #0x40]
7101d5e9b4  ldr x20,[x8, #0x80]
7101d5e9b8  ldarb w8,[x21]
7101d5e9bc  tbz w8,#0x0,0x7101d612d8
7101d5e9c0  fmov s8,0x3f800000
7101d5e9c4  mov x26,xzr
7101d5e9c8  mov w27,#0x260
7101d5e9cc  adrp x23,0x710532f000
7101d5e9d0  stur wzr,[x29, #-0x78]
7101d5e9d4  str wzr,[sp, #0x48]
7101d5e9d8  add x24,x20,x26, LSL #0x8
7101d5e9dc  ldrsw x8,[x24, #0x114]
7101d5e9e0  cmn w8,#0x1
7101d5e9e4  b.eq 0x7101d5ed54
7101d5e9e8  madd x9,x8,x27,x25
7101d5e9ec  ldrb w9,[x9, #0x76a]
7101d5e9f0  cbz w9,0x7101d5ed54
7101d5e9f4  ldr x9,[x23, #0x8f0]
7101d5e9f8  ldr x10,[x9]
7101d5e9fc  ldp x9,x10,[x10]
7101d5ea00  cmp x9,x10
7101d5ea04  b.eq 0x7101d5ed54
7101d5ea08  add x22,x24,#0x114
7101d5ea0c  ldr w11,[x9]
7101d5ea10  cmp w11,w8
7101d5ea14  b.eq 0x7101d5ea28
7101d5ea18  add x9,x9,#0xbc
7101d5ea1c  cmp x10,x9
7101d5ea20  b.ne 0x7101d5ea0c
7101d5ea24  b 0x7101d5ed54
7101d5ea28  ldp w8,w9,[x9, #0x30]
7101d5ea2c  cmp w8,w9
7101d5ea30  b.eq 0x7101d5ed54
7101d5ea34  ldr w9,[x24, #0x118]
7101d5ea38  ldr w8,[x24, #0x1b8]
7101d5ea3c  add x19,x24,#0x1b8
7101d5ea40  cmp w9,#0x2
7101d5ea44  b.ne 0x7101d5ea58
7101d5ea48  cbnz w8,0x7101d5ea58
7101d5ea4c  mov w8,#0x1
7101d5ea50  str w8,[x19]
7101d5ea54  b 0x7101d5ea60
7101d5ea58  cmp w8,#0x1
7101d5ea5c  b.ne 0x7101d5ebbc
7101d5ea60  add x28,x24,#0x120
7101d5ea64  add x8,sp,#0xd8
7101d5ea68  mov x0,x28
7101d5ea6c  adrp x1,0x710437c000
7101d5ea70  add x1,x1,#0x896
7101d5ea74  bl 0x7103776640
7101d5ea78  ldr w8,[x24, #0x1bc]
7101d5ea7c  add x21,x24,#0x1bc
7101d5ea80  add x25,x24,#0x1c0
7101d5ea84  cbnz w8,0x7101d5eb64
7101d5ea88  add x8,sp,#0x98
7101d5ea8c  add x0,sp,#0xd8
7101d5ea90  adrp x1,0x710432a000
7101d5ea94  add x1,x1,#0x804
7101d5ea98  bl 0x7103776910
7101d5ea9c  ldr w8,[x25]
7101d5eaa0  add w3,w8,#0x1
7101d5eaa4  add x0,sp,#0x98
7101d5eaa8  mov w2,#0x1
7101d5eaac  adrp x1,0x7104290000
7101d5eab0  add x1,x1,#0x179
7101d5eab4  str w3,[x25]
7101d5eab8  bl 0x710377a280
7101d5eabc  ldr x0,[sp, #0xe0]
7101d5eac0  mov v0.16B,v8.16B
7101d5eac4  adrp x1,0x710432a000
7101d5eac8  add x1,x1,#0x391
7101d5eacc  bl 0x7103778300
7101d5ead0  ldur w8,[x29, #-0x78]
7101d5ead4  tbnz w8,#0x0,0x7101d5eb40
7101d5ead8  mov x1,#0xf5e8
7101d5eadc  movk x1,#0x9f81, LSL #16
7101d5eae0  add x0,sp,#0x50
7101d5eae4  movk x1,#0x14, LSL #32
7101d5eae8  bl 0x71024076d0
7101d5eaec  adrp x8,0x7104f73000
7101d5eaf0  add x8,x8,#0xd50
7101d5eaf4  str x8,[sp, #0x58]
7101d5eaf8  ldr x8,[sp, #0x60]
7101d5eafc  cbz x8,0x7101d5eb38
7101d5eb00  adrp x9,0x7106dd5000
7101d5eb04  ldrb w9,[x9, #0x3a8]
7101d5eb08  cmp w9,#0x1
7101d5eb0c  b.ne 0x7101d5eb38
7101d5eb10  adrp x10,0x7106dd5000
7101d5eb14  ldr w9,[sp, #0x68]
7101d5eb18  ldr w10,[x10, #0x3ac]
7101d5eb1c  cmp w9,w10
7101d5eb20  b.ne 0x7101d5eb38
7101d5eb24  ldr wzr,[x8, #0x38]!
7101d5eb28  ldaxr w9,[x8]
7101d5eb2c  sub w9,w9,#0x1
7101d5eb30  stlxr w10,w9,[x8]
7101d5eb34  cbnz w10,0x7101d5eb28
7101d5eb38  str xzr,[sp, #0x60]
7101d5eb3c  strb wzr,[sp, #0x70]
7101d5eb40  ldr x0,[sp, #0xa0]
7101d5eb44  adrp x8,0x710523d000
7101d5eb48  add x8,x8,#0x9a8
7101d5eb4c  stp x8,xzr,[sp, #0x98]
7101d5eb50  cbz x0,0x7101d5eb58
7101d5eb54  bl 0x710392eb40
7101d5eb58  ldr w8,[x21]
7101d5eb5c  mov w9,#0x1
7101d5eb60  stur w9,[x29, #-0x78]
7101d5eb64  add w8,w8,#0x1
7101d5eb68  cmp w8,#0x5
7101d5eb6c  str w8,[x21]
7101d5eb70  b.cc 0x7101d5ebb0
7101d5eb74  ldr x8,[x23, #0x8f0]
7101d5eb78  ldr x8,[x8]
7101d5eb7c  ldp x9,x8,[x8]
7101d5eb80  cmp x9,x8
7101d5eb84  b.eq 0x7101d5eba8
7101d5eb88  ldr w10,[x22]
7101d5eb8c  mov x11,x9
7101d5eb90  ldr w12,[x11], #0xbc
7101d5eb94  cmp w12,w10
7101d5eb98  b.eq 0x7101d5ebc8
7101d5eb9c  cmp x8,x11
7101d5eba0  mov x9,x11
7101d5eba4  b.ne 0x7101d5eb90
7101d5eba8  mov w8,#0x1
7101d5ebac  b 0x7101d5ebcc
7101d5ebb0  adrp x25,0x71052c5000
7101d5ebb4  add x25,x25,#0x180
7101d5ebb8  b 0x7101d5ed20
7101d5ebbc  adrp x25,0x71052c5000
7101d5ebc0  add x25,x25,#0x180
7101d5ebc4  b 0x7101d5ed54
7101d5ebc8  ldr w8,[x9, #0x34]
7101d5ebcc  ldr w9,[x25]
7101d5ebd0  cmp w8,w9
7101d5ebd4  b.ne 0x7101d5ed14
7101d5ebd8  orr w8,wzr,#0x3
7101d5ebdc  str w8,[x19]
7101d5ebe0  add x8,sp,#0x98
7101d5ebe4  mov x0,x28
7101d5ebe8  adrp x1,0x71042b4000
7101d5ebec  add x1,x1,#0x691
7101d5ebf0  bl 0x7103776640
7101d5ebf4  ldr x19,[sp, #0xa0]
7101d5ebf8  mov v0.16B,v8.16B
7101d5ebfc  adrp x1,0x710432a000
7101d5ec00  add x1,x1,#0x39d
7101d5ec04  mov x0,x19
7101d5ec08  bl 0x7103778300
7101d5ec0c  mov v0.16B,v8.16B
7101d5ec10  mov x0,x19
7101d5ec14  adrp x1,0x7104421000
7101d5ec18  add x1,x1,#0x55
7101d5ec1c  bl 0x7103778300
7101d5ec20  sub x8,x29,#0x98
7101d5ec24  add x0,sp,#0x98
7101d5ec28  adrp x1,0x710435b000
7101d5ec2c  add x1,x1,#0xac7
7101d5ec30  bl 0x7103776910
7101d5ec34  sub x0,x29,#0x98
7101d5ec38  adrp x1,0x71042d4000
7101d5ec3c  add x1,x1,#0xc86
7101d5ec40  bl 0x710377a120
7101d5ec44  ldr w8,[sp, #0x48]
7101d5ec48  adrp x25,0x71052c5000
7101d5ec4c  add x25,x25,#0x180
7101d5ec50  tbnz w8,#0x0,0x7101d5ecbc
7101d5ec54  mov x1,#0x3350
7101d5ec58  movk x1,#0x7d5d, LSL #16
7101d5ec5c  sub x0,x29,#0xd8
7101d5ec60  movk x1,#0x15, LSL #32
7101d5ec64  bl 0x71024076d0
7101d5ec68  adrp x8,0x7104f73000
7101d5ec6c  add x8,x8,#0xd50
7101d5ec70  stur x8,[x29, #-0xd0]
7101d5ec74  ldur x8,[x29, #-0xc8]
7101d5ec78  cbz x8,0x7101d5ecb4
7101d5ec7c  adrp x9,0x7106dd5000
7101d5ec80  ldrb w9,[x9, #0x3a8]
7101d5ec84  cmp w9,#0x1
7101d5ec88  b.ne 0x7101d5ecb4
7101d5ec8c  adrp x10,0x7106dd5000
7101d5ec90  ldur w9,[x29, #-0xc0]
7101d5ec94  ldr w10,[x10, #0x3ac]
7101d5ec98  cmp w9,w10
7101d5ec9c  b.ne 0x7101d5ecb4
7101d5eca0  ldr wzr,[x8, #0x38]!
7101d5eca4  ldaxr w9,[x8]
7101d5eca8  sub w9,w9,#0x1
7101d5ecac  stlxr w10,w9,[x8]
7101d5ecb0  cbnz w10,0x7101d5eca4
7101d5ecb4  stur xzr,[x29, #-0xc8]
7101d5ecb8  sturb wzr,[x29, #-0xb8]
7101d5ecbc  ldur x0,[x29, #-0x90]
7101d5ecc0  adrp x8,0x710523d000
7101d5ecc4  add x8,x8,#0x9a8
7101d5ecc8  stp x8,xzr,[x29, #-0x98]
7101d5eccc  cbz x0,0x7101d5ecd4
7101d5ecd0  bl 0x710392eb40
7101d5ecd4  ldr x19,[sp, #0xa0]
7101d5ecd8  adrp x8,0x710523d000
7101d5ecdc  add x8,x8,#0x988
7101d5ece0  stp x8,xzr,[sp, #0x98]
7101d5ece4  cbz x19,0x7101d5ed08
7101d5ece8  ldr x0,[x19, #0x18]
7101d5ecec  adrp x8,0x710523d000
7101d5ecf0  add x8,x8,#0x9a8
7101d5ecf4  stp x8,xzr,[x19, #0x10]
7101d5ecf8  cbz x0,0x7101d5ed00
7101d5ecfc  bl 0x710392eb40
7101d5ed00  mov x0,x19
7101d5ed04  bl 0x710392eb40
7101d5ed08  mov w8,#0x1
7101d5ed0c  str w8,[sp, #0x48]
7101d5ed10  b 0x7101d5ed1c
7101d5ed14  adrp x25,0x71052c5000
7101d5ed18  add x25,x25,#0x180
7101d5ed1c  str wzr,[x21]
7101d5ed20  ldr x19,[sp, #0xe0]
7101d5ed24  adrp x8,0x710523d000
7101d5ed28  add x8,x8,#0x988
7101d5ed2c  stp x8,xzr,[sp, #0xd8]
7101d5ed30  cbz x19,0x7101d5ed54
7101d5ed34  ldr x0,[x19, #0x18]
7101d5ed38  adrp x8,0x710523d000
7101d5ed3c  add x8,x8,#0x9a8
7101d5ed40  stp x8,xzr,[x19, #0x10]
7101d5ed44  cbz x0,0x7101d5ed4c
7101d5ed48  bl 0x710392eb40
7101d5ed4c  mov x0,x19
7101d5ed50  bl 0x710392eb40
7101d5ed54  add x26,x26,#0x1
7101d5ed58  cmp x26,#0x8
7101d5ed5c  b.ne 0x7101d5e9d8
7101d5ed60  ldr x8,[sp, #0x40]
7101d5ed64  ldr x27,[x8, #0x80]
7101d5ed68  fmov s8,0x3f800000
7101d5ed6c  mov x26,#0x45f8
7101d5ed70  movk x26,#0x7d9d, LSL #16
7101d5ed74  mov x20,xzr
7101d5ed78  movk x26,#0x17, LSL #32
7101d5ed7c  adrp x25,0x71044fa000
7101d5ed80  add x25,x25,#0xeec
7101d5ed84  add x23,x27,x20, LSL #0x8
7101d5ed88  ldr w8,[x23, #0x208]
7101d5ed8c  cbz w8,0x7101d5f234
7101d5ed90  ldr w8,[x23, #0x1c4]
7101d5ed94  cmp w8,#0x3
7101d5ed98  b.eq 0x7101d5f234
7101d5ed9c  ldr w9,[x23, #0x118]
7101d5eda0  add x21,x23,#0x208
7101d5eda4  add x24,x23,#0x1c4
7101d5eda8  cmp w9,#0x1
7101d5edac  b.ne 0x7101d5f138
7101d5edb0  ldr s1,[x23, #0x1d0]
7101d5edb4  ldr s0,[x23, #0x1c8]
7101d5edb8  fadd s0,s1,s0
7101d5edbc  str s0,[x23, #0x1d0]
7101d5edc0  adrp x9,0x71052c3000
7101d5edc4  ldr x9,[x9, #0x600]
7101d5edc8  ldr x12,[x9, #0x8]
7101d5edcc  ldr x9,[x12, #0x10]
7101d5edd0  ldrb w10,[x9]
7101d5edd4  cmp w10,#0xc
7101d5edd8  adrp x10,0x7104742000
7101d5eddc  add x10,x10,#0xdbb
7101d5ede0  b.ne 0x7101d5ee5c
7101d5ede4  ldur w10,[x9, #0x1]
7101d5ede8  subs w10,w10,#0x1
7101d5edec  b.lt 0x7101d5ee54
7101d5edf0  ldr x14,[x12, #0x8]
7101d5edf4  ldursw x13,[x9, #0x5]
7101d5edf8  mov w11,wzr
7101d5edfc  ldp x12,x14,[x14, #0x20]
7101d5ee00  add x13,x14,x13
7101d5ee04  add w14,w10,w11
7101d5ee08  cmp w14,#0x0
7101d5ee0c  cinc w14,w14,lt
7101d5ee10  asr w14,w14,#0x1
7101d5ee14  add x15,x13,w14, SXTW  #0x3
7101d5ee18  ldr w16,[x15]
7101d5ee1c  ldr x16,[x12, x16, LSL #0x3]
7101d5ee20  cmp x16,x26
7101d5ee24  b.eq 0x7101d5ee44
7101d5ee28  sub w15,w14,#0x1
7101d5ee2c  cmp x16,x26
7101d5ee30  csel w10,w15,w10,hi
7101d5ee34  csinc w11,w11,w14,hi
7101d5ee38  cmp w11,w10
7101d5ee3c  b.le 0x7101d5ee04
7101d5ee40  b 0x7101d5ee54
7101d5ee44  ldrsw x10,[x15, #0x4]
7101d5ee48  tbnz w10,#0x1f,0x7101d5ee54
7101d5ee4c  add x10,x9,x10
7101d5ee50  b 0x7101d5ee5c
7101d5ee54  adrp x10,0x7104742000
7101d5ee58  add x10,x10,#0xdbb
7101d5ee5c  ldrb w9,[x10]
7101d5ee60  sub w9,w9,#0x1
7101d5ee64  cmp w9,#0x6
7101d5ee68  b.hi 0x7101d5ee88
7101d5ee6c  ldrsw x9,[x25, x9, LSL #0x2]
7101d5ee70  add x9,x9,x25
7101d5ee74  br x9
7101d5ee78  ldrb w9,[x10, #0x1]
7101d5ee7c  b 0x7101d5eea4
7101d5ee80  ldur w9,[x10, #0x1]
7101d5ee84  b 0x7101d5eea4
7101d5ee88  mov w9,wzr
7101d5ee8c  b 0x7101d5eea4
7101d5ee90  ldursh w9,[x10, #0x1]
7101d5ee94  b 0x7101d5eea4
7101d5ee98  ldrsb w9,[x10, #0x1]
7101d5ee9c  b 0x7101d5eea4
7101d5eea0  ldurh w9,[x10, #0x1]
7101d5eea4  fcvtzs w10,s1
7101d5eea8  add x12,x23,#0x110
7101d5eeac  fcvtzs w11,s0
7101d5eeb0  add x22,x23,#0x1d0
7101d5eeb4  cmp w8,#0x2
7101d5eeb8  b.eq 0x7101d5efa4
7101d5eebc  cmp w8,#0x1
7101d5eec0  b.ne 0x7101d5f088
7101d5eec4  ldr w8,[x23, #0x1cc]
7101d5eec8  ldr w12,[x12]
7101d5eecc  cbnz w12,0x7101d5ef70
7101d5eed0  cmp w8,w11
7101d5eed4  csel w12,w11,w8,hi
7101d5eed8  ldr w11,[x23, #0x20c]
7101d5eedc  cmp w12,w10
7101d5eee0  add w11,w11,#0x1
7101d5eee4  str w11,[x23, #0x20c]
7101d5eee8  b.eq 0x7101d5ef70
7101d5eeec  cmp w11,w9
7101d5eef0  b.cc 0x7101d5ef70
7101d5eef4  mov x1,#0x3f4a
7101d5eef8  movk x1,#0x4e25, LSL #16
7101d5eefc  sub x0,x29,#0xd8
7101d5ef00  movk x1,#0x18, LSL #32
7101d5ef04  add x19,x23,#0x1cc
7101d5ef08  add x28,x23,#0x20c
7101d5ef0c  bl 0x71024076d0
7101d5ef10  adrp x8,0x7104f73000
7101d5ef14  add x8,x8,#0xd50
7101d5ef18  stur x8,[x29, #-0xd0]
7101d5ef1c  ldur x8,[x29, #-0xc8]
7101d5ef20  cbz x8,0x7101d5ef5c
7101d5ef24  adrp x9,0x7106dd5000
7101d5ef28  ldrb w9,[x9, #0x3a8]
7101d5ef2c  cmp w9,#0x1
7101d5ef30  b.ne 0x7101d5ef5c
7101d5ef34  adrp x10,0x7106dd5000
7101d5ef38  ldur w9,[x29, #-0xc0]
7101d5ef3c  ldr w10,[x10, #0x3ac]
7101d5ef40  cmp w9,w10
7101d5ef44  b.ne 0x7101d5ef5c
7101d5ef48  ldr wzr,[x8, #0x38]!
7101d5ef4c  ldaxr w9,[x8]
7101d5ef50  sub w9,w9,#0x1
7101d5ef54  stlxr w10,w9,[x8]
7101d5ef58  cbnz w10,0x7101d5ef4c
7101d5ef5c  stur xzr,[x29, #-0xc8]
7101d5ef60  sturb wzr,[x29, #-0xb8]
7101d5ef64  str wzr,[x28]
7101d5ef68  ldr s0,[x22]
7101d5ef6c  ldr w8,[x19]
7101d5ef70  ucvtf s1,w8
7101d5ef74  fcmp s0,s1
7101d5ef78  b.le 0x7101d5f088
7101d5ef7c  orr w8,wzr,#0x3
7101d5ef80  str s1,[x22]
7101d5ef84  str w8,[x24]
7101d5ef88  ldr w8,[x21]
7101d5ef8c  cmp w8,#0x2
7101d5ef90  b.ne 0x7101d5f088
7101d5ef94  ldr x0,[x23, #0x200]
7101d5ef98  adrp x1,0x7104280000
7101d5ef9c  add x1,x1,#0xda4
7101d5efa0  b 0x7101d5f080
7101d5efa4  ldr w8,[x23, #0x1cc]
7101d5efa8  ldr w12,[x12]
7101d5efac  cbnz w12,0x7101d5f050
7101d5efb0  cmp w8,w11
7101d5efb4  csel w12,w11,w8,cc
7101d5efb8  ldr w11,[x23, #0x20c]
7101d5efbc  cmp w12,w10
7101d5efc0  add w11,w11,#0x1
7101d5efc4  str w11,[x23, #0x20c]
7101d5efc8  b.eq 0x7101d5f050
7101d5efcc  cmp w11,w9
7101d5efd0  b.cc 0x7101d5f050
7101d5efd4  mov x1,#0xa1b1
7101d5efd8  movk x1,#0xc882, LSL #16
7101d5efdc  sub x0,x29,#0xd8
7101d5efe0  movk x1,#0x1a, LSL #32
7101d5efe4  add x19,x23,#0x1cc
7101d5efe8  add x28,x23,#0x20c
7101d5efec  bl 0x71024076d0
7101d5eff0  adrp x8,0x7104f73000
7101d5eff4  add x8,x8,#0xd50
7101d5eff8  stur x8,[x29, #-0xd0]
7101d5effc  ldur x8,[x29, #-0xc8]
7101d5f000  cbz x8,0x7101d5f03c
7101d5f004  adrp x9,0x7106dd5000
7101d5f008  ldrb w9,[x9, #0x3a8]
7101d5f00c  cmp w9,#0x1
7101d5f010  b.ne 0x7101d5f03c
7101d5f014  adrp x10,0x7106dd5000
7101d5f018  ldur w9,[x29, #-0xc0]
7101d5f01c  ldr w10,[x10, #0x3ac]
7101d5f020  cmp w9,w10
7101d5f024  b.ne 0x7101d5f03c
7101d5f028  ldr wzr,[x8, #0x38]!
7101d5f02c  ldaxr w9,[x8]
7101d5f030  sub w9,w9,#0x1
7101d5f034  stlxr w10,w9,[x8]
7101d5f038  cbnz w10,0x7101d5f02c
7101d5f03c  stur xzr,[x29, #-0xc8]
7101d5f040  sturb wzr,[x29, #-0xb8]
7101d5f044  str wzr,[x28]
7101d5f048  ldr s0,[x22]
7101d5f04c  ldr w8,[x19]
7101d5f050  ucvtf s1,w8
7101d5f054  fcmp s0,s1
7101d5f058  b.hi 0x7101d5f088
7101d5f05c  orr w8,wzr,#0x3
7101d5f060  str s1,[x22]
7101d5f064  str w8,[x24]
7101d5f068  ldr w8,[x21]
7101d5f06c  cmp w8,#0x2
7101d5f070  b.ne 0x7101d5f088
7101d5f074  ldr x0,[x23, #0x200]
7101d5f078  adrp x1,0x71043e0000
7101d5f07c  add x1,x1,#0x426
7101d5f080  mov v0.16B,v8.16B
7101d5f084  bl 0x7103778300
7101d5f088  ldr x8,[x23, #0x1e0]
7101d5f08c  ldr x19,[x8, #0x10]
7101d5f090  cbz x19,0x7101d5f0d8
7101d5f094  ldr s0,[x22]
7101d5f098  stp xzr,xzr,[sp, #0x80]
7101d5f09c  stp xzr,xzr,[sp, #0x70]
7101d5f0a0  add x0,sp,#0x50
7101d5f0a4  fcvtzs w3,s0
7101d5f0a8  mov w1,#0x20
7101d5f0ac  mov w2,wzr
7101d5f0b0  mov w4,wzr
7101d5f0b4  mov w5,wzr
7101d5f0b8  stp xzr,xzr,[sp, #0x60]
7101d5f0bc  stp xzr,xzr,[sp, #0x50]
7101d5f0c0  bl 0x71037ad940
7101d5f0c4  mov w2,w0
7101d5f0c8  add x1,sp,#0x50
7101d5f0cc  mov x0,x19
7101d5f0d0  mov w3,wzr
7101d5f0d4  bl 0x71037a2270
7101d5f0d8  ldr x8,[x23, #0x1f0]
7101d5f0dc  ldr x9,[x8]
7101d5f0e0  add x28,x23,#0x118
7101d5f0e4  cbz x9,0x7101d5f134
7101d5f0e8  ldr x19,[x8, #0x10]
7101d5f0ec  cbz x19,0x7101d5f134
7101d5f0f0  ldr s0,[x22]
7101d5f0f4  stp xzr,xzr,[sp, #0x80]
7101d5f0f8  stp xzr,xzr,[sp, #0x70]
7101d5f0fc  add x0,sp,#0x50
7101d5f100  fcvtzs w3,s0
7101d5f104  mov w1,#0x20
7101d5f108  mov w2,wzr
7101d5f10c  mov w4,wzr
7101d5f110  mov w5,wzr
7101d5f114  stp xzr,xzr,[sp, #0x60]
7101d5f118  stp xzr,xzr,[sp, #0x50]
7101d5f11c  bl 0x71037ad940
7101d5f120  mov w2,w0
7101d5f124  add x1,sp,#0x50
7101d5f128  mov x0,x19
7101d5f12c  mov w3,wzr
7101d5f130  bl 0x71037a2270
7101d5f134  ldr w9,[x28]
7101d5f138  cmp w9,#0x2
7101d5f13c  b.ne 0x7101d5f234
7101d5f140  ldr w8,[x21]
7101d5f144  cmp w8,#0x2
7101d5f148  b.ne 0x7101d5f178
7101d5f14c  ldr w8,[x24]
7101d5f150  ldr x0,[x23, #0x200]
7101d5f154  cmp w8,#0x1
7101d5f158  b.ne 0x7101d5f168
7101d5f15c  adrp x1,0x7104280000
7101d5f160  add x1,x1,#0xda4
7101d5f164  b 0x7101d5f170
7101d5f168  adrp x1,0x71043e0000
7101d5f16c  add x1,x1,#0x426
7101d5f170  mov v0.16B,v8.16B
7101d5f174  bl 0x7103778300
7101d5f178  ldr s0,[x23, #0x1cc]
7101d5f17c  ucvtf s0,s0
7101d5f180  orr w8,wzr,#0x3
7101d5f184  str s0,[x23, #0x1d0]
7101d5f188  str w8,[x24]
7101d5f18c  ldr x8,[x23, #0x1e0]
7101d5f190  ldr x19,[x8, #0x10]
7101d5f194  cbz x19,0x7101d5f1d8
7101d5f198  fcvtzs w3,s0
7101d5f19c  add x0,sp,#0x50
7101d5f1a0  mov w1,#0x20
7101d5f1a4  mov w2,wzr
7101d5f1a8  mov w4,wzr
7101d5f1ac  mov w5,wzr
7101d5f1b0  stp xzr,xzr,[sp, #0x80]
7101d5f1b4  stp xzr,xzr,[sp, #0x70]
7101d5f1b8  stp xzr,xzr,[sp, #0x60]
7101d5f1bc  stp xzr,xzr,[sp, #0x50]
7101d5f1c0  bl 0x71037ad940
7101d5f1c4  mov w2,w0
7101d5f1c8  add x1,sp,#0x50
7101d5f1cc  mov x0,x19
7101d5f1d0  mov w3,wzr
7101d5f1d4  bl 0x71037a2270
7101d5f1d8  ldr x8,[x23, #0x1f0]
7101d5f1dc  ldr x9,[x8]
7101d5f1e0  cbz x9,0x7101d5f234
7101d5f1e4  ldr x19,[x8, #0x10]
7101d5f1e8  cbz x19,0x7101d5f234
7101d5f1ec  add x8,x23,#0x1d0
7101d5f1f0  ldr s0,[x8]
7101d5f1f4  add x0,sp,#0x50
7101d5f1f8  stp xzr,xzr,[sp, #0x80]
7101d5f1fc  mov w1,#0x20
7101d5f200  stp xzr,xzr,[sp, #0x70]
7101d5f204  mov w2,wzr
7101d5f208  stp xzr,xzr,[sp, #0x60]
7101d5f20c  mov w4,wzr
7101d5f210  fcvtzs w3,s0
7101d5f214  mov w5,wzr
7101d5f218  stp xzr,xzr,[sp, #0x50]
7101d5f21c  bl 0x71037ad940
7101d5f220  mov w2,w0
7101d5f224  add x1,sp,#0x50
7101d5f228  mov x0,x19
7101d5f22c  mov w3,wzr
7101d5f230  bl 0x71037a2270
7101d5f234  add x20,x20,#0x1
7101d5f238  cmp x20,#0x8
7101d5f23c  b.ne 0x7101d5ed84
7101d5f240  ldr x8,[sp, #0x40]
7101d5f244  ldr x19,[x8, #0x80]
7101d5f248  ldr w8,[x19, #0x110]
7101d5f24c  cmn w8,#0x1
7101d5f250  b.eq 0x7101d5f268
7101d5f254  ldr x0,[x19, #0x128]
7101d5f258  fmov s0,wzr
7101d5f25c  adrp x1,0x71043be000
7101d5f260  add x1,x1,#0x955
7101d5f264  bl 0x7103778630
7101d5f268  ldr w8,[x19, #0x210]
7101d5f26c  cmn w8,#0x1
7101d5f270  adrp x25,0x71052c5000
7101d5f274  add x25,x25,#0x180
7101d5f278  adrp x20,0x7105314000
7101d5f27c  add x20,x20,#0x4d8
7101d5f280  b.eq 0x7101d5f298
7101d5f284  ldr x0,[x19, #0x228]
7101d5f288  fmov s0,wzr
7101d5f28c  adrp x1,0x71043be000
7101d5f290  add x1,x1,#0x955
7101d5f294  bl 0x7103778630
7101d5f298  ldr w8,[x19, #0x310]
7101d5f29c  cmn w8,#0x1
7101d5f2a0  b.eq 0x7101d5f2b8
7101d5f2a4  ldr x0,[x19, #0x328]
7101d5f2a8  fmov s0,wzr
7101d5f2ac  adrp x1,0x71043be000
7101d5f2b0  add x1,x1,#0x955
7101d5f2b4  bl 0x7103778630
7101d5f2b8  ldr w8,[x19, #0x410]
7101d5f2bc  cmn w8,#0x1
7101d5f2c0  b.eq 0x7101d5f2d8
7101d5f2c4  ldr x0,[x19, #0x428]
7101d5f2c8  fmov s0,wzr
7101d5f2cc  adrp x1,0x71043be000
7101d5f2d0  add x1,x1,#0x955
7101d5f2d4  bl 0x7103778630
7101d5f2d8  ldr w8,[x19, #0x510]
7101d5f2dc  cmn w8,#0x1
7101d5f2e0  b.eq 0x7101d5f2f8
7101d5f2e4  ldr x0,[x19, #0x528]
7101d5f2e8  fmov s0,wzr
7101d5f2ec  adrp x1,0x71043be000
7101d5f2f0  add x1,x1,#0x955
7101d5f2f4  bl 0x7103778630
7101d5f2f8  ldr w8,[x19, #0x610]
7101d5f2fc  cmn w8,#0x1
7101d5f300  b.eq 0x7101d5f318
7101d5f304  ldr x0,[x19, #0x628]
7101d5f308  fmov s0,wzr
7101d5f30c  adrp x1,0x71043be000
7101d5f310  add x1,x1,#0x955
7101d5f314  bl 0x7103778630
7101d5f318  ldr w8,[x19, #0x710]
7101d5f31c  cmn w8,#0x1
7101d5f320  b.eq 0x7101d5f338
7101d5f324  ldr x0,[x19, #0x728]
7101d5f328  fmov s0,wzr
7101d5f32c  adrp x1,0x71043be000
7101d5f330  add x1,x1,#0x955
7101d5f334  bl 0x7103778630
7101d5f338  ldr w8,[x19, #0x810]
7101d5f33c  cmn w8,#0x1
7101d5f340  b.eq 0x7101d5f358
7101d5f344  ldr x0,[x19, #0x828]
7101d5f348  fmov s0,wzr
7101d5f34c  adrp x1,0x71043be000
7101d5f350  add x1,x1,#0x955
7101d5f354  bl 0x7103778630
7101d5f358  ldr w8,[x19, #0x110]
7101d5f35c  cmn w8,#0x1
7101d5f360  b.eq 0x7101d5f378
7101d5f364  ldr w8,[x19, #0x118]
7101d5f368  cmp w8,#0x1
7101d5f36c  b.ne 0x7101d5f378
7101d5f370  mov x8,xzr
7101d5f374  b 0x7101d5f454
7101d5f378  ldr w8,[x19, #0x210]
7101d5f37c  cmn w8,#0x1
7101d5f380  b.eq 0x7101d5f398
7101d5f384  ldr w8,[x19, #0x218]
7101d5f388  cmp w8,#0x1
7101d5f38c  b.ne 0x7101d5f398
7101d5f390  mov w8,#0x1
7101d5f394  b 0x7101d5f454
7101d5f398  ldr w8,[x19, #0x310]
7101d5f39c  cmn w8,#0x1
7101d5f3a0  b.eq 0x7101d5f3b8
7101d5f3a4  ldr w8,[x19, #0x318]
7101d5f3a8  cmp w8,#0x1
7101d5f3ac  b.ne 0x7101d5f3b8
7101d5f3b0  mov w8,#0x2
7101d5f3b4  b 0x7101d5f454
7101d5f3b8  ldr w8,[x19, #0x410]
7101d5f3bc  cmn w8,#0x1
7101d5f3c0  b.eq 0x7101d5f3d8
7101d5f3c4  ldr w8,[x19, #0x418]
7101d5f3c8  cmp w8,#0x1
7101d5f3cc  b.ne 0x7101d5f3d8
7101d5f3d0  orr w8,wzr,#0x3
7101d5f3d4  b 0x7101d5f454
7101d5f3d8  ldr w8,[x19, #0x510]
7101d5f3dc  cmn w8,#0x1
7101d5f3e0  b.eq 0x7101d5f3f8
7101d5f3e4  ldr w8,[x19, #0x518]
7101d5f3e8  cmp w8,#0x1
7101d5f3ec  b.ne 0x7101d5f3f8
7101d5f3f0  mov w8,#0x4
7101d5f3f4  b 0x7101d5f454
7101d5f3f8  ldr w8,[x19, #0x610]
7101d5f3fc  cmn w8,#0x1
7101d5f400  b.eq 0x7101d5f418
7101d5f404  ldr w8,[x19, #0x618]
7101d5f408  cmp w8,#0x1
7101d5f40c  b.ne 0x7101d5f418
7101d5f410  mov w8,#0x5
7101d5f414  b 0x7101d5f454
7101d5f418  ldr w8,[x19, #0x710]
7101d5f41c  cmn w8,#0x1
7101d5f420  b.eq 0x7101d5f438
7101d5f424  ldr w8,[x19, #0x718]
7101d5f428  cmp w8,#0x1
7101d5f42c  b.ne 0x7101d5f438
7101d5f430  orr w8,wzr,#0x6
7101d5f434  b 0x7101d5f454
7101d5f438  ldr w8,[x19, #0x810]
7101d5f43c  cmn w8,#0x1
7101d5f440  b.eq 0x7101d5f46c
7101d5f444  ldr w8,[x19, #0x818]
7101d5f448  cmp w8,#0x1
7101d5f44c  b.ne 0x7101d5f46c
7101d5f450  orr w8,wzr,#0x7
7101d5f454  add x8,x19,x8, LSL #0x8
7101d5f458  ldr x0,[x8, #0x128]
7101d5f45c  fmov s0,0x3f800000
7101d5f460  adrp x1,0x71043be000
7101d5f464  add x1,x1,#0x955
7101d5f468  bl 0x7103778630
7101d5f46c  ldr x8,[sp, #0x40]
7101d5f470  ldr x19,[x8, #0x80]
7101d5f474  mov x0,x19
7101d5f478  bl 0x7101d61460
7101d5f47c  ldr x9,[x19]
7101d5f480  cbz x9,0x7101d5f4a8
7101d5f484  ldp x8,x11,[x19, #0x8]
7101d5f488  and x10,x11,#0x1
7101d5f48c  orr x12,x10,x8
7101d5f490  cbz x12,0x7101d5f4a8
7101d5f494  add x0,x9,x11, ASR #0x1
7101d5f498  cbz x10,0x7101d5f4a4
7101d5f49c  ldr x9,[x0]
7101d5f4a0  ldr x8,[x9, x8, LSL #0x0]
7101d5f4a4  blr x8
7101d5f4a8  ldr w8,[x19, #0xfc]
7101d5f4ac  add w8,w8,#0x1
7101d5f4b0  str w8,[x19, #0xfc]
7101d5f4b4  ldr x8,[sp, #0x40]
7101d5f4b8  ldr x8,[x8, #0x80]
7101d5f4bc  stur x8,[x29, #-0x78]
7101d5f4c0  ldarb w8,[x20]
7101d5f4c4  tbz w8,#0x0,0x7101d61318
7101d5f4c8  adrp x8,0x71052c5000
7101d5f4cc  ldrb w8,[x8, #0x1b7]
7101d5f4d0  mov x23,#0xad79
7101d5f4d4  movk x23,#0x8ab, LSL #16
7101d5f4d8  movk x23,#0x13, LSL #32
7101d5f4dc  cbnz w8,0x7101d5f54c
7101d5f4e0  adrp x8,0x71052c5000
7101d5f4e4  add x8,x8,#0x1b0
7101d5f4e8  ldrb w9,[x8, #0x6]
7101d5f4ec  cmp w9,#0x0
7101d5f4f0  cinc x8,x8,ne
7101d5f4f4  ldrb w8,[x8]
7101d5f4f8  sub w8,w8,#0xe
7101d5f4fc  cmp w8,#0x17
7101d5f500  b.hi 0x7101d5f54c
7101d5f504  mov w9,#0x7f7
7101d5f508  movk w9,#0x80, LSL #16
7101d5f50c  lsr w8,w9,w8
7101d5f510  tbz w8,#0x0,0x7101d5f54c
7101d5f514  adrp x8,0x710532f000
7101d5f518  ldr x8,[x8, #0x820]
7101d5f51c  ldr x19,[x8, #0x8]
7101d5f520  ldr x8,[x19, #0x110]
7101d5f524  ldr x0,[x8, #0x80]
7101d5f528  bl 0x7101eefe30
7101d5f52c  ldr w8,[x19, #0xf8]
7101d5f530  cmp w8,#0x0
7101d5f534  ldrb w9,[x19, #0x142]
7101d5f538  cset w8,ne
7101d5f53c  orn w8,w8,w0
7101d5f540  and w8,w8,#0x1
7101d5f544  orr w8,w8,w9
7101d5f548  cbz w8,0x7101d6036c
7101d5f54c  bl 0x7101465a30
7101d5f550  ldarb w8,[x20]
7101d5f554  mov x19,x0
7101d5f558  tbz w8,#0x0,0x7101d61358
7101d5f55c  ldarb w8,[x20]
7101d5f560  tbz w8,#0x0,0x7101d6139c
7101d5f564  adrp x8,0x7105339000
7101d5f568  ldr x22,[x8, #0x8b0]
7101d5f56c  ldrb w8,[x19, #0x18]
7101d5f570  cmp w8,#0x0
7101d5f574  adrp x8,0x71052c5000
7101d5f578  ldrb w8,[x8, #0x1b0]
7101d5f57c  orr w10,w8,#0x8
7101d5f580  cset w9,eq
7101d5f584  cmp w10,#0x19
7101d5f588  cset w10,eq
7101d5f58c  orr w24,w10,w9
7101d5f590  tbnz w24,#0x0,0x7101d5f5bc
7101d5f594  cmp w8,#0x18
7101d5f598  b.ne 0x7101d5f5bc
7101d5f59c  ldarb w8,[x20]
7101d5f5a0  tbz w8,#0x0,0x7101d613dc
7101d5f5a4  adrp x8,0x7105305000
7101d5f5a8  ldr w8,[x8, #0xf0]
7101d5f5ac  mov w9,#0x300
7101d5f5b0  movk w9,#0x701, LSL #16
7101d5f5b4  cmp w8,w9
7101d5f5b8  cset w24,eq
7101d5f5bc  ldrb w8,[x19]
7101d5f5c0  sub w9,w8,#0x14
7101d5f5c4  cmp w9,#0x2
7101d5f5c8  b.cs 0x7101d5f5e0
7101d5f5cc  ldarb w8,[x20]
7101d5f5d0  tbz w8,#0x0,0x7101d6141c
7101d5f5d4  bl 0x710179f5b0
7101d5f5d8  mov w21,w0
7101d5f5dc  b 0x7101d5f5f4
7101d5f5e0  cmp w8,#0x25
7101d5f5e4  b.ne 0x7101d5f5f0
7101d5f5e8  mov w21,#0x1
7101d5f5ec  b 0x7101d5f5f4
7101d5f5f0  mov w21,wzr
7101d5f5f4  adrp x8,0x71052c3000
7101d5f5f8  ldr x8,[x8, #0x910]
7101d5f5fc  ldr x1,[x8]
7101d5f600  sub x0,x29,#0x98
7101d5f604  mov x2,x23
7101d5f608  bl 0x71015435c0
7101d5f60c  ldur x19,[x29, #-0x98]
7101d5f610  str w24,[sp, #0x38]
7101d5f614  cbz x19,0x7101d5fcf0
7101d5f618  str x23,[sp, #0x50]
7101d5f61c  ldr x8,[x19]
7101d5f620  ldr x8,[x8, #0x18]
7101d5f624  add x1,sp,#0x50
7101d5f628  mov x0,x19
7101d5f62c  blr x8
7101d5f630  tbz w0,#0x0,0x7101d5fcf0
7101d5f634  ldur x13,[x29, #-0x78]
7101d5f638  add x8,x13,#0x910
7101d5f63c  fmov s8,0x3f800000
7101d5f640  add x14,x13,#0xf8
7101d5f644  mov w23,#0x260
7101d5f648  adrp x15,0x7105339000
7101d5f64c  add x15,x15,#0x830
7101d5f650  str x8,[sp, #0x28]
7101d5f654  mov w8,#0x1
7101d5f658  mov x20,xzr
7101d5f65c  orr w26,w24,w21
7101d5f660  add x24,x22,#0x8
7101d5f664  str wzr,[sp, #0x14]
7101d5f668  str wzr,[sp, #0x8]
7101d5f66c  str wzr,[sp, #0x3c]
7101d5f670  str wzr,[sp, #0x34]
7101d5f674  str x14,[sp, #0x48]
7101d5f678  str w26,[sp, #0x24]
7101d5f67c  str w8,[sp, #0xc]
7101d5f680  mov w8,#0x1
7101d5f684  str x19,[sp, #0x18]
7101d5f688  str w8,[sp, #0x10]
7101d5f68c  add x19,x13,x20, LSL #0x8
7101d5f690  ldrsw x8,[x19, #0x114]
7101d5f694  cmn w8,#0x1
7101d5f698  b.eq 0x7101d5fcb4
7101d5f69c  madd x9,x8,x23,x25
7101d5f6a0  ldrsw x10,[x9, #0x5cc]
7101d5f6a4  ldrb w11,[x24]
7101d5f6a8  cmp x10,#0xa
7101d5f6ac  cset w9,cc
7101d5f6b0  cmp w11,#0x0
7101d5f6b4  cset w11,ne
7101d5f6b8  and w11,w9,w11
7101d5f6bc  mov x9,x15
7101d5f6c0  cmp w11,#0x1
7101d5f6c4  b.ne 0x7101d5f6d8
7101d5f6c8  adrp x9,0x7105339000
7101d5f6cc  add x9,x9,#0x860
7101d5f6d0  ldr x9,[x9, x10, LSL #0x3]
7101d5f6d4  cbz x9,0x7101d5f6fc
7101d5f6d8  ldr x9,[x9, #0x10]
7101d5f6dc  ldrb w9,[x9, #0xb8]
7101d5f6e0  cbz w9,0x7101d5f6fc
7101d5f6e4  cmp w9,#0x0
7101d5f6e8  cset w9,ne
7101d5f6ec  and w9,w21,w9
7101d5f6f0  tbnz w9,#0x0,0x7101d5fcb4
7101d5f6f4  mov w9,#0x1
7101d5f6f8  str w9,[sp, #0x3c]
7101d5f6fc  madd x9,x8,x23,x25
7101d5f700  ldrsw x8,[x9, #0x5bc]
7101d5f704  cmn w8,#0x1
7101d5f708  b.eq 0x7101d5fcb4
7101d5f70c  tbz w26,#0x0,0x7101d5f754
7101d5f710  cmn w10,#0x1
7101d5f714  b.eq 0x7101d5f7b0
7101d5f718  mov x12,x15
7101d5f71c  cbz w11,0x7101d5f730
7101d5f720  adrp x11,0x7105339000
7101d5f724  add x11,x11,#0x860
7101d5f728  ldr x12,[x11, x10, LSL #0x3]
7101d5f72c  cbz x12,0x7101d5f7b0
7101d5f730  ldr x11,[x12, #0x10]
7101d5f734  ldr w12,[x11, #0x9c]
7101d5f738  cmp w12,#0x4
7101d5f73c  b.eq 0x7101d5f760
7101d5f740  cmp w12,#0x3
7101d5f744  b.ne 0x7101d5f768
7101d5f748  ldrb w11,[x11, #0xa]
7101d5f74c  tbz w11,#0x0,0x7101d5f768
7101d5f750  b 0x7101d5f7b0
7101d5f754  mov w25,wzr
7101d5f758  mov w27,wzr
7101d5f75c  b 0x7101d5f7bc
7101d5f760  ldrb w11,[x11, #0xa]
7101d5f764  tbnz w11,#0x1,0x7101d5f7b0
7101d5f768  adrp x11,0x710593b000
7101d5f76c  ldr x11,[x11, #0x988]
7101d5f770  ldr x11,[x11, #0x8]
7101d5f774  ldr w11,[x11]
7101d5f778  cmp w11,#0x1
7101d5f77c  b.hi 0x7101d5f7b0
7101d5f780  cmp w10,#0xa
7101d5f784  b.cs 0x7101d6145c
7101d5f788  adrp x11,0x710593b000
7101d5f78c  ldr x11,[x11, #0x980]
7101d5f790  ldr x11,[x11, #0x8]
7101d5f794  orr w12,wzr,#0x30
7101d5f798  madd x10,x10,x12,x11
7101d5f79c  ldr w10,[x10, #0x4]
7101d5f7a0  tbz w10,#0x5,0x7101d5f7b4
7101d5f7a4  mov w27,wzr
7101d5f7a8  mov w25,#0x1
7101d5f7ac  b 0x7101d5f7bc
7101d5f7b0  mov w10,wzr
7101d5f7b4  mov w25,wzr
7101d5f7b8  ubfx w27,w10,#0x6,#0x1
7101d5f7bc  add x22,x9,#0x5bc
7101d5f7c0  ldr w9,[x14]
7101d5f7c4  add x28,x19,#0x114
7101d5f7c8  cmp w9,#0x2
7101d5f7cc  b.ne 0x7101d5f7fc
7101d5f7d0  cmp w8,#0x8
7101d5f7d4  b.cs 0x7101d6145c
7101d5f7d8  add x8,x13,x8, LSL #0x8
7101d5f7dc  ldr w9,[x8, #0x118]
7101d5f7e0  cbz w9,0x7101d5f808
7101d5f7e4  cmp w9,#0x1
7101d5f7e8  b.eq 0x7101d5f810
7101d5f7ec  cmp w9,#0x2
7101d5f7f0  b.ne 0x7101d5f7fc
7101d5f7f4  orr w23,wzr,#0x3
7101d5f7f8  b 0x7101d5f858
7101d5f7fc  adrp x25,0x71052c5000
7101d5f800  add x25,x25,#0x180
7101d5f804  b 0x7101d5fb04
7101d5f808  mov w23,#0x1
7101d5f80c  b 0x7101d5f858
7101d5f810  add x26,x8,#0x118
7101d5f814  bl 0x7101465a30
7101d5f818  ldrb w8,[x0]
7101d5f81c  cmp w8,#0x9
7101d5f820  mov w8,#0x2
7101d5f824  cinc w23,w8,eq
7101d5f828  ldr w8,[x26]
7101d5f82c  ldr x14,[sp, #0x48]
7101d5f830  ldur x13,[x29, #-0x78]
7101d5f834  ldr w26,[sp, #0x24]
7101d5f838  adrp x15,0x7105339000
7101d5f83c  add x15,x15,#0x830
7101d5f840  cmp w23,w8
7101d5f844  b.ne 0x7101d5f858
7101d5f848  adrp x25,0x71052c5000
7101d5f84c  add x25,x25,#0x180
7101d5f850  mov w23,#0x260
7101d5f854  b 0x7101d5fb04
7101d5f858  ldr w8,[sp, #0x38]
7101d5f85c  tbz w8,#0x0,0x7101d5f86c
7101d5f860  cbnz w25,0x7101d5f8b4
7101d5f864  mov w1,wzr
7101d5f868  b 0x7101d5f964
7101d5f86c  adrp x8,0x71052c3000
7101d5f870  ldr x8,[x8, #0x5c8]
7101d5f874  ldr x8,[x8, #0x8]
7101d5f878  ldr w26,[x8, #0xc]
7101d5f87c  adrp x8,0x71052c3000
7101d5f880  ldr x8,[x8, #0x600]
7101d5f884  ldr x0,[x8, #0x8]
7101d5f888  bl 0x710149e570
7101d5f88c  ldr w10,[sp, #0x34]
7101d5f890  cmp w26,w0
7101d5f894  cset w8,eq
7101d5f898  orr w9,w25,w8
7101d5f89c  orr w10,w10,w8
7101d5f8a0  str w10,[sp, #0x34]
7101d5f8a4  tbz w9,#0x0,0x7101d5f954
7101d5f8a8  ldur x13,[x29, #-0x78]
7101d5f8ac  ldr x14,[sp, #0x48]
7101d5f8b0  ldr w26,[sp, #0x24]
7101d5f8b4  adrp x25,0x71052c5000
7101d5f8b8  add x25,x25,#0x180
7101d5f8bc  cmp w23,#0x3
7101d5f8c0  b.ne 0x7101d5f974
7101d5f8c4  ldr w8,[sp, #0x10]
7101d5f8c8  tbz w8,#0x0,0x7101d5fa00
7101d5f8cc  mov x1,#0x4a0d
7101d5f8d0  movk x1,#0xd04e, LSL #16
7101d5f8d4  add x0,sp,#0x50
7101d5f8d8  movk x1,#0x15, LSL #32
7101d5f8dc  bl 0x71024076d0
7101d5f8e0  adrp x8,0x7104f73000
7101d5f8e4  add x8,x8,#0xd50
7101d5f8e8  str x8,[sp, #0x58]
7101d5f8ec  ldr x8,[sp, #0x60]
7101d5f8f0  cbz x8,0x7101d5f92c
7101d5f8f4  adrp x9,0x7106dd5000
7101d5f8f8  ldrb w9,[x9, #0x3a8]
7101d5f8fc  cmp w9,#0x1
7101d5f900  b.ne 0x7101d5f92c
7101d5f904  adrp x10,0x7106dd5000
7101d5f908  ldr w9,[sp, #0x68]
7101d5f90c  ldr w10,[x10, #0x3ac]
7101d5f910  cmp w9,w10
7101d5f914  b.ne 0x7101d5f92c
7101d5f918  ldr wzr,[x8, #0x38]!
7101d5f91c  ldaxr w9,[x8]
7101d5f920  sub w9,w9,#0x1
7101d5f924  stlxr w10,w9,[x8]
7101d5f928  cbnz w10,0x7101d5f91c
7101d5f92c  ldr w8,[sp, #0x38]
7101d5f930  ldur x13,[x29, #-0x78]
7101d5f934  str xzr,[sp, #0x60]
7101d5f938  ldr x14,[sp, #0x48]
7101d5f93c  strb wzr,[sp, #0x70]
7101d5f940  str w8,[sp, #0x10]
7101d5f944  tbnz w26,#0x0,0x7101d5fa08
7101d5f948  mov w1,#0x1
7101d5f94c  tbz w21,#0x0,0x7101d5fa64
7101d5f950  b 0x7101d5faf8
7101d5f954  ldur x13,[x29, #-0x78]
7101d5f958  ldr x14,[sp, #0x48]
7101d5f95c  mov w1,wzr
7101d5f960  ldr w26,[sp, #0x24]
7101d5f964  adrp x25,0x71052c5000
7101d5f968  add x25,x25,#0x180
7101d5f96c  tbnz w21,#0x0,0x7101d5faf8
7101d5f970  b 0x7101d5fa64
7101d5f974  ldr w8,[sp, #0xc]
7101d5f978  tbz w8,#0x0,0x7101d5fa58
7101d5f97c  mov x1,#0x23f5
7101d5f980  movk x1,#0x57a5, LSL #16
7101d5f984  sub x0,x29,#0xd8
7101d5f988  movk x1,#0xf, LSL #32
7101d5f98c  bl 0x71024076d0
7101d5f990  adrp x8,0x7104f73000
7101d5f994  add x8,x8,#0xd50
7101d5f998  stur x8,[x29, #-0xd0]
7101d5f99c  ldur x8,[x29, #-0xc8]
7101d5f9a0  cbz x8,0x7101d5f9dc
7101d5f9a4  adrp x9,0x7106dd5000
7101d5f9a8  ldrb w9,[x9, #0x3a8]
7101d5f9ac  cmp w9,#0x1
7101d5f9b0  b.ne 0x7101d5f9dc
7101d5f9b4  adrp x10,0x7106dd5000
7101d5f9b8  ldur w9,[x29, #-0xc0]
7101d5f9bc  ldr w10,[x10, #0x3ac]
7101d5f9c0  cmp w9,w10
7101d5f9c4  b.ne 0x7101d5f9dc
7101d5f9c8  ldr wzr,[x8, #0x38]!
7101d5f9cc  ldaxr w9,[x8]
7101d5f9d0  sub w9,w9,#0x1
7101d5f9d4  stlxr w10,w9,[x8]
7101d5f9d8  cbnz w10,0x7101d5f9cc
7101d5f9dc  ldr w8,[sp, #0x38]
7101d5f9e0  ldur x13,[x29, #-0x78]
7101d5f9e4  mov w1,#0x1
7101d5f9e8  ldr x14,[sp, #0x48]
7101d5f9ec  stur xzr,[x29, #-0xc8]
7101d5f9f0  str w8,[sp, #0xc]
7101d5f9f4  sturb wzr,[x29, #-0xb8]
7101d5f9f8  tbz w21,#0x0,0x7101d5fa64
7101d5f9fc  b 0x7101d5faf8
7101d5fa00  str wzr,[sp, #0x10]
7101d5fa04  tbz w26,#0x0,0x7101d5f948
7101d5fa08  adrp x8,0x71052c5000
7101d5fa0c  ldr x8,[x8, #0x120]
7101d5fa10  ldr w1,[x19, #0x140]
7101d5fa14  mov v0.16B,v8.16B
7101d5fa18  mov v1.16B,v8.16B
7101d5fa1c  mov x2,#0xcbbf
7101d5fa20  movk x2,#0x3b5a, LSL #16
7101d5fa24  movk x2,#0x15, LSL #32
7101d5fa28  mov w3,wzr
7101d5fa2c  mov w4,wzr
7101d5fa30  mov w5,wzr
7101d5fa34  mov w6,wzr
7101d5fa38  mov w7,wzr
7101d5fa3c  ldr x0,[x8, #0x8]
7101d5fa40  bl 0x710175dfc0
7101d5fa44  ldr x14,[sp, #0x48]
7101d5fa48  ldur x13,[x29, #-0x78]
7101d5fa4c  mov w1,#0x1
7101d5fa50  tbz w21,#0x0,0x7101d5fa64
7101d5fa54  b 0x7101d5faf8
7101d5fa58  str wzr,[sp, #0xc]
7101d5fa5c  mov w1,#0x1
7101d5fa60  tbnz w21,#0x0,0x7101d5faf8
7101d5fa64  ldr x0,[sp, #0x18]
7101d5fa68  ldr x8,[x0]
7101d5fa6c  ldr x8,[x8, #0x120]
7101d5fa70  orr w4,wzr,#0x3
7101d5fa74  mov w5,#0x1
7101d5fa78  mov x2,x28
7101d5fa7c  mov w3,w23
7101d5fa80  blr x8
7101d5fa84  tbnz w0,#0x1f,0x7101d5faf0
7101d5fa88  mov w8,#0x1
7101d5fa8c  lsl w19,w8,w20
7101d5fa90  ldr w8,[sp, #0x14]
7101d5fa94  ldur x13,[x29, #-0x78]
7101d5fa98  ldr x14,[sp, #0x48]
7101d5fa9c  tst w8,w19
7101d5faa0  mov w23,#0x260
7101d5faa4  b.ne 0x7101d5fafc
7101d5faa8  ldrsw x8,[x22]
7101d5faac  cmn w8,#0x1
7101d5fab0  b.eq 0x7101d5fae0
7101d5fab4  ldr w9,[x14]
7101d5fab8  cmp w9,#0x2
7101d5fabc  b.ne 0x7101d5fae0
7101d5fac0  cmp w8,#0x8
7101d5fac4  b.cs 0x7101d6145c
7101d5fac8  add x8,x13,x8, LSL #0x8
7101d5facc  mov w1,w0
7101d5fad0  add x0,x8,#0x110
7101d5fad4  bl 0x7101d5aa30
7101d5fad8  ldur x13,[x29, #-0x78]
7101d5fadc  ldr x14,[sp, #0x48]
7101d5fae0  ldr w8,[sp, #0x14]
7101d5fae4  orr w8,w8,w19
7101d5fae8  str w8,[sp, #0x14]
7101d5faec  b 0x7101d5fafc
7101d5faf0  ldur x13,[x29, #-0x78]
7101d5faf4  ldr x14,[sp, #0x48]
7101d5faf8  mov w23,#0x260
7101d5fafc  adrp x15,0x7105339000
7101d5fb00  add x15,x15,#0x830
7101d5fb04  ldrsw x8,[x22]
7101d5fb08  cmn w8,#0x1
7101d5fb0c  b.eq 0x7101d5fcb4
7101d5fb10  ldr w9,[x14]
7101d5fb14  cmp w9,#0x2
7101d5fb18  b.ne 0x7101d5fcb4
7101d5fb1c  cmp w8,#0x8
7101d5fb20  b.cs 0x7101d6145c
7101d5fb24  add x8,x13,x8, LSL #0x8
7101d5fb28  ldr w9,[x8, #0x118]
7101d5fb2c  cmp w9,#0x3
7101d5fb30  b.eq 0x7101d5fc68
7101d5fb34  cmp w9,#0x2
7101d5fb38  b.ne 0x7101d5fcb4
7101d5fb3c  ldr x8,[sp, #0x28]
7101d5fb40  ldrb w8,[x8]
7101d5fb44  cmp w8,#0x0
7101d5fb48  mov w8,#0x1
7101d5fb4c  cinc w19,w8,ne
7101d5fb50  mov w8,#0x2
7101d5fb54  cmp w19,w8
7101d5fb58  b.eq 0x7101d5fcb4
7101d5fb5c  cbz w27,0x7101d5fbd8
7101d5fb60  mov x1,#0xfe8c
7101d5fb64  movk x1,#0x53df, LSL #16
7101d5fb68  add x0,sp,#0xd8
7101d5fb6c  movk x1,#0x10, LSL #32
7101d5fb70  bl 0x71024076d0
7101d5fb74  adrp x8,0x7104f73000
7101d5fb78  add x8,x8,#0xd50
7101d5fb7c  str x8,[sp, #0xe0]
7101d5fb80  ldr x8,[sp, #0xe8]
7101d5fb84  cbz x8,0x7101d5fbc0
7101d5fb88  adrp x9,0x7106dd5000
7101d5fb8c  ldrb w9,[x9, #0x3a8]
7101d5fb90  cmp w9,#0x1
7101d5fb94  b.ne 0x7101d5fbc0
7101d5fb98  adrp x10,0x7106dd5000
7101d5fb9c  ldr w9,[sp, #0xf0]
7101d5fba0  ldr w10,[x10, #0x3ac]
7101d5fba4  cmp w9,w10
7101d5fba8  b.ne 0x7101d5fbc0
7101d5fbac  ldr wzr,[x8, #0x38]!
7101d5fbb0  ldaxr w9,[x8]
7101d5fbb4  sub w9,w9,#0x1
7101d5fbb8  stlxr w10,w9,[x8]
7101d5fbbc  cbnz w10,0x7101d5fbb0
7101d5fbc0  ldur x13,[x29, #-0x78]
7101d5fbc4  ldr x14,[sp, #0x48]
7101d5fbc8  adrp x15,0x7105339000
7101d5fbcc  add x15,x15,#0x830
7101d5fbd0  str xzr,[sp, #0xe8]
7101d5fbd4  strb wzr,[sp, #0xf8]
7101d5fbd8  tbnz w21,#0x0,0x7101d5fcb4
7101d5fbdc  ldr x0,[sp, #0x18]
7101d5fbe0  ldr x8,[x0]
7101d5fbe4  ldr x8,[x8, #0x120]
7101d5fbe8  mov w4,#0x2
7101d5fbec  mov w1,w27
7101d5fbf0  mov x2,x28
7101d5fbf4  mov w3,w19
7101d5fbf8  mov w5,wzr
7101d5fbfc  blr x8
7101d5fc00  tbnz w0,#0x1f,0x7101d5fca4
7101d5fc04  mov w8,#0x1
7101d5fc08  lsl w19,w8,w20
7101d5fc0c  ldr w8,[sp, #0x8]
7101d5fc10  ldur x13,[x29, #-0x78]
7101d5fc14  ldr x14,[sp, #0x48]
7101d5fc18  tst w8,w19
7101d5fc1c  b.ne 0x7101d5fcac
7101d5fc20  ldrsw x8,[x22]
7101d5fc24  cmn w8,#0x1
7101d5fc28  b.eq 0x7101d5fc58
7101d5fc2c  ldr w9,[x14]
7101d5fc30  cmp w9,#0x2
7101d5fc34  b.ne 0x7101d5fc58
7101d5fc38  cmp w8,#0x8
7101d5fc3c  b.cs 0x7101d6145c
7101d5fc40  add x8,x13,x8, LSL #0x8
7101d5fc44  mov w1,w0
7101d5fc48  add x0,x8,#0x110
7101d5fc4c  bl 0x7101d5aa30
7101d5fc50  ldur x13,[x29, #-0x78]
7101d5fc54  ldr x14,[sp, #0x48]
7101d5fc58  ldr w8,[sp, #0x8]
7101d5fc5c  orr w8,w8,w19
7101d5fc60  str w8,[sp, #0x8]
7101d5fc64  b 0x7101d5fcac
7101d5fc68  add x23,x8,#0x118
7101d5fc6c  bl 0x7101465a30
7101d5fc70  ldrb w8,[x0]
7101d5fc74  cmp w8,#0x9
7101d5fc78  mov w8,#0x1
7101d5fc7c  ldr x14,[sp, #0x48]
7101d5fc80  ldur x13,[x29, #-0x78]
7101d5fc84  cinc w19,w8,ne
7101d5fc88  ldr w8,[x23]
7101d5fc8c  adrp x15,0x7105339000
7101d5fc90  add x15,x15,#0x830
7101d5fc94  mov w23,#0x260
7101d5fc98  cmp w19,w8
7101d5fc9c  b.ne 0x7101d5fb5c
7101d5fca0  b 0x7101d5fcb4
7101d5fca4  ldur x13,[x29, #-0x78]
7101d5fca8  ldr x14,[sp, #0x48]
7101d5fcac  adrp x15,0x7105339000
7101d5fcb0  add x15,x15,#0x830
7101d5fcb4  add x20,x20,#0x1
7101d5fcb8  cmp x20,#0x8
7101d5fcbc  b.cc 0x7101d5f68c
7101d5fcc0  ldr w8,[sp, #0x34]
7101d5fcc4  tbz w8,#0x0,0x7101d5fcd8
7101d5fcc8  adrp x8,0x71052c3000
7101d5fccc  ldr x8,[x8, #0x5c8]
7101d5fcd0  ldr x8,[x8, #0x8]
7101d5fcd4  str wzr,[x8, #0xc]
7101d5fcd8  ldr w8,[sp, #0x3c]
7101d5fcdc  tst w8,#0x1
7101d5fce0  cset w8,eq
7101d5fce4  and w8,w26,w8
7101d5fce8  tbnz w8,#0x0,0x7101d5fd0c
7101d5fcec  b 0x7101d601fc
7101d5fcf0  ldur x13,[x29, #-0x78]
7101d5fcf4  orr w8,w24,w21
7101d5fcf8  tbz w8,#0x0,0x7101d601fc
7101d5fcfc  add x14,x13,#0xf8
7101d5fd00  add x8,x13,#0x910
7101d5fd04  add x24,x22,#0x8
7101d5fd08  str x8,[sp, #0x28]
7101d5fd0c  mov x20,xzr
7101d5fd10  adrp x19,0x7105339000
7101d5fd14  add x19,x19,#0x830
7101d5fd18  adrp x27,0x71052c5000
7101d5fd1c  add x27,x27,#0x73c
7101d5fd20  str x14,[sp, #0x48]
7101d5fd24  adrp x23,0x710593b000
7101d5fd28  adrp x11,0x710593b000
7101d5fd2c  orr w12,wzr,#0x30
7101d5fd30  adrp x22,0x7105339000
7101d5fd34  add x22,x22,#0x860
7101d5fd38  ldrb w8,[x24]
7101d5fd3c  cbz w8,0x7101d5fd4c
7101d5fd40  ldr x8,[x22, x20, LSL #0x3]
7101d5fd44  cbnz x8,0x7101d5fd50
7101d5fd48  b 0x7101d60060
7101d5fd4c  mov x8,x19
7101d5fd50  ldr x8,[x8, #0x10]
7101d5fd54  ldrb w8,[x8, #0xb8]
7101d5fd58  cbz w8,0x7101d60060
7101d5fd5c  mov x25,xzr
7101d5fd60  mov w15,wzr
7101d5fd64  mov w28,wzr
7101d5fd68  mov w8,#0x1
7101d5fd6c  mov x26,x27
7101d5fd70  str w8,[sp, #0x3c]
7101d5fd74  b 0x7101d5fdc4
7101d5fd78  str wzr,[sp, #0x3c]
7101d5fd7c  mov w28,#0x1
7101d5fd80  b 0x7101d6004c
7101d5fd84  ldur x13,[x29, #-0x78]
7101d5fd88  mov w15,w19
7101d5fd8c  cmn w8,#0x1
7101d5fd90  b.eq 0x7101d5fdbc
7101d5fd94  ldr w9,[x14]
7101d5fd98  cmp w9,#0x2
7101d5fd9c  b.ne 0x7101d5fdbc
7101d5fda0  cmp w8,#0x8
7101d5fda4  b.cs 0x7101d6145c
7101d5fda8  mov w1,#0x2
7101d5fdac  b 0x7101d5ff1c
7101d5fdb0  mov w28,#0x1
7101d5fdb4  mov w15,#0x1
7101d5fdb8  b 0x7101d6004c
7101d5fdbc  mov w28,#0x1
7101d5fdc0  b 0x7101d5ff44
7101d5fdc4  ldr w8,[x26]
7101d5fdc8  cmn w8,#0x1
7101d5fdcc  b.eq 0x7101d6004c
7101d5fdd0  ldr w9,[x26, #0x10]
7101d5fdd4  cmn w9,#0x1
7101d5fdd8  cset w9,ne
7101d5fddc  bic w9,w9,w21
7101d5fde0  tbnz w9,#0x0,0x7101d6004c
7101d5fde4  ldrb w9,[x24]
7101d5fde8  cbz w9,0x7101d5fdf8
7101d5fdec  ldr x9,[x22, x20, LSL #0x3]
7101d5fdf0  cbnz x9,0x7101d5fdfc
7101d5fdf4  b 0x7101d6004c
7101d5fdf8  mov x9,x19
7101d5fdfc  ldr x9,[x9, #0x10]
7101d5fe00  ldr w10,[x9, #0x9c]
7101d5fe04  cmp w10,#0x4
7101d5fe08  b.eq 0x7101d5fe20
7101d5fe0c  cmp w10,#0x3
7101d5fe10  b.ne 0x7101d5fe28
7101d5fe14  ldrb w9,[x9, #0xa]
7101d5fe18  tbz w9,#0x0,0x7101d5fe28
7101d5fe1c  b 0x7101d6004c
7101d5fe20  ldrb w9,[x9, #0xa]
7101d5fe24  tbnz w9,#0x1,0x7101d6004c
7101d5fe28  ldr x9,[x23, #0x988]
7101d5fe2c  ldr x9,[x9, #0x8]
7101d5fe30  ldr w9,[x9]
7101d5fe34  cmp w9,#0x1
7101d5fe38  b.hi 0x7101d6004c
7101d5fe3c  ldr x10,[x11, #0x980]
7101d5fe40  ldr x10,[x10, #0x8]
7101d5fe44  madd x10,x20,x12,x10
7101d5fe48  ldr w10,[x10, #0x4]
7101d5fe4c  sxtw x9,w8
7101d5fe50  tbnz w10,#0x5,0x7101d5fea8
7101d5fe54  tbz w10,#0x6,0x7101d6004c
7101d5fe58  ldr w10,[x14]
7101d5fe5c  cmp w10,#0x2
7101d5fe60  b.ne 0x7101d6004c
7101d5fe64  cmp w8,#0x8
7101d5fe68  b.cs 0x7101d6145c
7101d5fe6c  add x8,x13,x9, LSL #0x8
7101d5fe70  ldr w9,[x8, #0x118]
7101d5fe74  cmp w9,#0x3
7101d5fe78  b.eq 0x7101d5ff50
7101d5fe7c  cmp w9,#0x2
7101d5fe80  b.ne 0x7101d6004c
7101d5fe84  ldr x8,[sp, #0x28]
7101d5fe88  ldrb w8,[x8]
7101d5fe8c  cmp w8,#0x0
7101d5fe90  mov w8,#0x1
7101d5fe94  cinc w1,w8,ne
7101d5fe98  mov w8,#0x2
7101d5fe9c  cmp w1,w8
7101d5fea0  b.ne 0x7101d5ff9c
7101d5fea4  b 0x7101d6004c
7101d5fea8  ldr w10,[x14]
7101d5feac  cmp w10,#0x2
7101d5feb0  b.ne 0x7101d6004c
7101d5feb4  cmp w8,#0x8
7101d5feb8  b.cs 0x7101d6145c
7101d5febc  add x9,x13,x9, LSL #0x8
7101d5fec0  ldr w10,[x9, #0x118]
7101d5fec4  cbz w10,0x7101d5ff14
7101d5fec8  cmp w10,#0x2
7101d5fecc  b.eq 0x7101d60020
7101d5fed0  cmp w10,#0x1
7101d5fed4  b.ne 0x7101d60044
7101d5fed8  mov w19,w15
7101d5fedc  add x27,x9,#0x118
7101d5fee0  bl 0x7101465a30
7101d5fee4  ldrb w9,[x0]
7101d5fee8  ldr w10,[x27]
7101d5feec  mov w8,#0x2
7101d5fef0  cmp w9,#0x9
7101d5fef4  cinc w8,w8,eq
7101d5fef8  cmp w8,w10
7101d5fefc  b.ne 0x7101d5ffd8
7101d5ff00  ldur x13,[x29, #-0x78]
7101d5ff04  ldr x14,[sp, #0x48]
7101d5ff08  adrp x27,0x71052c5000
7101d5ff0c  add x27,x27,#0x73c
7101d5ff10  b 0x7101d5ff38
7101d5ff14  mov w19,w15
7101d5ff18  mov w1,#0x1
7101d5ff1c  sxtw x8,w8
7101d5ff20  add x8,x13,x8, LSL #0x8
7101d5ff24  add x0,x8,#0x110
7101d5ff28  bl 0x7101d5aa30
7101d5ff2c  ldur x13,[x29, #-0x78]
7101d5ff30  ldr x14,[sp, #0x48]
7101d5ff34  mov w28,#0x1
7101d5ff38  adrp x11,0x710593b000
7101d5ff3c  orr w12,wzr,#0x30
7101d5ff40  mov w15,w19
7101d5ff44  adrp x19,0x7105339000
7101d5ff48  add x19,x19,#0x830
7101d5ff4c  b 0x7101d6004c
7101d5ff50  add x27,x8,#0x118
7101d5ff54  mov w19,w15
7101d5ff58  bl 0x7101465a30
7101d5ff5c  ldrb w8,[x0]
7101d5ff60  cmp w8,#0x9
7101d5ff64  mov w8,#0x1
7101d5ff68  ldr x14,[sp, #0x48]
7101d5ff6c  ldur x13,[x29, #-0x78]
7101d5ff70  cinc w1,w8,ne
7101d5ff74  ldr w8,[x27]
7101d5ff78  mov w15,w19
7101d5ff7c  adrp x19,0x7105339000
7101d5ff80  add x19,x19,#0x830
7101d5ff84  orr w12,wzr,#0x30
7101d5ff88  adrp x11,0x710593b000
7101d5ff8c  adrp x27,0x71052c5000
7101d5ff90  add x27,x27,#0x73c
7101d5ff94  cmp w1,w8
7101d5ff98  b.eq 0x7101d6004c
7101d5ff9c  ldrsw x8,[x26]
7101d5ffa0  cmn w8,#0x1
7101d5ffa4  b.eq 0x7101d5fd78
7101d5ffa8  ldr w9,[x14]
7101d5ffac  cmp w9,#0x2
7101d5ffb0  b.ne 0x7101d5fd78
7101d5ffb4  cmp w8,#0x8
7101d5ffb8  b.cs 0x7101d6145c
7101d5ffbc  add x8,x13,x8, LSL #0x8
7101d5ffc0  add x0,x8,#0x110
7101d5ffc4  mov w19,w15
7101d5ffc8  bl 0x7101d5aa30
7101d5ffcc  ldur x13,[x29, #-0x78]
7101d5ffd0  str wzr,[sp, #0x3c]
7101d5ffd4  b 0x7101d5ff30
7101d5ffd8  ldr w8,[x26]
7101d5ffdc  ldr x14,[sp, #0x48]
7101d5ffe0  cmp w9,#0x9
7101d5ffe4  adrp x27,0x71052c5000
7101d5ffe8  add x27,x27,#0x73c
7101d5ffec  adrp x11,0x710593b000
7101d5fff0  orr w12,wzr,#0x30
7101d5fff4  b.ne 0x7101d5fd84
7101d5fff8  ldur x13,[x29, #-0x78]
7101d5fffc  cmn w8,#0x1
7101d60000  adrp x19,0x7105339000
7101d60004  add x19,x19,#0x830
7101d60008  b.eq 0x7101d5fdb0
7101d6000c  ldr w9,[x14]
7101d60010  cmp w9,#0x2
7101d60014  b.ne 0x7101d5fdb0
7101d60018  cmp w8,#0x8
7101d6001c  b.cs 0x7101d6145c
7101d60020  sxtw x8,w8
7101d60024  add x8,x13,x8, LSL #0x8
7101d60028  add x0,x8,#0x110
7101d6002c  orr w1,wzr,#0x3
7101d60030  bl 0x7101d5aa30
7101d60034  ldr x14,[sp, #0x48]
7101d60038  ldur x13,[x29, #-0x78]
7101d6003c  mov w28,#0x1
7101d60040  mov w15,#0x1
7101d60044  adrp x11,0x710593b000
7101d60048  orr w12,wzr,#0x30
7101d6004c  add x25,x25,#0x1
7101d60050  add x26,x26,#0x260
7101d60054  cmp x25,#0x8
7101d60058  b.cc 0x7101d5fdc4
7101d6005c  tbnz w28,#0x0,0x7101d60070
7101d60060  add x20,x20,#0x1
7101d60064  cmp x20,#0xa
7101d60068  b.cc 0x7101d5fd38
7101d6006c  b 0x7101d601fc
7101d60070  ldr w8,[sp, #0x3c]
7101d60074  tbz w8,#0x0,0x7101d60130
7101d60078  tbz w15,#0x0,0x7101d60194
7101d6007c  mov x1,#0x4a0d
7101d60080  movk x1,#0xd04e, LSL #16
7101d60084  movk x1,#0x15, LSL #32
7101d60088  add x0,sp,#0x98
7101d6008c  bl 0x71024076d0
7101d60090  adrp x8,0x7104f73000
7101d60094  add x8,x8,#0xd50
7101d60098  str x8,[sp, #0xa0]
7101d6009c  ldr x8,[sp, #0xa8]
7101d600a0  cbz x8,0x7101d600dc
7101d600a4  adrp x9,0x7106dd5000
7101d600a8  ldrb w9,[x9, #0x3a8]
7101d600ac  cmp w9,#0x1
7101d600b0  b.ne 0x7101d600dc
7101d600b4  adrp x10,0x7106dd5000
7101d600b8  ldr w9,[sp, #0xb0]
7101d600bc  ldr w10,[x10, #0x3ac]
7101d600c0  cmp w9,w10
7101d600c4  b.ne 0x7101d600dc
7101d600c8  ldr wzr,[x8, #0x38]!
7101d600cc  ldaxr w9,[x8]
7101d600d0  sub w9,w9,#0x1
7101d600d4  stlxr w10,w9,[x8]
7101d600d8  cbnz w10,0x7101d600cc
7101d600dc  ldr w8,[sp, #0x38]
7101d600e0  orr w8,w8,w21
7101d600e4  str xzr,[sp, #0xa8]
7101d600e8  strb wzr,[sp, #0xb8]
7101d600ec  tbz w8,#0x0,0x7101d601fc
7101d600f0  adrp x8,0x71052c5000
7101d600f4  ldr x8,[x8, #0x120]
7101d600f8  fmov s0,0x3f800000
7101d600fc  mov v1.16B,v0.16B
7101d60100  mov w1,w20
7101d60104  mov w3,wzr
7101d60108  mov w4,wzr
7101d6010c  mov w5,wzr
7101d60110  mov w6,wzr
7101d60114  ldr x0,[x8, #0x8]
7101d60118  mov x2,#0xcbbf
7101d6011c  movk x2,#0x3b5a, LSL #16
7101d60120  movk x2,#0x15, LSL #32
7101d60124  mov w7,wzr
7101d60128  bl 0x710175dfc0
7101d6012c  b 0x7101d601fc
7101d60130  mov x1,#0xfe8c
7101d60134  movk x1,#0x53df, LSL #16
7101d60138  movk x1,#0x10, LSL #32
7101d6013c  add x0,sp,#0x98
7101d60140  bl 0x71024076d0
7101d60144  adrp x8,0x7104f73000
7101d60148  add x8,x8,#0xd50
7101d6014c  str x8,[sp, #0xa0]
7101d60150  ldr x8,[sp, #0xa8]
7101d60154  cbz x8,0x7101d601f4
7101d60158  adrp x9,0x7106dd5000
7101d6015c  ldrb w9,[x9, #0x3a8]
7101d60160  cmp w9,#0x1
7101d60164  b.ne 0x7101d601f4
7101d60168  adrp x10,0x7106dd5000
7101d6016c  ldr w9,[sp, #0xb0]
7101d60170  ldr w10,[x10, #0x3ac]
7101d60174  cmp w9,w10
7101d60178  b.ne 0x7101d601f4
7101d6017c  ldr wzr,[x8, #0x38]!
7101d60180  ldaxr w9,[x8]
7101d60184  sub w9,w9,#0x1
7101d60188  stlxr w10,w9,[x8]
7101d6018c  cbnz w10,0x7101d60180
7101d60190  b 0x7101d601f4
7101d60194  mov x1,#0x23f5
7101d60198  movk x1,#0x57a5, LSL #16
7101d6019c  movk x1,#0xf, LSL #32
7101d601a0  add x0,sp,#0x98
7101d601a4  bl 0x71024076d0
7101d601a8  adrp x8,0x7104f73000
7101d601ac  add x8,x8,#0xd50
7101d601b0  str x8,[sp, #0xa0]
7101d601b4  ldr x8,[sp, #0xa8]
7101d601b8  cbz x8,0x7101d601f4
7101d601bc  adrp x9,0x7106dd5000
7101d601c0  ldrb w9,[x9, #0x3a8]
7101d601c4  cmp w9,#0x1
7101d601c8  b.ne 0x7101d601f4
7101d601cc  adrp x10,0x7106dd5000
7101d601d0  ldr w9,[sp, #0xb0]
7101d601d4  ldr w10,[x10, #0x3ac]
7101d601d8  cmp w9,w10
7101d601dc  b.ne 0x7101d601f4
7101d601e0  ldr wzr,[x8, #0x38]!
7101d601e4  ldaxr w9,[x8]
7101d601e8  sub w9,w9,#0x1
7101d601ec  stlxr w10,w9,[x8]
7101d601f0  cbnz w10,0x7101d601e4
7101d601f4  str xzr,[sp, #0xa8]
7101d601f8  strb wzr,[sp, #0xb8]
7101d601fc  ldur x19,[x29, #-0x90]
7101d60200  adrp x22,0x710523d000
7101d60204  add x22,x22,#0x9a8
7101d60208  cbz x19,0x7101d6023c
7101d6020c  add x8,x19,#0x8
7101d60210  ldaxr x9,[x8]
7101d60214  sub x10,x9,#0x1
7101d60218  stlxr w11,x10,[x8]
7101d6021c  cbnz w11,0x7101d60210
7101d60220  cbnz x9,0x7101d6023c
7101d60224  ldr x8,[x19]
7101d60228  ldr x8,[x8, #0x10]
7101d6022c  mov x0,x19
7101d60230  blr x8
7101d60234  mov x0,x19
7101d60238  bl 0x71039c2670
7101d6023c  ldr x19,[sp, #0x40]
7101d60240  ldr x0,[x19, #0x80]
7101d60244  bl 0x7101d61460
7101d60248  ldr x20,[x19, #0x80]
7101d6024c  ldr w8,[x20, #0x928]
7101d60250  cbz w8,0x7101d60df8
7101d60254  ldr w8,[x20, #0xf8]
7101d60258  cmp w8,#0x1
7101d6025c  b.eq 0x7101d602f0
7101d60260  cmp w8,#0x2
7101d60264  b.ne 0x7101d60df8
7101d60268  bl 0x7101465a30
7101d6026c  adrp x8,0x7105339000
7101d60270  ldr x19,[x8, #0x8b0]
7101d60274  ldrsw x8,[x20, #0x114]
7101d60278  mov x21,x0
7101d6027c  cmn w8,#0x1
7101d60280  b.eq 0x7101d60574
7101d60284  mov w9,#0x3860
7101d60288  madd x8,x8,x9,x21
7101d6028c  ldrb w8,[x8, #0x73]
7101d60290  cbz w8,0x7101d60574
7101d60294  ldrsw x9,[x20, #0x140]
7101d60298  adrp x8,0x7105339000
7101d6029c  add x8,x8,#0x830
7101d602a0  cmp w9,#0x9
7101d602a4  b.hi 0x7101d602c0
7101d602a8  ldrb w10,[x19, #0x8]
7101d602ac  cbz w10,0x7101d602c0
7101d602b0  adrp x8,0x7105339000
7101d602b4  add x8,x8,#0x860
7101d602b8  ldr x8,[x8, x9, LSL #0x3]
7101d602bc  cbz x8,0x7101d602d0
7101d602c0  ldr x8,[x8, #0x10]
7101d602c4  ldrb w8,[x8, #0xb8]
7101d602c8  cmp w8,#0x0
7101d602cc  cset w8,ne
7101d602d0  ldrb w9,[x20, #0x1a8]
7101d602d4  cbz w9,0x7101d60568
7101d602d8  tbnz w8,#0x0,0x7101d60574
7101d602dc  add x0,x20,#0x110
7101d602e0  orr w1,wzr,#0x3
7101d602e4  strb wzr,[x20, #0x1a8]
7101d602e8  bl 0x7101d5aa30
7101d602ec  b 0x7101d60574
7101d602f0  bl 0x7101465a30
7101d602f4  adrp x8,0x7105339000
7101d602f8  ldrsw x9,[x20, #0x114]
7101d602fc  ldr x8,[x8, #0x8b0]
7101d60300  cmn w9,#0x1
7101d60304  b.eq 0x7101d60364
7101d60308  mov w10,#0x3860
7101d6030c  madd x9,x9,x10,x0
7101d60310  ldrb w9,[x9, #0x73]
7101d60314  cbz w9,0x7101d60364
7101d60318  ldrsw x10,[x20, #0x140]
7101d6031c  adrp x9,0x7105339000
7101d60320  add x9,x9,#0x830
7101d60324  cmp w10,#0x9
7101d60328  b.hi 0x7101d60344
7101d6032c  ldrb w11,[x8, #0x8]
7101d60330  cbz w11,0x7101d60344
7101d60334  adrp x9,0x7105339000
7101d60338  add x9,x9,#0x860
7101d6033c  ldr x9,[x9, x10, LSL #0x3]
7101d60340  cbz x9,0x7101d60a2c
7101d60344  ldr x9,[x9, #0x10]
7101d60348  ldrb w9,[x9, #0xb8]
7101d6034c  cmp w9,#0x0
7101d60350  cset w10,ne
7101d60354  ldrb w9,[x20, #0x1a8]
7101d60358  cbz w9,0x7101d60a38
7101d6035c  tbnz w10,#0x0,0x7101d60a44
7101d60360  strb wzr,[x20, #0x1a8]
7101d60364  mov w9,#0x1
7101d60368  b 0x7101d60a48
7101d6036c  bl 0x7101465a30
7101d60370  adrp x8,0x71052c3000
7101d60374  ldr x8,[x8, #0x910]
7101d60378  ldr x1,[x8]
7101d6037c  mov x22,x0
7101d60380  add x0,sp,#0x50
7101d60384  mov x2,x23
7101d60388  bl 0x71015435c0
7101d6038c  ldr x24,[sp, #0x50]
7101d60390  cbz x24,0x7101d6051c
7101d60394  stur x23,[x29, #-0xd8]
7101d60398  ldr x8,[x24]
7101d6039c  ldr x8,[x8, #0x18]
7101d603a0  sub x1,x29,#0xd8
7101d603a4  mov x0,x24
7101d603a8  blr x8
7101d603ac  ldur x11,[x29, #-0x78]
7101d603b0  tbz w0,#0x0,0x7101d6051c
7101d603b4  mov x19,xzr
7101d603b8  mov w20,#0x10
7101d603bc  movk w20,#0x2, LSL #16
7101d603c0  orr w21,wzr,#0x10001
7101d603c4  adrp x25,0x71052c5000
7101d603c8  mov w27,#0x3860
7101d603cc  mov w28,#0x38b0
7101d603d0  adrp x26,0x7105339000
7101d603d4  add x26,x26,#0x860
7101d603d8  add x9,x11,x19
7101d603dc  ldrsw x8,[x9, #0x114]
7101d603e0  cmn w8,#0x1
7101d603e4  b.eq 0x7101d60510
7101d603e8  ldr w9,[x9, #0x118]
7101d603ec  sub w9,w9,#0x2
7101d603f0  cmp w9,#0x3
7101d603f4  ccmp w8,#0x7,#0x2,cs
7101d603f8  b.hi 0x7101d60510
7101d603fc  ldr x9,[x25, #0xf0]
7101d60400  add x9,x9,x8, LSL #0x2
7101d60404  ldrsw x9,[x9, #0x298]
7101d60408  cmp w9,#0x9
7101d6040c  b.hi 0x7101d60510
7101d60410  adrp x10,0x7105339000
7101d60414  ldr x10,[x10, #0x8b0]
7101d60418  ldrb w10,[x10, #0x8]
7101d6041c  cbz w10,0x7101d6042c
7101d60420  ldr x9,[x26, x9, LSL #0x3]
7101d60424  cbnz x9,0x7101d60434
7101d60428  b 0x7101d60510
7101d6042c  adrp x9,0x7105339000
7101d60430  add x9,x9,#0x830
7101d60434  ldr x9,[x9, #0x10]
7101d60438  ldr w10,[x9, #0x9c]
7101d6043c  and x1,x8,#0xffffffff
7101d60440  cmp w10,#0x4
7101d60444  b.eq 0x7101d60484
7101d60448  cmp w10,#0x3
7101d6044c  b.ne 0x7101d604b8
7101d60450  ldr w9,[x9, #0x8]
7101d60454  add w10,w21,#0x1
7101d60458  bics wzr,w10,w9
7101d6045c  b.eq 0x7101d604d8
7101d60460  add w10,w21,#0x7
7101d60464  bics wzr,w10,w9
7101d60468  b.eq 0x7101d604e4
7101d6046c  bics wzr,w21,w9
7101d60470  b.eq 0x7101d604f0
7101d60474  add w10,w21,#0x3
7101d60478  bics wzr,w10,w9
7101d6047c  b.eq 0x7101d604cc
7101d60480  b 0x7101d60510
7101d60484  ldr w9,[x9, #0x8]
7101d60488  add w10,w20,#0x70
7101d6048c  bics wzr,w10,w9
7101d60490  b.eq 0x7101d604d8
7101d60494  add w10,w20,#0x10
7101d60498  bics wzr,w10,w9
7101d6049c  b.eq 0x7101d604e4
7101d604a0  add w10,w20,#0x30
7101d604a4  bics wzr,w10,w9
7101d604a8  b.eq 0x7101d604f0
7101d604ac  bics wzr,w20,w9
7101d604b0  b.eq 0x7101d604cc
7101d604b4  b 0x7101d60510
7101d604b8  ldr w9,[x9, #0x88]
7101d604bc  tbnz w9,#0x0,0x7101d604d8
7101d604c0  tbnz w9,#0x2,0x7101d604e4
7101d604c4  tbnz w9,#0x3,0x7101d604f0
7101d604c8  tbz w9,#0x1,0x7101d60510
7101d604cc  madd x8,x8,x27,x22
7101d604d0  mov w9,#0x38b3
7101d604d4  b 0x7101d604f8
7101d604d8  madd x8,x8,x27,x22
7101d604dc  ldrb w2,[x8, x28, LSL ]
7101d604e0  b 0x7101d604fc
7101d604e4  madd x8,x8,x27,x22
7101d604e8  mov w9,#0x38b1
7101d604ec  b 0x7101d604f8
7101d604f0  madd x8,x8,x27,x22
7101d604f4  mov w9,#0x38b2
7101d604f8  ldrb w2,[x8, x9, LSL ]
7101d604fc  ldr x8,[x24]
7101d60500  ldr x8,[x8, #0xe0]
7101d60504  mov x0,x24
7101d60508  blr x8
7101d6050c  ldur x11,[x29, #-0x78]
7101d60510  add x19,x19,#0x100
7101d60514  cmp x19,#0x800
7101d60518  b.ne 0x7101d603d8
7101d6051c  ldr x19,[sp, #0x58]
7101d60520  adrp x25,0x71052c5000
7101d60524  add x25,x25,#0x180
7101d60528  adrp x20,0x7105314000
7101d6052c  add x20,x20,#0x4d8
7101d60530  cbz x19,0x7101d5f54c
7101d60534  add x8,x19,#0x8
7101d60538  ldaxr x9,[x8]
7101d6053c  sub x10,x9,#0x1
7101d60540  stlxr w11,x10,[x8]
7101d60544  cbnz w11,0x7101d60538
7101d60548  cbnz x9,0x7101d5f54c
7101d6054c  ldr x8,[x19]
7101d60550  ldr x8,[x8, #0x10]
7101d60554  mov x0,x19
7101d60558  blr x8
7101d6055c  mov x0,x19
7101d60560  bl 0x71039c2670
7101d60564  b 0x7101d5f54c
7101d60568  cbz w8,0x7101d60574
7101d6056c  mov w8,#0x1
7101d60570  strb w8,[x20, #0x1a8]
7101d60574  ldrsw x8,[x20, #0x214]
7101d60578  cmn w8,#0x1
7101d6057c  b.eq 0x7101d605f8
7101d60580  mov w9,#0x3860
7101d60584  madd x8,x8,x9,x21
7101d60588  ldrb w8,[x8, #0x73]
7101d6058c  cbz w8,0x7101d605f8
7101d60590  ldrsw x9,[x20, #0x240]
7101d60594  adrp x8,0x7105339000
7101d60598  add x8,x8,#0x830
7101d6059c  cmp w9,#0x9
7101d605a0  b.hi 0x7101d605bc
7101d605a4  ldrb w10,[x19, #0x8]
7101d605a8  cbz w10,0x7101d605bc
7101d605ac  adrp x8,0x7105339000
7101d605b0  add x8,x8,#0x860
7101d605b4  ldr x8,[x8, x9, LSL #0x3]
7101d605b8  cbz x8,0x7101d605cc
7101d605bc  ldr x8,[x8, #0x10]
7101d605c0  ldrb w8,[x8, #0xb8]
7101d605c4  cmp w8,#0x0
7101d605c8  cset w8,ne
7101d605cc  ldrb w9,[x20, #0x2a8]
7101d605d0  cbz w9,0x7101d605ec
7101d605d4  tbnz w8,#0x0,0x7101d605f8
7101d605d8  add x0,x20,#0x210
7101d605dc  orr w1,wzr,#0x3
7101d605e0  strb wzr,[x20, #0x2a8]
7101d605e4  bl 0x7101d5aa30
7101d605e8  b 0x7101d605f8
7101d605ec  cbz w8,0x7101d605f8
7101d605f0  mov w8,#0x1
7101d605f4  strb w8,[x20, #0x2a8]
7101d605f8  ldrsw x8,[x20, #0x314]
7101d605fc  cmn w8,#0x1
7101d60600  b.eq 0x7101d6067c
7101d60604  mov w9,#0x3860
7101d60608  madd x8,x8,x9,x21
7101d6060c  ldrb w8,[x8, #0x73]
7101d60610  cbz w8,0x7101d6067c
7101d60614  ldrsw x9,[x20, #0x340]
7101d60618  adrp x8,0x7105339000
7101d6061c  add x8,x8,#0x830
7101d60620  cmp w9,#0x9
7101d60624  b.hi 0x7101d60640
7101d60628  ldrb w10,[x19, #0x8]
7101d6062c  cbz w10,0x7101d60640
7101d60630  adrp x8,0x7105339000
7101d60634  add x8,x8,#0x860
7101d60638  ldr x8,[x8, x9, LSL #0x3]
7101d6063c  cbz x8,0x7101d60650
7101d60640  ldr x8,[x8, #0x10]
7101d60644  ldrb w8,[x8, #0xb8]
7101d60648  cmp w8,#0x0
7101d6064c  cset w8,ne
7101d60650  ldrb w9,[x20, #0x3a8]
7101d60654  cbz w9,0x7101d60670
7101d60658  tbnz w8,#0x0,0x7101d6067c
7101d6065c  add x0,x20,#0x310
7101d60660  orr w1,wzr,#0x3
7101d60664  strb wzr,[x20, #0x3a8]
7101d60668  bl 0x7101d5aa30
7101d6066c  b 0x7101d6067c
7101d60670  cbz w8,0x7101d6067c
7101d60674  mov w8,#0x1
7101d60678  strb w8,[x20, #0x3a8]
7101d6067c  ldrsw x8,[x20, #0x414]
7101d60680  cmn w8,#0x1
7101d60684  b.eq 0x7101d60700
7101d60688  mov w9,#0x3860
7101d6068c  madd x8,x8,x9,x21
7101d60690  ldrb w8,[x8, #0x73]
7101d60694  cbz w8,0x7101d60700
7101d60698  ldrsw x9,[x20, #0x440]
7101d6069c  adrp x8,0x7105339000
7101d606a0  add x8,x8,#0x830
7101d606a4  cmp w9,#0x9
7101d606a8  b.hi 0x7101d606c4
7101d606ac  ldrb w10,[x19, #0x8]
7101d606b0  cbz w10,0x7101d606c4
7101d606b4  adrp x8,0x7105339000
7101d606b8  add x8,x8,#0x860
7101d606bc  ldr x8,[x8, x9, LSL #0x3]
7101d606c0  cbz x8,0x7101d606d4
7101d606c4  ldr x8,[x8, #0x10]
7101d606c8  ldrb w8,[x8, #0xb8]
7101d606cc  cmp w8,#0x0
7101d606d0  cset w8,ne
7101d606d4  ldrb w9,[x20, #0x4a8]
7101d606d8  cbz w9,0x7101d606f4
7101d606dc  tbnz w8,#0x0,0x7101d60700
7101d606e0  add x0,x20,#0x410
7101d606e4  orr w1,wzr,#0x3
7101d606e8  strb wzr,[x20, #0x4a8]
7101d606ec  bl 0x7101d5aa30
7101d606f0  b 0x7101d60700
7101d606f4  cbz w8,0x7101d60700
7101d606f8  mov w8,#0x1
7101d606fc  strb w8,[x20, #0x4a8]
7101d60700  ldrsw x8,[x20, #0x514]
7101d60704  cmn w8,#0x1
7101d60708  b.eq 0x7101d60784
7101d6070c  mov w9,#0x3860
7101d60710  madd x8,x8,x9,x21
7101d60714  ldrb w8,[x8, #0x73]
7101d60718  cbz w8,0x7101d60784
7101d6071c  ldrsw x9,[x20, #0x540]
7101d60720  adrp x8,0x7105339000
7101d60724  add x8,x8,#0x830
7101d60728  cmp w9,#0x9
7101d6072c  b.hi 0x7101d60748
7101d60730  ldrb w10,[x19, #0x8]
7101d60734  cbz w10,0x7101d60748
7101d60738  adrp x8,0x7105339000
7101d6073c  add x8,x8,#0x860
7101d60740  ldr x8,[x8, x9, LSL #0x3]
7101d60744  cbz x8,0x7101d60758
7101d60748  ldr x8,[x8, #0x10]
7101d6074c  ldrb w8,[x8, #0xb8]
7101d60750  cmp w8,#0x0
7101d60754  cset w8,ne
7101d60758  ldrb w9,[x20, #0x5a8]
7101d6075c  cbz w9,0x7101d60778
7101d60760  tbnz w8,#0x0,0x7101d60784
7101d60764  add x0,x20,#0x510
7101d60768  orr w1,wzr,#0x3
7101d6076c  strb wzr,[x20, #0x5a8]
7101d60770  bl 0x7101d5aa30
7101d60774  b 0x7101d60784
7101d60778  cbz w8,0x7101d60784
7101d6077c  mov w8,#0x1
7101d60780  strb w8,[x20, #0x5a8]
7101d60784  ldrsw x8,[x20, #0x614]
7101d60788  cmn w8,#0x1
7101d6078c  b.eq 0x7101d60808
7101d60790  mov w9,#0x3860
7101d60794  madd x8,x8,x9,x21
7101d60798  ldrb w8,[x8, #0x73]
7101d6079c  cbz w8,0x7101d60808
7101d607a0  ldrsw x9,[x20, #0x640]
7101d607a4  adrp x8,0x7105339000
7101d607a8  add x8,x8,#0x830
7101d607ac  cmp w9,#0x9
7101d607b0  b.hi 0x7101d607cc
7101d607b4  ldrb w10,[x19, #0x8]
7101d607b8  cbz w10,0x7101d607cc
7101d607bc  adrp x8,0x7105339000
7101d607c0  add x8,x8,#0x860
7101d607c4  ldr x8,[x8, x9, LSL #0x3]
7101d607c8  cbz x8,0x7101d607dc
7101d607cc  ldr x8,[x8, #0x10]
7101d607d0  ldrb w8,[x8, #0xb8]
7101d607d4  cmp w8,#0x0
7101d607d8  cset w8,ne
7101d607dc  ldrb w9,[x20, #0x6a8]
7101d607e0  cbz w9,0x7101d607fc
7101d607e4  tbnz w8,#0x0,0x7101d60808
7101d607e8  add x0,x20,#0x610
7101d607ec  orr w1,wzr,#0x3
7101d607f0  strb wzr,[x20, #0x6a8]
7101d607f4  bl 0x7101d5aa30
7101d607f8  b 0x7101d60808
7101d607fc  cbz w8,0x7101d60808
7101d60800  mov w8,#0x1
7101d60804  strb w8,[x20, #0x6a8]
7101d60808  ldrsw x8,[x20, #0x714]
7101d6080c  cmn w8,#0x1
7101d60810  b.eq 0x7101d6088c
7101d60814  mov w9,#0x3860
7101d60818  madd x8,x8,x9,x21
7101d6081c  ldrb w8,[x8, #0x73]
7101d60820  cbz w8,0x7101d6088c
7101d60824  ldrsw x9,[x20, #0x740]
7101d60828  adrp x8,0x7105339000
7101d6082c  add x8,x8,#0x830
7101d60830  cmp w9,#0x9
7101d60834  b.hi 0x7101d60850
7101d60838  ldrb w10,[x19, #0x8]
7101d6083c  cbz w10,0x7101d60850
7101d60840  adrp x8,0x7105339000
7101d60844  add x8,x8,#0x860
7101d60848  ldr x8,[x8, x9, LSL #0x3]
7101d6084c  cbz x8,0x7101d60860
7101d60850  ldr x8,[x8, #0x10]
7101d60854  ldrb w8,[x8, #0xb8]
7101d60858  cmp w8,#0x0
7101d6085c  cset w8,ne
7101d60860  ldrb w9,[x20, #0x7a8]
7101d60864  cbz w9,0x7101d60880
7101d60868  tbnz w8,#0x0,0x7101d6088c
7101d6086c  add x0,x20,#0x710
7101d60870  orr w1,wzr,#0x3
7101d60874  strb wzr,[x20, #0x7a8]
7101d60878  bl 0x7101d5aa30
7101d6087c  b 0x7101d6088c
7101d60880  cbz w8,0x7101d6088c
7101d60884  mov w8,#0x1
7101d60888  strb w8,[x20, #0x7a8]
7101d6088c  ldrsw x8,[x20, #0x814]
7101d60890  cmn w8,#0x1
7101d60894  b.eq 0x7101d60df8
7101d60898  mov w9,#0x3860
7101d6089c  madd x8,x8,x9,x21
7101d608a0  ldrb w8,[x8, #0x73]
7101d608a4  cbz w8,0x7101d60df8
7101d608a8  ldrsw x9,[x20, #0x840]
7101d608ac  adrp x8,0x7105339000
7101d608b0  add x8,x8,#0x830
7101d608b4  cmp w9,#0x9
7101d608b8  b.hi 0x7101d608d4
7101d608bc  ldrb w10,[x19, #0x8]
7101d608c0  cbz w10,0x7101d608d4
7101d608c4  adrp x8,0x7105339000
7101d608c8  add x8,x8,#0x860
7101d608cc  ldr x8,[x8, x9, LSL #0x3]
7101d608d0  cbz x8,0x7101d608e4
7101d608d4  ldr x8,[x8, #0x10]
7101d608d8  ldrb w8,[x8, #0xb8]
7101d608dc  cmp w8,#0x0
7101d608e0  cset w8,ne
7101d608e4  ldrb w9,[x20, #0x8a8]
7101d608e8  cbz w9,0x7101d60904
7101d608ec  tbnz w8,#0x0,0x7101d60df8
7101d608f0  add x0,x20,#0x810
7101d608f4  orr w1,wzr,#0x3
7101d608f8  strb wzr,[x20, #0x8a8]
7101d608fc  bl 0x7101d5aa30
7101d60900  b 0x7101d60df8
7101d60904  cbnz w8,0x7101d60ddc
7101d60908  b 0x7101d60df8
7101d6090c  ldr x8,[x19, #0x48]
7101d60910  ldr x9,[x8]
7101d60914  cbz x9,0x7101d5e628
7101d60918  ldr x8,[x8, #0x8]
7101d6091c  cbz x8,0x7101d5e628
7101d60920  fmov s0,0x3f800000
7101d60924  add x0,x19,#0x40
7101d60928  bl 0x710377aee0
7101d6092c  b 0x7101d5e628
7101d60930  ldr x8,[x19, #0x48]
7101d60934  ldr x9,[x8]
7101d60938  cbz x9,0x7101d5e6a8
7101d6093c  ldr x8,[x8, #0x8]
7101d60940  cbz x8,0x7101d5e6a8
7101d60944  fmov s0,0x3f800000
7101d60948  add x0,x19,#0x40
7101d6094c  bl 0x710377aee0
7101d60950  b 0x7101d5e6a8
7101d60954  ldr x8,[x19, #0x48]
7101d60958  ldr x9,[x8]
7101d6095c  cbz x9,0x7101d5e730
7101d60960  ldr x8,[x8, #0x8]
7101d60964  cbz x8,0x7101d5e730
7101d60968  fmov s0,0x3f800000
7101d6096c  add x0,x19,#0x40
7101d60970  bl 0x710377aee0
7101d60974  b 0x7101d5e730
7101d60978  ldr x8,[x19, #0x48]
7101d6097c  ldr x9,[x8]
7101d60980  cbz x9,0x7101d5e7b0
7101d60984  ldr x8,[x8, #0x8]
7101d60988  cbz x8,0x7101d5e7b0
7101d6098c  fmov s0,0x3f800000
7101d60990  add x0,x19,#0x40
7101d60994  bl 0x710377aee0
7101d60998  b 0x7101d5e7b0
7101d6099c  ldr x8,[x19, #0x48]
7101d609a0  ldr x9,[x8]
7101d609a4  cbz x9,0x7101d5e830
7101d609a8  ldr x8,[x8, #0x8]
7101d609ac  cbz x8,0x7101d5e830
7101d609b0  fmov s0,0x3f800000
7101d609b4  add x0,x19,#0x40
7101d609b8  bl 0x710377aee0
7101d609bc  b 0x7101d5e830
7101d609c0  ldr x8,[x19, #0x48]
7101d609c4  ldr x9,[x8]
7101d609c8  cbz x9,0x7101d5e8b0
7101d609cc  ldr x8,[x8, #0x8]
7101d609d0  cbz x8,0x7101d5e8b0
7101d609d4  fmov s0,0x3f800000
7101d609d8  add x0,x19,#0x40
7101d609dc  bl 0x710377aee0
7101d609e0  b 0x7101d5e8b0
7101d609e4  ldr x8,[x19, #0x48]
7101d609e8  ldr x9,[x8]
7101d609ec  cbz x9,0x7101d5e930
7101d609f0  ldr x8,[x8, #0x8]
7101d609f4  cbz x8,0x7101d5e930
7101d609f8  fmov s0,0x3f800000
7101d609fc  add x0,x19,#0x40
7101d60a00  bl 0x710377aee0
7101d60a04  b 0x7101d5e930
7101d60a08  ldr x8,[x19, #0x48]
7101d60a0c  ldr x9,[x8]
7101d60a10  cbz x9,0x7101d5e9b0
7101d60a14  ldr x8,[x8, #0x8]
7101d60a18  cbz x8,0x7101d5e9b0
7101d60a1c  fmov s0,0x3f800000
7101d60a20  add x0,x19,#0x40
7101d60a24  bl 0x710377aee0
7101d60a28  b 0x7101d5e9b0
7101d60a2c  mov w10,wzr
7101d60a30  ldrb w9,[x20, #0x1a8]
7101d60a34  cbnz w9,0x7101d6035c
7101d60a38  mov w9,#0x1
7101d60a3c  cbz w10,0x7101d60a48
7101d60a40  strb w9,[x20, #0x1a8]
7101d60a44  mov w9,wzr
7101d60a48  ldrsw x10,[x20, #0x214]
7101d60a4c  cmn w10,#0x1
7101d60a50  b.eq 0x7101d60acc
7101d60a54  mov w11,#0x3860
7101d60a58  madd x10,x10,x11,x0
7101d60a5c  ldrb w10,[x10, #0x73]
7101d60a60  cbz w10,0x7101d60acc
7101d60a64  ldrsw x11,[x20, #0x240]
7101d60a68  adrp x10,0x7105339000
7101d60a6c  add x10,x10,#0x830
7101d60a70  cmp w11,#0x9
7101d60a74  b.hi 0x7101d60a90
7101d60a78  ldrb w12,[x8, #0x8]
7101d60a7c  cbz w12,0x7101d60a90
7101d60a80  adrp x10,0x7105339000
7101d60a84  add x10,x10,#0x860
7101d60a88  ldr x10,[x10, x11, LSL #0x3]
7101d60a8c  cbz x10,0x7101d60aa0
7101d60a90  ldr x10,[x10, #0x10]
7101d60a94  ldrb w10,[x10, #0xb8]
7101d60a98  cmp w10,#0x0
7101d60a9c  cset w10,ne
7101d60aa0  ldrb w11,[x20, #0x2a8]
7101d60aa4  cbz w11,0x7101d60ab8
7101d60aa8  tbnz w10,#0x0,0x7101d60ac4
7101d60aac  strb wzr,[x20, #0x2a8]
7101d60ab0  mov w11,#0x1
7101d60ab4  b 0x7101d60ac8
7101d60ab8  mov w11,#0x1
7101d60abc  cbz w10,0x7101d60ac8
7101d60ac0  strb w11,[x20, #0x2a8]
7101d60ac4  mov w11,wzr
7101d60ac8  and w9,w9,w11
7101d60acc  ldrsw x10,[x20, #0x314]
7101d60ad0  cmn w10,#0x1
7101d60ad4  b.eq 0x7101d60b50
7101d60ad8  mov w11,#0x3860
7101d60adc  madd x10,x10,x11,x0
7101d60ae0  ldrb w10,[x10, #0x73]
7101d60ae4  cbz w10,0x7101d60b50
7101d60ae8  ldrsw x11,[x20, #0x340]
7101d60aec  adrp x10,0x7105339000
7101d60af0  add x10,x10,#0x830
7101d60af4  cmp w11,#0x9
7101d60af8  b.hi 0x7101d60b14
7101d60afc  ldrb w12,[x8, #0x8]
7101d60b00  cbz w12,0x7101d60b14
7101d60b04  adrp x10,0x7105339000
7101d60b08  add x10,x10,#0x860
7101d60b0c  ldr x10,[x10, x11, LSL #0x3]
7101d60b10  cbz x10,0x7101d60b24
7101d60b14  ldr x10,[x10, #0x10]
7101d60b18  ldrb w10,[x10, #0xb8]
7101d60b1c  cmp w10,#0x0
7101d60b20  cset w10,ne
7101d60b24  ldrb w11,[x20, #0x3a8]
7101d60b28  cbz w11,0x7101d60b3c
7101d60b2c  tbnz w10,#0x0,0x7101d60b48
7101d60b30  strb wzr,[x20, #0x3a8]
7101d60b34  mov w11,#0x1
7101d60b38  b 0x7101d60b4c
7101d60b3c  mov w11,#0x1
7101d60b40  cbz w10,0x7101d60b4c
7101d60b44  strb w11,[x20, #0x3a8]
7101d60b48  mov w11,wzr
7101d60b4c  and w9,w9,w11
7101d60b50  ldrsw x10,[x20, #0x414]
7101d60b54  cmn w10,#0x1
7101d60b58  b.eq 0x7101d60bd4
7101d60b5c  mov w11,#0x3860
7101d60b60  madd x10,x10,x11,x0
7101d60b64  ldrb w10,[x10, #0x73]
7101d60b68  cbz w10,0x7101d60bd4
7101d60b6c  ldrsw x11,[x20, #0x440]
7101d60b70  adrp x10,0x7105339000
7101d60b74  add x10,x10,#0x830
7101d60b78  cmp w11,#0x9
7101d60b7c  b.hi 0x7101d60b98
7101d60b80  ldrb w12,[x8, #0x8]
7101d60b84  cbz w12,0x7101d60b98
7101d60b88  adrp x10,0x7105339000
7101d60b8c  add x10,x10,#0x860
7101d60b90  ldr x10,[x10, x11, LSL #0x3]
7101d60b94  cbz x10,0x7101d60ba8
7101d60b98  ldr x10,[x10, #0x10]
7101d60b9c  ldrb w10,[x10, #0xb8]
7101d60ba0  cmp w10,#0x0
7101d60ba4  cset w10,ne
7101d60ba8  ldrb w11,[x20, #0x4a8]
7101d60bac  cbz w11,0x7101d60bc0
7101d60bb0  tbnz w10,#0x0,0x7101d60bcc
7101d60bb4  strb wzr,[x20, #0x4a8]
7101d60bb8  mov w11,#0x1
7101d60bbc  b 0x7101d60bd0
7101d60bc0  mov w11,#0x1
7101d60bc4  cbz w10,0x7101d60bd0
7101d60bc8  strb w11,[x20, #0x4a8]
7101d60bcc  mov w11,wzr
7101d60bd0  and w9,w9,w11
7101d60bd4  ldrsw x10,[x20, #0x514]
7101d60bd8  cmn w10,#0x1
7101d60bdc  b.eq 0x7101d60c58
7101d60be0  mov w11,#0x3860
7101d60be4  madd x10,x10,x11,x0
7101d60be8  ldrb w10,[x10, #0x73]
7101d60bec  cbz w10,0x7101d60c58
7101d60bf0  ldrsw x11,[x20, #0x540]
7101d60bf4  adrp x10,0x7105339000
7101d60bf8  add x10,x10,#0x830
7101d60bfc  cmp w11,#0x9
7101d60c00  b.hi 0x7101d60c1c
7101d60c04  ldrb w12,[x8, #0x8]
7101d60c08  cbz w12,0x7101d60c1c
7101d60c0c  adrp x10,0x7105339000
7101d60c10  add x10,x10,#0x860
7101d60c14  ldr x10,[x10, x11, LSL #0x3]
7101d60c18  cbz x10,0x7101d60c2c
7101d60c1c  ldr x10,[x10, #0x10]
7101d60c20  ldrb w10,[x10, #0xb8]
7101d60c24  cmp w10,#0x0
7101d60c28  cset w10,ne
7101d60c2c  ldrb w11,[x20, #0x5a8]
7101d60c30  cbz w11,0x7101d60c44
7101d60c34  tbnz w10,#0x0,0x7101d60c50
7101d60c38  strb wzr,[x20, #0x5a8]
7101d60c3c  mov w11,#0x1
7101d60c40  b 0x7101d60c54
7101d60c44  mov w11,#0x1
7101d60c48  cbz w10,0x7101d60c54
7101d60c4c  strb w11,[x20, #0x5a8]
7101d60c50  mov w11,wzr
7101d60c54  and w9,w9,w11
7101d60c58  ldrsw x10,[x20, #0x614]
7101d60c5c  cmn w10,#0x1
7101d60c60  b.eq 0x7101d60cdc
7101d60c64  mov w11,#0x3860
7101d60c68  madd x10,x10,x11,x0
7101d60c6c  ldrb w10,[x10, #0x73]
7101d60c70  cbz w10,0x7101d60cdc
7101d60c74  ldrsw x11,[x20, #0x640]
7101d60c78  adrp x10,0x7105339000
7101d60c7c  add x10,x10,#0x830
7101d60c80  cmp w11,#0x9
7101d60c84  b.hi 0x7101d60ca0
7101d60c88  ldrb w12,[x8, #0x8]
7101d60c8c  cbz w12,0x7101d60ca0
7101d60c90  adrp x10,0x7105339000
7101d60c94  add x10,x10,#0x860
7101d60c98  ldr x10,[x10, x11, LSL #0x3]
7101d60c9c  cbz x10,0x7101d60cb0
7101d60ca0  ldr x10,[x10, #0x10]
7101d60ca4  ldrb w10,[x10, #0xb8]
7101d60ca8  cmp w10,#0x0
7101d60cac  cset w10,ne
7101d60cb0  ldrb w11,[x20, #0x6a8]
7101d60cb4  cbz w11,0x7101d60cc8
7101d60cb8  tbnz w10,#0x0,0x7101d60cd4
7101d60cbc  strb wzr,[x20, #0x6a8]
7101d60cc0  mov w11,#0x1
7101d60cc4  b 0x7101d60cd8
7101d60cc8  mov w11,#0x1
7101d60ccc  cbz w10,0x7101d60cd8
7101d60cd0  strb w11,[x20, #0x6a8]
7101d60cd4  mov w11,wzr
7101d60cd8  and w9,w9,w11
7101d60cdc  ldrsw x10,[x20, #0x714]
7101d60ce0  cmn w10,#0x1
7101d60ce4  b.eq 0x7101d60d60
7101d60ce8  mov w11,#0x3860
7101d60cec  madd x10,x10,x11,x0
7101d60cf0  ldrb w10,[x10, #0x73]
7101d60cf4  cbz w10,0x7101d60d60
7101d60cf8  ldrsw x11,[x20, #0x740]
7101d60cfc  adrp x10,0x7105339000
7101d60d00  add x10,x10,#0x830
7101d60d04  cmp w11,#0x9
7101d60d08  b.hi 0x7101d60d24
7101d60d0c  ldrb w12,[x8, #0x8]
7101d60d10  cbz w12,0x7101d60d24
7101d60d14  adrp x10,0x7105339000
7101d60d18  add x10,x10,#0x860
7101d60d1c  ldr x10,[x10, x11, LSL #0x3]
7101d60d20  cbz x10,0x7101d60d34
7101d60d24  ldr x10,[x10, #0x10]
7101d60d28  ldrb w10,[x10, #0xb8]
7101d60d2c  cmp w10,#0x0
7101d60d30  cset w10,ne
7101d60d34  ldrb w11,[x20, #0x7a8]
7101d60d38  cbz w11,0x7101d60d4c
7101d60d3c  tbnz w10,#0x0,0x7101d60d58
7101d60d40  strb wzr,[x20, #0x7a8]
7101d60d44  mov w11,#0x1
7101d60d48  b 0x7101d60d5c
7101d60d4c  mov w11,#0x1
7101d60d50  cbz w10,0x7101d60d5c
7101d60d54  strb w11,[x20, #0x7a8]
7101d60d58  mov w11,wzr
7101d60d5c  and w9,w9,w11
7101d60d60  ldrsw x10,[x20, #0x814]
7101d60d64  cmn w10,#0x1
7101d60d68  b.eq 0x7101d60de8
7101d60d6c  mov w11,#0x3860
7101d60d70  madd x10,x10,x11,x0
7101d60d74  ldrb w10,[x10, #0x73]
7101d60d78  cbz w10,0x7101d60de8
7101d60d7c  ldrsw x11,[x20, #0x840]
7101d60d80  adrp x10,0x7105339000
7101d60d84  add x10,x10,#0x830
7101d60d88  cmp w11,#0x9
7101d60d8c  b.hi 0x7101d60da8
7101d60d90  ldrb w8,[x8, #0x8]
7101d60d94  cbz w8,0x7101d60da8
7101d60d98  adrp x8,0x7105339000
7101d60d9c  add x8,x8,#0x860
7101d60da0  ldr x10,[x8, x11, LSL #0x3]
7101d60da4  cbz x10,0x7101d60dcc
7101d60da8  ldr x8,[x10, #0x10]
7101d60dac  ldrb w8,[x8, #0xb8]
7101d60db0  cmp w8,#0x0
7101d60db4  cset w8,ne
7101d60db8  ldrb w10,[x20, #0x8a8]
7101d60dbc  cbz w10,0x7101d60dd8
7101d60dc0  tbnz w8,#0x0,0x7101d60df8
7101d60dc4  strb wzr,[x20, #0x8a8]
7101d60dc8  b 0x7101d60de8
7101d60dcc  mov w8,wzr
7101d60dd0  ldrb w10,[x20, #0x8a8]
7101d60dd4  cbnz w10,0x7101d60dc0
7101d60dd8  cbz w8,0x7101d60de8
7101d60ddc  mov w8,#0x1
7101d60de0  strb w8,[x20, #0x8a8]
7101d60de4  b 0x7101d60df8
7101d60de8  tbz w9,#0x0,0x7101d60df8
7101d60dec  mov w1,#0x1
7101d60df0  mov x0,x20
7101d60df4  bl 0x7101d5b6c0
7101d60df8  ldr x19,[sp, #0x40]
7101d60dfc  ldr x8,[x19, #0x80]
7101d60e00  ldr x0,[x8, #0x938]
7101d60e04  bl 0x71033935f0
7101d60e08  ldr x26,[x19, #0x80]
7101d60e0c  ldr w8,[x26, #0x208]
7101d60e10  cmp w8,#0x2
7101d60e14  b.ne 0x7101d60e7c
7101d60e18  add x0,x26,#0x1f8
7101d60e1c  adrp x1,0x7104443000
7101d60e20  add x1,x1,#0xb1e
7101d60e24  add x8,sp,#0x50
7101d60e28  bl 0x7103776910
7101d60e2c  ldr x0,[sp, #0x58]
7101d60e30  ldr x8,[x0]
7101d60e34  cbz x8,0x7101d60e70
7101d60e38  ldr w9,[x26, #0x118]
7101d60e3c  cmp w9,#0x3
7101d60e40  b.eq 0x7101d60e60
7101d60e44  cmp w9,#0x2
7101d60e48  b.ne 0x7101d60e70
7101d60e4c  ldrb w9,[x8, #0x58]
7101d60e50  tbnz w9,#0x0,0x7101d60e70
7101d60e54  ldrb w9,[x8, #0x58]
7101d60e58  orr w9,w9,#0x1
7101d60e5c  b 0x7101d60e6c
7101d60e60  ldrb w9,[x8, #0x58]
7101d60e64  tbz w9,#0x0,0x7101d60e70
7101d60e68  and w9,w9,#0xfe
7101d60e6c  strb w9,[x8, #0x58]
7101d60e70  stp x22,xzr,[sp, #0x50]
7101d60e74  cbz x0,0x7101d60e7c
7101d60e78  bl 0x710392eb40
7101d60e7c  ldr w8,[x26, #0x308]
7101d60e80  cmp w8,#0x2
7101d60e84  b.ne 0x7101d60eec
7101d60e88  add x0,x26,#0x2f8
7101d60e8c  adrp x1,0x7104443000
7101d60e90  add x1,x1,#0xb1e
7101d60e94  add x8,sp,#0x50
7101d60e98  bl 0x7103776910
7101d60e9c  ldr x0,[sp, #0x58]
7101d60ea0  ldr x8,[x0]
7101d60ea4  cbz x8,0x7101d60ee0
7101d60ea8  ldr w9,[x26, #0x218]
7101d60eac  cmp w9,#0x2
7101d60eb0  b.eq 0x7101d60ecc
7101d60eb4  cmp w9,#0x3
7101d60eb8  b.ne 0x7101d60ee0
7101d60ebc  ldrb w9,[x8, #0x58]
7101d60ec0  tbz w9,#0x0,0x7101d60ee0
7101d60ec4  and w9,w9,#0xfe
7101d60ec8  b 0x7101d60edc
7101d60ecc  ldrb w9,[x8, #0x58]
7101d60ed0  tbnz w9,#0x0,0x7101d60ee0
7101d60ed4  ldrb w9,[x8, #0x58]
7101d60ed8  orr w9,w9,#0x1
7101d60edc  strb w9,[x8, #0x58]
7101d60ee0  stp x22,xzr,[sp, #0x50]
7101d60ee4  cbz x0,0x7101d60eec
7101d60ee8  bl 0x710392eb40
7101d60eec  ldr w8,[x26, #0x408]
7101d60ef0  cmp w8,#0x2
7101d60ef4  b.ne 0x7101d60f5c
7101d60ef8  add x0,x26,#0x3f8
7101d60efc  adrp x1,0x7104443000
7101d60f00  add x1,x1,#0xb1e
7101d60f04  add x8,sp,#0x50
7101d60f08  bl 0x7103776910
7101d60f0c  ldr x0,[sp, #0x58]
7101d60f10  ldr x8,[x0]
7101d60f14  cbz x8,0x7101d60f50
7101d60f18  ldr w9,[x26, #0x318]
7101d60f1c  cmp w9,#0x2
7101d60f20  b.eq 0x7101d60f3c
7101d60f24  cmp w9,#0x3
7101d60f28  b.ne 0x7101d60f50
7101d60f2c  ldrb w9,[x8, #0x58]
7101d60f30  tbz w9,#0x0,0x7101d60f50
7101d60f34  and w9,w9,#0xfe
7101d60f38  b 0x7101d60f4c
7101d60f3c  ldrb w9,[x8, #0x58]
7101d60f40  tbnz w9,#0x0,0x7101d60f50
7101d60f44  ldrb w9,[x8, #0x58]
7101d60f48  orr w9,w9,#0x1
7101d60f4c  strb w9,[x8, #0x58]
7101d60f50  stp x22,xzr,[sp, #0x50]
7101d60f54  cbz x0,0x7101d60f5c
7101d60f58  bl 0x710392eb40
7101d60f5c  ldr w8,[x26, #0x508]
7101d60f60  cmp w8,#0x2
7101d60f64  b.ne 0x7101d60fcc
7101d60f68  add x0,x26,#0x4f8
7101d60f6c  adrp x1,0x7104443000
7101d60f70  add x1,x1,#0xb1e
7101d60f74  add x8,sp,#0x50
7101d60f78  bl 0x7103776910
7101d60f7c  ldr x0,[sp, #0x58]
7101d60f80  ldr x8,[x0]
7101d60f84  cbz x8,0x7101d60fc0
7101d60f88  ldr w9,[x26, #0x418]
7101d60f8c  cmp w9,#0x2
7101d60f90  b.eq 0x7101d60fac
7101d60f94  cmp w9,#0x3
7101d60f98  b.ne 0x7101d60fc0
7101d60f9c  ldrb w9,[x8, #0x58]
7101d60fa0  tbz w9,#0x0,0x7101d60fc0
7101d60fa4  and w9,w9,#0xfe
7101d60fa8  b 0x7101d60fbc
7101d60fac  ldrb w9,[x8, #0x58]
7101d60fb0  tbnz w9,#0x0,0x7101d60fc0
7101d60fb4  ldrb w9,[x8, #0x58]
7101d60fb8  orr w9,w9,#0x1
7101d60fbc  strb w9,[x8, #0x58]
7101d60fc0  stp x22,xzr,[sp, #0x50]
7101d60fc4  cbz x0,0x7101d60fcc
7101d60fc8  bl 0x710392eb40
7101d60fcc  ldr w8,[x26, #0x608]
7101d60fd0  cmp w8,#0x2
7101d60fd4  b.ne 0x7101d6103c
7101d60fd8  add x0,x26,#0x5f8
7101d60fdc  adrp x1,0x7104443000
7101d60fe0  add x1,x1,#0xb1e
7101d60fe4  add x8,sp,#0x50
7101d60fe8  bl 0x7103776910
7101d60fec  ldr x0,[sp, #0x58]
7101d60ff0  ldr x8,[x0]
7101d60ff4  cbz x8,0x7101d61030
7101d60ff8  ldr w9,[x26, #0x518]
7101d60ffc  cmp w9,#0x2
7101d61000  b.eq 0x7101d6101c
7101d61004  cmp w9,#0x3
7101d61008  b.ne 0x7101d61030
7101d6100c  ldrb w9,[x8, #0x58]
7101d61010  tbz w9,#0x0,0x7101d61030
7101d61014  and w9,w9,#0xfe
7101d61018  b 0x7101d6102c
7101d6101c  ldrb w9,[x8, #0x58]
7101d61020  tbnz w9,#0x0,0x7101d61030
7101d61024  ldrb w9,[x8, #0x58]
7101d61028  orr w9,w9,#0x1
7101d6102c  strb w9,[x8, #0x58]
7101d61030  stp x22,xzr,[sp, #0x50]
7101d61034  cbz x0,0x7101d6103c
7101d61038  bl 0x710392eb40
7101d6103c  ldr w8,[x26, #0x708]
7101d61040  cmp w8,#0x2
7101d61044  b.ne 0x7101d610ac
7101d61048  add x0,x26,#0x6f8
7101d6104c  adrp x1,0x7104443000
7101d61050  add x1,x1,#0xb1e
7101d61054  add x8,sp,#0x50
7101d61058  bl 0x7103776910
7101d6105c  ldr x0,[sp, #0x58]
7101d61060  ldr x8,[x0]
7101d61064  cbz x8,0x7101d610a0
7101d61068  ldr w9,[x26, #0x618]
7101d6106c  cmp w9,#0x2
7101d61070  b.eq 0x7101d6108c
7101d61074  cmp w9,#0x3
7101d61078  b.ne 0x7101d610a0
7101d6107c  ldrb w9,[x8, #0x58]
7101d61080  tbz w9,#0x0,0x7101d610a0
7101d61084  and w9,w9,#0xfe
7101d61088  b 0x7101d6109c
7101d6108c  ldrb w9,[x8, #0x58]
7101d61090  tbnz w9,#0x0,0x7101d610a0
7101d61094  ldrb w9,[x8, #0x58]
7101d61098  orr w9,w9,#0x1
7101d6109c  strb w9,[x8, #0x58]
7101d610a0  stp x22,xzr,[sp, #0x50]
7101d610a4  cbz x0,0x7101d610ac
7101d610a8  bl 0x710392eb40
7101d610ac  ldr w8,[x26, #0x808]
7101d610b0  cmp w8,#0x2
7101d610b4  b.ne 0x7101d6111c
7101d610b8  add x0,x26,#0x7f8
7101d610bc  adrp x1,0x7104443000
7101d610c0  add x1,x1,#0xb1e
7101d610c4  add x8,sp,#0x50
7101d610c8  bl 0x7103776910
7101d610cc  ldr x0,[sp, #0x58]
7101d610d0  ldr x8,[x0]
7101d610d4  cbz x8,0x7101d61110
7101d610d8  ldr w9,[x26, #0x718]
7101d610dc  cmp w9,#0x2
7101d610e0  b.eq 0x7101d610fc
7101d610e4  cmp w9,#0x3
7101d610e8  b.ne 0x7101d61110
7101d610ec  ldrb w9,[x8, #0x58]
7101d610f0  tbz w9,#0x0,0x7101d61110
7101d610f4  and w9,w9,#0xfe
7101d610f8  b 0x7101d6110c
7101d610fc  ldrb w9,[x8, #0x58]
7101d61100  tbnz w9,#0x0,0x7101d61110
7101d61104  ldrb w9,[x8, #0x58]
7101d61108  orr w9,w9,#0x1
7101d6110c  strb w9,[x8, #0x58]
7101d61110  stp x22,xzr,[sp, #0x50]
7101d61114  cbz x0,0x7101d6111c
7101d61118  bl 0x710392eb40
7101d6111c  ldr w8,[x26, #0x908]
7101d61120  cmp w8,#0x2
7101d61124  b.ne 0x7101d6118c
7101d61128  add x0,x26,#0x8f8
7101d6112c  adrp x1,0x7104443000
7101d61130  add x1,x1,#0xb1e
7101d61134  add x8,sp,#0x50
7101d61138  bl 0x7103776910
7101d6113c  ldr x0,[sp, #0x58]
7101d61140  ldr x8,[x0]
7101d61144  cbz x8,0x7101d61180
7101d61148  ldr w9,[x26, #0x818]
7101d6114c  cmp w9,#0x2
7101d61150  b.eq 0x7101d6116c
7101d61154  cmp w9,#0x3
7101d61158  b.ne 0x7101d61180
7101d6115c  ldrb w9,[x8, #0x58]
7101d61160  tbz w9,#0x0,0x7101d61180
7101d61164  and w9,w9,#0xfe
7101d61168  b 0x7101d6117c
7101d6116c  ldrb w9,[x8, #0x58]
7101d61170  tbnz w9,#0x0,0x7101d61180
7101d61174  ldrb w9,[x8, #0x58]
7101d61178  orr w9,w9,#0x1
7101d6117c  strb w9,[x8, #0x58]
7101d61180  stp x22,xzr,[sp, #0x50]
7101d61184  cbz x0,0x7101d6118c
7101d61188  bl 0x710392eb40
7101d6118c  adrp x8,0x710532f000
7101d61190  ldr x8,[x8, #0x820]
7101d61194  ldr x19,[x8, #0x8]
7101d61198  ldr x8,[x19, #0x110]
7101d6119c  ldr x0,[x8, #0x80]
7101d611a0  bl 0x7101eefe30
7101d611a4  ldr w8,[x19, #0xf8]
7101d611a8  cmp w8,#0x0
7101d611ac  ldrb w9,[x19, #0x142]
7101d611b0  cset w8,ne
7101d611b4  orn w8,w8,w0
7101d611b8  and w8,w8,#0x1
7101d611bc  orr w27,w8,w9
7101d611c0  ldrb w8,[x26, #0x940]
7101d611c4  cmp w27,w8
7101d611c8  b.eq 0x7101d612a8
7101d611cc  add x0,x26,#0x110
7101d611d0  add x25,x26,#0x210
7101d611d4  add x24,x26,#0x310
7101d611d8  add x23,x26,#0x410
7101d611dc  add x22,x26,#0x510
7101d611e0  add x21,x26,#0x610
7101d611e4  add x20,x26,#0x710
7101d611e8  add x19,x26,#0x810
7101d611ec  cbz w27,0x7101d6124c
7101d611f0  mov w1,wzr
7101d611f4  bl 0x7101d5c8e0
7101d611f8  mov x0,x25
7101d611fc  mov w1,wzr
7101d61200  bl 0x7101d5c8e0
7101d61204  mov x0,x24
7101d61208  mov w1,wzr
7101d6120c  bl 0x7101d5c8e0
7101d61210  mov x0,x23
7101d61214  mov w1,wzr
7101d61218  bl 0x7101d5c8e0
7101d6121c  mov x0,x22
7101d61220  mov w1,wzr
7101d61224  bl 0x7101d5c8e0
7101d61228  mov x0,x21
7101d6122c  mov w1,wzr
7101d61230  bl 0x7101d5c8e0
7101d61234  mov x0,x20
7101d61238  mov w1,wzr
7101d6123c  bl 0x7101d5c8e0
7101d61240  mov x0,x19
7101d61244  mov w1,wzr
7101d61248  b 0x7101d612a4
7101d6124c  mov w1,#0x1
7101d61250  bl 0x7101d5c8e0
7101d61254  mov w1,#0x1
7101d61258  mov x0,x25
7101d6125c  bl 0x7101d5c8e0
7101d61260  mov w1,#0x1
7101d61264  mov x0,x24
7101d61268  bl 0x7101d5c8e0
7101d6126c  mov w1,#0x1
7101d61270  mov x0,x23
7101d61274  bl 0x7101d5c8e0
7101d61278  mov w1,#0x1
7101d6127c  mov x0,x22
7101d61280  bl 0x7101d5c8e0
7101d61284  mov w1,#0x1
7101d61288  mov x0,x21
7101d6128c  bl 0x7101d5c8e0
7101d61290  mov w1,#0x1
7101d61294  mov x0,x20
7101d61298  bl 0x7101d5c8e0
7101d6129c  mov w1,#0x1
7101d612a0  mov x0,x19
7101d612a4  bl 0x7101d5c8e0
7101d612a8  strb w27,[x26, #0x940]
7101d612ac  add sp,sp,#0x170
7101d612b0  ldp d9,d8,[sp, #0x20]
7101d612b4  ldp d11,d10,[sp, #0x10]
7101d612b8  ldp x29,x30,[sp, #0x80]
7101d612bc  ldp x20,x19,[sp, #0x70]
7101d612c0  ldp x22,x21,[sp, #0x60]
7101d612c4  ldp x24,x23,[sp, #0x50]
7101d612c8  ldp x26,x25,[sp, #0x40]
7101d612cc  ldp x28,x27,[sp, #0x30]
7101d612d0  ldr d12,[sp], #0x90
7101d612d4  ret
7101d612d8  adrp x0,0x7105314000
7101d612dc  add x0,x0,#0x4d8
7101d612e0  bl 0x71039c06b0
7101d612e4  cbz w0,0x7101d5e9c0
7101d612e8  bl 0x7101764000
7101d612ec  adrp x0,0x7101763000
7101d612f0  add x0,x0,#0xc40
7101d612f4  adrp x1,0x71052c5000
7101d612f8  add x1,x1,#0x180
7101d612fc  adrp x2,0x7104f17000
7101d61300  add x2,x2,#0x0
7101d61304  bl 0x71000001c0
7101d61308  adrp x0,0x7105314000
7101d6130c  add x0,x0,#0x4d8
7101d61310  bl 0x71039c06c0
7101d61314  b 0x7101d5e9c0
7101d61318  adrp x0,0x7105314000
7101d6131c  add x0,x0,#0x4d8
7101d61320  bl 0x71039c06b0
7101d61324  cbz w0,0x7101d5f4c8
7101d61328  bl 0x7101764000
7101d6132c  adrp x0,0x7101763000
7101d61330  add x0,x0,#0xc40
7101d61334  adrp x1,0x71052c5000
7101d61338  add x1,x1,#0x180
7101d6133c  adrp x2,0x7104f17000
7101d61340  add x2,x2,#0x0
7101d61344  bl 0x71000001c0
7101d61348  adrp x0,0x7105314000
7101d6134c  add x0,x0,#0x4d8
7101d61350  bl 0x71039c06c0
7101d61354  b 0x7101d5f4c8
7101d61358  adrp x0,0x7105314000
7101d6135c  add x0,x0,#0x4d8
7101d61360  bl 0x71039c06b0
7101d61364  cbz w0,0x7101d5f55c
7101d61368  bl 0x7101764000
7101d6136c  adrp x0,0x7101763000
7101d61370  add x0,x0,#0xc40
7101d61374  adrp x1,0x71052c5000
7101d61378  add x1,x1,#0x180
7101d6137c  adrp x2,0x7104f17000
7101d61380  add x2,x2,#0x0
7101d61384  bl 0x71000001c0
7101d61388  adrp x0,0x7105314000
7101d6138c  add x0,x0,#0x4d8
7101d61390  bl 0x71039c06c0
7101d61394  ldarb w8,[x20]
7101d61398  tbnz w8,#0x0,0x7101d5f564
7101d6139c  adrp x0,0x7105314000
7101d613a0  add x0,x0,#0x4d8
7101d613a4  bl 0x71039c06b0
7101d613a8  cbz w0,0x7101d5f564
7101d613ac  bl 0x7101764000
7101d613b0  adrp x0,0x7101763000
7101d613b4  add x0,x0,#0xc40
7101d613b8  adrp x1,0x71052c5000
7101d613bc  add x1,x1,#0x180
7101d613c0  adrp x2,0x7104f17000
7101d613c4  add x2,x2,#0x0
7101d613c8  bl 0x71000001c0
7101d613cc  adrp x0,0x7105314000
7101d613d0  add x0,x0,#0x4d8
7101d613d4  bl 0x71039c06c0
7101d613d8  b 0x7101d5f564
7101d613dc  adrp x0,0x7105314000
7101d613e0  add x0,x0,#0x4d8
7101d613e4  bl 0x71039c06b0
7101d613e8  cbz w0,0x7101d5f5a4
7101d613ec  bl 0x7101764000
7101d613f0  adrp x0,0x7101763000
7101d613f4  add x0,x0,#0xc40
7101d613f8  adrp x1,0x71052c5000
7101d613fc  add x1,x1,#0x180
7101d61400  adrp x2,0x7104f17000
7101d61404  add x2,x2,#0x0
7101d61408  bl 0x71000001c0
7101d6140c  adrp x0,0x7105314000
7101d61410  add x0,x0,#0x4d8
7101d61414  bl 0x71039c06c0
7101d61418  b 0x7101d5f5a4
7101d6141c  adrp x0,0x7105314000
7101d61420  add x0,x0,#0x4d8
7101d61424  bl 0x71039c06b0
7101d61428  cbz w0,0x7101d5f5d4
7101d6142c  bl 0x7101764000
7101d61430  adrp x0,0x7101763000
7101d61434  add x0,x0,#0xc40
7101d61438  adrp x1,0x71052c5000
7101d6143c  add x1,x1,#0x180
7101d61440  adrp x2,0x7104f17000
7101d61444  add x2,x2,#0x0
7101d61448  bl 0x71000001c0
7101d6144c  adrp x0,0x7105314000
7101d61450  add x0,x0,#0x4d8
7101d61454  bl 0x71039c06c0
7101d61458  b 0x7101d5f5d4
7101d6145c  bl 0x71039c2650
