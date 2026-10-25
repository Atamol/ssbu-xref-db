// addr:      710010be80
// offset:    0x10be80
// name:      FUN_710010be80
// mangled:   
// size:      440

710010be80  sub sp,sp,#0x90
710010be84  str x21,[sp, #0x60]
710010be88  stp x20,x19,[sp, #0x70]
710010be8c  stp x29,x30,[sp, #0x80]
710010be90  add x29,sp,#0x80
710010be94  adrp x8,0x71052a5000
710010be98  ldr x8,[x8, #0x80]
710010be9c  mov x19,x0
710010bea0  ldr x0,[x8]
710010bea4  bl 0x7100146ba0
710010bea8  sub w8,w0,#0x5
710010beac  cmp w8,#0x3
710010beb0  b.hi 0x710010bf08
710010beb4  adrp x9,0x7104496000
710010beb8  add x9,x9,#0x950
710010bebc  ldrsw x8,[x9, x8, LSL #0x2]
710010bec0  add x8,x8,x9
710010bec4  br x8
710010bec8  mov w8,#0xc406
710010becc  ldr x20,[x19, #0x58]
710010bed0  str w8,[sp, #0x40]
710010bed4  add x8,sp,#0x40
710010bed8  orr x21,x8,#0x4
710010bedc  mov x0,x21
710010bee0  bl 0x71039c0a80
710010bee4  sub x1,x29,#0x18
710010bee8  mov x0,x21
710010beec  stur wzr,[x29, #-0x18]
710010bef0  bl 0x71039c0a90
710010bef4  sub x0,x29,#0x30
710010bef8  add x1,sp,#0x40
710010befc  bl 0x71000bce50
710010bf00  sub x1,x29,#0x30
710010bf04  b 0x710010bff4
710010bf08  ldr x0,[x19, #0x90]
710010bf0c  add x1,x19,#0x60
710010bf10  add x8,sp,#0x40
710010bf14  bl 0x71000e6970
710010bf18  ldr w8,[sp, #0x40]
710010bf1c  cbz w8,0x710010c018
710010bf20  ldr x20,[x19, #0x58]
710010bf24  mov x0,sp
710010bf28  add x1,sp,#0x40
710010bf2c  bl 0x71000bce50
710010bf30  mov x1,sp
710010bf34  b 0x710010bff4
710010bf38  mov w8,#0xa471
710010bf3c  ldr x20,[x19, #0x58]
710010bf40  str w8,[sp, #0x40]
710010bf44  add x8,sp,#0x40
710010bf48  orr x21,x8,#0x4
710010bf4c  mov x0,x21
710010bf50  bl 0x71039c0a80
710010bf54  sub x1,x29,#0x18
710010bf58  mov x0,x21
710010bf5c  stur wzr,[x29, #-0x18]
710010bf60  bl 0x71039c0a90
710010bf64  add x0,sp,#0x30
710010bf68  add x1,sp,#0x40
710010bf6c  bl 0x71000bce50
710010bf70  add x1,sp,#0x30
710010bf74  b 0x710010bff4
710010bf78  mov w8,#0xc420
710010bf7c  ldr x20,[x19, #0x58]
710010bf80  str w8,[sp, #0x40]
710010bf84  add x8,sp,#0x40
710010bf88  orr x21,x8,#0x4
710010bf8c  mov x0,x21
710010bf90  bl 0x71039c0a80
710010bf94  sub x1,x29,#0x18
710010bf98  mov x0,x21
710010bf9c  stur wzr,[x29, #-0x18]
710010bfa0  bl 0x71039c0a90
710010bfa4  add x0,sp,#0x20
710010bfa8  add x1,sp,#0x40
710010bfac  bl 0x71000bce50
710010bfb0  add x1,sp,#0x20
710010bfb4  b 0x710010bff4
710010bfb8  mov w8,#0xc421
710010bfbc  ldr x20,[x19, #0x58]
710010bfc0  str w8,[sp, #0x40]
710010bfc4  add x8,sp,#0x40
710010bfc8  orr x21,x8,#0x4
710010bfcc  mov x0,x21
710010bfd0  bl 0x71039c0a80
710010bfd4  sub x1,x29,#0x18
710010bfd8  mov x0,x21
710010bfdc  stur wzr,[x29, #-0x18]
710010bfe0  bl 0x71039c0a90
710010bfe4  add x0,sp,#0x10
710010bfe8  add x1,sp,#0x40
710010bfec  bl 0x71000bce50
710010bff0  add x1,sp,#0x10
710010bff4  mov x0,x20
710010bff8  bl 0x71000b41f0
710010bffc  str xzr,[x19, #0x58]
710010c000  mov w0,#0x1
710010c004  ldp x29,x30,[sp, #0x80]
710010c008  ldr x21,[sp, #0x60]
710010c00c  ldp x20,x19,[sp, #0x70]
710010c010  add sp,sp,#0x90
710010c014  ret
710010c018  adrp x8,0x71052a5000
710010c01c  ldr x8,[x8, #0x680]
710010c020  adrp x9,0x7104318000
710010c024  add x9,x9,#0x289
710010c028  mov w0,#0x5
710010c02c  str x9,[x19, #0x40]
710010c030  stp x8,xzr,[x19, #0x30]
710010c034  b 0x710010c004
