// addr:      710194ab20
// offset:    0x194ab20
// name:      FUN_710194ab20
// mangled:   
// size:      724

710194ab20  sub sp,sp,#0x70
710194ab24  str d8,[sp, #0x20]
710194ab28  str x25,[sp, #0x28]
710194ab2c  stp x24,x23,[sp, #0x30]
710194ab30  stp x22,x21,[sp, #0x40]
710194ab34  stp x20,x19,[sp, #0x50]
710194ab38  stp x29,x30,[sp, #0x60]
710194ab3c  add x29,sp,#0x60
710194ab40  ldr x9,[x0, #0x170]
710194ab44  ldr w8,[x0, #0x15c]
710194ab48  ldr x23,[x9, #0x80]
710194ab4c  cbz w8,0x710194ab90
710194ab50  ldr w8,[x23, #0x190]
710194ab54  cmp w8,#0x10
710194ab58  b.ne 0x710194add0
710194ab5c  ldrb w8,[x23, #0x2d8]
710194ab60  cmp w8,#0x1
710194ab64  b.eq 0x710194adb8
710194ab68  cmp w8,#0x2
710194ab6c  b.ne 0x710194add0
710194ab70  mov w8,#0x1
710194ab74  strb w8,[x0, #0x189]
710194ab78  ldrsw x8,[x0, #0x154]
710194ab7c  cmp w8,#0x13
710194ab80  b.cs 0x710194adf0
710194ab84  add x8,x0,x8, LSL #0x2
710194ab88  mov w9,#0x9
710194ab8c  b 0x710194adcc
710194ab90  ldr x8,[x23, #0x1c0]
710194ab94  strb wzr,[x23, #0x2d8]
710194ab98  mov w24,#0x48
710194ab9c  ldrb w9,[x8, #0x8]!
710194aba0  cmp w9,#0x1
710194aba4  cset w9,ne
710194aba8  umaddl x21,w9,w24,x8
710194abac  adrp x20,0x7104433000
710194abb0  add x20,x20,#0x73a
710194abb4  mov x1,x20
710194abb8  add x0,x21,#0x18
710194abbc  add x19,x23,#0x1b8
710194abc0  bl 0x710377a120
710194abc4  add x0,x21,#0x28
710194abc8  mov x1,x20
710194abcc  bl 0x710377a120
710194abd0  add x0,x21,#0x38
710194abd4  mov x1,x20
710194abd8  bl 0x710377a120
710194abdc  ldr x8,[x23, #0x1c0]
710194abe0  ldrb w9,[x8, #0x8]!
710194abe4  cmp w9,#0x1
710194abe8  cset w9,ne
710194abec  umaddl x21,w9,w24,x8
710194abf0  fmov s8,0x3f800000
710194abf4  mov v0.16B,v8.16B
710194abf8  adrp x20,0x710433a000
710194abfc  add x20,x20,#0x880
710194ac00  mov x1,x20
710194ac04  ldr x0,[x21, #0x10]
710194ac08  bl 0x7103778300
710194ac0c  ldr x0,[x21, #0x10]
710194ac10  mov v0.16B,v8.16B
710194ac14  adrp x21,0x710425f000
710194ac18  add x21,x21,#0xba5
710194ac1c  mov x1,x21
710194ac20  bl 0x7103778300
710194ac24  mov w1,#0x1
710194ac28  mov x0,x19
710194ac2c  bl 0x7101e96fc0
710194ac30  ldr x8,[x23, #0x1c0]
710194ac34  ldrb w9,[x8, #0x8]!
710194ac38  cmp w9,#0x0
710194ac3c  cset w9,ne
710194ac40  umaddl x25,w9,w24,x8
710194ac44  adrp x22,0x71043be000
710194ac48  add x22,x22,#0xcef
710194ac4c  mov x1,x22
710194ac50  add x0,x25,#0x18
710194ac54  bl 0x710377a120
710194ac58  add x0,x25,#0x28
710194ac5c  mov x1,x22
710194ac60  bl 0x710377a120
710194ac64  add x0,x25,#0x38
710194ac68  mov x1,x22
710194ac6c  bl 0x710377a120
710194ac70  ldr x8,[x23, #0x1c0]
710194ac74  ldrb w9,[x8, #0x8]!
710194ac78  cmp w9,#0x0
710194ac7c  cset w9,ne
710194ac80  umaddl x22,w9,w24,x8
710194ac84  ldr x0,[x22, #0x10]
710194ac88  mov v0.16B,v8.16B
710194ac8c  mov x1,x20
710194ac90  bl 0x7103778300
710194ac94  ldr x0,[x22, #0x10]
710194ac98  mov v0.16B,v8.16B
710194ac9c  mov x1,x21
710194aca0  bl 0x7103778300
710194aca4  mov x0,x19
710194aca8  mov w1,wzr
710194acac  bl 0x7101e96fc0
710194acb0  add x0,x23,#0x1a8
710194acb4  adrp x1,0x71043e0000
710194acb8  add x1,x1,#0x83a
710194acbc  mov x8,sp
710194acc0  mov x19,sp
710194acc4  bl 0x71037780e0
710194acc8  mov w0,#0x10
710194accc  mov w1,#0x10
710194acd0  bl 0x710392e290
710194acd4  cbnz x0,0x710194ad1c
710194acd8  adrp x8,0x7105332000
710194acdc  ldr x0,[x8, #0xf00]
710194ace0  cbz x0,0x710194ad18
710194ace4  mov w8,#0x10
710194ace8  str wzr,[sp, #0x1c]
710194acec  add x1,sp,#0x1c
710194acf0  str x8,[sp, #0x10]
710194acf4  ldr x8,[x0]
710194acf8  ldr x8,[x8, #0x30]
710194acfc  add x2,sp,#0x10
710194ad00  blr x8
710194ad04  tbz w0,#0x0,0x710194ad18
710194ad08  mov w0,#0x10
710194ad0c  mov w1,#0x10
710194ad10  bl 0x710392e290
710194ad14  cbnz x0,0x710194ad1c
710194ad18  mov x0,xzr
710194ad1c  adrp x20,0x710523d000
710194ad20  add x20,x20,#0x9e8
710194ad24  cmp x19,x0
710194ad28  stp x20,xzr,[x0]
710194ad2c  b.eq 0x710194ad3c
710194ad30  ldr x8,[sp, #0x8]
710194ad34  str xzr,[sp, #0x8]
710194ad38  str x8,[x0, #0x8]
710194ad3c  ldr x8,[x23, #0x2d0]
710194ad40  str x0,[x23, #0x2d0]
710194ad44  cbz x8,0x710194ad58
710194ad48  ldr x9,[x8]
710194ad4c  ldr x9,[x9, #0x8]
710194ad50  mov x0,x8
710194ad54  blr x9
710194ad58  ldr x0,[sp, #0x8]
710194ad5c  stp x20,xzr,[sp]
710194ad60  cbz x0,0x710194ad68
710194ad64  bl 0x710392eb40
710194ad68  ldr x0,[x23, #0x2d0]
710194ad6c  fmov s0,0x3f800000
710194ad70  bl 0x710377aee0
710194ad74  ldrsw x8,[x23, #0x18c]
710194ad78  cmp w8,#0x13
710194ad7c  b.cs 0x710194adf0
710194ad80  add x8,x23,x8, LSL #0x2
710194ad84  mov w9,#0x9
710194ad88  str w9,[x8, #0x140]
710194ad8c  ldr w8,[x23, #0x18c]
710194ad90  cmp w8,#0x11
710194ad94  b.gt 0x710194add0
710194ad98  add w8,w8,#0x1
710194ad9c  cmp w8,#0x13
710194ada0  str w8,[x23, #0x18c]
710194ada4  b.cs 0x710194adf0
710194ada8  add x8,x23,w8, SXTW  #0x2
710194adac  orr w9,wzr,#0xf
710194adb0  str w9,[x8, #0x140]
710194adb4  b 0x710194add0
710194adb8  ldrsw x8,[x0, #0x154]
710194adbc  cmp w8,#0x13
710194adc0  b.cs 0x710194adf0
710194adc4  add x8,x0,x8, LSL #0x2
710194adc8  mov w9,#0x4
710194adcc  str w9,[x8, #0x108]
710194add0  ldr d8,[sp, #0x20]
710194add4  ldp x29,x30,[sp, #0x60]
710194add8  ldp x20,x19,[sp, #0x50]
710194addc  ldr x25,[sp, #0x28]
710194ade0  ldp x22,x21,[sp, #0x40]
710194ade4  ldp x24,x23,[sp, #0x30]
710194ade8  add sp,sp,#0x70
710194adec  ret
710194adf0  bl 0x71039c2650
