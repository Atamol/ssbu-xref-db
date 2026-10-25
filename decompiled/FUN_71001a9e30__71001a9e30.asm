// addr:      71001a9e30
// offset:    0x1a9e30
// name:      FUN_71001a9e30
// mangled:   
// size:      184

71001a9e30  str x23,[sp, #-0x40]!
71001a9e34  stp x22,x21,[sp, #0x10]
71001a9e38  stp x20,x19,[sp, #0x20]
71001a9e3c  stp x29,x30,[sp, #0x30]
71001a9e40  add x29,sp,#0x30
71001a9e44  mov w20,w3
71001a9e48  mov w23,w2
71001a9e4c  mov w22,w1
71001a9e50  mov x19,x0
71001a9e54  bl 0x71000b4990
71001a9e58  mov w21,wzr
71001a9e5c  tbnz w0,#0x0,0x71001a9ed0
71001a9e60  cbz w23,0x71001a9ed0
71001a9e64  ldrb w9,[x19, #0x58]
71001a9e68  and w8,w22,#0xff
71001a9e6c  cmp w8,w9
71001a9e70  b.cs 0x71001a9ed0
71001a9e74  ldr w8,[x19, #0x5c]
71001a9e78  cmp w8,w23
71001a9e7c  b.hi 0x71001a9ecc
71001a9e80  b.ne 0x71001a9e98
71001a9e84  ldr x8,[x19, #0x70]
71001a9e88  and x9,x22,#0xff
71001a9e8c  ldr w8,[x8, x9, LSL #0x2]
71001a9e90  cmp w8,w20
71001a9e94  b.cs 0x71001a9ecc
71001a9e98  ldr x8,[x19]
71001a9e9c  ldr x8,[x8, #0x10]
71001a9ea0  mov w1,#0x1
71001a9ea4  mov x0,x19
71001a9ea8  mov w21,#0x1
71001a9eac  blr x8
71001a9eb0  adrp x8,0x71052a6000
71001a9eb4  ldr x8,[x8, #0x7f0]
71001a9eb8  stp x8,xzr,[x19, #0x30]
71001a9ebc  adrp x8,0x71043ef000
71001a9ec0  add x8,x8,#0xe1e
71001a9ec4  str x8,[x19, #0x40]
71001a9ec8  b 0x71001a9ed0
71001a9ecc  mov w21,wzr
71001a9ed0  mov w0,w21
71001a9ed4  ldp x29,x30,[sp, #0x30]
71001a9ed8  ldp x20,x19,[sp, #0x20]
71001a9edc  ldp x22,x21,[sp, #0x10]
71001a9ee0  ldr x23,[sp], #0x40
71001a9ee4  ret
