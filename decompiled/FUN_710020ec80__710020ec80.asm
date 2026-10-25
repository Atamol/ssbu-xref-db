// addr:      710020ec80
// offset:    0x20ec80
// name:      FUN_710020ec80
// mangled:   
// size:      388

710020ec80  stp x24,x23,[sp, #-0x40]!
710020ec84  stp x22,x21,[sp, #0x10]
710020ec88  stp x20,x19,[sp, #0x20]
710020ec8c  stp x29,x30,[sp, #0x30]
710020ec90  add x29,sp,#0x30
710020ec94  adrp x8,0x71052a4000
710020ec98  ldr x8,[x8, #0xda8]
710020ec9c  adrp x22,0x71052a4000
710020eca0  ldrb w8,[x8]
710020eca4  ldr x22,[x22, #0xdb0]
710020eca8  mov w20,w1
710020ecac  mov x19,x0
710020ecb0  add x21,x22,#0x28
710020ecb4  cbz w8,0x710020ecf0
710020ecb8  adrp x8,0x71052a4000
710020ecbc  ldr x8,[x8, #0xdb8]
710020ecc0  ldr x0,[x8]
710020ecc4  bl 0x7101717960
710020ecc8  ldr w8,[x0]
710020eccc  cbz w8,0x710020ecf0
710020ecd0  ldr x10,[x22, #0xa0]
710020ecd4  ldp x9,x10,[x10]
710020ecd8  sub x10,x10,x9
710020ecdc  asr x10,x10,#0x3
710020ece0  cmp x10,x8
710020ece4  b.ls 0x710020ed08
710020ece8  ldr x8,[x9, x8, LSL #0x3]
710020ecec  add x21,x8,#0x20
710020ecf0  ldr x8,[x21]
710020ecf4  cbz x8,0x710020ed20
710020ecf8  ldr x8,[x8, #0x10]
710020ecfc  cbz x8,0x710020ed20
710020ed00  ldr x21,[x8, #0x10]
710020ed04  b 0x710020ed24
710020ed08  adrp x0,0x71042c4000
710020ed0c  add x0,x0,#0x35f
710020ed10  mov w1,#0x47
710020ed14  orr w2,wzr,#0xe0000003
710020ed18  mov w3,wzr
710020ed1c  bl 0x71001b1300
710020ed20  mov x21,xzr
710020ed24  ldr x8,[x21, #0x78]!
710020ed28  ldr x8,[x8, #0x10]
710020ed2c  mov x0,x21
710020ed30  blr x8
710020ed34  ldr x8,[x19]
710020ed38  ldr x8,[x8, #0x88]
710020ed3c  mov x0,x19
710020ed40  blr x8
710020ed44  ldr x24,[x19, #0x98]
710020ed48  add x23,x19,#0xa0
710020ed4c  b 0x710020ed54
710020ed50  mov x24,x9
710020ed54  cmp x24,x23
710020ed58  b.eq 0x710020edd4
710020ed5c  ldr x22,[x24, #0xb8]
710020ed60  ldr x8,[x22]
710020ed64  ldr x8,[x8, #0x90]
710020ed68  mov x0,x22
710020ed6c  blr x8
710020ed70  cmn w0,#0x1
710020ed74  b.eq 0x710020ed8c
710020ed78  ldr x8,[x22]
710020ed7c  ldr x8,[x8, #0x80]
710020ed80  mov x0,x22
710020ed84  mov w1,w20
710020ed88  blr x8
710020ed8c  ldr x8,[x24, #0x8]
710020ed90  cbz x8,0x710020eda4
710020ed94  mov x24,x8
710020ed98  ldr x8,[x8]
710020ed9c  cbnz x8,0x710020ed94
710020eda0  b 0x710020ed54
710020eda4  mov x8,x24
710020eda8  ldr x9,[x8, #0x10]!
710020edac  ldr x10,[x9]
710020edb0  cmp x10,x24
710020edb4  b.eq 0x710020ed50
710020edb8  ldr x9,[x8]
710020edbc  mov x8,x9
710020edc0  ldr x24,[x8, #0x10]!
710020edc4  ldr x10,[x24]
710020edc8  cmp x10,x9
710020edcc  b.ne 0x710020edb8
710020edd0  b 0x710020ed54
710020edd4  ldr x8,[x19]
710020edd8  ldr x8,[x8, #0x90]
710020eddc  mov x0,x19
710020ede0  blr x8
710020ede4  ldr x8,[x21]
710020ede8  ldr x1,[x8, #0x20]
710020edec  mov x0,x21
710020edf0  ldp x29,x30,[sp, #0x30]
710020edf4  ldp x20,x19,[sp, #0x20]
710020edf8  ldp x22,x21,[sp, #0x10]
710020edfc  ldp x24,x23,[sp], #0x40
710020ee00  br x1
