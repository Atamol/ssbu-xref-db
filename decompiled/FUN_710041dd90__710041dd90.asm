// addr:      710041dd90
// offset:    0x41dd90
// name:      FUN_710041dd90
// mangled:   
// size:      112

710041dd90  stp x29,x30,[sp, #-0x10]!
710041dd94  mov x29,sp
710041dd98  adrp x8,0x7105324000
710041dd9c  str wzr,[x8, #0x938]
710041dda0  adrp x8,0x7105324000
710041dda4  adrp x9,0x7104430000
710041dda8  add x9,x9,#0xe20
710041ddac  str x9,[x8, #0x940]
710041ddb0  adrp x8,0x7105324000
710041ddb4  add x8,x8,#0x960
710041ddb8  ldarb w8,[x8]
710041ddbc  tbz w8,#0x0,0x710041dde0
710041ddc0  adrp x8,0x7105324000
710041ddc4  add x8,x8,#0x948
710041ddc8  adrp x9,0x71050a4000
710041ddcc  add x9,x9,#0x2c0
710041ddd0  stp xzr,xzr,[x8, #0x8]
710041ddd4  str x9,[x8]
710041ddd8  ldp x29,x30,[sp], #0x10
710041dddc  ret
710041dde0  adrp x0,0x7105324000
710041dde4  add x0,x0,#0x960
710041dde8  bl 0x71039c06b0
710041ddec  cbz w0,0x710041ddc0
710041ddf0  adrp x0,0x7105324000
710041ddf4  add x0,x0,#0x960
710041ddf8  bl 0x71039c06c0
710041ddfc  b 0x710041ddc0
