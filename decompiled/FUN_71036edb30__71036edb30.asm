// addr:      71036edb30
// offset:    0x36edb30
// name:      FUN_71036edb30
// mangled:   
// size:      1332

71036edb30  sub sp,sp,#0xa0
71036edb34  stp x28,x27,[sp, #0x40]
71036edb38  stp x26,x25,[sp, #0x50]
71036edb3c  stp x24,x23,[sp, #0x60]
71036edb40  stp x22,x21,[sp, #0x70]
71036edb44  stp x20,x19,[sp, #0x80]
71036edb48  stp x29,x30,[sp, #0x90]
71036edb4c  add x29,sp,#0x90
71036edb50  mov x19,x0
71036edb54  add x0,sp,#0x20
71036edb58  mov x20,x4
71036edb5c  mov x22,x3
71036edb60  mov x23,x2
71036edb64  mov x24,x1
71036edb68  bl 0x7103856830
71036edb6c  ldr x8,[sp, #0x30]
71036edb70  cbz x8,0x71036edba4
71036edb74  ldr x9,[x8]
71036edb78  ldr x10,[sp, #0x38]
71036edb7c  cmp x9,x10
71036edb80  b.ne 0x71036edba4
71036edb84  ldr x10,[sp, #0x28]
71036edb88  cbz x10,0x71036edba4
71036edb8c  str x9,[sp, #0x18]
71036edb90  adrp x9,0x7105238000
71036edb94  add x9,x9,#0xa98
71036edb98  stp x10,x8,[sp, #0x8]
71036edb9c  str x9,[sp]
71036edba0  b 0x71036edbbc
71036edba4  mov x0,sp
71036edba8  mov x1,x24
71036edbac  mov x2,x23
71036edbb0  bl 0x71038566c0
71036edbb4  ldr x8,[sp, #0x10]
71036edbb8  cbz x8,0x71036edbd8
71036edbbc  ldr x8,[x8]
71036edbc0  ldr x9,[sp, #0x18]
71036edbc4  cmp x8,x9
71036edbc8  b.ne 0x71036edbd8
71036edbcc  stp xzr,xzr,[x19, #0x10]
71036edbd0  str xzr,[x19, #0x8]
71036edbd4  b 0x71036ee030
71036edbd8  mov x0,sp
71036edbdc  mov w1,#0x10
71036edbe0  orr w2,wzr,#0xc0
71036edbe4  bl 0x710392e1f0
71036edbe8  cmp w0,#0xc
71036edbec  b.ne 0x71036edc28
71036edbf0  adrp x8,0x710593d000
71036edbf4  ldr x0,[x8, #0x2b0]
71036edbf8  cbz x0,0x71036edc28
71036edbfc  orr w8,wzr,#0xc0
71036edc00  str x8,[sp, #0x20]
71036edc04  ldr x8,[x0]
71036edc08  ldr x8,[x8, #0x30]
71036edc0c  add x1,sp,#0x20
71036edc10  blr x8
71036edc14  tbz w0,#0x0,0x71036edc28
71036edc18  mov x0,sp
71036edc1c  mov w1,#0x10
71036edc20  orr w2,wzr,#0xc0
71036edc24  bl 0x710392e1f0
71036edc28  adrp x27,0x71052a8000
71036edc2c  ldr x27,[x27, #0xa78]
71036edc30  cbz x27,0x71036edc44
71036edc34  ldr x2,[sp]
71036edc38  orr w0,wzr,#0xc0
71036edc3c  mov w1,#0x10
71036edc40  bl 0x71039c19e0
71036edc44  ldr x21,[sp]
71036edc48  cbz x24,0x71036edc58
71036edc4c  ldr x25,[x24, #0x8]
71036edc50  ldr x26,[x25]
71036edc54  b 0x71036edc60
71036edc58  mov x25,xzr
71036edc5c  mov x26,xzr
71036edc60  mov x0,x21
71036edc64  bl 0x71037c3a70
71036edc68  adrp x8,0x710526f000
71036edc6c  add x8,x8,#0x88
71036edc70  str x8,[x21]
71036edc74  mov x8,x21
71036edc78  str xzr,[x8, #0x18]!
71036edc7c  str x8,[x21, #0x10]
71036edc80  adrp x8,0x710522f000
71036edc84  add x8,x8,#0xea0
71036edc88  stp xzr,x8,[x21, #0x20]
71036edc8c  mov w8,#0x2
71036edc90  stp xzr,x8,[x21, #0x50]
71036edc94  mov w8,#0x1
71036edc98  stp x24,x25,[x21, #0x30]
71036edc9c  mov x24,x21
71036edca0  strb w8,[x21, #0x60]
71036edca4  orr w8,wzr,#0x1c
71036edca8  str xzr,[x21, #0x70]
71036edcac  stp x26,xzr,[x21, #0x40]
71036edcb0  str xzr,[x24, #0x68]!
71036edcb4  cmp x24,x23
71036edcb8  stp xzr,xzr,[x21, #0x88]
71036edcbc  stp xzr,xzr,[x21, #0x78]
71036edcc0  strb w8,[x21, #0x80]
71036edcc4  adrp x8,0x7104497000
71036edcc8  add x8,x8,#0x6f4
71036edccc  ldr x9,[x8]
71036edcd0  ldur x8,[x8, #0x6]
71036edcd4  stur x8,[x21, #0x87]
71036edcd8  adrp x8,0x710526f000
71036edcdc  add x8,x8,#0x428
71036edce0  str x8,[x21]
71036edce4  adrp x8,0x7105231000
71036edce8  add x8,x8,#0xd58
71036edcec  stur x9,[x21, #0x81]
71036edcf0  strb wzr,[x21, #0x8f]
71036edcf4  str wzr,[x21, #0xb8]
71036edcf8  stp xzr,xzr,[x21, #0xa8]
71036edcfc  stp x8,xzr,[x21, #0x98]
71036edd00  b.eq 0x71036edd78
71036edd04  ldrb w8,[x23]
71036edd08  ldp x9,x10,[x23, #0x8]
71036edd0c  lsr x11,x8,#0x1
71036edd10  tst w8,#0x1
71036edd14  csinc x7,x10,x23,ne
71036edd18  csel x23,x11,x9,eq
71036edd1c  subs x2,x23,#0x16
71036edd20  b.ls 0x71036edd44
71036edd24  mov w1,#0x16
71036edd28  mov x0,x24
71036edd2c  mov x3,xzr
71036edd30  mov x4,xzr
71036edd34  mov x5,xzr
71036edd38  mov x6,x23
71036edd3c  bl 0x71037cfe00
71036edd40  b 0x71036edd78
71036edd44  add x25,x21,#0x69
71036edd48  cbz x23,0x71036edd5c
71036edd4c  mov x0,x25
71036edd50  mov x1,x7
71036edd54  mov x2,x23
71036edd58  bl 0x71039c00a0
71036edd5c  strb wzr,[x25, x23, LSL ]
71036edd60  ldrb w8,[x24]
71036edd64  tbnz w8,#0x0,0x71036edd74
71036edd68  lsl w8,w23,#0x1
71036edd6c  strb w8,[x24]
71036edd70  b 0x71036edd78
71036edd74  str x23,[x21, #0x70]
71036edd78  mov x0,x21
71036edd7c  mov x1,x22
71036edd80  bl 0x710386b700
71036edd84  ldr x25,[x21, #0x8]
71036edd88  ldp x8,x9,[x20, #0x8]
71036edd8c  ldr x26,[x25]
71036edd90  cmp x8,x9
71036edd94  b.cs 0x71036edddc
71036edd98  adrp x9,0x7105230000
71036edd9c  add x9,x9,#0xa0
71036edda0  stp xzr,xzr,[x8, #0x10]
71036edda4  stp x9,xzr,[x8]
71036edda8  cbz x25,0x71036ededc
71036eddac  ldr x9,[x25]
71036eddb0  cmp x9,x26
71036eddb4  b.ne 0x71036edeec
71036eddb8  str x21,[x8, #0x8]
71036eddbc  ldr x9,[x21, #0x8]
71036eddc0  str x9,[x8, #0x10]
71036eddc4  ldr x9,[x9]
71036eddc8  mov x27,xzr
71036eddcc  mov x28,xzr
71036eddd0  mov x22,xzr
71036eddd4  str x9,[x8, #0x18]
71036eddd8  b 0x71036edef8
71036edddc  ldr x10,[x20]
71036edde0  sub x8,x8,x10
71036edde4  asr x23,x8,#0x5
71036edde8  add x8,x23,#0x1
71036eddec  lsr x11,x8,#0x3b
71036eddf0  cbnz x11,0x71036ee05c
71036eddf4  sub x9,x9,x10
71036eddf8  asr x10,x9,#0x5
71036eddfc  orr x11,xzr,#0x3fffffffffffffe
71036ede00  cmp x10,x11
71036ede04  b.hi 0x71036ede20
71036ede08  asr x9,x9,#0x4
71036ede0c  cmp x9,x8
71036ede10  csel x24,x8,x9,cc
71036ede14  cbnz x24,0x71036ede24
71036ede18  mov x9,xzr
71036ede1c  b 0x71036ede8c
71036ede20  orr x24,xzr,#0x7ffffffffffffff
71036ede24  lsl x22,x24,#0x5
71036ede28  mov x0,sp
71036ede2c  mov w1,#0x10
71036ede30  mov x2,x22
71036ede34  bl 0x710392e1f0
71036ede38  cmp w0,#0xc
71036ede3c  b.ne 0x71036ede74
71036ede40  adrp x8,0x710593d000
71036ede44  ldr x0,[x8, #0x2b0]
71036ede48  cbz x0,0x71036ede74
71036ede4c  str x22,[sp, #0x20]
71036ede50  ldr x8,[x0]
71036ede54  ldr x8,[x8, #0x30]
71036ede58  add x1,sp,#0x20
71036ede5c  blr x8
71036ede60  tbz w0,#0x0,0x71036ede74
71036ede64  mov x0,sp
71036ede68  mov w1,#0x10
71036ede6c  mov x2,x22
71036ede70  bl 0x710392e1f0
71036ede74  cbz x27,0x71036ede88
71036ede78  ldr x2,[sp]
71036ede7c  mov w1,#0x10
71036ede80  mov x0,x22
71036ede84  bl 0x71039c19e0
71036ede88  ldr x9,[sp]
71036ede8c  add x8,x9,x23, LSL #0x5
71036ede90  mov x11,x8
71036ede94  adrp x10,0x7105230000
71036ede98  add x10,x10,#0xa0
71036ede9c  stp xzr,xzr,[x8, #0x10]
71036edea0  str xzr,[x11, #0x8]!
71036edea4  str x10,[x8]
71036edea8  cbz x25,0x71036edee4
71036edeac  ldr x12,[x25]
71036edeb0  cmp x12,x26
71036edeb4  b.ne 0x71036edf0c
71036edeb8  str x21,[x11]
71036edebc  ldr x11,[x21, #0x8]
71036edec0  str x11,[x8, #0x10]
71036edec4  ldr x11,[x11]
71036edec8  mov x27,xzr
71036edecc  mov x28,xzr
71036eded0  mov x22,xzr
71036eded4  str x11,[x8, #0x18]
71036eded8  b 0x71036edf18
71036ededc  mov x27,xzr
71036edee0  b 0x71036edef0
71036edee4  mov x27,xzr
71036edee8  b 0x71036edf10
71036edeec  mov x27,x25
71036edef0  mov x28,x26
71036edef4  mov x22,x21
71036edef8  ldr x8,[x20, #0x8]
71036edefc  add x8,x8,#0x20
71036edf00  str x8,[x20, #0x8]
71036edf04  cbnz x27,0x71036ee008
71036edf08  b 0x71036ee028
71036edf0c  mov x27,x25
71036edf10  mov x28,x26
71036edf14  mov x22,x21
71036edf18  add x11,x9,x24, LSL #0x5
71036edf1c  ldp x24,x13,[x20]
71036edf20  add x12,x8,#0x20
71036edf24  cmp x13,x24
71036edf28  b.eq 0x71036edfb8
71036edf2c  sub x15,x13,#0x20
71036edf30  sub x15,x15,x24
71036edf34  mov x16,#-0x1
71036edf38  eor x15,x16,x15, LSR #0x5
71036edf3c  mov x14,xzr
71036edf40  sub x16,x24,x13
71036edf44  add x17,x8,x14
71036edf48  stp xzr,xzr,[x17, #-0x10]
71036edf4c  add x18,x13,x14
71036edf50  stp x10,xzr,[x17, #-0x20]
71036edf54  ldur x0,[x18, #-0x10]
71036edf58  cbz x0,0x71036edf9c
71036edf5c  ldr x0,[x0]
71036edf60  ldur x1,[x18, #-0x8]
71036edf64  cmp x0,x1
71036edf68  b.ne 0x71036edf9c
71036edf6c  ldur x0,[x18, #-0x18]
71036edf70  stp xzr,xzr,[x18, #-0x10]
71036edf74  stur xzr,[x18, #-0x18]
71036edf78  stur x0,[x17, #-0x18]
71036edf7c  cbz x0,0x71036edf90
71036edf80  ldr x18,[x0, #0x8]
71036edf84  stur x18,[x17, #-0x10]
71036edf88  ldr x18,[x18]
71036edf8c  b 0x71036edf98
71036edf90  mov x18,xzr
71036edf94  stur xzr,[x17, #-0x10]
71036edf98  stur x18,[x17, #-0x8]
71036edf9c  sub x14,x14,#0x20
71036edfa0  cmp x16,x14
71036edfa4  b.ne 0x71036edf44
71036edfa8  add x8,x23,x15
71036edfac  ldp x23,x24,[x20]
71036edfb0  add x8,x9,x8, LSL #0x5
71036edfb4  b 0x71036edfbc
71036edfb8  mov x23,x24
71036edfbc  cmp x24,x23
71036edfc0  stp x8,x12,[x20]
71036edfc4  str x11,[x20, #0x10]
71036edfc8  b.eq 0x71036edfe4
71036edfcc  ldr x8,[x24, #-0x20]!
71036edfd0  ldr x8,[x8]
71036edfd4  mov x0,x24
71036edfd8  blr x8
71036edfdc  cmp x23,x24
71036edfe0  b.ne 0x71036edfcc
71036edfe4  cbz x23,0x71036ee004
71036edfe8  adrp x8,0x71052a8000
71036edfec  ldr x8,[x8, #0xa70]
71036edff0  cbz x8,0x71036edffc
71036edff4  mov x0,x23
71036edff8  bl 0x71039c19b0
71036edffc  mov x0,x23
71036ee000  bl 0x710392eb40
71036ee004  cbz x27,0x71036ee028
71036ee008  ldr x8,[x27]
71036ee00c  cmp x8,x28
71036ee010  b.ne 0x71036ee028
71036ee014  cbz x22,0x71036ee028
71036ee018  ldr x8,[x22]
71036ee01c  ldr x8,[x8, #0x8]
71036ee020  mov x0,x22
71036ee024  blr x8
71036ee028  stp x21,x25,[x19, #0x8]
71036ee02c  str x26,[x19, #0x18]
71036ee030  adrp x8,0x7105231000
71036ee034  add x8,x8,#0xd38
71036ee038  str x8,[x19]
71036ee03c  ldp x29,x30,[sp, #0x90]
71036ee040  ldp x20,x19,[sp, #0x80]
71036ee044  ldp x22,x21,[sp, #0x70]
71036ee048  ldp x24,x23,[sp, #0x60]
71036ee04c  ldp x26,x25,[sp, #0x50]
71036ee050  ldp x28,x27,[sp, #0x40]
71036ee054  add sp,sp,#0xa0
71036ee058  ret
71036ee05c  mov x0,x20
71036ee060  bl 0x71039c0c00
