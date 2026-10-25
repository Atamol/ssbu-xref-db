// addr:      7100256ac0
// offset:    0x256ac0
// name:      FUN_7100256ac0
// mangled:   
// size:      76

7100256ac0  stp x20,x19,[sp, #-0x20]!
7100256ac4  stp x29,x30,[sp, #0x10]
7100256ac8  add x29,sp,#0x10
7100256acc  mov x20,x0
7100256ad0  ldr x0,[x1, #0x18]
7100256ad4  mov x19,x1
7100256ad8  adrp x1,0x71043df000
7100256adc  add x1,x1,#0x5e3
7100256ae0  bl 0x71001b4e00
7100256ae4  tbz w0,#0x0,0x7100256af8
7100256ae8  ldp x29,x30,[sp, #0x10]
7100256aec  mov w0,#0x1
7100256af0  ldp x20,x19,[sp], #0x20
7100256af4  ret
7100256af8  ldp x29,x30,[sp, #0x10]
7100256afc  mov x0,x20
7100256b00  mov x1,x19
7100256b04  ldp x20,x19,[sp], #0x20
7100256b08  b 0x710024cc10
