// addr:      7101dbc630
// offset:    0x1dbc630
// name:      FUN_7101dbc630
// mangled:   
// size:      2336

7101dbc630  sub sp,sp,#0xb0
7101dbc634  str d8,[sp, #0x40]
7101dbc638  stp x28,x27,[sp, #0x50]
7101dbc63c  stp x26,x25,[sp, #0x60]
7101dbc640  stp x24,x23,[sp, #0x70]
7101dbc644  stp x22,x21,[sp, #0x80]
7101dbc648  stp x20,x19,[sp, #0x90]
7101dbc64c  stp x29,x30,[sp, #0xa0]
7101dbc650  add x29,sp,#0xa0
7101dbc654  mov w21,w1
7101dbc658  mov x20,x0
7101dbc65c  mov w0,#0x10
7101dbc660  mov w1,#0x8
7101dbc664  mov x19,x2
7101dbc668  bl 0x710392e290
7101dbc66c  mov x22,x0
7101dbc670  cbnz x0,0x7101dbc6bc
7101dbc674  adrp x8,0x7105332000
7101dbc678  ldr x0,[x8, #0xf00]
7101dbc67c  cbz x0,0x7101dbc6b8
7101dbc680  mov w8,#0x8
7101dbc684  str wzr,[sp, #0x20]
7101dbc688  add x1,sp,#0x20
7101dbc68c  str x8,[sp, #0x30]
7101dbc690  ldr x8,[x0]
7101dbc694  ldr x8,[x8, #0x30]
7101dbc698  add x2,sp,#0x30
7101dbc69c  blr x8
7101dbc6a0  tbz w0,#0x0,0x7101dbc6b8
7101dbc6a4  mov w0,#0x10
7101dbc6a8  mov w1,#0x8
7101dbc6ac  bl 0x710392e290
7101dbc6b0  mov x22,x0
7101dbc6b4  cbnz x0,0x7101dbc6bc
7101dbc6b8  mov x22,xzr
7101dbc6bc  str xzr,[x22]
7101dbc6c0  ldr x8,[x19, #0x8]
7101dbc6c4  ldr x8,[x8, #0x8]
7101dbc6c8  cbz x8,0x7101dbc6fc
7101dbc6cc  ldr x0,[x8, #0x60]
7101dbc6d0  cbz x0,0x7101dbc6fc
7101dbc6d4  ldr x8,[x8, #0x18]
7101dbc6d8  add x1,x8,#0xb0
7101dbc6dc  bl 0x7103796f20
7101dbc6e0  str x0,[x22]
7101dbc6e4  cbz x0,0x7101dbc700
7101dbc6e8  ldr x8,[x0]
7101dbc6ec  ldr x8,[x8, #0x2e0]
7101dbc6f0  mov w1,wzr
7101dbc6f4  blr x8
7101dbc6f8  b 0x7101dbc700
7101dbc6fc  str xzr,[x22]
7101dbc700  mov x0,x22
7101dbc704  bl 0x710392eb40
7101dbc708  mov x0,x20
7101dbc70c  ldr x8,[x0, #0x8]!
7101dbc710  ldr x9,[x0, #0x8]
7101dbc714  sub x10,x9,x8
7101dbc718  sxtw x9,w21
7101dbc71c  asr x10,x10,#0x1
7101dbc720  cmp x10,x9
7101dbc724  b.ls 0x7101dbcf4c
7101dbc728  adrp x25,0x7105329000
7101dbc72c  ldrh w21,[x8, x9, LSL #0x1]
7101dbc730  ldr x8,[x25, #0xf98]
7101dbc734  adrp x24,0x710532f000
7101dbc738  orr w9,wzr,#0xffff
7101dbc73c  ldr x23,[x8]
7101dbc740  ldr x8,[x24, #0x730]
7101dbc744  ldr x8,[x8, #0x8]
7101dbc748  ldr x8,[x8, #0x1d8]
7101dbc74c  sxth x28,w21
7101dbc750  cmp x21,x9
7101dbc754  b.eq 0x7101dbc764
7101dbc758  add x9,x8,x28, LSL #0x1
7101dbc75c  ldrh w9,[x9, #0x60]
7101dbc760  b 0x7101dbc768
7101dbc764  mov w9,#0xffffffff
7101dbc768  ldp x10,x8,[x8, #0x20]
7101dbc76c  sub x8,x8,x10
7101dbc770  orr x11,xzr,#-0x3333333333333334
7101dbc774  movk x11,#0xcccd
7101dbc778  adrp x12,0x7105182000
7101dbc77c  add x12,x12,#0xb08
7101dbc780  adrp x1,0x71042b2000
7101dbc784  add x1,x1,#0x92e
7101dbc788  asr x8,x8,#0x6
7101dbc78c  mul x8,x8,x11
7101dbc790  mov w11,#0x140
7101dbc794  madd x10,x9,x11,x10
7101dbc798  cmp x8,x9
7101dbc79c  add x8,sp,#0x30
7101dbc7a0  mov x0,x19
7101dbc7a4  csel x27,x10,x12,hi
7101dbc7a8  bl 0x7103776910
7101dbc7ac  ldrh w3,[x27, #0x5c]
7101dbc7b0  adrp x1,0x7104454000
7101dbc7b4  add x1,x1,#0xf3c
7101dbc7b8  add x0,sp,#0x30
7101dbc7bc  mov w2,#0x1
7101dbc7c0  bl 0x710377a280
7101dbc7c4  ldr x0,[sp, #0x38]
7101dbc7c8  adrp x8,0x710523d000
7101dbc7cc  add x8,x8,#0x9a8
7101dbc7d0  stp x8,xzr,[sp, #0x30]
7101dbc7d4  cbz x0,0x7101dbc7dc
7101dbc7d8  bl 0x710392eb40
7101dbc7dc  adrp x1,0x7104292000
7101dbc7e0  add x1,x1,#0x511
7101dbc7e4  add x8,sp,#0x30
7101dbc7e8  mov x0,x19
7101dbc7ec  bl 0x7103776640
7101dbc7f0  cmn w28,#0x1
7101dbc7f4  cset w8,ne
7101dbc7f8  cmp w28,#0x7d0
7101dbc7fc  cset w9,lt
7101dbc800  and w26,w8,w9
7101dbc804  cmp w26,#0x1
7101dbc808  str x23,[sp, #0x8]
7101dbc80c  str x27,[sp, #0x48]
7101dbc810  b.ne 0x7101dbc890
7101dbc814  ldr x8,[x24, #0x730]
7101dbc818  ldr x8,[x8, #0x8]
7101dbc81c  ldr x8,[x8, #0x1d8]
7101dbc820  ldp x10,x11,[x8, #0x20]
7101dbc824  add x9,x8,w21, SXTH  #0x1
7101dbc828  ldrh w9,[x9, #0x60]
7101dbc82c  sub x10,x11,x10
7101dbc830  lsr x10,x10,#0x6
7101dbc834  mov w22,#0xcccd
7101dbc838  movk w22,#0xcccc, LSL #16
7101dbc83c  mul w10,w10,w22
7101dbc840  cmp w10,w9
7101dbc844  b.ls 0x7101dbc85c
7101dbc848  ldr x9,[x23, #0x30]
7101dbc84c  mov w10,#0x24
7101dbc850  madd x9,x28,x10,x9
7101dbc854  ldrb w9,[x9, #0x1]
7101dbc858  tbnz w9,#0x3,0x7101dbc994
7101dbc85c  add x9,x8,x28, LSL #0x1
7101dbc860  ldp x10,x8,[x8, #0x20]
7101dbc864  ldrh w9,[x9, #0x60]
7101dbc868  sub x8,x8,x10
7101dbc86c  lsr x8,x8,#0x6
7101dbc870  mul w8,w8,w22
7101dbc874  cmp w8,w9
7101dbc878  b.ls 0x7101dbc890
7101dbc87c  ldr x8,[x23, #0x30]
7101dbc880  mov w9,#0x24
7101dbc884  madd x8,x28,x9,x8
7101dbc888  ldrb w8,[x8, #0x1]
7101dbc88c  tbnz w8,#0x2,0x7101dbcb0c
7101dbc890  fmov s8,0x3f800000
7101dbc894  ldr x0,[x19, #0x8]
7101dbc898  adrp x1,0x7104270000
7101dbc89c  add x1,x1,#0x403
7101dbc8a0  mov v0.16B,v8.16B
7101dbc8a4  bl 0x7103778300
7101dbc8a8  ldr x22,[sp, #0x38]
7101dbc8ac  mov v0.16B,v8.16B
7101dbc8b0  adrp x1,0x71043cd000
7101dbc8b4  add x1,x1,#0x335
7101dbc8b8  mov x0,x22
7101dbc8bc  bl 0x7103778300
7101dbc8c0  mov w0,#0x10
7101dbc8c4  mov w1,#0x8
7101dbc8c8  bl 0x710392e290
7101dbc8cc  mov x23,x0
7101dbc8d0  cbnz x0,0x7101dbc91c
7101dbc8d4  adrp x8,0x7105332000
7101dbc8d8  ldr x0,[x8, #0xf00]
7101dbc8dc  cbz x0,0x7101dbc918
7101dbc8e0  mov w8,#0x8
7101dbc8e4  str wzr,[sp, #0x10]
7101dbc8e8  add x1,sp,#0x10
7101dbc8ec  str x8,[sp, #0x20]
7101dbc8f0  ldr x8,[x0]
7101dbc8f4  ldr x8,[x8, #0x30]
7101dbc8f8  add x2,sp,#0x20
7101dbc8fc  blr x8
7101dbc900  tbz w0,#0x0,0x7101dbc918
7101dbc904  mov w0,#0x10
7101dbc908  mov w1,#0x8
7101dbc90c  bl 0x710392e290
7101dbc910  mov x23,x0
7101dbc914  cbnz x0,0x7101dbc91c
7101dbc918  mov x23,xzr
7101dbc91c  str xzr,[x23]
7101dbc920  ldr x8,[x19, #0x8]
7101dbc924  ldr x8,[x8, #0x8]
7101dbc928  mov x27,x24
7101dbc92c  cbz x8,0x7101dbc98c
7101dbc930  ldr x0,[x8, #0x60]
7101dbc934  cbz x0,0x7101dbc98c
7101dbc938  ldr x8,[x8, #0x18]
7101dbc93c  add x1,x8,#0xb0
7101dbc940  bl 0x7103796f20
7101dbc944  str x0,[x23]
7101dbc948  cbz x0,0x7101dbca14
7101dbc94c  ldr x8,[x0]
7101dbc950  ldr x8,[x8, #0x208]
7101dbc954  mov w1,wzr
7101dbc958  mov x24,x0
7101dbc95c  blr x8
7101dbc960  ldr x8,[x24]
7101dbc964  ldr x8,[x8, #0x200]
7101dbc968  mov x0,x24
7101dbc96c  blr x8
7101dbc970  tbz w0,#0x0,0x7101dbc9f8
7101dbc974  ldr x8,[x24]
7101dbc978  ldr x8,[x8, #0x210]
7101dbc97c  mov x0,x24
7101dbc980  blr x8
7101dbc984  eor w8,w0,#0x1
7101dbc988  b 0x7101dbc9fc
7101dbc98c  str xzr,[x23]
7101dbc990  b 0x7101dbca14
7101dbc994  ldr x0,[x19, #0x8]
7101dbc998  fmov s0,0x3f800000
7101dbc99c  adrp x1,0x710438c000
7101dbc9a0  add x1,x1,#0xf4d
7101dbc9a4  bl 0x7103778300
7101dbc9a8  ldr x8,[x24, #0x730]
7101dbc9ac  ldr x8,[x8, #0x8]
7101dbc9b0  ldr x8,[x8, #0x1d8]
7101dbc9b4  add x9,x8,x28, LSL #0x1
7101dbc9b8  ldp x10,x8,[x8, #0x20]
7101dbc9bc  ldrh w9,[x9, #0x60]
7101dbc9c0  sub x8,x8,x10
7101dbc9c4  lsr x8,x8,#0x6
7101dbc9c8  mul w8,w8,w22
7101dbc9cc  cmp w8,w9
7101dbc9d0  b.ls 0x7101dbc9e8
7101dbc9d4  ldr x8,[x23, #0x30]
7101dbc9d8  mov w9,#0x24
7101dbc9dc  madd x8,x28,x9,x8
7101dbc9e0  ldrb w8,[x8, #0x1]
7101dbc9e4  tbnz w8,#0x4,0x7101dbcc64
7101dbc9e8  ldr x22,[sp, #0x38]
7101dbc9ec  adrp x1,0x71043cd000
7101dbc9f0  add x1,x1,#0x335
7101dbc9f4  b 0x7101dbcc70
7101dbc9f8  mov w8,#0x1
7101dbc9fc  ldr x9,[x24]
7101dbca00  ldr x9,[x9, #0x388]
7101dbca04  and w1,w8,#0x1
7101dbca08  mov x0,x24
7101dbca0c  mov w2,wzr
7101dbca10  blr x9
7101dbca14  mov x0,x23
7101dbca18  bl 0x710392eb40
7101dbca1c  mov w24,wzr
7101dbca20  ldrb w8,[x20, #0x108]
7101dbca24  cbz w8,0x7101dbcdf0
7101dbca28  cbz w26,0x7101dbcddc
7101dbca2c  ldr x8,[x27, #0x730]
7101dbca30  ldr x8,[x8, #0x8]
7101dbca34  ldr x26,[x8, #0x1d8]
7101dbca38  ldp x10,x11,[x26, #0x20]
7101dbca3c  sub x11,x11,x10
7101dbca40  orr x12,xzr,#-0x3333333333333334
7101dbca44  add x9,x26,x28, LSL #0x1
7101dbca48  movk x12,#0xcccd
7101dbca4c  ldrh w9,[x9, #0x60]
7101dbca50  asr x11,x11,#0x6
7101dbca54  mul x11,x11,x12
7101dbca58  cmp w11,w9
7101dbca5c  b.ls 0x7101dbcddc
7101dbca60  mov w12,#0x140
7101dbca64  madd x10,x9,x12,x10
7101dbca68  cmp x11,x9
7101dbca6c  adrp x9,0x7105182000
7101dbca70  add x9,x9,#0xb08
7101dbca74  csel x9,x10,x9,hi
7101dbca78  ldrb w10,[x9, #0x5a]
7101dbca7c  cbz w10,0x7101dbcc08
7101dbca80  ldrb w8,[x9, #0x92]
7101dbca84  cbz w8,0x7101dbcddc
7101dbca88  ldp x9,x10,[x26, #0x20]
7101dbca8c  add x8,x26,x28, LSL #0x1
7101dbca90  ldrh w8,[x8, #0x60]
7101dbca94  sub x9,x10,x9
7101dbca98  mov w10,#0xcccd
7101dbca9c  movk w10,#0xcccc, LSL #16
7101dbcaa0  lsr x9,x9,#0x6
7101dbcaa4  mul w9,w9,w10
7101dbcaa8  cmp w9,w8
7101dbcaac  b.ls 0x7101dbcddc
7101dbcab0  ldr x8,[sp, #0x8]
7101dbcab4  ldr x8,[x8, #0x30]
7101dbcab8  mov w9,#0x24
7101dbcabc  madd x8,x28,x9,x8
7101dbcac0  ldrb w8,[x8, #0x1]
7101dbcac4  tbz w8,#0x3,0x7101dbcddc
7101dbcac8  and w8,w28,#0xffff
7101dbcacc  cmp w8,#0x7cf
7101dbcad0  b.hi 0x7101dbcf08
7101dbcad4  adrp x8,0x7105314000
7101dbcad8  ldr x8,[x8, #0x510]
7101dbcadc  ldr x8,[x8]
7101dbcae0  ldr x8,[x8, #0x268]
7101dbcae4  ldr x8,[x8]
7101dbcae8  ldr x8,[x8]
7101dbcaec  add x8,x8,x28, LSL #0x2
7101dbcaf0  mov w9,#0x65a0
7101dbcaf4  ldr w8,[x8, x9, LSL #0x0]
7101dbcaf8  cbz w8,0x7101dbcf08
7101dbcafc  ldr x0,[x19, #0x8]
7101dbcb00  adrp x1,0x71042b4000
7101dbcb04  add x1,x1,#0x7a0
7101dbcb08  b 0x7101dbcf14
7101dbcb0c  fmov s8,0x3f800000
7101dbcb10  ldr x0,[x19, #0x8]
7101dbcb14  adrp x1,0x7104454000
7101dbcb18  add x1,x1,#0xf5e
7101dbcb1c  mov v0.16B,v8.16B
7101dbcb20  bl 0x7103778300
7101dbcb24  ldr x22,[sp, #0x38]
7101dbcb28  mov v0.16B,v8.16B
7101dbcb2c  adrp x1,0x71043cd000
7101dbcb30  add x1,x1,#0x335
7101dbcb34  mov x0,x22
7101dbcb38  bl 0x7103778300
7101dbcb3c  mov w0,#0x10
7101dbcb40  mov w1,#0x8
7101dbcb44  bl 0x710392e290
7101dbcb48  mov x23,x0
7101dbcb4c  cbnz x0,0x7101dbcb98
7101dbcb50  adrp x8,0x7105332000
7101dbcb54  ldr x0,[x8, #0xf00]
7101dbcb58  cbz x0,0x7101dbcb94
7101dbcb5c  mov w8,#0x8
7101dbcb60  str wzr,[sp, #0x10]
7101dbcb64  add x1,sp,#0x10
7101dbcb68  str x8,[sp, #0x20]
7101dbcb6c  ldr x8,[x0]
7101dbcb70  ldr x8,[x8, #0x30]
7101dbcb74  add x2,sp,#0x20
7101dbcb78  blr x8
7101dbcb7c  tbz w0,#0x0,0x7101dbcb94
7101dbcb80  mov w0,#0x10
7101dbcb84  mov w1,#0x8
7101dbcb88  bl 0x710392e290
7101dbcb8c  mov x23,x0
7101dbcb90  cbnz x0,0x7101dbcb98
7101dbcb94  mov x23,xzr
7101dbcb98  str xzr,[x23]
7101dbcb9c  ldr x8,[x19, #0x8]
7101dbcba0  ldr x8,[x8, #0x8]
7101dbcba4  mov x27,x24
7101dbcba8  cbz x8,0x7101dbcd64
7101dbcbac  ldr x0,[x8, #0x60]
7101dbcbb0  cbz x0,0x7101dbcd64
7101dbcbb4  ldr x8,[x8, #0x18]
7101dbcbb8  add x1,x8,#0xb0
7101dbcbbc  bl 0x7103796f20
7101dbcbc0  str x0,[x23]
7101dbcbc4  cbz x0,0x7101dbcd68
7101dbcbc8  ldr x8,[x0]
7101dbcbcc  ldr x8,[x8, #0x208]
7101dbcbd0  mov w1,wzr
7101dbcbd4  mov x24,x0
7101dbcbd8  blr x8
7101dbcbdc  ldr x8,[x24]
7101dbcbe0  ldr x8,[x8, #0x200]
7101dbcbe4  mov x0,x24
7101dbcbe8  blr x8
7101dbcbec  tbz w0,#0x0,0x7101dbcf2c
7101dbcbf0  ldr x8,[x24]
7101dbcbf4  ldr x8,[x8, #0x210]
7101dbcbf8  mov x0,x24
7101dbcbfc  blr x8
7101dbcc00  eor w8,w0,#0x1
7101dbcc04  b 0x7101dbcf30
7101dbcc08  ldrb w10,[x9, #0x120]
7101dbcc0c  cbz w10,0x7101dbcddc
7101dbcc10  ldr x0,[x8, #0x168]
7101dbcc14  ldr x23,[x9, #0x98]
7101dbcc18  mov x1,#0xfa78
7101dbcc1c  movk x1,#0xd5f7, LSL #16
7101dbcc20  movk x1,#0xf, LSL #32
7101dbcc24  bl 0x71032631a0
7101dbcc28  mov x12,#-0x3f00000000000000
7101dbcc2c  and x10,x23,#-0x100000000000000
7101dbcc30  and x9,x23,#0xffffffffff
7101dbcc34  and x8,x0,#0xffffffffff
7101dbcc38  cmp x10,x12
7101dbcc3c  b.ne 0x7101dbcd80
7101dbcc40  cbz x9,0x7101dbcd80
7101dbcc44  and x11,x0,#-0x100000000000000
7101dbcc48  cmp x11,x12
7101dbcc4c  b.ne 0x7101dbcd84
7101dbcc50  cbz x8,0x7101dbcd84
7101dbcc54  eor x8,x0,x23
7101dbcc58  tst x8,#0xffffffffff
7101dbcc5c  b.ne 0x7101dbcdb8
7101dbcc60  b 0x7101dbca88
7101dbcc64  ldr x22,[sp, #0x38]
7101dbcc68  adrp x1,0x7104292000
7101dbcc6c  add x1,x1,#0x57e
7101dbcc70  fmov s0,0x3f800000
7101dbcc74  mov x0,x22
7101dbcc78  bl 0x7103778300
7101dbcc7c  mov w0,#0x10
7101dbcc80  mov w1,#0x8
7101dbcc84  bl 0x710392e290
7101dbcc88  mov x23,x0
7101dbcc8c  cbnz x0,0x7101dbccd8
7101dbcc90  adrp x8,0x7105332000
7101dbcc94  ldr x0,[x8, #0xf00]
7101dbcc98  cbz x0,0x7101dbccd4
7101dbcc9c  mov w8,#0x8
7101dbcca0  str wzr,[sp, #0x10]
7101dbcca4  add x1,sp,#0x10
7101dbcca8  str x8,[sp, #0x20]
7101dbccac  ldr x8,[x0]
7101dbccb0  ldr x8,[x8, #0x30]
7101dbccb4  add x2,sp,#0x20
7101dbccb8  blr x8
7101dbccbc  tbz w0,#0x0,0x7101dbccd4
7101dbccc0  mov w0,#0x10
7101dbccc4  mov w1,#0x8
7101dbccc8  bl 0x710392e290
7101dbcccc  mov x23,x0
7101dbccd0  cbnz x0,0x7101dbccd8
7101dbccd4  mov x23,xzr
7101dbccd8  str xzr,[x23]
7101dbccdc  ldr x8,[x19, #0x8]
7101dbcce0  ldr x8,[x8, #0x8]
7101dbcce4  mov x27,x24
7101dbcce8  cbz x8,0x7101dbcd64
7101dbccec  ldr x0,[x8, #0x60]
7101dbccf0  cbz x0,0x7101dbcd64
7101dbccf4  ldr x8,[x8, #0x18]
7101dbccf8  add x1,x8,#0xb0
7101dbccfc  bl 0x7103796f20
7101dbcd00  str x0,[x23]
7101dbcd04  cbz x0,0x7101dbcd68
7101dbcd08  ldr x8,[x0]
7101dbcd0c  ldr x8,[x8, #0x208]
7101dbcd10  mov w1,#0x1
7101dbcd14  mov x24,x0
7101dbcd18  blr x8
7101dbcd1c  ldr x8,[x24]
7101dbcd20  ldr x8,[x8, #0x200]
7101dbcd24  mov x0,x24
7101dbcd28  blr x8
7101dbcd2c  mov w9,#0x1
7101dbcd30  tbz w0,#0x0,0x7101dbcd48
7101dbcd34  ldr x8,[x24]
7101dbcd38  ldr x8,[x8, #0x210]
7101dbcd3c  mov x0,x24
7101dbcd40  blr x8
7101dbcd44  eor w9,w0,#0x1
7101dbcd48  ldr x8,[x24]
7101dbcd4c  ldr x8,[x8, #0x388]
7101dbcd50  and w1,w9,#0x1
7101dbcd54  mov x0,x24
7101dbcd58  mov w2,wzr
7101dbcd5c  blr x8
7101dbcd60  b 0x7101dbcd68
7101dbcd64  str xzr,[x23]
7101dbcd68  mov x0,x23
7101dbcd6c  bl 0x710392eb40
7101dbcd70  mov w24,#0x1
7101dbcd74  ldrb w8,[x20, #0x108]
7101dbcd78  cbnz w8,0x7101dbca28
7101dbcd7c  b 0x7101dbcdf0
7101dbcd80  and x11,x0,#-0x100000000000000
7101dbcd84  cmp x10,x12
7101dbcd88  cset w10,eq
7101dbcd8c  cmp x9,#0x0
7101dbcd90  cset w9,ne
7101dbcd94  cmp x8,#0x0
7101dbcd98  cset w8,ne
7101dbcd9c  cmp x11,x12
7101dbcda0  and w9,w10,w9
7101dbcda4  cset w10,eq
7101dbcda8  and w8,w8,w10
7101dbcdac  eor w8,w8,w9
7101dbcdb0  cmp w8,#0x1
7101dbcdb4  b.ne 0x7101dbca88
7101dbcdb8  mov x0,x23
7101dbcdbc  mov w1,wzr
7101dbcdc0  mov w2,wzr
7101dbcdc4  bl 0x7101797560
7101dbcdc8  tbz w0,#0x0,0x7101dbcddc
7101dbcdcc  ldr x8,[x27, #0x730]
7101dbcdd0  ldr x8,[x8, #0x8]
7101dbcdd4  ldr x26,[x8, #0x1d8]
7101dbcdd8  b 0x7101dbca88
7101dbcddc  ldr x0,[x19, #0x8]
7101dbcde0  adrp x1,0x7104454000
7101dbcde4  add x1,x1,#0xf6b
7101dbcde8  fmov s0,0x3f800000
7101dbcdec  bl 0x7103778300
7101dbcdf0  adrp x26,0x710523d000
7101dbcdf4  add x26,x26,#0x9a8
7101dbcdf8  cbz w24,0x7101dbcebc
7101dbcdfc  ldr x8,[sp, #0x48]
7101dbce00  ldrb w8,[x8, #0x5e]
7101dbce04  cmp w8,#0x3
7101dbce08  b.ne 0x7101dbce24
7101dbce0c  mov x0,x21
7101dbce10  bl 0x71025c9890
7101dbce14  tst w0,#0x1
7101dbce18  orr w8,wzr,#0x3
7101dbce1c  csinc w23,w8,wzr,ne
7101dbce20  b 0x7101dbce28
7101dbce24  mov w23,#0x1
7101dbce28  add x0,x20,#0x20
7101dbce2c  mov w1,w23
7101dbce30  mov x2,x21
7101dbce34  bl 0x710259a790
7101dbce38  ldr x8,[x25, #0xf98]
7101dbce3c  ldr x8,[x8]
7101dbce40  ldr x0,[x8, #0x20]
7101dbce44  mov w1,w23
7101dbce48  mov x2,x21
7101dbce4c  bl 0x710259dce0
7101dbce50  mov x21,x0
7101dbce54  adrp x1,0x710438b000
7101dbce58  add x1,x1,#0x337
7101dbce5c  add x8,sp,#0x20
7101dbce60  mov x0,x19
7101dbce64  bl 0x7103776910
7101dbce68  adrp x1,0x710438c000
7101dbce6c  add x1,x1,#0xf64
7101dbce70  add x8,sp,#0x10
7101dbce74  mov x0,x19
7101dbce78  bl 0x7103776910
7101dbce7c  ldr x19,[sp, #0x28]
7101dbce80  mov x0,x19
7101dbce84  mov x1,x21
7101dbce88  bl 0x7103778b80
7101dbce8c  ldr x20,[sp, #0x18]
7101dbce90  mov x0,x20
7101dbce94  mov x1,x21
7101dbce98  bl 0x7103778b80
7101dbce9c  stp x26,xzr,[sp, #0x10]
7101dbcea0  cbz x20,0x7101dbceac
7101dbcea4  mov x0,x20
7101dbcea8  bl 0x710392eb40
7101dbceac  stp x26,xzr,[sp, #0x20]
7101dbceb0  cbz x19,0x7101dbcebc
7101dbceb4  mov x0,x19
7101dbceb8  bl 0x710392eb40
7101dbcebc  adrp x8,0x710523d000
7101dbcec0  add x8,x8,#0x988
7101dbcec4  stp x8,xzr,[sp, #0x30]
7101dbcec8  cbz x22,0x7101dbcee4
7101dbcecc  ldr x0,[x22, #0x18]
7101dbced0  stp x26,xzr,[x22, #0x10]
7101dbced4  cbz x0,0x7101dbcedc
7101dbced8  bl 0x710392eb40
7101dbcedc  mov x0,x22
7101dbcee0  bl 0x710392eb40
7101dbcee4  ldr d8,[sp, #0x40]
7101dbcee8  ldp x29,x30,[sp, #0xa0]
7101dbceec  ldp x20,x19,[sp, #0x90]
7101dbcef0  ldp x22,x21,[sp, #0x80]
7101dbcef4  ldp x24,x23,[sp, #0x70]
7101dbcef8  ldp x26,x25,[sp, #0x60]
7101dbcefc  ldp x28,x27,[sp, #0x50]
7101dbcf00  add sp,sp,#0xb0
7101dbcf04  ret
7101dbcf08  ldr x0,[x19, #0x8]
7101dbcf0c  adrp x1,0x71042f8000
7101dbcf10  add x1,x1,#0x788
7101dbcf14  fmov s0,0x3f800000
7101dbcf18  bl 0x7103778300
7101dbcf1c  ldr x0,[x19, #0x8]
7101dbcf20  adrp x1,0x71042d6000
7101dbcf24  add x1,x1,#0x777
7101dbcf28  b 0x7101dbcde8
7101dbcf2c  mov w8,#0x1
7101dbcf30  ldr x9,[x24]
7101dbcf34  ldr x9,[x9, #0x388]
7101dbcf38  and w1,w8,#0x1
7101dbcf3c  mov x0,x24
7101dbcf40  mov w2,wzr
7101dbcf44  blr x9
7101dbcf48  b 0x7101dbcd68
7101dbcf4c  bl 0x71039c1330
