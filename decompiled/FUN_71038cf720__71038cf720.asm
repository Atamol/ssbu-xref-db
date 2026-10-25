// addr:      71038cf720
// offset:    0x38cf720
// name:      FUN_71038cf720
// mangled:   
// size:      6328

71038cf720  sub sp,sp,#0x1a0
71038cf724  stp x28,x27,[sp, #0x140]
71038cf728  stp x26,x25,[sp, #0x150]
71038cf72c  stp x24,x23,[sp, #0x160]
71038cf730  stp x22,x21,[sp, #0x170]
71038cf734  stp x20,x19,[sp, #0x180]
71038cf738  stp x29,x30,[sp, #0x190]
71038cf73c  add x29,sp,#0x190
71038cf740  mov x20,x2
71038cf744  mov x23,x1
71038cf748  str x0,[sp, #0x40]
71038cf74c  mov w2,#0x9a0
71038cf750  add x0,sp,#0xb8
71038cf754  mov w1,#0x10
71038cf758  bl 0x710392e1f0
71038cf75c  cmp w0,#0xc
71038cf760  b.ne 0x71038cf79c
71038cf764  adrp x8,0x710593d000
71038cf768  ldr x0,[x8, #0x2b0]
71038cf76c  cbz x0,0x71038cf79c
71038cf770  mov w8,#0x9a0
71038cf774  stur x8,[x29, #-0xb0]
71038cf778  ldr x8,[x0]
71038cf77c  ldr x8,[x8, #0x30]
71038cf780  sub x1,x29,#0xb0
71038cf784  blr x8
71038cf788  tbz w0,#0x0,0x71038cf79c
71038cf78c  mov w2,#0x9a0
71038cf790  add x0,sp,#0xb8
71038cf794  mov w1,#0x10
71038cf798  bl 0x710392e1f0
71038cf79c  adrp x8,0x71052a8000
71038cf7a0  ldr x8,[x8, #0xa78]
71038cf7a4  cbz x8,0x71038cf7b8
71038cf7a8  ldr x2,[sp, #0xb8]
71038cf7ac  mov w0,#0x9a0
71038cf7b0  mov w1,#0x10
71038cf7b4  bl 0x71039c19e0
71038cf7b8  ldr x19,[sp, #0xb8]
71038cf7bc  mov x0,x19
71038cf7c0  bl 0x71037c3a70
71038cf7c4  adrp x8,0x7105291000
71038cf7c8  add x8,x8,#0xde8
71038cf7cc  str x8,[x19]
71038cf7d0  adrp x21,0x7105291000
71038cf7d4  add x21,x21,#0xe68
71038cf7d8  mov x10,x19
71038cf7dc  mov x22,x19
71038cf7e0  add x8,x19,#0x58
71038cf7e4  add x9,x19,#0x870
71038cf7e8  str x21,[x10, #0x18]!
71038cf7ec  str xzr,[x22, #0x20]!
71038cf7f0  stp xzr,xzr,[x19, #0x28]
71038cf7f4  str wzr,[x19, #0x10]
71038cf7f8  stp xzr,x8,[x19, #0x38]
71038cf7fc  str x8,[sp, #0x28]
71038cf800  mov w8,#0x40
71038cf804  str x8,[x19, #0x868]
71038cf808  str x9,[x19, #0x858]
71038cf80c  str xzr,[x19, #0x860]
71038cf810  str xzr,[x19, #0x988]
71038cf814  str xzr,[x19, #0x980]
71038cf818  str xzr,[x19, #0x978]
71038cf81c  str xzr,[x19, #0x970]
71038cf820  strh wzr,[x19, #0x998]
71038cf824  stp xzr,x8,[x19, #0x48]
71038cf828  orr w8,wzr,#0x3f800000
71038cf82c  str w8,[x19, #0x990]
71038cf830  cbz x19,0x71038cf848
71038cf834  ldr x8,[x19, #0x8]
71038cf838  str x8,[sp, #0x50]
71038cf83c  ldr x8,[x8]
71038cf840  str x8,[sp, #0x38]
71038cf844  b 0x71038cf850
71038cf848  str xzr,[sp, #0x50]
71038cf84c  str xzr,[sp, #0x38]
71038cf850  add x8,sp,#0xb8
71038cf854  stp xzr,xzr,[sp, #0xd0]
71038cf858  stp x21,xzr,[sp, #0xc0]
71038cf85c  add x1,x8,#0x8
71038cf860  str wzr,[sp, #0xb8]
71038cf864  ldr x8,[x20, #0x10]
71038cf868  stp x10,x23,[sp, #0x60]
71038cf86c  cbz x8,0x71038cf89c
71038cf870  ldr x8,[x8]
71038cf874  ldr x9,[x20, #0x18]
71038cf878  cmp x8,x9
71038cf87c  b.ne 0x71038cf89c
71038cf880  ldr x23,[x20, #0x8]
71038cf884  stp xzr,xzr,[x20, #0x10]
71038cf888  str xzr,[x20, #0x8]
71038cf88c  cbz x23,0x71038cf8e8
71038cf890  ldr x27,[x23, #0x8]
71038cf894  ldr x26,[x27]
71038cf898  b 0x71038cf8a8
71038cf89c  mov x26,xzr
71038cf8a0  mov x27,xzr
71038cf8a4  mov x23,xzr
71038cf8a8  sub x28,x29,#0xb0
71038cf8ac  add x20,x28,#0x8
71038cf8b0  adrp x25,0x7105239000
71038cf8b4  add x25,x25,#0x490
71038cf8b8  stp xzr,xzr,[x29, #-0x98]
71038cf8bc  stp x25,xzr,[x29, #-0xa8]
71038cf8c0  cbz x27,0x71038cf90c
71038cf8c4  ldr x8,[x27]
71038cf8c8  cmp x8,x26
71038cf8cc  b.ne 0x71038cf90c
71038cf8d0  stur x23,[x29, #-0xa0]
71038cf8d4  cbz x23,0x71038cf8f4
71038cf8d8  ldr x8,[x23, #0x8]
71038cf8dc  stur x8,[x29, #-0x98]
71038cf8e0  ldr x8,[x8]
71038cf8e4  b 0x71038cf8fc
71038cf8e8  mov x26,xzr
71038cf8ec  mov x27,xzr
71038cf8f0  b 0x71038cf8a8
71038cf8f4  mov x8,xzr
71038cf8f8  stur xzr,[x29, #-0x98]
71038cf8fc  mov x26,xzr
71038cf900  mov x27,xzr
71038cf904  mov x23,xzr
71038cf908  stur x8,[x29, #-0x90]
71038cf90c  mov w24,#0x1
71038cf910  mov w0,wzr
71038cf914  stur w24,[x29, #-0xb0]
71038cf918  str x1,[sp, #0x48]
71038cf91c  bl 0x71038cf180
71038cf920  ldur x8,[x29, #-0x98]
71038cf924  stp xzr,xzr,[sp, #0xd0]
71038cf928  stp x25,xzr,[sp, #0xc0]
71038cf92c  cbz x8,0x71038cf970
71038cf930  ldr x8,[x8]
71038cf934  ldur x9,[x29, #-0x90]
71038cf938  cmp x8,x9
71038cf93c  b.ne 0x71038cf970
71038cf940  ldur x8,[x29, #-0xa0]
71038cf944  add x9,x28,#0x10
71038cf948  str xzr,[x9]
71038cf94c  stp xzr,xzr,[x9, #0x8]
71038cf950  str x8,[sp, #0xc8]
71038cf954  cbz x8,0x71038cf968
71038cf958  ldr x8,[x8, #0x8]
71038cf95c  str x8,[sp, #0xd0]
71038cf960  ldr x8,[x8]
71038cf964  b 0x71038cf96c
71038cf968  str xzr,[sp, #0xd0]
71038cf96c  str x8,[sp, #0xd8]
71038cf970  ldur w8,[x29, #-0xb0]
71038cf974  eor w0,w8,w8, ASR #0x1f
71038cf978  mov x1,x20
71038cf97c  str w24,[sp, #0xb8]
71038cf980  bl 0x71038cf180
71038cf984  cbz x27,0x71038cf9a8
71038cf988  ldr x8,[x27]
71038cf98c  cmp x8,x26
71038cf990  b.ne 0x71038cf9a8
71038cf994  cbz x23,0x71038cf9a8
71038cf998  ldr x8,[x23]
71038cf99c  ldr x8,[x8, #0x8]
71038cf9a0  mov x0,x23
71038cf9a4  blr x8
71038cf9a8  ldr w8,[sp, #0xb8]
71038cf9ac  eor w8,w8,w8, ASR #0x1f
71038cf9b0  cmp w8,#0x13
71038cf9b4  b.hi 0x71038d0d68
71038cf9b8  adrp x9,0x7104535000
71038cf9bc  add x9,x9,#0x5fc
71038cf9c0  ldr x26,[sp, #0x60]
71038cf9c4  ldrsw x10,[x9, x8, LSL #0x2]
71038cf9c8  add x9,x10,x9
71038cf9cc  br x9
71038cf9d0  ldp x9,x10,[sp, #0xc8]
71038cf9d4  str x21,[sp, #0x98]
71038cf9d8  stp x9,x10,[sp, #0xa0]
71038cf9dc  ldr x9,[sp, #0xd8]
71038cf9e0  str x9,[sp, #0xb0]
71038cf9e4  b 0x71038cfa3c
71038cf9e8  ldr x9,[sp, #0xd0]
71038cf9ec  stp xzr,xzr,[sp, #0xa8]
71038cf9f0  stp x25,xzr,[sp, #0x98]
71038cf9f4  cbz x9,0x71038cfa3c
71038cf9f8  ldr x9,[x9]
71038cf9fc  ldr x10,[sp, #0xd8]
71038cfa00  cmp x9,x10
71038cfa04  b.ne 0x71038cfa3c
71038cfa08  add x9,sp,#0xb8
71038cfa0c  add x10,x9,#0x10
71038cfa10  ldr x9,[sp, #0xc8]
71038cfa14  stp xzr,xzr,[x10, #0x8]
71038cfa18  str xzr,[x10]
71038cfa1c  str x9,[sp, #0xa0]
71038cfa20  cbz x9,0x71038cfa38
71038cfa24  ldr x9,[x9, #0x8]
71038cfa28  str x9,[sp, #0xa8]
71038cfa2c  ldr x9,[x9]
71038cfa30  str x9,[sp, #0xb0]
71038cfa34  b 0x71038cfa3c
71038cfa38  stp xzr,xzr,[sp, #0xa8]
71038cfa3c  eor w20,w8,w8, ASR #0x1f
71038cfa40  add x9,sp,#0x90
71038cfa44  add x2,x9,#0x8
71038cfa48  sub x0,x29,#0xb0
71038cfa4c  str w8,[sp, #0x90]
71038cfa50  mov w1,w20
71038cfa54  str x2,[sp, #0x58]
71038cfa58  bl 0x71038cf200
71038cfa5c  ldur x8,[x29, #-0xa0]
71038cfa60  cbz x8,0x71038cfb00
71038cfa64  ldr x8,[x8]
71038cfa68  ldur x9,[x29, #-0x98]
71038cfa6c  cmp x8,x9
71038cfa70  b.ne 0x71038cfb00
71038cfa74  ldr x2,[sp, #0x58]
71038cfa78  sub x0,x29,#0xb0
71038cfa7c  mov w1,w20
71038cfa80  bl 0x71038cf200
71038cfa84  ldur x8,[x29, #-0xa8]
71038cfa88  mov w9,#0x4c88
71038cfa8c  ldrb w8,[x8, x9, LSL ]
71038cfa90  cbz w8,0x71038cfb00
71038cfa94  ldr w8,[x19, #0x10]
71038cfa98  ldr w9,[sp, #0x90]
71038cfa9c  cmp w8,w9
71038cfaa0  b.ne 0x71038cfb74
71038cfaa4  eor w8,w8,w8, ASR #0x1f
71038cfaa8  cmp w8,#0x13
71038cfaac  b.hi 0x71038d0d68
71038cfab0  adrp x9,0x7104535000
71038cfab4  add x9,x9,#0x69c
71038cfab8  ldr x25,[sp, #0x68]
71038cfabc  ldrsw x8,[x9, x8, LSL #0x2]
71038cfac0  add x8,x8,x9
71038cfac4  br x8
71038cfac8  ldr x8,[sp, #0xa8]
71038cfacc  cbz x8,0x71038cfcb8
71038cfad0  ldr x8,[x8]
71038cfad4  ldr x9,[sp, #0xb0]
71038cfad8  cmp x8,x9
71038cfadc  b.ne 0x71038cfcb8
71038cfae0  ldr x8,[sp, #0xa0]
71038cfae4  str x8,[x22]
71038cfae8  cbz x8,0x71038cfcbc
71038cfaec  ldr x8,[x8, #0x8]
71038cfaf0  str x8,[x19, #0x28]
71038cfaf4  ldr x8,[x8]
71038cfaf8  str x8,[x19, #0x30]
71038cfafc  b 0x71038cfd08
71038cfb00  mov w20,wzr
71038cfb04  ldr w8,[sp, #0x90]
71038cfb08  ldr x1,[sp, #0x58]
71038cfb0c  eor w0,w8,w8, ASR #0x1f
71038cfb10  bl 0x71038cf180
71038cfb14  ldr x11,[sp, #0x40]
71038cfb18  mov x8,x11
71038cfb1c  adrp x9,0x7105239000
71038cfb20  add x9,x9,#0x450
71038cfb24  str xzr,[x8, #0x8]!
71038cfb28  stp xzr,xzr,[x11, #0x10]
71038cfb2c  str x9,[x11]
71038cfb30  tbz w20,#0x0,0x71038cfb64
71038cfb34  ldr x20,[sp, #0x50]
71038cfb38  cbz x20,0x71038cfb6c
71038cfb3c  ldr x9,[x20]
71038cfb40  ldr x10,[sp, #0x38]
71038cfb44  cmp x9,x10
71038cfb48  ldr x1,[sp, #0x48]
71038cfb4c  b.ne 0x71038cfbe8
71038cfb50  str x19,[x8]
71038cfb54  cbz x19,0x71038cfbd0
71038cfb58  ldr x8,[x19, #0x8]
71038cfb5c  ldr x9,[x8]
71038cfb60  b 0x71038cfbd8
71038cfb64  ldp x1,x20,[sp, #0x48]
71038cfb68  b 0x71038cfbe8
71038cfb6c  ldr x1,[sp, #0x48]
71038cfb70  b 0x71038cfbe8
71038cfb74  eor w20,w9,w9, ASR #0x1f
71038cfb78  cmp w20,#0x13
71038cfb7c  b.hi 0x71038d0d68
71038cfb80  adrp x9,0x7104535000
71038cfb84  add x9,x9,#0x64c
71038cfb88  ldrsw x10,[x9, x20, LSL #0x2]
71038cfb8c  add x9,x10,x9
71038cfb90  br x9
71038cfb94  eor w0,w8,w8, ASR #0x1f
71038cfb98  add x1,x19,#0x18
71038cfb9c  bl 0x71038cf180
71038cfba0  adrp x8,0x7105291000
71038cfba4  add x8,x8,#0xe48
71038cfba8  str x8,[x19, #0x18]
71038cfbac  ldr x8,[sp, #0xa0]
71038cfbb0  str x8,[x19, #0x20]
71038cfbb4  ldr x8,[sp, #0xa8]
71038cfbb8  str x8,[x19, #0x28]
71038cfbbc  ldr x8,[sp, #0xb0]
71038cfbc0  ldr x25,[sp, #0x68]
71038cfbc4  str x21,[x19, #0x18]
71038cfbc8  str x8,[x19, #0x30]
71038cfbcc  b 0x71038cfd04
71038cfbd0  mov x8,xzr
71038cfbd4  mov x9,xzr
71038cfbd8  mov x20,xzr
71038cfbdc  mov x19,xzr
71038cfbe0  str xzr,[sp, #0x38]
71038cfbe4  stp x8,x9,[x11, #0x10]
71038cfbe8  ldr w8,[sp, #0xb8]
71038cfbec  eor w0,w8,w8, ASR #0x1f
71038cfbf0  bl 0x71038cf180
71038cfbf4  cbz x20,0x71038cfc1c
71038cfbf8  cbz x19,0x71038cfc1c
71038cfbfc  ldr x8,[x20]
71038cfc00  ldr x9,[sp, #0x38]
71038cfc04  cmp x8,x9
71038cfc08  b.ne 0x71038cfc1c
71038cfc0c  ldr x8,[x19]
71038cfc10  ldr x8,[x8, #0x8]
71038cfc14  mov x0,x19
71038cfc18  blr x8
71038cfc1c  ldp x29,x30,[sp, #0x190]
71038cfc20  ldp x20,x19,[sp, #0x180]
71038cfc24  ldp x22,x21,[sp, #0x170]
71038cfc28  ldp x24,x23,[sp, #0x160]
71038cfc2c  ldp x26,x25,[sp, #0x150]
71038cfc30  ldp x28,x27,[sp, #0x140]
71038cfc34  add sp,sp,#0x1a0
71038cfc38  ret
71038cfc3c  ldr x8,[sp, #0xa0]
71038cfc40  stp xzr,xzr,[sp, #0xa8]
71038cfc44  str xzr,[sp, #0xa0]
71038cfc48  cbz x8,0x71038cfcc4
71038cfc4c  ldr x9,[x8, #0x8]
71038cfc50  ldr x10,[x9]
71038cfc54  b 0x71038cfccc
71038cfc58  eor w0,w8,w8, ASR #0x1f
71038cfc5c  add x1,x19,#0x18
71038cfc60  bl 0x71038cf180
71038cfc64  mov x8,x19
71038cfc68  str xzr,[x8, #0x20]!
71038cfc6c  stp xzr,xzr,[x8, #0x8]
71038cfc70  str x25,[x19, #0x18]
71038cfc74  ldr x9,[sp, #0xa8]
71038cfc78  ldr x25,[sp, #0x68]
71038cfc7c  cbz x9,0x71038cfd04
71038cfc80  ldr x9,[x9]
71038cfc84  ldr x10,[sp, #0xb0]
71038cfc88  cmp x9,x10
71038cfc8c  b.ne 0x71038cfd04
71038cfc90  ldr x9,[sp, #0xa0]
71038cfc94  stp xzr,xzr,[sp, #0xa8]
71038cfc98  str xzr,[sp, #0xa0]
71038cfc9c  str x9,[x8]
71038cfca0  cbz x9,0x71038cfd00
71038cfca4  ldr x8,[x9, #0x8]
71038cfca8  str x8,[x19, #0x28]
71038cfcac  ldr x8,[x8]
71038cfcb0  str x8,[x19, #0x30]
71038cfcb4  b 0x71038cfd04
71038cfcb8  str xzr,[x22]
71038cfcbc  stp xzr,xzr,[x19, #0x28]
71038cfcc0  b 0x71038cfd08
71038cfcc4  mov x9,xzr
71038cfcc8  mov x10,xzr
71038cfccc  ldp x0,x11,[x19, #0x20]
71038cfcd0  stp x8,x9,[x19, #0x20]
71038cfcd4  ldr x8,[x19, #0x30]
71038cfcd8  str x10,[x19, #0x30]
71038cfcdc  cbz x11,0x71038cfd08
71038cfce0  cbz x0,0x71038cfd08
71038cfce4  ldr x9,[x11]
71038cfce8  cmp x9,x8
71038cfcec  b.ne 0x71038cfd08
71038cfcf0  ldr x8,[x0]
71038cfcf4  ldr x8,[x8, #0x8]
71038cfcf8  blr x8
71038cfcfc  b 0x71038cfd08
71038cfd00  stp xzr,xzr,[x19, #0x28]
71038cfd04  str w20,[x19, #0x10]
71038cfd08  ldr x8,[x25, #0x638]
71038cfd0c  str x8,[x19, #0x38]
71038cfd10  ldr x21,[x25, #0x28]
71038cfd14  ldr x8,[x19, #0x50]
71038cfd18  cmp x8,x21
71038cfd1c  b.cs 0x71038cff84
71038cfd20  lsl x20,x21,#0x5
71038cfd24  sub x0,x29,#0x88
71038cfd28  mov w1,#0x10
71038cfd2c  mov x2,x20
71038cfd30  bl 0x710392e1f0
71038cfd34  cmp w0,#0xc
71038cfd38  b.ne 0x71038cfd70
71038cfd3c  adrp x8,0x710593d000
71038cfd40  ldr x0,[x8, #0x2b0]
71038cfd44  cbz x0,0x71038cfd70
71038cfd48  stur x20,[x29, #-0xb0]
71038cfd4c  ldr x8,[x0]
71038cfd50  ldr x8,[x8, #0x30]
71038cfd54  sub x1,x29,#0xb0
71038cfd58  blr x8
71038cfd5c  tbz w0,#0x0,0x71038cfd70
71038cfd60  sub x0,x29,#0x88
71038cfd64  mov w1,#0x10
71038cfd68  mov x2,x20
71038cfd6c  bl 0x710392e1f0
71038cfd70  adrp x8,0x71052a8000
71038cfd74  ldr x8,[x8, #0xa78]
71038cfd78  cbz x8,0x71038cfd8c
71038cfd7c  ldur x2,[x29, #-0x88]
71038cfd80  mov w1,#0x10
71038cfd84  mov x0,x20
71038cfd88  bl 0x71039c19e0
71038cfd8c  ldp x8,x10,[x19, #0x40]
71038cfd90  ldur x22,[x29, #-0x88]
71038cfd94  add x9,x8,x10, LSL #0x5
71038cfd98  mov x23,x22
71038cfd9c  cbz x10,0x71038cfe44
71038cfda0  cbz x8,0x71038cfe44
71038cfda4  sub x11,x9,#0x20
71038cfda8  sub x14,x11,x8
71038cfdac  mov x11,x8
71038cfdb0  mov x12,x22
71038cfdb4  tbnz w14,#0x5,0x71038cfde0
71038cfdb8  ldp x11,x12,[x8]
71038cfdbc  ldr x13,[x8, #0x10]
71038cfdc0  stp x12,x13,[x22, #0x8]
71038cfdc4  str x11,[x22]
71038cfdc8  ldr w11,[x8, #0x18]
71038cfdcc  stp xzr,xzr,[x8, #0x8]
71038cfdd0  str xzr,[x8]
71038cfdd4  str w11,[x22, #0x18]
71038cfdd8  add x11,x8,#0x20
71038cfddc  add x12,x22,#0x20
71038cfde0  lsr x13,x14,#0x5
71038cfde4  cmp x14,#0x20
71038cfde8  b.cc 0x71038cfe3c
71038cfdec  ldp x14,x15,[x11]
71038cfdf0  ldr x16,[x11, #0x10]
71038cfdf4  stp x15,x16,[x12, #0x8]
71038cfdf8  str x14,[x12]
71038cfdfc  ldr w14,[x11, #0x18]
71038cfe00  stp xzr,xzr,[x11, #0x8]
71038cfe04  str xzr,[x11]
71038cfe08  str w14,[x12, #0x18]
71038cfe0c  ldr x16,[x11, #0x30]
71038cfe10  ldp x14,x15,[x11, #0x20]
71038cfe14  str x14,[x12, #0x20]
71038cfe18  stp x15,x16,[x12, #0x28]
71038cfe1c  ldr w14,[x11, #0x38]
71038cfe20  stp xzr,xzr,[x11, #0x28]
71038cfe24  str xzr,[x11, #0x20]
71038cfe28  add x11,x11,#0x40
71038cfe2c  cmp x11,x9
71038cfe30  str w14,[x12, #0x38]
71038cfe34  add x12,x12,#0x40
71038cfe38  b.ne 0x71038cfdec
71038cfe3c  add x11,x22,x13, LSL #0x5
71038cfe40  add x23,x11,#0x20
71038cfe44  cbz x8,0x71038cff70
71038cfe48  ldr x24,[x19, #0x48]
71038cfe4c  cmp x24,x10
71038cfe50  b.eq 0x71038cfefc
71038cfe54  add x10,x8,x24, LSL #0x5
71038cfe58  sub x11,x10,#0x20
71038cfe5c  sub x13,x11,x9
71038cfe60  tbnz w13,#0x5,0x71038cfe90
71038cfe64  ldp x11,x12,[x9]
71038cfe68  ldr x14,[x9, #0x10]
71038cfe6c  stp x12,x14,[x23, #0x8]
71038cfe70  str x11,[x23]
71038cfe74  ldr w11,[x9, #0x18]
71038cfe78  stp xzr,xzr,[x9, #0x8]
71038cfe7c  str xzr,[x9]
71038cfe80  str w11,[x23, #0x18]
71038cfe84  add x9,x9,#0x20
71038cfe88  add x11,x23,#0x20
71038cfe8c  b 0x71038cfe94
71038cfe90  mov x11,x23
71038cfe94  lsr x12,x13,#0x5
71038cfe98  cmp x13,#0x20
71038cfe9c  b.cc 0x71038cfef0
71038cfea0  ldp x13,x14,[x9]
71038cfea4  ldr x15,[x9, #0x10]
71038cfea8  stp x14,x15,[x11, #0x8]
71038cfeac  str x13,[x11]
71038cfeb0  ldr w13,[x9, #0x18]
71038cfeb4  stp xzr,xzr,[x9, #0x8]
71038cfeb8  str xzr,[x9]
71038cfebc  str w13,[x11, #0x18]
71038cfec0  ldr x15,[x9, #0x30]
71038cfec4  ldp x13,x14,[x9, #0x20]
71038cfec8  str x13,[x11, #0x20]
71038cfecc  stp x14,x15,[x11, #0x28]
71038cfed0  ldr w13,[x9, #0x38]
71038cfed4  stp xzr,xzr,[x9, #0x28]
71038cfed8  str xzr,[x9, #0x20]
71038cfedc  add x9,x9,#0x40
71038cfee0  cmp x9,x10
71038cfee4  str w13,[x11, #0x38]
71038cfee8  add x11,x11,#0x40
71038cfeec  b.ne 0x71038cfea0
71038cfef0  ldr x24,[x19, #0x48]
71038cfef4  add x9,x23,x12, LSL #0x5
71038cfef8  add x23,x9,#0x20
71038cfefc  cbz x24,0x71038cff38
71038cff00  adrp x26,0x71052a8000
71038cff04  ldr x26,[x26, #0xa70]
71038cff08  add x25,x8,#0x10
71038cff0c  ldurb w8,[x25, #-0x10]
71038cff10  tbz w8,#0x0,0x71038cff2c
71038cff14  ldr x20,[x25]
71038cff18  cbz x26,0x71038cff24
71038cff1c  mov x0,x20
71038cff20  bl 0x71039c19b0
71038cff24  mov x0,x20
71038cff28  bl 0x710392eb40
71038cff2c  sub x24,x24,#0x1
71038cff30  add x25,x25,#0x20
71038cff34  cbnz x24,0x71038cff0c
71038cff38  ldr x20,[x19, #0x40]
71038cff3c  ldr x8,[sp, #0x28]
71038cff40  cmp x20,x8
71038cff44  b.eq 0x71038cff6c
71038cff48  adrp x8,0x71052a8000
71038cff4c  ldr x8,[x8, #0xa70]
71038cff50  ldp x26,x25,[sp, #0x60]
71038cff54  cbz x8,0x71038cff60
71038cff58  mov x0,x20
71038cff5c  bl 0x71039c19b0
71038cff60  mov x0,x20
71038cff64  bl 0x710392eb40
71038cff68  b 0x71038cff70
71038cff6c  ldp x26,x25,[sp, #0x60]
71038cff70  sub x8,x23,x22
71038cff74  asr x8,x8,#0x5
71038cff78  str x21,[x19, #0x50]
71038cff7c  stp x22,x8,[x19, #0x40]
71038cff80  ldr x21,[x25, #0x28]
71038cff84  cbz x21,0x71038d0c54
71038cff88  add x8,x19,#0x970
71038cff8c  str x8,[sp, #0x80]
71038cff90  sub x8,x29,#0xb0
71038cff94  orr x8,x8,#0x1
71038cff98  str x8,[sp, #0x70]
71038cff9c  sub x8,x29,#0x88
71038cffa0  mov x22,#0xe995
71038cffa4  movk x22,#0x5bd1, LSL #16
71038cffa8  movk x22,#0xa793, LSL #32
71038cffac  movk x22,#0xc6a4, LSL #48
71038cffb0  mov w21,#0x6b64
71038cffb4  movk w21,#0xe654, LSL #16
71038cffb8  orr x8,x8,#0x1
71038cffbc  str x8,[sp, #0x78]
71038cffc0  mov x24,xzr
71038cffc4  add x8,x19,#0x980
71038cffc8  str x8,[sp, #0x30]
71038cffcc  orr w23,wzr,#0x18
71038cffd0  b 0x71038d0508
71038cffd4  ldr x25,[sp, #0x68]
71038cffd8  ldr x8,[x26, #0x8]
71038cffdc  cmp x8,x28
71038cffe0  b.eq 0x71038cfffc
71038cffe4  cmp x8,x21
71038cffe8  b.cc 0x71038cfff4
71038cffec  udiv x9,x8,x21
71038cfff0  msub x8,x9,x21,x8
71038cfff4  cmp x8,x23
71038cfff8  b.ne 0x71038d0a34
71038cfffc  ldrb w8,[x26, #0x10]
71038d0000  ldr x9,[x26, #0x18]
71038d0004  lsr x10,x8,#0x1
71038d0008  tst w8,#0x1
71038d000c  csel x8,x10,x9,eq
71038d0010  cbz x8,0x71038d0024
71038d0014  ldr x26,[x26]
71038d0018  cbnz x26,0x71038cffd8
71038d001c  b 0x71038d0a34
71038d0020  ldr x25,[sp, #0x68]
71038d0024  ldr x26,[sp, #0x60]
71038d0028  orr w23,wzr,#0x18
71038d002c  b 0x71038d0bec
71038d0030  subs x9,x13,x8
71038d0034  b.eq 0x71038d0d84
71038d0038  cmp x8,#0x0
71038d003c  csinc x10,x8,xzr,ne
71038d0040  add x8,x10,x8
71038d0044  cmp x9,x10
71038d0048  csel x23,x13,x8,cc
71038d004c  lsl x20,x23,#0x5
71038d0050  sub x0,x29,#0x60
71038d0054  mov w1,#0x10
71038d0058  mov x2,x20
71038d005c  bl 0x710392e1f0
71038d0060  cmp w0,#0xc
71038d0064  b.ne 0x71038d009c
71038d0068  adrp x8,0x710593d000
71038d006c  ldr x0,[x8, #0x2b0]
71038d0070  cbz x0,0x71038d009c
71038d0074  stur x20,[x29, #-0x88]
71038d0078  ldr x8,[x0]
71038d007c  ldr x8,[x8, #0x30]
71038d0080  sub x1,x29,#0x88
71038d0084  blr x8
71038d0088  tbz w0,#0x0,0x71038d009c
71038d008c  sub x0,x29,#0x60
71038d0090  mov w1,#0x10
71038d0094  mov x2,x20
71038d0098  bl 0x710392e1f0
71038d009c  adrp x8,0x71052a8000
71038d00a0  ldr x8,[x8, #0xa78]
71038d00a4  cbz x8,0x71038d00b8
71038d00a8  ldur x2,[x29, #-0x60]
71038d00ac  mov w1,#0x10
71038d00b0  mov x0,x20
71038d00b4  bl 0x71039c19e0
71038d00b8  ldur x27,[x29, #-0x60]
71038d00bc  ldr x28,[x19, #0x40]
71038d00c0  str x23,[sp, #0x20]
71038d00c4  cbz x28,0x71038d0210
71038d00c8  cmp x28,x21
71038d00cc  b.eq 0x71038d021c
71038d00d0  sub x8,x21,#0x20
71038d00d4  sub x11,x8,x28
71038d00d8  mov x8,x28
71038d00dc  mov x9,x27
71038d00e0  tbnz w11,#0x5,0x71038d010c
71038d00e4  ldp x8,x9,[x28]
71038d00e8  ldr x10,[x28, #0x10]
71038d00ec  stp x9,x10,[x27, #0x8]
71038d00f0  str x8,[x27]
71038d00f4  ldr w8,[x28, #0x18]
71038d00f8  stp xzr,xzr,[x28, #0x8]
71038d00fc  str xzr,[x28]
71038d0100  str w8,[x27, #0x18]
71038d0104  add x8,x28,#0x20
71038d0108  add x9,x27,#0x20
71038d010c  lsr x10,x11,#0x5
71038d0110  cmp x11,#0x20
71038d0114  b.cc 0x71038d0204
71038d0118  sub x11,x21,#0x40
71038d011c  sub x11,x11,x8
71038d0120  tbnz w11,#0x6,0x71038d016c
71038d0124  ldp x12,x13,[x8]
71038d0128  ldr x14,[x8, #0x10]
71038d012c  stp x13,x14,[x9, #0x8]
71038d0130  str x12,[x9]
71038d0134  ldr w12,[x8, #0x18]
71038d0138  stp xzr,xzr,[x8, #0x8]
71038d013c  str xzr,[x8]
71038d0140  str w12,[x9, #0x18]
71038d0144  ldr x14,[x8, #0x30]
71038d0148  ldp x12,x13,[x8, #0x20]
71038d014c  str x12,[x9, #0x20]
71038d0150  stp x13,x14,[x9, #0x28]
71038d0154  ldr w12,[x8, #0x38]
71038d0158  stp xzr,xzr,[x8, #0x28]
71038d015c  str xzr,[x8, #0x20]
71038d0160  str w12,[x9, #0x38]
71038d0164  add x8,x8,#0x40
71038d0168  add x9,x9,#0x40
71038d016c  cmp x11,#0x40
71038d0170  b.cc 0x71038d0204
71038d0174  ldp x11,x12,[x8]
71038d0178  ldr x13,[x8, #0x10]
71038d017c  stp x12,x13,[x9, #0x8]
71038d0180  str x11,[x9]
71038d0184  ldr w11,[x8, #0x18]
71038d0188  stp xzr,xzr,[x8, #0x8]
71038d018c  str xzr,[x8]
71038d0190  str w11,[x9, #0x18]
71038d0194  ldr x13,[x8, #0x30]
71038d0198  ldp x11,x12,[x8, #0x20]
71038d019c  str x11,[x9, #0x20]
71038d01a0  stp x12,x13,[x9, #0x28]
71038d01a4  ldr w11,[x8, #0x38]
71038d01a8  stp xzr,xzr,[x8, #0x28]
71038d01ac  str xzr,[x8, #0x20]
71038d01b0  str w11,[x9, #0x38]
71038d01b4  ldp x11,x12,[x8, #0x40]
71038d01b8  ldr x13,[x8, #0x50]
71038d01bc  stp x12,x13,[x9, #0x48]
71038d01c0  str x11,[x9, #0x40]
71038d01c4  ldr w11,[x8, #0x58]
71038d01c8  str xzr,[x8, #0x40]
71038d01cc  stp xzr,xzr,[x8, #0x48]
71038d01d0  str w11,[x9, #0x58]
71038d01d4  ldp x11,x12,[x8, #0x60]
71038d01d8  ldr x13,[x8, #0x70]
71038d01dc  stp x12,x13,[x9, #0x68]
71038d01e0  str x11,[x9, #0x60]
71038d01e4  ldr w11,[x8, #0x78]
71038d01e8  stp xzr,xzr,[x8, #0x68]
71038d01ec  str xzr,[x8, #0x60]
71038d01f0  add x8,x8,#0x80
71038d01f4  cmp x8,x21
71038d01f8  str w11,[x9, #0x78]
71038d01fc  add x9,x9,#0x80
71038d0200  b.ne 0x71038d0174
71038d0204  add x8,x27,x10, LSL #0x5
71038d0208  add x20,x8,#0x20
71038d020c  b 0x71038d0220
71038d0210  mov x23,xzr
71038d0214  mov x20,x27
71038d0218  b 0x71038d0228
71038d021c  mov x20,x27
71038d0220  sub x8,x20,x27
71038d0224  asr x23,x8,#0x5
71038d0228  stp xzr,xzr,[x20, #0x8]
71038d022c  str xzr,[x20]
71038d0230  ldurb w8,[x29, #-0xb0]
71038d0234  tbnz w8,#0x0,0x71038d024c
71038d0238  ldp x8,x9,[x29, #-0xb0]
71038d023c  ldur x10,[x29, #-0xa0]
71038d0240  stp x9,x10,[x20, #0x8]
71038d0244  str x8,[x20]
71038d0248  b 0x71038d031c
71038d024c  str x27,[sp, #0x18]
71038d0250  ldur x27,[x29, #-0xa8]
71038d0254  cmn x27,#0x10
71038d0258  b.cs 0x71038d0d7c
71038d025c  ldur x1,[x29, #-0xa0]
71038d0260  cmp x27,#0x17
71038d0264  b.cs 0x71038d027c
71038d0268  lsl w8,w27,#0x1
71038d026c  mov x23,x20
71038d0270  strb w8,[x23], #0x1
71038d0274  cbnz x27,0x71038d0308
71038d0278  b 0x71038d0314
71038d027c  add x8,x27,#0x10
71038d0280  str x1,[sp, #0x8]
71038d0284  sub x0,x29,#0x60
71038d0288  and x2,x8,#-0x10
71038d028c  mov w1,#0x10
71038d0290  str x2,[sp, #0x10]
71038d0294  bl 0x710392e1f0
71038d0298  cmp w0,#0xc
71038d029c  b.ne 0x71038d02d8
71038d02a0  adrp x8,0x710593d000
71038d02a4  ldr x0,[x8, #0x2b0]
71038d02a8  cbz x0,0x71038d02d8
71038d02ac  ldr x8,[sp, #0x10]
71038d02b0  stur x8,[x29, #-0x88]
71038d02b4  ldr x8,[x0]
71038d02b8  ldr x8,[x8, #0x30]
71038d02bc  sub x1,x29,#0x88
71038d02c0  blr x8
71038d02c4  tbz w0,#0x0,0x71038d02d8
71038d02c8  ldr x2,[sp, #0x10]
71038d02cc  sub x0,x29,#0x60
71038d02d0  mov w1,#0x10
71038d02d4  bl 0x710392e1f0
71038d02d8  adrp x8,0x71052a8000
71038d02dc  ldr x8,[x8, #0xa78]
71038d02e0  cbz x8,0x71038d02f4
71038d02e4  ldur x2,[x29, #-0x60]
71038d02e8  ldr x0,[sp, #0x10]
71038d02ec  mov w1,#0x10
71038d02f0  bl 0x71039c19e0
71038d02f4  ldur x23,[x29, #-0x60]
71038d02f8  stp x27,x23,[x20, #0x8]
71038d02fc  ldp x1,x8,[sp, #0x8]
71038d0300  orr x8,x8,#0x1
71038d0304  str x8,[x20]
71038d0308  mov x0,x23
71038d030c  mov x2,x27
71038d0310  bl 0x71039c00e0
71038d0314  strb wzr,[x23, x27, LSL ]
71038d0318  ldr x27,[sp, #0x18]
71038d031c  ldur w8,[x29, #-0x98]
71038d0320  add x23,x20,#0x20
71038d0324  str w8,[x20, #0x18]
71038d0328  cbz x28,0x71038d04ec
71038d032c  ldr x24,[x19, #0x48]
71038d0330  add x8,x28,x24, LSL #0x5
71038d0334  cmp x8,x21
71038d0338  b.eq 0x71038d047c
71038d033c  sub x9,x8,#0x20
71038d0340  sub x11,x9,x21
71038d0344  tbnz w11,#0x5,0x71038d0374
71038d0348  ldp x9,x10,[x21]
71038d034c  ldr x12,[x21, #0x10]
71038d0350  stp x10,x12,[x23, #0x8]
71038d0354  str x9,[x23]
71038d0358  ldr w9,[x21, #0x18]
71038d035c  stp xzr,xzr,[x21, #0x8]
71038d0360  str xzr,[x21]
71038d0364  str w9,[x20, #0x38]
71038d0368  add x21,x21,#0x20
71038d036c  add x9,x20,#0x40
71038d0370  b 0x71038d0378
71038d0374  mov x9,x23
71038d0378  lsr x10,x11,#0x5
71038d037c  cmp x11,#0x20
71038d0380  b.cc 0x71038d0470
71038d0384  sub x11,x8,#0x40
71038d0388  sub x11,x11,x21
71038d038c  tbnz w11,#0x6,0x71038d03d8
71038d0390  ldp x12,x13,[x21]
71038d0394  ldr x14,[x21, #0x10]
71038d0398  stp x13,x14,[x9, #0x8]
71038d039c  str x12,[x9]
71038d03a0  ldr w12,[x21, #0x18]
71038d03a4  stp xzr,xzr,[x21, #0x8]
71038d03a8  str xzr,[x21]
71038d03ac  str w12,[x9, #0x18]
71038d03b0  ldr x14,[x21, #0x30]
71038d03b4  ldp x12,x13,[x21, #0x20]
71038d03b8  str x12,[x9, #0x20]
71038d03bc  stp x13,x14,[x9, #0x28]
71038d03c0  ldr w12,[x21, #0x38]
71038d03c4  stp xzr,xzr,[x21, #0x28]
71038d03c8  str xzr,[x21, #0x20]
71038d03cc  str w12,[x9, #0x38]
71038d03d0  add x21,x21,#0x40
71038d03d4  add x9,x9,#0x40
71038d03d8  cmp x11,#0x40
71038d03dc  b.cc 0x71038d0470
71038d03e0  ldp x11,x12,[x21]
71038d03e4  ldr x13,[x21, #0x10]
71038d03e8  stp x12,x13,[x9, #0x8]
71038d03ec  str x11,[x9]
71038d03f0  ldr w11,[x21, #0x18]
71038d03f4  stp xzr,xzr,[x21, #0x8]
71038d03f8  str xzr,[x21]
71038d03fc  str w11,[x9, #0x18]
71038d0400  ldr x13,[x21, #0x30]
71038d0404  ldp x11,x12,[x21, #0x20]
71038d0408  str x11,[x9, #0x20]
71038d040c  stp x12,x13,[x9, #0x28]
71038d0410  ldr w11,[x21, #0x38]
71038d0414  stp xzr,xzr,[x21, #0x28]
71038d0418  str xzr,[x21, #0x20]
71038d041c  str w11,[x9, #0x38]
71038d0420  ldp x11,x12,[x21, #0x40]
71038d0424  ldr x13,[x21, #0x50]
71038d0428  stp x12,x13,[x9, #0x48]
71038d042c  str x11,[x9, #0x40]
71038d0430  ldr w11,[x21, #0x58]
71038d0434  str xzr,[x21, #0x40]
71038d0438  stp xzr,xzr,[x21, #0x48]
71038d043c  str w11,[x9, #0x58]
71038d0440  ldp x11,x12,[x21, #0x60]
71038d0444  ldr x13,[x21, #0x70]
71038d0448  stp x12,x13,[x9, #0x68]
71038d044c  str x11,[x9, #0x60]
71038d0450  ldr w11,[x21, #0x78]
71038d0454  stp xzr,xzr,[x21, #0x68]
71038d0458  str xzr,[x21, #0x60]
71038d045c  add x21,x21,#0x80
71038d0460  cmp x21,x8
71038d0464  str w11,[x9, #0x78]
71038d0468  add x9,x9,#0x80
71038d046c  b.ne 0x71038d03e0
71038d0470  ldr x24,[x19, #0x48]
71038d0474  add x8,x23,x10, LSL #0x5
71038d0478  add x23,x8,#0x20
71038d047c  cbz x24,0x71038d04b8
71038d0480  add x21,x28,#0x10
71038d0484  ldurb w8,[x21, #-0x10]
71038d0488  tbz w8,#0x0,0x71038d04ac
71038d048c  adrp x8,0x71052a8000
71038d0490  ldr x20,[x21]
71038d0494  ldr x8,[x8, #0xa70]
71038d0498  cbz x8,0x71038d04a4
71038d049c  mov x0,x20
71038d04a0  bl 0x71039c19b0
71038d04a4  mov x0,x20
71038d04a8  bl 0x710392eb40
71038d04ac  sub x24,x24,#0x1
71038d04b0  add x21,x21,#0x20
71038d04b4  cbnz x24,0x71038d0484
71038d04b8  ldr x20,[x19, #0x40]
71038d04bc  ldr x8,[sp, #0x28]
71038d04c0  cmp x20,x8
71038d04c4  b.eq 0x71038d04ec
71038d04c8  adrp x8,0x71052a8000
71038d04cc  ldr x8,[x8, #0xa70]
71038d04d0  ldr x24,[sp, #0x88]
71038d04d4  cbz x8,0x71038d04e0
71038d04d8  mov x0,x20
71038d04dc  bl 0x71039c19b0
71038d04e0  mov x0,x20
71038d04e4  bl 0x710392eb40
71038d04e8  b 0x71038d04f0
71038d04ec  ldr x24,[sp, #0x88]
71038d04f0  sub x8,x23,x27
71038d04f4  asr x8,x8,#0x5
71038d04f8  stp x27,x8,[x19, #0x40]
71038d04fc  ldr x8,[sp, #0x20]
71038d0500  str x8,[x19, #0x50]
71038d0504  b 0x71038d0764
71038d0508  stp xzr,xzr,[x29, #-0xa8]
71038d050c  sub x10,x29,#0xb0
71038d0510  stur xzr,[x29, #-0xb0]
71038d0514  ldr x9,[x25, #0x20]
71038d0518  madd x8,x24,x23,x9
71038d051c  cmp x10,x8
71038d0520  b.eq 0x71038d0574
71038d0524  madd x9,x24,x23,x9
71038d0528  ldrb w10,[x8], #0x1
71038d052c  lsr x12,x10,#0x1
71038d0530  ldp x11,x9,[x9, #0x8]
71038d0534  tst w10,#0x1
71038d0538  csel x20,x12,x11,eq
71038d053c  csel x7,x8,x9,eq
71038d0540  subs x2,x20,#0x16
71038d0544  b.ls 0x71038d057c
71038d0548  sub x0,x29,#0xb0
71038d054c  mov w1,#0x16
71038d0550  mov x3,xzr
71038d0554  mov x4,xzr
71038d0558  mov x5,xzr
71038d055c  mov x6,x20
71038d0560  bl 0x71037cfe00
71038d0564  ldurb w8,[x29, #-0xb0]
71038d0568  mov w21,#0x6b64
71038d056c  movk w21,#0xe654, LSL #16
71038d0570  b 0x71038d05b4
71038d0574  mov w8,wzr
71038d0578  b 0x71038d05b4
71038d057c  cbz x20,0x71038d0590
71038d0580  ldr x0,[sp, #0x70]
71038d0584  mov x1,x7
71038d0588  mov x2,x20
71038d058c  bl 0x71039c00a0
71038d0590  sub x8,x29,#0xb0
71038d0594  add x8,x8,x20
71038d0598  strb wzr,[x8, #0x1]
71038d059c  ldurb w8,[x29, #-0xb0]
71038d05a0  tbnz w8,#0x0,0x71038d05b0
71038d05a4  lsl w8,w20,#0x1
71038d05a8  sturb w8,[x29, #-0xb0]
71038d05ac  b 0x71038d05b4
71038d05b0  stur x20,[x29, #-0xa8]
71038d05b4  ldp x10,x9,[x29, #-0xa8]
71038d05b8  ubfx w11,w8,#0x1,#0x7
71038d05bc  tst w8,#0x1
71038d05c0  ldr x8,[sp, #0x70]
71038d05c4  csel x8,x8,x9,eq
71038d05c8  csel x11,x11,x10,eq
71038d05cc  orr x13,xzr,#0x7ffffffffffffff
71038d05d0  cbz x11,0x71038d05e4
71038d05d4  cmp x11,#0x1
71038d05d8  b.ne 0x71038d05ec
71038d05dc  mov x9,xzr
71038d05e0  b 0x71038d0638
71038d05e4  mov x9,xzr
71038d05e8  b 0x71038d0650
71038d05ec  and x10,x11,#0x1
71038d05f0  mov x9,xzr
71038d05f4  sub x11,x10,x11
71038d05f8  ldrb w12,[x8]
71038d05fc  mul x12,x12,x22
71038d0600  eor x12,x12,x12, LSR #0x2f
71038d0604  mul x12,x12,x22
71038d0608  eor x9,x12,x9
71038d060c  ldrb w12,[x8, #0x1]
71038d0610  add x8,x8,#0x2
71038d0614  madd x9,x9,x22,x21
71038d0618  mul x12,x12,x22
71038d061c  eor x12,x12,x12, LSR #0x2f
71038d0620  mul x12,x12,x22
71038d0624  eor x9,x12,x9
71038d0628  madd x9,x9,x22,x21
71038d062c  adds x11,x11,#0x2
71038d0630  b.ne 0x71038d05f8
71038d0634  cbz x10,0x71038d0650
71038d0638  ldrb w8,[x8]
71038d063c  mul x8,x8,x22
71038d0640  eor x8,x8,x8, LSR #0x2f
71038d0644  mul x8,x8,x22
71038d0648  eor x8,x8,x9
71038d064c  madd x9,x8,x22,x21
71038d0650  stur w9,[x29, #-0x98]
71038d0654  ldp x9,x10,[x19, #0x40]
71038d0658  ldr x8,[x19, #0x50]
71038d065c  add x21,x9,x10, LSL #0x5
71038d0660  cmp x10,x8
71038d0664  str x24,[sp, #0x88]
71038d0668  b.cs 0x71038d0030
71038d066c  stp xzr,xzr,[x21, #0x8]
71038d0670  str xzr,[x21]
71038d0674  ldurb w8,[x29, #-0xb0]
71038d0678  tbnz w8,#0x0,0x71038d0690
71038d067c  ldp x8,x9,[x29, #-0xb0]
71038d0680  ldur x10,[x29, #-0xa0]
71038d0684  stp x9,x10,[x21, #0x8]
71038d0688  str x8,[x21]
71038d068c  b 0x71038d0750
71038d0690  ldur x20,[x29, #-0xa8]
71038d0694  cmn x20,#0x10
71038d0698  b.cs 0x71038d0d6c
71038d069c  ldur x27,[x29, #-0xa0]
71038d06a0  cmp x20,#0x17
71038d06a4  b.cs 0x71038d06bc
71038d06a8  lsl w8,w20,#0x1
71038d06ac  mov x28,x21
71038d06b0  strb w8,[x28], #0x1
71038d06b4  cbnz x20,0x71038d073c
71038d06b8  b 0x71038d074c
71038d06bc  add x8,x20,#0x10
71038d06c0  and x23,x8,#-0x10
71038d06c4  sub x0,x29,#0x60
71038d06c8  mov w1,#0x10
71038d06cc  mov x2,x23
71038d06d0  bl 0x710392e1f0
71038d06d4  cmp w0,#0xc
71038d06d8  b.ne 0x71038d0710
71038d06dc  adrp x8,0x710593d000
71038d06e0  ldr x0,[x8, #0x2b0]
71038d06e4  cbz x0,0x71038d0710
71038d06e8  stur x23,[x29, #-0x88]
71038d06ec  ldr x8,[x0]
71038d06f0  ldr x8,[x8, #0x30]
71038d06f4  sub x1,x29,#0x88
71038d06f8  blr x8
71038d06fc  tbz w0,#0x0,0x71038d0710
71038d0700  sub x0,x29,#0x60
71038d0704  mov w1,#0x10
71038d0708  mov x2,x23
71038d070c  bl 0x710392e1f0
71038d0710  adrp x8,0x71052a8000
71038d0714  ldr x8,[x8, #0xa78]
71038d0718  cbz x8,0x71038d072c
71038d071c  ldur x2,[x29, #-0x60]
71038d0720  mov w1,#0x10
71038d0724  mov x0,x23
71038d0728  bl 0x71039c19e0
71038d072c  ldur x28,[x29, #-0x60]
71038d0730  orr x8,x23,#0x1
71038d0734  str x8,[x21]
71038d0738  stp x20,x28,[x21, #0x8]
71038d073c  mov x0,x28
71038d0740  mov x1,x27
71038d0744  mov x2,x20
71038d0748  bl 0x71039c00e0
71038d074c  strb wzr,[x28, x20, LSL ]
71038d0750  ldur w8,[x29, #-0x98]
71038d0754  str w8,[x21, #0x18]
71038d0758  ldr x8,[x19, #0x48]
71038d075c  add x8,x8,#0x1
71038d0760  str x8,[x19, #0x48]
71038d0764  ldurb w8,[x29, #-0xb0]
71038d0768  stp xzr,xzr,[x29, #-0x80]
71038d076c  stur xzr,[x29, #-0x88]
71038d0770  tbnz w8,#0x0,0x71038d0788
71038d0774  ldp x9,x8,[x29, #-0xa8]
71038d0778  stp x9,x8,[x29, #-0x80]
71038d077c  ldur x8,[x29, #-0xb0]
71038d0780  stur x8,[x29, #-0x88]
71038d0784  b 0x71038d0848
71038d0788  ldur x20,[x29, #-0xa8]
71038d078c  cmn x20,#0x10
71038d0790  b.cs 0x71038d0d74
71038d0794  ldur x27,[x29, #-0xa0]
71038d0798  cmp x20,#0x17
71038d079c  b.cs 0x71038d07b4
71038d07a0  ldr x21,[sp, #0x78]
71038d07a4  lsl w8,w20,#0x1
71038d07a8  sturb w8,[x29, #-0x88]
71038d07ac  cbnz x20,0x71038d0834
71038d07b0  b 0x71038d0844
71038d07b4  add x8,x20,#0x10
71038d07b8  and x28,x8,#-0x10
71038d07bc  sub x0,x29,#0x68
71038d07c0  mov w1,#0x10
71038d07c4  mov x2,x28
71038d07c8  bl 0x710392e1f0
71038d07cc  cmp w0,#0xc
71038d07d0  b.ne 0x71038d0808
71038d07d4  adrp x8,0x710593d000
71038d07d8  ldr x0,[x8, #0x2b0]
71038d07dc  cbz x0,0x71038d0808
71038d07e0  stur x28,[x29, #-0x60]
71038d07e4  ldr x8,[x0]
71038d07e8  ldr x8,[x8, #0x30]
71038d07ec  sub x1,x29,#0x60
71038d07f0  blr x8
71038d07f4  tbz w0,#0x0,0x71038d0808
71038d07f8  sub x0,x29,#0x68
71038d07fc  mov w1,#0x10
71038d0800  mov x2,x28
71038d0804  bl 0x710392e1f0
71038d0808  adrp x8,0x71052a8000
71038d080c  ldr x8,[x8, #0xa78]
71038d0810  cbz x8,0x71038d0824
71038d0814  ldur x2,[x29, #-0x68]
71038d0818  mov w1,#0x10
71038d081c  mov x0,x28
71038d0820  bl 0x71039c19e0
71038d0824  ldur x21,[x29, #-0x68]
71038d0828  orr x8,x28,#0x1
71038d082c  stur x8,[x29, #-0x88]
71038d0830  stp x20,x21,[x29, #-0x80]
71038d0834  mov x0,x21
71038d0838  mov x1,x27
71038d083c  mov x2,x20
71038d0840  bl 0x71039c00e0
71038d0844  strb wzr,[x21, x20, LSL ]
71038d0848  stur w24,[x29, #-0x70]
71038d084c  ldurb w24,[x29, #-0x88]
71038d0850  ldr x11,[sp, #0x78]
71038d0854  ldp x9,x8,[x29, #-0x80]
71038d0858  lsr x10,x24,#0x1
71038d085c  tst w24,#0x1
71038d0860  csel x27,x11,x8,eq
71038d0864  csel x20,x10,x9,eq
71038d0868  mov x0,x27
71038d086c  mov x1,x20
71038d0870  bl 0x7102677830
71038d0874  ldr x21,[x19, #0x978]
71038d0878  mov x28,x0
71038d087c  cbz x21,0x71038d0a38
71038d0880  sub x25,x21,#0x1
71038d0884  ands x8,x25,x21
71038d0888  b.eq 0x71038d08a4
71038d088c  cmp x28,x21
71038d0890  mov x23,x28
71038d0894  b.cc 0x71038d08a8
71038d0898  udiv x9,x28,x21
71038d089c  msub x23,x9,x21,x28
71038d08a0  b 0x71038d08a8
71038d08a4  and x23,x25,x28
71038d08a8  ldr x9,[sp, #0x80]
71038d08ac  ldr x9,[x9]
71038d08b0  ldr x9,[x9, x23, LSL #0x3]
71038d08b4  cbz x9,0x71038d0968
71038d08b8  ldr x26,[x9]
71038d08bc  cbz x26,0x71038d0a30
71038d08c0  and w24,w24,#0x1
71038d08c4  cbz x8,0x71038d0970
71038d08c8  cbz x20,0x71038cffd4
71038d08cc  ldr x25,[sp, #0x68]
71038d08d0  ldr x8,[x26, #0x8]
71038d08d4  cmp x8,x28
71038d08d8  b.eq 0x71038d08f4
71038d08dc  cmp x8,x21
71038d08e0  b.cc 0x71038d08ec
71038d08e4  udiv x9,x8,x21
71038d08e8  msub x8,x9,x21,x8
71038d08ec  cmp x8,x23
71038d08f0  b.ne 0x71038d0a34
71038d08f4  mov x8,x26
71038d08f8  ldrb w10,[x8, #0x10]!
71038d08fc  tst w10,#0x1
71038d0900  ldr x11,[x8, #0x8]
71038d0904  lsr x9,x10,#0x1
71038d0908  csel x11,x9,x11,eq
71038d090c  cmp x11,x20
71038d0910  b.ne 0x71038d095c
71038d0914  tbnz w10,#0x0,0x71038d0948
71038d0918  add x8,x8,#0x1
71038d091c  neg x9,x9
71038d0920  mov x10,x27
71038d0924  ldrb w11,[x8]
71038d0928  ldrb w12,[x10]
71038d092c  cmp w11,w12
71038d0930  b.ne 0x71038d095c
71038d0934  add x8,x8,#0x1
71038d0938  add x10,x10,#0x1
71038d093c  adds x9,x9,#0x1
71038d0940  b.ne 0x71038d0924
71038d0944  b 0x71038d0024
71038d0948  ldr x0,[x26, #0x20]
71038d094c  mov x1,x27
71038d0950  mov x2,x20
71038d0954  bl 0x71039c0250
71038d0958  cbz w0,0x71038d0024
71038d095c  ldr x26,[x26]
71038d0960  cbnz x26,0x71038d08d0
71038d0964  b 0x71038d0a34
71038d0968  ldr x25,[sp, #0x68]
71038d096c  b 0x71038d0a38
71038d0970  cbz x20,0x71038d09fc
71038d0974  ldr x8,[x26, #0x8]
71038d0978  and x9,x8,x25
71038d097c  cmp x8,x28
71038d0980  ccmp x9,x23,#0x4,ne
71038d0984  b.ne 0x71038d0a30
71038d0988  mov x8,x26
71038d098c  ldrb w10,[x8, #0x10]!
71038d0990  tst w10,#0x1
71038d0994  ldr x11,[x8, #0x8]
71038d0998  lsr x9,x10,#0x1
71038d099c  csel x11,x9,x11,eq
71038d09a0  cmp x11,x20
71038d09a4  b.ne 0x71038d09f0
71038d09a8  tbnz w10,#0x0,0x71038d09dc
71038d09ac  add x8,x8,#0x1
71038d09b0  neg x9,x9
71038d09b4  mov x10,x27
71038d09b8  ldrb w11,[x8]
71038d09bc  ldrb w12,[x10]
71038d09c0  cmp w11,w12
71038d09c4  b.ne 0x71038d09f0
71038d09c8  add x8,x8,#0x1
71038d09cc  add x10,x10,#0x1
71038d09d0  adds x9,x9,#0x1
71038d09d4  b.ne 0x71038d09b8
71038d09d8  b 0x71038d0020
71038d09dc  ldr x0,[x26, #0x20]
71038d09e0  mov x1,x27
71038d09e4  mov x2,x20
71038d09e8  bl 0x71039c0250
71038d09ec  cbz w0,0x71038d0020
71038d09f0  ldr x26,[x26]
71038d09f4  cbnz x26,0x71038d0974
71038d09f8  b 0x71038d0a30
71038d09fc  ldr x8,[x26, #0x8]
71038d0a00  and x9,x8,x25
71038d0a04  cmp x8,x28
71038d0a08  ccmp x9,x23,#0x4,ne
71038d0a0c  b.ne 0x71038d0a30
71038d0a10  ldrb w8,[x26, #0x10]
71038d0a14  ldr x9,[x26, #0x18]
71038d0a18  lsr x10,x8,#0x1
71038d0a1c  tst w8,#0x1
71038d0a20  csel x8,x10,x9,eq
71038d0a24  cbz x8,0x71038d0020
71038d0a28  ldr x26,[x26]
71038d0a2c  cbnz x26,0x71038d09fc
71038d0a30  ldr x25,[sp, #0x68]
71038d0a34  ldr x26,[sp, #0x60]
71038d0a38  sub x0,x29,#0x68
71038d0a3c  mov w1,#0x10
71038d0a40  orr w2,wzr,#0x30
71038d0a44  bl 0x710392e1f0
71038d0a48  ldr x24,[sp, #0x80]
71038d0a4c  cmp w0,#0xc
71038d0a50  b.ne 0x71038d0a8c
71038d0a54  adrp x8,0x710593d000
71038d0a58  ldr x0,[x8, #0x2b0]
71038d0a5c  cbz x0,0x71038d0a8c
71038d0a60  orr w8,wzr,#0x30
71038d0a64  stur x8,[x29, #-0x60]
71038d0a68  ldr x8,[x0]
71038d0a6c  ldr x8,[x8, #0x30]
71038d0a70  sub x1,x29,#0x60
71038d0a74  blr x8
71038d0a78  tbz w0,#0x0,0x71038d0a8c
71038d0a7c  sub x0,x29,#0x68
71038d0a80  mov w1,#0x10
71038d0a84  orr w2,wzr,#0x30
71038d0a88  bl 0x710392e1f0
71038d0a8c  adrp x8,0x71052a8000
71038d0a90  ldr x8,[x8, #0xa78]
71038d0a94  cbz x8,0x71038d0aa8
71038d0a98  ldur x2,[x29, #-0x68]
71038d0a9c  orr w0,wzr,#0x30
71038d0aa0  mov w1,#0x10
71038d0aa4  bl 0x71039c19e0
71038d0aa8  ldur x20,[x29, #-0x68]
71038d0aac  ldp x8,x9,[x29, #-0x88]
71038d0ab0  ldur x10,[x29, #-0x78]
71038d0ab4  stp x9,x10,[x20, #0x18]
71038d0ab8  str x8,[x20, #0x10]
71038d0abc  ldur w8,[x29, #-0x70]
71038d0ac0  stur xzr,[x29, #-0x88]
71038d0ac4  stp xzr,xzr,[x29, #-0x80]
71038d0ac8  str w8,[x20, #0x28]
71038d0acc  stp xzr,x28,[x20]
71038d0ad0  ldr x8,[x19, #0x988]
71038d0ad4  add x8,x8,#0x1
71038d0ad8  ucvtf s0,x8
71038d0adc  ldr s1,[x19, #0x990]
71038d0ae0  cbz x21,0x71038d0af4
71038d0ae4  ucvtf s2,x21
71038d0ae8  fmul s2,s1,s2
71038d0aec  fcmp s2,s0
71038d0af0  b.pl 0x71038d0b64
71038d0af4  lsl x8,x21,#0x1
71038d0af8  cmp x21,#0x3
71038d0afc  b.cc 0x71038d0b10
71038d0b00  sub x9,x21,#0x1
71038d0b04  tst x9,x21
71038d0b08  cset w9,ne
71038d0b0c  b 0x71038d0b14
71038d0b10  mov w9,#0x1
71038d0b14  fdiv s0,s0,s1
71038d0b18  fcvtpu x10,s0
71038d0b1c  orr x8,x9,x8
71038d0b20  cmp x8,x10
71038d0b24  add x23,x20,#0x10
71038d0b28  csel x1,x10,x8,cc
71038d0b2c  mov x0,x24
71038d0b30  bl 0x71038866e0
71038d0b34  ldr x21,[x19, #0x978]
71038d0b38  sub x8,x21,#0x1
71038d0b3c  tst x8,x21
71038d0b40  b.eq 0x71038d0b54
71038d0b44  cmp x28,x21
71038d0b48  b.cs 0x71038d0b5c
71038d0b4c  mov x23,x28
71038d0b50  b 0x71038d0b64
71038d0b54  and x23,x8,x28
71038d0b58  b 0x71038d0b64
71038d0b5c  udiv x8,x28,x21
71038d0b60  msub x23,x8,x21,x28
71038d0b64  ldr x8,[x24]
71038d0b68  ldr x8,[x8, x23, LSL #0x3]
71038d0b6c  cbz x8,0x71038d0b80
71038d0b70  ldr x9,[x8]
71038d0b74  orr w23,wzr,#0x18
71038d0b78  str x9,[x20]
71038d0b7c  b 0x71038d0bd4
71038d0b80  ldr x9,[sp, #0x30]
71038d0b84  ldr x8,[x9]
71038d0b88  str x8,[x20]
71038d0b8c  str x20,[x9]
71038d0b90  ldr x8,[x24]
71038d0b94  str x9,[x8, x23, LSL #0x3]
71038d0b98  ldr x8,[x20]
71038d0b9c  orr w23,wzr,#0x18
71038d0ba0  cbz x8,0x71038d0bd8
71038d0ba4  ldr x8,[x8, #0x8]
71038d0ba8  sub x9,x21,#0x1
71038d0bac  tst x9,x21
71038d0bb0  b.eq 0x71038d0bc8
71038d0bb4  cmp x8,x21
71038d0bb8  b.cc 0x71038d0bcc
71038d0bbc  udiv x9,x8,x21
71038d0bc0  msub x8,x9,x21,x8
71038d0bc4  b 0x71038d0bcc
71038d0bc8  and x8,x8,x9
71038d0bcc  ldr x9,[x24]
71038d0bd0  add x8,x9,x8, LSL #0x3
71038d0bd4  str x20,[x8]
71038d0bd8  ldr x8,[x19, #0x988]
71038d0bdc  add x8,x8,#0x1
71038d0be0  str x8,[x19, #0x988]
71038d0be4  ldurb w8,[x29, #-0x88]
71038d0be8  and w24,w8,#0x1
71038d0bec  mov w21,#0x6b64
71038d0bf0  movk w21,#0xe654, LSL #16
71038d0bf4  cbz w24,0x71038d0c18
71038d0bf8  adrp x8,0x71052a8000
71038d0bfc  ldur x20,[x29, #-0x78]
71038d0c00  ldr x8,[x8, #0xa70]
71038d0c04  cbz x8,0x71038d0c10
71038d0c08  mov x0,x20
71038d0c0c  bl 0x71039c19b0
71038d0c10  mov x0,x20
71038d0c14  bl 0x710392eb40
71038d0c18  ldurb w8,[x29, #-0xb0]
71038d0c1c  ldr x24,[sp, #0x88]
71038d0c20  tbz w8,#0x0,0x71038d0c44
71038d0c24  adrp x8,0x71052a8000
71038d0c28  ldur x20,[x29, #-0xa0]
71038d0c2c  ldr x8,[x8, #0xa70]
71038d0c30  cbz x8,0x71038d0c3c
71038d0c34  mov x0,x20
71038d0c38  bl 0x71039c19b0
71038d0c3c  mov x0,x20
71038d0c40  bl 0x710392eb40
71038d0c44  ldr x8,[x25, #0x28]
71038d0c48  add w24,w24,#0x1
71038d0c4c  cmp x8,x24
71038d0c50  b.hi 0x71038d0508
71038d0c54  ldr w8,[x19, #0x10]
71038d0c58  eor w1,w8,w8, ASR #0x1f
71038d0c5c  sub x0,x29,#0xb0
71038d0c60  mov x2,x26
71038d0c64  bl 0x71038cf200
71038d0c68  ldur x8,[x29, #-0xa8]
71038d0c6c  ldr x8,[x8, #0x20]
71038d0c70  ldr x9,[x19, #0x860]
71038d0c74  subs x20,x8,x9
71038d0c78  b.cs 0x71038d0c84
71038d0c7c  str x8,[x19, #0x860]
71038d0c80  b 0x71038d0ce4
71038d0c84  ldr x8,[x19, #0x858]
71038d0c88  add x0,x8,x9, LSL #0x2
71038d0c8c  stur x0,[x29, #-0xb0]
71038d0c90  ldr x10,[x19, #0x868]
71038d0c94  sub x10,x10,x9
71038d0c98  cmp x10,x20
71038d0c9c  b.cs 0x71038d0cb8
71038d0ca0  add x1,x19,#0x858
71038d0ca4  sub x0,x29,#0x88
71038d0ca8  sub x2,x29,#0xb0
71038d0cac  mov x3,x20
71038d0cb0  bl 0x71038cf2c0
71038d0cb4  b 0x71038d0ce4
71038d0cb8  sbfx x21,x9,#0x0,#0x3e
71038d0cbc  cbz x20,0x71038d0cdc
71038d0cc0  lsl x2,x20,#0x2
71038d0cc4  mov w1,wzr
71038d0cc8  bl 0x71039c02a0
71038d0ccc  ldr x8,[x19, #0x860]
71038d0cd0  add x8,x8,x20
71038d0cd4  str x8,[x19, #0x860]
71038d0cd8  ldr x8,[x19, #0x858]
71038d0cdc  add x8,x8,x21, LSL #0x2
71038d0ce0  stur x8,[x29, #-0x88]
71038d0ce4  mov x20,xzr
71038d0ce8  mov w8,wzr
71038d0cec  mov w21,#0x130
71038d0cf0  b 0x71038d0d2c
71038d0cf4  ldr w8,[x19, #0x10]
71038d0cf8  eor w1,w8,w8, ASR #0x1f
71038d0cfc  sub x0,x29,#0xb0
71038d0d00  mov x2,x26
71038d0d04  bl 0x71038cf200
71038d0d08  ldur x8,[x29, #-0xa8]
71038d0d0c  ldr x8,[x8, #0x18]
71038d0d10  ldr x9,[x19, #0x858]
71038d0d14  str w20,[x9, x22, LSL #0x2]
71038d0d18  ldr x9,[x19, #0x48]
71038d0d1c  madd x8,x22,x21,x8
71038d0d20  ldr w8,[x8, #0x34]
71038d0d24  madd x20,x9,x8,x20
71038d0d28  add w8,w22,#0x1
71038d0d2c  mov w22,w8
71038d0d30  ldr w8,[x19, #0x10]
71038d0d34  eor w1,w8,w8, ASR #0x1f
71038d0d38  sub x0,x29,#0xb0
71038d0d3c  mov x2,x26
71038d0d40  bl 0x71038cf200
71038d0d44  ldur x8,[x29, #-0xa8]
71038d0d48  ldr x8,[x8, #0x20]
71038d0d4c  cmp x8,x22
71038d0d50  b.hi 0x71038d0cf4
71038d0d54  ldrb w8,[x25, #0x640]
71038d0d58  mov w20,#0x1
71038d0d5c  strb w20,[x19, #0x998]
71038d0d60  strb w8,[x19, #0x999]
71038d0d64  b 0x71038cfb04
71038d0d68  bl 0x710356c0d0
71038d0d6c  mov x0,x21
71038d0d70  bl 0x71039c1a00
71038d0d74  sub x0,x29,#0x88
71038d0d78  bl 0x71039c1a00
71038d0d7c  mov x0,x20
71038d0d80  bl 0x71039c1a00
71038d0d84  mov w0,#0x10
71038d0d88  bl 0x71039c6c40
71038d0d8c  mov x20,x0
71038d0d90  adrp x1,0x7104359000
71038d0d94  add x1,x1,#0xf68
71038d0d98  bl 0x71039c5f10
71038d0d9c  adrp x8,0x71052a8000
71038d0da0  ldr x8,[x8, #0xbc0]
71038d0da4  add x8,x8,#0x10
71038d0da8  str x8,[x20]
71038d0dac  adrp x1,0x71052a8000
71038d0db0  adrp x2,0x71052a8000
71038d0db4  ldr x1,[x1, #0xbc8]
71038d0db8  ldr x2,[x2, #0xbd0]
71038d0dbc  mov x0,x20
71038d0dc0  bl 0x71039c6c50
71038d0dc4  mov x21,x0
71038d0dc8  mov x0,x20
71038d0dcc  bl 0x71039c6c60
71038d0dd0  ldurb w8,[x29, #-0xb0]
71038d0dd4  tbnz w8,#0x0,0x71038d0f58
71038d0dd8  b 0x71038d0f78
71038d0ddc  b 0x71038d0dec
71038d0de0  b 0x71038d0f14
71038d0de4  b 0x71038d0f14
71038d0de8  bl 0x71037b2bc0
71038d0dec  ldr x8,[sp, #0x18]
71038d0df0  mov x21,x0
71038d0df4  cbz x8,0x71038d0f50
71038d0df8  cbz x23,0x71038d0e38
71038d0dfc  ldr x8,[sp, #0x18]
71038d0e00  add x22,x8,#0x10
71038d0e04  ldurb w8,[x22, #-0x10]
71038d0e08  tbz w8,#0x0,0x71038d0e2c
71038d0e0c  adrp x8,0x71052a8000
71038d0e10  ldr x20,[x22]
71038d0e14  ldr x8,[x8, #0xa70]
71038d0e18  cbz x8,0x71038d0e24
71038d0e1c  mov x0,x20
71038d0e20  bl 0x71039c19b0
71038d0e24  mov x0,x20
71038d0e28  bl 0x710392eb40
71038d0e2c  sub x23,x23,#0x1
71038d0e30  add x22,x22,#0x20
71038d0e34  cbnz x23,0x71038d0e04
71038d0e38  ldr x8,[sp, #0x28]
71038d0e3c  ldr x9,[sp, #0x18]
71038d0e40  cmp x8,x9
71038d0e44  b.eq 0x71038d0f50
71038d0e48  adrp x8,0x71052a8000
71038d0e4c  ldr x8,[x8, #0xa70]
71038d0e50  cbz x8,0x71038d0e5c
71038d0e54  ldr x0,[sp, #0x18]
71038d0e58  bl 0x71039c19b0
71038d0e5c  ldr x0,[sp, #0x18]
71038d0e60  b 0x71038d0f4c
71038d0e64  bl 0x71037b2bc0
71038d0e68  bl 0x71037b2bc0
71038d0e6c  bl 0x71037b2bc0
71038d0e70  bl 0x71037b2bc0
71038d0e74  mov x21,x0
71038d0e78  b 0x71038d0f78
71038d0e7c  bl 0x71037b2bc0
71038d0e80  b 0x71038d0f14
71038d0e84  bl 0x71037b2bc0
71038d0e88  adrp x8,0x71052a8000
71038d0e8c  ldr x8,[x8, #0xa70]
71038d0e90  mov x21,x0
71038d0e94  cbz x8,0x71038d0ea0
71038d0e98  mov x0,x19
71038d0e9c  bl 0x71039c19b0
71038d0ea0  mov x0,x19
71038d0ea4  bl 0x710392eb40
71038d0ea8  mov x0,x21
71038d0eac  bl 0x71039c19f0
71038d0eb0  bl 0x71037b2bc0
71038d0eb4  bl 0x71037b2bc0
71038d0eb8  ldrb w8,[x23]
71038d0ebc  mov x21,x0
71038d0ec0  tbz w8,#0x0,0x71038d0ee4
71038d0ec4  adrp x8,0x71052a8000
71038d0ec8  ldr x22,[x20, #0x20]
71038d0ecc  ldr x8,[x8, #0xa70]
71038d0ed0  cbz x8,0x71038d0edc
71038d0ed4  mov x0,x22
71038d0ed8  bl 0x71039c19b0
71038d0edc  mov x0,x22
71038d0ee0  bl 0x710392eb40
71038d0ee4  adrp x8,0x71052a8000
71038d0ee8  ldr x8,[x8, #0xa70]
71038d0eec  cbz x8,0x71038d0ef8
71038d0ef0  mov x0,x20
71038d0ef4  bl 0x71039c19b0
71038d0ef8  mov x0,x20
71038d0efc  bl 0x710392eb40
71038d0f00  ldurb w8,[x29, #-0x88]
71038d0f04  tbnz w8,#0x0,0x71038d0f30
71038d0f08  b 0x71038d0f50
71038d0f0c  bl 0x71037b2bc0
71038d0f10  bl 0x71037b2bc0
71038d0f14  mov x21,x0
71038d0f18  ldurb w8,[x29, #-0xb0]
71038d0f1c  tbnz w8,#0x0,0x71038d0f58
71038d0f20  b 0x71038d0f78
71038d0f24  mov x21,x0
71038d0f28  ldurb w8,[x29, #-0x88]
71038d0f2c  tbz w8,#0x0,0x71038d0f50
71038d0f30  adrp x8,0x71052a8000
71038d0f34  ldur x20,[x29, #-0x78]
71038d0f38  ldr x8,[x8, #0xa70]
71038d0f3c  cbz x8,0x71038d0f48
71038d0f40  mov x0,x20
71038d0f44  bl 0x71039c19b0
71038d0f48  mov x0,x20
71038d0f4c  bl 0x710392eb40
71038d0f50  ldurb w8,[x29, #-0xb0]
71038d0f54  tbz w8,#0x0,0x71038d0f78
71038d0f58  adrp x8,0x71052a8000
71038d0f5c  ldur x20,[x29, #-0xa0]
71038d0f60  ldr x8,[x8, #0xa70]
71038d0f64  cbz x8,0x71038d0f70
71038d0f68  mov x0,x20
71038d0f6c  bl 0x71039c19b0
71038d0f70  mov x0,x20
71038d0f74  bl 0x710392eb40
71038d0f78  ldr w8,[sp, #0x90]
71038d0f7c  ldr x1,[sp, #0x58]
71038d0f80  eor w0,w8,w8, ASR #0x1f
71038d0f84  bl 0x71038cf180
71038d0f88  ldr w8,[sp, #0xb8]
71038d0f8c  ldr x1,[sp, #0x48]
71038d0f90  eor w0,w8,w8, ASR #0x1f
71038d0f94  bl 0x71038cf180
71038d0f98  ldr x8,[sp, #0x50]
71038d0f9c  cbz x8,0x71038d0fc8
71038d0fa0  cbz x19,0x71038d0fc8
71038d0fa4  ldr x8,[sp, #0x50]
71038d0fa8  ldr x8,[x8]
71038d0fac  ldr x9,[sp, #0x38]
71038d0fb0  cmp x8,x9
71038d0fb4  b.ne 0x71038d0fc8
71038d0fb8  ldr x8,[x19]
71038d0fbc  ldr x8,[x8, #0x8]
71038d0fc0  mov x0,x19
71038d0fc4  blr x8
71038d0fc8  mov x0,x21
71038d0fcc  bl 0x71039c19f0
71038d0fd0  bl 0x71037b2bc0
71038d0fd4  bl 0x71037b2bc0
