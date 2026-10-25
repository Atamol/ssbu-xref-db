// addr:      7101eddd30
// offset:    0x1eddd30
// name:      FUN_7101eddd30
// mangled:   
// size:      1372

7101eddd30  sub sp,sp,#0xf0
7101eddd34  str d10,[sp, #0x70]
7101eddd38  stp d9,d8,[sp, #0x80]
7101eddd3c  stp x28,x27,[sp, #0x90]
7101eddd40  stp x26,x25,[sp, #0xa0]
7101eddd44  stp x24,x23,[sp, #0xb0]
7101eddd48  stp x22,x21,[sp, #0xc0]
7101eddd4c  stp x20,x19,[sp, #0xd0]
7101eddd50  stp x29,x30,[sp, #0xe0]
7101eddd54  add x29,sp,#0xe0
7101eddd58  adrp x8,0x71050b3000
7101eddd5c  add x8,x8,#0xa30
7101eddd60  strb wzr,[x0, #0x58]
7101eddd64  stp x8,xzr,[x0]
7101eddd68  orr x8,xzr,#0x1ffffffff
7101eddd6c  stp xzr,x8,[x0, #0x60]
7101eddd70  mov w8,#0x1
7101eddd74  mov w19,w2
7101eddd78  stp xzr,xzr,[x0, #0x10]
7101eddd7c  stp xzr,xzr,[x0, #0x48]
7101eddd80  stp x0,x1,[sp, #0x10]
7101eddd84  str x1,[x0, #0x78]
7101eddd88  mov w1,#0x68
7101eddd8c  strb w8,[x0, #0x70]
7101eddd90  mov w0,#0x10
7101eddd94  bl 0x710392e290
7101eddd98  mov x21,x0
7101eddd9c  cbnz x0,0x7101eddde8
7101eddda0  adrp x8,0x7105332000
7101eddda4  ldr x0,[x8, #0xf00]
7101eddda8  cbz x0,0x7101eddde4
7101edddac  mov w8,#0x68
7101edddb0  str wzr,[sp, #0x50]
7101edddb4  add x1,sp,#0x50
7101edddb8  str x8,[sp, #0x60]
7101edddbc  ldr x8,[x0]
7101edddc0  ldr x8,[x8, #0x30]
7101edddc4  add x2,sp,#0x60
7101edddc8  blr x8
7101edddcc  tbz w0,#0x0,0x7101eddde4
7101edddd0  mov w1,#0x68
7101edddd4  mov w0,#0x10
7101edddd8  bl 0x710392e290
7101eddddc  mov x21,x0
7101eddde0  cbnz x0,0x7101eddde8
7101eddde4  mov x21,xzr
7101eddde8  mov w8,#0x1000
7101edddec  str w8,[x21, #0x8]
7101edddf0  mov x8,x21
7101edddf4  stp xzr,xzr,[x21, #0x18]
7101edddf8  add x0,x21,#0x50
7101edddfc  str xzr,[x21, #0x10]
7101edde00  str xzr,[x8, #0x30]!
7101edde04  str x8,[x21, #0x28]
7101edde08  adrp x8,0x71050b3000
7101edde0c  add x8,x8,#0xa68
7101edde10  stp xzr,xzr,[x21, #0x38]
7101edde14  str x8,[x21]
7101edde18  str w19,[x21, #0x48]
7101edde1c  str x0,[sp, #0x8]
7101edde20  bl 0x7101edd860
7101edde24  ldr x1,[sp, #0x18]
7101edde28  mov x3,#0x2742
7101edde2c  movk x3,#0xc643, LSL #16
7101edde30  adrp x2,0x71050b3000
7101edde34  add x2,x2,#0xa10
7101edde38  movk x3,#0x25, LSL #32
7101edde3c  mov w4,#0x1
7101edde40  mov x0,x21
7101edde44  bl 0x71032cb040
7101edde48  adrp x8,0x7105329000
7101edde4c  ldr x8,[x8, #0xde8]
7101edde50  ldr x1,[x21, #0x40]
7101edde54  ldr x0,[x8, #0x8]
7101edde58  bl 0x71023d4940
7101edde5c  ldr x8,[x21, #0x40]
7101edde60  ldr x8,[x8]
7101edde64  cbz x8,0x7101edde70
7101edde68  ldr x22,[x8]
7101edde6c  b 0x7101edde74
7101edde70  mov x22,xzr
7101edde74  adrp x19,0x7104281000
7101edde78  add x19,x19,#0x295
7101edde7c  mov x0,x22
7101edde80  mov x1,x19
7101edde84  bl 0x71038f7260
7101edde88  ldr x8,[x22, #0x10]
7101edde8c  ldp x9,x10,[x8, #-0x10]
7101edde90  stp x9,x10,[x8]
7101edde94  ldr x8,[x22, #0x10]
7101edde98  add x9,x8,#0x10
7101edde9c  sub x1,x8,#0x10
7101eddea0  adrp x2,0x71042a1000
7101eddea4  add x2,x2,#0xcc7
7101eddea8  mov x0,x22
7101eddeac  str x9,[x22, #0x10]
7101eddeb0  bl 0x71038f5390
7101eddeb4  adrp x1,0x71050b3000
7101eddeb8  add x1,x1,#0xaa0
7101eddebc  mov x0,x22
7101eddec0  mov w2,wzr
7101eddec4  bl 0x71038f9510
7101eddec8  ldr x8,[x22, #0x10]
7101eddecc  sub x8,x8,#0x10
7101edded0  mov w1,#0x8
7101edded4  mov x0,x22
7101edded8  str x8,[x22, #0x10]
7101eddedc  bl 0x71038f6930
7101eddee0  str x21,[x0]
7101eddee4  ldr x8,[x22, #0x18]
7101eddee8  add x1,x8,#0x40
7101eddeec  mov x0,x22
7101eddef0  mov x2,x19
7101eddef4  bl 0x71038f4d40
7101eddef8  orr w1,wzr,#0xfffffffe
7101eddefc  mov x0,x22
7101eddf00  bl 0x71038f5c00
7101eddf04  cbz x22,0x7101eddf84
7101eddf08  ldr x8,[x22, #0x18]
7101eddf0c  ldr x8,[x8, #0x40]
7101eddf10  ldr w9,[x8, #0xc]
7101eddf14  cmp w9,#0x2
7101eddf18  b.cc 0x7101eddf28
7101eddf1c  ldr x8,[x8, #0x10]
7101eddf20  add x1,x8,#0x10
7101eddf24  b 0x7101eddf74
7101eddf28  ldr x9,[x8, #0x18]
7101eddf2c  ldrb w8,[x8, #0xb]
7101eddf30  mov w10,#0xffffffff
7101eddf34  lsl x8,x10,x8
7101eddf38  mvn w8,w8
7101eddf3c  and x8,x8,#0x2
7101eddf40  add x1,x9,x8, LSL #0x5
7101eddf44  adrp x8,0x7104862000
7101eddf48  add x8,x8,#0x960
7101eddf4c  ldr w9,[x1, #0x18]
7101eddf50  cmp w9,#0x13
7101eddf54  b.ne 0x7101eddf64
7101eddf58  ldr x9,[x1, #0x10]
7101eddf5c  cmp x9,#0x2
7101eddf60  b.eq 0x7101eddf74
7101eddf64  ldrsw x9,[x1, #0x1c]
7101eddf68  add x1,x1,x9, LSL #0x5
7101eddf6c  cbnz w9,0x7101eddf4c
7101eddf70  mov x1,x8
7101eddf74  adrp x2,0x7104281000
7101eddf78  add x2,x2,#0x295
7101eddf7c  mov x0,x22
7101eddf80  bl 0x71038f5390
7101eddf84  ldr x8,[x21, #0x40]
7101eddf88  ldr x0,[x8]
7101eddf8c  cbz x0,0x7101eddff0
7101eddf90  adrp x1,0x710435b000
7101eddf94  add x1,x1,#0xf91
7101eddf98  adrp x2,0x71042b2000
7101eddf9c  add x2,x2,#0xa84
7101eddfa0  mov w3,wzr
7101eddfa4  bl 0x7103375650
7101eddfa8  ldr x8,[x21, #0x40]
7101eddfac  ldr x0,[x8]
7101eddfb0  cbz x0,0x7101eddff0
7101eddfb4  adrp x1,0x710433a000
7101eddfb8  add x1,x1,#0x9bb
7101eddfbc  adrp x2,0x71042b2000
7101eddfc0  add x2,x2,#0xa84
7101eddfc4  mov w3,#0x1
7101eddfc8  bl 0x7103375650
7101eddfcc  ldr x8,[x21, #0x40]
7101eddfd0  ldr x0,[x8]
7101eddfd4  cbz x0,0x7101eddff0
7101eddfd8  adrp x1,0x71042b4000
7101eddfdc  add x1,x1,#0xbc5
7101eddfe0  adrp x2,0x71042b2000
7101eddfe4  add x2,x2,#0xa84
7101eddfe8  mov w3,#0x2
7101eddfec  bl 0x7103375650
7101eddff0  ldp x19,x9,[x21, #0x50]
7101eddff4  sub x8,x9,x19
7101eddff8  orr x10,xzr,#-0x5555555555555556
7101eddffc  movk x10,#0xaaab
7101ede000  asr x8,x8,#0x3
7101ede004  mul x8,x8,x10
7101ede008  cmp w8,#0x1
7101ede00c  b.lt 0x7101ede25c
7101ede010  cmp x9,x19
7101ede014  b.eq 0x7101ede254
7101ede018  fmov s8,wzr
7101ede01c  fmov s9,0x3f800000
7101ede020  mov x22,#0x4fdd
7101ede024  movk x22,#0x4934, LSL #16
7101ede028  mov x26,xzr
7101ede02c  mov x23,xzr
7101ede030  sxtw x27,w8
7101ede034  movk x22,#0xd, LSL #32
7101ede038  adrp x28,0x710523d000
7101ede03c  add x28,x28,#0x9a8
7101ede040  adrp x20,0x710523d000
7101ede044  add x20,x20,#0x988
7101ede048  mov x0,x21
7101ede04c  adrp x1,0x7104319000
7101ede050  add x1,x1,#0x68f
7101ede054  bl 0x71032cbb00
7101ede058  ldr x8,[x0]
7101ede05c  ldr x8,[x8]
7101ede060  add x0,x8,#0x8
7101ede064  add x8,sp,#0x50
7101ede068  adrp x1,0x7104292000
7101ede06c  add x1,x1,#0x492
7101ede070  mov w2,w23
7101ede074  bl 0x7103776640
7101ede078  add x8,sp,#0x40
7101ede07c  add x0,sp,#0x50
7101ede080  adrp x1,0x7104308000
7101ede084  add x1,x1,#0xbc1
7101ede088  bl 0x7103776910
7101ede08c  add x24,x19,x26
7101ede090  ldr x1,[x24, #0x8]
7101ede094  ldr w2,[x24, #0x10]
7101ede098  ldr x0,[sp, #0x18]
7101ede09c  mov w3,wzr
7101ede0a0  bl 0x710323f330
7101ede0a4  ldr x19,[sp, #0x48]
7101ede0a8  mov x1,x0
7101ede0ac  mov x0,x19
7101ede0b0  bl 0x7103778b80
7101ede0b4  adrp x8,0x710532f000
7101ede0b8  ldr x8,[x8, #0x730]
7101ede0bc  ldr x25,[x8, #0x8]
7101ede0c0  ldr x1,[x24, #0x8]
7101ede0c4  ldr w2,[x24, #0x10]
7101ede0c8  ldr x0,[x25, #0x2a8]
7101ede0cc  bl 0x7103280ec0
7101ede0d0  ldr x8,[x25, #0x2a8]
7101ede0d4  ldr x25,[x8, #0x8]
7101ede0d8  mov v0.16B,v8.16B
7101ede0dc  mov w24,w0
7101ede0e0  mov x2,#0x9b76
7101ede0e4  movk x2,#0x9ad9, LSL #16
7101ede0e8  mov w1,w24
7101ede0ec  movk x2,#0x10, LSL #32
7101ede0f0  mov x0,x25
7101ede0f4  bl 0x710326ad60
7101ede0f8  str d0,[sp, #0x30]
7101ede0fc  mov v0.16B,v8.16B
7101ede100  mov x2,#0xabe0
7101ede104  movk x2,#0xedde, LSL #16
7101ede108  mov x0,x25
7101ede10c  mov w1,w24
7101ede110  movk x2,#0x10, LSL #32
7101ede114  bl 0x710326ad60
7101ede118  str d0,[sp, #0x20]
7101ede11c  mov v0.16B,v9.16B
7101ede120  mov x0,x25
7101ede124  mov w1,w24
7101ede128  mov x2,x22
7101ede12c  bl 0x710326ad60
7101ede130  mov w0,#0x10
7101ede134  mov w1,#0x20
7101ede138  mov v10.16B,v0.16B
7101ede13c  bl 0x710392e290
7101ede140  mov x24,x0
7101ede144  cbnz x0,0x7101ede190
7101ede148  adrp x8,0x7105332000
7101ede14c  ldr x0,[x8, #0xf00]
7101ede150  cbz x0,0x7101ede18c
7101ede154  mov w8,#0x20
7101ede158  stur wzr,[x29, #-0x64]
7101ede15c  sub x1,x29,#0x64
7101ede160  str x8,[sp, #0x60]
7101ede164  ldr x8,[x0]
7101ede168  ldr x8,[x8, #0x30]
7101ede16c  add x2,sp,#0x60
7101ede170  blr x8
7101ede174  tbz w0,#0x0,0x7101ede18c
7101ede178  mov w0,#0x10
7101ede17c  mov w1,#0x20
7101ede180  bl 0x710392e290
7101ede184  mov x24,x0
7101ede188  cbnz x0,0x7101ede190
7101ede18c  mov x24,xzr
7101ede190  stp xzr,xzr,[x24, #0x10]
7101ede194  movi v0.2D,#0x0
7101ede198  stp xzr,xzr,[x24]
7101ede19c  ldr x8,[x19]
7101ede1a0  ldr q1,[sp, #0x30]
7101ede1a4  mov v0.S[0x0],v1.S[0x0]
7101ede1a8  str x8,[x24]
7101ede1ac  ldr x8,[x19, #0x8]
7101ede1b0  str x8,[x24, #0x8]
7101ede1b4  ldr x19,[sp, #0x48]
7101ede1b8  ldr q1,[sp, #0x20]
7101ede1bc  ldr x8,[x19, #0x10]
7101ede1c0  mov v0.S[0x1],v1.S[0x0]
7101ede1c4  str x8,[x24, #0x10]
7101ede1c8  ldr x8,[x19, #0x18]
7101ede1cc  str x8,[x24, #0x18]
7101ede1d0  add x1,sp,#0x60
7101ede1d4  str q0,[sp, #0x60]
7101ede1d8  mov v0.16B,v10.16B
7101ede1dc  mov x0,x24
7101ede1e0  bl 0x7103779770
7101ede1e4  cbz x24,0x7101ede1f0
7101ede1e8  mov x0,x24
7101ede1ec  bl 0x710392eb40
7101ede1f0  stp x28,xzr,[sp, #0x40]
7101ede1f4  cbz x19,0x7101ede200
7101ede1f8  mov x0,x19
7101ede1fc  bl 0x710392eb40
7101ede200  ldr x19,[sp, #0x58]
7101ede204  stp x20,xzr,[sp, #0x50]
7101ede208  cbz x19,0x7101ede224
7101ede20c  ldr x0,[x19, #0x18]
7101ede210  stp x28,xzr,[x19, #0x10]
7101ede214  cbz x0,0x7101ede21c
7101ede218  bl 0x710392eb40
7101ede21c  mov x0,x19
7101ede220  bl 0x710392eb40
7101ede224  add x23,x23,#0x1
7101ede228  cmp x23,x27
7101ede22c  b.ge 0x7101ede25c
7101ede230  ldp x19,x8,[x21, #0x50]
7101ede234  sub x8,x8,x19
7101ede238  orr x9,xzr,#-0x5555555555555556
7101ede23c  movk x9,#0xaaab
7101ede240  asr x8,x8,#0x3
7101ede244  mul x8,x8,x9
7101ede248  add x26,x26,#0x18
7101ede24c  cmp x8,x23
7101ede250  b.hi 0x7101ede048
7101ede254  ldr x0,[sp, #0x8]
7101ede258  bl 0x71039c1330
7101ede25c  ldr x8,[sp, #0x10]
7101ede260  str x21,[x8, #0x80]
7101ede264  ldr d10,[sp, #0x70]
7101ede268  ldp d9,d8,[sp, #0x80]
7101ede26c  ldp x29,x30,[sp, #0xe0]
7101ede270  ldp x20,x19,[sp, #0xd0]
7101ede274  ldp x22,x21,[sp, #0xc0]
7101ede278  ldp x24,x23,[sp, #0xb0]
7101ede27c  ldp x26,x25,[sp, #0xa0]
7101ede280  ldp x28,x27,[sp, #0x90]
7101ede284  add sp,sp,#0xf0
7101ede288  ret
