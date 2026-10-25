// addr:      71019bbbf0
// offset:    0x19bbbf0
// name:      FUN_71019bbbf0
// mangled:   
// size:      1548

71019bbbf0  sub sp,sp,#0x120
71019bbbf4  stp x28,x27,[sp, #0xc0]
71019bbbf8  stp x26,x25,[sp, #0xd0]
71019bbbfc  stp x24,x23,[sp, #0xe0]
71019bbc00  stp x22,x21,[sp, #0xf0]
71019bbc04  stp x20,x19,[sp, #0x100]
71019bbc08  stp x29,x30,[sp, #0x110]
71019bbc0c  add x29,sp,#0x110
71019bbc10  adrp x8,0x710532f000
71019bbc14  ldr x8,[x8, #0x7b0]
71019bbc18  mov x23,x0
71019bbc1c  ldr x0,[x8, #0x8]
71019bbc20  mov x22,#0xb807
71019bbc24  movk x22,#0xb1cc, LSL #16
71019bbc28  mov x19,x2
71019bbc2c  mov w21,w1
71019bbc30  movk x22,#0x11, LSL #32
71019bbc34  bl 0x71032df050
71019bbc38  mov x20,x0
71019bbc3c  ldr x0,[x19, #0x8]
71019bbc40  fmov s0,0x3f800000
71019bbc44  adrp x1,0x7104280000
71019bbc48  add x1,x1,#0x323
71019bbc4c  bl 0x7103778300
71019bbc50  adrp x27,0x710532f000
71019bbc54  ldr x8,[x27, #0x730]
71019bbc58  ldr x8,[x8, #0x8]
71019bbc5c  ldr x24,[x20, #0x8]
71019bbc60  mov x1,x24
71019bbc64  ldr x26,[x8, #0x168]
71019bbc68  mov x0,x26
71019bbc6c  add x23,x23,#0x230
71019bbc70  bl 0x71032632a0
71019bbc74  mov x25,x24
71019bbc78  tbz w0,#0x0,0x71019bbc8c
71019bbc7c  mov x0,x26
71019bbc80  mov x1,x22
71019bbc84  bl 0x71032631a0
71019bbc88  mov x25,x0
71019bbc8c  mov x0,x26
71019bbc90  mov x1,x24
71019bbc94  bl 0x71032633f0
71019bbc98  ldrb w8,[x20, #0x12]
71019bbc9c  cmp w0,w8
71019bbca0  mov x0,x23
71019bbca4  csel w2,w8,wzr,hi
71019bbca8  mov w3,#0x1
71019bbcac  mov x1,x25
71019bbcb0  bl 0x710323f330
71019bbcb4  mov x24,x0
71019bbcb8  adrp x8,0x710523d000
71019bbcbc  add x8,x8,#0xa08
71019bbcc0  mov w0,#0x10
71019bbcc4  mov w1,#0x10
71019bbcc8  str x8,[sp, #0x60]
71019bbccc  bl 0x710392e290
71019bbcd0  cbnz x0,0x71019bbd18
71019bbcd4  adrp x8,0x7105332000
71019bbcd8  ldr x0,[x8, #0xf00]
71019bbcdc  cbz x0,0x71019bbd14
71019bbce0  mov w8,#0x10
71019bbce4  str wzr,[sp, #0x8]
71019bbce8  add x1,sp,#0x8
71019bbcec  str x8,[sp, #0x70]
71019bbcf0  ldr x8,[x0]
71019bbcf4  ldr x8,[x8, #0x30]
71019bbcf8  add x2,sp,#0x70
71019bbcfc  blr x8
71019bbd00  tbz w0,#0x0,0x71019bbd14
71019bbd04  mov w0,#0x10
71019bbd08  mov w1,#0x10
71019bbd0c  bl 0x710392e290
71019bbd10  cbnz x0,0x71019bbd18
71019bbd14  mov x0,xzr
71019bbd18  add x8,sp,#0x60
71019bbd1c  cmp x8,x24
71019bbd20  stp xzr,xzr,[x0]
71019bbd24  str x0,[sp, #0x68]
71019bbd28  b.eq 0x71019bbd90
71019bbd2c  ldr x8,[x24, #0x8]
71019bbd30  ldp x9,x8,[x8]
71019bbd34  cbz x8,0x71019bbd8c
71019bbd38  add x10,x8,#0x8
71019bbd3c  ldxr x11,[x10]
71019bbd40  add x11,x11,#0x1
71019bbd44  stxr w12,x11,[x10]
71019bbd48  cbnz w12,0x71019bbd3c
71019bbd4c  ldr x24,[x0, #0x8]
71019bbd50  stp x9,x8,[x0]
71019bbd54  cbz x24,0x71019bbd90
71019bbd58  add x8,x24,#0x8
71019bbd5c  ldaxr x9,[x8]
71019bbd60  sub x10,x9,#0x1
71019bbd64  stlxr w11,x10,[x8]
71019bbd68  cbnz w11,0x71019bbd5c
71019bbd6c  cbnz x9,0x71019bbd90
71019bbd70  ldr x8,[x24]
71019bbd74  ldr x8,[x8, #0x10]
71019bbd78  mov x0,x24
71019bbd7c  blr x8
71019bbd80  mov x0,x24
71019bbd84  bl 0x71039c2670
71019bbd88  b 0x71019bbd90
71019bbd8c  stp x9,x8,[x0]
71019bbd90  adrp x1,0x71043be000
71019bbd94  add x1,x1,#0xe80
71019bbd98  add x8,sp,#0x70
71019bbd9c  mov x0,x19
71019bbda0  bl 0x7103776910
71019bbda4  ldr x24,[sp, #0x78]
71019bbda8  add x1,sp,#0x60
71019bbdac  mov x0,x24
71019bbdb0  bl 0x7103778b80
71019bbdb4  adrp x28,0x710523d000
71019bbdb8  add x28,x28,#0x9a8
71019bbdbc  stp x28,xzr,[sp, #0x70]
71019bbdc0  cbz x24,0x71019bbdcc
71019bbdc4  mov x0,x24
71019bbdc8  bl 0x710392eb40
71019bbdcc  adrp x1,0x71043f0000
71019bbdd0  add x1,x1,#0x372
71019bbdd4  add x8,sp,#0x70
71019bbdd8  mov x0,x19
71019bbddc  bl 0x7103776910
71019bbde0  ldr x24,[sp, #0x78]
71019bbde4  add x1,sp,#0x60
71019bbde8  mov x0,x24
71019bbdec  bl 0x7103778b80
71019bbdf0  stp x28,xzr,[sp, #0x70]
71019bbdf4  cbz x24,0x71019bbe00
71019bbdf8  mov x0,x24
71019bbdfc  bl 0x710392eb40
71019bbe00  ldr x8,[x27, #0x730]
71019bbe04  ldr x26,[x8, #0x8]
71019bbe08  ldr x25,[x20, #0x8]
71019bbe0c  mov x1,x25
71019bbe10  ldr x24,[x26, #0x168]
71019bbe14  mov x0,x24
71019bbe18  bl 0x71032632a0
71019bbe1c  tbz w0,#0x0,0x71019bbe30
71019bbe20  mov x0,x24
71019bbe24  mov x1,x22
71019bbe28  bl 0x71032631a0
71019bbe2c  mov x25,x0
71019bbe30  mov x0,x24
71019bbe34  mov x1,x25
71019bbe38  bl 0x7103263f80
71019bbe3c  mov x1,x0
71019bbe40  mov w2,#0x11
71019bbe44  mov x0,x23
71019bbe48  bl 0x710323f600
71019bbe4c  mov x23,x0
71019bbe50  adrp x8,0x710523d000
71019bbe54  add x8,x8,#0xa08
71019bbe58  mov w0,#0x10
71019bbe5c  mov w1,#0x10
71019bbe60  str x8,[sp, #0x50]
71019bbe64  bl 0x710392e290
71019bbe68  cbnz x0,0x71019bbeb0
71019bbe6c  adrp x8,0x7105332000
71019bbe70  ldr x0,[x8, #0xf00]
71019bbe74  cbz x0,0x71019bbeac
71019bbe78  mov w8,#0x10
71019bbe7c  str wzr,[sp, #0x8]
71019bbe80  add x1,sp,#0x8
71019bbe84  str x8,[sp, #0x70]
71019bbe88  ldr x8,[x0]
71019bbe8c  ldr x8,[x8, #0x30]
71019bbe90  add x2,sp,#0x70
71019bbe94  blr x8
71019bbe98  tbz w0,#0x0,0x71019bbeac
71019bbe9c  mov w0,#0x10
71019bbea0  mov w1,#0x10
71019bbea4  bl 0x710392e290
71019bbea8  cbnz x0,0x71019bbeb0
71019bbeac  mov x0,xzr
71019bbeb0  add x8,sp,#0x50
71019bbeb4  cmp x8,x23
71019bbeb8  stp xzr,xzr,[x0]
71019bbebc  str x0,[sp, #0x58]
71019bbec0  b.eq 0x71019bbf28
71019bbec4  ldr x8,[x23, #0x8]
71019bbec8  ldp x9,x8,[x8]
71019bbecc  cbz x8,0x71019bbf24
71019bbed0  add x10,x8,#0x8
71019bbed4  ldxr x11,[x10]
71019bbed8  add x11,x11,#0x1
71019bbedc  stxr w12,x11,[x10]
71019bbee0  cbnz w12,0x71019bbed4
71019bbee4  ldr x23,[x0, #0x8]
71019bbee8  stp x9,x8,[x0]
71019bbeec  cbz x23,0x71019bbf28
71019bbef0  add x8,x23,#0x8
71019bbef4  ldaxr x9,[x8]
71019bbef8  sub x10,x9,#0x1
71019bbefc  stlxr w11,x10,[x8]
71019bbf00  cbnz w11,0x71019bbef4
71019bbf04  cbnz x9,0x71019bbf28
71019bbf08  ldr x8,[x23]
71019bbf0c  ldr x8,[x8, #0x10]
71019bbf10  mov x0,x23
71019bbf14  blr x8
71019bbf18  mov x0,x23
71019bbf1c  bl 0x71039c2670
71019bbf20  b 0x71019bbf28
71019bbf24  stp x9,x8,[x0]
71019bbf28  adrp x1,0x71042d4000
71019bbf2c  add x1,x1,#0x25c
71019bbf30  add x8,sp,#0x70
71019bbf34  mov x0,x19
71019bbf38  bl 0x7103776910
71019bbf3c  ldr x23,[sp, #0x78]
71019bbf40  add x1,sp,#0x50
71019bbf44  mov x0,x23
71019bbf48  bl 0x7103778b80
71019bbf4c  stp x28,xzr,[sp, #0x70]
71019bbf50  cbz x23,0x71019bbf5c
71019bbf54  mov x0,x23
71019bbf58  bl 0x710392eb40
71019bbf5c  ldr x8,[x27, #0x730]
71019bbf60  ldr x8,[x8, #0x8]
71019bbf64  ldr x24,[x20, #0x8]
71019bbf68  mov x1,x24
71019bbf6c  ldr x25,[x8, #0x168]
71019bbf70  mov x0,x25
71019bbf74  bl 0x71032632a0
71019bbf78  mov x23,x24
71019bbf7c  tbz w0,#0x0,0x71019bbf90
71019bbf80  mov x0,x25
71019bbf84  mov x1,x22
71019bbf88  bl 0x71032631a0
71019bbf8c  mov x23,x0
71019bbf90  mov x0,x25
71019bbf94  mov x1,x24
71019bbf98  bl 0x71032633f0
71019bbf9c  ldrb w8,[x20, #0x12]
71019bbfa0  cmp w0,w8
71019bbfa4  ldr x0,[x26, #0x168]
71019bbfa8  csel w2,w8,wzr,hi
71019bbfac  mov x1,x23
71019bbfb0  bl 0x7103263540
71019bbfb4  ldr x1,[x26, #0x168]
71019bbfb8  mov w22,w0
71019bbfbc  add x0,sp,#0x70
71019bbfc0  mov x2,x23
71019bbfc4  add x24,sp,#0x70
71019bbfc8  bl 0x7103262310
71019bbfcc  add x2,x24,#0x8
71019bbfd0  adrp x0,0x710439b000
71019bbfd4  add x0,x0,#0x815
71019bbfd8  add x8,sp,#0x8
71019bbfdc  mov w1,w22
71019bbfe0  add x23,sp,#0x8
71019bbfe4  bl 0x71003a4ca0
71019bbfe8  adrp x1,0x71043bd000
71019bbfec  add x1,x1,#0xffe
71019bbff0  add x8,sp,#0x70
71019bbff4  mov x0,x19
71019bbff8  bl 0x7103776910
71019bbffc  add x1,x23,#0x8
71019bc000  add x0,sp,#0x70
71019bc004  bl 0x710377a120
71019bc008  ldr x0,[sp, #0x78]
71019bc00c  stp x28,xzr,[sp, #0x70]
71019bc010  cbz x0,0x71019bc018
71019bc014  bl 0x710392eb40
71019bc018  adrp x1,0x710433a000
71019bc01c  add x1,x1,#0x953
71019bc020  add x8,sp,#0x70
71019bc024  mov x0,x19
71019bc028  bl 0x7103776910
71019bc02c  ldr x22,[sp, #0x78]
71019bc030  ldr x23,[x22, #0x10]
71019bc034  cbz x23,0x71019bc058
71019bc038  adrp x8,0x710532f000
71019bc03c  ldr x8,[x8, #0x7b0]
71019bc040  ldr x0,[x8, #0x8]
71019bc044  mov w1,w21
71019bc048  bl 0x71032dc2a0
71019bc04c  mov x1,x0
71019bc050  mov x0,x23
71019bc054  bl 0x71037a28a0
71019bc058  stp x28,xzr,[sp, #0x70]
71019bc05c  cbz x22,0x71019bc068
71019bc060  mov x0,x22
71019bc064  bl 0x710392eb40
71019bc068  ldr x8,[x27, #0x730]
71019bc06c  ldr x8,[x8, #0x8]
71019bc070  ldr x0,[x8, #0x2c8]
71019bc074  ldrh w1,[x20, #0xa2]
71019bc078  bl 0x710324bb60
71019bc07c  mov w20,w0
71019bc080  adrp x1,0x71043be000
71019bc084  add x1,x1,#0x11
71019bc088  add x8,sp,#0x70
71019bc08c  mov x0,x19
71019bc090  bl 0x7103776910
71019bc094  and w3,w20,#0xff
71019bc098  adrp x1,0x7104291000
71019bc09c  add x1,x1,#0x524
71019bc0a0  add x0,sp,#0x70
71019bc0a4  mov w2,#0x1
71019bc0a8  bl 0x710377a280
71019bc0ac  ldr x0,[sp, #0x78]
71019bc0b0  stp x28,xzr,[sp, #0x70]
71019bc0b4  cbz x0,0x71019bc0bc
71019bc0b8  bl 0x710392eb40
71019bc0bc  ldr x19,[sp, #0x58]
71019bc0c0  adrp x8,0x710523d000
71019bc0c4  add x8,x8,#0xa08
71019bc0c8  stp x8,xzr,[sp, #0x50]
71019bc0cc  cbz x19,0x71019bc14c
71019bc0d0  ldr x20,[x19, #0x8]
71019bc0d4  stp xzr,xzr,[x19]
71019bc0d8  cbz x20,0x71019bc144
71019bc0dc  add x8,x20,#0x8
71019bc0e0  ldaxr x9,[x8]
71019bc0e4  sub x10,x9,#0x1
71019bc0e8  stlxr w11,x10,[x8]
71019bc0ec  cbnz w11,0x71019bc0e0
71019bc0f0  cbnz x9,0x71019bc10c
71019bc0f4  ldr x8,[x20]
71019bc0f8  ldr x8,[x8, #0x10]
71019bc0fc  mov x0,x20
71019bc100  blr x8
71019bc104  mov x0,x20
71019bc108  bl 0x71039c2670
71019bc10c  ldr x20,[x19, #0x8]
71019bc110  cbz x20,0x71019bc144
71019bc114  add x8,x20,#0x8
71019bc118  ldaxr x9,[x8]
71019bc11c  sub x10,x9,#0x1
71019bc120  stlxr w11,x10,[x8]
71019bc124  cbnz w11,0x71019bc118
71019bc128  cbnz x9,0x71019bc144
71019bc12c  ldr x8,[x20]
71019bc130  ldr x8,[x8, #0x10]
71019bc134  mov x0,x20
71019bc138  blr x8
71019bc13c  mov x0,x20
71019bc140  bl 0x71039c2670
71019bc144  mov x0,x19
71019bc148  bl 0x710392eb40
71019bc14c  ldr x19,[sp, #0x68]
71019bc150  adrp x8,0x710523d000
71019bc154  add x8,x8,#0xa08
71019bc158  stp x8,xzr,[sp, #0x60]
71019bc15c  cbz x19,0x71019bc1dc
71019bc160  ldr x20,[x19, #0x8]
71019bc164  stp xzr,xzr,[x19]
71019bc168  cbz x20,0x71019bc1d4
71019bc16c  add x8,x20,#0x8
71019bc170  ldaxr x9,[x8]
71019bc174  sub x10,x9,#0x1
71019bc178  stlxr w11,x10,[x8]
71019bc17c  cbnz w11,0x71019bc170
71019bc180  cbnz x9,0x71019bc19c
71019bc184  ldr x8,[x20]
71019bc188  ldr x8,[x8, #0x10]
71019bc18c  mov x0,x20
71019bc190  blr x8
71019bc194  mov x0,x20
71019bc198  bl 0x71039c2670
71019bc19c  ldr x20,[x19, #0x8]
71019bc1a0  cbz x20,0x71019bc1d4
71019bc1a4  add x8,x20,#0x8
71019bc1a8  ldaxr x9,[x8]
71019bc1ac  sub x10,x9,#0x1
71019bc1b0  stlxr w11,x10,[x8]
71019bc1b4  cbnz w11,0x71019bc1a8
71019bc1b8  cbnz x9,0x71019bc1d4
71019bc1bc  ldr x8,[x20]
71019bc1c0  ldr x8,[x8, #0x10]
71019bc1c4  mov x0,x20
71019bc1c8  blr x8
71019bc1cc  mov x0,x20
71019bc1d0  bl 0x71039c2670
71019bc1d4  mov x0,x19
71019bc1d8  bl 0x710392eb40
71019bc1dc  ldp x29,x30,[sp, #0x110]
71019bc1e0  ldp x20,x19,[sp, #0x100]
71019bc1e4  ldp x22,x21,[sp, #0xf0]
71019bc1e8  ldp x24,x23,[sp, #0xe0]
71019bc1ec  ldp x26,x25,[sp, #0xd0]
71019bc1f0  ldp x28,x27,[sp, #0xc0]
71019bc1f4  add sp,sp,#0x120
71019bc1f8  ret
