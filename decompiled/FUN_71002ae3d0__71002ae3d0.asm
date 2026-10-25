// addr:      71002ae3d0
// offset:    0x2ae3d0
// name:      FUN_71002ae3d0
// mangled:   
// size:      524

71002ae3d0  sub sp,sp,#0xf0
71002ae3d4  stp x24,x23,[sp, #0xb0]
71002ae3d8  stp x22,x21,[sp, #0xc0]
71002ae3dc  stp x20,x19,[sp, #0xd0]
71002ae3e0  stp x29,x30,[sp, #0xe0]
71002ae3e4  add x29,sp,#0xe0
71002ae3e8  mov x20,x0
71002ae3ec  add x0,sp,#0x40
71002ae3f0  mov x22,x3
71002ae3f4  mov x23,x2
71002ae3f8  mov x19,x1
71002ae3fc  bl 0x71001e6720
71002ae400  adrp x8,0x71052a4000
71002ae404  ldr x8,[x8, #0xda8]
71002ae408  adrp x24,0x71052a4000
71002ae40c  ldrb w8,[x8]
71002ae410  ldr x24,[x24, #0xdb0]
71002ae414  add x21,x24,#0x28
71002ae418  cbz w8,0x71002ae454
71002ae41c  adrp x8,0x71052a4000
71002ae420  ldr x8,[x8, #0xdb8]
71002ae424  ldr x0,[x8]
71002ae428  bl 0x7101717960
71002ae42c  ldr w8,[x0]
71002ae430  cbz w8,0x71002ae454
71002ae434  ldr x10,[x24, #0xa0]
71002ae438  ldp x9,x10,[x10]
71002ae43c  sub x10,x10,x9
71002ae440  asr x10,x10,#0x3
71002ae444  cmp x10,x8
71002ae448  b.ls 0x71002ae46c
71002ae44c  ldr x8,[x9, x8, LSL #0x3]
71002ae450  add x21,x8,#0x20
71002ae454  ldr x8,[x21]
71002ae458  cbz x8,0x71002ae484
71002ae45c  ldr x8,[x8, #0x10]
71002ae460  cbz x8,0x71002ae484
71002ae464  ldr x21,[x8, #0x10]
71002ae468  b 0x71002ae488
71002ae46c  adrp x0,0x71042c4000
71002ae470  add x0,x0,#0x35f
71002ae474  mov w1,#0x47
71002ae478  orr w2,wzr,#0xe0000003
71002ae47c  mov w3,wzr
71002ae480  bl 0x71001b1300
71002ae484  mov x21,xzr
71002ae488  ldr x8,[x21, #0x78]!
71002ae48c  ldr x8,[x8, #0x10]
71002ae490  mov x0,x21
71002ae494  blr x8
71002ae498  ldrh w1,[x20, #0x48]
71002ae49c  add x0,sp,#0x40
71002ae4a0  mov w2,#0x1
71002ae4a4  bl 0x710022b480
71002ae4a8  add x0,sp,#0x40
71002ae4ac  mov x1,x19
71002ae4b0  bl 0x710022b390
71002ae4b4  tbz w0,#0x0,0x71002ae4f8
71002ae4b8  add x0,sp,#0x40
71002ae4bc  mov w1,#0x1
71002ae4c0  bl 0x710022b400
71002ae4c4  add x0,sp,#0x40
71002ae4c8  mov x1,x23
71002ae4cc  bl 0x71002ae880
71002ae4d0  ldrb w8,[sp, #0x48]
71002ae4d4  cbz w8,0x71002ae504
71002ae4d8  mov w8,#0xa
71002ae4dc  movk w8,#0x8001, LSL #16
71002ae4e0  add x0,sp,#0x28
71002ae4e4  add x1,sp,#0x24
71002ae4e8  str w8,[sp, #0x24]
71002ae4ec  bl 0x71001b4200
71002ae4f0  add x1,sp,#0x28
71002ae4f4  b 0x71002ae534
71002ae4f8  mov w22,wzr
71002ae4fc  mov w23,wzr
71002ae500  b 0x71002ae544
71002ae504  add x0,sp,#0x40
71002ae508  mov x1,x22
71002ae50c  bl 0x71002aeb90
71002ae510  ldrb w8,[sp, #0x48]
71002ae514  cbz w8,0x71002ae590
71002ae518  mov w8,#0xa
71002ae51c  movk w8,#0x8001, LSL #16
71002ae520  add x0,sp,#0x8
71002ae524  add x1,sp,#0x24
71002ae528  str w8,[sp, #0x24]
71002ae52c  bl 0x71001b4200
71002ae530  add x1,sp,#0x8
71002ae534  mov x0,x19
71002ae538  bl 0x71001d0c90
71002ae53c  mov w23,wzr
71002ae540  mov w22,#0x1
71002ae544  ldr x8,[x21]
71002ae548  ldr x8,[x8, #0x20]
71002ae54c  mov x0,x21
71002ae550  blr x8
71002ae554  cbz w23,0x71002ae56c
71002ae558  add x2,sp,#0x40
71002ae55c  mov x0,x20
71002ae560  mov x1,x19
71002ae564  bl 0x710022a7f0
71002ae568  mov w22,w0
71002ae56c  add x0,sp,#0x40
71002ae570  bl 0x71001e6910
71002ae574  and w0,w22,#0x1
71002ae578  ldp x29,x30,[sp, #0xe0]
71002ae57c  ldp x20,x19,[sp, #0xd0]
71002ae580  ldp x22,x21,[sp, #0xc0]
71002ae584  ldp x24,x23,[sp, #0xb0]
71002ae588  add sp,sp,#0xf0
71002ae58c  ret
71002ae590  adrp x8,0x71052a8000
71002ae594  adrp x9,0x71052a8000
71002ae598  ldr x8,[x8, #0x938]
71002ae59c  ldr x9,[x9, #0x940]
71002ae5a0  str x9,[x8]
71002ae5a4  ldrb w8,[x20, #0x70]
71002ae5a8  cbz w8,0x71002ae5c4
71002ae5ac  mov w1,#0x10
71002ae5b0  mov x0,x20
71002ae5b4  bl 0x710022b500
71002ae5b8  tbz w0,#0x0,0x71002ae5c4
71002ae5bc  mov w23,#0x1
71002ae5c0  b 0x71002ae544
71002ae5c4  add x2,sp,#0x40
71002ae5c8  mov x0,x20
71002ae5cc  mov x1,x19
71002ae5d0  bl 0x710022a7f0
71002ae5d4  mov w22,w0
71002ae5d8  b 0x71002ae4fc
