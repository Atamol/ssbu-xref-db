// addr:      710189f870
// offset:    0x189f870
// name:      FUN_710189f870
// mangled:   
// size:      2192

710189f870  sub sp,sp,#0x70
710189f874  str x27,[sp, #0x10]
710189f878  stp x26,x25,[sp, #0x20]
710189f87c  stp x24,x23,[sp, #0x30]
710189f880  stp x22,x21,[sp, #0x40]
710189f884  stp x20,x19,[sp, #0x50]
710189f888  stp x29,x30,[sp, #0x60]
710189f88c  add x29,sp,#0x60
710189f890  mov x20,x0
710189f894  mov w0,#0x10
710189f898  orr w1,wzr,#0xe0
710189f89c  bl 0x710392e290
710189f8a0  mov x19,x0
710189f8a4  cbnz x0,0x710189f8f0
710189f8a8  adrp x8,0x7105332000
710189f8ac  ldr x0,[x8, #0xf00]
710189f8b0  cbz x0,0x710189f8ec
710189f8b4  orr w8,wzr,#0xe0
710189f8b8  str wzr,[sp, #0x1c]
710189f8bc  add x1,sp,#0x1c
710189f8c0  str x8,[sp]
710189f8c4  ldr x8,[x0]
710189f8c8  ldr x8,[x8, #0x30]
710189f8cc  mov x2,sp
710189f8d0  blr x8
710189f8d4  tbz w0,#0x0,0x710189f8ec
710189f8d8  mov w0,#0x10
710189f8dc  orr w1,wzr,#0xe0
710189f8e0  bl 0x710392e290
710189f8e4  mov x19,x0
710189f8e8  cbnz x0,0x710189f8f0
710189f8ec  mov x19,xzr
710189f8f0  mov x21,x19
710189f8f4  mov w23,#0xffffffff
710189f8f8  mov w0,#0x10
710189f8fc  mov w1,#0x80
710189f900  str x19,[x19]
710189f904  str xzr,[x19, #0x20]
710189f908  str xzr,[x21, #0x8]!
710189f90c  stp xzr,xzr,[x19, #0x10]
710189f910  str w23,[x19, #0xc0]
710189f914  strb wzr,[x19, #0xc4]
710189f918  str xzr,[x19, #0x28]
710189f91c  str wzr,[x19, #0xc8]
710189f920  stp xzr,x23,[x19, #0xb0]
710189f924  stp xzr,xzr,[x19, #0xa0]
710189f928  stp xzr,xzr,[x19, #0x90]
710189f92c  stp xzr,xzr,[x19, #0x80]
710189f930  stp xzr,xzr,[x19, #0x70]
710189f934  stp xzr,xzr,[x19, #0x60]
710189f938  stp xzr,xzr,[x19, #0x50]
710189f93c  stp xzr,xzr,[x19, #0x40]
710189f940  stp xzr,xzr,[x19, #0x30]
710189f944  bl 0x710392e290
710189f948  cbnz x0,0x710189f990
710189f94c  adrp x8,0x7105332000
710189f950  ldr x0,[x8, #0xf00]
710189f954  cbz x0,0x710189f98c
710189f958  mov w8,#0x80
710189f95c  str wzr,[sp, #0x1c]
710189f960  add x1,sp,#0x1c
710189f964  str x8,[sp]
710189f968  ldr x8,[x0]
710189f96c  ldr x8,[x8, #0x30]
710189f970  mov x2,sp
710189f974  blr x8
710189f978  tbz w0,#0x0,0x710189f98c
710189f97c  mov w0,#0x10
710189f980  mov w1,#0x80
710189f984  bl 0x710392e290
710189f988  cbnz x0,0x710189f990
710189f98c  mov x0,xzr
710189f990  adrp x8,0x7105181000
710189f994  add x8,x8,#0xb40
710189f998  str x8,[x0]
710189f99c  mov x8,x0
710189f9a0  adrp x9,0x710189f000
710189f9a4  add x9,x9,#0x550
710189f9a8  str xzr,[x8, #0x10]!
710189f9ac  str x8,[x0, #0x8]
710189f9b0  mov x8,x0
710189f9b4  str xzr,[x8, #0x28]!
710189f9b8  stp xzr,x8,[x0, #0x18]
710189f9bc  mov x8,x0
710189f9c0  str xzr,[x8, #0x40]!
710189f9c4  stp xzr,x8,[x0, #0x30]
710189f9c8  mov x8,x0
710189f9cc  str xzr,[x8, #0x58]!
710189f9d0  stp xzr,x8,[x0, #0x48]
710189f9d4  mov w8,#0x2
710189f9d8  str w8,[x0, #0x68]
710189f9dc  adrp x8,0x710189f000
710189f9e0  add x8,x8,#0x540
710189f9e4  str xzr,[x0, #0x60]
710189f9e8  str wzr,[x0, #0x78]
710189f9ec  str xzr,[x0, #0x70]
710189f9f0  stp x8,xzr,[x19, #0x28]
710189f9f4  adrp x8,0x710189f000
710189f9f8  add x8,x8,#0x5e0
710189f9fc  stp x8,xzr,[x19, #0x48]
710189fa00  adrp x8,0x710189f000
710189fa04  add x8,x8,#0x660
710189fa08  stp x0,xzr,[x19, #0xd0]
710189fa0c  mov x0,x19
710189fa10  stp x8,xzr,[x19, #0x58]
710189fa14  orr x8,xzr,#-0x100000000
710189fa18  stp x9,xzr,[x19, #0x38]
710189fa1c  stp xzr,xzr,[x21]
710189fa20  stur xzr,[x19, #0xac]
710189fa24  stur xzr,[x19, #0xa4]
710189fa28  stur xzr,[x19, #0x9c]
710189fa2c  stur xzr,[x19, #0x94]
710189fa30  stur xzr,[x19, #0x8c]
710189fa34  stur xzr,[x19, #0x84]
710189fa38  stur xzr,[x19, #0x7c]
710189fa3c  stur xzr,[x19, #0x74]
710189fa40  stur xzr,[x19, #0x6c]
710189fa44  stur x8,[x19, #0xb4]
710189fa48  stur x8,[x19, #0xbc]
710189fa4c  strb wzr,[x19, #0xc4]
710189fa50  str wzr,[x19, #0x68]
710189fa54  bl 0x71018a01f0
710189fa58  ldr x21,[x20, #0x58]
710189fa5c  str x19,[x20, #0x58]
710189fa60  cbz x21,0x710189faa0
710189fa64  ldr x0,[x21, #0xd8]
710189fa68  str xzr,[x21, #0xd8]
710189fa6c  cbz x0,0x710189fa74
710189fa70  bl 0x71032cad20
710189fa74  ldr x0,[x21, #0xd0]
710189fa78  bl 0x710323b9e0
710189fa7c  ldr x0,[x21, #0xd0]
710189fa80  str xzr,[x21, #0xd0]
710189fa84  cbz x0,0x710189fa94
710189fa88  ldr x8,[x0]
710189fa8c  ldr x8,[x8, #0x8]
710189fa90  blr x8
710189fa94  mov x0,x21
710189fa98  bl 0x710392eb40
710189fa9c  ldr x19,[x20, #0x58]
710189faa0  mov x25,x19
710189faa4  ldr x0,[x25, #0xd0]!
710189faa8  ldrsw x2,[x0, #0x70]
710189faac  ldr w3,[x0, #0x68]
710189fab0  adrp x1,0x7104545000
710189fab4  add x1,x1,#0x358
710189fab8  mov w4,wzr
710189fabc  bl 0x710323beb0
710189fac0  ldr x20,[x25]
710189fac4  mov x0,x20
710189fac8  bl 0x710323cb80
710189facc  tbnz w0,#0x0,0x710189faec
710189fad0  mov w21,#0x4240
710189fad4  movk w21,#0xf, LSL #16
710189fad8  mov x0,x21
710189fadc  bl 0x71039c0d80
710189fae0  mov x0,x20
710189fae4  bl 0x710323cb80
710189fae8  tbz w0,#0x0,0x710189fad8
710189faec  mov w1,#0x88
710189faf0  mov w0,#0x10
710189faf4  bl 0x710392e290
710189faf8  mov x20,x0
710189fafc  cbnz x0,0x710189fb48
710189fb00  adrp x8,0x7105332000
710189fb04  ldr x0,[x8, #0xf00]
710189fb08  cbz x0,0x710189fb44
710189fb0c  mov w8,#0x88
710189fb10  str wzr,[sp, #0x1c]
710189fb14  add x1,sp,#0x1c
710189fb18  str x8,[sp]
710189fb1c  ldr x8,[x0]
710189fb20  ldr x8,[x8, #0x30]
710189fb24  mov x2,sp
710189fb28  blr x8
710189fb2c  tbz w0,#0x0,0x710189fb44
710189fb30  mov w1,#0x88
710189fb34  mov w0,#0x10
710189fb38  bl 0x710392e290
710189fb3c  mov x20,x0
710189fb40  cbnz x0,0x710189fb48
710189fb44  mov x20,xzr
710189fb48  adrp x8,0x71050ae000
710189fb4c  add x8,x8,#0x288
710189fb50  mov w0,#0x10
710189fb54  stp x8,xzr,[x20]
710189fb58  orr x8,xzr,#0x1ffffffff
710189fb5c  stp xzr,x8,[x20, #0x60]
710189fb60  mov w8,#0x1
710189fb64  orr w1,wzr,#0x180
710189fb68  stp xzr,xzr,[x20, #0x10]
710189fb6c  strb wzr,[x20, #0x58]
710189fb70  str x25,[x20, #0x78]
710189fb74  strb w8,[x20, #0x70]
710189fb78  stp xzr,xzr,[x20, #0x48]
710189fb7c  bl 0x710392e290
710189fb80  mov x21,x0
710189fb84  cbnz x0,0x710189fbd0
710189fb88  adrp x8,0x7105332000
710189fb8c  ldr x0,[x8, #0xf00]
710189fb90  cbz x0,0x710189fbcc
710189fb94  orr w8,wzr,#0x180
710189fb98  str wzr,[sp, #0x1c]
710189fb9c  add x1,sp,#0x1c
710189fba0  str x8,[sp]
710189fba4  ldr x8,[x0]
710189fba8  ldr x8,[x8, #0x30]
710189fbac  mov x2,sp
710189fbb0  blr x8
710189fbb4  tbz w0,#0x0,0x710189fbcc
710189fbb8  mov w0,#0x10
710189fbbc  orr w1,wzr,#0x180
710189fbc0  bl 0x710392e290
710189fbc4  mov x21,x0
710189fbc8  cbnz x0,0x710189fbd0
710189fbcc  mov x21,xzr
710189fbd0  mov w0,#0x10
710189fbd4  mov w1,#0x8
710189fbd8  bl 0x710392e290
710189fbdc  mov x22,x0
710189fbe0  cbnz x0,0x710189fc2c
710189fbe4  adrp x8,0x7105332000
710189fbe8  ldr x0,[x8, #0xf00]
710189fbec  cbz x0,0x710189fc28
710189fbf0  mov w8,#0x8
710189fbf4  str wzr,[sp, #0x1c]
710189fbf8  add x1,sp,#0x1c
710189fbfc  str x8,[sp]
710189fc00  ldr x8,[x0]
710189fc04  ldr x8,[x8, #0x30]
710189fc08  mov x2,sp
710189fc0c  blr x8
710189fc10  tbz w0,#0x0,0x710189fc28
710189fc14  mov w0,#0x10
710189fc18  mov w1,#0x8
710189fc1c  bl 0x710392e290
710189fc20  mov x22,x0
710189fc24  cbnz x0,0x710189fc2c
710189fc28  mov x22,xzr
710189fc2c  mov x0,x22
710189fc30  bl 0x7103773200
710189fc34  stp x22,x21,[x21]
710189fc38  add x22,x21,#0xf0
710189fc3c  mov x24,x21
710189fc40  mov x0,x22
710189fc44  str xzr,[x21, #0x18]
710189fc48  str xzr,[x24, #0x10]!
710189fc4c  stp xzr,xzr,[x21, #0x20]
710189fc50  str w23,[x21, #0xe8]
710189fc54  strb wzr,[x21, #0xec]
710189fc58  str xzr,[x21, #0x30]
710189fc5c  stp xzr,x23,[x21, #0xd8]
710189fc60  stp xzr,xzr,[x21, #0xc8]
710189fc64  stp xzr,xzr,[x21, #0xb8]
710189fc68  stp xzr,xzr,[x21, #0xa8]
710189fc6c  stp xzr,xzr,[x21, #0x98]
710189fc70  stp xzr,xzr,[x21, #0x88]
710189fc74  stp xzr,xzr,[x21, #0x78]
710189fc78  stp xzr,xzr,[x21, #0x68]
710189fc7c  stp xzr,xzr,[x21, #0x58]
710189fc80  stp xzr,xzr,[x21, #0x48]
710189fc84  stp xzr,xzr,[x21, #0x38]
710189fc88  bl 0x7103776290
710189fc8c  add x23,x21,#0x100
710189fc90  mov x0,x23
710189fc94  bl 0x7103776290
710189fc98  adrp x26,0x710523d000
710189fc9c  add x26,x26,#0x9a8
710189fca0  mov w0,#0x10
710189fca4  mov w1,#0x20
710189fca8  str x26,[x21, #0x110]
710189fcac  bl 0x710392e290
710189fcb0  cbnz x0,0x710189fcf8
710189fcb4  adrp x8,0x7105332000
710189fcb8  ldr x0,[x8, #0xf00]
710189fcbc  cbz x0,0x710189fcf4
710189fcc0  mov w8,#0x20
710189fcc4  str wzr,[sp, #0x1c]
710189fcc8  add x1,sp,#0x1c
710189fccc  str x8,[sp]
710189fcd0  ldr x8,[x0]
710189fcd4  ldr x8,[x8, #0x30]
710189fcd8  mov x2,sp
710189fcdc  blr x8
710189fce0  tbz w0,#0x0,0x710189fcf4
710189fce4  mov w0,#0x10
710189fce8  mov w1,#0x20
710189fcec  bl 0x710392e290
710189fcf0  cbnz x0,0x710189fcf8
710189fcf4  mov x0,xzr
710189fcf8  stp xzr,xzr,[x0, #0x10]
710189fcfc  mov w1,#0x20
710189fd00  stp xzr,xzr,[x0]
710189fd04  mov w27,#0x20
710189fd08  stp x0,x26,[x21, #0x118]
710189fd0c  mov w0,#0x10
710189fd10  bl 0x710392e290
710189fd14  cbnz x0,0x710189fd5c
710189fd18  adrp x8,0x7105332000
710189fd1c  ldr x0,[x8, #0xf00]
710189fd20  cbz x0,0x710189fd58
710189fd24  mov w8,#0x20
710189fd28  str wzr,[sp, #0x1c]
710189fd2c  add x1,sp,#0x1c
710189fd30  str x8,[sp]
710189fd34  ldr x8,[x0]
710189fd38  ldr x8,[x8, #0x30]
710189fd3c  mov x2,sp
710189fd40  blr x8
710189fd44  tbz w0,#0x0,0x710189fd58
710189fd48  mov w0,#0x10
710189fd4c  mov w1,#0x20
710189fd50  bl 0x710392e290
710189fd54  cbnz x0,0x710189fd5c
710189fd58  mov x0,xzr
710189fd5c  mov w8,#0x1
710189fd60  stp xzr,xzr,[x0, #0x10]
710189fd64  stp xzr,xzr,[x0]
710189fd68  adrp x2,0x7104545000
710189fd6c  add x2,x2,#0x358
710189fd70  mov w3,#0x1
710189fd74  str w8,[x21, #0x138]
710189fd78  str w8,[x21, #0x148]
710189fd7c  add x8,x21,#0x175
710189fd80  str xzr,[x21, #0x140]
710189fd84  str xzr,[x21, #0x150]
710189fd88  strb wzr,[x21, #0x158]
710189fd8c  str xzr,[x21, #0x160]
710189fd90  stp x0,xzr,[x21, #0x128]
710189fd94  mov x0,x21
710189fd98  str xzr,[x8]
710189fd9c  stp xzr,xzr,[x21, #0x168]
710189fda0  ldr x1,[x25]
710189fda4  bl 0x71032cbf30
710189fda8  ldr x8,[x21]
710189fdac  ldr x8,[x8]
710189fdb0  ldr x8,[x8]
710189fdb4  ldr x8,[x8, #0x600]
710189fdb8  mov w9,#0x40
710189fdbc  str w9,[x8, #0x14]
710189fdc0  ldr x8,[x21]
710189fdc4  ldr x8,[x8]
710189fdc8  ldr x8,[x8]
710189fdcc  ldr x8,[x8, #0x600]
710189fdd0  str w27,[x8, #0x10]
710189fdd4  ldr x8,[x21]
710189fdd8  ldr x0,[x8]
710189fddc  mov w2,#0x5000
710189fde0  movk w2,#0x1, LSL #16
710189fde4  mov w1,#0x1
710189fde8  bl 0x7103775dc0
710189fdec  ldr x8,[x21]
710189fdf0  ldr x8,[x8]
710189fdf4  add x9,x8,#0x8
710189fdf8  cmp x9,x22
710189fdfc  b.eq 0x710189fe70
710189fe00  ldr x9,[x8, #0x10]
710189fe04  ldr x9,[x9]
710189fe08  ldr x10,[x21, #0xf8]
710189fe0c  str x9,[x10]
710189fe10  ldr x9,[x8, #0x10]
710189fe14  ldr x9,[x9, #0x8]
710189fe18  ldr x10,[x21, #0xf8]
710189fe1c  str x9,[x10, #0x8]
710189fe20  ldr x9,[x8, #0x10]
710189fe24  ldr x8,[x21, #0xf8]
710189fe28  cmp x8,x9
710189fe2c  b.eq 0x710189fe70
710189fe30  ldr x10,[x9, #0x18]
710189fe34  ldr x10,[x10]
710189fe38  ldr x11,[x8, #0x18]
710189fe3c  str x10,[x11]
710189fe40  ldr x10,[x9, #0x18]
710189fe44  ldr x10,[x10, #0x8]
710189fe48  ldr x11,[x8, #0x18]
710189fe4c  str x10,[x11, #0x8]
710189fe50  ldr x10,[x9, #0x18]
710189fe54  ldr x10,[x10, #0x10]
710189fe58  ldr x11,[x8, #0x18]
710189fe5c  str x10,[x11, #0x10]
710189fe60  ldr x9,[x9, #0x18]
710189fe64  ldr x9,[x9, #0x18]
710189fe68  ldr x8,[x8, #0x18]
710189fe6c  str x9,[x8, #0x18]
710189fe70  adrp x1,0x710436c000
710189fe74  add x1,x1,#0x4ef
710189fe78  mov x8,sp
710189fe7c  mov x0,x22
710189fe80  mov x25,sp
710189fe84  bl 0x71037780e0
710189fe88  mov x0,sp
710189fe8c  bl 0x710377b140
710189fe90  ldr x0,[sp, #0x8]
710189fe94  adrp x8,0x710523d000
710189fe98  add x8,x8,#0x9e8
710189fe9c  stp x8,xzr,[sp]
710189fea0  cbz x0,0x710189fea8
710189fea4  bl 0x710392eb40
710189fea8  adrp x1,0x71043f0000
710189feac  add x1,x1,#0xa84
710189feb0  mov x8,sp
710189feb4  mov x0,x22
710189feb8  bl 0x7103776640
710189febc  cmp x25,x23
710189fec0  b.eq 0x710189fef0
710189fec4  ldr x8,[sp, #0x8]
710189fec8  str xzr,[sp, #0x8]
710189fecc  ldr x23,[x21, #0x108]
710189fed0  str x8,[x21, #0x108]
710189fed4  cbz x23,0x710189fef0
710189fed8  ldr x0,[x23, #0x18]
710189fedc  stp x26,xzr,[x23, #0x10]
710189fee0  cbz x0,0x710189fee8
710189fee4  bl 0x710392eb40
710189fee8  mov x0,x23
710189feec  bl 0x710392eb40
710189fef0  ldr x23,[sp, #0x8]
710189fef4  add x25,x21,#0x110
710189fef8  adrp x8,0x710523d000
710189fefc  add x8,x8,#0x988
710189ff00  stp x8,xzr,[sp]
710189ff04  cbz x23,0x710189ff20
710189ff08  ldr x0,[x23, #0x18]
710189ff0c  stp x26,xzr,[x23, #0x10]
710189ff10  cbz x0,0x710189ff18
710189ff14  bl 0x710392eb40
710189ff18  mov x0,x23
710189ff1c  bl 0x710392eb40
710189ff20  ldr x0,[x21, #0x108]
710189ff24  fmov s0,0x3f800000
710189ff28  adrp x1,0x710432a000
710189ff2c  add x1,x1,#0x87b
710189ff30  bl 0x7103778300
710189ff34  adrp x1,0x7104433000
710189ff38  add x1,x1,#0x29f
710189ff3c  mov x8,sp
710189ff40  mov x0,x22
710189ff44  mov x23,sp
710189ff48  bl 0x7103776910
710189ff4c  cmp x23,x25
710189ff50  b.eq 0x710189ff6c
710189ff54  ldr x8,[sp, #0x8]
710189ff58  str xzr,[sp, #0x8]
710189ff5c  ldr x0,[x21, #0x118]
710189ff60  str x8,[x21, #0x118]
710189ff64  cbz x0,0x710189ff6c
710189ff68  bl 0x710392eb40
710189ff6c  ldr x0,[sp, #0x8]
710189ff70  add x25,x21,#0x120
710189ff74  stp x26,xzr,[sp]
710189ff78  cbz x0,0x710189ff80
710189ff7c  bl 0x710392eb40
710189ff80  adrp x1,0x71042e7000
710189ff84  add x1,x1,#0x3d3
710189ff88  mov x8,sp
710189ff8c  mov x0,x22
710189ff90  add x23,x21,#0x8
710189ff94  mov x27,sp
710189ff98  bl 0x7103776910
710189ff9c  cmp x27,x25
710189ffa0  b.eq 0x710189ffbc
710189ffa4  ldr x8,[sp, #0x8]
710189ffa8  str xzr,[sp, #0x8]
710189ffac  ldr x0,[x21, #0x128]
710189ffb0  str x8,[x21, #0x128]
710189ffb4  cbz x0,0x710189ffbc
710189ffb8  bl 0x710392eb40
710189ffbc  ldr x0,[sp, #0x8]
710189ffc0  stp x26,xzr,[sp]
710189ffc4  cbz x0,0x710189ffcc
710189ffc8  bl 0x710392eb40
710189ffcc  adrp x8,0x7101cc3000
710189ffd0  add x8,x8,#0x320
710189ffd4  adrp x9,0x7101cc4000
710189ffd8  add x9,x9,#0xa0
710189ffdc  stp x8,xzr,[x21, #0x30]
710189ffe0  adrp x8,0x7101cc3000
710189ffe4  add x8,x8,#0x330
710189ffe8  mov x0,x23
710189ffec  stp x8,xzr,[x21, #0x40]
710189fff0  adrp x8,0x7101cc3000
710189fff4  add x8,x8,#0xa00
710189fff8  stp x8,xzr,[x21, #0x50]
710189fffc  adrp x8,0x7101cc4000
71018a0000  add x8,x8,#0x100
71018a0004  stp x8,xzr,[x21, #0x70]
71018a0008  adrp x8,0x7101cc4000
71018a000c  add x8,x8,#0x170
71018a0010  stp x8,xzr,[x21, #0x80]
71018a0014  orr x8,xzr,#-0x100000000
71018a0018  stp x9,xzr,[x21, #0x60]
71018a001c  stp xzr,xzr,[x24]
71018a0020  stur xzr,[x21, #0xd4]
71018a0024  stur xzr,[x21, #0xcc]
71018a0028  stur xzr,[x21, #0xc4]
71018a002c  stur xzr,[x21, #0xbc]
71018a0030  stur xzr,[x21, #0xb4]
71018a0034  stur xzr,[x21, #0xac]
71018a0038  stur xzr,[x21, #0xa4]
71018a003c  stur xzr,[x21, #0x9c]
71018a0040  stur xzr,[x21, #0x94]
71018a0044  stur x8,[x21, #0xdc]
71018a0048  stur x8,[x21, #0xe4]
71018a004c  strb wzr,[x21, #0xec]
71018a0050  str wzr,[x21, #0x90]
71018a0054  bl 0x7101cc4180
71018a0058  adrp x8,0x7105333000
71018a005c  add x8,x8,#0x600
71018a0060  str x21,[x20, #0x80]
71018a0064  str x8,[x20, #0x10]
71018a0068  ldp w9,w8,[x8, #0x60]
71018a006c  stp w9,w8,[x20, #0x68]
71018a0070  adrp x8,0x7105333000
71018a0074  add x8,x8,#0x650
71018a0078  mov w9,#0x1
71018a007c  ldaxrb w10,[x8]
71018a0080  stxrb w11,w9,[x8]
71018a0084  and w10,w10,#0x1
71018a0088  cmp w11,#0x0
71018a008c  ccmp w10,#0x0,#0x0,eq
71018a0090  b.ne 0x71018a007c
71018a0094  adrp x8,0x7105333000
71018a0098  add x8,x8,#0x648
71018a009c  ldr x9,[x8]
71018a00a0  str x9,[x20, #0x48]
71018a00a4  mov x0,x20
71018a00a8  str x20,[x8], #0x8
71018a00ac  stlrb wzr,[x8]
71018a00b0  bl 0x71032caea0
71018a00b4  ldr x0,[x19, #0xd8]
71018a00b8  str x20,[x19, #0xd8]
71018a00bc  cbz x0,0x71018a00c4
71018a00c0  bl 0x71032cad20
71018a00c4  ldrsw x8,[x19, #0xb4]
71018a00c8  cmp w8,#0x13
71018a00cc  b.cs 0x71018a00fc
71018a00d0  add x8,x19,x8, LSL #0x2
71018a00d4  mov w9,#0x1
71018a00d8  str w9,[x8, #0x68]
71018a00dc  ldp x29,x30,[sp, #0x60]
71018a00e0  ldr x27,[sp, #0x10]
71018a00e4  ldp x20,x19,[sp, #0x50]
71018a00e8  ldp x22,x21,[sp, #0x40]
71018a00ec  ldp x24,x23,[sp, #0x30]
71018a00f0  ldp x26,x25,[sp, #0x20]
71018a00f4  add sp,sp,#0x70
71018a00f8  ret
71018a00fc  bl 0x71039c2650
