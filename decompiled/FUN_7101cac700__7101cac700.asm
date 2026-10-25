// addr:      7101cac700
// offset:    0x1cac700
// name:      FUN_7101cac700
// mangled:   
// size:      3212

7101cac700  sub sp,sp,#0x1b0
7101cac704  stp x28,x25,[sp, #0x160]
7101cac708  stp x24,x23,[sp, #0x170]
7101cac70c  stp x22,x21,[sp, #0x180]
7101cac710  stp x20,x19,[sp, #0x190]
7101cac714  stp x29,x30,[sp, #0x1a0]
7101cac718  add x29,sp,#0x1a0
7101cac71c  ldr x19,[x0, #0x2350]
7101cac720  ldr x8,[x19, #0x290]
7101cac724  str x8,[x19, #0x2a0]
7101cac728  ldr x8,[x19, #0x288]
7101cac72c  mov x20,x1
7101cac730  str w2,[x19, #0x280]
7101cac734  add x1,x19,#0x288
7101cac738  mov x0,x19
7101cac73c  str x8,[x19, #0x298]
7101cac740  ldp x8,x9,[x20]
7101cac744  str x9,[x19, #0x290]
7101cac748  str x8,[x19, #0x288]
7101cac74c  bl 0x7101ce0260
7101cac750  ldr x1,[x20, #0x8]
7101cac754  cbz x1,0x7101cac774
7101cac758  adrp x8,0x710532f000
7101cac75c  ldr x8,[x8, #0x8f8]
7101cac760  ldr x0,[x8, #0x8]
7101cac764  ldr w2,[x20]
7101cac768  bl 0x710334c7d0
7101cac76c  mov w21,w0
7101cac770  b 0x7101cac778
7101cac774  orr w21,wzr,#0xffff
7101cac778  ldr x8,[x19, #0x258]
7101cac77c  ldr x8,[x8, #0x8]
7101cac780  add x20,x19,#0x250
7101cac784  cbz x8,0x7101cacc48
7101cac788  ldr x0,[x19, #0x2b0]
7101cac78c  add x22,x19,#0x2b0
7101cac790  cbnz x0,0x7101cac998
7101cac794  mov w8,#0x101
7101cac798  strh w8,[sp, #0x38]
7101cac79c  mov w8,#0x1
7101cac7a0  str w8,[sp, #0x40]
7101cac7a4  strh w8,[sp, #0x44]
7101cac7a8  strb w8,[sp, #0x46]
7101cac7ac  mov x8,#0x41f0000000000000
7101cac7b0  mov x23,sp
7101cac7b4  mov x0,sp
7101cac7b8  str x8,[sp, #0x48]
7101cac7bc  add x8,sp,#0x30
7101cac7c0  add x1,x8,#0xc0
7101cac7c4  adrp x8,0x7105186000
7101cac7c8  add x8,x8,#0xd0
7101cac7cc  str xzr,[sp, #0x30]
7101cac7d0  strh wzr,[sp, #0x3e]
7101cac7d4  stur wzr,[sp, #0x3a]
7101cac7d8  str wzr,[sp, #0x50]
7101cac7dc  str xzr,[sp, #0x80]
7101cac7e0  str xzr,[sp, #0xb0]
7101cac7e4  str xzr,[sp, #0xe0]
7101cac7e8  str xzr,[sp, #0x110]
7101cac7ec  str xzr,[sp, #0x140]
7101cac7f0  str wzr,[sp, #0x150]
7101cac7f4  str x8,[sp]
7101cac7f8  str x23,[sp, #0x20]
7101cac7fc  bl 0x7101989a30
7101cac800  ldr x0,[sp, #0x20]
7101cac804  cmp x23,x0
7101cac808  b.eq 0x7101cac81c
7101cac80c  cbz x0,0x7101cac828
7101cac810  ldr x8,[x0]
7101cac814  ldr x8,[x8, #0x28]
7101cac818  b 0x7101cac824
7101cac81c  ldr x8,[x0]
7101cac820  ldr x8,[x8, #0x20]
7101cac824  blr x8
7101cac828  adrp x2,0x7104433000
7101cac82c  add x2,x2,#0x952
7101cac830  add x3,sp,#0x30
7101cac834  mov x0,x22
7101cac838  mov x1,x20
7101cac83c  add x23,sp,#0x30
7101cac840  bl 0x7103770b30
7101cac844  adrp x2,0x71043be000
7101cac848  add x2,x2,#0x7a9
7101cac84c  mov w1,#0x2
7101cac850  mov x0,x22
7101cac854  bl 0x71037717d0
7101cac858  adrp x2,0x710433a000
7101cac85c  add x2,x2,#0x2d5
7101cac860  orr w1,wzr,#0x3
7101cac864  mov x0,x22
7101cac868  bl 0x71037717d0
7101cac86c  adrp x2,0x7104401000
7101cac870  add x2,x2,#0xdad
7101cac874  mov w1,#0x5
7101cac878  mov x0,x22
7101cac87c  bl 0x71037717d0
7101cac880  adrp x2,0x7104308000
7101cac884  add x2,x2,#0xc5c
7101cac888  orr w1,wzr,#0x6
7101cac88c  mov x0,x22
7101cac890  bl 0x71037717d0
7101cac894  adrp x2,0x71042d6000
7101cac898  add x2,x2,#0x3d6
7101cac89c  orr w1,wzr,#0x7
7101cac8a0  mov x0,x22
7101cac8a4  bl 0x71037717d0
7101cac8a8  ldr x0,[sp, #0x140]
7101cac8ac  add x8,x23,#0xf0
7101cac8b0  cmp x8,x0
7101cac8b4  b.eq 0x7101cac8c8
7101cac8b8  cbz x0,0x7101cac8d4
7101cac8bc  ldr x8,[x0]
7101cac8c0  ldr x8,[x8, #0x28]
7101cac8c4  b 0x7101cac8d0
7101cac8c8  ldr x8,[x0]
7101cac8cc  ldr x8,[x8, #0x20]
7101cac8d0  blr x8
7101cac8d4  ldr x0,[sp, #0x110]
7101cac8d8  add x8,sp,#0x30
7101cac8dc  add x8,x8,#0xc0
7101cac8e0  cmp x8,x0
7101cac8e4  b.eq 0x7101cac8f8
7101cac8e8  cbz x0,0x7101cac904
7101cac8ec  ldr x8,[x0]
7101cac8f0  ldr x8,[x8, #0x28]
7101cac8f4  b 0x7101cac900
7101cac8f8  ldr x8,[x0]
7101cac8fc  ldr x8,[x8, #0x20]
7101cac900  blr x8
7101cac904  ldr x0,[sp, #0xe0]
7101cac908  add x8,sp,#0x30
7101cac90c  add x8,x8,#0x90
7101cac910  cmp x8,x0
7101cac914  b.eq 0x7101cac928
7101cac918  cbz x0,0x7101cac934
7101cac91c  ldr x8,[x0]
7101cac920  ldr x8,[x8, #0x28]
7101cac924  b 0x7101cac930
7101cac928  ldr x8,[x0]
7101cac92c  ldr x8,[x8, #0x20]
7101cac930  blr x8
7101cac934  ldr x0,[sp, #0xb0]
7101cac938  add x8,sp,#0x30
7101cac93c  add x8,x8,#0x60
7101cac940  cmp x8,x0
7101cac944  b.eq 0x7101cac958
7101cac948  cbz x0,0x7101cac964
7101cac94c  ldr x8,[x0]
7101cac950  ldr x8,[x8, #0x28]
7101cac954  b 0x7101cac960
7101cac958  ldr x8,[x0]
7101cac95c  ldr x8,[x8, #0x20]
7101cac960  blr x8
7101cac964  ldr x0,[sp, #0x80]
7101cac968  add x8,sp,#0x30
7101cac96c  add x8,x8,#0x30
7101cac970  cmp x8,x0
7101cac974  b.eq 0x7101cac988
7101cac978  cbz x0,0x7101cac994
7101cac97c  ldr x8,[x0]
7101cac980  ldr x8,[x8, #0x28]
7101cac984  b 0x7101cac990
7101cac988  ldr x8,[x0]
7101cac98c  ldr x8,[x8, #0x20]
7101cac990  blr x8
7101cac994  ldr x0,[x22]
7101cac998  ldr x9,[x0, #0x1b8]
7101cac99c  cbz x9,0x7101cacc2c
7101cac9a0  add x8,x0,#0x1b8
7101cac9a4  sub w10,w21,#0x2
7101cac9a8  mov x12,x9
7101cac9ac  mov x11,x8
7101cac9b0  ldr w13,[x12, #0x20]
7101cac9b4  cmp w13,#0x2
7101cac9b8  cset w13,lt
7101cac9bc  csel x11,x11,x12,lt
7101cac9c0  ldr x12,[x12, w13, UXTW #0x3]
7101cac9c4  cbnz x12,0x7101cac9b0
7101cac9c8  cmp x11,x8
7101cac9cc  b.eq 0x7101caca2c
7101cac9d0  ldr w12,[x11, #0x20]
7101cac9d4  cmp w12,#0x2
7101cac9d8  b.gt 0x7101caca2c
7101cac9dc  ldr x23,[x11, #0x28]
7101cac9e0  cbz x23,0x7101caca2c
7101cac9e4  and w8,w10,#0xffff
7101cac9e8  cmp w8,#0x2
7101cac9ec  cset w24,hi
7101cac9f0  cmp w8,#0x3
7101cac9f4  ldr x8,[x23]
7101cac9f8  cset w1,cc
7101cac9fc  ldr x8,[x8, #0x1f8]
7101caca00  mov x0,x23
7101caca04  blr x8
7101caca08  ldr x8,[x23]
7101caca0c  ldr x8,[x8, #0x388]
7101caca10  mov x0,x23
7101caca14  mov w1,w24
7101caca18  mov w2,wzr
7101caca1c  blr x8
7101caca20  ldr x0,[x22]
7101caca24  ldr x9,[x0, #0x1b8]
7101caca28  add x8,x0,#0x1b8
7101caca2c  cbz x9,0x7101cacc2c
7101caca30  mov x10,x8
7101caca34  mov x11,x9
7101caca38  ldr w12,[x11, #0x20]
7101caca3c  cmp w12,#0x3
7101caca40  cset w12,lt
7101caca44  csel x10,x10,x11,lt
7101caca48  ldr x11,[x11, w12, UXTW #0x3]
7101caca4c  cbnz x11,0x7101caca38
7101caca50  cmp x10,x8
7101caca54  b.eq 0x7101cacab4
7101caca58  ldr w11,[x10, #0x20]
7101caca5c  cmp w11,#0x3
7101caca60  b.gt 0x7101cacab4
7101caca64  ldr x23,[x10, #0x28]
7101caca68  cbz x23,0x7101cacab4
7101caca6c  and w8,w21,#0xffff
7101caca70  cmp w8,#0x1
7101caca74  cset w24,hi
7101caca78  cmp w8,#0x2
7101caca7c  ldr x8,[x23]
7101caca80  cset w1,cc
7101caca84  ldr x8,[x8, #0x1f8]
7101caca88  mov x0,x23
7101caca8c  blr x8
7101caca90  ldr x8,[x23]
7101caca94  ldr x8,[x8, #0x388]
7101caca98  mov x0,x23
7101caca9c  mov w1,w24
7101cacaa0  mov w2,wzr
7101cacaa4  blr x8
7101cacaa8  ldr x0,[x22]
7101cacaac  ldr x9,[x0, #0x1b8]
7101cacab0  add x8,x0,#0x1b8
7101cacab4  cbz x9,0x7101cacc2c
7101cacab8  mov x10,x8
7101cacabc  mov x11,x9
7101cacac0  ldr w12,[x11, #0x20]
7101cacac4  cmp w12,#0x5
7101cacac8  cset w12,lt
7101cacacc  csel x10,x10,x11,lt
7101cacad0  ldr x11,[x11, w12, UXTW #0x3]
7101cacad4  cbnz x11,0x7101cacac0
7101cacad8  cmp x10,x8
7101cacadc  b.eq 0x7101cacb38
7101cacae0  ldr w11,[x10, #0x20]
7101cacae4  cmp w11,#0x5
7101cacae8  b.gt 0x7101cacb38
7101cacaec  ldr x23,[x10, #0x28]
7101cacaf0  cbz x23,0x7101cacb38
7101cacaf4  and w8,w21,#0xffff
7101cacaf8  cmp w8,#0x3
7101cacafc  ldr x8,[x23]
7101cacb00  cset w1,ne
7101cacb04  cset w24,eq
7101cacb08  ldr x8,[x8, #0x1f8]
7101cacb0c  mov x0,x23
7101cacb10  blr x8
7101cacb14  ldr x8,[x23]
7101cacb18  ldr x8,[x8, #0x388]
7101cacb1c  mov x0,x23
7101cacb20  mov w1,w24
7101cacb24  mov w2,wzr
7101cacb28  blr x8
7101cacb2c  ldr x0,[x22]
7101cacb30  ldr x9,[x0, #0x1b8]
7101cacb34  add x8,x0,#0x1b8
7101cacb38  cbz x9,0x7101cacc2c
7101cacb3c  mov x10,x8
7101cacb40  mov x11,x9
7101cacb44  ldr w12,[x11, #0x20]
7101cacb48  cmp w12,#0x6
7101cacb4c  cset w12,lt
7101cacb50  csel x10,x10,x11,lt
7101cacb54  ldr x11,[x11, w12, UXTW #0x3]
7101cacb58  cbnz x11,0x7101cacb44
7101cacb5c  cmp x10,x8
7101cacb60  b.eq 0x7101cacbb0
7101cacb64  ldr w11,[x10, #0x20]
7101cacb68  cmp w11,#0x6
7101cacb6c  b.gt 0x7101cacbb0
7101cacb70  ldr x23,[x10, #0x28]
7101cacb74  cbz x23,0x7101cacbb0
7101cacb78  ldr x8,[x23]
7101cacb7c  ldr x8,[x8, #0x1f8]
7101cacb80  mov w1,#0x1
7101cacb84  mov x0,x23
7101cacb88  blr x8
7101cacb8c  ldr x8,[x23]
7101cacb90  ldr x8,[x8, #0x388]
7101cacb94  mov x0,x23
7101cacb98  mov w1,wzr
7101cacb9c  mov w2,wzr
7101cacba0  blr x8
7101cacba4  ldr x0,[x22]
7101cacba8  ldr x9,[x0, #0x1b8]
7101cacbac  add x8,x0,#0x1b8
7101cacbb0  cbz x9,0x7101cacc2c
7101cacbb4  orr w10,w21,#0x2
7101cacbb8  mov x11,x8
7101cacbbc  ldr w12,[x9, #0x20]
7101cacbc0  cmp w12,#0x7
7101cacbc4  cset w12,lt
7101cacbc8  csel x11,x11,x9,lt
7101cacbcc  ldr x9,[x9, w12, UXTW #0x3]
7101cacbd0  cbnz x9,0x7101cacbbc
7101cacbd4  cmp x11,x8
7101cacbd8  b.eq 0x7101cacc2c
7101cacbdc  ldr w8,[x11, #0x20]
7101cacbe0  cmp w8,#0x7
7101cacbe4  b.gt 0x7101cacc2c
7101cacbe8  ldr x23,[x11, #0x28]
7101cacbec  cbz x23,0x7101cacc2c
7101cacbf0  and w8,w10,#0xffff
7101cacbf4  cmp w8,#0x2
7101cacbf8  ldr x8,[x23]
7101cacbfc  cset w1,eq
7101cacc00  cset w24,ne
7101cacc04  ldr x8,[x8, #0x1f8]
7101cacc08  mov x0,x23
7101cacc0c  blr x8
7101cacc10  ldr x8,[x23]
7101cacc14  ldr x8,[x8, #0x388]
7101cacc18  mov x0,x23
7101cacc1c  mov w1,w24
7101cacc20  mov w2,wzr
7101cacc24  blr x8
7101cacc28  ldr x0,[x22]
7101cacc2c  ldr x8,[x0]
7101cacc30  ldr x8,[x8, #0x60]
7101cacc34  mov w1,#0x1
7101cacc38  blr x8
7101cacc3c  mov x0,x19
7101cacc40  mov w1,w21
7101cacc44  bl 0x7101ce19a0
7101cacc48  ldr w1,[x19, #0x280]
7101cacc4c  mov x0,x19
7101cacc50  bl 0x7101cdf660
7101cacc54  ldr x8,[x19, #0x258]
7101cacc58  ldr x8,[x8, #0x8]
7101cacc5c  cbz x8,0x7101cad370
7101cacc60  ldr x9,[x19, #0x2c8]
7101cacc64  add x22,x19,#0x2c8
7101cacc68  cbnz x9,0x7101cad0d4
7101cacc6c  mov w8,#0x101
7101cacc70  strh w8,[sp, #0x38]
7101cacc74  mov w8,#0x1
7101cacc78  str w8,[sp, #0x40]
7101cacc7c  strh w8,[sp, #0x44]
7101cacc80  strb w8,[sp, #0x46]
7101cacc84  mov x8,#0x41f0000000000000
7101cacc88  mov x23,sp
7101cacc8c  mov x0,sp
7101cacc90  str x8,[sp, #0x48]
7101cacc94  add x8,sp,#0x30
7101cacc98  add x1,x8,#0xc0
7101cacc9c  adrp x8,0x7105186000
7101cacca0  add x8,x8,#0xd0
7101cacca4  str xzr,[sp, #0x30]
7101cacca8  strh wzr,[sp, #0x3e]
7101caccac  stur wzr,[sp, #0x3a]
7101caccb0  str wzr,[sp, #0x50]
7101caccb4  str xzr,[sp, #0x80]
7101caccb8  str xzr,[sp, #0xb0]
7101caccbc  str xzr,[sp, #0xe0]
7101caccc0  str xzr,[sp, #0x110]
7101caccc4  str xzr,[sp, #0x140]
7101caccc8  str wzr,[sp, #0x150]
7101cacccc  str x8,[sp]
7101caccd0  str x23,[sp, #0x20]
7101caccd4  bl 0x7101989a30
7101caccd8  ldr x0,[sp, #0x20]
7101caccdc  cmp x23,x0
7101cacce0  b.eq 0x7101caccf4
7101cacce4  cbz x0,0x7101cacd00
7101cacce8  ldr x8,[x0]
7101caccec  ldr x8,[x8, #0x28]
7101caccf0  b 0x7101caccfc
7101caccf4  ldr x8,[x0]
7101caccf8  ldr x8,[x8, #0x20]
7101caccfc  blr x8
7101cacd00  adrp x2,0x7104454000
7101cacd04  add x2,x2,#0xd70
7101cacd08  add x3,sp,#0x30
7101cacd0c  mov x0,x22
7101cacd10  mov x1,x20
7101cacd14  bl 0x7103770b30
7101cacd18  adrp x2,0x710439d000
7101cacd1c  add x2,x2,#0xab9
7101cacd20  orr w1,wzr,#0x3
7101cacd24  mov x0,x22
7101cacd28  bl 0x71037717d0
7101cacd2c  adrp x2,0x710435b000
7101cacd30  add x2,x2,#0xd3c
7101cacd34  mov w1,#0x4
7101cacd38  mov x0,x22
7101cacd3c  bl 0x71037717d0
7101cacd40  adrp x2,0x710436c000
7101cacd44  add x2,x2,#0x558
7101cacd48  orr w1,wzr,#0x7
7101cacd4c  mov x0,x22
7101cacd50  bl 0x71037717d0
7101cacd54  ldr x1,[x22]
7101cacd58  cbz x1,0x7101cacd7c
7101cacd5c  mov x0,sp
7101cacd60  orr w2,wzr,#0x3
7101cacd64  bl 0x7103771d60
7101cacd68  ldr x0,[sp, #0x8]
7101cacd6c  ldr x8,[x0]
7101cacd70  cbz x8,0x7101cacd88
7101cacd74  ldr x23,[x8, #0x88]
7101cacd78  b 0x7101cacd90
7101cacd7c  mov x0,sp
7101cacd80  bl 0x7103776290
7101cacd84  b 0x7101cacdb4
7101cacd88  adrp x23,0x7104867000
7101cacd8c  add x23,x23,#0xc2e
7101cacd90  adrp x8,0x710523d000
7101cacd94  add x8,x8,#0x9c8
7101cacd98  stp x8,xzr,[sp]
7101cacd9c  cbz x0,0x7101cacda4
7101cacda0  bl 0x710392eb40
7101cacda4  mov x8,sp
7101cacda8  mov x0,x20
7101cacdac  mov x1,x23
7101cacdb0  bl 0x7103776640
7101cacdb4  ldr x23,[sp, #0x8]
7101cacdb8  fmov s0,0x3f800000
7101cacdbc  adrp x1,0x71042a3000
7101cacdc0  add x1,x1,#0x672
7101cacdc4  mov x0,x23
7101cacdc8  bl 0x7103778300
7101cacdcc  adrp x25,0x710523d000
7101cacdd0  add x25,x25,#0x988
7101cacdd4  stp x25,xzr,[sp]
7101cacdd8  cbz x23,0x7101cacdfc
7101cacddc  ldr x0,[x23, #0x18]
7101cacde0  adrp x8,0x710523d000
7101cacde4  add x8,x8,#0x9a8
7101cacde8  stp x8,xzr,[x23, #0x10]
7101cacdec  cbz x0,0x7101cacdf4
7101cacdf0  bl 0x710392eb40
7101cacdf4  mov x0,x23
7101cacdf8  bl 0x710392eb40
7101cacdfc  ldr x1,[x19, #0x2c8]
7101cace00  add x23,x19,#0x260
7101cace04  cbz x1,0x7101cace28
7101cace08  mov x0,sp
7101cace0c  orr w2,wzr,#0x3
7101cace10  bl 0x7103771d60
7101cace14  ldr x0,[sp, #0x8]
7101cace18  ldr x8,[x0]
7101cace1c  cbz x8,0x7101cace34
7101cace20  ldr x24,[x8, #0x88]
7101cace24  b 0x7101cace3c
7101cace28  mov x0,sp
7101cace2c  bl 0x7103776290
7101cace30  b 0x7101cace60
7101cace34  adrp x24,0x7104867000
7101cace38  add x24,x24,#0xc2e
7101cace3c  adrp x8,0x710523d000
7101cace40  add x8,x8,#0x9c8
7101cace44  stp x8,xzr,[sp]
7101cace48  cbz x0,0x7101cace50
7101cace4c  bl 0x710392eb40
7101cace50  mov x8,sp
7101cace54  mov x0,x23
7101cace58  mov x1,x24
7101cace5c  bl 0x7103776640
7101cace60  ldr x24,[sp, #0x8]
7101cace64  fmov s0,0x3f800000
7101cace68  adrp x1,0x71042a3000
7101cace6c  add x1,x1,#0x672
7101cace70  mov x0,x24
7101cace74  bl 0x7103778300
7101cace78  stp x25,xzr,[sp]
7101cace7c  cbz x24,0x7101cacea0
7101cace80  ldr x0,[x24, #0x18]
7101cace84  adrp x8,0x710523d000
7101cace88  add x8,x8,#0x9a8
7101cace8c  stp x8,xzr,[x24, #0x10]
7101cace90  cbz x0,0x7101cace98
7101cace94  bl 0x710392eb40
7101cace98  mov x0,x24
7101cace9c  bl 0x710392eb40
7101cacea0  ldr x1,[x22]
7101cacea4  cbz x1,0x7101cacec8
7101cacea8  mov x0,sp
7101caceac  mov w2,#0x4
7101caceb0  bl 0x7103771d60
7101caceb4  ldr x0,[sp, #0x8]
7101caceb8  ldr x8,[x0]
7101cacebc  cbz x8,0x7101caced4
7101cacec0  ldr x24,[x8, #0x88]
7101cacec4  b 0x7101cacedc
7101cacec8  mov x0,sp
7101cacecc  bl 0x7103776290
7101caced0  b 0x7101cacf00
7101caced4  adrp x24,0x7104867000
7101caced8  add x24,x24,#0xc2e
7101cacedc  adrp x8,0x710523d000
7101cacee0  add x8,x8,#0x9c8
7101cacee4  stp x8,xzr,[sp]
7101cacee8  cbz x0,0x7101cacef0
7101caceec  bl 0x710392eb40
7101cacef0  mov x8,sp
7101cacef4  mov x0,x20
7101cacef8  mov x1,x24
7101cacefc  bl 0x7103776640
7101cacf00  ldr x24,[sp, #0x8]
7101cacf04  fmov s0,0x3f800000
7101cacf08  adrp x1,0x710424f000
7101cacf0c  add x1,x1,#0xbb2
7101cacf10  mov x0,x24
7101cacf14  bl 0x7103778300
7101cacf18  stp x25,xzr,[sp]
7101cacf1c  cbz x24,0x7101cacf40
7101cacf20  ldr x0,[x24, #0x18]
7101cacf24  adrp x8,0x710523d000
7101cacf28  add x8,x8,#0x9a8
7101cacf2c  stp x8,xzr,[x24, #0x10]
7101cacf30  cbz x0,0x7101cacf38
7101cacf34  bl 0x710392eb40
7101cacf38  mov x0,x24
7101cacf3c  bl 0x710392eb40
7101cacf40  ldr x1,[x22]
7101cacf44  cbz x1,0x7101cacf68
7101cacf48  mov x0,sp
7101cacf4c  mov w2,#0x4
7101cacf50  bl 0x7103771d60
7101cacf54  ldr x0,[sp, #0x8]
7101cacf58  ldr x8,[x0]
7101cacf5c  cbz x8,0x7101cacf74
7101cacf60  ldr x24,[x8, #0x88]
7101cacf64  b 0x7101cacf7c
7101cacf68  mov x0,sp
7101cacf6c  bl 0x7103776290
7101cacf70  b 0x7101cacfa0
7101cacf74  adrp x24,0x7104867000
7101cacf78  add x24,x24,#0xc2e
7101cacf7c  adrp x8,0x710523d000
7101cacf80  add x8,x8,#0x9c8
7101cacf84  stp x8,xzr,[sp]
7101cacf88  cbz x0,0x7101cacf90
7101cacf8c  bl 0x710392eb40
7101cacf90  mov x8,sp
7101cacf94  mov x0,x23
7101cacf98  mov x1,x24
7101cacf9c  bl 0x7103776640
7101cacfa0  ldr x23,[sp, #0x8]
7101cacfa4  fmov s0,0x3f800000
7101cacfa8  adrp x1,0x710424f000
7101cacfac  add x1,x1,#0xbb2
7101cacfb0  mov x0,x23
7101cacfb4  bl 0x7103778300
7101cacfb8  stp x25,xzr,[sp]
7101cacfbc  cbz x23,0x7101cacfe0
7101cacfc0  ldr x0,[x23, #0x18]
7101cacfc4  adrp x8,0x710523d000
7101cacfc8  add x8,x8,#0x9a8
7101cacfcc  stp x8,xzr,[x23, #0x10]
7101cacfd0  cbz x0,0x7101cacfd8
7101cacfd4  bl 0x710392eb40
7101cacfd8  mov x0,x23
7101cacfdc  bl 0x710392eb40
7101cacfe0  ldr x0,[sp, #0x140]
7101cacfe4  add x8,sp,#0x30
7101cacfe8  add x8,x8,#0xf0
7101cacfec  cmp x8,x0
7101cacff0  b.eq 0x7101cad004
7101cacff4  cbz x0,0x7101cad010
7101cacff8  ldr x8,[x0]
7101cacffc  ldr x8,[x8, #0x28]
7101cad000  b 0x7101cad00c
7101cad004  ldr x8,[x0]
7101cad008  ldr x8,[x8, #0x20]
7101cad00c  blr x8
7101cad010  ldr x0,[sp, #0x110]
7101cad014  add x8,sp,#0x30
7101cad018  add x8,x8,#0xc0
7101cad01c  cmp x8,x0
7101cad020  b.eq 0x7101cad034
7101cad024  cbz x0,0x7101cad040
7101cad028  ldr x8,[x0]
7101cad02c  ldr x8,[x8, #0x28]
7101cad030  b 0x7101cad03c
7101cad034  ldr x8,[x0]
7101cad038  ldr x8,[x8, #0x20]
7101cad03c  blr x8
7101cad040  ldr x0,[sp, #0xe0]
7101cad044  add x8,sp,#0x30
7101cad048  add x8,x8,#0x90
7101cad04c  cmp x8,x0
7101cad050  b.eq 0x7101cad064
7101cad054  cbz x0,0x7101cad070
7101cad058  ldr x8,[x0]
7101cad05c  ldr x8,[x8, #0x28]
7101cad060  b 0x7101cad06c
7101cad064  ldr x8,[x0]
7101cad068  ldr x8,[x8, #0x20]
7101cad06c  blr x8
7101cad070  ldr x0,[sp, #0xb0]
7101cad074  add x8,sp,#0x30
7101cad078  add x8,x8,#0x60
7101cad07c  cmp x8,x0
7101cad080  b.eq 0x7101cad094
7101cad084  cbz x0,0x7101cad0a0
7101cad088  ldr x8,[x0]
7101cad08c  ldr x8,[x8, #0x28]
7101cad090  b 0x7101cad09c
7101cad094  ldr x8,[x0]
7101cad098  ldr x8,[x8, #0x20]
7101cad09c  blr x8
7101cad0a0  ldr x0,[sp, #0x80]
7101cad0a4  add x8,sp,#0x30
7101cad0a8  add x8,x8,#0x30
7101cad0ac  cmp x8,x0
7101cad0b0  b.eq 0x7101cad0c4
7101cad0b4  cbz x0,0x7101cad0d0
7101cad0b8  ldr x8,[x0]
7101cad0bc  ldr x8,[x8, #0x28]
7101cad0c0  b 0x7101cad0cc
7101cad0c4  ldr x8,[x0]
7101cad0c8  ldr x8,[x8, #0x20]
7101cad0cc  blr x8
7101cad0d0  ldr x9,[x22]
7101cad0d4  ldr x10,[x9, #0x1b8]
7101cad0d8  cbz x10,0x7101cad154
7101cad0dc  add x11,x9,#0x1b8
7101cad0e0  orr w8,w21,#0x2
7101cad0e4  mov x9,x11
7101cad0e8  ldr w12,[x10, #0x20]
7101cad0ec  cmp w12,#0x7
7101cad0f0  cset w12,lt
7101cad0f4  csel x9,x9,x10,lt
7101cad0f8  ldr x10,[x10, w12, UXTW #0x3]
7101cad0fc  cbnz x10,0x7101cad0e8
7101cad100  cmp x9,x11
7101cad104  b.eq 0x7101cad154
7101cad108  ldr w10,[x9, #0x20]
7101cad10c  cmp w10,#0x7
7101cad110  b.gt 0x7101cad154
7101cad114  ldr x21,[x9, #0x28]
7101cad118  cbz x21,0x7101cad154
7101cad11c  and w8,w8,#0xffff
7101cad120  cmp w8,#0x2
7101cad124  ldr x8,[x21]
7101cad128  cset w1,eq
7101cad12c  cset w23,ne
7101cad130  ldr x8,[x8, #0x1f8]
7101cad134  mov x0,x21
7101cad138  blr x8
7101cad13c  ldr x8,[x21]
7101cad140  ldr x8,[x8, #0x388]
7101cad144  mov x0,x21
7101cad148  mov w1,w23
7101cad14c  mov w2,wzr
7101cad150  blr x8
7101cad154  orr w1,wzr,#0x3
7101cad158  mov w2,#0x1
7101cad15c  mov x0,x22
7101cad160  bl 0x7103771a80
7101cad164  ldr x0,[x19, #0x2c8]
7101cad168  ldr x8,[x0]
7101cad16c  ldr x8,[x8, #0x60]
7101cad170  mov w1,#0x1
7101cad174  blr x8
7101cad178  ldr x0,[x19, #0x2c8]
7101cad17c  ldr x8,[x0]
7101cad180  ldr x8,[x8, #0x70]
7101cad184  mov w1,wzr
7101cad188  blr x8
7101cad18c  ldr x8,[x19, #0x258]
7101cad190  ldr x8,[x8, #0x8]
7101cad194  cbz x8,0x7101cad370
7101cad198  ldr x8,[x19, #0x2d8]
7101cad19c  add x21,x19,#0x2d8
7101cad1a0  cbnz x8,0x7101cad320
7101cad1a4  mov w8,#0x101
7101cad1a8  mov x9,#0x41f0000000000000
7101cad1ac  str x9,[sp, #0x48]
7101cad1b0  strh w8,[sp, #0x38]
7101cad1b4  mov w8,#0x1
7101cad1b8  add x9,sp,#0x30
7101cad1bc  adrp x2,0x7104270000
7101cad1c0  add x2,x2,#0x5bf
7101cad1c4  add x3,sp,#0x30
7101cad1c8  mov x0,x21
7101cad1cc  mov x1,x20
7101cad1d0  str xzr,[sp, #0x30]
7101cad1d4  stur wzr,[sp, #0x3a]
7101cad1d8  strh wzr,[sp, #0x3e]
7101cad1dc  str w8,[sp, #0x40]
7101cad1e0  strh w8,[sp, #0x44]
7101cad1e4  add x22,x9,#0xf0
7101cad1e8  strb w8,[sp, #0x46]
7101cad1ec  str wzr,[sp, #0x50]
7101cad1f0  str xzr,[sp, #0x80]
7101cad1f4  str xzr,[sp, #0xb0]
7101cad1f8  str xzr,[sp, #0xe0]
7101cad1fc  str xzr,[sp, #0x110]
7101cad200  str xzr,[sp, #0x140]
7101cad204  str wzr,[sp, #0x150]
7101cad208  strb w8,[sp, #0x3a]
7101cad20c  bl 0x7103770b30
7101cad210  adrp x2,0x71042c4000
7101cad214  add x2,x2,#0xf39
7101cad218  mov w1,#0x8
7101cad21c  mov x0,x21
7101cad220  bl 0x71037717d0
7101cad224  ldr x0,[x21]
7101cad228  mov w2,#0x9
7101cad22c  mov w1,#0x8
7101cad230  mov w3,wzr
7101cad234  bl 0x7103771930
7101cad238  ldr x0,[sp, #0x140]
7101cad23c  cmp x22,x0
7101cad240  b.eq 0x7101cad254
7101cad244  cbz x0,0x7101cad260
7101cad248  ldr x8,[x0]
7101cad24c  ldr x8,[x8, #0x28]
7101cad250  b 0x7101cad25c
7101cad254  ldr x8,[x0]
7101cad258  ldr x8,[x8, #0x20]
7101cad25c  blr x8
7101cad260  ldr x0,[sp, #0x110]
7101cad264  add x8,sp,#0x30
7101cad268  add x8,x8,#0xc0
7101cad26c  cmp x8,x0
7101cad270  b.eq 0x7101cad284
7101cad274  cbz x0,0x7101cad290
7101cad278  ldr x8,[x0]
7101cad27c  ldr x8,[x8, #0x28]
7101cad280  b 0x7101cad28c
7101cad284  ldr x8,[x0]
7101cad288  ldr x8,[x8, #0x20]
7101cad28c  blr x8
7101cad290  ldr x0,[sp, #0xe0]
7101cad294  add x8,sp,#0x30
7101cad298  add x8,x8,#0x90
7101cad29c  cmp x8,x0
7101cad2a0  b.eq 0x7101cad2b4
7101cad2a4  cbz x0,0x7101cad2c0
7101cad2a8  ldr x8,[x0]
7101cad2ac  ldr x8,[x8, #0x28]
7101cad2b0  b 0x7101cad2bc
7101cad2b4  ldr x8,[x0]
7101cad2b8  ldr x8,[x8, #0x20]
7101cad2bc  blr x8
7101cad2c0  ldr x0,[sp, #0xb0]
7101cad2c4  add x8,sp,#0x30
7101cad2c8  add x8,x8,#0x60
7101cad2cc  cmp x8,x0
7101cad2d0  b.eq 0x7101cad2e4
7101cad2d4  cbz x0,0x7101cad2f0
7101cad2d8  ldr x8,[x0]
7101cad2dc  ldr x8,[x8, #0x28]
7101cad2e0  b 0x7101cad2ec
7101cad2e4  ldr x8,[x0]
7101cad2e8  ldr x8,[x8, #0x20]
7101cad2ec  blr x8
7101cad2f0  ldr x0,[sp, #0x80]
7101cad2f4  add x8,sp,#0x30
7101cad2f8  add x8,x8,#0x30
7101cad2fc  cmp x8,x0
7101cad300  b.eq 0x7101cad314
7101cad304  cbz x0,0x7101cad320
7101cad308  ldr x8,[x0]
7101cad30c  ldr x8,[x8, #0x28]
7101cad310  b 0x7101cad31c
7101cad314  ldr x8,[x0]
7101cad318  ldr x8,[x8, #0x20]
7101cad31c  blr x8
7101cad320  mov w1,#0x8
7101cad324  mov w2,#0x1
7101cad328  mov x0,x21
7101cad32c  bl 0x7103771a80
7101cad330  ldrb w8,[x19, #0x305]
7101cad334  cbz w8,0x7101cad340
7101cad338  mov w1,wzr
7101cad33c  b 0x7101cad34c
7101cad340  ldrb w8,[x19, #0x304]
7101cad344  cmp w8,#0x0
7101cad348  cset w1,eq
7101cad34c  ldr x0,[x21]
7101cad350  ldr x8,[x0]
7101cad354  ldr x8,[x8, #0x60]
7101cad358  blr x8
7101cad35c  ldr x0,[x21]
7101cad360  ldr x8,[x0]
7101cad364  ldr x8,[x8, #0x70]
7101cad368  mov w1,wzr
7101cad36c  blr x8
7101cad370  ldp x29,x30,[sp, #0x1a0]
7101cad374  ldp x20,x19,[sp, #0x190]
7101cad378  ldp x22,x21,[sp, #0x180]
7101cad37c  ldp x24,x23,[sp, #0x170]
7101cad380  ldp x28,x25,[sp, #0x160]
7101cad384  add sp,sp,#0x1b0
7101cad388  ret
