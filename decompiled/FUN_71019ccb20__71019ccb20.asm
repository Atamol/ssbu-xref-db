// addr:      71019ccb20
// offset:    0x19ccb20
// name:      FUN_71019ccb20
// mangled:   
// size:      896

71019ccb20  sub sp,sp,#0xc0
71019ccb24  stp x26,x25,[sp, #0x70]
71019ccb28  stp x24,x23,[sp, #0x80]
71019ccb2c  stp x22,x21,[sp, #0x90]
71019ccb30  stp x20,x19,[sp, #0xa0]
71019ccb34  stp x29,x30,[sp, #0xb0]
71019ccb38  add x29,sp,#0xb0
71019ccb3c  ldp x9,x10,[x0, #0x128]
71019ccb40  sub x10,x10,x9
71019ccb44  sxtw x8,w1
71019ccb48  mov x19,x0
71019ccb4c  asr x10,x10,#0x3
71019ccb50  cmp x10,x8
71019ccb54  b.ls 0x71019cce98
71019ccb58  ldr x20,[x9, x8, LSL #0x3]
71019ccb5c  ldr x8,[x19, #0x150]
71019ccb60  mov x26,#0x5a00000000000000
71019ccb64  and x10,x8,#-0x100000000000000
71019ccb68  and x9,x8,#0xffffffffff
71019ccb6c  and x23,x20,#0xffffffffff
71019ccb70  cmp x10,x26
71019ccb74  mov x22,x2
71019ccb78  ccmp x9,#0x0,#0x4,eq
71019ccb7c  b.ne 0x71019ccba0
71019ccb80  and x8,x20,#-0x100000000000000
71019ccb84  cmp x8,x26
71019ccb88  ccmp x23,#0x0,#0x4,eq
71019ccb8c  b.ne 0x71019ccbbc
71019ccb90  ldr x0,[x22, #0x8]
71019ccb94  adrp x1,0x7104307000
71019ccb98  add x1,x1,#0xe2f
71019ccb9c  b 0x71019ccbc8
71019ccba0  and x9,x20,#-0x100000000000000
71019ccba4  cmp x9,x26
71019ccba8  eor x8,x20,x8
71019ccbac  and x8,x8,#0xffffffffff
71019ccbb0  ccmp x23,#0x0,#0x4,eq
71019ccbb4  ccmp x8,#0x0,#0x0,ne
71019ccbb8  b.eq 0x71019ccb90
71019ccbbc  ldr x0,[x22, #0x8]
71019ccbc0  adrp x1,0x7104454000
71019ccbc4  add x1,x1,#0x3d3
71019ccbc8  fmov s0,0x3f800000
71019ccbcc  bl 0x7103778300
71019ccbd0  adrp x25,0x710532f000
71019ccbd4  ldr x8,[x25, #0x730]
71019ccbd8  ldr x8,[x8, #0x8]
71019ccbdc  ldr x1,[x8, #0x238]
71019ccbe0  add x0,sp,#0x18
71019ccbe4  mov x2,x20
71019ccbe8  add x21,sp,#0x18
71019ccbec  bl 0x71032888e0
71019ccbf0  adrp x1,0x710425f000
71019ccbf4  add x1,x1,#0x382
71019ccbf8  add x8,sp,#0x8
71019ccbfc  mov x0,x22
71019ccc00  bl 0x7103776910
71019ccc04  add x21,x21,#0x8
71019ccc08  add x0,sp,#0x8
71019ccc0c  mov x1,x21
71019ccc10  bl 0x710377a120
71019ccc14  ldr x0,[sp, #0x10]
71019ccc18  adrp x24,0x710523d000
71019ccc1c  add x24,x24,#0x9a8
71019ccc20  stp x24,xzr,[sp, #0x8]
71019ccc24  cbz x0,0x71019ccc2c
71019ccc28  bl 0x710392eb40
71019ccc2c  adrp x1,0x710436b000
71019ccc30  add x1,x1,#0xc1a
71019ccc34  add x8,sp,#0x8
71019ccc38  mov x0,x22
71019ccc3c  bl 0x7103776910
71019ccc40  add x0,sp,#0x8
71019ccc44  mov x1,x21
71019ccc48  bl 0x710377a120
71019ccc4c  ldr x0,[sp, #0x10]
71019ccc50  stp x24,xzr,[sp, #0x8]
71019ccc54  cbz x0,0x71019ccc5c
71019ccc58  bl 0x710392eb40
71019ccc5c  adrp x1,0x7104308000
71019ccc60  add x1,x1,#0x65f
71019ccc64  add x8,sp,#0x8
71019ccc68  mov x0,x22
71019ccc6c  bl 0x7103776910
71019ccc70  ldr x8,[x19, #0x148]
71019ccc74  and x9,x8,#-0x100000000000000
71019ccc78  cmp x9,x26
71019ccc7c  b.ne 0x71019ccca8
71019ccc80  and x9,x8,#0xffffffffff
71019ccc84  cbz x9,0x71019ccca8
71019ccc88  and x9,x20,#-0x100000000000000
71019ccc8c  cmp x9,x26
71019ccc90  b.ne 0x71019cccb8
71019ccc94  cbz x23,0x71019cccb8
71019ccc98  eor x8,x20,x8
71019ccc9c  tst x8,#0xffffffffff
71019ccca0  b.ne 0x71019cccb8
71019ccca4  b 0x71019cccd0
71019ccca8  and x8,x20,#-0x100000000000000
71019cccac  cmp x8,x26
71019cccb0  b.ne 0x71019cccd0
71019cccb4  cbz x23,0x71019cccd0
71019cccb8  ldr x21,[sp, #0x10]
71019cccbc  ldr x8,[x21]
71019cccc0  cbz x8,0x71019ccce8
71019cccc4  ldrb w9,[x8, #0x58]
71019cccc8  and w9,w9,#0xfe
71019ccccc  b 0x71019ccce4
71019cccd0  ldr x21,[sp, #0x10]
71019cccd4  ldr x8,[x21]
71019cccd8  cbz x8,0x71019ccce8
71019cccdc  ldrb w9,[x8, #0x58]
71019ccce0  orr w9,w9,#0x1
71019ccce4  strb w9,[x8, #0x58]
71019ccce8  mov w0,#0x10
71019cccec  mov w1,#0x8
71019cccf0  bl 0x710392e290
71019cccf4  mov x23,x0
71019cccf8  cbnz x0,0x71019ccd44
71019cccfc  adrp x8,0x7105332000
71019ccd00  ldr x0,[x8, #0xf00]
71019ccd04  cbz x0,0x71019ccd40
71019ccd08  mov w8,#0x8
71019ccd0c  stur wzr,[x29, #-0x44]
71019ccd10  sub x1,x29,#0x44
71019ccd14  stur x8,[x29, #-0x50]
71019ccd18  ldr x8,[x0]
71019ccd1c  ldr x8,[x8, #0x30]
71019ccd20  sub x2,x29,#0x50
71019ccd24  blr x8
71019ccd28  tbz w0,#0x0,0x71019ccd40
71019ccd2c  mov w0,#0x10
71019ccd30  mov w1,#0x8
71019ccd34  bl 0x710392e290
71019ccd38  mov x23,x0
71019ccd3c  cbnz x0,0x71019ccd44
71019ccd40  mov x23,xzr
71019ccd44  str xzr,[x23]
71019ccd48  ldr x8,[x22, #0x8]
71019ccd4c  ldr x8,[x8, #0x8]
71019ccd50  cbz x8,0x71019ccd6c
71019ccd54  ldr x0,[x8, #0x60]
71019ccd58  cbz x0,0x71019ccd70
71019ccd5c  ldr x8,[x8, #0x18]
71019ccd60  add x1,x8,#0xb0
71019ccd64  bl 0x7103796f20
71019ccd68  b 0x71019ccd70
71019ccd6c  mov x0,xzr
71019ccd70  str x0,[x23]
71019ccd74  ldr x8,[x25, #0x730]
71019ccd78  ldr x8,[x8, #0x8]
71019ccd7c  add x0,x8,#0x230
71019ccd80  mov x1,x20
71019ccd84  bl 0x710328bb80
71019ccd88  tbz w0,#0x0,0x71019ccd94
71019ccd8c  ldrb w8,[x19, #0x169]
71019ccd90  cbz w8,0x71019cce2c
71019ccd94  ldr x19,[x23]
71019ccd98  cbz x19,0x71019ccdf4
71019ccd9c  ldr x8,[x19]
71019ccda0  ldr x8,[x8, #0x1f8]
71019ccda4  mov w1,#0x1
71019ccda8  mov x0,x19
71019ccdac  mov w20,#0x1
71019ccdb0  blr x8
71019ccdb4  ldr x8,[x19]
71019ccdb8  ldr x8,[x8, #0x200]
71019ccdbc  mov x0,x19
71019ccdc0  blr x8
71019ccdc4  tbz w0,#0x0,0x71019ccddc
71019ccdc8  ldr x8,[x19]
71019ccdcc  ldr x8,[x8, #0x210]
71019ccdd0  mov x0,x19
71019ccdd4  blr x8
71019ccdd8  eor w20,w0,#0x1
71019ccddc  ldr x8,[x19]
71019ccde0  ldr x8,[x8, #0x388]
71019ccde4  and w1,w20,#0x1
71019ccde8  mov x0,x19
71019ccdec  mov w2,wzr
71019ccdf0  blr x8
71019ccdf4  cbz x23,0x71019cce00
71019ccdf8  mov x0,x23
71019ccdfc  bl 0x710392eb40
71019cce00  stp x24,xzr,[sp, #0x8]
71019cce04  cbz x21,0x71019cce10
71019cce08  mov x0,x21
71019cce0c  bl 0x710392eb40
71019cce10  ldp x29,x30,[sp, #0xb0]
71019cce14  ldp x20,x19,[sp, #0xa0]
71019cce18  ldp x22,x21,[sp, #0x90]
71019cce1c  ldp x24,x23,[sp, #0x80]
71019cce20  ldp x26,x25,[sp, #0x70]
71019cce24  add sp,sp,#0xc0
71019cce28  ret
71019cce2c  ldr x19,[x23]
71019cce30  cbz x19,0x71019ccdf4
71019cce34  ldr x8,[x19]
71019cce38  ldr x8,[x8, #0x1f8]
71019cce3c  mov x0,x19
71019cce40  mov w1,wzr
71019cce44  blr x8
71019cce48  ldr x8,[x19]
71019cce4c  ldr x8,[x8, #0x200]
71019cce50  mov x0,x19
71019cce54  blr x8
71019cce58  tbz w0,#0x0,0x71019cce74
71019cce5c  ldr x8,[x19]
71019cce60  ldr x8,[x8, #0x210]
71019cce64  mov x0,x19
71019cce68  blr x8
71019cce6c  eor w8,w0,#0x1
71019cce70  b 0x71019cce78
71019cce74  mov w8,#0x1
71019cce78  ldr x9,[x19]
71019cce7c  ldr x9,[x9, #0x388]
71019cce80  and w1,w8,#0x1
71019cce84  mov x0,x19
71019cce88  mov w2,wzr
71019cce8c  blr x9
71019cce90  cbnz x23,0x71019ccdf8
71019cce94  b 0x71019cce00
71019cce98  add x0,x19,#0x128
71019cce9c  bl 0x71039c1330
