// addr:      71026b0300
// offset:    0x26b0300
// name:      FUN_71026b0300
// mangled:   
// size:      36

71026b0300  adrp x9,0x71050cd000
71026b0304  add x9,x9,#0xb80
71026b0308  mov x8,x0
71026b030c  str x9,[x0]
71026b0310  ldr x0,[x0, #0x8]
71026b0314  str xzr,[x8, #0x8]
71026b0318  cbz x0,0x71026b0320
71026b031c  b 0x710392eb40
71026b0320  ret
