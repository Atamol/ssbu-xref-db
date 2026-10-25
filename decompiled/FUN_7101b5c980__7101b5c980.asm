// addr:      7101b5c980
// offset:    0x1b5c980
// name:      FUN_7101b5c980
// mangled:   
// size:      1576

7101b5c980  str d8,[sp, #-0x70]!
7101b5c984  stp x28,x27,[sp, #0x10]
7101b5c988  stp x26,x25,[sp, #0x20]
7101b5c98c  stp x24,x23,[sp, #0x30]
7101b5c990  stp x22,x21,[sp, #0x40]
7101b5c994  stp x20,x19,[sp, #0x50]
7101b5c998  stp x29,x30,[sp, #0x60]
7101b5c99c  add x29,sp,#0x60
7101b5c9a0  sub sp,sp,#0x1, LSL #12
7101b5c9a4  sub sp,sp,#0x110
7101b5c9a8  cmp w1,#0x3
7101b5c9ac  b.hi 0x7101b5cf7c
7101b5c9b0  tbnz w2,#0x1f,0x7101b5cf7c
7101b5c9b4  sxtw x8,w2
7101b5c9b8  add x28,x8,#0x4
7101b5c9bc  cmp w28,#0x7
7101b5c9c0  b.hi 0x7101b5cf7c
7101b5c9c4  mov x23,x7
7101b5c9c8  mov x25,x6
7101b5c9cc  mov w24,w1
7101b5c9d0  mov w20,w3
7101b5c9d4  mov x19,x0
7101b5c9d8  stur x4,[x29, #-0x58]
7101b5c9dc  cmn w3,#0x1
7101b5c9e0  str w5,[sp, #0x40]
7101b5c9e4  b.eq 0x7101b5ca00
7101b5c9e8  adrp x0,0x71042b2000
7101b5c9ec  add x0,x0,#0x93a
7101b5c9f0  add x8,sp,#0xa8
7101b5c9f4  mov w1,w20
7101b5c9f8  bl 0x71003a4ca0
7101b5c9fc  b 0x7101b5ca08
7101b5ca00  strb wzr,[sp, #0xb0]
7101b5ca04  str xzr,[sp, #0xa8]
7101b5ca08  add x21,x19,#0x770
7101b5ca0c  orr w27,wzr,#0x60
7101b5ca10  sxtw x22,w24
7101b5ca14  smaddl x24,w24,w27,x21
7101b5ca18  add x8,sp,#0xa8
7101b5ca1c  add x26,x8,#0x8
7101b5ca20  mov x1,x26
7101b5ca24  mov x0,x24
7101b5ca28  bl 0x710377a120
7101b5ca2c  add x0,x24,#0x10
7101b5ca30  adrp x24,0x7104318000
7101b5ca34  add x24,x24,#0xb9f
7101b5ca38  mov w2,#0x1
7101b5ca3c  mov x1,x24
7101b5ca40  mov x3,x23
7101b5ca44  bl 0x710377a280
7101b5ca48  madd x27,x28,x27,x21
7101b5ca4c  mov x0,x27
7101b5ca50  mov x1,x26
7101b5ca54  bl 0x710377a120
7101b5ca58  add x0,x27,#0x10
7101b5ca5c  mov w2,#0x1
7101b5ca60  mov x1,x24
7101b5ca64  mov x3,x23
7101b5ca68  bl 0x710377a280
7101b5ca6c  cmn w25,#0x1
7101b5ca70  str w20,[sp, #0x3c]
7101b5ca74  b.eq 0x7101b5cbc0
7101b5ca78  orr w8,wzr,#0x60
7101b5ca7c  madd x23,x22,x8,x19
7101b5ca80  ldr x8,[x23, #0x7b8]
7101b5ca84  ldr x0,[x8, #0x8]
7101b5ca88  cbz x0,0x7101b5cac0
7101b5ca8c  adrp x8,0x710593b000
7101b5ca90  ldr x8,[x8, #0xc38]
7101b5ca94  cbz x8,0x7101b5cac0
7101b5ca98  cmp w25,#0x1f
7101b5ca9c  b.hi 0x7101b5cac0
7101b5caa0  sxtw x9,w25
7101b5caa4  cmp x9,#0x20
7101b5caa8  b.cs 0x7101b5cfa4
7101b5caac  ldr x8,[x8, #0x8]
7101b5cab0  ldr x1,[x8, x9, LSL #0x3]
7101b5cab4  cbz x1,0x7101b5cac0
7101b5cab8  mov w2,wzr
7101b5cabc  bl 0x710379e9c0
7101b5cac0  orr w8,wzr,#0x60
7101b5cac4  madd x24,x22,x8,x19
7101b5cac8  ldr x8,[x24, #0x7c8]
7101b5cacc  ldr x0,[x8, #0x8]
7101b5cad0  cbz x0,0x7101b5cb08
7101b5cad4  adrp x8,0x710593b000
7101b5cad8  ldr x8,[x8, #0xc38]
7101b5cadc  cbz x8,0x7101b5cb08
7101b5cae0  cmp w25,#0x1f
7101b5cae4  b.hi 0x7101b5cb08
7101b5cae8  sxtw x9,w25
7101b5caec  cmp x9,#0x20
7101b5caf0  b.cs 0x7101b5cfa4
7101b5caf4  ldr x8,[x8, #0x8]
7101b5caf8  ldr x1,[x8, x9, LSL #0x3]
7101b5cafc  cbz x1,0x7101b5cb08
7101b5cb00  mov w2,wzr
7101b5cb04  bl 0x710379e9c0
7101b5cb08  orr w8,wzr,#0x60
7101b5cb0c  madd x21,x28,x8,x19
7101b5cb10  ldr x8,[x21, #0x7b8]
7101b5cb14  ldr x0,[x8, #0x8]
7101b5cb18  cbz x0,0x7101b5cb50
7101b5cb1c  adrp x8,0x710593b000
7101b5cb20  ldr x8,[x8, #0xc38]
7101b5cb24  cbz x8,0x7101b5cb50
7101b5cb28  cmp w25,#0x1f
7101b5cb2c  b.hi 0x7101b5cb50
7101b5cb30  sxtw x9,w25
7101b5cb34  cmp x9,#0x20
7101b5cb38  b.cs 0x7101b5cfa4
7101b5cb3c  ldr x8,[x8, #0x8]
7101b5cb40  ldr x1,[x8, x9, LSL #0x3]
7101b5cb44  cbz x1,0x7101b5cb50
7101b5cb48  mov w2,wzr
7101b5cb4c  bl 0x710379e9c0
7101b5cb50  orr w8,wzr,#0x60
7101b5cb54  madd x8,x28,x8,x19
7101b5cb58  add x11,x8,#0x7c0
7101b5cb5c  ldr x8,[x8, #0x7c8]
7101b5cb60  ldr x0,[x8, #0x8]
7101b5cb64  add x20,x23,#0x7b0
7101b5cb68  add x13,x24,#0x7c0
7101b5cb6c  add x12,x21,#0x7b0
7101b5cb70  str x13,[sp, #0x8]
7101b5cb74  stp x12,x11,[sp, #0x10]
7101b5cb78  cbz x0,0x7101b5cbb0
7101b5cb7c  adrp x8,0x710593b000
7101b5cb80  ldr x8,[x8, #0xc38]
7101b5cb84  cbz x8,0x7101b5cbb0
7101b5cb88  cmp w25,#0x1f
7101b5cb8c  b.hi 0x7101b5cbb0
7101b5cb90  sxtw x9,w25
7101b5cb94  cmp x9,#0x20
7101b5cb98  b.cs 0x7101b5cfa4
7101b5cb9c  ldr x8,[x8, #0x8]
7101b5cba0  ldr x1,[x8, x9, LSL #0x3]
7101b5cba4  cbz x1,0x7101b5cbb0
7101b5cba8  mov w2,wzr
7101b5cbac  bl 0x710379e9c0
7101b5cbb0  ldr w27,[sp, #0x40]
7101b5cbb4  ldur x26,[x29, #-0x58]
7101b5cbb8  mov w8,#0xb
7101b5cbbc  b 0x7101b5cc40
7101b5cbc0  ldr x8,[x19]
7101b5cbc4  ldur x26,[x29, #-0x58]
7101b5cbc8  mov w3,#0x1
7101b5cbcc  ldr w27,[sp, #0x40]
7101b5cbd0  mov x1,x26
7101b5cbd4  ldr x0,[x8, #0x78]
7101b5cbd8  mov w2,w27
7101b5cbdc  bl 0x710323f330
7101b5cbe0  orr w23,wzr,#0x60
7101b5cbe4  madd x24,x22,x23,x21
7101b5cbe8  mov x25,x0
7101b5cbec  ldr x0,[x24, #0x28]
7101b5cbf0  mov x1,x25
7101b5cbf4  add x20,x24,#0x20
7101b5cbf8  bl 0x7103778b80
7101b5cbfc  ldr x0,[x24, #0x38]
7101b5cc00  add x8,x24,#0x30
7101b5cc04  mov x1,x25
7101b5cc08  str x8,[sp, #0x8]
7101b5cc0c  bl 0x7103778b80
7101b5cc10  madd x21,x28,x23,x21
7101b5cc14  ldr x0,[x21, #0x28]
7101b5cc18  add x8,x21,#0x20
7101b5cc1c  mov x1,x25
7101b5cc20  str x8,[sp, #0x10]
7101b5cc24  bl 0x7103778b80
7101b5cc28  ldr x0,[x21, #0x38]
7101b5cc2c  add x8,x21,#0x30
7101b5cc30  mov x1,x25
7101b5cc34  str x8,[sp, #0x18]
7101b5cc38  bl 0x7103778b80
7101b5cc3c  mov w8,#0xa
7101b5cc40  mov w21,#0xd0
7101b5cc44  add x23,x19,#0xf0
7101b5cc48  madd x9,x22,x21,x23
7101b5cc4c  lsl x24,x8,#0x4
7101b5cc50  add x0,x9,x24
7101b5cc54  add x25,sp,#0xf0
7101b5cc58  stur x22,[x29, #-0x58]
7101b5cc5c  bl 0x710377b140
7101b5cc60  madd x8,x28,x21,x23
7101b5cc64  add x0,x8,x24
7101b5cc68  bl 0x710377b140
7101b5cc6c  adrp x8,0x710532f000
7101b5cc70  ldr x8,[x8, #0x730]
7101b5cc74  ldr x23,[x8, #0x8]
7101b5cc78  ldr x0,[x23, #0x2a8]
7101b5cc7c  mov x1,x26
7101b5cc80  mov w2,w27
7101b5cc84  bl 0x7103280ec0
7101b5cc88  ldr x8,[x23, #0x2a8]
7101b5cc8c  fmov s8,wzr
7101b5cc90  mov v0.16B,v8.16B
7101b5cc94  mov x2,#0xcf4f
7101b5cc98  movk x2,#0xae7, LSL #16
7101b5cc9c  movk x2,#0x12, LSL #32
7101b5cca0  ldr x22,[x8, #0x8]
7101b5cca4  mov w21,w0
7101b5cca8  mov x0,x22
7101b5ccac  mov w1,w21
7101b5ccb0  bl 0x710326ad60
7101b5ccb4  str d0,[sp, #0x40]
7101b5ccb8  mov v0.16B,v8.16B
7101b5ccbc  mov x2,#0xffd9
7101b5ccc0  movk x2,#0x7de0, LSL #16
7101b5ccc4  movk x2,#0x12, LSL #32
7101b5ccc8  mov x0,x22
7101b5cccc  mov w1,w21
7101b5ccd0  bl 0x710326ad60
7101b5ccd4  str d0,[sp, #0x20]
7101b5ccd8  fmov s0,0x3f800000
7101b5ccdc  mov x2,#0xc649
7101b5cce0  movk x2,#0x95a1, LSL #16
7101b5cce4  movk x2,#0xf, LSL #32
7101b5cce8  mov x0,x22
7101b5ccec  mov w1,w21
7101b5ccf0  bl 0x710326ad60
7101b5ccf4  add x0,sp,#0x98
7101b5ccf8  mov x1,x20
7101b5ccfc  mov v8.16B,v0.16B
7101b5cd00  bl 0x7103778ab0
7101b5cd04  ldr q1,[sp, #0x40]
7101b5cd08  movi v0.2D,#0x0
7101b5cd0c  ldr x0,[sp, #0xa0]
7101b5cd10  mov v0.S[0x0],v1.S[0x0]
7101b5cd14  ldr q1,[sp, #0x20]
7101b5cd18  mov v0.S[0x1],v1.S[0x0]
7101b5cd1c  add x1,sp,#0xf0
7101b5cd20  str q0,[sp, #0x40]
7101b5cd24  str q0,[x25]
7101b5cd28  mov v0.16B,v8.16B
7101b5cd2c  bl 0x7103779770
7101b5cd30  ldr x0,[sp, #0xa0]
7101b5cd34  adrp x21,0x710523d000
7101b5cd38  add x21,x21,#0x9a8
7101b5cd3c  stp x21,xzr,[sp, #0x98]
7101b5cd40  cbz x0,0x7101b5cd48
7101b5cd44  bl 0x710392eb40
7101b5cd48  ldr x1,[sp, #0x8]
7101b5cd4c  add x0,sp,#0x88
7101b5cd50  bl 0x7103778ab0
7101b5cd54  ldr q0,[sp, #0x40]
7101b5cd58  ldr x0,[sp, #0x90]
7101b5cd5c  add x1,sp,#0xf0
7101b5cd60  str q0,[x25]
7101b5cd64  mov v0.16B,v8.16B
7101b5cd68  bl 0x7103779770
7101b5cd6c  ldr x0,[sp, #0x90]
7101b5cd70  ldr w20,[sp, #0x3c]
7101b5cd74  stp x21,xzr,[sp, #0x88]
7101b5cd78  cbz x0,0x7101b5cd80
7101b5cd7c  bl 0x710392eb40
7101b5cd80  ldr x1,[sp, #0x10]
7101b5cd84  add x0,sp,#0x78
7101b5cd88  bl 0x7103778ab0
7101b5cd8c  ldr q0,[sp, #0x40]
7101b5cd90  ldr x0,[sp, #0x80]
7101b5cd94  add x1,sp,#0xf0
7101b5cd98  str q0,[x25]
7101b5cd9c  mov v0.16B,v8.16B
7101b5cda0  bl 0x7103779770
7101b5cda4  ldr x0,[sp, #0x80]
7101b5cda8  stp x21,xzr,[sp, #0x78]
7101b5cdac  cbz x0,0x7101b5cdb4
7101b5cdb0  bl 0x710392eb40
7101b5cdb4  ldr x1,[sp, #0x18]
7101b5cdb8  add x0,sp,#0x68
7101b5cdbc  bl 0x7103778ab0
7101b5cdc0  ldr q0,[sp, #0x40]
7101b5cdc4  ldr x0,[sp, #0x70]
7101b5cdc8  add x1,sp,#0xf0
7101b5cdcc  str q0,[x25]
7101b5cdd0  mov v0.16B,v8.16B
7101b5cdd4  bl 0x7103779770
7101b5cdd8  ldr x0,[sp, #0x70]
7101b5cddc  stp x21,xzr,[sp, #0x68]
7101b5cde0  cbz x0,0x7101b5cde8
7101b5cde4  bl 0x710392eb40
7101b5cde8  ldr w22,[x29, #0x10]
7101b5cdec  cmp w20,#0x2
7101b5cdf0  b.eq 0x7101b5ce48
7101b5cdf4  ldur x26,[x29, #-0x58]
7101b5cdf8  cmp w20,#0x3
7101b5cdfc  b.eq 0x7101b5ce28
7101b5ce00  cmp w20,#0x4
7101b5ce04  b.ne 0x7101b5ce6c
7101b5ce08  mov w20,#0xd0
7101b5ce0c  add x23,x19,#0xf0
7101b5ce10  madd x8,x26,x20,x23
7101b5ce14  add x0,x8,#0x30
7101b5ce18  bl 0x710377b140
7101b5ce1c  madd x8,x28,x20,x23
7101b5ce20  add x0,x8,#0x30
7101b5ce24  b 0x7101b5ce80
7101b5ce28  mov w20,#0xd0
7101b5ce2c  add x23,x19,#0xf0
7101b5ce30  madd x8,x26,x20,x23
7101b5ce34  add x0,x8,#0x20
7101b5ce38  bl 0x710377b140
7101b5ce3c  madd x8,x28,x20,x23
7101b5ce40  add x0,x8,#0x20
7101b5ce44  b 0x7101b5ce80
7101b5ce48  ldur x8,[x29, #-0x58]
7101b5ce4c  mov w20,#0xd0
7101b5ce50  add x23,x19,#0xf0
7101b5ce54  madd x8,x8,x20,x23
7101b5ce58  add x0,x8,#0x10
7101b5ce5c  bl 0x710377b140
7101b5ce60  madd x8,x28,x20,x23
7101b5ce64  add x0,x8,#0x10
7101b5ce68  b 0x7101b5ce80
7101b5ce6c  mov w20,#0xd0
7101b5ce70  add x23,x19,#0xf0
7101b5ce74  madd x0,x26,x20,x23
7101b5ce78  bl 0x710377b140
7101b5ce7c  madd x0,x28,x20,x23
7101b5ce80  bl 0x710377b140
7101b5ce84  add x1,x19,#0xa70
7101b5ce88  add x0,sp,#0x58
7101b5ce8c  bl 0x7103778ab0
7101b5ce90  cmn w22,#0x1
7101b5ce94  b.eq 0x7101b5ceec
7101b5ce98  cmp w22,#0x9
7101b5ce9c  adrp x8,0x7105339000
7101b5cea0  add x8,x8,#0x830
7101b5cea4  b.hi 0x7101b5cec8
7101b5cea8  adrp x9,0x7105339000
7101b5ceac  ldr x9,[x9, #0x8b0]
7101b5ceb0  ldrb w9,[x9, #0x8]
7101b5ceb4  cbz w9,0x7101b5cec8
7101b5ceb8  adrp x8,0x7105339000
7101b5cebc  add x8,x8,#0x860
7101b5cec0  ldr x8,[x8, w22, SXTW #0x3]
7101b5cec4  cbz x8,0x7101b5cef0
7101b5cec8  ldr x8,[x8, #0x10]
7101b5cecc  ldr w8,[x8, #0x9c]
7101b5ced0  sub w8,w8,#0x1
7101b5ced4  cmp w8,#0x6
7101b5ced8  b.hi 0x7101b5ceec
7101b5cedc  adrp x9,0x7104753000
7101b5cee0  add x9,x9,#0xde0
7101b5cee4  ldr w8,[x9, w8, SXTW #0x2]
7101b5cee8  b 0x7101b5cef0
7101b5ceec  mov w8,wzr
7101b5cef0  ldr x0,[sp, #0x60]
7101b5cef4  ldr x19,[x0, #0x10]
7101b5cef8  cbz x19,0x7101b5cf70
7101b5cefc  ldr x1,[x19, #0xe0]
7101b5cf00  str w8,[x19, #0x25c]
7101b5cf04  cbz x1,0x7101b5cf70
7101b5cf08  ldrb w8,[x1]
7101b5cf0c  cmp w8,#0x23
7101b5cf10  b.eq 0x7101b5cf70
7101b5cf14  cmp w8,#0x40
7101b5cf18  b.eq 0x7101b5cf70
7101b5cf1c  adrp x8,0x710593b000
7101b5cf20  ldr x8,[x8, #0xc60]
7101b5cf24  ldr x0,[x8]
7101b5cf28  bl 0x71037a4450
7101b5cf2c  ldr w8,[x19, #0x25c]
7101b5cf30  mov x20,x0
7101b5cf34  add x0,sp,#0xf0
7101b5cf38  mov w2,#0x1000
7101b5cf3c  mov w1,wzr
7101b5cf40  stur w8,[x29, #-0x78]
7101b5cf44  bl 0x71039c02a0
7101b5cf48  add x0,sp,#0xf0
7101b5cf4c  sub x2,x29,#0x78
7101b5cf50  mov x1,x20
7101b5cf54  bl 0x71037ae170
7101b5cf58  mov w2,w0
7101b5cf5c  add x1,sp,#0xf0
7101b5cf60  mov x0,x19
7101b5cf64  mov w3,wzr
7101b5cf68  bl 0x71037a2270
7101b5cf6c  ldr x0,[sp, #0x60]
7101b5cf70  stp x21,xzr,[sp, #0x58]
7101b5cf74  cbz x0,0x7101b5cf7c
7101b5cf78  bl 0x710392eb40
7101b5cf7c  add sp,sp,#0x1, LSL #12
7101b5cf80  add sp,sp,#0x110
7101b5cf84  ldp x29,x30,[sp, #0x60]
7101b5cf88  ldp x20,x19,[sp, #0x50]
7101b5cf8c  ldp x22,x21,[sp, #0x40]
7101b5cf90  ldp x24,x23,[sp, #0x30]
7101b5cf94  ldp x26,x25,[sp, #0x20]
7101b5cf98  ldp x28,x27,[sp, #0x10]
7101b5cf9c  ldr d8,[sp], #0x70
7101b5cfa0  ret
7101b5cfa4  bl 0x71039c2650
