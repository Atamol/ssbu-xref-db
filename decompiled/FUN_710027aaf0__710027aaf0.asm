// addr:      710027aaf0
// offset:    0x27aaf0
// name:      FUN_710027aaf0
// mangled:   
// size:      736

710027aaf0  sub sp,sp,#0x70
710027aaf4  str x23,[sp, #0x30]
710027aaf8  stp x22,x21,[sp, #0x40]
710027aafc  stp x20,x19,[sp, #0x50]
710027ab00  stp x29,x30,[sp, #0x60]
710027ab04  add x29,sp,#0x60
710027ab08  adrp x22,0x71052a4000
710027ab0c  ldr x22,[x22, #0xda8]
710027ab10  adrp x21,0x71052a4000
710027ab14  ldrb w8,[x22]
710027ab18  ldr x21,[x21, #0xdb0]
710027ab1c  mov x19,x0
710027ab20  add x20,x21,#0x28
710027ab24  cbz w8,0x710027ab60
710027ab28  adrp x8,0x71052a4000
710027ab2c  ldr x8,[x8, #0xdb8]
710027ab30  ldr x0,[x8]
710027ab34  bl 0x7101717960
710027ab38  ldr w8,[x0]
710027ab3c  cbz w8,0x710027ab60
710027ab40  ldr x10,[x21, #0xa0]
710027ab44  ldp x9,x10,[x10]
710027ab48  sub x10,x10,x9
710027ab4c  asr x10,x10,#0x3
710027ab50  cmp x10,x8
710027ab54  b.ls 0x710027adb8
710027ab58  ldr x8,[x9, x8, LSL #0x3]
710027ab5c  add x20,x8,#0x20
710027ab60  ldr x8,[x20]
710027ab64  ldr x8,[x8, #0x10]
710027ab68  ldr x0,[x8, #0x18]
710027ab6c  ldr w1,[x19, #0xa0]
710027ab70  bl 0x71001cd7d0
710027ab74  cbz x0,0x710027abbc
710027ab78  ldr w8,[x19, #0x10c]
710027ab7c  cmp w8,#0x2
710027ab80  b.eq 0x710027ac30
710027ab84  ldp x8,x9,[x19, #0x150]
710027ab88  ldr x10,[x19, #0x160]
710027ab8c  str x8,[sp, #0x18]
710027ab90  mov w8,#0x18
710027ab94  movk w8,#0x8005, LSL #16
710027ab98  add x0,sp,#0x18
710027ab9c  mov x1,sp
710027aba0  str w8,[sp]
710027aba4  stp x9,x10,[sp, #0x20]
710027aba8  bl 0x71001b4260
710027abac  tbz w0,#0x0,0x710027abdc
710027abb0  mov w8,#0x4
710027abb4  movk w8,#0x8069, LSL #16
710027abb8  b 0x710027ac08
710027abbc  mov w8,#0x4
710027abc0  movk w8,#0x8001, LSL #16
710027abc4  add x0,sp,#0x18
710027abc8  mov x1,sp
710027abcc  str w8,[sp]
710027abd0  bl 0x71001b4200
710027abd4  add x1,sp,#0x18
710027abd8  b 0x710027ad98
710027abdc  mov w8,#0x4
710027abe0  movk w8,#0x8001, LSL #16
710027abe4  add w8,w8,#0xe
710027abe8  add x0,sp,#0x18
710027abec  mov x1,sp
710027abf0  str w8,[sp]
710027abf4  bl 0x71001b4260
710027abf8  tbz w0,#0x0,0x710027ac24
710027abfc  mov w8,#0x4
710027ac00  movk w8,#0x8069, LSL #16
710027ac04  add w8,w8,#0x5
710027ac08  mov x0,sp
710027ac0c  sub x1,x29,#0x24
710027ac10  stur w8,[x29, #-0x24]
710027ac14  bl 0x71001b4200
710027ac18  add x0,sp,#0x18
710027ac1c  mov x1,sp
710027ac20  bl 0x71001b4300
710027ac24  add x0,x19,#0x358
710027ac28  add x1,sp,#0x18
710027ac2c  bl 0x71001b4300
710027ac30  ldrb w8,[x19, #0x280]
710027ac34  tbnz w8,#0x6,0x710027ad48
710027ac38  add x20,x19,#0xf8
710027ac3c  mov x0,x20
710027ac40  bl 0x71001d1590
710027ac44  strb wzr,[sp, #0x20]
710027ac48  adrp x8,0x71052a8000
710027ac4c  ldr x8,[x8, #0x320]
710027ac50  add x8,x8,#0x10
710027ac54  str x8,[sp, #0x18]
710027ac58  ldr w8,[x19, #0x2d4]
710027ac5c  str w8,[sp, #0x24]
710027ac60  adrp x23,0x71052a5000
710027ac64  ldr x23,[x23, #0x110]
710027ac68  ldr w8,[x19, #0x358]
710027ac6c  cmp w8,#0x0
710027ac70  csel x8,x23,xzr,ge
710027ac74  cmp x8,#0x0
710027ac78  cset w8,ne
710027ac7c  strb w8,[sp, #0x28]
710027ac80  ldr x0,[x19, #0xa8]
710027ac84  ldr x8,[x0]
710027ac88  ldr x8,[x8, #0x48]
710027ac8c  add x2,sp,#0x18
710027ac90  mov x1,x20
710027ac94  blr x8
710027ac98  tbz w0,#0x0,0x710027ad50
710027ac9c  ldrb w8,[x22]
710027aca0  add x22,x21,#0x28
710027aca4  cbz w8,0x710027ace0
710027aca8  adrp x8,0x71052a4000
710027acac  ldr x8,[x8, #0xdb8]
710027acb0  ldr x0,[x8]
710027acb4  bl 0x7101717960
710027acb8  ldr w8,[x0]
710027acbc  cbz w8,0x710027ace0
710027acc0  ldr x10,[x21, #0xa0]
710027acc4  ldp x9,x10,[x10]
710027acc8  sub x10,x10,x9
710027accc  asr x10,x10,#0x3
710027acd0  cmp x10,x8
710027acd4  b.ls 0x710027adb8
710027acd8  ldr x8,[x9, x8, LSL #0x3]
710027acdc  add x22,x8,#0x20
710027ace0  ldr x8,[x22]
710027ace4  ldr x8,[x8, #0x10]
710027ace8  ldr x0,[x8, #0x18]
710027acec  ldr w1,[x19, #0xa0]
710027acf0  ldr w2,[x19, #0x110]
710027acf4  bl 0x71001d3780
710027acf8  mov w1,#0x2
710027acfc  mov x0,x19
710027ad00  bl 0x71001d6410
710027ad04  mov w0,#0x20
710027ad08  bl 0x71001af850
710027ad0c  mov x2,x0
710027ad10  cbz x0,0x710027ad38
710027ad14  adrp x8,0x71052a6000
710027ad18  ldr x8,[x8, #0xc28]
710027ad1c  adrp x9,0x71052a8000
710027ad20  ldr x9,[x9, #0x328]
710027ad24  adrp x10,0x7104411000
710027ad28  add x10,x10,#0x4cc
710027ad2c  stp xzr,x10,[x2, #0x10]
710027ad30  add x8,x8,#0x10
710027ad34  stp x8,x9,[x2]
710027ad38  mov x0,x19
710027ad3c  mov x1,x20
710027ad40  bl 0x71001d4200
710027ad44  b 0x710027ada0
710027ad48  add x1,x19,#0x358
710027ad4c  b 0x710027ad98
710027ad50  add x8,x19,#0x358
710027ad54  ldr w9,[x8]
710027ad58  cmp w9,#0x0
710027ad5c  csel x9,x23,xzr,ge
710027ad60  cbz x9,0x710027ad84
710027ad64  mov w8,#0x4
710027ad68  movk w8,#0x8001, LSL #16
710027ad6c  add w8,w8,#0x9
710027ad70  mov x0,sp
710027ad74  sub x1,x29,#0x24
710027ad78  stur w8,[x29, #-0x24]
710027ad7c  bl 0x71001b4200
710027ad80  b 0x710027ad94
710027ad84  ldp x9,x10,[x8]
710027ad88  ldr w8,[x8, #0x10]
710027ad8c  str w8,[sp, #0x10]
710027ad90  stp x9,x10,[sp]
710027ad94  mov x1,sp
710027ad98  mov x0,x19
710027ad9c  bl 0x710027a620
710027ada0  ldp x29,x30,[sp, #0x60]
710027ada4  ldr x23,[sp, #0x30]
710027ada8  ldp x20,x19,[sp, #0x50]
710027adac  ldp x22,x21,[sp, #0x40]
710027adb0  add sp,sp,#0x70
710027adb4  ret
710027adb8  adrp x0,0x71042c4000
710027adbc  add x0,x0,#0x35f
710027adc0  mov w1,#0x47
710027adc4  orr w2,wzr,#0xe0000003
710027adc8  mov w3,wzr
710027adcc  bl 0x71001b1300
