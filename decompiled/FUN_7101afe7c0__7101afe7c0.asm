// addr:      7101afe7c0
// offset:    0x1afe7c0
// name:      FUN_7101afe7c0
// mangled:   
// size:      1340

7101afe7c0  sub sp,sp,#0x110
7101afe7c4  str d8,[sp, #0xd0]
7101afe7c8  str x28,[sp, #0xd8]
7101afe7cc  stp x22,x21,[sp, #0xe0]
7101afe7d0  stp x20,x19,[sp, #0xf0]
7101afe7d4  stp x29,x30,[sp, #0x100]
7101afe7d8  add x29,sp,#0x100
7101afe7dc  sub w8,w1,#0x1
7101afe7e0  mov w19,w1
7101afe7e4  mov x20,x0
7101afe7e8  cmp w8,#0x3
7101afe7ec  str wzr,[x0, #0x1ec]
7101afe7f0  b.hi 0x7101afeca8
7101afe7f4  adrp x9,0x71044f8000
7101afe7f8  add x9,x9,#0x4b4
7101afe7fc  ldrsw x8,[x9, x8, LSL #0x2]
7101afe800  add x8,x8,x9
7101afe804  br x8
7101afe808  fmov s8,0x3f800000
7101afe80c  ldr x0,[x20, #0x168]
7101afe810  adrp x1,0x71043f0000
7101afe814  add x1,x1,#0x5c9
7101afe818  mov v0.16B,v8.16B
7101afe81c  bl 0x7103778300
7101afe820  ldr x8,[x20, #0x188]
7101afe824  str xzr,[x8]
7101afe828  ldr x8,[x20, #0x188]
7101afe82c  str xzr,[x8, #0x8]
7101afe830  ldr x0,[x20, #0x178]
7101afe834  mov v0.16B,v8.16B
7101afe838  adrp x1,0x7104349000
7101afe83c  add x1,x1,#0xe99
7101afe840  bl 0x7103778300
7101afe844  b 0x7101afeca8
7101afe848  adrp x8,0x710532f000
7101afe84c  ldr x8,[x8, #0x8d0]
7101afe850  ldr x0,[x8, #0x8]
7101afe854  ldrb w8,[x0, #0x191]
7101afe858  cbnz w8,0x7101afe9f8
7101afe85c  mov x21,#0xe495
7101afe860  movk x21,#0xc296, LSL #16
7101afe864  movk x21,#0xe, LSL #32
7101afe868  mov w2,#0x4
7101afe86c  mov x1,x21
7101afe870  bl 0x7103313f20
7101afe874  tbz w0,#0x0,0x7101afe9f8
7101afe878  sub x0,x29,#0x70
7101afe87c  mov x1,x21
7101afe880  bl 0x71024076d0
7101afe884  ldur x8,[x29, #-0x60]
7101afe888  adrp x9,0x7104f73000
7101afe88c  add x9,x9,#0xd50
7101afe890  stur x9,[x29, #-0x68]
7101afe894  cbz x8,0x7101afea24
7101afe898  adrp x8,0x7106dd5000
7101afe89c  ldrb w8,[x8, #0x3a8]
7101afe8a0  cmp w8,#0x1
7101afe8a4  b.ne 0x7101afea24
7101afe8a8  adrp x9,0x7106dd5000
7101afe8ac  ldur w8,[x29, #-0x58]
7101afe8b0  ldr w9,[x9, #0x3ac]
7101afe8b4  cmp w8,w9
7101afe8b8  b.ne 0x7101afea24
7101afe8bc  ldur x8,[x29, #-0x60]
7101afe8c0  ldr wzr,[x8, #0x38]!
7101afe8c4  ldaxr w9,[x8]
7101afe8c8  sub w9,w9,#0x1
7101afe8cc  stlxr w10,w9,[x8]
7101afe8d0  cbnz w10,0x7101afe8c4
7101afe8d4  b 0x7101afea24
7101afe8d8  adrp x8,0x710532f000
7101afe8dc  ldr x8,[x8, #0x8d0]
7101afe8e0  ldr x0,[x8, #0x8]
7101afe8e4  ldrb w8,[x0, #0x191]
7101afe8e8  cbnz w8,0x7101afeab4
7101afe8ec  mov x21,#0x7fb2
7101afe8f0  movk x21,#0x3cd5, LSL #16
7101afe8f4  movk x21,#0xf, LSL #32
7101afe8f8  mov w2,#0x4
7101afe8fc  mov x1,x21
7101afe900  bl 0x7103313f20
7101afe904  tbz w0,#0x0,0x7101afeab4
7101afe908  add x0,sp,#0x40
7101afe90c  mov x1,x21
7101afe910  bl 0x71024076d0
7101afe914  ldr x8,[sp, #0x50]
7101afe918  adrp x9,0x7104f73000
7101afe91c  add x9,x9,#0xd50
7101afe920  str x9,[sp, #0x48]
7101afe924  cbz x8,0x7101afeae0
7101afe928  adrp x8,0x7106dd5000
7101afe92c  ldrb w8,[x8, #0x3a8]
7101afe930  cmp w8,#0x1
7101afe934  b.ne 0x7101afeae0
7101afe938  adrp x9,0x7106dd5000
7101afe93c  ldr w8,[sp, #0x58]
7101afe940  ldr w9,[x9, #0x3ac]
7101afe944  cmp w8,w9
7101afe948  b.ne 0x7101afeae0
7101afe94c  ldr x8,[sp, #0x50]
7101afe950  ldr wzr,[x8, #0x38]!
7101afe954  ldaxr w9,[x8]
7101afe958  sub w9,w9,#0x1
7101afe95c  stlxr w10,w9,[x8]
7101afe960  cbnz w10,0x7101afe954
7101afe964  b 0x7101afeae0
7101afe968  adrp x8,0x710532f000
7101afe96c  ldr x8,[x8, #0x8d0]
7101afe970  ldr x0,[x8, #0x8]
7101afe974  ldrb w8,[x0, #0x191]
7101afe978  cbnz w8,0x7101afeb7c
7101afe97c  mov x21,#0x236d
7101afe980  movk x21,#0x7586, LSL #16
7101afe984  movk x21,#0xf, LSL #32
7101afe988  mov w2,#0x4
7101afe98c  mov x1,x21
7101afe990  bl 0x7103313f20
7101afe994  tbz w0,#0x0,0x7101afeb7c
7101afe998  mov x0,sp
7101afe99c  mov x1,x21
7101afe9a0  bl 0x71024076d0
7101afe9a4  ldr x8,[sp, #0x10]
7101afe9a8  adrp x9,0x7104f73000
7101afe9ac  add x9,x9,#0xd50
7101afe9b0  str x9,[sp, #0x8]
7101afe9b4  cbz x8,0x7101afeba8
7101afe9b8  adrp x8,0x7106dd5000
7101afe9bc  ldrb w8,[x8, #0x3a8]
7101afe9c0  cmp w8,#0x1
7101afe9c4  b.ne 0x7101afeba8
7101afe9c8  adrp x9,0x7106dd5000
7101afe9cc  ldr w8,[sp, #0x18]
7101afe9d0  ldr w9,[x9, #0x3ac]
7101afe9d4  cmp w8,w9
7101afe9d8  b.ne 0x7101afeba8
7101afe9dc  ldr x8,[sp, #0x10]
7101afe9e0  ldr wzr,[x8, #0x38]!
7101afe9e4  ldaxr w9,[x8]
7101afe9e8  sub w9,w9,#0x1
7101afe9ec  stlxr w10,w9,[x8]
7101afe9f0  cbnz w10,0x7101afe9e4
7101afe9f4  b 0x7101afeba8
7101afe9f8  mov x8,#0x650000000000
7101afe9fc  movk x8,#0x87, LSL #48
7101afea00  sturb wzr,[x29, #-0x50]
7101afea04  stp xzr,x8,[x29, #-0x60]
7101afea08  mov x8,#-0x1
7101afea0c  stp x8,xzr,[x29, #-0x48]
7101afea10  adrp x8,0x7104f73000
7101afea14  add x8,x8,#0xd50
7101afea18  stur wzr,[x29, #-0x70]
7101afea1c  stur xzr,[x29, #-0x38]
7101afea20  stur x8,[x29, #-0x68]
7101afea24  add x0,x20,#0x160
7101afea28  adrp x1,0x71043df000
7101afea2c  add x1,x1,#0xccd
7101afea30  add x8,sp,#0x80
7101afea34  stur xzr,[x29, #-0x60]
7101afea38  sturb wzr,[x29, #-0x50]
7101afea3c  add x22,sp,#0x80
7101afea40  bl 0x71037780e0
7101afea44  add x21,x20,#0x180
7101afea48  cmp x21,x22
7101afea4c  b.eq 0x7101afea68
7101afea50  ldr x8,[sp, #0x88]
7101afea54  str xzr,[sp, #0x88]
7101afea58  ldr x0,[x20, #0x188]
7101afea5c  str x8,[x20, #0x188]
7101afea60  cbz x0,0x7101afea68
7101afea64  bl 0x710392eb40
7101afea68  ldr x0,[sp, #0x88]
7101afea6c  adrp x8,0x710523d000
7101afea70  add x8,x8,#0x9e8
7101afea74  stp x8,xzr,[sp, #0x80]
7101afea78  cbz x0,0x7101afea80
7101afea7c  bl 0x710392eb40
7101afea80  fmov s8,0x3f800000
7101afea84  mov v0.16B,v8.16B
7101afea88  mov x0,x21
7101afea8c  bl 0x710377aee0
7101afea90  ldr x0,[x20, #0x178]
7101afea94  mov v0.16B,v8.16B
7101afea98  adrp x1,0x7104339000
7101afea9c  add x1,x1,#0xcd6
7101afeaa0  bl 0x7103778300
7101afeaa4  ldr x8,[x20, #0x130]
7101afeaa8  ldr x8,[x8]
7101afeaac  ldr x0,[x8]
7101afeab0  b 0x7101afec24
7101afeab4  mov x8,#0x650000000000
7101afeab8  movk x8,#0x87, LSL #48
7101afeabc  strb wzr,[sp, #0x60]
7101afeac0  stp xzr,x8,[sp, #0x50]
7101afeac4  mov x8,#-0x1
7101afeac8  stp x8,xzr,[sp, #0x68]
7101afeacc  adrp x8,0x7104f73000
7101afead0  add x8,x8,#0xd50
7101afead4  str wzr,[sp, #0x40]
7101afead8  str xzr,[sp, #0x78]
7101afeadc  str x8,[sp, #0x48]
7101afeae0  add x0,x20,#0x160
7101afeae4  adrp x1,0x7104339000
7101afeae8  add x1,x1,#0xcde
7101afeaec  add x8,sp,#0x80
7101afeaf0  str xzr,[sp, #0x50]
7101afeaf4  strb wzr,[sp, #0x60]
7101afeaf8  add x22,sp,#0x80
7101afeafc  bl 0x71037780e0
7101afeb00  add x21,x20,#0x180
7101afeb04  cmp x21,x22
7101afeb08  b.eq 0x7101afeb24
7101afeb0c  ldr x8,[sp, #0x88]
7101afeb10  str xzr,[sp, #0x88]
7101afeb14  ldr x0,[x20, #0x188]
7101afeb18  str x8,[x20, #0x188]
7101afeb1c  cbz x0,0x7101afeb24
7101afeb20  bl 0x710392eb40
7101afeb24  ldr x0,[sp, #0x88]
7101afeb28  adrp x8,0x710523d000
7101afeb2c  add x8,x8,#0x9e8
7101afeb30  stp x8,xzr,[sp, #0x80]
7101afeb34  cbz x0,0x7101afeb3c
7101afeb38  bl 0x710392eb40
7101afeb3c  fmov s8,0x3f800000
7101afeb40  mov v0.16B,v8.16B
7101afeb44  mov x0,x21
7101afeb48  bl 0x710377aee0
7101afeb4c  ldr x0,[x20, #0x178]
7101afeb50  mov v0.16B,v8.16B
7101afeb54  adrp x1,0x7104339000
7101afeb58  add x1,x1,#0xcd6
7101afeb5c  bl 0x7103778300
7101afeb60  ldr x9,[x20, #0x130]
7101afeb64  ldr x9,[x9]
7101afeb68  ldrb w8,[x20, #0x1f0]
7101afeb6c  ldr x0,[x9]
7101afeb70  cbz w8,0x7101afec64
7101afeb74  mov w1,wzr
7101afeb78  b 0x7101afec68
7101afeb7c  mov x8,#0x650000000000
7101afeb80  movk x8,#0x87, LSL #48
7101afeb84  strb wzr,[sp, #0x20]
7101afeb88  stp xzr,x8,[sp, #0x10]
7101afeb8c  mov x8,#-0x1
7101afeb90  stp x8,xzr,[sp, #0x28]
7101afeb94  adrp x8,0x7104f73000
7101afeb98  add x8,x8,#0xd50
7101afeb9c  str wzr,[sp]
7101afeba0  str xzr,[sp, #0x38]
7101afeba4  str x8,[sp, #0x8]
7101afeba8  add x0,x20,#0x160
7101afebac  adrp x1,0x710424f000
7101afebb0  add x1,x1,#0x51
7101afebb4  add x8,sp,#0x80
7101afebb8  str xzr,[sp, #0x10]
7101afebbc  strb wzr,[sp, #0x20]
7101afebc0  add x22,sp,#0x80
7101afebc4  bl 0x71037780e0
7101afebc8  add x21,x20,#0x180
7101afebcc  cmp x21,x22
7101afebd0  b.eq 0x7101afebec
7101afebd4  ldr x8,[sp, #0x88]
7101afebd8  str xzr,[sp, #0x88]
7101afebdc  ldr x0,[x20, #0x188]
7101afebe0  str x8,[x20, #0x188]
7101afebe4  cbz x0,0x7101afebec
7101afebe8  bl 0x710392eb40
7101afebec  ldr x0,[sp, #0x88]
7101afebf0  adrp x8,0x710523d000
7101afebf4  add x8,x8,#0x9e8
7101afebf8  stp x8,xzr,[sp, #0x80]
7101afebfc  cbz x0,0x7101afec04
7101afec00  bl 0x710392eb40
7101afec04  fmov s0,0x3f800000
7101afec08  mov x0,x21
7101afec0c  bl 0x710377aee0
7101afec10  ldr x9,[x20, #0x130]
7101afec14  ldr x9,[x9]
7101afec18  ldrb w8,[x20, #0x1f0]
7101afec1c  ldr x0,[x9]
7101afec20  cbz w8,0x7101afecc8
7101afec24  mov w1,wzr
7101afec28  bl 0x71037760f0
7101afec2c  ldr x8,[x20, #0x130]
7101afec30  ldr x8,[x8]
7101afec34  ldr x8,[x8]
7101afec38  adrp x9,0x710593b000
7101afec3c  ldr x9,[x9, #0x988]
7101afec40  ldr x9,[x9, #0x8]
7101afec44  ldr x8,[x8, #0x600]
7101afec48  ldr w8,[x8, #0x494]
7101afec4c  mov w10,#0x1
7101afec50  lsl w8,w10,w8
7101afec54  ldr w10,[x9]
7101afec58  bic w8,w10,w8
7101afec5c  str w8,[x9]
7101afec60  b 0x7101afeca8
7101afec64  mov w1,#0x1
7101afec68  bl 0x71037760f0
7101afec6c  ldr x8,[x20, #0x130]
7101afec70  ldr x8,[x8]
7101afec74  ldr x8,[x8]
7101afec78  adrp x9,0x710593b000
7101afec7c  ldr x9,[x9, #0x988]
7101afec80  ldr x9,[x9, #0x8]
7101afec84  ldr x8,[x8, #0x600]
7101afec88  ldr w8,[x8, #0x494]
7101afec8c  mov w10,#0x1
7101afec90  lsl w8,w10,w8
7101afec94  ldr w10,[x9]
7101afec98  bic w8,w10,w8
7101afec9c  str w8,[x9]
7101afeca0  mov w8,#0x258
7101afeca4  str w8,[x20, #0x1ec]
7101afeca8  str w19,[x20, #0x1e4]
7101afecac  ldr d8,[sp, #0xd0]
7101afecb0  ldr x28,[sp, #0xd8]
7101afecb4  ldp x29,x30,[sp, #0x100]
7101afecb8  ldp x20,x19,[sp, #0xf0]
7101afecbc  ldp x22,x21,[sp, #0xe0]
7101afecc0  add sp,sp,#0x110
7101afecc4  ret
7101afecc8  mov w1,#0x1
7101afeccc  mov w21,#0x1
7101afecd0  bl 0x71037760f0
7101afecd4  ldr x8,[x20, #0x130]
7101afecd8  ldr x8,[x8]
7101afecdc  ldr x8,[x8]
7101afece0  adrp x9,0x710593b000
7101afece4  ldr x9,[x9, #0x988]
7101afece8  ldr x9,[x9, #0x8]
7101afecec  ldr x8,[x8, #0x600]
7101afecf0  ldr w8,[x8, #0x494]
7101afecf4  lsl w8,w21,w8
7101afecf8  b 0x7101afec54
