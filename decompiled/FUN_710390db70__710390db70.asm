// addr:      710390db70
// offset:    0x390db70
// name:      FUN_710390db70
// mangled:   
// size:      920

710390db70  sub sp,sp,#0x80
710390db74  str x27,[sp, #0x20]
710390db78  stp x26,x25,[sp, #0x30]
710390db7c  stp x24,x23,[sp, #0x40]
710390db80  stp x22,x21,[sp, #0x50]
710390db84  stp x20,x19,[sp, #0x60]
710390db88  stp x29,x30,[sp, #0x70]
710390db8c  add x29,sp,#0x70
710390db90  mov x19,x1
710390db94  ldr w8,[x19, #0x8]!
710390db98  sub w8,w8,#0x8
710390db9c  mov x21,x0
710390dba0  cmp w8,#0x3
710390dba4  b.cs 0x710390dec8
710390dba8  ldr w8,[x21, #0x10]
710390dbac  mov w20,w2
710390dbb0  cmp w8,#0x3d
710390dbb4  b.eq 0x710390dbf0
710390dbb8  cmp w8,#0x2c
710390dbbc  b.ne 0x710390ded8
710390dbc0  mov x8,x21
710390dbc4  ldr w9,[x8, #0x20]!
710390dbc8  ldur w10,[x8, #-0x1c]
710390dbcc  mov x22,x1
710390dbd0  cmp w9,#0x121
710390dbd4  stur w10,[x8, #-0x18]
710390dbd8  b.ne 0x710390dc1c
710390dbdc  add x1,x21,#0x18
710390dbe0  mov x0,x21
710390dbe4  bl 0x710390efb0
710390dbe8  str w0,[x21, #0x10]
710390dbec  b 0x710390dc2c
710390dbf0  mov x25,x21
710390dbf4  ldr w8,[x25, #0x20]!
710390dbf8  cmp w8,#0x121
710390dbfc  ldur w9,[x25, #-0x1c]
710390dc00  stur w9,[x25, #-0x18]
710390dc04  b.ne 0x710390dd80
710390dc08  add x1,x21,#0x18
710390dc0c  mov x0,x21
710390dc10  bl 0x710390efb0
710390dc14  str w0,[x21, #0x10]
710390dc18  b 0x710390dd90
710390dc1c  ldp x9,x8,[x8]
710390dc20  stp x9,x8,[x21, #0x10]
710390dc24  mov w8,#0x121
710390dc28  str w8,[x21, #0x20]
710390dc2c  mov x8,sp
710390dc30  add x1,x8,#0x8
710390dc34  mov x0,x21
710390dc38  str x22,[sp]
710390dc3c  bl 0x710390d5f0
710390dc40  ldr w8,[sp, #0x8]
710390dc44  cmp w8,#0xa
710390dc48  b.eq 0x710390dd0c
710390dc4c  ldr x23,[x21, #0x30]
710390dc50  ldrb w9,[x23, #0x3c]
710390dc54  mov w10,wzr
710390dc58  mov w11,#0x8
710390dc5c  ldr w12,[x22, #0x8]
710390dc60  cmp w12,#0xa
710390dc64  b.ne 0x710390dcb0
710390dc68  ldrb w12,[x22, #0x13]
710390dc6c  cmp w8,w12
710390dc70  b.ne 0x710390dc90
710390dc74  ldrb w12,[x22, #0x12]
710390dc78  ldr w13,[sp, #0x10]
710390dc7c  cmp w13,w12
710390dc80  b.ne 0x710390dc90
710390dc84  mov w10,#0x1
710390dc88  strb w11,[x22, #0x13]
710390dc8c  strb w9,[x22, #0x12]
710390dc90  cmp w8,#0x8
710390dc94  b.ne 0x710390dcb0
710390dc98  ldrsh w12,[x22, #0x10]
710390dc9c  ldr w13,[sp, #0x10]
710390dca0  cmp w13,w12
710390dca4  b.ne 0x710390dcb0
710390dca8  mov w10,#0x1
710390dcac  strh w9,[x22, #0x10]
710390dcb0  ldr x22,[x22]
710390dcb4  cbnz x22,0x710390dc5c
710390dcb8  cbz w10,0x710390dd0c
710390dcbc  cmp w8,#0x8
710390dcc0  mov w8,#0x5
710390dcc4  csel w1,wzr,w8,eq
710390dcc8  ldr w8,[sp, #0x10]
710390dccc  bfm w1,w9,#0x1a,#0x7
710390dcd0  bfm w1,w8,#0x9,#0x8
710390dcd4  mov x0,x23
710390dcd8  bl 0x7103913040
710390dcdc  ldr x9,[x23]
710390dce0  ldrb w10,[x23, #0x3c]
710390dce4  add w8,w10,#0x1
710390dce8  ldrb w11,[x9, #0xc]
710390dcec  cmp w10,w11
710390dcf0  b.cc 0x710390dd08
710390dcf4  cmp w10,#0xfe
710390dcf8  b.cs 0x710390def8
710390dcfc  strb w8,[x9, #0xc]
710390dd00  ldrb w8,[x23, #0x3c]
710390dd04  add w8,w8,#0x1
710390dd08  strb w8,[x23, #0x3c]
710390dd0c  ldr x8,[x21, #0x38]
710390dd10  ldrh w8,[x8, #0xc6]
710390dd14  add w8,w8,w20
710390dd18  cmp w8,#0xc9
710390dd1c  b.ge 0x710390dee4
710390dd20  add w2,w20,#0x1
710390dd24  mov x1,sp
710390dd28  mov x0,x21
710390dd2c  bl 0x710390db70
710390dd30  add x24,x21,#0x30
710390dd34  ldr x0,[x24]
710390dd38  ldrb w8,[x0, #0x3c]
710390dd3c  mov x9,#-0x1
710390dd40  str x9,[sp, #0x10]
710390dd44  orr w9,wzr,#0x7
710390dd48  str w9,[sp]
710390dd4c  sub w8,w8,#0x1
710390dd50  str w8,[sp, #0x8]
710390dd54  mov x2,sp
710390dd58  mov x1,x19
710390dd5c  bl 0x7103914300
710390dd60  ldp x29,x30,[sp, #0x70]
710390dd64  ldr x27,[sp, #0x20]
710390dd68  ldp x20,x19,[sp, #0x60]
710390dd6c  ldp x22,x21,[sp, #0x50]
710390dd70  ldp x24,x23,[sp, #0x40]
710390dd74  ldp x26,x25,[sp, #0x30]
710390dd78  add sp,sp,#0x80
710390dd7c  ret
710390dd80  ldp x8,x9,[x25]
710390dd84  stp x8,x9,[x21, #0x10]
710390dd88  mov w8,#0x121
710390dd8c  str w8,[x21, #0x20]
710390dd90  mov x1,sp
710390dd94  mov x0,x21
710390dd98  mov w2,wzr
710390dd9c  bl 0x710390b770
710390dda0  ldr w8,[x21, #0x10]
710390dda4  add x24,x21,#0x30
710390dda8  cmp w8,#0x2c
710390ddac  b.ne 0x710390de24
710390ddb0  add x23,x21,#0x18
710390ddb4  add x26,x21,#0x10
710390ddb8  mov w22,#0x1
710390ddbc  mov w27,#0x121
710390ddc0  ldr w8,[x21, #0x4]
710390ddc4  str w8,[x21, #0x8]
710390ddc8  ldr w8,[x21, #0x20]
710390ddcc  cmp w8,#0x121
710390ddd0  b.ne 0x710390dde8
710390ddd4  mov x0,x21
710390ddd8  mov x1,x23
710390dddc  bl 0x710390efb0
710390dde0  str w0,[x21, #0x10]
710390dde4  b 0x710390ddf4
710390dde8  ldp x8,x9,[x25]
710390ddec  stp x8,x9,[x26]
710390ddf0  str w27,[x25]
710390ddf4  ldr x0,[x21, #0x30]
710390ddf8  mov x1,sp
710390ddfc  bl 0x7103913770
710390de00  mov x1,sp
710390de04  mov x0,x21
710390de08  mov w2,wzr
710390de0c  bl 0x710390b770
710390de10  ldr w8,[x21, #0x10]
710390de14  add w22,w22,#0x1
710390de18  cmp w8,#0x2c
710390de1c  b.eq 0x710390ddc0
710390de20  b 0x710390de28
710390de24  mov w22,#0x1
710390de28  ldr x0,[x24]
710390de2c  cmp w22,w20
710390de30  b.ne 0x710390de68
710390de34  ldr w8,[sp]
710390de38  cmp w8,#0xe
710390de3c  b.eq 0x710390de98
710390de40  cmp w8,#0xd
710390de44  b.ne 0x710390dd54
710390de48  orr w8,wzr,#0x7
710390de4c  str w8,[sp]
710390de50  ldr x8,[x0]
710390de54  ldr x8,[x8, #0x38]
710390de58  ldrsw x9,[sp, #0x8]
710390de5c  ldr w8,[x8, x9, LSL #0x2]
710390de60  ubfx w8,w8,#0x6,#0x8
710390de64  b 0x710390dd50
710390de68  mov x3,sp
710390de6c  mov w1,w20
710390de70  mov w2,w22
710390de74  bl 0x710390c8b0
710390de78  cmp w22,w20
710390de7c  b.le 0x710390dd34
710390de80  ldr x8,[x24]
710390de84  ldrb w9,[x8, #0x3c]
710390de88  sub w10,w20,w22
710390de8c  add w9,w9,w10
710390de90  strb w9,[x8, #0x3c]
710390de94  b 0x710390dd34
710390de98  ldr x8,[x0]
710390de9c  ldrsw x9,[sp, #0x8]
710390dea0  lsl x9,x9,#0x2
710390dea4  ldr x8,[x8, #0x38]
710390dea8  ldr w10,[x8, x9, LSL #0x0]
710390deac  mov w11,#0x1000000
710390deb0  bfxil w11,w10,#0x0,#0x17
710390deb4  str w11,[x8, x9, LSL #0x0]
710390deb8  orr w8,wzr,#0xc
710390debc  str w8,[sp]
710390dec0  ldr x0,[x24]
710390dec4  b 0x710390dd54
710390dec8  adrp x1,0x7104421000
710390decc  add x1,x1,#0x48
710390ded0  mov x0,x21
710390ded4  bl 0x710390eb80
710390ded8  mov w1,#0x3d
710390dedc  mov x0,x21
710390dee0  bl 0x710390a760
710390dee4  ldr x0,[x21, #0x30]
710390dee8  adrp x2,0x710439b000
710390deec  add x2,x2,#0xd46
710390def0  mov w1,#0xc8
710390def4  bl 0x710390b2a0
710390def8  ldr x0,[x23, #0x10]
710390defc  adrp x1,0x710439b000
710390df00  add x1,x1,#0xd7d
710390df04  bl 0x710390eb80
