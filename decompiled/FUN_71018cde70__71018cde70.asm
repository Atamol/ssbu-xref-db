// addr:      71018cde70
// offset:    0x18cde70
// name:      FUN_71018cde70
// mangled:   
// size:      3424

71018cde70  sub sp,sp,#0x90
71018cde74  stp x28,x27,[sp, #0x30]
71018cde78  stp x26,x25,[sp, #0x40]
71018cde7c  stp x24,x23,[sp, #0x50]
71018cde80  stp x22,x21,[sp, #0x60]
71018cde84  stp x20,x19,[sp, #0x70]
71018cde88  stp x29,x30,[sp, #0x80]
71018cde8c  add x29,sp,#0x80
71018cde90  mov x21,x1
71018cde94  mov x20,x0
71018cde98  mov w1,#0x120
71018cde9c  mov w0,#0x10
71018cdea0  bl 0x710392e290
71018cdea4  mov x19,x0
71018cdea8  cbnz x0,0x71018cdef4
71018cdeac  adrp x8,0x7105332000
71018cdeb0  ldr x0,[x8, #0xf00]
71018cdeb4  cbz x0,0x71018cdef0
71018cdeb8  mov w8,#0x120
71018cdebc  str wzr,[sp, #0x20]
71018cdec0  add x1,sp,#0x20
71018cdec4  str x8,[sp, #0x8]
71018cdec8  ldr x8,[x0]
71018cdecc  ldr x8,[x8, #0x30]
71018cded0  add x2,sp,#0x8
71018cded4  blr x8
71018cded8  tbz w0,#0x0,0x71018cdef0
71018cdedc  mov w1,#0x120
71018cdee0  mov w0,#0x10
71018cdee4  bl 0x710392e290
71018cdee8  mov x19,x0
71018cdeec  cbnz x0,0x71018cdef4
71018cdef0  mov x19,xzr
71018cdef4  mov w8,#0xffffffff
71018cdef8  mov w0,#0x10
71018cdefc  mov w1,#0x80
71018cdf00  stp xzr,xzr,[x19, #0x10]
71018cdf04  str w8,[x19, #0xe0]
71018cdf08  stp x19,xzr,[x19]
71018cdf0c  strb wzr,[x19, #0xe4]
71018cdf10  stp xzr,x8,[x19, #0xd0]
71018cdf14  stp xzr,xzr,[x19, #0xc0]
71018cdf18  stp xzr,xzr,[x19, #0xb0]
71018cdf1c  stp xzr,xzr,[x19, #0xa0]
71018cdf20  stp xzr,xzr,[x19, #0x90]
71018cdf24  stp xzr,xzr,[x19, #0x80]
71018cdf28  stp xzr,xzr,[x19, #0x70]
71018cdf2c  stp xzr,xzr,[x19, #0x60]
71018cdf30  stp xzr,xzr,[x19, #0x50]
71018cdf34  stp xzr,xzr,[x19, #0x40]
71018cdf38  stp xzr,xzr,[x19, #0x30]
71018cdf3c  stp xzr,xzr,[x19, #0x20]
71018cdf40  bl 0x710392e290
71018cdf44  cbnz x0,0x71018cdf8c
71018cdf48  adrp x8,0x7105332000
71018cdf4c  ldr x0,[x8, #0xf00]
71018cdf50  cbz x0,0x71018cdf88
71018cdf54  mov w8,#0x80
71018cdf58  str wzr,[sp, #0x20]
71018cdf5c  add x1,sp,#0x20
71018cdf60  str x8,[sp, #0x8]
71018cdf64  ldr x8,[x0]
71018cdf68  ldr x8,[x8, #0x30]
71018cdf6c  add x2,sp,#0x8
71018cdf70  blr x8
71018cdf74  tbz w0,#0x0,0x71018cdf88
71018cdf78  mov w0,#0x10
71018cdf7c  mov w1,#0x80
71018cdf80  bl 0x710392e290
71018cdf84  cbnz x0,0x71018cdf8c
71018cdf88  mov x0,xzr
71018cdf8c  adrp x8,0x7105181000
71018cdf90  add x8,x8,#0xb40
71018cdf94  str x8,[x0]
71018cdf98  mov x8,x0
71018cdf9c  str xzr,[x8, #0x10]!
71018cdfa0  str x8,[x0, #0x8]
71018cdfa4  mov x8,x0
71018cdfa8  str xzr,[x8, #0x28]!
71018cdfac  stp xzr,x8,[x0, #0x18]
71018cdfb0  mov x8,x0
71018cdfb4  str xzr,[x8, #0x40]!
71018cdfb8  stp xzr,x8,[x0, #0x30]
71018cdfbc  mov x8,x0
71018cdfc0  str xzr,[x8, #0x58]!
71018cdfc4  stp xzr,x8,[x0, #0x48]
71018cdfc8  mov w8,#0x2
71018cdfcc  str xzr,[x0, #0x60]
71018cdfd0  str w8,[x0, #0x68]
71018cdfd4  adrp x8,0x710532f000
71018cdfd8  str wzr,[x0, #0x78]
71018cdfdc  str xzr,[x0, #0x70]
71018cdfe0  str x0,[x19, #0xe8]
71018cdfe4  ldr x8,[x8, #0x840]
71018cdfe8  ldr x9,[x8, #0x8]
71018cdfec  ldr x9,[x9, #0xb8]
71018cdff0  str x9,[x19, #0xf0]
71018cdff4  ldr x8,[x8, #0x8]
71018cdff8  ldr x8,[x8, #0xc0]
71018cdffc  str wzr,[x19, #0x110]
71018ce000  stp xzr,xzr,[x19, #0x100]
71018ce004  str x8,[x19, #0xf8]
71018ce008  ldr w8,[x21, #0x10]
71018ce00c  str w8,[x19, #0x114]
71018ce010  str wzr,[x19, #0x118]
71018ce014  ldr x21,[x21, #0xa8]
71018ce018  cbz x21,0x71018ce078
71018ce01c  adrp x8,0x7105324000
71018ce020  add x8,x8,#0x9b8
71018ce024  ldarb w8,[x8]
71018ce028  tbz w8,#0x0,0x71018ceb1c
71018ce02c  ldr x8,[x21]
71018ce030  ldr x8,[x8]
71018ce034  mov x0,x21
71018ce038  blr x8
71018ce03c  cbz x0,0x71018ce078
71018ce040  adrp x8,0x7105324000
71018ce044  add x8,x8,#0x9c0
71018ce048  cmp x0,x8
71018ce04c  b.eq 0x71018ce05c
71018ce050  ldr x0,[x0]
71018ce054  cbnz x0,0x71018ce048
71018ce058  b 0x71018ce078
71018ce05c  ldr w8,[x21, #0x8]
71018ce060  cmp w8,#0x4
71018ce064  b.eq 0x71018ce070
71018ce068  cmp w8,#0x3
71018ce06c  b.ne 0x71018ce078
71018ce070  str w8,[x19, #0x118]
71018ce074  b 0x71018ce204
71018ce078  str wzr,[x19, #0x118]
71018ce07c  adrp x8,0x7105314000
71018ce080  ldr x8,[x8, #0x510]
71018ce084  ldr x8,[x8]
71018ce088  str x20,[sp]
71018ce08c  ldr x23,[x8, #0x78]
71018ce090  adrp x8,0x7105314000
71018ce094  add x8,x8,#0x4d8
71018ce098  ldarb w8,[x8]
71018ce09c  tbz w8,#0x0,0x71018ceadc
71018ce0a0  adrp x24,0x710532f000
71018ce0a4  ldr x8,[x24, #0x730]
71018ce0a8  ldr x25,[x8, #0x8]
71018ce0ac  add x0,sp,#0x8
71018ce0b0  mov w5,#0x1
71018ce0b4  mov w6,#0x1
71018ce0b8  mov w1,wzr
71018ce0bc  mov w2,wzr
71018ce0c0  mov w3,wzr
71018ce0c4  mov w4,wzr
71018ce0c8  bl 0x710326f6a0
71018ce0cc  ldp x21,x26,[sp, #0x8]
71018ce0d0  cmp x21,x26
71018ce0d4  b.eq 0x71018ce184
71018ce0d8  mov x28,x21
71018ce0dc  adrp x20,0x71052c5000
71018ce0e0  add x20,x20,#0x180
71018ce0e4  ldr x22,[x28]
71018ce0e8  ldr x0,[x25, #0x168]
71018ce0ec  mov x1,x22
71018ce0f0  bl 0x7103264270
71018ce0f4  cmn w0,#0x1
71018ce0f8  b.eq 0x71018ce178
71018ce0fc  cmp w0,#0x62
71018ce100  b.hi 0x71018ce11c
71018ce104  ldr x8,[x23]
71018ce108  ldr x8,[x8]
71018ce10c  add x8,x8,w0, SXTW 
71018ce110  ldrb w8,[x8, #0x4]
71018ce114  cmp w8,#0x6
71018ce118  b.ls 0x71018ce120
71018ce11c  mov w8,wzr
71018ce120  sub w8,w8,#0x1
71018ce124  and w9,w8,#0xff
71018ce128  cmp w8,#0x6
71018ce12c  lsr x8,x22,#0x38
71018ce130  csinc w27,wzr,w9,cs
71018ce134  cmp x8,#0xc1
71018ce138  b.ne 0x71018ce178
71018ce13c  and x8,x22,#0xffffffffff
71018ce140  cbz x8,0x71018ce178
71018ce144  ldr x8,[x24, #0x730]
71018ce148  ldr x8,[x8, #0x8]
71018ce14c  ldr x0,[x8, #0x168]
71018ce150  mov x1,x22
71018ce154  bl 0x7103264270
71018ce158  cmn w0,#0x1
71018ce15c  b.eq 0x71018ce178
71018ce160  cmp w0,#0x63
71018ce164  b.cs 0x71018ceb5c
71018ce168  add x8,x20,w0, SXTW  #0x2
71018ce16c  mov w9,#0x2fb8
71018ce170  movk w9,#0x4, LSL #16
71018ce174  str w27,[x8, x9, LSL #0x0]
71018ce178  add x28,x28,#0x8
71018ce17c  cmp x26,x28
71018ce180  b.ne 0x71018ce0e4
71018ce184  ldr x8,[x23]
71018ce188  ldr x8,[x8]
71018ce18c  ldrb w8,[x8, #0x3]
71018ce190  cmp w8,#0x0
71018ce194  adrp x8,0x7105308000
71018ce198  add x8,x8,#0x134
71018ce19c  cset w9,ne
71018ce1a0  strb w9,[x8]
71018ce1a4  ldr x9,[x23]
71018ce1a8  ldr x9,[x9]
71018ce1ac  ldrb w9,[x9]
71018ce1b0  cmp w9,#0x2
71018ce1b4  mov w10,#0x2
71018ce1b8  csel w9,w9,w10,cc
71018ce1bc  strb w9,[x8, #0x191]
71018ce1c0  ldr x9,[x23]
71018ce1c4  ldr x9,[x9]
71018ce1c8  ldrb w9,[x9, #0x1]
71018ce1cc  cmp w9,#0x0
71018ce1d0  cset w9,ne
71018ce1d4  strb w9,[x8, #0x190]
71018ce1d8  ldr x9,[x23]
71018ce1dc  ldr x9,[x9]
71018ce1e0  ldrb w9,[x9, #0x2]
71018ce1e4  cmp w9,#0x2
71018ce1e8  csel w9,w9,wzr,cc
71018ce1ec  strb w9,[x8, #0x192]
71018ce1f0  cbz x21,0x71018ce200
71018ce1f4  mov x0,x21
71018ce1f8  str x21,[sp, #0x10]
71018ce1fc  bl 0x710392eb40
71018ce200  ldr x20,[sp]
71018ce204  adrp x8,0x71018cc000
71018ce208  add x8,x8,#0xd60
71018ce20c  adrp x9,0x71018cc000
71018ce210  add x9,x9,#0xec0
71018ce214  stp x8,xzr,[x19, #0x28]
71018ce218  adrp x8,0x71018cd000
71018ce21c  add x8,x8,#0x210
71018ce220  stp x8,xzr,[x19, #0x48]
71018ce224  adrp x8,0x71018cd000
71018ce228  add x8,x8,#0x9a0
71018ce22c  stp x8,xzr,[x19, #0x58]
71018ce230  ldrsw x8,[x19, #0xd4]
71018ce234  stp x9,xzr,[x19, #0x38]
71018ce238  adrp x9,0x71018cd000
71018ce23c  add x9,x9,#0xae0
71018ce240  cmp w8,#0x13
71018ce244  stp x9,xzr,[x19, #0x68]
71018ce248  adrp x9,0x71018cd000
71018ce24c  add x9,x9,#0xb30
71018ce250  stp x9,xzr,[x19, #0x78]
71018ce254  b.cs 0x71018ceb5c
71018ce258  add x8,x19,x8, LSL #0x2
71018ce25c  str wzr,[x8, #0x88]
71018ce260  ldr x21,[x20, #0x58]
71018ce264  str x19,[x20, #0x58]
71018ce268  cbz x21,0x71018ce2a8
71018ce26c  ldr x0,[x21, #0x100]
71018ce270  str xzr,[x21, #0x100]
71018ce274  cbz x0,0x71018ce27c
71018ce278  bl 0x71032cad20
71018ce27c  ldr x0,[x21, #0xe8]
71018ce280  bl 0x710323b9e0
71018ce284  ldr x0,[x21, #0xe8]
71018ce288  str xzr,[x21, #0xe8]
71018ce28c  cbz x0,0x71018ce29c
71018ce290  ldr x8,[x0]
71018ce294  ldr x8,[x8, #0x8]
71018ce298  blr x8
71018ce29c  mov x0,x21
71018ce2a0  bl 0x710392eb40
71018ce2a4  ldr x19,[x20, #0x58]
71018ce2a8  mov x21,x19
71018ce2ac  ldr x8,[x21, #0xe8]!
71018ce2b0  mov w9,#0x1
71018ce2b4  str x9,[x8, #0x70]
71018ce2b8  ldr x0,[x21]
71018ce2bc  ldrsw x2,[x0, #0x70]
71018ce2c0  ldr w3,[x0, #0x68]
71018ce2c4  mov x22,#0x6c07
71018ce2c8  movk x22,#0xb70a, LSL #16
71018ce2cc  adrp x1,0x7104545000
71018ce2d0  add x1,x1,#0x628
71018ce2d4  mov w4,wzr
71018ce2d8  movk x22,#0xff0e, LSL #32
71018ce2dc  movk x22,#0xc1ff, LSL #48
71018ce2e0  bl 0x710323beb0
71018ce2e4  ldr x0,[x21]
71018ce2e8  mov x23,#0x6117
71018ce2ec  movk x23,#0xd5d0, LSL #16
71018ce2f0  movk x23,#0x1d, LSL #32
71018ce2f4  str x23,[sp, #0x8]
71018ce2f8  ldrsw x2,[x0, #0x70]
71018ce2fc  ldr w3,[x0, #0x68]
71018ce300  add x1,sp,#0x8
71018ce304  mov w4,#0x1
71018ce308  bl 0x710323beb0
71018ce30c  ldr x0,[x21]
71018ce310  mov x24,#0xad60
71018ce314  movk x24,#0xf525, LSL #16
71018ce318  movk x24,#0x22, LSL #32
71018ce31c  str x24,[sp, #0x8]
71018ce320  ldrsw x2,[x0, #0x70]
71018ce324  ldr w3,[x0, #0x68]
71018ce328  add x1,sp,#0x8
71018ce32c  mov w4,#0x1
71018ce330  bl 0x710323beb0
71018ce334  ldr x0,[x21]
71018ce338  ldrsw x2,[x0, #0x70]
71018ce33c  ldr w3,[x0, #0x68]
71018ce340  adrp x20,0x7104545000
71018ce344  add x20,x20,#0x630
71018ce348  mov w4,#0x1
71018ce34c  mov x1,x20
71018ce350  bl 0x710323beb0
71018ce354  ldr x0,[x21]
71018ce358  str x23,[sp, #0x8]
71018ce35c  ldrsw x2,[x0, #0x70]
71018ce360  ldr w3,[x0, #0x68]
71018ce364  add x1,sp,#0x8
71018ce368  mov w4,#0x1
71018ce36c  bl 0x710323beb0
71018ce370  ldr x0,[x21]
71018ce374  str x24,[sp, #0x8]
71018ce378  ldrsw x2,[x0, #0x70]
71018ce37c  ldr w3,[x0, #0x68]
71018ce380  add x1,sp,#0x8
71018ce384  mov w4,#0x1
71018ce388  bl 0x710323beb0
71018ce38c  ldr x0,[x21]
71018ce390  ldrsw x2,[x0, #0x70]
71018ce394  ldr w3,[x0, #0x68]
71018ce398  add x1,x20,#0x8
71018ce39c  mov w4,#0x1
71018ce3a0  bl 0x710323beb0
71018ce3a4  mov w2,#0x1
71018ce3a8  mov x0,x22
71018ce3ac  mov w1,wzr
71018ce3b0  bl 0x7103238a70
71018ce3b4  tst x0,#0xffffffffff
71018ce3b8  str x0,[sp, #0x8]
71018ce3bc  b.eq 0x71018ce3d4
71018ce3c0  ldr x0,[x21]
71018ce3c4  ldrsw x2,[x0, #0x70]
71018ce3c8  ldr w3,[x0, #0x68]
71018ce3cc  add x1,sp,#0x8
71018ce3d0  bl 0x710323c4e0
71018ce3d4  mov x23,#0xa909
71018ce3d8  movk x23,#0x8369, LSL #16
71018ce3dc  movk x23,#0xff0e, LSL #32
71018ce3e0  movk x23,#0xc1ff, LSL #48
71018ce3e4  mov w2,#0x1
71018ce3e8  mov x0,x23
71018ce3ec  mov w1,wzr
71018ce3f0  bl 0x7103238a70
71018ce3f4  tst x0,#0xffffffffff
71018ce3f8  str x0,[sp, #0x8]
71018ce3fc  b.eq 0x71018ce414
71018ce400  ldr x0,[x21]
71018ce404  ldrsw x2,[x0, #0x70]
71018ce408  ldr w3,[x0, #0x68]
71018ce40c  add x1,sp,#0x8
71018ce410  bl 0x710323c4e0
71018ce414  ldr x20,[x21]
71018ce418  mov x0,x20
71018ce41c  bl 0x710323cb80
71018ce420  tbnz w0,#0x0,0x71018ce440
71018ce424  mov w24,#0x4240
71018ce428  movk w24,#0xf, LSL #16
71018ce42c  mov x0,x24
71018ce430  bl 0x71039c0d80
71018ce434  mov x0,x20
71018ce438  bl 0x710323cb80
71018ce43c  tbz w0,#0x0,0x71018ce42c
71018ce440  mov w1,#0x88
71018ce444  mov w0,#0x10
71018ce448  bl 0x710392e290
71018ce44c  mov x20,x0
71018ce450  cbnz x0,0x71018ce49c
71018ce454  adrp x8,0x7105332000
71018ce458  ldr x0,[x8, #0xf00]
71018ce45c  cbz x0,0x71018ce498
71018ce460  mov w8,#0x88
71018ce464  str wzr,[sp, #0x20]
71018ce468  add x1,sp,#0x20
71018ce46c  str x8,[sp, #0x8]
71018ce470  ldr x8,[x0]
71018ce474  ldr x8,[x8, #0x30]
71018ce478  add x2,sp,#0x8
71018ce47c  blr x8
71018ce480  tbz w0,#0x0,0x71018ce498
71018ce484  mov w1,#0x88
71018ce488  mov w0,#0x10
71018ce48c  bl 0x710392e290
71018ce490  mov x20,x0
71018ce494  cbnz x0,0x71018ce49c
71018ce498  mov x20,xzr
71018ce49c  adrp x8,0x71050af000
71018ce4a0  add x8,x8,#0x1d0
71018ce4a4  mov w1,#0x58
71018ce4a8  stp x8,xzr,[x20]
71018ce4ac  orr x8,xzr,#0x1ffffffff
71018ce4b0  stp xzr,x8,[x20, #0x60]
71018ce4b4  mov w8,#0x1
71018ce4b8  mov w0,#0x10
71018ce4bc  stp xzr,xzr,[x20, #0x10]
71018ce4c0  strb wzr,[x20, #0x58]
71018ce4c4  str x21,[x20, #0x78]
71018ce4c8  strb w8,[x20, #0x70]
71018ce4cc  stp xzr,xzr,[x20, #0x48]
71018ce4d0  bl 0x710392e290
71018ce4d4  cbnz x0,0x71018ce51c
71018ce4d8  adrp x8,0x7105332000
71018ce4dc  ldr x0,[x8, #0xf00]
71018ce4e0  cbz x0,0x71018ce518
71018ce4e4  mov w8,#0x58
71018ce4e8  str wzr,[sp, #0x20]
71018ce4ec  add x1,sp,#0x20
71018ce4f0  str x8,[sp, #0x8]
71018ce4f4  ldr x8,[x0]
71018ce4f8  ldr x8,[x8, #0x30]
71018ce4fc  add x2,sp,#0x8
71018ce500  blr x8
71018ce504  tbz w0,#0x0,0x71018ce518
71018ce508  mov w1,#0x58
71018ce50c  mov w0,#0x10
71018ce510  bl 0x710392e290
71018ce514  cbnz x0,0x71018ce51c
71018ce518  mov x0,xzr
71018ce51c  mov w8,#0x1000
71018ce520  str w8,[x0, #0x8]
71018ce524  mov x8,x0
71018ce528  stp xzr,xzr,[x0, #0x18]
71018ce52c  mov x3,#0x139a
71018ce530  movk x3,#0x792f, LSL #16
71018ce534  str xzr,[x0, #0x10]
71018ce538  adrp x2,0x71050af000
71018ce53c  add x2,x2,#0x1b0
71018ce540  stp xzr,xzr,[x0, #0x38]
71018ce544  movk x3,#0x29, LSL #32
71018ce548  mov w4,#0x1
71018ce54c  mov x1,x21
71018ce550  str xzr,[x8, #0x30]!
71018ce554  str x8,[x0, #0x28]
71018ce558  adrp x8,0x71050af000
71018ce55c  add x8,x8,#0x208
71018ce560  str x8,[x0]
71018ce564  str wzr,[x0, #0x54]
71018ce568  strb wzr,[x0, #0x50]
71018ce56c  str xzr,[x0, #0x48]
71018ce570  str x0,[x20, #0x80]
71018ce574  bl 0x71032cb040
71018ce578  ldr x26,[x20, #0x80]
71018ce57c  mov x24,x26
71018ce580  ldr x8,[x24, #0x10]!
71018ce584  ldr x9,[x26, #0x18]
71018ce588  cmp x9,x8
71018ce58c  b.eq 0x71018ceb60
71018ce590  ldr x8,[x8]
71018ce594  ldr x8,[x8]
71018ce598  ldr x9,[x8]
71018ce59c  ldr x9,[x9]
71018ce5a0  ldr x9,[x9, #0x600]
71018ce5a4  mov w10,#0x8
71018ce5a8  movk w10,#0x80, LSL #16
71018ce5ac  str w10,[x9, #0x18]
71018ce5b0  ldr x8,[x8]
71018ce5b4  ldr x8,[x8]
71018ce5b8  ldr x8,[x8, #0x600]
71018ce5bc  mov w9,#0x22
71018ce5c0  movk w9,#0x20, LSL #16
71018ce5c4  str w9,[x8, #0x1c]
71018ce5c8  ldp x8,x9,[x26, #0x10]
71018ce5cc  cmp x9,x8
71018ce5d0  b.eq 0x71018ceb60
71018ce5d4  ldr x8,[x8]
71018ce5d8  ldr x8,[x8]
71018ce5dc  ldr x8,[x8]
71018ce5e0  ldr x0,[x8, #0x10]
71018ce5e4  fmov s0,wzr
71018ce5e8  adrp x1,0x7104421000
71018ce5ec  add x1,x1,#0x55
71018ce5f0  add x25,x8,#0x8
71018ce5f4  bl 0x7103778630
71018ce5f8  adrp x1,0x710424f000
71018ce5fc  add x1,x1,#0xd25
71018ce600  add x8,sp,#0x8
71018ce604  mov x0,x25
71018ce608  bl 0x7103776640
71018ce60c  adrp x1,0x71043ad000
71018ce610  add x1,x1,#0xa61
71018ce614  add x8,sp,#0x20
71018ce618  add x0,sp,#0x8
71018ce61c  bl 0x7103776910
71018ce620  mov w3,#0x1
71018ce624  mov x0,x21
71018ce628  mov x1,x22
71018ce62c  mov w2,wzr
71018ce630  bl 0x710323f330
71018ce634  ldr x22,[sp, #0x28]
71018ce638  mov x1,x0
71018ce63c  mov x0,x22
71018ce640  bl 0x7103778b80
71018ce644  adrp x25,0x710523d000
71018ce648  add x25,x25,#0x9a8
71018ce64c  stp x25,xzr,[sp, #0x20]
71018ce650  cbz x22,0x71018ce65c
71018ce654  mov x0,x22
71018ce658  bl 0x710392eb40
71018ce65c  adrp x1,0x71042c5000
71018ce660  add x1,x1,#0x8f
71018ce664  add x8,sp,#0x20
71018ce668  add x0,sp,#0x8
71018ce66c  bl 0x7103776910
71018ce670  mov w3,#0x1
71018ce674  mov x0,x21
71018ce678  mov x1,x23
71018ce67c  mov w2,wzr
71018ce680  bl 0x710323f330
71018ce684  ldr x21,[sp, #0x28]
71018ce688  mov x1,x0
71018ce68c  mov x0,x21
71018ce690  bl 0x7103778b80
71018ce694  stp x25,xzr,[sp, #0x20]
71018ce698  cbz x21,0x71018ce6a4
71018ce69c  mov x0,x21
71018ce6a0  bl 0x710392eb40
71018ce6a4  ldr x8,[x26, #0x40]
71018ce6a8  cbz x8,0x71018ce944
71018ce6ac  ldr x8,[x8]
71018ce6b0  cbz x8,0x71018ce6bc
71018ce6b4  ldr x0,[x8]
71018ce6b8  b 0x71018ce6c0
71018ce6bc  mov x0,xzr
71018ce6c0  ldp x8,x9,[x26, #0x10]
71018ce6c4  cmp x9,x8
71018ce6c8  b.eq 0x71018ceb60
71018ce6cc  ldr x8,[x8]
71018ce6d0  ldr x2,[x8]
71018ce6d4  adrp x1,0x7104270000
71018ce6d8  add x1,x1,#0x556
71018ce6dc  bl 0x71033743c0
71018ce6e0  ldr x8,[x26, #0x40]
71018ce6e4  ldr x0,[x8]
71018ce6e8  cbz x0,0x71018ce944
71018ce6ec  adrp x1,0x7104291000
71018ce6f0  add x1,x1,#0xeda
71018ce6f4  adrp x2,0x71042b2000
71018ce6f8  add x2,x2,#0xa84
71018ce6fc  orr w3,wzr,#0x3
71018ce700  bl 0x7103375650
71018ce704  ldr x8,[x26, #0x40]
71018ce708  ldr x0,[x8]
71018ce70c  cbz x0,0x71018ce944
71018ce710  adrp x1,0x71042c5000
71018ce714  add x1,x1,#0x9d
71018ce718  adrp x2,0x71042b2000
71018ce71c  add x2,x2,#0xa84
71018ce720  mov w3,#0x4
71018ce724  bl 0x7103375650
71018ce728  ldr x8,[x26, #0x40]
71018ce72c  ldr x0,[x8]
71018ce730  cbz x0,0x71018ce944
71018ce734  adrp x1,0x710433a000
71018ce738  add x1,x1,#0x3e8
71018ce73c  adrp x2,0x71042b2000
71018ce740  add x2,x2,#0xa84
71018ce744  orr w3,wzr,#0x6
71018ce748  bl 0x7103375650
71018ce74c  ldr x8,[x26, #0x40]
71018ce750  ldr x0,[x8]
71018ce754  cbz x0,0x71018ce944
71018ce758  adrp x1,0x71042a3000
71018ce75c  add x1,x1,#0x33a
71018ce760  adrp x2,0x71042b2000
71018ce764  add x2,x2,#0xa84
71018ce768  orr w3,wzr,#0x7
71018ce76c  bl 0x7103375650
71018ce770  ldr x8,[x26, #0x40]
71018ce774  ldr x0,[x8]
71018ce778  cbz x0,0x71018ce944
71018ce77c  adrp x1,0x71043f0000
71018ce780  add x1,x1,#0xc29
71018ce784  adrp x2,0x71042b2000
71018ce788  add x2,x2,#0xa84
71018ce78c  mov w3,wzr
71018ce790  bl 0x7103375650
71018ce794  ldr x8,[x26, #0x40]
71018ce798  ldr x0,[x8]
71018ce79c  cbz x0,0x71018ce944
71018ce7a0  adrp x1,0x7104270000
71018ce7a4  add x1,x1,#0x197
71018ce7a8  adrp x2,0x71042b2000
71018ce7ac  add x2,x2,#0xa84
71018ce7b0  mov w3,#0x1
71018ce7b4  bl 0x7103375650
71018ce7b8  ldr x8,[x26, #0x40]
71018ce7bc  ldr x0,[x8]
71018ce7c0  cbz x0,0x71018ce944
71018ce7c4  adrp x1,0x710425f000
71018ce7c8  add x1,x1,#0x757
71018ce7cc  adrp x2,0x71042b2000
71018ce7d0  add x2,x2,#0xa84
71018ce7d4  mov w3,#0x2
71018ce7d8  bl 0x7103375650
71018ce7dc  ldr x8,[x26, #0x40]
71018ce7e0  ldr x0,[x8]
71018ce7e4  cbz x0,0x71018ce944
71018ce7e8  adrp x1,0x710434a000
71018ce7ec  add x1,x1,#0x677
71018ce7f0  adrp x2,0x71042b2000
71018ce7f4  add x2,x2,#0xa84
71018ce7f8  orr w3,wzr,#0x3
71018ce7fc  bl 0x7103375650
71018ce800  ldr x8,[x26, #0x40]
71018ce804  ldr x0,[x8]
71018ce808  cbz x0,0x71018ce944
71018ce80c  adrp x1,0x71042f8000
71018ce810  add x1,x1,#0x5ec
71018ce814  adrp x2,0x71042b2000
71018ce818  add x2,x2,#0xa84
71018ce81c  mov w3,#0x4
71018ce820  bl 0x7103375650
71018ce824  ldr x8,[x26, #0x40]
71018ce828  ldr x0,[x8]
71018ce82c  cbz x0,0x71018ce944
71018ce830  adrp x1,0x710424f000
71018ce834  add x1,x1,#0x7dd
71018ce838  adrp x2,0x71042b2000
71018ce83c  add x2,x2,#0xa84
71018ce840  mov w3,#0x5
71018ce844  bl 0x7103375650
71018ce848  ldr x8,[x26, #0x40]
71018ce84c  ldr x0,[x8]
71018ce850  cbz x0,0x71018ce944
71018ce854  adrp x1,0x7104401000
71018ce858  add x1,x1,#0x82b
71018ce85c  adrp x2,0x71042b2000
71018ce860  add x2,x2,#0xa84
71018ce864  mov w3,wzr
71018ce868  bl 0x7103375650
71018ce86c  ldr x8,[x26, #0x40]
71018ce870  ldr x0,[x8]
71018ce874  cbz x0,0x71018ce944
71018ce878  adrp x1,0x7104280000
71018ce87c  add x1,x1,#0xd0c
71018ce880  adrp x2,0x71042b2000
71018ce884  add x2,x2,#0xa84
71018ce888  mov w3,#0x1
71018ce88c  bl 0x7103375650
71018ce890  ldr x8,[x26, #0x40]
71018ce894  ldr x0,[x8]
71018ce898  cbz x0,0x71018ce944
71018ce89c  adrp x1,0x71042e7000
71018ce8a0  add x1,x1,#0x55c
71018ce8a4  adrp x2,0x71042b2000
71018ce8a8  add x2,x2,#0xa84
71018ce8ac  mov w3,#0x2
71018ce8b0  bl 0x7103375650
71018ce8b4  ldr x8,[x26, #0x40]
71018ce8b8  ldr x0,[x8]
71018ce8bc  cbz x0,0x71018ce944
71018ce8c0  adrp x1,0x71042a3000
71018ce8c4  add x1,x1,#0x34a
71018ce8c8  adrp x2,0x71042b2000
71018ce8cc  add x2,x2,#0xa84
71018ce8d0  orr w3,wzr,#0x3
71018ce8d4  bl 0x7103375650
71018ce8d8  ldr x8,[x26, #0x40]
71018ce8dc  ldr x0,[x8]
71018ce8e0  cbz x0,0x71018ce944
71018ce8e4  adrp x1,0x71043be000
71018ce8e8  add x1,x1,#0x920
71018ce8ec  adrp x2,0x71042b2000
71018ce8f0  add x2,x2,#0xa84
71018ce8f4  mov w3,wzr
71018ce8f8  bl 0x7103375650
71018ce8fc  ldr x8,[x26, #0x40]
71018ce900  ldr x0,[x8]
71018ce904  cbz x0,0x71018ce944
71018ce908  adrp x1,0x710436c000
71018ce90c  add x1,x1,#0x694
71018ce910  adrp x2,0x71042b2000
71018ce914  add x2,x2,#0xa84
71018ce918  mov w3,#0x1
71018ce91c  bl 0x7103375650
71018ce920  ldr x8,[x26, #0x40]
71018ce924  ldr x0,[x8]
71018ce928  cbz x0,0x71018ce944
71018ce92c  adrp x1,0x710436c000
71018ce930  add x1,x1,#0x69e
71018ce934  adrp x2,0x71042b2000
71018ce938  add x2,x2,#0xa84
71018ce93c  mov w3,#0x2
71018ce940  bl 0x7103375650
71018ce944  ldr x21,[sp, #0x10]
71018ce948  adrp x8,0x710523d000
71018ce94c  add x8,x8,#0x988
71018ce950  stp x8,xzr,[sp, #0x8]
71018ce954  cbz x21,0x71018ce970
71018ce958  ldr x0,[x21, #0x18]
71018ce95c  stp x25,xzr,[x21, #0x10]
71018ce960  cbz x0,0x71018ce968
71018ce964  bl 0x710392eb40
71018ce968  mov x0,x21
71018ce96c  bl 0x710392eb40
71018ce970  ldr x0,[x20, #0x80]
71018ce974  ldr x8,[x0]
71018ce978  ldr x8,[x8, #0x8]
71018ce97c  mov w1,wzr
71018ce980  blr x8
71018ce984  adrp x8,0x7105333000
71018ce988  add x8,x8,#0x600
71018ce98c  str x8,[x20, #0x10]
71018ce990  ldp w9,w8,[x8, #0x60]
71018ce994  stp w9,w8,[x20, #0x68]
71018ce998  adrp x8,0x7105333000
71018ce99c  add x8,x8,#0x650
71018ce9a0  mov w9,#0x1
71018ce9a4  ldaxrb w10,[x8]
71018ce9a8  stxrb w11,w9,[x8]
71018ce9ac  and w10,w10,#0x1
71018ce9b0  cmp w11,#0x0
71018ce9b4  ccmp w10,#0x0,#0x0,eq
71018ce9b8  b.ne 0x71018ce9a4
71018ce9bc  adrp x8,0x7105333000
71018ce9c0  add x8,x8,#0x648
71018ce9c4  ldr x9,[x8]
71018ce9c8  str x9,[x20, #0x48]
71018ce9cc  mov x0,x20
71018ce9d0  str x20,[x8], #0x8
71018ce9d4  stlrb wzr,[x8]
71018ce9d8  bl 0x71032caea0
71018ce9dc  ldr x0,[x19, #0x100]
71018ce9e0  str x20,[x19, #0x100]
71018ce9e4  cbz x0,0x71018ce9f0
71018ce9e8  bl 0x71032cad20
71018ce9ec  ldr x20,[x19, #0x100]
71018ce9f0  adrp x8,0x7105314000
71018ce9f4  ldr x8,[x8, #0x510]
71018ce9f8  ldr x8,[x8]
71018ce9fc  ldr x8,[x8, #0x78]
71018cea00  ldr x8,[x8]
71018cea04  ldr x8,[x8]
71018cea08  ldrb w9,[x8]
71018cea0c  cmp w9,#0x1
71018cea10  cset w9,eq
71018cea14  mov w10,#0x2
71018cea18  csel w3,w10,w9,hi
71018cea1c  ldrb w9,[x8, #0x1]
71018cea20  ldr x20,[x20, #0x80]
71018cea24  cmp w9,#0x0
71018cea28  ldr x9,[x20, #0x40]
71018cea2c  cset w19,ne
71018cea30  cbz x9,0x71018ceabc
71018cea34  ldr x0,[x9]
71018cea38  cbz x0,0x71018ceabc
71018cea3c  ldrb w21,[x8, #0x2]
71018cea40  adrp x1,0x7104443000
71018cea44  add x1,x1,#0xa3a
71018cea48  adrp x2,0x71042b2000
71018cea4c  add x2,x2,#0xa84
71018cea50  bl 0x7103375650
71018cea54  ldr x8,[x20, #0x40]
71018cea58  ldr x0,[x8]
71018cea5c  cbz x0,0x71018ceabc
71018cea60  adrp x1,0x7104280000
71018cea64  add x1,x1,#0xd18
71018cea68  adrp x2,0x71042b2000
71018cea6c  add x2,x2,#0xa84
71018cea70  mov w3,w19
71018cea74  bl 0x7103375650
71018cea78  ldr x8,[x20, #0x40]
71018cea7c  ldr x0,[x8]
71018cea80  cbz x0,0x71018ceabc
71018cea84  cmp w21,#0x1
71018cea88  ldp x29,x30,[sp, #0x80]
71018cea8c  ldp x20,x19,[sp, #0x70]
71018cea90  cset w3,eq
71018cea94  ldp x22,x21,[sp, #0x60]
71018cea98  adrp x1,0x7104443000
71018cea9c  add x1,x1,#0xa45
71018ceaa0  ldp x24,x23,[sp, #0x50]
71018ceaa4  ldp x26,x25,[sp, #0x40]
71018ceaa8  adrp x2,0x71042b2000
71018ceaac  add x2,x2,#0xa84
71018ceab0  ldp x28,x27,[sp, #0x30]
71018ceab4  add sp,sp,#0x90
71018ceab8  b 0x7103375650
71018ceabc  ldp x29,x30,[sp, #0x80]
71018ceac0  ldp x20,x19,[sp, #0x70]
71018ceac4  ldp x22,x21,[sp, #0x60]
71018ceac8  ldp x24,x23,[sp, #0x50]
71018ceacc  ldp x26,x25,[sp, #0x40]
71018cead0  ldp x28,x27,[sp, #0x30]
71018cead4  add sp,sp,#0x90
71018cead8  ret
71018ceadc  adrp x0,0x7105314000
71018ceae0  add x0,x0,#0x4d8
71018ceae4  bl 0x71039c06b0
71018ceae8  cbz w0,0x71018ce0a0
71018ceaec  bl 0x7101764000
71018ceaf0  adrp x0,0x7101763000
71018ceaf4  add x0,x0,#0xc40
71018ceaf8  adrp x1,0x71052c5000
71018ceafc  add x1,x1,#0x180
71018ceb00  adrp x2,0x7104f17000
71018ceb04  add x2,x2,#0x0
71018ceb08  bl 0x71000001c0
71018ceb0c  adrp x0,0x7105314000
71018ceb10  add x0,x0,#0x4d8
71018ceb14  bl 0x71039c06c0
71018ceb18  b 0x71018ce0a0
71018ceb1c  adrp x0,0x7105324000
71018ceb20  add x0,x0,#0x9b8
71018ceb24  bl 0x71039c06b0
71018ceb28  cbz w0,0x71018ce02c
71018ceb2c  adrp x8,0x7105324000
71018ceb30  add x8,x8,#0x748
71018ceb34  ldarb w8,[x8]
71018ceb38  tbz w8,#0x0,0x71018ceb68
71018ceb3c  adrp x8,0x7105324000
71018ceb40  adrp x9,0x7105324000
71018ceb44  add x9,x9,#0x760
71018ceb48  adrp x0,0x7105324000
71018ceb4c  add x0,x0,#0x9b8
71018ceb50  str x9,[x8, #0x9c0]
71018ceb54  bl 0x71039c06c0
71018ceb58  b 0x71018ce02c
71018ceb5c  bl 0x71039c2650
71018ceb60  mov x0,x24
71018ceb64  bl 0x71039c1330
71018ceb68  adrp x0,0x7105324000
71018ceb6c  add x0,x0,#0x748
71018ceb70  bl 0x71039c06b0
71018ceb74  cbz w0,0x71018ceb3c
71018ceb78  adrp x8,0x7105324000
71018ceb7c  add x8,x8,#0x750
71018ceb80  ldarb w8,[x8]
71018ceb84  tbz w8,#0x0,0x71018ceba8
71018ceb88  adrp x8,0x7105324000
71018ceb8c  adrp x9,0x7105324000
71018ceb90  add x9,x9,#0x758
71018ceb94  adrp x0,0x7105324000
71018ceb98  add x0,x0,#0x748
71018ceb9c  str x9,[x8, #0x760]
71018ceba0  bl 0x71039c06c0
71018ceba4  b 0x71018ceb3c
71018ceba8  adrp x0,0x7105324000
71018cebac  add x0,x0,#0x750
71018cebb0  bl 0x71039c06b0
71018cebb4  cbz w0,0x71018ceb88
71018cebb8  adrp x8,0x7105324000
71018cebbc  adrp x0,0x7105324000
71018cebc0  add x0,x0,#0x750
71018cebc4  str xzr,[x8, #0x758]
71018cebc8  bl 0x71039c06c0
71018cebcc  b 0x71018ceb88
