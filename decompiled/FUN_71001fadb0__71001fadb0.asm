// addr:      71001fadb0
// offset:    0x1fadb0
// name:      FUN_71001fadb0
// mangled:   
// size:      280

71001fadb0  sub sp,sp,#0x50
71001fadb4  stp x24,x23,[sp, #0x10]
71001fadb8  stp x22,x21,[sp, #0x20]
71001fadbc  stp x20,x19,[sp, #0x30]
71001fadc0  stp x29,x30,[sp, #0x40]
71001fadc4  add x29,sp,#0x40
71001fadc8  adrp x8,0x71052a4000
71001fadcc  ldr x8,[x8, #0xda8]
71001fadd0  adrp x24,0x71052a4000
71001fadd4  ldrb w8,[x8]
71001fadd8  ldr x24,[x24, #0xdb0]
71001faddc  mov x19,x3
71001fade0  mov w21,w2
71001fade4  mov w22,w1
71001fade8  mov x20,x0
71001fadec  add x23,x24,#0x28
71001fadf0  cbz w8,0x71001fae2c
71001fadf4  adrp x8,0x71052a4000
71001fadf8  ldr x8,[x8, #0xdb8]
71001fadfc  ldr x0,[x8]
71001fae00  bl 0x7101717960
71001fae04  ldr w8,[x0]
71001fae08  cbz w8,0x71001fae2c
71001fae0c  ldr x10,[x24, #0xa0]
71001fae10  ldp x9,x10,[x10]
71001fae14  sub x10,x10,x9
71001fae18  asr x10,x10,#0x3
71001fae1c  cmp x10,x8
71001fae20  b.ls 0x71001fae44
71001fae24  ldr x8,[x9, x8, LSL #0x3]
71001fae28  add x23,x8,#0x20
71001fae2c  ldr x8,[x23]
71001fae30  cbz x8,0x71001fae5c
71001fae34  ldr x8,[x8, #0x10]
71001fae38  cbz x8,0x71001fae5c
71001fae3c  ldr x23,[x8, #0x10]
71001fae40  b 0x71001fae60
71001fae44  adrp x0,0x71042c4000
71001fae48  add x0,x0,#0x35f
71001fae4c  mov w1,#0x47
71001fae50  orr w2,wzr,#0xe0000003
71001fae54  mov w3,wzr
71001fae58  bl 0x71001b1300
71001fae5c  mov x23,xzr
71001fae60  ldr x8,[x23, #0x78]!
71001fae64  ldr x8,[x8, #0x10]
71001fae68  mov x0,x23
71001fae6c  blr x8
71001fae70  add x1,sp,#0x8
71001fae74  mov x0,x20
71001fae78  str w22,[sp, #0x8]
71001fae7c  strh w21,[sp, #0xc]
71001fae80  bl 0x71001fa660
71001fae84  cbz x0,0x71001fae98
71001fae88  mov x1,x19
71001fae8c  bl 0x71001c3a70
71001fae90  mov w19,#0x1
71001fae94  b 0x71001fae9c
71001fae98  mov w19,wzr
71001fae9c  ldr x8,[x23]
71001faea0  ldr x8,[x8, #0x20]
71001faea4  mov x0,x23
71001faea8  blr x8
71001faeac  mov w0,w19
71001faeb0  ldp x29,x30,[sp, #0x40]
71001faeb4  ldp x20,x19,[sp, #0x30]
71001faeb8  ldp x22,x21,[sp, #0x20]
71001faebc  ldp x24,x23,[sp, #0x10]
71001faec0  add sp,sp,#0x50
71001faec4  ret
