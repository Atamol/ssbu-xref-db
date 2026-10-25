// addr:      710017bbd0
// offset:    0x17bbd0
// name:      FUN_710017bbd0
// mangled:   
// size:      612

710017bbd0  sub sp,sp,#0x80
710017bbd4  str x25,[sp, #0x30]
710017bbd8  stp x24,x23,[sp, #0x40]
710017bbdc  stp x22,x21,[sp, #0x50]
710017bbe0  stp x20,x19,[sp, #0x60]
710017bbe4  stp x29,x30,[sp, #0x70]
710017bbe8  add x29,sp,#0x70
710017bbec  mov x19,x8
710017bbf0  cbz x3,0x710017bc30
710017bbf4  cbz x2,0x710017bc30
710017bbf8  str x2,[x0, #0x98]
710017bbfc  ldr x8,[x2]
710017bc00  ldr x8,[x8, #0x138]
710017bc04  mov x20,x0
710017bc08  mov x0,x2
710017bc0c  mov w22,w4
710017bc10  mov x23,x3
710017bc14  mov w21,w1
710017bc18  blr x8
710017bc1c  tbz w0,#0x0,0x710017bc84
710017bc20  mov w8,#0xc07
710017bc24  movk w8,#0x1, LSL #16
710017bc28  add w8,w8,#0x1
710017bc2c  b 0x710017bc38
710017bc30  mov w8,#0xc07
710017bc34  movk w8,#0x1, LSL #16
710017bc38  str w8,[sp, #0x20]
710017bc3c  add x8,sp,#0x20
710017bc40  orr x20,x8,#0x4
710017bc44  mov x0,x20
710017bc48  bl 0x71039c0a80
710017bc4c  add x1,sp,#0x10
710017bc50  mov x0,x20
710017bc54  str wzr,[sp, #0x10]
710017bc58  bl 0x71039c0a90
710017bc5c  add x1,sp,#0x20
710017bc60  mov x0,x19
710017bc64  bl 0x71000bce50
710017bc68  ldp x29,x30,[sp, #0x70]
710017bc6c  ldr x25,[sp, #0x30]
710017bc70  ldp x20,x19,[sp, #0x60]
710017bc74  ldp x22,x21,[sp, #0x50]
710017bc78  ldp x24,x23,[sp, #0x40]
710017bc7c  add sp,sp,#0x80
710017bc80  ret
710017bc84  add x8,sp,#0x20
710017bc88  orr x24,x8,#0x4
710017bc8c  mov x0,x24
710017bc90  str wzr,[x20, #0xa0]
710017bc94  str wzr,[sp, #0x20]
710017bc98  bl 0x71039c0a80
710017bc9c  add x1,sp,#0x10
710017bca0  mov x0,x24
710017bca4  str wzr,[sp, #0x10]
710017bca8  bl 0x71039c0a90
710017bcac  ldr x8,[x23]
710017bcb0  ldr x8,[x8, #0x38]
710017bcb4  mov w1,#0x1
710017bcb8  mov x0,x23
710017bcbc  blr x8
710017bcc0  tbz w0,#0x0,0x710017bda8
710017bcc4  ldr x8,[x23]
710017bcc8  ldr x8,[x8, #0x50]
710017bccc  ldr x24,[x20, #0x98]
710017bcd0  mov x0,x23
710017bcd4  blr x8
710017bcd8  ldr x8,[x23]
710017bcdc  ldr x8,[x8, #0x20]
710017bce0  mov x25,x0
710017bce4  mov x0,x23
710017bce8  blr x8
710017bcec  mov w2,w0
710017bcf0  add x8,sp,#0x10
710017bcf4  mov x0,x24
710017bcf8  mov x1,x25
710017bcfc  add x23,sp,#0x10
710017bd00  bl 0x71001792f0
710017bd04  add x0,sp,#0x20
710017bd08  add x1,sp,#0x10
710017bd0c  bl 0x71000bcf30
710017bd10  ldr w8,[sp, #0x20]
710017bd14  cbz w8,0x710017bda8
710017bd18  mov w22,#0xc07
710017bd1c  movk w22,#0x1, LSL #16
710017bd20  orr x21,x23,#0x4
710017bd24  add w8,w22,#0x1
710017bd28  mov x0,x21
710017bd2c  str w8,[sp, #0x10]
710017bd30  bl 0x71039c0a80
710017bd34  mov x1,sp
710017bd38  mov x0,x21
710017bd3c  str wzr,[sp]
710017bd40  mov x23,sp
710017bd44  bl 0x71039c0a90
710017bd48  ldr w8,[sp, #0x20]
710017bd4c  ldr w9,[sp, #0x10]
710017bd50  cmp w8,w9
710017bd54  b.eq 0x710017bc5c
710017bd58  orr x21,x23,#0x4
710017bd5c  mov x0,x21
710017bd60  str w22,[sp]
710017bd64  bl 0x71039c0a80
710017bd68  add x1,sp,#0x38
710017bd6c  mov x0,x21
710017bd70  str wzr,[sp, #0x38]
710017bd74  bl 0x71039c0a90
710017bd78  ldr w8,[sp, #0x20]
710017bd7c  ldr w9,[sp]
710017bd80  cmp w8,w9
710017bd84  b.eq 0x710017bc5c
710017bd88  add x0,x20,#0xa4
710017bd8c  add x1,sp,#0x20
710017bd90  bl 0x71000bcf30
710017bd94  adrp x8,0x71052a6000
710017bd98  ldr x8,[x8, #0x378]
710017bd9c  adrp x9,0x7104318000
710017bda0  add x9,x9,#0x368
710017bda4  b 0x710017be00
710017bda8  add x23,x20,#0x60
710017bdac  mov x0,x23
710017bdb0  bl 0x71000b40e0
710017bdb4  tbz w22,#0x0,0x710017bdf0
710017bdb8  ldr x0,[x20, #0x98]
710017bdbc  ldr x8,[x0]
710017bdc0  ldr x9,[x8, #0x80]
710017bdc4  add x8,sp,#0x10
710017bdc8  mov x1,x23
710017bdcc  mov w2,w21
710017bdd0  blr x9
710017bdd4  add x0,sp,#0x20
710017bdd8  add x1,sp,#0x10
710017bddc  bl 0x71000bcf30
710017bde0  ldr w8,[sp, #0x20]
710017bde4  cbnz w8,0x710017bc5c
710017bde8  mov w8,#0x1
710017bdec  str w8,[x20, #0xa0]
710017bdf0  adrp x8,0x71052a6000
710017bdf4  ldr x8,[x8, #0x380]
710017bdf8  adrp x9,0x71043bd000
710017bdfc  add x9,x9,#0x997
710017be00  str x8,[x20, #0x30]
710017be04  add x8,sp,#0x10
710017be08  stp xzr,x9,[x20, #0x38]
710017be0c  orr x20,x8,#0x4
710017be10  mov x0,x20
710017be14  str wzr,[sp, #0x10]
710017be18  bl 0x71039c0a80
710017be1c  mov x1,sp
710017be20  mov x0,x20
710017be24  str wzr,[sp]
710017be28  bl 0x71039c0a90
710017be2c  add x1,sp,#0x10
710017be30  b 0x710017bc60
