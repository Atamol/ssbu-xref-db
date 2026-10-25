// addr:      71024eb610
// offset:    0x24eb610
// name:      FUN_71024eb610
// mangled:   
// size:      5204

71024eb610  sub sp,sp,#0xd0
71024eb614  stp x28,x27,[sp, #0x70]
71024eb618  stp x26,x25,[sp, #0x80]
71024eb61c  stp x24,x23,[sp, #0x90]
71024eb620  stp x22,x21,[sp, #0xa0]
71024eb624  stp x20,x19,[sp, #0xb0]
71024eb628  stp x29,x30,[sp, #0xc0]
71024eb62c  add x29,sp,#0xc0
71024eb630  mov x20,x1
71024eb634  str x0,[sp, #0x8]
71024eb638  mov w1,#0x170
71024eb63c  mov w0,#0x10
71024eb640  bl 0x710392e290
71024eb644  mov x21,x0
71024eb648  cbnz x0,0x71024eb694
71024eb64c  adrp x8,0x7105332000
71024eb650  ldr x0,[x8, #0xf00]
71024eb654  cbz x0,0x71024eb690
71024eb658  mov w8,#0x170
71024eb65c  str wzr,[sp, #0x48]
71024eb660  add x1,sp,#0x48
71024eb664  str x8,[sp, #0x60]
71024eb668  ldr x8,[x0]
71024eb66c  ldr x8,[x8, #0x30]
71024eb670  add x2,sp,#0x60
71024eb674  blr x8
71024eb678  tbz w0,#0x0,0x71024eb690
71024eb67c  mov w1,#0x170
71024eb680  mov w0,#0x10
71024eb684  bl 0x710392e290
71024eb688  mov x21,x0
71024eb68c  cbnz x0,0x71024eb694
71024eb690  mov x21,xzr
71024eb694  mov w8,#0xffffffff
71024eb698  stp x20,x8,[x21, #0x8]
71024eb69c  adrp x8,0x71050c0000
71024eb6a0  add x8,x8,#0x700
71024eb6a4  add x9,x21,#0x15e
71024eb6a8  str x8,[x21]
71024eb6ac  orr w8,wzr,#0x3f800000
71024eb6b0  mov x28,xzr
71024eb6b4  str w8,[x21, #0x30]
71024eb6b8  mov w8,#0x1
71024eb6bc  adrp x24,0x710532a000
71024eb6c0  adrp x23,0x710532a000
71024eb6c4  adrp x27,0x7105332000
71024eb6c8  mov w14,#0x48
71024eb6cc  stp xzr,xzr,[x21, #0x20]
71024eb6d0  str x8,[x21, #0x138]
71024eb6d4  stp xzr,xzr,[x21, #0x128]
71024eb6d8  str wzr,[x21, #0x140]
71024eb6dc  str xzr,[x21, #0x148]
71024eb6e0  stp xzr,xzr,[x21, #0x118]
71024eb6e4  stp xzr,xzr,[x21, #0x108]
71024eb6e8  stp xzr,xzr,[x21, #0xf8]
71024eb6ec  stp xzr,xzr,[x21, #0xe8]
71024eb6f0  stp xzr,xzr,[x21, #0xd8]
71024eb6f4  str xzr,[x9]
71024eb6f8  strh w8,[x21, #0x166]
71024eb6fc  stp xzr,xzr,[x21, #0x150]
71024eb700  stp xzr,xzr,[x21, #0xc8]
71024eb704  stp xzr,xzr,[x21, #0xb8]
71024eb708  stp xzr,xzr,[x21, #0xa8]
71024eb70c  stp xzr,xzr,[x21, #0x98]
71024eb710  stp xzr,xzr,[x21, #0x88]
71024eb714  stp xzr,xzr,[x21, #0x78]
71024eb718  stp xzr,xzr,[x21, #0x68]
71024eb71c  stp xzr,xzr,[x21, #0x58]
71024eb720  stp xzr,xzr,[x21, #0x48]
71024eb724  stp xzr,xzr,[x21, #0x38]
71024eb728  str x20,[sp, #0x10]
71024eb72c  b 0x71024eb740
71024eb730  adrp x27,0x7105332000
71024eb734  adrp x24,0x710532a000
71024eb738  mov w14,#0x48
71024eb73c  b 0x71024eb8ac
71024eb740  ldr x9,[x24, #0x868]
71024eb744  ldr x10,[x9]
71024eb748  ldr x8,[x23, #0x860]
71024eb74c  ldr x8,[x8]
71024eb750  ldr x9,[x10, #0x2e8]
71024eb754  ldr x10,[x10, #0x2f0]
71024eb758  cmp x9,x10
71024eb75c  b.eq 0x71024eb78c
71024eb760  ldr w12,[x8, #0x78]
71024eb764  mov w11,wzr
71024eb768  ldr w13,[x9]
71024eb76c  cmp w13,w12
71024eb770  b.ne 0x71024eb780
71024eb774  cmp x28,w11, UXTW 
71024eb778  b.eq 0x71024eb79c
71024eb77c  add w11,w11,#0x1
71024eb780  add x9,x9,#0x58
71024eb784  cmp x10,x9
71024eb788  b.ne 0x71024eb768
71024eb78c  mov x19,xzr
71024eb790  mov x26,xzr
71024eb794  mov x10,xzr
71024eb798  b 0x71024eb7a4
71024eb79c  ldr x10,[x9, #0x10]
71024eb7a0  ldp x26,x19,[x9, #0x48]
71024eb7a4  eor x9,x10,x20
71024eb7a8  tst x9,#0xffffffffff
71024eb7ac  b.ne 0x71024eb91c
71024eb7b0  add x8,x8,x28, LSL #0x2
71024eb7b4  mov w9,#0xcce0
71024eb7b8  movk w9,#0x3, LSL #16
71024eb7bc  ldr w22,[x8, x9, LSL #0x0]
71024eb7c0  orr w8,wzr,#0xffffff
71024eb7c4  cmp w22,w8
71024eb7c8  b.eq 0x71024eb91c
71024eb7cc  ldr x23,[x27, #0xf20]
71024eb7d0  ldr w8,[x23, #0x48]
71024eb7d4  cmp w8,w22
71024eb7d8  b.ls 0x71024eb82c
71024eb7dc  ldr x24,[x23]
71024eb7e0  mov x0,x24
71024eb7e4  bl 0x71039c1a40
71024eb7e8  ldr x8,[x23, #0x40]
71024eb7ec  mov w10,#0x48
71024eb7f0  madd x9,x22,x10,x8
71024eb7f4  ldrb w9,[x9, #0x8]
71024eb7f8  tbnz w9,#0x0,0x71024eb814
71024eb7fc  mov x0,x24
71024eb800  bl 0x71039c1a50
71024eb804  mov x0,x23
71024eb808  mov w1,w22
71024eb80c  bl 0x7103540d50
71024eb810  b 0x71024eb824
71024eb814  madd x0,x22,x10,x8
71024eb818  bl 0x71035432d0
71024eb81c  mov x0,x24
71024eb820  bl 0x71039c1a50
71024eb824  mov w14,#0x48
71024eb828  adrp x24,0x710532a000
71024eb82c  ldr x23,[x27, #0xf20]
71024eb830  ldr w8,[x23, #0x48]
71024eb834  cmp w8,w22
71024eb838  b.ls 0x71024eb8a8
71024eb83c  ldr x24,[x23]
71024eb840  mov x0,x24
71024eb844  mov x25,x14
71024eb848  bl 0x71039c1a40
71024eb84c  ldr x8,[x23, #0x40]
71024eb850  madd x23,x22,x25,x8
71024eb854  ldrb w27,[x23, #0x8]
71024eb858  mov x0,x24
71024eb85c  bl 0x71039c1a50
71024eb860  mov w25,wzr
71024eb864  tbz w27,#0x0,0x71024eb730
71024eb868  adrp x27,0x7105332000
71024eb86c  adrp x24,0x710532a000
71024eb870  mov w14,#0x48
71024eb874  cbz x23,0x71024eb8ac
71024eb878  ldr w8,[x23]
71024eb87c  orr w9,wzr,#0xffffff
71024eb880  cmp w8,w9
71024eb884  mov w8,#0xffffffff
71024eb888  mov w0,w8
71024eb88c  b.eq 0x71024eb89c
71024eb890  mov x0,x23
71024eb894  bl 0x7103543080
71024eb898  mov w14,#0x48
71024eb89c  cmp w0,#0x3
71024eb8a0  cset w25,eq
71024eb8a4  b 0x71024eb8ac
71024eb8a8  mov w25,wzr
71024eb8ac  ldr x23,[x27, #0xf20]
71024eb8b0  ldr w8,[x23, #0x48]
71024eb8b4  cmp w8,w22
71024eb8b8  b.ls 0x71024eb914
71024eb8bc  ldr x24,[x23]
71024eb8c0  mov x0,x24
71024eb8c4  mov x20,x27
71024eb8c8  mov x27,x14
71024eb8cc  bl 0x71039c1a40
71024eb8d0  ldr x8,[x23, #0x40]
71024eb8d4  madd x9,x22,x27,x8
71024eb8d8  ldrb w9,[x9, #0x8]
71024eb8dc  tbz w9,#0x0,0x71024eb8f0
71024eb8e0  mov w9,#0x48
71024eb8e4  madd x1,x22,x9,x8
71024eb8e8  mov x0,x23
71024eb8ec  bl 0x710353f5a0
71024eb8f0  mov x0,x24
71024eb8f4  bl 0x71039c1a50
71024eb8f8  mov x27,x20
71024eb8fc  ldr x20,[sp, #0x10]
71024eb900  adrp x23,0x710532a000
71024eb904  adrp x24,0x710532a000
71024eb908  mov w14,#0x48
71024eb90c  tbz w25,#0x0,0x71024eb91c
71024eb910  b 0x71024eba84
71024eb914  adrp x23,0x710532a000
71024eb918  cbnz w25,0x71024eba84
71024eb91c  add x28,x28,#0x1
71024eb920  cmp x28,#0x40
71024eb924  b.cc 0x71024eb740
71024eb928  mov x0,x21
71024eb92c  bl 0x71024e9c40
71024eb930  ldr x26,[sp, #0x8]
71024eb934  ldr w8,[x26, #0x408]
71024eb938  add x9,x26,#0x8
71024eb93c  str x21,[x9, x8, LSL #0x3]
71024eb940  ldr w8,[x26, #0x408]
71024eb944  ldr x19,[x9, x8, LSL #0x3]
71024eb948  ldr w8,[x19, #0x10]
71024eb94c  tbnz w8,#0x1f,0x71024ec8ac
71024eb950  ldr w8,[x26, #0x40c]
71024eb954  cbz w8,0x71024eb988
71024eb958  mov x9,xzr
71024eb95c  add x10,x26,#0x208
71024eb960  ldr x11,[x10, x9, LSL #0x3]
71024eb964  cbz x11,0x71024eb97c
71024eb968  ldr x12,[x11, #0x8]
71024eb96c  ldr x13,[x19, #0x150]
71024eb970  eor x12,x13,x12
71024eb974  tst x12,#0xffffffffff
71024eb978  b.eq 0x71024eba90
71024eb97c  add x9,x9,#0x1
71024eb980  cmp x9,x8
71024eb984  b.cc 0x71024eb960
71024eb988  mov w0,#0x10
71024eb98c  orr w1,wzr,#0x70
71024eb990  bl 0x710392e290
71024eb994  mov x20,x0
71024eb998  cbnz x0,0x71024eb9e4
71024eb99c  adrp x8,0x7105332000
71024eb9a0  ldr x0,[x8, #0xf00]
71024eb9a4  cbz x0,0x71024eb9e0
71024eb9a8  orr w8,wzr,#0x70
71024eb9ac  str wzr,[sp, #0x48]
71024eb9b0  add x1,sp,#0x48
71024eb9b4  str x8,[sp, #0x60]
71024eb9b8  ldr x8,[x0]
71024eb9bc  ldr x8,[x8, #0x30]
71024eb9c0  add x2,sp,#0x60
71024eb9c4  blr x8
71024eb9c8  tbz w0,#0x0,0x71024eb9e0
71024eb9cc  mov w0,#0x10
71024eb9d0  orr w1,wzr,#0x70
71024eb9d4  bl 0x710392e290
71024eb9d8  mov x20,x0
71024eb9dc  cbnz x0,0x71024eb9e4
71024eb9e0  mov x20,xzr
71024eb9e4  ldr x8,[x19, #0x150]
71024eb9e8  ldr w9,[x19, #0x10]
71024eb9ec  adrp x10,0x71050c0000
71024eb9f0  add x10,x10,#0x6e0
71024eb9f4  mov x21,x20
71024eb9f8  str w9,[x20, #0x10]
71024eb9fc  stp x10,x8,[x20]
71024eba00  str xzr,[x21, #0x18]!
71024eba04  stp xzr,xzr,[x20, #0x60]
71024eba08  stp xzr,xzr,[x20, #0x50]
71024eba0c  stp xzr,xzr,[x20, #0x40]
71024eba10  stp xzr,xzr,[x20, #0x30]
71024eba14  stp xzr,xzr,[x20, #0x20]
71024eba18  ldr x8,[x23, #0x860]
71024eba1c  ldr x8,[x8]
71024eba20  add x8,x8,x9, LSL #0x2
71024eba24  mov w9,#0xd0e0
71024eba28  movk w9,#0x3, LSL #16
71024eba2c  ldr w22,[x8, x9, LSL #0x0]
71024eba30  orr w8,wzr,#0xffffff
71024eba34  cmp w22,w8
71024eba38  b.eq 0x71024ebba4
71024eba3c  ldr x23,[x27, #0xf20]
71024eba40  ldr w8,[x23, #0x48]
71024eba44  cmp w8,w22
71024eba48  b.ls 0x71024ebad0
71024eba4c  ldr x24,[x23]
71024eba50  mov x0,x24
71024eba54  bl 0x71039c1a40
71024eba58  ldr x8,[x23, #0x40]
71024eba5c  mov w9,#0x48
71024eba60  madd x9,x22,x9,x8
71024eba64  ldrb w9,[x9, #0x8]
71024eba68  tbnz w9,#0x0,0x71024ebabc
71024eba6c  mov x0,x24
71024eba70  bl 0x71039c1a50
71024eba74  mov x0,x23
71024eba78  mov w1,w22
71024eba7c  bl 0x7103540d50
71024eba80  b 0x71024ebad0
71024eba84  str w28,[x21, #0x10]
71024eba88  stp x26,x19,[x21, #0x150]
71024eba8c  b 0x71024eb928
71024eba90  ldr x8,[x19, #0x158]
71024eba94  ands x1,x8,#0xffffffffff
71024eba98  str x11,[x19, #0x148]
71024eba9c  b.eq 0x71024ec8ac
71024ebaa0  ldr x0,[x11, #0x18]
71024ebaa4  cbz x0,0x71024ec8ac
71024ebaa8  ldr x8,[x0]
71024ebaac  ldr x8,[x8, #0x180]
71024ebab0  mov w2,wzr
71024ebab4  blr x8
71024ebab8  b 0x71024ec8ac
71024ebabc  mov w9,#0x48
71024ebac0  madd x0,x22,x9,x8
71024ebac4  bl 0x71035432d0
71024ebac8  mov x0,x24
71024ebacc  bl 0x71039c1a50
71024ebad0  ldr x19,[x27, #0xf20]
71024ebad4  ldr w8,[x19, #0x48]
71024ebad8  cmp w8,w22
71024ebadc  b.ls 0x71024ebb28
71024ebae0  ldr x24,[x19]
71024ebae4  mov x0,x24
71024ebae8  bl 0x71039c1a40
71024ebaec  ldr x8,[x19, #0x40]
71024ebaf0  mov w9,#0x48
71024ebaf4  madd x23,x22,x9,x8
71024ebaf8  ldrb w25,[x23, #0x8]
71024ebafc  mov x0,x24
71024ebb00  bl 0x71039c1a50
71024ebb04  mov w19,wzr
71024ebb08  tbz w25,#0x0,0x71024ebb40
71024ebb0c  cbz x23,0x71024ebb40
71024ebb10  ldr w8,[x23]
71024ebb14  orr w9,wzr,#0xffffff
71024ebb18  cmp w8,w9
71024ebb1c  b.ne 0x71024ebb30
71024ebb20  mov w0,#0xffffffff
71024ebb24  b 0x71024ebb38
71024ebb28  mov w19,wzr
71024ebb2c  b 0x71024ebb40
71024ebb30  mov x0,x23
71024ebb34  bl 0x7103543080
71024ebb38  cmp w0,#0x3
71024ebb3c  cset w19,eq
71024ebb40  ldr x23,[x27, #0xf20]
71024ebb44  ldr w8,[x23, #0x48]
71024ebb48  cmp w8,w22
71024ebb4c  b.hi 0x71024ebb64
71024ebb50  adrp x23,0x710532a000
71024ebb54  tbz w19,#0x0,0x71024ebba4
71024ebb58  ldr x8,[x21]
71024ebb5c  cbnz x8,0x71024ebbb8
71024ebb60  b 0x71024ebc48
71024ebb64  ldr x24,[x23]
71024ebb68  mov x0,x24
71024ebb6c  bl 0x71039c1a40
71024ebb70  ldr x8,[x23, #0x40]
71024ebb74  mov w9,#0x48
71024ebb78  madd x9,x22,x9,x8
71024ebb7c  ldrb w9,[x9, #0x8]
71024ebb80  tbz w9,#0x0,0x71024ebb94
71024ebb84  mov w9,#0x48
71024ebb88  madd x1,x22,x9,x8
71024ebb8c  mov x0,x23
71024ebb90  bl 0x710353f5a0
71024ebb94  mov x0,x24
71024ebb98  bl 0x71039c1a50
71024ebb9c  adrp x23,0x710532a000
71024ebba0  tbnz w19,#0x0,0x71024ebb58
71024ebba4  mov w8,#0xffffffff
71024ebba8  str xzr,[x20, #0x8]
71024ebbac  str w8,[x20, #0x10]
71024ebbb0  ldr x8,[x21]
71024ebbb4  cbz x8,0x71024ebc48
71024ebbb8  mov x0,x21
71024ebbbc  bl 0x71035598f0
71024ebbc0  ldr x22,[x20, #0x20]
71024ebbc4  stp xzr,xzr,[x20, #0x18]
71024ebbc8  cbz x22,0x71024ebc44
71024ebbcc  add x8,x22,#0x8
71024ebbd0  ldaxr x9,[x8]
71024ebbd4  sub x10,x9,#0x1
71024ebbd8  stlxr w11,x10,[x8]
71024ebbdc  cbnz w11,0x71024ebbd0
71024ebbe0  cbnz x9,0x71024ebbfc
71024ebbe4  ldr x8,[x22]
71024ebbe8  ldr x8,[x8, #0x10]
71024ebbec  mov x0,x22
71024ebbf0  blr x8
71024ebbf4  mov x0,x22
71024ebbf8  bl 0x71039c2670
71024ebbfc  ldr x22,[x20, #0x20]
71024ebc00  stp xzr,xzr,[x21]
71024ebc04  cbz x22,0x71024ebc48
71024ebc08  add x8,x22,#0x8
71024ebc0c  ldaxr x9,[x8]
71024ebc10  sub x10,x9,#0x1
71024ebc14  stlxr w11,x10,[x8]
71024ebc18  cbnz w11,0x71024ebc0c
71024ebc1c  cbnz x9,0x71024ebc48
71024ebc20  ldr x8,[x22]
71024ebc24  ldr x8,[x8, #0x10]
71024ebc28  mov x0,x22
71024ebc2c  blr x8
71024ebc30  mov x0,x22
71024ebc34  bl 0x71039c2670
71024ebc38  ldr w8,[x20, #0x10]
71024ebc3c  tbz w8,#0x1f,0x71024ebc50
71024ebc40  b 0x71024ec84c
71024ebc44  stp xzr,xzr,[x21]
71024ebc48  ldr w8,[x20, #0x10]
71024ebc4c  tbnz w8,#0x1f,0x71024ec84c
71024ebc50  ldr x9,[x23, #0x860]
71024ebc54  ldr x9,[x9]
71024ebc58  add x8,x9,x8, LSL #0x2
71024ebc5c  mov w9,#0xd0e0
71024ebc60  movk w9,#0x3, LSL #16
71024ebc64  orr w19,wzr,#0xffffff
71024ebc68  ldr w22,[x8, x9, LSL #0x0]
71024ebc6c  cmp w22,w19
71024ebc70  str w22,[sp, #0x38]
71024ebc74  b.eq 0x71024ebcd4
71024ebc78  ldr x23,[x27, #0xf20]
71024ebc7c  ldr w8,[x23, #0x48]
71024ebc80  cmp w8,w22
71024ebc84  b.ls 0x71024ebcd4
71024ebc88  ldr x24,[x23]
71024ebc8c  mov x0,x24
71024ebc90  bl 0x71039c1a40
71024ebc94  ldr x8,[x23, #0x40]
71024ebc98  mov w9,#0x48
71024ebc9c  madd x9,x22,x9,x8
71024ebca0  ldrb w9,[x9, #0x8]
71024ebca4  tbnz w9,#0x0,0x71024ebcc0
71024ebca8  mov x0,x24
71024ebcac  bl 0x71039c1a50
71024ebcb0  mov x0,x23
71024ebcb4  mov w1,w22
71024ebcb8  bl 0x7103540d50
71024ebcbc  b 0x71024ebcd4
71024ebcc0  mov w9,#0x48
71024ebcc4  madd x0,x22,x9,x8
71024ebcc8  bl 0x71035432d0
71024ebccc  mov x0,x24
71024ebcd0  bl 0x71039c1a50
71024ebcd4  adrp x2,0x7104328000
71024ebcd8  add x2,x2,#0x86f
71024ebcdc  add x0,sp,#0x60
71024ebce0  add x1,sp,#0x38
71024ebce4  bl 0x710353e1d0
71024ebce8  ldr w22,[sp, #0x60]
71024ebcec  cmp w22,w19
71024ebcf0  b.eq 0x71024ebd08
71024ebcf4  ldr x0,[x27, #0xf20]
71024ebcf8  mov w1,w22
71024ebcfc  bl 0x7103540b10
71024ebd00  orr w8,wzr,#0xffffff
71024ebd04  str w8,[sp, #0x60]
71024ebd08  ldr x8,[x27, #0xf20]
71024ebd0c  ldr x8,[x8, #0x78]
71024ebd10  orr w9,wzr,#0xffffff
71024ebd14  cmp w22,w9
71024ebd18  b.eq 0x71024ebd44
71024ebd1c  ldr x9,[x8]
71024ebd20  ldr x10,[x9, #0x40]
71024ebd24  ldr w10,[x10, #0x4]
71024ebd28  cmp w10,w22
71024ebd2c  b.ls 0x71024ebd44
71024ebd30  ldr x9,[x9, #0x60]
71024ebd34  lsl x10,x22,#0x5
71024ebd38  ldr x9,[x9, x10, LSL #0x0]
71024ebd3c  and x9,x9,#0xffffffffff
71024ebd40  b 0x71024ebd48
71024ebd44  mov x9,xzr
71024ebd48  ldr x19,[x8, #0x8]
71024ebd4c  str x9,[sp, #0x60]
71024ebd50  ldr x8,[x19, #0x8]
71024ebd54  ldr x1,[x19, #0x20]
71024ebd58  ldr w2,[x8, #0x8]
71024ebd5c  adrp x4,0x7103542000
71024ebd60  add x4,x4,#0x240
71024ebd64  add x0,sp,#0x60
71024ebd68  mov w3,#0x8
71024ebd6c  adrp x23,0x710532a000
71024ebd70  bl 0x71039c2630
71024ebd74  orr w8,wzr,#0xffffff
71024ebd78  cbz x0,0x71024ebda0
71024ebd7c  ldr x9,[x0]
71024ebd80  lsr x9,x9,#0x28
71024ebd84  cmp w9,w8
71024ebd88  b.eq 0x71024ebda0
71024ebd8c  ldr x8,[x19, #0x8]
71024ebd90  ldr w8,[x8, #0x4]
71024ebd94  cmp w8,w9
71024ebd98  orr w8,wzr,#0xffffff
71024ebd9c  csel w8,w9,w8,hi
71024ebda0  add x0,sp,#0x60
71024ebda4  add x1,sp,#0x48
71024ebda8  mov w2,#0x4
71024ebdac  str w8,[sp, #0x48]
71024ebdb0  bl 0x71035c2890
71024ebdb4  ldp x8,x9,[sp, #0x60]
71024ebdb8  stp xzr,xzr,[sp, #0x60]
71024ebdbc  ldr x22,[x20, #0x20]
71024ebdc0  stp x8,x9,[x20, #0x18]
71024ebdc4  cbz x22,0x71024ebdf8
71024ebdc8  add x8,x22,#0x8
71024ebdcc  ldaxr x9,[x8]
71024ebdd0  sub x10,x9,#0x1
71024ebdd4  stlxr w11,x10,[x8]
71024ebdd8  cbnz w11,0x71024ebdcc
71024ebddc  cbnz x9,0x71024ebdf8
71024ebde0  ldr x8,[x22]
71024ebde4  ldr x8,[x8, #0x10]
71024ebde8  mov x0,x22
71024ebdec  blr x8
71024ebdf0  mov x0,x22
71024ebdf4  bl 0x71039c2670
71024ebdf8  ldr x22,[sp, #0x68]
71024ebdfc  cbz x22,0x71024ebe30
71024ebe00  add x8,x22,#0x8
71024ebe04  ldaxr x9,[x8]
71024ebe08  sub x10,x9,#0x1
71024ebe0c  stlxr w11,x10,[x8]
71024ebe10  cbnz w11,0x71024ebe04
71024ebe14  cbnz x9,0x71024ebe30
71024ebe18  ldr x8,[x22]
71024ebe1c  ldr x8,[x8, #0x10]
71024ebe20  mov x0,x22
71024ebe24  blr x8
71024ebe28  mov x0,x22
71024ebe2c  bl 0x71039c2670
71024ebe30  ldr w19,[sp, #0x38]
71024ebe34  orr w8,wzr,#0xffffff
71024ebe38  cmp w19,w8
71024ebe3c  b.eq 0x71024ebe94
71024ebe40  ldr x22,[x27, #0xf20]
71024ebe44  ldr w8,[x22, #0x48]
71024ebe48  cmp w8,w19
71024ebe4c  b.ls 0x71024ebe8c
71024ebe50  ldr x23,[x22]
71024ebe54  mov x0,x23
71024ebe58  bl 0x71039c1a40
71024ebe5c  ldr x8,[x22, #0x40]
71024ebe60  mov w9,#0x48
71024ebe64  madd x9,x19,x9,x8
71024ebe68  ldrb w9,[x9, #0x8]
71024ebe6c  tbz w9,#0x0,0x71024ebe80
71024ebe70  mov w9,#0x48
71024ebe74  madd x1,x19,x9,x8
71024ebe78  mov x0,x22
71024ebe7c  bl 0x710353f5a0
71024ebe80  mov x0,x23
71024ebe84  bl 0x71039c1a50
71024ebe88  adrp x23,0x710532a000
71024ebe8c  orr w8,wzr,#0xffffff
71024ebe90  str w8,[sp, #0x38]
71024ebe94  mov x28,x20
71024ebe98  str xzr,[x28, #0x28]!
71024ebe9c  ldr x22,[x28, #0x8]
71024ebea0  str xzr,[x28, #0x8]
71024ebea4  cbz x22,0x71024ebed8
71024ebea8  add x8,x22,#0x8
71024ebeac  ldaxr x9,[x8]
71024ebeb0  sub x10,x9,#0x1
71024ebeb4  stlxr w11,x10,[x8]
71024ebeb8  cbnz w11,0x71024ebeac
71024ebebc  cbnz x9,0x71024ebed8
71024ebec0  ldr x8,[x22]
71024ebec4  ldr x8,[x8, #0x10]
71024ebec8  mov x0,x22
71024ebecc  blr x8
71024ebed0  mov x0,x22
71024ebed4  bl 0x71039c2670
71024ebed8  mov x27,x20
71024ebedc  str xzr,[x27, #0x38]!
71024ebee0  ldr x22,[x27, #0x8]
71024ebee4  str xzr,[x27, #0x8]
71024ebee8  cbz x22,0x71024ebf1c
71024ebeec  add x8,x22,#0x8
71024ebef0  ldaxr x9,[x8]
71024ebef4  sub x10,x9,#0x1
71024ebef8  stlxr w11,x10,[x8]
71024ebefc  cbnz w11,0x71024ebef0
71024ebf00  cbnz x9,0x71024ebf1c
71024ebf04  ldr x8,[x22]
71024ebf08  ldr x8,[x8, #0x10]
71024ebf0c  mov x0,x22
71024ebf10  blr x8
71024ebf14  mov x0,x22
71024ebf18  bl 0x71039c2670
71024ebf1c  mov x25,x20
71024ebf20  str xzr,[x25, #0x48]!
71024ebf24  ldr x22,[x25, #0x8]
71024ebf28  str xzr,[x25, #0x8]
71024ebf2c  cbz x22,0x71024ebf60
71024ebf30  add x8,x22,#0x8
71024ebf34  ldaxr x9,[x8]
71024ebf38  sub x10,x9,#0x1
71024ebf3c  stlxr w11,x10,[x8]
71024ebf40  cbnz w11,0x71024ebf34
71024ebf44  cbnz x9,0x71024ebf60
71024ebf48  ldr x8,[x22]
71024ebf4c  ldr x8,[x8, #0x10]
71024ebf50  mov x0,x22
71024ebf54  blr x8
71024ebf58  mov x0,x22
71024ebf5c  bl 0x71039c2670
71024ebf60  mov x26,x20
71024ebf64  str xzr,[x26, #0x58]!
71024ebf68  ldr x22,[x26, #0x8]
71024ebf6c  str xzr,[x26, #0x8]
71024ebf70  cbz x22,0x71024ebfa4
71024ebf74  add x8,x22,#0x8
71024ebf78  ldaxr x9,[x8]
71024ebf7c  sub x10,x9,#0x1
71024ebf80  stlxr w11,x10,[x8]
71024ebf84  cbnz w11,0x71024ebf78
71024ebf88  cbnz x9,0x71024ebfa4
71024ebf8c  ldr x8,[x22]
71024ebf90  ldr x8,[x8, #0x10]
71024ebf94  mov x0,x22
71024ebf98  blr x8
71024ebf9c  mov x0,x22
71024ebfa0  bl 0x71039c2670
71024ebfa4  ldr x8,[x23, #0x860]
71024ebfa8  ldr w9,[x20, #0x10]
71024ebfac  ldr x8,[x8]
71024ebfb0  add x8,x8,x9, LSL #0x2
71024ebfb4  mov w9,#0xd1e0
71024ebfb8  movk w9,#0x3, LSL #16
71024ebfbc  ldr w22,[x8, x9, LSL #0x0]
71024ebfc0  orr w8,wzr,#0xffffff
71024ebfc4  cmp w22,w8
71024ebfc8  b.eq 0x71024ec82c
71024ebfcc  adrp x9,0x7105332000
71024ebfd0  ldr x23,[x9, #0xf20]
71024ebfd4  ldr w8,[x23, #0x48]
71024ebfd8  cmp w8,w22
71024ebfdc  b.ls 0x71024ec030
71024ebfe0  ldr x24,[x23]
71024ebfe4  mov x0,x24
71024ebfe8  bl 0x71039c1a40
71024ebfec  ldr x8,[x23, #0x40]
71024ebff0  mov w9,#0x48
71024ebff4  madd x9,x22,x9,x8
71024ebff8  ldrb w9,[x9, #0x8]
71024ebffc  tbnz w9,#0x0,0x71024ec018
71024ec000  mov x0,x24
71024ec004  bl 0x71039c1a50
71024ec008  mov x0,x23
71024ec00c  mov w1,w22
71024ec010  bl 0x7103540d50
71024ec014  b 0x71024ec02c
71024ec018  mov w9,#0x48
71024ec01c  madd x0,x22,x9,x8
71024ec020  bl 0x71035432d0
71024ec024  mov x0,x24
71024ec028  bl 0x71039c1a50
71024ec02c  adrp x9,0x7105332000
71024ec030  ldr x19,[x9, #0xf20]
71024ec034  ldr w8,[x19, #0x48]
71024ec038  cmp w8,w22
71024ec03c  b.ls 0x71024ec0a8
71024ec040  ldr x24,[x19]
71024ec044  mov x0,x24
71024ec048  str x28,[sp, #0x10]
71024ec04c  mov x28,x27
71024ec050  mov x27,x26
71024ec054  mov x26,x25
71024ec058  bl 0x71039c1a40
71024ec05c  ldr x8,[x19, #0x40]
71024ec060  mov w9,#0x48
71024ec064  madd x23,x22,x9,x8
71024ec068  ldrb w25,[x23, #0x8]
71024ec06c  mov x0,x24
71024ec070  bl 0x71039c1a50
71024ec074  mov w19,wzr
71024ec078  tbz w25,#0x0,0x71024ec0b0
71024ec07c  mov x25,x26
71024ec080  mov x26,x27
71024ec084  mov x27,x28
71024ec088  ldr x28,[sp, #0x10]
71024ec08c  cbz x23,0x71024ec0d4
71024ec090  ldr w8,[x23]
71024ec094  orr w9,wzr,#0xffffff
71024ec098  cmp w8,w9
71024ec09c  b.ne 0x71024ec0c4
71024ec0a0  mov w0,#0xffffffff
71024ec0a4  b 0x71024ec0cc
71024ec0a8  mov w19,wzr
71024ec0ac  b 0x71024ec0d4
71024ec0b0  mov x25,x26
71024ec0b4  mov x26,x27
71024ec0b8  mov x27,x28
71024ec0bc  ldr x28,[sp, #0x10]
71024ec0c0  b 0x71024ec0d4
71024ec0c4  mov x0,x23
71024ec0c8  bl 0x7103543080
71024ec0cc  cmp w0,#0x3
71024ec0d0  cset w19,eq
71024ec0d4  adrp x8,0x7105332000
71024ec0d8  ldr x23,[x8, #0xf20]
71024ec0dc  ldr w8,[x23, #0x48]
71024ec0e0  cmp w8,w22
71024ec0e4  b.ls 0x71024ec128
71024ec0e8  ldr x24,[x23]
71024ec0ec  mov x0,x24
71024ec0f0  bl 0x71039c1a40
71024ec0f4  ldr x8,[x23, #0x40]
71024ec0f8  mov w9,#0x48
71024ec0fc  madd x9,x22,x9,x8
71024ec100  ldrb w9,[x9, #0x8]
71024ec104  tbz w9,#0x0,0x71024ec118
71024ec108  mov w9,#0x48
71024ec10c  madd x1,x22,x9,x8
71024ec110  mov x0,x23
71024ec114  bl 0x710353f5a0
71024ec118  mov x0,x24
71024ec11c  bl 0x71039c1a50
71024ec120  tbnz w19,#0x0,0x71024ec12c
71024ec124  b 0x71024ec82c
71024ec128  cbz w19,0x71024ec82c
71024ec12c  mov w0,#0x10
71024ec130  orr w1,wzr,#0x30
71024ec134  bl 0x710392e290
71024ec138  mov x22,x0
71024ec13c  cbnz x0,0x71024ec188
71024ec140  adrp x8,0x7105332000
71024ec144  ldr x0,[x8, #0xf00]
71024ec148  cbz x0,0x71024ec184
71024ec14c  orr w8,wzr,#0x30
71024ec150  str wzr,[sp, #0x48]
71024ec154  add x1,sp,#0x48
71024ec158  str x8,[sp, #0x60]
71024ec15c  ldr x8,[x0]
71024ec160  ldr x8,[x8, #0x30]
71024ec164  add x2,sp,#0x60
71024ec168  blr x8
71024ec16c  tbz w0,#0x0,0x71024ec184
71024ec170  mov w0,#0x10
71024ec174  orr w1,wzr,#0x30
71024ec178  bl 0x710392e290
71024ec17c  mov x22,x0
71024ec180  cbnz x0,0x71024ec188
71024ec184  mov x22,xzr
71024ec188  adrp x8,0x7105239000
71024ec18c  add x8,x8,#0x200
71024ec190  mov w0,#0x10
71024ec194  str x8,[x22]
71024ec198  orr w8,wzr,#0x3f800000
71024ec19c  mov w1,#0x20
71024ec1a0  stp xzr,xzr,[x22, #0x18]
71024ec1a4  str w8,[x22, #0x28]
71024ec1a8  stp xzr,xzr,[x22, #0x8]
71024ec1ac  bl 0x710392e290
71024ec1b0  cbnz x0,0x71024ec1f8
71024ec1b4  adrp x8,0x7105332000
71024ec1b8  ldr x0,[x8, #0xf00]
71024ec1bc  cbz x0,0x71024ec1f4
71024ec1c0  mov w8,#0x20
71024ec1c4  str wzr,[sp, #0x48]
71024ec1c8  add x1,sp,#0x48
71024ec1cc  str x8,[sp, #0x60]
71024ec1d0  ldr x8,[x0]
71024ec1d4  ldr x8,[x8, #0x30]
71024ec1d8  add x2,sp,#0x60
71024ec1dc  blr x8
71024ec1e0  tbz w0,#0x0,0x71024ec1f4
71024ec1e4  mov w0,#0x10
71024ec1e8  mov w1,#0x20
71024ec1ec  bl 0x710392e290
71024ec1f0  cbnz x0,0x71024ec1f8
71024ec1f4  mov x0,xzr
71024ec1f8  adrp x8,0x7105239000
71024ec1fc  add x8,x8,#0x240
71024ec200  stp x8,xzr,[x0]
71024ec204  stp xzr,x22,[x0, #0x10]
71024ec208  str x22,[x20, #0x28]
71024ec20c  ldr x22,[x20, #0x30]
71024ec210  str x0,[x20, #0x30]
71024ec214  cbz x22,0x71024ec248
71024ec218  add x8,x22,#0x8
71024ec21c  ldaxr x9,[x8]
71024ec220  sub x10,x9,#0x1
71024ec224  stlxr w11,x10,[x8]
71024ec228  cbnz w11,0x71024ec21c
71024ec22c  cbnz x9,0x71024ec248
71024ec230  ldr x8,[x22]
71024ec234  ldr x8,[x8, #0x10]
71024ec238  mov x0,x22
71024ec23c  blr x8
71024ec240  mov x0,x22
71024ec244  bl 0x71039c2670
71024ec248  mov w1,#0xc8
71024ec24c  mov w0,#0x10
71024ec250  bl 0x710392e290
71024ec254  mov x23,x0
71024ec258  cbnz x0,0x71024ec2a4
71024ec25c  adrp x8,0x7105332000
71024ec260  ldr x0,[x8, #0xf00]
71024ec264  cbz x0,0x71024ec2a0
71024ec268  mov w8,#0xc8
71024ec26c  str wzr,[sp, #0x48]
71024ec270  add x1,sp,#0x48
71024ec274  str x8,[sp, #0x60]
71024ec278  ldr x8,[x0]
71024ec27c  ldr x8,[x8, #0x30]
71024ec280  add x2,sp,#0x60
71024ec284  blr x8
71024ec288  tbz w0,#0x0,0x71024ec2a0
71024ec28c  mov w1,#0xc8
71024ec290  mov w0,#0x10
71024ec294  bl 0x710392e290
71024ec298  mov x23,x0
71024ec29c  cbnz x0,0x71024ec2a4
71024ec2a0  mov x23,xzr
71024ec2a4  add x22,x23,#0x18
71024ec2a8  adrp x8,0x7104f76000
71024ec2ac  add x8,x8,#0x0
71024ec2b0  mov x0,x22
71024ec2b4  stp xzr,xzr,[x23, #0x8]
71024ec2b8  str x8,[x23]
71024ec2bc  bl 0x710367adf0
71024ec2c0  str x22,[x20, #0x38]
71024ec2c4  ldr x22,[x20, #0x40]
71024ec2c8  str x23,[x20, #0x40]
71024ec2cc  cbz x22,0x71024ec300
71024ec2d0  add x8,x22,#0x8
71024ec2d4  ldaxr x9,[x8]
71024ec2d8  sub x10,x9,#0x1
71024ec2dc  stlxr w11,x10,[x8]
71024ec2e0  cbnz w11,0x71024ec2d4
71024ec2e4  cbnz x9,0x71024ec300
71024ec2e8  ldr x8,[x22]
71024ec2ec  ldr x8,[x8, #0x10]
71024ec2f0  mov x0,x22
71024ec2f4  blr x8
71024ec2f8  mov x0,x22
71024ec2fc  bl 0x71039c2670
71024ec300  mov w1,#0xa8
71024ec304  mov w0,#0x10
71024ec308  bl 0x710392e290
71024ec30c  mov x23,x0
71024ec310  cbnz x0,0x71024ec35c
71024ec314  adrp x8,0x7105332000
71024ec318  ldr x0,[x8, #0xf00]
71024ec31c  cbz x0,0x71024ec358
71024ec320  mov w8,#0xa8
71024ec324  str wzr,[sp, #0x48]
71024ec328  add x1,sp,#0x48
71024ec32c  str x8,[sp, #0x60]
71024ec330  ldr x8,[x0]
71024ec334  ldr x8,[x8, #0x30]
71024ec338  add x2,sp,#0x60
71024ec33c  blr x8
71024ec340  tbz w0,#0x0,0x71024ec358
71024ec344  mov w1,#0xa8
71024ec348  mov w0,#0x10
71024ec34c  bl 0x710392e290
71024ec350  mov x23,x0
71024ec354  cbnz x0,0x71024ec35c
71024ec358  mov x23,xzr
71024ec35c  add x22,x23,#0x18
71024ec360  adrp x8,0x71050c0000
71024ec364  add x8,x8,#0x538
71024ec368  mov x0,x22
71024ec36c  stp xzr,xzr,[x23, #0x8]
71024ec370  str x8,[x23]
71024ec374  bl 0x7103680c00
71024ec378  str x22,[x20, #0x48]
71024ec37c  ldr x22,[x20, #0x50]
71024ec380  str x23,[x20, #0x50]
71024ec384  cbz x22,0x71024ec3b8
71024ec388  add x8,x22,#0x8
71024ec38c  ldaxr x9,[x8]
71024ec390  sub x10,x9,#0x1
71024ec394  stlxr w11,x10,[x8]
71024ec398  cbnz w11,0x71024ec38c
71024ec39c  cbnz x9,0x71024ec3b8
71024ec3a0  ldr x8,[x22]
71024ec3a4  ldr x8,[x8, #0x10]
71024ec3a8  mov x0,x22
71024ec3ac  blr x8
71024ec3b0  mov x0,x22
71024ec3b4  bl 0x71039c2670
71024ec3b8  mov w1,#0xa8
71024ec3bc  mov w0,#0x10
71024ec3c0  bl 0x710392e290
71024ec3c4  mov x23,x0
71024ec3c8  cbnz x0,0x71024ec414
71024ec3cc  adrp x8,0x7105332000
71024ec3d0  ldr x0,[x8, #0xf00]
71024ec3d4  cbz x0,0x71024ec410
71024ec3d8  mov w8,#0xa8
71024ec3dc  str wzr,[sp, #0x48]
71024ec3e0  add x1,sp,#0x48
71024ec3e4  str x8,[sp, #0x60]
71024ec3e8  ldr x8,[x0]
71024ec3ec  ldr x8,[x8, #0x30]
71024ec3f0  add x2,sp,#0x60
71024ec3f4  blr x8
71024ec3f8  tbz w0,#0x0,0x71024ec410
71024ec3fc  mov w1,#0xa8
71024ec400  mov w0,#0x10
71024ec404  bl 0x710392e290
71024ec408  mov x23,x0
71024ec40c  cbnz x0,0x71024ec414
71024ec410  mov x23,xzr
71024ec414  add x22,x23,#0x18
71024ec418  adrp x8,0x71050c0000
71024ec41c  add x8,x8,#0x570
71024ec420  mov x0,x22
71024ec424  stp xzr,xzr,[x23, #0x8]
71024ec428  str x8,[x23]
71024ec42c  bl 0x710367c690
71024ec430  str x22,[x20, #0x58]
71024ec434  ldr x22,[x20, #0x60]
71024ec438  adrp x19,0x710532a000
71024ec43c  str x23,[x20, #0x60]
71024ec440  cbz x22,0x71024ec474
71024ec444  add x8,x22,#0x8
71024ec448  ldaxr x9,[x8]
71024ec44c  sub x10,x9,#0x1
71024ec450  stlxr w11,x10,[x8]
71024ec454  cbnz w11,0x71024ec448
71024ec458  cbnz x9,0x71024ec474
71024ec45c  ldr x8,[x22]
71024ec460  ldr x8,[x8, #0x10]
71024ec464  mov x0,x22
71024ec468  blr x8
71024ec46c  mov x0,x22
71024ec470  bl 0x71039c2670
71024ec474  ldr x8,[x20, #0x18]
71024ec478  str x8,[sp, #0x60]
71024ec47c  ldr x8,[x20, #0x20]
71024ec480  str x8,[sp, #0x68]
71024ec484  cbz x8,0x71024ec49c
71024ec488  add x8,x8,#0x8
71024ec48c  ldxr x9,[x8]
71024ec490  add x9,x9,#0x1
71024ec494  stxr w10,x9,[x8]
71024ec498  cbnz w10,0x71024ec48c
71024ec49c  ldr x8,[x19, #0x860]
71024ec4a0  ldr w9,[x20, #0x10]
71024ec4a4  ldr x8,[x8]
71024ec4a8  add x8,x8,x9, LSL #0x2
71024ec4ac  mov w9,#0xd1e0
71024ec4b0  movk w9,#0x3, LSL #16
71024ec4b4  ldr w22,[x8, x9, LSL #0x0]
71024ec4b8  orr w8,wzr,#0xffffff
71024ec4bc  cmp w22,w8
71024ec4c0  str w22,[sp, #0x58]
71024ec4c4  b.eq 0x71024ec528
71024ec4c8  adrp x8,0x7105332000
71024ec4cc  ldr x23,[x8, #0xf20]
71024ec4d0  ldr w8,[x23, #0x48]
71024ec4d4  cmp w8,w22
71024ec4d8  b.ls 0x71024ec528
71024ec4dc  ldr x24,[x23]
71024ec4e0  mov x0,x24
71024ec4e4  bl 0x71039c1a40
71024ec4e8  ldr x8,[x23, #0x40]
71024ec4ec  mov w9,#0x48
71024ec4f0  madd x9,x22,x9,x8
71024ec4f4  ldrb w9,[x9, #0x8]
71024ec4f8  tbnz w9,#0x0,0x71024ec514
71024ec4fc  mov x0,x24
71024ec500  bl 0x71039c1a50
71024ec504  mov x0,x23
71024ec508  mov w1,w22
71024ec50c  bl 0x7103540d50
71024ec510  b 0x71024ec528
71024ec514  mov w9,#0x48
71024ec518  madd x0,x22,x9,x8
71024ec51c  bl 0x71035432d0
71024ec520  mov x0,x24
71024ec524  bl 0x71039c1a50
71024ec528  ldr x8,[x20, #0x28]
71024ec52c  str x8,[sp, #0x48]
71024ec530  ldr x8,[x20, #0x30]
71024ec534  str x8,[sp, #0x50]
71024ec538  cbz x8,0x71024ec550
71024ec53c  add x8,x8,#0x8
71024ec540  ldxr x9,[x8]
71024ec544  add x9,x9,#0x1
71024ec548  stxr w10,x9,[x8]
71024ec54c  cbnz w10,0x71024ec540
71024ec550  ldr x8,[x20, #0x38]
71024ec554  str x8,[sp, #0x38]
71024ec558  ldr x8,[x20, #0x40]
71024ec55c  str x8,[sp, #0x40]
71024ec560  cbz x8,0x71024ec578
71024ec564  add x8,x8,#0x8
71024ec568  ldxr x9,[x8]
71024ec56c  add x9,x9,#0x1
71024ec570  stxr w10,x9,[x8]
71024ec574  cbnz w10,0x71024ec568
71024ec578  ldr x8,[x20, #0x48]
71024ec57c  str x8,[sp, #0x28]
71024ec580  ldr x8,[x20, #0x50]
71024ec584  str x8,[sp, #0x30]
71024ec588  cbz x8,0x71024ec5a0
71024ec58c  add x8,x8,#0x8
71024ec590  ldxr x9,[x8]
71024ec594  add x9,x9,#0x1
71024ec598  stxr w10,x9,[x8]
71024ec59c  cbnz w10,0x71024ec590
71024ec5a0  ldp x8,x22,[x20, #0x58]
71024ec5a4  stp x8,x22,[sp, #0x18]
71024ec5a8  cbz x22,0x71024ec614
71024ec5ac  add x19,x22,#0x8
71024ec5b0  ldxr x8,[x19]
71024ec5b4  add x8,x8,#0x1
71024ec5b8  stxr w9,x8,[x19]
71024ec5bc  cbnz w9,0x71024ec5b0
71024ec5c0  add x0,sp,#0x60
71024ec5c4  add x1,sp,#0x58
71024ec5c8  add x2,sp,#0x48
71024ec5cc  add x3,sp,#0x38
71024ec5d0  add x4,sp,#0x28
71024ec5d4  add x5,sp,#0x18
71024ec5d8  bl 0x71024cc230
71024ec5dc  ldaxr x8,[x19]
71024ec5e0  sub x9,x8,#0x1
71024ec5e4  stlxr w10,x9,[x19]
71024ec5e8  cbnz w10,0x71024ec5dc
71024ec5ec  cbnz x8,0x71024ec630
71024ec5f0  ldr x8,[x22]
71024ec5f4  ldr x8,[x8, #0x10]
71024ec5f8  mov x0,x22
71024ec5fc  blr x8
71024ec600  mov x0,x22
71024ec604  bl 0x71039c2670
71024ec608  ldr x22,[sp, #0x30]
71024ec60c  cbnz x22,0x71024ec638
71024ec610  b 0x71024ec668
71024ec614  add x0,sp,#0x60
71024ec618  add x1,sp,#0x58
71024ec61c  add x2,sp,#0x48
71024ec620  add x3,sp,#0x38
71024ec624  add x4,sp,#0x28
71024ec628  add x5,sp,#0x18
71024ec62c  bl 0x71024cc230
71024ec630  ldr x22,[sp, #0x30]
71024ec634  cbz x22,0x71024ec668
71024ec638  add x8,x22,#0x8
71024ec63c  ldaxr x9,[x8]
71024ec640  sub x10,x9,#0x1
71024ec644  stlxr w11,x10,[x8]
71024ec648  cbnz w11,0x71024ec63c
71024ec64c  cbnz x9,0x71024ec668
71024ec650  ldr x8,[x22]
71024ec654  ldr x8,[x8, #0x10]
71024ec658  mov x0,x22
71024ec65c  blr x8
71024ec660  mov x0,x22
71024ec664  bl 0x71039c2670
71024ec668  ldr x22,[sp, #0x40]
71024ec66c  cbz x22,0x71024ec6a0
71024ec670  add x8,x22,#0x8
71024ec674  ldaxr x9,[x8]
71024ec678  sub x10,x9,#0x1
71024ec67c  stlxr w11,x10,[x8]
71024ec680  cbnz w11,0x71024ec674
71024ec684  cbnz x9,0x71024ec6a0
71024ec688  ldr x8,[x22]
71024ec68c  ldr x8,[x8, #0x10]
71024ec690  mov x0,x22
71024ec694  blr x8
71024ec698  mov x0,x22
71024ec69c  bl 0x71039c2670
71024ec6a0  ldr x22,[sp, #0x50]
71024ec6a4  cbz x22,0x71024ec6d8
71024ec6a8  add x8,x22,#0x8
71024ec6ac  ldaxr x9,[x8]
71024ec6b0  sub x10,x9,#0x1
71024ec6b4  stlxr w11,x10,[x8]
71024ec6b8  cbnz w11,0x71024ec6ac
71024ec6bc  cbnz x9,0x71024ec6d8
71024ec6c0  ldr x8,[x22]
71024ec6c4  ldr x8,[x8, #0x10]
71024ec6c8  mov x0,x22
71024ec6cc  blr x8
71024ec6d0  mov x0,x22
71024ec6d4  bl 0x71039c2670
71024ec6d8  ldr w19,[sp, #0x58]
71024ec6dc  orr w8,wzr,#0xffffff
71024ec6e0  cmp w19,w8
71024ec6e4  b.eq 0x71024ec73c
71024ec6e8  adrp x8,0x7105332000
71024ec6ec  ldr x22,[x8, #0xf20]
71024ec6f0  ldr w8,[x22, #0x48]
71024ec6f4  cmp w8,w19
71024ec6f8  b.ls 0x71024ec734
71024ec6fc  ldr x23,[x22]
71024ec700  mov x0,x23
71024ec704  bl 0x71039c1a40
71024ec708  ldr x8,[x22, #0x40]
71024ec70c  mov w9,#0x48
71024ec710  madd x9,x19,x9,x8
71024ec714  ldrb w9,[x9, #0x8]
71024ec718  tbz w9,#0x0,0x71024ec72c
71024ec71c  mov w9,#0x48
71024ec720  madd x1,x19,x9,x8
71024ec724  mov x0,x22
71024ec728  bl 0x710353f5a0
71024ec72c  mov x0,x23
71024ec730  bl 0x71039c1a50
71024ec734  orr w8,wzr,#0xffffff
71024ec738  str w8,[sp, #0x58]
71024ec73c  ldr x22,[sp, #0x68]
71024ec740  cbz x22,0x71024ec774
71024ec744  add x8,x22,#0x8
71024ec748  ldaxr x9,[x8]
71024ec74c  sub x10,x9,#0x1
71024ec750  stlxr w11,x10,[x8]
71024ec754  cbnz w11,0x71024ec748
71024ec758  cbnz x9,0x71024ec774
71024ec75c  ldr x8,[x22]
71024ec760  ldr x8,[x8, #0x10]
71024ec764  mov x0,x22
71024ec768  blr x8
71024ec76c  mov x0,x22
71024ec770  bl 0x71039c2670
71024ec774  ldr x0,[x28]
71024ec778  ldr x8,[x0]
71024ec77c  ldr x8,[x8, #0x28]
71024ec780  blr x8
71024ec784  tbz w0,#0x0,0x71024ec808
71024ec788  ldr x22,[x20, #0x30]
71024ec78c  stp xzr,xzr,[x20, #0x28]
71024ec790  cbz x22,0x71024ec804
71024ec794  add x8,x22,#0x8
71024ec798  ldaxr x9,[x8]
71024ec79c  sub x10,x9,#0x1
71024ec7a0  stlxr w11,x10,[x8]
71024ec7a4  cbnz w11,0x71024ec798
71024ec7a8  cbnz x9,0x71024ec7c4
71024ec7ac  ldr x8,[x22]
71024ec7b0  ldr x8,[x8, #0x10]
71024ec7b4  mov x0,x22
71024ec7b8  blr x8
71024ec7bc  mov x0,x22
71024ec7c0  bl 0x71039c2670
71024ec7c4  ldr x22,[x20, #0x30]
71024ec7c8  stp xzr,xzr,[x28]
71024ec7cc  cbz x22,0x71024ec808
71024ec7d0  add x8,x22,#0x8
71024ec7d4  ldaxr x9,[x8]
71024ec7d8  sub x10,x9,#0x1
71024ec7dc  stlxr w11,x10,[x8]
71024ec7e0  cbnz w11,0x71024ec7d4
71024ec7e4  cbnz x9,0x71024ec808
71024ec7e8  ldr x8,[x22]
71024ec7ec  ldr x8,[x8, #0x10]
71024ec7f0  mov x0,x22
71024ec7f4  blr x8
71024ec7f8  mov x0,x22
71024ec7fc  bl 0x71039c2670
71024ec800  b 0x71024ec808
71024ec804  stp xzr,xzr,[x28]
71024ec808  ldr x8,[x27]
71024ec80c  ldrb w8,[x8, #0xa8]
71024ec810  cbz w8,0x71024ec8d8
71024ec814  ldr x8,[x25]
71024ec818  ldrb w8,[x8, #0x88]
71024ec81c  cbz w8,0x71024ec954
71024ec820  ldr x8,[x26]
71024ec824  ldrb w8,[x8, #0x88]
71024ec828  cbz w8,0x71024ec9d0
71024ec82c  mov x0,x21
71024ec830  bl 0x71035597d0
71024ec834  ldr x0,[x21]
71024ec838  ldr x8,[x0]
71024ec83c  ldr x8,[x8, #0xa8]
71024ec840  mov w1,wzr
71024ec844  blr x8
71024ec848  ldr x26,[sp, #0x8]
71024ec84c  mov x0,x20
71024ec850  bl 0x71024e9760
71024ec854  ldr w8,[x26, #0x40c]
71024ec858  add x10,x26,#0x208
71024ec85c  str x20,[x10, x8, LSL #0x3]
71024ec860  ldr w8,[x26, #0x408]
71024ec864  add x8,x26,x8, LSL #0x3
71024ec868  ldr x9,[x8, #0x8]
71024ec86c  ldr w8,[x26, #0x40c]
71024ec870  ldr x8,[x10, x8, LSL #0x3]
71024ec874  str x8,[x9, #0x148]
71024ec878  cbz x8,0x71024ec8a0
71024ec87c  ldr x9,[x9, #0x158]
71024ec880  ands x1,x9,#0xffffffffff
71024ec884  b.eq 0x71024ec8a0
71024ec888  ldr x0,[x8, #0x18]
71024ec88c  cbz x0,0x71024ec8a0
71024ec890  ldr x8,[x0]
71024ec894  ldr x8,[x8, #0x180]
71024ec898  mov w2,wzr
71024ec89c  blr x8
71024ec8a0  ldr w8,[x26, #0x40c]
71024ec8a4  add w8,w8,#0x1
71024ec8a8  str w8,[x26, #0x40c]
71024ec8ac  ldr w8,[x26, #0x408]
71024ec8b0  add w8,w8,#0x1
71024ec8b4  str w8,[x26, #0x408]
71024ec8b8  ldp x29,x30,[sp, #0xc0]
71024ec8bc  ldp x20,x19,[sp, #0xb0]
71024ec8c0  ldp x22,x21,[sp, #0xa0]
71024ec8c4  ldp x24,x23,[sp, #0x90]
71024ec8c8  ldp x26,x25,[sp, #0x80]
71024ec8cc  ldp x28,x27,[sp, #0x70]
71024ec8d0  add sp,sp,#0xd0
71024ec8d4  ret
71024ec8d8  ldr x22,[x20, #0x40]
71024ec8dc  stp xzr,xzr,[x20, #0x38]
71024ec8e0  cbz x22,0x71024eca4c
71024ec8e4  add x8,x22,#0x8
71024ec8e8  ldaxr x9,[x8]
71024ec8ec  sub x10,x9,#0x1
71024ec8f0  stlxr w11,x10,[x8]
71024ec8f4  cbnz w11,0x71024ec8e8
71024ec8f8  cbnz x9,0x71024ec914
71024ec8fc  ldr x8,[x22]
71024ec900  ldr x8,[x8, #0x10]
71024ec904  mov x0,x22
71024ec908  blr x8
71024ec90c  mov x0,x22
71024ec910  bl 0x71039c2670
71024ec914  ldr x22,[x20, #0x40]
71024ec918  stp xzr,xzr,[x27]
71024ec91c  cbz x22,0x71024ec814
71024ec920  add x8,x22,#0x8
71024ec924  ldaxr x9,[x8]
71024ec928  sub x10,x9,#0x1
71024ec92c  stlxr w11,x10,[x8]
71024ec930  cbnz w11,0x71024ec924
71024ec934  cbnz x9,0x71024ec814
71024ec938  ldr x8,[x22]
71024ec93c  ldr x8,[x8, #0x10]
71024ec940  mov x0,x22
71024ec944  blr x8
71024ec948  mov x0,x22
71024ec94c  bl 0x71039c2670
71024ec950  b 0x71024ec814
71024ec954  ldr x22,[x20, #0x50]
71024ec958  stp xzr,xzr,[x20, #0x48]
71024ec95c  cbz x22,0x71024eca54
71024ec960  add x8,x22,#0x8
71024ec964  ldaxr x9,[x8]
71024ec968  sub x10,x9,#0x1
71024ec96c  stlxr w11,x10,[x8]
71024ec970  cbnz w11,0x71024ec964
71024ec974  cbnz x9,0x71024ec990
71024ec978  ldr x8,[x22]
71024ec97c  ldr x8,[x8, #0x10]
71024ec980  mov x0,x22
71024ec984  blr x8
71024ec988  mov x0,x22
71024ec98c  bl 0x71039c2670
71024ec990  ldr x22,[x20, #0x50]
71024ec994  stp xzr,xzr,[x25]
71024ec998  cbz x22,0x71024ec820
71024ec99c  add x8,x22,#0x8
71024ec9a0  ldaxr x9,[x8]
71024ec9a4  sub x10,x9,#0x1
71024ec9a8  stlxr w11,x10,[x8]
71024ec9ac  cbnz w11,0x71024ec9a0
71024ec9b0  cbnz x9,0x71024ec820
71024ec9b4  ldr x8,[x22]
71024ec9b8  ldr x8,[x8, #0x10]
71024ec9bc  mov x0,x22
71024ec9c0  blr x8
71024ec9c4  mov x0,x22
71024ec9c8  bl 0x71039c2670
71024ec9cc  b 0x71024ec820
71024ec9d0  ldr x22,[x20, #0x60]
71024ec9d4  stp xzr,xzr,[x20, #0x58]
71024ec9d8  cbz x22,0x71024eca5c
71024ec9dc  add x8,x22,#0x8
71024ec9e0  ldaxr x9,[x8]
71024ec9e4  sub x10,x9,#0x1
71024ec9e8  stlxr w11,x10,[x8]
71024ec9ec  cbnz w11,0x71024ec9e0
71024ec9f0  cbnz x9,0x71024eca0c
71024ec9f4  ldr x8,[x22]
71024ec9f8  ldr x8,[x8, #0x10]
71024ec9fc  mov x0,x22
71024eca00  blr x8
71024eca04  mov x0,x22
71024eca08  bl 0x71039c2670
71024eca0c  ldr x22,[x20, #0x60]
71024eca10  stp xzr,xzr,[x26]
71024eca14  cbz x22,0x71024ec82c
71024eca18  add x8,x22,#0x8
71024eca1c  ldaxr x9,[x8]
71024eca20  sub x10,x9,#0x1
71024eca24  stlxr w11,x10,[x8]
71024eca28  cbnz w11,0x71024eca1c
71024eca2c  cbnz x9,0x71024ec82c
71024eca30  ldr x8,[x22]
71024eca34  ldr x8,[x8, #0x10]
71024eca38  mov x0,x22
71024eca3c  blr x8
71024eca40  mov x0,x22
71024eca44  bl 0x71039c2670
71024eca48  b 0x71024ec82c
71024eca4c  stp xzr,xzr,[x27]
71024eca50  b 0x71024ec814
71024eca54  stp xzr,xzr,[x25]
71024eca58  b 0x71024ec820
71024eca5c  stp xzr,xzr,[x26]
71024eca60  b 0x71024ec82c
