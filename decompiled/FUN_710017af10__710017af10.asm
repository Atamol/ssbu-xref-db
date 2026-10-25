// addr:      710017af10
// offset:    0x17af10
// name:      FUN_710017af10
// mangled:   
// size:      160

710017af10  stp x20,x19,[sp, #-0x20]!
710017af14  stp x29,x30,[sp, #0x10]
710017af18  add x29,sp,#0x10
710017af1c  adrp x20,0x71052a5000
710017af20  ldr x20,[x20, #0x80]
710017af24  ldr x8,[x20]
710017af28  ldrb w9,[x8, #0x162]
710017af2c  add x8,x8,x9, LSL #0x3
710017af30  mov x19,x0
710017af34  ldr x0,[x8, #0x168]
710017af38  ldr x8,[x0]
710017af3c  ldr x8,[x8, #0x78]
710017af40  blr x8
710017af44  tbz w0,#0x0,0x710017af90
710017af48  ldr x0,[x20]
710017af4c  mov w1,wzr
710017af50  bl 0x7100149270
710017af54  ldr w8,[x19, #0x60]
710017af58  cmp w8,#0x2
710017af5c  b.eq 0x710017af68
710017af60  cmp w8,#0x3
710017af64  b.ne 0x710017afa0
710017af68  adrp x8,0x71052a5000
710017af6c  ldr x8,[x8, #0x510]
710017af70  mov x0,xzr
710017af74  stp x8,xzr,[x19, #0x30]
710017af78  adrp x8,0x7104432000
710017af7c  add x8,x8,#0x3da
710017af80  str x8,[x19, #0x40]
710017af84  ldp x29,x30,[sp, #0x10]
710017af88  ldp x20,x19,[sp], #0x20
710017af8c  ret
710017af90  mov w0,#0x5
710017af94  ldp x29,x30,[sp, #0x10]
710017af98  ldp x20,x19,[sp], #0x20
710017af9c  ret
710017afa0  mov w0,#0x5
710017afa4  ldp x29,x30,[sp, #0x10]
710017afa8  ldp x20,x19,[sp], #0x20
710017afac  ret
