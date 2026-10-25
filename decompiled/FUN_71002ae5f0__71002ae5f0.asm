// addr:      71002ae5f0
// offset:    0x2ae5f0
// name:      FUN_71002ae5f0
// mangled:   
// size:      524

71002ae5f0  sub sp,sp,#0xf0
71002ae5f4  stp x24,x23,[sp, #0xb0]
71002ae5f8  stp x22,x21,[sp, #0xc0]
71002ae5fc  stp x20,x19,[sp, #0xd0]
71002ae600  stp x29,x30,[sp, #0xe0]
71002ae604  add x29,sp,#0xe0
71002ae608  mov x20,x0
71002ae60c  add x0,sp,#0x40
71002ae610  mov x22,x3
71002ae614  mov x23,x2
71002ae618  mov x19,x1
71002ae61c  bl 0x71001e6720
71002ae620  adrp x8,0x71052a4000
71002ae624  ldr x8,[x8, #0xda8]
71002ae628  adrp x24,0x71052a4000
71002ae62c  ldrb w8,[x8]
71002ae630  ldr x24,[x24, #0xdb0]
71002ae634  add x21,x24,#0x28
71002ae638  cbz w8,0x71002ae674
71002ae63c  adrp x8,0x71052a4000
71002ae640  ldr x8,[x8, #0xdb8]
71002ae644  ldr x0,[x8]
71002ae648  bl 0x7101717960
71002ae64c  ldr w8,[x0]
71002ae650  cbz w8,0x71002ae674
71002ae654  ldr x10,[x24, #0xa0]
71002ae658  ldp x9,x10,[x10]
71002ae65c  sub x10,x10,x9
71002ae660  asr x10,x10,#0x3
71002ae664  cmp x10,x8
71002ae668  b.ls 0x71002ae68c
71002ae66c  ldr x8,[x9, x8, LSL #0x3]
71002ae670  add x21,x8,#0x20
71002ae674  ldr x8,[x21]
71002ae678  cbz x8,0x71002ae6a4
71002ae67c  ldr x8,[x8, #0x10]
71002ae680  cbz x8,0x71002ae6a4
71002ae684  ldr x21,[x8, #0x10]
71002ae688  b 0x71002ae6a8
71002ae68c  adrp x0,0x71042c4000
71002ae690  add x0,x0,#0x35f
71002ae694  mov w1,#0x47
71002ae698  orr w2,wzr,#0xe0000003
71002ae69c  mov w3,wzr
71002ae6a0  bl 0x71001b1300
71002ae6a4  mov x21,xzr
71002ae6a8  ldr x8,[x21, #0x78]!
71002ae6ac  ldr x8,[x8, #0x10]
71002ae6b0  mov x0,x21
71002ae6b4  blr x8
71002ae6b8  ldrh w1,[x20, #0x48]
71002ae6bc  add x0,sp,#0x40
71002ae6c0  mov w2,#0x1
71002ae6c4  bl 0x710022b480
71002ae6c8  add x0,sp,#0x40
71002ae6cc  mov x1,x19
71002ae6d0  bl 0x710022b390
71002ae6d4  tbz w0,#0x0,0x71002ae718
71002ae6d8  add x0,sp,#0x40
71002ae6dc  mov w1,#0x2
71002ae6e0  bl 0x710022b400
71002ae6e4  add x0,sp,#0x40
71002ae6e8  mov x1,x23
71002ae6ec  bl 0x71002aed10
71002ae6f0  ldrb w8,[sp, #0x48]
71002ae6f4  cbz w8,0x71002ae724
71002ae6f8  mov w8,#0xa
71002ae6fc  movk w8,#0x8001, LSL #16
71002ae700  add x0,sp,#0x28
71002ae704  add x1,sp,#0x24
71002ae708  str w8,[sp, #0x24]
71002ae70c  bl 0x71001b4200
71002ae710  add x1,sp,#0x28
71002ae714  b 0x71002ae754
71002ae718  mov w22,wzr
71002ae71c  mov w23,wzr
71002ae720  b 0x71002ae764
71002ae724  add x0,sp,#0x40
71002ae728  mov x1,x22
71002ae72c  bl 0x71002aee40
71002ae730  ldrb w8,[sp, #0x48]
71002ae734  cbz w8,0x71002ae7b0
71002ae738  mov w8,#0xa
71002ae73c  movk w8,#0x8001, LSL #16
71002ae740  add x0,sp,#0x8
71002ae744  add x1,sp,#0x24
71002ae748  str w8,[sp, #0x24]
71002ae74c  bl 0x71001b4200
71002ae750  add x1,sp,#0x8
71002ae754  mov x0,x19
71002ae758  bl 0x71001d0c90
71002ae75c  mov w23,wzr
71002ae760  mov w22,#0x1
71002ae764  ldr x8,[x21]
71002ae768  ldr x8,[x8, #0x20]
71002ae76c  mov x0,x21
71002ae770  blr x8
71002ae774  cbz w23,0x71002ae78c
71002ae778  add x2,sp,#0x40
71002ae77c  mov x0,x20
71002ae780  mov x1,x19
71002ae784  bl 0x710022a7f0
71002ae788  mov w22,w0
71002ae78c  add x0,sp,#0x40
71002ae790  bl 0x71001e6910
71002ae794  and w0,w22,#0x1
71002ae798  ldp x29,x30,[sp, #0xe0]
71002ae79c  ldp x20,x19,[sp, #0xd0]
71002ae7a0  ldp x22,x21,[sp, #0xc0]
71002ae7a4  ldp x24,x23,[sp, #0xb0]
71002ae7a8  add sp,sp,#0xf0
71002ae7ac  ret
71002ae7b0  adrp x8,0x71052a8000
71002ae7b4  adrp x9,0x71052a8000
71002ae7b8  ldr x8,[x8, #0x938]
71002ae7bc  ldr x9,[x9, #0x948]
71002ae7c0  str x9,[x8, #0x8]
71002ae7c4  ldrb w8,[x20, #0x70]
71002ae7c8  cbz w8,0x71002ae7e4
71002ae7cc  mov w1,#0x10
71002ae7d0  mov x0,x20
71002ae7d4  bl 0x710022b500
71002ae7d8  tbz w0,#0x0,0x71002ae7e4
71002ae7dc  mov w23,#0x1
71002ae7e0  b 0x71002ae764
71002ae7e4  add x2,sp,#0x40
71002ae7e8  mov x0,x20
71002ae7ec  mov x1,x19
71002ae7f0  bl 0x710022a7f0
71002ae7f4  mov w22,w0
71002ae7f8  b 0x71002ae71c
