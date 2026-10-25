// addr:      710012aaa0
// offset:    0x12aaa0
// name:      FUN_710012aaa0
// mangled:   
// size:      388

710012aaa0  sub sp,sp,#0x80
710012aaa4  str x23,[sp, #0x40]
710012aaa8  stp x22,x21,[sp, #0x50]
710012aaac  stp x20,x19,[sp, #0x60]
710012aab0  stp x29,x30,[sp, #0x70]
710012aab4  add x29,sp,#0x70
710012aab8  add x21,x0,#0x60
710012aabc  mov x22,x2
710012aac0  mov x20,x0
710012aac4  mov x19,x8
710012aac8  mov w3,#0x11
710012aacc  add x8,sp,#0x30
710012aad0  mov w2,#0x2
710012aad4  mov x0,x21
710012aad8  bl 0x71000b9f60
710012aadc  ldr w8,[sp, #0x30]
710012aae0  cbz w8,0x710012ab20
710012aae4  mov w8,#0xc08
710012aae8  movk w8,#0x1, LSL #16
710012aaec  str w8,[sp, #0x10]
710012aaf0  add x8,sp,#0x10
710012aaf4  orr x20,x8,#0x4
710012aaf8  mov x0,x20
710012aafc  bl 0x71039c0a80
710012ab00  mov x1,sp
710012ab04  mov x0,x20
710012ab08  str wzr,[sp]
710012ab0c  bl 0x71039c0a90
710012ab10  add x1,sp,#0x10
710012ab14  mov x0,x19
710012ab18  bl 0x71000bce50
710012ab1c  b 0x710012ac0c
710012ab20  add x0,sp,#0x10
710012ab24  bl 0x71000b1c30
710012ab28  mov w23,#0x7530
710012ab2c  mov x8,sp
710012ab30  add x1,sp,#0x10
710012ab34  mov w3,#0x1
710012ab38  mov x0,x21
710012ab3c  strh w23,[sp, #0x28]
710012ab40  mov w2,wzr
710012ab44  bl 0x71000ba0c0
710012ab48  add x0,sp,#0x30
710012ab4c  mov x1,sp
710012ab50  bl 0x71000bcf30
710012ab54  ldr w8,[sp, #0x30]
710012ab58  cbz w8,0x710012ab88
710012ab5c  ldr w8,[sp, #0x30]
710012ab60  cbz w8,0x710012ab90
710012ab64  mov x8,sp
710012ab68  mov x0,x21
710012ab6c  mov x20,sp
710012ab70  bl 0x71000ba010
710012ab74  mov w8,#0xc08
710012ab78  movk w8,#0x1, LSL #16
710012ab7c  orr x20,x20,#0x4
710012ab80  str w8,[sp]
710012ab84  b 0x710012abe0
710012ab88  cbz x22,0x710012ab90
710012ab8c  strh w23,[x22]
710012ab90  add x0,x20,#0xd88
710012ab94  bl 0x71000b40e0
710012ab98  mov w8,#0x1
710012ab9c  strb w8,[x20, #0xdc0]
710012aba0  ldr x8,[x20]
710012aba4  strb wzr,[x20, #0xd81]
710012aba8  str xzr,[x20, #0xdc8]
710012abac  ldr x8,[x8, #0x10]
710012abb0  mov w1,#0x1
710012abb4  mov x0,x20
710012abb8  blr x8
710012abbc  adrp x8,0x71052a5000
710012abc0  ldr x8,[x8, #0xb88]
710012abc4  adrp x9,0x710435a000
710012abc8  add x9,x9,#0x865
710012abcc  stp xzr,x9,[x20, #0x38]
710012abd0  str x8,[x20, #0x30]
710012abd4  mov x8,sp
710012abd8  str wzr,[sp]
710012abdc  orr x20,x8,#0x4
710012abe0  mov x0,x20
710012abe4  bl 0x71039c0a80
710012abe8  sub x1,x29,#0x28
710012abec  mov x0,x20
710012abf0  stur wzr,[x29, #-0x28]
710012abf4  bl 0x71039c0a90
710012abf8  mov x1,sp
710012abfc  mov x0,x19
710012ac00  bl 0x71000bce50
710012ac04  add x0,sp,#0x10
710012ac08  bl 0x71000b1cf0
710012ac0c  ldp x29,x30,[sp, #0x70]
710012ac10  ldr x23,[sp, #0x40]
710012ac14  ldp x20,x19,[sp, #0x60]
710012ac18  ldp x22,x21,[sp, #0x50]
710012ac1c  add sp,sp,#0x80
710012ac20  ret
