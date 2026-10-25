// addr:      7101c7d8e0
// offset:    0x1c7d8e0
// name:      FUN_7101c7d8e0
// mangled:   
// size:      3848

7101c7d8e0  str d8,[sp, #-0x70]!
7101c7d8e4  stp x28,x27,[sp, #0x10]
7101c7d8e8  stp x26,x25,[sp, #0x20]
7101c7d8ec  stp x24,x23,[sp, #0x30]
7101c7d8f0  stp x22,x21,[sp, #0x40]
7101c7d8f4  stp x20,x19,[sp, #0x50]
7101c7d8f8  stp x29,x30,[sp, #0x60]
7101c7d8fc  add x29,sp,#0x60
7101c7d900  sub sp,sp,#0x900
7101c7d904  ldr x8,[x1]
7101c7d908  adrp x1,0x710424f000
7101c7d90c  add x1,x1,#0xac6
7101c7d910  ldr x23,[x8]
7101c7d914  mov x19,x0
7101c7d918  ldr x0,[x23, #0x10]
7101c7d91c  fmov s0,0x3f800000
7101c7d920  add x20,x23,#0x8
7101c7d924  bl 0x7103778300
7101c7d928  adrp x8,0x71052c4000
7101c7d92c  ldr x8,[x8, #0xc58]
7101c7d930  ldr x8,[x8, #0x8]
7101c7d934  add x0,x8,#0xa0
7101c7d938  bl 0x7101704ba0
7101c7d93c  tbnz w0,#0x0,0x7101c7d95c
7101c7d940  ldrb w8,[x19, #0x216]
7101c7d944  cmp w8,#0x3
7101c7d948  b.ne 0x7101c7d95c
7101c7d94c  ldr x0,[x23, #0x10]
7101c7d950  adrp x1,0x71043ad000
7101c7d954  add x1,x1,#0x83a
7101c7d958  b 0x7101c7d9e0
7101c7d95c  mov w0,wzr
7101c7d960  bl 0x7101797350
7101c7d964  tbnz w0,#0x0,0x7101c7d984
7101c7d968  ldrb w8,[x19, #0x216]
7101c7d96c  cmp w8,#0x8
7101c7d970  b.ne 0x7101c7d984
7101c7d974  ldr x0,[x23, #0x10]
7101c7d978  adrp x1,0x710432a000
7101c7d97c  add x1,x1,#0x23
7101c7d980  b 0x7101c7d9e0
7101c7d984  ldrb w8,[x19, #0x11c]
7101c7d988  ldrb w9,[x19, #0x11d]
7101c7d98c  and w8,w8,#0x3f
7101c7d990  ldr x0,[x23, #0x10]
7101c7d994  and w9,w9,#0x3f
7101c7d998  cmp w8,w9
7101c7d99c  b.cs 0x7101c7d9d8
7101c7d9a0  fmov s0,0x3f800000
7101c7d9a4  adrp x1,0x710424f000
7101c7d9a8  add x1,x1,#0x5cd
7101c7d9ac  bl 0x7103778300
7101c7d9b0  ldr x8,[x19, #0x108]
7101c7d9b4  ldp x9,x10,[x8, #0x180]
7101c7d9b8  sub x10,x10,x9
7101c7d9bc  lsr x11,x10,#0x3
7101c7d9c0  cmp w11,#0x1
7101c7d9c4  b.lt 0x7101c7e614
7101c7d9c8  cbz x10,0x7101c7e7e0
7101c7d9cc  ldr x8,[x9]
7101c7d9d0  ldr x1,[x8, #0x88]
7101c7d9d4  b 0x7101c7e618
7101c7d9d8  adrp x1,0x7104433000
7101c7d9dc  add x1,x1,#0x1c3
7101c7d9e0  fmov s0,0x3f800000
7101c7d9e4  bl 0x7103778300
7101c7d9e8  ldrb w8,[x19, #0x1c0]
7101c7d9ec  ldr x0,[x23, #0x10]
7101c7d9f0  cmp w8,#0x2
7101c7d9f4  b.ne 0x7101c7da1c
7101c7d9f8  fmov s8,0x3f800000
7101c7d9fc  mov v0.16B,v8.16B
7101c7da00  adrp x1,0x710437c000
7101c7da04  add x1,x1,#0x611
7101c7da08  bl 0x7103778300
7101c7da0c  ldr x0,[x23, #0x10]
7101c7da10  adrp x1,0x71043e0000
7101c7da14  add x1,x1,#0x284
7101c7da18  b 0x7101c7da3c
7101c7da1c  fmov s8,0x3f800000
7101c7da20  mov v0.16B,v8.16B
7101c7da24  adrp x1,0x7104422000
7101c7da28  add x1,x1,#0x465
7101c7da2c  bl 0x7103778300
7101c7da30  ldr x0,[x23, #0x10]
7101c7da34  adrp x1,0x71042f8000
7101c7da38  add x1,x1,#0x396
7101c7da3c  mov v0.16B,v8.16B
7101c7da40  bl 0x7103778300
7101c7da44  ldrb w8,[x19, #0x11f]
7101c7da48  cbz w8,0x7101c7da9c
7101c7da4c  ldr w8,[x19, #0x114]
7101c7da50  cmp w8,#0x1
7101c7da54  b.ne 0x7101c7dabc
7101c7da58  adrp x8,0x7105314000
7101c7da5c  add x8,x8,#0x4d8
7101c7da60  ldarb w8,[x8]
7101c7da64  tbz w8,#0x0,0x7101c7e79c
7101c7da68  adrp x1,0x71043cf000
7101c7da6c  add x1,x1,#0xca4
7101c7da70  add x8,sp,#0x420
7101c7da74  mov x0,x20
7101c7da78  bl 0x7103776910
7101c7da7c  adrp x1,0x7104401000
7101c7da80  add x1,x1,#0x69d
7101c7da84  adrp x3,0x7105306000
7101c7da88  add x3,x3,#0xee4
7101c7da8c  add x0,sp,#0x420
7101c7da90  mov w2,#0x1
7101c7da94  bl 0x710377a280
7101c7da98  b 0x7101c7dae0
7101c7da9c  adrp x1,0x71043cf000
7101c7daa0  add x1,x1,#0xca4
7101c7daa4  add x8,sp,#0x420
7101c7daa8  mov x0,x20
7101c7daac  bl 0x7103776910
7101c7dab0  adrp x1,0x7104454000
7101c7dab4  add x1,x1,#0xada
7101c7dab8  b 0x7101c7dad8
7101c7dabc  adrp x1,0x71043cf000
7101c7dac0  add x1,x1,#0xca4
7101c7dac4  add x8,sp,#0x420
7101c7dac8  mov x0,x20
7101c7dacc  bl 0x7103776910
7101c7dad0  adrp x1,0x710439d000
7101c7dad4  add x1,x1,#0x4b4
7101c7dad8  add x0,sp,#0x420
7101c7dadc  bl 0x710377a120
7101c7dae0  ldr x0,[sp, #0x428]
7101c7dae4  adrp x8,0x710523d000
7101c7dae8  add x8,x8,#0x9a8
7101c7daec  str x8,[sp, #0x420]
7101c7daf0  str xzr,[sp, #0x428]
7101c7daf4  cbz x0,0x7101c7dafc
7101c7daf8  bl 0x710392eb40
7101c7dafc  adrp x1,0x710438c000
7101c7db00  add x1,x1,#0xb43
7101c7db04  add x8,sp,#0x420
7101c7db08  mov x0,x20
7101c7db0c  add x21,x19,#0x118
7101c7db10  bl 0x7103776910
7101c7db14  ldr x22,[sp, #0x428]
7101c7db18  ldr x0,[x22, #0x10]
7101c7db1c  cbz x0,0x7101c7db30
7101c7db20  add x1,x19,#0x1e0
7101c7db24  mov w2,#0xffffffff
7101c7db28  mov w3,#0x1
7101c7db2c  bl 0x71037a2270
7101c7db30  adrp x24,0x710523d000
7101c7db34  add x24,x24,#0x9a8
7101c7db38  str x24,[sp, #0x420]
7101c7db3c  str xzr,[sp, #0x428]
7101c7db40  cbz x22,0x7101c7db4c
7101c7db44  mov x0,x22
7101c7db48  bl 0x710392eb40
7101c7db4c  adrp x1,0x710433a000
7101c7db50  add x1,x1,#0x1f7
7101c7db54  add x8,sp,#0x420
7101c7db58  mov x0,x20
7101c7db5c  bl 0x7103776640
7101c7db60  ldr w2,[x19, #0x114]
7101c7db64  ldr x4,[x19, #0x10]
7101c7db68  add x0,sp,#0x420
7101c7db6c  mov x1,x21
7101c7db70  mov w3,wzr
7101c7db74  bl 0x7101c7ebd0
7101c7db78  mov w0,#0x10
7101c7db7c  mov w1,#0x8
7101c7db80  bl 0x710392e290
7101c7db84  mov x21,x0
7101c7db88  cbnz x0,0x7101c7dbd4
7101c7db8c  adrp x8,0x7105332000
7101c7db90  ldr x0,[x8, #0xf00]
7101c7db94  cbz x0,0x7101c7dbd0
7101c7db98  mov w8,#0x8
7101c7db9c  str wzr,[sp, #0x8]
7101c7dba0  add x1,sp,#0x8
7101c7dba4  str x8,[sp, #0x18]
7101c7dba8  ldr x8,[x0]
7101c7dbac  ldr x8,[x8, #0x30]
7101c7dbb0  add x2,sp,#0x18
7101c7dbb4  blr x8
7101c7dbb8  tbz w0,#0x0,0x7101c7dbd0
7101c7dbbc  mov w0,#0x10
7101c7dbc0  mov w1,#0x8
7101c7dbc4  bl 0x710392e290
7101c7dbc8  mov x21,x0
7101c7dbcc  cbnz x0,0x7101c7dbd4
7101c7dbd0  mov x21,xzr
7101c7dbd4  str xzr,[x21]
7101c7dbd8  ldr x8,[sp, #0x428]
7101c7dbdc  ldr x8,[x8, #0x8]
7101c7dbe0  cbz x8,0x7101c7dca0
7101c7dbe4  ldr x0,[x8, #0x60]
7101c7dbe8  cbz x0,0x7101c7dca0
7101c7dbec  ldr x8,[x8, #0x18]
7101c7dbf0  add x1,x8,#0xb0
7101c7dbf4  bl 0x7103796f20
7101c7dbf8  str x0,[x21]
7101c7dbfc  cbz x0,0x7101c7dca4
7101c7dc00  ldr x8,[x0]
7101c7dc04  ldr x8,[x8, #0x218]
7101c7dc08  mov w1,#0x1
7101c7dc0c  mov x22,x0
7101c7dc10  blr x8
7101c7dc14  ldr x8,[x22]
7101c7dc18  ldr x8,[x8, #0x408]
7101c7dc1c  mov x0,x22
7101c7dc20  blr x8
7101c7dc24  ldr x8,[x22]
7101c7dc28  ldr x8,[x8, #0x3e8]
7101c7dc2c  mov w1,#0x1
7101c7dc30  mov x0,x22
7101c7dc34  blr x8
7101c7dc38  ldr x8,[x22]
7101c7dc3c  ldr x8,[x8, #0x140]
7101c7dc40  mov x0,x22
7101c7dc44  blr x8
7101c7dc48  cmp w0,#0x6
7101c7dc4c  b.eq 0x7101c7dc78
7101c7dc50  ldr x8,[x22]
7101c7dc54  ldr x8,[x8, #0x140]
7101c7dc58  mov x0,x22
7101c7dc5c  blr x8
7101c7dc60  cmp w0,#0x1
7101c7dc64  b.eq 0x7101c7dc78
7101c7dc68  ldr x8,[x22]
7101c7dc6c  ldr x8,[x8, #0x3f8]
7101c7dc70  mov x0,x22
7101c7dc74  blr x8
7101c7dc78  ldr x8,[x22]
7101c7dc7c  ldr x8,[x8, #0x158]
7101c7dc80  mov x0,x22
7101c7dc84  blr x8
7101c7dc88  tbnz w0,#0x0,0x7101c7dca4
7101c7dc8c  ldr x8,[x22]
7101c7dc90  ldr x8,[x8, #0x360]
7101c7dc94  mov x0,x22
7101c7dc98  blr x8
7101c7dc9c  b 0x7101c7dca4
7101c7dca0  str xzr,[x21]
7101c7dca4  mov x0,x21
7101c7dca8  add x26,sp,#0x420
7101c7dcac  bl 0x710392eb40
7101c7dcb0  ldr x21,[sp, #0x428]
7101c7dcb4  adrp x25,0x710523d000
7101c7dcb8  add x25,x25,#0x988
7101c7dcbc  str x25,[sp, #0x420]
7101c7dcc0  str xzr,[sp, #0x428]
7101c7dcc4  cbz x21,0x7101c7dce0
7101c7dcc8  ldr x0,[x21, #0x18]
7101c7dccc  stp x24,xzr,[x21, #0x10]
7101c7dcd0  cbz x0,0x7101c7dcd8
7101c7dcd4  bl 0x710392eb40
7101c7dcd8  mov x0,x21
7101c7dcdc  bl 0x710392eb40
7101c7dce0  mov x8,#-0x1
7101c7dce4  add x9,sp,#0x420
7101c7dce8  orr w10,wzr,#0x3c
7101c7dcec  mov x11,#0x503
7101c7dcf0  str x8,[sp, #0x420]
7101c7dcf4  stur xzr,[x26, #0x54]
7101c7dcf8  strh wzr,[sp, #0x47c]
7101c7dcfc  strb wzr,[sp, #0x87c]
7101c7dd00  movk x11,#0x2, LSL #32
7101c7dd04  stur xzr,[x26, #0xd]
7101c7dd08  add x27,x9,#0x4a0
7101c7dd0c  strh w10,[sp, #0x8c4]
7101c7dd10  add x10,x9,#0x4a6
7101c7dd14  str xzr,[sp, #0x428]
7101c7dd18  str x8,[sp, #0x880]
7101c7dd1c  str xzr,[sp, #0x888]
7101c7dd20  strh wzr,[sp, #0x890]
7101c7dd24  strh wzr,[sp, #0x8c0]
7101c7dd28  strb wzr,[sp, #0x8c2]
7101c7dd2c  str x11,[x10]
7101c7dd30  mov x11,#0xa
7101c7dd34  movk x11,#0x100, LSL #16
7101c7dd38  add x10,x9,#0x4ae
7101c7dd3c  movk x11,#0x1, LSL #32
7101c7dd40  movk x11,#0x103, LSL #48
7101c7dd44  str x11,[x10]
7101c7dd48  mov w10,#0x100
7101c7dd4c  add x11,x9,#0x4cc
7101c7dd50  strh w10,[sp, #0x8d6]
7101c7dd54  mov w10,#0x2
7101c7dd58  strb w10,[sp, #0x8d8]
7101c7dd5c  add x10,x9,#0x4bc
7101c7dd60  add x9,x9,#0x4c4
7101c7dd64  str x8,[x11]
7101c7dd68  str x8,[x9]
7101c7dd6c  mov w9,#0xffffffff
7101c7dd70  str x8,[x10]
7101c7dd74  adrp x8,0x710532f000
7101c7dd78  ldr x8,[x8, #0x730]
7101c7dd7c  str w9,[sp, #0x8f4]
7101c7dd80  cbz x8,0x7101c7dde0
7101c7dd84  ldr x28,[x8, #0x8]
7101c7dd88  ldr x22,[x28, #0x178]
7101c7dd8c  ldr x0,[x22, #0x8]
7101c7dd90  mov x1,#0x4f97
7101c7dd94  movk x1,#0x5678, LSL #16
7101c7dd98  movk x1,#0xd, LSL #32
7101c7dd9c  bl 0x71032b23e0
7101c7dda0  mov x21,x0
7101c7dda4  mov x0,x22
7101c7dda8  mov x1,x21
7101c7ddac  bl 0x71032b1e40
7101c7ddb0  tbnz w0,#0x1f,0x7101c7dde0
7101c7ddb4  ldr x0,[x28, #0x178]
7101c7ddb8  mov x1,x21
7101c7ddbc  bl 0x71032b1e40
7101c7ddc0  lsr w9,w0,#0x5
7101c7ddc4  add x10,sp,#0x420
7101c7ddc8  add x9,x10,w9, UXTW  #0x2
7101c7ddcc  ldr w10,[x9, #0x4c8]
7101c7ddd0  mov w8,#0x1
7101c7ddd4  lsl w8,w8,w0
7101c7ddd8  bic w8,w10,w8
7101c7dddc  str w8,[x9, #0x4c8]
7101c7dde0  add x8,x19,#0x12a
7101c7dde4  add x9,x19,#0x132
7101c7dde8  add x10,x19,#0x13a
7101c7ddec  ldr x8,[x8]
7101c7ddf0  ldr x9,[x9]
7101c7ddf4  ldr x10,[x10]
7101c7ddf8  add x0,sp,#0x420
7101c7ddfc  add x1,sp,#0x18
7101c7de00  str xzr,[sp, #0x18]
7101c7de04  stp x9,x10,[x27, #0x8]
7101c7de08  str x8,[x27]
7101c7de0c  strh wzr,[sp, #0x20]
7101c7de10  add x22,sp,#0x420
7101c7de14  bl 0x71017ab0c0
7101c7de18  adrp x1,0x710435b000
7101c7de1c  add x1,x1,#0x885
7101c7de20  add x8,sp,#0x8
7101c7de24  mov x0,x20
7101c7de28  bl 0x7103776640
7101c7de2c  ldr x3,[x19, #0x10]
7101c7de30  ldrb w1,[sp, #0x8c1]
7101c7de34  add x0,sp,#0x8
7101c7de38  add x2,sp,#0x18
7101c7de3c  bl 0x7101c6fec0
7101c7de40  ldr x0,[x23, #0x10]
7101c7de44  fmov s0,0x3f800000
7101c7de48  adrp x1,0x71043ad000
7101c7de4c  add x1,x1,#0x84a
7101c7de50  bl 0x7103778300
7101c7de54  ldr x21,[sp, #0x10]
7101c7de58  stp x25,xzr,[sp, #0x8]
7101c7de5c  cbz x21,0x7101c7de78
7101c7de60  ldr x0,[x21, #0x18]
7101c7de64  stp x24,xzr,[x21, #0x10]
7101c7de68  cbz x0,0x7101c7de70
7101c7de6c  bl 0x710392eb40
7101c7de70  mov x0,x21
7101c7de74  bl 0x710392eb40
7101c7de78  ldrb w1,[x19, #0x218]
7101c7de7c  add x0,sp,#0x420
7101c7de80  bl 0x7101c6f7f0
7101c7de84  adrp x1,0x71042e7000
7101c7de88  add x1,x1,#0x253
7101c7de8c  add x8,sp,#0x18
7101c7de90  mov x0,x20
7101c7de94  bl 0x7103776910
7101c7de98  add x1,x22,#0x8
7101c7de9c  add x0,sp,#0x18
7101c7dea0  bl 0x710377a120
7101c7dea4  ldr x0,[sp, #0x20]
7101c7dea8  stp x24,xzr,[sp, #0x18]
7101c7deac  cbz x0,0x7101c7deb4
7101c7deb0  bl 0x710392eb40
7101c7deb4  adrp x1,0x710432a000
7101c7deb8  add x1,x1,#0x53
7101c7debc  add x8,sp,#0x420
7101c7dec0  mov x0,x20
7101c7dec4  bl 0x7103776910
7101c7dec8  adrp x1,0x710436c000
7101c7decc  add x1,x1,#0x45b
7101c7ded0  add x0,sp,#0x420
7101c7ded4  bl 0x710377a120
7101c7ded8  ldr x0,[sp, #0x428]
7101c7dedc  str x24,[sp, #0x420]
7101c7dee0  str xzr,[sp, #0x428]
7101c7dee4  cbz x0,0x7101c7deec
7101c7dee8  bl 0x710392eb40
7101c7deec  ldrb w8,[x19, #0x136]
7101c7def0  sub w8,w8,#0x4
7101c7def4  mov w25,#0x9dc5
7101c7def8  movk w25,#0x811c, LSL #16
7101c7defc  cmp w8,#0x3
7101c7df00  b.hi 0x7101c7e190
7101c7df04  adrp x9,0x71044f9000
7101c7df08  add x9,x9,#0x804
7101c7df0c  ldrsw x8,[x9, x8, LSL #0x2]
7101c7df10  add x8,x8,x9
7101c7df14  br x8
7101c7df18  orr x8,xzr,#0x1c00000000
7101c7df1c  add x9,sp,#0x420
7101c7df20  add x21,x9,#0x8
7101c7df24  str x8,[sp, #0x420]
7101c7df28  add x8,x9,#0x9
7101c7df2c  mov x9,#0x656e
7101c7df30  movk x9,#0x725f, LSL #16
7101c7df34  movk x9,#0x6f6f, LSL #32
7101c7df38  movk x9,#0x5f6d, LSL #48
7101c7df3c  str x9,[sp, #0x430]
7101c7df40  mov w9,#0x7473
7101c7df44  strh w9,[sp, #0x438]
7101c7df48  mov x10,#0x6e6d
7101c7df4c  movk x10,#0x5f75, LSL #16
7101c7df50  mov x9,#0x6761
7101c7df54  movk x9,#0x5f65, LSL #16
7101c7df58  movk x10,#0x6e6f, LSL #32
7101c7df5c  movk x10,#0x696c, LSL #48
7101c7df60  str x10,[sp, #0x428]
7101c7df64  movk x9,#0x6172, LSL #32
7101c7df68  movk x9,#0x646e, LSL #48
7101c7df6c  stur x9,[x26, #0x1a]
7101c7df70  strb wzr,[sp, #0x444]
7101c7df74  mov w9,#0x6d6f
7101c7df78  strh w9,[sp, #0x442]
7101c7df7c  mov w10,#0x6d
7101c7df80  mov w9,#0x89
7101c7df84  mov w11,w25
7101c7df88  mul w11,w11,w9
7101c7df8c  and w10,w10,#0xff
7101c7df90  eor w11,w11,w10
7101c7df94  ldrb w10,[x8], #0x1
7101c7df98  cbnz w10,0x7101c7df88
7101c7df9c  b 0x7101c7e230
7101c7dfa0  mov x9,#0x6e6d
7101c7dfa4  movk x9,#0x5f75, LSL #16
7101c7dfa8  movk x9,#0x6e6f, LSL #32
7101c7dfac  movk x9,#0x696c, LSL #48
7101c7dfb0  str x9,[sp, #0x428]
7101c7dfb4  mov x9,#0x656e
7101c7dfb8  movk x9,#0x725f, LSL #16
7101c7dfbc  movk x9,#0x6f6f, LSL #32
7101c7dfc0  movk x9,#0x5f6d, LSL #48
7101c7dfc4  str x9,[sp, #0x430]
7101c7dfc8  mov w9,#0x7473
7101c7dfcc  strh w9,[sp, #0x438]
7101c7dfd0  mov x9,#0x6761
7101c7dfd4  movk x9,#0x5f65, LSL #16
7101c7dfd8  mov x8,#0x2800000000
7101c7dfdc  str x8,[sp, #0x420]
7101c7dfe0  add x8,sp,#0x420
7101c7dfe4  add x21,x8,#0x8
7101c7dfe8  movk x9,#0x6172, LSL #32
7101c7dfec  movk x9,#0x646e, LSL #48
7101c7dff0  stur x9,[x26, #0x1a]
7101c7dff4  mov w9,#0x6d6f
7101c7dff8  movk w9,#0x625f, LSL #16
7101c7dffc  stur w9,[x26, #0x22]
7101c7e000  mov w9,#0x7461
7101c7e004  strh w9,[sp, #0x446]
7101c7e008  mov x9,#0x6c74
7101c7e00c  movk x9,#0x6665, LSL #16
7101c7e010  strb wzr,[sp, #0x450]
7101c7e014  movk x9,#0x6569, LSL #32
7101c7e018  movk x9,#0x646c, LSL #48
7101c7e01c  str x9,[sp, #0x448]
7101c7e020  add x8,x8,#0x9
7101c7e024  mov w10,#0x6d
7101c7e028  mov w9,#0x89
7101c7e02c  mov w11,w25
7101c7e030  mul w11,w11,w9
7101c7e034  and w10,w10,#0xff
7101c7e038  eor w11,w11,w10
7101c7e03c  ldrb w10,[x8], #0x1
7101c7e040  cbnz w10,0x7101c7e030
7101c7e044  b 0x7101c7e230
7101c7e048  orr x8,xzr,#0x2000000000
7101c7e04c  str x8,[sp, #0x420]
7101c7e050  mov x8,#0x6e6d
7101c7e054  movk x8,#0x5f75, LSL #16
7101c7e058  add x9,sp,#0x420
7101c7e05c  add x21,x9,#0x8
7101c7e060  movk x8,#0x6e6f, LSL #32
7101c7e064  movk x8,#0x696c, LSL #48
7101c7e068  str x8,[sp, #0x428]
7101c7e06c  add x8,x9,#0x9
7101c7e070  mov x9,#0x656e
7101c7e074  movk x9,#0x725f, LSL #16
7101c7e078  movk x9,#0x6f6f, LSL #32
7101c7e07c  movk x9,#0x5f6d, LSL #48
7101c7e080  str x9,[sp, #0x430]
7101c7e084  mov w9,#0x7473
7101c7e088  strh w9,[sp, #0x438]
7101c7e08c  mov x9,#0x6761
7101c7e090  movk x9,#0x5f65, LSL #16
7101c7e094  movk x9,#0x6172, LSL #32
7101c7e098  movk x9,#0x646e, LSL #48
7101c7e09c  stur x9,[x26, #0x1a]
7101c7e0a0  mov w9,#0x6d6f
7101c7e0a4  movk w9,#0x655f, LSL #16
7101c7e0a8  stur w9,[x26, #0x22]
7101c7e0ac  mov w9,#0x646e
7101c7e0b0  strh w9,[sp, #0x446]
7101c7e0b4  mov w10,#0x6d
7101c7e0b8  mov w9,#0x89
7101c7e0bc  mov w11,w25
7101c7e0c0  strb wzr,[sp, #0x448]
7101c7e0c4  mul w11,w11,w9
7101c7e0c8  and w10,w10,#0xff
7101c7e0cc  eor w11,w11,w10
7101c7e0d0  ldrb w10,[x8], #0x1
7101c7e0d4  cbnz w10,0x7101c7e0c4
7101c7e0d8  b 0x7101c7e230
7101c7e0dc  mov x9,#0x6e6d
7101c7e0e0  movk x9,#0x5f75, LSL #16
7101c7e0e4  movk x9,#0x6e6f, LSL #32
7101c7e0e8  movk x9,#0x696c, LSL #48
7101c7e0ec  str x9,[sp, #0x428]
7101c7e0f0  mov x9,#0x656e
7101c7e0f4  movk x9,#0x725f, LSL #16
7101c7e0f8  movk x9,#0x6f6f, LSL #32
7101c7e0fc  movk x9,#0x5f6d, LSL #48
7101c7e100  str x9,[sp, #0x430]
7101c7e104  mov w9,#0x7473
7101c7e108  strh w9,[sp, #0x438]
7101c7e10c  mov x9,#0x6761
7101c7e110  movk x9,#0x5f65, LSL #16
7101c7e114  mov x8,#0x2c00000000
7101c7e118  str x8,[sp, #0x420]
7101c7e11c  add x8,sp,#0x420
7101c7e120  add x21,x8,#0x8
7101c7e124  movk x9,#0x6172, LSL #32
7101c7e128  movk x9,#0x646e, LSL #48
7101c7e12c  stur x9,[x26, #0x1a]
7101c7e130  mov w9,#0x6d6f
7101c7e134  movk w9,#0x625f, LSL #16
7101c7e138  stur w9,[x26, #0x22]
7101c7e13c  mov w9,#0x7461
7101c7e140  strh w9,[sp, #0x446]
7101c7e144  mov x9,#0x6c74
7101c7e148  movk x9,#0x6665, LSL #16
7101c7e14c  strb wzr,[sp, #0x454]
7101c7e150  movk x9,#0x6569, LSL #32
7101c7e154  movk x9,#0x646c, LSL #48
7101c7e158  str x9,[sp, #0x448]
7101c7e15c  mov w9,#0x655f
7101c7e160  movk w9,#0x646e, LSL #16
7101c7e164  str w9,[sp, #0x450]
7101c7e168  add x8,x8,#0x9
7101c7e16c  mov w10,#0x6d
7101c7e170  mov w9,#0x89
7101c7e174  mov w11,w25
7101c7e178  mul w11,w11,w9
7101c7e17c  and w10,w10,#0xff
7101c7e180  eor w11,w11,w10
7101c7e184  ldrb w10,[x8], #0x1
7101c7e188  cbnz w10,0x7101c7e178
7101c7e18c  b 0x7101c7e230
7101c7e190  mov x8,#0x2700000000
7101c7e194  add x9,sp,#0x420
7101c7e198  add x21,x9,#0x8
7101c7e19c  str x8,[sp, #0x420]
7101c7e1a0  add x8,x9,#0x9
7101c7e1a4  mov x9,#0x656e
7101c7e1a8  movk x9,#0x725f, LSL #16
7101c7e1ac  movk x9,#0x6f6f, LSL #32
7101c7e1b0  movk x9,#0x5f6d, LSL #48
7101c7e1b4  str x9,[sp, #0x430]
7101c7e1b8  mov w9,#0x7473
7101c7e1bc  strh w9,[sp, #0x438]
7101c7e1c0  mov x10,#0x6e6d
7101c7e1c4  movk x10,#0x5f75, LSL #16
7101c7e1c8  mov x9,#0x6761
7101c7e1cc  movk x9,#0x5f65, LSL #16
7101c7e1d0  movk x10,#0x6e6f, LSL #32
7101c7e1d4  movk x10,#0x696c, LSL #48
7101c7e1d8  str x10,[sp, #0x428]
7101c7e1dc  movk x9,#0x7270, LSL #32
7101c7e1e0  movk x9,#0x7665, LSL #48
7101c7e1e4  stur x9,[x26, #0x1a]
7101c7e1e8  mov w9,#0x6f69
7101c7e1ec  movk w9,#0x7375, LSL #16
7101c7e1f0  stur w9,[x26, #0x22]
7101c7e1f4  mov x11,#0x735f
7101c7e1f8  movk x11,#0x6c65, LSL #16
7101c7e1fc  mov w9,#0x796c
7101c7e200  strh w9,[sp, #0x446]
7101c7e204  movk x11,#0x6365, LSL #32
7101c7e208  movk x11,#0x74, LSL #48
7101c7e20c  str x11,[sp, #0x448]
7101c7e210  mov w10,#0x6d
7101c7e214  mov w9,#0x89
7101c7e218  mov w11,w25
7101c7e21c  mul w11,w11,w9
7101c7e220  and w10,w10,#0xff
7101c7e224  eor w11,w11,w10
7101c7e228  ldrb w10,[x8], #0x1
7101c7e22c  cbnz w10,0x7101c7e21c
7101c7e230  adrp x1,0x7104308000
7101c7e234  add x1,x1,#0x5f9
7101c7e238  add x8,sp,#0x18
7101c7e23c  mov x0,x20
7101c7e240  str w11,[sp, #0x420]
7101c7e244  bl 0x7103776910
7101c7e248  add x0,sp,#0x18
7101c7e24c  mov x1,x21
7101c7e250  bl 0x710377a120
7101c7e254  ldr x0,[sp, #0x20]
7101c7e258  stp x24,xzr,[sp, #0x18]
7101c7e25c  cbz x0,0x7101c7e264
7101c7e260  bl 0x710392eb40
7101c7e264  ldrb w8,[x19, #0x231]
7101c7e268  cbz w8,0x7101c7e36c
7101c7e26c  adrp x1,0x7104308000
7101c7e270  add x1,x1,#0x60b
7101c7e274  add x8,sp,#0x420
7101c7e278  mov w2,#0x1
7101c7e27c  mov x0,x20
7101c7e280  add x21,sp,#0x420
7101c7e284  bl 0x7103776910
7101c7e288  adrp x1,0x710432a000
7101c7e28c  add x1,x1,#0x92
7101c7e290  add x0,sp,#0x420
7101c7e294  bl 0x710377a120
7101c7e298  ldr x0,[sp, #0x428]
7101c7e29c  str x24,[sp, #0x420]
7101c7e2a0  str xzr,[sp, #0x428]
7101c7e2a4  cbz x0,0x7101c7e2ac
7101c7e2a8  bl 0x710392eb40
7101c7e2ac  mov x8,xzr
7101c7e2b0  adrp x9,0x710435b000
7101c7e2b4  add x9,x9,#0x86b
7101c7e2b8  str xzr,[sp, #0x420]
7101c7e2bc  b 0x7101c7e2c8
7101c7e2c0  add x8,x8,#0x2
7101c7e2c4  strb w11,[x10, #0x9]
7101c7e2c8  add x11,x9,x8
7101c7e2cc  ldrb w12,[x11]
7101c7e2d0  cbz w12,0x7101c7e2e8
7101c7e2d4  ldrb w11,[x11, #0x1]
7101c7e2d8  add x10,x21,x8
7101c7e2dc  strb w12,[x10, #0x8]
7101c7e2e0  cbnz w11,0x7101c7e2c0
7101c7e2e4  add x8,x8,#0x1
7101c7e2e8  add x9,sp,#0x420
7101c7e2ec  add x21,x9,#0x8
7101c7e2f0  mov w10,w25
7101c7e2f4  strb wzr,[x21, w8, UXTW ]
7101c7e2f8  str w8,[sp, #0x424]
7101c7e2fc  ldrb w8,[sp, #0x428]
7101c7e300  cbz w8,0x7101c7e324
7101c7e304  add x9,x9,#0x9
7101c7e308  mov w11,#0x89
7101c7e30c  mov w10,w25
7101c7e310  mul w10,w10,w11
7101c7e314  and w8,w8,#0xff
7101c7e318  eor w10,w10,w8
7101c7e31c  ldrb w8,[x9], #0x1
7101c7e320  cbnz w8,0x7101c7e310
7101c7e324  adrp x1,0x7104412000
7101c7e328  add x1,x1,#0xabd
7101c7e32c  add x8,sp,#0x18
7101c7e330  mov w2,#0x1
7101c7e334  mov x0,x20
7101c7e338  str w10,[sp, #0x420]
7101c7e33c  bl 0x7103776910
7101c7e340  add x0,sp,#0x18
7101c7e344  mov x1,x21
7101c7e348  bl 0x710377a120
7101c7e34c  ldr x0,[sp, #0x20]
7101c7e350  stp x24,xzr,[sp, #0x18]
7101c7e354  cbz x0,0x7101c7e35c
7101c7e358  bl 0x710392eb40
7101c7e35c  mov w21,#0x2
7101c7e360  ldrb w8,[x19, #0x133]
7101c7e364  cbnz w8,0x7101c7e378
7101c7e368  b 0x7101c7e46c
7101c7e36c  mov w21,#0x1
7101c7e370  ldrb w8,[x19, #0x133]
7101c7e374  cbz w8,0x7101c7e46c
7101c7e378  adrp x1,0x7104308000
7101c7e37c  add x1,x1,#0x60b
7101c7e380  add x8,sp,#0x420
7101c7e384  mov x0,x20
7101c7e388  mov w2,w21
7101c7e38c  add x22,sp,#0x420
7101c7e390  bl 0x7103776910
7101c7e394  adrp x1,0x71042d6000
7101c7e398  add x1,x1,#0x325
7101c7e39c  add x0,sp,#0x420
7101c7e3a0  bl 0x710377a120
7101c7e3a4  ldr x0,[sp, #0x428]
7101c7e3a8  str x24,[sp, #0x420]
7101c7e3ac  str xzr,[sp, #0x428]
7101c7e3b0  cbz x0,0x7101c7e3b8
7101c7e3b4  bl 0x710392eb40
7101c7e3b8  mov x8,xzr
7101c7e3bc  adrp x9,0x7104433000
7101c7e3c0  add x9,x9,#0x12d
7101c7e3c4  str xzr,[sp, #0x420]
7101c7e3c8  b 0x7101c7e3d4
7101c7e3cc  add x8,x8,#0x2
7101c7e3d0  strb w11,[x10, #0x9]
7101c7e3d4  add x11,x9,x8
7101c7e3d8  ldrb w12,[x11]
7101c7e3dc  cbz w12,0x7101c7e3f4
7101c7e3e0  ldrb w11,[x11, #0x1]
7101c7e3e4  add x10,x22,x8
7101c7e3e8  strb w12,[x10, #0x8]
7101c7e3ec  cbnz w11,0x7101c7e3cc
7101c7e3f0  add x8,x8,#0x1
7101c7e3f4  add x9,sp,#0x420
7101c7e3f8  add x22,x9,#0x8
7101c7e3fc  mov w10,w25
7101c7e400  strb wzr,[x22, w8, UXTW ]
7101c7e404  str w8,[sp, #0x424]
7101c7e408  ldrb w8,[sp, #0x428]
7101c7e40c  cbz w8,0x7101c7e430
7101c7e410  add x9,x9,#0x9
7101c7e414  mov w11,#0x89
7101c7e418  mov w10,w25
7101c7e41c  mul w10,w10,w11
7101c7e420  and w8,w8,#0xff
7101c7e424  eor w10,w10,w8
7101c7e428  ldrb w8,[x9], #0x1
7101c7e42c  cbnz w8,0x7101c7e41c
7101c7e430  adrp x1,0x7104412000
7101c7e434  add x1,x1,#0xabd
7101c7e438  add x8,sp,#0x18
7101c7e43c  mov x0,x20
7101c7e440  mov w2,w21
7101c7e444  str w10,[sp, #0x420]
7101c7e448  bl 0x7103776910
7101c7e44c  add x0,sp,#0x18
7101c7e450  mov x1,x22
7101c7e454  bl 0x710377a120
7101c7e458  ldr x0,[sp, #0x20]
7101c7e45c  stp x24,xzr,[sp, #0x18]
7101c7e460  cbz x0,0x7101c7e468
7101c7e464  bl 0x710392eb40
7101c7e468  add w21,w21,#0x1
7101c7e46c  ldrb w8,[x19, #0x230]
7101c7e470  cbz w8,0x7101c7e560
7101c7e474  adrp x1,0x7104308000
7101c7e478  add x1,x1,#0x60b
7101c7e47c  add x8,sp,#0x420
7101c7e480  mov x0,x20
7101c7e484  mov w2,w21
7101c7e488  add x22,sp,#0x420
7101c7e48c  bl 0x7103776910
7101c7e490  adrp x1,0x7104318000
7101c7e494  add x1,x1,#0xf43
7101c7e498  add x0,sp,#0x420
7101c7e49c  bl 0x710377a120
7101c7e4a0  ldr x0,[sp, #0x428]
7101c7e4a4  str x24,[sp, #0x420]
7101c7e4a8  str xzr,[sp, #0x428]
7101c7e4ac  cbz x0,0x7101c7e4b4
7101c7e4b0  bl 0x710392eb40
7101c7e4b4  mov x8,xzr
7101c7e4b8  adrp x9,0x71042c4000
7101c7e4bc  add x9,x9,#0xdfe
7101c7e4c0  str xzr,[sp, #0x420]
7101c7e4c4  b 0x7101c7e4d0
7101c7e4c8  add x8,x8,#0x2
7101c7e4cc  strb w11,[x10, #0x9]
7101c7e4d0  add x11,x9,x8
7101c7e4d4  ldrb w12,[x11]
7101c7e4d8  cbz w12,0x7101c7e4f0
7101c7e4dc  ldrb w11,[x11, #0x1]
7101c7e4e0  add x10,x22,x8
7101c7e4e4  strb w12,[x10, #0x8]
7101c7e4e8  cbnz w11,0x7101c7e4c8
7101c7e4ec  add x8,x8,#0x1
7101c7e4f0  add x10,sp,#0x420
7101c7e4f4  add x22,x10,#0x8
7101c7e4f8  strb wzr,[x22, w8, UXTW ]
7101c7e4fc  ldrb w9,[sp, #0x428]
7101c7e500  str w8,[sp, #0x424]
7101c7e504  cbz w9,0x7101c7e524
7101c7e508  add x8,x10,#0x9
7101c7e50c  mov w10,#0x89
7101c7e510  mul w11,w25,w10
7101c7e514  and w9,w9,#0xff
7101c7e518  eor w25,w11,w9
7101c7e51c  ldrb w9,[x8], #0x1
7101c7e520  cbnz w9,0x7101c7e510
7101c7e524  adrp x1,0x7104412000
7101c7e528  add x1,x1,#0xabd
7101c7e52c  add x8,sp,#0x18
7101c7e530  mov x0,x20
7101c7e534  mov w2,w21
7101c7e538  str w25,[sp, #0x420]
7101c7e53c  bl 0x7103776910
7101c7e540  add x0,sp,#0x18
7101c7e544  mov x1,x22
7101c7e548  bl 0x710377a120
7101c7e54c  ldr x0,[sp, #0x20]
7101c7e550  stp x24,xzr,[sp, #0x18]
7101c7e554  cbz x0,0x7101c7e55c
7101c7e558  bl 0x710392eb40
7101c7e55c  add w21,w21,#0x1
7101c7e560  adrp x1,0x71042e7000
7101c7e564  add x1,x1,#0x268
7101c7e568  mov x0,x20
7101c7e56c  mov w2,w21
7101c7e570  bl 0x7103778430
7101c7e574  ldrb w9,[x19, #0x232]
7101c7e578  ldr x0,[x23, #0x10]
7101c7e57c  fmov s0,0x3f800000
7101c7e580  adrp x8,0x7104454000
7101c7e584  add x8,x8,#0xafe
7101c7e588  adrp x10,0x710439d000
7101c7e58c  add x10,x10,#0x4d4
7101c7e590  cmp w9,#0x0
7101c7e594  csel x1,x10,x8,eq
7101c7e598  bl 0x7103778300
7101c7e59c  add x0,x19,#0x108
7101c7e5a0  mov w2,#0x1
7101c7e5a4  mov w1,wzr
7101c7e5a8  bl 0x7103771a80
7101c7e5ac  ldr x0,[x19, #0x108]
7101c7e5b0  ldr x8,[x0]
7101c7e5b4  ldr x8,[x8, #0x70]
7101c7e5b8  mov w1,#0x1
7101c7e5bc  blr x8
7101c7e5c0  ldr x0,[x19, #0x108]
7101c7e5c4  ldr x8,[x0]
7101c7e5c8  ldr x8,[x8, #0x60]
7101c7e5cc  mov w1,#0x1
7101c7e5d0  blr x8
7101c7e5d4  ldrsw x8,[x19, #0xec]
7101c7e5d8  cmp w8,#0x13
7101c7e5dc  str wzr,[x19, #0x100]
7101c7e5e0  b.cs 0x7101c7e7dc
7101c7e5e4  add x8,x19,x8, LSL #0x2
7101c7e5e8  orr w9,wzr,#0x3
7101c7e5ec  str w9,[x8, #0xa0]
7101c7e5f0  add sp,sp,#0x900
7101c7e5f4  ldp x29,x30,[sp, #0x60]
7101c7e5f8  ldp x20,x19,[sp, #0x50]
7101c7e5fc  ldp x22,x21,[sp, #0x40]
7101c7e600  ldp x24,x23,[sp, #0x30]
7101c7e604  ldp x26,x25,[sp, #0x20]
7101c7e608  ldp x28,x27,[sp, #0x10]
7101c7e60c  ldr d8,[sp], #0x70
7101c7e610  ret
7101c7e614  mov x1,xzr
7101c7e618  add x8,sp,#0x18
7101c7e61c  mov x0,x20
7101c7e620  bl 0x7103776640
7101c7e624  adrp x1,0x710433a000
7101c7e628  add x1,x1,#0x953
7101c7e62c  add x8,sp,#0x420
7101c7e630  add x0,sp,#0x18
7101c7e634  bl 0x7103776910
7101c7e638  adrp x1,0x7104401000
7101c7e63c  add x1,x1,#0x682
7101c7e640  add x0,sp,#0x420
7101c7e644  bl 0x710377a120
7101c7e648  ldr x0,[sp, #0x428]
7101c7e64c  adrp x22,0x710523d000
7101c7e650  add x22,x22,#0x9a8
7101c7e654  str x22,[sp, #0x420]
7101c7e658  str xzr,[sp, #0x428]
7101c7e65c  cbz x0,0x7101c7e664
7101c7e660  bl 0x710392eb40
7101c7e664  ldr x21,[sp, #0x20]
7101c7e668  adrp x24,0x710523d000
7101c7e66c  add x24,x24,#0x988
7101c7e670  stp x24,xzr,[sp, #0x18]
7101c7e674  cbz x21,0x7101c7e690
7101c7e678  ldr x0,[x21, #0x18]
7101c7e67c  stp x22,xzr,[x21, #0x10]
7101c7e680  cbz x0,0x7101c7e688
7101c7e684  bl 0x710392eb40
7101c7e688  mov x0,x21
7101c7e68c  bl 0x710392eb40
7101c7e690  ldr w8,[x19, #0x114]
7101c7e694  cmp w8,#0x2
7101c7e698  b.ne 0x7101c7e6cc
7101c7e69c  ldr x8,[x19, #0x108]
7101c7e6a0  ldp x9,x10,[x8, #0x180]
7101c7e6a4  sub x10,x10,x9
7101c7e6a8  lsr x11,x10,#0x3
7101c7e6ac  cmp w11,#0x2
7101c7e6b0  b.lt 0x7101c7e6fc
7101c7e6b4  asr x10,x10,#0x3
7101c7e6b8  cmp x10,#0x1
7101c7e6bc  b.ls 0x7101c7e7e0
7101c7e6c0  ldr x8,[x9, #0x8]
7101c7e6c4  ldr x1,[x8, #0x88]
7101c7e6c8  b 0x7101c7e700
7101c7e6cc  ldr x8,[x19, #0x108]
7101c7e6d0  ldp x9,x10,[x8, #0x180]
7101c7e6d4  sub x10,x10,x9
7101c7e6d8  lsr x11,x10,#0x3
7101c7e6dc  cmp w11,#0x2
7101c7e6e0  b.lt 0x7101c7e72c
7101c7e6e4  asr x10,x10,#0x3
7101c7e6e8  cmp x10,#0x1
7101c7e6ec  b.ls 0x7101c7e7e0
7101c7e6f0  ldr x8,[x9, #0x8]
7101c7e6f4  ldr x1,[x8, #0x88]
7101c7e6f8  b 0x7101c7e730
7101c7e6fc  mov x1,xzr
7101c7e700  add x8,sp,#0x18
7101c7e704  mov x0,x20
7101c7e708  bl 0x7103776640
7101c7e70c  adrp x1,0x710433a000
7101c7e710  add x1,x1,#0x953
7101c7e714  add x8,sp,#0x420
7101c7e718  add x0,sp,#0x18
7101c7e71c  bl 0x7103776910
7101c7e720  adrp x1,0x710439d000
7101c7e724  add x1,x1,#0x494
7101c7e728  b 0x7101c7e758
7101c7e72c  mov x1,xzr
7101c7e730  add x8,sp,#0x18
7101c7e734  mov x0,x20
7101c7e738  bl 0x7103776640
7101c7e73c  adrp x1,0x710433a000
7101c7e740  add x1,x1,#0x953
7101c7e744  add x8,sp,#0x420
7101c7e748  add x0,sp,#0x18
7101c7e74c  bl 0x7103776910
7101c7e750  adrp x1,0x710432a000
7101c7e754  add x1,x1,#0x33
7101c7e758  add x0,sp,#0x420
7101c7e75c  bl 0x710377a120
7101c7e760  ldr x0,[sp, #0x428]
7101c7e764  str x22,[sp, #0x420]
7101c7e768  str xzr,[sp, #0x428]
7101c7e76c  cbz x0,0x7101c7e774
7101c7e770  bl 0x710392eb40
7101c7e774  ldr x21,[sp, #0x20]
7101c7e778  stp x24,xzr,[sp, #0x18]
7101c7e77c  cbz x21,0x7101c7d9e8
7101c7e780  ldr x0,[x21, #0x18]
7101c7e784  stp x22,xzr,[x21, #0x10]
7101c7e788  cbz x0,0x7101c7e790
7101c7e78c  bl 0x710392eb40
7101c7e790  mov x0,x21
7101c7e794  bl 0x710392eb40
7101c7e798  b 0x7101c7d9e8
7101c7e79c  adrp x0,0x7105314000
7101c7e7a0  add x0,x0,#0x4d8
7101c7e7a4  bl 0x71039c06b0
7101c7e7a8  cbz w0,0x7101c7da68
7101c7e7ac  bl 0x7101764000
7101c7e7b0  adrp x0,0x7101763000
7101c7e7b4  add x0,x0,#0xc40
7101c7e7b8  adrp x1,0x71052c5000
7101c7e7bc  add x1,x1,#0x180
7101c7e7c0  adrp x2,0x7104f17000
7101c7e7c4  add x2,x2,#0x0
7101c7e7c8  bl 0x71000001c0
7101c7e7cc  adrp x0,0x7105314000
7101c7e7d0  add x0,x0,#0x4d8
7101c7e7d4  bl 0x71039c06c0
7101c7e7d8  b 0x7101c7da68
7101c7e7dc  bl 0x71039c2650
7101c7e7e0  add x0,x8,#0x180
7101c7e7e4  bl 0x71039c1330
