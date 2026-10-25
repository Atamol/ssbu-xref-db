// addr:      7101a1c9f0
// offset:    0x1a1c9f0
// name:      FUN_7101a1c9f0
// mangled:   
// size:      312

7101a1c9f0  str d8,[sp, #-0x40]!
7101a1c9f4  stp x22,x21,[sp, #0x10]
7101a1c9f8  stp x20,x19,[sp, #0x20]
7101a1c9fc  stp x29,x30,[sp, #0x30]
7101a1ca00  add x29,sp,#0x30
7101a1ca04  ldrb w8,[x0, #0xf8d]
7101a1ca08  mov w19,w1
7101a1ca0c  cbz w8,0x7101a1cb10
7101a1ca10  ldrb w8,[x0, #0x16a]
7101a1ca14  mov x20,x0
7101a1ca18  tbz w2,#0x0,0x7101a1ca68
7101a1ca1c  cbnz w8,0x7101a1cb10
7101a1ca20  ldr x8,[x20, #0x1a0]
7101a1ca24  ldr x8,[x8]
7101a1ca28  fmov s8,0x3f800000
7101a1ca2c  mov v0.16B,v8.16B
7101a1ca30  adrp x1,0x71042e6000
7101a1ca34  add x1,x1,#0xb13
7101a1ca38  ldr x0,[x8, #0x10]
7101a1ca3c  bl 0x7103778300
7101a1ca40  ldr x8,[x20, #0x198]
7101a1ca44  ldr x8,[x8]
7101a1ca48  ldr x0,[x8, #0x10]
7101a1ca4c  mov v0.16B,v8.16B
7101a1ca50  adrp x1,0x710437c000
7101a1ca54  add x1,x1,#0xc00
7101a1ca58  bl 0x7103778300
7101a1ca5c  mov w8,#0x1
7101a1ca60  strb w8,[x20, #0x16a]
7101a1ca64  b 0x7101a1cb10
7101a1ca68  cbz w8,0x7101a1cb10
7101a1ca6c  ldr x8,[x20, #0x1a0]
7101a1ca70  ldr x8,[x8]
7101a1ca74  fmov s8,0x3f800000
7101a1ca78  mov v0.16B,v8.16B
7101a1ca7c  adrp x1,0x7104349000
7101a1ca80  add x1,x1,#0xd60
7101a1ca84  ldr x0,[x8, #0x10]
7101a1ca88  bl 0x7103778300
7101a1ca8c  ldr x8,[x20, #0x198]
7101a1ca90  ldr x8,[x8]
7101a1ca94  ldr x0,[x8, #0x10]
7101a1ca98  mov v0.16B,v8.16B
7101a1ca9c  adrp x1,0x7104454000
7101a1caa0  add x1,x1,#0x503
7101a1caa4  bl 0x7103778300
7101a1caa8  ldrb w8,[x20, #0xf8e]
7101a1caac  cbnz w8,0x7101a1cb04
7101a1cab0  adrp x8,0x710532f000
7101a1cab4  ldr x22,[x8, #0x820]
7101a1cab8  adrp x8,0x710532f000
7101a1cabc  ldr x8,[x8, #0x730]
7101a1cac0  ldr x8,[x8, #0x8]
7101a1cac4  ldr x0,[x8, #0x1c8]
7101a1cac8  mov x21,#0xe7a9
7101a1cacc  movk x21,#0x6396, LSL #16
7101a1cad0  movk x21,#0xff20, LSL #32
7101a1cad4  movk x21,#0x58ff, LSL #48
7101a1cad8  mov x1,x21
7101a1cadc  bl 0x7103291150
7101a1cae0  tbz w0,#0x0,0x7101a1cafc
7101a1cae4  ldr x0,[x22, #0x10]
7101a1cae8  mov x1,x21
7101a1caec  bl 0x71032edf70
7101a1caf0  ldp x0,x1,[x22, #0x8]
7101a1caf4  bl 0x71032f1bb0
7101a1caf8  b 0x7101a1cb04
7101a1cafc  ldr x8,[x22, #0x8]
7101a1cb00  str wzr,[x8, #0x118]
7101a1cb04  mov w8,#0x1
7101a1cb08  strb wzr,[x20, #0x16a]
7101a1cb0c  strb w8,[x20, #0xf8e]
7101a1cb10  and w0,w19,#0x1
7101a1cb14  ldp x29,x30,[sp, #0x30]
7101a1cb18  ldp x20,x19,[sp, #0x20]
7101a1cb1c  ldp x22,x21,[sp, #0x10]
7101a1cb20  ldr d8,[sp], #0x40
7101a1cb24  ret
