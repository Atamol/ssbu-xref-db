// addr:      710026bab0
// offset:    0x26bab0
// name:      FUN_710026bab0
// mangled:   
// size:      556

710026bab0  sub sp,sp,#0xf0
710026bab4  str x25,[sp, #0xa0]
710026bab8  stp x24,x23,[sp, #0xb0]
710026babc  stp x22,x21,[sp, #0xc0]
710026bac0  stp x20,x19,[sp, #0xd0]
710026bac4  stp x29,x30,[sp, #0xe0]
710026bac8  add x29,sp,#0xe0
710026bacc  mov x20,x0
710026bad0  add x0,sp,#0x30
710026bad4  mov x23,x4
710026bad8  mov x22,x3
710026badc  mov x24,x2
710026bae0  mov x19,x1
710026bae4  bl 0x71001e6720
710026bae8  adrp x8,0x71052a4000
710026baec  ldr x8,[x8, #0xda8]
710026baf0  adrp x25,0x71052a4000
710026baf4  ldrb w8,[x8]
710026baf8  ldr x25,[x25, #0xdb0]
710026bafc  add x21,x25,#0x28
710026bb00  cbz w8,0x710026bb3c
710026bb04  adrp x8,0x71052a4000
710026bb08  ldr x8,[x8, #0xdb8]
710026bb0c  ldr x0,[x8]
710026bb10  bl 0x7101717960
710026bb14  ldr w8,[x0]
710026bb18  cbz w8,0x710026bb3c
710026bb1c  ldr x10,[x25, #0xa0]
710026bb20  ldp x9,x10,[x10]
710026bb24  sub x10,x10,x9
710026bb28  asr x10,x10,#0x3
710026bb2c  cmp x10,x8
710026bb30  b.ls 0x710026bb54
710026bb34  ldr x8,[x9, x8, LSL #0x3]
710026bb38  add x21,x8,#0x20
710026bb3c  ldr x8,[x21]
710026bb40  cbz x8,0x710026bb6c
710026bb44  ldr x8,[x8, #0x10]
710026bb48  cbz x8,0x710026bb6c
710026bb4c  ldr x21,[x8, #0x10]
710026bb50  b 0x710026bb70
710026bb54  adrp x0,0x71042c4000
710026bb58  add x0,x0,#0x35f
710026bb5c  mov w1,#0x47
710026bb60  orr w2,wzr,#0xe0000003
710026bb64  mov w3,wzr
710026bb68  bl 0x71001b1300
710026bb6c  mov x21,xzr
710026bb70  ldr x8,[x21, #0x78]!
710026bb74  ldr x8,[x8, #0x10]
710026bb78  mov x0,x21
710026bb7c  blr x8
710026bb80  ldrh w1,[x20, #0x48]
710026bb84  add x0,sp,#0x30
710026bb88  mov w2,#0x1
710026bb8c  bl 0x710022b480
710026bb90  add x0,sp,#0x30
710026bb94  mov x1,x19
710026bb98  bl 0x710022b390
710026bb9c  tbz w0,#0x0,0x710026bbe0
710026bba0  add x0,sp,#0x30
710026bba4  mov w1,#0x10
710026bba8  bl 0x710022b400
710026bbac  add x0,sp,#0x30
710026bbb0  mov x1,x24
710026bbb4  bl 0x710028fdb0
710026bbb8  ldrb w8,[sp, #0x38]
710026bbbc  cbz w8,0x710026bbec
710026bbc0  mov w8,#0xa
710026bbc4  movk w8,#0x8001, LSL #16
710026bbc8  add x0,sp,#0x18
710026bbcc  sub x1,x29,#0x34
710026bbd0  stur w8,[x29, #-0x34]
710026bbd4  bl 0x71001b4200
710026bbd8  add x1,sp,#0x18
710026bbdc  b 0x710026bc20
710026bbe0  mov w22,wzr
710026bbe4  mov w23,wzr
710026bbe8  b 0x710026bc30
710026bbec  add x0,sp,#0x30
710026bbf0  mov w2,#0x8
710026bbf4  mov x1,x23
710026bbf8  bl 0x71001d0460
710026bbfc  ldrb w8,[sp, #0x38]
710026bc00  cbz w8,0x710026bc80
710026bc04  mov w8,#0xa
710026bc08  movk w8,#0x8001, LSL #16
710026bc0c  mov x0,sp
710026bc10  sub x1,x29,#0x34
710026bc14  stur w8,[x29, #-0x34]
710026bc18  bl 0x71001b4200
710026bc1c  mov x1,sp
710026bc20  mov x0,x19
710026bc24  bl 0x71001d0c90
710026bc28  mov w23,wzr
710026bc2c  mov w22,#0x1
710026bc30  ldr x8,[x21]
710026bc34  ldr x8,[x8, #0x20]
710026bc38  mov x0,x21
710026bc3c  blr x8
710026bc40  cbz w23,0x710026bc58
710026bc44  add x2,sp,#0x30
710026bc48  mov x0,x20
710026bc4c  mov x1,x19
710026bc50  bl 0x710022a7f0
710026bc54  mov w22,w0
710026bc58  add x0,sp,#0x30
710026bc5c  bl 0x71001e6910
710026bc60  and w0,w22,#0x1
710026bc64  ldp x29,x30,[sp, #0xe0]
710026bc68  ldp x20,x19,[sp, #0xd0]
710026bc6c  ldr x25,[sp, #0xa0]
710026bc70  ldp x22,x21,[sp, #0xc0]
710026bc74  ldp x24,x23,[sp, #0xb0]
710026bc78  add sp,sp,#0xf0
710026bc7c  ret
710026bc80  cbz x19,0x710026bc90
710026bc84  mov x0,x19
710026bc88  mov x1,x22
710026bc8c  bl 0x710022b430
710026bc90  adrp x8,0x71052a7000
710026bc94  adrp x9,0x71052a8000
710026bc98  ldr x8,[x8, #0xf30]
710026bc9c  ldr x9,[x9, #0x38]
710026bca0  str x9,[x8, #0x78]
710026bca4  ldrb w8,[x20, #0x70]
710026bca8  cbz w8,0x710026bcc4
710026bcac  mov w1,#0x10
710026bcb0  mov x0,x20
710026bcb4  bl 0x710022b500
710026bcb8  tbz w0,#0x0,0x710026bcc4
710026bcbc  mov w23,#0x1
710026bcc0  b 0x710026bc30
710026bcc4  add x2,sp,#0x30
710026bcc8  mov x0,x20
710026bccc  mov x1,x19
710026bcd0  bl 0x710022a7f0
710026bcd4  mov w22,w0
710026bcd8  b 0x710026bbe4
