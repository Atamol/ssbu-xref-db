// addr:      710141be10
// offset:    0x141be10
// name:      FUN_710141be10
// mangled:   
// size:      172

710141be10  str x19,[sp, #-0x20]!
710141be14  stp x29,x30,[sp, #0x10]
710141be18  add x29,sp,#0x10
710141be1c  ldr x19,[x0, #0x28]
710141be20  ldrb w8,[x19, #0x21]
710141be24  cbnz w8,0x710141be3c
710141be28  ldr x8,[x19]
710141be2c  ldr x8,[x8, #0x10]
710141be30  ldr x8,[x8, #0x8]
710141be34  ldrb w8,[x8, #0x49]
710141be38  cbz w8,0x710141be80
710141be3c  ldrb w8,[x19, #0x23]
710141be40  cbz w8,0x710141be6c
710141be44  ldp x8,x9,[x19]
710141be48  ldr x8,[x8, #0x10]
710141be4c  ldr x8,[x8, #0x8]
710141be50  ldr w8,[x8, #0x50]
710141be54  mvn w8,w8
710141be58  tst x8,#0x3
710141be5c  ldr x8,[x9, #0x80]
710141be60  b.ne 0x710141be74
710141be64  add x0,x8,#0xb0
710141be68  b 0x710141be78
710141be6c  ldr x8,[x19, #0x8]
710141be70  ldr x8,[x8, #0x80]
710141be74  add x0,x8,#0xa0
710141be78  fmov s0,0x3f800000
710141be7c  bl 0x710377aee0
710141be80  ldrb w8,[x19, #0x39]
710141be84  cbz w8,0x710141beb0
710141be88  ldr x8,[x19, #0x8]
710141be8c  ldr x8,[x8, #0x80]
710141be90  ldr w3,[x19, #0x40]
710141be94  ldp x29,x30,[sp, #0x10]
710141be98  adrp x1,0x71043ad000
710141be9c  add x1,x1,#0x4f4
710141bea0  mov w2,#0x1
710141bea4  add x0,x8,#0x90
710141bea8  ldr x19,[sp], #0x20
710141beac  b 0x710377a280
710141beb0  ldp x29,x30,[sp, #0x10]
710141beb4  ldr x19,[sp], #0x20
710141beb8  ret
