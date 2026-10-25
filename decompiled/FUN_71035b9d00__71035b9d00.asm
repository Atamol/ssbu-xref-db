// addr:      71035b9d00
// offset:    0x35b9d00
// name:      FUN_71035b9d00
// mangled:   
// size:      7032

71035b9d00  sub sp,sp,#0x190
71035b9d04  stp x28,x27,[sp, #0x130]
71035b9d08  stp x26,x25,[sp, #0x140]
71035b9d0c  stp x24,x23,[sp, #0x150]
71035b9d10  stp x22,x21,[sp, #0x160]
71035b9d14  stp x20,x19,[sp, #0x170]
71035b9d18  stp x29,x30,[sp, #0x180]
71035b9d1c  add x29,sp,#0x180
71035b9d20  mov x27,x0
71035b9d24  ldp x8,x0,[x1]
71035b9d28  cbz x0,0x71035b9d40
71035b9d2c  add x9,x0,#0x10
71035b9d30  ldxr x10,[x9]
71035b9d34  add x10,x10,#0x1
71035b9d38  stxr w11,x10,[x9]
71035b9d3c  cbnz w11,0x71035b9d30
71035b9d40  str x8,[x27, #0x10]
71035b9d44  ldr x8,[x27, #0x18]
71035b9d48  str x0,[x27, #0x18]
71035b9d4c  cbz x8,0x71035b9d5c
71035b9d50  mov x0,x8
71035b9d54  bl 0x71039c2670
71035b9d58  ldr x0,[x27, #0x18]
71035b9d5c  cbz x0,0x71035b9d74
71035b9d60  bl 0x71039c2760
71035b9d64  mov x23,x0
71035b9d68  cbz x0,0x71035b9d80
71035b9d6c  ldr x24,[x27, #0x10]
71035b9d70  b 0x71035b9d84
71035b9d74  mov x24,xzr
71035b9d78  mov x23,xzr
71035b9d7c  b 0x71035b9d84
71035b9d80  mov x24,xzr
71035b9d84  ldr x8,[x24]
71035b9d88  ldr x8,[x8, #0x20]
71035b9d8c  mov x0,x24
71035b9d90  blr x8
71035b9d94  cbz w0,0x71035b9da8
71035b9d98  mov w19,wzr
71035b9d9c  cbz x23,0x71035bb830
71035b9da0  add x20,x23,#0x8
71035b9da4  b 0x71035bb804
71035b9da8  cbz x23,0x71035b9dc0
71035b9dac  add x8,x23,#0x8
71035b9db0  ldxr x9,[x8]
71035b9db4  add x9,x9,#0x1
71035b9db8  stxr w10,x9,[x8]
71035b9dbc  cbnz w10,0x71035b9db0
71035b9dc0  ldr x8,[x24]
71035b9dc4  ldr x8,[x8, #0x250]
71035b9dc8  mov x0,x24
71035b9dcc  blr x8
71035b9dd0  ldrb w8,[x0, #0x49]
71035b9dd4  strb w8,[x27, #0x90]
71035b9dd8  ldr x8,[x24, #0x480]
71035b9ddc  ldr w9,[x8, #0x18]
71035b9de0  ldr x8,[x8]
71035b9de4  orr w10,wzr,#0x70
71035b9de8  madd x9,x9,x10,x8
71035b9dec  ldp x8,x19,[x9]
71035b9df0  cbz x19,0x71035b9e30
71035b9df4  add x9,x19,#0x8
71035b9df8  ldxr x10,[x9]
71035b9dfc  add x10,x10,#0x1
71035b9e00  stxr w11,x10,[x9]
71035b9e04  cbnz w11,0x71035b9df8
71035b9e08  ldp x20,x21,[x8, #0x108]
71035b9e0c  ldr x22,[x8, #0x118]
71035b9e10  add x9,x19,#0x8
71035b9e14  ldaxr x8,[x9]
71035b9e18  sub x10,x8,#0x1
71035b9e1c  stlxr w11,x10,[x9]
71035b9e20  cbnz w11,0x71035b9e14
71035b9e24  cbz x8,0x71035b9e40
71035b9e28  cbnz x21,0x71035b9e5c
71035b9e2c  b 0x71035ba2f8
71035b9e30  ldp x20,x21,[x8, #0x108]
71035b9e34  ldr x22,[x8, #0x118]
71035b9e38  cbnz x21,0x71035b9e5c
71035b9e3c  b 0x71035ba2f8
71035b9e40  ldr x8,[x19]
71035b9e44  ldr x8,[x8, #0x10]
71035b9e48  mov x0,x19
71035b9e4c  blr x8
71035b9e50  mov x0,x19
71035b9e54  bl 0x71039c2670
71035b9e58  cbz x21,0x71035ba2f8
71035b9e5c  ldr x8,[x21]
71035b9e60  cmp x8,x22
71035b9e64  b.ne 0x71035ba2f8
71035b9e68  stp xzr,xzr,[x29, #-0x68]
71035b9e6c  stur xzr,[x29, #-0x70]
71035b9e70  ldr x20,[x20, #0x20]
71035b9e74  cbz x20,0x71035ba304
71035b9e78  adrp x8,0x7105336000
71035b9e7c  ldr x8,[x8, #0xe10]
71035b9e80  add x9,sp,#0xa8
71035b9e84  add x9,x9,#0x8
71035b9e88  stp x24,x23,[sp, #0x8]
71035b9e8c  stp x27,x9,[sp, #0x18]
71035b9e90  ldr x9,[x8, #0x28]
71035b9e94  str x9,[sp, #0x50]
71035b9e98  ldr x9,[x8, #0x30]
71035b9e9c  str x9,[sp, #0x48]
71035b9ea0  ldr x9,[x8, #0x38]
71035b9ea4  str x9,[sp, #0x40]
71035b9ea8  ldr x9,[x8, #0x48]
71035b9eac  str x9,[sp, #0x38]
71035b9eb0  ldp x9,x8,[x8, #0x50]
71035b9eb4  mov w25,wzr
71035b9eb8  mov w24,#0xd
71035b9ebc  mov x27,#-0xe
71035b9ec0  adrp x26,0x7104497000
71035b9ec4  add x26,x26,#0x704
71035b9ec8  adrp x28,0x7105290000
71035b9ecc  add x28,x28,#0xed8
71035b9ed0  adrp x22,0x7105335000
71035b9ed4  add x22,x22,#0x558
71035b9ed8  adrp x21,0x7105231000
71035b9edc  add x21,x21,#0x650
71035b9ee0  stp x8,x9,[sp, #0x28]
71035b9ee4  bl 0x71038cd8c0
71035b9ee8  ldr w1,[x20, #0x28]
71035b9eec  eor w2,w1,w1, ASR #0x1f
71035b9ef0  add x23,x20,#0x30
71035b9ef4  add x19,x0,#0x158
71035b9ef8  add x0,sp,#0xa8
71035b9efc  mov x3,x23
71035b9f00  bl 0x710356bf30
71035b9f04  ldr x8,[sp, #0xb0]
71035b9f08  add x2,x8,#0x120
71035b9f0c  add x0,sp,#0x60
71035b9f10  mov x1,x19
71035b9f14  bl 0x71038b4780
71035b9f18  ldr x9,[sp, #0x68]
71035b9f1c  ldp x8,x9,[x9, #0x10]
71035b9f20  cmp x8,x9
71035b9f24  b.eq 0x71035b9fec
71035b9f28  ldr x10,[x8, #0x8]
71035b9f2c  ldr x11,[x10, #0x148]
71035b9f30  add x10,x10,#0x150
71035b9f34  b 0x71035b9f3c
71035b9f38  mov x11,x13
71035b9f3c  cmp x11,x10
71035b9f40  b.eq 0x71035b9fe0
71035b9f44  ldrb w12,[x11, #0x61]
71035b9f48  cmp w12,#0xd
71035b9f4c  csel x13,x12,x24,cc
71035b9f50  cbz x13,0x71035b9f90
71035b9f54  mvn x14,x12
71035b9f58  cmn x14,#0xe
71035b9f5c  csinv x14,x27,x12,ls
71035b9f60  add x13,x11,#0x20
71035b9f64  mov x15,x26
71035b9f68  add x14,x14,#0x1
71035b9f6c  ldrb w16,[x13]
71035b9f70  ldrb w17,[x15]
71035b9f74  cmp w16,w17
71035b9f78  b.ne 0x71035b9f98
71035b9f7c  cbz w16,0x71035b9f90
71035b9f80  add x13,x13,#0x1
71035b9f84  add x15,x15,#0x1
71035b9f88  adds x14,x14,#0x1
71035b9f8c  b.ne 0x71035b9f6c
71035b9f90  cmp w12,#0xd
71035b9f94  b.eq 0x71035b9ff8
71035b9f98  ldr x12,[x11, #0x8]
71035b9f9c  cbz x12,0x71035b9fb0
71035b9fa0  mov x11,x12
71035b9fa4  ldr x12,[x12]
71035b9fa8  cbnz x12,0x71035b9fa0
71035b9fac  b 0x71035b9f3c
71035b9fb0  mov x12,x11
71035b9fb4  ldr x13,[x12, #0x10]!
71035b9fb8  ldr x14,[x13]
71035b9fbc  cmp x14,x11
71035b9fc0  b.eq 0x71035b9f38
71035b9fc4  ldr x13,[x12]
71035b9fc8  mov x12,x13
71035b9fcc  ldr x11,[x12, #0x10]!
71035b9fd0  ldr x14,[x11]
71035b9fd4  cmp x14,x13
71035b9fd8  b.ne 0x71035b9fc4
71035b9fdc  b 0x71035b9f3c
71035b9fe0  add x8,x8,#0x20
71035b9fe4  cmp x8,x9
71035b9fe8  b.ne 0x71035b9f28
71035b9fec  ldr x20,[x20]
71035b9ff0  cbnz x20,0x71035b9ee4
71035b9ff4  b 0x71035ba268
71035b9ff8  ldr w1,[x20, #0x28]
71035b9ffc  eor w2,w1,w1, ASR #0x1f
71035ba000  add x0,sp,#0xa8
71035ba004  mov x3,x23
71035ba008  bl 0x710356bf30
71035ba00c  mov w8,#0x133
71035ba010  stur w8,[x29, #-0x78]
71035ba014  ldr x8,[sp, #0x50]
71035ba018  str x8,[sp, #0xb8]
71035ba01c  ldr x8,[sp, #0x48]
71035ba020  ldr x0,[sp, #0xb0]
71035ba024  adrp x19,0x7105230000
71035ba028  add x19,x19,#0x2c0
71035ba02c  mov w25,#0xb
71035ba030  sub x1,x29,#0x80
71035ba034  add x2,sp,#0xa8
71035ba038  mov w3,wzr
71035ba03c  str x19,[sp, #0xb0]
71035ba040  str w25,[sp, #0xa8]
71035ba044  str x8,[sp, #0xc0]
71035ba048  ldr x8,[sp, #0x40]
71035ba04c  stur x28,[x29, #-0x80]
71035ba050  str x8,[sp, #0xc8]
71035ba054  bl 0x71038a9ca0
71035ba058  ldr w8,[sp, #0xa8]
71035ba05c  ldr x19,[sp, #0x20]
71035ba060  eor w0,w8,w8, ASR #0x1f
71035ba064  mov x1,x19
71035ba068  bl 0x710356bff0
71035ba06c  ldr w1,[x20, #0x28]
71035ba070  eor w2,w1,w1, ASR #0x1f
71035ba074  add x0,sp,#0xa8
71035ba078  mov x3,x23
71035ba07c  bl 0x710356bf30
71035ba080  mov w8,#0x137
71035ba084  stur w8,[x29, #-0x78]
71035ba088  ldr x0,[sp, #0xb0]
71035ba08c  ldp x8,x9,[x22]
71035ba090  orr w25,wzr,#0xe
71035ba094  stp x8,x9,[sp, #0xb8]
71035ba098  ldr x8,[x22, #0x10]
71035ba09c  sub x1,x29,#0x80
71035ba0a0  add x2,sp,#0xa8
71035ba0a4  mov w3,wzr
71035ba0a8  stur x28,[x29, #-0x80]
71035ba0ac  str x8,[sp, #0xc8]
71035ba0b0  str x21,[sp, #0xb0]
71035ba0b4  str w25,[sp, #0xa8]
71035ba0b8  bl 0x71038a9ca0
71035ba0bc  ldr w8,[sp, #0xa8]
71035ba0c0  eor w0,w8,w8, ASR #0x1f
71035ba0c4  mov x1,x19
71035ba0c8  bl 0x710356bff0
71035ba0cc  ldr w1,[x20, #0x28]
71035ba0d0  eor w2,w1,w1, ASR #0x1f
71035ba0d4  add x0,sp,#0xa8
71035ba0d8  mov x3,x23
71035ba0dc  bl 0x710356bf30
71035ba0e0  mov w8,#0x134
71035ba0e4  stur w8,[x29, #-0x78]
71035ba0e8  ldr x8,[sp, #0x38]
71035ba0ec  str x8,[sp, #0xb8]
71035ba0f0  ldr x8,[sp, #0x30]
71035ba0f4  str x8,[sp, #0xc0]
71035ba0f8  ldr x8,[sp, #0x28]
71035ba0fc  ldr x0,[sp, #0xb0]
71035ba100  sub x1,x29,#0x80
71035ba104  add x2,sp,#0xa8
71035ba108  mov w3,wzr
71035ba10c  str x8,[sp, #0xc8]
71035ba110  adrp x8,0x7105230000
71035ba114  add x8,x8,#0x2c0
71035ba118  str x8,[sp, #0xb0]
71035ba11c  mov w8,#0xb
71035ba120  stur x28,[x29, #-0x80]
71035ba124  str w8,[sp, #0xa8]
71035ba128  bl 0x71038a9ca0
71035ba12c  ldr w8,[sp, #0xa8]
71035ba130  eor w0,w8,w8, ASR #0x1f
71035ba134  mov x1,x19
71035ba138  bl 0x710356bff0
71035ba13c  ldr w1,[x20, #0x28]
71035ba140  eor w2,w1,w1, ASR #0x1f
71035ba144  add x0,sp,#0xa8
71035ba148  mov x3,x23
71035ba14c  bl 0x710356bf30
71035ba150  mov w8,#0x138
71035ba154  stur w8,[x29, #-0x78]
71035ba158  ldr x0,[sp, #0xb0]
71035ba15c  ldp x8,x9,[x22]
71035ba160  sub x1,x29,#0x80
71035ba164  stp x8,x9,[sp, #0xb8]
71035ba168  ldr x8,[x22, #0x10]
71035ba16c  add x2,sp,#0xa8
71035ba170  mov w3,wzr
71035ba174  stur x28,[x29, #-0x80]
71035ba178  str x21,[sp, #0xb0]
71035ba17c  str x8,[sp, #0xc8]
71035ba180  str w25,[sp, #0xa8]
71035ba184  bl 0x71038a9ca0
71035ba188  ldr w8,[sp, #0xa8]
71035ba18c  eor w0,w8,w8, ASR #0x1f
71035ba190  mov x1,x19
71035ba194  bl 0x710356bff0
71035ba198  ldr w1,[x20, #0x28]
71035ba19c  eor w2,w1,w1, ASR #0x1f
71035ba1a0  add x0,sp,#0xa8
71035ba1a4  mov x3,x23
71035ba1a8  bl 0x710356bf30
71035ba1ac  ldr x19,[sp, #0xb0]
71035ba1b0  bl 0x71002c48f0
71035ba1b4  bl 0x71002c48f0
71035ba1b8  ldr x8,[x0, #0x58]
71035ba1bc  adrp x9,0x7105231000
71035ba1c0  add x9,x9,#0x790
71035ba1c4  stp x9,x8,[sp, #0xa8]
71035ba1c8  cbz x8,0x71035ba1dc
71035ba1cc  ldr x8,[x8, #0x8]
71035ba1d0  str x8,[sp, #0xb8]
71035ba1d4  ldr x8,[x8]
71035ba1d8  b 0x71035ba1e0
71035ba1dc  str xzr,[sp, #0xb8]
71035ba1e0  str x8,[sp, #0xc0]
71035ba1e4  adrp x8,0x7105231000
71035ba1e8  add x8,x8,#0x7b0
71035ba1ec  str x8,[sp, #0xa8]
71035ba1f0  add x1,sp,#0xa8
71035ba1f4  mov x0,x19
71035ba1f8  bl 0x71038ac560
71035ba1fc  ldr w1,[x20, #0x28]
71035ba200  eor w2,w1,w1, ASR #0x1f
71035ba204  add x0,sp,#0xa8
71035ba208  mov x3,x23
71035ba20c  bl 0x710356bf30
71035ba210  ldp x8,x9,[x29, #-0x68]
71035ba214  cmp x8,x9
71035ba218  b.cs 0x71035ba250
71035ba21c  ldr x9,[sp, #0xb0]
71035ba220  str x9,[x8, #0x8]
71035ba224  ldr x9,[sp, #0xb8]
71035ba228  str x9,[x8, #0x10]
71035ba22c  ldr x9,[sp, #0xc0]
71035ba230  str x9,[x8, #0x18]
71035ba234  adrp x9,0x7105230000
71035ba238  add x9,x9,#0x2e0
71035ba23c  str x9,[x8]
71035ba240  ldur x8,[x29, #-0x68]
71035ba244  add x8,x8,#0x20
71035ba248  stur x8,[x29, #-0x68]
71035ba24c  b 0x71035ba25c
71035ba250  sub x0,x29,#0x70
71035ba254  add x1,sp,#0xa8
71035ba258  bl 0x71035bd730
71035ba25c  mov w25,#0x1
71035ba260  ldr x20,[x20]
71035ba264  cbnz x20,0x71035b9ee4
71035ba268  ldp x23,x27,[sp, #0x10]
71035ba26c  ldr x19,[sp, #0x8]
71035ba270  tbz w25,#0x0,0x71035ba304
71035ba274  ldr x8,[x19]
71035ba278  ldr x8,[x8, #0x18]
71035ba27c  mov x0,x19
71035ba280  blr x8
71035ba284  tbz w0,#0x0,0x71035ba318
71035ba288  ldr x8,[x19, #0x480]
71035ba28c  cbz x8,0x71035ba31c
71035ba290  ldr w9,[x8, #0x18]
71035ba294  ldr x8,[x8]
71035ba298  orr w10,wzr,#0x70
71035ba29c  madd x8,x9,x10,x8
71035ba2a0  ldp x20,x19,[x8]
71035ba2a4  cbz x19,0x71035ba2e8
71035ba2a8  add x8,x19,#0x8
71035ba2ac  ldxr x9,[x8]
71035ba2b0  add x9,x9,#0x1
71035ba2b4  stxr w10,x9,[x8]
71035ba2b8  cbnz w10,0x71035ba2ac
71035ba2bc  ldaxr x9,[x8]
71035ba2c0  sub x10,x9,#0x1
71035ba2c4  stlxr w11,x10,[x8]
71035ba2c8  cbnz w11,0x71035ba2bc
71035ba2cc  cbnz x9,0x71035ba2e8
71035ba2d0  ldr x8,[x19]
71035ba2d4  ldr x8,[x8, #0x10]
71035ba2d8  mov x0,x19
71035ba2dc  blr x8
71035ba2e0  mov x0,x19
71035ba2e4  bl 0x71039c2670
71035ba2e8  cbz x20,0x71035ba318
71035ba2ec  ldr x8,[x20, #0x40]
71035ba2f0  ldr x8,[x8, #0x68]
71035ba2f4  b 0x71035ba31c
71035ba2f8  mov w19,wzr
71035ba2fc  cbnz x23,0x71035bb7d4
71035ba300  b 0x71035bb830
71035ba304  mov w19,wzr
71035ba308  strb wzr,[x27, #0x8]
71035ba30c  ldur x21,[x29, #-0x70]
71035ba310  cbnz x21,0x71035bb79c
71035ba314  b 0x71035bb7d0
71035ba318  mov x8,xzr
71035ba31c  ldp x21,x8,[x8, #0x68]
71035ba320  cmp x21,x8
71035ba324  str x8,[sp, #0x38]
71035ba328  b.eq 0x71035bb0a4
71035ba32c  add x8,sp,#0xa8
71035ba330  add x9,x27,#0x20
71035ba334  str x9,[sp, #0x40]
71035ba338  add x9,x27,#0x30
71035ba33c  orr x8,x8,#0x1
71035ba340  mov x19,#-0x1
71035ba344  adrp x26,0x7104754000
71035ba348  add x26,x26,#0x84
71035ba34c  str x9,[sp, #0x28]
71035ba350  adrp x20,0x71042f6000
71035ba354  add x20,x20,#0x60d
71035ba358  str x8,[sp, #0x50]
71035ba35c  adrp x25,0x7104420000
71035ba360  add x25,x25,#0xd14
71035ba364  ldp x23,x22,[x29, #-0x70]
71035ba368  cmp x23,x22
71035ba36c  b.ne 0x71035bac58
71035ba370  b 0x71035bb094
71035ba374  mov x9,x24
71035ba378  b 0x71035ba380
71035ba37c  mov x9,x8
71035ba380  mvn x8,x8
71035ba384  add x8,x28,x8
71035ba388  cmp x24,x9
71035ba38c  add x8,x8,x9
71035ba390  sub x9,x28,#0x1
71035ba394  csel x8,x19,x8,eq
71035ba398  cmp x8,x9
71035ba39c  b.ne 0x71035ba3ec
71035ba3a0  cmp x28,x8
71035ba3a4  csel x28,x8,x28,hi
71035ba3a8  add x8,x24,x28
71035ba3ac  cbz x28,0x71035ba37c
71035ba3b0  ldurb w9,[x8, #-0x1]
71035ba3b4  cmp w9,#0x5f
71035ba3b8  mov x9,x8
71035ba3bc  b.eq 0x71035ba380
71035ba3c0  add x9,x28,#0x1
71035ba3c4  cmp x9,#0x2
71035ba3c8  b.eq 0x71035ba374
71035ba3cc  add x10,x24,x9
71035ba3d0  sub x9,x9,#0x1
71035ba3d4  ldurb w10,[x10, #-0x3]
71035ba3d8  cmp w10,#0x5f
71035ba3dc  b.ne 0x71035ba3c4
71035ba3e0  add x9,x24,x9
71035ba3e4  sub x9,x9,#0x1
71035ba3e8  b 0x71035ba380
71035ba3ec  cmn x28,#0x10
71035ba3f0  stp xzr,xzr,[sp, #0xb0]
71035ba3f4  str xzr,[sp, #0xa8]
71035ba3f8  b.cs 0x71035bb868
71035ba3fc  add x20,x24,x28
71035ba400  cmp x28,#0x17
71035ba404  b.cs 0x71035ba424
71035ba408  ldr x0,[sp, #0x50]
71035ba40c  lsl w8,w28,#0x1
71035ba410  strb w8,[sp, #0xa8]
71035ba414  cbnz x28,0x71035ba490
71035ba418  ldr x8,[sp, #0x50]
71035ba41c  mov x19,xzr
71035ba420  b 0x71035ba528
71035ba424  add x8,x28,#0x10
71035ba428  and x25,x8,#-0x10
71035ba42c  tst x8,#-0x10
71035ba430  csinc x19,x25,xzr,ne
71035ba434  mov w0,#0x10
71035ba438  mov x1,x19
71035ba43c  bl 0x710392e290
71035ba440  cbnz x0,0x71035ba484
71035ba444  adrp x8,0x7105332000
71035ba448  ldr x0,[x8, #0xf00]
71035ba44c  cbz x0,0x71035ba480
71035ba450  stur wzr,[x29, #-0x80]
71035ba454  str x19,[sp, #0x60]
71035ba458  ldr x8,[x0]
71035ba45c  ldr x8,[x8, #0x30]
71035ba460  sub x1,x29,#0x80
71035ba464  add x2,sp,#0x60
71035ba468  blr x8
71035ba46c  tbz w0,#0x0,0x71035ba480
71035ba470  mov w0,#0x10
71035ba474  mov x1,x19
71035ba478  bl 0x710392e290
71035ba47c  cbnz x0,0x71035ba484
71035ba480  mov x0,xzr
71035ba484  orr x8,x25,#0x1
71035ba488  stp x28,x0,[sp, #0xb0]
71035ba48c  str x8,[sp, #0xa8]
71035ba490  sub x10,x28,#0x1
71035ba494  ands x11,x28,#0x7
71035ba498  mov x8,x24
71035ba49c  mov x9,x0
71035ba4a0  b.eq 0x71035ba4c8
71035ba4a4  add x8,x24,x11
71035ba4a8  neg x9,x11
71035ba4ac  mov x12,x24
71035ba4b0  mov x13,x0
71035ba4b4  ldrb w14,[x12], #0x1
71035ba4b8  adds x9,x9,#0x1
71035ba4bc  strb w14,[x13], #0x1
71035ba4c0  b.ne 0x71035ba4b4
71035ba4c4  add x9,x0,x11
71035ba4c8  cmp x10,#0x7
71035ba4cc  b.cc 0x71035ba520
71035ba4d0  ldrb w10,[x8]
71035ba4d4  strb w10,[x9]
71035ba4d8  ldrb w10,[x8, #0x1]
71035ba4dc  strb w10,[x9, #0x1]
71035ba4e0  ldrb w10,[x8, #0x2]
71035ba4e4  strb w10,[x9, #0x2]
71035ba4e8  ldrb w10,[x8, #0x3]
71035ba4ec  strb w10,[x9, #0x3]
71035ba4f0  ldrb w10,[x8, #0x4]
71035ba4f4  strb w10,[x9, #0x4]
71035ba4f8  ldrb w10,[x8, #0x5]
71035ba4fc  strb w10,[x9, #0x5]
71035ba500  ldrb w10,[x8, #0x6]
71035ba504  strb w10,[x9, #0x6]
71035ba508  ldrb w10,[x8, #0x7]
71035ba50c  add x8,x8,#0x8
71035ba510  cmp x8,x20
71035ba514  strb w10,[x9, #0x7]
71035ba518  add x9,x9,#0x8
71035ba51c  b.ne 0x71035ba4d0
71035ba520  add x8,x0,x28
71035ba524  mov x19,x28
71035ba528  strb wzr,[x8]
71035ba52c  ldrb w8,[sp, #0xa8]
71035ba530  ldr x0,[sp, #0xb8]
71035ba534  ldr x9,[sp, #0x50]
71035ba538  tst w8,#0x1
71035ba53c  csel x9,x9,x0,eq
71035ba540  cbz w19,0x71035ba790
71035ba544  add x10,x9,w19, UXTW 
71035ba548  mov w11,#0xffffffff
71035ba54c  ldrb w12,[x9], #0x1
71035ba550  sub w13,w12,#0x41
71035ba554  add w14,w12,#0x20
71035ba558  cmp w13,#0x1a
71035ba55c  csel w12,w14,w12,cc
71035ba560  eor w12,w12,w11
71035ba564  and w12,w12,#0xff
71035ba568  cmp x9,x10
71035ba56c  ldr w12,[x26, w12, UXTW #0x2]
71035ba570  eor w11,w12,w11, LSR #0x8
71035ba574  b.cc 0x71035ba54c
71035ba578  mvn w9,w11
71035ba57c  str x9,[sp, #0x48]
71035ba580  tbz w8,#0x0,0x71035ba58c
71035ba584  cbz x0,0x71035ba58c
71035ba588  bl 0x710392eb40
71035ba58c  mov w0,#0x10
71035ba590  orr w1,wzr,#0xf8
71035ba594  bl 0x710392e290
71035ba598  mov x25,x0
71035ba59c  cbnz x0,0x71035ba5e8
71035ba5a0  adrp x8,0x7105332000
71035ba5a4  ldr x0,[x8, #0xf00]
71035ba5a8  cbz x0,0x71035ba5e4
71035ba5ac  orr w8,wzr,#0xf8
71035ba5b0  str wzr,[sp, #0x60]
71035ba5b4  add x1,sp,#0x60
71035ba5b8  str x8,[sp, #0xa8]
71035ba5bc  ldr x8,[x0]
71035ba5c0  ldr x8,[x8, #0x30]
71035ba5c4  add x2,sp,#0xa8
71035ba5c8  blr x8
71035ba5cc  tbz w0,#0x0,0x71035ba5e4
71035ba5d0  mov w0,#0x10
71035ba5d4  orr w1,wzr,#0xf8
71035ba5d8  bl 0x710392e290
71035ba5dc  mov x25,x0
71035ba5e0  cbnz x0,0x71035ba5e8
71035ba5e4  mov x25,xzr
71035ba5e8  mov x8,x25
71035ba5ec  adrp x9,0x7105231000
71035ba5f0  add x9,x9,#0x950
71035ba5f4  str xzr,[x8, #0x8]!
71035ba5f8  str x9,[x25]
71035ba5fc  adrp x9,0x7105232000
71035ba600  add x9,x9,#0x4b8
71035ba604  stp x9,xzr,[x25, #0xa0]
71035ba608  adrp x9,0x710522f000
71035ba60c  add x9,x9,#0xf60
71035ba610  stp xzr,xzr,[x25, #0x10]
71035ba614  stp xzr,xzr,[x25, #0xb0]
71035ba618  str xzr,[x25, #0xf0]
71035ba61c  strb wzr,[x25, #0xe8]
71035ba620  str xzr,[x25, #0xe0]
71035ba624  stp xzr,xzr,[x25, #0x90]
71035ba628  stp xzr,xzr,[x25, #0x80]
71035ba62c  stp xzr,xzr,[x25, #0x70]
71035ba630  stp xzr,xzr,[x25, #0x60]
71035ba634  stp xzr,xzr,[x25, #0x50]
71035ba638  stp xzr,xzr,[x25, #0x40]
71035ba63c  stp xzr,xzr,[x25, #0x30]
71035ba640  stp xzr,xzr,[x25, #0x20]
71035ba644  stp xzr,xzr,[x25, #0xd0]
71035ba648  stp x9,xzr,[x25, #0xc0]
71035ba64c  ldr x9,[x21, #0x30]
71035ba650  cbz x9,0x71035ba680
71035ba654  ldr x9,[x9]
71035ba658  ldr x10,[x21, #0x38]
71035ba65c  cmp x9,x10
71035ba660  b.ne 0x71035ba680
71035ba664  ldr x9,[x21, #0x28]
71035ba668  str x9,[x8]
71035ba66c  cbz x9,0x71035ba684
71035ba670  ldr x8,[x9, #0x8]
71035ba674  str x8,[x25, #0x10]
71035ba678  ldr x8,[x8]
71035ba67c  b 0x71035ba68c
71035ba680  str xzr,[x8]
71035ba684  mov x8,xzr
71035ba688  str xzr,[x25, #0x10]
71035ba68c  cmp x28,#0x7
71035ba690  mov x11,x20
71035ba694  str x8,[x25, #0x18]
71035ba698  b.lt 0x71035ba738
71035ba69c  sub x8,x20,#0x6
71035ba6a0  cmp x8,x24
71035ba6a4  b.eq 0x71035ba734
71035ba6a8  ldrb w12,[x24]
71035ba6ac  sub x9,x20,#0x7
71035ba6b0  mov x10,x24
71035ba6b4  and w11,w12,#0xff
71035ba6b8  cmp w11,#0x69
71035ba6bc  mov x11,x10
71035ba6c0  b.eq 0x71035ba6e4
71035ba6c4  cmp x9,x10
71035ba6c8  b.eq 0x71035ba734
71035ba6cc  add x11,x10,#0x1
71035ba6d0  ldrb w10,[x10, #0x1]
71035ba6d4  cmp w10,#0x69
71035ba6d8  mov x10,x11
71035ba6dc  b.ne 0x71035ba6c4
71035ba6e0  mov x10,x11
71035ba6e4  ldrb w12,[x10, #0x1]!
71035ba6e8  cmp w12,#0x6e
71035ba6ec  b.ne 0x71035ba72c
71035ba6f0  ldrb w13,[x11, #0x2]
71035ba6f4  cmp w13,#0x6b
71035ba6f8  b.ne 0x71035ba72c
71035ba6fc  ldrb w13,[x11, #0x3]
71035ba700  cmp w13,#0x4d
71035ba704  b.ne 0x71035ba72c
71035ba708  ldrb w13,[x11, #0x4]
71035ba70c  cmp w13,#0x65
71035ba710  b.ne 0x71035ba72c
71035ba714  ldrb w13,[x11, #0x5]
71035ba718  cmp w13,#0x73
71035ba71c  b.ne 0x71035ba72c
71035ba720  ldrb w13,[x11, #0x6]
71035ba724  cmp w13,#0x68
71035ba728  b.eq 0x71035ba738
71035ba72c  cmp x8,x10
71035ba730  b.ne 0x71035ba6b4
71035ba734  mov x11,x20
71035ba738  cmp x20,x11
71035ba73c  b.eq 0x71035ba8f0
71035ba740  sub x8,x11,x24
71035ba744  cmn x8,#0x1
71035ba748  b.eq 0x71035ba8f0
71035ba74c  mov w8,#0x1
71035ba750  str x19,[sp, #0x30]
71035ba754  strb w8,[x25, #0xe8]
71035ba758  cbz x28,0x71035ba79c
71035ba75c  mov x27,x28
71035ba760  mov x19,x24
71035ba764  ldrb w1,[x19]
71035ba768  mov w2,#0x8
71035ba76c  adrp x0,0x7104464000
71035ba770  add x0,x0,#0x453
71035ba774  bl 0x71039c0280
71035ba778  cbz x0,0x71035ba7a0
71035ba77c  add x19,x19,#0x1
71035ba780  subs x27,x27,#0x1
71035ba784  b.ne 0x71035ba764
71035ba788  mov x8,#-0x1
71035ba78c  b 0x71035ba7b0
71035ba790  str xzr,[sp, #0x48]
71035ba794  tbnz w8,#0x0,0x71035ba584
71035ba798  b 0x71035ba58c
71035ba79c  mov x19,x24
71035ba7a0  sub x8,x19,x24
71035ba7a4  cmp x19,x20
71035ba7a8  mov x9,#-0x1
71035ba7ac  csel x8,x9,x8,eq
71035ba7b0  cmp x28,x8
71035ba7b4  csel x27,x28,x8,cc
71035ba7b8  sub x20,x28,x27
71035ba7bc  stp xzr,xzr,[sp, #0xb0]
71035ba7c0  cmn x20,#0x10
71035ba7c4  str xzr,[sp, #0xa8]
71035ba7c8  b.cs 0x71035bb868
71035ba7cc  cmp x20,#0x17
71035ba7d0  b.cs 0x71035ba7ec
71035ba7d4  ldr x0,[sp, #0x50]
71035ba7d8  lsl w8,w20,#0x1
71035ba7dc  strb w8,[sp, #0xa8]
71035ba7e0  cbnz x20,0x71035ba858
71035ba7e4  ldr x8,[sp, #0x50]
71035ba7e8  b 0x71035ba878
71035ba7ec  add x8,x20,#0x10
71035ba7f0  and x28,x8,#-0x10
71035ba7f4  tst x8,#-0x10
71035ba7f8  csinc x19,x28,xzr,ne
71035ba7fc  mov w0,#0x10
71035ba800  mov x1,x19
71035ba804  bl 0x710392e290
71035ba808  cbnz x0,0x71035ba84c
71035ba80c  adrp x8,0x7105332000
71035ba810  ldr x0,[x8, #0xf00]
71035ba814  cbz x0,0x71035ba848
71035ba818  stur wzr,[x29, #-0x80]
71035ba81c  str x19,[sp, #0x60]
71035ba820  ldr x8,[x0]
71035ba824  ldr x8,[x8, #0x30]
71035ba828  sub x1,x29,#0x80
71035ba82c  add x2,sp,#0x60
71035ba830  blr x8
71035ba834  tbz w0,#0x0,0x71035ba848
71035ba838  mov w0,#0x10
71035ba83c  mov x1,x19
71035ba840  bl 0x710392e290
71035ba844  cbnz x0,0x71035ba84c
71035ba848  mov x0,xzr
71035ba84c  orr x8,x28,#0x1
71035ba850  stp x20,x0,[sp, #0xb0]
71035ba854  str x8,[sp, #0xa8]
71035ba858  add x8,x24,x27
71035ba85c  mov x9,x20
71035ba860  mov x10,x0
71035ba864  ldrb w11,[x8], #0x1
71035ba868  subs x9,x9,#0x1
71035ba86c  strb w11,[x10], #0x1
71035ba870  b.ne 0x71035ba864
71035ba874  add x8,x0,x20
71035ba878  strb wzr,[x8]
71035ba87c  ldrb w8,[sp, #0xa8]
71035ba880  ldr x0,[sp, #0xb8]
71035ba884  ldr x9,[sp, #0x50]
71035ba888  tst w8,#0x1
71035ba88c  ldr x27,[sp, #0x18]
71035ba890  csel x9,x9,x0,eq
71035ba894  cbz w20,0x71035baba8
71035ba898  add x10,x9,w20, UXTW 
71035ba89c  mov w11,#0xffffffff
71035ba8a0  ldrb w12,[x9], #0x1
71035ba8a4  sub w13,w12,#0x41
71035ba8a8  add w14,w12,#0x20
71035ba8ac  cmp w13,#0x1a
71035ba8b0  csel w12,w14,w12,cc
71035ba8b4  eor w12,w12,w11
71035ba8b8  and w12,w12,#0xff
71035ba8bc  cmp x9,x10
71035ba8c0  ldr w12,[x26, w12, UXTW #0x2]
71035ba8c4  eor w11,w12,w11, LSR #0x8
71035ba8c8  b.cc 0x71035ba8a0
71035ba8cc  mvn w19,w11
71035ba8d0  lsl x20,x20,#0x20
71035ba8d4  tbz w8,#0x0,0x71035ba8e0
71035ba8d8  cbz x0,0x71035ba8e0
71035ba8dc  bl 0x710392eb40
71035ba8e0  and x8,x20,#0xff00000000
71035ba8e4  orr x8,x19,x8
71035ba8e8  ldr x19,[sp, #0x30]
71035ba8ec  str x8,[x25, #0xf0]
71035ba8f0  ldr x9,[sp, #0x48]
71035ba8f4  lsl x8,x19,#0x20
71035ba8f8  and x8,x8,#0xff00000000
71035ba8fc  mov w0,#0x10
71035ba900  mov w1,#0x20
71035ba904  orr x19,x9,x8
71035ba908  bl 0x710392e290
71035ba90c  mov x24,x0
71035ba910  cbnz x0,0x71035ba95c
71035ba914  adrp x8,0x7105332000
71035ba918  ldr x0,[x8, #0xf00]
71035ba91c  cbz x0,0x71035ba958
71035ba920  mov w8,#0x20
71035ba924  str wzr,[sp, #0x60]
71035ba928  add x1,sp,#0x60
71035ba92c  str x8,[sp, #0xa8]
71035ba930  ldr x8,[x0]
71035ba934  ldr x8,[x8, #0x30]
71035ba938  add x2,sp,#0xa8
71035ba93c  blr x8
71035ba940  tbz w0,#0x0,0x71035ba958
71035ba944  mov w0,#0x10
71035ba948  mov w1,#0x20
71035ba94c  bl 0x710392e290
71035ba950  mov x24,x0
71035ba954  cbnz x0,0x71035ba95c
71035ba958  mov x24,xzr
71035ba95c  stp x19,x25,[x24, #0x10]
71035ba960  stp xzr,x19,[x24]
71035ba964  ldr x8,[x27, #0x38]
71035ba968  add x8,x8,#0x1
71035ba96c  ucvtf s0,x8
71035ba970  ldr s1,[x27, #0x40]
71035ba974  ldr x20,[x27, #0x28]
71035ba978  cbz x20,0x71035ba998
71035ba97c  ucvtf s2,x20
71035ba980  fmul s2,s1,s2
71035ba984  fcmp s2,s0
71035ba988  b.mi 0x71035ba998
71035ba98c  adrp x25,0x7104420000
71035ba990  add x25,x25,#0xd14
71035ba994  b 0x71035baa38
71035ba998  lsl x8,x20,#0x1
71035ba99c  cmp x20,#0x3
71035ba9a0  adrp x25,0x7104420000
71035ba9a4  add x25,x25,#0xd14
71035ba9a8  b.cc 0x71035ba9bc
71035ba9ac  sub x9,x20,#0x1
71035ba9b0  tst x9,x20
71035ba9b4  cset w9,ne
71035ba9b8  b 0x71035ba9c0
71035ba9bc  mov w9,#0x1
71035ba9c0  fdiv s0,s0,s1
71035ba9c4  orr x8,x9,x8
71035ba9c8  fcvtpu x9,s0
71035ba9cc  cmp x8,x9
71035ba9d0  csel x19,x9,x8,cc
71035ba9d4  subs x8,x19,#0x1
71035ba9d8  b.ne 0x71035baa04
71035ba9dc  mov w19,#0x2
71035ba9e0  cmp x19,x20
71035ba9e4  b.hi 0x71035baa24
71035ba9e8  b.cs 0x71035baa30
71035ba9ec  cmp x20,#0x3
71035ba9f0  b.cc 0x71035bac00
71035ba9f4  sub x8,x20,#0x1
71035ba9f8  tst x8,x20
71035ba9fc  cset w8,eq
71035baa00  b 0x71035bac04
71035baa04  tst x8,x19
71035baa08  b.eq 0x71035baa1c
71035baa0c  mov x0,x19
71035baa10  bl 0x71039c26e0
71035baa14  ldr x20,[x27, #0x28]
71035baa18  mov x19,x0
71035baa1c  cmp x19,x20
71035baa20  b.ls 0x71035ba9e8
71035baa24  ldr x0,[sp, #0x40]
71035baa28  mov x1,x19
71035baa2c  bl 0x71035bdda0
71035baa30  ldr x20,[x27, #0x28]
71035baa34  ldr x19,[x24, #0x8]
71035baa38  sub x8,x20,#0x1
71035baa3c  ands x10,x8,x20
71035baa40  b.eq 0x71035baa5c
71035baa44  cmp x19,x20
71035baa48  mov x9,x19
71035baa4c  b.cc 0x71035baa60
71035baa50  udiv x9,x19,x20
71035baa54  msub x9,x9,x20,x19
71035baa58  b 0x71035baa60
71035baa5c  and x9,x8,x19
71035baa60  ldr x11,[sp, #0x40]
71035baa64  ldr x12,[x11]
71035baa68  ldr x11,[x12, x9, LSL #0x3]
71035baa6c  cbz x11,0x71035bab70
71035baa70  mov w14,wzr
71035baa74  cbnz x10,0x71035baae0
71035baa78  mov x12,x11
71035baa7c  ldr x11,[x11]
71035baa80  cbz x11,0x71035bab38
71035baa84  mov w13,w14
71035baa88  ldr x14,[x11, #0x8]
71035baa8c  and x15,x14,x8
71035baa90  cmp x15,x9
71035baa94  b.ne 0x71035bab38
71035baa98  cmp x14,x19
71035baa9c  b.ne 0x71035baabc
71035baaa0  ldr x14,[x11, #0x10]
71035baaa4  ldr x15,[x24, #0x10]
71035baaa8  cmp x14,x15
71035baaac  cset w15,eq
71035baab0  orr w14,w13,w15
71035baab4  tbz w15,#0x0,0x71035baac8
71035baab8  b 0x71035baa78
71035baabc  mov w15,wzr
71035baac0  orr w14,w13,w15
71035baac4  tbnz w15,#0x0,0x71035baa78
71035baac8  eor w13,w13,#0x1
71035baacc  tbnz w13,#0x0,0x71035baa78
71035baad0  b 0x71035bab38
71035baad4  mov w15,wzr
71035baad8  orr w14,w13,w15
71035baadc  tbz w15,#0x0,0x71035bab30
71035baae0  mov x12,x11
71035baae4  ldr x11,[x11]
71035baae8  cbz x11,0x71035bab38
71035baaec  mov w13,w14
71035baaf0  ldr x14,[x11, #0x8]
71035baaf4  cmp x14,x20
71035baaf8  mov x15,x14
71035baafc  b.cc 0x71035bab08
71035bab00  udiv x15,x14,x20
71035bab04  msub x15,x15,x20,x14
71035bab08  cmp x15,x9
71035bab0c  b.ne 0x71035bab38
71035bab10  cmp x14,x19
71035bab14  b.ne 0x71035baad4
71035bab18  ldr x14,[x11, #0x10]
71035bab1c  ldr x15,[x24, #0x10]
71035bab20  cmp x14,x15
71035bab24  cset w15,eq
71035bab28  orr w14,w13,w15
71035bab2c  tbnz w15,#0x0,0x71035baae0
71035bab30  eor w13,w13,#0x1
71035bab34  tbnz w13,#0x0,0x71035baae0
71035bab38  ldr x11,[x12]
71035bab3c  str x11,[x24]
71035bab40  str x24,[x12]
71035bab44  ldr x11,[x24]
71035bab48  cbz x11,0x71035babe4
71035bab4c  ldr x11,[x11, #0x8]
71035bab50  cbz x10,0x71035babb8
71035bab54  cmp x11,x20
71035bab58  b.cc 0x71035bab64
71035bab5c  udiv x8,x11,x20
71035bab60  msub x11,x8,x20,x11
71035bab64  cmp x11,x9
71035bab68  b.ne 0x71035babc4
71035bab6c  b 0x71035babe4
71035bab70  ldr x13,[sp, #0x28]
71035bab74  ldr x11,[x13]
71035bab78  str x11,[x24]
71035bab7c  str x24,[x13]
71035bab80  str x13,[x12, x9, LSL #0x3]
71035bab84  ldr x9,[x24]
71035bab88  cbz x9,0x71035babe4
71035bab8c  ldr x9,[x9, #0x8]
71035bab90  cbz x10,0x71035babd4
71035bab94  cmp x9,x20
71035bab98  b.cc 0x71035babd8
71035bab9c  udiv x8,x9,x20
71035baba0  msub x9,x8,x20,x9
71035baba4  b 0x71035babd8
71035baba8  mov x19,xzr
71035babac  lsl x20,x20,#0x20
71035babb0  tbnz w8,#0x0,0x71035ba8d8
71035babb4  b 0x71035ba8e0
71035babb8  and x11,x11,x8
71035babbc  cmp x11,x9
71035babc0  b.eq 0x71035babe4
71035babc4  ldr x8,[sp, #0x40]
71035babc8  ldr x8,[x8]
71035babcc  str x24,[x8, x11, LSL #0x3]
71035babd0  b 0x71035babe4
71035babd4  and x9,x9,x8
71035babd8  ldr x8,[sp, #0x40]
71035babdc  ldr x8,[x8]
71035babe0  str x24,[x8, x9, LSL #0x3]
71035babe4  ldr x8,[x27, #0x38]
71035babe8  add x8,x8,#0x1
71035babec  mov x19,#-0x1
71035babf0  adrp x20,0x71042f6000
71035babf4  add x20,x20,#0x60d
71035babf8  str x8,[x27, #0x38]
71035babfc  b 0x71035bb088
71035bac00  mov w8,wzr
71035bac04  ldr x9,[x27, #0x38]
71035bac08  ucvtf s0,x9
71035bac0c  ldr s1,[x27, #0x40]
71035bac10  fdiv s0,s0,s1
71035bac14  fcvtpu x0,s0
71035bac18  cbz w8,0x71035bac3c
71035bac1c  sub x8,x0,#0x1
71035bac20  clz x8,x8
71035bac24  neg x8,x8
71035bac28  mov w9,#0x1
71035bac2c  lsl x8,x9,x8
71035bac30  cmp x0,#0x2
71035bac34  csel x0,x0,x8,cc
71035bac38  b 0x71035bac40
71035bac3c  bl 0x71039c26e0
71035bac40  cmp x19,x0
71035bac44  csel x1,x0,x19,cc
71035bac48  cmp x1,x20
71035bac4c  b.cs 0x71035baa30
71035bac50  ldr x0,[sp, #0x40]
71035bac54  b 0x71035baa2c
71035bac58  ldr x8,[x21, #0x10]
71035bac5c  cbz x8,0x71035bb088
71035bac60  ldr x8,[x8]
71035bac64  ldr x9,[x21, #0x18]
71035bac68  cmp x8,x9
71035bac6c  b.ne 0x71035bb088
71035bac70  ldr x8,[x23, #0x10]
71035bac74  cbz x8,0x71035bb088
71035bac78  ldr x8,[x8]
71035bac7c  ldr x9,[x23, #0x18]
71035bac80  cmp x8,x9
71035bac84  b.ne 0x71035bb088
71035bac88  ldr x8,[x21, #0x8]
71035bac8c  ldr x9,[x23, #0x8]
71035bac90  cmp x8,x9
71035bac94  b.ne 0x71035bb088
71035bac98  ldr x8,[x21, #0x28]
71035bac9c  ldrb w9,[x8, #0x10]
71035baca0  ldr x10,[x8, #0x20]
71035baca4  add x8,x8,#0x11
71035baca8  tst w9,#0x1
71035bacac  csel x24,x8,x10,eq
71035bacb0  mov x0,x24
71035bacb4  bl 0x71039c0070
71035bacb8  add x8,x24,x0
71035bacbc  subs x9,x0,#0x5
71035bacc0  mov x13,x8
71035bacc4  b.lt 0x71035bad4c
71035bacc8  sub x10,x8,#0x4
71035baccc  cmp x10,x24
71035bacd0  b.eq 0x71035bad48
71035bacd4  ldrb w14,[x24]
71035bacd8  sub x11,x8,#0x5
71035bacdc  mov x12,x24
71035bace0  and w13,w14,#0xff
71035bace4  cmp w13,#0x53
71035bace8  mov x13,x12
71035bacec  b.eq 0x71035bad10
71035bacf0  cmp x11,x12
71035bacf4  b.eq 0x71035bad48
71035bacf8  add x13,x12,#0x1
71035bacfc  ldrb w12,[x12, #0x1]
71035bad00  cmp w12,#0x53
71035bad04  mov x12,x13
71035bad08  b.ne 0x71035bacf0
71035bad0c  mov x12,x13
71035bad10  ldrb w14,[x12, #0x1]!
71035bad14  cmp w14,#0x68
71035bad18  b.ne 0x71035bad40
71035bad1c  ldrb w15,[x13, #0x2]
71035bad20  cmp w15,#0x61
71035bad24  b.ne 0x71035bad40
71035bad28  ldrb w15,[x13, #0x3]
71035bad2c  cmp w15,#0x70
71035bad30  b.ne 0x71035bad40
71035bad34  ldrb w15,[x13, #0x4]
71035bad38  cmp w15,#0x65
71035bad3c  b.eq 0x71035bad4c
71035bad40  cmp x10,x12
71035bad44  b.ne 0x71035bace0
71035bad48  mov x13,x8
71035bad4c  sub x10,x13,x24
71035bad50  cmp x8,x13
71035bad54  csinv x10,x10,xzr,ne
71035bad58  cmn x10,#0x1
71035bad5c  cset w11,ne
71035bad60  cmp x10,x9
71035bad64  cset w9,eq
71035bad68  cmp x0,x10
71035bad6c  csel x10,x10,x0,hi
71035bad70  tst w11,w9
71035bad74  add x12,x24,x10
71035bad78  csel x8,x12,x8,ne
71035bad7c  csel x28,x10,x0,ne
71035bad80  cmp x28,#0x3
71035bad84  mov x12,x8
71035bad88  b.lt 0x71035bae08
71035bad8c  sub x9,x8,#0x2
71035bad90  cmp x9,x24
71035bad94  mov x12,x8
71035bad98  b.eq 0x71035bae08
71035bad9c  ldrb w13,[x24]
71035bada0  sub x10,x8,#0x3
71035bada4  mov x11,x24
71035bada8  mov x12,x24
71035badac  and w13,w13,#0xff
71035badb0  cmp w13,#0x5f
71035badb4  mov x14,x11
71035badb8  b.eq 0x71035bade0
71035badbc  cmp x10,x11
71035badc0  b.eq 0x71035bae04
71035badc4  add x14,x11,#0x1
71035badc8  ldrb w11,[x11, #0x1]
71035badcc  cmp w11,#0x5f
71035badd0  mov x11,x14
71035badd4  b.ne 0x71035badbc
71035badd8  mov x12,x14
71035baddc  mov x11,x14
71035bade0  ldrb w13,[x11, #0x1]!
71035bade4  cmp w13,#0x4f
71035bade8  b.ne 0x71035badf8
71035badec  ldrb w14,[x14, #0x2]
71035badf0  cmp w14,#0x5f
71035badf4  b.eq 0x71035bae08
71035badf8  cmp x9,x11
71035badfc  mov x12,x11
71035bae00  b.ne 0x71035badac
71035bae04  mov x12,x8
71035bae08  mov w9,wzr
71035bae0c  cmp x8,x12
71035bae10  b.eq 0x71035bae30
71035bae14  sub x10,x12,x24
71035bae18  cmn x10,#0x1
71035bae1c  b.eq 0x71035bae30
71035bae20  cmp x28,x10
71035bae24  csel x28,x10,x28,hi
71035bae28  add x8,x24,x28
71035bae2c  mov w9,#0x1
71035bae30  cmp x28,#0x4
71035bae34  mov x13,x8
71035bae38  b.lt 0x71035baec8
71035bae3c  sub x10,x8,#0x3
71035bae40  cmp x10,x24
71035bae44  mov x13,x8
71035bae48  b.eq 0x71035baec8
71035bae4c  ldrb w14,[x24]
71035bae50  sub x11,x8,#0x4
71035bae54  mov x12,x24
71035bae58  mov x13,x24
71035bae5c  and w14,w14,#0xff
71035bae60  cmp w14,#0x5f
71035bae64  b.ne 0x71035bae70
71035bae68  mov x15,x12
71035bae6c  b 0x71035bae94
71035bae70  cmp x11,x12
71035bae74  b.eq 0x71035baec4
71035bae78  add x15,x12,#0x1
71035bae7c  ldrb w12,[x12, #0x1]
71035bae80  cmp w12,#0x5f
71035bae84  mov x12,x15
71035bae88  b.ne 0x71035bae70
71035bae8c  mov x13,x15
71035bae90  mov x12,x15
71035bae94  ldrb w14,[x12, #0x1]!
71035bae98  cmp w14,#0x56
71035bae9c  b.ne 0x71035baeb8
71035baea0  ldrb w16,[x15, #0x2]
71035baea4  cmp w16,#0x49
71035baea8  b.ne 0x71035baeb8
71035baeac  ldrb w15,[x15, #0x3]
71035baeb0  cmp w15,#0x53
71035baeb4  b.eq 0x71035baec8
71035baeb8  cmp x10,x12
71035baebc  mov x13,x12
71035baec0  b.ne 0x71035bae5c
71035baec4  mov x13,x8
71035baec8  cmp x8,x13
71035baecc  b.eq 0x71035baeec
71035baed0  sub x10,x13,x24
71035baed4  cmn x10,#0x1
71035baed8  b.eq 0x71035baeec
71035baedc  cmp x28,x10
71035baee0  csel x28,x10,x28,hi
71035baee4  add x8,x24,x28
71035baee8  mov w9,#0x1
71035baeec  cmp x28,#0xa
71035baef0  mov x10,x8
71035baef4  b.lt 0x71035baf74
71035baef8  sub x11,x8,#0x9
71035baefc  cmp x11,x24
71035baf00  mov x10,x8
71035baf04  b.eq 0x71035baf74
71035baf08  sub x12,x8,#0xa
71035baf0c  mov x10,x24
71035baf10  ldrb w13,[x10]
71035baf14  cmp w13,#0x5f
71035baf18  b.ne 0x71035baf24
71035baf1c  mov x13,x10
71035baf20  b 0x71035baf44
71035baf24  cmp x12,x10
71035baf28  b.eq 0x71035baf70
71035baf2c  add x13,x10,#0x1
71035baf30  ldrb w10,[x10, #0x1]
71035baf34  cmp w10,#0x5f
71035baf38  mov x10,x13
71035baf3c  b.ne 0x71035baf24
71035baf40  mov x10,x13
71035baf44  mov w14,#0x1
71035baf48  cmp x14,#0xa
71035baf4c  b.eq 0x71035baf74
71035baf50  ldrb w15,[x13, x14, LSL ]
71035baf54  ldrb w16,[x25, x14, LSL ]
71035baf58  add x14,x14,#0x1
71035baf5c  cmp w15,w16
71035baf60  b.eq 0x71035baf48
71035baf64  add x10,x13,#0x1
71035baf68  cmp x11,x10
71035baf6c  b.ne 0x71035baf10
71035baf70  mov x10,x8
71035baf74  cmp x8,x10
71035baf78  b.eq 0x71035baf98
71035baf7c  sub x10,x10,x24
71035baf80  cmn x10,#0x1
71035baf84  b.eq 0x71035baf98
71035baf88  cmp x28,x10
71035baf8c  csel x28,x10,x28,hi
71035baf90  add x8,x24,x28
71035baf94  mov w9,#0x1
71035baf98  cmp x28,#0xf
71035baf9c  b.lt 0x71035bb014
71035bafa0  sub x11,x8,#0xe
71035bafa4  cmp x11,x24
71035bafa8  b.eq 0x71035bb014
71035bafac  sub x12,x8,#0xf
71035bafb0  mov x10,x24
71035bafb4  ldrb w13,[x10]
71035bafb8  cmp w13,#0x5f
71035bafbc  b.ne 0x71035bafc8
71035bafc0  mov x13,x10
71035bafc4  b 0x71035bafe8
71035bafc8  cmp x12,x10
71035bafcc  b.eq 0x71035bb014
71035bafd0  add x13,x10,#0x1
71035bafd4  ldrb w10,[x10, #0x1]
71035bafd8  cmp w10,#0x5f
71035bafdc  mov x10,x13
71035bafe0  b.ne 0x71035bafc8
71035bafe4  mov x10,x13
71035bafe8  mov w14,#0x1
71035bafec  cmp x14,#0xf
71035baff0  b.eq 0x71035bb018
71035baff4  ldrb w15,[x13, x14, LSL ]
71035baff8  ldrb w16,[x20, x14, LSL ]
71035baffc  add x14,x14,#0x1
71035bb000  cmp w15,w16
71035bb004  b.eq 0x71035bafec
71035bb008  add x10,x13,#0x1
71035bb00c  cmp x11,x10
71035bb010  b.ne 0x71035bafb4
71035bb014  mov x10,x8
71035bb018  cmp x8,x10
71035bb01c  b.eq 0x71035bb044
71035bb020  sub x8,x10,x24
71035bb024  cmn x8,#0x1
71035bb028  b.eq 0x71035bb044
71035bb02c  cmp x28,x8
71035bb030  csel x28,x8,x28,hi
71035bb034  add x8,x24,x28
71035bb038  cbnz x28,0x71035bb050
71035bb03c  mov x9,x8
71035bb040  b 0x71035ba380
71035bb044  tbz w9,#0x0,0x71035ba3ec
71035bb048  add x8,x24,x28
71035bb04c  cbz x28,0x71035bb03c
71035bb050  ldurb w9,[x8, #-0x1]
71035bb054  cmp w9,#0x5f
71035bb058  mov x10,x28
71035bb05c  mov x9,x8
71035bb060  b.eq 0x71035ba380
71035bb064  subs x9,x10,#0x1
71035bb068  b.eq 0x71035ba374
71035bb06c  add x10,x24,x10
71035bb070  ldurb w10,[x10, #-0x2]
71035bb074  cmp w10,#0x5f
71035bb078  mov x10,x9
71035bb07c  b.ne 0x71035bb064
71035bb080  add x9,x24,x9
71035bb084  b 0x71035ba380
71035bb088  add x23,x23,#0x20
71035bb08c  cmp x23,x22
71035bb090  b.ne 0x71035bac58
71035bb094  ldr x8,[sp, #0x38]
71035bb098  add x21,x21,#0x40
71035bb09c  cmp x21,x8
71035bb0a0  b.ne 0x71035ba364
71035bb0a4  ldr x8,[x27, #0x30]
71035bb0a8  cbz x8,0x71035bb494
71035bb0ac  ldr x25,[x8, #0x18]
71035bb0b0  str x8,[sp, #0x50]
71035bb0b4  ldr x8,[x25, #0x8]
71035bb0b8  ldr x8,[x8, #0x120]
71035bb0bc  ldp x26,x20,[x8, #0x110]
71035bb0c0  cmp x26,x20
71035bb0c4  b.eq 0x71035bb210
71035bb0c8  add x23,x25,#0x20
71035bb0cc  add x24,x25,#0x60
71035bb0d0  add x27,x25,#0x30
71035bb0d4  add x28,x25,#0x48
71035bb0d8  add x21,x25,#0x70
71035bb0dc  add x19,x25,#0x88
71035bb0e0  ldr w8,[x26, #0x4]
71035bb0e4  cmp w8,#0x2
71035bb0e8  b.cc 0x71035bb0fc
71035bb0ec  cmp w8,#0xf
71035bb0f0  b.eq 0x71035bb17c
71035bb0f4  cmp w8,#0x3
71035bb0f8  b.ne 0x71035bb204
71035bb0fc  ldrb w8,[x26, #0x10]
71035bb100  ldr x9,[x26, #0x18]
71035bb104  lsr x10,x8,#0x1
71035bb108  tst w8,#0x1
71035bb10c  csel x9,x10,x9,eq
71035bb110  cmp x9,#0x9
71035bb114  b.ne 0x71035bb204
71035bb118  ldr x9,[x26, #0x20]
71035bb11c  add x22,x26,#0x11
71035bb120  tst w8,#0x1
71035bb124  csel x0,x22,x9,eq
71035bb128  adrp x1,0x710438b000
71035bb12c  add x1,x1,#0x4a1
71035bb130  mov w2,#0x9
71035bb134  bl 0x71039c0250
71035bb138  cbnz w0,0x71035bb204
71035bb13c  ldp x8,x9,[x26]
71035bb140  cmp x23,x26
71035bb144  stp x8,x9,[x23]
71035bb148  b.eq 0x71035bb204
71035bb14c  ldrb w8,[x26, #0x10]
71035bb150  ldp x9,x10,[x26, #0x18]
71035bb154  lsr x11,x8,#0x1
71035bb158  tst w8,#0x1
71035bb15c  csel x1,x22,x10,eq
71035bb160  csel x2,x11,x9,eq
71035bb164  mov x0,x27
71035bb168  bl 0x71002c51f0
71035bb16c  ldp x1,x2,[x26, #0x28]
71035bb170  mov x0,x28
71035bb174  bl 0x71035bd910
71035bb178  b 0x71035bb204
71035bb17c  ldrb w8,[x26, #0x10]
71035bb180  ldr x9,[x26, #0x18]
71035bb184  lsr x10,x8,#0x1
71035bb188  tst w8,#0x1
71035bb18c  csel x9,x10,x9,eq
71035bb190  cmp x9,#0xd
71035bb194  b.ne 0x71035bb204
71035bb198  ldr x9,[x26, #0x20]
71035bb19c  add x22,x26,#0x11
71035bb1a0  tst w8,#0x1
71035bb1a4  csel x0,x22,x9,eq
71035bb1a8  adrp x1,0x7104497000
71035bb1ac  add x1,x1,#0x704
71035bb1b0  mov w2,#0xd
71035bb1b4  bl 0x71039c0250
71035bb1b8  cbnz w0,0x71035bb204
71035bb1bc  ldp x8,x9,[x26]
71035bb1c0  cmp x24,x26
71035bb1c4  stp x8,x9,[x24]
71035bb1c8  b.eq 0x71035bb1f8
71035bb1cc  ldrb w8,[x26, #0x10]
71035bb1d0  ldp x9,x10,[x26, #0x18]
71035bb1d4  lsr x11,x8,#0x1
71035bb1d8  tst w8,#0x1
71035bb1dc  csel x1,x22,x10,eq
71035bb1e0  csel x2,x11,x9,eq
71035bb1e4  mov x0,x21
71035bb1e8  bl 0x71002c51f0
71035bb1ec  ldp x1,x2,[x26, #0x28]
71035bb1f0  mov x0,x19
71035bb1f4  bl 0x71035bd910
71035bb1f8  ldr w8,[x26]
71035bb1fc  ldr x9,[sp, #0x18]
71035bb200  str w8,[x9, #0x4c]
71035bb204  add x26,x26,#0x40
71035bb208  cmp x20,x26
71035bb20c  b.ne 0x71035bb0e0
71035bb210  add x0,sp,#0x60
71035bb214  mov w1,#0x10
71035bb218  mov w2,#0xf20
71035bb21c  bl 0x710392e1f0
71035bb220  cmp w0,#0xc
71035bb224  b.ne 0x71035bb260
71035bb228  adrp x8,0x710593d000
71035bb22c  ldr x0,[x8, #0x2b0]
71035bb230  cbz x0,0x71035bb260
71035bb234  mov w8,#0xf20
71035bb238  str x8,[sp, #0xa8]
71035bb23c  ldr x8,[x0]
71035bb240  ldr x8,[x8, #0x30]
71035bb244  add x1,sp,#0xa8
71035bb248  blr x8
71035bb24c  tbz w0,#0x0,0x71035bb260
71035bb250  add x0,sp,#0x60
71035bb254  mov w1,#0x10
71035bb258  mov w2,#0xf20
71035bb25c  bl 0x710392e1f0
71035bb260  adrp x8,0x71052a8000
71035bb264  ldr x8,[x8, #0xa78]
71035bb268  cbz x8,0x71035bb27c
71035bb26c  ldr x2,[sp, #0x60]
71035bb270  mov w1,#0x10
71035bb274  mov w0,#0xf20
71035bb278  bl 0x71039c19e0
71035bb27c  ldr x19,[sp, #0x60]
71035bb280  mov x0,x19
71035bb284  bl 0x71037c3a70
71035bb288  adrp x8,0x7105242000
71035bb28c  add x8,x8,#0xf28
71035bb290  str wzr,[x19, #0x10]
71035bb294  strb wzr,[x19, #0x14]
71035bb298  str xzr,[x19, #0xf18]
71035bb29c  str x8,[x19]
71035bb2a0  cbz x19,0x71035bb2b0
71035bb2a4  ldr x8,[x19, #0x8]
71035bb2a8  ldr x9,[x8]
71035bb2ac  b 0x71035bb2b8
71035bb2b0  mov x8,xzr
71035bb2b4  mov x9,xzr
71035bb2b8  ldp x0,x10,[x25, #0xa8]
71035bb2bc  stp x19,x8,[x25, #0xa8]
71035bb2c0  ldr x8,[x25, #0xb8]
71035bb2c4  str x9,[x25, #0xb8]
71035bb2c8  cbz x10,0x71035bb2ec
71035bb2cc  cbz x0,0x71035bb2ec
71035bb2d0  ldr x9,[x10]
71035bb2d4  cmp x9,x8
71035bb2d8  b.ne 0x71035bb2ec
71035bb2dc  ldr x8,[x0]
71035bb2e0  ldr x8,[x8, #0x8]
71035bb2e4  blr x8
71035bb2e8  ldr x19,[x25, #0xa8]
71035bb2ec  orr w8,wzr,#0x60
71035bb2f0  stp xzr,x8,[sp, #0xa8]
71035bb2f4  mov w8,#0x2
71035bb2f8  str w8,[sp, #0xb8]
71035bb2fc  strb wzr,[sp, #0xfd]
71035bb300  add x1,sp,#0xa8
71035bb304  mov x0,x19
71035bb308  strb wzr,[sp, #0xbc]
71035bb30c  ldr x8,[x19]
71035bb310  ldr x9,[x8, #0x10]
71035bb314  add x8,sp,#0xa0
71035bb318  blr x9
71035bb31c  ldr x8,[x25, #0xb0]
71035bb320  cbz x8,0x71035bb35c
71035bb324  ldr x8,[x8]
71035bb328  ldr x9,[x25, #0xb8]
71035bb32c  cmp x8,x9
71035bb330  b.ne 0x71035bb35c
71035bb334  ldr x9,[x25, #0xa8]
71035bb338  cbz x9,0x71035bb35c
71035bb33c  ldr x10,[x9, #0x8]
71035bb340  add x8,x25,#0xc0
71035bb344  cbz x10,0x71035bb360
71035bb348  str x9,[x25, #0xc8]
71035bb34c  ldr x9,[x9, #0x8]
71035bb350  str x9,[x25, #0xd0]
71035bb354  ldr x9,[x9]
71035bb358  b 0x71035bb368
71035bb35c  add x8,x25,#0xc0
71035bb360  mov x9,xzr
71035bb364  stp xzr,xzr,[x25, #0xc8]
71035bb368  str x9,[x8, #0x18]
71035bb36c  ldr x9,[x25, #0x8]
71035bb370  mov x0,x9
71035bb374  ldr w10,[x25, #0x20]
71035bb378  ldr x11,[x0, #0x70]!
71035bb37c  ldr x12,[x9, #0x78]
71035bb380  sub x12,x12,x11
71035bb384  asr x13,x12,#0x3
71035bb388  cmp x13,x10
71035bb38c  b.ls 0x71035bb864
71035bb390  ldr w12,[x25, #0x60]
71035bb394  cmp x13,x12
71035bb398  b.ls 0x71035bb864
71035bb39c  ldr x0,[x8, #0x8]
71035bb3a0  add x10,x11,x10, LSL #0x3
71035bb3a4  ldr w24,[x9, #0x58]
71035bb3a8  ldp w22,w10,[x10]
71035bb3ac  str w10,[sp, #0x48]
71035bb3b0  ldr x8,[x0]
71035bb3b4  add x10,x11,x12, LSL #0x3
71035bb3b8  ldr w28,[x9, #0x88]
71035bb3bc  ldp w23,w20,[x9, #0x4c]
71035bb3c0  ldr x9,[x8, #0x18]
71035bb3c4  ldr w27,[x25, #0x2c]
71035bb3c8  ldr w25,[x25, #0x6c]
71035bb3cc  add x8,sp,#0x60
71035bb3d0  ldp w26,w21,[x10]
71035bb3d4  blr x9
71035bb3d8  ldr x19,[sp, #0x68]
71035bb3dc  bl 0x71002c48f0
71035bb3e0  bl 0x71002c48f0
71035bb3e4  ldr x8,[x19]
71035bb3e8  ldr x1,[x0, #0x58]
71035bb3ec  mov x0,x19
71035bb3f0  mov x2,xzr
71035bb3f4  mov x3,xzr
71035bb3f8  ldr x8,[x8, #0x10]
71035bb3fc  blr x8
71035bb400  cbz x0,0x71035bb488
71035bb404  cmp w28,#0x0
71035bb408  orr w10,wzr,#0xc
71035bb40c  orr w11,wzr,#0x6
71035bb410  add w8,w22,w27
71035bb414  orr w12,wzr,#0x3f800000
71035bb418  stp w12,w8,[x0, #0x3c]
71035bb41c  csel w10,w11,w10,eq
71035bb420  add w11,w26,w25
71035bb424  stp w24,w11,[x0, #0x44]
71035bb428  mov w9,#0xaaab
71035bb42c  movk w9,#0xaaaa, LSL #16
71035bb430  umull x9,w20,w9
71035bb434  stp xzr,xzr,[x0, #0x18]
71035bb438  ldr w8,[sp, #0x48]
71035bb43c  lsr x9,x9,#0x21
71035bb440  str w12,[x0]
71035bb444  stur xzr,[x0, #0xc]
71035bb448  stur xzr,[x0, #0x4]
71035bb44c  str w12,[x0, #0x14]
71035bb450  str w12,[x0, #0x28]
71035bb454  stur xzr,[x0, #0x34]
71035bb458  stur xzr,[x0, #0x2c]
71035bb45c  stp w8,w10,[x0, #0x4c]
71035bb460  stp w21,w9,[x0, #0x54]
71035bb464  str w23,[x0, #0x5c]
71035bb468  ldr x19,[sp, #0x68]
71035bb46c  bl 0x71002c48f0
71035bb470  bl 0x71002c48f0
71035bb474  ldr x8,[x19]
71035bb478  ldr x1,[x0, #0x58]
71035bb47c  mov x0,x19
71035bb480  ldr x8,[x8, #0x18]
71035bb484  blr x8
71035bb488  ldr x8,[sp, #0x50]
71035bb48c  ldr x8,[x8]
71035bb490  cbnz x8,0x71035bb0ac
71035bb494  ldp x23,x21,[sp, #0x10]
71035bb498  ldr x8,[x21, #0x38]
71035bb49c  ldr x19,[sp, #0x8]
71035bb4a0  cbz x8,0x71035bb658
71035bb4a4  ldr x8,[x19]
71035bb4a8  ldr x8,[x8, #0x18]
71035bb4ac  mov x0,x19
71035bb4b0  blr x8
71035bb4b4  tbz w0,#0x0,0x71035bb528
71035bb4b8  ldr x8,[x19, #0x480]
71035bb4bc  cbz x8,0x71035bb52c
71035bb4c0  ldr w9,[x8, #0x18]
71035bb4c4  ldr x8,[x8]
71035bb4c8  orr w10,wzr,#0x70
71035bb4cc  madd x8,x9,x10,x8
71035bb4d0  ldp x20,x19,[x8]
71035bb4d4  cbz x19,0x71035bb518
71035bb4d8  add x8,x19,#0x8
71035bb4dc  ldxr x9,[x8]
71035bb4e0  add x9,x9,#0x1
71035bb4e4  stxr w10,x9,[x8]
71035bb4e8  cbnz w10,0x71035bb4dc
71035bb4ec  ldaxr x9,[x8]
71035bb4f0  sub x10,x9,#0x1
71035bb4f4  stlxr w11,x10,[x8]
71035bb4f8  cbnz w11,0x71035bb4ec
71035bb4fc  cbnz x9,0x71035bb518
71035bb500  ldr x8,[x19]
71035bb504  ldr x8,[x8, #0x10]
71035bb508  mov x0,x19
71035bb50c  blr x8
71035bb510  mov x0,x19
71035bb514  bl 0x71039c2670
71035bb518  cbz x20,0x71035bb528
71035bb51c  ldr x8,[x20, #0x40]
71035bb520  ldr x8,[x8, #0x68]
71035bb524  b 0x71035bb52c
71035bb528  mov x8,xzr
71035bb52c  ldr w9,[x8, #0x18]
71035bb530  eor w1,w9,w9, ASR #0x1f
71035bb534  add x2,x8,#0x20
71035bb538  add x0,sp,#0xa8
71035bb53c  bl 0x7103662550
71035bb540  ldr x19,[sp, #0xb0]
71035bb544  mov w8,#0x1
71035bb548  adrp x1,0x71043cd000
71035bb54c  add x1,x1,#0xd4c
71035bb550  stp xzr,x8,[sp, #0x60]
71035bb554  add x8,sp,#0x60
71035bb558  add x0,x8,#0x28
71035bb55c  mov w2,#0x16
71035bb560  stp xzr,xzr,[sp, #0x90]
71035bb564  stp xzr,xzr,[sp, #0x80]
71035bb568  stp xzr,xzr,[sp, #0x70]
71035bb56c  bl 0x71002c51f0
71035bb570  ldrsw x8,[x21, #0x4c]
71035bb574  ldr x9,[x19, #0x360]
71035bb578  cmp x9,x8
71035bb57c  b.ls 0x71035bb870
71035bb580  ldr x9,[x19, #0x358]
71035bb584  mov w10,#0x28
71035bb588  madd x2,x8,x10,x9
71035bb58c  ldr w8,[x2], #0x8
71035bb590  eor w1,w8,w8, ASR #0x1f
71035bb594  add x0,sp,#0xa8
71035bb598  bl 0x710359c770
71035bb59c  ldr x0,[sp, #0xb0]
71035bb5a0  ldr x8,[x0]
71035bb5a4  ldr x8,[x8, #0xa0]
71035bb5a8  add x1,sp,#0x60
71035bb5ac  blr x8
71035bb5b0  str w0,[x21, #0x48]
71035bb5b4  mov w2,#0xf20
71035bb5b8  sub x0,x29,#0x80
71035bb5bc  mov w1,#0x10
71035bb5c0  bl 0x710392e1f0
71035bb5c4  cmp w0,#0xc
71035bb5c8  b.ne 0x71035bb604
71035bb5cc  adrp x8,0x710593d000
71035bb5d0  ldr x0,[x8, #0x2b0]
71035bb5d4  cbz x0,0x71035bb604
71035bb5d8  mov w8,#0xf20
71035bb5dc  str x8,[sp, #0xa8]
71035bb5e0  ldr x8,[x0]
71035bb5e4  ldr x8,[x8, #0x30]
71035bb5e8  add x1,sp,#0xa8
71035bb5ec  blr x8
71035bb5f0  tbz w0,#0x0,0x71035bb604
71035bb5f4  mov w2,#0xf20
71035bb5f8  sub x0,x29,#0x80
71035bb5fc  mov w1,#0x10
71035bb600  bl 0x710392e1f0
71035bb604  adrp x8,0x71052a8000
71035bb608  ldr x8,[x8, #0xa78]
71035bb60c  cbz x8,0x71035bb620
71035bb610  ldur x2,[x29, #-0x80]
71035bb614  mov w0,#0xf20
71035bb618  mov w1,#0x10
71035bb61c  bl 0x71039c19e0
71035bb620  ldur x19,[x29, #-0x80]
71035bb624  mov x0,x19
71035bb628  bl 0x71037c3a70
71035bb62c  mov w8,#0x1
71035bb630  str w8,[x19, #0x10]
71035bb634  adrp x8,0x7105243000
71035bb638  add x8,x8,#0x18
71035bb63c  strb wzr,[x19, #0x14]
71035bb640  str xzr,[x19, #0xf18]
71035bb644  str x8,[x19]
71035bb648  cbz x19,0x71035bb66c
71035bb64c  ldr x8,[x19, #0x8]
71035bb650  ldr x9,[x8]
71035bb654  b 0x71035bb674
71035bb658  mov w19,wzr
71035bb65c  strb wzr,[x21, #0x8]
71035bb660  ldur x21,[x29, #-0x70]
71035bb664  cbnz x21,0x71035bb79c
71035bb668  b 0x71035bb7d0
71035bb66c  mov x8,xzr
71035bb670  mov x9,xzr
71035bb674  ldp x0,x10,[x21, #0x58]
71035bb678  stp x19,x8,[x21, #0x58]
71035bb67c  ldr x8,[x21, #0x68]
71035bb680  str x9,[x21, #0x68]
71035bb684  cbz x10,0x71035bb6a8
71035bb688  cbz x0,0x71035bb6a8
71035bb68c  ldr x9,[x10]
71035bb690  cmp x9,x8
71035bb694  b.ne 0x71035bb6a8
71035bb698  ldr x8,[x0]
71035bb69c  ldr x8,[x8, #0x8]
71035bb6a0  blr x8
71035bb6a4  ldr x19,[x21, #0x58]
71035bb6a8  mov w8,#0x10
71035bb6ac  stp xzr,x8,[sp, #0xa8]
71035bb6b0  mov w8,#0x2
71035bb6b4  str w8,[sp, #0xb8]
71035bb6b8  mov x8,#0x6e69
71035bb6bc  movk x8,#0x5f6b, LSL #16
71035bb6c0  movk x8,#0x696c, LSL #32
71035bb6c4  movk x8,#0x6566, LSL #48
71035bb6c8  stur x8,[sp, #0xbc]
71035bb6cc  mov x8,#0x6974
71035bb6d0  movk x8,#0x656d, LSL #16
71035bb6d4  movk x8,#0x635f, LSL #32
71035bb6d8  movk x8,#0x7562, LSL #48
71035bb6dc  stur x8,[sp, #0xc4]
71035bb6e0  mov w8,#0x6666
71035bb6e4  movk w8,#0x7265, LSL #16
71035bb6e8  str w8,[sp, #0xcc]
71035bb6ec  mov w8,#0x14
71035bb6f0  strb w8,[sp, #0xfd]
71035bb6f4  strb wzr,[sp, #0xd0]
71035bb6f8  ldr x8,[x19]
71035bb6fc  ldr x9,[x8, #0x10]
71035bb700  add x8,sp,#0x58
71035bb704  add x1,sp,#0xa8
71035bb708  mov x0,x19
71035bb70c  blr x9
71035bb710  ldr x8,[x21, #0x60]
71035bb714  cbz x8,0x71035bb750
71035bb718  ldr x8,[x8]
71035bb71c  ldr x9,[x21, #0x68]
71035bb720  cmp x8,x9
71035bb724  b.ne 0x71035bb750
71035bb728  ldr x9,[x21, #0x58]
71035bb72c  cbz x9,0x71035bb750
71035bb730  ldr x10,[x9, #0x8]
71035bb734  add x8,x21,#0x70
71035bb738  cbz x10,0x71035bb754
71035bb73c  str x9,[x21, #0x78]
71035bb740  ldr x9,[x9, #0x8]
71035bb744  str x9,[x21, #0x80]
71035bb748  ldr x9,[x9]
71035bb74c  b 0x71035bb75c
71035bb750  add x8,x21,#0x70
71035bb754  mov x9,xzr
71035bb758  stp xzr,xzr,[x21, #0x78]
71035bb75c  str x9,[x8, #0x18]
71035bb760  mov w8,#0x1
71035bb764  strb w8,[x21, #0x8]
71035bb768  ldrb w8,[sp, #0x88]
71035bb76c  tbz w8,#0x0,0x71035bb790
71035bb770  adrp x8,0x71052a8000
71035bb774  ldr x19,[sp, #0x98]
71035bb778  ldr x8,[x8, #0xa70]
71035bb77c  cbz x8,0x71035bb788
71035bb780  mov x0,x19
71035bb784  bl 0x71039c19b0
71035bb788  mov x0,x19
71035bb78c  bl 0x710392eb40
71035bb790  mov w19,#0x1
71035bb794  ldur x21,[x29, #-0x70]
71035bb798  cbz x21,0x71035bb7d0
71035bb79c  ldur x20,[x29, #-0x68]
71035bb7a0  cmp x20,x21
71035bb7a4  b.eq 0x71035bb854
71035bb7a8  ldr x8,[x20, #-0x20]!
71035bb7ac  ldr x8,[x8]
71035bb7b0  mov x0,x20
71035bb7b4  blr x8
71035bb7b8  cmp x21,x20
71035bb7bc  b.ne 0x71035bb7a8
71035bb7c0  ldur x0,[x29, #-0x70]
71035bb7c4  stur x21,[x29, #-0x68]
71035bb7c8  cbz x0,0x71035bb7d0
71035bb7cc  bl 0x710392eb40
71035bb7d0  cbz x23,0x71035bb830
71035bb7d4  add x20,x23,#0x8
71035bb7d8  ldaxr x8,[x20]
71035bb7dc  sub x9,x8,#0x1
71035bb7e0  stlxr w10,x9,[x20]
71035bb7e4  cbnz w10,0x71035bb7d8
71035bb7e8  cbnz x8,0x71035bb804
71035bb7ec  ldr x8,[x23]
71035bb7f0  ldr x8,[x8, #0x10]
71035bb7f4  mov x0,x23
71035bb7f8  blr x8
71035bb7fc  mov x0,x23
71035bb800  bl 0x71039c2670
71035bb804  ldaxr x8,[x20]
71035bb808  sub x9,x8,#0x1
71035bb80c  stlxr w10,x9,[x20]
71035bb810  cbnz w10,0x71035bb804
71035bb814  cbnz x8,0x71035bb830
71035bb818  ldr x8,[x23]
71035bb81c  ldr x8,[x8, #0x10]
71035bb820  mov x0,x23
71035bb824  blr x8
71035bb828  mov x0,x23
71035bb82c  bl 0x71039c2670
71035bb830  mov w0,w19
71035bb834  ldp x29,x30,[sp, #0x180]
71035bb838  ldp x20,x19,[sp, #0x170]
71035bb83c  ldp x22,x21,[sp, #0x160]
71035bb840  ldp x24,x23,[sp, #0x150]
71035bb844  ldp x26,x25,[sp, #0x140]
71035bb848  ldp x28,x27,[sp, #0x130]
71035bb84c  add sp,sp,#0x190
71035bb850  ret
71035bb854  mov x0,x21
71035bb858  stur x21,[x29, #-0x68]
71035bb85c  cbnz x0,0x71035bb7cc
71035bb860  b 0x71035bb7d0
71035bb864  bl 0x71039c1330
71035bb868  add x0,sp,#0xa8
71035bb86c  bl 0x71039c1a00
71035bb870  bl 0x71039c2650
71035bb874  bl 0x71039c19f0
