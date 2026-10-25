// addr:      7101e4c680
// offset:    0x1e4c680
// name:      FUN_7101e4c680
// mangled:   
// size:      936

7101e4c680  stp d9,d8,[sp, #-0x70]!
7101e4c684  stp x28,x27,[sp, #0x10]
7101e4c688  stp x26,x25,[sp, #0x20]
7101e4c68c  stp x24,x23,[sp, #0x30]
7101e4c690  stp x22,x21,[sp, #0x40]
7101e4c694  stp x20,x19,[sp, #0x50]
7101e4c698  stp x29,x30,[sp, #0x60]
7101e4c69c  add x29,sp,#0x60
7101e4c6a0  ldr x21,[x0, #0x80]
7101e4c6a4  ldr x20,[x21, #0x220]
7101e4c6a8  ldr x0,[x20, #0x30]
7101e4c6ac  cbz x0,0x7101e4c89c
7101e4c6b0  ldr x8,[x0]
7101e4c6b4  ldr x8,[x8, #0x30]
7101e4c6b8  blr x8
7101e4c6bc  add x19,x21,#0x1a8
7101e4c6c0  mov x0,x19
7101e4c6c4  bl 0x7101e9bb40
7101e4c6c8  ldr x8,[x21, #0x1c8]
7101e4c6cc  ldr x8,[x8, #0x40]
7101e4c6d0  cbz x8,0x7101e4c6f0
7101e4c6d4  ldr x8,[x8, #0x8]
7101e4c6d8  ldr x0,[x8, #0x8]
7101e4c6dc  cbz x0,0x7101e4c6f0
7101e4c6e0  ldr x8,[x0]
7101e4c6e4  ldr x8,[x8, #0x138]
7101e4c6e8  blr x8
7101e4c6ec  tbz w0,#0x0,0x7101e4c724
7101e4c6f0  ldrb w8,[x21, #0x1d1]
7101e4c6f4  cbz w8,0x7101e4c714
7101e4c6f8  ldr x8,[x21, #0x1c8]
7101e4c6fc  ldr x0,[x8, #0x8]
7101e4c700  fmov s0,0x3f800000
7101e4c704  adrp x1,0x71042f8000
7101e4c708  add x1,x1,#0xa23
7101e4c70c  bl 0x7103778300
7101e4c710  strb wzr,[x21, #0x1d1]
7101e4c714  ldr w8,[x21, #0x1d4]
7101e4c718  cbz w8,0x7101e4c724
7101e4c71c  sub w8,w8,#0x1
7101e4c720  str w8,[x21, #0x1d4]
7101e4c724  ldr x8,[x21, #0x240]
7101e4c728  cbz x8,0x7101e4c7a0
7101e4c72c  ldr x8,[x21, #0x238]
7101e4c730  ldrb w20,[x8, #0x10]
7101e4c734  add x2,x21,#0x1f8
7101e4c738  mov x0,x19
7101e4c73c  mov w1,w20
7101e4c740  bl 0x7101e95cc0
7101e4c744  tbz w0,#0x0,0x7101e4c7a0
7101e4c748  and x8,x20,#0xff
7101e4c74c  cmp w8,#0x3
7101e4c750  b.hi 0x7101e4c778
7101e4c754  ldr x9,[x19]
7101e4c758  add x8,x9,x8, LSL #0x3
7101e4c75c  ldr x8,[x8, #0x48]
7101e4c760  cbz x8,0x7101e4c778
7101e4c764  ldr x0,[x8, #0x8]
7101e4c768  fmov s0,0x3f800000
7101e4c76c  adrp x1,0x7104455000
7101e4c770  add x1,x1,#0x1e3
7101e4c774  bl 0x7103778300
7101e4c778  ldr x0,[x21, #0x238]
7101e4c77c  ldp x8,x9,[x0]
7101e4c780  str x9,[x8, #0x8]
7101e4c784  ldp x8,x9,[x0]
7101e4c788  str x8,[x9]
7101e4c78c  ldr x8,[x21, #0x240]
7101e4c790  sub x8,x8,#0x1
7101e4c794  str x8,[x21, #0x240]
7101e4c798  cbz x0,0x7101e4c7a0
7101e4c79c  bl 0x710392eb40
7101e4c7a0  ldrsw x8,[x21, #0x17c]
7101e4c7a4  cmp w8,#0x13
7101e4c7a8  b.cs 0x7101e4ca24
7101e4c7ac  add x8,x21,x8, LSL #0x2
7101e4c7b0  ldr w8,[x8, #0x130]
7101e4c7b4  ldr w9,[x21, #0x180]
7101e4c7b8  cmp w9,w8
7101e4c7bc  b.eq 0x7101e4c80c
7101e4c7c0  cmp w8,#0x10
7101e4c7c4  str w9,[x21, #0x188]
7101e4c7c8  str w8,[x21, #0x180]
7101e4c7cc  b.cs 0x7101e4ca24
7101e4c7d0  sxtw x8,w8
7101e4c7d4  add x8,x21,x8, LSL #0x4
7101e4c7d8  ldp x9,x8,[x8, #0x30]
7101e4c7dc  stp x9,x8,[x21, #0x10]
7101e4c7e0  ldp x8,x10,[x21, #0x20]
7101e4c7e4  and x9,x10,#0x1
7101e4c7e8  orr x11,x9,x8
7101e4c7ec  cbz x11,0x7101e4c808
7101e4c7f0  ldr x11,[x21, #0x8]
7101e4c7f4  add x0,x11,x10, ASR #0x1
7101e4c7f8  cbz x9,0x7101e4c804
7101e4c7fc  ldr x9,[x0]
7101e4c800  ldr x8,[x9, x8, LSL #0x0]
7101e4c804  blr x8
7101e4c808  str wzr,[x21, #0x184]
7101e4c80c  ldrb w8,[x21, #0x18c]
7101e4c810  cbz w8,0x7101e4c844
7101e4c814  ldp x8,x10,[x21, #0x20]
7101e4c818  and x9,x10,#0x1
7101e4c81c  orr x11,x9,x8
7101e4c820  cbz x11,0x7101e4c83c
7101e4c824  ldr x11,[x21, #0x8]
7101e4c828  add x0,x11,x10, ASR #0x1
7101e4c82c  cbz x9,0x7101e4c838
7101e4c830  ldr x9,[x0]
7101e4c834  ldr x8,[x9, x8, LSL #0x0]
7101e4c838  blr x8
7101e4c83c  str wzr,[x21, #0x184]
7101e4c840  strb wzr,[x21, #0x18c]
7101e4c844  ldr x9,[x21, #0x8]
7101e4c848  cbz x9,0x7101e4c870
7101e4c84c  ldp x8,x11,[x21, #0x10]
7101e4c850  and x10,x11,#0x1
7101e4c854  orr x12,x10,x8
7101e4c858  cbz x12,0x7101e4c870
7101e4c85c  add x0,x9,x11, ASR #0x1
7101e4c860  cbz x10,0x7101e4c86c
7101e4c864  ldr x9,[x0]
7101e4c868  ldr x8,[x9, x8, LSL #0x0]
7101e4c86c  blr x8
7101e4c870  ldr w8,[x21, #0x184]
7101e4c874  add w8,w8,#0x1
7101e4c878  str w8,[x21, #0x184]
7101e4c87c  ldp x29,x30,[sp, #0x60]
7101e4c880  ldp x20,x19,[sp, #0x50]
7101e4c884  ldp x22,x21,[sp, #0x40]
7101e4c888  ldp x24,x23,[sp, #0x30]
7101e4c88c  ldp x26,x25,[sp, #0x20]
7101e4c890  ldp x28,x27,[sp, #0x10]
7101e4c894  ldp d9,d8,[sp], #0x70
7101e4c898  ret
7101e4c89c  ldrb w8,[x20, #0x40]
7101e4c8a0  cbz w8,0x7101e4c6bc
7101e4c8a4  ldr x0,[x20]
7101e4c8a8  ldrb w8,[x0, #0x8]
7101e4c8ac  cbz w8,0x7101e4c6bc
7101e4c8b0  adrp x8,0x7104471000
7101e4c8b4  ldr s8,[x8, #0xd90]
7101e4c8b8  fmov s9,0x3f800000
7101e4c8bc  mov x22,xzr
7101e4c8c0  mov x19,xzr
7101e4c8c4  add x23,x20,#0x74
7101e4c8c8  orr w24,wzr,#0xffff
7101e4c8cc  adrp x25,0x7105329000
7101e4c8d0  mov w27,#0x50
7101e4c8d4  mov w28,#0x1940
7101e4c8d8  movk w28,#0x1, LSL #16
7101e4c8dc  adrp x26,0x710532a000
7101e4c8e0  add x26,x26,#0x878
7101e4c8e4  cmp x19,#0x4
7101e4c8e8  b.cs 0x7101e4ca24
7101e4c8ec  ldr x8,[x20, #0x8]
7101e4c8f0  ldrsh w9,[x8, x22, LSL #0x0]
7101e4c8f4  cmn w9,#0x1
7101e4c8f8  b.eq 0x7101e4ca08
7101e4c8fc  add x9,x8,x22
7101e4c900  ldr s1,[x9, #0x1d0]
7101e4c904  ldur s0,[x23, #-0xc]
7101e4c908  ucvtf s1,s1
7101e4c90c  fcmp s0,s1
7101e4c910  b.pl 0x7101e4c928
7101e4c914  ldur s2,[x23, #-0x8]
7101e4c918  fcmp s2,s1
7101e4c91c  b.eq 0x7101e4c928
7101e4c920  str wzr,[x23]
7101e4c924  stp s1,s0,[x23, #-0x8]
7101e4c928  ldr w9,[x23]
7101e4c92c  cmp w9,#0x3a
7101e4c930  b.hi 0x7101e4c93c
7101e4c934  add w9,w9,#0x1
7101e4c938  str w9,[x23]
7101e4c93c  ucvtf s0,w9
7101e4c940  fdiv s0,s0,s8
7101e4c944  fcmp s0,s9
7101e4c948  b.ge 0x7101e4c974
7101e4c94c  ldp s1,s2,[x23, #-0x8]
7101e4c950  fsub s3,s1,s2
7101e4c954  fmul s0,s0,s3
7101e4c958  fadd s0,s2,s0
7101e4c95c  fcmp s0,s1
7101e4c960  fcsel s1,s1,s0,gt
7101e4c964  fcmp s0,s2
7101e4c968  fcsel s0,s2,s1,mi
7101e4c96c  stur s0,[x23, #-0xc]
7101e4c970  b 0x7101e4c980
7101e4c974  ldur w9,[x23, #-0x8]
7101e4c978  stur w9,[x23, #-0xc]
7101e4c97c  fmov s0,w9
7101e4c980  ldrh w8,[x8, x22, LSL #0x0]
7101e4c984  cmp x8,x24
7101e4c988  orr w2,wzr,#0xffff
7101e4c98c  b.eq 0x7101e4c9f8
7101e4c990  ldr x9,[x25, #0xf98]
7101e4c994  ldr x9,[x9]
7101e4c998  ldr x9,[x9, #0x30]
7101e4c99c  ubfx x10,x8,#0x4,#0x1c
7101e4c9a0  cmp w10,#0x177
7101e4c9a4  b.cc 0x7101e4c9ec
7101e4c9a8  mov w10,#0xffffe890
7101e4c9ac  add w10,w8,w10
7101e4c9b0  and w8,w10,#0xffff
7101e4c9b4  cmp w8,#0x63
7101e4c9b8  mov x8,x26
7101e4c9bc  b.hi 0x7101e4c9f4
7101e4c9c0  and x8,x10,#0xffff
7101e4c9c4  mov w10,#0x8cc8
7101e4c9c8  movk w10,#0x8, LSL #16
7101e4c9cc  madd x8,x8,x27,x9
7101e4c9d0  mov w9,#0x8cc0
7101e4c9d4  movk w9,#0x8, LSL #16
7101e4c9d8  add x9,x8,x9
7101e4c9dc  ldrsh w8,[x8, x10, LSL #0x0]
7101e4c9e0  cmn w8,#0x1
7101e4c9e4  csel x8,x26,x9,eq
7101e4c9e8  b 0x7101e4c9f4
7101e4c9ec  madd x8,x8,x27,x9
7101e4c9f0  add x8,x8,x28
7101e4c9f4  ldrh w2,[x8, #0x8]
7101e4c9f8  mov w1,w19
7101e4c9fc  mov w3,wzr
7101e4ca00  bl 0x7101e4b7f0
7101e4ca04  ldr x0,[x20]
7101e4ca08  ldrb w8,[x0, #0x8]
7101e4ca0c  add x19,x19,#0x1
7101e4ca10  add x22,x22,#0x1d8
7101e4ca14  add x23,x23,#0x10
7101e4ca18  cmp x19,x8
7101e4ca1c  b.cc 0x7101e4c8e4
7101e4ca20  b 0x7101e4c6bc
7101e4ca24  bl 0x71039c2650
