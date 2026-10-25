// addr:      7101b0a740
// offset:    0x1b0a740
// name:      FUN_7101b0a740
// mangled:   
// size:      1500

7101b0a740  sub sp,sp,#0xf0
7101b0a744  stp x28,x27,[sp, #0x90]
7101b0a748  stp x26,x25,[sp, #0xa0]
7101b0a74c  stp x24,x23,[sp, #0xb0]
7101b0a750  stp x22,x21,[sp, #0xc0]
7101b0a754  stp x20,x19,[sp, #0xd0]
7101b0a758  stp x29,x30,[sp, #0xe0]
7101b0a75c  add x29,sp,#0xe0
7101b0a760  ldr x23,[x0, #0x450]
7101b0a764  ldr x22,[x0, #0x458]
7101b0a768  mov w20,w2
7101b0a76c  mov w21,w1
7101b0a770  mov x19,x0
7101b0a774  cmp x22,x23
7101b0a778  b.eq 0x7101b0a794
7101b0a77c  ldr x8,[x22, #-0x10]!
7101b0a780  ldr x8,[x8]
7101b0a784  mov x0,x22
7101b0a788  blr x8
7101b0a78c  cmp x23,x22
7101b0a790  b.ne 0x7101b0a77c
7101b0a794  str x23,[x19, #0x458]
7101b0a798  tbnz w21,#0x1f,0x7101b0acfc
7101b0a79c  ldr x8,[x19, #0x420]
7101b0a7a0  ldr x25,[x19, #0x418]
7101b0a7a4  sub x8,x8,x25
7101b0a7a8  asr x8,x8,#0x3
7101b0a7ac  sxtw x26,w21
7101b0a7b0  cmp x8,x26
7101b0a7b4  b.ls 0x7101b0acfc
7101b0a7b8  ldr x8,[x25, x26, LSL #0x3]
7101b0a7bc  ldrb w8,[x8, #0x20]
7101b0a7c0  cbz w8,0x7101b0acfc
7101b0a7c4  ldr x8,[x19, #0x400]
7101b0a7c8  ldr w9,[x8, #0x2a4]
7101b0a7cc  add x22,x19,#0x400
7101b0a7d0  cmp w9,w21
7101b0a7d4  b.eq 0x7101b0a7f0
7101b0a7d8  mov w3,#0x1
7101b0a7dc  mov x0,x22
7101b0a7e0  mov w1,w21
7101b0a7e4  mov w2,wzr
7101b0a7e8  bl 0x7103783c10
7101b0a7ec  ldr x8,[x22]
7101b0a7f0  ldrsw x9,[x8, #0x2c8]
7101b0a7f4  add x23,x19,#0x450
7101b0a7f8  str x22,[sp, #0x8]
7101b0a7fc  tbnz w9,#0x1f,0x7101b0a824
7101b0a800  ldr w10,[x8, #0x2c0]
7101b0a804  cmp w9,w10
7101b0a808  b.ge 0x7101b0a824
7101b0a80c  ldr x8,[x8, #0x168]
7101b0a810  ldr x8,[x8, x9, LSL #0x3]
7101b0a814  add x1,x8,#0x8
7101b0a818  add x0,sp,#0x28
7101b0a81c  bl 0x7103776390
7101b0a820  b 0x7101b0a82c
7101b0a824  add x0,sp,#0x28
7101b0a828  bl 0x7103776290
7101b0a82c  adrp x1,0x7104401000
7101b0a830  add x1,x1,#0x9
7101b0a834  add x8,sp,#0x48
7101b0a838  add x0,sp,#0x28
7101b0a83c  add x22,sp,#0x48
7101b0a840  bl 0x71037780e0
7101b0a844  ldr x8,[x19, #0x458]
7101b0a848  ldr x9,[x19, #0x460]
7101b0a84c  cmp x8,x9
7101b0a850  b.cs 0x7101b0a890
7101b0a854  adrp x9,0x710523d000
7101b0a858  add x9,x9,#0x9e8
7101b0a85c  cmp x8,x22
7101b0a860  stp x9,xzr,[x8]
7101b0a864  b.eq 0x7101b0a880
7101b0a868  ldr x9,[sp, #0x50]
7101b0a86c  str xzr,[sp, #0x50]
7101b0a870  ldr x0,[x8, #0x8]
7101b0a874  str x9,[x8, #0x8]
7101b0a878  cbz x0,0x7101b0a880
7101b0a87c  bl 0x710392eb40
7101b0a880  ldr x8,[x19, #0x458]
7101b0a884  add x8,x8,#0x10
7101b0a888  str x8,[x19, #0x458]
7101b0a88c  b 0x7101b0a89c
7101b0a890  add x1,sp,#0x48
7101b0a894  mov x0,x23
7101b0a898  bl 0x7101b09e60
7101b0a89c  ldr x0,[sp, #0x50]
7101b0a8a0  adrp x21,0x710523d000
7101b0a8a4  add x21,x21,#0x9e8
7101b0a8a8  stp x21,xzr,[sp, #0x48]
7101b0a8ac  cbz x0,0x7101b0a8b4
7101b0a8b0  bl 0x710392eb40
7101b0a8b4  ldr x28,[x25, x26, LSL #0x3]
7101b0a8b8  ldrb w8,[x28, #0x8]
7101b0a8bc  cmp w8,#0x5
7101b0a8c0  str x23,[sp, #0x10]
7101b0a8c4  b.ne 0x7101b0ab0c
7101b0a8c8  adrp x8,0x710532f000
7101b0a8cc  ldr x8,[x8, #0x730]
7101b0a8d0  ldr x8,[x8, #0x8]
7101b0a8d4  ldr x22,[x8, #0x318]
7101b0a8d8  ldr x24,[x22, #0x8]
7101b0a8dc  ldr x1,[x28, #0x10]
7101b0a8e0  mov x0,x24
7101b0a8e4  mov x27,#0x2d00000000000000
7101b0a8e8  bl 0x710327d930
7101b0a8ec  mov x1,#0x98cb
7101b0a8f0  movk x1,#0x61d9, LSL #16
7101b0a8f4  mov x23,x0
7101b0a8f8  movk x1,#0xd, LSL #32
7101b0a8fc  mov x0,x24
7101b0a900  bl 0x710327d930
7101b0a904  tst x23,#0xffffffffff
7101b0a908  and x9,x23,#-0x100000000000000
7101b0a90c  cset w8,ne
7101b0a910  cmp x9,x27
7101b0a914  cset w10,eq
7101b0a918  and w24,w10,w8
7101b0a91c  and x8,x0,#0xffffffffff
7101b0a920  tbz w24,#0x0,0x7101b0a944
7101b0a924  and x10,x0,#-0x100000000000000
7101b0a928  cmp x10,x27
7101b0a92c  b.ne 0x7101b0a948
7101b0a930  cbz x8,0x7101b0a948
7101b0a934  eor x8,x0,x23
7101b0a938  tst x8,#0xffffffffff
7101b0a93c  b.ne 0x7101b0a980
7101b0a940  b 0x7101b0a9e0
7101b0a944  and x10,x0,#-0x100000000000000
7101b0a948  and x11,x23,#0xffffffffff
7101b0a94c  cmp x9,x27
7101b0a950  cset w9,eq
7101b0a954  cmp x11,#0x0
7101b0a958  cset w11,ne
7101b0a95c  cmp x8,#0x0
7101b0a960  cset w8,ne
7101b0a964  cmp x10,x27
7101b0a968  cset w10,eq
7101b0a96c  and w9,w9,w11
7101b0a970  and w8,w8,w10
7101b0a974  eor w8,w8,w9
7101b0a978  cmp w8,#0x1
7101b0a97c  b.ne 0x7101b0a9e0
7101b0a980  ldr x0,[x22, #0x8]
7101b0a984  mov x1,#0x48cb
7101b0a988  movk x1,#0x5f95, LSL #16
7101b0a98c  movk x1,#0x15, LSL #32
7101b0a990  bl 0x710327d930
7101b0a994  and x8,x0,#0xffffffffff
7101b0a998  cbz w24,0x7101b0a9bc
7101b0a99c  and x9,x0,#-0x100000000000000
7101b0a9a0  cmp x9,x27
7101b0a9a4  b.ne 0x7101b0a9c0
7101b0a9a8  cbz x8,0x7101b0a9c0
7101b0a9ac  eor x8,x0,x23
7101b0a9b0  tst x8,#0xffffffffff
7101b0a9b4  b.ne 0x7101b0ab0c
7101b0a9b8  b 0x7101b0a9e0
7101b0a9bc  and x9,x0,#-0x100000000000000
7101b0a9c0  cmp x8,#0x0
7101b0a9c4  cset w8,ne
7101b0a9c8  cmp x9,x27
7101b0a9cc  cset w9,eq
7101b0a9d0  and w8,w8,w9
7101b0a9d4  eor w8,w8,w24
7101b0a9d8  cmp w8,#0x1
7101b0a9dc  b.eq 0x7101b0ab0c
7101b0a9e0  adrp x8,0x7105239000
7101b0a9e4  add x8,x8,#0x1c0
7101b0a9e8  adrp x1,0x7104421000
7101b0a9ec  add x1,x1,#0xea5
7101b0a9f0  ldp w9,w10,[x8]
7101b0a9f4  str w10,[x8]
7101b0a9f8  ldp w10,w11,[x8, #0x8]
7101b0a9fc  eor w9,w9,w9, LSL #0xb
7101b0aa00  eor w9,w9,w9, LSR #0x8
7101b0aa04  eor w9,w9,w11
7101b0aa08  eor w9,w9,w11, LSR #0x13
7101b0aa0c  stp w10,w11,[x8, #0x4]
7101b0aa10  add x10,sp,#0x48
7101b0aa14  add x23,x10,#0x8
7101b0aa18  str w9,[x8, #0xc]
7101b0aa1c  mov w8,#0xaaab
7101b0aa20  movk w8,#0xaaaa, LSL #16
7101b0aa24  umull x8,w9,w8
7101b0aa28  lsr x8,x8,#0x21
7101b0aa2c  add w8,w8,w8, LSL #0x1
7101b0aa30  sub w2,w9,w8
7101b0aa34  add x0,sp,#0x48
7101b0aa38  strb wzr,[sp, #0x50]
7101b0aa3c  str xzr,[sp, #0x48]
7101b0aa40  bl 0x710062dc20
7101b0aa44  adrp x1,0x710425e000
7101b0aa48  add x1,x1,#0xea0
7101b0aa4c  add x8,sp,#0x38
7101b0aa50  add x0,sp,#0x28
7101b0aa54  bl 0x7103776640
7101b0aa58  add x8,sp,#0x18
7101b0aa5c  add x0,sp,#0x38
7101b0aa60  mov x1,x23
7101b0aa64  bl 0x71037780e0
7101b0aa68  ldr x23,[sp, #0x40]
7101b0aa6c  adrp x8,0x710523d000
7101b0aa70  add x8,x8,#0x988
7101b0aa74  stp x8,xzr,[sp, #0x38]
7101b0aa78  cbz x23,0x7101b0aa9c
7101b0aa7c  ldr x0,[x23, #0x18]
7101b0aa80  adrp x8,0x710523d000
7101b0aa84  add x8,x8,#0x9a8
7101b0aa88  stp x8,xzr,[x23, #0x10]
7101b0aa8c  cbz x0,0x7101b0aa94
7101b0aa90  bl 0x710392eb40
7101b0aa94  mov x0,x23
7101b0aa98  bl 0x710392eb40
7101b0aa9c  ldr x8,[x19, #0x458]
7101b0aaa0  ldr x9,[x19, #0x460]
7101b0aaa4  cmp x8,x9
7101b0aaa8  b.cs 0x7101b0aae8
7101b0aaac  add x9,sp,#0x18
7101b0aab0  mov x22,x21
7101b0aab4  cmp x8,x9
7101b0aab8  stp x21,xzr,[x8]
7101b0aabc  b.eq 0x7101b0aad8
7101b0aac0  ldr x9,[sp, #0x20]
7101b0aac4  str xzr,[sp, #0x20]
7101b0aac8  ldr x0,[x8, #0x8]
7101b0aacc  str x9,[x8, #0x8]
7101b0aad0  cbz x0,0x7101b0aad8
7101b0aad4  bl 0x710392eb40
7101b0aad8  ldr x8,[x19, #0x458]
7101b0aadc  add x8,x8,#0x10
7101b0aae0  str x8,[x19, #0x458]
7101b0aae4  b 0x7101b0aaf8
7101b0aae8  ldr x0,[sp, #0x10]
7101b0aaec  add x1,sp,#0x18
7101b0aaf0  bl 0x7101b09e60
7101b0aaf4  mov x22,x21
7101b0aaf8  ldr x0,[sp, #0x20]
7101b0aafc  stp x22,xzr,[sp, #0x18]
7101b0ab00  cbz x0,0x7101b0ab08
7101b0ab04  bl 0x710392eb40
7101b0ab08  ldr x28,[x25, x26, LSL #0x3]
7101b0ab0c  ldrb w8,[x28, #0x31]
7101b0ab10  ldr x23,[sp, #0x10]
7101b0ab14  cbz w8,0x7101b0ab90
7101b0ab18  adrp x1,0x71042c4000
7101b0ab1c  add x1,x1,#0x9ba
7101b0ab20  add x8,sp,#0x48
7101b0ab24  add x0,sp,#0x28
7101b0ab28  add x22,sp,#0x48
7101b0ab2c  bl 0x71037780e0
7101b0ab30  ldr x8,[x19, #0x458]
7101b0ab34  ldr x9,[x19, #0x460]
7101b0ab38  cmp x8,x9
7101b0ab3c  b.cs 0x7101b0ab74
7101b0ab40  cmp x8,x22
7101b0ab44  stp x21,xzr,[x8]
7101b0ab48  b.eq 0x7101b0ab64
7101b0ab4c  ldr x9,[sp, #0x50]
7101b0ab50  str xzr,[sp, #0x50]
7101b0ab54  ldr x0,[x8, #0x8]
7101b0ab58  str x9,[x8, #0x8]
7101b0ab5c  cbz x0,0x7101b0ab64
7101b0ab60  bl 0x710392eb40
7101b0ab64  ldr x8,[x19, #0x458]
7101b0ab68  add x8,x8,#0x10
7101b0ab6c  str x8,[x19, #0x458]
7101b0ab70  b 0x7101b0ab80
7101b0ab74  add x1,sp,#0x48
7101b0ab78  mov x0,x23
7101b0ab7c  bl 0x7101b09e60
7101b0ab80  ldr x0,[sp, #0x50]
7101b0ab84  stp x21,xzr,[sp, #0x48]
7101b0ab88  cbz x0,0x7101b0ab90
7101b0ab8c  bl 0x710392eb40
7101b0ab90  ldr x8,[x19, #0x420]
7101b0ab94  ldr x22,[x19, #0x418]
7101b0ab98  sub x8,x8,x22
7101b0ab9c  asr x8,x8,#0x3
7101b0aba0  cmp x8,x26
7101b0aba4  b.ls 0x7101b0ac44
7101b0aba8  ldr x8,[sp, #0x8]
7101b0abac  ldr x8,[x8]
7101b0abb0  ldrsw x9,[x8, #0x2c8]
7101b0abb4  tbnz w9,#0x1f,0x7101b0abdc
7101b0abb8  ldr w10,[x8, #0x2c0]
7101b0abbc  cmp w9,w10
7101b0abc0  b.ge 0x7101b0abdc
7101b0abc4  ldr x8,[x8, #0x168]
7101b0abc8  ldr x8,[x8, x9, LSL #0x3]
7101b0abcc  add x1,x8,#0x8
7101b0abd0  add x0,sp,#0x48
7101b0abd4  bl 0x7103776390
7101b0abd8  b 0x7101b0abe4
7101b0abdc  add x0,sp,#0x48
7101b0abe0  bl 0x7103776290
7101b0abe4  ldr x8,[x22, x26, LSL #0x3]
7101b0abe8  ldrb w8,[x8, #0x31]
7101b0abec  ldr x0,[sp, #0x50]
7101b0abf0  cbz w8,0x7101b0ac00
7101b0abf4  adrp x1,0x71042c4000
7101b0abf8  add x1,x1,#0x9ad
7101b0abfc  b 0x7101b0ac08
7101b0ac00  adrp x1,0x71042e6000
7101b0ac04  add x1,x1,#0xc4e
7101b0ac08  fmov s0,0x3f800000
7101b0ac0c  bl 0x7103778300
7101b0ac10  ldr x22,[sp, #0x50]
7101b0ac14  adrp x8,0x710523d000
7101b0ac18  add x8,x8,#0x988
7101b0ac1c  stp x8,xzr,[sp, #0x48]
7101b0ac20  cbz x22,0x7101b0ac44
7101b0ac24  ldr x0,[x22, #0x18]
7101b0ac28  adrp x8,0x710523d000
7101b0ac2c  add x8,x8,#0x9a8
7101b0ac30  stp x8,xzr,[x22, #0x10]
7101b0ac34  cbz x0,0x7101b0ac3c
7101b0ac38  bl 0x710392eb40
7101b0ac3c  mov x0,x22
7101b0ac40  bl 0x710392eb40
7101b0ac44  lsl x22,x26,#0x3
7101b0ac48  ldr x8,[x25, x22, LSL #0x0]
7101b0ac4c  ldr w2,[x8, #0x24]
7101b0ac50  and w3,w20,#0x1
7101b0ac54  add x1,sp,#0x28
7101b0ac58  mov x0,x23
7101b0ac5c  bl 0x7101b15150
7101b0ac60  ldr x21,[x25, x22, LSL #0x0]
7101b0ac64  ldrb w8,[x21, #0x8]
7101b0ac68  cmp w8,#0x5
7101b0ac6c  b.ne 0x7101b0acb8
7101b0ac70  adrp x8,0x710532f000
7101b0ac74  ldr x8,[x8, #0x730]
7101b0ac78  ldr x8,[x8, #0x8]
7101b0ac7c  ldr x20,[x8, #0x318]
7101b0ac80  ldr x1,[x21, #0x10]
7101b0ac84  ldr x0,[x20, #0x8]
7101b0ac88  bl 0x710327d930
7101b0ac8c  mov x1,x0
7101b0ac90  mov x0,x20
7101b0ac94  bl 0x710327d3b0
7101b0ac98  mov x9,#0xf324
7101b0ac9c  movk x9,#0xb7a5, LSL #16
7101b0aca0  and x8,x0,#0xffffffffff
7101b0aca4  movk x9,#0x5, LSL #32
7101b0aca8  cmp x8,x9
7101b0acac  b.ne 0x7101b0acb8
7101b0acb0  mov w8,#0x1
7101b0acb4  b 0x7101b0acbc
7101b0acb8  ldr w8,[x21, #0x18]
7101b0acbc  ldr w9,[x19, #0x500]
7101b0acc0  add w8,w9,w8
7101b0acc4  str w8,[x19, #0x500]
7101b0acc8  ldr x19,[sp, #0x30]
7101b0accc  adrp x8,0x710523d000
7101b0acd0  add x8,x8,#0x988
7101b0acd4  stp x8,xzr,[sp, #0x28]
7101b0acd8  cbz x19,0x7101b0acfc
7101b0acdc  ldr x0,[x19, #0x18]
7101b0ace0  adrp x8,0x710523d000
7101b0ace4  add x8,x8,#0x9a8
7101b0ace8  stp x8,xzr,[x19, #0x10]
7101b0acec  cbz x0,0x7101b0acf4
7101b0acf0  bl 0x710392eb40
7101b0acf4  mov x0,x19
7101b0acf8  bl 0x710392eb40
7101b0acfc  ldp x29,x30,[sp, #0xe0]
7101b0ad00  ldp x20,x19,[sp, #0xd0]
7101b0ad04  ldp x22,x21,[sp, #0xc0]
7101b0ad08  ldp x24,x23,[sp, #0xb0]
7101b0ad0c  ldp x26,x25,[sp, #0xa0]
7101b0ad10  ldp x28,x27,[sp, #0x90]
7101b0ad14  add sp,sp,#0xf0
7101b0ad18  ret
