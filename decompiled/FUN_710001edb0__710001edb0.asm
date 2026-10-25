// addr:      710001edb0
// offset:    0x1edb0
// name:      FUN_710001edb0
// mangled:   
// size:      276

710001edb0  ldrb w8,[x0, #0x817]
710001edb4  cbz w8,0x710001ee30
710001edb8  str x19,[sp, #-0x20]!
710001edbc  stp x29,x30,[sp, #0x10]
710001edc0  add x29,sp,#0x10
710001edc4  ldrb w8,[x0, #0x816]
710001edc8  mov w4,w1
710001edcc  mov x19,x0
710001edd0  cbz w8,0x710001ee54
710001edd4  ldr x2,[x19, #0x160]
710001edd8  ldr w3,[x19, #0x170]
710001eddc  mov w8,#0x1
710001ede0  strb w8,[x19, #0x833]
710001ede4  ldr w8,[x19, #0x138]
710001ede8  sub w8,w8,#0x4
710001edec  cmp w8,#0x3
710001edf0  b.hi 0x710001ee70
710001edf4  adrp x9,0x710446c000
710001edf8  add x9,x9,#0xa8c
710001edfc  ldrsw x8,[x9, x8, LSL #0x2]
710001ee00  add x8,x8,x9
710001ee04  br x8
710001ee08  ldr x0,[x19, #0x140]
710001ee0c  mov x1,x2
710001ee10  mov w2,w3
710001ee14  mov w3,w4
710001ee18  mov x4,x19
710001ee1c  bl 0x7100022dc0
710001ee20  strb wzr,[x19, #0x833]
710001ee24  ldp x29,x30,[sp, #0x10]
710001ee28  ldr x19,[sp], #0x20
710001ee2c  ret
710001ee30  mov w0,wzr
710001ee34  ret
710001ee38  ldp x0,x1,[x19, #0x140]
710001ee3c  mov x5,x19
710001ee40  bl 0x7100023290
710001ee44  strb wzr,[x19, #0x833]
710001ee48  ldp x29,x30,[sp, #0x10]
710001ee4c  ldr x19,[sp], #0x20
710001ee50  ret
710001ee54  ldrb w8,[x19, #0x813]
710001ee58  cbz w8,0x710001ee94
710001ee5c  ldr x2,[x19, #0x100]
710001ee60  cmp w4,#0x1
710001ee64  b.ne 0x710001eeac
710001ee68  ldrh w3,[x19, #0x1a0]
710001ee6c  b 0x710001eddc
710001ee70  ldr x0,[x19]
710001ee74  adrp x1,0x71043ef000
710001ee78  add x1,x1,#0x67b
710001ee7c  bl 0x7100016040
710001ee80  orr w0,wzr,#0x7
710001ee84  strb wzr,[x19, #0x833]
710001ee88  ldp x29,x30,[sp, #0x10]
710001ee8c  ldr x19,[sp], #0x20
710001ee90  ret
710001ee94  cmp w4,#0x1
710001ee98  b.ne 0x710001eea8
710001ee9c  ldr x2,[x19, #0xe8]
710001eea0  ldrh w3,[x19, #0x1a0]
710001eea4  b 0x710001eddc
710001eea8  ldr x2,[x19, #0xd8]
710001eeac  ldrb w8,[x19, #0x814]
710001eeb0  cbz w8,0x710001eebc
710001eeb4  ldr w3,[x19, #0x19c]
710001eeb8  b 0x710001eddc
710001eebc  ldr w3,[x19, #0x198]
710001eec0  b 0x710001eddc
