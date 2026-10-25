// addr:      7101d4aaf0
// offset:    0x1d4aaf0
// name:      FUN_7101d4aaf0
// mangled:   
// size:      948

7101d4aaf0  sub sp,sp,#0x60
7101d4aaf4  stp x24,x23,[sp, #0x20]
7101d4aaf8  stp x22,x21,[sp, #0x30]
7101d4aafc  stp x20,x19,[sp, #0x40]
7101d4ab00  stp x29,x30,[sp, #0x50]
7101d4ab04  add x29,sp,#0x50
7101d4ab08  mov w19,w1
7101d4ab0c  and w21,w1,#0x1
7101d4ab10  ldr x1,[x0, #0x208]
7101d4ab14  mov x20,x0
7101d4ab18  add x0,sp,#0x10
7101d4ab1c  mov w2,wzr
7101d4ab20  bl 0x7103771d60
7101d4ab24  ldr x22,[sp, #0x18]
7101d4ab28  ldr x0,[x22]
7101d4ab2c  cbz x0,0x7101d4ab44
7101d4ab30  ldr x8,[x0]
7101d4ab34  ldr x8,[x8, #0x2f0]
7101d4ab38  mov w1,w21
7101d4ab3c  mov w2,wzr
7101d4ab40  blr x8
7101d4ab44  adrp x23,0x710523d000
7101d4ab48  add x23,x23,#0x9c8
7101d4ab4c  stp x23,xzr,[sp, #0x10]
7101d4ab50  cbz x22,0x7101d4ab5c
7101d4ab54  mov x0,x22
7101d4ab58  bl 0x710392eb40
7101d4ab5c  ldr x1,[x20, #0x208]
7101d4ab60  add x0,sp,#0x10
7101d4ab64  mov w2,#0x1
7101d4ab68  bl 0x7103771d60
7101d4ab6c  ldr x22,[sp, #0x18]
7101d4ab70  ldr x0,[x22]
7101d4ab74  eor w24,w19,#0x1
7101d4ab78  cbz x0,0x7101d4ab90
7101d4ab7c  ldr x8,[x0]
7101d4ab80  ldr x8,[x8, #0x2f0]
7101d4ab84  and w1,w24,#0x1
7101d4ab88  mov w2,wzr
7101d4ab8c  blr x8
7101d4ab90  stp x23,xzr,[sp, #0x10]
7101d4ab94  cbz x22,0x7101d4aba0
7101d4ab98  mov x0,x22
7101d4ab9c  bl 0x710392eb40
7101d4aba0  adrp x8,0x7104443000
7101d4aba4  add x8,x8,#0xa83
7101d4aba8  adrp x10,0x710439d000
7101d4abac  add x10,x10,#0x6cf
7101d4abb0  tst w19,#0x1
7101d4abb4  strb w21,[x20, #0x2d9]
7101d4abb8  csel x19,x10,x8,ne
7101d4abbc  ldr x8,[x20, #0xa0]
7101d4abc0  and w9,w24,#0x1
7101d4abc4  str w9,[x20, #0x2ec]
7101d4abc8  ldr x8,[x8]
7101d4abcc  add x1,x8,#0x8
7101d4abd0  add x0,sp,#0x10
7101d4abd4  bl 0x7103776390
7101d4abd8  adrp x1,0x71042b4000
7101d4abdc  add x1,x1,#0x5fd
7101d4abe0  mov x8,sp
7101d4abe4  add x0,sp,#0x10
7101d4abe8  bl 0x7103776640
7101d4abec  ldr x20,[sp, #0x8]
7101d4abf0  fmov s0,0x3f800000
7101d4abf4  mov x0,x20
7101d4abf8  mov x1,x19
7101d4abfc  bl 0x7103778300
7101d4ac00  adrp x21,0x710523d000
7101d4ac04  add x21,x21,#0x988
7101d4ac08  stp x21,xzr,[sp]
7101d4ac0c  cbz x20,0x7101d4ac30
7101d4ac10  ldr x0,[x20, #0x18]
7101d4ac14  adrp x8,0x710523d000
7101d4ac18  add x8,x8,#0x9a8
7101d4ac1c  stp x8,xzr,[x20, #0x10]
7101d4ac20  cbz x0,0x7101d4ac28
7101d4ac24  bl 0x710392eb40
7101d4ac28  mov x0,x20
7101d4ac2c  bl 0x710392eb40
7101d4ac30  adrp x1,0x7104454000
7101d4ac34  add x1,x1,#0xd5c
7101d4ac38  mov x8,sp
7101d4ac3c  add x0,sp,#0x10
7101d4ac40  bl 0x7103776640
7101d4ac44  ldr x20,[sp, #0x8]
7101d4ac48  fmov s0,0x3f800000
7101d4ac4c  mov x0,x20
7101d4ac50  mov x1,x19
7101d4ac54  bl 0x7103778300
7101d4ac58  stp x21,xzr,[sp]
7101d4ac5c  cbz x20,0x7101d4ac80
7101d4ac60  ldr x0,[x20, #0x18]
7101d4ac64  adrp x8,0x710523d000
7101d4ac68  add x8,x8,#0x9a8
7101d4ac6c  stp x8,xzr,[x20, #0x10]
7101d4ac70  cbz x0,0x7101d4ac78
7101d4ac74  bl 0x710392eb40
7101d4ac78  mov x0,x20
7101d4ac7c  bl 0x710392eb40
7101d4ac80  adrp x1,0x7104443000
7101d4ac84  add x1,x1,#0xa8c
7101d4ac88  mov x8,sp
7101d4ac8c  add x0,sp,#0x10
7101d4ac90  bl 0x7103776640
7101d4ac94  ldr x20,[sp, #0x8]
7101d4ac98  fmov s0,0x3f800000
7101d4ac9c  mov x0,x20
7101d4aca0  mov x1,x19
7101d4aca4  bl 0x7103778300
7101d4aca8  stp x21,xzr,[sp]
7101d4acac  cbz x20,0x7101d4acd0
7101d4acb0  ldr x0,[x20, #0x18]
7101d4acb4  adrp x8,0x710523d000
7101d4acb8  add x8,x8,#0x9a8
7101d4acbc  stp x8,xzr,[x20, #0x10]
7101d4acc0  cbz x0,0x7101d4acc8
7101d4acc4  bl 0x710392eb40
7101d4acc8  mov x0,x20
7101d4accc  bl 0x710392eb40
7101d4acd0  adrp x1,0x710435b000
7101d4acd4  add x1,x1,#0xa25
7101d4acd8  mov x8,sp
7101d4acdc  add x0,sp,#0x10
7101d4ace0  bl 0x7103776640
7101d4ace4  ldr x20,[sp, #0x8]
7101d4ace8  fmov s0,0x3f800000
7101d4acec  mov x0,x20
7101d4acf0  mov x1,x19
7101d4acf4  bl 0x7103778300
7101d4acf8  stp x21,xzr,[sp]
7101d4acfc  cbz x20,0x7101d4ad20
7101d4ad00  ldr x0,[x20, #0x18]
7101d4ad04  adrp x8,0x710523d000
7101d4ad08  add x8,x8,#0x9a8
7101d4ad0c  stp x8,xzr,[x20, #0x10]
7101d4ad10  cbz x0,0x7101d4ad18
7101d4ad14  bl 0x710392eb40
7101d4ad18  mov x0,x20
7101d4ad1c  bl 0x710392eb40
7101d4ad20  adrp x1,0x7104280000
7101d4ad24  add x1,x1,#0xd48
7101d4ad28  mov x8,sp
7101d4ad2c  add x0,sp,#0x10
7101d4ad30  bl 0x7103776640
7101d4ad34  ldr x20,[sp, #0x8]
7101d4ad38  fmov s0,0x3f800000
7101d4ad3c  mov x0,x20
7101d4ad40  mov x1,x19
7101d4ad44  bl 0x7103778300
7101d4ad48  stp x21,xzr,[sp]
7101d4ad4c  cbz x20,0x7101d4ad70
7101d4ad50  ldr x0,[x20, #0x18]
7101d4ad54  adrp x8,0x710523d000
7101d4ad58  add x8,x8,#0x9a8
7101d4ad5c  stp x8,xzr,[x20, #0x10]
7101d4ad60  cbz x0,0x7101d4ad68
7101d4ad64  bl 0x710392eb40
7101d4ad68  mov x0,x20
7101d4ad6c  bl 0x710392eb40
7101d4ad70  adrp x1,0x710439d000
7101d4ad74  add x1,x1,#0x6d7
7101d4ad78  mov x8,sp
7101d4ad7c  add x0,sp,#0x10
7101d4ad80  bl 0x7103776640
7101d4ad84  ldr x20,[sp, #0x8]
7101d4ad88  fmov s0,0x3f800000
7101d4ad8c  mov x0,x20
7101d4ad90  mov x1,x19
7101d4ad94  bl 0x7103778300
7101d4ad98  stp x21,xzr,[sp]
7101d4ad9c  cbz x20,0x7101d4adc0
7101d4ada0  ldr x0,[x20, #0x18]
7101d4ada4  adrp x8,0x710523d000
7101d4ada8  add x8,x8,#0x9a8
7101d4adac  stp x8,xzr,[x20, #0x10]
7101d4adb0  cbz x0,0x7101d4adb8
7101d4adb4  bl 0x710392eb40
7101d4adb8  mov x0,x20
7101d4adbc  bl 0x710392eb40
7101d4adc0  adrp x1,0x7104443000
7101d4adc4  add x1,x1,#0xaa0
7101d4adc8  mov x8,sp
7101d4adcc  add x0,sp,#0x10
7101d4add0  bl 0x7103776640
7101d4add4  ldr x20,[sp, #0x8]
7101d4add8  fmov s0,0x3f800000
7101d4addc  mov x0,x20
7101d4ade0  mov x1,x19
7101d4ade4  bl 0x7103778300
7101d4ade8  stp x21,xzr,[sp]
7101d4adec  cbz x20,0x7101d4ae10
7101d4adf0  ldr x0,[x20, #0x18]
7101d4adf4  adrp x8,0x710523d000
7101d4adf8  add x8,x8,#0x9a8
7101d4adfc  stp x8,xzr,[x20, #0x10]
7101d4ae00  cbz x0,0x7101d4ae08
7101d4ae04  bl 0x710392eb40
7101d4ae08  mov x0,x20
7101d4ae0c  bl 0x710392eb40
7101d4ae10  adrp x1,0x7104291000
7101d4ae14  add x1,x1,#0xf03
7101d4ae18  mov x8,sp
7101d4ae1c  add x0,sp,#0x10
7101d4ae20  bl 0x7103776640
7101d4ae24  ldr x20,[sp, #0x8]
7101d4ae28  fmov s0,0x3f800000
7101d4ae2c  mov x0,x20
7101d4ae30  mov x1,x19
7101d4ae34  bl 0x7103778300
7101d4ae38  stp x21,xzr,[sp]
7101d4ae3c  cbz x20,0x7101d4ae60
7101d4ae40  ldr x0,[x20, #0x18]
7101d4ae44  adrp x8,0x710523d000
7101d4ae48  add x8,x8,#0x9a8
7101d4ae4c  stp x8,xzr,[x20, #0x10]
7101d4ae50  cbz x0,0x7101d4ae58
7101d4ae54  bl 0x710392eb40
7101d4ae58  mov x0,x20
7101d4ae5c  bl 0x710392eb40
7101d4ae60  ldr x19,[sp, #0x18]
7101d4ae64  stp x21,xzr,[sp, #0x10]
7101d4ae68  cbz x19,0x7101d4ae8c
7101d4ae6c  ldr x0,[x19, #0x18]
7101d4ae70  adrp x8,0x710523d000
7101d4ae74  add x8,x8,#0x9a8
7101d4ae78  stp x8,xzr,[x19, #0x10]
7101d4ae7c  cbz x0,0x7101d4ae84
7101d4ae80  bl 0x710392eb40
7101d4ae84  mov x0,x19
7101d4ae88  bl 0x710392eb40
7101d4ae8c  ldp x29,x30,[sp, #0x50]
7101d4ae90  ldp x20,x19,[sp, #0x40]
7101d4ae94  ldp x22,x21,[sp, #0x30]
7101d4ae98  ldp x24,x23,[sp, #0x20]
7101d4ae9c  add sp,sp,#0x60
7101d4aea0  ret
