// addr:      71013cdd00
// offset:    0x13cdd00
// name:      FUN_71013cdd00
// mangled:   
// size:      2124

71013cdd00  sub sp,sp,#0x70
71013cdd04  stp x28,x27,[sp, #0x10]
71013cdd08  stp x26,x25,[sp, #0x20]
71013cdd0c  stp x24,x23,[sp, #0x30]
71013cdd10  stp x22,x21,[sp, #0x40]
71013cdd14  stp x20,x19,[sp, #0x50]
71013cdd18  stp x29,x30,[sp, #0x60]
71013cdd1c  add x29,sp,#0x60
71013cdd20  adrp x19,0x7105314000
71013cdd24  add x19,x19,#0x4d8
71013cdd28  ldr x23,[x0, #0x50]
71013cdd2c  ldarb w8,[x19]
71013cdd30  tbz w8,#0x0,0x71013ce488
71013cdd34  adrp x8,0x71052c5000
71013cdd38  add x8,x8,#0x73a
71013cdd3c  ldrb w10,[x8, #0x260]
71013cdd40  ldrb w9,[x8]
71013cdd44  cmp w10,#0x0
71013cdd48  mov w11,#0x2
71013cdd4c  cset w10,eq
71013cdd50  csinc w11,w11,wzr,eq
71013cdd54  cmp w9,#0x0
71013cdd58  csel w9,w10,w11,ne
71013cdd5c  ldrb w10,[x8, #0x4c0]
71013cdd60  cmp w10,#0x0
71013cdd64  ldrb w10,[x8, #0x720]
71013cdd68  cinc w9,w9,eq
71013cdd6c  cmp w10,#0x0
71013cdd70  ldrb w10,[x8, #0x980]
71013cdd74  cinc w9,w9,eq
71013cdd78  cmp w10,#0x0
71013cdd7c  ldrb w10,[x8, #0xbe0]
71013cdd80  cinc w9,w9,eq
71013cdd84  cmp w10,#0x0
71013cdd88  ldrb w10,[x8, #0xe40]
71013cdd8c  cinc w9,w9,eq
71013cdd90  cmp w10,#0x0
71013cdd94  mov w10,#0x10a0
71013cdd98  ldrb w8,[x8, x10, LSL ]
71013cdd9c  cinc w9,w9,eq
71013cdda0  cmp w8,#0x0
71013cdda4  cinc w8,w9,eq
71013cdda8  cmp w8,#0x1
71013cddac  csinc w21,w8,wzr,gt
71013cddb0  ldarb w8,[x19]
71013cddb4  cmp w21,#0x4
71013cddb8  cset w22,lt
71013cddbc  tbz w8,#0x0,0x71013ce4c8
71013cddc0  adrp x8,0x7105305000
71013cddc4  ldr w27,[x8, #0xf0]
71013cddc8  ldr x8,[x23]
71013cddcc  ldr x8,[x8, #0x8]
71013cddd0  ldr x8,[x8]
71013cddd4  ldr x8,[x8, #0xcd0]
71013cddd8  mov w1,#0x88
71013cdddc  mov w0,#0x10
71013cdde0  add x20,x8,#0x28
71013cdde4  bl 0x710392e290
71013cdde8  mov x19,x0
71013cddec  cbnz x0,0x71013cde38
71013cddf0  adrp x8,0x7105332000
71013cddf4  ldr x0,[x8, #0xf00]
71013cddf8  cbz x0,0x71013cde34
71013cddfc  mov w8,#0x88
71013cde00  str wzr,[sp, #0xc]
71013cde04  add x1,sp,#0xc
71013cde08  str x8,[sp]
71013cde0c  ldr x8,[x0]
71013cde10  ldr x8,[x8, #0x30]
71013cde14  mov x2,sp
71013cde18  blr x8
71013cde1c  tbz w0,#0x0,0x71013cde34
71013cde20  mov w1,#0x88
71013cde24  mov w0,#0x10
71013cde28  bl 0x710392e290
71013cde2c  mov x19,x0
71013cde30  cbnz x0,0x71013cde38
71013cde34  mov x19,xzr
71013cde38  adrp x8,0x71050ab000
71013cde3c  add x8,x8,#0xf38
71013cde40  mov w1,#0x450
71013cde44  stp x8,xzr,[x19]
71013cde48  orr x8,xzr,#0x1ffffffff
71013cde4c  stp xzr,x8,[x19, #0x60]
71013cde50  mov w8,#0x1
71013cde54  mov w0,#0x10
71013cde58  stp xzr,xzr,[x19, #0x10]
71013cde5c  strb wzr,[x19, #0x58]
71013cde60  str x20,[x19, #0x78]
71013cde64  strb w8,[x19, #0x70]
71013cde68  stp xzr,xzr,[x19, #0x48]
71013cde6c  bl 0x710392e290
71013cde70  mov x20,x0
71013cde74  cbnz x0,0x71013cdec0
71013cde78  adrp x8,0x7105332000
71013cde7c  ldr x0,[x8, #0xf00]
71013cde80  cbz x0,0x71013cdebc
71013cde84  mov w8,#0x450
71013cde88  str wzr,[sp, #0xc]
71013cde8c  add x1,sp,#0xc
71013cde90  str x8,[sp]
71013cde94  ldr x8,[x0]
71013cde98  ldr x8,[x8, #0x30]
71013cde9c  mov x2,sp
71013cdea0  blr x8
71013cdea4  tbz w0,#0x0,0x71013cdebc
71013cdea8  mov w1,#0x450
71013cdeac  mov w0,#0x10
71013cdeb0  bl 0x710392e290
71013cdeb4  mov x20,x0
71013cdeb8  cbnz x0,0x71013cdec0
71013cdebc  mov x20,xzr
71013cdec0  mov w8,#0x800
71013cdec4  movk w8,#0x701, LSL #16
71013cdec8  cmp w27,w8
71013cdecc  cset w3,eq
71013cded0  cmp w21,#0x4
71013cded4  cset w2,lt
71013cded8  mov x0,x20
71013cdedc  mov x1,x19
71013cdee0  bl 0x7101bc3210
71013cdee4  adrp x8,0x7105333000
71013cdee8  add x8,x8,#0x600
71013cdeec  str x20,[x19, #0x80]
71013cdef0  str x8,[x19, #0x10]
71013cdef4  ldp w9,w8,[x8, #0x60]
71013cdef8  stp w9,w8,[x19, #0x68]
71013cdefc  adrp x8,0x7105333000
71013cdf00  add x8,x8,#0x650
71013cdf04  mov w9,#0x1
71013cdf08  ldaxrb w10,[x8]
71013cdf0c  stxrb w11,w9,[x8]
71013cdf10  and w10,w10,#0x1
71013cdf14  cmp w11,#0x0
71013cdf18  ccmp w10,#0x0,#0x0,eq
71013cdf1c  b.ne 0x71013cdf08
71013cdf20  adrp x8,0x7105333000
71013cdf24  add x8,x8,#0x648
71013cdf28  ldr x9,[x8]
71013cdf2c  str x9,[x19, #0x48]
71013cdf30  mov x0,x19
71013cdf34  str x19,[x8], #0x8
71013cdf38  stlrb wzr,[x8]
71013cdf3c  bl 0x71032caea0
71013cdf40  ldr x0,[x23, #0x130]
71013cdf44  str x19,[x23, #0x130]
71013cdf48  cbz x0,0x71013cdf54
71013cdf4c  bl 0x71032cad20
71013cdf50  ldr x19,[x23, #0x130]
71013cdf54  mov w8,#0x1
71013cdf58  strb w22,[x23, #0x266]
71013cdf5c  fmov s0,0x3f800000
71013cdf60  strb w8,[x23, #0x265]
71013cdf64  ldr x22,[x19, #0x80]
71013cdf68  add x0,x22,#0x1a0
71013cdf6c  strb w8,[x22, #0x430]
71013cdf70  bl 0x710377aee0
71013cdf74  ldr x9,[x22, #0x338]
71013cdf78  ldr x10,[x9, #0x1b8]
71013cdf7c  cbz x10,0x71013cdff4
71013cdf80  ldrb w8,[x22, #0x430]
71013cdf84  add x11,x9,#0x1b8
71013cdf88  mov x9,x11
71013cdf8c  ldr w12,[x10, #0x20]
71013cdf90  cmp w12,#0x2
71013cdf94  cset w12,lt
71013cdf98  csel x9,x9,x10,lt
71013cdf9c  ldr x10,[x10, w12, UXTW #0x3]
71013cdfa0  cbnz x10,0x71013cdf8c
71013cdfa4  cmp x9,x11
71013cdfa8  b.eq 0x71013cdff4
71013cdfac  ldr w10,[x9, #0x20]
71013cdfb0  cmp w10,#0x2
71013cdfb4  b.gt 0x71013cdff4
71013cdfb8  ldr x19,[x9, #0x28]
71013cdfbc  cbz x19,0x71013cdff4
71013cdfc0  cmp w8,#0x0
71013cdfc4  ldr x8,[x19]
71013cdfc8  cset w1,ne
71013cdfcc  cset w20,eq
71013cdfd0  ldr x8,[x8, #0x1f8]
71013cdfd4  mov x0,x19
71013cdfd8  blr x8
71013cdfdc  ldr x8,[x19]
71013cdfe0  ldr x8,[x8, #0x388]
71013cdfe4  mov x0,x19
71013cdfe8  mov w1,w20
71013cdfec  mov w2,wzr
71013cdff0  blr x8
71013cdff4  ldrb w8,[x22, #0x431]
71013cdff8  cbz w8,0x71013ce00c
71013cdffc  ldrb w8,[x22, #0x430]
71013ce000  cmp w8,#0x0
71013ce004  cset w1,ne
71013ce008  b 0x71013ce010
71013ce00c  mov w1,wzr
71013ce010  ldr x0,[x22, #0x348]
71013ce014  ldr x8,[x0]
71013ce018  ldr x8,[x8, #0x60]
71013ce01c  blr x8
71013ce020  ldr x8,[x23, #0x130]
71013ce024  ldr x8,[x8, #0x80]
71013ce028  orr w9,wzr,#0x7
71013ce02c  add x0,x8,#0x270
71013ce030  adrp x1,0x710436c000
71013ce034  add x1,x1,#0x176
71013ce038  str w9,[x8, #0x428]
71013ce03c  bl 0x710377a120
71013ce040  and w8,w21,#0x7fffffff
71013ce044  cmp w8,#0x2
71013ce048  b.eq 0x71013ce0b4
71013ce04c  cmp w8,#0x1
71013ce050  b.ne 0x71013ce114
71013ce054  ldr x8,[x23, #0x130]
71013ce058  ldr x0,[x8, #0x80]
71013ce05c  mov w1,#0x1
71013ce060  mov w3,#0x1
71013ce064  mov w4,#0x1
71013ce068  mov w5,#0x1
71013ce06c  mov w2,wzr
71013ce070  bl 0x7101bc96d0
71013ce074  ldr x8,[x23, #0x130]
71013ce078  ldr x8,[x8, #0x80]
71013ce07c  ldr x10,[x8, #0x438]
71013ce080  ldr x9,[x8, #0x440]
71013ce084  cmp x10,x9
71013ce088  b.eq 0x71013ce17c
71013ce08c  ldr w11,[x10]
71013ce090  cmp w11,#0x4
71013ce094  b.eq 0x71013ce17c
71013ce098  add x10,x10,#0x4
71013ce09c  cmp x9,x10
71013ce0a0  b.eq 0x71013ce1a4
71013ce0a4  ldr w11,[x10], #0x4
71013ce0a8  cmp w11,#0x4
71013ce0ac  b.ne 0x71013ce09c
71013ce0b0  b 0x71013ce178
71013ce0b4  ldr x8,[x23, #0x130]
71013ce0b8  ldr x0,[x8, #0x80]
71013ce0bc  mov w1,#0x1
71013ce0c0  mov w2,#0x1
71013ce0c4  mov w3,#0x1
71013ce0c8  mov w4,#0x1
71013ce0cc  mov w5,wzr
71013ce0d0  bl 0x7101bc96d0
71013ce0d4  ldr x8,[x23, #0x130]
71013ce0d8  ldr x8,[x8, #0x80]
71013ce0dc  ldr x10,[x8, #0x438]
71013ce0e0  ldr x9,[x8, #0x440]
71013ce0e4  cmp x10,x9
71013ce0e8  b.eq 0x71013ce17c
71013ce0ec  ldr w11,[x10]
71013ce0f0  cmp w11,#0x4
71013ce0f4  b.eq 0x71013ce17c
71013ce0f8  add x10,x10,#0x4
71013ce0fc  cmp x9,x10
71013ce100  b.eq 0x71013ce1a4
71013ce104  ldr w11,[x10], #0x4
71013ce108  cmp w11,#0x4
71013ce10c  b.ne 0x71013ce0fc
71013ce110  b 0x71013ce178
71013ce114  ldr x8,[x23, #0x130]
71013ce118  ldr x0,[x8, #0x80]
71013ce11c  cmp w21,#0x3
71013ce120  b.ne 0x71013ce400
71013ce124  mov w1,#0x1
71013ce128  mov w2,#0x1
71013ce12c  mov w3,#0x1
71013ce130  mov w4,wzr
71013ce134  mov w5,wzr
71013ce138  bl 0x7101bc96d0
71013ce13c  ldr x8,[x23, #0x130]
71013ce140  ldr x8,[x8, #0x80]
71013ce144  ldr x10,[x8, #0x438]
71013ce148  ldr x9,[x8, #0x440]
71013ce14c  cmp x10,x9
71013ce150  b.eq 0x71013ce17c
71013ce154  ldr w11,[x10]
71013ce158  cmp w11,#0x4
71013ce15c  b.eq 0x71013ce17c
71013ce160  add x10,x10,#0x4
71013ce164  cmp x9,x10
71013ce168  b.eq 0x71013ce1a4
71013ce16c  ldr w11,[x10], #0x4
71013ce170  cmp w11,#0x4
71013ce174  b.ne 0x71013ce164
71013ce178  sub x10,x10,#0x4
71013ce17c  cmp x10,x9
71013ce180  b.eq 0x71013ce1a4
71013ce184  mov w9,#0x4
71013ce188  add x0,x8,#0x230
71013ce18c  adrp x1,0x71042f8000
71013ce190  add x1,x1,#0x144
71013ce194  str w9,[x8, #0x420]
71013ce198  bl 0x710377a120
71013ce19c  ldr x8,[x23, #0x130]
71013ce1a0  ldr x8,[x8, #0x80]
71013ce1a4  ldr x8,[x8, #0x220]
71013ce1a8  add x0,x8,#0x30
71013ce1ac  fmov s0,0x3f800000
71013ce1b0  bl 0x710377aee0
71013ce1b4  ldr w8,[x23, #0x150]
71013ce1b8  ldr w10,[x23, #0x154]
71013ce1bc  cmn w8,#0x1
71013ce1c0  mov w11,#0x2
71013ce1c4  cset w9,ne
71013ce1c8  csinc w11,w11,wzr,ne
71013ce1cc  cmn w10,#0x1
71013ce1d0  ldr w10,[x23, #0x158]
71013ce1d4  csel w9,w9,w11,eq
71013ce1d8  cmn w10,#0x1
71013ce1dc  csetm w10,ne
71013ce1e0  cmp w9,w10
71013ce1e4  b.eq 0x71013ce338
71013ce1e8  mov x27,xzr
71013ce1ec  mov w28,#0x55
71013ce1f0  mov w26,#0x1d8
71013ce1f4  adrp x22,0x7104308000
71013ce1f8  add x22,x22,#0x362
71013ce1fc  mov x24,#-0x3f00000000000000
71013ce200  mov w21,#0x2
71013ce204  cmp w8,#0x8
71013ce208  b.cc 0x71013ce224
71013ce20c  b 0x71013ce548
71013ce210  ldr w8,[x23, x28, LSL #0x2]
71013ce214  add x27,x27,#0x58
71013ce218  add x28,x28,#0x1
71013ce21c  cmp w8,#0x8
71013ce220  b.cs 0x71013ce548
71013ce224  ldr x25,[x23, #0x148]
71013ce228  ldr x9,[x23, #0x130]
71013ce22c  smaddl x10,w8,w26,x25
71013ce230  ldr x9,[x9, #0x80]
71013ce234  ldr x1,[x10, #0x68]
71013ce238  ldr x20,[x9, #0x220]
71013ce23c  and x11,x1,#-0x100000000000000
71013ce240  and x10,x1,#0xffffffffff
71013ce244  cmp x11,x24
71013ce248  ccmp x10,#0x0,#0x4,eq
71013ce24c  b.eq 0x71013ce2d0
71013ce250  sxtw x19,w8
71013ce254  ldr x8,[x9]
71013ce258  mov x21,x24
71013ce25c  mov x24,x22
71013ce260  ldr x22,[x8, #0x78]
71013ce264  madd x8,x19,x26,x25
71013ce268  ldrb w8,[x8, #0x74]
71013ce26c  cbz w8,0x71013ce294
71013ce270  adrp x8,0x710532f000
71013ce274  ldr x8,[x8, #0x730]
71013ce278  ldr x8,[x8, #0x8]
71013ce27c  ldr x0,[x8, #0x168]
71013ce280  mov x1,#0xb807
71013ce284  movk x1,#0xb1cc, LSL #16
71013ce288  movk x1,#0x11, LSL #32
71013ce28c  bl 0x71032631a0
71013ce290  mov x1,x0
71013ce294  madd x8,x19,x26,x25
71013ce298  ldr w2,[x8, #0x70]
71013ce29c  mov x0,x22
71013ce2a0  mov w3,wzr
71013ce2a4  bl 0x710323f330
71013ce2a8  add x8,x20,x27
71013ce2ac  mov x1,x0
71013ce2b0  ldr x0,[x8, #0x98]
71013ce2b4  bl 0x7103778b80
71013ce2b8  ldr x8,[x23, #0x130]
71013ce2bc  ldr x8,[x8, #0x80]
71013ce2c0  ldr x20,[x8, #0x220]
71013ce2c4  mov x22,x24
71013ce2c8  mov x24,x21
71013ce2cc  mov w21,#0x2
71013ce2d0  add x19,x20,x27
71013ce2d4  add x0,x19,#0x70
71013ce2d8  mov w2,#0x1
71013ce2dc  mov x1,x22
71013ce2e0  mov w3,wzr
71013ce2e4  str wzr,[x19, #0xb0]
71013ce2e8  bl 0x710377a280
71013ce2ec  add x0,x19,#0x80
71013ce2f0  mov w2,#0x1
71013ce2f4  adrp x1,0x7104412000
71013ce2f8  add x1,x1,#0x87c
71013ce2fc  mov w3,wzr
71013ce300  bl 0x710377a280
71013ce304  ldr w8,[x23, #0x150]
71013ce308  ldr w9,[x23, #0x154]
71013ce30c  cmn w8,#0x1
71013ce310  ldr w10,[x23, #0x158]
71013ce314  cset w8,ne
71013ce318  csinc x12,x21,xzr,ne
71013ce31c  cmn w9,#0x1
71013ce320  csel x8,x8,x12,eq
71013ce324  cmn w10,#0x1
71013ce328  sub x11,x28,#0x54
71013ce32c  cinc x8,x8,ne
71013ce330  cmp x11,x8
71013ce334  b.cc 0x71013ce210
71013ce338  ldr x1,[x23]
71013ce33c  ldr x0,[x1, #0x48]
71013ce340  ldr x8,[x0]
71013ce344  ldr x8,[x8, #0x10]
71013ce348  mov w2,#0xd
71013ce34c  blr x8
71013ce350  str x0,[x23, #0x138]
71013ce354  adrp x8,0x7105314000
71013ce358  add x8,x8,#0x4d8
71013ce35c  ldarb w8,[x8]
71013ce360  tbz w8,#0x0,0x71013ce508
71013ce364  adrp x8,0x7105305000
71013ce368  ldr w8,[x8, #0xf0]
71013ce36c  mov w9,#0x101
71013ce370  movk w9,#0x701, LSL #16
71013ce374  cmp w8,w9
71013ce378  b.eq 0x71013ce39c
71013ce37c  mov w9,#0x400
71013ce380  movk w9,#0x701, LSL #16
71013ce384  cmp w8,w9
71013ce388  b.eq 0x71013ce39c
71013ce38c  mov w9,#0x800
71013ce390  movk w9,#0x701, LSL #16
71013ce394  cmp w8,w9
71013ce398  b.ne 0x71013ce3a4
71013ce39c  mov w3,#0x1
71013ce3a0  b 0x71013ce3a8
71013ce3a4  mov w3,wzr
71013ce3a8  ldr x8,[x23, #0x130]
71013ce3ac  ldr x8,[x8, #0x80]
71013ce3b0  add x1,x8,#0x228
71013ce3b4  ldr x8,[x23]
71013ce3b8  ldr x8,[x8, #0x8]
71013ce3bc  ldr x8,[x8]
71013ce3c0  ldr x0,[x23, #0x140]
71013ce3c4  add x2,x8,#0xcd8
71013ce3c8  bl 0x710140d6f0
71013ce3cc  ldr x8,[x23, #0x130]
71013ce3d0  str x8,[x23, #0x228]
71013ce3d4  ldr x8,[x8, #0x80]
71013ce3d8  add x8,x8,#0x328
71013ce3dc  str x8,[x23, #0x250]
71013ce3e0  ldp x29,x30,[sp, #0x60]
71013ce3e4  ldp x20,x19,[sp, #0x50]
71013ce3e8  ldp x22,x21,[sp, #0x40]
71013ce3ec  ldp x24,x23,[sp, #0x30]
71013ce3f0  ldp x26,x25,[sp, #0x20]
71013ce3f4  ldp x28,x27,[sp, #0x10]
71013ce3f8  add sp,sp,#0x70
71013ce3fc  ret
71013ce400  mov w2,#0x1
71013ce404  mov w1,wzr
71013ce408  mov w3,wzr
71013ce40c  mov w4,wzr
71013ce410  mov w5,wzr
71013ce414  bl 0x7101bc96d0
71013ce418  ldr x8,[x23, #0x130]
71013ce41c  ldr x8,[x8, #0x80]
71013ce420  ldr x10,[x8, #0x438]
71013ce424  ldr x9,[x8, #0x440]
71013ce428  cmp x10,x9
71013ce42c  b.eq 0x71013ce450
71013ce430  ldr w11,[x10]
71013ce434  cbz w11,0x71013ce450
71013ce438  add x10,x10,#0x4
71013ce43c  cmp x9,x10
71013ce440  b.eq 0x71013ce47c
71013ce444  ldr w11,[x10], #0x4
71013ce448  cbnz w11,0x71013ce43c
71013ce44c  sub x10,x10,#0x4
71013ce450  cmp x10,x9
71013ce454  b.eq 0x71013ce47c
71013ce458  add x0,x8,#0x230
71013ce45c  adrp x1,0x71042d6000
71013ce460  add x1,x1,#0x159
71013ce464  mov w2,#0x1
71013ce468  mov w3,wzr
71013ce46c  str wzr,[x8, #0x420]
71013ce470  bl 0x710377a280
71013ce474  ldr x8,[x23, #0x130]
71013ce478  ldr x8,[x8, #0x80]
71013ce47c  ldr x8,[x8, #0x220]
71013ce480  add x0,x8,#0x20
71013ce484  b 0x71013ce1ac
71013ce488  adrp x0,0x7105314000
71013ce48c  add x0,x0,#0x4d8
71013ce490  bl 0x71039c06b0
71013ce494  cbz w0,0x71013cdd34
71013ce498  bl 0x7101764000
71013ce49c  adrp x0,0x7101763000
71013ce4a0  add x0,x0,#0xc40
71013ce4a4  adrp x1,0x71052c5000
71013ce4a8  add x1,x1,#0x180
71013ce4ac  adrp x2,0x7104f17000
71013ce4b0  add x2,x2,#0x0
71013ce4b4  bl 0x71000001c0
71013ce4b8  adrp x0,0x7105314000
71013ce4bc  add x0,x0,#0x4d8
71013ce4c0  bl 0x71039c06c0
71013ce4c4  b 0x71013cdd34
71013ce4c8  adrp x0,0x7105314000
71013ce4cc  add x0,x0,#0x4d8
71013ce4d0  bl 0x71039c06b0
71013ce4d4  cbz w0,0x71013cddc0
71013ce4d8  bl 0x7101764000
71013ce4dc  adrp x0,0x7101763000
71013ce4e0  add x0,x0,#0xc40
71013ce4e4  adrp x1,0x71052c5000
71013ce4e8  add x1,x1,#0x180
71013ce4ec  adrp x2,0x7104f17000
71013ce4f0  add x2,x2,#0x0
71013ce4f4  bl 0x71000001c0
71013ce4f8  adrp x0,0x7105314000
71013ce4fc  add x0,x0,#0x4d8
71013ce500  bl 0x71039c06c0
71013ce504  b 0x71013cddc0
71013ce508  adrp x0,0x7105314000
71013ce50c  add x0,x0,#0x4d8
71013ce510  bl 0x71039c06b0
71013ce514  cbz w0,0x71013ce364
71013ce518  bl 0x7101764000
71013ce51c  adrp x0,0x7101763000
71013ce520  add x0,x0,#0xc40
71013ce524  adrp x1,0x71052c5000
71013ce528  add x1,x1,#0x180
71013ce52c  adrp x2,0x7104f17000
71013ce530  add x2,x2,#0x0
71013ce534  bl 0x71000001c0
71013ce538  adrp x0,0x7105314000
71013ce53c  add x0,x0,#0x4d8
71013ce540  bl 0x71039c06c0
71013ce544  b 0x71013ce364
71013ce548  bl 0x71039c2650
