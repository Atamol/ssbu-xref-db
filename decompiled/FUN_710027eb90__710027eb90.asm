// addr:      710027eb90
// offset:    0x27eb90
// name:      FUN_710027eb90
// mangled:   
// size:      1172

710027eb90  sub sp,sp,#0x80
710027eb94  stp x24,x23,[sp, #0x40]
710027eb98  stp x22,x21,[sp, #0x50]
710027eb9c  stp x20,x19,[sp, #0x60]
710027eba0  stp x29,x30,[sp, #0x70]
710027eba4  add x29,sp,#0x70
710027eba8  adrp x8,0x71052a4000
710027ebac  ldr x8,[x8, #0xda8]
710027ebb0  adrp x21,0x71052a4000
710027ebb4  ldrb w8,[x8]
710027ebb8  ldr x21,[x21, #0xdb0]
710027ebbc  mov x19,x0
710027ebc0  add x20,x21,#0x28
710027ebc4  cbz w8,0x710027ec00
710027ebc8  adrp x8,0x71052a4000
710027ebcc  ldr x8,[x8, #0xdb8]
710027ebd0  ldr x0,[x8]
710027ebd4  bl 0x7101717960
710027ebd8  ldr w8,[x0]
710027ebdc  cbz w8,0x710027ec00
710027ebe0  ldr x10,[x21, #0xa0]
710027ebe4  ldp x9,x10,[x10]
710027ebe8  sub x10,x10,x9
710027ebec  asr x10,x10,#0x3
710027ebf0  cmp x10,x8
710027ebf4  b.ls 0x710027f00c
710027ebf8  ldr x8,[x9, x8, LSL #0x3]
710027ebfc  add x20,x8,#0x20
710027ec00  ldr x8,[x20]
710027ec04  ldr x8,[x8, #0x10]
710027ec08  ldr x0,[x8, #0x18]
710027ec0c  ldr w1,[x19, #0xa0]
710027ec10  bl 0x71001cd7d0
710027ec14  cbz x0,0x710027ed4c
710027ec18  ldr w8,[x19, #0xd4]
710027ec1c  cmp w8,#0x2
710027ec20  b.ne 0x710027ed58
710027ec24  ldr x0,[x19, #0x1a0]
710027ec28  adrp x1,0x710449f000
710027ec2c  add x1,x1,#0xef3
710027ec30  add x21,x19,#0x188
710027ec34  bl 0x71001b4e00
710027ec38  add x20,x19,#0x3d8
710027ec3c  tbz w0,#0x0,0x710027ed74
710027ec40  ldr x8,[x19, #0x180]
710027ec44  mov x0,sp
710027ec48  str x8,[x19, #0x3e8]
710027ec4c  bl 0x71001cde10
710027ec50  ldr x8,[sp]
710027ec54  orr w23,wzr,#0x1f8
710027ec58  mov x0,sp
710027ec5c  stp x23,x20,[sp, #0x30]
710027ec60  ldr x8,[x8, #0x30]
710027ec64  add x1,sp,#0x38
710027ec68  add x2,sp,#0x30
710027ec6c  mov w3,#0x1
710027ec70  blr x8
710027ec74  str w0,[x19, #0x5d0]
710027ec78  mov x0,sp
710027ec7c  bl 0x71001cb860
710027ec80  add x22,x19,#0x3f0
710027ec84  orr w2,wzr,#0x1e0
710027ec88  mov x0,x22
710027ec8c  mov w1,wzr
710027ec90  bl 0x71039c02a0
710027ec94  add x1,sp,#0x28
710027ec98  mov x0,x21
710027ec9c  str xzr,[sp, #0x28]
710027eca0  bl 0x71001b2b10
710027eca4  ldr x1,[sp, #0x28]
710027eca8  mov w2,#0x1df
710027ecac  mov x0,x22
710027ecb0  bl 0x71039c0350
710027ecb4  ldr x0,[sp, #0x28]
710027ecb8  bl 0x71001b2bf0
710027ecbc  mov x0,sp
710027ecc0  bl 0x71001cde10
710027ecc4  ldr x8,[sp]
710027ecc8  stp x23,x20,[sp, #0x30]
710027eccc  ldr x8,[x8, #0x30]
710027ecd0  mov x0,sp
710027ecd4  add x1,sp,#0x38
710027ecd8  add x2,sp,#0x30
710027ecdc  mov w3,#0x1
710027ece0  blr x8
710027ece4  str w0,[x19, #0x5d0]
710027ece8  mov x0,sp
710027ecec  bl 0x71001cb860
710027ecf0  ldr w8,[x19, #0x1b0]
710027ecf4  mov x0,sp
710027ecf8  str w8,[x19, #0x3e0]
710027ecfc  bl 0x71001cde10
710027ed00  ldr x8,[sp]
710027ed04  stp x23,x20,[sp, #0x30]
710027ed08  ldr x8,[x8, #0x30]
710027ed0c  mov x0,sp
710027ed10  add x1,sp,#0x38
710027ed14  add x2,sp,#0x30
710027ed18  mov w3,#0x1
710027ed1c  blr x8
710027ed20  str w0,[x19, #0x5d0]
710027ed24  mov x0,sp
710027ed28  bl 0x71001cb860
710027ed2c  ldr x0,[x19, #0x5f0]
710027ed30  ldr x8,[x0]
710027ed34  ldr x3,[x19, #0x3e8]
710027ed38  mov x1,x20
710027ed3c  ldr x8,[x8, #0x18]
710027ed40  mov x2,xzr
710027ed44  blr x8
710027ed48  b 0x710027efa0
710027ed4c  mov w8,#0x4
710027ed50  movk w8,#0x8001, LSL #16
710027ed54  b 0x710027efa4
710027ed58  ldrb w8,[x19, #0x620]
710027ed5c  cbz w8,0x710027edc0
710027ed60  ldp x8,x9,[x19, #0x118]
710027ed64  ldr x10,[x19, #0x128]
710027ed68  stp x9,x10,[sp, #0x8]
710027ed6c  str x8,[sp]
710027ed70  b 0x710027efb4
710027ed74  ldr w8,[x19, #0x3dc]
710027ed78  cbz w8,0x710027ee38
710027ed7c  mov x0,sp
710027ed80  str wzr,[x19, #0x3dc]
710027ed84  bl 0x71001cde10
710027ed88  orr w8,wzr,#0x1f8
710027ed8c  stp x8,x20,[sp, #0x30]
710027ed90  ldr x8,[sp]
710027ed94  ldr x8,[x8, #0x30]
710027ed98  mov x0,sp
710027ed9c  add x1,sp,#0x38
710027eda0  add x2,sp,#0x30
710027eda4  mov w3,#0x1
710027eda8  mov w23,#0x1
710027edac  blr x8
710027edb0  str w0,[x19, #0x5d0]
710027edb4  mov x0,sp
710027edb8  bl 0x71001cb860
710027edbc  b 0x710027ee3c
710027edc0  ldr w8,[x19, #0x3dc]
710027edc4  add w8,w8,#0x1
710027edc8  mov x0,sp
710027edcc  add x20,x19,#0x3d8
710027edd0  str w8,[x19, #0x3dc]
710027edd4  bl 0x71001cde10
710027edd8  orr w8,wzr,#0x1f8
710027eddc  stp x8,x20,[sp, #0x30]
710027ede0  ldr x8,[sp]
710027ede4  ldr x8,[x8, #0x30]
710027ede8  mov x0,sp
710027edec  add x1,sp,#0x38
710027edf0  add x2,sp,#0x30
710027edf4  mov w3,#0x1
710027edf8  mov w20,#0x1
710027edfc  blr x8
710027ee00  str w0,[x19, #0x5d0]
710027ee04  mov x0,sp
710027ee08  bl 0x71001cb860
710027ee0c  mov w23,#0x1
710027ee10  ldrb w8,[x19, #0x630]
710027ee14  cbz w8,0x710027ef74
710027ee18  cbz w20,0x710027ee24
710027ee1c  ldrb w8,[x19, #0x640]
710027ee20  cbz w8,0x710027ef74
710027ee24  ldr x8,[x19, #0x638]
710027ee28  mov w9,#0x1
710027ee2c  strb w9,[x8]
710027ee30  cbnz w23,0x710027ef78
710027ee34  b 0x710027ef94
710027ee38  mov w23,wzr
710027ee3c  adrp x8,0x71052a4000
710027ee40  ldr x8,[x8, #0xd80]
710027ee44  strb wzr,[sp, #0x8]
710027ee48  add x24,x8,#0x10
710027ee4c  mov x8,sp
710027ee50  add x8,x8,#0x8
710027ee54  add x1,x19,#0x1f0
710027ee58  mov x2,#-0x1
710027ee5c  str x24,[sp]
710027ee60  str x8,[sp, #0x18]
710027ee64  mov w8,#0x10
710027ee68  mov x0,sp
710027ee6c  str x8,[sp, #0x20]
710027ee70  bl 0x71001b47e0
710027ee74  ldr x0,[sp, #0x18]
710027ee78  ldr x1,[x19, #0x1a0]
710027ee7c  bl 0x71001b4e00
710027ee80  mov w22,w0
710027ee84  mov x0,sp
710027ee88  str x24,[sp]
710027ee8c  bl 0x71001b4910
710027ee90  tbnz w22,#0x0,0x710027ef0c
710027ee94  add x22,x19,#0x3f0
710027ee98  orr w2,wzr,#0x1e0
710027ee9c  mov x0,x22
710027eea0  mov w1,wzr
710027eea4  bl 0x71039c02a0
710027eea8  add x1,sp,#0x28
710027eeac  mov x0,x21
710027eeb0  str xzr,[sp, #0x28]
710027eeb4  bl 0x71001b2b10
710027eeb8  ldr x1,[sp, #0x28]
710027eebc  mov w2,#0x1df
710027eec0  mov x0,x22
710027eec4  bl 0x71039c0350
710027eec8  ldr x0,[sp, #0x28]
710027eecc  bl 0x71001b2bf0
710027eed0  mov x0,sp
710027eed4  bl 0x71001cde10
710027eed8  orr w8,wzr,#0x1f8
710027eedc  stp x8,x20,[sp, #0x30]
710027eee0  ldr x8,[sp]
710027eee4  ldr x8,[x8, #0x30]
710027eee8  mov x0,sp
710027eeec  add x1,sp,#0x38
710027eef0  add x2,sp,#0x30
710027eef4  mov w3,#0x1
710027eef8  mov w23,#0x1
710027eefc  blr x8
710027ef00  str w0,[x19, #0x5d0]
710027ef04  mov x0,sp
710027ef08  bl 0x71001cb860
710027ef0c  ldr w9,[x19, #0x1e0]
710027ef10  ldr w8,[x19, #0x1b0]
710027ef14  cmp w9,w8
710027ef18  b.eq 0x710027ef5c
710027ef1c  mov x0,sp
710027ef20  str w8,[x19, #0x3e0]
710027ef24  bl 0x71001cde10
710027ef28  orr w8,wzr,#0x1f8
710027ef2c  stp x8,x20,[sp, #0x30]
710027ef30  ldr x8,[sp]
710027ef34  ldr x8,[x8, #0x30]
710027ef38  mov x0,sp
710027ef3c  add x1,sp,#0x38
710027ef40  add x2,sp,#0x30
710027ef44  mov w3,#0x1
710027ef48  mov w23,#0x1
710027ef4c  blr x8
710027ef50  str w0,[x19, #0x5d0]
710027ef54  mov x0,sp
710027ef58  bl 0x71001cb860
710027ef5c  ldr x8,[x19, #0x1e8]
710027ef60  ldr x9,[x19, #0x180]
710027ef64  cmp x8,x9
710027ef68  cset w20,cs
710027ef6c  ldrb w8,[x19, #0x630]
710027ef70  cbnz w8,0x710027ee18
710027ef74  cbz w23,0x710027ef94
710027ef78  ldr x0,[x19, #0x5f0]
710027ef7c  ldr x8,[x0]
710027ef80  ldr x3,[x19, #0x3e8]
710027ef84  ldr x8,[x8, #0x18]
710027ef88  add x1,x19,#0x3d8
710027ef8c  mov x2,xzr
710027ef90  blr x8
710027ef94  tbnz w20,#0x0,0x710027efa0
710027ef98  ldrb w8,[x19, #0x630]
710027ef9c  cbz w8,0x710027efd8
710027efa0  orr w8,wzr,#0x10001
710027efa4  mov x0,sp
710027efa8  add x1,sp,#0x38
710027efac  str w8,[sp, #0x38]
710027efb0  bl 0x71001b4200
710027efb4  mov x1,sp
710027efb8  mov x0,x19
710027efbc  bl 0x710027ea50
710027efc0  ldp x29,x30,[sp, #0x70]
710027efc4  ldp x20,x19,[sp, #0x60]
710027efc8  ldp x22,x21,[sp, #0x50]
710027efcc  ldp x24,x23,[sp, #0x40]
710027efd0  add sp,sp,#0x80
710027efd4  ret
710027efd8  adrp x8,0x71052a6000
710027efdc  ldr x8,[x8, #0xc28]
710027efe0  adrp x9,0x71052a8000
710027efe4  ldr x9,[x9, #0x3f8]
710027efe8  mov x1,sp
710027efec  add x8,x8,#0x10
710027eff0  stp x8,x9,[sp]
710027eff4  adrp x8,0x7104411000
710027eff8  add x8,x8,#0x4cc
710027effc  mov x0,x19
710027f000  stp xzr,x8,[sp, #0x10]
710027f004  bl 0x71001d3d60
710027f008  b 0x710027efc0
710027f00c  adrp x0,0x71042c4000
710027f010  add x0,x0,#0x35f
710027f014  mov w1,#0x47
710027f018  orr w2,wzr,#0xe0000003
710027f01c  mov w3,wzr
710027f020  bl 0x71001b1300
