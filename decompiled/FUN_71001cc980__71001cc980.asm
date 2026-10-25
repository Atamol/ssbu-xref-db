// addr:      71001cc980
// offset:    0x1cc980
// name:      FUN_71001cc980
// mangled:   
// size:      888

71001cc980  sub sp,sp,#0xe0
71001cc984  stp x28,x27,[sp, #0x80]
71001cc988  stp x26,x25,[sp, #0x90]
71001cc98c  stp x24,x23,[sp, #0xa0]
71001cc990  stp x22,x21,[sp, #0xb0]
71001cc994  stp x20,x19,[sp, #0xc0]
71001cc998  stp x29,x30,[sp, #0xd0]
71001cc99c  add x29,sp,#0xd0
71001cc9a0  adrp x8,0x71052a4000
71001cc9a4  ldr x8,[x8, #0xda8]
71001cc9a8  adrp x23,0x71052a4000
71001cc9ac  ldrb w8,[x8]
71001cc9b0  ldr x23,[x23, #0xdb0]
71001cc9b4  mov w21,w7
71001cc9b8  mov x24,x6
71001cc9bc  mov w20,w5
71001cc9c0  mov x26,x4
71001cc9c4  mov w22,w3
71001cc9c8  mov x27,x2
71001cc9cc  mov x28,x1
71001cc9d0  mov x25,x0
71001cc9d4  add x19,x23,#0x28
71001cc9d8  cbz w8,0x71001cca14
71001cc9dc  adrp x8,0x71052a4000
71001cc9e0  ldr x8,[x8, #0xdb8]
71001cc9e4  ldr x0,[x8]
71001cc9e8  bl 0x7101717960
71001cc9ec  ldr w8,[x0]
71001cc9f0  cbz w8,0x71001cca14
71001cc9f4  ldr x10,[x23, #0xa0]
71001cc9f8  ldp x9,x10,[x10]
71001cc9fc  sub x10,x10,x9
71001cca00  asr x10,x10,#0x3
71001cca04  cmp x10,x8
71001cca08  b.ls 0x71001cca2c
71001cca0c  ldr x8,[x9, x8, LSL #0x3]
71001cca10  add x19,x8,#0x20
71001cca14  ldr x8,[x19]
71001cca18  cbz x8,0x71001cca44
71001cca1c  ldr x8,[x8, #0x10]
71001cca20  cbz x8,0x71001cca44
71001cca24  ldr x19,[x8, #0x10]
71001cca28  b 0x71001cca48
71001cca2c  adrp x0,0x71042c4000
71001cca30  add x0,x0,#0x35f
71001cca34  mov w1,#0x47
71001cca38  orr w2,wzr,#0xe0000003
71001cca3c  mov w3,wzr
71001cca40  bl 0x71001b1300
71001cca44  mov x19,xzr
71001cca48  ldr x8,[x19, #0x78]!
71001cca4c  ldr x8,[x8, #0x10]
71001cca50  mov x0,x19
71001cca54  blr x8
71001cca58  mov x0,x25
71001cca5c  bl 0x71001ccd00
71001cca60  tbz w0,#0x0,0x71001ccc10
71001cca64  stp w22,w20,[sp, #0x8]
71001cca68  adrp x8,0x71052a6000
71001cca6c  ldr x8,[x8, #0x970]
71001cca70  add x20,x8,#0x10
71001cca74  add x8,sp,#0x48
71001cca78  mov w23,w21
71001cca7c  mov w21,#0x1
71001cca80  add x8,x8,#0x8
71001cca84  str x20,[sp, #0x48]
71001cca88  stlr w21,[x8]
71001cca8c  adrp x8,0x71052a6000
71001cca90  ldr x8,[x8, #0xb80]
71001cca94  strb wzr,[sp, #0x54]
71001cca98  add x22,x8,#0x10
71001cca9c  str x22,[sp, #0x48]
71001ccaa0  ldr x1,[x27, #0x20]
71001ccaa4  add x0,sp,#0x48
71001ccaa8  strb wzr,[sp, #0x78]
71001ccaac  str x1,[sp, #0x68]
71001ccab0  bl 0x71001cf7a0
71001ccab4  ldr x8,[x27, #0x18]
71001ccab8  stp x0,x8,[sp, #0x58]
71001ccabc  add x0,sp,#0x48
71001ccac0  mov x1,x27
71001ccac4  str xzr,[sp, #0x70]
71001ccac8  bl 0x71001cc790
71001ccacc  ldrb w8,[x27, #0x30]
71001ccad0  and w8,w8,#0xfffffffb
71001ccad4  strb w8,[sp, #0x78]
71001ccad8  ldrb w8,[x27, #0x31]
71001ccadc  strb w8,[sp, #0x79]
71001ccae0  ldrb w8,[x27, #0x32]
71001ccae4  strb w8,[sp, #0x7a]
71001ccae8  add x8,sp,#0x10
71001ccaec  add x8,x8,#0x8
71001ccaf0  str x20,[sp, #0x10]
71001ccaf4  stlr w21,[x8]
71001ccaf8  strb wzr,[sp, #0x1c]
71001ccafc  str x22,[sp, #0x10]
71001ccb00  ldr x1,[x26, #0x20]
71001ccb04  add x0,sp,#0x10
71001ccb08  strb wzr,[sp, #0x40]
71001ccb0c  str x1,[sp, #0x30]
71001ccb10  bl 0x71001cf7a0
71001ccb14  ldr x8,[x26, #0x18]
71001ccb18  stp x0,x8,[sp, #0x20]
71001ccb1c  add x0,sp,#0x10
71001ccb20  mov x1,x26
71001ccb24  str xzr,[sp, #0x38]
71001ccb28  bl 0x71001cc790
71001ccb2c  ldrb w8,[x26, #0x30]
71001ccb30  and w8,w8,#0xfffffffb
71001ccb34  strb w8,[sp, #0x40]
71001ccb38  ldrb w8,[x26, #0x31]
71001ccb3c  strb w8,[sp, #0x41]
71001ccb40  ldrb w8,[x26, #0x32]
71001ccb44  mov w0,#0x130
71001ccb48  strb w8,[sp, #0x42]
71001ccb4c  bl 0x71001af850
71001ccb50  mov x26,x0
71001ccb54  cbz x0,0x71001ccb7c
71001ccb58  ldr w2,[x25, #0x18]
71001ccb5c  ldp w5,w7,[sp, #0x8]
71001ccb60  add x4,sp,#0x48
71001ccb64  add x6,sp,#0x10
71001ccb68  mov x0,x26
71001ccb6c  mov w1,w23
71001ccb70  mov x3,x28
71001ccb74  str x24,[sp]
71001ccb78  bl 0x71001cd060
71001ccb7c  adrp x8,0x71052a4000
71001ccb80  ldr x8,[x8, #0xda8]
71001ccb84  adrp x21,0x71052a4000
71001ccb88  ldr x21,[x21, #0xdb0]
71001ccb8c  ldrb w8,[x8]
71001ccb90  add x20,x21,#0x28
71001ccb94  cbz w8,0x71001ccbd0
71001ccb98  adrp x8,0x71052a4000
71001ccb9c  ldr x8,[x8, #0xdb8]
71001ccba0  ldr x0,[x8]
71001ccba4  bl 0x7101717960
71001ccba8  ldr w8,[x0]
71001ccbac  cbz w8,0x71001ccbd0
71001ccbb0  ldr x10,[x21, #0xa0]
71001ccbb4  ldp x9,x10,[x10]
71001ccbb8  sub x10,x10,x9
71001ccbbc  asr x10,x10,#0x3
71001ccbc0  cmp x10,x8
71001ccbc4  b.ls 0x71001ccc18
71001ccbc8  ldr x8,[x9, x8, LSL #0x3]
71001ccbcc  add x20,x8,#0x20
71001ccbd0  adrp x23,0x71052a6000
71001ccbd4  ldr x23,[x23, #0xb80]
71001ccbd8  ldr x8,[x20]
71001ccbdc  cbz x8,0x71001ccc38
71001ccbe0  ldr x8,[x8, #0x10]
71001ccbe4  cbz x8,0x71001ccc38
71001ccbe8  ldr x20,[x8, #0x10]
71001ccbec  adrp x8,0x71052a6000
71001ccbf0  ldr x8,[x8, #0xb88]
71001ccbf4  ldrb w8,[x8]
71001ccbf8  cbnz w8,0x71001ccc4c
71001ccbfc  mov x0,x20
71001ccc00  mov x1,x26
71001ccc04  mov w2,wzr
71001ccc08  bl 0x71001d8820
71001ccc0c  b 0x71001ccca4
71001ccc10  mov w20,wzr
71001ccc14  b 0x71001cccc4
71001ccc18  adrp x0,0x71042c4000
71001ccc1c  add x0,x0,#0x35f
71001ccc20  mov w1,#0x47
71001ccc24  orr w2,wzr,#0xe0000003
71001ccc28  mov w3,wzr
71001ccc2c  bl 0x71001b1300
71001ccc30  adrp x23,0x71052a6000
71001ccc34  ldr x23,[x23, #0xb80]
71001ccc38  mov x20,xzr
71001ccc3c  adrp x8,0x71052a6000
71001ccc40  ldr x8,[x8, #0xb88]
71001ccc44  ldrb w8,[x8]
71001ccc48  cbz w8,0x71001ccbfc
71001ccc4c  mov x21,x20
71001ccc50  ldr x8,[x21, #0xc0]!
71001ccc54  ldr x8,[x8, #0x10]
71001ccc58  mov x0,x21
71001ccc5c  blr x8
71001ccc60  mov x22,x20
71001ccc64  ldr x8,[x22, #0x30]!
71001ccc68  ldr x8,[x8, #0x10]
71001ccc6c  mov x0,x22
71001ccc70  blr x8
71001ccc74  mov x0,x20
71001ccc78  mov x1,x26
71001ccc7c  mov w2,wzr
71001ccc80  bl 0x71001d8820
71001ccc84  ldr x8,[x22]
71001ccc88  ldr x8,[x8, #0x20]
71001ccc8c  mov x0,x22
71001ccc90  blr x8
71001ccc94  ldr x8,[x21]
71001ccc98  ldr x8,[x8, #0x20]
71001ccc9c  mov x0,x21
71001ccca0  blr x8
71001ccca4  ldr x0,[sp, #0x20]
71001ccca8  add x20,x23,#0x10
71001cccac  str x20,[sp, #0x10]
71001cccb0  bl 0x71001b1870
71001cccb4  ldr x0,[sp, #0x58]
71001cccb8  str x20,[sp, #0x48]
71001cccbc  bl 0x71001b1870
71001cccc0  mov w20,#0x1
71001cccc4  ldr x8,[x19]
71001cccc8  ldr x8,[x8, #0x20]
71001ccccc  mov x0,x19
71001cccd0  blr x8
71001cccd4  mov w0,w20
71001cccd8  ldp x29,x30,[sp, #0xd0]
71001cccdc  ldp x20,x19,[sp, #0xc0]
71001ccce0  ldp x22,x21,[sp, #0xb0]
71001ccce4  ldp x24,x23,[sp, #0xa0]
71001ccce8  ldp x26,x25,[sp, #0x90]
71001cccec  ldp x28,x27,[sp, #0x80]
71001cccf0  add sp,sp,#0xe0
71001cccf4  ret
