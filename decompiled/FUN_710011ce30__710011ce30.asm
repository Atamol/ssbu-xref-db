// addr:      710011ce30
// offset:    0x11ce30
// name:      FUN_710011ce30
// mangled:   
// size:      276

710011ce30  sub sp,sp,#0x40
710011ce34  stp x20,x19,[sp, #0x20]
710011ce38  stp x29,x30,[sp, #0x30]
710011ce3c  add x29,sp,#0x30
710011ce40  ldr x8,[x0, #0x58]
710011ce44  mov x19,x0
710011ce48  cbz x8,0x710011ce80
710011ce4c  ldrb w8,[x8, #0x28]
710011ce50  cbz w8,0x710011ce80
710011ce54  mov w8,#0x6c05
710011ce58  str w8,[sp, #0x8]
710011ce5c  add x8,sp,#0x8
710011ce60  orr x20,x8,#0x4
710011ce64  mov x0,x20
710011ce68  bl 0x71039c0a80
710011ce6c  add x1,sp,#0x18
710011ce70  mov x0,x20
710011ce74  str wzr,[sp, #0x18]
710011ce78  bl 0x71039c0a90
710011ce7c  b 0x710011ceb8
710011ce80  ldr x0,[x19, #0x138]
710011ce84  ldr x8,[x0]
710011ce88  ldr x8,[x8, #0xa8]
710011ce8c  add x1,x19,#0x90
710011ce90  blr x8
710011ce94  tbz w0,#0x0,0x710011cef0
710011ce98  ldr w8,[x19, #0x60]
710011ce9c  cmp w8,#0x2
710011cea0  b.eq 0x710011cf04
710011cea4  cmp w8,#0x3
710011cea8  b.ne 0x710011cf30
710011ceac  add x1,x19,#0x64
710011ceb0  add x0,sp,#0x8
710011ceb4  bl 0x71000bce50
710011ceb8  add x0,x19,#0x120
710011cebc  add x1,sp,#0x8
710011cec0  bl 0x71000bcf30
710011cec4  adrp x8,0x71052a5000
710011cec8  ldr x8,[x8, #0x8b0]
710011cecc  adrp x9,0x7104339000
710011ced0  add x9,x9,#0x523
710011ced4  str x9,[x19, #0x40]
710011ced8  mov w0,#0x5
710011cedc  stp x8,xzr,[x19, #0x30]
710011cee0  ldp x29,x30,[sp, #0x30]
710011cee4  ldp x20,x19,[sp, #0x20]
710011cee8  add sp,sp,#0x40
710011ceec  ret
710011cef0  mov w0,#0x5
710011cef4  ldp x29,x30,[sp, #0x30]
710011cef8  ldp x20,x19,[sp, #0x20]
710011cefc  add sp,sp,#0x40
710011cf00  ret
710011cf04  adrp x8,0x71052a5000
710011cf08  ldr x8,[x8, #0x200]
710011cf0c  mov x0,xzr
710011cf10  stp x8,xzr,[x19, #0x30]
710011cf14  adrp x8,0x7104290000
710011cf18  add x8,x8,#0xce9
710011cf1c  str x8,[x19, #0x40]
710011cf20  ldp x29,x30,[sp, #0x30]
710011cf24  ldp x20,x19,[sp, #0x20]
710011cf28  add sp,sp,#0x40
710011cf2c  ret
710011cf30  mov w0,#0x5
710011cf34  ldp x29,x30,[sp, #0x30]
710011cf38  ldp x20,x19,[sp, #0x20]
710011cf3c  add sp,sp,#0x40
710011cf40  ret
