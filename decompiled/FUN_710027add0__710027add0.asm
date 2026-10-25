// addr:      710027add0
// offset:    0x27add0
// name:      FUN_710027add0
// mangled:   
// size:      304

710027add0  sub sp,sp,#0x50
710027add4  str x21,[sp, #0x20]
710027add8  stp x20,x19,[sp, #0x30]
710027addc  stp x29,x30,[sp, #0x40]
710027ade0  add x29,sp,#0x40
710027ade4  adrp x8,0x71052a4000
710027ade8  ldr x8,[x8, #0xda8]
710027adec  adrp x21,0x71052a4000
710027adf0  ldrb w8,[x8]
710027adf4  ldr x21,[x21, #0xdb0]
710027adf8  mov x19,x0
710027adfc  add x20,x21,#0x28
710027ae00  cbz w8,0x710027ae3c
710027ae04  adrp x8,0x71052a4000
710027ae08  ldr x8,[x8, #0xdb8]
710027ae0c  ldr x0,[x8]
710027ae10  bl 0x7101717960
710027ae14  ldr w8,[x0]
710027ae18  cbz w8,0x710027ae3c
710027ae1c  ldr x10,[x21, #0xa0]
710027ae20  ldp x9,x10,[x10]
710027ae24  sub x10,x10,x9
710027ae28  asr x10,x10,#0x3
710027ae2c  cmp x10,x8
710027ae30  b.ls 0x710027aee8
710027ae34  ldr x8,[x9, x8, LSL #0x3]
710027ae38  add x20,x8,#0x20
710027ae3c  ldr x8,[x20]
710027ae40  ldr x8,[x8, #0x10]
710027ae44  ldr x0,[x8, #0x18]
710027ae48  ldr w1,[x19, #0xa0]
710027ae4c  bl 0x71001cd7d0
710027ae50  cbz x0,0x710027ae80
710027ae54  adrp x8,0x71052a5000
710027ae58  ldr x8,[x8, #0x110]
710027ae5c  ldr w9,[x19, #0x358]
710027ae60  cmp w9,#0x0
710027ae64  csel x8,x8,xzr,ge
710027ae68  cbz x8,0x710027ae9c
710027ae6c  ldr w8,[x19, #0x10c]
710027ae70  cmp w8,#0x2
710027ae74  b.ne 0x710027aeb8
710027ae78  orr w8,wzr,#0x10001
710027ae7c  b 0x710027ae88
710027ae80  mov w8,#0x4
710027ae84  movk w8,#0x8001, LSL #16
710027ae88  add x0,sp,#0x8
710027ae8c  sub x1,x29,#0x14
710027ae90  stur w8,[x29, #-0x14]
710027ae94  bl 0x71001b4200
710027ae98  b 0x710027aec8
710027ae9c  add x1,x19,#0x358
710027aea0  mov x0,x19
710027aea4  ldr x21,[sp, #0x20]
710027aea8  ldp x29,x30,[sp, #0x40]
710027aeac  ldp x20,x19,[sp, #0x30]
710027aeb0  add sp,sp,#0x50
710027aeb4  b 0x710027a620
710027aeb8  ldp x8,x9,[x19, #0x150]
710027aebc  ldr x10,[x19, #0x160]
710027aec0  stp x9,x10,[sp, #0x10]
710027aec4  str x8,[sp, #0x8]
710027aec8  add x1,sp,#0x8
710027aecc  mov x0,x19
710027aed0  bl 0x710027a620
710027aed4  ldp x29,x30,[sp, #0x40]
710027aed8  ldr x21,[sp, #0x20]
710027aedc  ldp x20,x19,[sp, #0x30]
710027aee0  add sp,sp,#0x50
710027aee4  ret
710027aee8  adrp x0,0x71042c4000
710027aeec  add x0,x0,#0x35f
710027aef0  mov w1,#0x47
710027aef4  orr w2,wzr,#0xe0000003
710027aef8  mov w3,wzr
710027aefc  bl 0x71001b1300
