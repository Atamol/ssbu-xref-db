// addr:      7101ccdac0
// offset:    0x1ccdac0
// name:      FUN_7101ccdac0
// mangled:   
// size:      1892

7101ccdac0  sub sp,sp,#0xb0
7101ccdac4  stp x28,x27,[sp, #0x50]
7101ccdac8  stp x26,x25,[sp, #0x60]
7101ccdacc  stp x24,x23,[sp, #0x70]
7101ccdad0  stp x22,x21,[sp, #0x80]
7101ccdad4  stp x20,x19,[sp, #0x90]
7101ccdad8  stp x29,x30,[sp, #0xa0]
7101ccdadc  add x29,sp,#0xa0
7101ccdae0  ldr x8,[x0, #0xf0]
7101ccdae4  ldr x9,[x8]
7101ccdae8  mov x22,x0
7101ccdaec  stp x9,x1,[sp]
7101ccdaf0  ldr x0,[x9, #0x10]
7101ccdaf4  fmov s0,0x3f800000
7101ccdaf8  orr x21,xzr,#-0x5555555555555556
7101ccdafc  add x8,x9,#0x8
7101ccdb00  adrp x1,0x710433a000
7101ccdb04  add x1,x1,#0x322
7101ccdb08  mov x24,x2
7101ccdb0c  movk x21,#0xaaa, LSL #48
7101ccdb10  str x8,[sp, #0x18]
7101ccdb14  bl 0x7103778300
7101ccdb18  add x8,x22,#0x110
7101ccdb1c  stp x8,x24,[sp, #0x20]
7101ccdb20  ldr x8,[x22, #0x110]
7101ccdb24  ldr x9,[x22, #0x128]
7101ccdb28  mov x23,xzr
7101ccdb2c  add x10,x22,#0x128
7101ccdb30  mov x19,#-0x3f00000000000000
7101ccdb34  adrp x28,0x710532f000
7101ccdb38  str x10,[sp, #0x10]
7101ccdb3c  str x8,[x22, #0x118]
7101ccdb40  str x9,[x22, #0x130]
7101ccdb44  str x22,[sp, #0x30]
7101ccdb48  add x20,x24,x23
7101ccdb4c  ldrb w8,[x20, #0x88]
7101ccdb50  cbz w8,0x7101ccdd50
7101ccdb54  ldr x25,[x20, #0x78]
7101ccdb58  and x9,x25,#-0x100000000000000
7101ccdb5c  and x8,x25,#0xffffffffff
7101ccdb60  cmp x9,x19
7101ccdb64  ccmp x8,#0x0,#0x4,eq
7101ccdb68  b.eq 0x7101ccdd50
7101ccdb6c  ldr x8,[x28, #0x730]
7101ccdb70  ldr x19,[x8, #0x8]
7101ccdb74  ldr x22,[x19, #0x168]
7101ccdb78  mov x0,x22
7101ccdb7c  mov x1,x25
7101ccdb80  bl 0x71032632a0
7101ccdb84  mov x1,#0xb807
7101ccdb88  movk x1,#0xb1cc, LSL #16
7101ccdb8c  movk x1,#0x11, LSL #32
7101ccdb90  tbnz w0,#0x0,0x7101ccdbb0
7101ccdb94  add x0,x19,#0x160
7101ccdb98  mov x1,x25
7101ccdb9c  bl 0x71032648e0
7101ccdba0  mov x1,#0xf67e
7101ccdba4  movk x1,#0x3829, LSL #16
7101ccdba8  movk x1,#0x14, LSL #32
7101ccdbac  tbz w0,#0x0,0x7101ccdbbc
7101ccdbb0  mov x0,x22
7101ccdbb4  bl 0x71032631a0
7101ccdbb8  mov x25,x0
7101ccdbbc  ldr x22,[sp, #0x30]
7101ccdbc0  ldrb w26,[x20, #0x8a]
7101ccdbc4  mov w2,#0x2
7101ccdbc8  mov x0,x25
7101ccdbcc  ldr x19,[x22, #0xe8]
7101ccdbd0  mov w1,w26
7101ccdbd4  bl 0x7103238a70
7101ccdbd8  tst x0,#0xffffffffff
7101ccdbdc  str x0,[sp, #0x38]
7101ccdbe0  b.eq 0x7101ccdbf8
7101ccdbe4  ldr x0,[x19]
7101ccdbe8  ldrsw x2,[x0, #0x70]
7101ccdbec  ldr w3,[x0, #0x68]
7101ccdbf0  add x1,sp,#0x38
7101ccdbf4  bl 0x710323c4e0
7101ccdbf8  ldp x8,x9,[x22, #0x118]
7101ccdbfc  ldr w20,[x20, #0x90]
7101ccdc00  cmp x8,x9
7101ccdc04  b.cs 0x7101ccdc28
7101ccdc08  str w20,[x8]
7101ccdc0c  str x25,[x8, #0x8]
7101ccdc10  mov x19,#-0x3f00000000000000
7101ccdc14  str w26,[x8, #0x10]
7101ccdc18  ldr x8,[x22, #0x118]
7101ccdc1c  add x8,x8,#0x18
7101ccdc20  str x8,[x22, #0x118]
7101ccdc24  b 0x7101ccdd50
7101ccdc28  ldr x10,[sp, #0x20]
7101ccdc2c  ldr x27,[x10]
7101ccdc30  orr x10,xzr,#-0x5555555555555556
7101ccdc34  movk x10,#0xaaab
7101ccdc38  sub x28,x8,x27
7101ccdc3c  asr x8,x28,#0x3
7101ccdc40  mul x24,x8,x10
7101ccdc44  add x8,x24,#0x1
7101ccdc48  cmp x8,x21
7101ccdc4c  b.hi 0x7101cce21c
7101ccdc50  sub x9,x9,x27
7101ccdc54  asr x9,x9,#0x3
7101ccdc58  mul x9,x9,x10
7101ccdc5c  orr x10,xzr,#0x5555555555555555
7101ccdc60  movk x10,#0x555, LSL #48
7101ccdc64  mov x19,x21
7101ccdc68  cmp x9,x10
7101ccdc6c  b.cs 0x7101ccdc80
7101ccdc70  lsl x9,x9,#0x1
7101ccdc74  cmp x9,x8
7101ccdc78  csel x19,x8,x9,cc
7101ccdc7c  cbz x19,0x7101ccdcdc
7101ccdc80  add x8,x19,x19, LSL #0x1
7101ccdc84  lsl x8,x8,#0x3
7101ccdc88  cmp x8,#0x0
7101ccdc8c  csinc x22,x8,xzr,ne
7101ccdc90  mov w0,#0x10
7101ccdc94  mov x1,x22
7101ccdc98  bl 0x710392e290
7101ccdc9c  cbnz x0,0x7101ccdce0
7101ccdca0  adrp x8,0x7105332000
7101ccdca4  ldr x0,[x8, #0xf00]
7101ccdca8  cbz x0,0x7101ccdcdc
7101ccdcac  str wzr,[sp, #0x4c]
7101ccdcb0  str x22,[sp, #0x38]
7101ccdcb4  ldr x8,[x0]
7101ccdcb8  ldr x8,[x8, #0x30]
7101ccdcbc  add x1,sp,#0x4c
7101ccdcc0  add x2,sp,#0x38
7101ccdcc4  blr x8
7101ccdcc8  tbz w0,#0x0,0x7101ccdcdc
7101ccdccc  mov w0,#0x10
7101ccdcd0  mov x1,x22
7101ccdcd4  bl 0x710392e290
7101ccdcd8  cbnz x0,0x7101ccdce0
7101ccdcdc  mov x0,xzr
7101ccdce0  orr x9,xzr,#0x5555555555555555
7101ccdce4  movk x9,#0xd555, LSL #48
7101ccdce8  smulh x9,x28,x9
7101ccdcec  orr w11,wzr,#0x18
7101ccdcf0  madd x8,x24,x11,x0
7101ccdcf4  madd x19,x19,x11,x0
7101ccdcf8  str w20,[x8]
7101ccdcfc  add x20,x8,#0x18
7101ccdd00  cmp x28,#0x1
7101ccdd04  str x25,[x8, #0x8]
7101ccdd08  str w26,[x8, #0x10]
7101ccdd0c  asr x10,x9,#0x2
7101ccdd10  add x9,x10,x9, LSR #0x3f
7101ccdd14  madd x22,x9,x11,x8
7101ccdd18  b.lt 0x7101ccdd2c
7101ccdd1c  mov x0,x22
7101ccdd20  mov x1,x27
7101ccdd24  mov x2,x28
7101ccdd28  bl 0x71039c00e0
7101ccdd2c  ldp x24,x8,[sp, #0x28]
7101ccdd30  str x19,[x8, #0x120]
7101ccdd34  stp x22,x20,[x8, #0x110]
7101ccdd38  mov x22,x8
7101ccdd3c  adrp x28,0x710532f000
7101ccdd40  mov x19,#-0x3f00000000000000
7101ccdd44  cbz x27,0x7101ccdd50
7101ccdd48  mov x0,x27
7101ccdd4c  bl 0x710392eb40
7101ccdd50  add x23,x23,#0x50
7101ccdd54  cmp x23,#0x280
7101ccdd58  b.ne 0x7101ccdb48
7101ccdd5c  ldp x24,x25,[x22, #0x110]
7101ccdd60  sub x8,x25,x24
7101ccdd64  orr x10,xzr,#-0x5555555555555556
7101ccdd68  movk x10,#0xaaab
7101ccdd6c  asr x9,x8,#0x3
7101ccdd70  mul x26,x9,x10
7101ccdd74  cmp x8,#0x1
7101ccdd78  adrp x19,0x7105332000
7101ccdd7c  b.lt 0x7101ccddf0
7101ccdd80  orr x8,xzr,#0x5555555555555555
7101ccdd84  movk x8,#0x555, LSL #48
7101ccdd88  cmp x26,x8
7101ccdd8c  csel x27,x26,x8,lt
7101ccdd90  add x8,x27,x27, LSL #0x1
7101ccdd94  lsl x8,x8,#0x3
7101ccdd98  cmp x8,#0x0
7101ccdd9c  csinc x22,x8,xzr,ne
7101ccdda0  mov w0,#0x10
7101ccdda4  mov x1,x22
7101ccdda8  bl 0x710392e290
7101ccddac  cbnz x0,0x7101ccde0c
7101ccddb0  ldr x0,[x19, #0xf00]
7101ccddb4  cbz x0,0x7101ccdde8
7101ccddb8  str wzr,[sp, #0x4c]
7101ccddbc  str x22,[sp, #0x38]
7101ccddc0  ldr x8,[x0]
7101ccddc4  ldr x8,[x8, #0x30]
7101ccddc8  add x1,sp,#0x4c
7101ccddcc  add x2,sp,#0x38
7101ccddd0  blr x8
7101ccddd4  tbz w0,#0x0,0x7101ccdde8
7101ccddd8  mov w0,#0x10
7101ccdddc  mov x1,x22
7101ccdde0  bl 0x710392e290
7101ccdde4  cbnz x0,0x7101ccde0c
7101ccdde8  lsr x27,x27,#0x1
7101ccddec  cbnz x27,0x7101ccdd90
7101ccddf0  mov x0,x24
7101ccddf4  mov x1,x25
7101ccddf8  mov x2,x26
7101ccddfc  mov x3,xzr
7101ccde00  mov x4,xzr
7101ccde04  bl 0x7101cce230
7101ccde08  b 0x7101ccde30
7101ccde0c  mov x28,x0
7101ccde10  mov x0,x24
7101ccde14  mov x1,x25
7101ccde18  mov x2,x26
7101ccde1c  mov x3,x28
7101ccde20  mov x4,x27
7101ccde24  bl 0x7101cce230
7101ccde28  mov x0,x28
7101ccde2c  bl 0x710392eb40
7101ccde30  ldr x9,[sp, #0x30]
7101ccde34  ldp x8,x9,[x9, #0x110]
7101ccde38  sub x8,x9,x8
7101ccde3c  ldr x27,[sp, #0x18]
7101ccde40  mov x0,x27
7101ccde44  lsr x8,x8,#0x3
7101ccde48  mov w9,#0xaaab
7101ccde4c  movk w9,#0xaaaa, LSL #16
7101ccde50  mul w2,w8,w9
7101ccde54  adrp x1,0x71043ad000
7101ccde58  add x1,x1,#0x94d
7101ccde5c  mov x20,#0x6900000000000000
7101ccde60  bl 0x7103778430
7101ccde64  adrp x8,0x710532f000
7101ccde68  ldr x8,[x8, #0x730]
7101ccde6c  ldr x26,[sp, #0x28]
7101ccde70  ldr w22,[x26, #0x2f8]
7101ccde74  ldr x23,[x8, #0x8]
7101ccde78  cmn w22,#0x1
7101ccde7c  add x25,x23,#0x170
7101ccde80  b.eq 0x7101ccdecc
7101ccde84  cmp w22,#0x16b
7101ccde88  b.hi 0x7101ccdea8
7101ccde8c  sxtw x8,w22
7101ccde90  adrp x9,0x710454a000
7101ccde94  add x9,x9,#0x7e8
7101ccde98  mov w10,#0x48
7101ccde9c  madd x8,x8,x10,x9
7101ccdea0  ldr w1,[x8, #0x4]
7101ccdea4  b 0x7101ccdeac
7101ccdea8  mov w1,#0xffffffff
7101ccdeac  mov x0,x25
7101ccdeb0  bl 0x71032b24e0
7101ccdeb4  and x8,x0,#-0x100000000000000
7101ccdeb8  cmp x8,x20
7101ccdebc  b.ne 0x7101ccdecc
7101ccdec0  mov x24,x0
7101ccdec4  and x19,x0,#0xffffffffff
7101ccdec8  cbnz x19,0x7101ccdf20
7101ccdecc  ldr w22,[x26, #0x2fc]
7101ccded0  cmn w22,#0x1
7101ccded4  b.eq 0x7101cce1b4
7101ccded8  cmp w22,#0x16b
7101ccdedc  b.hi 0x7101ccdefc
7101ccdee0  sxtw x8,w22
7101ccdee4  adrp x9,0x710454a000
7101ccdee8  add x9,x9,#0x7e8
7101ccdeec  mov w10,#0x48
7101ccdef0  madd x8,x8,x10,x9
7101ccdef4  ldr w1,[x8, #0x4]
7101ccdef8  b 0x7101ccdf00
7101ccdefc  mov w1,#0xffffffff
7101ccdf00  mov x0,x25
7101ccdf04  bl 0x71032b24e0
7101ccdf08  and x8,x0,#-0x100000000000000
7101ccdf0c  cmp x8,x20
7101ccdf10  b.ne 0x7101cce1b4
7101ccdf14  mov x24,x0
7101ccdf18  and x19,x0,#0xffffffffff
7101ccdf1c  cbz x19,0x7101cce1b4
7101ccdf20  ldr x8,[x23, #0x178]
7101ccdf24  ldr x0,[x8, #0x8]
7101ccdf28  mov x1,#0x4f97
7101ccdf2c  movk x1,#0x5678, LSL #16
7101ccdf30  movk x1,#0xd, LSL #32
7101ccdf34  bl 0x71032b23e0
7101ccdf38  and x9,x24,#-0x100000000000000
7101ccdf3c  and x8,x0,#0xffffffffff
7101ccdf40  cmp x9,x20
7101ccdf44  b.ne 0x7101ccdfac
7101ccdf48  cbz x19,0x7101ccdfac
7101ccdf4c  ldr x23,[sp, #0x10]
7101ccdf50  and x10,x0,#-0x100000000000000
7101ccdf54  cmp x10,x20
7101ccdf58  b.ne 0x7101ccdfb4
7101ccdf5c  cbz x8,0x7101ccdfb4
7101ccdf60  eor x8,x0,x24
7101ccdf64  tst x8,#0xffffffffff
7101ccdf68  b.eq 0x7101ccdfe8
7101ccdf6c  cmp w22,#0x16c
7101ccdf70  b.cs 0x7101cce048
7101ccdf74  adrp x8,0x710454a000
7101ccdf78  add x8,x8,#0x7e8
7101ccdf7c  mov w9,#0x48
7101ccdf80  smaddl x8,w22,w9,x8
7101ccdf84  ldr w9,[x8, #0x8]
7101ccdf88  cmp w9,#0x1
7101ccdf8c  cset w8,eq
7101ccdf90  cmp w9,#0x2
7101ccdf94  b.ne 0x7101cce05c
7101ccdf98  ldr x21,[sp, #0x30]
7101ccdf9c  ldr x19,[x21, #0xe8]
7101ccdfa0  mov w1,#0x10
7101ccdfa4  mov w20,#0x1
7101ccdfa8  b 0x7101cce074
7101ccdfac  ldr x23,[sp, #0x10]
7101ccdfb0  and x10,x0,#-0x100000000000000
7101ccdfb4  cmp x9,x20
7101ccdfb8  cset w9,eq
7101ccdfbc  cmp x19,#0x0
7101ccdfc0  cset w11,ne
7101ccdfc4  cmp x8,#0x0
7101ccdfc8  cset w8,ne
7101ccdfcc  cmp x10,x20
7101ccdfd0  cset w10,eq
7101ccdfd4  and w9,w9,w11
7101ccdfd8  and w8,w8,w10
7101ccdfdc  eor w8,w8,w9
7101ccdfe0  cmp w8,#0x1
7101ccdfe4  b.eq 0x7101ccdf6c
7101ccdfe8  ldr x8,[sp]
7101ccdfec  ldr x0,[x8, #0x10]
7101ccdff0  fmov s0,0x3f800000
7101ccdff4  adrp x1,0x71042e7000
7101ccdff8  add x1,x1,#0x3fa
7101ccdffc  bl 0x7103778300
7101cce000  adrp x1,0x7104270000
7101cce004  add x1,x1,#0x100
7101cce008  add x8,sp,#0x38
7101cce00c  mov x0,x27
7101cce010  bl 0x7103776910
7101cce014  ldr x8,[sp, #0x8]
7101cce018  ldr x1,[x8]
7101cce01c  adrp x8,0x7105325000
7101cce020  ldr x8,[x8, #0xcd0]
7101cce024  ldr x0,[x8, #0x8]
7101cce028  add x2,sp,#0x38
7101cce02c  bl 0x7101cedc80
7101cce030  ldr x0,[sp, #0x40]
7101cce034  adrp x8,0x710523d000
7101cce038  add x8,x8,#0x9a8
7101cce03c  stp x8,xzr,[sp, #0x38]
7101cce040  cbnz x0,0x7101cce1b0
7101cce044  b 0x7101cce1b4
7101cce048  ldr x21,[sp, #0x30]
7101cce04c  ldr x19,[x21, #0xe8]
7101cce050  mov w20,wzr
7101cce054  orr w1,wzr,#0xe
7101cce058  b 0x7101cce074
7101cce05c  ldr x21,[sp, #0x30]
7101cce060  ldr x19,[x21, #0xe8]
7101cce064  lsl w20,w8,#0x1
7101cce068  cmp w20,#0x2
7101cce06c  orr w8,wzr,#0xe
7101cce070  cinc w1,w8,eq
7101cce074  mov x0,x24
7101cce078  bl 0x7103238c50
7101cce07c  tst x0,#0xffffffffff
7101cce080  str x0,[sp, #0x38]
7101cce084  b.eq 0x7101cce09c
7101cce088  ldr x0,[x19]
7101cce08c  ldrsw x2,[x0, #0x70]
7101cce090  ldr w3,[x0, #0x68]
7101cce094  add x1,sp,#0x38
7101cce098  bl 0x710323c4e0
7101cce09c  ldp x9,x8,[x21, #0x130]
7101cce0a0  cmp x9,x8
7101cce0a4  b.cs 0x7101cce0bc
7101cce0a8  stp x24,x20,[x9]
7101cce0ac  ldr x8,[x21, #0x130]
7101cce0b0  add x8,x8,#0x10
7101cce0b4  str x8,[x21, #0x130]
7101cce0b8  b 0x7101cce1b4
7101cce0bc  mov x0,x23
7101cce0c0  ldr x23,[x23]
7101cce0c4  sub x25,x9,x23
7101cce0c8  asr x27,x25,#0x4
7101cce0cc  add x9,x27,#0x1
7101cce0d0  lsr x10,x9,#0x3c
7101cce0d4  cbnz x10,0x7101cce220
7101cce0d8  sub x8,x8,x23
7101cce0dc  asr x10,x8,#0x4
7101cce0e0  orr x11,xzr,#0x7fffffffffffffe
7101cce0e4  cmp x10,x11
7101cce0e8  b.hi 0x7101cce108
7101cce0ec  asr x8,x8,#0x3
7101cce0f0  cmp x8,x9
7101cce0f4  csel x28,x9,x8,cc
7101cce0f8  cbz x28,0x7101cce16c
7101cce0fc  lsr x8,x28,#0x3c
7101cce100  cbz x8,0x7101cce10c
7101cce104  bl 0x71039c2650
7101cce108  orr x28,xzr,#0xfffffffffffffff
7101cce10c  lsl x8,x28,#0x4
7101cce110  cmp x8,#0x0
7101cce114  csinc x26,x8,xzr,ne
7101cce118  mov w0,#0x10
7101cce11c  mov x1,x26
7101cce120  bl 0x710392e290
7101cce124  mov x22,x0
7101cce128  cbnz x0,0x7101cce170
7101cce12c  adrp x8,0x7105332000
7101cce130  ldr x0,[x8, #0xf00]
7101cce134  cbz x0,0x7101cce16c
7101cce138  str wzr,[sp, #0x4c]
7101cce13c  str x26,[sp, #0x38]
7101cce140  ldr x8,[x0]
7101cce144  ldr x8,[x8, #0x30]
7101cce148  add x1,sp,#0x4c
7101cce14c  add x2,sp,#0x38
7101cce150  blr x8
7101cce154  tbz w0,#0x0,0x7101cce16c
7101cce158  mov w0,#0x10
7101cce15c  mov x1,x26
7101cce160  bl 0x710392e290
7101cce164  mov x22,x0
7101cce168  cbnz x0,0x7101cce170
7101cce16c  mov x22,xzr
7101cce170  add x8,x22,x27, LSL #0x4
7101cce174  add x19,x22,x28, LSL #0x4
7101cce178  cmp x25,#0x1
7101cce17c  stp x24,x20,[x8]
7101cce180  add x20,x8,#0x10
7101cce184  b.lt 0x7101cce198
7101cce188  mov x0,x22
7101cce18c  mov x1,x23
7101cce190  mov x2,x25
7101cce194  bl 0x71039c00e0
7101cce198  ldp x26,x8,[sp, #0x28]
7101cce19c  str x19,[x8, #0x138]
7101cce1a0  stp x22,x20,[x8, #0x128]
7101cce1a4  ldr x27,[sp, #0x18]
7101cce1a8  cbz x23,0x7101cce1b4
7101cce1ac  mov x0,x23
7101cce1b0  bl 0x710392eb40
7101cce1b4  ldr w19,[x26, #0x8]
7101cce1b8  adrp x1,0x71042e7000
7101cce1bc  add x1,x1,#0x3ae
7101cce1c0  add x8,sp,#0x38
7101cce1c4  mov x0,x27
7101cce1c8  bl 0x7103776910
7101cce1cc  ubfx w2,w19,#0xc,#0x4
7101cce1d0  ubfx w3,w19,#0x5,#0x6
7101cce1d4  and w4,w19,#0x1f
7101cce1d8  add x0,sp,#0x38
7101cce1dc  orr w1,wzr,#0x3
7101cce1e0  bl 0x710377a310
7101cce1e4  ldr x0,[sp, #0x40]
7101cce1e8  adrp x8,0x710523d000
7101cce1ec  add x8,x8,#0x9a8
7101cce1f0  stp x8,xzr,[sp, #0x38]
7101cce1f4  cbz x0,0x7101cce1fc
7101cce1f8  bl 0x710392eb40
7101cce1fc  ldp x29,x30,[sp, #0xa0]
7101cce200  ldp x20,x19,[sp, #0x90]
7101cce204  ldp x22,x21,[sp, #0x80]
7101cce208  ldp x24,x23,[sp, #0x70]
7101cce20c  ldp x26,x25,[sp, #0x60]
7101cce210  ldp x28,x27,[sp, #0x50]
7101cce214  add sp,sp,#0xb0
7101cce218  ret
7101cce21c  ldr x0,[sp, #0x20]
7101cce220  bl 0x71039c0c00
