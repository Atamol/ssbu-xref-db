// addr:      7102ee9c80
// offset:    0x2ee9c80
// name:      FUN_7102ee9c80
// mangled:   
// size:      2248

7102ee9c80  sub sp,sp,#0xb0
7102ee9c84  stp x28,x27,[sp, #0x50]
7102ee9c88  stp x26,x25,[sp, #0x60]
7102ee9c8c  stp x24,x23,[sp, #0x70]
7102ee9c90  stp x22,x21,[sp, #0x80]
7102ee9c94  stp x20,x19,[sp, #0x90]
7102ee9c98  stp x29,x30,[sp, #0xa0]
7102ee9c9c  add x29,sp,#0xa0
7102ee9ca0  mov x23,x0
7102ee9ca4  bl 0x71025d9250
7102ee9ca8  adrp x20,0x710532a000
7102ee9cac  ldr x8,[x20, #0x9d8]
7102ee9cb0  ldr x8,[x8]
7102ee9cb4  ldr x22,[x8, #0x1d0]
7102ee9cb8  mov x21,x22
7102ee9cbc  ldr x8,[x21, #0x58]!
7102ee9cc0  cbz x8,0x7102ee9d04
7102ee9cc4  add x9,x22,#0x58
7102ee9cc8  b 0x7102ee9cd4
7102ee9ccc  mov x9,x8
7102ee9cd0  mov x8,x10
7102ee9cd4  ldr x10,[x8, #0x20]
7102ee9cd8  cmp x10,x23
7102ee9cdc  b.ls 0x7102ee9cf0
7102ee9ce0  ldr x10,[x8]
7102ee9ce4  mov x9,x8
7102ee9ce8  cbnz x10,0x7102ee9ccc
7102ee9cec  b 0x7102ee9d08
7102ee9cf0  b.cs 0x7102ee9d08
7102ee9cf4  ldr x10,[x8, #0x8]!
7102ee9cf8  mov x9,x8
7102ee9cfc  cbnz x10,0x7102ee9ccc
7102ee9d00  b 0x7102ee9d08
7102ee9d04  mov x9,x21
7102ee9d08  ldr x8,[x9]
7102ee9d0c  orr w9,wzr,#0x3
7102ee9d10  ldr x8,[x8, #0x28]
7102ee9d14  str w9,[x8, #0x660]
7102ee9d18  ldr x8,[x22, #0x20]
7102ee9d1c  cmp x8,x23
7102ee9d20  b.ne 0x7102ee9d9c
7102ee9d24  ldr w8,[x22, #0x38]
7102ee9d28  cmp w8,#0x2
7102ee9d2c  b.gt 0x7102ee9d9c
7102ee9d30  ldr x8,[x21]
7102ee9d34  cbz x8,0x7102ee9d78
7102ee9d38  add x9,x22,#0x58
7102ee9d3c  b 0x7102ee9d48
7102ee9d40  mov x9,x8
7102ee9d44  mov x8,x10
7102ee9d48  ldr x10,[x8, #0x20]
7102ee9d4c  cmp x10,x23
7102ee9d50  b.ls 0x7102ee9d64
7102ee9d54  ldr x10,[x8]
7102ee9d58  mov x9,x8
7102ee9d5c  cbnz x10,0x7102ee9d40
7102ee9d60  b 0x7102ee9d7c
7102ee9d64  b.cs 0x7102ee9d7c
7102ee9d68  ldr x10,[x8, #0x8]!
7102ee9d6c  mov x9,x8
7102ee9d70  cbnz x10,0x7102ee9d40
7102ee9d74  b 0x7102ee9d7c
7102ee9d78  mov x9,x21
7102ee9d7c  ldr x8,[x9]
7102ee9d80  ldr x8,[x8, #0x28]
7102ee9d84  ldr x0,[x8, #0x690]
7102ee9d88  cbz x0,0x7102eea544
7102ee9d8c  add x1,x8,#0x660
7102ee9d90  ldr x8,[x0]
7102ee9d94  ldr x8,[x8, #0x30]
7102ee9d98  blr x8
7102ee9d9c  ldr x8,[x21]
7102ee9da0  cbz x8,0x7102ee9de4
7102ee9da4  add x9,x22,#0x58
7102ee9da8  b 0x7102ee9db4
7102ee9dac  mov x9,x8
7102ee9db0  mov x8,x10
7102ee9db4  ldr x10,[x8, #0x20]
7102ee9db8  cmp x10,x23
7102ee9dbc  b.ls 0x7102ee9dd0
7102ee9dc0  ldr x10,[x8]
7102ee9dc4  mov x9,x8
7102ee9dc8  cbnz x10,0x7102ee9dac
7102ee9dcc  b 0x7102ee9de8
7102ee9dd0  b.cs 0x7102ee9de8
7102ee9dd4  ldr x10,[x8, #0x8]!
7102ee9dd8  mov x9,x8
7102ee9ddc  cbnz x10,0x7102ee9dac
7102ee9de0  b 0x7102ee9de8
7102ee9de4  mov x9,x21
7102ee9de8  ldr x8,[x9]
7102ee9dec  ldr x8,[x8, #0x28]
7102ee9df0  str wzr,[x8, #0x6a0]
7102ee9df4  ldr x8,[x22, #0x20]
7102ee9df8  cmp x8,x23
7102ee9dfc  b.ne 0x7102ee9e78
7102ee9e00  ldr w8,[x22, #0x38]
7102ee9e04  cmp w8,#0x2
7102ee9e08  b.gt 0x7102ee9e78
7102ee9e0c  ldr x8,[x21]
7102ee9e10  cbz x8,0x7102ee9e54
7102ee9e14  add x9,x22,#0x58
7102ee9e18  b 0x7102ee9e24
7102ee9e1c  mov x9,x8
7102ee9e20  mov x8,x10
7102ee9e24  ldr x10,[x8, #0x20]
7102ee9e28  cmp x10,x23
7102ee9e2c  b.ls 0x7102ee9e40
7102ee9e30  ldr x10,[x8]
7102ee9e34  mov x9,x8
7102ee9e38  cbnz x10,0x7102ee9e1c
7102ee9e3c  b 0x7102ee9e58
7102ee9e40  b.cs 0x7102ee9e58
7102ee9e44  ldr x10,[x8, #0x8]!
7102ee9e48  mov x9,x8
7102ee9e4c  cbnz x10,0x7102ee9e1c
7102ee9e50  b 0x7102ee9e58
7102ee9e54  mov x9,x21
7102ee9e58  ldr x8,[x9]
7102ee9e5c  ldr x8,[x8, #0x28]
7102ee9e60  ldr x0,[x8, #0x6d0]
7102ee9e64  cbz x0,0x7102eea544
7102ee9e68  add x1,x8,#0x6a0
7102ee9e6c  ldr x8,[x0]
7102ee9e70  ldr x8,[x8, #0x30]
7102ee9e74  blr x8
7102ee9e78  ldr x8,[x21]
7102ee9e7c  cbz x8,0x7102ee9ec0
7102ee9e80  add x9,x22,#0x58
7102ee9e84  b 0x7102ee9e90
7102ee9e88  mov x9,x8
7102ee9e8c  mov x8,x10
7102ee9e90  ldr x10,[x8, #0x20]
7102ee9e94  cmp x10,x23
7102ee9e98  b.ls 0x7102ee9eac
7102ee9e9c  ldr x10,[x8]
7102ee9ea0  mov x9,x8
7102ee9ea4  cbnz x10,0x7102ee9e88
7102ee9ea8  b 0x7102ee9ec4
7102ee9eac  b.cs 0x7102ee9ec4
7102ee9eb0  ldr x10,[x8, #0x8]!
7102ee9eb4  mov x9,x8
7102ee9eb8  cbnz x10,0x7102ee9e88
7102ee9ebc  b 0x7102ee9ec4
7102ee9ec0  mov x9,x21
7102ee9ec4  ldr x8,[x9]
7102ee9ec8  ldr x8,[x8, #0x28]
7102ee9ecc  str xzr,[x8, #0x6e8]
7102ee9ed0  str xzr,[x8, #0x6e0]
7102ee9ed4  ldr x8,[x22, #0x20]
7102ee9ed8  cmp x8,x23
7102ee9edc  b.ne 0x7102ee9f50
7102ee9ee0  ldr w8,[x22, #0x38]
7102ee9ee4  cmp w8,#0x2
7102ee9ee8  b.gt 0x7102ee9f50
7102ee9eec  ldr x8,[x21]
7102ee9ef0  cbz x8,0x7102ee9f30
7102ee9ef4  add x21,x22,#0x58
7102ee9ef8  b 0x7102ee9f04
7102ee9efc  mov x21,x8
7102ee9f00  mov x8,x9
7102ee9f04  ldr x9,[x8, #0x20]
7102ee9f08  cmp x9,x23
7102ee9f0c  b.ls 0x7102ee9f20
7102ee9f10  ldr x9,[x8]
7102ee9f14  mov x21,x8
7102ee9f18  cbnz x9,0x7102ee9efc
7102ee9f1c  b 0x7102ee9f30
7102ee9f20  b.cs 0x7102ee9f30
7102ee9f24  ldr x9,[x8, #0x8]!
7102ee9f28  mov x21,x8
7102ee9f2c  cbnz x9,0x7102ee9efc
7102ee9f30  ldr x8,[x21]
7102ee9f34  ldr x8,[x8, #0x28]
7102ee9f38  ldr x0,[x8, #0x710]
7102ee9f3c  cbz x0,0x7102eea544
7102ee9f40  add x1,x8,#0x6e0
7102ee9f44  ldr x8,[x0]
7102ee9f48  ldr x8,[x8, #0x30]
7102ee9f4c  blr x8
7102ee9f50  ldr x8,[x23, #0x300]
7102ee9f54  ldr x9,[x8, #0x18]
7102ee9f58  ldp x8,x9,[x9]
7102ee9f5c  cmp x8,x9
7102ee9f60  b.eq 0x7102ee9f9c
7102ee9f64  mov x10,#0xdf99
7102ee9f68  movk x10,#0xb569, LSL #16
7102ee9f6c  movk x10,#0x7, LSL #32
7102ee9f70  ldr x11,[x8], #0x8
7102ee9f74  ldr x12,[x11, #0xa0]
7102ee9f78  and x12,x12,#0xffffffffff
7102ee9f7c  cmp x12,x10
7102ee9f80  b.eq 0x7102ee9f90
7102ee9f84  cmp x9,x8
7102ee9f88  b.ne 0x7102ee9f70
7102ee9f8c  b 0x7102ee9f9c
7102ee9f90  ldr x8,[x11, #0x130]
7102ee9f94  cbz x8,0x7102ee9f9c
7102ee9f98  str x8,[x23, #0x908]
7102ee9f9c  ldr x8,[x23, #0x908]
7102ee9fa0  ldp x0,x1,[x8]
7102ee9fa4  adrp x2,0x71043bc000
7102ee9fa8  add x2,x2,#0xb6c
7102ee9fac  bl 0x71025f55b0
7102ee9fb0  ldrb w8,[x23, #0xd8]
7102ee9fb4  str wzr,[x23, #0x8b8]
7102ee9fb8  tbz w8,#0x4,0x7102eea014
7102ee9fbc  mov w8,#0x1
7102ee9fc0  str w8,[x23, #0x8b8]
7102ee9fc4  adrp x8,0x7105314000
7102ee9fc8  add x8,x8,#0x4d8
7102ee9fcc  ldarb w8,[x8]
7102ee9fd0  tbz w8,#0x0,0x7102eea4fc
7102ee9fd4  adrp x8,0x71052c5000
7102ee9fd8  ldrb w8,[x8, #0x1ba]
7102ee9fdc  cbz w8,0x7102eea014
7102ee9fe0  mov w8,#0x2
7102ee9fe4  str w8,[x23, #0x8b8]
7102ee9fe8  ldr x8,[x23, #0x908]
7102ee9fec  ldp x0,x1,[x8]
7102ee9ff0  adrp x2,0x71043bc000
7102ee9ff4  add x2,x2,#0xb6c
7102ee9ff8  bl 0x71025f5420
7102ee9ffc  ldr x8,[x20, #0x9d8]
7102eea000  ldr x8,[x8]
7102eea004  ldr x8,[x8, #0x1f0]
7102eea008  ldr x9,[x8, #0x20]
7102eea00c  cmp x9,x23
7102eea010  b.eq 0x7102eea47c
7102eea014  ldr x0,[x23, #0x318]
7102eea018  adrp x1,0x7104410000
7102eea01c  add x1,x1,#0xcd4
7102eea020  strb wzr,[x23, #0x8c5]
7102eea024  bl 0x7102633910
7102eea028  ldr x0,[x23, #0x318]
7102eea02c  adrp x1,0x7104359000
7102eea030  add x1,x1,#0x732
7102eea034  mov w2,#0x1
7102eea038  bl 0x7102633b90
7102eea03c  ldr x0,[x23, #0x318]
7102eea040  adrp x1,0x7104338000
7102eea044  add x1,x1,#0x63f
7102eea048  mov w2,#0x1
7102eea04c  bl 0x7102633a10
7102eea050  ldr x0,[x23, #0x318]
7102eea054  adrp x1,0x71043ee000
7102eea058  add x1,x1,#0xdde
7102eea05c  bl 0x7102633800
7102eea060  ldr x8,[x23, #0x318]
7102eea064  ldr x0,[x8, #0x10]
7102eea068  adrp x1,0x710427e000
7102eea06c  add x1,x1,#0xe95
7102eea070  bl 0x71025f7350
7102eea074  ldr x9,[x23, #0x320]
7102eea078  mov w8,#0x100
7102eea07c  strh w8,[x23, #0x8c6]
7102eea080  str wzr,[x23, #0x8c8]
7102eea084  ldr x8,[x9, #0x48]
7102eea088  ldr x8,[x8, #0x320]
7102eea08c  ldr x8,[x8, #0x40]
7102eea090  ldp x10,x12,[x8]
7102eea094  mov x8,#0x6db7
7102eea098  movk x8,#0xb6db, LSL #16
7102eea09c  movk x8,#0xdb6d, LSL #32
7102eea0a0  movk x8,#0x6db6, LSL #48
7102eea0a4  subs x11,x12,x10
7102eea0a8  b.eq 0x7102eea110
7102eea0ac  asr x11,x11,#0x4
7102eea0b0  mul x11,x11,x8
7102eea0b4  cmp x10,x12
7102eea0b8  b.eq 0x7102eea0f8
7102eea0bc  mov x14,#0x7eb1
7102eea0c0  movk x14,#0x30eb, LSL #16
7102eea0c4  movk x14,#0x17, LSL #32
7102eea0c8  mov x13,x10
7102eea0cc  ldr w15,[x13]
7102eea0d0  cbnz w15,0x7102eea0e4
7102eea0d4  ldr x15,[x13, #0x8]
7102eea0d8  and x15,x15,#0xffffffffff
7102eea0dc  cmp x15,x14
7102eea0e0  b.eq 0x7102eea0fc
7102eea0e4  add x13,x13,#0x70
7102eea0e8  cmp x12,x13
7102eea0ec  b.ne 0x7102eea0cc
7102eea0f0  mov x13,x12
7102eea0f4  b 0x7102eea0fc
7102eea0f8  mov x13,x10
7102eea0fc  sub x10,x13,x10
7102eea100  asr x10,x10,#0x4
7102eea104  mul x10,x10,x8
7102eea108  cmp x10,x11
7102eea10c  b.cc 0x7102eea114
7102eea110  mov w10,#0xffffffff
7102eea114  str w10,[x23, #0x8cc]
7102eea118  ldr x9,[x9, #0x48]
7102eea11c  ldr x9,[x9, #0x320]
7102eea120  ldr x10,[x9, #0x40]
7102eea124  ldp x9,x11,[x10]
7102eea128  subs x10,x11,x9
7102eea12c  b.eq 0x7102eea194
7102eea130  asr x10,x10,#0x4
7102eea134  mul x10,x10,x8
7102eea138  cmp x9,x11
7102eea13c  b.eq 0x7102eea17c
7102eea140  mov x13,#0x1067
7102eea144  movk x13,#0xf6bf, LSL #16
7102eea148  movk x13,#0x16, LSL #32
7102eea14c  mov x12,x9
7102eea150  ldr w14,[x12]
7102eea154  cbnz w14,0x7102eea168
7102eea158  ldr x14,[x12, #0x8]
7102eea15c  and x14,x14,#0xffffffffff
7102eea160  cmp x14,x13
7102eea164  b.eq 0x7102eea180
7102eea168  add x12,x12,#0x70
7102eea16c  cmp x11,x12
7102eea170  b.ne 0x7102eea150
7102eea174  mov x12,x11
7102eea178  b 0x7102eea180
7102eea17c  mov x12,x9
7102eea180  sub x9,x12,x9
7102eea184  asr x9,x9,#0x4
7102eea188  mul x8,x9,x8
7102eea18c  cmp x8,x10
7102eea190  b.cc 0x7102eea198
7102eea194  mov w8,#0xffffffff
7102eea198  mov w0,#0x10
7102eea19c  mov w1,#0x80
7102eea1a0  str w8,[x23, #0x8d0]
7102eea1a4  bl 0x710392e290
7102eea1a8  mov x20,x0
7102eea1ac  cbnz x0,0x7102eea1f8
7102eea1b0  adrp x8,0x7105332000
7102eea1b4  ldr x0,[x8, #0xf00]
7102eea1b8  cbz x0,0x7102eea1f4
7102eea1bc  mov w8,#0x80
7102eea1c0  str wzr,[sp, #0x4c]
7102eea1c4  add x1,sp,#0x4c
7102eea1c8  str x8,[sp, #0x30]
7102eea1cc  ldr x8,[x0]
7102eea1d0  ldr x8,[x8, #0x30]
7102eea1d4  add x2,sp,#0x30
7102eea1d8  blr x8
7102eea1dc  tbz w0,#0x0,0x7102eea1f4
7102eea1e0  mov w0,#0x10
7102eea1e4  mov w1,#0x80
7102eea1e8  bl 0x710392e290
7102eea1ec  mov x20,x0
7102eea1f0  cbnz x0,0x7102eea1f8
7102eea1f4  mov x20,xzr
7102eea1f8  adrp x8,0x71052a8000
7102eea1fc  ldr x8,[x8, #0xb00]
7102eea200  str x23,[x20]
7102eea204  ldr q0,[x8]
7102eea208  mov x9,x20
7102eea20c  add x8,x23,#0x830
7102eea210  str xzr,[x9, #0x58]!
7102eea214  strh wzr,[x9, #0x20]
7102eea218  stur q0,[x9, #-0x28]
7102eea21c  stur q0,[x9, #-0x38]
7102eea220  str xzr,[x9, #0x8]
7102eea224  stur q0,[x9, #-0x18]
7102eea228  fmov v0.4S,#0x3f800000
7102eea22c  stp xzr,xzr,[x9, #0x10]
7102eea230  stur xzr,[x9, #-0x8]
7102eea234  str x9,[sp, #0x28]
7102eea238  str x23,[sp, #0x8]
7102eea23c  str q0,[sp, #0x10]
7102eea240  ld1 {v0.S}[0],[x8]
7102eea244  add x8,x23,#0x834
7102eea248  ld1 {v0.S}[1],[x8]
7102eea24c  add x8,x23,#0x838
7102eea250  ld1 {v0.S}[2],[x8]
7102eea254  stur q0,[x9, #-0x48]
7102eea258  ldr w8,[x23, #0x83c]
7102eea25c  stur w8,[x9, #-0x8]
7102eea260  ldr w8,[x23, #0x840]
7102eea264  stur w8,[x9, #-0x4]
7102eea268  ldr x26,[x23, #0x848]
7102eea26c  ldr x27,[x23, #0x850]
7102eea270  cmp x26,x27
7102eea274  b.eq 0x7102eea418
7102eea278  ldr x8,[x26]
7102eea27c  ands x8,x8,#0xffffffffff
7102eea280  b.eq 0x7102eea40c
7102eea284  ldr x9,[x20]
7102eea288  ldr x10,[x9, #0x310]
7102eea28c  ldp x9,x10,[x10, #0xd0]
7102eea290  cmp x9,x10
7102eea294  b.eq 0x7102eea2c0
7102eea298  ldr w11,[x9, #0x8]
7102eea29c  cmp w11,#0x1
7102eea2a0  b.hi 0x7102eea2b4
7102eea2a4  ldr x28,[x9]
7102eea2a8  ldr x11,[x28, #0x68]
7102eea2ac  cmp x8,x11
7102eea2b0  b.eq 0x7102eea33c
7102eea2b4  add x9,x9,#0x10
7102eea2b8  cmp x10,x9
7102eea2bc  b.ne 0x7102eea298
7102eea2c0  mov x28,xzr
7102eea2c4  ldp x9,x8,[x20, #0x60]
7102eea2c8  cmp x9,x8
7102eea2cc  b.eq 0x7102eea2f0
7102eea2d0  str x28,[x9]
7102eea2d4  ldr x8,[x20, #0x60]
7102eea2d8  add x8,x8,#0x8
7102eea2dc  str x8,[x20, #0x60]
7102eea2e0  add x26,x26,#0x8
7102eea2e4  cmp x26,x27
7102eea2e8  b.ne 0x7102eea278
7102eea2ec  b 0x7102eea418
7102eea2f0  ldr x10,[sp, #0x28]
7102eea2f4  ldr x22,[x10]
7102eea2f8  sub x23,x9,x22
7102eea2fc  asr x21,x23,#0x3
7102eea300  add x9,x21,#0x1
7102eea304  lsr x10,x9,#0x3d
7102eea308  cbnz x10,0x7102eea53c
7102eea30c  sub x8,x8,x22
7102eea310  asr x10,x8,#0x3
7102eea314  orr x11,xzr,#0xffffffffffffffe
7102eea318  cmp x10,x11
7102eea31c  b.hi 0x7102eea36c
7102eea320  asr x8,x8,#0x2
7102eea324  cmp x8,x9
7102eea328  csel x19,x9,x8,cc
7102eea32c  cbz x19,0x7102eea3d0
7102eea330  lsr x8,x19,#0x3d
7102eea334  cbz x8,0x7102eea370
7102eea338  b 0x7102eea544
7102eea33c  cbz x28,0x7102eea2c4
7102eea340  ldrb w8,[x28, #0xe0]
7102eea344  cbz w8,0x7102eea2c4
7102eea348  ldr q0,[sp, #0x10]
7102eea34c  mov w1,#0x8
7102eea350  add x2,sp,#0x30
7102eea354  str q0,[sp, #0x30]
7102eea358  ldr x0,[x28, #0x90]
7102eea35c  ldr x8,[x0]
7102eea360  ldr x8,[x8, #0x260]
7102eea364  blr x8
7102eea368  b 0x7102eea2c4
7102eea36c  orr x19,xzr,#0x1fffffffffffffff
7102eea370  lsl x8,x19,#0x3
7102eea374  cmp x8,#0x0
7102eea378  csinc x25,x8,xzr,ne
7102eea37c  mov w0,#0x10
7102eea380  mov x1,x25
7102eea384  bl 0x710392e290
7102eea388  mov x24,x0
7102eea38c  cbnz x0,0x7102eea3d4
7102eea390  adrp x8,0x7105332000
7102eea394  ldr x0,[x8, #0xf00]
7102eea398  cbz x0,0x7102eea3d0
7102eea39c  str wzr,[sp, #0x4c]
7102eea3a0  str x25,[sp, #0x30]
7102eea3a4  ldr x8,[x0]
7102eea3a8  ldr x8,[x8, #0x30]
7102eea3ac  add x1,sp,#0x4c
7102eea3b0  add x2,sp,#0x30
7102eea3b4  blr x8
7102eea3b8  tbz w0,#0x0,0x7102eea3d0
7102eea3bc  mov w0,#0x10
7102eea3c0  mov x1,x25
7102eea3c4  bl 0x710392e290
7102eea3c8  mov x24,x0
7102eea3cc  cbnz x0,0x7102eea3d4
7102eea3d0  mov x24,xzr
7102eea3d4  add x21,x24,x21, LSL #0x3
7102eea3d8  add x19,x24,x19, LSL #0x3
7102eea3dc  cmp x23,#0x1
7102eea3e0  str x28,[x21], #0x8
7102eea3e4  b.lt 0x7102eea3f8
7102eea3e8  mov x0,x24
7102eea3ec  mov x1,x22
7102eea3f0  mov x2,x23
7102eea3f4  bl 0x71039c00e0
7102eea3f8  stp x24,x21,[x20, #0x58]
7102eea3fc  str x19,[x20, #0x68]
7102eea400  cbz x22,0x7102eea40c
7102eea404  mov x0,x22
7102eea408  bl 0x710392eb40
7102eea40c  add x26,x26,#0x8
7102eea410  cmp x26,x27
7102eea414  b.ne 0x7102eea278
7102eea418  ldr x8,[sp, #0x8]
7102eea41c  ldr x21,[x8, #0x920]
7102eea420  str x20,[x8, #0x920]
7102eea424  cbz x21,0x7102eea45c
7102eea428  ldr x0,[x21, #0x58]
7102eea42c  cbz x0,0x7102eea438
7102eea430  str x0,[x21, #0x60]
7102eea434  bl 0x710392eb40
7102eea438  mov x0,x21
7102eea43c  ldp x29,x30,[sp, #0xa0]
7102eea440  ldp x20,x19,[sp, #0x90]
7102eea444  ldp x22,x21,[sp, #0x80]
7102eea448  ldp x24,x23,[sp, #0x70]
7102eea44c  ldp x26,x25,[sp, #0x60]
7102eea450  ldp x28,x27,[sp, #0x50]
7102eea454  add sp,sp,#0xb0
7102eea458  b 0x710392eb40
7102eea45c  ldp x29,x30,[sp, #0xa0]
7102eea460  ldp x20,x19,[sp, #0x90]
7102eea464  ldp x22,x21,[sp, #0x80]
7102eea468  ldp x24,x23,[sp, #0x70]
7102eea46c  ldp x26,x25,[sp, #0x60]
7102eea470  ldp x28,x27,[sp, #0x50]
7102eea474  add sp,sp,#0xb0
7102eea478  ret
7102eea47c  ldrb w8,[x8, #0xa8]
7102eea480  cbz w8,0x7102eea014
7102eea484  adrp x8,0x71052c3000
7102eea488  ldr x8,[x8, #0x420]
7102eea48c  cbz x8,0x7102eea014
7102eea490  ldr x8,[x8, #0x8]
7102eea494  ldr x19,[x8]
7102eea498  ldr x8,[x19, #0xbf8]
7102eea49c  cbz x8,0x7102eea014
7102eea4a0  add x0,x19,#0xbf0
7102eea4a4  ldr x8,[x0]
7102eea4a8  ldr x8,[x8, #0x10]
7102eea4ac  blr x8
7102eea4b0  tbz w0,#0x0,0x7102eea014
7102eea4b4  adrp x8,0x710532f000
7102eea4b8  ldr x8,[x8, #0x8b0]
7102eea4bc  cbz x8,0x7102eea4d8
7102eea4c0  ldr x8,[x8, #0x8]
7102eea4c4  ldr w9,[x8, #0x138]
7102eea4c8  cbz w9,0x7102eea4d8
7102eea4cc  ldrb w8,[x8, #0x2b8]
7102eea4d0  cmp w8,#0xb
7102eea4d4  b.eq 0x7102eea014
7102eea4d8  ldr x8,[x19, #0xbf8]
7102eea4dc  ldr x8,[x8]
7102eea4e0  ldr x8,[x8, #0x738]
7102eea4e4  ldrb w9,[x8, #0x8]
7102eea4e8  cbz w9,0x7102eea014
7102eea4ec  ldr x8,[x8, #0x38]
7102eea4f0  orr w9,wzr,#0x3
7102eea4f4  str w9,[x8, #0xf8]
7102eea4f8  b 0x7102eea014
7102eea4fc  adrp x0,0x7105314000
7102eea500  add x0,x0,#0x4d8
7102eea504  bl 0x71039c06b0
7102eea508  cbz w0,0x7102ee9fd4
7102eea50c  bl 0x7101764000
7102eea510  adrp x0,0x7101763000
7102eea514  add x0,x0,#0xc40
7102eea518  adrp x1,0x71052c5000
7102eea51c  add x1,x1,#0x180
7102eea520  adrp x2,0x7104f17000
7102eea524  add x2,x2,#0x0
7102eea528  bl 0x71000001c0
7102eea52c  adrp x0,0x7105314000
7102eea530  add x0,x0,#0x4d8
7102eea534  bl 0x71039c06c0
7102eea538  b 0x7102ee9fd4
7102eea53c  ldr x0,[sp, #0x28]
7102eea540  bl 0x71039c0c00
7102eea544  bl 0x71039c2650
