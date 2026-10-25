// addr:      71000fbbe0
// offset:    0xfbbe0
// name:      FUN_71000fbbe0
// mangled:   
// size:      796

71000fbbe0  sub sp,sp,#0x50
71000fbbe4  str x23,[sp, #0x10]
71000fbbe8  stp x22,x21,[sp, #0x20]
71000fbbec  stp x20,x19,[sp, #0x30]
71000fbbf0  stp x29,x30,[sp, #0x40]
71000fbbf4  add x29,sp,#0x40
71000fbbf8  adrp x21,0x71052a5000
71000fbbfc  ldr x21,[x21, #0x80]
71000fbc00  mov x19,x0
71000fbc04  ldr x0,[x21]
71000fbc08  bl 0x7100146ba0
71000fbc0c  sub w8,w0,#0x5
71000fbc10  cmp w8,#0x3
71000fbc14  b.hi 0x71000fbc3c
71000fbc18  adrp x9,0x7104496000
71000fbc1c  add x9,x9,#0x35c
71000fbc20  ldrsw x8,[x9, x8, LSL #0x2]
71000fbc24  add x8,x8,x9
71000fbc28  br x8
71000fbc2c  mov w8,#0x1
71000fbc30  orr w9,wzr,#0x3
71000fbc34  mov w10,#0xc406
71000fbc38  b 0x71000fbcf4
71000fbc3c  adrp x23,0x71052a4000
71000fbc40  ldr x23,[x23, #0xc70]
71000fbc44  ldr x8,[x23]
71000fbc48  ldr x8,[x8, #0x30]
71000fbc4c  ldr x9,[x19, #0x210]
71000fbc50  cmp x8,x9
71000fbc54  b.ls 0x71000fbd74
71000fbc58  mov w8,#0xac5a
71000fbc5c  str w8,[sp]
71000fbc60  mov x8,sp
71000fbc64  orr x20,x8,#0x4
71000fbc68  mov x0,x20
71000fbc6c  bl 0x71039c0a80
71000fbc70  add x1,sp,#0x18
71000fbc74  mov x0,x20
71000fbc78  str wzr,[sp, #0x18]
71000fbc7c  bl 0x71039c0a90
71000fbc80  add x0,x19,#0x220
71000fbc84  mov x1,sp
71000fbc88  bl 0x71000bcf30
71000fbc8c  ldr x8,[x21]
71000fbc90  ldrb w9,[x8, #0x162]
71000fbc94  cmp w9,#0x0
71000fbc98  cset w9,eq
71000fbc9c  add x8,x8,w9, UXTW  #0x3
71000fbca0  ldr x0,[x8, #0x168]
71000fbca4  bl 0x71000d8f90
71000fbca8  adrp x8,0x71052a5000
71000fbcac  ldr x8,[x8, #0x238]
71000fbcb0  adrp x9,0x7104290000
71000fbcb4  add x9,x9,#0xd05
71000fbcb8  str x9,[x19, #0x40]
71000fbcbc  mov w0,#0x5
71000fbcc0  stp x8,xzr,[x19, #0x30]
71000fbcc4  b 0x71000fbd5c
71000fbcc8  mov w8,#0x1
71000fbccc  orr w9,wzr,#0x3
71000fbcd0  mov w10,#0xa471
71000fbcd4  b 0x71000fbcf4
71000fbcd8  mov w8,#0x1
71000fbcdc  orr w9,wzr,#0x3
71000fbce0  mov w10,#0xc420
71000fbce4  b 0x71000fbcf4
71000fbce8  mov w8,#0x1
71000fbcec  orr w9,wzr,#0x3
71000fbcf0  mov w10,#0xc421
71000fbcf4  strb w8,[x19, #0xfa]
71000fbcf8  mov x8,sp
71000fbcfc  orr x20,x8,#0x4
71000fbd00  mov x0,x20
71000fbd04  strb w9,[x19, #0x130]
71000fbd08  str w10,[sp]
71000fbd0c  bl 0x71039c0a80
71000fbd10  add x1,sp,#0x18
71000fbd14  mov x0,x20
71000fbd18  str wzr,[sp, #0x18]
71000fbd1c  bl 0x71039c0a90
71000fbd20  add x0,x19,#0x220
71000fbd24  mov x1,sp
71000fbd28  bl 0x71000bcf30
71000fbd2c  ldr x8,[x21]
71000fbd30  ldr x0,[x8, #0x8]
71000fbd34  ldr x8,[x0]
71000fbd38  ldr x8,[x8, #0x28]
71000fbd3c  blr x8
71000fbd40  adrp x8,0x71052a5000
71000fbd44  ldr x8,[x8, #0x240]
71000fbd48  mov x0,xzr
71000fbd4c  stp x8,xzr,[x19, #0x30]
71000fbd50  adrp x8,0x71043ac000
71000fbd54  add x8,x8,#0x982
71000fbd58  str x8,[x19, #0x40]
71000fbd5c  ldp x29,x30,[sp, #0x40]
71000fbd60  ldr x23,[sp, #0x10]
71000fbd64  ldp x20,x19,[sp, #0x30]
71000fbd68  ldp x22,x21,[sp, #0x20]
71000fbd6c  add sp,sp,#0x50
71000fbd70  ret
71000fbd74  ldr x8,[x21]
71000fbd78  ldr x20,[x8, #0x8]
71000fbd7c  mov x0,x20
71000fbd80  mov w1,wzr
71000fbd84  bl 0x71000ecfb0
71000fbd88  cbz x0,0x71000fbeb8
71000fbd8c  ldr x8,[x0]
71000fbd90  ldr x8,[x8, #0x18]
71000fbd94  ldr w21,[x19, #0xf0]
71000fbd98  blr x8
71000fbd9c  ldr x8,[x20]
71000fbda0  ldr x8,[x8, #0x60]
71000fbda4  mov x2,x0
71000fbda8  mov x0,x20
71000fbdac  mov w1,w21
71000fbdb0  blr x8
71000fbdb4  mov w21,w0
71000fbdb8  mov w1,#0x1
71000fbdbc  mov x0,x20
71000fbdc0  bl 0x71000ecfb0
71000fbdc4  cbz x0,0x71000fbdf4
71000fbdc8  ldr x8,[x0]
71000fbdcc  ldr x8,[x8, #0x18]
71000fbdd0  ldr w22,[x19, #0xf0]
71000fbdd4  blr x8
71000fbdd8  ldr x8,[x20]
71000fbddc  ldr x8,[x8, #0x60]
71000fbde0  mov x2,x0
71000fbde4  mov x0,x20
71000fbde8  mov w1,w22
71000fbdec  blr x8
71000fbdf0  and w21,w21,w0
71000fbdf4  mov w1,#0x2
71000fbdf8  mov x0,x20
71000fbdfc  bl 0x71000ecfb0
71000fbe00  cbz x0,0x71000fbe30
71000fbe04  ldr x8,[x0]
71000fbe08  ldr x8,[x8, #0x18]
71000fbe0c  ldr w22,[x19, #0xf0]
71000fbe10  blr x8
71000fbe14  ldr x8,[x20]
71000fbe18  ldr x8,[x8, #0x60]
71000fbe1c  mov x2,x0
71000fbe20  mov x0,x20
71000fbe24  mov w1,w22
71000fbe28  blr x8
71000fbe2c  and w21,w21,w0
71000fbe30  orr w1,wzr,#0x3
71000fbe34  mov x0,x20
71000fbe38  bl 0x71000ecfb0
71000fbe3c  cbz x0,0x71000fbed0
71000fbe40  ldr x8,[x0]
71000fbe44  ldr x8,[x8, #0x18]
71000fbe48  ldr w22,[x19, #0xf0]
71000fbe4c  blr x8
71000fbe50  ldr x8,[x20]
71000fbe54  ldr x8,[x8, #0x60]
71000fbe58  mov x2,x0
71000fbe5c  mov x0,x20
71000fbe60  mov w1,w22
71000fbe64  blr x8
71000fbe68  and w8,w21,w0
71000fbe6c  tbz w8,#0x0,0x71000fbed4
71000fbe70  ldr x8,[x23]
71000fbe74  ldr x8,[x8, #0x30]
71000fbe78  ldr x9,[x19, #0x128]
71000fbe7c  sub x20,x8,x9
71000fbe80  bl 0x71000bb680
71000fbe84  mov x8,x0
71000fbe88  mov x0,xzr
71000fbe8c  ldr x8,[x8]
71000fbe90  sdiv x8,x20,x8
71000fbe94  adrp x9,0x71052a4000
71000fbe98  ldr x9,[x9, #0xbd8]
71000fbe9c  adrp x10,0x71052a5000
71000fbea0  ldr x10,[x10, #0x330]
71000fbea4  str w8,[x9, #0x14]
71000fbea8  adrp x8,0x71043ef000
71000fbeac  add x8,x8,#0xad3
71000fbeb0  stp x10,xzr,[x19, #0x30]
71000fbeb4  b 0x71000fbd58
71000fbeb8  mov w21,#0x1
71000fbebc  mov w1,#0x1
71000fbec0  mov x0,x20
71000fbec4  bl 0x71000ecfb0
71000fbec8  cbnz x0,0x71000fbdc8
71000fbecc  b 0x71000fbdf4
71000fbed0  tbnz w21,#0x0,0x71000fbe70
71000fbed4  orr x8,xzr,#0x2000000000000
71000fbed8  str x8,[sp]
71000fbedc  str wzr,[sp, #0x8]
71000fbee0  ldr x8,[x20]
71000fbee4  ldr x8,[x8, #0x38]
71000fbee8  mov x1,sp
71000fbeec  mov x0,x20
71000fbef0  blr x8
71000fbef4  mov w0,#0x5
71000fbef8  b 0x71000fbd5c
