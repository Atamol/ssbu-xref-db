// addr:      710023aa50
// offset:    0x23aa50
// name:      FUN_710023aa50
// mangled:   
// size:      188

710023aa50  str x21,[sp, #-0x30]!
710023aa54  stp x20,x19,[sp, #0x10]
710023aa58  stp x29,x30,[sp, #0x20]
710023aa5c  add x29,sp,#0x20
710023aa60  adrp x8,0x71052a4000
710023aa64  ldr x8,[x8, #0xda8]
710023aa68  adrp x21,0x71052a4000
710023aa6c  ldrb w8,[x8]
710023aa70  ldr x21,[x21, #0xdb0]
710023aa74  mov x19,x0
710023aa78  add x20,x21,#0x70
710023aa7c  cbz w8,0x710023aab8
710023aa80  adrp x8,0x71052a4000
710023aa84  ldr x8,[x8, #0xdb8]
710023aa88  ldr x0,[x8]
710023aa8c  bl 0x7101717960
710023aa90  ldr w8,[x0]
710023aa94  cbz w8,0x710023aab8
710023aa98  ldr x10,[x21, #0xa0]
710023aa9c  ldp x9,x10,[x10]
710023aaa0  sub x10,x10,x9
710023aaa4  asr x10,x10,#0x3
710023aaa8  cmp x10,x8
710023aaac  b.ls 0x710023aaf4
710023aab0  ldr x8,[x9, x8, LSL #0x3]
710023aab4  add x20,x8,#0x68
710023aab8  ldr x8,[x20]
710023aabc  ldr x8,[x8, #0x10]
710023aac0  ldr x1,[x19, #0xc8]
710023aac4  ldr x0,[x8, #0x38]
710023aac8  bl 0x710023cb10
710023aacc  ldr x8,[x19, #0xc0]
710023aad0  ldp x20,x19,[sp, #0x10]
710023aad4  ldr x8,[x8, #0x78]
710023aad8  ldr x0,[x8, #0x28]
710023aadc  mov w1,#0x64
710023aae0  ldp x29,x30,[sp, #0x20]
710023aae4  ldr x8,[x0]
710023aae8  ldr x2,[x8, #0x58]
710023aaec  ldr x21,[sp], #0x30
710023aaf0  br x2
710023aaf4  adrp x0,0x71042c4000
710023aaf8  add x0,x0,#0x35f
710023aafc  mov w1,#0x47
710023ab00  orr w2,wzr,#0xe0000003
710023ab04  mov w3,wzr
710023ab08  bl 0x71001b1300
