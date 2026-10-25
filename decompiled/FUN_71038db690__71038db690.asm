// addr:      71038db690
// offset:    0x38db690
// name:      FUN_71038db690
// mangled:   
// size:      13452

71038db690  sub sp,sp,#0x180
71038db694  stp x28,x27,[sp, #0x120]
71038db698  stp x26,x25,[sp, #0x130]
71038db69c  stp x24,x23,[sp, #0x140]
71038db6a0  stp x22,x21,[sp, #0x150]
71038db6a4  stp x20,x19,[sp, #0x160]
71038db6a8  stp x29,x30,[sp, #0x170]
71038db6ac  add x29,sp,#0x170
71038db6b0  mov x24,x0
71038db6b4  add x0,x0,#0x4
71038db6b8  adrp x1,0x71042e5000
71038db6bc  add x1,x1,#0xd38
71038db6c0  mov w2,#0x4
71038db6c4  bl 0x71039c00c0
71038db6c8  cbz w0,0x71038dc57c
71038db6cc  ldr w8,[x24, #0x10]!
71038db6d0  mov w9,#0x494d
71038db6d4  movk w9,#0x414e, LSL #16
71038db6d8  cmp w8,w9
71038db6dc  b.ne 0x71038dc658
71038db6e0  ldrh w8,[x24, #0x4]
71038db6e4  cmp w8,#0x2
71038db6e8  b.eq 0x71038dc5cc
71038db6ec  cmp w8,#0x1
71038db6f0  b.ne 0x71038dc658
71038db6f4  ldrh w8,[x24, #0x6]
71038db6f8  cmp w8,#0x2
71038db6fc  b.eq 0x71038dc8f4
71038db700  cmp w8,#0x1
71038db704  b.eq 0x71038dc7b0
71038db708  cbnz w8,0x71038dc658
71038db70c  stp xzr,xzr,[sp, #0x98]
71038db710  str xzr,[sp, #0x90]
71038db714  ldr x8,[x24, #0x8]!
71038db718  and x9,x8,#-0x2
71038db71c  add x10,x24,x8
71038db720  tst x8,#0x1
71038db724  ldr x8,[x24, #0x8]
71038db728  csel x20,x10,x9,eq
71038db72c  cbz x8,0x71038dc658
71038db730  orr w9,wzr,#0x38
71038db734  madd x8,x8,x9,x20
71038db738  adrp x12,0x710455d000
71038db73c  add x12,x12,#0xba1
71038db740  sub x10,x29,#0x60
71038db744  str x8,[sp, #0x8]
71038db748  and x8,x12,#-0x2
71038db74c  add x11,sp,#0xb8
71038db750  sub x9,x8,x10
71038db754  orr x10,xzr,#-0x8
71038db758  str x9,[sp, #0x18]
71038db75c  sub x9,x8,x11
71038db760  str x9,[sp, #0x10]
71038db764  add x9,sp,#0xa8
71038db768  neg x22,x9
71038db76c  sub x9,x29,#0x78
71038db770  add x21,x9,#0x8
71038db774  sub x9,x10,x9
71038db778  str x9,[sp, #0x68]
71038db77c  sub x9,x29,#0xa8
71038db780  add x11,x9,#0x8
71038db784  sub x10,x10,x9
71038db788  sub x8,x8,x9
71038db78c  str x8,[sp, #0x78]
71038db790  stp x10,x11,[sp, #0x50]
71038db794  str x22,[sp, #0x30]
71038db798  str x21,[sp, #0x48]
71038db79c  mov w0,#0x10
71038db7a0  orr w1,wzr,#0x38
71038db7a4  str x20,[sp, #0x20]
71038db7a8  bl 0x710392e290
71038db7ac  mov x24,x0
71038db7b0  cbnz x0,0x71038db7fc
71038db7b4  adrp x8,0x7105332000
71038db7b8  ldr x0,[x8, #0xf00]
71038db7bc  cbz x0,0x71038db7f8
71038db7c0  orr w8,wzr,#0x38
71038db7c4  stur wzr,[x29, #-0x78]
71038db7c8  sub x1,x29,#0x78
71038db7cc  stur x8,[x29, #-0xa8]
71038db7d0  ldr x8,[x0]
71038db7d4  ldr x8,[x8, #0x30]
71038db7d8  sub x2,x29,#0xa8
71038db7dc  blr x8
71038db7e0  tbz w0,#0x0,0x71038db7f8
71038db7e4  mov w0,#0x10
71038db7e8  orr w1,wzr,#0x38
71038db7ec  bl 0x710392e290
71038db7f0  mov x24,x0
71038db7f4  cbnz x0,0x71038db7fc
71038db7f8  mov x24,xzr
71038db7fc  adrp x8,0x710455d000
71038db800  add x8,x8,#0xba1
71038db804  add x0,x24,#0x10
71038db808  and x8,x8,#-0x2
71038db80c  sub x8,x8,x0
71038db810  mov x25,x24
71038db814  stp xzr,x8,[x24, #0x8]
71038db818  mov x8,#-0x18
71038db81c  sub x8,x8,x24
71038db820  stp x8,xzr,[x24, #0x18]
71038db824  mov w9,#0x1
71038db828  mov w8,#0x494d
71038db82c  movk w8,#0x414e, LSL #16
71038db830  str x9,[x25, #0x28]!
71038db834  stp w8,w9,[x24]
71038db838  ldr x9,[sp, #0x20]
71038db83c  str xzr,[x24, #0x30]
71038db840  ldr x8,[x9]
71038db844  tbnz w8,#0x0,0x71038db850
71038db848  add x26,x9,x8
71038db84c  b 0x71038db868
71038db850  and x8,x8,#-0x2
71038db854  ldrb w9,[x8]
71038db858  tbnz w9,#0x0,0x71038db864
71038db85c  add x26,x8,#0x1
71038db860  b 0x71038db868
71038db864  ldr x26,[x8, #0x10]
71038db868  bl 0x7103828690
71038db86c  mov x1,x26
71038db870  bl 0x71039c2720
71038db874  ldr x8,[sp, #0x20]
71038db878  ldr w8,[x8, #0x8]
71038db87c  str w8,[x24, #0x8]
71038db880  mov w8,#0x2
71038db884  movk w8,#0x3, LSL #16
71038db888  str w8,[x24, #0xc]
71038db88c  ldr x8,[sp, #0x18]
71038db890  stur x8,[x29, #-0x60]
71038db894  sub x0,x29,#0x60
71038db898  bl 0x7103828690
71038db89c  adrp x1,0x71042f6000
71038db8a0  add x1,x1,#0x86b
71038db8a4  bl 0x71039c2720
71038db8a8  ldr x8,[sp, #0x10]
71038db8ac  str x8,[sp, #0xb8]
71038db8b0  add x0,sp,#0xb8
71038db8b4  bl 0x7103828690
71038db8b8  adrp x1,0x7104453000
71038db8bc  add x1,x1,#0x57a
71038db8c0  bl 0x71039c2720
71038db8c4  ldr x10,[sp, #0x20]
71038db8c8  mov x9,x10
71038db8cc  ldr x8,[x9, #0x18]!
71038db8d0  tbnz w8,#0x0,0x71038db8e4
71038db8d4  add x9,x9,x8
71038db8d8  ldr x8,[x10, #0x20]
71038db8dc  add x19,x9,x8, LSL #0x5
71038db8e0  b 0x71038db8fc
71038db8e4  and x9,x8,#-0x2
71038db8e8  sub x8,x8,#0x20
71038db8ec  ldr x9,[x9, #0x8]
71038db8f0  sub x9,x9,#0x20
71038db8f4  orr x9,x9,#0x1
71038db8f8  orr x19,x8,#0x1
71038db8fc  mov x8,x9
71038db900  cmp x9,x19
71038db904  b.eq 0x71038dc234
71038db908  mov x9,x8
71038db90c  add x8,x24,#0x18
71038db910  str x8,[sp, #0x38]
71038db914  ldr x8,[sp, #0x20]
71038db918  add x8,x8,#0x28
71038db91c  str x8,[sp, #0x70]
71038db920  mov x8,x9
71038db924  str x19,[sp, #0x28]
71038db928  and x20,x8,#-0x2
71038db92c  str x8,[sp, #0x40]
71038db930  ldrsw x8,[x20, #0x8]
71038db934  adrp x9,0x710485f000
71038db938  add x9,x9,#0x19c
71038db93c  stp x22,xzr,[sp, #0xa8]
71038db940  ldr w8,[x9, x8, LSL #0x2]
71038db944  stur w8,[x29, #-0x78]
71038db948  ldr x8,[sp, #0x68]
71038db94c  stp x8,xzr,[x29, #-0x70]
71038db950  add x1,sp,#0xa8
71038db954  mov x0,x21
71038db958  bl 0x71038dee10
71038db95c  ldur w8,[x29, #-0x78]
71038db960  stur w8,[x29, #-0xa8]
71038db964  ldp x8,x0,[sp, #0x50]
71038db968  stp x8,xzr,[x29, #-0xa0]
71038db96c  mov x1,x21
71038db970  bl 0x71038dee10
71038db974  ldr x8,[sp, #0x38]
71038db978  ldr x19,[x8]
71038db97c  str x20,[sp, #0x60]
71038db980  tbnz w19,#0x0,0x71038dba8c
71038db984  mov w0,#0x10
71038db988  mov w1,#0x20
71038db98c  bl 0x710392e290
71038db990  mov x26,x0
71038db994  cbnz x0,0x71038db9e0
71038db998  adrp x8,0x7105332000
71038db99c  ldr x0,[x8, #0xf00]
71038db9a0  cbz x0,0x71038db9dc
71038db9a4  mov w8,#0x20
71038db9a8  stur wzr,[x29, #-0xac]
71038db9ac  sub x1,x29,#0xac
71038db9b0  stur x8,[x29, #-0x88]
71038db9b4  ldr x8,[x0]
71038db9b8  ldr x8,[x8, #0x30]
71038db9bc  sub x2,x29,#0x88
71038db9c0  blr x8
71038db9c4  tbz w0,#0x0,0x71038db9dc
71038db9c8  mov w0,#0x10
71038db9cc  mov w1,#0x20
71038db9d0  bl 0x710392e290
71038db9d4  mov x26,x0
71038db9d8  cbnz x0,0x71038db9e0
71038db9dc  mov x26,xzr
71038db9e0  stp x26,xzr,[x26, #0x10]
71038db9e4  str wzr,[x26, #0x18]
71038db9e8  stp xzr,x26,[x26]
71038db9ec  ldr x8,[x24, #0x20]
71038db9f0  add x8,x8,x8, LSL #0x1
71038db9f4  lsl x8,x8,#0x3
71038db9f8  cbz x8,0x71038dba7c
71038db9fc  ldr x9,[sp, #0x38]
71038dba00  add x20,x9,x19
71038dba04  add x19,x20,x8
71038dba08  and x27,x20,#-0x2
71038dba0c  sub x0,x29,#0x88
71038dba10  mov x1,x26
71038dba14  mov x2,x27
71038dba18  bl 0x71038df040
71038dba1c  tbnz w20,#0x0,0x71038dba30
71038dba20  add x20,x20,#0x18
71038dba24  cmp x20,x19
71038dba28  b.ne 0x71038dba08
71038dba2c  b 0x71038dba7c
71038dba30  ldr x8,[x27, #0x28]
71038dba34  cbz x8,0x71038dba48
71038dba38  mov x9,x8
71038dba3c  ldr x8,[x8, #0x8]
71038dba40  cbnz x8,0x71038dba38
71038dba44  b 0x71038dba6c
71038dba48  add x8,x27,#0x18
71038dba4c  mov x9,x8
71038dba50  ldr x8,[x8]
71038dba54  ldr x10,[x8, #0x10]
71038dba58  cmp x9,x10
71038dba5c  b.eq 0x71038dba4c
71038dba60  ldr x10,[x9, #0x10]
71038dba64  cmp x10,x8
71038dba68  csel x9,x9,x8,eq
71038dba6c  sub x8,x9,#0x18
71038dba70  orr x20,x8,#0x1
71038dba74  cmp x20,x19
71038dba78  b.ne 0x71038dba08
71038dba7c  ldr x8,[sp, #0x38]
71038dba80  ldr x20,[sp, #0x60]
71038dba84  orr x19,x26,#0x1
71038dba88  str x19,[x8]
71038dba8c  and x1,x19,#-0x2
71038dba90  sub x0,x29,#0x88
71038dba94  sub x2,x29,#0xa8
71038dba98  bl 0x71038df040
71038dba9c  ldurb w8,[x29, #-0x80]
71038dbaa0  cbz w8,0x71038dbab0
71038dbaa4  ldr x8,[x24, #0x20]
71038dbaa8  add x8,x8,#0x1
71038dbaac  str x8,[x24, #0x20]
71038dbab0  ldur x19,[x29, #-0x88]
71038dbab4  ldurb w8,[x29, #-0xa0]
71038dbab8  tbz w8,#0x0,0x71038dbb20
71038dbabc  ldr x0,[sp, #0x58]
71038dbac0  bl 0x71038df350
71038dbac4  ldur x8,[x29, #-0xa0]
71038dbac8  ands x0,x8,#-0x2
71038dbacc  b.eq 0x71038dbb18
71038dbad0  ldr x8,[x0]
71038dbad4  cbz x8,0x71038dbb0c
71038dbad8  ldr x9,[x8, #0x8]
71038dbadc  cbz x9,0x71038dbaf8
71038dbae0  ldr x10,[x9, #0x10]
71038dbae4  str x10,[x8, #0x8]
71038dbae8  str x8,[x9, #0x10]
71038dbaec  mov x8,x9
71038dbaf0  cbnz x9,0x71038dbad8
71038dbaf4  b 0x71038dbb0c
71038dbaf8  ldr x9,[x8, #0x10]
71038dbafc  stp xzr,xzr,[x8]
71038dbb00  str xzr,[x8, #0x10]
71038dbb04  mov x8,x9
71038dbb08  cbnz x9,0x71038dbad8
71038dbb0c  stp xzr,xzr,[x0, #0x8]
71038dbb10  str xzr,[x0]
71038dbb14  bl 0x710392eb40
71038dbb18  ldr x8,[sp, #0x50]
71038dbb1c  stur x8,[x29, #-0xa0]
71038dbb20  ldurb w8,[x29, #-0x70]
71038dbb24  stur xzr,[x29, #-0x98]
71038dbb28  tbz w8,#0x0,0x71038dbb90
71038dbb2c  mov x0,x21
71038dbb30  bl 0x71038df350
71038dbb34  ldur x8,[x29, #-0x70]
71038dbb38  ands x0,x8,#-0x2
71038dbb3c  b.eq 0x71038dbb88
71038dbb40  ldr x8,[x0]
71038dbb44  cbz x8,0x71038dbb7c
71038dbb48  ldr x9,[x8, #0x8]
71038dbb4c  cbz x9,0x71038dbb68
71038dbb50  ldr x10,[x9, #0x10]
71038dbb54  str x10,[x8, #0x8]
71038dbb58  str x8,[x9, #0x10]
71038dbb5c  mov x8,x9
71038dbb60  cbnz x9,0x71038dbb48
71038dbb64  b 0x71038dbb7c
71038dbb68  ldr x9,[x8, #0x10]
71038dbb6c  stp xzr,xzr,[x8]
71038dbb70  str xzr,[x8, #0x10]
71038dbb74  mov x8,x9
71038dbb78  cbnz x9,0x71038dbb48
71038dbb7c  stp xzr,xzr,[x0, #0x8]
71038dbb80  str xzr,[x0]
71038dbb84  bl 0x710392eb40
71038dbb88  ldr x8,[sp, #0x68]
71038dbb8c  stur x8,[x29, #-0x70]
71038dbb90  ldrb w8,[sp, #0xa8]
71038dbb94  stur xzr,[x29, #-0x68]
71038dbb98  tbz w8,#0x0,0x71038dbbfc
71038dbb9c  add x0,sp,#0xa8
71038dbba0  bl 0x71038df350
71038dbba4  ldr x8,[sp, #0xa8]
71038dbba8  ands x0,x8,#-0x2
71038dbbac  b.eq 0x71038dbbf8
71038dbbb0  ldr x8,[x0]
71038dbbb4  cbz x8,0x71038dbbec
71038dbbb8  ldr x9,[x8, #0x8]
71038dbbbc  cbz x9,0x71038dbbd8
71038dbbc0  ldr x10,[x9, #0x10]
71038dbbc4  str x10,[x8, #0x8]
71038dbbc8  str x8,[x9, #0x10]
71038dbbcc  mov x8,x9
71038dbbd0  cbnz x9,0x71038dbbb8
71038dbbd4  b 0x71038dbbec
71038dbbd8  ldr x9,[x8, #0x10]
71038dbbdc  stp xzr,xzr,[x8]
71038dbbe0  str xzr,[x8, #0x10]
71038dbbe4  mov x8,x9
71038dbbe8  cbnz x9,0x71038dbbb8
71038dbbec  stp xzr,xzr,[x0, #0x8]
71038dbbf0  str xzr,[x0]
71038dbbf4  bl 0x710392eb40
71038dbbf8  str x22,[sp, #0xa8]
71038dbbfc  ldr x8,[x20]
71038dbc00  tbnz w8,#0x0,0x71038dbc0c
71038dbc04  add x8,x20,x8
71038dbc08  b 0x71038dbc24
71038dbc0c  and x8,x8,#-0x2
71038dbc10  ldrb w9,[x8]
71038dbc14  tbnz w9,#0x0,0x71038dbc20
71038dbc18  add x8,x8,#0x1
71038dbc1c  b 0x71038dbc24
71038dbc20  ldr x8,[x8, #0x10]
71038dbc24  stur x8,[x29, #-0x78]
71038dbc28  ldr x8,[sp, #0x68]
71038dbc2c  stp x22,xzr,[sp, #0xa8]
71038dbc30  stp x8,xzr,[x29, #-0x70]
71038dbc34  add x1,sp,#0xa8
71038dbc38  mov x0,x21
71038dbc3c  bl 0x71038df550
71038dbc40  ldur x26,[x29, #-0x78]
71038dbc44  ldr x8,[sp, #0x78]
71038dbc48  stur x8,[x29, #-0xa8]
71038dbc4c  sub x0,x29,#0xa8
71038dbc50  bl 0x7103828690
71038dbc54  mov x1,x26
71038dbc58  bl 0x71039c2720
71038dbc5c  ldp x8,x0,[sp, #0x50]
71038dbc60  stp x8,xzr,[x29, #-0xa0]
71038dbc64  mov x1,x21
71038dbc68  bl 0x71038df550
71038dbc6c  sub x8,x19,#0x18
71038dbc70  and x19,x8,#-0x2
71038dbc74  add x20,x19,#0x8
71038dbc78  ldr x21,[x20]
71038dbc7c  tbnz w21,#0x0,0x71038dbd80
71038dbc80  mov w0,#0x10
71038dbc84  mov w1,#0x20
71038dbc88  bl 0x710392e290
71038dbc8c  mov x26,x0
71038dbc90  cbnz x0,0x71038dbcdc
71038dbc94  adrp x8,0x7105332000
71038dbc98  ldr x0,[x8, #0xf00]
71038dbc9c  cbz x0,0x71038dbcd8
71038dbca0  mov w8,#0x20
71038dbca4  stur wzr,[x29, #-0xac]
71038dbca8  sub x1,x29,#0xac
71038dbcac  stur x8,[x29, #-0x88]
71038dbcb0  ldr x8,[x0]
71038dbcb4  ldr x8,[x8, #0x30]
71038dbcb8  sub x2,x29,#0x88
71038dbcbc  blr x8
71038dbcc0  tbz w0,#0x0,0x71038dbcd8
71038dbcc4  mov w0,#0x10
71038dbcc8  mov w1,#0x20
71038dbccc  bl 0x710392e290
71038dbcd0  mov x26,x0
71038dbcd4  cbnz x0,0x71038dbcdc
71038dbcd8  mov x26,xzr
71038dbcdc  stp x26,xzr,[x26, #0x10]
71038dbce0  str wzr,[x26, #0x18]
71038dbce4  stp xzr,x26,[x26]
71038dbce8  ldr x8,[x19, #0x10]
71038dbcec  add x8,x8,x8, LSL #0x1
71038dbcf0  lsl x8,x8,#0x3
71038dbcf4  cbz x8,0x71038dbd74
71038dbcf8  add x22,x20,x21
71038dbcfc  add x21,x22,x8
71038dbd00  and x27,x22,#-0x2
71038dbd04  sub x0,x29,#0x88
71038dbd08  mov x1,x26
71038dbd0c  mov x2,x27
71038dbd10  bl 0x71038df770
71038dbd14  tbnz w22,#0x0,0x71038dbd28
71038dbd18  add x22,x22,#0x18
71038dbd1c  cmp x22,x21
71038dbd20  b.ne 0x71038dbd00
71038dbd24  b 0x71038dbd74
71038dbd28  ldr x8,[x27, #0x28]
71038dbd2c  cbz x8,0x71038dbd40
71038dbd30  mov x9,x8
71038dbd34  ldr x8,[x8, #0x8]
71038dbd38  cbnz x8,0x71038dbd30
71038dbd3c  b 0x71038dbd64
71038dbd40  add x8,x27,#0x18
71038dbd44  mov x9,x8
71038dbd48  ldr x8,[x8]
71038dbd4c  ldr x10,[x8, #0x10]
71038dbd50  cmp x9,x10
71038dbd54  b.eq 0x71038dbd44
71038dbd58  ldr x10,[x9, #0x10]
71038dbd5c  cmp x10,x8
71038dbd60  csel x9,x9,x8,eq
71038dbd64  sub x8,x9,#0x18
71038dbd68  orr x22,x8,#0x1
71038dbd6c  cmp x22,x21
71038dbd70  b.ne 0x71038dbd00
71038dbd74  ldr x22,[sp, #0x30]
71038dbd78  orr x21,x26,#0x1
71038dbd7c  str x21,[x20]
71038dbd80  and x1,x21,#-0x2
71038dbd84  sub x0,x29,#0x88
71038dbd88  sub x2,x29,#0xa8
71038dbd8c  bl 0x71038df770
71038dbd90  ldr x21,[sp, #0x60]
71038dbd94  ldurb w8,[x29, #-0x80]
71038dbd98  ldr x20,[sp, #0x48]
71038dbd9c  cbz w8,0x71038dbdac
71038dbda0  ldr x8,[x19, #0x10]
71038dbda4  add x8,x8,#0x1
71038dbda8  str x8,[x19, #0x10]
71038dbdac  ldur x19,[x29, #-0x88]
71038dbdb0  sub x0,x29,#0xa8
71038dbdb4  bl 0x71038dfca0
71038dbdb8  ldurb w8,[x29, #-0x70]
71038dbdbc  tbz w8,#0x0,0x71038dbe24
71038dbdc0  mov x0,x20
71038dbdc4  bl 0x71038dfd80
71038dbdc8  ldur x8,[x29, #-0x70]
71038dbdcc  ands x0,x8,#-0x2
71038dbdd0  b.eq 0x71038dbe1c
71038dbdd4  ldr x8,[x0]
71038dbdd8  cbz x8,0x71038dbe10
71038dbddc  ldr x9,[x8, #0x8]
71038dbde0  cbz x9,0x71038dbdfc
71038dbde4  ldr x10,[x9, #0x10]
71038dbde8  str x10,[x8, #0x8]
71038dbdec  str x8,[x9, #0x10]
71038dbdf0  mov x8,x9
71038dbdf4  cbnz x9,0x71038dbddc
71038dbdf8  b 0x71038dbe10
71038dbdfc  ldr x9,[x8, #0x10]
71038dbe00  stp xzr,xzr,[x8]
71038dbe04  str xzr,[x8, #0x10]
71038dbe08  mov x8,x9
71038dbe0c  cbnz x9,0x71038dbddc
71038dbe10  stp xzr,xzr,[x0, #0x8]
71038dbe14  str xzr,[x0]
71038dbe18  bl 0x710392eb40
71038dbe1c  ldr x8,[sp, #0x68]
71038dbe20  stur x8,[x29, #-0x70]
71038dbe24  ldrb w8,[sp, #0xa8]
71038dbe28  stur xzr,[x29, #-0x68]
71038dbe2c  tbz w8,#0x0,0x71038dbe90
71038dbe30  add x0,sp,#0xa8
71038dbe34  bl 0x71038dfd80
71038dbe38  ldr x8,[sp, #0xa8]
71038dbe3c  ands x0,x8,#-0x2
71038dbe40  b.eq 0x71038dbe8c
71038dbe44  ldr x8,[x0]
71038dbe48  cbz x8,0x71038dbe80
71038dbe4c  ldr x9,[x8, #0x8]
71038dbe50  cbz x9,0x71038dbe6c
71038dbe54  ldr x10,[x9, #0x10]
71038dbe58  str x10,[x8, #0x8]
71038dbe5c  str x8,[x9, #0x10]
71038dbe60  mov x8,x9
71038dbe64  cbnz x9,0x71038dbe4c
71038dbe68  b 0x71038dbe80
71038dbe6c  ldr x9,[x8, #0x10]
71038dbe70  stp xzr,xzr,[x8]
71038dbe74  str xzr,[x8, #0x10]
71038dbe78  mov x8,x9
71038dbe7c  cbnz x9,0x71038dbe4c
71038dbe80  stp xzr,xzr,[x0, #0x8]
71038dbe84  str xzr,[x0]
71038dbe88  bl 0x710392eb40
71038dbe8c  str x22,[sp, #0xa8]
71038dbe90  mov x9,x21
71038dbe94  ldr x8,[x9, #0x10]!
71038dbe98  tbnz w8,#0x0,0x71038dbeb4
71038dbe9c  add x22,x9,x8
71038dbea0  ldr x8,[x21, #0x18]
71038dbea4  add x21,x22,x8, LSL #0x4
71038dbea8  cmp x22,x21
71038dbeac  b.ne 0x71038dbed4
71038dbeb0  b 0x71038dc1bc
71038dbeb4  and x9,x8,#-0x2
71038dbeb8  sub x8,x8,#0x10
71038dbebc  ldr x9,[x9, #0x8]
71038dbec0  sub x9,x9,#0x10
71038dbec4  orr x22,x9,#0x1
71038dbec8  orr x21,x8,#0x1
71038dbecc  cmp x22,x21
71038dbed0  b.eq 0x71038dc1bc
71038dbed4  sub x8,x19,#0x18
71038dbed8  and x8,x8,#-0x2
71038dbedc  str x8,[sp, #0x80]
71038dbee0  add x8,x8,#0x8
71038dbee4  str x8,[sp, #0x88]
71038dbee8  and x26,x22,#-0x2
71038dbeec  sub x1,x29,#0x60
71038dbef0  mov x0,x26
71038dbef4  bl 0x710383b5d0
71038dbef8  tbz w0,#0x0,0x71038dbf04
71038dbefc  mov w28,#0x8
71038dbf00  b 0x71038dbf20
71038dbf04  add x1,sp,#0xb8
71038dbf08  mov x0,x26
71038dbf0c  bl 0x710383b5d0
71038dbf10  tst w0,#0x1
71038dbf14  orr w8,wzr,#0x3
71038dbf18  mov w9,#0x8
71038dbf1c  csel w28,w9,w8,ne
71038dbf20  ldr x8,[x24, #0x30]
71038dbf24  sturb wzr,[x29, #-0xa8]
71038dbf28  add x8,x8,#0x3
71038dbf2c  and x1,x8,#-0x4
71038dbf30  sub x2,x29,#0xa8
71038dbf34  mov x0,x25
71038dbf38  bl 0x71038deb20
71038dbf3c  ldr x11,[sp, #0x70]
71038dbf40  ldr x9,[x11]
71038dbf44  ldr w8,[x26, #0x8]
71038dbf48  and x10,x9,#-0x2
71038dbf4c  add x11,x11,x9
71038dbf50  tst x9,#0x1
71038dbf54  csel x9,x11,x10,eq
71038dbf58  add x8,x9,x8, LSL #0x4
71038dbf5c  ldr x20,[x24, #0x30]
71038dbf60  ldp x9,x19,[x8]
71038dbf64  and x10,x9,#-0x2
71038dbf68  add x8,x8,x9
71038dbf6c  tst x9,#0x1
71038dbf70  csel x27,x8,x10,eq
71038dbf74  mov w23,w20
71038dbf78  cbz x19,0x71038dbfa0
71038dbf7c  mov x23,x20
71038dbf80  add x1,x23,#0x1
71038dbf84  mov x0,x25
71038dbf88  mov x2,x27
71038dbf8c  bl 0x71038deb20
71038dbf90  ldr x23,[x24, #0x30]
71038dbf94  add x27,x27,#0x1
71038dbf98  subs x19,x19,#0x1
71038dbf9c  b.ne 0x71038dbf80
71038dbfa0  ldr x8,[x26]
71038dbfa4  tbnz w8,#0x0,0x71038dbfb0
71038dbfa8  add x27,x26,x8
71038dbfac  b 0x71038dbfc8
71038dbfb0  and x8,x8,#-0x2
71038dbfb4  ldrb w9,[x8]
71038dbfb8  tbnz w9,#0x0,0x71038dbfc4
71038dbfbc  add x27,x8,#0x1
71038dbfc0  b 0x71038dbfc8
71038dbfc4  ldr x27,[x8, #0x10]
71038dbfc8  ldr x8,[sp, #0x78]
71038dbfcc  stur x8,[x29, #-0xa8]
71038dbfd0  sub x0,x29,#0xa8
71038dbfd4  bl 0x7103828690
71038dbfd8  mov x1,x27
71038dbfdc  bl 0x71039c2720
71038dbfe0  sub w8,w23,w20
71038dbfe4  stp w20,w8,[x29, #-0x94]
71038dbfe8  ldr x8,[sp, #0x88]
71038dbfec  orr w9,wzr,#0x3
71038dbff0  sturb w28,[x29, #-0xa0]
71038dbff4  sturb w9,[x29, #-0x9f]
71038dbff8  stur wzr,[x29, #-0x9c]
71038dbffc  ldr x23,[x8]
71038dc000  tbnz w23,#0x0,0x71038dc108
71038dc004  mov w0,#0x10
71038dc008  mov w1,#0x20
71038dc00c  bl 0x710392e290
71038dc010  mov x27,x0
71038dc014  cbnz x0,0x71038dc060
71038dc018  adrp x8,0x7105332000
71038dc01c  ldr x0,[x8, #0xf00]
71038dc020  cbz x0,0x71038dc05c
71038dc024  mov w8,#0x20
71038dc028  stur wzr,[x29, #-0x88]
71038dc02c  sub x1,x29,#0x88
71038dc030  stur x8,[x29, #-0x78]
71038dc034  ldr x8,[x0]
71038dc038  ldr x8,[x8, #0x30]
71038dc03c  sub x2,x29,#0x78
71038dc040  blr x8
71038dc044  tbz w0,#0x0,0x71038dc05c
71038dc048  mov w0,#0x10
71038dc04c  mov w1,#0x20
71038dc050  bl 0x710392e290
71038dc054  mov x27,x0
71038dc058  cbnz x0,0x71038dc060
71038dc05c  mov x27,xzr
71038dc060  stp x27,xzr,[x27, #0x10]
71038dc064  str wzr,[x27, #0x18]
71038dc068  stp xzr,x27,[x27]
71038dc06c  ldr x8,[sp, #0x80]
71038dc070  ldr x8,[x8, #0x10]
71038dc074  lsl x8,x8,#0x5
71038dc078  cbz x8,0x71038dc0fc
71038dc07c  ldr x9,[sp, #0x88]
71038dc080  add x19,x9,x23
71038dc084  add x23,x19,x8
71038dc088  and x28,x19,#-0x2
71038dc08c  sub x0,x29,#0x78
71038dc090  mov x1,x27
71038dc094  mov x2,x28
71038dc098  bl 0x71038dffc0
71038dc09c  tbnz w19,#0x0,0x71038dc0b0
71038dc0a0  add x19,x19,#0x20
71038dc0a4  cmp x19,x23
71038dc0a8  b.ne 0x71038dc088
71038dc0ac  b 0x71038dc0fc
71038dc0b0  ldr x8,[x28, #0x30]
71038dc0b4  cbz x8,0x71038dc0c8
71038dc0b8  mov x9,x8
71038dc0bc  ldr x8,[x8, #0x8]
71038dc0c0  cbnz x8,0x71038dc0b8
71038dc0c4  b 0x71038dc0ec
71038dc0c8  add x8,x28,#0x20
71038dc0cc  mov x9,x8
71038dc0d0  ldr x8,[x8]
71038dc0d4  ldr x10,[x8, #0x10]
71038dc0d8  cmp x9,x10
71038dc0dc  b.eq 0x71038dc0cc
71038dc0e0  ldr x10,[x9, #0x10]
71038dc0e4  cmp x10,x8
71038dc0e8  csel x9,x9,x8,eq
71038dc0ec  sub x8,x9,#0x20
71038dc0f0  orr x19,x8,#0x1
71038dc0f4  cmp x19,x23
71038dc0f8  b.ne 0x71038dc088
71038dc0fc  ldr x8,[sp, #0x88]
71038dc100  orr x23,x27,#0x1
71038dc104  str x23,[x8]
71038dc108  and x1,x23,#-0x2
71038dc10c  sub x0,x29,#0x78
71038dc110  sub x2,x29,#0xa8
71038dc114  bl 0x71038dffc0
71038dc118  ldurb w8,[x29, #-0x70]
71038dc11c  cbz w8,0x71038dc130
71038dc120  ldr x9,[sp, #0x80]
71038dc124  ldr x8,[x9, #0x10]
71038dc128  add x8,x8,#0x1
71038dc12c  str x8,[x9, #0x10]
71038dc130  ldur x8,[x29, #-0xa8]
71038dc134  tbz w8,#0x0,0x71038dc15c
71038dc138  ands x27,x8,#-0x2
71038dc13c  b.eq 0x71038dc15c
71038dc140  ldrb w8,[x27]
71038dc144  tbz w8,#0x0,0x71038dc154
71038dc148  ldr x0,[x27, #0x10]
71038dc14c  cbz x0,0x71038dc154
71038dc150  bl 0x710392eb40
71038dc154  mov x0,x27
71038dc158  bl 0x710392eb40
71038dc15c  tbnz w22,#0x0,0x71038dc170
71038dc160  add x22,x22,#0x10
71038dc164  cmp x22,x21
71038dc168  b.ne 0x71038dbee8
71038dc16c  b 0x71038dc1bc
71038dc170  ldr x8,[x26, #0x20]
71038dc174  cbz x8,0x71038dc188
71038dc178  mov x9,x8
71038dc17c  ldr x8,[x8, #0x8]
71038dc180  cbnz x8,0x71038dc178
71038dc184  b 0x71038dc1ac
71038dc188  add x8,x26,#0x10
71038dc18c  mov x9,x8
71038dc190  ldr x8,[x8]
71038dc194  ldr x10,[x8, #0x10]
71038dc198  cmp x9,x10
71038dc19c  b.eq 0x71038dc18c
71038dc1a0  ldr x10,[x9, #0x10]
71038dc1a4  cmp x10,x8
71038dc1a8  csel x9,x9,x8,eq
71038dc1ac  sub x8,x9,#0x10
71038dc1b0  orr x22,x8,#0x1
71038dc1b4  cmp x22,x21
71038dc1b8  b.ne 0x71038dbee8
71038dc1bc  ldr x8,[sp, #0x40]
71038dc1c0  tbnz w8,#0x0,0x71038dc1dc
71038dc1c4  ldp x19,x22,[sp, #0x28]
71038dc1c8  ldr x21,[sp, #0x48]
71038dc1cc  add x8,x8,#0x20
71038dc1d0  cmp x8,x19
71038dc1d4  b.ne 0x71038db928
71038dc1d8  b 0x71038dc234
71038dc1dc  ldr x9,[sp, #0x60]
71038dc1e0  ldr x8,[x9, #0x30]
71038dc1e4  ldr x21,[sp, #0x48]
71038dc1e8  ldp x19,x22,[sp, #0x28]
71038dc1ec  cbz x8,0x71038dc200
71038dc1f0  mov x9,x8
71038dc1f4  ldr x8,[x8, #0x8]
71038dc1f8  cbnz x8,0x71038dc1f0
71038dc1fc  b 0x71038dc224
71038dc200  add x8,x9,#0x20
71038dc204  mov x9,x8
71038dc208  ldr x8,[x8]
71038dc20c  ldr x10,[x8, #0x10]
71038dc210  cmp x9,x10
71038dc214  b.eq 0x71038dc204
71038dc218  ldr x10,[x9, #0x10]
71038dc21c  cmp x10,x8
71038dc220  csel x9,x9,x8,eq
71038dc224  sub x8,x9,#0x20
71038dc228  orr x8,x8,#0x1
71038dc22c  cmp x8,x19
71038dc230  b.ne 0x71038db928
71038dc234  ldr x8,[x24, #0x30]
71038dc238  sturb wzr,[x29, #-0xa8]
71038dc23c  add x1,x8,#0x10
71038dc240  sub x2,x29,#0xa8
71038dc244  mov x0,x25
71038dc248  bl 0x71038deb20
71038dc24c  sub x0,x29,#0x78
71038dc250  mov w1,#0x10
71038dc254  mov w2,#0x28
71038dc258  bl 0x710392e1f0
71038dc25c  cmp w0,#0xc
71038dc260  b.ne 0x71038dc29c
71038dc264  adrp x8,0x710593d000
71038dc268  ldr x0,[x8, #0x2b0]
71038dc26c  cbz x0,0x71038dc29c
71038dc270  mov w8,#0x28
71038dc274  stur x8,[x29, #-0xa8]
71038dc278  ldr x8,[x0]
71038dc27c  ldr x8,[x8, #0x30]
71038dc280  sub x1,x29,#0xa8
71038dc284  blr x8
71038dc288  tbz w0,#0x0,0x71038dc29c
71038dc28c  sub x0,x29,#0x78
71038dc290  mov w1,#0x10
71038dc294  mov w2,#0x28
71038dc298  bl 0x710392e1f0
71038dc29c  adrp x8,0x71052a8000
71038dc2a0  ldr x8,[x8, #0xa78]
71038dc2a4  cbz x8,0x71038dc2b8
71038dc2a8  ldur x2,[x29, #-0x78]
71038dc2ac  mov w1,#0x10
71038dc2b0  mov w0,#0x28
71038dc2b4  bl 0x71039c19e0
71038dc2b8  ldur x25,[x29, #-0x78]
71038dc2bc  mov x0,x25
71038dc2c0  bl 0x71037c3a70
71038dc2c4  adrp x8,0x7105292000
71038dc2c8  add x8,x8,#0x2f8
71038dc2cc  mov x0,x25
71038dc2d0  mov x1,x24
71038dc2d4  str x8,[x25]
71038dc2d8  str wzr,[x25, #0x10]
71038dc2dc  stp xzr,xzr,[x25, #0x18]
71038dc2e0  bl 0x71038e0b10
71038dc2e4  ldp x9,x8,[sp, #0x98]
71038dc2e8  cmp x9,x8
71038dc2ec  b.eq 0x71038dc33c
71038dc2f0  str x25,[x9]
71038dc2f4  ldr x8,[sp, #0x98]
71038dc2f8  ldr x20,[sp, #0x20]
71038dc2fc  add x8,x8,#0x8
71038dc300  str x8,[sp, #0x98]
71038dc304  ldr x8,[sp, #0xb8]
71038dc308  tbz w8,#0x0,0x71038dc52c
71038dc30c  ands x24,x8,#-0x2
71038dc310  b.eq 0x71038dc52c
71038dc314  ldrb w8,[x24]
71038dc318  tbz w8,#0x0,0x71038dc328
71038dc31c  ldr x0,[x24, #0x10]
71038dc320  cbz x0,0x71038dc328
71038dc324  bl 0x710392eb40
71038dc328  mov x0,x24
71038dc32c  bl 0x710392eb40
71038dc330  ldur x8,[x29, #-0x60]
71038dc334  tbz w8,#0x0,0x71038dc558
71038dc338  b 0x71038dc534
71038dc33c  ldr x10,[sp, #0x90]
71038dc340  sub x9,x9,x10
71038dc344  asr x19,x9,#0x3
71038dc348  add x9,x19,#0x1
71038dc34c  lsr x11,x9,#0x3d
71038dc350  cbnz x11,0x71038ddf84
71038dc354  sub x8,x8,x10
71038dc358  asr x10,x8,#0x3
71038dc35c  orr x11,xzr,#0xffffffffffffffe
71038dc360  cmp x10,x11
71038dc364  b.hi 0x71038dc380
71038dc368  asr x8,x8,#0x2
71038dc36c  cmp x8,x9
71038dc370  csel x20,x9,x8,cc
71038dc374  cbnz x20,0x71038dc384
71038dc378  mov x10,xzr
71038dc37c  b 0x71038dc3f4
71038dc380  orr x20,xzr,#0x1fffffffffffffff
71038dc384  lsl x24,x20,#0x3
71038dc388  sub x0,x29,#0x78
71038dc38c  mov w1,#0x10
71038dc390  mov x2,x24
71038dc394  bl 0x710392e1f0
71038dc398  cmp w0,#0xc
71038dc39c  b.ne 0x71038dc3d4
71038dc3a0  adrp x8,0x710593d000
71038dc3a4  ldr x0,[x8, #0x2b0]
71038dc3a8  cbz x0,0x71038dc3d4
71038dc3ac  stur x24,[x29, #-0xa8]
71038dc3b0  ldr x8,[x0]
71038dc3b4  ldr x8,[x8, #0x30]
71038dc3b8  sub x1,x29,#0xa8
71038dc3bc  blr x8
71038dc3c0  tbz w0,#0x0,0x71038dc3d4
71038dc3c4  sub x0,x29,#0x78
71038dc3c8  mov w1,#0x10
71038dc3cc  mov x2,x24
71038dc3d0  bl 0x710392e1f0
71038dc3d4  adrp x8,0x71052a8000
71038dc3d8  ldr x8,[x8, #0xa78]
71038dc3dc  cbz x8,0x71038dc3f0
71038dc3e0  ldur x2,[x29, #-0x78]
71038dc3e4  mov w1,#0x10
71038dc3e8  mov x0,x24
71038dc3ec  bl 0x71039c19e0
71038dc3f0  ldur x10,[x29, #-0x78]
71038dc3f4  add x12,x10,x19, LSL #0x3
71038dc3f8  mov x9,x12
71038dc3fc  add x8,x10,x20, LSL #0x3
71038dc400  str x25,[x9], #0x8
71038dc404  ldp x24,x11,[sp, #0x90]
71038dc408  cmp x11,x24
71038dc40c  b.eq 0x71038dc4f8
71038dc410  sub x15,x11,#0x8
71038dc414  sub x14,x15,x24
71038dc418  ldr x20,[sp, #0x20]
71038dc41c  lsr x16,x14,#0x3
71038dc420  mvn x13,x16
71038dc424  add w16,w16,#0x1
71038dc428  ands x16,x16,#0x3
71038dc42c  b.eq 0x71038dc458
71038dc430  sub x17,x19,x16
71038dc434  neg x16,x16
71038dc438  sub x12,x12,#0x8
71038dc43c  mov x18,x16
71038dc440  ldr x0,[x15], #-0x8
71038dc444  adds x18,x18,#0x1
71038dc448  str x0,[x12], #-0x8
71038dc44c  b.ne 0x71038dc440
71038dc450  add x12,x10,x17, LSL #0x3
71038dc454  add x11,x11,x16, LSL #0x3
71038dc458  add x13,x19,x13
71038dc45c  cmp x14,#0x18
71038dc460  b.cc 0x71038dc4ec
71038dc464  sub x14,x11,#0x20
71038dc468  sub x14,x14,x24
71038dc46c  tbnz w14,#0x5,0x71038dc494
71038dc470  ldur x15,[x11, #-0x8]
71038dc474  stur x15,[x12, #-0x8]
71038dc478  ldur x15,[x11, #-0x10]
71038dc47c  stur x15,[x12, #-0x10]
71038dc480  ldur x15,[x11, #-0x18]
71038dc484  stur x15,[x12, #-0x18]
71038dc488  ldr x15,[x11, #-0x20]!
71038dc48c  stur x15,[x12, #-0x20]
71038dc490  sub x12,x12,#0x20
71038dc494  cmp x14,#0x20
71038dc498  b.cc 0x71038dc4ec
71038dc49c  sub x12,x12,#0x20
71038dc4a0  ldur x14,[x11, #-0x8]
71038dc4a4  str x14,[x12, #0x18]
71038dc4a8  ldur x14,[x11, #-0x10]
71038dc4ac  str x14,[x12, #0x10]
71038dc4b0  ldur x14,[x11, #-0x18]
71038dc4b4  str x14,[x12, #0x8]
71038dc4b8  ldur x14,[x11, #-0x20]
71038dc4bc  str x14,[x12]
71038dc4c0  ldur x14,[x11, #-0x28]
71038dc4c4  stur x14,[x12, #-0x8]
71038dc4c8  ldur x14,[x11, #-0x30]
71038dc4cc  stur x14,[x12, #-0x10]
71038dc4d0  ldur x14,[x11, #-0x38]
71038dc4d4  stur x14,[x12, #-0x18]
71038dc4d8  ldr x14,[x11, #-0x40]!
71038dc4dc  stur x14,[x12, #-0x20]
71038dc4e0  sub x12,x12,#0x40
71038dc4e4  cmp x24,x11
71038dc4e8  b.ne 0x71038dc4a0
71038dc4ec  ldr x24,[sp, #0x90]
71038dc4f0  add x12,x10,x13, LSL #0x3
71038dc4f4  b 0x71038dc4fc
71038dc4f8  ldr x20,[sp, #0x20]
71038dc4fc  stp x12,x9,[sp, #0x90]
71038dc500  str x8,[sp, #0xa0]
71038dc504  cbz x24,0x71038dc524
71038dc508  adrp x8,0x71052a8000
71038dc50c  ldr x8,[x8, #0xa70]
71038dc510  cbz x8,0x71038dc51c
71038dc514  mov x0,x24
71038dc518  bl 0x71039c19b0
71038dc51c  mov x0,x24
71038dc520  bl 0x710392eb40
71038dc524  ldr x8,[sp, #0xb8]
71038dc528  tbnz w8,#0x0,0x71038dc30c
71038dc52c  ldur x8,[x29, #-0x60]
71038dc530  tbz w8,#0x0,0x71038dc558
71038dc534  ands x24,x8,#-0x2
71038dc538  b.eq 0x71038dc558
71038dc53c  ldrb w8,[x24]
71038dc540  tbz w8,#0x0,0x71038dc550
71038dc544  ldr x0,[x24, #0x10]
71038dc548  cbz x0,0x71038dc550
71038dc54c  bl 0x710392eb40
71038dc550  mov x0,x24
71038dc554  bl 0x710392eb40
71038dc558  ldr x8,[sp, #0x8]
71038dc55c  add x20,x20,#0x38
71038dc560  cmp x20,x8
71038dc564  b.ne 0x71038db79c
71038dc568  ldp x20,x8,[sp, #0x90]
71038dc56c  cmp x20,x8
71038dc570  b.eq 0x71038ddf58
71038dc574  ldr x21,[x20]
71038dc578  b 0x71038ddf60
71038dc57c  ldr w8,[x24]
71038dc580  add x8,x24,x8
71038dc584  ldrsw x9,[x8]
71038dc588  sub x9,x8,x9
71038dc58c  ldrh w10,[x9]
71038dc590  cmp w10,#0x5
71038dc594  b.cc 0x71038dc658
71038dc598  ldrh w11,[x9, #0x4]
71038dc59c  cbz x11,0x71038dc658
71038dc5a0  ldrb w11,[x8, x11, LSL ]
71038dc5a4  cmp w11,#0x1
71038dc5a8  b.ne 0x71038dc658
71038dc5ac  cmp w10,#0x7
71038dc5b0  b.cc 0x71038dc680
71038dc5b4  ldrh w9,[x9, #0x6]
71038dc5b8  cbz x9,0x71038dc680
71038dc5bc  add x8,x8,x9
71038dc5c0  ldr w9,[x8]
71038dc5c4  add x19,x8,x9
71038dc5c8  b 0x71038dc684
71038dc5cc  ldrh w8,[x24, #0x6]
71038dc5d0  cmp w8,#0x1
71038dc5d4  b.eq 0x71038dc714
71038dc5d8  cbnz w8,0x71038dc658
71038dc5dc  mov w2,#0x28
71038dc5e0  sub x0,x29,#0x78
71038dc5e4  mov w1,#0x10
71038dc5e8  bl 0x710392e1f0
71038dc5ec  cmp w0,#0xc
71038dc5f0  b.ne 0x71038dc62c
71038dc5f4  adrp x8,0x710593d000
71038dc5f8  ldr x0,[x8, #0x2b0]
71038dc5fc  cbz x0,0x71038dc62c
71038dc600  mov w8,#0x28
71038dc604  stur x8,[x29, #-0xa8]
71038dc608  ldr x8,[x0]
71038dc60c  ldr x8,[x8, #0x30]
71038dc610  sub x1,x29,#0xa8
71038dc614  blr x8
71038dc618  tbz w0,#0x0,0x71038dc62c
71038dc61c  mov w2,#0x28
71038dc620  sub x0,x29,#0x78
71038dc624  mov w1,#0x10
71038dc628  bl 0x710392e1f0
71038dc62c  adrp x8,0x71052a8000
71038dc630  ldr x8,[x8, #0xa78]
71038dc634  cbz x8,0x71038dc648
71038dc638  ldur x2,[x29, #-0x78]
71038dc63c  mov w0,#0x28
71038dc640  mov w1,#0x10
71038dc644  bl 0x71039c19e0
71038dc648  ldur x21,[x29, #-0x78]
71038dc64c  mov x0,x21
71038dc650  bl 0x71037c3a70
71038dc654  b 0x71038dc78c
71038dc658  mov x21,xzr
71038dc65c  mov x0,x21
71038dc660  ldp x29,x30,[sp, #0x170]
71038dc664  ldp x20,x19,[sp, #0x160]
71038dc668  ldp x22,x21,[sp, #0x150]
71038dc66c  ldp x24,x23,[sp, #0x140]
71038dc670  ldp x26,x25,[sp, #0x130]
71038dc674  ldp x28,x27,[sp, #0x120]
71038dc678  add sp,sp,#0x180
71038dc67c  ret
71038dc680  mov x19,xzr
71038dc684  mov w2,#0x28
71038dc688  sub x0,x29,#0x78
71038dc68c  mov w1,#0x10
71038dc690  bl 0x710392e1f0
71038dc694  cmp w0,#0xc
71038dc698  b.ne 0x71038dc6d4
71038dc69c  adrp x8,0x710593d000
71038dc6a0  ldr x0,[x8, #0x2b0]
71038dc6a4  cbz x0,0x71038dc6d4
71038dc6a8  mov w8,#0x28
71038dc6ac  stur x8,[x29, #-0xa8]
71038dc6b0  ldr x8,[x0]
71038dc6b4  ldr x8,[x8, #0x30]
71038dc6b8  sub x1,x29,#0xa8
71038dc6bc  blr x8
71038dc6c0  tbz w0,#0x0,0x71038dc6d4
71038dc6c4  mov w2,#0x28
71038dc6c8  sub x0,x29,#0x78
71038dc6cc  mov w1,#0x10
71038dc6d0  bl 0x710392e1f0
71038dc6d4  adrp x8,0x71052a8000
71038dc6d8  ldr x8,[x8, #0xa78]
71038dc6dc  cbz x8,0x71038dc6f0
71038dc6e0  ldur x2,[x29, #-0x78]
71038dc6e4  mov w0,#0x28
71038dc6e8  mov w1,#0x10
71038dc6ec  bl 0x71039c19e0
71038dc6f0  ldur x21,[x29, #-0x78]
71038dc6f4  mov x0,x21
71038dc6f8  bl 0x71037c3a70
71038dc6fc  adrp x8,0x7105292000
71038dc700  add x8,x8,#0x2f8
71038dc704  str wzr,[x21, #0x10]
71038dc708  str x8,[x21]
71038dc70c  stp x19,xzr,[x21, #0x18]
71038dc710  b 0x71038dc65c
71038dc714  mov w2,#0x28
71038dc718  sub x0,x29,#0x78
71038dc71c  mov w1,#0x10
71038dc720  bl 0x710392e1f0
71038dc724  cmp w0,#0xc
71038dc728  b.ne 0x71038dc764
71038dc72c  adrp x8,0x710593d000
71038dc730  ldr x0,[x8, #0x2b0]
71038dc734  cbz x0,0x71038dc764
71038dc738  mov w8,#0x28
71038dc73c  stur x8,[x29, #-0xa8]
71038dc740  ldr x8,[x0]
71038dc744  ldr x8,[x8, #0x30]
71038dc748  sub x1,x29,#0xa8
71038dc74c  blr x8
71038dc750  tbz w0,#0x0,0x71038dc764
71038dc754  mov w2,#0x28
71038dc758  sub x0,x29,#0x78
71038dc75c  mov w1,#0x10
71038dc760  bl 0x710392e1f0
71038dc764  adrp x8,0x71052a8000
71038dc768  ldr x8,[x8, #0xa78]
71038dc76c  cbz x8,0x71038dc780
71038dc770  ldur x2,[x29, #-0x78]
71038dc774  mov w0,#0x28
71038dc778  mov w1,#0x10
71038dc77c  bl 0x71039c19e0
71038dc780  ldur x21,[x29, #-0x78]
71038dc784  mov x0,x21
71038dc788  bl 0x71037c3a70
71038dc78c  adrp x8,0x7105292000
71038dc790  add x8,x8,#0x2f8
71038dc794  mov x0,x21
71038dc798  mov x1,x24
71038dc79c  str x8,[x21]
71038dc7a0  str wzr,[x21, #0x10]
71038dc7a4  stp xzr,xzr,[x21, #0x18]
71038dc7a8  bl 0x71038e0a70
71038dc7ac  b 0x71038dc65c
71038dc7b0  mov w2,#0x28
71038dc7b4  sub x0,x29,#0x78
71038dc7b8  mov w1,#0x10
71038dc7bc  bl 0x710392e1f0
71038dc7c0  cmp w0,#0xc
71038dc7c4  b.ne 0x71038dc800
71038dc7c8  adrp x8,0x710593d000
71038dc7cc  ldr x0,[x8, #0x2b0]
71038dc7d0  cbz x0,0x71038dc800
71038dc7d4  mov w8,#0x28
71038dc7d8  stur x8,[x29, #-0xa8]
71038dc7dc  ldr x8,[x0]
71038dc7e0  ldr x8,[x8, #0x30]
71038dc7e4  sub x1,x29,#0xa8
71038dc7e8  blr x8
71038dc7ec  tbz w0,#0x0,0x71038dc800
71038dc7f0  mov w2,#0x28
71038dc7f4  sub x0,x29,#0x78
71038dc7f8  mov w1,#0x10
71038dc7fc  bl 0x710392e1f0
71038dc800  adrp x8,0x71052a8000
71038dc804  ldr x8,[x8, #0xa78]
71038dc808  cbz x8,0x71038dc81c
71038dc80c  ldur x2,[x29, #-0x78]
71038dc810  mov w0,#0x28
71038dc814  mov w1,#0x10
71038dc818  bl 0x71039c19e0
71038dc81c  ldur x19,[x29, #-0x78]
71038dc820  mov x0,x19
71038dc824  bl 0x71037c3a70
71038dc828  adrp x8,0x7105292000
71038dc82c  add x8,x8,#0x2f8
71038dc830  mov w0,#0x10
71038dc834  orr w1,wzr,#0x38
71038dc838  str x8,[x19]
71038dc83c  add x22,x24,#0x8
71038dc840  str wzr,[x19, #0x10]
71038dc844  stp xzr,xzr,[x19, #0x18]
71038dc848  str x19,[sp, #0x20]
71038dc84c  bl 0x710392e290
71038dc850  mov x20,x0
71038dc854  cbnz x0,0x71038dc8a0
71038dc858  adrp x8,0x7105332000
71038dc85c  ldr x0,[x8, #0xf00]
71038dc860  cbz x0,0x71038dc89c
71038dc864  orr w8,wzr,#0x38
71038dc868  stur wzr,[x29, #-0x78]
71038dc86c  sub x1,x29,#0x78
71038dc870  stur x8,[x29, #-0xa8]
71038dc874  ldr x8,[x0]
71038dc878  ldr x8,[x8, #0x30]
71038dc87c  sub x2,x29,#0xa8
71038dc880  blr x8
71038dc884  tbz w0,#0x0,0x71038dc89c
71038dc888  mov w0,#0x10
71038dc88c  orr w1,wzr,#0x38
71038dc890  bl 0x710392e290
71038dc894  mov x20,x0
71038dc898  cbnz x0,0x71038dc8a0
71038dc89c  mov x20,xzr
71038dc8a0  adrp x19,0x710455d000
71038dc8a4  add x19,x19,#0xba1
71038dc8a8  add x0,x20,#0x10
71038dc8ac  and x8,x19,#-0x2
71038dc8b0  sub x8,x8,x0
71038dc8b4  mov x21,x20
71038dc8b8  stp xzr,x8,[x20, #0x8]
71038dc8bc  mov x8,#-0x18
71038dc8c0  sub x8,x8,x20
71038dc8c4  stp x8,xzr,[x20, #0x18]
71038dc8c8  mov w8,#0x1
71038dc8cc  mov w9,#0x494d
71038dc8d0  movk w9,#0x414e, LSL #16
71038dc8d4  str x8,[x21, #0x28]!
71038dc8d8  orr w8,wzr,#0x10001
71038dc8dc  str xzr,[x20, #0x30]
71038dc8e0  stp w9,w8,[x20]
71038dc8e4  ldr x8,[x22]
71038dc8e8  tbnz w8,#0x0,0x71038dca3c
71038dc8ec  add x22,x22,x8
71038dc8f0  b 0x71038dca68
71038dc8f4  mov w2,#0x28
71038dc8f8  sub x0,x29,#0x78
71038dc8fc  mov w1,#0x10
71038dc900  bl 0x710392e1f0
71038dc904  cmp w0,#0xc
71038dc908  b.ne 0x71038dc944
71038dc90c  adrp x8,0x710593d000
71038dc910  ldr x0,[x8, #0x2b0]
71038dc914  cbz x0,0x71038dc944
71038dc918  mov w8,#0x28
71038dc91c  stur x8,[x29, #-0xa8]
71038dc920  ldr x8,[x0]
71038dc924  ldr x8,[x8, #0x30]
71038dc928  sub x1,x29,#0xa8
71038dc92c  blr x8
71038dc930  tbz w0,#0x0,0x71038dc944
71038dc934  mov w2,#0x28
71038dc938  sub x0,x29,#0x78
71038dc93c  mov w1,#0x10
71038dc940  bl 0x710392e1f0
71038dc944  adrp x8,0x71052a8000
71038dc948  ldr x8,[x8, #0xa78]
71038dc94c  cbz x8,0x71038dc960
71038dc950  ldur x2,[x29, #-0x78]
71038dc954  mov w0,#0x28
71038dc958  mov w1,#0x10
71038dc95c  bl 0x71039c19e0
71038dc960  ldur x19,[x29, #-0x78]
71038dc964  mov x0,x19
71038dc968  bl 0x71037c3a70
71038dc96c  adrp x8,0x7105292000
71038dc970  add x8,x8,#0x2f8
71038dc974  mov w0,#0x10
71038dc978  orr w1,wzr,#0x38
71038dc97c  str x8,[x19]
71038dc980  add x22,x24,#0x8
71038dc984  str wzr,[x19, #0x10]
71038dc988  stp xzr,xzr,[x19, #0x18]
71038dc98c  str x19,[sp, #0x20]
71038dc990  bl 0x710392e290
71038dc994  mov x20,x0
71038dc998  cbnz x0,0x71038dc9e4
71038dc99c  adrp x8,0x7105332000
71038dc9a0  ldr x0,[x8, #0xf00]
71038dc9a4  cbz x0,0x71038dc9e0
71038dc9a8  orr w8,wzr,#0x38
71038dc9ac  stur wzr,[x29, #-0x78]
71038dc9b0  sub x1,x29,#0x78
71038dc9b4  stur x8,[x29, #-0xa8]
71038dc9b8  ldr x8,[x0]
71038dc9bc  ldr x8,[x8, #0x30]
71038dc9c0  sub x2,x29,#0xa8
71038dc9c4  blr x8
71038dc9c8  tbz w0,#0x0,0x71038dc9e0
71038dc9cc  mov w0,#0x10
71038dc9d0  orr w1,wzr,#0x38
71038dc9d4  bl 0x710392e290
71038dc9d8  mov x20,x0
71038dc9dc  cbnz x0,0x71038dc9e4
71038dc9e0  mov x20,xzr
71038dc9e4  adrp x19,0x710455d000
71038dc9e8  add x19,x19,#0xba1
71038dc9ec  add x0,x20,#0x10
71038dc9f0  and x8,x19,#-0x2
71038dc9f4  sub x8,x8,x0
71038dc9f8  mov x21,x20
71038dc9fc  stp xzr,x8,[x20, #0x8]
71038dca00  mov x8,#-0x18
71038dca04  sub x8,x8,x20
71038dca08  stp x8,xzr,[x20, #0x18]
71038dca0c  mov w8,#0x1
71038dca10  mov w9,#0x494d
71038dca14  movk w9,#0x414e, LSL #16
71038dca18  str x8,[x21, #0x28]!
71038dca1c  mov w8,#0x1
71038dca20  movk w8,#0x2, LSL #16
71038dca24  str xzr,[x20, #0x30]
71038dca28  stp w9,w8,[x20]
71038dca2c  ldr x8,[x22]
71038dca30  tbnz w8,#0x0,0x71038dca50
71038dca34  add x22,x22,x8
71038dca38  b 0x71038dd4b4
71038dca3c  and x8,x8,#-0x2
71038dca40  ldrb w9,[x8]
71038dca44  tbnz w9,#0x0,0x71038dca64
71038dca48  add x22,x8,#0x1
71038dca4c  b 0x71038dca68
71038dca50  and x8,x8,#-0x2
71038dca54  ldrb w9,[x8]
71038dca58  tbnz w9,#0x0,0x71038dd4b0
71038dca5c  add x22,x8,#0x1
71038dca60  b 0x71038dd4b4
71038dca64  ldr x22,[x8, #0x10]
71038dca68  bl 0x7103828690
71038dca6c  mov x1,x22
71038dca70  bl 0x71039c2720
71038dca74  ldr w8,[x24, #0x10]
71038dca78  mov w9,#0x2
71038dca7c  movk w9,#0x3, LSL #16
71038dca80  and x22,x19,#-0x2
71038dca84  stp w8,w9,[x20, #0x8]
71038dca88  add x8,sp,#0xa8
71038dca8c  sub x8,x22,x8
71038dca90  add x0,sp,#0xa8
71038dca94  str x8,[sp, #0xa8]
71038dca98  bl 0x7103828690
71038dca9c  adrp x1,0x71042f6000
71038dcaa0  add x1,x1,#0x86b
71038dcaa4  bl 0x71039c2720
71038dcaa8  sub x8,x29,#0x60
71038dcaac  sub x8,x22,x8
71038dcab0  str x8,[sp, #0x18]
71038dcab4  stur x8,[x29, #-0x60]
71038dcab8  sub x0,x29,#0x60
71038dcabc  bl 0x7103828690
71038dcac0  adrp x1,0x7104453000
71038dcac4  add x1,x1,#0x57a
71038dcac8  bl 0x71039c2720
71038dcacc  mov x9,x24
71038dcad0  ldr x8,[x9, #0x20]!
71038dcad4  tbnz w8,#0x0,0x71038dcaf0
71038dcad8  add x9,x9,x8
71038dcadc  ldr x8,[x24, #0x28]
71038dcae0  add x8,x9,x8, LSL #0x5
71038dcae4  cmp x9,x8
71038dcae8  b.ne 0x71038dcb10
71038dcaec  b 0x71038dd494
71038dcaf0  and x9,x8,#-0x2
71038dcaf4  sub x8,x8,#0x20
71038dcaf8  ldr x9,[x9, #0x8]
71038dcafc  sub x9,x9,#0x20
71038dcb00  orr x9,x9,#0x1
71038dcb04  orr x8,x8,#0x1
71038dcb08  cmp x9,x8
71038dcb0c  b.eq 0x71038dd494
71038dcb10  str x8,[sp, #0x28]
71038dcb14  add x8,x20,#0x18
71038dcb18  str x8,[sp, #0x40]
71038dcb1c  sub x8,x29,#0x88
71038dcb20  mov x11,x9
71038dcb24  sub x9,x29,#0x78
71038dcb28  neg x27,x8
71038dcb2c  orr x8,xzr,#-0x8
71038dcb30  add x22,x9,#0x8
71038dcb34  sub x28,x8,x9
71038dcb38  sub x9,x29,#0xa8
71038dcb3c  add x10,x9,#0x8
71038dcb40  sub x8,x8,x9
71038dcb44  stp x8,x10,[sp, #0x50]
71038dcb48  and x8,x19,#-0x2
71038dcb4c  mov x19,x11
71038dcb50  sub x8,x8,x9
71038dcb54  stp x28,x27,[sp, #0x30]
71038dcb58  stp x22,x8,[sp, #0x68]
71038dcb5c  add x8,x24,#0x30
71038dcb60  str x8,[sp, #0x88]
71038dcb64  and x23,x19,#-0x2
71038dcb68  ldrsw x8,[x23, #0x8]
71038dcb6c  adrp x9,0x710485f000
71038dcb70  add x9,x9,#0x19c
71038dcb74  ldr w8,[x9, x8, LSL #0x2]
71038dcb78  stp x27,xzr,[x29, #-0x88]
71038dcb7c  stur w8,[x29, #-0x78]
71038dcb80  stp x28,xzr,[x29, #-0x70]
71038dcb84  sub x1,x29,#0x88
71038dcb88  mov x0,x22
71038dcb8c  bl 0x71038dee10
71038dcb90  ldur w8,[x29, #-0x78]
71038dcb94  stur w8,[x29, #-0xa8]
71038dcb98  str x19,[sp, #0x48]
71038dcb9c  ldp x8,x0,[sp, #0x50]
71038dcba0  stp x8,xzr,[x29, #-0xa0]
71038dcba4  mov x1,x22
71038dcba8  bl 0x71038dee10
71038dcbac  ldr x8,[sp, #0x40]
71038dcbb0  ldr x19,[x8]
71038dcbb4  str x23,[sp, #0x60]
71038dcbb8  tbnz w19,#0x0,0x71038dccc4
71038dcbbc  mov w0,#0x10
71038dcbc0  mov w1,#0x20
71038dcbc4  bl 0x710392e290
71038dcbc8  mov x24,x0
71038dcbcc  cbnz x0,0x71038dcc18
71038dcbd0  adrp x8,0x7105332000
71038dcbd4  ldr x0,[x8, #0xf00]
71038dcbd8  cbz x0,0x71038dcc14
71038dcbdc  mov w8,#0x20
71038dcbe0  str wzr,[sp, #0xb8]
71038dcbe4  add x1,sp,#0xb8
71038dcbe8  str x8,[sp, #0x90]
71038dcbec  ldr x8,[x0]
71038dcbf0  ldr x8,[x8, #0x30]
71038dcbf4  add x2,sp,#0x90
71038dcbf8  blr x8
71038dcbfc  tbz w0,#0x0,0x71038dcc14
71038dcc00  mov w0,#0x10
71038dcc04  mov w1,#0x20
71038dcc08  bl 0x710392e290
71038dcc0c  mov x24,x0
71038dcc10  cbnz x0,0x71038dcc18
71038dcc14  mov x24,xzr
71038dcc18  stp x24,xzr,[x24, #0x10]
71038dcc1c  str wzr,[x24, #0x18]
71038dcc20  stp xzr,x24,[x24]
71038dcc24  ldr x8,[x20, #0x20]
71038dcc28  add x8,x8,x8, LSL #0x1
71038dcc2c  lsl x8,x8,#0x3
71038dcc30  cbz x8,0x71038dccb4
71038dcc34  ldr x9,[sp, #0x40]
71038dcc38  add x22,x9,x19
71038dcc3c  add x19,x22,x8
71038dcc40  and x25,x22,#-0x2
71038dcc44  add x0,sp,#0x90
71038dcc48  mov x1,x24
71038dcc4c  mov x2,x25
71038dcc50  bl 0x71038df040
71038dcc54  tbnz w22,#0x0,0x71038dcc68
71038dcc58  add x22,x22,#0x18
71038dcc5c  cmp x22,x19
71038dcc60  b.ne 0x71038dcc40
71038dcc64  b 0x71038dccb4
71038dcc68  ldr x8,[x25, #0x28]
71038dcc6c  cbz x8,0x71038dcc80
71038dcc70  mov x9,x8
71038dcc74  ldr x8,[x8, #0x8]
71038dcc78  cbnz x8,0x71038dcc70
71038dcc7c  b 0x71038dcca4
71038dcc80  add x8,x25,#0x18
71038dcc84  mov x9,x8
71038dcc88  ldr x8,[x8]
71038dcc8c  ldr x10,[x8, #0x10]
71038dcc90  cmp x9,x10
71038dcc94  b.eq 0x71038dcc84
71038dcc98  ldr x10,[x9, #0x10]
71038dcc9c  cmp x10,x8
71038dcca0  csel x9,x9,x8,eq
71038dcca4  sub x8,x9,#0x18
71038dcca8  orr x22,x8,#0x1
71038dccac  cmp x22,x19
71038dccb0  b.ne 0x71038dcc40
71038dccb4  ldr x8,[sp, #0x40]
71038dccb8  orr x19,x24,#0x1
71038dccbc  str x19,[x8]
71038dccc0  ldp x23,x22,[sp, #0x60]
71038dccc4  and x1,x19,#-0x2
71038dccc8  add x0,sp,#0x90
71038dcccc  sub x2,x29,#0xa8
71038dccd0  bl 0x71038df040
71038dccd4  ldrb w8,[sp, #0x98]
71038dccd8  cbz w8,0x71038dcce8
71038dccdc  ldr x8,[x20, #0x20]
71038dcce0  add x8,x8,#0x1
71038dcce4  str x8,[x20, #0x20]
71038dcce8  ldr x19,[sp, #0x90]
71038dccec  ldurb w8,[x29, #-0xa0]
71038dccf0  tbz w8,#0x0,0x71038dcd58
71038dccf4  ldr x0,[sp, #0x58]
71038dccf8  bl 0x71038df350
71038dccfc  ldur x8,[x29, #-0xa0]
71038dcd00  ands x0,x8,#-0x2
71038dcd04  b.eq 0x71038dcd50
71038dcd08  ldr x8,[x0]
71038dcd0c  cbz x8,0x71038dcd44
71038dcd10  ldr x9,[x8, #0x8]
71038dcd14  cbz x9,0x71038dcd30
71038dcd18  ldr x10,[x9, #0x10]
71038dcd1c  str x10,[x8, #0x8]
71038dcd20  str x8,[x9, #0x10]
71038dcd24  mov x8,x9
71038dcd28  cbnz x9,0x71038dcd10
71038dcd2c  b 0x71038dcd44
71038dcd30  ldr x9,[x8, #0x10]
71038dcd34  stp xzr,xzr,[x8]
71038dcd38  str xzr,[x8, #0x10]
71038dcd3c  mov x8,x9
71038dcd40  cbnz x9,0x71038dcd10
71038dcd44  stp xzr,xzr,[x0, #0x8]
71038dcd48  str xzr,[x0]
71038dcd4c  bl 0x710392eb40
71038dcd50  ldr x8,[sp, #0x50]
71038dcd54  stur x8,[x29, #-0xa0]
71038dcd58  ldurb w8,[x29, #-0x70]
71038dcd5c  stur xzr,[x29, #-0x98]
71038dcd60  tbz w8,#0x0,0x71038dcdc4
71038dcd64  mov x0,x22
71038dcd68  bl 0x71038df350
71038dcd6c  ldur x8,[x29, #-0x70]
71038dcd70  ands x0,x8,#-0x2
71038dcd74  b.eq 0x71038dcdc0
71038dcd78  ldr x8,[x0]
71038dcd7c  cbz x8,0x71038dcdb4
71038dcd80  ldr x9,[x8, #0x8]
71038dcd84  cbz x9,0x71038dcda0
71038dcd88  ldr x10,[x9, #0x10]
71038dcd8c  str x10,[x8, #0x8]
71038dcd90  str x8,[x9, #0x10]
71038dcd94  mov x8,x9
71038dcd98  cbnz x9,0x71038dcd80
71038dcd9c  b 0x71038dcdb4
71038dcda0  ldr x9,[x8, #0x10]
71038dcda4  stp xzr,xzr,[x8]
71038dcda8  str xzr,[x8, #0x10]
71038dcdac  mov x8,x9
71038dcdb0  cbnz x9,0x71038dcd80
71038dcdb4  stp xzr,xzr,[x0, #0x8]
71038dcdb8  str xzr,[x0]
71038dcdbc  bl 0x710392eb40
71038dcdc0  stur x28,[x29, #-0x70]
71038dcdc4  ldurb w8,[x29, #-0x88]
71038dcdc8  stur xzr,[x29, #-0x68]
71038dcdcc  tbz w8,#0x0,0x71038dce30
71038dcdd0  sub x0,x29,#0x88
71038dcdd4  bl 0x71038df350
71038dcdd8  ldur x8,[x29, #-0x88]
71038dcddc  ands x0,x8,#-0x2
71038dcde0  b.eq 0x71038dce2c
71038dcde4  ldr x8,[x0]
71038dcde8  cbz x8,0x71038dce20
71038dcdec  ldr x9,[x8, #0x8]
71038dcdf0  cbz x9,0x71038dce0c
71038dcdf4  ldr x10,[x9, #0x10]
71038dcdf8  str x10,[x8, #0x8]
71038dcdfc  str x8,[x9, #0x10]
71038dce00  mov x8,x9
71038dce04  cbnz x9,0x71038dcdec
71038dce08  b 0x71038dce20
71038dce0c  ldr x9,[x8, #0x10]
71038dce10  stp xzr,xzr,[x8]
71038dce14  str xzr,[x8, #0x10]
71038dce18  mov x8,x9
71038dce1c  cbnz x9,0x71038dcdec
71038dce20  stp xzr,xzr,[x0, #0x8]
71038dce24  str xzr,[x0]
71038dce28  bl 0x710392eb40
71038dce2c  stur x27,[x29, #-0x88]
71038dce30  ldr x8,[x23]
71038dce34  tbnz w8,#0x0,0x71038dce40
71038dce38  add x8,x23,x8
71038dce3c  b 0x71038dce58
71038dce40  and x8,x8,#-0x2
71038dce44  ldrb w9,[x8]
71038dce48  tbnz w9,#0x0,0x71038dce54
71038dce4c  add x8,x8,#0x1
71038dce50  b 0x71038dce58
71038dce54  ldr x8,[x8, #0x10]
71038dce58  stp x27,xzr,[x29, #-0x88]
71038dce5c  stur xzr,[x29, #-0x68]
71038dce60  stp x8,x28,[x29, #-0x78]
71038dce64  sub x1,x29,#0x88
71038dce68  mov x0,x22
71038dce6c  bl 0x71038df550
71038dce70  ldur x24,[x29, #-0x78]
71038dce74  ldr x8,[sp, #0x70]
71038dce78  stur x8,[x29, #-0xa8]
71038dce7c  sub x0,x29,#0xa8
71038dce80  bl 0x7103828690
71038dce84  mov x1,x24
71038dce88  bl 0x71039c2720
71038dce8c  ldp x8,x0,[sp, #0x50]
71038dce90  stp x8,xzr,[x29, #-0xa0]
71038dce94  ldr x23,[sp, #0x68]
71038dce98  mov x1,x23
71038dce9c  bl 0x71038df550
71038dcea0  sub x8,x19,#0x18
71038dcea4  and x19,x8,#-0x2
71038dcea8  add x22,x19,#0x8
71038dceac  ldr x25,[x22]
71038dceb0  tbnz w25,#0x0,0x71038dcfb4
71038dceb4  mov w0,#0x10
71038dceb8  mov w1,#0x20
71038dcebc  bl 0x710392e290
71038dcec0  mov x24,x0
71038dcec4  cbnz x0,0x71038dcf10
71038dcec8  adrp x8,0x7105332000
71038dcecc  ldr x0,[x8, #0xf00]
71038dced0  cbz x0,0x71038dcf0c
71038dced4  mov w8,#0x20
71038dced8  str wzr,[sp, #0xb8]
71038dcedc  add x1,sp,#0xb8
71038dcee0  str x8,[sp, #0x90]
71038dcee4  ldr x8,[x0]
71038dcee8  ldr x8,[x8, #0x30]
71038dceec  add x2,sp,#0x90
71038dcef0  blr x8
71038dcef4  tbz w0,#0x0,0x71038dcf0c
71038dcef8  mov w0,#0x10
71038dcefc  mov w1,#0x20
71038dcf00  bl 0x710392e290
71038dcf04  mov x24,x0
71038dcf08  cbnz x0,0x71038dcf10
71038dcf0c  mov x24,xzr
71038dcf10  stp x24,xzr,[x24, #0x10]
71038dcf14  str wzr,[x24, #0x18]
71038dcf18  stp xzr,x24,[x24]
71038dcf1c  ldr x8,[x19, #0x10]
71038dcf20  add x8,x8,x8, LSL #0x1
71038dcf24  lsl x8,x8,#0x3
71038dcf28  cbz x8,0x71038dcfa8
71038dcf2c  add x23,x22,x25
71038dcf30  add x26,x23,x8
71038dcf34  and x25,x23,#-0x2
71038dcf38  add x0,sp,#0x90
71038dcf3c  mov x1,x24
71038dcf40  mov x2,x25
71038dcf44  bl 0x71038df770
71038dcf48  tbnz w23,#0x0,0x71038dcf5c
71038dcf4c  add x23,x23,#0x18
71038dcf50  cmp x23,x26
71038dcf54  b.ne 0x71038dcf34
71038dcf58  b 0x71038dcfa8
71038dcf5c  ldr x8,[x25, #0x28]
71038dcf60  cbz x8,0x71038dcf74
71038dcf64  mov x9,x8
71038dcf68  ldr x8,[x8, #0x8]
71038dcf6c  cbnz x8,0x71038dcf64
71038dcf70  b 0x71038dcf98
71038dcf74  add x8,x25,#0x18
71038dcf78  mov x9,x8
71038dcf7c  ldr x8,[x8]
71038dcf80  ldr x10,[x8, #0x10]
71038dcf84  cmp x9,x10
71038dcf88  b.eq 0x71038dcf78
71038dcf8c  ldr x10,[x9, #0x10]
71038dcf90  cmp x10,x8
71038dcf94  csel x9,x9,x8,eq
71038dcf98  sub x8,x9,#0x18
71038dcf9c  orr x23,x8,#0x1
71038dcfa0  cmp x23,x26
71038dcfa4  b.ne 0x71038dcf34
71038dcfa8  ldr x23,[sp, #0x68]
71038dcfac  orr x25,x24,#0x1
71038dcfb0  str x25,[x22]
71038dcfb4  and x1,x25,#-0x2
71038dcfb8  add x0,sp,#0x90
71038dcfbc  sub x2,x29,#0xa8
71038dcfc0  bl 0x71038df770
71038dcfc4  ldr x22,[sp, #0x60]
71038dcfc8  ldrb w8,[sp, #0x98]
71038dcfcc  cbz w8,0x71038dcfdc
71038dcfd0  ldr x8,[x19, #0x10]
71038dcfd4  add x8,x8,#0x1
71038dcfd8  str x8,[x19, #0x10]
71038dcfdc  ldr x19,[sp, #0x90]
71038dcfe0  sub x0,x29,#0xa8
71038dcfe4  bl 0x71038dfca0
71038dcfe8  ldurb w8,[x29, #-0x70]
71038dcfec  tbz w8,#0x0,0x71038dd050
71038dcff0  mov x0,x23
71038dcff4  bl 0x71038dfd80
71038dcff8  ldur x8,[x29, #-0x70]
71038dcffc  ands x0,x8,#-0x2
71038dd000  b.eq 0x71038dd04c
71038dd004  ldr x8,[x0]
71038dd008  cbz x8,0x71038dd040
71038dd00c  ldr x9,[x8, #0x8]
71038dd010  cbz x9,0x71038dd02c
71038dd014  ldr x10,[x9, #0x10]
71038dd018  str x10,[x8, #0x8]
71038dd01c  str x8,[x9, #0x10]
71038dd020  mov x8,x9
71038dd024  cbnz x9,0x71038dd00c
71038dd028  b 0x71038dd040
71038dd02c  ldr x9,[x8, #0x10]
71038dd030  stp xzr,xzr,[x8]
71038dd034  str xzr,[x8, #0x10]
71038dd038  mov x8,x9
71038dd03c  cbnz x9,0x71038dd00c
71038dd040  stp xzr,xzr,[x0, #0x8]
71038dd044  str xzr,[x0]
71038dd048  bl 0x710392eb40
71038dd04c  stur x28,[x29, #-0x70]
71038dd050  ldurb w8,[x29, #-0x88]
71038dd054  stur xzr,[x29, #-0x68]
71038dd058  tbz w8,#0x0,0x71038dd0bc
71038dd05c  sub x0,x29,#0x88
71038dd060  bl 0x71038dfd80
71038dd064  ldur x8,[x29, #-0x88]
71038dd068  ands x0,x8,#-0x2
71038dd06c  b.eq 0x71038dd0b8
71038dd070  ldr x8,[x0]
71038dd074  cbz x8,0x71038dd0ac
71038dd078  ldr x9,[x8, #0x8]
71038dd07c  cbz x9,0x71038dd098
71038dd080  ldr x10,[x9, #0x10]
71038dd084  str x10,[x8, #0x8]
71038dd088  str x8,[x9, #0x10]
71038dd08c  mov x8,x9
71038dd090  cbnz x9,0x71038dd078
71038dd094  b 0x71038dd0ac
71038dd098  ldr x9,[x8, #0x10]
71038dd09c  stp xzr,xzr,[x8]
71038dd0a0  str xzr,[x8, #0x10]
71038dd0a4  mov x8,x9
71038dd0a8  cbnz x9,0x71038dd078
71038dd0ac  stp xzr,xzr,[x0, #0x8]
71038dd0b0  str xzr,[x0]
71038dd0b4  bl 0x710392eb40
71038dd0b8  stur x27,[x29, #-0x88]
71038dd0bc  mov x9,x22
71038dd0c0  ldr x8,[x9, #0x10]!
71038dd0c4  tbnz w8,#0x0,0x71038dd0e0
71038dd0c8  add x28,x9,x8
71038dd0cc  ldr x8,[x22, #0x18]
71038dd0d0  add x9,x28,x8, LSL #0x4
71038dd0d4  cmp x28,x9
71038dd0d8  b.ne 0x71038dd100
71038dd0dc  b 0x71038dd424
71038dd0e0  and x9,x8,#-0x2
71038dd0e4  sub x8,x8,#0x10
71038dd0e8  ldr x9,[x9, #0x8]
71038dd0ec  sub x9,x9,#0x10
71038dd0f0  orr x28,x9,#0x1
71038dd0f4  orr x9,x8,#0x1
71038dd0f8  cmp x28,x9
71038dd0fc  b.eq 0x71038dd424
71038dd100  sub x8,x19,#0x18
71038dd104  and x8,x8,#-0x2
71038dd108  str x8,[sp, #0x78]
71038dd10c  add x8,x8,#0x8
71038dd110  str x8,[sp, #0x80]
71038dd114  ldr x11,[sp, #0x88]
71038dd118  mov x19,x9
71038dd11c  ldr x9,[x11]
71038dd120  and x24,x28,#-0x2
71038dd124  ldr w8,[x24, #0x8]
71038dd128  mov x0,x24
71038dd12c  and x10,x9,#-0x2
71038dd130  add x11,x11,x9
71038dd134  tst x9,#0x1
71038dd138  csel x9,x11,x10,eq
71038dd13c  add x8,x9,x8, LSL #0x4
71038dd140  ldr x9,[x8]
71038dd144  and x10,x9,#-0x2
71038dd148  add x8,x8,x9
71038dd14c  tst x9,#0x1
71038dd150  csel x8,x8,x10,eq
71038dd154  ldr w22,[x8]
71038dd158  add x1,sp,#0xa8
71038dd15c  bl 0x710383b5d0
71038dd160  tbnz w0,#0x0,0x71038dd174
71038dd164  sub x1,x29,#0x60
71038dd168  mov x0,x24
71038dd16c  bl 0x710383b5d0
71038dd170  tbz w0,#0x0,0x71038dd17c
71038dd174  mov w26,#0x8
71038dd178  b 0x71038dd18c
71038dd17c  tst w22,#0xe000
71038dd180  orr w8,wzr,#0x3
71038dd184  mov w9,#0x9
71038dd188  csel w26,w8,w9,eq
71038dd18c  ldr x8,[x20, #0x30]
71038dd190  sturb wzr,[x29, #-0xa8]
71038dd194  add x8,x8,#0x3
71038dd198  and x1,x8,#-0x4
71038dd19c  sub x2,x29,#0xa8
71038dd1a0  mov x0,x21
71038dd1a4  bl 0x71038deb20
71038dd1a8  ldr x11,[sp, #0x88]
71038dd1ac  ldr x9,[x11]
71038dd1b0  ldr w8,[x24, #0x8]
71038dd1b4  and x10,x9,#-0x2
71038dd1b8  add x11,x11,x9
71038dd1bc  tst x9,#0x1
71038dd1c0  csel x9,x11,x10,eq
71038dd1c4  add x8,x9,x8, LSL #0x4
71038dd1c8  ldr x23,[x20, #0x30]
71038dd1cc  ldp x9,x22,[x8]
71038dd1d0  and x10,x9,#-0x2
71038dd1d4  add x8,x8,x9
71038dd1d8  tst x9,#0x1
71038dd1dc  csel x25,x8,x10,eq
71038dd1e0  mov w27,w23
71038dd1e4  cbz x22,0x71038dd20c
71038dd1e8  mov x27,x23
71038dd1ec  add x1,x27,#0x1
71038dd1f0  mov x0,x21
71038dd1f4  mov x2,x25
71038dd1f8  bl 0x71038deb20
71038dd1fc  ldr x27,[x20, #0x30]
71038dd200  add x25,x25,#0x1
71038dd204  subs x22,x22,#0x1
71038dd208  b.ne 0x71038dd1ec
71038dd20c  ldr x8,[x24]
71038dd210  tbnz w8,#0x0,0x71038dd21c
71038dd214  add x25,x24,x8
71038dd218  b 0x71038dd234
71038dd21c  and x8,x8,#-0x2
71038dd220  ldrb w9,[x8]
71038dd224  tbnz w9,#0x0,0x71038dd230
71038dd228  add x25,x8,#0x1
71038dd22c  b 0x71038dd234
71038dd230  ldr x25,[x8, #0x10]
71038dd234  ldr x8,[sp, #0x70]
71038dd238  stur x8,[x29, #-0xa8]
71038dd23c  sub x0,x29,#0xa8
71038dd240  bl 0x7103828690
71038dd244  mov x1,x25
71038dd248  bl 0x71039c2720
71038dd24c  sub w8,w27,w23
71038dd250  stp w23,w8,[x29, #-0x94]
71038dd254  ldr x8,[sp, #0x80]
71038dd258  orr w9,wzr,#0x3
71038dd25c  sturb w26,[x29, #-0xa0]
71038dd260  sturb w9,[x29, #-0x9f]
71038dd264  stur wzr,[x29, #-0x9c]
71038dd268  ldr x26,[x8]
71038dd26c  tbnz w26,#0x0,0x71038dd374
71038dd270  mov w0,#0x10
71038dd274  mov w1,#0x20
71038dd278  bl 0x710392e290
71038dd27c  mov x25,x0
71038dd280  cbnz x0,0x71038dd2cc
71038dd284  adrp x8,0x7105332000
71038dd288  ldr x0,[x8, #0xf00]
71038dd28c  cbz x0,0x71038dd2c8
71038dd290  mov w8,#0x20
71038dd294  str wzr,[sp, #0x90]
71038dd298  add x1,sp,#0x90
71038dd29c  stur x8,[x29, #-0x78]
71038dd2a0  ldr x8,[x0]
71038dd2a4  ldr x8,[x8, #0x30]
71038dd2a8  sub x2,x29,#0x78
71038dd2ac  blr x8
71038dd2b0  tbz w0,#0x0,0x71038dd2c8
71038dd2b4  mov w0,#0x10
71038dd2b8  mov w1,#0x20
71038dd2bc  bl 0x710392e290
71038dd2c0  mov x25,x0
71038dd2c4  cbnz x0,0x71038dd2cc
71038dd2c8  mov x25,xzr
71038dd2cc  stp x25,xzr,[x25, #0x10]
71038dd2d0  str wzr,[x25, #0x18]
71038dd2d4  stp xzr,x25,[x25]
71038dd2d8  ldr x8,[sp, #0x78]
71038dd2dc  ldr x8,[x8, #0x10]
71038dd2e0  lsl x8,x8,#0x5
71038dd2e4  cbz x8,0x71038dd368
71038dd2e8  ldr x9,[sp, #0x80]
71038dd2ec  add x22,x9,x26
71038dd2f0  add x27,x22,x8
71038dd2f4  and x26,x22,#-0x2
71038dd2f8  sub x0,x29,#0x78
71038dd2fc  mov x1,x25
71038dd300  mov x2,x26
71038dd304  bl 0x71038dffc0
71038dd308  tbnz w22,#0x0,0x71038dd31c
71038dd30c  add x22,x22,#0x20
71038dd310  cmp x22,x27
71038dd314  b.ne 0x71038dd2f4
71038dd318  b 0x71038dd368
71038dd31c  ldr x8,[x26, #0x30]
71038dd320  cbz x8,0x71038dd334
71038dd324  mov x9,x8
71038dd328  ldr x8,[x8, #0x8]
71038dd32c  cbnz x8,0x71038dd324
71038dd330  b 0x71038dd358
71038dd334  add x8,x26,#0x20
71038dd338  mov x9,x8
71038dd33c  ldr x8,[x8]
71038dd340  ldr x10,[x8, #0x10]
71038dd344  cmp x9,x10
71038dd348  b.eq 0x71038dd338
71038dd34c  ldr x10,[x9, #0x10]
71038dd350  cmp x10,x8
71038dd354  csel x9,x9,x8,eq
71038dd358  sub x8,x9,#0x20
71038dd35c  orr x22,x8,#0x1
71038dd360  cmp x22,x27
71038dd364  b.ne 0x71038dd2f4
71038dd368  ldr x8,[sp, #0x80]
71038dd36c  orr x26,x25,#0x1
71038dd370  str x26,[x8]
71038dd374  and x1,x26,#-0x2
71038dd378  sub x0,x29,#0x78
71038dd37c  sub x2,x29,#0xa8
71038dd380  bl 0x71038dffc0
71038dd384  ldurb w8,[x29, #-0x70]
71038dd388  cbz w8,0x71038dd39c
71038dd38c  ldr x9,[sp, #0x78]
71038dd390  ldr x8,[x9, #0x10]
71038dd394  add x8,x8,#0x1
71038dd398  str x8,[x9, #0x10]
71038dd39c  ldur x8,[x29, #-0xa8]
71038dd3a0  tbz w8,#0x0,0x71038dd3c8
71038dd3a4  ands x25,x8,#-0x2
71038dd3a8  b.eq 0x71038dd3c8
71038dd3ac  ldrb w8,[x25]
71038dd3b0  tbz w8,#0x0,0x71038dd3c0
71038dd3b4  ldr x0,[x25, #0x10]
71038dd3b8  cbz x0,0x71038dd3c0
71038dd3bc  bl 0x710392eb40
71038dd3c0  mov x0,x25
71038dd3c4  bl 0x710392eb40
71038dd3c8  tbnz w28,#0x0,0x71038dd3d4
71038dd3cc  add x28,x28,#0x10
71038dd3d0  b 0x71038dd418
71038dd3d4  ldr x8,[x24, #0x20]
71038dd3d8  cbz x8,0x71038dd3ec
71038dd3dc  mov x9,x8
71038dd3e0  ldr x8,[x8, #0x8]
71038dd3e4  cbnz x8,0x71038dd3dc
71038dd3e8  b 0x71038dd410
71038dd3ec  add x8,x24,#0x10
71038dd3f0  mov x9,x8
71038dd3f4  ldr x8,[x8]
71038dd3f8  ldr x10,[x8, #0x10]
71038dd3fc  cmp x9,x10
71038dd400  b.eq 0x71038dd3f0
71038dd404  ldr x10,[x9, #0x10]
71038dd408  cmp x10,x8
71038dd40c  csel x9,x9,x8,eq
71038dd410  sub x8,x9,#0x10
71038dd414  orr x28,x8,#0x1
71038dd418  mov x9,x19
71038dd41c  cmp x28,x19
71038dd420  b.ne 0x71038dd114
71038dd424  ldr x19,[sp, #0x48]
71038dd428  tbnz w19,#0x0,0x71038dd43c
71038dd42c  ldp x28,x27,[sp, #0x30]
71038dd430  ldr x22,[sp, #0x68]
71038dd434  add x19,x19,#0x20
71038dd438  b 0x71038dd488
71038dd43c  ldp x9,x22,[sp, #0x60]
71038dd440  ldr x8,[x9, #0x30]
71038dd444  ldp x28,x27,[sp, #0x30]
71038dd448  cbz x8,0x71038dd45c
71038dd44c  mov x9,x8
71038dd450  ldr x8,[x8, #0x8]
71038dd454  cbnz x8,0x71038dd44c
71038dd458  b 0x71038dd480
71038dd45c  add x8,x9,#0x20
71038dd460  mov x9,x8
71038dd464  ldr x8,[x8]
71038dd468  ldr x10,[x8, #0x10]
71038dd46c  cmp x9,x10
71038dd470  b.eq 0x71038dd460
71038dd474  ldr x10,[x9, #0x10]
71038dd478  cmp x10,x8
71038dd47c  csel x9,x9,x8,eq
71038dd480  sub x8,x9,#0x20
71038dd484  orr x19,x8,#0x1
71038dd488  ldr x8,[sp, #0x28]
71038dd48c  cmp x19,x8
71038dd490  b.ne 0x71038dcb64
71038dd494  ldr x8,[x20, #0x30]
71038dd498  sturb wzr,[x29, #-0xa8]
71038dd49c  add x1,x8,#0x10
71038dd4a0  sub x2,x29,#0xa8
71038dd4a4  mov x0,x21
71038dd4a8  bl 0x71038deb20
71038dd4ac  b 0x71038ddef4
71038dd4b0  ldr x22,[x8, #0x10]
71038dd4b4  bl 0x7103828690
71038dd4b8  mov x1,x22
71038dd4bc  bl 0x71039c2720
71038dd4c0  ldr w8,[x24, #0x10]
71038dd4c4  mov w9,#0x2
71038dd4c8  movk w9,#0x3, LSL #16
71038dd4cc  and x22,x19,#-0x2
71038dd4d0  stp w8,w9,[x20, #0x8]
71038dd4d4  add x8,sp,#0xa8
71038dd4d8  sub x8,x22,x8
71038dd4dc  add x0,sp,#0xa8
71038dd4e0  str x8,[sp, #0xa8]
71038dd4e4  bl 0x7103828690
71038dd4e8  adrp x1,0x71042f6000
71038dd4ec  add x1,x1,#0x86b
71038dd4f0  bl 0x71039c2720
71038dd4f4  sub x8,x29,#0x60
71038dd4f8  sub x8,x22,x8
71038dd4fc  str x8,[sp, #0x18]
71038dd500  stur x8,[x29, #-0x60]
71038dd504  sub x0,x29,#0x60
71038dd508  bl 0x7103828690
71038dd50c  adrp x1,0x7104453000
71038dd510  add x1,x1,#0x57a
71038dd514  bl 0x71039c2720
71038dd518  mov x9,x24
71038dd51c  ldr x8,[x9, #0x20]!
71038dd520  tbnz w8,#0x0,0x71038dd53c
71038dd524  add x9,x9,x8
71038dd528  ldr x8,[x24, #0x28]
71038dd52c  add x8,x9,x8, LSL #0x5
71038dd530  cmp x9,x8
71038dd534  b.ne 0x71038dd55c
71038dd538  b 0x71038ddedc
71038dd53c  and x9,x8,#-0x2
71038dd540  sub x8,x8,#0x20
71038dd544  ldr x9,[x9, #0x8]
71038dd548  sub x9,x9,#0x20
71038dd54c  orr x9,x9,#0x1
71038dd550  orr x8,x8,#0x1
71038dd554  cmp x9,x8
71038dd558  b.eq 0x71038ddedc
71038dd55c  str x8,[sp, #0x28]
71038dd560  add x8,x20,#0x18
71038dd564  str x8,[sp, #0x40]
71038dd568  sub x8,x29,#0x88
71038dd56c  mov x11,x9
71038dd570  sub x9,x29,#0x78
71038dd574  neg x27,x8
71038dd578  orr x8,xzr,#-0x8
71038dd57c  add x22,x9,#0x8
71038dd580  sub x28,x8,x9
71038dd584  sub x9,x29,#0xa8
71038dd588  str x22,[sp, #0x68]
71038dd58c  add x10,x9,#0x8
71038dd590  sub x8,x8,x9
71038dd594  stp x8,x10,[sp, #0x50]
71038dd598  and x8,x19,#-0x2
71038dd59c  sub x8,x8,x9
71038dd5a0  str x8,[sp, #0x78]
71038dd5a4  add x8,x24,#0x30
71038dd5a8  mov x19,x11
71038dd5ac  str x8,[sp, #0x88]
71038dd5b0  stp x28,x27,[sp, #0x30]
71038dd5b4  and x23,x19,#-0x2
71038dd5b8  ldrsw x8,[x23, #0x8]
71038dd5bc  adrp x9,0x710485f000
71038dd5c0  add x9,x9,#0x19c
71038dd5c4  ldr w8,[x9, x8, LSL #0x2]
71038dd5c8  stp x27,xzr,[x29, #-0x88]
71038dd5cc  stur w8,[x29, #-0x78]
71038dd5d0  stp x28,xzr,[x29, #-0x70]
71038dd5d4  sub x1,x29,#0x88
71038dd5d8  mov x0,x22
71038dd5dc  bl 0x71038dee10
71038dd5e0  ldur w8,[x29, #-0x78]
71038dd5e4  stur w8,[x29, #-0xa8]
71038dd5e8  str x19,[sp, #0x48]
71038dd5ec  ldp x8,x0,[sp, #0x50]
71038dd5f0  stp x8,xzr,[x29, #-0xa0]
71038dd5f4  mov x1,x22
71038dd5f8  bl 0x71038dee10
71038dd5fc  ldr x8,[sp, #0x40]
71038dd600  ldr x19,[x8]
71038dd604  str x23,[sp, #0x60]
71038dd608  tbnz w19,#0x0,0x71038dd714
71038dd60c  mov w0,#0x10
71038dd610  mov w1,#0x20
71038dd614  bl 0x710392e290
71038dd618  mov x24,x0
71038dd61c  cbnz x0,0x71038dd668
71038dd620  adrp x8,0x7105332000
71038dd624  ldr x0,[x8, #0xf00]
71038dd628  cbz x0,0x71038dd664
71038dd62c  mov w8,#0x20
71038dd630  str wzr,[sp, #0xb8]
71038dd634  add x1,sp,#0xb8
71038dd638  str x8,[sp, #0x90]
71038dd63c  ldr x8,[x0]
71038dd640  ldr x8,[x8, #0x30]
71038dd644  add x2,sp,#0x90
71038dd648  blr x8
71038dd64c  tbz w0,#0x0,0x71038dd664
71038dd650  mov w0,#0x10
71038dd654  mov w1,#0x20
71038dd658  bl 0x710392e290
71038dd65c  mov x24,x0
71038dd660  cbnz x0,0x71038dd668
71038dd664  mov x24,xzr
71038dd668  stp x24,xzr,[x24, #0x10]
71038dd66c  str wzr,[x24, #0x18]
71038dd670  stp xzr,x24,[x24]
71038dd674  ldr x8,[x20, #0x20]
71038dd678  add x8,x8,x8, LSL #0x1
71038dd67c  lsl x8,x8,#0x3
71038dd680  cbz x8,0x71038dd704
71038dd684  ldr x9,[sp, #0x40]
71038dd688  add x22,x9,x19
71038dd68c  add x19,x22,x8
71038dd690  and x25,x22,#-0x2
71038dd694  add x0,sp,#0x90
71038dd698  mov x1,x24
71038dd69c  mov x2,x25
71038dd6a0  bl 0x71038df040
71038dd6a4  tbnz w22,#0x0,0x71038dd6b8
71038dd6a8  add x22,x22,#0x18
71038dd6ac  cmp x22,x19
71038dd6b0  b.ne 0x71038dd690
71038dd6b4  b 0x71038dd704
71038dd6b8  ldr x8,[x25, #0x28]
71038dd6bc  cbz x8,0x71038dd6d0
71038dd6c0  mov x9,x8
71038dd6c4  ldr x8,[x8, #0x8]
71038dd6c8  cbnz x8,0x71038dd6c0
71038dd6cc  b 0x71038dd6f4
71038dd6d0  add x8,x25,#0x18
71038dd6d4  mov x9,x8
71038dd6d8  ldr x8,[x8]
71038dd6dc  ldr x10,[x8, #0x10]
71038dd6e0  cmp x9,x10
71038dd6e4  b.eq 0x71038dd6d4
71038dd6e8  ldr x10,[x9, #0x10]
71038dd6ec  cmp x10,x8
71038dd6f0  csel x9,x9,x8,eq
71038dd6f4  sub x8,x9,#0x18
71038dd6f8  orr x22,x8,#0x1
71038dd6fc  cmp x22,x19
71038dd700  b.ne 0x71038dd690
71038dd704  ldr x8,[sp, #0x40]
71038dd708  orr x19,x24,#0x1
71038dd70c  str x19,[x8]
71038dd710  ldp x23,x22,[sp, #0x60]
71038dd714  and x1,x19,#-0x2
71038dd718  add x0,sp,#0x90
71038dd71c  sub x2,x29,#0xa8
71038dd720  bl 0x71038df040
71038dd724  ldrb w8,[sp, #0x98]
71038dd728  cbz w8,0x71038dd738
71038dd72c  ldr x8,[x20, #0x20]
71038dd730  add x8,x8,#0x1
71038dd734  str x8,[x20, #0x20]
71038dd738  ldr x19,[sp, #0x90]
71038dd73c  ldurb w8,[x29, #-0xa0]
71038dd740  tbz w8,#0x0,0x71038dd7a8
71038dd744  ldr x0,[sp, #0x58]
71038dd748  bl 0x71038df350
71038dd74c  ldur x8,[x29, #-0xa0]
71038dd750  ands x0,x8,#-0x2
71038dd754  b.eq 0x71038dd7a0
71038dd758  ldr x8,[x0]
71038dd75c  cbz x8,0x71038dd794
71038dd760  ldr x9,[x8, #0x8]
71038dd764  cbz x9,0x71038dd780
71038dd768  ldr x10,[x9, #0x10]
71038dd76c  str x10,[x8, #0x8]
71038dd770  str x8,[x9, #0x10]
71038dd774  mov x8,x9
71038dd778  cbnz x9,0x71038dd760
71038dd77c  b 0x71038dd794
71038dd780  ldr x9,[x8, #0x10]
71038dd784  stp xzr,xzr,[x8]
71038dd788  str xzr,[x8, #0x10]
71038dd78c  mov x8,x9
71038dd790  cbnz x9,0x71038dd760
71038dd794  stp xzr,xzr,[x0, #0x8]
71038dd798  str xzr,[x0]
71038dd79c  bl 0x710392eb40
71038dd7a0  ldr x8,[sp, #0x50]
71038dd7a4  stur x8,[x29, #-0xa0]
71038dd7a8  ldurb w8,[x29, #-0x70]
71038dd7ac  stur xzr,[x29, #-0x98]
71038dd7b0  tbz w8,#0x0,0x71038dd814
71038dd7b4  mov x0,x22
71038dd7b8  bl 0x71038df350
71038dd7bc  ldur x8,[x29, #-0x70]
71038dd7c0  ands x0,x8,#-0x2
71038dd7c4  b.eq 0x71038dd810
71038dd7c8  ldr x8,[x0]
71038dd7cc  cbz x8,0x71038dd804
71038dd7d0  ldr x9,[x8, #0x8]
71038dd7d4  cbz x9,0x71038dd7f0
71038dd7d8  ldr x10,[x9, #0x10]
71038dd7dc  str x10,[x8, #0x8]
71038dd7e0  str x8,[x9, #0x10]
71038dd7e4  mov x8,x9
71038dd7e8  cbnz x9,0x71038dd7d0
71038dd7ec  b 0x71038dd804
71038dd7f0  ldr x9,[x8, #0x10]
71038dd7f4  stp xzr,xzr,[x8]
71038dd7f8  str xzr,[x8, #0x10]
71038dd7fc  mov x8,x9
71038dd800  cbnz x9,0x71038dd7d0
71038dd804  stp xzr,xzr,[x0, #0x8]
71038dd808  str xzr,[x0]
71038dd80c  bl 0x710392eb40
71038dd810  stur x28,[x29, #-0x70]
71038dd814  ldurb w8,[x29, #-0x88]
71038dd818  stur xzr,[x29, #-0x68]
71038dd81c  tbz w8,#0x0,0x71038dd880
71038dd820  sub x0,x29,#0x88
71038dd824  bl 0x71038df350
71038dd828  ldur x8,[x29, #-0x88]
71038dd82c  ands x0,x8,#-0x2
71038dd830  b.eq 0x71038dd87c
71038dd834  ldr x8,[x0]
71038dd838  cbz x8,0x71038dd870
71038dd83c  ldr x9,[x8, #0x8]
71038dd840  cbz x9,0x71038dd85c
71038dd844  ldr x10,[x9, #0x10]
71038dd848  str x10,[x8, #0x8]
71038dd84c  str x8,[x9, #0x10]
71038dd850  mov x8,x9
71038dd854  cbnz x9,0x71038dd83c
71038dd858  b 0x71038dd870
71038dd85c  ldr x9,[x8, #0x10]
71038dd860  stp xzr,xzr,[x8]
71038dd864  str xzr,[x8, #0x10]
71038dd868  mov x8,x9
71038dd86c  cbnz x9,0x71038dd83c
71038dd870  stp xzr,xzr,[x0, #0x8]
71038dd874  str xzr,[x0]
71038dd878  bl 0x710392eb40
71038dd87c  stur x27,[x29, #-0x88]
71038dd880  ldr x8,[x23]
71038dd884  tbnz w8,#0x0,0x71038dd890
71038dd888  add x8,x23,x8
71038dd88c  b 0x71038dd8a8
71038dd890  and x8,x8,#-0x2
71038dd894  ldrb w9,[x8]
71038dd898  tbnz w9,#0x0,0x71038dd8a4
71038dd89c  add x8,x8,#0x1
71038dd8a0  b 0x71038dd8a8
71038dd8a4  ldr x8,[x8, #0x10]
71038dd8a8  stp x27,xzr,[x29, #-0x88]
71038dd8ac  stur xzr,[x29, #-0x68]
71038dd8b0  stp x8,x28,[x29, #-0x78]
71038dd8b4  sub x1,x29,#0x88
71038dd8b8  mov x0,x22
71038dd8bc  bl 0x71038df550
71038dd8c0  ldur x24,[x29, #-0x78]
71038dd8c4  ldr x8,[sp, #0x78]
71038dd8c8  stur x8,[x29, #-0xa8]
71038dd8cc  sub x0,x29,#0xa8
71038dd8d0  bl 0x7103828690
71038dd8d4  mov x1,x24
71038dd8d8  bl 0x71039c2720
71038dd8dc  ldp x8,x0,[sp, #0x50]
71038dd8e0  stp x8,xzr,[x29, #-0xa0]
71038dd8e4  ldr x23,[sp, #0x68]
71038dd8e8  mov x1,x23
71038dd8ec  bl 0x71038df550
71038dd8f0  sub x8,x19,#0x18
71038dd8f4  and x19,x8,#-0x2
71038dd8f8  add x22,x19,#0x8
71038dd8fc  ldr x25,[x22]
71038dd900  tbnz w25,#0x0,0x71038dda04
71038dd904  mov w0,#0x10
71038dd908  mov w1,#0x20
71038dd90c  bl 0x710392e290
71038dd910  mov x24,x0
71038dd914  cbnz x0,0x71038dd960
71038dd918  adrp x8,0x7105332000
71038dd91c  ldr x0,[x8, #0xf00]
71038dd920  cbz x0,0x71038dd95c
71038dd924  mov w8,#0x20
71038dd928  str wzr,[sp, #0xb8]
71038dd92c  add x1,sp,#0xb8
71038dd930  str x8,[sp, #0x90]
71038dd934  ldr x8,[x0]
71038dd938  ldr x8,[x8, #0x30]
71038dd93c  add x2,sp,#0x90
71038dd940  blr x8
71038dd944  tbz w0,#0x0,0x71038dd95c
71038dd948  mov w0,#0x10
71038dd94c  mov w1,#0x20
71038dd950  bl 0x710392e290
71038dd954  mov x24,x0
71038dd958  cbnz x0,0x71038dd960
71038dd95c  mov x24,xzr
71038dd960  stp x24,xzr,[x24, #0x10]
71038dd964  str wzr,[x24, #0x18]
71038dd968  stp xzr,x24,[x24]
71038dd96c  ldr x8,[x19, #0x10]
71038dd970  add x8,x8,x8, LSL #0x1
71038dd974  lsl x8,x8,#0x3
71038dd978  cbz x8,0x71038dd9f8
71038dd97c  add x23,x22,x25
71038dd980  add x26,x23,x8
71038dd984  and x25,x23,#-0x2
71038dd988  add x0,sp,#0x90
71038dd98c  mov x1,x24
71038dd990  mov x2,x25
71038dd994  bl 0x71038df770
71038dd998  tbnz w23,#0x0,0x71038dd9ac
71038dd99c  add x23,x23,#0x18
71038dd9a0  cmp x23,x26
71038dd9a4  b.ne 0x71038dd984
71038dd9a8  b 0x71038dd9f8
71038dd9ac  ldr x8,[x25, #0x28]
71038dd9b0  cbz x8,0x71038dd9c4
71038dd9b4  mov x9,x8
71038dd9b8  ldr x8,[x8, #0x8]
71038dd9bc  cbnz x8,0x71038dd9b4
71038dd9c0  b 0x71038dd9e8
71038dd9c4  add x8,x25,#0x18
71038dd9c8  mov x9,x8
71038dd9cc  ldr x8,[x8]
71038dd9d0  ldr x10,[x8, #0x10]
71038dd9d4  cmp x9,x10
71038dd9d8  b.eq 0x71038dd9c8
71038dd9dc  ldr x10,[x9, #0x10]
71038dd9e0  cmp x10,x8
71038dd9e4  csel x9,x9,x8,eq
71038dd9e8  sub x8,x9,#0x18
71038dd9ec  orr x23,x8,#0x1
71038dd9f0  cmp x23,x26
71038dd9f4  b.ne 0x71038dd984
71038dd9f8  ldr x23,[sp, #0x68]
71038dd9fc  orr x25,x24,#0x1
71038dda00  str x25,[x22]
71038dda04  and x1,x25,#-0x2
71038dda08  add x0,sp,#0x90
71038dda0c  sub x2,x29,#0xa8
71038dda10  bl 0x71038df770
71038dda14  ldr x22,[sp, #0x60]
71038dda18  ldrb w8,[sp, #0x98]
71038dda1c  cbz w8,0x71038dda2c
71038dda20  ldr x8,[x19, #0x10]
71038dda24  add x8,x8,#0x1
71038dda28  str x8,[x19, #0x10]
71038dda2c  ldr x19,[sp, #0x90]
71038dda30  sub x0,x29,#0xa8
71038dda34  bl 0x71038dfca0
71038dda38  ldurb w8,[x29, #-0x70]
71038dda3c  tbz w8,#0x0,0x71038ddaa0
71038dda40  mov x0,x23
71038dda44  bl 0x71038dfd80
71038dda48  ldur x8,[x29, #-0x70]
71038dda4c  ands x0,x8,#-0x2
71038dda50  b.eq 0x71038dda9c
71038dda54  ldr x8,[x0]
71038dda58  cbz x8,0x71038dda90
71038dda5c  ldr x9,[x8, #0x8]
71038dda60  cbz x9,0x71038dda7c
71038dda64  ldr x10,[x9, #0x10]
71038dda68  str x10,[x8, #0x8]
71038dda6c  str x8,[x9, #0x10]
71038dda70  mov x8,x9
71038dda74  cbnz x9,0x71038dda5c
71038dda78  b 0x71038dda90
71038dda7c  ldr x9,[x8, #0x10]
71038dda80  stp xzr,xzr,[x8]
71038dda84  str xzr,[x8, #0x10]
71038dda88  mov x8,x9
71038dda8c  cbnz x9,0x71038dda5c
71038dda90  stp xzr,xzr,[x0, #0x8]
71038dda94  str xzr,[x0]
71038dda98  bl 0x710392eb40
71038dda9c  stur x28,[x29, #-0x70]
71038ddaa0  ldurb w8,[x29, #-0x88]
71038ddaa4  stur xzr,[x29, #-0x68]
71038ddaa8  tbz w8,#0x0,0x71038ddb0c
71038ddaac  sub x0,x29,#0x88
71038ddab0  bl 0x71038dfd80
71038ddab4  ldur x8,[x29, #-0x88]
71038ddab8  ands x0,x8,#-0x2
71038ddabc  b.eq 0x71038ddb08
71038ddac0  ldr x8,[x0]
71038ddac4  cbz x8,0x71038ddafc
71038ddac8  ldr x9,[x8, #0x8]
71038ddacc  cbz x9,0x71038ddae8
71038ddad0  ldr x10,[x9, #0x10]
71038ddad4  str x10,[x8, #0x8]
71038ddad8  str x8,[x9, #0x10]
71038ddadc  mov x8,x9
71038ddae0  cbnz x9,0x71038ddac8
71038ddae4  b 0x71038ddafc
71038ddae8  ldr x9,[x8, #0x10]
71038ddaec  stp xzr,xzr,[x8]
71038ddaf0  str xzr,[x8, #0x10]
71038ddaf4  mov x8,x9
71038ddaf8  cbnz x9,0x71038ddac8
71038ddafc  stp xzr,xzr,[x0, #0x8]
71038ddb00  str xzr,[x0]
71038ddb04  bl 0x710392eb40
71038ddb08  stur x27,[x29, #-0x88]
71038ddb0c  mov x9,x22
71038ddb10  ldr x8,[x9, #0x10]!
71038ddb14  tbnz w8,#0x0,0x71038ddb30
71038ddb18  add x28,x9,x8
71038ddb1c  ldr x8,[x22, #0x18]
71038ddb20  add x9,x28,x8, LSL #0x4
71038ddb24  cmp x28,x9
71038ddb28  b.ne 0x71038ddb50
71038ddb2c  b 0x71038dde6c
71038ddb30  and x9,x8,#-0x2
71038ddb34  sub x8,x8,#0x10
71038ddb38  ldr x9,[x9, #0x8]
71038ddb3c  sub x9,x9,#0x10
71038ddb40  orr x28,x9,#0x1
71038ddb44  orr x9,x8,#0x1
71038ddb48  cmp x28,x9
71038ddb4c  b.eq 0x71038dde6c
71038ddb50  sub x8,x19,#0x18
71038ddb54  and x8,x8,#-0x2
71038ddb58  add x19,x8,#0x8
71038ddb5c  str x8,[sp, #0x80]
71038ddb60  str x9,[sp, #0x70]
71038ddb64  ldr x11,[sp, #0x88]
71038ddb68  ldr x9,[x11]
71038ddb6c  and x24,x28,#-0x2
71038ddb70  ldr w8,[x24, #0x8]
71038ddb74  mov x0,x24
71038ddb78  and x10,x9,#-0x2
71038ddb7c  add x11,x11,x9
71038ddb80  tst x9,#0x1
71038ddb84  csel x9,x11,x10,eq
71038ddb88  add x8,x9,x8, LSL #0x4
71038ddb8c  ldr x9,[x8]
71038ddb90  and x10,x9,#-0x2
71038ddb94  add x8,x8,x9
71038ddb98  tst x9,#0x1
71038ddb9c  csel x8,x8,x10,eq
71038ddba0  ldr w22,[x8]
71038ddba4  add x1,sp,#0xa8
71038ddba8  bl 0x710383b5d0
71038ddbac  tbnz w0,#0x0,0x71038ddbc0
71038ddbb0  sub x1,x29,#0x60
71038ddbb4  mov x0,x24
71038ddbb8  bl 0x710383b5d0
71038ddbbc  tbz w0,#0x0,0x71038ddbc8
71038ddbc0  mov w26,#0x8
71038ddbc4  b 0x71038ddbd8
71038ddbc8  tst w22,#0xe000
71038ddbcc  orr w8,wzr,#0x3
71038ddbd0  mov w9,#0x9
71038ddbd4  csel w26,w8,w9,eq
71038ddbd8  ldr x8,[x20, #0x30]
71038ddbdc  sturb wzr,[x29, #-0xa8]
71038ddbe0  add x8,x8,#0x3
71038ddbe4  and x1,x8,#-0x4
71038ddbe8  sub x2,x29,#0xa8
71038ddbec  mov x0,x21
71038ddbf0  bl 0x71038deb20
71038ddbf4  ldr x11,[sp, #0x88]
71038ddbf8  ldr x9,[x11]
71038ddbfc  ldr w8,[x24, #0x8]
71038ddc00  and x10,x9,#-0x2
71038ddc04  add x11,x11,x9
71038ddc08  tst x9,#0x1
71038ddc0c  csel x9,x11,x10,eq
71038ddc10  add x8,x9,x8, LSL #0x4
71038ddc14  ldr x23,[x20, #0x30]
71038ddc18  ldp x9,x22,[x8]
71038ddc1c  and x10,x9,#-0x2
71038ddc20  add x8,x8,x9
71038ddc24  tst x9,#0x1
71038ddc28  csel x25,x8,x10,eq
71038ddc2c  mov w27,w23
71038ddc30  cbz x22,0x71038ddc58
71038ddc34  mov x27,x23
71038ddc38  add x1,x27,#0x1
71038ddc3c  mov x0,x21
71038ddc40  mov x2,x25
71038ddc44  bl 0x71038deb20
71038ddc48  ldr x27,[x20, #0x30]
71038ddc4c  add x25,x25,#0x1
71038ddc50  subs x22,x22,#0x1
71038ddc54  b.ne 0x71038ddc38
71038ddc58  ldr x8,[x24]
71038ddc5c  tbnz w8,#0x0,0x71038ddc68
71038ddc60  add x25,x24,x8
71038ddc64  b 0x71038ddc80
71038ddc68  and x8,x8,#-0x2
71038ddc6c  ldrb w9,[x8]
71038ddc70  tbnz w9,#0x0,0x71038ddc7c
71038ddc74  add x25,x8,#0x1
71038ddc78  b 0x71038ddc80
71038ddc7c  ldr x25,[x8, #0x10]
71038ddc80  ldr x8,[sp, #0x78]
71038ddc84  stur x8,[x29, #-0xa8]
71038ddc88  sub x0,x29,#0xa8
71038ddc8c  bl 0x7103828690
71038ddc90  mov x1,x25
71038ddc94  bl 0x71039c2720
71038ddc98  sub w8,w27,w23
71038ddc9c  orr w9,wzr,#0x3
71038ddca0  sturb w26,[x29, #-0xa0]
71038ddca4  sturb w9,[x29, #-0x9f]
71038ddca8  stur wzr,[x29, #-0x9c]
71038ddcac  stp w23,w8,[x29, #-0x94]
71038ddcb0  ldr x26,[x19]
71038ddcb4  tbnz w26,#0x0,0x71038dddb4
71038ddcb8  mov w0,#0x10
71038ddcbc  mov w1,#0x20
71038ddcc0  bl 0x710392e290
71038ddcc4  mov x25,x0
71038ddcc8  cbnz x0,0x71038ddd14
71038ddccc  adrp x8,0x7105332000
71038ddcd0  ldr x0,[x8, #0xf00]
71038ddcd4  cbz x0,0x71038ddd10
71038ddcd8  mov w8,#0x20
71038ddcdc  str wzr,[sp, #0x90]
71038ddce0  add x1,sp,#0x90
71038ddce4  stur x8,[x29, #-0x78]
71038ddce8  ldr x8,[x0]
71038ddcec  ldr x8,[x8, #0x30]
71038ddcf0  sub x2,x29,#0x78
71038ddcf4  blr x8
71038ddcf8  tbz w0,#0x0,0x71038ddd10
71038ddcfc  mov w0,#0x10
71038ddd00  mov w1,#0x20
71038ddd04  bl 0x710392e290
71038ddd08  mov x25,x0
71038ddd0c  cbnz x0,0x71038ddd14
71038ddd10  mov x25,xzr
71038ddd14  stp x25,xzr,[x25, #0x10]
71038ddd18  str wzr,[x25, #0x18]
71038ddd1c  stp xzr,x25,[x25]
71038ddd20  ldr x8,[sp, #0x80]
71038ddd24  ldr x8,[x8, #0x10]
71038ddd28  lsl x8,x8,#0x5
71038ddd2c  cbz x8,0x71038dddac
71038ddd30  add x22,x19,x26
71038ddd34  add x27,x22,x8
71038ddd38  and x26,x22,#-0x2
71038ddd3c  sub x0,x29,#0x78
71038ddd40  mov x1,x25
71038ddd44  mov x2,x26
71038ddd48  bl 0x71038dffc0
71038ddd4c  tbnz w22,#0x0,0x71038ddd60
71038ddd50  add x22,x22,#0x20
71038ddd54  cmp x22,x27
71038ddd58  b.ne 0x71038ddd38
71038ddd5c  b 0x71038dddac
71038ddd60  ldr x8,[x26, #0x30]
71038ddd64  cbz x8,0x71038ddd78
71038ddd68  mov x9,x8
71038ddd6c  ldr x8,[x8, #0x8]
71038ddd70  cbnz x8,0x71038ddd68
71038ddd74  b 0x71038ddd9c
71038ddd78  add x8,x26,#0x20
71038ddd7c  mov x9,x8
71038ddd80  ldr x8,[x8]
71038ddd84  ldr x10,[x8, #0x10]
71038ddd88  cmp x9,x10
71038ddd8c  b.eq 0x71038ddd7c
71038ddd90  ldr x10,[x9, #0x10]
71038ddd94  cmp x10,x8
71038ddd98  csel x9,x9,x8,eq
71038ddd9c  sub x8,x9,#0x20
71038ddda0  orr x22,x8,#0x1
71038ddda4  cmp x22,x27
71038ddda8  b.ne 0x71038ddd38
71038dddac  orr x26,x25,#0x1
71038dddb0  str x26,[x19]
71038dddb4  and x1,x26,#-0x2
71038dddb8  sub x0,x29,#0x78
71038dddbc  sub x2,x29,#0xa8
71038dddc0  bl 0x71038dffc0
71038dddc4  ldurb w8,[x29, #-0x70]
71038dddc8  ldr x22,[sp, #0x70]
71038dddcc  cbz w8,0x71038ddde0
71038dddd0  ldr x9,[sp, #0x80]
71038dddd4  ldr x8,[x9, #0x10]
71038dddd8  add x8,x8,#0x1
71038ddddc  str x8,[x9, #0x10]
71038ddde0  ldur x8,[x29, #-0xa8]
71038ddde4  tbz w8,#0x0,0x71038dde0c
71038ddde8  ands x25,x8,#-0x2
71038dddec  b.eq 0x71038dde0c
71038dddf0  ldrb w8,[x25]
71038dddf4  tbz w8,#0x0,0x71038dde04
71038dddf8  ldr x0,[x25, #0x10]
71038dddfc  cbz x0,0x71038dde04
71038dde00  bl 0x710392eb40
71038dde04  mov x0,x25
71038dde08  bl 0x710392eb40
71038dde0c  tbnz w28,#0x0,0x71038dde20
71038dde10  add x28,x28,#0x10
71038dde14  cmp x28,x22
71038dde18  b.ne 0x71038ddb64
71038dde1c  b 0x71038dde6c
71038dde20  ldr x8,[x24, #0x20]
71038dde24  cbz x8,0x71038dde38
71038dde28  mov x9,x8
71038dde2c  ldr x8,[x8, #0x8]
71038dde30  cbnz x8,0x71038dde28
71038dde34  b 0x71038dde5c
71038dde38  add x8,x24,#0x10
71038dde3c  mov x9,x8
71038dde40  ldr x8,[x8]
71038dde44  ldr x10,[x8, #0x10]
71038dde48  cmp x9,x10
71038dde4c  b.eq 0x71038dde3c
71038dde50  ldr x10,[x9, #0x10]
71038dde54  cmp x10,x8
71038dde58  csel x9,x9,x8,eq
71038dde5c  sub x8,x9,#0x10
71038dde60  orr x28,x8,#0x1
71038dde64  cmp x28,x22
71038dde68  b.ne 0x71038ddb64
71038dde6c  ldr x19,[sp, #0x48]
71038dde70  tbnz w19,#0x0,0x71038dde84
71038dde74  ldp x28,x27,[sp, #0x30]
71038dde78  ldr x22,[sp, #0x68]
71038dde7c  add x19,x19,#0x20
71038dde80  b 0x71038dded0
71038dde84  ldp x9,x22,[sp, #0x60]
71038dde88  ldr x8,[x9, #0x30]
71038dde8c  ldp x28,x27,[sp, #0x30]
71038dde90  cbz x8,0x71038ddea4
71038dde94  mov x9,x8
71038dde98  ldr x8,[x8, #0x8]
71038dde9c  cbnz x8,0x71038dde94
71038ddea0  b 0x71038ddec8
71038ddea4  add x8,x9,#0x20
71038ddea8  mov x9,x8
71038ddeac  ldr x8,[x8]
71038ddeb0  ldr x10,[x8, #0x10]
71038ddeb4  cmp x9,x10
71038ddeb8  b.eq 0x71038ddea8
71038ddebc  ldr x10,[x9, #0x10]
71038ddec0  cmp x10,x8
71038ddec4  csel x9,x9,x8,eq
71038ddec8  sub x8,x9,#0x20
71038ddecc  orr x19,x8,#0x1
71038dded0  ldr x8,[sp, #0x28]
71038dded4  cmp x19,x8
71038dded8  b.ne 0x71038dd5b4
71038ddedc  ldr x8,[x20, #0x30]
71038ddee0  sturb wzr,[x29, #-0xa8]
71038ddee4  add x1,x8,#0x10
71038ddee8  sub x2,x29,#0xa8
71038ddeec  mov x0,x21
71038ddef0  bl 0x71038deb20
71038ddef4  ldr x21,[sp, #0x20]
71038ddef8  mov x0,x21
71038ddefc  mov x1,x20
71038ddf00  bl 0x71038e0b10
71038ddf04  ldur x8,[x29, #-0x60]
71038ddf08  tbz w8,#0x0,0x71038ddf30
71038ddf0c  ands x20,x8,#-0x2
71038ddf10  b.eq 0x71038ddf30
71038ddf14  ldrb w8,[x20]
71038ddf18  tbz w8,#0x0,0x71038ddf28
71038ddf1c  ldr x0,[x20, #0x10]
71038ddf20  cbz x0,0x71038ddf28
71038ddf24  bl 0x710392eb40
71038ddf28  mov x0,x20
71038ddf2c  bl 0x710392eb40
71038ddf30  ldr x8,[sp, #0xa8]
71038ddf34  tbz w8,#0x0,0x71038dc65c
71038ddf38  ands x20,x8,#-0x2
71038ddf3c  b.eq 0x71038dc65c
71038ddf40  ldrb w8,[x20]
71038ddf44  tbz w8,#0x0,0x71038ddf78
71038ddf48  ldr x0,[x20, #0x10]
71038ddf4c  cbz x0,0x71038ddf78
71038ddf50  bl 0x710392eb40
71038ddf54  b 0x71038ddf78
71038ddf58  mov x21,xzr
71038ddf5c  cbz x8,0x71038dc65c
71038ddf60  str x20,[sp, #0x98]
71038ddf64  adrp x8,0x71052a8000
71038ddf68  ldr x8,[x8, #0xa70]
71038ddf6c  cbz x8,0x71038ddf78
71038ddf70  mov x0,x20
71038ddf74  bl 0x71039c19b0
71038ddf78  mov x0,x20
71038ddf7c  bl 0x710392eb40
71038ddf80  b 0x71038dc65c
71038ddf84  add x0,sp,#0x90
71038ddf88  bl 0x71039c0c00
71038ddf8c  b 0x71038dea28
71038ddf90  bl 0x71037b2bc0
71038ddf94  b 0x71038de9c8
71038ddf98  b 0x71038de9c8
71038ddf9c  adrp x8,0x71052a8000
71038ddfa0  ldr x8,[x8, #0xa70]
71038ddfa4  mov x24,x0
71038ddfa8  cbz x8,0x71038deb08
71038ddfac  mov x0,x19
71038ddfb0  bl 0x71039c19b0
71038ddfb4  b 0x71038deb08
71038ddfb8  bl 0x71037b2bc0
71038ddfbc  adrp x8,0x71052a8000
71038ddfc0  ldr x8,[x8, #0xa70]
71038ddfc4  mov x24,x0
71038ddfc8  cbz x8,0x71038deb08
71038ddfcc  mov x0,x19
71038ddfd0  bl 0x71039c19b0
71038ddfd4  b 0x71038deb08
71038ddfd8  bl 0x71037b2bc0
71038ddfdc  adrp x8,0x71052a8000
71038ddfe0  ldr x8,[x8, #0xa70]
71038ddfe4  mov x24,x0
71038ddfe8  cbz x8,0x71038de04c
71038ddfec  mov x0,x21
71038ddff0  bl 0x71039c19b0
71038ddff4  b 0x71038de04c
71038ddff8  bl 0x71037b2bc0
71038ddffc  adrp x8,0x71052a8000
71038de000  ldr x8,[x8, #0xa70]
71038de004  mov x24,x0
71038de008  cbz x8,0x71038de04c
71038de00c  mov x0,x21
71038de010  bl 0x71039c19b0
71038de014  b 0x71038de04c
71038de018  bl 0x71037b2bc0
71038de01c  bl 0x71037b2bc0
71038de020  b 0x71038de024
71038de024  mov x24,x0
71038de028  ldr x8,[sp, #0xa8]
71038de02c  tbnz w8,#0x0,0x71038dea08
71038de030  b 0x71038deb10
71038de034  adrp x8,0x71052a8000
71038de038  ldr x8,[x8, #0xa70]
71038de03c  mov x24,x0
71038de040  cbz x8,0x71038de04c
71038de044  mov x0,x21
71038de048  bl 0x71039c19b0
71038de04c  mov x0,x21
71038de050  b 0x71038deb0c
71038de054  bl 0x71037b2bc0
71038de058  bl 0x71037b2bc0
71038de05c  bl 0x71037b2bc0
71038de060  bl 0x71037b2bc0
71038de064  bl 0x71037b2bc0
71038de068  bl 0x71037b2bc0
71038de06c  bl 0x71037b2bc0
71038de070  bl 0x71037b2bc0
71038de074  bl 0x71037b2bc0
71038de078  bl 0x71037b2bc0
71038de07c  bl 0x71037b2bc0
71038de080  adrp x8,0x71052a8000
71038de084  ldr x8,[x8, #0xa70]
71038de088  mov x24,x0
71038de08c  cbz x8,0x71038de098
71038de090  mov x0,x25
71038de094  bl 0x71039c19b0
71038de098  mov x0,x25
71038de09c  bl 0x710392eb40
71038de0a0  ldr x8,[sp, #0xb8]
71038de0a4  tbnz w8,#0x0,0x71038dea88
71038de0a8  b 0x71038deaac
71038de0ac  bl 0x71037b2bc0
71038de0b0  b 0x71038dea28
71038de0b4  ldur x8,[x29, #-0xa8]
71038de0b8  mov x24,x0
71038de0bc  tbz w8,#0x0,0x71038de0e4
71038de0c0  ands x19,x8,#-0x2
71038de0c4  b.eq 0x71038de0e4
71038de0c8  ldrb w8,[x19]
71038de0cc  tbz w8,#0x0,0x71038de0dc
71038de0d0  ldr x0,[x19, #0x10]
71038de0d4  cbz x0,0x71038de0dc
71038de0d8  bl 0x710392eb40
71038de0dc  mov x0,x19
71038de0e0  bl 0x710392eb40
71038de0e4  ldr x8,[sp, #0x78]
71038de0e8  stur x8,[x29, #-0xa8]
71038de0ec  ldurb w8,[x29, #-0x70]
71038de0f0  tbnz w8,#0x0,0x71038de21c
71038de0f4  b 0x71038de27c
71038de0f8  ldur x8,[x29, #-0xa8]
71038de0fc  mov x24,x0
71038de100  tbz w8,#0x0,0x71038de128
71038de104  ands x19,x8,#-0x2
71038de108  b.eq 0x71038de128
71038de10c  ldrb w8,[x19]
71038de110  tbz w8,#0x0,0x71038de120
71038de114  ldr x0,[x19, #0x10]
71038de118  cbz x0,0x71038de120
71038de11c  bl 0x710392eb40
71038de120  mov x0,x19
71038de124  bl 0x710392eb40
71038de128  ldr x8,[sp, #0x70]
71038de12c  stur x8,[x29, #-0xa8]
71038de130  ldurb w8,[x29, #-0x70]
71038de134  tbnz w8,#0x0,0x71038de2f0
71038de138  b 0x71038de350
71038de13c  b 0x71038de208
71038de140  b 0x71038de2dc
71038de144  b 0x71038de3b0
71038de148  b 0x71038de4f8
71038de14c  mov x24,x0
71038de150  ldurb w8,[x29, #-0x88]
71038de154  tbnz w8,#0x0,0x71038de288
71038de158  b 0x71038de9cc
71038de15c  mov x24,x0
71038de160  ldurb w8,[x29, #-0x88]
71038de164  tbnz w8,#0x0,0x71038de35c
71038de168  b 0x71038de9cc
71038de16c  mov x24,x0
71038de170  ldurb w8,[x29, #-0x88]
71038de174  tbnz w8,#0x0,0x71038de498
71038de178  b 0x71038de9cc
71038de17c  mov x24,x0
71038de180  ldurb w8,[x29, #-0x88]
71038de184  tbnz w8,#0x0,0x71038de5e0
71038de188  b 0x71038de9cc
71038de18c  mov x24,x0
71038de190  ldurb w8,[x29, #-0x70]
71038de194  tbnz w8,#0x0,0x71038de42c
71038de198  b 0x71038de48c
71038de19c  mov x24,x0
71038de1a0  ldurb w8,[x29, #-0x70]
71038de1a4  tbnz w8,#0x0,0x71038de574
71038de1a8  b 0x71038de5d4
71038de1ac  b 0x71038dea28
71038de1b0  mov x24,x0
71038de1b4  ldurb w8,[x29, #-0x70]
71038de1b8  tbnz w8,#0x0,0x71038de21c
71038de1bc  b 0x71038de27c
71038de1c0  mov x24,x0
71038de1c4  ldurb w8,[x29, #-0x70]
71038de1c8  tbnz w8,#0x0,0x71038de2f0
71038de1cc  b 0x71038de350
71038de1d0  b 0x71038de1d4
71038de1d4  mov x24,x0
71038de1d8  ldr x19,[sp, #0x90]
71038de1dc  cbnz x19,0x71038deaf0
71038de1e0  b 0x71038deb10
71038de1e4  mov x24,x0
71038de1e8  ldur x8,[x29, #-0x60]
71038de1ec  tbnz w8,#0x0,0x71038deabc
71038de1f0  b 0x71038deae0
71038de1f4  bl 0x71037b2bc0
71038de1f8  bl 0x71037b2bc0
71038de1fc  bl 0x71037b2bc0
71038de200  bl 0x71037b2bc0
71038de204  bl 0x71037b2bc0
71038de208  mov x24,x0
71038de20c  sub x0,x29,#0xa8
71038de210  bl 0x71038dfca0
71038de214  ldurb w8,[x29, #-0x70]
71038de218  tbz w8,#0x0,0x71038de27c
71038de21c  ldr x0,[sp, #0x68]
71038de220  bl 0x71038dfd80
71038de224  ldur x8,[x29, #-0x70]
71038de228  ands x0,x8,#-0x2
71038de22c  b.eq 0x71038de278
71038de230  ldr x8,[x0]
71038de234  cbz x8,0x71038de26c
71038de238  ldr x9,[x8, #0x8]
71038de23c  cbz x9,0x71038de258
71038de240  ldr x10,[x9, #0x10]
71038de244  str x10,[x8, #0x8]
71038de248  str x8,[x9, #0x10]
71038de24c  mov x8,x9
71038de250  cbnz x9,0x71038de238
71038de254  b 0x71038de26c
71038de258  ldr x9,[x8, #0x10]
71038de25c  stp xzr,xzr,[x8]
71038de260  str xzr,[x8, #0x10]
71038de264  mov x8,x9
71038de268  cbnz x9,0x71038de238
71038de26c  stp xzr,xzr,[x0, #0x8]
71038de270  str xzr,[x0]
71038de274  bl 0x710392eb40
71038de278  stur x28,[x29, #-0x70]
71038de27c  stur xzr,[x29, #-0x68]
71038de280  ldurb w8,[x29, #-0x88]
71038de284  tbz w8,#0x0,0x71038de9cc
71038de288  sub x0,x29,#0x88
71038de28c  bl 0x71038dfd80
71038de290  ldur x8,[x29, #-0x88]
71038de294  ands x0,x8,#-0x2
71038de298  b.eq 0x71038de63c
71038de29c  ldr x8,[x0]
71038de2a0  cbz x8,0x71038de630
71038de2a4  ldr x9,[x8, #0x8]
71038de2a8  cbz x9,0x71038de2bc
71038de2ac  ldr x10,[x9, #0x10]
71038de2b0  str x10,[x8, #0x8]
71038de2b4  str x8,[x9, #0x10]
71038de2b8  b 0x71038de2c8
71038de2bc  ldr x9,[x8, #0x10]
71038de2c0  stp xzr,xzr,[x8]
71038de2c4  str xzr,[x8, #0x10]
71038de2c8  mov x8,x9
71038de2cc  cbnz x9,0x71038de2a4
71038de2d0  b 0x71038de630
71038de2d4  bl 0x71037b2bc0
71038de2d8  bl 0x71037b2bc0
71038de2dc  mov x24,x0
71038de2e0  sub x0,x29,#0xa8
71038de2e4  bl 0x71038dfca0
71038de2e8  ldurb w8,[x29, #-0x70]
71038de2ec  tbz w8,#0x0,0x71038de350
71038de2f0  ldr x0,[sp, #0x68]
71038de2f4  bl 0x71038dfd80
71038de2f8  ldur x8,[x29, #-0x70]
71038de2fc  ands x0,x8,#-0x2
71038de300  b.eq 0x71038de34c
71038de304  ldr x8,[x0]
71038de308  cbz x8,0x71038de340
71038de30c  ldr x9,[x8, #0x8]
71038de310  cbz x9,0x71038de32c
71038de314  ldr x10,[x9, #0x10]
71038de318  str x10,[x8, #0x8]
71038de31c  str x8,[x9, #0x10]
71038de320  mov x8,x9
71038de324  cbnz x9,0x71038de30c
71038de328  b 0x71038de340
71038de32c  ldr x9,[x8, #0x10]
71038de330  stp xzr,xzr,[x8]
71038de334  str xzr,[x8, #0x10]
71038de338  mov x8,x9
71038de33c  cbnz x9,0x71038de30c
71038de340  stp xzr,xzr,[x0, #0x8]
71038de344  str xzr,[x0]
71038de348  bl 0x710392eb40
71038de34c  stur x28,[x29, #-0x70]
71038de350  stur xzr,[x29, #-0x68]
71038de354  ldurb w8,[x29, #-0x88]
71038de358  tbz w8,#0x0,0x71038de9cc
71038de35c  sub x0,x29,#0x88
71038de360  bl 0x71038dfd80
71038de364  ldur x8,[x29, #-0x88]
71038de368  ands x0,x8,#-0x2
71038de36c  b.eq 0x71038de63c
71038de370  ldr x8,[x0]
71038de374  cbz x8,0x71038de630
71038de378  ldr x9,[x8, #0x8]
71038de37c  cbz x9,0x71038de390
71038de380  ldr x10,[x9, #0x10]
71038de384  str x10,[x8, #0x8]
71038de388  str x8,[x9, #0x10]
71038de38c  b 0x71038de39c
71038de390  ldr x9,[x8, #0x10]
71038de394  stp xzr,xzr,[x8]
71038de398  str xzr,[x8, #0x10]
71038de39c  mov x8,x9
71038de3a0  cbnz x9,0x71038de378
71038de3a4  b 0x71038de630
71038de3a8  bl 0x71037b2bc0
71038de3ac  bl 0x71037b2bc0
71038de3b0  ldurb w8,[x29, #-0xa0]
71038de3b4  mov x24,x0
71038de3b8  tbz w8,#0x0,0x71038de420
71038de3bc  ldr x0,[sp, #0x58]
71038de3c0  bl 0x71038df350
71038de3c4  ldur x8,[x29, #-0xa0]
71038de3c8  ands x0,x8,#-0x2
71038de3cc  b.eq 0x71038de418
71038de3d0  ldr x8,[x0]
71038de3d4  cbz x8,0x71038de40c
71038de3d8  ldr x9,[x8, #0x8]
71038de3dc  cbz x9,0x71038de3f8
71038de3e0  ldr x10,[x9, #0x10]
71038de3e4  str x10,[x8, #0x8]
71038de3e8  str x8,[x9, #0x10]
71038de3ec  mov x8,x9
71038de3f0  cbnz x9,0x71038de3d8
71038de3f4  b 0x71038de40c
71038de3f8  ldr x9,[x8, #0x10]
71038de3fc  stp xzr,xzr,[x8]
71038de400  str xzr,[x8, #0x10]
71038de404  mov x8,x9
71038de408  cbnz x9,0x71038de3d8
71038de40c  stp xzr,xzr,[x0, #0x8]
71038de410  str xzr,[x0]
71038de414  bl 0x710392eb40
71038de418  ldr x8,[sp, #0x50]
71038de41c  stur x8,[x29, #-0xa0]
71038de420  stur xzr,[x29, #-0x98]
71038de424  ldurb w8,[x29, #-0x70]
71038de428  tbz w8,#0x0,0x71038de48c
71038de42c  ldr x0,[sp, #0x68]
71038de430  bl 0x71038df350
71038de434  ldur x8,[x29, #-0x70]
71038de438  ands x0,x8,#-0x2
71038de43c  b.eq 0x71038de488
71038de440  ldr x8,[x0]
71038de444  cbz x8,0x71038de47c
71038de448  ldr x9,[x8, #0x8]
71038de44c  cbz x9,0x71038de468
71038de450  ldr x10,[x9, #0x10]
71038de454  str x10,[x8, #0x8]
71038de458  str x8,[x9, #0x10]
71038de45c  mov x8,x9
71038de460  cbnz x9,0x71038de448
71038de464  b 0x71038de47c
71038de468  ldr x9,[x8, #0x10]
71038de46c  stp xzr,xzr,[x8]
71038de470  str xzr,[x8, #0x10]
71038de474  mov x8,x9
71038de478  cbnz x9,0x71038de448
71038de47c  stp xzr,xzr,[x0, #0x8]
71038de480  str xzr,[x0]
71038de484  bl 0x710392eb40
71038de488  stur x28,[x29, #-0x70]
71038de48c  stur xzr,[x29, #-0x68]
71038de490  ldurb w8,[x29, #-0x88]
71038de494  tbz w8,#0x0,0x71038de9cc
71038de498  sub x0,x29,#0x88
71038de49c  bl 0x71038df350
71038de4a0  ldur x8,[x29, #-0x88]
71038de4a4  ands x0,x8,#-0x2
71038de4a8  b.eq 0x71038de63c
71038de4ac  ldr x8,[x0]
71038de4b0  cbz x8,0x71038de630
71038de4b4  ldr x9,[x8, #0x8]
71038de4b8  cbz x9,0x71038de4d4
71038de4bc  ldr x10,[x9, #0x10]
71038de4c0  str x10,[x8, #0x8]
71038de4c4  str x8,[x9, #0x10]
71038de4c8  mov x8,x9
71038de4cc  cbnz x9,0x71038de4b4
71038de4d0  b 0x71038de630
71038de4d4  ldr x9,[x8, #0x10]
71038de4d8  stp xzr,xzr,[x8]
71038de4dc  str xzr,[x8, #0x10]
71038de4e0  mov x8,x9
71038de4e4  cbnz x9,0x71038de4b4
71038de4e8  b 0x71038de630
71038de4ec  bl 0x71037b2bc0
71038de4f0  bl 0x71037b2bc0
71038de4f4  bl 0x71037b2bc0
71038de4f8  ldurb w8,[x29, #-0xa0]
71038de4fc  mov x24,x0
71038de500  tbz w8,#0x0,0x71038de568
71038de504  ldr x0,[sp, #0x58]
71038de508  bl 0x71038df350
71038de50c  ldur x8,[x29, #-0xa0]
71038de510  ands x0,x8,#-0x2
71038de514  b.eq 0x71038de560
71038de518  ldr x8,[x0]
71038de51c  cbz x8,0x71038de554
71038de520  ldr x9,[x8, #0x8]
71038de524  cbz x9,0x71038de540
71038de528  ldr x10,[x9, #0x10]
71038de52c  str x10,[x8, #0x8]
71038de530  str x8,[x9, #0x10]
71038de534  mov x8,x9
71038de538  cbnz x9,0x71038de520
71038de53c  b 0x71038de554
71038de540  ldr x9,[x8, #0x10]
71038de544  stp xzr,xzr,[x8]
71038de548  str xzr,[x8, #0x10]
71038de54c  mov x8,x9
71038de550  cbnz x9,0x71038de520
71038de554  stp xzr,xzr,[x0, #0x8]
71038de558  str xzr,[x0]
71038de55c  bl 0x710392eb40
71038de560  ldr x8,[sp, #0x50]
71038de564  stur x8,[x29, #-0xa0]
71038de568  stur xzr,[x29, #-0x98]
71038de56c  ldurb w8,[x29, #-0x70]
71038de570  tbz w8,#0x0,0x71038de5d4
71038de574  ldr x0,[sp, #0x68]
71038de578  bl 0x71038df350
71038de57c  ldur x8,[x29, #-0x70]
71038de580  ands x0,x8,#-0x2
71038de584  b.eq 0x71038de5d0
71038de588  ldr x8,[x0]
71038de58c  cbz x8,0x71038de5c4
71038de590  ldr x9,[x8, #0x8]
71038de594  cbz x9,0x71038de5b0
71038de598  ldr x10,[x9, #0x10]
71038de59c  str x10,[x8, #0x8]
71038de5a0  str x8,[x9, #0x10]
71038de5a4  mov x8,x9
71038de5a8  cbnz x9,0x71038de590
71038de5ac  b 0x71038de5c4
71038de5b0  ldr x9,[x8, #0x10]
71038de5b4  stp xzr,xzr,[x8]
71038de5b8  str xzr,[x8, #0x10]
71038de5bc  mov x8,x9
71038de5c0  cbnz x9,0x71038de590
71038de5c4  stp xzr,xzr,[x0, #0x8]
71038de5c8  str xzr,[x0]
71038de5cc  bl 0x710392eb40
71038de5d0  stur x28,[x29, #-0x70]
71038de5d4  stur xzr,[x29, #-0x68]
71038de5d8  ldurb w8,[x29, #-0x88]
71038de5dc  tbz w8,#0x0,0x71038de9cc
71038de5e0  sub x0,x29,#0x88
71038de5e4  bl 0x71038df350
71038de5e8  ldur x8,[x29, #-0x88]
71038de5ec  ands x0,x8,#-0x2
71038de5f0  b.eq 0x71038de63c
71038de5f4  ldr x8,[x0]
71038de5f8  cbz x8,0x71038de630
71038de5fc  ldr x9,[x8, #0x8]
71038de600  cbz x9,0x71038de61c
71038de604  ldr x10,[x9, #0x10]
71038de608  str x10,[x8, #0x8]
71038de60c  str x8,[x9, #0x10]
71038de610  mov x8,x9
71038de614  cbnz x9,0x71038de5fc
71038de618  b 0x71038de630
71038de61c  ldr x9,[x8, #0x10]
71038de620  stp xzr,xzr,[x8]
71038de624  str xzr,[x8, #0x10]
71038de628  mov x8,x9
71038de62c  cbnz x9,0x71038de5fc
71038de630  stp xzr,xzr,[x0, #0x8]
71038de634  str xzr,[x0]
71038de638  bl 0x710392eb40
71038de63c  ldr x8,[sp, #0x38]
71038de640  stur x8,[x29, #-0x88]
71038de644  ldur x8,[x29, #-0x60]
71038de648  tbnz w8,#0x0,0x71038de9d4
71038de64c  b 0x71038de9f8
71038de650  bl 0x71037b2bc0
71038de654  bl 0x71037b2bc0
71038de658  bl 0x71037b2bc0
71038de65c  ldur x8,[x29, #-0xa8]
71038de660  mov x24,x0
71038de664  tbz w8,#0x0,0x71038de68c
71038de668  ands x20,x8,#-0x2
71038de66c  b.eq 0x71038de68c
71038de670  ldrb w8,[x20]
71038de674  tbz w8,#0x0,0x71038de684
71038de678  ldr x0,[x20, #0x10]
71038de67c  cbz x0,0x71038de684
71038de680  bl 0x710392eb40
71038de684  mov x0,x20
71038de688  bl 0x710392eb40
71038de68c  ldr x8,[sp, #0x78]
71038de690  stur x8,[x29, #-0xa8]
71038de694  ldurb w8,[x29, #-0x70]
71038de698  tbnz w8,#0x0,0x71038de714
71038de69c  b 0x71038de778
71038de6a0  b 0x71038de700
71038de6a4  b 0x71038de7d8
71038de6a8  mov x24,x0
71038de6ac  ldrb w8,[sp, #0xa8]
71038de6b0  tbnz w8,#0x0,0x71038de784
71038de6b4  b 0x71038dea80
71038de6b8  mov x24,x0
71038de6bc  ldrb w8,[sp, #0xa8]
71038de6c0  tbnz w8,#0x0,0x71038de8c4
71038de6c4  b 0x71038dea80
71038de6c8  mov x24,x0
71038de6cc  ldurb w8,[x29, #-0x70]
71038de6d0  tbnz w8,#0x0,0x71038de854
71038de6d4  b 0x71038de8b8
71038de6d8  b 0x71038de940
71038de6dc  b 0x71038de978
71038de6e0  b 0x71038de9c8
71038de6e4  b 0x71038de9c8
71038de6e8  mov x24,x0
71038de6ec  ldurb w8,[x29, #-0x70]
71038de6f0  tbnz w8,#0x0,0x71038de714
71038de6f4  b 0x71038de778
71038de6f8  b 0x71038de9c8
71038de6fc  b 0x71038de9c8
71038de700  mov x24,x0
71038de704  sub x0,x29,#0xa8
71038de708  bl 0x71038dfca0
71038de70c  ldurb w8,[x29, #-0x70]
71038de710  tbz w8,#0x0,0x71038de778
71038de714  ldr x0,[sp, #0x48]
71038de718  bl 0x71038dfd80
71038de71c  ldur x8,[x29, #-0x70]
71038de720  ands x0,x8,#-0x2
71038de724  b.eq 0x71038de770
71038de728  ldr x8,[x0]
71038de72c  cbz x8,0x71038de764
71038de730  ldr x9,[x8, #0x8]
71038de734  cbz x9,0x71038de750
71038de738  ldr x10,[x9, #0x10]
71038de73c  str x10,[x8, #0x8]
71038de740  str x8,[x9, #0x10]
71038de744  mov x8,x9
71038de748  cbnz x9,0x71038de730
71038de74c  b 0x71038de764
71038de750  ldr x9,[x8, #0x10]
71038de754  stp xzr,xzr,[x8]
71038de758  str xzr,[x8, #0x10]
71038de75c  mov x8,x9
71038de760  cbnz x9,0x71038de730
71038de764  stp xzr,xzr,[x0, #0x8]
71038de768  str xzr,[x0]
71038de76c  bl 0x710392eb40
71038de770  ldr x8,[sp, #0x68]
71038de774  stur x8,[x29, #-0x70]
71038de778  stur xzr,[x29, #-0x68]
71038de77c  ldrb w8,[sp, #0xa8]
71038de780  tbz w8,#0x0,0x71038dea80
71038de784  add x0,sp,#0xa8
71038de788  bl 0x71038dfd80
71038de78c  ldr x8,[sp, #0xa8]
71038de790  ands x0,x8,#-0x2
71038de794  b.eq 0x71038de920
71038de798  ldr x8,[x0]
71038de79c  cbz x8,0x71038de914
71038de7a0  ldr x9,[x8, #0x8]
71038de7a4  cbz x9,0x71038de7b8
71038de7a8  ldr x10,[x9, #0x10]
71038de7ac  str x10,[x8, #0x8]
71038de7b0  str x8,[x9, #0x10]
71038de7b4  b 0x71038de7c4
71038de7b8  ldr x9,[x8, #0x10]
71038de7bc  stp xzr,xzr,[x8]
71038de7c0  str xzr,[x8, #0x10]
71038de7c4  mov x8,x9
71038de7c8  cbnz x9,0x71038de7a0
71038de7cc  b 0x71038de914
71038de7d0  bl 0x71037b2bc0
71038de7d4  bl 0x71037b2bc0
71038de7d8  ldurb w8,[x29, #-0xa0]
71038de7dc  mov x24,x0
71038de7e0  tbz w8,#0x0,0x71038de848
71038de7e4  ldr x0,[sp, #0x58]
71038de7e8  bl 0x71038df350
71038de7ec  ldur x8,[x29, #-0xa0]
71038de7f0  ands x0,x8,#-0x2
71038de7f4  b.eq 0x71038de840
71038de7f8  ldr x8,[x0]
71038de7fc  cbz x8,0x71038de834
71038de800  ldr x9,[x8, #0x8]
71038de804  cbz x9,0x71038de820
71038de808  ldr x10,[x9, #0x10]
71038de80c  str x10,[x8, #0x8]
71038de810  str x8,[x9, #0x10]
71038de814  mov x8,x9
71038de818  cbnz x9,0x71038de800
71038de81c  b 0x71038de834
71038de820  ldr x9,[x8, #0x10]
71038de824  stp xzr,xzr,[x8]
71038de828  str xzr,[x8, #0x10]
71038de82c  mov x8,x9
71038de830  cbnz x9,0x71038de800
71038de834  stp xzr,xzr,[x0, #0x8]
71038de838  str xzr,[x0]
71038de83c  bl 0x710392eb40
71038de840  ldr x8,[sp, #0x50]
71038de844  stur x8,[x29, #-0xa0]
71038de848  stur xzr,[x29, #-0x98]
71038de84c  ldurb w8,[x29, #-0x70]
71038de850  tbz w8,#0x0,0x71038de8b8
71038de854  ldr x0,[sp, #0x48]
71038de858  bl 0x71038df350
71038de85c  ldur x8,[x29, #-0x70]
71038de860  ands x0,x8,#-0x2
71038de864  b.eq 0x71038de8b0
71038de868  ldr x8,[x0]
71038de86c  cbz x8,0x71038de8a4
71038de870  ldr x9,[x8, #0x8]
71038de874  cbz x9,0x71038de890
71038de878  ldr x10,[x9, #0x10]
71038de87c  str x10,[x8, #0x8]
71038de880  str x8,[x9, #0x10]
71038de884  mov x8,x9
71038de888  cbnz x9,0x71038de870
71038de88c  b 0x71038de8a4
71038de890  ldr x9,[x8, #0x10]
71038de894  stp xzr,xzr,[x8]
71038de898  str xzr,[x8, #0x10]
71038de89c  mov x8,x9
71038de8a0  cbnz x9,0x71038de870
71038de8a4  stp xzr,xzr,[x0, #0x8]
71038de8a8  str xzr,[x0]
71038de8ac  bl 0x710392eb40
71038de8b0  ldr x8,[sp, #0x68]
71038de8b4  stur x8,[x29, #-0x70]
71038de8b8  stur xzr,[x29, #-0x68]
71038de8bc  ldrb w8,[sp, #0xa8]
71038de8c0  tbz w8,#0x0,0x71038dea80
71038de8c4  add x0,sp,#0xa8
71038de8c8  bl 0x71038df350
71038de8cc  ldr x8,[sp, #0xa8]
71038de8d0  ands x0,x8,#-0x2
71038de8d4  b.eq 0x71038de920
71038de8d8  ldr x8,[x0]
71038de8dc  cbz x8,0x71038de914
71038de8e0  ldr x9,[x8, #0x8]
71038de8e4  cbz x9,0x71038de900
71038de8e8  ldr x10,[x9, #0x10]
71038de8ec  str x10,[x8, #0x8]
71038de8f0  str x8,[x9, #0x10]
71038de8f4  mov x8,x9
71038de8f8  cbnz x9,0x71038de8e0
71038de8fc  b 0x71038de914
71038de900  ldr x9,[x8, #0x10]
71038de904  stp xzr,xzr,[x8]
71038de908  str xzr,[x8, #0x10]
71038de90c  mov x8,x9
71038de910  cbnz x9,0x71038de8e0
71038de914  stp xzr,xzr,[x0, #0x8]
71038de918  str xzr,[x0]
71038de91c  bl 0x710392eb40
71038de920  ldr x8,[sp, #0x30]
71038de924  str x8,[sp, #0xa8]
71038de928  ldr x8,[sp, #0xb8]
71038de92c  tbnz w8,#0x0,0x71038dea88
71038de930  b 0x71038deaac
71038de934  bl 0x71037b2bc0
71038de938  bl 0x71037b2bc0
71038de93c  bl 0x71037b2bc0
71038de940  ldur x8,[x29, #-0xa8]
71038de944  mov x24,x0
71038de948  tbz w8,#0x0,0x71038de970
71038de94c  ands x19,x8,#-0x2
71038de950  b.eq 0x71038de970
71038de954  ldrb w8,[x19]
71038de958  tbz w8,#0x0,0x71038de968
71038de95c  ldr x0,[x19, #0x10]
71038de960  cbz x0,0x71038de968
71038de964  bl 0x710392eb40
71038de968  mov x0,x19
71038de96c  bl 0x710392eb40
71038de970  ldr x8,[sp, #0x78]
71038de974  b 0x71038de9ac
71038de978  ldur x8,[x29, #-0xa8]
71038de97c  mov x24,x0
71038de980  tbz w8,#0x0,0x71038de9a8
71038de984  ands x19,x8,#-0x2
71038de988  b.eq 0x71038de9a8
71038de98c  ldrb w8,[x19]
71038de990  tbz w8,#0x0,0x71038de9a0
71038de994  ldr x0,[x19, #0x10]
71038de998  cbz x0,0x71038de9a0
71038de99c  bl 0x710392eb40
71038de9a0  mov x0,x19
71038de9a4  bl 0x710392eb40
71038de9a8  ldr x8,[sp, #0x70]
71038de9ac  stur x8,[x29, #-0xa8]
71038de9b0  ldur x8,[x29, #-0x60]
71038de9b4  tbnz w8,#0x0,0x71038de9d4
71038de9b8  b 0x71038de9f8
71038de9bc  b 0x71038dea38
71038de9c0  b 0x71038dea28
71038de9c4  b 0x71038de9c8
71038de9c8  mov x24,x0
71038de9cc  ldur x8,[x29, #-0x60]
71038de9d0  tbz w8,#0x0,0x71038de9f8
71038de9d4  ands x19,x8,#-0x2
71038de9d8  b.eq 0x71038de9f8
71038de9dc  ldrb w8,[x19]
71038de9e0  tbz w8,#0x0,0x71038de9f0
71038de9e4  ldr x0,[x19, #0x10]
71038de9e8  cbz x0,0x71038de9f0
71038de9ec  bl 0x710392eb40
71038de9f0  mov x0,x19
71038de9f4  bl 0x710392eb40
71038de9f8  ldr x8,[sp, #0x18]
71038de9fc  stur x8,[x29, #-0x60]
71038dea00  ldr x8,[sp, #0xa8]
71038dea04  tbz w8,#0x0,0x71038deb10
71038dea08  ands x19,x8,#-0x2
71038dea0c  b.eq 0x71038deb10
71038dea10  ldrb w8,[x19]
71038dea14  tbz w8,#0x0,0x71038deb08
71038dea18  ldr x0,[x19, #0x10]
71038dea1c  cbz x0,0x71038deb08
71038dea20  bl 0x710392eb40
71038dea24  b 0x71038deb08
71038dea28  mov x24,x0
71038dea2c  ldr x8,[sp, #0xb8]
71038dea30  tbnz w8,#0x0,0x71038dea88
71038dea34  b 0x71038deaac
71038dea38  ldur x8,[x29, #-0xa8]
71038dea3c  mov x24,x0
71038dea40  tbz w8,#0x0,0x71038dea68
71038dea44  ands x19,x8,#-0x2
71038dea48  b.eq 0x71038dea68
71038dea4c  ldrb w8,[x19]
71038dea50  tbz w8,#0x0,0x71038dea60
71038dea54  ldr x0,[x19, #0x10]
71038dea58  cbz x0,0x71038dea60
71038dea5c  bl 0x710392eb40
71038dea60  mov x0,x19
71038dea64  bl 0x710392eb40
71038dea68  ldr x8,[sp, #0x78]
71038dea6c  stur x8,[x29, #-0xa8]
71038dea70  ldr x8,[sp, #0xb8]
71038dea74  tbnz w8,#0x0,0x71038dea88
71038dea78  b 0x71038deaac
71038dea7c  mov x24,x0
71038dea80  ldr x8,[sp, #0xb8]
71038dea84  tbz w8,#0x0,0x71038deaac
71038dea88  ands x19,x8,#-0x2
71038dea8c  b.eq 0x71038deaac
71038dea90  ldrb w8,[x19]
71038dea94  tbz w8,#0x0,0x71038deaa4
71038dea98  ldr x0,[x19, #0x10]
71038dea9c  cbz x0,0x71038deaa4
71038deaa0  bl 0x710392eb40
71038deaa4  mov x0,x19
71038deaa8  bl 0x710392eb40
71038deaac  ldr x8,[sp, #0x10]
71038deab0  str x8,[sp, #0xb8]
71038deab4  ldur x8,[x29, #-0x60]
71038deab8  tbz w8,#0x0,0x71038deae0
71038deabc  ands x19,x8,#-0x2
71038deac0  b.eq 0x71038deae0
71038deac4  ldrb w8,[x19]
71038deac8  tbz w8,#0x0,0x71038dead8
71038deacc  ldr x0,[x19, #0x10]
71038dead0  cbz x0,0x71038dead8
71038dead4  bl 0x710392eb40
71038dead8  mov x0,x19
71038deadc  bl 0x710392eb40
71038deae0  ldr x8,[sp, #0x18]
71038deae4  stur x8,[x29, #-0x60]
71038deae8  ldr x19,[sp, #0x90]
71038deaec  cbz x19,0x71038deb10
71038deaf0  str x19,[sp, #0x98]
71038deaf4  adrp x8,0x71052a8000
71038deaf8  ldr x8,[x8, #0xa70]
71038deafc  cbz x8,0x71038deb08
71038deb00  mov x0,x19
71038deb04  bl 0x71039c19b0
71038deb08  mov x0,x19
71038deb0c  bl 0x710392eb40
71038deb10  mov x0,x24
71038deb14  bl 0x71039c19f0
71038deb18  bl 0x71037b2bc0
