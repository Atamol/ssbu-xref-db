// addr:      7101eda450
// offset:    0x1eda450
// name:      FUN_7101eda450
// mangled:   
// size:      68

7101eda450  stp x29,x30,[sp, #-0x10]!
7101eda454  mov x29,sp
7101eda458  ldr x0,[x0, #0x80]
7101eda45c  adrp x1,0x7104401000
7101eda460  add x1,x1,#0xd0e
7101eda464  bl 0x71032cbb00
7101eda468  cbz x0,0x7101eda488
7101eda46c  ldr x8,[x0]
7101eda470  ldr x8,[x8]
7101eda474  ldr x8,[x8]
7101eda478  ldr x8,[x8, #0x600]
7101eda47c  ldr w0,[x8, #0x48c]
7101eda480  ldp x29,x30,[sp], #0x10
7101eda484  ret
7101eda488  mov w0,#0xffffffff
7101eda48c  ldp x29,x30,[sp], #0x10
7101eda490  ret
