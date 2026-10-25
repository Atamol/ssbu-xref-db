// addr:      71013cdc00
// offset:    0x13cdc00
// name:      FUN_71013cdc00
// mangled:   
// size:      216

71013cdc00  str x19,[sp, #-0x20]!
71013cdc04  stp x29,x30,[sp, #0x10]
71013cdc08  add x29,sp,#0x10
71013cdc0c  ldr x8,[x0, #0x50]
71013cdc10  ldr x8,[x8]
71013cdc14  ldr x8,[x8, #0x8]
71013cdc18  ldr x8,[x8]
71013cdc1c  ldr x19,[x8, #0xcd0]
71013cdc20  ldr x0,[x19, #0x28]
71013cdc24  ldrsw x2,[x0, #0x70]
71013cdc28  ldr w3,[x0, #0x68]
71013cdc2c  adrp x1,0x7104544000
71013cdc30  add x1,x1,#0xe08
71013cdc34  mov w4,wzr
71013cdc38  bl 0x710323beb0
71013cdc3c  adrp x0,0x71043ad000
71013cdc40  add x0,x0,#0x508
71013cdc44  mov w1,#0x1
71013cdc48  bl 0x710323af70
71013cdc4c  tst x0,#0xffffffffff
71013cdc50  str x0,[sp, #0x8]
71013cdc54  b.eq 0x71013cdc6c
71013cdc58  ldr x0,[x19, #0x28]
71013cdc5c  ldrsw x2,[x0, #0x70]
71013cdc60  ldr w3,[x0, #0x68]
71013cdc64  add x1,sp,#0x8
71013cdc68  bl 0x710323c4e0
71013cdc6c  adrp x0,0x71042d6000
71013cdc70  add x0,x0,#0x46
71013cdc74  mov w1,#0x1
71013cdc78  bl 0x710323af70
71013cdc7c  tst x0,#0xffffffffff
71013cdc80  str x0,[sp, #0x8]
71013cdc84  b.eq 0x71013cdc9c
71013cdc88  ldr x0,[x19, #0x28]
71013cdc8c  ldrsw x2,[x0, #0x70]
71013cdc90  ldr w3,[x0, #0x68]
71013cdc94  add x1,sp,#0x8
71013cdc98  bl 0x710323c4e0
71013cdc9c  adrp x0,0x7104329000
71013cdca0  add x0,x0,#0xce9
71013cdca4  mov w1,#0x1
71013cdca8  bl 0x710323af70
71013cdcac  tst x0,#0xffffffffff
71013cdcb0  str x0,[sp, #0x8]
71013cdcb4  b.eq 0x71013cdccc
71013cdcb8  ldr x0,[x19, #0x28]
71013cdcbc  ldrsw x2,[x0, #0x70]
71013cdcc0  ldr w3,[x0, #0x68]
71013cdcc4  add x1,sp,#0x8
71013cdcc8  bl 0x710323c4e0
71013cdccc  ldp x29,x30,[sp, #0x10]
71013cdcd0  ldr x19,[sp], #0x20
71013cdcd4  ret
