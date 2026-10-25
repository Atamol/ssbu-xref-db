// addr:      7101ebb710
// offset:    0x1ebb710
// name:      FUN_7101ebb710
// mangled:   
// size:      2432

7101ebb710  sub sp,sp,#0x80
7101ebb714  str d8,[sp, #0x20]
7101ebb718  stp x26,x25,[sp, #0x30]
7101ebb71c  stp x24,x23,[sp, #0x40]
7101ebb720  stp x22,x21,[sp, #0x50]
7101ebb724  stp x20,x19,[sp, #0x60]
7101ebb728  stp x29,x30,[sp, #0x70]
7101ebb72c  add x29,sp,#0x70
7101ebb730  ldr x23,[x0, #0x80]
7101ebb734  ldr w8,[x1]
7101ebb738  str w8,[x23, #0x110]
7101ebb73c  ldr x8,[x23, #0xf8]
7101ebb740  ldr x22,[x8]
7101ebb744  mov x19,x0
7101ebb748  ldr x0,[x22, #0x10]
7101ebb74c  mov x20,x1
7101ebb750  adrp x1,0x710428f000
7101ebb754  add x1,x1,#0xf7d
7101ebb758  add x21,x22,#0x8
7101ebb75c  bl 0x7103778760
7101ebb760  ldr w8,[x23, #0x110]
7101ebb764  cmp w8,#0x1
7101ebb768  b.eq 0x7101ebb7c0
7101ebb76c  cbnz w8,0x7101ebc068
7101ebb770  fmov s8,0x3f800000
7101ebb774  ldr x0,[x22, #0x10]
7101ebb778  adrp x1,0x7104422000
7101ebb77c  add x1,x1,#0xb09
7101ebb780  mov v0.16B,v8.16B
7101ebb784  bl 0x7103778300
7101ebb788  ldr x0,[x22, #0x10]
7101ebb78c  mov v0.16B,v8.16B
7101ebb790  adrp x1,0x71042d6000
7101ebb794  add x1,x1,#0xa8b
7101ebb798  bl 0x7103778300
7101ebb79c  ldr w8,[x20, #0x4]!
7101ebb7a0  ldr x9,[x23, #0xf8]
7101ebb7a4  ldr x9,[x9]
7101ebb7a8  ldr x0,[x9, #0x10]
7101ebb7ac  cmp w8,#0x1
7101ebb7b0  b.ne 0x7101ebbe20
7101ebb7b4  adrp x1,0x71043ae000
7101ebb7b8  add x1,x1,#0x5c4
7101ebb7bc  b 0x7101ebbe28
7101ebb7c0  ldr x0,[x22, #0x10]
7101ebb7c4  fmov s0,0x3f800000
7101ebb7c8  adrp x1,0x71043ad000
7101ebb7cc  add x1,x1,#0xf91
7101ebb7d0  bl 0x7103778300
7101ebb7d4  adrp x1,0x710425f000
7101ebb7d8  add x1,x1,#0xc73
7101ebb7dc  mov x8,sp
7101ebb7e0  mov x0,x21
7101ebb7e4  mov w2,wzr
7101ebb7e8  add x20,x20,#0x4
7101ebb7ec  bl 0x7103776640
7101ebb7f0  adrp x1,0x710433a000
7101ebb7f4  add x1,x1,#0x974
7101ebb7f8  add x8,sp,#0x10
7101ebb7fc  mov x0,sp
7101ebb800  bl 0x7103776910
7101ebb804  ldr x0,[sp, #0x18]
7101ebb808  ldr x8,[x0]
7101ebb80c  cbz x8,0x7101ebb82c
7101ebb810  ldr w9,[x20]
7101ebb814  ldrb w10,[x8, #0x58]
7101ebb818  cmp w9,#0x0
7101ebb81c  cset w9,eq
7101ebb820  and w10,w10,#0xfe
7101ebb824  orr w9,w10,w9
7101ebb828  strb w9,[x8, #0x58]
7101ebb82c  adrp x24,0x710523d000
7101ebb830  add x24,x24,#0x9a8
7101ebb834  stp x24,xzr,[sp, #0x10]
7101ebb838  cbz x0,0x7101ebb840
7101ebb83c  bl 0x710392eb40
7101ebb840  ldr x22,[sp, #0x8]
7101ebb844  adrp x25,0x710523d000
7101ebb848  add x25,x25,#0x988
7101ebb84c  stp x25,xzr,[sp]
7101ebb850  cbz x22,0x7101ebb86c
7101ebb854  ldr x0,[x22, #0x18]
7101ebb858  stp x24,xzr,[x22, #0x10]
7101ebb85c  cbz x0,0x7101ebb864
7101ebb860  bl 0x710392eb40
7101ebb864  mov x0,x22
7101ebb868  bl 0x710392eb40
7101ebb86c  adrp x1,0x710425f000
7101ebb870  add x1,x1,#0xc73
7101ebb874  mov x8,sp
7101ebb878  mov w2,#0x1
7101ebb87c  mov x0,x21
7101ebb880  bl 0x7103776640
7101ebb884  adrp x1,0x710433a000
7101ebb888  add x1,x1,#0x974
7101ebb88c  add x8,sp,#0x10
7101ebb890  mov x0,sp
7101ebb894  bl 0x7103776910
7101ebb898  ldr x0,[sp, #0x18]
7101ebb89c  ldr x8,[x0]
7101ebb8a0  cbz x8,0x7101ebb8c0
7101ebb8a4  ldr w9,[x20]
7101ebb8a8  ldrb w10,[x8, #0x58]
7101ebb8ac  cmp w9,#0x1
7101ebb8b0  cset w9,eq
7101ebb8b4  and w10,w10,#0xfe
7101ebb8b8  orr w9,w10,w9
7101ebb8bc  strb w9,[x8, #0x58]
7101ebb8c0  stp x24,xzr,[sp, #0x10]
7101ebb8c4  cbz x0,0x7101ebb8cc
7101ebb8c8  bl 0x710392eb40
7101ebb8cc  ldr x22,[sp, #0x8]
7101ebb8d0  stp x25,xzr,[sp]
7101ebb8d4  cbz x22,0x7101ebb8f0
7101ebb8d8  ldr x0,[x22, #0x18]
7101ebb8dc  stp x24,xzr,[x22, #0x10]
7101ebb8e0  cbz x0,0x7101ebb8e8
7101ebb8e4  bl 0x710392eb40
7101ebb8e8  mov x0,x22
7101ebb8ec  bl 0x710392eb40
7101ebb8f0  adrp x1,0x710425f000
7101ebb8f4  add x1,x1,#0xc73
7101ebb8f8  mov x8,sp
7101ebb8fc  mov w2,#0x2
7101ebb900  mov x0,x21
7101ebb904  bl 0x7103776640
7101ebb908  adrp x1,0x710433a000
7101ebb90c  add x1,x1,#0x974
7101ebb910  add x8,sp,#0x10
7101ebb914  mov x0,sp
7101ebb918  bl 0x7103776910
7101ebb91c  ldr x0,[sp, #0x18]
7101ebb920  ldr x8,[x0]
7101ebb924  cbz x8,0x7101ebb944
7101ebb928  ldr w9,[x20]
7101ebb92c  ldrb w10,[x8, #0x58]
7101ebb930  cmp w9,#0x2
7101ebb934  cset w9,eq
7101ebb938  and w10,w10,#0xfe
7101ebb93c  orr w9,w10,w9
7101ebb940  strb w9,[x8, #0x58]
7101ebb944  stp x24,xzr,[sp, #0x10]
7101ebb948  cbz x0,0x7101ebb950
7101ebb94c  bl 0x710392eb40
7101ebb950  ldr x22,[sp, #0x8]
7101ebb954  stp x25,xzr,[sp]
7101ebb958  cbz x22,0x7101ebb974
7101ebb95c  ldr x0,[x22, #0x18]
7101ebb960  stp x24,xzr,[x22, #0x10]
7101ebb964  cbz x0,0x7101ebb96c
7101ebb968  bl 0x710392eb40
7101ebb96c  mov x0,x22
7101ebb970  bl 0x710392eb40
7101ebb974  adrp x1,0x710425f000
7101ebb978  add x1,x1,#0xc73
7101ebb97c  mov x8,sp
7101ebb980  orr w2,wzr,#0x3
7101ebb984  mov x0,x21
7101ebb988  bl 0x7103776640
7101ebb98c  adrp x1,0x710433a000
7101ebb990  add x1,x1,#0x974
7101ebb994  add x8,sp,#0x10
7101ebb998  mov x0,sp
7101ebb99c  bl 0x7103776910
7101ebb9a0  ldr x0,[sp, #0x18]
7101ebb9a4  ldr x8,[x0]
7101ebb9a8  cbz x8,0x7101ebb9c8
7101ebb9ac  ldr w9,[x20]
7101ebb9b0  ldrb w10,[x8, #0x58]
7101ebb9b4  cmp w9,#0x3
7101ebb9b8  cset w9,eq
7101ebb9bc  and w10,w10,#0xfe
7101ebb9c0  orr w9,w10,w9
7101ebb9c4  strb w9,[x8, #0x58]
7101ebb9c8  stp x24,xzr,[sp, #0x10]
7101ebb9cc  cbz x0,0x7101ebb9d4
7101ebb9d0  bl 0x710392eb40
7101ebb9d4  ldr x22,[sp, #0x8]
7101ebb9d8  stp x25,xzr,[sp]
7101ebb9dc  cbz x22,0x7101ebb9f8
7101ebb9e0  ldr x0,[x22, #0x18]
7101ebb9e4  stp x24,xzr,[x22, #0x10]
7101ebb9e8  cbz x0,0x7101ebb9f0
7101ebb9ec  bl 0x710392eb40
7101ebb9f0  mov x0,x22
7101ebb9f4  bl 0x710392eb40
7101ebb9f8  adrp x1,0x710425f000
7101ebb9fc  add x1,x1,#0xc73
7101ebba00  mov x8,sp
7101ebba04  mov w2,#0x4
7101ebba08  mov x0,x21
7101ebba0c  bl 0x7103776640
7101ebba10  adrp x1,0x710433a000
7101ebba14  add x1,x1,#0x974
7101ebba18  add x8,sp,#0x10
7101ebba1c  mov x0,sp
7101ebba20  bl 0x7103776910
7101ebba24  ldr x0,[sp, #0x18]
7101ebba28  ldr x8,[x0]
7101ebba2c  cbz x8,0x7101ebba4c
7101ebba30  ldr w9,[x20]
7101ebba34  ldrb w10,[x8, #0x58]
7101ebba38  cmp w9,#0x4
7101ebba3c  cset w9,eq
7101ebba40  and w10,w10,#0xfe
7101ebba44  orr w9,w10,w9
7101ebba48  strb w9,[x8, #0x58]
7101ebba4c  stp x24,xzr,[sp, #0x10]
7101ebba50  cbz x0,0x7101ebba58
7101ebba54  bl 0x710392eb40
7101ebba58  ldr x22,[sp, #0x8]
7101ebba5c  stp x25,xzr,[sp]
7101ebba60  cbz x22,0x7101ebba7c
7101ebba64  ldr x0,[x22, #0x18]
7101ebba68  stp x24,xzr,[x22, #0x10]
7101ebba6c  cbz x0,0x7101ebba74
7101ebba70  bl 0x710392eb40
7101ebba74  mov x0,x22
7101ebba78  bl 0x710392eb40
7101ebba7c  adrp x1,0x710425f000
7101ebba80  add x1,x1,#0xc73
7101ebba84  mov w2,#0x5
7101ebba88  mov x8,sp
7101ebba8c  mov x0,x21
7101ebba90  bl 0x7103776640
7101ebba94  adrp x1,0x710433a000
7101ebba98  add x1,x1,#0x974
7101ebba9c  add x8,sp,#0x10
7101ebbaa0  mov x0,sp
7101ebbaa4  bl 0x7103776910
7101ebbaa8  ldr x0,[sp, #0x18]
7101ebbaac  ldr x8,[x0]
7101ebbab0  cbz x8,0x7101ebbad0
7101ebbab4  ldr w9,[x20]
7101ebbab8  ldrb w10,[x8, #0x58]
7101ebbabc  cmp w9,#0x5
7101ebbac0  cset w9,eq
7101ebbac4  and w10,w10,#0xfe
7101ebbac8  orr w9,w10,w9
7101ebbacc  strb w9,[x8, #0x58]
7101ebbad0  stp x24,xzr,[sp, #0x10]
7101ebbad4  cbz x0,0x7101ebbadc
7101ebbad8  bl 0x710392eb40
7101ebbadc  ldr x22,[sp, #0x8]
7101ebbae0  stp x25,xzr,[sp]
7101ebbae4  cbz x22,0x7101ebbb00
7101ebbae8  ldr x0,[x22, #0x18]
7101ebbaec  stp x24,xzr,[x22, #0x10]
7101ebbaf0  cbz x0,0x7101ebbaf8
7101ebbaf4  bl 0x710392eb40
7101ebbaf8  mov x0,x22
7101ebbafc  bl 0x710392eb40
7101ebbb00  adrp x1,0x710425f000
7101ebbb04  add x1,x1,#0xc73
7101ebbb08  mov x8,sp
7101ebbb0c  orr w2,wzr,#0x6
7101ebbb10  mov x0,x21
7101ebbb14  bl 0x7103776640
7101ebbb18  adrp x1,0x710433a000
7101ebbb1c  add x1,x1,#0x974
7101ebbb20  add x8,sp,#0x10
7101ebbb24  mov x0,sp
7101ebbb28  bl 0x7103776910
7101ebbb2c  ldr x0,[sp, #0x18]
7101ebbb30  ldr x8,[x0]
7101ebbb34  cbz x8,0x7101ebbb54
7101ebbb38  ldr w9,[x20]
7101ebbb3c  ldrb w10,[x8, #0x58]
7101ebbb40  cmp w9,#0x6
7101ebbb44  cset w9,eq
7101ebbb48  and w10,w10,#0xfe
7101ebbb4c  orr w9,w10,w9
7101ebbb50  strb w9,[x8, #0x58]
7101ebbb54  stp x24,xzr,[sp, #0x10]
7101ebbb58  cbz x0,0x7101ebbb60
7101ebbb5c  bl 0x710392eb40
7101ebbb60  ldr x22,[sp, #0x8]
7101ebbb64  stp x25,xzr,[sp]
7101ebbb68  cbz x22,0x7101ebbb84
7101ebbb6c  ldr x0,[x22, #0x18]
7101ebbb70  stp x24,xzr,[x22, #0x10]
7101ebbb74  cbz x0,0x7101ebbb7c
7101ebbb78  bl 0x710392eb40
7101ebbb7c  mov x0,x22
7101ebbb80  bl 0x710392eb40
7101ebbb84  adrp x1,0x710425f000
7101ebbb88  add x1,x1,#0xc73
7101ebbb8c  mov x8,sp
7101ebbb90  orr w2,wzr,#0x7
7101ebbb94  mov x0,x21
7101ebbb98  bl 0x7103776640
7101ebbb9c  adrp x1,0x710433a000
7101ebbba0  add x1,x1,#0x974
7101ebbba4  add x8,sp,#0x10
7101ebbba8  mov x0,sp
7101ebbbac  bl 0x7103776910
7101ebbbb0  ldr x0,[sp, #0x18]
7101ebbbb4  ldr x8,[x0]
7101ebbbb8  cbz x8,0x7101ebbbd8
7101ebbbbc  ldr w9,[x20]
7101ebbbc0  ldrb w10,[x8, #0x58]
7101ebbbc4  cmp w9,#0x7
7101ebbbc8  cset w9,eq
7101ebbbcc  and w10,w10,#0xfe
7101ebbbd0  orr w9,w10,w9
7101ebbbd4  strb w9,[x8, #0x58]
7101ebbbd8  stp x24,xzr,[sp, #0x10]
7101ebbbdc  cbz x0,0x7101ebbbe4
7101ebbbe0  bl 0x710392eb40
7101ebbbe4  ldr x22,[sp, #0x8]
7101ebbbe8  stp x25,xzr,[sp]
7101ebbbec  cbz x22,0x7101ebbc08
7101ebbbf0  ldr x0,[x22, #0x18]
7101ebbbf4  stp x24,xzr,[x22, #0x10]
7101ebbbf8  cbz x0,0x7101ebbc00
7101ebbbfc  bl 0x710392eb40
7101ebbc00  mov x0,x22
7101ebbc04  bl 0x710392eb40
7101ebbc08  adrp x1,0x710425f000
7101ebbc0c  add x1,x1,#0xc73
7101ebbc10  mov x8,sp
7101ebbc14  mov w2,#0x8
7101ebbc18  mov x0,x21
7101ebbc1c  bl 0x7103776640
7101ebbc20  adrp x1,0x710433a000
7101ebbc24  add x1,x1,#0x974
7101ebbc28  add x8,sp,#0x10
7101ebbc2c  mov x0,sp
7101ebbc30  bl 0x7103776910
7101ebbc34  ldr x0,[sp, #0x18]
7101ebbc38  ldr x8,[x0]
7101ebbc3c  cbz x8,0x7101ebbc5c
7101ebbc40  ldr w9,[x20]
7101ebbc44  ldrb w10,[x8, #0x58]
7101ebbc48  cmp w9,#0x8
7101ebbc4c  cset w9,eq
7101ebbc50  and w10,w10,#0xfe
7101ebbc54  orr w9,w10,w9
7101ebbc58  strb w9,[x8, #0x58]
7101ebbc5c  stp x24,xzr,[sp, #0x10]
7101ebbc60  cbz x0,0x7101ebbc68
7101ebbc64  bl 0x710392eb40
7101ebbc68  ldr x22,[sp, #0x8]
7101ebbc6c  stp x25,xzr,[sp]
7101ebbc70  cbz x22,0x7101ebbc8c
7101ebbc74  ldr x0,[x22, #0x18]
7101ebbc78  stp x24,xzr,[x22, #0x10]
7101ebbc7c  cbz x0,0x7101ebbc84
7101ebbc80  bl 0x710392eb40
7101ebbc84  mov x0,x22
7101ebbc88  bl 0x710392eb40
7101ebbc8c  adrp x1,0x710425f000
7101ebbc90  add x1,x1,#0xc73
7101ebbc94  mov w2,#0x9
7101ebbc98  mov x8,sp
7101ebbc9c  mov x0,x21
7101ebbca0  bl 0x7103776640
7101ebbca4  adrp x1,0x710433a000
7101ebbca8  add x1,x1,#0x974
7101ebbcac  add x8,sp,#0x10
7101ebbcb0  mov x0,sp
7101ebbcb4  bl 0x7103776910
7101ebbcb8  ldr x0,[sp, #0x18]
7101ebbcbc  ldr x8,[x0]
7101ebbcc0  cbz x8,0x7101ebbce0
7101ebbcc4  ldr w9,[x20]
7101ebbcc8  ldrb w10,[x8, #0x58]
7101ebbccc  cmp w9,#0x9
7101ebbcd0  cset w9,eq
7101ebbcd4  and w10,w10,#0xfe
7101ebbcd8  orr w9,w10,w9
7101ebbcdc  strb w9,[x8, #0x58]
7101ebbce0  stp x24,xzr,[sp, #0x10]
7101ebbce4  cbz x0,0x7101ebbcec
7101ebbce8  bl 0x710392eb40
7101ebbcec  ldr x22,[sp, #0x8]
7101ebbcf0  stp x25,xzr,[sp]
7101ebbcf4  cbz x22,0x7101ebbd10
7101ebbcf8  ldr x0,[x22, #0x18]
7101ebbcfc  stp x24,xzr,[x22, #0x10]
7101ebbd00  cbz x0,0x7101ebbd08
7101ebbd04  bl 0x710392eb40
7101ebbd08  mov x0,x22
7101ebbd0c  bl 0x710392eb40
7101ebbd10  adrp x1,0x710425f000
7101ebbd14  add x1,x1,#0xc73
7101ebbd18  mov w2,#0xa
7101ebbd1c  mov x8,sp
7101ebbd20  mov x0,x21
7101ebbd24  bl 0x7103776640
7101ebbd28  adrp x1,0x710433a000
7101ebbd2c  add x1,x1,#0x974
7101ebbd30  add x8,sp,#0x10
7101ebbd34  mov x0,sp
7101ebbd38  bl 0x7103776910
7101ebbd3c  ldr x0,[sp, #0x18]
7101ebbd40  ldr x8,[x0]
7101ebbd44  cbz x8,0x7101ebbd64
7101ebbd48  ldr w9,[x20]
7101ebbd4c  ldrb w10,[x8, #0x58]
7101ebbd50  cmp w9,#0xa
7101ebbd54  cset w9,eq
7101ebbd58  and w10,w10,#0xfe
7101ebbd5c  orr w9,w10,w9
7101ebbd60  strb w9,[x8, #0x58]
7101ebbd64  stp x24,xzr,[sp, #0x10]
7101ebbd68  cbz x0,0x7101ebbd70
7101ebbd6c  bl 0x710392eb40
7101ebbd70  ldr x22,[sp, #0x8]
7101ebbd74  stp x25,xzr,[sp]
7101ebbd78  cbz x22,0x7101ebbd94
7101ebbd7c  ldr x0,[x22, #0x18]
7101ebbd80  stp x24,xzr,[x22, #0x10]
7101ebbd84  cbz x0,0x7101ebbd8c
7101ebbd88  bl 0x710392eb40
7101ebbd8c  mov x0,x22
7101ebbd90  bl 0x710392eb40
7101ebbd94  adrp x1,0x710425f000
7101ebbd98  add x1,x1,#0xc73
7101ebbd9c  mov w2,#0xb
7101ebbda0  mov x8,sp
7101ebbda4  mov x0,x21
7101ebbda8  bl 0x7103776640
7101ebbdac  adrp x1,0x710433a000
7101ebbdb0  add x1,x1,#0x974
7101ebbdb4  add x8,sp,#0x10
7101ebbdb8  mov x0,sp
7101ebbdbc  bl 0x7103776910
7101ebbdc0  ldr x0,[sp, #0x18]
7101ebbdc4  ldr x8,[x0]
7101ebbdc8  cbz x8,0x7101ebbde8
7101ebbdcc  ldr w9,[x20]
7101ebbdd0  ldrb w10,[x8, #0x58]
7101ebbdd4  cmp w9,#0xb
7101ebbdd8  cset w9,eq
7101ebbddc  and w10,w10,#0xfe
7101ebbde0  orr w9,w10,w9
7101ebbde4  strb w9,[x8, #0x58]
7101ebbde8  stp x24,xzr,[sp, #0x10]
7101ebbdec  cbz x0,0x7101ebbdf4
7101ebbdf0  bl 0x710392eb40
7101ebbdf4  ldr x21,[sp, #0x8]
7101ebbdf8  stp x25,xzr,[sp]
7101ebbdfc  cbz x21,0x7101ebbe18
7101ebbe00  ldr x0,[x21, #0x18]
7101ebbe04  stp x24,xzr,[x21, #0x10]
7101ebbe08  cbz x0,0x7101ebbe10
7101ebbe0c  bl 0x710392eb40
7101ebbe10  mov x0,x21
7101ebbe14  bl 0x710392eb40
7101ebbe18  mov w8,#0x4
7101ebbe1c  b 0x7101ebbf40
7101ebbe20  adrp x1,0x7104319000
7101ebbe24  add x1,x1,#0xaaf
7101ebbe28  fmov s0,0x3f800000
7101ebbe2c  bl 0x7103778300
7101ebbe30  ldr w24,[x20]
7101ebbe34  adrp x1,0x71043ad000
7101ebbe38  add x1,x1,#0xf87
7101ebbe3c  mov x8,sp
7101ebbe40  mov x0,x21
7101ebbe44  bl 0x7103776640
7101ebbe48  adrp x1,0x710433a000
7101ebbe4c  add x1,x1,#0x974
7101ebbe50  add x8,sp,#0x10
7101ebbe54  mov x0,sp
7101ebbe58  bl 0x7103776910
7101ebbe5c  ldr x0,[sp, #0x18]
7101ebbe60  ldr x8,[x0]
7101ebbe64  cbz x8,0x7101ebbe80
7101ebbe68  ldrb w10,[x8, #0x58]
7101ebbe6c  cmp w24,#0x1
7101ebbe70  cset w9,ne
7101ebbe74  and w10,w10,#0xfe
7101ebbe78  orr w9,w10,w9
7101ebbe7c  strb w9,[x8, #0x58]
7101ebbe80  adrp x25,0x710523d000
7101ebbe84  add x25,x25,#0x9a8
7101ebbe88  stp x25,xzr,[sp, #0x10]
7101ebbe8c  cbz x0,0x7101ebbe94
7101ebbe90  bl 0x710392eb40
7101ebbe94  ldr x22,[sp, #0x8]
7101ebbe98  adrp x26,0x710523d000
7101ebbe9c  add x26,x26,#0x988
7101ebbea0  stp x26,xzr,[sp]
7101ebbea4  cbz x22,0x7101ebbec0
7101ebbea8  ldr x0,[x22, #0x18]
7101ebbeac  stp x25,xzr,[x22, #0x10]
7101ebbeb0  cbz x0,0x7101ebbeb8
7101ebbeb4  bl 0x710392eb40
7101ebbeb8  mov x0,x22
7101ebbebc  bl 0x710392eb40
7101ebbec0  adrp x1,0x710438d000
7101ebbec4  add x1,x1,#0x2a3
7101ebbec8  mov x8,sp
7101ebbecc  mov x0,x21
7101ebbed0  bl 0x7103776640
7101ebbed4  adrp x1,0x710433a000
7101ebbed8  add x1,x1,#0x974
7101ebbedc  add x8,sp,#0x10
7101ebbee0  mov x0,sp
7101ebbee4  bl 0x7103776910
7101ebbee8  ldr x0,[sp, #0x18]
7101ebbeec  ldr x8,[x0]
7101ebbef0  cbz x8,0x7101ebbf0c
7101ebbef4  ldrb w10,[x8, #0x58]
7101ebbef8  cmp w24,#0x1
7101ebbefc  cset w9,eq
7101ebbf00  and w10,w10,#0xfe
7101ebbf04  orr w9,w10,w9
7101ebbf08  strb w9,[x8, #0x58]
7101ebbf0c  stp x25,xzr,[sp, #0x10]
7101ebbf10  cbz x0,0x7101ebbf18
7101ebbf14  bl 0x710392eb40
7101ebbf18  ldr x21,[sp, #0x8]
7101ebbf1c  stp x26,xzr,[sp]
7101ebbf20  cbz x21,0x7101ebbf3c
7101ebbf24  ldr x0,[x21, #0x18]
7101ebbf28  stp x25,xzr,[x21, #0x10]
7101ebbf2c  cbz x0,0x7101ebbf34
7101ebbf30  bl 0x710392eb40
7101ebbf34  mov x0,x21
7101ebbf38  bl 0x710392eb40
7101ebbf3c  orr w8,wzr,#0x3
7101ebbf40  str w8,[x23, #0x114]
7101ebbf44  ldr w8,[x23, #0x110]
7101ebbf48  ldr w1,[x20]
7101ebbf4c  cmp w8,#0x2
7101ebbf50  str w1,[x23, #0x118]
7101ebbf54  b.cs 0x7101ebc08c
7101ebbf58  add x8,x23,x8, LSL #0x3
7101ebbf5c  add x0,x8,#0x100
7101ebbf60  mov w2,#0x1
7101ebbf64  mov w21,#0x4ffff
7101ebbf68  mov w20,#0x1
7101ebbf6c  bl 0x7103771a80
7101ebbf70  ldr w2,[x23, #0xc]
7101ebbf74  ldr x8,[x23, #0xf8]
7101ebbf78  add w9,w21,#0x4b0, LSL #12
7101ebbf7c  cmp w2,w9
7101ebbf80  strb wzr,[x23, #0x11c]
7101ebbf84  b.le 0x7101ebbf90
7101ebbf88  mov w1,#0x9
7101ebbf8c  b 0x7101ebc018
7101ebbf90  orr w9,w21,#0x200000
7101ebbf94  cmp w2,w9
7101ebbf98  b.le 0x7101ebbfa4
7101ebbf9c  orr w1,wzr,#0x7
7101ebbfa0  b 0x7101ebc018
7101ebbfa4  cmp w2,#0x200, LSL #12
7101ebbfa8  b.lt 0x7101ebbfb4
7101ebbfac  mov w1,#0x5
7101ebbfb0  b 0x7101ebc018
7101ebbfb4  orr w9,w21,#0x100000
7101ebbfb8  cmp w2,w9
7101ebbfbc  b.le 0x7101ebbfc8
7101ebbfc0  orr w1,wzr,#0x6
7101ebbfc4  b 0x7101ebc018
7101ebbfc8  cmp w2,#0x100, LSL #12
7101ebbfcc  b.lt 0x7101ebbfd8
7101ebbfd0  mov w1,#0x4
7101ebbfd4  b 0x7101ebc018
7101ebbfd8  add w9,w21,#0xae, LSL #12
7101ebbfdc  cmp w2,w9
7101ebbfe0  b.le 0x7101ebbfec
7101ebbfe4  mov w1,#0x8
7101ebbfe8  b 0x7101ebc018
7101ebbfec  cmp w2,w21
7101ebbff0  b.le 0x7101ebbffc
7101ebbff4  mov w1,#0x2
7101ebbff8  b 0x7101ebc018
7101ebbffc  cmp w2,#0x10, LSL #12
7101ebc000  b.lt 0x7101ebc00c
7101ebc004  mov w1,#0x1
7101ebc008  b 0x7101ebc018
7101ebc00c  cmp w2,#0x1
7101ebc010  orr w9,wzr,#0x3
7101ebc014  csel w1,w9,wzr,lt
7101ebc018  ldr x0,[x8]
7101ebc01c  bl 0x7103775dc0
7101ebc020  add x0,x23,#0x20
7101ebc024  mov w8,#0xffffffff
7101ebc028  str wzr,[x23, #0xe4]
7101ebc02c  stp xzr,xzr,[x23, #0x28]
7101ebc030  stur xzr,[x23, #0xdc]
7101ebc034  stur xzr,[x23, #0xd4]
7101ebc038  stur xzr,[x23, #0xcc]
7101ebc03c  stur xzr,[x23, #0xc4]
7101ebc040  stur xzr,[x23, #0xbc]
7101ebc044  stur xzr,[x23, #0xb4]
7101ebc048  stur xzr,[x23, #0xac]
7101ebc04c  stur xzr,[x23, #0xa4]
7101ebc050  stur xzr,[x23, #0x9c]
7101ebc054  str x8,[x23, #0xe8]
7101ebc058  str w8,[x23, #0xf0]
7101ebc05c  strb wzr,[x23, #0xf4]
7101ebc060  str w20,[x23, #0x98]
7101ebc064  bl 0x7101ebb640
7101ebc068  strb wzr,[x19, #0x70]
7101ebc06c  ldr d8,[sp, #0x20]
7101ebc070  ldp x29,x30,[sp, #0x70]
7101ebc074  ldp x20,x19,[sp, #0x60]
7101ebc078  ldp x22,x21,[sp, #0x50]
7101ebc07c  ldp x24,x23,[sp, #0x40]
7101ebc080  ldp x26,x25,[sp, #0x30]
7101ebc084  add sp,sp,#0x80
7101ebc088  ret
7101ebc08c  bl 0x71039c2650
