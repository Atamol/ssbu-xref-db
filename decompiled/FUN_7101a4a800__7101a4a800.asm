// addr:      7101a4a800
// offset:    0x1a4a800
// name:      FUN_7101a4a800
// mangled:   
// size:      2776

7101a4a800  sub sp,sp,#0x110
7101a4a804  stp x28,x27,[sp, #0xb0]
7101a4a808  stp x26,x25,[sp, #0xc0]
7101a4a80c  stp x24,x23,[sp, #0xd0]
7101a4a810  stp x22,x21,[sp, #0xe0]
7101a4a814  stp x20,x19,[sp, #0xf0]
7101a4a818  stp x29,x30,[sp, #0x100]
7101a4a81c  add x29,sp,#0x100
7101a4a820  ldr x8,[x0, #0x3b8]
7101a4a824  ldr x28,[x0, #0x3b0]
7101a4a828  mov w22,w1
7101a4a82c  sxtw x25,w22
7101a4a830  add x21,x0,#0x3b0
7101a4a834  sub x8,x8,x28
7101a4a838  asr x8,x8,#0x4
7101a4a83c  cmp x8,x25
7101a4a840  b.ls 0x7101a4b2d0
7101a4a844  orr w8,w2,#0x1
7101a4a848  mov w23,w2
7101a4a84c  mov x20,x0
7101a4a850  cmp w8,#0x3
7101a4a854  b.ne 0x7101a4a87c
7101a4a858  add x8,x28,x25, LSL #0x4
7101a4a85c  ldr x0,[x8, #0x8]
7101a4a860  mov x1,#0xff0000000000
7101a4a864  movk x1,#0xc1ff, LSL #48
7101a4a868  mov w5,#0x1
7101a4a86c  mov x2,x1
7101a4a870  mov w3,wzr
7101a4a874  mov w4,wzr
7101a4a878  bl 0x7101a42ba0
7101a4a87c  ldr x8,[x20, #0x258]
7101a4a880  ldr x26,[x20, #0x250]
7101a4a884  sub x8,x8,x26
7101a4a888  mov x9,#0xbf7f
7101a4a88c  movk x9,#0xefdf, LSL #16
7101a4a890  movk x9,#0xfbf7, LSL #32
7101a4a894  movk x9,#0x7efd, LSL #48
7101a4a898  asr x8,x8,#0x3
7101a4a89c  mul x8,x8,x9
7101a4a8a0  add x24,x20,#0x250
7101a4a8a4  cmp x8,x25
7101a4a8a8  b.ls 0x7101a4b2c8
7101a4a8ac  orr w8,wzr,#0x3f8
7101a4a8b0  madd x8,x25,x8,x26
7101a4a8b4  mov w27,#0xffffffff
7101a4a8b8  add x19,x28,x25, LSL #0x4
7101a4a8bc  stp w23,wzr,[x8, #0x10]
7101a4a8c0  str w27,[x8, #0x1b8]
7101a4a8c4  ldr x28,[x19, #0x8]!
7101a4a8c8  ldr x0,[x28, #0x20]
7101a4a8cc  cmp w23,#0x3
7101a4a8d0  b.ne 0x7101a4a8f4
7101a4a8d4  fmov s0,0x3f800000
7101a4a8d8  adrp x1,0x7104412000
7101a4a8dc  add x1,x1,#0x36e
7101a4a8e0  bl 0x7103778300
7101a4a8e4  str wzr,[x28, #0xd0]
7101a4a8e8  ldr x0,[x19]
7101a4a8ec  orr w1,wzr,#0x3
7101a4a8f0  b 0x7101a4a914
7101a4a8f4  fmov s0,0x3f800000
7101a4a8f8  adrp x1,0x71043f0000
7101a4a8fc  add x1,x1,#0x410
7101a4a900  bl 0x7103778300
7101a4a904  mov w8,#0x2
7101a4a908  str w8,[x28, #0xd0]
7101a4a90c  ldr x0,[x19]
7101a4a910  mov w1,w23
7101a4a914  bl 0x7101a44850
7101a4a918  ldr x0,[x20, #0x3a8]
7101a4a91c  bl 0x71019e66d0
7101a4a920  ldr x9,[x20, #0x258]
7101a4a924  ldr x8,[x20, #0x250]
7101a4a928  sub x9,x9,x8
7101a4a92c  mov x10,#0xbf7f
7101a4a930  movk x10,#0xefdf, LSL #16
7101a4a934  movk x10,#0xfbf7, LSL #32
7101a4a938  movk x10,#0x7efd, LSL #48
7101a4a93c  asr x9,x9,#0x3
7101a4a940  mul x9,x9,x10
7101a4a944  cmp x9,x25
7101a4a948  b.ls 0x7101a4b2c8
7101a4a94c  orr w9,wzr,#0x3f8
7101a4a950  madd x8,x25,x9,x8
7101a4a954  strb wzr,[x8, #0xf8]
7101a4a958  ldr x9,[x20, #0x3b8]
7101a4a95c  ldr x8,[x20, #0x3b0]
7101a4a960  sub x9,x9,x8
7101a4a964  asr x9,x9,#0x4
7101a4a968  cmp x9,x25
7101a4a96c  b.ls 0x7101a4b2d0
7101a4a970  add x8,x8,x25, LSL #0x4
7101a4a974  ldr x8,[x8, #0x8]
7101a4a978  str wzr,[x8, #0x100]
7101a4a97c  ldr x8,[x8, #0x90]
7101a4a980  ldr x0,[x8, #0x10]
7101a4a984  cbz x0,0x7101a4a99c
7101a4a988  add x1,sp,#0x10
7101a4a98c  mov w2,wzr
7101a4a990  mov w3,wzr
7101a4a994  str wzr,[sp, #0x10]
7101a4a998  bl 0x71037a2270
7101a4a99c  ldr w8,[x20, #0x3e0]
7101a4a9a0  cmp w8,w22
7101a4a9a4  b.ne 0x7101a4a9ac
7101a4a9a8  str w27,[x20, #0x3e0]
7101a4a9ac  adrp x8,0x71050a8000
7101a4a9b0  ldr w9,[x20, #0x150]
7101a4a9b4  ldr w10,[x8, #0x78]
7101a4a9b8  cmp w10,w9
7101a4a9bc  b.ne 0x7101a4a9c4
7101a4a9c0  str w27,[x8, #0x78]
7101a4a9c4  ldr x8,[x20, #0x258]
7101a4a9c8  ldr x28,[x20, #0x250]
7101a4a9cc  sub x8,x8,x28
7101a4a9d0  mov x9,#0xbf7f
7101a4a9d4  movk x9,#0xefdf, LSL #16
7101a4a9d8  movk x9,#0xfbf7, LSL #32
7101a4a9dc  movk x9,#0x7efd, LSL #48
7101a4a9e0  asr x8,x8,#0x3
7101a4a9e4  mul x8,x8,x9
7101a4a9e8  cmp x8,x25
7101a4a9ec  b.ls 0x7101a4b2c8
7101a4a9f0  orr w8,wzr,#0x3f8
7101a4a9f4  madd x8,x25,x8,x28
7101a4a9f8  mov w9,#0x1
7101a4a9fc  str w27,[x8, #0x1b8]
7101a4aa00  str wzr,[x8, #0x3f0]
7101a4aa04  strh wzr,[x8, #0x3f6]
7101a4aa08  strb w9,[x8, #0x3f4]
7101a4aa0c  adrp x9,0x710532f000
7101a4aa10  ldr x9,[x9, #0x730]
7101a4aa14  ldr x9,[x9, #0x8]
7101a4aa18  ldr x1,[x8, #0x178]
7101a4aa1c  add x0,x9,#0x160
7101a4aa20  bl 0x7103265e70
7101a4aa24  tbz w0,#0x0,0x7101a4aa9c
7101a4aa28  orr w9,wzr,#0x3f8
7101a4aa2c  madd x9,x25,x9,x28
7101a4aa30  mov x8,#0xff0000000000
7101a4aa34  mov x10,#0xff0000000000
7101a4aa38  movk x8,#0x13ff, LSL #48
7101a4aa3c  movk x10,#0x5aff, LSL #48
7101a4aa40  mov w11,#0x9dc5
7101a4aa44  movk w11,#0x811c, LSL #16
7101a4aa48  str xzr,[sp, #0x10]
7101a4aa4c  strh wzr,[sp, #0x18]
7101a4aa50  stp x8,x10,[sp, #0x30]
7101a4aa54  strh wzr,[sp, #0x44]
7101a4aa58  str wzr,[sp, #0x40]
7101a4aa5c  strh wzr,[x9, #0x48]
7101a4aa60  str x11,[x9, #0x40]
7101a4aa64  ldp x8,x10,[sp, #0x30]
7101a4aa68  stp x8,x10,[x9, #0x60]
7101a4aa6c  ldp x8,x10,[sp, #0x40]
7101a4aa70  ldp x11,x12,[sp, #0x50]
7101a4aa74  stp x11,x12,[x9, #0x80]
7101a4aa78  stp x8,x10,[x9, #0x70]
7101a4aa7c  ldp x8,x10,[sp, #0x60]
7101a4aa80  ldp x11,x12,[sp, #0x70]
7101a4aa84  stp x11,x12,[x9, #0xa0]
7101a4aa88  stp x8,x10,[x9, #0x90]
7101a4aa8c  ldp x8,x10,[sp, #0x80]
7101a4aa90  ldp x11,x12,[sp, #0x90]
7101a4aa94  stp x11,x12,[x9, #0xc0]
7101a4aa98  stp x8,x10,[x9, #0xb0]
7101a4aa9c  orr w8,wzr,#0x3f8
7101a4aaa0  madd x8,x25,x8,x28
7101a4aaa4  ldr w8,[x8, #0x10]
7101a4aaa8  cmp w8,#0x2
7101a4aaac  b.ne 0x7101a4abf0
7101a4aab0  ldr x9,[x20, #0x3b8]
7101a4aab4  ldr x8,[x20, #0x3b0]
7101a4aab8  sub x9,x9,x8
7101a4aabc  asr x9,x9,#0x4
7101a4aac0  str x24,[sp, #0x8]
7101a4aac4  mov x24,x21
7101a4aac8  cmp x9,x25
7101a4aacc  b.ls 0x7101a4b2c8
7101a4aad0  orr w21,wzr,#0xffff
7101a4aad4  add x8,x8,x25, LSL #0x4
7101a4aad8  add x1,sp,#0x10
7101a4aadc  strh w21,[sp, #0x10]
7101a4aae0  ldr x0,[x8, #0x8]
7101a4aae4  mov w2,#0x4
7101a4aae8  add x19,sp,#0x10
7101a4aaec  bl 0x7101a42170
7101a4aaf0  orr w8,wzr,#0x3f8
7101a4aaf4  strb wzr,[sp, #0x18]
7101a4aaf8  stur xzr,[sp, #0x1a]
7101a4aafc  madd x8,x25,x8,x28
7101a4ab00  stur wzr,[sp, #0x22]
7101a4ab04  ldr x10,[sp, #0x18]
7101a4ab08  ldur x9,[sp, #0x1e]
7101a4ab0c  str xzr,[sp, #0x10]
7101a4ab10  stp xzr,x10,[x8, #0x180]
7101a4ab14  add x10,x8,#0x18e
7101a4ab18  str x9,[x10]
7101a4ab1c  mov x9,#-0x1
7101a4ab20  add x10,x8,#0x196
7101a4ab24  str x9,[x10]
7101a4ab28  add x10,x8,#0x1c4
7101a4ab2c  str wzr,[x8, #0x1a0]
7101a4ab30  str w27,[sp, #0x54]
7101a4ab34  add x27,x19,#0x48
7101a4ab38  cmp x10,x19
7101a4ab3c  strh w21,[sp, #0x18]
7101a4ab40  str x9,[sp, #0x10]
7101a4ab44  stur xzr,[sp, #0x1c]
7101a4ab48  strh wzr,[sp, #0x24]
7101a4ab4c  strb wzr,[sp, #0x58]
7101a4ab50  str wzr,[sp, #0x5c]
7101a4ab54  strb wzr,[sp, #0x60]
7101a4ab58  strh w21,[x8, #0x1cc]
7101a4ab5c  str x9,[x10]
7101a4ab60  b.eq 0x7101a4ab78
7101a4ab64  orr w8,wzr,#0x3f8
7101a4ab68  madd x8,x25,x8,x28
7101a4ab6c  add x1,x19,#0x14
7101a4ab70  add x0,x8,#0x1d0
7101a4ab74  bl 0x7101696040
7101a4ab78  orr w8,wzr,#0x3f8
7101a4ab7c  madd x8,x25,x8,x28
7101a4ab80  ldr w9,[sp, #0x54]
7101a4ab84  str w9,[x8, #0x208]
7101a4ab88  ldr x10,[x27]
7101a4ab8c  ldrb w11,[x27, #0x8]
7101a4ab90  add x9,x8,#0x20c
7101a4ab94  strb w11,[x8, #0x214]
7101a4ab98  str x10,[x9]
7101a4ab9c  ldr x9,[x20, #0x3b8]
7101a4aba0  ldr x8,[x20, #0x3b0]
7101a4aba4  sub x9,x9,x8
7101a4aba8  asr x9,x9,#0x4
7101a4abac  cmp x9,x25
7101a4abb0  b.ls 0x7101a4b2c8
7101a4abb4  add x8,x8,x25, LSL #0x4
7101a4abb8  ldr x8,[x8, #0x8]
7101a4abbc  ldr x8,[x8, #0x70]
7101a4abc0  ldr x0,[x8, #0x10]
7101a4abc4  mov x21,x24
7101a4abc8  cbz x0,0x7101a4abe0
7101a4abcc  add x1,sp,#0x10
7101a4abd0  mov w2,wzr
7101a4abd4  mov w3,wzr
7101a4abd8  str wzr,[sp, #0x10]
7101a4abdc  bl 0x71037a2270
7101a4abe0  orr w8,wzr,#0x3f8
7101a4abe4  madd x8,x25,x8,x28
7101a4abe8  ldr x24,[sp, #0x8]
7101a4abec  strb wzr,[x8, #0x3f5]
7101a4abf0  cbz w23,0x7101a4ac14
7101a4abf4  ldp x29,x30,[sp, #0x100]
7101a4abf8  ldp x20,x19,[sp, #0xf0]
7101a4abfc  ldp x22,x21,[sp, #0xe0]
7101a4ac00  ldp x24,x23,[sp, #0xd0]
7101a4ac04  ldp x26,x25,[sp, #0xc0]
7101a4ac08  ldp x28,x27,[sp, #0xb0]
7101a4ac0c  add sp,sp,#0x110
7101a4ac10  ret
7101a4ac14  ldr x0,[x20, #0x1e0]
7101a4ac18  cbz x0,0x7101a4abf4
7101a4ac1c  orr w8,wzr,#0x3f8
7101a4ac20  madd x8,x25,x8,x26
7101a4ac24  add x1,x8,#0x1ac
7101a4ac28  ldr w8,[x20, #0x150]
7101a4ac2c  str w8,[sp, #0x10]
7101a4ac30  stur w22,[x29, #-0x5c]
7101a4ac34  ldr x8,[x0]
7101a4ac38  ldr x8,[x8, #0x30]
7101a4ac3c  add x2,sp,#0x10
7101a4ac40  sub x3,x29,#0x5c
7101a4ac44  blr x8
7101a4ac48  tbnz w0,#0x0,0x7101a4abf4
7101a4ac4c  ldrb w8,[x20, #0x41f]
7101a4ac50  cbz w8,0x7101a4acd0
7101a4ac54  ldr x9,[x20, #0x258]
7101a4ac58  ldr x8,[x20, #0x250]
7101a4ac5c  cmp x9,x8
7101a4ac60  b.eq 0x7101a4b2c8
7101a4ac64  ldr x19,[x20, #0x348]
7101a4ac68  ldr w9,[x19, #0xd0]
7101a4ac6c  str w9,[x8, #0x1ac]
7101a4ac70  ldr x9,[x20, #0x3b8]
7101a4ac74  ldr x8,[x20, #0x3b0]
7101a4ac78  cmp x9,x8
7101a4ac7c  b.eq 0x7101a4b2d0
7101a4ac80  ldr x22,[x8, #0x8]
7101a4ac84  ldr w8,[x19, #0xd0]
7101a4ac88  str w8,[x22, #0xf8]
7101a4ac8c  ldr w8,[x22, #0xd8]
7101a4ac90  cbnz w8,0x7101a4ae04
7101a4ac94  add x1,x22,#0x68
7101a4ac98  add x0,sp,#0x10
7101a4ac9c  bl 0x7103778ab0
7101a4aca0  ldr w8,[x19, #0xd0]
7101a4aca4  add w9,w8,#0x1
7101a4aca8  cmp w9,#0x1
7101a4acac  b.hi 0x7101a4ad74
7101a4acb0  ldr w8,[x22, #0x8]
7101a4acb4  add w3,w8,#0x1
7101a4acb8  adrp x1,0x7104338000
7101a4acbc  add x1,x1,#0xa8c
7101a4acc0  add x0,sp,#0x10
7101a4acc4  mov w2,#0x1
7101a4acc8  bl 0x710377a280
7101a4accc  b 0x7101a4ade8
7101a4acd0  ldr x9,[x20, #0x258]
7101a4acd4  ldr x8,[x20, #0x250]
7101a4acd8  sub x9,x9,x8
7101a4acdc  mov x10,#0xbf7f
7101a4ace0  movk x10,#0xefdf, LSL #16
7101a4ace4  movk x10,#0xfbf7, LSL #32
7101a4ace8  movk x10,#0x7efd, LSL #48
7101a4acec  asr x9,x9,#0x3
7101a4acf0  mul x9,x9,x10
7101a4acf4  cmp x9,x25
7101a4acf8  b.ls 0x7101a4b2c8
7101a4acfc  orr w9,wzr,#0x3f8
7101a4ad00  madd x8,x25,x9,x8
7101a4ad04  str wzr,[x8, #0x1ac]
7101a4ad08  ldr x9,[x20, #0x3b8]
7101a4ad0c  ldr x8,[x20, #0x3b0]
7101a4ad10  sub x9,x9,x8
7101a4ad14  asr x9,x9,#0x4
7101a4ad18  cmp x9,x25
7101a4ad1c  b.ls 0x7101a4b2d0
7101a4ad20  add x8,x8,x25, LSL #0x4
7101a4ad24  ldr x19,[x8, #0x8]
7101a4ad28  ldr w8,[x19, #0xd8]
7101a4ad2c  str wzr,[x19, #0xf8]
7101a4ad30  cbnz w8,0x7101a4abf4
7101a4ad34  add x1,x19,#0x68
7101a4ad38  add x0,sp,#0x10
7101a4ad3c  bl 0x7103778ab0
7101a4ad40  ldr w8,[x19, #0x8]
7101a4ad44  add w3,w8,#0x1
7101a4ad48  adrp x1,0x7104338000
7101a4ad4c  add x1,x1,#0xa8c
7101a4ad50  add x0,sp,#0x10
7101a4ad54  mov w2,#0x1
7101a4ad58  bl 0x710377a280
7101a4ad5c  ldr x0,[sp, #0x18]
7101a4ad60  adrp x8,0x710523d000
7101a4ad64  add x8,x8,#0x9a8
7101a4ad68  stp x8,xzr,[sp, #0x10]
7101a4ad6c  cbnz x0,0x7101a4b2c0
7101a4ad70  b 0x7101a4abf4
7101a4ad74  cmp w8,#0x3c
7101a4ad78  adrp x9,0x7105314000
7101a4ad7c  add x9,x9,#0x518
7101a4ad80  b.hi 0x7101a4adac
7101a4ad84  adrp x10,0x7105314000
7101a4ad88  ldr x10,[x10, #0x510]
7101a4ad8c  ldr x10,[x10]
7101a4ad90  ldrb w11,[x10]
7101a4ad94  cbnz w11,0x7101a4adac
7101a4ad98  ldr x9,[x10, #0x58]
7101a4ad9c  mov w10,#0xf7d8
7101a4ada0  ldr x9,[x9]
7101a4ada4  ldr x9,[x9]
7101a4ada8  madd x9,x8,x10,x9
7101a4adac  ldr x8,[sp, #0x18]
7101a4adb0  ldrb w10,[x9]
7101a4adb4  ldr x0,[x8, #0x10]
7101a4adb8  cbz w10,0x7101a4add0
7101a4adbc  cbz x0,0x7101a4adec
7101a4adc0  add x1,x9,#0xc
7101a4adc4  mov w2,#0xffffffff
7101a4adc8  mov w3,#0x1
7101a4adcc  b 0x7101a4ade4
7101a4add0  cbz x0,0x7101a4adec
7101a4add4  sub x1,x29,#0x5c
7101a4add8  mov w2,wzr
7101a4addc  mov w3,wzr
7101a4ade0  stur wzr,[x29, #-0x5c]
7101a4ade4  bl 0x71037a2270
7101a4ade8  ldr x8,[sp, #0x18]
7101a4adec  adrp x9,0x710523d000
7101a4adf0  add x9,x9,#0x9a8
7101a4adf4  stp x9,xzr,[sp, #0x10]
7101a4adf8  cbz x8,0x7101a4ae04
7101a4adfc  mov x0,x8
7101a4ae00  bl 0x710392eb40
7101a4ae04  ldr x9,[x20, #0x258]
7101a4ae08  ldr x8,[x20, #0x250]
7101a4ae0c  sub x9,x9,x8
7101a4ae10  mov x10,#0xbf7f
7101a4ae14  movk x10,#0xefdf, LSL #16
7101a4ae18  movk x10,#0xfbf7, LSL #32
7101a4ae1c  movk x10,#0x7efd, LSL #48
7101a4ae20  asr x9,x9,#0x3
7101a4ae24  mul x9,x9,x10
7101a4ae28  cmp x9,#0x1
7101a4ae2c  b.ls 0x7101a4b2c8
7101a4ae30  ldr x19,[x20, #0x348]
7101a4ae34  ldr w9,[x19, #0xd0]
7101a4ae38  str w9,[x8, #0x5a4]
7101a4ae3c  ldr x9,[x20, #0x3b8]
7101a4ae40  ldr x8,[x20, #0x3b0]
7101a4ae44  sub x9,x9,x8
7101a4ae48  asr x9,x9,#0x4
7101a4ae4c  cmp x9,#0x2
7101a4ae50  b.cc 0x7101a4b2d0
7101a4ae54  ldr x22,[x8, #0x18]
7101a4ae58  ldr w8,[x19, #0xd0]
7101a4ae5c  str w8,[x22, #0xf8]
7101a4ae60  ldr w8,[x22, #0xd8]
7101a4ae64  cbnz w8,0x7101a4af34
7101a4ae68  add x1,x22,#0x68
7101a4ae6c  add x0,sp,#0x10
7101a4ae70  bl 0x7103778ab0
7101a4ae74  ldr w8,[x19, #0xd0]
7101a4ae78  add w9,w8,#0x1
7101a4ae7c  cmp w9,#0x1
7101a4ae80  b.hi 0x7101a4aea4
7101a4ae84  ldr w8,[x22, #0x8]
7101a4ae88  add w3,w8,#0x1
7101a4ae8c  adrp x1,0x7104338000
7101a4ae90  add x1,x1,#0xa8c
7101a4ae94  add x0,sp,#0x10
7101a4ae98  mov w2,#0x1
7101a4ae9c  bl 0x710377a280
7101a4aea0  b 0x7101a4af18
7101a4aea4  cmp w8,#0x3c
7101a4aea8  adrp x9,0x7105314000
7101a4aeac  add x9,x9,#0x518
7101a4aeb0  b.hi 0x7101a4aedc
7101a4aeb4  adrp x10,0x7105314000
7101a4aeb8  ldr x10,[x10, #0x510]
7101a4aebc  ldr x10,[x10]
7101a4aec0  ldrb w11,[x10]
7101a4aec4  cbnz w11,0x7101a4aedc
7101a4aec8  ldr x9,[x10, #0x58]
7101a4aecc  mov w10,#0xf7d8
7101a4aed0  ldr x9,[x9]
7101a4aed4  ldr x9,[x9]
7101a4aed8  madd x9,x8,x10,x9
7101a4aedc  ldr x8,[sp, #0x18]
7101a4aee0  ldrb w10,[x9]
7101a4aee4  ldr x0,[x8, #0x10]
7101a4aee8  cbz w10,0x7101a4af00
7101a4aeec  cbz x0,0x7101a4af1c
7101a4aef0  add x1,x9,#0xc
7101a4aef4  mov w2,#0xffffffff
7101a4aef8  mov w3,#0x1
7101a4aefc  b 0x7101a4af14
7101a4af00  cbz x0,0x7101a4af1c
7101a4af04  sub x1,x29,#0x5c
7101a4af08  mov w2,wzr
7101a4af0c  mov w3,wzr
7101a4af10  stur wzr,[x29, #-0x5c]
7101a4af14  bl 0x71037a2270
7101a4af18  ldr x8,[sp, #0x18]
7101a4af1c  adrp x9,0x710523d000
7101a4af20  add x9,x9,#0x9a8
7101a4af24  stp x9,xzr,[sp, #0x10]
7101a4af28  cbz x8,0x7101a4af34
7101a4af2c  mov x0,x8
7101a4af30  bl 0x710392eb40
7101a4af34  ldr x9,[x20, #0x258]
7101a4af38  ldr x8,[x20, #0x250]
7101a4af3c  sub x9,x9,x8
7101a4af40  mov x10,#0xbf7f
7101a4af44  movk x10,#0xefdf, LSL #16
7101a4af48  movk x10,#0xfbf7, LSL #32
7101a4af4c  movk x10,#0x7efd, LSL #48
7101a4af50  asr x9,x9,#0x3
7101a4af54  mul x9,x9,x10
7101a4af58  cmp x9,#0x3
7101a4af5c  b.cc 0x7101a4b2c8
7101a4af60  ldr x19,[x20, #0x348]
7101a4af64  ldr w9,[x19, #0xd0]
7101a4af68  str w9,[x8, #0x99c]
7101a4af6c  ldr x9,[x20, #0x3b8]
7101a4af70  ldr x8,[x20, #0x3b0]
7101a4af74  sub x9,x9,x8
7101a4af78  asr x9,x9,#0x4
7101a4af7c  cmp x9,#0x3
7101a4af80  b.cc 0x7101a4b2d0
7101a4af84  ldr x22,[x8, #0x28]
7101a4af88  ldr w8,[x19, #0xd0]
7101a4af8c  str w8,[x22, #0xf8]
7101a4af90  ldr w8,[x22, #0xd8]
7101a4af94  cbnz w8,0x7101a4b064
7101a4af98  add x1,x22,#0x68
7101a4af9c  add x0,sp,#0x10
7101a4afa0  bl 0x7103778ab0
7101a4afa4  ldr w8,[x19, #0xd0]
7101a4afa8  add w9,w8,#0x1
7101a4afac  cmp w9,#0x1
7101a4afb0  b.hi 0x7101a4afd4
7101a4afb4  ldr w8,[x22, #0x8]
7101a4afb8  add w3,w8,#0x1
7101a4afbc  adrp x1,0x7104338000
7101a4afc0  add x1,x1,#0xa8c
7101a4afc4  add x0,sp,#0x10
7101a4afc8  mov w2,#0x1
7101a4afcc  bl 0x710377a280
7101a4afd0  b 0x7101a4b048
7101a4afd4  cmp w8,#0x3c
7101a4afd8  adrp x9,0x7105314000
7101a4afdc  add x9,x9,#0x518
7101a4afe0  b.hi 0x7101a4b00c
7101a4afe4  adrp x10,0x7105314000
7101a4afe8  ldr x10,[x10, #0x510]
7101a4afec  ldr x10,[x10]
7101a4aff0  ldrb w11,[x10]
7101a4aff4  cbnz w11,0x7101a4b00c
7101a4aff8  ldr x9,[x10, #0x58]
7101a4affc  mov w10,#0xf7d8
7101a4b000  ldr x9,[x9]
7101a4b004  ldr x9,[x9]
7101a4b008  madd x9,x8,x10,x9
7101a4b00c  ldr x8,[sp, #0x18]
7101a4b010  ldrb w10,[x9]
7101a4b014  ldr x0,[x8, #0x10]
7101a4b018  cbz w10,0x7101a4b030
7101a4b01c  cbz x0,0x7101a4b04c
7101a4b020  add x1,x9,#0xc
7101a4b024  mov w2,#0xffffffff
7101a4b028  mov w3,#0x1
7101a4b02c  b 0x7101a4b044
7101a4b030  cbz x0,0x7101a4b04c
7101a4b034  sub x1,x29,#0x5c
7101a4b038  mov w2,wzr
7101a4b03c  mov w3,wzr
7101a4b040  stur wzr,[x29, #-0x5c]
7101a4b044  bl 0x71037a2270
7101a4b048  ldr x8,[sp, #0x18]
7101a4b04c  adrp x9,0x710523d000
7101a4b050  add x9,x9,#0x9a8
7101a4b054  stp x9,xzr,[sp, #0x10]
7101a4b058  cbz x8,0x7101a4b064
7101a4b05c  mov x0,x8
7101a4b060  bl 0x710392eb40
7101a4b064  ldr x9,[x20, #0x258]
7101a4b068  ldr x8,[x20, #0x250]
7101a4b06c  sub x9,x9,x8
7101a4b070  mov x10,#0xbf7f
7101a4b074  movk x10,#0xefdf, LSL #16
7101a4b078  movk x10,#0xfbf7, LSL #32
7101a4b07c  movk x10,#0x7efd, LSL #48
7101a4b080  asr x9,x9,#0x3
7101a4b084  mul x9,x9,x10
7101a4b088  cmp x9,#0x4
7101a4b08c  b.cc 0x7101a4b2c8
7101a4b090  ldr x19,[x20, #0x348]
7101a4b094  ldr w9,[x19, #0xd0]
7101a4b098  str w9,[x8, #0xd94]
7101a4b09c  ldr x9,[x20, #0x3b8]
7101a4b0a0  ldr x8,[x20, #0x3b0]
7101a4b0a4  sub x9,x9,x8
7101a4b0a8  asr x9,x9,#0x4
7101a4b0ac  cmp x9,#0x4
7101a4b0b0  b.cc 0x7101a4b2d0
7101a4b0b4  ldr x22,[x8, #0x38]
7101a4b0b8  ldr w8,[x19, #0xd0]
7101a4b0bc  str w8,[x22, #0xf8]
7101a4b0c0  ldr w8,[x22, #0xd8]
7101a4b0c4  cbnz w8,0x7101a4b194
7101a4b0c8  add x1,x22,#0x68
7101a4b0cc  add x0,sp,#0x10
7101a4b0d0  bl 0x7103778ab0
7101a4b0d4  ldr w8,[x19, #0xd0]
7101a4b0d8  add w9,w8,#0x1
7101a4b0dc  cmp w9,#0x1
7101a4b0e0  b.hi 0x7101a4b104
7101a4b0e4  ldr w8,[x22, #0x8]
7101a4b0e8  add w3,w8,#0x1
7101a4b0ec  adrp x1,0x7104338000
7101a4b0f0  add x1,x1,#0xa8c
7101a4b0f4  add x0,sp,#0x10
7101a4b0f8  mov w2,#0x1
7101a4b0fc  bl 0x710377a280
7101a4b100  b 0x7101a4b178
7101a4b104  cmp w8,#0x3c
7101a4b108  adrp x9,0x7105314000
7101a4b10c  add x9,x9,#0x518
7101a4b110  b.hi 0x7101a4b13c
7101a4b114  adrp x10,0x7105314000
7101a4b118  ldr x10,[x10, #0x510]
7101a4b11c  ldr x10,[x10]
7101a4b120  ldrb w11,[x10]
7101a4b124  cbnz w11,0x7101a4b13c
7101a4b128  ldr x9,[x10, #0x58]
7101a4b12c  mov w10,#0xf7d8
7101a4b130  ldr x9,[x9]
7101a4b134  ldr x9,[x9]
7101a4b138  madd x9,x8,x10,x9
7101a4b13c  ldr x8,[sp, #0x18]
7101a4b140  ldrb w10,[x9]
7101a4b144  ldr x0,[x8, #0x10]
7101a4b148  cbz w10,0x7101a4b160
7101a4b14c  cbz x0,0x7101a4b17c
7101a4b150  add x1,x9,#0xc
7101a4b154  mov w2,#0xffffffff
7101a4b158  mov w3,#0x1
7101a4b15c  b 0x7101a4b174
7101a4b160  cbz x0,0x7101a4b17c
7101a4b164  sub x1,x29,#0x5c
7101a4b168  mov w2,wzr
7101a4b16c  mov w3,wzr
7101a4b170  stur wzr,[x29, #-0x5c]
7101a4b174  bl 0x71037a2270
7101a4b178  ldr x8,[sp, #0x18]
7101a4b17c  adrp x9,0x710523d000
7101a4b180  add x9,x9,#0x9a8
7101a4b184  stp x9,xzr,[sp, #0x10]
7101a4b188  cbz x8,0x7101a4b194
7101a4b18c  mov x0,x8
7101a4b190  bl 0x710392eb40
7101a4b194  ldr x9,[x20, #0x258]
7101a4b198  ldr x8,[x20, #0x250]
7101a4b19c  sub x9,x9,x8
7101a4b1a0  mov x10,#0xbf7f
7101a4b1a4  movk x10,#0xefdf, LSL #16
7101a4b1a8  movk x10,#0xfbf7, LSL #32
7101a4b1ac  movk x10,#0x7efd, LSL #48
7101a4b1b0  asr x9,x9,#0x3
7101a4b1b4  mul x9,x9,x10
7101a4b1b8  cmp x9,#0x5
7101a4b1bc  b.cc 0x7101a4b2c8
7101a4b1c0  ldr x19,[x20, #0x348]
7101a4b1c4  ldr w9,[x19, #0xd0]
7101a4b1c8  str w9,[x8, #0x118c]
7101a4b1cc  ldr x9,[x20, #0x3b8]
7101a4b1d0  ldr x8,[x20, #0x3b0]
7101a4b1d4  sub x9,x9,x8
7101a4b1d8  asr x9,x9,#0x4
7101a4b1dc  cmp x9,#0x5
7101a4b1e0  b.cc 0x7101a4b2d0
7101a4b1e4  ldr x20,[x8, #0x48]
7101a4b1e8  ldr w8,[x19, #0xd0]
7101a4b1ec  str w8,[x20, #0xf8]
7101a4b1f0  ldr w8,[x20, #0xd8]
7101a4b1f4  cbnz w8,0x7101a4abf4
7101a4b1f8  add x1,x20,#0x68
7101a4b1fc  add x0,sp,#0x10
7101a4b200  bl 0x7103778ab0
7101a4b204  ldr w8,[x19, #0xd0]
7101a4b208  add w9,w8,#0x1
7101a4b20c  cmp w9,#0x1
7101a4b210  b.hi 0x7101a4b234
7101a4b214  ldr w8,[x20, #0x8]
7101a4b218  add w3,w8,#0x1
7101a4b21c  adrp x1,0x7104338000
7101a4b220  add x1,x1,#0xa8c
7101a4b224  add x0,sp,#0x10
7101a4b228  mov w2,#0x1
7101a4b22c  bl 0x710377a280
7101a4b230  b 0x7101a4b2a8
7101a4b234  cmp w8,#0x3c
7101a4b238  adrp x9,0x7105314000
7101a4b23c  add x9,x9,#0x518
7101a4b240  b.hi 0x7101a4b26c
7101a4b244  adrp x10,0x7105314000
7101a4b248  ldr x10,[x10, #0x510]
7101a4b24c  ldr x10,[x10]
7101a4b250  ldrb w11,[x10]
7101a4b254  cbnz w11,0x7101a4b26c
7101a4b258  ldr x9,[x10, #0x58]
7101a4b25c  mov w10,#0xf7d8
7101a4b260  ldr x9,[x9]
7101a4b264  ldr x9,[x9]
7101a4b268  madd x9,x8,x10,x9
7101a4b26c  ldr x8,[sp, #0x18]
7101a4b270  ldrb w10,[x9]
7101a4b274  ldr x0,[x8, #0x10]
7101a4b278  cbz w10,0x7101a4b290
7101a4b27c  cbz x0,0x7101a4b2ac
7101a4b280  add x1,x9,#0xc
7101a4b284  mov w2,#0xffffffff
7101a4b288  mov w3,#0x1
7101a4b28c  b 0x7101a4b2a4
7101a4b290  cbz x0,0x7101a4b2ac
7101a4b294  sub x1,x29,#0x5c
7101a4b298  mov w2,wzr
7101a4b29c  mov w3,wzr
7101a4b2a0  stur wzr,[x29, #-0x5c]
7101a4b2a4  bl 0x71037a2270
7101a4b2a8  ldr x8,[sp, #0x18]
7101a4b2ac  adrp x9,0x710523d000
7101a4b2b0  add x9,x9,#0x9a8
7101a4b2b4  stp x9,xzr,[sp, #0x10]
7101a4b2b8  cbz x8,0x7101a4abf4
7101a4b2bc  mov x0,x8
7101a4b2c0  bl 0x710392eb40
7101a4b2c4  b 0x7101a4abf4
7101a4b2c8  mov x0,x24
7101a4b2cc  bl 0x71039c1330
7101a4b2d0  mov x0,x21
7101a4b2d4  bl 0x71039c1330
