// addr:      71017cf610
// offset:    0x17cf610
// name:      FUN_71017cf610
// mangled:   
// size:      1444

71017cf610  stp x28,x21,[sp, #-0x30]!
71017cf614  stp x20,x19,[sp, #0x10]
71017cf618  stp x29,x30,[sp, #0x20]
71017cf61c  add x29,sp,#0x20
71017cf620  sub sp,sp,#0x320
71017cf624  ldr x8,[x0]
71017cf628  cbnz x8,0x71017cfb9c
71017cf62c  mov x19,x0
71017cf630  mov x10,xzr
71017cf634  adrp x8,0x7104280000
71017cf638  add x8,x8,#0x13c
71017cf63c  mov w11,#0x2
71017cf640  strb wzr,[sp, #0x118]
71017cf644  mov x9,sp
71017cf648  str xzr,[sp, #0x110]
71017cf64c  str xzr,[sp, #0x240]
71017cf650  str xzr,[sp, #0x270]
71017cf654  str xzr,[sp, #0x2a0]
71017cf658  str xzr,[sp, #0x2d0]
71017cf65c  str xzr,[sp, #0x300]
71017cf660  str xzr,[sp]
71017cf664  stur xzr,[sp, #0x5]
71017cf668  str w11,[sp]
71017cf66c  b 0x71017cf678
71017cf670  add x10,x10,#0x2
71017cf674  strb w12,[x11, #0xd]
71017cf678  add x12,x8,x10
71017cf67c  ldrb w13,[x12]
71017cf680  cbz w13,0x71017cf698
71017cf684  ldrb w12,[x12, #0x1]
71017cf688  add x11,x9,x10
71017cf68c  strb w13,[x11, #0xc]
71017cf690  cbnz w12,0x71017cf670
71017cf694  add x10,x10,#0x1
71017cf698  mov x9,sp
71017cf69c  orr x11,x9,#0xc
71017cf6a0  mov w8,#0x9dc5
71017cf6a4  movk w8,#0x811c, LSL #16
71017cf6a8  mov w12,w8
71017cf6ac  strb wzr,[x11, w10, UXTW ]
71017cf6b0  str w10,[sp, #0x8]
71017cf6b4  ldrb w10,[sp, #0xc]
71017cf6b8  cbz w10,0x71017cf6e0
71017cf6bc  mov w11,#0xd
71017cf6c0  orr x11,x9,x11
71017cf6c4  mov w13,#0x89
71017cf6c8  mov w12,w8
71017cf6cc  mul w12,w12,w13
71017cf6d0  and w10,w10,#0xff
71017cf6d4  eor w12,w12,w10
71017cf6d8  ldrb w10,[x11], #0x1
71017cf6dc  cbnz w10,0x71017cf6cc
71017cf6e0  mov x10,xzr
71017cf6e4  adrp x11,0x710437a000
71017cf6e8  add x11,x11,#0xfdd
71017cf6ec  str w12,[sp, #0x4]
71017cf6f0  b 0x71017cf6fc
71017cf6f4  add x10,x10,#0x2
71017cf6f8  strb w13,[x12, #0x119]
71017cf6fc  add x13,x11,x10
71017cf700  ldrb w14,[x13]
71017cf704  cbz w14,0x71017cf71c
71017cf708  ldrb w13,[x13, #0x1]
71017cf70c  add x12,x9,x10
71017cf710  strb w14,[x12, #0x118]
71017cf714  cbnz w13,0x71017cf6f4
71017cf718  add x10,x10,#0x1
71017cf71c  mov x9,sp
71017cf720  add x11,x9,#0x118
71017cf724  strb wzr,[x11, w10, UXTW ]
71017cf728  str w10,[sp, #0x114]
71017cf72c  ldrb w10,[sp, #0x118]
71017cf730  cbz w10,0x71017cf750
71017cf734  add x9,x9,#0x119
71017cf738  mov w11,#0x89
71017cf73c  mul w8,w8,w11
71017cf740  and w10,w10,#0xff
71017cf744  eor w8,w8,w10
71017cf748  ldrb w10,[x9], #0x1
71017cf74c  cbnz w10,0x71017cf73c
71017cf750  mov w1,#0x4d0
71017cf754  mov w0,#0x10
71017cf758  str w8,[sp, #0x110]
71017cf75c  add x21,x19,#0x8
71017cf760  bl 0x710392e290
71017cf764  mov x20,x0
71017cf768  cbnz x0,0x71017cf7a4
71017cf76c  adrp x8,0x7105332000
71017cf770  ldr x0,[x8, #0xf00]
71017cf774  mov w20,#0x4d0
71017cf778  stur wzr,[x29, #-0x30]
71017cf77c  stur x20,[x29, #-0x28]
71017cf780  ldr x8,[x0]
71017cf784  ldr x8,[x8, #0x30]
71017cf788  sub x1,x29,#0x30
71017cf78c  sub x2,x29,#0x28
71017cf790  blr x8
71017cf794  mov w0,#0x10
71017cf798  mov x1,x20
71017cf79c  bl 0x710392e290
71017cf7a0  mov x20,x0
71017cf7a4  add x0,x20,#0x10
71017cf7a8  mov x1,sp
71017cf7ac  str x21,[x20]
71017cf7b0  bl 0x71017ca070
71017cf7b4  adrp x8,0x71017ca000
71017cf7b8  add x8,x8,#0x360
71017cf7bc  str x8,[x20, #0x4a0]
71017cf7c0  adrp x8,0x710143c000
71017cf7c4  add x8,x8,#0x880
71017cf7c8  str x8,[x20, #0x4a8]
71017cf7cc  adrp x8,0x71017ca000
71017cf7d0  add x8,x8,#0x350
71017cf7d4  str x8,[x20, #0x488]
71017cf7d8  adrp x8,0x71017ca000
71017cf7dc  add x8,x8,#0x380
71017cf7e0  str x8,[x20, #0x348]
71017cf7e4  adrp x8,0x71017ca000
71017cf7e8  add x8,x8,#0x390
71017cf7ec  str x8,[x20, #0x358]
71017cf7f0  adrp x8,0x71017ca000
71017cf7f4  add x8,x8,#0x660
71017cf7f8  str x8,[x20, #0x368]
71017cf7fc  adrp x8,0x71017ca000
71017cf800  add x8,x8,#0x720
71017cf804  str x8,[x20, #0x378]
71017cf808  adrp x8,0x71017ca000
71017cf80c  add x8,x8,#0x970
71017cf810  str x8,[x20, #0x388]
71017cf814  adrp x8,0x71017ca000
71017cf818  add x8,x8,#0xd50
71017cf81c  str x8,[x20, #0x398]
71017cf820  adrp x8,0x71017cb000
71017cf824  add x8,x8,#0x170
71017cf828  str x8,[x20, #0x3a8]
71017cf82c  adrp x8,0x71017cb000
71017cf830  add x8,x8,#0x9d0
71017cf834  str x8,[x20, #0x3b8]
71017cf838  adrp x8,0x71017cc000
71017cf83c  add x8,x8,#0x7e0
71017cf840  str x8,[x20, #0x3c8]
71017cf844  adrp x8,0x71017cc000
71017cf848  add x8,x8,#0xaa0
71017cf84c  str x8,[x20, #0x3d8]
71017cf850  adrp x8,0x71017cc000
71017cf854  add x8,x8,#0xfb0
71017cf858  add x9,x20,#0x43c
71017cf85c  str x20,[x20, #0x320]
71017cf860  str xzr,[x20, #0x340]
71017cf864  str xzr,[x20, #0x338]
71017cf868  str xzr,[x20, #0x480]
71017cf86c  add x0,x20,#0x320
71017cf870  str xzr,[x20, #0x478]
71017cf874  str xzr,[x20, #0x470]
71017cf878  str xzr,[x20, #0x468]
71017cf87c  str xzr,[x20, #0x460]
71017cf880  str xzr,[x20, #0x458]
71017cf884  str x20,[x20, #0x498]
71017cf888  str xzr,[x20, #0x490]
71017cf88c  strh wzr,[x20, #0x4c8]
71017cf890  str xzr,[x20, #0x4c0]
71017cf894  str xzr,[x20, #0x4b8]
71017cf898  str xzr,[x20, #0x4b0]
71017cf89c  str xzr,[x20, #0x350]
71017cf8a0  str xzr,[x20, #0x360]
71017cf8a4  str xzr,[x20, #0x370]
71017cf8a8  str xzr,[x20, #0x380]
71017cf8ac  str xzr,[x20, #0x390]
71017cf8b0  str xzr,[x20, #0x3a0]
71017cf8b4  str xzr,[x20, #0x3b0]
71017cf8b8  str xzr,[x20, #0x3c0]
71017cf8bc  str xzr,[x20, #0x3d0]
71017cf8c0  str xzr,[x20, #0x3e0]
71017cf8c4  str x8,[x20, #0x3e8]
71017cf8c8  add x8,x20,#0x3fc
71017cf8cc  str xzr,[x20, #0x3f0]
71017cf8d0  str xzr,[x20, #0x330]
71017cf8d4  str xzr,[x20, #0x328]
71017cf8d8  str xzr,[x9]
71017cf8dc  add x9,x20,#0x434
71017cf8e0  str xzr,[x9]
71017cf8e4  add x9,x20,#0x42c
71017cf8e8  str xzr,[x9]
71017cf8ec  add x9,x20,#0x424
71017cf8f0  str xzr,[x9]
71017cf8f4  add x9,x20,#0x41c
71017cf8f8  str xzr,[x9]
71017cf8fc  add x9,x20,#0x414
71017cf900  str xzr,[x9]
71017cf904  add x9,x20,#0x40c
71017cf908  str xzr,[x9]
71017cf90c  add x9,x20,#0x404
71017cf910  str xzr,[x8]
71017cf914  mov w8,#0xffffffff
71017cf918  str wzr,[x20, #0x444]
71017cf91c  str xzr,[x9]
71017cf920  str w8,[x20, #0x448]
71017cf924  str wzr,[x20, #0x44c]
71017cf928  str w8,[x20, #0x450]
71017cf92c  strb wzr,[x20, #0x454]
71017cf930  str wzr,[x20, #0x3f8]
71017cf934  bl 0x71017ccff0
71017cf938  adrp x8,0x710593b000
71017cf93c  ldr x8,[x8, #0x580]
71017cf940  stp xzr,xzr,[x29, #-0x30]
71017cf944  ldr x2,[x8]
71017cf948  mov w8,#0x7300
71017cf94c  ldrsw x8,[x2, x8, LSL #0x0]
71017cf950  cmn w8,#0x1
71017cf954  b.eq 0x71017cf970
71017cf958  ldr x9,[x2, #0x72c0]
71017cf95c  cmp x9,x8
71017cf960  b.ls 0x71017cfbb0
71017cf964  mov w9,#0xcc0
71017cf968  madd x8,x8,x9,x2
71017cf96c  add x2,x8,#0xcc0
71017cf970  sub x0,x29,#0x28
71017cf974  sub x1,x29,#0x30
71017cf978  bl 0x71039c6140
71017cf97c  cbz w0,0x71017cf990
71017cf980  and x0,x0,#0xffffffff
71017cf984  bl 0x71039c26b0
71017cf988  mov x8,xzr
71017cf98c  b 0x71017cf994
71017cf990  ldur x8,[x29, #-0x30]
71017cf994  sub x8,x8,#0x80, LSL #12
71017cf998  str x8,[x20, #0x4b8]
71017cf99c  ldr x21,[x19]
71017cf9a0  str x20,[x19]
71017cf9a4  cbz x21,0x71017cfaac
71017cf9a8  ldr x0,[x21, #0x470]
71017cf9ac  cbz x0,0x71017cf9b8
71017cf9b0  str x0,[x21, #0x478]
71017cf9b4  bl 0x710392eb40
71017cf9b8  ldr x0,[x21, #0x458]
71017cf9bc  cbz x0,0x71017cf9c8
71017cf9c0  str x0,[x21, #0x460]
71017cf9c4  bl 0x710392eb40
71017cf9c8  ldr x0,[x21, #0x310]
71017cf9cc  add x8,x21,#0x2f0
71017cf9d0  cmp x8,x0
71017cf9d4  b.eq 0x71017cf9e8
71017cf9d8  cbz x0,0x71017cf9f4
71017cf9dc  ldr x8,[x0]
71017cf9e0  ldr x8,[x8, #0x28]
71017cf9e4  b 0x71017cf9f0
71017cf9e8  ldr x8,[x0]
71017cf9ec  ldr x8,[x8, #0x20]
71017cf9f0  blr x8
71017cf9f4  ldr x0,[x21, #0x2e0]
71017cf9f8  add x8,x21,#0x2c0
71017cf9fc  cmp x8,x0
71017cfa00  b.eq 0x71017cfa14
71017cfa04  cbz x0,0x71017cfa20
71017cfa08  ldr x8,[x0]
71017cfa0c  ldr x8,[x8, #0x28]
71017cfa10  b 0x71017cfa1c
71017cfa14  ldr x8,[x0]
71017cfa18  ldr x8,[x8, #0x20]
71017cfa1c  blr x8
71017cfa20  ldr x0,[x21, #0x2b0]
71017cfa24  add x8,x21,#0x290
71017cfa28  cmp x8,x0
71017cfa2c  b.eq 0x71017cfa40
71017cfa30  cbz x0,0x71017cfa4c
71017cfa34  ldr x8,[x0]
71017cfa38  ldr x8,[x8, #0x28]
71017cfa3c  b 0x71017cfa48
71017cfa40  ldr x8,[x0]
71017cfa44  ldr x8,[x8, #0x20]
71017cfa48  blr x8
71017cfa4c  ldr x0,[x21, #0x280]
71017cfa50  add x8,x21,#0x260
71017cfa54  cmp x8,x0
71017cfa58  b.eq 0x71017cfa6c
71017cfa5c  cbz x0,0x71017cfa78
71017cfa60  ldr x8,[x0]
71017cfa64  ldr x8,[x8, #0x28]
71017cfa68  b 0x71017cfa74
71017cfa6c  ldr x8,[x0]
71017cfa70  ldr x8,[x8, #0x20]
71017cfa74  blr x8
71017cfa78  ldr x0,[x21, #0x250]
71017cfa7c  add x8,x21,#0x230
71017cfa80  cmp x8,x0
71017cfa84  b.eq 0x71017cfa98
71017cfa88  cbz x0,0x71017cfaa4
71017cfa8c  ldr x8,[x0]
71017cfa90  ldr x8,[x8, #0x28]
71017cfa94  b 0x71017cfaa0
71017cfa98  ldr x8,[x0]
71017cfa9c  ldr x8,[x8, #0x20]
71017cfaa0  blr x8
71017cfaa4  mov x0,x21
71017cfaa8  bl 0x710392eb40
71017cfaac  ldr x0,[sp, #0x300]
71017cfab0  mov x8,sp
71017cfab4  add x8,x8,#0x2e0
71017cfab8  cmp x8,x0
71017cfabc  b.eq 0x71017cfad0
71017cfac0  cbz x0,0x71017cfadc
71017cfac4  ldr x8,[x0]
71017cfac8  ldr x8,[x8, #0x28]
71017cfacc  b 0x71017cfad8
71017cfad0  ldr x8,[x0]
71017cfad4  ldr x8,[x8, #0x20]
71017cfad8  blr x8
71017cfadc  ldr x0,[sp, #0x2d0]
71017cfae0  mov x8,sp
71017cfae4  add x8,x8,#0x2b0
71017cfae8  cmp x8,x0
71017cfaec  b.eq 0x71017cfb00
71017cfaf0  cbz x0,0x71017cfb0c
71017cfaf4  ldr x8,[x0]
71017cfaf8  ldr x8,[x8, #0x28]
71017cfafc  b 0x71017cfb08
71017cfb00  ldr x8,[x0]
71017cfb04  ldr x8,[x8, #0x20]
71017cfb08  blr x8
71017cfb0c  ldr x0,[sp, #0x2a0]
71017cfb10  mov x8,sp
71017cfb14  add x8,x8,#0x280
71017cfb18  cmp x8,x0
71017cfb1c  b.eq 0x71017cfb30
71017cfb20  cbz x0,0x71017cfb3c
71017cfb24  ldr x8,[x0]
71017cfb28  ldr x8,[x8, #0x28]
71017cfb2c  b 0x71017cfb38
71017cfb30  ldr x8,[x0]
71017cfb34  ldr x8,[x8, #0x20]
71017cfb38  blr x8
71017cfb3c  ldr x0,[sp, #0x270]
71017cfb40  mov x8,sp
71017cfb44  add x8,x8,#0x250
71017cfb48  cmp x8,x0
71017cfb4c  b.eq 0x71017cfb60
71017cfb50  cbz x0,0x71017cfb6c
71017cfb54  ldr x8,[x0]
71017cfb58  ldr x8,[x8, #0x28]
71017cfb5c  b 0x71017cfb68
71017cfb60  ldr x8,[x0]
71017cfb64  ldr x8,[x8, #0x20]
71017cfb68  blr x8
71017cfb6c  ldr x0,[sp, #0x240]
71017cfb70  mov x8,sp
71017cfb74  add x8,x8,#0x220
71017cfb78  cmp x8,x0
71017cfb7c  b.eq 0x71017cfb90
71017cfb80  cbz x0,0x71017cfb9c
71017cfb84  ldr x8,[x0]
71017cfb88  ldr x8,[x8, #0x28]
71017cfb8c  b 0x71017cfb98
71017cfb90  ldr x8,[x0]
71017cfb94  ldr x8,[x8, #0x20]
71017cfb98  blr x8
71017cfb9c  add sp,sp,#0x320
71017cfba0  ldp x29,x30,[sp, #0x20]
71017cfba4  ldp x20,x19,[sp, #0x10]
71017cfba8  ldp x28,x21,[sp], #0x30
71017cfbac  ret
71017cfbb0  bl 0x71039c2650
