// addr:      710027bc30
// offset:    0x27bc30
// name:      FUN_710027bc30
// mangled:   
// size:      736

710027bc30  sub sp,sp,#0x80
710027bc34  str x23,[sp, #0x40]
710027bc38  stp x22,x21,[sp, #0x50]
710027bc3c  stp x20,x19,[sp, #0x60]
710027bc40  stp x29,x30,[sp, #0x70]
710027bc44  add x29,sp,#0x70
710027bc48  adrp x22,0x71052a4000
710027bc4c  ldr x22,[x22, #0xda8]
710027bc50  adrp x21,0x71052a4000
710027bc54  ldrb w8,[x22]
710027bc58  ldr x21,[x21, #0xdb0]
710027bc5c  mov x19,x0
710027bc60  add x20,x21,#0x28
710027bc64  cbz w8,0x710027bca0
710027bc68  adrp x8,0x71052a4000
710027bc6c  ldr x8,[x8, #0xdb8]
710027bc70  ldr x0,[x8]
710027bc74  bl 0x7101717960
710027bc78  ldr w8,[x0]
710027bc7c  cbz w8,0x710027bca0
710027bc80  ldr x10,[x21, #0xa0]
710027bc84  ldp x9,x10,[x10]
710027bc88  sub x10,x10,x9
710027bc8c  asr x10,x10,#0x3
710027bc90  cmp x10,x8
710027bc94  b.ls 0x710027bef8
710027bc98  ldr x8,[x9, x8, LSL #0x3]
710027bc9c  add x20,x8,#0x20
710027bca0  ldr x8,[x20]
710027bca4  ldr x8,[x8, #0x10]
710027bca8  ldr x0,[x8, #0x18]
710027bcac  ldr w1,[x19, #0xa0]
710027bcb0  bl 0x71001cd7d0
710027bcb4  cbz x0,0x710027bcfc
710027bcb8  ldr w8,[x19, #0x10c]
710027bcbc  cmp w8,#0x2
710027bcc0  b.eq 0x710027bd70
710027bcc4  ldp x8,x9,[x19, #0x150]
710027bcc8  ldr x10,[x19, #0x160]
710027bccc  str x8,[sp, #0x8]
710027bcd0  mov w8,#0x18
710027bcd4  movk w8,#0x8005, LSL #16
710027bcd8  add x0,sp,#0x8
710027bcdc  add x1,sp,#0x28
710027bce0  str w8,[sp, #0x28]
710027bce4  stp x9,x10,[sp, #0x10]
710027bce8  bl 0x71001b4260
710027bcec  tbz w0,#0x0,0x710027bd1c
710027bcf0  mov w8,#0x4
710027bcf4  movk w8,#0x8069, LSL #16
710027bcf8  b 0x710027bd48
710027bcfc  mov w8,#0x4
710027bd00  movk w8,#0x8001, LSL #16
710027bd04  add x0,sp,#0x8
710027bd08  add x1,sp,#0x28
710027bd0c  str w8,[sp, #0x28]
710027bd10  bl 0x71001b4200
710027bd14  add x1,sp,#0x8
710027bd18  b 0x710027bed8
710027bd1c  mov w8,#0x4
710027bd20  movk w8,#0x8001, LSL #16
710027bd24  add w8,w8,#0xe
710027bd28  add x0,sp,#0x8
710027bd2c  add x1,sp,#0x28
710027bd30  str w8,[sp, #0x28]
710027bd34  bl 0x71001b4260
710027bd38  tbz w0,#0x0,0x710027bd64
710027bd3c  mov w8,#0x4
710027bd40  movk w8,#0x8069, LSL #16
710027bd44  add w8,w8,#0x5
710027bd48  add x0,sp,#0x28
710027bd4c  sub x1,x29,#0x24
710027bd50  stur w8,[x29, #-0x24]
710027bd54  bl 0x71001b4200
710027bd58  add x0,sp,#0x8
710027bd5c  add x1,sp,#0x28
710027bd60  bl 0x71001b4300
710027bd64  add x0,x19,#0x388
710027bd68  add x1,sp,#0x8
710027bd6c  bl 0x71001b4300
710027bd70  ldrb w8,[x19, #0x280]
710027bd74  tbnz w8,#0x6,0x710027be88
710027bd78  add x20,x19,#0xf8
710027bd7c  mov x0,x20
710027bd80  bl 0x71001d1590
710027bd84  strb wzr,[sp, #0x10]
710027bd88  adrp x8,0x71052a8000
710027bd8c  ldr x8,[x8, #0x368]
710027bd90  add x8,x8,#0x10
710027bd94  str x8,[sp, #0x8]
710027bd98  ldr x8,[x19, #0x300]
710027bd9c  str x8,[sp, #0x18]
710027bda0  adrp x23,0x71052a5000
710027bda4  ldr x23,[x23, #0x110]
710027bda8  ldr w8,[x19, #0x388]
710027bdac  cmp w8,#0x0
710027bdb0  csel x8,x23,xzr,ge
710027bdb4  cmp x8,#0x0
710027bdb8  cset w8,ne
710027bdbc  strb w8,[sp, #0x20]
710027bdc0  ldr x0,[x19, #0xa8]
710027bdc4  ldr x8,[x0]
710027bdc8  ldr x8,[x8, #0x40]
710027bdcc  add x2,sp,#0x8
710027bdd0  mov x1,x20
710027bdd4  blr x8
710027bdd8  tbz w0,#0x0,0x710027be90
710027bddc  ldrb w8,[x22]
710027bde0  add x22,x21,#0x28
710027bde4  cbz w8,0x710027be20
710027bde8  adrp x8,0x71052a4000
710027bdec  ldr x8,[x8, #0xdb8]
710027bdf0  ldr x0,[x8]
710027bdf4  bl 0x7101717960
710027bdf8  ldr w8,[x0]
710027bdfc  cbz w8,0x710027be20
710027be00  ldr x10,[x21, #0xa0]
710027be04  ldp x9,x10,[x10]
710027be08  sub x10,x10,x9
710027be0c  asr x10,x10,#0x3
710027be10  cmp x10,x8
710027be14  b.ls 0x710027bef8
710027be18  ldr x8,[x9, x8, LSL #0x3]
710027be1c  add x22,x8,#0x20
710027be20  ldr x8,[x22]
710027be24  ldr x8,[x8, #0x10]
710027be28  ldr x0,[x8, #0x18]
710027be2c  ldr w1,[x19, #0xa0]
710027be30  ldr w2,[x19, #0x110]
710027be34  bl 0x71001d3780
710027be38  mov w1,#0x2
710027be3c  mov x0,x19
710027be40  bl 0x71001d6410
710027be44  mov w0,#0x20
710027be48  bl 0x71001af850
710027be4c  mov x2,x0
710027be50  cbz x0,0x710027be78
710027be54  adrp x8,0x71052a6000
710027be58  ldr x8,[x8, #0xc28]
710027be5c  adrp x9,0x71052a8000
710027be60  ldr x9,[x9, #0x370]
710027be64  adrp x10,0x7104411000
710027be68  add x10,x10,#0x4cc
710027be6c  stp xzr,x10,[x2, #0x10]
710027be70  add x8,x8,#0x10
710027be74  stp x8,x9,[x2]
710027be78  mov x0,x19
710027be7c  mov x1,x20
710027be80  bl 0x71001d4200
710027be84  b 0x710027bee0
710027be88  add x1,x19,#0x388
710027be8c  b 0x710027bed8
710027be90  add x8,x19,#0x388
710027be94  ldr w9,[x8]
710027be98  cmp w9,#0x0
710027be9c  csel x9,x23,xzr,ge
710027bea0  cbz x9,0x710027bec4
710027bea4  mov w8,#0x4
710027bea8  movk w8,#0x8001, LSL #16
710027beac  add w8,w8,#0x9
710027beb0  add x0,sp,#0x28
710027beb4  sub x1,x29,#0x24
710027beb8  stur w8,[x29, #-0x24]
710027bebc  bl 0x71001b4200
710027bec0  b 0x710027bed4
710027bec4  ldp x9,x10,[x8]
710027bec8  ldr w8,[x8, #0x10]
710027becc  str w8,[sp, #0x38]
710027bed0  stp x9,x10,[sp, #0x28]
710027bed4  add x1,sp,#0x28
710027bed8  mov x0,x19
710027bedc  bl 0x710027b760
710027bee0  ldp x29,x30,[sp, #0x70]
710027bee4  ldr x23,[sp, #0x40]
710027bee8  ldp x20,x19,[sp, #0x60]
710027beec  ldp x22,x21,[sp, #0x50]
710027bef0  add sp,sp,#0x80
710027bef4  ret
710027bef8  adrp x0,0x71042c4000
710027befc  add x0,x0,#0x35f
710027bf00  mov w1,#0x47
710027bf04  orr w2,wzr,#0xe0000003
710027bf08  mov w3,wzr
710027bf0c  bl 0x71001b1300
