// addr:      71019be5a0
// offset:    0x19be5a0
// name:      FUN_71019be5a0
// mangled:   
// size:      2968

71019be5a0  str d8,[sp, #-0x70]!
71019be5a4  stp x28,x27,[sp, #0x10]
71019be5a8  stp x26,x25,[sp, #0x20]
71019be5ac  stp x24,x23,[sp, #0x30]
71019be5b0  stp x22,x21,[sp, #0x40]
71019be5b4  stp x20,x19,[sp, #0x50]
71019be5b8  stp x29,x30,[sp, #0x60]
71019be5bc  add x29,sp,#0x60
71019be5c0  sub sp,sp,#0x220
71019be5c4  adrp x8,0x71050a7000
71019be5c8  add x8,x8,#0x750
71019be5cc  mov x24,x1
71019be5d0  stp x8,xzr,[x0]
71019be5d4  orr x8,xzr,#0x1ffffffff
71019be5d8  stp xzr,x8,[x0, #0x60]
71019be5dc  mov w8,#0x1
71019be5e0  mov x19,x0
71019be5e4  stp xzr,xzr,[x0, #0x10]
71019be5e8  mov x22,x2
71019be5ec  strb wzr,[x0, #0x58]
71019be5f0  str x1,[x0, #0x78]
71019be5f4  mov w1,#0x100
71019be5f8  strb w8,[x0, #0x70]
71019be5fc  stp xzr,xzr,[x0, #0x48]
71019be600  mov w0,#0x10
71019be604  bl 0x710392e290
71019be608  mov x23,x0
71019be60c  cbnz x0,0x71019be658
71019be610  adrp x8,0x7105332000
71019be614  ldr x0,[x8, #0xf00]
71019be618  cbz x0,0x71019be654
71019be61c  mov w8,#0x100
71019be620  str wzr,[sp, #0x88]
71019be624  add x1,sp,#0x88
71019be628  str x8,[sp, #0xd0]
71019be62c  ldr x8,[x0]
71019be630  ldr x8,[x8, #0x30]
71019be634  add x2,sp,#0xd0
71019be638  blr x8
71019be63c  tbz w0,#0x0,0x71019be654
71019be640  mov w0,#0x10
71019be644  mov w1,#0x100
71019be648  bl 0x710392e290
71019be64c  mov x23,x0
71019be650  cbnz x0,0x71019be658
71019be654  mov x23,xzr
71019be658  mov w8,#0xffffffff
71019be65c  mov w0,#0x10
71019be660  mov w1,#0x8
71019be664  stp xzr,xzr,[x23, #0x10]
71019be668  str w8,[x23, #0xc0]
71019be66c  stp x23,xzr,[x23]
71019be670  strb wzr,[x23, #0xc4]
71019be674  stp xzr,x8,[x23, #0xb0]
71019be678  stp xzr,xzr,[x23, #0xa0]
71019be67c  stp xzr,xzr,[x23, #0x90]
71019be680  stp xzr,xzr,[x23, #0x80]
71019be684  stp xzr,xzr,[x23, #0x70]
71019be688  stp xzr,xzr,[x23, #0x60]
71019be68c  stp xzr,xzr,[x23, #0x50]
71019be690  stp xzr,xzr,[x23, #0x40]
71019be694  stp xzr,xzr,[x23, #0x30]
71019be698  stp xzr,xzr,[x23, #0x20]
71019be69c  bl 0x710392e290
71019be6a0  mov x21,x0
71019be6a4  cbnz x0,0x71019be6f0
71019be6a8  adrp x8,0x7105332000
71019be6ac  ldr x0,[x8, #0xf00]
71019be6b0  cbz x0,0x71019be6ec
71019be6b4  mov w8,#0x8
71019be6b8  str wzr,[sp, #0x88]
71019be6bc  add x1,sp,#0x88
71019be6c0  str x8,[sp, #0xd0]
71019be6c4  ldr x8,[x0]
71019be6c8  ldr x8,[x8, #0x30]
71019be6cc  add x2,sp,#0xd0
71019be6d0  blr x8
71019be6d4  tbz w0,#0x0,0x71019be6ec
71019be6d8  mov w0,#0x10
71019be6dc  mov w1,#0x8
71019be6e0  bl 0x710392e290
71019be6e4  mov x21,x0
71019be6e8  cbnz x0,0x71019be6f0
71019be6ec  mov x21,xzr
71019be6f0  mov x0,x21
71019be6f4  bl 0x7103773200
71019be6f8  add x20,x23,#0xd0
71019be6fc  mov x0,x20
71019be700  str x21,[x23, #0xc8]
71019be704  bl 0x7103776290
71019be708  adrp x8,0x710523d000
71019be70c  add x8,x8,#0x9a8
71019be710  mov x9,x23
71019be714  str x8,[x9, #0xe0]!
71019be718  mov w0,#0x10
71019be71c  mov w1,#0x20
71019be720  stur x9,[x29, #-0x58]
71019be724  bl 0x710392e290
71019be728  cbnz x0,0x71019be770
71019be72c  adrp x8,0x7105332000
71019be730  ldr x0,[x8, #0xf00]
71019be734  cbz x0,0x71019be76c
71019be738  mov w8,#0x20
71019be73c  str wzr,[sp, #0x88]
71019be740  add x1,sp,#0x88
71019be744  str x8,[sp, #0xd0]
71019be748  ldr x8,[x0]
71019be74c  ldr x8,[x8, #0x30]
71019be750  add x2,sp,#0xd0
71019be754  blr x8
71019be758  tbz w0,#0x0,0x71019be76c
71019be75c  mov w0,#0x10
71019be760  mov w1,#0x20
71019be764  bl 0x710392e290
71019be768  cbnz x0,0x71019be770
71019be76c  mov x0,xzr
71019be770  mov x25,x23
71019be774  stp xzr,xzr,[x0, #0x10]
71019be778  stp xzr,xzr,[x0]
71019be77c  adrp x8,0x710532f000
71019be780  fmov s0,wzr
71019be784  mov x1,#0x504b
71019be788  movk x1,#0xe6d7, LSL #16
71019be78c  str xzr,[x25, #0xf0]!
71019be790  stur x0,[x25, #-0x8]
71019be794  ldr x8,[x8, #0x8c0]
71019be798  ldr x0,[x8, #0x8]
71019be79c  movk x1,#0x12, LSL #32
71019be7a0  bl 0x71033112b0
71019be7a4  fcvtzs w11,s0
71019be7a8  adrp x8,0x71019be000
71019be7ac  add x8,x8,#0x170
71019be7b0  stp x8,xzr,[x25, #-0xc8]
71019be7b4  stp x8,xzr,[x25, #-0xa8]
71019be7b8  ldursw x8,[x25, #-0x3c]
71019be7bc  adrp x9,0x71019be000
71019be7c0  add x9,x9,#0x180
71019be7c4  adrp x10,0x71019be000
71019be7c8  add x10,x10,#0x500
71019be7cc  stp x9,xzr,[x25, #-0xb8]
71019be7d0  cmp w8,#0x13
71019be7d4  stp x10,xzr,[x25, #-0x98]
71019be7d8  str w11,[x25, #0x8]
71019be7dc  b.cs 0x71019bf134
71019be7e0  add x8,x23,x8, LSL #0x2
71019be7e4  str wzr,[x8, #0x68]
71019be7e8  str x23,[x19, #0x80]
71019be7ec  ldr x1,[x24]
71019be7f0  add x0,x23,#0xc8
71019be7f4  adrp x2,0x7104543000
71019be7f8  add x2,x2,#0x9f8
71019be7fc  mov w3,#0x1
71019be800  str x0,[sp]
71019be804  bl 0x71032cbf30
71019be808  ldr x8,[x23, #0xc8]
71019be80c  ldr x8,[x8]
71019be810  add x9,x8,#0x8
71019be814  cmp x9,x20
71019be818  b.eq 0x71019be88c
71019be81c  ldr x9,[x8, #0x10]
71019be820  ldr x9,[x9]
71019be824  ldr x10,[x23, #0xd8]
71019be828  str x9,[x10]
71019be82c  ldr x9,[x8, #0x10]
71019be830  ldr x9,[x9, #0x8]
71019be834  ldr x10,[x23, #0xd8]
71019be838  str x9,[x10, #0x8]
71019be83c  ldr x9,[x8, #0x10]
71019be840  ldr x8,[x23, #0xd8]
71019be844  cmp x8,x9
71019be848  b.eq 0x71019be88c
71019be84c  ldr x10,[x9, #0x18]
71019be850  ldr x10,[x10]
71019be854  ldr x11,[x8, #0x18]
71019be858  str x10,[x11]
71019be85c  ldr x10,[x9, #0x18]
71019be860  ldr x10,[x10, #0x8]
71019be864  ldr x11,[x8, #0x18]
71019be868  str x10,[x11, #0x8]
71019be86c  ldr x10,[x9, #0x18]
71019be870  ldr x10,[x10, #0x10]
71019be874  ldr x11,[x8, #0x18]
71019be878  str x10,[x11, #0x10]
71019be87c  ldr x9,[x9, #0x18]
71019be880  ldr x9,[x9, #0x18]
71019be884  ldr x8,[x8, #0x18]
71019be888  str x9,[x8, #0x18]
71019be88c  adrp x1,0x71043be000
71019be890  add x1,x1,#0xe80
71019be894  add x8,sp,#0x88
71019be898  mov x0,x20
71019be89c  bl 0x7103776910
71019be8a0  adrp x1,0x710426f000
71019be8a4  add x1,x1,#0x954
71019be8a8  add x8,sp,#0x28
71019be8ac  mov x0,x20
71019be8b0  bl 0x7103776910
71019be8b4  adrp x1,0x710435a000
71019be8b8  add x1,x1,#0xe4a
71019be8bc  add x8,sp,#0x70
71019be8c0  mov x0,x20
71019be8c4  bl 0x7103776910
71019be8c8  adrp x1,0x71043ad000
71019be8cc  add x1,x1,#0xb3
71019be8d0  sub x8,x29,#0x80
71019be8d4  mov x0,x20
71019be8d8  str x20,[sp, #0x20]
71019be8dc  bl 0x7103776910
71019be8e0  ldr x28,[sp, #0x90]
71019be8e4  ldr x8,[x28]
71019be8e8  cbz x8,0x71019be8f8
71019be8ec  ldrb w9,[x8, #0x58]
71019be8f0  and w9,w9,#0xfe
71019be8f4  strb w9,[x8, #0x58]
71019be8f8  ldr x26,[sp, #0x30]
71019be8fc  ldr x8,[x26]
71019be900  cbz x8,0x71019be910
71019be904  ldrb w9,[x8, #0x58]
71019be908  and w9,w9,#0xfe
71019be90c  strb w9,[x8, #0x58]
71019be910  ldr x20,[sp, #0x78]
71019be914  ldr x8,[x20]
71019be918  cbz x8,0x71019be928
71019be91c  ldrb w9,[x8, #0x58]
71019be920  and w9,w9,#0xfe
71019be924  strb w9,[x8, #0x58]
71019be928  ldur x21,[x29, #-0x78]
71019be92c  ldr x8,[x21]
71019be930  str x24,[sp, #0x10]
71019be934  cbz x8,0x71019be944
71019be938  ldrb w9,[x8, #0x58]
71019be93c  and w9,w9,#0xfe
71019be940  strb w9,[x8, #0x58]
71019be944  adrp x8,0x710532f000
71019be948  ldr x8,[x8, #0x730]
71019be94c  ldr x8,[x8, #0x8]
71019be950  ldr x27,[x8, #0x168]
71019be954  mov x1,#0xfb2b
71019be958  movk x1,#0xfdfd, LSL #16
71019be95c  movk x1,#0x13, LSL #32
71019be960  mov x0,x27
71019be964  mov x24,#-0x3f00000000000000
71019be968  bl 0x71032631a0
71019be96c  and x9,x22,#-0x100000000000000
71019be970  and x8,x0,#0xffffffffff
71019be974  cmp x9,x24
71019be978  b.ne 0x71019bea18
71019be97c  and x9,x22,#0xffffffffff
71019be980  mov x10,x22
71019be984  cbz x9,0x71019bea18
71019be988  and x9,x0,#-0x100000000000000
71019be98c  cmp x9,x24
71019be990  b.ne 0x71019be9a4
71019be994  cbz x8,0x71019be9a4
71019be998  eor x8,x0,x22
71019be99c  tst x8,#0xffffffffff
71019be9a0  b.eq 0x71019bea84
71019be9a4  mov x1,#0x1f77
71019be9a8  movk x1,#0xd706, LSL #16
71019be9ac  movk x1,#0x15, LSL #32
71019be9b0  mov x0,x27
71019be9b4  bl 0x71032631a0
71019be9b8  and x8,x0,#-0x100000000000000
71019be9bc  cmp x8,x24
71019be9c0  b.ne 0x71019be9d8
71019be9c4  and x8,x0,#0xffffffffff
71019be9c8  cbz x8,0x71019be9d8
71019be9cc  eor x8,x0,x22
71019be9d0  tst x8,#0xffffffffff
71019be9d4  b.eq 0x71019beac0
71019be9d8  mov x1,#0x1d87
71019be9dc  movk x1,#0x57ab, LSL #16
71019be9e0  movk x1,#0x12, LSL #32
71019be9e4  mov x0,x27
71019be9e8  bl 0x71032631a0
71019be9ec  and x8,x0,#-0x100000000000000
71019be9f0  cmp x8,x24
71019be9f4  b.ne 0x71019beb10
71019be9f8  and x8,x0,#0xffffffffff
71019be9fc  cbz x8,0x71019beb10
71019bea00  ldr x12,[sp]
71019bea04  eor x8,x0,x22
71019bea08  mov x24,x22
71019bea0c  tst x8,#0xffffffffff
71019bea10  b.ne 0x71019beb18
71019bea14  b 0x71019beb58
71019bea18  and x9,x0,#-0x100000000000000
71019bea1c  cmp x9,x24
71019bea20  b.ne 0x71019bea84
71019bea24  cbz x8,0x71019bea84
71019bea28  mov x1,#0x1f77
71019bea2c  movk x1,#0xd706, LSL #16
71019bea30  movk x1,#0x15, LSL #32
71019bea34  mov x0,x27
71019bea38  bl 0x71032631a0
71019bea3c  and x8,x0,#-0x100000000000000
71019bea40  cmp x8,x24
71019bea44  b.ne 0x71019beac0
71019bea48  and x8,x0,#0xffffffffff
71019bea4c  cbz x8,0x71019beac0
71019bea50  mov x1,#0x1d87
71019bea54  movk x1,#0x57ab, LSL #16
71019bea58  movk x1,#0x12, LSL #32
71019bea5c  mov x0,x27
71019bea60  bl 0x71032631a0
71019bea64  and x8,x0,#-0x100000000000000
71019bea68  cmp x8,x24
71019bea6c  b.ne 0x71019beb50
71019bea70  ldr x12,[sp]
71019bea74  and x8,x0,#0xffffffffff
71019bea78  mov x24,x22
71019bea7c  cbnz x8,0x71019beb18
71019bea80  b 0x71019beb58
71019bea84  ldur x9,[x29, #-0x58]
71019bea88  ldr x12,[sp]
71019bea8c  add x8,sp,#0x28
71019bea90  cmp x8,x9
71019bea94  mov x24,x22
71019bea98  b.eq 0x71019beba4
71019bea9c  ldr x8,[x26]
71019beaa0  ldr x9,[x23, #0xe8]
71019beaa4  str x8,[x9]
71019beaa8  ldr x8,[sp, #0x30]
71019beaac  ldr x8,[x8, #0x8]
71019beab0  ldr x9,[x23, #0xe8]
71019beab4  str x8,[x9, #0x8]
71019beab8  ldr x8,[sp, #0x30]
71019beabc  b 0x71019beaf8
71019beac0  ldur x9,[x29, #-0x58]
71019beac4  ldr x12,[sp]
71019beac8  add x8,sp,#0x70
71019beacc  cmp x8,x9
71019bead0  mov x24,x22
71019bead4  b.eq 0x71019beba4
71019bead8  ldr x8,[x20]
71019beadc  ldr x9,[x23, #0xe8]
71019beae0  str x8,[x9]
71019beae4  ldr x8,[sp, #0x78]
71019beae8  ldr x8,[x8, #0x8]
71019beaec  ldr x9,[x23, #0xe8]
71019beaf0  str x8,[x9, #0x8]
71019beaf4  ldr x8,[sp, #0x78]
71019beaf8  ldr x9,[x8, #0x10]
71019beafc  ldr x10,[x23, #0xe8]
71019beb00  str x9,[x10, #0x10]
71019beb04  ldr x8,[x8, #0x18]
71019beb08  ldr x9,[x23, #0xe8]
71019beb0c  b 0x71019beba0
71019beb10  ldr x12,[sp]
71019beb14  mov x24,x22
71019beb18  ldur x9,[x29, #-0x58]
71019beb1c  add x8,sp,#0x88
71019beb20  cmp x9,x8
71019beb24  b.eq 0x71019beba4
71019beb28  ldur x11,[x29, #-0x58]
71019beb2c  ldr x8,[x28]
71019beb30  ldr x9,[x11, #0x8]
71019beb34  str x8,[x9]
71019beb38  ldr x8,[sp, #0x90]
71019beb3c  ldr x8,[x8, #0x8]
71019beb40  ldr x9,[x11, #0x8]
71019beb44  str x8,[x9, #0x8]
71019beb48  ldr x8,[sp, #0x90]
71019beb4c  b 0x71019beb8c
71019beb50  ldr x12,[sp]
71019beb54  mov x24,x22
71019beb58  ldur x9,[x29, #-0x58]
71019beb5c  sub x8,x29,#0x80
71019beb60  cmp x9,x8
71019beb64  b.eq 0x71019beba4
71019beb68  ldur x11,[x29, #-0x58]
71019beb6c  ldr x8,[x21]
71019beb70  ldr x9,[x11, #0x8]
71019beb74  str x8,[x9]
71019beb78  ldur x8,[x29, #-0x78]
71019beb7c  ldr x8,[x8, #0x8]
71019beb80  ldr x9,[x11, #0x8]
71019beb84  str x8,[x9, #0x8]
71019beb88  ldur x8,[x29, #-0x78]
71019beb8c  ldr x9,[x8, #0x10]
71019beb90  ldr x10,[x11, #0x8]
71019beb94  str x9,[x10, #0x10]
71019beb98  ldr x8,[x8, #0x18]
71019beb9c  ldr x9,[x11, #0x8]
71019beba0  str x8,[x9, #0x18]
71019beba4  ldr x8,[x23, #0xe8]
71019beba8  ldr x8,[x8]
71019bebac  add x27,sp,#0xd0
71019bebb0  cbz x8,0x71019bebc0
71019bebb4  ldrb w9,[x8, #0x58]
71019bebb8  orr w9,w9,#0x1
71019bebbc  strb w9,[x8, #0x58]
71019bebc0  ldr x8,[x12]
71019bebc4  ldr x8,[x8]
71019bebc8  ldr x20,[x8]
71019bebcc  ldr x0,[x20, #0x600]
71019bebd0  mov w2,#0x198
71019bebd4  mov w1,wzr
71019bebd8  bl 0x71039c02a0
71019bebdc  ldr x8,[x20, #0x600]
71019bebe0  orr w9,wzr,#0xf0
71019bebe4  str w9,[x8, #0x10]
71019bebe8  ldr x8,[x20, #0x600]
71019bebec  strb wzr,[x8, #0x4aa]
71019bebf0  mov w8,#0x101
71019bebf4  mov w9,#0x1
71019bebf8  mov x10,#0x41f0000000000000
71019bebfc  str xzr,[sp, #0xd0]
71019bec00  strh w8,[sp, #0xd8]
71019bec04  add x8,sp,#0xd0
71019bec08  add x0,sp,#0xd0
71019bec0c  strh wzr,[sp, #0xde]
71019bec10  stur wzr,[x27, #0xa]
71019bec14  str w9,[sp, #0xe0]
71019bec18  strh w9,[sp, #0xe4]
71019bec1c  strb w9,[sp, #0xe6]
71019bec20  str x10,[sp, #0xe8]
71019bec24  str wzr,[sp, #0xf0]
71019bec28  str xzr,[sp, #0x120]
71019bec2c  add x20,x8,#0xf0
71019bec30  str xzr,[sp, #0x150]
71019bec34  str xzr,[sp, #0x180]
71019bec38  str xzr,[sp, #0x1b0]
71019bec3c  str xzr,[sp, #0x1e0]
71019bec40  str wzr,[sp, #0x1f0]
71019bec44  bl 0x710337df20
71019bec48  ldr x26,[sp, #0x20]
71019bec4c  adrp x2,0x71043e0000
71019bec50  add x2,x2,#0xa21
71019bec54  add x3,sp,#0xd0
71019bec58  mov x0,x25
71019bec5c  mov x1,x26
71019bec60  bl 0x7103770b30
71019bec64  adrp x2,0x71042d6000
71019bec68  add x2,x2,#0x9a2
71019bec6c  mov x0,x25
71019bec70  mov w1,wzr
71019bec74  bl 0x71037717d0
71019bec78  ldr x0,[x25]
71019bec7c  mov w2,#0x4
71019bec80  mov w1,wzr
71019bec84  mov w3,wzr
71019bec88  bl 0x7103771930
71019bec8c  ldr x0,[x25]
71019bec90  ldr x8,[x0]
71019bec94  ldr x8,[x8, #0x60]
71019bec98  mov w1,#0x1
71019bec9c  blr x8
71019beca0  ldr x0,[x25]
71019beca4  ldr x8,[x0]
71019beca8  ldr x8,[x8, #0x70]
71019becac  mov w1,#0x1
71019becb0  blr x8
71019becb4  mov w2,#0x1
71019becb8  mov x0,x25
71019becbc  mov w1,wzr
71019becc0  bl 0x7103771a80
71019becc4  ldr x0,[sp, #0x1e0]
71019becc8  cmp x20,x0
71019beccc  adrp x21,0x710523d000
71019becd0  add x21,x21,#0x9a8
71019becd4  b.eq 0x71019becf0
71019becd8  adrp x25,0x710532f000
71019becdc  cbz x0,0x71019bed00
71019bece0  ldr x8,[x0]
71019bece4  ldr x8,[x8, #0x28]
71019bece8  blr x8
71019becec  b 0x71019bed00
71019becf0  ldr x8,[x0]
71019becf4  ldr x8,[x8, #0x20]
71019becf8  blr x8
71019becfc  adrp x25,0x710532f000
71019bed00  ldr x0,[sp, #0x1b0]
71019bed04  add x8,sp,#0xd0
71019bed08  add x8,x8,#0xc0
71019bed0c  cmp x8,x0
71019bed10  b.eq 0x71019bed24
71019bed14  cbz x0,0x71019bed30
71019bed18  ldr x8,[x0]
71019bed1c  ldr x8,[x8, #0x28]
71019bed20  b 0x71019bed2c
71019bed24  ldr x8,[x0]
71019bed28  ldr x8,[x8, #0x20]
71019bed2c  blr x8
71019bed30  ldr x0,[sp, #0x180]
71019bed34  add x8,sp,#0xd0
71019bed38  add x8,x8,#0x90
71019bed3c  cmp x8,x0
71019bed40  b.eq 0x71019bed54
71019bed44  cbz x0,0x71019bed60
71019bed48  ldr x8,[x0]
71019bed4c  ldr x8,[x8, #0x28]
71019bed50  b 0x71019bed5c
71019bed54  ldr x8,[x0]
71019bed58  ldr x8,[x8, #0x20]
71019bed5c  blr x8
71019bed60  ldr x0,[sp, #0x150]
71019bed64  add x8,sp,#0xd0
71019bed68  add x8,x8,#0x60
71019bed6c  cmp x8,x0
71019bed70  b.eq 0x71019bed84
71019bed74  cbz x0,0x71019bed90
71019bed78  ldr x8,[x0]
71019bed7c  ldr x8,[x8, #0x28]
71019bed80  b 0x71019bed8c
71019bed84  ldr x8,[x0]
71019bed88  ldr x8,[x8, #0x20]
71019bed8c  blr x8
71019bed90  ldr x0,[sp, #0x120]
71019bed94  add x8,sp,#0xd0
71019bed98  add x8,x8,#0x30
71019bed9c  cmp x8,x0
71019beda0  b.eq 0x71019bedb4
71019beda4  cbz x0,0x71019bedc0
71019beda8  ldr x8,[x0]
71019bedac  ldr x8,[x8, #0x28]
71019bedb0  b 0x71019bedbc
71019bedb4  ldr x8,[x0]
71019bedb8  ldr x8,[x8, #0x20]
71019bedbc  blr x8
71019bedc0  ldur x0,[x29, #-0x78]
71019bedc4  stp x21,xzr,[x29, #-0x80]
71019bedc8  cbz x0,0x71019bedd0
71019bedcc  bl 0x710392eb40
71019bedd0  ldr x0,[sp, #0x78]
71019bedd4  stp x21,xzr,[sp, #0x70]
71019bedd8  cbz x0,0x71019bede0
71019beddc  bl 0x710392eb40
71019bede0  ldr x0,[sp, #0x30]
71019bede4  stp x21,xzr,[sp, #0x28]
71019bede8  cbz x0,0x71019bedf0
71019bedec  bl 0x710392eb40
71019bedf0  ldr x0,[sp, #0x90]
71019bedf4  stp x21,xzr,[sp, #0x88]
71019bedf8  cbz x0,0x71019bee00
71019bedfc  bl 0x710392eb40
71019bee00  ldr x0,[sp, #0x10]
71019bee04  orr w3,wzr,#0x3
71019bee08  mov x1,x24
71019bee0c  mov w2,wzr
71019bee10  bl 0x710323f330
71019bee14  mov x1,x0
71019bee18  ldr x0,[x23, #0xe8]
71019bee1c  bl 0x7103778b80
71019bee20  ldr x8,[x25, #0x730]
71019bee24  ldr x20,[x8, #0x8]
71019bee28  ldr x0,[x20, #0x2a8]
71019bee2c  mov x1,x24
71019bee30  mov w2,wzr
71019bee34  bl 0x7103280ec0
71019bee38  ldr x8,[x20, #0x2a8]
71019bee3c  fmov s8,wzr
71019bee40  mov v0.16B,v8.16B
71019bee44  mov x2,#0x81ed
71019bee48  movk x2,#0xe229, LSL #16
71019bee4c  movk x2,#0x12, LSL #32
71019bee50  ldr x23,[x8, #0x8]
71019bee54  mov w22,w0
71019bee58  mov x0,x23
71019bee5c  mov w1,w22
71019bee60  bl 0x710326ad60
71019bee64  str d0,[sp, #0x10]
71019bee68  mov v0.16B,v8.16B
71019bee6c  mov x2,#0xb17b
71019bee70  movk x2,#0x952e, LSL #16
71019bee74  movk x2,#0x12, LSL #32
71019bee78  mov x0,x23
71019bee7c  mov w1,w22
71019bee80  bl 0x710326ad60
71019bee84  str d0,[sp]
71019bee88  fmov s0,0x3f800000
71019bee8c  mov x2,#0xffe6
71019bee90  movk x2,#0x2cc8, LSL #16
71019bee94  movk x2,#0xf, LSL #32
71019bee98  mov x0,x23
71019bee9c  mov w1,w22
71019beea0  bl 0x710326ad60
71019beea4  ldur x1,[x29, #-0x58]
71019beea8  sub x0,x29,#0x80
71019beeac  mov v8.16B,v0.16B
71019beeb0  bl 0x7103778ab0
71019beeb4  ldr q1,[sp, #0x10]
71019beeb8  movi v0.2D,#0x0
71019beebc  ldur x0,[x29, #-0x78]
71019beec0  mov v0.S[0x0],v1.S[0x0]
71019beec4  ldr q1,[sp]
71019beec8  mov v0.S[0x1],v1.S[0x0]
71019beecc  add x1,sp,#0xd0
71019beed0  str q0,[x27]
71019beed4  mov v0.16B,v8.16B
71019beed8  add x20,sp,#0xd0
71019beedc  bl 0x7103779770
71019beee0  ldur x0,[x29, #-0x78]
71019beee4  stp x21,xzr,[x29, #-0x80]
71019beee8  cbz x0,0x71019beef0
71019beeec  bl 0x710392eb40
71019beef0  ldr x8,[x25, #0x730]
71019beef4  ldr x8,[x8, #0x8]
71019beef8  ldr x1,[x8, #0x168]
71019beefc  add x0,sp,#0xd0
71019bef00  mov x2,x24
71019bef04  bl 0x7103262310
71019bef08  add x1,x20,#0x8
71019bef0c  adrp x0,0x7104452000
71019bef10  add x0,x0,#0xf28
71019bef14  add x8,sp,#0x88
71019bef18  add x20,sp,#0x88
71019bef1c  bl 0x71003a4ca0
71019bef20  adrp x8,0x710593b000
71019bef24  ldr x8,[x8, #0xc60]
71019bef28  str xzr,[sp, #0x70]
71019bef2c  stp xzr,xzr,[sp, #0x78]
71019bef30  ldr x0,[x8]
71019bef34  add x22,x20,#0x8
71019bef38  mov x1,x22
71019bef3c  bl 0x71037a4570
71019bef40  tbz w0,#0x0,0x71019bf000
71019bef44  add x0,sp,#0x70
71019bef48  mov x1,x22
71019bef4c  bl 0x71037a7e90
71019bef50  ldp x20,x8,[sp, #0x70]
71019bef54  sub x9,x8,x20
71019bef58  orr x10,xzr,#-0x3333333333333334
71019bef5c  movk x10,#0xcccd
71019bef60  asr x9,x9,#0x4
71019bef64  mul x9,x9,x10
71019bef68  cmp x9,#0x2
71019bef6c  b.cc 0x71019bf008
71019bef70  adrp x1,0x7104291000
71019bef74  add x1,x1,#0x55e
71019bef78  add x8,sp,#0xd0
71019bef7c  mov x0,x26
71019bef80  bl 0x7103776910
71019bef84  ldr x22,[sp, #0xd8]
71019bef88  ldr x0,[x22, #0x10]
71019bef8c  cbz x0,0x71019befa4
71019bef90  ldr x8,[sp, #0x70]
71019bef94  ldr x1,[x8, #0x40]
71019bef98  mov w2,#0xffffffff
71019bef9c  mov w3,#0x1
71019befa0  bl 0x71037a2270
71019befa4  stp x21,xzr,[sp, #0xd0]
71019befa8  cbz x22,0x71019befb4
71019befac  mov x0,x22
71019befb0  bl 0x710392eb40
71019befb4  adrp x1,0x710438c000
71019befb8  add x1,x1,#0x262
71019befbc  add x8,sp,#0xd0
71019befc0  mov x0,x26
71019befc4  bl 0x7103776910
71019befc8  ldr x22,[sp, #0xd8]
71019befcc  ldr x0,[x22, #0x10]
71019befd0  cbz x0,0x71019befe8
71019befd4  ldr x8,[sp, #0x70]
71019befd8  ldr x1,[x8, #0x90]
71019befdc  mov w2,#0xffffffff
71019befe0  mov w3,#0x1
71019befe4  bl 0x71037a2270
71019befe8  stp x21,xzr,[sp, #0xd0]
71019befec  cbz x22,0x71019beff8
71019beff0  mov x0,x22
71019beff4  bl 0x710392eb40
71019beff8  ldp x20,x8,[sp, #0x70]
71019beffc  b 0x71019bf008
71019bf000  mov x20,xzr
71019bf004  mov x8,xzr
71019bf008  sub x8,x8,x20
71019bf00c  orr x9,xzr,#-0x3333333333333334
71019bf010  asr x8,x8,#0x4
71019bf014  movk x9,#0xcccd
71019bf018  mul x8,x8,x9
71019bf01c  cmp x8,#0x1
71019bf020  b.hi 0x71019bf0a8
71019bf024  ldr x8,[x25, #0x730]
71019bf028  ldr x20,[x8, #0x8]
71019bf02c  ldr x0,[x20, #0x168]
71019bf030  mov x1,x24
71019bf034  mov w2,wzr
71019bf038  bl 0x7103263540
71019bf03c  ldr x1,[x20, #0x168]
71019bf040  mov w22,w0
71019bf044  add x0,sp,#0xd0
71019bf048  mov x2,x24
71019bf04c  add x20,sp,#0xd0
71019bf050  bl 0x7103262310
71019bf054  add x2,x20,#0x8
71019bf058  adrp x0,0x7104452000
71019bf05c  add x0,x0,#0xf17
71019bf060  add x8,sp,#0x28
71019bf064  mov w1,w22
71019bf068  add x20,sp,#0x28
71019bf06c  bl 0x71003a4ca0
71019bf070  adrp x1,0x7104291000
71019bf074  add x1,x1,#0x55e
71019bf078  add x8,sp,#0xd0
71019bf07c  mov x0,x26
71019bf080  bl 0x7103776910
71019bf084  add x2,x20,#0x8
71019bf088  add x0,sp,#0xd0
71019bf08c  mov w1,#0x1
71019bf090  bl 0x710377a310
71019bf094  ldr x0,[sp, #0xd8]
71019bf098  stp x21,xzr,[sp, #0xd0]
71019bf09c  cbz x0,0x71019bf0a4
71019bf0a0  bl 0x710392eb40
71019bf0a4  ldr x20,[sp, #0x70]
71019bf0a8  cbz x20,0x71019bf0f8
71019bf0ac  ldr x21,[sp, #0x78]
71019bf0b0  cmp x21,x20
71019bf0b4  b.eq 0x71019bf124
71019bf0b8  ldur x0,[x21, #-0x10]
71019bf0bc  sub x22,x21,#0x50
71019bf0c0  cmp x22,x0
71019bf0c4  ccmp x0,#0x0,#0x4,ne
71019bf0c8  b.eq 0x71019bf0d0
71019bf0cc  bl 0x710392eb40
71019bf0d0  sturh wzr,[x21, #-0x50]
71019bf0d4  stur x22,[x21, #-0x10]
71019bf0d8  cmp x20,x22
71019bf0dc  stur wzr,[x21, #-0x8]
71019bf0e0  mov x21,x22
71019bf0e4  b.ne 0x71019bf0b8
71019bf0e8  ldr x0,[sp, #0x70]
71019bf0ec  str x20,[sp, #0x78]
71019bf0f0  cbz x0,0x71019bf0f8
71019bf0f4  bl 0x710392eb40
71019bf0f8  mov w8,#0x1
71019bf0fc  strb w8,[x19, #0x70]
71019bf100  add sp,sp,#0x220
71019bf104  ldp x29,x30,[sp, #0x60]
71019bf108  ldp x20,x19,[sp, #0x50]
71019bf10c  ldp x22,x21,[sp, #0x40]
71019bf110  ldp x24,x23,[sp, #0x30]
71019bf114  ldp x26,x25,[sp, #0x20]
71019bf118  ldp x28,x27,[sp, #0x10]
71019bf11c  ldr d8,[sp], #0x70
71019bf120  ret
71019bf124  mov x0,x20
71019bf128  str x20,[sp, #0x78]
71019bf12c  cbnz x0,0x71019bf0f4
71019bf130  b 0x71019bf0f8
71019bf134  bl 0x71039c2650
