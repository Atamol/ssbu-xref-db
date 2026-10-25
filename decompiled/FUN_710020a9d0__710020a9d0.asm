// addr:      710020a9d0
// offset:    0x20a9d0
// name:      FUN_710020a9d0
// mangled:   
// size:      384

710020a9d0  stp x22,x21,[sp, #-0x30]!
710020a9d4  stp x20,x19,[sp, #0x10]
710020a9d8  stp x29,x30,[sp, #0x20]
710020a9dc  add x29,sp,#0x20
710020a9e0  mov x19,x0
710020a9e4  ldr x8,[x0, #0x18]
710020a9e8  ldr w1,[x0, #0x8]
710020a9ec  ldrb w2,[x19, #0x20]
710020a9f0  add x0,x8,#0xf0
710020a9f4  bl 0x71001f54b0
710020a9f8  tbz w0,#0x0,0x710020aa00
710020a9fc  strb wzr,[x19, #0x20]
710020aa00  adrp x8,0x71052a4000
710020aa04  ldr x8,[x8, #0xda8]
710020aa08  adrp x21,0x71052a4000
710020aa0c  ldrb w8,[x8]
710020aa10  ldr x21,[x21, #0xdb0]
710020aa14  add x20,x21,#0x28
710020aa18  cbz w8,0x710020aa54
710020aa1c  adrp x8,0x71052a4000
710020aa20  ldr x8,[x8, #0xdb8]
710020aa24  ldr x0,[x8]
710020aa28  bl 0x7101717960
710020aa2c  ldr w8,[x0]
710020aa30  cbz w8,0x710020aa54
710020aa34  ldr x10,[x21, #0xa0]
710020aa38  ldp x9,x10,[x10]
710020aa3c  sub x10,x10,x9
710020aa40  asr x10,x10,#0x3
710020aa44  cmp x10,x8
710020aa48  b.ls 0x710020aa6c
710020aa4c  ldr x8,[x9, x8, LSL #0x3]
710020aa50  add x20,x8,#0x20
710020aa54  ldr x8,[x20]
710020aa58  cbz x8,0x710020aa84
710020aa5c  ldr x8,[x8, #0x10]
710020aa60  cbz x8,0x710020aa84
710020aa64  ldr x20,[x8, #0x10]
710020aa68  b 0x710020aa88
710020aa6c  adrp x0,0x71042c4000
710020aa70  add x0,x0,#0x35f
710020aa74  mov w1,#0x47
710020aa78  orr w2,wzr,#0xe0000003
710020aa7c  mov w3,wzr
710020aa80  bl 0x71001b1300
710020aa84  mov x20,xzr
710020aa88  ldr x8,[x20, #0x78]!
710020aa8c  ldr x8,[x8, #0x10]
710020aa90  mov x0,x20
710020aa94  blr x8
710020aa98  ldr x8,[x19]
710020aa9c  ldr x8,[x8, #0x88]
710020aaa0  mov x0,x19
710020aaa4  blr x8
710020aaa8  ldr x8,[x19, #0x98]
710020aaac  add x21,x19,#0xa0
710020aab0  cmp x21,x8
710020aab4  b.eq 0x710020ab1c
710020aab8  ldr x9,[x8, #0x8]
710020aabc  cbz x9,0x710020aad0
710020aac0  mov x22,x9
710020aac4  ldr x9,[x9]
710020aac8  cbnz x9,0x710020aac0
710020aacc  b 0x710020aafc
710020aad0  mov x9,x8
710020aad4  ldr x22,[x9, #0x10]!
710020aad8  ldr x10,[x22]
710020aadc  cmp x10,x8
710020aae0  b.eq 0x710020aafc
710020aae4  ldr x10,[x9]
710020aae8  mov x9,x10
710020aaec  ldr x22,[x9, #0x10]!
710020aaf0  ldr x11,[x22]
710020aaf4  cmp x11,x10
710020aaf8  b.ne 0x710020aae4
710020aafc  ldr x0,[x8, #0xb8]
710020ab00  ldr x8,[x0]
710020ab04  ldr x8,[x8, #0xb0]
710020ab08  mov w1,#0x4
710020ab0c  blr x8
710020ab10  cmp x21,x22
710020ab14  mov x8,x22
710020ab18  b.ne 0x710020aab8
710020ab1c  ldr x8,[x19]
710020ab20  ldr x8,[x8, #0x90]
710020ab24  mov x0,x19
710020ab28  blr x8
710020ab2c  ldr x8,[x20]
710020ab30  ldr x8,[x8, #0x20]
710020ab34  mov x0,x20
710020ab38  blr x8
710020ab3c  ldp x29,x30,[sp, #0x20]
710020ab40  mov w0,#0x1
710020ab44  ldp x20,x19,[sp, #0x10]
710020ab48  ldp x22,x21,[sp], #0x30
710020ab4c  ret
