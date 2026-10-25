// addr:      7101ef9f70
// offset:    0x1ef9f70
// name:      FUN_7101ef9f70
// mangled:   
// size:      3208

7101ef9f70  sub sp,sp,#0x1c0
7101ef9f74  str d8,[sp, #0x150]
7101ef9f78  stp x28,x27,[sp, #0x160]
7101ef9f7c  stp x26,x25,[sp, #0x170]
7101ef9f80  stp x24,x23,[sp, #0x180]
7101ef9f84  stp x22,x21,[sp, #0x190]
7101ef9f88  stp x20,x19,[sp, #0x1a0]
7101ef9f8c  stp x29,x30,[sp, #0x1b0]
7101ef9f90  add x29,sp,#0x1b0
7101ef9f94  adrp x8,0x7105314000
7101ef9f98  add x8,x8,#0x4d8
7101ef9f9c  ldarb w8,[x8]
7101ef9fa0  mov x20,x1
7101ef9fa4  mov x19,x0
7101ef9fa8  tbz w8,#0x0,0x7101efab30
7101ef9fac  ldr w8,[x19]
7101ef9fb0  ldr w27,[x19, #0x8]
7101ef9fb4  adrp x10,0x710530a000
7101ef9fb8  add x10,x10,#0x9c8
7101ef9fbc  mov w9,#0x1428
7101ef9fc0  add x9,x10,x9
7101ef9fc4  cmp w8,#0x0
7101ef9fc8  csel x25,x10,x9,eq
7101ef9fcc  cmp w27,#0x5
7101ef9fd0  b.cs 0x7101efabf4
7101ef9fd4  adrp x9,0x710530b000
7101ef9fd8  add x9,x9,#0x2b0
7101ef9fdc  mov w10,#0x1428
7101ef9fe0  add x10,x9,x10
7101ef9fe4  cmp w8,#0x0
7101ef9fe8  csel x8,x9,x10,eq
7101ef9fec  str x8,[sp, #0x8]
7101ef9ff0  adrp x8,0x710532f000
7101ef9ff4  ldr x8,[x8, #0x730]
7101ef9ff8  ldr x28,[x8, #0x8]
7101ef9ffc  mov w8,#0x1c8
7101efa000  madd x8,x27,x8,x25
7101efa004  ldr x21,[x28, #0x168]
7101efa008  ldr x22,[x8, #0x40]
7101efa00c  mov x0,x21
7101efa010  mov x1,x22
7101efa014  bl 0x71032632a0
7101efa018  tbz w0,#0x0,0x7101efa034
7101efa01c  mov x1,#0xb807
7101efa020  movk x1,#0xb1cc, LSL #16
7101efa024  movk x1,#0x11, LSL #32
7101efa028  mov x0,x21
7101efa02c  bl 0x71032631a0
7101efa030  mov x22,x0
7101efa034  mov x0,x21
7101efa038  mov x1,x22
7101efa03c  bl 0x7103263f80
7101efa040  mov x1,x0
7101efa044  mov w2,#0x11
7101efa048  mov x0,x20
7101efa04c  bl 0x710323f600
7101efa050  add x21,x19,#0x220
7101efa054  mov x23,x0
7101efa058  adrp x1,0x71043be000
7101efa05c  add x1,x1,#0xe80
7101efa060  sub x8,x29,#0xc0
7101efa064  mov x0,x21
7101efa068  bl 0x7103776910
7101efa06c  ldr w2,[x19]
7101efa070  ldr w3,[x19, #0x8]
7101efa074  sub x1,x29,#0xc0
7101efa078  mov w4,#0x1
7101efa07c  mov w6,#0x2
7101efa080  mov x0,x20
7101efa084  mov w5,wzr
7101efa088  bl 0x7101f09020
7101efa08c  ldur x0,[x29, #-0xb8]
7101efa090  adrp x26,0x710523d000
7101efa094  add x26,x26,#0x9a8
7101efa098  stp x26,xzr,[x29, #-0xc0]
7101efa09c  cbz x0,0x7101efa0a4
7101efa0a0  bl 0x710392eb40
7101efa0a4  adrp x1,0x7104455000
7101efa0a8  add x1,x1,#0x2e4
7101efa0ac  sub x8,x29,#0xd0
7101efa0b0  mov x0,x21
7101efa0b4  bl 0x7103776910
7101efa0b8  ldr w2,[x19]
7101efa0bc  ldr w3,[x19, #0x8]
7101efa0c0  sub x1,x29,#0xd0
7101efa0c4  mov w4,#0x1
7101efa0c8  mov w6,#0x2
7101efa0cc  mov x0,x20
7101efa0d0  mov w5,wzr
7101efa0d4  bl 0x7101f09020
7101efa0d8  ldur x0,[x29, #-0xc8]
7101efa0dc  stp x26,xzr,[x29, #-0xd0]
7101efa0e0  cbz x0,0x7101efa0e8
7101efa0e4  bl 0x710392eb40
7101efa0e8  adrp x1,0x71042b4000
7101efa0ec  add x1,x1,#0xc09
7101efa0f0  add x8,sp,#0xd0
7101efa0f4  mov x0,x21
7101efa0f8  bl 0x7103776910
7101efa0fc  ldr w2,[x19]
7101efa100  ldr w3,[x19, #0x8]
7101efa104  add x1,sp,#0xd0
7101efa108  mov w4,#0x1
7101efa10c  mov w6,#0x2
7101efa110  mov x0,x20
7101efa114  mov w5,wzr
7101efa118  bl 0x7101f09020
7101efa11c  ldr x0,[sp, #0xd8]
7101efa120  stp x26,xzr,[sp, #0xd0]
7101efa124  cbz x0,0x7101efa12c
7101efa128  bl 0x710392eb40
7101efa12c  adrp x1,0x710437c000
7101efa130  add x1,x1,#0xd80
7101efa134  sub x8,x29,#0xb0
7101efa138  mov x0,x21
7101efa13c  str x20,[sp, #0x10]
7101efa140  bl 0x7103776910
7101efa144  ldur x24,[x29, #-0xa8]
7101efa148  mov x0,x24
7101efa14c  mov x1,x23
7101efa150  bl 0x7103778b80
7101efa154  stp x26,xzr,[x29, #-0xb0]
7101efa158  cbz x24,0x7101efa164
7101efa15c  mov x0,x24
7101efa160  bl 0x710392eb40
7101efa164  adrp x1,0x710432a000
7101efa168  add x1,x1,#0x828
7101efa16c  add x8,sp,#0xc0
7101efa170  mov x0,x21
7101efa174  bl 0x7103776910
7101efa178  adrp x1,0x71043cf000
7101efa17c  add x1,x1,#0xca4
7101efa180  add x8,sp,#0xb0
7101efa184  mov x0,x21
7101efa188  bl 0x7103776910
7101efa18c  adrp x1,0x7104270000
7101efa190  add x1,x1,#0x814
7101efa194  add x8,sp,#0xa0
7101efa198  mov x0,x21
7101efa19c  bl 0x7103776640
7101efa1a0  adrp x1,0x710432a000
7101efa1a4  add x1,x1,#0x804
7101efa1a8  add x8,sp,#0x90
7101efa1ac  mov x0,x21
7101efa1b0  bl 0x7103776910
7101efa1b4  adrp x1,0x7104292000
7101efa1b8  add x1,x1,#0x4e1
7101efa1bc  add x8,sp,#0x80
7101efa1c0  mov x0,x21
7101efa1c4  bl 0x7103776640
7101efa1c8  adrp x1,0x7104413000
7101efa1cc  add x1,x1,#0x14c
7101efa1d0  add x8,sp,#0x70
7101efa1d4  mov x0,x21
7101efa1d8  bl 0x7103776640
7101efa1dc  ldr x20,[sp, #0xc8]
7101efa1e0  ldr x0,[x20, #0x10]
7101efa1e4  cbz x0,0x7101efa1fc
7101efa1e8  sub x1,x29,#0xb0
7101efa1ec  mov w2,wzr
7101efa1f0  mov w3,wzr
7101efa1f4  stur wzr,[x29, #-0xb0]
7101efa1f8  bl 0x71037a2270
7101efa1fc  ldr x23,[sp, #0xb8]
7101efa200  ldr x0,[x23, #0x10]
7101efa204  mov x24,x28
7101efa208  cbz x0,0x7101efa220
7101efa20c  sub x1,x29,#0xb0
7101efa210  mov w2,wzr
7101efa214  mov w3,wzr
7101efa218  stur wzr,[x29, #-0xb0]
7101efa21c  bl 0x71037a2270
7101efa220  mov w8,#0x1c8
7101efa224  stur x25,[x29, #-0x58]
7101efa228  madd x25,x27,x8,x25
7101efa22c  ldr w8,[x25, #0x30]!
7101efa230  cmp w8,#0x2
7101efa234  b.eq 0x7101efa330
7101efa238  cmp w8,#0x1
7101efa23c  b.eq 0x7101efa27c
7101efa240  cbnz w8,0x7101efa704
7101efa244  ldr x9,[sp, #0x8]
7101efa248  mov w8,#0x240
7101efa24c  madd x24,x27,x8,x9
7101efa250  ldr w8,[x24, #0x4]!
7101efa254  add w8,w8,#0x1
7101efa258  cmp w8,#0x1
7101efa25c  b.hi 0x7101efa3fc
7101efa260  ldr x0,[x19, #0x228]
7101efa264  fmov s0,0x3f800000
7101efa268  adrp x1,0x71042a3000
7101efa26c  add x1,x1,#0x7ee
7101efa270  bl 0x7103778300
7101efa274  mov x24,x28
7101efa278  b 0x7101efa704
7101efa27c  ldr x0,[x19, #0x228]
7101efa280  fmov s0,0x3f800000
7101efa284  adrp x1,0x71042d6000
7101efa288  add x1,x1,#0xb4d
7101efa28c  bl 0x7103778300
7101efa290  ldur x9,[x29, #-0x58]
7101efa294  mov w8,#0x1c8
7101efa298  madd x26,x27,x8,x9
7101efa29c  ldrb w2,[x26, #0x49]!
7101efa2a0  adrp x1,0x710439d000
7101efa2a4  add x1,x1,#0xc8e
7101efa2a8  add x0,sp,#0xa0
7101efa2ac  bl 0x7103778430
7101efa2b0  adrp x1,0x710438d000
7101efa2b4  add x1,x1,#0x369
7101efa2b8  add x8,sp,#0x28
7101efa2bc  add x0,sp,#0xa0
7101efa2c0  bl 0x7103776910
7101efa2c4  ldr x23,[sp, #0x30]
7101efa2c8  ldr x24,[x23, #0x10]
7101efa2cc  cbz x24,0x7101efa310
7101efa2d0  ldrb w3,[x26]
7101efa2d4  sub x0,x29,#0xb0
7101efa2d8  mov w1,#0x20
7101efa2dc  mov w2,wzr
7101efa2e0  mov w4,wzr
7101efa2e4  mov w5,wzr
7101efa2e8  stp xzr,xzr,[x29, #-0x80]
7101efa2ec  stp xzr,xzr,[x29, #-0x90]
7101efa2f0  stp xzr,xzr,[x29, #-0xa0]
7101efa2f4  stp xzr,xzr,[x29, #-0xb0]
7101efa2f8  bl 0x71037ad940
7101efa2fc  mov w2,w0
7101efa300  sub x1,x29,#0xb0
7101efa304  mov x0,x24
7101efa308  mov w3,wzr
7101efa30c  bl 0x71037a2270
7101efa310  adrp x26,0x710523d000
7101efa314  add x26,x26,#0x9a8
7101efa318  mov x24,x28
7101efa31c  stp x26,xzr,[sp, #0x28]
7101efa320  cbz x23,0x7101efa704
7101efa324  mov x0,x23
7101efa328  bl 0x710392eb40
7101efa32c  b 0x7101efa704
7101efa330  fmov s8,0x3f800000
7101efa334  ldr x0,[x19, #0x228]
7101efa338  adrp x1,0x710435c000
7101efa33c  add x1,x1,#0x18
7101efa340  mov v0.16B,v8.16B
7101efa344  bl 0x7103778300
7101efa348  ldr x0,[x19, #0x228]
7101efa34c  mov v0.16B,v8.16B
7101efa350  adrp x1,0x7104270000
7101efa354  add x1,x1,#0x826
7101efa358  bl 0x7103778300
7101efa35c  ldur x9,[x29, #-0x58]
7101efa360  mov w8,#0x1c8
7101efa364  madd x8,x27,x8,x9
7101efa368  ldrb w9,[x8, #0x130]
7101efa36c  cmp w9,#0x3
7101efa370  b.hi 0x7101efa64c
7101efa374  adrp x10,0x71044fc000
7101efa378  add x10,x10,#0x368
7101efa37c  sub x8,x29,#0xb0
7101efa380  ldrsw x9,[x10, x9, LSL #0x2]
7101efa384  add x9,x9,x10
7101efa388  br x9
7101efa38c  mov x9,#0x1300000000
7101efa390  stur x9,[x29, #-0xb0]
7101efa394  mov x9,#0x7073
7101efa398  movk x9,#0x7269, LSL #16
7101efa39c  sub x10,x29,#0xb0
7101efa3a0  add x1,x10,#0x8
7101efa3a4  movk x9,#0x7469, LSL #32
7101efa3a8  movk x9,#0x615f, LSL #48
7101efa3ac  stur x9,[x29, #-0xa8]
7101efa3b0  add x9,x10,#0x9
7101efa3b4  mov x10,#0x7474
7101efa3b8  movk x10,#0x6361, LSL #16
7101efa3bc  movk x10,#0x656b, LSL #32
7101efa3c0  movk x10,#0x5f72, LSL #48
7101efa3c4  stur x10,[x29, #-0xa0]
7101efa3c8  mov w10,#0x6f6e
7101efa3cc  movk w10,#0x6e, LSL #16
7101efa3d0  stur w10,[x29, #-0x98]
7101efa3d4  mov w8,#0x9dc5
7101efa3d8  movk w8,#0x811c, LSL #16
7101efa3dc  mov w11,#0x73
7101efa3e0  mov w10,#0x89
7101efa3e4  mul w8,w8,w10
7101efa3e8  and w11,w11,#0xff
7101efa3ec  eor w8,w8,w11
7101efa3f0  ldrb w11,[x9], #0x1
7101efa3f4  cbnz w11,0x7101efa3e4
7101efa3f8  b 0x7101efa6b8
7101efa3fc  ldr x0,[x19, #0x228]
7101efa400  fmov s0,0x3f800000
7101efa404  adrp x1,0x710435c000
7101efa408  add x1,x1,#0x3
7101efa40c  bl 0x7103778300
7101efa410  mov w0,#0x10
7101efa414  mov w1,#0x20
7101efa418  str x26,[sp, #0x28]
7101efa41c  bl 0x710392e290
7101efa420  cbnz x0,0x7101efa468
7101efa424  adrp x8,0x7105332000
7101efa428  ldr x0,[x8, #0xf00]
7101efa42c  cbz x0,0x7101efa464
7101efa430  mov w8,#0x20
7101efa434  str wzr,[sp, #0x18]
7101efa438  add x1,sp,#0x18
7101efa43c  stur x8,[x29, #-0xb0]
7101efa440  ldr x8,[x0]
7101efa444  ldr x8,[x8, #0x30]
7101efa448  sub x2,x29,#0xb0
7101efa44c  blr x8
7101efa450  tbz w0,#0x0,0x7101efa464
7101efa454  mov w0,#0x10
7101efa458  mov w1,#0x20
7101efa45c  bl 0x710392e290
7101efa460  cbnz x0,0x7101efa468
7101efa464  mov x0,xzr
7101efa468  stp xzr,xzr,[x0, #0x10]
7101efa46c  stp xzr,xzr,[x0]
7101efa470  str x0,[sp, #0x30]
7101efa474  ldr x8,[x23]
7101efa478  str x8,[x0]
7101efa47c  ldr x8,[x23, #0x8]
7101efa480  str x8,[x0, #0x8]
7101efa484  ldr x8,[sp, #0xb8]
7101efa488  ldr x0,[x8, #0x10]
7101efa48c  ldr x22,[sp, #0x30]
7101efa490  str x0,[x22, #0x10]
7101efa494  ldr x8,[x8, #0x18]
7101efa498  str x8,[x22, #0x18]
7101efa49c  ldr w8,[x24]
7101efa4a0  add w9,w8,#0x1
7101efa4a4  cmp w9,#0x1
7101efa4a8  b.hi 0x7101efaab0
7101efa4ac  ldur x9,[x29, #-0x58]
7101efa4b0  mov w8,#0x1c8
7101efa4b4  madd x8,x27,x8,x9
7101efa4b8  ldr w3,[x8, #0x28]
7101efa4bc  adrp x1,0x7104338000
7101efa4c0  add x1,x1,#0xa8c
7101efa4c4  add x0,sp,#0x28
7101efa4c8  mov w2,#0x1
7101efa4cc  bl 0x710377a280
7101efa4d0  stp x26,xzr,[sp, #0x28]
7101efa4d4  cbnz x22,0x7101efab24
7101efa4d8  b 0x7101efa79c
7101efa4dc  mov x12,#0x7073
7101efa4e0  movk x12,#0x7269, LSL #16
7101efa4e4  mov x10,#0x1700000000
7101efa4e8  movk x12,#0x7469, LSL #32
7101efa4ec  movk x12,#0x615f, LSL #48
7101efa4f0  sub x11,x29,#0xb0
7101efa4f4  stp x10,x12,[x29, #-0xb0]
7101efa4f8  mov x10,#0x7474
7101efa4fc  movk x10,#0x6361, LSL #16
7101efa500  movk x10,#0x656b, LSL #32
7101efa504  movk x10,#0x5f72, LSL #48
7101efa508  add x1,x11,#0x8
7101efa50c  stur x10,[x29, #-0xa0]
7101efa510  add x10,x11,#0x9
7101efa514  mov w11,#0x666f
7101efa518  sturh w11,[x29, #-0x98]
7101efa51c  mov w11,#0x6566
7101efa520  movk w11,#0x736e, LSL #16
7101efa524  stur w11,[x8, #0x1a]
7101efa528  mov w8,#0x65
7101efa52c  mov w9,#0x9dc5
7101efa530  movk w9,#0x811c, LSL #16
7101efa534  sturh w8,[x29, #-0x92]
7101efa538  mov w11,#0x73
7101efa53c  mov w8,#0x89
7101efa540  mul w9,w9,w8
7101efa544  and w11,w11,#0xff
7101efa548  eor w9,w9,w11
7101efa54c  ldrb w11,[x10], #0x1
7101efa550  cbnz w11,0x7101efa540
7101efa554  b 0x7101efa644
7101efa558  mov x12,#0x7073
7101efa55c  movk x12,#0x7269, LSL #16
7101efa560  mov x10,#0x1700000000
7101efa564  movk x12,#0x7469, LSL #32
7101efa568  movk x12,#0x615f, LSL #48
7101efa56c  sub x11,x29,#0xb0
7101efa570  stp x10,x12,[x29, #-0xb0]
7101efa574  mov x10,#0x7474
7101efa578  movk x10,#0x6361, LSL #16
7101efa57c  movk x10,#0x656b, LSL #32
7101efa580  movk x10,#0x5f72, LSL #48
7101efa584  add x1,x11,#0x8
7101efa588  stur x10,[x29, #-0xa0]
7101efa58c  add x10,x11,#0x9
7101efa590  mov w11,#0x6564
7101efa594  sturh w11,[x29, #-0x98]
7101efa598  mov w11,#0x6566
7101efa59c  movk w11,#0x736e, LSL #16
7101efa5a0  stur w11,[x8, #0x1a]
7101efa5a4  mov w8,#0x65
7101efa5a8  mov w9,#0x9dc5
7101efa5ac  movk w9,#0x811c, LSL #16
7101efa5b0  sturh w8,[x29, #-0x92]
7101efa5b4  mov w11,#0x73
7101efa5b8  mov w8,#0x89
7101efa5bc  mul w9,w9,w8
7101efa5c0  and w11,w11,#0xff
7101efa5c4  eor w9,w9,w11
7101efa5c8  ldrb w11,[x10], #0x1
7101efa5cc  cbnz w11,0x7101efa5bc
7101efa5d0  b 0x7101efa644
7101efa5d4  mov x12,#0x7073
7101efa5d8  movk x12,#0x7269, LSL #16
7101efa5dc  mov x10,#0x1500000000
7101efa5e0  movk x12,#0x7469, LSL #32
7101efa5e4  movk x12,#0x615f, LSL #48
7101efa5e8  sub x11,x29,#0xb0
7101efa5ec  stp x10,x12,[x29, #-0xb0]
7101efa5f0  mov x10,#0x7474
7101efa5f4  movk x10,#0x6361, LSL #16
7101efa5f8  movk x10,#0x656b, LSL #32
7101efa5fc  movk x10,#0x5f72, LSL #48
7101efa600  add x1,x11,#0x8
7101efa604  stur x10,[x29, #-0xa0]
7101efa608  add x10,x11,#0x9
7101efa60c  mov w11,#0x6874
7101efa610  sturh w11,[x29, #-0x98]
7101efa614  mov w11,#0x6f72
7101efa618  movk w11,#0x77, LSL #16
7101efa61c  stur w11,[x8, #0x1a]
7101efa620  mov w9,#0x9dc5
7101efa624  movk w9,#0x811c, LSL #16
7101efa628  mov w11,#0x73
7101efa62c  mov w8,#0x89
7101efa630  mul w9,w9,w8
7101efa634  and w11,w11,#0xff
7101efa638  eor w9,w9,w11
7101efa63c  ldrb w11,[x10], #0x1
7101efa640  cbnz w11,0x7101efa630
7101efa644  stur w9,[x29, #-0xb0]
7101efa648  b 0x7101efa6bc
7101efa64c  mov x9,#0x1300000000
7101efa650  stur x9,[x29, #-0xb0]
7101efa654  mov x9,#0x7073
7101efa658  movk x9,#0x7269, LSL #16
7101efa65c  sub x10,x29,#0xb0
7101efa660  add x1,x10,#0x8
7101efa664  movk x9,#0x7469, LSL #32
7101efa668  movk x9,#0x615f, LSL #48
7101efa66c  stur x9,[x29, #-0xa8]
7101efa670  add x9,x10,#0x9
7101efa674  mov x10,#0x7474
7101efa678  movk x10,#0x6361, LSL #16
7101efa67c  movk x10,#0x656b, LSL #32
7101efa680  movk x10,#0x5f72, LSL #48
7101efa684  stur x10,[x29, #-0xa0]
7101efa688  mov w10,#0x6f6e
7101efa68c  movk w10,#0x6e, LSL #16
7101efa690  stur w10,[x29, #-0x98]
7101efa694  mov w8,#0x9dc5
7101efa698  movk w8,#0x811c, LSL #16
7101efa69c  mov w11,#0x73
7101efa6a0  mov w10,#0x89
7101efa6a4  mul w8,w8,w10
7101efa6a8  and w11,w11,#0xff
7101efa6ac  eor w8,w8,w11
7101efa6b0  ldrb w11,[x9], #0x1
7101efa6b4  cbnz w11,0x7101efa6a4
7101efa6b8  stur w8,[x29, #-0xb0]
7101efa6bc  ldr x0,[sp, #0x78]
7101efa6c0  fmov s0,0x3f800000
7101efa6c4  bl 0x7103778300
7101efa6c8  ldr x0,[x23, #0x10]
7101efa6cc  ldur x23,[x29, #-0x58]
7101efa6d0  cbz x0,0x7101efa6ec
7101efa6d4  mov w8,#0x1c8
7101efa6d8  madd x8,x27,x8,x23
7101efa6dc  add x1,x8,#0xf8
7101efa6e0  mov w2,#0xffffffff
7101efa6e4  mov w3,#0x1
7101efa6e8  bl 0x71037a2270
7101efa6ec  mov w8,#0x1c8
7101efa6f0  madd x8,x27,x8,x23
7101efa6f4  ldrb w2,[x8, #0x118]
7101efa6f8  add x0,sp,#0x90
7101efa6fc  mov w1,#0x1
7101efa700  bl 0x710377a310
7101efa704  ldr x23,[x24, #0x168]
7101efa708  mov x0,x23
7101efa70c  mov x1,x22
7101efa710  bl 0x71032638e0
7101efa714  tbz w0,#0x0,0x7101efa740
7101efa718  ldr x0,[x20, #0x10]
7101efa71c  cbz x0,0x7101efa79c
7101efa720  ldur x9,[x29, #-0x58]
7101efa724  mov w8,#0x1c8
7101efa728  madd x8,x27,x8,x9
7101efa72c  add x1,x8,#0x68
7101efa730  mov w2,#0xffffffff
7101efa734  mov w3,#0x1
7101efa738  bl 0x71037a2270
7101efa73c  b 0x7101efa79c
7101efa740  ldur x9,[x29, #-0x58]
7101efa744  mov w8,#0x1c8
7101efa748  madd x8,x27,x8,x9
7101efa74c  ldrb w2,[x8, #0x48]
7101efa750  mov x0,x23
7101efa754  mov x1,x22
7101efa758  bl 0x7103263540
7101efa75c  ldr x1,[x24, #0x168]
7101efa760  mov w23,w0
7101efa764  sub x0,x29,#0xb0
7101efa768  mov x2,x22
7101efa76c  sub x20,x29,#0xb0
7101efa770  bl 0x7103262310
7101efa774  add x2,x20,#0x8
7101efa778  adrp x0,0x710439b000
7101efa77c  add x0,x0,#0x815
7101efa780  add x8,sp,#0x28
7101efa784  mov w1,w23
7101efa788  add x20,sp,#0x28
7101efa78c  bl 0x71003a4ca0
7101efa790  add x1,x20,#0x8
7101efa794  add x0,sp,#0xc0
7101efa798  bl 0x710377a120
7101efa79c  ldr w8,[x25]
7101efa7a0  cmp w8,#0x1
7101efa7a4  b.hi 0x7101efa9e8
7101efa7a8  adrp x28,0x7105314000
7101efa7ac  add x28,x28,#0x4d8
7101efa7b0  ldr w22,[x19]
7101efa7b4  ldr w20,[x19, #0x8]
7101efa7b8  ldarb w8,[x28]
7101efa7bc  tbz w8,#0x0,0x7101efab70
7101efa7c0  cmp w20,#0x5
7101efa7c4  adrp x27,0x710530a000
7101efa7c8  add x27,x27,#0x9c8
7101efa7cc  b.cs 0x7101efabf4
7101efa7d0  mov w8,#0x1428
7101efa7d4  add x8,x27,x8
7101efa7d8  cmp w22,#0x0
7101efa7dc  csel x8,x27,x8,eq
7101efa7e0  mov w9,#0x1c8
7101efa7e4  madd x8,x20,x9,x8
7101efa7e8  ldrh w24,[x8, #0x1b6]
7101efa7ec  orr w8,wzr,#0xffff
7101efa7f0  cmp w24,w8
7101efa7f4  b.eq 0x7101efa994
7101efa7f8  adrp x20,0x7105328000
7101efa7fc  ldr x8,[x20, #0xe18]
7101efa800  ldr w22,[x19]
7101efa804  ldr w23,[x19, #0x8]
7101efa808  ldr x25,[x8]
7101efa80c  ldarb w8,[x28]
7101efa810  tbz w8,#0x0,0x7101efabb0
7101efa814  cmp w22,#0x2
7101efa818  b.cs 0x7101efabf4
7101efa81c  cmp w23,#0x5
7101efa820  b.cs 0x7101efabf4
7101efa824  mov w8,#0x1428
7101efa828  mov w10,#0x1b8
7101efa82c  madd x10,x22,x10,x25
7101efa830  add x8,x27,x8
7101efa834  cmp w22,#0x0
7101efa838  csel x8,x27,x8,eq
7101efa83c  mov w9,#0x1c8
7101efa840  madd x8,x23,x9,x8
7101efa844  mov w9,#0x50
7101efa848  madd x9,x23,x9,x10
7101efa84c  ldrsh w8,[x8, #0x1b6]
7101efa850  ldr w9,[x9, #0x6c]
7101efa854  ldr x0,[x19, #0x228]
7101efa858  fmov s0,0x3f800000
7101efa85c  cmn w8,#0x1
7101efa860  adrp x1,0x71042d6000
7101efa864  add x1,x1,#0xb5d
7101efa868  csel w23,wzr,w9,eq
7101efa86c  bl 0x7103778300
7101efa870  ldr x8,[x19, #0x240]
7101efa874  strh w24,[x8]
7101efa878  ldr x0,[x19, #0x240]
7101efa87c  add x22,x19,#0x240
7101efa880  bl 0x710339ae90
7101efa884  ldr x8,[x19, #0x240]
7101efa888  orr w9,wzr,#0x18
7101efa88c  mov x0,x22
7101efa890  mov w1,w23
7101efa894  mov w2,w23
7101efa898  str w9,[x8, #0x4]
7101efa89c  bl 0x710339b6b0
7101efa8a0  adrp x1,0x7104292000
7101efa8a4  add x1,x1,#0x4e1
7101efa8a8  add x8,sp,#0x18
7101efa8ac  mov x0,x21
7101efa8b0  bl 0x7103776640
7101efa8b4  add x1,sp,#0x18
7101efa8b8  mov w2,#0x1
7101efa8bc  mov x0,x22
7101efa8c0  bl 0x710339b5e0
7101efa8c4  ldr x1,[sp, #0x10]
7101efa8c8  mov x0,x22
7101efa8cc  bl 0x710339bba0
7101efa8d0  mov x0,x22
7101efa8d4  bl 0x710339ba00
7101efa8d8  ldr x21,[x19, #0x240]
7101efa8dc  ldr x8,[x21, #0x18]
7101efa8e0  ldr x8,[x8, #0x8]
7101efa8e4  cbz x8,0x7101efa948
7101efa8e8  add x0,x21,#0x10
7101efa8ec  adrp x1,0x710439b000
7101efa8f0  add x1,x1,#0x9ff
7101efa8f4  sub x8,x29,#0xb0
7101efa8f8  bl 0x7103776910
7101efa8fc  ldr w3,[x21, #0x50]
7101efa900  adrp x1,0x7104290000
7101efa904  add x1,x1,#0x179
7101efa908  sub x0,x29,#0xb0
7101efa90c  mov w2,#0x1
7101efa910  bl 0x710377a280
7101efa914  ldur x0,[x29, #-0xa8]
7101efa918  stp x26,xzr,[x29, #-0xb0]
7101efa91c  cbz x0,0x7101efa924
7101efa920  bl 0x710392eb40
7101efa924  ldr x8,[x22]
7101efa928  ldr x0,[x8, #0x18]
7101efa92c  ldr x9,[x0, #0x8]
7101efa930  cbz x9,0x7101efa948
7101efa934  ldr s0,[x8, #0x58]
7101efa938  ucvtf s0,s0
7101efa93c  adrp x1,0x7104464000
7101efa940  add x1,x1,#0x398
7101efa944  bl 0x7103778630
7101efa948  ldr w8,[x19]
7101efa94c  cmp w8,#0x2
7101efa950  b.cs 0x7101efabf4
7101efa954  ldr w9,[x19, #0x8]
7101efa958  cmp w9,#0x5
7101efa95c  b.cs 0x7101efabf4
7101efa960  ldr x10,[x20, #0xe18]
7101efa964  ldr x10,[x10]
7101efa968  mov w12,#0x1b8
7101efa96c  madd x8,x8,x12,x10
7101efa970  mov w11,#0x50
7101efa974  madd x8,x9,x11,x8
7101efa978  ldrsh w8,[x8, #0x78]
7101efa97c  ldr x0,[x19, #0x228]
7101efa980  cmn w8,#0x1
7101efa984  b.eq 0x7101efa9ac
7101efa988  adrp x1,0x710425d000
7101efa98c  add x1,x1,#0xb6c
7101efa990  b 0x7101efa9b4
7101efa994  ldr x0,[x19, #0x228]
7101efa998  fmov s0,0x3f800000
7101efa99c  adrp x1,0x7104308000
7101efa9a0  add x1,x1,#0xc19
7101efa9a4  bl 0x7103778300
7101efa9a8  b 0x7101efa9e8
7101efa9ac  adrp x1,0x710439b000
7101efa9b0  add x1,x1,#0xa10
7101efa9b4  fmov s0,0x3f800000
7101efa9b8  bl 0x7103778300
7101efa9bc  ldr x19,[sp, #0x20]
7101efa9c0  adrp x8,0x710523d000
7101efa9c4  add x8,x8,#0x988
7101efa9c8  stp x8,xzr,[sp, #0x18]
7101efa9cc  cbz x19,0x7101efa9e8
7101efa9d0  ldr x0,[x19, #0x18]
7101efa9d4  stp x26,xzr,[x19, #0x10]
7101efa9d8  cbz x0,0x7101efa9e0
7101efa9dc  bl 0x710392eb40
7101efa9e0  mov x0,x19
7101efa9e4  bl 0x710392eb40
7101efa9e8  ldr x19,[sp, #0x78]
7101efa9ec  adrp x20,0x710523d000
7101efa9f0  add x20,x20,#0x988
7101efa9f4  stp x20,xzr,[sp, #0x70]
7101efa9f8  cbz x19,0x7101efaa14
7101efa9fc  ldr x0,[x19, #0x18]
7101efaa00  stp x26,xzr,[x19, #0x10]
7101efaa04  cbz x0,0x7101efaa0c
7101efaa08  bl 0x710392eb40
7101efaa0c  mov x0,x19
7101efaa10  bl 0x710392eb40
7101efaa14  ldr x19,[sp, #0x88]
7101efaa18  stp x20,xzr,[sp, #0x80]
7101efaa1c  cbz x19,0x7101efaa38
7101efaa20  ldr x0,[x19, #0x18]
7101efaa24  stp x26,xzr,[x19, #0x10]
7101efaa28  cbz x0,0x7101efaa30
7101efaa2c  bl 0x710392eb40
7101efaa30  mov x0,x19
7101efaa34  bl 0x710392eb40
7101efaa38  ldr x0,[sp, #0x98]
7101efaa3c  stp x26,xzr,[sp, #0x90]
7101efaa40  cbz x0,0x7101efaa48
7101efaa44  bl 0x710392eb40
7101efaa48  ldr x19,[sp, #0xa8]
7101efaa4c  stp x20,xzr,[sp, #0xa0]
7101efaa50  cbz x19,0x7101efaa6c
7101efaa54  ldr x0,[x19, #0x18]
7101efaa58  stp x26,xzr,[x19, #0x10]
7101efaa5c  cbz x0,0x7101efaa64
7101efaa60  bl 0x710392eb40
7101efaa64  mov x0,x19
7101efaa68  bl 0x710392eb40
7101efaa6c  ldr x0,[sp, #0xb8]
7101efaa70  stp x26,xzr,[sp, #0xb0]
7101efaa74  cbz x0,0x7101efaa7c
7101efaa78  bl 0x710392eb40
7101efaa7c  ldr x0,[sp, #0xc8]
7101efaa80  stp x26,xzr,[sp, #0xc0]
7101efaa84  cbz x0,0x7101efaa8c
7101efaa88  bl 0x710392eb40
7101efaa8c  ldr d8,[sp, #0x150]
7101efaa90  ldp x29,x30,[sp, #0x1b0]
7101efaa94  ldp x20,x19,[sp, #0x1a0]
7101efaa98  ldp x22,x21,[sp, #0x190]
7101efaa9c  ldp x24,x23,[sp, #0x180]
7101efaaa0  ldp x26,x25,[sp, #0x170]
7101efaaa4  ldp x28,x27,[sp, #0x160]
7101efaaa8  add sp,sp,#0x1c0
7101efaaac  ret
7101efaab0  cmp w8,#0x3c
7101efaab4  adrp x9,0x7105314000
7101efaab8  add x9,x9,#0x518
7101efaabc  b.hi 0x7101efaae8
7101efaac0  adrp x10,0x7105314000
7101efaac4  ldr x10,[x10, #0x510]
7101efaac8  ldr x10,[x10]
7101efaacc  ldrb w11,[x10]
7101efaad0  cbnz w11,0x7101efaae8
7101efaad4  ldr x9,[x10, #0x58]
7101efaad8  mov w10,#0xf7d8
7101efaadc  ldr x9,[x9]
7101efaae0  ldr x9,[x9]
7101efaae4  madd x9,x8,x10,x9
7101efaae8  ldrb w8,[x9]
7101efaaec  cbz w8,0x7101efab04
7101efaaf0  cbz x0,0x7101efab1c
7101efaaf4  add x1,x9,#0xc
7101efaaf8  mov w2,#0xffffffff
7101efaafc  mov w3,#0x1
7101efab00  b 0x7101efab18
7101efab04  cbz x0,0x7101efab1c
7101efab08  sub x1,x29,#0xb0
7101efab0c  mov w2,wzr
7101efab10  mov w3,wzr
7101efab14  stur wzr,[x29, #-0xb0]
7101efab18  bl 0x71037a2270
7101efab1c  stp x26,xzr,[sp, #0x28]
7101efab20  cbz x22,0x7101efa79c
7101efab24  mov x0,x22
7101efab28  bl 0x710392eb40
7101efab2c  b 0x7101efa79c
7101efab30  adrp x0,0x7105314000
7101efab34  add x0,x0,#0x4d8
7101efab38  bl 0x71039c06b0
7101efab3c  cbz w0,0x7101ef9fac
7101efab40  bl 0x7101764000
7101efab44  adrp x0,0x7101763000
7101efab48  add x0,x0,#0xc40
7101efab4c  adrp x1,0x71052c5000
7101efab50  add x1,x1,#0x180
7101efab54  adrp x2,0x7104f17000
7101efab58  add x2,x2,#0x0
7101efab5c  bl 0x71000001c0
7101efab60  adrp x0,0x7105314000
7101efab64  add x0,x0,#0x4d8
7101efab68  bl 0x71039c06c0
7101efab6c  b 0x7101ef9fac
7101efab70  adrp x0,0x7105314000
7101efab74  add x0,x0,#0x4d8
7101efab78  bl 0x71039c06b0
7101efab7c  cbz w0,0x7101efa7c0
7101efab80  bl 0x7101764000
7101efab84  adrp x0,0x7101763000
7101efab88  add x0,x0,#0xc40
7101efab8c  adrp x1,0x71052c5000
7101efab90  add x1,x1,#0x180
7101efab94  adrp x2,0x7104f17000
7101efab98  add x2,x2,#0x0
7101efab9c  bl 0x71000001c0
7101efaba0  adrp x0,0x7105314000
7101efaba4  add x0,x0,#0x4d8
7101efaba8  bl 0x71039c06c0
7101efabac  b 0x7101efa7c0
7101efabb0  adrp x0,0x7105314000
7101efabb4  add x0,x0,#0x4d8
7101efabb8  bl 0x71039c06b0
7101efabbc  cbz w0,0x7101efa814
7101efabc0  bl 0x7101764000
7101efabc4  adrp x0,0x7101763000
7101efabc8  add x0,x0,#0xc40
7101efabcc  adrp x1,0x71052c5000
7101efabd0  add x1,x1,#0x180
7101efabd4  adrp x2,0x7104f17000
7101efabd8  add x2,x2,#0x0
7101efabdc  bl 0x71000001c0
7101efabe0  adrp x0,0x7105314000
7101efabe4  add x0,x0,#0x4d8
7101efabe8  bl 0x71039c06c0
7101efabec  cmp w22,#0x2
7101efabf0  b.cc 0x7101efa81c
7101efabf4  bl 0x71039c2650
