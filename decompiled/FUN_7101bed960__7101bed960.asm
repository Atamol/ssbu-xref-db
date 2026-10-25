// addr:      7101bed960
// offset:    0x1bed960
// name:      FUN_7101bed960
// mangled:   
// size:      3384

7101bed960  str d14,[sp, #-0xa0]!
7101bed964  stp d13,d12,[sp, #0x10]
7101bed968  stp d11,d10,[sp, #0x20]
7101bed96c  stp d9,d8,[sp, #0x30]
7101bed970  stp x28,x27,[sp, #0x40]
7101bed974  stp x26,x25,[sp, #0x50]
7101bed978  stp x24,x23,[sp, #0x60]
7101bed97c  stp x22,x21,[sp, #0x70]
7101bed980  stp x20,x19,[sp, #0x80]
7101bed984  stp x29,x30,[sp, #0x90]
7101bed988  add x29,sp,#0x90
7101bed98c  ldr x8,[x0, #0x18]
7101bed990  ldr x8,[x8, #0x18]
7101bed994  mov x20,x0
7101bed998  cmp x8,#0x1
7101bed99c  str x1,[sp, #0x8]
7101bed9a0  b.lt 0x7101bed9ac
7101bed9a4  mov x0,x20
7101bed9a8  bl 0x71038fec40
7101bed9ac  mov x0,x20
7101bed9b0  bl 0x710391e050
7101bed9b4  ldr x8,[x20, #0x10]
7101bed9b8  mov w9,#0x45
7101bed9bc  str x0,[x8]
7101bed9c0  str w9,[x8, #0x8]
7101bed9c4  ldr x8,[x20, #0x10]
7101bed9c8  add x8,x8,#0x10
7101bed9cc  str x8,[x20, #0x10]
7101bed9d0  ldr x8,[sp, #0x8]
7101bed9d4  ldp x23,x8,[x8]
7101bed9d8  cmp x8,x23
7101bed9dc  b.eq 0x7101bee66c
7101bed9e0  adrp x8,0x7104472000
7101bed9e4  ldr s9,[x8, #0xc34]
7101bed9e8  adrp x8,0x7104473000
7101bed9ec  ldr s10,[x8, #0x20c]
7101bed9f0  adrp x8,0x7104472000
7101bed9f4  ldr s11,[x8, #0xf0c]
7101bed9f8  adrp x8,0x7104472000
7101bed9fc  ldr s12,[x8, #0xb8c]
7101beda00  adrp x8,0x7104473000
7101beda04  ldr s8,[x8, #0x730]
7101beda08  adrp x8,0x7104473000
7101beda0c  ldr s13,[x8, #0x844]
7101beda10  mov w26,#0x50
7101beda14  mov w28,#0x13
7101beda18  adrp x25,0x7104471000
7101beda1c  mov w22,#0x1
7101beda20  ldr x8,[x20, #0x18]
7101beda24  ldr x8,[x8, #0x18]
7101beda28  cmp x8,#0x1
7101beda2c  b.lt 0x7101beda38
7101beda30  mov x0,x20
7101beda34  bl 0x71038fec40
7101beda38  mov x0,x20
7101beda3c  bl 0x710391e050
7101beda40  ldr x8,[x20, #0x10]
7101beda44  mov w9,#0x45
7101beda48  str w9,[x8, #0x8]
7101beda4c  str x0,[x8]
7101beda50  ldr x8,[x20, #0x10]
7101beda54  add x9,x8,#0x10
7101beda58  str x9,[x20, #0x10]
7101beda5c  add x23,x23,x26
7101beda60  ldursw x9,[x23, #-0x50]
7101beda64  str x9,[x8, #0x10]
7101beda68  str w28,[x8, #0x18]
7101beda6c  ldr x8,[x20, #0x10]
7101beda70  add x9,x8,#0x10
7101beda74  sub x1,x8,#0x10
7101beda78  mov x0,x20
7101beda7c  adrp x2,0x7104431000
7101beda80  add x2,x2,#0xcb9
7101beda84  str x9,[x20, #0x10]
7101beda88  bl 0x71038f5390
7101beda8c  ldur w8,[x23, #-0x50]
7101beda90  cmp w8,#0x2
7101beda94  b.ne 0x7101bedaa8
7101beda98  ldur x1,[x23, #-0x30]
7101beda9c  ldr x8,[x20, #0x10]
7101bedaa0  cbnz x1,0x7101bedaf4
7101bedaa4  b 0x7101bedb04
7101bedaa8  ldr x9,[x20, #0x10]
7101bedaac  sub x8,x23,#0x40
7101bedab0  str x8,[x9]
7101bedab4  mov w8,#0x2
7101bedab8  str w8,[x9, #0x8]
7101bedabc  ldr x8,[x20, #0x10]
7101bedac0  add x9,x8,#0x10
7101bedac4  sub x1,x8,#0x10
7101bedac8  mov x0,x20
7101bedacc  adrp x2,0x7104454000
7101bedad0  add x2,x2,#0x934
7101bedad4  str x9,[x20, #0x10]
7101bedad8  bl 0x71038f5390
7101bedadc  ldur w8,[x23, #-0x50]
7101bedae0  ldur x1,[x23, #-0x30]
7101bedae4  cmp w8,#0x2
7101bedae8  b.ne 0x7101bedb18
7101bedaec  ldr x8,[x20, #0x10]
7101bedaf0  cbz x1,0x7101bedb04
7101bedaf4  mov w9,#0x2
7101bedaf8  str x1,[x8]
7101bedafc  str w9,[x8, #0x8]
7101bedb00  b 0x7101bedb08
7101bedb04  str wzr,[x8, #0x8]
7101bedb08  ldr x8,[x20, #0x10]
7101bedb0c  add x8,x8,#0x10
7101bedb10  str x8,[x20, #0x10]
7101bedb14  b 0x7101bedb24
7101bedb18  mov x0,x20
7101bedb1c  bl 0x71038f4b20
7101bedb20  ldr x8,[x20, #0x10]
7101bedb24  sub x1,x8,#0x20
7101bedb28  mov x0,x20
7101bedb2c  adrp x2,0x71043ac000
7101bedb30  add x2,x2,#0xc4
7101bedb34  bl 0x71038f5390
7101bedb38  ldur x8,[x23, #-0x28]
7101bedb3c  and x9,x8,#0xfff
7101bedb40  mov w11,#0x4240
7101bedb44  movk w11,#0xf, LSL #16
7101bedb48  mov x19,x11
7101bedb4c  mul x9,x9,x11
7101bedb50  ubfx x10,x8,#0xc,#0x4
7101bedb54  mov w11,#0x3e8
7101bedb58  mov x21,x11
7101bedb5c  madd x9,x10,x11,x9
7101bedb60  ubfx x8,x8,#0x10,#0x5
7101bedb64  add x8,x9,x8
7101bedb68  ldr x9,[x20, #0x10]
7101bedb6c  str x8,[x9]
7101bedb70  str w28,[x9, #0x8]
7101bedb74  ldr x8,[x20, #0x10]
7101bedb78  add x9,x8,#0x10
7101bedb7c  sub x1,x8,#0x10
7101bedb80  mov x0,x20
7101bedb84  adrp x2,0x71043cf000
7101bedb88  add x2,x2,#0x3aa
7101bedb8c  str x9,[x20, #0x10]
7101bedb90  bl 0x71038f5390
7101bedb94  ldur x8,[x23, #-0x28]
7101bedb98  ubfx x9,x8,#0x15,#0x5
7101bedb9c  mul x9,x9,x19
7101bedba0  ubfx x10,x8,#0x1a,#0x6
7101bedba4  ubfx x8,x8,#0x20,#0x6
7101bedba8  madd x9,x10,x21,x9
7101bedbac  add x8,x9,x8
7101bedbb0  ldr x9,[x20, #0x10]
7101bedbb4  str x8,[x9]
7101bedbb8  str w28,[x9, #0x8]
7101bedbbc  ldr x8,[x20, #0x10]
7101bedbc0  add x9,x8,#0x10
7101bedbc4  sub x1,x8,#0x10
7101bedbc8  mov x0,x20
7101bedbcc  adrp x2,0x7104401000
7101bedbd0  add x2,x2,#0x40c
7101bedbd4  str x9,[x20, #0x10]
7101bedbd8  bl 0x71038f5390
7101bedbdc  ldur x8,[x23, #-0x20]
7101bedbe0  and x9,x8,#0xfff
7101bedbe4  mul x9,x9,x19
7101bedbe8  ubfx x10,x8,#0xc,#0x4
7101bedbec  ubfx x8,x8,#0x10,#0x5
7101bedbf0  madd x9,x10,x21,x9
7101bedbf4  add x8,x9,x8
7101bedbf8  ldr x9,[x20, #0x10]
7101bedbfc  str x8,[x9]
7101bedc00  str w28,[x9, #0x8]
7101bedc04  ldr x8,[x20, #0x10]
7101bedc08  add x9,x8,#0x10
7101bedc0c  sub x1,x8,#0x10
7101bedc10  mov x0,x20
7101bedc14  adrp x2,0x710433a000
7101bedc18  add x2,x2,#0xba
7101bedc1c  str x9,[x20, #0x10]
7101bedc20  bl 0x71038f5390
7101bedc24  ldur x8,[x23, #-0x20]
7101bedc28  ubfx x9,x8,#0x15,#0x5
7101bedc2c  mul x9,x9,x19
7101bedc30  ubfx x10,x8,#0x1a,#0x6
7101bedc34  ubfx x8,x8,#0x20,#0x6
7101bedc38  madd x9,x10,x21,x9
7101bedc3c  add x8,x9,x8
7101bedc40  ldr x9,[x20, #0x10]
7101bedc44  str x8,[x9]
7101bedc48  str w28,[x9, #0x8]
7101bedc4c  ldr x8,[x20, #0x10]
7101bedc50  add x9,x8,#0x10
7101bedc54  sub x1,x8,#0x10
7101bedc58  mov x0,x20
7101bedc5c  adrp x2,0x7104454000
7101bedc60  add x2,x2,#0x93c
7101bedc64  str x9,[x20, #0x10]
7101bedc68  bl 0x71038f5390
7101bedc6c  ldr x8,[x20, #0x18]
7101bedc70  ldr x8,[x8, #0x18]
7101bedc74  cmp x8,#0x1
7101bedc78  b.lt 0x7101bedc84
7101bedc7c  mov x0,x20
7101bedc80  bl 0x71038fec40
7101bedc84  mov x0,x20
7101bedc88  bl 0x710391e050
7101bedc8c  ldr x8,[x20, #0x10]
7101bedc90  mov w9,#0x45
7101bedc94  str x0,[x8]
7101bedc98  str w9,[x8, #0x8]
7101bedc9c  ldr x8,[x20, #0x10]
7101bedca0  add x9,x8,#0x10
7101bedca4  str x9,[x20, #0x10]
7101bedca8  ldur x9,[x23, #-0x18]
7101bedcac  ldrsw x9,[x9]
7101bedcb0  str x9,[x8, #0x10]
7101bedcb4  str w28,[x8, #0x18]
7101bedcb8  ldr x8,[x20, #0x10]
7101bedcbc  add x9,x8,#0x10
7101bedcc0  sub x1,x8,#0x10
7101bedcc4  mov x0,x20
7101bedcc8  adrp x2,0x710442f000
7101bedccc  add x2,x2,#0xe4d
7101bedcd0  str x9,[x20, #0x10]
7101bedcd4  bl 0x71038f5390
7101bedcd8  ldur x8,[x23, #-0x18]
7101bedcdc  ldrsw x8,[x8, #0x4]
7101bedce0  ldr x9,[x20, #0x10]
7101bedce4  str x8,[x9]
7101bedce8  str w28,[x9, #0x8]
7101bedcec  ldr x8,[x20, #0x10]
7101bedcf0  add x9,x8,#0x10
7101bedcf4  sub x1,x8,#0x10
7101bedcf8  mov x0,x20
7101bedcfc  adrp x2,0x71042d2000
7101bedd00  add x2,x2,#0xf87
7101bedd04  str x9,[x20, #0x10]
7101bedd08  bl 0x71038f5390
7101bedd0c  ldur x8,[x23, #-0x18]
7101bedd10  ldr w8,[x8, #0x8]
7101bedd14  ldr x9,[x20, #0x10]
7101bedd18  orr w19,wzr,#0x3
7101bedd1c  str w19,[x9, #0x8]
7101bedd20  str w8,[x9]
7101bedd24  ldr x8,[x20, #0x10]
7101bedd28  add x9,x8,#0x10
7101bedd2c  sub x1,x8,#0x10
7101bedd30  mov x0,x20
7101bedd34  adrp x2,0x7104454000
7101bedd38  add x2,x2,#0x945
7101bedd3c  str x9,[x20, #0x10]
7101bedd40  bl 0x71038f5390
7101bedd44  ldur x8,[x23, #-0x18]
7101bedd48  ldr w8,[x8, #0xc]
7101bedd4c  ldr x9,[x20, #0x10]
7101bedd50  str w8,[x9]
7101bedd54  str w19,[x9, #0x8]
7101bedd58  ldr x8,[x20, #0x10]
7101bedd5c  add x9,x8,#0x10
7101bedd60  sub x1,x8,#0x10
7101bedd64  mov x0,x20
7101bedd68  adrp x2,0x7104308000
7101bedd6c  add x2,x2,#0x3ab
7101bedd70  str x9,[x20, #0x10]
7101bedd74  bl 0x71038f5390
7101bedd78  ldur x8,[x23, #-0x18]
7101bedd7c  ldrb w8,[x8, #0x10]
7101bedd80  ldr x9,[x20, #0x10]
7101bedd84  str x8,[x9]
7101bedd88  str w28,[x9, #0x8]
7101bedd8c  ldr x8,[x20, #0x10]
7101bedd90  add x9,x8,#0x10
7101bedd94  sub x1,x8,#0x10
7101bedd98  mov x0,x20
7101bedd9c  adrp x2,0x710439d000
7101bedda0  add x2,x2,#0x377
7101bedda4  str x9,[x20, #0x10]
7101bedda8  bl 0x71038f5390
7101beddac  ldur x8,[x23, #-0x18]
7101beddb0  ldrb w8,[x8, #0x11]
7101beddb4  ldr x9,[x20, #0x10]
7101beddb8  str x8,[x9]
7101beddbc  str w28,[x9, #0x8]
7101beddc0  ldr x8,[x20, #0x10]
7101beddc4  add x9,x8,#0x10
7101beddc8  sub x1,x8,#0x10
7101beddcc  mov x0,x20
7101beddd0  adrp x2,0x71042e7000
7101beddd4  add x2,x2,#0x4
7101beddd8  str x9,[x20, #0x10]
7101bedddc  bl 0x71038f5390
7101bedde0  ldur x8,[x23, #-0x18]
7101bedde4  ldrb w8,[x8, #0x12]
7101bedde8  ldr x9,[x20, #0x10]
7101beddec  mov w19,#0x1
7101beddf0  str w19,[x9, #0x8]
7101beddf4  mov x0,x20
7101beddf8  cmp w8,#0x0
7101beddfc  cset w8,ne
7101bede00  str w8,[x9]
7101bede04  ldr x8,[x20, #0x10]
7101bede08  add x9,x8,#0x10
7101bede0c  sub x1,x8,#0x10
7101bede10  adrp x2,0x710438c000
7101bede14  add x2,x2,#0x93b
7101bede18  str x9,[x20, #0x10]
7101bede1c  bl 0x71038f5390
7101bede20  ldur x8,[x23, #-0x18]
7101bede24  ldrb w8,[x8, #0x13]
7101bede28  ldr x9,[x20, #0x10]
7101bede2c  str w19,[x9, #0x8]
7101bede30  mov x0,x20
7101bede34  cmp w8,#0x0
7101bede38  cset w8,ne
7101bede3c  str w8,[x9]
7101bede40  ldr x8,[x20, #0x10]
7101bede44  add x9,x8,#0x10
7101bede48  sub x1,x8,#0x10
7101bede4c  adrp x2,0x7104317000
7101bede50  add x2,x2,#0x7f3
7101bede54  str x9,[x20, #0x10]
7101bede58  bl 0x71038f5390
7101bede5c  ldur x8,[x23, #-0x18]
7101bede60  ldr b0,[x8, #0x14]
7101bede64  ldrb w24,[x8, #0x15]
7101bede68  ucvtf s0,s0
7101bede6c  fdiv s0,s0,s9
7101bede70  ldrb w21,[x8, #0x16]
7101bede74  ldrb w27,[x8, #0x17]
7101bede78  fcmp s0,s10
7101bede7c  b.ls 0x7101bede94
7101bede80  fadd s0,s0,s11
7101bede84  fdiv s0,s0,s12
7101bede88  mov v1.16B,v8.16B
7101bede8c  bl 0x71039c0850
7101bede90  b 0x7101bede9c
7101bede94  ldr s1,[x25, #0xecc]
7101bede98  fdiv s0,s0,s1
7101bede9c  ucvtf s1,w24
7101bedea0  fmul s14,s0,s13
7101bedea4  fdiv s0,s1,s9
7101bedea8  fcmp s0,s10
7101bedeac  b.ls 0x7101bedec4
7101bedeb0  fadd s0,s0,s11
7101bedeb4  fdiv s0,s0,s12
7101bedeb8  mov v1.16B,v8.16B
7101bedebc  bl 0x71039c0850
7101bedec0  b 0x7101bedecc
7101bedec4  ldr s1,[x25, #0xecc]
7101bedec8  fdiv s0,s0,s1
7101bedecc  fmul s0,s0,s13
7101beded0  fcvtzs w19,s0
7101beded4  ucvtf s0,w21
7101beded8  fdiv s0,s0,s9
7101bededc  fcvtzs w24,s14
7101bedee0  fcmp s0,s10
7101bedee4  b.ls 0x7101bedefc
7101bedee8  fadd s0,s0,s11
7101bedeec  fdiv s0,s0,s12
7101bedef0  mov v1.16B,v8.16B
7101bedef4  bl 0x71039c0850
7101bedef8  b 0x7101bedf04
7101bedefc  ldr s1,[x25, #0xecc]
7101bedf00  fdiv s0,s0,s1
7101bedf04  fmul s0,s0,s13
7101bedf08  fcvtzs w8,s0
7101bedf0c  bfm w24,w27,#0x8,#0x7
7101bedf10  bfm w24,w19,#0x18,#0x7
7101bedf14  ldr x9,[x20, #0x10]
7101bedf18  str w28,[x9, #0x8]
7101bedf1c  bfm w24,w8,#0x10,#0x7
7101bedf20  sxtw x8,w24
7101bedf24  str x8,[x9]
7101bedf28  ldr x8,[x20, #0x10]
7101bedf2c  add x9,x8,#0x10
7101bedf30  sub x1,x8,#0x10
7101bedf34  mov x0,x20
7101bedf38  adrp x2,0x7104401000
7101bedf3c  add x2,x2,#0x417
7101bedf40  str x9,[x20, #0x10]
7101bedf44  bl 0x71038f5390
7101bedf48  ldur x8,[x23, #-0x18]
7101bedf4c  ldr b0,[x8, #0x18]
7101bedf50  ldrb w19,[x8, #0x19]
7101bedf54  ucvtf s0,s0
7101bedf58  fdiv s0,s0,s9
7101bedf5c  ldrb w21,[x8, #0x1a]
7101bedf60  ldrb w27,[x8, #0x1b]
7101bedf64  fcmp s0,s10
7101bedf68  b.ls 0x7101bedf80
7101bedf6c  fadd s0,s0,s11
7101bedf70  fdiv s0,s0,s12
7101bedf74  mov v1.16B,v8.16B
7101bedf78  bl 0x71039c0850
7101bedf7c  b 0x7101bedf88
7101bedf80  ldr s1,[x25, #0xecc]
7101bedf84  fdiv s0,s0,s1
7101bedf88  ucvtf s1,w19
7101bedf8c  fmul s14,s0,s13
7101bedf90  fdiv s0,s1,s9
7101bedf94  fcmp s0,s10
7101bedf98  b.ls 0x7101bedfb0
7101bedf9c  fadd s0,s0,s11
7101bedfa0  fdiv s0,s0,s12
7101bedfa4  mov v1.16B,v8.16B
7101bedfa8  bl 0x71039c0850
7101bedfac  b 0x7101bedfb8
7101bedfb0  ldr s1,[x25, #0xecc]
7101bedfb4  fdiv s0,s0,s1
7101bedfb8  fmul s0,s0,s13
7101bedfbc  fcvtzs w19,s0
7101bedfc0  ucvtf s0,w21
7101bedfc4  fdiv s0,s0,s9
7101bedfc8  fcvtzs w24,s14
7101bedfcc  fcmp s0,s10
7101bedfd0  b.ls 0x7101bedfe8
7101bedfd4  fadd s0,s0,s11
7101bedfd8  fdiv s0,s0,s12
7101bedfdc  mov v1.16B,v8.16B
7101bedfe0  bl 0x71039c0850
7101bedfe4  b 0x7101bedff0
7101bedfe8  ldr s1,[x25, #0xecc]
7101bedfec  fdiv s0,s0,s1
7101bedff0  fmul s0,s0,s13
7101bedff4  fcvtzs w8,s0
7101bedff8  bfm w24,w27,#0x8,#0x7
7101bedffc  bfm w24,w19,#0x18,#0x7
7101bee000  ldr x9,[x20, #0x10]
7101bee004  str w28,[x9, #0x8]
7101bee008  bfm w24,w8,#0x10,#0x7
7101bee00c  sxtw x8,w24
7101bee010  str x8,[x9]
7101bee014  ldr x8,[x20, #0x10]
7101bee018  add x9,x8,#0x10
7101bee01c  sub x1,x8,#0x10
7101bee020  mov x0,x20
7101bee024  adrp x2,0x7104454000
7101bee028  add x2,x2,#0x94d
7101bee02c  str x9,[x20, #0x10]
7101bee030  bl 0x71038f5390
7101bee034  ldur x8,[x23, #-0x18]
7101bee038  ldr b0,[x8, #0x1c]
7101bee03c  ldrb w19,[x8, #0x1d]
7101bee040  ucvtf s0,s0
7101bee044  fdiv s0,s0,s9
7101bee048  ldrb w21,[x8, #0x1e]
7101bee04c  ldrb w27,[x8, #0x1f]
7101bee050  fcmp s0,s10
7101bee054  b.ls 0x7101bee06c
7101bee058  fadd s0,s0,s11
7101bee05c  fdiv s0,s0,s12
7101bee060  mov v1.16B,v8.16B
7101bee064  bl 0x71039c0850
7101bee068  b 0x7101bee074
7101bee06c  ldr s1,[x25, #0xecc]
7101bee070  fdiv s0,s0,s1
7101bee074  ucvtf s1,w19
7101bee078  fmul s14,s0,s13
7101bee07c  fdiv s0,s1,s9
7101bee080  fcmp s0,s10
7101bee084  b.ls 0x7101bee09c
7101bee088  fadd s0,s0,s11
7101bee08c  fdiv s0,s0,s12
7101bee090  mov v1.16B,v8.16B
7101bee094  bl 0x71039c0850
7101bee098  b 0x7101bee0a4
7101bee09c  ldr s1,[x25, #0xecc]
7101bee0a0  fdiv s0,s0,s1
7101bee0a4  fmul s0,s0,s13
7101bee0a8  fcvtzs w19,s0
7101bee0ac  ucvtf s0,w21
7101bee0b0  fdiv s0,s0,s9
7101bee0b4  fcvtzs w24,s14
7101bee0b8  fcmp s0,s10
7101bee0bc  b.ls 0x7101bee0d4
7101bee0c0  fadd s0,s0,s11
7101bee0c4  fdiv s0,s0,s12
7101bee0c8  mov v1.16B,v8.16B
7101bee0cc  bl 0x71039c0850
7101bee0d0  b 0x7101bee0dc
7101bee0d4  ldr s1,[x25, #0xecc]
7101bee0d8  fdiv s0,s0,s1
7101bee0dc  fmul s0,s0,s13
7101bee0e0  fcvtzs w8,s0
7101bee0e4  bfm w24,w27,#0x8,#0x7
7101bee0e8  bfm w24,w19,#0x18,#0x7
7101bee0ec  ldr x9,[x20, #0x10]
7101bee0f0  str w28,[x9, #0x8]
7101bee0f4  bfm w24,w8,#0x10,#0x7
7101bee0f8  sxtw x8,w24
7101bee0fc  str x8,[x9]
7101bee100  ldr x8,[x20, #0x10]
7101bee104  add x9,x8,#0x10
7101bee108  sub x1,x8,#0x10
7101bee10c  mov x0,x20
7101bee110  adrp x2,0x710438c000
7101bee114  add x2,x2,#0x942
7101bee118  str x9,[x20, #0x10]
7101bee11c  bl 0x71038f5390
7101bee120  ldr x8,[x20, #0x10]
7101bee124  sub x1,x8,#0x20
7101bee128  mov x0,x20
7101bee12c  adrp x2,0x71043e0000
7101bee130  add x2,x2,#0x39
7101bee134  bl 0x71038f5390
7101bee138  ldr x8,[x20, #0x18]
7101bee13c  ldr x8,[x8, #0x18]
7101bee140  cmp x8,#0x1
7101bee144  b.lt 0x7101bee150
7101bee148  mov x0,x20
7101bee14c  bl 0x71038fec40
7101bee150  mov x0,x20
7101bee154  bl 0x710391e050
7101bee158  ldr x8,[x20, #0x10]
7101bee15c  mov w9,#0x45
7101bee160  str x0,[x8]
7101bee164  str w9,[x8, #0x8]
7101bee168  ldr x8,[x20, #0x10]
7101bee16c  add x9,x8,#0x10
7101bee170  str x9,[x20, #0x10]
7101bee174  ldur x9,[x23, #-0x10]
7101bee178  ldrsw x9,[x9]
7101bee17c  str x9,[x8, #0x10]
7101bee180  str w28,[x8, #0x18]
7101bee184  ldr x8,[x20, #0x10]
7101bee188  add x9,x8,#0x10
7101bee18c  sub x1,x8,#0x10
7101bee190  mov x0,x20
7101bee194  adrp x2,0x710442f000
7101bee198  add x2,x2,#0xe4d
7101bee19c  str x9,[x20, #0x10]
7101bee1a0  bl 0x71038f5390
7101bee1a4  ldur x8,[x23, #-0x10]
7101bee1a8  ldrsw x8,[x8, #0x4]
7101bee1ac  ldr x9,[x20, #0x10]
7101bee1b0  str x8,[x9]
7101bee1b4  str w28,[x9, #0x8]
7101bee1b8  ldr x8,[x20, #0x10]
7101bee1bc  add x9,x8,#0x10
7101bee1c0  sub x1,x8,#0x10
7101bee1c4  mov x0,x20
7101bee1c8  adrp x2,0x71042d2000
7101bee1cc  add x2,x2,#0xf87
7101bee1d0  str x9,[x20, #0x10]
7101bee1d4  bl 0x71038f5390
7101bee1d8  ldur x8,[x23, #-0x10]
7101bee1dc  ldr w8,[x8, #0x8]
7101bee1e0  ldr x9,[x20, #0x10]
7101bee1e4  orr w19,wzr,#0x3
7101bee1e8  str w19,[x9, #0x8]
7101bee1ec  str w8,[x9]
7101bee1f0  ldr x8,[x20, #0x10]
7101bee1f4  add x9,x8,#0x10
7101bee1f8  sub x1,x8,#0x10
7101bee1fc  mov x0,x20
7101bee200  adrp x2,0x7104454000
7101bee204  add x2,x2,#0x945
7101bee208  str x9,[x20, #0x10]
7101bee20c  bl 0x71038f5390
7101bee210  ldur x8,[x23, #-0x10]
7101bee214  ldr w8,[x8, #0xc]
7101bee218  ldr x9,[x20, #0x10]
7101bee21c  str w8,[x9]
7101bee220  str w19,[x9, #0x8]
7101bee224  ldr x8,[x20, #0x10]
7101bee228  add x9,x8,#0x10
7101bee22c  sub x1,x8,#0x10
7101bee230  mov x0,x20
7101bee234  adrp x2,0x7104308000
7101bee238  add x2,x2,#0x3ab
7101bee23c  str x9,[x20, #0x10]
7101bee240  bl 0x71038f5390
7101bee244  ldur x8,[x23, #-0x10]
7101bee248  ldrb w8,[x8, #0x10]
7101bee24c  ldr x9,[x20, #0x10]
7101bee250  str x8,[x9]
7101bee254  str w28,[x9, #0x8]
7101bee258  ldr x8,[x20, #0x10]
7101bee25c  add x9,x8,#0x10
7101bee260  sub x1,x8,#0x10
7101bee264  mov x0,x20
7101bee268  adrp x2,0x710439d000
7101bee26c  add x2,x2,#0x377
7101bee270  str x9,[x20, #0x10]
7101bee274  bl 0x71038f5390
7101bee278  ldur x8,[x23, #-0x10]
7101bee27c  ldrb w8,[x8, #0x11]
7101bee280  ldr x9,[x20, #0x10]
7101bee284  str x8,[x9]
7101bee288  str w28,[x9, #0x8]
7101bee28c  ldr x8,[x20, #0x10]
7101bee290  add x9,x8,#0x10
7101bee294  sub x1,x8,#0x10
7101bee298  mov x0,x20
7101bee29c  adrp x2,0x71042e7000
7101bee2a0  add x2,x2,#0x4
7101bee2a4  str x9,[x20, #0x10]
7101bee2a8  bl 0x71038f5390
7101bee2ac  ldur x8,[x23, #-0x10]
7101bee2b0  ldrb w8,[x8, #0x12]
7101bee2b4  ldr x9,[x20, #0x10]
7101bee2b8  mov w19,#0x1
7101bee2bc  str w19,[x9, #0x8]
7101bee2c0  mov x0,x20
7101bee2c4  cmp w8,#0x0
7101bee2c8  cset w8,ne
7101bee2cc  str w8,[x9]
7101bee2d0  ldr x8,[x20, #0x10]
7101bee2d4  add x9,x8,#0x10
7101bee2d8  sub x1,x8,#0x10
7101bee2dc  adrp x2,0x710438c000
7101bee2e0  add x2,x2,#0x93b
7101bee2e4  str x9,[x20, #0x10]
7101bee2e8  bl 0x71038f5390
7101bee2ec  ldur x8,[x23, #-0x10]
7101bee2f0  ldrb w8,[x8, #0x13]
7101bee2f4  ldr x9,[x20, #0x10]
7101bee2f8  str w19,[x9, #0x8]
7101bee2fc  mov x0,x20
7101bee300  cmp w8,#0x0
7101bee304  cset w8,ne
7101bee308  str w8,[x9]
7101bee30c  ldr x8,[x20, #0x10]
7101bee310  add x9,x8,#0x10
7101bee314  sub x1,x8,#0x10
7101bee318  adrp x2,0x7104317000
7101bee31c  add x2,x2,#0x7f3
7101bee320  str x9,[x20, #0x10]
7101bee324  bl 0x71038f5390
7101bee328  ldur x8,[x23, #-0x10]
7101bee32c  ldr b0,[x8, #0x14]
7101bee330  ldrb w19,[x8, #0x15]
7101bee334  ucvtf s0,s0
7101bee338  fdiv s0,s0,s9
7101bee33c  ldrb w21,[x8, #0x16]
7101bee340  ldrb w27,[x8, #0x17]
7101bee344  fcmp s0,s10
7101bee348  b.ls 0x7101bee360
7101bee34c  fadd s0,s0,s11
7101bee350  fdiv s0,s0,s12
7101bee354  mov v1.16B,v8.16B
7101bee358  bl 0x71039c0850
7101bee35c  b 0x7101bee368
7101bee360  ldr s1,[x25, #0xecc]
7101bee364  fdiv s0,s0,s1
7101bee368  ucvtf s1,w19
7101bee36c  fmul s14,s0,s13
7101bee370  fdiv s0,s1,s9
7101bee374  fcmp s0,s10
7101bee378  b.ls 0x7101bee390
7101bee37c  fadd s0,s0,s11
7101bee380  fdiv s0,s0,s12
7101bee384  mov v1.16B,v8.16B
7101bee388  bl 0x71039c0850
7101bee38c  b 0x7101bee398
7101bee390  ldr s1,[x25, #0xecc]
7101bee394  fdiv s0,s0,s1
7101bee398  fmul s0,s0,s13
7101bee39c  fcvtzs w19,s0
7101bee3a0  ucvtf s0,w21
7101bee3a4  fdiv s0,s0,s9
7101bee3a8  fcvtzs w24,s14
7101bee3ac  fcmp s0,s10
7101bee3b0  b.ls 0x7101bee3c8
7101bee3b4  fadd s0,s0,s11
7101bee3b8  fdiv s0,s0,s12
7101bee3bc  mov v1.16B,v8.16B
7101bee3c0  bl 0x71039c0850
7101bee3c4  b 0x7101bee3d0
7101bee3c8  ldr s1,[x25, #0xecc]
7101bee3cc  fdiv s0,s0,s1
7101bee3d0  fmul s0,s0,s13
7101bee3d4  fcvtzs w8,s0
7101bee3d8  bfm w24,w27,#0x8,#0x7
7101bee3dc  bfm w24,w19,#0x18,#0x7
7101bee3e0  ldr x9,[x20, #0x10]
7101bee3e4  str w28,[x9, #0x8]
7101bee3e8  bfm w24,w8,#0x10,#0x7
7101bee3ec  sxtw x8,w24
7101bee3f0  str x8,[x9]
7101bee3f4  ldr x8,[x20, #0x10]
7101bee3f8  add x9,x8,#0x10
7101bee3fc  sub x1,x8,#0x10
7101bee400  mov x0,x20
7101bee404  adrp x2,0x7104401000
7101bee408  add x2,x2,#0x417
7101bee40c  str x9,[x20, #0x10]
7101bee410  bl 0x71038f5390
7101bee414  ldur x8,[x23, #-0x10]
7101bee418  ldr b0,[x8, #0x18]
7101bee41c  ldrb w19,[x8, #0x19]
7101bee420  ucvtf s0,s0
7101bee424  fdiv s0,s0,s9
7101bee428  ldrb w21,[x8, #0x1a]
7101bee42c  ldrb w27,[x8, #0x1b]
7101bee430  fcmp s0,s10
7101bee434  b.ls 0x7101bee44c
7101bee438  fadd s0,s0,s11
7101bee43c  fdiv s0,s0,s12
7101bee440  mov v1.16B,v8.16B
7101bee444  bl 0x71039c0850
7101bee448  b 0x7101bee454
7101bee44c  ldr s1,[x25, #0xecc]
7101bee450  fdiv s0,s0,s1
7101bee454  ucvtf s1,w19
7101bee458  fmul s14,s0,s13
7101bee45c  fdiv s0,s1,s9
7101bee460  fcmp s0,s10
7101bee464  b.ls 0x7101bee47c
7101bee468  fadd s0,s0,s11
7101bee46c  fdiv s0,s0,s12
7101bee470  mov v1.16B,v8.16B
7101bee474  bl 0x71039c0850
7101bee478  b 0x7101bee484
7101bee47c  ldr s1,[x25, #0xecc]
7101bee480  fdiv s0,s0,s1
7101bee484  fmul s0,s0,s13
7101bee488  fcvtzs w19,s0
7101bee48c  ucvtf s0,w21
7101bee490  fdiv s0,s0,s9
7101bee494  fcvtzs w24,s14
7101bee498  fcmp s0,s10
7101bee49c  b.ls 0x7101bee4b4
7101bee4a0  fadd s0,s0,s11
7101bee4a4  fdiv s0,s0,s12
7101bee4a8  mov v1.16B,v8.16B
7101bee4ac  bl 0x71039c0850
7101bee4b0  b 0x7101bee4bc
7101bee4b4  ldr s1,[x25, #0xecc]
7101bee4b8  fdiv s0,s0,s1
7101bee4bc  fmul s0,s0,s13
7101bee4c0  fcvtzs w8,s0
7101bee4c4  bfm w24,w27,#0x8,#0x7
7101bee4c8  bfm w24,w19,#0x18,#0x7
7101bee4cc  ldr x9,[x20, #0x10]
7101bee4d0  str w28,[x9, #0x8]
7101bee4d4  bfm w24,w8,#0x10,#0x7
7101bee4d8  sxtw x8,w24
7101bee4dc  str x8,[x9]
7101bee4e0  ldr x8,[x20, #0x10]
7101bee4e4  add x9,x8,#0x10
7101bee4e8  sub x1,x8,#0x10
7101bee4ec  mov x0,x20
7101bee4f0  adrp x2,0x7104454000
7101bee4f4  add x2,x2,#0x94d
7101bee4f8  str x9,[x20, #0x10]
7101bee4fc  bl 0x71038f5390
7101bee500  ldur x8,[x23, #-0x10]
7101bee504  ldr b0,[x8, #0x1c]
7101bee508  ldrb w19,[x8, #0x1d]
7101bee50c  ucvtf s0,s0
7101bee510  fdiv s0,s0,s9
7101bee514  ldrb w21,[x8, #0x1e]
7101bee518  ldrb w27,[x8, #0x1f]
7101bee51c  fcmp s0,s10
7101bee520  b.ls 0x7101bee538
7101bee524  fadd s0,s0,s11
7101bee528  fdiv s0,s0,s12
7101bee52c  mov v1.16B,v8.16B
7101bee530  bl 0x71039c0850
7101bee534  b 0x7101bee540
7101bee538  ldr s1,[x25, #0xecc]
7101bee53c  fdiv s0,s0,s1
7101bee540  ucvtf s1,w19
7101bee544  fmul s14,s0,s13
7101bee548  fdiv s0,s1,s9
7101bee54c  fcmp s0,s10
7101bee550  b.ls 0x7101bee568
7101bee554  fadd s0,s0,s11
7101bee558  fdiv s0,s0,s12
7101bee55c  mov v1.16B,v8.16B
7101bee560  bl 0x71039c0850
7101bee564  b 0x7101bee570
7101bee568  ldr s1,[x25, #0xecc]
7101bee56c  fdiv s0,s0,s1
7101bee570  fmul s0,s0,s13
7101bee574  fcvtzs w19,s0
7101bee578  ucvtf s0,w21
7101bee57c  fdiv s0,s0,s9
7101bee580  fcvtzs w24,s14
7101bee584  fcmp s0,s10
7101bee588  b.ls 0x7101bee5a0
7101bee58c  fadd s0,s0,s11
7101bee590  fdiv s0,s0,s12
7101bee594  mov v1.16B,v8.16B
7101bee598  bl 0x71039c0850
7101bee59c  b 0x7101bee5a8
7101bee5a0  ldr s1,[x25, #0xecc]
7101bee5a4  fdiv s0,s0,s1
7101bee5a8  fmul s0,s0,s13
7101bee5ac  fcvtzs w8,s0
7101bee5b0  bfm w24,w27,#0x8,#0x7
7101bee5b4  bfm w24,w19,#0x18,#0x7
7101bee5b8  ldr x9,[x20, #0x10]
7101bee5bc  str w28,[x9, #0x8]
7101bee5c0  bfm w24,w8,#0x10,#0x7
7101bee5c4  sxtw x8,w24
7101bee5c8  str x8,[x9]
7101bee5cc  ldr x8,[x20, #0x10]
7101bee5d0  add x9,x8,#0x10
7101bee5d4  sub x1,x8,#0x10
7101bee5d8  mov x0,x20
7101bee5dc  adrp x2,0x710438c000
7101bee5e0  add x2,x2,#0x942
7101bee5e4  str x9,[x20, #0x10]
7101bee5e8  bl 0x71038f5390
7101bee5ec  ldr x8,[x20, #0x10]
7101bee5f0  sub x1,x8,#0x20
7101bee5f4  mov x0,x20
7101bee5f8  adrp x2,0x71042c4000
7101bee5fc  add x2,x2,#0xce8
7101bee600  bl 0x71038f5390
7101bee604  mov x0,x20
7101bee608  mov x1,x23
7101bee60c  bl 0x71038f4b20
7101bee610  ldr x8,[x20, #0x10]
7101bee614  sub x1,x8,#0x20
7101bee618  mov x0,x20
7101bee61c  adrp x2,0x7104401000
7101bee620  add x2,x2,#0x422
7101bee624  bl 0x71038f5390
7101bee628  orr w1,wzr,#0xfffffffe
7101bee62c  mov x0,x20
7101bee630  mov x2,x22
7101bee634  bl 0x71038f5730
7101bee638  ldr x8,[sp, #0x8]
7101bee63c  ldp x23,x8,[x8]
7101bee640  sub x8,x8,x23
7101bee644  mov x9,#0xcf3d
7101bee648  movk x9,#0x3cf3, LSL #16
7101bee64c  movk x9,#0xf3cf, LSL #32
7101bee650  movk x9,#0xcf3c, LSL #48
7101bee654  asr x8,x8,#0x4
7101bee658  mul x8,x8,x9
7101bee65c  cmp x8,x22
7101bee660  add x22,x22,#0x1
7101bee664  add x26,x26,#0x150
7101bee668  b.hi 0x7101beda20
7101bee66c  ldp d9,d8,[sp, #0x30]
7101bee670  ldp d11,d10,[sp, #0x20]
7101bee674  ldp d13,d12,[sp, #0x10]
7101bee678  ldp x29,x30,[sp, #0x90]
7101bee67c  ldp x20,x19,[sp, #0x80]
7101bee680  ldp x22,x21,[sp, #0x70]
7101bee684  ldp x24,x23,[sp, #0x60]
7101bee688  ldp x26,x25,[sp, #0x50]
7101bee68c  ldp x28,x27,[sp, #0x40]
7101bee690  ldr d14,[sp], #0xa0
7101bee694  ret
