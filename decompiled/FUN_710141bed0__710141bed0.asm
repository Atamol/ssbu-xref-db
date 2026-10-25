// addr:      710141bed0
// offset:    0x141bed0
// name:      FUN_710141bed0
// mangled:   
// size:      132

710141bed0  str x19,[sp, #-0x20]!
710141bed4  stp x29,x30,[sp, #0x10]
710141bed8  add x29,sp,#0x10
710141bedc  ldr x19,[x0, #0x28]
710141bee0  ldrb w9,[x19, #0x48]
710141bee4  ldr x8,[x19, #0x8]
710141bee8  strb w9,[x19, #0x22]
710141beec  strb w9,[x19, #0x23]
710141bef0  strh wzr,[x19, #0x20]
710141bef4  ldr x8,[x8, #0x80]
710141bef8  cbz w9,0x710141bf04
710141befc  add x0,x8,#0xb0
710141bf00  b 0x710141bf08
710141bf04  add x0,x8,#0xa0
710141bf08  fmov s0,0x3f800000
710141bf0c  bl 0x710377aee0
710141bf10  ldrb w8,[x19, #0x48]
710141bf14  cbz w8,0x710141bf48
710141bf18  ldr w3,[x19, #0x4c]
710141bf1c  ldr x8,[x19, #0x8]
710141bf20  adrp x1,0x71043ad000
710141bf24  add x1,x1,#0x4f4
710141bf28  stp w3,w3,[x19, #0x3c]
710141bf2c  strh wzr,[x19, #0x38]
710141bf30  ldr x8,[x8, #0x80]
710141bf34  ldp x29,x30,[sp, #0x10]
710141bf38  add x0,x8,#0x90
710141bf3c  mov w2,#0x1
710141bf40  ldr x19,[sp], #0x20
710141bf44  b 0x710377a280
710141bf48  ldp x29,x30,[sp, #0x10]
710141bf4c  ldr x19,[sp], #0x20
710141bf50  ret
