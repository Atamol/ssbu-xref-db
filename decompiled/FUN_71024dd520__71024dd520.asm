// addr:      71024dd520
// offset:    0x24dd520
// name:      FUN_71024dd520
// mangled:   
// size:      33412

71024dd520  str d8,[sp, #-0x70]!
71024dd524  stp x28,x27,[sp, #0x10]
71024dd528  stp x26,x25,[sp, #0x20]
71024dd52c  stp x24,x23,[sp, #0x30]
71024dd530  stp x22,x21,[sp, #0x40]
71024dd534  stp x20,x19,[sp, #0x50]
71024dd538  stp x29,x30,[sp, #0x60]
71024dd53c  add x29,sp,#0x60
71024dd540  sub sp,sp,#0x220
71024dd544  mov w8,#0x1ed8
71024dd548  mov x19,x0
71024dd54c  add x20,x0,x8
71024dd550  ldr x0,[x0, #0x1ed8]
71024dd554  cbz x0,0x71024dd594
71024dd558  fmov s0,0x3f800000
71024dd55c  bl 0x71024fce50
71024dd560  ldr x9,[x20]
71024dd564  ldr w8,[x9, #0x21c8]
71024dd568  cbz w8,0x71024dd594
71024dd56c  ldr x8,[x19, #0x1f28]
71024dd570  cbz x8,0x71024dd594
71024dd574  ldr q0,[x9, #0x2160]
71024dd578  fmov s1,wzr
71024dd57c  ext v2.16B,v0.16B,v0.16B,0x8
71024dd580  mov v2.S[0x1],v1.S[0x0]
71024dd584  mov v0.D[0x1],v2.D[0x0]
71024dd588  str q0,[x8, #0xa0]
71024dd58c  ldr x0,[x19, #0x1f28]
71024dd590  bl 0x7102508e30
71024dd594  ldr x0,[x19, #0x1ee0]
71024dd598  mov w8,#0x1ee0
71024dd59c  add x21,x19,x8
71024dd5a0  cbz x0,0x71024dd5e0
71024dd5a4  fmov s0,0x3f800000
71024dd5a8  bl 0x71024fce50
71024dd5ac  ldr x9,[x21]
71024dd5b0  ldr w8,[x9, #0x21c8]
71024dd5b4  cbz w8,0x71024dd5e0
71024dd5b8  ldr x8,[x19, #0x1f30]
71024dd5bc  cbz x8,0x71024dd5e0
71024dd5c0  ldr q0,[x9, #0x2160]
71024dd5c4  fmov s1,wzr
71024dd5c8  ext v2.16B,v0.16B,v0.16B,0x8
71024dd5cc  mov v2.S[0x1],v1.S[0x0]
71024dd5d0  mov v0.D[0x1],v2.D[0x0]
71024dd5d4  str q0,[x8, #0xa0]
71024dd5d8  ldr x0,[x19, #0x1f30]
71024dd5dc  bl 0x7102508e30
71024dd5e0  ldr x0,[x19, #0x1ee8]
71024dd5e4  mov w8,#0x1ee8
71024dd5e8  add x22,x19,x8
71024dd5ec  cbz x0,0x71024dd62c
71024dd5f0  fmov s0,0x3f800000
71024dd5f4  bl 0x71024fce50
71024dd5f8  ldr x9,[x22]
71024dd5fc  ldr w8,[x9, #0x21c8]
71024dd600  cbz w8,0x71024dd62c
71024dd604  ldr x8,[x19, #0x1f38]
71024dd608  cbz x8,0x71024dd62c
71024dd60c  ldr q0,[x9, #0x2160]
71024dd610  fmov s1,wzr
71024dd614  ext v2.16B,v0.16B,v0.16B,0x8
71024dd618  mov v2.S[0x1],v1.S[0x0]
71024dd61c  mov v0.D[0x1],v2.D[0x0]
71024dd620  str q0,[x8, #0xa0]
71024dd624  ldr x0,[x19, #0x1f38]
71024dd628  bl 0x7102508e30
71024dd62c  ldr x0,[x19, #0x1ef0]
71024dd630  mov w8,#0x1ef0
71024dd634  add x23,x19,x8
71024dd638  cbz x0,0x71024dd678
71024dd63c  fmov s0,0x3f800000
71024dd640  bl 0x71024fce50
71024dd644  ldr x9,[x23]
71024dd648  ldr w8,[x9, #0x21c8]
71024dd64c  cbz w8,0x71024dd678
71024dd650  ldr x8,[x19, #0x1f40]
71024dd654  cbz x8,0x71024dd678
71024dd658  ldr q0,[x9, #0x2160]
71024dd65c  fmov s1,wzr
71024dd660  ext v2.16B,v0.16B,v0.16B,0x8
71024dd664  mov v2.S[0x1],v1.S[0x0]
71024dd668  mov v0.D[0x1],v2.D[0x0]
71024dd66c  str q0,[x8, #0xa0]
71024dd670  ldr x0,[x19, #0x1f40]
71024dd674  bl 0x7102508e30
71024dd678  ldr x0,[x19, #0x1ef8]
71024dd67c  mov w8,#0x1ef8
71024dd680  add x24,x19,x8
71024dd684  cbz x0,0x71024dd6c4
71024dd688  fmov s0,0x3f800000
71024dd68c  bl 0x71024fce50
71024dd690  ldr x9,[x24]
71024dd694  ldr w8,[x9, #0x21c8]
71024dd698  cbz w8,0x71024dd6c4
71024dd69c  ldr x8,[x19, #0x1f48]
71024dd6a0  cbz x8,0x71024dd6c4
71024dd6a4  ldr q0,[x9, #0x2160]
71024dd6a8  fmov s1,wzr
71024dd6ac  ext v2.16B,v0.16B,v0.16B,0x8
71024dd6b0  mov v2.S[0x1],v1.S[0x0]
71024dd6b4  mov v0.D[0x1],v2.D[0x0]
71024dd6b8  str q0,[x8, #0xa0]
71024dd6bc  ldr x0,[x19, #0x1f48]
71024dd6c0  bl 0x7102508e30
71024dd6c4  ldr x0,[x19, #0x1f00]
71024dd6c8  orr w8,wzr,#0x1f00
71024dd6cc  add x25,x19,x8
71024dd6d0  cbz x0,0x71024dd710
71024dd6d4  fmov s0,0x3f800000
71024dd6d8  bl 0x71024fce50
71024dd6dc  ldr x9,[x25]
71024dd6e0  ldr w8,[x9, #0x21c8]
71024dd6e4  cbz w8,0x71024dd710
71024dd6e8  ldr x8,[x19, #0x1f50]
71024dd6ec  cbz x8,0x71024dd710
71024dd6f0  ldr q0,[x9, #0x2160]
71024dd6f4  fmov s1,wzr
71024dd6f8  ext v2.16B,v0.16B,v0.16B,0x8
71024dd6fc  mov v2.S[0x1],v1.S[0x0]
71024dd700  mov v0.D[0x1],v2.D[0x0]
71024dd704  str q0,[x8, #0xa0]
71024dd708  ldr x0,[x19, #0x1f50]
71024dd70c  bl 0x7102508e30
71024dd710  ldr x0,[x19, #0x1f08]
71024dd714  mov w8,#0x1f08
71024dd718  add x26,x19,x8
71024dd71c  cbz x0,0x71024dd75c
71024dd720  fmov s0,0x3f800000
71024dd724  bl 0x71024fce50
71024dd728  ldr x9,[x26]
71024dd72c  ldr w8,[x9, #0x21c8]
71024dd730  cbz w8,0x71024dd75c
71024dd734  ldr x8,[x19, #0x1f58]
71024dd738  cbz x8,0x71024dd75c
71024dd73c  ldr q0,[x9, #0x2160]
71024dd740  fmov s1,wzr
71024dd744  ext v2.16B,v0.16B,v0.16B,0x8
71024dd748  mov v2.S[0x1],v1.S[0x0]
71024dd74c  mov v0.D[0x1],v2.D[0x0]
71024dd750  str q0,[x8, #0xa0]
71024dd754  ldr x0,[x19, #0x1f58]
71024dd758  bl 0x7102508e30
71024dd75c  ldr x0,[x19, #0x1f10]
71024dd760  mov w8,#0x1f10
71024dd764  add x27,x19,x8
71024dd768  cbz x0,0x71024dd7a8
71024dd76c  fmov s0,0x3f800000
71024dd770  bl 0x71024fce50
71024dd774  ldr x9,[x27]
71024dd778  ldr w8,[x9, #0x21c8]
71024dd77c  cbz w8,0x71024dd7a8
71024dd780  ldr x8,[x19, #0x1f60]
71024dd784  cbz x8,0x71024dd7a8
71024dd788  ldr q0,[x9, #0x2160]
71024dd78c  fmov s1,wzr
71024dd790  ext v2.16B,v0.16B,v0.16B,0x8
71024dd794  mov v2.S[0x1],v1.S[0x0]
71024dd798  mov v0.D[0x1],v2.D[0x0]
71024dd79c  str q0,[x8, #0xa0]
71024dd7a0  ldr x0,[x19, #0x1f60]
71024dd7a4  bl 0x7102508e30
71024dd7a8  ldr x0,[x19, #0x1f18]
71024dd7ac  mov w8,#0x1f18
71024dd7b0  add x28,x19,x8
71024dd7b4  cbz x0,0x71024dd7f4
71024dd7b8  fmov s0,0x3f800000
71024dd7bc  bl 0x71024fce50
71024dd7c0  ldr x9,[x28]
71024dd7c4  ldr w8,[x9, #0x21c8]
71024dd7c8  cbz w8,0x71024dd7f4
71024dd7cc  ldr x8,[x19, #0x1f68]
71024dd7d0  cbz x8,0x71024dd7f4
71024dd7d4  ldr q0,[x9, #0x2160]
71024dd7d8  fmov s1,wzr
71024dd7dc  ext v2.16B,v0.16B,v0.16B,0x8
71024dd7e0  mov v2.S[0x1],v1.S[0x0]
71024dd7e4  mov v0.D[0x1],v2.D[0x0]
71024dd7e8  str q0,[x8, #0xa0]
71024dd7ec  ldr x0,[x19, #0x1f68]
71024dd7f0  bl 0x7102508e30
71024dd7f4  stp x23,x22,[sp, #0x80]
71024dd7f8  mov w8,#0x1f20
71024dd7fc  stp x21,x20,[sp, #0x98]
71024dd800  ldr x0,[x19, #0x1f20]
71024dd804  add x20,x19,x8
71024dd808  str x24,[sp, #0x70]
71024dd80c  cbz x0,0x71024dd84c
71024dd810  fmov s0,0x3f800000
71024dd814  bl 0x71024fce50
71024dd818  ldr x9,[x20]
71024dd81c  ldr w8,[x9, #0x21c8]
71024dd820  cbz w8,0x71024dd84c
71024dd824  ldr x8,[x19, #0x1f70]
71024dd828  cbz x8,0x71024dd84c
71024dd82c  ldr q0,[x9, #0x2160]
71024dd830  fmov s1,wzr
71024dd834  ext v2.16B,v0.16B,v0.16B,0x8
71024dd838  mov v2.S[0x1],v1.S[0x0]
71024dd83c  mov v0.D[0x1],v2.D[0x0]
71024dd840  str q0,[x8, #0xa0]
71024dd844  ldr x0,[x19, #0x1f70]
71024dd848  bl 0x7102508e30
71024dd84c  ldr w22,[x19, #0x1870]
71024dd850  mov w8,#0x1870
71024dd854  add x24,x19,x8
71024dd858  str x20,[sp, #0x38]
71024dd85c  cbz w22,0x71024dd8ec
71024dd860  adrp x8,0x7105334000
71024dd864  ldr x8,[x8, #0x920]
71024dd868  ldr x21,[x8]
71024dd86c  tbnz w22,#0x1f,0x71024dd8cc
71024dd870  lsr x8,x22,#0x18
71024dd874  orr w23,wzr,#0x300
71024dd878  madd x8,x8,x23,x21
71024dd87c  ldr w9,[x8, #0x4]
71024dd880  cmp w9,w22
71024dd884  b.ne 0x71024dd88c
71024dd888  cbnz x8,0x71024dd8ec
71024dd88c  mov w8,#0x9498
71024dd890  movk w8,#0x1, LSL #16
71024dd894  add x20,x21,x8
71024dd898  mov x0,x20
71024dd89c  bl 0x71039c19c0
71024dd8a0  ubfx x8,x22,#0x18,#0x8
71024dd8a4  umaddl x9,w8,w23,x21
71024dd8a8  cbz x9,0x71024dd8e0
71024dd8ac  ldr w9,[x9, #0x4]
71024dd8b0  cmp w9,w22
71024dd8b4  b.ne 0x71024dd8e0
71024dd8b8  orr w9,wzr,#0x300
71024dd8bc  madd x8,x8,x9,x21
71024dd8c0  mov w9,#0x1
71024dd8c4  strb w9,[x8, #0x2d8]
71024dd8c8  b 0x71024dd8e0
71024dd8cc  mov w8,#0x9498
71024dd8d0  movk w8,#0x1, LSL #16
71024dd8d4  add x20,x21,x8
71024dd8d8  mov x0,x20
71024dd8dc  bl 0x71039c19c0
71024dd8e0  mov x0,x20
71024dd8e4  bl 0x71039c19d0
71024dd8e8  str wzr,[x24]
71024dd8ec  ldr w22,[x19, #0x1874]
71024dd8f0  mov w8,#0x1874
71024dd8f4  str x25,[sp, #0x68]
71024dd8f8  add x25,x19,x8
71024dd8fc  cbz w22,0x71024dd98c
71024dd900  adrp x8,0x7105334000
71024dd904  ldr x8,[x8, #0x920]
71024dd908  ldr x21,[x8]
71024dd90c  tbnz w22,#0x1f,0x71024dd96c
71024dd910  lsr x8,x22,#0x18
71024dd914  orr w23,wzr,#0x300
71024dd918  madd x8,x8,x23,x21
71024dd91c  ldr w9,[x8, #0x4]
71024dd920  cmp w9,w22
71024dd924  b.ne 0x71024dd92c
71024dd928  cbnz x8,0x71024dd98c
71024dd92c  mov w8,#0x9498
71024dd930  movk w8,#0x1, LSL #16
71024dd934  add x20,x21,x8
71024dd938  mov x0,x20
71024dd93c  bl 0x71039c19c0
71024dd940  ubfx x8,x22,#0x18,#0x8
71024dd944  umaddl x9,w8,w23,x21
71024dd948  cbz x9,0x71024dd980
71024dd94c  ldr w9,[x9, #0x4]
71024dd950  cmp w9,w22
71024dd954  b.ne 0x71024dd980
71024dd958  orr w9,wzr,#0x300
71024dd95c  madd x8,x8,x9,x21
71024dd960  mov w9,#0x1
71024dd964  strb w9,[x8, #0x2d8]
71024dd968  b 0x71024dd980
71024dd96c  mov w8,#0x9498
71024dd970  movk w8,#0x1, LSL #16
71024dd974  add x20,x21,x8
71024dd978  mov x0,x20
71024dd97c  bl 0x71039c19c0
71024dd980  mov x0,x20
71024dd984  bl 0x71039c19d0
71024dd988  str wzr,[x25]
71024dd98c  ldr w22,[x19, #0x1878]
71024dd990  mov w8,#0x1878
71024dd994  str x26,[sp, #0x60]
71024dd998  add x26,x19,x8
71024dd99c  cbz w22,0x71024dda2c
71024dd9a0  adrp x8,0x7105334000
71024dd9a4  ldr x8,[x8, #0x920]
71024dd9a8  ldr x21,[x8]
71024dd9ac  tbnz w22,#0x1f,0x71024dda0c
71024dd9b0  lsr x8,x22,#0x18
71024dd9b4  orr w23,wzr,#0x300
71024dd9b8  madd x8,x8,x23,x21
71024dd9bc  ldr w9,[x8, #0x4]
71024dd9c0  cmp w9,w22
71024dd9c4  b.ne 0x71024dd9cc
71024dd9c8  cbnz x8,0x71024dda2c
71024dd9cc  mov w8,#0x9498
71024dd9d0  movk w8,#0x1, LSL #16
71024dd9d4  add x20,x21,x8
71024dd9d8  mov x0,x20
71024dd9dc  bl 0x71039c19c0
71024dd9e0  ubfx x8,x22,#0x18,#0x8
71024dd9e4  umaddl x9,w8,w23,x21
71024dd9e8  cbz x9,0x71024dda20
71024dd9ec  ldr w9,[x9, #0x4]
71024dd9f0  cmp w9,w22
71024dd9f4  b.ne 0x71024dda20
71024dd9f8  orr w9,wzr,#0x300
71024dd9fc  madd x8,x8,x9,x21
71024dda00  mov w9,#0x1
71024dda04  strb w9,[x8, #0x2d8]
71024dda08  b 0x71024dda20
71024dda0c  mov w8,#0x9498
71024dda10  movk w8,#0x1, LSL #16
71024dda14  add x20,x21,x8
71024dda18  mov x0,x20
71024dda1c  bl 0x71039c19c0
71024dda20  mov x0,x20
71024dda24  bl 0x71039c19d0
71024dda28  str wzr,[x26]
71024dda2c  ldr w22,[x19, #0x187c]
71024dda30  mov w8,#0x187c
71024dda34  str x27,[sp, #0x50]
71024dda38  add x27,x19,x8
71024dda3c  cbz w22,0x71024ddacc
71024dda40  adrp x8,0x7105334000
71024dda44  ldr x8,[x8, #0x920]
71024dda48  ldr x21,[x8]
71024dda4c  tbnz w22,#0x1f,0x71024ddaac
71024dda50  lsr x8,x22,#0x18
71024dda54  orr w23,wzr,#0x300
71024dda58  madd x8,x8,x23,x21
71024dda5c  ldr w9,[x8, #0x4]
71024dda60  cmp w9,w22
71024dda64  b.ne 0x71024dda6c
71024dda68  cbnz x8,0x71024ddacc
71024dda6c  mov w8,#0x9498
71024dda70  movk w8,#0x1, LSL #16
71024dda74  add x20,x21,x8
71024dda78  mov x0,x20
71024dda7c  bl 0x71039c19c0
71024dda80  ubfx x8,x22,#0x18,#0x8
71024dda84  umaddl x9,w8,w23,x21
71024dda88  cbz x9,0x71024ddac0
71024dda8c  ldr w9,[x9, #0x4]
71024dda90  cmp w9,w22
71024dda94  b.ne 0x71024ddac0
71024dda98  orr w9,wzr,#0x300
71024dda9c  madd x8,x8,x9,x21
71024ddaa0  mov w9,#0x1
71024ddaa4  strb w9,[x8, #0x2d8]
71024ddaa8  b 0x71024ddac0
71024ddaac  mov w8,#0x9498
71024ddab0  movk w8,#0x1, LSL #16
71024ddab4  add x20,x21,x8
71024ddab8  mov x0,x20
71024ddabc  bl 0x71039c19c0
71024ddac0  mov x0,x20
71024ddac4  bl 0x71039c19d0
71024ddac8  str wzr,[x27]
71024ddacc  ldr w22,[x19, #0x1880]
71024ddad0  mov w8,#0x1880
71024ddad4  str x28,[sp, #0x48]
71024ddad8  add x28,x19,x8
71024ddadc  cbz w22,0x71024ddb6c
71024ddae0  adrp x8,0x7105334000
71024ddae4  ldr x8,[x8, #0x920]
71024ddae8  ldr x21,[x8]
71024ddaec  tbnz w22,#0x1f,0x71024ddb4c
71024ddaf0  lsr x8,x22,#0x18
71024ddaf4  orr w23,wzr,#0x300
71024ddaf8  madd x8,x8,x23,x21
71024ddafc  ldr w9,[x8, #0x4]
71024ddb00  cmp w9,w22
71024ddb04  b.ne 0x71024ddb0c
71024ddb08  cbnz x8,0x71024ddb6c
71024ddb0c  mov w8,#0x9498
71024ddb10  movk w8,#0x1, LSL #16
71024ddb14  add x20,x21,x8
71024ddb18  mov x0,x20
71024ddb1c  bl 0x71039c19c0
71024ddb20  ubfx x8,x22,#0x18,#0x8
71024ddb24  umaddl x9,w8,w23,x21
71024ddb28  cbz x9,0x71024ddb60
71024ddb2c  ldr w9,[x9, #0x4]
71024ddb30  cmp w9,w22
71024ddb34  b.ne 0x71024ddb60
71024ddb38  orr w9,wzr,#0x300
71024ddb3c  madd x8,x8,x9,x21
71024ddb40  mov w9,#0x1
71024ddb44  strb w9,[x8, #0x2d8]
71024ddb48  b 0x71024ddb60
71024ddb4c  mov w8,#0x9498
71024ddb50  movk w8,#0x1, LSL #16
71024ddb54  add x20,x21,x8
71024ddb58  mov x0,x20
71024ddb5c  bl 0x71039c19c0
71024ddb60  mov x0,x20
71024ddb64  bl 0x71039c19d0
71024ddb68  str wzr,[x28]
71024ddb6c  ldr w22,[x19, #0x1884]
71024ddb70  mov w8,#0x1884
71024ddb74  add x8,x19,x8
71024ddb78  stur x8,[x29, #-0x58]
71024ddb7c  cbz w22,0x71024ddc10
71024ddb80  adrp x8,0x7105334000
71024ddb84  ldr x8,[x8, #0x920]
71024ddb88  ldr x21,[x8]
71024ddb8c  tbnz w22,#0x1f,0x71024ddbec
71024ddb90  lsr x8,x22,#0x18
71024ddb94  orr w23,wzr,#0x300
71024ddb98  madd x8,x8,x23,x21
71024ddb9c  ldr w9,[x8, #0x4]
71024ddba0  cmp w9,w22
71024ddba4  b.ne 0x71024ddbac
71024ddba8  cbnz x8,0x71024ddc10
71024ddbac  mov w8,#0x9498
71024ddbb0  movk w8,#0x1, LSL #16
71024ddbb4  add x20,x21,x8
71024ddbb8  mov x0,x20
71024ddbbc  bl 0x71039c19c0
71024ddbc0  ubfx x8,x22,#0x18,#0x8
71024ddbc4  umaddl x9,w8,w23,x21
71024ddbc8  cbz x9,0x71024ddc00
71024ddbcc  ldr w9,[x9, #0x4]
71024ddbd0  cmp w9,w22
71024ddbd4  b.ne 0x71024ddc00
71024ddbd8  orr w9,wzr,#0x300
71024ddbdc  madd x8,x8,x9,x21
71024ddbe0  mov w9,#0x1
71024ddbe4  strb w9,[x8, #0x2d8]
71024ddbe8  b 0x71024ddc00
71024ddbec  mov w8,#0x9498
71024ddbf0  movk w8,#0x1, LSL #16
71024ddbf4  add x20,x21,x8
71024ddbf8  mov x0,x20
71024ddbfc  bl 0x71039c19c0
71024ddc00  mov x0,x20
71024ddc04  bl 0x71039c19d0
71024ddc08  ldur x8,[x29, #-0x58]
71024ddc0c  str wzr,[x8]
71024ddc10  ldr w22,[x19, #0x1888]
71024ddc14  mov w8,#0x1888
71024ddc18  add x8,x19,x8
71024ddc1c  str x8,[sp, #0x120]
71024ddc20  cbz w22,0x71024ddcb4
71024ddc24  adrp x8,0x7105334000
71024ddc28  ldr x8,[x8, #0x920]
71024ddc2c  ldr x21,[x8]
71024ddc30  tbnz w22,#0x1f,0x71024ddc90
71024ddc34  lsr x8,x22,#0x18
71024ddc38  orr w23,wzr,#0x300
71024ddc3c  madd x8,x8,x23,x21
71024ddc40  ldr w9,[x8, #0x4]
71024ddc44  cmp w9,w22
71024ddc48  b.ne 0x71024ddc50
71024ddc4c  cbnz x8,0x71024ddcb4
71024ddc50  mov w8,#0x9498
71024ddc54  movk w8,#0x1, LSL #16
71024ddc58  add x20,x21,x8
71024ddc5c  mov x0,x20
71024ddc60  bl 0x71039c19c0
71024ddc64  ubfx x8,x22,#0x18,#0x8
71024ddc68  umaddl x9,w8,w23,x21
71024ddc6c  cbz x9,0x71024ddca4
71024ddc70  ldr w9,[x9, #0x4]
71024ddc74  cmp w9,w22
71024ddc78  b.ne 0x71024ddca4
71024ddc7c  orr w9,wzr,#0x300
71024ddc80  madd x8,x8,x9,x21
71024ddc84  mov w9,#0x1
71024ddc88  strb w9,[x8, #0x2d8]
71024ddc8c  b 0x71024ddca4
71024ddc90  mov w8,#0x9498
71024ddc94  movk w8,#0x1, LSL #16
71024ddc98  add x20,x21,x8
71024ddc9c  mov x0,x20
71024ddca0  bl 0x71039c19c0
71024ddca4  mov x0,x20
71024ddca8  bl 0x71039c19d0
71024ddcac  ldr x8,[sp, #0x120]
71024ddcb0  str wzr,[x8]
71024ddcb4  ldr w22,[x19, #0x188c]
71024ddcb8  mov w8,#0x188c
71024ddcbc  add x8,x19,x8
71024ddcc0  str x8,[sp, #0x118]
71024ddcc4  cbz w22,0x71024ddd58
71024ddcc8  adrp x8,0x7105334000
71024ddccc  ldr x8,[x8, #0x920]
71024ddcd0  ldr x21,[x8]
71024ddcd4  tbnz w22,#0x1f,0x71024ddd34
71024ddcd8  lsr x8,x22,#0x18
71024ddcdc  orr w23,wzr,#0x300
71024ddce0  madd x8,x8,x23,x21
71024ddce4  ldr w9,[x8, #0x4]
71024ddce8  cmp w9,w22
71024ddcec  b.ne 0x71024ddcf4
71024ddcf0  cbnz x8,0x71024ddd58
71024ddcf4  mov w8,#0x9498
71024ddcf8  movk w8,#0x1, LSL #16
71024ddcfc  add x20,x21,x8
71024ddd00  mov x0,x20
71024ddd04  bl 0x71039c19c0
71024ddd08  ubfx x8,x22,#0x18,#0x8
71024ddd0c  umaddl x9,w8,w23,x21
71024ddd10  cbz x9,0x71024ddd48
71024ddd14  ldr w9,[x9, #0x4]
71024ddd18  cmp w9,w22
71024ddd1c  b.ne 0x71024ddd48
71024ddd20  orr w9,wzr,#0x300
71024ddd24  madd x8,x8,x9,x21
71024ddd28  mov w9,#0x1
71024ddd2c  strb w9,[x8, #0x2d8]
71024ddd30  b 0x71024ddd48
71024ddd34  mov w8,#0x9498
71024ddd38  movk w8,#0x1, LSL #16
71024ddd3c  add x20,x21,x8
71024ddd40  mov x0,x20
71024ddd44  bl 0x71039c19c0
71024ddd48  mov x0,x20
71024ddd4c  bl 0x71039c19d0
71024ddd50  ldr x8,[sp, #0x118]
71024ddd54  str wzr,[x8]
71024ddd58  ldr w22,[x19, #0x1890]
71024ddd5c  mov w8,#0x1890
71024ddd60  add x8,x19,x8
71024ddd64  str x8,[sp, #0x110]
71024ddd68  cbz w22,0x71024dddfc
71024ddd6c  adrp x8,0x7105334000
71024ddd70  ldr x8,[x8, #0x920]
71024ddd74  ldr x21,[x8]
71024ddd78  tbnz w22,#0x1f,0x71024dddd8
71024ddd7c  lsr x8,x22,#0x18
71024ddd80  orr w23,wzr,#0x300
71024ddd84  madd x8,x8,x23,x21
71024ddd88  ldr w9,[x8, #0x4]
71024ddd8c  cmp w9,w22
71024ddd90  b.ne 0x71024ddd98
71024ddd94  cbnz x8,0x71024dddfc
71024ddd98  mov w8,#0x9498
71024ddd9c  movk w8,#0x1, LSL #16
71024ddda0  add x20,x21,x8
71024ddda4  mov x0,x20
71024ddda8  bl 0x71039c19c0
71024dddac  ubfx x8,x22,#0x18,#0x8
71024dddb0  umaddl x9,w8,w23,x21
71024dddb4  cbz x9,0x71024dddec
71024dddb8  ldr w9,[x9, #0x4]
71024dddbc  cmp w9,w22
71024dddc0  b.ne 0x71024dddec
71024dddc4  orr w9,wzr,#0x300
71024dddc8  madd x8,x8,x9,x21
71024dddcc  mov w9,#0x1
71024dddd0  strb w9,[x8, #0x2d8]
71024dddd4  b 0x71024dddec
71024dddd8  mov w8,#0x9498
71024ddddc  movk w8,#0x1, LSL #16
71024ddde0  add x20,x21,x8
71024ddde4  mov x0,x20
71024ddde8  bl 0x71039c19c0
71024dddec  mov x0,x20
71024dddf0  bl 0x71039c19d0
71024dddf4  ldr x8,[sp, #0x110]
71024dddf8  str wzr,[x8]
71024dddfc  ldr w22,[x19, #0x1894]
71024dde00  mov w8,#0x1894
71024dde04  add x8,x19,x8
71024dde08  str x8,[sp, #0x108]
71024dde0c  cbz w22,0x71024ddea0
71024dde10  adrp x8,0x7105334000
71024dde14  ldr x8,[x8, #0x920]
71024dde18  ldr x21,[x8]
71024dde1c  tbnz w22,#0x1f,0x71024dde7c
71024dde20  lsr x8,x22,#0x18
71024dde24  orr w23,wzr,#0x300
71024dde28  madd x8,x8,x23,x21
71024dde2c  ldr w9,[x8, #0x4]
71024dde30  cmp w9,w22
71024dde34  b.ne 0x71024dde3c
71024dde38  cbnz x8,0x71024ddea0
71024dde3c  mov w8,#0x9498
71024dde40  movk w8,#0x1, LSL #16
71024dde44  add x20,x21,x8
71024dde48  mov x0,x20
71024dde4c  bl 0x71039c19c0
71024dde50  ubfx x8,x22,#0x18,#0x8
71024dde54  umaddl x9,w8,w23,x21
71024dde58  cbz x9,0x71024dde90
71024dde5c  ldr w9,[x9, #0x4]
71024dde60  cmp w9,w22
71024dde64  b.ne 0x71024dde90
71024dde68  orr w9,wzr,#0x300
71024dde6c  madd x8,x8,x9,x21
71024dde70  mov w9,#0x1
71024dde74  strb w9,[x8, #0x2d8]
71024dde78  b 0x71024dde90
71024dde7c  mov w8,#0x9498
71024dde80  movk w8,#0x1, LSL #16
71024dde84  add x20,x21,x8
71024dde88  mov x0,x20
71024dde8c  bl 0x71039c19c0
71024dde90  mov x0,x20
71024dde94  bl 0x71039c19d0
71024dde98  ldr x8,[sp, #0x108]
71024dde9c  str wzr,[x8]
71024ddea0  mov w8,#0x1898
71024ddea4  add x0,x19,x8
71024ddea8  str x26,[sp, #0x100]
71024ddeac  stp x28,x27,[sp, #0xf0]
71024ddeb0  str x24,[sp, #0xe8]
71024ddeb4  stp x25,x0,[sp, #0xd8]
71024ddeb8  bl 0x71024e5af0
71024ddebc  mov w8,#0x18e8
71024ddec0  add x0,x19,x8
71024ddec4  str x0,[sp, #0xd0]
71024ddec8  bl 0x71024e5af0
71024ddecc  mov w8,#0x1938
71024dded0  add x0,x19,x8
71024dded4  str x0,[sp, #0xc8]
71024dded8  bl 0x71024e5af0
71024ddedc  mov w8,#0x1988
71024ddee0  add x0,x19,x8
71024ddee4  str x0,[sp, #0xc0]
71024ddee8  bl 0x71024e5af0
71024ddeec  mov w8,#0x19d8
71024ddef0  add x0,x19,x8
71024ddef4  str x0,[sp, #0xb0]
71024ddef8  bl 0x71024e5af0
71024ddefc  mov w8,#0x1a28
71024ddf00  add x0,x19,x8
71024ddf04  str x0,[sp, #0xa8]
71024ddf08  bl 0x71024e5af0
71024ddf0c  mov w8,#0x1a78
71024ddf10  add x0,x19,x8
71024ddf14  str x0,[sp, #0x90]
71024ddf18  bl 0x71024e5af0
71024ddf1c  mov w8,#0x1ac8
71024ddf20  add x0,x19,x8
71024ddf24  str x0,[sp, #0x78]
71024ddf28  bl 0x71024e5af0
71024ddf2c  mov w8,#0x1b18
71024ddf30  add x0,x19,x8
71024ddf34  str x0,[sp, #0x58]
71024ddf38  bl 0x71024e5af0
71024ddf3c  mov w8,#0x1b68
71024ddf40  add x0,x19,x8
71024ddf44  str x0,[sp, #0x40]
71024ddf48  bl 0x71024e5af0
71024ddf4c  mov w8,#0x1bb8
71024ddf50  add x0,x19,x8
71024ddf54  str x0,[sp, #0xb8]
71024ddf58  bl 0x71024e5af0
71024ddf5c  mov w8,#0x1c08
71024ddf60  add x20,x19,x8
71024ddf64  mov x0,x20
71024ddf68  bl 0x71024e5af0
71024ddf6c  mov w8,#0x1c58
71024ddf70  add x22,x19,x8
71024ddf74  mov x0,x22
71024ddf78  bl 0x71024e5af0
71024ddf7c  mov w8,#0x1ca8
71024ddf80  add x21,x19,x8
71024ddf84  mov x0,x21
71024ddf88  bl 0x71024e5af0
71024ddf8c  mov w8,#0x1cf8
71024ddf90  add x28,x19,x8
71024ddf94  mov x0,x28
71024ddf98  bl 0x71024e5af0
71024ddf9c  mov w8,#0x1d48
71024ddfa0  add x27,x19,x8
71024ddfa4  mov x0,x27
71024ddfa8  bl 0x71024e5af0
71024ddfac  mov w8,#0x1d98
71024ddfb0  add x26,x19,x8
71024ddfb4  mov x0,x26
71024ddfb8  bl 0x71024e5af0
71024ddfbc  mov w8,#0x1de8
71024ddfc0  add x25,x19,x8
71024ddfc4  mov x0,x25
71024ddfc8  bl 0x71024e5af0
71024ddfcc  mov w8,#0x1e38
71024ddfd0  add x24,x19,x8
71024ddfd4  mov x0,x24
71024ddfd8  bl 0x71024e5af0
71024ddfdc  mov w8,#0x1e88
71024ddfe0  add x23,x19,x8
71024ddfe4  mov x0,x23
71024ddfe8  bl 0x71024e5af0
71024ddfec  ldrsh w8,[x19, #0x17e0]
71024ddff0  cmp w8,#0x0
71024ddff4  b.gt 0x71024de000
71024ddff8  ldr w8,[x19, #0x1768]
71024ddffc  cbz w8,0x71024e4578
71024de000  mov x0,x19
71024de004  bl 0x71024e57b0
71024de008  tbnz w0,#0x0,0x71024e4578
71024de00c  mov w8,#0x1770
71024de010  add x8,x19,x8
71024de014  str x8,[sp, #0x30]
71024de018  ldrsh w8,[x19, #0x17e0]
71024de01c  ldr w9,[x19, #0x1828]
71024de020  cmp w9,w8
71024de024  b.cs 0x71024de070
71024de028  ldr x9,[x19, #0x18]
71024de02c  ldr x9,[x9, #0x428]
71024de030  ldr w10,[x9, #0x21c8]
71024de034  sub w10,w10,#0x1
71024de038  mov w11,#0x1f94
71024de03c  cmp w10,#0x1
71024de040  b.hi 0x71024de07c
71024de044  ldr s0,[x9, #0x2184]
71024de048  ldr s1,[x9, #0x21b4]
71024de04c  fcmp s0,s1
71024de050  b.ge 0x71024de148
71024de054  ldr s1,[x9, #0x21b8]
71024de058  fcmp s0,s1
71024de05c  b.pl 0x71024de084
71024de060  add x12,x9,#0x88
71024de064  ldr x18,[x12]
71024de068  cbnz x18,0x71024de088
71024de06c  b 0x71024de084
71024de070  mov w8,#0x17e8
71024de074  add x22,x19,x8
71024de078  b 0x71024e3110
71024de07c  ldr x18,[x9, #0x78]
71024de080  cbnz x18,0x71024de088
71024de084  ldr x18,[x9, #0x78]
71024de088  cmp w8,#0x0
71024de08c  b.gt 0x71024de098
71024de090  ldr w12,[x19, #0x1768]
71024de094  cbz w12,0x71024de0e4
71024de098  ldr x12,[x19, #0x17a8]
71024de09c  tst x12,#0xffffffffff
71024de0a0  b.eq 0x71024de0e4
71024de0a4  ldr x13,[x19, #0x48]
71024de0a8  ldr w14,[x13, #0x3208]
71024de0ac  cbz w14,0x71024de0d8
71024de0b0  mov w15,wzr
71024de0b4  add x16,x13,w15, UXTW  #0x3
71024de0b8  ldr x16,[x16, #0x8]
71024de0bc  ldr x17,[x16, #0x70]
71024de0c0  eor x17,x17,x12
71024de0c4  tst x17,#0xffffffffff
71024de0c8  b.eq 0x71024de0dc
71024de0cc  add w15,w15,#0x1
71024de0d0  cmp w15,w14
71024de0d4  b.cc 0x71024de0b4
71024de0d8  mov x16,xzr
71024de0dc  cmp x16,#0x0
71024de0e0  csel x18,x18,x16,eq
71024de0e4  add x0,x19,x11
71024de0e8  ldr w11,[x19, #0x17b0]
71024de0ec  sub w12,w11,#0x1
71024de0f0  cmp w12,#0x5
71024de0f4  b.hi 0x71024de178
71024de0f8  adrp x13,0x7104501000
71024de0fc  add x13,x13,#0xf98
71024de100  mov w11,#0x1
71024de104  ldrsw x12,[x13, x12, LSL #0x2]
71024de108  add x12,x12,x13
71024de10c  movi v0.2D,#0x0
71024de110  br x12
71024de114  cmp w10,#0x1
71024de118  b.hi 0x71024de184
71024de11c  ldr s1,[x9, #0x2184]
71024de120  ldr s2,[x9, #0x21b4]
71024de124  fcmp s1,s2
71024de128  b.ge 0x71024de420
71024de12c  ldr s2,[x9, #0x21b8]
71024de130  fcmp s1,s2
71024de134  b.pl 0x71024de18c
71024de138  add x11,x9,#0x88
71024de13c  ldr x11,[x11]
71024de140  cbnz x11,0x71024de190
71024de144  b 0x71024de18c
71024de148  add x12,x9,#0xb0
71024de14c  ldr x18,[x12]
71024de150  cbnz x18,0x71024de088
71024de154  b 0x71024de084
71024de158  mov w11,#0x4
71024de15c  b 0x71024de364
71024de160  mov w11,#0x2
71024de164  b 0x71024de364
71024de168  orr w11,wzr,#0x3
71024de16c  b 0x71024de364
71024de170  mov w11,#0x5
71024de174  b 0x71024de364
71024de178  ldr x8,[x19, #0x10]
71024de17c  ldr q0,[x8, #0x90]
71024de180  b 0x71024de350
71024de184  ldr x11,[x9, #0x78]
71024de188  cbnz x11,0x71024de190
71024de18c  ldr x11,[x9, #0x78]
71024de190  cmp w8,#0x0
71024de194  b.gt 0x71024de1a0
71024de198  ldr w12,[x19, #0x1768]
71024de19c  cbz w12,0x71024de248
71024de1a0  ldr x12,[x19, #0x17a8]
71024de1a4  tst x12,#0xffffffffff
71024de1a8  b.eq 0x71024de1ec
71024de1ac  ldr x13,[x19, #0x48]
71024de1b0  ldr w14,[x13, #0x3208]
71024de1b4  cbz w14,0x71024de1e0
71024de1b8  mov w15,wzr
71024de1bc  add x16,x13,w15, UXTW  #0x3
71024de1c0  ldr x16,[x16, #0x8]
71024de1c4  ldr x17,[x16, #0x70]
71024de1c8  eor x17,x17,x12
71024de1cc  tst x17,#0xffffffffff
71024de1d0  b.eq 0x71024de1e4
71024de1d4  add w15,w15,#0x1
71024de1d8  cmp w15,w14
71024de1dc  b.cc 0x71024de1bc
71024de1e0  mov x16,xzr
71024de1e4  cmp x16,#0x0
71024de1e8  csel x11,x11,x16,eq
71024de1ec  cmp w8,#0x0
71024de1f0  b.gt 0x71024de1fc
71024de1f4  ldr w12,[x19, #0x1768]
71024de1f8  cbz w12,0x71024de248
71024de1fc  ldr x12,[x19, #0x17b8]
71024de200  tst x12,#0xffffffffff
71024de204  b.eq 0x71024de248
71024de208  ldr x13,[x19, #0x48]
71024de20c  ldr w14,[x13, #0x3208]
71024de210  cbz w14,0x71024de23c
71024de214  mov w15,wzr
71024de218  add x16,x13,w15, UXTW  #0x3
71024de21c  ldr x16,[x16, #0x8]
71024de220  ldr x17,[x16, #0x70]
71024de224  eor x17,x17,x12
71024de228  tst x17,#0xffffffffff
71024de22c  b.eq 0x71024de240
71024de230  add w15,w15,#0x1
71024de234  cmp w15,w14
71024de238  b.cc 0x71024de218
71024de23c  mov x16,xzr
71024de240  cmp x16,#0x0
71024de244  csel x11,x11,x16,eq
71024de248  cbz x11,0x71024de360
71024de24c  cmp w10,#0x1
71024de250  b.hi 0x71024de280
71024de254  ldr s0,[x9, #0x2184]
71024de258  ldr s1,[x9, #0x21b4]
71024de25c  fcmp s0,s1
71024de260  b.ge 0x71024de4cc
71024de264  ldr s1,[x9, #0x21b8]
71024de268  fcmp s0,s1
71024de26c  b.pl 0x71024de288
71024de270  add x10,x9,#0x88
71024de274  ldr x10,[x10]
71024de278  cbnz x10,0x71024de28c
71024de27c  b 0x71024de288
71024de280  ldr x10,[x9, #0x78]
71024de284  cbnz x10,0x71024de28c
71024de288  ldr x10,[x9, #0x78]
71024de28c  cmp w8,#0x0
71024de290  b.gt 0x71024de29c
71024de294  ldr w9,[x19, #0x1768]
71024de298  cbz w9,0x71024de344
71024de29c  ldr x9,[x19, #0x17a8]
71024de2a0  tst x9,#0xffffffffff
71024de2a4  b.eq 0x71024de2e8
71024de2a8  ldr x11,[x19, #0x48]
71024de2ac  ldr w12,[x11, #0x3208]
71024de2b0  cbz w12,0x71024de2dc
71024de2b4  mov w13,wzr
71024de2b8  add x14,x11,w13, UXTW  #0x3
71024de2bc  ldr x14,[x14, #0x8]
71024de2c0  ldr x15,[x14, #0x70]
71024de2c4  eor x15,x15,x9
71024de2c8  tst x15,#0xffffffffff
71024de2cc  b.eq 0x71024de2e0
71024de2d0  add w13,w13,#0x1
71024de2d4  cmp w13,w12
71024de2d8  b.cc 0x71024de2b8
71024de2dc  mov x14,xzr
71024de2e0  cmp x14,#0x0
71024de2e4  csel x10,x10,x14,eq
71024de2e8  cmp w8,#0x0
71024de2ec  b.gt 0x71024de2f8
71024de2f0  ldr w8,[x19, #0x1768]
71024de2f4  cbz w8,0x71024de344
71024de2f8  ldr x8,[x19, #0x17b8]
71024de2fc  tst x8,#0xffffffffff
71024de300  b.eq 0x71024de344
71024de304  ldr x9,[x19, #0x48]
71024de308  ldr w11,[x9, #0x3208]
71024de30c  cbz w11,0x71024de338
71024de310  mov w12,wzr
71024de314  add x13,x9,w12, UXTW  #0x3
71024de318  ldr x13,[x13, #0x8]
71024de31c  ldr x14,[x13, #0x70]
71024de320  eor x14,x14,x8
71024de324  tst x14,#0xffffffffff
71024de328  b.eq 0x71024de33c
71024de32c  add w12,w12,#0x1
71024de330  cmp w12,w11
71024de334  b.cc 0x71024de314
71024de338  mov x13,xzr
71024de33c  cmp x13,#0x0
71024de340  csel x10,x10,x13,eq
71024de344  ldr q0,[x10, #0xc0]
71024de348  ldr q1,[x10, #0xa0]
71024de34c  fadd v0.4S,v0.4S,v1.4S
71024de350  fmov s1,wzr
71024de354  ext v2.16B,v0.16B,v0.16B,0x8
71024de358  mov v2.S[0x1],v1.S[0x0]
71024de35c  mov v0.D[0x1],v2.D[0x0]
71024de360  orr w11,wzr,#0x6
71024de364  movi d3,#0x0
71024de368  ldr s1,[x19, #0x17c0]
71024de36c  mov w8,#0x17c4
71024de370  mov w9,#0x17c8
71024de374  add x8,x19,x8
71024de378  add x9,x19,x9
71024de37c  ld1 {v1.S}[1],[x8]
71024de380  mov v2.16B,v3.16B
71024de384  mov v3.S[0x0],v0.S[0x2]
71024de388  ldr x8,[x19, #0x10]
71024de38c  ld1 {v2.S}[0],[x9]
71024de390  ldr w10,[x19, #0x17cc]
71024de394  mov v0.D[0x1],v3.D[0x0]
71024de398  mov w13,#0x17d4
71024de39c  mov v1.D[0x1],v2.D[0x0]
71024de3a0  ldr w12,[x19, #0x17d0]
71024de3a4  ldr x13,[x19, x13, LSL #0x0]
71024de3a8  ldr w9,[x19, #0x17dc]
71024de3ac  str w10,[x8, #0x164]
71024de3b0  add x10,x8,#0x1a4
71024de3b4  str w11,[x8, #0x1dc]
71024de3b8  str q0,[x8, #0xa0]
71024de3bc  str q1,[x8, #0x110]
71024de3c0  str w12,[x8, #0x17c]
71024de3c4  str x13,[x10]
71024de3c8  str w9,[x8, #0x1ac]
71024de3cc  ldr w8,[x19, #0x1828]
71024de3d0  cbnz w8,0x71024de584
71024de3d4  ldrb w8,[x0, #0x1]
71024de3d8  cbnz w8,0x71024de584
71024de3dc  mov w8,#0x1
71024de3e0  strb w8,[x0, #0x1]
71024de3e4  ldr w8,[x19, #0x17e8]
71024de3e8  cmp w8,#0x1
71024de3ec  b.ne 0x71024de528
71024de3f0  adrp x8,0x710532f000
71024de3f4  ldr x8,[x8, #0x730]
71024de3f8  ldr x8,[x8, #0x8]
71024de3fc  str x0,[sp, #0x18]
71024de400  ldr x1,[x19, #0x1f88]
71024de404  str x1,[sp, #0x10]
71024de408  ldr x0,[x8, #0x1d8]
71024de40c  stp x0,x18,[sp, #0x20]
71024de410  bl 0x71032a9220
71024de414  tbz w0,#0x0,0x71024de430
71024de418  ldr x8,[x19, #0x1f78]
71024de41c  b 0x71024de448
71024de420  add x11,x9,#0xb0
71024de424  ldr x11,[x11]
71024de428  cbnz x11,0x71024de190
71024de42c  b 0x71024de18c
71024de430  ldr x1,[x19, #0x17f0]
71024de434  ldr x0,[sp, #0x20]
71024de438  str x1,[sp, #0x10]
71024de43c  bl 0x71032a9220
71024de440  ldr x8,[x19, #0x1f78]
71024de444  tbz w0,#0x0,0x71024de4dc
71024de448  ldr x0,[sp, #0x20]
71024de44c  ldr x1,[sp, #0x10]
71024de450  str x8,[sp, #0x8]
71024de454  bl 0x71032a7800
71024de458  ldr x8,[sp, #0x20]
71024de45c  ldp x9,x8,[x8, #0x20]
71024de460  sub x8,x8,x9
71024de464  lsr x8,x8,#0x6
71024de468  mov w10,#0xcccd
71024de46c  movk w10,#0xcccc, LSL #16
71024de470  mul w10,w8,w10
71024de474  orr w8,wzr,#0xffff
71024de478  cmp w0,w10
71024de47c  orr w2,wzr,#0xffff
71024de480  b.cs 0x71024de490
71024de484  mov w10,#0x140
71024de488  umull x10,w0,w10
71024de48c  ldrh w2,[x9, x10, LSL #0x0]
71024de490  ldr x9,[sp, #0x8]
71024de494  ldr x9,[x9, #0x80]
71024de498  mov w10,#0x1
71024de49c  cmp w2,w8
71024de4a0  str w10,[x9, #0x38]
71024de4a4  strh w2,[x9, #0x3c]
71024de4a8  b.eq 0x71024de51c
71024de4ac  adrp x8,0x7105329000
71024de4b0  ldr x8,[x8, #0xf98]
71024de4b4  ldr x8,[x8]
71024de4b8  ldr x0,[x8, #0x20]
71024de4bc  mov w3,#0x1
71024de4c0  mov w1,wzr
71024de4c4  str x9,[sp, #0x20]
71024de4c8  b 0x71024de50c
71024de4cc  add x10,x9,#0xb0
71024de4d0  ldr x10,[x10]
71024de4d4  cbnz x10,0x71024de28c
71024de4d8  b 0x71024de288
71024de4dc  ldr x8,[x8, #0x80]
71024de4e0  mov w9,#0x1
71024de4e4  str w9,[x8, #0x38]
71024de4e8  str x8,[sp, #0x20]
71024de4ec  strh wzr,[x8, #0x3c]
71024de4f0  adrp x8,0x7105329000
71024de4f4  ldr x8,[x8, #0xf98]
71024de4f8  ldr x8,[x8]
71024de4fc  ldr x0,[x8, #0x20]
71024de500  mov w3,#0x1
71024de504  mov w1,wzr
71024de508  mov x2,xzr
71024de50c  bl 0x710259c150
71024de510  ldr x9,[sp, #0x20]
71024de514  mov w8,#0x1
71024de518  strb w8,[x9, #0x3e]
71024de51c  ldr w8,[x19, #0x17e8]
71024de520  ldr x18,[sp, #0x28]
71024de524  ldr x0,[sp, #0x18]
71024de528  cmp w8,#0x51
71024de52c  b.ne 0x71024de584
71024de530  adrp x8,0x710532f000
71024de534  ldr x8,[x8, #0x7e8]
71024de538  ldr x8,[x8, #0x8]
71024de53c  ldrb w9,[x8, #0x161]
71024de540  cbnz w9,0x71024de57c
71024de544  mov x9,#0x1
71024de548  movk x9,#0x6, LSL #32
71024de54c  str wzr,[x8, #0xe0]
71024de550  stp xzr,xzr,[x8, #0x8]
71024de554  strb wzr,[x8, #0xf4]
71024de558  str x9,[x8, #0x98]
71024de55c  orr x9,xzr,#-0x100000000
71024de560  stur x9,[x8, #0xec]
71024de564  orr x9,xzr,#-0xffffffff
71024de568  stur x9,[x8, #0xe4]
71024de56c  stp xzr,xzr,[x8, #0xd0]
71024de570  stp xzr,xzr,[x8, #0xc0]
71024de574  stp xzr,xzr,[x8, #0xb0]
71024de578  stp xzr,xzr,[x8, #0xa0]
71024de57c  mov w9,#0x1
71024de580  strb w9,[x8, #0x160]
71024de584  ldr w10,[x19, #0x17e8]
71024de588  cmp w10,#0x51
71024de58c  mov w8,w10
71024de590  b.ne 0x71024de608
71024de594  adrp x8,0x710532f000
71024de598  ldr x8,[x8, #0x7e8]
71024de59c  ldr x8,[x8, #0x8]
71024de5a0  ldrb w8,[x8, #0x161]
71024de5a4  cbz w8,0x71024e4578
71024de5a8  ldrb w8,[x0]
71024de5ac  cbz w8,0x71024de604
71024de5b0  adrp x8,0x710532f000
71024de5b4  ldr x20,[x8, #0x820]
71024de5b8  adrp x8,0x710532f000
71024de5bc  ldr x8,[x8, #0x730]
71024de5c0  ldr x8,[x8, #0x8]
71024de5c4  mov x21,x0
71024de5c8  ldr x0,[x8, #0x1c8]
71024de5cc  mov x19,#0x5fa4
71024de5d0  movk x19,#0x90c1, LSL #16
71024de5d4  movk x19,#0xff1c, LSL #32
71024de5d8  movk x19,#0x58ff, LSL #48
71024de5dc  mov x1,x19
71024de5e0  bl 0x7103291150
71024de5e4  tbz w0,#0x0,0x71024de674
71024de5e8  ldr x0,[x20, #0x10]
71024de5ec  mov x1,x19
71024de5f0  bl 0x71032edf70
71024de5f4  ldp x0,x1,[x20, #0x8]
71024de5f8  bl 0x71032f1bb0
71024de5fc  strb wzr,[x21]
71024de600  b 0x71024e4578
71024de604  mov w8,#0x51
71024de608  ldr w13,[x19, #0x1828]
71024de60c  ldrsh w9,[x19, #0x17e2]
71024de610  cmp w13,w9
71024de614  b.ne 0x71024e2c64
71024de618  sub w8,w8,#0x1
71024de61c  cmp w8,#0x9c
71024de620  b.hi 0x71024e2c64
71024de624  adrp x9,0x7104501000
71024de628  add x9,x9,#0xfb0
71024de62c  ldrsw x8,[x9, x8, LSL #0x2]
71024de630  add x8,x8,x9
71024de634  br x8
71024de638  ldr x20,[x19, #0x1f78]
71024de63c  ldr x21,[x20, #0x80]
71024de640  ldr w8,[x21, #0x38]
71024de644  cbz w8,0x71024de66c
71024de648  ldr x8,[x21, #0x8]
71024de64c  ldr x0,[x8]
71024de650  mov w2,#0x1000
71024de654  mov w1,wzr
71024de658  mov x22,x18
71024de65c  bl 0x7103775dc0
71024de660  mov x18,x22
71024de664  mov w8,#0x2
71024de668  str w8,[x21, #0x30]
71024de66c  strb wzr,[x20, #0x70]
71024de670  b 0x71024e2c64
71024de674  ldr x8,[x20, #0x8]
71024de678  str wzr,[x8, #0x118]
71024de67c  strb wzr,[x21]
71024de680  b 0x71024e4578
71024de684  ldr x9,[x19, #0x17f0]
71024de688  tst x9,#0xffffffffff
71024de68c  b.eq 0x71024e2c64
71024de690  ldr x11,[x19, #0x48]
71024de694  mov w10,wzr
71024de698  b 0x71024de6a0
71024de69c  add w10,w10,#0x1
71024de6a0  add x8,x11,w10, UXTW  #0x3
71024de6a4  ldr x8,[x8, #0x8]
71024de6a8  ldr x12,[x8, #0x70]
71024de6ac  eor x12,x12,x9
71024de6b0  tst x12,#0xffffffffff
71024de6b4  b.ne 0x71024de69c
71024de6b8  adrp x10,0x710532a000
71024de6bc  ldr x10,[x10, #0x868]
71024de6c0  ldr x10,[x10]
71024de6c4  ldr x9,[x8, #0x70]
71024de6c8  ldr x11,[x10, #0x170]
71024de6cc  eor x11,x11,x9
71024de6d0  tst x11,#0xffffffffff
71024de6d4  b.eq 0x71024e0f20
71024de6d8  ldr x10,[x10, #0x198]
71024de6dc  eor x9,x10,x9
71024de6e0  mov x21,x18
71024de6e4  tst x9,#0xffffffffff
71024de6e8  b.eq 0x71024e20f0
71024de6ec  ldr w9,[x8, #0x88]
71024de6f0  sub w9,w9,#0x2
71024de6f4  cmp w9,#0x9
71024de6f8  b.hi 0x71024e2a4c
71024de6fc  adrp x10,0x7104502000
71024de700  add x10,x10,#0x24c
71024de704  mov w2,#0x4
71024de708  ldrsw x9,[x10, x9, LSL #0x2]
71024de70c  add x9,x9,x10
71024de710  br x9
71024de714  mov w2,#0x5
71024de718  b 0x71024e2a50
71024de71c  ldr x9,[x19, #0x28]
71024de720  cbz x9,0x71024e2c64
71024de724  ldr x10,[x19, #0x17f0]
71024de728  tst x10,#0xffffffffff
71024de72c  b.eq 0x71024e2c64
71024de730  ldr x11,[x19, #0x50]
71024de734  ldr w12,[x11, #0x3208]
71024de738  cbz w12,0x71024e2c64
71024de73c  mov w13,wzr
71024de740  add x8,x11,w13, UXTW  #0x3
71024de744  ldr x8,[x8, #0x8]
71024de748  ldr x14,[x8, #0x8]
71024de74c  eor x14,x14,x10
71024de750  tst x14,#0xffffffffff
71024de754  b.eq 0x71024e2194
71024de758  add w13,w13,#0x1
71024de75c  cmp w13,w12
71024de760  b.cc 0x71024de740
71024de764  b 0x71024e2c64
71024de768  ldr x20,[x19, #0x28]
71024de76c  cbnz x20,0x71024e065c
71024de770  b 0x71024e2c64
71024de774  ldr x9,[x19, #0x20]
71024de778  cbz x9,0x71024e2c64
71024de77c  ldr x10,[x19, #0x17f0]
71024de780  tst x10,#0xffffffffff
71024de784  b.eq 0x71024e2c64
71024de788  ldr x11,[x19, #0x50]
71024de78c  ldr w12,[x11, #0x3208]
71024de790  cbz w12,0x71024e2c64
71024de794  mov w13,wzr
71024de798  add x8,x11,w13, UXTW  #0x3
71024de79c  ldr x8,[x8, #0x8]
71024de7a0  ldr x14,[x8, #0x8]
71024de7a4  eor x14,x14,x10
71024de7a8  tst x14,#0xffffffffff
71024de7ac  b.eq 0x71024e21d0
71024de7b0  add w13,w13,#0x1
71024de7b4  cmp w13,w12
71024de7b8  b.cc 0x71024de798
71024de7bc  b 0x71024e2c64
71024de7c0  ldr x8,[x19, #0x30]
71024de7c4  cbnz x8,0x71024e0420
71024de7c8  b 0x71024e2c64
71024de7cc  ldr x1,[x19, #0x17f0]
71024de7d0  tst x1,#0xffffffffff
71024de7d4  b.eq 0x71024e2c64
71024de7d8  ldr x8,[x19, #0x60]
71024de7dc  ldr x0,[x8, #0x8]
71024de7e0  mov x20,x18
71024de7e4  bl 0x71024fba70
71024de7e8  mov x18,x20
71024de7ec  b 0x71024e2c64
71024de7f0  ldr x20,[x19, #0x30]
71024de7f4  cbnz x20,0x71024e065c
71024de7f8  b 0x71024e2c64
71024de7fc  ldr x20,[x19, #0x48]
71024de800  ldr w8,[x20, #0x3208]
71024de804  cbz w8,0x71024de86c
71024de808  mov x21,xzr
71024de80c  add x22,x20,#0x8
71024de810  mov w23,#0x1
71024de814  mov w24,#0xc1e
71024de818  b 0x71024de838
71024de81c  mov w1,wzr
71024de820  strb wzr,[x0, #0x25b]
71024de824  mov x25,x18
71024de828  bl 0x7102508910
71024de82c  ldr w8,[x20, #0x3208]
71024de830  mov x18,x25
71024de834  b 0x71024de85c
71024de838  ldr x0,[x22, x21, LSL #0x3]
71024de83c  ldrb w9,[x0, #0x25b]
71024de840  cbz w9,0x71024de85c
71024de844  ldr w9,[x0, #0x88]
71024de848  cmp w9,#0xb
71024de84c  lsl w9,w23,w9
71024de850  and w9,w9,w24
71024de854  ccmp w9,#0x0,#0x4,ls
71024de858  b.eq 0x71024de81c
71024de85c  add x21,x21,#0x1
71024de860  cmp x21,w8, UXTW 
71024de864  b.cc 0x71024de838
71024de868  ldr x20,[x19, #0x48]
71024de86c  mov x22,x18
71024de870  ldr x21,[x19, #0x50]
71024de874  mov x0,x20
71024de878  mov x1,x21
71024de87c  bl 0x710250b4f0
71024de880  ldr w8,[x21, #0x3208]
71024de884  cbz w8,0x71024de93c
71024de888  mov x8,xzr
71024de88c  add x9,x21,x8, LSL #0x3
71024de890  ldr x9,[x9, #0x8]
71024de894  ldr x10,[x9, #0x28]
71024de898  ldr w11,[x10, #0x88]
71024de89c  cmp w11,#0xd
71024de8a0  b.ne 0x71024de8e0
71024de8a4  ldr w11,[x10, #0x168]
71024de8a8  cbz w11,0x71024de8e0
71024de8ac  ldr x13,[x9, #0x8]
71024de8b0  mov x12,xzr
71024de8b4  add x14,x10,#0x170
71024de8b8  ldr x15,[x14, x12, LSL #0x3]
71024de8bc  ldr x16,[x15, #0x8]
71024de8c0  eor x16,x16,x13
71024de8c4  tst x16,#0xffffffffff
71024de8c8  b.eq 0x71024de8d4
71024de8cc  str x15,[x9, #0xa0]
71024de8d0  ldr w11,[x10, #0x168]
71024de8d4  add x12,x12,#0x1
71024de8d8  cmp x12,w11, UXTW 
71024de8dc  b.cc 0x71024de8b8
71024de8e0  ldr x10,[x9, #0x30]
71024de8e4  ldr w11,[x10, #0x88]
71024de8e8  cmp w11,#0xd
71024de8ec  b.ne 0x71024de92c
71024de8f0  ldr w11,[x10, #0x168]
71024de8f4  cbz w11,0x71024de92c
71024de8f8  ldr x13,[x9, #0x8]
71024de8fc  mov x12,xzr
71024de900  add x14,x10,#0x170
71024de904  ldr x15,[x14, x12, LSL #0x3]
71024de908  ldr x16,[x15, #0x8]
71024de90c  eor x16,x16,x13
71024de910  tst x16,#0xffffffffff
71024de914  b.eq 0x71024de920
71024de918  str x15,[x9, #0x98]
71024de91c  ldr w11,[x10, #0x168]
71024de920  add x12,x12,#0x1
71024de924  cmp x12,w11, UXTW 
71024de928  b.cc 0x71024de904
71024de92c  ldr w9,[x21, #0x3208]
71024de930  add x8,x8,#0x1
71024de934  cmp x8,x9
71024de938  b.cc 0x71024de88c
71024de93c  ldr w11,[x20, #0x3208]
71024de940  cbz w11,0x71024de9e4
71024de944  mov x8,xzr
71024de948  add x9,x20,x8, LSL #0x3
71024de94c  ldr x9,[x9, #0x8]
71024de950  ldr w10,[x9, #0x168]
71024de954  cbz w10,0x71024de9d8
71024de958  ldr x12,[x9, #0x70]
71024de95c  mov x11,xzr
71024de960  add x13,x9,x11, LSL #0x3
71024de964  ldr x15,[x13, #0x170]
71024de968  ldr x14,[x15, #0x30]
71024de96c  ldr x16,[x14, #0x70]
71024de970  eor x16,x16,x12
71024de974  tst x16,#0xffffffffff
71024de978  b.eq 0x71024de9b4
71024de97c  add x15,x15,#0x98
71024de980  ldr x15,[x15]
71024de984  cbz x15,0x71024de9c4
71024de988  ldr x16,[x15, #0x30]
71024de98c  ldr x17,[x16, #0x70]
71024de990  ldr x14,[x14, #0x70]
71024de994  eor x14,x14,x17
71024de998  tst x14,#0xffffffffff
71024de99c  b.eq 0x71024de9b4
71024de9a0  add x15,x15,#0x98
71024de9a4  mov x14,x16
71024de9a8  ldr x15,[x15]
71024de9ac  cbnz x15,0x71024de988
71024de9b0  b 0x71024de9c4
71024de9b4  ldr x14,[x15, #0x28]
71024de9b8  add x15,x15,#0xa0
71024de9bc  ldr x15,[x15]
71024de9c0  cbnz x15,0x71024de988
71024de9c4  add x11,x11,#0x1
71024de9c8  cmp x11,x10
71024de9cc  str x14,[x13, #0x1d0]
71024de9d0  b.ne 0x71024de960
71024de9d4  ldr w11,[x20, #0x3208]
71024de9d8  add x8,x8,#0x1
71024de9dc  cmp x8,w11, UXTW 
71024de9e0  b.cc 0x71024de948
71024de9e4  ldr x9,[x19, #0x18]
71024de9e8  ldr x8,[x19, #0x48]
71024de9ec  ldr x9,[x9, #0x428]
71024de9f0  ldr x0,[x9, #0x78]
71024de9f4  ldr w9,[x8, #0x3208]
71024de9f8  cbz w9,0x71024e0018
71024de9fc  mov x9,xzr
71024dea00  add x10,x8,#0x8
71024dea04  orr w11,wzr,#0xffff
71024dea08  ldr x12,[x10, x9, LSL #0x3]
71024dea0c  str w11,[x12, #0x230]
71024dea10  ldr w12,[x8, #0x3208]
71024dea14  add x9,x9,#0x1
71024dea18  cmp x9,x12
71024dea1c  b.cc 0x71024dea08
71024dea20  b 0x71024e0018
71024dea24  ldr x8,[x19, #0x38]
71024dea28  cbnz x8,0x71024e0420
71024dea2c  b 0x71024e2c64
71024dea30  ldr x1,[x19, #0x17f0]
71024dea34  tst x1,#0xffffffffff
71024dea38  b.eq 0x71024e2c64
71024dea3c  adrp x21,0x710532f000
71024dea40  ldr x8,[x21, #0x730]
71024dea44  ldr x8,[x8, #0x8]
71024dea48  ldr x0,[x8, #0x378]
71024dea4c  mov x24,x18
71024dea50  bl 0x710328d680
71024dea54  and x8,x0,#-0x100000000000000
71024dea58  mov x9,#0x6f00000000000000
71024dea5c  cmp x8,x9
71024dea60  b.ne 0x71024e56cc
71024dea64  mov x20,x0
71024dea68  and x8,x0,#0xffffffffff
71024dea6c  cbz x8,0x71024e56cc
71024dea70  adrp x9,0x710532f000
71024dea74  ldr x9,[x9, #0x7c8]
71024dea78  ldr x8,[x19, #0x1f80]
71024dea7c  ldr x0,[x8, #0x80]
71024dea80  mov x1,x20
71024dea84  ldr x9,[x9, #0x8]
71024dea88  ldrb w2,[x9, #0x69]
71024dea8c  bl 0x7101e89330
71024dea90  ldr x0,[x19, #0x1f80]
71024dea94  ldr x22,[x0, #0x80]
71024dea98  ldrb w8,[x22, #0x110]
71024dea9c  cbnz w8,0x71024e5630
71024deaa0  ldr w2,[x22, #0xa0]
71024deaa4  ldr x8,[x22, #0x8]
71024deaa8  mov w23,#0x4fffff
71024deaac  cmp w2,#0x500, LSL #12
71024deab0  b.lt 0x71024e29f0
71024deab4  mov w1,#0x9
71024deab8  b 0x71024e5478
71024deabc  ldr x8,[x19, #0x58]
71024deac0  ldr w22,[x8, #0x408]
71024deac4  cbz w22,0x71024e2c64
71024deac8  mov w9,#0x17e2
71024deacc  mov x23,xzr
71024dead0  add x24,x8,#0x8
71024dead4  add x21,x19,x9
71024dead8  ldr x20,[x24, x23, LSL #0x3]
71024deadc  mov x0,x20
71024deae0  mov w28,w10
71024deae4  mov w25,w13
71024deae8  mov x27,x18
71024deaec  bl 0x71024eb3d0
71024deaf0  tbnz w0,#0x0,0x71024e0e48
71024deaf4  add x23,x23,#0x1
71024deaf8  cmp x23,x22
71024deafc  mov x18,x27
71024deb00  mov w13,w25
71024deb04  mov w10,w28
71024deb08  b.cc 0x71024dead8
71024deb0c  b 0x71024e2c64
71024deb10  ldr x8,[x19, #0x28]
71024deb14  cbz x8,0x71024e2c64
71024deb18  ldr x2,[x19, #0x17f0]
71024deb1c  tst x2,#0xffffffffff
71024deb20  b.eq 0x71024e2c64
71024deb24  ldr x9,[x8, #0x8]
71024deb28  cbnz x9,0x71024e0990
71024deb2c  b 0x71024e2c64
71024deb30  ldr x8,[x19, #0x30]
71024deb34  cbnz x8,0x71024dee84
71024deb38  b 0x71024e2c64
71024deb3c  ldrsh w8,[x19, #0x17e4]
71024deb40  sub w20,w8,w13
71024deb44  ldrb w8,[x0, #0xb]
71024deb48  cbz w8,0x71024debe4
71024deb4c  adrp x8,0x710532f000
71024deb50  ldr x8,[x8, #0x840]
71024deb54  ldr x8,[x8, #0x8]
71024deb58  ldr x8,[x8, #0xc0]
71024deb5c  ldr x22,[x8, #0x80]
71024deb60  ldr w8,[x22, #0x8]
71024deb64  cmn w8,#0x1
71024deb68  b.eq 0x71024debe0
71024deb6c  ldr x21,[x22, #0x18]
71024deb70  mov w8,#0xffffffff
71024deb74  str w8,[x22, #0x8]
71024deb78  cbz x21,0x71024deba0
71024deb7c  mov x24,x0
71024deb80  mov x0,x21
71024deb84  str xzr,[x22, #0x18]
71024deb88  mov x23,x18
71024deb8c  bl 0x7103375760
71024deb90  mov x0,x21
71024deb94  bl 0x710392eb40
71024deb98  mov x0,x24
71024deb9c  mov x18,x23
71024deba0  ldr x21,[x22, #0x10]
71024deba4  cbz x21,0x71024debe0
71024deba8  str xzr,[x22, #0x10]
71024debac  ldr x22,[x21]
71024debb0  mov x24,x0
71024debb4  mov x23,x18
71024debb8  str xzr,[x21]
71024debbc  cbz x22,0x71024debd0
71024debc0  mov x0,x22
71024debc4  bl 0x7103773770
71024debc8  mov x0,x22
71024debcc  bl 0x710392eb40
71024debd0  mov x0,x21
71024debd4  bl 0x710392eb40
71024debd8  mov x18,x23
71024debdc  mov x0,x24
71024debe0  strb wzr,[x0, #0xb]
71024debe4  ldr x8,[x19, #0x1f80]
71024debe8  ldr x0,[x8, #0x80]
71024debec  mov w2,#0xa
71024debf0  mov w1,w20
71024debf4  b 0x71024e0bf8
71024debf8  ldr x9,[x19, #0x17f0]
71024debfc  tst x9,#0xffffffffff
71024dec00  b.eq 0x71024e2c64
71024dec04  ldr x8,[x19, #0x48]
71024dec08  ldr w10,[x8, #0x3208]
71024dec0c  cbz w10,0x71024e2c64
71024dec10  mov x11,xzr
71024dec14  add x12,x8,#0x8
71024dec18  ldr x8,[x12, x11, LSL #0x3]
71024dec1c  ldr x13,[x8, #0x70]
71024dec20  eor x13,x13,x9
71024dec24  tst x13,#0xffffffffff
71024dec28  b.eq 0x71024e0f44
71024dec2c  add x11,x11,#0x1
71024dec30  cmp w11,w10
71024dec34  b.cc 0x71024dec18
71024dec38  b 0x71024e2c64
71024dec3c  ldr x8,[x19, #0x20]
71024dec40  cbnz x8,0x71024e00cc
71024dec44  b 0x71024e2c64
71024dec48  ldr x21,[x19, #0x20]
71024dec4c  cbz x21,0x71024e2c64
71024dec50  ldr x8,[x19, #0x17f0]
71024dec54  tst x8,#0xffffffffff
71024dec58  b.ne 0x71024e0888
71024dec5c  b 0x71024e2c64
71024dec60  ldr x8,[x19, #0x38]
71024dec64  cbnz x8,0x71024dee84
71024dec68  b 0x71024e2c64
71024dec6c  ldr x8,[x19, #0x8]
71024dec70  ldrsh w9,[x19, #0x17e4]
71024dec74  sub w9,w9,w13
71024dec78  ldr x8,[x8, #0x8]
71024dec7c  bic w9,w9,w9, ASR #0x1f
71024dec80  mov w10,#0x1
71024dec84  strb w10,[x8, #0x3c]
71024dec88  stp wzr,w9,[x8, #0x30]
71024dec8c  ldr x8,[x19, #0x8]
71024dec90  ldr x8,[x8, #0x8]
71024dec94  strb w10,[x8, #0x3d]
71024dec98  b 0x71024e2c64
71024dec9c  adrp x8,0x710532a000
71024deca0  ldr x8,[x8, #0x860]
71024deca4  ldr x9,[x8]
71024deca8  ldr w8,[x9, #0x1c]
71024decac  cmp w8,#0x2
71024decb0  b.hi 0x71024e2c64
71024decb4  ldr w9,[x9, #0x78]
71024decb8  cmp w9,#0x14
71024decbc  b.cs 0x71024e5790
71024decc0  adrp x10,0x7105314000
71024decc4  ldr x10,[x10, #0x510]
71024decc8  ldr x10,[x10]
71024deccc  ldr x10,[x10, #0x158]
71024decd0  ldr x10,[x10]
71024decd4  ldr x10,[x10]
71024decd8  mov w12,#0xd700
71024decdc  movk w12,#0x3, LSL #16
71024dece0  madd x8,x8,x12,x10
71024dece4  mov w11,#0x84
71024dece8  madd x8,x9,x11,x8
71024decec  mov w9,#0xccb8
71024decf0  movk w9,#0x3, LSL #16
71024decf4  ldr w10,[x8, x9, LSL #0x0]
71024decf8  add w11,w10,#0x1
71024decfc  orr w12,wzr,#0xff
71024ded00  bics wzr,w12,w10
71024ded04  and w11,w11,#0xff
71024ded08  csel w10,w12,w11,eq
71024ded0c  str w10,[x8, x9, LSL #0x0]
71024ded10  b 0x71024e2c64
71024ded14  ldr x21,[x19, #0x38]
71024ded18  cbz x21,0x71024e2c64
71024ded1c  ldr x8,[x19, #0x17f0]
71024ded20  tst x8,#0xffffffffff
71024ded24  b.ne 0x71024e0888
71024ded28  b 0x71024e2c64
71024ded2c  mov w8,#0x1f98
71024ded30  b 0x71024e06c0
71024ded34  ldr x8,[x19, #0x17f0]
71024ded38  tst x8,#0xffffffffff
71024ded3c  b.eq 0x71024e2c64
71024ded40  ldr x9,[x19, #0x48]
71024ded44  ldr w10,[x9, #0x3208]
71024ded48  cbz w10,0x71024e2c64
71024ded4c  mov w11,wzr
71024ded50  add x12,x9,w11, UXTW  #0x3
71024ded54  ldr x22,[x12, #0x8]
71024ded58  ldr x12,[x22, #0x70]
71024ded5c  eor x12,x12,x8
71024ded60  tst x12,#0xffffffffff
71024ded64  b.eq 0x71024e0ff8
71024ded68  add w11,w11,#0x1
71024ded6c  cmp w11,w10
71024ded70  b.cc 0x71024ded50
71024ded74  b 0x71024e2c64
71024ded78  mov w8,#0x1f9b
71024ded7c  strb wzr,[x19, x8, LSL ]
71024ded80  b 0x71024e2c64
71024ded84  ldr x8,[x19, #0x30]
71024ded88  cbnz x8,0x71024e0808
71024ded8c  b 0x71024e2c64
71024ded90  ldr x8,[x19, #0x30]
71024ded94  cbnz x8,0x71024e0270
71024ded98  b 0x71024e2c64
71024ded9c  ldrsh w8,[x19, #0x17e4]
71024deda0  sub w8,w8,w13
71024deda4  bic w20,w8,w8, ASR #0x1f
71024deda8  scvtf s0,w20
71024dedac  ldr x0,[x19, #0x10]
71024dedb0  orr w1,wzr,#0x3
71024dedb4  mov x21,x18
71024dedb8  bl 0x71024ef480
71024dedbc  adrp x8,0x710532a000
71024dedc0  ldr x8,[x8, #0x860]
71024dedc4  ldr x0,[x8]
71024dedc8  cmp w20,#0x1e
71024dedcc  b.gt 0x71024e0720
71024dedd0  mov x1,#0x6df8
71024dedd4  movk x1,#0x85f0, LSL #16
71024dedd8  b 0x71024e0d70
71024deddc  ldr x8,[x19, #0x20]
71024dede0  cbnz x8,0x71024dee84
71024dede4  b 0x71024e2c64
71024dede8  ldr x8,[x19, #0x38]
71024dedec  cbnz x8,0x71024e0270
71024dedf0  b 0x71024e2c64
71024dedf4  ldr x8,[x19, #0x8]
71024dedf8  ldrsh w9,[x19, #0x17e4]
71024dedfc  orr w10,wzr,#0x3
71024dee00  b 0x71024dfbb0
71024dee04  ldr x8,[x19, #0x17f0]
71024dee08  tst x8,#0xffffffffff
71024dee0c  b.eq 0x71024e2c64
71024dee10  ldr x9,[x19, #0x50]
71024dee14  ldr w10,[x9, #0x3208]
71024dee18  cbz w10,0x71024e2c64
71024dee1c  mov w11,wzr
71024dee20  add x12,x9,w11, UXTW  #0x3
71024dee24  ldr x1,[x12, #0x8]
71024dee28  ldr x12,[x1, #0x8]
71024dee2c  eor x12,x12,x8
71024dee30  tst x12,#0xffffffffff
71024dee34  b.eq 0x71024e1210
71024dee38  add w11,w11,#0x1
71024dee3c  cmp w11,w10
71024dee40  b.cc 0x71024dee20
71024dee44  b 0x71024e2c64
71024dee48  ldr x8,[x19, #0x8]
71024dee4c  ldrsh w9,[x19, #0x17e4]
71024dee50  mov w10,#0x1
71024dee54  ldr x8,[x8, #0x8]
71024dee58  sub w9,w9,w13
71024dee5c  str w10,[x8, #0x30]
71024dee60  b 0x71024df890
71024dee64  mov w8,#0x1f9e
71024dee68  strb wzr,[x19, x8, LSL ]
71024dee6c  b 0x71024e2c64
71024dee70  mov w8,#0x1f96
71024dee74  strb wzr,[x19, x8, LSL ]
71024dee78  b 0x71024e2c64
71024dee7c  ldr x8,[x19, #0x28]
71024dee80  cbz x8,0x71024e2c64
71024dee84  ldr s0,[x19, #0x17f8]
71024dee88  scvtf s0,s0
71024dee8c  ldr q1,[x8, #0x40]
71024dee90  mov v1.S[0x1],v0.S[0x0]
71024dee94  ldrsh w9,[x19, #0x17e4]
71024dee98  sub w9,w9,w13
71024dee9c  cmp w9,#0x1
71024deea0  str q1,[x8, #0x40]
71024deea4  b.lt 0x71024e0ca0
71024deea8  ldr s1,[x8, #0x34]
71024deeac  fabd s0,s1,s0
71024deeb0  scvtf s1,w9
71024deeb4  fdiv s0,s0,s1
71024deeb8  b 0x71024e0ca8
71024deebc  mov w8,#0x1f99
71024deec0  strb wzr,[x19, x8, LSL ]
71024deec4  b 0x71024e2c64
71024deec8  ldr x8,[x19, #0x1f80]
71024deecc  ldr x8,[x8, #0x80]
71024deed0  mov w9,#0x1
71024deed4  strb w9,[x8, #0x113]
71024deed8  b 0x71024e2c64
71024deedc  mov x20,#0xff0000000000
71024deee0  movk x20,#0xc1ff, LSL #48
71024deee4  orr w8,wzr,#0xff
71024deee8  sturb w8,[x29, #-0xb8]
71024deeec  stp xzr,xzr,[x29, #-0xb0]
71024deef0  stur x20,[x29, #-0xc0]
71024deef4  ldr x9,[x19, #0x17f0]
71024deef8  tst x9,#0xffffffffff
71024deefc  b.eq 0x71024e0da4
71024def00  adrp x8,0x710532a000
71024def04  ldr x8,[x8, #0x868]
71024def08  ldr x10,[x8]
71024def0c  ldr x8,[x10, #0x400]
71024def10  ldr x10,[x10, #0x408]
71024def14  mov x27,x18
71024def18  cmp x8,x10
71024def1c  b.eq 0x71024e12c0
71024def20  ldr x11,[x8]
71024def24  eor x11,x11,x9
71024def28  tst x11,#0xffffffffff
71024def2c  b.eq 0x71024e1254
71024def30  add x8,x8,#0x20
71024def34  cmp x10,x8
71024def38  b.ne 0x71024def20
71024def3c  b 0x71024e12c0
71024def40  ldr x8,[x19, #0x17f0]
71024def44  tst x8,#0xffffffffff
71024def48  ldr x8,[x19, #0x60]
71024def4c  ldr x8,[x8, #0x8]
71024def50  strb wzr,[x8, #0x5d8]
71024def54  str xzr,[x8, #0x5d0]
71024def58  ldr x10,[x19, #0x60]
71024def5c  b.eq 0x71024e0dc8
71024def60  ldr x0,[x10, #0x8]
71024def64  ldr x8,[x19, #0x17f0]
71024def68  ldr x9,[x19, #0x48]
71024def6c  ldr x2,[x19, #0x58]
71024def70  ldr x10,[x0, #0x5d0]
71024def74  eor x10,x10,x8
71024def78  tst x10,#0xffffffffff
71024def7c  b.ne 0x71024def84
71024def80  str xzr,[x0, #0x5d0]
71024def84  ldr x10,[x0, #0x560]
71024def88  ldr x10,[x10, #0x80]
71024def8c  ldr w10,[x10, #0x116c]
71024def90  cmp w10,#0x2
71024def94  b.ne 0x71024e2c64
71024def98  ldr w10,[x9, #0x3208]
71024def9c  cbz w10,0x71024e2334
71024defa0  mov x20,x18
71024defa4  mov w11,wzr
71024defa8  add x12,x9,w11, UXTW  #0x3
71024defac  ldr x1,[x12, #0x8]
71024defb0  ldr x12,[x1, #0x70]
71024defb4  eor x12,x12,x8
71024defb8  tst x12,#0xffffffffff
71024defbc  b.eq 0x71024e233c
71024defc0  add w11,w11,#0x1
71024defc4  cmp w11,w10
71024defc8  b.cc 0x71024defa8
71024defcc  b 0x71024e2338
71024defd0  ldr x9,[x19, #0x60]
71024defd4  ldr x8,[x19, #0x17f0]
71024defd8  tst x8,#0xffffffffff
71024defdc  ldr x9,[x9, #0x8]
71024defe0  b.eq 0x71024e0e3c
71024defe4  str x8,[x9, #0x5d0]
71024defe8  b 0x71024e2c64
71024defec  ldr x21,[x19, #0x58]
71024deff0  ldr w8,[x21, #0x408]
71024deff4  cbz w8,0x71024e2c64
71024deff8  mov x22,xzr
71024deffc  add x23,x21,#0x8
71024df000  mov w24,#0x1
71024df004  mov w25,#0x2
71024df008  ldr x20,[x23, x22, LSL #0x3]
71024df00c  mov x0,x20
71024df010  mov x26,x18
71024df014  bl 0x71024eb3d0
71024df018  tbz w0,#0x0,0x71024df040
71024df01c  ldrb w8,[x20, #0x167]
71024df020  cbnz w8,0x71024df040
71024df024  ldr x8,[x20, #0xe8]
71024df028  strb w24,[x20, #0x167]
71024df02c  cbz x8,0x71024df040
71024df030  mov x0,x20
71024df034  str w25,[x20, #0x138]
71024df038  str wzr,[x20, #0x140]
71024df03c  bl 0x71024e9c40
71024df040  ldr w8,[x21, #0x408]
71024df044  add x22,x22,#0x1
71024df048  cmp x22,x8
71024df04c  mov x18,x26
71024df050  b.cc 0x71024df008
71024df054  b 0x71024e2c64
71024df058  ldr x8,[x19, #0x8]
71024df05c  ldr x8,[x8, #0x8]
71024df060  ldrsh w9,[x19, #0x17e4]
71024df064  strb wzr,[x8, #0x2c]
71024df068  b 0x71024dfbb8
71024df06c  ldr x8,[x19, #0x17f0]
71024df070  ands x8,x8,#0xffffffffff
71024df074  b.eq 0x71024e2c64
71024df078  mov x9,#0xff0000000000
71024df07c  movk x9,#0x4dff, LSL #48
71024df080  orr x20,x8,x9
71024df084  adrp x8,0x710532f000
71024df088  ldr x8,[x8, #0x730]
71024df08c  ldr x8,[x8, #0x8]
71024df090  ldr x0,[x8, #0x388]
71024df094  mov x1,x20
71024df098  mov x24,x18
71024df09c  bl 0x710327eea0
71024df0a0  adrp x8,0x7105314000
71024df0a4  ldr x8,[x8, #0x510]
71024df0a8  ldr x8,[x8]
71024df0ac  ldr x22,[x8, #0x158]
71024df0b0  adrp x8,0x710532a000
71024df0b4  ldr x8,[x8, #0x860]
71024df0b8  ldr x8,[x8]
71024df0bc  ldr w23,[x8, #0x1c]
71024df0c0  mov w21,w0
71024df0c4  cmp w23,#0x2
71024df0c8  b.hi 0x71024e0ec4
71024df0cc  and w8,w21,#0xff
71024df0d0  cmp w8,#0x1f
71024df0d4  b.hi 0x71024e0ec4
71024df0d8  ldr x8,[x22]
71024df0dc  ldr x8,[x8]
71024df0e0  mov w9,#0xd700
71024df0e4  movk w9,#0x3, LSL #16
71024df0e8  madd x8,x23,x9,x8
71024df0ec  mov w9,#0xcc00
71024df0f0  movk w9,#0x3, LSL #16
71024df0f4  ldr w8,[x8, x9, LSL #0x0]
71024df0f8  mov w9,#0x1
71024df0fc  lsl w21,w9,w21
71024df100  tst w8,w21
71024df104  mov x18,x24
71024df108  b.ne 0x71024e2c64
71024df10c  mov w1,#0x1
71024df110  mov w2,#0x1
71024df114  mov x0,x20
71024df118  bl 0x710337ae10
71024df11c  mov x18,x24
71024df120  b 0x71024e0ef4
71024df124  mov w8,#0x1fa0
71024df128  b 0x71024e06c0
71024df12c  ldr x0,[x19, #0x28]
71024df130  cbz x0,0x71024e2c64
71024df134  ldr x8,[x19, #0x17f0]
71024df138  tst x8,#0xffffffffff
71024df13c  b.eq 0x71024e2c64
71024df140  ldr x9,[x19, #0x48]
71024df144  ldr w10,[x9, #0x3208]
71024df148  cbz w10,0x71024e2c64
71024df14c  mov w11,wzr
71024df150  add x12,x9,w11, UXTW  #0x3
71024df154  ldr x1,[x12, #0x8]
71024df158  ldr x12,[x1, #0x70]
71024df15c  eor x12,x12,x8
71024df160  tst x12,#0xffffffffff
71024df164  b.eq 0x71024e0d80
71024df168  add w11,w11,#0x1
71024df16c  cmp w11,w10
71024df170  b.cc 0x71024df150
71024df174  b 0x71024e2c64
71024df178  ldr x9,[x19, #0x30]
71024df17c  cbz x9,0x71024e2c64
71024df180  ldr x10,[x19, #0x17f0]
71024df184  tst x10,#0xffffffffff
71024df188  b.eq 0x71024e2c64
71024df18c  ldr x11,[x19, #0x50]
71024df190  ldr w12,[x11, #0x3208]
71024df194  cbz w12,0x71024e2c64
71024df198  mov w13,wzr
71024df19c  add x8,x11,w13, UXTW  #0x3
71024df1a0  ldr x8,[x8, #0x8]
71024df1a4  ldr x14,[x8, #0x8]
71024df1a8  eor x14,x14,x10
71024df1ac  tst x14,#0xffffffffff
71024df1b0  b.eq 0x71024e220c
71024df1b4  add w13,w13,#0x1
71024df1b8  cmp w13,w12
71024df1bc  b.cc 0x71024df19c
71024df1c0  b 0x71024e2c64
71024df1c4  ldr x8,[x19, #0x8]
71024df1c8  ldr x8,[x8, #0x8]
71024df1cc  ldr w10,[x8, #0x4]
71024df1d0  ldr x9,[x19, #0x17f0]
71024df1d4  orr w11,wzr,#0xffff
71024df1d8  cmp w10,w11
71024df1dc  b.eq 0x71024df1ec
71024df1e0  ldr w10,[x8, #0x20]
71024df1e4  cmp w10,#0x0
71024df1e8  b.gt 0x71024e2c64
71024df1ec  orr w10,wzr,#0x6
71024df1f0  b 0x71024e0138
71024df1f4  ldr x8,[x19, #0x8]
71024df1f8  ldrsh w9,[x19, #0x17e4]
71024df1fc  mov w10,#0x2
71024df200  b 0x71024dfbb0
71024df204  mov w8,#0x1f9b
71024df208  b 0x71024e06c0
71024df20c  ldr x8,[x19, #0x8]
71024df210  ldr x8,[x8, #0x8]
71024df214  ldr w10,[x8, #0x4]
71024df218  ldr x9,[x19, #0x17f0]
71024df21c  orr w11,wzr,#0xffff
71024df220  cmp w10,w11
71024df224  b.eq 0x71024df234
71024df228  ldr w10,[x8, #0x20]
71024df22c  cmp w10,#0x0
71024df230  b.gt 0x71024e2c64
71024df234  mov w10,#0x8
71024df238  b 0x71024e0138
71024df23c  mov w8,#0x1fa0
71024df240  strb wzr,[x19, x8, LSL ]
71024df244  b 0x71024e2c64
71024df248  mov w8,#0x1f99
71024df24c  b 0x71024e06c0
71024df250  ldr x8,[x19, #0x38]
71024df254  cbnz x8,0x71024e00cc
71024df258  b 0x71024e2c64
71024df25c  ldr x8,[x19, #0x17f0]
71024df260  tst x8,#0xffffffffff
71024df264  b.eq 0x71024e2c64
71024df268  ldr x9,[sp, #0xb8]
71024df26c  ldr x9,[x9]
71024df270  eor x9,x8,x9
71024df274  tst x9,#0xffffffffff
71024df278  b.eq 0x71024df330
71024df27c  ldr x9,[x20]
71024df280  eor x9,x8,x9
71024df284  tst x9,#0xffffffffff
71024df288  str x20,[sp, #0xb8]
71024df28c  b.eq 0x71024df330
71024df290  ldr x9,[x22]
71024df294  eor x9,x8,x9
71024df298  tst x9,#0xffffffffff
71024df29c  str x22,[sp, #0xb8]
71024df2a0  b.eq 0x71024df330
71024df2a4  ldr x9,[x21]
71024df2a8  eor x9,x8,x9
71024df2ac  tst x9,#0xffffffffff
71024df2b0  str x21,[sp, #0xb8]
71024df2b4  b.eq 0x71024df330
71024df2b8  ldr x9,[x28]
71024df2bc  eor x9,x8,x9
71024df2c0  tst x9,#0xffffffffff
71024df2c4  str x28,[sp, #0xb8]
71024df2c8  b.eq 0x71024df330
71024df2cc  ldr x9,[x27]
71024df2d0  eor x9,x8,x9
71024df2d4  tst x9,#0xffffffffff
71024df2d8  str x27,[sp, #0xb8]
71024df2dc  b.eq 0x71024df330
71024df2e0  ldr x9,[x26]
71024df2e4  eor x9,x8,x9
71024df2e8  tst x9,#0xffffffffff
71024df2ec  str x26,[sp, #0xb8]
71024df2f0  b.eq 0x71024df330
71024df2f4  ldr x9,[x25]
71024df2f8  eor x9,x8,x9
71024df2fc  tst x9,#0xffffffffff
71024df300  str x25,[sp, #0xb8]
71024df304  b.eq 0x71024df330
71024df308  ldr x9,[x24]
71024df30c  eor x9,x8,x9
71024df310  tst x9,#0xffffffffff
71024df314  str x24,[sp, #0xb8]
71024df318  b.eq 0x71024df330
71024df31c  ldr x9,[x23]
71024df320  eor x8,x8,x9
71024df324  tst x8,#0xffffffffff
71024df328  str x23,[sp, #0xb8]
71024df32c  b.ne 0x71024e2c64
71024df330  ldr x0,[sp, #0xb8]
71024df334  mov x20,x18
71024df338  bl 0x71024db230
71024df33c  mov x18,x20
71024df340  b 0x71024e2c64
71024df344  ldr x9,[x19, #0x38]
71024df348  cbz x9,0x71024e2c64
71024df34c  ldr x10,[x19, #0x17f0]
71024df350  tst x10,#0xffffffffff
71024df354  b.eq 0x71024e2c64
71024df358  ldr x11,[x19, #0x50]
71024df35c  ldr w12,[x11, #0x3208]
71024df360  cbz w12,0x71024e2c64
71024df364  mov w13,wzr
71024df368  add x8,x11,w13, UXTW  #0x3
71024df36c  ldr x8,[x8, #0x8]
71024df370  ldr x14,[x8, #0x8]
71024df374  eor x14,x14,x10
71024df378  tst x14,#0xffffffffff
71024df37c  b.eq 0x71024e2248
71024df380  add w13,w13,#0x1
71024df384  cmp w13,w12
71024df388  b.cc 0x71024df368
71024df38c  b 0x71024e2c64
71024df390  ldr x8,[x19, #0x17f0]
71024df394  tst x8,#0xffffffffff
71024df398  b.eq 0x71024e2c64
71024df39c  ldr x9,[x19, #0x58]
71024df3a0  ldr w10,[x9, #0x408]
71024df3a4  cbz w10,0x71024e2c64
71024df3a8  mov w11,wzr
71024df3ac  add x12,x9,w11, UXTW  #0x3
71024df3b0  ldr x12,[x12, #0x8]
71024df3b4  ldr x13,[x12, #0x8]
71024df3b8  eor x13,x13,x8
71024df3bc  tst x13,#0xffffffffff
71024df3c0  b.eq 0x71024e1344
71024df3c4  add w11,w11,#0x1
71024df3c8  cmp w11,w10
71024df3cc  b.cc 0x71024df3ac
71024df3d0  b 0x71024e2c64
71024df3d4  ldr x8,[x19, #0x8]
71024df3d8  ldr x8,[x8, #0x8]
71024df3dc  ldr w10,[x8, #0x4]
71024df3e0  ldr x9,[x19, #0x17f0]
71024df3e4  orr w11,wzr,#0xffff
71024df3e8  cmp w10,w11
71024df3ec  b.eq 0x71024df3fc
71024df3f0  ldr w10,[x8, #0x20]
71024df3f4  cmp w10,#0x0
71024df3f8  b.gt 0x71024e2c64
71024df3fc  mov w10,#0xb
71024df400  b 0x71024e0138
71024df404  ldr x20,[x19, #0x38]
71024df408  cbnz x20,0x71024e065c
71024df40c  b 0x71024e2c64
71024df410  ldr x8,[x19, #0x1f80]
71024df414  ldrsh w9,[x19, #0x17e4]
71024df418  sub w1,w9,w13
71024df41c  ldr x0,[x8, #0x80]
71024df420  mov w2,#0x2
71024df424  b 0x71024e0c60
71024df428  ldr x8,[x19, #0x17f0]
71024df42c  tst x8,#0xffffffffff
71024df430  b.eq 0x71024e2c64
71024df434  ldr x1,[x19, #0x48]
71024df438  ldr w9,[x1, #0x3208]
71024df43c  cbz w9,0x71024e2c64
71024df440  mov w10,wzr
71024df444  add x11,x1,w10, UXTW  #0x3
71024df448  ldr x0,[x11, #0x8]
71024df44c  ldr x11,[x0, #0x70]
71024df450  eor x11,x11,x8
71024df454  tst x11,#0xffffffffff
71024df458  b.eq 0x71024e13ac
71024df45c  add w10,w10,#0x1
71024df460  cmp w10,w9
71024df464  b.cc 0x71024df444
71024df468  b 0x71024e2c64
71024df46c  mov w8,#0x1f98
71024df470  strb wzr,[x19, x8, LSL ]
71024df474  b 0x71024e2c64
71024df478  mov w20,#0x55
71024df47c  mov w0,w20
71024df480  mov x21,x18
71024df484  bl 0x710177a5c0
71024df488  mov w0,w20
71024df48c  bl 0x710176b770
71024df490  adrp x20,0x710532f000
71024df494  ldr x8,[x20, #0x730]
71024df498  ldr x8,[x8, #0x8]
71024df49c  ldr x0,[x8, #0x398]
71024df4a0  mov x1,#0xec5f
71024df4a4  movk x1,#0x510f, LSL #16
71024df4a8  movk x1,#0x1e, LSL #32
71024df4ac  b 0x71024df8d4
71024df4b0  mov w8,#0x1f9d
71024df4b4  b 0x71024e06c0
71024df4b8  ldr x9,[x19, #0x28]
71024df4bc  cbnz x9,0x71024dfda4
71024df4c0  b 0x71024e2c64
71024df4c4  adrp x9,0x710532a000
71024df4c8  ldr x9,[x9, #0x860]
71024df4cc  ldr w8,[x19, #0x17f8]
71024df4d0  add w8,w8,#0x1
71024df4d4  ldr x9,[x9]
71024df4d8  str w8,[x9, #0x80]
71024df4dc  b 0x71024e2c64
71024df4e0  ldr x8,[x19, #0x8]
71024df4e4  ldrsh w9,[x19, #0x17e4]
71024df4e8  mov w10,#0x5
71024df4ec  b 0x71024dfbb0
71024df4f0  ldr x8,[x19, #0x8]
71024df4f4  ldr x8,[x8, #0x8]
71024df4f8  ldr w10,[x8, #0x4]
71024df4fc  ldr x9,[x19, #0x17f0]
71024df500  orr w11,wzr,#0xffff
71024df504  cmp w10,w11
71024df508  b.eq 0x71024df518
71024df50c  ldr w10,[x8, #0x20]
71024df510  cmp w10,#0x0
71024df514  b.gt 0x71024e2c64
71024df518  mov w10,#0xa
71024df51c  b 0x71024e0138
71024df520  ldr x8,[x19, #0x8]
71024df524  ldr x8,[x8, #0x8]
71024df528  ldr w10,[x8, #0x4]
71024df52c  ldr x9,[x19, #0x17f0]
71024df530  orr w11,wzr,#0xffff
71024df534  cmp w10,w11
71024df538  b.eq 0x71024df548
71024df53c  ldr w10,[x8, #0x20]
71024df540  cmp w10,#0x0
71024df544  b.gt 0x71024e2c64
71024df548  mov w10,#0xd
71024df54c  b 0x71024e0138
71024df550  ldr w10,[x19, #0x1f90]
71024df554  ubfx x8,x10,#0x19,#0x7
71024df558  cmp w8,#0x4
71024df55c  b.hi 0x71024df6c0
71024df560  adrp x8,0x7105334000
71024df564  ldr x8,[x8, #0x948]
71024df568  lsr x9,x10,#0x18
71024df56c  mov w11,#0x1b0
71024df570  madd x11,x9,x11,x8
71024df574  cbz x11,0x71024df6c0
71024df578  ldr w12,[x11]
71024df57c  cmp w12,w10
71024df580  b.ne 0x71024df6c0
71024df584  mov w12,#0x1b0
71024df588  madd x12,x9,x12,x8
71024df58c  mov w16,w13
71024df590  orr w13,wzr,#0x3
71024df594  ldrsh w10,[x19, #0x17e4]
71024df598  str w13,[x12, #0x4]
71024df59c  ldr w12,[x12, #0xc]
71024df5a0  cmp w12,#0x2
71024df5a4  b.cs 0x71024e2104
71024df5a8  mov w11,#0x1b0
71024df5ac  madd x11,x9,x11,x8
71024df5b0  ldr x12,[x8, #0x1168]
71024df5b4  str x12,[x11, #0xa8]
71024df5b8  ldr x12,[x8, #0x1178]
71024df5bc  ldr x13,[x8, #0x1188]
71024df5c0  str x13,[x11, #0xc8]
71024df5c4  str x12,[x11, #0xb8]
71024df5c8  ldr x12,[x8, #0x1198]
71024df5cc  ldr x13,[x8, #0x11a8]
71024df5d0  str x13,[x11, #0xe8]
71024df5d4  str x12,[x11, #0xd8]
71024df5d8  ldr x13,[x8, #0x11b8]
71024df5dc  ldr x14,[x8, #0x11c8]
71024df5e0  ldr w12,[x8, #0x11d0]
71024df5e4  str x14,[x11, #0x108]
71024df5e8  str x13,[x11, #0xf8]
71024df5ec  ldr x13,[x8, #0x1160]
71024df5f0  ldr x14,[x8, #0x1170]
71024df5f4  str x14,[x11, #0xb0]
71024df5f8  str x13,[x11, #0xa0]
71024df5fc  ldr x13,[x8, #0x1180]
71024df600  ldr x14,[x8, #0x1190]
71024df604  str x14,[x11, #0xd0]
71024df608  str x13,[x11, #0xc0]
71024df60c  ldr x13,[x8, #0x11a0]
71024df610  ldr x14,[x8, #0x11b0]
71024df614  str x14,[x11, #0xf0]
71024df618  str x13,[x11, #0xe0]
71024df61c  ldr x13,[x8, #0x11c0]
71024df620  str w12,[x11, #0x110]
71024df624  str x13,[x11, #0x100]
71024df628  adrp x12,0x7105230000
71024df62c  add x12,x12,#0x1b0
71024df630  ldr x13,[x12, #0x8]
71024df634  str x13,[x11, #0x128]
71024df638  ldr x13,[x12, #0x18]
71024df63c  ldr x14,[x12, #0x28]
71024df640  str x14,[x11, #0x148]
71024df644  str x13,[x11, #0x138]
71024df648  ldr x13,[x12, #0x38]
71024df64c  ldr x14,[x12, #0x48]
71024df650  str x14,[x11, #0x168]
71024df654  str x13,[x11, #0x158]
71024df658  ldr x14,[x12, #0x58]
71024df65c  ldr x15,[x12, #0x68]
71024df660  ldr w13,[x12, #0x70]
71024df664  str x15,[x11, #0x188]
71024df668  str x14,[x11, #0x178]
71024df66c  ldr x14,[x12]
71024df670  ldr x15,[x12, #0x10]
71024df674  str x15,[x11, #0x130]
71024df678  str x14,[x11, #0x120]
71024df67c  ldr x14,[x12, #0x20]
71024df680  ldr x15,[x12, #0x30]
71024df684  sub w10,w10,w16
71024df688  str x15,[x11, #0x150]
71024df68c  str x14,[x11, #0x140]
71024df690  scvtf s0,w10
71024df694  mov w10,#0x1b0
71024df698  madd x8,x9,x10,x8
71024df69c  ldr x14,[x12, #0x40]
71024df6a0  ldr x15,[x12, #0x50]
71024df6a4  str x15,[x11, #0x170]
71024df6a8  str x14,[x11, #0x160]
71024df6ac  ldr x12,[x12, #0x60]
71024df6b0  str w13,[x11, #0x190]
71024df6b4  str x12,[x11, #0x180]
71024df6b8  str wzr,[x8, #0x10]
71024df6bc  str s0,[x8, #0x14]
71024df6c0  str wzr,[x19, #0x1f90]
71024df6c4  b 0x71024e2c64
71024df6c8  ldr x8,[x19, #0x18]
71024df6cc  mov w9,#0x1
71024df6d0  strb w9,[x8, #0x452]
71024df6d4  b 0x71024e2c64
71024df6d8  adrp x8,0x710532a000
71024df6dc  ldr x8,[x8, #0x860]
71024df6e0  ldr x8,[x8]
71024df6e4  ldr w8,[x8, #0x1c]
71024df6e8  cmp w8,#0x3
71024df6ec  b.cs 0x71024e5790
71024df6f0  adrp x9,0x7105314000
71024df6f4  ldr x9,[x9, #0x510]
71024df6f8  ldr x10,[x9]
71024df6fc  ldr x9,[x10, #0x158]
71024df700  ldr x11,[x9]
71024df704  ldr x11,[x11]
71024df708  mov w12,#0xd700
71024df70c  movk w12,#0x3, LSL #16
71024df710  madd x11,x8,x12,x11
71024df714  mov w12,#0xcc37
71024df718  movk w12,#0x3, LSL #16
71024df71c  add x11,x11,x12
71024df720  ldrb w12,[x11]
71024df724  mov x22,x18
71024df728  cbnz w12,0x71024df77c
71024df72c  ldr x10,[x10, #0x188]
71024df730  ldr x10,[x10]
71024df734  ldr x10,[x10, #0x18]
71024df738  ldr x10,[x10]
71024df73c  ldr x10,[x10]
71024df740  ldr w11,[x10, #0x18]
71024df744  add w12,w11,#0x1
71024df748  mov w13,#0xc9ff
71024df74c  movk w13,#0x3b9a, LSL #16
71024df750  cmp w12,w13
71024df754  csinc w11,w13,w11,cs
71024df758  str w11,[x10, #0x18]
71024df75c  ldr x9,[x9]
71024df760  ldr x9,[x9]
71024df764  mov w10,#0xd700
71024df768  movk w10,#0x3, LSL #16
71024df76c  madd x8,x8,x10,x9
71024df770  mov w9,#0xcc37
71024df774  movk w9,#0x3, LSL #16
71024df778  add x11,x8,x9
71024df77c  mov w21,#0x1
71024df780  mov w0,#0x54
71024df784  strb w21,[x11]
71024df788  bl 0x710177a5c0
71024df78c  mov w20,#0x55
71024df790  mov w0,w20
71024df794  bl 0x710177a5c0
71024df798  mov w0,w20
71024df79c  bl 0x710176b770
71024df7a0  mov w0,#0x56
71024df7a4  bl 0x710176b770
71024df7a8  adrp x20,0x710532f000
71024df7ac  ldr x8,[x20, #0x730]
71024df7b0  ldr x8,[x8, #0x8]
71024df7b4  ldr x0,[x8, #0x398]
71024df7b8  mov x1,#0xb868
71024df7bc  movk x1,#0xa368, LSL #16
71024df7c0  movk x1,#0x1c, LSL #32
71024df7c4  bl 0x710328cf90
71024df7c8  bl 0x71017981d0
71024df7cc  ldr x8,[x20, #0x730]
71024df7d0  ldr x8,[x8, #0x8]
71024df7d4  ldr x0,[x8, #0x398]
71024df7d8  mov x1,#0x344d
71024df7dc  movk x1,#0x7a10, LSL #16
71024df7e0  movk x1,#0x22, LSL #32
71024df7e4  bl 0x710328cf90
71024df7e8  bl 0x71017981d0
71024df7ec  ldr x8,[x19, #0x8]
71024df7f0  ldr x8,[x8, #0x8]
71024df7f4  strb w21,[x8]
71024df7f8  ldr x8,[x19, #0x8]
71024df7fc  ldr x8,[x8, #0x8]
71024df800  ldrb w9,[x8, #0x28]
71024df804  cbnz w9,0x71024df814
71024df808  mov w9,#0x2
71024df80c  str w9,[x8, #0x24]
71024df810  strb w21,[x8, #0x28]
71024df814  ldr x8,[x20, #0x730]
71024df818  ldr x8,[x8, #0x8]
71024df81c  ldr x0,[x8, #0x3c8]
71024df820  mov x1,#0xc794
71024df824  movk x1,#0xa031, LSL #16
71024df828  movk x1,#0x1d, LSL #32
71024df82c  bl 0x71032b9e40
71024df830  bl 0x71017982a0
71024df834  mov x18,x22
71024df838  b 0x71024e2c64
71024df83c  ldr x8,[x19, #0x8]
71024df840  ldr x8,[x8, #0x8]
71024df844  ldr w10,[x8, #0x4]
71024df848  ldr x9,[x19, #0x17f0]
71024df84c  orr w11,wzr,#0xffff
71024df850  cmp w10,w11
71024df854  b.eq 0x71024df864
71024df858  ldr w10,[x8, #0x20]
71024df85c  cmp w10,#0x0
71024df860  b.gt 0x71024e2c64
71024df864  orr w10,wzr,#0x7
71024df868  b 0x71024e0138
71024df86c  ldr x9,[x19, #0x38]
71024df870  cbnz x9,0x71024dfda4
71024df874  b 0x71024e2c64
71024df878  ldr x8,[x19, #0x8]
71024df87c  ldrsh w9,[x19, #0x17e4]
71024df880  mov w10,#0x1
71024df884  ldr x8,[x8, #0x8]
71024df888  sub w9,w9,w13
71024df88c  strb w10,[x8, #0x3e]
71024df890  bic w9,w9,w9, ASR #0x1f
71024df894  strb w10,[x8, #0x3c]
71024df898  str w9,[x8, #0x38]
71024df89c  b 0x71024e2c64
71024df8a0  mov w20,#0x55
71024df8a4  mov w0,w20
71024df8a8  mov x21,x18
71024df8ac  bl 0x710177a5c0
71024df8b0  mov w0,w20
71024df8b4  bl 0x710176b770
71024df8b8  adrp x20,0x710532f000
71024df8bc  ldr x8,[x20, #0x730]
71024df8c0  ldr x8,[x8, #0x8]
71024df8c4  ldr x0,[x8, #0x398]
71024df8c8  mov x1,#0xb2ec
71024df8cc  movk x1,#0x87ce, LSL #16
71024df8d0  movk x1,#0x1d, LSL #32
71024df8d4  bl 0x710328cf90
71024df8d8  bl 0x71017981d0
71024df8dc  ldr x8,[x20, #0x730]
71024df8e0  ldr x8,[x8, #0x8]
71024df8e4  ldr x0,[x8, #0x398]
71024df8e8  mov x1,#0x344d
71024df8ec  movk x1,#0x7a10, LSL #16
71024df8f0  movk x1,#0x22, LSL #32
71024df8f4  bl 0x710328cf90
71024df8f8  bl 0x71017981d0
71024df8fc  ldr x8,[x19, #0x8]
71024df900  ldr x9,[x8, #0x8]
71024df904  mov w8,#0x1
71024df908  strb w8,[x9]
71024df90c  ldr x9,[x19, #0x8]
71024df910  ldr x9,[x9, #0x8]
71024df914  ldrb w10,[x9, #0x28]
71024df918  mov x18,x21
71024df91c  cbnz w10,0x71024e2c64
71024df920  mov w10,#0x2
71024df924  str w10,[x9, #0x24]
71024df928  strb w8,[x9, #0x28]
71024df92c  b 0x71024e2c64
71024df930  ldr x8,[x19, #0x8]
71024df934  ldr x8,[x8, #0x8]
71024df938  ldr w10,[x8, #0x4]
71024df93c  ldr x9,[x19, #0x17f0]
71024df940  orr w11,wzr,#0xffff
71024df944  cmp w10,w11
71024df948  b.eq 0x71024df958
71024df94c  ldr w10,[x8, #0x20]
71024df950  cmp w10,#0x0
71024df954  b.gt 0x71024e2c64
71024df958  orr w10,wzr,#0xf
71024df95c  b 0x71024e0138
71024df960  ldrsh w8,[x19, #0x17e0]
71024df964  add w9,w13,#0x1
71024df968  cmp w9,w8
71024df96c  b.cc 0x71024e2c64
71024df970  add w8,w13,#0x2
71024df974  strh w8,[x19, #0x17e0]
71024df978  b 0x71024e2c64
71024df97c  ldr x8,[x19, #0x60]
71024df980  ldr x26,[x8, #0x8]
71024df984  adrp x8,0x710532f000
71024df988  ldr x8,[x8, #0x730]
71024df98c  ldr x28,[x8, #0x8]
71024df990  ldr x23,[x28, #0x168]
71024df994  ldr x9,[x23, #0x8]
71024df998  ldr x8,[x9, #0x20]
71024df99c  ldrb w10,[x8]
71024df9a0  cmp w10,#0xc
71024df9a4  b.ne 0x71024e18b8
71024df9a8  ldur w10,[x8, #0x1]
71024df9ac  subs w10,w10,#0x1
71024df9b0  b.lt 0x71024e18b8
71024df9b4  ldr x12,[x9, #0x48]
71024df9b8  ldr x9,[x9, #0x18]
71024df9bc  mov w11,wzr
71024df9c0  ldursw x14,[x8, #0x5]
71024df9c4  and x12,x12,#0xffffffffff
71024df9c8  ldp x13,x9,[x9, #0x20]
71024df9cc  add x14,x9,x14
71024df9d0  adrp x9,0x7104742000
71024df9d4  add x9,x9,#0xdbb
71024df9d8  add w15,w10,w11
71024df9dc  cmp w15,#0x0
71024df9e0  cinc w15,w15,lt
71024df9e4  asr w15,w15,#0x1
71024df9e8  add x16,x14,w15, SXTW  #0x3
71024df9ec  ldr w17,[x16]
71024df9f0  ldr x17,[x13, x17, LSL #0x3]
71024df9f4  cmp x17,x12
71024df9f8  b.eq 0x71024e18a8
71024df9fc  sub w16,w15,#0x1
71024dfa00  cmp x17,x12
71024dfa04  csel w10,w16,w10,hi
71024dfa08  csinc w11,w11,w15,hi
71024dfa0c  cmp w11,w10
71024dfa10  b.le 0x71024df9d8
71024dfa14  b 0x71024e18c0
71024dfa18  ldr x8,[x19, #0x20]
71024dfa1c  cbz x8,0x71024e2c64
71024dfa20  ldr x2,[x19, #0x17f0]
71024dfa24  tst x2,#0xffffffffff
71024dfa28  b.eq 0x71024e2c64
71024dfa2c  ldr x9,[x8, #0x8]
71024dfa30  cbnz x9,0x71024e0990
71024dfa34  b 0x71024e2c64
71024dfa38  ldr x20,[x19, #0x30]
71024dfa3c  cbnz x20,0x71024e0a64
71024dfa40  b 0x71024e2c64
71024dfa44  ldr x8,[x19, #0x8]
71024dfa48  ldr x8,[x8, #0x8]
71024dfa4c  ldr w9,[x8, #0x50]
71024dfa50  cmp w9,#0x1
71024dfa54  b.eq 0x71024e2c64
71024dfa58  mov w9,#0x1
71024dfa5c  str w9,[x8, #0x50]
71024dfa60  strb w9,[x8, #0x54]
71024dfa64  b 0x71024e2c64
71024dfa68  ldr x8,[x19, #0x8]
71024dfa6c  ldr x8,[x8, #0x8]
71024dfa70  ldr w10,[x8, #0x4]
71024dfa74  ldr x9,[x19, #0x17f0]
71024dfa78  orr w11,wzr,#0xffff
71024dfa7c  cmp w10,w11
71024dfa80  b.eq 0x71024dfa90
71024dfa84  ldr w10,[x8, #0x20]
71024dfa88  cmp w10,#0x0
71024dfa8c  b.gt 0x71024e2c64
71024dfa90  mov w10,#0x5
71024dfa94  b 0x71024e0138
71024dfa98  ldr x21,[x19, #0x30]
71024dfa9c  cbz x21,0x71024e2c64
71024dfaa0  ldr x8,[x19, #0x17f0]
71024dfaa4  tst x8,#0xffffffffff
71024dfaa8  b.ne 0x71024e0888
71024dfaac  b 0x71024e2c64
71024dfab0  mov w8,#0x1f9c
71024dfab4  strb wzr,[x19, x8, LSL ]
71024dfab8  b 0x71024e2c64
71024dfabc  adrp x8,0x710532a000
71024dfac0  ldr x8,[x8, #0x860]
71024dfac4  ldr x9,[x8]
71024dfac8  ldr w8,[x9, #0x1c]
71024dfacc  cmp w8,#0x2
71024dfad0  b.hi 0x71024e2c64
71024dfad4  ldr w9,[x9, #0x78]
71024dfad8  cmp w9,#0x14
71024dfadc  b.cs 0x71024e5790
71024dfae0  adrp x10,0x7105314000
71024dfae4  ldr x10,[x10, #0x510]
71024dfae8  ldr x10,[x10]
71024dfaec  ldr x10,[x10, #0x158]
71024dfaf0  ldr x10,[x10]
71024dfaf4  ldr x10,[x10]
71024dfaf8  mov w12,#0xd700
71024dfafc  movk w12,#0x3, LSL #16
71024dfb00  madd x8,x8,x12,x10
71024dfb04  mov w11,#0x84
71024dfb08  madd x8,x9,x11,x8
71024dfb0c  mov w9,#0xccb8
71024dfb10  movk w9,#0x3, LSL #16
71024dfb14  ldr w10,[x8, x9, LSL #0x0]
71024dfb18  sub w11,w10,#0x1
71024dfb1c  and w11,w11,#0xff
71024dfb20  tst w10,#0xff
71024dfb24  csel w10,wzr,w11,eq
71024dfb28  str w10,[x8, x9, LSL #0x0]
71024dfb2c  b 0x71024e2c64
71024dfb30  ldr x8,[x19, #0x8]
71024dfb34  ldr x8,[x8, #0x8]
71024dfb38  ldr w10,[x8, #0x4]
71024dfb3c  ldr x9,[x19, #0x17f0]
71024dfb40  orr w11,wzr,#0xffff
71024dfb44  cmp w10,w11
71024dfb48  b.eq 0x71024dfb58
71024dfb4c  ldr w10,[x8, #0x20]
71024dfb50  cmp w10,#0x0
71024dfb54  b.gt 0x71024e2c64
71024dfb58  mov w10,#0x2
71024dfb5c  b 0x71024e0138
71024dfb60  adrp x8,0x710532a000
71024dfb64  ldr x8,[x8, #0x860]
71024dfb68  ldr x8,[x8]
71024dfb6c  str wzr,[x8, #0x80]
71024dfb70  b 0x71024e2c64
71024dfb74  ldr x8,[x19, #0x8]
71024dfb78  ldr x8,[x8, #0x8]
71024dfb7c  ldr w10,[x8, #0x4]
71024dfb80  ldr x9,[x19, #0x17f0]
71024dfb84  orr w11,wzr,#0xffff
71024dfb88  cmp w10,w11
71024dfb8c  b.eq 0x71024dfb9c
71024dfb90  ldr w10,[x8, #0x20]
71024dfb94  cmp w10,#0x0
71024dfb98  b.gt 0x71024e2c64
71024dfb9c  mov w10,#0x11
71024dfba0  b 0x71024e0138
71024dfba4  ldr x8,[x19, #0x8]
71024dfba8  ldrsh w9,[x19, #0x17e4]
71024dfbac  mov w10,#0x4
71024dfbb0  ldr x8,[x8, #0x8]
71024dfbb4  strb w10,[x8, #0x2c]
71024dfbb8  sub w9,w9,w13
71024dfbbc  mov w10,#0x1
71024dfbc0  bic w9,w9,w9, ASR #0x1f
71024dfbc4  strh w10,[x8, #0x3c]
71024dfbc8  str wzr,[x8, #0x30]
71024dfbcc  stp w9,wzr,[x8, #0x34]
71024dfbd0  b 0x71024e2c64
71024dfbd4  ldr x8,[x19, #0x8]
71024dfbd8  ldrsh w9,[x19, #0x17e4]
71024dfbdc  sub w9,w9,w13
71024dfbe0  ldr x8,[x8, #0x8]
71024dfbe4  bic w9,w9,w9, ASR #0x1f
71024dfbe8  mov w10,#0x1
71024dfbec  strb wzr,[x8, #0x3e]
71024dfbf0  strb w10,[x8, #0x3c]
71024dfbf4  str w9,[x8, #0x34]
71024dfbf8  b 0x71024e2c64
71024dfbfc  ldr x8,[x19, #0x8]
71024dfc00  ldr x8,[x8, #0x8]
71024dfc04  ldr w10,[x8, #0x4]
71024dfc08  ldr x9,[x19, #0x17f0]
71024dfc0c  orr w11,wzr,#0xffff
71024dfc10  cmp w10,w11
71024dfc14  b.eq 0x71024dfc24
71024dfc18  ldr w10,[x8, #0x20]
71024dfc1c  cmp w10,#0x0
71024dfc20  b.gt 0x71024e2c64
71024dfc24  mov w10,#0x1
71024dfc28  str w10,[x8, #0x4]
71024dfc2c  b 0x71024e0140
71024dfc30  ldr x8,[x19, #0x8]
71024dfc34  ldr x8,[x8, #0x8]
71024dfc38  ldr w10,[x8, #0x4]
71024dfc3c  ldr x9,[x19, #0x17f0]
71024dfc40  orr w11,wzr,#0xffff
71024dfc44  cmp w10,w11
71024dfc48  b.eq 0x71024dfc58
71024dfc4c  ldr w10,[x8, #0x20]
71024dfc50  cmp w10,#0x0
71024dfc54  b.gt 0x71024e2c64
71024dfc58  mov w10,#0x9
71024dfc5c  b 0x71024e0138
71024dfc60  ldr x8,[x19, #0x8]
71024dfc64  ldr x8,[x8, #0x8]
71024dfc68  ldr w10,[x8, #0x4]
71024dfc6c  ldr x9,[x19, #0x17f0]
71024dfc70  orr w11,wzr,#0xffff
71024dfc74  cmp w10,w11
71024dfc78  b.eq 0x71024dfc88
71024dfc7c  ldr w10,[x8, #0x20]
71024dfc80  cmp w10,#0x0
71024dfc84  b.gt 0x71024e2c64
71024dfc88  mov w10,#0x10
71024dfc8c  b 0x71024e0138
71024dfc90  ldr x8,[x19, #0x8]
71024dfc94  ldr x8,[x8, #0x8]
71024dfc98  ldr w10,[x8, #0x4]
71024dfc9c  ldr x9,[x19, #0x17f0]
71024dfca0  orr w11,wzr,#0xffff
71024dfca4  cmp w10,w11
71024dfca8  b.eq 0x71024dfcb8
71024dfcac  ldr w10,[x8, #0x20]
71024dfcb0  cmp w10,#0x0
71024dfcb4  b.gt 0x71024e2c64
71024dfcb8  mov w10,#0x4
71024dfcbc  b 0x71024e0138
71024dfcc0  ldr x8,[x19, #0x8]
71024dfcc4  ldr x8,[x8, #0x8]
71024dfcc8  ldr w10,[x8, #0x4]
71024dfccc  ldr x9,[x19, #0x17f0]
71024dfcd0  orr w11,wzr,#0xffff
71024dfcd4  cmp w10,w11
71024dfcd8  b.eq 0x71024dfce8
71024dfcdc  ldr w10,[x8, #0x20]
71024dfce0  cmp w10,#0x0
71024dfce4  b.gt 0x71024e2c64
71024dfce8  orr w10,wzr,#0xc
71024dfcec  b 0x71024e0138
71024dfcf0  ldr x8,[x19, #0x8]
71024dfcf4  ldr x8,[x8, #0x8]
71024dfcf8  ldr w10,[x8, #0x4]
71024dfcfc  ldr x9,[x19, #0x17f0]
71024dfd00  orr w11,wzr,#0xffff
71024dfd04  cmp w10,w11
71024dfd08  b.eq 0x71024dfd18
71024dfd0c  ldr w10,[x8, #0x20]
71024dfd10  cmp w10,#0x0
71024dfd14  b.gt 0x71024e2c64
71024dfd18  orr w10,wzr,#0xe
71024dfd1c  b 0x71024e0138
71024dfd20  ldr x8,[x19, #0x17f0]
71024dfd24  tst x8,#0xffffffffff
71024dfd28  b.eq 0x71024e2c64
71024dfd2c  ldr x9,[x19, #0x48]
71024dfd30  ldr w10,[x9, #0x3208]
71024dfd34  cbz w10,0x71024e2c64
71024dfd38  mov w11,wzr
71024dfd3c  add x12,x9,w11, UXTW  #0x3
71024dfd40  ldr x12,[x12, #0x8]
71024dfd44  ldr x13,[x12, #0x70]
71024dfd48  eor x13,x13,x8
71024dfd4c  tst x13,#0xffffffffff
71024dfd50  b.eq 0x71024e13c4
71024dfd54  add w11,w11,#0x1
71024dfd58  cmp w11,w10
71024dfd5c  b.cc 0x71024dfd3c
71024dfd60  b 0x71024e2c64
71024dfd64  ldr x8,[x19, #0x8]
71024dfd68  ldr x8,[x8, #0x8]
71024dfd6c  ldr w9,[x8, #0x50]
71024dfd70  cbz w9,0x71024e2c64
71024dfd74  mov w9,#0x1
71024dfd78  str wzr,[x8, #0x50]
71024dfd7c  strb w9,[x8, #0x54]
71024dfd80  b 0x71024e2c64
71024dfd84  mov w8,#0x1f9a
71024dfd88  strb wzr,[x19, x8, LSL ]
71024dfd8c  b 0x71024e2c64
71024dfd90  ldr x9,[x19, #0x30]
71024dfd94  cbnz x9,0x71024dfda4
71024dfd98  b 0x71024e2c64
71024dfd9c  ldr x9,[x19, #0x20]
71024dfda0  cbz x9,0x71024e2c64
71024dfda4  ldr x8,[x19, #0x17f0]
71024dfda8  ands x10,x8,#0xffffffffff
71024dfdac  b.eq 0x71024e2c64
71024dfdb0  ldr x11,[x9, #0x8]
71024dfdb4  cbz x11,0x71024e2c64
71024dfdb8  ldrb w12,[x9, #0x60]
71024dfdbc  cbz w12,0x71024e2c64
71024dfdc0  ldrb w9,[x9, #0x61]
71024dfdc4  mov x12,#0x83e5
71024dfdc8  movk x12,#0x7dee, LSL #16
71024dfdcc  movk x12,#0x4, LSL #32
71024dfdd0  ldr x0,[x11, #0x120]
71024dfdd4  fmov s0,wzr
71024dfdd8  cmp x10,x12
71024dfddc  ccmp w9,#0x0,#0x4,eq
71024dfde0  mov x9,#0x5315
71024dfde4  movk x9,#0x46ef, LSL #16
71024dfde8  movk x9,#0xe, LSL #32
71024dfdec  csel x1,x9,x8,ne
71024dfdf0  ldr x8,[x0]
71024dfdf4  ldr x8,[x8, #0xe0]
71024dfdf8  fmov s1,0x3f800000
71024dfdfc  mov v2.16B,v0.16B
71024dfe00  mov w2,wzr
71024dfe04  mov w3,wzr
71024dfe08  mov w4,wzr
71024dfe0c  mov x20,x18
71024dfe10  blr x8
71024dfe14  mov x18,x20
71024dfe18  b 0x71024e2c64
71024dfe1c  ldr x20,[x19, #0x48]
71024dfe20  ldr w8,[x20, #0x3208]
71024dfe24  cbz w8,0x71024dfe64
71024dfe28  mov x21,xzr
71024dfe2c  add x22,x20,#0x8
71024dfe30  ldr x0,[x22, x21, LSL #0x3]
71024dfe34  ldrb w9,[x0, #0x25b]
71024dfe38  cbz w9,0x71024dfe54
71024dfe3c  mov w1,wzr
71024dfe40  strb wzr,[x0, #0x25b]
71024dfe44  mov x23,x18
71024dfe48  bl 0x7102508910
71024dfe4c  ldr w8,[x20, #0x3208]
71024dfe50  mov x18,x23
71024dfe54  add x21,x21,#0x1
71024dfe58  cmp x21,w8, UXTW 
71024dfe5c  b.cc 0x71024dfe30
71024dfe60  ldr x20,[x19, #0x48]
71024dfe64  mov x22,x18
71024dfe68  ldr x21,[x19, #0x50]
71024dfe6c  mov x0,x20
71024dfe70  mov x1,x21
71024dfe74  bl 0x710250b4f0
71024dfe78  ldr w8,[x21, #0x3208]
71024dfe7c  cbz w8,0x71024dff34
71024dfe80  mov x8,xzr
71024dfe84  add x9,x21,x8, LSL #0x3
71024dfe88  ldr x9,[x9, #0x8]
71024dfe8c  ldr x10,[x9, #0x28]
71024dfe90  ldr w11,[x10, #0x88]
71024dfe94  cmp w11,#0xd
71024dfe98  b.ne 0x71024dfed8
71024dfe9c  ldr w11,[x10, #0x168]
71024dfea0  cbz w11,0x71024dfed8
71024dfea4  ldr x13,[x9, #0x8]
71024dfea8  mov x12,xzr
71024dfeac  add x14,x10,#0x170
71024dfeb0  ldr x15,[x14, x12, LSL #0x3]
71024dfeb4  ldr x16,[x15, #0x8]
71024dfeb8  eor x16,x16,x13
71024dfebc  tst x16,#0xffffffffff
71024dfec0  b.eq 0x71024dfecc
71024dfec4  str x15,[x9, #0xa0]
71024dfec8  ldr w11,[x10, #0x168]
71024dfecc  add x12,x12,#0x1
71024dfed0  cmp x12,w11, UXTW 
71024dfed4  b.cc 0x71024dfeb0
71024dfed8  ldr x10,[x9, #0x30]
71024dfedc  ldr w11,[x10, #0x88]
71024dfee0  cmp w11,#0xd
71024dfee4  b.ne 0x71024dff24
71024dfee8  ldr w11,[x10, #0x168]
71024dfeec  cbz w11,0x71024dff24
71024dfef0  ldr x13,[x9, #0x8]
71024dfef4  mov x12,xzr
71024dfef8  add x14,x10,#0x170
71024dfefc  ldr x15,[x14, x12, LSL #0x3]
71024dff00  ldr x16,[x15, #0x8]
71024dff04  eor x16,x16,x13
71024dff08  tst x16,#0xffffffffff
71024dff0c  b.eq 0x71024dff18
71024dff10  str x15,[x9, #0x98]
71024dff14  ldr w11,[x10, #0x168]
71024dff18  add x12,x12,#0x1
71024dff1c  cmp x12,w11, UXTW 
71024dff20  b.cc 0x71024dfefc
71024dff24  ldr w9,[x21, #0x3208]
71024dff28  add x8,x8,#0x1
71024dff2c  cmp x8,x9
71024dff30  b.cc 0x71024dfe84
71024dff34  ldr w11,[x20, #0x3208]
71024dff38  cbz w11,0x71024dffdc
71024dff3c  mov x8,xzr
71024dff40  add x9,x20,x8, LSL #0x3
71024dff44  ldr x9,[x9, #0x8]
71024dff48  ldr w10,[x9, #0x168]
71024dff4c  cbz w10,0x71024dffd0
71024dff50  ldr x12,[x9, #0x70]
71024dff54  mov x11,xzr
71024dff58  add x13,x9,x11, LSL #0x3
71024dff5c  ldr x15,[x13, #0x170]
71024dff60  ldr x14,[x15, #0x30]
71024dff64  ldr x16,[x14, #0x70]
71024dff68  eor x16,x16,x12
71024dff6c  tst x16,#0xffffffffff
71024dff70  b.eq 0x71024dffac
71024dff74  add x15,x15,#0x98
71024dff78  ldr x15,[x15]
71024dff7c  cbz x15,0x71024dffbc
71024dff80  ldr x16,[x15, #0x30]
71024dff84  ldr x17,[x16, #0x70]
71024dff88  ldr x14,[x14, #0x70]
71024dff8c  eor x14,x14,x17
71024dff90  tst x14,#0xffffffffff
71024dff94  b.eq 0x71024dffac
71024dff98  add x15,x15,#0x98
71024dff9c  mov x14,x16
71024dffa0  ldr x15,[x15]
71024dffa4  cbnz x15,0x71024dff80
71024dffa8  b 0x71024dffbc
71024dffac  ldr x14,[x15, #0x28]
71024dffb0  add x15,x15,#0xa0
71024dffb4  ldr x15,[x15]
71024dffb8  cbnz x15,0x71024dff80
71024dffbc  add x11,x11,#0x1
71024dffc0  cmp x11,x10
71024dffc4  str x14,[x13, #0x1d0]
71024dffc8  b.ne 0x71024dff58
71024dffcc  ldr w11,[x20, #0x3208]
71024dffd0  add x8,x8,#0x1
71024dffd4  cmp x8,w11, UXTW 
71024dffd8  b.cc 0x71024dff40
71024dffdc  ldr x9,[x19, #0x18]
71024dffe0  ldr x8,[x19, #0x48]
71024dffe4  ldr x9,[x9, #0x428]
71024dffe8  ldr x0,[x9, #0x78]
71024dffec  ldr w9,[x8, #0x3208]
71024dfff0  cbz w9,0x71024e0018
71024dfff4  mov x9,xzr
71024dfff8  add x10,x8,#0x8
71024dfffc  orr w11,wzr,#0xffff
71024e0000  ldr x12,[x10, x9, LSL #0x3]
71024e0004  str w11,[x12, #0x230]
71024e0008  ldr w12,[x8, #0x3208]
71024e000c  add x9,x9,#0x1
71024e0010  cmp x9,x12
71024e0014  b.cc 0x71024e0000
71024e0018  mov w1,wzr
71024e001c  str wzr,[x0, #0x230]
71024e0020  bl 0x710250e310
71024e0024  mov x18,x22
71024e0028  b 0x71024e2c64
71024e002c  ldr x8,[x19, #0x8]
71024e0030  ldr x8,[x8, #0x8]
71024e0034  ldr w10,[x8, #0x4]
71024e0038  ldr x9,[x19, #0x17f0]
71024e003c  orr w11,wzr,#0xffff
71024e0040  cmp w10,w11
71024e0044  b.eq 0x71024e0054
71024e0048  ldr w10,[x8, #0x20]
71024e004c  cmp w10,#0x0
71024e0050  b.gt 0x71024e2c64
71024e0054  str wzr,[x8, #0x4]
71024e0058  b 0x71024e013c
71024e005c  ldr x8,[x19, #0x17f0]
71024e0060  tst x8,#0xffffffffff
71024e0064  b.eq 0x71024e2c64
71024e0068  ldr x20,[x19, #0x48]
71024e006c  ldr w9,[x20, #0x3208]
71024e0070  cbz w9,0x71024e2c64
71024e0074  mov w10,wzr
71024e0078  add x11,x20,w10, UXTW  #0x3
71024e007c  ldr x22,[x11, #0x8]
71024e0080  ldr x11,[x22, #0x70]
71024e0084  eor x11,x11,x8
71024e0088  tst x11,#0xffffffffff
71024e008c  b.eq 0x71024e13e0
71024e0090  add w10,w10,#0x1
71024e0094  cmp w10,w9
71024e0098  b.cc 0x71024e0078
71024e009c  b 0x71024e2c64
71024e00a0  ldr x8,[x19, #0x28]
71024e00a4  cbnz x8,0x71024e0270
71024e00a8  b 0x71024e2c64
71024e00ac  ldr x8,[x19, #0x28]
71024e00b0  cbnz x8,0x71024e00cc
71024e00b4  b 0x71024e2c64
71024e00b8  ldr x8,[x19, #0x20]
71024e00bc  cbnz x8,0x71024e0420
71024e00c0  b 0x71024e2c64
71024e00c4  ldr x8,[x19, #0x30]
71024e00c8  cbz x8,0x71024e2c64
71024e00cc  ldr x20,[x8, #0x8]
71024e00d0  ldr x0,[x20, #0x1d8]
71024e00d4  ldr x8,[x0]
71024e00d8  ldr x8,[x8, #0x288]
71024e00dc  mov w1,wzr
71024e00e0  mov x21,x18
71024e00e4  blr x8
71024e00e8  ldr x0,[x20, #0x1d8]
71024e00ec  ldr x8,[x0]
71024e00f0  ldr x8,[x8, #0x1a8]
71024e00f4  mov w1,wzr
71024e00f8  blr x8
71024e00fc  b 0x71024e2c60
71024e0100  mov w8,#0x1f9d
71024e0104  strb wzr,[x19, x8, LSL ]
71024e0108  b 0x71024e2c64
71024e010c  ldr x8,[x19, #0x8]
71024e0110  ldr x8,[x8, #0x8]
71024e0114  ldr w10,[x8, #0x4]
71024e0118  ldr x9,[x19, #0x17f0]
71024e011c  orr w11,wzr,#0xffff
71024e0120  cmp w10,w11
71024e0124  b.eq 0x71024e0134
71024e0128  ldr w10,[x8, #0x20]
71024e012c  cmp w10,#0x0
71024e0130  b.gt 0x71024e2c64
71024e0134  orr w10,wzr,#0x3
71024e0138  str w10,[x8, #0x4]
71024e013c  mov w10,#0x1
71024e0140  tst x9,#0xffffffffff
71024e0144  str w10,[x8, #0x20]
71024e0148  b.eq 0x71024e0158
71024e014c  stp xzr,xzr,[x8, #0x10]
71024e0150  str x9,[x8, #0x8]
71024e0154  b 0x71024e2c64
71024e0158  stp xzr,xzr,[x8, #0x10]
71024e015c  str xzr,[x8, #0x8]
71024e0160  b 0x71024e2c64
71024e0164  ldr x8,[x19, #0x10]
71024e0168  stp xzr,xzr,[x8, #0x120]
71024e016c  str wzr,[x8, #0x168]
71024e0170  b 0x71024e2c64
71024e0174  ldr x8,[x19, #0x17f0]
71024e0178  tst x8,#0xffffffffff
71024e017c  b.eq 0x71024e2c64
71024e0180  ldr x9,[sp, #0xb8]
71024e0184  mov x10,x8
71024e0188  ldr x8,[x9]
71024e018c  tst x8,#0xffffffffff
71024e0190  str x18,[sp, #0x28]
71024e0194  b.eq 0x71024e0f2c
71024e0198  ldr x8,[x20]
71024e019c  tst x8,#0xffffffffff
71024e01a0  b.eq 0x71024e20f8
71024e01a4  ldr x8,[x22]
71024e01a8  tst x8,#0xffffffffff
71024e01ac  b.eq 0x71024e2740
71024e01b0  ldr x8,[x21]
71024e01b4  tst x8,#0xffffffffff
71024e01b8  b.eq 0x71024e2a10
71024e01bc  ldr x8,[x28]
71024e01c0  tst x8,#0xffffffffff
71024e01c4  b.eq 0x71024e2bc8
71024e01c8  ldr x8,[x27]
71024e01cc  tst x8,#0xffffffffff
71024e01d0  b.eq 0x71024e2c04
71024e01d4  ldr x8,[x26]
71024e01d8  tst x8,#0xffffffffff
71024e01dc  b.eq 0x71024e2c30
71024e01e0  ldr x8,[x25]
71024e01e4  tst x8,#0xffffffffff
71024e01e8  b.eq 0x71024e4ad4
71024e01ec  ldr x8,[x24]
71024e01f0  tst x8,#0xffffffffff
71024e01f4  b.eq 0x71024e4c20
71024e01f8  ldr x8,[x23]
71024e01fc  ldr x18,[sp, #0x28]
71024e0200  tst x8,#0xffffffffff
71024e0204  b.ne 0x71024e2c64
71024e0208  mov w8,#0x9
71024e020c  mov x9,x23
71024e0210  mov x23,x8
71024e0214  b 0x71024e4c28
71024e0218  mov w8,#0x1f9c
71024e021c  b 0x71024e06c0
71024e0220  ldr x8,[x19, #0x18]
71024e0224  strb wzr,[x8, #0x452]
71024e0228  b 0x71024e2c64
71024e022c  ldr x8,[x19, #0x8]
71024e0230  ldr x8,[x8, #0x8]
71024e0234  ldrb w9,[x8, #0x28]
71024e0238  cbnz w9,0x71024e2c64
71024e023c  mov w9,#0x72
71024e0240  b 0x71024e0258
71024e0244  ldr x8,[x19, #0x8]
71024e0248  ldr x8,[x8, #0x8]
71024e024c  ldrb w9,[x8, #0x28]
71024e0250  cbnz w9,0x71024e2c64
71024e0254  mov w9,#0x71
71024e0258  str w9,[x8, #0x24]
71024e025c  mov w9,#0x1
71024e0260  strb w9,[x8, #0x28]
71024e0264  b 0x71024e2c64
71024e0268  ldr x8,[x19, #0x20]
71024e026c  cbz x8,0x71024e2c64
71024e0270  ldr x20,[x8, #0x8]
71024e0274  ldr x0,[x20, #0x1d8]
71024e0278  ldr x8,[x0]
71024e027c  ldr x8,[x8, #0x288]
71024e0280  mov w1,#0x1
71024e0284  mov x21,x18
71024e0288  blr x8
71024e028c  ldr x0,[x20, #0x1d8]
71024e0290  ldr x8,[x0]
71024e0294  ldr x8,[x8, #0x1a8]
71024e0298  mov w1,#0x1
71024e029c  blr x8
71024e02a0  b 0x71024e2c60
71024e02a4  mov w8,#0x1f9e
71024e02a8  b 0x71024e06c0
71024e02ac  ldr w11,[x19, #0x1f90]
71024e02b0  cbz w11,0x71024e2afc
71024e02b4  ubfx x8,x11,#0x19,#0x7
71024e02b8  cmp w8,#0x4
71024e02bc  b.hi 0x71024e2af8
71024e02c0  adrp x8,0x7105334000
71024e02c4  ldr x8,[x8, #0x948]
71024e02c8  lsr x9,x11,#0x18
71024e02cc  mov w10,#0x1b0
71024e02d0  madd x10,x9,x10,x8
71024e02d4  cbz x10,0x71024e2af8
71024e02d8  ldr w12,[x10]
71024e02dc  cmp w12,w11
71024e02e0  b.ne 0x71024e2af8
71024e02e4  mov w11,#0x1b0
71024e02e8  madd x11,x9,x11,x8
71024e02ec  orr w12,wzr,#0x3
71024e02f0  str w12,[x11, #0x4]
71024e02f4  ldr w11,[x11, #0xc]
71024e02f8  cmp w11,#0x2
71024e02fc  b.cs 0x71024e274c
71024e0300  mov w10,#0x1b0
71024e0304  madd x10,x9,x10,x8
71024e0308  ldr x11,[x8, #0x1168]
71024e030c  str x11,[x10, #0xa8]
71024e0310  ldr x11,[x8, #0x1178]
71024e0314  ldr x12,[x8, #0x1188]
71024e0318  str x12,[x10, #0xc8]
71024e031c  str x11,[x10, #0xb8]
71024e0320  ldr x11,[x8, #0x1198]
71024e0324  ldr x12,[x8, #0x11a8]
71024e0328  str x12,[x10, #0xe8]
71024e032c  str x11,[x10, #0xd8]
71024e0330  ldr x12,[x8, #0x11b8]
71024e0334  ldr x13,[x8, #0x11c8]
71024e0338  ldr w11,[x8, #0x11d0]
71024e033c  str x13,[x10, #0x108]
71024e0340  str x12,[x10, #0xf8]
71024e0344  ldr x12,[x8, #0x1160]
71024e0348  ldr x13,[x8, #0x1170]
71024e034c  str x13,[x10, #0xb0]
71024e0350  str x12,[x10, #0xa0]
71024e0354  ldr x12,[x8, #0x1180]
71024e0358  ldr x13,[x8, #0x1190]
71024e035c  str x13,[x10, #0xd0]
71024e0360  str x12,[x10, #0xc0]
71024e0364  ldr x12,[x8, #0x11a0]
71024e0368  ldr x13,[x8, #0x11b0]
71024e036c  str x13,[x10, #0xf0]
71024e0370  str x12,[x10, #0xe0]
71024e0374  ldr x12,[x8, #0x11c0]
71024e0378  str w11,[x10, #0x110]
71024e037c  str x12,[x10, #0x100]
71024e0380  adrp x11,0x7105230000
71024e0384  add x11,x11,#0x1b0
71024e0388  ldr x12,[x11, #0x8]
71024e038c  str x12,[x10, #0x128]
71024e0390  ldr x12,[x11, #0x18]
71024e0394  ldr x13,[x11, #0x28]
71024e0398  str x13,[x10, #0x148]
71024e039c  str x12,[x10, #0x138]
71024e03a0  ldr x12,[x11, #0x38]
71024e03a4  ldr x13,[x11, #0x48]
71024e03a8  str x13,[x10, #0x168]
71024e03ac  str x12,[x10, #0x158]
71024e03b0  ldr x13,[x11, #0x58]
71024e03b4  ldr x14,[x11, #0x68]
71024e03b8  ldr w12,[x11, #0x70]
71024e03bc  str x14,[x10, #0x188]
71024e03c0  str x13,[x10, #0x178]
71024e03c4  ldr x13,[x11]
71024e03c8  ldr x14,[x11, #0x10]
71024e03cc  str x14,[x10, #0x130]
71024e03d0  str x13,[x10, #0x120]
71024e03d4  ldr x13,[x11, #0x20]
71024e03d8  ldr x14,[x11, #0x30]
71024e03dc  str x14,[x10, #0x150]
71024e03e0  str x13,[x10, #0x140]
71024e03e4  ldr x13,[x11, #0x40]
71024e03e8  ldr x14,[x11, #0x50]
71024e03ec  str x14,[x10, #0x170]
71024e03f0  str x13,[x10, #0x160]
71024e03f4  ldr x11,[x11, #0x60]
71024e03f8  str w12,[x10, #0x190]
71024e03fc  str x11,[x10, #0x180]
71024e0400  mov w10,#0x1b0
71024e0404  madd x8,x9,x10,x8
71024e0408  str xzr,[x8, #0x10]
71024e040c  b 0x71024e2af8
71024e0410  mov w8,#0x1f96
71024e0414  b 0x71024e06c0
71024e0418  ldr x8,[x19, #0x28]
71024e041c  cbz x8,0x71024e2c64
71024e0420  ldr s0,[x19, #0x17f8]
71024e0424  scvtf s0,s0
71024e0428  ldr q1,[x8, #0x40]
71024e042c  mov v1.S[0x0],v0.S[0x0]
71024e0430  ldrsh w9,[x19, #0x17e4]
71024e0434  sub w9,w9,w13
71024e0438  cmp w9,#0x1
71024e043c  str q1,[x8, #0x40]
71024e0440  b.lt 0x71024e0cb8
71024e0444  ldr s1,[x8, #0x30]
71024e0448  fabd s0,s1,s0
71024e044c  scvtf s1,w9
71024e0450  fdiv s0,s0,s1
71024e0454  b 0x71024e0cc0
71024e0458  ldr x0,[x19, #0x20]
71024e045c  cbz x0,0x71024e2c64
71024e0460  ldr x8,[x19, #0x17f0]
71024e0464  tst x8,#0xffffffffff
71024e0468  b.eq 0x71024e2c64
71024e046c  ldr x9,[x19, #0x48]
71024e0470  ldr w10,[x9, #0x3208]
71024e0474  cbz w10,0x71024e2c64
71024e0478  mov w11,wzr
71024e047c  add x12,x9,w11, UXTW  #0x3
71024e0480  ldr x1,[x12, #0x8]
71024e0484  ldr x12,[x1, #0x70]
71024e0488  eor x12,x12,x8
71024e048c  tst x12,#0xffffffffff
71024e0490  b.eq 0x71024e0d80
71024e0494  add w11,w11,#0x1
71024e0498  cmp w11,w10
71024e049c  b.cc 0x71024e047c
71024e04a0  b 0x71024e2c64
71024e04a4  ldr x8,[x19, #0x18]
71024e04a8  ldr w22,[x8, #0x390]
71024e04ac  cmp w22,#0x1
71024e04b0  b.lt 0x71024e2c64
71024e04b4  adrp x8,0x7105334000
71024e04b8  ldr x8,[x8, #0x920]
71024e04bc  ldr x8,[x8]
71024e04c0  lsr x9,x22,#0x18
71024e04c4  orr w10,wzr,#0x300
71024e04c8  madd x20,x9,x10,x8
71024e04cc  mov x23,x20
71024e04d0  ldr w9,[x23, #0x4]!
71024e04d4  cmp w9,w22
71024e04d8  b.ne 0x71024e2c64
71024e04dc  cbz x20,0x71024e2c64
71024e04e0  mov w9,#0x9498
71024e04e4  movk w9,#0x1, LSL #16
71024e04e8  add x21,x8,x9
71024e04ec  mov x0,x21
71024e04f0  mov x24,x18
71024e04f4  bl 0x71039c19c0
71024e04f8  ldr w8,[x23]
71024e04fc  cmp w8,w22
71024e0500  b.ne 0x71024e0518
71024e0504  mov x0,x20
71024e0508  mov w1,wzr
71024e050c  mov w2,wzr
71024e0510  mov w3,wzr
71024e0514  bl 0x71035707d0
71024e0518  mov x0,x21
71024e051c  bl 0x71039c19d0
71024e0520  mov x18,x24
71024e0524  b 0x71024e2c64
71024e0528  ldr x8,[x19, #0x1f80]
71024e052c  ldr x21,[x8, #0x80]
71024e0530  ldrb w8,[x21, #0x113]
71024e0534  cbz w8,0x71024e0634
71024e0538  ldr w8,[x21, #0x98]
71024e053c  cmp w8,#0x3
71024e0540  b.ne 0x71024e0634
71024e0544  ldr x8,[x21, #0x28]
71024e0548  ldr x20,[x8, #0x8]
71024e054c  cbz x20,0x71024e0634
71024e0550  ldrb w9,[x8, #0x10]
71024e0554  mov x24,x18
71024e0558  cbz w9,0x71024e061c
71024e055c  ldr x8,[x8]
71024e0560  ldr x23,[x8, #0x80]
71024e0564  add x22,x8,#0x88
71024e0568  cmp x23,x22
71024e056c  b.eq 0x71024e061c
71024e0570  ldr x0,[x23, #0x68]
71024e0574  ldr x8,[x0]
71024e0578  ldr x8,[x8, #0x148]
71024e057c  blr x8
71024e0580  tbz w0,#0x0,0x71024e05c0
71024e0584  ldr x8,[x20]
71024e0588  ldr x1,[x23, #0x68]
71024e058c  mov x0,x20
71024e0590  ldr x8,[x8, #0x120]
71024e0594  blr x8
71024e0598  tbz w0,#0x0,0x71024e05c0
71024e059c  ldr x0,[x23, #0x68]
71024e05a0  ldr x8,[x0]
71024e05a4  ldr x8,[x8, #0x178]
71024e05a8  blr x8
71024e05ac  ldr x0,[x23, #0x68]
71024e05b0  ldr x8,[x0]
71024e05b4  ldr x8,[x8, #0x140]
71024e05b8  mov w1,wzr
71024e05bc  blr x8
71024e05c0  ldr x8,[x23, #0x8]
71024e05c4  cbz x8,0x71024e05d8
71024e05c8  mov x23,x8
71024e05cc  ldr x8,[x8]
71024e05d0  cbnz x8,0x71024e05c8
71024e05d4  b 0x71024e060c
71024e05d8  mov x8,x23
71024e05dc  ldr x9,[x8, #0x10]!
71024e05e0  ldr x10,[x9]
71024e05e4  cmp x10,x23
71024e05e8  b.eq 0x71024e0608
71024e05ec  ldr x9,[x8]
71024e05f0  mov x8,x9
71024e05f4  ldr x23,[x8, #0x10]!
71024e05f8  ldr x10,[x23]
71024e05fc  cmp x10,x9
71024e0600  b.ne 0x71024e05ec
71024e0604  b 0x71024e060c
71024e0608  mov x23,x9
71024e060c  cmp x23,x22
71024e0610  b.ne 0x71024e0570
71024e0614  ldr x8,[x21, #0x28]
71024e0618  ldr x20,[x8, #0x8]
71024e061c  ldr x8,[x20]
71024e0620  ldr x8,[x8, #0x168]
71024e0624  fmov s0,0x3f800000
71024e0628  mov x0,x20
71024e062c  blr x8
71024e0630  mov x18,x24
71024e0634  strb wzr,[x21, #0x113]
71024e0638  b 0x71024e2c64
71024e063c  ldr x8,[x19, #0x1f80]
71024e0640  ldrsh w9,[x19, #0x17e4]
71024e0644  sub w1,w9,w13
71024e0648  ldr x0,[x8, #0x80]
71024e064c  mov w2,#0x9
71024e0650  b 0x71024e0c60
71024e0654  ldr x20,[x19, #0x20]
71024e0658  cbz x20,0x71024e2c64
71024e065c  ldr x0,[x20, #0x8]
71024e0660  cbz x0,0x71024e2c64
71024e0664  ldrb w8,[x20, #0x62]
71024e0668  cbz w8,0x71024e0688
71024e066c  ldr x8,[x0]
71024e0670  ldr x8,[x8, #0x540]
71024e0674  mov w1,wzr
71024e0678  mov x21,x18
71024e067c  blr x8
71024e0680  mov x18,x21
71024e0684  strb wzr,[x20, #0x62]
71024e0688  mov x0,x20
71024e068c  ldr x8,[x0, #0x20]!
71024e0690  cbz x8,0x71024e06ac
71024e0694  ldrb w8,[x20, #0x63]
71024e0698  cbz w8,0x71024e06ac
71024e069c  mov x21,x18
71024e06a0  bl 0x71035598f0
71024e06a4  mov x18,x21
71024e06a8  strb wzr,[x20, #0x63]
71024e06ac  strb wzr,[x20, #0x60]
71024e06b0  b 0x71024e2c64
71024e06b4  mov w8,#0x1f97
71024e06b8  b 0x71024e06c0
71024e06bc  mov w8,#0x1f9a
71024e06c0  mov w9,#0x1
71024e06c4  strb w9,[x19, x8, LSL ]
71024e06c8  b 0x71024e2c64
71024e06cc  ldr x1,[x19, #0x17f0]
71024e06d0  tst x1,#0xffffffffff
71024e06d4  b.eq 0x71024e2c64
71024e06d8  ldr x0,[x19, #0x18]
71024e06dc  mov x20,x18
71024e06e0  bl 0x7102507720
71024e06e4  mov x18,x20
71024e06e8  b 0x71024e2c64
71024e06ec  ldrsh w8,[x19, #0x17e4]
71024e06f0  sub w8,w8,w13
71024e06f4  bic w20,w8,w8, ASR #0x1f
71024e06f8  scvtf s0,w20
71024e06fc  ldr x0,[x19, #0x10]
71024e0700  mov w1,#0x5
71024e0704  mov x21,x18
71024e0708  bl 0x71024ef480
71024e070c  adrp x8,0x710532a000
71024e0710  ldr x8,[x8, #0x860]
71024e0714  ldr x0,[x8]
71024e0718  cmp w20,#0x1e
71024e071c  b.le 0x71024e0d5c
71024e0720  mov x1,#0xb136
71024e0724  movk x1,#0x539b, LSL #16
71024e0728  movk x1,#0x12, LSL #32
71024e072c  b 0x71024e09fc
71024e0730  ldr x8,[x19, #0x17f0]
71024e0734  tst x8,#0xffffffffff
71024e0738  b.eq 0x71024e2c64
71024e073c  ldr x9,[x19, #0x48]
71024e0740  ldr w10,[x9, #0x3208]
71024e0744  cbz w10,0x71024e2c64
71024e0748  mov w11,wzr
71024e074c  add x12,x9,w11, UXTW  #0x3
71024e0750  ldr x22,[x12, #0x8]
71024e0754  ldr x12,[x22, #0x70]
71024e0758  eor x12,x12,x8
71024e075c  tst x12,#0xffffffffff
71024e0760  b.eq 0x71024e15e8
71024e0764  add w11,w11,#0x1
71024e0768  cmp w11,w10
71024e076c  b.cc 0x71024e074c
71024e0770  b 0x71024e2c64
71024e0774  mov w8,#0x17f0
71024e0778  add x20,x19,x8
71024e077c  b 0x71024e26c0
71024e0780  ldr x8,[x19, #0x20]
71024e0784  cbnz x8,0x71024e0808
71024e0788  b 0x71024e2c64
71024e078c  mov w8,#0x1f97
71024e0790  strb wzr,[x19, x8, LSL ]
71024e0794  b 0x71024e2c64
71024e0798  ldr x8,[x19, #0x1f80]
71024e079c  ldrsh w9,[x19, #0x17e4]
71024e07a0  sub w1,w9,w13
71024e07a4  ldr x0,[x8, #0x80]
71024e07a8  mov w2,#0xa
71024e07ac  b 0x71024e0c60
71024e07b0  ldr x8,[x19, #0x28]
71024e07b4  cbnz x8,0x71024e0808
71024e07b8  b 0x71024e2c64
71024e07bc  ldr x9,[x19, #0x17f0]
71024e07c0  tst x9,#0xffffffffff
71024e07c4  b.eq 0x71024e2c64
71024e07c8  ldr x10,[x19, #0x50]
71024e07cc  ldr w11,[x10, #0x3208]
71024e07d0  cbz w11,0x71024e2c64
71024e07d4  mov w12,wzr
71024e07d8  add x8,x10,w12, UXTW  #0x3
71024e07dc  ldr x8,[x8, #0x8]
71024e07e0  ldr x13,[x8, #0x8]
71024e07e4  eor x13,x13,x9
71024e07e8  tst x13,#0xffffffffff
71024e07ec  b.eq 0x71024e17f4
71024e07f0  add w12,w12,#0x1
71024e07f4  cmp w12,w11
71024e07f8  b.cc 0x71024e07d8
71024e07fc  b 0x71024e2c64
71024e0800  ldr x8,[x19, #0x38]
71024e0804  cbz x8,0x71024e2c64
71024e0808  ldr s0,[x19, #0x17f8]
71024e080c  scvtf s1,s0
71024e0810  ldr q2,[x8, #0x40]
71024e0814  mov v2.S[0x2],v1.S[0x0]
71024e0818  fmov s0,wzr
71024e081c  mov v2.S[0x3],v0.S[0x0]
71024e0820  ldrsh w9,[x19, #0x17e4]
71024e0824  sub w9,w9,w13
71024e0828  cmp w9,#0x1
71024e082c  str q2,[x8, #0x40]
71024e0830  b.lt 0x71024e0cd0
71024e0834  ldr s2,[x8, #0x38]
71024e0838  fabd s1,s2,s1
71024e083c  scvtf s2,w9
71024e0840  fdiv s1,s1,s2
71024e0844  ldr q2,[x8, #0x50]
71024e0848  mov v2.S[0x2],v1.S[0x0]
71024e084c  mov v2.S[0x3],v0.S[0x0]
71024e0850  str q2,[x8, #0x50]
71024e0854  b 0x71024e2c64
71024e0858  ldr x8,[x19, #0x8]
71024e085c  ldrsh w9,[x19, #0x17e4]
71024e0860  mov w10,#0x1
71024e0864  ldr x8,[x8, #0x8]
71024e0868  strb w10,[x8, #0x2c]
71024e086c  sub w9,w9,w13
71024e0870  b 0x71024dfbc0
71024e0874  ldr x21,[x19, #0x28]
71024e0878  cbz x21,0x71024e2c64
71024e087c  ldr x8,[x19, #0x17f0]
71024e0880  tst x8,#0xffffffffff
71024e0884  b.eq 0x71024e2c64
71024e0888  ldr w22,[x21, #0x18]
71024e088c  cbz w22,0x71024e2c64
71024e0890  adrp x8,0x7105334000
71024e0894  ldr x8,[x8, #0x920]
71024e0898  ldr x23,[x8]
71024e089c  mov w8,#0x9498
71024e08a0  movk w8,#0x1, LSL #16
71024e08a4  add x20,x23,x8
71024e08a8  mov x0,x20
71024e08ac  mov x24,x18
71024e08b0  bl 0x71039c19c0
71024e08b4  cmp w22,#0x1
71024e08b8  b.lt 0x71024e08e8
71024e08bc  lsr x8,x22,#0x18
71024e08c0  orr w9,wzr,#0x300
71024e08c4  madd x9,x8,x9,x23
71024e08c8  cbz x9,0x71024e08e8
71024e08cc  ldr w9,[x9, #0x4]
71024e08d0  cmp w9,w22
71024e08d4  b.ne 0x71024e08e8
71024e08d8  orr w9,wzr,#0x300
71024e08dc  madd x8,x8,x9,x23
71024e08e0  mov w9,#0x1
71024e08e4  strb w9,[x8, #0x2d8]
71024e08e8  mov x0,x20
71024e08ec  bl 0x71039c19d0
71024e08f0  str wzr,[x21, #0x18]
71024e08f4  mov x18,x24
71024e08f8  b 0x71024e2c64
71024e08fc  ldr x20,[x19, #0x20]
71024e0900  cbnz x20,0x71024e0a64
71024e0904  b 0x71024e2c64
71024e0908  ldr x0,[x19, #0x30]
71024e090c  cbz x0,0x71024e2c64
71024e0910  ldr x8,[x19, #0x17f0]
71024e0914  tst x8,#0xffffffffff
71024e0918  b.eq 0x71024e2c64
71024e091c  ldr x9,[x19, #0x48]
71024e0920  ldr w10,[x9, #0x3208]
71024e0924  cbz w10,0x71024e2c64
71024e0928  mov w11,wzr
71024e092c  add x12,x9,w11, UXTW  #0x3
71024e0930  ldr x1,[x12, #0x8]
71024e0934  ldr x12,[x1, #0x70]
71024e0938  eor x12,x12,x8
71024e093c  tst x12,#0xffffffffff
71024e0940  b.eq 0x71024e0d80
71024e0944  add w11,w11,#0x1
71024e0948  cmp w11,w10
71024e094c  b.cc 0x71024e092c
71024e0950  b 0x71024e2c64
71024e0954  ldr x8,[x19, #0x30]
71024e0958  cbz x8,0x71024e2c64
71024e095c  ldr x2,[x19, #0x17f0]
71024e0960  tst x2,#0xffffffffff
71024e0964  b.eq 0x71024e2c64
71024e0968  ldr x9,[x8, #0x8]
71024e096c  cbnz x9,0x71024e0990
71024e0970  b 0x71024e2c64
71024e0974  ldr x8,[x19, #0x38]
71024e0978  cbz x8,0x71024e2c64
71024e097c  ldr x2,[x19, #0x17f0]
71024e0980  tst x2,#0xffffffffff
71024e0984  b.eq 0x71024e2c64
71024e0988  ldr x9,[x8, #0x8]
71024e098c  cbz x9,0x71024e2c64
71024e0990  ldrb w8,[x8, #0x60]
71024e0994  cbz w8,0x71024e2c64
71024e0998  ldr x0,[x9, #0x220]
71024e099c  ldr x8,[x0]
71024e09a0  ldr x8,[x8, #0x78]
71024e09a4  mov w3,#0xffffffff
71024e09a8  mov w1,#0x1
71024e09ac  mov x20,x18
71024e09b0  blr x8
71024e09b4  mov x18,x20
71024e09b8  b 0x71024e2c64
71024e09bc  ldrsh w8,[x19, #0x17e4]
71024e09c0  sub w8,w8,w13
71024e09c4  bic w20,w8,w8, ASR #0x1f
71024e09c8  scvtf s0,w20
71024e09cc  ldr x0,[x19, #0x10]
71024e09d0  orr w1,wzr,#0x7
71024e09d4  mov x21,x18
71024e09d8  bl 0x71024ef480
71024e09dc  adrp x8,0x710532a000
71024e09e0  ldr x8,[x8, #0x860]
71024e09e4  ldr x0,[x8]
71024e09e8  cmp w20,#0x1e
71024e09ec  b.le 0x71024e0d68
71024e09f0  mov x1,#0x7d08
71024e09f4  movk x1,#0x455d, LSL #16
71024e09f8  movk x1,#0x10, LSL #32
71024e09fc  mov w2,w20
71024e0a00  b 0x71024e0d78
71024e0a04  ldr x20,[x19, #0x38]
71024e0a08  cbnz x20,0x71024e0a64
71024e0a0c  b 0x71024e2c64
71024e0a10  ldr x0,[x19, #0x38]
71024e0a14  cbz x0,0x71024e2c64
71024e0a18  ldr x8,[x19, #0x17f0]
71024e0a1c  tst x8,#0xffffffffff
71024e0a20  b.eq 0x71024e2c64
71024e0a24  ldr x9,[x19, #0x48]
71024e0a28  ldr w10,[x9, #0x3208]
71024e0a2c  cbz w10,0x71024e2c64
71024e0a30  mov w11,wzr
71024e0a34  add x12,x9,w11, UXTW  #0x3
71024e0a38  ldr x1,[x12, #0x8]
71024e0a3c  ldr x12,[x1, #0x70]
71024e0a40  eor x12,x12,x8
71024e0a44  tst x12,#0xffffffffff
71024e0a48  b.eq 0x71024e0d80
71024e0a4c  add w11,w11,#0x1
71024e0a50  cmp w11,w10
71024e0a54  b.cc 0x71024e0a34
71024e0a58  b 0x71024e2c64
71024e0a5c  ldr x20,[x19, #0x28]
71024e0a60  cbz x20,0x71024e2c64
71024e0a64  ldr x21,[x19, #0x17f0]
71024e0a68  tst x21,#0xffffffffff
71024e0a6c  b.eq 0x71024e2c64
71024e0a70  ldr w23,[x20, #0x18]
71024e0a74  mov x25,x18
71024e0a78  cbz w23,0x71024e0adc
71024e0a7c  adrp x8,0x7105334000
71024e0a80  ldr x8,[x8, #0x920]
71024e0a84  ldr x24,[x8]
71024e0a88  mov w8,#0x9498
71024e0a8c  movk w8,#0x1, LSL #16
71024e0a90  add x22,x24,x8
71024e0a94  mov x0,x22
71024e0a98  bl 0x71039c19c0
71024e0a9c  cmp w23,#0x1
71024e0aa0  b.lt 0x71024e0ad0
71024e0aa4  lsr x8,x23,#0x18
71024e0aa8  orr w9,wzr,#0x300
71024e0aac  madd x9,x8,x9,x24
71024e0ab0  cbz x9,0x71024e0ad0
71024e0ab4  ldr w9,[x9, #0x4]
71024e0ab8  cmp w9,w23
71024e0abc  b.ne 0x71024e0ad0
71024e0ac0  orr w9,wzr,#0x300
71024e0ac4  madd x8,x8,x9,x24
71024e0ac8  mov w9,#0x1
71024e0acc  strb w9,[x8, #0x2d8]
71024e0ad0  mov x0,x22
71024e0ad4  bl 0x71039c19d0
71024e0ad8  str wzr,[x20, #0x18]
71024e0adc  adrp x8,0x710532a000
71024e0ae0  ldr x8,[x8, #0x860]
71024e0ae4  ldr x8,[x8]
71024e0ae8  mov w9,#0xf3d7
71024e0aec  movk w9,#0x5, LSL #16
71024e0af0  ldrb w8,[x8, x9, LSL ]
71024e0af4  cbz w8,0x71024e0cfc
71024e0af8  mov w0,wzr
71024e0afc  b 0x71024e0d48
71024e0b00  ldr x8,[x19, #0x1f80]
71024e0b04  ldrsh w9,[x19, #0x17e4]
71024e0b08  sub w1,w9,w13
71024e0b0c  ldr x0,[x8, #0x80]
71024e0b10  mov w2,#0x8
71024e0b14  b 0x71024e0c60
71024e0b18  ldr x8,[x19, #0x8]
71024e0b1c  ldr x8,[x8, #0x8]
71024e0b20  ldr w8,[x8, #0x4]
71024e0b24  cmp w8,#0x3
71024e0b28  mov w8,#0xb
71024e0b2c  cinc w2,w8,cs
71024e0b30  ldr x8,[x19, #0x1f80]
71024e0b34  ldr x0,[x8, #0x80]
71024e0b38  mov w1,wzr
71024e0b3c  b 0x71024e0c60
71024e0b40  ldrsh w8,[x19, #0x17e4]
71024e0b44  sub w20,w8,w13
71024e0b48  ldrb w8,[x0, #0xb]
71024e0b4c  cbz w8,0x71024e0be8
71024e0b50  adrp x8,0x710532f000
71024e0b54  ldr x8,[x8, #0x840]
71024e0b58  ldr x8,[x8, #0x8]
71024e0b5c  ldr x8,[x8, #0xc0]
71024e0b60  ldr x22,[x8, #0x80]
71024e0b64  ldr w8,[x22, #0x8]
71024e0b68  cmn w8,#0x1
71024e0b6c  b.eq 0x71024e0be4
71024e0b70  ldr x21,[x22, #0x18]
71024e0b74  mov w8,#0xffffffff
71024e0b78  str w8,[x22, #0x8]
71024e0b7c  cbz x21,0x71024e0ba4
71024e0b80  mov x24,x0
71024e0b84  mov x0,x21
71024e0b88  str xzr,[x22, #0x18]
71024e0b8c  mov x23,x18
71024e0b90  bl 0x7103375760
71024e0b94  mov x0,x21
71024e0b98  bl 0x710392eb40
71024e0b9c  mov x0,x24
71024e0ba0  mov x18,x23
71024e0ba4  ldr x21,[x22, #0x10]
71024e0ba8  cbz x21,0x71024e0be4
71024e0bac  str xzr,[x22, #0x10]
71024e0bb0  ldr x22,[x21]
71024e0bb4  mov x24,x0
71024e0bb8  mov x23,x18
71024e0bbc  str xzr,[x21]
71024e0bc0  cbz x22,0x71024e0bd4
71024e0bc4  mov x0,x22
71024e0bc8  bl 0x7103773770
71024e0bcc  mov x0,x22
71024e0bd0  bl 0x710392eb40
71024e0bd4  mov x0,x21
71024e0bd8  bl 0x710392eb40
71024e0bdc  mov x18,x23
71024e0be0  mov x0,x24
71024e0be4  strb wzr,[x0, #0xb]
71024e0be8  ldr x8,[x19, #0x1f80]
71024e0bec  ldr x0,[x8, #0x80]
71024e0bf0  mov w1,w20
71024e0bf4  mov w2,wzr
71024e0bf8  mov x21,x18
71024e0bfc  bl 0x7101e89d40
71024e0c00  b 0x71024e0c68
71024e0c04  ldrsh w8,[x19, #0x17e4]
71024e0c08  sub w8,w8,w13
71024e0c0c  bic w8,w8,w8, ASR #0x1f
71024e0c10  scvtf s0,w8
71024e0c14  ldr x0,[x19, #0x10]
71024e0c18  mov w1,#0x9
71024e0c1c  mov x20,x18
71024e0c20  bl 0x71024ef480
71024e0c24  adrp x8,0x710532a000
71024e0c28  ldr x8,[x8, #0x860]
71024e0c2c  ldr x0,[x8]
71024e0c30  mov x1,#0xfbe8
71024e0c34  movk x1,#0x3615, LSL #16
71024e0c38  movk x1,#0x17, LSL #32
71024e0c3c  mov w2,wzr
71024e0c40  bl 0x71024d3d10
71024e0c44  mov x18,x20
71024e0c48  b 0x71024e2c64
71024e0c4c  ldr x8,[x19, #0x1f80]
71024e0c50  ldrsh w9,[x19, #0x17e4]
71024e0c54  sub w1,w9,w13
71024e0c58  ldr x0,[x8, #0x80]
71024e0c5c  mov w2,#0x1
71024e0c60  mov x21,x18
71024e0c64  bl 0x7101e88540
71024e0c68  ldr x0,[x19, #0x1f80]
71024e0c6c  ldr x20,[x0, #0x80]
71024e0c70  ldrb w8,[x20, #0x110]
71024e0c74  cbnz w8,0x71024e2c5c
71024e0c78  ldr w2,[x20, #0xa0]
71024e0c7c  ldr x8,[x20, #0x8]
71024e0c80  cmp w2,#0x500, LSL #12
71024e0c84  b.lt 0x71024e0c90
71024e0c88  mov w1,#0x9
71024e0c8c  b 0x71024e2c48
71024e0c90  cmp w2,#0x250, LSL #12
71024e0c94  b.lt 0x71024e0cec
71024e0c98  orr w1,wzr,#0x7
71024e0c9c  b 0x71024e2c48
71024e0ca0  adrp x9,0x7104472000
71024e0ca4  ldr s0,[x9, #0x58c]
71024e0ca8  ldr q1,[x8, #0x50]
71024e0cac  mov v1.S[0x1],v0.S[0x0]
71024e0cb0  str q1,[x8, #0x50]
71024e0cb4  b 0x71024e2c64
71024e0cb8  adrp x9,0x7104472000
71024e0cbc  ldr s0,[x9, #0x58c]
71024e0cc0  ldr q1,[x8, #0x50]
71024e0cc4  mov v1.S[0x0],v0.S[0x0]
71024e0cc8  str q1,[x8, #0x50]
71024e0ccc  b 0x71024e2c64
71024e0cd0  adrp x9,0x7104467000
71024e0cd4  ldr q0,[x8, #0x50]
71024e0cd8  ldr q1,[x9, #0xfc0]
71024e0cdc  ext v0.16B,v1.16B,v0.16B,0x8
71024e0ce0  ext v0.16B,v0.16B,v0.16B,0x8
71024e0ce4  str q0,[x8, #0x50]
71024e0ce8  b 0x71024e2c64
71024e0cec  cmp w2,#0x200, LSL #12
71024e0cf0  b.lt 0x71024e0d94
71024e0cf4  mov w1,#0x5
71024e0cf8  b 0x71024e2c48
71024e0cfc  movi v0.2D,#0x0
71024e0d00  sub x8,x29,#0xc0
71024e0d04  mov w7,#0xffffffff
71024e0d08  str q0,[x8]
71024e0d0c  adrp x8,0x7104466000
71024e0d10  orr w2,wzr,#0x1800000
71024e0d14  add x3,sp,#0x160
71024e0d18  str q0,[sp, #0x160]
71024e0d1c  ldr q0,[x8, #0x2b0]
71024e0d20  adrp x8,0x7105334000
71024e0d24  ldr x8,[x8, #0x920]
71024e0d28  str q0,[sp, #0x140]
71024e0d2c  ldr x0,[x8]
71024e0d30  sub x4,x29,#0xc0
71024e0d34  add x5,sp,#0x140
71024e0d38  mov x1,x21
71024e0d3c  mov w6,wzr
71024e0d40  str wzr,[sp]
71024e0d44  bl 0x7103563430
71024e0d48  str w0,[x20, #0x18]
71024e0d4c  mov x0,x20
71024e0d50  bl 0x71024edf10
71024e0d54  mov x18,x25
71024e0d58  b 0x71024e2c64
71024e0d5c  mov x1,#0x509b
71024e0d60  movk x1,#0x7fff, LSL #16
71024e0d64  b 0x71024e0d70
71024e0d68  mov x1,#0x600d
71024e0d6c  movk x1,#0x8f8, LSL #16
71024e0d70  movk x1,#0x13, LSL #32
71024e0d74  mov w2,wzr
71024e0d78  bl 0x71024d3d10
71024e0d7c  b 0x71024e2c60
71024e0d80  cbz x1,0x71024e2c64
71024e0d84  mov x20,x18
71024e0d88  bl 0x71024edaf0
71024e0d8c  mov x18,x20
71024e0d90  b 0x71024e2c64
71024e0d94  cmp w2,#0x150, LSL #12
71024e0d98  b.lt 0x71024e0f34
71024e0d9c  orr w1,wzr,#0x6
71024e0da0  b 0x71024e2c48
71024e0da4  add x0,sp,#0x160
71024e0da8  mov x1,x18
71024e0dac  mov x27,x18
71024e0db0  bl 0x710250ad70
71024e0db4  ldp x9,x8,[sp, #0x198]
71024e0db8  ldr x10,[sp, #0x190]
71024e0dbc  stp x9,x8,[x29, #-0xb0]
71024e0dc0  ldr x8,[sp, #0x188]
71024e0dc4  b 0x71024e12b8
71024e0dc8  ldr x20,[x10, #0x8]
71024e0dcc  ldr x8,[x20, #0x560]
71024e0dd0  ldr x0,[x8, #0x80]
71024e0dd4  ldr w8,[x0, #0x116c]
71024e0dd8  cmp w8,#0x2
71024e0ddc  b.ne 0x71024e2c64
71024e0de0  ldr x8,[x19, #0x48]
71024e0de4  ldr x22,[x19, #0x18]
71024e0de8  mov x25,x18
71024e0dec  ldr w23,[x8, #0x3208]
71024e0df0  cbz w23,0x71024e0e20
71024e0df4  ldr x21,[x19, #0x58]
71024e0df8  add x24,x8,#0x8
71024e0dfc  ldr x1,[x24], #0x8
71024e0e00  mov x0,x20
71024e0e04  mov x2,x21
71024e0e08  mov w3,wzr
71024e0e0c  bl 0x71024fc200
71024e0e10  subs x23,x23,#0x1
71024e0e14  b.ne 0x71024e0dfc
71024e0e18  ldr x8,[x20, #0x560]
71024e0e1c  ldr x0,[x8, #0x80]
71024e0e20  ldr x8,[x22, #0x428]
71024e0e24  ldr q0,[x8, #0x2160]
71024e0e28  mov w1,wzr
71024e0e2c  mov w2,wzr
71024e0e30  bl 0x7101e59d50
71024e0e34  mov x18,x25
71024e0e38  b 0x71024e2c64
71024e0e3c  mov w8,#0x1
71024e0e40  strb w8,[x9, #0x5d8]
71024e0e44  b 0x71024e2c64
71024e0e48  mov x18,x27
71024e0e4c  cbz x20,0x71024e2c64
71024e0e50  adrp x8,0x710532a000
71024e0e54  ldr x8,[x8, #0x868]
71024e0e58  ldr x10,[x8]
71024e0e5c  sub x8,x29,#0xc0
71024e0e60  ldr x9,[x20, #0xd8]
71024e0e64  stur xzr,[x8, #0x24]
71024e0e68  stp xzr,xzr,[sp, #0x190]
71024e0e6c  stur xzr,[x8, #0x1c]
71024e0e70  stp xzr,xzr,[sp, #0x180]
71024e0e74  stur xzr,[x8, #0x14]
71024e0e78  stp xzr,xzr,[sp, #0x170]
71024e0e7c  tst x9,#0xffffffffff
71024e0e80  stur xzr,[x8, #0xc]
71024e0e84  stur xzr,[x8, #0x4]
71024e0e88  str wzr,[sp, #0x140]
71024e0e8c  stp xzr,xzr,[sp, #0x160]
71024e0e90  ldr x8,[x10, #0x3a0]
71024e0e94  ldr x10,[x10, #0x3a8]
71024e0e98  b.eq 0x71024e27dc
71024e0e9c  cmp x8,x10
71024e0ea0  b.eq 0x71024e5078
71024e0ea4  ldr x11,[x8]
71024e0ea8  eor x11,x11,x9
71024e0eac  tst x11,#0xffffffffff
71024e0eb0  b.eq 0x71024e2810
71024e0eb4  add x8,x8,#0xb8
71024e0eb8  cmp x10,x8
71024e0ebc  b.ne 0x71024e0ea4
71024e0ec0  b 0x71024e5078
71024e0ec4  mov w1,#0x1
71024e0ec8  mov w2,#0x1
71024e0ecc  mov x0,x20
71024e0ed0  bl 0x710337ae10
71024e0ed4  cmp w23,#0x2
71024e0ed8  mov x18,x24
71024e0edc  b.hi 0x71024e2c64
71024e0ee0  and w8,w21,#0xff
71024e0ee4  cmp w8,#0x1f
71024e0ee8  b.hi 0x71024e2c64
71024e0eec  mov w8,#0x1
71024e0ef0  lsl w21,w8,w21
71024e0ef4  ldr x8,[x22]
71024e0ef8  ldr x8,[x8]
71024e0efc  mov w9,#0xd700
71024e0f00  movk w9,#0x3, LSL #16
71024e0f04  madd x8,x23,x9,x8
71024e0f08  mov w9,#0xcc00
71024e0f0c  movk w9,#0x3, LSL #16
71024e0f10  ldr w10,[x8, x9, LSL #0x0]
71024e0f14  orr w10,w10,w21
71024e0f18  str w10,[x8, x9, LSL #0x0]
71024e0f1c  b 0x71024e2c64
71024e0f20  mov x21,x18
71024e0f24  orr w2,wzr,#0x6
71024e0f28  b 0x71024e2a50
71024e0f2c  mov x23,xzr
71024e0f30  b 0x71024e4c28
71024e0f34  cmp w2,#0x100, LSL #12
71024e0f38  b.lt 0x71024e234c
71024e0f3c  mov w1,#0x4
71024e0f40  b 0x71024e2c48
71024e0f44  cbz x8,0x71024e2c64
71024e0f48  ldr x9,[sp, #0xa0]
71024e0f4c  ldr x9,[x9]
71024e0f50  ldr w10,[x9, #0x21c8]
71024e0f54  mov x20,x18
71024e0f58  cbz w10,0x71024e52e8
71024e0f5c  ldr x9,[sp, #0x98]
71024e0f60  ldr x9,[x9]
71024e0f64  ldr w10,[x9, #0x21c8]
71024e0f68  cbz w10,0x71024e2be4
71024e0f6c  ldr x9,[sp, #0x88]
71024e0f70  ldr x9,[x9]
71024e0f74  ldr w10,[x9, #0x21c8]
71024e0f78  cbz w10,0x71024e2c10
71024e0f7c  ldr x9,[sp, #0x80]
71024e0f80  ldr x9,[x9]
71024e0f84  ldr w10,[x9, #0x21c8]
71024e0f88  cbz w10,0x71024e4ac4
71024e0f8c  ldr x9,[sp, #0x70]
71024e0f90  ldr x9,[x9]
71024e0f94  ldr w10,[x9, #0x21c8]
71024e0f98  cbz w10,0x71024e4af0
71024e0f9c  ldr x9,[sp, #0x68]
71024e0fa0  ldr x9,[x9]
71024e0fa4  ldr w10,[x9, #0x21c8]
71024e0fa8  cbz w10,0x71024e5080
71024e0fac  ldr x9,[sp, #0x60]
71024e0fb0  ldr x9,[x9]
71024e0fb4  ldr w10,[x9, #0x21c8]
71024e0fb8  cbz w10,0x71024e51c8
71024e0fbc  ldr x9,[sp, #0x50]
71024e0fc0  ldr x9,[x9]
71024e0fc4  ldr w10,[x9, #0x21c8]
71024e0fc8  cbz w10,0x71024e51e8
71024e0fcc  ldr x9,[sp, #0x48]
71024e0fd0  ldr x9,[x9]
71024e0fd4  ldr w10,[x9, #0x21c8]
71024e0fd8  cbz w10,0x71024e52e0
71024e0fdc  ldr x9,[sp, #0x38]
71024e0fe0  ldr x9,[x9]
71024e0fe4  ldr w10,[x9, #0x21c8]
71024e0fe8  mov x18,x20
71024e0fec  cbnz w10,0x71024e2c64
71024e0ff0  ldr x10,[sp, #0x38]
71024e0ff4  b 0x71024e52e4
71024e0ff8  cbz x22,0x71024e2c64
71024e0ffc  ldrb w8,[x22, #0x25b]
71024e1000  cbnz w8,0x71024e2c64
71024e1004  mov x0,x22
71024e1008  mov x23,x18
71024e100c  bl 0x71025087d0
71024e1010  ldr w8,[x22, #0x248]
71024e1014  and w8,w8,#0xfffffffe
71024e1018  cmp w8,#0x2
71024e101c  b.eq 0x71024e102c
71024e1020  mov w8,#0x2
71024e1024  str wzr,[x22, #0x238]
71024e1028  str w8,[x22, #0x248]
71024e102c  ldp x20,x21,[x19, #0x48]
71024e1030  ldrb w8,[x22, #0x25c]
71024e1034  cbnz w8,0x71024e1060
71024e1038  ldr x8,[x22, #0xe0]
71024e103c  cbnz x8,0x71024e1060
71024e1040  ldr x8,[x22, #0xe8]
71024e1044  cbnz x8,0x71024e1060
71024e1048  ldr x8,[x22, #0xf0]
71024e104c  cbnz x8,0x71024e1060
71024e1050  ldr x8,[x22, #0xf8]
71024e1054  cbnz x8,0x71024e1060
71024e1058  ldr x8,[x22, #0x100]
71024e105c  cbz x8,0x71024e11d0
71024e1060  mov x0,x20
71024e1064  mov x1,x21
71024e1068  bl 0x710250b4f0
71024e106c  ldr w8,[x21, #0x3208]
71024e1070  cbz w8,0x71024e1128
71024e1074  mov x8,xzr
71024e1078  add x9,x21,x8, LSL #0x3
71024e107c  ldr x9,[x9, #0x8]
71024e1080  ldr x10,[x9, #0x28]
71024e1084  ldr w11,[x10, #0x88]
71024e1088  cmp w11,#0xd
71024e108c  b.ne 0x71024e10cc
71024e1090  ldr w11,[x10, #0x168]
71024e1094  cbz w11,0x71024e10cc
71024e1098  ldr x13,[x9, #0x8]
71024e109c  mov x12,xzr
71024e10a0  add x14,x10,#0x170
71024e10a4  ldr x15,[x14, x12, LSL #0x3]
71024e10a8  ldr x16,[x15, #0x8]
71024e10ac  eor x16,x16,x13
71024e10b0  tst x16,#0xffffffffff
71024e10b4  b.eq 0x71024e10c0
71024e10b8  str x15,[x9, #0xa0]
71024e10bc  ldr w11,[x10, #0x168]
71024e10c0  add x12,x12,#0x1
71024e10c4  cmp x12,w11, UXTW 
71024e10c8  b.cc 0x71024e10a4
71024e10cc  ldr x10,[x9, #0x30]
71024e10d0  ldr w11,[x10, #0x88]
71024e10d4  cmp w11,#0xd
71024e10d8  b.ne 0x71024e1118
71024e10dc  ldr w11,[x10, #0x168]
71024e10e0  cbz w11,0x71024e1118
71024e10e4  ldr x13,[x9, #0x8]
71024e10e8  mov x12,xzr
71024e10ec  add x14,x10,#0x170
71024e10f0  ldr x15,[x14, x12, LSL #0x3]
71024e10f4  ldr x16,[x15, #0x8]
71024e10f8  eor x16,x16,x13
71024e10fc  tst x16,#0xffffffffff
71024e1100  b.eq 0x71024e110c
71024e1104  str x15,[x9, #0x98]
71024e1108  ldr w11,[x10, #0x168]
71024e110c  add x12,x12,#0x1
71024e1110  cmp x12,w11, UXTW 
71024e1114  b.cc 0x71024e10f0
71024e1118  ldr w9,[x21, #0x3208]
71024e111c  add x8,x8,#0x1
71024e1120  cmp x8,x9
71024e1124  b.cc 0x71024e1078
71024e1128  ldr w11,[x20, #0x3208]
71024e112c  cbz w11,0x71024e11d0
71024e1130  mov x8,xzr
71024e1134  add x9,x20,x8, LSL #0x3
71024e1138  ldr x9,[x9, #0x8]
71024e113c  ldr w10,[x9, #0x168]
71024e1140  cbz w10,0x71024e11c4
71024e1144  ldr x12,[x9, #0x70]
71024e1148  mov x11,xzr
71024e114c  add x13,x9,x11, LSL #0x3
71024e1150  ldr x15,[x13, #0x170]
71024e1154  ldr x14,[x15, #0x30]
71024e1158  ldr x16,[x14, #0x70]
71024e115c  eor x16,x16,x12
71024e1160  tst x16,#0xffffffffff
71024e1164  b.eq 0x71024e11a0
71024e1168  add x15,x15,#0x98
71024e116c  ldr x15,[x15]
71024e1170  cbz x15,0x71024e11b0
71024e1174  ldr x16,[x15, #0x30]
71024e1178  ldr x17,[x16, #0x70]
71024e117c  ldr x14,[x14, #0x70]
71024e1180  eor x14,x14,x17
71024e1184  tst x14,#0xffffffffff
71024e1188  b.eq 0x71024e11a0
71024e118c  add x15,x15,#0x98
71024e1190  mov x14,x16
71024e1194  ldr x15,[x15]
71024e1198  cbnz x15,0x71024e1174
71024e119c  b 0x71024e11b0
71024e11a0  ldr x14,[x15, #0x28]
71024e11a4  add x15,x15,#0xa0
71024e11a8  ldr x15,[x15]
71024e11ac  cbnz x15,0x71024e1174
71024e11b0  add x11,x11,#0x1
71024e11b4  cmp x11,x10
71024e11b8  str x14,[x13, #0x1d0]
71024e11bc  b.ne 0x71024e114c
71024e11c0  ldr w11,[x20, #0x3208]
71024e11c4  add x8,x8,#0x1
71024e11c8  cmp x8,w11, UXTW 
71024e11cc  b.cc 0x71024e1134
71024e11d0  ldr x9,[x19, #0x18]
71024e11d4  ldr x8,[x19, #0x48]
71024e11d8  ldr x9,[x9, #0x428]
71024e11dc  ldr x0,[x9, #0x78]
71024e11e0  ldr w9,[x8, #0x3208]
71024e11e4  cbz w9,0x71024e17e0
71024e11e8  mov x9,xzr
71024e11ec  add x10,x8,#0x8
71024e11f0  orr w11,wzr,#0xffff
71024e11f4  ldr x12,[x10, x9, LSL #0x3]
71024e11f8  str w11,[x12, #0x230]
71024e11fc  ldr w12,[x8, #0x3208]
71024e1200  add x9,x9,#0x1
71024e1204  cmp x9,x12
71024e1208  b.cc 0x71024e11f4
71024e120c  b 0x71024e17e0
71024e1210  cbz x1,0x71024e2c64
71024e1214  ldr x8,[x19, #0x18]
71024e1218  ldr x20,[x8, #0x428]
71024e121c  ldr x2,[x20, #0x78]
71024e1220  fmov s0,wzr
71024e1224  mov x0,x20
71024e1228  mov x21,x18
71024e122c  bl 0x71024ff5b0
71024e1230  ldr x8,[x20, #0x88]
71024e1234  ldr w9,[x8, #0x88]
71024e1238  cmp w9,#0x9
71024e123c  b.ne 0x71024e1244
71024e1240  str x8,[x20, #0x80]
71024e1244  ldr x8,[x19, #0x18]
71024e1248  str wzr,[x8, #0x438]
71024e124c  mov x18,x21
71024e1250  b 0x71024e2c64
71024e1254  ldr x2,[x8, #0x8]
71024e1258  and x10,x2,#-0x100000000000000
71024e125c  mov x11,#-0x3f00000000000000
71024e1260  and x9,x2,#0xffffffffff
71024e1264  cmp x10,x11
71024e1268  ccmp x9,#0x0,#0x4,eq
71024e126c  b.eq 0x71024e12c0
71024e1270  ldr x22,[x8, #0x10]
71024e1274  ldr w21,[x8, #0x18]
71024e1278  adrp x8,0x710532f000
71024e127c  ldr x8,[x8, #0x730]
71024e1280  add x0,sp,#0x160
71024e1284  ldr x8,[x8, #0x8]
71024e1288  add x1,x8,#0x2f0
71024e128c  bl 0x71032933e0
71024e1290  tst x22,#0xffffffffff
71024e1294  b.eq 0x71024e129c
71024e1298  str x22,[sp, #0x170]
71024e129c  cmp w21,#0x1
71024e12a0  b.lt 0x71024e12a8
71024e12a4  str w21,[sp, #0x178]
71024e12a8  ldp x9,x8,[sp, #0x170]
71024e12ac  ldr x10,[sp, #0x168]
71024e12b0  stp x9,x8,[x29, #-0xb0]
71024e12b4  ldr x8,[sp, #0x160]
71024e12b8  stur x10,[x29, #-0xb8]
71024e12bc  stur x8,[x29, #-0xc0]
71024e12c0  adrp x24,0x710532f000
71024e12c4  ldr x8,[x24, #0x830]
71024e12c8  str xzr,[sp, #0x160]
71024e12cc  stp xzr,xzr,[sp, #0x168]
71024e12d0  ldr x1,[x8, #0x8]
71024e12d4  mov w3,#0xffffffff
71024e12d8  add x0,sp,#0x140
71024e12dc  sub x2,x29,#0xc0
71024e12e0  add x4,sp,#0x160
71024e12e4  bl 0x71032fd260
71024e12e8  ldp x1,x23,[sp, #0x140]
71024e12ec  cmp x1,x23
71024e12f0  b.ne 0x71024e2414
71024e12f4  adrp x8,0x710532a000
71024e12f8  ldr x8,[x8, #0x868]
71024e12fc  ldr x9,[x8]
71024e1300  ldr x8,[x9, #0x400]
71024e1304  ldr x9,[x9, #0x408]
71024e1308  cmp x8,x9
71024e130c  b.eq 0x71024e1338
71024e1310  mov x10,#0xac84
71024e1314  movk x10,#0xa6d0, LSL #16
71024e1318  movk x10,#0xe, LSL #32
71024e131c  ldr x11,[x8]
71024e1320  and x11,x11,#0xffffffffff
71024e1324  cmp x11,x10
71024e1328  b.eq 0x71024e2288
71024e132c  add x8,x8,#0x20
71024e1330  cmp x9,x8
71024e1334  b.ne 0x71024e131c
71024e1338  mov w21,wzr
71024e133c  mov x22,xzr
71024e1340  b 0x71024e2290
71024e1344  cbz x12,0x71024e2c64
71024e1348  mov x20,x18
71024e134c  mov w11,wzr
71024e1350  add x12,x9,w11, UXTW  #0x3
71024e1354  ldr x0,[x12, #0x8]
71024e1358  ldr x12,[x0, #0x8]
71024e135c  eor x12,x12,x8
71024e1360  tst x12,#0xffffffffff
71024e1364  b.eq 0x71024e1378
71024e1368  add w11,w11,#0x1
71024e136c  cmp w11,w10
71024e1370  b.cc 0x71024e1350
71024e1374  mov x0,xzr
71024e1378  ldrb w8,[x0, #0x167]
71024e137c  mov x18,x20
71024e1380  cbnz w8,0x71024e2c64
71024e1384  mov w8,#0x1
71024e1388  strb w8,[x0, #0x167]
71024e138c  ldr x8,[x0, #0xe8]
71024e1390  cbz x8,0x71024e2c64
71024e1394  mov w8,#0x2
71024e1398  str w8,[x0, #0x138]
71024e139c  str wzr,[x0, #0x140]
71024e13a0  bl 0x71024e9c40
71024e13a4  mov x18,x20
71024e13a8  b 0x71024e2c64
71024e13ac  cbz x0,0x71024e2c64
71024e13b0  ldr x2,[x19, #0x18]
71024e13b4  mov x20,x18
71024e13b8  bl 0x710250e380
71024e13bc  mov x18,x20
71024e13c0  b 0x71024e2c64
71024e13c4  cbz x12,0x71024e2c64
71024e13c8  ldr x9,[x19, #0x8]
71024e13cc  ldr x9,[x9, #0x8]
71024e13d0  mov w10,#0x1
71024e13d4  str w10,[x9, #0x40]
71024e13d8  str x8,[x9, #0x48]
71024e13dc  b 0x71024e2c64
71024e13e0  cbz x22,0x71024e2c64
71024e13e4  ldrb w8,[x22, #0x25b]
71024e13e8  mov x23,x18
71024e13ec  cbz w8,0x71024e1404
71024e13f0  mov w1,#0x2
71024e13f4  mov x0,x22
71024e13f8  strb wzr,[x22, #0x25b]
71024e13fc  bl 0x7102508910
71024e1400  ldr x20,[x19, #0x48]
71024e1404  ldr x21,[x19, #0x50]
71024e1408  ldrb w8,[x22, #0x25c]
71024e140c  cbnz w8,0x71024e1438
71024e1410  ldr x8,[x22, #0xe0]
71024e1414  cbnz x8,0x71024e1438
71024e1418  ldr x8,[x22, #0xe8]
71024e141c  cbnz x8,0x71024e1438
71024e1420  ldr x8,[x22, #0xf0]
71024e1424  cbnz x8,0x71024e1438
71024e1428  ldr x8,[x22, #0xf8]
71024e142c  cbnz x8,0x71024e1438
71024e1430  ldr x8,[x22, #0x100]
71024e1434  cbz x8,0x71024e15a8
71024e1438  mov x0,x20
71024e143c  mov x1,x21
71024e1440  bl 0x710250b4f0
71024e1444  ldr w8,[x21, #0x3208]
71024e1448  cbz w8,0x71024e1500
71024e144c  mov x8,xzr
71024e1450  add x9,x21,x8, LSL #0x3
71024e1454  ldr x9,[x9, #0x8]
71024e1458  ldr x10,[x9, #0x28]
71024e145c  ldr w11,[x10, #0x88]
71024e1460  cmp w11,#0xd
71024e1464  b.ne 0x71024e14a4
71024e1468  ldr w11,[x10, #0x168]
71024e146c  cbz w11,0x71024e14a4
71024e1470  ldr x13,[x9, #0x8]
71024e1474  mov x12,xzr
71024e1478  add x14,x10,#0x170
71024e147c  ldr x15,[x14, x12, LSL #0x3]
71024e1480  ldr x16,[x15, #0x8]
71024e1484  eor x16,x16,x13
71024e1488  tst x16,#0xffffffffff
71024e148c  b.eq 0x71024e1498
71024e1490  str x15,[x9, #0xa0]
71024e1494  ldr w11,[x10, #0x168]
71024e1498  add x12,x12,#0x1
71024e149c  cmp x12,w11, UXTW 
71024e14a0  b.cc 0x71024e147c
71024e14a4  ldr x10,[x9, #0x30]
71024e14a8  ldr w11,[x10, #0x88]
71024e14ac  cmp w11,#0xd
71024e14b0  b.ne 0x71024e14f0
71024e14b4  ldr w11,[x10, #0x168]
71024e14b8  cbz w11,0x71024e14f0
71024e14bc  ldr x13,[x9, #0x8]
71024e14c0  mov x12,xzr
71024e14c4  add x14,x10,#0x170
71024e14c8  ldr x15,[x14, x12, LSL #0x3]
71024e14cc  ldr x16,[x15, #0x8]
71024e14d0  eor x16,x16,x13
71024e14d4  tst x16,#0xffffffffff
71024e14d8  b.eq 0x71024e14e4
71024e14dc  str x15,[x9, #0x98]
71024e14e0  ldr w11,[x10, #0x168]
71024e14e4  add x12,x12,#0x1
71024e14e8  cmp x12,w11, UXTW 
71024e14ec  b.cc 0x71024e14c8
71024e14f0  ldr w9,[x21, #0x3208]
71024e14f4  add x8,x8,#0x1
71024e14f8  cmp x8,x9
71024e14fc  b.cc 0x71024e1450
71024e1500  ldr w11,[x20, #0x3208]
71024e1504  cbz w11,0x71024e15a8
71024e1508  mov x8,xzr
71024e150c  add x9,x20,x8, LSL #0x3
71024e1510  ldr x9,[x9, #0x8]
71024e1514  ldr w10,[x9, #0x168]
71024e1518  cbz w10,0x71024e159c
71024e151c  ldr x12,[x9, #0x70]
71024e1520  mov x11,xzr
71024e1524  add x13,x9,x11, LSL #0x3
71024e1528  ldr x15,[x13, #0x170]
71024e152c  ldr x14,[x15, #0x30]
71024e1530  ldr x16,[x14, #0x70]
71024e1534  eor x16,x16,x12
71024e1538  tst x16,#0xffffffffff
71024e153c  b.eq 0x71024e1578
71024e1540  add x15,x15,#0x98
71024e1544  ldr x15,[x15]
71024e1548  cbz x15,0x71024e1588
71024e154c  ldr x16,[x15, #0x30]
71024e1550  ldr x17,[x16, #0x70]
71024e1554  ldr x14,[x14, #0x70]
71024e1558  eor x14,x14,x17
71024e155c  tst x14,#0xffffffffff
71024e1560  b.eq 0x71024e1578
71024e1564  add x15,x15,#0x98
71024e1568  mov x14,x16
71024e156c  ldr x15,[x15]
71024e1570  cbnz x15,0x71024e154c
71024e1574  b 0x71024e1588
71024e1578  ldr x14,[x15, #0x28]
71024e157c  add x15,x15,#0xa0
71024e1580  ldr x15,[x15]
71024e1584  cbnz x15,0x71024e154c
71024e1588  add x11,x11,#0x1
71024e158c  cmp x11,x10
71024e1590  str x14,[x13, #0x1d0]
71024e1594  b.ne 0x71024e1524
71024e1598  ldr w11,[x20, #0x3208]
71024e159c  add x8,x8,#0x1
71024e15a0  cmp x8,w11, UXTW 
71024e15a4  b.cc 0x71024e150c
71024e15a8  ldr x9,[x19, #0x18]
71024e15ac  ldr x8,[x19, #0x48]
71024e15b0  ldr x9,[x9, #0x428]
71024e15b4  ldr x0,[x9, #0x78]
71024e15b8  ldr w9,[x8, #0x3208]
71024e15bc  cbz w9,0x71024e17e0
71024e15c0  mov x9,xzr
71024e15c4  add x10,x8,#0x8
71024e15c8  orr w11,wzr,#0xffff
71024e15cc  ldr x12,[x10, x9, LSL #0x3]
71024e15d0  str w11,[x12, #0x230]
71024e15d4  ldr w12,[x8, #0x3208]
71024e15d8  add x9,x9,#0x1
71024e15dc  cmp x9,x12
71024e15e0  b.cc 0x71024e15cc
71024e15e4  b 0x71024e17e0
71024e15e8  cbz x22,0x71024e2c64
71024e15ec  ldrb w8,[x22, #0x25b]
71024e15f0  cbnz w8,0x71024e2c64
71024e15f4  mov x0,x22
71024e15f8  mov x23,x18
71024e15fc  bl 0x71025087d0
71024e1600  ldp x20,x21,[x19, #0x48]
71024e1604  ldrb w8,[x22, #0x25c]
71024e1608  cbnz w8,0x71024e1634
71024e160c  ldr x8,[x22, #0xe0]
71024e1610  cbnz x8,0x71024e1634
71024e1614  ldr x8,[x22, #0xe8]
71024e1618  cbnz x8,0x71024e1634
71024e161c  ldr x8,[x22, #0xf0]
71024e1620  cbnz x8,0x71024e1634
71024e1624  ldr x8,[x22, #0xf8]
71024e1628  cbnz x8,0x71024e1634
71024e162c  ldr x8,[x22, #0x100]
71024e1630  cbz x8,0x71024e17a4
71024e1634  mov x0,x20
71024e1638  mov x1,x21
71024e163c  bl 0x710250b4f0
71024e1640  ldr w8,[x21, #0x3208]
71024e1644  cbz w8,0x71024e16fc
71024e1648  mov x8,xzr
71024e164c  add x9,x21,x8, LSL #0x3
71024e1650  ldr x9,[x9, #0x8]
71024e1654  ldr x10,[x9, #0x28]
71024e1658  ldr w11,[x10, #0x88]
71024e165c  cmp w11,#0xd
71024e1660  b.ne 0x71024e16a0
71024e1664  ldr w11,[x10, #0x168]
71024e1668  cbz w11,0x71024e16a0
71024e166c  ldr x13,[x9, #0x8]
71024e1670  mov x12,xzr
71024e1674  add x14,x10,#0x170
71024e1678  ldr x15,[x14, x12, LSL #0x3]
71024e167c  ldr x16,[x15, #0x8]
71024e1680  eor x16,x16,x13
71024e1684  tst x16,#0xffffffffff
71024e1688  b.eq 0x71024e1694
71024e168c  str x15,[x9, #0xa0]
71024e1690  ldr w11,[x10, #0x168]
71024e1694  add x12,x12,#0x1
71024e1698  cmp x12,w11, UXTW 
71024e169c  b.cc 0x71024e1678
71024e16a0  ldr x10,[x9, #0x30]
71024e16a4  ldr w11,[x10, #0x88]
71024e16a8  cmp w11,#0xd
71024e16ac  b.ne 0x71024e16ec
71024e16b0  ldr w11,[x10, #0x168]
71024e16b4  cbz w11,0x71024e16ec
71024e16b8  ldr x13,[x9, #0x8]
71024e16bc  mov x12,xzr
71024e16c0  add x14,x10,#0x170
71024e16c4  ldr x15,[x14, x12, LSL #0x3]
71024e16c8  ldr x16,[x15, #0x8]
71024e16cc  eor x16,x16,x13
71024e16d0  tst x16,#0xffffffffff
71024e16d4  b.eq 0x71024e16e0
71024e16d8  str x15,[x9, #0x98]
71024e16dc  ldr w11,[x10, #0x168]
71024e16e0  add x12,x12,#0x1
71024e16e4  cmp x12,w11, UXTW 
71024e16e8  b.cc 0x71024e16c4
71024e16ec  ldr w9,[x21, #0x3208]
71024e16f0  add x8,x8,#0x1
71024e16f4  cmp x8,x9
71024e16f8  b.cc 0x71024e164c
71024e16fc  ldr w11,[x20, #0x3208]
71024e1700  cbz w11,0x71024e17a4
71024e1704  mov x8,xzr
71024e1708  add x9,x20,x8, LSL #0x3
71024e170c  ldr x9,[x9, #0x8]
71024e1710  ldr w10,[x9, #0x168]
71024e1714  cbz w10,0x71024e1798
71024e1718  ldr x12,[x9, #0x70]
71024e171c  mov x11,xzr
71024e1720  add x13,x9,x11, LSL #0x3
71024e1724  ldr x15,[x13, #0x170]
71024e1728  ldr x14,[x15, #0x30]
71024e172c  ldr x16,[x14, #0x70]
71024e1730  eor x16,x16,x12
71024e1734  tst x16,#0xffffffffff
71024e1738  b.eq 0x71024e1774
71024e173c  add x15,x15,#0x98
71024e1740  ldr x15,[x15]
71024e1744  cbz x15,0x71024e1784
71024e1748  ldr x16,[x15, #0x30]
71024e174c  ldr x17,[x16, #0x70]
71024e1750  ldr x14,[x14, #0x70]
71024e1754  eor x14,x14,x17
71024e1758  tst x14,#0xffffffffff
71024e175c  b.eq 0x71024e1774
71024e1760  add x15,x15,#0x98
71024e1764  mov x14,x16
71024e1768  ldr x15,[x15]
71024e176c  cbnz x15,0x71024e1748
71024e1770  b 0x71024e1784
71024e1774  ldr x14,[x15, #0x28]
71024e1778  add x15,x15,#0xa0
71024e177c  ldr x15,[x15]
71024e1780  cbnz x15,0x71024e1748
71024e1784  add x11,x11,#0x1
71024e1788  cmp x11,x10
71024e178c  str x14,[x13, #0x1d0]
71024e1790  b.ne 0x71024e1720
71024e1794  ldr w11,[x20, #0x3208]
71024e1798  add x8,x8,#0x1
71024e179c  cmp x8,w11, UXTW 
71024e17a0  b.cc 0x71024e1708
71024e17a4  ldr x9,[x19, #0x18]
71024e17a8  ldr x8,[x19, #0x48]
71024e17ac  ldr x9,[x9, #0x428]
71024e17b0  ldr x0,[x9, #0x78]
71024e17b4  ldr w9,[x8, #0x3208]
71024e17b8  cbz w9,0x71024e17e0
71024e17bc  mov x9,xzr
71024e17c0  add x10,x8,#0x8
71024e17c4  orr w11,wzr,#0xffff
71024e17c8  ldr x12,[x10, x9, LSL #0x3]
71024e17cc  str w11,[x12, #0x230]
71024e17d0  ldr w12,[x8, #0x3208]
71024e17d4  add x9,x9,#0x1
71024e17d8  cmp x9,x12
71024e17dc  b.cc 0x71024e17c8
71024e17e0  mov w1,wzr
71024e17e4  str wzr,[x0, #0x230]
71024e17e8  bl 0x710250e310
71024e17ec  mov x18,x23
71024e17f0  b 0x71024e2c64
71024e17f4  cbz x8,0x71024e2c64
71024e17f8  ldr x9,[sp, #0xa0]
71024e17fc  ldr x9,[x9]
71024e1800  ldr w10,[x9, #0x21c8]
71024e1804  mov x15,x18
71024e1808  cbz w10,0x71024e2a64
71024e180c  ldr x9,[sp, #0x98]
71024e1810  ldr x9,[x9]
71024e1814  ldr w10,[x9, #0x21c8]
71024e1818  cbz w10,0x71024e2bec
71024e181c  ldr x9,[sp, #0x88]
71024e1820  ldr x9,[x9]
71024e1824  ldr w10,[x9, #0x21c8]
71024e1828  cbz w10,0x71024e2c18
71024e182c  ldr x9,[sp, #0x80]
71024e1830  ldr x9,[x9]
71024e1834  ldr w10,[x9, #0x21c8]
71024e1838  cbz w10,0x71024e4acc
71024e183c  ldr x9,[sp, #0x70]
71024e1840  ldr x9,[x9]
71024e1844  ldr w10,[x9, #0x21c8]
71024e1848  cbz w10,0x71024e4af8
71024e184c  ldr x9,[sp, #0x68]
71024e1850  ldr x9,[x9]
71024e1854  ldr w10,[x9, #0x21c8]
71024e1858  cbz w10,0x71024e5088
71024e185c  ldr x9,[sp, #0x60]
71024e1860  ldr x9,[x9]
71024e1864  ldr w10,[x9, #0x21c8]
71024e1868  cbz w10,0x71024e51d0
71024e186c  ldr x9,[sp, #0x50]
71024e1870  ldr x9,[x9]
71024e1874  ldr w10,[x9, #0x21c8]
71024e1878  cbz w10,0x71024e51f0
71024e187c  ldr x9,[sp, #0x48]
71024e1880  ldr x9,[x9]
71024e1884  ldr w10,[x9, #0x21c8]
71024e1888  cbz w10,0x71024e53f8
71024e188c  ldr x9,[sp, #0x38]
71024e1890  ldr x9,[x9]
71024e1894  ldr w10,[x9, #0x21c8]
71024e1898  mov x18,x15
71024e189c  cbnz w10,0x71024e2c64
71024e18a0  mov w10,#0x9
71024e18a4  b 0x71024e53fc
71024e18a8  ldrsw x9,[x16, #0x4]
71024e18ac  tbnz w9,#0x1f,0x71024e18b8
71024e18b0  add x9,x8,x9
71024e18b4  b 0x71024e18c0
71024e18b8  adrp x9,0x7104742000
71024e18bc  add x9,x9,#0xdbb
71024e18c0  ldrb w8,[x9]
71024e18c4  mov x20,#0xff0000000000
71024e18c8  movk x20,#0xc1ff, LSL #48
71024e18cc  sub w8,w8,#0xb
71024e18d0  cmp w8,#0x1
71024e18d4  b.hi 0x71024e1ad4
71024e18d8  ldur w25,[x9, #0x1]
71024e18dc  cbz w25,0x71024e1ad4
71024e18e0  adrp x8,0x710532a000
71024e18e4  ldr x8,[x8, #0x860]
71024e18e8  ldr x8,[x8]
71024e18ec  ldr w8,[x8, #0x1c]
71024e18f0  str x8,[sp, #0x88]
71024e18f4  adrp x8,0x7105314000
71024e18f8  ldr x8,[x8, #0x510]
71024e18fc  ldr x8,[x8]
71024e1900  ldr x8,[x8, #0x158]
71024e1904  mov x22,#0xf67e
71024e1908  movk x22,#0x3829, LSL #16
71024e190c  mov w27,wzr
71024e1910  add x21,x28,#0x160
71024e1914  str x20,[sp, #0xb8]
71024e1918  movk x22,#0x14, LSL #32
71024e191c  stp x8,x26,[sp, #0x98]
71024e1920  mov w26,#0x1
71024e1924  str x18,[sp, #0x28]
71024e1928  b 0x71024e1934
71024e192c  ldr x23,[x28, #0x168]
71024e1930  add w26,w26,#0x1
71024e1934  sub w1,w26,#0x1
71024e1938  mov x0,x23
71024e193c  bl 0x7103263d20
71024e1940  mov x24,x0
71024e1944  mov x0,x21
71024e1948  mov x1,x24
71024e194c  bl 0x71032648e0
71024e1950  tbz w0,#0x0,0x71024e19dc
71024e1954  mov x0,x23
71024e1958  mov x1,x22
71024e195c  bl 0x71032631a0
71024e1960  and x10,x24,#-0x100000000000000
71024e1964  mov x11,#-0x3f00000000000000
71024e1968  and x9,x24,#0xffffffffff
71024e196c  and x8,x0,#0xffffffffff
71024e1970  cmp x10,x11
71024e1974  b.ne 0x71024e19a0
71024e1978  cbz x9,0x71024e19a0
71024e197c  and x11,x0,#-0x100000000000000
71024e1980  mov x12,#-0x3f00000000000000
71024e1984  cmp x11,x12
71024e1988  b.ne 0x71024e19a4
71024e198c  cbz x8,0x71024e19a4
71024e1990  eor x8,x0,x24
71024e1994  tst x8,#0xffffffffff
71024e1998  b.ne 0x71024e1ac0
71024e199c  b 0x71024e19dc
71024e19a0  and x11,x0,#-0x100000000000000
71024e19a4  mov x12,#-0x3f00000000000000
71024e19a8  cmp x10,x12
71024e19ac  cset w10,eq
71024e19b0  cmp x9,#0x0
71024e19b4  cset w9,ne
71024e19b8  cmp x8,#0x0
71024e19bc  cset w8,ne
71024e19c0  cmp x11,x12
71024e19c4  and w9,w10,w9
71024e19c8  cset w10,eq
71024e19cc  and w8,w8,w10
71024e19d0  eor w8,w8,w9
71024e19d4  cmp w8,#0x1
71024e19d8  b.eq 0x71024e1ac0
71024e19dc  mov x0,x23
71024e19e0  mov x1,x24
71024e19e4  bl 0x71032662f0
71024e19e8  tbz w0,#0x0,0x71024e1ab8
71024e19ec  mov x0,x23
71024e19f0  mov x1,x24
71024e19f4  bl 0x7103264d20
71024e19f8  tbz w0,#0x0,0x71024e1ab8
71024e19fc  mov x0,x24
71024e1a00  mov w1,wzr
71024e1a04  mov w2,wzr
71024e1a08  bl 0x7101797560
71024e1a0c  tbz w0,#0x0,0x71024e1ab8
71024e1a10  and x9,x24,#-0x100000000000000
71024e1a14  mov x10,#-0x3f00000000000000
71024e1a18  mov w8,#0x1
71024e1a1c  cmp x9,x10
71024e1a20  b.ne 0x71024e1ab0
71024e1a24  and x9,x24,#0xffffffffff
71024e1a28  cbz x9,0x71024e1ab0
71024e1a2c  ldr x8,[sp, #0x98]
71024e1a30  ldr x23,[x8]
71024e1a34  adrp x8,0x710532f000
71024e1a38  ldr x8,[x8, #0x730]
71024e1a3c  ldr x8,[x8, #0x8]
71024e1a40  ldr x0,[x8, #0x168]
71024e1a44  mov x1,x24
71024e1a48  bl 0x7103264270
71024e1a4c  cmn w0,#0x1
71024e1a50  b.eq 0x71024e1aac
71024e1a54  ldr x8,[sp, #0x88]
71024e1a58  cmp w8,#0x3
71024e1a5c  b.cs 0x71024e5790
71024e1a60  cmp w0,#0x7f
71024e1a64  b.hi 0x71024e1aac
71024e1a68  ldr x8,[x23]
71024e1a6c  ldr x10,[sp, #0x88]
71024e1a70  mov w11,#0xd700
71024e1a74  movk w11,#0x3, LSL #16
71024e1a78  madd x8,x10,x11,x8
71024e1a7c  lsr w9,w0,#0x5
71024e1a80  add x8,x8,w9, UXTW  #0x2
71024e1a84  mov w9,#0xd6e8
71024e1a88  movk w9,#0x3, LSL #16
71024e1a8c  ldr w8,[x8, x9, LSL #0x0]
71024e1a90  mov w9,#0x1
71024e1a94  lsl w9,w9,w0
71024e1a98  tst w8,w9
71024e1a9c  ldr x9,[sp, #0xb8]
71024e1aa0  cset w8,eq
71024e1aa4  csel x24,x24,x9,eq
71024e1aa8  b 0x71024e1ab0
71024e1aac  mov w8,#0x1
71024e1ab0  add w27,w27,w8
71024e1ab4  str x24,[sp, #0xb8]
71024e1ab8  cmp w27,#0x1
71024e1abc  b.hi 0x71024e1acc
71024e1ac0  cmp w26,w25
71024e1ac4  b.cc 0x71024e192c
71024e1ac8  ldr x20,[sp, #0xb8]
71024e1acc  ldr x18,[sp, #0x28]
71024e1ad0  ldr x26,[sp, #0xa0]
71024e1ad4  ldr x9,[x26, #0x558]
71024e1ad8  ldr x23,[x9, #0x80]
71024e1adc  and x8,x20,#-0x100000000000000
71024e1ae0  mov x9,#-0x3f00000000000000
71024e1ae4  mov x28,x18
71024e1ae8  cmp x8,x9
71024e1aec  b.ne 0x71024e1d08
71024e1af0  and x8,x20,#0xffffffffff
71024e1af4  cbz x8,0x71024e1d08
71024e1af8  fmov s8,0x3f800000
71024e1afc  ldr x0,[x23, #0x38]
71024e1b00  adrp x1,0x7104292000
71024e1b04  add x1,x1,#0x32d
71024e1b08  mov v0.16B,v8.16B
71024e1b0c  add x21,x23,#0x30
71024e1b10  bl 0x7103778300
71024e1b14  ldr x0,[x23, #0x38]
71024e1b18  mov v0.16B,v8.16B
71024e1b1c  adrp x1,0x710424f000
71024e1b20  add x1,x1,#0xb2b
71024e1b24  bl 0x7103778300
71024e1b28  ldr x0,[x23, #0x38]
71024e1b2c  mov v0.16B,v8.16B
71024e1b30  adrp x1,0x71043ad000
71024e1b34  add x1,x1,#0xdb7
71024e1b38  bl 0x7103778300
71024e1b3c  ldr x0,[x23, #0x38]
71024e1b40  mov v0.16B,v8.16B
71024e1b44  adrp x1,0x71042c5000
71024e1b48  add x1,x1,#0x477
71024e1b4c  bl 0x7103778300
71024e1b50  adrp x8,0x710532f000
71024e1b54  ldr x8,[x8, #0x730]
71024e1b58  ldr x24,[x8, #0x8]
71024e1b5c  ldr x0,[x24, #0x168]
71024e1b60  mov x1,x20
71024e1b64  mov w2,wzr
71024e1b68  bl 0x7103263540
71024e1b6c  ldr x1,[x24, #0x168]
71024e1b70  mov w22,w0
71024e1b74  add x0,sp,#0x160
71024e1b78  mov x2,x20
71024e1b7c  add x24,sp,#0x160
71024e1b80  bl 0x7103262310
71024e1b84  add x2,x24,#0x8
71024e1b88  adrp x0,0x710439b000
71024e1b8c  add x0,x0,#0x815
71024e1b90  sub x8,x29,#0xc0
71024e1b94  mov w1,w22
71024e1b98  sub x20,x29,#0xc0
71024e1b9c  bl 0x71003a4ca0
71024e1ba0  adrp x1,0x710425f000
71024e1ba4  add x1,x1,#0xab3
71024e1ba8  add x8,sp,#0x140
71024e1bac  mov x0,x21
71024e1bb0  bl 0x7103776910
71024e1bb4  add x3,x20,#0x8
71024e1bb8  adrp x1,0x71042e7000
71024e1bbc  add x1,x1,#0x7fd
71024e1bc0  add x0,sp,#0x140
71024e1bc4  mov w2,#0x1
71024e1bc8  bl 0x710377a280
71024e1bcc  adrp x1,0x7104401000
71024e1bd0  add x1,x1,#0xdad
71024e1bd4  add x8,sp,#0x128
71024e1bd8  mov x0,x21
71024e1bdc  bl 0x7103776640
71024e1be0  adrp x1,0x71043cf000
71024e1be4  add x1,x1,#0xca4
71024e1be8  add x8,sp,#0x160
71024e1bec  add x0,sp,#0x128
71024e1bf0  bl 0x7103776910
71024e1bf4  adrp x1,0x71043e0000
71024e1bf8  add x1,x1,#0x786
71024e1bfc  add x0,sp,#0x160
71024e1c00  bl 0x710377a120
71024e1c04  ldr x0,[sp, #0x168]
71024e1c08  adrp x21,0x710523d000
71024e1c0c  add x21,x21,#0x9a8
71024e1c10  stp x21,xzr,[sp, #0x160]
71024e1c14  cbz x0,0x71024e1c1c
71024e1c18  bl 0x710392eb40
71024e1c1c  ldr x0,[x23, #0x1c8]
71024e1c20  ldr x8,[x0]
71024e1c24  ldr x8,[x8, #0x60]
71024e1c28  mov w1,#0x1
71024e1c2c  add x20,x23,#0x1c8
71024e1c30  blr x8
71024e1c34  mov w1,#0xa
71024e1c38  mov x0,x20
71024e1c3c  mov w2,wzr
71024e1c40  bl 0x7103771a80
71024e1c44  mov x0,#0xd45c
71024e1c48  movk x0,#0x4066, LSL #16
71024e1c4c  movk x0,#0xff17, LSL #32
71024e1c50  movk x0,#0xd9ff, LSL #48
71024e1c54  bl 0x7103314bc0
71024e1c58  adrp x8,0x710532a000
71024e1c5c  ldr x8,[x8, #0x860]
71024e1c60  ldr x1,[x8]
71024e1c64  mov x2,#0xcc4f
71024e1c68  movk x2,#0x6ee7, LSL #16
71024e1c6c  movk x2,#0x18, LSL #32
71024e1c70  add x0,sp,#0x160
71024e1c74  bl 0x71024d1440
71024e1c78  adrp x8,0x7104f73000
71024e1c7c  add x8,x8,#0xd50
71024e1c80  str x8,[sp, #0x168]
71024e1c84  ldr x8,[sp, #0x170]
71024e1c88  cbz x8,0x71024e1cc4
71024e1c8c  adrp x9,0x7106dd5000
71024e1c90  ldrb w9,[x9, #0x3a8]
71024e1c94  cmp w9,#0x1
71024e1c98  b.ne 0x71024e1cc4
71024e1c9c  adrp x10,0x7106dd5000
71024e1ca0  ldr w9,[sp, #0x178]
71024e1ca4  ldr w10,[x10, #0x3ac]
71024e1ca8  cmp w9,w10
71024e1cac  b.ne 0x71024e1cc4
71024e1cb0  ldr wzr,[x8, #0x38]!
71024e1cb4  ldaxr w9,[x8]
71024e1cb8  sub w9,w9,#0x1
71024e1cbc  stlxr w10,w9,[x8]
71024e1cc0  cbnz w10,0x71024e1cb4
71024e1cc4  ldr x20,[sp, #0x130]
71024e1cc8  adrp x8,0x710523d000
71024e1ccc  add x8,x8,#0x988
71024e1cd0  str xzr,[sp, #0x170]
71024e1cd4  strb wzr,[sp, #0x180]
71024e1cd8  stp x8,xzr,[sp, #0x128]
71024e1cdc  cbz x20,0x71024e1cf8
71024e1ce0  ldr x0,[x20, #0x18]
71024e1ce4  stp x21,xzr,[x20, #0x10]
71024e1ce8  cbz x0,0x71024e1cf0
71024e1cec  bl 0x710392eb40
71024e1cf0  mov x0,x20
71024e1cf4  bl 0x710392eb40
71024e1cf8  ldr x0,[sp, #0x148]
71024e1cfc  stp x21,xzr,[sp, #0x140]
71024e1d00  cbnz x0,0x71024e1ebc
71024e1d04  b 0x71024e1ec0
71024e1d08  fmov s8,0x3f800000
71024e1d0c  ldr x0,[x23, #0x38]
71024e1d10  adrp x1,0x7104292000
71024e1d14  add x1,x1,#0x32d
71024e1d18  mov v0.16B,v8.16B
71024e1d1c  add x20,x23,#0x30
71024e1d20  bl 0x7103778300
71024e1d24  ldr x0,[x23, #0x38]
71024e1d28  mov v0.16B,v8.16B
71024e1d2c  adrp x1,0x710424f000
71024e1d30  add x1,x1,#0xb2b
71024e1d34  bl 0x7103778300
71024e1d38  ldr x0,[x23, #0x38]
71024e1d3c  mov v0.16B,v8.16B
71024e1d40  adrp x1,0x71043ad000
71024e1d44  add x1,x1,#0xdb7
71024e1d48  bl 0x7103778300
71024e1d4c  ldr x0,[x23, #0x38]
71024e1d50  mov v0.16B,v8.16B
71024e1d54  adrp x1,0x71042c5000
71024e1d58  add x1,x1,#0x477
71024e1d5c  bl 0x7103778300
71024e1d60  adrp x1,0x710425f000
71024e1d64  add x1,x1,#0xab3
71024e1d68  sub x8,x29,#0xc0
71024e1d6c  mov x0,x20
71024e1d70  bl 0x7103776910
71024e1d74  adrp x1,0x7104281000
71024e1d78  add x1,x1,#0xeb
71024e1d7c  sub x0,x29,#0xc0
71024e1d80  bl 0x710377a120
71024e1d84  adrp x1,0x7104401000
71024e1d88  add x1,x1,#0xdad
71024e1d8c  add x8,sp,#0x140
71024e1d90  mov x0,x20
71024e1d94  bl 0x7103776640
71024e1d98  adrp x1,0x71043cf000
71024e1d9c  add x1,x1,#0xca4
71024e1da0  add x8,sp,#0x160
71024e1da4  add x0,sp,#0x140
71024e1da8  bl 0x7103776910
71024e1dac  adrp x1,0x71043e0000
71024e1db0  add x1,x1,#0x786
71024e1db4  add x0,sp,#0x160
71024e1db8  bl 0x710377a120
71024e1dbc  ldr x0,[sp, #0x168]
71024e1dc0  adrp x21,0x710523d000
71024e1dc4  add x21,x21,#0x9a8
71024e1dc8  stp x21,xzr,[sp, #0x160]
71024e1dcc  cbz x0,0x71024e1dd4
71024e1dd0  bl 0x710392eb40
71024e1dd4  ldr x0,[x23, #0x1c8]
71024e1dd8  ldr x8,[x0]
71024e1ddc  ldr x8,[x8, #0x60]
71024e1de0  mov w1,#0x1
71024e1de4  add x20,x23,#0x1c8
71024e1de8  blr x8
71024e1dec  mov w1,#0xa
71024e1df0  mov x0,x20
71024e1df4  mov w2,wzr
71024e1df8  bl 0x7103771a80
71024e1dfc  mov x0,#0xd45c
71024e1e00  movk x0,#0x4066, LSL #16
71024e1e04  movk x0,#0xff17, LSL #32
71024e1e08  movk x0,#0xd9ff, LSL #48
71024e1e0c  bl 0x7103314bc0
71024e1e10  adrp x8,0x710532a000
71024e1e14  ldr x8,[x8, #0x860]
71024e1e18  ldr x1,[x8]
71024e1e1c  mov x2,#0xcc4f
71024e1e20  movk x2,#0x6ee7, LSL #16
71024e1e24  movk x2,#0x18, LSL #32
71024e1e28  add x0,sp,#0x160
71024e1e2c  bl 0x71024d1440
71024e1e30  adrp x8,0x7104f73000
71024e1e34  add x8,x8,#0xd50
71024e1e38  str x8,[sp, #0x168]
71024e1e3c  ldr x8,[sp, #0x170]
71024e1e40  cbz x8,0x71024e1e7c
71024e1e44  adrp x9,0x7106dd5000
71024e1e48  ldrb w9,[x9, #0x3a8]
71024e1e4c  cmp w9,#0x1
71024e1e50  b.ne 0x71024e1e7c
71024e1e54  adrp x10,0x7106dd5000
71024e1e58  ldr w9,[sp, #0x178]
71024e1e5c  ldr w10,[x10, #0x3ac]
71024e1e60  cmp w9,w10
71024e1e64  b.ne 0x71024e1e7c
71024e1e68  ldr wzr,[x8, #0x38]!
71024e1e6c  ldaxr w9,[x8]
71024e1e70  sub w9,w9,#0x1
71024e1e74  stlxr w10,w9,[x8]
71024e1e78  cbnz w10,0x71024e1e6c
71024e1e7c  ldr x20,[sp, #0x148]
71024e1e80  adrp x8,0x710523d000
71024e1e84  add x8,x8,#0x988
71024e1e88  str xzr,[sp, #0x170]
71024e1e8c  strb wzr,[sp, #0x180]
71024e1e90  stp x8,xzr,[sp, #0x140]
71024e1e94  cbz x20,0x71024e1eb0
71024e1e98  ldr x0,[x20, #0x18]
71024e1e9c  stp x21,xzr,[x20, #0x10]
71024e1ea0  cbz x0,0x71024e1ea8
71024e1ea4  bl 0x710392eb40
71024e1ea8  mov x0,x20
71024e1eac  bl 0x710392eb40
71024e1eb0  ldur x0,[x29, #-0xb8]
71024e1eb4  stp x21,xzr,[x29, #-0xc0]
71024e1eb8  cbz x0,0x71024e1ec0
71024e1ebc  bl 0x710392eb40
71024e1ec0  mov w8,#0x1
71024e1ec4  strb w8,[x26, #0x5dd]
71024e1ec8  adrp x8,0x710532f000
71024e1ecc  ldr x8,[x8, #0x730]
71024e1ed0  ldr x23,[x8, #0x8]
71024e1ed4  ldr x21,[x23, #0x168]
71024e1ed8  ldr x9,[x21, #0x8]
71024e1edc  ldr x8,[x9, #0x20]
71024e1ee0  ldrb w10,[x8]
71024e1ee4  mov x18,x28
71024e1ee8  cmp w10,#0xc
71024e1eec  b.ne 0x71024e1f70
71024e1ef0  ldur w10,[x8, #0x1]
71024e1ef4  subs w10,w10,#0x1
71024e1ef8  b.lt 0x71024e1f70
71024e1efc  ldr x12,[x9, #0x48]
71024e1f00  ldr x9,[x9, #0x18]
71024e1f04  mov w11,wzr
71024e1f08  ldursw x14,[x8, #0x5]
71024e1f0c  and x12,x12,#0xffffffffff
71024e1f10  ldp x13,x9,[x9, #0x20]
71024e1f14  add x14,x9,x14
71024e1f18  adrp x9,0x7104742000
71024e1f1c  add x9,x9,#0xdbb
71024e1f20  add w15,w10,w11
71024e1f24  cmp w15,#0x0
71024e1f28  cinc w15,w15,lt
71024e1f2c  asr w15,w15,#0x1
71024e1f30  add x16,x14,w15, SXTW  #0x3
71024e1f34  ldr w17,[x16]
71024e1f38  ldr x17,[x13, x17, LSL #0x3]
71024e1f3c  cmp x17,x12
71024e1f40  b.eq 0x71024e1f60
71024e1f44  sub w16,w15,#0x1
71024e1f48  cmp x17,x12
71024e1f4c  csel w10,w16,w10,hi
71024e1f50  csinc w11,w11,w15,hi
71024e1f54  cmp w11,w10
71024e1f58  b.le 0x71024e1f20
71024e1f5c  b 0x71024e1f78
71024e1f60  ldrsw x9,[x16, #0x4]
71024e1f64  tbnz w9,#0x1f,0x71024e1f70
71024e1f68  add x9,x8,x9
71024e1f6c  b 0x71024e1f78
71024e1f70  adrp x9,0x7104742000
71024e1f74  add x9,x9,#0xdbb
71024e1f78  ldrb w8,[x9]
71024e1f7c  sub w8,w8,#0xb
71024e1f80  cmp w8,#0x1
71024e1f84  b.hi 0x71024e2c64
71024e1f88  ldur w8,[x9, #0x1]
71024e1f8c  cbz w8,0x71024e2c64
71024e1f90  adrp x9,0x710532a000
71024e1f94  ldr x9,[x9, #0x860]
71024e1f98  ldr x9,[x9]
71024e1f9c  ldr w24,[x9, #0x1c]
71024e1fa0  adrp x9,0x7105314000
71024e1fa4  ldr x9,[x9, #0x510]
71024e1fa8  ldr x9,[x9]
71024e1fac  ldr x25,[x9, #0x158]
71024e1fb0  mov w20,wzr
71024e1fb4  sub w26,w8,#0x1
71024e1fb8  mov w27,#0xd6e8
71024e1fbc  movk w27,#0x3, LSL #16
71024e1fc0  b 0x71024e1fcc
71024e1fc4  ldr x21,[x23, #0x168]
71024e1fc8  add w20,w20,#0x1
71024e1fcc  mov x0,x21
71024e1fd0  mov w1,w20
71024e1fd4  bl 0x7103263d20
71024e1fd8  mov x22,x0
71024e1fdc  mov x0,x21
71024e1fe0  mov x1,x22
71024e1fe4  bl 0x71032662f0
71024e1fe8  tbz w0,#0x0,0x71024e20e0
71024e1fec  mov x0,x21
71024e1ff0  mov x1,x22
71024e1ff4  bl 0x7103264d20
71024e1ff8  tbz w0,#0x0,0x71024e20e0
71024e1ffc  mov x0,x22
71024e2000  mov w1,wzr
71024e2004  mov w2,wzr
71024e2008  bl 0x7101797560
71024e200c  tbz w0,#0x0,0x71024e20e0
71024e2010  and x8,x22,#-0x100000000000000
71024e2014  mov x9,#-0x3f00000000000000
71024e2018  cmp x8,x9
71024e201c  b.ne 0x71024e20e0
71024e2020  and x8,x22,#0xffffffffff
71024e2024  cbz x8,0x71024e20e0
71024e2028  adrp x8,0x710532f000
71024e202c  ldr x8,[x8, #0x730]
71024e2030  ldr x8,[x8, #0x8]
71024e2034  ldr x0,[x8, #0x168]
71024e2038  ldr x21,[x25]
71024e203c  mov x1,x22
71024e2040  bl 0x7103264270
71024e2044  cmn w0,#0x1
71024e2048  b.eq 0x71024e2088
71024e204c  cmp w24,#0x3
71024e2050  b.cs 0x71024e5790
71024e2054  cmp w0,#0x7f
71024e2058  b.hi 0x71024e2088
71024e205c  ldr x8,[x21]
71024e2060  mov w10,#0xd700
71024e2064  movk w10,#0x3, LSL #16
71024e2068  madd x8,x24,x10,x8
71024e206c  lsr w9,w0,#0x5
71024e2070  add x8,x8,w9, UXTW  #0x2
71024e2074  mov w9,#0x1
71024e2078  lsl w9,w9,w0
71024e207c  ldr w8,[x8, x27, LSL #0x0]
71024e2080  tst w8,w9
71024e2084  b.ne 0x71024e20e0
71024e2088  adrp x8,0x710532f000
71024e208c  ldr x8,[x8, #0x730]
71024e2090  ldr x8,[x8, #0x8]
71024e2094  ldr x0,[x8, #0x168]
71024e2098  ldr x21,[x25]
71024e209c  mov x1,x22
71024e20a0  bl 0x7103264270
71024e20a4  cmp w24,#0x3
71024e20a8  b.cs 0x71024e5790
71024e20ac  cmp w0,#0x7f
71024e20b0  b.hi 0x71024e20e0
71024e20b4  ldr x8,[x21]
71024e20b8  mov w11,#0xd700
71024e20bc  movk w11,#0x3, LSL #16
71024e20c0  madd x8,x24,x11,x8
71024e20c4  lsr w9,w0,#0x5
71024e20c8  add x8,x8,w9, UXTW  #0x2
71024e20cc  ldr w9,[x8, x27, LSL #0x0]
71024e20d0  mov w10,#0x1
71024e20d4  lsl w10,w10,w0
71024e20d8  orr w9,w9,w10
71024e20dc  str w9,[x8, x27, LSL #0x0]
71024e20e0  cmp w26,w20
71024e20e4  mov x18,x28
71024e20e8  b.ne 0x71024e1fc4
71024e20ec  b 0x71024e2c64
71024e20f0  orr w2,wzr,#0x7
71024e20f4  b 0x71024e2a50
71024e20f8  mov w23,#0x1
71024e20fc  mov x9,x20
71024e2100  b 0x71024e4c28
71024e2104  cmp w12,#0x3
71024e2108  b.ne 0x71024e295c
71024e210c  ldr w12,[x8, #0x1344]
71024e2110  cmp w9,w12
71024e2114  b.ne 0x71024e29e4
71024e2118  mov w11,#0x1b0
71024e211c  madd x11,x9,x11,x8
71024e2120  ldr x12,[x8, #0x10e8]
71024e2124  str x12,[x11, #0xa8]
71024e2128  ldr x12,[x8, #0x10f8]
71024e212c  ldr x13,[x8, #0x1108]
71024e2130  str x13,[x11, #0xc8]
71024e2134  str x12,[x11, #0xb8]
71024e2138  ldr x12,[x8, #0x1118]
71024e213c  ldr x13,[x8, #0x1128]
71024e2140  str x13,[x11, #0xe8]
71024e2144  str x12,[x11, #0xd8]
71024e2148  ldr x13,[x8, #0x1138]
71024e214c  ldr x14,[x8, #0x1148]
71024e2150  ldr w12,[x8, #0x1150]
71024e2154  str x14,[x11, #0x108]
71024e2158  str x13,[x11, #0xf8]
71024e215c  ldr x13,[x8, #0x10e0]
71024e2160  ldr x14,[x8, #0x10f0]
71024e2164  str x14,[x11, #0xb0]
71024e2168  str x13,[x11, #0xa0]
71024e216c  ldr x13,[x8, #0x1100]
71024e2170  ldr x14,[x8, #0x1110]
71024e2174  str x14,[x11, #0xd0]
71024e2178  str x13,[x11, #0xc0]
71024e217c  ldr x13,[x8, #0x1120]
71024e2180  ldr x14,[x8, #0x1130]
71024e2184  str x14,[x11, #0xf0]
71024e2188  str x13,[x11, #0xe0]
71024e218c  ldr x13,[x8, #0x1140]
71024e2190  b 0x71024df620
71024e2194  cbz x8,0x71024e2c64
71024e2198  ldr x9,[x9, #0x10]
71024e219c  ldr w10,[x9, #0x2158]
71024e21a0  cmp w10,#0x3ff
71024e21a4  b.hi 0x71024e2c64
71024e21a8  cbz w10,0x71024e2a00
71024e21ac  ldr x10,[x9, #0x158]
71024e21b0  mov x12,xzr
71024e21b4  add x11,x9,#0x160
71024e21b8  str x10,[x11, x12, LSL #0x3]
71024e21bc  ldr w13,[x9, #0x2158]
71024e21c0  add x12,x12,#0x1
71024e21c4  cmp x12,x13
71024e21c8  b.cc 0x71024e21b8
71024e21cc  b 0x71024e2280
71024e21d0  cbz x8,0x71024e2c64
71024e21d4  ldr x9,[x9, #0x10]
71024e21d8  ldr w10,[x9, #0x2158]
71024e21dc  cmp w10,#0x3ff
71024e21e0  b.hi 0x71024e2c64
71024e21e4  cbz w10,0x71024e2a00
71024e21e8  ldr x10,[x9, #0x158]
71024e21ec  mov x12,xzr
71024e21f0  add x11,x9,#0x160
71024e21f4  str x10,[x11, x12, LSL #0x3]
71024e21f8  ldr w13,[x9, #0x2158]
71024e21fc  add x12,x12,#0x1
71024e2200  cmp x12,x13
71024e2204  b.cc 0x71024e21f4
71024e2208  b 0x71024e2280
71024e220c  cbz x8,0x71024e2c64
71024e2210  ldr x9,[x9, #0x10]
71024e2214  ldr w10,[x9, #0x2158]
71024e2218  cmp w10,#0x3ff
71024e221c  b.hi 0x71024e2c64
71024e2220  cbz w10,0x71024e2a00
71024e2224  ldr x10,[x9, #0x158]
71024e2228  mov x12,xzr
71024e222c  add x11,x9,#0x160
71024e2230  str x10,[x11, x12, LSL #0x3]
71024e2234  ldr w13,[x9, #0x2158]
71024e2238  add x12,x12,#0x1
71024e223c  cmp x12,x13
71024e2240  b.cc 0x71024e2230
71024e2244  b 0x71024e2280
71024e2248  cbz x8,0x71024e2c64
71024e224c  ldr x9,[x9, #0x10]
71024e2250  ldr w10,[x9, #0x2158]
71024e2254  cmp w10,#0x3ff
71024e2258  b.hi 0x71024e2c64
71024e225c  cbz w10,0x71024e2a00
71024e2260  ldr x10,[x9, #0x158]
71024e2264  mov x12,xzr
71024e2268  add x11,x9,#0x160
71024e226c  str x10,[x11, x12, LSL #0x3]
71024e2270  ldr w13,[x9, #0x2158]
71024e2274  add x12,x12,#0x1
71024e2278  cmp x12,x13
71024e227c  b.cc 0x71024e226c
71024e2280  add w10,w13,#0x1
71024e2284  b 0x71024e2a04
71024e2288  ldp x20,x22,[x8, #0x8]
71024e228c  ldr w21,[x8, #0x18]
71024e2290  adrp x8,0x710532f000
71024e2294  ldr x8,[x8, #0x730]
71024e2298  ldr x8,[x8, #0x8]
71024e229c  add x1,x8,#0x2f0
71024e22a0  add x0,sp,#0x160
71024e22a4  mov x2,x20
71024e22a8  bl 0x71032933e0
71024e22ac  tst x22,#0xffffffffff
71024e22b0  b.eq 0x71024e22b8
71024e22b4  str x22,[sp, #0x170]
71024e22b8  cmp w21,#0x1
71024e22bc  b.lt 0x71024e22c4
71024e22c0  str w21,[sp, #0x178]
71024e22c4  ldp x8,x9,[sp, #0x148]
71024e22c8  cmp x8,x9
71024e22cc  b.cs 0x71024e22ec
71024e22d0  ldp x9,x10,[sp, #0x160]
71024e22d4  add x23,x8,#0x20
71024e22d8  ldp x11,x12,[sp, #0x170]
71024e22dc  stp x11,x12,[x8, #0x10]
71024e22e0  stp x9,x10,[x8]
71024e22e4  str x23,[sp, #0x148]
71024e22e8  b 0x71024e2410
71024e22ec  ldr x20,[sp, #0x140]
71024e22f0  sub x21,x8,x20
71024e22f4  asr x25,x21,#0x5
71024e22f8  add x8,x25,#0x1
71024e22fc  lsr x10,x8,#0x3b
71024e2300  cbnz x10,0x71024e579c
71024e2304  sub x9,x9,x20
71024e2308  asr x10,x9,#0x5
71024e230c  orr x11,xzr,#0x3fffffffffffffe
71024e2310  cmp x10,x11
71024e2314  b.hi 0x71024e235c
71024e2318  asr x9,x9,#0x4
71024e231c  cmp x9,x8
71024e2320  csel x26,x8,x9,cc
71024e2324  cbz x26,0x71024e23c0
71024e2328  lsr x8,x26,#0x3b
71024e232c  cbz x8,0x71024e2360
71024e2330  b 0x71024e5790
71024e2334  mov x20,x18
71024e2338  mov x1,xzr
71024e233c  mov w3,#0x1
71024e2340  bl 0x71024fc200
71024e2344  mov x18,x20
71024e2348  b 0x71024e2c64
71024e234c  cmp w2,#0xfe, LSL #12
71024e2350  b.lt 0x71024e2a1c
71024e2354  mov w1,#0x8
71024e2358  b 0x71024e2c48
71024e235c  orr x26,xzr,#0x7ffffffffffffff
71024e2360  lsl x8,x26,#0x5
71024e2364  cmp x8,#0x0
71024e2368  csinc x23,x8,xzr,ne
71024e236c  mov w0,#0x10
71024e2370  mov x1,x23
71024e2374  bl 0x710392e290
71024e2378  mov x22,x0
71024e237c  cbnz x0,0x71024e23c4
71024e2380  adrp x8,0x7105332000
71024e2384  ldr x0,[x8, #0xf00]
71024e2388  cbz x0,0x71024e23c0
71024e238c  stur wzr,[x29, #-0xc4]
71024e2390  str x23,[sp, #0x128]
71024e2394  ldr x8,[x0]
71024e2398  ldr x8,[x8, #0x30]
71024e239c  sub x1,x29,#0xc4
71024e23a0  add x2,sp,#0x128
71024e23a4  blr x8
71024e23a8  tbz w0,#0x0,0x71024e23c0
71024e23ac  mov w0,#0x10
71024e23b0  mov x1,x23
71024e23b4  bl 0x710392e290
71024e23b8  mov x22,x0
71024e23bc  cbnz x0,0x71024e23c4
71024e23c0  mov x22,xzr
71024e23c4  ldp x8,x9,[sp, #0x160]
71024e23c8  add x12,x22,x25, LSL #0x5
71024e23cc  ldp x10,x11,[sp, #0x170]
71024e23d0  add x26,x22,x26, LSL #0x5
71024e23d4  add x23,x12,#0x20
71024e23d8  cmp x21,#0x1
71024e23dc  stp x10,x11,[x12, #0x10]
71024e23e0  stp x8,x9,[x12]
71024e23e4  b.lt 0x71024e23f8
71024e23e8  mov x0,x22
71024e23ec  mov x1,x20
71024e23f0  mov x2,x21
71024e23f4  bl 0x71039c00e0
71024e23f8  stp x22,x23,[sp, #0x140]
71024e23fc  str x26,[sp, #0x150]
71024e2400  cbz x20,0x71024e2410
71024e2404  mov x0,x20
71024e2408  bl 0x710392eb40
71024e240c  ldr x23,[sp, #0x148]
71024e2410  ldr x1,[sp, #0x140]
71024e2414  cmp x23,x1
71024e2418  b.eq 0x71024e5794
71024e241c  add x0,sp,#0x160
71024e2420  bl 0x7101783be0
71024e2424  mov w0,#0x10
71024e2428  mov w1,#0x20
71024e242c  bl 0x710392e290
71024e2430  mov x20,x0
71024e2434  cbnz x0,0x71024e2480
71024e2438  adrp x8,0x7105332000
71024e243c  ldr x0,[x8, #0xf00]
71024e2440  cbz x0,0x71024e247c
71024e2444  mov w8,#0x20
71024e2448  stur wzr,[x29, #-0xc4]
71024e244c  sub x1,x29,#0xc4
71024e2450  str x8,[sp, #0x128]
71024e2454  ldr x8,[x0]
71024e2458  ldr x8,[x8, #0x30]
71024e245c  add x2,sp,#0x128
71024e2460  blr x8
71024e2464  tbz w0,#0x0,0x71024e247c
71024e2468  mov w0,#0x10
71024e246c  mov w1,#0x20
71024e2470  bl 0x710392e290
71024e2474  mov x20,x0
71024e2478  cbnz x0,0x71024e2480
71024e247c  mov x20,xzr
71024e2480  ldp x9,x10,[sp, #0x160]
71024e2484  add x8,x20,#0x20
71024e2488  ldp x11,x12,[sp, #0x170]
71024e248c  mov x0,x20
71024e2490  str x8,[sp, #0x138]
71024e2494  stp x11,x12,[x20, #0x10]
71024e2498  stp x9,x10,[x20]
71024e249c  stp x20,x8,[sp, #0x128]
71024e24a0  bl 0x71017831e0
71024e24a4  adrp x9,0x710532f000
71024e24a8  ldr x9,[x9, #0x7e8]
71024e24ac  ldr x10,[x9, #0x8]
71024e24b0  mov w11,#0x1
71024e24b4  str w11,[x10, #0xf8]
71024e24b8  ldr x10,[x9, #0x8]
71024e24bc  ldp x12,x13,[x20]
71024e24c0  and w8,w0,#0x1
71024e24c4  ldp x14,x15,[x20, #0x10]
71024e24c8  stp x14,x15,[x10, #0x110]
71024e24cc  stp x12,x13,[x10, #0x100]
71024e24d0  ldr x10,[x9, #0x8]
71024e24d4  strh w11,[x10, #0x120]
71024e24d8  strb w8,[x10, #0x122]
71024e24dc  str wzr,[x10, #0x124]
71024e24e0  strb wzr,[x10, #0x128]
71024e24e4  ldr x8,[x9, #0x8]
71024e24e8  ldrb w9,[x8, #0x161]
71024e24ec  cbz w9,0x71024e2530
71024e24f0  ldrsw x9,[x8, #0xe4]
71024e24f4  cmp w9,#0x13
71024e24f8  b.cs 0x71024e5790
71024e24fc  add x9,x8,x9, LSL #0x2
71024e2500  mov w10,#0x5
71024e2504  str w10,[x9, #0x98]
71024e2508  ldr w9,[x8, #0xe4]
71024e250c  cmp w9,#0x11
71024e2510  b.gt 0x71024e2530
71024e2514  add w9,w9,#0x1
71024e2518  cmp w9,#0x13
71024e251c  str w9,[x8, #0xe4]
71024e2520  b.cs 0x71024e5790
71024e2524  add x8,x8,w9, SXTW  #0x2
71024e2528  orr w9,wzr,#0x3
71024e252c  str w9,[x8, #0x98]
71024e2530  ldp x23,x25,[sp, #0x128]
71024e2534  cmp x23,x25
71024e2538  b.eq 0x71024e25e8
71024e253c  mov w21,wzr
71024e2540  mov w22,wzr
71024e2544  mov w26,wzr
71024e2548  mov w20,#0x1
71024e254c  b 0x71024e2560
71024e2550  mov w22,#0x1
71024e2554  b 0x71024e25a8
71024e2558  mov w21,#0x1
71024e255c  b 0x71024e25a8
71024e2560  ldp x8,x9,[x23]
71024e2564  add x0,sp,#0x160
71024e2568  ldp x10,x11,[x23, #0x10]
71024e256c  stp x10,x11,[sp, #0x170]
71024e2570  stp x8,x9,[sp, #0x160]
71024e2574  bl 0x71017825b0
71024e2578  ldrb w8,[sp, #0x168]
71024e257c  tbz w0,#0x0,0x71024e259c
71024e2580  cmp w8,#0x3
71024e2584  b.eq 0x71024e2558
71024e2588  cmp w8,#0x1
71024e258c  b.eq 0x71024e2550
71024e2590  cbnz w8,0x71024e25a8
71024e2594  mov w26,#0x1
71024e2598  b 0x71024e25a8
71024e259c  cmp w8,#0x4
71024e25a0  cset w8,eq
71024e25a4  and w20,w8,w20
71024e25a8  add x23,x23,#0x20
71024e25ac  cmp x25,x23
71024e25b0  b.ne 0x71024e2560
71024e25b4  tbz w26,#0x0,0x71024e25cc
71024e25b8  ldr x0,[x24, #0x830]
71024e25bc  bl 0x71032fe9d0
71024e25c0  tbnz w22,#0x0,0x71024e25d0
71024e25c4  tbnz w21,#0x0,0x71024e25dc
71024e25c8  b 0x71024e25ec
71024e25cc  tbz w22,#0x0,0x71024e25c4
71024e25d0  ldr x0,[x24, #0x830]
71024e25d4  bl 0x71032fefa0
71024e25d8  tbz w21,#0x0,0x71024e25ec
71024e25dc  ldr x0,[x24, #0x830]
71024e25e0  bl 0x71032ff570
71024e25e4  b 0x71024e25ec
71024e25e8  mov w20,#0x1
71024e25ec  ldp x21,x22,[sp, #0x128]
71024e25f0  cmp x21,x22
71024e25f4  b.eq 0x71024e261c
71024e25f8  ldp x8,x9,[x21]
71024e25fc  add x0,sp,#0x160
71024e2600  ldp x10,x11,[x21, #0x10]
71024e2604  stp x10,x11,[sp, #0x170]
71024e2608  stp x8,x9,[sp, #0x160]
71024e260c  bl 0x71017830a0
71024e2610  add x21,x21,#0x20
71024e2614  cmp x22,x21
71024e2618  b.ne 0x71024e25f8
71024e261c  ldr w8,[x19, #0x1828]
71024e2620  ldrsh w9,[x19, #0x17e0]
71024e2624  add w10,w8,#0x1
71024e2628  cmp w10,w9
71024e262c  b.cc 0x71024e2638
71024e2630  add w8,w8,#0x2
71024e2634  strh w8,[x19, #0x17e0]
71024e2638  ldurb w8,[x29, #-0xb8]
71024e263c  cmp w8,#0x4
71024e2640  cset w8,eq
71024e2644  orr w8,w20,w8
71024e2648  tbnz w8,#0x0,0x71024e2658
71024e264c  mov w8,#0x1f94
71024e2650  mov w9,#0x1
71024e2654  strb w9,[x19, x8, LSL ]
71024e2658  adrp x8,0x710532f000
71024e265c  ldr x8,[x8, #0x7c8]
71024e2660  ldr x8,[x8, #0x8]
71024e2664  ldrb w8,[x8, #0x69]
71024e2668  mov w20,#0x17f0
71024e266c  cbz w8,0x71024e2698
71024e2670  adrp x8,0x710532f000
71024e2674  ldr x8,[x8, #0x840]
71024e2678  ldr x8,[x8, #0x8]
71024e267c  ldr x8,[x8, #0xc0]
71024e2680  ldr x0,[x8, #0x80]
71024e2684  mov w1,#0x9
71024e2688  bl 0x7101af2070
71024e268c  mov w8,#0x1f9f
71024e2690  mov w9,#0x1
71024e2694  strb w9,[x19, x8, LSL ]
71024e2698  ldr x0,[sp, #0x128]
71024e269c  cbz x0,0x71024e26a8
71024e26a0  str x0,[sp, #0x130]
71024e26a4  bl 0x710392eb40
71024e26a8  ldr x0,[sp, #0x140]
71024e26ac  add x20,x19,x20
71024e26b0  cbz x0,0x71024e26bc
71024e26b4  str x0,[sp, #0x148]
71024e26b8  bl 0x710392eb40
71024e26bc  mov x18,x27
71024e26c0  ldr x8,[x20]
71024e26c4  tst x8,#0xffffffffff
71024e26c8  b.eq 0x71024e2c64
71024e26cc  ldr x1,[x19, #0x48]
71024e26d0  ldr w9,[x1, #0x3208]
71024e26d4  cbz w9,0x71024e2c64
71024e26d8  mov w10,wzr
71024e26dc  add x11,x1,w10, UXTW  #0x3
71024e26e0  ldr x20,[x11, #0x8]
71024e26e4  ldr x11,[x20, #0x70]
71024e26e8  eor x11,x11,x8
71024e26ec  tst x11,#0xffffffffff
71024e26f0  b.eq 0x71024e2704
71024e26f4  add w10,w10,#0x1
71024e26f8  cmp w10,w9
71024e26fc  b.cc 0x71024e26dc
71024e2700  b 0x71024e2c64
71024e2704  cbz x20,0x71024e2c64
71024e2708  ldr x2,[x19, #0x18]
71024e270c  mov x0,x20
71024e2710  mov x21,x18
71024e2714  bl 0x710250e380
71024e2718  ldrb w8,[x20, #0x25b]
71024e271c  mov x18,x21
71024e2720  cbnz w8,0x71024e2c64
71024e2724  ldp x1,x2,[x19]
71024e2728  ldr x3,[x19, #0x18]
71024e272c  ldp x4,x5,[x19, #0x48]
71024e2730  mov x0,x20
71024e2734  bl 0x710250e500
71024e2738  mov x18,x21
71024e273c  b 0x71024e2c64
71024e2740  mov w23,#0x2
71024e2744  mov x9,x22
71024e2748  b 0x71024e4c28
71024e274c  cmp w11,#0x3
71024e2750  b.ne 0x71024e2a6c
71024e2754  ldr w11,[x8, #0x1344]
71024e2758  cmp w9,w11
71024e275c  b.ne 0x71024e2af4
71024e2760  mov w10,#0x1b0
71024e2764  madd x10,x9,x10,x8
71024e2768  ldr x11,[x8, #0x10e8]
71024e276c  str x11,[x10, #0xa8]
71024e2770  ldr x11,[x8, #0x10f8]
71024e2774  ldr x12,[x8, #0x1108]
71024e2778  str x12,[x10, #0xc8]
71024e277c  str x11,[x10, #0xb8]
71024e2780  ldr x11,[x8, #0x1118]
71024e2784  ldr x12,[x8, #0x1128]
71024e2788  str x12,[x10, #0xe8]
71024e278c  str x11,[x10, #0xd8]
71024e2790  ldr x12,[x8, #0x1138]
71024e2794  ldr x13,[x8, #0x1148]
71024e2798  ldr w11,[x8, #0x1150]
71024e279c  str x13,[x10, #0x108]
71024e27a0  str x12,[x10, #0xf8]
71024e27a4  ldr x12,[x8, #0x10e0]
71024e27a8  ldr x13,[x8, #0x10f0]
71024e27ac  str x13,[x10, #0xb0]
71024e27b0  str x12,[x10, #0xa0]
71024e27b4  ldr x12,[x8, #0x1100]
71024e27b8  ldr x13,[x8, #0x1110]
71024e27bc  str x13,[x10, #0xd0]
71024e27c0  str x12,[x10, #0xc0]
71024e27c4  ldr x12,[x8, #0x1120]
71024e27c8  ldr x13,[x8, #0x1130]
71024e27cc  str x13,[x10, #0xf0]
71024e27d0  str x12,[x10, #0xe0]
71024e27d4  ldr x12,[x8, #0x1140]
71024e27d8  b 0x71024e0378
71024e27dc  cmp x8,x10
71024e27e0  b.eq 0x71024e5078
71024e27e4  mov x9,#0x7a8a
71024e27e8  movk x9,#0x9edf, LSL #16
71024e27ec  movk x9,#0x12, LSL #32
71024e27f0  ldr x11,[x8]
71024e27f4  and x11,x11,#0xffffffffff
71024e27f8  cmp x11,x9
71024e27fc  b.eq 0x71024e2810
71024e2800  add x8,x8,#0xb8
71024e2804  cmp x10,x8
71024e2808  b.ne 0x71024e27f0
71024e280c  b 0x71024e5078
71024e2810  ldp x9,x10,[x8]
71024e2814  ldp x11,x12,[x8, #0x10]
71024e2818  stp x11,x12,[sp, #0x170]
71024e281c  stp x9,x10,[sp, #0x160]
71024e2820  ldp x9,x10,[x8, #0x20]
71024e2824  ldp x11,x12,[x8, #0x30]
71024e2828  stp x11,x12,[sp, #0x190]
71024e282c  stp x9,x10,[sp, #0x180]
71024e2830  ldr w9,[x8, #0x40]
71024e2834  str w9,[sp, #0x18]
71024e2838  ldur x9,[x8, #0x44]
71024e283c  ldur x10,[x8, #0x4c]
71024e2840  stp x9,x10,[x29, #-0xc0]
71024e2844  ldur x9,[x8, #0x54]
71024e2848  ldur x10,[x8, #0x5c]
71024e284c  ldur x11,[x8, #0x64]
71024e2850  ldr w12,[x8, #0x6c]
71024e2854  stur w12,[x29, #-0x98]
71024e2858  stp x10,x11,[x29, #-0xa8]
71024e285c  stur x9,[x29, #-0xb0]
71024e2860  ldrh w9,[x8, #0x70]
71024e2864  str w9,[sp, #0xb8]
71024e2868  ldur w9,[x8, #0x72]
71024e286c  ldrh w10,[x8, #0x76]
71024e2870  strh w10,[sp, #0x144]
71024e2874  str w9,[sp, #0x140]
71024e2878  ldr w9,[x8, #0x78]
71024e287c  str w9,[sp, #0xa0]
71024e2880  ldr w9,[x8, #0x7c]
71024e2884  str w9,[sp, #0x98]
71024e2888  ldr x9,[x8, #0x80]
71024e288c  str x9,[sp, #0x88]
71024e2890  ldr w9,[x8, #0x88]
71024e2894  str w9,[sp, #0x80]
71024e2898  ldrh w9,[x8, #0x8c]
71024e289c  str w9,[sp, #0x70]
71024e28a0  ldrh w9,[x8, #0x8e]
71024e28a4  sturh w9,[x29, #-0xc4]
71024e28a8  ldr x9,[x8, #0x90]
71024e28ac  str x9,[sp, #0x68]
71024e28b0  ldrh w9,[x8, #0x98]
71024e28b4  str w9,[sp, #0x60]
71024e28b8  ldrh w9,[x8, #0x9a]
71024e28bc  str w9,[sp, #0x50]
71024e28c0  ldrh w9,[x8, #0x9c]
71024e28c4  str w9,[sp, #0x48]
71024e28c8  ldrh w9,[x8, #0x9e]
71024e28cc  sturh w9,[x29, #-0xc8]
71024e28d0  ldr x9,[x8, #0xa0]
71024e28d4  str x9,[sp, #0x38]
71024e28d8  ldrh w9,[x8, #0xa8]
71024e28dc  str w9,[sp, #0x20]
71024e28e0  ldur w9,[x8, #0xaa]
71024e28e4  ldrh w10,[x8, #0xae]
71024e28e8  strh w10,[sp, #0x12c]
71024e28ec  str w9,[sp, #0x128]
71024e28f0  ldr w26,[x19, #0x1768]
71024e28f4  cmp w26,#0x1f
71024e28f8  b.hi 0x71024e5078
71024e28fc  ldr w9,[sp, #0xb8]
71024e2900  cbz w9,0x71024e5078
71024e2904  ldr x8,[x8, #0xb0]
71024e2908  cmp w28,#0x9c
71024e290c  str x8,[sp, #0x10]
71024e2910  b.ne 0x71024e2920
71024e2914  ldr x8,[x19, #0x10]
71024e2918  ldrb w8,[x8, #0x970]
71024e291c  cbz w8,0x71024e293c
71024e2920  ldrsh w8,[x19, #0x17e0]
71024e2924  cmp w25,w8
71024e2928  b.cc 0x71024e293c
71024e292c  mov x0,x19
71024e2930  bl 0x71024e57b0
71024e2934  tbz w0,#0x0,0x71024e4b00
71024e2938  ldr w26,[x19, #0x1768]
71024e293c  cbz w26,0x71024e4f84
71024e2940  subs w20,w26,#0x1
71024e2944  b.mi 0x71024e4f84
71024e2948  sxtw x21,w20
71024e294c  tbnz w26,#0x0,0x71024e4f00
71024e2950  mov w23,w20
71024e2954  cbnz w20,0x71024e4f24
71024e2958  b 0x71024e4f80
71024e295c  ldr w12,[x8, #0x134c]
71024e2960  cmp w9,w12
71024e2964  b.ne 0x71024e29e4
71024e2968  mov w11,#0x1b0
71024e296c  madd x11,x9,x11,x8
71024e2970  ldr x12,[x8, #0x1268]
71024e2974  str x12,[x11, #0xa8]
71024e2978  ldr x12,[x8, #0x1278]
71024e297c  ldr x13,[x8, #0x1288]
71024e2980  str x13,[x11, #0xc8]
71024e2984  str x12,[x11, #0xb8]
71024e2988  ldr x12,[x8, #0x1298]
71024e298c  ldr x13,[x8, #0x12a8]
71024e2990  str x13,[x11, #0xe8]
71024e2994  str x12,[x11, #0xd8]
71024e2998  ldr x13,[x8, #0x12b8]
71024e299c  ldr x14,[x8, #0x12c8]
71024e29a0  ldr w12,[x8, #0x12d0]
71024e29a4  str x14,[x11, #0x108]
71024e29a8  str x13,[x11, #0xf8]
71024e29ac  ldr x13,[x8, #0x1260]
71024e29b0  ldr x14,[x8, #0x1270]
71024e29b4  str x14,[x11, #0xb0]
71024e29b8  str x13,[x11, #0xa0]
71024e29bc  ldr x13,[x8, #0x1280]
71024e29c0  ldr x14,[x8, #0x1290]
71024e29c4  str x14,[x11, #0xd0]
71024e29c8  str x13,[x11, #0xc0]
71024e29cc  ldr x13,[x8, #0x12a0]
71024e29d0  ldr x14,[x8, #0x12b0]
71024e29d4  str x14,[x11, #0xf0]
71024e29d8  str x13,[x11, #0xe0]
71024e29dc  ldr x13,[x8, #0x12c0]
71024e29e0  b 0x71024df620
71024e29e4  str wzr,[x11]
71024e29e8  str wzr,[x19, #0x1f90]
71024e29ec  b 0x71024e2c64
71024e29f0  cmp w2,#0x250, LSL #12
71024e29f4  b.lt 0x71024e2bd4
71024e29f8  orr w1,wzr,#0x7
71024e29fc  b 0x71024e5478
71024e2a00  mov w10,#0x1
71024e2a04  str x8,[x9, #0x158]
71024e2a08  str w10,[x9, #0x2158]
71024e2a0c  b 0x71024e2c64
71024e2a10  orr w23,wzr,#0x3
71024e2a14  mov x9,x21
71024e2a18  b 0x71024e4c28
71024e2a1c  cmp w2,#0x50, LSL #12
71024e2a20  b.lt 0x71024e2bf4
71024e2a24  mov w1,#0x2
71024e2a28  b 0x71024e2c48
71024e2a2c  ldrb w8,[x8, #0x25b]
71024e2a30  cmp w8,#0x0
71024e2a34  mov w8,#0xa
71024e2a38  orr w9,wzr,#0x3
71024e2a3c  csel w2,w9,w8,eq
71024e2a40  b 0x71024e2a50
71024e2a44  orr w2,wzr,#0xc
71024e2a48  b 0x71024e2a50
71024e2a4c  orr w2,wzr,#0x3
71024e2a50  ldr x8,[x19, #0x1f80]
71024e2a54  ldrsh w9,[x19, #0x17e4]
71024e2a58  sub w1,w9,w13
71024e2a5c  ldr x0,[x8, #0x80]
71024e2a60  b 0x71024e0c64
71024e2a64  mov x10,xzr
71024e2a68  b 0x71024e53fc
71024e2a6c  ldr w11,[x8, #0x134c]
71024e2a70  cmp w9,w11
71024e2a74  b.ne 0x71024e2af4
71024e2a78  mov w10,#0x1b0
71024e2a7c  madd x10,x9,x10,x8
71024e2a80  ldr x11,[x8, #0x1268]
71024e2a84  str x11,[x10, #0xa8]
71024e2a88  ldr x11,[x8, #0x1278]
71024e2a8c  ldr x12,[x8, #0x1288]
71024e2a90  str x12,[x10, #0xc8]
71024e2a94  str x11,[x10, #0xb8]
71024e2a98  ldr x11,[x8, #0x1298]
71024e2a9c  ldr x12,[x8, #0x12a8]
71024e2aa0  str x12,[x10, #0xe8]
71024e2aa4  str x11,[x10, #0xd8]
71024e2aa8  ldr x12,[x8, #0x12b8]
71024e2aac  ldr x13,[x8, #0x12c8]
71024e2ab0  ldr w11,[x8, #0x12d0]
71024e2ab4  str x13,[x10, #0x108]
71024e2ab8  str x12,[x10, #0xf8]
71024e2abc  ldr x12,[x8, #0x1260]
71024e2ac0  ldr x13,[x8, #0x1270]
71024e2ac4  str x13,[x10, #0xb0]
71024e2ac8  str x12,[x10, #0xa0]
71024e2acc  ldr x12,[x8, #0x1280]
71024e2ad0  ldr x13,[x8, #0x1290]
71024e2ad4  str x13,[x10, #0xd0]
71024e2ad8  str x12,[x10, #0xc0]
71024e2adc  ldr x12,[x8, #0x12a0]
71024e2ae0  ldr x13,[x8, #0x12b0]
71024e2ae4  str x13,[x10, #0xf0]
71024e2ae8  str x12,[x10, #0xe0]
71024e2aec  ldr x12,[x8, #0x12c0]
71024e2af0  b 0x71024e0378
71024e2af4  str wzr,[x10]
71024e2af8  str wzr,[x19, #0x1f90]
71024e2afc  ldr x8,[x19, #0x17f0]
71024e2b00  tst x8,#0xffffffffff
71024e2b04  b.eq 0x71024e2c64
71024e2b08  adrp x9,0x710532a000
71024e2b0c  ldr x9,[x9, #0x868]
71024e2b10  ldr x9,[x9]
71024e2b14  ldr x11,[x9, #0x300]
71024e2b18  ldr x9,[x9, #0x308]
71024e2b1c  cmp x11,x9
71024e2b20  b.eq 0x71024e2b40
71024e2b24  ldr x10,[x11]
71024e2b28  eor x10,x10,x8
71024e2b2c  tst x10,#0xffffffffff
71024e2b30  b.eq 0x71024e2b54
71024e2b34  add x11,x11,#0x18
71024e2b38  cmp x9,x11
71024e2b3c  b.ne 0x71024e2b24
71024e2b40  mov x20,x18
71024e2b44  mov w8,wzr
71024e2b48  mov w9,wzr
71024e2b4c  mov w10,wzr
71024e2b50  b 0x71024e2b60
71024e2b54  ldp w10,w9,[x11, #0x8]
71024e2b58  ldr w8,[x11, #0x10]
71024e2b5c  mov x20,x18
71024e2b60  ldrsh w12,[x19, #0x17e4]
71024e2b64  ldrsh w13,[x19, #0x17e2]
71024e2b68  stp w10,w9,[x29, #-0xc0]
71024e2b6c  sub w12,w12,w13
71024e2b70  orr x13,xzr,#0x3f8000003f800000
71024e2b74  fmov s2,0x3f800000
71024e2b78  scvtf s0,w12
71024e2b7c  fmov s4,wzr
71024e2b80  adrp x11,0x7105334000
71024e2b84  ldr x0,[x11, #0x948]
71024e2b88  fmov s1,0x3f000000
71024e2b8c  mov v3.16B,v2.16B
71024e2b90  mov v5.16B,v4.16B
71024e2b94  orr w12,wzr,#0x3f800000
71024e2b98  orr w1,wzr,#0x3
71024e2b9c  orr w2,wzr,#0xff
71024e2ba0  add x3,sp,#0x160
71024e2ba4  sub x4,x29,#0xc0
71024e2ba8  mov w5,wzr
71024e2bac  mov w6,wzr
71024e2bb0  stp x13,x12,[sp, #0x160]
71024e2bb4  stp w8,w12,[x29, #-0xb8]
71024e2bb8  bl 0x7103566b20
71024e2bbc  str w0,[x19, #0x1f90]
71024e2bc0  mov x18,x20
71024e2bc4  b 0x71024e2c64
71024e2bc8  mov w23,#0x4
71024e2bcc  mov x9,x28
71024e2bd0  b 0x71024e4c28
71024e2bd4  cmp w2,#0x200, LSL #12
71024e2bd8  b.lt 0x71024e2c20
71024e2bdc  mov w1,#0x5
71024e2be0  b 0x71024e5478
71024e2be4  ldr x10,[sp, #0x98]
71024e2be8  b 0x71024e52e4
71024e2bec  mov w10,#0x1
71024e2bf0  b 0x71024e53fc
71024e2bf4  cmp w2,#0x10, LSL #12
71024e2bf8  b.lt 0x71024e2c3c
71024e2bfc  mov w1,#0x1
71024e2c00  b 0x71024e2c48
71024e2c04  mov w23,#0x5
71024e2c08  mov x9,x27
71024e2c0c  b 0x71024e4c28
71024e2c10  ldr x10,[sp, #0x88]
71024e2c14  b 0x71024e52e4
71024e2c18  mov w10,#0x2
71024e2c1c  b 0x71024e53fc
71024e2c20  cmp w2,#0x150, LSL #12
71024e2c24  b.lt 0x71024e4ae0
71024e2c28  orr w1,wzr,#0x6
71024e2c2c  b 0x71024e5478
71024e2c30  orr w23,wzr,#0x6
71024e2c34  mov x9,x26
71024e2c38  b 0x71024e4c28
71024e2c3c  cmp w2,#0x1
71024e2c40  orr w9,wzr,#0x3
71024e2c44  csel w1,w9,wzr,lt
71024e2c48  ldr x0,[x8]
71024e2c4c  bl 0x7103775dc0
71024e2c50  mov w8,#0x1
71024e2c54  strb w8,[x20, #0x110]
71024e2c58  ldr x0,[x19, #0x1f80]
71024e2c5c  bl 0x7101e8a300
71024e2c60  mov x18,x21
71024e2c64  ldr w8,[x19, #0x1828]
71024e2c68  ldrsh w9,[x19, #0x17fc]
71024e2c6c  cmp w8,w9
71024e2c70  b.ne 0x71024e2c9c
71024e2c74  ldr w8,[x19, #0x1800]
71024e2c78  cbz w8,0x71024e2c9c
71024e2c7c  ldr x9,[x19, #0x18]
71024e2c80  str w8,[x9, #0x438]
71024e2c84  ldrsh w8,[x19, #0x1804]
71024e2c88  tbnz w8,#0x1f,0x71024e2c9c
71024e2c8c  scvtf s0,w8
71024e2c90  ldr x9,[x19, #0x18]
71024e2c94  ldr x9,[x9, #0x428]
71024e2c98  str s0,[x9, #0x219c]
71024e2c9c  ldr w8,[x19, #0x1828]
71024e2ca0  ldrsh w9,[x19, #0x1806]
71024e2ca4  mov w10,#0x17e8
71024e2ca8  ldp x27,x26,[sp, #0xf8]
71024e2cac  cmp w8,w9
71024e2cb0  ldr x28,[sp, #0xf0]
71024e2cb4  b.ne 0x71024e2ce0
71024e2cb8  ldrsh w9,[x19, #0x1808]
71024e2cbc  tbnz w9,#0x1f,0x71024e2ce0
71024e2cc0  ldr w9,[x18, #0x248]
71024e2cc4  and w9,w9,#0xfffffffe
71024e2cc8  cmp w9,#0x2
71024e2ccc  b.eq 0x71024e2ce0
71024e2cd0  mov w8,#0x2
71024e2cd4  str wzr,[x18, #0x238]
71024e2cd8  str w8,[x18, #0x248]
71024e2cdc  ldr w8,[x19, #0x1828]
71024e2ce0  ldrsh w9,[x19, #0x180a]
71024e2ce4  cmp w8,w9
71024e2ce8  b.ne 0x71024e304c
71024e2cec  ldr x8,[x19, #0x1810]
71024e2cf0  tst x8,#0xffffffffff
71024e2cf4  b.eq 0x71024e304c
71024e2cf8  ldr x8,[sp, #0xe0]
71024e2cfc  ldr x8,[x8]
71024e2d00  mov w22,#0x6500
71024e2d04  movk w22,#0x87, LSL #16
71024e2d08  str x18,[sp, #0x28]
71024e2d0c  tst x8,#0xffffffffff
71024e2d10  b.eq 0x71024e2e30
71024e2d14  add x8,sp,#0x160
71024e2d18  add x23,x8,#0x28
71024e2d1c  ldr w8,[x19, #0x18a0]
71024e2d20  adrp x20,0x7104f73000
71024e2d24  add x20,x20,#0xd50
71024e2d28  str wzr,[sp, #0x178]
71024e2d2c  stp x20,xzr,[sp, #0x168]
71024e2d30  str w22,[sp, #0x17c]
71024e2d34  strb wzr,[sp, #0x180]
71024e2d38  str w8,[sp, #0x160]
71024e2d3c  ldr x8,[x19, #0x18b0]
71024e2d40  cbz x8,0x71024e2d7c
71024e2d44  adrp x9,0x7106dd5000
71024e2d48  ldr w9,[x9, #0x3ac]
71024e2d4c  cbz w9,0x71024e2d58
71024e2d50  str w9,[sp, #0x178]
71024e2d54  b 0x71024e2d60
71024e2d58  str xzr,[sp, #0x170]
71024e2d5c  strb wzr,[sp, #0x180]
71024e2d60  str x8,[sp, #0x170]
71024e2d64  add x8,x8,#0x38
71024e2d68  ldaxr w9,[x8]
71024e2d6c  add w9,w9,#0x1
71024e2d70  stlxr w10,w9,[x8]
71024e2d74  cbnz w10,0x71024e2d68
71024e2d78  strb wzr,[sp, #0x180]
71024e2d7c  adrp x24,0x7104f73000
71024e2d80  add x24,x24,#0xd30
71024e2d84  str x24,[sp, #0x168]
71024e2d88  ldr x8,[x19, #0x18c8]
71024e2d8c  ldr x9,[x19, #0x18d0]
71024e2d90  ldr x10,[x19, #0x18d8]
71024e2d94  add x0,sp,#0x160
71024e2d98  stp x9,x10,[x23, #0x8]
71024e2d9c  str x8,[x23]
71024e2da0  bl 0x71024d15d0
71024e2da4  ldr x8,[sp, #0x170]
71024e2da8  str x20,[sp, #0x168]
71024e2dac  cbz x8,0x71024e2de8
71024e2db0  adrp x9,0x7106dd5000
71024e2db4  ldrb w9,[x9, #0x3a8]
71024e2db8  cmp w9,#0x1
71024e2dbc  b.ne 0x71024e2de8
71024e2dc0  adrp x10,0x7106dd5000
71024e2dc4  ldr w9,[sp, #0x178]
71024e2dc8  ldr w10,[x10, #0x3ac]
71024e2dcc  cmp w9,w10
71024e2dd0  b.ne 0x71024e2de8
71024e2dd4  ldr wzr,[x8, #0x38]!
71024e2dd8  ldaxr w9,[x8]
71024e2ddc  sub w9,w9,#0x1
71024e2de0  stlxr w10,w9,[x8]
71024e2de4  cbnz w10,0x71024e2dd8
71024e2de8  tbz w0,#0x0,0x71024e2e30
71024e2dec  ldr x9,[sp, #0xd0]
71024e2df0  ldr x8,[x9]
71024e2df4  tst x8,#0xffffffffff
71024e2df8  b.eq 0x71024e39b4
71024e2dfc  ldr w8,[x19, #0x18f0]
71024e2e00  str w8,[sp, #0x160]
71024e2e04  str wzr,[sp, #0x178]
71024e2e08  stp x20,xzr,[sp, #0x168]
71024e2e0c  str w22,[sp, #0x17c]
71024e2e10  strb wzr,[sp, #0x180]
71024e2e14  ldr x8,[x19, #0x1900]
71024e2e18  cbz x8,0x71024e39e8
71024e2e1c  adrp x9,0x7106dd5000
71024e2e20  ldr w9,[x9, #0x3ac]
71024e2e24  cbz w9,0x71024e39c4
71024e2e28  str w9,[sp, #0x178]
71024e2e2c  b 0x71024e39cc
71024e2e30  mov w21,w22
71024e2e34  mov x23,xzr
71024e2e38  ldr x22,[sp, #0xe0]
71024e2e3c  ldr x20,[x19, #0x1810]
71024e2e40  mov x0,x22
71024e2e44  ldrsh w24,[x19, #0x180a]
71024e2e48  ldrsh w25,[x19, #0x180c]
71024e2e4c  bl 0x71024db230
71024e2e50  str x20,[x22]
71024e2e54  adrp x8,0x710532a000
71024e2e58  ldr x8,[x8, #0x860]
71024e2e5c  ldr x1,[x8]
71024e2e60  add x0,sp,#0x160
71024e2e64  mov x2,x20
71024e2e68  bl 0x71024d1440
71024e2e6c  mov w9,#0x50
71024e2e70  madd x9,x23,x9,x19
71024e2e74  ldr w8,[sp, #0x160]
71024e2e78  str w8,[x9, #0x18a0]
71024e2e7c  ldr x8,[sp, #0x170]
71024e2e80  cbz x8,0x71024e2f10
71024e2e84  mov w9,#0x50
71024e2e88  madd x9,x23,x9,x19
71024e2e8c  ldr w9,[x9, #0x18bc]
71024e2e90  ldr x18,[sp, #0x28]
71024e2e94  cmp w9,w21
71024e2e98  b.ne 0x71024e2fc8
71024e2e9c  mov w10,#0x50
71024e2ea0  madd x10,x23,x10,x19
71024e2ea4  adrp x9,0x7106dd5000
71024e2ea8  ldr w9,[x9, #0x3ac]
71024e2eac  ldr w11,[x10, #0x18b8]
71024e2eb0  cmp w11,w9
71024e2eb4  b.ne 0x71024e2f84
71024e2eb8  mov w9,#0x50
71024e2ebc  madd x10,x23,x9,x19
71024e2ec0  mov w9,#0x18b0
71024e2ec4  add x9,x10,x9
71024e2ec8  ldr x10,[x10, #0x18b0]
71024e2ecc  cbz x10,0x71024e2ef4
71024e2ed0  adrp x11,0x7106dd5000
71024e2ed4  ldrb w11,[x11, #0x3a8]
71024e2ed8  cmp w11,#0x1
71024e2edc  b.ne 0x71024e2ef4
71024e2ee0  ldr wzr,[x10, #0x38]!
71024e2ee4  ldaxr w11,[x10]
71024e2ee8  sub w11,w11,#0x1
71024e2eec  stlxr w12,w11,[x10]
71024e2ef0  cbnz w12,0x71024e2ee4
71024e2ef4  mov w10,#0x50
71024e2ef8  madd x10,x23,x10,x19
71024e2efc  mov w11,#0x18c0
71024e2f00  add x10,x10,x11
71024e2f04  str xzr,[x9]
71024e2f08  strb wzr,[x10]
71024e2f0c  b 0x71024e2fa8
71024e2f10  mov w8,#0x50
71024e2f14  madd x9,x23,x8,x19
71024e2f18  mov w8,#0x18b0
71024e2f1c  add x8,x9,x8
71024e2f20  ldr x9,[x9, #0x18b0]
71024e2f24  cbz x9,0x71024e2f68
71024e2f28  adrp x10,0x7106dd5000
71024e2f2c  ldrb w10,[x10, #0x3a8]
71024e2f30  cmp w10,#0x1
71024e2f34  b.ne 0x71024e2f68
71024e2f38  mov w10,#0x50
71024e2f3c  madd x10,x23,x10,x19
71024e2f40  adrp x11,0x7106dd5000
71024e2f44  ldr w11,[x11, #0x3ac]
71024e2f48  ldr w10,[x10, #0x18b8]
71024e2f4c  cmp w10,w11
71024e2f50  b.ne 0x71024e2f68
71024e2f54  ldr wzr,[x9, #0x38]!
71024e2f58  ldaxr w10,[x9]
71024e2f5c  sub w10,w10,#0x1
71024e2f60  stlxr w11,w10,[x9]
71024e2f64  cbnz w11,0x71024e2f58
71024e2f68  str xzr,[x8]
71024e2f6c  mov w8,#0x50
71024e2f70  madd x8,x23,x8,x19
71024e2f74  ldr x18,[sp, #0x28]
71024e2f78  mov w9,#0x18c0
71024e2f7c  add x10,x8,x9
71024e2f80  b 0x71024e2fc0
71024e2f84  mov w11,#0x18b8
71024e2f88  add x10,x10,x11
71024e2f8c  mov w11,#0x18c0
71024e2f90  str w9,[x10]
71024e2f94  mov w9,#0x50
71024e2f98  madd x10,x23,x9,x19
71024e2f9c  mov w9,#0x18b0
71024e2fa0  add x9,x10,x9
71024e2fa4  add x10,x10,x11
71024e2fa8  str x8,[x9]
71024e2fac  add x8,x8,#0x38
71024e2fb0  ldaxr w9,[x8]
71024e2fb4  add w9,w9,#0x1
71024e2fb8  stlxr w11,w9,[x8]
71024e2fbc  cbnz w11,0x71024e2fb0
71024e2fc0  strb wzr,[x10]
71024e2fc4  ldr x8,[sp, #0x170]
71024e2fc8  mov w9,#0x50
71024e2fcc  madd x9,x23,x9,x19
71024e2fd0  ldr x12,[sp, #0x198]
71024e2fd4  ldp x10,x11,[sp, #0x188]
71024e2fd8  str x12,[x9, #0x18d8]
71024e2fdc  str x11,[x9, #0x18d0]
71024e2fe0  str x10,[x9, #0x18c8]
71024e2fe4  adrp x9,0x7104f73000
71024e2fe8  add x9,x9,#0xd50
71024e2fec  str x9,[sp, #0x168]
71024e2ff0  cbz x8,0x71024e302c
71024e2ff4  adrp x9,0x7106dd5000
71024e2ff8  ldrb w9,[x9, #0x3a8]
71024e2ffc  cmp w9,#0x1
71024e3000  b.ne 0x71024e302c
71024e3004  adrp x10,0x7106dd5000
71024e3008  ldr w9,[sp, #0x178]
71024e300c  ldr w10,[x10, #0x3ac]
71024e3010  cmp w9,w10
71024e3014  b.ne 0x71024e302c
71024e3018  ldr wzr,[x8, #0x38]!
71024e301c  ldaxr w9,[x8]
71024e3020  sub w9,w9,#0x1
71024e3024  stlxr w10,w9,[x8]
71024e3028  cbnz w10,0x71024e301c
71024e302c  and w8,w25,#0xffff
71024e3030  cmp w8,w24, UXTH 
71024e3034  mov w10,#0x17e8
71024e3038  b.ls 0x71024e304c
71024e303c  mov w9,#0x50
71024e3040  madd x9,x23,x9,x19
71024e3044  sub w8,w25,w24
71024e3048  str w8,[x9, #0x18e0]
71024e304c  ldr w8,[x19, #0x1828]
71024e3050  ldrsh w9,[x19, #0x1818]
71024e3054  add x22,x19,x10
71024e3058  ldr x23,[sp, #0xe8]
71024e305c  cmp w8,w9
71024e3060  b.ne 0x71024e3104
71024e3064  ldr x1,[x19, #0x1820]
71024e3068  tst x1,#0xffffffffff
71024e306c  b.eq 0x71024e3104
71024e3070  ldr w8,[x23]
71024e3074  cbz w8,0x71024e30e4
71024e3078  ldr x23,[sp, #0xd8]
71024e307c  ldr w8,[x23]
71024e3080  cbz w8,0x71024e30e4
71024e3084  ldr w8,[x26]
71024e3088  mov x23,x26
71024e308c  cbz w8,0x71024e30e4
71024e3090  ldr w8,[x27]
71024e3094  mov x23,x27
71024e3098  cbz w8,0x71024e30e4
71024e309c  ldr w8,[x28]
71024e30a0  mov x23,x28
71024e30a4  cbz w8,0x71024e30e4
71024e30a8  ldur x23,[x29, #-0x58]
71024e30ac  ldr w8,[x23]
71024e30b0  cbz w8,0x71024e30e4
71024e30b4  ldr x23,[sp, #0x120]
71024e30b8  ldr w8,[x23]
71024e30bc  cbz w8,0x71024e30e4
71024e30c0  ldr x23,[sp, #0x118]
71024e30c4  ldr w8,[x23]
71024e30c8  cbz w8,0x71024e30e4
71024e30cc  ldr x23,[sp, #0x110]
71024e30d0  ldr w8,[x23]
71024e30d4  cbz w8,0x71024e30e4
71024e30d8  ldr x23,[sp, #0x108]
71024e30dc  ldr w8,[x23]
71024e30e0  cbnz w8,0x71024e3104
71024e30e4  adrp x21,0x710532a000
71024e30e8  ldr x8,[x21, #0x860]
71024e30ec  ldr x8,[x8]
71024e30f0  mov w9,#0xf3d7
71024e30f4  movk w9,#0x5, LSL #16
71024e30f8  ldrb w8,[x8, x9, LSL ]
71024e30fc  cbz w8,0x71024e3380
71024e3100  str wzr,[x23]
71024e3104  ldr w8,[x19, #0x1828]
71024e3108  add w9,w8,#0x1
71024e310c  str w9,[x19, #0x1828]
71024e3110  ldr w8,[x22]
71024e3114  cmp w8,#0x9c
71024e3118  b.ne 0x71024e3128
71024e311c  ldr x8,[x19, #0x10]
71024e3120  ldrb w8,[x8, #0x970]
71024e3124  cbz w8,0x71024e4578
71024e3128  ldrsh w8,[x19, #0x17e0]
71024e312c  cmp w9,w8
71024e3130  b.cc 0x71024e4578
71024e3134  mov x0,x19
71024e3138  bl 0x71024e57b0
71024e313c  tbnz w0,#0x0,0x71024e4578
71024e3140  ldr w8,[x22]
71024e3144  cmp w8,#0x13
71024e3148  b.ne 0x71024e3160
71024e314c  adrp x8,0x710532f000
71024e3150  ldr x8,[x8, #0x8d0]
71024e3154  ldr x0,[x8, #0x8]
71024e3158  bl 0x71033148b0
71024e315c  ldr w8,[x22]
71024e3160  cmp w8,#0x51
71024e3164  b.ne 0x71024e31e4
71024e3168  adrp x8,0x710532f000
71024e316c  ldr x8,[x8, #0x7e8]
71024e3170  ldr x8,[x8, #0x8]
71024e3174  ldrb w9,[x8, #0x161]
71024e3178  cbz w9,0x71024e31b0
71024e317c  orr x9,xzr,#0x600000000
71024e3180  str x9,[x8, #0x98]
71024e3184  orr x9,xzr,#-0x100000000
71024e3188  stp xzr,xzr,[x8, #0x8]
71024e318c  stur x9,[x8, #0xec]
71024e3190  orr x9,xzr,#-0xffffffff
71024e3194  str wzr,[x8, #0xe0]
71024e3198  strb wzr,[x8, #0xf4]
71024e319c  stur x9,[x8, #0xe4]
71024e31a0  stp xzr,xzr,[x8, #0xd0]
71024e31a4  stp xzr,xzr,[x8, #0xc0]
71024e31a8  stp xzr,xzr,[x8, #0xb0]
71024e31ac  stp xzr,xzr,[x8, #0xa0]
71024e31b0  adrp x8,0x710532f000
71024e31b4  ldr x8,[x8, #0x7f0]
71024e31b8  ldr x8,[x8, #0x8]
71024e31bc  ldr x0,[x8, #0x8]
71024e31c0  mov w1,wzr
71024e31c4  bl 0x71032eb9f0
71024e31c8  mov w8,#0x1f9f
71024e31cc  ldrb w8,[x19, x8, LSL ]
71024e31d0  cbz w8,0x71024e31e4
71024e31d4  adrp x8,0x710532f000
71024e31d8  ldr x8,[x8, #0x7c8]
71024e31dc  ldr x0,[x8, #0x8]
71024e31e0  bl 0x71032e5e60
71024e31e4  ldr w8,[x22]
71024e31e8  cmp w8,#0x63
71024e31ec  b.ne 0x71024e3228
71024e31f0  movi v0.2D,#0x0
71024e31f4  mov w8,#0x17c0
71024e31f8  add x8,x19,x8
71024e31fc  ld1 {v0.S}[0],[x8]
71024e3200  mov w8,#0x17c4
71024e3204  add x8,x19,x8
71024e3208  ld1 {v0.S}[1],[x8]
71024e320c  mov w8,#0x17c8
71024e3210  add x8,x19,x8
71024e3214  ldr w9,[x19, #0x17cc]
71024e3218  ld1 {v0.S}[2],[x8]
71024e321c  ldr x8,[x19, #0x10]
71024e3220  str w9,[x8, #0x168]
71024e3224  str q0,[x8, #0x120]
71024e3228  ldr x8,[x19, #0x1788]
71024e322c  tst x8,#0xffffffffff
71024e3230  b.eq 0x71024e3258
71024e3234  ldr x0,[x19, #0x48]
71024e3238  ldr x1,[x19, #0x58]
71024e323c  ldr w2,[x19, #0x1778]
71024e3240  ldr w3,[x19, #0x177c]
71024e3244  ldr x4,[x19, #0x1780]
71024e3248  bl 0x7102510150
71024e324c  tbz w0,#0x0,0x71024e3258
71024e3250  ldr x23,[x19, #0x1788]
71024e3254  b 0x71024e325c
71024e3258  mov x23,xzr
71024e325c  ldr x8,[x19, #0x17a0]
71024e3260  tst x8,#0xffffffffff
71024e3264  b.eq 0x71024e3300
71024e3268  ldr x0,[x19, #0x48]
71024e326c  ldr x1,[x19, #0x58]
71024e3270  ldr w2,[x19, #0x1790]
71024e3274  ldr w3,[x19, #0x1794]
71024e3278  ldr x4,[x19, #0x1798]
71024e327c  bl 0x7102510150
71024e3280  tbz w0,#0x0,0x71024e3300
71024e3284  ldr x20,[x19, #0x17a0]
71024e3288  ldr w24,[x19, #0x1768]
71024e328c  cbnz w24,0x71024e330c
71024e3290  tst x23,#0xffffffffff
71024e3294  b.eq 0x71024e3cb4
71024e3298  adrp x8,0x710532a000
71024e329c  ldr x8,[x8, #0x868]
71024e32a0  ldr x9,[x8]
71024e32a4  sub x8,x29,#0xc0
71024e32a8  stp xzr,xzr,[sp, #0x190]
71024e32ac  stp xzr,xzr,[sp, #0x180]
71024e32b0  stur xzr,[x8, #0x1c]
71024e32b4  stp xzr,xzr,[sp, #0x170]
71024e32b8  stur xzr,[x8, #0x24]
71024e32bc  stur xzr,[x8, #0x14]
71024e32c0  stur xzr,[x8, #0xc]
71024e32c4  stur xzr,[x8, #0x4]
71024e32c8  str wzr,[sp, #0x140]
71024e32cc  stp xzr,xzr,[sp, #0x160]
71024e32d0  ldr x8,[x9, #0x3a0]
71024e32d4  ldr x9,[x9, #0x3a8]
71024e32d8  cmp x8,x9
71024e32dc  b.eq 0x71024e3cb4
71024e32e0  ldr x10,[x8]
71024e32e4  eor x10,x10,x23
71024e32e8  tst x10,#0xffffffffff
71024e32ec  b.eq 0x71024e3808
71024e32f0  add x8,x8,#0xb8
71024e32f4  cmp x9,x8
71024e32f8  b.ne 0x71024e32e0
71024e32fc  b 0x71024e3cb4
71024e3300  mov x20,xzr
71024e3304  ldr w24,[x19, #0x1768]
71024e3308  cbz w24,0x71024e3290
71024e330c  tst x20,#0xffffffffff
71024e3310  b.eq 0x71024e3654
71024e3314  adrp x8,0x710532a000
71024e3318  ldr x8,[x8, #0x868]
71024e331c  ldr x9,[x8]
71024e3320  sub x8,x29,#0xc0
71024e3324  stp xzr,xzr,[sp, #0x190]
71024e3328  stp xzr,xzr,[sp, #0x180]
71024e332c  stur xzr,[x8, #0x1c]
71024e3330  stp xzr,xzr,[sp, #0x170]
71024e3334  stur xzr,[x8, #0x24]
71024e3338  stur xzr,[x8, #0x14]
71024e333c  stur xzr,[x8, #0xc]
71024e3340  stur xzr,[x8, #0x4]
71024e3344  str wzr,[sp, #0x140]
71024e3348  stp xzr,xzr,[sp, #0x160]
71024e334c  ldr x8,[x9, #0x3a0]
71024e3350  ldr x10,[x9, #0x3a8]
71024e3354  cmp x8,x10
71024e3358  b.eq 0x71024e3654
71024e335c  sxtw x9,w24
71024e3360  ldr x11,[x8]
71024e3364  eor x11,x11,x20
71024e3368  tst x11,#0xffffffffff
71024e336c  b.eq 0x71024e3458
71024e3370  add x8,x8,#0xb8
71024e3374  cmp x10,x8
71024e3378  b.ne 0x71024e3360
71024e337c  b 0x71024e3654
71024e3380  movi v0.2D,#0x0
71024e3384  sub x8,x29,#0xc0
71024e3388  adrp x20,0x7105334000
71024e338c  str q0,[x8]
71024e3390  adrp x8,0x7104466000
71024e3394  mov w7,#0xffffffff
71024e3398  orr w2,wzr,#0x1800000
71024e339c  str q0,[sp, #0x160]
71024e33a0  ldr q0,[x8, #0x2b0]
71024e33a4  ldr x8,[x20, #0x920]
71024e33a8  add x3,sp,#0x160
71024e33ac  str q0,[sp, #0x140]
71024e33b0  ldr x0,[x8]
71024e33b4  sub x4,x29,#0xc0
71024e33b8  add x5,sp,#0x140
71024e33bc  mov w6,wzr
71024e33c0  str wzr,[sp]
71024e33c4  mov x24,x18
71024e33c8  bl 0x7103563430
71024e33cc  str w0,[x23]
71024e33d0  cbz w0,0x71024e3104
71024e33d4  tbnz w0,#0x1f,0x71024e3104
71024e33d8  ldr x8,[x20, #0x920]
71024e33dc  ldr x9,[x8]
71024e33e0  lsr w8,w0,#0x18
71024e33e4  orr w10,wzr,#0x300
71024e33e8  umaddl x10,w8,w10,x9
71024e33ec  ldr w11,[x10, #0x4]
71024e33f0  cmp w11,w0
71024e33f4  b.ne 0x71024e3104
71024e33f8  cbz x10,0x71024e3104
71024e33fc  ldr x11,[x21, #0x860]
71024e3400  adrp x10,0x710532a000
71024e3404  ldr x10,[x10, #0x868]
71024e3408  ldr x11,[x11]
71024e340c  ldr x10,[x10]
71024e3410  ldr w11,[x11, #0x78]
71024e3414  mov x12,x24
71024e3418  mov w12,#0x138
71024e341c  ldr q3,[x24, #0xa0]
71024e3420  ldr s2,[x24, #0xb0]
71024e3424  ldr s0,[x10, #0x104]
71024e3428  madd x10,x11,x12,x10
71024e342c  ldr s1,[x10, #0x51c]
71024e3430  orr w10,wzr,#0x300
71024e3434  madd x10,x8,x10,x9
71024e3438  ldrb w10,[x10, #0x2d6]
71024e343c  cbz w10,0x71024e4130
71024e3440  orr w10,wzr,#0x300
71024e3444  madd x10,x8,x10,x9
71024e3448  add x11,x10,#0xfc
71024e344c  ld1 {v3.S}[3],[x11]
71024e3450  str q3,[x10, #0xf0]
71024e3454  b 0x71024e4154
71024e3458  ldp x10,x11,[x8]
71024e345c  cmp w24,#0x1f
71024e3460  ldp x12,x13,[x8, #0x10]
71024e3464  stp x12,x13,[sp, #0x170]
71024e3468  stp x10,x11,[sp, #0x160]
71024e346c  ldp x10,x11,[x8, #0x20]
71024e3470  ldp x12,x13,[x8, #0x30]
71024e3474  stp x12,x13,[sp, #0x190]
71024e3478  stp x10,x11,[sp, #0x180]
71024e347c  ldur x10,[x8, #0x44]
71024e3480  ldur x11,[x8, #0x4c]
71024e3484  ldr w28,[x8, #0x40]
71024e3488  stp x10,x11,[x29, #-0xc0]
71024e348c  ldur x10,[x8, #0x54]
71024e3490  ldur x11,[x8, #0x5c]
71024e3494  ldur x12,[x8, #0x64]
71024e3498  ldr w13,[x8, #0x6c]
71024e349c  stur w13,[x29, #-0x98]
71024e34a0  stp x11,x12,[x29, #-0xa8]
71024e34a4  stur x10,[x29, #-0xb0]
71024e34a8  ldur w10,[x8, #0x72]
71024e34ac  ldrh w11,[x8, #0x76]
71024e34b0  ldrh w25,[x8, #0x70]
71024e34b4  strh w11,[sp, #0x144]
71024e34b8  str w10,[sp, #0x140]
71024e34bc  ldrh w10,[x8, #0x8e]
71024e34c0  ldp w12,w13,[x8, #0x78]
71024e34c4  ldr x14,[x8, #0x80]
71024e34c8  ldr w15,[x8, #0x88]
71024e34cc  ldrh w16,[x8, #0x8c]
71024e34d0  sturh w10,[x29, #-0xc4]
71024e34d4  ldrh w10,[x8, #0x9e]
71024e34d8  ldr x17,[x8, #0x90]
71024e34dc  ldrh w18,[x8, #0x98]
71024e34e0  ldrh w0,[x8, #0x9a]
71024e34e4  ldrh w1,[x8, #0x9c]
71024e34e8  sturh w10,[x29, #-0xc8]
71024e34ec  ldr x26,[x8, #0xa0]
71024e34f0  ldrh w27,[x8, #0xa8]
71024e34f4  ldur w10,[x8, #0xaa]
71024e34f8  ldrh w11,[x8, #0xae]
71024e34fc  strh w11,[sp, #0x12c]
71024e3500  str w10,[sp, #0x128]
71024e3504  b.hi 0x71024e3654
71024e3508  cbz w25,0x71024e3654
71024e350c  ldr x8,[x8, #0xb0]
71024e3510  mov w20,#0xb8
71024e3514  str x8,[sp, #0xe0]
71024e3518  madd x8,x9,x20,x19
71024e351c  sub x21,x8,#0x50
71024e3520  str w1,[sp, #0xe8]
71024e3524  str w0,[sp, #0xf0]
71024e3528  str w18,[sp, #0xf8]
71024e352c  str x17,[sp, #0x100]
71024e3530  str w16,[sp, #0x108]
71024e3534  str w15,[sp, #0x110]
71024e3538  str x14,[sp, #0x118]
71024e353c  str w13,[sp, #0x120]
71024e3540  stur w12,[x29, #-0x58]
71024e3544  smaddl x8,w24,w20,x19
71024e3548  add x0,x8,#0x68
71024e354c  mov x1,x21
71024e3550  mov x2,x20
71024e3554  bl 0x71039c00e0
71024e3558  sub w8,w24,#0x1
71024e355c  cmp w24,#0x2
71024e3560  sub x21,x21,#0xb8
71024e3564  mov w24,w8
71024e3568  b.pl 0x71024e3544
71024e356c  ldp x11,x8,[sp, #0x170]
71024e3570  ldp x9,x10,[sp, #0x160]
71024e3574  stp x11,x8,[x19, #0x78]
71024e3578  ldp x8,x12,[sp, #0x180]
71024e357c  ldp x13,x14,[sp, #0x190]
71024e3580  str w28,[x19, #0xa8]
71024e3584  stp x9,x10,[x19, #0x68]
71024e3588  stp x13,x14,[x19, #0x98]
71024e358c  stp x8,x12,[x19, #0x88]
71024e3590  ldp x9,x8,[x29, #-0xc0]
71024e3594  stur x8,[x19, #0xb4]
71024e3598  ldur w10,[x29, #-0x98]
71024e359c  ldp x8,x12,[x29, #-0xb0]
71024e35a0  ldur x11,[x29, #-0xa0]
71024e35a4  stur x9,[x19, #0xac]
71024e35a8  ldr w9,[x19, #0x1768]
71024e35ac  strh w25,[x19, #0xd8]
71024e35b0  str w10,[x19, #0xd4]
71024e35b4  ldur w10,[x29, #-0x58]
71024e35b8  stur x12,[x19, #0xc4]
71024e35bc  stur x11,[x19, #0xcc]
71024e35c0  stur x8,[x19, #0xbc]
71024e35c4  add w24,w9,#0x1
71024e35c8  ldr w8,[sp, #0x140]
71024e35cc  ldrh w9,[sp, #0x144]
71024e35d0  str w10,[x19, #0xe0]
71024e35d4  ldr w10,[sp, #0x120]
71024e35d8  strh w9,[x19, #0xde]
71024e35dc  ldr x9,[sp, #0x100]
71024e35e0  str w10,[x19, #0xe4]
71024e35e4  ldr x10,[sp, #0x118]
71024e35e8  str x10,[x19, #0xe8]
71024e35ec  ldr w10,[sp, #0x110]
71024e35f0  str w10,[x19, #0xf0]
71024e35f4  ldr w10,[sp, #0x108]
71024e35f8  strh w10,[x19, #0xf4]
71024e35fc  stur w8,[x19, #0xda]
71024e3600  ldurh w8,[x29, #-0xc4]
71024e3604  str x9,[x19, #0xf8]
71024e3608  ldr w9,[sp, #0xf8]
71024e360c  strh w9,[x19, #0x100]
71024e3610  ldr w9,[sp, #0xf0]
71024e3614  strh w9,[x19, #0x102]
71024e3618  ldr w9,[sp, #0xe8]
71024e361c  strh w9,[x19, #0x104]
71024e3620  strh w8,[x19, #0xf6]
71024e3624  ldurh w8,[x29, #-0xc8]
71024e3628  str x26,[x19, #0x108]
71024e362c  strh w27,[x19, #0x110]
71024e3630  strh w8,[x19, #0x106]
71024e3634  ldr w8,[sp, #0x128]
71024e3638  add x12,x19,#0x112
71024e363c  ldrh w9,[sp, #0x12c]
71024e3640  str w8,[x12]
71024e3644  ldr x8,[sp, #0xe0]
71024e3648  strh w9,[x19, #0x116]
71024e364c  str w24,[x19, #0x1768]
71024e3650  str x8,[x19, #0x118]
71024e3654  tst x23,#0xffffffffff
71024e3658  b.eq 0x71024e446c
71024e365c  adrp x8,0x710532a000
71024e3660  ldr x8,[x8, #0x868]
71024e3664  ldr x9,[x8]
71024e3668  sub x8,x29,#0xc0
71024e366c  stp xzr,xzr,[sp, #0x190]
71024e3670  stp xzr,xzr,[sp, #0x180]
71024e3674  stur xzr,[x8, #0x1c]
71024e3678  stp xzr,xzr,[sp, #0x170]
71024e367c  stur xzr,[x8, #0x24]
71024e3680  stur xzr,[x8, #0x14]
71024e3684  stur xzr,[x8, #0xc]
71024e3688  stur xzr,[x8, #0x4]
71024e368c  str wzr,[sp, #0x140]
71024e3690  stp xzr,xzr,[sp, #0x160]
71024e3694  ldr x8,[x9, #0x3a0]
71024e3698  ldr x9,[x9, #0x3a8]
71024e369c  cmp x8,x9
71024e36a0  b.eq 0x71024e446c
71024e36a4  ldr x10,[x8]
71024e36a8  eor x10,x10,x23
71024e36ac  tst x10,#0xffffffffff
71024e36b0  b.eq 0x71024e36c4
71024e36b4  add x8,x8,#0xb8
71024e36b8  cmp x9,x8
71024e36bc  b.ne 0x71024e36a4
71024e36c0  b 0x71024e446c
71024e36c4  ldp x9,x10,[x8]
71024e36c8  cmp w24,#0x1f
71024e36cc  ldp x11,x12,[x8, #0x10]
71024e36d0  stp x11,x12,[sp, #0x170]
71024e36d4  stp x9,x10,[sp, #0x160]
71024e36d8  ldp x9,x10,[x8, #0x20]
71024e36dc  ldp x11,x12,[x8, #0x30]
71024e36e0  stp x11,x12,[sp, #0x190]
71024e36e4  stp x9,x10,[sp, #0x180]
71024e36e8  ldur x9,[x8, #0x44]
71024e36ec  ldur x10,[x8, #0x4c]
71024e36f0  ldr w25,[x8, #0x40]
71024e36f4  stp x9,x10,[x29, #-0xc0]
71024e36f8  ldur x9,[x8, #0x54]
71024e36fc  ldur x10,[x8, #0x5c]
71024e3700  ldur x11,[x8, #0x64]
71024e3704  ldr w12,[x8, #0x6c]
71024e3708  stur w12,[x29, #-0x98]
71024e370c  stp x10,x11,[x29, #-0xa8]
71024e3710  stur x9,[x29, #-0xb0]
71024e3714  ldur w9,[x8, #0x72]
71024e3718  ldrh w10,[x8, #0x76]
71024e371c  ldrh w26,[x8, #0x70]
71024e3720  strh w10,[sp, #0x144]
71024e3724  str w9,[sp, #0x140]
71024e3728  ldrh w9,[x8, #0x8e]
71024e372c  ldp w27,w28,[x8, #0x78]
71024e3730  ldr x23,[x8, #0x80]
71024e3734  ldr w16,[x8, #0x88]
71024e3738  ldrh w17,[x8, #0x8c]
71024e373c  sturh w9,[x29, #-0xc4]
71024e3740  ldrh w9,[x8, #0x9e]
71024e3744  ldr x18,[x8, #0x90]
71024e3748  ldrh w0,[x8, #0x98]
71024e374c  ldrh w1,[x8, #0x9a]
71024e3750  ldrh w2,[x8, #0x9c]
71024e3754  sturh w9,[x29, #-0xc8]
71024e3758  ldr x3,[x8, #0xa0]
71024e375c  ldrh w4,[x8, #0xa8]
71024e3760  ldur w9,[x8, #0xaa]
71024e3764  ldrh w10,[x8, #0xae]
71024e3768  strh w10,[sp, #0x12c]
71024e376c  str w9,[sp, #0x128]
71024e3770  b.hi 0x71024e446c
71024e3774  cbz w26,0x71024e446c
71024e3778  ldr x5,[x8, #0xb0]
71024e377c  cbz w24,0x71024e3aa8
71024e3780  mov w20,#0xb8
71024e3784  smaddl x8,w24,w20,x19
71024e3788  sub x21,x8,#0x50
71024e378c  str x5,[sp, #0xe8]
71024e3790  str w4,[sp, #0xf0]
71024e3794  str x3,[sp, #0xf8]
71024e3798  str w2,[sp, #0x100]
71024e379c  str w1,[sp, #0x108]
71024e37a0  str w0,[sp, #0x110]
71024e37a4  str x18,[sp, #0x118]
71024e37a8  str w17,[sp, #0x120]
71024e37ac  stur w16,[x29, #-0x58]
71024e37b0  smaddl x8,w24,w20,x19
71024e37b4  add x0,x8,#0x68
71024e37b8  mov x1,x21
71024e37bc  mov x2,x20
71024e37c0  bl 0x71039c00e0
71024e37c4  sub w8,w24,#0x1
71024e37c8  cmp w24,#0x2
71024e37cc  sub x21,x21,#0xb8
71024e37d0  mov w24,w8
71024e37d4  b.pl 0x71024e37b0
71024e37d8  ldr w8,[x19, #0x1768]
71024e37dc  ldur w16,[x29, #-0x58]
71024e37e0  add w8,w8,#0x1
71024e37e4  ldr w17,[sp, #0x120]
71024e37e8  ldr x18,[sp, #0x118]
71024e37ec  ldr w0,[sp, #0x110]
71024e37f0  ldr w1,[sp, #0x108]
71024e37f4  ldr w2,[sp, #0x100]
71024e37f8  ldr x3,[sp, #0xf8]
71024e37fc  ldr w4,[sp, #0xf0]
71024e3800  ldr x5,[sp, #0xe8]
71024e3804  b 0x71024e3aac
71024e3808  ldp x9,x10,[x8]
71024e380c  ldp x11,x12,[x8, #0x10]
71024e3810  stp x11,x12,[sp, #0x170]
71024e3814  stp x9,x10,[sp, #0x160]
71024e3818  ldp x9,x10,[x8, #0x20]
71024e381c  ldp x11,x12,[x8, #0x30]
71024e3820  stp x11,x12,[sp, #0x190]
71024e3824  stp x9,x10,[sp, #0x180]
71024e3828  ldur x9,[x8, #0x44]
71024e382c  ldur x10,[x8, #0x4c]
71024e3830  ldr w23,[x8, #0x40]
71024e3834  stp x9,x10,[x29, #-0xc0]
71024e3838  ldur x9,[x8, #0x54]
71024e383c  ldur x10,[x8, #0x5c]
71024e3840  ldur x11,[x8, #0x64]
71024e3844  ldr w12,[x8, #0x6c]
71024e3848  stur w12,[x29, #-0x98]
71024e384c  stp x10,x11,[x29, #-0xa8]
71024e3850  stur x9,[x29, #-0xb0]
71024e3854  ldur w9,[x8, #0x72]
71024e3858  ldrh w10,[x8, #0x76]
71024e385c  ldrh w27,[x8, #0x70]
71024e3860  strh w10,[sp, #0x144]
71024e3864  str w9,[sp, #0x140]
71024e3868  ldrh w9,[x8, #0x8e]
71024e386c  ldp w21,w7,[x8, #0x78]
71024e3870  ldr x6,[x8, #0x80]
71024e3874  ldr w5,[x8, #0x88]
71024e3878  ldrh w4,[x8, #0x8c]
71024e387c  sturh w9,[x29, #-0xc4]
71024e3880  ldrh w9,[x8, #0x9e]
71024e3884  ldr x3,[x8, #0x90]
71024e3888  ldrh w28,[x8, #0x98]
71024e388c  ldrh w26,[x8, #0x9a]
71024e3890  ldrh w25,[x8, #0x9c]
71024e3894  sturh w9,[x29, #-0xc8]
71024e3898  ldr x24,[x8, #0xa0]
71024e389c  ldrh w16,[x8, #0xa8]
71024e38a0  ldur w9,[x8, #0xaa]
71024e38a4  ldrh w10,[x8, #0xae]
71024e38a8  strh w10,[sp, #0x12c]
71024e38ac  str w9,[sp, #0x128]
71024e38b0  cbz w27,0x71024e3cb4
71024e38b4  ldr x15,[x8, #0xb0]
71024e38b8  ldr w8,[x22]
71024e38bc  cmp w8,#0x9c
71024e38c0  b.ne 0x71024e38d0
71024e38c4  ldr x8,[x19, #0x10]
71024e38c8  ldrb w8,[x8, #0x970]
71024e38cc  cbz w8,0x71024e38e4
71024e38d0  ldrsh w8,[x19, #0x17e0]
71024e38d4  ldr w9,[x19, #0x1828]
71024e38d8  cmp w9,w8
71024e38dc  b.cs 0x71024e3b74
71024e38e0  mov w8,wzr
71024e38e4  mov w9,#0xb8
71024e38e8  umaddl x8,w8,w9,x19
71024e38ec  ldp x9,x10,[sp, #0x160]
71024e38f0  ldp x11,x12,[sp, #0x170]
71024e38f4  stp x11,x12,[x8, #0x78]
71024e38f8  stp x9,x10,[x8, #0x68]
71024e38fc  ldp x9,x10,[sp, #0x180]
71024e3900  ldp x11,x12,[sp, #0x190]
71024e3904  str w23,[x8, #0xa8]
71024e3908  stp x11,x12,[x8, #0x98]
71024e390c  stp x9,x10,[x8, #0x88]
71024e3910  ldp x9,x10,[x29, #-0xc0]
71024e3914  stur x10,[x8, #0xb4]
71024e3918  stur x9,[x8, #0xac]
71024e391c  ldp x9,x10,[x29, #-0xb0]
71024e3920  ldur x11,[x29, #-0xa0]
71024e3924  ldur w12,[x29, #-0x98]
71024e3928  str w12,[x8, #0xd4]
71024e392c  stur x11,[x8, #0xcc]
71024e3930  stur x10,[x8, #0xc4]
71024e3934  stur x9,[x8, #0xbc]
71024e3938  strh w27,[x8, #0xd8]
71024e393c  ldr w9,[sp, #0x140]
71024e3940  ldrh w10,[sp, #0x144]
71024e3944  strh w10,[x8, #0xde]
71024e3948  stur w9,[x8, #0xda]
71024e394c  stp w21,w7,[x8, #0xe0]
71024e3950  str x6,[x8, #0xe8]
71024e3954  str w5,[x8, #0xf0]
71024e3958  strh w4,[x8, #0xf4]
71024e395c  ldurh w9,[x29, #-0xc4]
71024e3960  strh w9,[x8, #0xf6]
71024e3964  str x3,[x8, #0xf8]
71024e3968  strh w28,[x8, #0x100]
71024e396c  strh w26,[x8, #0x102]
71024e3970  strh w25,[x8, #0x104]
71024e3974  ldurh w9,[x29, #-0xc8]
71024e3978  strh w9,[x8, #0x106]
71024e397c  str x24,[x8, #0x108]
71024e3980  strh w16,[x8, #0x110]
71024e3984  ldr w10,[sp, #0x128]
71024e3988  ldrh w11,[sp, #0x12c]
71024e398c  add x9,x8,#0x112
71024e3990  strh w11,[x8, #0x116]
71024e3994  str w10,[x9]
71024e3998  str x15,[x8, #0x118]
71024e399c  ldr w8,[x19, #0x1768]
71024e39a0  add w8,w8,#0x1
71024e39a4  str w8,[x19, #0x1768]
71024e39a8  tst x20,#0xffffffffff
71024e39ac  b.ne 0x71024e3cbc
71024e39b0  b 0x71024e446c
71024e39b4  mov w21,w22
71024e39b8  mov w23,#0x1
71024e39bc  str x9,[sp, #0xe0]
71024e39c0  b 0x71024e2e38
71024e39c4  str xzr,[sp, #0x170]
71024e39c8  strb wzr,[sp, #0x180]
71024e39cc  str x8,[sp, #0x170]
71024e39d0  add x8,x8,#0x38
71024e39d4  ldaxr w9,[x8]
71024e39d8  add w9,w9,#0x1
71024e39dc  stlxr w10,w9,[x8]
71024e39e0  cbnz w10,0x71024e39d4
71024e39e4  strb wzr,[sp, #0x180]
71024e39e8  str x24,[sp, #0x168]
71024e39ec  ldr x8,[x19, #0x1918]
71024e39f0  ldr x9,[x19, #0x1920]
71024e39f4  ldr x10,[x19, #0x1928]
71024e39f8  add x0,sp,#0x160
71024e39fc  str x8,[x23]
71024e3a00  stp x9,x10,[x23, #0x8]
71024e3a04  bl 0x71024d15d0
71024e3a08  ldr x8,[sp, #0x170]
71024e3a0c  str x20,[sp, #0x168]
71024e3a10  cbz x8,0x71024e3a4c
71024e3a14  adrp x9,0x7106dd5000
71024e3a18  ldrb w9,[x9, #0x3a8]
71024e3a1c  cmp w9,#0x1
71024e3a20  b.ne 0x71024e3a4c
71024e3a24  adrp x10,0x7106dd5000
71024e3a28  ldr w9,[sp, #0x178]
71024e3a2c  ldr w10,[x10, #0x3ac]
71024e3a30  cmp w9,w10
71024e3a34  b.ne 0x71024e3a4c
71024e3a38  ldr wzr,[x8, #0x38]!
71024e3a3c  ldaxr w9,[x8]
71024e3a40  sub w9,w9,#0x1
71024e3a44  stlxr w10,w9,[x8]
71024e3a48  cbnz w10,0x71024e3a3c
71024e3a4c  tbz w0,#0x0,0x71024e3a94
71024e3a50  ldr x9,[sp, #0xc8]
71024e3a54  ldr x8,[x9]
71024e3a58  tst x8,#0xffffffffff
71024e3a5c  b.eq 0x71024e3b64
71024e3a60  ldr w8,[x19, #0x1940]
71024e3a64  str w8,[sp, #0x160]
71024e3a68  str wzr,[sp, #0x178]
71024e3a6c  stp x20,xzr,[sp, #0x168]
71024e3a70  str w22,[sp, #0x17c]
71024e3a74  strb wzr,[sp, #0x180]
71024e3a78  ldr x8,[x19, #0x1950]
71024e3a7c  cbz x8,0x71024e4274
71024e3a80  adrp x9,0x7106dd5000
71024e3a84  ldr w9,[x9, #0x3ac]
71024e3a88  cbz w9,0x71024e4250
71024e3a8c  str w9,[sp, #0x178]
71024e3a90  b 0x71024e4258
71024e3a94  ldr x8,[sp, #0xd0]
71024e3a98  mov w21,w22
71024e3a9c  mov w23,#0x1
71024e3aa0  str x8,[sp, #0xe0]
71024e3aa4  b 0x71024e2e38
71024e3aa8  mov w8,#0x1
71024e3aac  ldp x9,x10,[sp, #0x160]
71024e3ab0  ldp x11,x12,[sp, #0x170]
71024e3ab4  stp x11,x12,[x19, #0x78]
71024e3ab8  stp x9,x10,[x19, #0x68]
71024e3abc  ldp x9,x10,[sp, #0x180]
71024e3ac0  ldp x11,x12,[sp, #0x190]
71024e3ac4  str w25,[x19, #0xa8]
71024e3ac8  stp x11,x12,[x19, #0x98]
71024e3acc  stp x9,x10,[x19, #0x88]
71024e3ad0  ldp x9,x10,[x29, #-0xc0]
71024e3ad4  stur x10,[x19, #0xb4]
71024e3ad8  stur x9,[x19, #0xac]
71024e3adc  ldp x9,x10,[x29, #-0xb0]
71024e3ae0  ldur x11,[x29, #-0xa0]
71024e3ae4  ldur w12,[x29, #-0x98]
71024e3ae8  strh w26,[x19, #0xd8]
71024e3aec  str w12,[x19, #0xd4]
71024e3af0  stur x11,[x19, #0xcc]
71024e3af4  stur x10,[x19, #0xc4]
71024e3af8  stur x9,[x19, #0xbc]
71024e3afc  ldr w9,[sp, #0x140]
71024e3b00  ldrh w10,[sp, #0x144]
71024e3b04  stp w27,w28,[x19, #0xe0]
71024e3b08  str x23,[x19, #0xe8]
71024e3b0c  str w16,[x19, #0xf0]
71024e3b10  strh w17,[x19, #0xf4]
71024e3b14  strh w10,[x19, #0xde]
71024e3b18  stur w9,[x19, #0xda]
71024e3b1c  ldurh w9,[x29, #-0xc4]
71024e3b20  str x18,[x19, #0xf8]
71024e3b24  strh w0,[x19, #0x100]
71024e3b28  strh w1,[x19, #0x102]
71024e3b2c  strh w2,[x19, #0x104]
71024e3b30  strh w9,[x19, #0xf6]
71024e3b34  ldurh w9,[x29, #-0xc8]
71024e3b38  str x3,[x19, #0x108]
71024e3b3c  strh w4,[x19, #0x110]
71024e3b40  strh w9,[x19, #0x106]
71024e3b44  ldr w9,[sp, #0x128]
71024e3b48  ldrh w10,[sp, #0x12c]
71024e3b4c  add x12,x19,#0x112
71024e3b50  strh w10,[x19, #0x116]
71024e3b54  str w9,[x12]
71024e3b58  str x5,[x19, #0x118]
71024e3b5c  str w8,[x19, #0x1768]
71024e3b60  b 0x71024e446c
71024e3b64  mov w21,w22
71024e3b68  mov w23,#0x2
71024e3b6c  str x9,[sp, #0xe0]
71024e3b70  b 0x71024e2e38
71024e3b74  mov x0,x19
71024e3b78  str w23,[sp, #0xf8]
71024e3b7c  str w21,[sp, #0x100]
71024e3b80  str w7,[sp, #0x108]
71024e3b84  mov w23,w16
71024e3b88  mov x21,x15
71024e3b8c  str x6,[sp, #0x110]
71024e3b90  str w5,[sp, #0x118]
71024e3b94  str w4,[sp, #0x120]
71024e3b98  stur x3,[x29, #-0x58]
71024e3b9c  bl 0x71024e57b0
71024e3ba0  ldr w8,[x19, #0x1768]
71024e3ba4  cbnz w8,0x71024e46e0
71024e3ba8  mov x15,x21
71024e3bac  mov w16,w23
71024e3bb0  ldur x3,[x29, #-0x58]
71024e3bb4  ldr w4,[sp, #0x120]
71024e3bb8  ldr w5,[sp, #0x118]
71024e3bbc  ldr x6,[sp, #0x110]
71024e3bc0  ldr w7,[sp, #0x108]
71024e3bc4  ldr w21,[sp, #0x100]
71024e3bc8  ldr w23,[sp, #0xf8]
71024e3bcc  tbnz w0,#0x0,0x71024e38e4
71024e3bd0  ldp x8,x9,[sp, #0x160]
71024e3bd4  ldr x14,[sp, #0x30]
71024e3bd8  ldp x10,x11,[sp, #0x170]
71024e3bdc  mov w12,#0x17bc
71024e3be0  stp x10,x11,[x14, #0x10]
71024e3be4  mov w13,#0x17b4
71024e3be8  stp x8,x9,[x14]
71024e3bec  mov x0,x19
71024e3bf0  ldp x8,x9,[sp, #0x180]
71024e3bf4  ldp x10,x11,[sp, #0x190]
71024e3bf8  stp x10,x11,[x14, #0x30]
71024e3bfc  mov w10,#0x17d4
71024e3c00  stp x8,x9,[x14, #0x20]
71024e3c04  str w23,[x19, #0x17b0]
71024e3c08  ldp x8,x9,[x29, #-0xc0]
71024e3c0c  str x9,[x19, x12, LSL #0x0]
71024e3c10  str x8,[x19, x13, LSL #0x0]
71024e3c14  ldur x12,[x29, #-0xa0]
71024e3c18  ldp x9,x11,[x29, #-0xb0]
71024e3c1c  ldur w8,[x29, #-0x98]
71024e3c20  str x12,[x19, x10, LSL #0x0]
71024e3c24  mov w10,#0x17cc
71024e3c28  str x11,[x19, x10, LSL #0x0]
71024e3c2c  mov w10,#0x17c4
71024e3c30  str x9,[x19, x10, LSL #0x0]
71024e3c34  str w8,[x19, #0x17dc]
71024e3c38  strh w27,[x19, #0x17e0]
71024e3c3c  ldrh w8,[sp, #0x144]
71024e3c40  ldr w9,[sp, #0x140]
71024e3c44  mov w10,#0x17e2
71024e3c48  str w9,[x19, x10, LSL #0x0]
71024e3c4c  strh w8,[x19, #0x17e6]
71024e3c50  str w21,[x19, #0x17e8]
71024e3c54  str w7,[x19, #0x17ec]
71024e3c58  str x6,[x19, #0x17f0]
71024e3c5c  str w5,[x19, #0x17f8]
71024e3c60  strh w4,[x19, #0x17fc]
71024e3c64  ldurh w8,[x29, #-0xc4]
71024e3c68  str x3,[x19, #0x1800]
71024e3c6c  strh w28,[x19, #0x1808]
71024e3c70  strh w26,[x19, #0x180a]
71024e3c74  strh w25,[x19, #0x180c]
71024e3c78  strh w8,[x19, #0x17fe]
71024e3c7c  ldurh w8,[x29, #-0xc8]
71024e3c80  str x24,[x19, #0x1810]
71024e3c84  strh w16,[x19, #0x1818]
71024e3c88  strh w8,[x19, #0x180e]
71024e3c8c  ldrh w8,[sp, #0x12c]
71024e3c90  ldr w10,[sp, #0x128]
71024e3c94  mov w9,#0x181a
71024e3c98  strh w8,[x19, #0x181e]
71024e3c9c  mov w8,#0x1f95
71024e3ca0  str w10,[x19, x9, LSL #0x0]
71024e3ca4  str x15,[x19, #0x1820]
71024e3ca8  str wzr,[x19, #0x1828]
71024e3cac  strb wzr,[x19, x8, LSL ]
71024e3cb0  bl 0x71024dd520
71024e3cb4  tst x20,#0xffffffffff
71024e3cb8  b.eq 0x71024e446c
71024e3cbc  ldr w23,[x19, #0x1768]
71024e3cc0  cbz w23,0x71024e3d30
71024e3cc4  adrp x8,0x710532a000
71024e3cc8  ldr x8,[x8, #0x868]
71024e3ccc  ldr x9,[x8]
71024e3cd0  sub x8,x29,#0xc0
71024e3cd4  stp xzr,xzr,[sp, #0x190]
71024e3cd8  stp xzr,xzr,[sp, #0x180]
71024e3cdc  stur xzr,[x8, #0x1c]
71024e3ce0  stp xzr,xzr,[sp, #0x170]
71024e3ce4  stur xzr,[x8, #0x24]
71024e3ce8  stur xzr,[x8, #0x14]
71024e3cec  stur xzr,[x8, #0xc]
71024e3cf0  stur xzr,[x8, #0x4]
71024e3cf4  str wzr,[sp, #0x140]
71024e3cf8  stp xzr,xzr,[sp, #0x160]
71024e3cfc  ldr x8,[x9, #0x3a0]
71024e3d00  ldr x10,[x9, #0x3a8]
71024e3d04  cmp x8,x10
71024e3d08  b.eq 0x71024e446c
71024e3d0c  sxtw x9,w23
71024e3d10  ldr x11,[x8]
71024e3d14  eor x11,x11,x20
71024e3d18  tst x11,#0xffffffffff
71024e3d1c  b.eq 0x71024e3d98
71024e3d20  add x8,x8,#0xb8
71024e3d24  cmp x10,x8
71024e3d28  b.ne 0x71024e3d10
71024e3d2c  b 0x71024e446c
71024e3d30  adrp x8,0x710532a000
71024e3d34  ldr x8,[x8, #0x868]
71024e3d38  ldr x9,[x8]
71024e3d3c  sub x8,x29,#0xc0
71024e3d40  stp xzr,xzr,[sp, #0x190]
71024e3d44  stp xzr,xzr,[sp, #0x180]
71024e3d48  stur xzr,[x8, #0x1c]
71024e3d4c  stp xzr,xzr,[sp, #0x170]
71024e3d50  stur xzr,[x8, #0x24]
71024e3d54  stur xzr,[x8, #0x14]
71024e3d58  stur xzr,[x8, #0xc]
71024e3d5c  stur xzr,[x8, #0x4]
71024e3d60  str wzr,[sp, #0x140]
71024e3d64  stp xzr,xzr,[sp, #0x160]
71024e3d68  ldr x8,[x9, #0x3a0]
71024e3d6c  ldr x9,[x9, #0x3a8]
71024e3d70  cmp x8,x9
71024e3d74  b.eq 0x71024e446c
71024e3d78  ldr x10,[x8]
71024e3d7c  eor x10,x10,x20
71024e3d80  tst x10,#0xffffffffff
71024e3d84  b.eq 0x71024e3f90
71024e3d88  add x8,x8,#0xb8
71024e3d8c  cmp x9,x8
71024e3d90  b.ne 0x71024e3d78
71024e3d94  b 0x71024e446c
71024e3d98  ldp x10,x11,[x8]
71024e3d9c  cmp w23,#0x1f
71024e3da0  ldp x12,x13,[x8, #0x10]
71024e3da4  stp x12,x13,[sp, #0x170]
71024e3da8  stp x10,x11,[sp, #0x160]
71024e3dac  ldp x10,x11,[x8, #0x20]
71024e3db0  ldp x12,x13,[x8, #0x30]
71024e3db4  stp x12,x13,[sp, #0x190]
71024e3db8  stp x10,x11,[sp, #0x180]
71024e3dbc  ldur x10,[x8, #0x44]
71024e3dc0  ldur x11,[x8, #0x4c]
71024e3dc4  ldr w25,[x8, #0x40]
71024e3dc8  stp x10,x11,[x29, #-0xc0]
71024e3dcc  ldur x10,[x8, #0x54]
71024e3dd0  ldur x11,[x8, #0x5c]
71024e3dd4  ldur x12,[x8, #0x64]
71024e3dd8  ldr w13,[x8, #0x6c]
71024e3ddc  stur w13,[x29, #-0x98]
71024e3de0  stp x11,x12,[x29, #-0xa8]
71024e3de4  stur x10,[x29, #-0xb0]
71024e3de8  ldur w10,[x8, #0x72]
71024e3dec  ldrh w11,[x8, #0x76]
71024e3df0  ldrh w26,[x8, #0x70]
71024e3df4  strh w11,[sp, #0x144]
71024e3df8  str w10,[sp, #0x140]
71024e3dfc  ldrh w10,[x8, #0x8e]
71024e3e00  ldp w12,w13,[x8, #0x78]
71024e3e04  ldr x14,[x8, #0x80]
71024e3e08  ldr w15,[x8, #0x88]
71024e3e0c  ldrh w16,[x8, #0x8c]
71024e3e10  sturh w10,[x29, #-0xc4]
71024e3e14  ldrh w10,[x8, #0x9e]
71024e3e18  ldr x17,[x8, #0x90]
71024e3e1c  ldrh w18,[x8, #0x98]
71024e3e20  ldrh w0,[x8, #0x9a]
71024e3e24  ldrh w27,[x8, #0x9c]
71024e3e28  sturh w10,[x29, #-0xc8]
71024e3e2c  ldr x28,[x8, #0xa0]
71024e3e30  ldrh w24,[x8, #0xa8]
71024e3e34  ldur w10,[x8, #0xaa]
71024e3e38  ldrh w11,[x8, #0xae]
71024e3e3c  strh w11,[sp, #0x12c]
71024e3e40  str w10,[sp, #0x128]
71024e3e44  b.hi 0x71024e446c
71024e3e48  cbz w26,0x71024e446c
71024e3e4c  ldr x8,[x8, #0xb0]
71024e3e50  mov w20,#0xb8
71024e3e54  str x8,[sp, #0xe8]
71024e3e58  madd x8,x9,x20,x19
71024e3e5c  sub x21,x8,#0x50
71024e3e60  str w0,[sp, #0xf0]
71024e3e64  str w18,[sp, #0xf8]
71024e3e68  str x17,[sp, #0x100]
71024e3e6c  str w16,[sp, #0x108]
71024e3e70  str w15,[sp, #0x110]
71024e3e74  str x14,[sp, #0x118]
71024e3e78  str w13,[sp, #0x120]
71024e3e7c  stur w12,[x29, #-0x58]
71024e3e80  smaddl x8,w23,w20,x19
71024e3e84  add x0,x8,#0x68
71024e3e88  mov x1,x21
71024e3e8c  mov x2,x20
71024e3e90  bl 0x71039c00e0
71024e3e94  sub w8,w23,#0x1
71024e3e98  cmp w23,#0x2
71024e3e9c  sub x21,x21,#0xb8
71024e3ea0  mov w23,w8
71024e3ea4  b.pl 0x71024e3e80
71024e3ea8  ldp x11,x8,[sp, #0x170]
71024e3eac  ldp x9,x10,[sp, #0x160]
71024e3eb0  stp x11,x8,[x19, #0x78]
71024e3eb4  ldp x8,x12,[sp, #0x180]
71024e3eb8  ldp x13,x14,[sp, #0x190]
71024e3ebc  str w25,[x19, #0xa8]
71024e3ec0  stp x9,x10,[x19, #0x68]
71024e3ec4  stp x13,x14,[x19, #0x98]
71024e3ec8  stp x8,x12,[x19, #0x88]
71024e3ecc  ldp x9,x8,[x29, #-0xc0]
71024e3ed0  stur x8,[x19, #0xb4]
71024e3ed4  ldur x11,[x29, #-0xa0]
71024e3ed8  ldp x8,x12,[x29, #-0xb0]
71024e3edc  ldur w10,[x29, #-0x98]
71024e3ee0  stur x9,[x19, #0xac]
71024e3ee4  strh w26,[x19, #0xd8]
71024e3ee8  ldr w9,[x19, #0x1768]
71024e3eec  stur x11,[x19, #0xcc]
71024e3ef0  ldur w11,[x29, #-0x58]
71024e3ef4  stur x12,[x19, #0xc4]
71024e3ef8  str w10,[x19, #0xd4]
71024e3efc  stur x8,[x19, #0xbc]
71024e3f00  ldr w8,[sp, #0x140]
71024e3f04  ldrh w10,[sp, #0x144]
71024e3f08  str w11,[x19, #0xe0]
71024e3f0c  ldr w11,[sp, #0x120]
71024e3f10  strh w10,[x19, #0xde]
71024e3f14  ldr x10,[sp, #0x100]
71024e3f18  str w11,[x19, #0xe4]
71024e3f1c  ldr x11,[sp, #0x118]
71024e3f20  str x11,[x19, #0xe8]
71024e3f24  ldr w11,[sp, #0x110]
71024e3f28  str w11,[x19, #0xf0]
71024e3f2c  ldr w11,[sp, #0x108]
71024e3f30  strh w11,[x19, #0xf4]
71024e3f34  stur w8,[x19, #0xda]
71024e3f38  ldurh w8,[x29, #-0xc4]
71024e3f3c  str x10,[x19, #0xf8]
71024e3f40  ldr w10,[sp, #0xf8]
71024e3f44  strh w10,[x19, #0x100]
71024e3f48  ldr w10,[sp, #0xf0]
71024e3f4c  strh w10,[x19, #0x102]
71024e3f50  strh w27,[x19, #0x104]
71024e3f54  strh w8,[x19, #0xf6]
71024e3f58  ldurh w8,[x29, #-0xc8]
71024e3f5c  str x28,[x19, #0x108]
71024e3f60  strh w24,[x19, #0x110]
71024e3f64  strh w8,[x19, #0x106]
71024e3f68  ldr w8,[sp, #0x128]
71024e3f6c  add x12,x19,#0x112
71024e3f70  ldrh w10,[sp, #0x12c]
71024e3f74  str w8,[x12]
71024e3f78  ldr x8,[sp, #0xe8]
71024e3f7c  add w9,w9,#0x1
71024e3f80  strh w10,[x19, #0x116]
71024e3f84  str w9,[x19, #0x1768]
71024e3f88  str x8,[x19, #0x118]
71024e3f8c  b 0x71024e446c
71024e3f90  ldp x9,x10,[x8]
71024e3f94  ldp x11,x12,[x8, #0x10]
71024e3f98  stp x11,x12,[sp, #0x170]
71024e3f9c  stp x9,x10,[sp, #0x160]
71024e3fa0  ldp x9,x10,[x8, #0x20]
71024e3fa4  ldp x11,x12,[x8, #0x30]
71024e3fa8  stp x11,x12,[sp, #0x190]
71024e3fac  stp x9,x10,[sp, #0x180]
71024e3fb0  ldur x9,[x8, #0x44]
71024e3fb4  ldur x10,[x8, #0x4c]
71024e3fb8  ldr w21,[x8, #0x40]
71024e3fbc  stp x9,x10,[x29, #-0xc0]
71024e3fc0  ldur x9,[x8, #0x54]
71024e3fc4  ldur x10,[x8, #0x5c]
71024e3fc8  ldur x11,[x8, #0x64]
71024e3fcc  ldr w12,[x8, #0x6c]
71024e3fd0  stur w12,[x29, #-0x98]
71024e3fd4  stp x10,x11,[x29, #-0xa8]
71024e3fd8  stur x9,[x29, #-0xb0]
71024e3fdc  ldur w9,[x8, #0x72]
71024e3fe0  ldrh w10,[x8, #0x76]
71024e3fe4  ldrh w25,[x8, #0x70]
71024e3fe8  strh w10,[sp, #0x144]
71024e3fec  str w9,[sp, #0x140]
71024e3ff0  ldrh w9,[x8, #0x8e]
71024e3ff4  ldp w20,w7,[x8, #0x78]
71024e3ff8  ldr x6,[x8, #0x80]
71024e3ffc  ldr w5,[x8, #0x88]
71024e4000  ldrh w4,[x8, #0x8c]
71024e4004  sturh w9,[x29, #-0xc4]
71024e4008  ldrh w9,[x8, #0x9e]
71024e400c  ldr x26,[x8, #0x90]
71024e4010  ldrh w24,[x8, #0x98]
71024e4014  ldrh w23,[x8, #0x9a]
71024e4018  ldrh w18,[x8, #0x9c]
71024e401c  sturh w9,[x29, #-0xc8]
71024e4020  ldr x17,[x8, #0xa0]
71024e4024  ldrh w28,[x8, #0xa8]
71024e4028  ldur w9,[x8, #0xaa]
71024e402c  ldrh w10,[x8, #0xae]
71024e4030  strh w10,[sp, #0x12c]
71024e4034  str w9,[sp, #0x128]
71024e4038  cbz w25,0x71024e446c
71024e403c  ldr x27,[x8, #0xb0]
71024e4040  ldr w8,[x22]
71024e4044  cmp w8,#0x9c
71024e4048  b.ne 0x71024e4058
71024e404c  ldr x8,[x19, #0x10]
71024e4050  ldrb w8,[x8, #0x970]
71024e4054  cbz w8,0x71024e406c
71024e4058  ldrsh w8,[x19, #0x17e0]
71024e405c  ldr w9,[x19, #0x1828]
71024e4060  cmp w9,w8
71024e4064  b.cs 0x71024e4334
71024e4068  mov w8,wzr
71024e406c  mov w9,#0xb8
71024e4070  umaddl x8,w8,w9,x19
71024e4074  ldp x9,x10,[sp, #0x160]
71024e4078  ldp x11,x12,[sp, #0x170]
71024e407c  stp x11,x12,[x8, #0x78]
71024e4080  stp x9,x10,[x8, #0x68]
71024e4084  ldp x9,x10,[sp, #0x180]
71024e4088  ldp x11,x12,[sp, #0x190]
71024e408c  str w21,[x8, #0xa8]
71024e4090  stp x11,x12,[x8, #0x98]
71024e4094  stp x9,x10,[x8, #0x88]
71024e4098  ldp x9,x10,[x29, #-0xc0]
71024e409c  stur x10,[x8, #0xb4]
71024e40a0  stur x9,[x8, #0xac]
71024e40a4  ldp x9,x10,[x29, #-0xb0]
71024e40a8  ldur x11,[x29, #-0xa0]
71024e40ac  ldur w12,[x29, #-0x98]
71024e40b0  str w12,[x8, #0xd4]
71024e40b4  stur x11,[x8, #0xcc]
71024e40b8  stur x10,[x8, #0xc4]
71024e40bc  stur x9,[x8, #0xbc]
71024e40c0  strh w25,[x8, #0xd8]
71024e40c4  ldr w9,[sp, #0x140]
71024e40c8  ldrh w10,[sp, #0x144]
71024e40cc  strh w10,[x8, #0xde]
71024e40d0  stur w9,[x8, #0xda]
71024e40d4  stp w20,w7,[x8, #0xe0]
71024e40d8  str x6,[x8, #0xe8]
71024e40dc  str w5,[x8, #0xf0]
71024e40e0  strh w4,[x8, #0xf4]
71024e40e4  ldurh w9,[x29, #-0xc4]
71024e40e8  strh w9,[x8, #0xf6]
71024e40ec  str x26,[x8, #0xf8]
71024e40f0  strh w24,[x8, #0x100]
71024e40f4  strh w23,[x8, #0x102]
71024e40f8  strh w18,[x8, #0x104]
71024e40fc  ldurh w9,[x29, #-0xc8]
71024e4100  strh w9,[x8, #0x106]
71024e4104  str x17,[x8, #0x108]
71024e4108  strh w28,[x8, #0x110]
71024e410c  ldr w10,[sp, #0x128]
71024e4110  ldrh w11,[sp, #0x12c]
71024e4114  add x9,x8,#0x112
71024e4118  strh w11,[x8, #0x116]
71024e411c  str w10,[x9]
71024e4120  str x27,[x8, #0x118]
71024e4124  ldr w8,[x19, #0x1768]
71024e4128  add w8,w8,#0x1
71024e412c  b 0x71024e3b5c
71024e4130  fmov s4,wzr
71024e4134  ext v5.16B,v3.16B,v3.16B,0x8
71024e4138  orr w10,wzr,#0x300
71024e413c  mov v5.S[0x1],v4.S[0x0]
71024e4140  madd x10,x8,x10,x9
71024e4144  mov v3.D[0x1],v5.D[0x0]
71024e4148  mov w11,#0x1
71024e414c  str q3,[x10, #0x120]
71024e4150  strb w11,[x10, #0x2da]
71024e4154  orr w10,wzr,#0x300
71024e4158  madd x10,x8,x10,x9
71024e415c  ldr x10,[x10, #0x58]
71024e4160  cbnz x10,0x71024e4170
71024e4164  orr w10,wzr,#0x300
71024e4168  madd x9,x8,x10,x9
71024e416c  stp xzr,xzr,[x9, #0x130]
71024e4170  ldr x9,[x20, #0x920]
71024e4174  ldr x9,[x9]
71024e4178  orr w10,wzr,#0x300
71024e417c  madd x10,x8,x10,x9
71024e4180  ldr w11,[x10, #0x4]
71024e4184  cbz x10,0x71024e41cc
71024e4188  cmp w11,w0
71024e418c  b.ne 0x71024e41cc
71024e4190  adrp x10,0x7104472000
71024e4194  ldr s3,[x10, #0x6e0]
71024e4198  add x10,x8,x8, LSL #0x1
71024e419c  lsl x10,x10,#0x8
71024e41a0  add x9,x9,x10
71024e41a4  fmul s2,s2,s3
71024e41a8  movi v3.2D,#0x0
71024e41ac  mov v3.S[0x1],v2.S[0x0]
71024e41b0  mov w11,#0x1
71024e41b4  strb w11,[x9, #0x2da]
71024e41b8  str q3,[x9, #0x110]
71024e41bc  ldr x9,[x20, #0x920]
71024e41c0  ldr x9,[x9]
71024e41c4  add x10,x9,x10
71024e41c8  ldr w11,[x10, #0x4]
71024e41cc  cbz x10,0x71024e4230
71024e41d0  cmp w11,w0
71024e41d4  b.ne 0x71024e4230
71024e41d8  fmul s0,s0,s1
71024e41dc  movi d1,#0x0
71024e41e0  mov v2.16B,v1.16B
71024e41e4  dup v1.2S,v0.S[0x0]
71024e41e8  mov v2.S[0x0],v0.S[0x0]
71024e41ec  add x10,x8,x8, LSL #0x1
71024e41f0  lsl x10,x10,#0x8
71024e41f4  add x9,x9,x10
71024e41f8  mov v1.D[0x1],v2.D[0x0]
71024e41fc  mov w11,#0x1
71024e4200  strb w11,[x9, #0x2da]
71024e4204  ldr w11,[x9, #0x26c]
71024e4208  fcmp s0,s0
71024e420c  and w12,w11,#0xffffdfff
71024e4210  orr w11,w11,#0x2000
71024e4214  csel w11,w11,w12,vs
71024e4218  str q1,[x9, #0x100]
71024e421c  str w11,[x9, #0x26c]
71024e4220  ldr x9,[x20, #0x920]
71024e4224  ldr x9,[x9]
71024e4228  add x10,x9,x10
71024e422c  ldr w11,[x10, #0x4]
71024e4230  cbz x10,0x71024e3104
71024e4234  cmp w11,w0
71024e4238  b.ne 0x71024e3104
71024e423c  orr w10,wzr,#0x300
71024e4240  madd x8,x8,x10,x9
71024e4244  mov w9,#0x1
71024e4248  strb w9,[x8, #0x2d4]
71024e424c  b 0x71024e3104
71024e4250  str xzr,[sp, #0x170]
71024e4254  strb wzr,[sp, #0x180]
71024e4258  str x8,[sp, #0x170]
71024e425c  add x8,x8,#0x38
71024e4260  ldaxr w9,[x8]
71024e4264  add w9,w9,#0x1
71024e4268  stlxr w10,w9,[x8]
71024e426c  cbnz w10,0x71024e4260
71024e4270  strb wzr,[sp, #0x180]
71024e4274  str x24,[sp, #0x168]
71024e4278  ldr x8,[x19, #0x1968]
71024e427c  ldr x9,[x19, #0x1970]
71024e4280  ldr x10,[x19, #0x1978]
71024e4284  add x0,sp,#0x160
71024e4288  str x8,[x23]
71024e428c  stp x9,x10,[x23, #0x8]
71024e4290  bl 0x71024d15d0
71024e4294  ldr x8,[sp, #0x170]
71024e4298  str x20,[sp, #0x168]
71024e429c  cbz x8,0x71024e42d8
71024e42a0  adrp x9,0x7106dd5000
71024e42a4  ldrb w9,[x9, #0x3a8]
71024e42a8  cmp w9,#0x1
71024e42ac  b.ne 0x71024e42d8
71024e42b0  adrp x10,0x7106dd5000
71024e42b4  ldr w9,[sp, #0x178]
71024e42b8  ldr w10,[x10, #0x3ac]
71024e42bc  cmp w9,w10
71024e42c0  b.ne 0x71024e42d8
71024e42c4  ldr wzr,[x8, #0x38]!
71024e42c8  ldaxr w9,[x8]
71024e42cc  sub w9,w9,#0x1
71024e42d0  stlxr w10,w9,[x8]
71024e42d4  cbnz w10,0x71024e42c8
71024e42d8  tbz w0,#0x0,0x71024e4320
71024e42dc  ldr x9,[sp, #0xc0]
71024e42e0  ldr x8,[x9]
71024e42e4  tst x8,#0xffffffffff
71024e42e8  b.eq 0x71024e46d0
71024e42ec  ldr w8,[x19, #0x1990]
71024e42f0  str w8,[sp, #0x160]
71024e42f4  str wzr,[sp, #0x178]
71024e42f8  stp x20,xzr,[sp, #0x168]
71024e42fc  str w22,[sp, #0x17c]
71024e4300  strb wzr,[sp, #0x180]
71024e4304  ldr x8,[x19, #0x19a0]
71024e4308  cbz x8,0x71024e472c
71024e430c  adrp x9,0x7106dd5000
71024e4310  ldr w9,[x9, #0x3ac]
71024e4314  cbz w9,0x71024e4708
71024e4318  str w9,[sp, #0x178]
71024e431c  b 0x71024e4710
71024e4320  ldr x8,[sp, #0xc8]
71024e4324  mov w21,w22
71024e4328  mov w23,#0x2
71024e432c  str x8,[sp, #0xe0]
71024e4330  b 0x71024e2e38
71024e4334  mov x0,x19
71024e4338  str w21,[sp, #0x100]
71024e433c  str w20,[sp, #0x108]
71024e4340  str w7,[sp, #0x110]
71024e4344  mov w21,w18
71024e4348  mov x20,x17
71024e434c  str x6,[sp, #0x118]
71024e4350  str w5,[sp, #0x120]
71024e4354  stur w4,[x29, #-0x58]
71024e4358  bl 0x71024e57b0
71024e435c  ldr w8,[x19, #0x1768]
71024e4360  cbnz w8,0x71024e47ec
71024e4364  mov x17,x20
71024e4368  mov w18,w21
71024e436c  ldur w4,[x29, #-0x58]
71024e4370  ldr w5,[sp, #0x120]
71024e4374  ldr x6,[sp, #0x118]
71024e4378  ldr w7,[sp, #0x110]
71024e437c  ldr w20,[sp, #0x108]
71024e4380  ldr w21,[sp, #0x100]
71024e4384  tbnz w0,#0x0,0x71024e406c
71024e4388  ldp x8,x9,[sp, #0x160]
71024e438c  ldr x14,[sp, #0x30]
71024e4390  ldp x10,x11,[sp, #0x170]
71024e4394  mov w12,#0x17bc
71024e4398  stp x10,x11,[x14, #0x10]
71024e439c  mov w13,#0x17b4
71024e43a0  stp x8,x9,[x14]
71024e43a4  mov x0,x19
71024e43a8  ldp x8,x9,[sp, #0x180]
71024e43ac  ldp x10,x11,[sp, #0x190]
71024e43b0  stp x10,x11,[x14, #0x30]
71024e43b4  mov w10,#0x17d4
71024e43b8  stp x8,x9,[x14, #0x20]
71024e43bc  str w21,[x19, #0x17b0]
71024e43c0  ldp x8,x9,[x29, #-0xc0]
71024e43c4  str x9,[x19, x12, LSL #0x0]
71024e43c8  str x8,[x19, x13, LSL #0x0]
71024e43cc  ldur x12,[x29, #-0xa0]
71024e43d0  ldp x9,x11,[x29, #-0xb0]
71024e43d4  ldur w8,[x29, #-0x98]
71024e43d8  str x12,[x19, x10, LSL #0x0]
71024e43dc  mov w10,#0x17cc
71024e43e0  str x11,[x19, x10, LSL #0x0]
71024e43e4  mov w10,#0x17c4
71024e43e8  str x9,[x19, x10, LSL #0x0]
71024e43ec  str w8,[x19, #0x17dc]
71024e43f0  strh w25,[x19, #0x17e0]
71024e43f4  ldrh w8,[sp, #0x144]
71024e43f8  ldr w9,[sp, #0x140]
71024e43fc  mov w10,#0x17e2
71024e4400  str w9,[x19, x10, LSL #0x0]
71024e4404  strh w8,[x19, #0x17e6]
71024e4408  str w20,[x19, #0x17e8]
71024e440c  str w7,[x19, #0x17ec]
71024e4410  str x6,[x19, #0x17f0]
71024e4414  str w5,[x19, #0x17f8]
71024e4418  strh w4,[x19, #0x17fc]
71024e441c  ldurh w8,[x29, #-0xc4]
71024e4420  str x26,[x19, #0x1800]
71024e4424  strh w24,[x19, #0x1808]
71024e4428  strh w23,[x19, #0x180a]
71024e442c  strh w18,[x19, #0x180c]
71024e4430  strh w8,[x19, #0x17fe]
71024e4434  ldurh w8,[x29, #-0xc8]
71024e4438  str x17,[x19, #0x1810]
71024e443c  strh w28,[x19, #0x1818]
71024e4440  strh w8,[x19, #0x180e]
71024e4444  ldrh w8,[sp, #0x12c]
71024e4448  ldr w10,[sp, #0x128]
71024e444c  mov w9,#0x181a
71024e4450  strh w8,[x19, #0x181e]
71024e4454  mov w8,#0x1f95
71024e4458  str w10,[x19, x9, LSL #0x0]
71024e445c  str x27,[x19, #0x1820]
71024e4460  str wzr,[x19, #0x1828]
71024e4464  strb wzr,[x19, x8, LSL ]
71024e4468  bl 0x71024dd520
71024e446c  ldr w8,[x22]
71024e4470  cmp w8,#0x9c
71024e4474  b.ne 0x71024e4484
71024e4478  ldr x8,[x19, #0x10]
71024e447c  ldrb w8,[x8, #0x970]
71024e4480  cbz w8,0x71024e4578
71024e4484  ldrsh w8,[x19, #0x17e0]
71024e4488  ldr w9,[x19, #0x1828]
71024e448c  cmp w9,w8
71024e4490  b.cc 0x71024e4578
71024e4494  mov x0,x19
71024e4498  bl 0x71024e57b0
71024e449c  tbnz w0,#0x0,0x71024e4578
71024e44a0  ldr w21,[x19, #0x1768]
71024e44a4  cbz w21,0x71024e459c
71024e44a8  ldr x0,[sp, #0x30]
71024e44ac  mov w20,#0xb8
71024e44b0  add x1,x19,#0x68
71024e44b4  mov x2,x20
71024e44b8  bl 0x71039c00e0
71024e44bc  mov w9,#0x1f95
71024e44c0  str wzr,[x19, #0x1828]
71024e44c4  mov x8,xzr
71024e44c8  strb wzr,[x19, x9, LSL ]
71024e44cc  mov w9,#0x16b0
71024e44d0  add x22,x19,x9
71024e44d4  mov w9,#0x16f8
71024e44d8  add x23,x19,x9
71024e44dc  mov w24,#0x1
71024e44e0  orr w25,wzr,#0xffff
71024e44e4  cmp x8,#0x1f
71024e44e8  b.eq 0x71024e4518
71024e44ec  add x26,x8,#0x1
71024e44f0  madd x8,x8,x20,x19
71024e44f4  add x1,x8,#0x120
71024e44f8  add x0,x8,#0x68
71024e44fc  mov x2,x20
71024e4500  bl 0x71039c00e0
71024e4504  ldr w21,[x19, #0x1768]
71024e4508  mov x8,x26
71024e450c  cmp x8,w21, UXTW 
71024e4510  b.cc 0x71024e44e4
71024e4514  b 0x71024e4570
71024e4518  stp xzr,xzr,[x22, #0x30]
71024e451c  mov w8,#0x20
71024e4520  stp xzr,xzr,[x22, #0x20]
71024e4524  stp xzr,xzr,[x22, #0x10]
71024e4528  stp xzr,xzr,[x22]
71024e452c  str w24,[x19, #0x16f0]
71024e4530  str wzr,[x19, #0x1728]
71024e4534  str xzr,[x19, #0x1730]
71024e4538  str wzr,[x19, #0x1738]
71024e453c  strh wzr,[x19, #0x173c]
71024e4540  stur xzr,[x23, #0x26]
71024e4544  str xzr,[x23]
71024e4548  stp xzr,xzr,[x23, #0x18]
71024e454c  stp xzr,xzr,[x23, #0x8]
71024e4550  str xzr,[x19, #0x1740]
71024e4554  str w25,[x19, #0x1748]
71024e4558  strh wzr,[x19, #0x174c]
71024e455c  str xzr,[x19, #0x1750]
71024e4560  strh wzr,[x19, #0x1758]
71024e4564  str xzr,[x19, #0x1760]
71024e4568  cmp x8,w21, UXTW 
71024e456c  b.cc 0x71024e44e4
71024e4570  sub w8,w21,#0x1
71024e4574  str w8,[x19, #0x1768]
71024e4578  add sp,sp,#0x220
71024e457c  ldp x29,x30,[sp, #0x60]
71024e4580  ldp x20,x19,[sp, #0x50]
71024e4584  ldp x22,x21,[sp, #0x40]
71024e4588  ldp x24,x23,[sp, #0x30]
71024e458c  ldp x26,x25,[sp, #0x20]
71024e4590  ldp x28,x27,[sp, #0x10]
71024e4594  ldr d8,[sp], #0x70
71024e4598  ret
71024e459c  ldr x8,[x19, #0x10]
71024e45a0  movi v0.2D,#0x0
71024e45a4  mov w9,#0x1
71024e45a8  add x10,x8,#0x1a4
71024e45ac  str w9,[x8, #0x1dc]
71024e45b0  str wzr,[x8, #0x164]
71024e45b4  str q0,[x8, #0xa0]
71024e45b8  str q0,[x8, #0x110]
71024e45bc  str wzr,[x8, #0x17c]
71024e45c0  str xzr,[x10]
71024e45c4  str wzr,[x8, #0x1ac]
71024e45c8  ldr x8,[sp, #0x30]
71024e45cc  stp xzr,xzr,[x8, #0x30]
71024e45d0  stp xzr,xzr,[x8, #0x20]
71024e45d4  stp xzr,xzr,[x8, #0x10]
71024e45d8  stp xzr,xzr,[x8]
71024e45dc  mov w8,#0x17de
71024e45e0  str w9,[x19, #0x17b0]
71024e45e4  str wzr,[x19, #0x17e8]
71024e45e8  str xzr,[x19, #0x17f0]
71024e45ec  str wzr,[x19, #0x17f8]
71024e45f0  strh wzr,[x19, #0x17fc]
71024e45f4  str xzr,[x19, #0x17d0]
71024e45f8  str xzr,[x19, x8, LSL #0x0]
71024e45fc  orr w8,wzr,#0xffff
71024e4600  str w8,[x19, #0x1808]
71024e4604  ldr x8,[x19, #0x18]
71024e4608  str xzr,[x19, #0x17d8]
71024e460c  str xzr,[x19, #0x17c8]
71024e4610  str xzr,[x19, #0x17c0]
71024e4614  str xzr,[x19, #0x17b8]
71024e4618  str xzr,[x19, #0x1800]
71024e461c  strh wzr,[x19, #0x180c]
71024e4620  str xzr,[x19, #0x1810]
71024e4624  strh wzr,[x19, #0x1818]
71024e4628  str xzr,[x19, #0x1820]
71024e462c  str wzr,[x8, #0x438]
71024e4630  bl 0x710175e350
71024e4634  adrp x8,0x7105329000
71024e4638  ldr x8,[x8, #0xf98]
71024e463c  ldr x8,[x8]
71024e4640  ldr x8,[x8, #0x30]
71024e4644  mov w9,#0x8d68
71024e4648  movk w9,#0x8, LSL #16
71024e464c  add x8,x8,x9
71024e4650  mov w9,#0x1f40
71024e4654  ldursh w10,[x8, #-0xa0]
71024e4658  cmn w10,#0x1
71024e465c  b.ne 0x71024e4694
71024e4660  ldursh w10,[x8, #-0x50]
71024e4664  cmn w10,#0x1
71024e4668  b.ne 0x71024e4694
71024e466c  ldrsh w10,[x8]
71024e4670  cmn w10,#0x1
71024e4674  b.ne 0x71024e4694
71024e4678  ldrsh w10,[x8, #0x50]
71024e467c  cmn w10,#0x1
71024e4680  b.ne 0x71024e4694
71024e4684  subs x9,x9,#0x140
71024e4688  add x8,x8,#0x140
71024e468c  b.ne 0x71024e4654
71024e4690  b 0x71024e4578
71024e4694  ldr x8,[x19, #0x8]
71024e4698  ldr x8,[x8, #0x8]
71024e469c  ldr w10,[x8, #0x24]
71024e46a0  ldrb w9,[x8, #0x28]
71024e46a4  cmp w10,#0x2
71024e46a8  b.ne 0x71024e46b8
71024e46ac  cbnz w9,0x71024e4578
71024e46b0  mov w9,#0x74
71024e46b4  b 0x71024e46c0
71024e46b8  cbnz w9,0x71024e4578
71024e46bc  mov w9,#0x75
71024e46c0  str w9,[x8, #0x24]
71024e46c4  mov w9,#0x1
71024e46c8  strb w9,[x8, #0x28]
71024e46cc  b 0x71024e4578
71024e46d0  mov w21,w22
71024e46d4  orr w23,wzr,#0x3
71024e46d8  str x9,[sp, #0xe0]
71024e46dc  b 0x71024e2e38
71024e46e0  mov x15,x21
71024e46e4  mov w16,w23
71024e46e8  ldur x3,[x29, #-0x58]
71024e46ec  ldr w4,[sp, #0x120]
71024e46f0  ldr w5,[sp, #0x118]
71024e46f4  ldr x6,[sp, #0x110]
71024e46f8  ldr w7,[sp, #0x108]
71024e46fc  ldr w21,[sp, #0x100]
71024e4700  ldr w23,[sp, #0xf8]
71024e4704  b 0x71024e38e4
71024e4708  str xzr,[sp, #0x170]
71024e470c  strb wzr,[sp, #0x180]
71024e4710  str x8,[sp, #0x170]
71024e4714  add x8,x8,#0x38
71024e4718  ldaxr w9,[x8]
71024e471c  add w9,w9,#0x1
71024e4720  stlxr w10,w9,[x8]
71024e4724  cbnz w10,0x71024e4718
71024e4728  strb wzr,[sp, #0x180]
71024e472c  str x24,[sp, #0x168]
71024e4730  ldr x8,[x19, #0x19b8]
71024e4734  ldr x9,[x19, #0x19c0]
71024e4738  ldr x10,[x19, #0x19c8]
71024e473c  add x0,sp,#0x160
71024e4740  str x8,[x23]
71024e4744  stp x9,x10,[x23, #0x8]
71024e4748  bl 0x71024d15d0
71024e474c  ldr x8,[sp, #0x170]
71024e4750  str x20,[sp, #0x168]
71024e4754  cbz x8,0x71024e4790
71024e4758  adrp x9,0x7106dd5000
71024e475c  ldrb w9,[x9, #0x3a8]
71024e4760  cmp w9,#0x1
71024e4764  b.ne 0x71024e4790
71024e4768  adrp x10,0x7106dd5000
71024e476c  ldr w9,[sp, #0x178]
71024e4770  ldr w10,[x10, #0x3ac]
71024e4774  cmp w9,w10
71024e4778  b.ne 0x71024e4790
71024e477c  ldr wzr,[x8, #0x38]!
71024e4780  ldaxr w9,[x8]
71024e4784  sub w9,w9,#0x1
71024e4788  stlxr w10,w9,[x8]
71024e478c  cbnz w10,0x71024e4780
71024e4790  tbz w0,#0x0,0x71024e47d8
71024e4794  ldr x8,[sp, #0xb0]
71024e4798  ldr x8,[x8]
71024e479c  tst x8,#0xffffffffff
71024e47a0  b.eq 0x71024e48e4
71024e47a4  ldr w8,[x19, #0x19e0]
71024e47a8  str w8,[sp, #0x160]
71024e47ac  str wzr,[sp, #0x178]
71024e47b0  stp x20,xzr,[sp, #0x168]
71024e47b4  str w22,[sp, #0x17c]
71024e47b8  strb wzr,[sp, #0x180]
71024e47bc  ldr x8,[x19, #0x19f0]
71024e47c0  cbz x8,0x71024e4834
71024e47c4  adrp x9,0x7106dd5000
71024e47c8  ldr w9,[x9, #0x3ac]
71024e47cc  cbz w9,0x71024e4810
71024e47d0  str w9,[sp, #0x178]
71024e47d4  b 0x71024e4818
71024e47d8  ldr x8,[sp, #0xc0]
71024e47dc  mov w21,w22
71024e47e0  orr w23,wzr,#0x3
71024e47e4  str x8,[sp, #0xe0]
71024e47e8  b 0x71024e2e38
71024e47ec  mov x17,x20
71024e47f0  mov w18,w21
71024e47f4  ldur w4,[x29, #-0x58]
71024e47f8  ldr w5,[sp, #0x120]
71024e47fc  ldr x6,[sp, #0x118]
71024e4800  ldr w7,[sp, #0x110]
71024e4804  ldr w20,[sp, #0x108]
71024e4808  ldr w21,[sp, #0x100]
71024e480c  b 0x71024e406c
71024e4810  str xzr,[sp, #0x170]
71024e4814  strb wzr,[sp, #0x180]
71024e4818  str x8,[sp, #0x170]
71024e481c  add x8,x8,#0x38
71024e4820  ldaxr w9,[x8]
71024e4824  add w9,w9,#0x1
71024e4828  stlxr w10,w9,[x8]
71024e482c  cbnz w10,0x71024e4820
71024e4830  strb wzr,[sp, #0x180]
71024e4834  str x24,[sp, #0x168]
71024e4838  ldr x8,[x19, #0x1a08]
71024e483c  ldr x9,[x19, #0x1a10]
71024e4840  ldr x10,[x19, #0x1a18]
71024e4844  add x0,sp,#0x160
71024e4848  str x8,[x23]
71024e484c  stp x9,x10,[x23, #0x8]
71024e4850  bl 0x71024d15d0
71024e4854  ldr x8,[sp, #0x170]
71024e4858  str x20,[sp, #0x168]
71024e485c  cbz x8,0x71024e4898
71024e4860  adrp x9,0x7106dd5000
71024e4864  ldrb w9,[x9, #0x3a8]
71024e4868  cmp w9,#0x1
71024e486c  b.ne 0x71024e4898
71024e4870  adrp x10,0x7106dd5000
71024e4874  ldr w9,[sp, #0x178]
71024e4878  ldr w10,[x10, #0x3ac]
71024e487c  cmp w9,w10
71024e4880  b.ne 0x71024e4898
71024e4884  ldr wzr,[x8, #0x38]!
71024e4888  ldaxr w9,[x8]
71024e488c  sub w9,w9,#0x1
71024e4890  stlxr w10,w9,[x8]
71024e4894  cbnz w10,0x71024e4888
71024e4898  tbz w0,#0x0,0x71024e48e4
71024e489c  ldr x8,[sp, #0xa8]
71024e48a0  ldr x8,[x8]
71024e48a4  tst x8,#0xffffffffff
71024e48a8  b.eq 0x71024e48f8
71024e48ac  ldr w8,[x19, #0x1a30]
71024e48b0  str w8,[sp, #0x160]
71024e48b4  str wzr,[sp, #0x178]
71024e48b8  stp x20,xzr,[sp, #0x168]
71024e48bc  str w22,[sp, #0x17c]
71024e48c0  strb wzr,[sp, #0x180]
71024e48c4  ldr x8,[x19, #0x1a40]
71024e48c8  mov w21,w22
71024e48cc  cbz x8,0x71024e4930
71024e48d0  adrp x9,0x7106dd5000
71024e48d4  ldr w9,[x9, #0x3ac]
71024e48d8  cbz w9,0x71024e490c
71024e48dc  str w9,[sp, #0x178]
71024e48e0  b 0x71024e4914
71024e48e4  ldr x8,[sp, #0xb0]
71024e48e8  mov w21,w22
71024e48ec  mov w23,#0x4
71024e48f0  str x8,[sp, #0xe0]
71024e48f4  b 0x71024e2e38
71024e48f8  ldr x8,[sp, #0xa8]
71024e48fc  mov w21,w22
71024e4900  mov w23,#0x5
71024e4904  str x8,[sp, #0xe0]
71024e4908  b 0x71024e2e38
71024e490c  str xzr,[sp, #0x170]
71024e4910  strb wzr,[sp, #0x180]
71024e4914  str x8,[sp, #0x170]
71024e4918  add x8,x8,#0x38
71024e491c  ldaxr w9,[x8]
71024e4920  add w9,w9,#0x1
71024e4924  stlxr w10,w9,[x8]
71024e4928  cbnz w10,0x71024e491c
71024e492c  strb wzr,[sp, #0x180]
71024e4930  str x24,[sp, #0x168]
71024e4934  ldr x8,[x19, #0x1a58]
71024e4938  ldr x9,[x19, #0x1a60]
71024e493c  ldr x10,[x19, #0x1a68]
71024e4940  add x0,sp,#0x160
71024e4944  str x8,[x23]
71024e4948  stp x9,x10,[x23, #0x8]
71024e494c  bl 0x71024d15d0
71024e4950  ldr x8,[sp, #0x170]
71024e4954  str x20,[sp, #0x168]
71024e4958  cbz x8,0x71024e4994
71024e495c  adrp x9,0x7106dd5000
71024e4960  ldrb w9,[x9, #0x3a8]
71024e4964  cmp w9,#0x1
71024e4968  b.ne 0x71024e4994
71024e496c  adrp x10,0x7106dd5000
71024e4970  ldr w9,[sp, #0x178]
71024e4974  ldr w10,[x10, #0x3ac]
71024e4978  cmp w9,w10
71024e497c  b.ne 0x71024e4994
71024e4980  ldr wzr,[x8, #0x38]!
71024e4984  ldaxr w9,[x8]
71024e4988  sub w9,w9,#0x1
71024e498c  stlxr w10,w9,[x8]
71024e4990  cbnz w10,0x71024e4984
71024e4994  tbz w0,#0x0,0x71024e49dc
71024e4998  ldr x8,[sp, #0x90]
71024e499c  ldr x8,[x8]
71024e49a0  tst x8,#0xffffffffff
71024e49a4  b.eq 0x71024e4ab8
71024e49a8  ldr w8,[x19, #0x1a80]
71024e49ac  str w8,[sp, #0x160]
71024e49b0  str wzr,[sp, #0x178]
71024e49b4  stp x20,xzr,[sp, #0x168]
71024e49b8  str w21,[sp, #0x17c]
71024e49bc  strb wzr,[sp, #0x180]
71024e49c0  ldr x8,[x19, #0x1a90]
71024e49c4  cbz x8,0x71024e4a0c
71024e49c8  adrp x9,0x7106dd5000
71024e49cc  ldr w9,[x9, #0x3ac]
71024e49d0  cbz w9,0x71024e49e8
71024e49d4  str w9,[sp, #0x178]
71024e49d8  b 0x71024e49f0
71024e49dc  ldr x8,[sp, #0xa8]
71024e49e0  mov w23,#0x5
71024e49e4  b 0x71024e52d0
71024e49e8  str xzr,[sp, #0x170]
71024e49ec  strb wzr,[sp, #0x180]
71024e49f0  str x8,[sp, #0x170]
71024e49f4  add x8,x8,#0x38
71024e49f8  ldaxr w9,[x8]
71024e49fc  add w9,w9,#0x1
71024e4a00  stlxr w10,w9,[x8]
71024e4a04  cbnz w10,0x71024e49f8
71024e4a08  strb wzr,[sp, #0x180]
71024e4a0c  str x24,[sp, #0x168]
71024e4a10  ldr x8,[x19, #0x1aa8]
71024e4a14  ldr x9,[x19, #0x1ab0]
71024e4a18  ldr x10,[x19, #0x1ab8]
71024e4a1c  add x0,sp,#0x160
71024e4a20  str x8,[x23]
71024e4a24  stp x9,x10,[x23, #0x8]
71024e4a28  bl 0x71024d15d0
71024e4a2c  ldr x8,[sp, #0x170]
71024e4a30  str x20,[sp, #0x168]
71024e4a34  cbz x8,0x71024e4a70
71024e4a38  adrp x9,0x7106dd5000
71024e4a3c  ldrb w9,[x9, #0x3a8]
71024e4a40  cmp w9,#0x1
71024e4a44  b.ne 0x71024e4a70
71024e4a48  adrp x10,0x7106dd5000
71024e4a4c  ldr w9,[sp, #0x178]
71024e4a50  ldr w10,[x10, #0x3ac]
71024e4a54  cmp w9,w10
71024e4a58  b.ne 0x71024e4a70
71024e4a5c  ldr wzr,[x8, #0x38]!
71024e4a60  ldaxr w9,[x8]
71024e4a64  sub w9,w9,#0x1
71024e4a68  stlxr w10,w9,[x8]
71024e4a6c  cbnz w10,0x71024e4a60
71024e4a70  tbz w0,#0x0,0x71024e4ab8
71024e4a74  ldr x8,[sp, #0x78]
71024e4a78  ldr x8,[x8]
71024e4a7c  tst x8,#0xffffffffff
71024e4a80  b.eq 0x71024e5160
71024e4a84  ldr w8,[x19, #0x1ad0]
71024e4a88  str w8,[sp, #0x160]
71024e4a8c  str wzr,[sp, #0x178]
71024e4a90  stp x20,xzr,[sp, #0x168]
71024e4a94  str w21,[sp, #0x17c]
71024e4a98  strb wzr,[sp, #0x180]
71024e4a9c  ldr x8,[x19, #0x1ae0]
71024e4aa0  cbz x8,0x71024e50b4
71024e4aa4  adrp x9,0x7106dd5000
71024e4aa8  ldr w9,[x9, #0x3ac]
71024e4aac  cbz w9,0x71024e5090
71024e4ab0  str w9,[sp, #0x178]
71024e4ab4  b 0x71024e5098
71024e4ab8  ldr x8,[sp, #0x90]
71024e4abc  orr w23,wzr,#0x6
71024e4ac0  b 0x71024e52d0
71024e4ac4  ldr x10,[sp, #0x80]
71024e4ac8  b 0x71024e52e4
71024e4acc  orr w10,wzr,#0x3
71024e4ad0  b 0x71024e53fc
71024e4ad4  orr w23,wzr,#0x7
71024e4ad8  mov x9,x25
71024e4adc  b 0x71024e4c28
71024e4ae0  cmp w2,#0x100, LSL #12
71024e4ae4  b.lt 0x71024e516c
71024e4ae8  mov w1,#0x4
71024e4aec  b 0x71024e5478
71024e4af0  ldr x10,[sp, #0x70]
71024e4af4  b 0x71024e52e4
71024e4af8  mov w10,#0x4
71024e4afc  b 0x71024e53fc
71024e4b00  ldp x8,x9,[sp, #0x160]
71024e4b04  ldr x13,[sp, #0x30]
71024e4b08  ldp x10,x11,[sp, #0x170]
71024e4b0c  mov w12,#0x17bc
71024e4b10  stp x10,x11,[x13, #0x10]
71024e4b14  mov x0,x19
71024e4b18  stp x8,x9,[x13]
71024e4b1c  ldp x8,x9,[sp, #0x180]
71024e4b20  ldp x10,x11,[sp, #0x190]
71024e4b24  stp x10,x11,[x13, #0x30]
71024e4b28  mov w10,#0x17b4
71024e4b2c  stp x8,x9,[x13, #0x20]
71024e4b30  ldr w8,[sp, #0x18]
71024e4b34  str w8,[x19, #0x17b0]
71024e4b38  ldp x8,x9,[x29, #-0xc0]
71024e4b3c  str x9,[x19, x12, LSL #0x0]
71024e4b40  mov w9,#0x17d4
71024e4b44  str x8,[x19, x10, LSL #0x0]
71024e4b48  ldur w8,[x29, #-0x98]
71024e4b4c  ldur x12,[x29, #-0xa0]
71024e4b50  ldp x10,x11,[x29, #-0xb0]
71024e4b54  str w8,[x19, #0x17dc]
71024e4b58  ldr w8,[sp, #0xb8]
71024e4b5c  str x12,[x19, x9, LSL #0x0]
71024e4b60  mov w9,#0x17cc
71024e4b64  str x11,[x19, x9, LSL #0x0]
71024e4b68  mov w9,#0x17c4
71024e4b6c  str x10,[x19, x9, LSL #0x0]
71024e4b70  strh w8,[x19, #0x17e0]
71024e4b74  ldr w8,[sp, #0x140]
71024e4b78  ldrh w10,[sp, #0x144]
71024e4b7c  str w8,[x21]
71024e4b80  ldr w8,[sp, #0xa0]
71024e4b84  strh w10,[x21, #0x4]
71024e4b88  str w8,[x19, #0x17e8]
71024e4b8c  ldr w8,[sp, #0x98]
71024e4b90  str w8,[x19, #0x17ec]
71024e4b94  ldr x8,[sp, #0x88]
71024e4b98  str x8,[x19, #0x17f0]
71024e4b9c  ldr w8,[sp, #0x80]
71024e4ba0  str w8,[x19, #0x17f8]
71024e4ba4  ldr w8,[sp, #0x70]
71024e4ba8  ldr x10,[sp, #0x68]
71024e4bac  strh w8,[x19, #0x17fc]
71024e4bb0  ldurh w8,[x29, #-0xc4]
71024e4bb4  str x10,[x19, #0x1800]
71024e4bb8  ldr w10,[sp, #0x60]
71024e4bbc  strh w10,[x19, #0x1808]
71024e4bc0  ldr w10,[sp, #0x50]
71024e4bc4  strh w10,[x19, #0x180a]
71024e4bc8  ldr w10,[sp, #0x48]
71024e4bcc  strh w10,[x19, #0x180c]
71024e4bd0  ldr x10,[sp, #0x38]
71024e4bd4  strh w8,[x19, #0x17fe]
71024e4bd8  ldurh w8,[x29, #-0xc8]
71024e4bdc  str x10,[x19, #0x1810]
71024e4be0  ldr w10,[sp, #0x20]
71024e4be4  strh w8,[x19, #0x180e]
71024e4be8  strh w10,[x19, #0x1818]
71024e4bec  ldrh w8,[sp, #0x12c]
71024e4bf0  ldr w10,[sp, #0x128]
71024e4bf4  strh w8,[x19, #0x181e]
71024e4bf8  ldr x8,[sp, #0x10]
71024e4bfc  mov w9,#0x181a
71024e4c00  str w10,[x19, x9, LSL #0x0]
71024e4c04  str x8,[x19, #0x1820]
71024e4c08  mov w8,#0x1f95
71024e4c0c  str wzr,[x19, #0x1828]
71024e4c10  strb wzr,[x19, x8, LSL ]
71024e4c14  bl 0x71024dd520
71024e4c18  mov x18,x27
71024e4c1c  b 0x71024e2c64
71024e4c20  mov w23,#0x8
71024e4c24  mov x9,x24
71024e4c28  mov x0,x9
71024e4c2c  mov x21,x10
71024e4c30  mov x20,x9
71024e4c34  bl 0x71024db230
71024e4c38  str x21,[x20]
71024e4c3c  adrp x8,0x710532a000
71024e4c40  ldr x8,[x8, #0x860]
71024e4c44  ldr x1,[x8]
71024e4c48  add x0,sp,#0x160
71024e4c4c  mov x2,x21
71024e4c50  mov x22,x20
71024e4c54  bl 0x71024d1440
71024e4c58  mov w9,#0x50
71024e4c5c  madd x9,x23,x9,x19
71024e4c60  ldr w8,[sp, #0x160]
71024e4c64  str w8,[x9, #0x1bc0]
71024e4c68  ldr x8,[sp, #0x170]
71024e4c6c  cbz x8,0x71024e4d04
71024e4c70  mov w9,#0x50
71024e4c74  madd x9,x23,x9,x19
71024e4c78  ldr w9,[x9, #0x1bdc]
71024e4c7c  mov w10,#0x6500
71024e4c80  movk w10,#0x87, LSL #16
71024e4c84  cmp w9,w10
71024e4c88  b.ne 0x71024e4dc0
71024e4c8c  mov w10,#0x50
71024e4c90  madd x10,x23,x10,x19
71024e4c94  adrp x9,0x7106dd5000
71024e4c98  ldr w9,[x9, #0x3ac]
71024e4c9c  ldr w11,[x10, #0x1bd8]
71024e4ca0  cmp w11,w9
71024e4ca4  b.ne 0x71024e4d74
71024e4ca8  mov w9,#0x50
71024e4cac  madd x10,x23,x9,x19
71024e4cb0  mov w9,#0x1bd0
71024e4cb4  add x9,x10,x9
71024e4cb8  ldr x10,[x10, #0x1bd0]
71024e4cbc  mov x13,x23
71024e4cc0  cbz x10,0x71024e4ce8
71024e4cc4  adrp x11,0x7106dd5000
71024e4cc8  ldrb w11,[x11, #0x3a8]
71024e4ccc  cmp w11,#0x1
71024e4cd0  b.ne 0x71024e4ce8
71024e4cd4  ldr wzr,[x10, #0x38]!
71024e4cd8  ldaxr w11,[x10]
71024e4cdc  sub w11,w11,#0x1
71024e4ce0  stlxr w12,w11,[x10]
71024e4ce4  cbnz w12,0x71024e4cd8
71024e4ce8  mov w10,#0x50
71024e4cec  madd x10,x13,x10,x19
71024e4cf0  mov w11,#0x1be0
71024e4cf4  add x10,x10,x11
71024e4cf8  str xzr,[x9]
71024e4cfc  strb wzr,[x10]
71024e4d00  b 0x71024e4d9c
71024e4d04  mov w8,#0x50
71024e4d08  madd x9,x23,x8,x19
71024e4d0c  mov w8,#0x1bd0
71024e4d10  add x8,x9,x8
71024e4d14  ldr x9,[x9, #0x1bd0]
71024e4d18  cbz x9,0x71024e4d5c
71024e4d1c  adrp x10,0x7106dd5000
71024e4d20  ldrb w10,[x10, #0x3a8]
71024e4d24  cmp w10,#0x1
71024e4d28  b.ne 0x71024e4d5c
71024e4d2c  mov w10,#0x50
71024e4d30  madd x10,x23,x10,x19
71024e4d34  adrp x11,0x7106dd5000
71024e4d38  ldr w11,[x11, #0x3ac]
71024e4d3c  ldr w10,[x10, #0x1bd8]
71024e4d40  cmp w10,w11
71024e4d44  b.ne 0x71024e4d5c
71024e4d48  ldr wzr,[x9, #0x38]!
71024e4d4c  ldaxr w10,[x9]
71024e4d50  sub w10,w10,#0x1
71024e4d54  stlxr w11,w10,[x9]
71024e4d58  cbnz w11,0x71024e4d4c
71024e4d5c  str xzr,[x8]
71024e4d60  mov w8,#0x50
71024e4d64  madd x8,x23,x8,x19
71024e4d68  mov w9,#0x1be0
71024e4d6c  add x10,x8,x9
71024e4d70  b 0x71024e4db8
71024e4d74  mov w11,#0x1bd8
71024e4d78  add x10,x10,x11
71024e4d7c  mov w11,#0x1be0
71024e4d80  str w9,[x10]
71024e4d84  mov w9,#0x50
71024e4d88  madd x10,x23,x9,x19
71024e4d8c  mov w9,#0x1bd0
71024e4d90  mov x13,x23
71024e4d94  add x9,x10,x9
71024e4d98  add x10,x10,x11
71024e4d9c  str x8,[x9]
71024e4da0  add x8,x8,#0x38
71024e4da4  ldaxr w9,[x8]
71024e4da8  add w9,w9,#0x1
71024e4dac  stlxr w11,w9,[x8]
71024e4db0  cbnz w11,0x71024e4da4
71024e4db4  mov x23,x13
71024e4db8  strb wzr,[x10]
71024e4dbc  ldr x8,[sp, #0x170]
71024e4dc0  mov w9,#0x50
71024e4dc4  madd x9,x23,x9,x19
71024e4dc8  ldr x12,[sp, #0x198]
71024e4dcc  ldp x10,x11,[sp, #0x188]
71024e4dd0  str x12,[x9, #0x1bf8]
71024e4dd4  str x11,[x9, #0x1bf0]
71024e4dd8  str x10,[x9, #0x1be8]
71024e4ddc  adrp x9,0x7104f73000
71024e4de0  add x9,x9,#0xd50
71024e4de4  str x9,[sp, #0x168]
71024e4de8  cbz x8,0x71024e4e24
71024e4dec  adrp x9,0x7106dd5000
71024e4df0  ldrb w9,[x9, #0x3a8]
71024e4df4  cmp w9,#0x1
71024e4df8  b.ne 0x71024e4e24
71024e4dfc  adrp x10,0x7106dd5000
71024e4e00  ldr w9,[sp, #0x178]
71024e4e04  ldr w10,[x10, #0x3ac]
71024e4e08  cmp w9,w10
71024e4e0c  b.ne 0x71024e4e24
71024e4e10  ldr wzr,[x8, #0x38]!
71024e4e14  ldaxr w9,[x8]
71024e4e18  sub w9,w9,#0x1
71024e4e1c  stlxr w10,w9,[x8]
71024e4e20  cbnz w10,0x71024e4e14
71024e4e24  adrp x8,0x710532f000
71024e4e28  ldr x8,[x8, #0x8d0]
71024e4e2c  ldr x8,[x8, #0x8]
71024e4e30  ldr w8,[x8, #0x150]
71024e4e34  cmp w8,#0x2
71024e4e38  b.ne 0x71024e4edc
71024e4e3c  mov w8,#0x50
71024e4e40  madd x20,x23,x8,x19
71024e4e44  ldr x0,[x20, #0x1bd0]
71024e4e48  cbz x0,0x71024e4edc
71024e4e4c  adrp x8,0x710532a000
71024e4e50  ldr x8,[x8, #0x868]
71024e4e54  ldr x8,[x8]
71024e4e58  ldr s8,[x8, #0x1f8]
71024e4e5c  ldr x8,[x0]
71024e4e60  ldr x8,[x8, #0x20]
71024e4e64  blr x8
71024e4e68  tbnz w0,#0x0,0x71024e4edc
71024e4e6c  adrp x8,0x710593b000
71024e4e70  ldr x8,[x8, #0x438]
71024e4e74  ldr x8,[x8]
71024e4e78  ldrb w8,[x8, #0x1]
71024e4e7c  cbz w8,0x71024e4edc
71024e4e80  mov w8,#0x50
71024e4e84  madd x8,x23,x8,x19
71024e4e88  ldr w8,[x8, #0x1bdc]
71024e4e8c  mov w9,#0x6500
71024e4e90  movk w9,#0x87, LSL #16
71024e4e94  cmp w8,w9
71024e4e98  b.ne 0x71024e4edc
71024e4e9c  adrp x8,0x7106dd5000
71024e4ea0  ldrb w8,[x8, #0x3a8]
71024e4ea4  cmp w8,#0x1
71024e4ea8  b.ne 0x71024e4edc
71024e4eac  mov w8,#0x50
71024e4eb0  madd x8,x23,x8,x19
71024e4eb4  adrp x9,0x7106dd5000
71024e4eb8  ldr w9,[x9, #0x3ac]
71024e4ebc  ldr w8,[x8, #0x1bd8]
71024e4ec0  cmp w8,w9
71024e4ec4  b.ne 0x71024e4edc
71024e4ec8  mov w8,#0x50
71024e4ecc  madd x8,x23,x8,x19
71024e4ed0  mov w9,#0x1be0
71024e4ed4  ldrb w8,[x8, x9, LSL ]
71024e4ed8  cbz w8,0x71024e517c
71024e4edc  mov w8,#0x1fa1
71024e4ee0  ldrb w8,[x19, x8, LSL ]
71024e4ee4  ldr x18,[sp, #0x28]
71024e4ee8  cbz w8,0x71024e2c64
71024e4eec  mov x0,x22
71024e4ef0  mov x20,x18
71024e4ef4  bl 0x71024e5900
71024e4ef8  mov x18,x20
71024e4efc  b 0x71024e2c64
71024e4f00  mov w2,#0xb8
71024e4f04  add x8,x19,#0x68
71024e4f08  madd x1,x21,x2,x8
71024e4f0c  smaddl x0,w26,w2,x8
71024e4f10  bl 0x71039c00e0
71024e4f14  sub w23,w26,#0x2
71024e4f18  sub x21,x21,#0x1
71024e4f1c  mov w26,w20
71024e4f20  cbz w20,0x71024e4f80
71024e4f24  mov w20,#0xb8
71024e4f28  madd x9,x21,x20,x19
71024e4f2c  lsl x24,x21,#0x20
71024e4f30  sub w8,w21,#0x1
71024e4f34  sub x21,x9,#0x50
71024e4f38  orr x25,xzr,#-0x200000000
71024e4f3c  add x28,x19,#0x68
71024e4f40  smaddl x0,w26,w20,x28
71024e4f44  add x1,x21,#0xb8
71024e4f48  mov x2,x20
71024e4f4c  mov w22,w8
71024e4f50  bl 0x71039c00e0
71024e4f54  asr x8,x24,#0x20
71024e4f58  madd x0,x8,x20,x28
71024e4f5c  mov x1,x21
71024e4f60  mov x2,x20
71024e4f64  bl 0x71039c00e0
71024e4f68  sub w23,w23,#0x2
71024e4f6c  add x24,x24,x25
71024e4f70  sub w8,w22,#0x2
71024e4f74  sub x21,x21,#0x170
71024e4f78  mov w26,w22
71024e4f7c  tbz w23,#0x1f,0x71024e4f3c
71024e4f80  ldr w26,[x19, #0x1768]
71024e4f84  ldp x8,x9,[sp, #0x160]
71024e4f88  ldp x10,x11,[sp, #0x170]
71024e4f8c  stp x10,x11,[x19, #0x78]
71024e4f90  stp x8,x9,[x19, #0x68]
71024e4f94  ldr w12,[sp, #0x18]
71024e4f98  ldp x8,x9,[sp, #0x180]
71024e4f9c  ldp x10,x11,[sp, #0x190]
71024e4fa0  str w12,[x19, #0xa8]
71024e4fa4  stp x10,x11,[x19, #0x98]
71024e4fa8  stp x8,x9,[x19, #0x88]
71024e4fac  ldr w12,[sp, #0xb8]
71024e4fb0  ldp x8,x9,[x29, #-0xc0]
71024e4fb4  stur x9,[x19, #0xb4]
71024e4fb8  stur x8,[x19, #0xac]
71024e4fbc  ldur x10,[x29, #-0xa0]
71024e4fc0  ldur w11,[x29, #-0x98]
71024e4fc4  ldp x8,x9,[x29, #-0xb0]
71024e4fc8  strh w12,[x19, #0xd8]
71024e4fcc  stur x10,[x19, #0xcc]
71024e4fd0  ldr w10,[sp, #0xa0]
71024e4fd4  str w11,[x19, #0xd4]
71024e4fd8  stur x9,[x19, #0xc4]
71024e4fdc  stur x8,[x19, #0xbc]
71024e4fe0  ldr w8,[sp, #0x140]
71024e4fe4  ldrh w9,[sp, #0x144]
71024e4fe8  str w10,[x19, #0xe0]
71024e4fec  ldr w10,[sp, #0x98]
71024e4ff0  strh w9,[x19, #0xde]
71024e4ff4  ldr x9,[sp, #0x68]
71024e4ff8  str w10,[x19, #0xe4]
71024e4ffc  ldr x10,[sp, #0x88]
71024e5000  str x10,[x19, #0xe8]
71024e5004  ldr w10,[sp, #0x80]
71024e5008  str w10,[x19, #0xf0]
71024e500c  ldr w10,[sp, #0x70]
71024e5010  strh w10,[x19, #0xf4]
71024e5014  stur w8,[x19, #0xda]
71024e5018  ldurh w8,[x29, #-0xc4]
71024e501c  str x9,[x19, #0xf8]
71024e5020  ldr w9,[sp, #0x60]
71024e5024  strh w9,[x19, #0x100]
71024e5028  ldr w9,[sp, #0x50]
71024e502c  strh w9,[x19, #0x102]
71024e5030  ldr w9,[sp, #0x48]
71024e5034  strh w9,[x19, #0x104]
71024e5038  ldr x9,[sp, #0x38]
71024e503c  strh w8,[x19, #0xf6]
71024e5040  ldurh w8,[x29, #-0xc8]
71024e5044  str x9,[x19, #0x108]
71024e5048  ldr w9,[sp, #0x20]
71024e504c  strh w8,[x19, #0x106]
71024e5050  strh w9,[x19, #0x110]
71024e5054  ldr w8,[sp, #0x128]
71024e5058  add x11,x19,#0x112
71024e505c  ldrh w9,[sp, #0x12c]
71024e5060  str w8,[x11]
71024e5064  ldr x8,[sp, #0x10]
71024e5068  str x8,[x19, #0x118]
71024e506c  add w8,w26,#0x1
71024e5070  strh w9,[x19, #0x116]
71024e5074  str w8,[x19, #0x1768]
71024e5078  mov x18,x27
71024e507c  b 0x71024e2c64
71024e5080  ldr x10,[sp, #0x68]
71024e5084  b 0x71024e52e4
71024e5088  mov w10,#0x5
71024e508c  b 0x71024e53fc
71024e5090  str xzr,[sp, #0x170]
71024e5094  strb wzr,[sp, #0x180]
71024e5098  str x8,[sp, #0x170]
71024e509c  add x8,x8,#0x38
71024e50a0  ldaxr w9,[x8]
71024e50a4  add w9,w9,#0x1
71024e50a8  stlxr w10,w9,[x8]
71024e50ac  cbnz w10,0x71024e50a0
71024e50b0  strb wzr,[sp, #0x180]
71024e50b4  str x24,[sp, #0x168]
71024e50b8  ldr x8,[x19, #0x1af8]
71024e50bc  ldr x9,[x19, #0x1b00]
71024e50c0  ldr x10,[x19, #0x1b08]
71024e50c4  add x0,sp,#0x160
71024e50c8  str x8,[x23]
71024e50cc  stp x9,x10,[x23, #0x8]
71024e50d0  bl 0x71024d15d0
71024e50d4  ldr x8,[sp, #0x170]
71024e50d8  str x20,[sp, #0x168]
71024e50dc  cbz x8,0x71024e5118
71024e50e0  adrp x9,0x7106dd5000
71024e50e4  ldrb w9,[x9, #0x3a8]
71024e50e8  cmp w9,#0x1
71024e50ec  b.ne 0x71024e5118
71024e50f0  adrp x10,0x7106dd5000
71024e50f4  ldr w9,[sp, #0x178]
71024e50f8  ldr w10,[x10, #0x3ac]
71024e50fc  cmp w9,w10
71024e5100  b.ne 0x71024e5118
71024e5104  ldr wzr,[x8, #0x38]!
71024e5108  ldaxr w9,[x8]
71024e510c  sub w9,w9,#0x1
71024e5110  stlxr w10,w9,[x8]
71024e5114  cbnz w10,0x71024e5108
71024e5118  tbz w0,#0x0,0x71024e5160
71024e511c  ldr x8,[sp, #0x58]
71024e5120  ldr x8,[x8]
71024e5124  tst x8,#0xffffffffff
71024e5128  b.eq 0x71024e52c8
71024e512c  ldr w8,[x19, #0x1b20]
71024e5130  str w8,[sp, #0x160]
71024e5134  str wzr,[sp, #0x178]
71024e5138  stp x20,xzr,[sp, #0x168]
71024e513c  str w21,[sp, #0x17c]
71024e5140  strb wzr,[sp, #0x180]
71024e5144  ldr x8,[x19, #0x1b30]
71024e5148  cbz x8,0x71024e521c
71024e514c  adrp x9,0x7106dd5000
71024e5150  ldr w9,[x9, #0x3ac]
71024e5154  cbz w9,0x71024e51f8
71024e5158  str w9,[sp, #0x178]
71024e515c  b 0x71024e5200
71024e5160  ldr x8,[sp, #0x78]
71024e5164  orr w23,wzr,#0x7
71024e5168  b 0x71024e52d0
71024e516c  cmp w2,#0xfe, LSL #12
71024e5170  b.lt 0x71024e51d8
71024e5174  mov w1,#0x8
71024e5178  b 0x71024e5478
71024e517c  mov w8,#0x1bd0
71024e5180  add x21,x20,x8
71024e5184  ldr x0,[x21]
71024e5188  cbz x0,0x71024e4edc
71024e518c  ldr x8,[x0]
71024e5190  ldr x8,[x8, #0x20]
71024e5194  blr x8
71024e5198  tbnz w0,#0x0,0x71024e4edc
71024e519c  ldr x0,[x21]
71024e51a0  ldr x8,[x0]
71024e51a4  ldr x8,[x8, #0x68]
71024e51a8  blr x8
71024e51ac  tbnz w0,#0x0,0x71024e4edc
71024e51b0  mov v0.16B,v8.16B
71024e51b4  mov w8,#0x1bc0
71024e51b8  add x0,x20,x8
71024e51bc  mov w1,wzr
71024e51c0  bl 0x710373baa0
71024e51c4  b 0x71024e4edc
71024e51c8  ldr x10,[sp, #0x60]
71024e51cc  b 0x71024e52e4
71024e51d0  orr w10,wzr,#0x6
71024e51d4  b 0x71024e53fc
71024e51d8  cmp w2,#0x50, LSL #12
71024e51dc  b.lt 0x71024e545c
71024e51e0  mov w1,#0x2
71024e51e4  b 0x71024e5478
71024e51e8  ldr x10,[sp, #0x50]
71024e51ec  b 0x71024e52e4
71024e51f0  orr w10,wzr,#0x7
71024e51f4  b 0x71024e53fc
71024e51f8  str xzr,[sp, #0x170]
71024e51fc  strb wzr,[sp, #0x180]
71024e5200  str x8,[sp, #0x170]
71024e5204  add x8,x8,#0x38
71024e5208  ldaxr w9,[x8]
71024e520c  add w9,w9,#0x1
71024e5210  stlxr w10,w9,[x8]
71024e5214  cbnz w10,0x71024e5208
71024e5218  strb wzr,[sp, #0x180]
71024e521c  str x24,[sp, #0x168]
71024e5220  ldr x8,[x19, #0x1b48]
71024e5224  ldr x9,[x19, #0x1b50]
71024e5228  ldr x10,[x19, #0x1b58]
71024e522c  add x0,sp,#0x160
71024e5230  str x8,[x23]
71024e5234  stp x9,x10,[x23, #0x8]
71024e5238  bl 0x71024d15d0
71024e523c  ldr x8,[sp, #0x170]
71024e5240  str x20,[sp, #0x168]
71024e5244  cbz x8,0x71024e5280
71024e5248  adrp x9,0x7106dd5000
71024e524c  ldrb w9,[x9, #0x3a8]
71024e5250  cmp w9,#0x1
71024e5254  b.ne 0x71024e5280
71024e5258  adrp x10,0x7106dd5000
71024e525c  ldr w9,[sp, #0x178]
71024e5260  ldr w10,[x10, #0x3ac]
71024e5264  cmp w9,w10
71024e5268  b.ne 0x71024e5280
71024e526c  ldr wzr,[x8, #0x38]!
71024e5270  ldaxr w9,[x8]
71024e5274  sub w9,w9,#0x1
71024e5278  stlxr w10,w9,[x8]
71024e527c  cbnz w10,0x71024e5270
71024e5280  tbz w0,#0x0,0x71024e52c8
71024e5284  ldr x8,[sp, #0x40]
71024e5288  ldr x8,[x8]
71024e528c  tst x8,#0xffffffffff
71024e5290  b.eq 0x71024e5450
71024e5294  ldr w8,[x19, #0x1b70]
71024e5298  str w8,[sp, #0x160]
71024e529c  str wzr,[sp, #0x178]
71024e52a0  stp x20,xzr,[sp, #0x168]
71024e52a4  str w21,[sp, #0x17c]
71024e52a8  strb wzr,[sp, #0x180]
71024e52ac  ldr x8,[x19, #0x1b80]
71024e52b0  cbz x8,0x71024e5708
71024e52b4  adrp x9,0x7106dd5000
71024e52b8  ldr w9,[x9, #0x3ac]
71024e52bc  cbz w9,0x71024e56e4
71024e52c0  str w9,[sp, #0x178]
71024e52c4  b 0x71024e56ec
71024e52c8  ldr x8,[sp, #0x58]
71024e52cc  mov w23,#0x8
71024e52d0  ldp x27,x26,[sp, #0xf8]
71024e52d4  ldr x28,[sp, #0xf0]
71024e52d8  str x8,[sp, #0xe0]
71024e52dc  b 0x71024e2e38
71024e52e0  ldr x10,[sp, #0x48]
71024e52e4  str x10,[sp, #0xa0]
71024e52e8  str x8,[x9, #0x78]
71024e52ec  ldr w10,[x8, #0x88]
71024e52f0  sub w10,w10,#0x1
71024e52f4  cmp w10,#0x9
71024e52f8  b.hi 0x71024e5324
71024e52fc  adrp x11,0x7104502000
71024e5300  add x11,x11,#0x224
71024e5304  ldrsw x10,[x11, x10, LSL #0x2]
71024e5308  add x10,x10,x11
71024e530c  br x10
71024e5310  ldrb w10,[x8, #0x25b]
71024e5314  cbnz w10,0x71024e5324
71024e5318  b 0x71024e5368
71024e531c  ldrb w10,[x8, #0x25b]
71024e5320  cbz w10,0x71024e53b0
71024e5324  ldr w10,[x8, #0x168]
71024e5328  cmp w10,#0x3
71024e532c  b.cc 0x71024e5368
71024e5330  ldrb w10,[x9, #0x74]
71024e5334  cmp w10,#0x0
71024e5338  orr w10,wzr,#0x3
71024e533c  csel w10,wzr,w10,eq
71024e5340  str w10,[x9, #0x21c8]
71024e5344  mov w10,#0x21bc
71024e5348  str xzr,[x9, #0xe0]
71024e534c  str xzr,[x9, x10, LSL #0x0]
71024e5350  str wzr,[x9, #0x110]
71024e5354  stp xzr,xzr,[x9, #0x100]
71024e5358  stp xzr,xzr,[x9, #0xf0]
71024e535c  str wzr,[x9, #0x140]
71024e5360  stp xzr,xzr,[x9, #0x130]
71024e5364  stp xzr,xzr,[x9, #0x120]
71024e5368  movi d2,#0x0
71024e536c  ldr q0,[x8, #0xa0]
71024e5370  ldr x9,[sp, #0xa0]
71024e5374  ldr x8,[x9]
71024e5378  mov v1.16B,v2.16B
71024e537c  mov x0,x20
71024e5380  mov v1.S[0x0],v0.S[0x2]
71024e5384  mov v0.D[0x1],v1.D[0x0]
71024e5388  mov v1.16B,v2.16B
71024e538c  str q0,[x8, #0x2160]
71024e5390  ldr x8,[x9]
71024e5394  ldr q0,[x8, #0x2160]
71024e5398  mov v1.S[0x0],v0.S[0x2]
71024e539c  mov v0.D[0x1],v1.D[0x0]
71024e53a0  str q0,[x20, #0xa0]
71024e53a4  bl 0x7102508e30
71024e53a8  mov x18,x20
71024e53ac  b 0x71024e2c64
71024e53b0  adrp x10,0x710532a000
71024e53b4  ldr x10,[x10, #0x868]
71024e53b8  ldr x11,[x10]
71024e53bc  ldr x10,[x11, #0x340]
71024e53c0  ldr x11,[x11, #0x348]
71024e53c4  cmp x10,x11
71024e53c8  b.eq 0x71024e5368
71024e53cc  ldr w12,[x8, #0x8c]
71024e53d0  ldr w13,[x10]
71024e53d4  cmp w13,w12
71024e53d8  b.eq 0x71024e53ec
71024e53dc  add x10,x10,#0x80
71024e53e0  cmp x11,x10
71024e53e4  b.ne 0x71024e53d0
71024e53e8  b 0x71024e5368
71024e53ec  ldrb w10,[x10, #0x7e]
71024e53f0  cbnz w10,0x71024e5324
71024e53f4  b 0x71024e5368
71024e53f8  mov w10,#0x8
71024e53fc  ldr w11,[x9, #0x2158]
71024e5400  cmp w11,#0x3ff
71024e5404  b.hi 0x71024e5440
71024e5408  cbz w11,0x71024e5434
71024e540c  ldr x11,[x9, #0x158]
71024e5410  mov x13,xzr
71024e5414  add x12,x9,#0x160
71024e5418  str x11,[x12, x13, LSL #0x3]
71024e541c  ldr w14,[x9, #0x2158]
71024e5420  add x13,x13,#0x1
71024e5424  cmp x13,x14
71024e5428  b.cc 0x71024e5418
71024e542c  add w11,w14,#0x1
71024e5430  b 0x71024e5438
71024e5434  mov w11,#0x1
71024e5438  str x8,[x9, #0x158]
71024e543c  str w11,[x9, #0x2158]
71024e5440  add x8,x19,x10, LSL #0x3
71024e5444  mov x18,x15
71024e5448  str x15,[x8, #0x1f28]
71024e544c  b 0x71024e2c64
71024e5450  ldr x8,[sp, #0x40]
71024e5454  mov w23,#0x9
71024e5458  b 0x71024e52d0
71024e545c  cmp w2,#0x10, LSL #12
71024e5460  b.lt 0x71024e546c
71024e5464  mov w1,#0x1
71024e5468  b 0x71024e5478
71024e546c  cmp w2,#0x1
71024e5470  orr w9,wzr,#0x3
71024e5474  csel w1,w9,wzr,lt
71024e5478  ldr x0,[x8]
71024e547c  bl 0x7103775dc0
71024e5480  ldr w9,[x22, #0xa0]
71024e5484  ldr x8,[x22, #0x10]
71024e5488  sub w10,w23,#0x1
71024e548c  add w2,w9,#0x1
71024e5490  cmp w9,w10
71024e5494  b.le 0x71024e54a0
71024e5498  mov w1,#0x9
71024e549c  b 0x71024e5548
71024e54a0  mov w10,#0x24ffff
71024e54a4  sub w10,w10,#0x1
71024e54a8  cmp w9,w10
71024e54ac  b.le 0x71024e54b8
71024e54b0  orr w1,wzr,#0x7
71024e54b4  b 0x71024e5548
71024e54b8  orr w10,wzr,#0x1ffffe
71024e54bc  cmp w9,w10
71024e54c0  b.le 0x71024e54cc
71024e54c4  mov w1,#0x5
71024e54c8  b 0x71024e5548
71024e54cc  mov w10,#0x14ffff
71024e54d0  sub w10,w10,#0x1
71024e54d4  cmp w9,w10
71024e54d8  b.le 0x71024e54e4
71024e54dc  orr w1,wzr,#0x6
71024e54e0  b 0x71024e5548
71024e54e4  orr w10,wzr,#0xffffe
71024e54e8  cmp w9,w10
71024e54ec  b.le 0x71024e54f8
71024e54f0  mov w1,#0x4
71024e54f4  b 0x71024e5548
71024e54f8  mov w10,#0xdfff
71024e54fc  movk w10,#0xf, LSL #16
71024e5500  sub w10,w10,#0x1
71024e5504  cmp w9,w10
71024e5508  b.le 0x71024e5514
71024e550c  mov w1,#0x8
71024e5510  b 0x71024e5548
71024e5514  mov w10,#0x4ffff
71024e5518  sub w10,w10,#0x1
71024e551c  cmp w9,w10
71024e5520  b.le 0x71024e552c
71024e5524  mov w1,#0x2
71024e5528  b 0x71024e5548
71024e552c  orr w10,wzr,#0xfffe
71024e5530  cmp w9,w10
71024e5534  b.le 0x71024e5540
71024e5538  mov w1,#0x1
71024e553c  b 0x71024e5548
71024e5540  asr w9,w9,#0x1f
71024e5544  and w1,w9,#0x3
71024e5548  ldr x0,[x8]
71024e554c  bl 0x7103775dc0
71024e5550  ldr w9,[x22, #0xa0]
71024e5554  ldr x8,[x22, #0x18]
71024e5558  sub w10,w23,#0x2
71024e555c  add w2,w9,#0x2
71024e5560  cmp w9,w10
71024e5564  b.le 0x71024e5570
71024e5568  mov w1,#0x9
71024e556c  b 0x71024e561c
71024e5570  mov w10,#0xfffd
71024e5574  movk w10,#0x1f, LSL #16
71024e5578  add w11,w10,#0x50, LSL #12
71024e557c  cmp w9,w11
71024e5580  b.le 0x71024e558c
71024e5584  orr w1,wzr,#0x7
71024e5588  b 0x71024e561c
71024e558c  cmp w9,w10
71024e5590  b.le 0x71024e559c
71024e5594  mov w1,#0x5
71024e5598  b 0x71024e561c
71024e559c  mov w10,#0xfffd
71024e55a0  movk w10,#0xf, LSL #16
71024e55a4  add w11,w10,#0x50, LSL #12
71024e55a8  cmp w9,w11
71024e55ac  b.le 0x71024e55b8
71024e55b0  orr w1,wzr,#0x6
71024e55b4  b 0x71024e561c
71024e55b8  cmp w9,w10
71024e55bc  b.le 0x71024e55c8
71024e55c0  mov w1,#0x4
71024e55c4  b 0x71024e561c
71024e55c8  mov w10,#0x4ffff
71024e55cc  mov w11,#0xdffe
71024e55d0  movk w11,#0xa, LSL #16
71024e55d4  add w11,w10,w11
71024e55d8  cmp w9,w11
71024e55dc  b.le 0x71024e55e8
71024e55e0  mov w1,#0x8
71024e55e4  b 0x71024e561c
71024e55e8  sub w10,w10,#0x2
71024e55ec  cmp w9,w10
71024e55f0  b.le 0x71024e55fc
71024e55f4  mov w1,#0x2
71024e55f8  b 0x71024e561c
71024e55fc  mov w10,#0xfffd
71024e5600  cmp w9,w10
71024e5604  b.le 0x71024e5610
71024e5608  mov w1,#0x1
71024e560c  b 0x71024e561c
71024e5610  cmn w9,#0x1
71024e5614  orr w9,wzr,#0x3
71024e5618  csel w1,w9,wzr,lt
71024e561c  ldr x0,[x8]
71024e5620  bl 0x7103775dc0
71024e5624  mov w8,#0x1
71024e5628  strb w8,[x22, #0x110]
71024e562c  ldr x0,[x19, #0x1f80]
71024e5630  bl 0x7101e8a300
71024e5634  ldr x21,[x21, #0x730]
71024e5638  ldr x8,[x21, #0x8]
71024e563c  ldr x0,[x8, #0x378]
71024e5640  mov x1,x20
71024e5644  bl 0x710328ee30
71024e5648  cmn w0,#0x1
71024e564c  b.eq 0x71024e56cc
71024e5650  ldr x8,[x21, #0x8]
71024e5654  ldr x0,[x8, #0x378]
71024e5658  mov x1,x20
71024e565c  bl 0x710328ee30
71024e5660  cmn w0,#0x1
71024e5664  b.eq 0x71024e56cc
71024e5668  adrp x8,0x7105314000
71024e566c  ldr x8,[x8, #0x510]
71024e5670  ldr x8,[x8]
71024e5674  ldrb w9,[x8, #0x1]
71024e5678  cbnz w9,0x71024e56cc
71024e567c  ldr x8,[x8, #0x8]
71024e5680  ldr x8,[x8]
71024e5684  ldr x22,[x8, #0x28]
71024e5688  ldrsw x8,[x22, #0x8]
71024e568c  cmp w8,#0x29
71024e5690  b.cs 0x71024e5790
71024e5694  ldr x9,[x21, #0x8]
71024e5698  add x8,x9,x8, LSL #0x3
71024e569c  ldr x8,[x8, #0x8]
71024e56a0  ldr x0,[x8, #0x8]
71024e56a4  mov x1,x20
71024e56a8  bl 0x710328ee30
71024e56ac  cmp w0,#0x1f
71024e56b0  b.hi 0x71024e56cc
71024e56b4  ldr x8,[x22]
71024e56b8  ldr w10,[x8]
71024e56bc  mov w9,#0x1
71024e56c0  lsl w9,w9,w0
71024e56c4  orr w9,w10,w9
71024e56c8  str w9,[x8]
71024e56cc  adrp x8,0x710532f000
71024e56d0  ldr x8,[x8, #0x8d0]
71024e56d4  ldr x0,[x8, #0x8]
71024e56d8  bl 0x71033147c0
71024e56dc  mov x18,x24
71024e56e0  b 0x71024e2c64
71024e56e4  str xzr,[sp, #0x170]
71024e56e8  strb wzr,[sp, #0x180]
71024e56ec  str x8,[sp, #0x170]
71024e56f0  add x8,x8,#0x38
71024e56f4  ldaxr w9,[x8]
71024e56f8  add w9,w9,#0x1
71024e56fc  stlxr w10,w9,[x8]
71024e5700  cbnz w10,0x71024e56f4
71024e5704  strb wzr,[sp, #0x180]
71024e5708  str x24,[sp, #0x168]
71024e570c  ldr x8,[x19, #0x1b98]
71024e5710  ldr x9,[x19, #0x1ba0]
71024e5714  ldr x10,[x19, #0x1ba8]
71024e5718  add x0,sp,#0x160
71024e571c  str x8,[x23]
71024e5720  stp x9,x10,[x23, #0x8]
71024e5724  bl 0x71024d15d0
71024e5728  ldr x8,[sp, #0x170]
71024e572c  str x20,[sp, #0x168]
71024e5730  cbz x8,0x71024e576c
71024e5734  adrp x9,0x7106dd5000
71024e5738  ldrb w9,[x9, #0x3a8]
71024e573c  cmp w9,#0x1
71024e5740  b.ne 0x71024e576c
71024e5744  adrp x10,0x7106dd5000
71024e5748  ldr w9,[sp, #0x178]
71024e574c  ldr w10,[x10, #0x3ac]
71024e5750  cmp w9,w10
71024e5754  b.ne 0x71024e576c
71024e5758  ldr wzr,[x8, #0x38]!
71024e575c  ldaxr w9,[x8]
71024e5760  sub w9,w9,#0x1
71024e5764  stlxr w10,w9,[x8]
71024e5768  cbnz w10,0x71024e575c
71024e576c  ldp x27,x26,[sp, #0xf8]
71024e5770  ldr x28,[sp, #0xf0]
71024e5774  ldr x18,[sp, #0x28]
71024e5778  mov w10,#0x17e8
71024e577c  tbnz w0,#0x0,0x71024e304c
71024e5780  ldr x8,[sp, #0x40]
71024e5784  mov w23,#0x9
71024e5788  str x8,[sp, #0xe0]
71024e578c  b 0x71024e2e38
71024e5790  bl 0x71039c2650
71024e5794  add x0,sp,#0x140
71024e5798  bl 0x71039c1330
71024e579c  add x0,sp,#0x140
71024e57a0  bl 0x71039c0c00
