// addr:      7101d6f820
// offset:    0x1d6f820
// name:      FUN_7101d6f820
// mangled:   
// size:      1248

7101d6f820  sub sp,sp,#0x50
7101d6f824  stp x22,x21,[sp, #0x20]
7101d6f828  stp x20,x19,[sp, #0x30]
7101d6f82c  stp x29,x30,[sp, #0x40]
7101d6f830  add x29,sp,#0x40
7101d6f834  ldrb w8,[x0, #0x360]
7101d6f838  cbz w8,0x7101d6fc14
7101d6f83c  mov x19,x0
7101d6f840  tbz w1,#0x0,0x7101d6f854
7101d6f844  ldr w8,[x19, #0x460]
7101d6f848  subs w8,w8,#0x1
7101d6f84c  str w8,[x19, #0x460]
7101d6f850  b.gt 0x7101d6fc14
7101d6f854  ldr x8,[x19, #0x1c0]
7101d6f858  ldr x21,[x8]
7101d6f85c  add x0,x19,#0x218
7101d6f860  add x1,x19,#0x388
7101d6f864  bl 0x7101d85c90
7101d6f868  ldr x8,[x19, #0x220]
7101d6f86c  ldr x8,[x8, #0x8]
7101d6f870  cbz x8,0x7101d6f944
7101d6f874  ldr x20,[x8, #0x78]
7101d6f878  adrp x8,0x710593b000
7101d6f87c  add x8,x8,#0xa40
7101d6f880  ldarb w8,[x8]
7101d6f884  tbz w8,#0x0,0x7101d6fc28
7101d6f888  cbz x20,0x7101d6f944
7101d6f88c  ldr x8,[x20]
7101d6f890  ldr x8,[x8]
7101d6f894  mov x0,x20
7101d6f898  blr x8
7101d6f89c  cbz x0,0x7101d6f944
7101d6f8a0  adrp x8,0x710593b000
7101d6f8a4  add x8,x8,#0xa58
7101d6f8a8  cmp x0,x8
7101d6f8ac  b.eq 0x7101d6f8bc
7101d6f8b0  ldr x0,[x0]
7101d6f8b4  cbnz x0,0x7101d6f8a8
7101d6f8b8  b 0x7101d6f944
7101d6f8bc  ldr w9,[x20, #0x54]
7101d6f8c0  ldr x8,[x20, #0x18]
7101d6f8c4  str w9,[x20, #0x58]
7101d6f8c8  cbz x8,0x7101d6f8dc
7101d6f8cc  str w9,[x8, #0x30]
7101d6f8d0  ldrb w9,[x8, #0x58]
7101d6f8d4  orr w9,w9,#0x10
7101d6f8d8  strb w9,[x8, #0x58]
7101d6f8dc  ldr x8,[x20, #0x20]
7101d6f8e0  cbz x8,0x7101d6f8f8
7101d6f8e4  ldr w9,[x20, #0x58]
7101d6f8e8  str w9,[x8, #0x30]
7101d6f8ec  ldrb w9,[x8, #0x58]
7101d6f8f0  orr w9,w9,#0x10
7101d6f8f4  strb w9,[x8, #0x58]
7101d6f8f8  ldr x0,[x20, #0x28]
7101d6f8fc  cbz x0,0x7101d6f910
7101d6f900  ldr x8,[x0]
7101d6f904  ldr x8,[x8, #0x180]
7101d6f908  fmov s0,wzr
7101d6f90c  blr x8
7101d6f910  ldr x0,[x20, #0x30]
7101d6f914  cbz x0,0x7101d6f940
7101d6f918  ldrb w8,[x20, #0x63]
7101d6f91c  cbz w8,0x7101d6f930
7101d6f920  ldr x8,[x0]
7101d6f924  ldr x8,[x8, #0x190]
7101d6f928  blr x8
7101d6f92c  b 0x7101d6f940
7101d6f930  ldr x8,[x0]
7101d6f934  ldr x8,[x8, #0x180]
7101d6f938  fmov s0,wzr
7101d6f93c  blr x8
7101d6f940  strh wzr,[x20, #0x64]
7101d6f944  add x0,x19,#0x228
7101d6f948  add x1,x19,#0x3d0
7101d6f94c  str wzr,[x19, #0x468]
7101d6f950  bl 0x7101d85c90
7101d6f954  ldr x8,[x19, #0x230]
7101d6f958  ldr x8,[x8, #0x8]
7101d6f95c  cbz x8,0x7101d6fa30
7101d6f960  ldr x20,[x8, #0x78]
7101d6f964  adrp x8,0x710593b000
7101d6f968  add x8,x8,#0xa40
7101d6f96c  ldarb w8,[x8]
7101d6f970  tbz w8,#0x0,0x7101d6fc6c
7101d6f974  cbz x20,0x7101d6fa30
7101d6f978  ldr x8,[x20]
7101d6f97c  ldr x8,[x8]
7101d6f980  mov x0,x20
7101d6f984  blr x8
7101d6f988  cbz x0,0x7101d6fa30
7101d6f98c  adrp x8,0x710593b000
7101d6f990  add x8,x8,#0xa58
7101d6f994  cmp x0,x8
7101d6f998  b.eq 0x7101d6f9a8
7101d6f99c  ldr x0,[x0]
7101d6f9a0  cbnz x0,0x7101d6f994
7101d6f9a4  b 0x7101d6fa30
7101d6f9a8  ldr w9,[x20, #0x54]
7101d6f9ac  ldr x8,[x20, #0x18]
7101d6f9b0  str w9,[x20, #0x58]
7101d6f9b4  cbz x8,0x7101d6f9c8
7101d6f9b8  str w9,[x8, #0x30]
7101d6f9bc  ldrb w9,[x8, #0x58]
7101d6f9c0  orr w9,w9,#0x10
7101d6f9c4  strb w9,[x8, #0x58]
7101d6f9c8  ldr x8,[x20, #0x20]
7101d6f9cc  cbz x8,0x7101d6f9e4
7101d6f9d0  ldr w9,[x20, #0x58]
7101d6f9d4  str w9,[x8, #0x30]
7101d6f9d8  ldrb w9,[x8, #0x58]
7101d6f9dc  orr w9,w9,#0x10
7101d6f9e0  strb w9,[x8, #0x58]
7101d6f9e4  ldr x0,[x20, #0x28]
7101d6f9e8  cbz x0,0x7101d6f9fc
7101d6f9ec  ldr x8,[x0]
7101d6f9f0  ldr x8,[x8, #0x180]
7101d6f9f4  fmov s0,wzr
7101d6f9f8  blr x8
7101d6f9fc  ldr x0,[x20, #0x30]
7101d6fa00  cbz x0,0x7101d6fa2c
7101d6fa04  ldrb w8,[x20, #0x63]
7101d6fa08  cbz w8,0x7101d6fa1c
7101d6fa0c  ldr x8,[x0]
7101d6fa10  ldr x8,[x8, #0x190]
7101d6fa14  blr x8
7101d6fa18  b 0x7101d6fa2c
7101d6fa1c  ldr x8,[x0]
7101d6fa20  ldr x8,[x8, #0x180]
7101d6fa24  fmov s0,wzr
7101d6fa28  blr x8
7101d6fa2c  strh wzr,[x20, #0x64]
7101d6fa30  ldr x9,[x19, #0x260]
7101d6fa34  str wzr,[x19, #0x46c]
7101d6fa38  ldr w8,[x19, #0x458]
7101d6fa3c  ldr x0,[x9, #0x10]
7101d6fa40  cbz w8,0x7101d6fa58
7101d6fa44  cbz x0,0x7101d6fa70
7101d6fa48  ldr x1,[x19, #0x450]
7101d6fa4c  mov w2,#0xffffffff
7101d6fa50  mov w3,#0x1
7101d6fa54  b 0x7101d6fa6c
7101d6fa58  cbz x0,0x7101d6fa70
7101d6fa5c  add x1,sp,#0x10
7101d6fa60  mov w2,wzr
7101d6fa64  mov w3,wzr
7101d6fa68  str wzr,[sp, #0x10]
7101d6fa6c  bl 0x71037a2270
7101d6fa70  ldrb w8,[x19, #0x35d]
7101d6fa74  cbnz w8,0x7101d6faa8
7101d6fa78  ldr w9,[x19, #0x290]
7101d6fa7c  ldr x0,[x21, #0x10]
7101d6fa80  fmov s0,0x3f800000
7101d6fa84  adrp x8,0x710432a000
7101d6fa88  add x8,x8,#0x3d4
7101d6fa8c  adrp x10,0x710425f000
7101d6fa90  add x10,x10,#0x7d4
7101d6fa94  cmp w9,#0x1
7101d6fa98  csel x1,x10,x8,eq
7101d6fa9c  bl 0x7103778300
7101d6faa0  mov w8,#0x1
7101d6faa4  strb w8,[x19, #0x35d]
7101d6faa8  ldr w8,[x19, #0x374]
7101d6faac  mov x22,x21
7101d6fab0  cmp w8,#0x3
7101d6fab4  b.eq 0x7101d6fad0
7101d6fab8  cmp w8,#0x2
7101d6fabc  b.ne 0x7101d6fae0
7101d6fac0  ldr x0,[x22, #0x10]!
7101d6fac4  adrp x1,0x71043cf000
7101d6fac8  add x1,x1,#0x79f
7101d6facc  b 0x7101d6faec
7101d6fad0  ldr x0,[x22, #0x10]!
7101d6fad4  adrp x1,0x71042b4000
7101d6fad8  add x1,x1,#0x715
7101d6fadc  b 0x7101d6faec
7101d6fae0  ldr x0,[x22, #0x10]!
7101d6fae4  adrp x1,0x710435b000
7101d6fae8  add x1,x1,#0xb35
7101d6faec  fmov s0,0x3f800000
7101d6faf0  bl 0x7103778300
7101d6faf4  mov x0,x19
7101d6faf8  bl 0x7101d6fd00
7101d6fafc  ldr x0,[x22]
7101d6fb00  fmov s0,0x3f800000
7101d6fb04  adrp x1,0x710437c000
7101d6fb08  add x1,x1,#0x8ec
7101d6fb0c  bl 0x7103778300
7101d6fb10  ldr w8,[x19, #0x290]
7101d6fb14  cmp w8,#0x1
7101d6fb18  b.ne 0x7101d6fc10
7101d6fb1c  adrp x8,0x710532f000
7101d6fb20  ldr x8,[x8, #0x730]
7101d6fb24  add x20,x21,#0x8
7101d6fb28  ldr x21,[x8, #0x8]
7101d6fb2c  ldr x1,[x19, #0x368]
7101d6fb30  ldr x0,[x21, #0x278]
7101d6fb34  bl 0x710325dd40
7101d6fb38  mov x1,x0
7101d6fb3c  ldr x0,[x21, #0x2b8]
7101d6fb40  bl 0x710327c470
7101d6fb44  mov x21,x0
7101d6fb48  adrp x1,0x7104280000
7101d6fb4c  add x1,x1,#0xdd4
7101d6fb50  add x8,sp,#0x10
7101d6fb54  mov x0,x20
7101d6fb58  bl 0x7103776640
7101d6fb5c  adrp x1,0x710433a000
7101d6fb60  add x1,x1,#0x4c1
7101d6fb64  mov x8,sp
7101d6fb68  add x0,sp,#0x10
7101d6fb6c  bl 0x7103776910
7101d6fb70  ldr x0,[x19, #0x1b8]
7101d6fb74  mov w2,#0x11
7101d6fb78  mov x1,x21
7101d6fb7c  bl 0x710323f600
7101d6fb80  ldr x21,[sp, #0x8]
7101d6fb84  mov x1,x0
7101d6fb88  mov x0,x21
7101d6fb8c  bl 0x7103778b80
7101d6fb90  ldr x20,[sp, #0x18]
7101d6fb94  fmov s0,0x3f800000
7101d6fb98  adrp x1,0x710434a000
7101d6fb9c  add x1,x1,#0x6fa
7101d6fba0  mov x0,x20
7101d6fba4  bl 0x7103778300
7101d6fba8  ldrb w8,[x19, #0x35c]
7101d6fbac  ldr x0,[x22]
7101d6fbb0  adrp x1,0x7104454000
7101d6fbb4  add x1,x1,#0xdf9
7101d6fbb8  cbz w8,0x7101d6fbcc
7101d6fbbc  fmov s0,0x3f800000
7101d6fbc0  bl 0x7103778300
7101d6fbc4  strb wzr,[x19, #0x35c]
7101d6fbc8  b 0x7101d6fbd0
7101d6fbcc  bl 0x7103778760
7101d6fbd0  adrp x22,0x710523d000
7101d6fbd4  add x22,x22,#0x9a8
7101d6fbd8  stp x22,xzr,[sp]
7101d6fbdc  cbz x21,0x7101d6fbe8
7101d6fbe0  mov x0,x21
7101d6fbe4  bl 0x710392eb40
7101d6fbe8  adrp x8,0x710523d000
7101d6fbec  add x8,x8,#0x988
7101d6fbf0  stp x8,xzr,[sp, #0x10]
7101d6fbf4  cbz x20,0x7101d6fc10
7101d6fbf8  ldr x0,[x20, #0x18]
7101d6fbfc  stp x22,xzr,[x20, #0x10]
7101d6fc00  cbz x0,0x7101d6fc08
7101d6fc04  bl 0x710392eb40
7101d6fc08  mov x0,x20
7101d6fc0c  bl 0x710392eb40
7101d6fc10  strb wzr,[x19, #0x360]
7101d6fc14  ldp x29,x30,[sp, #0x40]
7101d6fc18  ldp x20,x19,[sp, #0x30]
7101d6fc1c  ldp x22,x21,[sp, #0x20]
7101d6fc20  add sp,sp,#0x50
7101d6fc24  ret
7101d6fc28  adrp x0,0x710593b000
7101d6fc2c  add x0,x0,#0xa40
7101d6fc30  bl 0x71039c06b0
7101d6fc34  cbz w0,0x7101d6f888
7101d6fc38  adrp x8,0x710593b000
7101d6fc3c  add x8,x8,#0xa48
7101d6fc40  ldarb w8,[x8]
7101d6fc44  tbz w8,#0x0,0x7101d6fcb0
7101d6fc48  adrp x8,0x710593b000
7101d6fc4c  adrp x9,0x710593b000
7101d6fc50  add x9,x9,#0xa50
7101d6fc54  adrp x0,0x710593b000
7101d6fc58  add x0,x0,#0xa40
7101d6fc5c  str x9,[x8, #0xa58]
7101d6fc60  bl 0x71039c06c0
7101d6fc64  cbnz x20,0x7101d6f88c
7101d6fc68  b 0x7101d6f944
7101d6fc6c  adrp x0,0x710593b000
7101d6fc70  add x0,x0,#0xa40
7101d6fc74  bl 0x71039c06b0
7101d6fc78  cbz w0,0x7101d6f974
7101d6fc7c  adrp x8,0x710593b000
7101d6fc80  add x8,x8,#0xa48
7101d6fc84  ldarb w8,[x8]
7101d6fc88  tbz w8,#0x0,0x7101d6fcd8
7101d6fc8c  adrp x8,0x710593b000
7101d6fc90  adrp x9,0x710593b000
7101d6fc94  add x9,x9,#0xa50
7101d6fc98  adrp x0,0x710593b000
7101d6fc9c  add x0,x0,#0xa40
7101d6fca0  str x9,[x8, #0xa58]
7101d6fca4  bl 0x71039c06c0
7101d6fca8  cbnz x20,0x7101d6f978
7101d6fcac  b 0x7101d6fa30
7101d6fcb0  adrp x0,0x710593b000
7101d6fcb4  add x0,x0,#0xa48
7101d6fcb8  bl 0x71039c06b0
7101d6fcbc  cbz w0,0x7101d6fc48
7101d6fcc0  adrp x8,0x710593b000
7101d6fcc4  adrp x0,0x710593b000
7101d6fcc8  add x0,x0,#0xa48
7101d6fccc  str xzr,[x8, #0xa50]
7101d6fcd0  bl 0x71039c06c0
7101d6fcd4  b 0x7101d6fc48
7101d6fcd8  adrp x0,0x710593b000
7101d6fcdc  add x0,x0,#0xa48
7101d6fce0  bl 0x71039c06b0
7101d6fce4  cbz w0,0x7101d6fc8c
7101d6fce8  adrp x8,0x710593b000
7101d6fcec  adrp x0,0x710593b000
7101d6fcf0  add x0,x0,#0xa48
7101d6fcf4  str xzr,[x8, #0xa50]
7101d6fcf8  bl 0x71039c06c0
7101d6fcfc  b 0x7101d6fc8c
