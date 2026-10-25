// addr:      7101c3a700
// offset:    0x1c3a700
// name:      FUN_7101c3a700
// mangled:   
// size:      2000

7101c3a700  sub sp,sp,#0x70
7101c3a704  str d8,[sp, #0x20]
7101c3a708  str x25,[sp, #0x28]
7101c3a70c  stp x24,x23,[sp, #0x30]
7101c3a710  stp x22,x21,[sp, #0x40]
7101c3a714  stp x20,x19,[sp, #0x50]
7101c3a718  stp x29,x30,[sp, #0x60]
7101c3a71c  add x29,sp,#0x60
7101c3a720  adrp x23,0x7105329000
7101c3a724  ldr x8,[x23, #0x60]
7101c3a728  ldr x22,[x0, #0x80]
7101c3a72c  ldr w10,[x22, #0x2018]
7101c3a730  ldr x11,[x8, #0x8]
7101c3a734  ldr w9,[x11, #0x4]
7101c3a738  cmp w9,w10
7101c3a73c  b.ls 0x7101c3a794
7101c3a740  orr w12,wzr,#0x18
7101c3a744  madd x0,x10,x12,x11
7101c3a748  ldr w9,[x22, #0x201c]
7101c3a74c  ldr x10,[x0, #0x8]!
7101c3a750  ldr x11,[x0, #0x8]
7101c3a754  sub x11,x11,x10
7101c3a758  lsr x12,x11,#0x4
7101c3a75c  cmp w9,w12
7101c3a760  b.cs 0x7101c3a794
7101c3a764  asr x11,x11,#0x4
7101c3a768  cmp x11,x9
7101c3a76c  b.ls 0x7101c3aec8
7101c3a770  add x10,x10,x9, LSL #0x4
7101c3a774  ldp x9,x19,[x10]
7101c3a778  cbz x19,0x7101c3a79c
7101c3a77c  add x10,x19,#0x8
7101c3a780  ldxr x11,[x10]
7101c3a784  add x11,x11,#0x1
7101c3a788  stxr w12,x11,[x10]
7101c3a78c  cbnz w12,0x7101c3a780
7101c3a790  b 0x7101c3a79c
7101c3a794  mov x19,xzr
7101c3a798  mov x9,xzr
7101c3a79c  ldr w10,[x22, #0x21b0]
7101c3a7a0  cmp w10,#0xf
7101c3a7a4  b.hi 0x7101c3aa58
7101c3a7a8  mov w11,#0x1
7101c3a7ac  lsl w11,w11,w10
7101c3a7b0  tst w11,#0x7c00
7101c3a7b4  b.ne 0x7101c3a808
7101c3a7b8  mov w12,#0x8148
7101c3a7bc  tst w11,w12
7101c3a7c0  b.ne 0x7101c3a83c
7101c3a7c4  cbnz w10,0x7101c3aa58
7101c3a7c8  ldr x8,[x22, #0x21c0]
7101c3a7cc  ldr x8,[x8]
7101c3a7d0  ldr x8,[x8]
7101c3a7d4  ldr x8,[x8, #0x600]
7101c3a7d8  ldr x20,[x22, #0x2208]
7101c3a7dc  ldrb w9,[x8, #0x4aa]
7101c3a7e0  cbz w9,0x7101c3ab30
7101c3a7e4  ldrb w8,[x8, #0x1ac]
7101c3a7e8  tbz w8,#0x1,0x7101c3ab30
7101c3a7ec  ldr x21,[x20, #0x80]
7101c3a7f0  ldrb w8,[x21, #0xc9]
7101c3a7f4  mov w9,#0x2260
7101c3a7f8  add x0,x21,x9
7101c3a7fc  cbz w8,0x7101c3ab0c
7101c3a800  mov w1,wzr
7101c3a804  b 0x7101c3ab10
7101c3a808  ldr x9,[x22, #0x21c8]
7101c3a80c  ldr x9,[x9]
7101c3a810  ldr x9,[x9]
7101c3a814  ldr x9,[x9, #0x600]
7101c3a818  ldrb w10,[x9, #0x4aa]
7101c3a81c  fmov s0,0x3f800000
7101c3a820  cbz w10,0x7101c3a834
7101c3a824  ldrb w9,[x9, #0x274]
7101c3a828  tbz w9,#0x4,0x7101c3a834
7101c3a82c  ldr x9,[x8, #0x8]
7101c3a830  ldr s0,[x9, #0x138]
7101c3a834  ldr x8,[x8, #0x8]
7101c3a838  str s0,[x8, #0x134]
7101c3a83c  mov w8,#0x2038
7101c3a840  add x20,x22,x8
7101c3a844  mov x0,x20
7101c3a848  bl 0x7101c34420
7101c3a84c  ldr x9,[x20]
7101c3a850  cbz x9,0x7101c3a87c
7101c3a854  ldr x11,[x22, #0x2048]
7101c3a858  ldr x8,[x22, #0x2040]
7101c3a85c  and x10,x11,#0x1
7101c3a860  orr x12,x10,x8
7101c3a864  cbz x12,0x7101c3a87c
7101c3a868  add x0,x9,x11, ASR #0x1
7101c3a86c  cbz x10,0x7101c3a878
7101c3a870  ldr x9,[x0]
7101c3a874  ldr x8,[x9, x8, LSL #0x0]
7101c3a878  blr x8
7101c3a87c  ldr w8,[x22, #0x21b4]
7101c3a880  add w8,w8,#0x1
7101c3a884  str w8,[x22, #0x21b4]
7101c3a888  ldr x8,[x22, #0x21c0]
7101c3a88c  ldr x9,[x23, #0x60]
7101c3a890  ldr x8,[x8]
7101c3a894  ldr x10,[x9, #0x8]
7101c3a898  ldr x8,[x8]
7101c3a89c  ldr w10,[x10, #0x134]
7101c3a8a0  str w10,[x8, #0x640]
7101c3a8a4  ldr x8,[x22, #0x21d0]
7101c3a8a8  ldr x9,[x9, #0x8]
7101c3a8ac  ldr x8,[x8]
7101c3a8b0  ldr w9,[x9, #0x134]
7101c3a8b4  ldr x8,[x8]
7101c3a8b8  str w9,[x8, #0x640]
7101c3a8bc  ldr x8,[x22, #0x21d0]
7101c3a8c0  ldr x8,[x8]
7101c3a8c4  add x0,x8,#0x8
7101c3a8c8  adrp x1,0x71043cf000
7101c3a8cc  add x1,x1,#0x646
7101c3a8d0  mov x8,sp
7101c3a8d4  bl 0x7103776640
7101c3a8d8  adrp x1,0x710433a000
7101c3a8dc  add x1,x1,#0x373
7101c3a8e0  add x8,sp,#0x10
7101c3a8e4  mov x0,sp
7101c3a8e8  bl 0x7103776910
7101c3a8ec  ldr x20,[sp, #0x8]
7101c3a8f0  adrp x8,0x710523d000
7101c3a8f4  add x8,x8,#0x988
7101c3a8f8  stp x8,xzr,[sp]
7101c3a8fc  cbz x20,0x7101c3a920
7101c3a900  ldr x0,[x20, #0x18]
7101c3a904  adrp x8,0x710523d000
7101c3a908  add x8,x8,#0x9a8
7101c3a90c  stp x8,xzr,[x20, #0x10]
7101c3a910  cbz x0,0x7101c3a918
7101c3a914  bl 0x710392eb40
7101c3a918  mov x0,x20
7101c3a91c  bl 0x710392eb40
7101c3a920  adrp x1,0x71043ad000
7101c3a924  add x1,x1,#0x9a0
7101c3a928  add x0,sp,#0x10
7101c3a92c  bl 0x7101c321b0
7101c3a930  ldr x8,[x22, #0x21d0]
7101c3a934  ldr x8,[x8]
7101c3a938  add x0,x8,#0x8
7101c3a93c  adrp x1,0x71043e0000
7101c3a940  add x1,x1,#0x306
7101c3a944  mov x8,sp
7101c3a948  bl 0x7103776910
7101c3a94c  ldr x20,[sp, #0x8]
7101c3a950  ldr x8,[x20]
7101c3a954  cbz x8,0x7101c3acb0
7101c3a958  ldr w8,[x22, #0x21b0]
7101c3a95c  cmp w8,#0x3
7101c3a960  b.eq 0x7101c3aa20
7101c3a964  cmp w8,#0x2
7101c3a968  b.ne 0x7101c3aa34
7101c3a96c  ldr x8,[x23, #0x60]
7101c3a970  ldr x11,[x8, #0x8]
7101c3a974  ldr w10,[x22, #0x2018]
7101c3a978  ldr w9,[x11, #0x4]
7101c3a97c  cmp w9,w10
7101c3a980  b.ls 0x7101c3acac
7101c3a984  orr w12,wzr,#0x18
7101c3a988  madd x0,x10,x12,x11
7101c3a98c  ldr w9,[x22, #0x201c]
7101c3a990  ldr x10,[x0, #0x8]!
7101c3a994  ldr x11,[x0, #0x8]
7101c3a998  sub x11,x11,x10
7101c3a99c  lsr x12,x11,#0x4
7101c3a9a0  cmp w9,w12
7101c3a9a4  b.cs 0x7101c3acac
7101c3a9a8  asr x11,x11,#0x4
7101c3a9ac  cmp x11,x9
7101c3a9b0  b.ls 0x7101c3aec8
7101c3a9b4  add x9,x10,x9, LSL #0x4
7101c3a9b8  ldp x24,x20,[x9]
7101c3a9bc  cbz x20,0x7101c3a9d4
7101c3a9c0  add x9,x20,#0x8
7101c3a9c4  ldxr x10,[x9]
7101c3a9c8  add x10,x10,#0x1
7101c3a9cc  stxr w11,x10,[x9]
7101c3a9d0  cbnz w11,0x7101c3a9c4
7101c3a9d4  cbz x24,0x7101c3ac78
7101c3a9d8  ldr x8,[x8, #0x8]
7101c3a9dc  ldr w9,[x8, #0x4]
7101c3a9e0  cbz w9,0x7101c3a9fc
7101c3a9e4  sub w9,w9,#0x1
7101c3a9e8  orr w10,wzr,#0x18
7101c3a9ec  umaddl x9,w9,w10,x8
7101c3a9f0  ldp x8,x9,[x9, #0x8]
7101c3a9f4  cmp x9,x8
7101c3a9f8  b.ne 0x7101c3aba8
7101c3a9fc  mov x25,xzr
7101c3aa00  cmp x25,x24
7101c3aa04  b.ne 0x7101c3abfc
7101c3aa08  adrp x1,0x7104454000
7101c3aa0c  add x1,x1,#0xc5c
7101c3aa10  mov x0,sp
7101c3aa14  bl 0x710377a120
7101c3aa18  cbnz x20,0x7101c3ac7c
7101c3aa1c  b 0x7101c3acac
7101c3aa20  adrp x1,0x71043ad000
7101c3aa24  add x1,x1,#0x9ba
7101c3aa28  mov x0,sp
7101c3aa2c  bl 0x710377a120
7101c3aa30  b 0x7101c3acb0
7101c3aa34  ldr x0,[x20, #0x10]
7101c3aa38  cbz x0,0x7101c3aa48
7101c3aa3c  adrp x1,0x7104867000
7101c3aa40  add x1,x1,#0xc2e
7101c3aa44  bl 0x71037a28a0
7101c3aa48  adrp x8,0x710523d000
7101c3aa4c  add x8,x8,#0x9a8
7101c3aa50  stp x8,xzr,[sp]
7101c3aa54  b 0x7101c3acc0
7101c3aa58  ldr x10,[x22, #0x21c0]
7101c3aa5c  ldr x10,[x10]
7101c3aa60  mov w11,#0x2015
7101c3aa64  ldrb w11,[x22, x11, LSL ]
7101c3aa68  ldr x10,[x10]
7101c3aa6c  cbz w11,0x7101c3aa94
7101c3aa70  ldr x8,[x10, #0x600]
7101c3aa74  ldrb w9,[x8, #0x4aa]
7101c3aa78  cbz w9,0x7101c3a83c
7101c3aa7c  ldrb w8,[x8, #0x1c4]
7101c3aa80  tbz w8,#0x1,0x7101c3a83c
7101c3aa84  mov w8,#0x2016
7101c3aa88  mov w9,#0x1
7101c3aa8c  strb w9,[x22, x8, LSL ]
7101c3aa90  b 0x7101c3a83c
7101c3aa94  ldr x9,[x9]
7101c3aa98  ldr w9,[x9, #0x1b8]
7101c3aa9c  fmov s8,0x3f800000
7101c3aaa0  cmp w9,#0x5
7101c3aaa4  b.eq 0x7101c3aac4
7101c3aaa8  ldr x9,[x10, #0x600]
7101c3aaac  ldrb w10,[x9, #0x4aa]
7101c3aab0  cbz w10,0x7101c3aac4
7101c3aab4  ldrb w9,[x9, #0x274]
7101c3aab8  tbz w9,#0x4,0x7101c3aac4
7101c3aabc  ldr x8,[x8, #0x8]
7101c3aac0  ldr s8,[x8, #0x138]
7101c3aac4  adrp x8,0x710532f000
7101c3aac8  ldr x8,[x8, #0x820]
7101c3aacc  ldr x20,[x8, #0x8]
7101c3aad0  ldr x8,[x20, #0x110]
7101c3aad4  ldr x0,[x8, #0x80]
7101c3aad8  bl 0x7101eefe30
7101c3aadc  ldr w8,[x20, #0xf8]
7101c3aae0  cmp w8,#0x0
7101c3aae4  ldrb w9,[x20, #0x142]
7101c3aae8  cset w8,ne
7101c3aaec  orn w8,w8,w0
7101c3aaf0  and w8,w8,#0x1
7101c3aaf4  fmov s0,wzr
7101c3aaf8  orr w8,w8,w9
7101c3aafc  cmp w8,#0x0
7101c3ab00  ldr x8,[x23, #0x60]
7101c3ab04  fcsel s0,s8,s0,eq
7101c3ab08  b 0x7101c3a834
7101c3ab0c  mov w1,#0x4
7101c3ab10  mov w2,wzr
7101c3ab14  bl 0x7103771be0
7101c3ab18  ldr x8,[x21, #0x2260]
7101c3ab1c  ldr w8,[x8, #0x25c]
7101c3ab20  mov w9,#0x2012
7101c3ab24  str w8,[x21, #0x2270]
7101c3ab28  mov w8,#0x1
7101c3ab2c  strb w8,[x22, x9, LSL ]
7101c3ab30  ldr x8,[x20, #0x80]
7101c3ab34  ldr w8,[x8, #0x2270]
7101c3ab38  mov w9,#0x2012
7101c3ab3c  add x24,x22,x9
7101c3ab40  cbnz w8,0x7101c3ab4c
7101c3ab44  mov w8,#0x1
7101c3ab48  strb w8,[x24]
7101c3ab4c  ldr w8,[x22, #0x21b4]
7101c3ab50  cbz w8,0x7101c3ae7c
7101c3ab54  ldrb w8,[x24]
7101c3ab58  cbnz w8,0x7101c3ae9c
7101c3ab5c  ldr x8,[x22, #0x2020]
7101c3ab60  ldr w8,[x8, #0x25c]
7101c3ab64  cmp w8,#0x3
7101c3ab68  b.hi 0x7101c3ac4c
7101c3ab6c  adrp x9,0x71044f9000
7101c3ab70  add x9,x9,#0x2f4
7101c3ab74  ldrsw x8,[x9, x8, LSL #0x2]
7101c3ab78  add x8,x8,x9
7101c3ab7c  br x8
7101c3ab80  ldr w8,[x22, #0x21ac]
7101c3ab84  cmp w8,#0x11
7101c3ab88  b.gt 0x7101c3ac4c
7101c3ab8c  add w9,w8,#0x1
7101c3ab90  cmp w9,#0x13
7101c3ab94  str w9,[x22, #0x21ac]
7101c3ab98  b.cs 0x7101c3aecc
7101c3ab9c  add x9,x22,w9, SXTW  #0x2
7101c3aba0  mov w10,#0x5
7101c3aba4  b 0x7101c3ae64
7101c3aba8  ldp x25,x21,[x8]
7101c3abac  cbz x21,0x7101c3abf4
7101c3abb0  add x8,x21,#0x8
7101c3abb4  ldxr x9,[x8]
7101c3abb8  add x9,x9,#0x1
7101c3abbc  stxr w10,x9,[x8]
7101c3abc0  cbnz w10,0x7101c3abb4
7101c3abc4  add x8,x21,#0x8
7101c3abc8  ldaxr x9,[x8]
7101c3abcc  sub x10,x9,#0x1
7101c3abd0  stlxr w11,x10,[x8]
7101c3abd4  cbnz w11,0x7101c3abc8
7101c3abd8  cbnz x9,0x7101c3abf4
7101c3abdc  ldr x8,[x21]
7101c3abe0  ldr x8,[x8, #0x10]
7101c3abe4  mov x0,x21
7101c3abe8  blr x8
7101c3abec  mov x0,x21
7101c3abf0  bl 0x71039c2670
7101c3abf4  cmp x25,x24
7101c3abf8  b.eq 0x7101c3aa08
7101c3abfc  ldr w8,[x22, #0x2018]
7101c3ac00  cbz w8,0x7101c3ac24
7101c3ac04  ldr x9,[x23, #0x60]
7101c3ac08  ldr x9,[x9, #0x8]
7101c3ac0c  ldr w9,[x9, #0x4]
7101c3ac10  sub w9,w9,#0x2
7101c3ac14  cmp w8,w9
7101c3ac18  b.cs 0x7101c3ac5c
7101c3ac1c  add w3,w8,#0x1
7101c3ac20  b 0x7101c3ac28
7101c3ac24  mov w3,#0x1
7101c3ac28  ldr w8,[x22, #0x201c]
7101c3ac2c  add w4,w8,#0x1
7101c3ac30  adrp x1,0x710425f000
7101c3ac34  add x1,x1,#0x35e
7101c3ac38  mov x0,sp
7101c3ac3c  mov w2,#0x2
7101c3ac40  bl 0x710377a280
7101c3ac44  cbnz x20,0x7101c3ac7c
7101c3ac48  b 0x7101c3acac
7101c3ac4c  mov w8,wzr
7101c3ac50  ldrb w9,[x24]
7101c3ac54  cbnz w9,0x7101c3ae9c
7101c3ac58  b 0x7101c3ae84
7101c3ac5c  ldr w8,[x22, #0x201c]
7101c3ac60  add w3,w8,#0x1
7101c3ac64  adrp x1,0x710424f000
7101c3ac68  add x1,x1,#0x4b7
7101c3ac6c  mov x0,sp
7101c3ac70  mov w2,#0x1
7101c3ac74  bl 0x710377a280
7101c3ac78  cbz x20,0x7101c3acac
7101c3ac7c  add x8,x20,#0x8
7101c3ac80  ldaxr x9,[x8]
7101c3ac84  sub x10,x9,#0x1
7101c3ac88  stlxr w11,x10,[x8]
7101c3ac8c  cbnz w11,0x7101c3ac80
7101c3ac90  cbnz x9,0x7101c3acac
7101c3ac94  ldr x8,[x20]
7101c3ac98  ldr x8,[x8, #0x10]
7101c3ac9c  mov x0,x20
7101c3aca0  blr x8
7101c3aca4  mov x0,x20
7101c3aca8  bl 0x71039c2670
7101c3acac  ldr x20,[sp, #0x8]
7101c3acb0  adrp x8,0x710523d000
7101c3acb4  add x8,x8,#0x9a8
7101c3acb8  stp x8,xzr,[sp]
7101c3acbc  cbz x20,0x7101c3acc8
7101c3acc0  mov x0,x20
7101c3acc4  bl 0x710392eb40
7101c3acc8  ldr x0,[sp, #0x18]
7101c3accc  adrp x8,0x710523d000
7101c3acd0  add x8,x8,#0x9a8
7101c3acd4  stp x8,xzr,[sp, #0x10]
7101c3acd8  cbz x0,0x7101c3ace0
7101c3acdc  bl 0x710392eb40
7101c3ace0  cbz x19,0x7101c3ad14
7101c3ace4  add x8,x19,#0x8
7101c3ace8  ldaxr x9,[x8]
7101c3acec  sub x10,x9,#0x1
7101c3acf0  stlxr w11,x10,[x8]
7101c3acf4  cbnz w11,0x7101c3ace8
7101c3acf8  cbnz x9,0x7101c3ad14
7101c3acfc  ldr x8,[x19]
7101c3ad00  ldr x8,[x8, #0x10]
7101c3ad04  mov x0,x19
7101c3ad08  blr x8
7101c3ad0c  mov x0,x19
7101c3ad10  bl 0x71039c2670
7101c3ad14  ldr d8,[sp, #0x20]
7101c3ad18  ldp x29,x30,[sp, #0x60]
7101c3ad1c  ldp x20,x19,[sp, #0x50]
7101c3ad20  ldr x25,[sp, #0x28]
7101c3ad24  ldp x22,x21,[sp, #0x40]
7101c3ad28  ldp x24,x23,[sp, #0x30]
7101c3ad2c  add sp,sp,#0x70
7101c3ad30  ret
7101c3ad34  ldr w8,[x22, #0x21ac]
7101c3ad38  cmp w8,#0x11
7101c3ad3c  b.gt 0x7101c3ad5c
7101c3ad40  add w8,w8,#0x1
7101c3ad44  cmp w8,#0x13
7101c3ad48  str w8,[x22, #0x21ac]
7101c3ad4c  b.cs 0x7101c3aecc
7101c3ad50  add x8,x22,w8, SXTW  #0x2
7101c3ad54  orr w9,wzr,#0x6
7101c3ad58  str w9,[x8, #0x2160]
7101c3ad5c  mov w8,wzr
7101c3ad60  mov w9,#0x2013
7101c3ad64  mov w10,#0x1
7101c3ad68  strb w10,[x22, x9, LSL ]
7101c3ad6c  ldrb w9,[x24]
7101c3ad70  cbnz w9,0x7101c3ae9c
7101c3ad74  b 0x7101c3ae84
7101c3ad78  ldr w8,[x22, #0x21ac]
7101c3ad7c  cmp w8,#0x11
7101c3ad80  b.gt 0x7101c3ada0
7101c3ad84  add w8,w8,#0x1
7101c3ad88  cmp w8,#0x13
7101c3ad8c  str w8,[x22, #0x21ac]
7101c3ad90  b.cs 0x7101c3aecc
7101c3ad94  add x8,x22,w8, SXTW  #0x2
7101c3ad98  orr w9,wzr,#0x7
7101c3ad9c  str w9,[x8, #0x2160]
7101c3ada0  ldr x0,[x22, #0x2208]
7101c3ada4  mov w1,#0x1
7101c3ada8  bl 0x7101af86a0
7101c3adac  ldr x8,[x22, #0x21c8]
7101c3adb0  ldr x8,[x8]
7101c3adb4  fmov s8,0x3f800000
7101c3adb8  mov v0.16B,v8.16B
7101c3adbc  adrp x21,0x710428f000
7101c3adc0  add x21,x21,#0xf7d
7101c3adc4  mov x1,x21
7101c3adc8  ldr x0,[x8, #0x10]
7101c3adcc  bl 0x7103778300
7101c3add0  ldr x8,[x22, #0x21c8]
7101c3add4  ldr x8,[x8]
7101c3add8  add x0,x8,#0x8
7101c3addc  adrp x1,0x710434a000
7101c3ade0  add x1,x1,#0x2b7
7101c3ade4  add x8,sp,#0x10
7101c3ade8  bl 0x7103776640
7101c3adec  ldr x20,[sp, #0x18]
7101c3adf0  mov v0.16B,v8.16B
7101c3adf4  mov x1,x21
7101c3adf8  mov x0,x20
7101c3adfc  bl 0x7103778300
7101c3ae00  adrp x8,0x710523d000
7101c3ae04  add x8,x8,#0x988
7101c3ae08  stp x8,xzr,[sp, #0x10]
7101c3ae0c  cbz x20,0x7101c3ae30
7101c3ae10  ldr x0,[x20, #0x18]
7101c3ae14  adrp x8,0x710523d000
7101c3ae18  add x8,x8,#0x9a8
7101c3ae1c  stp x8,xzr,[x20, #0x10]
7101c3ae20  cbz x0,0x7101c3ae28
7101c3ae24  bl 0x710392eb40
7101c3ae28  mov x0,x20
7101c3ae2c  bl 0x710392eb40
7101c3ae30  mov w8,#0x1
7101c3ae34  ldrb w9,[x24]
7101c3ae38  cbnz w9,0x7101c3ae9c
7101c3ae3c  b 0x7101c3ae84
7101c3ae40  ldr w8,[x22, #0x21ac]
7101c3ae44  cmp w8,#0x11
7101c3ae48  b.gt 0x7101c3ae78
7101c3ae4c  add w9,w8,#0x1
7101c3ae50  cmp w9,#0x13
7101c3ae54  str w9,[x22, #0x21ac]
7101c3ae58  b.cs 0x7101c3aecc
7101c3ae5c  add x9,x22,w9, SXTW  #0x2
7101c3ae60  mov w10,#0x4
7101c3ae64  mov w8,wzr
7101c3ae68  str w10,[x9, #0x2160]
7101c3ae6c  ldrb w9,[x24]
7101c3ae70  cbnz w9,0x7101c3ae9c
7101c3ae74  b 0x7101c3ae84
7101c3ae78  mov w8,wzr
7101c3ae7c  ldrb w9,[x24]
7101c3ae80  cbnz w9,0x7101c3ae9c
7101c3ae84  mov w9,#0x2013
7101c3ae88  ldrb w9,[x22, x9, LSL ]
7101c3ae8c  cmp w9,#0x0
7101c3ae90  cset w9,eq
7101c3ae94  bic w8,w9,w8
7101c3ae98  tbnz w8,#0x0,0x7101c3a83c
7101c3ae9c  ldr x0,[x22, #0x2020]
7101c3aea0  ldr x8,[x0]
7101c3aea4  ldr x8,[x8, #0x60]
7101c3aea8  mov w1,wzr
7101c3aeac  blr x8
7101c3aeb0  ldr x8,[x22, #0x21c0]
7101c3aeb4  ldr x8,[x8]
7101c3aeb8  ldr x8,[x8]
7101c3aebc  ldr x8,[x8, #0x600]
7101c3aec0  strb wzr,[x8, #0x4aa]
7101c3aec4  b 0x7101c3a83c
7101c3aec8  bl 0x71039c1330
7101c3aecc  bl 0x71039c2650
