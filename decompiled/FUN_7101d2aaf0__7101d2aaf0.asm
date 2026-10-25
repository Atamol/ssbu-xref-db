// addr:      7101d2aaf0
// offset:    0x1d2aaf0
// name:      FUN_7101d2aaf0
// mangled:   
// size:      648

7101d2aaf0  sub sp,sp,#0xe0
7101d2aaf4  str d8,[sp, #0x80]
7101d2aaf8  stp x26,x25,[sp, #0x90]
7101d2aafc  stp x24,x23,[sp, #0xa0]
7101d2ab00  stp x22,x21,[sp, #0xb0]
7101d2ab04  stp x20,x19,[sp, #0xc0]
7101d2ab08  stp x29,x30,[sp, #0xd0]
7101d2ab0c  add x29,sp,#0xd0
7101d2ab10  mov w19,w2
7101d2ab14  mov w2,w1
7101d2ab18  mov x20,x0
7101d2ab1c  add x8,sp,#0x38
7101d2ab20  adrp x1,0x71042c5000
7101d2ab24  add x1,x1,#0x15
7101d2ab28  add x0,sp,#0x38
7101d2ab2c  strb wzr,[sp, #0x40]
7101d2ab30  str xzr,[sp, #0x38]
7101d2ab34  add x21,x8,#0x8
7101d2ab38  bl 0x710062dc20
7101d2ab3c  ldr x8,[x20, #0x130]
7101d2ab40  ldr x8,[x8]
7101d2ab44  add x0,x8,#0x8
7101d2ab48  add x8,sp,#0x28
7101d2ab4c  mov x1,x21
7101d2ab50  bl 0x7103776640
7101d2ab54  adrp x1,0x7104359000
7101d2ab58  add x1,x1,#0xb85
7101d2ab5c  add x8,sp,#0x18
7101d2ab60  add x0,sp,#0x28
7101d2ab64  bl 0x7103776640
7101d2ab68  mov w0,#0x10
7101d2ab6c  mov w1,#0x20
7101d2ab70  bl 0x710392e290
7101d2ab74  mov x20,x0
7101d2ab78  cbnz x0,0x7101d2abc4
7101d2ab7c  adrp x8,0x7105332000
7101d2ab80  ldr x0,[x8, #0xf00]
7101d2ab84  cbz x0,0x7101d2abc0
7101d2ab88  mov w8,#0x20
7101d2ab8c  stur wzr,[x29, #-0x44]
7101d2ab90  sub x1,x29,#0x44
7101d2ab94  str x8,[sp, #0x8]
7101d2ab98  ldr x8,[x0]
7101d2ab9c  ldr x8,[x8, #0x30]
7101d2aba0  add x2,sp,#0x8
7101d2aba4  blr x8
7101d2aba8  tbz w0,#0x0,0x7101d2abc0
7101d2abac  mov w0,#0x10
7101d2abb0  mov w1,#0x20
7101d2abb4  bl 0x710392e290
7101d2abb8  mov x20,x0
7101d2abbc  cbnz x0,0x7101d2abc4
7101d2abc0  mov x20,xzr
7101d2abc4  fmov s8,0x3f800000
7101d2abc8  mov w21,wzr
7101d2abcc  adrp x23,0x710436a000
7101d2abd0  add x23,x23,#0xc27
7101d2abd4  adrp x25,0x710523d000
7101d2abd8  add x25,x25,#0x9a8
7101d2abdc  stp xzr,xzr,[x20, #0x10]
7101d2abe0  stp xzr,xzr,[x20]
7101d2abe4  tbz w19,#0x0,0x7101d2ac6c
7101d2abe8  mov w26,#0x1
7101d2abec  adrp x24,0x7104319000
7101d2abf0  add x24,x24,#0x47e
7101d2abf4  add x8,sp,#0x8
7101d2abf8  add x0,sp,#0x18
7101d2abfc  mov x1,x23
7101d2ac00  mov w2,w21
7101d2ac04  bl 0x7103776910
7101d2ac08  ldr x19,[sp, #0x10]
7101d2ac0c  str xzr,[sp, #0x10]
7101d2ac10  cbz x20,0x7101d2ac1c
7101d2ac14  mov x0,x20
7101d2ac18  bl 0x710392eb40
7101d2ac1c  stp x25,xzr,[sp, #0x8]
7101d2ac20  ldr x0,[x19]
7101d2ac24  bl 0x710377aae0
7101d2ac28  cbz x0,0x7101d2ac30
7101d2ac2c  strb w26,[x0, #0x13a]
7101d2ac30  ldr x8,[x19]
7101d2ac34  cbz x8,0x7101d2ac44
7101d2ac38  ldrb w9,[x8, #0x58]
7101d2ac3c  orr w9,w9,#0x1
7101d2ac40  strb w9,[x8, #0x58]
7101d2ac44  ldr x22,[sp, #0x20]
7101d2ac48  mov v0.16B,v8.16B
7101d2ac4c  mov x1,x24
7101d2ac50  mov x0,x22
7101d2ac54  bl 0x7103778300
7101d2ac58  add w21,w21,#0x1
7101d2ac5c  cmp w21,#0x10
7101d2ac60  mov x20,x19
7101d2ac64  b.ne 0x7101d2abf4
7101d2ac68  b 0x7101d2acf0
7101d2ac6c  adrp x24,0x7104338000
7101d2ac70  add x24,x24,#0xaad
7101d2ac74  add x8,sp,#0x8
7101d2ac78  add x0,sp,#0x18
7101d2ac7c  mov x1,x23
7101d2ac80  mov w2,w21
7101d2ac84  bl 0x7103776910
7101d2ac88  ldr x19,[sp, #0x10]
7101d2ac8c  str xzr,[sp, #0x10]
7101d2ac90  cbz x20,0x7101d2ac9c
7101d2ac94  mov x0,x20
7101d2ac98  bl 0x710392eb40
7101d2ac9c  stp x25,xzr,[sp, #0x8]
7101d2aca0  ldr x0,[x19]
7101d2aca4  mov w1,wzr
7101d2aca8  bl 0x710377aa20
7101d2acac  ldr x8,[x19]
7101d2acb0  cbz x8,0x7101d2acc0
7101d2acb4  ldrb w9,[x8, #0x58]
7101d2acb8  and w9,w9,#0xfe
7101d2acbc  strb w9,[x8, #0x58]
7101d2acc0  ldr x22,[sp, #0x20]
7101d2acc4  mov v0.16B,v8.16B
7101d2acc8  mov x1,x24
7101d2accc  mov x0,x22
7101d2acd0  bl 0x7103778300
7101d2acd4  ldr x0,[x19]
7101d2acd8  mov w1,#0x1
7101d2acdc  bl 0x710377acb0
7101d2ace0  add w21,w21,#0x1
7101d2ace4  cmp w21,#0x10
7101d2ace8  mov x20,x19
7101d2acec  b.ne 0x7101d2ac74
7101d2acf0  mov x0,x19
7101d2acf4  bl 0x710392eb40
7101d2acf8  adrp x19,0x710523d000
7101d2acfc  add x19,x19,#0x988
7101d2ad00  stp x19,xzr,[sp, #0x18]
7101d2ad04  cbz x22,0x7101d2ad28
7101d2ad08  ldr x0,[x22, #0x18]
7101d2ad0c  adrp x8,0x710523d000
7101d2ad10  add x8,x8,#0x9a8
7101d2ad14  stp x8,xzr,[x22, #0x10]
7101d2ad18  cbz x0,0x7101d2ad20
7101d2ad1c  bl 0x710392eb40
7101d2ad20  mov x0,x22
7101d2ad24  bl 0x710392eb40
7101d2ad28  str x19,[sp, #0x28]
7101d2ad2c  ldr x19,[sp, #0x30]
7101d2ad30  str xzr,[sp, #0x30]
7101d2ad34  cbz x19,0x7101d2ad58
7101d2ad38  ldr x0,[x19, #0x18]
7101d2ad3c  adrp x8,0x710523d000
7101d2ad40  add x8,x8,#0x9a8
7101d2ad44  stp x8,xzr,[x19, #0x10]
7101d2ad48  cbz x0,0x7101d2ad50
7101d2ad4c  bl 0x710392eb40
7101d2ad50  mov x0,x19
7101d2ad54  bl 0x710392eb40
7101d2ad58  ldr d8,[sp, #0x80]
7101d2ad5c  ldp x29,x30,[sp, #0xd0]
7101d2ad60  ldp x20,x19,[sp, #0xc0]
7101d2ad64  ldp x22,x21,[sp, #0xb0]
7101d2ad68  ldp x24,x23,[sp, #0xa0]
7101d2ad6c  ldp x26,x25,[sp, #0x90]
7101d2ad70  add sp,sp,#0xe0
7101d2ad74  ret
