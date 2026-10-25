// addr:      7101d7da70
// offset:    0x1d7da70
// name:      FUN_7101d7da70
// mangled:   
// size:      2364

7101d7da70  sub sp,sp,#0x1a0
7101d7da74  stp x28,x27,[sp, #0x140]
7101d7da78  stp x26,x25,[sp, #0x150]
7101d7da7c  stp x24,x23,[sp, #0x160]
7101d7da80  stp x22,x21,[sp, #0x170]
7101d7da84  stp x20,x19,[sp, #0x180]
7101d7da88  stp x29,x30,[sp, #0x190]
7101d7da8c  add x29,sp,#0x190
7101d7da90  ldr x20,[x0, #0x80]
7101d7da94  str w1,[x20, #0x2f8]
7101d7da98  mov x21,x2
7101d7da9c  ldp x8,x9,[x2]
7101d7daa0  str x9,[x20, #0x308]
7101d7daa4  str x8,[x20, #0x300]
7101d7daa8  ldp x8,x9,[x2, #0x10]
7101d7daac  ldr x10,[x2, #0x20]
7101d7dab0  ldrb w11,[x2, #0x28]
7101d7dab4  strb w11,[x20, #0x328]
7101d7dab8  str x10,[x20, #0x320]
7101d7dabc  str x9,[x20, #0x318]
7101d7dac0  str x8,[x20, #0x310]
7101d7dac4  ldp x8,x9,[x2, #0x30]
7101d7dac8  ldr w10,[x2, #0x40]
7101d7dacc  add x11,x20,#0x300
7101d7dad0  mov x19,x0
7101d7dad4  cmp x11,x2
7101d7dad8  str w10,[x20, #0x340]
7101d7dadc  str x9,[x20, #0x338]
7101d7dae0  str x8,[x20, #0x330]
7101d7dae4  b.eq 0x7101d7db18
7101d7dae8  ldp x1,x2,[x21, #0x48]
7101d7daec  add x0,x20,#0x348
7101d7daf0  bl 0x7101d71ea0
7101d7daf4  add x0,x20,#0x360
7101d7daf8  add x1,x21,#0x68
7101d7dafc  bl 0x7101796d70
7101d7db00  ldr x8,[x21, #0x98]
7101d7db04  str x8,[x20, #0x398]
7101d7db08  add x0,x20,#0x3a0
7101d7db0c  ldp x1,x2,[x21, #0xa0]
7101d7db10  bl 0x710184cdd0
7101d7db14  ldr w1,[x20, #0x2f8]
7101d7db18  ldrb w8,[x21, #0xb8]
7101d7db1c  ldr x9,[x20, #0x3d8]
7101d7db20  mov x10,#0xff0000000000
7101d7db24  mov w26,#0xffffffff
7101d7db28  movk x10,#0xd9ff, LSL #48
7101d7db2c  cmp w1,#0x4
7101d7db30  strb wzr,[x20, #0x3f0]
7101d7db34  str w26,[x20, #0x3c0]
7101d7db38  str x9,[x20, #0x3e0]
7101d7db3c  strb w8,[x20, #0x3b8]
7101d7db40  str x10,[x20, #0x3f8]
7101d7db44  str x10,[x20, #0x400]
7101d7db48  b.hi 0x7101d7db64
7101d7db4c  mov w8,w1
7101d7db50  adrp x9,0x71044fb000
7101d7db54  add x9,x9,#0x1f8
7101d7db58  ldrsw x8,[x9, x8, LSL #0x2]
7101d7db5c  add x8,x8,x9
7101d7db60  br x8
7101d7db64  add x21,x20,#0x250
7101d7db68  str wzr,[x20, #0x250]
7101d7db6c  b 0x7101d7db84
7101d7db70  mov w8,#0x2
7101d7db74  b 0x7101d7db7c
7101d7db78  mov w8,#0x1
7101d7db7c  add x21,x20,#0x250
7101d7db80  str w8,[x20, #0x250]
7101d7db84  adrp x8,0x7105314000
7101d7db88  add x8,x8,#0x4d8
7101d7db8c  ldarb w8,[x8]
7101d7db90  tbz w8,#0x0,0x7101d7e368
7101d7db94  ldr w8,[x21]
7101d7db98  cmp w8,#0x3
7101d7db9c  b.cs 0x7101d7e3a8
7101d7dba0  add x22,x20,x8, LSL #0x3
7101d7dba4  ldr x8,[x22, #0x238]
7101d7dba8  ldr x23,[x8]
7101d7dbac  adrp x9,0x7105305000
7101d7dbb0  ldr w21,[x9, #0xf0]
7101d7dbb4  mov w1,wzr
7101d7dbb8  ldr x0,[x23], #0x8
7101d7dbbc  bl 0x71037760f0
7101d7dbc0  mov w8,#0x4090000
7101d7dbc4  cmp w21,w8
7101d7dbc8  mov w8,#0x1015
7101d7dbcc  mov w9,#0x15
7101d7dbd0  movk w9,#0x50, LSL #16
7101d7dbd4  csel w2,w9,w8,eq
7101d7dbd8  ldr x8,[x22, #0x238]
7101d7dbdc  ldr x0,[x8]
7101d7dbe0  mov w9,#0x9
7101d7dbe4  csel w1,w9,wzr,eq
7101d7dbe8  bl 0x7103775dc0
7101d7dbec  ldrb w8,[x20, #0x320]
7101d7dbf0  ldr w3,[x20, #0x2f8]
7101d7dbf4  add x0,x20,#0x258
7101d7dbf8  ldrb w4,[x20, #0x31d]
7101d7dbfc  adrp x2,0x710424f000
7101d7dc00  add x2,x2,#0xc05
7101d7dc04  mov x1,x23
7101d7dc08  strb w8,[x20, #0x296]
7101d7dc0c  bl 0x7101d7c1b0
7101d7dc10  ldr w8,[x20, #0x270]
7101d7dc14  mov w21,wzr
7101d7dc18  strb wzr,[x20, #0x295]
7101d7dc1c  cmp w8,#0x4
7101d7dc20  b.hi 0x7101d7dc7c
7101d7dc24  adrp x9,0x71044fb000
7101d7dc28  add x9,x9,#0x20c
7101d7dc2c  ldrsw x8,[x9, x8, LSL #0x2]
7101d7dc30  add x8,x8,x9
7101d7dc34  br x8
7101d7dc38  ldr x8,[x20, #0x268]
7101d7dc3c  add x9,x8,#0x8
7101d7dc40  orr w10,wzr,#0x30
7101d7dc44  b 0x7101d7dc6c
7101d7dc48  ldr x9,[x20, #0x268]
7101d7dc4c  add x8,x9,#0x30
7101d7dc50  add x9,x9,#0x38
7101d7dc54  mov w10,#0xc8
7101d7dc58  b 0x7101d7dc6c
7101d7dc5c  ldr x9,[x20, #0x268]
7101d7dc60  add x8,x9,#0x18
7101d7dc64  add x9,x9,#0x20
7101d7dc68  mov w10,#0x58
7101d7dc6c  ldr x9,[x9]
7101d7dc70  ldr x8,[x8]
7101d7dc74  sub x8,x9,x8
7101d7dc78  sdiv x21,x8,x10
7101d7dc7c  ldr x0,[x20, #0x278]
7101d7dc80  str w21,[x20, #0x280]
7101d7dc84  ldr x8,[x0]
7101d7dc88  ldr x8,[x8, #0x78]
7101d7dc8c  add x22,x20,#0x278
7101d7dc90  blr x8
7101d7dc94  mov w24,w0
7101d7dc98  mov x0,x22
7101d7dc9c  mov w1,w21
7101d7dca0  bl 0x7103783690
7101d7dca4  mov w3,#0x1
7101d7dca8  mov x0,x22
7101d7dcac  mov w1,wzr
7101d7dcb0  mov w2,wzr
7101d7dcb4  mov w25,#0x1
7101d7dcb8  bl 0x7103783c10
7101d7dcbc  ldr x0,[x20, #0x278]
7101d7dcc0  ldr x8,[x0]
7101d7dcc4  ldr x8,[x8, #0x70]
7101d7dcc8  and w1,w24,#0x1
7101d7dccc  blr x8
7101d7dcd0  ldr w8,[x20, #0x308]
7101d7dcd4  ldr w9,[x20, #0x314]
7101d7dcd8  add x21,x20,#0x298
7101d7dcdc  ldr w10,[x20, #0x318]
7101d7dce0  adrp x2,0x710425f000
7101d7dce4  add x2,x2,#0x806
7101d7dce8  ldr w3,[x20, #0x2f8]
7101d7dcec  mov x0,x21
7101d7dcf0  mov x1,x23
7101d7dcf4  ldrb w4,[x20, #0x31d]
7101d7dcf8  str w8,[x20, #0x284]
7101d7dcfc  str w9,[x20, #0x288]
7101d7dd00  str w10,[x20, #0x28c]
7101d7dd04  bl 0x7101d7c1b0
7101d7dd08  ldr w8,[x20, #0x308]
7101d7dd0c  str w8,[x20, #0x2c4]
7101d7dd10  ldr w8,[x20, #0x2f8]
7101d7dd14  ldr w9,[x20, #0x314]
7101d7dd18  ldr w10,[x20, #0x318]
7101d7dd1c  str w10,[x20, #0x2cc]
7101d7dd20  cmp w8,#0x2
7101d7dd24  str wzr,[x20, #0x2d8]
7101d7dd28  strh wzr,[x20, #0x2dc]
7101d7dd2c  str w9,[x20, #0x2c8]
7101d7dd30  b.ne 0x7101d7dd38
7101d7dd34  strb w25,[x20, #0x2d0]
7101d7dd38  ldr w9,[x20, #0x250]
7101d7dd3c  cmp w9,#0x3
7101d7dd40  b.cs 0x7101d7e3a8
7101d7dd44  add x9,x20,x9, LSL #0x3
7101d7dd48  ldr x9,[x9, #0x238]
7101d7dd4c  ldr x24,[x9]
7101d7dd50  mov w9,#0x101
7101d7dd54  strh w9,[sp, #0x8]
7101d7dd58  mov w9,#0x1
7101d7dd5c  mov x10,#0x41f0000000000000
7101d7dd60  str xzr,[sp]
7101d7dd64  stur wzr,[sp, #0xa]
7101d7dd68  strh wzr,[sp, #0xe]
7101d7dd6c  strh w9,[sp, #0x14]
7101d7dd70  strb w9,[sp, #0x16]
7101d7dd74  str x10,[sp, #0x18]
7101d7dd78  str wzr,[sp, #0x20]
7101d7dd7c  str xzr,[sp, #0x50]
7101d7dd80  str xzr,[sp, #0x80]
7101d7dd84  add x1,x24,#0x8
7101d7dd88  cmp w8,#0x4
7101d7dd8c  str w9,[sp, #0x10]
7101d7dd90  str xzr,[sp, #0xb0]
7101d7dd94  str xzr,[sp, #0xe0]
7101d7dd98  str xzr,[sp, #0x110]
7101d7dd9c  str wzr,[sp, #0x120]
7101d7dda0  strb w9,[sp, #0xa]
7101d7dda4  b.eq 0x7101d7df3c
7101d7dda8  cmp w8,#0x1
7101d7ddac  b.eq 0x7101d7de58
7101d7ddb0  mov x0,xzr
7101d7ddb4  cbnz w8,0x7101d7dfbc
7101d7ddb8  add x23,x20,#0x2e0
7101d7ddbc  adrp x2,0x7104307000
7101d7ddc0  add x2,x2,#0x72
7101d7ddc4  mov x3,sp
7101d7ddc8  mov x0,x23
7101d7ddcc  bl 0x7103770b30
7101d7ddd0  adrp x2,0x71042e7000
7101d7ddd4  add x2,x2,#0xa3a
7101d7ddd8  mov x0,x23
7101d7dddc  mov w1,wzr
7101d7dde0  bl 0x71037717d0
7101d7dde4  adrp x2,0x710437c000
7101d7dde8  add x2,x2,#0xc66
7101d7ddec  mov w1,#0x1
7101d7ddf0  mov x0,x23
7101d7ddf4  bl 0x71037717d0
7101d7ddf8  ldr x0,[x20, #0x2e0]
7101d7ddfc  orr w2,wzr,#0x6
7101d7de00  mov w1,wzr
7101d7de04  mov w3,wzr
7101d7de08  bl 0x7103771930
7101d7de0c  ldr x0,[x20, #0x2e0]
7101d7de10  mov w1,#0x1
7101d7de14  orr w2,wzr,#0x7
7101d7de18  mov w3,wzr
7101d7de1c  bl 0x7103771930
7101d7de20  ldr x0,[x20, #0x2e0]
7101d7de24  ldr x8,[x0]
7101d7de28  ldr x8,[x8, #0x60]
7101d7de2c  mov w1,#0x1
7101d7de30  blr x8
7101d7de34  ldr x0,[x20, #0x2e0]
7101d7de38  ldr x8,[x0]
7101d7de3c  ldr x8,[x8, #0x70]
7101d7de40  mov w1,#0x1
7101d7de44  blr x8
7101d7de48  ldr x0,[x24, #0x10]
7101d7de4c  adrp x1,0x7104270000
7101d7de50  add x1,x1,#0x22b
7101d7de54  b 0x7101d7dfb0
7101d7de58  add x23,x20,#0x2e0
7101d7de5c  adrp x2,0x7104307000
7101d7de60  add x2,x2,#0x72
7101d7de64  mov x3,sp
7101d7de68  mov x0,x23
7101d7de6c  bl 0x7103770b30
7101d7de70  adrp x2,0x7104401000
7101d7de74  add x2,x2,#0xcf9
7101d7de78  orr w1,wzr,#0x3
7101d7de7c  mov x0,x23
7101d7de80  bl 0x71037717d0
7101d7de84  adrp x2,0x71042e7000
7101d7de88  add x2,x2,#0xa3a
7101d7de8c  mov w1,#0x4
7101d7de90  mov x0,x23
7101d7de94  bl 0x71037717d0
7101d7de98  adrp x2,0x710437c000
7101d7de9c  add x2,x2,#0xc66
7101d7dea0  mov w1,#0x2
7101d7dea4  mov x0,x23
7101d7dea8  bl 0x71037717d0
7101d7deac  ldr x0,[x20, #0x2e0]
7101d7deb0  mov w23,#0x9
7101d7deb4  orr w1,wzr,#0x3
7101d7deb8  mov w2,w23
7101d7debc  mov w3,wzr
7101d7dec0  bl 0x7103771930
7101d7dec4  ldr x0,[x20, #0x2e0]
7101d7dec8  mov w1,#0x4
7101d7decc  mov w2,w23
7101d7ded0  mov w3,wzr
7101d7ded4  bl 0x7103771930
7101d7ded8  ldr x0,[x20, #0x2e0]
7101d7dedc  mov w1,#0x2
7101d7dee0  mov w2,#0x8
7101d7dee4  mov w3,wzr
7101d7dee8  bl 0x7103771930
7101d7deec  ldr x0,[x20, #0x2e0]
7101d7def0  ldr x8,[x0]
7101d7def4  ldr x8,[x8, #0x60]
7101d7def8  mov w1,#0x1
7101d7defc  blr x8
7101d7df00  ldr x0,[x20, #0x2e0]
7101d7df04  ldr x8,[x0]
7101d7df08  ldr x8,[x8, #0x70]
7101d7df0c  mov w1,#0x1
7101d7df10  blr x8
7101d7df14  ldr x8,[x20]
7101d7df18  ldp x10,x8,[x8, #0x18]
7101d7df1c  ldr x0,[x24, #0x10]
7101d7df20  adrp x9,0x710437c000
7101d7df24  add x9,x9,#0x930
7101d7df28  adrp x11,0x710433a000
7101d7df2c  add x11,x11,#0x4e5
7101d7df30  cmp x8,x10
7101d7df34  csel x1,x11,x9,eq
7101d7df38  b 0x7101d7dfb0
7101d7df3c  add x23,x20,#0x2e0
7101d7df40  adrp x2,0x7104307000
7101d7df44  add x2,x2,#0x72
7101d7df48  mov x3,sp
7101d7df4c  mov x0,x23
7101d7df50  bl 0x7103770b30
7101d7df54  adrp x2,0x71042e7000
7101d7df58  add x2,x2,#0xa3a
7101d7df5c  mov x0,x23
7101d7df60  mov w1,wzr
7101d7df64  bl 0x71037717d0
7101d7df68  ldr x0,[x20, #0x2e0]
7101d7df6c  orr w2,wzr,#0x6
7101d7df70  mov w1,wzr
7101d7df74  mov w3,wzr
7101d7df78  bl 0x7103771930
7101d7df7c  ldr x0,[x20, #0x2e0]
7101d7df80  ldr x8,[x0]
7101d7df84  ldr x8,[x8, #0x60]
7101d7df88  mov w1,#0x1
7101d7df8c  blr x8
7101d7df90  ldr x0,[x20, #0x2e0]
7101d7df94  ldr x8,[x0]
7101d7df98  ldr x8,[x8, #0x70]
7101d7df9c  mov w1,#0x1
7101d7dfa0  blr x8
7101d7dfa4  ldr x0,[x24, #0x10]
7101d7dfa8  adrp x1,0x7104291000
7101d7dfac  add x1,x1,#0xf7c
7101d7dfb0  fmov s0,0x3f800000
7101d7dfb4  bl 0x7103778300
7101d7dfb8  ldr x0,[sp, #0x110]
7101d7dfbc  mov x8,sp
7101d7dfc0  add x8,x8,#0xf0
7101d7dfc4  cmp x8,x0
7101d7dfc8  b.eq 0x7101d7dfdc
7101d7dfcc  cbz x0,0x7101d7dfe8
7101d7dfd0  ldr x8,[x0]
7101d7dfd4  ldr x8,[x8, #0x28]
7101d7dfd8  b 0x7101d7dfe4
7101d7dfdc  ldr x8,[x0]
7101d7dfe0  ldr x8,[x8, #0x20]
7101d7dfe4  blr x8
7101d7dfe8  ldr x0,[sp, #0xe0]
7101d7dfec  mov x8,sp
7101d7dff0  add x8,x8,#0xc0
7101d7dff4  cmp x8,x0
7101d7dff8  b.eq 0x7101d7e00c
7101d7dffc  cbz x0,0x7101d7e018
7101d7e000  ldr x8,[x0]
7101d7e004  ldr x8,[x8, #0x28]
7101d7e008  b 0x7101d7e014
7101d7e00c  ldr x8,[x0]
7101d7e010  ldr x8,[x8, #0x20]
7101d7e014  blr x8
7101d7e018  ldr x0,[sp, #0xb0]
7101d7e01c  mov x8,sp
7101d7e020  add x8,x8,#0x90
7101d7e024  cmp x8,x0
7101d7e028  b.eq 0x7101d7e03c
7101d7e02c  cbz x0,0x7101d7e048
7101d7e030  ldr x8,[x0]
7101d7e034  ldr x8,[x8, #0x28]
7101d7e038  b 0x7101d7e044
7101d7e03c  ldr x8,[x0]
7101d7e040  ldr x8,[x8, #0x20]
7101d7e044  blr x8
7101d7e048  ldr x0,[sp, #0x80]
7101d7e04c  mov x8,sp
7101d7e050  add x8,x8,#0x60
7101d7e054  cmp x8,x0
7101d7e058  b.eq 0x7101d7e06c
7101d7e05c  cbz x0,0x7101d7e078
7101d7e060  ldr x8,[x0]
7101d7e064  ldr x8,[x8, #0x28]
7101d7e068  b 0x7101d7e074
7101d7e06c  ldr x8,[x0]
7101d7e070  ldr x8,[x8, #0x20]
7101d7e074  blr x8
7101d7e078  ldr x0,[sp, #0x50]
7101d7e07c  mov x8,sp
7101d7e080  add x8,x8,#0x30
7101d7e084  cmp x8,x0
7101d7e088  b.eq 0x7101d7e09c
7101d7e08c  cbz x0,0x7101d7e0a8
7101d7e090  ldr x8,[x0]
7101d7e094  ldr x8,[x8, #0x28]
7101d7e098  b 0x7101d7e0a4
7101d7e09c  ldr x8,[x0]
7101d7e0a0  ldr x8,[x8, #0x20]
7101d7e0a4  blr x8
7101d7e0a8  mov x0,x20
7101d7e0ac  bl 0x7101d7a1f0
7101d7e0b0  ldr w8,[x20, #0x250]
7101d7e0b4  cmp w8,#0x3
7101d7e0b8  b.cs 0x7101d7e3a8
7101d7e0bc  ldr w9,[x20, #0x2f8]
7101d7e0c0  cmp w9,#0x4
7101d7e0c4  b.hi 0x7101d7e11c
7101d7e0c8  add x8,x20,x8, LSL #0x3
7101d7e0cc  ldr x8,[x8, #0x238]
7101d7e0d0  adrp x10,0x71044fb000
7101d7e0d4  add x10,x10,#0x220
7101d7e0d8  ldrsw x9,[x10, x9, LSL #0x2]
7101d7e0dc  add x9,x9,x10
7101d7e0e0  ldr x8,[x8]
7101d7e0e4  br x9
7101d7e0e8  ldr x0,[x8, #0x10]
7101d7e0ec  adrp x1,0x7104412000
7101d7e0f0  add x1,x1,#0xca2
7101d7e0f4  b 0x7101d7e114
7101d7e0f8  ldr x0,[x8, #0x10]
7101d7e0fc  adrp x1,0x710424f000
7101d7e100  add x1,x1,#0x868
7101d7e104  b 0x7101d7e114
7101d7e108  ldr x0,[x8, #0x10]
7101d7e10c  adrp x1,0x710439d000
7101d7e110  add x1,x1,#0x7b0
7101d7e114  fmov s0,0x3f800000
7101d7e118  bl 0x7103778300
7101d7e11c  mov x0,x20
7101d7e120  mov w1,wzr
7101d7e124  bl 0x7101d79600
7101d7e128  mov w1,#0x1
7101d7e12c  mov x0,x20
7101d7e130  mov w27,#0x1
7101d7e134  bl 0x7101d79600
7101d7e138  ldrb w8,[x20, #0x31c]
7101d7e13c  cbz w8,0x7101d7e2dc
7101d7e140  ldr x0,[x20, #0x278]
7101d7e144  ldr x8,[x0]
7101d7e148  ldr x8,[x8, #0x60]
7101d7e14c  mov w1,wzr
7101d7e150  blr x8
7101d7e154  ldr w1,[x20, #0x30c]
7101d7e158  mov x0,x22
7101d7e15c  mov w2,wzr
7101d7e160  mov w3,wzr
7101d7e164  bl 0x7103783c10
7101d7e168  ldr w10,[x20, #0x2b0]
7101d7e16c  ldrsw x8,[x20, #0x30c]
7101d7e170  mov w23,wzr
7101d7e174  ldr w22,[x20, #0x310]
7101d7e178  strh wzr,[x20, #0x2dc]
7101d7e17c  cmp w10,#0x4
7101d7e180  str w8,[x20, #0x2d8]
7101d7e184  b.hi 0x7101d7e260
7101d7e188  adrp x11,0x71044fb000
7101d7e18c  add x11,x11,#0x234
7101d7e190  ldr x9,[x20, #0x2a8]
7101d7e194  ldrsw x10,[x11, x10, LSL #0x2]
7101d7e198  add x10,x10,x11
7101d7e19c  br x10
7101d7e1a0  ldp x10,x9,[x9]
7101d7e1a4  sub x9,x9,x10
7101d7e1a8  orr x11,xzr,#-0x5555555555555556
7101d7e1ac  movk x11,#0xaaab
7101d7e1b0  asr x9,x9,#0x4
7101d7e1b4  mul x9,x9,x11
7101d7e1b8  cmp x9,x8
7101d7e1bc  b.ls 0x7101d7e25c
7101d7e1c0  orr w9,wzr,#0x30
7101d7e1c4  madd x8,x8,x9,x10
7101d7e1c8  ldp x9,x8,[x8, #0x8]
7101d7e1cc  b 0x7101d7e244
7101d7e1d0  ldp x10,x9,[x9, #0x30]
7101d7e1d4  sub x9,x9,x10
7101d7e1d8  mov x11,#0x5c29
7101d7e1dc  movk x11,#0xc28f, LSL #16
7101d7e1e0  movk x11,#0x28f5, LSL #32
7101d7e1e4  movk x11,#0x8f5c, LSL #48
7101d7e1e8  asr x9,x9,#0x3
7101d7e1ec  mul x9,x9,x11
7101d7e1f0  cmp x9,x8
7101d7e1f4  b.ls 0x7101d7e25c
7101d7e1f8  mov w9,#0xc8
7101d7e1fc  madd x8,x8,x9,x10
7101d7e200  ldp x9,x8,[x8, #0xa8]
7101d7e204  sub x8,x8,x9
7101d7e208  lsr x23,x8,#0x4
7101d7e20c  b 0x7101d7e260
7101d7e210  ldp x10,x9,[x9, #0x18]
7101d7e214  sub x9,x9,x10
7101d7e218  mov x11,#0x8ba3
7101d7e21c  movk x11,#0xba2e, LSL #16
7101d7e220  movk x11,#0xa2e8, LSL #32
7101d7e224  movk x11,#0x2e8b, LSL #48
7101d7e228  asr x9,x9,#0x3
7101d7e22c  mul x9,x9,x11
7101d7e230  cmp x9,x8
7101d7e234  b.ls 0x7101d7e25c
7101d7e238  mov w9,#0x58
7101d7e23c  madd x8,x8,x9,x10
7101d7e240  ldp x9,x8,[x8, #0x38]
7101d7e244  sub x8,x8,x9
7101d7e248  mov w9,#0xaaab
7101d7e24c  movk w9,#0xaaaa, LSL #16
7101d7e250  lsr x8,x8,#0x3
7101d7e254  mul w23,w8,w9
7101d7e258  b 0x7101d7e260
7101d7e25c  mov w23,wzr
7101d7e260  ldr x0,[x20, #0x2b8]
7101d7e264  str w23,[x20, #0x2c0]
7101d7e268  ldr x8,[x0]
7101d7e26c  ldr x8,[x8, #0x78]
7101d7e270  add x24,x20,#0x2b8
7101d7e274  blr x8
7101d7e278  mov w25,w0
7101d7e27c  mov x0,x24
7101d7e280  mov w1,w23
7101d7e284  bl 0x7103783690
7101d7e288  mov w3,#0x1
7101d7e28c  mov x0,x24
7101d7e290  mov w1,w22
7101d7e294  mov w2,wzr
7101d7e298  mov w23,#0x1
7101d7e29c  bl 0x7103783c10
7101d7e2a0  ldr x0,[x20, #0x2b8]
7101d7e2a4  ldr x8,[x0]
7101d7e2a8  ldr x8,[x8, #0x70]
7101d7e2ac  and w1,w25,#0x1
7101d7e2b0  blr x8
7101d7e2b4  ldr x8,[x20, #0x298]
7101d7e2b8  strb w23,[x20, #0x2dc]
7101d7e2bc  ldr x8,[x8, #0xe0]
7101d7e2c0  mov x0,x21
7101d7e2c4  blr x8
7101d7e2c8  ldr w1,[x20, #0x310]
7101d7e2cc  mov x0,x24
7101d7e2d0  mov w2,wzr
7101d7e2d4  mov w3,wzr
7101d7e2d8  bl 0x7103783c10
7101d7e2dc  add x9,x20,#0x214
7101d7e2e0  stp xzr,xzr,[x20, #0x10]
7101d7e2e4  str xzr,[x9]
7101d7e2e8  add x9,x20,#0x20c
7101d7e2ec  add x0,x20,#0x8
7101d7e2f0  str xzr,[x9]
7101d7e2f4  add x9,x20,#0x204
7101d7e2f8  add x8,x20,#0x1d4
7101d7e2fc  str xzr,[x9]
7101d7e300  add x9,x20,#0x1fc
7101d7e304  str xzr,[x9]
7101d7e308  add x9,x20,#0x1f4
7101d7e30c  str xzr,[x9]
7101d7e310  add x9,x20,#0x1ec
7101d7e314  str xzr,[x9]
7101d7e318  add x9,x20,#0x1e4
7101d7e31c  str xzr,[x9]
7101d7e320  add x9,x20,#0x1dc
7101d7e324  str wzr,[x20, #0x21c]
7101d7e328  str xzr,[x9]
7101d7e32c  str xzr,[x8]
7101d7e330  str x26,[x20, #0x220]
7101d7e334  str w26,[x20, #0x228]
7101d7e338  strb wzr,[x20, #0x22c]
7101d7e33c  str w27,[x20, #0x1d0]
7101d7e340  bl 0x7101d7d9a0
7101d7e344  strb wzr,[x19, #0x70]
7101d7e348  ldp x29,x30,[sp, #0x190]
7101d7e34c  ldp x20,x19,[sp, #0x180]
7101d7e350  ldp x22,x21,[sp, #0x170]
7101d7e354  ldp x24,x23,[sp, #0x160]
7101d7e358  ldp x26,x25,[sp, #0x150]
7101d7e35c  ldp x28,x27,[sp, #0x140]
7101d7e360  add sp,sp,#0x1a0
7101d7e364  ret
7101d7e368  adrp x0,0x7105314000
7101d7e36c  add x0,x0,#0x4d8
7101d7e370  bl 0x71039c06b0
7101d7e374  cbz w0,0x7101d7db94
7101d7e378  bl 0x7101764000
7101d7e37c  adrp x0,0x7101763000
7101d7e380  add x0,x0,#0xc40
7101d7e384  adrp x1,0x71052c5000
7101d7e388  add x1,x1,#0x180
7101d7e38c  adrp x2,0x7104f17000
7101d7e390  add x2,x2,#0x0
7101d7e394  bl 0x71000001c0
7101d7e398  adrp x0,0x7105314000
7101d7e39c  add x0,x0,#0x4d8
7101d7e3a0  bl 0x71039c06c0
7101d7e3a4  b 0x7101d7db94
7101d7e3a8  bl 0x71039c2650
