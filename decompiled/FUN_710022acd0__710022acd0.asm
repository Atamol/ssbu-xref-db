// addr:      710022acd0
// offset:    0x22acd0
// name:      FUN_710022acd0
// mangled:   
// size:      216

710022acd0  str x21,[sp, #-0x30]!
710022acd4  stp x20,x19,[sp, #0x10]
710022acd8  stp x29,x30,[sp, #0x20]
710022acdc  add x29,sp,#0x20
710022ace0  ldp x9,x8,[x0, #0x10]
710022ace4  ldr x10,[x9, #0x18]
710022ace8  sub x10,x10,x8
710022acec  cmp x10,#0x3
710022acf0  b.hi 0x710022ad04
710022acf4  mov w8,#0x1
710022acf8  mov w19,wzr
710022acfc  strb w8,[x0, #0x8]
710022ad00  b 0x710022ad1c
710022ad04  ldr x10,[x9, #0x10]
710022ad08  ldr x9,[x9, #0x28]
710022ad0c  add x9,x10,x9
710022ad10  ldr w19,[x9, x8, LSL #0x0]
710022ad14  add x8,x8,#0x4
710022ad18  str x8,[x0, #0x18]
710022ad1c  adrp x8,0x71052a4000
710022ad20  ldr x8,[x8, #0xda8]
710022ad24  adrp x21,0x71052a4000
710022ad28  ldrb w8,[x8]
710022ad2c  ldr x21,[x21, #0xdb0]
710022ad30  add x20,x21,#0x28
710022ad34  cbz w8,0x710022ad70
710022ad38  adrp x8,0x71052a4000
710022ad3c  ldr x8,[x8, #0xdb8]
710022ad40  ldr x0,[x8]
710022ad44  bl 0x7101717960
710022ad48  ldr w8,[x0]
710022ad4c  cbz w8,0x710022ad70
710022ad50  ldr x10,[x21, #0xa0]
710022ad54  ldp x9,x10,[x10]
710022ad58  sub x10,x10,x9
710022ad5c  asr x10,x10,#0x3
710022ad60  cmp x10,x8
710022ad64  b.ls 0x710022ad90
710022ad68  ldr x8,[x9, x8, LSL #0x3]
710022ad6c  add x20,x8,#0x20
710022ad70  ldr x8,[x20]
710022ad74  ldr x8,[x8, #0x10]
710022ad78  mov w1,w19
710022ad7c  ldp x29,x30,[sp, #0x20]
710022ad80  ldr x0,[x8, #0x18]
710022ad84  ldp x20,x19,[sp, #0x10]
710022ad88  ldr x21,[sp], #0x30
710022ad8c  b 0x71001cd7d0
710022ad90  adrp x0,0x71042c4000
710022ad94  add x0,x0,#0x35f
710022ad98  mov w1,#0x47
710022ad9c  orr w2,wzr,#0xe0000003
710022ada0  mov w3,wzr
710022ada4  bl 0x71001b1300
