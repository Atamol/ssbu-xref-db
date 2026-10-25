// addr:      71001edc60
// offset:    0x1edc60
// name:      FUN_71001edc60
// mangled:   
// size:      996

71001edc60  sub sp,sp,#0x100
71001edc64  str x27,[sp, #0xa0]
71001edc68  stp x26,x25,[sp, #0xb0]
71001edc6c  stp x24,x23,[sp, #0xc0]
71001edc70  stp x22,x21,[sp, #0xd0]
71001edc74  stp x20,x19,[sp, #0xe0]
71001edc78  stp x29,x30,[sp, #0xf0]
71001edc7c  add x29,sp,#0xf0
71001edc80  adrp x23,0x71052a4000
71001edc84  ldr x23,[x23, #0xda8]
71001edc88  adrp x22,0x71052a4000
71001edc8c  ldrb w8,[x23]
71001edc90  ldr x22,[x22, #0xdb0]
71001edc94  mov x19,x0
71001edc98  add x20,x22,#0x18
71001edc9c  cbz w8,0x71001edcd8
71001edca0  adrp x8,0x71052a4000
71001edca4  ldr x8,[x8, #0xdb8]
71001edca8  ldr x0,[x8]
71001edcac  bl 0x7101717960
71001edcb0  ldr w8,[x0]
71001edcb4  cbz w8,0x71001edcd8
71001edcb8  ldr x10,[x22, #0xa0]
71001edcbc  ldp x9,x10,[x10]
71001edcc0  sub x10,x10,x9
71001edcc4  asr x10,x10,#0x3
71001edcc8  cmp x10,x8
71001edccc  b.ls 0x71001ede00
71001edcd0  ldr x8,[x9, x8, LSL #0x3]
71001edcd4  add x20,x8,#0x10
71001edcd8  ldr x8,[x20]
71001edcdc  cbz x8,0x71001ede18
71001edce0  ldr x8,[x8, #0x10]
71001edce4  cbz x8,0x71001ede18
71001edce8  ldr x8,[x8, #0xe8]
71001edcec  cbz x8,0x71001ede18
71001edcf0  ldrb w8,[x23]
71001edcf4  add x20,x22,#0x28
71001edcf8  cbz w8,0x71001edd34
71001edcfc  adrp x8,0x71052a4000
71001edd00  ldr x8,[x8, #0xdb8]
71001edd04  ldr x0,[x8]
71001edd08  bl 0x7101717960
71001edd0c  ldr w8,[x0]
71001edd10  cbz w8,0x71001edd34
71001edd14  ldr x10,[x22, #0xa0]
71001edd18  ldp x9,x10,[x10]
71001edd1c  sub x10,x10,x9
71001edd20  asr x10,x10,#0x3
71001edd24  cmp x10,x8
71001edd28  b.ls 0x71001ee02c
71001edd2c  ldr x8,[x9, x8, LSL #0x3]
71001edd30  add x20,x8,#0x20
71001edd34  ldr x8,[x20]
71001edd38  ldr x8,[x8, #0x10]
71001edd3c  ldr x0,[x8, #0x18]
71001edd40  ldr w1,[x19, #0xa0]
71001edd44  bl 0x71001cd7d0
71001edd48  cbz x0,0x71001ede18
71001edd4c  ldrb w8,[x23]
71001edd50  mov x20,x0
71001edd54  add x21,x22,#0x18
71001edd58  cbz w8,0x71001edd94
71001edd5c  adrp x8,0x71052a4000
71001edd60  ldr x8,[x8, #0xdb8]
71001edd64  ldr x0,[x8]
71001edd68  bl 0x7101717960
71001edd6c  ldr w8,[x0]
71001edd70  cbz w8,0x71001edd94
71001edd74  ldr x10,[x22, #0xa0]
71001edd78  ldp x9,x10,[x10]
71001edd7c  sub x10,x10,x9
71001edd80  asr x10,x10,#0x3
71001edd84  cmp x10,x8
71001edd88  b.ls 0x71001ee02c
71001edd8c  ldr x8,[x9, x8, LSL #0x3]
71001edd90  add x21,x8,#0x10
71001edd94  ldr x8,[x21]
71001edd98  ldr x8,[x8, #0x10]
71001edd9c  ldr x21,[x8, #0x198]
71001edda0  ldr x8,[x19, #0x148]
71001edda4  add x0,x8,#0x10
71001edda8  adrp x1,0x710449c000
71001eddac  add x1,x1,#0xe33
71001eddb0  mov x2,xzr
71001eddb4  bl 0x71001f2ba0
71001eddb8  mov x1,x0
71001eddbc  mov x0,x21
71001eddc0  bl 0x71001e85d0
71001eddc4  cmn w0,#0x1
71001eddc8  b.eq 0x71001ede68
71001eddcc  orr w8,wzr,#0x10001
71001eddd0  add x0,sp,#0x28
71001eddd4  add x1,sp,#0x8
71001eddd8  str w8,[sp, #0x8]
71001edddc  bl 0x71001b4200
71001edde0  mov w1,#0x2
71001edde4  add x2,sp,#0x28
71001edde8  mov w3,#0x1
71001eddec  mov x0,x20
71001eddf0  bl 0x71001d0f00
71001eddf4  mov x0,x19
71001eddf8  bl 0x71001cd870
71001eddfc  b 0x71001ede48
71001ede00  adrp x0,0x71042c4000
71001ede04  add x0,x0,#0x35f
71001ede08  mov w1,#0x47
71001ede0c  orr w2,wzr,#0xe0000003
71001ede10  mov w3,wzr
71001ede14  bl 0x71001b1300
71001ede18  adrp x8,0x71052a6000
71001ede1c  ldr x8,[x8, #0xc28]
71001ede20  adrp x9,0x71052a7000
71001ede24  ldr x9,[x9, #0x30]
71001ede28  add x1,sp,#0x28
71001ede2c  add x8,x8,#0x10
71001ede30  stp x8,x9,[sp, #0x28]
71001ede34  adrp x8,0x7104411000
71001ede38  add x8,x8,#0x4cc
71001ede3c  mov x0,x19
71001ede40  stp xzr,x8,[sp, #0x38]
71001ede44  bl 0x71001d3d60
71001ede48  ldp x29,x30,[sp, #0xf0]
71001ede4c  ldr x27,[sp, #0xa0]
71001ede50  ldp x20,x19,[sp, #0xe0]
71001ede54  ldp x22,x21,[sp, #0xd0]
71001ede58  ldp x24,x23,[sp, #0xc0]
71001ede5c  ldp x26,x25,[sp, #0xb0]
71001ede60  add sp,sp,#0x100
71001ede64  ret
71001ede68  add x8,sp,#0x28
71001ede6c  bl 0x71001b12a0
71001ede70  ldr x8,[sp, #0x28]
71001ede74  ldr x9,[x19, #0x138]
71001ede78  cmp x8,x9
71001ede7c  b.hi 0x71001ede18
71001ede80  ldr w8,[x19, #0xbc]
71001ede84  cmp w8,#0x3
71001ede88  b.eq 0x71001edef0
71001ede8c  cmp w8,#0x2
71001ede90  b.ne 0x71001edf20
71001ede94  ldrb w8,[x23]
71001ede98  add x20,x22,#0x18
71001ede9c  cbz w8,0x71001eded8
71001edea0  adrp x8,0x71052a4000
71001edea4  ldr x8,[x8, #0xdb8]
71001edea8  ldr x0,[x8]
71001edeac  bl 0x7101717960
71001edeb0  ldr w8,[x0]
71001edeb4  cbz w8,0x71001eded8
71001edeb8  ldr x10,[x22, #0xa0]
71001edebc  ldp x9,x10,[x10]
71001edec0  sub x10,x10,x9
71001edec4  asr x10,x10,#0x3
71001edec8  cmp x10,x8
71001edecc  b.ls 0x71001edf38
71001eded0  ldr x8,[x9, x8, LSL #0x3]
71001eded4  add x20,x8,#0x10
71001eded8  ldr x8,[x20]
71001ededc  cbz x8,0x71001edf50
71001edee0  ldr x8,[x8, #0x10]
71001edee4  cbz x8,0x71001edf50
71001edee8  ldr x23,[x8, #0xe8]
71001edeec  b 0x71001edf54
71001edef0  adrp x8,0x71052a6000
71001edef4  ldr x8,[x8, #0xc28]
71001edef8  adrp x9,0x71052a7000
71001edefc  ldr x9,[x9, #0x30]
71001edf00  add x1,sp,#0x28
71001edf04  add x8,x8,#0x10
71001edf08  stp x8,x9,[sp, #0x28]
71001edf0c  adrp x8,0x7104411000
71001edf10  add x8,x8,#0x4cc
71001edf14  mov x0,x19
71001edf18  stp xzr,x8,[sp, #0x38]
71001edf1c  bl 0x71001d3d60
71001edf20  mov w1,#0x1
71001edf24  mov x0,x19
71001edf28  bl 0x71001d6410
71001edf2c  mov w8,#0x32
71001edf30  str w8,[x19, #0x44]
71001edf34  b 0x71001ede48
71001edf38  adrp x0,0x71042c4000
71001edf3c  add x0,x0,#0x35f
71001edf40  mov w1,#0x47
71001edf44  orr w2,wzr,#0xe0000003
71001edf48  mov w3,wzr
71001edf4c  bl 0x71001b1300
71001edf50  mov x23,xzr
71001edf54  adrp x8,0x71052a6000
71001edf58  ldr x8,[x8, #0xfb0]
71001edf5c  add x24,x8,#0x10
71001edf60  adrp x8,0x71052a4000
71001edf64  str x24,[sp, #0x28]
71001edf68  ldr x8,[x8, #0xd80]
71001edf6c  add x25,sp,#0x28
71001edf70  add x20,x25,#0x8
71001edf74  mov x0,x20
71001edf78  add x26,x8,#0x10
71001edf7c  add x8,x25,#0x10
71001edf80  mov w27,#0x10
71001edf84  str x26,[sp, #0x30]
71001edf88  strb wzr,[sp, #0x38]
71001edf8c  mov x21,#-0x1
71001edf90  stp x8,x27,[sp, #0x48]
71001edf94  ldr x1,[x23, #0x168]
71001edf98  mov x2,x21
71001edf9c  bl 0x71001b47e0
71001edfa0  ldrh w8,[x23, #0x178]
71001edfa4  strh w8,[sp, #0x58]
71001edfa8  add x8,x25,#0x40
71001edfac  str x26,[sp, #0x60]
71001edfb0  stp x8,x27,[sp, #0x78]
71001edfb4  strb wzr,[sp, #0x68]
71001edfb8  ldr x1,[x23, #0x198]
71001edfbc  add x22,x25,#0x38
71001edfc0  mov x0,x22
71001edfc4  mov x2,x21
71001edfc8  bl 0x71001b47e0
71001edfcc  ldp x8,x9,[x23, #0x1a8]
71001edfd0  ldrb w10,[x23, #0x1b8]
71001edfd4  adrp x11,0x71052a6000
71001edfd8  ldr x11,[x11, #0xc28]
71001edfdc  strb w10,[sp, #0x98]
71001edfe0  stp x8,x9,[sp, #0x88]
71001edfe4  adrp x8,0x71052a7000
71001edfe8  ldr x8,[x8, #0x38]
71001edfec  add x9,x11,#0x10
71001edff0  add x1,sp,#0x8
71001edff4  stp x9,x8,[sp, #0x8]
71001edff8  adrp x8,0x7104411000
71001edffc  add x8,x8,#0x4cc
71001ee000  mov x0,x19
71001ee004  stp xzr,x8,[sp, #0x18]
71001ee008  bl 0x71001d3d60
71001ee00c  mov x0,x22
71001ee010  str x24,[sp, #0x28]
71001ee014  str x26,[sp, #0x60]
71001ee018  bl 0x71001b4910
71001ee01c  mov x0,x20
71001ee020  str x26,[sp, #0x30]
71001ee024  bl 0x71001b4910
71001ee028  b 0x71001ede48
71001ee02c  adrp x0,0x71042c4000
71001ee030  add x0,x0,#0x35f
71001ee034  mov w1,#0x47
71001ee038  orr w2,wzr,#0xe0000003
71001ee03c  mov w3,wzr
71001ee040  bl 0x71001b1300
