// addr:      710171ba20
// offset:    0x171ba20
// name:      FUN_710171ba20
// mangled:   
// size:      328

710171ba20  str x28,[sp, #-0x30]!
710171ba24  stp x20,x19,[sp, #0x10]
710171ba28  stp x29,x30,[sp, #0x20]
710171ba2c  add x29,sp,#0x20
710171ba30  sub sp,sp,#0x820
710171ba34  ldrb w8,[x1, #0x9]
710171ba38  mov x19,x0
710171ba3c  cbz w8,0x710171ba9c
710171ba40  mov w8,#0x1
710171ba44  strb w8,[x19]
710171ba48  ldrb w8,[x1, #0xa]
710171ba4c  str w8,[x19, #0x4]
710171ba50  ldr x10,[x1, #0x50]
710171ba54  mov x20,x1
710171ba58  cbz x10,0x710171bad0
710171ba5c  mov x9,xzr
710171ba60  b 0x710171ba6c
710171ba64  add x9,x9,#0x2
710171ba68  strb w11,[x12, #0x15]
710171ba6c  add x11,x10,x9
710171ba70  ldrb w13,[x11]
710171ba74  cbz w13,0x710171badc
710171ba78  add w14,w9,#0x1
710171ba7c  add x12,x19,x9
710171ba80  cmp w14,#0x7ff
710171ba84  strb w13,[x12, #0x14]
710171ba88  b.cs 0x710171bad8
710171ba8c  ldrb w11,[x11, #0x1]
710171ba90  cbnz w11,0x710171ba64
710171ba94  add x9,x9,#0x1
710171ba98  b 0x710171badc
710171ba9c  strb wzr,[sp, #0x8]
710171baa0  stur xzr,[sp, #0xc]
710171baa4  ldr x8,[sp, #0x8]
710171baa8  ldr w9,[sp, #0x10]
710171baac  strb wzr,[sp, #0x1c]
710171bab0  stur xzr,[sp, #0x14]
710171bab4  str x8,[x19]
710171bab8  mov w8,#0x9dc5
710171babc  movk w8,#0x811c, LSL #16
710171bac0  str w9,[x19, #0x8]
710171bac4  strb wzr,[x19, #0x14]
710171bac8  stur x8,[x19, #0xc]
710171bacc  b 0x710171bb54
710171bad0  mov w9,wzr
710171bad4  b 0x710171badc
710171bad8  add w9,w9,#0x1
710171badc  add x10,x19,#0x14
710171bae0  strb wzr,[x10, w9, UXTW ]
710171bae4  ldrb w11,[x19, #0x14]
710171bae8  mov w10,#0x9dc5
710171baec  movk w10,#0x811c, LSL #16
710171baf0  str w9,[x19, #0x10]
710171baf4  cbz w11,0x710171bb14
710171baf8  add x9,x19,#0x15
710171bafc  mov w12,#0x89
710171bb00  mul w10,w10,w12
710171bb04  and w11,w11,#0xff
710171bb08  eor w10,w10,w11
710171bb0c  ldrb w11,[x9], #0x1
710171bb10  cbnz w11,0x710171bb00
710171bb14  cmp w8,#0x3
710171bb18  str w10,[x19, #0xc]
710171bb1c  b.ne 0x710171bb54
710171bb20  ldr x0,[x20, #0x78]
710171bb24  adrp x1,0x7104339000
710171bb28  add x1,x1,#0x8bd
710171bb2c  bl 0x71001b4e00
710171bb30  tbz w0,#0x0,0x710171bb3c
710171bb34  mov w8,#0x2
710171bb38  b 0x710171bb50
710171bb3c  ldr x0,[x20, #0x78]
710171bb40  adrp x1,0x71043f0000
710171bb44  add x1,x1,#0x2f
710171bb48  bl 0x71001b4e00
710171bb4c  mov w8,#0x1
710171bb50  str w8,[x19, #0x8]
710171bb54  add sp,sp,#0x820
710171bb58  ldp x29,x30,[sp, #0x20]
710171bb5c  ldp x20,x19,[sp, #0x10]
710171bb60  ldr x28,[sp], #0x30
710171bb64  ret
