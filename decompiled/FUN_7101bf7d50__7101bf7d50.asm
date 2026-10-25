// addr:      7101bf7d50
// offset:    0x1bf7d50
// name:      FUN_7101bf7d50
// mangled:   
// size:      9600

7101bf7d50  stp x28,x27,[sp, #-0x60]!
7101bf7d54  stp x26,x25,[sp, #0x10]
7101bf7d58  stp x24,x23,[sp, #0x20]
7101bf7d5c  stp x22,x21,[sp, #0x30]
7101bf7d60  stp x20,x19,[sp, #0x40]
7101bf7d64  stp x29,x30,[sp, #0x50]
7101bf7d68  add x29,sp,#0x50
7101bf7d6c  sub sp,sp,#0x1, LSL #12
7101bf7d70  sub sp,sp,#0x1d0
7101bf7d74  str x1,[sp, #0x30]
7101bf7d78  ldr x1,[x1]
7101bf7d7c  add x21,x0,#0x128
7101bf7d80  mov x28,x0
7101bf7d84  adrp x2,0x7104545000
7101bf7d88  add x2,x2,#0x30
7101bf7d8c  mov w3,#0x2
7101bf7d90  mov x0,x21
7101bf7d94  bl 0x71032cbf30
7101bf7d98  adrp x8,0x7105314000
7101bf7d9c  add x8,x8,#0x4d8
7101bf7da0  ldarb w8,[x8]
7101bf7da4  tbz w8,#0x0,0x7101bfa254
7101bf7da8  adrp x8,0x7105307000
7101bf7dac  ldrsw x20,[x8, #0xb68]
7101bf7db0  cmn w20,#0x1
7101bf7db4  b.eq 0x7101bf7e20
7101bf7db8  cmp w20,#0x9
7101bf7dbc  adrp x8,0x7105339000
7101bf7dc0  add x8,x8,#0x830
7101bf7dc4  b.hi 0x7101bf7de8
7101bf7dc8  adrp x9,0x7105339000
7101bf7dcc  ldr x9,[x9, #0x8b0]
7101bf7dd0  ldrb w9,[x9, #0x8]
7101bf7dd4  cbz w9,0x7101bf7de8
7101bf7dd8  adrp x8,0x7105339000
7101bf7ddc  add x8,x8,#0x860
7101bf7de0  ldr x8,[x8, x20, LSL #0x3]
7101bf7de4  cbz x8,0x7101bf7e20
7101bf7de8  ldr x8,[x8, #0x10]
7101bf7dec  ldr w8,[x8, #0x9c]
7101bf7df0  sub w8,w8,#0x1
7101bf7df4  cmp w8,#0x7
7101bf7df8  b.cs 0x7101bf7e20
7101bf7dfc  adrp x9,0x7104753000
7101bf7e00  add x9,x9,#0xde0
7101bf7e04  ldr w8,[x9, w8, SXTW #0x2]
7101bf7e08  str w8,[x28, #0x130]
7101bf7e0c  adrp x9,0x710593b000
7101bf7e10  ldr x9,[x9, #0xa90]
7101bf7e14  ldr x9,[x9]
7101bf7e18  str w8,[x9, #0x3ac]
7101bf7e1c  b 0x7101bf7e24
7101bf7e20  str wzr,[x28, #0x130]
7101bf7e24  ldr x19,[x21]
7101bf7e28  ldr x8,[x19]
7101bf7e2c  ldr x0,[x8]
7101bf7e30  mov w1,#0x1
7101bf7e34  bl 0x71037760f0
7101bf7e38  ldr x8,[x19]
7101bf7e3c  ldr x8,[x8]
7101bf7e40  ldr x9,[x8, #0x610]
7101bf7e44  ldr x19,[x8, #0x608]
7101bf7e48  cmp x9,x19
7101bf7e4c  b.eq 0x7101bfa2c8
7101bf7e50  ldr x9,[x8, #0x600]
7101bf7e54  str wzr,[x9, #0x10]
7101bf7e58  ldr x9,[x8, #0x600]
7101bf7e5c  mov w10,#0x100
7101bf7e60  str w10,[x9, #0x18]
7101bf7e64  ldr x8,[x8, #0x600]
7101bf7e68  mov w9,#0x200
7101bf7e6c  str w9,[x8, #0x1c]
7101bf7e70  ldr x0,[x19, #0x8]
7101bf7e74  mov w2,#0x198
7101bf7e78  mov w1,wzr
7101bf7e7c  bl 0x71039c02a0
7101bf7e80  ldr x8,[x19, #0x8]
7101bf7e84  mov w9,#0x10
7101bf7e88  str w9,[x8]
7101bf7e8c  ldr x8,[x19, #0x8]
7101bf7e90  mov w9,#0x80
7101bf7e94  str w9,[x8, #0x4]
7101bf7e98  adrp x25,0x710532f000
7101bf7e9c  ldr x8,[x25, #0x730]
7101bf7ea0  ldr x8,[x8, #0x8]
7101bf7ea4  str x8,[sp, #0x68]
7101bf7ea8  ldr x8,[x8, #0x3b8]
7101bf7eac  ldr x9,[x8, #0x8]
7101bf7eb0  ldr x8,[x9, #0x20]
7101bf7eb4  ldrb w10,[x8]
7101bf7eb8  cmp w10,#0xc
7101bf7ebc  b.ne 0x7101bf7f40
7101bf7ec0  ldur w10,[x8, #0x1]
7101bf7ec4  subs w10,w10,#0x1
7101bf7ec8  b.lt 0x7101bf7f40
7101bf7ecc  ldr x12,[x9, #0x48]
7101bf7ed0  ldr x9,[x9, #0x18]
7101bf7ed4  mov w11,wzr
7101bf7ed8  ldursw x14,[x8, #0x5]
7101bf7edc  and x12,x12,#0xffffffffff
7101bf7ee0  ldp x13,x9,[x9, #0x20]
7101bf7ee4  add x14,x9,x14
7101bf7ee8  adrp x9,0x7104742000
7101bf7eec  add x9,x9,#0xdbb
7101bf7ef0  add w15,w10,w11
7101bf7ef4  cmp w15,#0x0
7101bf7ef8  cinc w15,w15,lt
7101bf7efc  asr w15,w15,#0x1
7101bf7f00  add x16,x14,w15, SXTW  #0x3
7101bf7f04  ldr w17,[x16]
7101bf7f08  ldr x17,[x13, x17, LSL #0x3]
7101bf7f0c  cmp x17,x12
7101bf7f10  b.eq 0x7101bf7f30
7101bf7f14  sub w16,w15,#0x1
7101bf7f18  cmp x17,x12
7101bf7f1c  csel w10,w16,w10,hi
7101bf7f20  csinc w11,w11,w15,hi
7101bf7f24  cmp w11,w10
7101bf7f28  b.le 0x7101bf7ef0
7101bf7f2c  b 0x7101bf7f48
7101bf7f30  ldrsw x9,[x16, #0x4]
7101bf7f34  tbnz w9,#0x1f,0x7101bf7f40
7101bf7f38  add x9,x8,x9
7101bf7f3c  b 0x7101bf7f48
7101bf7f40  adrp x9,0x7104742000
7101bf7f44  add x9,x9,#0xdbb
7101bf7f48  ldrb w8,[x9]
7101bf7f4c  sub w8,w8,#0xb
7101bf7f50  cmp w8,#0x1
7101bf7f54  b.hi 0x7101bf7f60
7101bf7f58  ldur w8,[x9, #0x1]
7101bf7f5c  b 0x7101bf7f64
7101bf7f60  mov w8,wzr
7101bf7f64  stp xzr,xzr,[sp, #0x148]
7101bf7f68  str xzr,[sp, #0x140]
7101bf7f6c  str x28,[sp, #0x50]
7101bf7f70  str x20,[sp, #0x10]
7101bf7f74  cbz w8,0x7101bf826c
7101bf7f78  sxtw x26,w8
7101bf7f7c  tbnz w26,#0x1f,0x7101bfa2a4
7101bf7f80  lsl x20,x26,#0x4
7101bf7f84  mov w0,#0x10
7101bf7f88  mov x1,x20
7101bf7f8c  bl 0x710392e290
7101bf7f90  cbnz x0,0x7101bf7fd4
7101bf7f94  adrp x8,0x7105332000
7101bf7f98  ldr x0,[x8, #0xf00]
7101bf7f9c  cbz x0,0x7101bf7fd0
7101bf7fa0  stur wzr,[x29, #-0xb8]
7101bf7fa4  str x20,[sp, #0xc0]
7101bf7fa8  ldr x8,[x0]
7101bf7fac  ldr x8,[x8, #0x30]
7101bf7fb0  sub x1,x29,#0xb8
7101bf7fb4  add x2,sp,#0xc0
7101bf7fb8  blr x8
7101bf7fbc  tbz w0,#0x0,0x7101bf7fd0
7101bf7fc0  mov w0,#0x10
7101bf7fc4  mov x1,x20
7101bf7fc8  bl 0x710392e290
7101bf7fcc  cbnz x0,0x7101bf7fd4
7101bf7fd0  mov x0,xzr
7101bf7fd4  add x8,x0,x26, LSL #0x4
7101bf7fd8  mov w21,wzr
7101bf7fdc  str x8,[sp, #0x150]
7101bf7fe0  stp x0,x0,[sp, #0x140]
7101bf7fe4  b 0x7101bf8000
7101bf7fe8  mov x20,xzr
7101bf7fec  b 0x7101bf8218
7101bf7ff0  mov x0,x23
7101bf7ff4  mov x1,x20
7101bf7ff8  bl 0x7103262cc0
7101bf7ffc  b 0x7101bf8258
7101bf8000  ldr x8,[sp, #0x68]
7101bf8004  ldr x0,[x8, #0x3b8]
7101bf8008  mov w1,w21
7101bf800c  bl 0x71032b5c50
7101bf8010  ldr x23,[x25, #0x730]
7101bf8014  ldr x19,[x23, #0x8]
7101bf8018  mov x22,x0
7101bf801c  ldr x0,[x19, #0x3b8]
7101bf8020  mov x1,x22
7101bf8024  bl 0x71032b5800
7101bf8028  and x8,x0,#0xffffffffff
7101bf802c  and x9,x0,#-0x100000000000000
7101bf8030  cmp x8,#0x0
7101bf8034  mov x8,#-0x3f00000000000000
7101bf8038  ccmp x9,x8,#0x0,ne
7101bf803c  b.ne 0x7101bf812c
7101bf8040  ldr x0,[x19, #0x3b8]
7101bf8044  mov x1,x22
7101bf8048  bl 0x71032b68b0
7101bf804c  tbz w0,#0x0,0x7101bf812c
7101bf8050  ldr x0,[x19, #0x3b8]
7101bf8054  mov x1,x22
7101bf8058  bl 0x71032b5800
7101bf805c  and x9,x0,#-0x100000000000000
7101bf8060  mov x10,#-0x3f00000000000000
7101bf8064  and x8,x0,#0xffffffffff
7101bf8068  cmp x9,x10
7101bf806c  ccmp x8,#0x0,#0x4,eq
7101bf8070  b.eq 0x7101bf80c4
7101bf8074  ldr x24,[x23, #0x8]
7101bf8078  ldr x23,[x24, #0x168]
7101bf807c  mov x20,x0
7101bf8080  mov x0,x23
7101bf8084  mov x1,x20
7101bf8088  bl 0x7103264d20
7101bf808c  tbz w0,#0x0,0x7101bf80b8
7101bf8090  mov x0,x20
7101bf8094  mov w1,wzr
7101bf8098  mov w2,wzr
7101bf809c  bl 0x7101797560
7101bf80a0  mov w23,w0
7101bf80a4  ldr x0,[x24, #0x168]
7101bf80a8  mov x1,x20
7101bf80ac  bl 0x7103262cc0
7101bf80b0  tbz w23,#0x0,0x7101bf80c4
7101bf80b4  b 0x7101bf812c
7101bf80b8  mov x0,x23
7101bf80bc  mov x1,x20
7101bf80c0  bl 0x7103262cc0
7101bf80c4  ldr x0,[x19, #0x3b8]
7101bf80c8  mov x1,x22
7101bf80cc  bl 0x71032b6340
7101bf80d0  and x9,x0,#-0x100000000000000
7101bf80d4  mov x10,#-0x3f00000000000000
7101bf80d8  and x8,x0,#0xffffffffff
7101bf80dc  cmp x9,x10
7101bf80e0  ccmp x8,#0x0,#0x4,eq
7101bf80e4  b.eq 0x7101bf8258
7101bf80e8  ldr x8,[x25, #0x730]
7101bf80ec  ldr x19,[x8, #0x8]
7101bf80f0  ldr x23,[x19, #0x168]
7101bf80f4  mov x20,x0
7101bf80f8  mov x0,x23
7101bf80fc  mov x1,x20
7101bf8100  bl 0x7103264d20
7101bf8104  tbz w0,#0x0,0x7101bf7ff0
7101bf8108  mov x0,x20
7101bf810c  mov w1,wzr
7101bf8110  mov w2,wzr
7101bf8114  bl 0x7101797560
7101bf8118  mov w23,w0
7101bf811c  ldr x0,[x19, #0x168]
7101bf8120  mov x1,x20
7101bf8124  bl 0x7103262cc0
7101bf8128  tbz w23,#0x0,0x7101bf8258
7101bf812c  ldr x8,[sp, #0x68]
7101bf8130  ldr x0,[x8, #0x3b8]
7101bf8134  mov x1,x22
7101bf8138  bl 0x71032b6080
7101bf813c  ldp x9,x8,[sp, #0x148]
7101bf8140  and x28,x0,#0xff
7101bf8144  cmp x9,x8
7101bf8148  b.cs 0x7101bf8164
7101bf814c  stp x28,x22,[x9]
7101bf8150  ldr x8,[sp, #0x148]
7101bf8154  ldr x28,[sp, #0x50]
7101bf8158  add x8,x8,#0x10
7101bf815c  str x8,[sp, #0x148]
7101bf8160  b 0x7101bf8258
7101bf8164  ldr x23,[sp, #0x140]
7101bf8168  sub x24,x9,x23
7101bf816c  asr x27,x24,#0x4
7101bf8170  add x9,x27,#0x1
7101bf8174  lsr x10,x9,#0x3c
7101bf8178  cbnz x10,0x7101bfa2b8
7101bf817c  sub x8,x8,x23
7101bf8180  asr x10,x8,#0x4
7101bf8184  orr x11,xzr,#0x7fffffffffffffe
7101bf8188  cmp x10,x11
7101bf818c  b.hi 0x7101bf81ac
7101bf8190  asr x8,x8,#0x3
7101bf8194  cmp x8,x9
7101bf8198  csel x19,x9,x8,cc
7101bf819c  cbz x19,0x7101bf7fe8
7101bf81a0  lsr x8,x19,#0x3c
7101bf81a4  cbz x8,0x7101bf81b0
7101bf81a8  b 0x7101bfa2a4
7101bf81ac  orr x19,xzr,#0xfffffffffffffff
7101bf81b0  lsl x8,x19,#0x4
7101bf81b4  cmp x8,#0x0
7101bf81b8  csinc x25,x8,xzr,ne
7101bf81bc  mov w0,#0x10
7101bf81c0  mov x1,x25
7101bf81c4  bl 0x710392e290
7101bf81c8  mov x20,x0
7101bf81cc  cbnz x0,0x7101bf8214
7101bf81d0  adrp x8,0x7105332000
7101bf81d4  ldr x0,[x8, #0xf00]
7101bf81d8  cbz x0,0x7101bf8210
7101bf81dc  stur wzr,[x29, #-0xb8]
7101bf81e0  str x25,[sp, #0xc0]
7101bf81e4  ldr x8,[x0]
7101bf81e8  ldr x8,[x8, #0x30]
7101bf81ec  sub x1,x29,#0xb8
7101bf81f0  add x2,sp,#0xc0
7101bf81f4  blr x8
7101bf81f8  tbz w0,#0x0,0x7101bf8210
7101bf81fc  mov w0,#0x10
7101bf8200  mov x1,x25
7101bf8204  bl 0x710392e290
7101bf8208  mov x20,x0
7101bf820c  cbnz x0,0x7101bf8214
7101bf8210  mov x20,xzr
7101bf8214  adrp x25,0x710532f000
7101bf8218  add x8,x20,x27, LSL #0x4
7101bf821c  add x19,x20,x19, LSL #0x4
7101bf8220  cmp x24,#0x1
7101bf8224  stp x28,x22,[x8]
7101bf8228  add x22,x8,#0x10
7101bf822c  b.lt 0x7101bf8240
7101bf8230  mov x0,x20
7101bf8234  mov x1,x23
7101bf8238  mov x2,x24
7101bf823c  bl 0x71039c00e0
7101bf8240  ldr x28,[sp, #0x50]
7101bf8244  stp x20,x22,[sp, #0x140]
7101bf8248  str x19,[sp, #0x150]
7101bf824c  cbz x23,0x7101bf8258
7101bf8250  mov x0,x23
7101bf8254  bl 0x710392eb40
7101bf8258  add w21,w21,#0x1
7101bf825c  cmp w26,w21
7101bf8260  b.ne 0x7101bf8000
7101bf8264  ldp x21,x22,[sp, #0x140]
7101bf8268  b 0x7101bf8274
7101bf826c  mov x22,xzr
7101bf8270  mov x21,xzr
7101bf8274  adrp x8,0x7103279000
7101bf8278  add x8,x8,#0xcf0
7101bf827c  stur x8,[x29, #-0xb8]
7101bf8280  sub x8,x22,x21
7101bf8284  asr x23,x8,#0x4
7101bf8288  cmp x8,#0x1
7101bf828c  b.lt 0x7101bf82fc
7101bf8290  orr x8,xzr,#0x7ffffffffffffff
7101bf8294  cmp x23,x8
7101bf8298  csel x24,x23,x8,lt
7101bf829c  adrp x19,0x7105332000
7101bf82a0  lsl x8,x24,#0x4
7101bf82a4  cmp x8,#0x0
7101bf82a8  csinc x20,x8,xzr,ne
7101bf82ac  mov w0,#0x10
7101bf82b0  mov x1,x20
7101bf82b4  bl 0x710392e290
7101bf82b8  cbnz x0,0x7101bf831c
7101bf82bc  ldr x0,[x19, #0xf00]
7101bf82c0  cbz x0,0x7101bf82f4
7101bf82c4  stur wzr,[x29, #-0xd0]
7101bf82c8  str x20,[sp, #0xc0]
7101bf82cc  ldr x8,[x0]
7101bf82d0  ldr x8,[x8, #0x30]
7101bf82d4  sub x1,x29,#0xd0
7101bf82d8  add x2,sp,#0xc0
7101bf82dc  blr x8
7101bf82e0  tbz w0,#0x0,0x7101bf82f4
7101bf82e4  mov w0,#0x10
7101bf82e8  mov x1,x20
7101bf82ec  bl 0x710392e290
7101bf82f0  cbnz x0,0x7101bf831c
7101bf82f4  lsr x24,x24,#0x1
7101bf82f8  cbnz x24,0x7101bf82a0
7101bf82fc  sub x2,x29,#0xb8
7101bf8300  mov x0,x21
7101bf8304  mov x1,x22
7101bf8308  mov x3,x23
7101bf830c  mov x4,xzr
7101bf8310  mov x5,xzr
7101bf8314  bl 0x7103279d10
7101bf8318  b 0x7101bf8344
7101bf831c  mov x25,x0
7101bf8320  sub x2,x29,#0xb8
7101bf8324  mov x0,x21
7101bf8328  mov x1,x22
7101bf832c  mov x3,x23
7101bf8330  mov x4,x25
7101bf8334  mov x5,x24
7101bf8338  bl 0x7103279d10
7101bf833c  mov x0,x25
7101bf8340  bl 0x710392eb40
7101bf8344  ldp x21,x22,[sp, #0x140]
7101bf8348  sub x23,x22,x21
7101bf834c  stp xzr,xzr,[sp, #0xc8]
7101bf8350  lsl x8,x23,#0x1c
7101bf8354  sbfx x19,x23,#0x4,#0x20
7101bf8358  str xzr,[sp, #0xc0]
7101bf835c  cbz x8,0x7101bf83cc
7101bf8360  lsr x9,x19,#0x3d
7101bf8364  cbnz x9,0x7101bfa2a4
7101bf8368  asr x20,x8,#0x1d
7101bf836c  mov w0,#0x10
7101bf8370  mov x1,x20
7101bf8374  bl 0x710392e290
7101bf8378  cbnz x0,0x7101bf83bc
7101bf837c  adrp x8,0x7105332000
7101bf8380  ldr x0,[x8, #0xf00]
7101bf8384  cbz x0,0x7101bf83b8
7101bf8388  stur wzr,[x29, #-0xd0]
7101bf838c  stur x20,[x29, #-0xb8]
7101bf8390  ldr x8,[x0]
7101bf8394  ldr x8,[x8, #0x30]
7101bf8398  sub x1,x29,#0xd0
7101bf839c  sub x2,x29,#0xb8
7101bf83a0  blr x8
7101bf83a4  tbz w0,#0x0,0x7101bf83b8
7101bf83a8  mov w0,#0x10
7101bf83ac  mov x1,x20
7101bf83b0  bl 0x710392e290
7101bf83b4  cbnz x0,0x7101bf83bc
7101bf83b8  mov x0,xzr
7101bf83bc  add x8,x0,x19, LSL #0x3
7101bf83c0  stp x0,x0,[sp, #0xc0]
7101bf83c4  str x8,[sp, #0xd0]
7101bf83c8  b 0x7101bf83d0
7101bf83cc  mov x0,xzr
7101bf83d0  lsr x9,x23,#0x4
7101bf83d4  cmp w9,#0x1
7101bf83d8  b.lt 0x7101bf8534
7101bf83dc  cmp x22,x21
7101bf83e0  b.eq 0x7101bfa29c
7101bf83e4  mov w25,#0x1
7101bf83e8  mov w26,#0x8
7101bf83ec  cmp x0,x8
7101bf83f0  b.ne 0x7101bf8420
7101bf83f4  b 0x7101bf8440
7101bf83f8  ldp x21,x8,[sp, #0x140]
7101bf83fc  sub x8,x8,x21
7101bf8400  asr x8,x8,#0x4
7101bf8404  cmp x8,x25
7101bf8408  b.ls 0x7101bfa29c
7101bf840c  ldp x0,x8,[sp, #0xc8]
7101bf8410  add x25,x25,#0x1
7101bf8414  add x26,x26,#0x10
7101bf8418  cmp x0,x8
7101bf841c  b.eq 0x7101bf8440
7101bf8420  ldr x8,[x21, x26, LSL #0x0]
7101bf8424  str x8,[x0]
7101bf8428  ldr x8,[sp, #0xc8]
7101bf842c  add x8,x8,#0x8
7101bf8430  str x8,[sp, #0xc8]
7101bf8434  cmp x25,x19
7101bf8438  b.lt 0x7101bf83f8
7101bf843c  b 0x7101bf8530
7101bf8440  ldr x22,[sp, #0xc0]
7101bf8444  sub x23,x8,x22
7101bf8448  asr x28,x23,#0x3
7101bf844c  add x8,x28,#0x1
7101bf8450  lsr x9,x8,#0x3d
7101bf8454  cbnz x9,0x7101bfa2c0
7101bf8458  orr x9,xzr,#0xffffffffffffffe
7101bf845c  cmp x28,x9
7101bf8460  b.hi 0x7101bf8480
7101bf8464  asr x9,x23,#0x2
7101bf8468  cmp x9,x8
7101bf846c  csel x27,x8,x9,cc
7101bf8470  cbz x27,0x7101bf84e4
7101bf8474  lsr x8,x27,#0x3d
7101bf8478  cbz x8,0x7101bf8484
7101bf847c  b 0x7101bfa2a4
7101bf8480  orr x27,xzr,#0x1fffffffffffffff
7101bf8484  lsl x8,x27,#0x3
7101bf8488  cmp x8,#0x0
7101bf848c  csinc x24,x8,xzr,ne
7101bf8490  mov w0,#0x10
7101bf8494  mov x1,x24
7101bf8498  bl 0x710392e290
7101bf849c  mov x20,x0
7101bf84a0  cbnz x0,0x7101bf84e8
7101bf84a4  adrp x8,0x7105332000
7101bf84a8  ldr x0,[x8, #0xf00]
7101bf84ac  cbz x0,0x7101bf84e4
7101bf84b0  stur wzr,[x29, #-0xd0]
7101bf84b4  stur x24,[x29, #-0xb8]
7101bf84b8  ldr x8,[x0]
7101bf84bc  ldr x8,[x8, #0x30]
7101bf84c0  sub x1,x29,#0xd0
7101bf84c4  sub x2,x29,#0xb8
7101bf84c8  blr x8
7101bf84cc  tbz w0,#0x0,0x7101bf84e4
7101bf84d0  mov w0,#0x10
7101bf84d4  mov x1,x24
7101bf84d8  bl 0x710392e290
7101bf84dc  mov x20,x0
7101bf84e0  cbnz x0,0x7101bf84e8
7101bf84e4  mov x20,xzr
7101bf84e8  ldr x8,[x21, x26, LSL #0x0]
7101bf84ec  add x21,x20,x28, LSL #0x3
7101bf84f0  add x24,x20,x27, LSL #0x3
7101bf84f4  cmp x23,#0x1
7101bf84f8  str x8,[x21], #0x8
7101bf84fc  b.lt 0x7101bf8510
7101bf8500  mov x0,x20
7101bf8504  mov x1,x22
7101bf8508  mov x2,x23
7101bf850c  bl 0x71039c00e0
7101bf8510  ldr x28,[sp, #0x50]
7101bf8514  stp x20,x21,[sp, #0xc0]
7101bf8518  str x24,[sp, #0xd0]
7101bf851c  cbz x22,0x7101bf8528
7101bf8520  mov x0,x22
7101bf8524  bl 0x710392eb40
7101bf8528  cmp x25,x19
7101bf852c  b.lt 0x7101bf83f8
7101bf8530  ldr x21,[sp, #0x140]
7101bf8534  cbz x21,0x7101bf8544
7101bf8538  mov x0,x21
7101bf853c  str x21,[sp, #0x148]
7101bf8540  bl 0x710392eb40
7101bf8544  ldr x0,[x28, #0x4f0]
7101bf8548  add x25,x28,#0x4f0
7101bf854c  cbz x0,0x7101bf856c
7101bf8550  add x8,x28,#0x4f8
7101bf8554  str x8,[sp, #0x40]
7101bf8558  str x0,[x28, #0x4f8]
7101bf855c  bl 0x710392eb40
7101bf8560  stp xzr,xzr,[x25, #0x8]
7101bf8564  str xzr,[x25]
7101bf8568  b 0x7101bf8574
7101bf856c  add x8,x28,#0x4f8
7101bf8570  str x8,[sp, #0x40]
7101bf8574  ldr x8,[sp, #0xc0]
7101bf8578  str x8,[x28, #0x4f0]
7101bf857c  ldr x8,[sp, #0xc8]
7101bf8580  str x8,[x28, #0x4f8]
7101bf8584  ldr x8,[sp, #0xd0]
7101bf8588  str x8,[x28, #0x500]
7101bf858c  ldr x8,[x28, #0x128]
7101bf8590  ldr x8,[x8]
7101bf8594  add x22,x8,#0x8
7101bf8598  adrp x1,0x71042f8000
7101bf859c  add x1,x1,#0x239
7101bf85a0  add x8,sp,#0xb0
7101bf85a4  mov x0,x22
7101bf85a8  bl 0x7103776640
7101bf85ac  adrp x1,0x7104431000
7101bf85b0  add x1,x1,#0x6d5
7101bf85b4  add x8,sp,#0x140
7101bf85b8  mov x0,x22
7101bf85bc  add x19,sp,#0x140
7101bf85c0  bl 0x7103776910
7101bf85c4  add x8,x28,#0x148
7101bf85c8  cmp x8,x19
7101bf85cc  b.eq 0x7101bf85e8
7101bf85d0  ldr x8,[sp, #0x148]
7101bf85d4  str xzr,[sp, #0x148]
7101bf85d8  ldr x0,[x28, #0x150]
7101bf85dc  str x8,[x28, #0x150]
7101bf85e0  cbz x0,0x7101bf85e8
7101bf85e4  bl 0x710392eb40
7101bf85e8  ldr x0,[sp, #0x148]
7101bf85ec  adrp x21,0x710523d000
7101bf85f0  add x21,x21,#0x9a8
7101bf85f4  stp x21,xzr,[sp, #0x140]
7101bf85f8  cbz x0,0x7101bf8600
7101bf85fc  bl 0x710392eb40
7101bf8600  adrp x1,0x71042a1000
7101bf8604  add x1,x1,#0xaf1
7101bf8608  add x8,sp,#0x140
7101bf860c  add x0,sp,#0xb0
7101bf8610  add x19,sp,#0x140
7101bf8614  bl 0x7103776910
7101bf8618  add x8,x28,#0x158
7101bf861c  cmp x8,x19
7101bf8620  str x8,[sp, #0x8]
7101bf8624  b.eq 0x7101bf8640
7101bf8628  ldr x8,[sp, #0x148]
7101bf862c  str xzr,[sp, #0x148]
7101bf8630  ldr x0,[x28, #0x160]
7101bf8634  str x8,[x28, #0x160]
7101bf8638  cbz x0,0x7101bf8640
7101bf863c  bl 0x710392eb40
7101bf8640  ldr x0,[sp, #0x148]
7101bf8644  stp x21,xzr,[sp, #0x140]
7101bf8648  cbz x0,0x7101bf8650
7101bf864c  bl 0x710392eb40
7101bf8650  adrp x1,0x7104338000
7101bf8654  add x1,x1,#0xd31
7101bf8658  add x8,sp,#0x140
7101bf865c  add x0,sp,#0xb0
7101bf8660  add x19,sp,#0x140
7101bf8664  bl 0x7103776910
7101bf8668  add x8,x28,#0x168
7101bf866c  cmp x8,x19
7101bf8670  b.eq 0x7101bf868c
7101bf8674  ldr x8,[sp, #0x148]
7101bf8678  str xzr,[sp, #0x148]
7101bf867c  ldr x0,[x28, #0x170]
7101bf8680  str x8,[x28, #0x170]
7101bf8684  cbz x0,0x7101bf868c
7101bf8688  bl 0x710392eb40
7101bf868c  ldr x0,[sp, #0x148]
7101bf8690  stp x21,xzr,[sp, #0x140]
7101bf8694  cbz x0,0x7101bf869c
7101bf8698  bl 0x710392eb40
7101bf869c  adrp x1,0x7104443000
7101bf86a0  add x1,x1,#0x60b
7101bf86a4  add x8,sp,#0x140
7101bf86a8  mov x0,x22
7101bf86ac  add x19,sp,#0x140
7101bf86b0  bl 0x7103776910
7101bf86b4  ldr x8,[sp, #0x40]
7101bf86b8  ldr x8,[x8]
7101bf86bc  ldr x9,[x25]
7101bf86c0  sub x8,x8,x9
7101bf86c4  asr x2,x8,#0x3
7101bf86c8  adrp x1,0x710434a000
7101bf86cc  add x1,x1,#0x266
7101bf86d0  add x0,sp,#0x140
7101bf86d4  bl 0x710377a4a0
7101bf86d8  ldr x0,[sp, #0x148]
7101bf86dc  stp x21,xzr,[sp, #0x140]
7101bf86e0  cbz x0,0x7101bf86e8
7101bf86e4  bl 0x710392eb40
7101bf86e8  adrp x1,0x71042a2000
7101bf86ec  add x1,x1,#0xf7d
7101bf86f0  add x8,sp,#0x140
7101bf86f4  mov x0,x22
7101bf86f8  bl 0x7103776910
7101bf86fc  add x8,x28,#0x178
7101bf8700  cmp x8,x19
7101bf8704  b.eq 0x7101bf8720
7101bf8708  ldr x8,[sp, #0x148]
7101bf870c  str xzr,[sp, #0x148]
7101bf8710  ldr x0,[x28, #0x180]
7101bf8714  str x8,[x28, #0x180]
7101bf8718  cbz x0,0x7101bf8720
7101bf871c  bl 0x710392eb40
7101bf8720  ldr x0,[sp, #0x148]
7101bf8724  stp x21,xzr,[sp, #0x140]
7101bf8728  cbz x0,0x7101bf8730
7101bf872c  bl 0x710392eb40
7101bf8730  adrp x1,0x710435b000
7101bf8734  add x1,x1,#0x69d
7101bf8738  add x8,sp,#0x140
7101bf873c  mov x0,x22
7101bf8740  add x19,sp,#0x140
7101bf8744  bl 0x7103776910
7101bf8748  add x8,x28,#0x188
7101bf874c  cmp x8,x19
7101bf8750  b.eq 0x7101bf876c
7101bf8754  ldr x8,[sp, #0x148]
7101bf8758  str xzr,[sp, #0x148]
7101bf875c  ldr x0,[x28, #0x190]
7101bf8760  str x8,[x28, #0x190]
7101bf8764  cbz x0,0x7101bf876c
7101bf8768  bl 0x710392eb40
7101bf876c  ldr x0,[sp, #0x148]
7101bf8770  stp x21,xzr,[sp, #0x140]
7101bf8774  cbz x0,0x7101bf877c
7101bf8778  bl 0x710392eb40
7101bf877c  adrp x1,0x71042c4000
7101bf8780  add x1,x1,#0xd09
7101bf8784  add x8,sp,#0x140
7101bf8788  mov x0,x22
7101bf878c  add x19,sp,#0x140
7101bf8790  bl 0x7103776910
7101bf8794  add x8,x28,#0x198
7101bf8798  cmp x8,x19
7101bf879c  b.eq 0x7101bf87b8
7101bf87a0  ldr x8,[sp, #0x148]
7101bf87a4  str xzr,[sp, #0x148]
7101bf87a8  ldr x0,[x28, #0x1a0]
7101bf87ac  str x8,[x28, #0x1a0]
7101bf87b0  cbz x0,0x7101bf87b8
7101bf87b4  bl 0x710392eb40
7101bf87b8  ldr x0,[sp, #0x148]
7101bf87bc  stp x21,xzr,[sp, #0x140]
7101bf87c0  cbz x0,0x7101bf87c8
7101bf87c4  bl 0x710392eb40
7101bf87c8  adrp x1,0x710424f000
7101bf87cc  add x1,x1,#0x46f
7101bf87d0  add x8,sp,#0xc0
7101bf87d4  mov x0,x22
7101bf87d8  bl 0x7103776640
7101bf87dc  adrp x1,0x7104464000
7101bf87e0  add x1,x1,#0x37f
7101bf87e4  add x8,sp,#0x140
7101bf87e8  add x0,sp,#0xc0
7101bf87ec  add x19,sp,#0x140
7101bf87f0  bl 0x7103776910
7101bf87f4  add x8,x28,#0x1a8
7101bf87f8  cmp x8,x19
7101bf87fc  b.eq 0x7101bf8818
7101bf8800  ldr x8,[sp, #0x148]
7101bf8804  str xzr,[sp, #0x148]
7101bf8808  ldr x0,[x28, #0x1b0]
7101bf880c  str x8,[x28, #0x1b0]
7101bf8810  cbz x0,0x7101bf8818
7101bf8814  bl 0x710392eb40
7101bf8818  ldr x0,[sp, #0x148]
7101bf881c  stp x21,xzr,[sp, #0x140]
7101bf8820  cbz x0,0x7101bf8828
7101bf8824  bl 0x710392eb40
7101bf8828  ldr x20,[sp, #0xc8]
7101bf882c  adrp x8,0x710523d000
7101bf8830  add x8,x8,#0x988
7101bf8834  stp x8,xzr,[sp, #0xc0]
7101bf8838  cbz x20,0x7101bf8854
7101bf883c  ldr x0,[x20, #0x18]
7101bf8840  stp x21,xzr,[x20, #0x10]
7101bf8844  cbz x0,0x7101bf884c
7101bf8848  bl 0x710392eb40
7101bf884c  mov x0,x20
7101bf8850  bl 0x710392eb40
7101bf8854  ldr x8,[x28, #0x1b0]
7101bf8858  ldr x8,[x8]
7101bf885c  cbz x8,0x7101bf886c
7101bf8860  ldrb w9,[x8, #0x58]
7101bf8864  and w9,w9,#0xfe
7101bf8868  strb w9,[x8, #0x58]
7101bf886c  adrp x1,0x710425f000
7101bf8870  add x1,x1,#0x2be
7101bf8874  add x8,sp,#0xa0
7101bf8878  mov x0,x22
7101bf887c  bl 0x7103776910
7101bf8880  ldr x19,[x28, #0x4b8]
7101bf8884  ldr x23,[x28, #0x4c0]
7101bf8888  cmp x23,x19
7101bf888c  b.eq 0x7101bf89d0
7101bf8890  adrp x22,0x710523d000
7101bf8894  add x22,x22,#0xa08
7101bf8898  ldur x21,[x23, #-0x8]
7101bf889c  stp x22,xzr,[x23, #-0x10]
7101bf88a0  cbz x21,0x7101bf892c
7101bf88a4  ldr x20,[x21, #0x8]
7101bf88a8  stp xzr,xzr,[x21]
7101bf88ac  cbz x20,0x7101bf8924
7101bf88b0  add x8,x20,#0x8
7101bf88b4  ldaxr x9,[x8]
7101bf88b8  sub x10,x9,#0x1
7101bf88bc  stlxr w11,x10,[x8]
7101bf88c0  cbnz w11,0x7101bf88b4
7101bf88c4  cbz x9,0x7101bf88d4
7101bf88c8  ldr x20,[x21, #0x8]
7101bf88cc  cbnz x20,0x7101bf88f4
7101bf88d0  b 0x7101bf8924
7101bf88d4  ldr x8,[x20]
7101bf88d8  ldr x8,[x8, #0x10]
7101bf88dc  mov x0,x20
7101bf88e0  blr x8
7101bf88e4  mov x0,x20
7101bf88e8  bl 0x71039c2670
7101bf88ec  ldr x20,[x21, #0x8]
7101bf88f0  cbz x20,0x7101bf8924
7101bf88f4  add x8,x20,#0x8
7101bf88f8  ldaxr x9,[x8]
7101bf88fc  sub x10,x9,#0x1
7101bf8900  stlxr w11,x10,[x8]
7101bf8904  cbnz w11,0x7101bf88f8
7101bf8908  cbnz x9,0x7101bf8924
7101bf890c  ldr x8,[x20]
7101bf8910  ldr x8,[x8, #0x10]
7101bf8914  mov x0,x20
7101bf8918  blr x8
7101bf891c  mov x0,x20
7101bf8920  bl 0x71039c2670
7101bf8924  mov x0,x21
7101bf8928  bl 0x710392eb40
7101bf892c  ldur x21,[x23, #-0x18]
7101bf8930  sub x24,x23,#0x28
7101bf8934  stp x22,xzr,[x23, #-0x20]
7101bf8938  cbz x21,0x7101bf89c4
7101bf893c  ldr x20,[x21, #0x8]
7101bf8940  stp xzr,xzr,[x21]
7101bf8944  cbz x20,0x7101bf89bc
7101bf8948  add x8,x20,#0x8
7101bf894c  ldaxr x9,[x8]
7101bf8950  sub x10,x9,#0x1
7101bf8954  stlxr w11,x10,[x8]
7101bf8958  cbnz w11,0x7101bf894c
7101bf895c  cbz x9,0x7101bf896c
7101bf8960  ldr x20,[x21, #0x8]
7101bf8964  cbnz x20,0x7101bf898c
7101bf8968  b 0x7101bf89bc
7101bf896c  ldr x8,[x20]
7101bf8970  ldr x8,[x8, #0x10]
7101bf8974  mov x0,x20
7101bf8978  blr x8
7101bf897c  mov x0,x20
7101bf8980  bl 0x71039c2670
7101bf8984  ldr x20,[x21, #0x8]
7101bf8988  cbz x20,0x7101bf89bc
7101bf898c  add x8,x20,#0x8
7101bf8990  ldaxr x9,[x8]
7101bf8994  sub x10,x9,#0x1
7101bf8998  stlxr w11,x10,[x8]
7101bf899c  cbnz w11,0x7101bf8990
7101bf89a0  cbnz x9,0x7101bf89bc
7101bf89a4  ldr x8,[x20]
7101bf89a8  ldr x8,[x8, #0x10]
7101bf89ac  mov x0,x20
7101bf89b0  blr x8
7101bf89b4  mov x0,x20
7101bf89b8  bl 0x71039c2670
7101bf89bc  mov x0,x21
7101bf89c0  bl 0x710392eb40
7101bf89c4  cmp x24,x19
7101bf89c8  mov x23,x24
7101bf89cc  b.ne 0x7101bf8898
7101bf89d0  str x19,[x28, #0x4c0]
7101bf89d4  ldr x19,[x28, #0x4a0]
7101bf89d8  ldr x20,[x28, #0x4a8]
7101bf89dc  add x8,x28,#0x4a0
7101bf89e0  str x8,[sp, #0x20]
7101bf89e4  cmp x20,x19
7101bf89e8  b.ne 0x7101bf8a04
7101bf89ec  mov x23,x19
7101bf89f0  b 0x7101bf8a6c
7101bf89f4  mov x0,x22
7101bf89f8  stur x22,[x21, #-0x10]
7101bf89fc  cbnz x0,0x7101bf8a58
7101bf8a00  b 0x7101bf8a5c
7101bf8a04  mov x21,x20
7101bf8a08  ldr x22,[x20, #-0x18]!
7101bf8a0c  cbz x22,0x7101bf8a5c
7101bf8a10  ldur x23,[x21, #-0x10]
7101bf8a14  cmp x23,x22
7101bf8a18  b.eq 0x7101bf89f4
7101bf8a1c  ldur x0,[x23, #-0x10]
7101bf8a20  sub x24,x23,#0x50
7101bf8a24  cmp x24,x0
7101bf8a28  ccmp x0,#0x0,#0x4,ne
7101bf8a2c  b.eq 0x7101bf8a34
7101bf8a30  bl 0x710392eb40
7101bf8a34  sturh wzr,[x23, #-0x50]
7101bf8a38  stur x24,[x23, #-0x10]
7101bf8a3c  cmp x22,x24
7101bf8a40  stur wzr,[x23, #-0x8]
7101bf8a44  mov x23,x24
7101bf8a48  b.ne 0x7101bf8a1c
7101bf8a4c  ldr x0,[x20]
7101bf8a50  stur x22,[x21, #-0x10]
7101bf8a54  cbz x0,0x7101bf8a5c
7101bf8a58  bl 0x710392eb40
7101bf8a5c  cmp x20,x19
7101bf8a60  b.ne 0x7101bf8a04
7101bf8a64  ldr x8,[sp, #0x20]
7101bf8a68  ldr x23,[x8]
7101bf8a6c  ldr x8,[x28, #0x4f8]
7101bf8a70  ldr x9,[x28, #0x4f0]
7101bf8a74  sub x8,x8,x9
7101bf8a78  asr x22,x8,#0x3
7101bf8a7c  ldr x8,[x28, #0x4b0]
7101bf8a80  sub x8,x8,x23
7101bf8a84  orr x26,xzr,#-0x5555555555555556
7101bf8a88  movk x26,#0xaaab
7101bf8a8c  asr x8,x8,#0x3
7101bf8a90  mul x8,x8,x26
7101bf8a94  cmp x8,x22
7101bf8a98  str x19,[x28, #0x4a8]
7101bf8a9c  b.cs 0x7101bf8c30
7101bf8aa0  orr x8,xzr,#-0x5555555555555556
7101bf8aa4  movk x8,#0xaaa, LSL #48
7101bf8aa8  cmp x22,x8
7101bf8aac  b.hi 0x7101bfa2a4
7101bf8ab0  sub x8,x19,x23
7101bf8ab4  asr x8,x8,#0x3
7101bf8ab8  mul x21,x8,x26
7101bf8abc  add x8,x22,x22, LSL #0x1
7101bf8ac0  lsl x8,x8,#0x3
7101bf8ac4  cmp x8,#0x0
7101bf8ac8  csinc x20,x8,xzr,ne
7101bf8acc  mov w0,#0x10
7101bf8ad0  mov x1,x20
7101bf8ad4  bl 0x710392e290
7101bf8ad8  cbnz x0,0x7101bf8b1c
7101bf8adc  adrp x8,0x7105332000
7101bf8ae0  ldr x0,[x8, #0xf00]
7101bf8ae4  cbz x0,0x7101bf8b18
7101bf8ae8  str wzr,[sp, #0xc0]
7101bf8aec  str x20,[sp, #0x140]
7101bf8af0  ldr x8,[x0]
7101bf8af4  ldr x8,[x8, #0x30]
7101bf8af8  add x1,sp,#0xc0
7101bf8afc  add x2,sp,#0x140
7101bf8b00  blr x8
7101bf8b04  tbz w0,#0x0,0x7101bf8b18
7101bf8b08  mov w0,#0x10
7101bf8b0c  mov x1,x20
7101bf8b10  bl 0x710392e290
7101bf8b14  cbnz x0,0x7101bf8b1c
7101bf8b18  mov x0,xzr
7101bf8b1c  orr w8,wzr,#0x18
7101bf8b20  madd x9,x21,x8,x0
7101bf8b24  madd x8,x22,x8,x0
7101bf8b28  cmp x19,x23
7101bf8b2c  b.eq 0x7101bf8c18
7101bf8b30  orr w11,wzr,#0x18
7101bf8b34  madd x11,x21,x11,x0
7101bf8b38  mov x10,xzr
7101bf8b3c  sub x12,x23,x19
7101bf8b40  add x13,x11,x10
7101bf8b44  add x14,x19,x10
7101bf8b48  stur xzr,[x13, #-0x18]
7101bf8b4c  stp xzr,xzr,[x13, #-0x10]
7101bf8b50  ldur x15,[x14, #-0x18]
7101bf8b54  stur x15,[x13, #-0x18]
7101bf8b58  ldur x15,[x14, #-0x10]
7101bf8b5c  stur x15,[x13, #-0x10]
7101bf8b60  ldur x15,[x14, #-0x8]
7101bf8b64  sub x10,x10,#0x18
7101bf8b68  cmp x12,x10
7101bf8b6c  stur x15,[x13, #-0x8]
7101bf8b70  stp xzr,xzr,[x14, #-0x10]
7101bf8b74  stur xzr,[x14, #-0x18]
7101bf8b78  b.ne 0x7101bf8b40
7101bf8b7c  orr w11,wzr,#0x18
7101bf8b80  mul x11,x21,x11
7101bf8b84  ldr x23,[x28, #0x4a0]
7101bf8b88  ldr x19,[x28, #0x4a8]
7101bf8b8c  str x9,[x28, #0x4a8]
7101bf8b90  add x11,x0,x11
7101bf8b94  add x10,x11,x10
7101bf8b98  str x10,[x28, #0x4a0]
7101bf8b9c  str x8,[x28, #0x4b0]
7101bf8ba0  b 0x7101bf8bb8
7101bf8ba4  bl 0x710392eb40
7101bf8ba8  b 0x7101bf8bb8
7101bf8bac  mov x0,x21
7101bf8bb0  stur x21,[x20, #-0x10]
7101bf8bb4  cbnz x0,0x7101bf8ba4
7101bf8bb8  cmp x19,x23
7101bf8bbc  b.eq 0x7101bf8c24
7101bf8bc0  mov x20,x19
7101bf8bc4  ldr x21,[x19, #-0x18]!
7101bf8bc8  cbz x21,0x7101bf8bb8
7101bf8bcc  ldur x22,[x20, #-0x10]
7101bf8bd0  cmp x22,x21
7101bf8bd4  b.eq 0x7101bf8bac
7101bf8bd8  ldur x0,[x22, #-0x10]
7101bf8bdc  sub x24,x22,#0x50
7101bf8be0  cmp x24,x0
7101bf8be4  ccmp x0,#0x0,#0x4,ne
7101bf8be8  b.eq 0x7101bf8bf0
7101bf8bec  bl 0x710392eb40
7101bf8bf0  sturh wzr,[x22, #-0x50]
7101bf8bf4  stur x24,[x22, #-0x10]
7101bf8bf8  cmp x21,x24
7101bf8bfc  stur wzr,[x22, #-0x8]
7101bf8c00  mov x22,x24
7101bf8c04  b.ne 0x7101bf8bd8
7101bf8c08  ldr x0,[x19]
7101bf8c0c  stur x21,[x20, #-0x10]
7101bf8c10  cbnz x0,0x7101bf8ba4
7101bf8c14  b 0x7101bf8bb8
7101bf8c18  str x9,[x28, #0x4a0]
7101bf8c1c  str x9,[x28, #0x4a8]
7101bf8c20  str x8,[x28, #0x4b0]
7101bf8c24  cbz x23,0x7101bf8c30
7101bf8c28  mov x0,x23
7101bf8c2c  bl 0x710392eb40
7101bf8c30  ldr x8,[sp, #0x40]
7101bf8c34  ldr x9,[x8]
7101bf8c38  ldr x8,[x25]
7101bf8c3c  cmp x9,x8
7101bf8c40  b.eq 0x7101bf9efc
7101bf8c44  add x9,x28,#0x4b8
7101bf8c48  add x22,sp,#0x140
7101bf8c4c  orr x23,xzr,#-0x3333333333333334
7101bf8c50  str x9,[sp, #0x18]
7101bf8c54  add x9,x22,#0x8
7101bf8c58  mov x27,xzr
7101bf8c5c  str x9,[sp, #0x48]
7101bf8c60  add x9,x22,#0x18
7101bf8c64  movk x23,#0xcccd
7101bf8c68  str x9,[sp, #0x28]
7101bf8c6c  str x25,[sp, #0x38]
7101bf8c70  b 0x7101bf8c7c
7101bf8c74  mov x0,xzr
7101bf8c78  b 0x7101bf8d6c
7101bf8c7c  ldr x19,[x28, #0x4a8]
7101bf8c80  ldr x9,[x28, #0x4b0]
7101bf8c84  cmp x19,x9
7101bf8c88  ldr x8,[x8, x27, LSL #0x3]
7101bf8c8c  str x8,[sp, #0x58]
7101bf8c90  b.cs 0x7101bf8cac
7101bf8c94  stp xzr,xzr,[x19, #0x8]
7101bf8c98  str xzr,[x19]
7101bf8c9c  ldr x8,[x28, #0x4a8]
7101bf8ca0  add x8,x8,#0x18
7101bf8ca4  str x8,[x28, #0x4a8]
7101bf8ca8  b 0x7101bf8e80
7101bf8cac  ldr x8,[sp, #0x20]
7101bf8cb0  ldr x11,[x8]
7101bf8cb4  sub x8,x19,x11
7101bf8cb8  asr x8,x8,#0x3
7101bf8cbc  mul x21,x8,x26
7101bf8cc0  orr x24,xzr,#-0x5555555555555556
7101bf8cc4  movk x24,#0xaaa, LSL #48
7101bf8cc8  add x8,x21,#0x1
7101bf8ccc  cmp x8,x24
7101bf8cd0  b.hi 0x7101bfa2a8
7101bf8cd4  sub x9,x9,x11
7101bf8cd8  asr x9,x9,#0x3
7101bf8cdc  mul x9,x9,x26
7101bf8ce0  orr x10,xzr,#0x5555555555555555
7101bf8ce4  movk x10,#0x5554
7101bf8ce8  movk x10,#0x555, LSL #48
7101bf8cec  cmp x9,x10
7101bf8cf0  b.hi 0x7101bf8d04
7101bf8cf4  lsl x9,x9,#0x1
7101bf8cf8  cmp x9,x8
7101bf8cfc  csel x24,x8,x9,cc
7101bf8d00  cbz x24,0x7101bf8c74
7101bf8d04  add x8,x24,x24, LSL #0x1
7101bf8d08  lsl x8,x8,#0x3
7101bf8d0c  cmp x8,#0x0
7101bf8d10  csinc x20,x8,xzr,ne
7101bf8d14  mov w0,#0x10
7101bf8d18  mov x1,x20
7101bf8d1c  bl 0x710392e290
7101bf8d20  cbnz x0,0x7101bf8d64
7101bf8d24  adrp x8,0x7105332000
7101bf8d28  ldr x0,[x8, #0xf00]
7101bf8d2c  cbz x0,0x7101bf8d60
7101bf8d30  str wzr,[sp, #0xc0]
7101bf8d34  str x20,[sp, #0x140]
7101bf8d38  ldr x8,[x0]
7101bf8d3c  ldr x8,[x8, #0x30]
7101bf8d40  add x1,sp,#0xc0
7101bf8d44  add x2,sp,#0x140
7101bf8d48  blr x8
7101bf8d4c  tbz w0,#0x0,0x7101bf8d60
7101bf8d50  mov w0,#0x10
7101bf8d54  mov x1,x20
7101bf8d58  bl 0x710392e290
7101bf8d5c  cbnz x0,0x7101bf8d64
7101bf8d60  mov x0,xzr
7101bf8d64  ldr x11,[x28, #0x4a0]
7101bf8d68  ldr x19,[x28, #0x4a8]
7101bf8d6c  orr w8,wzr,#0x18
7101bf8d70  madd x9,x21,x8,x0
7101bf8d74  madd x8,x24,x8,x0
7101bf8d78  add x10,x9,#0x18
7101bf8d7c  cmp x19,x11
7101bf8d80  str xzr,[x9]
7101bf8d84  stp xzr,xzr,[x9, #0x8]
7101bf8d88  b.eq 0x7101bf8de0
7101bf8d8c  mov x12,xzr
7101bf8d90  sub x11,x11,x19
7101bf8d94  add x13,x9,x12
7101bf8d98  add x14,x19,x12
7101bf8d9c  stur xzr,[x13, #-0x18]
7101bf8da0  stp xzr,xzr,[x13, #-0x10]
7101bf8da4  ldur x15,[x14, #-0x18]
7101bf8da8  stur x15,[x13, #-0x18]
7101bf8dac  ldur x15,[x14, #-0x10]
7101bf8db0  stur x15,[x13, #-0x10]
7101bf8db4  ldur x15,[x14, #-0x8]
7101bf8db8  sub x12,x12,#0x18
7101bf8dbc  cmp x11,x12
7101bf8dc0  stur x15,[x13, #-0x8]
7101bf8dc4  stp xzr,xzr,[x14, #-0x10]
7101bf8dc8  stur xzr,[x14, #-0x18]
7101bf8dcc  b.ne 0x7101bf8d94
7101bf8dd0  ldr x21,[x28, #0x4a0]
7101bf8dd4  ldr x19,[x28, #0x4a8]
7101bf8dd8  add x9,x9,x12
7101bf8ddc  b 0x7101bf8de4
7101bf8de0  mov x21,x19
7101bf8de4  cmp x19,x21
7101bf8de8  str x9,[x28, #0x4a0]
7101bf8dec  str x10,[x28, #0x4a8]
7101bf8df0  str x8,[x28, #0x4b0]
7101bf8df4  b.ne 0x7101bf8e0c
7101bf8df8  b 0x7101bf8e6c
7101bf8dfc  mov x0,x23
7101bf8e00  stur x23,[x20, #-0x10]
7101bf8e04  cbnz x0,0x7101bf8e60
7101bf8e08  b 0x7101bf8e64
7101bf8e0c  mov x20,x19
7101bf8e10  ldr x23,[x19, #-0x18]!
7101bf8e14  cbz x23,0x7101bf8e64
7101bf8e18  ldur x24,[x20, #-0x10]
7101bf8e1c  cmp x24,x23
7101bf8e20  b.eq 0x7101bf8dfc
7101bf8e24  ldur x0,[x24, #-0x10]
7101bf8e28  sub x25,x24,#0x50
7101bf8e2c  cmp x25,x0
7101bf8e30  ccmp x0,#0x0,#0x4,ne
7101bf8e34  b.eq 0x7101bf8e3c
7101bf8e38  bl 0x710392eb40
7101bf8e3c  sturh wzr,[x24, #-0x50]
7101bf8e40  stur x25,[x24, #-0x10]
7101bf8e44  cmp x23,x25
7101bf8e48  stur wzr,[x24, #-0x8]
7101bf8e4c  mov x24,x25
7101bf8e50  b.ne 0x7101bf8e24
7101bf8e54  ldr x0,[x19]
7101bf8e58  stur x23,[x20, #-0x10]
7101bf8e5c  cbz x0,0x7101bf8e64
7101bf8e60  bl 0x710392eb40
7101bf8e64  cmp x19,x21
7101bf8e68  b.ne 0x7101bf8e0c
7101bf8e6c  orr x23,xzr,#-0x3333333333333334
7101bf8e70  movk x23,#0xcccd
7101bf8e74  cbz x21,0x7101bf8e80
7101bf8e78  mov x0,x21
7101bf8e7c  bl 0x710392eb40
7101bf8e80  ldr x19,[x28, #0x4a0]
7101bf8e84  orr w8,wzr,#0x18
7101bf8e88  stur xzr,[x29, #-0xd0]
7101bf8e8c  stp xzr,xzr,[x29, #-0xc8]
7101bf8e90  add x0,sp,#0x140
7101bf8e94  madd x26,x27,x8,x19
7101bf8e98  sub x8,x29,#0xb8
7101bf8e9c  strb wzr,[x8, #0x41]
7101bf8ea0  strb wzr,[x8]
7101bf8ea4  ldr x8,[sp, #0x68]
7101bf8ea8  ldr x1,[x8, #0x3b8]
7101bf8eac  ldr x2,[sp, #0x58]
7101bf8eb0  str x27,[sp, #0x60]
7101bf8eb4  bl 0x71032b5d50
7101bf8eb8  ldr x2,[sp, #0x48]
7101bf8ebc  sub x0,x29,#0xb8
7101bf8ec0  adrp x1,0x71043f0000
7101bf8ec4  add x1,x1,#0x8c7
7101bf8ec8  bl 0x71014c8900
7101bf8ecc  sub x0,x29,#0xd0
7101bf8ed0  sub x1,x29,#0xb8
7101bf8ed4  bl 0x71037a7e90
7101bf8ed8  ldr w8,[x28, #0x130]
7101bf8edc  stur w8,[x29, #-0xd8]
7101bf8ee0  mov x27,x26
7101bf8ee4  stp xzr,xzr,[sp, #0x130]
7101bf8ee8  stp xzr,xzr,[sp, #0x120]
7101bf8eec  stp xzr,xzr,[sp, #0x110]
7101bf8ef0  stp xzr,xzr,[sp, #0x100]
7101bf8ef4  stp xzr,xzr,[sp, #0xf0]
7101bf8ef8  stp xzr,xzr,[sp, #0xe0]
7101bf8efc  stp xzr,xzr,[sp, #0xd0]
7101bf8f00  stp xzr,xzr,[sp, #0xc0]
7101bf8f04  ldr x28,[x27], #0x8
7101bf8f08  ldr x20,[x27]
7101bf8f0c  cmp x20,x28
7101bf8f10  b.eq 0x7101bf8f4c
7101bf8f14  ldur x0,[x20, #-0x10]
7101bf8f18  sub x21,x20,#0x50
7101bf8f1c  cmp x21,x0
7101bf8f20  ccmp x0,#0x0,#0x4,ne
7101bf8f24  b.eq 0x7101bf8f2c
7101bf8f28  bl 0x710392eb40
7101bf8f2c  sturh wzr,[x20, #-0x50]
7101bf8f30  stur x21,[x20, #-0x10]
7101bf8f34  cmp x28,x21
7101bf8f38  stur wzr,[x20, #-0x8]
7101bf8f3c  mov x20,x21
7101bf8f40  b.ne 0x7101bf8f14
7101bf8f44  ldr x24,[x26]
7101bf8f48  b 0x7101bf8f50
7101bf8f4c  mov x24,x28
7101bf8f50  str x28,[x27]
7101bf8f54  ldp x9,x8,[x29, #-0xd0]
7101bf8f58  sub x8,x8,x9
7101bf8f5c  asr x9,x8,#0x4
7101bf8f60  mul x25,x9,x23
7101bf8f64  ldr x9,[sp, #0x60]
7101bf8f68  orr w10,wzr,#0x18
7101bf8f6c  madd x19,x9,x10,x19
7101bf8f70  ldr x9,[x19, #0x10]!
7101bf8f74  sub x9,x9,x24
7101bf8f78  asr x9,x9,#0x4
7101bf8f7c  mul x9,x9,x23
7101bf8f80  cmp x9,x25
7101bf8f84  b.cs 0x7101bf9104
7101bf8f88  orr x9,xzr,#0x3333333333333333
7101bf8f8c  movk x9,#0x333, LSL #48
7101bf8f90  cmp x25,x9
7101bf8f94  b.hi 0x7101bfa2a4
7101bf8f98  cmp x8,#0x0
7101bf8f9c  sub x9,x28,x24
7101bf8fa0  asr x9,x9,#0x4
7101bf8fa4  csinc x20,x8,xzr,ne
7101bf8fa8  mov w0,#0x10
7101bf8fac  mul x21,x9,x23
7101bf8fb0  mov x1,x20
7101bf8fb4  bl 0x710392e290
7101bf8fb8  cbnz x0,0x7101bf8ffc
7101bf8fbc  adrp x8,0x7105332000
7101bf8fc0  ldr x0,[x8, #0xf00]
7101bf8fc4  cbz x0,0x7101bf8ff8
7101bf8fc8  stur wzr,[x29, #-0x70]
7101bf8fcc  str x20,[sp, #0x140]
7101bf8fd0  ldr x8,[x0]
7101bf8fd4  ldr x8,[x8, #0x30]
7101bf8fd8  sub x1,x29,#0x70
7101bf8fdc  add x2,sp,#0x140
7101bf8fe0  blr x8
7101bf8fe4  tbz w0,#0x0,0x7101bf8ff8
7101bf8fe8  mov w0,#0x10
7101bf8fec  mov x1,x20
7101bf8ff0  bl 0x710392e290
7101bf8ff4  cbnz x0,0x7101bf8ffc
7101bf8ff8  mov x0,xzr
7101bf8ffc  mov w8,#0x50
7101bf9000  mov x2,x8
7101bf9004  madd x8,x21,x8,x0
7101bf9008  madd x9,x25,x2,x0
7101bf900c  cmp x28,x24
7101bf9010  b.eq 0x7101bf9ad8
7101bf9014  madd x11,x21,x2,x0
7101bf9018  mov x10,xzr
7101bf901c  sub x12,x24,x28
7101bf9020  add x13,x11,x10
7101bf9024  sub x14,x13,#0x50
7101bf9028  cmp x28,x11
7101bf902c  stur wzr,[x13, #-0x8]
7101bf9030  stur x14,[x13, #-0x10]
7101bf9034  b.eq 0x7101bf9094
7101bf9038  strh wzr,[x14]
7101bf903c  stur x14,[x13, #-0x10]
7101bf9040  add x14,x28,x10
7101bf9044  stur wzr,[x13, #-0x8]
7101bf9048  ldur x16,[x14, #-0x10]
7101bf904c  sub x15,x14,#0x50
7101bf9050  cmp x15,x16
7101bf9054  b.eq 0x7101bf9060
7101bf9058  stur x16,[x13, #-0x10]
7101bf905c  b 0x7101bf9080
7101bf9060  ldp x16,x17,[x14, #-0x50]
7101bf9064  ldp x18,x1,[x14, #-0x40]
7101bf9068  stp x18,x1,[x13, #-0x40]
7101bf906c  stp x16,x17,[x13, #-0x50]
7101bf9070  ldp x16,x17,[x14, #-0x30]
7101bf9074  ldp x18,x1,[x14, #-0x20]
7101bf9078  stp x18,x1,[x13, #-0x20]
7101bf907c  stp x16,x17,[x13, #-0x30]
7101bf9080  ldur w16,[x14, #-0x8]
7101bf9084  stur w16,[x13, #-0x8]
7101bf9088  stur x15,[x14, #-0x10]
7101bf908c  sturh wzr,[x14, #-0x50]
7101bf9090  stur wzr,[x14, #-0x8]
7101bf9094  sub x10,x10,#0x50
7101bf9098  cmp x12,x10
7101bf909c  b.ne 0x7101bf9020
7101bf90a0  mul x11,x21,x2
7101bf90a4  ldr x28,[x26]
7101bf90a8  ldr x20,[x27]
7101bf90ac  cmp x20,x28
7101bf90b0  add x11,x0,x11
7101bf90b4  add x10,x11,x10
7101bf90b8  str x10,[x26]
7101bf90bc  str x8,[x27]
7101bf90c0  str x9,[x19]
7101bf90c4  b.eq 0x7101bf90f8
7101bf90c8  ldur x0,[x20, #-0x10]
7101bf90cc  sub x21,x20,#0x50
7101bf90d0  cmp x21,x0
7101bf90d4  ccmp x0,#0x0,#0x4,ne
7101bf90d8  b.eq 0x7101bf90e0
7101bf90dc  bl 0x710392eb40
7101bf90e0  sturh wzr,[x20, #-0x50]
7101bf90e4  stur x21,[x20, #-0x10]
7101bf90e8  cmp x28,x21
7101bf90ec  stur wzr,[x20, #-0x8]
7101bf90f0  mov x20,x21
7101bf90f4  b.ne 0x7101bf90c8
7101bf90f8  cbz x28,0x7101bf9104
7101bf90fc  mov x0,x28
7101bf9100  bl 0x710392eb40
7101bf9104  ldp x28,x24,[x29, #-0xd0]
7101bf9108  orr x25,xzr,#0x3333333333333333
7101bf910c  movk x25,#0x333, LSL #48
7101bf9110  cmp x28,x24
7101bf9114  b.eq 0x7101bf9470
7101bf9118  ldr x2,[x28, #0x40]
7101bf911c  add x0,sp,#0x140
7101bf9120  mov w1,#0x800
7101bf9124  sub x3,x29,#0xd8
7101bf9128  add x4,sp,#0xc0
7101bf912c  bl 0x71037ab750
7101bf9130  mov w21,w0
7101bf9134  ldr x0,[x28, #0x40]
7101bf9138  cmp x28,x0
7101bf913c  ccmp x0,#0x0,#0x4,ne
7101bf9140  b.eq 0x7101bf9148
7101bf9144  bl 0x710392eb40
7101bf9148  strh wzr,[x28]
7101bf914c  str x28,[x28, #0x40]
7101bf9150  str wzr,[x28, #0x48]
7101bf9154  tbz w21,#0x1f,0x7101bf91c4
7101bf9158  ldrh w10,[sp, #0x140]
7101bf915c  cbz w10,0x7101bf9240
7101bf9160  mov x9,xzr
7101bf9164  mov w8,wzr
7101bf9168  mov w21,wzr
7101bf916c  orr w11,w10,#0x1
7101bf9170  and w11,w11,#0xffff
7101bf9174  cmp w11,#0xf
7101bf9178  b.ne 0x7101bf919c
7101bf917c  and w10,w10,#0xffff
7101bf9180  cmp w10,#0xe
7101bf9184  b.ne 0x7101bf91a4
7101bf9188  add x9,x22,x9, LSL #0x1
7101bf918c  ldrh w9,[x9, #0x6]
7101bf9190  lsr w9,w9,#0x1
7101bf9194  add w10,w9,#0x4
7101bf9198  b 0x7101bf91b0
7101bf919c  mov w10,#0x1
7101bf91a0  b 0x7101bf91b0
7101bf91a4  cmp w10,#0xf
7101bf91a8  orr w9,wzr,#0x3
7101bf91ac  csel w10,w9,wzr,eq
7101bf91b0  add w9,w10,w8
7101bf91b4  add w21,w10,w21
7101bf91b8  mov w8,w9
7101bf91bc  ldrh w10,[x22, w9, UXTW #0x1]
7101bf91c0  cbnz w10,0x7101bf916c
7101bf91c4  cmp w21,#0x20
7101bf91c8  str w21,[x28, #0x48]
7101bf91cc  b.lt 0x7101bf9248
7101bf91d0  add w8,w21,#0x1
7101bf91d4  sxtw x8,w8
7101bf91d8  adds x8,x8,x8
7101bf91dc  csinv x8,x8,xzr,cc
7101bf91e0  cmp x8,#0x0
7101bf91e4  csinc x20,x8,xzr,ne
7101bf91e8  mov w0,#0x10
7101bf91ec  mov x1,x20
7101bf91f0  bl 0x710392e290
7101bf91f4  cbnz x0,0x7101bf9238
7101bf91f8  adrp x8,0x7105332000
7101bf91fc  ldr x0,[x8, #0xf00]
7101bf9200  cbz x0,0x7101bf9234
7101bf9204  stur wzr,[x29, #-0x64]
7101bf9208  stur x20,[x29, #-0x70]
7101bf920c  ldr x8,[x0]
7101bf9210  ldr x8,[x8, #0x30]
7101bf9214  sub x1,x29,#0x64
7101bf9218  sub x2,x29,#0x70
7101bf921c  blr x8
7101bf9220  tbz w0,#0x0,0x7101bf9234
7101bf9224  mov w0,#0x10
7101bf9228  mov x1,x20
7101bf922c  bl 0x710392e290
7101bf9230  cbnz x0,0x7101bf9238
7101bf9234  mov x0,xzr
7101bf9238  str x0,[x28, #0x40]
7101bf923c  b 0x7101bf924c
7101bf9240  mov w21,wzr
7101bf9244  str wzr,[x28, #0x48]
7101bf9248  mov x0,x28
7101bf924c  sbfiz x2,x21,#0x1,#0x20
7101bf9250  add x1,sp,#0x140
7101bf9254  bl 0x71039c00e0
7101bf9258  ldr x8,[x28, #0x40]
7101bf925c  ldrsw x9,[x28, #0x48]
7101bf9260  strh wzr,[x8, x9, LSL #0x1]
7101bf9264  ldr x0,[x27]
7101bf9268  ldr x9,[x19]
7101bf926c  cmp x0,x9
7101bf9270  b.cs 0x7101bf928c
7101bf9274  mov x1,x28
7101bf9278  bl 0x71037a46b0
7101bf927c  ldr x8,[x27]
7101bf9280  add x8,x8,#0x50
7101bf9284  str x8,[x27]
7101bf9288  b 0x7101bf9458
7101bf928c  ldr x10,[x26]
7101bf9290  sub x8,x0,x10
7101bf9294  asr x8,x8,#0x4
7101bf9298  mul x21,x8,x23
7101bf929c  add x8,x21,#0x1
7101bf92a0  cmp x8,x25
7101bf92a4  b.hi 0x7101bfa294
7101bf92a8  sub x9,x9,x10
7101bf92ac  orr x10,xzr,#-0x6666666666666667
7101bf92b0  asr x9,x9,#0x4
7101bf92b4  mul x9,x9,x23
7101bf92b8  movk x10,#0x9998
7101bf92bc  movk x10,#0x199, LSL #48
7101bf92c0  cmp x9,x10
7101bf92c4  b.hi 0x7101bf92d8
7101bf92c8  lsl x9,x9,#0x1
7101bf92cc  cmp x9,x8
7101bf92d0  csel x25,x8,x9,cc
7101bf92d4  cbz x25,0x7101bf9334
7101bf92d8  add x8,x25,x25, LSL #0x2
7101bf92dc  lsl x8,x8,#0x4
7101bf92e0  cmp x8,#0x0
7101bf92e4  csinc x20,x8,xzr,ne
7101bf92e8  mov w0,#0x10
7101bf92ec  mov x1,x20
7101bf92f0  bl 0x710392e290
7101bf92f4  cbnz x0,0x7101bf9338
7101bf92f8  adrp x8,0x7105332000
7101bf92fc  ldr x0,[x8, #0xf00]
7101bf9300  cbz x0,0x7101bf9334
7101bf9304  stur wzr,[x29, #-0x64]
7101bf9308  stur x20,[x29, #-0x70]
7101bf930c  ldr x8,[x0]
7101bf9310  ldr x8,[x8, #0x30]
7101bf9314  sub x1,x29,#0x64
7101bf9318  sub x2,x29,#0x70
7101bf931c  blr x8
7101bf9320  tbz w0,#0x0,0x7101bf9334
7101bf9324  mov w0,#0x10
7101bf9328  mov x1,x20
7101bf932c  bl 0x710392e290
7101bf9330  cbnz x0,0x7101bf9338
7101bf9334  mov x0,xzr
7101bf9338  mov w8,#0x50
7101bf933c  madd x21,x21,x8,x0
7101bf9340  madd x25,x25,x8,x0
7101bf9344  mov x0,x21
7101bf9348  mov x1,x28
7101bf934c  bl 0x71037a46b0
7101bf9350  ldr x20,[x26]
7101bf9354  ldr x10,[x27]
7101bf9358  add x8,x21,#0x50
7101bf935c  cmp x10,x20
7101bf9360  b.eq 0x7101bf93fc
7101bf9364  mov x9,xzr
7101bf9368  sub x11,x20,x10
7101bf936c  add x12,x21,x9
7101bf9370  sub x13,x12,#0x50
7101bf9374  cmp x10,x21
7101bf9378  stur wzr,[x12, #-0x8]
7101bf937c  stur x13,[x12, #-0x10]
7101bf9380  b.eq 0x7101bf93e0
7101bf9384  strh wzr,[x13]
7101bf9388  stur x13,[x12, #-0x10]
7101bf938c  add x13,x10,x9
7101bf9390  stur wzr,[x12, #-0x8]
7101bf9394  ldur x15,[x13, #-0x10]
7101bf9398  sub x14,x13,#0x50
7101bf939c  cmp x14,x15
7101bf93a0  b.eq 0x7101bf93ac
7101bf93a4  stur x15,[x12, #-0x10]
7101bf93a8  b 0x7101bf93cc
7101bf93ac  ldp x15,x16,[x13, #-0x50]
7101bf93b0  ldp x17,x18,[x13, #-0x40]
7101bf93b4  stp x17,x18,[x12, #-0x40]
7101bf93b8  stp x15,x16,[x12, #-0x50]
7101bf93bc  ldp x15,x16,[x13, #-0x30]
7101bf93c0  ldp x17,x18,[x13, #-0x20]
7101bf93c4  stp x17,x18,[x12, #-0x20]
7101bf93c8  stp x15,x16,[x12, #-0x30]
7101bf93cc  ldur w15,[x13, #-0x8]
7101bf93d0  stur w15,[x12, #-0x8]
7101bf93d4  stur x14,[x13, #-0x10]
7101bf93d8  sturh wzr,[x13, #-0x50]
7101bf93dc  stur wzr,[x13, #-0x8]
7101bf93e0  sub x9,x9,#0x50
7101bf93e4  cmp x11,x9
7101bf93e8  b.ne 0x7101bf936c
7101bf93ec  ldr x23,[x26]
7101bf93f0  ldr x20,[x27]
7101bf93f4  add x21,x21,x9
7101bf93f8  b 0x7101bf9400
7101bf93fc  mov x23,x20
7101bf9400  str x21,[x26]
7101bf9404  str x8,[x27]
7101bf9408  cmp x20,x23
7101bf940c  str x25,[x19]
7101bf9410  orr x25,xzr,#0x3333333333333333
7101bf9414  movk x25,#0x333, LSL #48
7101bf9418  b.eq 0x7101bf944c
7101bf941c  ldur x0,[x20, #-0x10]
7101bf9420  sub x21,x20,#0x50
7101bf9424  cmp x21,x0
7101bf9428  ccmp x0,#0x0,#0x4,ne
7101bf942c  b.eq 0x7101bf9434
7101bf9430  bl 0x710392eb40
7101bf9434  sturh wzr,[x20, #-0x50]
7101bf9438  stur x21,[x20, #-0x10]
7101bf943c  cmp x23,x21
7101bf9440  stur wzr,[x20, #-0x8]
7101bf9444  mov x20,x21
7101bf9448  b.ne 0x7101bf941c
7101bf944c  cbz x23,0x7101bf9458
7101bf9450  mov x0,x23
7101bf9454  bl 0x710392eb40
7101bf9458  add x28,x28,#0x50
7101bf945c  orr x23,xzr,#-0x3333333333333334
7101bf9460  cmp x28,x24
7101bf9464  movk x23,#0xcccd
7101bf9468  b.ne 0x7101bf9118
7101bf946c  ldur x28,[x29, #-0xd0]
7101bf9470  cbz x28,0x7101bf94c0
7101bf9474  ldur x19,[x29, #-0xc8]
7101bf9478  cmp x19,x28
7101bf947c  b.eq 0x7101bf9ac8
7101bf9480  ldur x0,[x19, #-0x10]
7101bf9484  sub x20,x19,#0x50
7101bf9488  cmp x20,x0
7101bf948c  ccmp x0,#0x0,#0x4,ne
7101bf9490  b.eq 0x7101bf9498
7101bf9494  bl 0x710392eb40
7101bf9498  sturh wzr,[x19, #-0x50]
7101bf949c  stur x20,[x19, #-0x10]
7101bf94a0  cmp x28,x20
7101bf94a4  stur wzr,[x19, #-0x8]
7101bf94a8  mov x19,x20
7101bf94ac  b.ne 0x7101bf9480
7101bf94b0  ldur x0,[x29, #-0xd0]
7101bf94b4  stur x28,[x29, #-0xc8]
7101bf94b8  cbz x0,0x7101bf94c0
7101bf94bc  bl 0x710392eb40
7101bf94c0  ldr x19,[x26]
7101bf94c4  ldr x20,[x27]
7101bf94c8  cmp x19,x20
7101bf94cc  b.eq 0x7101bf94ec
7101bf94d0  ldr x21,[sp, #0xa8]
7101bf94d4  ldr x1,[x19, #0x40]
7101bf94d8  ldr x0,[x21, #0x10]
7101bf94dc  bl 0x710377a960
7101bf94e0  add x19,x19,#0x50
7101bf94e4  cmp x20,x19
7101bf94e8  b.ne 0x7101bf94d4
7101bf94ec  adrp x8,0x710523d000
7101bf94f0  add x8,x8,#0xa08
7101bf94f4  mov w0,#0x10
7101bf94f8  mov w1,#0x10
7101bf94fc  str wzr,[sp, #0x140]
7101bf9500  str x8,[sp, #0x148]
7101bf9504  bl 0x710392e290
7101bf9508  ldr x28,[sp, #0x50]
7101bf950c  cbnz x0,0x7101bf9554
7101bf9510  adrp x8,0x7105332000
7101bf9514  ldr x0,[x8, #0xf00]
7101bf9518  cbz x0,0x7101bf9550
7101bf951c  mov w8,#0x10
7101bf9520  stur wzr,[x29, #-0xb8]
7101bf9524  sub x1,x29,#0xb8
7101bf9528  str x8,[sp, #0xc0]
7101bf952c  ldr x8,[x0]
7101bf9530  ldr x8,[x8, #0x30]
7101bf9534  add x2,sp,#0xc0
7101bf9538  blr x8
7101bf953c  tbz w0,#0x0,0x7101bf9550
7101bf9540  mov w0,#0x10
7101bf9544  mov w1,#0x10
7101bf9548  bl 0x710392e290
7101bf954c  cbnz x0,0x7101bf9554
7101bf9550  mov x0,xzr
7101bf9554  adrp x8,0x710523d000
7101bf9558  add x8,x8,#0xa08
7101bf955c  mov w1,#0x10
7101bf9560  stp xzr,xzr,[x0]
7101bf9564  stp x0,x8,[sp, #0x150]
7101bf9568  mov w0,#0x10
7101bf956c  bl 0x710392e290
7101bf9570  cbnz x0,0x7101bf95b8
7101bf9574  adrp x8,0x7105332000
7101bf9578  ldr x0,[x8, #0xf00]
7101bf957c  cbz x0,0x7101bf95b4
7101bf9580  mov w8,#0x10
7101bf9584  stur wzr,[x29, #-0xb8]
7101bf9588  sub x1,x29,#0xb8
7101bf958c  str x8,[sp, #0xc0]
7101bf9590  ldr x8,[x0]
7101bf9594  ldr x8,[x8, #0x30]
7101bf9598  add x2,sp,#0xc0
7101bf959c  blr x8
7101bf95a0  tbz w0,#0x0,0x7101bf95b4
7101bf95a4  mov w0,#0x10
7101bf95a8  mov w1,#0x10
7101bf95ac  bl 0x710392e290
7101bf95b0  cbnz x0,0x7101bf95b8
7101bf95b4  mov x0,xzr
7101bf95b8  stp xzr,xzr,[x0]
7101bf95bc  ldr x23,[sp, #0x68]
7101bf95c0  str x0,[sp, #0x160]
7101bf95c4  ldr x24,[sp, #0x58]
7101bf95c8  ldr x0,[x23, #0x3b8]
7101bf95cc  mov x1,x24
7101bf95d0  bl 0x71032b5800
7101bf95d4  mov x20,x0
7101bf95d8  ldr x0,[x23, #0x3b8]
7101bf95dc  mov x1,x24
7101bf95e0  bl 0x71032b6340
7101bf95e4  mov x21,x0
7101bf95e8  ldr x0,[x23, #0x3b8]
7101bf95ec  mov x1,x24
7101bf95f0  and x19,x20,#0xffffffffff
7101bf95f4  bl 0x71032b65e0
7101bf95f8  mov w27,wzr
7101bf95fc  str wzr,[sp, #0x140]
7101bf9600  cbz x19,0x7101bf9760
7101bf9604  and x8,x20,#-0x100000000000000
7101bf9608  mov x9,#-0x3f00000000000000
7101bf960c  orr x23,xzr,#-0x3333333333333334
7101bf9610  cmp x8,x9
7101bf9614  movk x23,#0xcccd
7101bf9618  b.ne 0x7101bf9768
7101bf961c  mov w26,w0
7101bf9620  ldr x0,[sp, #0x30]
7101bf9624  mov w3,#0x2
7101bf9628  mov x1,x20
7101bf962c  mov w2,wzr
7101bf9630  and x19,x21,#0xffffffffff
7101bf9634  bl 0x710323f330
7101bf9638  ldr x8,[sp, #0x48]
7101bf963c  cmp x8,x0
7101bf9640  b.eq 0x7101bf96a4
7101bf9644  ldr x9,[x0, #0x8]
7101bf9648  ldr x8,[sp, #0x150]
7101bf964c  ldp x10,x9,[x9]
7101bf9650  cbz x9,0x7101bf9668
7101bf9654  add x11,x9,#0x8
7101bf9658  ldxr x12,[x11]
7101bf965c  add x12,x12,#0x1
7101bf9660  stxr w13,x12,[x11]
7101bf9664  cbnz w13,0x7101bf9658
7101bf9668  ldr x20,[x8, #0x8]
7101bf966c  stp x10,x9,[x8]
7101bf9670  cbz x20,0x7101bf96a4
7101bf9674  add x8,x20,#0x8
7101bf9678  ldaxr x9,[x8]
7101bf967c  sub x10,x9,#0x1
7101bf9680  stlxr w11,x10,[x8]
7101bf9684  cbnz w11,0x7101bf9678
7101bf9688  cbnz x9,0x7101bf96a4
7101bf968c  ldr x8,[x20]
7101bf9690  ldr x8,[x8, #0x10]
7101bf9694  mov x0,x20
7101bf9698  blr x8
7101bf969c  mov x0,x20
7101bf96a0  bl 0x71039c2670
7101bf96a4  ldr w8,[sp, #0x140]
7101bf96a8  add w27,w8,#0x1
7101bf96ac  str w27,[sp, #0x140]
7101bf96b0  cbz x19,0x7101bf9768
7101bf96b4  and x8,x21,#-0x100000000000000
7101bf96b8  mov x9,#-0x3f00000000000000
7101bf96bc  cmp x8,x9
7101bf96c0  b.ne 0x7101bf9768
7101bf96c4  ldr x0,[sp, #0x30]
7101bf96c8  mov w3,#0x2
7101bf96cc  mov x1,x21
7101bf96d0  mov w2,wzr
7101bf96d4  bl 0x710323f330
7101bf96d8  ldr x8,[sp, #0x28]
7101bf96dc  cmp x8,x0
7101bf96e0  b.eq 0x7101bf9744
7101bf96e4  ldr x9,[x0, #0x8]
7101bf96e8  ldr x8,[sp, #0x160]
7101bf96ec  ldp x10,x9,[x9]
7101bf96f0  cbz x9,0x7101bf9708
7101bf96f4  add x11,x9,#0x8
7101bf96f8  ldxr x12,[x11]
7101bf96fc  add x12,x12,#0x1
7101bf9700  stxr w13,x12,[x11]
7101bf9704  cbnz w13,0x7101bf96f8
7101bf9708  ldr x20,[x8, #0x8]
7101bf970c  stp x10,x9,[x8]
7101bf9710  cbz x20,0x7101bf9744
7101bf9714  add x8,x20,#0x8
7101bf9718  ldaxr x9,[x8]
7101bf971c  sub x10,x9,#0x1
7101bf9720  stlxr w11,x10,[x8]
7101bf9724  cbnz w11,0x7101bf9718
7101bf9728  cbnz x9,0x7101bf9744
7101bf972c  ldr x8,[x20]
7101bf9730  ldr x8,[x8, #0x10]
7101bf9734  mov x0,x20
7101bf9738  blr x8
7101bf973c  mov x0,x20
7101bf9740  bl 0x71039c2670
7101bf9744  ldr w8,[sp, #0x140]
7101bf9748  add w27,w8,#0x1
7101bf974c  str w27,[sp, #0x140]
7101bf9750  tbz w26,#0x0,0x7101bf9768
7101bf9754  add w27,w8,#0x2
7101bf9758  str w27,[sp, #0x140]
7101bf975c  b 0x7101bf9768
7101bf9760  orr x23,xzr,#-0x3333333333333334
7101bf9764  movk x23,#0xcccd
7101bf9768  ldr x19,[x28, #0x4c0]
7101bf976c  ldr x9,[x28, #0x4c8]
7101bf9770  cmp x19,x9
7101bf9774  b.cs 0x7101bf9920
7101bf9778  adrp x25,0x710523d000
7101bf977c  add x25,x25,#0xa08
7101bf9780  mov w0,#0x10
7101bf9784  mov w1,#0x10
7101bf9788  str w27,[x19]
7101bf978c  str x25,[x19, #0x8]
7101bf9790  bl 0x710392e290
7101bf9794  cbnz x0,0x7101bf97dc
7101bf9798  adrp x8,0x7105332000
7101bf979c  ldr x0,[x8, #0xf00]
7101bf97a0  cbz x0,0x7101bf97d8
7101bf97a4  mov w8,#0x10
7101bf97a8  stur wzr,[x29, #-0xb8]
7101bf97ac  sub x1,x29,#0xb8
7101bf97b0  str x8,[sp, #0xc0]
7101bf97b4  ldr x8,[x0]
7101bf97b8  ldr x8,[x8, #0x30]
7101bf97bc  add x2,sp,#0xc0
7101bf97c0  blr x8
7101bf97c4  tbz w0,#0x0,0x7101bf97d8
7101bf97c8  mov w0,#0x10
7101bf97cc  mov w1,#0x10
7101bf97d0  bl 0x710392e290
7101bf97d4  cbnz x0,0x7101bf97dc
7101bf97d8  mov x0,xzr
7101bf97dc  stp xzr,xzr,[x0]
7101bf97e0  ldr x27,[sp, #0x60]
7101bf97e4  cmp x19,x22
7101bf97e8  str x0,[x19, #0x10]
7101bf97ec  b.eq 0x7101bf984c
7101bf97f0  ldr x8,[sp, #0x150]
7101bf97f4  ldp x9,x8,[x8]
7101bf97f8  cbz x8,0x7101bf9810
7101bf97fc  add x10,x8,#0x8
7101bf9800  ldxr x11,[x10]
7101bf9804  add x11,x11,#0x1
7101bf9808  stxr w12,x11,[x10]
7101bf980c  cbnz w12,0x7101bf9800
7101bf9810  ldr x20,[x0, #0x8]
7101bf9814  stp x9,x8,[x0]
7101bf9818  cbz x20,0x7101bf984c
7101bf981c  add x8,x20,#0x8
7101bf9820  ldaxr x9,[x8]
7101bf9824  sub x10,x9,#0x1
7101bf9828  stlxr w11,x10,[x8]
7101bf982c  cbnz w11,0x7101bf9820
7101bf9830  cbnz x9,0x7101bf984c
7101bf9834  ldr x8,[x20]
7101bf9838  ldr x8,[x8, #0x10]
7101bf983c  mov x0,x20
7101bf9840  blr x8
7101bf9844  mov x0,x20
7101bf9848  bl 0x71039c2670
7101bf984c  mov w0,#0x10
7101bf9850  mov w1,#0x10
7101bf9854  str x25,[x19, #0x18]
7101bf9858  bl 0x710392e290
7101bf985c  cbnz x0,0x7101bf98a4
7101bf9860  adrp x8,0x7105332000
7101bf9864  ldr x0,[x8, #0xf00]
7101bf9868  cbz x0,0x7101bf98a0
7101bf986c  mov w8,#0x10
7101bf9870  stur wzr,[x29, #-0xb8]
7101bf9874  sub x1,x29,#0xb8
7101bf9878  str x8,[sp, #0xc0]
7101bf987c  ldr x8,[x0]
7101bf9880  ldr x8,[x8, #0x30]
7101bf9884  add x2,sp,#0xc0
7101bf9888  blr x8
7101bf988c  tbz w0,#0x0,0x7101bf98a0
7101bf9890  mov w0,#0x10
7101bf9894  mov w1,#0x10
7101bf9898  bl 0x710392e290
7101bf989c  cbnz x0,0x7101bf98a4
7101bf98a0  mov x0,xzr
7101bf98a4  cmp x19,x22
7101bf98a8  stp xzr,xzr,[x0]
7101bf98ac  str x0,[x19, #0x20]
7101bf98b0  b.eq 0x7101bf9910
7101bf98b4  ldr x8,[sp, #0x160]
7101bf98b8  ldp x9,x8,[x8]
7101bf98bc  cbz x8,0x7101bf98d4
7101bf98c0  add x10,x8,#0x8
7101bf98c4  ldxr x11,[x10]
7101bf98c8  add x11,x11,#0x1
7101bf98cc  stxr w12,x11,[x10]
7101bf98d0  cbnz w12,0x7101bf98c4
7101bf98d4  ldr x20,[x0, #0x8]
7101bf98d8  stp x9,x8,[x0]
7101bf98dc  cbz x20,0x7101bf9910
7101bf98e0  add x8,x20,#0x8
7101bf98e4  ldaxr x9,[x8]
7101bf98e8  sub x10,x9,#0x1
7101bf98ec  stlxr w11,x10,[x8]
7101bf98f0  cbnz w11,0x7101bf98e4
7101bf98f4  cbnz x9,0x7101bf9910
7101bf98f8  ldr x8,[x20]
7101bf98fc  ldr x8,[x8, #0x10]
7101bf9900  mov x0,x20
7101bf9904  blr x8
7101bf9908  mov x0,x20
7101bf990c  bl 0x71039c2670
7101bf9910  ldr x8,[x28, #0x4c0]
7101bf9914  add x8,x8,#0x28
7101bf9918  str x8,[x28, #0x4c0]
7101bf991c  b 0x7101bf9da8
7101bf9920  ldr x8,[sp, #0x18]
7101bf9924  ldr x10,[x8]
7101bf9928  sub x8,x19,x10
7101bf992c  orr x19,xzr,#0x6666666666666666
7101bf9930  asr x8,x8,#0x3
7101bf9934  mul x24,x8,x23
7101bf9938  add x8,x24,#0x1
7101bf993c  movk x19,#0x666, LSL #48
7101bf9940  cmp x8,x19
7101bf9944  b.hi 0x7101bfa2b0
7101bf9948  sub x9,x9,x10
7101bf994c  asr x9,x9,#0x3
7101bf9950  mul x9,x9,x23
7101bf9954  cmp x9,x25
7101bf9958  b.cs 0x7101bf996c
7101bf995c  lsl x9,x9,#0x1
7101bf9960  cmp x9,x8
7101bf9964  csel x19,x8,x9,cc
7101bf9968  cbz x19,0x7101bf99d0
7101bf996c  add x8,x19,x19, LSL #0x2
7101bf9970  lsl x8,x8,#0x3
7101bf9974  cmp x8,#0x0
7101bf9978  csinc x20,x8,xzr,ne
7101bf997c  mov w0,#0x10
7101bf9980  mov x1,x20
7101bf9984  bl 0x710392e290
7101bf9988  mov x26,x0
7101bf998c  cbnz x0,0x7101bf99d4
7101bf9990  adrp x8,0x7105332000
7101bf9994  ldr x0,[x8, #0xf00]
7101bf9998  cbz x0,0x7101bf99d0
7101bf999c  stur wzr,[x29, #-0xb8]
7101bf99a0  str x20,[sp, #0xc0]
7101bf99a4  ldr x8,[x0]
7101bf99a8  ldr x8,[x8, #0x30]
7101bf99ac  sub x1,x29,#0xb8
7101bf99b0  add x2,sp,#0xc0
7101bf99b4  blr x8
7101bf99b8  tbz w0,#0x0,0x7101bf99d0
7101bf99bc  mov w0,#0x10
7101bf99c0  mov x1,x20
7101bf99c4  bl 0x710392e290
7101bf99c8  mov x26,x0
7101bf99cc  cbnz x0,0x7101bf99d4
7101bf99d0  mov x26,xzr
7101bf99d4  mov w8,#0x28
7101bf99d8  madd x21,x24,x8,x26
7101bf99dc  adrp x8,0x710523d000
7101bf99e0  add x8,x8,#0xa08
7101bf99e4  mov x20,x21
7101bf99e8  mov x25,x21
7101bf99ec  mov w0,#0x10
7101bf99f0  mov w1,#0x10
7101bf99f4  str w27,[x20], #0x10
7101bf99f8  str x8,[x25, #0x8]!
7101bf99fc  bl 0x710392e290
7101bf9a00  cbnz x0,0x7101bf9a48
7101bf9a04  adrp x8,0x7105332000
7101bf9a08  ldr x0,[x8, #0xf00]
7101bf9a0c  cbz x0,0x7101bf9a44
7101bf9a10  mov w8,#0x10
7101bf9a14  stur wzr,[x29, #-0xb8]
7101bf9a18  sub x1,x29,#0xb8
7101bf9a1c  str x8,[sp, #0xc0]
7101bf9a20  ldr x8,[x0]
7101bf9a24  ldr x8,[x8, #0x30]
7101bf9a28  add x2,sp,#0xc0
7101bf9a2c  blr x8
7101bf9a30  tbz w0,#0x0,0x7101bf9a44
7101bf9a34  mov w0,#0x10
7101bf9a38  mov w1,#0x10
7101bf9a3c  bl 0x710392e290
7101bf9a40  cbnz x0,0x7101bf9a48
7101bf9a44  mov x0,xzr
7101bf9a48  stp xzr,xzr,[x0]
7101bf9a4c  ldr x8,[sp, #0x48]
7101bf9a50  ldr x27,[sp, #0x60]
7101bf9a54  cmp x25,x8
7101bf9a58  adrp x25,0x710523d000
7101bf9a5c  add x25,x25,#0xa08
7101bf9a60  str x0,[x20]
7101bf9a64  b.eq 0x7101bf9af0
7101bf9a68  ldr x8,[sp, #0x150]
7101bf9a6c  ldp x9,x8,[x8]
7101bf9a70  cbz x8,0x7101bf9aec
7101bf9a74  add x10,x8,#0x8
7101bf9a78  ldxr x11,[x10]
7101bf9a7c  add x11,x11,#0x1
7101bf9a80  stxr w12,x11,[x10]
7101bf9a84  cbnz w12,0x7101bf9a78
7101bf9a88  ldr x20,[x0, #0x8]
7101bf9a8c  stp x9,x8,[x0]
7101bf9a90  cbz x20,0x7101bf9af0
7101bf9a94  add x8,x20,#0x8
7101bf9a98  ldaxr x9,[x8]
7101bf9a9c  sub x10,x9,#0x1
7101bf9aa0  stlxr w11,x10,[x8]
7101bf9aa4  cbnz w11,0x7101bf9a98
7101bf9aa8  cbnz x9,0x7101bf9af0
7101bf9aac  ldr x8,[x20]
7101bf9ab0  ldr x8,[x8, #0x10]
7101bf9ab4  mov x0,x20
7101bf9ab8  blr x8
7101bf9abc  mov x0,x20
7101bf9ac0  bl 0x71039c2670
7101bf9ac4  b 0x7101bf9af0
7101bf9ac8  mov x0,x28
7101bf9acc  stur x28,[x29, #-0xc8]
7101bf9ad0  cbnz x0,0x7101bf94bc
7101bf9ad4  b 0x7101bf94c0
7101bf9ad8  str x8,[x26]
7101bf9adc  str x8,[x27]
7101bf9ae0  str x9,[x19]
7101bf9ae4  cbnz x28,0x7101bf90fc
7101bf9ae8  b 0x7101bf9104
7101bf9aec  stp x9,x8,[x0]
7101bf9af0  mov w8,#0x28
7101bf9af4  mul x8,x24,x8
7101bf9af8  add x20,x26,x8
7101bf9afc  str x25,[x20, #0x18]!
7101bf9b00  mov w0,#0x10
7101bf9b04  mov w1,#0x10
7101bf9b08  add x24,x20,#0x8
7101bf9b0c  bl 0x710392e290
7101bf9b10  cbnz x0,0x7101bf9b58
7101bf9b14  adrp x8,0x7105332000
7101bf9b18  ldr x0,[x8, #0xf00]
7101bf9b1c  cbz x0,0x7101bf9b54
7101bf9b20  mov w8,#0x10
7101bf9b24  stur wzr,[x29, #-0xb8]
7101bf9b28  sub x1,x29,#0xb8
7101bf9b2c  str x8,[sp, #0xc0]
7101bf9b30  ldr x8,[x0]
7101bf9b34  ldr x8,[x8, #0x30]
7101bf9b38  add x2,sp,#0xc0
7101bf9b3c  blr x8
7101bf9b40  tbz w0,#0x0,0x7101bf9b54
7101bf9b44  mov w0,#0x10
7101bf9b48  mov w1,#0x10
7101bf9b4c  bl 0x710392e290
7101bf9b50  cbnz x0,0x7101bf9b58
7101bf9b54  mov x0,xzr
7101bf9b58  stp xzr,xzr,[x0]
7101bf9b5c  ldr x8,[sp, #0x28]
7101bf9b60  cmp x20,x8
7101bf9b64  str x0,[x24]
7101bf9b68  b.eq 0x7101bf9bd0
7101bf9b6c  ldr x8,[sp, #0x160]
7101bf9b70  ldp x9,x8,[x8]
7101bf9b74  cbz x8,0x7101bf9bcc
7101bf9b78  add x10,x8,#0x8
7101bf9b7c  ldxr x11,[x10]
7101bf9b80  add x11,x11,#0x1
7101bf9b84  stxr w12,x11,[x10]
7101bf9b88  cbnz w12,0x7101bf9b7c
7101bf9b8c  ldr x20,[x0, #0x8]
7101bf9b90  stp x9,x8,[x0]
7101bf9b94  cbz x20,0x7101bf9bd0
7101bf9b98  add x8,x20,#0x8
7101bf9b9c  ldaxr x9,[x8]
7101bf9ba0  sub x10,x9,#0x1
7101bf9ba4  stlxr w11,x10,[x8]
7101bf9ba8  cbnz w11,0x7101bf9b9c
7101bf9bac  cbnz x9,0x7101bf9bd0
7101bf9bb0  ldr x8,[x20]
7101bf9bb4  ldr x8,[x8, #0x10]
7101bf9bb8  mov x0,x20
7101bf9bbc  blr x8
7101bf9bc0  mov x0,x20
7101bf9bc4  bl 0x71039c2670
7101bf9bc8  b 0x7101bf9bd0
7101bf9bcc  stp x9,x8,[x0]
7101bf9bd0  mov w8,#0x28
7101bf9bd4  madd x20,x19,x8,x26
7101bf9bd8  ldr x19,[x28, #0x4b8]
7101bf9bdc  ldr x25,[x28, #0x4c0]
7101bf9be0  add x24,x21,#0x28
7101bf9be4  cmp x25,x19
7101bf9be8  b.eq 0x7101bf9c44
7101bf9bec  mov x23,xzr
7101bf9bf0  sub x19,x19,x25
7101bf9bf4  add x27,x25,x23
7101bf9bf8  ldur w8,[x27, #-0x28]
7101bf9bfc  add x26,x21,x23
7101bf9c00  sub x0,x26,#0x20
7101bf9c04  sub x1,x27,#0x20
7101bf9c08  stur w8,[x26, #-0x28]
7101bf9c0c  bl 0x710377b3d0
7101bf9c10  sub x0,x26,#0x10
7101bf9c14  sub x1,x27,#0x10
7101bf9c18  bl 0x710377b3d0
7101bf9c1c  sub x23,x23,#0x28
7101bf9c20  cmp x19,x23
7101bf9c24  b.ne 0x7101bf9bf4
7101bf9c28  ldr x26,[x28, #0x4b8]
7101bf9c2c  ldr x19,[x28, #0x4c0]
7101bf9c30  add x21,x21,x23
7101bf9c34  ldr x27,[sp, #0x60]
7101bf9c38  orr x23,xzr,#-0x3333333333333334
7101bf9c3c  movk x23,#0xcccd
7101bf9c40  b 0x7101bf9c48
7101bf9c44  mov x26,x19
7101bf9c48  cmp x19,x26
7101bf9c4c  adrp x25,0x710523d000
7101bf9c50  add x25,x25,#0xa08
7101bf9c54  str x21,[x28, #0x4b8]
7101bf9c58  str x24,[x28, #0x4c0]
7101bf9c5c  str x20,[x28, #0x4c8]
7101bf9c60  b.eq 0x7101bf9d9c
7101bf9c64  ldur x21,[x19, #-0x8]
7101bf9c68  stp x25,xzr,[x19, #-0x10]
7101bf9c6c  cbz x21,0x7101bf9cf8
7101bf9c70  ldr x20,[x21, #0x8]
7101bf9c74  stp xzr,xzr,[x21]
7101bf9c78  cbz x20,0x7101bf9cf0
7101bf9c7c  add x8,x20,#0x8
7101bf9c80  ldaxr x9,[x8]
7101bf9c84  sub x10,x9,#0x1
7101bf9c88  stlxr w11,x10,[x8]
7101bf9c8c  cbnz w11,0x7101bf9c80
7101bf9c90  cbz x9,0x7101bf9ca0
7101bf9c94  ldr x20,[x21, #0x8]
7101bf9c98  cbnz x20,0x7101bf9cc0
7101bf9c9c  b 0x7101bf9cf0
7101bf9ca0  ldr x8,[x20]
7101bf9ca4  ldr x8,[x8, #0x10]
7101bf9ca8  mov x0,x20
7101bf9cac  blr x8
7101bf9cb0  mov x0,x20
7101bf9cb4  bl 0x71039c2670
7101bf9cb8  ldr x20,[x21, #0x8]
7101bf9cbc  cbz x20,0x7101bf9cf0
7101bf9cc0  add x8,x20,#0x8
7101bf9cc4  ldaxr x9,[x8]
7101bf9cc8  sub x10,x9,#0x1
7101bf9ccc  stlxr w11,x10,[x8]
7101bf9cd0  cbnz w11,0x7101bf9cc4
7101bf9cd4  cbnz x9,0x7101bf9cf0
7101bf9cd8  ldr x8,[x20]
7101bf9cdc  ldr x8,[x8, #0x10]
7101bf9ce0  mov x0,x20
7101bf9ce4  blr x8
7101bf9ce8  mov x0,x20
7101bf9cec  bl 0x71039c2670
7101bf9cf0  mov x0,x21
7101bf9cf4  bl 0x710392eb40
7101bf9cf8  ldur x21,[x19, #-0x18]
7101bf9cfc  sub x24,x19,#0x28
7101bf9d00  stp x25,xzr,[x19, #-0x20]
7101bf9d04  cbz x21,0x7101bf9d90
7101bf9d08  ldr x20,[x21, #0x8]
7101bf9d0c  stp xzr,xzr,[x21]
7101bf9d10  cbz x20,0x7101bf9d88
7101bf9d14  add x8,x20,#0x8
7101bf9d18  ldaxr x9,[x8]
7101bf9d1c  sub x10,x9,#0x1
7101bf9d20  stlxr w11,x10,[x8]
7101bf9d24  cbnz w11,0x7101bf9d18
7101bf9d28  cbz x9,0x7101bf9d38
7101bf9d2c  ldr x20,[x21, #0x8]
7101bf9d30  cbnz x20,0x7101bf9d58
7101bf9d34  b 0x7101bf9d88
7101bf9d38  ldr x8,[x20]
7101bf9d3c  ldr x8,[x8, #0x10]
7101bf9d40  mov x0,x20
7101bf9d44  blr x8
7101bf9d48  mov x0,x20
7101bf9d4c  bl 0x71039c2670
7101bf9d50  ldr x20,[x21, #0x8]
7101bf9d54  cbz x20,0x7101bf9d88
7101bf9d58  add x8,x20,#0x8
7101bf9d5c  ldaxr x9,[x8]
7101bf9d60  sub x10,x9,#0x1
7101bf9d64  stlxr w11,x10,[x8]
7101bf9d68  cbnz w11,0x7101bf9d5c
7101bf9d6c  cbnz x9,0x7101bf9d88
7101bf9d70  ldr x8,[x20]
7101bf9d74  ldr x8,[x8, #0x10]
7101bf9d78  mov x0,x20
7101bf9d7c  blr x8
7101bf9d80  mov x0,x20
7101bf9d84  bl 0x71039c2670
7101bf9d88  mov x0,x21
7101bf9d8c  bl 0x710392eb40
7101bf9d90  cmp x24,x26
7101bf9d94  mov x19,x24
7101bf9d98  b.ne 0x7101bf9c64
7101bf9d9c  cbz x26,0x7101bf9da8
7101bf9da0  mov x0,x26
7101bf9da4  bl 0x710392eb40
7101bf9da8  ldr x21,[sp, #0x160]
7101bf9dac  ldr x19,[sp, #0x38]
7101bf9db0  orr x26,xzr,#-0x5555555555555556
7101bf9db4  movk x26,#0xaaab
7101bf9db8  stp x25,xzr,[sp, #0x158]
7101bf9dbc  cbz x21,0x7101bf9e48
7101bf9dc0  ldr x20,[x21, #0x8]
7101bf9dc4  stp xzr,xzr,[x21]
7101bf9dc8  cbz x20,0x7101bf9e40
7101bf9dcc  add x8,x20,#0x8
7101bf9dd0  ldaxr x9,[x8]
7101bf9dd4  sub x10,x9,#0x1
7101bf9dd8  stlxr w11,x10,[x8]
7101bf9ddc  cbnz w11,0x7101bf9dd0
7101bf9de0  cbz x9,0x7101bf9df0
7101bf9de4  ldr x20,[x21, #0x8]
7101bf9de8  cbnz x20,0x7101bf9e10
7101bf9dec  b 0x7101bf9e40
7101bf9df0  ldr x8,[x20]
7101bf9df4  ldr x8,[x8, #0x10]
7101bf9df8  mov x0,x20
7101bf9dfc  blr x8
7101bf9e00  mov x0,x20
7101bf9e04  bl 0x71039c2670
7101bf9e08  ldr x20,[x21, #0x8]
7101bf9e0c  cbz x20,0x7101bf9e40
7101bf9e10  add x8,x20,#0x8
7101bf9e14  ldaxr x9,[x8]
7101bf9e18  sub x10,x9,#0x1
7101bf9e1c  stlxr w11,x10,[x8]
7101bf9e20  cbnz w11,0x7101bf9e14
7101bf9e24  cbnz x9,0x7101bf9e40
7101bf9e28  ldr x8,[x20]
7101bf9e2c  ldr x8,[x8, #0x10]
7101bf9e30  mov x0,x20
7101bf9e34  blr x8
7101bf9e38  mov x0,x20
7101bf9e3c  bl 0x71039c2670
7101bf9e40  mov x0,x21
7101bf9e44  bl 0x710392eb40
7101bf9e48  ldr x21,[sp, #0x150]
7101bf9e4c  stp x25,xzr,[sp, #0x148]
7101bf9e50  cbz x21,0x7101bf9edc
7101bf9e54  ldr x20,[x21, #0x8]
7101bf9e58  stp xzr,xzr,[x21]
7101bf9e5c  cbz x20,0x7101bf9ed4
7101bf9e60  add x8,x20,#0x8
7101bf9e64  ldaxr x9,[x8]
7101bf9e68  sub x10,x9,#0x1
7101bf9e6c  stlxr w11,x10,[x8]
7101bf9e70  cbnz w11,0x7101bf9e64
7101bf9e74  cbz x9,0x7101bf9e84
7101bf9e78  ldr x20,[x21, #0x8]
7101bf9e7c  cbnz x20,0x7101bf9ea4
7101bf9e80  b 0x7101bf9ed4
7101bf9e84  ldr x8,[x20]
7101bf9e88  ldr x8,[x8, #0x10]
7101bf9e8c  mov x0,x20
7101bf9e90  blr x8
7101bf9e94  mov x0,x20
7101bf9e98  bl 0x71039c2670
7101bf9e9c  ldr x20,[x21, #0x8]
7101bf9ea0  cbz x20,0x7101bf9ed4
7101bf9ea4  add x8,x20,#0x8
7101bf9ea8  ldaxr x9,[x8]
7101bf9eac  sub x10,x9,#0x1
7101bf9eb0  stlxr w11,x10,[x8]
7101bf9eb4  cbnz w11,0x7101bf9ea8
7101bf9eb8  cbnz x9,0x7101bf9ed4
7101bf9ebc  ldr x8,[x20]
7101bf9ec0  ldr x8,[x8, #0x10]
7101bf9ec4  mov x0,x20
7101bf9ec8  blr x8
7101bf9ecc  mov x0,x20
7101bf9ed0  bl 0x71039c2670
7101bf9ed4  mov x0,x21
7101bf9ed8  bl 0x710392eb40
7101bf9edc  ldr x8,[sp, #0x40]
7101bf9ee0  ldr x9,[x8]
7101bf9ee4  ldr x8,[x19]
7101bf9ee8  sub x9,x9,x8
7101bf9eec  add x27,x27,#0x1
7101bf9ef0  asr x9,x9,#0x3
7101bf9ef4  cmp x9,x27
7101bf9ef8  b.hi 0x7101bf8c7c
7101bf9efc  add x21,x28,#0x200
7101bf9f00  add x19,sp,#0x140
7101bf9f04  adrp x22,0x71050ac000
7101bf9f08  add x22,x22,#0xb20
7101bf9f0c  add x8,sp,#0x70
7101bf9f10  str x8,[sp, #0x90]
7101bf9f14  cmp x19,x21
7101bf9f18  stp x22,x28,[sp, #0x70]
7101bf9f1c  str x19,[sp, #0x160]
7101bf9f20  stp x22,x28,[sp, #0x140]
7101bf9f24  b.eq 0x7101bf9f48
7101bf9f28  ldr x0,[x28, #0x220]
7101bf9f2c  cmp x0,x21
7101bf9f30  b.eq 0x7101bf9f60
7101bf9f34  mov x20,x0
7101bf9f38  str x22,[x28, #0x200]
7101bf9f3c  str x28,[x28, #0x208]
7101bf9f40  str x0,[sp, #0x160]
7101bf9f44  b 0x7101bf9f94
7101bf9f48  add x20,sp,#0x140
7101bf9f4c  cmp x19,x20
7101bf9f50  b.ne 0x7101bf9fa0
7101bf9f54  ldr x8,[x20]
7101bf9f58  ldr x8,[x8, #0x20]
7101bf9f5c  b 0x7101bf9fac
7101bf9f60  str xzr,[sp, #0x160]
7101bf9f64  ldr x8,[x0]
7101bf9f68  ldr x8,[x8, #0x18]
7101bf9f6c  add x1,sp,#0x140
7101bf9f70  add x20,sp,#0x140
7101bf9f74  blr x8
7101bf9f78  ldr x0,[x28, #0x220]
7101bf9f7c  ldr x8,[x0]
7101bf9f80  ldr x8,[x8, #0x20]
7101bf9f84  blr x8
7101bf9f88  str x20,[sp, #0x160]
7101bf9f8c  str x22,[x28, #0x200]
7101bf9f90  str x28,[x28, #0x208]
7101bf9f94  str x21,[x28, #0x220]
7101bf9f98  cmp x19,x20
7101bf9f9c  b.eq 0x7101bf9f54
7101bf9fa0  cbz x20,0x7101bf9fb4
7101bf9fa4  ldr x8,[x20]
7101bf9fa8  ldr x8,[x8, #0x28]
7101bf9fac  mov x0,x20
7101bf9fb0  blr x8
7101bf9fb4  ldr x0,[sp, #0x90]
7101bf9fb8  add x8,sp,#0x70
7101bf9fbc  cmp x8,x0
7101bf9fc0  b.eq 0x7101bf9fd4
7101bf9fc4  cbz x0,0x7101bf9fe0
7101bf9fc8  ldr x8,[x0]
7101bf9fcc  ldr x8,[x8, #0x28]
7101bf9fd0  b 0x7101bf9fdc
7101bf9fd4  ldr x8,[x0]
7101bf9fd8  ldr x8,[x8, #0x20]
7101bf9fdc  blr x8
7101bf9fe0  ldr x20,[x28, #0x4f0]
7101bf9fe4  ldr x24,[x28, #0x4f8]
7101bf9fe8  sub x21,x24,x20
7101bf9fec  ldr x8,[x28, #0x240]
7101bf9ff0  ldr x23,[x28, #0x230]
7101bf9ff4  sub x9,x8,x23
7101bf9ff8  asr x19,x21,#0x3
7101bf9ffc  cmp x19,x9, ASR #0x3
7101bfa000  b.ls 0x7101bfa05c
7101bfa004  add x22,x28,#0x230
7101bfa008  cbz x23,0x7101bfa024
7101bfa00c  mov x0,x23
7101bfa010  str x23,[x28, #0x238]
7101bfa014  bl 0x710392eb40
7101bfa018  mov x8,xzr
7101bfa01c  stp xzr,xzr,[x22, #0x8]
7101bfa020  str xzr,[x22]
7101bfa024  lsr x9,x19,#0x3d
7101bfa028  cbnz x9,0x7101bfa054
7101bfa02c  asr x9,x8,#0x3
7101bfa030  orr x10,xzr,#0xffffffffffffffe
7101bfa034  cmp x9,x10
7101bfa038  b.hi 0x7101bfa0c8
7101bfa03c  asr x8,x8,#0x2
7101bfa040  cmp x8,x19
7101bfa044  b.cc 0x7101bfa0cc
7101bfa048  lsr x9,x8,#0x3d
7101bfa04c  mov x19,x8
7101bfa050  cbz x9,0x7101bfa0cc
7101bfa054  mov x0,x22
7101bfa058  bl 0x71039c0c00
7101bfa05c  ldr x8,[x28, #0x238]
7101bfa060  sub x8,x8,x23
7101bfa064  asr x25,x8,#0x3
7101bfa068  add x8,x20,x8
7101bfa06c  cmp x19,x25
7101bfa070  csel x21,x8,x24,hi
7101bfa074  subs x22,x21,x20
7101bfa078  b.eq 0x7101bfa08c
7101bfa07c  mov x0,x23
7101bfa080  mov x1,x20
7101bfa084  mov x2,x22
7101bfa088  bl 0x71039c00a0
7101bfa08c  cmp x19,x25
7101bfa090  b.ls 0x7101bfa0bc
7101bfa094  sub x20,x24,x21
7101bfa098  cmp x20,#0x1
7101bfa09c  b.lt 0x7101bfa160
7101bfa0a0  ldr x0,[x28, #0x238]
7101bfa0a4  mov x1,x21
7101bfa0a8  mov x2,x20
7101bfa0ac  bl 0x71039c00e0
7101bfa0b0  ldr x8,[x28, #0x238]
7101bfa0b4  add x8,x8,x20
7101bfa0b8  b 0x7101bfa15c
7101bfa0bc  asr x8,x22,#0x3
7101bfa0c0  add x8,x23,x8, LSL #0x3
7101bfa0c4  b 0x7101bfa15c
7101bfa0c8  orr x19,xzr,#0x1fffffffffffffff
7101bfa0cc  lsl x8,x19,#0x3
7101bfa0d0  cmp x8,#0x0
7101bfa0d4  csinc x22,x8,xzr,ne
7101bfa0d8  mov w0,#0x10
7101bfa0dc  mov x1,x22
7101bfa0e0  bl 0x710392e290
7101bfa0e4  mov x23,x0
7101bfa0e8  cbnz x0,0x7101bfa130
7101bfa0ec  adrp x8,0x7105332000
7101bfa0f0  ldr x0,[x8, #0xf00]
7101bfa0f4  cbz x0,0x7101bfa12c
7101bfa0f8  str wzr,[sp, #0xc0]
7101bfa0fc  str x22,[sp, #0x140]
7101bfa100  ldr x8,[x0]
7101bfa104  ldr x8,[x8, #0x30]
7101bfa108  add x1,sp,#0xc0
7101bfa10c  add x2,sp,#0x140
7101bfa110  blr x8
7101bfa114  tbz w0,#0x0,0x7101bfa12c
7101bfa118  mov w0,#0x10
7101bfa11c  mov x1,x22
7101bfa120  bl 0x710392e290
7101bfa124  mov x23,x0
7101bfa128  cbnz x0,0x7101bfa130
7101bfa12c  mov x23,xzr
7101bfa130  add x8,x23,x19, LSL #0x3
7101bfa134  cmp x21,#0x1
7101bfa138  str x23,[x28, #0x238]
7101bfa13c  str x23,[x28, #0x230]
7101bfa140  str x8,[x28, #0x240]
7101bfa144  b.lt 0x7101bfa160
7101bfa148  mov x0,x23
7101bfa14c  mov x1,x20
7101bfa150  mov x2,x21
7101bfa154  bl 0x71039c00e0
7101bfa158  add x8,x23,x21
7101bfa15c  str x8,[x28, #0x238]
7101bfa160  ldr x10,[sp, #0x10]
7101bfa164  cmn w10,#0x1
7101bfa168  adrp x1,0x7104401000
7101bfa16c  add x1,x1,#0x470
7101bfa170  b.eq 0x7101bfa1c8
7101bfa174  cmp w10,#0x9
7101bfa178  adrp x8,0x7105339000
7101bfa17c  add x8,x8,#0x830
7101bfa180  adrp x20,0x710523d000
7101bfa184  add x20,x20,#0x9a8
7101bfa188  b.hi 0x7101bfa1a8
7101bfa18c  adrp x9,0x7105339000
7101bfa190  ldr x9,[x9, #0x8b0]
7101bfa194  ldrb w9,[x9, #0x8]
7101bfa198  cbz w9,0x7101bfa1a8
7101bfa19c  adrp x8,0x7105339000
7101bfa1a0  add x8,x8,#0x860
7101bfa1a4  ldr x8,[x8, x10, LSL #0x3]
7101bfa1a8  ldr x8,[x8, #0x10]
7101bfa1ac  ldr w8,[x8, #0x9c]
7101bfa1b0  sub w8,w8,#0x3
7101bfa1b4  adrp x9,0x71042d6000
7101bfa1b8  add x9,x9,#0x1ee
7101bfa1bc  cmp w8,#0x2
7101bfa1c0  csel x1,x9,x1,cc
7101bfa1c4  b 0x7101bfa1d0
7101bfa1c8  adrp x20,0x710523d000
7101bfa1cc  add x20,x20,#0x9a8
7101bfa1d0  ldr x0,[sp, #0x8]
7101bfa1d4  bl 0x710377a120
7101bfa1d8  mov x0,x28
7101bfa1dc  bl 0x7101bf69c0
7101bfa1e0  ldr x0,[x28, #0x138]
7101bfa1e4  ldr x8,[x0]
7101bfa1e8  ldr x8,[x8, #0x70]
7101bfa1ec  mov w1,#0x1
7101bfa1f0  blr x8
7101bfa1f4  ldr x0,[sp, #0xa8]
7101bfa1f8  stp x20,xzr,[sp, #0xa0]
7101bfa1fc  cbz x0,0x7101bfa204
7101bfa200  bl 0x710392eb40
7101bfa204  ldr x19,[sp, #0xb8]
7101bfa208  adrp x8,0x710523d000
7101bfa20c  add x8,x8,#0x988
7101bfa210  stp x8,xzr,[sp, #0xb0]
7101bfa214  cbz x19,0x7101bfa230
7101bfa218  ldr x0,[x19, #0x18]
7101bfa21c  stp x20,xzr,[x19, #0x10]
7101bfa220  cbz x0,0x7101bfa228
7101bfa224  bl 0x710392eb40
7101bfa228  mov x0,x19
7101bfa22c  bl 0x710392eb40
7101bfa230  add sp,sp,#0x1, LSL #12
7101bfa234  add sp,sp,#0x1d0
7101bfa238  ldp x29,x30,[sp, #0x50]
7101bfa23c  ldp x20,x19,[sp, #0x40]
7101bfa240  ldp x22,x21,[sp, #0x30]
7101bfa244  ldp x24,x23,[sp, #0x20]
7101bfa248  ldp x26,x25,[sp, #0x10]
7101bfa24c  ldp x28,x27,[sp], #0x60
7101bfa250  ret
7101bfa254  adrp x0,0x7105314000
7101bfa258  add x0,x0,#0x4d8
7101bfa25c  bl 0x71039c06b0
7101bfa260  cbz w0,0x7101bf7da8
7101bfa264  bl 0x7101764000
7101bfa268  adrp x0,0x7101763000
7101bfa26c  add x0,x0,#0xc40
7101bfa270  adrp x1,0x71052c5000
7101bfa274  add x1,x1,#0x180
7101bfa278  adrp x2,0x7104f17000
7101bfa27c  add x2,x2,#0x0
7101bfa280  bl 0x71000001c0
7101bfa284  adrp x0,0x7105314000
7101bfa288  add x0,x0,#0x4d8
7101bfa28c  bl 0x71039c06c0
7101bfa290  b 0x7101bf7da8
7101bfa294  mov x0,x26
7101bfa298  bl 0x71039c0c00
7101bfa29c  add x0,sp,#0x140
7101bfa2a0  bl 0x71039c1330
7101bfa2a4  bl 0x71039c2650
7101bfa2a8  ldr x0,[sp, #0x20]
7101bfa2ac  bl 0x71039c0c00
7101bfa2b0  ldr x0,[sp, #0x18]
7101bfa2b4  bl 0x71039c0c00
7101bfa2b8  add x0,sp,#0x140
7101bfa2bc  bl 0x71039c0c00
7101bfa2c0  add x0,sp,#0xc0
7101bfa2c4  bl 0x71039c0c00
7101bfa2c8  add x0,x8,#0x608
7101bfa2cc  bl 0x71039c1330
