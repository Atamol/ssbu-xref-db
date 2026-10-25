// addr:      71026aebf0
// offset:    0x26aebf0
// name:      FUN_71026aebf0
// mangled:   
// size:      68

71026aebf0  str x19,[sp, #-0x20]!
71026aebf4  stp x29,x30,[sp, #0x10]
71026aebf8  add x29,sp,#0x10
71026aebfc  adrp x8,0x71050cd000
71026aec00  add x8,x8,#0x9e0
71026aec04  mov x19,x0
71026aec08  str x8,[x0]
71026aec0c  ldr x0,[x0, #0xa0]
71026aec10  str xzr,[x19, #0xa0]
71026aec14  cbz x0,0x71026aec24
71026aec18  ldr x8,[x0]
71026aec1c  ldr x8,[x8, #0x8]
71026aec20  blr x8
71026aec24  ldp x29,x30,[sp, #0x10]
71026aec28  mov x0,x19
71026aec2c  ldr x19,[sp], #0x20
71026aec30  b 0x710392eb40
