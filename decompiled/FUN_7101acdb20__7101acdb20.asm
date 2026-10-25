// addr:      7101acdb20
// offset:    0x1acdb20
// name:      FUN_7101acdb20
// mangled:   
// size:      688

7101acdb20  sub sp,sp,#0xf0
7101acdb24  str x27,[sp, #0x90]
7101acdb28  stp x26,x25,[sp, #0xa0]
7101acdb2c  stp x24,x23,[sp, #0xb0]
7101acdb30  stp x22,x21,[sp, #0xc0]
7101acdb34  stp x20,x19,[sp, #0xd0]
7101acdb38  stp x29,x30,[sp, #0xe0]
7101acdb3c  add x29,sp,#0xe0
7101acdb40  ldr x24,[x0, #0x110]
7101acdb44  ldr w9,[x24]
7101acdb48  adrp x8,0x7104329000
7101acdb4c  add x8,x8,#0xb1a
7101acdb50  mov x20,x8
7101acdb54  sub w9,w9,#0x1
7101acdb58  mov x19,x0
7101acdb5c  cmp w9,#0x2
7101acdb60  b.hi 0x7101acdb70
7101acdb64  adrp x10,0x71050a9000
7101acdb68  add x10,x10,#0x9e0
7101acdb6c  ldr x20,[x10, w9, SXTW #0x3]
7101acdb70  ldr w10,[x24, #0x18]
7101acdb74  adrp x9,0x710435b000
7101acdb78  add x9,x9,#0x175
7101acdb7c  adrp x25,0x710532f000
7101acdb80  ldr x23,[x24, #0x8]
7101acdb84  cmp w10,#0x1
7101acdb88  csel x8,x9,x8,eq
7101acdb8c  adrp x9,0x7104400000
7101acdb90  add x9,x9,#0xf32
7101acdb94  cmp w10,#0x2
7101acdb98  csel x21,x9,x8,eq
7101acdb9c  ldr x8,[x25, #0x730]
7101acdba0  ldr x26,[x8, #0x8]
7101acdba4  ldr x22,[x26, #0x168]
7101acdba8  mov x0,x22
7101acdbac  mov x1,x23
7101acdbb0  bl 0x71032632a0
7101acdbb4  tbz w0,#0x0,0x7101acdbc8
7101acdbb8  mov x1,#0xb807
7101acdbbc  movk x1,#0xb1cc, LSL #16
7101acdbc0  movk x1,#0x11, LSL #32
7101acdbc4  b 0x7101acdbe4
7101acdbc8  add x0,x26,#0x160
7101acdbcc  mov x1,x23
7101acdbd0  bl 0x71032648e0
7101acdbd4  tbz w0,#0x0,0x7101acdbf0
7101acdbd8  mov x1,#0xf67e
7101acdbdc  movk x1,#0x3829, LSL #16
7101acdbe0  movk x1,#0x14, LSL #32
7101acdbe4  mov x0,x22
7101acdbe8  bl 0x71032631a0
7101acdbec  mov x23,x0
7101acdbf0  str x23,[x24, #0x8]
7101acdbf4  ldr x8,[x19, #0x110]
7101acdbf8  ldr x22,[x8, #0x8]
7101acdbfc  mov x27,#-0x3f00000000000000
7101acdc00  and x8,x22,#-0x100000000000000
7101acdc04  cmp x8,x27
7101acdc08  b.ne 0x7101acdc54
7101acdc0c  and x8,x22,#0xffffffffff
7101acdc10  cbz x8,0x7101acdc54
7101acdc14  ldr x24,[x26, #0x168]
7101acdc18  mov x1,#0x26b0
7101acdc1c  movk x1,#0xca41, LSL #16
7101acdc20  movk x1,#0x14, LSL #32
7101acdc24  mov x0,x24
7101acdc28  bl 0x71032631a0
7101acdc2c  and x8,x0,#-0x100000000000000
7101acdc30  cmp x8,x27
7101acdc34  b.ne 0x7101acdc6c
7101acdc38  and x8,x0,#0xffffffffff
7101acdc3c  cbz x8,0x7101acdc6c
7101acdc40  eor x8,x22,x0
7101acdc44  tst x8,#0xffffffffff
7101acdc48  add x23,x19,#0x1a0
7101acdc4c  b.ne 0x7101acdc70
7101acdc50  b 0x7101acdc58
7101acdc54  add x23,x19,#0x1a0
7101acdc58  adrp x1,0x7104329000
7101acdc5c  add x1,x1,#0xb1a
7101acdc60  mov x0,x23
7101acdc64  bl 0x710377a120
7101acdc68  b 0x7101acdccc
7101acdc6c  add x23,x19,#0x1a0
7101acdc70  mov x0,x24
7101acdc74  mov x1,x22
7101acdc78  mov w2,wzr
7101acdc7c  bl 0x7103263540
7101acdc80  ldr x1,[x26, #0x168]
7101acdc84  mov w24,w0
7101acdc88  add x0,sp,#0x48
7101acdc8c  mov x2,x22
7101acdc90  add x26,sp,#0x48
7101acdc94  bl 0x7103262310
7101acdc98  add x2,x26,#0x8
7101acdc9c  adrp x0,0x710439b000
7101acdca0  add x0,x0,#0x815
7101acdca4  mov x8,sp
7101acdca8  mov w1,w24
7101acdcac  mov x22,sp
7101acdcb0  bl 0x71003a4ca0
7101acdcb4  add x3,x22,#0x8
7101acdcb8  adrp x1,0x71043f0000
7101acdcbc  add x1,x1,#0x546
7101acdcc0  mov w2,#0x1
7101acdcc4  mov x0,x23
7101acdcc8  bl 0x710377a280
7101acdccc  ldr x8,[x19, #0x110]
7101acdcd0  ldr x22,[x8, #0x10]
7101acdcd4  mov x24,#0x6900000000000000
7101acdcd8  and x8,x22,#-0x100000000000000
7101acdcdc  cmp x8,x24
7101acdce0  b.ne 0x7101acdd3c
7101acdce4  and x8,x22,#0xffffffffff
7101acdce8  cbz x8,0x7101acdd3c
7101acdcec  ldr x8,[x25, #0x730]
7101acdcf0  ldr x8,[x8, #0x8]
7101acdcf4  ldr x23,[x8, #0x178]
7101acdcf8  ldr x0,[x23, #0x8]
7101acdcfc  mov x1,#0x6a0c
7101acdd00  movk x1,#0xbebd, LSL #16
7101acdd04  movk x1,#0x14, LSL #32
7101acdd08  bl 0x71032b23e0
7101acdd0c  and x8,x0,#-0x100000000000000
7101acdd10  and x9,x0,#0xffffffffff
7101acdd14  cmp x8,x24
7101acdd18  b.ne 0x7101acdd30
7101acdd1c  cbz x9,0x7101acdd30
7101acdd20  eor x8,x0,x22
7101acdd24  tst x8,#0xffffffffff
7101acdd28  b.ne 0x7101acdd50
7101acdd2c  b 0x7101acdd3c
7101acdd30  cbz x9,0x7101acdd50
7101acdd34  cmp x8,x24
7101acdd38  b.ne 0x7101acdd50
7101acdd3c  add x0,x19,#0x1d8
7101acdd40  adrp x1,0x7104329000
7101acdd44  add x1,x1,#0xb1a
7101acdd48  bl 0x710377a120
7101acdd4c  b 0x7101acdd98
7101acdd50  add x0,sp,#0x48
7101acdd54  mov x1,x23
7101acdd58  mov x2,x22
7101acdd5c  add x24,x19,#0x1d8
7101acdd60  add x25,sp,#0x48
7101acdd64  bl 0x71032b1a60
7101acdd68  add x1,x25,#0x8
7101acdd6c  adrp x0,0x7104452000
7101acdd70  add x0,x0,#0xf57
7101acdd74  mov x8,sp
7101acdd78  mov x22,sp
7101acdd7c  bl 0x71003a4ca0
7101acdd80  add x3,x22,#0x8
7101acdd84  adrp x1,0x71042f7000
7101acdd88  add x1,x1,#0xda8
7101acdd8c  mov w2,#0x1
7101acdd90  mov x0,x24
7101acdd94  bl 0x710377a280
7101acdd98  add x0,x19,#0x168
7101acdd9c  mov x1,x20
7101acdda0  bl 0x710377a120
7101acdda4  add x0,x19,#0x210
7101acdda8  mov x1,x21
7101acddac  bl 0x710377a120
7101acddb0  ldp x29,x30,[sp, #0xe0]
7101acddb4  ldr x27,[sp, #0x90]
7101acddb8  ldp x20,x19,[sp, #0xd0]
7101acddbc  ldp x22,x21,[sp, #0xc0]
7101acddc0  ldp x24,x23,[sp, #0xb0]
7101acddc4  ldp x26,x25,[sp, #0xa0]
7101acddc8  add sp,sp,#0xf0
7101acddcc  ret
