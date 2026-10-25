// addr:      710141bd50
// offset:    0x141bd50
// name:      FUN_710141bd50
// mangled:   
// size:      176

710141bd50  str x19,[sp, #-0x20]!
710141bd54  stp x29,x30,[sp, #0x10]
710141bd58  add x29,sp,#0x10
710141bd5c  ldr x19,[x0, #0x28]
710141bd60  ldrb w8,[x1, #0x14]
710141bd64  cbz w8,0x710141bd84
710141bd68  ldr x8,[x19]
710141bd6c  ldr x8,[x8, #0x10]
710141bd70  ldr x8,[x8, #0x8]
710141bd74  ldr w8,[x8, #0x50]
710141bd78  mvn w8,w8
710141bd7c  tst x8,#0x3
710141bd80  cset w8,eq
710141bd84  strb w8,[x19, #0x48]
710141bd88  ldr w9,[x1, #0x18]
710141bd8c  str w9,[x19, #0x4c]
710141bd90  ldr x9,[x19, #0x8]
710141bd94  strb w8,[x19, #0x23]
710141bd98  strb w8,[x19, #0x22]
710141bd9c  strh wzr,[x19, #0x20]
710141bda0  ldr x9,[x9, #0x80]
710141bda4  cbz w8,0x710141bdb0
710141bda8  add x0,x9,#0xb0
710141bdac  b 0x710141bdb4
710141bdb0  add x0,x9,#0xa0
710141bdb4  fmov s0,0x3f800000
710141bdb8  bl 0x710377aee0
710141bdbc  ldrb w8,[x19, #0x48]
710141bdc0  cbz w8,0x710141bdf4
710141bdc4  ldr w3,[x19, #0x4c]
710141bdc8  ldr x8,[x19, #0x8]
710141bdcc  adrp x1,0x71043ad000
710141bdd0  add x1,x1,#0x4f4
710141bdd4  stp w3,w3,[x19, #0x3c]
710141bdd8  strh wzr,[x19, #0x38]
710141bddc  ldr x8,[x8, #0x80]
710141bde0  ldp x29,x30,[sp, #0x10]
710141bde4  add x0,x8,#0x90
710141bde8  mov w2,#0x1
710141bdec  ldr x19,[sp], #0x20
710141bdf0  b 0x710377a280
710141bdf4  ldp x29,x30,[sp, #0x10]
710141bdf8  ldr x19,[sp], #0x20
710141bdfc  ret
