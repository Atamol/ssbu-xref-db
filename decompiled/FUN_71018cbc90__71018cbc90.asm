// addr:      71018cbc90
// offset:    0x18cbc90
// name:      FUN_71018cbc90
// mangled:   
// size:      792

71018cbc90  str x27,[sp, #-0x60]!
71018cbc94  stp x26,x25,[sp, #0x10]
71018cbc98  stp x24,x23,[sp, #0x20]
71018cbc9c  stp x22,x21,[sp, #0x30]
71018cbca0  stp x20,x19,[sp, #0x40]
71018cbca4  stp x29,x30,[sp, #0x50]
71018cbca8  add x29,sp,#0x50
71018cbcac  ldr x8,[x0, #0xf0]
71018cbcb0  ldr x22,[x8, #0x80]
71018cbcb4  ldr x20,[x22, #0x40]
71018cbcb8  mov x19,x0
71018cbcbc  cbz x20,0x71018cbcd0
71018cbcc0  ldr x9,[x20]
71018cbcc4  cbz x9,0x71018cbe7c
71018cbcc8  ldr x9,[x9, #0x8]
71018cbccc  cbz x9,0x71018cbd14
71018cbcd0  ldrb w9,[x22, #0x48]
71018cbcd4  cbz w9,0x71018cbe9c
71018cbcd8  ldr w9,[x22, #0x4c]
71018cbcdc  str w9,[x19, #0x114]
71018cbce0  ldr x8,[x8, #0x80]
71018cbce4  ldrb w8,[x8, #0x48]
71018cbce8  cbz w8,0x71018cbe9c
71018cbcec  ldr w8,[x19, #0xd4]
71018cbcf0  cmp w8,#0x11
71018cbcf4  b.gt 0x71018cbe9c
71018cbcf8  add w8,w8,#0x1
71018cbcfc  cmp w8,#0x13
71018cbd00  str w8,[x19, #0xd4]
71018cbd04  b.cs 0x71018cbfa4
71018cbd08  add x8,x19,w8, SXTW  #0x2
71018cbd0c  mov w9,#0x2
71018cbd10  b 0x71018cbe98
71018cbd14  adrp x1,0x71042b2000
71018cbd18  add x1,x1,#0xa84
71018cbd1c  add x0,sp,#0x8
71018cbd20  str xzr,[sp, #0x8]
71018cbd24  bl 0x71037aea50
71018cbd28  ldr x20,[x20]
71018cbd2c  ldr x0,[x20]
71018cbd30  cbz x0,0x71018cbdb0
71018cbd34  ldr x8,[x0, #0x18]
71018cbd38  ldr x8,[x8, #0x40]
71018cbd3c  ldr w9,[x8, #0xc]
71018cbd40  cmp w9,#0x2
71018cbd44  b.cc 0x71018cbd54
71018cbd48  ldr x8,[x8, #0x10]
71018cbd4c  add x1,x8,#0x10
71018cbd50  b 0x71018cbda0
71018cbd54  ldr x9,[x8, #0x18]
71018cbd58  ldrb w8,[x8, #0xb]
71018cbd5c  mov w10,#0xffffffff
71018cbd60  lsl x8,x10,x8
71018cbd64  mvn w8,w8
71018cbd68  and x8,x8,#0x2
71018cbd6c  add x1,x9,x8, LSL #0x5
71018cbd70  adrp x8,0x7104862000
71018cbd74  add x8,x8,#0x960
71018cbd78  ldr w9,[x1, #0x18]
71018cbd7c  cmp w9,#0x13
71018cbd80  b.ne 0x71018cbd90
71018cbd84  ldr x9,[x1, #0x10]
71018cbd88  cmp x9,#0x2
71018cbd8c  b.eq 0x71018cbda0
71018cbd90  ldrsw x9,[x1, #0x1c]
71018cbd94  add x1,x1,x9, LSL #0x5
71018cbd98  cbnz w9,0x71018cbd78
71018cbd9c  mov x1,x8
71018cbda0  adrp x2,0x710432a000
71018cbda4  add x2,x2,#0x32f
71018cbda8  bl 0x71038f4d40
71018cbdac  ldr x0,[x20]
71018cbdb0  add x1,sp,#0x8
71018cbdb4  bl 0x710372d940
71018cbdb8  ldr x20,[sp, #0x8]
71018cbdbc  cbz x20,0x71018cbe7c
71018cbdc0  ldp x8,x24,[x20, #0x8]
71018cbdc4  ldrsw x23,[x8]
71018cbdc8  mov x21,xzr
71018cbdcc  b 0x71018cbdd4
71018cbdd0  add x21,x21,#0x1
71018cbdd4  ldrb w8,[x24, x21, LSL ]
71018cbdd8  cmp w8,#0x73
71018cbddc  b.eq 0x71018cbde8
71018cbde0  cbnz w8,0x71018cbdd0
71018cbde4  b 0x71018cbe00
71018cbde8  ldr x25,[x20, #0x8]
71018cbdec  ldr x0,[x25, x21, LSL #0x3]
71018cbdf0  cbz x0,0x71018cbdf8
71018cbdf4  bl 0x710392eb40
71018cbdf8  str xzr,[x25, x21, LSL #0x3]
71018cbdfc  b 0x71018cbdd0
71018cbe00  mov x0,x20
71018cbe04  bl 0x710392eb40
71018cbe08  cmp w23,#0x1
71018cbe0c  str xzr,[sp, #0x8]
71018cbe10  b.lt 0x71018cbe7c
71018cbe14  mov x20,x22
71018cbe18  ldr x8,[x20, #0x58]!
71018cbe1c  ldr x9,[x20, #0x8]
71018cbe20  sub x8,x9,x8
71018cbe24  asr x8,x8,#0x2
71018cbe28  cmp x8,x23
71018cbe2c  b.ls 0x71018cbe7c
71018cbe30  ldr x21,[x22, #0x40]
71018cbe34  ldr x9,[x21]
71018cbe38  cbz x9,0x71018cbeb8
71018cbe3c  adrp x1,0x71042b2000
71018cbe40  add x1,x1,#0xa84
71018cbe44  add x0,sp,#0x8
71018cbe48  str xzr,[sp, #0x8]
71018cbe4c  bl 0x71037aea50
71018cbe50  ldr x21,[x21]
71018cbe54  ldr x0,[x21]
71018cbe58  cbz x0,0x71018cbf24
71018cbe5c  ldr x8,[x0, #0x18]
71018cbe60  ldr x8,[x8, #0x40]
71018cbe64  ldr w9,[x8, #0xc]
71018cbe68  cmp w9,#0x2
71018cbe6c  b.cc 0x71018cbec8
71018cbe70  ldr x8,[x8, #0x10]
71018cbe74  add x1,x8,#0x10
71018cbe78  b 0x71018cbf14
71018cbe7c  mov w24,#0x2
71018cbe80  ldrsw x8,[x19, #0xd4]
71018cbe84  cmp w8,#0x13
71018cbe88  str w24,[x19, #0x108]
71018cbe8c  b.cs 0x71018cbfa4
71018cbe90  add x8,x19,x8, LSL #0x2
71018cbe94  mov w9,#0x4
71018cbe98  str w9,[x8, #0x88]
71018cbe9c  ldp x29,x30,[sp, #0x50]
71018cbea0  ldp x20,x19,[sp, #0x40]
71018cbea4  ldp x22,x21,[sp, #0x30]
71018cbea8  ldp x24,x23,[sp, #0x20]
71018cbeac  ldp x26,x25,[sp, #0x10]
71018cbeb0  ldr x27,[sp], #0x60
71018cbeb4  ret
71018cbeb8  mov w24,wzr
71018cbebc  cmp x8,x23
71018cbec0  b.hi 0x71018cbe80
71018cbec4  b 0x71018cbf9c
71018cbec8  ldr x9,[x8, #0x18]
71018cbecc  ldrb w8,[x8, #0xb]
71018cbed0  mov w10,#0xffffffff
71018cbed4  lsl x8,x10,x8
71018cbed8  mvn w8,w8
71018cbedc  and x8,x8,#0x2
71018cbee0  add x1,x9,x8, LSL #0x5
71018cbee4  adrp x8,0x7104862000
71018cbee8  add x8,x8,#0x960
71018cbeec  ldr w9,[x1, #0x18]
71018cbef0  cmp w9,#0x13
71018cbef4  b.ne 0x71018cbf04
71018cbef8  ldr x9,[x1, #0x10]
71018cbefc  cmp x9,#0x2
71018cbf00  b.eq 0x71018cbf14
71018cbf04  ldrsw x9,[x1, #0x1c]
71018cbf08  add x1,x1,x9, LSL #0x5
71018cbf0c  cbnz w9,0x71018cbeec
71018cbf10  mov x1,x8
71018cbf14  adrp x2,0x7104433000
71018cbf18  add x2,x2,#0x842
71018cbf1c  bl 0x71038f4d40
71018cbf20  ldr x0,[x21]
71018cbf24  add x1,sp,#0x8
71018cbf28  bl 0x710372d940
71018cbf2c  ldr x21,[sp, #0x8]
71018cbf30  cbz x21,0x71018cbf84
71018cbf34  ldp x8,x26,[x21, #0x8]
71018cbf38  ldr w24,[x8]
71018cbf3c  mov x25,xzr
71018cbf40  b 0x71018cbf48
71018cbf44  add x25,x25,#0x1
71018cbf48  ldrb w8,[x26, x25, LSL ]
71018cbf4c  cmp w8,#0x73
71018cbf50  b.eq 0x71018cbf5c
71018cbf54  cbnz w8,0x71018cbf44
71018cbf58  b 0x71018cbf74
71018cbf5c  ldr x27,[x21, #0x8]
71018cbf60  ldr x0,[x27, x25, LSL #0x3]
71018cbf64  cbz x0,0x71018cbf6c
71018cbf68  bl 0x710392eb40
71018cbf6c  str xzr,[x27, x25, LSL #0x3]
71018cbf70  b 0x71018cbf44
71018cbf74  mov x0,x21
71018cbf78  bl 0x710392eb40
71018cbf7c  str xzr,[sp, #0x8]
71018cbf80  b 0x71018cbf88
71018cbf84  mov w24,wzr
71018cbf88  ldp x8,x9,[x22, #0x58]
71018cbf8c  sub x8,x9,x8
71018cbf90  asr x8,x8,#0x2
71018cbf94  cmp x8,x23
71018cbf98  b.hi 0x71018cbe80
71018cbf9c  mov x0,x20
71018cbfa0  bl 0x71039c1330
71018cbfa4  bl 0x71039c2650
