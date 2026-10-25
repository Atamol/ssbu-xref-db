// addr:      71026ab870
// offset:    0x26ab870
// name:      FUN_71026ab870
// mangled:   
// size:      36

71026ab870  adrp x9,0x71050cd000
71026ab874  add x9,x9,#0x48
71026ab878  mov x8,x0
71026ab87c  str x9,[x0]
71026ab880  ldr x0,[x0, #0x8]
71026ab884  str xzr,[x8, #0x8]
71026ab888  cbz x0,0x71026ab890
71026ab88c  b 0x710392eb40
71026ab890  ret
