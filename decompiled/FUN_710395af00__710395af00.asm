// addr:      710395af00
// offset:    0x395af00
// name:      FUN_710395af00
// mangled:   
// size:      80

710395af00  sub sp,sp,#0x20
710395af04  stp x29,x30,[sp, #0x10]
710395af08  add x29,sp,#0x10
710395af0c  str x0,[sp, #0x8]
710395af10  ldr x8,[sp, #0x8]
710395af14  ldr w8,[x8]
710395af18  cbnz w8,0x710395af44
710395af1c  b 0x710395af20
710395af20  ldr x0,[sp, #0x8]
710395af24  bl 0x710395b030
710395af28  ldr x0,[sp, #0x8]
710395af2c  adrp x1,0x710425e000
710395af30  add x1,x1,#0xa2
710395af34  bl 0x710395aa50
710395af38  ldr x0,[sp, #0x8]
710395af3c  bl 0x710395b080
710395af40  b 0x710395af44
710395af44  ldp x29,x30,[sp, #0x10]
710395af48  add sp,sp,#0x20
710395af4c  ret
