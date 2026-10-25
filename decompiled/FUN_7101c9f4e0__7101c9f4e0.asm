// addr:      7101c9f4e0
// offset:    0x1c9f4e0
// name:      FUN_7101c9f4e0
// mangled:   
// size:      6372

7101c9f4e0  str d8,[sp, #-0x70]!
7101c9f4e4  stp x28,x27,[sp, #0x10]
7101c9f4e8  stp x26,x25,[sp, #0x20]
7101c9f4ec  stp x24,x23,[sp, #0x30]
7101c9f4f0  stp x22,x21,[sp, #0x40]
7101c9f4f4  stp x20,x19,[sp, #0x50]
7101c9f4f8  stp x29,x30,[sp, #0x60]
7101c9f4fc  add x29,sp,#0x60
7101c9f500  sub sp,sp,#0x320
7101c9f504  mov w8,#0x101
7101c9f508  strh w8,[sp, #0x158]
7101c9f50c  add x8,sp,#0x5b
7101c9f510  add x22,x0,#0x118
7101c9f514  mov x19,x1
7101c9f518  mov x20,x0
7101c9f51c  str xzr,[sp, #0x150]
7101c9f520  stur wzr,[x8, #0xff]
7101c9f524  mov w23,#0x1
7101c9f528  mov x8,#0x41f0000000000000
7101c9f52c  add x0,sp,#0x140
7101c9f530  mov x1,x22
7101c9f534  mov w21,w2
7101c9f538  mov w26,#0x9dc5
7101c9f53c  movk w26,#0x811c, LSL #16
7101c9f540  strh wzr,[sp, #0x15e]
7101c9f544  str w23,[sp, #0x160]
7101c9f548  strh w23,[sp, #0x164]
7101c9f54c  strb w23,[sp, #0x166]
7101c9f550  str x8,[sp, #0x168]
7101c9f554  str wzr,[sp, #0x170]
7101c9f558  str xzr,[sp, #0x1a0]
7101c9f55c  str xzr,[sp, #0x1d0]
7101c9f560  str xzr,[sp, #0x200]
7101c9f564  str xzr,[sp, #0x230]
7101c9f568  str xzr,[sp, #0x260]
7101c9f56c  str wzr,[sp, #0x270]
7101c9f570  bl 0x7103776390
7101c9f574  and w8,w21,#0xff
7101c9f578  cmp w8,#0x7
7101c9f57c  strb wzr,[sp, #0x100]
7101c9f580  str x26,[sp, #0xf8]
7101c9f584  b.hi 0x7101ca0c6c
7101c9f588  lsl w9,w23,w8
7101c9f58c  mov w10,#0xaf
7101c9f590  tst w9,w10
7101c9f594  b.eq 0x7101c9f5a4
7101c9f598  ldr x8,[x19]
7101c9f59c  cbnz x8,0x7101ca0c6c
7101c9f5a0  b 0x7101c9f5ac
7101c9f5a4  cmp w8,#0x4
7101c9f5a8  b.ne 0x7101c9f9ec
7101c9f5ac  mov w8,#0x1
7101c9f5b0  strb w8,[sp, #0x15b]
7101c9f5b4  and w2,w21,#0xff
7101c9f5b8  adrp x1,0x7104280000
7101c9f5bc  add x1,x1,#0xcce
7101c9f5c0  sub x8,x29,#0xb8
7101c9f5c4  mov x0,x22
7101c9f5c8  bl 0x7103776640
7101c9f5cc  ldur x8,[x29, #-0xb0]
7101c9f5d0  ldr x22,[sp, #0x148]
7101c9f5d4  stur xzr,[x29, #-0xb0]
7101c9f5d8  str x8,[sp, #0x148]
7101c9f5dc  cbz x22,0x7101c9f600
7101c9f5e0  ldr x0,[x22, #0x18]
7101c9f5e4  adrp x8,0x710523d000
7101c9f5e8  add x8,x8,#0x9a8
7101c9f5ec  stp x8,xzr,[x22, #0x10]
7101c9f5f0  cbz x0,0x7101c9f5f8
7101c9f5f4  bl 0x710392eb40
7101c9f5f8  mov x0,x22
7101c9f5fc  bl 0x710392eb40
7101c9f600  mov x9,#0x6573
7101c9f604  movk x9,#0x656c, LSL #16
7101c9f608  movk x9,#0x7463, LSL #32
7101c9f60c  movk x9,#0x726f, LSL #48
7101c9f610  adrp x8,0x710523d000
7101c9f614  add x8,x8,#0x988
7101c9f618  str x9,[sp, #0x100]
7101c9f61c  add x9,sp,#0xf8
7101c9f620  strb wzr,[sp, #0x10a]
7101c9f624  mov w10,#0x305f
7101c9f628  stp x8,xzr,[x29, #-0xb8]
7101c9f62c  add x9,x9,#0x9
7101c9f630  strh w10,[sp, #0x108]
7101c9f634  mov w12,#0xa
7101c9f638  mov w11,#0x73
7101c9f63c  mov w10,#0x89
7101c9f640  mov w8,w26
7101c9f644  str w12,[sp, #0xfc]
7101c9f648  mul w8,w8,w10
7101c9f64c  and w11,w11,#0xff
7101c9f650  eor w8,w8,w11
7101c9f654  ldrb w11,[x9], #0x1
7101c9f658  cbnz w11,0x7101c9f648
7101c9f65c  add x9,sp,#0xf8
7101c9f660  add x2,x9,#0x8
7101c9f664  add x1,sp,#0x140
7101c9f668  add x3,sp,#0x150
7101c9f66c  mov x0,x19
7101c9f670  str w8,[sp, #0xf8]
7101c9f674  bl 0x7103770b30
7101c9f678  and w8,w21,#0xff
7101c9f67c  cmp w8,#0x7
7101c9f680  strb wzr,[sp, #0xb8]
7101c9f684  str xzr,[sp, #0xb0]
7101c9f688  b.hi 0x7101ca0c58
7101c9f68c  and x8,x21,#0xff
7101c9f690  adrp x9,0x71044f9000
7101c9f694  add x9,x9,#0xb00
7101c9f698  ldrsw x8,[x9, x8, LSL #0x2]
7101c9f69c  add x8,x8,x9
7101c9f6a0  br x8
7101c9f6a4  ldp x8,x9,[x20, #0x198]
7101c9f6a8  strb wzr,[sp, #0x70]
7101c9f6ac  str xzr,[sp, #0x68]
7101c9f6b0  sub x24,x9,x8
7101c9f6b4  add x8,sp,#0x68
7101c9f6b8  adrp x1,0x710436c000
7101c9f6bc  add x1,x1,#0x660
7101c9f6c0  add x0,sp,#0x68
7101c9f6c4  mov w2,w24
7101c9f6c8  add x21,x8,#0x8
7101c9f6cc  bl 0x710062dc20
7101c9f6d0  ldr x0,[sp, #0x148]
7101c9f6d4  fmov s0,0x3f800000
7101c9f6d8  mov x1,x21
7101c9f6dc  bl 0x7103778300
7101c9f6e0  cmp w24,#0x1
7101c9f6e4  b.lt 0x7101ca0c58
7101c9f6e8  add x8,x20,#0x198
7101c9f6ec  str x8,[sp, #0x8]
7101c9f6f0  add x8,sp,#0xb0
7101c9f6f4  add x23,x8,#0x8
7101c9f6f8  sub x8,x29,#0xb8
7101c9f6fc  sub x21,x29,#0x100
7101c9f700  mov x22,xzr
7101c9f704  sxtw x27,w24
7101c9f708  mov w24,#0x89
7101c9f70c  add x28,x8,#0x9
7101c9f710  add x8,x21,#0x9
7101c9f714  stur x8,[x29, #-0x58]
7101c9f718  add x0,sp,#0xb0
7101c9f71c  adrp x1,0x7104308000
7101c9f720  add x1,x1,#0x779
7101c9f724  mov w2,w22
7101c9f728  bl 0x710062dc20
7101c9f72c  mov x0,x19
7101c9f730  mov w1,w22
7101c9f734  mov x2,x23
7101c9f738  bl 0x71037717d0
7101c9f73c  ldr x1,[x19]
7101c9f740  sub x0,x29,#0xb8
7101c9f744  mov w2,w22
7101c9f748  bl 0x7103771d60
7101c9f74c  ldur x25,[x29, #-0xb0]
7101c9f750  ldr x8,[x25]
7101c9f754  cbz x8,0x7101c9f760
7101c9f758  ldr x1,[x8, #0x88]
7101c9f75c  b 0x7101c9f768
7101c9f760  adrp x1,0x7104867000
7101c9f764  add x1,x1,#0xc2e
7101c9f768  add x8,sp,#0x58
7101c9f76c  add x0,sp,#0x140
7101c9f770  bl 0x7103776640
7101c9f774  adrp x8,0x710523d000
7101c9f778  add x8,x8,#0x9c8
7101c9f77c  stp x8,xzr,[x29, #-0xb8]
7101c9f780  cbz x25,0x7101c9f78c
7101c9f784  mov x0,x25
7101c9f788  bl 0x710392eb40
7101c9f78c  ldp x8,x9,[x20, #0x198]
7101c9f790  sub x9,x9,x8
7101c9f794  cmp x9,x22
7101c9f798  b.ls 0x7101ca0dbc
7101c9f79c  ldrb w8,[x8, x22, LSL ]
7101c9f7a0  sturb wzr,[x29, #-0xb0]
7101c9f7a4  stur xzr,[x29, #-0xb8]
7101c9f7a8  cmp w8,#0x3
7101c9f7ac  b.eq 0x7101c9f8b8
7101c9f7b0  cmp w8,#0x2
7101c9f7b4  b.eq 0x7101c9f838
7101c9f7b8  cmp w8,#0x1
7101c9f7bc  b.ne 0x7101c9f9a8
7101c9f7c0  mov x8,#0x6e6d
7101c9f7c4  movk x8,#0x5f75, LSL #16
7101c9f7c8  movk x8,#0x6e61, LSL #32
7101c9f7cc  movk x8,#0x6f79, LSL #48
7101c9f7d0  stur x8,[x29, #-0xb0]
7101c9f7d4  mov x8,#0x656e
7101c9f7d8  movk x8,#0x725f, LSL #16
7101c9f7dc  movk x8,#0x6c75, LSL #32
7101c9f7e0  movk x8,#0x5f65, LSL #48
7101c9f7e4  stur x8,[x29, #-0xa8]
7101c9f7e8  mov w8,#0x6465
7101c9f7ec  sturh w8,[x29, #-0xa0]
7101c9f7f0  sub x8,x29,#0xb8
7101c9f7f4  mov w9,#0x7469
7101c9f7f8  movk w9,#0x6d5f, LSL #16
7101c9f7fc  stur w9,[x8, #0x1a]
7101c9f800  mov w8,#0x6c65
7101c9f804  sturh w8,[x29, #-0x9a]
7101c9f808  mov x9,x28
7101c9f80c  mov w10,#0x6d
7101c9f810  mov w8,w26
7101c9f814  orr w11,wzr,#0x18
7101c9f818  sturb wzr,[x29, #-0x98]
7101c9f81c  stur w11,[x29, #-0xb4]
7101c9f820  mul w8,w8,w24
7101c9f824  and w10,w10,#0xff
7101c9f828  eor w8,w8,w10
7101c9f82c  ldrb w10,[x9], #0x1
7101c9f830  cbnz w10,0x7101c9f820
7101c9f834  b 0x7101c9f928
7101c9f838  mov x8,#0x6e6d
7101c9f83c  movk x8,#0x5f75, LSL #16
7101c9f840  movk x8,#0x6e61, LSL #32
7101c9f844  movk x8,#0x6f79, LSL #48
7101c9f848  stur x8,[x29, #-0xb0]
7101c9f84c  mov x8,#0x656e
7101c9f850  movk x8,#0x725f, LSL #16
7101c9f854  movk x8,#0x6c75, LSL #32
7101c9f858  movk x8,#0x5f65, LSL #48
7101c9f85c  stur x8,[x29, #-0xa8]
7101c9f860  mov w8,#0x6465
7101c9f864  mov x9,#0x7469
7101c9f868  movk x9,#0x6d5f, LSL #16
7101c9f86c  sturh w8,[x29, #-0xa0]
7101c9f870  sub x8,x29,#0xb8
7101c9f874  movk x9,#0x6c65, LSL #32
7101c9f878  movk x9,#0x745f, LSL #48
7101c9f87c  stur x9,[x8, #0x1a]
7101c9f880  mov w9,#0x6165
7101c9f884  movk w9,#0x6d, LSL #16
7101c9f888  stur w9,[x8, #0x22]
7101c9f88c  mov x9,x28
7101c9f890  mov w10,#0x6d
7101c9f894  mov w8,w26
7101c9f898  mov w11,#0x1d
7101c9f89c  stur w11,[x29, #-0xb4]
7101c9f8a0  mul w8,w8,w24
7101c9f8a4  and w10,w10,#0xff
7101c9f8a8  eor w8,w8,w10
7101c9f8ac  ldrb w10,[x9], #0x1
7101c9f8b0  cbnz w10,0x7101c9f8a0
7101c9f8b4  b 0x7101c9f928
7101c9f8b8  mov x8,#0x6e6d
7101c9f8bc  movk x8,#0x5f75, LSL #16
7101c9f8c0  movk x8,#0x6e61, LSL #32
7101c9f8c4  movk x8,#0x6f79, LSL #48
7101c9f8c8  stur x8,[x29, #-0xb0]
7101c9f8cc  mov x8,#0x656e
7101c9f8d0  movk x8,#0x725f, LSL #16
7101c9f8d4  movk x8,#0x6c75, LSL #32
7101c9f8d8  movk x8,#0x5f65, LSL #48
7101c9f8dc  stur x8,[x29, #-0xa8]
7101c9f8e0  mov w8,#0x6465
7101c9f8e4  mov x9,#0x7469
7101c9f8e8  movk x9,#0x315f, LSL #16
7101c9f8ec  sturh w8,[x29, #-0xa0]
7101c9f8f0  sub x8,x29,#0xb8
7101c9f8f4  movk x9,#0x6e6f, LSL #32
7101c9f8f8  movk x9,#0x31, LSL #48
7101c9f8fc  stur x9,[x8, #0x1a]
7101c9f900  mov x9,x28
7101c9f904  mov w10,#0x6d
7101c9f908  mov w8,w26
7101c9f90c  mov w11,#0x19
7101c9f910  stur w11,[x29, #-0xb4]
7101c9f914  mul w8,w8,w24
7101c9f918  and w10,w10,#0xff
7101c9f91c  eor w8,w8,w10
7101c9f920  ldrb w10,[x9], #0x1
7101c9f924  cbnz w10,0x7101c9f914
7101c9f928  mov x9,xzr
7101c9f92c  mov w10,#0x6d
7101c9f930  stur w8,[x29, #-0xb8]
7101c9f934  stur wzr,[x29, #-0x100]
7101c9f938  add w8,w9,#0x1
7101c9f93c  add x11,x21,x9
7101c9f940  cmp w8,#0x3e
7101c9f944  strb w10,[x11, #0x8]
7101c9f948  b.hi 0x7101c9f960
7101c9f94c  ldrb w10,[x28, x9, LSL ]
7101c9f950  add x8,x9,#0x1
7101c9f954  mov x9,x8
7101c9f958  cbnz w10,0x7101c9f938
7101c9f95c  b 0x7101c9f964
7101c9f960  add w8,w9,#0x1
7101c9f964  add x9,x21,#0x8
7101c9f968  strb wzr,[x9, w8, UXTW ]
7101c9f96c  stur w8,[x29, #-0xfc]
7101c9f970  ldurb w8,[x29, #-0xf8]
7101c9f974  mov w9,w26
7101c9f978  cbz w8,0x7101c9f998
7101c9f97c  ldur x10,[x29, #-0x58]
7101c9f980  mov w9,w26
7101c9f984  mul w9,w9,w24
7101c9f988  and w8,w8,#0xff
7101c9f98c  eor w9,w9,w8
7101c9f990  ldrb w8,[x10], #0x1
7101c9f994  cbnz w8,0x7101c9f984
7101c9f998  add x0,sp,#0x58
7101c9f99c  sub x1,x29,#0x100
7101c9f9a0  stur w9,[x29, #-0x100]
7101c9f9a4  bl 0x7101ca0f60
7101c9f9a8  ldr x25,[sp, #0x60]
7101c9f9ac  adrp x8,0x710523d000
7101c9f9b0  add x8,x8,#0x988
7101c9f9b4  stp x8,xzr,[sp, #0x58]
7101c9f9b8  cbz x25,0x7101c9f9dc
7101c9f9bc  ldr x0,[x25, #0x18]
7101c9f9c0  adrp x8,0x710523d000
7101c9f9c4  add x8,x8,#0x9a8
7101c9f9c8  stp x8,xzr,[x25, #0x10]
7101c9f9cc  cbz x0,0x7101c9f9d4
7101c9f9d0  bl 0x710392eb40
7101c9f9d4  mov x0,x25
7101c9f9d8  bl 0x710392eb40
7101c9f9dc  add x22,x22,#0x1
7101c9f9e0  cmp x22,x27
7101c9f9e4  b.lt 0x7101c9f718
7101c9f9e8  b 0x7101ca0c58
7101c9f9ec  ldr x8,[x19]
7101c9f9f0  cbnz x8,0x7101ca0c6c
7101c9f9f4  mov w8,#0x1
7101c9f9f8  strb w8,[sp, #0x15d]
7101c9f9fc  add x8,sp,#0x140
7101c9fa00  cmp x8,x22
7101c9fa04  str wzr,[sp, #0x16c]
7101c9fa08  b.eq 0x7101c9fa7c
7101c9fa0c  ldr x8,[x20, #0x120]
7101c9fa10  ldr x8,[x8]
7101c9fa14  ldr x9,[sp, #0x148]
7101c9fa18  str x8,[x9]
7101c9fa1c  ldr x8,[x20, #0x120]
7101c9fa20  ldr x8,[x8, #0x8]
7101c9fa24  ldr x9,[sp, #0x148]
7101c9fa28  str x8,[x9, #0x8]
7101c9fa2c  ldr x9,[x20, #0x120]
7101c9fa30  ldr x8,[sp, #0x148]
7101c9fa34  cmp x8,x9
7101c9fa38  b.eq 0x7101c9fa7c
7101c9fa3c  ldr x10,[x9, #0x18]
7101c9fa40  ldr x10,[x10]
7101c9fa44  ldr x11,[x8, #0x18]
7101c9fa48  str x10,[x11]
7101c9fa4c  ldr x10,[x9, #0x18]
7101c9fa50  ldr x10,[x10, #0x8]
7101c9fa54  ldr x11,[x8, #0x18]
7101c9fa58  str x10,[x11, #0x8]
7101c9fa5c  ldr x10,[x9, #0x18]
7101c9fa60  ldr x10,[x10, #0x10]
7101c9fa64  ldr x11,[x8, #0x18]
7101c9fa68  str x10,[x11, #0x10]
7101c9fa6c  ldr x9,[x9, #0x18]
7101c9fa70  ldr x9,[x9, #0x18]
7101c9fa74  ldr x8,[x8, #0x18]
7101c9fa78  str x9,[x8, #0x18]
7101c9fa7c  mov x8,#0x6573
7101c9fa80  movk x8,#0x656c, LSL #16
7101c9fa84  movk x8,#0x7463, LSL #32
7101c9fa88  movk x8,#0x726f, LSL #48
7101c9fa8c  add x9,sp,#0xf8
7101c9fa90  strb wzr,[sp, #0x10e]
7101c9fa94  mov w10,#0x695f
7101c9fa98  movk w10,#0x6574, LSL #16
7101c9fa9c  str x8,[sp, #0x100]
7101c9faa0  mov w8,#0x736d
7101c9faa4  add x9,x9,#0x9
7101c9faa8  str w10,[sp, #0x108]
7101c9faac  strh w8,[sp, #0x10c]
7101c9fab0  orr w12,wzr,#0xe
7101c9fab4  mov w11,#0x73
7101c9fab8  mov w10,#0x89
7101c9fabc  mov w8,w26
7101c9fac0  str w12,[sp, #0xfc]
7101c9fac4  mul w8,w8,w10
7101c9fac8  and w11,w11,#0xff
7101c9facc  eor w8,w8,w11
7101c9fad0  ldrb w11,[x9], #0x1
7101c9fad4  cbnz w11,0x7101c9fac4
7101c9fad8  b 0x7101c9f65c
7101c9fadc  ldp x8,x9,[x20, #0x1b0]
7101c9fae0  strb wzr,[sp, #0x70]
7101c9fae4  str xzr,[sp, #0x68]
7101c9fae8  sub x24,x9,x8
7101c9faec  add x8,sp,#0x68
7101c9faf0  adrp x1,0x710436c000
7101c9faf4  add x1,x1,#0x660
7101c9faf8  add x0,sp,#0x68
7101c9fafc  mov w2,w24
7101c9fb00  add x21,x8,#0x8
7101c9fb04  bl 0x710062dc20
7101c9fb08  ldr x0,[sp, #0x148]
7101c9fb0c  fmov s0,0x3f800000
7101c9fb10  mov x1,x21
7101c9fb14  bl 0x7103778300
7101c9fb18  cmp w24,#0x1
7101c9fb1c  b.lt 0x7101ca0c58
7101c9fb20  add x8,x20,#0x1b0
7101c9fb24  str x8,[sp, #0x8]
7101c9fb28  add x8,sp,#0xb0
7101c9fb2c  add x23,x8,#0x8
7101c9fb30  sub x8,x29,#0xb8
7101c9fb34  sub x21,x29,#0x100
7101c9fb38  mov x22,xzr
7101c9fb3c  sxtw x27,w24
7101c9fb40  mov w24,#0x89
7101c9fb44  add x28,x8,#0x9
7101c9fb48  add x8,x21,#0x9
7101c9fb4c  stur x8,[x29, #-0x58]
7101c9fb50  add x0,sp,#0xb0
7101c9fb54  adrp x1,0x7104308000
7101c9fb58  add x1,x1,#0x779
7101c9fb5c  mov w2,w22
7101c9fb60  bl 0x710062dc20
7101c9fb64  mov x0,x19
7101c9fb68  mov w1,w22
7101c9fb6c  mov x2,x23
7101c9fb70  bl 0x71037717d0
7101c9fb74  ldr x1,[x19]
7101c9fb78  sub x0,x29,#0xb8
7101c9fb7c  mov w2,w22
7101c9fb80  bl 0x7103771d60
7101c9fb84  ldur x25,[x29, #-0xb0]
7101c9fb88  ldr x8,[x25]
7101c9fb8c  cbz x8,0x7101c9fb98
7101c9fb90  ldr x1,[x8, #0x88]
7101c9fb94  b 0x7101c9fba0
7101c9fb98  adrp x1,0x7104867000
7101c9fb9c  add x1,x1,#0xc2e
7101c9fba0  add x8,sp,#0x58
7101c9fba4  add x0,sp,#0x140
7101c9fba8  bl 0x7103776640
7101c9fbac  adrp x8,0x710523d000
7101c9fbb0  add x8,x8,#0x9c8
7101c9fbb4  stp x8,xzr,[x29, #-0xb8]
7101c9fbb8  cbz x25,0x7101c9fbc4
7101c9fbbc  mov x0,x25
7101c9fbc0  bl 0x710392eb40
7101c9fbc4  ldp x8,x9,[x20, #0x1b0]
7101c9fbc8  sub x9,x9,x8
7101c9fbcc  cmp x9,x22
7101c9fbd0  b.ls 0x7101ca0dbc
7101c9fbd4  ldrb w8,[x8, x22, LSL ]
7101c9fbd8  sturb wzr,[x29, #-0xb0]
7101c9fbdc  stur xzr,[x29, #-0xb8]
7101c9fbe0  cmp w8,#0x3
7101c9fbe4  b.eq 0x7101c9fce4
7101c9fbe8  cmp w8,#0x2
7101c9fbec  b.eq 0x7101c9fc6c
7101c9fbf0  cmp w8,#0x1
7101c9fbf4  b.ne 0x7101c9fde0
7101c9fbf8  mov x8,#0x6e6d
7101c9fbfc  movk x8,#0x5f75, LSL #16
7101c9fc00  movk x8,#0x6e61, LSL #32
7101c9fc04  movk x8,#0x6f79, LSL #48
7101c9fc08  stur x8,[x29, #-0xb0]
7101c9fc0c  mov x8,#0x656e
7101c9fc10  movk x8,#0x725f, LSL #16
7101c9fc14  movk x8,#0x6c75, LSL #32
7101c9fc18  movk x8,#0x5f65, LSL #48
7101c9fc1c  stur x8,[x29, #-0xa8]
7101c9fc20  mov w8,#0x6465
7101c9fc24  mov x9,#0x7469
7101c9fc28  movk x9,#0x745f, LSL #16
7101c9fc2c  sturh w8,[x29, #-0xa0]
7101c9fc30  sub x8,x29,#0xb8
7101c9fc34  movk x9,#0x6d69, LSL #32
7101c9fc38  movk x9,#0x65, LSL #48
7101c9fc3c  stur x9,[x8, #0x1a]
7101c9fc40  mov x9,x28
7101c9fc44  mov w10,#0x6d
7101c9fc48  mov w8,w26
7101c9fc4c  mov w11,#0x19
7101c9fc50  stur w11,[x29, #-0xb4]
7101c9fc54  mul w8,w8,w24
7101c9fc58  and w10,w10,#0xff
7101c9fc5c  eor w8,w8,w10
7101c9fc60  ldrb w10,[x9], #0x1
7101c9fc64  cbnz w10,0x7101c9fc54
7101c9fc68  b 0x7101c9fd60
7101c9fc6c  mov x8,#0x6e6d
7101c9fc70  movk x8,#0x5f75, LSL #16
7101c9fc74  movk x8,#0x6e61, LSL #32
7101c9fc78  movk x8,#0x6f79, LSL #48
7101c9fc7c  stur x8,[x29, #-0xb0]
7101c9fc80  mov x8,#0x656e
7101c9fc84  movk x8,#0x725f, LSL #16
7101c9fc88  movk x8,#0x6c75, LSL #32
7101c9fc8c  movk x8,#0x5f65, LSL #48
7101c9fc90  stur x8,[x29, #-0xa8]
7101c9fc94  mov w8,#0x6465
7101c9fc98  mov x9,#0x7469
7101c9fc9c  movk x9,#0x735f, LSL #16
7101c9fca0  sturh w8,[x29, #-0xa0]
7101c9fca4  sub x8,x29,#0xb8
7101c9fca8  movk x9,#0x6f74, LSL #32
7101c9fcac  movk x9,#0x6b63, LSL #48
7101c9fcb0  stur x9,[x8, #0x1a]
7101c9fcb4  mov x9,x28
7101c9fcb8  sturb wzr,[x29, #-0x96]
7101c9fcbc  mov w10,#0x6d
7101c9fcc0  mov w8,w26
7101c9fcc4  mov w11,#0x1a
7101c9fcc8  stur w11,[x29, #-0xb4]
7101c9fccc  mul w8,w8,w24
7101c9fcd0  and w10,w10,#0xff
7101c9fcd4  eor w8,w8,w10
7101c9fcd8  ldrb w10,[x9], #0x1
7101c9fcdc  cbnz w10,0x7101c9fccc
7101c9fce0  b 0x7101c9fd60
7101c9fce4  mov x8,#0x6e6d
7101c9fce8  movk x8,#0x5f75, LSL #16
7101c9fcec  movk x8,#0x6e61, LSL #32
7101c9fcf0  movk x8,#0x6f79, LSL #48
7101c9fcf4  stur x8,[x29, #-0xb0]
7101c9fcf8  mov x8,#0x656e
7101c9fcfc  movk x8,#0x725f, LSL #16
7101c9fd00  movk x8,#0x6c75, LSL #32
7101c9fd04  movk x8,#0x5f65, LSL #48
7101c9fd08  stur x8,[x29, #-0xa8]
7101c9fd0c  mov w8,#0x6465
7101c9fd10  mov x9,#0x7469
7101c9fd14  movk x9,#0x735f, LSL #16
7101c9fd18  sturh w8,[x29, #-0xa0]
7101c9fd1c  sub x8,x29,#0xb8
7101c9fd20  movk x9,#0x6174, LSL #32
7101c9fd24  movk x9,#0x696d, LSL #48
7101c9fd28  stur x9,[x8, #0x1a]
7101c9fd2c  mov w8,#0x616e
7101c9fd30  sturh w8,[x29, #-0x96]
7101c9fd34  mov x9,x28
7101c9fd38  mov w10,#0x6d
7101c9fd3c  sturb wzr,[x29, #-0x94]
7101c9fd40  mov w8,w26
7101c9fd44  orr w11,wzr,#0x1c
7101c9fd48  stur w11,[x29, #-0xb4]
7101c9fd4c  mul w8,w8,w24
7101c9fd50  and w10,w10,#0xff
7101c9fd54  eor w8,w8,w10
7101c9fd58  ldrb w10,[x9], #0x1
7101c9fd5c  cbnz w10,0x7101c9fd4c
7101c9fd60  mov x9,xzr
7101c9fd64  mov w10,#0x6d
7101c9fd68  stur w8,[x29, #-0xb8]
7101c9fd6c  stur wzr,[x29, #-0x100]
7101c9fd70  add w8,w9,#0x1
7101c9fd74  add x11,x21,x9
7101c9fd78  cmp w8,#0x3e
7101c9fd7c  strb w10,[x11, #0x8]
7101c9fd80  b.hi 0x7101c9fd98
7101c9fd84  ldrb w10,[x28, x9, LSL ]
7101c9fd88  add x8,x9,#0x1
7101c9fd8c  mov x9,x8
7101c9fd90  cbnz w10,0x7101c9fd70
7101c9fd94  b 0x7101c9fd9c
7101c9fd98  add w8,w9,#0x1
7101c9fd9c  add x9,x21,#0x8
7101c9fda0  strb wzr,[x9, w8, UXTW ]
7101c9fda4  stur w8,[x29, #-0xfc]
7101c9fda8  ldurb w8,[x29, #-0xf8]
7101c9fdac  mov w9,w26
7101c9fdb0  cbz w8,0x7101c9fdd0
7101c9fdb4  ldur x10,[x29, #-0x58]
7101c9fdb8  mov w9,w26
7101c9fdbc  mul w9,w9,w24
7101c9fdc0  and w8,w8,#0xff
7101c9fdc4  eor w9,w9,w8
7101c9fdc8  ldrb w8,[x10], #0x1
7101c9fdcc  cbnz w8,0x7101c9fdbc
7101c9fdd0  add x0,sp,#0x58
7101c9fdd4  sub x1,x29,#0x100
7101c9fdd8  stur w9,[x29, #-0x100]
7101c9fddc  bl 0x7101ca0f60
7101c9fde0  ldr x25,[sp, #0x60]
7101c9fde4  adrp x8,0x710523d000
7101c9fde8  add x8,x8,#0x988
7101c9fdec  stp x8,xzr,[sp, #0x58]
7101c9fdf0  cbz x25,0x7101c9fe14
7101c9fdf4  ldr x0,[x25, #0x18]
7101c9fdf8  adrp x8,0x710523d000
7101c9fdfc  add x8,x8,#0x9a8
7101c9fe00  stp x8,xzr,[x25, #0x10]
7101c9fe04  cbz x0,0x7101c9fe0c
7101c9fe08  bl 0x710392eb40
7101c9fe0c  mov x0,x25
7101c9fe10  bl 0x710392eb40
7101c9fe14  add x22,x22,#0x1
7101c9fe18  cmp x22,x27
7101c9fe1c  b.lt 0x7101c9fb50
7101c9fe20  b 0x7101ca0c58
7101c9fe24  ldp x8,x9,[x20, #0x1f8]
7101c9fe28  sturb wzr,[x29, #-0xf8]
7101c9fe2c  stur xzr,[x29, #-0x100]
7101c9fe30  sub x25,x9,x8
7101c9fe34  sub x8,x29,#0x100
7101c9fe38  adrp x1,0x710436c000
7101c9fe3c  add x1,x1,#0x660
7101c9fe40  sub x0,x29,#0x100
7101c9fe44  mov w2,w25
7101c9fe48  add x21,x8,#0x8
7101c9fe4c  bl 0x710062dc20
7101c9fe50  ldr x0,[sp, #0x148]
7101c9fe54  fmov s0,0x3f800000
7101c9fe58  mov x1,x21
7101c9fe5c  bl 0x7103778300
7101c9fe60  cmp w25,#0x1
7101c9fe64  b.lt 0x7101ca0c58
7101c9fe68  add x8,x20,#0x1f8
7101c9fe6c  stur x8,[x29, #-0x58]
7101c9fe70  add x8,sp,#0xb0
7101c9fe74  mov x22,xzr
7101c9fe78  sxtw x28,w25
7101c9fe7c  sub x27,x29,#0xb8
7101c9fe80  add x24,x8,#0x8
7101c9fe84  adrp x23,0x710523d000
7101c9fe88  add x23,x23,#0x988
7101c9fe8c  mov w21,#0x89
7101c9fe90  add x0,sp,#0xb0
7101c9fe94  adrp x1,0x7104308000
7101c9fe98  add x1,x1,#0x779
7101c9fe9c  mov w2,w22
7101c9fea0  bl 0x710062dc20
7101c9fea4  mov x0,x19
7101c9fea8  mov w1,w22
7101c9feac  mov x2,x24
7101c9feb0  bl 0x71037717d0
7101c9feb4  ldr x1,[x19]
7101c9feb8  sub x0,x29,#0xb8
7101c9febc  mov w2,w22
7101c9fec0  bl 0x7103771d60
7101c9fec4  ldur x25,[x29, #-0xb0]
7101c9fec8  ldr x8,[x25]
7101c9fecc  cbz x8,0x7101c9fed8
7101c9fed0  ldr x1,[x8, #0x88]
7101c9fed4  b 0x7101c9fee0
7101c9fed8  adrp x1,0x7104867000
7101c9fedc  add x1,x1,#0xc2e
7101c9fee0  add x8,sp,#0x68
7101c9fee4  add x0,sp,#0x140
7101c9fee8  bl 0x7103776640
7101c9feec  adrp x8,0x710523d000
7101c9fef0  add x8,x8,#0x9c8
7101c9fef4  stp x8,xzr,[x29, #-0xb8]
7101c9fef8  cbz x25,0x7101c9ff04
7101c9fefc  mov x0,x25
7101c9ff00  bl 0x710392eb40
7101c9ff04  ldp x8,x9,[x20, #0x1f8]
7101c9ff08  sub x9,x9,x8
7101c9ff0c  cmp x9,x22
7101c9ff10  b.ls 0x7101ca0db4
7101c9ff14  ldrb w8,[x8, x22, LSL ]
7101c9ff18  sub w8,w8,#0x1
7101c9ff1c  cmp w8,#0x4
7101c9ff20  b.hi 0x7101c9ffc8
7101c9ff24  orr x9,xzr,#0x1e00000000
7101c9ff28  and x8,x8,#0xff
7101c9ff2c  mov x10,#0x7469
7101c9ff30  movk x10,#0x735f, LSL #16
7101c9ff34  stur x9,[x29, #-0xb8]
7101c9ff38  mov w9,#0x32
7101c9ff3c  mul x8,x8,x9
7101c9ff40  mov x9,#0x6e6d
7101c9ff44  movk x9,#0x5f75, LSL #16
7101c9ff48  movk x9,#0x6e61, LSL #32
7101c9ff4c  movk x9,#0x6f79, LSL #48
7101c9ff50  stur x9,[x29, #-0xb0]
7101c9ff54  mov x9,#0x656e
7101c9ff58  movk x9,#0x725f, LSL #16
7101c9ff5c  movk x9,#0x6c75, LSL #32
7101c9ff60  movk x9,#0x5f65, LSL #48
7101c9ff64  stur x9,[x29, #-0xa8]
7101c9ff68  mov w9,#0x6465
7101c9ff6c  sturh w9,[x29, #-0xa0]
7101c9ff70  sub x9,x29,#0xb8
7101c9ff74  movk x10,#0x6174, LSL #32
7101c9ff78  movk x10,#0x696d, LSL #48
7101c9ff7c  stur x10,[x9, #0x1a]
7101c9ff80  mov w10,#0x616e
7101c9ff84  movk w10,#0x6e5f, LSL #16
7101c9ff88  stur w10,[x9, #0x22]
7101c9ff8c  mov w9,#0x9
7101c9ff90  mov w11,#0x6d
7101c9ff94  sturb wzr,[x29, #-0x92]
7101c9ff98  mov w10,w26
7101c9ff9c  mul w10,w10,w21
7101c9ffa0  and w11,w11,#0xff
7101c9ffa4  eor w10,w10,w11
7101c9ffa8  ldrb w11,[x27, x9, LSL ]
7101c9ffac  add x9,x9,#0x1
7101c9ffb0  cbnz w11,0x7101c9ff9c
7101c9ffb4  add x2,x8,#0x64
7101c9ffb8  add x0,sp,#0x68
7101c9ffbc  sub x1,x29,#0xb8
7101c9ffc0  stur w10,[x29, #-0xb8]
7101c9ffc4  bl 0x7101ca0dd0
7101c9ffc8  ldr x25,[sp, #0x70]
7101c9ffcc  stp x23,xzr,[sp, #0x68]
7101c9ffd0  cbz x25,0x7101c9fff4
7101c9ffd4  ldr x0,[x25, #0x18]
7101c9ffd8  adrp x8,0x710523d000
7101c9ffdc  add x8,x8,#0x9a8
7101c9ffe0  stp x8,xzr,[x25, #0x10]
7101c9ffe4  cbz x0,0x7101c9ffec
7101c9ffe8  bl 0x710392eb40
7101c9ffec  mov x0,x25
7101c9fff0  bl 0x710392eb40
7101c9fff4  add x22,x22,#0x1
7101c9fff8  cmp x22,x28
7101c9fffc  b.lt 0x7101c9fe90
7101ca0000  b 0x7101ca0c58
7101ca0004  ldp x8,x9,[x20, #0x1e0]
7101ca0008  sturb wzr,[x29, #-0xf8]
7101ca000c  stur xzr,[x29, #-0x100]
7101ca0010  sub x24,x9,x8
7101ca0014  sub x8,x29,#0x100
7101ca0018  adrp x1,0x710436c000
7101ca001c  add x1,x1,#0x660
7101ca0020  sub x0,x29,#0x100
7101ca0024  mov w2,w24
7101ca0028  add x21,x8,#0x8
7101ca002c  bl 0x710062dc20
7101ca0030  ldr x0,[sp, #0x148]
7101ca0034  fmov s0,0x3f800000
7101ca0038  mov x1,x21
7101ca003c  bl 0x7103778300
7101ca0040  cmp w24,#0x1
7101ca0044  b.lt 0x7101ca0c58
7101ca0048  add x8,x20,#0x1e0
7101ca004c  stur x8,[x29, #-0x58]
7101ca0050  add x8,sp,#0xb0
7101ca0054  mov x22,xzr
7101ca0058  sxtw x27,w24
7101ca005c  sub x28,x29,#0xb8
7101ca0060  add x23,x8,#0x8
7101ca0064  adrp x24,0x710523d000
7101ca0068  add x24,x24,#0x988
7101ca006c  mov w21,#0x89
7101ca0070  add x0,sp,#0xb0
7101ca0074  adrp x1,0x7104308000
7101ca0078  add x1,x1,#0x779
7101ca007c  mov w2,w22
7101ca0080  bl 0x710062dc20
7101ca0084  mov x0,x19
7101ca0088  mov w1,w22
7101ca008c  mov x2,x23
7101ca0090  bl 0x71037717d0
7101ca0094  ldr x1,[x19]
7101ca0098  sub x0,x29,#0xb8
7101ca009c  mov w2,w22
7101ca00a0  bl 0x7103771d60
7101ca00a4  ldur x25,[x29, #-0xb0]
7101ca00a8  ldr x8,[x25]
7101ca00ac  cbz x8,0x7101ca00b8
7101ca00b0  ldr x1,[x8, #0x88]
7101ca00b4  b 0x7101ca00c0
7101ca00b8  adrp x1,0x7104867000
7101ca00bc  add x1,x1,#0xc2e
7101ca00c0  add x8,sp,#0x68
7101ca00c4  add x0,sp,#0x140
7101ca00c8  bl 0x7103776640
7101ca00cc  adrp x8,0x710523d000
7101ca00d0  add x8,x8,#0x9c8
7101ca00d4  stp x8,xzr,[x29, #-0xb8]
7101ca00d8  cbz x25,0x7101ca00e4
7101ca00dc  mov x0,x25
7101ca00e0  bl 0x710392eb40
7101ca00e4  ldp x8,x9,[x20, #0x1e0]
7101ca00e8  sub x9,x9,x8
7101ca00ec  cmp x9,x22
7101ca00f0  b.ls 0x7101ca0db4
7101ca00f4  ldrb w8,[x8, x22, LSL ]
7101ca00f8  sub w8,w8,#0x1
7101ca00fc  cmp w8,#0x2
7101ca0100  b.hi 0x7101ca019c
7101ca0104  orr x9,xzr,#0x1c00000000
7101ca0108  stur x9,[x29, #-0xb8]
7101ca010c  mov x9,#0x6e6d
7101ca0110  movk x9,#0x5f75, LSL #16
7101ca0114  movk x9,#0x6e61, LSL #32
7101ca0118  movk x9,#0x6f79, LSL #48
7101ca011c  stur x9,[x29, #-0xb0]
7101ca0120  mov x9,#0x656e
7101ca0124  movk x9,#0x725f, LSL #16
7101ca0128  movk x9,#0x6c75, LSL #32
7101ca012c  movk x9,#0x5f65, LSL #48
7101ca0130  stur x9,[x29, #-0xa8]
7101ca0134  mov w9,#0x6465
7101ca0138  mov x10,#0x7469
7101ca013c  movk x10,#0x735f, LSL #16
7101ca0140  movk x10,#0x6f74, LSL #32
7101ca0144  movk x10,#0x6b63, LSL #48
7101ca0148  sturh w9,[x29, #-0xa0]
7101ca014c  sub x9,x29,#0xb8
7101ca0150  stur x10,[x9, #0x1a]
7101ca0154  mov w9,#0x6e5f
7101ca0158  and x8,x8,#0xff
7101ca015c  sturb wzr,[x29, #-0x94]
7101ca0160  sturh w9,[x29, #-0x96]
7101ca0164  mov w9,#0x9
7101ca0168  mov w11,#0x6d
7101ca016c  mov w10,w26
7101ca0170  mul w10,w10,w21
7101ca0174  and w11,w11,#0xff
7101ca0178  eor w10,w10,w11
7101ca017c  ldrb w11,[x28, x9, LSL ]
7101ca0180  add x9,x9,#0x1
7101ca0184  cbnz w11,0x7101ca0170
7101ca0188  add x2,x8,#0x1
7101ca018c  add x0,sp,#0x68
7101ca0190  sub x1,x29,#0xb8
7101ca0194  stur w10,[x29, #-0xb8]
7101ca0198  bl 0x7101ca0dd0
7101ca019c  ldr x25,[sp, #0x70]
7101ca01a0  stp x24,xzr,[sp, #0x68]
7101ca01a4  cbz x25,0x7101ca01c8
7101ca01a8  ldr x0,[x25, #0x18]
7101ca01ac  adrp x8,0x710523d000
7101ca01b0  add x8,x8,#0x9a8
7101ca01b4  stp x8,xzr,[x25, #0x10]
7101ca01b8  cbz x0,0x7101ca01c0
7101ca01bc  bl 0x710392eb40
7101ca01c0  mov x0,x25
7101ca01c4  bl 0x710392eb40
7101ca01c8  add x22,x22,#0x1
7101ca01cc  cmp x22,x27
7101ca01d0  b.lt 0x7101ca0070
7101ca01d4  b 0x7101ca0c58
7101ca01d8  ldp x8,x9,[x20, #0x1c8]
7101ca01dc  sturb wzr,[x29, #-0xf8]
7101ca01e0  stur xzr,[x29, #-0x100]
7101ca01e4  sub x25,x9,x8
7101ca01e8  sub x8,x29,#0x100
7101ca01ec  adrp x1,0x710436c000
7101ca01f0  add x1,x1,#0x660
7101ca01f4  sub x0,x29,#0x100
7101ca01f8  mov w2,w25
7101ca01fc  add x21,x8,#0x8
7101ca0200  bl 0x710062dc20
7101ca0204  ldr x0,[sp, #0x148]
7101ca0208  fmov s0,0x3f800000
7101ca020c  mov x1,x21
7101ca0210  bl 0x7103778300
7101ca0214  cmp w25,#0x1
7101ca0218  b.lt 0x7101ca0c58
7101ca021c  add x8,x20,#0x1c8
7101ca0220  stur x8,[x29, #-0x58]
7101ca0224  add x8,sp,#0xb0
7101ca0228  mov x21,xzr
7101ca022c  sxtw x27,w25
7101ca0230  sub x23,x29,#0xb8
7101ca0234  add x24,x8,#0x8
7101ca0238  mov w28,#0x89
7101ca023c  adrp x22,0x71044f9000
7101ca0240  add x22,x22,#0xb34
7101ca0244  add x0,sp,#0xb0
7101ca0248  adrp x1,0x7104308000
7101ca024c  add x1,x1,#0x779
7101ca0250  mov w2,w21
7101ca0254  bl 0x710062dc20
7101ca0258  mov x0,x19
7101ca025c  mov w1,w21
7101ca0260  mov x2,x24
7101ca0264  bl 0x71037717d0
7101ca0268  ldr x1,[x19]
7101ca026c  sub x0,x29,#0xb8
7101ca0270  mov w2,w21
7101ca0274  bl 0x7103771d60
7101ca0278  ldur x25,[x29, #-0xb0]
7101ca027c  ldr x8,[x25]
7101ca0280  cbz x8,0x7101ca028c
7101ca0284  ldr x1,[x8, #0x88]
7101ca0288  b 0x7101ca0294
7101ca028c  adrp x1,0x7104867000
7101ca0290  add x1,x1,#0xc2e
7101ca0294  add x8,sp,#0x68
7101ca0298  add x0,sp,#0x140
7101ca029c  bl 0x7103776640
7101ca02a0  adrp x8,0x710523d000
7101ca02a4  add x8,x8,#0x9c8
7101ca02a8  stp x8,xzr,[x29, #-0xb8]
7101ca02ac  cbz x25,0x7101ca02b8
7101ca02b0  mov x0,x25
7101ca02b4  bl 0x710392eb40
7101ca02b8  ldp x8,x9,[x20, #0x1c8]
7101ca02bc  sub x9,x9,x8
7101ca02c0  cmp x9,x21
7101ca02c4  b.ls 0x7101ca0db4
7101ca02c8  ldrb w8,[x8, x21, LSL ]
7101ca02cc  sub w9,w8,#0x1
7101ca02d0  cmp w9,#0x6
7101ca02d4  b.hi 0x7101ca03d8
7101ca02d8  ldrsw x9,[x22, x9, LSL #0x2]
7101ca02dc  add x9,x9,x22
7101ca02e0  orr w8,wzr,#0x78
7101ca02e4  br x9
7101ca02e8  mov w8,#0x96
7101ca02ec  b 0x7101ca0314
7101ca02f0  mov w8,#0x12c
7101ca02f4  b 0x7101ca0314
7101ca02f8  mov w8,#0xb4
7101ca02fc  b 0x7101ca0314
7101ca0300  orr w8,wzr,#0xf0
7101ca0304  b 0x7101ca0314
7101ca0308  mov w8,#0x168
7101ca030c  b 0x7101ca0314
7101ca0310  mov w8,#0x1a4
7101ca0314  mov w9,#0x8889
7101ca0318  movk w9,#0x8888, LSL #16
7101ca031c  umull x9,w8,w9
7101ca0320  lsr x9,x9,#0x25
7101ca0324  mov w10,#0xffffffc4
7101ca0328  madd w10,w9,w10,w8
7101ca032c  mov x8,#0x1b00000000
7101ca0330  stur x8,[x29, #-0xb8]
7101ca0334  mov x8,#0x6e6d
7101ca0338  movk x8,#0x5f75, LSL #16
7101ca033c  movk x8,#0x6e61, LSL #32
7101ca0340  movk x8,#0x6f79, LSL #48
7101ca0344  stur x8,[x29, #-0xb0]
7101ca0348  mov x8,#0x656e
7101ca034c  movk x8,#0x725f, LSL #16
7101ca0350  movk x8,#0x6c75, LSL #32
7101ca0354  movk x8,#0x5f65, LSL #48
7101ca0358  stur x8,[x29, #-0xa8]
7101ca035c  mov w8,#0x6465
7101ca0360  mov x11,#0x7469
7101ca0364  movk x11,#0x745f, LSL #16
7101ca0368  movk x11,#0x6d69, LSL #32
7101ca036c  movk x11,#0x5f65, LSL #48
7101ca0370  sturh w8,[x29, #-0xa0]
7101ca0374  sub x8,x29,#0xb8
7101ca0378  stur x11,[x8, #0x1a]
7101ca037c  mov w8,#0x3e8
7101ca0380  mul w8,w9,w8
7101ca0384  and w9,w10,#0xffff
7101ca0388  and x10,x10,#0xffff
7101ca038c  mov w11,#0x6e
7101ca0390  sturh w11,[x29, #-0x96]
7101ca0394  mov w11,#0x9
7101ca0398  cmp w9,#0x3e7
7101ca039c  mov w9,#0x3e7
7101ca03a0  csel x9,x10,x9,cc
7101ca03a4  mov w12,#0x6d
7101ca03a8  mov w10,w26
7101ca03ac  mul w10,w10,w28
7101ca03b0  and w12,w12,#0xff
7101ca03b4  eor w10,w10,w12
7101ca03b8  ldrb w12,[x23, x11, LSL ]
7101ca03bc  add x11,x11,#0x1
7101ca03c0  cbnz w12,0x7101ca03ac
7101ca03c4  add x2,x9,x8
7101ca03c8  add x0,sp,#0x68
7101ca03cc  sub x1,x29,#0xb8
7101ca03d0  stur w10,[x29, #-0xb8]
7101ca03d4  bl 0x7101ca0dd0
7101ca03d8  ldr x25,[sp, #0x70]
7101ca03dc  adrp x8,0x710523d000
7101ca03e0  add x8,x8,#0x988
7101ca03e4  stp x8,xzr,[sp, #0x68]
7101ca03e8  cbz x25,0x7101ca040c
7101ca03ec  ldr x0,[x25, #0x18]
7101ca03f0  adrp x8,0x710523d000
7101ca03f4  add x8,x8,#0x9a8
7101ca03f8  stp x8,xzr,[x25, #0x10]
7101ca03fc  cbz x0,0x7101ca0404
7101ca0400  bl 0x710392eb40
7101ca0404  mov x0,x25
7101ca0408  bl 0x710392eb40
7101ca040c  add x21,x21,#0x1
7101ca0410  cmp x21,x27
7101ca0414  b.lt 0x7101ca0244
7101ca0418  b 0x7101ca0c58
7101ca041c  sub x8,x29,#0xb8
7101ca0420  adrp x1,0x710436c000
7101ca0424  add x1,x1,#0x660
7101ca0428  sub x0,x29,#0xb8
7101ca042c  mov w2,#0x2
7101ca0430  sturb wzr,[x29, #-0xb0]
7101ca0434  stur xzr,[x29, #-0xb8]
7101ca0438  add x20,x8,#0x8
7101ca043c  bl 0x710062dc20
7101ca0440  ldr x0,[sp, #0x148]
7101ca0444  fmov s0,0x3f800000
7101ca0448  mov x1,x20
7101ca044c  bl 0x7103778300
7101ca0450  add x8,sp,#0xb0
7101ca0454  adrp x1,0x7104308000
7101ca0458  add x1,x1,#0x779
7101ca045c  add x0,sp,#0xb0
7101ca0460  mov w2,wzr
7101ca0464  add x20,x8,#0x8
7101ca0468  bl 0x710062dc20
7101ca046c  mov x0,x19
7101ca0470  mov w1,wzr
7101ca0474  mov x2,x20
7101ca0478  bl 0x71037717d0
7101ca047c  ldr x1,[x19]
7101ca0480  add x0,sp,#0x68
7101ca0484  mov w2,wzr
7101ca0488  bl 0x7103771d60
7101ca048c  ldr x21,[sp, #0x70]
7101ca0490  ldr x8,[x21]
7101ca0494  cbz x8,0x7101ca0a50
7101ca0498  ldr x1,[x8, #0x88]
7101ca049c  b 0x7101ca0a58
7101ca04a0  ldr x8,[x20, #0x218]
7101ca04a4  ldr x9,[x20, #0x210]
7101ca04a8  strb wzr,[sp, #0x70]
7101ca04ac  str xzr,[sp, #0x68]
7101ca04b0  sub x25,x8,x9
7101ca04b4  add x8,sp,#0x68
7101ca04b8  adrp x1,0x710436c000
7101ca04bc  add x1,x1,#0x660
7101ca04c0  add x0,sp,#0x68
7101ca04c4  mov w2,w25
7101ca04c8  add x21,x8,#0x8
7101ca04cc  bl 0x710062dc20
7101ca04d0  ldr x0,[sp, #0x148]
7101ca04d4  fmov s0,0x3f800000
7101ca04d8  mov x1,x21
7101ca04dc  bl 0x7103778300
7101ca04e0  cmp w25,#0x1
7101ca04e4  b.lt 0x7101ca0c58
7101ca04e8  add x8,x20,#0x210
7101ca04ec  str x8,[sp, #0x8]
7101ca04f0  add x8,sp,#0xb0
7101ca04f4  add x23,x8,#0x8
7101ca04f8  sub x8,x29,#0xb8
7101ca04fc  sub x21,x29,#0x100
7101ca0500  mov x22,xzr
7101ca0504  sxtw x28,w25
7101ca0508  mov w27,#0x89
7101ca050c  add x24,x8,#0x9
7101ca0510  add x8,x21,#0x9
7101ca0514  stur x8,[x29, #-0x58]
7101ca0518  add x0,sp,#0xb0
7101ca051c  adrp x1,0x7104308000
7101ca0520  add x1,x1,#0x779
7101ca0524  mov w2,w22
7101ca0528  bl 0x710062dc20
7101ca052c  mov x0,x19
7101ca0530  mov w1,w22
7101ca0534  mov x2,x23
7101ca0538  bl 0x71037717d0
7101ca053c  ldr x1,[x19]
7101ca0540  sub x0,x29,#0xb8
7101ca0544  mov w2,w22
7101ca0548  bl 0x7103771d60
7101ca054c  ldur x25,[x29, #-0xb0]
7101ca0550  ldr x8,[x25]
7101ca0554  cbz x8,0x7101ca0560
7101ca0558  ldr x1,[x8, #0x88]
7101ca055c  b 0x7101ca0568
7101ca0560  adrp x1,0x7104867000
7101ca0564  add x1,x1,#0xc2e
7101ca0568  add x8,sp,#0x58
7101ca056c  add x0,sp,#0x140
7101ca0570  bl 0x7103776640
7101ca0574  adrp x8,0x710523d000
7101ca0578  add x8,x8,#0x9c8
7101ca057c  stp x8,xzr,[x29, #-0xb8]
7101ca0580  cbz x25,0x7101ca058c
7101ca0584  mov x0,x25
7101ca0588  bl 0x710392eb40
7101ca058c  ldr x9,[x20, #0x218]
7101ca0590  ldr x8,[x20, #0x210]
7101ca0594  sub x9,x9,x8
7101ca0598  cmp x9,x22
7101ca059c  b.ls 0x7101ca0dbc
7101ca05a0  ldrb w8,[x8, x22, LSL ]
7101ca05a4  sturb wzr,[x29, #-0xb0]
7101ca05a8  stur xzr,[x29, #-0xb8]
7101ca05ac  sub w8,w8,#0x1
7101ca05b0  cmp w8,#0x4
7101ca05b4  b.hi 0x7101ca08e0
7101ca05b8  adrp x9,0x71044f9000
7101ca05bc  add x9,x9,#0xb20
7101ca05c0  ldrsw x8,[x9, x8, LSL #0x2]
7101ca05c4  add x8,x8,x9
7101ca05c8  br x8
7101ca05cc  mov x8,#0x6e6d
7101ca05d0  movk x8,#0x5f75, LSL #16
7101ca05d4  movk x8,#0x6e61, LSL #32
7101ca05d8  movk x8,#0x6f79, LSL #48
7101ca05dc  stur x8,[x29, #-0xb0]
7101ca05e0  mov x8,#0x656e
7101ca05e4  movk x8,#0x725f, LSL #16
7101ca05e8  movk x8,#0x6c75, LSL #32
7101ca05ec  movk x8,#0x5f65, LSL #48
7101ca05f0  stur x8,[x29, #-0xa8]
7101ca05f4  mov w8,#0x6465
7101ca05f8  mov x9,#0x7469
7101ca05fc  movk x9,#0x735f, LSL #16
7101ca0600  sturh w8,[x29, #-0xa0]
7101ca0604  sub x8,x29,#0xb8
7101ca0608  movk x9,#0x6774, LSL #32
7101ca060c  movk x9,#0x615f, LSL #48
7101ca0610  stur x9,[x8, #0x1a]
7101ca0614  mov w8,#0x6c6c
7101ca0618  sturh w8,[x29, #-0x96]
7101ca061c  mov x9,x24
7101ca0620  mov w10,#0x6d
7101ca0624  sturb wzr,[x29, #-0x94]
7101ca0628  mov w8,w26
7101ca062c  orr w11,wzr,#0x1c
7101ca0630  stur w11,[x29, #-0xb4]
7101ca0634  mul w8,w8,w27
7101ca0638  and w10,w10,#0xff
7101ca063c  eor w8,w8,w10
7101ca0640  ldrb w10,[x9], #0x1
7101ca0644  cbnz w10,0x7101ca0634
7101ca0648  b 0x7101ca0860
7101ca064c  mov x8,#0x6e6d
7101ca0650  movk x8,#0x5f75, LSL #16
7101ca0654  movk x8,#0x6e61, LSL #32
7101ca0658  movk x8,#0x6f79, LSL #48
7101ca065c  stur x8,[x29, #-0xb0]
7101ca0660  mov x8,#0x656e
7101ca0664  movk x8,#0x725f, LSL #16
7101ca0668  movk x8,#0x6c75, LSL #32
7101ca066c  movk x8,#0x5f65, LSL #48
7101ca0670  stur x8,[x29, #-0xa8]
7101ca0674  mov w8,#0x6465
7101ca0678  mov x9,#0x7469
7101ca067c  movk x9,#0x625f, LSL #16
7101ca0680  sturh w8,[x29, #-0xa0]
7101ca0684  sub x8,x29,#0xb8
7101ca0688  movk x9,#0x7461, LSL #32
7101ca068c  movk x9,#0x6c74, LSL #48
7101ca0690  stur x9,[x8, #0x1a]
7101ca0694  mov x9,#0x6665
7101ca0698  movk x9,#0x6569, LSL #16
7101ca069c  movk x9,#0x646c, LSL #32
7101ca06a0  movk x9,#0x735f, LSL #48
7101ca06a4  stur x9,[x8, #0x22]
7101ca06a8  mov x9,x24
7101ca06ac  sturb wzr,[x29, #-0x8e]
7101ca06b0  mov w10,#0x6d
7101ca06b4  mov w8,w26
7101ca06b8  mov w11,#0x22
7101ca06bc  stur w11,[x29, #-0xb4]
7101ca06c0  mul w8,w8,w27
7101ca06c4  and w10,w10,#0xff
7101ca06c8  eor w8,w8,w10
7101ca06cc  ldrb w10,[x9], #0x1
7101ca06d0  cbnz w10,0x7101ca06c0
7101ca06d4  b 0x7101ca0860
7101ca06d8  mov x8,#0x6e6d
7101ca06dc  movk x8,#0x5f75, LSL #16
7101ca06e0  movk x8,#0x6e61, LSL #32
7101ca06e4  movk x8,#0x6f79, LSL #48
7101ca06e8  stur x8,[x29, #-0xb0]
7101ca06ec  mov x8,#0x656e
7101ca06f0  movk x8,#0x725f, LSL #16
7101ca06f4  movk x8,#0x6c75, LSL #32
7101ca06f8  movk x8,#0x5f65, LSL #48
7101ca06fc  stur x8,[x29, #-0xa8]
7101ca0700  mov w8,#0x6465
7101ca0704  mov x9,#0x7469
7101ca0708  movk x9,#0x6e5f, LSL #16
7101ca070c  sturh w8,[x29, #-0xa0]
7101ca0710  sub x8,x29,#0xb8
7101ca0714  movk x9,#0x5f6f, LSL #32
7101ca0718  movk x9,#0x6967, LSL #48
7101ca071c  stur x9,[x8, #0x1a]
7101ca0720  mov w9,#0x6d6d
7101ca0724  movk w9,#0x6369, LSL #16
7101ca0728  stur w9,[x8, #0x22]
7101ca072c  mov w8,#0x6b
7101ca0730  sturh w8,[x29, #-0x92]
7101ca0734  mov x9,x24
7101ca0738  mov w10,#0x6d
7101ca073c  mov w8,w26
7101ca0740  orr w11,wzr,#0x1f
7101ca0744  stur w11,[x29, #-0xb4]
7101ca0748  mul w8,w8,w27
7101ca074c  and w10,w10,#0xff
7101ca0750  eor w8,w8,w10
7101ca0754  ldrb w10,[x9], #0x1
7101ca0758  cbnz w10,0x7101ca0748
7101ca075c  b 0x7101ca0860
7101ca0760  mov x8,#0x6e6d
7101ca0764  movk x8,#0x5f75, LSL #16
7101ca0768  movk x8,#0x6e61, LSL #32
7101ca076c  movk x8,#0x6f79, LSL #48
7101ca0770  stur x8,[x29, #-0xb0]
7101ca0774  mov x8,#0x656e
7101ca0778  movk x8,#0x725f, LSL #16
7101ca077c  movk x8,#0x6c75, LSL #32
7101ca0780  movk x8,#0x5f65, LSL #48
7101ca0784  stur x8,[x29, #-0xa8]
7101ca0788  mov w8,#0x6465
7101ca078c  mov x9,#0x7469
7101ca0790  movk x9,#0x625f, LSL #16
7101ca0794  sturh w8,[x29, #-0xa0]
7101ca0798  sub x8,x29,#0xb8
7101ca079c  movk x9,#0x7461, LSL #32
7101ca07a0  movk x9,#0x6c74, LSL #48
7101ca07a4  stur x9,[x8, #0x1a]
7101ca07a8  mov w9,#0x6665
7101ca07ac  movk w9,#0x6569, LSL #16
7101ca07b0  stur w9,[x8, #0x22]
7101ca07b4  mov w8,#0x646c
7101ca07b8  sturh w8,[x29, #-0x92]
7101ca07bc  mov x9,x24
7101ca07c0  mov w10,#0x6d
7101ca07c4  sturb wzr,[x29, #-0x90]
7101ca07c8  mov w8,w26
7101ca07cc  mov w11,#0x20
7101ca07d0  stur w11,[x29, #-0xb4]
7101ca07d4  mul w8,w8,w27
7101ca07d8  and w10,w10,#0xff
7101ca07dc  eor w8,w8,w10
7101ca07e0  ldrb w10,[x9], #0x1
7101ca07e4  cbnz w10,0x7101ca07d4
7101ca07e8  b 0x7101ca0860
7101ca07ec  mov x8,#0x6e6d
7101ca07f0  movk x8,#0x5f75, LSL #16
7101ca07f4  movk x8,#0x6e61, LSL #32
7101ca07f8  movk x8,#0x6f79, LSL #48
7101ca07fc  stur x8,[x29, #-0xb0]
7101ca0800  mov x8,#0x656e
7101ca0804  movk x8,#0x725f, LSL #16
7101ca0808  movk x8,#0x6c75, LSL #32
7101ca080c  movk x8,#0x5f65, LSL #48
7101ca0810  stur x8,[x29, #-0xa8]
7101ca0814  mov w8,#0x6465
7101ca0818  sturh w8,[x29, #-0xa0]
7101ca081c  sub x8,x29,#0xb8
7101ca0820  mov w9,#0x7469
7101ca0824  movk w9,#0x655f, LSL #16
7101ca0828  stur w9,[x8, #0x1a]
7101ca082c  mov w8,#0x646e
7101ca0830  sturh w8,[x29, #-0x9a]
7101ca0834  mov x9,x24
7101ca0838  mov w10,#0x6d
7101ca083c  mov w8,w26
7101ca0840  orr w11,wzr,#0x18
7101ca0844  sturb wzr,[x29, #-0x98]
7101ca0848  stur w11,[x29, #-0xb4]
7101ca084c  mul w8,w8,w27
7101ca0850  and w10,w10,#0xff
7101ca0854  eor w8,w8,w10
7101ca0858  ldrb w10,[x9], #0x1
7101ca085c  cbnz w10,0x7101ca084c
7101ca0860  mov x9,xzr
7101ca0864  mov w10,#0x6d
7101ca0868  stur w8,[x29, #-0xb8]
7101ca086c  stur wzr,[x29, #-0x100]
7101ca0870  add w8,w9,#0x1
7101ca0874  add x11,x21,x9
7101ca0878  cmp w8,#0x3e
7101ca087c  strb w10,[x11, #0x8]
7101ca0880  b.hi 0x7101ca0898
7101ca0884  ldrb w10,[x24, x9, LSL ]
7101ca0888  add x8,x9,#0x1
7101ca088c  mov x9,x8
7101ca0890  cbnz w10,0x7101ca0870
7101ca0894  b 0x7101ca089c
7101ca0898  add w8,w9,#0x1
7101ca089c  add x9,x21,#0x8
7101ca08a0  strb wzr,[x9, w8, UXTW ]
7101ca08a4  stur w8,[x29, #-0xfc]
7101ca08a8  ldurb w8,[x29, #-0xf8]
7101ca08ac  mov w9,w26
7101ca08b0  cbz w8,0x7101ca08d0
7101ca08b4  ldur x10,[x29, #-0x58]
7101ca08b8  mov w9,w26
7101ca08bc  mul w9,w9,w27
7101ca08c0  and w8,w8,#0xff
7101ca08c4  eor w9,w9,w8
7101ca08c8  ldrb w8,[x10], #0x1
7101ca08cc  cbnz w8,0x7101ca08bc
7101ca08d0  add x0,sp,#0x58
7101ca08d4  sub x1,x29,#0x100
7101ca08d8  stur w9,[x29, #-0x100]
7101ca08dc  bl 0x7101ca0f60
7101ca08e0  ldr x25,[sp, #0x60]
7101ca08e4  adrp x8,0x710523d000
7101ca08e8  add x8,x8,#0x988
7101ca08ec  stp x8,xzr,[sp, #0x58]
7101ca08f0  cbz x25,0x7101ca0914
7101ca08f4  ldr x0,[x25, #0x18]
7101ca08f8  adrp x8,0x710523d000
7101ca08fc  add x8,x8,#0x9a8
7101ca0900  stp x8,xzr,[x25, #0x10]
7101ca0904  cbz x0,0x7101ca090c
7101ca0908  bl 0x710392eb40
7101ca090c  mov x0,x25
7101ca0910  bl 0x710392eb40
7101ca0914  add x22,x22,#0x1
7101ca0918  cmp x22,x28
7101ca091c  b.lt 0x7101ca0518
7101ca0920  b 0x7101ca0c58
7101ca0924  ldr x8,[x20, #0x230]
7101ca0928  ldr x9,[x20, #0x228]
7101ca092c  cmp x8,x9
7101ca0930  b.eq 0x7101ca0c58
7101ca0934  fmov s8,0x3f800000
7101ca0938  mov x21,xzr
7101ca093c  adrp x22,0x710436c000
7101ca0940  add x22,x22,#0x494
7101ca0944  adrp x28,0x710523d000
7101ca0948  add x28,x28,#0x9c8
7101ca094c  adrp x23,0x71043cf000
7101ca0950  add x23,x23,#0x53b
7101ca0954  adrp x24,0x710523d000
7101ca0958  add x24,x24,#0x988
7101ca095c  add x8,x20,#0x228
7101ca0960  stur x8,[x29, #-0x58]
7101ca0964  adrp x27,0x710523d000
7101ca0968  add x27,x27,#0x9a8
7101ca096c  adrp x25,0x710434a000
7101ca0970  add x25,x25,#0x469
7101ca0974  mov x0,x19
7101ca0978  mov w1,w21
7101ca097c  mov x2,x22
7101ca0980  mov w3,w21
7101ca0984  bl 0x71037717d0
7101ca0988  ldr x1,[x19]
7101ca098c  sub x0,x29,#0x100
7101ca0990  mov w2,w21
7101ca0994  bl 0x7103771d60
7101ca0998  ldur x26,[x29, #-0xf8]
7101ca099c  ldr x8,[x26]
7101ca09a0  cbz x8,0x7101ca09ac
7101ca09a4  ldr x1,[x8, #0x88]
7101ca09a8  b 0x7101ca09b4
7101ca09ac  adrp x1,0x7104867000
7101ca09b0  add x1,x1,#0xc2e
7101ca09b4  sub x8,x29,#0xb8
7101ca09b8  add x0,sp,#0x140
7101ca09bc  bl 0x7103776640
7101ca09c0  stp x28,xzr,[x29, #-0x100]
7101ca09c4  cbz x26,0x7101ca09d0
7101ca09c8  mov x0,x26
7101ca09cc  bl 0x710392eb40
7101ca09d0  ldr x9,[x20, #0x230]
7101ca09d4  ldr x8,[x20, #0x228]
7101ca09d8  sub x9,x9,x8
7101ca09dc  asr x9,x9,#0x2
7101ca09e0  cmp x9,x21
7101ca09e4  b.ls 0x7101ca0db4
7101ca09e8  ldr w8,[x8, x21, LSL #0x2]
7101ca09ec  ldur x26,[x29, #-0xb0]
7101ca09f0  mov x0,x26
7101ca09f4  cmp w8,#0x21e
7101ca09f8  b.ne 0x7101ca0a04
7101ca09fc  mov x1,x23
7101ca0a00  b 0x7101ca0a08
7101ca0a04  mov x1,x25
7101ca0a08  mov v0.16B,v8.16B
7101ca0a0c  bl 0x7103778300
7101ca0a10  stp x24,xzr,[x29, #-0xb8]
7101ca0a14  cbz x26,0x7101ca0a30
7101ca0a18  ldr x0,[x26, #0x18]
7101ca0a1c  stp x27,xzr,[x26, #0x10]
7101ca0a20  cbz x0,0x7101ca0a28
7101ca0a24  bl 0x710392eb40
7101ca0a28  mov x0,x26
7101ca0a2c  bl 0x710392eb40
7101ca0a30  ldr x8,[x20, #0x230]
7101ca0a34  ldr x9,[x20, #0x228]
7101ca0a38  sub x8,x8,x9
7101ca0a3c  add x21,x21,#0x1
7101ca0a40  asr x8,x8,#0x2
7101ca0a44  cmp x8,x21
7101ca0a48  b.hi 0x7101ca0974
7101ca0a4c  b 0x7101ca0c58
7101ca0a50  adrp x1,0x7104867000
7101ca0a54  add x1,x1,#0xc2e
7101ca0a58  sub x8,x29,#0x100
7101ca0a5c  add x0,sp,#0x140
7101ca0a60  bl 0x7103776640
7101ca0a64  adrp x22,0x710523d000
7101ca0a68  add x22,x22,#0x9c8
7101ca0a6c  stp x22,xzr,[sp, #0x68]
7101ca0a70  cbz x21,0x7101ca0a7c
7101ca0a74  mov x0,x21
7101ca0a78  bl 0x710392eb40
7101ca0a7c  mov x8,xzr
7101ca0a80  add x9,sp,#0x10
7101ca0a84  adrp x10,0x710435b000
7101ca0a88  add x10,x10,#0x8cd
7101ca0a8c  str xzr,[sp, #0x10]
7101ca0a90  b 0x7101ca0a9c
7101ca0a94  add x8,x8,#0x2
7101ca0a98  strb w12,[x11, #0x9]
7101ca0a9c  add x12,x10,x8
7101ca0aa0  ldrb w13,[x12]
7101ca0aa4  cbz w13,0x7101ca0abc
7101ca0aa8  ldrb w12,[x12, #0x1]
7101ca0aac  add x11,x9,x8
7101ca0ab0  strb w13,[x11, #0x8]
7101ca0ab4  cbnz w12,0x7101ca0a94
7101ca0ab8  add x8,x8,#0x1
7101ca0abc  add x9,sp,#0x10
7101ca0ac0  add x10,x9,#0x8
7101ca0ac4  strb wzr,[x10, w8, UXTW ]
7101ca0ac8  str w8,[sp, #0x14]
7101ca0acc  ldrb w8,[sp, #0x18]
7101ca0ad0  mov w10,w26
7101ca0ad4  cbz w8,0x7101ca0af8
7101ca0ad8  add x9,x9,#0x9
7101ca0adc  mov w11,#0x89
7101ca0ae0  mov w10,w26
7101ca0ae4  mul w10,w10,w11
7101ca0ae8  and w8,w8,#0xff
7101ca0aec  eor w10,w10,w8
7101ca0af0  ldrb w8,[x9], #0x1
7101ca0af4  cbnz w8,0x7101ca0ae4
7101ca0af8  sub x0,x29,#0x100
7101ca0afc  add x1,sp,#0x10
7101ca0b00  str w10,[sp, #0x10]
7101ca0b04  bl 0x7101ca0f60
7101ca0b08  ldur x21,[x29, #-0xf8]
7101ca0b0c  adrp x23,0x710523d000
7101ca0b10  add x23,x23,#0x988
7101ca0b14  stp x23,xzr,[x29, #-0x100]
7101ca0b18  cbz x21,0x7101ca0b3c
7101ca0b1c  ldr x0,[x21, #0x18]
7101ca0b20  adrp x8,0x710523d000
7101ca0b24  add x8,x8,#0x9a8
7101ca0b28  stp x8,xzr,[x21, #0x10]
7101ca0b2c  cbz x0,0x7101ca0b34
7101ca0b30  bl 0x710392eb40
7101ca0b34  mov x0,x21
7101ca0b38  bl 0x710392eb40
7101ca0b3c  adrp x1,0x7104308000
7101ca0b40  add x1,x1,#0x779
7101ca0b44  add x0,sp,#0xb0
7101ca0b48  mov w2,#0x1
7101ca0b4c  bl 0x710062dc20
7101ca0b50  mov w1,#0x1
7101ca0b54  mov x0,x19
7101ca0b58  mov x2,x20
7101ca0b5c  bl 0x71037717d0
7101ca0b60  ldr x1,[x19]
7101ca0b64  add x0,sp,#0x68
7101ca0b68  mov w2,#0x1
7101ca0b6c  bl 0x7103771d60
7101ca0b70  ldr x20,[sp, #0x70]
7101ca0b74  ldr x8,[x20]
7101ca0b78  cbz x8,0x7101ca0b84
7101ca0b7c  ldr x1,[x8, #0x88]
7101ca0b80  b 0x7101ca0b8c
7101ca0b84  adrp x1,0x7104867000
7101ca0b88  add x1,x1,#0xc2e
7101ca0b8c  sub x8,x29,#0x100
7101ca0b90  add x0,sp,#0x140
7101ca0b94  bl 0x7103776640
7101ca0b98  stp x22,xzr,[sp, #0x68]
7101ca0b9c  cbz x20,0x7101ca0ba8
7101ca0ba0  mov x0,x20
7101ca0ba4  bl 0x710392eb40
7101ca0ba8  mov x8,xzr
7101ca0bac  add x9,sp,#0x10
7101ca0bb0  adrp x10,0x71042d6000
7101ca0bb4  add x10,x10,#0x350
7101ca0bb8  str xzr,[sp, #0x10]
7101ca0bbc  b 0x7101ca0bc8
7101ca0bc0  add x8,x8,#0x2
7101ca0bc4  strb w12,[x11, #0x9]
7101ca0bc8  add x12,x10,x8
7101ca0bcc  ldrb w13,[x12]
7101ca0bd0  cbz w13,0x7101ca0be8
7101ca0bd4  ldrb w12,[x12, #0x1]
7101ca0bd8  add x11,x9,x8
7101ca0bdc  strb w13,[x11, #0x8]
7101ca0be0  cbnz w12,0x7101ca0bc0
7101ca0be4  add x8,x8,#0x1
7101ca0be8  add x10,sp,#0x10
7101ca0bec  add x9,x10,#0x8
7101ca0bf0  strb wzr,[x9, w8, UXTW ]
7101ca0bf4  ldrb w9,[sp, #0x18]
7101ca0bf8  str w8,[sp, #0x14]
7101ca0bfc  cbz w9,0x7101ca0c1c
7101ca0c00  add x8,x10,#0x9
7101ca0c04  mov w10,#0x89
7101ca0c08  mul w11,w26,w10
7101ca0c0c  and w9,w9,#0xff
7101ca0c10  eor w26,w11,w9
7101ca0c14  ldrb w9,[x8], #0x1
7101ca0c18  cbnz w9,0x7101ca0c08
7101ca0c1c  sub x0,x29,#0x100
7101ca0c20  add x1,sp,#0x10
7101ca0c24  str w26,[sp, #0x10]
7101ca0c28  bl 0x7101ca0f60
7101ca0c2c  ldur x20,[x29, #-0xf8]
7101ca0c30  stp x23,xzr,[x29, #-0x100]
7101ca0c34  cbz x20,0x7101ca0c58
7101ca0c38  ldr x0,[x20, #0x18]
7101ca0c3c  adrp x8,0x710523d000
7101ca0c40  add x8,x8,#0x9a8
7101ca0c44  stp x8,xzr,[x20, #0x10]
7101ca0c48  cbz x0,0x7101ca0c50
7101ca0c4c  bl 0x710392eb40
7101ca0c50  mov x0,x20
7101ca0c54  bl 0x710392eb40
7101ca0c58  ldr x0,[x19]
7101ca0c5c  ldr x8,[x0]
7101ca0c60  ldr x8,[x8, #0x70]
7101ca0c64  mov w1,#0x1
7101ca0c68  blr x8
7101ca0c6c  ldr x19,[sp, #0x148]
7101ca0c70  adrp x8,0x710523d000
7101ca0c74  add x8,x8,#0x988
7101ca0c78  stp x8,xzr,[sp, #0x140]
7101ca0c7c  cbz x19,0x7101ca0ca0
7101ca0c80  ldr x0,[x19, #0x18]
7101ca0c84  adrp x8,0x710523d000
7101ca0c88  add x8,x8,#0x9a8
7101ca0c8c  stp x8,xzr,[x19, #0x10]
7101ca0c90  cbz x0,0x7101ca0c98
7101ca0c94  bl 0x710392eb40
7101ca0c98  mov x0,x19
7101ca0c9c  bl 0x710392eb40
7101ca0ca0  ldr x0,[sp, #0x260]
7101ca0ca4  add x8,sp,#0x150
7101ca0ca8  add x8,x8,#0xf0
7101ca0cac  cmp x8,x0
7101ca0cb0  b.eq 0x7101ca0cc4
7101ca0cb4  cbz x0,0x7101ca0cd0
7101ca0cb8  ldr x8,[x0]
7101ca0cbc  ldr x8,[x8, #0x28]
7101ca0cc0  b 0x7101ca0ccc
7101ca0cc4  ldr x8,[x0]
7101ca0cc8  ldr x8,[x8, #0x20]
7101ca0ccc  blr x8
7101ca0cd0  ldr x0,[sp, #0x230]
7101ca0cd4  add x8,sp,#0x150
7101ca0cd8  add x8,x8,#0xc0
7101ca0cdc  cmp x8,x0
7101ca0ce0  b.eq 0x7101ca0cf4
7101ca0ce4  cbz x0,0x7101ca0d00
7101ca0ce8  ldr x8,[x0]
7101ca0cec  ldr x8,[x8, #0x28]
7101ca0cf0  b 0x7101ca0cfc
7101ca0cf4  ldr x8,[x0]
7101ca0cf8  ldr x8,[x8, #0x20]
7101ca0cfc  blr x8
7101ca0d00  ldr x0,[sp, #0x200]
7101ca0d04  add x8,sp,#0x150
7101ca0d08  add x8,x8,#0x90
7101ca0d0c  cmp x8,x0
7101ca0d10  b.eq 0x7101ca0d24
7101ca0d14  cbz x0,0x7101ca0d30
7101ca0d18  ldr x8,[x0]
7101ca0d1c  ldr x8,[x8, #0x28]
7101ca0d20  b 0x7101ca0d2c
7101ca0d24  ldr x8,[x0]
7101ca0d28  ldr x8,[x8, #0x20]
7101ca0d2c  blr x8
7101ca0d30  ldr x0,[sp, #0x1d0]
7101ca0d34  add x8,sp,#0x150
7101ca0d38  add x8,x8,#0x60
7101ca0d3c  cmp x8,x0
7101ca0d40  b.eq 0x7101ca0d54
7101ca0d44  cbz x0,0x7101ca0d60
7101ca0d48  ldr x8,[x0]
7101ca0d4c  ldr x8,[x8, #0x28]
7101ca0d50  b 0x7101ca0d5c
7101ca0d54  ldr x8,[x0]
7101ca0d58  ldr x8,[x8, #0x20]
7101ca0d5c  blr x8
7101ca0d60  ldr x0,[sp, #0x1a0]
7101ca0d64  add x8,sp,#0x150
7101ca0d68  add x8,x8,#0x30
7101ca0d6c  cmp x8,x0
7101ca0d70  b.eq 0x7101ca0d84
7101ca0d74  cbz x0,0x7101ca0d90
7101ca0d78  ldr x8,[x0]
7101ca0d7c  ldr x8,[x8, #0x28]
7101ca0d80  b 0x7101ca0d8c
7101ca0d84  ldr x8,[x0]
7101ca0d88  ldr x8,[x8, #0x20]
7101ca0d8c  blr x8
7101ca0d90  add sp,sp,#0x320
7101ca0d94  ldp x29,x30,[sp, #0x60]
7101ca0d98  ldp x20,x19,[sp, #0x50]
7101ca0d9c  ldp x22,x21,[sp, #0x40]
7101ca0da0  ldp x24,x23,[sp, #0x30]
7101ca0da4  ldp x26,x25,[sp, #0x20]
7101ca0da8  ldp x28,x27,[sp, #0x10]
7101ca0dac  ldr d8,[sp], #0x70
7101ca0db0  ret
7101ca0db4  ldur x0,[x29, #-0x58]
7101ca0db8  bl 0x71039c1330
7101ca0dbc  ldr x0,[sp, #0x8]
7101ca0dc0  bl 0x71039c1330
