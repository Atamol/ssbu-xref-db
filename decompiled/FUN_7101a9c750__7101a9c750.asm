// addr:      7101a9c750
// offset:    0x1a9c750
// name:      FUN_7101a9c750
// mangled:   
// size:      692

7101a9c750  sub sp,sp,#0x30
7101a9c754  stp x20,x19,[sp, #0x10]
7101a9c758  stp x29,x30,[sp, #0x20]
7101a9c75c  add x29,sp,#0x20
7101a9c760  ldr w8,[x0, #0x1dc]
7101a9c764  mov x19,x0
7101a9c768  cbz w8,0x7101a9c878
7101a9c76c  ldr x0,[x19, #0x1f8]
7101a9c770  ldr x8,[x0]
7101a9c774  ldr x8,[x8, #0x78]
7101a9c778  blr x8
7101a9c77c  tbz w0,#0x0,0x7101a9c7b4
7101a9c780  ldr x8,[x19, #0x1f0]
7101a9c784  ldr x8,[x8]
7101a9c788  ldr x0,[x8, #0x10]
7101a9c78c  fmov s0,0x3f800000
7101a9c790  adrp x1,0x7104308000
7101a9c794  add x1,x1,#0x12
7101a9c798  bl 0x7103778300
7101a9c79c  ldrsw x8,[x19, #0x1d4]
7101a9c7a0  cmp w8,#0x13
7101a9c7a4  b.cs 0x7101a9ca00
7101a9c7a8  add x8,x19,x8, LSL #0x2
7101a9c7ac  orr w9,wzr,#0x3
7101a9c7b0  str w9,[x8, #0x188]
7101a9c7b4  ldr x8,[x19, #0x1f0]
7101a9c7b8  ldr x8,[x8]
7101a9c7bc  ldr x8,[x8]
7101a9c7c0  ldr x8,[x8, #0x600]
7101a9c7c4  ldrb w9,[x8, #0x4aa]
7101a9c7c8  cbz w9,0x7101a9c7ec
7101a9c7cc  ldrb w8,[x8, #0x1ac]
7101a9c7d0  tbz w8,#0x1,0x7101a9c7ec
7101a9c7d4  ldrsw x8,[x19, #0x1d4]
7101a9c7d8  cmp w8,#0x13
7101a9c7dc  b.cs 0x7101a9ca00
7101a9c7e0  add x8,x19,x8, LSL #0x2
7101a9c7e4  orr w9,wzr,#0x6
7101a9c7e8  str w9,[x8, #0x188]
7101a9c7ec  ldr x0,[x19, #0x200]
7101a9c7f0  ldr w8,[x0, #0x25c]
7101a9c7f4  cbz w8,0x7101a9c8c4
7101a9c7f8  cmp w8,#0x1
7101a9c7fc  b.ne 0x7101a9c9f0
7101a9c800  adrp x8,0x7105314000
7101a9c804  ldr x8,[x8, #0x510]
7101a9c808  ldr x8,[x8]
7101a9c80c  ldr x8,[x8, #0x68]
7101a9c810  ldr x20,[x8]
7101a9c814  add x0,sp,#0x8
7101a9c818  bl 0x71039c2680
7101a9c81c  cbz w0,0x7101a9c8fc
7101a9c820  adrp x8,0x71052c4000
7101a9c824  ldr x8,[x8, #0xc58]
7101a9c828  ldr x8,[x8, #0x8]
7101a9c82c  ldr x0,[x8, #0x80]
7101a9c830  mov w1,#0xcc
7101a9c834  bl 0x7101685520
7101a9c838  cbz w0,0x7101a9c9c4
7101a9c83c  mov w8,#0x1
7101a9c840  movk w8,#0x4000, LSL #16
7101a9c844  cmp w0,w8
7101a9c848  b.ne 0x7101a9c9f0
7101a9c84c  ldr x0,[x19, #0x200]
7101a9c850  ldr x8,[x0]
7101a9c854  ldr x8,[x8, #0x60]
7101a9c858  mov w1,wzr
7101a9c85c  blr x8
7101a9c860  ldrsw x8,[x19, #0x1d4]
7101a9c864  cmp w8,#0x13
7101a9c868  b.cs 0x7101a9ca00
7101a9c86c  add x8,x19,x8, LSL #0x2
7101a9c870  mov w9,#0xa
7101a9c874  b 0x7101a9c9ec
7101a9c878  ldr x0,[x19, #0x1f8]
7101a9c87c  strb wzr,[x19, #0x29a]
7101a9c880  ldr x8,[x0]
7101a9c884  ldr x8,[x8, #0x70]
7101a9c888  mov w1,wzr
7101a9c88c  blr x8
7101a9c890  ldr x0,[x19, #0x200]
7101a9c894  ldr x8,[x0]
7101a9c898  ldr x8,[x8, #0x70]
7101a9c89c  mov w1,#0x1
7101a9c8a0  blr x8
7101a9c8a4  ldr x0,[x19, #0x200]
7101a9c8a8  ldp x20,x19,[sp, #0x10]
7101a9c8ac  ldr x8,[x0]
7101a9c8b0  ldr x2,[x8, #0x60]
7101a9c8b4  mov w1,#0x1
7101a9c8b8  ldp x29,x30,[sp, #0x20]
7101a9c8bc  add sp,sp,#0x30
7101a9c8c0  br x2
7101a9c8c4  ldr x8,[x0]
7101a9c8c8  ldr x8,[x8, #0x60]
7101a9c8cc  mov w1,wzr
7101a9c8d0  blr x8
7101a9c8d4  ldr w8,[x19, #0x1d4]
7101a9c8d8  cmp w8,#0x11
7101a9c8dc  b.gt 0x7101a9c9f0
7101a9c8e0  add w8,w8,#0x1
7101a9c8e4  cmp w8,#0x13
7101a9c8e8  str w8,[x19, #0x1d4]
7101a9c8ec  b.cs 0x7101a9ca00
7101a9c8f0  add x8,x19,w8, SXTW  #0x2
7101a9c8f4  orr w9,wzr,#0x7
7101a9c8f8  b 0x7101a9c9ec
7101a9c8fc  ldr x14,[x20, #0x8]
7101a9c900  ldr x12,[sp, #0x8]
7101a9c904  mov x10,#-0xda
7101a9c908  ldrsw x13,[x20]
7101a9c90c  mov w15,#0xdd8
7101a9c910  movk w15,#0x1, LSL #16
7101a9c914  mov x9,xzr
7101a9c918  mov w8,wzr
7101a9c91c  movk x10,#0x9c5f, LSL #16
7101a9c920  mov w11,#0xed55
7101a9c924  movk w11,#0xed75, LSL #16
7101a9c928  add x14,x14,x15
7101a9c92c  mov w15,#0xca00
7101a9c930  movk w15,#0x3b9a, LSL #16
7101a9c934  ldr x16,[x14, x9, LSL #0x0]
7101a9c938  add x9,x9,#0x8
7101a9c93c  sub x16,x12,x16
7101a9c940  mul x16,x16,x15
7101a9c944  and x17,x16,#0xfffffe00
7101a9c948  asr x18,x16,#0x20
7101a9c94c  mul x0,x18,x11
7101a9c950  mul x1,x17,x11
7101a9c954  mul x17,x17,x10
7101a9c958  madd x18,x18,x10,x16
7101a9c95c  add x0,x0,x1, LSR #0x20
7101a9c960  add x17,x17,w0, UXTW 
7101a9c964  add x18,x18,x0, ASR #0x20
7101a9c968  add x17,x18,x17, ASR #0x20
7101a9c96c  asr x17,x17,#0x29
7101a9c970  add x16,x17,x16, LSR #0x3f
7101a9c974  cmp x16,x13
7101a9c978  cinc w8,w8,lt
7101a9c97c  cmp x9,#0xf0
7101a9c980  b.ne 0x7101a9c934
7101a9c984  cbz w8,0x7101a9c820
7101a9c988  ldr x0,[x19, #0x200]
7101a9c98c  ldr x8,[x0]
7101a9c990  ldr x8,[x8, #0x60]
7101a9c994  mov w1,wzr
7101a9c998  blr x8
7101a9c99c  ldr w8,[x19, #0x1d4]
7101a9c9a0  cmp w8,#0x11
7101a9c9a4  b.gt 0x7101a9c9f0
7101a9c9a8  add w8,w8,#0x1
7101a9c9ac  cmp w8,#0x13
7101a9c9b0  str w8,[x19, #0x1d4]
7101a9c9b4  b.cs 0x7101a9ca00
7101a9c9b8  add x8,x19,w8, SXTW  #0x2
7101a9c9bc  mov w9,#0xb
7101a9c9c0  b 0x7101a9c9ec
7101a9c9c4  ldr x0,[x19, #0x200]
7101a9c9c8  ldr x8,[x0]
7101a9c9cc  ldr x8,[x8, #0x60]
7101a9c9d0  mov w1,wzr
7101a9c9d4  blr x8
7101a9c9d8  ldrsw x8,[x19, #0x1d4]
7101a9c9dc  cmp w8,#0x13
7101a9c9e0  b.cs 0x7101a9ca00
7101a9c9e4  add x8,x19,x8, LSL #0x2
7101a9c9e8  orr w9,wzr,#0xe
7101a9c9ec  str w9,[x8, #0x188]
7101a9c9f0  ldp x29,x30,[sp, #0x20]
7101a9c9f4  ldp x20,x19,[sp, #0x10]
7101a9c9f8  add sp,sp,#0x30
7101a9c9fc  ret
7101a9ca00  bl 0x71039c2650
