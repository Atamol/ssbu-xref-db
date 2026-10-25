// addr:      7101e8a680
// offset:    0x1e8a680
// name:      FUN_7101e8a680
// mangled:   
// size:      3512

7101e8a680  sub sp,sp,#0xa0
7101e8a684  str x23,[sp, #0x60]
7101e8a688  stp x22,x21,[sp, #0x70]
7101e8a68c  stp x20,x19,[sp, #0x80]
7101e8a690  stp x29,x30,[sp, #0x90]
7101e8a694  add x29,sp,#0x90
7101e8a698  mov x19,x0
7101e8a69c  bl 0x7101e8e840
7101e8a6a0  add x20,x19,#0x30
7101e8a6a4  adrp x1,0x710435b000
7101e8a6a8  add x1,x1,#0xe47
7101e8a6ac  add x8,sp,#0x10
7101e8a6b0  mov x0,x20
7101e8a6b4  bl 0x71037780e0
7101e8a6b8  adrp x1,0x71042b4000
7101e8a6bc  add x1,x1,#0xa6a
7101e8a6c0  mov x8,sp
7101e8a6c4  mov x0,x20
7101e8a6c8  bl 0x71037780e0
7101e8a6cc  ldr w8,[x19, #0x1e4]
7101e8a6d0  cbz w8,0x7101e8a8a4
7101e8a6d4  ldr x8,[x19, #0x28]
7101e8a6d8  ldr x8,[x8]
7101e8a6dc  ldr x8,[x8]
7101e8a6e0  ldr x8,[x8, #0x600]
7101e8a6e4  ldrb w9,[x8, #0x4aa]
7101e8a6e8  cbz w9,0x7101e8a6f4
7101e8a6ec  ldrb w8,[x8, #0x280]
7101e8a6f0  tbnz w8,#0x4,0x7101e8a8d0
7101e8a6f4  mov w8,#0x1878
7101e8a6f8  add x8,x19,x8
7101e8a6fc  ldrb w9,[x8]
7101e8a700  cbz w9,0x7101e8acc0
7101e8a704  strb wzr,[x8]
7101e8a708  ldr x21,[sp, #0x18]
7101e8a70c  ldr x20,[x21, #0x8]
7101e8a710  cbz x20,0x7101e8a7f0
7101e8a714  ldrb w8,[x21, #0x10]
7101e8a718  cbz w8,0x7101e8a7e0
7101e8a71c  ldr x8,[x21]
7101e8a720  ldr x23,[x8, #0x80]
7101e8a724  add x22,x8,#0x88
7101e8a728  cmp x23,x22
7101e8a72c  b.eq 0x7101e8a7e0
7101e8a730  ldr x0,[x23, #0x68]
7101e8a734  ldr x8,[x0]
7101e8a738  ldr x8,[x8, #0x148]
7101e8a73c  blr x8
7101e8a740  tbz w0,#0x0,0x7101e8a780
7101e8a744  ldr x8,[x20]
7101e8a748  ldr x1,[x23, #0x68]
7101e8a74c  mov x0,x20
7101e8a750  ldr x8,[x8, #0x120]
7101e8a754  blr x8
7101e8a758  tbz w0,#0x0,0x7101e8a780
7101e8a75c  ldr x0,[x23, #0x68]
7101e8a760  ldr x8,[x0]
7101e8a764  ldr x8,[x8, #0x178]
7101e8a768  blr x8
7101e8a76c  ldr x0,[x23, #0x68]
7101e8a770  ldr x8,[x0]
7101e8a774  ldr x8,[x8, #0x140]
7101e8a778  mov w1,wzr
7101e8a77c  blr x8
7101e8a780  ldr x8,[x23, #0x8]
7101e8a784  cbz x8,0x7101e8a798
7101e8a788  mov x23,x8
7101e8a78c  ldr x8,[x8]
7101e8a790  cbnz x8,0x7101e8a788
7101e8a794  b 0x7101e8a7c4
7101e8a798  mov x8,x23
7101e8a79c  ldr x9,[x8, #0x10]!
7101e8a7a0  ldr x10,[x9]
7101e8a7a4  cmp x10,x23
7101e8a7a8  b.eq 0x7101e8a7d0
7101e8a7ac  ldr x9,[x8]
7101e8a7b0  mov x8,x9
7101e8a7b4  ldr x23,[x8, #0x10]!
7101e8a7b8  ldr x10,[x23]
7101e8a7bc  cmp x10,x9
7101e8a7c0  b.ne 0x7101e8a7ac
7101e8a7c4  cmp x23,x22
7101e8a7c8  b.ne 0x7101e8a730
7101e8a7cc  b 0x7101e8a7dc
7101e8a7d0  mov x23,x9
7101e8a7d4  cmp x23,x22
7101e8a7d8  b.ne 0x7101e8a730
7101e8a7dc  ldr x20,[x21, #0x8]
7101e8a7e0  ldr x8,[x20]
7101e8a7e4  ldr x8,[x8, #0x188]
7101e8a7e8  mov x0,x20
7101e8a7ec  blr x8
7101e8a7f0  fmov s0,0x3f800000
7101e8a7f4  mov x0,sp
7101e8a7f8  bl 0x710377aee0
7101e8a7fc  ldr x0,[x19, #0x258]
7101e8a800  cbz x0,0x7101e8acc0
7101e8a804  ldr x8,[x0]
7101e8a808  ldr x8,[x8, #0x20]
7101e8a80c  blr x8
7101e8a810  tbnz w0,#0x0,0x7101e8acc0
7101e8a814  adrp x8,0x710593b000
7101e8a818  ldr x8,[x8, #0x438]
7101e8a81c  ldr x8,[x8]
7101e8a820  ldrb w8,[x8, #0x1]
7101e8a824  cbz w8,0x7101e8acc0
7101e8a828  ldr w8,[x19, #0x264]
7101e8a82c  mov w9,#0x6500
7101e8a830  movk w9,#0x87, LSL #16
7101e8a834  cmp w8,w9
7101e8a838  b.ne 0x7101e8acc0
7101e8a83c  adrp x8,0x7106dd5000
7101e8a840  ldrb w8,[x8, #0x3a8]
7101e8a844  cmp w8,#0x1
7101e8a848  b.ne 0x7101e8acc0
7101e8a84c  adrp x9,0x7106dd5000
7101e8a850  ldr w8,[x19, #0x260]
7101e8a854  ldr w9,[x9, #0x3ac]
7101e8a858  cmp w8,w9
7101e8a85c  b.ne 0x7101e8acc0
7101e8a860  ldrb w8,[x19, #0x268]
7101e8a864  cbnz w8,0x7101e8acc0
7101e8a868  ldr x0,[x19, #0x258]
7101e8a86c  cbz x0,0x7101e8acc0
7101e8a870  ldr x8,[x0]
7101e8a874  ldr x8,[x8, #0x20]
7101e8a878  blr x8
7101e8a87c  tbnz w0,#0x0,0x7101e8acc0
7101e8a880  ldr x0,[x19, #0x258]
7101e8a884  ldr x8,[x0]
7101e8a888  ldr x8,[x8, #0x68]
7101e8a88c  blr x8
7101e8a890  tbnz w0,#0x0,0x7101e8acc0
7101e8a894  add x0,x19,#0x248
7101e8a898  mov w1,wzr
7101e8a89c  bl 0x710373b540
7101e8a8a0  b 0x7101e8acc0
7101e8a8a4  ldr w8,[x19, #0x1e0]
7101e8a8a8  sub w9,w8,#0x4
7101e8a8ac  cmp w9,#0x4
7101e8a8b0  b.cs 0x7101e8a900
7101e8a8b4  ldr x0,[x19, #0x60]
7101e8a8b8  ldr x8,[x0]
7101e8a8bc  ldr x8,[x8, #0x60]
7101e8a8c0  mov w1,#0x1
7101e8a8c4  blr x8
7101e8a8c8  ldr x0,[x19, #0x60]
7101e8a8cc  b 0x7101e8b228
7101e8a8d0  ldr x21,[sp, #0x18]
7101e8a8d4  ldr x0,[x21, #0x8]
7101e8a8d8  cbz x0,0x7101e8a92c
7101e8a8dc  ldr x8,[x0]
7101e8a8e0  ldr x8,[x8, #0x138]
7101e8a8e4  blr x8
7101e8a8e8  mov w8,#0x1878
7101e8a8ec  add x20,x19,x8
7101e8a8f0  ldrb w8,[x20]
7101e8a8f4  tbz w0,#0x0,0x7101e8ab14
7101e8a8f8  cbnz w8,0x7101e8a93c
7101e8a8fc  b 0x7101e8ab18
7101e8a900  cmp w8,#0x3
7101e8a904  b.eq 0x7101e8b210
7101e8a908  cmp w8,#0x2
7101e8a90c  b.ne 0x7101e8b238
7101e8a910  ldr x0,[x19, #0x50]
7101e8a914  ldr x8,[x0]
7101e8a918  ldr x8,[x8, #0x60]
7101e8a91c  mov w1,#0x1
7101e8a920  blr x8
7101e8a924  ldr x0,[x19, #0x50]
7101e8a928  b 0x7101e8b228
7101e8a92c  mov w8,#0x1878
7101e8a930  add x20,x19,x8
7101e8a934  ldrb w8,[x20]
7101e8a938  cbz w8,0x7101e8ab18
7101e8a93c  ldr w8,[x19, #0x1e0]
7101e8a940  sub w9,w8,#0x4
7101e8a944  cmp w9,#0x4
7101e8a948  b.cs 0x7101e8b290
7101e8a94c  ldr x0,[x19, #0x60]
7101e8a950  ldr x8,[x0]
7101e8a954  ldr x8,[x8, #0x60]
7101e8a958  mov w1,wzr
7101e8a95c  blr x8
7101e8a960  ldr x0,[x19, #0x60]
7101e8a964  ldr x8,[x0]
7101e8a968  ldr x8,[x8, #0x70]
7101e8a96c  mov w1,wzr
7101e8a970  blr x8
7101e8a974  strb wzr,[x20]
7101e8a978  ldr x20,[x21, #0x8]
7101e8a97c  cbz x20,0x7101e8aa5c
7101e8a980  ldrb w8,[x21, #0x10]
7101e8a984  cbz w8,0x7101e8aa4c
7101e8a988  ldr x8,[x21]
7101e8a98c  ldr x23,[x8, #0x80]
7101e8a990  add x22,x8,#0x88
7101e8a994  cmp x23,x22
7101e8a998  b.eq 0x7101e8aa4c
7101e8a99c  ldr x0,[x23, #0x68]
7101e8a9a0  ldr x8,[x0]
7101e8a9a4  ldr x8,[x8, #0x148]
7101e8a9a8  blr x8
7101e8a9ac  tbz w0,#0x0,0x7101e8a9ec
7101e8a9b0  ldr x8,[x20]
7101e8a9b4  ldr x1,[x23, #0x68]
7101e8a9b8  mov x0,x20
7101e8a9bc  ldr x8,[x8, #0x120]
7101e8a9c0  blr x8
7101e8a9c4  tbz w0,#0x0,0x7101e8a9ec
7101e8a9c8  ldr x0,[x23, #0x68]
7101e8a9cc  ldr x8,[x0]
7101e8a9d0  ldr x8,[x8, #0x178]
7101e8a9d4  blr x8
7101e8a9d8  ldr x0,[x23, #0x68]
7101e8a9dc  ldr x8,[x0]
7101e8a9e0  ldr x8,[x8, #0x140]
7101e8a9e4  mov w1,wzr
7101e8a9e8  blr x8
7101e8a9ec  ldr x8,[x23, #0x8]
7101e8a9f0  cbz x8,0x7101e8aa04
7101e8a9f4  mov x23,x8
7101e8a9f8  ldr x8,[x8]
7101e8a9fc  cbnz x8,0x7101e8a9f4
7101e8aa00  b 0x7101e8aa30
7101e8aa04  mov x8,x23
7101e8aa08  ldr x9,[x8, #0x10]!
7101e8aa0c  ldr x10,[x9]
7101e8aa10  cmp x10,x23
7101e8aa14  b.eq 0x7101e8aa3c
7101e8aa18  ldr x9,[x8]
7101e8aa1c  mov x8,x9
7101e8aa20  ldr x23,[x8, #0x10]!
7101e8aa24  ldr x10,[x23]
7101e8aa28  cmp x10,x9
7101e8aa2c  b.ne 0x7101e8aa18
7101e8aa30  cmp x23,x22
7101e8aa34  b.ne 0x7101e8a99c
7101e8aa38  b 0x7101e8aa48
7101e8aa3c  mov x23,x9
7101e8aa40  cmp x23,x22
7101e8aa44  b.ne 0x7101e8a99c
7101e8aa48  ldr x20,[x21, #0x8]
7101e8aa4c  ldr x8,[x20]
7101e8aa50  ldr x8,[x8, #0x188]
7101e8aa54  mov x0,x20
7101e8aa58  blr x8
7101e8aa5c  fmov s0,0x3f800000
7101e8aa60  mov x0,sp
7101e8aa64  bl 0x710377aee0
7101e8aa68  ldr x0,[x19, #0x258]
7101e8aa6c  cbz x0,0x7101e8aad4
7101e8aa70  ldr x8,[x0]
7101e8aa74  ldr x8,[x8, #0x20]
7101e8aa78  blr x8
7101e8aa7c  tbnz w0,#0x0,0x7101e8aad4
7101e8aa80  adrp x8,0x710593b000
7101e8aa84  ldr x8,[x8, #0x438]
7101e8aa88  ldr x8,[x8]
7101e8aa8c  ldrb w8,[x8, #0x1]
7101e8aa90  cbz w8,0x7101e8aad4
7101e8aa94  ldr w8,[x19, #0x264]
7101e8aa98  mov w9,#0x6500
7101e8aa9c  movk w9,#0x87, LSL #16
7101e8aaa0  cmp w8,w9
7101e8aaa4  b.ne 0x7101e8aad4
7101e8aaa8  adrp x8,0x7106dd5000
7101e8aaac  ldrb w8,[x8, #0x3a8]
7101e8aab0  cmp w8,#0x1
7101e8aab4  b.ne 0x7101e8aad4
7101e8aab8  adrp x9,0x7106dd5000
7101e8aabc  ldr w8,[x19, #0x260]
7101e8aac0  ldr w9,[x9, #0x3ac]
7101e8aac4  cmp w8,w9
7101e8aac8  b.ne 0x7101e8aad4
7101e8aacc  ldrb w8,[x19, #0x268]
7101e8aad0  cbz w8,0x7101e8b380
7101e8aad4  ldrsw x8,[x19, #0x1dc]
7101e8aad8  cmp w8,#0x13
7101e8aadc  b.cs 0x7101e8b434
7101e8aae0  add x8,x19,x8, LSL #0x2
7101e8aae4  mov w9,#0xb
7101e8aae8  str w9,[x8, #0x190]
7101e8aaec  ldr w8,[x19, #0x1dc]
7101e8aaf0  cmp w8,#0x11
7101e8aaf4  b.gt 0x7101e8b238
7101e8aaf8  add w8,w8,#0x1
7101e8aafc  cmp w8,#0x13
7101e8ab00  str w8,[x19, #0x1dc]
7101e8ab04  b.cs 0x7101e8b434
7101e8ab08  add x8,x19,w8, SXTW  #0x2
7101e8ab0c  mov w9,#0xa
7101e8ab10  b 0x7101e8ae88
7101e8ab14  cbnz w8,0x7101e8acc0
7101e8ab18  fmov s0,0x3f800000
7101e8ab1c  mov w8,#0x1
7101e8ab20  add x0,sp,#0x10
7101e8ab24  strb w8,[x20]
7101e8ab28  bl 0x710377aee0
7101e8ab2c  adrp x8,0x710532f000
7101e8ab30  ldr x8,[x8, #0x8d0]
7101e8ab34  ldr x0,[x8, #0x8]
7101e8ab38  ldrb w8,[x0, #0x191]
7101e8ab3c  cbnz w8,0x7101e8abe0
7101e8ab40  mov x20,#0xdafe
7101e8ab44  movk x20,#0x8849, LSL #16
7101e8ab48  movk x20,#0x1c, LSL #32
7101e8ab4c  mov w2,#0x4
7101e8ab50  mov x1,x20
7101e8ab54  bl 0x7103313f20
7101e8ab58  tbz w0,#0x0,0x7101e8abe0
7101e8ab5c  add x0,sp,#0x20
7101e8ab60  mov x1,x20
7101e8ab64  bl 0x71024076d0
7101e8ab68  ldr w9,[sp, #0x20]
7101e8ab6c  ldr x8,[sp, #0x30]
7101e8ab70  str w9,[x19, #0x248]
7101e8ab74  cbz x8,0x7101e8ac10
7101e8ab78  ldr w9,[x19, #0x264]
7101e8ab7c  mov w10,#0x6500
7101e8ab80  movk w10,#0x87, LSL #16
7101e8ab84  cmp w9,w10
7101e8ab88  b.ne 0x7101e8ac60
7101e8ab8c  adrp x9,0x7106dd5000
7101e8ab90  ldr w9,[x9, #0x3ac]
7101e8ab94  ldr w10,[x19, #0x260]
7101e8ab98  cmp w10,w9
7101e8ab9c  b.ne 0x7101e8b358
7101e8aba0  ldr x10,[x19, #0x258]
7101e8aba4  add x9,x19,#0x258
7101e8aba8  cbz x10,0x7101e8abd0
7101e8abac  adrp x11,0x7106dd5000
7101e8abb0  ldrb w11,[x11, #0x3a8]
7101e8abb4  cmp w11,#0x1
7101e8abb8  b.ne 0x7101e8abd0
7101e8abbc  ldr wzr,[x10, #0x38]!
7101e8abc0  ldaxr w11,[x10]
7101e8abc4  sub w11,w11,#0x1
7101e8abc8  stlxr w12,w11,[x10]
7101e8abcc  cbnz w12,0x7101e8abc0
7101e8abd0  str xzr,[x19, #0x258]
7101e8abd4  add x10,x19,#0x268
7101e8abd8  strb wzr,[x19, #0x268]
7101e8abdc  b 0x7101e8b364
7101e8abe0  mov x8,#0x650000000000
7101e8abe4  movk x8,#0x87, LSL #48
7101e8abe8  adrp x9,0x7104f73000
7101e8abec  add x9,x9,#0xd30
7101e8abf0  str x9,[sp, #0x28]
7101e8abf4  strb wzr,[sp, #0x40]
7101e8abf8  stp xzr,x8,[sp, #0x30]
7101e8abfc  mov x8,#-0x1
7101e8ac00  str wzr,[sp, #0x20]
7101e8ac04  str xzr,[sp, #0x58]
7101e8ac08  stp x8,xzr,[sp, #0x48]
7101e8ac0c  str wzr,[x19, #0x248]
7101e8ac10  ldr x8,[x19, #0x258]
7101e8ac14  cbz x8,0x7101e8ac50
7101e8ac18  adrp x9,0x7106dd5000
7101e8ac1c  ldrb w9,[x9, #0x3a8]
7101e8ac20  cmp w9,#0x1
7101e8ac24  b.ne 0x7101e8ac50
7101e8ac28  adrp x10,0x7106dd5000
7101e8ac2c  ldr w9,[x19, #0x260]
7101e8ac30  ldr w10,[x10, #0x3ac]
7101e8ac34  cmp w9,w10
7101e8ac38  b.ne 0x7101e8ac50
7101e8ac3c  ldr wzr,[x8, #0x38]!
7101e8ac40  ldaxr w9,[x8]
7101e8ac44  sub w9,w9,#0x1
7101e8ac48  stlxr w10,w9,[x8]
7101e8ac4c  cbnz w10,0x7101e8ac40
7101e8ac50  str xzr,[x19, #0x258]
7101e8ac54  add x10,x19,#0x268
7101e8ac58  strb wzr,[x10]
7101e8ac5c  ldr x8,[sp, #0x30]
7101e8ac60  ldp x9,x10,[sp, #0x48]
7101e8ac64  ldr x11,[sp, #0x58]
7101e8ac68  str x9,[x19, #0x270]
7101e8ac6c  adrp x9,0x7104f73000
7101e8ac70  add x9,x9,#0xd50
7101e8ac74  str x11,[x19, #0x280]
7101e8ac78  str x10,[x19, #0x278]
7101e8ac7c  str x9,[sp, #0x28]
7101e8ac80  cbz x8,0x7101e8acbc
7101e8ac84  adrp x9,0x7106dd5000
7101e8ac88  ldrb w9,[x9, #0x3a8]
7101e8ac8c  cmp w9,#0x1
7101e8ac90  b.ne 0x7101e8acbc
7101e8ac94  adrp x10,0x7106dd5000
7101e8ac98  ldr w9,[sp, #0x38]
7101e8ac9c  ldr w10,[x10, #0x3ac]
7101e8aca0  cmp w9,w10
7101e8aca4  b.ne 0x7101e8acbc
7101e8aca8  ldr wzr,[x8, #0x38]!
7101e8acac  ldaxr w9,[x8]
7101e8acb0  sub w9,w9,#0x1
7101e8acb4  stlxr w10,w9,[x8]
7101e8acb8  cbnz w10,0x7101e8acac
7101e8acbc  str xzr,[sp, #0x30]
7101e8acc0  ldr x0,[x19, #0x58]
7101e8acc4  ldrb w8,[x0, #0x280]
7101e8acc8  cbz w8,0x7101e8ae90
7101e8accc  ldr w8,[x19, #0x1e0]
7101e8acd0  sub w9,w8,#0x4
7101e8acd4  cmp w9,#0x4
7101e8acd8  b.cs 0x7101e8b03c
7101e8acdc  ldr x0,[x19, #0x60]
7101e8ace0  ldr x8,[x0]
7101e8ace4  ldr x8,[x8, #0x60]
7101e8ace8  mov w1,wzr
7101e8acec  blr x8
7101e8acf0  ldr x0,[x19, #0x60]
7101e8acf4  ldr x8,[x0]
7101e8acf8  ldr x8,[x8, #0x70]
7101e8acfc  mov w1,wzr
7101e8ad00  blr x8
7101e8ad04  mov w8,#0x1878
7101e8ad08  strb wzr,[x19, x8, LSL ]
7101e8ad0c  ldr x21,[sp, #0x18]
7101e8ad10  ldr x20,[x21, #0x8]
7101e8ad14  cbz x20,0x7101e8adf4
7101e8ad18  ldrb w8,[x21, #0x10]
7101e8ad1c  cbz w8,0x7101e8ade4
7101e8ad20  ldr x8,[x21]
7101e8ad24  ldr x23,[x8, #0x80]
7101e8ad28  add x22,x8,#0x88
7101e8ad2c  cmp x23,x22
7101e8ad30  b.eq 0x7101e8ade4
7101e8ad34  ldr x0,[x23, #0x68]
7101e8ad38  ldr x8,[x0]
7101e8ad3c  ldr x8,[x8, #0x148]
7101e8ad40  blr x8
7101e8ad44  tbz w0,#0x0,0x7101e8ad84
7101e8ad48  ldr x8,[x20]
7101e8ad4c  ldr x1,[x23, #0x68]
7101e8ad50  mov x0,x20
7101e8ad54  ldr x8,[x8, #0x120]
7101e8ad58  blr x8
7101e8ad5c  tbz w0,#0x0,0x7101e8ad84
7101e8ad60  ldr x0,[x23, #0x68]
7101e8ad64  ldr x8,[x0]
7101e8ad68  ldr x8,[x8, #0x178]
7101e8ad6c  blr x8
7101e8ad70  ldr x0,[x23, #0x68]
7101e8ad74  ldr x8,[x0]
7101e8ad78  ldr x8,[x8, #0x140]
7101e8ad7c  mov w1,wzr
7101e8ad80  blr x8
7101e8ad84  ldr x8,[x23, #0x8]
7101e8ad88  cbz x8,0x7101e8ad9c
7101e8ad8c  mov x23,x8
7101e8ad90  ldr x8,[x8]
7101e8ad94  cbnz x8,0x7101e8ad8c
7101e8ad98  b 0x7101e8adc8
7101e8ad9c  mov x8,x23
7101e8ada0  ldr x9,[x8, #0x10]!
7101e8ada4  ldr x10,[x9]
7101e8ada8  cmp x10,x23
7101e8adac  b.eq 0x7101e8add4
7101e8adb0  ldr x9,[x8]
7101e8adb4  mov x8,x9
7101e8adb8  ldr x23,[x8, #0x10]!
7101e8adbc  ldr x10,[x23]
7101e8adc0  cmp x10,x9
7101e8adc4  b.ne 0x7101e8adb0
7101e8adc8  cmp x23,x22
7101e8adcc  b.ne 0x7101e8ad34
7101e8add0  b 0x7101e8ade0
7101e8add4  mov x23,x9
7101e8add8  cmp x23,x22
7101e8addc  b.ne 0x7101e8ad34
7101e8ade0  ldr x20,[x21, #0x8]
7101e8ade4  ldr x8,[x20]
7101e8ade8  ldr x8,[x8, #0x188]
7101e8adec  mov x0,x20
7101e8adf0  blr x8
7101e8adf4  fmov s0,0x3f800000
7101e8adf8  mov x0,sp
7101e8adfc  bl 0x710377aee0
7101e8ae00  ldr x0,[x19, #0x258]
7101e8ae04  cbz x0,0x7101e8ae6c
7101e8ae08  ldr x8,[x0]
7101e8ae0c  ldr x8,[x8, #0x20]
7101e8ae10  blr x8
7101e8ae14  tbnz w0,#0x0,0x7101e8ae6c
7101e8ae18  adrp x8,0x710593b000
7101e8ae1c  ldr x8,[x8, #0x438]
7101e8ae20  ldr x8,[x8]
7101e8ae24  ldrb w8,[x8, #0x1]
7101e8ae28  cbz w8,0x7101e8ae6c
7101e8ae2c  ldr w8,[x19, #0x264]
7101e8ae30  mov w9,#0x6500
7101e8ae34  movk w9,#0x87, LSL #16
7101e8ae38  cmp w8,w9
7101e8ae3c  b.ne 0x7101e8ae6c
7101e8ae40  adrp x8,0x7106dd5000
7101e8ae44  ldrb w8,[x8, #0x3a8]
7101e8ae48  cmp w8,#0x1
7101e8ae4c  b.ne 0x7101e8ae6c
7101e8ae50  adrp x9,0x7106dd5000
7101e8ae54  ldr w8,[x19, #0x260]
7101e8ae58  ldr w9,[x9, #0x3ac]
7101e8ae5c  cmp w8,w9
7101e8ae60  b.ne 0x7101e8ae6c
7101e8ae64  ldrb w8,[x19, #0x268]
7101e8ae68  cbz w8,0x7101e8b31c
7101e8ae6c  mov w8,#0x1
7101e8ae70  str w8,[x19, #0x1f8]
7101e8ae74  ldrsw x8,[x19, #0x1dc]
7101e8ae78  cmp w8,#0x13
7101e8ae7c  b.cs 0x7101e8b434
7101e8ae80  add x8,x19,x8, LSL #0x2
7101e8ae84  mov w9,#0x8
7101e8ae88  str w9,[x8, #0x190]
7101e8ae8c  b 0x7101e8b238
7101e8ae90  ldr w8,[x0, #0x25c]
7101e8ae94  cmp w8,#0x1
7101e8ae98  b.eq 0x7101e8b068
7101e8ae9c  cbnz w8,0x7101e8b238
7101e8aea0  ldr x8,[x19, #0x28]
7101e8aea4  ldr x8,[x8]
7101e8aea8  ldr x8,[x8]
7101e8aeac  ldr x8,[x8, #0x600]
7101e8aeb0  strb wzr,[x8, #0x4aa]
7101e8aeb4  mov w8,#0x1878
7101e8aeb8  strb wzr,[x19, x8, LSL ]
7101e8aebc  ldr x21,[sp, #0x18]
7101e8aec0  ldr x20,[x21, #0x8]
7101e8aec4  cbz x20,0x7101e8afa4
7101e8aec8  ldrb w8,[x21, #0x10]
7101e8aecc  cbz w8,0x7101e8af94
7101e8aed0  ldr x8,[x21]
7101e8aed4  ldr x23,[x8, #0x80]
7101e8aed8  add x22,x8,#0x88
7101e8aedc  cmp x23,x22
7101e8aee0  b.eq 0x7101e8af94
7101e8aee4  ldr x0,[x23, #0x68]
7101e8aee8  ldr x8,[x0]
7101e8aeec  ldr x8,[x8, #0x148]
7101e8aef0  blr x8
7101e8aef4  tbz w0,#0x0,0x7101e8af34
7101e8aef8  ldr x8,[x20]
7101e8aefc  ldr x1,[x23, #0x68]
7101e8af00  mov x0,x20
7101e8af04  ldr x8,[x8, #0x120]
7101e8af08  blr x8
7101e8af0c  tbz w0,#0x0,0x7101e8af34
7101e8af10  ldr x0,[x23, #0x68]
7101e8af14  ldr x8,[x0]
7101e8af18  ldr x8,[x8, #0x178]
7101e8af1c  blr x8
7101e8af20  ldr x0,[x23, #0x68]
7101e8af24  ldr x8,[x0]
7101e8af28  ldr x8,[x8, #0x140]
7101e8af2c  mov w1,wzr
7101e8af30  blr x8
7101e8af34  ldr x8,[x23, #0x8]
7101e8af38  cbz x8,0x7101e8af4c
7101e8af3c  mov x23,x8
7101e8af40  ldr x8,[x8]
7101e8af44  cbnz x8,0x7101e8af3c
7101e8af48  b 0x7101e8af78
7101e8af4c  mov x8,x23
7101e8af50  ldr x9,[x8, #0x10]!
7101e8af54  ldr x10,[x9]
7101e8af58  cmp x10,x23
7101e8af5c  b.eq 0x7101e8af84
7101e8af60  ldr x9,[x8]
7101e8af64  mov x8,x9
7101e8af68  ldr x23,[x8, #0x10]!
7101e8af6c  ldr x10,[x23]
7101e8af70  cmp x10,x9
7101e8af74  b.ne 0x7101e8af60
7101e8af78  cmp x23,x22
7101e8af7c  b.ne 0x7101e8aee4
7101e8af80  b 0x7101e8af90
7101e8af84  mov x23,x9
7101e8af88  cmp x23,x22
7101e8af8c  b.ne 0x7101e8aee4
7101e8af90  ldr x20,[x21, #0x8]
7101e8af94  ldr x8,[x20]
7101e8af98  ldr x8,[x8, #0x188]
7101e8af9c  mov x0,x20
7101e8afa0  blr x8
7101e8afa4  fmov s0,0x3f800000
7101e8afa8  mov x0,sp
7101e8afac  bl 0x710377aee0
7101e8afb0  ldr x0,[x19, #0x258]
7101e8afb4  cbz x0,0x7101e8b01c
7101e8afb8  ldr x8,[x0]
7101e8afbc  ldr x8,[x8, #0x20]
7101e8afc0  blr x8
7101e8afc4  tbnz w0,#0x0,0x7101e8b01c
7101e8afc8  adrp x8,0x710593b000
7101e8afcc  ldr x8,[x8, #0x438]
7101e8afd0  ldr x8,[x8]
7101e8afd4  ldrb w8,[x8, #0x1]
7101e8afd8  cbz w8,0x7101e8b01c
7101e8afdc  ldr w8,[x19, #0x264]
7101e8afe0  mov w9,#0x6500
7101e8afe4  movk w9,#0x87, LSL #16
7101e8afe8  cmp w8,w9
7101e8afec  b.ne 0x7101e8b01c
7101e8aff0  adrp x8,0x7106dd5000
7101e8aff4  ldrb w8,[x8, #0x3a8]
7101e8aff8  cmp w8,#0x1
7101e8affc  b.ne 0x7101e8b01c
7101e8b000  adrp x9,0x7106dd5000
7101e8b004  ldr w8,[x19, #0x260]
7101e8b008  ldr w9,[x9, #0x3ac]
7101e8b00c  cmp w8,w9
7101e8b010  b.ne 0x7101e8b01c
7101e8b014  ldrb w8,[x19, #0x268]
7101e8b018  cbz w8,0x7101e8b3bc
7101e8b01c  orr w8,wzr,#0x3
7101e8b020  str w8,[x19, #0x1f8]
7101e8b024  ldrsw x8,[x19, #0x1dc]
7101e8b028  cmp w8,#0x13
7101e8b02c  b.cs 0x7101e8b434
7101e8b030  add x8,x19,x8, LSL #0x2
7101e8b034  str wzr,[x8, #0x190]
7101e8b038  b 0x7101e8b238
7101e8b03c  cmp w8,#0x3
7101e8b040  b.eq 0x7101e8b278
7101e8b044  cmp w8,#0x2
7101e8b048  b.ne 0x7101e8ad04
7101e8b04c  ldr x0,[x19, #0x50]
7101e8b050  ldr x8,[x0]
7101e8b054  ldr x8,[x8, #0x60]
7101e8b058  mov w1,wzr
7101e8b05c  blr x8
7101e8b060  ldr x0,[x19, #0x50]
7101e8b064  b 0x7101e8acf4
7101e8b068  ldr w8,[x19, #0x1e0]
7101e8b06c  sub w9,w8,#0x4
7101e8b070  cmp w9,#0x4
7101e8b074  b.cs 0x7101e8b2bc
7101e8b078  ldr x0,[x19, #0x60]
7101e8b07c  ldr x8,[x0]
7101e8b080  ldr x8,[x8, #0x60]
7101e8b084  mov w1,wzr
7101e8b088  blr x8
7101e8b08c  ldr x0,[x19, #0x60]
7101e8b090  ldr x8,[x0]
7101e8b094  ldr x8,[x8, #0x70]
7101e8b098  mov w1,wzr
7101e8b09c  blr x8
7101e8b0a0  mov w8,#0x1878
7101e8b0a4  strb wzr,[x19, x8, LSL ]
7101e8b0a8  ldr x21,[sp, #0x18]
7101e8b0ac  ldr x20,[x21, #0x8]
7101e8b0b0  cbz x20,0x7101e8b190
7101e8b0b4  ldrb w8,[x21, #0x10]
7101e8b0b8  cbz w8,0x7101e8b180
7101e8b0bc  ldr x8,[x21]
7101e8b0c0  ldr x23,[x8, #0x80]
7101e8b0c4  add x22,x8,#0x88
7101e8b0c8  cmp x23,x22
7101e8b0cc  b.eq 0x7101e8b180
7101e8b0d0  ldr x0,[x23, #0x68]
7101e8b0d4  ldr x8,[x0]
7101e8b0d8  ldr x8,[x8, #0x148]
7101e8b0dc  blr x8
7101e8b0e0  tbz w0,#0x0,0x7101e8b120
7101e8b0e4  ldr x8,[x20]
7101e8b0e8  ldr x1,[x23, #0x68]
7101e8b0ec  mov x0,x20
7101e8b0f0  ldr x8,[x8, #0x120]
7101e8b0f4  blr x8
7101e8b0f8  tbz w0,#0x0,0x7101e8b120
7101e8b0fc  ldr x0,[x23, #0x68]
7101e8b100  ldr x8,[x0]
7101e8b104  ldr x8,[x8, #0x178]
7101e8b108  blr x8
7101e8b10c  ldr x0,[x23, #0x68]
7101e8b110  ldr x8,[x0]
7101e8b114  ldr x8,[x8, #0x140]
7101e8b118  mov w1,wzr
7101e8b11c  blr x8
7101e8b120  ldr x8,[x23, #0x8]
7101e8b124  cbz x8,0x7101e8b138
7101e8b128  mov x23,x8
7101e8b12c  ldr x8,[x8]
7101e8b130  cbnz x8,0x7101e8b128
7101e8b134  b 0x7101e8b164
7101e8b138  mov x8,x23
7101e8b13c  ldr x9,[x8, #0x10]!
7101e8b140  ldr x10,[x9]
7101e8b144  cmp x10,x23
7101e8b148  b.eq 0x7101e8b170
7101e8b14c  ldr x9,[x8]
7101e8b150  mov x8,x9
7101e8b154  ldr x23,[x8, #0x10]!
7101e8b158  ldr x10,[x23]
7101e8b15c  cmp x10,x9
7101e8b160  b.ne 0x7101e8b14c
7101e8b164  cmp x23,x22
7101e8b168  b.ne 0x7101e8b0d0
7101e8b16c  b 0x7101e8b17c
7101e8b170  mov x23,x9
7101e8b174  cmp x23,x22
7101e8b178  b.ne 0x7101e8b0d0
7101e8b17c  ldr x20,[x21, #0x8]
7101e8b180  ldr x8,[x20]
7101e8b184  ldr x8,[x8, #0x188]
7101e8b188  mov x0,x20
7101e8b18c  blr x8
7101e8b190  fmov s0,0x3f800000
7101e8b194  mov x0,sp
7101e8b198  bl 0x710377aee0
7101e8b19c  ldr x0,[x19, #0x258]
7101e8b1a0  cbz x0,0x7101e8b208
7101e8b1a4  ldr x8,[x0]
7101e8b1a8  ldr x8,[x8, #0x20]
7101e8b1ac  blr x8
7101e8b1b0  tbnz w0,#0x0,0x7101e8b208
7101e8b1b4  adrp x8,0x710593b000
7101e8b1b8  ldr x8,[x8, #0x438]
7101e8b1bc  ldr x8,[x8]
7101e8b1c0  ldrb w8,[x8, #0x1]
7101e8b1c4  cbz w8,0x7101e8b208
7101e8b1c8  ldr w8,[x19, #0x264]
7101e8b1cc  mov w9,#0x6500
7101e8b1d0  movk w9,#0x87, LSL #16
7101e8b1d4  cmp w8,w9
7101e8b1d8  b.ne 0x7101e8b208
7101e8b1dc  adrp x8,0x7106dd5000
7101e8b1e0  ldrb w8,[x8, #0x3a8]
7101e8b1e4  cmp w8,#0x1
7101e8b1e8  b.ne 0x7101e8b208
7101e8b1ec  adrp x9,0x7106dd5000
7101e8b1f0  ldr w8,[x19, #0x260]
7101e8b1f4  ldr w9,[x9, #0x3ac]
7101e8b1f8  cmp w8,w9
7101e8b1fc  b.ne 0x7101e8b208
7101e8b200  ldrb w8,[x19, #0x268]
7101e8b204  cbz w8,0x7101e8b3f8
7101e8b208  mov w8,#0x5
7101e8b20c  b 0x7101e8ae70
7101e8b210  ldr x0,[x19, #0x58]
7101e8b214  ldr x8,[x0]
7101e8b218  ldr x8,[x8, #0x60]
7101e8b21c  mov w1,#0x1
7101e8b220  blr x8
7101e8b224  ldr x0,[x19, #0x58]
7101e8b228  ldr x8,[x0]
7101e8b22c  ldr x8,[x8, #0x70]
7101e8b230  mov w1,#0x1
7101e8b234  blr x8
7101e8b238  ldr x0,[sp, #0x8]
7101e8b23c  adrp x19,0x710523d000
7101e8b240  add x19,x19,#0x9e8
7101e8b244  stp x19,xzr,[sp]
7101e8b248  cbz x0,0x7101e8b250
7101e8b24c  bl 0x710392eb40
7101e8b250  ldr x0,[sp, #0x18]
7101e8b254  stp x19,xzr,[sp, #0x10]
7101e8b258  cbz x0,0x7101e8b260
7101e8b25c  bl 0x710392eb40
7101e8b260  ldp x29,x30,[sp, #0x90]
7101e8b264  ldr x23,[sp, #0x60]
7101e8b268  ldp x20,x19,[sp, #0x80]
7101e8b26c  ldp x22,x21,[sp, #0x70]
7101e8b270  add sp,sp,#0xa0
7101e8b274  ret
7101e8b278  ldr x8,[x0]
7101e8b27c  ldr x8,[x8, #0x60]
7101e8b280  mov w1,wzr
7101e8b284  blr x8
7101e8b288  ldr x0,[x19, #0x58]
7101e8b28c  b 0x7101e8acf4
7101e8b290  cmp w8,#0x3
7101e8b294  b.eq 0x7101e8b2e8
7101e8b298  cmp w8,#0x2
7101e8b29c  b.ne 0x7101e8a974
7101e8b2a0  ldr x0,[x19, #0x50]
7101e8b2a4  ldr x8,[x0]
7101e8b2a8  ldr x8,[x8, #0x60]
7101e8b2ac  mov w1,wzr
7101e8b2b0  blr x8
7101e8b2b4  ldr x0,[x19, #0x50]
7101e8b2b8  b 0x7101e8a964
7101e8b2bc  cmp w8,#0x3
7101e8b2c0  b.eq 0x7101e8b304
7101e8b2c4  cmp w8,#0x2
7101e8b2c8  b.ne 0x7101e8b0a0
7101e8b2cc  ldr x0,[x19, #0x50]
7101e8b2d0  ldr x8,[x0]
7101e8b2d4  ldr x8,[x8, #0x60]
7101e8b2d8  mov w1,wzr
7101e8b2dc  blr x8
7101e8b2e0  ldr x0,[x19, #0x50]
7101e8b2e4  b 0x7101e8b090
7101e8b2e8  ldr x0,[x19, #0x58]
7101e8b2ec  ldr x8,[x0]
7101e8b2f0  ldr x8,[x8, #0x60]
7101e8b2f4  mov w1,wzr
7101e8b2f8  blr x8
7101e8b2fc  ldr x0,[x19, #0x58]
7101e8b300  b 0x7101e8a964
7101e8b304  ldr x8,[x0]
7101e8b308  ldr x8,[x8, #0x60]
7101e8b30c  mov w1,wzr
7101e8b310  blr x8
7101e8b314  ldr x0,[x19, #0x58]
7101e8b318  b 0x7101e8b090
7101e8b31c  ldr x0,[x19, #0x258]
7101e8b320  cbz x0,0x7101e8ae6c
7101e8b324  ldr x8,[x0]
7101e8b328  ldr x8,[x8, #0x20]
7101e8b32c  blr x8
7101e8b330  tbnz w0,#0x0,0x7101e8ae6c
7101e8b334  ldr x0,[x19, #0x258]
7101e8b338  ldr x8,[x0]
7101e8b33c  ldr x8,[x8, #0x68]
7101e8b340  blr x8
7101e8b344  tbnz w0,#0x0,0x7101e8ae6c
7101e8b348  add x0,x19,#0x248
7101e8b34c  mov w1,wzr
7101e8b350  bl 0x710373b540
7101e8b354  b 0x7101e8ae6c
7101e8b358  str w9,[x19, #0x260]
7101e8b35c  add x9,x19,#0x258
7101e8b360  add x10,x19,#0x268
7101e8b364  str x8,[x9]
7101e8b368  add x8,x8,#0x38
7101e8b36c  ldaxr w9,[x8]
7101e8b370  add w9,w9,#0x1
7101e8b374  stlxr w11,w9,[x8]
7101e8b378  cbnz w11,0x7101e8b36c
7101e8b37c  b 0x7101e8ac58
7101e8b380  ldr x0,[x19, #0x258]
7101e8b384  cbz x0,0x7101e8aad4
7101e8b388  ldr x8,[x0]
7101e8b38c  ldr x8,[x8, #0x20]
7101e8b390  blr x8
7101e8b394  tbnz w0,#0x0,0x7101e8aad4
7101e8b398  ldr x0,[x19, #0x258]
7101e8b39c  ldr x8,[x0]
7101e8b3a0  ldr x8,[x8, #0x68]
7101e8b3a4  blr x8
7101e8b3a8  tbnz w0,#0x0,0x7101e8aad4
7101e8b3ac  add x0,x19,#0x248
7101e8b3b0  mov w1,wzr
7101e8b3b4  bl 0x710373b540
7101e8b3b8  b 0x7101e8aad4
7101e8b3bc  ldr x0,[x19, #0x258]
7101e8b3c0  cbz x0,0x7101e8b01c
7101e8b3c4  ldr x8,[x0]
7101e8b3c8  ldr x8,[x8, #0x20]
7101e8b3cc  blr x8
7101e8b3d0  tbnz w0,#0x0,0x7101e8b01c
7101e8b3d4  ldr x0,[x19, #0x258]
7101e8b3d8  ldr x8,[x0]
7101e8b3dc  ldr x8,[x8, #0x68]
7101e8b3e0  blr x8
7101e8b3e4  tbnz w0,#0x0,0x7101e8b01c
7101e8b3e8  add x0,x19,#0x248
7101e8b3ec  mov w1,wzr
7101e8b3f0  bl 0x710373b540
7101e8b3f4  b 0x7101e8b01c
7101e8b3f8  ldr x0,[x19, #0x258]
7101e8b3fc  cbz x0,0x7101e8b208
7101e8b400  ldr x8,[x0]
7101e8b404  ldr x8,[x8, #0x20]
7101e8b408  blr x8
7101e8b40c  tbnz w0,#0x0,0x7101e8b208
7101e8b410  ldr x0,[x19, #0x258]
7101e8b414  ldr x8,[x0]
7101e8b418  ldr x8,[x8, #0x68]
7101e8b41c  blr x8
7101e8b420  tbnz w0,#0x0,0x7101e8b208
7101e8b424  add x0,x19,#0x248
7101e8b428  mov w1,wzr
7101e8b42c  bl 0x710373b540
7101e8b430  b 0x7101e8b208
7101e8b434  bl 0x71039c2650
