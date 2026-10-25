// addr:      710023bd70
// offset:    0x23bd70
// name:      FUN_710023bd70
// mangled:   
// size:      324

710023bd70  str x21,[sp, #-0x30]!
710023bd74  stp x20,x19,[sp, #0x10]
710023bd78  stp x29,x30,[sp, #0x20]
710023bd7c  add x29,sp,#0x20
710023bd80  adrp x8,0x71052a4000
710023bd84  ldr x8,[x8, #0xda8]
710023bd88  adrp x21,0x71052a4000
710023bd8c  ldrb w8,[x8]
710023bd90  ldr x21,[x21, #0xdb0]
710023bd94  mov x19,x0
710023bd98  add x20,x21,#0x18
710023bd9c  cbz w8,0x710023bdd8
710023bda0  adrp x8,0x71052a4000
710023bda4  ldr x8,[x8, #0xdb8]
710023bda8  ldr x0,[x8]
710023bdac  bl 0x7101717960
710023bdb0  ldr w8,[x0]
710023bdb4  cbz w8,0x710023bdd8
710023bdb8  ldr x10,[x21, #0xa0]
710023bdbc  ldp x9,x10,[x10]
710023bdc0  sub x10,x10,x9
710023bdc4  asr x10,x10,#0x3
710023bdc8  cmp x10,x8
710023bdcc  b.ls 0x710023bdf0
710023bdd0  ldr x8,[x9, x8, LSL #0x3]
710023bdd4  add x20,x8,#0x10
710023bdd8  ldr x8,[x20]
710023bddc  cbz x8,0x710023be08
710023bde0  ldr x8,[x8, #0x10]
710023bde4  cbz x8,0x710023be08
710023bde8  ldr x2,[x8, #0xe8]
710023bdec  b 0x710023be0c
710023bdf0  adrp x0,0x71042c4000
710023bdf4  add x0,x0,#0x35f
710023bdf8  mov w1,#0x47
710023bdfc  orr w2,wzr,#0xe0000003
710023be00  mov w3,wzr
710023be04  bl 0x71001b1300
710023be08  mov x2,xzr
710023be0c  mov w1,#0xa
710023be10  mov x0,x19
710023be14  bl 0x7100230750
710023be18  adrp x8,0x71052a7000
710023be1c  ldr x8,[x8, #0x830]
710023be20  str xzr,[x19, #0x68]
710023be24  add x8,x8,#0x10
710023be28  mov w0,#0xd0
710023be2c  str x8,[x19]
710023be30  bl 0x71001af850
710023be34  mov x20,x0
710023be38  cbz x0,0x710023be9c
710023be3c  mov x0,x20
710023be40  bl 0x710022ec10
710023be44  adrp x8,0x71052a7000
710023be48  ldr x8,[x8, #0x828]
710023be4c  add x8,x8,#0x10
710023be50  str x8,[x20]
710023be54  mov x8,x20
710023be58  adrp x9,0x71052a6000
710023be5c  str xzr,[x8, #0x90]!
710023be60  str xzr,[x20, #0x98]
710023be64  ldr x9,[x9, #0xd20]
710023be68  str x8,[x20, #0x88]
710023be6c  mov x0,x20
710023be70  add x8,x9,#0x10
710023be74  mov w9,#0x1
710023be78  str x8,[x0, #0xa8]!
710023be7c  mov x8,#-0x1
710023be80  orr w1,wzr,#0x3
710023be84  str wzr,[x20, #0xb0]
710023be88  str w9,[x20, #0xc0]
710023be8c  str xzr,[x20, #0xa0]
710023be90  str x8,[x20, #0xb8]
710023be94  str x8,[x20, #0xc8]
710023be98  bl 0x71001daff0
710023be9c  mov x0,x19
710023bea0  mov x1,x20
710023bea4  ldp x29,x30,[sp, #0x20]
710023bea8  ldp x20,x19,[sp, #0x10]
710023beac  ldr x21,[sp], #0x30
710023beb0  b 0x71002315f0
