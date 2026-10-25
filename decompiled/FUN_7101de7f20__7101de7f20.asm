// addr:      7101de7f20
// offset:    0x1de7f20
// name:      FUN_7101de7f20
// mangled:   
// size:      12192

7101de7f20  stp d9,d8,[sp, #-0x70]!
7101de7f24  stp x28,x27,[sp, #0x10]
7101de7f28  stp x26,x25,[sp, #0x20]
7101de7f2c  stp x24,x23,[sp, #0x30]
7101de7f30  stp x22,x21,[sp, #0x40]
7101de7f34  stp x20,x19,[sp, #0x50]
7101de7f38  stp x29,x30,[sp, #0x60]
7101de7f3c  add x29,sp,#0x60
7101de7f40  sub sp,sp,#0x600
7101de7f44  str w2,[sp, #0x1c]
7101de7f48  ldr w8,[x0, #0x5e4]
7101de7f4c  add x19,x0,#0x10
7101de7f50  ldp x23,x24,[x1]
7101de7f54  mov x28,x1
7101de7f58  str x0,[sp, #0x60]
7101de7f5c  adrp x1,0x71043be000
7101de7f60  add x1,x1,#0xb2a
7101de7f64  mov x0,x19
7101de7f68  cmp w8,#0x2
7101de7f6c  sub x8,x29,#0xb0
7101de7f70  b.ne 0x7101de8018
7101de7f74  bl 0x7103776640
7101de7f78  adrp x1,0x71043cf000
7101de7f7c  add x1,x1,#0xca4
7101de7f80  add x8,sp,#0xa0
7101de7f84  sub x0,x29,#0xb0
7101de7f88  bl 0x7103776910
7101de7f8c  adrp x1,0x71042a3000
7101de7f90  add x1,x1,#0x521
7101de7f94  add x0,sp,#0xa0
7101de7f98  bl 0x710377a120
7101de7f9c  ldr x0,[sp, #0xa8]
7101de7fa0  adrp x22,0x710523d000
7101de7fa4  add x22,x22,#0x9a8
7101de7fa8  stp x22,xzr,[sp, #0xa0]
7101de7fac  cbz x0,0x7101de7fb4
7101de7fb0  bl 0x710392eb40
7101de7fb4  ldur x20,[x29, #-0xa8]
7101de7fb8  adrp x25,0x710523d000
7101de7fbc  add x25,x25,#0x988
7101de7fc0  stp x25,xzr,[x29, #-0xb0]
7101de7fc4  cbz x20,0x7101de7fe0
7101de7fc8  ldr x0,[x20, #0x18]
7101de7fcc  stp x22,xzr,[x20, #0x10]
7101de7fd0  cbz x0,0x7101de7fd8
7101de7fd4  bl 0x710392eb40
7101de7fd8  mov x0,x20
7101de7fdc  bl 0x710392eb40
7101de7fe0  adrp x1,0x71043be000
7101de7fe4  add x1,x1,#0xb2a
7101de7fe8  add x8,sp,#0xa0
7101de7fec  mov x0,x19
7101de7ff0  bl 0x7103776910
7101de7ff4  ldr x0,[sp, #0xa8]
7101de7ff8  ldr x8,[x0]
7101de7ffc  cbz x8,0x7101de82cc
7101de8000  movi v0.2D,#0x0
7101de8004  add x9,x8,#0x30
7101de8008  add x8,x8,#0x34
7101de800c  ld1 {v0.S}[0],[x9]
7101de8010  ld1 {v0.S}[1],[x8]
7101de8014  b 0x7101de82d8
7101de8018  bl 0x7103776640
7101de801c  adrp x1,0x71043cf000
7101de8020  add x1,x1,#0xca4
7101de8024  add x8,sp,#0xa0
7101de8028  sub x0,x29,#0xb0
7101de802c  bl 0x7103776910
7101de8030  adrp x1,0x710424f000
7101de8034  add x1,x1,#0xa6f
7101de8038  add x0,sp,#0xa0
7101de803c  bl 0x710377a120
7101de8040  ldr x0,[sp, #0xa8]
7101de8044  adrp x22,0x710523d000
7101de8048  add x22,x22,#0x9a8
7101de804c  stp x22,xzr,[sp, #0xa0]
7101de8050  cbz x0,0x7101de8058
7101de8054  bl 0x710392eb40
7101de8058  ldur x20,[x29, #-0xa8]
7101de805c  adrp x25,0x710523d000
7101de8060  add x25,x25,#0x988
7101de8064  stp x25,xzr,[x29, #-0xb0]
7101de8068  cbz x20,0x7101de8084
7101de806c  ldr x0,[x20, #0x18]
7101de8070  stp x22,xzr,[x20, #0x10]
7101de8074  cbz x0,0x7101de807c
7101de8078  bl 0x710392eb40
7101de807c  mov x0,x20
7101de8080  bl 0x710392eb40
7101de8084  adrp x1,0x7104454000
7101de8088  add x1,x1,#0xfd1
7101de808c  sub x8,x29,#0xb0
7101de8090  mov x0,x19
7101de8094  bl 0x7103776640
7101de8098  adrp x1,0x71043cf000
7101de809c  add x1,x1,#0xca4
7101de80a0  add x8,sp,#0xa0
7101de80a4  sub x0,x29,#0xb0
7101de80a8  bl 0x7103776910
7101de80ac  adrp x1,0x710434a000
7101de80b0  add x1,x1,#0x87d
7101de80b4  add x0,sp,#0xa0
7101de80b8  bl 0x710377a120
7101de80bc  ldr x0,[sp, #0xa8]
7101de80c0  stp x22,xzr,[sp, #0xa0]
7101de80c4  cbz x0,0x7101de80cc
7101de80c8  bl 0x710392eb40
7101de80cc  ldur x20,[x29, #-0xa8]
7101de80d0  stp x25,xzr,[x29, #-0xb0]
7101de80d4  cbz x20,0x7101de80f0
7101de80d8  ldr x0,[x20, #0x18]
7101de80dc  stp x22,xzr,[x20, #0x10]
7101de80e0  cbz x0,0x7101de80e8
7101de80e4  bl 0x710392eb40
7101de80e8  mov x0,x20
7101de80ec  bl 0x710392eb40
7101de80f0  adrp x1,0x7104454000
7101de80f4  add x1,x1,#0xfd1
7101de80f8  add x8,sp,#0xa0
7101de80fc  mov x0,x19
7101de8100  bl 0x7103776ad0
7101de8104  ldr x20,[sp, #0xa8]
7101de8108  ldr x21,[x20]
7101de810c  cbz x21,0x7101de8168
7101de8110  ldr x8,[x21]
7101de8114  ldr x8,[x8, #0x208]
7101de8118  mov w1,#0x1
7101de811c  mov x0,x21
7101de8120  mov w26,#0x1
7101de8124  blr x8
7101de8128  ldr x8,[x21]
7101de812c  ldr x8,[x8, #0x200]
7101de8130  mov x0,x21
7101de8134  blr x8
7101de8138  tbz w0,#0x0,0x7101de8150
7101de813c  ldr x8,[x21]
7101de8140  ldr x8,[x8, #0x210]
7101de8144  mov x0,x21
7101de8148  blr x8
7101de814c  eor w26,w0,#0x1
7101de8150  ldr x8,[x21]
7101de8154  ldr x8,[x8, #0x388]
7101de8158  and w1,w26,#0x1
7101de815c  mov x0,x21
7101de8160  mov w2,wzr
7101de8164  blr x8
7101de8168  adrp x26,0x710523d000
7101de816c  add x26,x26,#0x9c8
7101de8170  stp x26,xzr,[sp, #0xa0]
7101de8174  cbz x20,0x7101de8180
7101de8178  mov x0,x20
7101de817c  bl 0x710392eb40
7101de8180  adrp x1,0x7104454000
7101de8184  add x1,x1,#0xfd1
7101de8188  add x8,sp,#0xa0
7101de818c  mov x0,x19
7101de8190  bl 0x7103776ad0
7101de8194  ldr x20,[sp, #0xa8]
7101de8198  ldr x21,[x20]
7101de819c  cbz x21,0x7101de81f8
7101de81a0  ldr x8,[x21]
7101de81a4  ldr x8,[x8, #0x1f8]
7101de81a8  mov w1,#0x1
7101de81ac  mov x0,x21
7101de81b0  mov w27,#0x1
7101de81b4  blr x8
7101de81b8  ldr x8,[x21]
7101de81bc  ldr x8,[x8, #0x200]
7101de81c0  mov x0,x21
7101de81c4  blr x8
7101de81c8  tbz w0,#0x0,0x7101de81e0
7101de81cc  ldr x8,[x21]
7101de81d0  ldr x8,[x8, #0x210]
7101de81d4  mov x0,x21
7101de81d8  blr x8
7101de81dc  eor w27,w0,#0x1
7101de81e0  ldr x8,[x21]
7101de81e4  ldr x8,[x8, #0x388]
7101de81e8  and w1,w27,#0x1
7101de81ec  mov x0,x21
7101de81f0  mov w2,wzr
7101de81f4  blr x8
7101de81f8  stp x26,xzr,[sp, #0xa0]
7101de81fc  cbz x20,0x7101de8208
7101de8200  mov x0,x20
7101de8204  bl 0x710392eb40
7101de8208  adrp x1,0x7104454000
7101de820c  add x1,x1,#0xfd1
7101de8210  add x8,sp,#0xa0
7101de8214  mov x0,x19
7101de8218  bl 0x7103776640
7101de821c  ldr x20,[sp, #0xa8]
7101de8220  ldr x8,[x20, #0x8]
7101de8224  cbz x8,0x7101de823c
7101de8228  ldr x8,[x8, #0x18]
7101de822c  cbz x8,0x7101de823c
7101de8230  ldrb w9,[x8, #0x58]
7101de8234  orr w9,w9,#0x1
7101de8238  strb w9,[x8, #0x58]
7101de823c  ldr x21,[sp, #0x60]
7101de8240  stp x25,xzr,[sp, #0xa0]
7101de8244  cbz x20,0x7101de8260
7101de8248  ldr x0,[x20, #0x18]
7101de824c  stp x22,xzr,[x20, #0x10]
7101de8250  cbz x0,0x7101de8258
7101de8254  bl 0x710392eb40
7101de8258  mov x0,x20
7101de825c  bl 0x710392eb40
7101de8260  adrp x1,0x71043be000
7101de8264  add x1,x1,#0xb2a
7101de8268  add x8,sp,#0xa0
7101de826c  mov x0,x19
7101de8270  bl 0x7103776910
7101de8274  ldr x0,[sp, #0xa8]
7101de8278  ldr x8,[x0]
7101de827c  cbz x8,0x7101de8294
7101de8280  ldr q0,[x21, #0x5f0]
7101de8284  ldrb w9,[x8, #0x58]
7101de8288  orr w9,w9,#0x10
7101de828c  str d0,[x8, #0x30]
7101de8290  strb w9,[x8, #0x58]
7101de8294  stp x22,xzr,[sp, #0xa0]
7101de8298  cbz x0,0x7101de82a0
7101de829c  bl 0x710392eb40
7101de82a0  adrp x1,0x7104454000
7101de82a4  add x1,x1,#0xfd1
7101de82a8  add x8,sp,#0xa0
7101de82ac  mov x0,x19
7101de82b0  bl 0x7103776910
7101de82b4  ldr x0,[sp, #0xa8]
7101de82b8  ldr x8,[x0]
7101de82bc  cbz x8,0x7101de8540
7101de82c0  ldr q0,[x21, #0x600]
7101de82c4  str d0,[x8, #0x30]
7101de82c8  b 0x7101de8534
7101de82cc  adrp x8,0x71052a8000
7101de82d0  ldr x8,[x8, #0xa80]
7101de82d4  ldr q0,[x8]
7101de82d8  str q0,[sp, #0x90]
7101de82dc  stp x22,xzr,[sp, #0xa0]
7101de82e0  cbz x0,0x7101de82e8
7101de82e4  bl 0x710392eb40
7101de82e8  adrp x1,0x71043be000
7101de82ec  add x1,x1,#0xb2a
7101de82f0  add x8,sp,#0xa0
7101de82f4  mov x0,x19
7101de82f8  bl 0x7103776910
7101de82fc  ldr x0,[sp, #0xa8]
7101de8300  ldr x8,[x0]
7101de8304  cbz x8,0x7101de8328
7101de8308  ldr q0,[sp, #0x90]
7101de830c  add x9,x8,#0x34
7101de8310  mov w10,#0x40000000
7101de8314  str w10,[x8, #0x30]
7101de8318  st1 {v0.S}[1],[x9]
7101de831c  ldrb w9,[x8, #0x58]
7101de8320  orr w9,w9,#0x10
7101de8324  strb w9,[x8, #0x58]
7101de8328  stp x22,xzr,[sp, #0xa0]
7101de832c  cbz x0,0x7101de8334
7101de8330  bl 0x710392eb40
7101de8334  adrp x1,0x7104454000
7101de8338  add x1,x1,#0xfd1
7101de833c  add x8,sp,#0xa0
7101de8340  mov x0,x19
7101de8344  bl 0x7103776ad0
7101de8348  ldr x20,[sp, #0xa8]
7101de834c  ldr x21,[x20]
7101de8350  cbz x21,0x7101de83b0
7101de8354  ldr x8,[x21]
7101de8358  ldr x8,[x8, #0x208]
7101de835c  mov x0,x21
7101de8360  mov w1,wzr
7101de8364  blr x8
7101de8368  ldr x8,[x21]
7101de836c  ldr x8,[x8, #0x200]
7101de8370  mov x0,x21
7101de8374  blr x8
7101de8378  tbz w0,#0x0,0x7101de8394
7101de837c  ldr x8,[x21]
7101de8380  ldr x8,[x8, #0x210]
7101de8384  mov x0,x21
7101de8388  blr x8
7101de838c  eor w8,w0,#0x1
7101de8390  b 0x7101de8398
7101de8394  mov w8,#0x1
7101de8398  ldr x9,[x21]
7101de839c  ldr x9,[x9, #0x388]
7101de83a0  and w1,w8,#0x1
7101de83a4  mov x0,x21
7101de83a8  mov w2,wzr
7101de83ac  blr x9
7101de83b0  adrp x26,0x710523d000
7101de83b4  add x26,x26,#0x9c8
7101de83b8  stp x26,xzr,[sp, #0xa0]
7101de83bc  cbz x20,0x7101de83c8
7101de83c0  mov x0,x20
7101de83c4  bl 0x710392eb40
7101de83c8  adrp x1,0x7104454000
7101de83cc  add x1,x1,#0xfd1
7101de83d0  add x8,sp,#0xa0
7101de83d4  mov x0,x19
7101de83d8  bl 0x7103776ad0
7101de83dc  ldr x20,[sp, #0xa8]
7101de83e0  ldr x21,[x20]
7101de83e4  cbz x21,0x7101de8444
7101de83e8  ldr x8,[x21]
7101de83ec  ldr x8,[x8, #0x1f8]
7101de83f0  mov x0,x21
7101de83f4  mov w1,wzr
7101de83f8  blr x8
7101de83fc  ldr x8,[x21]
7101de8400  ldr x8,[x8, #0x200]
7101de8404  mov x0,x21
7101de8408  blr x8
7101de840c  tbz w0,#0x0,0x7101de8428
7101de8410  ldr x8,[x21]
7101de8414  ldr x8,[x8, #0x210]
7101de8418  mov x0,x21
7101de841c  blr x8
7101de8420  eor w8,w0,#0x1
7101de8424  b 0x7101de842c
7101de8428  mov w8,#0x1
7101de842c  ldr x9,[x21]
7101de8430  ldr x9,[x9, #0x388]
7101de8434  and w1,w8,#0x1
7101de8438  mov x0,x21
7101de843c  mov w2,wzr
7101de8440  blr x9
7101de8444  stp x26,xzr,[sp, #0xa0]
7101de8448  cbz x20,0x7101de8454
7101de844c  mov x0,x20
7101de8450  bl 0x710392eb40
7101de8454  adrp x1,0x7104454000
7101de8458  add x1,x1,#0xfd1
7101de845c  add x8,sp,#0xa0
7101de8460  mov x0,x19
7101de8464  bl 0x7103776640
7101de8468  ldr x20,[sp, #0xa8]
7101de846c  ldr x8,[x20, #0x8]
7101de8470  cbz x8,0x7101de8488
7101de8474  ldr x8,[x8, #0x18]
7101de8478  cbz x8,0x7101de8488
7101de847c  ldrb w9,[x8, #0x58]
7101de8480  and w9,w9,#0xfe
7101de8484  strb w9,[x8, #0x58]
7101de8488  ldr x21,[sp, #0x60]
7101de848c  stp x25,xzr,[sp, #0xa0]
7101de8490  cbz x20,0x7101de84ac
7101de8494  ldr x0,[x20, #0x18]
7101de8498  stp x22,xzr,[x20, #0x10]
7101de849c  cbz x0,0x7101de84a4
7101de84a0  bl 0x710392eb40
7101de84a4  mov x0,x20
7101de84a8  bl 0x710392eb40
7101de84ac  adrp x1,0x7104454000
7101de84b0  add x1,x1,#0xfd1
7101de84b4  add x8,sp,#0xa0
7101de84b8  mov x0,x19
7101de84bc  bl 0x7103776910
7101de84c0  ldr x0,[sp, #0xa8]
7101de84c4  ldr x8,[x0]
7101de84c8  cbz x8,0x7101de84e4
7101de84cc  movi v0.2D,#0x0
7101de84d0  add x9,x8,#0x30
7101de84d4  add x8,x8,#0x34
7101de84d8  ld1 {v0.S}[0],[x9]
7101de84dc  ld1 {v0.S}[1],[x8]
7101de84e0  b 0x7101de84f0
7101de84e4  adrp x8,0x71052a8000
7101de84e8  ldr x8,[x8, #0xa80]
7101de84ec  ldr q0,[x8]
7101de84f0  str q0,[sp, #0x90]
7101de84f4  stp x22,xzr,[sp, #0xa0]
7101de84f8  cbz x0,0x7101de8500
7101de84fc  bl 0x710392eb40
7101de8500  adrp x1,0x7104454000
7101de8504  add x1,x1,#0xfd1
7101de8508  add x8,sp,#0xa0
7101de850c  mov x0,x19
7101de8510  bl 0x7103776910
7101de8514  ldr x0,[sp, #0xa8]
7101de8518  ldr x8,[x0]
7101de851c  cbz x8,0x7101de8540
7101de8520  ldr q0,[sp, #0x90]
7101de8524  add x9,x8,#0x34
7101de8528  mov w10,#0x44fa0000
7101de852c  str w10,[x8, #0x30]
7101de8530  st1 {v0.S}[1],[x9]
7101de8534  ldrb w9,[x8, #0x58]
7101de8538  orr w9,w9,#0x10
7101de853c  strb w9,[x8, #0x58]
7101de8540  stp x22,xzr,[sp, #0xa0]
7101de8544  cbz x0,0x7101de854c
7101de8548  bl 0x710392eb40
7101de854c  mov x8,#0xfe8c
7101de8550  movk x8,#0x53df, LSL #16
7101de8554  movk x8,#0x10, LSL #32
7101de8558  str x8,[sp, #0xa0]
7101de855c  ldr x0,[x21, #0x20]
7101de8560  add x2,sp,#0xa0
7101de8564  mov w1,wzr
7101de8568  bl 0x7103772070
7101de856c  ldp x8,x10,[x28]
7101de8570  stur wzr,[x29, #-0xa0]
7101de8574  stp xzr,xzr,[x29, #-0xb0]
7101de8578  sub x2,x10,x8
7101de857c  lsr x9,x2,#0x3
7101de8580  cbz w9,0x7101de86b4
7101de8584  cmp x10,x8
7101de8588  b.eq 0x7101deaeb8
7101de858c  adrp x17,0x710532f000
7101de8590  ldr x17,[x17, #0x730]
7101de8594  orr x18,xzr,#-0x3333333333333334
7101de8598  mov x10,xzr
7101de859c  mov w11,wzr
7101de85a0  mov w12,wzr
7101de85a4  mov w13,wzr
7101de85a8  mov w14,wzr
7101de85ac  mov w15,wzr
7101de85b0  mov w16,#0x301
7101de85b4  movk w16,#0x2, LSL #16
7101de85b8  movk x18,#0xcccd
7101de85bc  mov w0,#0x140
7101de85c0  adrp x1,0x7105182000
7101de85c4  add x1,x1,#0xb08
7101de85c8  asr x2,x2,#0x3
7101de85cc  adrp x3,0x71044fb000
7101de85d0  add x3,x3,#0x758
7101de85d4  ldr x4,[x8, x10, LSL #0x3]
7101de85d8  ldrsh w4,[x4, #0x8]
7101de85dc  cmn w4,#0x1
7101de85e0  b.eq 0x7101de8670
7101de85e4  cmp w4,#0x7cf
7101de85e8  b.gt 0x7101de8670
7101de85ec  ldr x5,[x17, #0x8]
7101de85f0  ldr x6,[x5, #0x1d8]
7101de85f4  sxtw x4,w4
7101de85f8  add x4,x6,x4, LSL #0x1
7101de85fc  ldp x5,x6,[x6, #0x20]
7101de8600  ldrh w4,[x4, #0x60]
7101de8604  sub x6,x6,x5
7101de8608  asr x6,x6,#0x6
7101de860c  mul x6,x6,x18
7101de8610  cmp w6,w4
7101de8614  b.ls 0x7101de8670
7101de8618  madd x5,x4,x0,x5
7101de861c  cmp x6,x4
7101de8620  csel x4,x5,x1,hi
7101de8624  ldrb w5,[x4, #0x5e]
7101de8628  cbz w5,0x7101de8638
7101de862c  add w11,w11,#0x1
7101de8630  stur w11,[x29, #-0xa0]
7101de8634  b 0x7101de8678
7101de8638  ldrb w4,[x4, #0x6c]
7101de863c  sub w4,w4,#0x1
7101de8640  cmp w4,#0x2
7101de8644  b.hi 0x7101de8670
7101de8648  and x4,x4,#0xff
7101de864c  lsl x4,x4,#0x3
7101de8650  lsr w4,w16,w4
7101de8654  and w5,w4,#0xff
7101de8658  cmp w5,#0x4
7101de865c  b.hi 0x7101de8678
7101de8660  and x4,x4,#0xff
7101de8664  ldrsw x4,[x3, x4, LSL #0x2]
7101de8668  add x4,x4,x3
7101de866c  br x4
7101de8670  add w15,w15,#0x1
7101de8674  stur w15,[x29, #-0xb0]
7101de8678  add x10,x10,#0x1
7101de867c  cmp w10,w9
7101de8680  b.cs 0x7101de86b4
7101de8684  cmp x2,w10, UXTW 
7101de8688  b.hi 0x7101de85d4
7101de868c  b 0x7101deaeb8
7101de8690  add w14,w14,#0x1
7101de8694  stur w14,[x29, #-0xac]
7101de8698  b 0x7101de8678
7101de869c  add w13,w13,#0x1
7101de86a0  stur w13,[x29, #-0xa8]
7101de86a4  b 0x7101de8678
7101de86a8  add w12,w12,#0x1
7101de86ac  stur w12,[x29, #-0xa4]
7101de86b0  b 0x7101de8678
7101de86b4  add x19,x21,#0x10
7101de86b8  adrp x1,0x7104270000
7101de86bc  add x1,x1,#0x4c8
7101de86c0  add x8,sp,#0x548
7101de86c4  mov x0,x19
7101de86c8  mov w2,wzr
7101de86cc  bl 0x7103776640
7101de86d0  adrp x1,0x7104308000
7101de86d4  add x1,x1,#0x95d
7101de86d8  add x8,sp,#0x500
7101de86dc  mov x0,x19
7101de86e0  mov w2,wzr
7101de86e4  str x19,[sp, #0x80]
7101de86e8  bl 0x7103776910
7101de86ec  ldur w21,[x29, #-0xac]
7101de86f0  cmp w21,#0x0
7101de86f4  b.le 0x7101de8704
7101de86f8  mov w20,#0x1
7101de86fc  mov w25,#0x1
7101de8700  b 0x7101de8760
7101de8704  ldur w21,[x29, #-0xa8]
7101de8708  cmp w21,#0x0
7101de870c  b.le 0x7101de871c
7101de8710  mov w20,#0x2
7101de8714  mov w25,#0x2
7101de8718  b 0x7101de8760
7101de871c  ldur w21,[x29, #-0xa4]
7101de8720  cmp w21,#0x0
7101de8724  b.le 0x7101de8734
7101de8728  orr w20,wzr,#0x3
7101de872c  orr w25,wzr,#0x3
7101de8730  b 0x7101de8760
7101de8734  ldur w21,[x29, #-0xb0]
7101de8738  cmp w21,#0x0
7101de873c  b.le 0x7101de874c
7101de8740  mov w20,wzr
7101de8744  mov w25,#0x4
7101de8748  b 0x7101de8760
7101de874c  ldur w21,[x29, #-0xa0]
7101de8750  cmp w21,#0x0
7101de8754  b.le 0x7101deae6c
7101de8758  mov w20,#0x4
7101de875c  mov w25,#0x5
7101de8760  ldr x19,[sp, #0x550]
7101de8764  ldr x8,[x19, #0x8]
7101de8768  cbz x8,0x7101de8780
7101de876c  ldr x8,[x8, #0x18]
7101de8770  cbz x8,0x7101de8780
7101de8774  ldrb w9,[x8, #0x58]
7101de8778  orr w9,w9,#0x1
7101de877c  strb w9,[x8, #0x58]
7101de8780  ldr x22,[sp, #0x508]
7101de8784  ldr x8,[x22]
7101de8788  cbz x8,0x7101de8798
7101de878c  ldrb w9,[x8, #0x58]
7101de8790  orr w9,w9,#0x1
7101de8794  strb w9,[x8, #0x58]
7101de8798  adrp x2,0x710432a000
7101de879c  add x2,x2,#0x5b5
7101de87a0  add x0,sp,#0xa0
7101de87a4  mov w1,#0x40
7101de87a8  mov w3,wzr
7101de87ac  bl 0x71039c04d0
7101de87b0  mov w2,#0xffffffff
7101de87b4  add x0,sp,#0x548
7101de87b8  mov w1,w20
7101de87bc  mov w3,wzr
7101de87c0  mov w4,wzr
7101de87c4  bl 0x71025b12c0
7101de87c8  add x0,sp,#0x500
7101de87cc  add x1,sp,#0xa0
7101de87d0  mov w2,#0x1
7101de87d4  mov w3,w21
7101de87d8  bl 0x710377a280
7101de87dc  adrp x20,0x710523d000
7101de87e0  add x20,x20,#0x9a8
7101de87e4  str x20,[sp, #0x500]
7101de87e8  str xzr,[sp, #0x508]
7101de87ec  cbz x22,0x7101de87f8
7101de87f0  mov x0,x22
7101de87f4  bl 0x710392eb40
7101de87f8  adrp x8,0x710523d000
7101de87fc  add x8,x8,#0x988
7101de8800  str x8,[sp, #0x548]
7101de8804  str xzr,[sp, #0x550]
7101de8808  cbz x19,0x7101de8824
7101de880c  ldr x0,[x19, #0x18]
7101de8810  stp x20,xzr,[x19, #0x10]
7101de8814  cbz x0,0x7101de881c
7101de8818  bl 0x710392eb40
7101de881c  mov x0,x19
7101de8820  bl 0x710392eb40
7101de8824  ldr x19,[sp, #0x80]
7101de8828  adrp x1,0x7104270000
7101de882c  add x1,x1,#0x4c8
7101de8830  add x8,sp,#0x548
7101de8834  mov w2,#0x1
7101de8838  mov x0,x19
7101de883c  bl 0x7103776640
7101de8840  adrp x1,0x7104308000
7101de8844  add x1,x1,#0x95d
7101de8848  add x8,sp,#0x500
7101de884c  mov w2,#0x1
7101de8850  mov x0,x19
7101de8854  bl 0x7103776910
7101de8858  cmp w25,#0x5
7101de885c  b.cs 0x7101de89a0
7101de8860  adrp x8,0x7104545000
7101de8864  add x8,x8,#0x9b8
7101de8868  sub x9,x29,#0xb0
7101de886c  ldrb w19,[x8, x25, LSL ]
7101de8870  add x26,x25,#0x1
7101de8874  ldr w22,[x9, x19, LSL #0x2]
7101de8878  cmp w22,#0x1
7101de887c  b.lt 0x7101de8904
7101de8880  ldr x21,[sp, #0x550]
7101de8884  ldr x8,[x21, #0x8]
7101de8888  cbz x8,0x7101de88a0
7101de888c  ldr x8,[x8, #0x18]
7101de8890  cbz x8,0x7101de88a0
7101de8894  ldrb w9,[x8, #0x58]
7101de8898  orr w9,w9,#0x1
7101de889c  strb w9,[x8, #0x58]
7101de88a0  ldr x20,[sp, #0x508]
7101de88a4  ldr x8,[x20]
7101de88a8  cbz x8,0x7101de88b8
7101de88ac  ldrb w9,[x8, #0x58]
7101de88b0  orr w9,w9,#0x1
7101de88b4  strb w9,[x8, #0x58]
7101de88b8  adrp x2,0x710432a000
7101de88bc  add x2,x2,#0x5b5
7101de88c0  add x0,sp,#0xa0
7101de88c4  mov w1,#0x40
7101de88c8  mov w3,#0x1
7101de88cc  bl 0x71039c04d0
7101de88d0  mov w2,#0xffffffff
7101de88d4  add x0,sp,#0x548
7101de88d8  mov w1,w19
7101de88dc  mov w3,wzr
7101de88e0  mov w4,wzr
7101de88e4  bl 0x71025b12c0
7101de88e8  add x0,sp,#0x500
7101de88ec  add x1,sp,#0xa0
7101de88f0  mov w2,#0x1
7101de88f4  mov w3,w22
7101de88f8  bl 0x710377a280
7101de88fc  mov x25,x26
7101de8900  b 0x7101de89d8
7101de8904  cmp w26,#0x4
7101de8908  b.hi 0x7101de89a0
7101de890c  ldrb w19,[x8, x26, LSL ]
7101de8910  sub x9,x29,#0xb0
7101de8914  ldr w22,[x9, x19, LSL #0x2]
7101de8918  add x26,x25,#0x2
7101de891c  cmp w22,#0x0
7101de8920  b.gt 0x7101de8880
7101de8924  cmp w26,#0x4
7101de8928  b.hi 0x7101de89a0
7101de892c  ldrb w19,[x8, x26, LSL ]
7101de8930  sub x9,x29,#0xb0
7101de8934  ldr w22,[x9, x19, LSL #0x2]
7101de8938  add x26,x25,#0x3
7101de893c  cmp w22,#0x0
7101de8940  b.gt 0x7101de8880
7101de8944  cmp w26,#0x4
7101de8948  b.hi 0x7101de89a0
7101de894c  ldrb w19,[x8, x26, LSL ]
7101de8950  sub x9,x29,#0xb0
7101de8954  ldr w22,[x9, x19, LSL #0x2]
7101de8958  add x26,x25,#0x4
7101de895c  cmp w22,#0x0
7101de8960  b.gt 0x7101de8880
7101de8964  cmp w26,#0x4
7101de8968  b.hi 0x7101de89a0
7101de896c  ldrb w19,[x8, x26, LSL ]
7101de8970  sub x9,x29,#0xb0
7101de8974  ldr w22,[x9, x19, LSL #0x2]
7101de8978  add x26,x25,#0x5
7101de897c  cmp w22,#0x0
7101de8980  b.gt 0x7101de8880
7101de8984  cmp w26,#0x4
7101de8988  b.hi 0x7101de89a0
7101de898c  ldrb w19,[x8, x26, LSL ]
7101de8990  sub x8,x29,#0xb0
7101de8994  ldr w22,[x8, x19, LSL #0x2]
7101de8998  add x26,x25,#0x6
7101de899c  b 0x7101de8880
7101de89a0  ldr x21,[sp, #0x550]
7101de89a4  ldr x8,[x21, #0x8]
7101de89a8  cbz x8,0x7101de89c0
7101de89ac  ldr x8,[x8, #0x18]
7101de89b0  cbz x8,0x7101de89c0
7101de89b4  ldrb w9,[x8, #0x58]
7101de89b8  and w9,w9,#0xfe
7101de89bc  strb w9,[x8, #0x58]
7101de89c0  ldr x20,[sp, #0x508]
7101de89c4  ldr x8,[x20]
7101de89c8  cbz x8,0x7101de89d8
7101de89cc  ldrb w9,[x8, #0x58]
7101de89d0  and w9,w9,#0xfe
7101de89d4  strb w9,[x8, #0x58]
7101de89d8  adrp x8,0x710523d000
7101de89dc  add x8,x8,#0x9a8
7101de89e0  str x8,[sp, #0x500]
7101de89e4  str xzr,[sp, #0x508]
7101de89e8  cbz x20,0x7101de89f4
7101de89ec  mov x0,x20
7101de89f0  bl 0x710392eb40
7101de89f4  adrp x8,0x710523d000
7101de89f8  add x8,x8,#0x988
7101de89fc  str x8,[sp, #0x548]
7101de8a00  str xzr,[sp, #0x550]
7101de8a04  cbz x21,0x7101de8a28
7101de8a08  ldr x0,[x21, #0x18]
7101de8a0c  adrp x8,0x710523d000
7101de8a10  add x8,x8,#0x9a8
7101de8a14  stp x8,xzr,[x21, #0x10]
7101de8a18  cbz x0,0x7101de8a20
7101de8a1c  bl 0x710392eb40
7101de8a20  mov x0,x21
7101de8a24  bl 0x710392eb40
7101de8a28  ldr x19,[sp, #0x80]
7101de8a2c  adrp x1,0x7104270000
7101de8a30  add x1,x1,#0x4c8
7101de8a34  add x8,sp,#0x548
7101de8a38  mov w2,#0x2
7101de8a3c  mov x0,x19
7101de8a40  bl 0x7103776640
7101de8a44  adrp x1,0x7104308000
7101de8a48  add x1,x1,#0x95d
7101de8a4c  add x8,sp,#0x500
7101de8a50  mov w2,#0x2
7101de8a54  mov x0,x19
7101de8a58  bl 0x7103776910
7101de8a5c  cmp w25,#0x5
7101de8a60  b.cs 0x7101de8ba4
7101de8a64  adrp x8,0x7104545000
7101de8a68  add x8,x8,#0x9b8
7101de8a6c  sub x9,x29,#0xb0
7101de8a70  ldrb w19,[x8, x25, LSL ]
7101de8a74  add x26,x25,#0x1
7101de8a78  ldr w22,[x9, x19, LSL #0x2]
7101de8a7c  cmp w22,#0x1
7101de8a80  b.lt 0x7101de8b08
7101de8a84  ldr x21,[sp, #0x550]
7101de8a88  ldr x8,[x21, #0x8]
7101de8a8c  cbz x8,0x7101de8aa4
7101de8a90  ldr x8,[x8, #0x18]
7101de8a94  cbz x8,0x7101de8aa4
7101de8a98  ldrb w9,[x8, #0x58]
7101de8a9c  orr w9,w9,#0x1
7101de8aa0  strb w9,[x8, #0x58]
7101de8aa4  ldr x20,[sp, #0x508]
7101de8aa8  ldr x8,[x20]
7101de8aac  cbz x8,0x7101de8abc
7101de8ab0  ldrb w9,[x8, #0x58]
7101de8ab4  orr w9,w9,#0x1
7101de8ab8  strb w9,[x8, #0x58]
7101de8abc  adrp x2,0x710432a000
7101de8ac0  add x2,x2,#0x5b5
7101de8ac4  add x0,sp,#0xa0
7101de8ac8  mov w1,#0x40
7101de8acc  mov w3,#0x2
7101de8ad0  bl 0x71039c04d0
7101de8ad4  mov w2,#0xffffffff
7101de8ad8  add x0,sp,#0x548
7101de8adc  mov w1,w19
7101de8ae0  mov w3,wzr
7101de8ae4  mov w4,wzr
7101de8ae8  bl 0x71025b12c0
7101de8aec  add x0,sp,#0x500
7101de8af0  add x1,sp,#0xa0
7101de8af4  mov w2,#0x1
7101de8af8  mov w3,w22
7101de8afc  bl 0x710377a280
7101de8b00  mov x25,x26
7101de8b04  b 0x7101de8bdc
7101de8b08  cmp w26,#0x4
7101de8b0c  b.hi 0x7101de8ba4
7101de8b10  ldrb w19,[x8, x26, LSL ]
7101de8b14  sub x9,x29,#0xb0
7101de8b18  ldr w22,[x9, x19, LSL #0x2]
7101de8b1c  add x26,x25,#0x2
7101de8b20  cmp w22,#0x0
7101de8b24  b.gt 0x7101de8a84
7101de8b28  cmp w26,#0x4
7101de8b2c  b.hi 0x7101de8ba4
7101de8b30  ldrb w19,[x8, x26, LSL ]
7101de8b34  sub x9,x29,#0xb0
7101de8b38  ldr w22,[x9, x19, LSL #0x2]
7101de8b3c  add x26,x25,#0x3
7101de8b40  cmp w22,#0x0
7101de8b44  b.gt 0x7101de8a84
7101de8b48  cmp w26,#0x4
7101de8b4c  b.hi 0x7101de8ba4
7101de8b50  ldrb w19,[x8, x26, LSL ]
7101de8b54  sub x9,x29,#0xb0
7101de8b58  ldr w22,[x9, x19, LSL #0x2]
7101de8b5c  add x26,x25,#0x4
7101de8b60  cmp w22,#0x0
7101de8b64  b.gt 0x7101de8a84
7101de8b68  cmp w26,#0x4
7101de8b6c  b.hi 0x7101de8ba4
7101de8b70  ldrb w19,[x8, x26, LSL ]
7101de8b74  sub x9,x29,#0xb0
7101de8b78  ldr w22,[x9, x19, LSL #0x2]
7101de8b7c  add x26,x25,#0x5
7101de8b80  cmp w22,#0x0
7101de8b84  b.gt 0x7101de8a84
7101de8b88  cmp w26,#0x4
7101de8b8c  b.hi 0x7101de8ba4
7101de8b90  ldrb w19,[x8, x26, LSL ]
7101de8b94  sub x8,x29,#0xb0
7101de8b98  ldr w22,[x8, x19, LSL #0x2]
7101de8b9c  add x26,x25,#0x6
7101de8ba0  b 0x7101de8a84
7101de8ba4  ldr x21,[sp, #0x550]
7101de8ba8  ldr x8,[x21, #0x8]
7101de8bac  cbz x8,0x7101de8bc4
7101de8bb0  ldr x8,[x8, #0x18]
7101de8bb4  cbz x8,0x7101de8bc4
7101de8bb8  ldrb w9,[x8, #0x58]
7101de8bbc  and w9,w9,#0xfe
7101de8bc0  strb w9,[x8, #0x58]
7101de8bc4  ldr x20,[sp, #0x508]
7101de8bc8  ldr x8,[x20]
7101de8bcc  cbz x8,0x7101de8bdc
7101de8bd0  ldrb w9,[x8, #0x58]
7101de8bd4  and w9,w9,#0xfe
7101de8bd8  strb w9,[x8, #0x58]
7101de8bdc  adrp x8,0x710523d000
7101de8be0  add x8,x8,#0x9a8
7101de8be4  str x8,[sp, #0x500]
7101de8be8  str xzr,[sp, #0x508]
7101de8bec  cbz x20,0x7101de8bf8
7101de8bf0  mov x0,x20
7101de8bf4  bl 0x710392eb40
7101de8bf8  adrp x8,0x710523d000
7101de8bfc  add x8,x8,#0x988
7101de8c00  str x8,[sp, #0x548]
7101de8c04  str xzr,[sp, #0x550]
7101de8c08  cbz x21,0x7101de8c2c
7101de8c0c  ldr x0,[x21, #0x18]
7101de8c10  adrp x8,0x710523d000
7101de8c14  add x8,x8,#0x9a8
7101de8c18  stp x8,xzr,[x21, #0x10]
7101de8c1c  cbz x0,0x7101de8c24
7101de8c20  bl 0x710392eb40
7101de8c24  mov x0,x21
7101de8c28  bl 0x710392eb40
7101de8c2c  ldr x19,[sp, #0x80]
7101de8c30  adrp x1,0x7104270000
7101de8c34  add x1,x1,#0x4c8
7101de8c38  add x8,sp,#0x548
7101de8c3c  orr w2,wzr,#0x3
7101de8c40  mov x0,x19
7101de8c44  bl 0x7103776640
7101de8c48  adrp x1,0x7104308000
7101de8c4c  add x1,x1,#0x95d
7101de8c50  add x8,sp,#0x500
7101de8c54  orr w2,wzr,#0x3
7101de8c58  mov x0,x19
7101de8c5c  bl 0x7103776910
7101de8c60  cmp w25,#0x5
7101de8c64  b.cs 0x7101de8da8
7101de8c68  adrp x8,0x7104545000
7101de8c6c  add x8,x8,#0x9b8
7101de8c70  sub x9,x29,#0xb0
7101de8c74  ldrb w19,[x8, x25, LSL ]
7101de8c78  add x26,x25,#0x1
7101de8c7c  ldr w22,[x9, x19, LSL #0x2]
7101de8c80  cmp w22,#0x1
7101de8c84  b.lt 0x7101de8d0c
7101de8c88  ldr x21,[sp, #0x550]
7101de8c8c  ldr x8,[x21, #0x8]
7101de8c90  cbz x8,0x7101de8ca8
7101de8c94  ldr x8,[x8, #0x18]
7101de8c98  cbz x8,0x7101de8ca8
7101de8c9c  ldrb w9,[x8, #0x58]
7101de8ca0  orr w9,w9,#0x1
7101de8ca4  strb w9,[x8, #0x58]
7101de8ca8  ldr x20,[sp, #0x508]
7101de8cac  ldr x8,[x20]
7101de8cb0  cbz x8,0x7101de8cc0
7101de8cb4  ldrb w9,[x8, #0x58]
7101de8cb8  orr w9,w9,#0x1
7101de8cbc  strb w9,[x8, #0x58]
7101de8cc0  adrp x2,0x710432a000
7101de8cc4  add x2,x2,#0x5b5
7101de8cc8  add x0,sp,#0xa0
7101de8ccc  mov w1,#0x40
7101de8cd0  orr w3,wzr,#0x3
7101de8cd4  bl 0x71039c04d0
7101de8cd8  mov w2,#0xffffffff
7101de8cdc  add x0,sp,#0x548
7101de8ce0  mov w1,w19
7101de8ce4  mov w3,wzr
7101de8ce8  mov w4,wzr
7101de8cec  bl 0x71025b12c0
7101de8cf0  add x0,sp,#0x500
7101de8cf4  add x1,sp,#0xa0
7101de8cf8  mov w2,#0x1
7101de8cfc  mov w3,w22
7101de8d00  bl 0x710377a280
7101de8d04  mov x25,x26
7101de8d08  b 0x7101de8de0
7101de8d0c  cmp w26,#0x4
7101de8d10  b.hi 0x7101de8da8
7101de8d14  ldrb w19,[x8, x26, LSL ]
7101de8d18  sub x9,x29,#0xb0
7101de8d1c  ldr w22,[x9, x19, LSL #0x2]
7101de8d20  add x26,x25,#0x2
7101de8d24  cmp w22,#0x0
7101de8d28  b.gt 0x7101de8c88
7101de8d2c  cmp w26,#0x4
7101de8d30  b.hi 0x7101de8da8
7101de8d34  ldrb w19,[x8, x26, LSL ]
7101de8d38  sub x9,x29,#0xb0
7101de8d3c  ldr w22,[x9, x19, LSL #0x2]
7101de8d40  add x26,x25,#0x3
7101de8d44  cmp w22,#0x0
7101de8d48  b.gt 0x7101de8c88
7101de8d4c  cmp w26,#0x4
7101de8d50  b.hi 0x7101de8da8
7101de8d54  ldrb w19,[x8, x26, LSL ]
7101de8d58  sub x9,x29,#0xb0
7101de8d5c  ldr w22,[x9, x19, LSL #0x2]
7101de8d60  add x26,x25,#0x4
7101de8d64  cmp w22,#0x0
7101de8d68  b.gt 0x7101de8c88
7101de8d6c  cmp w26,#0x4
7101de8d70  b.hi 0x7101de8da8
7101de8d74  ldrb w19,[x8, x26, LSL ]
7101de8d78  sub x9,x29,#0xb0
7101de8d7c  ldr w22,[x9, x19, LSL #0x2]
7101de8d80  add x26,x25,#0x5
7101de8d84  cmp w22,#0x0
7101de8d88  b.gt 0x7101de8c88
7101de8d8c  cmp w26,#0x4
7101de8d90  b.hi 0x7101de8da8
7101de8d94  ldrb w19,[x8, x26, LSL ]
7101de8d98  sub x8,x29,#0xb0
7101de8d9c  ldr w22,[x8, x19, LSL #0x2]
7101de8da0  add x26,x25,#0x6
7101de8da4  b 0x7101de8c88
7101de8da8  ldr x21,[sp, #0x550]
7101de8dac  ldr x8,[x21, #0x8]
7101de8db0  cbz x8,0x7101de8dc8
7101de8db4  ldr x8,[x8, #0x18]
7101de8db8  cbz x8,0x7101de8dc8
7101de8dbc  ldrb w9,[x8, #0x58]
7101de8dc0  and w9,w9,#0xfe
7101de8dc4  strb w9,[x8, #0x58]
7101de8dc8  ldr x20,[sp, #0x508]
7101de8dcc  ldr x8,[x20]
7101de8dd0  cbz x8,0x7101de8de0
7101de8dd4  ldrb w9,[x8, #0x58]
7101de8dd8  and w9,w9,#0xfe
7101de8ddc  strb w9,[x8, #0x58]
7101de8de0  adrp x8,0x710523d000
7101de8de4  add x8,x8,#0x9a8
7101de8de8  str x8,[sp, #0x500]
7101de8dec  str xzr,[sp, #0x508]
7101de8df0  cbz x20,0x7101de8dfc
7101de8df4  mov x0,x20
7101de8df8  bl 0x710392eb40
7101de8dfc  adrp x8,0x710523d000
7101de8e00  add x8,x8,#0x988
7101de8e04  str x8,[sp, #0x548]
7101de8e08  str xzr,[sp, #0x550]
7101de8e0c  cbz x21,0x7101de8e30
7101de8e10  ldr x0,[x21, #0x18]
7101de8e14  adrp x8,0x710523d000
7101de8e18  add x8,x8,#0x9a8
7101de8e1c  stp x8,xzr,[x21, #0x10]
7101de8e20  cbz x0,0x7101de8e28
7101de8e24  bl 0x710392eb40
7101de8e28  mov x0,x21
7101de8e2c  bl 0x710392eb40
7101de8e30  ldr x19,[sp, #0x80]
7101de8e34  adrp x1,0x7104270000
7101de8e38  add x1,x1,#0x4c8
7101de8e3c  add x8,sp,#0x548
7101de8e40  mov w2,#0x4
7101de8e44  mov x0,x19
7101de8e48  bl 0x7103776640
7101de8e4c  adrp x1,0x7104308000
7101de8e50  add x1,x1,#0x95d
7101de8e54  add x8,sp,#0x500
7101de8e58  mov w2,#0x4
7101de8e5c  mov x0,x19
7101de8e60  bl 0x7103776910
7101de8e64  cmp w25,#0x5
7101de8e68  b.cs 0x7101de8fb0
7101de8e6c  adrp x8,0x7104545000
7101de8e70  add x8,x8,#0x9b8
7101de8e74  sub x9,x29,#0xb0
7101de8e78  ldrb w20,[x8, x25, LSL ]
7101de8e7c  ldr w21,[x9, x20, LSL #0x2]
7101de8e80  cmp w21,#0x1
7101de8e84  b.lt 0x7101de8f14
7101de8e88  ldr x19,[sp, #0x550]
7101de8e8c  ldr x8,[x19, #0x8]
7101de8e90  ldr x25,[sp, #0x60]
7101de8e94  cbz x8,0x7101de8eac
7101de8e98  ldr x8,[x8, #0x18]
7101de8e9c  cbz x8,0x7101de8eac
7101de8ea0  ldrb w9,[x8, #0x58]
7101de8ea4  orr w9,w9,#0x1
7101de8ea8  strb w9,[x8, #0x58]
7101de8eac  ldr x22,[sp, #0x508]
7101de8eb0  ldr x8,[x22]
7101de8eb4  cbz x8,0x7101de8ec4
7101de8eb8  ldrb w9,[x8, #0x58]
7101de8ebc  orr w9,w9,#0x1
7101de8ec0  strb w9,[x8, #0x58]
7101de8ec4  adrp x2,0x710432a000
7101de8ec8  add x2,x2,#0x5b5
7101de8ecc  add x0,sp,#0xa0
7101de8ed0  mov w1,#0x40
7101de8ed4  mov w3,#0x4
7101de8ed8  bl 0x71039c04d0
7101de8edc  mov w2,#0xffffffff
7101de8ee0  add x0,sp,#0x548
7101de8ee4  mov w1,w20
7101de8ee8  mov w3,wzr
7101de8eec  mov w4,wzr
7101de8ef0  bl 0x71025b12c0
7101de8ef4  add x0,sp,#0x500
7101de8ef8  add x1,sp,#0xa0
7101de8efc  mov w2,#0x1
7101de8f00  mov w3,w21
7101de8f04  bl 0x710377a280
7101de8f08  adrp x20,0x710523d000
7101de8f0c  add x20,x20,#0x9a8
7101de8f10  b 0x7101de8ff4
7101de8f14  add x9,x25,#0x1
7101de8f18  cmp w9,#0x4
7101de8f1c  b.hi 0x7101de8fb0
7101de8f20  ldrb w20,[x8, x9, LSL ]
7101de8f24  sub x9,x29,#0xb0
7101de8f28  ldr w21,[x9, x20, LSL #0x2]
7101de8f2c  cmp w21,#0x0
7101de8f30  b.gt 0x7101de8e88
7101de8f34  add x9,x25,#0x2
7101de8f38  cmp w9,#0x4
7101de8f3c  b.hi 0x7101de8fb0
7101de8f40  ldrb w20,[x8, x9, LSL ]
7101de8f44  sub x9,x29,#0xb0
7101de8f48  ldr w21,[x9, x20, LSL #0x2]
7101de8f4c  cmp w21,#0x0
7101de8f50  b.gt 0x7101de8e88
7101de8f54  add x9,x25,#0x3
7101de8f58  cmp w9,#0x4
7101de8f5c  b.hi 0x7101de8fb0
7101de8f60  ldrb w20,[x8, x9, LSL ]
7101de8f64  sub x9,x29,#0xb0
7101de8f68  ldr w21,[x9, x20, LSL #0x2]
7101de8f6c  cmp w21,#0x0
7101de8f70  b.gt 0x7101de8e88
7101de8f74  add x9,x25,#0x4
7101de8f78  cmp w9,#0x4
7101de8f7c  b.hi 0x7101de8fb0
7101de8f80  ldrb w20,[x8, x9, LSL ]
7101de8f84  sub x9,x29,#0xb0
7101de8f88  ldr w21,[x9, x20, LSL #0x2]
7101de8f8c  cmp w21,#0x0
7101de8f90  b.gt 0x7101de8e88
7101de8f94  add x9,x25,#0x5
7101de8f98  cmp w9,#0x4
7101de8f9c  b.hi 0x7101de8fb0
7101de8fa0  ldrb w20,[x8, x9, LSL ]
7101de8fa4  sub x8,x29,#0xb0
7101de8fa8  ldr w21,[x8, x20, LSL #0x2]
7101de8fac  b 0x7101de8e88
7101de8fb0  ldr x19,[sp, #0x550]
7101de8fb4  ldr x8,[x19, #0x8]
7101de8fb8  cbz x8,0x7101de8fd0
7101de8fbc  ldr x8,[x8, #0x18]
7101de8fc0  cbz x8,0x7101de8fd0
7101de8fc4  ldrb w9,[x8, #0x58]
7101de8fc8  and w9,w9,#0xfe
7101de8fcc  strb w9,[x8, #0x58]
7101de8fd0  ldr x22,[sp, #0x508]
7101de8fd4  ldr x8,[x22]
7101de8fd8  ldr x25,[sp, #0x60]
7101de8fdc  adrp x20,0x710523d000
7101de8fe0  add x20,x20,#0x9a8
7101de8fe4  cbz x8,0x7101de8ff4
7101de8fe8  ldrb w9,[x8, #0x58]
7101de8fec  and w9,w9,#0xfe
7101de8ff0  strb w9,[x8, #0x58]
7101de8ff4  str x20,[sp, #0x500]
7101de8ff8  str xzr,[sp, #0x508]
7101de8ffc  cbz x22,0x7101de9008
7101de9000  mov x0,x22
7101de9004  bl 0x710392eb40
7101de9008  adrp x8,0x710523d000
7101de900c  add x8,x8,#0x988
7101de9010  str x8,[sp, #0x548]
7101de9014  str xzr,[sp, #0x550]
7101de9018  cbz x19,0x7101de9034
7101de901c  ldr x0,[x19, #0x18]
7101de9020  stp x20,xzr,[x19, #0x10]
7101de9024  cbz x0,0x7101de902c
7101de9028  bl 0x710392eb40
7101de902c  mov x0,x19
7101de9030  bl 0x710392eb40
7101de9034  ldp x8,x9,[x28]
7101de9038  cmp x9,x8
7101de903c  b.ne 0x7101de9048
7101de9040  mov w19,wzr
7101de9044  b 0x7101de908c
7101de9048  mov x10,xzr
7101de904c  mov w19,wzr
7101de9050  mov w20,#0x1
7101de9054  orr w21,wzr,#0xffff
7101de9058  ldr x10,[x8, x10, LSL #0x3]
7101de905c  ldrh w0,[x10]
7101de9060  cmp w0,w21
7101de9064  b.eq 0x7101de9074
7101de9068  bl 0x71025ca5d0
7101de906c  ldp x8,x9,[x28]
7101de9070  add w19,w0,w19
7101de9074  sub x11,x9,x8
7101de9078  mov w10,w20
7101de907c  add w20,w20,#0x1
7101de9080  asr x11,x11,#0x3
7101de9084  cmp x11,x10
7101de9088  b.hi 0x7101de9058
7101de908c  ldr x0,[sp, #0x80]
7101de9090  adrp x1,0x7104319000
7101de9094  add x1,x1,#0x327
7101de9098  sub x8,x29,#0xb0
7101de909c  bl 0x7103776640
7101de90a0  adrp x1,0x7104338000
7101de90a4  add x1,x1,#0xd31
7101de90a8  add x8,sp,#0xa0
7101de90ac  sub x0,x29,#0xb0
7101de90b0  bl 0x7103776910
7101de90b4  adrp x1,0x710438c000
7101de90b8  add x1,x1,#0xfda
7101de90bc  add x0,sp,#0xa0
7101de90c0  mov w2,#0x1
7101de90c4  mov w3,w19
7101de90c8  bl 0x710377a280
7101de90cc  ldr x0,[sp, #0xa8]
7101de90d0  adrp x20,0x710523d000
7101de90d4  add x20,x20,#0x9a8
7101de90d8  stp x20,xzr,[sp, #0xa0]
7101de90dc  cbz x0,0x7101de90e4
7101de90e0  bl 0x710392eb40
7101de90e4  ldur x19,[x29, #-0xa8]
7101de90e8  adrp x8,0x710523d000
7101de90ec  add x8,x8,#0x988
7101de90f0  stp x8,xzr,[x29, #-0xb0]
7101de90f4  cbz x19,0x7101de9110
7101de90f8  ldr x0,[x19, #0x18]
7101de90fc  stp x20,xzr,[x19, #0x10]
7101de9100  cbz x0,0x7101de9108
7101de9104  bl 0x710392eb40
7101de9108  mov x0,x19
7101de910c  bl 0x710392eb40
7101de9110  ldp x8,x9,[x28]
7101de9114  sub x8,x9,x8
7101de9118  asr x8,x8,#0x3
7101de911c  cmp x8,#0xa
7101de9120  b.cs 0x7101dea790
7101de9124  sub x20,x24,x23
7101de9128  lsr x19,x20,#0x3
7101de912c  adrp x0,0x710433a000
7101de9130  add x0,x0,#0x617
7101de9134  add x8,sp,#0x438
7101de9138  mov w1,w19
7101de913c  add x21,sp,#0x438
7101de9140  bl 0x71003a4ca0
7101de9144  ldr x0,[x25, #0x18]
7101de9148  fmov s0,0x3f800000
7101de914c  add x1,x21,#0x8
7101de9150  adrp x21,0x710523d000
7101de9154  add x21,x21,#0x9a8
7101de9158  bl 0x7103778300
7101de915c  cbz w19,0x7101dea780
7101de9160  add x8,sp,#0xa0
7101de9164  add x9,x8,#0x8
7101de9168  ubfx x11,x20,#0x3,#0x20
7101de916c  stp x9,x28,[sp, #0x48]
7101de9170  sub x9,x29,#0xb0
7101de9174  add x9,x9,#0x8
7101de9178  str x9,[sp, #0x40]
7101de917c  add x9,sp,#0x548
7101de9180  add x10,x9,#0x8
7101de9184  str x10,[sp, #0x38]
7101de9188  add x10,sp,#0x500
7101de918c  add x8,x8,#0x9
7101de9190  stp x8,x11,[sp, #0x28]
7101de9194  fmov s8,0x3f800000
7101de9198  add x8,x10,#0x8
7101de919c  str x8,[sp, #0x78]
7101de91a0  add x8,x9,#0x9
7101de91a4  mov x23,xzr
7101de91a8  mov w25,#0x89
7101de91ac  str x8,[sp, #0x20]
7101de91b0  add x8,x10,#0x9
7101de91b4  str x8,[sp, #0x70]
7101de91b8  ldr x0,[sp, #0x80]
7101de91bc  add x8,sp,#0xa0
7101de91c0  adrp x1,0x71043cf000
7101de91c4  add x1,x1,#0x915
7101de91c8  mov w2,w23
7101de91cc  bl 0x7103776640
7101de91d0  add x8,sp,#0x428
7101de91d4  add x0,sp,#0xa0
7101de91d8  adrp x1,0x71042d6000
7101de91dc  add x1,x1,#0x9cf
7101de91e0  bl 0x7103776640
7101de91e4  ldr x19,[sp, #0xa8]
7101de91e8  adrp x8,0x710523d000
7101de91ec  add x8,x8,#0x988
7101de91f0  stp x8,xzr,[sp, #0xa0]
7101de91f4  cbz x19,0x7101de9210
7101de91f8  ldr x0,[x19, #0x18]
7101de91fc  stp x21,xzr,[x19, #0x10]
7101de9200  cbz x0,0x7101de9208
7101de9204  bl 0x710392eb40
7101de9208  mov x0,x19
7101de920c  bl 0x710392eb40
7101de9210  ldp x8,x9,[x28]
7101de9214  sub x9,x9,x8
7101de9218  asr x9,x9,#0x3
7101de921c  cmp x9,x23
7101de9220  b.ls 0x7101deaeb8
7101de9224  adrp x9,0x7105329000
7101de9228  ldr x9,[x9, #0xf98]
7101de922c  ldr x20,[x9]
7101de9230  ldr x8,[x8, x23, LSL #0x3]
7101de9234  ldrh w9,[x8]
7101de9238  ldr x8,[x20, #0x30]
7101de923c  ubfx x10,x9,#0x4,#0x1c
7101de9240  cmp w10,#0x177
7101de9244  b.cc 0x7101de929c
7101de9248  mov w10,#0xffffe890
7101de924c  add w9,w9,w10
7101de9250  and w10,w9,#0xffff
7101de9254  cmp w10,#0x63
7101de9258  adrp x26,0x710532a000
7101de925c  add x26,x26,#0x878
7101de9260  b.hi 0x7101de92b0
7101de9264  and x9,x9,#0xffff
7101de9268  mov w10,#0x50
7101de926c  madd x8,x9,x10,x8
7101de9270  mov w9,#0x8cc0
7101de9274  movk w9,#0x8, LSL #16
7101de9278  mov w10,#0x8cc8
7101de927c  movk w10,#0x8, LSL #16
7101de9280  add x9,x8,x9
7101de9284  ldrsh w8,[x8, x10, LSL #0x0]
7101de9288  cmn w8,#0x1
7101de928c  adrp x8,0x710532a000
7101de9290  add x8,x8,#0x878
7101de9294  csel x26,x8,x9,eq
7101de9298  b 0x7101de92b0
7101de929c  mov w10,#0x50
7101de92a0  madd x8,x9,x10,x8
7101de92a4  mov w9,#0x1940
7101de92a8  movk w9,#0x1, LSL #16
7101de92ac  add x26,x8,x9
7101de92b0  adrp x8,0x710532f000
7101de92b4  ldr x8,[x8, #0x730]
7101de92b8  ldr x0,[sp, #0x430]
7101de92bc  adrp x1,0x7104292000
7101de92c0  add x1,x1,#0x287
7101de92c4  ldr x27,[x8, #0x8]
7101de92c8  mov v0.16B,v8.16B
7101de92cc  bl 0x7103778300
7101de92d0  ldp x8,x9,[x28]
7101de92d4  sub x9,x9,x8
7101de92d8  asr x9,x9,#0x3
7101de92dc  cmp x9,x23
7101de92e0  b.ls 0x7101deaeb8
7101de92e4  ldr x8,[x8, x23, LSL #0x3]
7101de92e8  ldrsh x22,[x8, #0x8]
7101de92ec  cmp x22,#0x7d0
7101de92f0  cset w8,lt
7101de92f4  cmn x22,#0x1
7101de92f8  cset w9,ne
7101de92fc  and w12,w9,w8
7101de9300  and x19,x22,#0xffff
7101de9304  cmp w12,#0x1
7101de9308  b.ne 0x7101de9394
7101de930c  adrp x8,0x710532f000
7101de9310  ldr x8,[x8, #0x730]
7101de9314  ldr x8,[x8, #0x8]
7101de9318  ldr x10,[x8, #0x1d8]
7101de931c  add x8,x10,w19, SXTH  #0x1
7101de9320  orr x11,xzr,#-0x3333333333333334
7101de9324  ldp x9,x10,[x10, #0x20]
7101de9328  sub x10,x10,x9
7101de932c  asr x10,x10,#0x6
7101de9330  movk x11,#0xcccd
7101de9334  mul x10,x10,x11
7101de9338  ldrh w8,[x8, #0x60]
7101de933c  cmp w10,w8
7101de9340  b.ls 0x7101de9394
7101de9344  mov w11,#0x140
7101de9348  madd x9,x8,x11,x9
7101de934c  cmp x10,x8
7101de9350  adrp x8,0x7105182000
7101de9354  add x8,x8,#0xb08
7101de9358  csel x8,x9,x8,hi
7101de935c  ldrb w9,[x8, #0x5e]
7101de9360  cbz w9,0x7101de936c
7101de9364  mov w1,#0x4
7101de9368  b 0x7101de9398
7101de936c  ldrb w8,[x8, #0x6c]
7101de9370  sub w8,w8,#0x1
7101de9374  cmp w8,#0x2
7101de9378  b.hi 0x7101de9394
7101de937c  and x8,x8,#0xff
7101de9380  lsl x8,x8,#0x3
7101de9384  mov w9,#0x301
7101de9388  movk w9,#0x2, LSL #16
7101de938c  lsr w1,w9,w8
7101de9390  b 0x7101de9398
7101de9394  mov w1,wzr
7101de9398  ldr x8,[x27, #0x1d8]
7101de939c  cmn w22,#0x1
7101de93a0  b.eq 0x7101de93b0
7101de93a4  add x9,x8,x22, LSL #0x1
7101de93a8  ldrh w9,[x9, #0x60]
7101de93ac  b 0x7101de93b4
7101de93b0  mov w9,#0xffffffff
7101de93b4  ldp x10,x8,[x8, #0x20]
7101de93b8  str x20,[sp, #0x58]
7101de93bc  str w12,[sp, #0x6c]
7101de93c0  sub x8,x8,x10
7101de93c4  orr x11,xzr,#-0x3333333333333334
7101de93c8  movk x11,#0xcccd
7101de93cc  asr x8,x8,#0x6
7101de93d0  mul x8,x8,x11
7101de93d4  mov w11,#0x140
7101de93d8  madd x10,x9,x11,x10
7101de93dc  cmp x8,x9
7101de93e0  adrp x8,0x7105182000
7101de93e4  add x8,x8,#0xb08
7101de93e8  csel x28,x10,x8,hi
7101de93ec  ldrb w8,[x28, #0x68]
7101de93f0  cmp w8,#0x3
7101de93f4  b.hi 0x7101de954c
7101de93f8  adrp x9,0x71044fb000
7101de93fc  add x9,x9,#0x76c
7101de9400  ldrsw x8,[x9, x8, LSL #0x2]
7101de9404  add x8,x8,x9
7101de9408  br x8
7101de940c  mov x8,#0xa00000000
7101de9410  str x8,[sp, #0xa0]
7101de9414  mov x8,#0x6c63
7101de9418  movk x8,#0x7361, LSL #16
7101de941c  ldr x9,[sp, #0x28]
7101de9420  mov w10,#0x63
7101de9424  movk x8,#0x5f73, LSL #32
7101de9428  movk x8,#0x6f6e, LSL #48
7101de942c  str x8,[sp, #0xa8]
7101de9430  mov w8,#0x656e
7101de9434  strh w8,[sp, #0xb0]
7101de9438  mov w8,#0x9dc5
7101de943c  movk w8,#0x811c, LSL #16
7101de9440  strb wzr,[sp, #0xb2]
7101de9444  mul w8,w8,w25
7101de9448  and w10,w10,#0xff
7101de944c  eor w8,w8,w10
7101de9450  ldrb w10,[x9], #0x1
7101de9454  cbnz w10,0x7101de9444
7101de9458  b 0x7101de9598
7101de945c  mov x8,#0x900000000
7101de9460  ldr x9,[sp, #0x28]
7101de9464  mov w10,#0x63
7101de9468  str x8,[sp, #0xa0]
7101de946c  mov x8,#0x6c63
7101de9470  movk x8,#0x7361, LSL #16
7101de9474  movk x8,#0x5f73, LSL #32
7101de9478  movk x8,#0x6361, LSL #48
7101de947c  str x8,[sp, #0xa8]
7101de9480  mov w8,#0x9dc5
7101de9484  movk w8,#0x811c, LSL #16
7101de9488  mov w11,#0x65
7101de948c  strh w11,[sp, #0xb0]
7101de9490  mul w8,w8,w25
7101de9494  and w10,w10,#0xff
7101de9498  eor w8,w8,w10
7101de949c  ldrb w10,[x9], #0x1
7101de94a0  cbnz w10,0x7101de9490
7101de94a4  b 0x7101de9598
7101de94a8  mov x8,#0xa00000000
7101de94ac  str x8,[sp, #0xa0]
7101de94b0  mov x8,#0x6c63
7101de94b4  movk x8,#0x7361, LSL #16
7101de94b8  ldr x9,[sp, #0x28]
7101de94bc  mov w10,#0x63
7101de94c0  movk x8,#0x5f73, LSL #32
7101de94c4  movk x8,#0x6f68, LSL #48
7101de94c8  str x8,[sp, #0xa8]
7101de94cc  mov w8,#0x6570
7101de94d0  strh w8,[sp, #0xb0]
7101de94d4  mov w8,#0x9dc5
7101de94d8  movk w8,#0x811c, LSL #16
7101de94dc  strb wzr,[sp, #0xb2]
7101de94e0  mul w8,w8,w25
7101de94e4  and w10,w10,#0xff
7101de94e8  eor w8,w8,w10
7101de94ec  ldrb w10,[x9], #0x1
7101de94f0  cbnz w10,0x7101de94e0
7101de94f4  b 0x7101de9598
7101de94f8  orr x8,xzr,#0xc00000000
7101de94fc  str x8,[sp, #0xa0]
7101de9500  mov x8,#0x6c63
7101de9504  movk x8,#0x7361, LSL #16
7101de9508  ldr x9,[sp, #0x28]
7101de950c  mov w10,#0x63
7101de9510  movk x8,#0x5f73, LSL #32
7101de9514  movk x8,#0x656c, LSL #48
7101de9518  str x8,[sp, #0xa8]
7101de951c  mov w8,#0x6567
7101de9520  movk w8,#0x646e, LSL #16
7101de9524  str w8,[sp, #0xb0]
7101de9528  mov w8,#0x9dc5
7101de952c  movk w8,#0x811c, LSL #16
7101de9530  strb wzr,[sp, #0xb4]
7101de9534  mul w8,w8,w25
7101de9538  and w10,w10,#0xff
7101de953c  eor w8,w8,w10
7101de9540  ldrb w10,[x9], #0x1
7101de9544  cbnz w10,0x7101de9534
7101de9548  b 0x7101de9598
7101de954c  mov x8,#0xa00000000
7101de9550  str x8,[sp, #0xa0]
7101de9554  mov x8,#0x6c63
7101de9558  movk x8,#0x7361, LSL #16
7101de955c  ldr x9,[sp, #0x28]
7101de9560  mov w10,#0x63
7101de9564  movk x8,#0x5f73, LSL #32
7101de9568  movk x8,#0x6f6e, LSL #48
7101de956c  str x8,[sp, #0xa8]
7101de9570  mov w8,#0x656e
7101de9574  strh w8,[sp, #0xb0]
7101de9578  mov w8,#0x9dc5
7101de957c  movk w8,#0x811c, LSL #16
7101de9580  strb wzr,[sp, #0xb2]
7101de9584  mul w8,w8,w25
7101de9588  and w10,w10,#0xff
7101de958c  eor w8,w8,w10
7101de9590  ldrb w10,[x9], #0x1
7101de9594  cbnz w10,0x7101de9584
7101de9598  sub x0,x29,#0xb0
7101de959c  mov w2,wzr
7101de95a0  str w8,[sp, #0xa0]
7101de95a4  bl 0x710339dde0
7101de95a8  ldr x24,[sp, #0x40]
7101de95ac  ldr x0,[sp, #0x430]
7101de95b0  mov v0.16B,v8.16B
7101de95b4  mov x1,x24
7101de95b8  bl 0x7103778300
7101de95bc  ldr x0,[sp, #0x430]
7101de95c0  ldr x1,[sp, #0x48]
7101de95c4  mov v0.16B,v8.16B
7101de95c8  bl 0x7103778300
7101de95cc  add x8,sp,#0x548
7101de95d0  add x0,sp,#0x428
7101de95d4  adrp x1,0x7104319000
7101de95d8  add x1,x1,#0x364
7101de95dc  bl 0x7103776640
7101de95e0  ldr x20,[sp, #0x550]
7101de95e4  mov v0.16B,v8.16B
7101de95e8  mov x1,x24
7101de95ec  mov x0,x20
7101de95f0  bl 0x7103778300
7101de95f4  ldr x24,[sp, #0x38]
7101de95f8  adrp x8,0x710523d000
7101de95fc  add x8,x8,#0x988
7101de9600  str x8,[sp, #0x548]
7101de9604  str xzr,[sp, #0x550]
7101de9608  cbz x20,0x7101de9624
7101de960c  ldr x0,[x20, #0x18]
7101de9610  stp x21,xzr,[x20, #0x10]
7101de9614  cbz x0,0x7101de961c
7101de9618  bl 0x710392eb40
7101de961c  mov x0,x20
7101de9620  bl 0x710392eb40
7101de9624  add x8,sp,#0x548
7101de9628  add x0,sp,#0x428
7101de962c  adrp x1,0x710438d000
7101de9630  add x1,x1,#0x369
7101de9634  bl 0x7103776910
7101de9638  ldrh w3,[x26, #0x10]
7101de963c  add x0,sp,#0x548
7101de9640  mov w2,#0x1
7101de9644  adrp x1,0x71042e4000
7101de9648  add x1,x1,#0xfdc
7101de964c  bl 0x710377a280
7101de9650  ldr x0,[sp, #0x550]
7101de9654  str x21,[sp, #0x548]
7101de9658  str xzr,[sp, #0x550]
7101de965c  cbz x0,0x7101de9664
7101de9660  bl 0x710392eb40
7101de9664  add x8,sp,#0x548
7101de9668  add x0,sp,#0x428
7101de966c  adrp x1,0x7104306000
7101de9670  add x1,x1,#0x396
7101de9674  bl 0x7103776910
7101de9678  ldrh w3,[x26, #0x10]
7101de967c  add x0,sp,#0x548
7101de9680  mov w2,#0x1
7101de9684  adrp x1,0x71042e4000
7101de9688  add x1,x1,#0xfdc
7101de968c  bl 0x710377a280
7101de9690  ldr x0,[sp, #0x550]
7101de9694  str x21,[sp, #0x548]
7101de9698  str xzr,[sp, #0x550]
7101de969c  cbz x0,0x7101de96a4
7101de96a0  bl 0x710392eb40
7101de96a4  ldrb w20,[x28, #0x5e]
7101de96a8  sub x8,x29,#0xc0
7101de96ac  add x0,sp,#0x428
7101de96b0  adrp x1,0x7104327000
7101de96b4  add x1,x1,#0xe94
7101de96b8  bl 0x7103776640
7101de96bc  cbz w20,0x7101de96dc
7101de96c0  ldrh w8,[x28, #0x90]
7101de96c4  ldur x0,[x29, #-0xb8]
7101de96c8  str x0,[sp, #0x90]
7101de96cc  cbz w8,0x7101de976c
7101de96d0  adrp x1,0x7104463000
7101de96d4  add x1,x1,#0x92a
7101de96d8  b 0x7101de9774
7101de96dc  ldrsh w8,[x26, #0x8]
7101de96e0  cmn w8,#0x1
7101de96e4  b.eq 0x7101de96c0
7101de96e8  cmp w8,#0x7cf
7101de96ec  b.gt 0x7101de96c0
7101de96f0  ldr x9,[x27, #0x1d8]
7101de96f4  sxtw x8,w8
7101de96f8  add x8,x9,x8, LSL #0x1
7101de96fc  ldrh w10,[x8, #0x60]
7101de9700  ldp x8,x11,[x9, #0x20]
7101de9704  sub x11,x11,x8
7101de9708  lsr x11,x11,#0x6
7101de970c  mov w12,#0xcccd
7101de9710  movk w12,#0xcccc, LSL #16
7101de9714  mul w11,w11,w12
7101de9718  cmp w11,w10
7101de971c  b.ls 0x7101de96c0
7101de9720  add x9,x9,x10, LSL #0x1
7101de9724  ldrh w9,[x9, #0x1000]
7101de9728  cmp w11,w9
7101de972c  b.ls 0x7101de96c0
7101de9730  mov w10,#0x140
7101de9734  mul x9,x9,x10
7101de9738  ldrsh w8,[x8, x9, LSL #0x0]
7101de973c  cmn w8,#0x1
7101de9740  b.eq 0x7101de96c0
7101de9744  ldrh w8,[x26, #0x10]
7101de9748  ldur x0,[x29, #-0xb8]
7101de974c  cmp w8,#0x63
7101de9750  str x0,[sp, #0x90]
7101de9754  b.cc 0x7101de97ac
7101de9758  mov v0.16B,v8.16B
7101de975c  adrp x1,0x7104455000
7101de9760  add x1,x1,#0x10
7101de9764  bl 0x7103778300
7101de9768  b 0x7101de9780
7101de976c  adrp x1,0x71043cd000
7101de9770  add x1,x1,#0x335
7101de9774  mov v0.16B,v8.16B
7101de9778  bl 0x7103778300
7101de977c  cbz w20,0x7101de9790
7101de9780  ldr x0,[sp, #0x430]
7101de9784  adrp x1,0x71043e0000
7101de9788  add x1,x1,#0x6a3
7101de978c  b 0x7101de97c8
7101de9790  ldrh w8,[x26, #0x10]
7101de9794  ldr x0,[sp, #0x430]
7101de9798  cmp w8,#0x63
7101de979c  b.cc 0x7101de97c0
7101de97a0  adrp x1,0x7104306000
7101de97a4  add x1,x1,#0x3a8
7101de97a8  b 0x7101de97c8
7101de97ac  mov v0.16B,v8.16B
7101de97b0  adrp x1,0x710437a000
7101de97b4  add x1,x1,#0x53a
7101de97b8  bl 0x7103778300
7101de97bc  ldr x0,[sp, #0x430]
7101de97c0  adrp x1,0x71042a0000
7101de97c4  add x1,x1,#0xe51
7101de97c8  mov v0.16B,v8.16B
7101de97cc  bl 0x7103778300
7101de97d0  adrp x8,0x7105329000
7101de97d4  ldr x8,[x8, #0xf98]
7101de97d8  ldr x20,[x8]
7101de97dc  ldr x0,[x20, #0x20]
7101de97e0  mov w1,#0x1
7101de97e4  mov w3,#0x1
7101de97e8  mov x2,x19
7101de97ec  bl 0x710259c150
7101de97f0  ldr x20,[x20, #0x20]
7101de97f4  cmn w22,#0x1
7101de97f8  b.eq 0x7101de987c
7101de97fc  mov x0,x20
7101de9800  ldr x8,[x0, #0x28]!
7101de9804  ldr x9,[x0, #0x8]
7101de9808  sub x11,x9,x8
7101de980c  asr x9,x11,#0x3
7101de9810  cmp w9,#0x1
7101de9814  b.lt 0x7101de987c
7101de9818  mov x10,xzr
7101de981c  sbfx x11,x11,#0x3,#0x20
7101de9820  cmp x9,x10
7101de9824  b.ls 0x7101deaeb4
7101de9828  ldrh w12,[x8]
7101de982c  cmp w12,w22, UXTH 
7101de9830  b.eq 0x7101de9848
7101de9834  add x10,x10,#0x1
7101de9838  add x8,x8,#0x8
7101de983c  cmp x10,x11
7101de9840  b.lt 0x7101de9820
7101de9844  b 0x7101de987c
7101de9848  tbnz w10,#0x1f,0x7101de987c
7101de984c  adrp x8,0x710532f000
7101de9850  ldr x8,[x8, #0x730]
7101de9854  ldr x8,[x8, #0x8]
7101de9858  ldr x0,[x8, #0x1d8]
7101de985c  mov x1,x19
7101de9860  bl 0x71032a9470
7101de9864  mov x1,x0
7101de9868  add x0,x20,#0x8
7101de986c  orr w2,wzr,#0x18
7101de9870  bl 0x710323faf0
7101de9874  mov x20,x0
7101de9878  b 0x7101de9880
7101de987c  add x20,x20,#0x70
7101de9880  sub x8,x29,#0xd0
7101de9884  add x0,sp,#0x428
7101de9888  adrp x1,0x710436a000
7101de988c  add x1,x1,#0xc4b
7101de9890  add x19,sp,#0x548
7101de9894  bl 0x7103776910
7101de9898  ldur x0,[x29, #-0xc8]
7101de989c  mov x1,x20
7101de98a0  str x0,[sp, #0x88]
7101de98a4  bl 0x7103778b80
7101de98a8  ldrb w8,[x28, #0x68]
7101de98ac  cmp w8,#0x3
7101de98b0  b.hi 0x7101de9a08
7101de98b4  adrp x9,0x71044fb000
7101de98b8  add x9,x9,#0x77c
7101de98bc  ldrsw x8,[x9, x8, LSL #0x2]
7101de98c0  add x8,x8,x9
7101de98c4  br x8
7101de98c8  mov x8,#0xa00000000
7101de98cc  str x8,[sp, #0x548]
7101de98d0  mov x8,#0x6c63
7101de98d4  movk x8,#0x7361, LSL #16
7101de98d8  ldr x9,[sp, #0x20]
7101de98dc  mov w10,#0x63
7101de98e0  movk x8,#0x5f73, LSL #32
7101de98e4  movk x8,#0x6f6e, LSL #48
7101de98e8  str x8,[sp, #0x550]
7101de98ec  mov w8,#0x656e
7101de98f0  strh w8,[sp, #0x558]
7101de98f4  mov w8,#0x9dc5
7101de98f8  movk w8,#0x811c, LSL #16
7101de98fc  strb wzr,[sp, #0x55a]
7101de9900  mul w8,w8,w25
7101de9904  and w10,w10,#0xff
7101de9908  eor w8,w8,w10
7101de990c  ldrb w10,[x9], #0x1
7101de9910  cbnz w10,0x7101de9900
7101de9914  b 0x7101de9a54
7101de9918  mov x8,#0x900000000
7101de991c  ldr x9,[sp, #0x20]
7101de9920  mov w10,#0x63
7101de9924  str x8,[sp, #0x548]
7101de9928  mov x8,#0x6c63
7101de992c  movk x8,#0x7361, LSL #16
7101de9930  movk x8,#0x5f73, LSL #32
7101de9934  movk x8,#0x6361, LSL #48
7101de9938  str x8,[sp, #0x550]
7101de993c  mov w8,#0x9dc5
7101de9940  movk w8,#0x811c, LSL #16
7101de9944  mov w11,#0x65
7101de9948  strh w11,[sp, #0x558]
7101de994c  mul w8,w8,w25
7101de9950  and w10,w10,#0xff
7101de9954  eor w8,w8,w10
7101de9958  ldrb w10,[x9], #0x1
7101de995c  cbnz w10,0x7101de994c
7101de9960  b 0x7101de9a54
7101de9964  orr x8,xzr,#0xc00000000
7101de9968  str x8,[sp, #0x548]
7101de996c  mov x8,#0x6c63
7101de9970  movk x8,#0x7361, LSL #16
7101de9974  ldr x9,[sp, #0x20]
7101de9978  mov w10,#0x63
7101de997c  movk x8,#0x5f73, LSL #32
7101de9980  movk x8,#0x656c, LSL #48
7101de9984  str x8,[sp, #0x550]
7101de9988  mov w8,#0x6567
7101de998c  movk w8,#0x646e, LSL #16
7101de9990  str w8,[sp, #0x558]
7101de9994  mov w8,#0x9dc5
7101de9998  movk w8,#0x811c, LSL #16
7101de999c  strb wzr,[sp, #0x55c]
7101de99a0  mul w8,w8,w25
7101de99a4  and w10,w10,#0xff
7101de99a8  eor w8,w8,w10
7101de99ac  ldrb w10,[x9], #0x1
7101de99b0  cbnz w10,0x7101de99a0
7101de99b4  b 0x7101de9a54
7101de99b8  mov x8,#0xa00000000
7101de99bc  str x8,[sp, #0x548]
7101de99c0  mov x8,#0x6c63
7101de99c4  movk x8,#0x7361, LSL #16
7101de99c8  ldr x9,[sp, #0x20]
7101de99cc  mov w10,#0x63
7101de99d0  movk x8,#0x5f73, LSL #32
7101de99d4  movk x8,#0x6f68, LSL #48
7101de99d8  str x8,[sp, #0x550]
7101de99dc  mov w8,#0x6570
7101de99e0  strh w8,[sp, #0x558]
7101de99e4  mov w8,#0x9dc5
7101de99e8  movk w8,#0x811c, LSL #16
7101de99ec  strb wzr,[sp, #0x55a]
7101de99f0  mul w8,w8,w25
7101de99f4  and w10,w10,#0xff
7101de99f8  eor w8,w8,w10
7101de99fc  ldrb w10,[x9], #0x1
7101de9a00  cbnz w10,0x7101de99f0
7101de9a04  b 0x7101de9a54
7101de9a08  mov x8,#0xa00000000
7101de9a0c  str x8,[sp, #0x548]
7101de9a10  mov x8,#0x6c63
7101de9a14  movk x8,#0x7361, LSL #16
7101de9a18  ldr x9,[sp, #0x20]
7101de9a1c  mov w10,#0x63
7101de9a20  movk x8,#0x5f73, LSL #32
7101de9a24  movk x8,#0x6f6e, LSL #48
7101de9a28  str x8,[sp, #0x550]
7101de9a2c  mov w8,#0x656e
7101de9a30  strh w8,[sp, #0x558]
7101de9a34  mov w8,#0x9dc5
7101de9a38  movk w8,#0x811c, LSL #16
7101de9a3c  strb wzr,[sp, #0x55a]
7101de9a40  mul w8,w8,w25
7101de9a44  and w10,w10,#0xff
7101de9a48  eor w8,w8,w10
7101de9a4c  ldrb w10,[x9], #0x1
7101de9a50  cbnz w10,0x7101de9a40
7101de9a54  ldr x0,[sp, #0x430]
7101de9a58  mov v0.16B,v8.16B
7101de9a5c  mov x1,x24
7101de9a60  str w8,[sp, #0x548]
7101de9a64  bl 0x7103778300
7101de9a68  adrp x8,0x7105239000
7101de9a6c  add x8,x8,#0x1c0
7101de9a70  mov x11,x8
7101de9a74  ldr w8,[x8]
7101de9a78  ldr w9,[x11, #0x4]
7101de9a7c  eor w8,w8,w8, LSL #0xb
7101de9a80  str w9,[x11]
7101de9a84  ldp w9,w10,[x11, #0x8]
7101de9a88  eor w8,w8,w8, LSR #0x8
7101de9a8c  eor w8,w8,w10
7101de9a90  eor w8,w8,w10, LSR #0x13
7101de9a94  stp w9,w10,[x11, #0x4]
7101de9a98  mov w9,#0x851f
7101de9a9c  movk w9,#0x51eb, LSL #16
7101de9aa0  umull x9,w8,w9
7101de9aa4  lsr x9,x9,#0x25
7101de9aa8  mov w10,#0x64
7101de9aac  str w8,[x11, #0xc]
7101de9ab0  msub w21,w9,w10,w8
7101de9ab4  add x8,sp,#0x500
7101de9ab8  add x0,sp,#0x428
7101de9abc  adrp x1,0x710433a000
7101de9ac0  add x1,x1,#0x66a
7101de9ac4  bl 0x7103776640
7101de9ac8  ldr x20,[sp, #0x508]
7101de9acc  mov v0.16B,v8.16B
7101de9ad0  mov x1,x24
7101de9ad4  mov x0,x20
7101de9ad8  bl 0x7103778300
7101de9adc  adrp x8,0x710523d000
7101de9ae0  add x8,x8,#0x988
7101de9ae4  str x8,[sp, #0x500]
7101de9ae8  str xzr,[sp, #0x508]
7101de9aec  cbz x20,0x7101de9b10
7101de9af0  ldr x0,[x20, #0x18]
7101de9af4  adrp x8,0x710523d000
7101de9af8  add x8,x8,#0x9a8
7101de9afc  stp x8,xzr,[x20, #0x10]
7101de9b00  cbz x0,0x7101de9b08
7101de9b04  bl 0x710392eb40
7101de9b08  mov x0,x20
7101de9b0c  bl 0x710392eb40
7101de9b10  add x8,sp,#0x500
7101de9b14  add x0,sp,#0x428
7101de9b18  adrp x1,0x710433a000
7101de9b1c  add x1,x1,#0x66a
7101de9b20  bl 0x7103776640
7101de9b24  ucvtf s9,w21
7101de9b28  ldr x20,[sp, #0x508]
7101de9b2c  ldr x0,[x20, #0x8]
7101de9b30  cbz x0,0x7101de9b54
7101de9b34  adrp x1,0x710436a000
7101de9b38  add x1,x1,#0xc3e
7101de9b3c  bl 0x71037964b0
7101de9b40  cbz x0,0x7101de9b54
7101de9b44  ldr x8,[x0]
7101de9b48  ldr x8,[x8, #0x1a0]
7101de9b4c  mov v0.16B,v9.16B
7101de9b50  blr x8
7101de9b54  adrp x8,0x710523d000
7101de9b58  add x8,x8,#0x988
7101de9b5c  adrp x21,0x710523d000
7101de9b60  add x21,x21,#0x9a8
7101de9b64  str x8,[sp, #0x500]
7101de9b68  str xzr,[sp, #0x508]
7101de9b6c  cbz x20,0x7101de9b88
7101de9b70  ldr x0,[x20, #0x18]
7101de9b74  stp x21,xzr,[x20, #0x10]
7101de9b78  cbz x0,0x7101de9b80
7101de9b7c  bl 0x710392eb40
7101de9b80  mov x0,x20
7101de9b84  bl 0x710392eb40
7101de9b88  add x8,sp,#0x500
7101de9b8c  add x0,sp,#0x428
7101de9b90  adrp x1,0x710438d000
7101de9b94  add x1,x1,#0x2e
7101de9b98  bl 0x7103776640
7101de9b9c  ldr x20,[sp, #0x508]
7101de9ba0  mov v0.16B,v8.16B
7101de9ba4  mov x1,x24
7101de9ba8  mov x0,x20
7101de9bac  bl 0x7103778300
7101de9bb0  adrp x8,0x710523d000
7101de9bb4  add x8,x8,#0x988
7101de9bb8  str x8,[sp, #0x500]
7101de9bbc  str xzr,[sp, #0x508]
7101de9bc0  cbz x20,0x7101de9bdc
7101de9bc4  ldr x0,[x20, #0x18]
7101de9bc8  stp x21,xzr,[x20, #0x10]
7101de9bcc  cbz x0,0x7101de9bd4
7101de9bd0  bl 0x710392eb40
7101de9bd4  mov x0,x20
7101de9bd8  bl 0x710392eb40
7101de9bdc  add x8,sp,#0x500
7101de9be0  add x0,sp,#0x428
7101de9be4  adrp x1,0x710438d000
7101de9be8  add x1,x1,#0x2e
7101de9bec  bl 0x7103776640
7101de9bf0  ldr x20,[sp, #0x508]
7101de9bf4  ldr x0,[x20, #0x8]
7101de9bf8  cbz x0,0x7101de9c1c
7101de9bfc  adrp x1,0x7104453000
7101de9c00  add x1,x1,#0xac
7101de9c04  bl 0x71037964b0
7101de9c08  cbz x0,0x7101de9c1c
7101de9c0c  ldr x8,[x0]
7101de9c10  ldr x8,[x8, #0x1a0]
7101de9c14  mov v0.16B,v9.16B
7101de9c18  blr x8
7101de9c1c  adrp x8,0x710523d000
7101de9c20  add x8,x8,#0x988
7101de9c24  str x8,[sp, #0x500]
7101de9c28  str xzr,[sp, #0x508]
7101de9c2c  cbz x20,0x7101de9c48
7101de9c30  ldr x0,[x20, #0x18]
7101de9c34  stp x21,xzr,[x20, #0x10]
7101de9c38  cbz x0,0x7101de9c40
7101de9c3c  bl 0x710392eb40
7101de9c40  mov x0,x20
7101de9c44  bl 0x710392eb40
7101de9c48  add x8,sp,#0x500
7101de9c4c  add x0,sp,#0x428
7101de9c50  adrp x1,0x7104281000
7101de9c54  add x1,x1,#0x1a
7101de9c58  bl 0x7103776640
7101de9c5c  ldr x20,[sp, #0x508]
7101de9c60  mov v0.16B,v8.16B
7101de9c64  mov x1,x24
7101de9c68  mov x0,x20
7101de9c6c  bl 0x7103778300
7101de9c70  adrp x8,0x710523d000
7101de9c74  add x8,x8,#0x988
7101de9c78  str x8,[sp, #0x500]
7101de9c7c  str xzr,[sp, #0x508]
7101de9c80  cbz x20,0x7101de9c9c
7101de9c84  ldr x0,[x20, #0x18]
7101de9c88  stp x21,xzr,[x20, #0x10]
7101de9c8c  cbz x0,0x7101de9c94
7101de9c90  bl 0x710392eb40
7101de9c94  mov x0,x20
7101de9c98  bl 0x710392eb40
7101de9c9c  add x8,sp,#0x500
7101de9ca0  add x0,sp,#0x428
7101de9ca4  adrp x1,0x7104281000
7101de9ca8  add x1,x1,#0x1a
7101de9cac  bl 0x7103776640
7101de9cb0  ldr x20,[sp, #0x508]
7101de9cb4  ldr x0,[x20, #0x8]
7101de9cb8  cbz x0,0x7101de9cdc
7101de9cbc  adrp x1,0x7104442000
7101de9cc0  add x1,x1,#0x147
7101de9cc4  bl 0x71037964b0
7101de9cc8  cbz x0,0x7101de9cdc
7101de9ccc  ldr x8,[x0]
7101de9cd0  ldr x8,[x8, #0x1a0]
7101de9cd4  mov v0.16B,v9.16B
7101de9cd8  blr x8
7101de9cdc  adrp x8,0x710523d000
7101de9ce0  add x8,x8,#0x988
7101de9ce4  str x8,[sp, #0x500]
7101de9ce8  str xzr,[sp, #0x508]
7101de9cec  cbz x20,0x7101de9d08
7101de9cf0  ldr x0,[x20, #0x18]
7101de9cf4  stp x21,xzr,[x20, #0x10]
7101de9cf8  cbz x0,0x7101de9d00
7101de9cfc  bl 0x710392eb40
7101de9d00  mov x0,x20
7101de9d04  bl 0x710392eb40
7101de9d08  add x8,sp,#0x500
7101de9d0c  add x0,sp,#0x428
7101de9d10  adrp x1,0x7104422000
7101de9d14  add x1,x1,#0x8db
7101de9d18  bl 0x7103776640
7101de9d1c  ldr x20,[sp, #0x508]
7101de9d20  mov v0.16B,v8.16B
7101de9d24  mov x1,x24
7101de9d28  mov x0,x20
7101de9d2c  bl 0x7103778300
7101de9d30  adrp x8,0x710523d000
7101de9d34  add x8,x8,#0x988
7101de9d38  str x8,[sp, #0x500]
7101de9d3c  str xzr,[sp, #0x508]
7101de9d40  cbz x20,0x7101de9d5c
7101de9d44  ldr x0,[x20, #0x18]
7101de9d48  stp x21,xzr,[x20, #0x10]
7101de9d4c  cbz x0,0x7101de9d54
7101de9d50  bl 0x710392eb40
7101de9d54  mov x0,x20
7101de9d58  bl 0x710392eb40
7101de9d5c  add x8,sp,#0x500
7101de9d60  add x0,sp,#0x428
7101de9d64  adrp x1,0x7104422000
7101de9d68  add x1,x1,#0x8db
7101de9d6c  bl 0x7103776640
7101de9d70  ldr x20,[sp, #0x508]
7101de9d74  ldr x0,[x20, #0x8]
7101de9d78  cbz x0,0x7101de9d9c
7101de9d7c  adrp x1,0x7104464000
7101de9d80  add x1,x1,#0x374
7101de9d84  bl 0x71037964b0
7101de9d88  cbz x0,0x7101de9d9c
7101de9d8c  ldr x8,[x0]
7101de9d90  ldr x8,[x8, #0x1a0]
7101de9d94  mov v0.16B,v9.16B
7101de9d98  blr x8
7101de9d9c  adrp x8,0x710523d000
7101de9da0  add x8,x8,#0x988
7101de9da4  str x8,[sp, #0x500]
7101de9da8  str xzr,[sp, #0x508]
7101de9dac  cbz x20,0x7101de9dc8
7101de9db0  ldr x0,[x20, #0x18]
7101de9db4  stp x21,xzr,[x20, #0x10]
7101de9db8  cbz x0,0x7101de9dc0
7101de9dbc  bl 0x710392eb40
7101de9dc0  mov x0,x20
7101de9dc4  bl 0x710392eb40
7101de9dc8  add x8,sp,#0x500
7101de9dcc  add x0,sp,#0x428
7101de9dd0  adrp x1,0x710433a000
7101de9dd4  add x1,x1,#0x66a
7101de9dd8  bl 0x7103776640
7101de9ddc  ldr x20,[sp, #0x508]
7101de9de0  ldr x8,[x20, #0x8]
7101de9de4  cbz x8,0x7101de9e0c
7101de9de8  ldr x8,[x8, #0x18]
7101de9dec  cbz x8,0x7101de9e0c
7101de9df0  ldrb w9,[x28, #0x68]
7101de9df4  ldrb w10,[x8, #0x58]
7101de9df8  cmp w9,#0x3
7101de9dfc  cset w9,eq
7101de9e00  and w10,w10,#0xfe
7101de9e04  orr w9,w10,w9
7101de9e08  strb w9,[x8, #0x58]
7101de9e0c  adrp x8,0x710523d000
7101de9e10  add x8,x8,#0x988
7101de9e14  str x8,[sp, #0x500]
7101de9e18  str xzr,[sp, #0x508]
7101de9e1c  cbz x20,0x7101de9e38
7101de9e20  ldr x0,[x20, #0x18]
7101de9e24  stp x21,xzr,[x20, #0x10]
7101de9e28  cbz x0,0x7101de9e30
7101de9e2c  bl 0x710392eb40
7101de9e30  mov x0,x20
7101de9e34  bl 0x710392eb40
7101de9e38  add x8,sp,#0x500
7101de9e3c  add x0,sp,#0x428
7101de9e40  adrp x1,0x710438d000
7101de9e44  add x1,x1,#0x2e
7101de9e48  bl 0x7103776640
7101de9e4c  ldr x20,[sp, #0x508]
7101de9e50  ldr x8,[x20, #0x8]
7101de9e54  cbz x8,0x7101de9e7c
7101de9e58  ldr x8,[x8, #0x18]
7101de9e5c  cbz x8,0x7101de9e7c
7101de9e60  ldrb w9,[x28, #0x68]
7101de9e64  ldrb w10,[x8, #0x58]
7101de9e68  cmp w9,#0x2
7101de9e6c  cset w9,eq
7101de9e70  and w10,w10,#0xfe
7101de9e74  orr w9,w10,w9
7101de9e78  strb w9,[x8, #0x58]
7101de9e7c  adrp x8,0x710523d000
7101de9e80  add x8,x8,#0x988
7101de9e84  str x8,[sp, #0x500]
7101de9e88  str xzr,[sp, #0x508]
7101de9e8c  cbz x20,0x7101de9ea8
7101de9e90  ldr x0,[x20, #0x18]
7101de9e94  stp x21,xzr,[x20, #0x10]
7101de9e98  cbz x0,0x7101de9ea0
7101de9e9c  bl 0x710392eb40
7101de9ea0  mov x0,x20
7101de9ea4  bl 0x710392eb40
7101de9ea8  add x8,sp,#0x500
7101de9eac  add x0,sp,#0x428
7101de9eb0  adrp x1,0x7104281000
7101de9eb4  add x1,x1,#0x1a
7101de9eb8  bl 0x7103776640
7101de9ebc  ldr x20,[sp, #0x508]
7101de9ec0  ldr x8,[x20, #0x8]
7101de9ec4  cbz x8,0x7101de9eec
7101de9ec8  ldr x8,[x8, #0x18]
7101de9ecc  cbz x8,0x7101de9eec
7101de9ed0  ldrb w9,[x28, #0x68]
7101de9ed4  ldrb w10,[x8, #0x58]
7101de9ed8  cmp w9,#0x1
7101de9edc  cset w9,eq
7101de9ee0  and w10,w10,#0xfe
7101de9ee4  orr w9,w10,w9
7101de9ee8  strb w9,[x8, #0x58]
7101de9eec  adrp x8,0x710523d000
7101de9ef0  add x8,x8,#0x988
7101de9ef4  str x8,[sp, #0x500]
7101de9ef8  str xzr,[sp, #0x508]
7101de9efc  cbz x20,0x7101de9f18
7101de9f00  ldr x0,[x20, #0x18]
7101de9f04  stp x21,xzr,[x20, #0x10]
7101de9f08  cbz x0,0x7101de9f10
7101de9f0c  bl 0x710392eb40
7101de9f10  mov x0,x20
7101de9f14  bl 0x710392eb40
7101de9f18  add x8,sp,#0x500
7101de9f1c  add x0,sp,#0x428
7101de9f20  adrp x1,0x7104422000
7101de9f24  add x1,x1,#0x8db
7101de9f28  bl 0x7103776640
7101de9f2c  ldr x20,[sp, #0x508]
7101de9f30  ldr x8,[x20, #0x8]
7101de9f34  cbz x8,0x7101de9f5c
7101de9f38  ldr x8,[x8, #0x18]
7101de9f3c  cbz x8,0x7101de9f5c
7101de9f40  ldrb w9,[x28, #0x68]
7101de9f44  ldrb w10,[x8, #0x58]
7101de9f48  cmp w9,#0x0
7101de9f4c  cset w9,eq
7101de9f50  and w10,w10,#0xfe
7101de9f54  orr w9,w10,w9
7101de9f58  strb w9,[x8, #0x58]
7101de9f5c  adrp x8,0x710523d000
7101de9f60  add x8,x8,#0x988
7101de9f64  str x8,[sp, #0x500]
7101de9f68  str xzr,[sp, #0x508]
7101de9f6c  cbz x20,0x7101de9f88
7101de9f70  ldr x0,[x20, #0x18]
7101de9f74  stp x21,xzr,[x20, #0x10]
7101de9f78  cbz x0,0x7101de9f80
7101de9f7c  bl 0x710392eb40
7101de9f80  mov x0,x20
7101de9f84  bl 0x710392eb40
7101de9f88  mov x8,#0x500000000
7101de9f8c  str x8,[sp, #0x500]
7101de9f90  mov w8,#0x6e61
7101de9f94  movk w8,#0x6d69, LSL #16
7101de9f98  str w8,[sp, #0x508]
7101de9f9c  ldr x8,[sp, #0x70]
7101de9fa0  mov w10,#0x61
7101de9fa4  mov w9,#0x9dc5
7101de9fa8  movk w9,#0x811c, LSL #16
7101de9fac  mov w11,#0x5f
7101de9fb0  strh w11,[sp, #0x50c]
7101de9fb4  mul w9,w9,w25
7101de9fb8  and w10,w10,#0xff
7101de9fbc  eor w9,w9,w10
7101de9fc0  ldrb w10,[x8], #0x1
7101de9fc4  cbnz w10,0x7101de9fb4
7101de9fc8  mov w8,#0x8
7101de9fcc  add x13,sp,#0x500
7101de9fd0  str w9,[sp, #0x500]
7101de9fd4  add x9,x19,x8
7101de9fd8  ldrb w10,[x9]
7101de9fdc  cbz w10,0x7101dea020
7101de9fe0  ldrsw x11,[sp, #0x504]
7101de9fe4  ldrb w9,[x9, #0x1]
7101de9fe8  add w12,w11,#0x1
7101de9fec  add x11,x13,x11
7101de9ff0  str w12,[sp, #0x504]
7101de9ff4  strb w10,[x11, #0x8]
7101de9ff8  cbz w9,0x7101dea020
7101de9ffc  ldrsw x10,[sp, #0x504]
7101dea000  add w11,w10,#0x1
7101dea004  add x10,x13,x10
7101dea008  add x8,x8,#0x2
7101dea00c  str w11,[sp, #0x504]
7101dea010  strb w9,[x10, #0x8]
7101dea014  sub w9,w8,#0x4
7101dea018  cmp w9,#0x3e
7101dea01c  b.cc 0x7101de9fd4
7101dea020  ldrsw x8,[sp, #0x504]
7101dea024  add x9,x13,#0x8
7101dea028  strb wzr,[x9, x8, LSL ]
7101dea02c  ldrb w8,[sp, #0x508]
7101dea030  mov w9,#0x9dc5
7101dea034  movk w9,#0x811c, LSL #16
7101dea038  cbz w8,0x7101dea05c
7101dea03c  ldr x10,[sp, #0x70]
7101dea040  mov w9,#0x9dc5
7101dea044  movk w9,#0x811c, LSL #16
7101dea048  mul w9,w9,w25
7101dea04c  and w8,w8,#0xff
7101dea050  eor w9,w9,w8
7101dea054  ldrb w8,[x10], #0x1
7101dea058  cbnz w8,0x7101dea048
7101dea05c  add x8,sp,#0x4d0
7101dea060  add x0,sp,#0x428
7101dea064  adrp x1,0x71042d6000
7101dea068  add x1,x1,#0x9cf
7101dea06c  str w9,[sp, #0x500]
7101dea070  bl 0x7103776640
7101dea074  ldr x20,[sp, #0x4d8]
7101dea078  ldr x1,[sp, #0x78]
7101dea07c  mov v0.16B,v8.16B
7101dea080  mov x0,x20
7101dea084  bl 0x7103778300
7101dea088  adrp x8,0x710523d000
7101dea08c  add x8,x8,#0x988
7101dea090  str x8,[sp, #0x4d0]
7101dea094  str xzr,[sp, #0x4d8]
7101dea098  cbz x20,0x7101dea0b4
7101dea09c  ldr x0,[x20, #0x18]
7101dea0a0  stp x21,xzr,[x20, #0x10]
7101dea0a4  cbz x0,0x7101dea0ac
7101dea0a8  bl 0x710392eb40
7101dea0ac  mov x0,x20
7101dea0b0  bl 0x710392eb40
7101dea0b4  ldr x8,[sp, #0x430]
7101dea0b8  ldr x0,[x8, #0x8]
7101dea0bc  cbz x0,0x7101dea0dc
7101dea0c0  ldr x1,[sp, #0x78]
7101dea0c4  bl 0x71037964b0
7101dea0c8  cbz x0,0x7101dea0dc
7101dea0cc  ldr x8,[x0]
7101dea0d0  ldr x8,[x8, #0x1a0]
7101dea0d4  mov v0.16B,v9.16B
7101dea0d8  blr x8
7101dea0dc  ldrsh x8,[x26, #0x8]
7101dea0e0  ldr x9,[x27, #0x1d8]
7101dea0e4  cmn x8,#0x1
7101dea0e8  b.eq 0x7101dea0f8
7101dea0ec  add x8,x9,x8, LSL #0x1
7101dea0f0  ldrh w8,[x8, #0x60]
7101dea0f4  b 0x7101dea0f8
7101dea0f8  ldp x10,x9,[x9, #0x20]
7101dea0fc  sub x9,x9,x10
7101dea100  lsr x9,x9,#0x6
7101dea104  mov w11,#0xcccd
7101dea108  movk w11,#0xcccc, LSL #16
7101dea10c  mul w9,w9,w11
7101dea110  cmp w8,w9
7101dea114  b.cs 0x7101dea1cc
7101dea118  mov w9,#0x140
7101dea11c  umaddl x8,w8,w9,x10
7101dea120  ldrb w8,[x8, #0x5e]
7101dea124  cmp w8,#0x1
7101dea128  b.ne 0x7101dea1cc
7101dea12c  adrp x8,0x710532f000
7101dea130  ldr x8,[x8, #0x730]
7101dea134  ldr x8,[x8, #0x8]
7101dea138  ldr x0,[x8, #0x218]
7101dea13c  ldrh w1,[x28, #0x6a]
7101dea140  bl 0x71032a0fd0
7101dea144  mov w20,w0
7101dea148  add x8,sp,#0x4f0
7101dea14c  add x0,sp,#0x428
7101dea150  adrp x1,0x710424f000
7101dea154  add x1,x1,#0xae5
7101dea158  bl 0x7103776910
7101dea15c  and w20,w20,#0xff
7101dea160  sub w8,w20,#0x1
7101dea164  cmp w8,#0x2
7101dea168  b.hi 0x7101dea260
7101dea16c  add x0,sp,#0x4d0
7101dea170  mov w1,#0x20
7101dea174  adrp x2,0x710437c000
7101dea178  add x2,x2,#0xacd
7101dea17c  mov w3,w20
7101dea180  bl 0x71039c04d0
7101dea184  ldr x0,[sp, #0x430]
7101dea188  mov v0.16B,v8.16B
7101dea18c  add x1,sp,#0x4d0
7101dea190  bl 0x7103778300
7101dea194  add x0,sp,#0x4f0
7101dea198  mov w2,#0x1
7101dea19c  adrp x1,0x7104319000
7101dea1a0  add x1,x1,#0x388
7101dea1a4  mov w3,w20
7101dea1a8  bl 0x710377a280
7101dea1ac  ldr x0,[sp, #0x4f8]
7101dea1b0  ldr x8,[x0]
7101dea1b4  adrp x24,0x71043cd000
7101dea1b8  add x24,x24,#0x335
7101dea1bc  cbz x8,0x7101dea294
7101dea1c0  ldrb w9,[x8, #0x58]
7101dea1c4  orr w9,w9,#0x1
7101dea1c8  b 0x7101dea290
7101dea1cc  add x8,sp,#0x4f0
7101dea1d0  add x0,sp,#0x428
7101dea1d4  adrp x1,0x710424f000
7101dea1d8  add x1,x1,#0xae5
7101dea1dc  bl 0x7103776910
7101dea1e0  ldrb w3,[x28, #0x69]
7101dea1e4  sub w8,w3,#0x1
7101dea1e8  cmp w8,#0x2
7101dea1ec  b.hi 0x7101dea250
7101dea1f0  add x0,sp,#0x4d0
7101dea1f4  mov w1,#0x20
7101dea1f8  adrp x2,0x710424f000
7101dea1fc  add x2,x2,#0xa8f
7101dea200  bl 0x71039c04d0
7101dea204  ldr x0,[sp, #0x430]
7101dea208  mov v0.16B,v8.16B
7101dea20c  add x1,sp,#0x4d0
7101dea210  bl 0x7103778300
7101dea214  ldrb w3,[x28, #0x69]
7101dea218  add x0,sp,#0x4f0
7101dea21c  mov w2,#0x1
7101dea220  adrp x1,0x7104319000
7101dea224  add x1,x1,#0x388
7101dea228  bl 0x710377a280
7101dea22c  ldr x0,[sp, #0x4f8]
7101dea230  ldr x8,[x0]
7101dea234  cbz x8,0x7101dea244
7101dea238  ldrb w9,[x8, #0x58]
7101dea23c  orr w9,w9,#0x1
7101dea240  strb w9,[x8, #0x58]
7101dea244  adrp x24,0x71043cd000
7101dea248  add x24,x24,#0x335
7101dea24c  b 0x7101dea294
7101dea250  ldr x0,[sp, #0x430]
7101dea254  adrp x1,0x710432a000
7101dea258  add x1,x1,#0x5ee
7101dea25c  b 0x7101dea26c
7101dea260  ldr x0,[sp, #0x430]
7101dea264  adrp x1,0x710433a000
7101dea268  add x1,x1,#0x681
7101dea26c  mov v0.16B,v8.16B
7101dea270  bl 0x7103778300
7101dea274  ldr x0,[sp, #0x4f8]
7101dea278  ldr x8,[x0]
7101dea27c  adrp x24,0x71043cd000
7101dea280  add x24,x24,#0x335
7101dea284  cbz x8,0x7101dea294
7101dea288  ldrb w9,[x8, #0x58]
7101dea28c  and w9,w9,#0xfe
7101dea290  strb w9,[x8, #0x58]
7101dea294  str x21,[sp, #0x4f0]
7101dea298  str xzr,[sp, #0x4f8]
7101dea29c  cbz x0,0x7101dea2a4
7101dea2a0  bl 0x710392eb40
7101dea2a4  ldr x8,[sp, #0x60]
7101dea2a8  ldr w8,[x8, #0x5e4]
7101dea2ac  cmp w8,#0x1
7101dea2b0  b.ne 0x7101dea390
7101dea2b4  add x8,sp,#0x4d0
7101dea2b8  add x0,sp,#0x428
7101dea2bc  adrp x1,0x71042f8000
7101dea2c0  add x1,x1,#0x851
7101dea2c4  bl 0x7103776640
7101dea2c8  ldr x20,[sp, #0x4d8]
7101dea2cc  mov v0.16B,v8.16B
7101dea2d0  adrp x1,0x7104292000
7101dea2d4  add x1,x1,#0x57e
7101dea2d8  mov x0,x20
7101dea2dc  bl 0x7103778300
7101dea2e0  adrp x8,0x710523d000
7101dea2e4  add x8,x8,#0x988
7101dea2e8  str x8,[sp, #0x4d0]
7101dea2ec  str xzr,[sp, #0x4d8]
7101dea2f0  cbz x20,0x7101dea30c
7101dea2f4  ldr x0,[x20, #0x18]
7101dea2f8  stp x21,xzr,[x20, #0x10]
7101dea2fc  cbz x0,0x7101dea304
7101dea300  bl 0x710392eb40
7101dea304  mov x0,x20
7101dea308  bl 0x710392eb40
7101dea30c  add x8,sp,#0x4f0
7101dea310  add x0,sp,#0x428
7101dea314  adrp x1,0x71042f8000
7101dea318  add x1,x1,#0x851
7101dea31c  bl 0x7103776640
7101dea320  add x8,sp,#0x4d0
7101dea324  add x0,sp,#0x4f0
7101dea328  adrp x1,0x710434a000
7101dea32c  add x1,x1,#0x8da
7101dea330  bl 0x7103776910
7101dea334  ldr w8,[sp, #0x6c]
7101dea338  cbz w8,0x7101dea3d0
7101dea33c  adrp x8,0x710532f000
7101dea340  ldr x8,[x8, #0x730]
7101dea344  ldr x8,[x8, #0x8]
7101dea348  ldr x8,[x8, #0x1d8]
7101dea34c  add x9,x8,x22, LSL #0x1
7101dea350  ldrh w9,[x9, #0x60]
7101dea354  ldp x10,x8,[x8, #0x20]
7101dea358  sub x8,x8,x10
7101dea35c  mov w10,#0xcccd
7101dea360  movk w10,#0xcccc, LSL #16
7101dea364  lsr x8,x8,#0x6
7101dea368  mul w8,w8,w10
7101dea36c  cmp w8,w9
7101dea370  b.ls 0x7101dea3d0
7101dea374  ldr x8,[sp, #0x58]
7101dea378  mov w9,#0x24
7101dea37c  mul x9,x22,x9
7101dea380  ldr x8,[x8, #0x30]
7101dea384  add x8,x8,x9
7101dea388  ldrh w3,[x8, #0x20]
7101dea38c  b 0x7101dea3d4
7101dea390  add x8,sp,#0x4d0
7101dea394  add x0,sp,#0x428
7101dea398  adrp x1,0x71042f8000
7101dea39c  add x1,x1,#0x851
7101dea3a0  bl 0x7103776640
7101dea3a4  ldr x20,[sp, #0x4d8]
7101dea3a8  mov v0.16B,v8.16B
7101dea3ac  mov x1,x24
7101dea3b0  mov x0,x20
7101dea3b4  bl 0x7103778300
7101dea3b8  adrp x8,0x710523d000
7101dea3bc  add x8,x8,#0x988
7101dea3c0  str x8,[sp, #0x4d0]
7101dea3c4  str xzr,[sp, #0x4d8]
7101dea3c8  cbnz x20,0x7101dea414
7101dea3cc  b 0x7101dea42c
7101dea3d0  mov w3,wzr
7101dea3d4  add x0,sp,#0x4d0
7101dea3d8  mov w2,#0x1
7101dea3dc  adrp x1,0x71042b4000
7101dea3e0  add x1,x1,#0x894
7101dea3e4  bl 0x710377a280
7101dea3e8  ldr x0,[sp, #0x4d8]
7101dea3ec  str x21,[sp, #0x4d0]
7101dea3f0  str xzr,[sp, #0x4d8]
7101dea3f4  cbz x0,0x7101dea3fc
7101dea3f8  bl 0x710392eb40
7101dea3fc  ldr x20,[sp, #0x4f8]
7101dea400  adrp x8,0x710523d000
7101dea404  add x8,x8,#0x988
7101dea408  str x8,[sp, #0x4f0]
7101dea40c  str xzr,[sp, #0x4f8]
7101dea410  cbz x20,0x7101dea42c
7101dea414  ldr x0,[x20, #0x18]
7101dea418  stp x21,xzr,[x20, #0x10]
7101dea41c  cbz x0,0x7101dea424
7101dea420  bl 0x710392eb40
7101dea424  mov x0,x20
7101dea428  bl 0x710392eb40
7101dea42c  add x8,sp,#0x4d0
7101dea430  add x0,sp,#0x428
7101dea434  adrp x1,0x7104308000
7101dea438  add x1,x1,#0xa24
7101dea43c  bl 0x7103776640
7101dea440  ldr x21,[sp, #0x4d8]
7101dea444  mov v0.16B,v8.16B
7101dea448  mov x1,x24
7101dea44c  mov x0,x21
7101dea450  bl 0x7103778300
7101dea454  adrp x8,0x7105329000
7101dea458  ldr x8,[x8, #0xf98]
7101dea45c  ldr x8,[x8]
7101dea460  add x20,x8,#0x38
7101dea464  add x8,sp,#0x4f0
7101dea468  add x0,sp,#0x428
7101dea46c  adrp x1,0x7104455000
7101dea470  add x1,x1,#0x6b
7101dea474  bl 0x7103776640
7101dea478  ldrh w1,[x26]
7101dea47c  mov x0,x20
7101dea480  bl 0x710251a7e0
7101dea484  ldr x22,[sp, #0x4f8]
7101dea488  tbz w0,#0x0,0x7101dea49c
7101dea48c  mov x0,x22
7101dea490  adrp x1,0x7104292000
7101dea494  add x1,x1,#0x57e
7101dea498  b 0x7101dea4a4
7101dea49c  mov x0,x22
7101dea4a0  mov x1,x24
7101dea4a4  mov v0.16B,v8.16B
7101dea4a8  bl 0x7103778300
7101dea4ac  add x8,sp,#0x4c0
7101dea4b0  add x0,sp,#0x428
7101dea4b4  adrp x1,0x7104308000
7101dea4b8  add x1,x1,#0x944
7101dea4bc  bl 0x7103776640
7101dea4c0  ldr x27,[sp, #0x4c8]
7101dea4c4  mov v0.16B,v8.16B
7101dea4c8  mov x1,x24
7101dea4cc  mov x0,x27
7101dea4d0  bl 0x7103778300
7101dea4d4  add x8,sp,#0x4b0
7101dea4d8  add x0,sp,#0x428
7101dea4dc  adrp x1,0x7104292000
7101dea4e0  add x1,x1,#0x272
7101dea4e4  bl 0x7103776640
7101dea4e8  ldr x28,[sp, #0x4b8]
7101dea4ec  mov v0.16B,v8.16B
7101dea4f0  mov x1,x24
7101dea4f4  mov x0,x28
7101dea4f8  bl 0x7103778300
7101dea4fc  add x8,sp,#0x4a0
7101dea500  add x0,sp,#0x428
7101dea504  adrp x1,0x71042a3000
7101dea508  add x1,x1,#0x598
7101dea50c  bl 0x7103776640
7101dea510  ldr x20,[sp, #0x4a8]
7101dea514  mov v0.16B,v8.16B
7101dea518  mov x1,x24
7101dea51c  mov x0,x20
7101dea520  bl 0x7103778300
7101dea524  add x8,sp,#0x490
7101dea528  add x0,sp,#0x428
7101dea52c  adrp x1,0x7104401000
7101dea530  add x1,x1,#0xaa2
7101dea534  bl 0x7103776640
7101dea538  ldr x19,[sp, #0x498]
7101dea53c  mov v0.16B,v8.16B
7101dea540  mov x1,x24
7101dea544  mov x0,x19
7101dea548  bl 0x7103778300
7101dea54c  add x8,sp,#0x480
7101dea550  add x0,sp,#0x428
7101dea554  adrp x1,0x7104443000
7101dea558  add x1,x1,#0xd28
7101dea55c  bl 0x7103776640
7101dea560  ldrb w8,[x26, #0x3e]
7101dea564  ldr x26,[sp, #0x488]
7101dea568  mov x0,x26
7101dea56c  tbnz w8,#0x0,0x7101dea578
7101dea570  mov x1,x24
7101dea574  b 0x7101dea580
7101dea578  adrp x1,0x7104292000
7101dea57c  add x1,x1,#0x57e
7101dea580  mov v0.16B,v8.16B
7101dea584  bl 0x7103778300
7101dea588  ldr x24,[sp, #0x88]
7101dea58c  adrp x8,0x710523d000
7101dea590  add x8,x8,#0x988
7101dea594  str x8,[sp, #0x480]
7101dea598  str xzr,[sp, #0x488]
7101dea59c  cbz x26,0x7101dea5c0
7101dea5a0  ldr x0,[x26, #0x18]
7101dea5a4  adrp x8,0x710523d000
7101dea5a8  add x8,x8,#0x9a8
7101dea5ac  stp x8,xzr,[x26, #0x10]
7101dea5b0  cbz x0,0x7101dea5b8
7101dea5b4  bl 0x710392eb40
7101dea5b8  mov x0,x26
7101dea5bc  bl 0x710392eb40
7101dea5c0  adrp x8,0x710523d000
7101dea5c4  add x8,x8,#0x988
7101dea5c8  str x8,[sp, #0x490]
7101dea5cc  str xzr,[sp, #0x498]
7101dea5d0  cbz x19,0x7101dea5f4
7101dea5d4  ldr x0,[x19, #0x18]
7101dea5d8  adrp x8,0x710523d000
7101dea5dc  add x8,x8,#0x9a8
7101dea5e0  stp x8,xzr,[x19, #0x10]
7101dea5e4  cbz x0,0x7101dea5ec
7101dea5e8  bl 0x710392eb40
7101dea5ec  mov x0,x19
7101dea5f0  bl 0x710392eb40
7101dea5f4  adrp x8,0x710523d000
7101dea5f8  add x8,x8,#0x988
7101dea5fc  str x8,[sp, #0x4a0]
7101dea600  str xzr,[sp, #0x4a8]
7101dea604  cbz x20,0x7101dea628
7101dea608  ldr x0,[x20, #0x18]
7101dea60c  adrp x8,0x710523d000
7101dea610  add x8,x8,#0x9a8
7101dea614  stp x8,xzr,[x20, #0x10]
7101dea618  cbz x0,0x7101dea620
7101dea61c  bl 0x710392eb40
7101dea620  mov x0,x20
7101dea624  bl 0x710392eb40
7101dea628  adrp x8,0x710523d000
7101dea62c  add x8,x8,#0x988
7101dea630  str x8,[sp, #0x4b0]
7101dea634  str xzr,[sp, #0x4b8]
7101dea638  cbz x28,0x7101dea65c
7101dea63c  ldr x0,[x28, #0x18]
7101dea640  adrp x8,0x710523d000
7101dea644  add x8,x8,#0x9a8
7101dea648  stp x8,xzr,[x28, #0x10]
7101dea64c  cbz x0,0x7101dea654
7101dea650  bl 0x710392eb40
7101dea654  mov x0,x28
7101dea658  bl 0x710392eb40
7101dea65c  ldr x28,[sp, #0x50]
7101dea660  adrp x8,0x710523d000
7101dea664  add x8,x8,#0x988
7101dea668  str x8,[sp, #0x4c0]
7101dea66c  str xzr,[sp, #0x4c8]
7101dea670  cbz x27,0x7101dea694
7101dea674  ldr x0,[x27, #0x18]
7101dea678  adrp x8,0x710523d000
7101dea67c  add x8,x8,#0x9a8
7101dea680  stp x8,xzr,[x27, #0x10]
7101dea684  cbz x0,0x7101dea68c
7101dea688  bl 0x710392eb40
7101dea68c  mov x0,x27
7101dea690  bl 0x710392eb40
7101dea694  adrp x8,0x710523d000
7101dea698  add x8,x8,#0x988
7101dea69c  str x8,[sp, #0x4f0]
7101dea6a0  str xzr,[sp, #0x4f8]
7101dea6a4  cbz x22,0x7101dea6c8
7101dea6a8  ldr x0,[x22, #0x18]
7101dea6ac  adrp x8,0x710523d000
7101dea6b0  add x8,x8,#0x9a8
7101dea6b4  stp x8,xzr,[x22, #0x10]
7101dea6b8  cbz x0,0x7101dea6c0
7101dea6bc  bl 0x710392eb40
7101dea6c0  mov x0,x22
7101dea6c4  bl 0x710392eb40
7101dea6c8  adrp x8,0x710523d000
7101dea6cc  add x8,x8,#0x988
7101dea6d0  str x8,[sp, #0x4d0]
7101dea6d4  str xzr,[sp, #0x4d8]
7101dea6d8  cbz x21,0x7101dea6fc
7101dea6dc  ldr x0,[x21, #0x18]
7101dea6e0  adrp x8,0x710523d000
7101dea6e4  add x8,x8,#0x9a8
7101dea6e8  stp x8,xzr,[x21, #0x10]
7101dea6ec  cbz x0,0x7101dea6f4
7101dea6f0  bl 0x710392eb40
7101dea6f4  mov x0,x21
7101dea6f8  bl 0x710392eb40
7101dea6fc  adrp x21,0x710523d000
7101dea700  add x21,x21,#0x9a8
7101dea704  stp x21,xzr,[x29, #-0xd0]
7101dea708  cbz x24,0x7101dea714
7101dea70c  mov x0,x24
7101dea710  bl 0x710392eb40
7101dea714  adrp x8,0x710523d000
7101dea718  add x8,x8,#0x988
7101dea71c  stp x8,xzr,[x29, #-0xc0]
7101dea720  ldr x8,[sp, #0x90]
7101dea724  cbz x8,0x7101dea740
7101dea728  ldr x0,[x8, #0x18]
7101dea72c  stp x21,xzr,[x8, #0x10]
7101dea730  cbz x0,0x7101dea738
7101dea734  bl 0x710392eb40
7101dea738  ldr x0,[sp, #0x90]
7101dea73c  bl 0x710392eb40
7101dea740  ldr x19,[sp, #0x430]
7101dea744  adrp x8,0x710523d000
7101dea748  add x8,x8,#0x988
7101dea74c  str x8,[sp, #0x428]
7101dea750  str xzr,[sp, #0x430]
7101dea754  cbz x19,0x7101dea770
7101dea758  ldr x0,[x19, #0x18]
7101dea75c  stp x21,xzr,[x19, #0x10]
7101dea760  cbz x0,0x7101dea768
7101dea764  bl 0x710392eb40
7101dea768  mov x0,x19
7101dea76c  bl 0x710392eb40
7101dea770  ldr x8,[sp, #0x30]
7101dea774  add x23,x23,#0x1
7101dea778  cmp x23,x8
7101dea77c  b.ne 0x7101de91b8
7101dea780  ldr x9,[sp, #0x60]
7101dea784  ldr x8,[x9, #0x210]
7101dea788  str x8,[x9, #0x218]
7101dea78c  b 0x7101dea990
7101dea790  ldr x0,[x25, #0x18]
7101dea794  fmov s0,0x3f800000
7101dea798  adrp x1,0x71043ad000
7101dea79c  add x1,x1,#0xce0
7101dea7a0  bl 0x7103778300
7101dea7a4  add x0,x25,#0x210
7101dea7a8  add x19,x25,#0x30
7101dea7ac  orr w8,wzr,#0xe
7101dea7b0  cmp x0,x28
7101dea7b4  str w8,[x25, #0x2dc]
7101dea7b8  b.eq 0x7101dea7c4
7101dea7bc  ldp x1,x2,[x28]
7101dea7c0  bl 0x7101958040
7101dea7c4  ldr x8,[x25, #0x218]
7101dea7c8  mov x0,x19
7101dea7cc  mov w1,wzr
7101dea7d0  str x8,[x25, #0x228]
7101dea7d4  bl 0x7101dfe6f0
7101dea7d8  mov w8,#0xffffffff
7101dea7dc  add x0,x25,#0x2e0
7101dea7e0  mov w2,#0x2fc
7101dea7e4  mov w1,wzr
7101dea7e8  str w8,[x25, #0x2d4]
7101dea7ec  strb wzr,[x25, #0x2d0]
7101dea7f0  bl 0x71039c02a0
7101dea7f4  mov x8,#0x41800000
7101dea7f8  movk x8,#0x4248, LSL #48
7101dea7fc  add x0,sp,#0xa0
7101dea800  stp xzr,x8,[sp, #0xa0]
7101dea804  mov x8,#0x3f800000
7101dea808  movk x8,#0x101, LSL #32
7101dea80c  movk x8,#0x1, LSL #48
7101dea810  str x8,[sp, #0xb0]
7101dea814  mov w8,#0x1
7101dea818  strb w8,[sp, #0xba]
7101dea81c  add x8,sp,#0xa0
7101dea820  strh wzr,[sp, #0xb8]
7101dea824  str xzr,[sp, #0xf0]
7101dea828  str xzr,[sp, #0x120]
7101dea82c  add x20,x8,#0xf0
7101dea830  str xzr,[sp, #0x150]
7101dea834  str xzr,[sp, #0x180]
7101dea838  str xzr,[sp, #0x1b0]
7101dea83c  strb wzr,[sp, #0xc1]
7101dea840  sturh wzr,[sp, #0xbf]
7101dea844  stur wzr,[sp, #0xbb]
7101dea848  bl 0x710337e790
7101dea84c  mov w8,#0x101
7101dea850  str wzr,[sp, #0xb4]
7101dea854  sturh w8,[sp, #0xb9]
7101dea858  str w8,[sp, #0xbc]
7101dea85c  ldp x8,x9,[x28]
7101dea860  ldr x1,[sp, #0x80]
7101dea864  add x0,x25,#0x28
7101dea868  adrp x2,0x71043be000
7101dea86c  add x2,x2,#0xb3f
7101dea870  add x3,sp,#0xa0
7101dea874  mov x4,x19
7101dea878  sub x8,x9,x8
7101dea87c  lsr x8,x8,#0x3
7101dea880  str w8,[sp, #0xa4]
7101dea884  bl 0x7103781a20
7101dea888  ldr x0,[x25, #0x28]
7101dea88c  ldr x8,[x0]
7101dea890  ldr x8,[x8, #0x70]
7101dea894  mov w1,#0x1
7101dea898  blr x8
7101dea89c  mov x0,x19
7101dea8a0  mov w1,wzr
7101dea8a4  bl 0x7101e02dc0
7101dea8a8  ldr x0,[sp, #0x1b0]
7101dea8ac  cmp x20,x0
7101dea8b0  b.eq 0x7101dea8c4
7101dea8b4  cbz x0,0x7101dea8d0
7101dea8b8  ldr x8,[x0]
7101dea8bc  ldr x8,[x8, #0x28]
7101dea8c0  b 0x7101dea8cc
7101dea8c4  ldr x8,[x0]
7101dea8c8  ldr x8,[x8, #0x20]
7101dea8cc  blr x8
7101dea8d0  ldr x0,[sp, #0x180]
7101dea8d4  add x8,sp,#0xa0
7101dea8d8  add x8,x8,#0xc0
7101dea8dc  cmp x8,x0
7101dea8e0  b.eq 0x7101dea8f4
7101dea8e4  cbz x0,0x7101dea900
7101dea8e8  ldr x8,[x0]
7101dea8ec  ldr x8,[x8, #0x28]
7101dea8f0  b 0x7101dea8fc
7101dea8f4  ldr x8,[x0]
7101dea8f8  ldr x8,[x8, #0x20]
7101dea8fc  blr x8
7101dea900  ldr x0,[sp, #0x150]
7101dea904  add x8,sp,#0xa0
7101dea908  add x8,x8,#0x90
7101dea90c  cmp x8,x0
7101dea910  b.eq 0x7101dea924
7101dea914  cbz x0,0x7101dea930
7101dea918  ldr x8,[x0]
7101dea91c  ldr x8,[x8, #0x28]
7101dea920  b 0x7101dea92c
7101dea924  ldr x8,[x0]
7101dea928  ldr x8,[x8, #0x20]
7101dea92c  blr x8
7101dea930  ldr x0,[sp, #0x120]
7101dea934  add x8,sp,#0xa0
7101dea938  add x8,x8,#0x60
7101dea93c  cmp x8,x0
7101dea940  b.eq 0x7101dea954
7101dea944  cbz x0,0x7101dea960
7101dea948  ldr x8,[x0]
7101dea94c  ldr x8,[x8, #0x28]
7101dea950  b 0x7101dea95c
7101dea954  ldr x8,[x0]
7101dea958  ldr x8,[x8, #0x20]
7101dea95c  blr x8
7101dea960  ldr x0,[sp, #0xf0]
7101dea964  add x8,sp,#0xa0
7101dea968  add x8,x8,#0x30
7101dea96c  cmp x8,x0
7101dea970  b.eq 0x7101dea984
7101dea974  cbz x0,0x7101dea990
7101dea978  ldr x8,[x0]
7101dea97c  ldr x8,[x8, #0x28]
7101dea980  b 0x7101dea98c
7101dea984  ldr x8,[x0]
7101dea988  ldr x8,[x8, #0x20]
7101dea98c  blr x8
7101dea990  ldp x10,x8,[x28]
7101dea994  subs x15,x8,x10
7101dea998  b.ne 0x7101deaa84
7101dea99c  mov w20,wzr
7101dea9a0  mov w21,wzr
7101dea9a4  mov w8,wzr
7101dea9a8  mov w9,wzr
7101dea9ac  mov w23,wzr
7101dea9b0  mov w22,wzr
7101dea9b4  ldr w10,[sp, #0x1c]
7101dea9b8  tbnz w10,#0x0,0x7101deac48
7101dea9bc  orr w11,w23,w22
7101dea9c0  orr w10,w20,w11
7101dea9c4  orr w12,w21,w10
7101dea9c8  tbz w12,#0x0,0x7101deae44
7101dea9cc  orn w12,w22,w21
7101dea9d0  orr w12,w23,w12
7101dea9d4  orr w12,w20,w12
7101dea9d8  tbz w12,#0x0,0x7101deac9c
7101dea9dc  tbz w22,#0x0,0x7101deacc0
7101dea9e0  adrp x8,0x7104443000
7101dea9e4  add x8,x8,#0xc9d
7101dea9e8  mov w9,#0x64
7101dea9ec  strh w9,[sp, #0xc0]
7101dea9f0  ldp x9,x12,[x8, #0x10]
7101dea9f4  stp x9,x12,[sp, #0xb0]
7101dea9f8  mov w19,#0x1
7101dea9fc  ldp x12,x8,[x8]
7101deaa00  stp x12,x8,[sp, #0xa0]
7101deaa04  tbnz w23,#0x0,0x7101deacc8
7101deaa08  tbz w20,#0x0,0x7101dead34
7101deaa0c  tbz w11,#0x0,0x7101deaa44
7101deaa10  adrp x8,0x71042d6000
7101deaa14  add x8,x8,#0x7fc
7101deaa18  add x9,sp,#0xa0
7101deaa1c  ldp x11,x12,[x8]
7101deaa20  add x9,x9,x19, LSL #0x7
7101deaa24  add w19,w19,#0x1
7101deaa28  stp x11,x12,[x9]
7101deaa2c  ldur x11,[x8, #0x26]
7101deaa30  stur x11,[x9, #0x26]
7101deaa34  ldr x11,[x8, #0x20]
7101deaa38  str x11,[x9, #0x20]
7101deaa3c  ldp x11,x8,[x8, #0x10]
7101deaa40  stp x11,x8,[x9, #0x10]
7101deaa44  adrp x9,0x7104433000
7101deaa48  add x9,x9,#0x5a8
7101deaa4c  add x8,sp,#0xa0
7101deaa50  ldp x11,x12,[x9, #0x10]
7101deaa54  add x8,x8,x19, LSL #0x7
7101deaa58  add w19,w19,#0x1
7101deaa5c  stp x11,x12,[x8, #0x10]
7101deaa60  ldp x11,x9,[x9]
7101deaa64  stp x11,x9,[x8]
7101deaa68  mov w9,#0x755f
7101deaa6c  movk w9,#0x70, LSL #16
7101deaa70  str w9,[x8, #0x20]
7101deaa74  tbnz w21,#0x0,0x7101dead38
7101deaa78  adrp x20,0x710523d000
7101deaa7c  add x20,x20,#0x9a8
7101deaa80  b 0x7101deada8
7101deaa84  adrp x13,0x710532f000
7101deaa88  ldr x13,[x13, #0x730]
7101deaa8c  ldr x13,[x13, #0x8]
7101deaa90  ldr x13,[x13, #0x1d8]
7101deaa94  ldp x14,x16,[x13, #0x20]
7101deaa98  adrp x12,0x7105329000
7101deaa9c  ldr x12,[x12, #0xf98]
7101deaaa0  orr x18,xzr,#-0x3333333333333334
7101deaaa4  movk x18,#0xcccd
7101deaaa8  ldr x12,[x12]
7101deaaac  asr x15,x15,#0x3
7101deaab0  mov w0,#0x140
7101deaab4  mov w1,#0x6c46
7101deaab8  movk w1,#0x8, LSL #16
7101deaabc  mov w2,#0xcccd
7101deaac0  movk w2,#0xcccc, LSL #16
7101deaac4  sub x16,x16,x14
7101deaac8  asr x17,x16,#0x6
7101deaacc  mov w16,#0xffffffff
7101deaad0  mul x17,x17,x18
7101deaad4  mov x11,xzr
7101deaad8  mov w22,wzr
7101deaadc  mov w23,wzr
7101deaae0  mov w9,wzr
7101deaae4  mov w8,wzr
7101deaae8  mov w21,wzr
7101deaaec  mov w20,wzr
7101deaaf0  adrp x18,0x7105182000
7101deaaf4  add x18,x18,#0xb08
7101deaaf8  ldr x5,[x10, x11, LSL #0x3]
7101deaafc  ldrsh x3,[x5, #0x8]
7101deab00  cmn x3,#0x1
7101deab04  b.eq 0x7101deab14
7101deab08  add x4,x13,x3, LSL #0x1
7101deab0c  ldrh w4,[x4, #0x60]
7101deab10  b 0x7101deab18
7101deab14  mov x4,x16
7101deab18  madd x6,x4,x0,x14
7101deab1c  cmp x17,x4
7101deab20  csel x6,x6,x18,hi
7101deab24  ldrb w4,[x6, #0x68]
7101deab28  cmp w4,#0x3
7101deab2c  cset w7,eq
7101deab30  cmp x15,x11
7101deab34  b.ls 0x7101deaeb8
7101deab38  orr w22,w22,w7
7101deab3c  ldrh w7,[x5, #0x10]
7101deab40  ldrh w6,[x6, #0x90]
7101deab44  cmp w7,#0x45
7101deab48  cset w7,hi
7101deab4c  cmp w6,#0x0
7101deab50  cset w6,ne
7101deab54  orr w20,w20,w6
7101deab58  ldr x6,[x12, #0x30]
7101deab5c  ldrh w5,[x5]
7101deab60  mov x4,xzr
7101deab64  orr w23,w23,w7
7101deab68  add x6,x6,x1
7101deab6c  ldurh w7,[x6, #-0x4]
7101deab70  cmp w7,w5
7101deab74  b.eq 0x7101deabb0
7101deab78  ldurh w7,[x6, #-0x2]
7101deab7c  cmp w7,w5
7101deab80  b.eq 0x7101deabb0
7101deab84  ldrh w7,[x6]
7101deab88  cmp w7,w5
7101deab8c  b.eq 0x7101deabb0
7101deab90  ldrh w7,[x6, #0x2]
7101deab94  cmp w7,w5
7101deab98  b.eq 0x7101deabb0
7101deab9c  add x4,x4,#0x1
7101deaba0  add x6,x6,#0x54
7101deaba4  cmp x4,#0x62
7101deaba8  b.ls 0x7101deab6c
7101deabac  b 0x7101deac34
7101deabb0  cmn w3,#0x1
7101deabb4  b.eq 0x7101deabc4
7101deabb8  add x4,x13,x3, LSL #0x1
7101deabbc  ldrh w4,[x4, #0x60]
7101deabc0  b 0x7101deabc8
7101deabc4  mov w4,w16
7101deabc8  ldp x5,x6,[x13, #0x20]
7101deabcc  sub x6,x6,x5
7101deabd0  lsr x6,x6,#0x6
7101deabd4  mul w6,w6,w2
7101deabd8  cmp w4,w6
7101deabdc  b.cs 0x7101deabfc
7101deabe0  umaddl x4,w4,w0,x5
7101deabe4  ldrb w4,[x4, #0x5e]
7101deabe8  cmp w4,#0x1
7101deabec  b.ne 0x7101deabfc
7101deabf0  mov w21,#0x1
7101deabf4  mov w9,#0x1
7101deabf8  b 0x7101deac34
7101deabfc  cmn w3,#0x1
7101deac00  b.eq 0x7101deac28
7101deac04  add x3,x13,x3, LSL #0x1
7101deac08  ldrh w3,[x3, #0x60]
7101deac0c  cmp w3,w17
7101deac10  b.cs 0x7101deac28
7101deac14  madd x3,x3,x0,x14
7101deac18  ldrb w3,[x3, #0x5e]
7101deac1c  cmp w3,#0x0
7101deac20  cset w3,eq
7101deac24  b 0x7101deac2c
7101deac28  mov w3,wzr
7101deac2c  orr w8,w8,w3
7101deac30  mov w21,#0x1
7101deac34  add x11,x11,#0x1
7101deac38  cmp x15,x11
7101deac3c  b.hi 0x7101deaaf8
7101deac40  ldr w10,[sp, #0x1c]
7101deac44  tbz w10,#0x0,0x7101dea9bc
7101deac48  ldr x0,[sp, #0x80]
7101deac4c  adrp x1,0x7104338000
7101deac50  add x1,x1,#0xd31
7101deac54  add x8,sp,#0xa0
7101deac58  bl 0x7103776910
7101deac5c  adrp x1,0x7104292000
7101deac60  add x1,x1,#0xed
7101deac64  add x0,sp,#0xa0
7101deac68  bl 0x710377a120
7101deac6c  ldr x0,[sp, #0xa8]
7101deac70  adrp x8,0x710523d000
7101deac74  add x8,x8,#0x9a8
7101deac78  stp x8,xzr,[sp, #0xa0]
7101deac7c  cbz x0,0x7101deac84
7101deac80  bl 0x710392eb40
7101deac84  orr w8,w23,w22
7101deac88  orr w8,w20,w8
7101deac8c  orr w8,w21,w8
7101deac90  tbz w8,#0x0,0x7101deae44
7101deac94  mov w0,#0x1
7101deac98  b 0x7101deae48
7101deac9c  tbz w8,#0x0,0x7101deae04
7101deaca0  ldr x0,[sp, #0x80]
7101deaca4  adrp x1,0x7104338000
7101deaca8  add x1,x1,#0xd31
7101deacac  add x8,sp,#0xa0
7101deacb0  bl 0x7103776910
7101deacb4  adrp x1,0x71043be000
7101deacb8  add x1,x1,#0xb4a
7101deacbc  b 0x7101deae24
7101deacc0  mov w19,wzr
7101deacc4  tbz w23,#0x0,0x7101deaa08
7101deacc8  tbz w22,#0x0,0x7101dead00
7101deaccc  adrp x8,0x71042d6000
7101deacd0  add x8,x8,#0x7fc
7101deacd4  add x9,sp,#0xa0
7101deacd8  ldp x12,x13,[x8]
7101deacdc  add x9,x9,x19, LSL #0x7
7101deace0  add w19,w19,#0x1
7101deace4  stp x12,x13,[x9]
7101deace8  ldur x12,[x8, #0x26]
7101deacec  stur x12,[x9, #0x26]
7101deacf0  ldr x12,[x8, #0x20]
7101deacf4  str x12,[x9, #0x20]
7101deacf8  ldp x12,x8,[x8, #0x10]
7101deacfc  stp x12,x8,[x9, #0x10]
7101dead00  adrp x8,0x71043e0000
7101dead04  add x8,x8,#0x672
7101dead08  add x9,sp,#0xa0
7101dead0c  ldp x12,x13,[x8, #0x10]
7101dead10  add x9,x9,x19, LSL #0x7
7101dead14  add w19,w19,#0x1
7101dead18  strb wzr,[x9, #0x22]
7101dead1c  stp x12,x13,[x9, #0x10]
7101dead20  ldp x12,x8,[x8]
7101dead24  stp x12,x8,[x9]
7101dead28  mov w8,#0x3939
7101dead2c  strh w8,[x9, #0x20]
7101dead30  tbnz w20,#0x0,0x7101deaa0c
7101dead34  tbz w21,#0x0,0x7101deaa78
7101dead38  tbz w10,#0x0,0x7101dead70
7101dead3c  adrp x8,0x71042d6000
7101dead40  add x8,x8,#0x7fc
7101dead44  add x9,sp,#0xa0
7101dead48  ldp x10,x11,[x8]
7101dead4c  add x9,x9,x19, LSL #0x7
7101dead50  add w19,w19,#0x1
7101dead54  stp x10,x11,[x9]
7101dead58  ldur x10,[x8, #0x26]
7101dead5c  stur x10,[x9, #0x26]
7101dead60  ldr x10,[x8, #0x20]
7101dead64  str x10,[x9, #0x20]
7101dead68  ldp x10,x8,[x8, #0x10]
7101dead6c  stp x10,x8,[x9, #0x10]
7101dead70  adrp x8,0x7104401000
7101dead74  add x8,x8,#0xa1d
7101dead78  add x9,sp,#0xa0
7101dead7c  ldp x10,x11,[x8, #0x10]
7101dead80  add x9,x9,x19, LSL #0x7
7101dead84  add w19,w19,#0x1
7101dead88  strb wzr,[x9, #0x22]
7101dead8c  adrp x20,0x710523d000
7101dead90  add x20,x20,#0x9a8
7101dead94  stp x10,x11,[x9, #0x10]
7101dead98  ldp x10,x8,[x8]
7101dead9c  stp x10,x8,[x9]
7101deada0  mov w8,#0x676e
7101deada4  strh w8,[x9, #0x20]
7101deada8  ldr x0,[sp, #0x80]
7101deadac  adrp x1,0x7104338000
7101deadb0  add x1,x1,#0xd31
7101deadb4  sub x8,x29,#0xb0
7101deadb8  bl 0x7103776910
7101deadbc  add x8,sp,#0xa0
7101deadc0  add x4,x8,#0x80
7101deadc4  add x5,x8,#0x100
7101deadc8  add x6,x8,#0x180
7101deadcc  add x7,x8,#0x200
7101deadd0  add x9,x8,#0x280
7101deadd4  add x8,x8,#0x300
7101deadd8  stp x9,x8,[sp]
7101deaddc  adrp x1,0x710433a000
7101deade0  add x1,x1,#0x625
7101deade4  sub x0,x29,#0xb0
7101deade8  add x3,sp,#0xa0
7101deadec  mov w2,w19
7101deadf0  bl 0x710377a280
7101deadf4  ldur x0,[x29, #-0xa8]
7101deadf8  stp x20,xzr,[x29, #-0xb0]
7101deadfc  cbnz x0,0x7101deae40
7101deae00  b 0x7101deae44
7101deae04  tbz w9,#0x0,0x7101deae44
7101deae08  ldr x0,[sp, #0x80]
7101deae0c  adrp x1,0x7104338000
7101deae10  add x1,x1,#0xd31
7101deae14  add x8,sp,#0xa0
7101deae18  bl 0x7103776910
7101deae1c  adrp x1,0x710437c000
7101deae20  add x1,x1,#0xa6d
7101deae24  add x0,sp,#0xa0
7101deae28  bl 0x710377a120
7101deae2c  ldr x0,[sp, #0xa8]
7101deae30  adrp x8,0x710523d000
7101deae34  add x8,x8,#0x9a8
7101deae38  stp x8,xzr,[sp, #0xa0]
7101deae3c  cbz x0,0x7101deae44
7101deae40  bl 0x710392eb40
7101deae44  mov w0,wzr
7101deae48  add sp,sp,#0x600
7101deae4c  ldp x29,x30,[sp, #0x60]
7101deae50  ldp x20,x19,[sp, #0x50]
7101deae54  ldp x22,x21,[sp, #0x40]
7101deae58  ldp x24,x23,[sp, #0x30]
7101deae5c  ldp x26,x25,[sp, #0x20]
7101deae60  ldp x28,x27,[sp, #0x10]
7101deae64  ldp d9,d8,[sp], #0x70
7101deae68  ret
7101deae6c  ldr x19,[sp, #0x550]
7101deae70  ldr x8,[x19, #0x8]
7101deae74  cbz x8,0x7101deae8c
7101deae78  ldr x8,[x8, #0x18]
7101deae7c  cbz x8,0x7101deae8c
7101deae80  ldrb w9,[x8, #0x58]
7101deae84  and w9,w9,#0xfe
7101deae88  strb w9,[x8, #0x58]
7101deae8c  ldr x22,[sp, #0x508]
7101deae90  ldr x8,[x22]
7101deae94  cbz x8,0x7101deaeac
7101deae98  ldrb w9,[x8, #0x58]
7101deae9c  and w9,w9,#0xfe
7101deaea0  mov x25,xzr
7101deaea4  strb w9,[x8, #0x58]
7101deaea8  b 0x7101de87dc
7101deaeac  mov x25,xzr
7101deaeb0  b 0x7101de87dc
7101deaeb4  bl 0x71039c1330
7101deaeb8  mov x0,x28
7101deaebc  bl 0x71039c1330
