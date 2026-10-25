// addr:      71038fca90
// offset:    0x38fca90
// name:      FUN_71038fca90
// mangled:   
// size:      584

71038fca90  sub sp,sp,#0x70
71038fca94  stp x28,x27,[sp, #0x10]
71038fca98  stp x26,x25,[sp, #0x20]
71038fca9c  stp x24,x23,[sp, #0x30]
71038fcaa0  stp x22,x21,[sp, #0x40]
71038fcaa4  stp x20,x19,[sp, #0x50]
71038fcaa8  stp x29,x30,[sp, #0x60]
71038fcaac  add x29,sp,#0x60
71038fcab0  ldr x26,[x0, #0x20]
71038fcab4  ldrb w22,[x0, #0xc9]
71038fcab8  mov x21,x3
71038fcabc  ldr x24,[x0, #0xb0]
71038fcac0  mov x19,x0
71038fcac4  str x4,[x0, #0xb0]
71038fcac8  ldrh w23,[x0, #0xc4]
71038fcacc  bl 0x71038fb4b0
71038fcad0  mov w20,w0
71038fcad4  cbz w0,0x71038fccb0
71038fcad8  ldr x8,[x19, #0x38]
71038fcadc  add x21,x8,x21
71038fcae0  mov x0,x19
71038fcae4  mov x1,x21
71038fcae8  bl 0x71038fdfe0
71038fcaec  cmp w20,#0x6
71038fcaf0  b.eq 0x71038fcb10
71038fcaf4  cmp w20,#0x4
71038fcaf8  b.ne 0x71038fcb38
71038fcafc  ldr x8,[x19, #0x18]
71038fcb00  ldr x8,[x8, #0xd8]
71038fcb04  str x8,[x21]
71038fcb08  ldrb w8,[x8, #0x8]
71038fcb0c  b 0x71038fcb2c
71038fcb10  adrp x1,0x7104338000
71038fcb14  add x1,x1,#0xe95
71038fcb18  mov w2,#0x17
71038fcb1c  mov x0,x19
71038fcb20  bl 0x7103917660
71038fcb24  str x0,[x21]
71038fcb28  ldrb w8,[x0, #0x8]
71038fcb2c  orr w8,w8,#0x40
71038fcb30  str w8,[x21, #0x8]
71038fcb34  b 0x71038fcb44
71038fcb38  ldr x8,[x19, #0x10]
71038fcb3c  ldp x9,x8,[x8, #-0x10]
71038fcb40  stp x9,x8,[x21]
71038fcb44  add x8,x21,#0x10
71038fcb48  str x8,[x19, #0x10]
71038fcb4c  str x26,[x19, #0x20]
71038fcb50  strb w22,[x19, #0xc9]
71038fcb54  strh w23,[x19, #0xc4]
71038fcb58  str x24,[sp, #0x8]
71038fcb5c  cbz x26,0x71038fcb78
71038fcb60  mov x9,x26
71038fcb64  ldr x10,[x9, #0x8]
71038fcb68  ldr x9,[x9, #0x10]
71038fcb6c  cmp x8,x10
71038fcb70  csel x8,x10,x8,cc
71038fcb74  cbnz x9,0x71038fcb64
71038fcb78  ldr x9,[x19, #0x38]
71038fcb7c  sub x8,x8,x9
71038fcb80  lsr x27,x8,#0x4
71038fcb84  add w8,w27,#0x1
71038fcb88  add w9,w27,#0x8
71038fcb8c  cmp w8,#0x0
71038fcb90  csinc w8,w9,w27,lt
71038fcb94  add w8,w27,w8, ASR #0x3
71038fcb98  mov w10,#0x4240
71038fcb9c  movk w10,#0xf, LSL #16
71038fcba0  mov x28,x26
71038fcba4  add w8,w8,#0xb
71038fcba8  cmp w8,w10
71038fcbac  csel w8,w8,w10,lt
71038fcbb0  str w8,[sp, #0x4]
71038fcbb4  ldr w8,[x19, #0xb8]
71038fcbb8  ldr x22,[x28, #0x18]!
71038fcbbc  cmp w8,w10
71038fcbc0  b.le 0x71038fcc1c
71038fcbc4  str xzr,[x28]
71038fcbc8  cbz x22,0x71038fcc80
71038fcbcc  mov w23,#0x48
71038fcbd0  mov x24,#-0x48
71038fcbd4  ldr x26,[x19, #0x18]
71038fcbd8  ldp x8,x0,[x26]
71038fcbdc  ldr x25,[x22, #0x18]
71038fcbe0  mov x1,x22
71038fcbe4  mov x2,x23
71038fcbe8  mov x3,xzr
71038fcbec  blr x8
71038fcbf0  ldr x8,[x26, #0x18]
71038fcbf4  cmp x22,#0x0
71038fcbf8  mov x22,x25
71038fcbfc  csel x9,xzr,x24,eq
71038fcc00  add x8,x9,x8
71038fcc04  str x8,[x26, #0x18]
71038fcc08  ldrh w8,[x19, #0xa]
71038fcc0c  sub w8,w8,#0x1
71038fcc10  strh w8,[x19, #0xa]
71038fcc14  cbnz x25,0x71038fcbd4
71038fcc18  b 0x71038fcc80
71038fcc1c  cbz x22,0x71038fcc80
71038fcc20  mov w23,#0x48
71038fcc24  mov x24,#-0x48
71038fcc28  ldr x25,[x22, #0x18]
71038fcc2c  cbz x25,0x71038fcc80
71038fcc30  ldr x21,[x19, #0x18]
71038fcc34  ldp x8,x0,[x21]
71038fcc38  mov x1,x22
71038fcc3c  mov x2,x23
71038fcc40  mov x3,xzr
71038fcc44  blr x8
71038fcc48  ldr x8,[x21, #0x18]
71038fcc4c  cmp x22,#0x0
71038fcc50  csel x9,xzr,x24,eq
71038fcc54  add x8,x9,x8
71038fcc58  str x8,[x21, #0x18]
71038fcc5c  ldrh w8,[x19, #0xa]
71038fcc60  sub w8,w8,#0x1
71038fcc64  strh w8,[x19, #0xa]
71038fcc68  str x25,[x28]
71038fcc6c  mov x28,x25
71038fcc70  ldr x22,[x28, #0x18]!
71038fcc74  stur x26,[x28, #-0x8]
71038fcc78  mov x26,x25
71038fcc7c  cbnz x22,0x71038fcc28
71038fcc80  ldr x24,[sp, #0x8]
71038fcc84  mov w8,#0x4240
71038fcc88  movk w8,#0xf, LSL #16
71038fcc8c  cmp w27,w8
71038fcc90  b.ge 0x71038fccb0
71038fcc94  ldr w8,[x19, #0xb8]
71038fcc98  ldr w9,[sp, #0x4]
71038fcc9c  cmp w9,w8
71038fcca0  b.ge 0x71038fccb0
71038fcca4  ldr w1,[sp, #0x4]
71038fcca8  mov x0,x19
71038fccac  bl 0x71038fb530
71038fccb0  str x24,[x19, #0xb0]
71038fccb4  mov w0,w20
71038fccb8  ldp x29,x30,[sp, #0x60]
71038fccbc  ldp x20,x19,[sp, #0x50]
71038fccc0  ldp x22,x21,[sp, #0x40]
71038fccc4  ldp x24,x23,[sp, #0x30]
71038fccc8  ldp x26,x25,[sp, #0x20]
71038fcccc  ldp x28,x27,[sp, #0x10]
71038fccd0  add sp,sp,#0x70
71038fccd4  ret
