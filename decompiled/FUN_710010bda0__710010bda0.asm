// addr:      710010bda0
// offset:    0x10bda0
// name:      FUN_710010bda0
// mangled:   
// size:      220

710010bda0  sub sp,sp,#0x50
710010bda4  stp x20,x19,[sp, #0x30]
710010bda8  stp x29,x30,[sp, #0x40]
710010bdac  add x29,sp,#0x40
710010bdb0  mov x19,x8
710010bdb4  adrp x8,0x71052a5000
710010bdb8  ldr x8,[x8, #0x80]
710010bdbc  ldr x8,[x8]
710010bdc0  ldrb w9,[x8, #0x162]
710010bdc4  add x8,x8,x9, LSL #0x3
710010bdc8  mov x20,x0
710010bdcc  ldr x0,[x8, #0x168]
710010bdd0  str x0,[x20, #0x90]
710010bdd4  cbz x0,0x710010bdf0
710010bdd8  add x8,sp,#0x18
710010bddc  bl 0x71000e56d0
710010bde0  ldr w8,[sp, #0x18]
710010bde4  cbz w8,0x710010be24
710010bde8  add x1,sp,#0x18
710010bdec  b 0x710010be64
710010bdf0  mov w8,#0xc08
710010bdf4  movk w8,#0x1, LSL #16
710010bdf8  str w8,[sp, #0x18]
710010bdfc  add x8,sp,#0x18
710010be00  orr x20,x8,#0x4
710010be04  mov x0,x20
710010be08  bl 0x71039c0a80
710010be0c  add x1,sp,#0x8
710010be10  mov x0,x20
710010be14  str wzr,[sp, #0x8]
710010be18  bl 0x71039c0a90
710010be1c  add x1,sp,#0x18
710010be20  b 0x710010be64
710010be24  adrp x8,0x71052a5000
710010be28  ldr x8,[x8, #0x678]
710010be2c  adrp x9,0x7104339000
710010be30  add x9,x9,#0x4c5
710010be34  stp xzr,x9,[x20, #0x38]
710010be38  str x8,[x20, #0x30]
710010be3c  add x8,sp,#0x8
710010be40  orr x20,x8,#0x4
710010be44  mov x0,x20
710010be48  str wzr,[sp, #0x8]
710010be4c  bl 0x71039c0a80
710010be50  sub x1,x29,#0x18
710010be54  mov x0,x20
710010be58  stur wzr,[x29, #-0x18]
710010be5c  bl 0x71039c0a90
710010be60  add x1,sp,#0x8
710010be64  mov x0,x19
710010be68  bl 0x71000bce50
710010be6c  ldp x29,x30,[sp, #0x40]
710010be70  ldp x20,x19,[sp, #0x30]
710010be74  add sp,sp,#0x50
710010be78  ret
