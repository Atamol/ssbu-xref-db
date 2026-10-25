// addr:      7101cdfad0
// offset:    0x1cdfad0
// name:      FUN_7101cdfad0
// mangled:   
// size:      380

7101cdfad0  sub sp,sp,#0xd0
7101cdfad4  str x21,[sp, #0xa0]
7101cdfad8  stp x20,x19,[sp, #0xb0]
7101cdfadc  stp x29,x30,[sp, #0xc0]
7101cdfae0  add x29,sp,#0xc0
7101cdfae4  mov w21,w1
7101cdfae8  adrp x1,0x710436c000
7101cdfaec  add x1,x1,#0x539
7101cdfaf0  sub x8,x29,#0x30
7101cdfaf4  mov w19,w3
7101cdfaf8  mov w20,w2
7101cdfafc  bl 0x7103776640
7101cdfb00  orr w8,w20,#0x2
7101cdfb04  and w8,w8,#0xffff
7101cdfb08  cmp w8,#0x2
7101cdfb0c  b.ne 0x7101cdfb60
7101cdfb10  add x9,sp,#0x48
7101cdfb14  mov w8,#0x9dc5
7101cdfb18  movk w8,#0x811c, LSL #16
7101cdfb1c  add x2,x9,#0x8
7101cdfb20  strb wzr,[sp, #0x50]
7101cdfb24  str xzr,[sp, #0x48]
7101cdfb28  cbz w21,0x7101cdfb7c
7101cdfb2c  mov x10,#0x3
7101cdfb30  movk x10,#0x756f, LSL #32
7101cdfb34  movk x10,#0x74, LSL #48
7101cdfb38  add x9,x9,#0x9
7101cdfb3c  mov w11,#0x6f
7101cdfb40  stur x10,[sp, #0x4c]
7101cdfb44  mov w10,#0x89
7101cdfb48  mul w8,w8,w10
7101cdfb4c  and w11,w11,#0xff
7101cdfb50  eor w8,w8,w11
7101cdfb54  ldrb w11,[x9], #0x1
7101cdfb58  cbnz w11,0x7101cdfb48
7101cdfb5c  b 0x7101cdfbb0
7101cdfb60  ldur x20,[x29, #-0x28]
7101cdfb64  adrp x1,0x71043ad000
7101cdfb68  add x1,x1,#0x8c6
7101cdfb6c  tbnz w19,#0x0,0x7101cdfbfc
7101cdfb70  mov x0,x20
7101cdfb74  bl 0x7103778760
7101cdfb78  b 0x7101cdfc08
7101cdfb7c  mov w10,#0x6e69
7101cdfb80  add x9,x9,#0x9
7101cdfb84  mov w12,#0x2
7101cdfb88  strh w10,[sp, #0x50]
7101cdfb8c  mov w11,#0x69
7101cdfb90  mov w10,#0x89
7101cdfb94  strb wzr,[sp, #0x52]
7101cdfb98  str w12,[sp, #0x4c]
7101cdfb9c  mul w8,w8,w10
7101cdfba0  and w11,w11,#0xff
7101cdfba4  eor w8,w8,w11
7101cdfba8  ldrb w11,[x9], #0x1
7101cdfbac  cbnz w11,0x7101cdfb9c
7101cdfbb0  str w8,[sp, #0x48]
7101cdfbb4  and w8,w20,#0xffff
7101cdfbb8  mov w3,wzr
7101cdfbbc  cmp w8,#0x3
7101cdfbc0  strb wzr,[sp, #0x8]
7101cdfbc4  str xzr,[sp]
7101cdfbc8  b.hi 0x7101cdfbdc
7101cdfbcc  adrp x8,0x710446a000
7101cdfbd0  add x8,x8,#0x5c0
7101cdfbd4  sxth x9,w20
7101cdfbd8  ldr w3,[x8, x9, LSL #0x2]
7101cdfbdc  adrp x1,0x710425f000
7101cdfbe0  add x1,x1,#0x575
7101cdfbe4  mov x0,sp
7101cdfbe8  mov x20,sp
7101cdfbec  bl 0x710062dc20
7101cdfbf0  add x1,x20,#0x8
7101cdfbf4  ldur x20,[x29, #-0x28]
7101cdfbf8  tbz w19,#0x0,0x7101cdfb70
7101cdfbfc  fmov s0,0x3f800000
7101cdfc00  mov x0,x20
7101cdfc04  bl 0x7103778300
7101cdfc08  adrp x8,0x710523d000
7101cdfc0c  add x8,x8,#0x988
7101cdfc10  stp x8,xzr,[x29, #-0x30]
7101cdfc14  cbz x20,0x7101cdfc38
7101cdfc18  ldr x0,[x20, #0x18]
7101cdfc1c  adrp x8,0x710523d000
7101cdfc20  add x8,x8,#0x9a8
7101cdfc24  stp x8,xzr,[x20, #0x10]
7101cdfc28  cbz x0,0x7101cdfc30
7101cdfc2c  bl 0x710392eb40
7101cdfc30  mov x0,x20
7101cdfc34  bl 0x710392eb40
7101cdfc38  ldp x29,x30,[sp, #0xc0]
7101cdfc3c  ldr x21,[sp, #0xa0]
7101cdfc40  ldp x20,x19,[sp, #0xb0]
7101cdfc44  add sp,sp,#0xd0
7101cdfc48  ret
