// addr:      710020bd90
// offset:    0x20bd90
// name:      FUN_710020bd90
// mangled:   
// size:      284

710020bd90  stp x22,x21,[sp, #-0x30]!
710020bd94  stp x20,x19,[sp, #0x10]
710020bd98  stp x29,x30,[sp, #0x20]
710020bd9c  add x29,sp,#0x20
710020bda0  adrp x8,0x71052a4000
710020bda4  ldr x8,[x8, #0xda8]
710020bda8  adrp x22,0x71052a4000
710020bdac  ldrb w8,[x8]
710020bdb0  ldr x22,[x22, #0xdb0]
710020bdb4  mov x19,x1
710020bdb8  mov x20,x0
710020bdbc  add x21,x22,#0x28
710020bdc0  cbz w8,0x710020bdfc
710020bdc4  adrp x8,0x71052a4000
710020bdc8  ldr x8,[x8, #0xdb8]
710020bdcc  ldr x0,[x8]
710020bdd0  bl 0x7101717960
710020bdd4  ldr w8,[x0]
710020bdd8  cbz w8,0x710020bdfc
710020bddc  ldr x10,[x22, #0xa0]
710020bde0  ldp x9,x10,[x10]
710020bde4  sub x10,x10,x9
710020bde8  asr x10,x10,#0x3
710020bdec  cmp x10,x8
710020bdf0  b.ls 0x710020be14
710020bdf4  ldr x8,[x9, x8, LSL #0x3]
710020bdf8  add x21,x8,#0x20
710020bdfc  ldr x8,[x21]
710020be00  cbz x8,0x710020be2c
710020be04  ldr x8,[x8, #0x10]
710020be08  cbz x8,0x710020be2c
710020be0c  ldr x21,[x8, #0x10]
710020be10  b 0x710020be30
710020be14  adrp x0,0x71042c4000
710020be18  add x0,x0,#0x35f
710020be1c  mov w1,#0x47
710020be20  orr w2,wzr,#0xe0000003
710020be24  mov w3,wzr
710020be28  bl 0x71001b1300
710020be2c  mov x21,xzr
710020be30  ldr x8,[x21, #0x78]!
710020be34  ldr x8,[x8, #0x10]
710020be38  mov x0,x21
710020be3c  blr x8
710020be40  ldr x9,[x20, #0x110]
710020be44  cbz x9,0x710020be7c
710020be48  add x10,x20,#0x110
710020be4c  mov x8,x10
710020be50  ldr x11,[x9, #0x20]
710020be54  cmp x11,x19
710020be58  cset w11,cc
710020be5c  csel x8,x8,x9,cc
710020be60  ldr x9,[x9, w11, UXTW #0x3]
710020be64  cbnz x9,0x710020be50
710020be68  cmp x8,x10
710020be6c  b.eq 0x710020be7c
710020be70  ldr x9,[x8, #0x20]
710020be74  cmp x9,x19
710020be78  b.ls 0x710020be84
710020be7c  mov x19,xzr
710020be80  b 0x710020be88
710020be84  ldr x19,[x8, #0x28]
710020be88  ldr x8,[x21]
710020be8c  ldr x8,[x8, #0x20]
710020be90  mov x0,x21
710020be94  blr x8
710020be98  mov x0,x19
710020be9c  ldp x29,x30,[sp, #0x20]
710020bea0  ldp x20,x19,[sp, #0x10]
710020bea4  ldp x22,x21,[sp], #0x30
710020bea8  ret
