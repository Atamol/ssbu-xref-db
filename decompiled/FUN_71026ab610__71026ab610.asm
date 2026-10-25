// addr:      71026ab610
// offset:    0x26ab610
// name:      FUN_71026ab610
// mangled:   
// size:      60

71026ab610  str x19,[sp, #-0x20]!
71026ab614  stp x29,x30,[sp, #0x10]
71026ab618  add x29,sp,#0x10
71026ab61c  adrp x8,0x71050cd000
71026ab620  add x8,x8,#0x28
71026ab624  mov x19,x0
71026ab628  str x8,[x0]
71026ab62c  ldr x0,[x0, #0x8]
71026ab630  str xzr,[x19, #0x8]
71026ab634  cbz x0,0x71026ab63c
71026ab638  bl 0x710392eb40
71026ab63c  ldp x29,x30,[sp, #0x10]
71026ab640  mov x0,x19
71026ab644  ldr x19,[sp], #0x20
71026ab648  b 0x710392eb40
