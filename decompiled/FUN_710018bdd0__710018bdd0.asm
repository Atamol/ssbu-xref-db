// addr:      710018bdd0
// offset:    0x18bdd0
// name:      FUN_710018bdd0
// mangled:   
// size:      136

710018bdd0  str x19,[sp, #-0x20]!
710018bdd4  stp x29,x30,[sp, #0x10]
710018bdd8  add x29,sp,#0x10
710018bddc  ldrb w8,[x0, #0x80]
710018bde0  mov x19,x0
710018bde4  cbz w8,0x710018be20
710018bde8  mov x0,x19
710018bdec  bl 0x710018a7d0
710018bdf0  tbnz w0,#0x0,0x710018be0c
710018bdf4  mov x0,x19
710018bdf8  bl 0x710018b370
710018bdfc  tbnz w0,#0x0,0x710018be0c
710018be00  mov x0,x19
710018be04  bl 0x710018b870
710018be08  tbz w0,#0x0,0x710018be48
710018be0c  strb wzr,[x19, #0x80]
710018be10  mov w0,#0x1
710018be14  ldp x29,x30,[sp, #0x10]
710018be18  ldr x19,[sp], #0x20
710018be1c  ret
710018be20  adrp x8,0x71052a6000
710018be24  ldr x8,[x8, #0x5d0]
710018be28  mov x0,xzr
710018be2c  stp x8,xzr,[x19, #0x30]
710018be30  adrp x8,0x710424e000
710018be34  add x8,x8,#0xa01
710018be38  str x8,[x19, #0x40]
710018be3c  ldp x29,x30,[sp, #0x10]
710018be40  ldr x19,[sp], #0x20
710018be44  ret
710018be48  mov w0,#0x5
710018be4c  ldp x29,x30,[sp, #0x10]
710018be50  ldr x19,[sp], #0x20
710018be54  ret
