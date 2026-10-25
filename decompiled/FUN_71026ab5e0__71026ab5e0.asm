// addr:      71026ab5e0
// offset:    0x26ab5e0
// name:      FUN_71026ab5e0
// mangled:   
// size:      36

71026ab5e0  adrp x9,0x71050cd000
71026ab5e4  add x9,x9,#0x28
71026ab5e8  mov x8,x0
71026ab5ec  str x9,[x0]
71026ab5f0  ldr x0,[x0, #0x8]
71026ab5f4  str xzr,[x8, #0x8]
71026ab5f8  cbz x0,0x71026ab600
71026ab5fc  b 0x710392eb40
71026ab600  ret
