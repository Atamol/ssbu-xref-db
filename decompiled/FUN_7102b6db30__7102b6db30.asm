// addr:      7102b6db30
// offset:    0x2b6db30
// name:      FUN_7102b6db30
// mangled:   
// size:      828

7102b6db30  sub sp,sp,#0x110
7102b6db34  str x28,[sp, #0xb0]
7102b6db38  stp x26,x25,[sp, #0xc0]
7102b6db3c  stp x24,x23,[sp, #0xd0]
7102b6db40  stp x22,x21,[sp, #0xe0]
7102b6db44  stp x20,x19,[sp, #0xf0]
7102b6db48  stp x29,x30,[sp, #0x100]
7102b6db4c  add x29,sp,#0x100
7102b6db50  mov x19,x0
7102b6db54  cbz x1,0x7102b6dba4
7102b6db58  mov x20,x1
7102b6db5c  mov w1,#0x5f
7102b6db60  mov x0,x20
7102b6db64  bl 0x71039c0080
7102b6db68  mov x21,x0
7102b6db6c  cbnz x0,0x7102b6db80
7102b6db70  mov x0,x20
7102b6db74  bl 0x71039c0070
7102b6db78  adds x21,x20,x0
7102b6db7c  b.eq 0x7102b6dba4
7102b6db80  sub x8,x21,x20
7102b6db84  cmp x8,#0x4
7102b6db88  b.ne 0x7102b6dba4
7102b6db8c  adrp x1,0x7104317000
7102b6db90  add x1,x1,#0x18f
7102b6db94  mov w2,#0x4
7102b6db98  mov x0,x20
7102b6db9c  bl 0x71039c00c0
7102b6dba0  cbz w0,0x7102b6dbc8
7102b6dba4  strb wzr,[x19]
7102b6dba8  ldp x29,x30,[sp, #0x100]
7102b6dbac  ldr x28,[sp, #0xb0]
7102b6dbb0  ldp x20,x19,[sp, #0xf0]
7102b6dbb4  ldp x22,x21,[sp, #0xe0]
7102b6dbb8  ldp x24,x23,[sp, #0xd0]
7102b6dbbc  ldp x26,x25,[sp, #0xc0]
7102b6dbc0  add sp,sp,#0x110
7102b6dbc4  ret
7102b6dbc8  ldrb w8,[x21]
7102b6dbcc  cbz w8,0x7102b6dba4
7102b6dbd0  add x21,x21,#0x1
7102b6dbd4  mov w1,#0x5f
7102b6dbd8  mov x0,x21
7102b6dbdc  bl 0x71039c0080
7102b6dbe0  mov x20,x0
7102b6dbe4  cbnz x0,0x7102b6dbf4
7102b6dbe8  mov x0,x21
7102b6dbec  bl 0x71039c0070
7102b6dbf0  add x20,x21,x0
7102b6dbf4  sub x8,x20,x21
7102b6dbf8  cmp x8,#0x6
7102b6dbfc  b.ne 0x7102b6dba4
7102b6dc00  adrp x1,0x7104306000
7102b6dc04  add x1,x1,#0x7c6
7102b6dc08  orr w2,wzr,#0x6
7102b6dc0c  mov x0,x21
7102b6dc10  bl 0x71039c00c0
7102b6dc14  cbz w0,0x7102b6dc40
7102b6dc18  adrp x1,0x71043bc000
7102b6dc1c  add x1,x1,#0x7d1
7102b6dc20  orr w2,wzr,#0x6
7102b6dc24  mov x0,x21
7102b6dc28  bl 0x71039c00c0
7102b6dc2c  cbnz w0,0x7102b6dba4
7102b6dc30  mov w22,#0x1
7102b6dc34  ldrb w8,[x20]
7102b6dc38  cbnz w8,0x7102b6dc4c
7102b6dc3c  b 0x7102b6dba4
7102b6dc40  mov w22,wzr
7102b6dc44  ldrb w8,[x20]
7102b6dc48  cbz w8,0x7102b6dba4
7102b6dc4c  add x21,x20,#0x1
7102b6dc50  mov w1,#0x5f
7102b6dc54  mov x0,x21
7102b6dc58  bl 0x71039c0080
7102b6dc5c  cbnz x0,0x7102b6dc6c
7102b6dc60  mov x0,x21
7102b6dc64  bl 0x71039c0070
7102b6dc68  add x0,x21,x0
7102b6dc6c  sub x8,x0,x21
7102b6dc70  cmp x8,#0x2
7102b6dc74  b.ne 0x7102b6dba4
7102b6dc78  ldrb w23,[x20, #0x1]
7102b6dc7c  sub w8,w23,#0x30
7102b6dc80  cmp w8,#0xa
7102b6dc84  b.cs 0x7102b6dba4
7102b6dc88  ldrb w24,[x20, #0x2]
7102b6dc8c  sub w8,w24,#0x30
7102b6dc90  cmp w8,#0xa
7102b6dc94  b.cs 0x7102b6dba4
7102b6dc98  ldrb w8,[x0]
7102b6dc9c  cbz w8,0x7102b6dba4
7102b6dca0  add x20,x0,#0x1
7102b6dca4  mov w1,#0x5f
7102b6dca8  mov x0,x20
7102b6dcac  bl 0x71039c0080
7102b6dcb0  cbnz x0,0x7102b6dcc0
7102b6dcb4  mov x0,x20
7102b6dcb8  bl 0x71039c0070
7102b6dcbc  add x0,x20,x0
7102b6dcc0  sub x8,x0,x20
7102b6dcc4  cmp x8,#0x1
7102b6dcc8  b.ne 0x7102b6dba4
7102b6dccc  ldrb w8,[x20]
7102b6dcd0  sub w25,w8,#0x41
7102b6dcd4  cmp w25,#0x3
7102b6dcd8  b.cs 0x7102b6dba4
7102b6dcdc  stur wzr,[x29, #-0x78]
7102b6dce0  sturb wzr,[x29, #-0x74]
7102b6dce4  ldrb w8,[x0]
7102b6dce8  cbz w8,0x7102b6dba4
7102b6dcec  add x21,x0,#0x1
7102b6dcf0  mov w1,#0x5f
7102b6dcf4  mov x0,x21
7102b6dcf8  bl 0x71039c0080
7102b6dcfc  cbnz x0,0x7102b6dd0c
7102b6dd00  mov x0,x21
7102b6dd04  bl 0x71039c0070
7102b6dd08  add x0,x21,x0
7102b6dd0c  subs x9,x0,x21
7102b6dd10  b.eq 0x7102b6dba4
7102b6dd14  mov w8,#0xa
7102b6dd18  sub x10,x29,#0x78
7102b6dd1c  madd w8,w23,w8,w24
7102b6dd20  and w24,w25,#0xff
7102b6dd24  orr x25,x10,#0x4
7102b6dd28  cmp w9,#0x1f
7102b6dd2c  orr w10,wzr,#0x1f
7102b6dd30  csel w10,w9,w10,cc
7102b6dd34  mov w20,w22
7102b6dd38  cmp w10,#0x1
7102b6dd3c  b.lt 0x7102b6dd68
7102b6dd40  sub x11,x29,#0x78
7102b6dd44  mov x9,xzr
7102b6dd48  orr x11,x11,#0x4
7102b6dd4c  ldrb w12,[x21, x9, LSL ]
7102b6dd50  cbz w12,0x7102b6dd6c
7102b6dd54  strb w12,[x11, x9, LSL ]
7102b6dd58  add x9,x9,#0x1
7102b6dd5c  cmp w9,w10
7102b6dd60  b.cc 0x7102b6dd4c
7102b6dd64  b 0x7102b6dd6c
7102b6dd68  mov w9,wzr
7102b6dd6c  sub w23,w8,#0x210
7102b6dd70  sub x8,x29,#0x78
7102b6dd74  add x8,x8,w9, UXTW 
7102b6dd78  strb wzr,[x8, #0x4]
7102b6dd7c  stur w9,[x29, #-0x78]
7102b6dd80  str wzr,[sp, #0x60]
7102b6dd84  add x8,sp,#0x60
7102b6dd88  strb wzr,[sp, #0x64]
7102b6dd8c  orr x21,x8,#0x4
7102b6dd90  ldrb w8,[x0]
7102b6dd94  cbz w8,0x7102b6de10
7102b6dd98  add x0,x0,#0x1
7102b6dd9c  mov w1,#0x5f
7102b6dda0  mov x22,x0
7102b6dda4  bl 0x71039c0080
7102b6dda8  cbnz x0,0x7102b6ddbc
7102b6ddac  mov x0,x22
7102b6ddb0  mov x26,x22
7102b6ddb4  bl 0x71039c0070
7102b6ddb8  add x0,x22,x0
7102b6ddbc  sub w8,w0,w22
7102b6ddc0  cmp w8,#0x1f
7102b6ddc4  orr w9,wzr,#0x1f
7102b6ddc8  csel w9,w8,w9,cc
7102b6ddcc  cmp w9,#0x1
7102b6ddd0  b.lt 0x7102b6ddfc
7102b6ddd4  add x10,sp,#0x60
7102b6ddd8  mov x8,xzr
7102b6dddc  orr x10,x10,#0x4
7102b6dde0  ldrb w11,[x22, x8, LSL ]
7102b6dde4  cbz w11,0x7102b6de00
7102b6dde8  strb w11,[x10, x8, LSL ]
7102b6ddec  add x8,x8,#0x1
7102b6ddf0  cmp w8,w9
7102b6ddf4  b.cc 0x7102b6dde0
7102b6ddf8  b 0x7102b6de00
7102b6ddfc  mov w8,wzr
7102b6de00  add x9,sp,#0x60
7102b6de04  add x9,x9,w8, UXTW 
7102b6de08  strb wzr,[x9, #0x4]
7102b6de0c  str w8,[sp, #0x60]
7102b6de10  stp w20,w24,[sp, #0x8]
7102b6de14  add x20,sp,#0x8
7102b6de18  add x0,x20,#0xc
7102b6de1c  mov x1,x25
7102b6de20  str w23,[sp, #0x10]
7102b6de24  bl 0x7102b5ee80
7102b6de28  add x0,x20,#0x30
7102b6de2c  mov x1,x21
7102b6de30  bl 0x7102b5ee80
7102b6de34  ldr x8,[sp, #0x8]
7102b6de38  ldr w9,[sp, #0x10]
7102b6de3c  add x0,x19,#0x10
7102b6de40  add x1,x20,#0x10
7102b6de44  strb wzr,[x19]
7102b6de48  str w9,[x19, #0xc]
7102b6de4c  stur x8,[x19, #0x4]
7102b6de50  bl 0x7102b5ee80
7102b6de54  add x0,x19,#0x34
7102b6de58  add x1,x20,#0x34
7102b6de5c  bl 0x7102b5ee80
7102b6de60  mov w8,#0x1
7102b6de64  strb w8,[x19]
7102b6de68  b 0x7102b6dba8
