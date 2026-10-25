// addr:      7101a7c9b0
// offset:    0x1a7c9b0
// name:      FUN_7101a7c9b0
// mangled:   
// size:      9144

7101a7c9b0  stp x28,x27,[sp, #-0x60]!
7101a7c9b4  stp x26,x25,[sp, #0x10]
7101a7c9b8  stp x24,x23,[sp, #0x20]
7101a7c9bc  stp x22,x21,[sp, #0x30]
7101a7c9c0  stp x20,x19,[sp, #0x40]
7101a7c9c4  stp x29,x30,[sp, #0x50]
7101a7c9c8  add x29,sp,#0x50
7101a7c9cc  sub sp,sp,#0x350
7101a7c9d0  ldr x8,[x0, #0x140]
7101a7c9d4  ldr x1,[x8]
7101a7c9d8  add x20,x0,#0x148
7101a7c9dc  mov x26,x0
7101a7c9e0  adrp x2,0x7104544000
7101a7c9e4  add x2,x2,#0x3f0
7101a7c9e8  mov w3,#0x1
7101a7c9ec  mov x0,x20
7101a7c9f0  add x27,sp,#0x200
7101a7c9f4  mov w22,#0x1
7101a7c9f8  bl 0x71032cbf30
7101a7c9fc  ldr x8,[x26, #0x140]
7101a7ca00  ldr x1,[x8]
7101a7ca04  add x21,x26,#0x150
7101a7ca08  adrp x2,0x7104544000
7101a7ca0c  add x2,x2,#0x3f8
7101a7ca10  mov w3,#0x1
7101a7ca14  mov x0,x21
7101a7ca18  bl 0x71032cbf30
7101a7ca1c  ldr x8,[x26, #0x148]
7101a7ca20  ldr x8,[x8]
7101a7ca24  ldr x0,[x8]
7101a7ca28  mov w1,wzr
7101a7ca2c  bl 0x71037760f0
7101a7ca30  ldr x8,[x26, #0x150]
7101a7ca34  ldr x8,[x8]
7101a7ca38  ldr x0,[x8]
7101a7ca3c  mov w1,wzr
7101a7ca40  bl 0x71037760f0
7101a7ca44  ldr x8,[x26, #0x148]
7101a7ca48  ldr x19,[x8]
7101a7ca4c  mov x8,#0x41800000
7101a7ca50  movk x8,#0x4248, LSL #48
7101a7ca54  str x8,[sp, #0x208]
7101a7ca58  mov x8,#0x3f800000
7101a7ca5c  movk x8,#0x101, LSL #32
7101a7ca60  movk x8,#0x1, LSL #48
7101a7ca64  add x0,sp,#0x200
7101a7ca68  str xzr,[sp, #0x200]
7101a7ca6c  strh wzr,[sp, #0x218]
7101a7ca70  strb w22,[sp, #0x21a]
7101a7ca74  add x22,x27,#0x30
7101a7ca78  str xzr,[sp, #0x250]
7101a7ca7c  str xzr,[sp, #0x280]
7101a7ca80  str xzr,[sp, #0x2b0]
7101a7ca84  str xzr,[sp, #0x2e0]
7101a7ca88  str xzr,[sp, #0x310]
7101a7ca8c  strb wzr,[sp, #0x221]
7101a7ca90  str x8,[sp, #0x210]
7101a7ca94  sturh wzr,[x27, #0x1f]
7101a7ca98  stur wzr,[x27, #0x1b]
7101a7ca9c  bl 0x710337e790
7101a7caa0  adrp x8,0x71050a9000
7101a7caa4  add x8,x8,#0x90
7101a7caa8  add x23,sp,#0x10
7101a7caac  add x0,sp,#0x10
7101a7cab0  mov x1,x22
7101a7cab4  str x23,[sp, #0x30]
7101a7cab8  stp x8,x26,[sp, #0x10]
7101a7cabc  bl 0x71003cb050
7101a7cac0  ldr x0,[sp, #0x30]
7101a7cac4  cmp x23,x0
7101a7cac8  b.eq 0x7101a7cadc
7101a7cacc  cbz x0,0x7101a7cae8
7101a7cad0  ldr x8,[x0]
7101a7cad4  ldr x8,[x8, #0x28]
7101a7cad8  b 0x7101a7cae4
7101a7cadc  ldr x8,[x0]
7101a7cae0  ldr x8,[x8, #0x20]
7101a7cae4  blr x8
7101a7cae8  add x8,sp,#0x200
7101a7caec  add x22,x19,#0x8
7101a7caf0  add x19,sp,#0x10
7101a7caf4  add x1,x8,#0x60
7101a7caf8  adrp x8,0x71050a9000
7101a7cafc  add x8,x8,#0xd8
7101a7cb00  add x0,sp,#0x10
7101a7cb04  str x8,[sp, #0x10]
7101a7cb08  str x19,[sp, #0x30]
7101a7cb0c  bl 0x71003cb050
7101a7cb10  ldr x0,[sp, #0x30]
7101a7cb14  cmp x19,x0
7101a7cb18  b.eq 0x7101a7cb2c
7101a7cb1c  cbz x0,0x7101a7cb38
7101a7cb20  ldr x8,[x0]
7101a7cb24  ldr x8,[x8, #0x28]
7101a7cb28  b 0x7101a7cb34
7101a7cb2c  ldr x8,[x0]
7101a7cb30  ldr x8,[x8, #0x20]
7101a7cb34  blr x8
7101a7cb38  add x8,sp,#0x200
7101a7cb3c  add x1,x8,#0xf0
7101a7cb40  adrp x8,0x71050a9000
7101a7cb44  add x8,x8,#0x120
7101a7cb48  add x19,sp,#0x10
7101a7cb4c  str x19,[sp, #0x30]
7101a7cb50  add x0,sp,#0x10
7101a7cb54  str x8,[sp, #0x10]
7101a7cb58  bl 0x71003cb050
7101a7cb5c  ldr x0,[sp, #0x30]
7101a7cb60  cmp x19,x0
7101a7cb64  b.eq 0x7101a7cb78
7101a7cb68  cbz x0,0x7101a7cb84
7101a7cb6c  ldr x8,[x0]
7101a7cb70  ldr x8,[x8, #0x28]
7101a7cb74  b 0x7101a7cb80
7101a7cb78  ldr x8,[x0]
7101a7cb7c  ldr x8,[x8, #0x20]
7101a7cb80  blr x8
7101a7cb84  ldr x8,[x26, #0x208]
7101a7cb88  ldr x9,[x26, #0x200]
7101a7cb8c  sub x8,x8,x9
7101a7cb90  mov w10,#0x8e39
7101a7cb94  movk w10,#0x38e3, LSL #16
7101a7cb98  add x23,x26,#0x158
7101a7cb9c  mov w28,#0x101
7101a7cba0  adrp x2,0x7104443000
7101a7cba4  add x2,x2,#0x66
7101a7cba8  add x3,sp,#0x200
7101a7cbac  mov x0,x23
7101a7cbb0  strh w28,[sp, #0x21c]
7101a7cbb4  add x19,sp,#0x200
7101a7cbb8  lsr x8,x8,#0x3
7101a7cbbc  mul w8,w8,w10
7101a7cbc0  mov x1,x22
7101a7cbc4  mov x4,x26
7101a7cbc8  str w8,[sp, #0x204]
7101a7cbcc  bl 0x7103781a20
7101a7cbd0  mov w3,#0x1
7101a7cbd4  mov x0,x23
7101a7cbd8  mov w1,wzr
7101a7cbdc  mov w2,wzr
7101a7cbe0  bl 0x7103783c10
7101a7cbe4  ldr x0,[x26, #0x158]
7101a7cbe8  ldr x8,[x0]
7101a7cbec  ldr x8,[x8, #0x70]
7101a7cbf0  mov w1,#0x1
7101a7cbf4  blr x8
7101a7cbf8  ldr x0,[sp, #0x310]
7101a7cbfc  add x8,x19,#0xf0
7101a7cc00  cmp x8,x0
7101a7cc04  b.eq 0x7101a7cc18
7101a7cc08  cbz x0,0x7101a7cc24
7101a7cc0c  ldr x8,[x0]
7101a7cc10  ldr x8,[x8, #0x28]
7101a7cc14  b 0x7101a7cc20
7101a7cc18  ldr x8,[x0]
7101a7cc1c  ldr x8,[x8, #0x20]
7101a7cc20  blr x8
7101a7cc24  ldr x0,[sp, #0x2e0]
7101a7cc28  add x8,sp,#0x200
7101a7cc2c  add x8,x8,#0xc0
7101a7cc30  cmp x8,x0
7101a7cc34  b.eq 0x7101a7cc48
7101a7cc38  cbz x0,0x7101a7cc54
7101a7cc3c  ldr x8,[x0]
7101a7cc40  ldr x8,[x8, #0x28]
7101a7cc44  b 0x7101a7cc50
7101a7cc48  ldr x8,[x0]
7101a7cc4c  ldr x8,[x8, #0x20]
7101a7cc50  blr x8
7101a7cc54  ldr x0,[sp, #0x2b0]
7101a7cc58  add x8,sp,#0x200
7101a7cc5c  add x8,x8,#0x90
7101a7cc60  cmp x8,x0
7101a7cc64  b.eq 0x7101a7cc78
7101a7cc68  cbz x0,0x7101a7cc84
7101a7cc6c  ldr x8,[x0]
7101a7cc70  ldr x8,[x8, #0x28]
7101a7cc74  b 0x7101a7cc80
7101a7cc78  ldr x8,[x0]
7101a7cc7c  ldr x8,[x8, #0x20]
7101a7cc80  blr x8
7101a7cc84  ldr x0,[sp, #0x280]
7101a7cc88  add x8,sp,#0x200
7101a7cc8c  add x8,x8,#0x60
7101a7cc90  cmp x8,x0
7101a7cc94  b.eq 0x7101a7cca8
7101a7cc98  cbz x0,0x7101a7ccb4
7101a7cc9c  ldr x8,[x0]
7101a7cca0  ldr x8,[x8, #0x28]
7101a7cca4  b 0x7101a7ccb0
7101a7cca8  ldr x8,[x0]
7101a7ccac  ldr x8,[x8, #0x20]
7101a7ccb0  blr x8
7101a7ccb4  ldr x0,[sp, #0x250]
7101a7ccb8  add x8,sp,#0x200
7101a7ccbc  add x8,x8,#0x30
7101a7ccc0  cmp x8,x0
7101a7ccc4  b.eq 0x7101a7ccd8
7101a7ccc8  cbz x0,0x7101a7cce4
7101a7cccc  ldr x8,[x0]
7101a7ccd0  ldr x8,[x8, #0x28]
7101a7ccd4  b 0x7101a7cce0
7101a7ccd8  ldr x8,[x0]
7101a7ccdc  ldr x8,[x8, #0x20]
7101a7cce0  blr x8
7101a7cce4  ldr x8,[x26, #0x148]
7101a7cce8  ldr x19,[x8]
7101a7ccec  mov w8,#0x1
7101a7ccf0  str xzr,[sp, #0x200]
7101a7ccf4  strh w28,[sp, #0x208]
7101a7ccf8  stur wzr,[x27, #0xa]
7101a7ccfc  str w8,[sp, #0x210]
7101a7cd00  strh w8,[sp, #0x214]
7101a7cd04  strb w8,[sp, #0x216]
7101a7cd08  mov x8,#0x41f0000000000000
7101a7cd0c  add x0,sp,#0x200
7101a7cd10  strh wzr,[sp, #0x20e]
7101a7cd14  str wzr,[sp, #0x220]
7101a7cd18  str xzr,[sp, #0x250]
7101a7cd1c  str xzr,[sp, #0x280]
7101a7cd20  str xzr,[sp, #0x2b0]
7101a7cd24  str xzr,[sp, #0x2e0]
7101a7cd28  str xzr,[sp, #0x310]
7101a7cd2c  str x8,[sp, #0x218]
7101a7cd30  str wzr,[sp, #0x320]
7101a7cd34  bl 0x710337df20
7101a7cd38  ldp x9,x8,[x26, #0x1c0]
7101a7cd3c  add x22,x26,#0x1b8
7101a7cd40  stp x19,x26,[sp]
7101a7cd44  cmp x9,x8
7101a7cd48  b.cs 0x7101a7cd60
7101a7cd4c  strb wzr,[x9]
7101a7cd50  ldr x8,[x26, #0x1c0]
7101a7cd54  add x19,x8,#0x1
7101a7cd58  str x19,[x26, #0x1c0]
7101a7cd5c  b 0x7101a7ce34
7101a7cd60  ldr x23,[x22]
7101a7cd64  sub x24,x9,x23
7101a7cd68  adds x9,x24,#0x1
7101a7cd6c  b.mi 0x7101a7ed58
7101a7cd70  sub x8,x8,x23
7101a7cd74  orr x10,xzr,#0x3ffffffffffffffe
7101a7cd78  cmp x8,x10
7101a7cd7c  b.hi 0x7101a7cd94
7101a7cd80  lsl x8,x8,#0x1
7101a7cd84  cmp x8,x9
7101a7cd88  csel x25,x9,x8,cc
7101a7cd8c  cbnz x25,0x7101a7cd98
7101a7cd90  b 0x7101a7cdec
7101a7cd94  orr x25,xzr,#0x7fffffffffffffff
7101a7cd98  mov w0,#0x10
7101a7cd9c  mov x1,x25
7101a7cda0  bl 0x710392e290
7101a7cda4  cbz x0,0x7101a7cdb0
7101a7cda8  mov x26,x0
7101a7cdac  b 0x7101a7cdf0
7101a7cdb0  adrp x8,0x7105332000
7101a7cdb4  ldr x0,[x8, #0xf00]
7101a7cdb8  cbz x0,0x7101a7cdec
7101a7cdbc  str wzr,[sp, #0x1d0]
7101a7cdc0  str x25,[sp, #0x10]
7101a7cdc4  ldr x8,[x0]
7101a7cdc8  ldr x8,[x8, #0x30]
7101a7cdcc  add x1,sp,#0x1d0
7101a7cdd0  add x2,sp,#0x10
7101a7cdd4  blr x8
7101a7cdd8  tbz w0,#0x0,0x7101a7cdec
7101a7cddc  mov w0,#0x10
7101a7cde0  mov x1,x25
7101a7cde4  bl 0x710392e290
7101a7cde8  cbnz x0,0x7101a7cda8
7101a7cdec  mov x26,xzr
7101a7cdf0  add x19,x26,x24
7101a7cdf4  add x25,x26,x25
7101a7cdf8  cmp x24,#0x1
7101a7cdfc  strb wzr,[x19], #0x1
7101a7ce00  b.lt 0x7101a7ce14
7101a7ce04  mov x0,x26
7101a7ce08  mov x1,x23
7101a7ce0c  mov x2,x24
7101a7ce10  bl 0x71039c00e0
7101a7ce14  ldr x8,[sp, #0x8]
7101a7ce18  stp x26,x19,[x8, #0x1b8]
7101a7ce1c  mov x26,x8
7101a7ce20  str x25,[x8, #0x1c8]
7101a7ce24  cbz x23,0x7101a7ce34
7101a7ce28  mov x0,x23
7101a7ce2c  bl 0x710392eb40
7101a7ce30  ldr x19,[x26, #0x1c0]
7101a7ce34  ldr x8,[x26, #0x1c8]
7101a7ce38  cmp x19,x8
7101a7ce3c  b.cs 0x7101a7ce58
7101a7ce40  mov w8,#0x1
7101a7ce44  strb w8,[x19]
7101a7ce48  ldr x8,[x26, #0x1c0]
7101a7ce4c  add x19,x8,#0x1
7101a7ce50  str x19,[x26, #0x1c0]
7101a7ce54  b 0x7101a7cf30
7101a7ce58  ldr x23,[x22]
7101a7ce5c  sub x24,x19,x23
7101a7ce60  adds x9,x24,#0x1
7101a7ce64  b.mi 0x7101a7ed58
7101a7ce68  sub x8,x8,x23
7101a7ce6c  orr x10,xzr,#0x3ffffffffffffffe
7101a7ce70  cmp x8,x10
7101a7ce74  b.hi 0x7101a7ce8c
7101a7ce78  lsl x8,x8,#0x1
7101a7ce7c  cmp x8,x9
7101a7ce80  csel x25,x9,x8,cc
7101a7ce84  cbnz x25,0x7101a7ce90
7101a7ce88  b 0x7101a7cee4
7101a7ce8c  orr x25,xzr,#0x7fffffffffffffff
7101a7ce90  mov w0,#0x10
7101a7ce94  mov x1,x25
7101a7ce98  bl 0x710392e290
7101a7ce9c  cbz x0,0x7101a7cea8
7101a7cea0  mov x26,x0
7101a7cea4  b 0x7101a7cee8
7101a7cea8  adrp x8,0x7105332000
7101a7ceac  ldr x0,[x8, #0xf00]
7101a7ceb0  cbz x0,0x7101a7cee4
7101a7ceb4  str wzr,[sp, #0x1d0]
7101a7ceb8  str x25,[sp, #0x10]
7101a7cebc  ldr x8,[x0]
7101a7cec0  ldr x8,[x8, #0x30]
7101a7cec4  add x1,sp,#0x1d0
7101a7cec8  add x2,sp,#0x10
7101a7cecc  blr x8
7101a7ced0  tbz w0,#0x0,0x7101a7cee4
7101a7ced4  mov w0,#0x10
7101a7ced8  mov x1,x25
7101a7cedc  bl 0x710392e290
7101a7cee0  cbnz x0,0x7101a7cea0
7101a7cee4  mov x26,xzr
7101a7cee8  add x19,x26,x24
7101a7ceec  mov w8,#0x1
7101a7cef0  add x25,x26,x25
7101a7cef4  cmp x24,#0x1
7101a7cef8  strb w8,[x19], #0x1
7101a7cefc  b.lt 0x7101a7cf10
7101a7cf00  mov x0,x26
7101a7cf04  mov x1,x23
7101a7cf08  mov x2,x24
7101a7cf0c  bl 0x71039c00e0
7101a7cf10  ldr x8,[sp, #0x8]
7101a7cf14  stp x26,x19,[x8, #0x1b8]
7101a7cf18  mov x26,x8
7101a7cf1c  str x25,[x8, #0x1c8]
7101a7cf20  cbz x23,0x7101a7cf30
7101a7cf24  mov x0,x23
7101a7cf28  bl 0x710392eb40
7101a7cf2c  ldr x19,[x26, #0x1c0]
7101a7cf30  ldr x8,[x26, #0x1c8]
7101a7cf34  cmp x19,x8
7101a7cf38  b.cs 0x7101a7cf54
7101a7cf3c  mov w8,#0x2
7101a7cf40  strb w8,[x19]
7101a7cf44  ldr x8,[x26, #0x1c0]
7101a7cf48  add x19,x8,#0x1
7101a7cf4c  str x19,[x26, #0x1c0]
7101a7cf50  b 0x7101a7d02c
7101a7cf54  ldr x23,[x22]
7101a7cf58  sub x24,x19,x23
7101a7cf5c  adds x9,x24,#0x1
7101a7cf60  b.mi 0x7101a7ed58
7101a7cf64  sub x8,x8,x23
7101a7cf68  orr x10,xzr,#0x3ffffffffffffffe
7101a7cf6c  cmp x8,x10
7101a7cf70  b.hi 0x7101a7cf88
7101a7cf74  lsl x8,x8,#0x1
7101a7cf78  cmp x8,x9
7101a7cf7c  csel x25,x9,x8,cc
7101a7cf80  cbnz x25,0x7101a7cf8c
7101a7cf84  b 0x7101a7cfe0
7101a7cf88  orr x25,xzr,#0x7fffffffffffffff
7101a7cf8c  mov w0,#0x10
7101a7cf90  mov x1,x25
7101a7cf94  bl 0x710392e290
7101a7cf98  cbz x0,0x7101a7cfa4
7101a7cf9c  mov x26,x0
7101a7cfa0  b 0x7101a7cfe4
7101a7cfa4  adrp x8,0x7105332000
7101a7cfa8  ldr x0,[x8, #0xf00]
7101a7cfac  cbz x0,0x7101a7cfe0
7101a7cfb0  str wzr,[sp, #0x1d0]
7101a7cfb4  str x25,[sp, #0x10]
7101a7cfb8  ldr x8,[x0]
7101a7cfbc  ldr x8,[x8, #0x30]
7101a7cfc0  add x1,sp,#0x1d0
7101a7cfc4  add x2,sp,#0x10
7101a7cfc8  blr x8
7101a7cfcc  tbz w0,#0x0,0x7101a7cfe0
7101a7cfd0  mov w0,#0x10
7101a7cfd4  mov x1,x25
7101a7cfd8  bl 0x710392e290
7101a7cfdc  cbnz x0,0x7101a7cf9c
7101a7cfe0  mov x26,xzr
7101a7cfe4  add x19,x26,x24
7101a7cfe8  mov w8,#0x2
7101a7cfec  add x25,x26,x25
7101a7cff0  cmp x24,#0x1
7101a7cff4  strb w8,[x19], #0x1
7101a7cff8  b.lt 0x7101a7d00c
7101a7cffc  mov x0,x26
7101a7d000  mov x1,x23
7101a7d004  mov x2,x24
7101a7d008  bl 0x71039c00e0
7101a7d00c  ldr x8,[sp, #0x8]
7101a7d010  stp x26,x19,[x8, #0x1b8]
7101a7d014  mov x26,x8
7101a7d018  str x25,[x8, #0x1c8]
7101a7d01c  cbz x23,0x7101a7d02c
7101a7d020  mov x0,x23
7101a7d024  bl 0x710392eb40
7101a7d028  ldr x19,[x26, #0x1c0]
7101a7d02c  ldr x8,[x26, #0x1c8]
7101a7d030  cmp x19,x8
7101a7d034  b.cs 0x7101a7d050
7101a7d038  orr w8,wzr,#0x3
7101a7d03c  strb w8,[x19]
7101a7d040  ldr x8,[x26, #0x1c0]
7101a7d044  add x8,x8,#0x1
7101a7d048  str x8,[x26, #0x1c0]
7101a7d04c  b 0x7101a7d134
7101a7d050  ldr x23,[x22]
7101a7d054  sub x24,x19,x23
7101a7d058  adds x9,x24,#0x1
7101a7d05c  b.mi 0x7101a7ed58
7101a7d060  sub x8,x8,x23
7101a7d064  orr x10,xzr,#0x3ffffffffffffffe
7101a7d068  cmp x8,x10
7101a7d06c  b.hi 0x7101a7d084
7101a7d070  lsl x8,x8,#0x1
7101a7d074  cmp x8,x9
7101a7d078  csel x25,x9,x8,cc
7101a7d07c  cbnz x25,0x7101a7d088
7101a7d080  b 0x7101a7d0e0
7101a7d084  orr x25,xzr,#0x7fffffffffffffff
7101a7d088  mov w0,#0x10
7101a7d08c  mov x1,x25
7101a7d090  bl 0x710392e290
7101a7d094  cbz x0,0x7101a7d0a4
7101a7d098  mov x26,x0
7101a7d09c  mov w27,w28
7101a7d0a0  b 0x7101a7d0e8
7101a7d0a4  adrp x8,0x7105332000
7101a7d0a8  ldr x0,[x8, #0xf00]
7101a7d0ac  cbz x0,0x7101a7d0e0
7101a7d0b0  str wzr,[sp, #0x1d0]
7101a7d0b4  str x25,[sp, #0x10]
7101a7d0b8  ldr x8,[x0]
7101a7d0bc  ldr x8,[x8, #0x30]
7101a7d0c0  add x1,sp,#0x1d0
7101a7d0c4  add x2,sp,#0x10
7101a7d0c8  blr x8
7101a7d0cc  tbz w0,#0x0,0x7101a7d0e0
7101a7d0d0  mov w0,#0x10
7101a7d0d4  mov x1,x25
7101a7d0d8  bl 0x710392e290
7101a7d0dc  cbnz x0,0x7101a7d098
7101a7d0e0  mov w27,w28
7101a7d0e4  mov x26,xzr
7101a7d0e8  add x28,x26,x24
7101a7d0ec  orr w8,wzr,#0x3
7101a7d0f0  add x19,x26,x25
7101a7d0f4  cmp x24,#0x1
7101a7d0f8  strb w8,[x28], #0x1
7101a7d0fc  b.lt 0x7101a7d110
7101a7d100  mov x0,x26
7101a7d104  mov x1,x23
7101a7d108  mov x2,x24
7101a7d10c  bl 0x71039c00e0
7101a7d110  ldr x8,[sp, #0x8]
7101a7d114  stp x26,x28,[x8, #0x1b8]
7101a7d118  mov x26,x8
7101a7d11c  mov w28,w27
7101a7d120  add x27,sp,#0x200
7101a7d124  str x19,[x8, #0x1c8]
7101a7d128  cbz x23,0x7101a7d134
7101a7d12c  mov x0,x23
7101a7d130  bl 0x710392eb40
7101a7d134  add x8,sp,#0x1d0
7101a7d138  add x0,x8,#0x20
7101a7d13c  stp xzr,xzr,[sp, #0x1e0]
7101a7d140  bl 0x7103776290
7101a7d144  str wzr,[sp, #0x1d8]
7101a7d148  adrp x19,0x71052a8000
7101a7d14c  ldr x19,[x19, #0xa80]
7101a7d150  ldr q0,[x19]
7101a7d154  ldr x8,[sp, #0x1f8]
7101a7d158  adrp x1,0x71043ae000
7101a7d15c  add x1,x1,#0xcc
7101a7d160  str q0,[sp, #0x1e0]
7101a7d164  str xzr,[x8, #0x8]
7101a7d168  mov x8,#0x4
7101a7d16c  movk x8,#0x1, LSL #32
7101a7d170  str x8,[sp, #0x1d0]
7101a7d174  ldr x8,[x20]
7101a7d178  ldr x8,[x8]
7101a7d17c  add x0,x8,#0x8
7101a7d180  add x8,sp,#0x10
7101a7d184  bl 0x7103776640
7101a7d188  ldr x8,[sp, #0x18]
7101a7d18c  ldr x23,[sp, #0x1f8]
7101a7d190  str xzr,[sp, #0x18]
7101a7d194  str x8,[sp, #0x1f8]
7101a7d198  cbz x23,0x7101a7d1bc
7101a7d19c  ldr x0,[x23, #0x18]
7101a7d1a0  adrp x8,0x710523d000
7101a7d1a4  add x8,x8,#0x9a8
7101a7d1a8  stp x8,xzr,[x23, #0x10]
7101a7d1ac  cbz x0,0x7101a7d1b4
7101a7d1b0  bl 0x710392eb40
7101a7d1b4  mov x0,x23
7101a7d1b8  bl 0x710392eb40
7101a7d1bc  adrp x8,0x710523d000
7101a7d1c0  add x8,x8,#0x988
7101a7d1c4  stp x8,xzr,[sp, #0x10]
7101a7d1c8  ldr x8,[sp, #0x1f8]
7101a7d1cc  ldr x8,[x8, #0x18]
7101a7d1d0  ldr x8,[x8]
7101a7d1d4  cbz x8,0x7101a7d1f0
7101a7d1d8  movi v0.2D,#0x0
7101a7d1dc  add x9,x8,#0x30
7101a7d1e0  add x8,x8,#0x34
7101a7d1e4  ld1 {v0.S}[0],[x9]
7101a7d1e8  ld1 {v0.S}[1],[x8]
7101a7d1ec  b 0x7101a7d1f4
7101a7d1f0  ldr q0,[x19]
7101a7d1f4  str q0,[sp, #0x1e0]
7101a7d1f8  stp xzr,xzr,[sp, #0x1c0]
7101a7d1fc  str xzr,[sp, #0x1b8]
7101a7d200  ldp x8,x9,[x26, #0x1b8]
7101a7d204  cmp x9,x8
7101a7d208  b.eq 0x7101a7ed4c
7101a7d20c  ldrb w8,[x8]
7101a7d210  mov w23,#0x9dc5
7101a7d214  movk w23,#0x811c, LSL #16
7101a7d218  cmp w8,#0x3
7101a7d21c  b.hi 0x7101a7d698
7101a7d220  adrp x9,0x71044f7000
7101a7d224  add x9,x9,#0x9d0
7101a7d228  ldrsw x8,[x9, x8, LSL #0x2]
7101a7d22c  add x8,x8,x9
7101a7d230  br x8
7101a7d234  mov x9,#0x6e6d
7101a7d238  movk x9,#0x5f75, LSL #16
7101a7d23c  mov x8,#0x1a00000000
7101a7d240  movk x9,#0x706f, LSL #32
7101a7d244  movk x9,#0x6f70, LSL #48
7101a7d248  strb wzr,[sp, #0x32]
7101a7d24c  stp x8,x9,[sp, #0x10]
7101a7d250  mov x9,#0x656e
7101a7d254  movk x9,#0x746e, LSL #16
7101a7d258  movk x9,#0x5f73, LSL #32
7101a7d25c  movk x9,#0x6163, LSL #48
7101a7d260  str x9,[sp, #0x20]
7101a7d264  mov w9,#0x6472
7101a7d268  strh w9,[sp, #0x28]
7101a7d26c  mov x9,#0x735f
7101a7d270  movk x9,#0x726f, LSL #16
7101a7d274  add x10,sp,#0x10
7101a7d278  movk x9,#0x5f74, LSL #32
7101a7d27c  movk x9,#0x3030, LSL #48
7101a7d280  stur x9,[sp, #0x2a]
7101a7d284  add x8,x10,#0x9
7101a7d288  mov w10,#0x6d
7101a7d28c  mov w9,#0x89
7101a7d290  mov w11,w23
7101a7d294  mul w11,w11,w9
7101a7d298  and w10,w10,#0xff
7101a7d29c  eor w11,w11,w10
7101a7d2a0  ldrb w10,[x8], #0x1
7101a7d2a4  cbnz w10,0x7101a7d294
7101a7d2a8  b 0x7101a7d410
7101a7d2ac  mov x9,#0x6e6d
7101a7d2b0  movk x9,#0x5f75, LSL #16
7101a7d2b4  mov x8,#0x1a00000000
7101a7d2b8  movk x9,#0x706f, LSL #32
7101a7d2bc  movk x9,#0x6f70, LSL #48
7101a7d2c0  strb wzr,[sp, #0x32]
7101a7d2c4  stp x8,x9,[sp, #0x10]
7101a7d2c8  mov x9,#0x656e
7101a7d2cc  movk x9,#0x746e, LSL #16
7101a7d2d0  movk x9,#0x5f73, LSL #32
7101a7d2d4  movk x9,#0x6163, LSL #48
7101a7d2d8  str x9,[sp, #0x20]
7101a7d2dc  mov w9,#0x6472
7101a7d2e0  strh w9,[sp, #0x28]
7101a7d2e4  mov x9,#0x735f
7101a7d2e8  movk x9,#0x726f, LSL #16
7101a7d2ec  add x10,sp,#0x10
7101a7d2f0  movk x9,#0x5f74, LSL #32
7101a7d2f4  movk x9,#0x3230, LSL #48
7101a7d2f8  stur x9,[sp, #0x2a]
7101a7d2fc  add x8,x10,#0x9
7101a7d300  mov w10,#0x6d
7101a7d304  mov w9,#0x89
7101a7d308  mov w11,w23
7101a7d30c  mul w11,w11,w9
7101a7d310  and w10,w10,#0xff
7101a7d314  eor w11,w11,w10
7101a7d318  ldrb w10,[x8], #0x1
7101a7d31c  cbnz w10,0x7101a7d30c
7101a7d320  b 0x7101a7d410
7101a7d324  mov x9,#0x6e6d
7101a7d328  movk x9,#0x5f75, LSL #16
7101a7d32c  mov x8,#0x1a00000000
7101a7d330  movk x9,#0x706f, LSL #32
7101a7d334  movk x9,#0x6f70, LSL #48
7101a7d338  strb wzr,[sp, #0x32]
7101a7d33c  stp x8,x9,[sp, #0x10]
7101a7d340  mov x9,#0x656e
7101a7d344  movk x9,#0x746e, LSL #16
7101a7d348  movk x9,#0x5f73, LSL #32
7101a7d34c  movk x9,#0x6163, LSL #48
7101a7d350  str x9,[sp, #0x20]
7101a7d354  mov w9,#0x6472
7101a7d358  strh w9,[sp, #0x28]
7101a7d35c  mov x9,#0x735f
7101a7d360  movk x9,#0x726f, LSL #16
7101a7d364  add x10,sp,#0x10
7101a7d368  movk x9,#0x5f74, LSL #32
7101a7d36c  movk x9,#0x3330, LSL #48
7101a7d370  stur x9,[sp, #0x2a]
7101a7d374  add x8,x10,#0x9
7101a7d378  mov w10,#0x6d
7101a7d37c  mov w9,#0x89
7101a7d380  mov w11,w23
7101a7d384  mul w11,w11,w9
7101a7d388  and w10,w10,#0xff
7101a7d38c  eor w11,w11,w10
7101a7d390  ldrb w10,[x8], #0x1
7101a7d394  cbnz w10,0x7101a7d384
7101a7d398  b 0x7101a7d410
7101a7d39c  mov x9,#0x6e6d
7101a7d3a0  movk x9,#0x5f75, LSL #16
7101a7d3a4  mov x8,#0x1a00000000
7101a7d3a8  movk x9,#0x706f, LSL #32
7101a7d3ac  movk x9,#0x6f70, LSL #48
7101a7d3b0  strb wzr,[sp, #0x32]
7101a7d3b4  stp x8,x9,[sp, #0x10]
7101a7d3b8  mov x9,#0x656e
7101a7d3bc  movk x9,#0x746e, LSL #16
7101a7d3c0  movk x9,#0x5f73, LSL #32
7101a7d3c4  movk x9,#0x6163, LSL #48
7101a7d3c8  str x9,[sp, #0x20]
7101a7d3cc  mov w9,#0x6472
7101a7d3d0  strh w9,[sp, #0x28]
7101a7d3d4  mov x9,#0x735f
7101a7d3d8  movk x9,#0x726f, LSL #16
7101a7d3dc  add x10,sp,#0x10
7101a7d3e0  movk x9,#0x5f74, LSL #32
7101a7d3e4  movk x9,#0x3130, LSL #48
7101a7d3e8  stur x9,[sp, #0x2a]
7101a7d3ec  add x8,x10,#0x9
7101a7d3f0  mov w10,#0x6d
7101a7d3f4  mov w9,#0x89
7101a7d3f8  mov w11,w23
7101a7d3fc  mul w11,w11,w9
7101a7d400  and w10,w10,#0xff
7101a7d404  eor w11,w11,w10
7101a7d408  ldrb w10,[x8], #0x1
7101a7d40c  cbnz w10,0x7101a7d3fc
7101a7d410  str w11,[sp, #0x10]
7101a7d414  add x0,sp,#0x1b8
7101a7d418  add x1,sp,#0x10
7101a7d41c  bl 0x71019c1c50
7101a7d420  ldp x8,x9,[x26, #0x1b8]
7101a7d424  sub x9,x9,x8
7101a7d428  cmp x9,#0x1
7101a7d42c  b.ls 0x7101a7ed4c
7101a7d430  ldrb w8,[x8, #0x1]
7101a7d434  cmp w8,#0x3
7101a7d438  b.hi 0x7101a7d6a4
7101a7d43c  adrp x9,0x71044f7000
7101a7d440  add x9,x9,#0x9e0
7101a7d444  ldrsw x8,[x9, x8, LSL #0x2]
7101a7d448  add x8,x8,x9
7101a7d44c  br x8
7101a7d450  mov x9,#0x6e6d
7101a7d454  movk x9,#0x5f75, LSL #16
7101a7d458  mov x8,#0x1a00000000
7101a7d45c  movk x9,#0x706f, LSL #32
7101a7d460  movk x9,#0x6f70, LSL #48
7101a7d464  strb wzr,[sp, #0x32]
7101a7d468  stp x8,x9,[sp, #0x10]
7101a7d46c  mov x9,#0x656e
7101a7d470  movk x9,#0x746e, LSL #16
7101a7d474  movk x9,#0x5f73, LSL #32
7101a7d478  movk x9,#0x6163, LSL #48
7101a7d47c  str x9,[sp, #0x20]
7101a7d480  mov w9,#0x6472
7101a7d484  strh w9,[sp, #0x28]
7101a7d488  mov x9,#0x735f
7101a7d48c  movk x9,#0x726f, LSL #16
7101a7d490  add x10,sp,#0x10
7101a7d494  movk x9,#0x5f74, LSL #32
7101a7d498  movk x9,#0x3030, LSL #48
7101a7d49c  stur x9,[sp, #0x2a]
7101a7d4a0  add x8,x10,#0x9
7101a7d4a4  mov w10,#0x6d
7101a7d4a8  mov w9,#0x89
7101a7d4ac  mov w11,w23
7101a7d4b0  mul w11,w11,w9
7101a7d4b4  and w10,w10,#0xff
7101a7d4b8  eor w11,w11,w10
7101a7d4bc  ldrb w10,[x8], #0x1
7101a7d4c0  cbnz w10,0x7101a7d4b0
7101a7d4c4  b 0x7101a7d62c
7101a7d4c8  mov x9,#0x6e6d
7101a7d4cc  movk x9,#0x5f75, LSL #16
7101a7d4d0  mov x8,#0x1a00000000
7101a7d4d4  movk x9,#0x706f, LSL #32
7101a7d4d8  movk x9,#0x6f70, LSL #48
7101a7d4dc  strb wzr,[sp, #0x32]
7101a7d4e0  stp x8,x9,[sp, #0x10]
7101a7d4e4  mov x9,#0x656e
7101a7d4e8  movk x9,#0x746e, LSL #16
7101a7d4ec  movk x9,#0x5f73, LSL #32
7101a7d4f0  movk x9,#0x6163, LSL #48
7101a7d4f4  str x9,[sp, #0x20]
7101a7d4f8  mov w9,#0x6472
7101a7d4fc  strh w9,[sp, #0x28]
7101a7d500  mov x9,#0x735f
7101a7d504  movk x9,#0x726f, LSL #16
7101a7d508  add x10,sp,#0x10
7101a7d50c  movk x9,#0x5f74, LSL #32
7101a7d510  movk x9,#0x3230, LSL #48
7101a7d514  stur x9,[sp, #0x2a]
7101a7d518  add x8,x10,#0x9
7101a7d51c  mov w10,#0x6d
7101a7d520  mov w9,#0x89
7101a7d524  mov w11,w23
7101a7d528  mul w11,w11,w9
7101a7d52c  and w10,w10,#0xff
7101a7d530  eor w11,w11,w10
7101a7d534  ldrb w10,[x8], #0x1
7101a7d538  cbnz w10,0x7101a7d528
7101a7d53c  b 0x7101a7d62c
7101a7d540  mov x9,#0x6e6d
7101a7d544  movk x9,#0x5f75, LSL #16
7101a7d548  mov x8,#0x1a00000000
7101a7d54c  movk x9,#0x706f, LSL #32
7101a7d550  movk x9,#0x6f70, LSL #48
7101a7d554  strb wzr,[sp, #0x32]
7101a7d558  stp x8,x9,[sp, #0x10]
7101a7d55c  mov x9,#0x656e
7101a7d560  movk x9,#0x746e, LSL #16
7101a7d564  movk x9,#0x5f73, LSL #32
7101a7d568  movk x9,#0x6163, LSL #48
7101a7d56c  str x9,[sp, #0x20]
7101a7d570  mov w9,#0x6472
7101a7d574  strh w9,[sp, #0x28]
7101a7d578  mov x9,#0x735f
7101a7d57c  movk x9,#0x726f, LSL #16
7101a7d580  add x10,sp,#0x10
7101a7d584  movk x9,#0x5f74, LSL #32
7101a7d588  movk x9,#0x3330, LSL #48
7101a7d58c  stur x9,[sp, #0x2a]
7101a7d590  add x8,x10,#0x9
7101a7d594  mov w10,#0x6d
7101a7d598  mov w9,#0x89
7101a7d59c  mov w11,w23
7101a7d5a0  mul w11,w11,w9
7101a7d5a4  and w10,w10,#0xff
7101a7d5a8  eor w11,w11,w10
7101a7d5ac  ldrb w10,[x8], #0x1
7101a7d5b0  cbnz w10,0x7101a7d5a0
7101a7d5b4  b 0x7101a7d62c
7101a7d5b8  mov x9,#0x6e6d
7101a7d5bc  movk x9,#0x5f75, LSL #16
7101a7d5c0  mov x8,#0x1a00000000
7101a7d5c4  movk x9,#0x706f, LSL #32
7101a7d5c8  movk x9,#0x6f70, LSL #48
7101a7d5cc  strb wzr,[sp, #0x32]
7101a7d5d0  stp x8,x9,[sp, #0x10]
7101a7d5d4  mov x9,#0x656e
7101a7d5d8  movk x9,#0x746e, LSL #16
7101a7d5dc  movk x9,#0x5f73, LSL #32
7101a7d5e0  movk x9,#0x6163, LSL #48
7101a7d5e4  str x9,[sp, #0x20]
7101a7d5e8  mov w9,#0x6472
7101a7d5ec  strh w9,[sp, #0x28]
7101a7d5f0  mov x9,#0x735f
7101a7d5f4  movk x9,#0x726f, LSL #16
7101a7d5f8  add x10,sp,#0x10
7101a7d5fc  movk x9,#0x5f74, LSL #32
7101a7d600  movk x9,#0x3130, LSL #48
7101a7d604  stur x9,[sp, #0x2a]
7101a7d608  add x8,x10,#0x9
7101a7d60c  mov w10,#0x6d
7101a7d610  mov w9,#0x89
7101a7d614  mov w11,w23
7101a7d618  mul w11,w11,w9
7101a7d61c  and w10,w10,#0xff
7101a7d620  eor w11,w11,w10
7101a7d624  ldrb w10,[x8], #0x1
7101a7d628  cbnz w10,0x7101a7d618
7101a7d62c  str w11,[sp, #0x10]
7101a7d630  ldp x8,x9,[sp, #0x1c0]
7101a7d634  cmp x8,x9
7101a7d638  b.cs 0x7101a7d688
7101a7d63c  add x10,sp,#0x10
7101a7d640  mov x9,xzr
7101a7d644  str wzr,[x8]
7101a7d648  add x10,x10,#0x8
7101a7d64c  b 0x7101a7d658
7101a7d650  add x9,x9,#0x2
7101a7d654  strb w11,[x12, #0x9]
7101a7d658  add x11,x10,x9
7101a7d65c  ldrb w13,[x11]
7101a7d660  cbz w13,0x7101a7d6b4
7101a7d664  add w14,w9,#0x1
7101a7d668  add x12,x8,x9
7101a7d66c  cmp w14,#0x3f
7101a7d670  strb w13,[x12, #0x8]
7101a7d674  b.cs 0x7101a7d6b0
7101a7d678  ldrb w11,[x11, #0x1]
7101a7d67c  cbnz w11,0x7101a7d650
7101a7d680  add x9,x9,#0x1
7101a7d684  b 0x7101a7d6b4
7101a7d688  add x0,sp,#0x1b8
7101a7d68c  add x1,sp,#0x10
7101a7d690  bl 0x71019c1c50
7101a7d694  b 0x7101a7d6fc
7101a7d698  strb wzr,[sp, #0x18]
7101a7d69c  str xzr,[sp, #0x10]
7101a7d6a0  b 0x7101a7d414
7101a7d6a4  strb wzr,[sp, #0x18]
7101a7d6a8  str xzr,[sp, #0x10]
7101a7d6ac  b 0x7101a7d630
7101a7d6b0  add w9,w9,#0x1
7101a7d6b4  add x10,x8,#0x8
7101a7d6b8  strb wzr,[x10, w9, UXTW ]
7101a7d6bc  str w9,[x8, #0x4]
7101a7d6c0  ldrb w9,[x8, #0x8]
7101a7d6c4  mov w11,w23
7101a7d6c8  cbz w9,0x7101a7d6ec
7101a7d6cc  add x10,x8,#0x9
7101a7d6d0  mov w12,#0x89
7101a7d6d4  mov w11,w23
7101a7d6d8  mul w11,w11,w12
7101a7d6dc  and w9,w9,#0xff
7101a7d6e0  eor w11,w11,w9
7101a7d6e4  ldrb w9,[x10], #0x1
7101a7d6e8  cbnz w9,0x7101a7d6d8
7101a7d6ec  str w11,[x8]
7101a7d6f0  ldr x8,[sp, #0x1c0]
7101a7d6f4  add x8,x8,#0x48
7101a7d6f8  str x8,[sp, #0x1c0]
7101a7d6fc  ldp x8,x9,[x26, #0x1b8]
7101a7d700  sub x9,x9,x8
7101a7d704  cmp x9,#0x2
7101a7d708  b.ls 0x7101a7ed4c
7101a7d70c  ldrb w8,[x8, #0x2]
7101a7d710  cmp w8,#0x3
7101a7d714  b.hi 0x7101a7d974
7101a7d718  adrp x9,0x71044f7000
7101a7d71c  add x9,x9,#0x9f0
7101a7d720  ldrsw x8,[x9, x8, LSL #0x2]
7101a7d724  add x8,x8,x9
7101a7d728  br x8
7101a7d72c  mov x9,#0x6e6d
7101a7d730  movk x9,#0x5f75, LSL #16
7101a7d734  mov x8,#0x1a00000000
7101a7d738  movk x9,#0x706f, LSL #32
7101a7d73c  movk x9,#0x6f70, LSL #48
7101a7d740  strb wzr,[sp, #0x32]
7101a7d744  stp x8,x9,[sp, #0x10]
7101a7d748  mov x9,#0x656e
7101a7d74c  movk x9,#0x746e, LSL #16
7101a7d750  movk x9,#0x5f73, LSL #32
7101a7d754  movk x9,#0x6163, LSL #48
7101a7d758  str x9,[sp, #0x20]
7101a7d75c  mov w9,#0x6472
7101a7d760  strh w9,[sp, #0x28]
7101a7d764  mov x9,#0x735f
7101a7d768  movk x9,#0x726f, LSL #16
7101a7d76c  add x10,sp,#0x10
7101a7d770  movk x9,#0x5f74, LSL #32
7101a7d774  movk x9,#0x3030, LSL #48
7101a7d778  stur x9,[sp, #0x2a]
7101a7d77c  add x8,x10,#0x9
7101a7d780  mov w10,#0x6d
7101a7d784  mov w9,#0x89
7101a7d788  mov w11,w23
7101a7d78c  mul w11,w11,w9
7101a7d790  and w10,w10,#0xff
7101a7d794  eor w11,w11,w10
7101a7d798  ldrb w10,[x8], #0x1
7101a7d79c  cbnz w10,0x7101a7d78c
7101a7d7a0  b 0x7101a7d908
7101a7d7a4  mov x9,#0x6e6d
7101a7d7a8  movk x9,#0x5f75, LSL #16
7101a7d7ac  mov x8,#0x1a00000000
7101a7d7b0  movk x9,#0x706f, LSL #32
7101a7d7b4  movk x9,#0x6f70, LSL #48
7101a7d7b8  strb wzr,[sp, #0x32]
7101a7d7bc  stp x8,x9,[sp, #0x10]
7101a7d7c0  mov x9,#0x656e
7101a7d7c4  movk x9,#0x746e, LSL #16
7101a7d7c8  movk x9,#0x5f73, LSL #32
7101a7d7cc  movk x9,#0x6163, LSL #48
7101a7d7d0  str x9,[sp, #0x20]
7101a7d7d4  mov w9,#0x6472
7101a7d7d8  strh w9,[sp, #0x28]
7101a7d7dc  mov x9,#0x735f
7101a7d7e0  movk x9,#0x726f, LSL #16
7101a7d7e4  add x10,sp,#0x10
7101a7d7e8  movk x9,#0x5f74, LSL #32
7101a7d7ec  movk x9,#0x3230, LSL #48
7101a7d7f0  stur x9,[sp, #0x2a]
7101a7d7f4  add x8,x10,#0x9
7101a7d7f8  mov w10,#0x6d
7101a7d7fc  mov w9,#0x89
7101a7d800  mov w11,w23
7101a7d804  mul w11,w11,w9
7101a7d808  and w10,w10,#0xff
7101a7d80c  eor w11,w11,w10
7101a7d810  ldrb w10,[x8], #0x1
7101a7d814  cbnz w10,0x7101a7d804
7101a7d818  b 0x7101a7d908
7101a7d81c  mov x9,#0x6e6d
7101a7d820  movk x9,#0x5f75, LSL #16
7101a7d824  mov x8,#0x1a00000000
7101a7d828  movk x9,#0x706f, LSL #32
7101a7d82c  movk x9,#0x6f70, LSL #48
7101a7d830  strb wzr,[sp, #0x32]
7101a7d834  stp x8,x9,[sp, #0x10]
7101a7d838  mov x9,#0x656e
7101a7d83c  movk x9,#0x746e, LSL #16
7101a7d840  movk x9,#0x5f73, LSL #32
7101a7d844  movk x9,#0x6163, LSL #48
7101a7d848  str x9,[sp, #0x20]
7101a7d84c  mov w9,#0x6472
7101a7d850  strh w9,[sp, #0x28]
7101a7d854  mov x9,#0x735f
7101a7d858  movk x9,#0x726f, LSL #16
7101a7d85c  add x10,sp,#0x10
7101a7d860  movk x9,#0x5f74, LSL #32
7101a7d864  movk x9,#0x3330, LSL #48
7101a7d868  stur x9,[sp, #0x2a]
7101a7d86c  add x8,x10,#0x9
7101a7d870  mov w10,#0x6d
7101a7d874  mov w9,#0x89
7101a7d878  mov w11,w23
7101a7d87c  mul w11,w11,w9
7101a7d880  and w10,w10,#0xff
7101a7d884  eor w11,w11,w10
7101a7d888  ldrb w10,[x8], #0x1
7101a7d88c  cbnz w10,0x7101a7d87c
7101a7d890  b 0x7101a7d908
7101a7d894  mov x9,#0x6e6d
7101a7d898  movk x9,#0x5f75, LSL #16
7101a7d89c  mov x8,#0x1a00000000
7101a7d8a0  movk x9,#0x706f, LSL #32
7101a7d8a4  movk x9,#0x6f70, LSL #48
7101a7d8a8  strb wzr,[sp, #0x32]
7101a7d8ac  stp x8,x9,[sp, #0x10]
7101a7d8b0  mov x9,#0x656e
7101a7d8b4  movk x9,#0x746e, LSL #16
7101a7d8b8  movk x9,#0x5f73, LSL #32
7101a7d8bc  movk x9,#0x6163, LSL #48
7101a7d8c0  str x9,[sp, #0x20]
7101a7d8c4  mov w9,#0x6472
7101a7d8c8  strh w9,[sp, #0x28]
7101a7d8cc  mov x9,#0x735f
7101a7d8d0  movk x9,#0x726f, LSL #16
7101a7d8d4  add x10,sp,#0x10
7101a7d8d8  movk x9,#0x5f74, LSL #32
7101a7d8dc  movk x9,#0x3130, LSL #48
7101a7d8e0  stur x9,[sp, #0x2a]
7101a7d8e4  add x8,x10,#0x9
7101a7d8e8  mov w10,#0x6d
7101a7d8ec  mov w9,#0x89
7101a7d8f0  mov w11,w23
7101a7d8f4  mul w11,w11,w9
7101a7d8f8  and w10,w10,#0xff
7101a7d8fc  eor w11,w11,w10
7101a7d900  ldrb w10,[x8], #0x1
7101a7d904  cbnz w10,0x7101a7d8f4
7101a7d908  str w11,[sp, #0x10]
7101a7d90c  ldp x8,x9,[sp, #0x1c0]
7101a7d910  cmp x8,x9
7101a7d914  b.cs 0x7101a7d964
7101a7d918  add x10,sp,#0x10
7101a7d91c  mov x9,xzr
7101a7d920  str wzr,[x8]
7101a7d924  add x10,x10,#0x8
7101a7d928  b 0x7101a7d934
7101a7d92c  add x9,x9,#0x2
7101a7d930  strb w11,[x12, #0x9]
7101a7d934  add x11,x10,x9
7101a7d938  ldrb w13,[x11]
7101a7d93c  cbz w13,0x7101a7d984
7101a7d940  add w14,w9,#0x1
7101a7d944  add x12,x8,x9
7101a7d948  cmp w14,#0x3f
7101a7d94c  strb w13,[x12, #0x8]
7101a7d950  b.cs 0x7101a7d980
7101a7d954  ldrb w11,[x11, #0x1]
7101a7d958  cbnz w11,0x7101a7d92c
7101a7d95c  add x9,x9,#0x1
7101a7d960  b 0x7101a7d984
7101a7d964  add x0,sp,#0x1b8
7101a7d968  add x1,sp,#0x10
7101a7d96c  bl 0x71019c1c50
7101a7d970  b 0x7101a7d9cc
7101a7d974  strb wzr,[sp, #0x18]
7101a7d978  str xzr,[sp, #0x10]
7101a7d97c  b 0x7101a7d90c
7101a7d980  add w9,w9,#0x1
7101a7d984  add x10,x8,#0x8
7101a7d988  strb wzr,[x10, w9, UXTW ]
7101a7d98c  str w9,[x8, #0x4]
7101a7d990  ldrb w9,[x8, #0x8]
7101a7d994  mov w11,w23
7101a7d998  cbz w9,0x7101a7d9bc
7101a7d99c  add x10,x8,#0x9
7101a7d9a0  mov w12,#0x89
7101a7d9a4  mov w11,w23
7101a7d9a8  mul w11,w11,w12
7101a7d9ac  and w9,w9,#0xff
7101a7d9b0  eor w11,w11,w9
7101a7d9b4  ldrb w9,[x10], #0x1
7101a7d9b8  cbnz w9,0x7101a7d9a8
7101a7d9bc  str w11,[x8]
7101a7d9c0  ldr x8,[sp, #0x1c0]
7101a7d9c4  add x8,x8,#0x48
7101a7d9c8  str x8,[sp, #0x1c0]
7101a7d9cc  ldp x8,x9,[x26, #0x1b8]
7101a7d9d0  sub x9,x9,x8
7101a7d9d4  cmp x9,#0x3
7101a7d9d8  b.ls 0x7101a7ed4c
7101a7d9dc  ldrb w8,[x8, #0x3]
7101a7d9e0  cmp w8,#0x3
7101a7d9e4  b.hi 0x7101a7dc44
7101a7d9e8  adrp x9,0x71044f7000
7101a7d9ec  add x9,x9,#0xa00
7101a7d9f0  ldrsw x8,[x9, x8, LSL #0x2]
7101a7d9f4  add x8,x8,x9
7101a7d9f8  br x8
7101a7d9fc  mov x9,#0x6e6d
7101a7da00  movk x9,#0x5f75, LSL #16
7101a7da04  mov x8,#0x1a00000000
7101a7da08  movk x9,#0x706f, LSL #32
7101a7da0c  movk x9,#0x6f70, LSL #48
7101a7da10  strb wzr,[sp, #0x32]
7101a7da14  stp x8,x9,[sp, #0x10]
7101a7da18  mov x9,#0x656e
7101a7da1c  movk x9,#0x746e, LSL #16
7101a7da20  movk x9,#0x5f73, LSL #32
7101a7da24  movk x9,#0x6163, LSL #48
7101a7da28  str x9,[sp, #0x20]
7101a7da2c  mov w9,#0x6472
7101a7da30  strh w9,[sp, #0x28]
7101a7da34  mov x9,#0x735f
7101a7da38  movk x9,#0x726f, LSL #16
7101a7da3c  add x10,sp,#0x10
7101a7da40  movk x9,#0x5f74, LSL #32
7101a7da44  movk x9,#0x3030, LSL #48
7101a7da48  stur x9,[sp, #0x2a]
7101a7da4c  add x8,x10,#0x9
7101a7da50  mov w10,#0x6d
7101a7da54  mov w9,#0x89
7101a7da58  mov w11,w23
7101a7da5c  mul w11,w11,w9
7101a7da60  and w10,w10,#0xff
7101a7da64  eor w11,w11,w10
7101a7da68  ldrb w10,[x8], #0x1
7101a7da6c  cbnz w10,0x7101a7da5c
7101a7da70  b 0x7101a7dbd8
7101a7da74  mov x9,#0x6e6d
7101a7da78  movk x9,#0x5f75, LSL #16
7101a7da7c  mov x8,#0x1a00000000
7101a7da80  movk x9,#0x706f, LSL #32
7101a7da84  movk x9,#0x6f70, LSL #48
7101a7da88  strb wzr,[sp, #0x32]
7101a7da8c  stp x8,x9,[sp, #0x10]
7101a7da90  mov x9,#0x656e
7101a7da94  movk x9,#0x746e, LSL #16
7101a7da98  movk x9,#0x5f73, LSL #32
7101a7da9c  movk x9,#0x6163, LSL #48
7101a7daa0  str x9,[sp, #0x20]
7101a7daa4  mov w9,#0x6472
7101a7daa8  strh w9,[sp, #0x28]
7101a7daac  mov x9,#0x735f
7101a7dab0  movk x9,#0x726f, LSL #16
7101a7dab4  add x10,sp,#0x10
7101a7dab8  movk x9,#0x5f74, LSL #32
7101a7dabc  movk x9,#0x3230, LSL #48
7101a7dac0  stur x9,[sp, #0x2a]
7101a7dac4  add x8,x10,#0x9
7101a7dac8  mov w10,#0x6d
7101a7dacc  mov w9,#0x89
7101a7dad0  mov w11,w23
7101a7dad4  mul w11,w11,w9
7101a7dad8  and w10,w10,#0xff
7101a7dadc  eor w11,w11,w10
7101a7dae0  ldrb w10,[x8], #0x1
7101a7dae4  cbnz w10,0x7101a7dad4
7101a7dae8  b 0x7101a7dbd8
7101a7daec  mov x9,#0x6e6d
7101a7daf0  movk x9,#0x5f75, LSL #16
7101a7daf4  mov x8,#0x1a00000000
7101a7daf8  movk x9,#0x706f, LSL #32
7101a7dafc  movk x9,#0x6f70, LSL #48
7101a7db00  strb wzr,[sp, #0x32]
7101a7db04  stp x8,x9,[sp, #0x10]
7101a7db08  mov x9,#0x656e
7101a7db0c  movk x9,#0x746e, LSL #16
7101a7db10  movk x9,#0x5f73, LSL #32
7101a7db14  movk x9,#0x6163, LSL #48
7101a7db18  str x9,[sp, #0x20]
7101a7db1c  mov w9,#0x6472
7101a7db20  strh w9,[sp, #0x28]
7101a7db24  mov x9,#0x735f
7101a7db28  movk x9,#0x726f, LSL #16
7101a7db2c  add x10,sp,#0x10
7101a7db30  movk x9,#0x5f74, LSL #32
7101a7db34  movk x9,#0x3330, LSL #48
7101a7db38  stur x9,[sp, #0x2a]
7101a7db3c  add x8,x10,#0x9
7101a7db40  mov w10,#0x6d
7101a7db44  mov w9,#0x89
7101a7db48  mov w11,w23
7101a7db4c  mul w11,w11,w9
7101a7db50  and w10,w10,#0xff
7101a7db54  eor w11,w11,w10
7101a7db58  ldrb w10,[x8], #0x1
7101a7db5c  cbnz w10,0x7101a7db4c
7101a7db60  b 0x7101a7dbd8
7101a7db64  mov x9,#0x6e6d
7101a7db68  movk x9,#0x5f75, LSL #16
7101a7db6c  mov x8,#0x1a00000000
7101a7db70  movk x9,#0x706f, LSL #32
7101a7db74  movk x9,#0x6f70, LSL #48
7101a7db78  strb wzr,[sp, #0x32]
7101a7db7c  stp x8,x9,[sp, #0x10]
7101a7db80  mov x9,#0x656e
7101a7db84  movk x9,#0x746e, LSL #16
7101a7db88  movk x9,#0x5f73, LSL #32
7101a7db8c  movk x9,#0x6163, LSL #48
7101a7db90  str x9,[sp, #0x20]
7101a7db94  mov w9,#0x6472
7101a7db98  strh w9,[sp, #0x28]
7101a7db9c  mov x9,#0x735f
7101a7dba0  movk x9,#0x726f, LSL #16
7101a7dba4  add x10,sp,#0x10
7101a7dba8  movk x9,#0x5f74, LSL #32
7101a7dbac  movk x9,#0x3130, LSL #48
7101a7dbb0  stur x9,[sp, #0x2a]
7101a7dbb4  add x8,x10,#0x9
7101a7dbb8  mov w10,#0x6d
7101a7dbbc  mov w9,#0x89
7101a7dbc0  mov w11,w23
7101a7dbc4  mul w11,w11,w9
7101a7dbc8  and w10,w10,#0xff
7101a7dbcc  eor w11,w11,w10
7101a7dbd0  ldrb w10,[x8], #0x1
7101a7dbd4  cbnz w10,0x7101a7dbc4
7101a7dbd8  str w11,[sp, #0x10]
7101a7dbdc  ldp x8,x9,[sp, #0x1c0]
7101a7dbe0  cmp x8,x9
7101a7dbe4  b.cs 0x7101a7dc34
7101a7dbe8  add x10,sp,#0x10
7101a7dbec  mov x9,xzr
7101a7dbf0  str wzr,[x8]
7101a7dbf4  add x10,x10,#0x8
7101a7dbf8  b 0x7101a7dc04
7101a7dbfc  add x9,x9,#0x2
7101a7dc00  strb w11,[x12, #0x9]
7101a7dc04  add x11,x10,x9
7101a7dc08  ldrb w13,[x11]
7101a7dc0c  cbz w13,0x7101a7dc54
7101a7dc10  add w14,w9,#0x1
7101a7dc14  add x12,x8,x9
7101a7dc18  cmp w14,#0x3f
7101a7dc1c  strb w13,[x12, #0x8]
7101a7dc20  b.cs 0x7101a7dc50
7101a7dc24  ldrb w11,[x11, #0x1]
7101a7dc28  cbnz w11,0x7101a7dbfc
7101a7dc2c  add x9,x9,#0x1
7101a7dc30  b 0x7101a7dc54
7101a7dc34  add x0,sp,#0x1b8
7101a7dc38  add x1,sp,#0x10
7101a7dc3c  bl 0x71019c1c50
7101a7dc40  b 0x7101a7dc9c
7101a7dc44  strb wzr,[sp, #0x18]
7101a7dc48  str xzr,[sp, #0x10]
7101a7dc4c  b 0x7101a7dbdc
7101a7dc50  add w9,w9,#0x1
7101a7dc54  add x10,x8,#0x8
7101a7dc58  strb wzr,[x10, w9, UXTW ]
7101a7dc5c  str w9,[x8, #0x4]
7101a7dc60  ldrb w9,[x8, #0x8]
7101a7dc64  mov w11,w23
7101a7dc68  cbz w9,0x7101a7dc8c
7101a7dc6c  add x10,x8,#0x9
7101a7dc70  mov w12,#0x89
7101a7dc74  mov w11,w23
7101a7dc78  mul w11,w11,w12
7101a7dc7c  and w9,w9,#0xff
7101a7dc80  eor w11,w11,w9
7101a7dc84  ldrb w9,[x10], #0x1
7101a7dc88  cbnz w9,0x7101a7dc78
7101a7dc8c  str w11,[x8]
7101a7dc90  ldr x8,[sp, #0x1c0]
7101a7dc94  add x8,x8,#0x48
7101a7dc98  str x8,[sp, #0x1c0]
7101a7dc9c  ldr x8,[x26, #0x148]
7101a7dca0  ldr x8,[x8]
7101a7dca4  add x0,x8,#0x8
7101a7dca8  adrp x1,0x710436c000
7101a7dcac  add x1,x1,#0xc09
7101a7dcb0  add x8,sp,#0x10
7101a7dcb4  bl 0x7103776640
7101a7dcb8  ldp x25,x24,[sp, #0x1b8]
7101a7dcbc  str xzr,[sp, #0x1a0]
7101a7dcc0  stp xzr,xzr,[sp, #0x1a8]
7101a7dcc4  subs x22,x24,x25
7101a7dcc8  b.eq 0x7101a7de0c
7101a7dccc  mov x9,#0x8e39
7101a7dcd0  movk x9,#0x38e3, LSL #16
7101a7dcd4  asr x8,x22,#0x3
7101a7dcd8  movk x9,#0xe38e, LSL #32
7101a7dcdc  movk x9,#0x8e38, LSL #48
7101a7dce0  mul x19,x8,x9
7101a7dce4  mov x8,#0xe38f
7101a7dce8  movk x8,#0x8e38, LSL #16
7101a7dcec  movk x8,#0x38e3, LSL #32
7101a7dcf0  movk x8,#0x38e, LSL #48
7101a7dcf4  cmp x19,x8
7101a7dcf8  b.cs 0x7101a7ed60
7101a7dcfc  mov w0,#0x10
7101a7dd00  mov x1,x22
7101a7dd04  bl 0x710392e290
7101a7dd08  cbnz x0,0x7101a7dd4c
7101a7dd0c  adrp x8,0x7105332000
7101a7dd10  ldr x0,[x8, #0xf00]
7101a7dd14  cbz x0,0x7101a7dd48
7101a7dd18  str wzr,[sp, #0x160]
7101a7dd1c  str x22,[sp, #0x170]
7101a7dd20  ldr x8,[x0]
7101a7dd24  ldr x8,[x8, #0x30]
7101a7dd28  add x1,sp,#0x160
7101a7dd2c  add x2,sp,#0x170
7101a7dd30  blr x8
7101a7dd34  tbz w0,#0x0,0x7101a7dd48
7101a7dd38  mov w0,#0x10
7101a7dd3c  mov x1,x22
7101a7dd40  bl 0x710392e290
7101a7dd44  cbnz x0,0x7101a7dd4c
7101a7dd48  mov x0,xzr
7101a7dd4c  mov w8,#0x48
7101a7dd50  madd x8,x19,x8,x0
7101a7dd54  cmp x25,x24
7101a7dd58  stp x0,x0,[sp, #0x1a0]
7101a7dd5c  str x8,[sp, #0x1b0]
7101a7dd60  b.eq 0x7101a7de0c
7101a7dd64  mov w8,#0x89
7101a7dd68  mov x10,x0
7101a7dd6c  mov x9,xzr
7101a7dd70  str wzr,[x10], #0x8
7101a7dd74  add x11,x25,x9
7101a7dd78  ldrb w12,[x11, #0x8]
7101a7dd7c  cbz w12,0x7101a7ddbc
7101a7dd80  strb w12,[x10, x9, LSL ]
7101a7dd84  ldrb w13,[x11, #0x9]
7101a7dd88  cbz w13,0x7101a7ddb0
7101a7dd8c  add x12,x10,x9
7101a7dd90  strb w13,[x12, #0x1]
7101a7dd94  ldrb w11,[x11, #0xa]
7101a7dd98  cbz w11,0x7101a7ddb8
7101a7dd9c  add x9,x9,#0x3
7101a7dda0  cmp w9,#0x3f
7101a7dda4  strb w11,[x12, #0x2]
7101a7dda8  b.cc 0x7101a7dd74
7101a7ddac  b 0x7101a7ddbc
7101a7ddb0  add x9,x9,#0x1
7101a7ddb4  b 0x7101a7ddbc
7101a7ddb8  add x9,x9,#0x2
7101a7ddbc  add x10,x0,#0x8
7101a7ddc0  strb wzr,[x10, w9, UXTW ]
7101a7ddc4  str w9,[x0, #0x4]
7101a7ddc8  ldrb w9,[x0, #0x8]
7101a7ddcc  mov w11,w23
7101a7ddd0  cbz w9,0x7101a7ddf0
7101a7ddd4  add x10,x0,#0x9
7101a7ddd8  mov w11,w23
7101a7dddc  mul w11,w11,w8
7101a7dde0  and w9,w9,#0xff
7101a7dde4  eor w11,w11,w9
7101a7dde8  ldrb w9,[x10], #0x1
7101a7ddec  cbnz w9,0x7101a7dddc
7101a7ddf0  str w11,[x0]
7101a7ddf4  ldr x9,[sp, #0x1a8]
7101a7ddf8  add x25,x25,#0x48
7101a7ddfc  cmp x25,x24
7101a7de00  add x0,x9,#0x48
7101a7de04  str x0,[sp, #0x1a8]
7101a7de08  b.ne 0x7101a7dd68
7101a7de0c  add x0,x26,#0x168
7101a7de10  add x2,sp,#0x1a0
7101a7de14  add x3,sp,#0x1d0
7101a7de18  add x4,sp,#0x10
7101a7de1c  mov x1,x21
7101a7de20  bl 0x71032ccb70
7101a7de24  ldr x0,[sp, #0x1a0]
7101a7de28  cbz x0,0x7101a7de34
7101a7de2c  str x0,[sp, #0x1a8]
7101a7de30  bl 0x710392eb40
7101a7de34  ldr x21,[sp, #0x18]
7101a7de38  adrp x19,0x710523d000
7101a7de3c  add x19,x19,#0x988
7101a7de40  stp x19,xzr,[sp, #0x10]
7101a7de44  cbz x21,0x7101a7de68
7101a7de48  ldr x0,[x21, #0x18]
7101a7de4c  adrp x8,0x710523d000
7101a7de50  add x8,x8,#0x9a8
7101a7de54  stp x8,xzr,[x21, #0x10]
7101a7de58  cbz x0,0x7101a7de60
7101a7de5c  bl 0x710392eb40
7101a7de60  mov x0,x21
7101a7de64  bl 0x710392eb40
7101a7de68  ldr x0,[sp, #0x1b8]
7101a7de6c  cbz x0,0x7101a7de78
7101a7de70  str x0,[sp, #0x1c0]
7101a7de74  bl 0x710392eb40
7101a7de78  ldr x21,[sp, #0x1f8]
7101a7de7c  stp x19,xzr,[sp, #0x1f0]
7101a7de80  cbz x21,0x7101a7dea4
7101a7de84  ldr x0,[x21, #0x18]
7101a7de88  adrp x8,0x710523d000
7101a7de8c  add x8,x8,#0x9a8
7101a7de90  stp x8,xzr,[x21, #0x10]
7101a7de94  cbz x0,0x7101a7de9c
7101a7de98  bl 0x710392eb40
7101a7de9c  mov x0,x21
7101a7dea0  bl 0x710392eb40
7101a7dea4  ldr x0,[sp, #0x310]
7101a7dea8  add x8,sp,#0x200
7101a7deac  add x8,x8,#0xf0
7101a7deb0  cmp x8,x0
7101a7deb4  b.eq 0x7101a7dec8
7101a7deb8  cbz x0,0x7101a7ded4
7101a7debc  ldr x8,[x0]
7101a7dec0  ldr x8,[x8, #0x28]
7101a7dec4  b 0x7101a7ded0
7101a7dec8  ldr x8,[x0]
7101a7decc  ldr x8,[x8, #0x20]
7101a7ded0  blr x8
7101a7ded4  ldr x0,[sp, #0x2e0]
7101a7ded8  add x8,sp,#0x200
7101a7dedc  add x8,x8,#0xc0
7101a7dee0  cmp x8,x0
7101a7dee4  b.eq 0x7101a7def8
7101a7dee8  cbz x0,0x7101a7df04
7101a7deec  ldr x8,[x0]
7101a7def0  ldr x8,[x8, #0x28]
7101a7def4  b 0x7101a7df00
7101a7def8  ldr x8,[x0]
7101a7defc  ldr x8,[x8, #0x20]
7101a7df00  blr x8
7101a7df04  ldr x0,[sp, #0x2b0]
7101a7df08  add x8,sp,#0x200
7101a7df0c  add x8,x8,#0x90
7101a7df10  cmp x8,x0
7101a7df14  b.eq 0x7101a7df28
7101a7df18  cbz x0,0x7101a7df34
7101a7df1c  ldr x8,[x0]
7101a7df20  ldr x8,[x8, #0x28]
7101a7df24  b 0x7101a7df30
7101a7df28  ldr x8,[x0]
7101a7df2c  ldr x8,[x8, #0x20]
7101a7df30  blr x8
7101a7df34  ldr x8,[sp]
7101a7df38  ldr x0,[sp, #0x280]
7101a7df3c  add x21,x8,#0x8
7101a7df40  add x8,sp,#0x200
7101a7df44  add x8,x8,#0x60
7101a7df48  cmp x8,x0
7101a7df4c  b.eq 0x7101a7df60
7101a7df50  cbz x0,0x7101a7df6c
7101a7df54  ldr x8,[x0]
7101a7df58  ldr x8,[x8, #0x28]
7101a7df5c  b 0x7101a7df68
7101a7df60  ldr x8,[x0]
7101a7df64  ldr x8,[x8, #0x20]
7101a7df68  blr x8
7101a7df6c  ldr x0,[sp, #0x250]
7101a7df70  add x8,sp,#0x200
7101a7df74  add x8,x8,#0x30
7101a7df78  cmp x8,x0
7101a7df7c  b.eq 0x7101a7df90
7101a7df80  cbz x0,0x7101a7df9c
7101a7df84  ldr x8,[x0]
7101a7df88  ldr x8,[x8, #0x28]
7101a7df8c  b 0x7101a7df98
7101a7df90  ldr x8,[x0]
7101a7df94  ldr x8,[x8, #0x20]
7101a7df98  blr x8
7101a7df9c  adrp x1,0x710436b000
7101a7dfa0  add x1,x1,#0xd38
7101a7dfa4  add x8,sp,#0x1d0
7101a7dfa8  mov x0,x21
7101a7dfac  bl 0x7103776640
7101a7dfb0  adrp x1,0x7104349000
7101a7dfb4  add x1,x1,#0xd6f
7101a7dfb8  add x8,sp,#0x1b8
7101a7dfbc  add x0,sp,#0x1d0
7101a7dfc0  bl 0x7103776910
7101a7dfc4  adrp x24,0x710523d000
7101a7dfc8  add x24,x24,#0x9a8
7101a7dfcc  mov w0,#0x10
7101a7dfd0  mov w1,#0x20
7101a7dfd4  str x24,[sp, #0x190]
7101a7dfd8  bl 0x710392e290
7101a7dfdc  cbnz x0,0x7101a7e024
7101a7dfe0  adrp x8,0x7105332000
7101a7dfe4  ldr x0,[x8, #0xf00]
7101a7dfe8  cbz x0,0x7101a7e020
7101a7dfec  mov w8,#0x20
7101a7dff0  str wzr,[sp, #0x10]
7101a7dff4  add x1,sp,#0x10
7101a7dff8  str x8,[sp, #0x200]
7101a7dffc  ldr x8,[x0]
7101a7e000  ldr x8,[x8, #0x30]
7101a7e004  add x2,sp,#0x200
7101a7e008  blr x8
7101a7e00c  tbz w0,#0x0,0x7101a7e020
7101a7e010  mov w0,#0x10
7101a7e014  mov w1,#0x20
7101a7e018  bl 0x710392e290
7101a7e01c  cbnz x0,0x7101a7e024
7101a7e020  mov x0,xzr
7101a7e024  stp xzr,xzr,[x0, #0x10]
7101a7e028  mov x10,x0
7101a7e02c  stp xzr,xzr,[x0]
7101a7e030  ldr x8,[sp, #0x1c0]
7101a7e034  mov w1,#0x40000
7101a7e038  str x0,[sp, #0x198]
7101a7e03c  ldr x9,[x8]
7101a7e040  str x9,[x0]
7101a7e044  ldr x8,[x8, #0x8]
7101a7e048  str x8,[x0, #0x8]
7101a7e04c  ldr x8,[sp, #0x1c0]
7101a7e050  ldr x9,[x8, #0x10]
7101a7e054  str x9,[x10, #0x10]
7101a7e058  ldr x8,[x8, #0x18]
7101a7e05c  add x0,sp,#0x190
7101a7e060  str x8,[x10, #0x18]
7101a7e064  bl 0x710337cef0
7101a7e068  ldr x0,[sp, #0x198]
7101a7e06c  stp x24,xzr,[sp, #0x190]
7101a7e070  cbz x0,0x7101a7e078
7101a7e074  bl 0x710392eb40
7101a7e078  add x0,sp,#0x180
7101a7e07c  add x1,sp,#0x1d0
7101a7e080  bl 0x7103776390
7101a7e084  add x0,sp,#0x180
7101a7e088  bl 0x710337d360
7101a7e08c  ldr x22,[sp, #0x188]
7101a7e090  stp x19,xzr,[sp, #0x180]
7101a7e094  cbz x22,0x7101a7e0b0
7101a7e098  ldr x0,[x22, #0x18]
7101a7e09c  stp x24,xzr,[x22, #0x10]
7101a7e0a0  cbz x0,0x7101a7e0a8
7101a7e0a4  bl 0x710392eb40
7101a7e0a8  mov x0,x22
7101a7e0ac  bl 0x710392eb40
7101a7e0b0  adrp x1,0x71042b3000
7101a7e0b4  add x1,x1,#0xda4
7101a7e0b8  add x8,sp,#0x200
7101a7e0bc  mov x0,x21
7101a7e0c0  add x19,sp,#0x200
7101a7e0c4  bl 0x7103776910
7101a7e0c8  add x8,x26,#0x1e0
7101a7e0cc  cmp x8,x19
7101a7e0d0  b.eq 0x7101a7e0ec
7101a7e0d4  ldr x8,[sp, #0x208]
7101a7e0d8  str xzr,[sp, #0x208]
7101a7e0dc  ldr x0,[x26, #0x1e8]
7101a7e0e0  str x8,[x26, #0x1e8]
7101a7e0e4  cbz x0,0x7101a7e0ec
7101a7e0e8  bl 0x710392eb40
7101a7e0ec  ldr x0,[sp, #0x208]
7101a7e0f0  str x24,[sp, #0x200]
7101a7e0f4  str xzr,[sp, #0x208]
7101a7e0f8  cbz x0,0x7101a7e100
7101a7e0fc  bl 0x710392eb40
7101a7e100  adrp x1,0x71043ce000
7101a7e104  add x1,x1,#0xe7f
7101a7e108  add x8,sp,#0x200
7101a7e10c  mov x0,x21
7101a7e110  add x19,sp,#0x200
7101a7e114  bl 0x7103776910
7101a7e118  add x8,x26,#0x1f0
7101a7e11c  cmp x8,x19
7101a7e120  b.eq 0x7101a7e13c
7101a7e124  ldr x8,[sp, #0x208]
7101a7e128  str xzr,[sp, #0x208]
7101a7e12c  ldr x0,[x26, #0x1f8]
7101a7e130  str x8,[x26, #0x1f8]
7101a7e134  cbz x0,0x7101a7e13c
7101a7e138  bl 0x710392eb40
7101a7e13c  ldr x0,[sp, #0x208]
7101a7e140  str x24,[sp, #0x200]
7101a7e144  str xzr,[sp, #0x208]
7101a7e148  cbz x0,0x7101a7e150
7101a7e14c  bl 0x710392eb40
7101a7e150  adrp x1,0x710424e000
7101a7e154  add x1,x1,#0xf16
7101a7e158  add x8,sp,#0x170
7101a7e15c  mov x0,x21
7101a7e160  bl 0x7103776640
7101a7e164  adrp x1,0x71042b2000
7101a7e168  add x1,x1,#0x92e
7101a7e16c  add x8,sp,#0x160
7101a7e170  add x0,sp,#0x170
7101a7e174  bl 0x7103776910
7101a7e178  ldr x8,[x26, #0x1e8]
7101a7e17c  ldr x22,[x8, #0x10]
7101a7e180  cbz x22,0x7101a7e1d4
7101a7e184  add x0,sp,#0x200
7101a7e188  mov w1,#0x20
7101a7e18c  mov w2,wzr
7101a7e190  mov w3,wzr
7101a7e194  mov w4,wzr
7101a7e198  str xzr,[sp, #0x238]
7101a7e19c  mov w5,wzr
7101a7e1a0  str xzr,[sp, #0x230]
7101a7e1a4  str xzr,[sp, #0x228]
7101a7e1a8  str xzr,[sp, #0x220]
7101a7e1ac  str xzr,[sp, #0x218]
7101a7e1b0  str xzr,[sp, #0x210]
7101a7e1b4  str xzr,[sp, #0x208]
7101a7e1b8  str xzr,[sp, #0x200]
7101a7e1bc  bl 0x71037ad940
7101a7e1c0  mov w2,w0
7101a7e1c4  add x1,sp,#0x200
7101a7e1c8  mov x0,x22
7101a7e1cc  mov w3,wzr
7101a7e1d0  bl 0x71037a2270
7101a7e1d4  ldr x8,[x26, #0x1f8]
7101a7e1d8  ldr x22,[x8, #0x10]
7101a7e1dc  cbz x22,0x7101a7e230
7101a7e1e0  add x0,sp,#0x200
7101a7e1e4  mov w1,#0x20
7101a7e1e8  mov w2,wzr
7101a7e1ec  mov w3,wzr
7101a7e1f0  mov w4,wzr
7101a7e1f4  str xzr,[sp, #0x238]
7101a7e1f8  mov w5,wzr
7101a7e1fc  str xzr,[sp, #0x230]
7101a7e200  str xzr,[sp, #0x228]
7101a7e204  str xzr,[sp, #0x220]
7101a7e208  str xzr,[sp, #0x218]
7101a7e20c  str xzr,[sp, #0x210]
7101a7e210  str xzr,[sp, #0x208]
7101a7e214  str xzr,[sp, #0x200]
7101a7e218  bl 0x71037ad940
7101a7e21c  mov w2,w0
7101a7e220  add x1,sp,#0x200
7101a7e224  mov x0,x22
7101a7e228  mov w3,wzr
7101a7e22c  bl 0x71037a2270
7101a7e230  ldr x0,[x26, #0x278]
7101a7e234  add x8,sp,#0x160
7101a7e238  cmp x0,x8
7101a7e23c  b.eq 0x7101a7e27c
7101a7e240  ldr x8,[sp, #0x168]
7101a7e244  ldr x8,[x8]
7101a7e248  ldr x9,[x0, #0x8]
7101a7e24c  str x8,[x9]
7101a7e250  ldr x8,[sp, #0x168]
7101a7e254  ldr x8,[x8, #0x8]
7101a7e258  ldr x9,[x0, #0x8]
7101a7e25c  str x8,[x9, #0x8]
7101a7e260  ldr x8,[sp, #0x168]
7101a7e264  ldr x9,[x8, #0x10]
7101a7e268  ldr x10,[x0, #0x8]
7101a7e26c  str x9,[x10, #0x10]
7101a7e270  ldr x8,[x8, #0x18]
7101a7e274  ldr x9,[x0, #0x8]
7101a7e278  str x8,[x9, #0x18]
7101a7e27c  mov x8,xzr
7101a7e280  adrp x9,0x71042a2000
7101a7e284  add x9,x9,#0x9bc
7101a7e288  adrp x19,0x710523d000
7101a7e28c  add x19,x19,#0x988
7101a7e290  mov x22,#0x41f0000000000000
7101a7e294  b 0x7101a7e2a0
7101a7e298  add x8,x8,#0x2
7101a7e29c  strb w11,[x10, #0x19]
7101a7e2a0  add x11,x9,x8
7101a7e2a4  ldrb w12,[x11]
7101a7e2a8  cbz w12,0x7101a7e2c0
7101a7e2ac  add x10,x0,x8
7101a7e2b0  strb w12,[x10, #0x18]
7101a7e2b4  ldrb w11,[x11, #0x1]
7101a7e2b8  cbnz w11,0x7101a7e298
7101a7e2bc  add x8,x8,#0x1
7101a7e2c0  add x1,x0,#0x18
7101a7e2c4  strb wzr,[x1, w8, UXTW ]
7101a7e2c8  ldrb w9,[x0, #0x18]
7101a7e2cc  str w8,[x0, #0x14]
7101a7e2d0  cbz w9,0x7101a7e2f0
7101a7e2d4  add x8,x0,#0x19
7101a7e2d8  mov w10,#0x89
7101a7e2dc  mul w11,w23,w10
7101a7e2e0  and w9,w9,#0xff
7101a7e2e4  eor w23,w11,w9
7101a7e2e8  ldrb w9,[x8], #0x1
7101a7e2ec  cbnz w9,0x7101a7e2dc
7101a7e2f0  ldr w3,[x0, #0x94]
7101a7e2f4  mov w2,#0x1
7101a7e2f8  str w23,[x0, #0x10]
7101a7e2fc  bl 0x710377a280
7101a7e300  ldr x0,[x26, #0x278]
7101a7e304  adrp x2,0x7104464000
7101a7e308  add x2,x2,#0x38d
7101a7e30c  adrp x3,0x7104348000
7101a7e310  add x3,x3,#0xacf
7101a7e314  add x1,sp,#0x170
7101a7e318  bl 0x7103399a70
7101a7e31c  adrp x8,0x7105314000
7101a7e320  ldr x8,[x8, #0x510]
7101a7e324  ldr x8,[x8]
7101a7e328  ldr x8,[x8, #0x1b8]
7101a7e32c  ldr x8,[x8]
7101a7e330  ldr x8,[x8]
7101a7e334  ldr x0,[x26, #0x278]
7101a7e338  ldr w3,[x8]
7101a7e33c  ldr w8,[x0, #0x94]
7101a7e340  cmp w8,w3
7101a7e344  b.eq 0x7101a7e358
7101a7e348  add x1,x0,#0x18
7101a7e34c  mov w2,#0x1
7101a7e350  str w3,[x0, #0x94]
7101a7e354  bl 0x710377a280
7101a7e358  adrp x1,0x71042b3000
7101a7e35c  add x1,x1,#0xdb6
7101a7e360  add x8,sp,#0x200
7101a7e364  mov x0,x21
7101a7e368  bl 0x7103776640
7101a7e36c  adrp x1,0x71042a1000
7101a7e370  add x1,x1,#0xaf1
7101a7e374  add x8,sp,#0x150
7101a7e378  add x0,sp,#0x200
7101a7e37c  bl 0x7103776910
7101a7e380  ldr x21,[sp, #0x208]
7101a7e384  str x19,[sp, #0x200]
7101a7e388  str xzr,[sp, #0x208]
7101a7e38c  cbz x21,0x7101a7e3a8
7101a7e390  ldr x0,[x21, #0x18]
7101a7e394  stp x24,xzr,[x21, #0x10]
7101a7e398  cbz x0,0x7101a7e3a0
7101a7e39c  bl 0x710392eb40
7101a7e3a0  mov x0,x21
7101a7e3a4  bl 0x710392eb40
7101a7e3a8  mov w0,#0x10
7101a7e3ac  mov w1,#0x20
7101a7e3b0  str x24,[sp, #0x140]
7101a7e3b4  bl 0x710392e290
7101a7e3b8  cbnz x0,0x7101a7e400
7101a7e3bc  adrp x8,0x7105332000
7101a7e3c0  ldr x0,[x8, #0xf00]
7101a7e3c4  cbz x0,0x7101a7e3fc
7101a7e3c8  mov w8,#0x20
7101a7e3cc  str wzr,[sp, #0x10]
7101a7e3d0  add x1,sp,#0x10
7101a7e3d4  str x8,[sp, #0x200]
7101a7e3d8  ldr x8,[x0]
7101a7e3dc  ldr x8,[x8, #0x30]
7101a7e3e0  add x2,sp,#0x200
7101a7e3e4  blr x8
7101a7e3e8  tbz w0,#0x0,0x7101a7e3fc
7101a7e3ec  mov w0,#0x10
7101a7e3f0  mov w1,#0x20
7101a7e3f4  bl 0x710392e290
7101a7e3f8  cbnz x0,0x7101a7e400
7101a7e3fc  mov x0,xzr
7101a7e400  stp xzr,xzr,[x0, #0x10]
7101a7e404  mov x10,x0
7101a7e408  stp xzr,xzr,[x0]
7101a7e40c  ldr x8,[sp, #0x158]
7101a7e410  mov w1,#0x20
7101a7e414  str x0,[sp, #0x148]
7101a7e418  ldr x9,[x8]
7101a7e41c  str x9,[x0]
7101a7e420  ldr x8,[x8, #0x8]
7101a7e424  str x8,[x0, #0x8]
7101a7e428  ldr x8,[sp, #0x158]
7101a7e42c  ldr x9,[x8, #0x10]
7101a7e430  str x9,[x10, #0x10]
7101a7e434  ldr x8,[x8, #0x18]
7101a7e438  add x0,sp,#0x140
7101a7e43c  str x8,[x10, #0x18]
7101a7e440  bl 0x710337cef0
7101a7e444  ldr x0,[sp, #0x148]
7101a7e448  stp x24,xzr,[sp, #0x140]
7101a7e44c  cbz x0,0x7101a7e454
7101a7e450  bl 0x710392eb40
7101a7e454  mov w8,#0x1
7101a7e458  str xzr,[sp, #0x200]
7101a7e45c  strh w28,[sp, #0x208]
7101a7e460  stur wzr,[x27, #0xa]
7101a7e464  add x19,sp,#0x10
7101a7e468  add x0,sp,#0x10
7101a7e46c  str w8,[sp, #0x210]
7101a7e470  strh w8,[sp, #0x214]
7101a7e474  strb w8,[sp, #0x216]
7101a7e478  add x8,sp,#0x200
7101a7e47c  add x1,x8,#0x30
7101a7e480  adrp x8,0x71050a9000
7101a7e484  add x8,x8,#0x48
7101a7e488  strh wzr,[sp, #0x20e]
7101a7e48c  str x22,[sp, #0x218]
7101a7e490  str wzr,[sp, #0x220]
7101a7e494  str xzr,[sp, #0x250]
7101a7e498  str xzr,[sp, #0x280]
7101a7e49c  str xzr,[sp, #0x2b0]
7101a7e4a0  str xzr,[sp, #0x2e0]
7101a7e4a4  str xzr,[sp, #0x310]
7101a7e4a8  str wzr,[sp, #0x320]
7101a7e4ac  str x19,[sp, #0x30]
7101a7e4b0  stp x8,x26,[sp, #0x10]
7101a7e4b4  bl 0x7101a7ed70
7101a7e4b8  ldr x0,[sp, #0x30]
7101a7e4bc  cmp x19,x0
7101a7e4c0  b.eq 0x7101a7e4d4
7101a7e4c4  cbz x0,0x7101a7e4e0
7101a7e4c8  ldr x8,[x0]
7101a7e4cc  ldr x8,[x8, #0x28]
7101a7e4d0  b 0x7101a7e4dc
7101a7e4d4  ldr x8,[x0]
7101a7e4d8  ldr x8,[x8, #0x20]
7101a7e4dc  blr x8
7101a7e4e0  ldr x8,[x26, #0x148]
7101a7e4e4  ldr x8,[x8]
7101a7e4e8  add x21,x26,#0x190
7101a7e4ec  adrp x2,0x71043e0000
7101a7e4f0  add x2,x2,#0xa21
7101a7e4f4  add x3,sp,#0x200
7101a7e4f8  mov x0,x21
7101a7e4fc  add x1,x8,#0x8
7101a7e500  bl 0x7103770b30
7101a7e504  adrp x2,0x71043ae000
7101a7e508  add x2,x2,#0xcc
7101a7e50c  mov x0,x21
7101a7e510  mov w1,wzr
7101a7e514  bl 0x71037717d0
7101a7e518  mov x0,x21
7101a7e51c  mov w1,wzr
7101a7e520  mov w2,wzr
7101a7e524  bl 0x7103771a80
7101a7e528  ldr x0,[x26, #0x190]
7101a7e52c  ldr x8,[x0]
7101a7e530  ldr x8,[x8, #0x60]
7101a7e534  mov w1,#0x1
7101a7e538  mov w19,#0x1
7101a7e53c  blr x8
7101a7e540  ldr x0,[x26, #0x190]
7101a7e544  ldr x8,[x0]
7101a7e548  ldr x8,[x8, #0x70]
7101a7e54c  mov w1,wzr
7101a7e550  blr x8
7101a7e554  ldr x8,[x26, #0x148]
7101a7e558  ldr x8,[x8]
7101a7e55c  add x21,x26,#0x198
7101a7e560  adrp x2,0x7104401000
7101a7e564  add x2,x2,#0xbc0
7101a7e568  add x3,sp,#0x200
7101a7e56c  mov x0,x21
7101a7e570  add x1,x8,#0x8
7101a7e574  bl 0x7103770b30
7101a7e578  adrp x2,0x710436b000
7101a7e57c  add x2,x2,#0xd38
7101a7e580  mov w1,#0x1
7101a7e584  mov x0,x21
7101a7e588  bl 0x71037717d0
7101a7e58c  mov w1,#0x1
7101a7e590  mov w2,#0x1
7101a7e594  mov x0,x21
7101a7e598  bl 0x7103771a80
7101a7e59c  ldr x0,[x26, #0x198]
7101a7e5a0  ldr x8,[x0]
7101a7e5a4  ldr x8,[x8, #0x60]
7101a7e5a8  mov w1,#0x1
7101a7e5ac  blr x8
7101a7e5b0  str xzr,[sp, #0x10]
7101a7e5b4  strh w28,[sp, #0x18]
7101a7e5b8  add x8,sp,#0x10
7101a7e5bc  stur wzr,[sp, #0x1a]
7101a7e5c0  add x21,x26,#0x1a0
7101a7e5c4  adrp x2,0x7104433000
7101a7e5c8  add x2,x2,#0x952
7101a7e5cc  strh wzr,[sp, #0x1e]
7101a7e5d0  add x3,sp,#0x10
7101a7e5d4  str w19,[sp, #0x20]
7101a7e5d8  mov x0,x21
7101a7e5dc  strh w19,[sp, #0x24]
7101a7e5e0  strb w19,[sp, #0x26]
7101a7e5e4  str x22,[sp, #0x28]
7101a7e5e8  add x22,x8,#0xf0
7101a7e5ec  str wzr,[sp, #0x30]
7101a7e5f0  str xzr,[sp, #0x60]
7101a7e5f4  str xzr,[sp, #0x90]
7101a7e5f8  str xzr,[sp, #0xc0]
7101a7e5fc  str xzr,[sp, #0xf0]
7101a7e600  str xzr,[sp, #0x120]
7101a7e604  str wzr,[sp, #0x130]
7101a7e608  strb w19,[sp, #0x1b]
7101a7e60c  ldr x8,[x26, #0x148]
7101a7e610  ldr x8,[x8]
7101a7e614  add x1,x8,#0x8
7101a7e618  bl 0x7103770b30
7101a7e61c  adrp x2,0x71042c4000
7101a7e620  add x2,x2,#0x821
7101a7e624  mov x0,x21
7101a7e628  mov w1,wzr
7101a7e62c  bl 0x71037717d0
7101a7e630  adrp x2,0x7104432000
7101a7e634  add x2,x2,#0xacf
7101a7e638  mov w1,#0x1
7101a7e63c  mov x0,x21
7101a7e640  bl 0x71037717d0
7101a7e644  adrp x2,0x710426f000
7101a7e648  add x2,x2,#0xa98
7101a7e64c  mov w1,#0x2
7101a7e650  mov x0,x21
7101a7e654  bl 0x71037717d0
7101a7e658  adrp x2,0x7104432000
7101a7e65c  add x2,x2,#0xae8
7101a7e660  orr w1,wzr,#0x3
7101a7e664  mov x0,x21
7101a7e668  bl 0x71037717d0
7101a7e66c  ldr x0,[x26, #0x1a0]
7101a7e670  ldr x8,[x0]
7101a7e674  ldr x8,[x8, #0x60]
7101a7e678  mov w1,#0x1
7101a7e67c  blr x8
7101a7e680  ldr x0,[sp, #0x120]
7101a7e684  cmp x22,x0
7101a7e688  b.eq 0x7101a7e69c
7101a7e68c  cbz x0,0x7101a7e6a8
7101a7e690  ldr x8,[x0]
7101a7e694  ldr x8,[x8, #0x28]
7101a7e698  b 0x7101a7e6a4
7101a7e69c  ldr x8,[x0]
7101a7e6a0  ldr x8,[x8, #0x20]
7101a7e6a4  blr x8
7101a7e6a8  ldr x0,[sp, #0xf0]
7101a7e6ac  add x8,sp,#0x10
7101a7e6b0  add x8,x8,#0xc0
7101a7e6b4  cmp x8,x0
7101a7e6b8  b.eq 0x7101a7e6cc
7101a7e6bc  cbz x0,0x7101a7e6d8
7101a7e6c0  ldr x8,[x0]
7101a7e6c4  ldr x8,[x8, #0x28]
7101a7e6c8  b 0x7101a7e6d4
7101a7e6cc  ldr x8,[x0]
7101a7e6d0  ldr x8,[x8, #0x20]
7101a7e6d4  blr x8
7101a7e6d8  ldr x0,[sp, #0xc0]
7101a7e6dc  add x8,sp,#0x10
7101a7e6e0  add x8,x8,#0x90
7101a7e6e4  cmp x8,x0
7101a7e6e8  b.eq 0x7101a7e6fc
7101a7e6ec  cbz x0,0x7101a7e708
7101a7e6f0  ldr x8,[x0]
7101a7e6f4  ldr x8,[x8, #0x28]
7101a7e6f8  b 0x7101a7e704
7101a7e6fc  ldr x8,[x0]
7101a7e700  ldr x8,[x8, #0x20]
7101a7e704  blr x8
7101a7e708  ldr x0,[sp, #0x90]
7101a7e70c  add x8,sp,#0x10
7101a7e710  add x8,x8,#0x60
7101a7e714  cmp x8,x0
7101a7e718  b.eq 0x7101a7e72c
7101a7e71c  cbz x0,0x7101a7e738
7101a7e720  ldr x8,[x0]
7101a7e724  ldr x8,[x8, #0x28]
7101a7e728  b 0x7101a7e734
7101a7e72c  ldr x8,[x0]
7101a7e730  ldr x8,[x8, #0x20]
7101a7e734  blr x8
7101a7e738  ldr x0,[sp, #0x60]
7101a7e73c  add x8,sp,#0x10
7101a7e740  add x8,x8,#0x30
7101a7e744  cmp x8,x0
7101a7e748  b.eq 0x7101a7e75c
7101a7e74c  cbz x0,0x7101a7e768
7101a7e750  ldr x8,[x0]
7101a7e754  ldr x8,[x8, #0x28]
7101a7e758  b 0x7101a7e764
7101a7e75c  ldr x8,[x0]
7101a7e760  ldr x8,[x8, #0x20]
7101a7e764  blr x8
7101a7e768  ldr x0,[sp, #0x310]
7101a7e76c  add x8,sp,#0x200
7101a7e770  add x8,x8,#0xf0
7101a7e774  cmp x8,x0
7101a7e778  b.eq 0x7101a7e78c
7101a7e77c  cbz x0,0x7101a7e798
7101a7e780  ldr x8,[x0]
7101a7e784  ldr x8,[x8, #0x28]
7101a7e788  b 0x7101a7e794
7101a7e78c  ldr x8,[x0]
7101a7e790  ldr x8,[x8, #0x20]
7101a7e794  blr x8
7101a7e798  ldr x0,[sp, #0x2e0]
7101a7e79c  add x8,sp,#0x200
7101a7e7a0  add x8,x8,#0xc0
7101a7e7a4  cmp x8,x0
7101a7e7a8  b.eq 0x7101a7e7bc
7101a7e7ac  cbz x0,0x7101a7e7c8
7101a7e7b0  ldr x8,[x0]
7101a7e7b4  ldr x8,[x8, #0x28]
7101a7e7b8  b 0x7101a7e7c4
7101a7e7bc  ldr x8,[x0]
7101a7e7c0  ldr x8,[x8, #0x20]
7101a7e7c4  blr x8
7101a7e7c8  ldr x0,[sp, #0x2b0]
7101a7e7cc  add x8,sp,#0x200
7101a7e7d0  add x8,x8,#0x90
7101a7e7d4  cmp x8,x0
7101a7e7d8  b.eq 0x7101a7e7ec
7101a7e7dc  cbz x0,0x7101a7e7f8
7101a7e7e0  ldr x8,[x0]
7101a7e7e4  ldr x8,[x8, #0x28]
7101a7e7e8  b 0x7101a7e7f4
7101a7e7ec  ldr x8,[x0]
7101a7e7f0  ldr x8,[x8, #0x20]
7101a7e7f4  blr x8
7101a7e7f8  ldr x0,[sp, #0x280]
7101a7e7fc  add x8,sp,#0x200
7101a7e800  add x8,x8,#0x60
7101a7e804  cmp x8,x0
7101a7e808  b.eq 0x7101a7e81c
7101a7e80c  cbz x0,0x7101a7e828
7101a7e810  ldr x8,[x0]
7101a7e814  ldr x8,[x8, #0x28]
7101a7e818  b 0x7101a7e824
7101a7e81c  ldr x8,[x0]
7101a7e820  ldr x8,[x8, #0x20]
7101a7e824  blr x8
7101a7e828  ldr x0,[sp, #0x250]
7101a7e82c  add x8,sp,#0x200
7101a7e830  add x8,x8,#0x30
7101a7e834  cmp x8,x0
7101a7e838  b.eq 0x7101a7e84c
7101a7e83c  cbz x0,0x7101a7e858
7101a7e840  ldr x8,[x0]
7101a7e844  ldr x8,[x8, #0x28]
7101a7e848  b 0x7101a7e854
7101a7e84c  ldr x8,[x0]
7101a7e850  ldr x8,[x8, #0x20]
7101a7e854  blr x8
7101a7e858  ldr x8,[x20]
7101a7e85c  ldr x8,[x8]
7101a7e860  add x0,x8,#0x8
7101a7e864  adrp x1,0x710426f000
7101a7e868  add x1,x1,#0xa98
7101a7e86c  add x8,sp,#0x200
7101a7e870  bl 0x7103776640
7101a7e874  mov w0,#0x10
7101a7e878  mov w1,#0x8
7101a7e87c  bl 0x710392e290
7101a7e880  mov x22,x0
7101a7e884  cbnz x0,0x7101a7e8d0
7101a7e888  adrp x8,0x7105332000
7101a7e88c  ldr x0,[x8, #0xf00]
7101a7e890  cbz x0,0x7101a7e8cc
7101a7e894  mov w8,#0x8
7101a7e898  stur wzr,[x29, #-0x64]
7101a7e89c  sub x1,x29,#0x64
7101a7e8a0  str x8,[sp, #0x10]
7101a7e8a4  ldr x8,[x0]
7101a7e8a8  ldr x8,[x8, #0x30]
7101a7e8ac  add x2,sp,#0x10
7101a7e8b0  blr x8
7101a7e8b4  tbz w0,#0x0,0x7101a7e8cc
7101a7e8b8  mov w0,#0x10
7101a7e8bc  mov w1,#0x8
7101a7e8c0  bl 0x710392e290
7101a7e8c4  mov x22,x0
7101a7e8c8  cbnz x0,0x7101a7e8d0
7101a7e8cc  mov x22,xzr
7101a7e8d0  str xzr,[x22]
7101a7e8d4  ldr x21,[sp, #0x208]
7101a7e8d8  ldr x8,[x21, #0x8]
7101a7e8dc  cbz x8,0x7101a7e8f8
7101a7e8e0  ldr x0,[x8, #0x60]
7101a7e8e4  cbz x0,0x7101a7e8fc
7101a7e8e8  ldr x8,[x8, #0x18]
7101a7e8ec  add x1,x8,#0xb0
7101a7e8f0  bl 0x7103796f20
7101a7e8f4  b 0x7101a7e8fc
7101a7e8f8  mov x0,xzr
7101a7e8fc  str x0,[x22]
7101a7e900  ldr x0,[x26, #0x1b0]
7101a7e904  str x22,[x26, #0x1b0]
7101a7e908  cbz x0,0x7101a7e910
7101a7e90c  bl 0x710392eb40
7101a7e910  adrp x22,0x710523d000
7101a7e914  add x22,x22,#0x988
7101a7e918  str x22,[sp, #0x200]
7101a7e91c  str xzr,[sp, #0x208]
7101a7e920  cbz x21,0x7101a7e93c
7101a7e924  ldr x0,[x21, #0x18]
7101a7e928  stp x24,xzr,[x21, #0x10]
7101a7e92c  cbz x0,0x7101a7e934
7101a7e930  bl 0x710392eb40
7101a7e934  mov x0,x21
7101a7e938  bl 0x710392eb40
7101a7e93c  ldr x8,[x20]
7101a7e940  ldr x8,[x8]
7101a7e944  ldr x0,[x8, #0x10]
7101a7e948  fmov s0,0x3f800000
7101a7e94c  adrp x1,0x7104432000
7101a7e950  add x1,x1,#0xabf
7101a7e954  bl 0x7103778300
7101a7e958  ldr x8,[x20]
7101a7e95c  ldr x8,[x8]
7101a7e960  ldr x8,[x8]
7101a7e964  ldr x9,[x8, #0x600]
7101a7e968  mov w10,#0x40
7101a7e96c  str w10,[x9, #0x14]
7101a7e970  ldr x9,[x8, #0x600]
7101a7e974  mov w10,#0x20
7101a7e978  str w10,[x9, #0x10]
7101a7e97c  ldr x9,[x8, #0x600]
7101a7e980  str w10,[x9, #0x18]
7101a7e984  ldr x9,[x8, #0x600]
7101a7e988  mov w10,#0x200
7101a7e98c  str w10,[x9, #0x1c]
7101a7e990  ldr x9,[x8, #0x600]
7101a7e994  mov w10,#0x10
7101a7e998  str w10,[x9, #0x20]
7101a7e99c  ldr x9,[x8, #0x600]
7101a7e9a0  mov w10,#0x80
7101a7e9a4  str w10,[x9, #0x24]
7101a7e9a8  ldr x8,[x8, #0x600]
7101a7e9ac  mov w9,#0x40000
7101a7e9b0  str w9,[x8, #0x28]
7101a7e9b4  adrp x8,0x710532f000
7101a7e9b8  ldr x8,[x8, #0x730]
7101a7e9bc  str xzr,[sp, #0x210]
7101a7e9c0  str xzr,[sp, #0x208]
7101a7e9c4  str xzr,[sp, #0x200]
7101a7e9c8  ldr x27,[x8, #0x8]
7101a7e9cc  ldr x8,[x27, #0x2e8]
7101a7e9d0  ldr x9,[x8, #0x8]
7101a7e9d4  ldr x8,[x9, #0x20]
7101a7e9d8  ldrb w10,[x8]
7101a7e9dc  cmp w10,#0xc
7101a7e9e0  b.ne 0x7101a7ea64
7101a7e9e4  ldur w10,[x8, #0x1]
7101a7e9e8  subs w10,w10,#0x1
7101a7e9ec  b.lt 0x7101a7ea64
7101a7e9f0  ldr x12,[x9, #0x48]
7101a7e9f4  ldr x9,[x9, #0x18]
7101a7e9f8  mov w11,wzr
7101a7e9fc  ldursw x14,[x8, #0x5]
7101a7ea00  and x12,x12,#0xffffffffff
7101a7ea04  ldp x13,x9,[x9, #0x20]
7101a7ea08  add x14,x9,x14
7101a7ea0c  adrp x9,0x7104742000
7101a7ea10  add x9,x9,#0xdbb
7101a7ea14  add w15,w10,w11
7101a7ea18  cmp w15,#0x0
7101a7ea1c  cinc w15,w15,lt
7101a7ea20  asr w15,w15,#0x1
7101a7ea24  add x16,x14,w15, SXTW  #0x3
7101a7ea28  ldr w17,[x16]
7101a7ea2c  ldr x17,[x13, x17, LSL #0x3]
7101a7ea30  cmp x17,x12
7101a7ea34  b.eq 0x7101a7ea54
7101a7ea38  sub w16,w15,#0x1
7101a7ea3c  cmp x17,x12
7101a7ea40  csel w10,w16,w10,hi
7101a7ea44  csinc w11,w11,w15,hi
7101a7ea48  cmp w11,w10
7101a7ea4c  b.le 0x7101a7ea14
7101a7ea50  b 0x7101a7ea6c
7101a7ea54  ldrsw x9,[x16, #0x4]
7101a7ea58  tbnz w9,#0x1f,0x7101a7ea64
7101a7ea5c  add x9,x8,x9
7101a7ea60  b 0x7101a7ea6c
7101a7ea64  adrp x9,0x7104742000
7101a7ea68  add x9,x9,#0xdbb
7101a7ea6c  ldrb w8,[x9]
7101a7ea70  sub w8,w8,#0xb
7101a7ea74  cmp w8,#0x1
7101a7ea78  b.hi 0x7101a7ec9c
7101a7ea7c  ldursw x26,[x9, #0x1]
7101a7ea80  cbz w26,0x7101a7ec9c
7101a7ea84  tbnz w26,#0x1f,0x7101a7ed54
7101a7ea88  lsl x20,x26,#0x3
7101a7ea8c  mov w0,#0x10
7101a7ea90  mov x1,x20
7101a7ea94  bl 0x710392e290
7101a7ea98  mov x22,x0
7101a7ea9c  cbnz x0,0x7101a7eae4
7101a7eaa0  adrp x8,0x7105332000
7101a7eaa4  ldr x0,[x8, #0xf00]
7101a7eaa8  cbz x0,0x7101a7eae0
7101a7eaac  stur wzr,[x29, #-0x64]
7101a7eab0  str x20,[sp, #0x10]
7101a7eab4  ldr x8,[x0]
7101a7eab8  ldr x8,[x8, #0x30]
7101a7eabc  sub x1,x29,#0x64
7101a7eac0  add x2,sp,#0x10
7101a7eac4  blr x8
7101a7eac8  tbz w0,#0x0,0x7101a7eae0
7101a7eacc  mov w0,#0x10
7101a7ead0  mov x1,x20
7101a7ead4  bl 0x710392e290
7101a7ead8  mov x22,x0
7101a7eadc  cbnz x0,0x7101a7eae4
7101a7eae0  mov x22,xzr
7101a7eae4  add x19,x22,x26, LSL #0x3
7101a7eae8  mov w20,wzr
7101a7eaec  str x22,[sp, #0x200]
7101a7eaf0  str x22,[sp, #0x208]
7101a7eaf4  str x19,[sp, #0x210]
7101a7eaf8  b 0x7101a7eb04
7101a7eafc  ldr x22,[sp, #0x208]
7101a7eb00  ldr x19,[sp, #0x210]
7101a7eb04  ldr x8,[x27, #0x2e8]
7101a7eb08  ldr x0,[x8, #0x8]
7101a7eb0c  mov w1,w20
7101a7eb10  bl 0x7103293b70
7101a7eb14  mov x23,x0
7101a7eb18  cmp x22,x19
7101a7eb1c  b.cs 0x7101a7eb34
7101a7eb20  str x23,[x22]
7101a7eb24  ldr x8,[sp, #0x208]
7101a7eb28  add x8,x8,#0x8
7101a7eb2c  str x8,[sp, #0x208]
7101a7eb30  b 0x7101a7ec28
7101a7eb34  ldr x21,[sp, #0x200]
7101a7eb38  sub x22,x22,x21
7101a7eb3c  asr x28,x22,#0x3
7101a7eb40  add x8,x28,#0x1
7101a7eb44  lsr x9,x8,#0x3d
7101a7eb48  cbnz x9,0x7101a7ed44
7101a7eb4c  sub x9,x19,x21
7101a7eb50  asr x10,x9,#0x3
7101a7eb54  orr x11,xzr,#0xffffffffffffffe
7101a7eb58  cmp x10,x11
7101a7eb5c  b.hi 0x7101a7eb7c
7101a7eb60  asr x9,x9,#0x2
7101a7eb64  cmp x9,x8
7101a7eb68  csel x19,x8,x9,cc
7101a7eb6c  cbz x19,0x7101a7ebe0
7101a7eb70  lsr x8,x19,#0x3d
7101a7eb74  cbz x8,0x7101a7eb80
7101a7eb78  b 0x7101a7ed54
7101a7eb7c  orr x19,xzr,#0x1fffffffffffffff
7101a7eb80  lsl x8,x19,#0x3
7101a7eb84  cmp x8,#0x0
7101a7eb88  csinc x25,x8,xzr,ne
7101a7eb8c  mov w0,#0x10
7101a7eb90  mov x1,x25
7101a7eb94  bl 0x710392e290
7101a7eb98  mov x24,x0
7101a7eb9c  cbnz x0,0x7101a7ebe4
7101a7eba0  adrp x8,0x7105332000
7101a7eba4  ldr x0,[x8, #0xf00]
7101a7eba8  cbz x0,0x7101a7ebe0
7101a7ebac  stur wzr,[x29, #-0x64]
7101a7ebb0  str x25,[sp, #0x10]
7101a7ebb4  ldr x8,[x0]
7101a7ebb8  ldr x8,[x8, #0x30]
7101a7ebbc  sub x1,x29,#0x64
7101a7ebc0  add x2,sp,#0x10
7101a7ebc4  blr x8
7101a7ebc8  tbz w0,#0x0,0x7101a7ebe0
7101a7ebcc  mov w0,#0x10
7101a7ebd0  mov x1,x25
7101a7ebd4  bl 0x710392e290
7101a7ebd8  mov x24,x0
7101a7ebdc  cbnz x0,0x7101a7ebe4
7101a7ebe0  mov x24,xzr
7101a7ebe4  add x25,x24,x28, LSL #0x3
7101a7ebe8  add x19,x24,x19, LSL #0x3
7101a7ebec  cmp x22,#0x1
7101a7ebf0  str x23,[x25], #0x8
7101a7ebf4  b.lt 0x7101a7ec08
7101a7ebf8  mov x0,x24
7101a7ebfc  mov x1,x21
7101a7ec00  mov x2,x22
7101a7ec04  bl 0x71039c00e0
7101a7ec08  str x24,[sp, #0x200]
7101a7ec0c  adrp x24,0x710523d000
7101a7ec10  add x24,x24,#0x9a8
7101a7ec14  str x25,[sp, #0x208]
7101a7ec18  str x19,[sp, #0x210]
7101a7ec1c  cbz x21,0x7101a7ec28
7101a7ec20  mov x0,x21
7101a7ec24  bl 0x710392eb40
7101a7ec28  add w20,w20,#0x1
7101a7ec2c  cmp w20,w26
7101a7ec30  b.lt 0x7101a7eafc
7101a7ec34  ldr x19,[sp, #0x200]
7101a7ec38  ldr x20,[sp, #0x208]
7101a7ec3c  cmp x19,x20
7101a7ec40  b.eq 0x7101a7ed34
7101a7ec44  ldr x8,[sp, #0x8]
7101a7ec48  ldr x21,[x8, #0x140]
7101a7ec4c  adrp x22,0x710523d000
7101a7ec50  add x22,x22,#0x988
7101a7ec54  ldr x0,[x19]
7101a7ec58  bl 0x7103239360
7101a7ec5c  tst x0,#0xffffffffff
7101a7ec60  str x0,[sp, #0x10]
7101a7ec64  b.eq 0x7101a7ec7c
7101a7ec68  ldr x0,[x21]
7101a7ec6c  ldrsw x2,[x0, #0x70]
7101a7ec70  ldr w3,[x0, #0x68]
7101a7ec74  add x1,sp,#0x10
7101a7ec78  bl 0x710323c4e0
7101a7ec7c  add x19,x19,#0x8
7101a7ec80  cmp x20,x19
7101a7ec84  b.ne 0x7101a7ec54
7101a7ec88  ldr x20,[sp, #0x200]
7101a7ec8c  cbz x20,0x7101a7ec9c
7101a7ec90  mov x0,x20
7101a7ec94  str x20,[sp, #0x208]
7101a7ec98  bl 0x710392eb40
7101a7ec9c  ldr x0,[sp, #0x158]
7101a7eca0  stp x24,xzr,[sp, #0x150]
7101a7eca4  cbz x0,0x7101a7ecac
7101a7eca8  bl 0x710392eb40
7101a7ecac  ldr x0,[sp, #0x168]
7101a7ecb0  stp x24,xzr,[sp, #0x160]
7101a7ecb4  cbz x0,0x7101a7ecbc
7101a7ecb8  bl 0x710392eb40
7101a7ecbc  ldr x19,[sp, #0x178]
7101a7ecc0  stp x22,xzr,[sp, #0x170]
7101a7ecc4  cbz x19,0x7101a7ece0
7101a7ecc8  ldr x0,[x19, #0x18]
7101a7eccc  stp x24,xzr,[x19, #0x10]
7101a7ecd0  cbz x0,0x7101a7ecd8
7101a7ecd4  bl 0x710392eb40
7101a7ecd8  mov x0,x19
7101a7ecdc  bl 0x710392eb40
7101a7ece0  ldr x0,[sp, #0x1c0]
7101a7ece4  stp x24,xzr,[sp, #0x1b8]
7101a7ece8  cbz x0,0x7101a7ecf0
7101a7ecec  bl 0x710392eb40
7101a7ecf0  ldr x19,[sp, #0x1d8]
7101a7ecf4  stp x22,xzr,[sp, #0x1d0]
7101a7ecf8  cbz x19,0x7101a7ed14
7101a7ecfc  ldr x0,[x19, #0x18]
7101a7ed00  stp x24,xzr,[x19, #0x10]
7101a7ed04  cbz x0,0x7101a7ed0c
7101a7ed08  bl 0x710392eb40
7101a7ed0c  mov x0,x19
7101a7ed10  bl 0x710392eb40
7101a7ed14  add sp,sp,#0x350
7101a7ed18  ldp x29,x30,[sp, #0x50]
7101a7ed1c  ldp x20,x19,[sp, #0x40]
7101a7ed20  ldp x22,x21,[sp, #0x30]
7101a7ed24  ldp x24,x23,[sp, #0x20]
7101a7ed28  ldp x26,x25,[sp, #0x10]
7101a7ed2c  ldp x28,x27,[sp], #0x60
7101a7ed30  ret
7101a7ed34  adrp x22,0x710523d000
7101a7ed38  add x22,x22,#0x988
7101a7ed3c  cbnz x20,0x7101a7ec90
7101a7ed40  b 0x7101a7ec9c
7101a7ed44  add x0,sp,#0x200
7101a7ed48  bl 0x71039c0c00
7101a7ed4c  mov x0,x22
7101a7ed50  bl 0x71039c1330
7101a7ed54  bl 0x71039c2650
7101a7ed58  mov x0,x22
7101a7ed5c  bl 0x71039c0c00
7101a7ed60  add x0,sp,#0x1a0
7101a7ed64  bl 0x71039c0c00
