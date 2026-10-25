// addr:      710024bcb0
// offset:    0x24bcb0
// name:      FUN_710024bcb0
// mangled:   
// size:      528

710024bcb0  sub sp,sp,#0xf0
710024bcb4  stp x24,x23,[sp, #0xb0]
710024bcb8  stp x22,x21,[sp, #0xc0]
710024bcbc  stp x20,x19,[sp, #0xd0]
710024bcc0  stp x29,x30,[sp, #0xe0]
710024bcc4  add x29,sp,#0xe0
710024bcc8  mov x20,x0
710024bccc  add x0,sp,#0x40
710024bcd0  mov x22,x3
710024bcd4  mov x23,x2
710024bcd8  mov x19,x1
710024bcdc  bl 0x71001e6720
710024bce0  adrp x8,0x71052a4000
710024bce4  ldr x8,[x8, #0xda8]
710024bce8  adrp x24,0x71052a4000
710024bcec  ldrb w8,[x8]
710024bcf0  ldr x24,[x24, #0xdb0]
710024bcf4  add x21,x24,#0x28
710024bcf8  cbz w8,0x710024bd34
710024bcfc  adrp x8,0x71052a4000
710024bd00  ldr x8,[x8, #0xdb8]
710024bd04  ldr x0,[x8]
710024bd08  bl 0x7101717960
710024bd0c  ldr w8,[x0]
710024bd10  cbz w8,0x710024bd34
710024bd14  ldr x10,[x24, #0xa0]
710024bd18  ldp x9,x10,[x10]
710024bd1c  sub x10,x10,x9
710024bd20  asr x10,x10,#0x3
710024bd24  cmp x10,x8
710024bd28  b.ls 0x710024bd4c
710024bd2c  ldr x8,[x9, x8, LSL #0x3]
710024bd30  add x21,x8,#0x20
710024bd34  ldr x8,[x21]
710024bd38  cbz x8,0x710024bd64
710024bd3c  ldr x8,[x8, #0x10]
710024bd40  cbz x8,0x710024bd64
710024bd44  ldr x21,[x8, #0x10]
710024bd48  b 0x710024bd68
710024bd4c  adrp x0,0x71042c4000
710024bd50  add x0,x0,#0x35f
710024bd54  mov w1,#0x47
710024bd58  orr w2,wzr,#0xe0000003
710024bd5c  mov w3,wzr
710024bd60  bl 0x71001b1300
710024bd64  mov x21,xzr
710024bd68  ldr x8,[x21, #0x78]!
710024bd6c  ldr x8,[x8, #0x10]
710024bd70  mov x0,x21
710024bd74  blr x8
710024bd78  ldrh w1,[x20, #0x48]
710024bd7c  add x0,sp,#0x40
710024bd80  mov w2,#0x1
710024bd84  bl 0x710022b480
710024bd88  add x0,sp,#0x40
710024bd8c  mov x1,x19
710024bd90  bl 0x710022b390
710024bd94  tbz w0,#0x0,0x710024bddc
710024bd98  mov w1,#0x2a
710024bd9c  add x0,sp,#0x40
710024bda0  bl 0x710022b400
710024bda4  add x0,sp,#0x40
710024bda8  mov w2,#0x4
710024bdac  mov x1,x23
710024bdb0  bl 0x71001d0460
710024bdb4  ldrb w8,[sp, #0x48]
710024bdb8  cbz w8,0x710024bde8
710024bdbc  mov w8,#0xa
710024bdc0  movk w8,#0x8001, LSL #16
710024bdc4  add x0,sp,#0x28
710024bdc8  add x1,sp,#0x24
710024bdcc  str w8,[sp, #0x24]
710024bdd0  bl 0x71001b4200
710024bdd4  add x1,sp,#0x28
710024bdd8  b 0x710024be18
710024bddc  mov w22,wzr
710024bde0  mov w23,wzr
710024bde4  b 0x710024be28
710024bde8  add x0,sp,#0x40
710024bdec  mov x1,x22
710024bdf0  bl 0x71001d0630
710024bdf4  ldrb w8,[sp, #0x48]
710024bdf8  cbz w8,0x710024be74
710024bdfc  mov w8,#0xa
710024be00  movk w8,#0x8001, LSL #16
710024be04  add x0,sp,#0x8
710024be08  add x1,sp,#0x24
710024be0c  str w8,[sp, #0x24]
710024be10  bl 0x71001b4200
710024be14  add x1,sp,#0x8
710024be18  mov x0,x19
710024be1c  bl 0x71001d0c90
710024be20  mov w23,wzr
710024be24  mov w22,#0x1
710024be28  ldr x8,[x21]
710024be2c  ldr x8,[x8, #0x20]
710024be30  mov x0,x21
710024be34  blr x8
710024be38  cbz w23,0x710024be50
710024be3c  add x2,sp,#0x40
710024be40  mov x0,x20
710024be44  mov x1,x19
710024be48  bl 0x710022a7f0
710024be4c  mov w22,w0
710024be50  add x0,sp,#0x40
710024be54  bl 0x71001e6910
710024be58  and w0,w22,#0x1
710024be5c  ldp x29,x30,[sp, #0xe0]
710024be60  ldp x20,x19,[sp, #0xd0]
710024be64  ldp x22,x21,[sp, #0xc0]
710024be68  ldp x24,x23,[sp, #0xb0]
710024be6c  add sp,sp,#0xf0
710024be70  ret
710024be74  adrp x8,0x71052a7000
710024be78  adrp x9,0x71052a7000
710024be7c  ldr x8,[x8, #0xae8]
710024be80  ldr x9,[x9, #0xb10]
710024be84  str x9,[x8, #0x148]
710024be88  ldrb w8,[x20, #0x70]
710024be8c  cbz w8,0x710024bea8
710024be90  mov w1,#0x10
710024be94  mov x0,x20
710024be98  bl 0x710022b500
710024be9c  tbz w0,#0x0,0x710024bea8
710024bea0  mov w23,#0x1
710024bea4  b 0x710024be28
710024bea8  add x2,sp,#0x40
710024beac  mov x0,x20
710024beb0  mov x1,x19
710024beb4  bl 0x710022a7f0
710024beb8  mov w22,w0
710024bebc  b 0x710024bde0
