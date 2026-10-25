// addr:      71001fbba0
// offset:    0x1fbba0
// name:      FUN_71001fbba0
// mangled:   
// size:      728

71001fbba0  sub sp,sp,#0xd0
71001fbba4  stp x28,x27,[sp, #0x70]
71001fbba8  stp x26,x25,[sp, #0x80]
71001fbbac  stp x24,x23,[sp, #0x90]
71001fbbb0  stp x22,x21,[sp, #0xa0]
71001fbbb4  stp x20,x19,[sp, #0xb0]
71001fbbb8  stp x29,x30,[sp, #0xc0]
71001fbbbc  add x29,sp,#0xc0
71001fbbc0  adrp x8,0x71052a4000
71001fbbc4  ldr x8,[x8, #0xda8]
71001fbbc8  adrp x27,0x71052a4000
71001fbbcc  ldrb w8,[x8]
71001fbbd0  ldr x27,[x27, #0xdb0]
71001fbbd4  mov x19,x6
71001fbbd8  mov w20,w5
71001fbbdc  mov w25,w4
71001fbbe0  mov w23,w3
71001fbbe4  mov w24,w2
71001fbbe8  mov w22,w1
71001fbbec  mov x21,x0
71001fbbf0  add x26,x27,#0x28
71001fbbf4  cbz w8,0x71001fbc30
71001fbbf8  adrp x8,0x71052a4000
71001fbbfc  ldr x8,[x8, #0xdb8]
71001fbc00  ldr x0,[x8]
71001fbc04  bl 0x7101717960
71001fbc08  ldr w8,[x0]
71001fbc0c  cbz w8,0x71001fbc30
71001fbc10  ldr x10,[x27, #0xa0]
71001fbc14  ldp x9,x10,[x10]
71001fbc18  sub x10,x10,x9
71001fbc1c  asr x10,x10,#0x3
71001fbc20  cmp x10,x8
71001fbc24  b.ls 0x71001fbc48
71001fbc28  ldr x8,[x9, x8, LSL #0x3]
71001fbc2c  add x26,x8,#0x20
71001fbc30  ldr x8,[x26]
71001fbc34  cbz x8,0x71001fbc60
71001fbc38  ldr x8,[x8, #0x10]
71001fbc3c  cbz x8,0x71001fbc60
71001fbc40  ldr x26,[x8, #0x10]
71001fbc44  b 0x71001fbc64
71001fbc48  adrp x0,0x71042c4000
71001fbc4c  add x0,x0,#0x35f
71001fbc50  mov w1,#0x47
71001fbc54  orr w2,wzr,#0xe0000003
71001fbc58  mov w3,wzr
71001fbc5c  bl 0x71001b1300
71001fbc60  mov x26,xzr
71001fbc64  ldr x8,[x26, #0x78]!
71001fbc68  ldr x8,[x8, #0x10]
71001fbc6c  mov x0,x26
71001fbc70  blr x8
71001fbc74  mov x1,sp
71001fbc78  mov x0,x21
71001fbc7c  str w22,[sp]
71001fbc80  strh w24,[sp, #0x4]
71001fbc84  bl 0x71001fa660
71001fbc88  cbz x0,0x71001fbd14
71001fbc8c  ldr x8,[x21, #0x120]
71001fbc90  cbz x8,0x71001fbdfc
71001fbc94  adrp x8,0x71052a6000
71001fbc98  ldr x8,[x8, #0xe70]
71001fbc9c  str xzr,[sp, #0x60]
71001fbca0  stp xzr,xzr,[sp, #0x20]
71001fbca4  add x8,x8,#0x10
71001fbca8  stp xzr,xzr,[sp, #0x38]
71001fbcac  str x8,[sp]
71001fbcb0  mov x8,sp
71001fbcb4  add x9,x8,#0x20
71001fbcb8  str x9,[sp, #0x18]
71001fbcbc  add x9,x8,#0x38
71001fbcc0  add x8,x8,#0x50
71001fbcc4  str x8,[sp, #0x48]
71001fbcc8  mov w8,#0x1
71001fbccc  mov w0,#0x90
71001fbcd0  str x9,[sp, #0x30]
71001fbcd4  stp xzr,xzr,[sp, #0x50]
71001fbcd8  strh w8,[sp, #0x68]
71001fbcdc  strb w8,[sp, #0x6a]
71001fbce0  bl 0x71001af850
71001fbce4  mov x27,x0
71001fbce8  cbz x0,0x71001fbcf4
71001fbcec  mov x0,x27
71001fbcf0  bl 0x71001beb40
71001fbcf4  ldrb w8,[sp, #0x68]
71001fbcf8  str x27,[sp, #0x8]
71001fbcfc  cbz w8,0x71001fbd1c
71001fbd00  mov w8,#0x1
71001fbd04  str w8,[sp, #0x10]
71001fbd08  strb wzr,[sp, #0x69]
71001fbd0c  add x28,x19,#0x140
71001fbd10  b 0x71001fbd44
71001fbd14  mov w20,wzr
71001fbd18  b 0x71001fbe44
71001fbd1c  mov x0,sp
71001fbd20  bl 0x71001f2180
71001fbd24  ldrb w8,[sp, #0x68]
71001fbd28  mov w9,#0x1
71001fbd2c  add x28,x19,#0x140
71001fbd30  str w9,[sp, #0x10]
71001fbd34  strb wzr,[sp, #0x69]
71001fbd38  cbnz w8,0x71001fbd44
71001fbd3c  mov x0,sp
71001fbd40  bl 0x71001f2180
71001fbd44  ldr x0,[sp, #0x8]
71001fbd48  mov x1,x28
71001fbd4c  bl 0x71001bec20
71001fbd50  strb wzr,[sp, #0x69]
71001fbd54  ldr x0,[x21, #0x120]
71001fbd58  ldr x8,[x0]
71001fbd5c  ldr x8,[x8, #0x10]
71001fbd60  mov x1,sp
71001fbd64  mov w2,w24
71001fbd68  blr x8
71001fbd6c  ldrb w8,[sp, #0x68]
71001fbd70  mov w27,w0
71001fbd74  cbnz w8,0x71001fbd80
71001fbd78  mov x0,sp
71001fbd7c  bl 0x71001f2180
71001fbd80  ldr x1,[sp, #0x8]
71001fbd84  mov x0,x28
71001fbd88  bl 0x71001bec20
71001fbd8c  adrp x8,0x71052a6000
71001fbd90  ldr x8,[x8, #0xe70]
71001fbd94  add x8,x8,#0x10
71001fbd98  str x8,[sp]
71001fbd9c  ldr x8,[sp, #0x60]
71001fbda0  cbz x8,0x71001fbdb4
71001fbda4  sub x0,x8,#0x4
71001fbda8  bl 0x71001b1870
71001fbdac  str xzr,[sp, #0x60]
71001fbdb0  strb wzr,[sp, #0x69]
71001fbdb4  ldr x0,[sp, #0x8]
71001fbdb8  cbz x0,0x71001fbdc8
71001fbdbc  ldr x8,[x0]
71001fbdc0  ldr x8,[x8, #0x8]
71001fbdc4  blr x8
71001fbdc8  ldr x1,[sp, #0x50]
71001fbdcc  mov x28,sp
71001fbdd0  add x0,x28,#0x48
71001fbdd4  bl 0x7101711670
71001fbdd8  ldr x1,[sp, #0x38]
71001fbddc  add x0,x28,#0x30
71001fbde0  bl 0x7101711670
71001fbde4  ldr x1,[sp, #0x20]
71001fbde8  add x0,x28,#0x18
71001fbdec  bl 0x7100219ca0
71001fbdf0  tbz w27,#0x0,0x71001fbdfc
71001fbdf4  mov w20,#0x1
71001fbdf8  b 0x71001fbe44
71001fbdfc  adrp x8,0x71052a6000
71001fbe00  ldr x8,[x8, #0x870]
71001fbe04  ldr x8,[x8]
71001fbe08  str x8,[x19, #0x1d0]
71001fbe0c  mov w8,w23
71001fbe10  bfm w23,w20,#0x18,#0x17
71001fbe14  mov w20,#0x1
71001fbe18  bfm w8,w25,#0x18,#0x17
71001fbe1c  strh w23,[x19, #0x44]
71001fbe20  strh w8,[x19, #0x42]
71001fbe24  strh w24,[x19, #0xac]
71001fbe28  str w22,[x19, #0x1e8]
71001fbe2c  ldr x0,[x21, #0x328]
71001fbe30  ldr x8,[x0]
71001fbe34  ldr x8,[x8, #0x18]
71001fbe38  mov w2,#0x1
71001fbe3c  mov x1,x19
71001fbe40  blr x8
71001fbe44  ldr x8,[x26]
71001fbe48  ldr x8,[x8, #0x20]
71001fbe4c  mov x0,x26
71001fbe50  blr x8
71001fbe54  mov w0,w20
71001fbe58  ldp x29,x30,[sp, #0xc0]
71001fbe5c  ldp x20,x19,[sp, #0xb0]
71001fbe60  ldp x22,x21,[sp, #0xa0]
71001fbe64  ldp x24,x23,[sp, #0x90]
71001fbe68  ldp x26,x25,[sp, #0x80]
71001fbe6c  ldp x28,x27,[sp, #0x70]
71001fbe70  add sp,sp,#0xd0
71001fbe74  ret
